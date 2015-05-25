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

def generator_js::generate(nlasm : @nlasm::result_t) : ptd::sim() {
	var result = '';
	result .= print_function_or_singleton(function, nlasm->module_name) fora var function (nlasm->functions);
	return result;
}

def get_function_name(function : @nlasm::function_t, module_name : ptd::sim()) {
	match (function->access) case :pub {
		return escape_mod_fun_name(module_name).'0'.escape_mod_fun_name(function->name);
	} case :priv {
		return escape_mod_fun_name(module_name).'_priv0'.escape_mod_fun_name(function->name);
	}
}

def escape_mod_fun_name(name : ptd::sim()) : ptd::sim() {
	return string::replace(name, '0', '00');
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
		var fun_name = get_function_name(function, module_name);
		var sin_fun = function;
		sin_fun->name = 'SINGLETON__'.function->name;
		var sin_name = get_function_name(sin_fun, module_name);
		var var_name = 'value__singleton__' . sin_name;

		var ret = print_function(sin_fun, module_name);
		
		ret .= 'var '.var_name.';
		'function '.fun_name.'(){
		'	if ('.var_name.' === undefined) {
		'		'.var_name.' = '.sin_name.'();
		'	}
		'	return '.var_name.';
		'}';
		return ret;
	} else {
		return print_function(function, module_name);
	}
	
}
def print_function(function : @nlasm::function_t, module_name : ptd::sim()) : ptd::sim() {
	var result = string::lf().'function ';
	result .= get_function_name(function, module_name).'(';
	rep var i (array::len(function->args_type)) {
		result .= ', ' unless i == 0;
		result .= '___arg__'.i;
	}
	result .= ') {'.string::lf();
	rep var i (array::len(function->args_type)) {
		match (function->args_type[i]) case :val {
			result .= 'var ___nl__'.i.' = new ImRef(___arg__'.i.'.value);';
		} case :ref {
			result .= 'var ___nl__'.i.' = ___arg__'.i.';';
		}
	}
	result .= string::lf();
	for (var i = array::len(function->args_type); i < function->reg_size; ++i) {
		result .= 'var ___nl__'.i.' = new ImRef(null);'.string::lf();
	}
	result .= 'var label = null; while (1) { switch (label) { default: '.string::lf();
	result .= print_command(module_name, command) fora var command (function->commands);
	return result.'}}}'.string::lf();
}

def print_command(module : ptd::sim(), command : @nlasm::cmd_t) {
	var result;
	match (command->cmd) case :arr_decl(var arr_decl) {
		result = print_register_to_assign(arr_decl->dest).print_arr(arr_decl->src).';';
	} case :hash_decl(var hash_decl) {
		result = print_register_to_assign(hash_decl->dest).print_hash(hash_decl->src).';';
	} case :call(var call) {
		result = print_register_to_assign(call->dest).print_call(module, call->mod, call->fun_name, call->args);
	} case :func(var func) {
		result = print_register_to_assign(func->dest).print_const_hash({module => func->module, name => func->name}).';';
	} case :una_op(var una_op) {
		result = print_una_op(una_op);
	} case :bin_op(var bin_op) {
		result = print_bin_op(bin_op);
	} case :ov_is(var ov_is) {
		result = print_register_to_assign(ov_is->dest).'c_rt_lib0ov_is('.print_register(ov_is->src).', new ImRef("'.escape_string(ov_is->type).'"));';
	} case :ov_as(var ov_as) {
		result = print_register_to_assign(ov_as->dest).'c_rt_lib0ov_as('.print_register(ov_as->src).', new ImRef("'.escape_string(ov_as->type).'"));';
	} case :return(var return_i) {
		result = print_return(return_i);
	} case :die(var die_i) {
		result = 'nl_die();';
	} case :move(var move) {
		result = print_register_to_assign(move->dest).print_register_value(move->src).';';
	} case :load_const(var const){
		result = print_register_to_assign(const->dest).print_const_value(const->val).';';
	} case :get_frm_idx(var get_frm_idx) {
		result = print_register_to_assign(get_frm_idx->dest).print_register_value(get_frm_idx->src).'[Math.floor('.print_register_value(get_frm_idx->idx).')];';
	} case :set_at_idx(var set_at_idx) {
		result = print_register_to_assign(set_at_idx->src).print_register_value(set_at_idx->src).'.slice();';
		result .= print_register_value(set_at_idx->src).'[Math.floor('.print_register_value(set_at_idx->idx).')] = '.print_register_value(set_at_idx->val).';';
	} case :get_val(var get_val) {
		result = print_register_to_assign(get_val->dest).print_register_value(get_val->src).'["'.escape_string(get_val->key).'"];';
	} case :set_val(var set_val) {
		result = print_register_to_assign(set_val->src).'c_rt_lib0clone('.print_register_value(set_val->src).');';
		result .= print_register_value(set_val->src).'["'.escape_string(set_val->key).'"] = '.print_register_value(set_val->val).';';
	} case :ov_mk(var ov_mk) {
		result = print_ov_mk(ov_mk);
	} case :prt_lbl(var prt_lbl) {
		result = 'case "'.prt_lbl.'":';
	} case :if_goto(var if_goto) {
		result = 'if (c_rt_lib0check_true_native('.print_register(if_goto->src).')) {'.print_goto(if_goto->dest).'}';
	} case :goto(var goto) {
		result = print_goto(goto);
	} case :clear(var reg) {
		result = print_register_to_assign(reg).'null';
	}
	return '//line ' . command->debug->nast_debug->begin->line . string::lf() . result.string::lf();
}

