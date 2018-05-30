use c_rt_lib;
use array;
use string;
use ptd;
use nast;
use hash;
use nlasm;
use boolean_t;
use string_utils;
sub translator::function_logic_t;
sub translator::loop;
sub translator::loop_label;
sub translator::state_t;
sub translator::string_t;
sub translator::lvalue_values_t;
sub translator::last_debug_char;
sub translator::translate;
sub translator_priv::print_fun_def;
sub translator_priv::print_array_declaration;
sub translator_priv::print_hash_declaration;
sub translator_priv::print_variant;
sub translator_priv::print_var_decl;
sub translator_priv::load_const;
sub translator::ref_rec_args_t;
sub translator_priv::print_fun_val;
sub translator_priv::print_val;
sub translator_priv::print_variable;
sub translator_priv::print_post_operator;
sub translator_priv::print_unary_op;
sub translator_priv::print_var_op;
sub translator_priv::print_bin_op;
sub translator_priv::print_cmd_array;
sub translator_priv::print_try_ensure;
sub translator_priv::start_new_instruction;
sub translator_priv::print_cmd;
sub translator_priv::print_loop_break;
sub translator_priv::print_if_mod;
sub translator_priv::print_unless_mod;
sub translator_priv::print_if;
sub translator_priv::print_call_base;
sub translator_priv::save_loop_break;
sub translator_priv::print_fora;
sub translator_priv::print_loop;
sub translator_priv::print_rep;
sub translator_priv::print_forh;
sub translator_priv::print_while;
sub translator_priv::print_for;
sub translator_priv::print_match;
sub translator_priv::move;
sub translator_priv::print_bin_op_operator_command;
sub translator_priv::print;
sub translator_priv::print_if_goto;
sub translator_priv::print_get_from_index;
sub translator_priv::print_set_at_index;
sub translator_priv::print_get_value;
sub translator_priv::print_set_value;
sub translator_priv::get_struct_of_lvalue;
sub translator_priv::get_value_of_lvalue;
sub translator_priv::set_value_of_lvalue;
sub translator_priv::make_string;
sub translator_priv::print_ternary_op;
sub translator_priv::print_die;
sub translator_priv::print_return;
sub translator_priv::print_safe_return;
sub translator_priv::convert_str_to_number;
sub translator_priv::dest_val;
sub translator_priv::def_val;
sub translator_priv::calc_val;
sub translator_priv::get_var_register;
sub translator_priv::new_declaration;
sub translator_priv::new_register;
sub translator_priv::save_registers;
sub translator_priv::undef_reg;
sub translator_priv::restore_registers;
sub translator_priv::print_sim_label;
sub translator_priv::get_sim_label;

return 1;

sub translator::__function_logic_t() {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;
#line 16
$memory_2 = ptd::sim();
#line 16
$memory_4 = ptd::sim();
#line 16
$memory_3 = ptd::hash($memory_4);
#line 16
undef($memory_4);
#line 16
$memory_1 = {register => $memory_2,variables => $memory_3,};
#line 16
undef($memory_2);
#line 16
undef($memory_3);
#line 16
$memory_0 = ptd::rec($memory_1);
#line 16
undef($memory_1);
#line 16
return $memory_0;
#line 16
undef($memory_0);
#line 16
return;
}

my $_function_logic_t;
sub translator::function_logic_t() {
	$_function_logic_t = translator::__function_logic_t() unless defined $_function_logic_t;
	return $_function_logic_t;
}

sub translator::__loop() {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;
#line 20
$memory_2 = ptd::sim();
#line 20
$memory_3 = {
	module => "translator",
	name => "function_logic_t",
};
#line 20
$memory_3 = c_rt_lib::ov_mk_arg('ref', $memory_3);
#line 20
$memory_1 = {label => $memory_2,logic => $memory_3,};
#line 20
undef($memory_2);
#line 20
undef($memory_3);
#line 20
$memory_0 = ptd::rec($memory_1);
#line 20
undef($memory_1);
#line 20
return $memory_0;
#line 20
undef($memory_0);
#line 20
return;
}

my $_loop;
sub translator::loop() {
	$_loop = translator::__loop() unless defined $_loop;
	return $_loop;
}

sub translator::__loop_label() {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;
#line 24
$memory_2 = {
	module => "translator",
	name => "loop",
};
#line 24
$memory_2 = c_rt_lib::ov_mk_arg('ref', $memory_2);
#line 24
$memory_3 = {
	module => "translator",
	name => "loop",
};
#line 24
$memory_3 = c_rt_lib::ov_mk_arg('ref', $memory_3);
#line 24
$memory_1 = {break => $memory_2,continue => $memory_3,};
#line 24
undef($memory_2);
#line 24
undef($memory_3);
#line 24
$memory_0 = ptd::rec($memory_1);
#line 24
undef($memory_1);
#line 24
return $memory_0;
#line 24
undef($memory_0);
#line 24
return;
}

my $_loop_label;
sub translator::loop_label() {
	$_loop_label = translator::__loop_label() unless defined $_loop_label;
	return $_loop_label;
}

sub translator::__state_t() {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;
#line 29
$memory_2 = ptd::sim();
#line 30
$memory_3 = {
	module => "nlasm",
	name => "debug_t",
};
#line 30
$memory_3 = c_rt_lib::ov_mk_arg('ref', $memory_3);
#line 31
$memory_4 = {
	module => "translator",
	name => "function_logic_t",
};
#line 31
$memory_4 = c_rt_lib::ov_mk_arg('ref', $memory_4);
#line 32
$memory_5 = ptd::sim();
#line 33
$memory_6 = {
	module => "nlasm",
	name => "function_t",
};
#line 33
$memory_6 = c_rt_lib::ov_mk_arg('ref', $memory_6);
#line 34
$memory_7 = {
	module => "translator",
	name => "loop_label",
};
#line 34
$memory_7 = c_rt_lib::ov_mk_arg('ref', $memory_7);
#line 34
$memory_1 = {label_nr => $memory_2,debug => $memory_3,logic => $memory_4,module_name => $memory_5,result => $memory_6,loop_label => $memory_7,};
#line 34
undef($memory_2);
#line 34
undef($memory_3);
#line 34
undef($memory_4);
#line 34
undef($memory_5);
#line 34
undef($memory_6);
#line 34
undef($memory_7);
#line 34
$memory_0 = ptd::rec($memory_1);
#line 34
undef($memory_1);
#line 34
return $memory_0;
#line 34
undef($memory_0);
#line 34
return;
}

my $_state_t;
sub translator::state_t() {
	$_state_t = translator::__state_t() unless defined $_state_t;
	return $_state_t;
}

sub translator::__string_t() {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;
#line 39
$memory_3 = ptd::sim();
#line 39
$memory_2 = ptd::arr($memory_3);
#line 39
undef($memory_3);
#line 39
$memory_5 = ptd::none();
#line 39
$memory_6 = ptd::none();
#line 39
$memory_4 = {end => $memory_5,new_line => $memory_6,};
#line 39
undef($memory_5);
#line 39
undef($memory_6);
#line 39
$memory_3 = ptd::var($memory_4);
#line 39
undef($memory_4);
#line 39
$memory_1 = {arr => $memory_2,last => $memory_3,};
#line 39
undef($memory_2);
#line 39
undef($memory_3);
#line 39
$memory_0 = ptd::rec($memory_1);
#line 39
undef($memory_1);
#line 39
return $memory_0;
#line 39
undef($memory_0);
#line 39
return;
}

my $_string_t;
sub translator::string_t() {
	$_string_t = translator::__string_t() unless defined $_string_t;
	return $_string_t;
}

sub translator::__lvalue_values_t() {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;
#line 44
$memory_3 = {
	module => "nlasm",
	name => "reg_t",
};
#line 44
$memory_3 = c_rt_lib::ov_mk_arg('ref', $memory_3);
#line 45
$memory_6 = {
	module => "nlasm",
	name => "reg_t",
};
#line 45
$memory_6 = c_rt_lib::ov_mk_arg('ref', $memory_6);
#line 45
$memory_7 = {
	module => "nlasm",
	name => "reg_t",
};
#line 45
$memory_7 = c_rt_lib::ov_mk_arg('ref', $memory_7);
#line 45
$memory_5 = {value => $memory_6,index => $memory_7,};
#line 45
undef($memory_6);
#line 45
undef($memory_7);
#line 45
$memory_4 = ptd::rec($memory_5);
#line 45
undef($memory_5);
#line 46
$memory_7 = {
	module => "nlasm",
	name => "reg_t",
};
#line 46
$memory_7 = c_rt_lib::ov_mk_arg('ref', $memory_7);
#line 46
$memory_8 = ptd::sim();
#line 46
$memory_6 = {value => $memory_7,key => $memory_8,};
#line 46
undef($memory_7);
#line 46
undef($memory_8);
#line 46
$memory_5 = ptd::rec($memory_6);
#line 46
undef($memory_6);
#line 47
$memory_8 = {
	module => "nlasm",
	name => "reg_t",
};
#line 47
$memory_8 = c_rt_lib::ov_mk_arg('ref', $memory_8);
#line 47
$memory_9 = {
	module => "nlasm",
	name => "reg_t",
};
#line 47
$memory_9 = c_rt_lib::ov_mk_arg('ref', $memory_9);
#line 47
$memory_7 = {value => $memory_8,key => $memory_9,};
#line 47
undef($memory_8);
#line 47
undef($memory_9);
#line 47
$memory_6 = ptd::rec($memory_7);
#line 47
undef($memory_7);
#line 47
$memory_2 = {value => $memory_3,index => $memory_4,key => $memory_5,hashkey => $memory_6,};
#line 47
undef($memory_3);
#line 47
undef($memory_4);
#line 47
undef($memory_5);
#line 47
undef($memory_6);
#line 47
$memory_1 = ptd::var($memory_2);
#line 47
undef($memory_2);
#line 47
$memory_0 = ptd::arr($memory_1);
#line 47
undef($memory_1);
#line 47
return $memory_0;
#line 47
undef($memory_0);
#line 47
return;
}

my $_lvalue_values_t;
sub translator::lvalue_values_t() {
	$_lvalue_values_t = translator::__lvalue_values_t() unless defined $_lvalue_values_t;
	return $_lvalue_values_t;
}

sub translator::last_debug_char($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;$memory_0 = $_[0];
#line 52
$memory_2 = $memory_0->{'end'};
#line 52
$memory_2 = $memory_2->{'line'};
#line 52
$memory_3 = $memory_0->{'end'};
#line 52
$memory_3 = $memory_3->{'position'};
#line 52
$memory_4 = 1;
#line 52
$memory_3 = $memory_3 - $memory_4;
#line 52
undef($memory_4);
#line 52
$memory_1 = {line => $memory_2,position => $memory_3,};
#line 52
undef($memory_2);
#line 52
undef($memory_3);
#line 53
$memory_3 = $memory_0->{'end'};
#line 53
$memory_3 = $memory_3->{'line'};
#line 53
$memory_4 = $memory_0->{'end'};
#line 53
$memory_4 = $memory_4->{'position'};
#line 53
$memory_2 = {line => $memory_3,position => $memory_4,};
#line 53
undef($memory_3);
#line 53
undef($memory_4);
#line 54
$memory_3 = {begin => $memory_1,end => $memory_2,};
#line 54
undef($memory_0);
#line 54
undef($memory_1);
#line 54
undef($memory_2);
#line 54
return $memory_3;
#line 54
undef($memory_3);
#line 54
undef($memory_1);
#line 54
undef($memory_2);
#line 54
undef($memory_0);
#line 54
return;
}

sub translator::translate($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;my $memory_13;my $memory_14;my $memory_15;my $memory_16;my $memory_17;my $memory_18;my $memory_19;$memory_0 = $_[0];
#line 58
$memory_2 = $memory_0->{'name'};
#line 58
$memory_3 = [];
#line 58
$memory_4 = [];
#line 58
$memory_1 = {module_name => $memory_2,functions => $memory_3,imports => $memory_4,};
#line 58
undef($memory_2);
#line 58
undef($memory_3);
#line 58
undef($memory_4);
#line 59
$memory_2 = [];
#line 59
$memory_3 = $memory_2;
#line 59
 if (c_rt_lib::get_hashcount($memory_1) > 1) {$memory_1 = {%{$memory_1}};}$memory_1->{'imports'} = $memory_3;
#line 59
undef($memory_2);
#line 59
undef($memory_3);
#line 60
$memory_2 = $memory_0->{'import'};
#line 60
$memory_4 = 0;
#line 60
$memory_5 = 1;
#line 60
$memory_6 = c_rt_lib::array_len($memory_2);
#line 60
label_16:
#line 60
$memory_7 = c_rt_lib::to_nl($memory_4 >= $memory_6);
#line 60
if (c_rt_lib::check_true($memory_7)) {goto label_31;}
#line 60
$memory_3 = $memory_2->[$memory_4];
#line 61
$memory_8 = "imports";
#line 61
$memory_8 = c_rt_lib::get_ref_hash($memory_1, $memory_8);
#line 61
$memory_9 = $memory_3->{'name'};
#line 61
array::push($memory_8, $memory_9);
#line 61
undef($memory_9);
#line 61
$memory_9 = "imports";
#line 61
c_rt_lib::set_ref_hash($memory_1, $memory_9, $memory_8);
#line 61
undef($memory_9);
#line 61
undef($memory_8);
#line 62
$memory_4 = $memory_4 + $memory_5;
#line 62
goto label_16;
#line 62
label_31:
#line 62
undef($memory_2);
#line 62
undef($memory_3);
#line 62
undef($memory_4);
#line 62
undef($memory_5);
#line 62
undef($memory_6);
#line 62
undef($memory_7);
#line 63
$memory_2 = $memory_0->{'fun_def'};
#line 63
$memory_4 = 0;
#line 63
$memory_5 = 1;
#line 63
$memory_6 = c_rt_lib::array_len($memory_2);
#line 63
label_42:
#line 63
$memory_7 = c_rt_lib::to_nl($memory_4 >= $memory_6);
#line 63
if (c_rt_lib::check_true($memory_7)) {goto label_96;}
#line 63
$memory_3 = $memory_2->[$memory_4];
#line 64
$memory_9 = {};
#line 64
$memory_10 = 0;
#line 64
$memory_8 = {variables => $memory_9,register => $memory_10,};
#line 64
undef($memory_9);
#line 64
undef($memory_10);
#line 66
$memory_10 = 0;
#line 67
$memory_11 = nlasm::empty_debug();
#line 68
$memory_12 = $memory_0->{'name'};
#line 71
$memory_14 = c_rt_lib::ov_mk_none('none');
#line 72
$memory_15 = $memory_3->{'access'};
#line 73
$memory_16 = 0;
#line 74
$memory_17 = [];
#line 75
$memory_18 = [];
#line 76
$memory_19 = $memory_3->{'name'};
#line 76
$memory_13 = {annotation => $memory_14,access => $memory_15,reg_size => $memory_16,args_type => $memory_17,commands => $memory_18,name => $memory_19,};
#line 76
undef($memory_14);
#line 76
undef($memory_15);
#line 76
undef($memory_16);
#line 76
undef($memory_17);
#line 76
undef($memory_18);
#line 76
undef($memory_19);
#line 78
$memory_16 = "";
#line 78
$memory_15 = {label => $memory_16,logic => $memory_8,};
#line 78
undef($memory_16);
#line 78
$memory_17 = "";
#line 78
$memory_16 = {label => $memory_17,logic => $memory_8,};
#line 78
undef($memory_17);
#line 78
$memory_14 = {break => $memory_15,continue => $memory_16,};
#line 78
undef($memory_15);
#line 78
undef($memory_16);
#line 78
$memory_9 = {label_nr => $memory_10,debug => $memory_11,module_name => $memory_12,logic => $memory_8,result => $memory_13,loop_label => $memory_14,};
#line 78
undef($memory_10);
#line 78
undef($memory_11);
#line 78
undef($memory_12);
#line 78
undef($memory_13);
#line 78
undef($memory_14);
#line 80
translator_priv::print_fun_def($memory_3, $memory_9);
#line 81
$memory_10 = "functions";
#line 81
$memory_10 = c_rt_lib::get_ref_hash($memory_1, $memory_10);
#line 81
$memory_11 = $memory_9->{'result'};
#line 81
array::push($memory_10, $memory_11);
#line 81
undef($memory_11);
#line 81
$memory_11 = "functions";
#line 81
c_rt_lib::set_ref_hash($memory_1, $memory_11, $memory_10);
#line 81
undef($memory_11);
#line 81
undef($memory_10);
#line 81
undef($memory_8);
#line 81
undef($memory_9);
#line 82
$memory_4 = $memory_4 + $memory_5;
#line 82
goto label_42;
#line 82
label_96:
#line 82
undef($memory_2);
#line 82
undef($memory_3);
#line 82
undef($memory_4);
#line 82
undef($memory_5);
#line 82
undef($memory_6);
#line 82
undef($memory_7);
#line 83
undef($memory_0);
#line 83
return $memory_1;
#line 83
undef($memory_1);
#line 83
undef($memory_0);
#line 83
return;
}

sub translator_priv::print_fun_def($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;$memory_0 = $_[0];$memory_1 = $_[1];Scalar::Util::weaken($_[1]) if ref($_[1]);
#line 87
$memory_2 = $memory_0->{'args'};
#line 87
$memory_4 = 0;
#line 87
$memory_5 = 1;
#line 87
$memory_6 = c_rt_lib::array_len($memory_2);
#line 87
label_4:
#line 87
$memory_7 = c_rt_lib::to_nl($memory_4 >= $memory_6);
#line 87
if (c_rt_lib::check_true($memory_7)) {goto label_59;}
#line 87
$memory_3 = $memory_2->[$memory_4];
#line 88
$memory_8 = $memory_3->{'mod'};
#line 88
$memory_9 = c_rt_lib::ov_is($memory_8, 'none');
#line 88
if (c_rt_lib::check_true($memory_9)) {goto label_16;}
#line 91
$memory_9 = c_rt_lib::ov_is($memory_8, 'ref');
#line 91
if (c_rt_lib::check_true($memory_9)) {goto label_35;}
#line 91
$memory_9 = "NOMATCHALERT";
#line 91
$memory_9 = [$memory_9,$memory_8];
#line 91
die(dfile::ssave($memory_9));
#line 88
label_16:
#line 89
$memory_10 = $memory_3->{'name'};
#line 89
translator_priv::new_declaration($memory_10, $memory_1);
#line 89
undef($memory_10);
#line 90
$memory_10 = "result";
#line 90
$memory_10 = c_rt_lib::get_ref_hash($memory_1, $memory_10);
#line 90
$memory_11 = "args_type";
#line 90
$memory_11 = c_rt_lib::get_ref_hash($memory_10, $memory_11);
#line 90
$memory_12 = c_rt_lib::ov_mk_none('val');
#line 90
array::push($memory_11, $memory_12);
#line 90
undef($memory_12);
#line 90
$memory_12 = "args_type";
#line 90
c_rt_lib::set_ref_hash($memory_10, $memory_12, $memory_11);
#line 90
$memory_12 = "result";
#line 90
c_rt_lib::set_ref_hash($memory_1, $memory_12, $memory_10);
#line 90
undef($memory_12);
#line 90
undef($memory_10);
#line 90
undef($memory_11);
#line 91
goto label_54;
#line 91
label_35:
#line 92
$memory_10 = $memory_3->{'name'};
#line 92
translator_priv::new_declaration($memory_10, $memory_1);
#line 92
undef($memory_10);
#line 93
$memory_10 = "result";
#line 93
$memory_10 = c_rt_lib::get_ref_hash($memory_1, $memory_10);
#line 93
$memory_11 = "args_type";
#line 93
$memory_11 = c_rt_lib::get_ref_hash($memory_10, $memory_11);
#line 93
$memory_12 = c_rt_lib::ov_mk_none('ref');
#line 93
array::push($memory_11, $memory_12);
#line 93
undef($memory_12);
#line 93
$memory_12 = "args_type";
#line 93
c_rt_lib::set_ref_hash($memory_10, $memory_12, $memory_11);
#line 93
$memory_12 = "result";
#line 93
c_rt_lib::set_ref_hash($memory_1, $memory_12, $memory_10);
#line 93
undef($memory_12);
#line 93
undef($memory_10);
#line 93
undef($memory_11);
#line 94
goto label_54;
#line 94
label_54:
#line 94
undef($memory_8);
#line 94
undef($memory_9);
#line 95
$memory_4 = $memory_4 + $memory_5;
#line 95
goto label_4;
#line 95
label_59:
#line 95
undef($memory_2);
#line 95
undef($memory_3);
#line 95
undef($memory_4);
#line 95
undef($memory_5);
#line 95
undef($memory_6);
#line 95
undef($memory_7);
#line 96
$memory_2 = $memory_0->{'cmd'};
#line 96
translator_priv::print_cmd($memory_2, $memory_1);
#line 96
undef($memory_2);
#line 97
$memory_4 = $memory_0->{'cmd'};
#line 97
$memory_4 = $memory_4->{'debug'};
#line 97
$memory_4 = $memory_4->{'end'};
#line 97
$memory_5 = $memory_0->{'cmd'};
#line 97
$memory_5 = $memory_5->{'debug'};
#line 97
$memory_5 = $memory_5->{'end'};
#line 97
$memory_3 = {begin => $memory_4,end => $memory_5,};
#line 97
undef($memory_4);
#line 97
undef($memory_5);
#line 97
$memory_4 = c_rt_lib::ov_mk_none('nop');
#line 97
$memory_2 = {debug => $memory_3,value => $memory_4,};
#line 97
undef($memory_3);
#line 97
undef($memory_4);
#line 97
translator_priv::print_return($memory_2, $memory_1);
#line 97
undef($memory_2);
#line 97
undef($memory_0);
#line 97
$_[1] = $memory_1;return;
$_[1] = $memory_1;}

sub translator_priv::print_array_declaration($$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;$memory_0 = $_[0];$memory_1 = $_[1];$memory_2 = $_[2];Scalar::Util::weaken($_[2]) if ref($_[2]);
#line 102
$memory_3 = [];
#line 103
$memory_5 = 0;
#line 103
$memory_6 = 1;
#line 103
$memory_7 = c_rt_lib::array_len($memory_0);
#line 103
label_4:
#line 103
$memory_8 = c_rt_lib::to_nl($memory_5 >= $memory_7);
#line 103
if (c_rt_lib::check_true($memory_8)) {goto label_13;}
#line 103
$memory_4 = $memory_0->[$memory_5];
#line 104
$memory_9 = translator_priv::calc_val($memory_4, $memory_2);
#line 104
array::push($memory_3, $memory_9);
#line 104
undef($memory_9);
#line 105
$memory_5 = $memory_5 + $memory_6;
#line 105
goto label_4;
#line 105
label_13:
#line 105
undef($memory_4);
#line 105
undef($memory_5);
#line 105
undef($memory_6);
#line 105
undef($memory_7);
#line 105
undef($memory_8);
#line 106
$memory_4 = {dest => $memory_1,src => $memory_3,};
#line 106
$memory_4 = c_rt_lib::ov_mk_arg('arr_decl', $memory_4);
#line 106
translator_priv::print($memory_2, $memory_4);
#line 106
undef($memory_4);
#line 106
undef($memory_3);
#line 106
undef($memory_0);
#line 106
undef($memory_1);
#line 106
$_[2] = $memory_2;return;
$_[2] = $memory_2;}

sub translator_priv::print_hash_declaration($$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;$memory_0 = $_[0];$memory_1 = $_[1];$memory_2 = $_[2];Scalar::Util::weaken($_[2]) if ref($_[2]);
#line 111
$memory_3 = [];
#line 112
$memory_5 = 0;
#line 112
$memory_6 = 1;
#line 112
$memory_7 = c_rt_lib::array_len($memory_0);
#line 112
label_4:
#line 112
$memory_8 = c_rt_lib::to_nl($memory_5 >= $memory_7);
#line 112
if (c_rt_lib::check_true($memory_8)) {goto label_21;}
#line 112
$memory_4 = $memory_0->[$memory_5];
#line 113
$memory_10 = $memory_4->{'key'};
#line 113
$memory_10 = $memory_10->{'value'};
#line 113
$memory_10 = c_rt_lib::ov_as($memory_10, 'hash_key');
#line 113
$memory_12 = $memory_4->{'val'};
#line 113
$memory_11 = translator_priv::calc_val($memory_12, $memory_2);
#line 113
undef($memory_12);
#line 113
$memory_9 = {key => $memory_10,val => $memory_11,};
#line 113
undef($memory_10);
#line 113
undef($memory_11);
#line 113
array::push($memory_3, $memory_9);
#line 113
undef($memory_9);
#line 114
$memory_5 = $memory_5 + $memory_6;
#line 114
goto label_4;
#line 114
label_21:
#line 114
undef($memory_4);
#line 114
undef($memory_5);
#line 114
undef($memory_6);
#line 114
undef($memory_7);
#line 114
undef($memory_8);
#line 115
$memory_4 = {dest => $memory_1,src => $memory_3,};
#line 115
$memory_4 = c_rt_lib::ov_mk_arg('hash_decl', $memory_4);
#line 115
translator_priv::print($memory_2, $memory_4);
#line 115
undef($memory_4);
#line 115
undef($memory_3);
#line 115
undef($memory_0);
#line 115
undef($memory_1);
#line 115
$_[2] = $memory_2;return;
$_[2] = $memory_2;}

sub translator_priv::print_variant($$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;$memory_0 = $_[0];$memory_1 = $_[1];$memory_2 = $_[2];Scalar::Util::weaken($_[2]) if ref($_[2]);
#line 119
$memory_3 = c_rt_lib::ov_mk_none('emp');
#line 120
$memory_4 = $memory_0->{'var'};
#line 120
$memory_4 = $memory_4->{'value'};
#line 120
$memory_4 = c_rt_lib::ov_is($memory_4, 'nop');
#line 120
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 120
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 120
if (c_rt_lib::check_true($memory_4)) {goto label_14;}
#line 121
$memory_6 = $memory_0->{'var'};
#line 121
$memory_5 = translator_priv::dest_val($memory_6, $memory_1, $memory_2);
#line 121
undef($memory_6);
#line 121
$memory_5 = c_rt_lib::ov_mk_arg('arg', $memory_5);
#line 121
$memory_3 = $memory_5;
#line 121
undef($memory_5);
#line 122
goto label_14;
#line 122
label_14:
#line 122
undef($memory_4);
#line 123
$memory_5 = $memory_0->{'name'};
#line 123
$memory_4 = {dest => $memory_1,src => $memory_3,name => $memory_5,};
#line 123
undef($memory_5);
#line 123
$memory_4 = c_rt_lib::ov_mk_arg('ov_mk', $memory_4);
#line 123
translator_priv::print($memory_2, $memory_4);
#line 123
undef($memory_4);
#line 123
undef($memory_3);
#line 123
undef($memory_0);
#line 123
undef($memory_1);
#line 123
$_[2] = $memory_2;return;
$_[2] = $memory_2;}

