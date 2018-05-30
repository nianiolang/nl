###
# (c) Atinea Sp. z o.o.
# Stamp: PLE 2017-01-26
###

use ptd;
use nlasm;
use boolean_t;
use array;


def register_cleaner::clean_registers(ref nlasms : ptd::hash(@nlasm::result_t)) {
	var ret : ptd::hash(@nlasm::result_t) = {};
	forh var mod_name, var  mod (nlasms) {
		ret{mod_name} = clean(mod);
	}
	nlasms = ret;
}


def clean(module : @nlasm::result_t) : @nlasm::result_t {	
	var new_functions = [];
	fora var function (module->functions) {
		new_functions []= clean_f(function);
	}
	module->functions = new_functions;
	return module;
}


def clean_f(func : @nlasm::function_t) : @nlasm::function_t {
	var regs = find_unused_regs(func);
	
	var new_reg_index = 0;
	var map : ptd::hash(ptd::sim()) = {};
	rep var i (func->reg_size) {
		if (regs{i}) {
			map{i} = new_reg_index;
			++new_reg_index;
		}
	}
	map{''} = '';
	var new_func = func;
	new_func->reg_size = new_reg_index;
	new_func->commands = recalculate_registers(func->commands, map);
	return new_func;
}


def recalculate_registers(cmds : @nlasm::cmds_t, map : ptd::hash(ptd::sim())) : @nlasm::cmds_t {
	var new_cmds = [];
	fora var cmd (cmds) {
		var new_cmd;
		match (cmd->cmd) case :arr_decl(var arr) {
			var new_src = [];
			fora var el (arr->src) {
				new_src []= map{el};
			}
			new_cmd = :arr_decl({
				dest => map{arr->dest},
				src => new_src,
			});
		} case :hash_decl(var hash) {
			var new_keys = [];
			fora var el (hash->src) {
				new_keys []= {
					key => el->key, val => map{el->val},					
				};
			}
			new_cmd = :hash_decl({
				dest => map{hash->dest},
				src => new_keys,
			});
		} case :func(var func) {
			new_cmd = :func({
				dest => map{func->dest},
				module => func->module,
				name => func->name,
			});
		} case :call(var call) {
			var new_args = [];
			fora var el (call->args) {
				var new_el;
				match (el) case :val(var reg) {
					new_el = :val(map{reg});
				} case :ref(var reg) {
					new_el = :ref(map{reg});
				}
				new_args []= new_el;
			}
			new_cmd = :call({
				dest => map{call->dest},
				mod => call->mod,
				fun_name => call->fun_name,
				args => new_args,
			});
		} case :una_op(var op) {
			new_cmd = :una_op({
				dest => map{op->dest},
				src => map{op->src},
				op => op->op,
			});
		} case :bin_op(var op) {
			new_cmd = :bin_op({
				dest => map{op->dest},
				left => map{op->left},
				right => map{op->right},
				op => op->op,
			});
		} case :ov_is(var op) {
			new_cmd = :ov_is({
				dest => map{op->dest},
				src => map{op->src},
				type => op->type,
			});
		} case :ov_as(var op) {
			new_cmd = :ov_as({
				dest => map{op->dest},
				src => map{op->src},
				type => op->type,
			});
		} case :return(var ret) {
			match (ret) case :val(var val) {
				new_cmd = :return(:val(map{val}));
			} case :emp {
				new_cmd = :return(:emp);
			}
		} case :die(var as_die) {
			new_cmd = :die(map{as_die});
		} case :move(var move) {
			new_cmd = :move({
				dest => map{move->dest},
				src => map{move->src},
			});
		} case :load_const(var l) {
			new_cmd = :load_const({
				dest => map{l->dest},
				val => l->val,
			});
		} case :get_frm_idx(var idx) {
			new_cmd = :get_frm_idx({
				dest => map{idx->dest},
				src => map{idx->src},
				idx => map{idx->idx},
			});
		} case :set_at_idx(var idx) {
			new_cmd = :set_at_idx({
				src => map{idx->src},
				idx => map{idx->idx},
				val => map{idx->val},
			});
		} case :get_val(var val) {
			new_cmd = :get_val({
				key => val->key,
				dest => map{val->dest},
				src => map{val->src},
			});
		} case :set_val(var val) {
			new_cmd = :set_val({
				src => map{val->src},
				val => map{val->val},
				key => val->key,
			});
		} case :ov_mk(var ov) {
			var new_arg;
			match (ov->src) case :arg(var arg) {
				new_arg = :arg(map{arg});
			} case :emp {
				new_arg = :emp;
			}
			new_cmd = :ov_mk({
				dest => map{ov->dest},
				src => new_arg,
				name => ov->name,
			});
		} case :prt_lbl(var lbl) {
			new_cmd = :prt_lbl(lbl);
		} case :if_goto(var cond) {
			new_cmd = :if_goto({
				dest =>  cond->dest,
				src => map{cond->src},
			});
		} case :goto(var goto) {
			new_cmd = :goto(goto);
		} case :clear(var clear) {
			new_cmd = :clear(map{clear});
		}
		new_cmds []= {
			annotation => recalculate_annotation(cmd->annotation, map),
			debug => cmd->debug,
			cmd => new_cmd,
		};
	}
	return new_cmds;
}

