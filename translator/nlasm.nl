###
# (c) Atinea Sp. z o.o.
###


use ptd;
use nast;

def nlasm::result_t() {
	return ptd::rec({
			module_name => ptd::sim(),
			functions => ptd::arr(@nlasm::function_t),
			imports => ptd::arr(ptd::sim())
		});
}

def nlasm::access_t() {
	return ptd::var({pub => ptd::none(), priv => ptd::none()});
}

def nlasm::arg_type_t() {
	return ptd::var({val => ptd::none(), ref => ptd::none()});
}

def nlasm::function_t() {
	return ptd::rec({
			annotation => ptd::var({none => ptd::none(), math => ptd::none(), state => ptd::none()}),
			access => @nlasm::access_t,
			reg_size => ptd::sim(),
			args_type => @nlasm::args_type,
			commands => @nlasm::cmds_t,
			name => ptd::sim()
		});
}

def nlasm::cmds_t() {
	return ptd::arr(@nlasm::cmd_t);
}

def nlasm::args_type() {
	return ptd::arr(@nlasm::arg_type_t);
}

def nlasm::reg_t() {
	return ptd::sim();
}

def nlasm::debug_t() {
	return ptd::rec({nast_debug => @nast::debug_t, instruction_nr => ptd::sim(), declarations => ptd::hash(ptd::sim())});
}

def nlasm::empty_debug() : @nlasm::debug_t {
	return {nast_debug => nast::empty_debug(), instruction_nr => 0, declarations => {}};
}

def nlasm::cmd_t() {
	return ptd::rec({
			debug => @nlasm::debug_t,
			annotation => @nlasm::annotation_t,
			cmd => @nlasm::order_t,
		});
}

def nlasm::annotation_t() {
	return ptd::var({none => ptd::none(), const => ptd::arr(ptd::sim())});
}

def nlasm::order_t() {
	return ptd::var({
			arr_decl => ptd::rec({dest => @nlasm::reg_t, src => ptd::arr(@nlasm::reg_t)}),
			hash_decl => ptd::rec({
					dest => @nlasm::reg_t,
					src => ptd::arr(ptd::rec({key => ptd::sim(), val => @nlasm::reg_t}))
				}),
			func => ptd::rec({dest => @nlasm::reg_t, module => ptd::sim(), name => ptd::sim()}),
			call => @nlasm::call_t,
			una_op => @nlasm::una_op_t,
			bin_op => @nlasm::bin_op,
			ov_is => ptd::rec({dest => @nlasm::reg_t, src => @nlasm::reg_t, type => ptd::sim()}),
			ov_as => ptd::rec({dest => @nlasm::reg_t, src => @nlasm::reg_t, type => ptd::sim()}),
			return => @nlasm::return,
			die => @nlasm::reg_t,
			move => ptd::rec({dest => @nlasm::reg_t, src => @nlasm::reg_t}),
			load_const => ptd::rec({dest => @nlasm::reg_t, val => ptd::ptd_im()}),
			get_frm_idx => ptd::rec({dest => @nlasm::reg_t, src => @nlasm::reg_t, idx => @nlasm::reg_t}),
			set_at_idx => ptd::rec({src => @nlasm::reg_t, idx => @nlasm::reg_t, val => @nlasm::reg_t}),
			get_val => ptd::rec({dest => @nlasm::reg_t, src => @nlasm::reg_t, key => ptd::sim()}),
			set_val => ptd::rec({src => @nlasm::reg_t, key => ptd::sim(), val => @nlasm::reg_t}),
			ov_mk => @nlasm::ov_mk_t,
			prt_lbl => @nlasm::label_t,
			if_goto => ptd::rec({dest => @nlasm::label_t, src => @nlasm::reg_t}),
			goto => @nlasm::label_t,
			clear => @nlasm::reg_t
		});
}

def nlasm::label_t() {
	return ptd::sim();
}

def nlasm::una_op_t() {
	return ptd::rec({dest => @nlasm::reg_t, src => @nlasm::reg_t, op => ptd::sim()});
}

def nlasm::bin_op() {
	return ptd::rec({dest => @nlasm::reg_t, left => @nlasm::reg_t, right => @nlasm::reg_t, op => ptd::sim()});
}

def nlasm::return() {
	return ptd::var({val => @nlasm::reg_t, emp => ptd::none()});
}

def nlasm::ov_mk_t() {
	return ptd::rec({
			dest => @nlasm::reg_t,
			src => ptd::var({arg => @nlasm::reg_t, emp => ptd::none()}),
			name => ptd::sim()
		});
}

def nlasm::call_t() {
	return ptd::rec({
			dest => @nlasm::reg_t,
			mod => ptd::sim(),
			fun_name => ptd::sim(),
			args => ptd::arr(ptd::var({val => @nlasm::reg_t, ref => @nlasm::reg_t}))
		});
}