sub translator_priv::print_var_decl($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;$memory_0 = $_[0];$memory_1 = $_[1];Scalar::Util::weaken($_[1]) if ref($_[1]);
#line 127
$memory_3 = $memory_0->{'name'};
#line 127
$memory_2 = translator_priv::new_declaration($memory_3, $memory_1);
#line 127
undef($memory_3);
#line 128
$memory_3 = $memory_0->{'value'};
#line 128
$memory_4 = c_rt_lib::ov_is($memory_3, 'none');
#line 128
if (c_rt_lib::check_true($memory_4)) {goto label_11;}
#line 129
$memory_4 = c_rt_lib::ov_is($memory_3, 'value');
#line 129
if (c_rt_lib::check_true($memory_4)) {goto label_13;}
#line 129
$memory_4 = "NOMATCHALERT";
#line 129
$memory_4 = [$memory_4,$memory_3];
#line 129
die(dfile::ssave($memory_4));
#line 128
label_11:
#line 129
goto label_18;
#line 129
label_13:
#line 129
$memory_5 = c_rt_lib::ov_as($memory_3, 'value');
#line 130
translator_priv::print_val($memory_5, $memory_2, $memory_1);
#line 130
undef($memory_5);
#line 131
goto label_18;
#line 131
label_18:
#line 131
undef($memory_3);
#line 131
undef($memory_4);
#line 132
undef($memory_0);
#line 132
$_[1] = $memory_1;return $memory_2;
#line 132
undef($memory_2);
#line 132
undef($memory_0);
#line 132
$_[1] = $memory_1;return;
$_[1] = $memory_1;}

sub translator_priv::load_const($$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;$memory_0 = $_[0];$memory_1 = $_[1];$memory_2 = $_[2];Scalar::Util::weaken($_[2]) if ref($_[2]);
#line 136
$memory_3 = {dest => $memory_1,val => $memory_0,};
#line 136
$memory_3 = c_rt_lib::ov_mk_arg('load_const', $memory_3);
#line 136
translator_priv::print($memory_2, $memory_3);
#line 136
undef($memory_3);
#line 136
undef($memory_0);
#line 136
undef($memory_1);
#line 136
$_[2] = $memory_2;return;
$_[2] = $memory_2;}

sub translator::__ref_rec_args_t() {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;
#line 140
$memory_3 = ptd::sim();
#line 140
$memory_4 = ptd::sim();
#line 140
$memory_5 = ptd::sim();
#line 140
$memory_2 = {var_name => $memory_3,list_name => $memory_4,lvalue_var_name => $memory_5,};
#line 140
undef($memory_3);
#line 140
undef($memory_4);
#line 140
undef($memory_5);
#line 140
$memory_1 = ptd::rec($memory_2);
#line 140
undef($memory_2);
#line 140
$memory_0 = ptd::arr($memory_1);
#line 140
undef($memory_1);
#line 140
return $memory_0;
#line 140
undef($memory_0);
#line 140
return;
}

my $_ref_rec_args_t;
sub translator::ref_rec_args_t() {
	$_ref_rec_args_t = translator::__ref_rec_args_t() unless defined $_ref_rec_args_t;
	return $_ref_rec_args_t;
}

sub translator_priv::print_fun_val($$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;my $memory_13;my $memory_14;my $memory_15;my $memory_16;my $memory_17;my $memory_18;my $memory_19;$memory_0 = $_[0];$memory_1 = $_[1];$memory_2 = $_[2];Scalar::Util::weaken($_[2]) if ref($_[2]);
#line 144
$memory_3 = [];
#line 145
$memory_4 = {};
#line 146
$memory_5 = {};
#line 147
$memory_6 = {};
#line 148
$memory_8 = $memory_0->{'args'};
#line 148
$memory_7 = array::len($memory_8);
#line 148
undef($memory_8);
#line 148
$memory_8 = 1;
#line 148
$memory_7 = $memory_7 - $memory_8;
#line 148
undef($memory_8);
#line 148
label_10:
#line 148
$memory_8 = 0;
#line 148
$memory_8 = c_rt_lib::to_nl($memory_7 >= $memory_8);
#line 148
$memory_8 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 148
if (c_rt_lib::check_true($memory_8)) {goto label_58;}
#line 149
$memory_9 = $memory_0->{'args'};
#line 149
$memory_9 = $memory_9->[$memory_7];
#line 149
$memory_9 = $memory_9->{'mod'};
#line 149
$memory_9 = c_rt_lib::ov_is($memory_9, 'ref');
#line 149
$memory_9 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_9));
#line 149
$memory_9 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_9));
#line 149
if (c_rt_lib::check_true($memory_9)) {goto label_25;}
#line 149
undef($memory_9);
#line 149
goto label_53;
#line 149
goto label_25;
#line 149
label_25:
#line 149
undef($memory_9);
#line 150
$memory_9 = $memory_0->{'args'};
#line 150
$memory_9 = $memory_9->[$memory_7];
#line 150
$memory_9 = $memory_9->{'val'};
#line 151
translator_priv::get_struct_of_lvalue($memory_9);
#line 152
$memory_11 = $memory_9->{'value'};
#line 152
$memory_11 = c_rt_lib::ov_as($memory_11, 'var');
#line 152
$memory_10 = hash::has_key($memory_6, $memory_11);
#line 152
undef($memory_11);
#line 152
$memory_10 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_10));
#line 152
if (c_rt_lib::check_true($memory_10)) {goto label_41;}
#line 152
undef($memory_9);
#line 152
undef($memory_10);
#line 152
goto label_53;
#line 152
goto label_41;
#line 152
label_41:
#line 152
undef($memory_10);
#line 153
$memory_10 = $memory_9->{'value'};
#line 153
$memory_10 = c_rt_lib::ov_as($memory_10, 'var');
#line 153
$memory_11 = 0;
#line 153
hash::set_value($memory_6, $memory_10, $memory_11);
#line 153
undef($memory_11);
#line 153
undef($memory_10);
#line 154
$memory_10 = 0;
#line 154
hash::set_value($memory_5, $memory_7, $memory_10);
#line 154
undef($memory_10);
#line 154
undef($memory_9);
#line 154
label_53:
#line 148
$memory_9 = 1;
#line 148
$memory_7 = $memory_7 - $memory_9;
#line 148
undef($memory_9);
#line 155
goto label_10;
#line 155
label_58:
#line 155
undef($memory_7);
#line 155
undef($memory_8);
#line 156
$memory_7 = [];
#line 157
$memory_9 = $memory_0->{'args'};
#line 157
$memory_8 = array::len($memory_9);
#line 157
undef($memory_9);
#line 157
$memory_9 = 0;
#line 157
$memory_10 = 1;
#line 157
label_67:
#line 157
$memory_11 = c_rt_lib::to_nl($memory_9 >= $memory_8);
#line 157
if (c_rt_lib::check_true($memory_11)) {goto label_133;}
#line 158
$memory_12 = $memory_0->{'args'};
#line 158
$memory_12 = $memory_12->[$memory_9];
#line 159
$memory_13 = $memory_12->{'mod'};
#line 159
$memory_14 = c_rt_lib::ov_is($memory_13, 'none');
#line 159
if (c_rt_lib::check_true($memory_14)) {goto label_80;}
#line 161
$memory_14 = c_rt_lib::ov_is($memory_13, 'ref');
#line 161
if (c_rt_lib::check_true($memory_14)) {goto label_88;}
#line 161
$memory_14 = "NOMATCHALERT";
#line 161
$memory_14 = [$memory_14,$memory_13];
#line 161
die(dfile::ssave($memory_14));
#line 159
label_80:
#line 160
$memory_16 = $memory_12->{'val'};
#line 160
$memory_15 = translator_priv::calc_val($memory_16, $memory_2);
#line 160
undef($memory_16);
#line 160
$memory_15 = c_rt_lib::ov_mk_arg('val', $memory_15);
#line 160
array::push($memory_3, $memory_15);
#line 160
undef($memory_15);
#line 161
goto label_124;
#line 161
label_88:
#line 162
$memory_15 = hash::has_key($memory_5, $memory_9);
#line 162
$memory_15 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_15));
#line 162
if (c_rt_lib::check_true($memory_15)) {goto label_111;}
#line 163
$memory_17 = $memory_12->{'val'};
#line 163
$memory_18 = c_rt_lib::to_nl(1);
#line 163
$memory_16 = translator_priv::get_value_of_lvalue($memory_17, $memory_18, $memory_2);
#line 163
undef($memory_18);
#line 163
undef($memory_17);
#line 164
$memory_18 = array::len($memory_16);
#line 164
$memory_19 = 1;
#line 164
$memory_18 = $memory_18 - $memory_19;
#line 164
undef($memory_19);
#line 164
$memory_17 = $memory_16->[$memory_18];
#line 164
undef($memory_18);
#line 164
$memory_17 = c_rt_lib::ov_as($memory_17, 'value');
#line 165
$memory_18 = c_rt_lib::ov_mk_arg('ref', $memory_17);
#line 165
array::push($memory_3, $memory_18);
#line 165
undef($memory_18);
#line 166
hash::set_value($memory_4, $memory_9, $memory_16);
#line 166
undef($memory_16);
#line 166
undef($memory_17);
#line 167
goto label_121;
#line 167
label_111:
#line 168
$memory_16 = translator_priv::new_register($memory_2);
#line 169
$memory_17 = $memory_12->{'val'};
#line 169
translator_priv::print_val($memory_17, $memory_16, $memory_2);
#line 169
undef($memory_17);
#line 170
$memory_17 = c_rt_lib::ov_mk_arg('ref', $memory_16);
#line 170
array::push($memory_3, $memory_17);
#line 170
undef($memory_17);
#line 170
undef($memory_16);
#line 171
goto label_121;
#line 171
label_121:
#line 171
undef($memory_15);
#line 172
goto label_124;
#line 172
label_124:
#line 172
undef($memory_13);
#line 172
undef($memory_14);
#line 173
$memory_13 = translator_priv::save_registers($memory_2);
#line 173
array::push($memory_7, $memory_13);
#line 173
undef($memory_13);
#line 173
undef($memory_12);
#line 174
$memory_9 = $memory_9 + $memory_10;
#line 174
goto label_67;
#line 174
label_133:
#line 174
undef($memory_8);
#line 174
undef($memory_9);
#line 174
undef($memory_10);
#line 174
undef($memory_11);
#line 175
$memory_9 = $memory_0->{'module'};
#line 175
$memory_10 = $memory_0->{'name'};
#line 175
$memory_8 = {dest => $memory_1,mod => $memory_9,fun_name => $memory_10,args => $memory_3,};
#line 175
undef($memory_9);
#line 175
undef($memory_10);
#line 175
$memory_8 = c_rt_lib::ov_mk_arg('call', $memory_8);
#line 175
translator_priv::print($memory_2, $memory_8);
#line 175
undef($memory_8);
#line 176
$memory_8 = array::len($memory_7);
#line 176
$memory_9 = 1;
#line 176
$memory_8 = $memory_8 - $memory_9;
#line 176
undef($memory_9);
#line 176
label_150:
#line 176
$memory_9 = 0;
#line 176
$memory_9 = c_rt_lib::to_nl($memory_8 >= $memory_9);
#line 176
$memory_9 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_9));
#line 176
if (c_rt_lib::check_true($memory_9)) {goto label_177;}
#line 177
$memory_10 = $memory_7->[$memory_8];
#line 177
translator_priv::restore_registers($memory_10, $memory_2);
#line 177
undef($memory_10);
#line 178
$memory_10 = hash::has_key($memory_4, $memory_8);
#line 178
$memory_10 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_10));
#line 178
$memory_10 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_10));
#line 178
if (c_rt_lib::check_true($memory_10)) {goto label_165;}
#line 178
undef($memory_10);
#line 178
goto label_172;
#line 178
goto label_165;
#line 178
label_165:
#line 178
undef($memory_10);
#line 179
$memory_10 = hash::get_value($memory_4, $memory_8);
#line 179
$memory_11 = c_rt_lib::to_nl(1);
#line 179
translator_priv::set_value_of_lvalue($memory_10, $memory_11, $memory_2);
#line 179
undef($memory_11);
#line 179
undef($memory_10);
#line 179
label_172:
#line 176
$memory_10 = 1;
#line 176
$memory_8 = $memory_8 - $memory_10;
#line 176
undef($memory_10);
#line 180
goto label_150;
#line 180
label_177:
#line 180
undef($memory_8);
#line 180
undef($memory_9);
#line 180
undef($memory_3);
#line 180
undef($memory_4);
#line 180
undef($memory_5);
#line 180
undef($memory_6);
#line 180
undef($memory_7);
#line 180
undef($memory_0);
#line 180
undef($memory_1);
#line 180
$_[2] = $memory_2;return;
$_[2] = $memory_2;}

sub translator_priv::print_val($$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;$memory_0 = $_[0];$memory_1 = $_[1];$memory_2 = $_[2];Scalar::Util::weaken($_[2]) if ref($_[2]);
#line 184
$memory_3 = $memory_0->{'debug'};
#line 184
$memory_4 = "debug";
#line 184
$memory_4 = c_rt_lib::get_ref_hash($memory_2, $memory_4);
#line 184
$memory_5 = $memory_3;
#line 184
 if (c_rt_lib::get_hashcount($memory_4) > 1) {$memory_4 = {%{$memory_4}};}$memory_4->{'nast_debug'} = $memory_5;
#line 184
$memory_6 = "debug";
#line 184
c_rt_lib::set_ref_hash($memory_2, $memory_6, $memory_4);
#line 184
undef($memory_6);
#line 184
undef($memory_3);
#line 184
undef($memory_4);
#line 184
undef($memory_5);
#line 185
$memory_3 = translator_priv::save_registers($memory_2);
#line 186
$memory_4 = $memory_0->{'value'};
#line 186
$memory_5 = c_rt_lib::ov_is($memory_4, 'const');
#line 186
if (c_rt_lib::check_true($memory_5)) {goto label_50;}
#line 188
$memory_5 = c_rt_lib::ov_is($memory_4, 'string');
#line 188
if (c_rt_lib::check_true($memory_5)) {goto label_57;}
#line 190
$memory_5 = c_rt_lib::ov_is($memory_4, 'ternary_op');
#line 190
if (c_rt_lib::check_true($memory_5)) {goto label_64;}
#line 192
$memory_5 = c_rt_lib::ov_is($memory_4, 'hash_key');
#line 192
if (c_rt_lib::check_true($memory_5)) {goto label_69;}
#line 194
$memory_5 = c_rt_lib::ov_is($memory_4, 'variant');
#line 194
if (c_rt_lib::check_true($memory_5)) {goto label_76;}
#line 196
$memory_5 = c_rt_lib::ov_is($memory_4, 'var');
#line 196
if (c_rt_lib::check_true($memory_5)) {goto label_81;}
#line 198
$memory_5 = c_rt_lib::ov_is($memory_4, 'parenthesis');
#line 198
if (c_rt_lib::check_true($memory_5)) {goto label_86;}
#line 200
$memory_5 = c_rt_lib::ov_is($memory_4, 'bin_op');
#line 200
if (c_rt_lib::check_true($memory_5)) {goto label_91;}
#line 202
$memory_5 = c_rt_lib::ov_is($memory_4, 'var_op');
#line 202
if (c_rt_lib::check_true($memory_5)) {goto label_96;}
#line 204
$memory_5 = c_rt_lib::ov_is($memory_4, 'unary_op');
#line 204
if (c_rt_lib::check_true($memory_5)) {goto label_101;}
#line 206
$memory_5 = c_rt_lib::ov_is($memory_4, 'fun_val');
#line 206
if (c_rt_lib::check_true($memory_5)) {goto label_106;}
#line 208
$memory_5 = c_rt_lib::ov_is($memory_4, 'arr_decl');
#line 208
if (c_rt_lib::check_true($memory_5)) {goto label_111;}
#line 210
$memory_5 = c_rt_lib::ov_is($memory_4, 'hash_decl');
#line 210
if (c_rt_lib::check_true($memory_5)) {goto label_116;}
#line 212
$memory_5 = c_rt_lib::ov_is($memory_4, 'nop');
#line 212
if (c_rt_lib::check_true($memory_5)) {goto label_121;}
#line 213
$memory_5 = c_rt_lib::ov_is($memory_4, 'fun_label');
#line 213
if (c_rt_lib::check_true($memory_5)) {goto label_123;}
#line 215
$memory_5 = c_rt_lib::ov_is($memory_4, 'post_inc');
#line 215
if (c_rt_lib::check_true($memory_5)) {goto label_130;}
#line 217
$memory_5 = c_rt_lib::ov_is($memory_4, 'post_dec');
#line 217
if (c_rt_lib::check_true($memory_5)) {goto label_137;}
#line 217
$memory_5 = "NOMATCHALERT";
#line 217
$memory_5 = [$memory_5,$memory_4];
#line 217
die(dfile::ssave($memory_5));
#line 186
label_50:
#line 186
$memory_6 = c_rt_lib::ov_as($memory_4, 'const');
#line 187
$memory_7 = translator_priv::convert_str_to_number($memory_6);
#line 187
translator_priv::load_const($memory_7, $memory_1, $memory_2);
#line 187
undef($memory_7);
#line 187
undef($memory_6);
#line 188
goto label_144;
#line 188
label_57:
#line 188
$memory_6 = c_rt_lib::ov_as($memory_4, 'string');
#line 189
$memory_7 = translator_priv::make_string($memory_6, $memory_2);
#line 189
translator_priv::load_const($memory_7, $memory_1, $memory_2);
#line 189
undef($memory_7);
#line 189
undef($memory_6);
#line 190
goto label_144;
#line 190
label_64:
#line 190
$memory_6 = c_rt_lib::ov_as($memory_4, 'ternary_op');
#line 191
translator_priv::print_ternary_op($memory_6, $memory_1, $memory_2);
#line 191
undef($memory_6);
#line 192
goto label_144;
#line 192
label_69:
#line 192
$memory_6 = c_rt_lib::ov_as($memory_4, 'hash_key');
#line 193
$memory_7 = [];
#line 193
die(dfile::ssave($memory_7));
#line 193
undef($memory_7);
#line 193
undef($memory_6);
#line 194
goto label_144;
#line 194
label_76:
#line 194
$memory_6 = c_rt_lib::ov_as($memory_4, 'variant');
#line 195
translator_priv::print_variant($memory_6, $memory_1, $memory_2);
#line 195
undef($memory_6);
#line 196
goto label_144;
#line 196
label_81:
#line 196
$memory_6 = c_rt_lib::ov_as($memory_4, 'var');
#line 197
translator_priv::print_variable($memory_6, $memory_1, $memory_2);
#line 197
undef($memory_6);
#line 198
goto label_144;
#line 198
label_86:
#line 198
$memory_6 = c_rt_lib::ov_as($memory_4, 'parenthesis');
#line 199
translator_priv::print_val($memory_6, $memory_1, $memory_2);
#line 199
undef($memory_6);
#line 200
goto label_144;
#line 200
label_91:
#line 200
$memory_6 = c_rt_lib::ov_as($memory_4, 'bin_op');
#line 201
translator_priv::print_bin_op($memory_6, $memory_1, $memory_2);
#line 201
undef($memory_6);
#line 202
goto label_144;
#line 202
label_96:
#line 202
$memory_6 = c_rt_lib::ov_as($memory_4, 'var_op');
#line 203
translator_priv::print_var_op($memory_6, $memory_1, $memory_2);
#line 203
undef($memory_6);
#line 204
goto label_144;
#line 204
label_101:
#line 204
$memory_6 = c_rt_lib::ov_as($memory_4, 'unary_op');
#line 205
translator_priv::print_unary_op($memory_6, $memory_1, $memory_2);
#line 205
undef($memory_6);
#line 206
goto label_144;
#line 206
label_106:
#line 206
$memory_6 = c_rt_lib::ov_as($memory_4, 'fun_val');
#line 207
translator_priv::print_fun_val($memory_6, $memory_1, $memory_2);
#line 207
undef($memory_6);
#line 208
goto label_144;
#line 208
label_111:
#line 208
$memory_6 = c_rt_lib::ov_as($memory_4, 'arr_decl');
#line 209
translator_priv::print_array_declaration($memory_6, $memory_1, $memory_2);
#line 209
undef($memory_6);
#line 210
goto label_144;
#line 210
label_116:
#line 210
$memory_6 = c_rt_lib::ov_as($memory_4, 'hash_decl');
#line 211
translator_priv::print_hash_declaration($memory_6, $memory_1, $memory_2);
#line 211
undef($memory_6);
#line 212
goto label_144;
#line 212
label_121:
#line 213
goto label_144;
#line 213
label_123:
#line 213
$memory_6 = c_rt_lib::ov_as($memory_4, 'fun_label');
#line 214
$memory_7 = [];
#line 214
die(dfile::ssave($memory_7));
#line 214
undef($memory_7);
#line 214
undef($memory_6);
#line 215
goto label_144;
#line 215
label_130:
#line 215
$memory_6 = c_rt_lib::ov_as($memory_4, 'post_inc');
#line 216
$memory_7 = "++";
#line 216
translator_priv::print_post_operator($memory_6, $memory_7, $memory_1, $memory_2);
#line 216
undef($memory_7);
#line 216
undef($memory_6);
#line 217
goto label_144;
#line 217
label_137:
#line 217
$memory_6 = c_rt_lib::ov_as($memory_4, 'post_dec');
#line 218
$memory_7 = "--";
#line 218
translator_priv::print_post_operator($memory_6, $memory_7, $memory_1, $memory_2);
#line 218
undef($memory_7);
#line 218
undef($memory_6);
#line 219
goto label_144;
#line 219
label_144:
#line 219
undef($memory_4);
#line 219
undef($memory_5);
#line 220
translator_priv::restore_registers($memory_3, $memory_2);
#line 220
undef($memory_3);
#line 220
undef($memory_0);
#line 220
undef($memory_1);
#line 220
$_[2] = $memory_2;return;
$_[2] = $memory_2;}

sub translator_priv::print_variable($$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;$memory_0 = $_[0];$memory_1 = $_[1];$memory_2 = $_[2];Scalar::Util::weaken($_[2]) if ref($_[2]);
#line 224
$memory_3 = translator_priv::get_var_register($memory_0, $memory_2);
#line 224
translator_priv::move($memory_1, $memory_3, $memory_2);
#line 224
undef($memory_3);
#line 224
undef($memory_0);
#line 224
undef($memory_1);
#line 224
$_[2] = $memory_2;return;
$_[2] = $memory_2;}

sub translator_priv::print_post_operator($$$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;$memory_0 = $_[0];$memory_1 = $_[1];$memory_2 = $_[2];$memory_3 = $_[3];Scalar::Util::weaken($_[3]) if ref($_[3]);
#line 229
$memory_5 = c_rt_lib::to_nl(1);
#line 229
$memory_4 = translator_priv::get_value_of_lvalue($memory_0, $memory_5, $memory_3);
#line 229
undef($memory_5);
#line 230
$memory_6 = array::len($memory_4);
#line 230
$memory_7 = 1;
#line 230
$memory_6 = $memory_6 - $memory_7;
#line 230
undef($memory_7);
#line 230
$memory_5 = $memory_4->[$memory_6];
#line 230
undef($memory_6);
#line 230
$memory_5 = c_rt_lib::ov_as($memory_5, 'value');
#line 231
translator_priv::move($memory_2, $memory_5, $memory_3);
#line 232
$memory_8 = $memory_0->{'debug'};
#line 232
$memory_9 = 1;
#line 232
$memory_9 = c_rt_lib::ov_mk_arg('const', $memory_9);
#line 232
$memory_7 = {debug => $memory_8,value => $memory_9,};
#line 232
undef($memory_8);
#line 232
undef($memory_9);
#line 232
$memory_6 = translator_priv::calc_val($memory_7, $memory_3);
#line 232
undef($memory_7);
#line 233
$memory_7 = "++";
#line 233
$memory_7 = c_rt_lib::to_nl($memory_1 eq $memory_7);
#line 233
if (c_rt_lib::check_true($memory_7)) {goto label_24;}
#line 233
$memory_7 = "-";
#line 233
goto label_26;
#line 233
label_24:
#line 233
$memory_7 = "+";
#line 233
label_26:
#line 233
translator_priv::print_bin_op_operator_command($memory_5, $memory_5, $memory_6, $memory_7, $memory_3);
#line 233
undef($memory_7);
#line 234
$memory_7 = c_rt_lib::to_nl(1);
#line 234
translator_priv::set_value_of_lvalue($memory_4, $memory_7, $memory_3);
#line 234
undef($memory_7);
#line 234
undef($memory_4);
#line 234
undef($memory_5);
#line 234
undef($memory_6);
#line 234
undef($memory_0);
#line 234
undef($memory_1);
#line 234
undef($memory_2);
#line 234
$_[3] = $memory_3;return;
$_[3] = $memory_3;}

