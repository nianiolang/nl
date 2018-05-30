###
# (c) Atinea Sp. z o.o.
###


use tct;
use array;
use hash;
use ov;
use nast;
use ptd;

def ptd_parser::fun_def_to_ptd(ast : @nast::cmd_t) : ptd::var({ok => @tct::meta_type, err => ptd::sim()}) {
	var cmd = ast->cmd;
	cmd = cmd as :block;
	return :err('type function should have only a return command') unless array::len(cmd) == 1 && cmd[0]->cmd is :return;
	return ptd_parser::try_value_to_ptd(cmd[0]->cmd as :return);
}

def ptd_parser::try_value_to_ptd(ast_arg : @nast::value_t) : ptd::var({ok => @tct::meta_type, err => ptd::sim()}) {
	var ast = ast_arg->value;
	if (ast is :unary_op) {
		var op = ast as :unary_op;
		return :err('ptd function argument can be other ptd function or reference type start witch @: ' . op->op)
			unless op->op eq '@';
		var fun_str = op->val->value as :fun_label;
		return :ok(tct::ref(fun_str->module . '::' . fun_str->name));
	}
	return :err('can parse only function: ' . ov::get_element(ast)) unless ast is :fun_val;
	var fun_val : @nast::fun_val_t = ast as :fun_val;
	return :err('can parse only ptd function: ' . fun_val->module . '::' . fun_val->name)
		unless fun_val->module eq 'ptd';
	var args_size : ptd::sim() = array::len(fun_val->args);
	var fun_name : ptd::sim() = fun_val->name;
	if (fun_name eq 'sim') {
		return :err('sim can''t have arguments: ' . args_size) unless args_size == 0;
		return :ok(tct::sim());
	} elsif (fun_name eq 'ptd_im') {
		return :err('im can''t have arguments: ' . args_size) unless args_size == 0;
		return :ok(tct::tct_im());
	} elsif (fun_name eq 'void') {
		return :err('Void type can be used only as a return type of function');
	}
	return :err('''none'' type can be used only in ''var'' type') if fun_name eq 'none';
	return :err('expected one argument in ' . fun_name . ' function call') unless array::len(fun_val->args) == 1;
	var fun_arg : @nast::value_t = fun_val->args[0]->val;
	if (fun_name eq 'rec') {
		return :err('rec must have hash: ' . ov::get_element(fun_arg)) unless fun_arg->value is :hash_decl;
		try var ret = parse_hash(fun_arg);
		return :ok(tct::rec(ret));
	} elsif (fun_name eq 'hash') {
		try var ret = ptd_parser::try_value_to_ptd(fun_arg);
		return :ok(tct::hash(ret));
	} elsif (fun_name eq 'arr') {
		try var ret = ptd_parser::try_value_to_ptd(fun_arg);
		return :ok(tct::arr(ret));
	} elsif (fun_name eq 'var') {
		return :err('var must have hash' . args_size) unless args_size == 1;
		return :err('var must have hash: ' . ov::get_element(fun_arg)) unless fun_arg->value is :hash_decl;
		var hash_decl = fun_arg->value as :hash_decl;
		var elems = {};
		fora var hash_elem (hash_decl) {
			if (hash_elem->val->value is :fun_val) {
				fun_val = hash_elem->val->value as :fun_val;
				if (fun_val->module eq 'ptd' && fun_val->name eq 'none') {
					hash::set_value(ref elems, hash_elem->key->value as :hash_key, tct::none());
					continue;
				}
			}
			try var ret = ptd_parser::try_value_to_ptd(hash_elem->val);
			hash::set_value(ref elems, hash_elem->key->value as :hash_key, ret);
		}
		return :ok(tct::var(elems));
	} else {
		return :err('it is not type function : ' . fun_name);
	}
}

def parse_hash(fun_arg : @nast::value_t) : ptd::var({ok => ptd::hash(@tct::meta_type), err => ptd::sim()}) {
	var hash_decl = fun_arg->value as :hash_decl;
	var elems = {};
	fora var hash_elem (hash_decl) {
		try var ret = ptd_parser::try_value_to_ptd(hash_elem->val);
		hash::set_value(ref elems, hash_elem->key->value as :hash_key, ret);
	}
	return :ok(elems);
}

