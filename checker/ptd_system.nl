###
# (c) Atinea Sp. z o.o.
###


use ov;
use hash;
use ptd;
use tct;
use tc_types;
use boolean_t;
use string;
use array;
use ptd_parser;

def add_error(ref errors : @tc_types::errors_t, msg : ptd::sim()) : ptd::void() {
	array::push(ref errors->errors, {message => msg, line => errors->current_line, module => errors->module, column => -1, type => :error});
}

def ptd_system::is_known(value_src : @tc_types::value_src) : @boolean_t::type {
	return value_src is :known || value_src is :knownhash;
}

def ptd_system::is_equal(a : @tct::meta_type, b : @tct::meta_type) : @boolean_t::type {
	return false unless ov::get_element(a) eq ov::get_element(b);
	match (a) case :tct_im {
	} case :tct_arr(var arr_type) {
		return ptd_system::is_equal(arr_type, b as :tct_arr);
	} case :tct_hash(var hash_type) {
		return ptd_system::is_equal(hash_type, b as :tct_hash);
	} case :tct_rec(var records) {
		return false if hash::size(b as :tct_rec) != hash::size(records);
		forh var name, var record (records) {
			return false unless hash::has_key(b as :tct_rec, name);
			return false unless ptd_system::is_equal(record, hash::get_value(b as :tct_rec, name));
		}
	} case :tct_ref(var ref_name) {
		return false unless ref_name eq b as :tct_ref;
	} case :tct_sim {
	} case :tct_var(var vars) {
		return false if hash::size(b as :tct_var) != hash::size(vars);
		forh var name, var type (vars) {
			return false unless hash::has_key(b as :tct_var, name);
			var to_type = hash::get_value(b as :tct_var, name);
			continue if type is :no_param && to_type is :no_param;
			return false unless type is :with_param && to_type is :with_param;
			return false unless ptd_system::is_equal(to_type as :with_param, type as :with_param);
		}
	} case :tct_empty {
	} case :tct_void {
	}
	return true;
}

def ptd_system::is_try_ensure_type(type : @tc_types::type, ref modules : @tc_types::modules_t, ref errors : 
	@tc_types::errors_t) : @boolean_t::type {
	return ptd_system::is_accepted(type, tct::var({ok => tct::tct_im(), err => tct::tct_im()}), ref modules, ref errors);
}

def ptd_system::try_get_ensure_sub_types(type : @tc_types::type, ref modules : @tc_types::modules_t, ref errors : 
	@tc_types::errors_t) : ptd::rec({ok => @tct::meta_type, err => @tct::meta_type}) {
	var ret_types = {ok => tct::tct_im(), err => tct::tct_im()};
	type = ptd_system::can_delete(type, ref modules, ref errors);
	if (ptd_system::is_try_ensure_type(type, ref modules, ref errors)) {
		return ret_types if type->type is :tct_im;
		ret_types = {ok => tct::empty(), err => tct::empty()};
		return ret_types unless type->type is :tct_var;
		var cases = type->type as :tct_var;
		if(hash::has_key(cases, 'ok')){
			var param = hash::get_value(cases, 'ok');
			match(param) case :no_param{
			} case :with_param(var sub_type){
				ret_types->ok = sub_type;
			}
		}
		if(hash::has_key(cases, 'err')){
			var param = hash::get_value(cases, 'err');
			match(param) case :no_param{
			} case :with_param(var sub_type){
				ret_types->err = sub_type;
			}
		}
	} else {
		add_error(ref errors, 'in try|ensure expr; expr must be variant: ok|err');
	}
	return ret_types;
}

def ptd_system::is_condition_type(from : @tc_types::type, ref modules : @tc_types::modules_t, ref errors : 
	@tc_types::errors_t) : @boolean_t::type {
	return ptd_system::is_accepted(from, tct::bool(), ref modules, ref errors);
}

