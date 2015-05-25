###
# (c) Atinea Sp. z o.o.
# LGA 05.11.2012
### 

use array;
use string;
use ptd;
use ov;
use nast;
use hash;
use nlasm;
use boolean_t;
use string_utils;

def translator::function_logic_t() {
	return ptd::rec({
		register => ptd::sim(),
		variables => ptd::hash(ptd::sim())
	});
}
def translator::loop() {
	return ptd::rec({
		label => ptd::sim(),
		logic => @translator::function_logic_t
	});
}
def translator::loop_label() {
	return ptd::rec({
		break => @translator::loop, 
		continue => @translator::loop
	});
}

def translator::state_t() {
	return ptd::rec({
		label_nr => ptd::sim(), 
		debug => @nlasm::debug_t,
		logic => @translator::function_logic_t,
		module_name => ptd::sim(),
		result => @nlasm::function_t,
		loop_label => @translator::loop_label
	});
}

def translator::string_t() {
	return ptd::rec({
		arr => ptd::arr(ptd::sim()),
		last => ptd::var({end => ptd::none(), new_line => ptd::none()})
	});
}

def translator::lvalue_values_t(){
	return ptd::arr(ptd::var({
		value => @nlasm::reg_t,
		index => ptd::rec({value=>@nlasm::reg_t, index=>@nlasm::reg_t}),
		key => ptd::rec({value=>@nlasm::reg_t, key=>ptd::sim()})
	}));
}

def translator::last_debug_char(debug : @nast::debug_t) : @nast::debug_t {
	var begin : @nast::place_t = {
		line => debug->end->line,
		position => debug->end->position - 1
	};
	var end : @nast::place_t = {
		line => debug->end->line,
		position => debug->end->position
	};
	return {begin => begin, end => end};
}

def translator::translate(ast : @nast::module_t) : @nlasm::result_t {
	var result : @nlasm::result_t = {
		module_name => ast->name,
		functions => [],
		imports => []
	};
	result->imports = [];
	fora var imp (ast->import) {
		array::push(ref result->imports, imp->name);
	}
	fora var function (ast->fun_def) {
		var logic = {variables => {}, register => 0};
		var state : @translator::state_t = {
			label_nr => 0,
			debug => nlasm::empty_debug(),
			module_name => ast->name,
			logic => logic,
			result => {
				annotation => :none,
				access => function->access,
				reg_size => 0,
				args_type => [],
				commands => [],
				name => function->name
			},
			loop_label => {
				break => {label => '', logic => logic},
				continue => {label => '', logic => logic}
			}
		};
		print_fun_def(function, ref state);
		array::push(ref result->functions, state->result);
	}
	return result;
}

def print_fun_def(function : @nast::fun_def_t, ref state : @translator::state_t) {	
	fora var fun_arg (function->args) {
		match (fun_arg->mod) case :none {
			new_declaration(fun_arg->name, ref state);
			array::push(ref state->result->args_type, :val);
		} case :ref {
			new_declaration(fun_arg->name, ref state);
			array::push(ref state->result->args_type, :ref);
		}
	}
	print_cmd(function->cmd, ref state);
	print_return(:nop, ref state);
}

def print_array_declaration(arr : ptd::arr(@nast::value_t), destination : @nlasm::reg_t, ref state : @translator::state_t) {
	var args : ptd::arr(@nlasm::reg_t) = [];
	fora var elem (arr) {
		array::push(ref args, calc_val(elem, ref state));
	}
	print(ref state,
		:arr_decl({
			dest => destination, 
			src => args
		}));
}

def print_hash_declaration(hash : ptd::arr(@nast::hash_elem_t), destination : @nlasm::reg_t, ref state : @translator::state_t) {
	var elems_array = [];
	fora var elem (hash) {
		array::push(ref elems_array, {
			key => elem->key as :hash_key,
			val => calc_val(elem->val, ref state)
		});
	}
	print(ref state,
		:hash_decl({
			dest => destination,
			src => elems_array
		}));
}

def print_variant(variant : @nast::variant_t, destination : @nlasm::reg_t, ref state : @translator::state_t) {
	var arg = :emp;
	if (!variant->var is :nop) {
		arg = :arg(dest_val(variant->var, destination, ref state));
	}
	print(ref state,
		:ov_mk({
			dest => destination,
			src => arg,
			name => variant->name
		}));
}

def print_var_decl(var_decl : @nast::variable_declaration_t, ref state : @translator::state_t) : @nlasm::reg_t {
	var reg = new_declaration(var_decl->name, ref state);
	match (var_decl->value) case :none {
	} case :value(var value) {
		print_val(value, reg, ref state);
	}
	return reg;
}

def load_const(const : ptd::sim(), destination : @nlasm::reg_t, ref state : @translator::state_t){
	print(ref state, 
		:load_const({
			dest => destination,
			val => const
		}));
}

def translator::ref_rec_args_t() {
	return ptd::arr(ptd::rec({var_name => ptd::sim(), list_name => ptd::sim(), lvalue_var_name => ptd::sim()}));
}

