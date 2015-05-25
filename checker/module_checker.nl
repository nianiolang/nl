###
# (c) Atinea Sp. z o.o.
###


use array;
use ptd;
use hash;
use nast;
use tc_types;
use tct;
use string;
use ov;
use boolean_t;
use ptd_parser;


def module_checker::stack_t() {
	return ptd::arr(ptd::sim());
}

def module_checker::stack_hash_t() {
	return ptd::hash(ptd::sim());
}

def module_checker::ret_t() {
	return ptd::var({loop => ptd::arr(ptd::sim()), ok => ptd::none()});
}

def module_checker::modules_t() {
	return ptd::hash(ptd::arr(ptd::sim()));
}

def module_checker::search_loops(modules : @module_checker::modules_t) : @module_checker::ret_t {
	var checked : ptd::hash(ptd::sim()) = {};
	forh var module_name, var import_list (modules) {
		if (!hash::has_key(checked, module_name)) {
			var stack : @module_checker::stack_t = [];
			var stack_hash : @module_checker::stack_hash_t = {};
			match (check_module(module_name, modules, ref stack, ref stack_hash, ref checked)) case :loop(var l) {
				return :loop(l);
			} case :ok {
			}
		}
	}
	return :ok;
}

def check_module(module_name : ptd::sim(), modules : @module_checker::modules_t, ref stack : @module_checker::stack_t, 
	ref stack_hash : @module_checker::stack_hash_t, ref checked : ptd::hash(ptd::sim())) : @module_checker::ret_t {
	hash::set_value(ref checked, module_name, 1);
	hash::set_value(ref stack_hash, module_name, 1);
	array::push(ref stack, module_name);
	fora var import (hash::get_value(modules, module_name)) {
		if (hash::has_key(stack_hash, import)) {
			return :loop(get_loop_from_stack(import, stack));
		} elsif (hash::has_key(modules, import) && !hash::has_key(checked, import)) {
			match (check_module(import, modules, ref stack, ref stack_hash, ref checked)) case :loop(var l) {
				return :loop(l);
			} case :ok {
			}
		}
	}
	hash::delete(ref stack_hash, module_name);
	stack = array::subarray(stack, 0, array::len(stack) - 1);
	return :ok;
}

def get_loop_from_stack(last_elem : ptd::sim(), stack : @module_checker::stack_t) : ptd::arr(ptd::sim()) {
	var ret = [];
	fora var el (stack) {
		ret = [] if (el eq last_elem);
		array::push(ref ret, el);
	}
	array::push(ref ret, last_elem);
	return ret;
}
def module_checker::var_t(){
	return ptd::rec({
			write => ptd::var({const=>ptd::none(), none=>ptd::none(), value=>ptd::none()}),
			read => @boolean_t::type,
			is_required => @boolean_t::type,
		});
}
def module_checker::return_t(){
	return ptd::var({void => ptd::none(), none => ptd::none(), value => ptd::none(), was_void => ptd::none(), was_value => ptd::none()});
}
def module_checker::state_t(){
	return ptd::rec({
		in_loop => @boolean_t::type,
		return => ptd::rec({was => @boolean_t::type, arg => @module_checker::return_t}),
		vars => ptd::hash(@module_checker::var_t),
		errors => @tc_types::errors_t,
		called => ptd::rec({
			func=>ptd::hash(ptd::sim()),
			module=>ptd::hash(ptd::sim())
		}),
		current_module => ptd::sim()
	});
}
def module_checker::save_t() {
	return ptd::rec({
		in_loop => @boolean_t::type,
		vars => ptd::hash(@module_checker::var_t)
	});
}

