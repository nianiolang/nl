###
# (c) Atinea Sp. z o.o.
###


use ptd;
use nlasm;
use string;
use array;
use hash;
use ov;
use singleton;
use nl;
use boolean_t;
use string_utils;

def get_bin_ops() : ptd::hash(ptd::sim()) {
	return singleton::sigleton_do_not_use_without_approval(gen_bin_ops());
}

def get_bin_ops_mod() : ptd::hash(ptd::sim()) {
	return singleton::sigleton_do_not_use_without_approval(gen_bin_ops_mod());
}

def get_unary_ops() : ptd::hash(ptd::sim()) {
	return singleton::sigleton_do_not_use_without_approval(gen_unary_ops());
}

def gen_unary_ops() : ptd::hash(ptd::sim()) {
	var ret = {};
	hash::set_value(ref ret, '!', 'not');
	hash::set_value(ref ret, '-', 'unary_minus');
	hash::set_value(ref ret, '+', 'unary_plus');
	return ret;
}

def gen_bin_ops() : ptd::hash(ptd::sim()) {
	var ret = {};
	hash::set_value(ref ret, 'eq', 'eq');
	hash::set_value(ref ret, 'ne', 'ne');
	hash::set_value(ref ret, '+', 'add');
	hash::set_value(ref ret, '-', 'sub');
	hash::set_value(ref ret, '*', 'mul');
	hash::set_value(ref ret, '/', 'div');
	hash::set_value(ref ret, '%', 'mod');
	hash::set_value(ref ret, '<=', 'le');
	hash::set_value(ref ret, '<', 'lt');
	hash::set_value(ref ret, '==', 'num_eq');
	hash::set_value(ref ret, '!=', 'num_ne');
	hash::set_value(ref ret, '>', 'gt');
	hash::set_value(ref ret, '>=', 'ge');
	hash::set_value(ref ret, '.', 'concat_new');
	return ret;
}

def gen_bin_ops_mod() : ptd::hash(ptd::sim()) {
	var ret = {};
	hash::set_value(ref ret, '+', 'add_mod');
	hash::set_value(ref ret, '-', 'sub_mod');
	hash::set_value(ref ret, '*', 'mul_mod');
	hash::set_value(ref ret, '/', 'div_mod');
	hash::set_value(ref ret, '%', 'mod_mod');
	hash::set_value(ref ret, '.', 'concat_add');
	return ret;
}

def generator_c::const_dict() {
	return ptd::rec({arr => ptd::arr(ptd::sim()), hash => ptd::hash(ptd::sim())});
}

def generator_c::fun_args_t() {
	return ptd::arr(ptd::var({val => ptd::none(), ref => ptd::none()}));
}

def generator_c::const_t() {
	return ptd::rec({arr => ptd::arr(ptd::sim()), hash => ptd::hash(ptd::sim())});
}

def generator_c::global_const_t() {
	return ptd::rec({
			arr => ptd::arr(ptd::rec({key => ptd::sim(), uses => ptd::sim()})),
			hash => ptd::hash(ptd::sim()),
			holes => ptd::arr(ptd::sim()),
			module_consts => ptd::hash(ptd::hash(ptd::sim()))
		});
}

def generator_c::state_t() {
	return ptd::rec({
			global_const => @generator_c::global_const_t,
			header => ptd::sim(),
			ret => ptd::sim(),
			additional_imports => ptd::hash(@boolean_t::type),
			mod_name => ptd::sim(),
			fun_args => @generator_c::fun_args_t,
			const => ptd::rec({
					sim => @generator_c::const_t,
					singleton => @generator_c::const_t,
					dynamic_nr => ptd::sim()
				})
		});
}

def generator_c::get_empty_state() : @generator_c::state_t {
	return {
			global_const => {arr => [], hash => {}, holes => [], module_consts => {}},
			ret => '',
			header => '',
			fun_args => [],
			const => {dynamic_nr => 0, sim => {arr => [], hash => {}}, singleton => {arr => [], hash => {}}},
			mod_name => '',
			additional_imports => {},
		};
}

