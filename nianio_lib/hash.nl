###
# (c) Atinea Sp. z o.o.
###

use c_std_lib;

def hash::get_value(hash, key) {
	return c_std_lib::hash_get_value(hash, key);
}

def hash::has_key(hash, key) {
	return c_std_lib::hash_has_key(hash, key);
}

def hash::set_value(ref hash, key, value) {
	c_std_lib::hash_set_value(ref hash, key, value);
}

def hash::delete(ref hash, key) {
	c_std_lib::hash_delete(ref hash, key);
}

def hash::size(hash) {
	return c_std_lib::hash_size(hash);
}

def hash::keys(hash) {
	var ret = [];
	forh var key, var val (hash){
		c_std_lib::array_push(ref ret, key);
	}
	return ret;
}
