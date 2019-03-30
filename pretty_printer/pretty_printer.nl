###
# (c) Atinea Sp. z o.o.
###


use string;
use array;
use ptd;
use nast;
use wprinter;
use boolean_t;

def state_print(ref state : @wprinter::state_t, str : ptd::sim()) : ptd::void() {
	state->out .= str;
}

def pretty_printer::struct_t() {
	return ptd::rec({
			imports => ptd::arr(ptd::sim()),
			functions => ptd::arr(ptd::rec({name => ptd::sim(), head => ptd::sim(), body => ptd::sim()}))
		});
}

def pretty_printer::print_module_to_struct(mod : @nast::module_t) : @pretty_printer::struct_t {
	var struct = {imports => [], functions => []};
	fora var imp (mod->import) {
		array::push(ref struct->imports, 'use ' . imp->name . ';' . string::lf());
	}
	fora var function (mod->fun_def) {
		var state = {out => ''};
		state_print(ref state, string::lf());
		print_fun_def_head(ref state, function, mod->name);
		var head = state->out;
		state->out = '';
		fora var c (function->cmd->cmd as :block) {
			state_print(ref state, string::lf() . pind(1));
			print_cmd(ref state, c, 1);
		}
		array::push(ref struct->functions, {
				name => (function->access is :priv ? '::' : '') . function->name,
				head => head,
				body => state->out
			});
	}
	return struct;
}

def pretty_printer::print_module_to_str(mod : @nast::module_t) : ptd::sim() {
	var state = {out => ''};
	if (mod->stamp ne '') {
		state_print(ref state, mod->stamp . string::lf());
	} else {
		state_print(ref state, '###' . string::lf() . '# (c) Atinea Sp. z o.o.' . string::lf() . '###' . string::lf() . 
			string::lf() . string::lf());
	}
	var imps : ptd::arr(ptd::sim()) = [];
	fora var imp (mod->import) {
		array::push(ref imps, 'use ' . imp->name . ';');
	}
	state_print(ref state, array::join(string::lf(), imps));
	state_print(ref state, string::lf() . string::lf());
	fora var function (mod->fun_def) {
		print_fun_def(ref state, function, mod->name);
		state_print(ref state, string::lf() . string::lf());
	}
	return state->out;
}

def print_fun_def(ref state : @wprinter::state_t, function : @nast::fun_def_t, module : ptd::sim()) : ptd::void() {
	print_fun_def_head(ref state, function, module);
	print_st(ref state, function->cmd, 0);
}

def print_fun_def_head(ref state : @wprinter::state_t, function : @nast::fun_def_t, module : ptd::sim()) : ptd::void() {
	var name : ptd::sim() = '';
	match (function->access) case :pub {
		name .= module . '::';
	} case :priv {
	}
	name .= function->name;
	var ret : @wprinter::pretty_arr_t = [
			wprinter::build_sim('def'),
			wprinter::get_sep(),
			wprinter::build_sim(name),
			wprinter::build_sim('(')
		];
	rep var i (array::len(function->args)) {
		var el : @nast::fun_def_arg_t = function->args[i];
		match (el->mod) case :ref {
			array::append(ref ret, [wprinter::build_sim('ref'), wprinter::get_sep()]);
		} case :none {
		}
		array::push(ref ret, wprinter::build_sim(el->name));
		match (el->type) case :type(var type) {
			array::append(ref ret, [wprinter::get_sep(), wprinter::build_sim(':'), wprinter::get_sep(), print_val(type)]);
		} case :none {
		}
		array::append(ref ret, [wprinter::build_sim(','), wprinter::get_sep()]) if i != array::len(function->args) - 1;
	}
	array::push(ref ret, wprinter::build_sim(')'));
	match (function->ret_type) case :type(var type) {
		array::append(ref ret, [
				wprinter::get_sep(),
				wprinter::build_sim(':'),
				wprinter::get_sep(),
				print_sim_value(type)
			]);
	} case :none {
	}
	wprinter::print_t(ref state, wprinter::build_pretty_l(ret), 0);
}

def join_print_var_decl(aval : ptd::arr(@nast::variable_declaration_t)) : @wprinter::pretty_arr_t {
	var ret : @wprinter::pretty_arr_t = [];
	rep var i (array::len(aval)) {
		array::push(ref ret, print_var_decl(aval[i]));
		array::append(ref ret, [wprinter::build_sim(','), wprinter::get_sep()]) if i != array::len(aval) - 1;
	}
	return ret;
}