def print(ref state : @generator_c::state_t, s : ptd::sim()) : ptd::void() {
	state->ret .= s;
}

def print_to_header(ref state : @generator_c::state_t, s : ptd::sim()) {
	state->header .= s;
}

def println_to_header(ref state : @generator_c::state_t, s : ptd::sim()) {
	state->header .= s . string::lf();
}

def arg_t() {
	return 'ImmT ';
}

def println(ref state : @generator_c::state_t, s : ptd::sim()) {
	state->ret .= s;
	state->ret .= string::lf();
}

def get_reg(ref state : @generator_c::state_t, nlasm : @nlasm::reg_t) : ptd::sim() {
	var args = state->fun_args;
	if (array::len(args) > nlasm && args[nlasm] is :ref) {
		return '*___ref___' . nlasm;
	}
	return '___nl__' . nlasm;
}

def get_reg_ref(ref state : @generator_c::state_t, nlasm : @nlasm::reg_t) : ptd::sim() {
	var args = state->fun_args;
	if (array::len(args) > nlasm && args[nlasm] is :ref) {
		return '___ref___' . nlasm;
	}
	return '&___nl__' . nlasm;
}

def get_string(s : ptd::sim()) : ptd::sim() {
	return '"' . s . '"';
}

def generator_c::module_out_t() {
	return ptd::rec({c => ptd::sim(), h => ptd::sim()});
}

def generator_c::out_t() {
	return ptd::rec({modules => ptd::hash(@generator_c::module_out_t), global_const => @generator_c::module_out_t});
}

def generator_c::generate(nlasms : ptd::hash(@nlasm::result_t), ref state : @generator_c::state_t) : @generator_c::out_t {
	var modules_out = {};
	var modules_names = [];
	forh var module, var none (nlasms) {
		array::push(ref modules_names, module);
	}
	array::sort(ref modules_names);
	fora var module (modules_names) {
		var nlasm = hash::get_value(nlasms, module);
		generator_c::clear_module_from_state(ref state, module);
		hash::set_value(ref state->global_const->module_consts, module, {});
		state->ret = '';
		state->header = '';
		state->fun_args = [];
		state->const = {dynamic_nr => 0, sim => {arr => [], hash => {}}, singleton => {arr => [], hash => {}}};
		state->mod_name = module;
		state->additional_imports = {};
		print_mod(ref state, nlasm);
		hash::set_value(ref modules_out, module, {c => state->ret, h => state->header});
	}
	return {modules => modules_out, global_const => generate_global_const_files(ref state, modules_names)};
}

def generate_global_const_files(ref state : @generator_c::state_t, modules_names : ptd::arr(ptd::sim()))
		: @generator_c::module_out_t {
	state->ret = '';
	state->header = '';
	state->fun_args = [];
	state->const = {dynamic_nr => 0, sim => {arr => [], hash => {}}, singleton => {arr => [], hash => {}}};
	state->mod_name = '';
	print_to_header(ref state, get_cr());
	println_to_header(ref state, '#pragma once');
	println_to_header(ref state, get_include('c_rt_lib'));
	fora var module_name (modules_names) {
		println_to_header(ref state, get_include(module_name));
	}
	print(ref state, get_cr());
	println(ref state, get_include('c_global_const'));
	var sim = state->global_const->arr;
	var const_len = array::len(sim);
	println_to_header(ref state, 'void ___global_const_init();');
	println_to_header(ref state, arg_t() . ' ___get_global_const(int __nr);');
	println(ref state, '
		'static ' . arg_t() . ' ___global_const__ = NULL;
		'static int ___global_const_init__ = 1;
		'static int ___global_const_offset;');
	println(ref state, 'void ___global_const_init(){
		'if(!___global_const_init__) nl_die();
		'___global_const_init__ = 0;
		'___global_const_offset = c_rt_lib0get_global_const_offset();
		'___global_const__ = alloc_mem(' . const_len . ' * ___global_const_offset);
		'');
	rep var i (const_len) {
		println(ref state, create_sim_to_memory(sim[i]->key, '___global_const__ + ___global_const_offset * ' . i) . ';');
	}
	println(ref state, '
		'' . get_lib_fun('register_global_const') . '((' . arg_t() . ')___global_const__,(' . arg_t() . 
		')___global_const__ + ' . const_len . ' * ___global_const_offset);');
	fora var module_name (modules_names) {
		println(ref state, get_fun_name(module_name, '__const__init', state->mod_name) . '();');
	}
	println(ref state, '}');
	println(ref state, arg_t() . '___get_global_const(int __nr) {
		'' . arg_t() . 'ret = NULL;
		'' . get_fun_lib('copy', ['&ret', '(' . arg_t() . ')___global_const__ + ___global_const_offset * __nr']) . ';
		'return ret;
		'}');
	return {c => state->ret, h => state->header};
}