def print_fun_val(fun_val : @nast::fun_val_t, destination : @nlasm::reg_t, ref state : @translator::state_t) {
	var args : ptd::arr(ptd::var({
		val => @nlasm::reg_t,
		ref => @nlasm::reg_t
	})) = [];
	var lvalues : ptd::hash(@translator::lvalue_values_t) = {};
	var ref_var = {};
	var ref_was = {};
	for (var i = array::len(fun_val->args)-1; i>=0; --i) {
		continue unless fun_val->args[i]->mod is :ref;
		var src = fun_val->args[i]->val;
		get_stuct_of_lvalue(ref src);
		continue if hash::has_key(ref_was, src as :var);
		hash::set_value(ref ref_was, src as :var, 0);
		hash::set_value(ref ref_var, i, 0);
	}
	var registers = [];
	rep var i (array::len(fun_val->args)) {
		var fun_arg = fun_val->args[i];
		match (fun_arg->mod) case :none {
			array::push(ref args, :val(calc_val(fun_arg->val, ref state)));
		} case :ref {
			if(hash::has_key(ref_var, i)){
				var lvalue = get_value_of_lvalue(fun_arg->val, 1, ref state);
				var arg = lvalue[array::len(lvalue)-1] as :value;
				array::push(ref args, :ref(arg));
				hash::set_value(ref lvalues, i, lvalue);
			} else {
				var arg = new_register(ref state);
				print_val(fun_arg->val, arg, ref state);
				array::push(ref args, :ref(arg));
			}
		}
		array::push(ref registers, save_registers(ref state));
	}
	print(ref state,
		:call({
			dest => destination,
			mod => fun_val->module,
			fun_name => fun_val->name,
			args => args}));
	
	for(var i = array::len(registers)-1; i>=0; --i) {
		restore_registers(registers[i], ref state);
		continue unless hash::has_key(lvalues, i);
		set_value_of_lvalue(hash::get_value(lvalues, i), 1, ref state);
	}
}

def print_val(val : @nast::value_t, destination : @nlasm::reg_t, ref state : @translator::state_t) {
	var register_old = save_registers(ref state);
	match (val) case :const(var const) {
		load_const(convert_str_to_number(const), destination, ref state);
	} case :string(var str) {
		load_const(make_string(str, ref state), destination, ref state);
	} case :ternary_op(var op) {
		print_ternary_op(op, destination, ref state);
	} case :hash_key(var key) {
		die;
	} case :variant(var variant) {
		print_variant(variant, destination, ref state);
	} case :var(var variable) {
		print_variable(variable, destination, ref state);
	} case :parenthesis(var parenthesis) {
		print_val(parenthesis, destination, ref state);
	} case :bin_op(var bin_op) {
		print_bin_op(bin_op, destination, ref state);
	} case :var_op(var var_op) {
		print_var_op(var_op, destination, ref state);
	} case :unary_op(var unary_op) {
		print_unary_op(unary_op, destination, ref state);
	} case :fun_val(var fun_val) {
		print_fun_val(fun_val, destination, ref state);
	} case :arr_decl(var arr_decl) {
		print_array_declaration(arr_decl, destination, ref state);
	} case :hash_decl(var hash_decl) {
		print_hash_declaration(hash_decl, destination, ref state);
	} case :nop {
	} case :fun_label(var fun_label) {
		die;
	} case :post_inc(var inc) {
		print_post_operator(inc, '++', destination, ref state);
	} case :post_dec(var dec) {
		print_post_operator(dec, '--', destination, ref state);
	}
	restore_registers(register_old, ref state);
}

def print_variable(variable : ptd::sim(), destination : @nlasm::reg_t, ref state : @translator::state_t) {
	move(destination, get_var_register(variable, ref state), ref state);
}

def print_post_operator(value : @nast::value_t, sign : ptd::sim(), destination : @nlasm::reg_t, ref state : @translator::state_t) {
	var lvalue = get_value_of_lvalue(value, 1, ref state);
	var dest = lvalue[array::len(lvalue)-1] as :value;
	move(destination, dest, ref state);
	var const_reg = calc_val(:const(1), ref state);
	print_bin_op_operator_command(dest, dest, const_reg, sign eq '++' ? '+' : '-', ref state);
	set_value_of_lvalue(lvalue, 1, ref state);
}

def print_unary_op(unary_op : @nast::unary_op_t, destination : @nlasm::reg_t, ref state : @translator::state_t) {
	if (unary_op->op eq '!' ||
		unary_op->op eq '-' ||
		unary_op->op eq '+') {
		return if destination eq '';
		print_val(unary_op->val, destination, ref state);
		print(ref state,
			:una_op({
				dest => destination,
				src => destination,
				op => unary_op->op
			}));
	} elsif (unary_op->op eq '++' || unary_op->op eq '--') {
		var lvalue = get_value_of_lvalue(unary_op->val, 1, ref state);
		var dest = lvalue[array::len(lvalue)-1] as :value;
		var src = dest_val(:const(1), destination, ref state);
		print_bin_op_operator_command(dest, dest, src, unary_op->op eq '++' ? '+' : '-', ref state);
		move(destination, dest, ref state);
		set_value_of_lvalue(lvalue, 1, ref state);
	} elsif(unary_op->op eq '@') {
		return if destination eq '';
		var func = unary_op->val as :fun_label;
		print(ref state,
			:func({
				dest => destination,
				module => func->module,
				name => func->name
			}));
		print(ref state,
			:ov_mk({
				dest => destination,
				src => :arg(destination),
				name => 'ref'
			}));
	} else {
		die;
	}
}

