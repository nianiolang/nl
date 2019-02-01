###
# (c) Atinea Sp. z o.o.
###


use array;
use hash;
use nlasm;
use ov;
use ptd;
use boolean_t;
use nast;
use func;
use nl;
use string;
use string_utils;
use dfile;
use c_rt_lib;
use profile_inter;

def interpreter::stack_element_t() {
	return ptd::rec({
			func_key => ptd::sim(),
			module_name => ptd::sim(),
			next => ptd::sim(),
			vars => ptd::arr(ptd::ptd_im()),
			ret => ptd::sim(),
			code_vars => ptd::hash(ptd::sim()),
			ref_arguments => ptd::hash(ptd::sim())
		});
}

def interpreter::module_labels_t() {
	return ptd::hash(ptd::hash(ptd::sim()));
}

def interpreter::known_exec_func_t() {
	return ptd::rec({
			func => ptd::ptd_im(),
			args => ptd::arr(@ptd::meta_type),
			return => ptd::var({yes => @ptd::meta_type, no => ptd::none()}),
			type => ptd::var({callback => ptd::none(), sequential => ptd::none()})
		});
}

def interpreter::state_t() {
	return ptd::rec({
			rstate => @interpreter::rstate_t,
			func => @nlasm::function_t,
			labels => ptd::hash(@interpreter::module_labels_t),
			functions => ptd::hash(@nlasm::function_t),
			stack => ptd::arr(@interpreter::stack_element_t),
			top => @interpreter::stack_element_t,
			instruction_nr => ptd::sim(),
			check_all_instructions => @boolean_t::type,
			known_exec_func => ptd::hash(@interpreter::known_exec_func_t),
			compiler_functions => ptd::hash(ptd::sim()),
			profile => ptd::arr(@profile_inter::row_t)
		});
}

def interpreter::rstate_t() {
	return ptd::var({
			running => ptd::none(),
			error => ptd::sim(),
			callback => @interpreter::callback_t,
			finished => ptd::rec({
					return => ptd::ptd_im(),
					ref_args => ptd::hash(ptd::ptd_im()),
					func => ptd::sim(),
					module => ptd::sim()
				})
		});
}

def interpreter::callback_t() {
	return ptd::rec({call => @nlasm::call_t, args => ptd::arr(ptd::ptd_im())});
}

def interpreter::stack_t() {
	return ptd::arr(@interpreter::stack_element_debug_t);
}

def interpreter::stack_element_debug_t() {
	return ptd::rec({
			variables => ptd::arr(ptd::rec({name => ptd::sim(), value => ptd::ptd_im()})),
			command_debug => @nast::debug_t,
			func_name => ptd::sim(),
			module_name => ptd::sim(),
			instruction_nr => ptd::sim()
		});
}

def interpreter::part_state_t() {
	return ptd::rec({
			labels => ptd::hash(@interpreter::module_labels_t),
			functions => ptd::hash(@nlasm::function_t),
			module_name => ptd::sim()
		});
}

def interpreter::part_state(nla : @nlasm::result_t) : @interpreter::part_state_t {
	return {labels => build_labels([nla]), functions => build_functions([nla]), module_name => nla->module_name};
}

def build_state(labels : ptd::hash(@interpreter::module_labels_t), functions : ptd::hash(@nlasm::function_t), 
	known_exec_func : ptd::hash(@interpreter::known_exec_func_t)) : @interpreter::state_t {
	return {
			rstate => :error('nie wywolano funkcji'),
			func => {annotation => :none, access => :priv, reg_size => 0, args_type => [], commands => [], name => ''},
			labels => labels,
			functions => functions,
			stack => [],
			top => {
				func_key => '',
				module_name => '',
				next => 0,
				vars => [],
				ret => '',
				code_vars => {},
				ref_arguments => {}
			},
			instruction_nr => -1,
			check_all_instructions => true,
			known_exec_func => known_exec_func,
			compiler_functions => get_compiler_functions(),
			profile => []
		};
}

def interpreter::init(nlasms : ptd::arr(@nlasm::result_t), known_exec_func : ptd::hash(@interpreter::known_exec_func_t)) 
	: @interpreter::state_t {
	return build_state(build_labels(nlasms), build_functions(nlasms), known_exec_func);
}

def interpreter::get_short_state(state : @interpreter::state_t) : @interpreter::state_t {
	state->labels = {};
	state->functions = {};
	return state;
}

def interpreter::init_from_part_and_short(state : @interpreter::state_t, state_parts : ptd::arr(
		@interpreter::part_state_t)) : @interpreter::state_t {
	fora var part (state_parts) {
		hash::add_all(ref state->labels, part->labels);
		hash::add_all(ref state->functions, part->functions);
	}
	return state;
}

def interpreter::init_from_short(state : @interpreter::state_t, nlasms : ptd::arr(@nlasm::result_t)) : 
	@interpreter::state_t {
	state->labels = build_labels(nlasms);
	state->functions = build_functions(nlasms);
	state->known_exec_func = {};
	return state;
}

def interpreter::init_from_part(state_parts : ptd::arr(@interpreter::part_state_t), known_exec_func : ptd::hash(
		@interpreter::known_exec_func_t)) : @interpreter::state_t {
	var labels = {};
	var functions = {};
	fora var part (state_parts) {
		hash::add_all(ref labels, part->labels);
		hash::add_all(ref functions, part->functions);
	}
	return build_state(labels, functions, known_exec_func);
}

def interpreter::start(ref state : @interpreter::state_t, main_fun : ptd::sim(), module_name : ptd::sim()) : ptd::var({
		ok => ptd::sim(),
		err => ptd::sim()
	}) {
	return interpreter::start_args(ref state, main_fun, module_name, []);
}

