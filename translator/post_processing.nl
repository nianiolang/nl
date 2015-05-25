###
# (c) Atinea Sp. z o.o.
# MZU 2014-03-21
### 

use ptd;
use nlasm;
use array;
use ov;
use hash;
use boolean_t;
use flow_graph;
use unnecessary_commands;
use interpreter;

def post_processing::fun_tree_t(){
	return ptd::hash(ptd::hash(ptd::hash(ptd::arr(ptd::sim()))));
}
def post_processing::state_t(){
	return ptd::rec({
		nl_asm => ptd::hash(@nlasm::result_t),
		mat_fun_def => ptd::hash(ptd::sim()),
		math_fs => @post_processing::math_funs_t,
		fun_calls => @post_processing::fun_tree_t,
		const_com => @post_processing::math_funs_t,
		optimization => @post_processing::optimization_t,
		interpreter_state => @interpreter::state_t,
	});
}
def post_processing::math_funs_t(){
	return ptd::hash(@boolean_t::type);
}
def post_processing::reg_const(){
	return ptd::var({no=>ptd::none(), yes=>ptd::sim()});
}
def post_processing::reg_val_const(){
	return ptd::var({
		no => ptd::none(), 
		yes => ptd::rec({
			nr => ptd::sim(),
			value => ptd::ptd_im()
		})
	});
}
def post_processing::optimization_t(){
	return ptd::var({o0=>ptd::none(), o1=>ptd::none(), o2=>ptd::none(), o3=>ptd::none(), o4=>ptd::none()});
}
def post_processing::const_reg_t() {
	return ptd::arr(ptd::rec({regs => ptd::arr(@post_processing::reg_const), was => ptd::sim()}));
}
def post_processing::const_reg_val_t() {
	return ptd::arr(
		ptd::rec({
			regs => ptd::arr(@post_processing::reg_val_const), 
			was => ptd::sim(),
		})
	);
}

def get_command_for_const() : @post_processing::math_funs_t{
	var ret = {};
	hash::set_value(ref ret, 'arr_decl', true);
	hash::set_value(ref ret, 'hash_decl', true);
	hash::set_value(ref ret, 'func', true);
	hash::set_value(ref ret, 'load_const', true);
	# hash::set_value(ref ret, 'call', true);
	# hash::set_value(ref ret, 'una_op', true);
	# hash::set_value(ref ret, 'bin_op', true);
	# hash::set_value(ref ret, 'ov_is', true);
	# hash::set_value(ref ret, 'ov_as', true);
	# hash::set_value(ref ret, 'get_frm_idx', true);
	# hash::set_value(ref ret, 'set_at_idx', true);
	# hash::set_value(ref ret, 'get_val', true);
	# hash::set_value(ref ret, 'set_val', true);
	hash::set_value(ref ret, 'ov_mk', true);
	return ret;
}

def post_processing::init(mat_fun_def : ptd::hash(ptd::sim()), o : @post_processing::optimization_t) : @post_processing::state_t {
	var state = {nl_asm => {}, fun_calls=>{}, math_fs=>{}};
	state->mat_fun_def = mat_fun_def;
	state->optimization = o;
	state->const_com = get_command_for_const();
	state->interpreter_state = interpreter::init([], {});
	return state;
}
def post_processing::clear_module_from_state(ref state : @post_processing::state_t, module : ptd::sim()) {
	hash::delete(ref state->nl_asm, module);
	hash::delete(ref state->fun_calls, module);
}
def delete_unused_labels(ref nlasms : ptd::hash(@nlasm::result_t)){
	var ret = {};
	forh var name, var module (nlasms){
		var mod : @nlasm::result_t = module;
		rep var i (array::len(mod->functions)){
			delete_unused_labels_com(ref mod->functions[i]->commands);
		}
		hash::set_value(ref ret, name, mod);
	}
	nlasms = ret;
}
def delete_unnecessary_commands(ref nlasms : ptd::hash(@nlasm::result_t), changed_functions : ptd::hash(ptd::sim())) {
	var ret = {};
	forh var name, var module (nlasms){
		var mod : @nlasm::result_t = module;
		rep var i (array::len(mod->functions)){
			var fun = mod->functions[i];
			var f_key = module->module_name . (fun->access is :pub ? '::' : '_priv::') . fun->name;
			if (hash::has_key(changed_functions, f_key)) {
				unnecessary_commands::delete_unnecessary_commands(ref mod->functions[i]);
			}
		}
		hash::set_value(ref ret, name, mod);
	}
	nlasms = ret;
}