def get_include(import : ptd::sim()) : ptd::sim() {
	return '#include "' . import . '.h"';
}

def get_cr() : ptd::sim() {
	return '
		'/* (c) Atinea Sp z o. o.
		' *  Stamp: nianio lang
		' */
		'';
}

def get_function_name(func : @nlasm::function_t, mod_name : ptd::sim()) : ptd::sim() {
	var nmode;
	match (func->access) case :pub {
		nmode = mod_name;
	} case :priv {
		nmode = '';
	}
	return get_fun_name(nmode, func->name, mod_name);
}

def get_function_header(func : @nlasm::function_t, mod_name : ptd::sim()) : ptd::sim() {
	var fun_header = '';
	var fun_name = get_function_name(func, mod_name);
	fun_header .= arg_t() . fun_name . '(';
	var reg_mem = 0;
	fora var arg_type (func->args_type) {
		fun_header .= ',' unless 0 == reg_mem;
		match (arg_type) case :val {
			fun_header .= arg_t() . '___nl__' . reg_mem;
		} case :ref {
			fun_header .= arg_t() . '* ___ref___' . reg_mem;
		}
		reg_mem++;
	}
	fun_header .= ')';
	return fun_header;
}

def get_const(ref type : @generator_c::const_t, key : ptd::sim()) : ptd::sim() {
	var nr = -1;
	if (!hash::has_key(type->hash, key)) {
		nr = array::len(type->arr);
		array::push(ref type->arr, key);
		hash::set_value(ref type->hash, key, nr);
	} else {
		nr = hash::get_value(type->hash, key);
	}
	return nr;
}

def insert_const_to_modules_hash(ref global_const : @generator_c::global_const_t, key : ptd::sim(), module : ptd::sim()) {
	var hash = hash::get_value(global_const->module_consts, module);
	hash::set_value(ref hash, key, '');
	hash::set_value(ref global_const->module_consts, module, hash);
}

def get_global_const(ref global_const : @generator_c::global_const_t, key : ptd::sim(), module : ptd::sim()) : ptd::sim() {
	var nr = -1;
	if (!hash::has_key(global_const->hash, key)) {
		if (array::len(global_const->holes) > 0) {
			nr = global_const->holes[array::len(global_const->holes) - 1];
			array::pop(ref global_const->holes);
			global_const->arr[nr] = {key => key, uses => 1};
		} else {
			nr = array::len(global_const->arr);
			array::push(ref global_const->arr, {key => key, uses => 1});
		}
		insert_const_to_modules_hash(ref global_const, key, module);
		hash::set_value(ref global_const->hash, key, nr);
	} else {
		nr = hash::get_value(global_const->hash, key);
		var module_hash = hash::get_value(global_const->module_consts, module);
		if (!hash::has_key(module_hash, key)) {
			++global_const->arr[nr]->uses;
			insert_const_to_modules_hash(ref global_const, key, module);
		}
	}
	return nr;
}

