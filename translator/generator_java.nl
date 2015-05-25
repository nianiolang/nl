###
# (c) Atinea Sp. z o.o.
# Stamp: MBN 2014-10-16
###

use array;
use boolean_t;
use string_utils;
use nl;
use nlasm;
use ov;
use ptd;
use string;

def generator_java::generate(nlasm : @nlasm::result_t) : ptd::sim() {
	var result = '';
	result .= print_package_name();
	result .= print_imports(nlasm);
	result .= print_class_begin(nlasm->module_name);
	result .= print_function_or_singleton(function, nlasm->module_name) fora var function (nlasm->functions);
	result .= print_class_end();
	return result;
}

def print_package_name() {
	return 'package com.atinea.nianio;' . string::lf() . string::lf();
}

def print_imports(asm : @nlasm::result_t) {
	var result = '';
	result .= 'import java.util.Map;' . string::lf();
	result .= 'import java.util.HashMap;' . string::lf();
	fora var import (asm->imports) {
		result .= 'import com.atinea.nianio.'. get_class_name(import) .';' . string::lf();
	}
	return result;
}

def get_class_name(module_name : ptd::sim()) {
	return module_name.'_NL';
}

def print_class_begin(module_name : ptd::sim()) {
	return 'public class ' . get_class_name(module_name) . ' {'. string::lf();
}

def print_class_end() {
	return string::lf().'}';
}

def get_function_name(function : @nlasm::function_t) {
	var suffix = '';
	match (function->access) case :pub {
	} case :priv {
		suffix = '_priv';
	}
	return (function->name).suffix.'_nl';
}

def get_function_declaration(function : @nlasm::function_t) {
	var result = '';
	match (function->access) case :pub {
		result = 'public';
	} case :priv {
		result = 'private';
	}
	return result . ' static Imm ' . get_function_name(function);
}