def interpreter::start_args(ref state : @interpreter::state_t, main_fun : ptd::sim(), module_name : ptd::sim(), 
	func_args : ptd::arr(ptd::ptd_im())) : ptd::var({ok => ptd::sim(), err => ptd::sim()}) {
	var key = module_name . '::' . main_fun;
	if (!hash::has_key(state->functions, key)) {
		return :err('brak funkcji ' . key);
	}
	var func = hash::get_value(state->functions, key);
	if (array::len(func->args_type) != array::len(func_args)) {
		return :err('niewlasciwa liczba argumentow: ' . array::len(func_args) . ' zamiast: ' . 
			array::len(func->args_type));
	}
	state->profile = [];
	profile_inter::begin(ref state->profile, key);
	state->rstate = :running;
	var new_vars = build_registers(func->reg_size);
	var new_ref_arguments = {};
	rep var idx (array::len(func->args_type)) {
		var arg = func->args_type[idx];
		match (arg) case :val {
		} case :ref {
			hash::set_value(ref new_ref_arguments, idx, idx);
		}
		new_vars[idx] = func_args[idx];
	}
	state->func = func;
	state->stack = [];
	state->top = {
			func_key => key,
			module_name => module_name,
			next => 0,
			vars => new_vars,
			ret => '',
			code_vars => {},
			ref_arguments => new_ref_arguments
		};
	state->instruction_nr = -1;
	handle_new_declarations(ref state);
	return :ok('');
}

def interpreter::exec_instruction(ref state : @interpreter::state_t, ins_nr : ptd::sim()) : @interpreter::rstate_t {
	state->instruction_nr = ins_nr;
	loop {
		match (state->rstate) case :error(var err) {
			return :error(err);
		} case :running {
			var cmd = get_command(state);
			if (!is_hidden(cmd)) {
				return :running unless state->instruction_nr == cmd->debug->instruction_nr;
			}
			step(ref state);
		} case :callback(var fun) {
			return state->rstate;
		} case :finished(var f) {
			return :finished(f);
		}
	}
	return :error('');
}
def interpreter::exec_all_code(state : @interpreter::state_t) {
	step(ref state);
	loop {
		match (state->rstate) case :error(var err) {
			return :err(err);
		} case :running {
			step(ref state);
		} case :callback(var fun) {
		} case :finished(var f) {
			return :ok(f);
		}
	}
	return :err;
}
def interpreter::evaluate_const(state : @interpreter::state_t, func : @nlasm::function_t, module : ptd::sim(), regs : 
	ptd::arr(ptd::ptd_im()), ins_nr : ptd::sim()) : ptd::var({ok => ptd::arr(ptd::ptd_im()), err => ptd::sim()}) {
	var key = get_func_key(func, module);
	die unless (hash::has_key(state->functions, key));
	state->rstate = :running;
	func = hash::get_value(state->functions, key);
	state->func = func;
	state->stack = [];
	state->top = {
			func_key => key,
			module_name => module,
			next => ins_nr,
			vars => regs,
			ret => '',
			code_vars => {},
			ref_arguments => {}
		};
	state->instruction_nr = -1;
	handle_new_declarations(ref state);
	step(ref state);
	var steps_done = 1;
	while (array::len(state->stack) != 0 && state->rstate is :running) {
		if (steps_done > nast::intepreter_evaluate_max_steps()) {
			return :err('steps limit exceeded');
		}
		step(ref state);
		++steps_done;
	}
	if (state->rstate is :error) {
		return :err(state->rstate as :error);
	} elsif (state->rstate is :callback) {
		return :err('function not found');
	} else {
		if (array::len(state->stack) != 0) {
			die([state->rstate, state->stack]);
		}
		return :ok(state->top->vars);
	}
}

def interpreter::get_none_variant() {
	return :none_variant_do_not_use;
}

def build_registers(reg_size) : ptd::arr(ptd::ptd_im()) {
	var reg = [];
	array::push(ref reg, interpreter::get_none_variant()) rep var i (reg_size);
	return reg;
}

def build_labels(nlasms : ptd::arr(@nlasm::result_t)) : ptd::hash(@interpreter::module_labels_t) {
	var result = {};
	fora var nlasm (nlasms) {
		var module = nlasm->module_name;
		var module_result = {};
		fora var func (nlasm->functions) {
			var key = get_func_key(func, module);
			var labels : ptd::hash(ptd::sim()) = {};
			rep var i (array::len(func->commands)) {
				var cmd = func->commands[i]->cmd;
				if (cmd is :prt_lbl) {
					var as_label = cmd as :prt_lbl;
					hash::set_value(ref labels, as_label, i);
				}
			}
			hash::set_value(ref module_result, key, labels);
		}
		hash::set_value(ref result, nlasm->module_name, module_result);
	}
	return result;
}

def build_functions(nlasms : ptd::arr(@nlasm::result_t)) : ptd::hash(@nlasm::function_t) {
	var result = {};
	fora var nlasm (nlasms) {
		var module = nlasm->module_name;
		fora var func (nlasm->functions) {
			var key = get_func_key(func, module);
			hash::set_value(ref result, key, func);
		}
	}
	return result;
}

def get_stack_element_debug(element : @interpreter::stack_element_t, state : @interpreter::state_t) : 
	@interpreter::stack_element_debug_t {
	var func = hash::get_value(state->functions, element->func_key);
	return {
			variables => get_variables(element),
			command_debug => func->commands[element->next]->debug->nast_debug,
			func_name => func->name,
			module_name => element->module_name,
			instruction_nr => func->commands[element->next]->debug->instruction_nr
		};
}

