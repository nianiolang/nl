###
# (c) Atinea Sp. z o.o.
###

use c_std_lib;
use boolean_t;
use ptd;

def string::lf() {
	return string::chr(10);
}

def string::tab() {
	return string::chr(9);
}

def string::r() {
	return string::chr(13);
}

def string::f() {
	return string::chr(12);
}

def string::char_times(char, time) : ptd::sim() {
	var ret = '';
	ret .= char rep var i (time);
	return ret;
}

def string::length(s) {
	return c_std_lib::string_length(s);
}

def string::get_char_code(string, position) {
	return c_std_lib::string_get_char_code(string, position);
}

def string::substr(s, offset, length) : ptd::sim() {
	return c_std_lib::string_sub(s, offset, length) . '';
}

def string::substr2(s, offset) : ptd::sim() {
	return c_std_lib::string_sub(s, offset, string::length(s) - offset) . '';
}

def string::index2(string, search) {
	return c_std_lib::string_index(string, search, 0);
}

def string::index(string, search, position) {
	return c_std_lib::string_index(string, search, position);
}

def string::replace(string, old, new) {
	return c_std_lib::string_replace(string, old, new);
}

def string::ord(char) {
	return c_std_lib::string_ord(char);
}

def string::is_digit(char) : @boolean_t::type {
	var o = string::ord(char);
	return o >= 48 && o <= 57;
}

def string::is_letter(char) : @boolean_t::type {
	var o = string::ord(char);
	return (o >= 97 && o <= 122) || (o >= 65 && o <= 90);
}

def string::chr(character) {
	return c_std_lib::string_chr(character);
}

def string::lt(left, right) {
	return string::compare(left, right) < 0;
}

def string::gt(left, right) {
	return string::compare(left, right) > 0;
}

def string::compare(string_1, string_2) {
	return c_std_lib::string_compare(string_1, string_2);
}

def string::le(string_1, string_2) {
	return string::compare(string_1, string_2) <= 0;
}

def string::ge(string_1, string_2) {
	return string::compare(string_1, string_2) >= 0;
}