def ptd_system::is_accepted(from : @tc_types::type, as_type : @tct::meta_type, ref modules : @tc_types::modules_t, ref 
	errors : @tc_types::errors_t) : @boolean_t::type {
	var ret = ptd_system::is_accepted_info(from, as_type, ref modules, ref errors);
	return ret is :ok;
}

def ptd_system::is_accepted_info(from : @tc_types::type, as_type : @tct::meta_type, ref modules : @tc_types::modules_t, 
	ref errors : @tc_types::errors_t) : @tc_types::check_info {
	from = ptd_system::can_delete(from, ref modules, ref errors);
	return :ok if from->type is :tct_im;
	if (as_type is :tct_rec) {
		return :ok if hash::size(as_type as :tct_rec) == 0 && from->type is :tct_rec;
	} elsif (as_type is :tct_var) {
		return :ok if hash::size(as_type as :tct_var) == 0 && from->type is :tct_var;
	}
	var ref_inf = {level => 1, from => {}, to => {}, check => false, cast => false};
	return check_assignment_info(as_type, from->type, ref_inf, from->src, ref modules, ref errors);
}

def add_ref_name(ref from : @tct::meta_type, ref hash : ptd::hash(ptd::arr(ptd::sim())), ref arr : ptd::arr(ptd::sim()),
		level : ptd::sim(), ref modules : @tc_types::modules_t, ref errors : @tc_types::errors_t) : ptd::sim() {
	var type_name = from as :tct_ref;
	arr = hash::get_value(hash, type_name) if (hash::has_key(hash, type_name));
	array::push(ref arr, level);
	hash::set_value(ref hash, type_name, arr);
	from = ptd_system::get_ref_type(type_name, ref modules, ref errors);
	return type_name;
}

def is_cycle_ref(ref a : @tct::meta_type, ref b : @tct::meta_type, ref ref_inf : @tc_types::ref_t, is_cross : 
	@boolean_t::type, deleted : @boolean_t::type, ref modules : @tc_types::modules_t, ref errors : @tc_types::errors_t) 
	: @boolean_t::type {
	if (a is :tct_ref && b is :tct_ref) {
		return true if a as :tct_ref eq b as :tct_ref;
		return true if is_cross && check_assignment_info(a, b, ref_inf, :speculation, ref modules, ref errors) is :ok;
	}
	var arr_to = [];
	var arr_from = [];
	while (b is :tct_ref) {
		var type_name = add_ref_name(ref b, ref ref_inf->from, ref arr_from, ref_inf->level, ref modules, ref errors);
		add_delete(type_name, ref modules, ref errors) if ref_inf->check && array::len(arr_from) == 1 && deleted;
	}
	if (ref_inf->cast) {
		if (b is :tct_im) {
			walk_on_type(a, :create, ref_inf->to, ref modules, ref errors) if ref_inf->check;
			return true;
		}
	}
	while (a is :tct_ref) {
		var type_name = add_ref_name(ref a, ref ref_inf->to, ref arr_to, ref_inf->level, ref modules, ref errors);
		add_create(type_name, ref modules, ref errors) if ref_inf->check && array::len(arr_to) == 1;
	}
	var j = 0;
	for(var i = 0; i < array::len(arr_to) - 1 && array::len(arr_from) > 0; ++i) {
		while (arr_from[j] < arr_to[i]) {
			++j;
		}
		return true if (arr_from[j] == arr_to[i]);
	}
	ref_inf->level += 1;
	return false;
}

def ptd_system::cross_type(a : @tct::meta_type, b : @tct::meta_type, ref modules : @tc_types::modules_t, ref errors : 
	@tc_types::errors_t) : @tct::meta_type {
	var ref_inf = {level => 1, from => {}, to => {}, check => false, cast => false};
	return cross_type(a, b, ref_inf, ref modules, ref errors);
}