def interpreter::get_profile(state : @interpreter::state_t) : ptd::arr(@profile_inter::row_t) {
	return state->profile;
}

def interpreter::get_whole_stack_debug(state : @interpreter::state_t) : ptd::arr(@interpreter::stack_element_debug_t) {
	var result = [];
	array::push(ref result, get_stack_element_debug(state->top, state)) unless state->rstate is :finished;
	var stack_size = array::len(state->stack);
	rep var idx (stack_size) {
		array::push(ref result, get_stack_element_debug(state->stack[stack_size - idx - 1], state));
	}
	return result;
}

def interpreter::has_next_instruction(state : @interpreter::state_t) : @boolean_t::type {
	return state->top->next < array::len(state->func->commands);
}

def get_variables(element : @interpreter::stack_element_t) : ptd::arr(ptd::rec({
			name => ptd::sim(),
			value => ptd::ptd_im()
		})) {
	var result = [];
	forh var variable, var reg (element->code_vars) {
		var val = element->vars[reg];
		array::push(ref result, {name => variable, value => val});
	}
	return result;
}

def interpreter::get_instruction_nr(state : @interpreter::state_t) : ptd::sim() {
	return get_command(state)->debug->instruction_nr;
}

def is_hidden(cmd : @nlasm::cmd_t) : @boolean_t::type {
	return cmd->cmd is :prt_lbl || cmd->cmd is :clear;
}

def interpreter::execute_full_instruction(ref state : @interpreter::state_t) : ptd::void() {
	return unless state->rstate is :running;
	state->instruction_nr = interpreter::get_instruction_nr(state);
	loop {
		var cmd = get_command(state);
		if (!is_hidden(cmd)) {
			break unless state->instruction_nr == cmd->debug->instruction_nr;
		}
		step(ref state);
		break if state->rstate is :error;
		break unless interpreter::has_next_instruction(state);
	}
}

def handle_new_declarations(ref state : @interpreter::state_t) {
	return unless interpreter::has_next_instruction(state);
	var command = get_command(state);
	forh var variable, var reg (command->debug->declarations) {
		hash::set_value(ref state->top->code_vars, variable, reg);
	}
}

def step(ref state : @interpreter::state_t) : ptd::void() {
	die unless interpreter::has_next_instruction(state);
	var command : @nlasm::cmd_t = get_command(state);
	var command_cmd = command->cmd;
	++state->top->next;
	if (!check_command(state, command_cmd)) {
		state->rstate = :error('incorrect command');
		return;
	}
	match (command_cmd) case :arr_decl(var arr_decl) {
		var arr = [];
		array::push(ref arr, state->top->vars[reg]) fora var reg (arr_decl->src);
		state->top->vars[arr_decl->dest] = arr unless arr_decl->dest eq '';
	} case :hash_decl(var hash_decl) {
		var h = {};
		fora var map (hash_decl->src) {
			var val = state->top->vars[map->val];
			hash::set_value(ref h, map->key, val);
		}
		state->top->vars[hash_decl->dest] = h unless hash_decl->dest eq '';
	} case :call(var call) {
		var key;
		if (call->mod eq '') {
			key = state->top->module_name . '::priv::' . call->fun_name;
		} else {
			key = call->mod . '::' . call->fun_name;
		}
		if (hash::has_key(state->compiler_functions, key)) {
			handle_compiler_call(call, key, ref state);
		} elsif (hash::has_key(state->known_exec_func, key)) {
			handle_extern_call(call, ref state);
		} elsif (hash::has_key(state->functions, key)) {
			handle_normal_call(call, key, ref state);
		} else {
			handle_unknown_call(call, ref state);
		}
	} case :func(var func) {
		state->top->vars[func->dest] = {module => func->module, name => func->name} unless func->dest eq '';
	} case :una_op(var una_op) {
		var arg = state->top->vars[una_op->src];
		if ((una_op->op eq '+' || una_op->op eq '-') && (!string_utils::is_number(arg))) {
				state->rstate = :error('not an unary number');
				--state->top->next;
		} else {
			var result = execute_una_op(arg, una_op->op);
			state->top->vars[una_op->dest] = result unless una_op->dest eq '';
		}
	} case :bin_op(var bin_op) {
		var left = state->top->vars[bin_op->left];
		var right = state->top->vars[bin_op->right];
		var op = bin_op->op;
		if ((op eq '+' || op eq '-' || op eq '*' || op eq '/' || op eq '%' || op eq '<' || op eq '<=' || op eq '==' || op eq '!=' || op eq '>=' || op eq '>') && 
			((!string_utils::is_number(left) || !string_utils::is_number(right)))) {
				state->rstate = :error('not a number');
				--state->top->next;
		} else {
			var result = execute_bin_op(left, right, bin_op->op);
			state->top->vars[bin_op->dest] = result unless bin_op->dest eq '';
		}
	} case :ov_is(var ov_is) {
		state->top->vars[ov_is->dest] = ov::is(state->top->vars[ov_is->src], ov_is->type) unless ov_is->dest eq '';
	} case :ov_as(var ov_as) {
		state->top->vars[ov_as->dest] = ov::as(state->top->vars[ov_as->src], ov_as->type) unless ov_as->dest eq '';
	} case :return(var return_i) {
		handle_return(return_i, ref state);
	} case :die(var die_i) {
		state->rstate = :error('die' . dfile::ssave(state->top->vars[die_i]));
		--state->top->next;
	} case :move(var move) {
		state->top->vars[move->dest] = state->top->vars[move->src] unless move->dest eq '';
	} case :load_const(var const) {
		state->top->vars[const->dest] = const->val unless const->dest eq '';
	} case :get_frm_idx(var get_frm_idx) {
		var arr = state->top->vars[get_frm_idx->src];
		var idx = state->top->vars[get_frm_idx->idx];
		state->top->vars[get_frm_idx->dest] = arr[idx] unless get_frm_idx->dest eq '';
	} case :set_at_idx(var set_at_idx) {
		var arr = state->top->vars[set_at_idx->src];
		var idx = state->top->vars[set_at_idx->idx];
		var val = state->top->vars[set_at_idx->val];
		arr[idx] = val;
		state->top->vars[set_at_idx->src] = arr;
	} case :get_val(var get_val) {
		var val = hash::get_value(state->top->vars[get_val->src], get_val->key);
		state->top->vars[get_val->dest] = val unless get_val->dest eq '';
	} case :set_val(var set_val) {
		var hsh = state->top->vars[set_val->src];
		var val = state->top->vars[set_val->val];
		hash::set_value(ref hsh, set_val->key, val);
		state->top->vars[set_val->src] = hsh;
	} case :ov_mk(var ov_mk) {
		var val;
		match (ov_mk->src) case :arg(var arg) {
			val = ov::mk_val(ov_mk->name, state->top->vars[arg]);
		} case :emp {
			val = ov::mk(ov_mk->name);
		}
		state->top->vars[ov_mk->dest] = val unless ov_mk->dest eq '';
	} case :prt_lbl(var prt_lbl) {
	} case :if_goto(var if_goto) {
		goto(ref state, if_goto->dest) if state->top->vars[if_goto->src];
	} case :goto(var goto) {
		goto(ref state, goto);
	} case :clear(var reg) {
		if (reg ne '') {
			state->top->vars[reg] = interpreter::get_none_variant();
			forh var variable, var reg2 (state->top->code_vars) {
				if (reg == reg2) {
					hash::delete(ref state->top->code_vars, variable);
					break;
				}
			}
		}
	}
	handle_new_declarations(ref state);
}