def print_var_op(var_op : @nast::var_op_t, destination : @nlasm::reg_t, ref state : @translator::state_t) {
	return if destination eq '';
	print_val(var_op->left, destination, ref state);
	var to_add : @nlasm::order_t;
	match (var_op->op) case :ov_is{
		to_add = :ov_is({
			dest => destination,
			src => destination,
			type => var_op->case
		});
	} case :ov_as{
		to_add = :ov_as({
			dest => destination,
			src => destination,
			type => var_op->case
		});
	}
	print(ref state, to_add);
}
def print_bin_op(bin_op : @nast::bin_op_t, destination : @nlasm::reg_t, ref state : @translator::state_t) {
	if (bin_op->op eq '=') {
		var right = dest_val(bin_op->right, destination, ref state);
		var lvalue = get_value_of_lvalue(bin_op->left, 0, ref state);
		var dest = lvalue[array::len(lvalue)-1] as :value;
		move(dest, right, ref state);
		move(destination, dest, ref state);
		set_value_of_lvalue(lvalue, 0, ref state);
	} elsif (bin_op->op eq 'ARRAY_INDEX' || bin_op->op eq '->') {
		var left_val = dest_val(bin_op->left, destination, ref state);
		if (bin_op->op eq 'ARRAY_INDEX') {
			var index_val = calc_val(bin_op->right, ref state);
			print_get_from_index(destination, left_val, index_val, ref state);
		} else {
			print_get_value(destination, left_val, bin_op->right as :hash_key, ref state);
		}
	} elsif (bin_op->op eq '+=' || bin_op->op eq '-=' ||
			bin_op->op eq '/=' || bin_op->op eq '*=' ||
			bin_op->op eq '.=') {
		var right = calc_val(bin_op->right, ref state);
		var lvalue = get_value_of_lvalue(bin_op->left, 1, ref state);
		var dest = lvalue[array::len(lvalue)-1] as :value;
		print_bin_op_operator_command(dest, dest, right, bin_op->op, ref state);
		move(destination, dest, ref state);
		set_value_of_lvalue(lvalue, 1, ref state);
	} elsif (bin_op->op eq '&&') {
		var after = get_sim_label(ref state);
		var new = new_register(ref state);
		var condi = def_val(bin_op->left, destination, new, ref state);
		print(ref state,
			:una_op({
				dest => new,
				src => condi,
				op => '!'
			})
		);
		print_if_goto(after, new, ref state);
		def_val(bin_op->right, destination, new, ref state);
		print_sim_label(after, ref state);
	} elsif (bin_op->op eq '||') {
		var after = get_sim_label(ref state);
		var left = dest_val(bin_op->left, destination, ref state);
		move(destination, left, ref state) if destination ne left;
		print_if_goto(after, left, ref state);
		left = dest_val(bin_op->right, destination, ref state);
		move(destination, left, ref state) if left ne destination;
		print_sim_label(after, ref state);
	} else {
		var left = dest_val(bin_op->left, destination, ref state);
		var right;
		if(left eq destination){
			right = calc_val(bin_op->right, ref state);
		} else {
			right = dest_val(bin_op->right, destination, ref state);
		}
		print_bin_op_operator_command(destination, left, right, bin_op->op, ref state);
	}
}

def print_cmd_array(arr : ptd::arr(@nast::cmd_t), ref state : @translator::state_t) {
	var register_old = save_registers(ref state);
	fora var c (arr) {
		print_cmd(c, ref state);
	}
	restore_registers(register_old, ref state);
}

def print_try_ensure(try_ensure : @nast::try_ensure_t, is_try : @nast::bool_t, ref state : @translator::state_t) {
	match (try_ensure) case :decl(var decl) {
		print_var_decl({name => decl->name,
			type => decl->type,
			value => :none
			}, ref state);
	} case :lval(var lval) {
	} case :expr(var expr) {
	}
	
	var register_old = save_registers(ref state);
	var ov_is_register = new_register(ref state);
	
	var arg : @nlasm::reg_t;
	match (try_ensure) case :decl(var decl) {
		match (decl->value) case :value(var value) {
			arg = calc_val(value, ref state);
		} case :none {
		}
	} case :lval(var lval) {
		arg = calc_val(lval->right, ref state);
	} case :expr(var expr) {
		arg = calc_val(expr, ref state);
	}
	
	var ok_label = get_sim_label(ref state);
	
	print(ref state,
		:ov_is({
			dest => ov_is_register,
			src => arg,
			type => 'ok'
		})
	);
	print_if_goto(ok_label, ov_is_register, ref state);

	if (is_try) {
		print_safe_return(:val(arg), ref state);
	} else {
		print(ref state,
			:ov_mk({
				dest => arg,
				src => :arg(arg),
				name => 'ensure'
			})
		);
		print(ref state, :die(arg));
	}
	print_sim_label(ok_label, ref state);
	match (try_ensure) case :decl(var decl) {
		print(ref state,
			:ov_as({
				dest => get_var_register(decl->name, ref state),
				src => arg,
				type => 'ok'
			}));
	} case :lval(var lval) {
		var lvalue = get_value_of_lvalue(lval->left, 0, ref state);
		var dest = lvalue[array::len(lvalue)-1] as :value;
		print(ref state,
			:ov_as({
				dest => dest,
				src => arg,
				type => 'ok'
			}));
		set_value_of_lvalue(lvalue, 0, ref state);
	} case :expr(var expr) {
	}
	restore_registers(register_old, ref state);
}

def start_new_instruction(debug : @nast::debug_t, ref state : @translator::state_t) : ptd::void() {
	state->debug->nast_debug = debug;
	state->debug->instruction_nr++;
}

