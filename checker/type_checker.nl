###
# (c) Atinea Sp. z o.o.
###


use array;
use ptd;
use tct;
use tc_types;
use hash;
use enum;
use string;
use boolean_t;
use nast;
use ptd_parser;
use ptd_system;
use singleton;

def type_to_ptd(type : @nast::variable_type_t, ref errors : @tc_types::errors_t) : @tct::meta_type {
	match (type) case :type(var tt) {
		match (ptd_parser::try_value_to_ptd(tt)) case :err(var err) {
			add_error(ref errors, err);
			return tct::tct_im();
		} case :ok(var ok) {
			return ok;
		}
	} case :none {
		return tct::tct_im();
	}
}

def get_fun_def_key(func : @tc_types::def_fun_t) : ptd::sim() {
	match (func->access) case :pub {
		return func->name;
	} case :priv {
		return 'priv::' . func->name;
	}
}

def get_fun_key(fun_name : ptd::sim(), fun_module : ptd::sim()) : ptd::sim() {
	var ret = '';
	ret .= 'priv::' if fun_module eq '';
	return ret . fun_name;
}

def return_type_to_tct(type : @nast::variable_type_t, ref errors : @tc_types::errors_t) : @tct::meta_type {
	match (type) case :type(var tt) {
		if (tt->value is :fun_val) {
			var fun_val = tt->value as :fun_val;
			if (fun_val->module eq 'ptd' && fun_val->name eq 'void') {
				return tct::void();
			}
		}
		return type_to_ptd(type, ref errors);
	} case :none {
		return tct::tct_im();
	}
}