def print_var_decl(var_decl : @nast::variable_declaration_t) : @wprinter::pretty_t {
	var list : @wprinter::pretty_arr_t = [wprinter::build_sim('var'), wprinter::get_sep()];
	match (var_decl->type) case :type(var type) {
		array::append(ref list, [
				wprinter::build_sim(var_decl->name),
				wprinter::get_sep(),
				wprinter::build_sim(':'),
				wprinter::get_sep(),
				print_val(type)
			]);
	} case :none {
		array::push(ref list, wprinter::build_sim(var_decl->name));
	}
	match (var_decl->value) case :value(var value) {
		array::append(ref list, [wprinter::get_sep(), wprinter::build_sim('='), wprinter::get_sep(), print_val(value)]);
	} case :none {
	}
	return wprinter::build_pretty_l(list);
}

def pind(ind : ptd::sim()) : ptd::sim() {
	var r = '';
	r .= string::chr(9) rep var i (ind);
	return r;
}

def join_print_hash_elem(aval : ptd::arr(@nast::hash_elem_t)) : @wprinter::pretty_arr_t {
	var ret : @wprinter::pretty_arr_t = [];
	rep var i (array::len(aval)) {
		array::push(ref ret, print_hash_elem(aval[i]));
		array::append(ref ret, [wprinter::build_sim(','), wprinter::get_sep()]) if i != array::len(aval) - 1;
	}
	return ret;
}

def print_hash_elem(elem : @nast::hash_elem_t) : @wprinter::pretty_t {
	if (elem->val->value is :hash_decl || elem->val->value is :arr_decl) {
		var key = elem->key->value as :hash_key;
		key = '''' . key . '''' unless is_proper_hash_key(key);
		return get_compressed_fun_val(elem->val, key . ' => ', '');
	}
	return wprinter::build_pretty_l([
			print_val(elem->key),
			wprinter::get_sep(),
			wprinter::build_sim('=>'),
			wprinter::get_sep(),
			print_val(elem->val)
		]);
}

def print_variant(variant : @nast::variant_t) : @wprinter::pretty_t {
	if (variant->name eq 'TRUE' && variant->var->value is :nop) {
		return wprinter::build_sim('true');
	} elsif (variant->name eq 'FALSE' && variant->var->value is :nop) {
		return wprinter::build_sim('false');
	}
	if (variant->var->value is :arr_decl || variant->var->value is :hash_decl) {
		return get_compressed_fun_val(variant->var, ':' . variant->name . '(', ')');
	}
	var ret : @wprinter::pretty_arr_t = [];
	array::push(ref ret, wprinter::build_sim(':' . variant->name));
	array::append(ref ret, [wprinter::build_sim('('), print_val(variant->var), wprinter::build_sim(')')])
		unless variant->var->value is :nop;
	return wprinter::build_pretty_op_l(ret);
}

def print_variant_case_decl(variant : @nast::variant_decl_t) : @wprinter::pretty_t {
	var ret : @wprinter::pretty_arr_t = [wprinter::build_sim(':' . variant->name)];
	match (variant->value) case :value(var value) {
		array::append(ref ret, [wprinter::build_sim('('), print_var_decl(value), wprinter::build_sim(')')]);
	} case :none {
	}
	return wprinter::build_pretty_op_l(ret);
}

def join_print_fun_arg(aval : ptd::arr(@nast::fun_val_arg_t)) : @wprinter::pretty_arr_t {
	var ret : @wprinter::pretty_arr_t = [];
	rep var i (array::len(aval)) {
		array::push(ref ret, print_fun_arg(aval[i]));
		array::append(ref ret, [wprinter::build_sim(','), wprinter::get_sep()]) if i != array::len(aval) - 1;
	}
	return ret;
}

def print_fun_arg(arg : @nast::fun_val_arg_t) : @wprinter::pretty_t {
	var ret : @wprinter::pretty_arr_t = [];
	match (arg->mod) case :ref {
		array::append(ref ret, [wprinter::build_sim('ref'), wprinter::get_sep()]);
	} case :none {
	}
	array::push(ref ret, print_val(arg->val));
	return wprinter::build_pretty_op_l(ret);
}

def count_structs(struct : ptd::arr(@nast::fun_val_arg_t)) : ptd::sim() {
	var ret = 0;
	fora var el (struct) {
		++ret if el->val->value is :arr_decl || el->val->value is :hash_decl;
	}
	return ret;
}

