###
# (c) Atinea Sp. z o.o.
# Stamp: PLE 2017-01-26
###


use ptd;
use nlasm;
use array;
use interpreter;
use hash;
use flow_graph;
use post_processing_t;


def const_evaluator::evaluate_const_in_modules(ref state : @post_processing_t::state_t, changed_functions : ptd::hash(ptd::sim()), ref 
	new_modules_results : ptd::hash(@nlasm::result_t), math_fs : @post_processing_t::math_funs_t) {
	var nlasms_arr = [];
	forh var module, var nlasm (state->nl_asm) {
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

def evaluate_const_in_function(func : @nlasm::function_t, module : ptd::sim(), math_fs : @post_processing_t::math_funs_t, 
	interpreter_state : @interpreter::state_t) : ptd::arr(@nlasm::cmd_t) {
	var blocks : @flow_graph::blocks_t = flow_graph::make_blocks(func->commands, func->args_type);
	evaluate_const_in_blocks(ref blocks, math_fs, func, module, interpreter_state);
	return flow_graph::combine_blocks(blocks);
}

def evaluate_const_in_blocks(ref blocks : @flow_graph::blocks_t, math_fs : @post_processing_t::math_funs_t, func : 
	@nlasm::function_t, module : ptd::sim(), interpreter_state : @interpreter::state_t) {
	var regs = [];
	rep var i (func->reg_size) {
		array::push(ref regs, :no);
	}
	var state = [];
	var val = {was => 0, regs => []};
	rep var i (array::len(blocks)) {
		array::push(ref state, val);
	}
	die if (array::len(blocks) == 0);
	var new_blocks = blocks;
	set_const_block_val(0, blocks, ref new_blocks, math_fs, ref state, interpreter_state, regs, func, module);
	blocks = new_blocks;
}

def check_sub_val(ref const : @post_processing_t::reg_val_const, reg : @post_processing_t::reg_val_const) {
	if (reg is :no) {
		const = :no;
	}
}

def evaluate_const(func : @nlasm::function_t, module : ptd::sim(), ins_nr : ptd::sim(), ref const : 
	@post_processing_t::reg_val_const, ref registers : ptd::arr(@post_processing_t::reg_val_const), state : 
	@interpreter::state_t, const_dest : ptd::arr(ptd::sim())) : ptd::void() {
	if (const is :no) {
		fora var dest (const_dest) {
			registers[dest] = :no unless dest eq '';
		}
		return;
	}
	var as_yes = const as :yes;
	var regs : ptd::arr(ptd::ptd_im()) = [];
	fora var reg (registers) {
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
		fora var dest (const_dest) {
			registers[dest] = :no unless dest eq '';
		}
	} else {
		var new_regs = res as :ok;
		rep var dest_nr (array::len(const_dest)) {
			var dest = const_dest[dest_nr];
			registers[dest] = :yes({nr => 10000 * as_yes->nr + dest_nr, value => new_regs[dest]}) unless dest eq '';
		}
	}
}

def push_load_const(ref cmds : ptd::arr(@nlasm::cmd_t), const : @post_processing_t::reg_val_const, dest : ptd::sim(), 
	old_cmd : @nlasm::cmd_t) {
	die unless const is :yes;
	var as_const = const as :yes;
	array::push(ref cmds, {
			debug => old_cmd->debug,
			annotation => :const([dest]),
			cmd => :load_const({dest => dest, val => as_const->value})
		});
}

def set_const_block_val(number : ptd::sim(), blocks : @flow_graph::blocks_t, ref new_blocks : @flow_graph::blocks_t, 
	math_fs : @post_processing_t::math_funs_t, ref state : @post_processing_t::const_reg_val_t, interpreter_state : 
	@interpreter::state_t, regs : ptd::arr(@post_processing_t::reg_val_const), func : @nlasm::function_t, module : 
		ptd::sim()) {
	var block = blocks[number];
	if (state[number]->was > 0) {
		var diff = false;
		var oregs = state[number]->regs;
		rep var i (array::len(regs)) {
			if (oregs[i] is :no) {
				regs[i] = :no;
				continue;
			} else {
				if (regs[i] is :yes) {
					var a = regs[i] as :yes;
					var b = oregs[i] as :yes;
					continue if (a->nr == b->nr);
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
		var const : @post_processing_t::reg_val_const = :yes({nr => i + block->from, value => ''});
		var cmd = cmds[i];
		var const_dest : ptd::arr(ptd::sim()) = [];
		match (cmd->cmd) case :arr_decl(var arr_decl) {
			fora var one (arr_decl->src) {
				check_sub_val(ref const, regs[one]);
			}
			const_dest = [arr_decl->dest];
			evaluate_const(func, module, ins_nr, ref const, ref regs, interpreter_state, const_dest);
		} case :hash_decl(var hash_decl) {
			fora var one (hash_decl->src) {
				check_sub_val(ref const, regs[one->val]);
			}
			const_dest = [hash_decl->dest];
			evaluate_const(func, module, ins_nr, ref const, ref regs, interpreter_state, const_dest);
		} case :call(var call) {
			fora var one (call->args) {
				match (one) case :val(var val) {
					check_sub_val(ref const, regs[val]);
				} case :ref(var ref_) {
					check_sub_val(ref const, regs[ref_]);
					array::push(ref const_dest, ref_);
				}
			}
			array::push(ref const_dest, call->dest);
			var fun_name = (call->mod eq '' ? module . '_priv' : call->mod) . '::' . call->fun_name;
			if (hash::has_key(math_fs, fun_name)) {
				const = :no unless hash::get_value(math_fs, fun_name);
			} else {
				const = :no;
			}
			if (call->mod eq 'c_rt_lib') {
				if (call->fun_name eq 'init_iter' || call->fun_name eq 'is_end_hash' || call->fun_name eq 'get_key_iter' 
					|| call->fun_name eq 'next_iter') {
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
		} case :func(var as_func) {
			const_dest = [as_func->dest];
			const = :no;
			evaluate_const(func, module, ins_nr, ref const, ref regs, interpreter_state, const_dest);
		} case :move(var move) {
			check_sub_val(ref const, regs[move->src]);
			const_dest = [move->dest];
			evaluate_const(func, module, ins_nr, ref const, ref regs, interpreter_state, const_dest);
		} case :load_const(var as_const) {
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
			if (ov_mk->src is :arg) {
				check_sub_val(ref const, regs[ov_mk->src as :arg]);
			}
			const_dest = [ov_mk->dest];
			evaluate_const(func, module, ins_nr, ref const, ref regs, interpreter_state, const_dest);
		} case :return(var return_i) {
			const = :no;
			if (return_i is :val) {
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
		} case :clear(var reg) {
			const = :no;
			regs[reg] = :no;
		}
		if (const is :yes) {
			fora var dest (const_dest) {
				push_load_const(ref new_cmds, regs[dest], dest, cmds[i]) unless dest eq '';
			}
		} else {
			array::push(ref new_cmds, cmd);
		}
	}
	new_blocks[number]->cmds = new_cmds;
	fora var n (block->next) {
		set_const_block_val(n, blocks, ref new_blocks, math_fs, ref state, interpreter_state, regs, func, module);
	}
}


