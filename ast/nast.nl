###
# (c) Atinea Sp. z o.o.
###


use hash;
use ptd;
use singleton;

def nast::intepreter_evaluate_max_steps() {
	return 500000;
}

def nast::bool_t() {
	return ptd::var({FALSE => ptd::none(), TRUE => ptd::none()});
}

def nast::op_assoc_t() {
	return ptd::var({left => ptd::none(), right => ptd::none(), none => ptd::none()});
}

def nast::op_t() {
	return ptd::rec({prec => ptd::sim(), assoc => @nast::op_assoc_t});
}

def nast::op_struct_t() {
	return ptd::hash(@nast::op_t);
}

def op_def(ref elems : @nast::op_struct_t, in : ptd::sim(), prec : ptd::sim(), assoc : @nast::op_assoc_t) {
	hash::set_value(ref elems, in, {prec => prec, assoc => assoc});
}

def nast::get_ternary_ops() : @nast::op_struct_t {
	var ret : @nast::op_struct_t = {};
	op_def(ref ret, '?', 880, :right);
	return singleton::sigleton_do_not_use_without_approval(ret);
}

def nast::get_unary_ops() : @nast::op_struct_t {
	var ret : @nast::op_struct_t = {};
	op_def(ref ret, '@', 1010, :right);
	op_def(ref ret, '++', 990, :none);
	op_def(ref ret, '--', 990, :none);
	op_def(ref ret, '!', 980, :right);
	op_def(ref ret, '+', 980, :right);
	op_def(ref ret, '-', 980, :right);
	return singleton::sigleton_do_not_use_without_approval(ret);
}

def nast::get_bin_ops() : @nast::op_struct_t {
	var ret : @nast::op_struct_t = {};
	op_def(ref ret, '->', 2000, :left);
	op_def(ref ret, 'is', 1500, :left);
	op_def(ref ret, 'as', 1500, :left);
	op_def(ref ret, '*', 970, :left);
	op_def(ref ret, '/', 970, :left);
	op_def(ref ret, '%', 970, :left);
	op_def(ref ret, '+', 960, :left);
	op_def(ref ret, '-', 960, :left);
	op_def(ref ret, '.', 960, :left);
	op_def(ref ret, '>=', 940, :none);
	op_def(ref ret, '<=', 940, :none);
	op_def(ref ret, '<', 940, :none);
	op_def(ref ret, '>', 940, :none);
	op_def(ref ret, '==', 930, :none);
	op_def(ref ret, '!=', 930, :none);
	op_def(ref ret, 'eq', 930, :none);
	op_def(ref ret, 'ne', 930, :none);
	op_def(ref ret, '&&', 900, :left);
	op_def(ref ret, '||', 890, :left);
	op_def(ref ret, '=', 870, :right);
	op_def(ref ret, '+=', 870, :right);
	op_def(ref ret, '/=', 870, :right);
	op_def(ref ret, '*=', 870, :right);
	op_def(ref ret, '.=', 870, :right);
	op_def(ref ret, '-=', 870, :right);
	op_def(ref ret, '[]=', 870, :right);
	return singleton::sigleton_do_not_use_without_approval(ret);
}

def nast::get_max_precedence() : ptd::sim() {
	return 2000;
}

def nast::variant_t() {
	return ptd::rec({name => ptd::sim(), var => @nast::value_t});
}

def nast::fun_def_t() {
	return ptd::rec({
			ret_type => @nast::variable_type_t,
			line => ptd::sim(),
			name => ptd::sim(),
			cmd => @nast::cmd_t,
			access => ptd::var({priv => ptd::none(), pub => ptd::none()}),
			args => ptd::arr(@nast::fun_def_arg_t)
		});
}

def nast::fun_def_arg_t() {
	return ptd::rec({
			type => @nast::variable_type_t,
			name => ptd::sim(),
			mod => ptd::var({none => ptd::none(), ref => ptd::none()})
		});
}

def nast::module_t() {
	return ptd::rec({
			name => ptd::sim(),
			stamp => ptd::sim(),
			import => ptd::arr(ptd::rec({name => ptd::sim(), line => ptd::sim()})),
			fun_def => ptd::arr(@nast::fun_def_t)
		});
}

def nast::variable_type_t() {
	return ptd::var({type => @nast::value_t, none => ptd::none()});
}

def nast::variable_declaration_t() {
	return ptd::rec({
			name => ptd::sim(),
			type => @nast::variable_type_t,
			value => ptd::var({value => @nast::value_t, none => ptd::none()})
		});
}

def nast::fun_val_arg_t() {
	return ptd::rec({val => @nast::value_t, mod => ptd::var({none => ptd::none(), ref => ptd::none()})});
}

def nast::fun_val_t() {
	return ptd::rec({name => ptd::sim(), module => ptd::sim(), args => ptd::arr(@nast::fun_val_arg_t)});
}

def nast::hash_elem_t() {
	return ptd::rec({key => @nast::value_t, val => @nast::value_t});
}

def nast::hash_decl_t() {
	return ptd::arr(@nast::hash_elem_t);
}

def nast::bin_op_t() {
	return ptd::rec({left => @nast::value_t, right => @nast::value_t, op => ptd::sim()});
}

def nast::var_op_t() {
	return ptd::rec({
			left => @nast::value_t,
			op => ptd::var({ov_is => ptd::none(), ov_as => ptd::none()}),
			case => ptd::sim()
		});
}