sub translator_priv::print_unary_op($$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;$memory_0 = $_[0];$memory_1 = $_[1];$memory_2 = $_[2];Scalar::Util::weaken($_[2]) if ref($_[2]);
#line 238
$memory_3 = $memory_0->{'op'};
#line 238
$memory_4 = "!";
#line 238
$memory_3 = c_rt_lib::to_nl($memory_3 eq $memory_4);
#line 238
undef($memory_4);
#line 238
if (c_rt_lib::check_true($memory_3)) {goto label_9;}
#line 238
$memory_3 = $memory_0->{'op'};
#line 238
$memory_4 = "-";
#line 238
$memory_3 = c_rt_lib::to_nl($memory_3 eq $memory_4);
#line 238
undef($memory_4);
#line 238
label_9:
#line 238
if (c_rt_lib::check_true($memory_3)) {goto label_15;}
#line 238
$memory_3 = $memory_0->{'op'};
#line 238
$memory_4 = "+";
#line 238
$memory_3 = c_rt_lib::to_nl($memory_3 eq $memory_4);
#line 238
undef($memory_4);
#line 238
label_15:
#line 238
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 238
if (c_rt_lib::check_true($memory_3)) {goto label_40;}
#line 239
$memory_4 = "";
#line 239
$memory_4 = c_rt_lib::to_nl($memory_1 eq $memory_4);
#line 239
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 239
if (c_rt_lib::check_true($memory_4)) {goto label_28;}
#line 239
undef($memory_0);
#line 239
undef($memory_1);
#line 239
undef($memory_3);
#line 239
undef($memory_4);
#line 239
$_[2] = $memory_2;return;
#line 239
goto label_28;
#line 239
label_28:
#line 239
undef($memory_4);
#line 240
$memory_4 = $memory_0->{'val'};
#line 240
translator_priv::print_val($memory_4, $memory_1, $memory_2);
#line 240
undef($memory_4);
#line 241
$memory_5 = $memory_0->{'op'};
#line 241
$memory_4 = {dest => $memory_1,src => $memory_1,op => $memory_5,};
#line 241
undef($memory_5);
#line 241
$memory_4 = c_rt_lib::ov_mk_arg('una_op', $memory_4);
#line 241
translator_priv::print($memory_2, $memory_4);
#line 241
undef($memory_4);
#line 242
goto label_139;
#line 242
label_40:
#line 242
$memory_3 = $memory_0->{'op'};
#line 242
$memory_4 = "++";
#line 242
$memory_3 = c_rt_lib::to_nl($memory_3 eq $memory_4);
#line 242
undef($memory_4);
#line 242
if (c_rt_lib::check_true($memory_3)) {goto label_50;}
#line 242
$memory_3 = $memory_0->{'op'};
#line 242
$memory_4 = "--";
#line 242
$memory_3 = c_rt_lib::to_nl($memory_3 eq $memory_4);
#line 242
undef($memory_4);
#line 242
label_50:
#line 242
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 242
if (c_rt_lib::check_true($memory_3)) {goto label_94;}
#line 243
$memory_5 = $memory_0->{'val'};
#line 243
$memory_6 = c_rt_lib::to_nl(1);
#line 243
$memory_4 = translator_priv::get_value_of_lvalue($memory_5, $memory_6, $memory_2);
#line 243
undef($memory_6);
#line 243
undef($memory_5);
#line 244
$memory_6 = array::len($memory_4);
#line 244
$memory_7 = 1;
#line 244
$memory_6 = $memory_6 - $memory_7;
#line 244
undef($memory_7);
#line 244
$memory_5 = $memory_4->[$memory_6];
#line 244
undef($memory_6);
#line 244
$memory_5 = c_rt_lib::ov_as($memory_5, 'value');
#line 245
$memory_8 = $memory_0->{'val'};
#line 245
$memory_8 = $memory_8->{'debug'};
#line 245
$memory_9 = 1;
#line 245
$memory_9 = c_rt_lib::ov_mk_arg('const', $memory_9);
#line 245
$memory_7 = {debug => $memory_8,value => $memory_9,};
#line 245
undef($memory_8);
#line 245
undef($memory_9);
#line 245
$memory_6 = translator_priv::dest_val($memory_7, $memory_1, $memory_2);
#line 245
undef($memory_7);
#line 246
$memory_7 = $memory_0->{'op'};
#line 246
$memory_8 = "++";
#line 246
$memory_7 = c_rt_lib::to_nl($memory_7 eq $memory_8);
#line 246
undef($memory_8);
#line 246
if (c_rt_lib::check_true($memory_7)) {goto label_81;}
#line 246
$memory_7 = "-";
#line 246
goto label_83;
#line 246
label_81:
#line 246
$memory_7 = "+";
#line 246
label_83:
#line 246
translator_priv::print_bin_op_operator_command($memory_5, $memory_5, $memory_6, $memory_7, $memory_2);
#line 246
undef($memory_7);
#line 247
translator_priv::move($memory_1, $memory_5, $memory_2);
#line 248
$memory_7 = c_rt_lib::to_nl(1);
#line 248
translator_priv::set_value_of_lvalue($memory_4, $memory_7, $memory_2);
#line 248
undef($memory_7);
#line 248
undef($memory_4);
#line 248
undef($memory_5);
#line 248
undef($memory_6);
#line 249
goto label_139;
#line 249
label_94:
#line 249
$memory_3 = $memory_0->{'op'};
#line 249
$memory_4 = "\@";
#line 249
$memory_3 = c_rt_lib::to_nl($memory_3 eq $memory_4);
#line 249
undef($memory_4);
#line 249
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 249
if (c_rt_lib::check_true($memory_3)) {goto label_134;}
#line 250
$memory_4 = "";
#line 250
$memory_4 = c_rt_lib::to_nl($memory_1 eq $memory_4);
#line 250
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 250
if (c_rt_lib::check_true($memory_4)) {goto label_111;}
#line 250
undef($memory_0);
#line 250
undef($memory_1);
#line 250
undef($memory_3);
#line 250
undef($memory_4);
#line 250
$_[2] = $memory_2;return;
#line 250
goto label_111;
#line 250
label_111:
#line 250
undef($memory_4);
#line 251
$memory_4 = $memory_0->{'val'};
#line 251
$memory_4 = $memory_4->{'value'};
#line 251
$memory_4 = c_rt_lib::ov_as($memory_4, 'fun_label');
#line 252
$memory_6 = $memory_4->{'module'};
#line 252
$memory_7 = $memory_4->{'name'};
#line 252
$memory_5 = {dest => $memory_1,module => $memory_6,name => $memory_7,};
#line 252
undef($memory_6);
#line 252
undef($memory_7);
#line 252
$memory_5 = c_rt_lib::ov_mk_arg('func', $memory_5);
#line 252
translator_priv::print($memory_2, $memory_5);
#line 252
undef($memory_5);
#line 253
$memory_6 = c_rt_lib::ov_mk_arg('arg', $memory_1);
#line 253
$memory_7 = "ref";
#line 253
$memory_5 = {dest => $memory_1,src => $memory_6,name => $memory_7,};
#line 253
undef($memory_6);
#line 253
undef($memory_7);
#line 253
$memory_5 = c_rt_lib::ov_mk_arg('ov_mk', $memory_5);
#line 253
translator_priv::print($memory_2, $memory_5);
#line 253
undef($memory_5);
#line 253
undef($memory_4);
#line 254
goto label_139;
#line 254
label_134:
#line 255
$memory_4 = [];
#line 255
die(dfile::ssave($memory_4));
#line 255
undef($memory_4);
#line 256
goto label_139;
#line 256
label_139:
#line 256
undef($memory_3);
#line 256
undef($memory_0);
#line 256
undef($memory_1);
#line 256
$_[2] = $memory_2;return;
$_[2] = $memory_2;}

sub translator_priv::print_var_op($$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;$memory_0 = $_[0];$memory_1 = $_[1];$memory_2 = $_[2];Scalar::Util::weaken($_[2]) if ref($_[2]);
#line 260
$memory_3 = "";
#line 260
$memory_3 = c_rt_lib::to_nl($memory_1 eq $memory_3);
#line 260
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 260
if (c_rt_lib::check_true($memory_3)) {goto label_9;}
#line 260
undef($memory_0);
#line 260
undef($memory_1);
#line 260
undef($memory_3);
#line 260
$_[2] = $memory_2;return;
#line 260
goto label_9;
#line 260
label_9:
#line 260
undef($memory_3);
#line 261
$memory_3 = $memory_0->{'left'};
#line 261
translator_priv::print_val($memory_3, $memory_1, $memory_2);
#line 261
undef($memory_3);
#line 263
$memory_4 = $memory_0->{'op'};
#line 263
$memory_5 = c_rt_lib::ov_is($memory_4, 'ov_is');
#line 263
if (c_rt_lib::check_true($memory_5)) {goto label_22;}
#line 265
$memory_5 = c_rt_lib::ov_is($memory_4, 'ov_as');
#line 265
if (c_rt_lib::check_true($memory_5)) {goto label_30;}
#line 265
$memory_5 = "NOMATCHALERT";
#line 265
$memory_5 = [$memory_5,$memory_4];
#line 265
die(dfile::ssave($memory_5));
#line 263
label_22:
#line 264
$memory_7 = $memory_0->{'case'};
#line 264
$memory_6 = {dest => $memory_1,src => $memory_1,type => $memory_7,};
#line 264
undef($memory_7);
#line 264
$memory_6 = c_rt_lib::ov_mk_arg('ov_is', $memory_6);
#line 264
$memory_3 = $memory_6;
#line 264
undef($memory_6);
#line 265
goto label_38;
#line 265
label_30:
#line 266
$memory_7 = $memory_0->{'case'};
#line 266
$memory_6 = {dest => $memory_1,src => $memory_1,type => $memory_7,};
#line 266
undef($memory_7);
#line 266
$memory_6 = c_rt_lib::ov_mk_arg('ov_as', $memory_6);
#line 266
$memory_3 = $memory_6;
#line 266
undef($memory_6);
#line 267
goto label_38;
#line 267
label_38:
#line 267
undef($memory_4);
#line 267
undef($memory_5);
#line 268
translator_priv::print($memory_2, $memory_3);
#line 268
undef($memory_3);
#line 268
undef($memory_0);
#line 268
undef($memory_1);
#line 268
$_[2] = $memory_2;return;
$_[2] = $memory_2;}

sub translator_priv::print_bin_op($$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;$memory_0 = $_[0];$memory_1 = $_[1];$memory_2 = $_[2];Scalar::Util::weaken($_[2]) if ref($_[2]);
#line 272
$memory_3 = $memory_0->{'op'};
#line 272
$memory_4 = "=";
#line 272
$memory_3 = c_rt_lib::to_nl($memory_3 eq $memory_4);
#line 272
undef($memory_4);
#line 272
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 272
if (c_rt_lib::check_true($memory_3)) {goto label_30;}
#line 273
$memory_5 = $memory_0->{'right'};
#line 273
$memory_4 = translator_priv::dest_val($memory_5, $memory_1, $memory_2);
#line 273
undef($memory_5);
#line 274
$memory_6 = $memory_0->{'left'};
#line 274
$memory_7 = c_rt_lib::to_nl(0);
#line 274
$memory_5 = translator_priv::get_value_of_lvalue($memory_6, $memory_7, $memory_2);
#line 274
undef($memory_7);
#line 274
undef($memory_6);
#line 275
$memory_7 = array::len($memory_5);
#line 275
$memory_8 = 1;
#line 275
$memory_7 = $memory_7 - $memory_8;
#line 275
undef($memory_8);
#line 275
$memory_6 = $memory_5->[$memory_7];
#line 275
undef($memory_7);
#line 275
$memory_6 = c_rt_lib::ov_as($memory_6, 'value');
#line 276
translator_priv::move($memory_6, $memory_4, $memory_2);
#line 277
translator_priv::move($memory_1, $memory_6, $memory_2);
#line 278
$memory_7 = c_rt_lib::to_nl(0);
#line 278
translator_priv::set_value_of_lvalue($memory_5, $memory_7, $memory_2);
#line 278
undef($memory_7);
#line 278
undef($memory_4);
#line 278
undef($memory_5);
#line 278
undef($memory_6);
#line 279
goto label_272;
#line 279
label_30:
#line 279
$memory_3 = $memory_0->{'op'};
#line 279
$memory_4 = "[]=";
#line 279
$memory_3 = c_rt_lib::to_nl($memory_3 eq $memory_4);
#line 279
undef($memory_4);
#line 279
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 279
if (c_rt_lib::check_true($memory_3)) {goto label_59;}
#line 281
$memory_5 = "array_push";
#line 282
$memory_6 = "c_rt_lib";
#line 283
$memory_9 = $memory_0->{'left'};
#line 283
$memory_10 = c_rt_lib::ov_mk_none('ref');
#line 283
$memory_8 = {val => $memory_9,mod => $memory_10,};
#line 283
undef($memory_9);
#line 283
undef($memory_10);
#line 283
$memory_10 = $memory_0->{'right'};
#line 283
$memory_11 = c_rt_lib::ov_mk_none('none');
#line 283
$memory_9 = {val => $memory_10,mod => $memory_11,};
#line 283
undef($memory_10);
#line 283
undef($memory_11);
#line 283
$memory_7 = [$memory_8,$memory_9];
#line 283
undef($memory_8);
#line 283
undef($memory_9);
#line 283
$memory_4 = {name => $memory_5,module => $memory_6,args => $memory_7,};
#line 283
undef($memory_5);
#line 283
undef($memory_6);
#line 283
undef($memory_7);
#line 283
translator_priv::print_fun_val($memory_4, $memory_1, $memory_2);
#line 283
undef($memory_4);
#line 285
goto label_272;
#line 285
label_59:
#line 285
$memory_3 = $memory_0->{'op'};
#line 285
$memory_4 = "ARRAY_INDEX";
#line 285
$memory_3 = c_rt_lib::to_nl($memory_3 eq $memory_4);
#line 285
undef($memory_4);
#line 285
if (c_rt_lib::check_true($memory_3)) {goto label_69;}
#line 285
$memory_3 = $memory_0->{'op'};
#line 285
$memory_4 = "HASH_INDEX";
#line 285
$memory_3 = c_rt_lib::to_nl($memory_3 eq $memory_4);
#line 285
undef($memory_4);
#line 285
label_69:
#line 285
if (c_rt_lib::check_true($memory_3)) {goto label_75;}
#line 285
$memory_3 = $memory_0->{'op'};
#line 285
$memory_4 = "->";
#line 285
$memory_3 = c_rt_lib::to_nl($memory_3 eq $memory_4);
#line 285
undef($memory_4);
#line 285
label_75:
#line 285
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 285
if (c_rt_lib::check_true($memory_3)) {goto label_125;}
#line 286
$memory_5 = $memory_0->{'left'};
#line 286
$memory_4 = translator_priv::dest_val($memory_5, $memory_1, $memory_2);
#line 286
undef($memory_5);
#line 287
$memory_5 = $memory_0->{'op'};
#line 287
$memory_6 = "ARRAY_INDEX";
#line 287
$memory_5 = c_rt_lib::to_nl($memory_5 eq $memory_6);
#line 287
undef($memory_6);
#line 287
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 287
if (c_rt_lib::check_true($memory_5)) {goto label_93;}
#line 288
$memory_7 = $memory_0->{'right'};
#line 288
$memory_6 = translator_priv::calc_val($memory_7, $memory_2);
#line 288
undef($memory_7);
#line 289
translator_priv::print_get_from_index($memory_1, $memory_4, $memory_6, $memory_2);
#line 289
undef($memory_6);
#line 290
goto label_121;
#line 290
label_93:
#line 290
$memory_5 = $memory_0->{'op'};
#line 290
$memory_6 = "HASH_INDEX";
#line 290
$memory_5 = c_rt_lib::to_nl($memory_5 eq $memory_6);
#line 290
undef($memory_6);
#line 290
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 290
if (c_rt_lib::check_true($memory_5)) {goto label_114;}
#line 291
$memory_7 = $memory_0->{'right'};
#line 291
$memory_6 = translator_priv::calc_val($memory_7, $memory_2);
#line 291
undef($memory_7);
#line 292
$memory_7 = "hash_get_value";
#line 292
$memory_9 = c_rt_lib::ov_mk_arg('val', $memory_4);
#line 292
$memory_10 = c_rt_lib::ov_mk_arg('val', $memory_6);
#line 292
$memory_8 = [$memory_9,$memory_10];
#line 292
undef($memory_9);
#line 292
undef($memory_10);
#line 292
translator_priv::print_call_base($memory_1, $memory_7, $memory_8, $memory_2);
#line 292
undef($memory_8);
#line 292
undef($memory_7);
#line 292
undef($memory_6);
#line 293
goto label_121;
#line 293
label_114:
#line 294
$memory_6 = $memory_0->{'right'};
#line 294
$memory_6 = $memory_6->{'value'};
#line 294
$memory_6 = c_rt_lib::ov_as($memory_6, 'hash_key');
#line 294
translator_priv::print_get_value($memory_1, $memory_4, $memory_6, $memory_2);
#line 294
undef($memory_6);
#line 295
goto label_121;
#line 295
label_121:
#line 295
undef($memory_5);
#line 295
undef($memory_4);
#line 296
goto label_272;
#line 296
label_125:
#line 296
$memory_3 = $memory_0->{'op'};
#line 296
$memory_4 = "+=";
#line 296
$memory_3 = c_rt_lib::to_nl($memory_3 eq $memory_4);
#line 296
undef($memory_4);
#line 296
if (c_rt_lib::check_true($memory_3)) {goto label_135;}
#line 296
$memory_3 = $memory_0->{'op'};
#line 296
$memory_4 = "-=";
#line 296
$memory_3 = c_rt_lib::to_nl($memory_3 eq $memory_4);
#line 296
undef($memory_4);
#line 296
label_135:
#line 296
if (c_rt_lib::check_true($memory_3)) {goto label_141;}
#line 296
$memory_3 = $memory_0->{'op'};
#line 296
$memory_4 = "/=";
#line 296
$memory_3 = c_rt_lib::to_nl($memory_3 eq $memory_4);
#line 296
undef($memory_4);
#line 296
label_141:
#line 296
if (c_rt_lib::check_true($memory_3)) {goto label_147;}
#line 296
$memory_3 = $memory_0->{'op'};
#line 296
$memory_4 = "*=";
#line 296
$memory_3 = c_rt_lib::to_nl($memory_3 eq $memory_4);
#line 296
undef($memory_4);
#line 296
label_147:
#line 296
if (c_rt_lib::check_true($memory_3)) {goto label_153;}
#line 296
$memory_3 = $memory_0->{'op'};
#line 296
$memory_4 = ".=";
#line 296
$memory_3 = c_rt_lib::to_nl($memory_3 eq $memory_4);
#line 296
undef($memory_4);
#line 296
label_153:
#line 296
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 296
if (c_rt_lib::check_true($memory_3)) {goto label_182;}
#line 297
$memory_5 = $memory_0->{'right'};
#line 297
$memory_4 = translator_priv::calc_val($memory_5, $memory_2);
#line 297
undef($memory_5);
#line 298
$memory_6 = $memory_0->{'left'};
#line 298
$memory_7 = c_rt_lib::to_nl(1);
#line 298
$memory_5 = translator_priv::get_value_of_lvalue($memory_6, $memory_7, $memory_2);
#line 298
undef($memory_7);
#line 298
undef($memory_6);
#line 299
$memory_7 = array::len($memory_5);
#line 299
$memory_8 = 1;
#line 299
$memory_7 = $memory_7 - $memory_8;
#line 299
undef($memory_8);
#line 299
$memory_6 = $memory_5->[$memory_7];
#line 299
undef($memory_7);
#line 299
$memory_6 = c_rt_lib::ov_as($memory_6, 'value');
#line 300
$memory_7 = $memory_0->{'op'};
#line 300
translator_priv::print_bin_op_operator_command($memory_6, $memory_6, $memory_4, $memory_7, $memory_2);
#line 300
undef($memory_7);
#line 301
translator_priv::move($memory_1, $memory_6, $memory_2);
#line 302
$memory_7 = c_rt_lib::to_nl(1);
#line 302
translator_priv::set_value_of_lvalue($memory_5, $memory_7, $memory_2);
#line 302
undef($memory_7);
#line 302
undef($memory_4);
#line 302
undef($memory_5);
#line 302
undef($memory_6);
#line 303
goto label_272;
#line 303
label_182:
#line 303
$memory_3 = $memory_0->{'op'};
#line 303
$memory_4 = "&&";
#line 303
$memory_3 = c_rt_lib::to_nl($memory_3 eq $memory_4);
#line 303
undef($memory_4);
#line 303
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 303
if (c_rt_lib::check_true($memory_3)) {goto label_209;}
#line 304
$memory_4 = translator_priv::get_sim_label($memory_2);
#line 305
$memory_5 = translator_priv::new_register($memory_2);
#line 306
$memory_7 = $memory_0->{'left'};
#line 306
$memory_6 = translator_priv::def_val($memory_7, $memory_1, $memory_5, $memory_2);
#line 306
undef($memory_7);
#line 307
$memory_8 = "!";
#line 307
$memory_7 = {dest => $memory_5,src => $memory_6,op => $memory_8,};
#line 307
undef($memory_8);
#line 307
$memory_7 = c_rt_lib::ov_mk_arg('una_op', $memory_7);
#line 307
translator_priv::print($memory_2, $memory_7);
#line 307
undef($memory_7);
#line 308
translator_priv::print_if_goto($memory_4, $memory_5, $memory_2);
#line 309
$memory_7 = $memory_0->{'right'};
#line 309
translator_priv::def_val($memory_7, $memory_1, $memory_5, $memory_2);
#line 309
undef($memory_7);
#line 310
translator_priv::print_sim_label($memory_4, $memory_2);
#line 310
undef($memory_4);
#line 310
undef($memory_5);
#line 310
undef($memory_6);
#line 311
goto label_272;
#line 311
label_209:
#line 311
$memory_3 = $memory_0->{'op'};
#line 311
$memory_4 = "||";
#line 311
$memory_3 = c_rt_lib::to_nl($memory_3 eq $memory_4);
#line 311
undef($memory_4);
#line 311
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 311
if (c_rt_lib::check_true($memory_3)) {goto label_244;}
#line 312
$memory_4 = translator_priv::get_sim_label($memory_2);
#line 313
$memory_6 = $memory_0->{'left'};
#line 313
$memory_5 = translator_priv::dest_val($memory_6, $memory_1, $memory_2);
#line 313
undef($memory_6);
#line 314
$memory_6 = c_rt_lib::to_nl($memory_1 ne $memory_5);
#line 314
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 314
if (c_rt_lib::check_true($memory_6)) {goto label_225;}
#line 314
translator_priv::move($memory_1, $memory_5, $memory_2);
#line 314
goto label_225;
#line 314
label_225:
#line 314
undef($memory_6);
#line 315
translator_priv::print_if_goto($memory_4, $memory_5, $memory_2);
#line 316
$memory_7 = $memory_0->{'right'};
#line 316
$memory_6 = translator_priv::dest_val($memory_7, $memory_1, $memory_2);
#line 316
undef($memory_7);
#line 316
$memory_5 = $memory_6;
#line 316
undef($memory_6);
#line 317
$memory_6 = c_rt_lib::to_nl($memory_5 ne $memory_1);
#line 317
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 317
if (c_rt_lib::check_true($memory_6)) {goto label_238;}
#line 317
translator_priv::move($memory_1, $memory_5, $memory_2);
#line 317
goto label_238;
#line 317
label_238:
#line 317
undef($memory_6);
#line 318
translator_priv::print_sim_label($memory_4, $memory_2);
#line 318
undef($memory_4);
#line 318
undef($memory_5);
#line 319
goto label_272;
#line 319
label_244:
#line 320
$memory_5 = $memory_0->{'left'};
#line 320
$memory_4 = translator_priv::dest_val($memory_5, $memory_1, $memory_2);
#line 320
undef($memory_5);
#line 322
$memory_6 = c_rt_lib::to_nl($memory_4 eq $memory_1);
#line 322
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 322
if (c_rt_lib::check_true($memory_6)) {goto label_257;}
#line 323
$memory_8 = $memory_0->{'right'};
#line 323
$memory_7 = translator_priv::calc_val($memory_8, $memory_2);
#line 323
undef($memory_8);
#line 323
$memory_5 = $memory_7;
#line 323
undef($memory_7);
#line 324
goto label_264;
#line 324
label_257:
#line 325
$memory_8 = $memory_0->{'right'};
#line 325
$memory_7 = translator_priv::dest_val($memory_8, $memory_1, $memory_2);
#line 325
undef($memory_8);
#line 325
$memory_5 = $memory_7;
#line 325
undef($memory_7);
#line 326
goto label_264;
#line 326
label_264:
#line 326
undef($memory_6);
#line 327
$memory_6 = $memory_0->{'op'};
#line 327
translator_priv::print_bin_op_operator_command($memory_1, $memory_4, $memory_5, $memory_6, $memory_2);
#line 327
undef($memory_6);
#line 327
undef($memory_4);
#line 327
undef($memory_5);
#line 328
goto label_272;
#line 328
label_272:
#line 328
undef($memory_3);
#line 328
undef($memory_0);
#line 328
undef($memory_1);
#line 328
$_[2] = $memory_2;return;
$_[2] = $memory_2;}

sub translator_priv::print_cmd_array($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;$memory_0 = $_[0];$memory_1 = $_[1];Scalar::Util::weaken($_[1]) if ref($_[1]);
#line 332
$memory_2 = translator_priv::save_registers($memory_1);
#line 333
$memory_4 = 0;
#line 333
$memory_5 = 1;
#line 333
$memory_6 = c_rt_lib::array_len($memory_0);
#line 333
label_4:
#line 333
$memory_7 = c_rt_lib::to_nl($memory_4 >= $memory_6);
#line 333
if (c_rt_lib::check_true($memory_7)) {goto label_11;}
#line 333
$memory_3 = $memory_0->[$memory_4];
#line 334
translator_priv::print_cmd($memory_3, $memory_1);
#line 335
$memory_4 = $memory_4 + $memory_5;
#line 335
goto label_4;
#line 335
label_11:
#line 335
undef($memory_3);
#line 335
undef($memory_4);
#line 335
undef($memory_5);
#line 335
undef($memory_6);
#line 335
undef($memory_7);
#line 336
translator_priv::restore_registers($memory_2, $memory_1);
#line 336
undef($memory_2);
#line 336
undef($memory_0);
#line 336
$_[1] = $memory_1;return;
$_[1] = $memory_1;}

