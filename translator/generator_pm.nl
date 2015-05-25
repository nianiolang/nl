#####
# (c) Atinea Sp. z o.o.
# LGA 18.12.2012
###

use array;
use dfile;
use string;
use nl;
use nlasm;
use boolean_t;
use ptd;
use string_utils;

def generator_pm::fun_args_t() {
	return ptd::arr(ptd::var({val=>ptd::none(), ref=>ptd::none()}));
}
def generator_pm::state_t(){
	return ptd::rec({
		perl_file => ptd::sim(),
		module_name => ptd::sim(),
		fun_args => @generator_pm::fun_args_t,
	});
}

def print(ref state : @generator_pm::state_t, s : ptd::sim()) : ptd::void() {
	state->perl_file .= s;
}

def generator_pm::generate(nlasm : @nlasm::result_t) : ptd::sim() {
	var state : @generator_pm::state_t = {
		perl_file => '',
		module_name => nlasm->module_name,
		fun_args => [],
	};
	print(ref state, 'use c_rt_lib;'. string::lf());
	print_imports(nlasm->imports, ref state);
	fora var function (nlasm->functions) {
		print(ref state, 'sub ');
		print_function_access(function->access, ref state);
		print(ref state, function->name . ';' . string::lf());
	}
	print(ref state, string::lf().'return 1;'. string::lf());
	print_functions(nlasm->functions, ref state);
	return state->perl_file;
}

def print_imports(imports : ptd::arr(ptd::sim()), ref state : @generator_pm::state_t) : ptd::void() {
	fora var import (imports) {
		print(ref state, 'use ' . import . ';' . string::lf());
	}
}

def print_functions(functions : ptd::arr(@nlasm::function_t), ref state : @generator_pm::state_t) : ptd::void() {
	fora var function (functions) {
		if(is_singleton_use_function(function)){
			var fun_name = function->name;
			var sin_fun = function;
			sin_fun->name = '__' . fun_name;
			print_function(sin_fun, ref state);
			var generator_function_name = get_function_access(sin_fun->access, state->module_name)
				. sin_fun->name;
			print(ref state, string::lf().'my $_' . fun_name . ';'.string::lf());
			print(ref state, 'sub ');
			print_function_access(sin_fun->access, ref state);
			print(ref state, fun_name . '() {' . string::lf());
			print(ref state, '	$_' . fun_name . ' = ' . generator_function_name);
			print(ref state, '() unless defined ' . '$_' . fun_name . ';' . string::lf());
			print(ref state, '	return $_' . fun_name . ';' . string::lf());
			print(ref state, '}' . string::lf());
		} else {
			print_function(function, ref state);
		}
	}
}

