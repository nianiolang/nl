###
# (c) Atinea Sp. z o.o.
###


use c_std_lib;
use array;
use boolean_t;
use ptd;

def string::lf() {
	return string::chr(10);
}

def string::tab() : ptd::sim() {
	return string::chr(9);
}

def string::r() : ptd::sim() {
	return string::chr(13);
}

def string::f() {
	return string::chr(12);
}

def string::non_breaking_space() {
	return [string::chr(194), string::chr(160)];
}

def string::char_times(char, time) : ptd::sim() {
	var ret = '';
	ret .= char rep var i (time);
	return ret;
}

def string::split(pattern, string) {
	var ret = [];
	var beg = 0;
	var lenPat = string::length(pattern);
	var len = string::length(string);
	loop {
		var index = beg + 1;
		index = string::index(string, pattern, beg) unless lenPat == 0;
		break if index > len;
		if (index < 0) {
			array::push(ref ret, string::substr(string, beg, len - beg));
			break;
		} else {
			array::push(ref ret, string::substr(string, beg, index - beg));
			beg = index + lenPat;
		}
	}
	return ret;
}

def string::split_limit(pattern, string, limit) {
	var arr = string::split(pattern, string);
	if (array::len(arr) > limit) {
		var last = array::join(pattern, array::subarray(arr, limit - 1, array::len(arr) - limit + 1));
		var ret = array::subarray(arr, 0, limit - 1);
		array::push(ref ret, last);
		return ret;
	} else {
		return arr;
	}
}

def string::to_array(string) {
	return string::split('', string);
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

def string::lc(string) {
	var arr = string::to_array(string);
	rep var i (array::len(arr)) {
		var n = string::ord(arr[i]);
		if (n >= 65 && n <= 90) {
			n += 32;
			arr[i] = string::chr(n);
		}
	}
	return array::join('', arr);
}

def string::uc(string) {
	var arr = string::to_array(string);
	rep var i (array::len(arr)) {
		var n = string::ord(arr[i]);
		if (n >= 97 && n <= 122) {
			n -= 32;
			arr[i] = string::chr(n);
		}
	}
	return array::join('', arr);
}

def string::index2(string, search) {
	return c_std_lib::string_index(string, search, 0);
}

def string::index(string, search, position) {
	return c_std_lib::string_index(string, search, position);
}

def string::contain_lc(string, search) {
	string = string::lc(string);
	return string::index2(string, search) >= 0;
}

def string::replace(string, old, new) {
	return c_std_lib::string_replace(string, old, new);
}

def string::replace_arr(string, search_arr, replace_arr) {
	var len = array::len(search_arr);
	die unless len == array::len(replace_arr);
	for(var i = 0; i < len; ++i) {
		string = string::replace(string, search_arr[i], replace_arr[i]);
	}
	return string;
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

def string::encode_utf16(str) {
	return c_std_lib::string_encode_utf16(str);
}

def string::decode_utf16(str, le_en) {
	return c_std_lib::string_decode_utf16(str, le_en);
}

def string::is_empty(string) {
	return string::length(string) == 0;
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

