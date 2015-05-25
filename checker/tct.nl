###
# (c) Atinea Sp. z o.o.
###


use hash;
use ptd;
use ov;


def tct::arr(arr_type : @tct::meta_type) : @tct::meta_type  {
	return :tct_arr(arr_type);
}

def tct::rec(h : ptd::hash(@tct::meta_type)) : @tct::meta_type  {
	return :tct_rec(h);
}

def tct::ref(name : ptd::sim()) : @tct::meta_type  {
	return :tct_ref(name);
}

def tct::sim() : @tct::meta_type  {
	return :tct_sim;
}

def tct::none() {
	return :tct_var_none;
}

def tct::void() : @tct::meta_type {
	return :tct_void;
}

def tct::empty() : @tct::meta_type {
	return :tct_empty;
}

def tct::hash(h : @tct::meta_type) : @tct::meta_type  {
	return :tct_hash(h);
}

def tct::tct_im() : @tct::meta_type  {
	return :tct_im;
}

def tct::bool() : @tct::meta_type {
	return tct::var({FALSE => tct::none(), TRUE => tct::none()});
}

def tct::var(h) : @tct::meta_type {
	var types = {};
	forh var item, var value (h) {
		var et;
		if (ov::is(value, 'tct_var_none')) {
			et = :no_param;
		} else {
			et = :with_param(ptd::ensure(@tct::meta_type, value));
		}

		hash::set_value(ref types, item, et);
	}
	return :tct_var(types);
}

def tct::meta_type() {
	return ptd::var({
			tct_rec => ptd::hash(@tct::meta_type),
			tct_hash => @tct::meta_type,
			tct_arr => @tct::meta_type,
			tct_var => ptd::hash(ptd::var({with_param => @tct::meta_type, no_param => ptd::none()})),
			tct_ref => ptd::sim(),
			tct_sim => ptd::none(),
			tct_empty => ptd::none(),
			tct_void => ptd::none(),
			tct_im => ptd::none()
		});
}