def print_function(function : @nlasm::function_t, ref state : @generator_pm::state_t) : ptd::void() {
	state->fun_args = function->args_type;
	print(ref state, string::lf().'sub ');
	print_function_access(function->access, ref state);
	print(ref state, function->name . '(');
	print_args_dollar(array::len(function->args_type), ref state);
	print(ref state, ') {' . string::lf());
	rep var reg_id (function->reg_size) {
		print(ref state, 'my $memory_' . reg_id . ';');
	}
	move_args_to_register(ref state);
	print(ref state, string::lf());
	print_commands(function->commands, ref state);
	move_register_to_ref_args(ref state);
	print(ref state, '}' . string::lf());
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


def print_function_access(access : @nlasm::access_t, ref state : @generator_pm::state_t) : ptd::void() {
	print(ref state, get_function_access(access, state->module_name));
}

def get_function_access(access : @nlasm::access_t, module_name : ptd::sim()) : ptd::sim() {
	match (access) case :pub {
		return module_name . '::';
	} case :priv {
		return module_name . '_priv::';
	}
}

def print_args_dollar(args_size : ptd::sim(), ref state : @generator_pm::state_t) : ptd::void() {
	rep var arg_id (args_size) {
		print(ref state, '$');
	}
}

def move_args_to_register(ref state : @generator_pm::state_t) : ptd::void() {
	rep var arg_id (array::len(state->fun_args)) {
		print(ref state, '$memory_' . arg_id . ' = $_['.arg_id.'];');
		match (state->fun_args[arg_id]) case :val {
		} case :ref {
			print(ref state, 'Scalar::Util::weaken($_['.arg_id.']) if ref($_['.arg_id.']);');
		}
	}
}
def move_register_to_ref_args(ref state : @generator_pm::state_t) : ptd::void() {
	rep var arg_id (array::len(state->fun_args)) {
		match (state->fun_args[arg_id]) case :val {
		} case :ref {
			print(ref state, '$_['.arg_id.'] = $memory_' . arg_id . ';');
		}
	}
}
def print_commands(commands : ptd::arr(@nlasm::cmd_t), ref state : @generator_pm::state_t) : ptd::void() {
	fora var command (commands) {
		print_command(command, ref state);
	}
}

def print_command(command : @nlasm::cmd_t, ref state : @generator_pm::state_t) : ptd::void() {
	print(ref state, '#line ' . command->debug->nast_debug->begin->line .string::lf());
	match (command->cmd) case :arr_decl(var arr_decl) {
		print_register_to_assign(arr_decl->dest, ref state);
		print(ref state, '[');
		var index = 0;
		fora var src (arr_decl->src) {
			if (index > 0) {
				print(ref state, ',');
			}
			print_register(src, ref state);
			++index;
		}
		print(ref state, '];');
	} case :hash_decl(var hash_decl) {
		print_register_to_assign(hash_decl->dest, ref state);
		print(ref state, '{');
		fora var src (hash_decl->src) {
			print(ref state, src->key);
			print(ref state, ' => ');
			print_register(src->val, ref state);
			print(ref state, ',');
		}
		print(ref state, '};');
	} case :call(var call) {
		print_call(call, ref state);
	} case :func(var func) {
		print_register_to_assign(func->dest, ref state);
		print(ref state, dfile::ssave({
				module=>func->module,
				name=>func->name
			}) . ';');
	} case :una_op(var una_op) {
		print_una_op(una_op, ref state);
	} case :bin_op(var bin_op) {
		print_bin_op(bin_op, ref state);
	} case :ov_is(var ov_is) {
		print_register_to_assign(ov_is->dest, ref state);
		print(ref state, 'c_rt_lib::ov_is(');
		print_register(ov_is->src, ref state);
		print(ref state, ', ''' . ov_is->type .''');');
	} case :ov_as(var ov_as) {
		print_register_to_assign(ov_as->dest, ref state);
		print(ref state, 'c_rt_lib::ov_as(');
		print_register(ov_as->src, ref state);
		print(ref state, ', ''' . ov_as->type .''');');
	} case :return(var return_i) {
		move_register_to_ref_args(ref state);
		match (return_i) case :val(var val) {
			print(ref state, 'return ');
			print_register(val, ref state);
			print(ref state, ';');
		} case :emp {
			print(ref state, 'return;');
		}
	} case :die(var die_i) {
		print(ref state, 'die(dfile::ssave(');
		print_register(die_i, ref state);
		print(ref state, '));');
	} case :move(var move) {
		print_register_to_assign(move->dest, ref state);
		print_register(move->src, ref state);
		print(ref state, ';');
	} case :load_const(var const){
		print_register_to_assign(const->dest, ref state);
		if(nl::is_sim(const->val) && string_utils::is_integer(const->val.'') && 0+const->val eq const->val){
			print(ref state, const->val . ';');
		} else {
			print(ref state, dfile::ssave(const->val) . ';');
		}
	} case :get_frm_idx(var get_frm_idx) {
		print_register_to_assign(get_frm_idx->dest, ref state);
		print_register(get_frm_idx->src, ref state);
		print(ref state, '->[');
		print_register(get_frm_idx->idx, ref state);
		print(ref state, '];');
	} case :set_at_idx(var set_at_idx) {
		print_set_at_idx(set_at_idx, ref state);
	} case :get_val(var get_val) {
		print_register_to_assign(get_val->dest, ref state);
		print_register(get_val->src, ref state);
		print(ref state, '->{'''. get_val->key. '''};');
	} case :set_val(var set_val) {
		print_set_val(set_val, ref state);
	} case :ov_mk(var ov_mk) {
		print_ov_mk(ov_mk, ref state);
	} case :prt_lbl(var prt_lbl) {
		print(ref state, prt_lbl . ':');
	} case :if_goto(var if_goto) {
		print(ref state, 'if (c_rt_lib::check_true(');
		print_register(if_goto->src, ref state);
		print(ref state, ')) {');
		print(ref state, 'goto ' . if_goto->dest . ';');
		print(ref state, '}');
	} case :goto(var goto) {
		print(ref state, 'goto ' . goto . ';');
	} case :clear(var reg) {
		print(ref state, 'undef(');
		print_register(reg, ref state);
		print(ref state, ');');
	}
	print(ref state, string::lf());
}

def print_call(call : @nlasm::call_t, ref state : @generator_pm::state_t) : ptd::void() {
	print_register_to_assign(call->dest, ref state);
	if (call->mod ne '') {
		print(ref state, call->mod . '::');
	} else {
		print(ref state, state->module_name . '_priv::');
	}
	print(ref state, call->fun_name . '(');
	
	var index = 0;
	fora var arg (call->args) {
		if (index > 0) {
			print(ref state, ', ');
		}
		match(arg) case :val(var value) {
			print_register(value, ref state);
		} case :ref(var addr) {
			print_register(addr, ref state);
		}
		++index;
	}
	print(ref state, ');');
}

def print_una_op(una_op : ptd::rec({dest => @nlasm::reg_t,src => @nlasm::reg_t,op => ptd::sim()}), ref state : @generator_pm::state_t) : ptd::void() {
	print_register_to_assign(una_op->dest, ref state);
	print(ref state, 'c_rt_lib::to_nl(') if (una_op->op eq '!');
	print(ref state, una_op->op);
	print(ref state, 'c_rt_lib::check_true(') if (una_op->op eq '!');
	print_register(una_op->src, ref state);
	print(ref state, '))') if (una_op->op eq '!');
	print(ref state, ';');
}

def print_bin_op(bin_op : ptd::rec({dest => @nlasm::reg_t,left => @nlasm::reg_t,right => @nlasm::reg_t,op => ptd::sim()}), ref state : @generator_pm::state_t) : ptd::void() {
	print_register_to_assign(bin_op->dest, ref state);
	if (bin_op->op eq '>=' ||
		bin_op->op eq '<=' ||
		bin_op->op eq '<' ||
		bin_op->op eq '>' ||
		bin_op->op eq '==' ||
		bin_op->op eq 'eq' ||
		bin_op->op eq '!=' ||
		bin_op->op eq 'ne') {
		print(ref state, 'c_rt_lib::to_nl(');
		print_register(bin_op->left, ref state);
		print(ref state, ' ' . bin_op->op . ' ');
		print_register(bin_op->right, ref state);
		print(ref state, ');');
	} else {
		print_register(bin_op->left, ref state);
		print(ref state, ' ' . bin_op->op . ' ');
		print_register(bin_op->right, ref state);
		print(ref state, ';');
	}
}

def print_set_at_idx(set_at_idx : ptd::rec({src => @nlasm::reg_t,idx => @nlasm::reg_t,val => @nlasm::reg_t}), ref state : @generator_pm::state_t) : ptd::void() {
	print(ref state, ' if (c_rt_lib::get_arrcount(');
	print_register(set_at_idx->src, ref state);
	print(ref state, ') > 1) {');
	print_register_to_assign(set_at_idx->src, ref state);
	print(ref state, '[@{');
	print_register(set_at_idx->src, ref state);
	print(ref state, '}];}');
	
	print_register(set_at_idx->src, ref state);
	print(ref state, '->[');
	print_register(set_at_idx->idx, ref state);
	print(ref state, '] = ');
	print_register(set_at_idx->val, ref state);
	print(ref state, ';');
}

def print_set_val(set_val : ptd::rec({src => @nlasm::reg_t,key => ptd::sim(),val => @nlasm::reg_t}), ref state : @generator_pm::state_t) : ptd::void() {
	print(ref state, ' if (c_rt_lib::get_hashcount(');
	print_register(set_val->src, ref state);
	print(ref state, ') > 1) {');
	print_register_to_assign(set_val->src, ref state);
	print(ref state, '{%{');
	print_register(set_val->src, ref state);
	print(ref state, '}};}');
	print_register(set_val->src, ref state);
	print(ref state, '->{'''. set_val->key. '''} = ');
	print_register(set_val->val, ref state);
	print(ref state, ';');
}

def print_ov_mk(ov_mk : @nlasm::ov_mk_t, ref state : @generator_pm::state_t) : ptd::void() {
	print_register_to_assign(ov_mk->dest, ref state);
	if(ov_mk->src is :emp && (ov_mk->name eq 'TRUE')){
		print(ref state, 'c_rt_lib::to_nl(1);');
	} elsif(ov_mk->src is :emp && (ov_mk->name eq 'FALSE')){
		print(ref state, 'c_rt_lib::to_nl(0);');
	} else {
		match (ov_mk->src) case :arg(var arg) {
			print(ref state, 'c_rt_lib::ov_mk_arg(''' . ov_mk->name . ''', ');
			print_register(arg, ref state);
			print(ref state, ');');
		} case :emp {
			print(ref state, 'c_rt_lib::ov_mk_none(''' . ov_mk->name . ''');');
		}
	}
}

def print_register(register : ptd::sim(), ref state : @generator_pm::state_t) : ptd::void() {
	return if (register eq '');
	print(ref state, '$memory_' . register . '');
}

def print_register_to_assign(register : ptd::sim(), ref state : @generator_pm::state_t) : ptd::void() {
	print_register(register, ref state);
	print(ref state, ' = ') if(register ne '');
}