def check_command(state : @interpreter::state_t, cmd : @nlasm::order_t) : @boolean_t::type {
	return true unless state->check_all_instructions;
	match (cmd) case :arr_decl(var arr_decl) {
	} case :hash_decl(var hash_decl) {
	} case :call(var call) {
	} case :func(var func) {
	} case :una_op(var una_op) {
		var arg = state->top->vars[una_op->src];
		if (una_op->op eq '!') {
			return false unless nl::is_variant(arg);
			return false unless (arg is :TRUE || arg is :FALSE);
		} else {
			return false unless nl::is_sim(arg);
		}
	} case :bin_op(var bin_op) {
		var left = state->top->vars[bin_op->left];
		var right = state->top->vars[bin_op->right];
		return false unless nl::is_sim(left);
		return false unless nl::is_sim(right);
	} case :ov_is(var ov_is) {
		return false unless nl::is_variant(state->top->vars[ov_is->src]);
		return false unless nl::is_sim(ov_is->type);
	} case :ov_as(var ov_as) {
		var arg = state->top->vars[ov_as->src];
		return false unless nl::is_variant(arg);
		return false unless nl::is_sim(ov_as->type);
		return false unless ov::is(arg, ov_as->type);
	} case :return(var return_i) {
	} case :die(var die_i) {
	} case :move(var move) {
	} case :load_const(var const) {
	} case :get_frm_idx(var get_frm_idx) {
		var arr = state->top->vars[get_frm_idx->src];
		return false unless nl::is_array(arr);
		var idx = state->top->vars[get_frm_idx->idx];
		return false unless nl::is_sim(idx);
		return false unless idx < array::len(arr);
		return false unless idx >= 0;
	} case :set_at_idx(var set_at_idx) {
		var arr = state->top->vars[set_at_idx->src];
		return false unless nl::is_array(arr);
		var idx = state->top->vars[set_at_idx->idx];
		return false unless nl::is_sim(idx);
		return false unless idx < array::len(arr);
	} case :get_val(var get_val) {
		var hash = state->top->vars[get_val->src];
		return false unless nl::is_hash(hash);
		return false unless nl::is_sim(get_val->key);
		return false unless hash::has_key(hash, get_val->key);
	} case :set_val(var set_val) {
		var hash = state->top->vars[set_val->src];
		return false unless nl::is_hash(hash);
		return false unless nl::is_sim(set_val->key);
	} case :ov_mk(var ov_mk) {
		return false unless nl::is_sim(ov_mk->name);
	} case :prt_lbl(var prt_lbl) {
	} case :if_goto(var if_goto) {
		var arg = state->top->vars[if_goto->src];
		return false unless nl::is_variant(arg);
		return false unless (arg is :TRUE || arg is :FALSE);
	} case :goto(var goto) {
	} case :clear(var reg) {
	}
	return true;
}

def interpreter::callback_value_t() {
	return ptd::var({
			ok => ptd::rec({
					return => @interpreter::return_t,
					args => ptd::arr(ptd::ptd_im()),
					profile => ptd::arr(@profile_inter::row_t)
				}),
			err => ptd::sim()
		});
}

def interpreter::return_t() {
	return ptd::var({yes => ptd::ptd_im(), no => ptd::none()});
}

def append_profile(ref state : @interpreter::state_t, profile : ptd::arr(@profile_inter::row_t)) : ptd::void() {
	var len = array::len(profile);
	return if len < 2;
	var minus = profile[0]->time;
	var plus = state->profile[array::len(state->profile) - 1]->time;
	profile[0]->time = plus;
	for(var i = 1; i < len; ++i) {
		var time = profile[i]->time;
		profile[i]->time = profile_inter::plus(profile_inter::minus(time, minus), plus);
	}
	array::append(ref state->profile, profile);
}