def print_cmd(cmd : @nast::cmd_t, ref state : @translator::state_t) {
	start_new_instruction(cmd->debug, ref state);
	match (cmd->cmd) case :if(var as_if) {
		print_if(as_if, false, ref state);
	} case :fora(var as_fora) {
		print_fora(as_fora, ref state);	
	} case :loop(var as_loop) {
		print_loop(as_loop, ref state);
	} case :rep(var as_rep) {
		print_rep(as_rep, ref state);
	} case :forh(var as_forh) {
		print_forh(as_forh, ref state);
	} case :while(var as_while) {
		print_while(as_while, ref state);
	} case :for(var as_for) { 
		print_for(as_for, ref state);
	} case :nop {
	} case :value(var value) {
		print_val(value, '', ref state);
	} case :block(var block) {
		print_cmd_array(block, ref state);
	} case :return(var as_return) {
		print_return(as_return, ref state);
	} case :match(var as_match) {
		print_match(as_match, ref state);
	} case :try(var as_try) {
		print_try_ensure(as_try, true, ref state);
	} case :ensure(var as_match) {
		print_try_ensure(as_match, false, ref state);
	} case :break {
		print_loop_break(ref state, state->loop_label->break);
	} case :continue {
		print_loop_break(ref state, state->loop_label->continue);
	} case :die(var value) {
		print_die(value, ref state);
	} case :var_decl(var var_decl) {
		print_var_decl(var_decl, ref state);
	} case :if_mod(var as_if_mod) {
		print_if_mod(as_if_mod, ref state);
	} case :unless_mod(var as_unless_mod) {
		print_unless_mod(as_unless_mod, ref state);
	}
}
def print_loop_break(ref state : @translator::state_t, info : @translator::loop) {
	for(var i=info->logic->register;i<state->logic->register;++i){
		undef_reg(ptd::ensure(@nlasm::reg_t, i), ref state);
	}
	print(ref state, :goto(info->label));
}

def print_if_mod(as_if_mod : ptd::rec({cond => @nast::value_t, cmd => @nast::cmd_t}), ref state : @translator::state_t) {
	var as_if = {cond => as_if_mod->cond, if => as_if_mod->cmd, elsif => [], else => {debug => as_if_mod->cmd->debug, cmd => :nop}};
	print_if(as_if, true, ref state);
}

def print_unless_mod(as_unless_mod : ptd::rec({cond => @nast::value_t, cmd => @nast::cmd_t}), ref state : @translator::state_t) {
	var as_if = {
		cond => :unary_op({val => :parenthesis(as_unless_mod->cond), op => '!'}),
		if => as_unless_mod->cmd,
		elsif => [],
		else => {debug => as_unless_mod->cmd->debug, cmd => :nop},
	};
	print_if(as_if, true, ref state);
}

def print_if(as_if : @nast::if_t, short : @boolean_t::type, ref state : @translator::state_t) {
	var register_old = save_registers(ref state);
	
	var after_all_ifs_instruction_no = get_sim_label(ref state);
	var after_if_instruction_no = get_sim_label(ref state);
	
	var neg_condition = new_register(ref state);
	var register_elsif = save_registers(ref state);
	
	print_val(as_if->cond, neg_condition, ref state);
	print(ref state,
		:una_op({
			dest => neg_condition,
			src => neg_condition,
			op => '!'
		})
	);
	restore_registers(register_elsif, ref state);
	print_if_goto(after_if_instruction_no, neg_condition, ref state);
	print_cmd(as_if->if, ref state);
	start_new_instruction(translator::last_debug_char(as_if->if->debug), ref state) unless short;
	print(ref state, :goto(after_all_ifs_instruction_no));
	print_sim_label(after_if_instruction_no, ref state);
	
	fora var else_if (as_if->elsif) {
		start_new_instruction(else_if->debug, ref state);
		after_if_instruction_no = get_sim_label(ref state);
	
		print_val(else_if->cond, neg_condition, ref state);
		print(ref state,
			:una_op({
				dest => neg_condition,
				src => neg_condition,
				op => '!'
			})
		);
		restore_registers(register_elsif, ref state);
		print_if_goto(after_if_instruction_no, neg_condition, ref state);
		print_cmd(else_if->cmd, ref state);
		start_new_instruction(translator::last_debug_char(else_if->cmd->debug), ref state);
		print(ref state, :goto(after_all_ifs_instruction_no));
		print_sim_label(after_if_instruction_no, ref state);
	}
	if (!(as_if->else->cmd is :nop)) {
		print_cmd(as_if->else, ref state);
		start_new_instruction(translator::last_debug_char(as_if->else->debug), ref state);
		print(ref state, :goto(after_all_ifs_instruction_no));
	}
		
	print_sim_label(after_all_ifs_instruction_no, ref state);
	restore_registers(register_old, ref state);
}

