###
# (c) Atinea Sp. z o.o.
# Stamp: PLE 2017-01-26
###

use ptd;
use nlasm;
use boolean_t;
use interpreter;

def post_processing_t::fun_tree_t() {
	return ptd::hash(ptd::hash(ptd::hash(ptd::arr(ptd::sim()))));
}

def post_processing_t::state_t() {
	return ptd::rec({
			nl_asm => ptd::hash(@nlasm::result_t),
			mat_fun_def => ptd::hash(ptd::sim()),
			math_fs => @post_processing_t::math_funs_t,
			fun_calls => @post_processing_t::fun_tree_t,
			const_com => @post_processing_t::math_funs_t,
			optimization => @post_processing_t::optimization_t,
			interpreter_state => @interpreter::state_t
		});
}

def post_processing_t::math_funs_t() {
	return ptd::hash(@boolean_t::type);
}

def post_processing_t::reg_const() {
	return ptd::var({no => ptd::none(), yes => ptd::sim()});
}

def post_processing_t::reg_val_const() {
	return ptd::var({no => ptd::none(), yes => ptd::rec({nr => ptd::sim(), value => ptd::ptd_im()})});
}

def post_processing_t::optimization_t() {
	return ptd::var({o0 => ptd::none(), o1 => ptd::none(), o2 => ptd::none(), o3 => ptd::none(), o4 => ptd::none()});
}

def post_processing_t::const_reg_t() {
	return ptd::arr(ptd::rec({regs => ptd::arr(@post_processing_t::reg_const), was => ptd::sim()}));
}

def post_processing_t::const_reg_val_t() {
	return ptd::arr(ptd::rec({regs => ptd::arr(@post_processing_t::reg_val_const), was => ptd::sim()}));
}