def interpreter::finish_callback(function : ptd::sim(), module : ptd::sim(), value : @interpreter::callback_value_t, ref 
	state : @interpreter::state_t) : ptd::void() {
	if (! state->rstate is :callback){
		state->rstate = :error('returned from another function compared to calling');
		return;
	}
	var callback = state->rstate as :callback;
	var call = callback->call;
	if (call->fun_name ne function || call->mod ne module){
		state->rstate = :error('returned to interpreter from another function: ' . module . '::' . function);
		return;
	}
	match (value) case :ok(var as_ok) {
		++state->top->next;
		match (as_ok->return) case :yes(var val) {
			state->top->vars[call->dest] = val unless call->dest eq '';
		} case :no {
			if(call->dest ne ''){
				state->rstate = :error('no value return from function: ' . module . '::' . function);
				return;
			}
		}
		append_profile(ref state, as_ok->profile);
		rep var i (array::len(call->args)) {
			match (call->args[i]) case :val(var reg) {
			} case :ref(var reg) {
				state->top->vars[reg] = as_ok->args[i];
			}
		}
		state->rstate = :running;
		handle_new_declarations(ref state);
	} case :err(var as_err) {
		state->rstate = :error(as_err);
	}
}

def handle_normal_call(call : @nlasm::call_t, key : ptd::sim(), ref state : @interpreter::state_t) : ptd::void() {
	--state->top->next;
	var new_module;
	if (call->mod eq '') {
		new_module = state->top->module_name;
	} else {
		new_module = call->mod;
	}
	profile_inter::begin(ref state->profile, key);
	var func = hash::get_value(state->functions, key);
	var new_vars = build_registers(func->reg_size);
	var new_code_vars = {};
	var new_ref_arguments = {};
	var arg_num = 0;
	rep var idx (array::len(call->args)) {
		var arg = call->args[idx];
		var value;
		match (arg) case :val(var reg) {
			value = state->top->vars[reg];
		} case :ref(var reg) {
			value = state->top->vars[reg];
			hash::set_value(ref new_ref_arguments, arg_num, reg);
		}
		new_vars[arg_num] = value;
		arg_num++;
	}
	array::push(ref state->stack, state->top);
	state->func = func;
	state->top = {
			func_key => key,
			module_name => new_module,
			next => 0,
			vars => new_vars,
			ret => call->dest,
			code_vars => new_code_vars,
			ref_arguments => new_ref_arguments
		};
	state->instruction_nr = -1;
}

def handle_unknown_call(call : @nlasm::call_t, ref state : @interpreter::state_t) : ptd::void() {
	var args = [];
	fora var arg (call->args) {
		var val;
		match (arg) case :val(var reg) {
			val = state->top->vars[reg];
		} case :ref(var reg) {
			val = state->top->vars[reg];
		}
		array::push(ref args, val);
	}
	state->rstate = :callback({call => call, args => args});
	state->instruction_nr = -1;
	--state->top->next;
}

def handle_extern_call(call : @nlasm::call_t, ref state : @interpreter::state_t) : ptd::void() {
	var args = [];
	fora var arg (call->args) {
		var val;
		match (arg) case :val(var reg) {
			val = state->top->vars[reg];
		} case :ref(var reg) {
			val = state->top->vars[reg];
		}
		array::push(ref args, val);
	}
	var func = hash::get_value(state->known_exec_func, call->mod . '::' . call->fun_name);
	if (array::len(func->args) != array::len(args)) {
		state->rstate = :error('incorrect console call');
		return;
	}
	rep var i (array::len(args)) {
		match(ptd::try_dynamic_cast(func->args[i], args[i])) case :ok(var ok){
		} case :err(var err){
			state->rstate = :error('incorrect type');
			return;
		}
	}
	match (func->type) case :sequential {
		if (call->dest eq '') {
			func::exec_ref(func->func, ref args);
		} else {
			state->top->vars[call->dest] = func::exec_ref(func->func, ref args);
		}
		rep var arg_num (array::len(call->args)) {
			var arg = call->args[arg_num];
			match (arg) case :val(var reg) {
			} case :ref(var reg) {
				state->top->vars[reg] = args[arg_num];
			}
		}
	} case :callback {
		state->rstate = :callback({call => call, args => args});
		state->instruction_nr = -1;
		--state->top->next;
	}
}