def print_call_base(dest : @nlasm::reg_t, fun_name : ptd::sim(), args : 
		ptd::arr(ptd::var({val => @nlasm::reg_t,ref => @nlasm::reg_t})), 
		ref state : @translator::state_t) {
	print(ref state,
		:call({
			dest => dest,
			mod => 'c_rt_lib',
			fun_name => fun_name,
			args => args
		})
	);
}
def save_loop_break(ref state : @translator::state_t, b : ptd::sim(), c : ptd::sim()) : @translator::loop_label {
	var loop_label = state->loop_label;
	var register = save_registers(ref state);
	state->loop_label->break = {label=>b, logic=>register};
	state->loop_label->continue = {label=>c, logic=>register};
	return loop_label;
}
def print_fora(as_fora : @nast::fora_t, ref state : @translator::state_t) {
	var fora_debug = state->debug->nast_debug;
	var register_old = save_registers(ref state);
	
	var arg = calc_val(as_fora->array, ref state);
	var iter_reg = print_var_decl(as_fora->iter, ref state);
	
	var after_fora_instruction_no = get_sim_label(ref state);
	var increment_instruction_no = get_sim_label(ref state);
	var condition_instruction_no = get_sim_label(ref state);
	
	var index_register = new_register(ref state);
	load_const(0, index_register, ref state);
	var one_register = new_register(ref state);
	load_const(1, one_register, ref state);
	
	var arr_size = new_register(ref state);
	print_call_base(arr_size, 'array_len', [:val(arg)], ref state);
	
	var condition_register = new_register(ref state);
	
	print_sim_label(condition_instruction_no, ref state);
	print_bin_op_operator_command(condition_register, index_register, arr_size, '>=', ref state);

	print_if_goto(after_fora_instruction_no, condition_register, ref state);
	print(ref state,
		:get_frm_idx({
			dest => iter_reg,
			src => arg,
			idx => index_register
		})
	);
	var loop_label = save_loop_break(ref state, after_fora_instruction_no, increment_instruction_no);
	print_cmd(as_fora->cmd, ref state);
	
	print_sim_label(increment_instruction_no, ref state);
	start_new_instruction(translator::last_debug_char(fora_debug), ref state) unless as_fora->short;
	print(ref state,
		:bin_op({
			dest => index_register,
			left => index_register,
			right => one_register,
			op => '+'
		}));
	print(ref state,:goto(condition_instruction_no));
	print_sim_label(after_fora_instruction_no, ref state);
	
	state->loop_label = loop_label;
	restore_registers(register_old, ref state);
}

def print_loop(as_loop : @nast::cmd_t, ref state : @translator::state_t) {
	var register_old = save_registers(ref state);
	
	var after_loop_instruction_no = get_sim_label(ref state);
	var first_instruction_no = get_sim_label(ref state);
	
	print_sim_label(first_instruction_no, ref state);
	
	var loop_label = save_loop_break(ref state, after_loop_instruction_no, first_instruction_no);
	print_cmd(as_loop, ref state);
	start_new_instruction(as_loop->debug, ref state);
	print(ref state,:goto(first_instruction_no));
	
	print_sim_label(after_loop_instruction_no, ref state);
	state->loop_label = loop_label;
	restore_registers(register_old, ref state);
}

def print_rep(as_rep : @nast::rep_t, ref state : @translator::state_t) {
	var register_old = save_registers(ref state);
	
	var after_rep_label = get_sim_label(ref state);
	var increase_index_label = get_sim_label(ref state);
	var condition_label = get_sim_label(ref state);
	
	var max_rep = calc_val(as_rep->count, ref state);
	
	var iter_register = print_var_decl(as_rep->iter, ref state);
	load_const(0, iter_register, ref state);
	var one_register = new_register(ref state);
	load_const(1, one_register, ref state);

	var condition_register = new_register(ref state);
	
	print_sim_label(condition_label, ref state);
	print_bin_op_operator_command(condition_register, iter_register, max_rep, '>=', ref state);
	print_if_goto(after_rep_label, condition_register, ref state);
	
	var loop_label = save_loop_break(ref state, after_rep_label, increase_index_label);
	print_cmd(as_rep->cmd, ref state);
	
	print_sim_label(increase_index_label, ref state);
	start_new_instruction(translator::last_debug_char(as_rep->cmd->debug), ref state) unless as_rep->short;
	print(ref state,
		:bin_op({
			dest => iter_register,
			left => iter_register,
			right => one_register,
			op => '+'
		}));
	print(ref state,:goto(condition_label));
	print_sim_label(after_rep_label, ref state);
	
	state->loop_label = loop_label;
	restore_registers(register_old, ref state);
}

def print_forh(as_forh : @nast::forh_t, ref state : @translator::state_t) {
	var forh_debug = state->debug->nast_debug;
	var register_old = save_registers(ref state);

	var after_forh_label = get_sim_label(ref state);
	var next_iterator_label = get_sim_label(ref state);
	var condition_label = get_sim_label(ref state);
	
	var hash = calc_val(as_forh->hash, ref state);
	
	var key_register = print_var_decl(as_forh->key, ref state);
	var value_register = print_var_decl(as_forh->val, ref state);
	
	var keys_arr = new_register(ref state);
	print_call_base(keys_arr, 'init_iter', [:val(hash)], ref state);
	
	print_sim_label(condition_label, ref state);
	print_call_base(key_register, 'is_end_hash', [:val(keys_arr)], ref state);
	print_if_goto(after_forh_label, key_register, ref state);
	
	print_call_base(key_register, 'get_key_iter', [:val(keys_arr)], ref state);
	print_call_base(value_register, 'hash_get_value', [:val(hash), :val(key_register)], ref state);
	
	var loop_label = save_loop_break(ref state, after_forh_label, next_iterator_label);
	print_cmd(as_forh->cmd, ref state);
	
	print_sim_label(next_iterator_label, ref state);
	start_new_instruction(translator::last_debug_char(forh_debug), ref state) unless as_forh->short;
	print_call_base(keys_arr, 'next_iter', [:val(keys_arr)], ref state);
	print(ref state,:goto(condition_label));
	
	print_sim_label(after_forh_label, ref state);
	
	state->loop_label = loop_label;
	restore_registers(register_old, ref state);
}