def escape_string(string) : ptd::sim() {
	string = string::replace(string, '\', '\\');
	string = string::replace(string, '"', '\"');
	string = string::replace(string, string::chr(13).string::lf(), '\r\n');
	return string::replace(string, string::lf(), '\n');
}
def is_singleton_use_function(function : @nlasm::function_t) : @boolean_t::type {
	return false if(array::len(function->args_type) > 0);
	return true if function->annotation is :math;
	var was_singleton = false;
	var dest;
	fora var cmd (function->commands) {
		var command = cmd->cmd;
		if(command is :call){
			var call = command as :call;
			continue unless(call->fun_name eq 'sigleton_do_not_use_without_approval');
			continue unless(call->mod eq 'singleton');
			was_singleton = true;
			dest = call->dest;
		} elsif(command is :return){
			return false unless was_singleton;
			var ret = command as :return;
			return false unless(ret is :val);
			return ret as :val eq dest;
		} elsif(command is :prt_lbl) {
		} elsif(command is :clear) {
		} else {
			return false if(was_singleton);
		}
	}
	return false;
}


def print_function_or_singleton(function : @nlasm::function_t, module_name : ptd::sim()) : ptd::sim() {
	if(is_singleton_use_function(function)){
		var sin_fun = function;
		sin_fun->name = 'SINGLETON_' . function->name ;
		var sin_name = get_function_name(sin_fun);
		var var_name = 'value__singleton__' . sin_name;

		var ret = print_function(sin_fun, module_name);
		
		ret .= 'private static Imm '.var_name.' = null;' .string::lf().
		get_function_declaration(function) .'() throws Exception {
		'	if ('.var_name.' == null) {
		'		'.var_name.' = '. sin_name .'();
		'	}
		'	return '.var_name.';
		'}';
		return ret;
	} else {
		return print_function(function, module_name);
	}
	
}
def print_function(function : @nlasm::function_t, module_name : ptd::sim()) : ptd::sim() {
	var result = string::lf().get_function_declaration(function).'(';
	rep var i (array::len(function->args_type)) {
		result .= ', ' unless i == 0;
		result .= 'ImmRef ___arg__'.i;
	}
	result .= ') throws Exception {'.string::lf();
	rep var i (array::len(function->args_type)) {
		match (function->args_type[i]) case :val {
			result .= 'ImmRef ___nl__'.i.' = new ImmRef(___arg__'.i.print_getter().');';
		} case :ref {
			result .= 'ImmRef ___nl__'.i.' = ___arg__'.i.';';
		}
	}
	result .= string::lf();
	for (var i = array::len(function->args_type); i < function->reg_size; ++i) {
		result .= 'ImmRef ___nl__'.i.' = new ImmRef(null);'.string::lf();
	}
	result .= 'Map<ImmString, Imm> '.print_hash_name().';'. string::lf();
	result .= 'String label = ""; while (true) { switch (label) { default: '.string::lf();
	result .= print_command(module_name, command) fora var command (function->commands);
	return result.'}}}'.string::lf();
}

def print_command(module : ptd::sim(), command : @nlasm::cmd_t) {
	var result;
	match (command->cmd) case :arr_decl(var arr_decl) {
		result = print_register_setter(arr_decl->dest, print_arr(arr_decl->src)).';';
	} case :hash_decl(var hash_decl) {
		result = print_hash(hash_decl);
		result .= print_register_setter(hash_decl->dest, 'new ImmMap('.print_hash_name().')').';';
	} case :call(var call) {
		result = print_register_setter(call->dest, print_call(module, call->mod, call->fun_name, call->args)).';';
	} case :func(var func) {
		result = print_const_hash(func->dest, {module => get_class_name(func->module), name => func->name.'_nl'}).';';
	} case :una_op(var una_op) {
		result = print_una_op(una_op);
	} case :bin_op(var bin_op) {
		result = print_bin_op(bin_op);
	} case :ov_is(var ov_is) {
		result = print_register_setter(ov_is->dest, 'c_rt_lib_NL.ov_is_nl('.print_register(ov_is->src).', new ImmRef(new ImmString("'.escape_string(ov_is->type).'")))').';';
	} case :ov_as(var ov_as) {
		result = print_register_setter(ov_as->dest, 'c_rt_lib_NL.ov_as_nl('.print_register(ov_as->src).', new ImmRef(new ImmString("'.escape_string(ov_as->type).'")))').';';
	} case :return(var return_i) {
		result = print_return(return_i);
	} case :die(var die_i) {
		result = 'c_rt_lib_NL.die_nl();';
	} case :move(var move) {
		result = print_register_setter(move->dest, print_register_getter(move->src)).';';
	} case :load_const(var const){
		result = print_register_setter(const->dest, print_const_value(print_register(const->dest), const->val)).';';
	} case :get_frm_idx(var get_frm_idx) {
		result = '((ImmArray)'.print_register_getter(get_frm_idx->src).')'.print_getter();
		result .= '[((ImmDouble)('.print_register_getter(get_frm_idx->idx).'))'.print_getter(). print_int_value() .']';
		result = print_register_setter(get_frm_idx->dest, result).';';
	} case :set_at_idx(var set_at_idx) {
		result = print_register_setter(set_at_idx->src, 'c_rt_lib_NL.clone_nl('.print_register_getter(set_at_idx->src).')').';'.string::lf();
		result .= '((ImmArray)'.print_register_getter(set_at_idx->src).')'.print_getter().'[';
		result .= '((ImmDouble)'.print_register_getter(set_at_idx->idx).')'.print_getter().print_int_value().'] = '.print_register_getter(set_at_idx->val).';';
	} case :get_val(var get_val) {
		result = print_register_setter(get_val->dest, print_get_hash_value(get_val)).';';
	} case :set_val(var set_val) {
		result = print_register_setter(set_val->src, 'c_rt_lib_NL.clone_nl('.print_register_getter(set_val->src).')').';'.string::lf();
		result .= print_set_hash_value(set_val).';';
	} case :ov_mk(var ov_mk) {
		result = print_ov_mk(ov_mk);
	} case :prt_lbl(var prt_lbl) {
		result = 'case "'.prt_lbl.'":';
	} case :if_goto(var if_goto) {
		result = 'if (c_rt_lib_NL.check_true_native_nl('.print_register(if_goto->src).')) {'.print_goto(if_goto->dest).'}';
	} case :goto(var goto) {
		result = print_goto(goto);
	} case :clear(var reg) {
		result = print_register_setter(reg, 'null').';';
	}
	return '//line ' . command->debug->nast_debug->begin->line . string::lf() . result.string::lf();
}

def print_arr(arr) : ptd::sim() {
	var result = 'new ImmArray(new Imm[';
	if (array::len(arr) == 0) {
		result .= '0]';
	} else {
		result .= '] {';
		result .= print_register_getter(reg).',' fora var reg (arr);
		result .= '}';
	}
	return result . ')';
}

def print_bin_op(bin_op) : ptd::sim() {
	var result = '';
	if (bin_op->op eq '>=' || bin_op->op eq '<=' || bin_op->op eq '<' || bin_op->op eq '>' || bin_op->op eq '=='
		|| bin_op->op eq '!=') {
		result .= 'c_rt_lib_NL.native_to_nl_nl(' . print_imm_double_operation(bin_op) .' )';
	} elsif (bin_op->op eq 'eq' || bin_op->op eq 'ne') {
		result .= 'c_rt_lib_NL.native_to_nl_nl(';
		if (bin_op->op eq 'ne') {
			result .= '!';
		}
		result .= print_register_getter(bin_op->left).'.toString().equals(';
		result .= print_register_getter(bin_op->right).'.toString()))';
	} elsif (bin_op->op eq '.') {
		result .= 'new ImmString('.print_register_getter(bin_op->left).'.toString() + '.print_register_getter(bin_op->right).'.toString())';
	} else {
		result .= 'new ImmDouble('.print_imm_double_operation(bin_op).')';
	}
	return print_register_setter(bin_op->dest, result).';';
}

def print_imm_double_operation(bin_op) : ptd::sim() {
	var result = print_register_as_number(bin_op->left);
	if (bin_op->op eq '==' || bin_op->op eq '!=') {
		result .= '.compareTo('. print_register_as_number(bin_op->right).') ' . bin_op->op .' 0';
	} else {
		result .= bin_op->op .print_register_as_number(bin_op->right);
	}
	return result;
}

def print_register_as_number(value) : ptd::sim() {
	return '(Double.valueOf(String.valueOf('.print_register_getter(value). print_getter().')))';
}

def print_int_value() : ptd::sim() {
	return '.intValue()';
}

def print_call(module : ptd::sim(), cmodule : ptd::sim(), cname : ptd::sim(), cargs) : ptd::sim() {
	cname = cname.'_priv' if cmodule eq '';
	cmodule = module if cmodule eq '';
	var result = get_class_name(cmodule) . '.' .(cname).'_nl(';
	var i = 0;
	fora var arg (cargs) {
		result .= ',' unless i == 0;
		++i;
		match (arg) case :ref(var reg) {
			result .= print_register(reg);
		} case :val(var reg) {
			result .= print_register(reg);
		}
	}
	return result.')';
}

def print_const_arr(reg, arr) : ptd::sim() {
	var result = 'new Imm[] {';
	result .= print_const_value(reg, val) . ',' fora var val (arr);
	return result.'}';
}

def print_const_hash(reg, hash) : ptd::sim() {
	var result = print_hash_name() . ' = new HashMap<ImmString, Imm>();' . string::lf();
	result .= print_hash_name().'.put(new ImmString("'.escape_string(key).'"),'.print_const_value(reg, val).');' . string::lf() forh var key, var val (hash);
	return result.print_register_setter(reg, 'new ImmMap('.print_hash_name().')');
}

def print_const_ov(reg, variant) : ptd::sim() {
	var result = '';
	if (ov::has_value(variant)) {
		result = 'new OV("' . escape_string(ov::get_element(variant)) . '", ' . print_const_value(reg, ov::get_value(variant)) . ')';
	} else {
		result = 'new OV("' . escape_string(ov::get_element(variant)) . '", null)';
	}
	return result;
}

def print_const_value(reg, value) {
	if (nl::is_sim(value) && (string_utils::is_integer(ptd::ensure(ptd::sim(), value)) || 
		string_utils::is_float(ptd::ensure(ptd::sim(), value)))) {
		return 'new ImmDouble('. value . ')';
	} elsif (nl::is_sim(value)) {
		return 'new ImmString("'.escape_string(value).'")';
	} elsif (nl::is_array(value)) {	
		return print_const_arr(reg, value);
	} elsif (nl::is_hash(value)) {
		return print_const_hash(reg, value);
	} elsif (nl::is_variant(value)) {
		return print_const_ov(reg, value);
	} else {
		die;
	}
}

def print_goto(goto : ptd::sim()) : ptd::sim() {
	return 'if (true) {label = "'.goto.'"; continue; }';
}

def print_hash(hash) : ptd::sim() {
	var result = print_hash_name() . ' = new HashMap<ImmString, Imm>();' . string::lf();
	result .= print_hash_name().'.put(new ImmString("'.escape_string(map->key).'"),'.print_register_getter(map->val).');' . string::lf() fora var map (hash->src);
	return result;
}

def print_hash_name() : ptd::sim() {
	return '__function_map';
}

def print_get_hash_value(get_val) {
	return '((ImmMap)'.print_register_getter(get_val->src).')'.print_getter().'.get(new ImmString("'.escape_string(get_val->key).'"))';
}

def print_set_hash_value(set_val) {
	var result = '((ImmMap)'.print_register_getter(set_val->src).')'.print_getter().'.put(new ImmString("'.escape_string(set_val->key).'"), ';
	result .= print_register_getter(set_val->val) . ')';
	return result;
}

def print_ov_mk(ov_mk) : ptd::sim() {
	var result = '';
	if (ov_mk->src is :emp && (ov_mk->name eq 'TRUE')) {
		result = 'c_rt_lib_NL.get_true_nl()';
	} elsif (ov_mk->src is :emp && (ov_mk->name eq 'FALSE')) {
		result = 'c_rt_lib_NL.get_false_nl()';
	} else {
		match (ov_mk->src) case :arg(var arg) {
			result = 'c_rt_lib_NL.ov_mk_arg_nl(new ImmString("'.escape_string(ov_mk->name).'"), '.print_register(arg).')';
		} case :emp {
			result = 'c_rt_lib_NL.ov_mk_none_nl(new ImmString("'.escape_string(ov_mk->name).'"))';
		}
	}
	return print_register_setter(ov_mk->dest, result).';';
}

def print_register(register) : ptd::sim() {
	return '___nl__'.register;
}

def print_register_getter(register) : ptd::sim() {
	return print_register(register).print_getter();
}

def print_getter() : ptd::sim() {
	return '.getValue()';
}

def print_register_setter(register, value) : ptd::sim() {
	return value.'' if register eq '';
	return print_register(register).'.setValue(' . value . ')';
}

def print_return(return_i) : ptd::sim() {
	var result = '';
	match (return_i) case :val(var val) {
		result = 'return '.print_register_getter(val).';';
	} case :emp {
		result = 'return null;';
	}
	return 'if(true) '.result;
}

def print_una_op(una_op) : ptd::sim() {
	var result = '';
	if (una_op->op eq '!') {
		result .= 'c_rt_lib_NL.native_to_nl_nl(!c_rt_lib_NL.check_true_native_nl('.print_register(una_op->src).'))';
	} else {
		result .= 'new ImmDouble('.una_op->op.'((ImmDouble)'.print_register_getter(una_op->src).')'.print_getter().')';
	}
	return  print_register_setter(una_op->dest, result).';';
}

