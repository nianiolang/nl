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
	forh var key, var val (hash) {
		c_std_lib::array_push(ref ret, key);
	}
	return ret;
}

def hash::values(hash) {
	var ret = [];
	forh var key, var val (hash) {
		c_std_lib::array_push(ref ret, val);
	}
	return ret;
}

def hash::merge(hasha, hashb) {
	var hash = hasha;
	hash::add_all(ref hash, hashb);
	return hash;
}

def hash::add_all(ref hasha, hashb) {
	hash::set_value(ref hasha, key, val) forh var key, var val (hashb);
}

def hash::set2keys(ref hash, key1, key2, value) {
	var tmp = hash::has_key(hash, key1) ? hash::get_value(hash, key1) : {};
	hash::set_value(ref hash, key1, 0);
	hash::set_value(ref tmp, key2, value);
	hash::set_value(ref hash, key1, tmp);
}

def hash::has2keys(hash, key1, key2) {
	return hash::has_key(hash, key1) && hash::has_key(hash::get_value(hash, key1), key2);
}

def hash::get2keys(hash, key1, key2) {
	return hash::get_value(hash::get_value(hash, key1), key2);
}

def hash::set3keys(ref hash, key1, key2, key3, value) {
	var tmp = hash::has_key(hash, key1) ? hash::get_value(hash, key1) : {};
	hash::set_value(ref hash, key1, 0);
	hash::set2keys(ref tmp, key2, key3, value);
	hash::set_value(ref hash, key1, tmp);
}