def print_while(as_while : @nast::while_t, ref state : @translator::state_t) {
	var register_old = save_registers(ref state);
	
	var after_l = get_sim_label(ref state);
	var condition_l = get_sim_label(ref state);
	
	var while_debug = state->debug->nast_debug;
	print_sim_label(condition_l, ref state);
	var condition = calc_val(as_while->cond, ref state);
	print(ref state,
		:una_op({
			dest => condition,
			src => condition,
			op => '!'
		})
	);
	print_if_goto(after_l, condition, ref state);
	
	var loop_label = save_loop_break(ref state, after_l, condition_l);
	print_cmd(as_while->cmd, ref state);
	start_new_instruction(translator::last_debug_char(while_debug), ref state) unless as_while->short;
	print(ref state,:goto(condition_l));
	print_sim_label(after_l, ref state);
	
	state->loop_label = loop_label;
	restore_registers(register_old, ref state);
}

def print_for(as_for : @nast::for_t, ref state : @translator::state_t) {
	var register_old = save_registers(ref state);
	
	var after_for_instruction_no = get_sim_label(ref state);
	var condition_instruction_no = get_sim_label(ref state);
	var increase_index_instruction_no = get_sim_label(ref state);
	
	match (as_for->start) case :value(var value) {
		print_val(value, '', ref state);
	} case :var_decl(var var_decl) {
		print_var_decl(var_decl, ref state);
	}
	
	print_sim_label(condition_instruction_no, ref state);
	if(!(as_for->cond is :nop)){
		var condition_register = calc_val(as_for->cond, ref state);
		print(ref state,
			:una_op({
				dest => condition_register,
				src => condition_register,
				op => '!'
			})
		);
		print_if_goto(after_for_instruction_no, condition_register, ref state);
	}
	var loop_label = save_loop_break(ref state, after_for_instruction_no, increase_index_instruction_no);
	print_cmd(as_for->cmd, ref state);
	
	print_sim_label(increase_index_instruction_no, ref state);
	print_val(as_for->iter, '', ref state);
	start_new_instruction(translator::last_debug_char(as_for->cmd->debug), ref state);
	print(ref state,:goto(condition_instruction_no));
	
	print_sim_label(after_for_instruction_no, ref state);
	
	state->loop_label = loop_label;
	restore_registers(register_old, ref state);
}

def print_match(as_match : @nast::match_t, ref state : @translator::state_t) {
	var register_old = save_registers(ref state);
	
	var case_labels : ptd::arr(ptd::sim()) = [];
	var arg : @nlasm::reg_t = calc_val(as_match->val, ref state);
	var ov_is_register = new_register(ref state);
	var end_label = get_sim_label(ref state);
	fora var case_el (as_match->branch_list) {
		start_new_instruction(case_el->debug, ref state);
		print(ref state, 
			:ov_is({
				dest => ov_is_register,
				src => arg,
				type => case_el->variant->name
			}));
		var label = get_sim_label(ref state);
		print_if_goto(label, ov_is_register, ref state);
		array::push(ref case_labels, label);
	}
	load_const('NOMATCHALERT', ov_is_register, ref state);
	print(ref state,
		:arr_decl({
			dest => ov_is_register, 
			src => [ov_is_register, arg]
		}));
	print(ref state, :die(ov_is_register));
	var i = 0;
	fora var case_el (as_match->branch_list) {
		start_new_instruction(case_el->cmd->debug, ref state);
		print_sim_label(case_labels[i], ref state);
		var register_case = save_registers(ref state);
		match (case_el->variant->value) case :value(var variant_value) {
			var var_reg = print_var_decl(variant_value, ref state);
			print(ref state, 
				:ov_as({
					dest => var_reg,
					src => arg,
					type => case_el->variant->name
				}));
		} case :none {
		}
		print_cmd(case_el->cmd, ref state);
		restore_registers(register_case, ref state);
		start_new_instruction(translator::last_debug_char(case_el->cmd->debug), ref state);
		print(ref state, :goto(end_label));
		++i;
	}
	print_sim_label(end_label, ref state);
	restore_registers(register_old, ref state);
}

def move(destination : @nlasm::reg_t, source : @nlasm::reg_t,
	ref state : @translator::state_t) {
	return if destination eq '';
	print(ref state, 
		:move({
			dest => destination,
			src => source
		}));
}

def print_bin_op_operator_command(destination : @nlasm::reg_t,
	arg_1 : @nlasm::reg_t, arg_2 : @nlasm::reg_t,
	operator : ptd::sim(), ref state : @translator::state_t) {
	if (operator eq '+' || operator eq '+=') {
		operator = '+';
	} elsif (operator eq '-' || operator eq '-=') {
		operator = '-';
	} elsif (operator eq '*' || operator eq '*=') {
		operator = '*';
	} elsif (operator eq '/' || operator eq '/=') {
		operator = '/';
	} elsif (operator eq '.' || operator eq '.=') {
		operator = '.';
	}
	print(ref state,
		:bin_op({
			dest => destination,
			left => arg_1,
			right => arg_2,
			op => operator
		}));
}

