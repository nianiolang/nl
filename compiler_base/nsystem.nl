###
# (c) Atinea Sp. z o.o.
###


use c_fe_lib;

def nsystem::time_microsec() {
	return c_fe_lib::get_time();
}

def nsystem::get_pid() {
	return c_fe_lib::get_pid();
}

def nsystem::time() {
	return c_fe_lib::time();
}

def nsystem::localtime(arg) {
	return c_fe_lib::localtime(arg);
}