def generator_c::clear_module_from_state(ref state : @generator_c::state_t, module : ptd::sim()) {
	if (hash::has_key(state->global_const->module_consts, module)) {
		var consts = hash::get_value(state->global_const->module_consts, module);
		forh var key, var none (consts) {
			var nr = hash::get_value(state->global_const->hash, key);
			--state->global_const->arr[nr]->uses;
			if (state->global_const->arr[nr]->uses == 0) {
				hash::delete(ref state->global_const->hash, key);
				array::push(ref state->global_const->holes, nr);
			}
		}
		hash::delete(ref state->global_const->module_consts, module);
	}
}

def get_const_sim(ref state : @generator_c::state_t, sim : ptd::sim()) : ptd::sim() {
	var nr = get_global_const(ref state->global_const, sim, state->mod_name);
	return '___get_global_const(' . nr . ')';
}

def get_const_singleton(ref state : @generator_c::state_t, sim : ptd::sim()) : ptd::sim() {
	var nr = get_const(ref state->const->singleton, sim);
	return get_fun_name('', '__const__sing', state->mod_name) . '(' . nr . ')';
}

def get_func_ptr_header(func : @nlasm::function_t, mod_name : ptd::sim()) : ptd::sim() {
	return arg_t() . get_function_name(func, mod_name) . '0ptr(int _num, ImmT *_tab)';
}

def print_mod(ref state : @generator_c::state_t, asm : @nlasm::result_t) {
	print_to_header(ref state, get_cr());
	print_to_header(ref state, '#pragma once' . string::lf());
	print_to_header(ref state, get_include('c_rt_lib') . string::lf());
	print(ref state, get_cr());
	println(ref state, get_include('c_rt_lib'));
	println(ref state, get_include('c_global_const'));
	println(ref state, get_include(state->mod_name));
	fora var import (asm->imports) {
		println(ref state, get_include(import));
	}
	var ret = state->ret;
	state->ret = '';
	println(ref state, '#line 1 "' . state->mod_name . '.nl"' . string::lf());
	println(ref state, 'static ' . arg_t() . '*__const__f = NULL;');
	print_to_header(ref state, 'void ' . get_fun_name(state->mod_name, '__const__init', state->mod_name) . '();' .
		string::lf());
	println(ref state, arg_t() . get_fun_name('', '__const__sim', state->mod_name) . '(int __nr);');
	println(ref state, arg_t() . get_fun_name('', '__const__sing', state->mod_name) . '(int __nr);' . string::lf());
	fora var func (asm->functions) {
		var fun_header = get_function_header(func, state->mod_name);
		match (func->access) case :pub {
			print_to_header(ref state, fun_header . ';' . string::lf());
			print_to_header(ref state, get_func_ptr_header(func, state->mod_name) . ';' . string::lf());
		} case :priv {
			println(ref state, fun_header . ';');
		}
	}
	println(ref state, string::lf());
	fora var func (asm->functions) {
		if (func->access is :pub) {
			var fun_name = get_function_name(func, state->mod_name);
			println(ref state, get_func_ptr_header(func, state->mod_name) . '{');
			var number = array::len(func->args_type);
			println(ref state, get_fun_lib('func_num_args', ['_num', number, get_string(fun_name)]) . ';');
			print(ref state, 'return ' . fun_name . '(');
			rep var arg_id (number) {
				print(ref state, ', ') if (arg_id > 0);
				match (func->args_type[arg_id]) case :val {
					print(ref state, '_tab[' . arg_id . ']');
				} case :ref {
					print(ref state, '&_tab[' . arg_id . ']');
				}
			}
			println(ref state, ');}');
		}
		if (is_singleton_use_function(func)) {
			var fun_name = get_function_name(func, state->mod_name);
			println(ref state, arg_t() . fun_name . '(){');
			println(ref state, 'return ' . get_const_singleton(ref state, fun_name) . ';}');
			print(ref state, arg_t() . fun_name . '0cal()');
		} else {
			print(ref state, get_function_header(func, state->mod_name));
		}
		print_function_block(ref state, func);
	}
	print_init_const(ref state);
	forh var import, var none (state->additional_imports) {
		ret .= get_include(import) . string::lf();
	}
	state->ret = ret  . state->ret;
}