def nast::fun_label_t() {
	return ptd::rec({module => ptd::sim(), name => ptd::sim()});
}

def nast::unary_op_t() {
	return ptd::rec({val => @nast::value_t, op => ptd::sim()});
}

def nast::ternary_op_t() {
	return ptd::rec({fst => @nast::value_t, snd => @nast::value_t, thrd => @nast::value_t, op => ptd::sim()});
}

def nast::value_t() {
	return ptd::rec({
		debug => @nast::debug_t,
		value => @nast::value_only_t,
	});
}

def nast::value_only_t() {
	return ptd::var({
		ternary_op => @nast::ternary_op_t,
		hash_key => ptd::sim(),
		nop => ptd::none(),
		parenthesis => @nast::value_t,
		variant => @nast::variant_t,
		const => ptd::sim(),
		string => ptd::rec({
				arr => ptd::arr(ptd::sim()),
				last => ptd::var({end => ptd::none(), new_line => ptd::none()})
			}),
		arr_decl => ptd::arr(@nast::value_t),
		hash_decl => @nast::hash_decl_t,
		var => ptd::sim(),
		bin_op => @nast::bin_op_t,
		var_op => @nast::var_op_t,
		unary_op => @nast::unary_op_t,
		fun_label => @nast::fun_label_t,
		fun_val => @nast::fun_val_t,
		post_inc => @nast::value_t,
		post_dec => @nast::value_t
	});
}

def nast::match_t() {
	return ptd::rec({val => @nast::value_t, branch_list => ptd::arr(@nast::match_branch_t)});
}

def nast::variant_decl_t() {
	return ptd::rec({
			name => ptd::sim(),
			value => ptd::var({value => @nast::variable_declaration_t, none => ptd::none()})
		});
}

def nast::match_branch_t() {
	return ptd::rec({variant => @nast::variant_decl_t, cmd => @nast::cmd_t, debug => @nast::debug_t});
}

def nast::fora_t() {
	return ptd::rec({
			iter => @nast::variable_declaration_t,
			cmd => @nast::cmd_t,
			array => @nast::value_t,
			short => @nast::bool_t
		});
}

def nast::forh_t() {
	return ptd::rec({
			key => @nast::variable_declaration_t,
			val => @nast::variable_declaration_t,
			hash => @nast::value_t,
			cmd => @nast::cmd_t,
			short => @nast::bool_t
		});
}

def nast::rep_t() {
	return ptd::rec({
			iter => @nast::variable_declaration_t,
			cmd => @nast::cmd_t,
			count => @nast::value_t,
			short => @nast::bool_t
		});
}

def nast::while_t() {
	return ptd::rec({cond => @nast::value_t, cmd => @nast::cmd_t, short => @nast::bool_t});
}

def nast::try_ensure_t() {
	return ptd::var({decl => @nast::variable_declaration_t, lval => @nast::bin_op_t, expr => @nast::value_t});
}

def nast::if_t() {
	return ptd::rec({
			cond => @nast::value_t,
			if => @nast::cmd_t,
			elsif => ptd::arr(ptd::rec({cond => @nast::value_t, cmd => @nast::cmd_t, debug => @nast::debug_t})),
			else => @nast::cmd_t
		});
}

def nast::for_t() {
	return ptd::rec({
			start => ptd::var({var_decl => @nast::variable_declaration_t, value => @nast::value_t}),
			iter => @nast::value_t,
			cond => @nast::value_t,
			cmd => @nast::cmd_t
		});
}

def nast::place_t() {
	return ptd::rec({line => ptd::sim(), position => ptd::sim()});
}

def nast::debug_t() {
	return ptd::rec({begin => @nast::place_t, end => @nast::place_t});
}

def nast::empty_debug() : @nast::debug_t {
	return {begin => {line => 1, position => -1}, end => {line => 1, position => -1}};
}

def nast::cast_to_value(value : @nast::value_only_t) : @nast::value_t {
	return {debug => nast::empty_debug(), value => value};
}



def nast::cmd_t() {
	return ptd::rec({
			debug => @nast::debug_t,
			cmd => ptd::var({
					if => @nast::if_t,
					for => @nast::for_t,
					fora => @nast::fora_t,
					forh => @nast::forh_t,
					loop => @nast::cmd_t,
					rep => @nast::rep_t,
					while => @nast::while_t,
					if_mod => @nast::if_mod_t,
					unless_mod => @nast::unless_mod_t,
					break => ptd::none(),
					continue => ptd::none(),
					match => @nast::match_t,
					value => @nast::value_t,
					try => @nast::try_ensure_t,
					ensure => @nast::try_ensure_t,
					var_decl => @nast::variable_declaration_t,
					return => @nast::value_t,
					block => @nast::block_t,
					die => @nast::die_t,
					nop => ptd::none()
				})
		});
}

def nast::die_t() {
	return ptd::arr(@nast::value_t);
}

def nast::block_t() {
	return ptd::arr(@nast::cmd_t);
}

def nast::if_mod_t() {
	return ptd::rec({cond => @nast::value_t, cmd => @nast::cmd_t});
}

def nast::unless_mod_t() {
	return ptd::rec({cond => @nast::value_t, cmd => @nast::cmd_t});
}
