###
# (c) Atinea Sp. z o.o.
###


use array;
use nl;
use string;
use string_utils;
use boolean_t;
use ov;
use nlasm;
use ptd;

def get_namespace_name() {
	return '_namespace';
}

def generator_js::generate(nlasm : @nlasm::result_t, namespace : ptd::sim()) : ptd::sim() {
	var result = '';
	var consts = {arr => [], name => '__const_'};
	result .= print_function_or_singleton(function, nlasm->module_name, ref consts) fora var function (nlasm->functions);
	result .= 'var ' . consts->name . ' = [];';
	var no = 0;
	fora var el (consts->arr) {
		result .= consts->name . '[' . no . '] = ' . print_const_value(el) . ';';
		++no;
	}
	return 'var ' . namespace . ';
	'(function(' . get_namespace_name() . ' , undefined) {
	'' . get_namespace_name() . '.' . nlasm->module_name . ' = {};
	'' . result . '
	'})(' . namespace . ' = ' . ' ' . namespace . ' || {}); ';
}

def print_const_value_aggr(const_val, ref consts) : ptd::sim() {
	array::push(ref consts->arr, const_val);
	return consts->name . '[' . (array::len(consts->arr) - 1) . ']';
}

def get_function_name(function : @nlasm::function_t, module_name : ptd::sim()) {
	match (function->access) case :pub {
		return module_name . '.' . function->name;
	} case :priv {
		return '__priv_' . function->name;
	}
}

def get_function_call_name(function : @nlasm::function_t, module_name : ptd::sim()) {
	var cmodule = ''; match (function->access) case :pub {
		cmodule = module_name;
	} case :priv {
		cmodule = '';
	}
	return get_function_call_name_raw(function->name, cmodule);
}

def get_function_call_name_raw(function_name : ptd::sim(), module_name : ptd::sim()) {
	if (module_name eq '') {
		return '__priv_' . function_name;
	} else {
		return get_namespace_name() . '.' . module_name . '.' . function_name;
	}
}

