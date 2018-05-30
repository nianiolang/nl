###
# (c) Atinea Sp. z o.o.
###


use c_rt_lib;

def ov::mk(label) {
	return c_rt_lib::ov_none_new(label);
}

def ov::mk_val(label, value) {
	return c_rt_lib::ov_arg_new(label, value);
}

def ov::has_value(variant) {
	return c_rt_lib::ov_has_value(variant);
}

def ov::get_element(variant) {
	return c_rt_lib::ov_get_element(variant);
}

def ov::get_value(variant) {
	return c_rt_lib::ov_get_value(variant);
}

def ov::is(variant, label) {
	return c_rt_lib::ov_is(variant, label);
}

def ov::as(variant, label) {
	return c_rt_lib::ov_as(variant, label);
}
