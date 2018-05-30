###
# (c) Atinea Sp. z o.o.
###


use c_std_lib;
use ptd;
use array;

def func::func_t() {
	return ptd::var({
		ref => ptd::rec({
			module => ptd::sim(), 
			name => ptd::sim()
		})
	});
}

def func::exec(func, args : ptd::arr(ptd::ptd_im())) {
	return c_std_lib::exec(func, ref args);
}

def func::exec_ref(func, ref args : ptd::arr(ptd::ptd_im())) {
	return c_std_lib::exec(func, ref args);
}

def func::exec_with_ref_arg(func, args : ptd::arr(ptd::ptd_im()), ref refs) {
	array::push(ref args, refs);
	refs = 0;
	var ret = func::exec_ref(func, ref args);
	refs = args[array::len(args) - 1];
	return ret;
}
