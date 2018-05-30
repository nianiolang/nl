###
# (c) Atinea Sp. z o.o.
# PLE 2016-11-10
###

use ptd;
use nast;

def reference_generator::fun_ref() {
	return ptd::rec({
		module => @reference_generator::module,
		name => ptd::sim(),
	});
}

def reference_generator::module() {
	return ptd::sim();
}

def reference_generator::refs() {
	return ptd::arr(
		ptd::var({
			ref => ptd::rec({
				module => @reference_generator::module,
				line => ptd::sim(),
				position => ptd::sim(),
				type => @reference_generator::ref_type,
			}),
			deref => ptd::var({
				create => @reference_generator::deref_type,
				delete => @reference_generator::deref_type,
			}),
		}),
	);
}

def reference_generator::deref_type() {
	return ptd::rec({line => ptd::sim(), module => ptd::sim(), type_name => ptd::sim()});
}

def reference_generator::ref_type() {
	return ptd::var({
		import => @reference_generator::module,
		function_definition => @reference_generator::fun_ref,
		function_reference => @reference_generator::fun_ref,
	});
}

def reference_generator::generate(asts : ptd::hash(@nast::module_t)) : @reference_generator::refs {
	var ret = [];
	forh var module_name, var ast (asts) {
		process_module(ref ret, ast);
	}
	return ret;
}


def process_module(ref ret : @reference_generator::refs, ast : @nast::module_t) {
	fora var import (ast->import) {
		ret []= :ref({
			module => ast->name,
			line => import->line,
			position => 1,
			type => :import(import->name),
		});
	}

	fora var fun_def (ast->fun_def) {
		process_fun_def(ref ret, ast->name, fun_def);
	}
}

def process_fun_def(ref ret : @reference_generator::refs, module : @reference_generator::module, fun_def : @nast::fun_def_t) {
	ret []= :ref({
		module => module,
		line => fun_def->line,
		position => 1,
		type => :function_definition({
			module => fun_def->access is :pub ? module : '',
			name => fun_def->name,
		}),		
	});

	process_cmd(ref ret, module, fun_def->cmd);
	process_type(ref ret, module, fun_def->ret_type);
	fora var arg (fun_def->args) {
		process_type(ref ret, module, arg->type);
	}
}

def add_ref(ref ret : @reference_generator::refs, module : @reference_generator::module, place : @nast::place_t, ref_value : @reference_generator::ref_type) {
	ret []= :ref({
		module => module,
		line => place->line,
		position => place->position,
		type => ref_value,
	});
}

def process_cmd(ref ret : @reference_generator::refs, module : @reference_generator::module, cmd : @nast::cmd_t) {
	match (cmd->cmd) case :if(var if_cmd) {
		process_if(ref ret, module, if_cmd);
	} case :for(var for_cmd) {
		process_for(ref ret, module, for_cmd);
	} case :fora(var fora_cmd) {
		process_fora(ref ret, module, fora_cmd);
	} case :forh(var forh_cmd) {
		process_forh(ref ret, module, forh_cmd);
	} case :loop(var loop_cmd) {
		process_cmd(ref ret, module, loop_cmd);
	} case :rep (var rep_cmd) {
		process_rep(ref ret, module, rep_cmd);
	} case :while(var while_cmd) {
		process_while(ref ret, module, while_cmd);
	} case :if_mod(var if_mod) {
		process_if_mod(ref ret, module, if_mod);
	} case :unless_mod(var unless_mod) {
		process_if_mod(ref ret, module, unless_mod);
	} case :break {
	} case :continue {
	} case :match(var match_cmd) {
		process_match(ref ret, module, match_cmd);
	} case :value(var value) {
		process_value(ref ret, module, value);
	} case :try(var try_cmd) {
		process_try(ref ret, module, try_cmd);
	} case :ensure(var ensure_cmd) {
		process_try(ref ret, module, ensure_cmd);
	} case :var_decl(var var_decl) {
		process_var_decl(ref ret, module, var_decl);
	} case :return(var ret_cmd) {
		process_return(ref ret, module, ret_cmd);
	} case :block(var block) {
		process_block(ref ret, module, block);
	} case :die(var die_cmd) {
		process_die(ref ret, module, die_cmd);
	} case :nop {
	}
}

def process_try(ref ret : @reference_generator::refs, module : @reference_generator::module, try_cmd : @nast::try_ensure_t) {
	match (try_cmd) case :lval(var lval) {
		process_bin_op(ref ret, module, lval);
	} case :decl(var decl) {
		process_var_decl(ref ret, module, decl);
	} case :expr(var expr) {
		process_value(ref ret, module, expr);
	}
}

def process_return(ref ret : @reference_generator::refs, module : @reference_generator::module, ret_cmd: @nast::value_t) {
	process_value(ref ret, module, ret_cmd);
}

def process_block(ref ret : @reference_generator::refs, module : @reference_generator::module, block : @nast::block_t) {
	fora var cmd (block) {
		process_cmd(ref ret, module, cmd);
	}
}

def process_die(ref ret : @reference_generator::refs, module : @reference_generator::module, die_cmd : @nast::die_t) {
	fora var val (die_cmd) {
		process_value(ref ret, module, val);
	}
}