sub translator_priv::print_try_ensure($$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;$memory_0 = $_[0];$memory_1 = $_[1];$memory_2 = $_[2];Scalar::Util::weaken($_[2]) if ref($_[2]);
#line 340
$memory_3 = c_rt_lib::ov_is($memory_0, 'decl');
#line 340
if (c_rt_lib::check_true($memory_3)) {goto label_9;}
#line 342
$memory_3 = c_rt_lib::ov_is($memory_0, 'lval');
#line 342
if (c_rt_lib::check_true($memory_3)) {goto label_22;}
#line 343
$memory_3 = c_rt_lib::ov_is($memory_0, 'expr');
#line 343
if (c_rt_lib::check_true($memory_3)) {goto label_26;}
#line 343
$memory_3 = "NOMATCHALERT";
#line 343
$memory_3 = [$memory_3,$memory_0];
#line 343
die(dfile::ssave($memory_3));
#line 340
label_9:
#line 340
$memory_4 = c_rt_lib::ov_as($memory_0, 'decl');
#line 341
$memory_6 = $memory_4->{'name'};
#line 341
$memory_7 = $memory_4->{'type'};
#line 341
$memory_8 = c_rt_lib::ov_mk_none('none');
#line 341
$memory_5 = {name => $memory_6,type => $memory_7,value => $memory_8,};
#line 341
undef($memory_6);
#line 341
undef($memory_7);
#line 341
undef($memory_8);
#line 341
translator_priv::print_var_decl($memory_5, $memory_2);
#line 341
undef($memory_5);
#line 341
undef($memory_4);
#line 342
goto label_30;
#line 342
label_22:
#line 342
$memory_4 = c_rt_lib::ov_as($memory_0, 'lval');
#line 342
undef($memory_4);
#line 343
goto label_30;
#line 343
label_26:
#line 343
$memory_4 = c_rt_lib::ov_as($memory_0, 'expr');
#line 343
undef($memory_4);
#line 344
goto label_30;
#line 344
label_30:
#line 344
undef($memory_3);
#line 345
$memory_3 = translator_priv::save_registers($memory_2);
#line 346
$memory_4 = translator_priv::new_register($memory_2);
#line 348
$memory_6 = c_rt_lib::ov_is($memory_0, 'decl');
#line 348
if (c_rt_lib::check_true($memory_6)) {goto label_43;}
#line 353
$memory_6 = c_rt_lib::ov_is($memory_0, 'lval');
#line 353
if (c_rt_lib::check_true($memory_6)) {goto label_67;}
#line 355
$memory_6 = c_rt_lib::ov_is($memory_0, 'expr');
#line 355
if (c_rt_lib::check_true($memory_6)) {goto label_76;}
#line 355
$memory_6 = "NOMATCHALERT";
#line 355
$memory_6 = [$memory_6,$memory_0];
#line 355
die(dfile::ssave($memory_6));
#line 348
label_43:
#line 348
$memory_7 = c_rt_lib::ov_as($memory_0, 'decl');
#line 349
$memory_8 = $memory_7->{'value'};
#line 349
$memory_9 = c_rt_lib::ov_is($memory_8, 'value');
#line 349
if (c_rt_lib::check_true($memory_9)) {goto label_53;}
#line 351
$memory_9 = c_rt_lib::ov_is($memory_8, 'none');
#line 351
if (c_rt_lib::check_true($memory_9)) {goto label_60;}
#line 351
$memory_9 = "NOMATCHALERT";
#line 351
$memory_9 = [$memory_9,$memory_8];
#line 351
die(dfile::ssave($memory_9));
#line 349
label_53:
#line 349
$memory_10 = c_rt_lib::ov_as($memory_8, 'value');
#line 350
$memory_11 = translator_priv::calc_val($memory_10, $memory_2);
#line 350
$memory_5 = $memory_11;
#line 350
undef($memory_11);
#line 350
undef($memory_10);
#line 351
goto label_62;
#line 351
label_60:
#line 352
goto label_62;
#line 352
label_62:
#line 352
undef($memory_8);
#line 352
undef($memory_9);
#line 352
undef($memory_7);
#line 353
goto label_83;
#line 353
label_67:
#line 353
$memory_7 = c_rt_lib::ov_as($memory_0, 'lval');
#line 354
$memory_9 = $memory_7->{'right'};
#line 354
$memory_8 = translator_priv::calc_val($memory_9, $memory_2);
#line 354
undef($memory_9);
#line 354
$memory_5 = $memory_8;
#line 354
undef($memory_8);
#line 354
undef($memory_7);
#line 355
goto label_83;
#line 355
label_76:
#line 355
$memory_7 = c_rt_lib::ov_as($memory_0, 'expr');
#line 356
$memory_8 = translator_priv::calc_val($memory_7, $memory_2);
#line 356
$memory_5 = $memory_8;
#line 356
undef($memory_8);
#line 356
undef($memory_7);
#line 357
goto label_83;
#line 357
label_83:
#line 357
undef($memory_6);
#line 358
$memory_6 = translator_priv::get_sim_label($memory_2);
#line 359
$memory_8 = "ok";
#line 359
$memory_7 = {dest => $memory_4,src => $memory_5,type => $memory_8,};
#line 359
undef($memory_8);
#line 359
$memory_7 = c_rt_lib::ov_mk_arg('ov_is', $memory_7);
#line 359
translator_priv::print($memory_2, $memory_7);
#line 359
undef($memory_7);
#line 360
translator_priv::print_if_goto($memory_6, $memory_4, $memory_2);
#line 361
$memory_7 = $memory_1;
#line 361
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 361
if (c_rt_lib::check_true($memory_7)) {goto label_100;}
#line 362
$memory_8 = c_rt_lib::ov_mk_arg('val', $memory_5);
#line 362
translator_priv::print_safe_return($memory_8, $memory_2);
#line 362
undef($memory_8);
#line 363
goto label_113;
#line 363
label_100:
#line 364
$memory_9 = c_rt_lib::ov_mk_arg('arg', $memory_5);
#line 364
$memory_10 = "ensure";
#line 364
$memory_8 = {dest => $memory_5,src => $memory_9,name => $memory_10,};
#line 364
undef($memory_9);
#line 364
undef($memory_10);
#line 364
$memory_8 = c_rt_lib::ov_mk_arg('ov_mk', $memory_8);
#line 364
translator_priv::print($memory_2, $memory_8);
#line 364
undef($memory_8);
#line 365
$memory_8 = c_rt_lib::ov_mk_arg('die', $memory_5);
#line 365
translator_priv::print($memory_2, $memory_8);
#line 365
undef($memory_8);
#line 366
goto label_113;
#line 366
label_113:
#line 366
undef($memory_7);
#line 367
translator_priv::print_sim_label($memory_6, $memory_2);
#line 368
$memory_7 = c_rt_lib::ov_is($memory_0, 'decl');
#line 368
if (c_rt_lib::check_true($memory_7)) {goto label_125;}
#line 370
$memory_7 = c_rt_lib::ov_is($memory_0, 'lval');
#line 370
if (c_rt_lib::check_true($memory_7)) {goto label_139;}
#line 375
$memory_7 = c_rt_lib::ov_is($memory_0, 'expr');
#line 375
if (c_rt_lib::check_true($memory_7)) {goto label_166;}
#line 375
$memory_7 = "NOMATCHALERT";
#line 375
$memory_7 = [$memory_7,$memory_0];
#line 375
die(dfile::ssave($memory_7));
#line 368
label_125:
#line 368
$memory_8 = c_rt_lib::ov_as($memory_0, 'decl');
#line 369
$memory_11 = $memory_8->{'name'};
#line 369
$memory_10 = translator_priv::get_var_register($memory_11, $memory_2);
#line 369
undef($memory_11);
#line 369
$memory_11 = "ok";
#line 369
$memory_9 = {dest => $memory_10,src => $memory_5,type => $memory_11,};
#line 369
undef($memory_10);
#line 369
undef($memory_11);
#line 369
$memory_9 = c_rt_lib::ov_mk_arg('ov_as', $memory_9);
#line 369
translator_priv::print($memory_2, $memory_9);
#line 369
undef($memory_9);
#line 369
undef($memory_8);
#line 370
goto label_170;
#line 370
label_139:
#line 370
$memory_8 = c_rt_lib::ov_as($memory_0, 'lval');
#line 371
$memory_10 = $memory_8->{'left'};
#line 371
$memory_11 = c_rt_lib::to_nl(0);
#line 371
$memory_9 = translator_priv::get_value_of_lvalue($memory_10, $memory_11, $memory_2);
#line 371
undef($memory_11);
#line 371
undef($memory_10);
#line 372
$memory_11 = array::len($memory_9);
#line 372
$memory_12 = 1;
#line 372
$memory_11 = $memory_11 - $memory_12;
#line 372
undef($memory_12);
#line 372
$memory_10 = $memory_9->[$memory_11];
#line 372
undef($memory_11);
#line 372
$memory_10 = c_rt_lib::ov_as($memory_10, 'value');
#line 373
$memory_12 = "ok";
#line 373
$memory_11 = {dest => $memory_10,src => $memory_5,type => $memory_12,};
#line 373
undef($memory_12);
#line 373
$memory_11 = c_rt_lib::ov_mk_arg('ov_as', $memory_11);
#line 373
translator_priv::print($memory_2, $memory_11);
#line 373
undef($memory_11);
#line 374
$memory_11 = c_rt_lib::to_nl(0);
#line 374
translator_priv::set_value_of_lvalue($memory_9, $memory_11, $memory_2);
#line 374
undef($memory_11);
#line 374
undef($memory_9);
#line 374
undef($memory_10);
#line 374
undef($memory_8);
#line 375
goto label_170;
#line 375
label_166:
#line 375
$memory_8 = c_rt_lib::ov_as($memory_0, 'expr');
#line 375
undef($memory_8);
#line 376
goto label_170;
#line 376
label_170:
#line 376
undef($memory_7);
#line 377
translator_priv::restore_registers($memory_3, $memory_2);
#line 377
undef($memory_3);
#line 377
undef($memory_4);
#line 377
undef($memory_5);
#line 377
undef($memory_6);
#line 377
undef($memory_0);
#line 377
undef($memory_1);
#line 377
$_[2] = $memory_2;return;
$_[2] = $memory_2;}

sub translator_priv::start_new_instruction($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;$memory_0 = $_[0];$memory_1 = $_[1];Scalar::Util::weaken($_[1]) if ref($_[1]);
#line 381
$memory_2 = "debug";
#line 381
$memory_2 = c_rt_lib::get_ref_hash($memory_1, $memory_2);
#line 381
$memory_3 = $memory_0;
#line 381
 if (c_rt_lib::get_hashcount($memory_2) > 1) {$memory_2 = {%{$memory_2}};}$memory_2->{'nast_debug'} = $memory_3;
#line 381
$memory_4 = "debug";
#line 381
c_rt_lib::set_ref_hash($memory_1, $memory_4, $memory_2);
#line 381
undef($memory_4);
#line 381
undef($memory_2);
#line 381
undef($memory_3);
#line 382
$memory_2 = "debug";
#line 382
$memory_2 = c_rt_lib::get_ref_hash($memory_1, $memory_2);
#line 382
$memory_3 = "instruction_nr";
#line 382
$memory_3 = c_rt_lib::get_ref_hash($memory_2, $memory_3);
#line 382
$memory_4 = 1;
#line 382
$memory_3 = $memory_3 + $memory_4;
#line 382
$memory_5 = "instruction_nr";
#line 382
c_rt_lib::set_ref_hash($memory_2, $memory_5, $memory_3);
#line 382
$memory_5 = "debug";
#line 382
c_rt_lib::set_ref_hash($memory_1, $memory_5, $memory_2);
#line 382
undef($memory_5);
#line 382
undef($memory_2);
#line 382
undef($memory_3);
#line 382
undef($memory_4);
#line 382
undef($memory_0);
#line 382
$_[1] = $memory_1;return;
$_[1] = $memory_1;}

sub translator_priv::print_cmd($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;$memory_0 = $_[0];$memory_1 = $_[1];Scalar::Util::weaken($_[1]) if ref($_[1]);
#line 386
$memory_2 = $memory_0->{'debug'};
#line 386
translator_priv::start_new_instruction($memory_2, $memory_1);
#line 386
undef($memory_2);
#line 387
$memory_2 = $memory_0->{'cmd'};
#line 387
$memory_3 = c_rt_lib::ov_is($memory_2, 'if');
#line 387
if (c_rt_lib::check_true($memory_3)) {goto label_47;}
#line 389
$memory_3 = c_rt_lib::ov_is($memory_2, 'fora');
#line 389
if (c_rt_lib::check_true($memory_3)) {goto label_54;}
#line 391
$memory_3 = c_rt_lib::ov_is($memory_2, 'loop');
#line 391
if (c_rt_lib::check_true($memory_3)) {goto label_59;}
#line 393
$memory_3 = c_rt_lib::ov_is($memory_2, 'rep');
#line 393
if (c_rt_lib::check_true($memory_3)) {goto label_64;}
#line 395
$memory_3 = c_rt_lib::ov_is($memory_2, 'forh');
#line 395
if (c_rt_lib::check_true($memory_3)) {goto label_69;}
#line 397
$memory_3 = c_rt_lib::ov_is($memory_2, 'while');
#line 397
if (c_rt_lib::check_true($memory_3)) {goto label_74;}
#line 399
$memory_3 = c_rt_lib::ov_is($memory_2, 'for');
#line 399
if (c_rt_lib::check_true($memory_3)) {goto label_79;}
#line 401
$memory_3 = c_rt_lib::ov_is($memory_2, 'nop');
#line 401
if (c_rt_lib::check_true($memory_3)) {goto label_84;}
#line 402
$memory_3 = c_rt_lib::ov_is($memory_2, 'value');
#line 402
if (c_rt_lib::check_true($memory_3)) {goto label_86;}
#line 404
$memory_3 = c_rt_lib::ov_is($memory_2, 'block');
#line 404
if (c_rt_lib::check_true($memory_3)) {goto label_93;}
#line 406
$memory_3 = c_rt_lib::ov_is($memory_2, 'return');
#line 406
if (c_rt_lib::check_true($memory_3)) {goto label_98;}
#line 408
$memory_3 = c_rt_lib::ov_is($memory_2, 'match');
#line 408
if (c_rt_lib::check_true($memory_3)) {goto label_103;}
#line 410
$memory_3 = c_rt_lib::ov_is($memory_2, 'try');
#line 410
if (c_rt_lib::check_true($memory_3)) {goto label_108;}
#line 412
$memory_3 = c_rt_lib::ov_is($memory_2, 'ensure');
#line 412
if (c_rt_lib::check_true($memory_3)) {goto label_115;}
#line 414
$memory_3 = c_rt_lib::ov_is($memory_2, 'break');
#line 414
if (c_rt_lib::check_true($memory_3)) {goto label_122;}
#line 416
$memory_3 = c_rt_lib::ov_is($memory_2, 'continue');
#line 416
if (c_rt_lib::check_true($memory_3)) {goto label_128;}
#line 418
$memory_3 = c_rt_lib::ov_is($memory_2, 'die');
#line 418
if (c_rt_lib::check_true($memory_3)) {goto label_134;}
#line 420
$memory_3 = c_rt_lib::ov_is($memory_2, 'var_decl');
#line 420
if (c_rt_lib::check_true($memory_3)) {goto label_141;}
#line 422
$memory_3 = c_rt_lib::ov_is($memory_2, 'if_mod');
#line 422
if (c_rt_lib::check_true($memory_3)) {goto label_146;}
#line 424
$memory_3 = c_rt_lib::ov_is($memory_2, 'unless_mod');
#line 424
if (c_rt_lib::check_true($memory_3)) {goto label_151;}
#line 424
$memory_3 = "NOMATCHALERT";
#line 424
$memory_3 = [$memory_3,$memory_2];
#line 424
die(dfile::ssave($memory_3));
#line 387
label_47:
#line 387
$memory_4 = c_rt_lib::ov_as($memory_2, 'if');
#line 388
$memory_5 = c_rt_lib::to_nl(0);
#line 388
translator_priv::print_if($memory_4, $memory_5, $memory_1);
#line 388
undef($memory_5);
#line 388
undef($memory_4);
#line 389
goto label_156;
#line 389
label_54:
#line 389
$memory_4 = c_rt_lib::ov_as($memory_2, 'fora');
#line 390
translator_priv::print_fora($memory_4, $memory_1);
#line 390
undef($memory_4);
#line 391
goto label_156;
#line 391
label_59:
#line 391
$memory_4 = c_rt_lib::ov_as($memory_2, 'loop');
#line 392
translator_priv::print_loop($memory_4, $memory_1);
#line 392
undef($memory_4);
#line 393
goto label_156;
#line 393
label_64:
#line 393
$memory_4 = c_rt_lib::ov_as($memory_2, 'rep');
#line 394
translator_priv::print_rep($memory_4, $memory_1);
#line 394
undef($memory_4);
#line 395
goto label_156;
#line 395
label_69:
#line 395
$memory_4 = c_rt_lib::ov_as($memory_2, 'forh');
#line 396
translator_priv::print_forh($memory_4, $memory_1);
#line 396
undef($memory_4);
#line 397
goto label_156;
#line 397
label_74:
#line 397
$memory_4 = c_rt_lib::ov_as($memory_2, 'while');
#line 398
translator_priv::print_while($memory_4, $memory_1);
#line 398
undef($memory_4);
#line 399
goto label_156;
#line 399
label_79:
#line 399
$memory_4 = c_rt_lib::ov_as($memory_2, 'for');
#line 400
translator_priv::print_for($memory_4, $memory_1);
#line 400
undef($memory_4);
#line 401
goto label_156;
#line 401
label_84:
#line 402
goto label_156;
#line 402
label_86:
#line 402
$memory_4 = c_rt_lib::ov_as($memory_2, 'value');
#line 403
$memory_5 = "";
#line 403
translator_priv::print_val($memory_4, $memory_5, $memory_1);
#line 403
undef($memory_5);
#line 403
undef($memory_4);
#line 404
goto label_156;
#line 404
label_93:
#line 404
$memory_4 = c_rt_lib::ov_as($memory_2, 'block');
#line 405
translator_priv::print_cmd_array($memory_4, $memory_1);
#line 405
undef($memory_4);
#line 406
goto label_156;
#line 406
label_98:
#line 406
$memory_4 = c_rt_lib::ov_as($memory_2, 'return');
#line 407
translator_priv::print_return($memory_4, $memory_1);
#line 407
undef($memory_4);
#line 408
goto label_156;
#line 408
label_103:
#line 408
$memory_4 = c_rt_lib::ov_as($memory_2, 'match');
#line 409
translator_priv::print_match($memory_4, $memory_1);
#line 409
undef($memory_4);
#line 410
goto label_156;
#line 410
label_108:
#line 410
$memory_4 = c_rt_lib::ov_as($memory_2, 'try');
#line 411
$memory_5 = c_rt_lib::to_nl(1);
#line 411
translator_priv::print_try_ensure($memory_4, $memory_5, $memory_1);
#line 411
undef($memory_5);
#line 411
undef($memory_4);
#line 412
goto label_156;
#line 412
label_115:
#line 412
$memory_4 = c_rt_lib::ov_as($memory_2, 'ensure');
#line 413
$memory_5 = c_rt_lib::to_nl(0);
#line 413
translator_priv::print_try_ensure($memory_4, $memory_5, $memory_1);
#line 413
undef($memory_5);
#line 413
undef($memory_4);
#line 414
goto label_156;
#line 414
label_122:
#line 415
$memory_4 = $memory_1->{'loop_label'};
#line 415
$memory_4 = $memory_4->{'break'};
#line 415
translator_priv::print_loop_break($memory_1, $memory_4);
#line 415
undef($memory_4);
#line 416
goto label_156;
#line 416
label_128:
#line 417
$memory_4 = $memory_1->{'loop_label'};
#line 417
$memory_4 = $memory_4->{'continue'};
#line 417
translator_priv::print_loop_break($memory_1, $memory_4);
#line 417
undef($memory_4);
#line 418
goto label_156;
#line 418
label_134:
#line 418
$memory_4 = c_rt_lib::ov_as($memory_2, 'die');
#line 419
$memory_5 = $memory_0->{'debug'};
#line 419
translator_priv::print_die($memory_4, $memory_5, $memory_1);
#line 419
undef($memory_5);
#line 419
undef($memory_4);
#line 420
goto label_156;
#line 420
label_141:
#line 420
$memory_4 = c_rt_lib::ov_as($memory_2, 'var_decl');
#line 421
translator_priv::print_var_decl($memory_4, $memory_1);
#line 421
undef($memory_4);
#line 422
goto label_156;
#line 422
label_146:
#line 422
$memory_4 = c_rt_lib::ov_as($memory_2, 'if_mod');
#line 423
translator_priv::print_if_mod($memory_4, $memory_1);
#line 423
undef($memory_4);
#line 424
goto label_156;
#line 424
label_151:
#line 424
$memory_4 = c_rt_lib::ov_as($memory_2, 'unless_mod');
#line 425
translator_priv::print_unless_mod($memory_4, $memory_1);
#line 425
undef($memory_4);
#line 426
goto label_156;
#line 426
label_156:
#line 426
undef($memory_2);
#line 426
undef($memory_3);
#line 426
undef($memory_0);
#line 426
$_[1] = $memory_1;return;
$_[1] = $memory_1;}

sub translator_priv::print_loop_break($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];
#line 430
$memory_2 = $memory_1->{'logic'};
#line 430
$memory_2 = $memory_2->{'register'};
#line 430
label_2:
#line 430
$memory_3 = $memory_0->{'logic'};
#line 430
$memory_3 = $memory_3->{'register'};
#line 430
$memory_3 = c_rt_lib::to_nl($memory_2 < $memory_3);
#line 430
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 430
if (c_rt_lib::check_true($memory_3)) {goto label_18;}
#line 431
$memory_5 = {
	module => "nlasm",
	name => "reg_t",
};
#line 431
$memory_5 = c_rt_lib::ov_mk_arg('ref', $memory_5);
#line 431
$memory_4 = ptd::ensure($memory_5, $memory_2);
#line 431
undef($memory_5);
#line 431
translator_priv::undef_reg($memory_4, $memory_0);
#line 431
undef($memory_4);
#line 430
$memory_4 = 1;
#line 430
$memory_2 = $memory_2 + $memory_4;
#line 430
undef($memory_4);
#line 432
goto label_2;
#line 432
label_18:
#line 432
undef($memory_2);
#line 432
undef($memory_3);
#line 433
$memory_2 = $memory_1->{'label'};
#line 433
$memory_2 = c_rt_lib::ov_mk_arg('goto', $memory_2);
#line 433
translator_priv::print($memory_0, $memory_2);
#line 433
undef($memory_2);
#line 433
undef($memory_1);
#line 433
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub translator_priv::print_if_mod($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;$memory_0 = $_[0];$memory_1 = $_[1];Scalar::Util::weaken($_[1]) if ref($_[1]);
#line 438
$memory_3 = $memory_0->{'cond'};
#line 439
$memory_4 = $memory_0->{'cmd'};
#line 440
$memory_5 = [];
#line 441
$memory_7 = $memory_0->{'cmd'};
#line 441
$memory_7 = $memory_7->{'debug'};
#line 441
$memory_8 = c_rt_lib::ov_mk_none('nop');
#line 441
$memory_6 = {debug => $memory_7,cmd => $memory_8,};
#line 441
undef($memory_7);
#line 441
undef($memory_8);
#line 441
$memory_2 = {cond => $memory_3,if => $memory_4,elsif => $memory_5,else => $memory_6,};
#line 441
undef($memory_3);
#line 441
undef($memory_4);
#line 441
undef($memory_5);
#line 441
undef($memory_6);
#line 443
$memory_3 = c_rt_lib::to_nl(1);
#line 443
translator_priv::print_if($memory_2, $memory_3, $memory_1);
#line 443
undef($memory_3);
#line 443
undef($memory_2);
#line 443
undef($memory_0);
#line 443
$_[1] = $memory_1;return;
$_[1] = $memory_1;}

sub translator_priv::print_unless_mod($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;$memory_0 = $_[0];$memory_1 = $_[1];Scalar::Util::weaken($_[1]) if ref($_[1]);
#line 449
$memory_4 = $memory_0->{'cond'};
#line 449
$memory_4 = $memory_4->{'debug'};
#line 451
$memory_7 = $memory_0->{'cond'};
#line 451
$memory_7 = $memory_7->{'debug'};
#line 452
$memory_8 = $memory_0->{'cond'};
#line 452
$memory_8 = c_rt_lib::ov_mk_arg('parenthesis', $memory_8);
#line 452
$memory_6 = {debug => $memory_7,value => $memory_8,};
#line 452
undef($memory_7);
#line 452
undef($memory_8);
#line 453
$memory_7 = "!";
#line 453
$memory_5 = {val => $memory_6,op => $memory_7,};
#line 453
undef($memory_6);
#line 453
undef($memory_7);
#line 453
$memory_5 = c_rt_lib::ov_mk_arg('unary_op', $memory_5);
#line 453
$memory_3 = {debug => $memory_4,value => $memory_5,};
#line 453
undef($memory_4);
#line 453
undef($memory_5);
#line 454
$memory_4 = $memory_0->{'cmd'};
#line 455
$memory_5 = [];
#line 456
$memory_7 = $memory_0->{'cmd'};
#line 456
$memory_7 = $memory_7->{'debug'};
#line 456
$memory_8 = c_rt_lib::ov_mk_none('nop');
#line 456
$memory_6 = {debug => $memory_7,cmd => $memory_8,};
#line 456
undef($memory_7);
#line 456
undef($memory_8);
#line 456
$memory_2 = {cond => $memory_3,if => $memory_4,elsif => $memory_5,else => $memory_6,};
#line 456
undef($memory_3);
#line 456
undef($memory_4);
#line 456
undef($memory_5);
#line 456
undef($memory_6);
#line 458
$memory_3 = c_rt_lib::to_nl(1);
#line 458
translator_priv::print_if($memory_2, $memory_3, $memory_1);
#line 458
undef($memory_3);
#line 458
undef($memory_2);
#line 458
undef($memory_0);
#line 458
$_[1] = $memory_1;return;
$_[1] = $memory_1;}

