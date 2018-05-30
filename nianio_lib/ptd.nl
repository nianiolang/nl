###
# (c) Atinea Sp. z o.o.
###


use hash;
use array;
use ov;
use c_std_lib;

def ptd::arr(arr_type : @ptd::meta_type) : @ptd::meta_type {
	return :ptd_arr(arr_type);
}

def ptd::rec(h : ptd::hash(@ptd::meta_type)) : @ptd::meta_type {
	return :ptd_rec(h);
}

def ptd::sim() : @ptd::meta_type {
	return :ptd_sim;
}

def ptd::none() {
	return :ptd_var_none;
}

def ptd::void() {
	return :ptd_void;
}

def ptd::hash(h : @ptd::meta_type) : @ptd::meta_type {
	return :ptd_hash(h);
}

def ptd::ptd_im() : @ptd::meta_type {
	return :ptd_im;
}

def ptd::var(h) : @ptd::meta_type {
	var types = {};
	forh var item, var value (h) {
		var et;
		if (value is :ptd_var_none) {
			et = :no_param;
		} else {
			et = :with_param(value);
		}
		hash::set_value(ref types, item, et);
	}
	return ptd::ensure_only_static_do_not_touch_without_permission(@ptd::meta_type, :ptd_var(types));
}

def ptd::meta_type() {
	return ptd::var({
			ptd_rec => ptd::hash(@ptd::meta_type),
			ptd_hash => @ptd::meta_type,
			ptd_arr => @ptd::meta_type,
			ptd_var => ptd::hash(ptd::var({with_param => @ptd::meta_type, no_param => ptd::none()})),
			ref => ptd::rec({
				module => ptd::sim(), 
				name => ptd::sim()
			}),
			ptd_sim => ptd::none(),
			ptd_im => ptd::none()
		});
}

def ptd::ensure(type, value) {
	var path = [];
	ensure ptd::ensure_dyn(type, value, ref path);
	return value;
}

def ptd::try_ensure(type, value) {
	var path = [];
	try ptd::ensure_dyn(type, value, ref path);
	return :ok(value);
}

def ptd::ensure_only_dynamic(type, value) {
	var path = [];
	ensure ptd::ensure_dyn(type, value, ref path);
	return value;
}

def ptd::ensure_only_static_do_not_touch_without_permission(type, value) {
	type;
	return value;
}

def ptd::ensure_dyn(type, value, ref path) : ptd::var({ok => ptd::sim(), err => ptd::rec({err => ptd::sim(), path => ptd::ptd_im()})}) {
	return :err({err => '1 Not ov reference in ensure', path => path}) unless c_std_lib::is_variant(type);
	match (type) case :ptd_hash(var ptd_hash) {
		return :err({err => '2 HASH ref expected ', path => path}) unless c_std_lib::is_hash(value);
		forh var key, var val (value) {
			path []= key;
			try ptd::ensure_dyn(ptd_hash, val, ref path);
			array::pop(ref path);
		}
	} case :ptd_arr(var ptd_arr) {
		return :err({err => '3 ARRAY ref expected ', path => path}) unless c_std_lib::is_array(value);
		fora var item (value) {
			path []= ':arr';
			try ptd::ensure_dyn(ptd_arr, item, ref path);
			array::pop(ref path);
		}
	} case :ptd_rec(var ptd_rec) {
		return :err({err => '4 HASH ref expected ', path => path}) unless c_std_lib::is_hash(value);
		return :err({err => '5 keys amount mismatch in ptd_rec', path => path}) unless hash::size(ptd_rec) == hash::size(value);
		path []= ':hash';
		forh var key, var val (ptd_rec) {
			path []= key;
			return :err({err => '6 key ' . key . ' not exists in hash', path => path}) unless hash::has_key(value, key);
			try ptd::ensure_dyn(val, hash::get_value(value, key), ref path);
			array::pop(ref path);
		}
		array::pop(ref path);
	} case :ptd_sim {
		return :err({err => '8 wrong sim ref ', path => path}) unless c_std_lib::is_sim(value);
	} case :ptd_var(var ptd_var) {
		return :err({err => '9 not ov ref', path => path}) unless c_std_lib::is_variant(value);
		var name = ov::get_element(value);
		return :err({err => '10 Case ' . name . ' not allowed in variant. ', path => path}) unless hash::has_key(ptd_var, name);
		path []= name;
		var variant = hash::get_value(ptd_var, name);
		match (variant) case :with_param(var par) {
			return :err({err => '12 with_param ov has no value', path => path}) unless ov::has_value(value);
			return ptd::ensure_dyn(par, ov::get_value(value), ref path);
		} case :no_param {
			return :err({err => '11 no_param ov has value', path => path}) if ov::has_value(value);
		}
		array::pop(ref path);
	} case :ptd_im {
	} case :ref(var ptd_ref) {
		path []= ptd_ref;
		var ret = ptd::ensure_dyn(exec(type, []), value, ref path);
		array::pop(ref path);
		return ret;
	}
	return :ok('');
}