def print_init_const(ref state : @generator_c::state_t) : ptd::void() {
	var sim = state->const->sim->arr;
	var singleton = state->const->singleton->arr;
	var sim_len = array::len(sim);
	var sing_len = array::len(singleton);
	var dyna_len = state->const->dynamic_nr;
	var const_len = sim_len + sing_len + dyna_len;
	println(ref state, '
		'static ' . arg_t() . '___const__[' . (1 + const_len) . '];
		'static int ___const_init__ = 1;');
	println(ref state, 'void ' . get_fun_name(state->mod_name, '__const__init', state->mod_name) . '(){
		'if(!___const_init__) nl_die();
		'___const_init__ = 0;
		'__const__f = &___const__[' . (sim_len + sing_len) . '];
		'');
	rep var i (sim_len) {
		println(ref state, '___const__[' . i . '] = ' . create_sim(sim[i]) . ';');
	}
	println(ref state, '
		'for(int i=' . sim_len . ';i<' . const_len . ';++i) ___const__[i] = NULL;
		'' . get_lib_fun('register_const') . '(___const__, ' . const_len . ');
		'}');
	println(ref state, arg_t() . get_fun_name('', '__const__sim', state->mod_name) . '(int __nr) {
		'' . arg_t() . 'ret = NULL;
		'' . get_fun_lib('copy', ['&ret', '___const__[__nr]']) . ';
		'return ret;
		'}');
	println(ref state, arg_t() . get_fun_name('', '__const__sing', state->mod_name) . '(int __nr) {
		'if(___const__[__nr+' . sim_len . ']==NULL) {
		'switch(__nr){');
	rep var i (array::len(singleton)) {
		println(ref state, 'case ' . i . ':');
		println(ref state, '	___const__[' . (i + sim_len) . '] = ' . singleton[i] . '0cal();');
		println(ref state, '	break;');
	}
	println(ref state, 'default:
		'	nl_die();
		'}}
		'' . arg_t() . 'ret = NULL;
		'' . get_fun_lib('copy', ['&ret', '___const__[__nr+' . sim_len . ']']) . ';
		'return ret;
		'}');
}

def print_function_block(ref state : @generator_c::state_t, func : @nlasm::function_t) : ptd::void() {
	println(ref state, ' {');
	state->fun_args = func->args_type;
	move_args_to_register(ref state);
	for(var i = array::len(func->args_type); i < func->reg_size; ++i) {
		println(ref state, arg_t() . get_reg(ref state, i) . ' = NULL;');
	}
	fora var cmd (func->commands) {
		match (cmd->annotation) case :none {
			print_cmd(ref state, cmd);
		} case :const(var tab) {
			if (cmd->cmd is :load_const) {
				var value = (cmd->cmd as :load_const)->val;
				if (nl::is_sim(value)) {
					print_cmd(ref state, cmd);
					continue;
				}
			}
			var len = array::len(tab);
			if (len == 0) {
				print_cmd(ref state, cmd);
				continue;
			} else {
				var nr = state->const->dynamic_nr;
				println(ref state, 'if(__const__f[' . nr . '] == NULL) {');
				print_cmd(ref state, cmd);
				fora var reg (tab) {
					println(ref state, get_fun_lib('copy', ['&__const__f[' . nr . ']', get_reg(ref state, reg)]) . ';');
					nr++;
				}
				println(ref state, '}');
				nr -= len;
				fora var reg (tab) {
					println(ref state, get_fun_lib('copy', [get_reg_ref(ref state, reg), '__const__f[' . nr . ']']) . 
						';');
					nr++;
				}
				state->const->dynamic_nr = nr;
			}
		}
	}
	println(ref state, '}' . string::lf());
}

def is_singleton_use_function(function : @nlasm::function_t) : @boolean_t::type {
	return false if (array::len(function->args_type) > 0);
	var is_math = function->annotation is :math;
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
			var ret = command as :return;
			return false unless (ret is :val);
			return true if is_math;
			return false unless was_singleton;
			return ret as :val eq dest;
		} elsif (command is :prt_lbl) {
		} elsif (command is :clear) {
		} else {
			return false if (was_singleton);
		}
	}
	return false;
}

