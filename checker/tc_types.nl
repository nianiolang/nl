###
# (c) Atinea Sp. z o.o.
###


use hash;
use ptd;
use tct;
use boolean_t;
use nast;
use singleton;
use compiler_lib;

def op_def(ref elems : ptd::hash(@tc_types::bin_op_type), in : ptd::sim(), arg1 : @tct::meta_type, arg2 : 
	@tct::meta_type, ret : @tct::meta_type) : ptd::void() {
	hash::set_value(ref elems, in, {arg1 => arg1, arg2 => arg2, ret => ret});
}

def tc_types::get_bin_op_def(name : ptd::sim()) : @tc_types::bin_op_type {
	return hash::get_value(get_binary_ops(), name);
}

def get_binary_ops() : ptd::hash(@tc_types::bin_op_type) {
	var ret : ptd::hash(@tc_types::bin_op_type) = {};
	op_def(ref ret, '*', tct::sim(), tct::sim(), tct::sim());
	op_def(ref ret, '/', tct::sim(), tct::sim(), tct::sim());
	op_def(ref ret, '%', tct::sim(), tct::sim(), tct::sim());
	op_def(ref ret, '+', tct::sim(), tct::sim(), tct::sim());
	op_def(ref ret, '-', tct::sim(), tct::sim(), tct::sim());
	op_def(ref ret, '.', tct::sim(), tct::sim(), tct::sim());
	op_def(ref ret, '>=', tct::sim(), tct::sim(), tct::bool());
	op_def(ref ret, '<=', tct::sim(), tct::sim(), tct::bool());
	op_def(ref ret, '<', tct::sim(), tct::sim(), tct::bool());
	op_def(ref ret, '>', tct::sim(), tct::sim(), tct::bool());
	op_def(ref ret, '==', tct::sim(), tct::sim(), tct::bool());
	op_def(ref ret, '!=', tct::sim(), tct::sim(), tct::bool());
	op_def(ref ret, 'eq', tct::sim(), tct::sim(), tct::bool());
	op_def(ref ret, 'ne', tct::sim(), tct::sim(), tct::bool());
	op_def(ref ret, '&&', tct::bool(), tct::bool(), tct::bool());
	op_def(ref ret, '||', tct::bool(), tct::bool(), tct::bool());
	op_def(ref ret, '+=', tct::sim(), tct::sim(), tct::sim());
	op_def(ref ret, '/=', tct::sim(), tct::sim(), tct::sim());
	op_def(ref ret, '*=', tct::sim(), tct::sim(), tct::sim());
	op_def(ref ret, '.=', tct::sim(), tct::sim(), tct::sim());
	op_def(ref ret, '-=', tct::sim(), tct::sim(), tct::sim());
	return singleton::sigleton_do_not_use_without_approval(ret);
}

def tc_types::errors_t() {
	return ptd::rec({
			current_line => ptd::sim(),
			module => ptd::sim(),
			warnings => @compiler_lib::errors_t,
			errors => @compiler_lib::errors_t
		});
}

def tc_types::bin_op_type() {
	return ptd::rec({arg1 => @tct::meta_type, arg2 => @tct::meta_type, ret => @tct::meta_type});
}

def tc_types::defs_funs_t() {
	return ptd::hash(ptd::hash(@tc_types::def_fun_t));
}

def tc_types::return_t() {
	return ptd::rec({
			errors => @compiler_lib::errors_t,
			warnings => @compiler_lib::errors_t,
			deref => @tc_types::deref_types
		});
}

def tc_types::modules_t() {
	return ptd::rec({imports => ptd::hash(@boolean_t::type), env => @tc_types::env, funs => @tc_types::defs_funs_t});
}

def tc_types::deref_type() {
	return ptd::rec({line => ptd::sim(), module => ptd::sim(), type_name => ptd::sim()});
}

def tc_types::deref_types() {
	return ptd::rec({delete => ptd::arr(@tc_types::deref_type), create => ptd::arr(@tc_types::deref_type)});
}

def tc_types::env() {
	return ptd::rec({
			current_module => ptd::sim(),
			breaks => ptd::rec({vars => @tc_types::vars_t, is => @boolean_t::type}),
			ret_type => @tct::meta_type,
			deref => @tc_types::deref_types
		});
}

def tc_types::var_t() {
	return ptd::rec({overwrited => ptd::var({yes => ptd::none(), no => ptd::none()}), type => @tct::meta_type});
}

def tc_types::fun_arg_t() {
	return ptd::rec({
			name => ptd::sim(),
			type => @tct::meta_type,
			mod => ptd::var({none => ptd::none(), ref => ptd::none()})
		});
}

def tc_types::def_fun_t() {
	return ptd::rec({
			cmd => @nast::cmd_t,
			is_type => ptd::var({no => ptd::none(), yes => @tct::meta_type}),
			ref_types => ptd::var({no => ptd::none(), yes => ptd::arr(ptd::sim())}),
			name => ptd::sim(),
			module => ptd::sim(),
			access => ptd::var({priv => ptd::none(), pub => ptd::none()}),
			args => ptd::arr(@tc_types::fun_arg_t),
			ret_type => @tct::meta_type
		});
}

def tc_types::vars_t() {
	return ptd::hash(@tc_types::var_t);
}

def tc_types::type() {
	return ptd::rec({src => @tc_types::value_src, type => @tct::meta_type});
}

def tc_types::value_src() {
	return ptd::var({known => ptd::none(), knownhash => ptd::none(), speculation => ptd::none()});
}

def tc_types::lval_path() {
	return ptd::arr(ptd::var({var => ptd::sim(), arr => ptd::none(), rec => ptd::sim(), hashkey => ptd::none()}));
}

def tc_types::walk_arg() {
	return ptd::rec({
			ref_inf => ptd::hash(ptd::arr(ptd::sim())),
			errors => @tc_types::errors_t,
			modules => @tc_types::modules_t
		});
}

def tc_types::ref_t() {
	return ptd::rec({
			level => ptd::sim(),
			from => ptd::hash(ptd::arr(ptd::sim())),
			to => ptd::hash(ptd::arr(ptd::sim())),
			check => @boolean_t::type,
			cast => @boolean_t::type
		});
}

def tc_types::stack_info_type() {
	return ptd::var({ptd_hash => ptd::none(), ptd_arr => ptd::none(), ptd_rec => ptd::sim(), ptd_var => ptd::sim()});
}

def tc_types::check_info() {
	return ptd::var({
			ok => ptd::none(),
			err => ptd::rec({
					from => @tct::meta_type,
					to => @tct::meta_type,
					stack => ptd::arr(@tc_types::stack_info_type)
				})
		});
}

def tc_types::special_functions() {
	return ptd::hash(ptd::rec({r => @tct::meta_type, a => ptd::arr(@tc_types::fun_arg_t)}));
}

def tc_types::get_default_type() : @tc_types::type {
	return {type => tct::tct_im(), src => :speculation};
}