def process_if(ref ret : @reference_generator::refs, module : @reference_generator::module, if_cmd : @nast::if_t) {
	process_value(ref ret, module, if_cmd->cond);
	process_cmd(ref ret, module, if_cmd->if);
	fora var el (if_cmd->elsif) {
		process_value(ref ret, module, el->cond);
		process_cmd(ref ret, module, el->cmd);
	}
	process_cmd(ref ret, module, if_cmd->else);
}

def process_for(ref ret : @reference_generator::refs, module : @reference_generator::module, for_cmd : @nast::for_t) {
	match (for_cmd->start) case :var_decl(var var_decl) {
		process_var_decl(ref ret, module, var_decl);
	} case :value(var val) {
		process_value(ref ret, module, val);
	}

	process_value(ref ret, module, for_cmd->iter);
	process_value(ref ret, module, for_cmd->cond);
	process_cmd(ref ret, module, for_cmd->cmd);
}

def process_fora(ref ret : @reference_generator::refs, module : @reference_generator::module, fora_cmd : @nast::fora_t) {
	process_var_decl(ref ret, module, fora_cmd->iter);	
	process_cmd(ref ret, module, fora_cmd->cmd);
	process_value(ref ret, module, fora_cmd->array);
}

def process_forh(ref ret : @reference_generator::refs, module : @reference_generator::module, forh_cmd : @nast::forh_t) {
	process_var_decl(ref ret, module, forh_cmd->key);
	process_var_decl(ref ret, module, forh_cmd->val);
	process_value(ref ret, module, forh_cmd->hash);
	process_cmd(ref ret, module, forh_cmd->cmd);
}

def process_var_decl(ref ret : @reference_generator::refs, module : @reference_generator::module, var_decl : @nast::variable_declaration_t) {
	match (var_decl->value) case :value(var value) {
		process_value(ref ret, module, value);	
	} case :none {
	}
	process_type(ref ret, module, var_decl->type);
}

def process_type(ref ret : @reference_generator::refs, module : @reference_generator::module, type : @nast::variable_type_t) {
	match (type) case :type(var t) {
		process_value(ref ret, module, t);
	} case :none {
	}
}


def process_rep(ref ret : @reference_generator::refs, module : @reference_generator::module, rep_cmd : @nast::rep_t) {
	process_var_decl(ref ret, module, rep_cmd->iter);
	process_cmd(ref ret, module, rep_cmd->cmd);
	process_value(ref ret, module, rep_cmd->count);
}

def process_while(ref ret : @reference_generator::refs, module : @reference_generator::module, while_cmd : @nast::while_t) {
	process_cmd(ref ret, module, while_cmd->cmd);
	process_value(ref ret, module, while_cmd->cond);
}

def process_if_mod(ref ret : @reference_generator::refs, module : @reference_generator::module, if_cmd : @nast::if_mod_t) {
	process_cmd(ref ret, module, if_cmd->cmd);
	process_value(ref ret, module, if_cmd->cond);
}

def process_match(ref ret : @reference_generator::refs, module : @reference_generator::module, match_cmd : @nast::match_t) {
	process_value(ref ret, module, match_cmd->val);
	fora var branch (match_cmd->branch_list) {
		match (branch->variant->value) case :value(var var_decl) {
			process_var_decl(ref ret, module, var_decl);
		} case :none {
		}
		process_cmd(ref ret, module, branch->cmd);
	}
}

def process_value(ref ret : @reference_generator::refs, module : @reference_generator::module, value : @nast::value_t) {
	match (value->value) case :ternary_op(var op) {
	} case :hash_key(var key) {
	} case :nop {
	} case :parenthesis(var p) {
		process_value(ref ret, module, p);
	} case :variant(var v) {
		process_value(ref ret, module, v->var);
	} case :const(var c) {
	} case :string(var s) {
	} case :arr_decl(var arr_decl) {
		fora var el (arr_decl) {
			process_value(ref ret, module, el);
		}
	} case :hash_decl(var hash_decl) {
		fora var hash_el (hash_decl) {
			process_value(ref ret, module, hash_el->val);
		}
	} case :var(var variable) {
	} case :bin_op(var bin_op) {
		process_bin_op(ref ret, module, bin_op);
	} case :unary_op(var op) {
		process_value(ref ret, module, op->val);
	} case :fun_label(var fun_label) {
		add_ref(ref ret, module, value->debug->begin, :function_reference({
			module => fun_label->module,
			name => fun_label->name,
		}));
	} case :fun_val(var fun_val) {
		add_ref(ref ret, module, value->debug->begin, :function_reference({
			module => fun_val->module,
			name => fun_val->name,
		}));
		fora var arg (fun_val->args) {
			process_value(ref ret, module, arg->val);
		}
	} case :post_inc(var val) {
		process_value(ref ret, module, val);
	} case :post_dec(var val) {
		process_value(ref ret, module, val);
	} case :var_op(var var_op) {
		process_value(ref ret, module, var_op->left);
	}
}

def process_bin_op(ref ret : @reference_generator::refs, module : @reference_generator::module, bin_op : @nast::bin_op_t) {
	process_value(ref ret, module, bin_op->left);
	process_value(ref ret, module, bin_op->right);
}

