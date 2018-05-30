###
# (c) Atinea Sp. z o.o.
###


use c_fe_lib;
use c_std_lib;
use nsystem;
use string;
use hash;
use func;
use array;
use ptd;

def diff_time(a, b) {
	var sec = a[0] - b[0];
	var usec = a[1] - b[1];
	if (usec < 0) {
		sec -= 1;
		usec += 1000000;
	}
	return sec * 1000.0 + usec / 1000.0;
}

def print_row(ref prof_data, time, label) {
	var line = '';
	fora var el (prof_data->stack) {
		var str = '           ' . diff_time(time, el);
		var dot = string::index2(str, '.');
		var len = string::length(str);
		if (dot == -1) {
			str .= '.000';
		} else {
			str .= '000';
			str = string::substr(str, 0, dot + 4);
			len = dot;
		}
		str = string::substr(str, len - 7, 4) . ' ' . string::substr(str, len - 3, 7) . string::tab();
		line .= str;
	}
	line .= string::tab();
	line .= label;
	line .= string::lf();
	prof_data->out .= line;
}

def get_profile_global() {
	var prof_data = c_std_lib::get_profile_global();
	prof_data = {out => '', stack => []} if (hash::size(prof_data) == 0);
	return prof_data;
}

def profile::sub(key, function : @func::func_t, args : ptd::arr(ptd::ptd_im())) {
	return profile::sub_ref(key, function, ref args);
}

def profile::sub_ref(key, function : @func::func_t, ref args : ptd::arr(ptd::ptd_im())) {
	var prof_data = get_profile_global();
	var time = nsystem::time_microsec();
	var old_stack = prof_data->stack;
	array::push(ref prof_data->stack, time);
	print_row(ref prof_data, time, key);
	c_std_lib::set_profile_global(prof_data);
	var ret = func::exec_ref(function, ref args);
	prof_data = get_profile_global();
	time = nsystem::time_microsec();
	print_row(ref prof_data, time, 'TOTAL: ' . key);
	prof_data->stack = old_stack;
	c_std_lib::set_profile_global(prof_data);
	return ret;
}

def profile::save(filename) {
	var prof_data = get_profile_global();
	die if (array::len(prof_data->stack) != 0);
	c_fe_lib::string_to_file(filename, prof_data->out);
	prof_data->out = '';
	c_std_lib::set_profile_global(prof_data);
}

def start(label) {
	var prof_data = get_profile_global();
	return if hash::size(prof_data) == 0;
	var time = nsystem::time_microsec();
	array::push(ref prof_data->stack, time);
	print_row(ref prof_data, time, label);
	c_std_lib::set_profile_global(prof_data);
}

def stop(label) {
	var prof_data = get_profile_global();
	return if hash::size(prof_data) == 0;
	var time = nsystem::time_microsec();
	print_row(ref prof_data, time, 'TOTAL: ' . label);
	array::pop(ref prof_data->stack);
	c_std_lib::set_profile_global(prof_data);
}

def profile::begin(lab) {
	start(lab);
}

def profile::end(lab) {
	stop(lab);
}