def get_compiler_functions() : ptd::hash(ptd::sim()) {
	var ret = {};
	hash::set_value(ref ret, 'array::push', '');
	hash::set_value(ref ret, 'array::pop', '');
	hash::set_value(ref ret, 'array::subarray', '');
	hash::set_value(ref ret, 'array::append', '');
	hash::set_value(ref ret, 'array::len', '');
	hash::set_value(ref ret, 'array::sort', '');
	hash::set_value(ref ret, 'hash::get_value', '');
	hash::set_value(ref ret, 'hash::has_key', '');
	hash::set_value(ref ret, 'hash::set_value', '');
	hash::set_value(ref ret, 'hash::delete', '');
	hash::set_value(ref ret, 'hash::size', '');
	hash::set_value(ref ret, 'hash::keys', '');
	hash::set_value(ref ret, 'string::lf', '');
	hash::set_value(ref ret, 'string::tab', '');
	hash::set_value(ref ret, 'string::length', '');
	hash::set_value(ref ret, 'string::substr', '');
	hash::set_value(ref ret, 'string::is_digit', '');
	hash::set_value(ref ret, 'string::is_letter', '');
	hash::set_value(ref ret, 'string::ord', '');
	hash::set_value(ref ret, 'string::chr', '');
	hash::set_value(ref ret, 'ov::mk', '');
	hash::set_value(ref ret, 'ov::mk_val', '');
	hash::set_value(ref ret, 'ov::has_value', '');
	hash::set_value(ref ret, 'ov::get_element', '');
	hash::set_value(ref ret, 'ov::get_value', '');
	hash::set_value(ref ret, 'ov::is', '');
	hash::set_value(ref ret, 'ov::as', '');
	hash::set_value(ref ret, 'c_rt_lib::array_len', '');
	hash::set_value(ref ret, 'c_rt_lib::array_push', '');
	hash::set_value(ref ret, 'c_rt_lib::set_ref_arr', '');
	hash::set_value(ref ret, 'c_rt_lib::set_ref_hash', '');
	hash::set_value(ref ret, 'c_rt_lib::get_ref_arr', '');
	hash::set_value(ref ret, 'c_rt_lib::get_ref_hash', '');
	hash::set_value(ref ret, 'c_rt_lib::init_iter', '');
	hash::set_value(ref ret, 'c_rt_lib::is_end_hash', '');
	hash::set_value(ref ret, 'c_rt_lib::get_key_iter', '');
	hash::set_value(ref ret, 'c_rt_lib::hash_get_value', '');
	hash::set_value(ref ret, 'c_rt_lib::hash_set_value', '');
	hash::set_value(ref ret, 'c_rt_lib::next_iter', '');
	hash::set_value(ref ret, 'ptd::sim', '');
	hash::set_value(ref ret, 'ptd::hash', '');
	hash::set_value(ref ret, 'ptd::arr', '');
	hash::set_value(ref ret, 'ptd::none', '');
	hash::set_value(ref ret, 'ptd::var', '');
	hash::set_value(ref ret, 'ptd::ptd_im', '');
	hash::set_value(ref ret, 'ptd::ensure', '');
	return ret;
}

def handle_array_call(key : ptd::sim(), ref ret_val : ptd::ptd_im(), ref args : ptd::arr(ptd::ptd_im())) : ptd::var({
		ok => ptd::sim(),
		err => ptd::sim()
	}) {
	var error_message = :err('incorrect command');
	return error_message unless nl::is_array(args[0]);
	if (key eq 'array::push') {
		array::push(ref args[0], args[1]);
	} elsif (key eq 'array::pop') {
		return error_message unless array::len(args[0]) > 0;
		array::pop(ref args[0]);
	} elsif (key eq 'array::subarray') {
		return error_message unless (nl::is_sim(args[1]) && nl::is_sim(args[2]));
		return error_message unless (string_utils::is_number(args[1]) && string_utils::is_number(args[2]));
		return error_message unless (args[1] >= 0 && args[1] < array::len(args[0]));
		return error_message unless args[2] >= 0;
		return error_message unless (args[1] + args[2] >= 0 && args[1] + args[2] - 1 < array::len(args[0]));
		ret_val = array::subarray(args[0], args[1], args[2]);
	} elsif (key eq 'array::append') {
		return error_message unless nl::is_array(args[1]);
		array::append(ref args[0], args[1]);
	} elsif (key eq 'array::len') {
		ret_val = array::len(args[0]);
	} elsif (key eq 'array::sort') {
		match(ptd::try_dynamic_cast(ptd::arr(ptd::sim()), args[0])) case :ok(var ok){
		} case :err(var err){
			return :err('incorrect type');
		}
		array::sort(ref ret_val);
	} else {
		die;
	}
	return :ok('');
}

def handle_hash_call(key : ptd::sim(), ref ret_val : ptd::ptd_im(), ref args : ptd::arr(ptd::ptd_im())) : ptd::var({
		ok => ptd::sim(),
		err => ptd::sim()
	}) {
	var error_message = :err('incorrect command');
	return error_message unless nl::is_hash(args[0]);
	if (key eq 'hash::get_value') {
		return error_message unless nl::is_sim(args[1]);
		return error_message unless hash::has_key(args[0], args[1]);
		ret_val = hash::get_value(args[0], args[1]);
	} elsif (key eq 'hash::has_key') {
		return error_message unless nl::is_sim(args[1]);
		ret_val = hash::has_key(args[0], args[1]);
	} elsif (key eq 'hash::set_value') {
		return error_message unless nl::is_sim(args[1]);
		hash::set_value(ref args[0], args[1], args[2]);
	} elsif (key eq 'hash::delete') {
		return error_message unless nl::is_sim(args[1]);
		hash::delete(ref args[0], args[1]);
	} elsif (key eq 'hash::size') {
		ret_val = hash::size(args[0]);
	} elsif (key eq 'hash::keys') {
		ret_val = hash::keys(args[0]);
	} else {
		die;
	}
	return :ok('');
}

def handle_string_call(key : ptd::sim(), ref ret_val : ptd::ptd_im(), ref args : ptd::arr(ptd::ptd_im())) : ptd::var({
		ok => ptd::sim(),
		err => ptd::sim()
	}) {
	var error_message = :err('incorrect command');
	if (key eq 'string::lf') {
		ret_val = string::lf();
	} elsif (key eq 'string::tab') {
		ret_val = string::tab();
	} elsif (key eq 'string::ord') {
		return error_message unless nl::is_sim(args[0]);
		return error_message unless string::length(args[0]) == 1;
		ret_val = string::ord(args[0]);
	} elsif (key eq 'string::chr') {
		return error_message unless nl::is_sim(args[0]);
		return error_message unless string_utils::is_number(args[0]);
		ret_val = string::chr(args[0]);
	} else {
		return error_message unless nl::is_sim(args[0]);
		if (key eq 'string::length') {
			ret_val = string::length(args[0]);
		} elsif (key eq 'string::substr') {
			return error_message unless (nl::is_sim(args[1]) && nl::is_sim(args[2]));
			return error_message unless (string_utils::is_number(args[1]) && string_utils::is_number(args[2]));
			return error_message unless (args[1] >= 0 && args[1] < string::length(args[0]));
			return error_message unless args[2] >= 0;
			return error_message unless (args[1] + args[2] >= 0 && args[1] + args[2] - 1 < string::length(args[0]));
			ret_val = string::substr(args[0], args[1], args[2]);
		} elsif (key eq 'string::is_digit') {
			return error_message unless string::length(args[0]) == 1;
			ret_val = string::is_digit(args[0]);
		} elsif (key eq 'string::is_letter') {
			return error_message unless string::length(args[0]) == 1;
			ret_val = string::is_letter(args[0]);
		} else {
			die;
		}
	}
	return :ok('');
}