def post_processing::find(ref state : @post_processing::state_t, ref nlasms : ptd::hash(@nlasm::result_t)) {
	delete_unused_labels(ref nlasms);
	return if(state->optimization is :o0);
	
	set_function_calls(ref state->fun_calls, nlasms);
	var math_fs = get_math_fun(state->fun_calls, state->mat_fun_def);

	forh var name, var module (nlasms){
		hash::set_value(ref state->nl_asm, name, module);
	}
	var changed_functions = {};
	match (state->optimization) case :o0 {
	} case :o1 {
		set_mathfun_in_modules(ref state, math_fs, ref changed_functions, ref nlasms);
	} case :o2 {
		set_mathfun_in_modules(ref state, math_fs, ref changed_functions, ref nlasms);
		set_const_commands_in_modules(ref state, changed_functions, ref nlasms, state->const_com, math_fs);
	} case :o3 {
		set_mathfun_in_modules(ref state, math_fs, ref changed_functions, ref nlasms);
		set_const_commands_in_modules(ref state, changed_functions, ref nlasms, state->const_com, math_fs);
		delete_unnecessary_commands(ref nlasms, changed_functions);
	} case :o4 {
		set_mathfun_in_modules(ref state, math_fs, ref changed_functions, ref nlasms);
		set_interpreted_changed_functions(state, math_fs, ref changed_functions);
		evaluate_const_in_modules(ref state, changed_functions, ref nlasms, math_fs);
		delete_unnecessary_commands(ref nlasms, changed_functions);
	}
	delete_unused_labels(ref nlasms);
	state->math_fs = math_fs;
}
def set_const_commands_in_modules(ref state : @post_processing::state_t, 
		changed_functions : ptd::hash(ptd::sim()), ref new_modules_results : ptd::hash(@nlasm::result_t),
		const_com : @post_processing::math_funs_t, math_fs : @post_processing::math_funs_t ) {
	fora var mod_n (hash::keys(state->nl_asm)) {
		var module = hash::get_value(state->nl_asm, mod_n);
		var change_mod = false;
		rep var i (array::len(module->functions)) {
			var fun = module->functions[i];
			var f_key = mod_n . (fun->access is :pub ? '::' : '_priv::') . fun->name;
			if (hash::has_key(changed_functions, f_key)) {
				change_mod = true;
				var blocks : @flow_graph::blocks_t = flow_graph::make_blocks(fun->commands, fun->args_type);
				set_const_reg(ref blocks, math_fs, module->module_name, fun->reg_size);
				var coms = flow_graph::combine_blocks(blocks);
				rep var j (array::len(coms)){
					var com = coms[j];
					if(!hash::has_key(const_com, ov::get_element(com->cmd))){
						if(com->annotation is :const){
							coms[j]->annotation = :none;
						}
					}
				}
				fun->commands = coms;
				module->functions[i] = fun;
			}
		}
		continue unless change_mod;
		hash::set_value(ref state->nl_asm, mod_n, module);
		hash::set_value(ref new_modules_results, mod_n, module);
	}
}