sub translator_priv::print_if($$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;my $memory_13;my $memory_14;my $memory_15;$memory_0 = $_[0];$memory_1 = $_[1];$memory_2 = $_[2];Scalar::Util::weaken($_[2]) if ref($_[2]);
#line 462
$memory_3 = translator_priv::save_registers($memory_2);
#line 463
$memory_4 = translator_priv::get_sim_label($memory_2);
#line 464
$memory_5 = translator_priv::get_sim_label($memory_2);
#line 465
$memory_6 = translator_priv::new_register($memory_2);
#line 466
$memory_7 = translator_priv::save_registers($memory_2);
#line 467
$memory_8 = $memory_0->{'cond'};
#line 467
translator_priv::print_val($memory_8, $memory_6, $memory_2);
#line 467
undef($memory_8);
#line 468
$memory_9 = "!";
#line 468
$memory_8 = {dest => $memory_6,src => $memory_6,op => $memory_9,};
#line 468
undef($memory_9);
#line 468
$memory_8 = c_rt_lib::ov_mk_arg('una_op', $memory_8);
#line 468
translator_priv::print($memory_2, $memory_8);
#line 468
undef($memory_8);
#line 469
translator_priv::restore_registers($memory_7, $memory_2);
#line 470
translator_priv::print_if_goto($memory_5, $memory_6, $memory_2);
#line 471
$memory_8 = $memory_0->{'if'};
#line 471
translator_priv::print_cmd($memory_8, $memory_2);
#line 471
undef($memory_8);
#line 472
$memory_8 = $memory_1;
#line 472
$memory_8 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 472
$memory_8 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 472
if (c_rt_lib::check_true($memory_8)) {goto label_30;}
#line 472
$memory_10 = $memory_0->{'if'};
#line 472
$memory_10 = $memory_10->{'debug'};
#line 472
$memory_9 = translator::last_debug_char($memory_10);
#line 472
undef($memory_10);
#line 472
translator_priv::start_new_instruction($memory_9, $memory_2);
#line 472
undef($memory_9);
#line 472
goto label_30;
#line 472
label_30:
#line 472
undef($memory_8);
#line 473
$memory_8 = c_rt_lib::ov_mk_arg('goto', $memory_4);
#line 473
translator_priv::print($memory_2, $memory_8);
#line 473
undef($memory_8);
#line 474
translator_priv::print_sim_label($memory_5, $memory_2);
#line 475
$memory_8 = $memory_0->{'elsif'};
#line 475
$memory_10 = 0;
#line 475
$memory_11 = 1;
#line 475
$memory_12 = c_rt_lib::array_len($memory_8);
#line 475
label_40:
#line 475
$memory_13 = c_rt_lib::to_nl($memory_10 >= $memory_12);
#line 475
if (c_rt_lib::check_true($memory_13)) {goto label_76;}
#line 475
$memory_9 = $memory_8->[$memory_10];
#line 476
$memory_14 = $memory_9->{'debug'};
#line 476
translator_priv::start_new_instruction($memory_14, $memory_2);
#line 476
undef($memory_14);
#line 477
$memory_14 = translator_priv::get_sim_label($memory_2);
#line 477
$memory_5 = $memory_14;
#line 477
undef($memory_14);
#line 478
$memory_14 = $memory_9->{'cond'};
#line 478
translator_priv::print_val($memory_14, $memory_6, $memory_2);
#line 478
undef($memory_14);
#line 479
$memory_15 = "!";
#line 479
$memory_14 = {dest => $memory_6,src => $memory_6,op => $memory_15,};
#line 479
undef($memory_15);
#line 479
$memory_14 = c_rt_lib::ov_mk_arg('una_op', $memory_14);
#line 479
translator_priv::print($memory_2, $memory_14);
#line 479
undef($memory_14);
#line 480
translator_priv::restore_registers($memory_7, $memory_2);
#line 481
translator_priv::print_if_goto($memory_5, $memory_6, $memory_2);
#line 482
$memory_14 = $memory_9->{'cmd'};
#line 482
translator_priv::print_cmd($memory_14, $memory_2);
#line 482
undef($memory_14);
#line 483
$memory_15 = $memory_9->{'cmd'};
#line 483
$memory_15 = $memory_15->{'debug'};
#line 483
$memory_14 = translator::last_debug_char($memory_15);
#line 483
undef($memory_15);
#line 483
translator_priv::start_new_instruction($memory_14, $memory_2);
#line 483
undef($memory_14);
#line 484
$memory_14 = c_rt_lib::ov_mk_arg('goto', $memory_4);
#line 484
translator_priv::print($memory_2, $memory_14);
#line 484
undef($memory_14);
#line 485
translator_priv::print_sim_label($memory_5, $memory_2);
#line 486
$memory_10 = $memory_10 + $memory_11;
#line 486
goto label_40;
#line 486
label_76:
#line 486
undef($memory_8);
#line 486
undef($memory_9);
#line 486
undef($memory_10);
#line 486
undef($memory_11);
#line 486
undef($memory_12);
#line 486
undef($memory_13);
#line 487
$memory_8 = $memory_0->{'else'};
#line 487
$memory_8 = $memory_8->{'cmd'};
#line 487
$memory_8 = c_rt_lib::ov_is($memory_8, 'nop');
#line 487
$memory_8 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 487
$memory_8 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 487
if (c_rt_lib::check_true($memory_8)) {goto label_102;}
#line 488
$memory_9 = $memory_0->{'else'};
#line 488
translator_priv::print_cmd($memory_9, $memory_2);
#line 488
undef($memory_9);
#line 489
$memory_10 = $memory_0->{'else'};
#line 489
$memory_10 = $memory_10->{'debug'};
#line 489
$memory_9 = translator::last_debug_char($memory_10);
#line 489
undef($memory_10);
#line 489
translator_priv::start_new_instruction($memory_9, $memory_2);
#line 489
undef($memory_9);
#line 490
$memory_9 = c_rt_lib::ov_mk_arg('goto', $memory_4);
#line 490
translator_priv::print($memory_2, $memory_9);
#line 490
undef($memory_9);
#line 491
goto label_102;
#line 491
label_102:
#line 491
undef($memory_8);
#line 492
translator_priv::print_sim_label($memory_4, $memory_2);
#line 493
translator_priv::restore_registers($memory_3, $memory_2);
#line 493
undef($memory_3);
#line 493
undef($memory_4);
#line 493
undef($memory_5);
#line 493
undef($memory_6);
#line 493
undef($memory_7);
#line 493
undef($memory_0);
#line 493
undef($memory_1);
#line 493
$_[2] = $memory_2;return;
$_[2] = $memory_2;}

sub translator_priv::print_call_base($$$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;$memory_0 = $_[0];$memory_1 = $_[1];$memory_2 = $_[2];$memory_3 = $_[3];Scalar::Util::weaken($_[3]) if ref($_[3]);
#line 500
$memory_5 = "c_rt_lib";
#line 500
$memory_4 = {dest => $memory_0,mod => $memory_5,fun_name => $memory_1,args => $memory_2,};
#line 500
undef($memory_5);
#line 500
$memory_4 = c_rt_lib::ov_mk_arg('call', $memory_4);
#line 500
translator_priv::print($memory_3, $memory_4);
#line 500
undef($memory_4);
#line 500
undef($memory_0);
#line 500
undef($memory_1);
#line 500
undef($memory_2);
#line 500
$_[3] = $memory_3;return;
$_[3] = $memory_3;}

sub translator_priv::save_loop_break($$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];$memory_2 = $_[2];
#line 504
$memory_3 = $memory_0->{'loop_label'};
#line 505
$memory_4 = translator_priv::save_registers($memory_0);
#line 506
$memory_5 = {label => $memory_1,logic => $memory_4,};
#line 506
$memory_6 = "loop_label";
#line 506
$memory_6 = c_rt_lib::get_ref_hash($memory_0, $memory_6);
#line 506
$memory_7 = $memory_5;
#line 506
 if (c_rt_lib::get_hashcount($memory_6) > 1) {$memory_6 = {%{$memory_6}};}$memory_6->{'break'} = $memory_7;
#line 506
$memory_8 = "loop_label";
#line 506
c_rt_lib::set_ref_hash($memory_0, $memory_8, $memory_6);
#line 506
undef($memory_8);
#line 506
undef($memory_5);
#line 506
undef($memory_6);
#line 506
undef($memory_7);
#line 507
$memory_5 = {label => $memory_2,logic => $memory_4,};
#line 507
$memory_6 = "loop_label";
#line 507
$memory_6 = c_rt_lib::get_ref_hash($memory_0, $memory_6);
#line 507
$memory_7 = $memory_5;
#line 507
 if (c_rt_lib::get_hashcount($memory_6) > 1) {$memory_6 = {%{$memory_6}};}$memory_6->{'continue'} = $memory_7;
#line 507
$memory_8 = "loop_label";
#line 507
c_rt_lib::set_ref_hash($memory_0, $memory_8, $memory_6);
#line 507
undef($memory_8);
#line 507
undef($memory_5);
#line 507
undef($memory_6);
#line 507
undef($memory_7);
#line 508
undef($memory_1);
#line 508
undef($memory_2);
#line 508
undef($memory_4);
#line 508
$_[0] = $memory_0;return $memory_3;
#line 508
undef($memory_3);
#line 508
undef($memory_4);
#line 508
undef($memory_1);
#line 508
undef($memory_2);
#line 508
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub translator_priv::print_fora($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;my $memory_13;my $memory_14;my $memory_15;$memory_0 = $_[0];$memory_1 = $_[1];Scalar::Util::weaken($_[1]) if ref($_[1]);
#line 512
$memory_2 = $memory_1->{'debug'};
#line 512
$memory_2 = $memory_2->{'nast_debug'};
#line 513
$memory_3 = translator_priv::save_registers($memory_1);
#line 514
$memory_5 = $memory_0->{'array'};
#line 514
$memory_4 = translator_priv::calc_val($memory_5, $memory_1);
#line 514
undef($memory_5);
#line 515
$memory_6 = $memory_0->{'iter'};
#line 515
$memory_5 = translator_priv::print_var_decl($memory_6, $memory_1);
#line 515
undef($memory_6);
#line 516
$memory_6 = translator_priv::get_sim_label($memory_1);
#line 517
$memory_7 = translator_priv::get_sim_label($memory_1);
#line 518
$memory_8 = translator_priv::get_sim_label($memory_1);
#line 519
$memory_9 = translator_priv::new_register($memory_1);
#line 520
$memory_10 = 0;
#line 520
translator_priv::load_const($memory_10, $memory_9, $memory_1);
#line 520
undef($memory_10);
#line 521
$memory_10 = translator_priv::new_register($memory_1);
#line 522
$memory_11 = 1;
#line 522
translator_priv::load_const($memory_11, $memory_10, $memory_1);
#line 522
undef($memory_11);
#line 523
$memory_11 = translator_priv::new_register($memory_1);
#line 524
$memory_12 = "array_len";
#line 524
$memory_14 = c_rt_lib::ov_mk_arg('val', $memory_4);
#line 524
$memory_13 = [$memory_14];
#line 524
undef($memory_14);
#line 524
translator_priv::print_call_base($memory_11, $memory_12, $memory_13, $memory_1);
#line 524
undef($memory_13);
#line 524
undef($memory_12);
#line 525
$memory_12 = translator_priv::new_register($memory_1);
#line 526
translator_priv::print_sim_label($memory_8, $memory_1);
#line 527
$memory_13 = ">=";
#line 527
translator_priv::print_bin_op_operator_command($memory_12, $memory_9, $memory_11, $memory_13, $memory_1);
#line 527
undef($memory_13);
#line 528
translator_priv::print_if_goto($memory_6, $memory_12, $memory_1);
#line 529
$memory_13 = {dest => $memory_5,src => $memory_4,idx => $memory_9,};
#line 529
$memory_13 = c_rt_lib::ov_mk_arg('get_frm_idx', $memory_13);
#line 529
translator_priv::print($memory_1, $memory_13);
#line 529
undef($memory_13);
#line 530
$memory_13 = translator_priv::save_loop_break($memory_1, $memory_6, $memory_7);
#line 531
$memory_14 = $memory_0->{'cmd'};
#line 531
translator_priv::print_cmd($memory_14, $memory_1);
#line 531
undef($memory_14);
#line 532
translator_priv::print_sim_label($memory_7, $memory_1);
#line 533
$memory_14 = $memory_0->{'short'};
#line 533
$memory_14 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_14));
#line 533
$memory_14 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_14));
#line 533
if (c_rt_lib::check_true($memory_14)) {goto label_51;}
#line 533
$memory_15 = translator::last_debug_char($memory_2);
#line 533
translator_priv::start_new_instruction($memory_15, $memory_1);
#line 533
undef($memory_15);
#line 533
goto label_51;
#line 533
label_51:
#line 533
undef($memory_14);
#line 534
$memory_15 = "+";
#line 534
$memory_14 = {dest => $memory_9,left => $memory_9,right => $memory_10,op => $memory_15,};
#line 534
undef($memory_15);
#line 534
$memory_14 = c_rt_lib::ov_mk_arg('bin_op', $memory_14);
#line 534
translator_priv::print($memory_1, $memory_14);
#line 534
undef($memory_14);
#line 535
$memory_14 = c_rt_lib::ov_mk_arg('goto', $memory_8);
#line 535
translator_priv::print($memory_1, $memory_14);
#line 535
undef($memory_14);
#line 536
translator_priv::print_sim_label($memory_6, $memory_1);
#line 537
$memory_14 = $memory_13;
#line 537
 if (c_rt_lib::get_hashcount($memory_1) > 1) {$memory_1 = {%{$memory_1}};}$memory_1->{'loop_label'} = $memory_14;
#line 537
undef($memory_14);
#line 538
translator_priv::restore_registers($memory_3, $memory_1);
#line 538
undef($memory_2);
#line 538
undef($memory_3);
#line 538
undef($memory_4);
#line 538
undef($memory_5);
#line 538
undef($memory_6);
#line 538
undef($memory_7);
#line 538
undef($memory_8);
#line 538
undef($memory_9);
#line 538
undef($memory_10);
#line 538
undef($memory_11);
#line 538
undef($memory_12);
#line 538
undef($memory_13);
#line 538
undef($memory_0);
#line 538
$_[1] = $memory_1;return;
$_[1] = $memory_1;}

sub translator_priv::print_loop($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;$memory_0 = $_[0];$memory_1 = $_[1];Scalar::Util::weaken($_[1]) if ref($_[1]);
#line 542
$memory_2 = translator_priv::save_registers($memory_1);
#line 543
$memory_3 = translator_priv::get_sim_label($memory_1);
#line 544
$memory_4 = translator_priv::get_sim_label($memory_1);
#line 545
translator_priv::print_sim_label($memory_4, $memory_1);
#line 546
$memory_5 = translator_priv::save_loop_break($memory_1, $memory_3, $memory_4);
#line 547
translator_priv::print_cmd($memory_0, $memory_1);
#line 548
$memory_6 = $memory_0->{'debug'};
#line 548
translator_priv::start_new_instruction($memory_6, $memory_1);
#line 548
undef($memory_6);
#line 549
$memory_6 = c_rt_lib::ov_mk_arg('goto', $memory_4);
#line 549
translator_priv::print($memory_1, $memory_6);
#line 549
undef($memory_6);
#line 550
translator_priv::print_sim_label($memory_3, $memory_1);
#line 551
$memory_6 = $memory_5;
#line 551
 if (c_rt_lib::get_hashcount($memory_1) > 1) {$memory_1 = {%{$memory_1}};}$memory_1->{'loop_label'} = $memory_6;
#line 551
undef($memory_6);
#line 552
translator_priv::restore_registers($memory_2, $memory_1);
#line 552
undef($memory_2);
#line 552
undef($memory_3);
#line 552
undef($memory_4);
#line 552
undef($memory_5);
#line 552
undef($memory_0);
#line 552
$_[1] = $memory_1;return;
$_[1] = $memory_1;}

sub translator_priv::print_rep($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;my $memory_13;$memory_0 = $_[0];$memory_1 = $_[1];Scalar::Util::weaken($_[1]) if ref($_[1]);
#line 556
$memory_2 = translator_priv::save_registers($memory_1);
#line 557
$memory_3 = translator_priv::get_sim_label($memory_1);
#line 558
$memory_4 = translator_priv::get_sim_label($memory_1);
#line 559
$memory_5 = translator_priv::get_sim_label($memory_1);
#line 560
$memory_7 = $memory_0->{'count'};
#line 560
$memory_6 = translator_priv::calc_val($memory_7, $memory_1);
#line 560
undef($memory_7);
#line 561
$memory_8 = $memory_0->{'iter'};
#line 561
$memory_7 = translator_priv::print_var_decl($memory_8, $memory_1);
#line 561
undef($memory_8);
#line 562
$memory_8 = 0;
#line 562
translator_priv::load_const($memory_8, $memory_7, $memory_1);
#line 562
undef($memory_8);
#line 563
$memory_8 = translator_priv::new_register($memory_1);
#line 564
$memory_9 = 1;
#line 564
translator_priv::load_const($memory_9, $memory_8, $memory_1);
#line 564
undef($memory_9);
#line 565
$memory_9 = translator_priv::new_register($memory_1);
#line 566
translator_priv::print_sim_label($memory_5, $memory_1);
#line 567
$memory_10 = ">=";
#line 567
translator_priv::print_bin_op_operator_command($memory_9, $memory_7, $memory_6, $memory_10, $memory_1);
#line 567
undef($memory_10);
#line 568
translator_priv::print_if_goto($memory_3, $memory_9, $memory_1);
#line 569
$memory_10 = translator_priv::save_loop_break($memory_1, $memory_3, $memory_4);
#line 570
$memory_11 = $memory_0->{'cmd'};
#line 570
translator_priv::print_cmd($memory_11, $memory_1);
#line 570
undef($memory_11);
#line 571
translator_priv::print_sim_label($memory_4, $memory_1);
#line 572
$memory_11 = $memory_0->{'short'};
#line 572
$memory_11 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_11));
#line 572
$memory_11 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_11));
#line 572
if (c_rt_lib::check_true($memory_11)) {goto label_39;}
#line 572
$memory_13 = $memory_0->{'cmd'};
#line 572
$memory_13 = $memory_13->{'debug'};
#line 572
$memory_12 = translator::last_debug_char($memory_13);
#line 572
undef($memory_13);
#line 572
translator_priv::start_new_instruction($memory_12, $memory_1);
#line 572
undef($memory_12);
#line 572
goto label_39;
#line 572
label_39:
#line 572
undef($memory_11);
#line 573
$memory_12 = "+";
#line 573
$memory_11 = {dest => $memory_7,left => $memory_7,right => $memory_8,op => $memory_12,};
#line 573
undef($memory_12);
#line 573
$memory_11 = c_rt_lib::ov_mk_arg('bin_op', $memory_11);
#line 573
translator_priv::print($memory_1, $memory_11);
#line 573
undef($memory_11);
#line 574
$memory_11 = c_rt_lib::ov_mk_arg('goto', $memory_5);
#line 574
translator_priv::print($memory_1, $memory_11);
#line 574
undef($memory_11);
#line 575
translator_priv::print_sim_label($memory_3, $memory_1);
#line 576
$memory_11 = $memory_10;
#line 576
 if (c_rt_lib::get_hashcount($memory_1) > 1) {$memory_1 = {%{$memory_1}};}$memory_1->{'loop_label'} = $memory_11;
#line 576
undef($memory_11);
#line 577
translator_priv::restore_registers($memory_2, $memory_1);
#line 577
undef($memory_2);
#line 577
undef($memory_3);
#line 577
undef($memory_4);
#line 577
undef($memory_5);
#line 577
undef($memory_6);
#line 577
undef($memory_7);
#line 577
undef($memory_8);
#line 577
undef($memory_9);
#line 577
undef($memory_10);
#line 577
undef($memory_0);
#line 577
$_[1] = $memory_1;return;
$_[1] = $memory_1;}

sub translator_priv::print_forh($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;my $memory_13;my $memory_14;$memory_0 = $_[0];$memory_1 = $_[1];Scalar::Util::weaken($_[1]) if ref($_[1]);
#line 581
$memory_2 = $memory_1->{'debug'};
#line 581
$memory_2 = $memory_2->{'nast_debug'};
#line 582
$memory_3 = translator_priv::save_registers($memory_1);
#line 583
$memory_4 = translator_priv::get_sim_label($memory_1);
#line 584
$memory_5 = translator_priv::get_sim_label($memory_1);
#line 585
$memory_6 = translator_priv::get_sim_label($memory_1);
#line 586
$memory_8 = $memory_0->{'hash'};
#line 586
$memory_7 = translator_priv::calc_val($memory_8, $memory_1);
#line 586
undef($memory_8);
#line 587
$memory_9 = $memory_0->{'key'};
#line 587
$memory_8 = translator_priv::print_var_decl($memory_9, $memory_1);
#line 587
undef($memory_9);
#line 588
$memory_10 = $memory_0->{'val'};
#line 588
$memory_9 = translator_priv::print_var_decl($memory_10, $memory_1);
#line 588
undef($memory_10);
#line 589
$memory_10 = translator_priv::new_register($memory_1);
#line 590
$memory_11 = "init_iter";
#line 590
$memory_13 = c_rt_lib::ov_mk_arg('val', $memory_7);
#line 590
$memory_12 = [$memory_13];
#line 590
undef($memory_13);
#line 590
translator_priv::print_call_base($memory_10, $memory_11, $memory_12, $memory_1);
#line 590
undef($memory_12);
#line 590
undef($memory_11);
#line 591
translator_priv::print_sim_label($memory_6, $memory_1);
#line 592
$memory_11 = "is_end_hash";
#line 592
$memory_13 = c_rt_lib::ov_mk_arg('val', $memory_10);
#line 592
$memory_12 = [$memory_13];
#line 592
undef($memory_13);
#line 592
translator_priv::print_call_base($memory_8, $memory_11, $memory_12, $memory_1);
#line 592
undef($memory_12);
#line 592
undef($memory_11);
#line 593
translator_priv::print_if_goto($memory_4, $memory_8, $memory_1);
#line 594
$memory_11 = "get_key_iter";
#line 594
$memory_13 = c_rt_lib::ov_mk_arg('val', $memory_10);
#line 594
$memory_12 = [$memory_13];
#line 594
undef($memory_13);
#line 594
translator_priv::print_call_base($memory_8, $memory_11, $memory_12, $memory_1);
#line 594
undef($memory_12);
#line 594
undef($memory_11);
#line 595
$memory_11 = "hash_get_value";
#line 595
$memory_13 = c_rt_lib::ov_mk_arg('val', $memory_7);
#line 595
$memory_14 = c_rt_lib::ov_mk_arg('val', $memory_8);
#line 595
$memory_12 = [$memory_13,$memory_14];
#line 595
undef($memory_13);
#line 595
undef($memory_14);
#line 595
translator_priv::print_call_base($memory_9, $memory_11, $memory_12, $memory_1);
#line 595
undef($memory_12);
#line 595
undef($memory_11);
#line 596
$memory_11 = translator_priv::save_loop_break($memory_1, $memory_4, $memory_5);
#line 597
$memory_12 = $memory_0->{'cmd'};
#line 597
translator_priv::print_cmd($memory_12, $memory_1);
#line 597
undef($memory_12);
#line 598
translator_priv::print_sim_label($memory_5, $memory_1);
#line 599
$memory_12 = $memory_0->{'short'};
#line 599
$memory_12 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_12));
#line 599
$memory_12 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_12));
#line 599
if (c_rt_lib::check_true($memory_12)) {goto label_61;}
#line 599
$memory_13 = translator::last_debug_char($memory_2);
#line 599
translator_priv::start_new_instruction($memory_13, $memory_1);
#line 599
undef($memory_13);
#line 599
goto label_61;
#line 599
label_61:
#line 599
undef($memory_12);
#line 600
$memory_12 = "next_iter";
#line 600
$memory_14 = c_rt_lib::ov_mk_arg('val', $memory_10);
#line 600
$memory_13 = [$memory_14];
#line 600
undef($memory_14);
#line 600
translator_priv::print_call_base($memory_10, $memory_12, $memory_13, $memory_1);
#line 600
undef($memory_13);
#line 600
undef($memory_12);
#line 601
$memory_12 = c_rt_lib::ov_mk_arg('goto', $memory_6);
#line 601
translator_priv::print($memory_1, $memory_12);
#line 601
undef($memory_12);
#line 602
translator_priv::print_sim_label($memory_4, $memory_1);
#line 603
$memory_12 = $memory_11;
#line 603
 if (c_rt_lib::get_hashcount($memory_1) > 1) {$memory_1 = {%{$memory_1}};}$memory_1->{'loop_label'} = $memory_12;
#line 603
undef($memory_12);
#line 604
translator_priv::restore_registers($memory_3, $memory_1);
#line 604
undef($memory_2);
#line 604
undef($memory_3);
#line 604
undef($memory_4);
#line 604
undef($memory_5);
#line 604
undef($memory_6);
#line 604
undef($memory_7);
#line 604
undef($memory_8);
#line 604
undef($memory_9);
#line 604
undef($memory_10);
#line 604
undef($memory_11);
#line 604
undef($memory_0);
#line 604
$_[1] = $memory_1;return;
$_[1] = $memory_1;}

sub translator_priv::print_while($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;$memory_0 = $_[0];$memory_1 = $_[1];Scalar::Util::weaken($_[1]) if ref($_[1]);
#line 608
$memory_2 = translator_priv::save_registers($memory_1);
#line 609
$memory_3 = translator_priv::get_sim_label($memory_1);
#line 610
$memory_4 = translator_priv::get_sim_label($memory_1);
#line 611
$memory_5 = $memory_1->{'debug'};
#line 611
$memory_5 = $memory_5->{'nast_debug'};
#line 612
translator_priv::print_sim_label($memory_4, $memory_1);
#line 613
$memory_7 = $memory_0->{'cond'};
#line 613
$memory_6 = translator_priv::calc_val($memory_7, $memory_1);
#line 613
undef($memory_7);
#line 614
$memory_8 = "!";
#line 614
$memory_7 = {dest => $memory_6,src => $memory_6,op => $memory_8,};
#line 614
undef($memory_8);
#line 614
$memory_7 = c_rt_lib::ov_mk_arg('una_op', $memory_7);
#line 614
translator_priv::print($memory_1, $memory_7);
#line 614
undef($memory_7);
#line 615
translator_priv::print_if_goto($memory_3, $memory_6, $memory_1);
#line 616
$memory_7 = translator_priv::save_loop_break($memory_1, $memory_3, $memory_4);
#line 617
$memory_8 = $memory_0->{'cmd'};
#line 617
translator_priv::print_cmd($memory_8, $memory_1);
#line 617
undef($memory_8);
#line 618
$memory_8 = $memory_0->{'short'};
#line 618
$memory_8 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 618
$memory_8 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 618
if (c_rt_lib::check_true($memory_8)) {goto label_28;}
#line 618
$memory_9 = translator::last_debug_char($memory_5);
#line 618
translator_priv::start_new_instruction($memory_9, $memory_1);
#line 618
undef($memory_9);
#line 618
goto label_28;
#line 618
label_28:
#line 618
undef($memory_8);
#line 619
$memory_8 = c_rt_lib::ov_mk_arg('goto', $memory_4);
#line 619
translator_priv::print($memory_1, $memory_8);
#line 619
undef($memory_8);
#line 620
translator_priv::print_sim_label($memory_3, $memory_1);
#line 621
$memory_8 = $memory_7;
#line 621
 if (c_rt_lib::get_hashcount($memory_1) > 1) {$memory_1 = {%{$memory_1}};}$memory_1->{'loop_label'} = $memory_8;
#line 621
undef($memory_8);
#line 622
translator_priv::restore_registers($memory_2, $memory_1);
#line 622
undef($memory_2);
#line 622
undef($memory_3);
#line 622
undef($memory_4);
#line 622
undef($memory_5);
#line 622
undef($memory_6);
#line 622
undef($memory_7);
#line 622
undef($memory_0);
#line 622
$_[1] = $memory_1;return;
$_[1] = $memory_1;}