def handle_ov_call(key : ptd::sim(), ref ret_val : ptd::ptd_im(), ref args : ptd::arr(ptd::ptd_im())) : ptd::var({
		ok => ptd::sim(),
		err => ptd::sim()
	}) {
	var error_message = :err('incorrect command');
	if (key eq 'ov::mk') {
		return error_message unless nl::is_sim(args[0]);
		ret_val = ov::mk(args[0]);
	} elsif (key eq 'ov::mk_val') {
		return error_message unless nl::is_sim(args[0]);
		ret_val = ov::mk_val(args[0], args[1]);
	} else {
		return error_message unless nl::is_variant(args[0]);
		if (key eq 'ov::has_value') {
			ret_val = ov::has_value(args[0]);
		} elsif (key eq 'ov::get_element') {
			ret_val = ov::get_element(args[0]);
		} elsif (key eq 'ov::get_value') {
			ret_val = ov::get_value(args[0]);
		} elsif (key eq 'ov::is') {
			return error_message unless nl::is_sim(args[1]);
			ret_val = ov::is(args[0], args[1]);
		} elsif (key eq 'ov::as') {
			return error_message unless nl::is_sim(args[1]);
			return error_message unless ov::is(args[0], args[1]);
			ret_val = ov::as(args[0], args[1]);
		}
	}
	return :ok('');
}

def handle_ptd_call(key : ptd::sim(), ref ret_val : ptd::ptd_im(), ref args : ptd::arr(ptd::ptd_im())) : ptd::var({
		ok => ptd::sim(),
		err => ptd::sim()
	}) {
	var error_message = :err('incorrect command');
	if (key eq 'ptd::sim') {
		ret_val = ptd::sim();
	} elsif (key eq 'ptd::none') {
		ret_val = ptd::none();
	} elsif (key eq 'ptd::ptd_im') {
		ret_val = ptd::ptd_im();
	} elsif (key eq 'ptd::arr') {
		match(ptd::try_cast(@ptd::meta_type, args[0])) case :ok(var ok){
			ret_val = ptd::arr(ok);
		} case :err(var err){
			return :err('incorrect type');
		}
	} elsif (key eq 'ptd::hash') {
		match(ptd::try_cast(@ptd::meta_type, args[0])) case :ok(var ok){
			ret_val = ptd::hash(ok);
		} case :err(var err){
			return :err('incorrect type');
		}
	} elsif (key eq 'ptd::var') {
		ret_val = ptd::var(args[0]);
	} elsif (key eq 'ptd::ensure') {
		match(ptd::try_dynamic_cast(args[0], args[1])) case :ok(var ok){
			ret_val = ok;
		} case :err(var err){
			return :err('incorrect type');
		}
	} else {
		return error_message;
	}
	return :ok('');
}

def handle_c_rt_lib_call(key : ptd::sim(), ref ret_val : ptd::ptd_im(), ref args : ptd::arr(ptd::ptd_im())) : ptd::var({
		ok => ptd::sim(),
		err => ptd::sim()
	}) {
	var error_message = :err('incorrect command');
	if (key eq 'c_rt_lib::array_len') {
		return error_message unless nl::is_array(args[0]);
		ret_val = c_rt_lib::array_len(args[0]);
	} elsif (key eq 'c_rt_lib::array_push') {
		return error_message unless nl::is_array(args[0]);
		array::push(ref args[0], args[1]);
	} elsif (key eq 'c_rt_lib::set_ref_arr') {
		return error_message unless nl::is_array(args[0]);
		return error_message unless nl::is_sim(args[1]);
		return error_message unless string_utils::is_number(args[1]);
		return error_message unless (args[1] >= 0 && args[1] < array::len(args[0]));
		c_rt_lib::set_ref_arr(ref args[0], args[1], args[2]);
	} elsif (key eq 'c_rt_lib::set_ref_hash') {
		return error_message unless nl::is_hash(args[0]);
		return error_message unless nl::is_sim(args[1]);
		c_rt_lib::set_ref_hash(ref args[0], args[1], args[2]);
	} elsif (key eq 'c_rt_lib::get_ref_arr') {
		return error_message unless nl::is_array(args[0]);
		return error_message unless nl::is_sim(args[1]);
		return error_message unless string_utils::is_number(args[1]);
		return error_message unless (args[1] >= 0 && args[1] < array::len(args[0]));
		ret_val = c_rt_lib::get_ref_arr(args[0], args[1]);
	} elsif (key eq 'c_rt_lib::get_ref_hash') {
		return error_message unless nl::is_hash(args[0]);
		return error_message unless nl::is_sim(args[1]);
		return error_message unless hash::has_key(args[0], args[1]);
		ret_val = c_rt_lib::get_ref_hash(args[0], args[1]);
	} elsif (key eq 'c_rt_lib::init_iter') {
		return error_message unless nl::is_hash(args[0]);
		ret_val = c_rt_lib::init_iter(args[0]);
	} elsif (key eq 'c_rt_lib::is_end_hash') {
		ret_val = c_rt_lib::is_end_hash(args[0]);
	} elsif (key eq 'c_rt_lib::get_key_iter') {
		ret_val = c_rt_lib::get_key_iter(args[0]);
	} elsif (key eq 'c_rt_lib::hash_get_value') {
		return error_message unless nl::is_hash(args[0]);
		return error_message unless nl::is_sim(args[1]);
		return error_message unless hash::has_key(args[0], args[1]);
		ret_val = c_rt_lib::hash_get_value(args[0], args[1]);
	} elsif (key eq 'c_rt_lib::hash_set_value') {
		return error_message unless nl::is_hash(args[0]);
		return error_message unless nl::is_sim(args[1]);
		c_rt_lib::hash_set_value(ref args[0], args[1], args[2]);
	} elsif (key eq 'c_rt_lib::next_iter') {
		ret_val = c_rt_lib::next_iter(args[0]);
	}
	return :ok('');
}