def evaluate_const_in_modules(ref state : @post_processing::state_t, 
		changed_functions : ptd::hash(ptd::sim()), ref new_modules_results : ptd::hash(@nlasm::result_t),
		math_fs : @post_processing::math_funs_t) {
	var nlasms_arr = [];
	forh var module, var nlasm(state->nl_asm) {
		array::push(ref nlasms_arr, nlasm);
	}
	state->interpreter_state = interpreter::init(nlasms_arr, {});
	fora var mod_n (hash::keys(state->nl_asm)) {
		var module = hash::get_value(state->nl_asm, mod_n);
		var change_mod = false;
		rep var i (array::len(module->functions)) {
			var fun = module->functions[i];
			var f_key = mod_n . (fun->access is :pub ? '::' : '_priv::') . fun->name;
			if (hash::has_key(changed_functions, f_key)) {
				change_mod = true;
				fun->commands = evaluate_const_in_function(fun, module->module_name, math_fs, state->interpreter_state);
				module->functions[i] = fun;
			}
		}
		continue unless change_mod;
		hash::set_value(ref state->nl_asm, mod_n, module);
		hash::set_value(ref new_modules_results, mod_n, module);
	}	
}
def evaluate_const_in_function(func : @nlasm::function_t, module : ptd::sim(),
		math_fs : @post_processing::math_funs_t, interpreter_state : @interpreter::state_t) : ptd::arr(@nlasm::cmd_t) {
	var blocks : @flow_graph::blocks_t = flow_graph::make_blocks(func->commands, func->args_type);
	evaluate_const_in_blocks(ref blocks, math_fs, func, module, interpreter_state);
	return flow_graph::combine_blocks(blocks);
}
def set_interpreted_changed_functions(state : @post_processing::state_t, math_fs : @post_processing::math_funs_t,
		ref changed_functions : ptd::hash(ptd::sim())) {
	var fun_calls = state->fun_calls;
	forh var mod_n, var module(state->nl_asm) {
		fora var fun(module->functions) {
			var pre = (fun->access is :pub ? '::' : '_priv::') . fun->name;
			var f_key = mod_n . pre;
			var calls = hash::get_value(hash::get_value(fun_calls, mod_n), pre);
			forh var called_func, var none(calls) {
				continue unless hash::has_key(changed_functions, called_func);
				var is_math = hash::get_value(math_fs, called_func);
				continue unless is_math;
				hash::set_value(ref changed_functions, f_key, '');
			}
		}
	}
}
	
def get_called_switched(fun_calls : @post_processing::fun_tree_t, switched : @post_processing::math_funs_t) : @post_processing::math_funs_t {
	var called = {};
	forh var mod_n, var module (fun_calls){
		forh var fun_n, var calls (module){
			forh var f_key, var t_call (calls){
				if(hash::has_key(switched, f_key)){
					hash::set_value(ref called, f_key, true);
				}
			}
		}
	}
	return called;
}
def get_switched_func(old : @post_processing::math_funs_t, new : @post_processing::math_funs_t) : @post_processing::math_funs_t {
	var ret = {};
	forh var name, var n (new){
		if(hash::has_key(old, name)){
			var o = hash::get_value(old, name);
			continue if(o && n || !o && !n);
		}
		hash::set_value(ref ret, name, n);
	}
	return ret;
}
def set_function_calls(ref arch : @post_processing::fun_tree_t, nlasms : ptd::hash(@nlasm::result_t)){
	forh var name, var module (nlasms){
		var fun_mod = {};
		fora var fun (module->functions){
			var calls = {};
			fora var cmd (fun->commands){
				continue unless cmd->cmd is :call;
				var as_call = cmd->cmd as :call;
				var mod_n = as_call->mod;
				var fun_n = '::'.as_call->fun_name;
				if(mod_n eq ''){
					mod_n = name;
					fun_n = '_priv'.fun_n;
				}
				hash::set_value(ref calls, mod_n.fun_n, [mod_n, fun_n]);
			}
			var pre = fun->access is :pub ? '::' : '_priv::';
			hash::set_value(ref fun_mod, pre . fun->name, calls);
		}
		hash::set_value(ref arch, name, fun_mod);
	}
}