sub translator_priv::print_for($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;$memory_0 = $_[0];$memory_1 = $_[1];Scalar::Util::weaken($_[1]) if ref($_[1]);
#line 626
$memory_2 = translator_priv::save_registers($memory_1);
#line 627
$memory_3 = translator_priv::get_sim_label($memory_1);
#line 628
$memory_4 = translator_priv::get_sim_label($memory_1);
#line 629
$memory_5 = translator_priv::get_sim_label($memory_1);
#line 630
$memory_6 = $memory_0->{'start'};
#line 630
$memory_7 = c_rt_lib::ov_is($memory_6, 'value');
#line 630
if (c_rt_lib::check_true($memory_7)) {goto label_12;}
#line 632
$memory_7 = c_rt_lib::ov_is($memory_6, 'var_decl');
#line 632
if (c_rt_lib::check_true($memory_7)) {goto label_19;}
#line 632
$memory_7 = "NOMATCHALERT";
#line 632
$memory_7 = [$memory_7,$memory_6];
#line 632
die(dfile::ssave($memory_7));
#line 630
label_12:
#line 630
$memory_8 = c_rt_lib::ov_as($memory_6, 'value');
#line 631
$memory_9 = "";
#line 631
translator_priv::print_val($memory_8, $memory_9, $memory_1);
#line 631
undef($memory_9);
#line 631
undef($memory_8);
#line 632
goto label_24;
#line 632
label_19:
#line 632
$memory_8 = c_rt_lib::ov_as($memory_6, 'var_decl');
#line 633
translator_priv::print_var_decl($memory_8, $memory_1);
#line 633
undef($memory_8);
#line 634
goto label_24;
#line 634
label_24:
#line 634
undef($memory_6);
#line 634
undef($memory_7);
#line 635
translator_priv::print_sim_label($memory_4, $memory_1);
#line 636
$memory_6 = $memory_0->{'cond'};
#line 636
$memory_6 = $memory_6->{'value'};
#line 636
$memory_6 = c_rt_lib::ov_is($memory_6, 'nop');
#line 636
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 636
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 636
if (c_rt_lib::check_true($memory_6)) {goto label_46;}
#line 637
$memory_8 = $memory_0->{'cond'};
#line 637
$memory_7 = translator_priv::calc_val($memory_8, $memory_1);
#line 637
undef($memory_8);
#line 638
$memory_9 = "!";
#line 638
$memory_8 = {dest => $memory_7,src => $memory_7,op => $memory_9,};
#line 638
undef($memory_9);
#line 638
$memory_8 = c_rt_lib::ov_mk_arg('una_op', $memory_8);
#line 638
translator_priv::print($memory_1, $memory_8);
#line 638
undef($memory_8);
#line 639
translator_priv::print_if_goto($memory_3, $memory_7, $memory_1);
#line 639
undef($memory_7);
#line 640
goto label_46;
#line 640
label_46:
#line 640
undef($memory_6);
#line 641
$memory_6 = translator_priv::save_loop_break($memory_1, $memory_3, $memory_5);
#line 642
$memory_7 = $memory_0->{'cmd'};
#line 642
translator_priv::print_cmd($memory_7, $memory_1);
#line 642
undef($memory_7);
#line 643
translator_priv::print_sim_label($memory_5, $memory_1);
#line 644
$memory_7 = $memory_0->{'iter'};
#line 644
$memory_8 = "";
#line 644
translator_priv::print_val($memory_7, $memory_8, $memory_1);
#line 644
undef($memory_8);
#line 644
undef($memory_7);
#line 645
$memory_8 = $memory_0->{'cmd'};
#line 645
$memory_8 = $memory_8->{'debug'};
#line 645
$memory_7 = translator::last_debug_char($memory_8);
#line 645
undef($memory_8);
#line 645
translator_priv::start_new_instruction($memory_7, $memory_1);
#line 645
undef($memory_7);
#line 646
$memory_7 = c_rt_lib::ov_mk_arg('goto', $memory_4);
#line 646
translator_priv::print($memory_1, $memory_7);
#line 646
undef($memory_7);
#line 647
translator_priv::print_sim_label($memory_3, $memory_1);
#line 648
$memory_7 = $memory_6;
#line 648
 if (c_rt_lib::get_hashcount($memory_1) > 1) {$memory_1 = {%{$memory_1}};}$memory_1->{'loop_label'} = $memory_7;
#line 648
undef($memory_7);
#line 649
translator_priv::restore_registers($memory_2, $memory_1);
#line 649
undef($memory_2);
#line 649
undef($memory_3);
#line 649
undef($memory_4);
#line 649
undef($memory_5);
#line 649
undef($memory_6);
#line 649
undef($memory_0);
#line 649
$_[1] = $memory_1;return;
$_[1] = $memory_1;}

sub translator_priv::print_match($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;my $memory_13;my $memory_14;my $memory_15;my $memory_16;my $memory_17;my $memory_18;my $memory_19;my $memory_20;$memory_0 = $_[0];$memory_1 = $_[1];Scalar::Util::weaken($_[1]) if ref($_[1]);
#line 653
$memory_2 = translator_priv::save_registers($memory_1);
#line 654
$memory_3 = [];
#line 655
$memory_5 = $memory_0->{'val'};
#line 655
$memory_4 = translator_priv::calc_val($memory_5, $memory_1);
#line 655
undef($memory_5);
#line 656
$memory_5 = translator_priv::new_register($memory_1);
#line 657
$memory_6 = translator_priv::get_sim_label($memory_1);
#line 658
$memory_7 = $memory_0->{'branch_list'};
#line 658
$memory_9 = 0;
#line 658
$memory_10 = 1;
#line 658
$memory_11 = c_rt_lib::array_len($memory_7);
#line 658
label_11:
#line 658
$memory_12 = c_rt_lib::to_nl($memory_9 >= $memory_11);
#line 658
if (c_rt_lib::check_true($memory_12)) {goto label_31;}
#line 658
$memory_8 = $memory_7->[$memory_9];
#line 659
$memory_13 = $memory_8->{'debug'};
#line 659
translator_priv::start_new_instruction($memory_13, $memory_1);
#line 659
undef($memory_13);
#line 660
$memory_14 = $memory_8->{'variant'};
#line 660
$memory_14 = $memory_14->{'name'};
#line 660
$memory_13 = {dest => $memory_5,src => $memory_4,type => $memory_14,};
#line 660
undef($memory_14);
#line 660
$memory_13 = c_rt_lib::ov_mk_arg('ov_is', $memory_13);
#line 660
translator_priv::print($memory_1, $memory_13);
#line 660
undef($memory_13);
#line 661
$memory_13 = translator_priv::get_sim_label($memory_1);
#line 662
translator_priv::print_if_goto($memory_13, $memory_5, $memory_1);
#line 663
array::push($memory_3, $memory_13);
#line 663
undef($memory_13);
#line 664
$memory_9 = $memory_9 + $memory_10;
#line 664
goto label_11;
#line 664
label_31:
#line 664
undef($memory_7);
#line 664
undef($memory_8);
#line 664
undef($memory_9);
#line 664
undef($memory_10);
#line 664
undef($memory_11);
#line 664
undef($memory_12);
#line 665
$memory_7 = "NOMATCHALERT";
#line 665
translator_priv::load_const($memory_7, $memory_5, $memory_1);
#line 665
undef($memory_7);
#line 666
$memory_8 = [$memory_5,$memory_4];
#line 666
$memory_7 = {dest => $memory_5,src => $memory_8,};
#line 666
undef($memory_8);
#line 666
$memory_7 = c_rt_lib::ov_mk_arg('arr_decl', $memory_7);
#line 666
translator_priv::print($memory_1, $memory_7);
#line 666
undef($memory_7);
#line 667
$memory_7 = c_rt_lib::ov_mk_arg('die', $memory_5);
#line 667
translator_priv::print($memory_1, $memory_7);
#line 667
undef($memory_7);
#line 668
$memory_7 = 0;
#line 669
$memory_8 = $memory_0->{'branch_list'};
#line 669
$memory_10 = 0;
#line 669
$memory_11 = 1;
#line 669
$memory_12 = c_rt_lib::array_len($memory_8);
#line 669
label_55:
#line 669
$memory_13 = c_rt_lib::to_nl($memory_10 >= $memory_12);
#line 669
if (c_rt_lib::check_true($memory_13)) {goto label_113;}
#line 669
$memory_9 = $memory_8->[$memory_10];
#line 670
$memory_14 = $memory_9->{'cmd'};
#line 670
$memory_14 = $memory_14->{'debug'};
#line 670
translator_priv::start_new_instruction($memory_14, $memory_1);
#line 670
undef($memory_14);
#line 671
$memory_14 = $memory_3->[$memory_7];
#line 671
translator_priv::print_sim_label($memory_14, $memory_1);
#line 671
undef($memory_14);
#line 672
$memory_14 = translator_priv::save_registers($memory_1);
#line 673
$memory_15 = $memory_9->{'variant'};
#line 673
$memory_15 = $memory_15->{'value'};
#line 673
$memory_16 = c_rt_lib::ov_is($memory_15, 'value');
#line 673
if (c_rt_lib::check_true($memory_16)) {goto label_76;}
#line 676
$memory_16 = c_rt_lib::ov_is($memory_15, 'none');
#line 676
if (c_rt_lib::check_true($memory_16)) {goto label_89;}
#line 676
$memory_16 = "NOMATCHALERT";
#line 676
$memory_16 = [$memory_16,$memory_15];
#line 676
die(dfile::ssave($memory_16));
#line 673
label_76:
#line 673
$memory_17 = c_rt_lib::ov_as($memory_15, 'value');
#line 674
$memory_18 = translator_priv::print_var_decl($memory_17, $memory_1);
#line 675
$memory_20 = $memory_9->{'variant'};
#line 675
$memory_20 = $memory_20->{'name'};
#line 675
$memory_19 = {dest => $memory_18,src => $memory_4,type => $memory_20,};
#line 675
undef($memory_20);
#line 675
$memory_19 = c_rt_lib::ov_mk_arg('ov_as', $memory_19);
#line 675
translator_priv::print($memory_1, $memory_19);
#line 675
undef($memory_19);
#line 675
undef($memory_18);
#line 675
undef($memory_17);
#line 676
goto label_91;
#line 676
label_89:
#line 677
goto label_91;
#line 677
label_91:
#line 677
undef($memory_15);
#line 677
undef($memory_16);
#line 678
$memory_15 = $memory_9->{'cmd'};
#line 678
translator_priv::print_cmd($memory_15, $memory_1);
#line 678
undef($memory_15);
#line 679
translator_priv::restore_registers($memory_14, $memory_1);
#line 680
$memory_16 = $memory_9->{'cmd'};
#line 680
$memory_16 = $memory_16->{'debug'};
#line 680
$memory_15 = translator::last_debug_char($memory_16);
#line 680
undef($memory_16);
#line 680
translator_priv::start_new_instruction($memory_15, $memory_1);
#line 680
undef($memory_15);
#line 681
$memory_15 = c_rt_lib::ov_mk_arg('goto', $memory_6);
#line 681
translator_priv::print($memory_1, $memory_15);
#line 681
undef($memory_15);
#line 682
$memory_15 = 1;
#line 682
$memory_7 = $memory_7 + $memory_15;
#line 682
undef($memory_15);
#line 682
undef($memory_14);
#line 683
$memory_10 = $memory_10 + $memory_11;
#line 683
goto label_55;
#line 683
label_113:
#line 683
undef($memory_8);
#line 683
undef($memory_9);
#line 683
undef($memory_10);
#line 683
undef($memory_11);
#line 683
undef($memory_12);
#line 683
undef($memory_13);
#line 684
translator_priv::print_sim_label($memory_6, $memory_1);
#line 685
translator_priv::restore_registers($memory_2, $memory_1);
#line 685
undef($memory_2);
#line 685
undef($memory_3);
#line 685
undef($memory_4);
#line 685
undef($memory_5);
#line 685
undef($memory_6);
#line 685
undef($memory_7);
#line 685
undef($memory_0);
#line 685
$_[1] = $memory_1;return;
$_[1] = $memory_1;}

sub translator_priv::move($$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;$memory_0 = $_[0];$memory_1 = $_[1];$memory_2 = $_[2];Scalar::Util::weaken($_[2]) if ref($_[2]);
#line 689
$memory_3 = "";
#line 689
$memory_3 = c_rt_lib::to_nl($memory_0 eq $memory_3);
#line 689
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 689
if (c_rt_lib::check_true($memory_3)) {goto label_9;}
#line 689
undef($memory_0);
#line 689
undef($memory_1);
#line 689
undef($memory_3);
#line 689
$_[2] = $memory_2;return;
#line 689
goto label_9;
#line 689
label_9:
#line 689
undef($memory_3);
#line 690
$memory_3 = {dest => $memory_0,src => $memory_1,};
#line 690
$memory_3 = c_rt_lib::ov_mk_arg('move', $memory_3);
#line 690
translator_priv::print($memory_2, $memory_3);
#line 690
undef($memory_3);
#line 690
undef($memory_0);
#line 690
undef($memory_1);
#line 690
$_[2] = $memory_2;return;
$_[2] = $memory_2;}

sub translator_priv::print_bin_op_operator_command($$$$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;$memory_0 = $_[0];$memory_1 = $_[1];$memory_2 = $_[2];$memory_3 = $_[3];$memory_4 = $_[4];Scalar::Util::weaken($_[4]) if ref($_[4]);
#line 695
$memory_5 = "+";
#line 695
$memory_5 = c_rt_lib::to_nl($memory_3 eq $memory_5);
#line 695
if (c_rt_lib::check_true($memory_5)) {goto label_5;}
#line 695
$memory_5 = "+=";
#line 695
$memory_5 = c_rt_lib::to_nl($memory_3 eq $memory_5);
#line 695
label_5:
#line 695
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 695
if (c_rt_lib::check_true($memory_5)) {goto label_12;}
#line 696
$memory_6 = "+";
#line 696
$memory_3 = $memory_6;
#line 696
undef($memory_6);
#line 697
goto label_64;
#line 697
label_12:
#line 697
$memory_5 = "-";
#line 697
$memory_5 = c_rt_lib::to_nl($memory_3 eq $memory_5);
#line 697
if (c_rt_lib::check_true($memory_5)) {goto label_18;}
#line 697
$memory_5 = "-=";
#line 697
$memory_5 = c_rt_lib::to_nl($memory_3 eq $memory_5);
#line 697
label_18:
#line 697
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 697
if (c_rt_lib::check_true($memory_5)) {goto label_25;}
#line 698
$memory_6 = "-";
#line 698
$memory_3 = $memory_6;
#line 698
undef($memory_6);
#line 699
goto label_64;
#line 699
label_25:
#line 699
$memory_5 = "*";
#line 699
$memory_5 = c_rt_lib::to_nl($memory_3 eq $memory_5);
#line 699
if (c_rt_lib::check_true($memory_5)) {goto label_31;}
#line 699
$memory_5 = "*=";
#line 699
$memory_5 = c_rt_lib::to_nl($memory_3 eq $memory_5);
#line 699
label_31:
#line 699
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 699
if (c_rt_lib::check_true($memory_5)) {goto label_38;}
#line 700
$memory_6 = "*";
#line 700
$memory_3 = $memory_6;
#line 700
undef($memory_6);
#line 701
goto label_64;
#line 701
label_38:
#line 701
$memory_5 = "/";
#line 701
$memory_5 = c_rt_lib::to_nl($memory_3 eq $memory_5);
#line 701
if (c_rt_lib::check_true($memory_5)) {goto label_44;}
#line 701
$memory_5 = "/=";
#line 701
$memory_5 = c_rt_lib::to_nl($memory_3 eq $memory_5);
#line 701
label_44:
#line 701
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 701
if (c_rt_lib::check_true($memory_5)) {goto label_51;}
#line 702
$memory_6 = "/";
#line 702
$memory_3 = $memory_6;
#line 702
undef($memory_6);
#line 703
goto label_64;
#line 703
label_51:
#line 703
$memory_5 = ".";
#line 703
$memory_5 = c_rt_lib::to_nl($memory_3 eq $memory_5);
#line 703
if (c_rt_lib::check_true($memory_5)) {goto label_57;}
#line 703
$memory_5 = ".=";
#line 703
$memory_5 = c_rt_lib::to_nl($memory_3 eq $memory_5);
#line 703
label_57:
#line 703
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 703
if (c_rt_lib::check_true($memory_5)) {goto label_64;}
#line 704
$memory_6 = ".";
#line 704
$memory_3 = $memory_6;
#line 704
undef($memory_6);
#line 705
goto label_64;
#line 705
label_64:
#line 705
undef($memory_5);
#line 706
$memory_5 = {dest => $memory_0,left => $memory_1,right => $memory_2,op => $memory_3,};
#line 706
$memory_5 = c_rt_lib::ov_mk_arg('bin_op', $memory_5);
#line 706
translator_priv::print($memory_4, $memory_5);
#line 706
undef($memory_5);
#line 706
undef($memory_0);
#line 706
undef($memory_1);
#line 706
undef($memory_2);
#line 706
undef($memory_3);
#line 706
$_[4] = $memory_4;return;
$_[4] = $memory_4;}

sub translator_priv::print($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];
#line 710
$memory_3 = $memory_0->{'debug'};
#line 710
$memory_4 = c_rt_lib::ov_mk_none('none');
#line 710
$memory_2 = {cmd => $memory_1,debug => $memory_3,annotation => $memory_4,};
#line 710
undef($memory_3);
#line 710
undef($memory_4);
#line 711
$memory_3 = "result";
#line 711
$memory_3 = c_rt_lib::get_ref_hash($memory_0, $memory_3);
#line 711
$memory_4 = "commands";
#line 711
$memory_4 = c_rt_lib::get_ref_hash($memory_3, $memory_4);
#line 711
array::push($memory_4, $memory_2);
#line 711
$memory_5 = "commands";
#line 711
c_rt_lib::set_ref_hash($memory_3, $memory_5, $memory_4);
#line 711
$memory_5 = "result";
#line 711
c_rt_lib::set_ref_hash($memory_0, $memory_5, $memory_3);
#line 711
undef($memory_5);
#line 711
undef($memory_3);
#line 711
undef($memory_4);
#line 712
$memory_3 = {};
#line 712
$memory_4 = "debug";
#line 712
$memory_4 = c_rt_lib::get_ref_hash($memory_0, $memory_4);
#line 712
$memory_5 = $memory_3;
#line 712
 if (c_rt_lib::get_hashcount($memory_4) > 1) {$memory_4 = {%{$memory_4}};}$memory_4->{'declarations'} = $memory_5;
#line 712
$memory_6 = "debug";
#line 712
c_rt_lib::set_ref_hash($memory_0, $memory_6, $memory_4);
#line 712
undef($memory_6);
#line 712
undef($memory_3);
#line 712
undef($memory_4);
#line 712
undef($memory_5);
#line 712
undef($memory_2);
#line 712
undef($memory_1);
#line 712
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub translator_priv::print_if_goto($$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;$memory_0 = $_[0];$memory_1 = $_[1];$memory_2 = $_[2];Scalar::Util::weaken($_[2]) if ref($_[2]);
#line 716
$memory_3 = {dest => $memory_0,src => $memory_1,};
#line 716
$memory_3 = c_rt_lib::ov_mk_arg('if_goto', $memory_3);
#line 716
translator_priv::print($memory_2, $memory_3);
#line 716
undef($memory_3);
#line 716
undef($memory_0);
#line 716
undef($memory_1);
#line 716
$_[2] = $memory_2;return;
$_[2] = $memory_2;}

sub translator_priv::print_get_from_index($$$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;$memory_0 = $_[0];$memory_1 = $_[1];$memory_2 = $_[2];$memory_3 = $_[3];Scalar::Util::weaken($_[3]) if ref($_[3]);
#line 721
$memory_4 = {dest => $memory_0,src => $memory_1,idx => $memory_2,};
#line 721
$memory_4 = c_rt_lib::ov_mk_arg('get_frm_idx', $memory_4);
#line 721
translator_priv::print($memory_3, $memory_4);
#line 721
undef($memory_4);
#line 721
undef($memory_0);
#line 721
undef($memory_1);
#line 721
undef($memory_2);
#line 721
$_[3] = $memory_3;return;
$_[3] = $memory_3;}

sub translator_priv::print_set_at_index($$$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;$memory_0 = $_[0];$memory_1 = $_[1];$memory_2 = $_[2];$memory_3 = $_[3];Scalar::Util::weaken($_[3]) if ref($_[3]);
#line 726
$memory_4 = {src => $memory_0,idx => $memory_1,val => $memory_2,};
#line 726
$memory_4 = c_rt_lib::ov_mk_arg('set_at_idx', $memory_4);
#line 726
translator_priv::print($memory_3, $memory_4);
#line 726
undef($memory_4);
#line 726
undef($memory_0);
#line 726
undef($memory_1);
#line 726
undef($memory_2);
#line 726
$_[3] = $memory_3;return;
$_[3] = $memory_3;}

sub translator_priv::print_get_value($$$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;$memory_0 = $_[0];$memory_1 = $_[1];$memory_2 = $_[2];$memory_3 = $_[3];Scalar::Util::weaken($_[3]) if ref($_[3]);
#line 731
$memory_4 = {dest => $memory_0,src => $memory_1,key => $memory_2,};
#line 731
$memory_4 = c_rt_lib::ov_mk_arg('get_val', $memory_4);
#line 731
translator_priv::print($memory_3, $memory_4);
#line 731
undef($memory_4);
#line 731
undef($memory_0);
#line 731
undef($memory_1);
#line 731
undef($memory_2);
#line 731
$_[3] = $memory_3;return;
$_[3] = $memory_3;}

sub translator_priv::print_set_value($$$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;$memory_0 = $_[0];$memory_1 = $_[1];$memory_2 = $_[2];$memory_3 = $_[3];Scalar::Util::weaken($_[3]) if ref($_[3]);
#line 735
$memory_4 = {src => $memory_0,key => $memory_1,val => $memory_2,};
#line 735
$memory_4 = c_rt_lib::ov_mk_arg('set_val', $memory_4);
#line 735
translator_priv::print($memory_3, $memory_4);
#line 735
undef($memory_4);
#line 735
undef($memory_0);
#line 735
undef($memory_1);
#line 735
undef($memory_2);
#line 735
$_[3] = $memory_3;return;
$_[3] = $memory_3;}