def cross_type(a : @tct::meta_type, b : @tct::meta_type, ref_inf : @tc_types::ref_t, ref modules : @tc_types::modules_t, 
	ref errors : @tc_types::errors_t) : @tct::meta_type {
	return :tct_im if (b is :tct_im || a is :tct_im);
	if (is_cycle_ref(ref a, ref b, ref ref_inf, true, false, ref modules, ref errors)) {
		return a;
	}
	if (ref_inf->level == 200) {
		add_error(ref errors, 'cannnot assign these two types to one variable - types merge failed.');
		return :tct_im;
	}
	return a if (b is :tct_empty);
	match (a) case :tct_empty {
		return b;
	} case :tct_im {
		return :tct_im;
	} case :tct_sim {
		return :tct_sim if b is :tct_sim;
	} case :tct_ref(var ref_name) {
		die;
	} case :tct_void {
		die;
	} case :tct_arr(var arr) {
		if (b is :tct_arr) {
			return tct::arr(cross_type(arr, b as :tct_arr, ref_inf, ref modules, ref errors));
		}
	} case :tct_var(var variants) {
		var fin = variants;
		if (b is :tct_var) {
			var ret = b as :tct_var;
			forh var field, var type (variants) {
				if (hash::has_key(ret, field)) {
					var t2 = hash::get_value(ret, field);
					match (t2) case :with_param(var typ) {
						match (type) case :with_param(var typ2) {
							hash::set_value(ref fin, field, cross_type(typ, typ2, ref_inf, ref modules, ref errors));
						} case :no_param {
							return :tct_im;
						}
					} case :no_param {
						match (type) case :with_param(var typ) {
							return :tct_im;
						} case :no_param {
							hash::set_value(ref fin, field, tct::none());
						}
					}
				} else {
					match (type) case :with_param(var typ) {
						hash::set_value(ref fin, field, typ);
					} case :no_param {
						hash::set_value(ref fin, field, tct::none());
					}
				}
			}
			forh var field, var type (ret) {
				continue if (hash::has_key(fin, field));
				match (type) case :with_param(var typ) {
					hash::set_value(ref fin, field, typ);
				} case :no_param {
					hash::set_value(ref fin, field, tct::none());
				}
			}
			return tct::var(fin);
		}
	} case :tct_rec(var reca) {
		if (b is :tct_rec) {
			var recb = b as :tct_rec;
			var err = false;
			forh var field, var type (reca) {
				err = true if (!hash::has_key(recb, field));
			}
			forh var field, var type (recb) {
				err = true if (!hash::has_key(reca, field));
			}
			if (err) {
				var reta = ptd_system::rec_to_hash(a, ref_inf, ref modules, ref errors);
				var retb = ptd_system::rec_to_hash(b, ref_inf, ref modules, ref errors);
				return tct::hash(cross_type(reta, retb, ref_inf, ref modules, ref errors));
			} else {
				var ret = {};
				forh var field, var type (reca) {
					hash::set_value(ref ret, field, cross_type(type, hash::get_value(recb, field), ref_inf, ref modules, 
							ref errors));
				}
				return tct::rec(ret);
			}
		}
		if (b is :tct_hash) {
			var sum = ptd_system::rec_to_hash(a, ref_inf, ref modules, ref errors);
			return tct::hash(ptd_system::cross_type(b as :tct_hash, sum, ref modules, ref errors));
		}
	} case :tct_hash(var hash) {
		if (b is :tct_hash) {
			return tct::hash(cross_type(hash, b as :tct_hash, ref_inf, ref modules, ref errors));
		}
		if (b is :tct_rec) {
			var sum = ptd_system::rec_to_hash(b, ref_inf, ref modules, ref errors);
			return tct::hash(ptd_system::cross_type(hash, sum, ref modules, ref errors));
		}
	}
	return :tct_im;
}

def ptd_system::rec_to_hash(a : @tct::meta_type, ref_inf : @tc_types::ref_t, ref modules : @tc_types::modules_t, ref 
	errors : @tc_types::errors_t) : @tct::meta_type {
	var ret = tct::empty();
	forh var field, var type (a as :tct_rec) {
		ret = cross_type(type, ret, ref_inf, ref modules, ref errors);
	}
	return ret;
}