def get_math_fun(arch : @post_processing::fun_tree_t, mat_fun : ptd::hash(ptd::sim())) : @post_processing::math_funs_t {
	var math_fs : @post_processing::math_funs_t = {};
	forh var name, var none (mat_fun){
		hash::set_value(ref math_fs, name, true);
	}
	forh var mod_n, var module (arch){
		forh var fun_n, var calls (module){
			hash::set_value(ref math_fs, mod_n.fun_n, true);
		}
	}
	var called_in : ptd::hash(ptd::hash(ptd::sim()))= {};
	var unknown : @post_processing::math_funs_t = {};
	forh var mod_n, var module (arch){
		forh var fun_n, var calls (module){
			forh var key, var t_call (calls) {
				var used = {};
				if(hash::has_key(called_in, key)){
					used = hash::get_value(called_in, key);
				}
				hash::set_value(ref unknown, key, true) unless hash::has_key(math_fs, key);
				
				hash::set_value(ref used, mod_n.fun_n, 0);
				hash::set_value(ref called_in, key, used);
			}
		}
	}
	forh var key, var none (unknown){
		hash::set_value(ref math_fs, key, true);
		set_non_math_fun_rec(ref math_fs, key, called_in);
	}
	return math_fs;
}
def set_non_math_fun_rec(ref math_fs : @post_processing::math_funs_t, key : ptd::sim(), called_in : ptd::hash(ptd::hash(ptd::sim()))) {
	return unless hash::get_value(math_fs, key);
	hash::set_value(ref math_fs, key, false);
	return unless hash::has_key(called_in, key);
	var fun_in = hash::get_value(called_in, key);
	forh var key2, var none (fun_in) {
		set_non_math_fun_rec(ref math_fs, key2, called_in);
	}
}

def set_mathfun_in_modules(ref state : @post_processing::state_t, math_fs : @post_processing::math_funs_t, 
		ref changed_functions : ptd::hash(ptd::sim()), ref new_modules_results : ptd::hash(@nlasm::result_t)) {
	var switched = get_switched_func(state->math_fs, math_fs);
	var called_switched = get_called_switched(state->fun_calls, switched);
	fora var name (hash::keys(state->nl_asm)){
		var module = hash::get_value(state->nl_asm, name);
		var change_mod = false;
		rep var i (array::len(module->functions)){
			var change_fun = false;
			var fun = module->functions[i];
			var f_key = module->module_name . (fun->access is :pub ? '::' : '_priv::') . fun->name;
			var is_math = hash::get_value(math_fs, f_key);
			if(is_math && !fun->annotation is :math){
				module->functions[i]->annotation = :math;
				change_fun = true;
			} elsif(!is_math && !fun->annotation is :state){
				module->functions[i]->annotation = :state;
				change_fun = true;
			}
			change_fun = true if hash::has_key(called_switched, f_key);
			if (change_fun) {
				hash::set_value(ref changed_functions, f_key, '');
				change_mod = true;
			}
		}
		continue unless change_mod;
		hash::set_value(ref new_modules_results, name, module);
		hash::set_value(ref state->nl_asm, name, module);
	}
}
def set_const_reg(ref blocks : @flow_graph::blocks_t, math_fs : @post_processing::math_funs_t, mod_name : ptd::sim(), reg_size) {
	var regs = [];
	rep var i (reg_size){
		array::push(ref regs, :no);
	}
	var state = [];
	var val = {was => 0, regs => []};
	rep  var i (array::len(blocks)){
		array::push(ref state, val);
	}
	die if(array::len(blocks)==0);
	set_const_block(0, ref blocks, math_fs, ref state, mod_name, regs);
}
def evaluate_const_in_blocks(ref blocks : @flow_graph::blocks_t, math_fs : @post_processing::math_funs_t, 
		func : @nlasm::function_t, module : ptd::sim(), interpreter_state : @interpreter::state_t) {
	var regs = [];
	rep var i (func->reg_size){
		array::push(ref regs, :no);
	}
	var state = [];
	var val = {was => 0, regs => []};
	rep  var i (array::len(blocks)){
		array::push(ref state, val);
	}
	die if(array::len(blocks)==0);
	var new_blocks = blocks;
	
	set_const_block_val(0, blocks, ref new_blocks, math_fs, ref state, interpreter_state, regs, func, module);
	blocks = new_blocks;
}
def check_sub(ref const : @post_processing::reg_const, reg : @post_processing::reg_const, ref sum : ptd::arr(ptd::sim())){
	match(reg) case :no {
		const = :no;
	} case :yes(var i){
		array::push(ref sum, i);
	}
}
def check_sub_val(ref const : @post_processing::reg_val_const, reg : @post_processing::reg_val_const){
	if (reg is :no) {
		const = :no;
	}
}