def add_error(ref errors : @tc_types::errors_t, msg : ptd::sim()) : ptd::void() {
	array::push(ref errors->errors, {msg => msg, line => errors->current_line, module=>errors->module});
}
def add_warning(ref errors : @tc_types::errors_t, msg : ptd::sim()) : ptd::void() {
	array::push(ref errors->warnings, {msg => msg, line => errors->current_line, module=>errors->module});
}
def set_used_function(fun_key : ptd::sim(), func, ref func_used : ptd::hash(ptd::sim())){
	hash::set_value(ref func_used, fun_key, 0);
	forh var name, var line (hash::get_value(func, fun_key)){
		continue unless hash::has_key(func, name);
		continue if hash::has_key(func_used, name);
		set_used_function(name, func, ref func_used);
	}
}
def module_checker::check_module(module : @nast::module_t) : @tc_types::errors_t {
	var errors : @tc_types::errors_t = {errors => [], warnings => [], current_line => -1, module=>module->name};
	var called = {func=>{}, module=>{}};
	var state : @module_checker::state_t = {return => {was => false, arg => :none}, current_module => module->name, in_loop => false, called => called, vars => {}, errors=>errors};
	var func = {};
	var func_used = {};
	fora var fun_def (module->fun_def) {
		state->errors->current_line = fun_def->line;
		state->vars = {};
		state->return = {was => false, arg => check_return_type(fun_def->ret_type, ref state)};
		var prev = save_block(ref state);
		fora var fun_arg (fun_def->args) {
			add_var(fun_arg->name, false, false, ref state);
			check_type(fun_arg->type, ref state);
			use_var(fun_arg->name, :set, ref state);
		}
		check_cmd(fun_def->cmd, ref state);
		fora var fun_arg (fun_def->args) {
			if(fun_arg->mod is :ref){
				use_var(fun_arg->name, :get, ref state);
			}
		}
		load_block(ref state, prev);
		if(!state->return->was){
			add_error(ref state->errors, 'no return value at end of function') 
				if state->return->arg is :value || state->return->arg is :was_value;
		}
		var fun_key = get_fun_key(fun_def->access is :pub ? module->name : '', fun_def->name, module->name);
		hash::set_value(ref func, fun_key, state->called->func);
		hash::set_value(ref func_used, fun_key, 0) unless fun_def->access is :priv;
		state->called->func = {};
	}
	var imports = {};
	fora var import (module->import) {
		state->errors->current_line = import->line;
		add_warning(ref state->errors, 'multiple use module:' . import->name)
			if(hash::has_key(imports, import->name));
		add_warning(ref state->errors, 'unused module:' . import->name)
			unless(hash::has_key(state->called->module, import->name));
		hash::set_value(ref imports, import->name, true);
	}
	forh var name, var line (state->called->module){
		state->errors->current_line = line;
		continue if module->name eq name;
		add_error(ref state->errors, 'module ''' . name . ''' not imported')
			unless(hash::has_key(imports, name));
	}
	var copy = func_used;
	forh var fun_key, var none (copy) {
		set_used_function(fun_key, func, ref func_used);
	}
	fora var fun_def (module->fun_def) {
		continue if fun_def->access is :pub;
		continue if hash::has_key(func_used, 'priv:'.module->name . '::' . fun_def->name);
		state->errors->current_line = fun_def->line;
		add_warning(ref state->errors, 'unused function: ' . module->name . '_priv::' . fun_def->name);
	}
	return state->errors;
}
def check_types_imported(type : @tct::meta_type, ref state : @module_checker::state_t) : ptd::void(){
	match (type) case :tct_im {
	} case :tct_arr(var arr_type) {
		check_types_imported(arr_type, ref state);
	} case :tct_hash(var hash_type) {
		check_types_imported(hash_type, ref state);
	} case :tct_rec(var records) {
		forh var name, var record (records) {
			check_types_imported(record, ref state);
		}
	} case :tct_ref(var ref_name) {
		var ix = string::index2(ref_name, '::');
		if(ix >= 0){
			var module = string::substr(ref_name, 0, ix);
			var fun_name = string::substr(ref_name, ix + 2, string::length(ref_name) - ix - 2);
			add_fun_used(module, fun_name, ref state);
		} else {
			add_error(ref state->errors, 'wrong type function name ''' . ref_name . ''' ');
		}
	} case :tct_void {
	} case :tct_sim {
	} case :tct_var(var vars) {
		forh var name, var from_type (vars) {
			match (from_type) case :no_param{
			} case :with_param(var param){
				check_types_imported(param, ref state);
			}
		}
	} case :tct_empty {
	}
}

def get_fun_key(module : ptd::sim(), name : ptd::sim(), cur_mod : ptd::sim()) : ptd::sim() {
	return module . '::' . name unless module eq '';
	return 'priv:' . cur_mod . '::' . name;
}

def add_fun_used(module : ptd::sim(), name : ptd::sim(), ref state : @module_checker::state_t) : ptd::void() {
	var fun_key = get_fun_key(module, name, state->current_module);
	return if hash::has_key(state->called->func, fun_key);
	hash::set_value(ref state->called->func, fun_key, state->errors->current_line);
	return if module eq '' || hash::has_key(state->called->module, module);
	hash::set_value(ref state->called->module, module, state->errors->current_line);
}

def check_return_type(type : @nast::variable_type_t, ref state : @module_checker::state_t) : @module_checker::return_t {
	match(type) case :none{
		return :none;
	} case :type(var value){
		if(value is :fun_val){
			var fun_val = value as :fun_val;
			if(fun_val->module eq 'ptd' && fun_val->name eq 'void'){
				add_fun_used('ptd', 'void', ref state);
				return :void;
			}
		}
	}
	check_type(type, ref state);
	return :value;
}
def check_type(type : @nast::variable_type_t, ref state : @module_checker::state_t) : ptd::void(){
	match(type) case :none{
	} case :type(var value){
		if(value is :fun_val){
			var fun_val = value as :fun_val;
			add_fun_used(fun_val->module, fun_val->name, ref state);
		}
		match (ptd_parser::try_value_to_ptd(value)) case :err(var err) {
			add_error(ref state->errors, err);
		} case :ok(var ok) {
			check_types_imported(ok, ref state);
		}
	}
}

def add_var(name : ptd::sim(), is_const : @boolean_t::type, is_required : @boolean_t::type, ref state : @module_checker::state_t) : ptd::void(){
	if(hash::has_key(state->vars, name)){
		add_error(ref state->errors, 'redeclaration variable: ' . name);
	}
	var val = {write => :none, read => false, is_required => is_required};
	val->write = :const if(is_const);
	hash::set_value(ref state->vars, name, val);
}
def use_var(name : ptd::sim(), mode : ptd::var({mod=>ptd::none(), set=>ptd::none(), get=>ptd::none()}), ref state : @module_checker::state_t) : ptd::void(){
	if(!hash::has_key(state->vars, name)){
		add_error(ref state->errors, 'unknown variable: ' . name);
		return;
	}
	var info = hash::get_value(state->vars, name);
	match(mode) case :get{
		info->read = true;
	} case :set{
		if(info->write is :const){
			add_error(ref state->errors, 'can''t change const variable: ' . name);
			return;
		}
		info->write = :value;
	} case :mod{
		info->read = true;
		if(info->write is :const){
			add_error(ref state->errors, 'can''t change const variable: ' . name);
			return;
		}
		info->write = :value;
	} 
	hash::set_value(ref state->vars, name, info);
}
def add_var_dec(var_dec : @nast::variable_declaration_t, is_const : @boolean_t::type, is_required : @boolean_t::type, ref state : @module_checker::state_t) : ptd::void(){
	add_var(var_dec->name, is_const, is_required, ref state);
	check_type(var_dec->type, ref state);
	match(var_dec->value) case :value(var value){
		check_val(value, ref state);
		die if is_const;
		use_var(var_dec->name, :set, ref state);
	} case :none{
	}
}

def check_cmd(cmd : @nast::cmd_t, ref state : @module_checker::state_t){
	state->errors->current_line = cmd->debug->begin->line;
	if(state->return->was){
		add_warning(ref state->errors, 'never used command');
		state->return->was = false;
	}
	match (cmd->cmd) case :if(var as_if) {
		check_val(as_if->cond, ref state);
		check_cmd(as_if->if, ref state);
		var was = state->return->was;
		fora var elsif_s (as_if->elsif) {
			state->return->was = false;
			check_val(elsif_s->cond, ref state);
			check_cmd(elsif_s->cmd, ref state);
			was = false unless state->return->was;
		}
		state->return->was = false;
		check_cmd(as_if->else, ref state);
		was = false unless state->return->was;
		state->return->was = was;
	} case :for(var as_for) {
		var prev = save_block(ref state);
		match (as_for->start) case :value(var value) {
			check_val(value, ref state);
		} case :var_decl(var var_decl) {
			add_var_dec(var_decl, false, false, ref state);
		}
		check_val(as_for->cond, ref state);
		state->in_loop = true;
		check_cmd(as_for->cmd, ref state);
		check_val(as_for->iter, ref state);
		load_block(ref state, prev);
		state->return->was = false;
	} case :fora(var as_fora) {
		var prev = save_block(ref state);
		check_val(as_fora->array, ref state);
		add_var_dec(as_fora->iter, true, true, ref state);
		state->in_loop = true;
		check_cmd(as_fora->cmd, ref state);
		load_block(ref state, prev);
		state->return->was = false;
	} case :forh(var as_forh) {
		var prev = save_block(ref state);
		check_val(as_forh->hash, ref state);
		add_var_dec(as_forh->val, true, true, ref state);
		add_var_dec(as_forh->key, true, true, ref state);
		state->in_loop = true;
		check_cmd(as_forh->cmd, ref state);
		load_block(ref state, prev);
		state->return->was = false;
	} case :loop(var as_loop) {
		var prev = save_block(ref state);
		state->in_loop = true;
		check_cmd(as_loop, ref state);
		load_block(ref state, prev);
	} case :rep(var as_rep) {
		var prev = save_block(ref state);
		check_val(as_rep->count, ref state);
		add_var_dec(as_rep->iter, true, true, ref state);
		state->in_loop = true;
		check_cmd(as_rep->cmd, ref state);
		load_block(ref state, prev);
		state->return->was = false;
	} case :while(var as_while) {
		var prev = save_block(ref state);
		check_val(as_while->cond, ref state);
		state->in_loop = true;
		check_cmd(as_while->cmd, ref state);
		load_block(ref state, prev);
		state->return->was = false;
	} case :if_mod(var if_mod) {
		check_val(if_mod->cond, ref state);
		check_cmd(if_mod->cmd, ref state);
		state->return->was = false;
	} case :unless_mod(var unless_mod) {
		check_val(unless_mod->cond, ref state);
		check_cmd(unless_mod->cmd, ref state);
		state->return->was = false;
	} case :break {
		if(!state->in_loop){
			add_error(ref state->errors, 'command break can be used only in cyclic block');
		}
	} case :continue {
		if(!state->in_loop){
			add_error(ref state->errors, 'command continue can be used only in cyclic block');
		}
	} case :match(var as_match) {
		check_val(as_match->val, ref state);
		var was = true;
		fora var branch (as_match->branch_list){
			state->return->was = false;
			var prev = save_block(ref state);
			match(branch->variant->value) case :none{
			} case :value(var value){
				add_var_dec(value, false, true, ref state);
			}
			check_cmd(branch->cmd, ref state);
			was = false unless state->return->was;
			load_block(ref state, prev);
		}
		state->return->was = was;
	} case :value(var val) {
		check_val(val, ref state);
	} case :return(var as_return) {
		check_val(as_return, ref state);
		match(state->return->arg) case :value{
			add_error(ref state->errors, 'return command without value') if as_return is :nop;
		} case :none{
			state->return->arg = as_return is :nop ? :was_void : :was_value;
		} case :was_value{
			add_error(ref state->errors, 'previously was return with value') if as_return is :nop;
			state->return->arg = as_return is :nop ? :was_void : :was_value;
		} case :was_void{
			add_error(ref state->errors, 'previously was empty return') unless as_return is :nop;
			state->return->arg = as_return is :nop ? :was_void : :was_value;
		} case :void{
			add_error(ref state->errors, 'return value in void function') unless as_return is :nop;;
		}
		state->return->was = true;
	} case :block(var block) {
		var prev = save_block(ref state);
		fora var cmd_s (block) {
			check_cmd(cmd_s, ref state);
		}
		load_block(ref state, prev);
	} case :die(var as_die) {
		fora var arg (as_die) {
			check_val(arg, ref state);
		}
		state->return->was = true;
	} case :var_decl(var var_decl) {
		add_var_dec(var_decl, false, false, ref state);
	} case :try(var as_try) {
		match(as_try) case :decl(var var_decl){
			add_var_dec(var_decl, false, false, ref state);
		} case :lval(var lval){
			check_val(:bin_op(lval), ref state);
		} case :expr(var expr){
			check_val(expr, ref state);
		}
	} case :ensure(var as_ensure) {
		match(as_ensure) case :decl(var var_decl){
			add_var_dec(var_decl, false, false, ref state);
		} case :lval(var lval){
			check_val(:bin_op(lval), ref state);
		} case :expr(var expr){
			check_val(expr, ref state);
		}
	} case :nop {
	}
}
def check_lvalue(lval : @nast::value_t, ref state : @module_checker::state_t) : ptd::void(){
	if (lval is :var) {
		use_var(lval as :var, :mod, ref state);
		return;
	} elsif (lval is :bin_op) {
		var bin_op = lval as :bin_op;
		if (bin_op->op eq '->' || bin_op->op eq 'ARRAY_INDEX') {
			check_lvalue(bin_op->left, ref state);
			check_val(bin_op->right, ref state);
			return;
		}
	}
	add_error(ref state->errors, 'invalid expression for lvalue');
}
def check_val(val : @nast::value_t, ref state : @module_checker::state_t) : ptd::void(){
	match (val) case :ternary_op(var ternary_op) {
		check_val(ternary_op->fst, ref state);
		check_val(ternary_op->snd, ref state);
		check_val(ternary_op->thrd, ref state);
	} case :parenthesis(var parenthesis) {
		check_val(parenthesis, ref state);
	} case :variant(var variant) {
		check_val(variant->var, ref state);
	} case :const(var as_const) {
	} case :string(var str) {
	} case :nop {
	} case :hash_key(var hash_key) {
	} case :arr_decl(var arr_decl) {
		fora var dec (arr_decl){
			check_val(dec, ref state);
		}
	} case :hash_decl(var hash_decl) {
		fora var el (hash_decl) {
			ov::as(el->key, 'hash_key');
			check_val(el->val, ref state);
		}
	} case :var(var variable_name) {
		use_var(variable_name, :get, ref state);
	} case :bin_op(var bin_op) {
		var op = bin_op->op;
		if(op eq '=' || op eq '+=' || op eq '-=' || op eq '*=' || op eq '/=' || op eq '.='){
			if(bin_op->left is :var && op eq '='){
				use_var(bin_op->left as :var, :set, ref state);
			} else {
				check_lvalue(bin_op->left, ref state);
			}
		} else {
			check_val(bin_op->left, ref state);
		}
		check_val(bin_op->right, ref state);
	} case :var_op(var var_op) {
		check_val(var_op->left, ref state);
	} case :unary_op(var unary_op) {
		check_val(unary_op->val, ref state);
	} case :fun_label(var fun_label) {
		add_fun_used(fun_label->module, fun_label->name, ref state);
	} case :fun_val(var fun_val) {
		fora var fun_val_arg (fun_val->args) {
			match(fun_val_arg->mod) case :none{
				check_val(fun_val_arg->val, ref state);
			} case :ref{
				check_lvalue(fun_val_arg->val, ref state);
			}
		}
		add_fun_used(fun_val->module, fun_val->name, ref state);
	} case :post_inc(var inc) {
		check_val(inc, ref state);
	} case :post_dec(var dec) {
		check_val(dec, ref state);
	}
}
def save_block(ref state : @module_checker::state_t) : @module_checker::save_t {
	return {in_loop => state->in_loop, vars => state->vars};
}
def load_block(ref state : @module_checker::state_t, prev : @module_checker::save_t) : ptd::void() {
	state->in_loop = prev->in_loop;
	var keys = hash::keys(state->vars);
	fora var key (keys){
		if(!hash::has_key(prev->vars, key)){
			var info = hash::get_value(state->vars, key);
			hash::delete(ref state->vars, key);
			if(!info->read && !info->is_required){
				add_warning(ref state->errors, 'never read variable: ' . key);
			}
		}
	}
}