def ptd_system::cast_type(to : @tct::meta_type, from : @tc_types::type, ref modules : @tc_types::modules_t, ref errors : 
	@tc_types::errors_t) : @tc_types::check_info {
	var ref_inf = {level => 1, from => {}, to => {}, check => true, cast => true};
	return check_assignment_info(to, from->type, ref_inf, from->src, ref modules, ref errors);
}

def ptd_system::check_assignment(to : @tct::meta_type, from : @tc_types::type, ref modules : @tc_types::modules_t, ref 
	errors : @tc_types::errors_t) : @tc_types::check_info {
	var ref_inf = {level => 1, from => {}, to => {}, check => true, cast => false};
	return check_assignment_info(to, from->type, ref_inf, from->src, ref modules, ref errors);
}

def mk_err(to : @tct::meta_type, from : @tct::meta_type) : @tc_types::check_info {
	return :err({to => to, from => from, stack => []});
}

def check_assignment_info(to : @tct::meta_type, from : @tct::meta_type, ref_inf : @tc_types::ref_t, type_src : 
	@tc_types::value_src, ref modules : @tc_types::modules_t, ref errors : @tc_types::errors_t) : @tc_types::check_info {
	return :ok if from is :tct_empty;
	return mk_err(to, from) if from is :tct_void;
	if (to is :tct_im) {
		walk_on_type(from, :delete, ref_inf->from, ref modules, ref errors)
			if ref_inf->check && ptd_system::is_known(type_src);
		return :ok;
	}
	if (is_cycle_ref(ref to, ref from, ref ref_inf, false, ptd_system::is_known(type_src), ref modules, ref errors)) {
		return :ok;
	}
	if (ref_inf->level == 200) {
		add_error(ref errors, 'can''t assignment this two type');
		return mk_err(to, from);
	}
	match (to) case :tct_im {
		return :ok;
	} case :tct_arr(var arr_type) {
		return mk_err(to, from) unless from is :tct_arr;
		match (check_assignment_info(arr_type, from as :tct_arr, ref_inf, type_src, ref modules, ref errors)) case :ok {
			return :ok;
		} case :err(var info) {
			array::push(ref info->stack, :ptd_arr);
			return :err(info);
		}
	} case :tct_hash(var hash_type) {
		if (from is :tct_rec && !type_src is :known) {
			forh var name, var record (from as :tct_rec) {
				match (check_assignment_info(hash_type, record, ref_inf, type_src, ref modules, ref errors)) case :ok {
				} case :err(var info) {
					array::push(ref info->stack, :ptd_rec(name));
					return :err(info);
				}
			}
			return :ok;
		}
		return mk_err(to, from) unless from is :tct_hash;
		match (check_assignment_info(hash_type, from as :tct_hash, ref_inf, type_src, ref modules, ref errors)) case :ok {
			return :ok;
		} case :err(var info) {
			array::push(ref info->stack, :ptd_hash);
			return :err(info);
		}
	} case :tct_rec(var records) {
		if (ref_inf->cast && from is :tct_hash) {
			var left = from as :tct_hash;
			forh var name, var record (records) {
				match (check_assignment_info(record, left, ref_inf, type_src, ref modules, ref errors)) case :ok {
				} case :err(var info) {
					array::push(ref info->stack, :ptd_rec(name));
					return :err(info);
				}
			}
			return :ok;
		}
		return mk_err(to, from) unless from is :tct_rec;
		var cand_records : ptd::hash(@tct::meta_type) = from as :tct_rec;
		return mk_err(to, from) if hash::size(cand_records) != hash::size(records);
		forh var name, var record (records) {
			return mk_err(to, from) unless hash::has_key(cand_records, name);
			var cand_record : @tct::meta_type = hash::get_value(cand_records, name);
			match (check_assignment_info(record, cand_record, ref_inf, type_src, ref modules, ref errors)) case :ok {
			} case :err(var info) {
				array::push(ref info->stack, :ptd_rec(name));
				return :err(info);
			}
		}
		return :ok;
	} case :tct_ref(var ref_name) {
		die;
	} case :tct_void {
		die;
	} case :tct_sim {
		return :ok if from is :tct_sim;
		return mk_err(to, from);
	} case :tct_var(var vars) {
		return mk_err(to, from) unless from is :tct_var;
		var from_var = from as :tct_var;
		forh var name, var from_type (from_var) {
			return mk_err(to, from) unless hash::has_key(vars, name);
			var to_type = hash::get_value(vars, name);
			match (from_type) case :no_param {
				match (to_type) case :no_param {
					continue;
				} case :with_param(var t_t) {
					return mk_err(to, from);
				}
			} case :with_param(var f_t) {
				match (to_type) case :no_param {
					return mk_err(to, from);
				} case :with_param(var t_t) {
					match (check_assignment_info(t_t, f_t, ref_inf, type_src, ref modules, ref errors)) case :ok {
					} case :err(var info) {
						array::push(ref info->stack, :ptd_var(name));
						return :err(info);
					}
				}
			}
		}
		return :ok;
	} case :tct_empty {
		die;
	}
}