def move_args_to_register(ref state : @generator_c::state_t) {
	rep var arg_id (array::len(state->fun_args)) {
		match (state->fun_args[arg_id]) case :val {
			print(ref state, get_fun_lib('arg_val', [get_reg(ref state, arg_id)]));
			println(ref state, ';');
		} case :ref {
		}
	}
}

def move_register_to_ref_args(ref state : @generator_c::state_t) {
	rep var arg_id (array::len(state->fun_args)) {
		match (state->fun_args[arg_id]) case :val {
		} case :ref {
		}
	}
}

def get_fun_lib(fun_name : ptd::sim(), args : ptd::arr(ptd::sim())) : ptd::sim() {
	var ret = get_lib_fun(fun_name) . '(';
	var i = 0;
	fora var arg (args) {
		ret .= ', ' unless 0 == i;
		ret .= arg;
		++i;
	}
	return ret . ')';
}

def get_module_name(mod : ptd::sim()) : ptd::sim() {
	return string::replace(mod, '0', '00');
}

def get_fun_name(mod : ptd::sim(), fun_name : ptd::sim(), mod_name : ptd::sim()) : ptd::sim() {
	mod = mod_name . '_priv' if mod eq '';
	return get_module_name(mod) . '0' . string::replace(fun_name, '0', '00');
}

def get_lib_fun(fun_name : ptd::sim()) : ptd::sim() {
	return get_fun_name('c_rt_lib', fun_name, '');
}

def generate_imm(ref state : @generator_c::state_t, obj) : ptd::void() {
	if (nl::is_hash(obj)) {
		print(ref state, get_lib_fun('hash_mk_dec') . '(' . hash::size(obj));
		forh var key, var value (obj) {
			print(ref state, ', ');
			print(ref state, get_const_sim(ref state, key));
			print(ref state, ', ');
			generate_imm(ref state, value);
		}
		print(ref state, ')');
	} elsif (nl::is_array(obj)) {
		print(ref state, get_lib_fun('array_mk_dec') . '(' . array::len(obj));
		fora var el (obj) {
			print(ref state, ', ');
			generate_imm(ref state, el);
		}
		print(ref state, ')');
	} elsif (nl::is_variant(obj)) {

		var variant_label = get_const_sim(ref state, ptd::ensure(ptd::sim(), ov::get_element(obj)));
		if (ov::has_value(obj)) {
			print(ref state, get_lib_fun('ov_mk_arg_dec') . '(' . variant_label . ', ');

			var obj_val = ov::get_value(obj);
			if ((obj is :ref) && nl::is_hash(obj_val) && (hash::size(obj_val) == 2) && hash::has_key(obj_val, 'name') && hash::has_key(obj_val, 'module')) {
				if (nl::is_sim(obj_val->name) && nl::is_sim(obj_val->module)) {
					print(ref state, get_func_pointer(ref state, ptd::ensure(ptd::sim(), obj_val->module), ptd::ensure(ptd::sim(), obj_val->name)));
				} else {
					generate_imm(ref state, obj_val);	
				}
			} else {
				generate_imm(ref state, obj_val);
			}

			print(ref state, ')');
		} else {
			print(ref state, get_lib_fun('ov_mk_none') . '(' . variant_label . ')');
		}
	} elsif (nl::is_sim(obj)) {
		print(ref state, get_const_sim(ref state, ptd::ensure(ptd::sim(), obj)));
	} else {
		die;
	}
}


def get_func_pointer(ref state : @generator_c::state_t, module_name : ptd::sim(), fun_name : ptd::sim()) : ptd::sim() {
	state->additional_imports{module_name} = true;
	return get_fun_lib('func_new', [
		get_fun_name(module_name, fun_name, state->mod_name) . '0ptr',
		get_const_sim(ref state, module_name),
		get_const_sim(ref state, fun_name),
	]);
}

