###
# (c) Atinea Sp. z o.o.
###

use c_std_lib;

def array::subarray(array, beg, len) {
	return c_std_lib::array_sub(array, beg, len);
}

def array::join(str, array) {
	var ret = '';
	var first = true;
	fora var el (array) {
		ret .= str unless first;
		ret .= el;
		first = false;
	}
	return ret;
}

def array::push(ref array, new) {
	c_std_lib::array_push(ref array, new);
}
def array::pop(ref array) {
	c_std_lib::array_pop(ref array);
}

def array::append(ref array, append) {
	fora var el (append) {
		array::push(ref array, el);
	}
}

def array::len(array) {
	return c_std_lib::array_len(array);
}

def array::cmp(a, b){
	return c_std_lib::string_compare(a, b) < 0;
}

def array::sort(ref variable) {
	variable = c_std_lib::array_sort(variable, @array::cmp);
}