def add_delete(type_name : ptd::sim(), ref modules : @tc_types::modules_t, ref errors : @tc_types::errors_t) : 
		ptd::void() {
	array::push(ref modules->env->deref->delete, {
			line => errors->current_line,
			module => modules->env->current_module,
			type_name => type_name
		});
}

def add_create(type_name : ptd::sim(), ref modules : @tc_types::modules_t, ref errors : @tc_types::errors_t) : 
		ptd::void() {
	array::push(ref modules->env->deref->create, {
			line => errors->current_line,
			module => modules->env->current_module,
			type_name => type_name
		});
}

def ptd_system::can_delete(from : @tc_types::type, ref modules : @tc_types::modules_t, ref errors : @tc_types::errors_t) 
	: @tc_types::type {
	while (from->type is :tct_ref) {
		var type_name = from->type as :tct_ref;
		add_delete(type_name, ref modules, ref errors) if ptd_system::is_known(from->src);
		from->type = ptd_system::get_ref_type(type_name, ref modules, ref errors);
	}
	return from;
}

def ptd_system::can_create(from : @tc_types::type, ref modules : @tc_types::modules_t, ref errors : @tc_types::errors_t) 
	: @tc_types::type {
	while (from->type is :tct_ref) {
		var type_name = from->type as :tct_ref;
		add_create(type_name, ref modules, ref errors) if ptd_system::is_known(from->src);
		from->type = ptd_system::get_ref_type(type_name, ref modules, ref errors);
	}
	return from;
}

def walk_on_type(type : @tct::meta_type, operation : ptd::var({create => ptd::none(), delete => ptd::none()}), ref_inf : 
	ptd::hash(ptd::arr(ptd::sim())), ref modules : @tc_types::modules_t, ref errors : @tc_types::errors_t) : ptd::void() {
	var refs = {};
	get_ref_in_type(type, ref refs);
	var refs2 = refs;
	forh var type_name, var nop (refs2) {
		var function = get_function_def(type_name, ref modules, ref errors);
		return if array::len(function) == 0;
		function = function[0];
		match (function->ref_types) case :yes(var typ) {
			fora var type_name2 (typ) {
				hash::set_value(ref refs, type_name2, '');
			}
		} case :no {
			type = ptd_system::get_ref_type(type_name, ref modules, ref errors);
			var ref_names = {};
			get_all_ref_in_type(type, ref ref_names, ref modules, ref errors);
			var arr_names = [];
			forh var type_name2, var nop2 (ref_names) {
				hash::set_value(ref refs, type_name2, '');
				array::push(ref arr_names, type_name2);
			}
			function = get_function_def(type_name, ref modules, ref errors)[0];
			function->ref_types = :yes(arr_names);
			var module_st = hash::get_value(modules->funs, function->module);
			hash::set_value(ref module_st, function->name, function);
			hash::set_value(ref modules->funs, function->module, module_st);
		}
	}
	forh var type_name, var ar (refs) {
		continue if hash::has_key(ref_inf, type_name);
		match (operation) case :create {
			add_create(type_name, ref modules, ref errors);
		} case :delete {
			add_delete(type_name, ref modules, ref errors);
		}
	}
}