def print(ref state : @translator::state_t, ord : @nlasm::order_t){
	var cmd = {cmd=>ord, debug=>state->debug, annotation=>:none};
	array::push(ref state->result->commands, cmd);
	state->debug->declarations = {};
}

def print_if_goto(destination : ptd::sim(), reg : @nlasm::reg_t, ref state : @translator::state_t) {
	print(ref state, 
		:if_goto({
			dest => destination,
			src => reg
		})
	);
}

def print_get_from_index(destination : @nlasm::reg_t,
	label : @nlasm::reg_t, index : @nlasm::reg_t, ref state : @translator::state_t) {
	print(ref state, 
		:get_frm_idx({
			dest => destination,
			src => label,
			idx => index
		})
	);
}

def print_set_at_index(label : @nlasm::reg_t,
	index : @nlasm::reg_t, value : @nlasm::reg_t,
	ref state : @translator::state_t) {
	print(ref state, 
		:set_at_idx({
			src => label,
			idx => index,
			val => value
		}));
}

def print_get_value(destination : @nlasm::reg_t,
	label : @nlasm::reg_t, key : ptd::sim(),
	ref state : @translator::state_t) {
	print(ref state, 
		:get_val({
			dest => destination,
			src => label,
			key => key
		}));
}

def print_set_value(label : @nlasm::reg_t, key : ptd::sim(),
	value : @nlasm::reg_t, ref state : @translator::state_t) {
	print(ref state, 
		:set_val({
			src => label,
			key => key,
			val => value
		}));
}
def get_stuct_of_lvalue(ref left : @nast::value_t) : ptd::arr(ptd::var({index=>@nast::value_t, key=>ptd::sim()})) {
	var ret = [];
	while (ov::is(left, 'bin_op')) {
		var bin_op : @nast::bin_op_t = left as :bin_op;
		die unless bin_op->op eq 'ARRAY_INDEX' || bin_op->op eq '->';
		var new_ret = [];
		if(bin_op->op eq 'ARRAY_INDEX'){
			new_ret = [:index(bin_op->right)];
		}else{
			new_ret = [:key(bin_op->right as :hash_key)];
		}
		array::append(ref new_ret, ret);
		ret = new_ret;
		left = bin_op->left;
	}
	return ret;
}

def get_value_of_lvalue(left : @nast::value_t, get_value : ptd::sim(), ref state : @translator::state_t) : @translator::lvalue_values_t {
	var ret = get_stuct_of_lvalue(ref left);
	var label : ptd::sim() = left as :var;
	var temp_structures = [get_var_register(label, ref state)];
	
	var lvalue_values = [];
	rep var i (array::len(ret)) {
		array::push(ref temp_structures, new_register(ref state));
		match(ret[i]) case :index(var value) {
			var arg = calc_val(value, ref state);
			array::push(ref lvalue_values, :index({value=>temp_structures[i], index=>arg}));
			break if(get_value==0&&i==array::len(ret)-1);
			print_call_base(temp_structures[i+1], 'get_ref_arr', [:val(temp_structures[i]), :val(arg)], ref state);
		} case :key(var value) {
			array::push(ref lvalue_values, :key({value=>temp_structures[i], key=>value}));
			break if(get_value==0&&i==array::len(ret)-1);
			load_const(value, temp_structures[i+1], ref state);
			print_call_base(temp_structures[i+1], 'get_ref_hash', [:val(temp_structures[i]), :val(temp_structures[i+1])], ref state);
		}
	}
	array::push(ref lvalue_values, :value(temp_structures[array::len(temp_structures) - 1]));
	return lvalue_values;
}

def set_value_of_lvalue(lvalue_values : @translator::lvalue_values_t, get_value : ptd::sim(), ref state : @translator::state_t) {
	var register_old = save_registers(ref state);
	var list_size = array::len(lvalue_values);
	var last_reg : @nlasm::reg_t = lvalue_values[list_size - 1] as :value;
	var key_reg : @nlasm::reg_t = '';
	for (var i = list_size - 2; i >= 0; --i) {
		match(lvalue_values[i]) case :value(var reg){
			die;
		} case :index(var arr){
			if(get_value==0&&i==list_size-2) {
				print_set_at_index(arr->value, arr->index, last_reg, ref state);
			} else {
				print_call_base('', 'set_ref_arr', [:ref(arr->value), :val(arr->index), :val(last_reg)], ref state);
			}
			last_reg = arr->value;
		} case :key(var hash){
			if(get_value==0&&i==list_size-2) {
				print_set_value(hash->value, hash->key, last_reg, ref state);
			} else {
				key_reg = new_register(ref state) if(key_reg eq '');
				load_const(hash->key, key_reg, ref state);
				print_call_base('', 'set_ref_hash', [:ref(hash->value), :val(key_reg), :val(last_reg)], ref state);
			}
			last_reg = hash->value;
		}
	}
	restore_registers(register_old, ref state) if(key_reg ne '');
}

def make_string(string : @translator::string_t, ref state : @translator::state_t) : ptd::sim() { 
	var result = '';
	var index = 0;
	fora var str_line (string->arr) {
		result .= string::lf() if (index > 0);
		result .= str_line;
		++index;
	}
	match (string->last) case :new_line {
		result .= string::lf();
	} case :end {
	}
	return result;
}