def print_cmd(ref state : @generator_c::state_t, asm : @nlasm::cmd_t) : ptd::void() {
	print(ref state, '#line ' . asm->debug->nast_debug->begin->line . string::lf());
	match (asm->cmd) case :arr_decl(var decl) {
		var args = [array::len(decl->src)];
		array::push(ref args, get_reg(ref state, el)) fora var el (decl->src);
		var r = get_fun_lib('array_mk', args);
		print(ref state, get_assign(ref state, decl->dest, r));
	} case :hash_decl(var hash_decl) {
		var args = [array::len(hash_decl->src)];
		fora var el (hash_decl->src) {
			array::push(ref args, get_const_sim(ref state, el->key));
			array::push(ref args, get_reg(ref state, el->val));
		}
		var r = get_fun_lib('hash_mk', args);
		print(ref state, get_assign(ref state, hash_decl->dest, r));
	} case :func(var func) {
		var r = get_func_pointer(ref state, func->module, func->name);
		print(ref state, get_assign(ref state, func->dest, r));
	} case :call(var call) {
		generate_call(ref state, call);
	} case :una_op(var una_op) {
		var op = hash::get_value(get_unary_ops(), una_op->op);
		var r = get_fun_lib(op, [get_reg(ref state, una_op->src)]);
		print(ref state, get_assign(ref state, una_op->dest, r));
	} case :bin_op(var bin_op) {
		var op = hash::get_value(get_bin_ops(), bin_op->op);
		if (bin_op->dest eq bin_op->left && hash::has_key(get_bin_ops_mod(), bin_op->op)) {
			op = hash::get_value(get_bin_ops_mod(), bin_op->op);
		}
		var r = get_fun_lib(op, [get_reg(ref state, bin_op->left), get_reg(ref state, bin_op->right)]);
		print(ref state, get_assign(ref state, bin_op->dest, r));
	} case :ov_is(var ov_is) {
		var r = get_fun_lib('priv_is', [get_reg(ref state, ov_is->src), get_const_sim(ref state, ov_is->type)]);
		print(ref state, get_assign(ref state, ov_is->dest, r));
	} case :ov_as(var ov_as) {
		var r = get_fun_lib('priv_as', [get_reg(ref state, ov_as->src), get_const_sim(ref state, ov_as->type)]);
		print(ref state, get_assign(ref state, ov_as->dest, r));
	} case :return(var rr) {
		move_register_to_ref_args(ref state);
		print(ref state, 'return ');
		match (rr) case :val(var v) {
			print(ref state, get_reg(ref state, v));
		} case :emp {
			print(ref state, 'NULL');
		}
	} case :die(var dd) {
		print(ref state, 'nl_die_arg(' . get_reg(ref state, dd) . ')');
	} case :move(var move) {
		return if move->dest eq '';
		var arg = [get_reg_ref(ref state, move->dest), get_reg(ref state, move->src)];
		print(ref state, get_fun_lib('copy', arg));
	} case :load_const(var const) {
		return if const->dest eq '';
		print(ref state, get_lib_fun('move') . '(' . get_reg_ref(ref state, const->dest) . ',');
		generate_imm(ref state, const->val);
		print(ref state, ')');
	} case :get_frm_idx(var get) {
		var r = get_fun_lib('array_get', [get_reg(ref state, get->src), get_reg(ref state, get->idx)]);
		print(ref state, get_assign(ref state, get->dest, r));
	} case :set_at_idx(var set) {
		print(ref state, get_fun_lib('array_set', [
					get_reg_ref(ref state, set->src),
					get_reg(ref state, set->idx),
					get_reg(ref state, set->val)
				]));
	} case :get_val(var get) {
		var r = get_fun_lib('hash_get_value_dec', [get_reg(ref state, get->src), get_const_sim(ref state, get->key)]);
		print(ref state, get_assign(ref state, get->dest, r));
	} case :set_val(var set) {
		print(ref state, get_fun_lib('hash_set_value_dec', [
					get_reg_ref(ref state, set->src),
					get_const_sim(ref state, set->key),
					get_reg(ref state, set->val)
				]));
	} case :ov_mk(var mk) {
		var r;
		if (mk->src is :emp && (mk->name eq 'TRUE')) {
			r = get_fun_lib('get_true', []);
		} elsif (mk->src is :emp && (mk->name eq 'FALSE')) {
			r = get_fun_lib('get_false', []);
		} else {
			match (mk->src) case :arg(var a) {
				r = get_fun_lib('ov_mk_arg', [get_const_sim(ref state, mk->name), get_reg(ref state, a)]);
			} case :emp {
				r = get_fun_lib('ov_mk_none', [get_const_sim(ref state, mk->name)]);
			}
		}
		print(ref state, get_assign(ref state, mk->dest, r));
	} case :prt_lbl(var l) {
		print(ref state, 'label_' . l . ':' . string::lf());
		return;
	} case :if_goto(var ifgoto) {
		print(ref state, 'if(');
		print(ref state, get_fun_lib('check_true_native', [get_reg(ref state, ifgoto->src)]));
		print(ref state, '){ goto label_' . ifgoto->dest . ';}' . string::lf());
		return;
	} case :goto(var goto) {
		print(ref state, 'goto label_' . goto);
	} case :clear(var reg) {
		print(ref state, get_fun_lib('clear', [get_reg_ref(ref state, reg)]));
	}
	print(ref state, ';' . string::lf());
}