def check_types_imported(type : @tct::meta_type, ref modules : @tc_types::modules_t, ref errors : @tc_types::errors_t) : 
		ptd::void() {
	match (type) case :tct_im {
	} case :tct_arr(var arr_type) {
		check_types_imported(arr_type, ref modules, ref errors);
	} case :tct_hash(var hash_type) {
		check_types_imported(hash_type, ref modules, ref errors);
	} case :tct_rec(var records) {
		forh var name, var record (records) {
			check_types_imported(record, ref modules, ref errors);
		}
	} case :tct_ref(var ref_name) {
		var ix = string::index2(ref_name, '::');
		if (ix >= 0) {
			var module_name = string::substr(ref_name, 0, ix);
			var fun_name = string::substr(ref_name, ix + 2, string::length(ref_name) - ix - 2);
			check_function_exists(module_name, fun_name, ref modules, ref errors);
		} else {
			add_error(ref errors, 'wrong type name ''' . ref_name . ''' ');
		}
	} case :tct_void {
	} case :tct_sim {
	} case :tct_var(var vars) {
		forh var name, var from_type (vars) {
			match (from_type) case :no_param {
			} case :with_param(var param) {
				check_types_imported(param, ref modules, ref errors);
			}
		}
	} case :tct_empty {
	}
}

def prepare_def_fun(modules : ptd::hash(@nast::module_t), ref errors : @tc_types::errors_t) : @tc_types::defs_funs_t {
	var def_fun : @tc_types::defs_funs_t = {};
	forh var module_name, var ast (modules) {
		errors->current_line = -1;
		errors->module = module_name;
		var funs : ptd::hash(@tc_types::def_fun_t) = {};
		fora var fun_def (ast->fun_def) {
			var new_args : ptd::arr(@tc_types::fun_arg_t) = [];
			fora var fun_arg (fun_def->args) {
				array::push(ref new_args, {
						name => fun_arg->name,
						mod => fun_arg->mod,
						type => type_to_ptd(fun_arg->type, ref errors)
					});
			}
			var new_fun_def : @tc_types::def_fun_t = {
					cmd => fun_def->cmd,
					is_type => :no,
					ref_types => :no,
					name => fun_def->name,
					module => module_name,
					access => fun_def->access,
					args => new_args,
					ret_type => return_type_to_tct(fun_def->ret_type, ref errors)
				};
			var name = get_fun_def_key(new_fun_def);
			add_error(ref errors, 'redefine function: ' . name) if (hash::has_key(funs, name));
			hash::set_value(ref funs, name, new_fun_def);
		}
		hash::set_value(ref def_fun, module_name, funs);
	}
	return def_fun;
}

def type_checker::check(modules : ptd::hash(@nast::module_t), lib_modules : ptd::hash(@nast::module_t)) : 
	@tc_types::return_t {
	return type_checker::check_modules(modules, lib_modules);
}

def type_checker::check_modules(modules : ptd::hash(@nast::module_t), lib_modules : ptd::hash(@nast::module_t)) : 
	@tc_types::return_t {
	var errors : @tc_types::errors_t = {errors => [], warnings => [], current_line => -1, module => ''};
	var def_fun : @tc_types::defs_funs_t = prepare_def_fun(lib_modules, ref errors);
	var deref : @tc_types::deref_types = {delete => [], create => []};
	forh var module_name, var ast (modules) {
		errors->current_line = -1;
		errors->module = module_name;
		check_module(ast, ref def_fun, ref errors, ref deref);
	}
	return {errors => errors->errors, deref => deref, warnings => errors->warnings};
}

def check_module(module : @nast::module_t, ref def_fun : @tc_types::defs_funs_t, ref errors : @tc_types::errors_t, ref 
	deref : @tc_types::deref_types) : ptd::void() {
	var modules : @tc_types::modules_t = {
			env => {
				deref => deref,
				current_module => module->name,
				breaks => {vars => {}, is => false},
				ret_type => tct::empty()
			},
			imports => {},
			funs => def_fun
		};
	fora var import (module->import) {
		hash::set_value(ref modules->imports, import->name, true);
	}
	hash::set_value(ref modules->imports, module->name, true);
	fora var fun_def (module->fun_def) {
		var fun_vars : @tc_types::vars_t = {};
		fora var fun_arg (fun_def->args) {
			var arg_type = type_to_ptd(fun_arg->type, ref errors);
			check_types_imported(arg_type, ref modules, ref errors);
			add_var_decl_to_vars(arg_type, fun_arg->name, ref fun_vars);
		}
		modules->env->ret_type = return_type_to_tct(fun_def->ret_type, ref errors);
		check_types_imported(modules->env->ret_type, ref modules, ref errors);
		check_cmd(fun_def->cmd, ref modules, ref fun_vars, ref errors);
	}
	def_fun = modules->funs;
	deref = modules->env->deref;
}

def join_vars(ref vars : @tc_types::vars_t, vars_op : @tc_types::vars_t, ref modules : @tc_types::modules_t, ref errors 
	: @tc_types::errors_t) : ptd::void() {
	return if hash::has_key(vars_op, '__END');
	if (hash::has_key(vars, '__END')) {
		vars = vars_op;
		return;
	}
	forh var var_name, var var_ (vars) {
		match (var_->overwrited) case :yes {
			var t1 = var_->type;
			var t2 = hash::get_value(vars_op, var_name)->type;
			set_type_to_variable(ref vars, var_name, ptd_system::cross_type(t1, t2, ref modules, ref errors));
		} case :no {
		}
	}
}

def set_end_function(ref vars : @tc_types::vars_t) : ptd::void() {
	set_type_to_variable(ref vars, '__END', tct::empty());
}

def check_cmd(cmd : @nast::cmd_t, ref modules : @tc_types::modules_t, ref b_vars : @tc_types::vars_t, ref errors : 
	@tc_types::errors_t) : ptd::hash(@tc_types::var_t) {
	errors->current_line = cmd->debug->begin->line;
	var ret : ptd::hash(@tc_types::var_t) = {};
	var vars : @tc_types::vars_t = b_vars;
	match (cmd->cmd) case :if(var as_if) {
		var if_cond_type : @tc_types::type = check_val(as_if->cond, ref modules, ref vars, ref errors);
		add_error(ref errors, 'if argument should be sim or boolean instead of ' . 
				get_print_tct_type_name(if_cond_type->type))
			unless ptd_system::is_condition_type(if_cond_type, ref modules, ref errors);
		var vars_op : @tc_types::vars_t = vars;
		check_cmd(as_if->if, ref modules, ref vars_op, ref errors);
		fora var elsif_s (as_if->elsif) {
			errors->current_line = elsif_s->cmd->debug->begin->line;
			var elsif_cond : @tc_types::type = check_val(elsif_s->cond, ref modules, ref vars, ref errors);
			add_error(ref errors, 'elsif condition should be sim or boolean instead of ' . 
					get_print_tct_type_name(elsif_cond->type))
				unless ptd_system::is_condition_type(elsif_cond, ref modules, ref errors);
			var vars_cmd : @tc_types::vars_t = vars;
			check_cmd(elsif_s->cmd, ref modules, ref vars_cmd, ref errors);
			join_vars(ref vars_op, vars_cmd, ref modules, ref errors);
		}
		check_cmd(as_if->else, ref modules, ref vars, ref errors);
		join_vars(ref vars, vars_op, ref modules, ref errors);
	} case :for(var as_for) {
		match (as_for->start) case :value(var value) {
			check_val(value, ref modules, ref vars, ref errors);
		} case :var_decl(var var_decl) {
			add_var_to_vars(check_var_decl(var_decl, ref modules, ref vars, ref errors), var_decl->name, ref vars);
		}
		var vars_op : @tc_types::vars_t = vars;
		if (!(as_for->cond->value is :nop)) {
			var for_cond : @tc_types::type = check_val(as_for->cond, ref modules, ref vars_op, ref errors);
			add_error(ref errors, 'for condition should be sim or boolean instead of ' . 
					get_print_tct_type_name(for_cond->type))
				unless ptd_system::is_condition_type(for_cond, ref modules, ref errors);
			join_vars(ref vars_op, vars, ref modules, ref errors);
		}
		break_continue_block(as_for->cmd, ref modules, ref vars_op, ref errors);
		check_val(as_for->iter, ref modules, ref vars_op, ref errors);
		join_vars(ref vars, vars_op, ref modules, ref errors);
	} case :fora(var as_fora) {
		check_fora(as_fora, ref modules, ref vars, ref errors);
	} case :forh(var as_forh) {
		check_forh(as_forh, ref modules, ref vars, ref errors);
	} case :loop(var as_loop) {
		break_continue_block(as_loop, ref modules, ref vars, ref errors);
	} case :rep(var as_rep) {
		check_rep(as_rep, ref modules, ref vars, ref errors);
	} case :while(var as_while) {
		check_while(as_while, ref modules, ref vars, ref errors);
	} case :if_mod(var if_mod) {
		var if_cond_type : @tc_types::type = check_val(if_mod->cond, ref modules, ref vars, ref errors);
		add_error(ref errors, 'if argument should be sim or boolean type instead of ' . 
				get_print_tct_type_name(if_cond_type->type))
			unless ptd_system::is_condition_type(if_cond_type, ref modules, ref errors);
		var vars_op : @tc_types::vars_t = vars;
		check_cmd(if_mod->cmd, ref modules, ref vars_op, ref errors);
		join_vars(ref vars, vars_op, ref modules, ref errors);
	} case :unless_mod(var unless_mod) {
		var unless_cond_type : @tc_types::type = check_val(unless_mod->cond, ref modules, ref vars, ref errors);
		add_error(ref errors, 'unless argument should be sim or boolean type instead of ' . 
				get_print_tct_type_name(unless_cond_type->type))
			unless ptd_system::is_condition_type(unless_cond_type, ref modules, ref errors);
		var vars_op : @tc_types::vars_t = vars;
		check_cmd(unless_mod->cmd, ref modules, ref vars_op, ref errors);
		join_vars(ref vars, vars_op, ref modules, ref errors);
	} case :break {
		if (!modules->env->breaks->is) {
			add_error(ref errors, 'command break can be used only in cyclic block');
		} else {
			var tmp = modules->env->breaks->vars;
			join_vars(ref tmp, vars, ref modules, ref errors);
			modules->env->breaks->vars = tmp;
		}
	} case :continue {
		if (!modules->env->breaks->is) {
			add_error(ref errors, 'command continue can be used only in cyclic block');
		} else {
			var tmp = modules->env->breaks->vars;
			join_vars(ref tmp, vars, ref modules, ref errors);
			modules->env->breaks->vars = tmp;
		}
	} case :match(var as_match) {
		check_match(as_match, ref modules, ref vars, ref errors);
	} case :value(var val) {
		check_val(val, ref modules, ref vars, ref errors);
	} case :return(var as_return) {
		var ret_type = check_val(as_return, ref modules, ref vars, ref errors);
		if (modules->env->ret_type is :tct_void && !ret_type->type is :tct_empty) {
			add_error(ref errors, 'can''t return value in void function');
		} elsif (!modules->env->ret_type is :tct_void && !modules->env->ret_type is :tct_im && ret_type->type is 
			:tct_empty) {
			add_error(ref errors, 'must be returned value in non void function');
		} elsif (!modules->env->ret_type is :tct_void && !ret_type->type is :tct_empty) {
			var check_info = ptd_system::check_assignment(modules->env->ret_type, ret_type, ref modules, ref errors);
			if (check_info is :err) {
				add_error(ref errors, 'return value has the wrong type: ' . get_print_check_info(check_info));
			}
		}
		set_end_function(ref vars);
	} case :block(var block) {
		fora var cmd_s (block) {
			forh var var_name, var var_ (check_cmd(cmd_s, ref modules, ref vars, ref errors)) {
				add_var_to_vars(var_, var_name, ref vars);
			}
		}
	} case :die(var as_die) {
		fora var arg (as_die) {
			check_val(arg, ref modules, ref vars, ref errors);
		}
		set_end_function(ref vars);
	} case :var_decl(var var_decl) {
		hash::set_value(ref ret, var_decl->name, check_var_decl(var_decl, ref modules, ref vars, ref errors));
	} case :try(var as_try) {
		var type = {type => modules->env->ret_type, src => :speculation};
		add_error(ref errors, 'function in which is used ''try'' must return variant: ok, err ')
			unless ptd_system::is_try_ensure_type(type, ref modules, ref errors);
		var vars_err_type = check_try_ensure(as_try, ref modules, ref vars, ref errors);
		var ok_err_types = ptd_system::try_get_ensure_sub_types({type=>modules->env->ret_type, src=>:known}, ref modules, ref errors);
		var check_info = ptd_system::check_assignment(ok_err_types->err, vars_err_type->err_type, ref modules, ref errors);
		if (check_info is :err) {
			add_error(ref errors, 'the return value have the wrong type: ' . get_print_check_info(check_info));
		}
		ret = vars_err_type->vars;
	} case :ensure(var as_ensure) {
		var vars_err_type = check_try_ensure(as_ensure, ref modules, ref vars, ref errors);
		
		ret = vars_err_type->vars;
	} case :nop {
	}
	forh var var_name, var var_ (b_vars) {
		hash::set_value(ref b_vars, var_name, hash::get_value(vars, var_name));
	}
	if (hash::has_key(vars, '__END')) {
		hash::set_value(ref b_vars, '__END', {overwrited => :yes, type => tct::empty()});
	}
	return ret;
}

def break_continue_block(cmd : @nast::cmd_t, ref modules : @tc_types::modules_t, ref vars : @tc_types::vars_t, ref 
	errors : @tc_types::errors_t) : ptd::void() {
	var old = modules->env->breaks;
	modules->env->breaks = {is => true, vars => vars};
	check_cmd(cmd, ref modules, ref vars, ref errors);
	join_vars(ref vars, modules->env->breaks->vars, ref modules, ref errors);
	modules->env->breaks = old;
}

def check_try_ensure(try_ensure : @nast::try_ensure_t, ref modules : @tc_types::modules_t, ref vars : @tc_types::vars_t, 
		ref errors : @tc_types::errors_t) : ptd::rec({vars => ptd::hash(@tc_types::var_t), err_type => @tc_types::type}) {
	var ret : ptd::hash(@tc_types::var_t) = {};
	var err_type : @tc_types::type = {type => tct::empty(), src => :speculation};
	var ok_type : @tct::meta_type = tct::tct_im();
	match (try_ensure) case :decl(var decl) {
		var ok_err_types = check_var_decl_try(decl, true, ref modules, ref vars, ref errors);
		hash::set_value(ref ret, decl->name, ok_err_types->ok);
		err_type = ok_err_types->err;
		ok_type = ok_err_types->ok->type;
	} case :lval(var lval) {
		var type = check_val(lval->right, ref modules, ref vars, ref errors);
		var err_left_len = array::len(errors->errors);
		var left_type : @tc_types::type = get_type_left_side_equation(lval->left, ref modules, ref vars, ref errors);
		err_left_len = array::len(errors->errors) - err_left_len;
		if (err_left_len == 0) {
			var ok_err_types = ptd_system::try_get_ensure_sub_types(type, ref modules, ref errors);
			type->type = ok_err_types->ok;
			set_type_to_lval(lval->left, left_type, type, ref modules, ref vars, ref errors);
			err_type = {type => ok_err_types->err, src => type->src};
			ok_type = ok_err_types->ok;
		}
	} case :expr(var expr) {
		var type = check_val(expr, ref modules, ref vars, ref errors);
		var ok_err_types = ptd_system::try_get_ensure_sub_types(type, ref modules, ref errors);
		err_type = {type => ok_err_types->err, src => type->src};
		ok_type = ok_err_types->ok;
	}
	add_error(ref errors, 'empty, no value used as variant in try/ensure') if(err_type->type is :tct_empty && ok_type is :tct_empty);
	return {vars => ret, err_type => err_type};
}

def check_forh(as_forh : @nast::forh_t, ref modules : @tc_types::modules_t, ref vars : @tc_types::vars_t, ref errors : 
	@tc_types::errors_t) : ptd::void() {
	var hash_type : @tc_types::type = ptd_system::can_delete(check_val(as_forh->hash, ref modules, ref vars, ref errors), 
			ref modules, ref errors);
	if (ptd_system::is_accepted(hash_type, tct::hash(tct::tct_im()), ref modules, ref errors)) {
	} elsif (ptd_system::is_accepted(hash_type, tct::rec({}), ref modules, ref errors)) {
		add_error(ref errors, 'forh argument should be a hash not rec') if is_known(hash_type);
	} else {
		add_error(ref errors, 'forh argument should be a hash type instead of ' . 
			get_print_tct_type_name(hash_type->type));
	}
	hash_type->type = hash_type->type is :tct_hash ? hash_type->type as :tct_hash : tct::tct_im();
	var vars_op : @tc_types::vars_t = vars;
	add_var_decl_with_type_and_check(as_forh->key, {type => tct::sim(), src => :speculation}, ref vars_op, ref errors);
	add_var_decl_with_type_and_check(as_forh->val, hash_type, ref vars_op, ref errors);
	break_continue_block(as_forh->cmd, ref modules, ref vars_op, ref errors);
	join_vars(ref vars, vars_op, ref modules, ref errors);
}

def check_fora(as_fora : @nast::fora_t, ref modules : @tc_types::modules_t, ref vars : @tc_types::vars_t, ref errors : 
	@tc_types::errors_t) : ptd::void() {
	var fora_arr_type : @tc_types::type = ptd_system::can_delete(check_val(as_fora->array, ref modules, ref vars, ref 
				errors), ref modules, ref errors);
	add_error(ref errors, 'fora argument should be an array instead of ' . get_print_tct_type_name(fora_arr_type->type))
		unless ptd_system::is_accepted(fora_arr_type, tct::arr(tct::tct_im()), ref modules, ref errors);
	fora_arr_type->type = fora_arr_type->type is :tct_arr ? fora_arr_type->type as :tct_arr : tct::tct_im();
	var vars_op : @tc_types::vars_t = vars;
	add_var_decl_with_type_and_check(as_fora->iter, fora_arr_type, ref vars_op, ref errors);
	break_continue_block(as_fora->cmd, ref modules, ref vars_op, ref errors);
	join_vars(ref vars, vars_op, ref modules, ref errors);
}

def check_while(as_while : @nast::while_t, ref modules : @tc_types::modules_t, ref vars : @tc_types::vars_t, ref errors 
	: @tc_types::errors_t) : ptd::void() {
	var cond_type : @tc_types::type = check_val(as_while->cond, ref modules, ref vars, ref errors);
	add_error(ref errors, 'while argument should be sim or boolean type insteand of ' . 
			get_print_tct_type_name(cond_type->type))
		unless ptd_system::is_condition_type(cond_type, ref modules, ref errors);
	var vars_op : @tc_types::vars_t = vars;
	break_continue_block(as_while->cmd, ref modules, ref vars_op, ref errors);
	join_vars(ref vars, vars_op, ref modules, ref errors);
}

def check_rep(as_rep : @nast::rep_t, ref modules : @tc_types::modules_t, ref vars : @tc_types::vars_t, ref errors : 
	@tc_types::errors_t) : ptd::void() {
	var count_type : @tc_types::type = check_val(as_rep->count, ref modules, ref vars, ref errors);
	add_error(ref errors, 'rep argument should be a number instead of ' . get_print_tct_type_name(count_type->type))
		unless ptd_system::is_accepted(count_type, tct::sim(), ref modules, ref errors);
	var vars_op : @tc_types::vars_t = vars;
	add_var_decl_with_type_and_check(as_rep->iter, {type => tct::sim(), src => :speculation}, ref vars_op, ref errors);
	break_continue_block(as_rep->cmd, ref modules, ref vars_op, ref errors);
	join_vars(ref vars, vars_op, ref modules, ref errors);
}

def check_match(as_match : @nast::match_t, ref modules : @tc_types::modules_t, ref vars : @tc_types::vars_t, ref errors 
	: @tc_types::errors_t) : ptd::void() {
	var val_type : @tc_types::type = ptd_system::can_delete(check_val(as_match->val, ref modules, ref vars, ref errors), 
			ref modules, ref errors);
	var branches : ptd::arr(@nast::match_branch_t) = as_match->branch_list;
	var type_is_match : @boolean_t::type = false;
	var branch_var_types : ptd::hash(@tct::meta_type) = {};
	var variants : ptd::hash(ptd::var({with_param => @tct::meta_type, no_param => ptd::none()})) = {};
	if (!ptd_system::is_accepted(val_type, tct::var({}), ref modules, ref errors)) {
		add_error(ref errors, 'wrong type used as match argument: ' . get_print_tct_type_name(val_type->type));
	}
	if (val_type->type is :tct_var) {
		variants = val_type->type as :tct_var;
		var used_variants : ptd::hash(@boolean_t::type) = {};
		fora var branch (branches) {
			var variant_name : ptd::sim() = branch->variant->name;
			if (!hash::has_key(variants, variant_name)) {
				add_error(ref errors, 'variant definition `:' . variant_name . ''' does not exist')
					if is_known(val_type);
				continue;
			}
			hash::set_value(ref used_variants, variant_name, true);
			match (hash::get_value(variants, variant_name)) case :with_param(var param_type) {
				hash::set_value(ref branch_var_types, variant_name, param_type);
			} case :no_param {
			}
		}
		forh var name, var type (variants) {
			if (!hash::has_key(used_variants, name)) {
				add_error(ref errors, 'unchecked match variants: ' . name);
			}
		}
		type_is_match = true;
	}
	var vars_op : @tc_types::vars_t = vars;
	var first = true;
	var hash_b = {};
	fora var branch (branches) {
		var vars_case : @tc_types::vars_t = vars;
		var variant_name : ptd::sim() = branch->variant->name;
		add_error(ref errors, 'repeated the case name in match: ' . variant_name)
			if (hash::has_key(hash_b, variant_name));
		hash::set_value(ref hash_b, variant_name, 1);
		match (branch->variant->value) case :value(var var_decl) {
			check_var_decl(var_decl, ref modules, ref vars_case, ref errors);
			var branch_var_type : @tct::meta_type;
			if (type_is_match) {
				continue if (!hash::has_key(variants, variant_name));
				if (!hash::has_key(branch_var_types, variant_name)) {
					add_error(ref errors, 'variant `:' . variant_name . ''' should has no param');
					continue;
				}
				branch_var_type = hash::get_value(branch_var_types, variant_name);
			} else {
				branch_var_type = tct::tct_im();
			}
			add_var_decl_to_vars(branch_var_type, var_decl->name, ref vars_case);
		} case :none {
			if (hash::has_key(branch_var_types, variant_name)) {
				add_error(ref errors, 'variant `:' . variant_name . ' should has param');
			}
		}
		check_cmd(branch->cmd, ref modules, ref vars_case, ref errors);
		match (branch->variant->value) case :value(var var_decl) {
			hash::delete(ref vars_case, var_decl->name) unless hash::has_key(vars_op, var_decl->name);
		} case :none {
		}
		if (first) {
			vars_op = vars_case;
		} else {
			join_vars(ref vars_op, vars_case, ref modules, ref errors);
		}
		first = false;
	}
	vars = vars_op;
}

def check_val(val : @nast::value_t, ref modules : @tc_types::modules_t, ref vars : @tc_types::vars_t, ref errors : 
	@tc_types::errors_t) : @tc_types::type {
	var ret = tc_types::get_default_type();
	match (val->value) case :ternary_op(var ternary_op) {
		var cond_type = check_val(ternary_op->fst, ref modules, ref vars, ref errors);
		add_error(ref errors, 'ternary op first argument should be sim or boolean type instead of ' . 
				get_print_tct_type_name(cond_type->type))
			unless ptd_system::is_condition_type(cond_type, ref modules, ref errors);
		var rt = check_val(ternary_op->snd, ref modules, ref vars, ref errors)->type;
		if (rt is :tct_void) {
			ret->type = rt;
		} else {
			var rt2 = check_val(ternary_op->thrd, ref modules, ref vars, ref errors)->type;
			if (rt2 is :tct_void) {
				ret->type = rt2;
			} else {
				ret->type = ptd_system::cross_type(rt, rt2, ref modules, ref errors);
			}
		}
	} case :hash_key(var hash_key) {
		ret->type = tct::sim();
	} case :nop {
		ret->type = tct::empty();
	} case :parenthesis(var parenthesis) {
		return check_val(parenthesis, ref modules, ref vars, ref errors);
	} case :variant(var variant) {
		if (variant->name eq 'TRUE' || variant->name eq 'FALSE') {
			ret->type = tct::bool();
			return ret;
		}
		var ret_variants = {};
		if (variant->var->value is :nop) {
			hash::set_value(ref ret_variants, variant->name, tct::none());
		} else {
			var ty = check_val(variant->var, ref modules, ref vars, ref errors);
			hash::set_value(ref ret_variants, variant->name, ty->type);
			ret->src = ty->src;
		}
		ret->type = tct::var(ret_variants);
	} case :const(var as_const) {
		ret->type = tct::sim();
	} case :arr_decl(var arr_decl) {
		if (array::len(arr_decl) == 0) {
			ret->type = tct::arr(tct::empty());
			return ret;
		}
		var types : ptd::arr(@tc_types::type) = [];
		fora var dec (arr_decl) {
			var t = check_val(dec, ref modules, ref vars, ref errors);
			array::push(ref types, t);
		}
		var rt = types[0]->type;
		for(var i = 1; i < array::len(types); ++i) {
			rt = ptd_system::cross_type(rt, types[i]->type, ref modules, ref errors);
		}
		ret->type = tct::arr(rt);
	} case :hash_decl(var hash_decl) {
		var rt = {};
		fora var el (hash_decl) {
			var label = el->key->value as :hash_key;
			var ty = check_val(el->val, ref modules, ref vars, ref errors);
			hash::set_value(ref rt, label, ty);
		}
		var retur = {};
		forh var key, var ty (rt) {
			hash::set_value(ref retur, key, ty->type);
		}
		ret->type = tct::rec(retur);
	} case :var(var variable_name) {
		if (!hash::has_key(vars, variable_name)) {
			add_error(ref errors, 'variable `' . variable_name . ''' does not exist');
			return ret;
		}
		var var_ = hash::get_value(vars, variable_name);
		match (var_->overwrited) case :yes {
			return {type => var_->type, src => :speculation};
		} case :no {
			return {type => var_->type, src => :known};
		}
	} case :bin_op(var bin_op) {
		return get_type_from_bin_op_and_check(bin_op, ref modules, ref vars, ref errors);
	} case :var_op(var var_op) {
		var left_type2 : @tc_types::type = ptd_system::can_delete(check_val(var_op->left, ref modules, ref vars, ref 
					errors), ref modules, ref errors);
		var ret_type : @tc_types::type;
		match (var_op->op) case :ov_is {
			ret_type = {type => tct::bool(), src => :speculation};
		} case :ov_as {
			ret_type = {type => tct::tct_im(), src => left_type2->src};
		}
		if (ptd_system::is_accepted(left_type2, tct::var({}), ref modules, ref errors)) {
			return ret_type unless left_type2->type is :tct_var;
			var variants = left_type2->type as :tct_var;
			if (!hash::has_key(variants, var_op->case)) {
				add_error(ref errors, 'case ' . var_op->case . ' doesn''t exist is: ' . 
					get_print_tct_type_name(left_type2->type));
				return ret_type;
			}
			match (var_op->op) case :ov_is {
			} case :ov_as {
				var t = hash::get_value(variants, var_op->case);
				match (t) case :with_param(var sub_type) {
					ret_type->type = sub_type;
				} case :no_param {
					add_error(ref errors, 'case ' . var_op->case . ' don''t have value: ' . 
						get_print_tct_type_name(left_type2->type));
				}
			}
			return ret_type;
		} else {
			add_error(ref errors, 'binary operator ''as/is'' can be applied only to variant: ' . 
				get_print_tct_type_name(left_type2->type));
			return ret_type;
		}
	} case :unary_op(var unary_op) {
		var type = check_val(unary_op->val, ref modules, ref vars, ref errors);
		if (unary_op->op eq '!') {
			if (!ptd_system::is_condition_type(type, ref modules, ref errors)) {
				add_error(ref errors, 'incorrect type of argument operator ''!'' : ' . 
					get_print_tct_type_name(type->type));
			}
			ret->type = tct::bool();
			return ret;
		} elsif (unary_op->op eq '@') {
			if (!ptd_system::is_accepted(type, tct::func(), ref modules, ref errors)) {
				add_error(ref errors, 'incorrect type of argument operator ''' . unary_op->op . ''' : ' . 
					get_print_tct_type_name(type->type));
			}
			ret->type = tct::var({ref => tct::func()});
			return ret;
		} elsif (unary_op->op eq '--' || unary_op->op eq '++') {
			return unary_op_dec_inc(unary_op->val, 'incorrect type of argument operator ''' . unary_op->op . ''' : ', 
					ref modules, ref vars, ref errors);
		} else {
			if (!ptd_system::is_accepted(type, tct::sim(), ref modules, ref errors)) {
				add_error(ref errors, 'incorrect type of argument operator ''' . unary_op->op . ''' : ' . 
					get_print_tct_type_name(type->type));
			}
		}
		ret->type = tct::sim();
	} case :fun_label(var fun_label) {
		check_function_exists(fun_label->module, fun_label->name, ref modules, ref errors);
		ret->type = tct::func();
	} case :fun_val(var fun_val) {
		ret = check_fun_val(fun_val, ref modules, ref vars, ref errors);
	} case :string(var str) {
		ret->type = tct::sim();
	} case :post_inc(var inc) {
		return unary_op_dec_inc(inc, 'wrong type in post increment : ', ref modules, ref vars, ref errors);
	} case :post_dec(var dec) {
		return unary_op_dec_inc(dec, 'wrong type in post decrement : ', ref modules, ref vars, ref errors);
	}
	return ret;
}


def check_fun_val(fun_val : @nast::fun_val_t, ref modules : @tc_types::modules_t, ref vars : @tc_types::vars_t, 
		ref errors : @tc_types::errors_t)  : @tc_types::type {
	var ret = tc_types::get_default_type();
	var args_values_types : ptd::arr(@tc_types::type) = [];
	fora var fun_val_arg (fun_val->args) {
		array::push(ref args_values_types, check_val(fun_val_arg->val, ref modules, ref vars, ref errors));
	}
	var fun_def : @tc_types::def_fun_t = get_special_function_def(fun_val->module, fun_val->name);
	var is_spec = false;
	match (fun_def->access) case :pub {
		is_spec = true;
		if (!hash::has_key(modules->imports, fun_val->module)) {
			add_error(ref errors, 'module ''' . fun_val->module . ''' not imported');
			hash::set_value(ref modules->imports, fun_val->module, false);
		}
	} case :priv {
		return ret unless check_function_exists(fun_val->module, fun_val->name, ref modules, ref errors);
		fun_def = get_function_def(fun_val->module, fun_val->name, modules);
	}
	if (array::len(fun_val->args) != array::len(fun_def->args)) {
		add_error(ref errors, 'wrong number ' . array::len(fun_val->args) . ' of function arguments : ' . 
			get_function_name(fun_val->module, fun_val->name));
		return ret;
	}
	var prev_ref = {};
	rep var i (array::len(fun_val->args)) {
		var fun_val_arg : @nast::fun_val_arg_t = fun_val->args[i];
		var fun_def_arg : @tc_types::fun_arg_t = fun_def->args[i];
		add_error(ref errors, 'arg no. ' . (i + 1) . ' ''' . fun_def_arg->name . 
				''' ref mismatched with function prototype')
			unless 
			enum::eq(fun_def_arg->mod, fun_val_arg->mod) || 
			(enum::eq(fun_def_arg->mod, :fun) && enum::eq(fun_val_arg->mod, :none));
		var check_info;
		if (is_spec) {
			var ist = args_values_types[i];
			ist->src = :speculation;
			check_info = ptd_system::is_accepted_info(ist, fun_def_arg->type, ref modules, ref errors);
		} else {
			if (fun_def_arg->mod is :ref) {
				var err_len = array::len(errors->errors);
				var var_tab = rec_get_var_from_lval(fun_val_arg->val, ref errors);
				if (err_len == array::len(errors->errors)) {
					var var_name = var_tab[0] as :var;
					if (hash::has_key(prev_ref, var_name)) {
						add_warning(ref errors, 'many ref-arguments come from the same variable: ' . var_name);
					}
					hash::set_value(ref prev_ref, var_name, 0);
					set_type_to_lval(fun_val_arg->val, args_values_types[i], 
						{type => fun_def_arg->type, src => :known}, ref modules, ref vars, ref errors);
				}
			}
			check_info = ptd_system::check_assignment(fun_def_arg->type, args_values_types[i], ref modules, ref 
					errors);
		}
		if (check_info is :err) {
			add_error(ref errors, 'In function call: ' . get_function_name(fun_val->module, fun_val->name) . 
				' argument no.' . (i + 1) . ' ''' . fun_def_arg->name . ''' has invalid type: ' . 
				get_print_check_info(check_info));
		}
	}
	return check_special_function({type => fun_def->ret_type, src => :known}, fun_val, args_values_types, ref modules, 
			ref vars, ref errors);
}

def unary_op_dec_inc(type : @nast::value_t, err_str : ptd::sim(), ref modules : @tc_types::modules_t, ref vars : 
		@tc_types::vars_t, ref errors : @tc_types::errors_t) : @tc_types::type {
	var vtype = check_val(type, ref modules, ref vars, ref errors);
	if (!ptd_system::is_accepted(vtype, tct::sim(), ref modules, ref errors)) {
		add_error(ref errors, err_str . get_print_tct_type_name(vtype->type));
	}
	vtype->type = tct::sim();
	var err_left_len = array::len(errors->errors);
	var left_type : @tc_types::type = get_type_left_side_equation(type, ref modules, ref vars, ref errors);
	if (array::len(errors->errors) - err_left_len > 0){
		return left_type;
	}
	return set_type_to_lval(type, left_type, vtype, ref modules, ref vars, ref errors);
}

def get_special_functions() : @tc_types::special_functions {
	var f : @tc_types::special_functions = {};
	hash::set_value(ref f, 'ptd::ensure', {
			r => tct::tct_im(),
			a => [{mod => :none, type => tct::tct_im(), name => ''}, {mod => :none, type => tct::tct_im(), name => ''}]
		});
	hash::set_value(ref f, 'ptd::try_cast', {
			r => tct::tct_im(),
			a => [{mod => :none, type => tct::tct_im(), name => ''}, {mod => :none, type => tct::tct_im(), name => ''}]
		});
	hash::set_value(ref f, 'ptd::ensure_only_static_do_not_touch_without_permission', {
			r => tct::tct_im(),
			a => [{mod => :none, type => tct::tct_im(), name => ''}, {mod => :none, type => tct::tct_im(), name => ''}]
		});
	hash::set_value(ref f, 'array::push', {
			r => tct::void(),
			a => [
				{mod => :ref, type => tct::arr(tct::tct_im()), name => ''},
				{mod => :none, type => tct::tct_im(), name => ''}
			]
		});
	hash::set_value(ref f, 'array::insert', {
		r => tct::void(),
		a => [
			{mod => :ref, type => tct::arr(tct::tct_im()), name => ''},
			{mod => :none, type => tct::tct_im(), name => ''},
			{mod => :none, type => tct::tct_im(), name => ''},
		]
	});
	hash::set_value(ref f, 'array::remove', {
		r => tct::void(),
		a => [
			{mod => :ref, type => tct::arr(tct::tct_im()), name => ''},
			{mod => :none, type => tct::tct_im(), name => ''},
		]
	});


	hash::set_value(ref f, 'array::subarray', {
			r => tct::tct_im(),
			a => [
				{mod => :none, type => tct::arr(tct::tct_im()), name => ''},
				{mod => :none, type => tct::sim(), name => ''},
				{mod => :none, type => tct::sim(), name => ''}
			]
		});
	hash::set_value(ref f, 'array::join', {
			r => tct::sim(),
			a => [
				{mod => :none, type => tct::sim(), name => ''},
				{mod => :none, type => tct::arr(tct::sim()), name => ''}
			]
		});
	hash::set_value(ref f, 'array::append', {
			r => tct::void(),
			a => [
				{mod => :ref, type => tct::arr(tct::tct_im()), name => ''},
				{mod => :none, type => tct::arr(tct::tct_im()), name => ''}
			]
		});
	hash::set_value(ref f, 'array::len', {
			r => tct::sim(),
			a => [{mod => :none, type => tct::arr(tct::tct_im()), name => ''}]
		});
	hash::set_value(ref f, 'array::sort', {
			r => tct::void(),
			a => [{mod => :ref, type => tct::arr(tct::sim()), name => ''}]
		});
	hash::set_value(ref f, 'array::pop', {
			r => tct::void(),
			a => [{mod => :ref, type => tct::arr(tct::tct_im()), name => ''}]
		});
	hash::set_value(ref f, 'hash::set_value', {
			r => tct::void(),
			a => [
				{mod => :ref, type => tct::hash(tct::tct_im()), name => ''},
				{mod => :none, type => tct::sim(), name => ''},
				{mod => :none, type => tct::tct_im(), name => ''}
			]
		});
	hash::set_value(ref f, 'hash::get_value', {
			r => tct::tct_im(),
			a => [
				{mod => :none, type => tct::hash(tct::tct_im()), name => ''},
				{mod => :none, type => tct::sim(), name => ''}
			]
		});
	hash::set_value(ref f, 'hash::has_key', {
			r => tct::bool(),
			a => [
				{mod => :none, type => tct::hash(tct::tct_im()), name => ''},
				{mod => :none, type => tct::sim(), name => ''}
			]
		});
	hash::set_value(ref f, 'hash::delete', {
			r => tct::void(),
			a => [
				{mod => :ref, type => tct::hash(tct::tct_im()), name => ''},
				{mod => :none, type => tct::sim(), name => ''}
			]
		});
	hash::set_value(ref f, 'hash::size', {
			r => tct::sim(),
			a => [{mod => :none, type => tct::hash(tct::tct_im()), name => ''}]
		});
	hash::set_value(ref f, 'hash::values', {
			r => tct::arr(tct::tct_im()),
			a => [{mod => :none, type => tct::hash(tct::tct_im()), name => ''}]
		});
	hash::set_value(ref f, 'hash::keys', {
			r => tct::arr(tct::sim()),
			a => [{mod => :none, type => tct::hash(tct::tct_im()), name => ''}]
		});
	hash::set_value(ref f, 'hash::add_all', {
			r => tct::void(),
			a => [
				{mod => :ref, type => tct::hash(tct::tct_im()), name => ''},
				{mod => :none, type => tct::hash(tct::tct_im()), name => ''},
			]
		});
	hash::set_value(ref f, 'ov::is', {
			r => tct::bool(),
			a => [{mod => :none, type => tct::var({}), name => ''}, {mod => :none, type => tct::sim(), name => ''}]
		});
	hash::set_value(ref f, 'ov::as', {
			r => tct::tct_im(),
			a => [{mod => :none, type => tct::var({}), name => ''}, {mod => :none, type => tct::sim(), name => ''}]
		});
	hash::set_value(ref f, 'dfile::ssave', {r => tct::sim(), a => [{mod => :none, type => tct::tct_im(), name => ''}]});
	hash::set_value(ref f, 'string::lf', {r => tct::sim(), a => []});
	hash::set_value(ref f, 'string::length', {r => tct::sim(), a => [{mod => :none, type => tct::sim(), name => ''}]});
	hash::set_value(ref f, 'string::substr', {
			r => tct::sim(),
			a => [
				{mod => :none, type => tct::sim(), name => ''},
				{mod => :none, type => tct::sim(), name => ''},
				{mod => :none, type => tct::sim(), name => ''}
			]
		});
	hash::set_value(ref f, 'string::replace', {
			r => tct::sim(),
			a => [
				{mod => :none, type => tct::sim(), name => ''},
				{mod => :none, type => tct::sim(), name => ''},
				{mod => :none, type => tct::sim(), name => ''}
			]
		});
	hash::set_value(ref f, 'string::chr', {r => tct::sim(), a => [{mod => :none, type => tct::sim(), name => ''}]});
	hash::set_value(ref f, 'string::ord', {r => tct::sim(), a => [{mod => :none, type => tct::sim(), name => ''}]});
	hash::set_value(ref f, 'string::split', {
			r => tct::arr(tct::sim()),
			a => [{mod => :none, type => tct::sim(), name => ''}, {mod => :none, type => tct::sim(), name => ''}]
		});
	hash::set_value(ref f, 'c_std_lib::fast_substr', {
			r => tct::sim(),
			a => [
				{mod => :none, type => tct::tct_im(), name => ''},
				{mod => :none, type => tct::tct_im(), name => ''},
				{mod => :none, type => tct::tct_im(), name => ''}
			]
		});
	hash::set_value(ref f, 'c_singleton::sigleton_do_not_use_without_approval', {
			r => tct::tct_im(),
			a => [{mod => :none, type => tct::tct_im(), name => ''}]
		});
	return singleton::sigleton_do_not_use_without_approval(f);
}

def get_special_function_def(module : ptd::sim(), name : ptd::sim()) : @tc_types::def_fun_t {
	var f = get_special_functions();
	var ret : @tc_types::def_fun_t = {
			cmd => {debug => nast::empty_debug(), cmd => :nop},
			is_type => :no,
			ref_types => :no,
			name => name,
			module => module,
			access => :pub,
			args => [],
			ret_type => tct::empty()
		};
	name = get_function_name(module, name);
	if (hash::has_key(f, name)) {
		var t = hash::get_value(f, name);
		ret->args = t->a;
		ret->ret_type = t->r;
	} else {
		ret->access = :priv;
	}
	return ret;
}

def check_special_function(ret_type : @tc_types::type, fun_val : @nast::fun_val_t, fun_val_type : ptd::arr(
		@tc_types::type), ref modules : @tc_types::modules_t, ref vars : @tc_types::vars_t, ref errors : 
	@tc_types::errors_t) : @tc_types::type {
	var name = get_function_name(fun_val->module, fun_val->name);
	if (name eq 'ptd::ensure' || name eq 'ptd::ensure_only_static_do_not_touch_without_permission') {
		match (ptd_parser::try_value_to_ptd(fun_val->args[0]->val)) case :err(var err) {
			add_error(ref errors, err);
			ret_type->type = tct::tct_im();
		} case :ok(var ok) {
			var check_info = ptd_system::cast_type(ok, fun_val_type[1], ref modules, ref errors);
			if (check_info is :err) {
				add_error(ref errors, 'this casting of type cannot be correct: ' . get_print_check_info(check_info));
			}
			ret_type->type = ok;
			check_types_imported(ok, ref modules, ref errors);
		}
	}
	if (name eq 'ptd::try_cast') {
		match (ptd_parser::try_value_to_ptd(fun_val->args[0]->val)) case :err(var err) {
			add_error(ref errors, err);
			ret_type->type = tct::tct_im();
		} case :ok(var ok) {
			var fun_def = get_function_def(fun_val->module, fun_val->name, modules);
			var ok_err_var = {type => fun_def->ret_type, src=> :known};
			ret_type->type = ptd_system::can_delete(ok_err_var, ref modules, ref errors)->type;
			if(ptd_system::is_try_ensure_type(ret_type, ref modules, ref errors)){
				ensure var err_type = tct::try_var_as_case(ret_type->type, 'err');
				ret_type->type = tct::var({ok => ok, err => err_type});
			} else {
				add_error(ref errors, 'function ptd::try_cast must return variant: ok, err ');
			}
			check_types_imported(ok, ref modules, ref errors);
		}
	}
	if (name eq 'array::push') {
		fun_val_type[1]->type = tct::arr(fun_val_type[1]->type);
		set_type_to_lval_spec(fun_val->args[0]->val, fun_val_type[0], fun_val_type[1], tct::arr(tct::empty()), ref 
			modules, ref vars, ref errors);
	}
	if (name eq 'array::insert') {
		fun_val_type[2]->type = tct::arr(fun_val_type[2]->type);
		set_type_to_lval_spec(fun_val->args[0]->val, fun_val_type[0], fun_val_type[2], tct::arr(tct::empty()), ref 
			modules, ref vars, ref errors);
	}
	if (name eq 'array::append') {
		set_type_to_lval_spec(fun_val->args[0]->val, fun_val_type[0], fun_val_type[1], tct::arr(tct::empty()), ref 
			modules, ref vars, ref errors);
	}
	if (name eq 'array::subarray') {
		return fun_val_type[0];
	}
	if (name eq 'hash::set_value') {
		fun_val_type[2]->type = tct::hash(fun_val_type[2]->type);
		set_type_to_lval_spec(fun_val->args[0]->val, fun_val_type[0], fun_val_type[2], tct::rec({}), ref modules, ref 
			vars, ref errors);
	}
	if (name eq 'hash::delete') {
		var type = ptd_system::can_delete(fun_val_type[0], ref modules, ref errors);
		if (type->type is :tct_rec) {
			var cross = type;
			cross->type = ptd_system::cross_type(tct::hash(tct::empty()), type->type, ref modules, ref errors);
			set_type_to_lval_spec(fun_val->args[0]->val, type, cross, tct::rec({}), ref modules, ref vars, ref errors);
		}
	}
	if (name eq 'hash::get_value') {
		var type = ptd_system::can_delete(fun_val_type[0], ref modules, ref errors);
		ret_type->src = type->src;
		ret_type->type = type->type as :tct_hash if type->type is :tct_hash;
	}
	if (name eq 'hash::values') {
		var type = ptd_system::can_delete(fun_val_type[0], ref modules, ref errors);
		ret_type->src = type->src;
		ret_type->type = tct::arr(type->type as :tct_hash) if type->type is :tct_hash;
	}
	if (name eq 'hash::add_all') {
		set_type_to_lval_spec(fun_val->args[0]->val, fun_val_type[0], fun_val_type[1], tct::rec({}), ref modules, ref 
			vars, ref errors);
	}
	
	if (name eq 'ov::as') {
		ptd_system::check_assignment(tct::tct_im(), fun_val_type[0], ref modules, ref errors);
	}
	if (name eq 'dfile::ssave') {
		ptd_system::check_assignment(tct::tct_im(), fun_val_type[0], ref modules, ref errors);
	}
	if (name eq 'singleton::sigleton_do_not_use_without_approval') {
		return fun_val_type[0];
	}
	return ret_type;
}

def rec_get_var_from_lval(lval : @nast::value_t, ref errors : @tc_types::errors_t) : @tc_types::lval_path {
	var a : @tc_types::lval_path = [];
	if (lval->value is :var) {
		array::push(ref a, :var(lval->value as :var));
	} elsif (lval->value is :bin_op) {
		var bin_op = lval->value as :bin_op;
		if (bin_op->op eq '->') {
			a = rec_get_var_from_lval(bin_op->left, ref errors);
			array::push(ref a, :rec(bin_op->right->value as :hash_key));
		} elsif (bin_op->op eq 'ARRAY_INDEX') {
			a = rec_get_var_from_lval(bin_op->left, ref errors);
			array::push(ref a, :arr);
		} elsif (bin_op->op eq 'HASH_INDEX') {
			a = rec_get_var_from_lval(bin_op->left, ref errors);
			array::push(ref a, :hashkey);
		} else {
			add_error(ref errors, 'invalid operator ' . (bin_op->op) . ' used in lvalue');
		}
	} else {
		add_error(ref errors, 'invalid type for lvalue');
	}
	return a;
}

def mk_new_type_lval(var_tab : @tc_types::lval_path, rtype : @tc_types::type, ltype : @tc_types::type, empty_type : 
	@tct::meta_type, ref modules : @tc_types::modules_t, ref errors : @tc_types::errors_t) : @tct::meta_type {
	var_tab = array::subarray(var_tab, 1, array::len(var_tab) - 1);
	if (array::len(var_tab) == 0) {
		if (is_known(ltype)) {
			var check_info = ptd_system::check_assignment(ltype->type, rtype, ref modules, ref errors);
			if (check_info is :err) {
				add_error(ref errors, 'invalid type in assignment: ' . get_print_check_info(check_info));
			}
			return ltype->type;
		} else {
			ptd_system::check_assignment(tct::tct_im(), rtype, ref modules, ref errors);
			ltype = ptd_system::can_create(ltype, ref modules, ref errors);
			return rtype->type if ptd_system::is_equal(ltype->type, empty_type);
			return ptd_system::cross_type(ltype->type, rtype->type, ref modules, ref errors);
		}
	} else {
		ltype = ptd_system::can_create(ltype, ref modules, ref errors);
		match (var_tab[0]) case :var(var name) {
			die(var_tab);
		} case :arr {
			return tct::tct_im() unless ltype->type is :tct_arr;
			ltype->type = ltype->type as :tct_arr;
			return tct::arr(mk_new_type_lval(var_tab, rtype, ltype, empty_type, ref modules, ref errors));
		} case :hashkey {
			return tct::tct_im() unless ltype->type is :tct_hash;
			ltype->type = ltype->type as :tct_hash;
			return tct::hash(mk_new_type_lval(var_tab, rtype, ltype, empty_type, ref modules, ref errors));
		} case :rec(var name) {
			return tct::tct_im() unless ltype->type is :tct_rec;
			var tt : ptd::hash(@tct::meta_type) = ltype->type as :tct_rec;
			if (hash::has_key(tt, name)) {
				ltype->type = hash::get_value(tt, name);
				hash::set_value(ref tt, name, mk_new_type_lval(var_tab, rtype, ltype, empty_type, ref modules, ref 
						errors));
			} else {
				if (array::len(var_tab) != 1) {
					return tct::tct_im();
				}
				ptd_system::check_assignment(tct::tct_im(), rtype, ref modules, ref errors);
				hash::set_value(ref tt, name, rtype->type);
			}
			return tct::rec(tt);
		}
	}
}

def set_type_to_lval(lval : @nast::value_t, ltype : @tc_types::type, rtype : @tc_types::type, ref modules : 
	@tc_types::modules_t, ref vars : @tc_types::vars_t, ref errors : @tc_types::errors_t) : @tc_types::type {
	var empty_type = ptd_system::can_delete(ltype, ref modules, ref errors);
	return set_type_to_lval_spec(lval, ltype, rtype, empty_type->type, ref modules, ref vars, ref errors);
}

def set_type_to_lval_spec(lval : @nast::value_t, ltype : @tc_types::type, rtype : @tc_types::type, empty_type : 
	@tct::meta_type, ref modules : @tc_types::modules_t, ref vars : @tc_types::vars_t, ref errors : @tc_types::errors_t) 
	: @tc_types::type {
	var err_len = array::len(errors->errors);
	var var_tab = rec_get_var_from_lval(lval, ref errors);
	return ltype if (err_len != array::len(errors->errors));
	var var_name = var_tab[0] as :var;
	if (!hash::has_key(vars, var_name)) {
		add_error(ref errors, 'variable ' . var_name . ' does not exist');
		return ltype;
	}
	var var_ = hash::get_value(vars, var_name);
	match (var_->overwrited) case :yes {
		var new_type = mk_new_type_lval(var_tab, rtype, {type => var_->type, src => :speculation}, empty_type, ref 
				modules, ref errors);
		set_type_to_variable(ref vars, var_name, new_type);
		return rtype;
	} case :no {
		mk_new_type_lval(var_tab, rtype, {type => var_->type, src => :known}, empty_type, ref modules, ref errors);
		return ltype;
	}
}

def get_type_left_side_equation(left : @nast::value_t, ref modules : @tc_types::modules_t, ref vars : @tc_types::vars_t, 
	ref errors : @tc_types::errors_t) : @tc_types::type {
	if (left->value is :bin_op && (left->value as :bin_op)->op eq '->') {
		return get_type_record_key(left->value as :bin_op, ref modules, ref vars, ref errors);
	} else {
		return check_val(left, ref modules, ref vars, ref errors);
	}
}

def get_type_record_key(bin_op : @nast::bin_op_t, ref modules : @tc_types::modules_t, ref vars : @tc_types::vars_t, ref 
	errors : @tc_types::errors_t) : @tc_types::type {
	var left_type = check_val(bin_op->left, ref modules, ref vars, ref errors);
	left_type = ptd_system::can_delete(left_type, ref modules, ref errors);
	if (left_type->type is :tct_rec) {
		var fields = left_type->type as :tct_rec;
		var field = bin_op->right->value as :hash_key;
		if (!hash::has_key(fields, field)) {
			add_error(ref errors, 'unknown record key: ' . field) if is_known(left_type);
			left_type->type = tct::tct_im();
			return left_type;
		}
		left_type->type = hash::get_value(fields, field);
		return left_type;
	}
	if (left_type->type is :tct_hash) {
		left_type->type = left_type->type as :tct_hash;
		return left_type;
	}
	if (!ptd_system::is_accepted(left_type, tct::rec({}), ref modules, ref errors)) {
		add_error(ref errors, 'binary operator -> can be applied only to record : ' . 
			get_print_tct_type_name(left_type->type));
	}
	left_type->type = tct::tct_im();
	return left_type;
}

def get_type_from_bin_op_and_check(bin_op : @nast::bin_op_t, ref modules : @tc_types::modules_t, ref vars : 
	@tc_types::vars_t, ref errors : @tc_types::errors_t) : @tc_types::type {
	var op : ptd::sim() = bin_op->op;
	var right_type : @tc_types::type = check_val(bin_op->right, ref modules, ref vars, ref errors);
	if (op eq '=') {
		if (right_type->type is :tct_void) {
			add_error(ref errors, 'cannot use ''void'' type returned from function as value');
			return {type => tct::tct_im(), src => :speculation};
		}
		var err_left_len = array::len(errors->errors);
		var left_type : @tc_types::type = get_type_left_side_equation(bin_op->left, ref modules, ref vars, ref errors);
		return left_type if (array::len(errors->errors) - err_left_len > 0);
		return set_type_to_lval(bin_op->left, left_type, right_type, ref modules, ref vars, ref errors);
	}
	var left_type2 : @tc_types::type = ptd_system::can_delete(check_val(bin_op->left, ref modules, ref vars, ref errors), 
			ref modules, ref errors);
	var ret_type = {type => tct::tct_im(), src => left_type2->src};
	if (op eq '->') {
		return get_type_record_key(bin_op, ref modules, ref vars, ref errors);
	}
	if (op eq 'ARRAY_INDEX') {
		if (!ptd_system::is_accepted(left_type2, tct::arr(tct::tct_im()), ref modules, ref errors)) {
			add_error(ref errors, 'array operator ''[]'' can be applied only to array, not for: '.
				get_print_tct_type_name(left_type2->type));
			return ret_type;
		}
		if (!ptd_system::is_accepted(right_type, tct::sim(), ref modules, ref errors)) {
			add_error(ref errors, 'array index should be number');
		}
		left_type2->type = left_type2->type as :tct_arr if left_type2->type is :tct_arr;
		return left_type2;
	}
	if (op eq 'HASH_INDEX') {
		if (!ptd_system::is_accepted(left_type2, tct::hash(tct::tct_im()), ref modules, ref errors)) {
			add_error(ref errors, 'hash operator ''{}'' can be applied only to hash');
			return ret_type;
		}
		if (!ptd_system::is_accepted(right_type, tct::sim(), ref modules, ref errors)) {
			add_error(ref errors, 'hash index should be string');
		}
		left_type2->type = left_type2->type as :tct_hash if left_type2->type is :tct_hash;
		return left_type2;
	}
	if (op eq '[]=') {
		if (!ptd_system::is_accepted(left_type2, tct::arr(tct::tct_im()), ref modules, ref errors)) {
			add_error(ref errors, 'array operator ''[]='' can be applied only to array');
			return ret_type;
		}
		right_type->type = tct::arr(right_type->type);
		set_type_to_lval_spec(bin_op->left, left_type2, right_type, tct::arr(tct::empty()), ref 
			modules, ref vars, ref errors);
		left_type2->type = left_type2->type as :tct_arr if left_type2->type is :tct_arr;
		return left_type2;

	}
	var op_def2 = tc_types::get_bin_op_def(op);
	if (!ptd_system::is_accepted(left_type2, op_def2->arg1, ref modules, ref errors)) {
		add_error(ref errors, 'incorrect type of the first argument operator ''' . op . '''');
	}
	if (!ptd_system::is_accepted(right_type, op_def2->arg2, ref modules, ref errors)) {
		add_error(ref errors, 'incorrect type of the second argument operator ''' . op . '''');
	}
	return {type => op_def2->ret, src => :speculation};
}

def get_print_tct_type_name(type : @tct::meta_type) : ptd::sim() {
	match (type) case :tct_empty {
		return '';
	} case :tct_im {
		return 'ptd::ptd_im()';
	} case :tct_void {
		return 'ptd::void()';
	} case :tct_sim {
		return 'ptd::sim()';
	} case :tct_ref(var ref_name) {
		return '@' . ref_name;
	} case :tct_arr(var arr) {
		return 'ptd::arr(' . get_print_tct_type_name(arr) . ')';
	} case :tct_var(var variants) {
		var ret = 'ptd::var(';
		forh var field, var tt (variants) {
			match (tt) case :with_param(var typ) {
				ret .= field . ' => ' . get_print_tct_type_name(typ) . ', ';
			} case :no_param {
				ret .= field . ', ';
			}
		}
		return ret . ')';
	} case :tct_rec(var recs) {
		var ret = 'ptd::rec(';
		forh var field, var tt (recs) {
			ret .= field . ' => ' . get_print_tct_type_name(tt) . ', ';
		}
		return ret . ')';
	} case :tct_hash(var hash) {
		return 'ptd::hash(' . get_print_tct_type_name(hash) . ')';
	}
}

def get_print_tct_label(type : @tct::meta_type) : ptd::sim() {
	match (type) case :tct_empty {
		return 'ptd::ptd_empty';
	} case :tct_im {
		return 'ptd::ptd_im';
	} case :tct_void {
		return 'ptd::void';
	} case :tct_sim {
		return 'ptd::sim';
	} case :tct_ref(var ref_name) {
		return 'ptd::ref';
	} case :tct_arr(var arr) {
		return 'ptd::arr';
	} case :tct_var(var variants) {
		return 'ptd::var';
	} case :tct_rec(var recs) {
		return 'ptd::rec';
	} case :tct_hash(var hash) {
		return 'ptd::hash';
	}
}

def get_print_check_info(check_info : @tc_types::check_info) : ptd::sim() {
	match (check_info) case :ok {
		die;
	} case :err(var info) {
		var ret = ' ';
		for(var i = array::len(info->stack) - 1; i >= 0; i -= 1) {
			match (info->stack[i]) case :ptd_arr {
				ret .= 'ptd::arr';
			} case :ptd_var(var variant) {
				ret .= 'ptd::var(' . variant . ')';
			} case :ptd_rec(var field) {
				ret .= 'ptd::rec(' . field . ')';
			} case :ptd_hash {
				ret .= 'ptd::hash';
			}
			ret .= '->';
		}
		if (info->from is :tct_rec && info->to is :tct_rec) {
			forh var name, var record (info->from as :tct_rec) {
				continue if hash::has_key(info->to as :tct_rec, name);
				return ret . '(ptd::rec with field: ''' . name . ''' instead of ptd::rec without field: ''' . name . 
					''')';
			}
			forh var name, var record (info->to as :tct_rec) {
				continue if hash::has_key(info->from as :tct_rec, name);
				return ret . '(ptd::rec without field: ''' . name . ''' instead of ptd::rec with field: ''' . name . 
					''')';
			}
		} elsif (info->from is :tct_var && info->to is :tct_var) {
			forh var name, var from_type (info->from as :tct_var) {
				var to_types = info->to as :tct_var;
				if (hash::has_key(to_types, name)) {
					match (from_type) case :no_param {
						if (hash::get_value(to_types, name) is :with_param) {
							return ret . '(ptd::var case: ''' . name . ''' no_param instead of ptd::var case: ''' . name 
								. ''' with_param)';
						}
					} case :with_param(var f_t) {
						if (hash::get_value(to_types, name) is :no_param) {
							return ret . '(ptd::var case: ''' . name . ''' with_param instead of ptd::var case: ''' . 
								name . ''' no_param)';
						}
					}
				} else {
					return ret . '(ptd::var with case: ''' . name . ''' instead of ptd::var without case: ''' . name . 
						''')';
				}
			}
		} else {
			ret .= '(' . get_print_tct_label(info->from) . ' instead of ' . get_print_tct_label(info->to) . ')';
		}
		return ret;
	}
}

def check_var_decl(var_decl : @nast::variable_declaration_t, ref modules : @tc_types::modules_t, ref vars : 
	@tc_types::vars_t, ref errors : @tc_types::errors_t) : @tc_types::var_t {
	return check_var_decl_try(var_decl, false, ref modules, ref vars, ref errors)->ok;
}

def check_var_decl_try(var_decl : @nast::variable_declaration_t, is_try : @boolean_t::type, ref modules : 
	@tc_types::modules_t, ref vars : @tc_types::vars_t, ref errors : @tc_types::errors_t) : ptd::rec({ok => @tc_types::var_t, err => @tc_types::type}) {
	add_error(ref errors, 'variable ''' . var_decl->name . ''' already exists') if hash::has_key(vars, var_decl->name);
	var ret_types : ptd::rec({ok => @tc_types::var_t, err => @tc_types::type}) = {
			ok => {overwrited => :yes, type => tct::empty()},
			err => {type => tct::empty(), src => :speculation}
		};
	match (var_decl->type) case :type(var tt) {
		match (ptd_parser::try_value_to_ptd(tt)) case :err(var err) {
			add_error(ref errors, err);
			ret_types->ok->type = tct::tct_im();
		} case :ok(var ok) {
			ret_types->ok->type = ok;
			check_types_imported(ok, ref modules, ref errors);
		}
		ret_types->ok->overwrited = :no;
	} case :none {
	}
	match (var_decl->value) case :value(var value) {
		var assign_type : @tc_types::type = check_val(value, ref modules, ref vars, ref errors);
		if (assign_type->type is :tct_void) {
			add_error(ref errors, 'cannot use ''void'' type returned from function as value');
			return ret_types;
		}
		if (is_try) {
			var ok_err_types = ptd_system::try_get_ensure_sub_types(assign_type, ref modules, ref errors);
			ret_types->err = {type => ok_err_types->err, src => assign_type->src};
			assign_type->type = ok_err_types->ok;
		}
		if (ret_types->ok->type is :tct_empty) {
			ptd_system::check_assignment(tct::tct_im(), assign_type, ref modules, ref errors);
			ret_types->ok->type = assign_type->type;
		} else {
			var check_info = ptd_system::check_assignment(ret_types->ok->type, assign_type, ref modules, ref errors);
			if (check_info is :err) {
				add_error(ref errors, 'invalid type in variable declaration: ' . get_print_check_info(check_info));
			}
		}
	} case :none {
	}
	return ret_types;
}

def add_var_to_vars(var_ : @tc_types::var_t, name : ptd::sim(), ref vars : @tc_types::vars_t) : ptd::void() {
	hash::set_value(ref vars, name, var_);
}

def set_type_to_variable(ref vars : @tc_types::vars_t, var_name : ptd::sim(), type : @tct::meta_type) : ptd::void() {
	add_var_to_vars({overwrited => :yes, type => type}, var_name, ref vars);
}

def add_var_decl_to_vars(var_type : @tct::meta_type, name : ptd::sim(), ref vars : @tc_types::vars_t) : ptd::void() {
	if (var_type is :tct_im || var_type is :tct_empty) {
		add_var_to_vars({overwrited => :yes, type => var_type}, name, ref vars);
	} else {
		add_var_to_vars({overwrited => :no, type => var_type}, name, ref vars);
	}
}

def add_var_decl_with_type_and_check(var_decl : @nast::variable_declaration_t, type : @tc_types::type, ref vars : 
	@tc_types::vars_t, ref errors : @tc_types::errors_t) : ptd::void() {
	add_error(ref errors, 'variable `' . var_decl->name . ''' already exists') if hash::has_key(vars, var_decl->name);
	if (is_known(type)) {
		add_var_to_vars({overwrited => :no, type => type->type}, var_decl->name, ref vars);
	} else {
		add_var_to_vars({overwrited => :yes, type => type->type}, var_decl->name, ref vars);
	}
}

def is_known(vtype : @tc_types::type) : @boolean_t::type {
	return ptd_system::is_known(vtype->src);
}

def get_function_name(fun_module : ptd::sim(), fun_name : ptd::sim()) : ptd::sim() {
	return ((fun_module ne '') ? (fun_module . '::') : '') . fun_name;
}

def get_fun_module(fun_module : ptd::sim(), module : ptd::sim()) : ptd::sim() {
	return fun_module eq '' ? module : fun_module;
}

def get_function_def(fun_module : ptd::sim(), fun_name : ptd::sim(), modules : @tc_types::modules_t) : 
	@tc_types::def_fun_t {
	return hash::get_value(hash::get_value(modules->funs, get_fun_module(fun_module, modules->env->current_module)), 
				get_fun_key(fun_name, fun_module));
}

def check_function_exists(fun_module : ptd::sim(), fun_name : ptd::sim(), ref modules : @tc_types::modules_t, ref errors 
	: @tc_types::errors_t) : @boolean_t::type {
	var module : ptd::sim() = get_fun_module(fun_module, modules->env->current_module);
	if (!hash::has_key(modules->imports, module) || !hash::get_value(modules->imports, module)) {
		add_error(ref errors, 'module ''' . module . ''' not imported') if !hash::has_key(modules->imports, module);
		hash::set_value(ref modules->imports, module, false);
		return false;
	} elsif (!hash::has_key(modules->funs, module)) {
		return false;
	}
	if (!hash::has_key(hash::get_value(modules->funs, module), get_fun_key(fun_name, fun_module))) {
		add_error(ref errors, 'function `' . get_function_name(fun_module, fun_name) . ''' does not exist');
		return false;
	}
	return true;
}

def add_error(ref errors : @tc_types::errors_t, msg : ptd::sim()) : ptd::void() {
	array::push(ref errors->errors, {message => msg, line => errors->current_line, module => errors->module, column => -1, type => :error});
}

def add_warning(ref errors : @tc_types::errors_t, msg : ptd::sim()) : ptd::void() {
	array::push(ref errors->warnings, {message => msg, line => errors->current_line, module => errors->module, column => -1, type => :warning});
}