def print_ternary_op(op : @nast::ternary_op_t,
	destination : @nlasm::reg_t,
	ref state : @translator::state_t) {
	die unless op->op eq '?';
	
	var end_label = get_sim_label(ref state);
	var first_label = get_sim_label(ref state);
	
	var condition = dest_val(op->fst, destination, ref state);
	
	print_if_goto(first_label, condition, ref state);
	print_val(op->thrd, destination, ref state);
	print(ref state, :goto(end_label));
	
	print_sim_label(first_label, ref state);
	print_val(op->snd, destination, ref state);
	
	print_sim_label(end_label, ref state);
}

def print_die(value : ptd::arr(@nast::value_t),
	ref state : @translator::state_t) {
	var arg = new_register(ref state);
	print_val(:arr_decl(value), arg, ref state);
	print(ref state, :die(arg));
}

def print_return(as_return : @nast::value_t, ref state : @translator::state_t) {
	var register_old = save_registers(ref state);
	var ret = :emp;
	if (!(as_return is :nop)) {
		ret = :val(calc_val(as_return, ref state));
	}
	print_safe_return(ret, ref state);
	restore_registers(register_old, ref state);
}
def print_safe_return(to_return : ptd::var({val => @nlasm::reg_t, emp => ptd::none()}), ref state : @translator::state_t) {
	var register_old = save_registers(ref state);
	var reg_size = state->logic->register;
	var return_value : @nlasm::reg_t = -1;
	var args = state->result->args_type;
	if (to_return is :val) {
		return_value = to_return as :val;
		if(return_value<array::len(args)&&args[return_value] is :ref) {
			return_value = new_register(ref state);
			move(return_value, to_return as :val, ref state);
			to_return = :val(return_value);
		}
	}
	for(var i=0;i<reg_size;++i){
		continue if(i<array::len(args)&&args[i] is :ref);
		continue if(i == return_value);
		undef_reg(ptd::ensure(@nlasm::reg_t, i), ref state);
	}
	print(ref state, :return(to_return));
	restore_registers(register_old, ref state);
}
def convert_str_to_number(str : ptd::sim()) : ptd::sim() {
	var len = string::length(str);
	if (len >= 3 && string::substr(str, 1, 1) eq 'x') {
		var ret = 0;
		for (var i = 2; i < len; ++i) {
			var cc = string::substr(str, i, 1);
			var o = string::ord(cc);
			ret = ret * 16;
			if (o >= string::ord('0') && o <= string::ord('9')) {
				ret += o - string::ord('0');
			} elsif (o >= string::ord('A') && o <= string::ord('F')) {
				ret += o - string::ord('A') + 10;
			} elsif (o >= string::ord('a') && o <= string::ord('f')) {
				ret += o - string::ord('a') + 10;
			} else {
				die;
			}
		}
		return ret;
	} elsif (len >= 2 && string::substr(str, 0, 1) eq '0' && string_utils::is_integer(str)) {
		var ret = 0;
		rep var i (len) {
			ret *= 8;
			ret += string::ord(string::substr(str, i, 1)) - string::ord('0');
		}
		return ret;
	} else {
		return str;
	}
}

def dest_val(value : @nast::value_t, destination : @nlasm::reg_t, ref state : @translator::state_t) : @nlasm::reg_t {
	if (value is :var) {
		return get_var_register(value as :var, ref state);
	}
	destination = new_register(ref state) if destination eq '';
	print_val(value, destination, ref state);
	return destination;
}
def def_val(value : @nast::value_t, first : @nlasm::reg_t, second : @nlasm::reg_t, ref state : @translator::state_t) : @nlasm::reg_t {
	first = second if first eq '';
	print_val(value, first, ref state);
	return first;
}

def calc_val(value : @nast::value_t, ref state : @translator::state_t) : @nlasm::reg_t {
	if (value is :var) {
		return get_var_register(value as :var, ref state);
	}
	var ready_value : @nlasm::reg_t = new_register(ref state);
	print_val(value, ready_value, ref state);
	return ready_value;
}

def get_var_register(label : ptd::sim(), ref state : @translator::state_t) : @nlasm::reg_t {
	return hash::get_value(state->logic->variables, label);
}

def new_declaration(fun_arg_name : ptd::sim(), ref state : @translator::state_t) : @nlasm::reg_t {
	var reg = new_register(ref state);
	hash::set_value(ref state->logic->variables, fun_arg_name, reg);
	hash::set_value(ref state->debug->declarations, fun_arg_name, reg);
	return reg;
}

def new_register(ref state : @translator::state_t) : @nlasm::reg_t {
	++state->logic->register;
	state->result->reg_size = state->logic->register
		if (state->result->reg_size < state->logic->register);
	return state->logic->register-1;
}

def save_registers(ref state : @translator::state_t) : @translator::function_logic_t {
	return state->logic;
}
def undef_reg(reg : @nlasm::reg_t, ref state : @translator::state_t){
	print(ref state, :clear(reg));
}

def restore_registers(register_old : @translator::function_logic_t,
	ref state : @translator::state_t) {
	for(var i=register_old->register;i<state->logic->register;++i){
		undef_reg(ptd::ensure(@nlasm::reg_t, i), ref state);
	}
	state->logic = register_old;
}

def print_sim_label(label : ptd::sim(), ref state : @translator::state_t) {
	print(ref state,:prt_lbl(label));
}
def get_sim_label(ref state : @translator::state_t) : ptd::sim() {
	++state->label_nr;
	return 'label_' . state->label_nr;
}