sub translator_priv::get_struct_of_lvalue($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);
#line 739
$memory_1 = [];
#line 740
label_1:
#line 740
$memory_2 = $memory_0->{'value'};
#line 740
$memory_2 = c_rt_lib::ov_is($memory_2, 'bin_op');
#line 740
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 740
if (c_rt_lib::check_true($memory_2)) {goto label_81;}
#line 741
$memory_3 = $memory_0->{'value'};
#line 741
$memory_3 = c_rt_lib::ov_as($memory_3, 'bin_op');
#line 742
$memory_4 = $memory_3->{'op'};
#line 742
$memory_5 = "ARRAY_INDEX";
#line 742
$memory_4 = c_rt_lib::to_nl($memory_4 eq $memory_5);
#line 742
undef($memory_5);
#line 742
if (c_rt_lib::check_true($memory_4)) {goto label_17;}
#line 742
$memory_4 = $memory_3->{'op'};
#line 742
$memory_5 = "HASH_INDEX";
#line 742
$memory_4 = c_rt_lib::to_nl($memory_4 eq $memory_5);
#line 742
undef($memory_5);
#line 742
label_17:
#line 742
if (c_rt_lib::check_true($memory_4)) {goto label_23;}
#line 742
$memory_4 = $memory_3->{'op'};
#line 742
$memory_5 = "->";
#line 742
$memory_4 = c_rt_lib::to_nl($memory_4 eq $memory_5);
#line 742
undef($memory_5);
#line 742
label_23:
#line 742
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 742
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 742
if (c_rt_lib::check_true($memory_4)) {goto label_30;}
#line 742
$memory_5 = [];
#line 742
die(dfile::ssave($memory_5));
#line 742
goto label_30;
#line 742
label_30:
#line 742
undef($memory_4);
#line 742
undef($memory_5);
#line 743
$memory_4 = [];
#line 744
$memory_5 = $memory_3->{'op'};
#line 744
$memory_6 = "ARRAY_INDEX";
#line 744
$memory_5 = c_rt_lib::to_nl($memory_5 eq $memory_6);
#line 744
undef($memory_6);
#line 744
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 744
if (c_rt_lib::check_true($memory_5)) {goto label_47;}
#line 745
$memory_7 = $memory_3->{'right'};
#line 745
$memory_7 = c_rt_lib::ov_mk_arg('index', $memory_7);
#line 745
$memory_6 = [$memory_7];
#line 745
undef($memory_7);
#line 745
$memory_4 = $memory_6;
#line 745
undef($memory_6);
#line 746
goto label_71;
#line 746
label_47:
#line 746
$memory_5 = $memory_3->{'op'};
#line 746
$memory_6 = "HASH_INDEX";
#line 746
$memory_5 = c_rt_lib::to_nl($memory_5 eq $memory_6);
#line 746
undef($memory_6);
#line 746
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 746
if (c_rt_lib::check_true($memory_5)) {goto label_61;}
#line 747
$memory_7 = $memory_3->{'right'};
#line 747
$memory_7 = c_rt_lib::ov_mk_arg('hashkey', $memory_7);
#line 747
$memory_6 = [$memory_7];
#line 747
undef($memory_7);
#line 747
$memory_4 = $memory_6;
#line 747
undef($memory_6);
#line 748
goto label_71;
#line 748
label_61:
#line 749
$memory_7 = $memory_3->{'right'};
#line 749
$memory_7 = $memory_7->{'value'};
#line 749
$memory_7 = c_rt_lib::ov_as($memory_7, 'hash_key');
#line 749
$memory_7 = c_rt_lib::ov_mk_arg('key', $memory_7);
#line 749
$memory_6 = [$memory_7];
#line 749
undef($memory_7);
#line 749
$memory_4 = $memory_6;
#line 749
undef($memory_6);
#line 750
goto label_71;
#line 750
label_71:
#line 750
undef($memory_5);
#line 751
array::append($memory_4, $memory_1);
#line 752
$memory_1 = $memory_4;
#line 753
$memory_5 = $memory_3->{'left'};
#line 753
$memory_0 = $memory_5;
#line 753
undef($memory_5);
#line 753
undef($memory_3);
#line 753
undef($memory_4);
#line 754
goto label_1;
#line 754
label_81:
#line 754
undef($memory_2);
#line 755
$_[0] = $memory_0;return $memory_1;
#line 755
undef($memory_1);
#line 755
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub translator_priv::get_value_of_lvalue($$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;my $memory_13;my $memory_14;my $memory_15;my $memory_16;my $memory_17;my $memory_18;my $memory_19;$memory_0 = $_[0];$memory_1 = $_[1];$memory_2 = $_[2];Scalar::Util::weaken($_[2]) if ref($_[2]);
#line 760
$memory_3 = translator_priv::get_struct_of_lvalue($memory_0);
#line 761
$memory_4 = $memory_0->{'value'};
#line 761
$memory_4 = c_rt_lib::ov_as($memory_4, 'var');
#line 762
$memory_6 = translator_priv::get_var_register($memory_4, $memory_2);
#line 762
$memory_5 = [$memory_6];
#line 762
undef($memory_6);
#line 763
$memory_6 = [];
#line 764
$memory_7 = array::len($memory_3);
#line 764
$memory_8 = 0;
#line 764
$memory_9 = 1;
#line 764
label_10:
#line 764
$memory_10 = c_rt_lib::to_nl($memory_8 >= $memory_7);
#line 764
if (c_rt_lib::check_true($memory_10)) {goto label_185;}
#line 765
$memory_11 = translator_priv::new_register($memory_2);
#line 765
array::push($memory_5, $memory_11);
#line 765
undef($memory_11);
#line 766
$memory_11 = $memory_3->[$memory_8];
#line 766
$memory_12 = c_rt_lib::ov_is($memory_11, 'index');
#line 766
if (c_rt_lib::check_true($memory_12)) {goto label_26;}
#line 771
$memory_12 = c_rt_lib::ov_is($memory_11, 'hashkey');
#line 771
if (c_rt_lib::check_true($memory_12)) {goto label_75;}
#line 776
$memory_12 = c_rt_lib::ov_is($memory_11, 'key');
#line 776
if (c_rt_lib::check_true($memory_12)) {goto label_124;}
#line 776
$memory_12 = "NOMATCHALERT";
#line 776
$memory_12 = [$memory_12,$memory_11];
#line 776
die(dfile::ssave($memory_12));
#line 766
label_26:
#line 766
$memory_13 = c_rt_lib::ov_as($memory_11, 'index');
#line 767
$memory_14 = translator_priv::calc_val($memory_13, $memory_2);
#line 768
$memory_16 = $memory_5->[$memory_8];
#line 768
$memory_15 = {value => $memory_16,index => $memory_14,};
#line 768
undef($memory_16);
#line 768
$memory_15 = c_rt_lib::ov_mk_arg('index', $memory_15);
#line 768
array::push($memory_6, $memory_15);
#line 768
undef($memory_15);
#line 769
$memory_15 = $memory_1;
#line 769
$memory_15 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_15));
#line 769
$memory_16 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_15));
#line 769
if (c_rt_lib::check_true($memory_16)) {goto label_44;}
#line 769
$memory_15 = array::len($memory_3);
#line 769
$memory_17 = 1;
#line 769
$memory_15 = $memory_15 - $memory_17;
#line 769
undef($memory_17);
#line 769
$memory_15 = c_rt_lib::to_nl($memory_8 == $memory_15);
#line 769
label_44:
#line 769
undef($memory_16);
#line 769
$memory_15 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_15));
#line 769
if (c_rt_lib::check_true($memory_15)) {goto label_55;}
#line 769
undef($memory_11);
#line 769
undef($memory_12);
#line 769
undef($memory_13);
#line 769
undef($memory_14);
#line 769
undef($memory_15);
#line 769
goto label_185;
#line 769
goto label_55;
#line 769
label_55:
#line 769
undef($memory_15);
#line 770
$memory_16 = 1;
#line 770
$memory_16 = $memory_8 + $memory_16;
#line 770
$memory_15 = $memory_5->[$memory_16];
#line 770
undef($memory_16);
#line 770
$memory_16 = "get_ref_arr";
#line 770
$memory_18 = $memory_5->[$memory_8];
#line 770
$memory_18 = c_rt_lib::ov_mk_arg('val', $memory_18);
#line 770
$memory_19 = c_rt_lib::ov_mk_arg('val', $memory_14);
#line 770
$memory_17 = [$memory_18,$memory_19];
#line 770
undef($memory_18);
#line 770
undef($memory_19);
#line 770
translator_priv::print_call_base($memory_15, $memory_16, $memory_17, $memory_2);
#line 770
undef($memory_17);
#line 770
undef($memory_16);
#line 770
undef($memory_15);
#line 770
undef($memory_14);
#line 770
undef($memory_13);
#line 771
goto label_180;
#line 771
label_75:
#line 771
$memory_13 = c_rt_lib::ov_as($memory_11, 'hashkey');
#line 772
$memory_14 = translator_priv::calc_val($memory_13, $memory_2);
#line 773
$memory_16 = $memory_5->[$memory_8];
#line 773
$memory_15 = {value => $memory_16,key => $memory_14,};
#line 773
undef($memory_16);
#line 773
$memory_15 = c_rt_lib::ov_mk_arg('hashkey', $memory_15);
#line 773
array::push($memory_6, $memory_15);
#line 773
undef($memory_15);
#line 774
$memory_15 = $memory_1;
#line 774
$memory_15 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_15));
#line 774
$memory_16 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_15));
#line 774
if (c_rt_lib::check_true($memory_16)) {goto label_93;}
#line 774
$memory_15 = array::len($memory_3);
#line 774
$memory_17 = 1;
#line 774
$memory_15 = $memory_15 - $memory_17;
#line 774
undef($memory_17);
#line 774
$memory_15 = c_rt_lib::to_nl($memory_8 == $memory_15);
#line 774
label_93:
#line 774
undef($memory_16);
#line 774
$memory_15 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_15));
#line 774
if (c_rt_lib::check_true($memory_15)) {goto label_104;}
#line 774
undef($memory_11);
#line 774
undef($memory_12);
#line 774
undef($memory_13);
#line 774
undef($memory_14);
#line 774
undef($memory_15);
#line 774
goto label_185;
#line 774
goto label_104;
#line 774
label_104:
#line 774
undef($memory_15);
#line 775
$memory_16 = 1;
#line 775
$memory_16 = $memory_8 + $memory_16;
#line 775
$memory_15 = $memory_5->[$memory_16];
#line 775
undef($memory_16);
#line 775
$memory_16 = "get_ref_hash";
#line 775
$memory_18 = $memory_5->[$memory_8];
#line 775
$memory_18 = c_rt_lib::ov_mk_arg('val', $memory_18);
#line 775
$memory_19 = c_rt_lib::ov_mk_arg('val', $memory_14);
#line 775
$memory_17 = [$memory_18,$memory_19];
#line 775
undef($memory_18);
#line 775
undef($memory_19);
#line 775
translator_priv::print_call_base($memory_15, $memory_16, $memory_17, $memory_2);
#line 775
undef($memory_17);
#line 775
undef($memory_16);
#line 775
undef($memory_15);
#line 775
undef($memory_14);
#line 775
undef($memory_13);
#line 776
goto label_180;
#line 776
label_124:
#line 776
$memory_13 = c_rt_lib::ov_as($memory_11, 'key');
#line 777
$memory_15 = $memory_5->[$memory_8];
#line 777
$memory_14 = {value => $memory_15,key => $memory_13,};
#line 777
undef($memory_15);
#line 777
$memory_14 = c_rt_lib::ov_mk_arg('key', $memory_14);
#line 777
array::push($memory_6, $memory_14);
#line 777
undef($memory_14);
#line 778
$memory_14 = $memory_1;
#line 778
$memory_14 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_14));
#line 778
$memory_15 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_14));
#line 778
if (c_rt_lib::check_true($memory_15)) {goto label_141;}
#line 778
$memory_14 = array::len($memory_3);
#line 778
$memory_16 = 1;
#line 778
$memory_14 = $memory_14 - $memory_16;
#line 778
undef($memory_16);
#line 778
$memory_14 = c_rt_lib::to_nl($memory_8 == $memory_14);
#line 778
label_141:
#line 778
undef($memory_15);
#line 778
$memory_14 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_14));
#line 778
if (c_rt_lib::check_true($memory_14)) {goto label_151;}
#line 778
undef($memory_11);
#line 778
undef($memory_12);
#line 778
undef($memory_13);
#line 778
undef($memory_14);
#line 778
goto label_185;
#line 778
goto label_151;
#line 778
label_151:
#line 778
undef($memory_14);
#line 779
$memory_15 = 1;
#line 779
$memory_15 = $memory_8 + $memory_15;
#line 779
$memory_14 = $memory_5->[$memory_15];
#line 779
undef($memory_15);
#line 779
translator_priv::load_const($memory_13, $memory_14, $memory_2);
#line 779
undef($memory_14);
#line 780
$memory_15 = 1;
#line 780
$memory_15 = $memory_8 + $memory_15;
#line 780
$memory_14 = $memory_5->[$memory_15];
#line 780
undef($memory_15);
#line 780
$memory_15 = "get_ref_hash";
#line 781
$memory_17 = $memory_5->[$memory_8];
#line 781
$memory_17 = c_rt_lib::ov_mk_arg('val', $memory_17);
#line 782
$memory_19 = 1;
#line 782
$memory_19 = $memory_8 + $memory_19;
#line 782
$memory_18 = $memory_5->[$memory_19];
#line 782
undef($memory_19);
#line 782
$memory_18 = c_rt_lib::ov_mk_arg('val', $memory_18);
#line 782
$memory_16 = [$memory_17,$memory_18];
#line 782
undef($memory_17);
#line 782
undef($memory_18);
#line 782
translator_priv::print_call_base($memory_14, $memory_15, $memory_16, $memory_2);
#line 782
undef($memory_16);
#line 782
undef($memory_15);
#line 782
undef($memory_14);
#line 782
undef($memory_13);
#line 784
goto label_180;
#line 784
label_180:
#line 784
undef($memory_11);
#line 784
undef($memory_12);
#line 785
$memory_8 = $memory_8 + $memory_9;
#line 785
goto label_10;
#line 785
label_185:
#line 785
undef($memory_7);
#line 785
undef($memory_8);
#line 785
undef($memory_9);
#line 785
undef($memory_10);
#line 786
$memory_8 = array::len($memory_5);
#line 786
$memory_9 = 1;
#line 786
$memory_8 = $memory_8 - $memory_9;
#line 786
undef($memory_9);
#line 786
$memory_7 = $memory_5->[$memory_8];
#line 786
undef($memory_8);
#line 786
$memory_7 = c_rt_lib::ov_mk_arg('value', $memory_7);
#line 786
array::push($memory_6, $memory_7);
#line 786
undef($memory_7);
#line 787
undef($memory_0);
#line 787
undef($memory_1);
#line 787
undef($memory_3);
#line 787
undef($memory_4);
#line 787
undef($memory_5);
#line 787
$_[2] = $memory_2;return $memory_6;
#line 787
undef($memory_3);
#line 787
undef($memory_4);
#line 787
undef($memory_5);
#line 787
undef($memory_6);
#line 787
undef($memory_0);
#line 787
undef($memory_1);
#line 787
$_[2] = $memory_2;return;
$_[2] = $memory_2;}

sub translator_priv::set_value_of_lvalue($$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;my $memory_13;my $memory_14;my $memory_15;my $memory_16;my $memory_17;my $memory_18;$memory_0 = $_[0];$memory_1 = $_[1];$memory_2 = $_[2];Scalar::Util::weaken($_[2]) if ref($_[2]);
#line 792
$memory_3 = translator_priv::save_registers($memory_2);
#line 793
$memory_4 = array::len($memory_0);
#line 794
$memory_6 = 1;
#line 794
$memory_6 = $memory_4 - $memory_6;
#line 794
$memory_5 = $memory_0->[$memory_6];
#line 794
undef($memory_6);
#line 794
$memory_5 = c_rt_lib::ov_as($memory_5, 'value');
#line 795
$memory_6 = "";
#line 796
$memory_7 = 2;
#line 796
$memory_7 = $memory_4 - $memory_7;
#line 796
label_10:
#line 796
$memory_8 = 0;
#line 796
$memory_8 = c_rt_lib::to_nl($memory_7 >= $memory_8);
#line 796
$memory_8 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 796
if (c_rt_lib::check_true($memory_8)) {goto label_192;}
#line 797
$memory_9 = $memory_0->[$memory_7];
#line 797
$memory_10 = c_rt_lib::ov_is($memory_9, 'value');
#line 797
if (c_rt_lib::check_true($memory_10)) {goto label_27;}
#line 799
$memory_10 = c_rt_lib::ov_is($memory_9, 'index');
#line 799
if (c_rt_lib::check_true($memory_10)) {goto label_34;}
#line 806
$memory_10 = c_rt_lib::ov_is($memory_9, 'hashkey');
#line 806
if (c_rt_lib::check_true($memory_10)) {goto label_77;}
#line 813
$memory_10 = c_rt_lib::ov_is($memory_9, 'key');
#line 813
if (c_rt_lib::check_true($memory_10)) {goto label_130;}
#line 813
$memory_10 = "NOMATCHALERT";
#line 813
$memory_10 = [$memory_10,$memory_9];
#line 813
die(dfile::ssave($memory_10));
#line 797
label_27:
#line 797
$memory_11 = c_rt_lib::ov_as($memory_9, 'value');
#line 798
$memory_12 = [];
#line 798
die(dfile::ssave($memory_12));
#line 798
undef($memory_12);
#line 798
undef($memory_11);
#line 799
goto label_185;
#line 799
label_34:
#line 799
$memory_11 = c_rt_lib::ov_as($memory_9, 'index');
#line 800
$memory_12 = $memory_1;
#line 800
$memory_12 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_12));
#line 800
$memory_13 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_12));
#line 800
if (c_rt_lib::check_true($memory_13)) {goto label_43;}
#line 800
$memory_12 = 2;
#line 800
$memory_12 = $memory_4 - $memory_12;
#line 800
$memory_12 = c_rt_lib::to_nl($memory_7 == $memory_12);
#line 800
label_43:
#line 800
undef($memory_13);
#line 800
$memory_12 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_12));
#line 800
if (c_rt_lib::check_true($memory_12)) {goto label_53;}
#line 801
$memory_13 = $memory_11->{'value'};
#line 801
$memory_14 = $memory_11->{'index'};
#line 801
translator_priv::print_set_at_index($memory_13, $memory_14, $memory_5, $memory_2);
#line 801
undef($memory_14);
#line 801
undef($memory_13);
#line 802
goto label_70;
#line 802
label_53:
#line 803
$memory_13 = "";
#line 803
$memory_14 = "set_ref_arr";
#line 803
$memory_16 = $memory_11->{'value'};
#line 803
$memory_16 = c_rt_lib::ov_mk_arg('ref', $memory_16);
#line 803
$memory_17 = $memory_11->{'index'};
#line 803
$memory_17 = c_rt_lib::ov_mk_arg('val', $memory_17);
#line 803
$memory_18 = c_rt_lib::ov_mk_arg('val', $memory_5);
#line 803
$memory_15 = [$memory_16,$memory_17,$memory_18];
#line 803
undef($memory_16);
#line 803
undef($memory_17);
#line 803
undef($memory_18);
#line 803
translator_priv::print_call_base($memory_13, $memory_14, $memory_15, $memory_2);
#line 803
undef($memory_15);
#line 803
undef($memory_14);
#line 803
undef($memory_13);
#line 804
goto label_70;
#line 804
label_70:
#line 804
undef($memory_12);
#line 805
$memory_12 = $memory_11->{'value'};
#line 805
$memory_5 = $memory_12;
#line 805
undef($memory_12);
#line 805
undef($memory_11);
#line 806
goto label_185;
#line 806
label_77:
#line 806
$memory_11 = c_rt_lib::ov_as($memory_9, 'hashkey');
#line 807
$memory_12 = $memory_1;
#line 807
$memory_12 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_12));
#line 807
$memory_13 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_12));
#line 807
if (c_rt_lib::check_true($memory_13)) {goto label_86;}
#line 807
$memory_12 = 2;
#line 807
$memory_12 = $memory_4 - $memory_12;
#line 807
$memory_12 = c_rt_lib::to_nl($memory_7 == $memory_12);
#line 807
label_86:
#line 807
undef($memory_13);
#line 807
$memory_12 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_12));
#line 807
if (c_rt_lib::check_true($memory_12)) {goto label_106;}
#line 808
$memory_13 = "";
#line 808
$memory_14 = "hash_set_value";
#line 808
$memory_16 = $memory_11->{'value'};
#line 808
$memory_16 = c_rt_lib::ov_mk_arg('ref', $memory_16);
#line 808
$memory_17 = $memory_11->{'key'};
#line 808
$memory_17 = c_rt_lib::ov_mk_arg('val', $memory_17);
#line 808
$memory_18 = c_rt_lib::ov_mk_arg('val', $memory_5);
#line 808
$memory_15 = [$memory_16,$memory_17,$memory_18];
#line 808
undef($memory_16);
#line 808
undef($memory_17);
#line 808
undef($memory_18);
#line 808
translator_priv::print_call_base($memory_13, $memory_14, $memory_15, $memory_2);
#line 808
undef($memory_15);
#line 808
undef($memory_14);
#line 808
undef($memory_13);
#line 809
goto label_123;
#line 809
label_106:
#line 810
$memory_13 = "";
#line 810
$memory_14 = "set_ref_hash";
#line 810
$memory_16 = $memory_11->{'value'};
#line 810
$memory_16 = c_rt_lib::ov_mk_arg('ref', $memory_16);
#line 810
$memory_17 = $memory_11->{'key'};
#line 810
$memory_17 = c_rt_lib::ov_mk_arg('val', $memory_17);
#line 810
$memory_18 = c_rt_lib::ov_mk_arg('val', $memory_5);
#line 810
$memory_15 = [$memory_16,$memory_17,$memory_18];
#line 810
undef($memory_16);
#line 810
undef($memory_17);
#line 810
undef($memory_18);
#line 810
translator_priv::print_call_base($memory_13, $memory_14, $memory_15, $memory_2);
#line 810
undef($memory_15);
#line 810
undef($memory_14);
#line 810
undef($memory_13);
#line 811
goto label_123;
#line 811
label_123:
#line 811
undef($memory_12);
#line 812
$memory_12 = $memory_11->{'value'};
#line 812
$memory_5 = $memory_12;
#line 812
undef($memory_12);
#line 812
undef($memory_11);
#line 813
goto label_185;
#line 813
label_130:
#line 813
$memory_11 = c_rt_lib::ov_as($memory_9, 'key');
#line 814
$memory_12 = $memory_1;
#line 814
$memory_12 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_12));
#line 814
$memory_13 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_12));
#line 814
if (c_rt_lib::check_true($memory_13)) {goto label_139;}
#line 814
$memory_12 = 2;
#line 814
$memory_12 = $memory_4 - $memory_12;
#line 814
$memory_12 = c_rt_lib::to_nl($memory_7 == $memory_12);
#line 814
label_139:
#line 814
undef($memory_13);
#line 814
$memory_12 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_12));
#line 814
if (c_rt_lib::check_true($memory_12)) {goto label_149;}
#line 815
$memory_13 = $memory_11->{'value'};
#line 815
$memory_14 = $memory_11->{'key'};
#line 815
translator_priv::print_set_value($memory_13, $memory_14, $memory_5, $memory_2);
#line 815
undef($memory_14);
#line 815
undef($memory_13);
#line 816
goto label_178;
#line 816
label_149:
#line 817
$memory_13 = "";
#line 817
$memory_13 = c_rt_lib::to_nl($memory_6 eq $memory_13);
#line 817
$memory_13 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_13));
#line 817
if (c_rt_lib::check_true($memory_13)) {goto label_158;}
#line 817
$memory_14 = translator_priv::new_register($memory_2);
#line 817
$memory_6 = $memory_14;
#line 817
undef($memory_14);
#line 817
goto label_158;
#line 817
label_158:
#line 817
undef($memory_13);
#line 818
$memory_13 = $memory_11->{'key'};
#line 818
translator_priv::load_const($memory_13, $memory_6, $memory_2);
#line 818
undef($memory_13);
#line 819
$memory_13 = "";
#line 819
$memory_14 = "set_ref_hash";
#line 819
$memory_16 = $memory_11->{'value'};
#line 819
$memory_16 = c_rt_lib::ov_mk_arg('ref', $memory_16);
#line 819
$memory_17 = c_rt_lib::ov_mk_arg('val', $memory_6);
#line 819
$memory_18 = c_rt_lib::ov_mk_arg('val', $memory_5);
#line 819
$memory_15 = [$memory_16,$memory_17,$memory_18];
#line 819
undef($memory_16);
#line 819
undef($memory_17);
#line 819
undef($memory_18);
#line 819
translator_priv::print_call_base($memory_13, $memory_14, $memory_15, $memory_2);
#line 819
undef($memory_15);
#line 819
undef($memory_14);
#line 819
undef($memory_13);
#line 820
goto label_178;
#line 820
label_178:
#line 820
undef($memory_12);
#line 821
$memory_12 = $memory_11->{'value'};
#line 821
$memory_5 = $memory_12;
#line 821
undef($memory_12);
#line 821
undef($memory_11);
#line 822
goto label_185;
#line 822
label_185:
#line 822
undef($memory_9);
#line 822
undef($memory_10);
#line 796
$memory_9 = 1;
#line 796
$memory_7 = $memory_7 - $memory_9;
#line 796
undef($memory_9);
#line 823
goto label_10;
#line 823
label_192:
#line 823
undef($memory_7);
#line 823
undef($memory_8);
#line 824
$memory_7 = "";
#line 824
$memory_7 = c_rt_lib::to_nl($memory_6 ne $memory_7);
#line 824
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 824
if (c_rt_lib::check_true($memory_7)) {goto label_201;}
#line 824
translator_priv::restore_registers($memory_3, $memory_2);
#line 824
goto label_201;
#line 824
label_201:
#line 824
undef($memory_7);
#line 824
undef($memory_3);
#line 824
undef($memory_4);
#line 824
undef($memory_5);
#line 824
undef($memory_6);
#line 824
undef($memory_0);
#line 824
undef($memory_1);
#line 824
$_[2] = $memory_2;return;
$_[2] = $memory_2;}

sub translator_priv::make_string($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;$memory_0 = $_[0];$memory_1 = $_[1];Scalar::Util::weaken($_[1]) if ref($_[1]);
#line 828
$memory_2 = "";
#line 829
$memory_3 = 0;
#line 830
$memory_4 = $memory_0->{'arr'};
#line 830
$memory_6 = 0;
#line 830
$memory_7 = 1;
#line 830
$memory_8 = c_rt_lib::array_len($memory_4);
#line 830
label_6:
#line 830
$memory_9 = c_rt_lib::to_nl($memory_6 >= $memory_8);
#line 830
if (c_rt_lib::check_true($memory_9)) {goto label_26;}
#line 830
$memory_5 = $memory_4->[$memory_6];
#line 831
$memory_10 = 0;
#line 831
$memory_10 = c_rt_lib::to_nl($memory_3 > $memory_10);
#line 831
$memory_10 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_10));
#line 831
if (c_rt_lib::check_true($memory_10)) {goto label_18;}
#line 831
$memory_11 = string::lf();
#line 831
$memory_2 = $memory_2 . $memory_11;
#line 831
undef($memory_11);
#line 831
goto label_18;
#line 831
label_18:
#line 831
undef($memory_10);
#line 832
$memory_2 = $memory_2 . $memory_5;
#line 833
$memory_10 = 1;
#line 833
$memory_3 = $memory_3 + $memory_10;
#line 833
undef($memory_10);
#line 834
$memory_6 = $memory_6 + $memory_7;
#line 834
goto label_6;
#line 834
label_26:
#line 834
undef($memory_4);
#line 834
undef($memory_5);
#line 834
undef($memory_6);
#line 834
undef($memory_7);
#line 834
undef($memory_8);
#line 834
undef($memory_9);
#line 835
$memory_4 = $memory_0->{'last'};
#line 835
$memory_5 = c_rt_lib::ov_is($memory_4, 'new_line');
#line 835
if (c_rt_lib::check_true($memory_5)) {goto label_41;}
#line 837
$memory_5 = c_rt_lib::ov_is($memory_4, 'end');
#line 837
if (c_rt_lib::check_true($memory_5)) {goto label_46;}
#line 837
$memory_5 = "NOMATCHALERT";
#line 837
$memory_5 = [$memory_5,$memory_4];
#line 837
die(dfile::ssave($memory_5));
#line 835
label_41:
#line 836
$memory_6 = string::lf();
#line 836
$memory_2 = $memory_2 . $memory_6;
#line 836
undef($memory_6);
#line 837
goto label_48;
#line 837
label_46:
#line 838
goto label_48;
#line 838
label_48:
#line 838
undef($memory_4);
#line 838
undef($memory_5);
#line 839
undef($memory_0);
#line 839
undef($memory_3);
#line 839
$_[1] = $memory_1;return $memory_2;
#line 839
undef($memory_2);
#line 839
undef($memory_3);
#line 839
undef($memory_0);
#line 839
$_[1] = $memory_1;return;
$_[1] = $memory_1;}

sub translator_priv::print_ternary_op($$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;$memory_0 = $_[0];$memory_1 = $_[1];$memory_2 = $_[2];Scalar::Util::weaken($_[2]) if ref($_[2]);
#line 843
$memory_3 = $memory_0->{'op'};
#line 843
$memory_4 = "?";
#line 843
$memory_3 = c_rt_lib::to_nl($memory_3 eq $memory_4);
#line 843
undef($memory_4);
#line 843
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 843
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 843
if (c_rt_lib::check_true($memory_3)) {goto label_10;}
#line 843
$memory_4 = [];
#line 843
die(dfile::ssave($memory_4));
#line 843
goto label_10;
#line 843
label_10:
#line 843
undef($memory_3);
#line 843
undef($memory_4);
#line 844
$memory_3 = translator_priv::get_sim_label($memory_2);
#line 845
$memory_4 = translator_priv::get_sim_label($memory_2);
#line 846
$memory_6 = $memory_0->{'fst'};
#line 846
$memory_5 = translator_priv::dest_val($memory_6, $memory_1, $memory_2);
#line 846
undef($memory_6);
#line 847
translator_priv::print_if_goto($memory_4, $memory_5, $memory_2);
#line 848
$memory_6 = $memory_0->{'thrd'};
#line 848
translator_priv::print_val($memory_6, $memory_1, $memory_2);
#line 848
undef($memory_6);
#line 849
$memory_6 = c_rt_lib::ov_mk_arg('goto', $memory_3);
#line 849
translator_priv::print($memory_2, $memory_6);
#line 849
undef($memory_6);
#line 850
translator_priv::print_sim_label($memory_4, $memory_2);
#line 851
$memory_6 = $memory_0->{'snd'};
#line 851
translator_priv::print_val($memory_6, $memory_1, $memory_2);
#line 851
undef($memory_6);
#line 852
translator_priv::print_sim_label($memory_3, $memory_2);
#line 852
undef($memory_3);
#line 852
undef($memory_4);
#line 852
undef($memory_5);
#line 852
undef($memory_0);
#line 852
undef($memory_1);
#line 852
$_[2] = $memory_2;return;
$_[2] = $memory_2;}

sub translator_priv::print_die($$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;$memory_0 = $_[0];$memory_1 = $_[1];$memory_2 = $_[2];Scalar::Util::weaken($_[2]) if ref($_[2]);
#line 856
$memory_3 = translator_priv::new_register($memory_2);
#line 857
$memory_5 = c_rt_lib::ov_mk_arg('arr_decl', $memory_0);
#line 857
$memory_4 = {debug => $memory_1,value => $memory_5,};
#line 857
undef($memory_5);
#line 857
translator_priv::print_val($memory_4, $memory_3, $memory_2);
#line 857
undef($memory_4);
#line 858
$memory_4 = c_rt_lib::ov_mk_arg('die', $memory_3);
#line 858
translator_priv::print($memory_2, $memory_4);
#line 858
undef($memory_4);
#line 858
undef($memory_3);
#line 858
undef($memory_0);
#line 858
undef($memory_1);
#line 858
$_[2] = $memory_2;return;
$_[2] = $memory_2;}

