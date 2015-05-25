function ImRef(value) {
	this.value = value;
}

function OV(name, value) {
	this.name = name;
	this.value = value;
}

function nl_die() {
	throw "DIE";
}

function c_rt_lib0clone(obj) {
	var res = {};
	for (var prop in obj)
		res[prop] = obj[prop];
	return res;
}

function c_rt_lib0array_len(arr) {
	return arr.value.length;
}

function c_rt_lib0get_ref_arr(arr, ind) {
	return arr.value[ind.value];
}

function c_rt_lib0set_ref_arr(/*ref*/arr, ind, value) {
	arr.value = arr.value.slice();
	arr.value[ind.value] = value.value;
}

function c_rt_lib0hash_get_value(hash, key) {
	return hash.value[key.value];
}

function c_rt_lib0hash_set_value(/*ref*/hash, key, value) {
	hash.value = c_rt_lib0clone(hash.value);
	hash.value[key.value] = value.value;
}

function c_rt_lib0get_ref_hash(hash, key) {
	return c_rt_lib0hash_get_value(hash, key);
}

function c_rt_lib0set_ref_hash(/*ref*/hash, key, value) {
	c_rt_lib0hash_set_value(hash, key, value);
}

function c_rt_lib0init_iter(hash) {
	var result = {};
	result.keys = [];
	for (var k in hash.value)
		result.keys.push(k);
	result.position = 0;
	return result;
}

function c_rt_lib0get_key_iter(iter) {
	return iter.value.keys[iter.value.position];
}

function c_rt_lib0is_end_hash(iter) {
	return c_rt_lib0native_to_nl(iter.value.position >= iter.value.keys.length);
}

function c_rt_lib0next_iter(iter) {
	var result = c_rt_lib0clone(iter.value);
	++result.position;
	return result;
}

function c_rt_lib0ov_as(ov, name) {
	if (ov.value.constructor.name != 'OV' || ov.value.name.toString() != name.value.toString() || ov.value.value == null)
		nl_die();
	return ov.value.value;
}

function c_rt_lib0ov_is(ov, name) {
	if (ov.value.constructor.name != 'OV')
		nl_die();
	return c_rt_lib0native_to_nl(ov.value.name.toString() == name.value.toString());
}

function c_rt_lib0ov_has_value(ov) {
	if (ov.value.constructor.name != 'OV')
		nl_die();
	return c_rt_lib0native_to_nl(ov.value.value != null);
}

function c_rt_lib0ov_get_value(ov) {
	if (ov.value.constructor.name != 'OV' || ov.value.value == null)
		nl_die();
	return ov.value.value;
}

function c_rt_lib0ov_get_element(ov) {
	if (ov.value.constructor.name != 'OV')
		nl_die();
	return ov.value.name;
}

function c_rt_lib0ov_arg_new(name, arg){
	return c_rt_lib0ov_mk_arg(name.value.toString(), arg);
}

function c_rt_lib0ov_none_new(name){
	return c_rt_lib0ov_mk_none(name.value.toString());
}

function c_rt_lib0ov_mk_arg(name, val) {
	return new OV(name, val.value);
}

function c_rt_lib0ov_mk_none(name) {
	return new OV(name, null);
}

function c_rt_lib0check_true_native(bool) {
	return bool.value.name == 'TRUE';
}

function c_rt_lib0get_false() {
	return c_rt_lib0ov_mk_none('FALSE');
}

function c_rt_lib0get_true() {
	return c_rt_lib0ov_mk_none('TRUE');
}

function c_rt_lib0native_to_nl(bool) {
	return bool ? c_rt_lib0get_true() : c_rt_lib0get_false();
}