def get_compressed_fun_val(arg : @nast::value_t, open : ptd::sim(), close : ptd::sim()) : @wprinter::pretty_t {
	var pprint : @wprinter::pretty_arr_t;
	var begin : ptd::sim() = open;
	var end : ptd::sim() = close;
	loop {
		if (arg->value is :arr_decl) {
			var a_arg = arg->value as :arr_decl;
			begin .= '[';
			end = ']' . end;
			if (array::len(a_arg) != 1) {
				pprint = join_print_val(a_arg);
				break;
			}
			arg = a_arg[0];
		} elsif (arg->value is :hash_decl) {
			var h_arg = arg->value as :hash_decl;
			begin .= '{';
			end = '}' . end;
			pprint = join_print_hash_elem(h_arg);
			break;
		} else {
			pprint = [print_val(arg)];
			break;
		}
	}
	return wprinter::build_pretty_arr_decl(pprint, begin, end);
}

def print_st(ref state : @wprinter::state_t, cmd : @nast::cmd_t, ind : ptd::sim()) : ptd::void() {
	state_print(ref state, ' ');
	print_cmd(ref state, cmd, ind);
}

def get_fun_label(fun_name : ptd::sim(), fun_module : ptd::sim()) : ptd::sim() {
	return fun_module eq '' ? fun_name : (fun_module . '::' . fun_name);
}