def ptd::is_ref_type(ptd, type_name) {
	match (ptd) case :ref(var ref_name) {
		return false unless (type_name is :ref);
		var ref_name2 = type_name as :ref;
		if (c_std_lib::is_hash(ref_name2)) {
			return false unless (ref_name2->module eq ref_name->module);
			return false unless (ref_name2->name eq ref_name->name);
		} else {
			return ref_name2 eq ref_name;
		}
		return true;
	} case :ptd_im {
	} case :ptd_sim {
	} case :ptd_arr(var arr) {
	} case :ptd_var(var variants) {
	} case :ptd_rec(var recs) {
	} case :ptd_hash(var hash) {
	}
	return false;
}

def exec(func, args) {
	return c_std_lib::exec(func, ref args);
}

def ptd::cast_t(){
	return ptd::var({
		ok => ptd::ptd_im(),
		err => @ptd::cast_error_t
	});
}

def ptd::try_cast(type, value) : @ptd::cast_t {
	return ptd::try_dynamic_cast(type, value);
}
def ptd::try_dynamic_cast(type, value) : @ptd::cast_t {
	var tmp = try_dynamic_cast(type, value);
	if(array::len(tmp) == 0){
		return :ok(value);
	}
	return :err(tmp);
}

def ptd::imm_kind_t(){
	return ptd::var({
		sim => ptd::none(),
		hash => ptd::none(),
		variant => ptd::none(),
		array => ptd::none(),
	});
}

def ptd::cast_error_t(){
	return ptd::arr(ptd::var({
		path => ptd::var({
			hash_key => ptd::sim(),
			array_index => ptd::sim(),
			rec_key => ptd::sim(),
			variant_value => ptd::sim(),
			type_ref => ptd::ptd_im(),
		}),
		error => ptd::var({
			is_not_type => @ptd::imm_kind_t,
			hash_expected => @ptd::imm_kind_t,
			array_expected => @ptd::imm_kind_t,
			rec_expected => @ptd::imm_kind_t,
			sim_expected => @ptd::imm_kind_t,
			variant_expected => @ptd::imm_kind_t,
			rec_size => ptd::sim(),
			no_key => ptd::sim(),
			unknown_case => ptd::sim(),
			has_value => ptd::sim(),
			no_value => ptd::sim(),
		})
	}));
}
def ptd::get_imm_kind(imm) : @ptd::imm_kind_t {
	return :sim if c_std_lib::is_sim(imm);
	return :variant if c_std_lib::is_variant(imm);
	return :hash if c_std_lib::is_hash(imm);
	return :array if c_std_lib::is_array(imm);
	die;
}
def try_dynamic_cast(type, value) : @ptd::cast_error_t {
	return [:error(:is_not_type(ptd::get_imm_kind(type)))] unless c_std_lib::is_variant(type);
	match (type) case :ptd_hash(var ptd_hash) {
		return [:error(:hash_expected(ptd::get_imm_kind(type)))] unless c_std_lib::is_hash(value);
		forh var key, var val (value) {
			var tmp = try_dynamic_cast(ptd_hash, val);
			if(array::len(tmp) > 0){
				array::push(ref tmp, :path(:hash_key(key)));
				return tmp;
			}
		}
	} case :ptd_arr(var ptd_arr) {
		return [:error(:array_expected(ptd::get_imm_kind(type)))] unless c_std_lib::is_array(value);
		rep var i (array::len(value)) {
			var tmp = try_dynamic_cast(ptd_arr, value[i]);
			if(array::len(tmp) > 0){
				array::push(ref tmp, :path(:array_index(i)));
				return tmp;
			}
		}
	} case :ptd_rec(var ptd_rec) {
		return [:error(:rec_expected(ptd::get_imm_kind(type)))] unless c_std_lib::is_hash(value);
		return [:error(:rec_size(hash::size(value)))] unless hash::size(ptd_rec) == hash::size(value);
		forh var key, var val (ptd_rec) {
			return [:error(:no_key(key))] unless hash::has_key(value, key);
			var tmp = try_dynamic_cast(val, hash::get_value(value, key));
			if(array::len(tmp) > 0){
				array::push(ref tmp, :path(:rec_key(key)));
				return tmp;
			}
		}
	} case :ptd_sim {
		return [:error(:sim_expected(ptd::get_imm_kind(type)))] unless c_std_lib::is_sim(value);
	} case :ptd_var(var ptd_var) {
		return [:error(:variant_expected(ptd::get_imm_kind(type)))] unless c_std_lib::is_variant(value);
		var name = ov::get_element(value);
		return [:error(:unknown_case(name.''))] unless hash::has_key(ptd_var, name);
		var variant = hash::get_value(ptd_var, name);
		match (variant) case :with_param(var par) {
			return [:error(:no_value(name.''))] if !ov::has_value(value);
			var tmp = try_dynamic_cast(par, ov::get_value(value));
			if(array::len(tmp) > 0){
				array::push(ref tmp, :path(:variant_value(name.'')));
				return tmp;
			}
		} case :no_param {
			return [:error(:has_value(name.''))] if ov::has_value(value);
		}
	} case :ptd_im {
	} case :ref(var ptd_ref) {
		var tmp = try_dynamic_cast(exec(type, []), value);
		if(array::len(tmp) > 0){
			array::push(ref tmp, :path(:type_ref(ptd_ref)));
			return tmp;
		}
	}
	return [];
}