def escape_string(string) : ptd::sim() {
	string = string::replace(string, '\', '\\');
	string = string::replace(string, '"', '\"');
	string = string::replace(string, string::lf(), '\n');
	string = string::replace(string, string::r(), '\r');
	string = string::replace(string, string::chr(0), '\0');
	string = string::replace(string, string::tab(), '\t');

	return '"' . string::replace(string, string::lf(), '\n') . '"';
}

def print_str_imm(string : ptd::sim(), ref consts) : ptd::sim() {
	return print_const_value_aggr(string, ref consts);
}

def is_singleton_use_function(function : @nlasm::function_t) : @boolean_t::type {
	return false if (array::len(function->args_type) > 0);
	return true if function->annotation is :math;
	var was_singleton = false;
	var dest;
	fora var cmd (function->commands) {
		var command = cmd->cmd;
		if (command is :call) {
			var call = command as :call;
			continue unless (call->fun_name eq 'sigleton_do_not_use_without_approval');
			continue unless (call->mod eq 'singleton');
			was_singleton = true;
			dest = call->dest;
		} elsif (command is :return) {
			return false unless was_singleton;
			var ret = command as :return;
			return false unless (ret is :val);
			return ret as :val eq dest;
		} elsif (command is :prt_lbl) {
		} elsif (command is :clear) {
		} else {
			return false if (was_singleton);
		}
	}
	return false;
}

def print_function_or_singleton(function : @nlasm::function_t, module_name : ptd::sim(), ref consts) : ptd::sim() {
	var ret = '';
	if (is_singleton_use_function(function)) {
		var fun_name = get_function_name(function, module_name);
		var sin_fun = function;
		sin_fun->name = '__singleton_function_' . function->name;
		sin_fun->access = :priv;
		var var_name = '__singleton_value_' . get_function_name(sin_fun, module_name);
		ret = print_function(sin_fun, module_name, ref consts);
		ret .= 'var ' . var_name . ';' . string::lf();
		match (function->access) case :pub {
			ret .= get_namespace_name() . '.' . fun_name . ' = function() {';
		} case :priv {
			ret .= 'function ' . fun_name . '() {';
		}
		ret .= 
			'	if (' . var_name . ' === undefined) {
			'		' . var_name . ' = ' . get_function_call_name(sin_fun, module_name) . '();
			'	}
			'	return ' . var_name . ';
			'}';
	} else {
		ret = print_function(function, module_name, ref consts);
	}

	ret .= string::lf();
	match (function->access) case :pub {
		ret .= get_namespace_name() . '.' . module_name . '.__dyn_' . function->name . ' = function(arr) {' . string::lf();
		var i = 0;
		var call = '';
		var after = '';
		fora var arg (function->args_type) {
			call .= ', ' unless i == 0;
			call .= 'arg' . i;
			ret .= 'var arg' . i . ' = ';
			match (arg) case :ref {
				ret .= 'new ' . imm_call('ref') . '(' . 'arr.value.get_index_int(' . i . '));';
				after .= 'arr.value = arr.value.set_index_int(' . i . ', arg' . i . '.value);' . string::lf();
			} case :val {
				ret .= 'arr.value.get_index_int('. i . ');';
			}
			ret .= string::lf();
			++i;
		}
		ret .= 'var ret = ' . get_function_call_name(function, module_name) . '(' . call . ')' . string::lf();
		ret .= after;
		ret .= 'return ret;' . string::lf();
		ret .= '}'  . string::lf();
	} case :priv {
		ret .= string::lf();
	}
	return ret;
}

def print_function(function : @nlasm::function_t, module_name : ptd::sim(), ref consts) : ptd::sim() {
	var result = string::lf();
	match (function->access) case :pub {
		result .= get_namespace_name() . '.' . get_function_name(function, module_name) . ' = function(';
	} case :priv {
		result .= 'function ' . get_function_name(function, module_name) . '(';
	}
	rep var i (array::len(function->args_type)) {
		result .= ', ' unless i == 0;
		result .= '___arg__' . i;
	}
	result .= ') {' . string::lf();
	rep var i (array::len(function->args_type)) {
		match (function->args_type[i]) case :val {
			result .= 'var ___nl__' . i . ' = ___arg__' . i . ';';
		} case :ref {
			result .= 'var ___nl__' . i . ' = ___arg__' . i . '.value;';
		}
		result .= get_namespace_name() . '.check_null(___nl__' . i . ');';
	}
	result .= string::lf();
	for(var i = array::len(function->args_type); i < function->reg_size; ++i) {
		result .= 'var ___nl__' . i . ' = null;' . string::lf();
	}
	result .= 'var label = null; while (1) { switch (label) { default: ' . string::lf();
	var call_counter = 0;
	result .= print_command(command, function->args_type, ref call_counter, ref consts) 
		fora var command (function->commands);
	return result . '}}}' . string::lf();
}

def print_command(command : @nlasm::cmd_t, fun_args : @nlasm::args_type, ref call_counter : ptd::sim(), ref consts) {
	var result;
	match (command->cmd) case :arr_decl(var arr_decl) {
		result = print_register_to_assign(arr_decl->dest) . print_arr(arr_decl->src) . ';';
	} case :hash_decl(var hash_decl) {
		result = print_register_to_assign(hash_decl->dest) . print_hash(hash_decl->src) . ';';
	} case :call(var call) {
		result = print_call(call->mod, call->fun_name, call->args, call->dest, ref call_counter);
	} case :func(var func) {
		result = print_register_to_assign(func->dest) . print_const_hash({module => func->module, name => func->name}) . 
			';';
	} case :una_op(var una_op) {
		result = print_una_op(una_op);
	} case :bin_op(var bin_op) {
		result = print_bin_op(bin_op, ref call_counter);
	} case :ov_is(var ov_is) {
		result = print_register_to_assign(ov_is->dest) . print_internal_call('c_rt_lib', 'ov_is', 
			[:reg(ov_is->src), :str(print_str_imm(ov_is->type, ref consts))], ref call_counter) . ';';
	} case :ov_as(var ov_as) {
		result = print_register_to_assign(ov_as->dest) . print_internal_call('c_rt_lib', 'ov_as', 
			[:reg(ov_as->src), :str(print_str_imm(ov_as->type, ref consts))], ref call_counter) . ';';
	} case :return(var return_i) {
		result = print_return(return_i, fun_args);
	} case :die(var die_i) {
		result = get_namespace_name() . '.nl_die();';
	} case :move(var move) {
		result = print_register_to_assign(move->dest) . print_register(move->src) . ';';
	} case :load_const(var const) {
		result = print_register_to_assign(const->dest) . print_const_value_aggr(const->val, ref consts) . ';';
	} case :get_frm_idx(var get_frm_idx) {
		result = print_register_to_assign(get_frm_idx->dest) . print_register(get_frm_idx->src) . '.get_index(' . 
			print_register(get_frm_idx->idx) . ');';
	} case :set_at_idx(var set_at_idx) {
		result = print_internal_call('c_rt_lib', 'set_ref_arr', [:ref(set_at_idx->src),
			:str(print_register(set_at_idx->idx)), :str(print_register(set_at_idx->val))], ref call_counter) . ';';
	} case :get_val(var get_val) {
		result = print_register_to_assign(get_val->dest) . print_internal_call('c_rt_lib', 'hash_get_value',
			[:str(print_register(get_val->src)), :str(print_str_imm(get_val->key, ref consts))], ref call_counter) . ';';
	} case :set_val(var set_val) {
		result = print_internal_call('c_rt_lib', 'hash_set_value', [:ref(set_val->src),
			:str(print_str_imm(set_val->key, ref consts)), :str(print_register(set_val->val))], ref call_counter) . ';';
	} case :ov_mk(var ov_mk) {
		result = print_ov_mk(ov_mk, ref consts, ref call_counter);
	} case :prt_lbl(var prt_lbl) {
		result = 'case ' . prt_lbl . ':';
	} case :if_goto(var if_goto) {
		result = 'if (' . print_int_call_sim('c_rt_lib', 'check_true_native', [if_goto->src]) . ') {' . print_goto(if_goto->dest) . 
			'}';
	} case :goto(var goto) {
		result = print_goto(goto);
	} case :clear(var reg) {
		result = print_register_to_assign(reg) . 'null;';
	}
	return '//line ' . command->debug->nast_debug->begin->line . string::lf() . result . string::lf();
}

def print_arr(arr) : ptd::sim() {
	var result = imm_call('arr') . '([';
	result .= print_register(reg) . ',' fora var reg (arr);
	return result . '])';
}

def imm_call(name : ptd::sim()) {
	return get_namespace_name() . '.imm_' . name;
}

def print_bin_op(bin_op : @nlasm::bin_op, ref call_counter : ptd::sim()) : ptd::sim() {
	var result = print_register_to_assign(bin_op->dest);
	if (bin_op->op eq '>=' || bin_op->op eq '<=' || bin_op->op eq '<' || bin_op->op eq '>' || bin_op->op eq '==' || 
		bin_op->op eq '!=') {
		var left = print_int_call_sim('c_rt_lib', 'imm_to_float', [bin_op->left]);
		var right = print_int_call_sim('c_rt_lib', 'imm_to_float', [bin_op->right]);
		return result . print_internal_call('c_rt_lib', 'native_to_nl', [:str(left . bin_op->op . right)], ref call_counter) . ';';
	} elsif (bin_op->op eq 'eq' || bin_op->op eq 'ne') {
		return result . print_int_call_sim('c_rt_lib', bin_op->op, [bin_op->left, bin_op->right]);
	} elsif (bin_op->op eq '.') {
		if (false && bin_op->left eq bin_op->dest) {
			return print_internal_call('c_rt_lib', 'concat_add', [:ref(ptd::ensure(ptd::sim(), bin_op->left)), :str(print_register(bin_op->right))], ref call_counter). ';';
		} else {
			return result . print_internal_call('c_rt_lib', 'concat', [
				:str(print_register(bin_op->left)), :str(print_register(bin_op->right))], ref call_counter) . ';';

		}
	} else {
		var left = print_int_call_sim('c_rt_lib', 'imm_to_float', [bin_op->left]);
		var right = print_int_call_sim('c_rt_lib', 'imm_to_float', [bin_op->right]);
		return result . imm_call('float') . '(' . left . bin_op->op . right . ');';
	}
}

def print_call(cmodule : ptd::sim(), cname : ptd::sim(), cargs,
		dest : @nlasm::reg_t, ref call_counter : ptd::sim()) : ptd::sim() {
	var result = print_register_to_assign(dest) . get_function_call_name_raw(cname, cmodule) . '(';
	var i = 0;
	var pre = '';
	var after = '';
	fora var arg (cargs) {
		result .= ',' unless i == 0;
		++i;
		match (arg) case :ref(var reg) {
		reg = ptd::ensure(ptd::sim(), reg);
			process_ref_reg(ref pre, ref result, ref after, reg, i, call_counter);
		} case :val(var reg) {
		result .= print_register(reg);
		}
	}
	++call_counter;
	return pre . result . ');' . after;
}

def process_ref_reg(ref pre : ptd::sim(), ref result : ptd::sim(), ref after : ptd::sim(), reg : ptd::sim(), i : ptd::sim(), call_counter) {
	var reg_name = 'call_' . call_counter . '_' . i;
	pre .= 'var ' . reg_name . ' = new ' . imm_call('ref') . '(' . print_register(reg) . ');';
	result .= reg_name;
	after .= print_register_to_assign(reg) . reg_name . '.value;'; 
	after .= reg_name . ' = null;';
}

def print_internal_call(module_name : ptd::sim(), fun_name : ptd::sim(), args : ptd::arr(ptd::var({ref => ptd::sim(), str => ptd::sim(), reg => @nlasm::reg_t})), 
		ref call_counter : ptd::sim()) : ptd::sim() {	
	var i = 0;
	var pre = '';
	var after = '';
	var result = get_namespace_name() . '.' . module_name . '.' . fun_name . '(';
	fora var arg (args) {
		result .= ',' unless i == 0;
		++i;
		match (arg) case :ref(var reg) {
			process_ref_reg(ref pre, ref result, ref after, reg, i, call_counter);
		} case :reg(var reg) {
			result .= print_register(reg);
		} case :str(var str) {
			result .= str;
		}
	}
	++call_counter;
	return pre . result . ');' . after;
}

def print_int_call_sim(mod_name : ptd::sim(), fun_name : ptd::sim(), args : ptd::arr(@nlasm::reg_t)) {
	var regs = [];
	fora var reg (args) {
		regs []= print_register(reg);
	}
	return get_namespace_name() . '.' . mod_name . '.' . fun_name . '(' . array::join(', ', regs) . ')';
}

def print_const_arr(arr) : ptd::sim() { 
	var result = imm_call('arr') . '([';
	result .= print_const_value(val) . ',' fora var val (arr);
	return result . '])';
}

def print_const_hash(hash) : ptd::sim() {
	var result = imm_call('hash') . '({';
	result .= '' . escape_string(key) . ':' . print_const_value(val) . ',' forh var key, var val (hash);
	return result . '})';
}

def print_const_ov(variant) : ptd::sim() {
	if (ov::has_value(variant)) {
		return imm_call('ov_js_str') . '(' . escape_string(ov::get_element(variant)) . ', ' . 
			print_const_value(ov::get_value(variant)) . ')';
	} else {
		return imm_call('ov_js_str') . '(' . escape_string(ov::get_element(variant)) . ', null)';
	}
}

def print_const_value(value) {
	if (nl::is_sim(value) && string_utils::is_integer(value . '') && 0 + value eq value) {
		return imm_call('int') . '(' . value . ')';
	} elsif (nl::is_sim(value)) {
		return imm_call('str') . '(' . escape_string(value) . ')';
	} elsif (nl::is_array(value)) {
		return print_const_arr(value);
	} elsif (nl::is_hash(value)) {
		return print_const_hash(value);
	} elsif (nl::is_variant(value)) {
		if ((value is :TRUE) && !ov::has_value(value)) {
			return print_int_call_sim('c_rt_lib', 'get_true', []);
		} elsif ((value is :FALSE) && !ov::has_value(value)) {
			return print_int_call_sim('c_rt_lib', 'get_false', []);
		} else {
			return print_const_ov(value);
		}
	} else {
		die;
	}
}

def print_goto(goto : ptd::sim()) : ptd::sim() {
	return 'label = ' . goto . '; continue;';
}

def print_hash(harr) : ptd::sim() {
	var result = imm_call('hash') . '({';
	result .= escape_string(map->key) . ':' . print_register(map->val) . ',' fora var map (harr);
	return result . '})';
}

def print_ov_mk(ov_mk : @nlasm::ov_mk_t, ref consts, ref call_counter : ptd::sim()) : ptd::sim() {
	var result = print_register_to_assign(ov_mk->dest);
	match (ov_mk->src) case :arg(var arg) {
		return result . print_internal_call('c_rt_lib', 'ov_mk_arg',
			[:str(print_const_value_aggr(ov_mk->name, ref consts)), :reg(arg)], ref call_counter) . ';';
	} case :emp {
		return result . print_const_value_aggr(ov::mk(ov_mk->name), ref consts);
	}
}

def print_register(register) : ptd::sim() {
	return '___nl__' . register;
}

def print_register_to_assign(register) : ptd::sim() {
	return '' if register eq '';
	return print_register(register) . ' = ';
}

def print_return(return_i : @nlasm::return, fun_args : @nlasm::args_type) : ptd::sim() {
	var result = '';
	var no = 0;
	fora var arg (fun_args) {
		match (arg) case :ref {
			result .= '___arg__' . no . '.value = ' . '___nl__' . no . ';';
		} case :val {
		}
		++no;
	}
	match (return_i) case :val(var val) {
		return result . string::lf() . 'return ' . print_register(val) . ';';
	} case :emp {
		return result . string::lf() . 'return null;';
	}
}

def print_una_op(una_op : @nlasm::una_op_t) : ptd::sim() {
	var result = print_register_to_assign(una_op->dest);
	if (una_op->op eq '!') {
		return result . print_int_call_sim('c_rt_lib', 'bool_not', [una_op->src]);
	} else {
		return result . imm_call('float') . '(' . una_op->op . 
			print_int_call_sim('c_rt_lib', 'imm_to_float', [una_op->src]) . ');';
	}
}
