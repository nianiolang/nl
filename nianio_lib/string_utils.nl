###
# (c) Atinea Sp. z o.o.
###

use string;
use boolean_t;
use ptd;

def string_utils::is_integer(obj : ptd::sim()) : @boolean_t::type {
	var string = obj.'';
	var len = string::length(string);
	return true if string eq '0';
	var i=0;
	return false if len == 0;
	++i if(string::substr(string, i, 1) eq '-');
	return false if i==len || string::substr(string, i, 1) eq '0';
	for(i=i;i<len;++i){
		return false unless string::is_digit(string::substr(string, i, 1));
	}
	return true;
}

def string_utils::is_float(obj : ptd::sim()) : @boolean_t::type {
	var string = obj.'';
	var len = string::length(string);
	return false if len < 3;
	var i=0;
	++i if(string::substr(string, i, 1) eq '-');
	for(i=i;i<len;++i){
		break unless string::is_digit(string::substr(string, i, 1));
	}
	return false if i < 1 || i+2 > len;
	return false unless string::substr(string, i, 1) eq '.';
	for(++i;i<len;++i){
		return false unless string::is_digit(string::substr(string, i, 1));
	}
	return true;
}

def string_utils::is_number(string) : @boolean_t::type {
	var sim : ptd::sim() = string . '';
	return string_utils::is_integer(sim) || string_utils::is_float(sim);
}