def handle_compiler_call(call : @nlasm::call_t, key : ptd::sim(), ref state : @interpreter::state_t) : ptd::void() {
	var args = [];
	fora var arg (call->args) {
		var val;
		match (arg) case :val(var reg) {
			val = state->top->vars[reg];
		} case :ref(var reg) {
			val = state->top->vars[reg];
		}
		array::push(ref args, val);
	}
	var ret_val = '';
	var call_result;
	if (call->mod eq 'array') {
		call_result = handle_array_call(key, ref ret_val, ref args);
	} elsif (call->mod eq 'hash') {
		call_result = handle_hash_call(key, ref ret_val, ref args);
	} elsif (call->mod eq 'string') {
		call_result = handle_string_call(key, ref ret_val, ref args);
	} elsif (call->mod eq 'ov') {
		call_result = handle_ov_call(key, ref ret_val, ref args);
	} elsif (call->mod eq 'c_rt_lib') {
		call_result = handle_c_rt_lib_call(key, ref ret_val, ref args);
	} elsif (call->mod eq 'ptd') {
		call_result = handle_ptd_call(key, ref ret_val, ref args);
	} else {
		die;
	}
	if (call_result is :err) {
		state->rstate = :error((call_result as :err) .' for call function: '. key);
	} else {
		rep var arg_num (array::len(call->args)) {
			var arg = call->args[arg_num];
			match (arg) case :val(var reg) {
			} case :ref(var reg) {
				state->top->vars[reg] = args[arg_num];
			}
		}
		state->top->vars[call->dest] = ret_val unless call->dest eq '';
	}
}

def handle_return(return_i : ptd::var({val => @nlasm::reg_t, emp => ptd::none()}), ref state : @interpreter::state_t) : 
		ptd::void() {
	var retval = interpreter::get_none_variant();
	match (return_i) case :val(var val) {
		retval = state->top->vars[val];
	} case :emp {
	}
	profile_inter::end(ref state->profile, state->top->func_key);
	if (array::len(state->stack) == 0) {
		state->top->next = array::len(state->func->commands);
		var to_ret = {};
		forh var nr, var none (state->top->ref_arguments) {
			hash::set_value(ref to_ret, nr, state->top->vars[nr]);
		}
		state->rstate = :finished({
				return => retval,
				ref_args => to_ret,
				func => state->func->name,
				module => state->top->module_name
			});
	} else {
		var old_ref_arguments = state->top->ref_arguments;
		var old_vars = state->top->vars;
		var old_ret = state->top->ret;
		var selem = state->stack[array::len(state->stack) - 1];
		array::pop(ref state->stack);
		state->top = selem;
		state->func = hash::get_value(state->functions, state->top->func_key);
		forh var arg, var reg (old_ref_arguments) {
			var value = old_vars[arg];
			state->top->vars[reg] = value;
		}
		state->top->vars[old_ret] = retval unless old_ret eq '';
	}
	state->instruction_nr = -1;
	++state->top->next;
}

def goto(ref state : @interpreter::state_t, label : ptd::sim()) : ptd::void() {
	var module_labels = hash::get_value(state->labels, state->top->module_name);
	var func_labels = hash::get_value(module_labels, state->top->func_key);
	if (!hash::has_key(func_labels, label)) {
		die;
	}
	state->top->next = hash::get_value(func_labels, label) + 1;
}

def execute_bin_op(left, right, op : ptd::sim()) {
	return left + right if op eq '+';
	return left - right if op eq '-';
	return left * right if op eq '*';
	return left / right if op eq '/';
	return left % right if op eq '%';
	return left == right if op eq '==';
	return left != right if op eq '!=';
	return left < right if op eq '<';
	return left <= right if op eq '<=';
	return left > right if op eq '>';
	return left >= right if op eq '>=';
	return left . right if op eq '.';
	return left && right if op eq '&&';
	return left || right if op eq '||';
	return left eq right if op eq 'eq';
	return left ne right if op eq 'ne';
	die;
}

def execute_una_op(arg, op : ptd::sim()) {
	return !arg if op eq '!';
	return -arg if op eq '-';
	return +arg if op eq '+';
	die;
}

def get_command(state : @interpreter::state_t) : @nlasm::cmd_t {
	return state->func->commands[state->top->next];
}

def get_func_key(func : @nlasm::function_t, module : ptd::sim()) : ptd::sim() {
	var key = module . '::';
	if (func->access is :priv) {
		key .= 'priv::';
	}
	key .= func->name;
	return key;
}