def string_to_nl(str : ptd::sim()) : ptd::sim() {
	return string::replace(str, '''', '''''');
}

def join_print_val(aval : ptd::arr(@nast::value_t)) : @wprinter::pretty_arr_t {
	var ret : @wprinter::pretty_arr_t = [];
	rep var i (array::len(aval)) {
		array::push(ref ret, print_val(aval[i]));
		array::append(ref ret, [wprinter::build_sim(','), wprinter::get_sep()]) if i != array::len(aval) - 1;
	}
	return ret;
}

def is_to_change_ov(val : @nast::value_t) : @boolean_t::type {
	return false unless val->value is :fun_val;
	var fun_val = val->value as :fun_val;
	if (array::len(fun_val->args) == 2 && (fun_val->module eq 'ov' || fun_val->module eq 'c_ov')) {
		if ((fun_val->name eq 'as' || fun_val->name eq 'is') && fun_val->args[1]->val->value is :string) {
			var ov_case = fun_val->args[1]->val->value as :string;
			if (array::len(ov_case->arr) == 1 && string::index2(ov_case->arr[0], ' ') < 0) {
				return true;
			}
		}
	}
	return false;
}

def print_val(val : @nast::value_t) : @wprinter::pretty_t {
	match (val->value) case :const(var const) {
		return wprinter::build_sim(const);
	} case :string(var str_arr) {
		var arr : ptd::arr(ptd::sim()) = [];
		fora var el (str_arr->arr) {
			array::push(ref arr, '''' . string_to_nl(el));
		}
		match (str_arr->last) case :new_line {
		} case :end {
			arr[array::len(arr) - 1] = arr[array::len(arr) - 1] . '''';
		}
		return wprinter::build_str_arr(arr, str_arr->last);
	} case :hash_key(var hash_key) {
		hash_key = '''' . hash_key . '''' unless is_proper_hash_key(hash_key);
		return wprinter::build_sim(hash_key);
	} case :variant(var variant) {
		return print_variant(variant);
	} case :var(var variable) {
		return wprinter::build_sim(variable);
	} case :parenthesis(var parenthesis) {
		return wprinter::build_pretty_a([wprinter::build_sim('('), print_val(parenthesis), wprinter::build_sim(')')]);
	} case :ternary_op(var ternary_op) {
		return wprinter::build_pretty_a([
				print_val(ternary_op->fst),
				wprinter::get_sep(),
				wprinter::build_pretty_op_l([wprinter::build_sim('? '), print_val(ternary_op->snd)]),
				wprinter::get_sep(),
				wprinter::build_pretty_op_l([wprinter::build_sim(': '), print_val(ternary_op->thrd)])
			]);
	} case :bin_op(var bin_op) {
		var op : ptd::sim() = bin_op->op;
		if (op eq 'ARRAY_INDEX') {
			return wprinter::build_pretty_a([
					wprinter::build_pretty_l([print_val(bin_op->left), wprinter::build_sim('[')]),
					print_val(bin_op->right),
					wprinter::build_sim(']')
				]);
		} elsif (op eq 'HASH_INDEX') {
			return wprinter::build_pretty_a([
					wprinter::build_pretty_l([print_val(bin_op->left), wprinter::build_sim('{')]),
					print_val(bin_op->right),
					wprinter::build_sim('}')
				]);
		} elsif (op eq '->') {
			var left;
			if (is_to_change_ov(bin_op->left)) {
				left = wprinter::build_pretty_a([
						wprinter::build_sim('('),
						print_val(bin_op->left),
						wprinter::build_sim(')')
					]);
			} else {
				left = print_val(bin_op->left);
			}
			return wprinter::build_pretty_op_l([left, wprinter::build_sim(op), print_val(bin_op->right)]);
		} else {
			return wprinter::build_pretty_op_l([
					wprinter::build_pretty_op_l([print_val(bin_op->left), wprinter::get_sep(), wprinter::build_sim(op)]),
					wprinter::get_sep(),
					print_val(bin_op->right)
				]);
		}
	} case :var_op(var var_op) {
		var op : ptd::sim();
		match (var_op->op) case :ov_as {
			op = 'as';
		} case :ov_is {
			op = 'is';
		}
		return wprinter::build_pretty_op_l([
				print_val(var_op->left),
				wprinter::get_sep(),
				wprinter::build_sim(op),
				wprinter::get_sep(),
				wprinter::build_sim(':'),
				wprinter::build_sim(var_op->case)
			]);
	} case :post_dec(var dec) {
		return wprinter::build_pretty_op_l([print_val(dec), wprinter::build_sim('--')]);
	} case :post_inc(var inc) {
		return wprinter::build_pretty_op_l([print_val(inc), wprinter::build_sim('++')]);
	} case :unary_op(var unary_op) {
		return wprinter::build_pretty_bind(wprinter::build_sim(unary_op->op), print_val(unary_op->val));
	} case :fun_val(var fun_val) {
		var fun_name : ptd::sim() = get_fun_label(fun_val->name, fun_val->module) . '(';
		if (array::len(fun_val->args) == 1) {
			var arg : @nast::value_t = fun_val->args[0]->val;
			if (arg->value is :hash_decl || arg->value is :arr_decl) {
				return get_compressed_fun_val(arg, fun_name, ')');
			}
		} elsif (is_to_change_ov(val)) {
			return wprinter::build_pretty_op_l([
					print_val(fun_val->args[0]->val),
					wprinter::get_sep(),
					wprinter::build_sim(fun_val->name),
					wprinter::get_sep(),
					wprinter::build_sim(':' . (fun_val->args[1]->val->value as :string)->arr[0])
				]);
		}
		var ret : @wprinter::pretty_arr_t = [wprinter::build_sim(fun_name)];
		array::append(ref ret, join_print_fun_arg(fun_val->args));
		array::push(ref ret, wprinter::build_sim(')'));
		return wprinter::build_pretty_op_l(ret)
			if 
			((count_structs(fun_val->args) == array::len(fun_val->args)) && array::len(fun_val->args) > 0) || 
			(array::len(fun_val->args) == 1 && fun_val->args[0]->val->value is :fun_val);
		return wprinter::build_pretty_l(ret);
	} case :nop {
		return {len => 0, el => :sim('')};
	} case :arr_decl(var arr_decl) {
		return get_compressed_fun_val(val, '', '');
	} case :hash_decl(var hash_decl) {
		return wprinter::build_pretty_arr_decl(join_print_hash_elem(hash_decl), '{', '}');
	} case :fun_label(var fun_label) {
		return wprinter::build_sim(get_fun_label(fun_label->name, fun_label->module));
	}
}

def print_cond_mod(ref state : @wprinter::state_t, header : ptd::sim(), cmd : @nast::cmd_t, arg_list : ptd::arr(
		@nast::variable_declaration_t), cond : @nast::value_t, ind : ptd::sim()) : ptd::void() {
	var ret : @wprinter::pretty_arr_t = [
			wprinter::build_sim(header),
			wprinter::get_sep(),
			wprinter::build_pretty_l(join_print_var_decl(arg_list))
		];
	array::push(ref ret, wprinter::build_sim(' ')) if array::len(arg_list) > 0;
	array::push(ref ret, wprinter::build_sim('(')) if array::len(arg_list) > 0;
	array::push(ref ret, print_val(cond));
	array::push(ref ret, wprinter::build_sim(')')) if array::len(arg_list) > 0;
	wprinter::print_t(ref state, wprinter::build_pretty_a([
			print_simple_statement(cmd),
			wprinter::get_sep(),
			wprinter::build_pretty_op_l(ret)
		]), ind);
	state_print(ref state, ';');
}

def print_loop(ref state : @wprinter::state_t, header : ptd::sim(), cmd : @nast::cmd_t, arg_list : ptd::arr(
		@nast::variable_declaration_t), cond : @nast::value_t, ind : ptd::sim()) : ptd::void() {
	var pprint : @wprinter::pretty_arr_t = [wprinter::build_sim(header), wprinter::get_sep()];
	array::append(ref pprint, join_print_var_decl(arg_list));
	array::push(ref pprint, wprinter::build_sim(' ')) if array::len(arg_list) > 0;
	array::push(ref pprint, wprinter::build_sim('('));
	var cond_p = print_val(cond);
	if (cond_p->el is :arr) {
		array::append(ref pprint, (cond_p->el as :arr)->arr);
	} else {
		array::push(ref pprint, cond_p);
	}
	array::push(ref pprint, wprinter::build_sim(')'));
	wprinter::print_t(ref state, wprinter::build_pretty_l(pprint), ind);
	print_st(ref state, cmd, ind);
}

def print_loop_or_mod(ref state : @wprinter::state_t, short : @nast::bool_t, header : ptd::sim(), cmd : @nast::cmd_t, 
	arg_list : ptd::arr(@nast::variable_declaration_t), cond : @nast::value_t, ind : ptd::sim()) : ptd::void() {
	if (short) {
		print_cond_mod(ref state, header, cmd, arg_list, cond, ind);
	} else {
		print_loop(ref state, header, cmd, arg_list, cond, ind);
	}
}

def print_try_ensure(value : @nast::try_ensure_t, typ : ptd::sim()) : @wprinter::pretty_t {
	var pprint : @wprinter::pretty_arr_t = [wprinter::build_sim(typ)];
	match (value) case :decl(var decl) {
		array::append(ref pprint, [wprinter::get_sep(), print_var_decl(decl)]);
	} case :expr(var expr) {
		array::append(ref pprint, [wprinter::get_sep(), print_val(expr)]);
	} case :lval(var bin_op) {
		array::append(ref pprint, [
				wprinter::get_sep(),
				print_val(bin_op->left),
				wprinter::get_sep(),
				wprinter::build_sim(bin_op->op),
				wprinter::get_sep(),
				print_val(bin_op->right)
			]);
	}
	return wprinter::build_pretty_l(pprint);
}

def print_return(as_return : @nast::value_t) : @wprinter::pretty_t {
	var pprint : @wprinter::pretty_arr_t = [wprinter::build_sim('return')];
	if (!as_return->value is :nop) {
		array::append(ref pprint, [wprinter::get_sep(), print_val(as_return)]);
	}
	return wprinter::build_pretty_l(pprint);
}

def print_sim_value(value : @nast::value_t) : @wprinter::pretty_t {
	var val : @wprinter::pretty_t = print_val(value);
	if (val->el is :arr) {
		val = wprinter::build_pretty_l((val->el as :arr)->arr);
	}
	return val;
}

def print_break() : @wprinter::pretty_t {
	return wprinter::build_sim('break');
}

def print_continue() : @wprinter::pretty_t {
	return wprinter::build_sim('continue');
}

def print_die(as_die : ptd::arr(@nast::value_t)) : @wprinter::pretty_t {
	var pprint : @wprinter::pretty_arr_t = [wprinter::build_sim('die')];
	array::append(ref pprint, [
				wprinter::build_sim('('),
				wprinter::build_pretty_l(join_print_val(as_die)),
				wprinter::build_sim(')')
			])
		if array::len(as_die) > 0;
	return wprinter::build_pretty_a(pprint);
}

def print_simple_statement(cmd : @nast::cmd_t) : @wprinter::pretty_t {
	if (cmd->cmd is :value) {
		return print_sim_value(cmd->cmd as :value);
	} elsif (cmd->cmd is :return) {
		return print_return(cmd->cmd as :return);
	} elsif (cmd->cmd is :break) {
		return print_break();
	} elsif (cmd->cmd is :continue) {
		return print_continue();
	} elsif (cmd->cmd is :die) {
		return print_die(cmd->cmd as :die);
	} elsif (cmd->cmd is :try) {
		return print_try_ensure(cmd->cmd as :try, 'try');
	} elsif (cmd->cmd is :ensure) {
		return print_try_ensure(cmd->cmd as :ensure, 'ensure');
	} else {
		die(cmd);
	}
}

def flush_sim_statement(ref state : @wprinter::state_t, st : @wprinter::pretty_t, ind : ptd::sim()) : ptd::void() {
	wprinter::print_t(ref state, st, ind);
	state_print(ref state, ';');
}

def print_cmd(ref state : @wprinter::state_t, cmd : @nast::cmd_t, ind : ptd::sim()) : ptd::void() {
	match (cmd->cmd) case :if(var as_if) {
		print_loop(ref state, 'if', as_if->if, [], as_if->cond, ind);
		fora var elseif (as_if->elsif) {
			state_print(ref state, ' ');
			print_loop(ref state, 'elsif', elseif->cmd, [], elseif->cond, ind);
		}
		if (!as_if->else->cmd is :nop) {
			state_print(ref state, ' else');
			print_st(ref state, as_if->else, ind);
		}
	} case :while(var as_while) {
		print_loop_or_mod(ref state, as_while->short, 'while', as_while->cmd, [], as_while->cond, ind);
	} case :for(var as_for) {
		var start;
		match (as_for->start) case :value(var value) {
			start = print_val(value);
		} case :var_decl(var var_decl) {
			start = print_var_decl(var_decl);
		}
		wprinter::print_t(ref state, wprinter::build_pretty_a([
				wprinter::build_sim('for ('),
				start,
				wprinter::build_sim(';'),
				wprinter::get_sep(),
				print_val(as_for->cond),
				wprinter::build_sim(';'),
				wprinter::get_sep(),
				print_val(as_for->iter),
				wprinter::build_sim(') ')
			]), ind);
		print_cmd(ref state, as_for->cmd, ind);
	} case :block(var block) {
		state_print(ref state, '{');
		fora var c (block) {
			state_print(ref state, string::lf() . pind(ind + 1));
			print_cmd(ref state, c, ind + 1);
		}
		state_print(ref state, string::lf() . pind(ind) . '}');
	} case :nop {
		state_print(ref state, ';');
	} case :match(var as_match) {
		wprinter::print_t(ref state, wprinter::build_pretty_a([
				wprinter::build_sim('match ('),
				print_val(as_match->val),
				wprinter::build_sim(')')
			]), ind);
		fora var case_el (as_match->branch_list) {
			state_print(ref state, ' case ');
			wprinter::print_t(ref state, print_variant_case_decl(case_el->variant), ind + 1);
			print_st(ref state, case_el->cmd, ind);
		}
	} case :fora(var as_fora) {
		print_loop_or_mod(ref state, as_fora->short, 'fora', as_fora->cmd, [as_fora->iter], as_fora->array, ind);
	} case :forh(var as_forh) {
		print_loop_or_mod(ref state, as_forh->short, 'forh', as_forh->cmd, [as_forh->key, as_forh->val], as_forh->hash, 
			ind);
	} case :rep(var as_rep) {
		print_loop_or_mod(ref state, as_rep->short, 'rep', as_rep->cmd, [as_rep->iter], as_rep->count, ind);
	} case :loop(var as_loop) {
		state_print(ref state, 'loop');
		print_st(ref state, as_loop, ind);
	} case :if_mod(var if_mod) {
		print_cond_mod(ref state, 'if', if_mod->cmd, [], if_mod->cond, ind);
	} case :unless_mod(var unless_mod) {
		print_cond_mod(ref state, 'unless', unless_mod->cmd, [], unless_mod->cond, ind);
	} case :value(var value) {
		flush_sim_statement(ref state, print_sim_value(value), ind);
	} case :try(var astry) {
		flush_sim_statement(ref state, print_try_ensure(astry, 'try'), ind);
	} case :ensure(var asensure) {
		flush_sim_statement(ref state, print_try_ensure(asensure, 'ensure'), ind);
	} case :return(var as_return) {
		flush_sim_statement(ref state, print_return(as_return), ind);
	} case :break {
		flush_sim_statement(ref state, print_break(), ind);
	} case :continue {
		flush_sim_statement(ref state, print_continue(), ind);
	} case :die(var as_die) {
		flush_sim_statement(ref state, print_die(as_die), ind);
	} case :var_decl(var var_decl) {
		flush_sim_statement(ref state, print_var_decl(var_decl), ind);
	}
}

def is_proper_hash_key(string : ptd::sim()) : @boolean_t::type {
	return false if string::length(string) == 0;
	return false unless string::is_letter(string::substr(string, 0, 1));
	fora var char (string::to_array(string)) {
		return false unless string::is_letter(char) || string::is_digit(char) || char eq '_';
	}
	return true;
}