def set_const_block(number : ptd::sim(), ref blocks : @flow_graph::blocks_t, math_fs : @post_processing::math_funs_t, ref state : @post_processing::const_reg_t, mod_name : ptd::sim(), regs : ptd::arr(@post_processing::reg_const)){
	var block = blocks[number];
	if(state[number]->was>0) {
		var diff = false;
		var oregs = state[number]->regs;
		rep var i (array::len(regs)){
			if(oregs[i] is :no){
				regs[i] = :no;
				continue;
			} else {
				if(regs[i] is :yes){
					var a = regs[i] as :yes;
					var b = oregs[i] as :yes;
					continue if(a == b);
				}
				regs[i] = :no;
				diff = true;
			}
		}
		return unless diff;
		state[number]->regs = regs;
	} else {
		state[number]->regs = regs;
	}
	state[number]->was++;
	var cmds = block->cmds;
	rep var i (array::len(cmds)) {
		var info = [];
		var set_c = [];
		var const : @post_processing::reg_const = :yes(i + block->from);
		match (cmds[i]->cmd) case :arr_decl(var arr_decl) {
			fora var one (arr_decl->src){
				check_sub(ref const, regs[one], ref info);
			}
			regs[arr_decl->dest] = const unless arr_decl->dest eq '';
			array::push(ref set_c, arr_decl->dest);
		} case :hash_decl(var hash_decl) {
			fora var one (hash_decl->src){
				check_sub(ref const, regs[one->val], ref info);
			}
			regs[hash_decl->dest] = const unless hash_decl->dest eq '';
			array::push(ref set_c, hash_decl->dest);
		} case :call(var call) {
			var fun_name = (call->mod eq '' ? mod_name . '_priv' : call->mod) . '::' . call->fun_name;
			if(hash::has_key(math_fs, fun_name)){
				const = :no unless hash::get_value(math_fs, fun_name);
			} else {
				const = :no;
			}
			if(const is :yes){
				fora var one (call->args){
					match(one) case :val(var val) {
						check_sub(ref const, regs[val], ref info);
					} case :ref(var ref_) {
						check_sub(ref const, regs[ref_], ref info);
					}
				}
			}
			fora var one (call->args){
				match(one) case :val(var val) {
				} case :ref(var ref_) {
					regs[ref_] = const;
					array::push(ref set_c, ref_);
				}
			}
			regs[call->dest] = const unless call->dest eq '';
			array::push(ref set_c, call->dest);
		} case :una_op(var una_op) {
			check_sub(ref const, regs[una_op->src], ref info);
			regs[una_op->dest] = const unless una_op->dest eq '';
			array::push(ref set_c, una_op->dest);
		} case :bin_op(var bin_op) {
			check_sub(ref const, regs[bin_op->left], ref info);
			check_sub(ref const, regs[bin_op->right], ref info);
			regs[bin_op->dest] = const unless bin_op->dest eq '';
			array::push(ref set_c, bin_op->dest);
		} case :ov_is(var ov_is) {
			check_sub(ref const, regs[ov_is->src], ref info);
			regs[ov_is->dest] = const unless ov_is->dest eq '';
			array::push(ref set_c, ov_is->dest);
		} case :ov_as(var ov_as) {
			check_sub(ref const, regs[ov_as->src], ref info);
			regs[ov_as->dest] = const unless ov_as->dest eq '';
			array::push(ref set_c, ov_as->dest);
		} case :func(var func){
			regs[func->dest] = const unless func->dest eq '';
			array::push(ref set_c, func->dest);
		} case :move(var move) {
			check_sub(ref const, regs[move->src], ref info);
			regs[move->dest] = const unless move->dest eq '';
			array::push(ref set_c, move->dest);
		} case :load_const(var as_const){
			regs[as_const->dest] = const unless as_const->dest eq '';
			array::push(ref set_c, as_const->dest);
		} case :get_frm_idx(var get_frm_idx) {
			check_sub(ref const, regs[get_frm_idx->src], ref info);
			check_sub(ref const, regs[get_frm_idx->idx], ref info);
			regs[get_frm_idx->dest] = const unless get_frm_idx->dest eq '';
			array::push(ref set_c, get_frm_idx->dest);
		} case :set_at_idx(var set_at_idx) {
			check_sub(ref const, regs[set_at_idx->src], ref info);
			check_sub(ref const, regs[set_at_idx->idx], ref info);
			check_sub(ref const, regs[set_at_idx->val], ref info);
			regs[set_at_idx->src] = const;
			array::push(ref set_c, set_at_idx->src);
		} case :get_val(var get_val) {
			check_sub(ref const, regs[get_val->src], ref info);
			regs[get_val->dest] = const unless get_val->dest eq '';
			array::push(ref set_c, get_val->dest);
		} case :set_val(var set_val) {
			check_sub(ref const, regs[set_val->src], ref info);
			check_sub(ref const, regs[set_val->val], ref info);
			regs[set_val->src] = const;
			array::push(ref set_c, set_val->src);
		} case :ov_mk(var ov_mk) {
			if(ov_mk->src is :arg){
				check_sub(ref const, regs[ov_mk->src as :arg], ref info);
			}
			regs[ov_mk->dest] = const unless ov_mk->dest eq '';
			array::push(ref set_c, ov_mk->dest);
		} case :return(var return_i) {
			if(return_i is :val){
				check_sub(ref const, regs[return_i as :val], ref info);
			}
		} case :die(var die_i) {
			check_sub(ref const, regs[die_i], ref info);
		} case :prt_lbl(var label) {
			const = :no;
		} case :if_goto(var label) {
			check_sub(ref const, regs[label->src], ref info);
		} case :goto(var label) {
			const = :no;
		} case :clear(var reg){
			check_sub(ref const, regs[reg], ref info);
			regs[reg] = :no;
		}
		var set_len = array::len(set_c);
		if(set_len > 0 && set_c[set_len-1] eq ''){
			array::pop(ref set_c);
		}
		cmds[i]->annotation = const is :yes ? :const(set_c) : :none;
	}
	block->cmds = cmds;
	blocks[number] = block;
	fora var n (block->next){
		set_const_block(n, ref blocks, math_fs, ref state, mod_name, regs);
	}
}