def get_assign(ref state : @generator_c::state_t, reg : @nlasm::reg_t, right : ptd::sim()) : ptd::sim() {
	if (reg eq '') {
		return get_fun_lib('delete', [right]);
	} else {
		return get_fun_lib('move', [get_reg_ref(ref state, reg), right]);
	}
}

def generate_call(ref state : @generator_c::state_t, call : @nlasm::call_t) : ptd::void() {
	var ret = get_fun_name(call->mod, call->fun_name, state->mod_name) . '(';
	rep var i (array::len(call->args)) {
		ret .= ', ' unless 0 == i;
		match (call->args[i]) case :val(var val) {
			ret .= get_reg(ref state, val);
		} case :ref(var ref_val) {
			ret .= get_reg_ref(ref state, ref_val);
		}
	}
	ret .= ')';
	print(ref state, get_assign(ref state, call->dest, ret));
}

def create_sim(obj : ptd::sim()) : ptd::sim() {
	if (string_utils::is_integer(obj)) {
		return get_lib_fun('int_new') . '(' . obj . ')';
	} elsif (string_utils::is_float(obj)) {
		return get_lib_fun('float_new') . '(' . obj . ')';
	} else {
		var str = obj . '';
		str = string::replace(str, '\', '\\');
		str = string::replace(str, string::lf(), '\n');
		str = string::replace(str, string::r(), '\r');
		str = string::replace(str, string::tab(), '\t');
		str = string::replace(str, '"', '\"');
		str = string::replace(str, '''', '\''');
		return get_lib_fun('string_new') . '("' . str . '")';
	}
}

def create_sim_to_memory(obj : ptd::sim(), memory : ptd::sim()) : ptd::sim() {
	if (string_utils::is_integer(obj)) {
		return get_lib_fun('int_new_to_memory') . '(' . obj . ',' . memory . ')';
	} elsif (string_utils::is_float(obj)) {
		return get_lib_fun('float_new_to_memory') . '(' . obj . ',' . memory . ')';
	} else {
		var str = obj . '';
		str = string::replace(str, '\', '\\');
		str = string::replace(str, string::lf(), '\n');
		str = string::replace(str, string::r(), '\r');
		str = string::replace(str, string::tab(), '\t');
		str = string::replace(str, '"', '\"');
		str = string::replace(str, '''', '\''');
		str = string::replace(str, string::chr(0), '\0');
		return get_lib_fun('string_new_to_memory') . '("' . str . '",' . memory . ')';
	}
}

