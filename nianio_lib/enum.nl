###
# (c) Atinea Sp. z o.o.
###


use ov;
use boolean_t;

def enum::eq(x, y) : @boolean_t::type {
	die if ov::has_value(x) || ov::has_value(y);
	return ov::get_element(x) eq ov::get_element(y);
}