def ptd::reconstruct_nl_with_args(value, type, env, f, args) {
	return ptd::ptd_reconstruct_nl_with_args(value, type, env, f, args);
}

def ptd::ptd_reconstruct_nl_with_args(value, type, env, f, args) {
	var arg : ptd::arr(ptd::ptd_im()) = [env];
	array::append(ref arg, ptd::ensure(ptd::arr(ptd::ptd_im()), args));
	return reconstruct(value, type, f, arg);
}

def reconstruct(value, type, f, args : ptd::arr(ptd::ptd_im())) : ptd::var({
		to_return => ptd::ptd_im(),
		new_value => ptd::ptd_im()
	}) {
	match (type) case :ptd_hash(var ptd_hash) {
		var ret = {};
		forh var key, var val (value) {
			var tmp = reconstruct(val, hash::get_value(ptd_hash, key), f, args);
			return tmp if tmp is :to_return;
			hash::set_value(ref ret, key, tmp as :new_value);
		}
		return :new_value(ret);
	} case :ptd_rec(var ptd_rec) {
		var ret = {};
		forh var key, var val (value) {
			var tmp = reconstruct(val, hash::get_value(ptd_rec, key), f, args);
			return tmp if tmp is :to_return;
			hash::set_value(ref ret, key, tmp as :new_value);
		}
		return :new_value(ret);
	} case :ptd_arr(var ptd_arr) {
		var ret = [];
		fora var item (value) {
			var tmp = reconstruct(item, ptd_arr, f, args);
			return tmp if tmp is :to_return;
			array::push(ref ret, tmp as :new_value);
		}
		return :new_value(ret);
	} case :ptd_var(var ptd_var) {
		var name = ov::get_element(value);
		type = hash::get_value(ptd_var, name);
		return :new_value(value) if (type is :no_param);
		value = ov::get_value(value);
		var item_ptd = type as :with_param;
		var tmp = reconstruct(value, item_ptd, f, args);
		return tmp if tmp is :to_return;
		return :new_value(ov::mk_val(name, tmp as :new_value));
	} case :ptd_sim {
		return :new_value(value);
	} case :ptd_im {
		return :new_value(value);
	} case :ref(var ptd_ref) {
		var arg : ptd::arr(ptd::ptd_im()) = [value, type];
		array::append(ref arg, args);
		var res = exec(f, arg);
		match (res) case :new_value(var val) {
			return :new_value(val);
		} case :to_return(var val) {
			return :to_return(val);
		} case :none {
			return reconstruct(value, exec(type, []), f, args);
		}
	}
}