sub translator_priv::print_return($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;$memory_0 = $_[0];$memory_1 = $_[1];Scalar::Util::weaken($_[1]) if ref($_[1]);
#line 862
$memory_2 = translator_priv::save_registers($memory_1);
#line 863
$memory_3 = c_rt_lib::ov_mk_none('emp');
#line 864
$memory_4 = $memory_0->{'value'};
#line 864
$memory_4 = c_rt_lib::ov_is($memory_4, 'nop');
#line 864
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 864
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 864
if (c_rt_lib::check_true($memory_4)) {goto label_12;}
#line 865
$memory_5 = translator_priv::calc_val($memory_0, $memory_1);
#line 865
$memory_5 = c_rt_lib::ov_mk_arg('val', $memory_5);
#line 865
$memory_3 = $memory_5;
#line 865
undef($memory_5);
#line 866
goto label_12;
#line 866
label_12:
#line 866
undef($memory_4);
#line 867
translator_priv::print_safe_return($memory_3, $memory_1);
#line 868
translator_priv::restore_registers($memory_2, $memory_1);
#line 868
undef($memory_2);
#line 868
undef($memory_3);
#line 868
undef($memory_0);
#line 868
$_[1] = $memory_1;return;
$_[1] = $memory_1;}

sub translator_priv::print_safe_return($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;$memory_0 = $_[0];$memory_1 = $_[1];Scalar::Util::weaken($_[1]) if ref($_[1]);
#line 872
$memory_2 = translator_priv::save_registers($memory_1);
#line 873
$memory_3 = $memory_1->{'logic'};
#line 873
$memory_3 = $memory_3->{'register'};
#line 874
$memory_4 = 1;
#line 874
$memory_4 = -$memory_4;
#line 875
$memory_5 = $memory_1->{'result'};
#line 875
$memory_5 = $memory_5->{'args_type'};
#line 876
$memory_6 = $memory_0;
#line 876
$memory_6 = c_rt_lib::ov_is($memory_6, 'val');
#line 876
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 876
if (c_rt_lib::check_true($memory_6)) {goto label_39;}
#line 877
$memory_7 = $memory_0;
#line 877
$memory_7 = c_rt_lib::ov_as($memory_7, 'val');
#line 877
$memory_4 = $memory_7;
#line 877
undef($memory_7);
#line 878
$memory_7 = array::len($memory_5);
#line 878
$memory_7 = c_rt_lib::to_nl($memory_4 < $memory_7);
#line 878
$memory_8 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 878
if (c_rt_lib::check_true($memory_8)) {goto label_21;}
#line 878
$memory_7 = $memory_5->[$memory_4];
#line 878
$memory_7 = c_rt_lib::ov_is($memory_7, 'ref');
#line 878
label_21:
#line 878
undef($memory_8);
#line 878
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 878
if (c_rt_lib::check_true($memory_7)) {goto label_36;}
#line 879
$memory_8 = translator_priv::new_register($memory_1);
#line 879
$memory_4 = $memory_8;
#line 879
undef($memory_8);
#line 880
$memory_8 = $memory_0;
#line 880
$memory_8 = c_rt_lib::ov_as($memory_8, 'val');
#line 880
translator_priv::move($memory_4, $memory_8, $memory_1);
#line 880
undef($memory_8);
#line 881
$memory_8 = c_rt_lib::ov_mk_arg('val', $memory_4);
#line 881
$memory_0 = $memory_8;
#line 881
undef($memory_8);
#line 882
goto label_36;
#line 882
label_36:
#line 882
undef($memory_7);
#line 883
goto label_39;
#line 883
label_39:
#line 883
undef($memory_6);
#line 884
$memory_6 = 0;
#line 884
label_42:
#line 884
$memory_7 = c_rt_lib::to_nl($memory_6 < $memory_3);
#line 884
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 884
if (c_rt_lib::check_true($memory_7)) {goto label_80;}
#line 885
$memory_8 = array::len($memory_5);
#line 885
$memory_8 = c_rt_lib::to_nl($memory_6 < $memory_8);
#line 885
$memory_9 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 885
if (c_rt_lib::check_true($memory_9)) {goto label_52;}
#line 885
$memory_8 = $memory_5->[$memory_6];
#line 885
$memory_8 = c_rt_lib::ov_is($memory_8, 'ref');
#line 885
label_52:
#line 885
undef($memory_9);
#line 885
$memory_8 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 885
if (c_rt_lib::check_true($memory_8)) {goto label_59;}
#line 885
undef($memory_8);
#line 885
goto label_75;
#line 885
goto label_59;
#line 885
label_59:
#line 885
undef($memory_8);
#line 886
$memory_8 = c_rt_lib::to_nl($memory_6 == $memory_4);
#line 886
$memory_8 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 886
if (c_rt_lib::check_true($memory_8)) {goto label_67;}
#line 886
undef($memory_8);
#line 886
goto label_75;
#line 886
goto label_67;
#line 886
label_67:
#line 886
undef($memory_8);
#line 887
$memory_9 = {
	module => "nlasm",
	name => "reg_t",
};
#line 887
$memory_9 = c_rt_lib::ov_mk_arg('ref', $memory_9);
#line 887
$memory_8 = ptd::ensure($memory_9, $memory_6);
#line 887
undef($memory_9);
#line 887
translator_priv::undef_reg($memory_8, $memory_1);
#line 887
undef($memory_8);
#line 887
label_75:
#line 884
$memory_8 = 1;
#line 884
$memory_6 = $memory_6 + $memory_8;
#line 884
undef($memory_8);
#line 888
goto label_42;
#line 888
label_80:
#line 888
undef($memory_6);
#line 888
undef($memory_7);
#line 889
$memory_6 = c_rt_lib::ov_mk_arg('return', $memory_0);
#line 889
translator_priv::print($memory_1, $memory_6);
#line 889
undef($memory_6);
#line 890
translator_priv::restore_registers($memory_2, $memory_1);
#line 890
undef($memory_2);
#line 890
undef($memory_3);
#line 890
undef($memory_4);
#line 890
undef($memory_5);
#line 890
undef($memory_0);
#line 890
$_[1] = $memory_1;return;
$_[1] = $memory_1;}

sub translator_priv::convert_str_to_number($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;$memory_0 = $_[0];
#line 894
$memory_1 = string::length($memory_0);
#line 895
$memory_2 = 3;
#line 895
$memory_2 = c_rt_lib::to_nl($memory_1 >= $memory_2);
#line 895
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 895
if (c_rt_lib::check_true($memory_3)) {goto label_13;}
#line 895
$memory_4 = 1;
#line 895
$memory_5 = 1;
#line 895
$memory_2 = string::substr($memory_0, $memory_4, $memory_5);
#line 895
undef($memory_5);
#line 895
undef($memory_4);
#line 895
$memory_4 = "x";
#line 895
$memory_2 = c_rt_lib::to_nl($memory_2 eq $memory_4);
#line 895
undef($memory_4);
#line 895
label_13:
#line 895
undef($memory_3);
#line 895
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 895
if (c_rt_lib::check_true($memory_2)) {goto label_124;}
#line 896
$memory_3 = 0;
#line 897
$memory_4 = 2;
#line 897
label_19:
#line 897
$memory_5 = c_rt_lib::to_nl($memory_4 < $memory_1);
#line 897
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 897
if (c_rt_lib::check_true($memory_5)) {goto label_115;}
#line 898
$memory_7 = 1;
#line 898
$memory_6 = string::substr($memory_0, $memory_4, $memory_7);
#line 898
undef($memory_7);
#line 899
$memory_7 = string::ord($memory_6);
#line 900
$memory_8 = 16;
#line 900
$memory_8 = $memory_3 * $memory_8;
#line 900
$memory_3 = $memory_8;
#line 900
undef($memory_8);
#line 901
$memory_10 = 0;
#line 901
$memory_8 = string::ord($memory_10);
#line 901
undef($memory_10);
#line 901
$memory_8 = c_rt_lib::to_nl($memory_7 >= $memory_8);
#line 901
$memory_9 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 901
if (c_rt_lib::check_true($memory_9)) {goto label_41;}
#line 901
$memory_10 = 9;
#line 901
$memory_8 = string::ord($memory_10);
#line 901
undef($memory_10);
#line 901
$memory_8 = c_rt_lib::to_nl($memory_7 <= $memory_8);
#line 901
label_41:
#line 901
undef($memory_9);
#line 901
$memory_8 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 901
if (c_rt_lib::check_true($memory_8)) {goto label_52;}
#line 902
$memory_10 = 0;
#line 902
$memory_9 = string::ord($memory_10);
#line 902
undef($memory_10);
#line 902
$memory_9 = $memory_7 - $memory_9;
#line 902
$memory_3 = $memory_3 + $memory_9;
#line 902
undef($memory_9);
#line 903
goto label_107;
#line 903
label_52:
#line 903
$memory_10 = "A";
#line 903
$memory_8 = string::ord($memory_10);
#line 903
undef($memory_10);
#line 903
$memory_8 = c_rt_lib::to_nl($memory_7 >= $memory_8);
#line 903
$memory_9 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 903
if (c_rt_lib::check_true($memory_9)) {goto label_63;}
#line 903
$memory_10 = "F";
#line 903
$memory_8 = string::ord($memory_10);
#line 903
undef($memory_10);
#line 903
$memory_8 = c_rt_lib::to_nl($memory_7 <= $memory_8);
#line 903
label_63:
#line 903
undef($memory_9);
#line 903
$memory_8 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 903
if (c_rt_lib::check_true($memory_8)) {goto label_77;}
#line 904
$memory_10 = "A";
#line 904
$memory_9 = string::ord($memory_10);
#line 904
undef($memory_10);
#line 904
$memory_9 = $memory_7 - $memory_9;
#line 904
$memory_10 = 10;
#line 904
$memory_9 = $memory_9 + $memory_10;
#line 904
undef($memory_10);
#line 904
$memory_3 = $memory_3 + $memory_9;
#line 904
undef($memory_9);
#line 905
goto label_107;
#line 905
label_77:
#line 905
$memory_10 = "a";
#line 905
$memory_8 = string::ord($memory_10);
#line 905
undef($memory_10);
#line 905
$memory_8 = c_rt_lib::to_nl($memory_7 >= $memory_8);
#line 905
$memory_9 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 905
if (c_rt_lib::check_true($memory_9)) {goto label_88;}
#line 905
$memory_10 = "f";
#line 905
$memory_8 = string::ord($memory_10);
#line 905
undef($memory_10);
#line 905
$memory_8 = c_rt_lib::to_nl($memory_7 <= $memory_8);
#line 905
label_88:
#line 905
undef($memory_9);
#line 905
$memory_8 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 905
if (c_rt_lib::check_true($memory_8)) {goto label_102;}
#line 906
$memory_10 = "a";
#line 906
$memory_9 = string::ord($memory_10);
#line 906
undef($memory_10);
#line 906
$memory_9 = $memory_7 - $memory_9;
#line 906
$memory_10 = 10;
#line 906
$memory_9 = $memory_9 + $memory_10;
#line 906
undef($memory_10);
#line 906
$memory_3 = $memory_3 + $memory_9;
#line 906
undef($memory_9);
#line 907
goto label_107;
#line 907
label_102:
#line 908
$memory_9 = [];
#line 908
die(dfile::ssave($memory_9));
#line 908
undef($memory_9);
#line 909
goto label_107;
#line 909
label_107:
#line 909
undef($memory_8);
#line 909
undef($memory_6);
#line 909
undef($memory_7);
#line 897
$memory_6 = 1;
#line 897
$memory_4 = $memory_4 + $memory_6;
#line 897
undef($memory_6);
#line 910
goto label_19;
#line 910
label_115:
#line 910
undef($memory_4);
#line 910
undef($memory_5);
#line 911
undef($memory_0);
#line 911
undef($memory_1);
#line 911
undef($memory_2);
#line 911
return $memory_3;
#line 911
undef($memory_3);
#line 912
goto label_184;
#line 912
label_124:
#line 912
$memory_2 = 2;
#line 912
$memory_2 = c_rt_lib::to_nl($memory_1 >= $memory_2);
#line 912
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 912
if (c_rt_lib::check_true($memory_4)) {goto label_137;}
#line 912
$memory_5 = 0;
#line 912
$memory_6 = 1;
#line 912
$memory_2 = string::substr($memory_0, $memory_5, $memory_6);
#line 912
undef($memory_6);
#line 912
undef($memory_5);
#line 912
$memory_5 = 0;
#line 912
$memory_2 = c_rt_lib::to_nl($memory_2 eq $memory_5);
#line 912
undef($memory_5);
#line 912
label_137:
#line 912
undef($memory_4);
#line 912
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 912
if (c_rt_lib::check_true($memory_3)) {goto label_142;}
#line 912
$memory_2 = string_utils::is_integer($memory_0);
#line 912
label_142:
#line 912
undef($memory_3);
#line 912
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 912
if (c_rt_lib::check_true($memory_2)) {goto label_179;}
#line 913
$memory_3 = 0;
#line 914
$memory_4 = 0;
#line 914
$memory_5 = 1;
#line 914
label_149:
#line 914
$memory_6 = c_rt_lib::to_nl($memory_4 >= $memory_1);
#line 914
if (c_rt_lib::check_true($memory_6)) {goto label_169;}
#line 915
$memory_7 = 8;
#line 915
$memory_3 = $memory_3 * $memory_7;
#line 915
undef($memory_7);
#line 916
$memory_9 = 1;
#line 916
$memory_8 = string::substr($memory_0, $memory_4, $memory_9);
#line 916
undef($memory_9);
#line 916
$memory_7 = string::ord($memory_8);
#line 916
undef($memory_8);
#line 916
$memory_9 = 0;
#line 916
$memory_8 = string::ord($memory_9);
#line 916
undef($memory_9);
#line 916
$memory_7 = $memory_7 - $memory_8;
#line 916
undef($memory_8);
#line 916
$memory_3 = $memory_3 + $memory_7;
#line 916
undef($memory_7);
#line 917
$memory_4 = $memory_4 + $memory_5;
#line 917
goto label_149;
#line 917
label_169:
#line 917
undef($memory_4);
#line 917
undef($memory_5);
#line 917
undef($memory_6);
#line 918
undef($memory_0);
#line 918
undef($memory_1);
#line 918
undef($memory_2);
#line 918
return $memory_3;
#line 918
undef($memory_3);
#line 919
goto label_184;
#line 919
label_179:
#line 920
undef($memory_1);
#line 920
undef($memory_2);
#line 920
return $memory_0;
#line 921
goto label_184;
#line 921
label_184:
#line 921
undef($memory_2);
#line 921
undef($memory_1);
#line 921
undef($memory_0);
#line 921
return;
}

sub translator_priv::dest_val($$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;$memory_0 = $_[0];$memory_1 = $_[1];$memory_2 = $_[2];Scalar::Util::weaken($_[2]) if ref($_[2]);
#line 925
$memory_3 = $memory_0->{'value'};
#line 925
$memory_3 = c_rt_lib::ov_is($memory_3, 'var');
#line 925
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 925
if (c_rt_lib::check_true($memory_3)) {goto label_14;}
#line 926
$memory_5 = $memory_0->{'value'};
#line 926
$memory_5 = c_rt_lib::ov_as($memory_5, 'var');
#line 926
$memory_4 = translator_priv::get_var_register($memory_5, $memory_2);
#line 926
undef($memory_5);
#line 926
undef($memory_0);
#line 926
undef($memory_1);
#line 926
undef($memory_3);
#line 926
$_[2] = $memory_2;return $memory_4;
#line 926
undef($memory_4);
#line 927
goto label_14;
#line 927
label_14:
#line 927
undef($memory_3);
#line 928
$memory_3 = "";
#line 928
$memory_3 = c_rt_lib::to_nl($memory_1 eq $memory_3);
#line 928
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 928
if (c_rt_lib::check_true($memory_3)) {goto label_24;}
#line 928
$memory_4 = translator_priv::new_register($memory_2);
#line 928
$memory_1 = $memory_4;
#line 928
undef($memory_4);
#line 928
goto label_24;
#line 928
label_24:
#line 928
undef($memory_3);
#line 929
translator_priv::print_val($memory_0, $memory_1, $memory_2);
#line 930
undef($memory_0);
#line 930
$_[2] = $memory_2;return $memory_1;
#line 930
undef($memory_0);
#line 930
undef($memory_1);
#line 930
$_[2] = $memory_2;return;
$_[2] = $memory_2;}

sub translator_priv::def_val($$$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;$memory_0 = $_[0];$memory_1 = $_[1];$memory_2 = $_[2];$memory_3 = $_[3];Scalar::Util::weaken($_[3]) if ref($_[3]);
#line 935
$memory_4 = "";
#line 935
$memory_4 = c_rt_lib::to_nl($memory_1 eq $memory_4);
#line 935
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 935
if (c_rt_lib::check_true($memory_4)) {goto label_6;}
#line 935
$memory_1 = $memory_2;
#line 935
goto label_6;
#line 935
label_6:
#line 935
undef($memory_4);
#line 936
translator_priv::print_val($memory_0, $memory_1, $memory_3);
#line 937
undef($memory_0);
#line 937
undef($memory_2);
#line 937
$_[3] = $memory_3;return $memory_1;
#line 937
undef($memory_0);
#line 937
undef($memory_1);
#line 937
undef($memory_2);
#line 937
$_[3] = $memory_3;return;
$_[3] = $memory_3;}

sub translator_priv::calc_val($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;$memory_0 = $_[0];$memory_1 = $_[1];Scalar::Util::weaken($_[1]) if ref($_[1]);
#line 941
$memory_2 = $memory_0->{'value'};
#line 941
$memory_2 = c_rt_lib::ov_is($memory_2, 'var');
#line 941
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 941
if (c_rt_lib::check_true($memory_2)) {goto label_13;}
#line 942
$memory_4 = $memory_0->{'value'};
#line 942
$memory_4 = c_rt_lib::ov_as($memory_4, 'var');
#line 942
$memory_3 = translator_priv::get_var_register($memory_4, $memory_1);
#line 942
undef($memory_4);
#line 942
undef($memory_0);
#line 942
undef($memory_2);
#line 942
$_[1] = $memory_1;return $memory_3;
#line 942
undef($memory_3);
#line 943
goto label_13;
#line 943
label_13:
#line 943
undef($memory_2);
#line 944
$memory_2 = translator_priv::new_register($memory_1);
#line 945
translator_priv::print_val($memory_0, $memory_2, $memory_1);
#line 946
undef($memory_0);
#line 946
$_[1] = $memory_1;return $memory_2;
#line 946
undef($memory_2);
#line 946
undef($memory_0);
#line 946
$_[1] = $memory_1;return;
$_[1] = $memory_1;}

sub translator_priv::get_var_register($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;$memory_0 = $_[0];$memory_1 = $_[1];Scalar::Util::weaken($_[1]) if ref($_[1]);
#line 950
$memory_3 = $memory_1->{'logic'};
#line 950
$memory_3 = $memory_3->{'variables'};
#line 950
$memory_2 = hash::get_value($memory_3, $memory_0);
#line 950
undef($memory_3);
#line 950
undef($memory_0);
#line 950
$_[1] = $memory_1;return $memory_2;
#line 950
undef($memory_2);
#line 950
undef($memory_0);
#line 950
$_[1] = $memory_1;return;
$_[1] = $memory_1;}

sub translator_priv::new_declaration($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;$memory_0 = $_[0];$memory_1 = $_[1];Scalar::Util::weaken($_[1]) if ref($_[1]);
#line 954
$memory_2 = translator_priv::new_register($memory_1);
#line 955
$memory_3 = "logic";
#line 955
$memory_3 = c_rt_lib::get_ref_hash($memory_1, $memory_3);
#line 955
$memory_4 = "variables";
#line 955
$memory_4 = c_rt_lib::get_ref_hash($memory_3, $memory_4);
#line 955
hash::set_value($memory_4, $memory_0, $memory_2);
#line 955
$memory_5 = "variables";
#line 955
c_rt_lib::set_ref_hash($memory_3, $memory_5, $memory_4);
#line 955
$memory_5 = "logic";
#line 955
c_rt_lib::set_ref_hash($memory_1, $memory_5, $memory_3);
#line 955
undef($memory_5);
#line 955
undef($memory_3);
#line 955
undef($memory_4);
#line 956
$memory_3 = "debug";
#line 956
$memory_3 = c_rt_lib::get_ref_hash($memory_1, $memory_3);
#line 956
$memory_4 = "declarations";
#line 956
$memory_4 = c_rt_lib::get_ref_hash($memory_3, $memory_4);
#line 956
hash::set_value($memory_4, $memory_0, $memory_2);
#line 956
$memory_5 = "declarations";
#line 956
c_rt_lib::set_ref_hash($memory_3, $memory_5, $memory_4);
#line 956
$memory_5 = "debug";
#line 956
c_rt_lib::set_ref_hash($memory_1, $memory_5, $memory_3);
#line 956
undef($memory_5);
#line 956
undef($memory_3);
#line 956
undef($memory_4);
#line 957
undef($memory_0);
#line 957
$_[1] = $memory_1;return $memory_2;
#line 957
undef($memory_2);
#line 957
undef($memory_0);
#line 957
$_[1] = $memory_1;return;
$_[1] = $memory_1;}

sub translator_priv::new_register($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);
#line 961
$memory_1 = "logic";
#line 961
$memory_1 = c_rt_lib::get_ref_hash($memory_0, $memory_1);
#line 961
$memory_2 = "register";
#line 961
$memory_2 = c_rt_lib::get_ref_hash($memory_1, $memory_2);
#line 961
$memory_3 = 1;
#line 961
$memory_2 = $memory_2 + $memory_3;
#line 961
$memory_4 = "register";
#line 961
c_rt_lib::set_ref_hash($memory_1, $memory_4, $memory_2);
#line 961
$memory_4 = "logic";
#line 961
c_rt_lib::set_ref_hash($memory_0, $memory_4, $memory_1);
#line 961
undef($memory_4);
#line 961
undef($memory_1);
#line 961
undef($memory_2);
#line 961
undef($memory_3);
#line 962
$memory_1 = $memory_0->{'result'};
#line 962
$memory_1 = $memory_1->{'reg_size'};
#line 962
$memory_2 = $memory_0->{'logic'};
#line 962
$memory_2 = $memory_2->{'register'};
#line 962
$memory_1 = c_rt_lib::to_nl($memory_1 < $memory_2);
#line 962
undef($memory_2);
#line 962
$memory_1 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_1));
#line 962
if (c_rt_lib::check_true($memory_1)) {goto label_35;}
#line 962
$memory_2 = $memory_0->{'logic'};
#line 962
$memory_2 = $memory_2->{'register'};
#line 962
$memory_3 = "result";
#line 962
$memory_3 = c_rt_lib::get_ref_hash($memory_0, $memory_3);
#line 962
$memory_4 = $memory_2;
#line 962
 if (c_rt_lib::get_hashcount($memory_3) > 1) {$memory_3 = {%{$memory_3}};}$memory_3->{'reg_size'} = $memory_4;
#line 962
$memory_5 = "result";
#line 962
c_rt_lib::set_ref_hash($memory_0, $memory_5, $memory_3);
#line 962
undef($memory_5);
#line 962
undef($memory_2);
#line 962
undef($memory_3);
#line 962
undef($memory_4);
#line 962
goto label_35;
#line 962
label_35:
#line 962
undef($memory_1);
#line 963
$memory_1 = $memory_0->{'logic'};
#line 963
$memory_1 = $memory_1->{'register'};
#line 963
$memory_2 = 1;
#line 963
$memory_1 = $memory_1 - $memory_2;
#line 963
undef($memory_2);
#line 963
$_[0] = $memory_0;return $memory_1;
#line 963
undef($memory_1);
#line 963
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub translator_priv::save_registers($) {
my $memory_0;my $memory_1;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);
#line 967
$memory_1 = $memory_0->{'logic'};
#line 967
$_[0] = $memory_0;return $memory_1;
#line 967
undef($memory_1);
#line 967
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub translator_priv::undef_reg($$) {
my $memory_0;my $memory_1;my $memory_2;$memory_0 = $_[0];$memory_1 = $_[1];Scalar::Util::weaken($_[1]) if ref($_[1]);
#line 971
$memory_2 = c_rt_lib::ov_mk_arg('clear', $memory_0);
#line 971
translator_priv::print($memory_1, $memory_2);
#line 971
undef($memory_2);
#line 971
undef($memory_0);
#line 971
$_[1] = $memory_1;return;
$_[1] = $memory_1;}

sub translator_priv::restore_registers($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;$memory_0 = $_[0];$memory_1 = $_[1];Scalar::Util::weaken($_[1]) if ref($_[1]);
#line 975
$memory_2 = $memory_0->{'register'};
#line 975
label_1:
#line 975
$memory_3 = $memory_1->{'logic'};
#line 975
$memory_3 = $memory_3->{'register'};
#line 975
$memory_3 = c_rt_lib::to_nl($memory_2 < $memory_3);
#line 975
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 975
if (c_rt_lib::check_true($memory_3)) {goto label_17;}
#line 976
$memory_5 = {
	module => "nlasm",
	name => "reg_t",
};
#line 976
$memory_5 = c_rt_lib::ov_mk_arg('ref', $memory_5);
#line 976
$memory_4 = ptd::ensure($memory_5, $memory_2);
#line 976
undef($memory_5);
#line 976
translator_priv::undef_reg($memory_4, $memory_1);
#line 976
undef($memory_4);
#line 975
$memory_4 = 1;
#line 975
$memory_2 = $memory_2 + $memory_4;
#line 975
undef($memory_4);
#line 977
goto label_1;
#line 977
label_17:
#line 977
undef($memory_2);
#line 977
undef($memory_3);
#line 978
$memory_2 = $memory_0;
#line 978
 if (c_rt_lib::get_hashcount($memory_1) > 1) {$memory_1 = {%{$memory_1}};}$memory_1->{'logic'} = $memory_2;
#line 978
undef($memory_2);
#line 978
undef($memory_0);
#line 978
$_[1] = $memory_1;return;
$_[1] = $memory_1;}

sub translator_priv::print_sim_label($$) {
my $memory_0;my $memory_1;my $memory_2;$memory_0 = $_[0];$memory_1 = $_[1];Scalar::Util::weaken($_[1]) if ref($_[1]);
#line 982
$memory_2 = c_rt_lib::ov_mk_arg('prt_lbl', $memory_0);
#line 982
translator_priv::print($memory_1, $memory_2);
#line 982
undef($memory_2);
#line 982
undef($memory_0);
#line 982
$_[1] = $memory_1;return;
$_[1] = $memory_1;}

sub translator_priv::get_sim_label($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);
#line 986
$memory_1 = "label_nr";
#line 986
$memory_1 = c_rt_lib::get_ref_hash($memory_0, $memory_1);
#line 986
$memory_2 = 1;
#line 986
$memory_1 = $memory_1 + $memory_2;
#line 986
$memory_3 = "label_nr";
#line 986
c_rt_lib::set_ref_hash($memory_0, $memory_3, $memory_1);
#line 986
undef($memory_3);
#line 986
undef($memory_1);
#line 986
undef($memory_2);
#line 987
$memory_1 = $memory_0->{'label_nr'};
#line 987
$_[0] = $memory_0;return $memory_1;
#line 987
undef($memory_1);
#line 987
$_[0] = $memory_0;return;
$_[0] = $memory_0;}