def recalculate_annotation(annotation : @nlasm::annotation_t, map : ptd::hash(ptd::sim())) : @nlasm::annotation_t {
	match (annotation) case :none {
		return :none;
	} case :const(var regs) {
		var new_regs = [];
		fora var reg (regs) {
			new_regs []= map{reg};
		}
		return :const(new_regs);
	}
}

def find_unused_regs(func : @nlasm::function_t) : ptd::hash(@boolean_t::type) {
	var regs : ptd::hash(@boolean_t::type) = {};
	rep var i (func->reg_size) {
		regs{i} = false;
	}

	rep var i (array::len(func->args_type)) {
		regs{i} = true;
	}

	fora var cmd (func->commands) {
		match (cmd->cmd) case :arr_decl(var arr) {
			regs{arr->dest} = true;
			fora var el (arr->src) {
				regs{el} = true;
			}
		} case :hash_decl(var hash) {
			regs{hash->dest} = true;
			fora var el (hash->src) {
				regs{el->val} = true;
			}
		} case :func(var func_cmd) {
			regs{func_cmd->dest} = true;
		} case :call(var call) {
			regs{call->dest} = true;
			fora var el (call->args) {
				match (el) case :val(var reg) {
					regs{reg} = true;
				} case :ref(var reg) {
					regs{reg} = true;
				}
			}
		} case :una_op(var op) {
			regs{op->dest} = true;
			regs{op->src} = true;
		} case :bin_op(var op) {
			regs{op->dest} = true;
			regs{op->left} = true;
			regs{op->right} = true;
		} case :ov_is(var op) {
			regs{op->dest} = true;
			regs{op->src} = true;
		} case :ov_as(var op) {
			regs{op->dest} = true;
			regs{op->src} = true;
		} case :return(var ret) {
			match (ret) case :val(var val) {
				regs{val} = true;
			} case :emp {
			}
		} case :die(var as_die) {
			regs{as_die} = true;		
		} case :move(var move) {
			regs{move->dest} = true;
			regs{move->src} = true;
		} case :load_const(var l) {
			regs{l->dest} = true;
		} case :get_frm_idx(var idx) {
			regs{idx->dest} = true;
			regs{idx->src} = true;
			regs{idx->idx} = true;
		} case :set_at_idx(var idx) {
			regs{idx->val} = true;
			regs{idx->src} = true;
			regs{idx->idx} = true;
		} case :get_val(var val) {
			regs{val->dest} = true;
			regs{val->src} = true;
		} case :set_val(var val) {
			regs{val->src} = true;
			regs{val->val} = true;
		} case :ov_mk(var ov) {
			regs{ov->dest} = true;	
			match (ov->src) case :arg(var arg) {
				regs{arg} = true;
			} case :emp {
			}
		} case :prt_lbl(var lbl) {
		} case :if_goto(var cond) {
			regs{cond->src} = true;
		} case :goto(var goto) {
		} case :clear(var clear) {
			regs{clear} = true;
		}
	}
	return regs;
}