def get_all_ref_in_type(type : @tct::meta_type, ref refs : ptd::hash(ptd::sim()), ref modules : @tc_types::modules_t, 
	ref errors : @tc_types::errors_t) : ptd::void() {
	var refs2 = {};
	get_ref_in_type(type, ref refs2);
	forh var type_name, var nop (refs2) {
		continue if (hash::has_key(refs, type_name));
		hash::set_value(ref refs, type_name, '');
		type = ptd_system::get_ref_type(type_name, ref modules, ref errors);
		get_all_ref_in_type(type, ref refs, ref modules, ref errors);
	}
}

def get_ref_in_type(type : @tct::meta_type, ref refs : ptd::hash(ptd::sim())) : ptd::void() {
	match (type) case :tct_im {
	} case :tct_arr(var arr_type) {
		get_ref_in_type(arr_type, ref refs);
	} case :tct_hash(var hash_type) {
		get_ref_in_type(hash_type, ref refs);
	} case :tct_rec(var records) {
		forh var name, var record (records) {
			get_ref_in_type(record, ref refs);
		}
	} case :tct_ref(var ref_name) {
		hash::set_value(ref refs, ref_name, '');
	} case :tct_void {
	} case :tct_sim {
	} case :tct_var(var vars) {
		forh var name, var from_type (vars) {
			match (from_type) case :no_param {
			} case :with_param(var param) {
				get_ref_in_type(param, ref refs);
			}
		}
	} case :tct_empty {
	}
}

def get_function_def(type_name : ptd::sim(), ref modules : @tc_types::modules_t, ref errors : @tc_types::errors_t) : 
		ptd::arr(@tc_types::def_fun_t) {
	var module : ptd::sim();
	var fun_name : ptd::sim();
	var ix = string::index2(type_name, '::');
	if (ix >= 0) {
		module = string::substr(type_name, 0, ix);
		fun_name = string::substr(type_name, ix + 2, string::length(type_name) - ix - 2);
	} else {
		add_error(ref errors, 'wrong type name `' . type_name . ''' ');
		return [];
	}
	if (!hash::has_key(modules->funs, module)) {
		return [];
	}
	var module_st = hash::get_value(modules->funs, module);
	if (!hash::has_key(module_st, fun_name)) {
		add_error(ref errors, 'function `' . type_name . ''' does not exist');
		return [];
	}
	return [hash::get_value(module_st, fun_name)];
}

def ptd_system::get_ref_type(type_name : ptd::sim(), ref modules : @tc_types::modules_t, ref errors : 
	@tc_types::errors_t) : @tct::meta_type {
	var function = get_function_def(type_name, ref modules, ref errors);
	return tct::tct_im() if array::len(function) == 0;
	function = function[0];
	var module_st = hash::get_value(modules->funs, function->module);
	match (function->is_type) case :yes(var typ) {
		return typ;
	} case :no {
	}
	var fun_as_type : @tct::meta_type = tct::tct_im();
	match (ptd_parser::fun_def_to_ptd(function->cmd)) case :err(var err) {
		add_error(ref errors, err);
	} case :ok(var ok) {
		fun_as_type = ok;
	}
	function->is_type = :yes(fun_as_type);
	hash::set_value(ref module_st, function->name, function);
	hash::set_value(ref modules->funs, function->module, module_st);
	return fun_as_type;
}