def evaluate_const(func : @nlasm::function_t, module : ptd::sim(), ins_nr : ptd::sim(), ref const : @post_processing::reg_val_const,
		ref registers : ptd::arr(@post_processing::reg_val_const), state : @interpreter::state_t, const_dest : ptd::arr(ptd::sim())) : ptd::void() {
	if (const is :no) {
		fora var dest(const_dest) {
			registers[dest] = :no unless dest eq '';
		}
		return;
	}
	var as_yes = const as :yes;
	var regs : ptd::arr(ptd::ptd_im()) = [];
	fora var reg(registers) {
		var val = interpreter::get_none_variant();
		if (reg is :yes) {
			var as_reg = reg as :yes;
			val = as_reg->value;
		}
		array::push(ref regs, val);
	}
	var res = interpreter::evaluate_const(state, func, module, regs, ins_nr);
	if (res is :err) {
		const = :no;
		fora var dest(const_dest) {
			registers[dest] = :no unless dest eq '';
		}
	} else {
		var new_regs = res as :ok;
		rep var dest_nr(array::len(const_dest)) {
			var dest = const_dest[dest_nr];
			registers[dest] = :yes({nr => 10000 * as_yes->nr + dest_nr, value => new_regs[dest]}) unless dest eq '';
		}
	}
}
def push_load_const(ref cmds : ptd::arr(@nlasm::cmd_t), const : @post_processing::reg_val_const, dest : ptd::sim(), old_cmd : @nlasm::cmd_t) {
	die unless const is :yes;
	var as_const = const as :yes;
	array::push(ref cmds, {
		debug => old_cmd->debug, 
		annotation => :const([dest]), 
		cmd => :load_const({
			dest => dest,
			val => as_const->value
		})
	});
}
def set_const_block_val(number : ptd::sim(), blocks : @flow_graph::blocks_t, ref new_blocks : @flow_graph::blocks_t, 
		math_fs : @post_processing::math_funs_t, ref state : @post_processing::const_reg_val_t, interpreter_state : @interpreter::state_t,
		regs : ptd::arr(@post_processing::reg_val_const), func : @nlasm::function_t, module : ptd::sim()){
	var block = blocks[number];
	if(state[number]->was>0) {
		var diff = false;
		var oregs = state[number]->regs;
		rep var i (array::len(regs)){
			if(oregs[i] is :no){
				regs[i] = :no;
				continue;
			} else {
				if(regs[i] is :yes){
					var a = regs[i] as :yes;
					var b = oregs[i] as :yes;
					continue if(a->nr == b->nr);
				}
				regs[i] = :no;
				diff = true;
			}
		}
		return unless diff;
	}
	state[number]->regs = regs;
	var new_cmds = [];
	state[number]->was++;
	var cmds = block->cmds;
	rep var i (array::len(cmds)) {
		var ins_nr = block->from + i;
		var const : @post_processing::reg_val_const = :yes({nr => i + block->from, value => ''});
		var cmd = cmds[i];
		var const_dest : ptd::arr(ptd::sim()) = [];
		match (cmd->cmd) case :arr_decl(var arr_decl) {
			fora var one (arr_decl->src){
				check_sub_val(ref const, regs[one]);
			}
			const_dest = [arr_decl->dest];
			evaluate_const(func, module, ins_nr, ref const, ref regs, interpreter_state, const_dest);
		} case :hash_decl(var hash_decl) {
			fora var one (hash_decl->src){
				check_sub_val(ref const, regs[one->val]);
			}
			const_dest = [hash_decl->dest];
			evaluate_const(func, module, ins_nr, ref const, ref regs, interpreter_state, const_dest);
		} case :call(var call) {
			fora var one (call->args){
				match(one) case :val(var val) {
					check_sub_val(ref const, regs[val]);
				} case :ref(var ref_) {
					check_sub_val(ref const, regs[ref_]);
					array::push(ref const_dest, ref_);
				}
			}
			array::push(ref const_dest, call->dest);
			var fun_name = (call->mod eq '' ? module . '_priv' : call->mod) . '::' . call->fun_name;
			if(hash::has_key(math_fs, fun_name)){
				const = :no unless hash::get_value(math_fs, fun_name);
			} else {
				const = :no;
			}
			if (call->mod eq 'c_rt_lib') {
				if (call->fun_name eq 'init_iter' || call->fun_name eq 'is_end_hash' || call->fun_name eq 'get_key_iter' || call->fun_name eq 'next_iter') {
					const = :no;
				}
			}
			evaluate_const(func, module, ins_nr, ref const, ref regs, interpreter_state, const_dest);
		} case :una_op(var una_op) {
			check_sub_val(ref const, regs[una_op->src]);
			const_dest = [una_op->dest];
			evaluate_const(func, module, ins_nr, ref const, ref regs, interpreter_state, const_dest);
		} case :bin_op(var bin_op) {
			check_sub_val(ref const, regs[bin_op->left]);
			check_sub_val(ref const, regs[bin_op->right]);
			const_dest = [bin_op->dest];
			evaluate_const(func, module, ins_nr, ref const, ref regs, interpreter_state, const_dest);
		} case :ov_is(var ov_is) {
			check_sub_val(ref const, regs[ov_is->src]);
			const_dest = [ov_is->dest];
			evaluate_const(func, module, ins_nr, ref const, ref regs, interpreter_state, const_dest);
		} case :ov_as(var ov_as) {
			check_sub_val(ref const, regs[ov_as->src]);
			const_dest = [ov_as->dest];
			evaluate_const(func, module, ins_nr, ref const, ref regs, interpreter_state, const_dest);
		} case :func(var as_func){
			const_dest = [as_func->dest];
			const = :no;
			evaluate_const(func, module, ins_nr, ref const, ref regs, interpreter_state, const_dest);	
		} case :move(var move) {
			check_sub_val(ref const, regs[move->src]);
			const_dest = [move->dest];
			evaluate_const(func, module, ins_nr, ref const, ref regs, interpreter_state, const_dest);
		} case :load_const(var as_const){
			const_dest = [as_const->dest];
			const = :yes({nr => i + block->from, value => as_const->val});
			regs[as_const->dest] = const unless as_const->dest eq '';
			cmd->annotation = :const([as_const->dest]);
		} case :get_frm_idx(var get_frm_idx) {
			check_sub_val(ref const, regs[get_frm_idx->src]);
			check_sub_val(ref const, regs[get_frm_idx->idx]);
			const_dest = [get_frm_idx->dest];
			evaluate_const(func, module, ins_nr, ref const, ref regs, interpreter_state, const_dest);
		} case :set_at_idx(var set_at_idx) {
			check_sub_val(ref const, regs[set_at_idx->src]);
			check_sub_val(ref const, regs[set_at_idx->idx]);
			check_sub_val(ref const, regs[set_at_idx->val]);
			const_dest = [set_at_idx->src];
			evaluate_const(func, module, ins_nr, ref const, ref regs, interpreter_state, const_dest);
		} case :get_val(var get_val) {
			check_sub_val(ref const, regs[get_val->src]);
			const_dest = [get_val->dest];
			evaluate_const(func, module, ins_nr, ref const, ref regs, interpreter_state, const_dest);
		} case :set_val(var set_val) {
			check_sub_val(ref const, regs[set_val->src]);
			check_sub_val(ref const, regs[set_val->val]);
			const_dest = [set_val->src];
			evaluate_const(func, module, ins_nr, ref const, ref regs, interpreter_state, const_dest);
		} case :ov_mk(var ov_mk) {
			if(ov_mk->src is :arg){
				check_sub_val(ref const, regs[ov_mk->src as :arg]);
			}
			const_dest = [ov_mk->dest];
			evaluate_const(func, module, ins_nr, ref const, ref regs, interpreter_state, const_dest);
		} case :return(var return_i) {
			const = :no;
			if(return_i is :val){
				check_sub_val(ref const, regs[return_i as :val]);
			}
		} case :die(var die_i) {
			const = :no;
			check_sub_val(ref const, regs[die_i]);
		} case :prt_lbl(var label) {
			const = :no;
		} case :if_goto(var as_if) {
			const = :no;
			check_sub_val(ref const, regs[as_if->src]);
		} case :goto(var label) {
			const = :no;
		} case :clear(var reg){
			const = :no;
			regs[reg] = :no;
		}
		if (const is :yes) {
			fora var dest(const_dest) {
				push_load_const(ref new_cmds, regs[dest], dest, cmds[i]) unless dest eq '';
			}
		} else {
			array::push(ref new_cmds, cmd);
		}
	}
	new_blocks[number]->cmds = new_cmds;
	fora var n (block->next){
		set_const_block_val(n, blocks, ref new_blocks, math_fs, ref state, interpreter_state, regs, func, module);
	}
}
def delete_unused_labels_com(ref commands : ptd::arr(@nlasm::cmd_t)) : ptd::void() {
	var used = {};
	var repeated = {};
	var label;
	var last_label = '';
	fora var cmd (commands){
		var com = cmd->cmd;
		if(com is :prt_lbl){
			label = com as :prt_lbl;
			if(last_label eq ''){
				last_label = label;
			} else {
				hash::set_value(ref repeated, label, last_label);
			}
		} else {
			last_label = '';
		}
		if (com is :goto){
			label = com as :goto;
			hash::set_value(ref used, label, label);
		} elsif (com is :if_goto){
			label = com as :if_goto;
			hash::set_value(ref used, label->dest, label->dest);
		}
	}
	forh var r, var n (repeated){
		if(hash::has_key(used, r)){
			hash::set_value(ref used, n, n);
		}
	}
	var ret = [];
	fora var cmd (commands){
		var com = cmd->cmd;
		if(com is :prt_lbl){
			label = com as :prt_lbl;
			continue if hash::has_key(repeated, label);
			continue unless hash::has_key(used, label);
		} elsif (com is :goto){
			label = com as :goto;
			label = hash::get_value(repeated, label) if hash::has_key(repeated, label);
			com = :goto(label);
		} elsif (com is :if_goto){
			label = com as :if_goto;
			label->dest = hash::get_value(repeated, label->dest) if hash::has_key(repeated, label->dest);
			com = :if_goto(label);
		}
		var cop = cmd;
		cop->cmd = com;
		array::push(ref ret, cop);
	}
	commands = ret;
}