def print_arr(arr) : ptd::sim() {
	var result = '[';
	result .= print_register_value(reg).',' fora var reg (arr);
	return result.']';
}

def print_bin_op(bin_op) : ptd::sim() {
	var result = print_register_to_assign(bin_op->dest);
	if (bin_op->op eq '>=' || bin_op->op eq '<=' || bin_op->op eq '<' || bin_op->op eq '>' || bin_op->op eq '=='
		|| bin_op->op eq '!=') {
		return result.'c_rt_lib0native_to_nl(parseFloat('.print_register_value(bin_op->left).') '.bin_op->op.' parseFloat('.print_register_value(bin_op->right).'));';
	} elsif (bin_op->op eq 'eq' || bin_op->op eq 'ne') {
		result .= 'c_rt_lib0native_to_nl('.print_register_value(bin_op->left).'.toString()';
		if (bin_op->op eq 'eq') {
			result .= ' == ';
		} else {
			result .= ' != ';
		}
		return result.print_register_value(bin_op->right).'.toString());';
	} elsif (bin_op->op eq '.') {
		return result.print_register_value(bin_op->left).'.toString() + '.print_register_value(bin_op->right).'.toString();';
	} else {
		return result.'parseFloat('.print_register_value(bin_op->left).') '.bin_op->op.' parseFloat('.print_register_value(bin_op->right).');';
	}
}

def print_call(module : ptd::sim(), cmodule : ptd::sim(), cname : ptd::sim(), cargs) : ptd::sim() {
	cmodule = module.'_priv' if cmodule eq '';
	var result = escape_mod_fun_name(cmodule).'0'.escape_mod_fun_name(cname).'(';
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
	return result.');';
}

def print_const_arr(arr) : ptd::sim() {
	var result = '[';
	result .= print_const_value(val) . ',' fora var val (arr);
	return result.']';
}

def print_const_hash(hash) : ptd::sim() {
	var result = '{';
	result .= '"'.escape_string(key).'":'.print_const_value(val).',' forh var key, var val (hash);
	return result.'}';
}

def print_const_ov(variant) : ptd::sim() {
	var result = '';
	if (ov::has_value(variant)) {
		result = 'new OV("' . escape_string(ov::get_element(variant)) . '", ' . print_const_value(ov::get_value(variant)) . ')';
	} else {
		result = 'new OV("' . escape_string(ov::get_element(variant)) . '", null)';
	}
	return result;
}

def print_const_value(value) {
	if (nl::is_sim(value) && string_utils::is_integer(value.'') && 0+value eq value) {
		return value;
	} elsif (nl::is_sim(value)) {
		return '"'.escape_string(value).'"';
	} elsif (nl::is_array(value)) {
		return print_const_arr(value);
	} elsif (nl::is_hash(value)) {
		return print_const_hash(value);
	} elsif (nl::is_variant(value)) {
		return print_const_ov(value);
	} else {
		die;
	}
}

def print_goto(goto : ptd::sim()) : ptd::sim() {
	return 'label = "'.goto.'"; continue;';
}

def print_hash(harr) : ptd::sim() {
	var result = '{';
	result .= '"'.escape_string(map->key).'":'.print_register_value(map->val).',' fora var map (harr);
	return result.'}';
}

def print_ov_mk(ov_mk) : ptd::sim() {
	var result = print_register_to_assign(ov_mk->dest);
	match (ov_mk->src) case :arg(var arg) {
		return result.'c_rt_lib0ov_mk_arg("'.escape_string(ov_mk->name).'", '.print_register(arg).');';
	} case :emp {
		return result.'c_rt_lib0ov_mk_none("'.escape_string(ov_mk->name).'");';
	}
}

def print_register(register) : ptd::sim() {
	return '___nl__'.register;
}

def print_register_value(register) : ptd::sim() {
	return print_register(register).'.value';
}

def print_register_to_assign(register) : ptd::sim() {
	return '' if register eq '';
	return print_register_value(register).' = ';
}

def print_return(return_i) : ptd::sim() {
	match (return_i) case :val(var val) {
		return 'return '.print_register_value(val).';';
	} case :emp {
		return 'return null;';
	}
}

def print_una_op(una_op) : ptd::sim() {
	var result = print_register_to_assign(una_op->dest);
	if (una_op->op eq '!') {
		return result.'c_rt_lib0native_to_nl(!c_rt_lib0check_true_native('.print_register(una_op->src).'));';
	} else {
		return result.una_op->op.print_register_value(una_op->src).';';
	}
}
