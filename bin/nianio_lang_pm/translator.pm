use c_rt_lib;
use array;
use string;
use ptd;
use ov;
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
sub translator_priv::get_stuct_of_lvalue;
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
#line 17
$memory_2 = ptd::sim();
#line 17
$memory_4 = ptd::sim();
#line 17
$memory_3 = ptd::hash($memory_4);
#line 17
undef($memory_4);
#line 17
$memory_1 = {register => $memory_2,variables => $memory_3,};
#line 17
undef($memory_2);
#line 17
undef($memory_3);
#line 17
$memory_0 = ptd::rec($memory_1);
#line 17
undef($memory_1);
#line 17
return $memory_0;
#line 17
undef($memory_0);
#line 17
return;
}

my $_function_logic_t;
sub translator::function_logic_t() {
	$_function_logic_t = translator::__function_logic_t() unless defined $_function_logic_t;
	return $_function_logic_t;
}

sub translator::__loop() {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;
#line 23
$memory_2 = ptd::sim();
#line 23
$memory_3 = {
	module => "translator",
	name => "function_logic_t",
};
#line 23
$memory_3 = c_rt_lib::ov_mk_arg('ref', $memory_3);
#line 23
$memory_1 = {label => $memory_2,logic => $memory_3,};
#line 23
undef($memory_2);
#line 23
undef($memory_3);
#line 23
$memory_0 = ptd::rec($memory_1);
#line 23
undef($memory_1);
#line 23
return $memory_0;
#line 23
undef($memory_0);
#line 23
return;
}

my $_loop;
sub translator::loop() {
	$_loop = translator::__loop() unless defined $_loop;
	return $_loop;
}

sub translator::__loop_label() {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;
#line 29
$memory_2 = {
	module => "translator",
	name => "loop",
};
#line 29
$memory_2 = c_rt_lib::ov_mk_arg('ref', $memory_2);
#line 29
$memory_3 = {
	module => "translator",
	name => "loop",
};
#line 29
$memory_3 = c_rt_lib::ov_mk_arg('ref', $memory_3);
#line 29
$memory_1 = {break => $memory_2,continue => $memory_3,};
#line 29
undef($memory_2);
#line 29
undef($memory_3);
#line 29
$memory_0 = ptd::rec($memory_1);
#line 29
undef($memory_1);
#line 29
return $memory_0;
#line 29
undef($memory_0);
#line 29
return;
}

my $_loop_label;
sub translator::loop_label() {
	$_loop_label = translator::__loop_label() unless defined $_loop_label;
	return $_loop_label;
}

sub translator::__state_t() {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;
#line 36
$memory_2 = ptd::sim();
#line 36
$memory_3 = {
	module => "nlasm",
	name => "debug_t",
};
#line 36
$memory_3 = c_rt_lib::ov_mk_arg('ref', $memory_3);
#line 36
$memory_4 = {
	module => "translator",
	name => "function_logic_t",
};
#line 36
$memory_4 = c_rt_lib::ov_mk_arg('ref', $memory_4);
#line 36
$memory_5 = ptd::sim();
#line 36
$memory_6 = {
	module => "nlasm",
	name => "function_t",
};
#line 36
$memory_6 = c_rt_lib::ov_mk_arg('ref', $memory_6);
#line 36
$memory_7 = {
	module => "translator",
	name => "loop_label",
};
#line 36
$memory_7 = c_rt_lib::ov_mk_arg('ref', $memory_7);
#line 36
$memory_1 = {label_nr => $memory_2,debug => $memory_3,logic => $memory_4,module_name => $memory_5,result => $memory_6,loop_label => $memory_7,};
#line 36
undef($memory_2);
#line 36
undef($memory_3);
#line 36
undef($memory_4);
#line 36
undef($memory_5);
#line 36
undef($memory_6);
#line 36
undef($memory_7);
#line 36
$memory_0 = ptd::rec($memory_1);
#line 36
undef($memory_1);
#line 36
return $memory_0;
#line 36
undef($memory_0);
#line 36
return;
}

my $_state_t;
sub translator::state_t() {
	$_state_t = translator::__state_t() unless defined $_state_t;
	return $_state_t;
}

sub translator::__string_t() {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;
#line 47
$memory_3 = ptd::sim();
#line 47
$memory_2 = ptd::arr($memory_3);
#line 47
undef($memory_3);
#line 47
$memory_5 = ptd::none();
#line 47
$memory_6 = ptd::none();
#line 47
$memory_4 = {end => $memory_5,new_line => $memory_6,};
#line 47
undef($memory_5);
#line 47
undef($memory_6);
#line 47
$memory_3 = ptd::var($memory_4);
#line 47
undef($memory_4);
#line 47
$memory_1 = {arr => $memory_2,last => $memory_3,};
#line 47
undef($memory_2);
#line 47
undef($memory_3);
#line 47
$memory_0 = ptd::rec($memory_1);
#line 47
undef($memory_1);
#line 47
return $memory_0;
#line 47
undef($memory_0);
#line 47
return;
}

my $_string_t;
sub translator::string_t() {
	$_string_t = translator::__string_t() unless defined $_string_t;
	return $_string_t;
}

sub translator::__lvalue_values_t() {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;
#line 54
$memory_3 = {
	module => "nlasm",
	name => "reg_t",
};
#line 54
$memory_3 = c_rt_lib::ov_mk_arg('ref', $memory_3);
#line 54
$memory_6 = {
	module => "nlasm",
	name => "reg_t",
};
#line 54
$memory_6 = c_rt_lib::ov_mk_arg('ref', $memory_6);
#line 54
$memory_7 = {
	module => "nlasm",
	name => "reg_t",
};
#line 54
$memory_7 = c_rt_lib::ov_mk_arg('ref', $memory_7);
#line 54
$memory_5 = {value => $memory_6,index => $memory_7,};
#line 54
undef($memory_6);
#line 54
undef($memory_7);
#line 54
$memory_4 = ptd::rec($memory_5);
#line 54
undef($memory_5);
#line 54
$memory_7 = {
	module => "nlasm",
	name => "reg_t",
};
#line 54
$memory_7 = c_rt_lib::ov_mk_arg('ref', $memory_7);
#line 54
$memory_8 = ptd::sim();
#line 54
$memory_6 = {value => $memory_7,key => $memory_8,};
#line 54
undef($memory_7);
#line 54
undef($memory_8);
#line 54
$memory_5 = ptd::rec($memory_6);
#line 54
undef($memory_6);
#line 54
$memory_2 = {value => $memory_3,index => $memory_4,key => $memory_5,};
#line 54
undef($memory_3);
#line 54
undef($memory_4);
#line 54
undef($memory_5);
#line 54
$memory_1 = ptd::var($memory_2);
#line 54
undef($memory_2);
#line 54
$memory_0 = ptd::arr($memory_1);
#line 54
undef($memory_1);
#line 54
return $memory_0;
#line 54
undef($memory_0);
#line 54
return;
}

my $_lvalue_values_t;
sub translator::lvalue_values_t() {
	$_lvalue_values_t = translator::__lvalue_values_t() unless defined $_lvalue_values_t;
	return $_lvalue_values_t;
}

sub translator::last_debug_char($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;$memory_0 = $_[0];
#line 62
$memory_2 = $memory_0->{'end'};
#line 62
$memory_2 = $memory_2->{'line'};
#line 62
$memory_3 = $memory_0->{'end'};
#line 62
$memory_3 = $memory_3->{'position'};
#line 62
$memory_4 = 1;
#line 62
$memory_3 = $memory_3 - $memory_4;
#line 62
undef($memory_4);
#line 62
$memory_1 = {line => $memory_2,position => $memory_3,};
#line 62
undef($memory_2);
#line 62
undef($memory_3);
#line 66
$memory_3 = $memory_0->{'end'};
#line 66
$memory_3 = $memory_3->{'line'};
#line 66
$memory_4 = $memory_0->{'end'};
#line 66
$memory_4 = $memory_4->{'position'};
#line 66
$memory_2 = {line => $memory_3,position => $memory_4,};
#line 66
undef($memory_3);
#line 66
undef($memory_4);
#line 70
$memory_3 = {begin => $memory_1,end => $memory_2,};
#line 70
undef($memory_0);
#line 70
undef($memory_1);
#line 70
undef($memory_2);
#line 70
return $memory_3;
#line 70
undef($memory_3);
#line 70
undef($memory_1);
#line 70
undef($memory_2);
#line 70
undef($memory_0);
#line 70
return;
}

sub translator::translate($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;my $memory_13;my $memory_14;my $memory_15;my $memory_16;my $memory_17;my $memory_18;my $memory_19;$memory_0 = $_[0];
#line 74
$memory_2 = $memory_0->{'name'};
#line 74
$memory_3 = [];
#line 74
$memory_4 = [];
#line 74
$memory_1 = {module_name => $memory_2,functions => $memory_3,imports => $memory_4,};
#line 74
undef($memory_2);
#line 74
undef($memory_3);
#line 74
undef($memory_4);
#line 79
$memory_2 = [];
#line 79
$memory_3 = $memory_2;
#line 79
 if (c_rt_lib::get_hashcount($memory_1) > 1) {$memory_1 = {%{$memory_1}};}$memory_1->{'imports'} = $memory_3;
#line 79
undef($memory_2);
#line 79
undef($memory_3);
#line 80
$memory_2 = $memory_0->{'import'};
#line 80
$memory_4 = 0;
#line 80
$memory_5 = 1;
#line 80
$memory_6 = c_rt_lib::array_len($memory_2);
#line 80
label_3:
#line 80
$memory_7 = c_rt_lib::to_nl($memory_4 >= $memory_6);
#line 80
if (c_rt_lib::check_true($memory_7)) {goto label_1;}
#line 80
$memory_3 = $memory_2->[$memory_4];
#line 81
$memory_8 = "imports";
#line 81
$memory_8 = c_rt_lib::get_ref_hash($memory_1, $memory_8);
#line 81
$memory_9 = $memory_3->{'name'};
#line 81
array::push($memory_8, $memory_9);
#line 81
undef($memory_9);
#line 81
$memory_9 = "imports";
#line 81
c_rt_lib::set_ref_hash($memory_1, $memory_9, $memory_8);
#line 81
undef($memory_9);
#line 81
undef($memory_8);
#line 82
$memory_4 = $memory_4 + $memory_5;
#line 82
goto label_3;
#line 82
label_1:
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
$memory_2 = $memory_0->{'fun_def'};
#line 83
$memory_4 = 0;
#line 83
$memory_5 = 1;
#line 83
$memory_6 = c_rt_lib::array_len($memory_2);
#line 83
label_6:
#line 83
$memory_7 = c_rt_lib::to_nl($memory_4 >= $memory_6);
#line 83
if (c_rt_lib::check_true($memory_7)) {goto label_4;}
#line 83
$memory_3 = $memory_2->[$memory_4];
#line 84
$memory_9 = {};
#line 84
$memory_10 = 0;
#line 84
$memory_8 = {variables => $memory_9,register => $memory_10,};
#line 84
undef($memory_9);
#line 84
undef($memory_10);
#line 85
$memory_10 = 0;
#line 85
$memory_11 = nlasm::empty_debug();
#line 85
$memory_12 = $memory_0->{'name'};
#line 85
$memory_14 = c_rt_lib::ov_mk_none('none');
#line 85
$memory_15 = $memory_3->{'access'};
#line 85
$memory_16 = 0;
#line 85
$memory_17 = [];
#line 85
$memory_18 = [];
#line 85
$memory_19 = $memory_3->{'name'};
#line 85
$memory_13 = {annotation => $memory_14,access => $memory_15,reg_size => $memory_16,args_type => $memory_17,commands => $memory_18,name => $memory_19,};
#line 85
undef($memory_14);
#line 85
undef($memory_15);
#line 85
undef($memory_16);
#line 85
undef($memory_17);
#line 85
undef($memory_18);
#line 85
undef($memory_19);
#line 85
$memory_16 = "";
#line 85
$memory_15 = {label => $memory_16,logic => $memory_8,};
#line 85
undef($memory_16);
#line 85
$memory_17 = "";
#line 85
$memory_16 = {label => $memory_17,logic => $memory_8,};
#line 85
undef($memory_17);
#line 85
$memory_14 = {break => $memory_15,continue => $memory_16,};
#line 85
undef($memory_15);
#line 85
undef($memory_16);
#line 85
$memory_9 = {label_nr => $memory_10,debug => $memory_11,module_name => $memory_12,logic => $memory_8,result => $memory_13,loop_label => $memory_14,};
#line 85
undef($memory_10);
#line 85
undef($memory_11);
#line 85
undef($memory_12);
#line 85
undef($memory_13);
#line 85
undef($memory_14);
#line 103
translator_priv::print_fun_def($memory_3, $memory_9);
#line 104
$memory_10 = "functions";
#line 104
$memory_10 = c_rt_lib::get_ref_hash($memory_1, $memory_10);
#line 104
$memory_11 = $memory_9->{'result'};
#line 104
array::push($memory_10, $memory_11);
#line 104
undef($memory_11);
#line 104
$memory_11 = "functions";
#line 104
c_rt_lib::set_ref_hash($memory_1, $memory_11, $memory_10);
#line 104
undef($memory_11);
#line 104
undef($memory_10);
#line 104
undef($memory_8);
#line 104
undef($memory_9);
#line 105
$memory_4 = $memory_4 + $memory_5;
#line 105
goto label_6;
#line 105
label_4:
#line 105
undef($memory_2);
#line 105
undef($memory_3);
#line 105
undef($memory_4);
#line 105
undef($memory_5);
#line 105
undef($memory_6);
#line 105
undef($memory_7);
#line 106
undef($memory_0);
#line 106
return $memory_1;
#line 106
undef($memory_1);
#line 106
undef($memory_0);
#line 106
return;
}

sub translator_priv::print_fun_def($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;$memory_0 = $_[0];$memory_1 = $_[1];Scalar::Util::weaken($_[1]) if ref($_[1]);
#line 110
$memory_2 = $memory_0->{'args'};
#line 110
$memory_4 = 0;
#line 110
$memory_5 = 1;
#line 110
$memory_6 = c_rt_lib::array_len($memory_2);
#line 110
label_3:
#line 110
$memory_7 = c_rt_lib::to_nl($memory_4 >= $memory_6);
#line 110
if (c_rt_lib::check_true($memory_7)) {goto label_1;}
#line 110
$memory_3 = $memory_2->[$memory_4];
#line 111
$memory_8 = $memory_3->{'mod'};
#line 111
$memory_9 = c_rt_lib::ov_is($memory_8, 'none');
#line 111
if (c_rt_lib::check_true($memory_9)) {goto label_5;}
#line 114
$memory_9 = c_rt_lib::ov_is($memory_8, 'ref');
#line 114
if (c_rt_lib::check_true($memory_9)) {goto label_6;}
#line 114
$memory_9 = "NOMATCHALERT";
#line 114
$memory_9 = [$memory_9,$memory_8];
#line 114
die(dfile::ssave($memory_9));
#line 111
label_5:
#line 112
$memory_10 = $memory_3->{'name'};
#line 112
translator_priv::new_declaration($memory_10, $memory_1);
#line 112
undef($memory_10);
#line 113
$memory_10 = "result";
#line 113
$memory_10 = c_rt_lib::get_ref_hash($memory_1, $memory_10);
#line 113
$memory_11 = "args_type";
#line 113
$memory_11 = c_rt_lib::get_ref_hash($memory_10, $memory_11);
#line 113
$memory_12 = c_rt_lib::ov_mk_none('val');
#line 113
array::push($memory_11, $memory_12);
#line 113
undef($memory_12);
#line 113
$memory_12 = "args_type";
#line 113
c_rt_lib::set_ref_hash($memory_10, $memory_12, $memory_11);
#line 113
$memory_12 = "result";
#line 113
c_rt_lib::set_ref_hash($memory_1, $memory_12, $memory_10);
#line 113
undef($memory_12);
#line 113
undef($memory_10);
#line 113
undef($memory_11);
#line 114
goto label_4;
#line 114
label_6:
#line 115
$memory_10 = $memory_3->{'name'};
#line 115
translator_priv::new_declaration($memory_10, $memory_1);
#line 115
undef($memory_10);
#line 116
$memory_10 = "result";
#line 116
$memory_10 = c_rt_lib::get_ref_hash($memory_1, $memory_10);
#line 116
$memory_11 = "args_type";
#line 116
$memory_11 = c_rt_lib::get_ref_hash($memory_10, $memory_11);
#line 116
$memory_12 = c_rt_lib::ov_mk_none('ref');
#line 116
array::push($memory_11, $memory_12);
#line 116
undef($memory_12);
#line 116
$memory_12 = "args_type";
#line 116
c_rt_lib::set_ref_hash($memory_10, $memory_12, $memory_11);
#line 116
$memory_12 = "result";
#line 116
c_rt_lib::set_ref_hash($memory_1, $memory_12, $memory_10);
#line 116
undef($memory_12);
#line 116
undef($memory_10);
#line 116
undef($memory_11);
#line 117
goto label_4;
#line 117
label_4:
#line 117
undef($memory_8);
#line 117
undef($memory_9);
#line 118
$memory_4 = $memory_4 + $memory_5;
#line 118
goto label_3;
#line 118
label_1:
#line 118
undef($memory_2);
#line 118
undef($memory_3);
#line 118
undef($memory_4);
#line 118
undef($memory_5);
#line 118
undef($memory_6);
#line 118
undef($memory_7);
#line 119
$memory_2 = $memory_0->{'cmd'};
#line 119
translator_priv::print_cmd($memory_2, $memory_1);
#line 119
undef($memory_2);
#line 120
$memory_2 = c_rt_lib::ov_mk_none('nop');
#line 120
translator_priv::print_return($memory_2, $memory_1);
#line 120
undef($memory_2);
#line 120
undef($memory_0);
#line 120
$_[1] = $memory_1;return;
$_[1] = $memory_1;}

sub translator_priv::print_array_declaration($$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;$memory_0 = $_[0];$memory_1 = $_[1];$memory_2 = $_[2];Scalar::Util::weaken($_[2]) if ref($_[2]);
#line 124
$memory_3 = [];
#line 125
$memory_5 = 0;
#line 125
$memory_6 = 1;
#line 125
$memory_7 = c_rt_lib::array_len($memory_0);
#line 125
label_3:
#line 125
$memory_8 = c_rt_lib::to_nl($memory_5 >= $memory_7);
#line 125
if (c_rt_lib::check_true($memory_8)) {goto label_1;}
#line 125
$memory_4 = $memory_0->[$memory_5];
#line 126
$memory_9 = translator_priv::calc_val($memory_4, $memory_2);
#line 126
array::push($memory_3, $memory_9);
#line 126
undef($memory_9);
#line 127
$memory_5 = $memory_5 + $memory_6;
#line 127
goto label_3;
#line 127
label_1:
#line 127
undef($memory_4);
#line 127
undef($memory_5);
#line 127
undef($memory_6);
#line 127
undef($memory_7);
#line 127
undef($memory_8);
#line 128
$memory_4 = {dest => $memory_1,src => $memory_3,};
#line 128
$memory_4 = c_rt_lib::ov_mk_arg('arr_decl', $memory_4);
#line 128
translator_priv::print($memory_2, $memory_4);
#line 128
undef($memory_4);
#line 128
undef($memory_3);
#line 128
undef($memory_0);
#line 128
undef($memory_1);
#line 128
$_[2] = $memory_2;return;
$_[2] = $memory_2;}

sub translator_priv::print_hash_declaration($$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;$memory_0 = $_[0];$memory_1 = $_[1];$memory_2 = $_[2];Scalar::Util::weaken($_[2]) if ref($_[2]);
#line 136
$memory_3 = [];
#line 137
$memory_5 = 0;
#line 137
$memory_6 = 1;
#line 137
$memory_7 = c_rt_lib::array_len($memory_0);
#line 137
label_3:
#line 137
$memory_8 = c_rt_lib::to_nl($memory_5 >= $memory_7);
#line 137
if (c_rt_lib::check_true($memory_8)) {goto label_1;}
#line 137
$memory_4 = $memory_0->[$memory_5];
#line 138
$memory_10 = $memory_4->{'key'};
#line 138
$memory_10 = c_rt_lib::ov_as($memory_10, 'hash_key');
#line 138
$memory_12 = $memory_4->{'val'};
#line 138
$memory_11 = translator_priv::calc_val($memory_12, $memory_2);
#line 138
undef($memory_12);
#line 138
$memory_9 = {key => $memory_10,val => $memory_11,};
#line 138
undef($memory_10);
#line 138
undef($memory_11);
#line 138
array::push($memory_3, $memory_9);
#line 138
undef($memory_9);
#line 142
$memory_5 = $memory_5 + $memory_6;
#line 142
goto label_3;
#line 142
label_1:
#line 142
undef($memory_4);
#line 142
undef($memory_5);
#line 142
undef($memory_6);
#line 142
undef($memory_7);
#line 142
undef($memory_8);
#line 143
$memory_4 = {dest => $memory_1,src => $memory_3,};
#line 143
$memory_4 = c_rt_lib::ov_mk_arg('hash_decl', $memory_4);
#line 143
translator_priv::print($memory_2, $memory_4);
#line 143
undef($memory_4);
#line 143
undef($memory_3);
#line 143
undef($memory_0);
#line 143
undef($memory_1);
#line 143
$_[2] = $memory_2;return;
$_[2] = $memory_2;}

sub translator_priv::print_variant($$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;$memory_0 = $_[0];$memory_1 = $_[1];$memory_2 = $_[2];Scalar::Util::weaken($_[2]) if ref($_[2]);
#line 151
$memory_3 = c_rt_lib::ov_mk_none('emp');
#line 152
$memory_4 = $memory_0->{'var'};
#line 152
$memory_4 = c_rt_lib::ov_is($memory_4, 'nop');
#line 152
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 152
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 152
if (c_rt_lib::check_true($memory_4)) {goto label_2;}
#line 153
$memory_6 = $memory_0->{'var'};
#line 153
$memory_5 = translator_priv::dest_val($memory_6, $memory_1, $memory_2);
#line 153
undef($memory_6);
#line 153
$memory_5 = c_rt_lib::ov_mk_arg('arg', $memory_5);
#line 153
$memory_3 = $memory_5;
#line 153
undef($memory_5);
#line 154
goto label_2;
#line 154
label_2:
#line 154
undef($memory_4);
#line 155
$memory_5 = $memory_0->{'name'};
#line 155
$memory_4 = {dest => $memory_1,src => $memory_3,name => $memory_5,};
#line 155
undef($memory_5);
#line 155
$memory_4 = c_rt_lib::ov_mk_arg('ov_mk', $memory_4);
#line 155
translator_priv::print($memory_2, $memory_4);
#line 155
undef($memory_4);
#line 155
undef($memory_3);
#line 155
undef($memory_0);
#line 155
undef($memory_1);
#line 155
$_[2] = $memory_2;return;
$_[2] = $memory_2;}

sub translator_priv::print_var_decl($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;$memory_0 = $_[0];$memory_1 = $_[1];Scalar::Util::weaken($_[1]) if ref($_[1]);
#line 164
$memory_3 = $memory_0->{'name'};
#line 164
$memory_2 = translator_priv::new_declaration($memory_3, $memory_1);
#line 164
undef($memory_3);
#line 165
$memory_3 = $memory_0->{'value'};
#line 165
$memory_4 = c_rt_lib::ov_is($memory_3, 'none');
#line 165
if (c_rt_lib::check_true($memory_4)) {goto label_2;}
#line 166
$memory_4 = c_rt_lib::ov_is($memory_3, 'value');
#line 166
if (c_rt_lib::check_true($memory_4)) {goto label_3;}
#line 166
$memory_4 = "NOMATCHALERT";
#line 166
$memory_4 = [$memory_4,$memory_3];
#line 166
die(dfile::ssave($memory_4));
#line 165
label_2:
#line 166
goto label_1;
#line 166
label_3:
#line 166
$memory_5 = c_rt_lib::ov_as($memory_3, 'value');
#line 167
translator_priv::print_val($memory_5, $memory_2, $memory_1);
#line 167
undef($memory_5);
#line 168
goto label_1;
#line 168
label_1:
#line 168
undef($memory_3);
#line 168
undef($memory_4);
#line 169
undef($memory_0);
#line 169
$_[1] = $memory_1;return $memory_2;
#line 169
undef($memory_2);
#line 169
undef($memory_0);
#line 169
$_[1] = $memory_1;return;
$_[1] = $memory_1;}

sub translator_priv::load_const($$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;$memory_0 = $_[0];$memory_1 = $_[1];$memory_2 = $_[2];Scalar::Util::weaken($_[2]) if ref($_[2]);
#line 173
$memory_3 = {dest => $memory_1,val => $memory_0,};
#line 173
$memory_3 = c_rt_lib::ov_mk_arg('load_const', $memory_3);
#line 173
translator_priv::print($memory_2, $memory_3);
#line 173
undef($memory_3);
#line 173
undef($memory_0);
#line 173
undef($memory_1);
#line 173
$_[2] = $memory_2;return;
$_[2] = $memory_2;}

sub translator::__ref_rec_args_t() {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;
#line 181
$memory_3 = ptd::sim();
#line 181
$memory_4 = ptd::sim();
#line 181
$memory_5 = ptd::sim();
#line 181
$memory_2 = {var_name => $memory_3,list_name => $memory_4,lvalue_var_name => $memory_5,};
#line 181
undef($memory_3);
#line 181
undef($memory_4);
#line 181
undef($memory_5);
#line 181
$memory_1 = ptd::rec($memory_2);
#line 181
undef($memory_2);
#line 181
$memory_0 = ptd::arr($memory_1);
#line 181
undef($memory_1);
#line 181
return $memory_0;
#line 181
undef($memory_0);
#line 181
return;
}

my $_ref_rec_args_t;
sub translator::ref_rec_args_t() {
	$_ref_rec_args_t = translator::__ref_rec_args_t() unless defined $_ref_rec_args_t;
	return $_ref_rec_args_t;
}

sub translator_priv::print_fun_val($$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;my $memory_13;my $memory_14;my $memory_15;my $memory_16;my $memory_17;my $memory_18;my $memory_19;$memory_0 = $_[0];$memory_1 = $_[1];$memory_2 = $_[2];Scalar::Util::weaken($_[2]) if ref($_[2]);
#line 185
$memory_3 = [];
#line 189
$memory_4 = {};
#line 190
$memory_5 = {};
#line 191
$memory_6 = {};
#line 192
$memory_8 = $memory_0->{'args'};
#line 192
$memory_7 = array::len($memory_8);
#line 192
undef($memory_8);
#line 192
$memory_8 = 1;
#line 192
$memory_7 = $memory_7 - $memory_8;
#line 192
undef($memory_8);
#line 192
label_2:
#line 192
$memory_8 = 0;
#line 192
$memory_8 = c_rt_lib::to_nl($memory_7 >= $memory_8);
#line 192
$memory_8 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 192
if (c_rt_lib::check_true($memory_8)) {goto label_1;}
#line 193
$memory_9 = $memory_0->{'args'};
#line 193
$memory_9 = $memory_9->[$memory_7];
#line 193
$memory_9 = $memory_9->{'mod'};
#line 193
$memory_9 = c_rt_lib::ov_is($memory_9, 'ref');
#line 193
$memory_9 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_9));
#line 193
$memory_9 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_9));
#line 193
if (c_rt_lib::check_true($memory_9)) {goto label_5;}
#line 193
undef($memory_9);
#line 193
goto label_3;
#line 193
goto label_5;
#line 193
label_5:
#line 193
undef($memory_9);
#line 194
$memory_9 = $memory_0->{'args'};
#line 194
$memory_9 = $memory_9->[$memory_7];
#line 194
$memory_9 = $memory_9->{'val'};
#line 195
translator_priv::get_stuct_of_lvalue($memory_9);
#line 196
$memory_11 = $memory_9;
#line 196
$memory_11 = c_rt_lib::ov_as($memory_11, 'var');
#line 196
$memory_10 = hash::has_key($memory_6, $memory_11);
#line 196
undef($memory_11);
#line 196
$memory_10 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_10));
#line 196
if (c_rt_lib::check_true($memory_10)) {goto label_7;}
#line 196
undef($memory_9);
#line 196
undef($memory_10);
#line 196
goto label_3;
#line 196
goto label_7;
#line 196
label_7:
#line 196
undef($memory_10);
#line 197
$memory_10 = $memory_9;
#line 197
$memory_10 = c_rt_lib::ov_as($memory_10, 'var');
#line 197
$memory_11 = 0;
#line 197
hash::set_value($memory_6, $memory_10, $memory_11);
#line 197
undef($memory_11);
#line 197
undef($memory_10);
#line 198
$memory_10 = 0;
#line 198
hash::set_value($memory_5, $memory_7, $memory_10);
#line 198
undef($memory_10);
#line 198
undef($memory_9);
#line 198
label_3:
#line 198
$memory_9 = 1;
#line 198
$memory_7 = $memory_7 - $memory_9;
#line 198
undef($memory_9);
#line 199
goto label_2;
#line 199
label_1:
#line 199
undef($memory_7);
#line 199
undef($memory_8);
#line 200
$memory_7 = [];
#line 201
$memory_9 = $memory_0->{'args'};
#line 201
$memory_8 = array::len($memory_9);
#line 201
undef($memory_9);
#line 201
$memory_9 = 0;
#line 201
$memory_10 = 1;
#line 201
label_10:
#line 201
$memory_11 = c_rt_lib::to_nl($memory_9 >= $memory_8);
#line 201
if (c_rt_lib::check_true($memory_11)) {goto label_8;}
#line 202
$memory_12 = $memory_0->{'args'};
#line 202
$memory_12 = $memory_12->[$memory_9];
#line 203
$memory_13 = $memory_12->{'mod'};
#line 203
$memory_14 = c_rt_lib::ov_is($memory_13, 'none');
#line 203
if (c_rt_lib::check_true($memory_14)) {goto label_12;}
#line 205
$memory_14 = c_rt_lib::ov_is($memory_13, 'ref');
#line 205
if (c_rt_lib::check_true($memory_14)) {goto label_13;}
#line 205
$memory_14 = "NOMATCHALERT";
#line 205
$memory_14 = [$memory_14,$memory_13];
#line 205
die(dfile::ssave($memory_14));
#line 203
label_12:
#line 204
$memory_16 = $memory_12->{'val'};
#line 204
$memory_15 = translator_priv::calc_val($memory_16, $memory_2);
#line 204
undef($memory_16);
#line 204
$memory_15 = c_rt_lib::ov_mk_arg('val', $memory_15);
#line 204
array::push($memory_3, $memory_15);
#line 204
undef($memory_15);
#line 205
goto label_11;
#line 205
label_13:
#line 206
$memory_15 = hash::has_key($memory_5, $memory_9);
#line 206
$memory_15 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_15));
#line 206
if (c_rt_lib::check_true($memory_15)) {goto label_15;}
#line 207
$memory_17 = $memory_12->{'val'};
#line 207
$memory_18 = 1;
#line 207
$memory_16 = translator_priv::get_value_of_lvalue($memory_17, $memory_18, $memory_2);
#line 207
undef($memory_18);
#line 207
undef($memory_17);
#line 208
$memory_18 = array::len($memory_16);
#line 208
$memory_19 = 1;
#line 208
$memory_18 = $memory_18 - $memory_19;
#line 208
undef($memory_19);
#line 208
$memory_17 = $memory_16->[$memory_18];
#line 208
undef($memory_18);
#line 208
$memory_17 = c_rt_lib::ov_as($memory_17, 'value');
#line 209
$memory_18 = c_rt_lib::ov_mk_arg('ref', $memory_17);
#line 209
array::push($memory_3, $memory_18);
#line 209
undef($memory_18);
#line 210
hash::set_value($memory_4, $memory_9, $memory_16);
#line 210
undef($memory_16);
#line 210
undef($memory_17);
#line 211
goto label_14;
#line 211
label_15:
#line 212
$memory_16 = translator_priv::new_register($memory_2);
#line 213
$memory_17 = $memory_12->{'val'};
#line 213
translator_priv::print_val($memory_17, $memory_16, $memory_2);
#line 213
undef($memory_17);
#line 214
$memory_17 = c_rt_lib::ov_mk_arg('ref', $memory_16);
#line 214
array::push($memory_3, $memory_17);
#line 214
undef($memory_17);
#line 214
undef($memory_16);
#line 215
goto label_14;
#line 215
label_14:
#line 215
undef($memory_15);
#line 216
goto label_11;
#line 216
label_11:
#line 216
undef($memory_13);
#line 216
undef($memory_14);
#line 217
$memory_13 = translator_priv::save_registers($memory_2);
#line 217
array::push($memory_7, $memory_13);
#line 217
undef($memory_13);
#line 217
undef($memory_12);
#line 218
$memory_9 = $memory_9 + $memory_10;
#line 218
goto label_10;
#line 218
label_8:
#line 218
undef($memory_8);
#line 218
undef($memory_9);
#line 218
undef($memory_10);
#line 218
undef($memory_11);
#line 219
$memory_9 = $memory_0->{'module'};
#line 219
$memory_10 = $memory_0->{'name'};
#line 219
$memory_8 = {dest => $memory_1,mod => $memory_9,fun_name => $memory_10,args => $memory_3,};
#line 219
undef($memory_9);
#line 219
undef($memory_10);
#line 219
$memory_8 = c_rt_lib::ov_mk_arg('call', $memory_8);
#line 219
translator_priv::print($memory_2, $memory_8);
#line 219
undef($memory_8);
#line 226
$memory_8 = array::len($memory_7);
#line 226
$memory_9 = 1;
#line 226
$memory_8 = $memory_8 - $memory_9;
#line 226
undef($memory_9);
#line 226
label_17:
#line 226
$memory_9 = 0;
#line 226
$memory_9 = c_rt_lib::to_nl($memory_8 >= $memory_9);
#line 226
$memory_9 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_9));
#line 226
if (c_rt_lib::check_true($memory_9)) {goto label_16;}
#line 227
$memory_10 = $memory_7->[$memory_8];
#line 227
translator_priv::restore_registers($memory_10, $memory_2);
#line 227
undef($memory_10);
#line 228
$memory_10 = hash::has_key($memory_4, $memory_8);
#line 228
$memory_10 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_10));
#line 228
$memory_10 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_10));
#line 228
if (c_rt_lib::check_true($memory_10)) {goto label_20;}
#line 228
undef($memory_10);
#line 228
goto label_18;
#line 228
goto label_20;
#line 228
label_20:
#line 228
undef($memory_10);
#line 229
$memory_10 = hash::get_value($memory_4, $memory_8);
#line 229
$memory_11 = 1;
#line 229
translator_priv::set_value_of_lvalue($memory_10, $memory_11, $memory_2);
#line 229
undef($memory_11);
#line 229
undef($memory_10);
#line 229
label_18:
#line 229
$memory_10 = 1;
#line 229
$memory_8 = $memory_8 - $memory_10;
#line 229
undef($memory_10);
#line 230
goto label_17;
#line 230
label_16:
#line 230
undef($memory_8);
#line 230
undef($memory_9);
#line 230
undef($memory_3);
#line 230
undef($memory_4);
#line 230
undef($memory_5);
#line 230
undef($memory_6);
#line 230
undef($memory_7);
#line 230
undef($memory_0);
#line 230
undef($memory_1);
#line 230
$_[2] = $memory_2;return;
$_[2] = $memory_2;}

sub translator_priv::print_val($$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;$memory_0 = $_[0];$memory_1 = $_[1];$memory_2 = $_[2];Scalar::Util::weaken($_[2]) if ref($_[2]);
#line 234
$memory_3 = translator_priv::save_registers($memory_2);
#line 235
$memory_4 = c_rt_lib::ov_is($memory_0, 'const');
#line 235
if (c_rt_lib::check_true($memory_4)) {goto label_2;}
#line 237
$memory_4 = c_rt_lib::ov_is($memory_0, 'string');
#line 237
if (c_rt_lib::check_true($memory_4)) {goto label_3;}
#line 239
$memory_4 = c_rt_lib::ov_is($memory_0, 'ternary_op');
#line 239
if (c_rt_lib::check_true($memory_4)) {goto label_4;}
#line 241
$memory_4 = c_rt_lib::ov_is($memory_0, 'hash_key');
#line 241
if (c_rt_lib::check_true($memory_4)) {goto label_5;}
#line 243
$memory_4 = c_rt_lib::ov_is($memory_0, 'variant');
#line 243
if (c_rt_lib::check_true($memory_4)) {goto label_6;}
#line 245
$memory_4 = c_rt_lib::ov_is($memory_0, 'var');
#line 245
if (c_rt_lib::check_true($memory_4)) {goto label_7;}
#line 247
$memory_4 = c_rt_lib::ov_is($memory_0, 'parenthesis');
#line 247
if (c_rt_lib::check_true($memory_4)) {goto label_8;}
#line 249
$memory_4 = c_rt_lib::ov_is($memory_0, 'bin_op');
#line 249
if (c_rt_lib::check_true($memory_4)) {goto label_9;}
#line 251
$memory_4 = c_rt_lib::ov_is($memory_0, 'var_op');
#line 251
if (c_rt_lib::check_true($memory_4)) {goto label_10;}
#line 253
$memory_4 = c_rt_lib::ov_is($memory_0, 'unary_op');
#line 253
if (c_rt_lib::check_true($memory_4)) {goto label_11;}
#line 255
$memory_4 = c_rt_lib::ov_is($memory_0, 'fun_val');
#line 255
if (c_rt_lib::check_true($memory_4)) {goto label_12;}
#line 257
$memory_4 = c_rt_lib::ov_is($memory_0, 'arr_decl');
#line 257
if (c_rt_lib::check_true($memory_4)) {goto label_13;}
#line 259
$memory_4 = c_rt_lib::ov_is($memory_0, 'hash_decl');
#line 259
if (c_rt_lib::check_true($memory_4)) {goto label_14;}
#line 261
$memory_4 = c_rt_lib::ov_is($memory_0, 'nop');
#line 261
if (c_rt_lib::check_true($memory_4)) {goto label_15;}
#line 262
$memory_4 = c_rt_lib::ov_is($memory_0, 'fun_label');
#line 262
if (c_rt_lib::check_true($memory_4)) {goto label_16;}
#line 264
$memory_4 = c_rt_lib::ov_is($memory_0, 'post_inc');
#line 264
if (c_rt_lib::check_true($memory_4)) {goto label_17;}
#line 266
$memory_4 = c_rt_lib::ov_is($memory_0, 'post_dec');
#line 266
if (c_rt_lib::check_true($memory_4)) {goto label_18;}
#line 266
$memory_4 = "NOMATCHALERT";
#line 266
$memory_4 = [$memory_4,$memory_0];
#line 266
die(dfile::ssave($memory_4));
#line 235
label_2:
#line 235
$memory_5 = c_rt_lib::ov_as($memory_0, 'const');
#line 236
$memory_6 = translator_priv::convert_str_to_number($memory_5);
#line 236
translator_priv::load_const($memory_6, $memory_1, $memory_2);
#line 236
undef($memory_6);
#line 236
undef($memory_5);
#line 237
goto label_1;
#line 237
label_3:
#line 237
$memory_5 = c_rt_lib::ov_as($memory_0, 'string');
#line 238
$memory_6 = translator_priv::make_string($memory_5, $memory_2);
#line 238
translator_priv::load_const($memory_6, $memory_1, $memory_2);
#line 238
undef($memory_6);
#line 238
undef($memory_5);
#line 239
goto label_1;
#line 239
label_4:
#line 239
$memory_5 = c_rt_lib::ov_as($memory_0, 'ternary_op');
#line 240
translator_priv::print_ternary_op($memory_5, $memory_1, $memory_2);
#line 240
undef($memory_5);
#line 241
goto label_1;
#line 241
label_5:
#line 241
$memory_5 = c_rt_lib::ov_as($memory_0, 'hash_key');
#line 242
$memory_6 = [];
#line 242
die(dfile::ssave($memory_6));
#line 242
undef($memory_6);
#line 242
undef($memory_5);
#line 243
goto label_1;
#line 243
label_6:
#line 243
$memory_5 = c_rt_lib::ov_as($memory_0, 'variant');
#line 244
translator_priv::print_variant($memory_5, $memory_1, $memory_2);
#line 244
undef($memory_5);
#line 245
goto label_1;
#line 245
label_7:
#line 245
$memory_5 = c_rt_lib::ov_as($memory_0, 'var');
#line 246
translator_priv::print_variable($memory_5, $memory_1, $memory_2);
#line 246
undef($memory_5);
#line 247
goto label_1;
#line 247
label_8:
#line 247
$memory_5 = c_rt_lib::ov_as($memory_0, 'parenthesis');
#line 248
translator_priv::print_val($memory_5, $memory_1, $memory_2);
#line 248
undef($memory_5);
#line 249
goto label_1;
#line 249
label_9:
#line 249
$memory_5 = c_rt_lib::ov_as($memory_0, 'bin_op');
#line 250
translator_priv::print_bin_op($memory_5, $memory_1, $memory_2);
#line 250
undef($memory_5);
#line 251
goto label_1;
#line 251
label_10:
#line 251
$memory_5 = c_rt_lib::ov_as($memory_0, 'var_op');
#line 252
translator_priv::print_var_op($memory_5, $memory_1, $memory_2);
#line 252
undef($memory_5);
#line 253
goto label_1;
#line 253
label_11:
#line 253
$memory_5 = c_rt_lib::ov_as($memory_0, 'unary_op');
#line 254
translator_priv::print_unary_op($memory_5, $memory_1, $memory_2);
#line 254
undef($memory_5);
#line 255
goto label_1;
#line 255
label_12:
#line 255
$memory_5 = c_rt_lib::ov_as($memory_0, 'fun_val');
#line 256
translator_priv::print_fun_val($memory_5, $memory_1, $memory_2);
#line 256
undef($memory_5);
#line 257
goto label_1;
#line 257
label_13:
#line 257
$memory_5 = c_rt_lib::ov_as($memory_0, 'arr_decl');
#line 258
translator_priv::print_array_declaration($memory_5, $memory_1, $memory_2);
#line 258
undef($memory_5);
#line 259
goto label_1;
#line 259
label_14:
#line 259
$memory_5 = c_rt_lib::ov_as($memory_0, 'hash_decl');
#line 260
translator_priv::print_hash_declaration($memory_5, $memory_1, $memory_2);
#line 260
undef($memory_5);
#line 261
goto label_1;
#line 261
label_15:
#line 262
goto label_1;
#line 262
label_16:
#line 262
$memory_5 = c_rt_lib::ov_as($memory_0, 'fun_label');
#line 263
$memory_6 = [];
#line 263
die(dfile::ssave($memory_6));
#line 263
undef($memory_6);
#line 263
undef($memory_5);
#line 264
goto label_1;
#line 264
label_17:
#line 264
$memory_5 = c_rt_lib::ov_as($memory_0, 'post_inc');
#line 265
$memory_6 = "++";
#line 265
translator_priv::print_post_operator($memory_5, $memory_6, $memory_1, $memory_2);
#line 265
undef($memory_6);
#line 265
undef($memory_5);
#line 266
goto label_1;
#line 266
label_18:
#line 266
$memory_5 = c_rt_lib::ov_as($memory_0, 'post_dec');
#line 267
$memory_6 = "--";
#line 267
translator_priv::print_post_operator($memory_5, $memory_6, $memory_1, $memory_2);
#line 267
undef($memory_6);
#line 267
undef($memory_5);
#line 268
goto label_1;
#line 268
label_1:
#line 268
undef($memory_4);
#line 269
translator_priv::restore_registers($memory_3, $memory_2);
#line 269
undef($memory_3);
#line 269
undef($memory_0);
#line 269
undef($memory_1);
#line 269
$_[2] = $memory_2;return;
$_[2] = $memory_2;}

sub translator_priv::print_variable($$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;$memory_0 = $_[0];$memory_1 = $_[1];$memory_2 = $_[2];Scalar::Util::weaken($_[2]) if ref($_[2]);
#line 273
$memory_3 = translator_priv::get_var_register($memory_0, $memory_2);
#line 273
translator_priv::move($memory_1, $memory_3, $memory_2);
#line 273
undef($memory_3);
#line 273
undef($memory_0);
#line 273
undef($memory_1);
#line 273
$_[2] = $memory_2;return;
$_[2] = $memory_2;}

sub translator_priv::print_post_operator($$$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;$memory_0 = $_[0];$memory_1 = $_[1];$memory_2 = $_[2];$memory_3 = $_[3];Scalar::Util::weaken($_[3]) if ref($_[3]);
#line 277
$memory_5 = 1;
#line 277
$memory_4 = translator_priv::get_value_of_lvalue($memory_0, $memory_5, $memory_3);
#line 277
undef($memory_5);
#line 278
$memory_6 = array::len($memory_4);
#line 278
$memory_7 = 1;
#line 278
$memory_6 = $memory_6 - $memory_7;
#line 278
undef($memory_7);
#line 278
$memory_5 = $memory_4->[$memory_6];
#line 278
undef($memory_6);
#line 278
$memory_5 = c_rt_lib::ov_as($memory_5, 'value');
#line 279
translator_priv::move($memory_2, $memory_5, $memory_3);
#line 280
$memory_7 = 1;
#line 280
$memory_7 = c_rt_lib::ov_mk_arg('const', $memory_7);
#line 280
$memory_6 = translator_priv::calc_val($memory_7, $memory_3);
#line 280
undef($memory_7);
#line 281
$memory_7 = "++";
#line 281
$memory_7 = c_rt_lib::to_nl($memory_1 eq $memory_7);
#line 281
if (c_rt_lib::check_true($memory_7)) {goto label_2;}
#line 281
$memory_7 = "-";
#line 281
goto label_1;
#line 281
label_2:
#line 281
$memory_7 = "+";
#line 281
label_1:
#line 281
translator_priv::print_bin_op_operator_command($memory_5, $memory_5, $memory_6, $memory_7, $memory_3);
#line 281
undef($memory_7);
#line 282
$memory_7 = 1;
#line 282
translator_priv::set_value_of_lvalue($memory_4, $memory_7, $memory_3);
#line 282
undef($memory_7);
#line 282
undef($memory_4);
#line 282
undef($memory_5);
#line 282
undef($memory_6);
#line 282
undef($memory_0);
#line 282
undef($memory_1);
#line 282
undef($memory_2);
#line 282
$_[3] = $memory_3;return;
$_[3] = $memory_3;}

sub translator_priv::print_unary_op($$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;$memory_0 = $_[0];$memory_1 = $_[1];$memory_2 = $_[2];Scalar::Util::weaken($_[2]) if ref($_[2]);
#line 286
$memory_3 = $memory_0->{'op'};
#line 286
$memory_4 = "!";
#line 286
$memory_3 = c_rt_lib::to_nl($memory_3 eq $memory_4);
#line 286
undef($memory_4);
#line 286
if (c_rt_lib::check_true($memory_3)) {goto label_4;}
#line 286
$memory_3 = $memory_0->{'op'};
#line 286
$memory_4 = "-";
#line 286
$memory_3 = c_rt_lib::to_nl($memory_3 eq $memory_4);
#line 286
undef($memory_4);
#line 286
label_4:
#line 286
if (c_rt_lib::check_true($memory_3)) {goto label_3;}
#line 286
$memory_3 = $memory_0->{'op'};
#line 286
$memory_4 = "+";
#line 286
$memory_3 = c_rt_lib::to_nl($memory_3 eq $memory_4);
#line 286
undef($memory_4);
#line 286
label_3:
#line 286
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 286
if (c_rt_lib::check_true($memory_3)) {goto label_2;}
#line 289
$memory_4 = "";
#line 289
$memory_4 = c_rt_lib::to_nl($memory_1 eq $memory_4);
#line 289
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 289
if (c_rt_lib::check_true($memory_4)) {goto label_6;}
#line 289
undef($memory_0);
#line 289
undef($memory_1);
#line 289
undef($memory_3);
#line 289
undef($memory_4);
#line 289
$_[2] = $memory_2;return;
#line 289
goto label_6;
#line 289
label_6:
#line 289
undef($memory_4);
#line 290
$memory_4 = $memory_0->{'val'};
#line 290
translator_priv::print_val($memory_4, $memory_1, $memory_2);
#line 290
undef($memory_4);
#line 291
$memory_5 = $memory_0->{'op'};
#line 291
$memory_4 = {dest => $memory_1,src => $memory_1,op => $memory_5,};
#line 291
undef($memory_5);
#line 291
$memory_4 = c_rt_lib::ov_mk_arg('una_op', $memory_4);
#line 291
translator_priv::print($memory_2, $memory_4);
#line 291
undef($memory_4);
#line 297
goto label_1;
#line 297
label_2:
#line 297
$memory_3 = $memory_0->{'op'};
#line 297
$memory_4 = "++";
#line 297
$memory_3 = c_rt_lib::to_nl($memory_3 eq $memory_4);
#line 297
undef($memory_4);
#line 297
if (c_rt_lib::check_true($memory_3)) {goto label_8;}
#line 297
$memory_3 = $memory_0->{'op'};
#line 297
$memory_4 = "--";
#line 297
$memory_3 = c_rt_lib::to_nl($memory_3 eq $memory_4);
#line 297
undef($memory_4);
#line 297
label_8:
#line 297
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 297
if (c_rt_lib::check_true($memory_3)) {goto label_7;}
#line 298
$memory_5 = $memory_0->{'val'};
#line 298
$memory_6 = 1;
#line 298
$memory_4 = translator_priv::get_value_of_lvalue($memory_5, $memory_6, $memory_2);
#line 298
undef($memory_6);
#line 298
undef($memory_5);
#line 299
$memory_6 = array::len($memory_4);
#line 299
$memory_7 = 1;
#line 299
$memory_6 = $memory_6 - $memory_7;
#line 299
undef($memory_7);
#line 299
$memory_5 = $memory_4->[$memory_6];
#line 299
undef($memory_6);
#line 299
$memory_5 = c_rt_lib::ov_as($memory_5, 'value');
#line 300
$memory_7 = 1;
#line 300
$memory_7 = c_rt_lib::ov_mk_arg('const', $memory_7);
#line 300
$memory_6 = translator_priv::dest_val($memory_7, $memory_1, $memory_2);
#line 300
undef($memory_7);
#line 301
$memory_7 = $memory_0->{'op'};
#line 301
$memory_8 = "++";
#line 301
$memory_7 = c_rt_lib::to_nl($memory_7 eq $memory_8);
#line 301
undef($memory_8);
#line 301
if (c_rt_lib::check_true($memory_7)) {goto label_10;}
#line 301
$memory_7 = "-";
#line 301
goto label_9;
#line 301
label_10:
#line 301
$memory_7 = "+";
#line 301
label_9:
#line 301
translator_priv::print_bin_op_operator_command($memory_5, $memory_5, $memory_6, $memory_7, $memory_2);
#line 301
undef($memory_7);
#line 302
translator_priv::move($memory_1, $memory_5, $memory_2);
#line 303
$memory_7 = 1;
#line 303
translator_priv::set_value_of_lvalue($memory_4, $memory_7, $memory_2);
#line 303
undef($memory_7);
#line 303
undef($memory_4);
#line 303
undef($memory_5);
#line 303
undef($memory_6);
#line 304
goto label_1;
#line 304
label_7:
#line 304
$memory_3 = $memory_0->{'op'};
#line 304
$memory_4 = "\@";
#line 304
$memory_3 = c_rt_lib::to_nl($memory_3 eq $memory_4);
#line 304
undef($memory_4);
#line 304
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 304
if (c_rt_lib::check_true($memory_3)) {goto label_11;}
#line 305
$memory_4 = "";
#line 305
$memory_4 = c_rt_lib::to_nl($memory_1 eq $memory_4);
#line 305
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 305
if (c_rt_lib::check_true($memory_4)) {goto label_13;}
#line 305
undef($memory_0);
#line 305
undef($memory_1);
#line 305
undef($memory_3);
#line 305
undef($memory_4);
#line 305
$_[2] = $memory_2;return;
#line 305
goto label_13;
#line 305
label_13:
#line 305
undef($memory_4);
#line 306
$memory_4 = $memory_0->{'val'};
#line 306
$memory_4 = c_rt_lib::ov_as($memory_4, 'fun_label');
#line 307
$memory_6 = $memory_4->{'module'};
#line 307
$memory_7 = $memory_4->{'name'};
#line 307
$memory_5 = {dest => $memory_1,module => $memory_6,name => $memory_7,};
#line 307
undef($memory_6);
#line 307
undef($memory_7);
#line 307
$memory_5 = c_rt_lib::ov_mk_arg('func', $memory_5);
#line 307
translator_priv::print($memory_2, $memory_5);
#line 307
undef($memory_5);
#line 313
$memory_6 = c_rt_lib::ov_mk_arg('arg', $memory_1);
#line 313
$memory_7 = "ref";
#line 313
$memory_5 = {dest => $memory_1,src => $memory_6,name => $memory_7,};
#line 313
undef($memory_6);
#line 313
undef($memory_7);
#line 313
$memory_5 = c_rt_lib::ov_mk_arg('ov_mk', $memory_5);
#line 313
translator_priv::print($memory_2, $memory_5);
#line 313
undef($memory_5);
#line 313
undef($memory_4);
#line 319
goto label_1;
#line 319
label_11:
#line 320
$memory_4 = [];
#line 320
die(dfile::ssave($memory_4));
#line 320
undef($memory_4);
#line 321
goto label_1;
#line 321
label_1:
#line 321
undef($memory_3);
#line 321
undef($memory_0);
#line 321
undef($memory_1);
#line 321
$_[2] = $memory_2;return;
$_[2] = $memory_2;}

sub translator_priv::print_var_op($$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;$memory_0 = $_[0];$memory_1 = $_[1];$memory_2 = $_[2];Scalar::Util::weaken($_[2]) if ref($_[2]);
#line 325
$memory_3 = "";
#line 325
$memory_3 = c_rt_lib::to_nl($memory_1 eq $memory_3);
#line 325
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 325
if (c_rt_lib::check_true($memory_3)) {goto label_2;}
#line 325
undef($memory_0);
#line 325
undef($memory_1);
#line 325
undef($memory_3);
#line 325
$_[2] = $memory_2;return;
#line 325
goto label_2;
#line 325
label_2:
#line 325
undef($memory_3);
#line 326
$memory_3 = $memory_0->{'left'};
#line 326
translator_priv::print_val($memory_3, $memory_1, $memory_2);
#line 326
undef($memory_3);
#line 328
$memory_4 = $memory_0->{'op'};
#line 328
$memory_5 = c_rt_lib::ov_is($memory_4, 'ov_is');
#line 328
if (c_rt_lib::check_true($memory_5)) {goto label_4;}
#line 334
$memory_5 = c_rt_lib::ov_is($memory_4, 'ov_as');
#line 334
if (c_rt_lib::check_true($memory_5)) {goto label_5;}
#line 334
$memory_5 = "NOMATCHALERT";
#line 334
$memory_5 = [$memory_5,$memory_4];
#line 334
die(dfile::ssave($memory_5));
#line 328
label_4:
#line 329
$memory_7 = $memory_0->{'case'};
#line 329
$memory_6 = {dest => $memory_1,src => $memory_1,type => $memory_7,};
#line 329
undef($memory_7);
#line 329
$memory_6 = c_rt_lib::ov_mk_arg('ov_is', $memory_6);
#line 329
$memory_3 = $memory_6;
#line 329
undef($memory_6);
#line 334
goto label_3;
#line 334
label_5:
#line 335
$memory_7 = $memory_0->{'case'};
#line 335
$memory_6 = {dest => $memory_1,src => $memory_1,type => $memory_7,};
#line 335
undef($memory_7);
#line 335
$memory_6 = c_rt_lib::ov_mk_arg('ov_as', $memory_6);
#line 335
$memory_3 = $memory_6;
#line 335
undef($memory_6);
#line 340
goto label_3;
#line 340
label_3:
#line 340
undef($memory_4);
#line 340
undef($memory_5);
#line 341
translator_priv::print($memory_2, $memory_3);
#line 341
undef($memory_3);
#line 341
undef($memory_0);
#line 341
undef($memory_1);
#line 341
$_[2] = $memory_2;return;
$_[2] = $memory_2;}

sub translator_priv::print_bin_op($$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;$memory_0 = $_[0];$memory_1 = $_[1];$memory_2 = $_[2];Scalar::Util::weaken($_[2]) if ref($_[2]);
#line 344
$memory_3 = $memory_0->{'op'};
#line 344
$memory_4 = "=";
#line 344
$memory_3 = c_rt_lib::to_nl($memory_3 eq $memory_4);
#line 344
undef($memory_4);
#line 344
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 344
if (c_rt_lib::check_true($memory_3)) {goto label_2;}
#line 345
$memory_5 = $memory_0->{'right'};
#line 345
$memory_4 = translator_priv::dest_val($memory_5, $memory_1, $memory_2);
#line 345
undef($memory_5);
#line 346
$memory_6 = $memory_0->{'left'};
#line 346
$memory_7 = 0;
#line 346
$memory_5 = translator_priv::get_value_of_lvalue($memory_6, $memory_7, $memory_2);
#line 346
undef($memory_7);
#line 346
undef($memory_6);
#line 347
$memory_7 = array::len($memory_5);
#line 347
$memory_8 = 1;
#line 347
$memory_7 = $memory_7 - $memory_8;
#line 347
undef($memory_8);
#line 347
$memory_6 = $memory_5->[$memory_7];
#line 347
undef($memory_7);
#line 347
$memory_6 = c_rt_lib::ov_as($memory_6, 'value');
#line 348
translator_priv::move($memory_6, $memory_4, $memory_2);
#line 349
translator_priv::move($memory_1, $memory_6, $memory_2);
#line 350
$memory_7 = 0;
#line 350
translator_priv::set_value_of_lvalue($memory_5, $memory_7, $memory_2);
#line 350
undef($memory_7);
#line 350
undef($memory_4);
#line 350
undef($memory_5);
#line 350
undef($memory_6);
#line 351
goto label_1;
#line 351
label_2:
#line 351
$memory_3 = $memory_0->{'op'};
#line 351
$memory_4 = "ARRAY_INDEX";
#line 351
$memory_3 = c_rt_lib::to_nl($memory_3 eq $memory_4);
#line 351
undef($memory_4);
#line 351
if (c_rt_lib::check_true($memory_3)) {goto label_4;}
#line 351
$memory_3 = $memory_0->{'op'};
#line 351
$memory_4 = "->";
#line 351
$memory_3 = c_rt_lib::to_nl($memory_3 eq $memory_4);
#line 351
undef($memory_4);
#line 351
label_4:
#line 351
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 351
if (c_rt_lib::check_true($memory_3)) {goto label_3;}
#line 352
$memory_5 = $memory_0->{'left'};
#line 352
$memory_4 = translator_priv::dest_val($memory_5, $memory_1, $memory_2);
#line 352
undef($memory_5);
#line 353
$memory_5 = $memory_0->{'op'};
#line 353
$memory_6 = "ARRAY_INDEX";
#line 353
$memory_5 = c_rt_lib::to_nl($memory_5 eq $memory_6);
#line 353
undef($memory_6);
#line 353
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 353
if (c_rt_lib::check_true($memory_5)) {goto label_6;}
#line 354
$memory_7 = $memory_0->{'right'};
#line 354
$memory_6 = translator_priv::calc_val($memory_7, $memory_2);
#line 354
undef($memory_7);
#line 355
translator_priv::print_get_from_index($memory_1, $memory_4, $memory_6, $memory_2);
#line 355
undef($memory_6);
#line 356
goto label_5;
#line 356
label_6:
#line 357
$memory_6 = $memory_0->{'right'};
#line 357
$memory_6 = c_rt_lib::ov_as($memory_6, 'hash_key');
#line 357
translator_priv::print_get_value($memory_1, $memory_4, $memory_6, $memory_2);
#line 357
undef($memory_6);
#line 358
goto label_5;
#line 358
label_5:
#line 358
undef($memory_5);
#line 358
undef($memory_4);
#line 359
goto label_1;
#line 359
label_3:
#line 359
$memory_3 = $memory_0->{'op'};
#line 359
$memory_4 = "+=";
#line 359
$memory_3 = c_rt_lib::to_nl($memory_3 eq $memory_4);
#line 359
undef($memory_4);
#line 359
if (c_rt_lib::check_true($memory_3)) {goto label_11;}
#line 359
$memory_3 = $memory_0->{'op'};
#line 359
$memory_4 = "-=";
#line 359
$memory_3 = c_rt_lib::to_nl($memory_3 eq $memory_4);
#line 359
undef($memory_4);
#line 359
label_11:
#line 359
if (c_rt_lib::check_true($memory_3)) {goto label_10;}
#line 359
$memory_3 = $memory_0->{'op'};
#line 359
$memory_4 = "/=";
#line 359
$memory_3 = c_rt_lib::to_nl($memory_3 eq $memory_4);
#line 359
undef($memory_4);
#line 359
label_10:
#line 359
if (c_rt_lib::check_true($memory_3)) {goto label_9;}
#line 359
$memory_3 = $memory_0->{'op'};
#line 359
$memory_4 = "*=";
#line 359
$memory_3 = c_rt_lib::to_nl($memory_3 eq $memory_4);
#line 359
undef($memory_4);
#line 359
label_9:
#line 359
if (c_rt_lib::check_true($memory_3)) {goto label_8;}
#line 359
$memory_3 = $memory_0->{'op'};
#line 359
$memory_4 = ".=";
#line 359
$memory_3 = c_rt_lib::to_nl($memory_3 eq $memory_4);
#line 359
undef($memory_4);
#line 359
label_8:
#line 359
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 359
if (c_rt_lib::check_true($memory_3)) {goto label_7;}
#line 362
$memory_5 = $memory_0->{'right'};
#line 362
$memory_4 = translator_priv::calc_val($memory_5, $memory_2);
#line 362
undef($memory_5);
#line 363
$memory_6 = $memory_0->{'left'};
#line 363
$memory_7 = 1;
#line 363
$memory_5 = translator_priv::get_value_of_lvalue($memory_6, $memory_7, $memory_2);
#line 363
undef($memory_7);
#line 363
undef($memory_6);
#line 364
$memory_7 = array::len($memory_5);
#line 364
$memory_8 = 1;
#line 364
$memory_7 = $memory_7 - $memory_8;
#line 364
undef($memory_8);
#line 364
$memory_6 = $memory_5->[$memory_7];
#line 364
undef($memory_7);
#line 364
$memory_6 = c_rt_lib::ov_as($memory_6, 'value');
#line 365
$memory_7 = $memory_0->{'op'};
#line 365
translator_priv::print_bin_op_operator_command($memory_6, $memory_6, $memory_4, $memory_7, $memory_2);
#line 365
undef($memory_7);
#line 366
translator_priv::move($memory_1, $memory_6, $memory_2);
#line 367
$memory_7 = 1;
#line 367
translator_priv::set_value_of_lvalue($memory_5, $memory_7, $memory_2);
#line 367
undef($memory_7);
#line 367
undef($memory_4);
#line 367
undef($memory_5);
#line 367
undef($memory_6);
#line 368
goto label_1;
#line 368
label_7:
#line 368
$memory_3 = $memory_0->{'op'};
#line 368
$memory_4 = "&&";
#line 368
$memory_3 = c_rt_lib::to_nl($memory_3 eq $memory_4);
#line 368
undef($memory_4);
#line 368
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 368
if (c_rt_lib::check_true($memory_3)) {goto label_12;}
#line 369
$memory_4 = translator_priv::get_sim_label($memory_2);
#line 370
$memory_5 = translator_priv::new_register($memory_2);
#line 371
$memory_7 = $memory_0->{'left'};
#line 371
$memory_6 = translator_priv::def_val($memory_7, $memory_1, $memory_5, $memory_2);
#line 371
undef($memory_7);
#line 372
$memory_8 = "!";
#line 372
$memory_7 = {dest => $memory_5,src => $memory_6,op => $memory_8,};
#line 372
undef($memory_8);
#line 372
$memory_7 = c_rt_lib::ov_mk_arg('una_op', $memory_7);
#line 372
translator_priv::print($memory_2, $memory_7);
#line 372
undef($memory_7);
#line 379
translator_priv::print_if_goto($memory_4, $memory_5, $memory_2);
#line 380
$memory_7 = $memory_0->{'right'};
#line 380
translator_priv::def_val($memory_7, $memory_1, $memory_5, $memory_2);
#line 380
undef($memory_7);
#line 381
translator_priv::print_sim_label($memory_4, $memory_2);
#line 381
undef($memory_4);
#line 381
undef($memory_5);
#line 381
undef($memory_6);
#line 382
goto label_1;
#line 382
label_12:
#line 382
$memory_3 = $memory_0->{'op'};
#line 382
$memory_4 = "||";
#line 382
$memory_3 = c_rt_lib::to_nl($memory_3 eq $memory_4);
#line 382
undef($memory_4);
#line 382
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 382
if (c_rt_lib::check_true($memory_3)) {goto label_13;}
#line 383
$memory_4 = translator_priv::get_sim_label($memory_2);
#line 384
$memory_6 = $memory_0->{'left'};
#line 384
$memory_5 = translator_priv::dest_val($memory_6, $memory_1, $memory_2);
#line 384
undef($memory_6);
#line 385
$memory_6 = c_rt_lib::to_nl($memory_1 ne $memory_5);
#line 385
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 385
if (c_rt_lib::check_true($memory_6)) {goto label_15;}
#line 385
translator_priv::move($memory_1, $memory_5, $memory_2);
#line 385
goto label_15;
#line 385
label_15:
#line 385
undef($memory_6);
#line 386
translator_priv::print_if_goto($memory_4, $memory_5, $memory_2);
#line 387
$memory_7 = $memory_0->{'right'};
#line 387
$memory_6 = translator_priv::dest_val($memory_7, $memory_1, $memory_2);
#line 387
undef($memory_7);
#line 387
$memory_5 = $memory_6;
#line 387
undef($memory_6);
#line 388
$memory_6 = c_rt_lib::to_nl($memory_5 ne $memory_1);
#line 388
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 388
if (c_rt_lib::check_true($memory_6)) {goto label_17;}
#line 388
translator_priv::move($memory_1, $memory_5, $memory_2);
#line 388
goto label_17;
#line 388
label_17:
#line 388
undef($memory_6);
#line 389
translator_priv::print_sim_label($memory_4, $memory_2);
#line 389
undef($memory_4);
#line 389
undef($memory_5);
#line 390
goto label_1;
#line 390
label_13:
#line 391
$memory_5 = $memory_0->{'left'};
#line 391
$memory_4 = translator_priv::dest_val($memory_5, $memory_1, $memory_2);
#line 391
undef($memory_5);
#line 393
$memory_6 = c_rt_lib::to_nl($memory_4 eq $memory_1);
#line 393
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 393
if (c_rt_lib::check_true($memory_6)) {goto label_19;}
#line 394
$memory_8 = $memory_0->{'right'};
#line 394
$memory_7 = translator_priv::calc_val($memory_8, $memory_2);
#line 394
undef($memory_8);
#line 394
$memory_5 = $memory_7;
#line 394
undef($memory_7);
#line 395
goto label_18;
#line 395
label_19:
#line 396
$memory_8 = $memory_0->{'right'};
#line 396
$memory_7 = translator_priv::dest_val($memory_8, $memory_1, $memory_2);
#line 396
undef($memory_8);
#line 396
$memory_5 = $memory_7;
#line 396
undef($memory_7);
#line 397
goto label_18;
#line 397
label_18:
#line 397
undef($memory_6);
#line 398
$memory_6 = $memory_0->{'op'};
#line 398
translator_priv::print_bin_op_operator_command($memory_1, $memory_4, $memory_5, $memory_6, $memory_2);
#line 398
undef($memory_6);
#line 398
undef($memory_4);
#line 398
undef($memory_5);
#line 399
goto label_1;
#line 399
label_1:
#line 399
undef($memory_3);
#line 399
undef($memory_0);
#line 399
undef($memory_1);
#line 399
$_[2] = $memory_2;return;
$_[2] = $memory_2;}

sub translator_priv::print_cmd_array($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;$memory_0 = $_[0];$memory_1 = $_[1];Scalar::Util::weaken($_[1]) if ref($_[1]);
#line 403
$memory_2 = translator_priv::save_registers($memory_1);
#line 404
$memory_4 = 0;
#line 404
$memory_5 = 1;
#line 404
$memory_6 = c_rt_lib::array_len($memory_0);
#line 404
label_3:
#line 404
$memory_7 = c_rt_lib::to_nl($memory_4 >= $memory_6);
#line 404
if (c_rt_lib::check_true($memory_7)) {goto label_1;}
#line 404
$memory_3 = $memory_0->[$memory_4];
#line 405
translator_priv::print_cmd($memory_3, $memory_1);
#line 406
$memory_4 = $memory_4 + $memory_5;
#line 406
goto label_3;
#line 406
label_1:
#line 406
undef($memory_3);
#line 406
undef($memory_4);
#line 406
undef($memory_5);
#line 406
undef($memory_6);
#line 406
undef($memory_7);
#line 407
translator_priv::restore_registers($memory_2, $memory_1);
#line 407
undef($memory_2);
#line 407
undef($memory_0);
#line 407
$_[1] = $memory_1;return;
$_[1] = $memory_1;}

sub translator_priv::print_try_ensure($$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;$memory_0 = $_[0];$memory_1 = $_[1];$memory_2 = $_[2];Scalar::Util::weaken($_[2]) if ref($_[2]);
#line 411
$memory_3 = c_rt_lib::ov_is($memory_0, 'decl');
#line 411
if (c_rt_lib::check_true($memory_3)) {goto label_2;}
#line 416
$memory_3 = c_rt_lib::ov_is($memory_0, 'lval');
#line 416
if (c_rt_lib::check_true($memory_3)) {goto label_3;}
#line 417
$memory_3 = c_rt_lib::ov_is($memory_0, 'expr');
#line 417
if (c_rt_lib::check_true($memory_3)) {goto label_4;}
#line 417
$memory_3 = "NOMATCHALERT";
#line 417
$memory_3 = [$memory_3,$memory_0];
#line 417
die(dfile::ssave($memory_3));
#line 411
label_2:
#line 411
$memory_4 = c_rt_lib::ov_as($memory_0, 'decl');
#line 412
$memory_6 = $memory_4->{'name'};
#line 412
$memory_7 = $memory_4->{'type'};
#line 412
$memory_8 = c_rt_lib::ov_mk_none('none');
#line 412
$memory_5 = {name => $memory_6,type => $memory_7,value => $memory_8,};
#line 412
undef($memory_6);
#line 412
undef($memory_7);
#line 412
undef($memory_8);
#line 412
translator_priv::print_var_decl($memory_5, $memory_2);
#line 412
undef($memory_5);
#line 412
undef($memory_4);
#line 416
goto label_1;
#line 416
label_3:
#line 416
$memory_4 = c_rt_lib::ov_as($memory_0, 'lval');
#line 416
undef($memory_4);
#line 417
goto label_1;
#line 417
label_4:
#line 417
$memory_4 = c_rt_lib::ov_as($memory_0, 'expr');
#line 417
undef($memory_4);
#line 418
goto label_1;
#line 418
label_1:
#line 418
undef($memory_3);
#line 420
$memory_3 = translator_priv::save_registers($memory_2);
#line 421
$memory_4 = translator_priv::new_register($memory_2);
#line 424
$memory_6 = c_rt_lib::ov_is($memory_0, 'decl');
#line 424
if (c_rt_lib::check_true($memory_6)) {goto label_6;}
#line 429
$memory_6 = c_rt_lib::ov_is($memory_0, 'lval');
#line 429
if (c_rt_lib::check_true($memory_6)) {goto label_7;}
#line 431
$memory_6 = c_rt_lib::ov_is($memory_0, 'expr');
#line 431
if (c_rt_lib::check_true($memory_6)) {goto label_8;}
#line 431
$memory_6 = "NOMATCHALERT";
#line 431
$memory_6 = [$memory_6,$memory_0];
#line 431
die(dfile::ssave($memory_6));
#line 424
label_6:
#line 424
$memory_7 = c_rt_lib::ov_as($memory_0, 'decl');
#line 425
$memory_8 = $memory_7->{'value'};
#line 425
$memory_9 = c_rt_lib::ov_is($memory_8, 'value');
#line 425
if (c_rt_lib::check_true($memory_9)) {goto label_10;}
#line 427
$memory_9 = c_rt_lib::ov_is($memory_8, 'none');
#line 427
if (c_rt_lib::check_true($memory_9)) {goto label_11;}
#line 427
$memory_9 = "NOMATCHALERT";
#line 427
$memory_9 = [$memory_9,$memory_8];
#line 427
die(dfile::ssave($memory_9));
#line 425
label_10:
#line 425
$memory_10 = c_rt_lib::ov_as($memory_8, 'value');
#line 426
$memory_11 = translator_priv::calc_val($memory_10, $memory_2);
#line 426
$memory_5 = $memory_11;
#line 426
undef($memory_11);
#line 426
undef($memory_10);
#line 427
goto label_9;
#line 427
label_11:
#line 428
goto label_9;
#line 428
label_9:
#line 428
undef($memory_8);
#line 428
undef($memory_9);
#line 428
undef($memory_7);
#line 429
goto label_5;
#line 429
label_7:
#line 429
$memory_7 = c_rt_lib::ov_as($memory_0, 'lval');
#line 430
$memory_9 = $memory_7->{'right'};
#line 430
$memory_8 = translator_priv::calc_val($memory_9, $memory_2);
#line 430
undef($memory_9);
#line 430
$memory_5 = $memory_8;
#line 430
undef($memory_8);
#line 430
undef($memory_7);
#line 431
goto label_5;
#line 431
label_8:
#line 431
$memory_7 = c_rt_lib::ov_as($memory_0, 'expr');
#line 432
$memory_8 = translator_priv::calc_val($memory_7, $memory_2);
#line 432
$memory_5 = $memory_8;
#line 432
undef($memory_8);
#line 432
undef($memory_7);
#line 433
goto label_5;
#line 433
label_5:
#line 433
undef($memory_6);
#line 435
$memory_6 = translator_priv::get_sim_label($memory_2);
#line 437
$memory_8 = "ok";
#line 437
$memory_7 = {dest => $memory_4,src => $memory_5,type => $memory_8,};
#line 437
undef($memory_8);
#line 437
$memory_7 = c_rt_lib::ov_mk_arg('ov_is', $memory_7);
#line 437
translator_priv::print($memory_2, $memory_7);
#line 437
undef($memory_7);
#line 444
translator_priv::print_if_goto($memory_6, $memory_4, $memory_2);
#line 446
$memory_7 = $memory_1;
#line 446
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 446
if (c_rt_lib::check_true($memory_7)) {goto label_13;}
#line 447
$memory_8 = c_rt_lib::ov_mk_arg('val', $memory_5);
#line 447
translator_priv::print_safe_return($memory_8, $memory_2);
#line 447
undef($memory_8);
#line 448
goto label_12;
#line 448
label_13:
#line 449
$memory_9 = c_rt_lib::ov_mk_arg('arg', $memory_5);
#line 449
$memory_10 = "ensure";
#line 449
$memory_8 = {dest => $memory_5,src => $memory_9,name => $memory_10,};
#line 449
undef($memory_9);
#line 449
undef($memory_10);
#line 449
$memory_8 = c_rt_lib::ov_mk_arg('ov_mk', $memory_8);
#line 449
translator_priv::print($memory_2, $memory_8);
#line 449
undef($memory_8);
#line 456
$memory_8 = c_rt_lib::ov_mk_arg('die', $memory_5);
#line 456
translator_priv::print($memory_2, $memory_8);
#line 456
undef($memory_8);
#line 457
goto label_12;
#line 457
label_12:
#line 457
undef($memory_7);
#line 458
translator_priv::print_sim_label($memory_6, $memory_2);
#line 459
$memory_7 = c_rt_lib::ov_is($memory_0, 'decl');
#line 459
if (c_rt_lib::check_true($memory_7)) {goto label_15;}
#line 466
$memory_7 = c_rt_lib::ov_is($memory_0, 'lval');
#line 466
if (c_rt_lib::check_true($memory_7)) {goto label_16;}
#line 476
$memory_7 = c_rt_lib::ov_is($memory_0, 'expr');
#line 476
if (c_rt_lib::check_true($memory_7)) {goto label_17;}
#line 476
$memory_7 = "NOMATCHALERT";
#line 476
$memory_7 = [$memory_7,$memory_0];
#line 476
die(dfile::ssave($memory_7));
#line 459
label_15:
#line 459
$memory_8 = c_rt_lib::ov_as($memory_0, 'decl');
#line 460
$memory_11 = $memory_8->{'name'};
#line 460
$memory_10 = translator_priv::get_var_register($memory_11, $memory_2);
#line 460
undef($memory_11);
#line 460
$memory_11 = "ok";
#line 460
$memory_9 = {dest => $memory_10,src => $memory_5,type => $memory_11,};
#line 460
undef($memory_10);
#line 460
undef($memory_11);
#line 460
$memory_9 = c_rt_lib::ov_mk_arg('ov_as', $memory_9);
#line 460
translator_priv::print($memory_2, $memory_9);
#line 460
undef($memory_9);
#line 460
undef($memory_8);
#line 466
goto label_14;
#line 466
label_16:
#line 466
$memory_8 = c_rt_lib::ov_as($memory_0, 'lval');
#line 467
$memory_10 = $memory_8->{'left'};
#line 467
$memory_11 = 0;
#line 467
$memory_9 = translator_priv::get_value_of_lvalue($memory_10, $memory_11, $memory_2);
#line 467
undef($memory_11);
#line 467
undef($memory_10);
#line 468
$memory_11 = array::len($memory_9);
#line 468
$memory_12 = 1;
#line 468
$memory_11 = $memory_11 - $memory_12;
#line 468
undef($memory_12);
#line 468
$memory_10 = $memory_9->[$memory_11];
#line 468
undef($memory_11);
#line 468
$memory_10 = c_rt_lib::ov_as($memory_10, 'value');
#line 469
$memory_12 = "ok";
#line 469
$memory_11 = {dest => $memory_10,src => $memory_5,type => $memory_12,};
#line 469
undef($memory_12);
#line 469
$memory_11 = c_rt_lib::ov_mk_arg('ov_as', $memory_11);
#line 469
translator_priv::print($memory_2, $memory_11);
#line 469
undef($memory_11);
#line 475
$memory_11 = 0;
#line 475
translator_priv::set_value_of_lvalue($memory_9, $memory_11, $memory_2);
#line 475
undef($memory_11);
#line 475
undef($memory_9);
#line 475
undef($memory_10);
#line 475
undef($memory_8);
#line 476
goto label_14;
#line 476
label_17:
#line 476
$memory_8 = c_rt_lib::ov_as($memory_0, 'expr');
#line 476
undef($memory_8);
#line 477
goto label_14;
#line 477
label_14:
#line 477
undef($memory_7);
#line 478
translator_priv::restore_registers($memory_3, $memory_2);
#line 478
undef($memory_3);
#line 478
undef($memory_4);
#line 478
undef($memory_5);
#line 478
undef($memory_6);
#line 478
undef($memory_0);
#line 478
undef($memory_1);
#line 478
$_[2] = $memory_2;return;
$_[2] = $memory_2;}

sub translator_priv::start_new_instruction($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;$memory_0 = $_[0];$memory_1 = $_[1];Scalar::Util::weaken($_[1]) if ref($_[1]);
#line 482
$memory_2 = "debug";
#line 482
$memory_2 = c_rt_lib::get_ref_hash($memory_1, $memory_2);
#line 482
$memory_3 = $memory_0;
#line 482
 if (c_rt_lib::get_hashcount($memory_2) > 1) {$memory_2 = {%{$memory_2}};}$memory_2->{'nast_debug'} = $memory_3;
#line 482
$memory_4 = "debug";
#line 482
c_rt_lib::set_ref_hash($memory_1, $memory_4, $memory_2);
#line 482
undef($memory_4);
#line 482
undef($memory_2);
#line 482
undef($memory_3);
#line 483
$memory_2 = "debug";
#line 483
$memory_2 = c_rt_lib::get_ref_hash($memory_1, $memory_2);
#line 483
$memory_3 = "instruction_nr";
#line 483
$memory_3 = c_rt_lib::get_ref_hash($memory_2, $memory_3);
#line 483
$memory_4 = 1;
#line 483
$memory_3 = $memory_3 + $memory_4;
#line 483
$memory_5 = "instruction_nr";
#line 483
c_rt_lib::set_ref_hash($memory_2, $memory_5, $memory_3);
#line 483
$memory_5 = "debug";
#line 483
c_rt_lib::set_ref_hash($memory_1, $memory_5, $memory_2);
#line 483
undef($memory_5);
#line 483
undef($memory_2);
#line 483
undef($memory_3);
#line 483
undef($memory_4);
#line 483
undef($memory_0);
#line 483
$_[1] = $memory_1;return;
$_[1] = $memory_1;}

sub translator_priv::print_cmd($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;$memory_0 = $_[0];$memory_1 = $_[1];Scalar::Util::weaken($_[1]) if ref($_[1]);
#line 487
$memory_2 = $memory_0->{'debug'};
#line 487
translator_priv::start_new_instruction($memory_2, $memory_1);
#line 487
undef($memory_2);
#line 488
$memory_2 = $memory_0->{'cmd'};
#line 488
$memory_3 = c_rt_lib::ov_is($memory_2, 'if');
#line 488
if (c_rt_lib::check_true($memory_3)) {goto label_2;}
#line 490
$memory_3 = c_rt_lib::ov_is($memory_2, 'fora');
#line 490
if (c_rt_lib::check_true($memory_3)) {goto label_3;}
#line 492
$memory_3 = c_rt_lib::ov_is($memory_2, 'loop');
#line 492
if (c_rt_lib::check_true($memory_3)) {goto label_4;}
#line 494
$memory_3 = c_rt_lib::ov_is($memory_2, 'rep');
#line 494
if (c_rt_lib::check_true($memory_3)) {goto label_5;}
#line 496
$memory_3 = c_rt_lib::ov_is($memory_2, 'forh');
#line 496
if (c_rt_lib::check_true($memory_3)) {goto label_6;}
#line 498
$memory_3 = c_rt_lib::ov_is($memory_2, 'while');
#line 498
if (c_rt_lib::check_true($memory_3)) {goto label_7;}
#line 500
$memory_3 = c_rt_lib::ov_is($memory_2, 'for');
#line 500
if (c_rt_lib::check_true($memory_3)) {goto label_8;}
#line 502
$memory_3 = c_rt_lib::ov_is($memory_2, 'nop');
#line 502
if (c_rt_lib::check_true($memory_3)) {goto label_9;}
#line 503
$memory_3 = c_rt_lib::ov_is($memory_2, 'value');
#line 503
if (c_rt_lib::check_true($memory_3)) {goto label_10;}
#line 505
$memory_3 = c_rt_lib::ov_is($memory_2, 'block');
#line 505
if (c_rt_lib::check_true($memory_3)) {goto label_11;}
#line 507
$memory_3 = c_rt_lib::ov_is($memory_2, 'return');
#line 507
if (c_rt_lib::check_true($memory_3)) {goto label_12;}
#line 509
$memory_3 = c_rt_lib::ov_is($memory_2, 'match');
#line 509
if (c_rt_lib::check_true($memory_3)) {goto label_13;}
#line 511
$memory_3 = c_rt_lib::ov_is($memory_2, 'try');
#line 511
if (c_rt_lib::check_true($memory_3)) {goto label_14;}
#line 513
$memory_3 = c_rt_lib::ov_is($memory_2, 'ensure');
#line 513
if (c_rt_lib::check_true($memory_3)) {goto label_15;}
#line 515
$memory_3 = c_rt_lib::ov_is($memory_2, 'break');
#line 515
if (c_rt_lib::check_true($memory_3)) {goto label_16;}
#line 517
$memory_3 = c_rt_lib::ov_is($memory_2, 'continue');
#line 517
if (c_rt_lib::check_true($memory_3)) {goto label_17;}
#line 519
$memory_3 = c_rt_lib::ov_is($memory_2, 'die');
#line 519
if (c_rt_lib::check_true($memory_3)) {goto label_18;}
#line 521
$memory_3 = c_rt_lib::ov_is($memory_2, 'var_decl');
#line 521
if (c_rt_lib::check_true($memory_3)) {goto label_19;}
#line 523
$memory_3 = c_rt_lib::ov_is($memory_2, 'if_mod');
#line 523
if (c_rt_lib::check_true($memory_3)) {goto label_20;}
#line 525
$memory_3 = c_rt_lib::ov_is($memory_2, 'unless_mod');
#line 525
if (c_rt_lib::check_true($memory_3)) {goto label_21;}
#line 525
$memory_3 = "NOMATCHALERT";
#line 525
$memory_3 = [$memory_3,$memory_2];
#line 525
die(dfile::ssave($memory_3));
#line 488
label_2:
#line 488
$memory_4 = c_rt_lib::ov_as($memory_2, 'if');
#line 489
$memory_5 = c_rt_lib::to_nl(0);
#line 489
translator_priv::print_if($memory_4, $memory_5, $memory_1);
#line 489
undef($memory_5);
#line 489
undef($memory_4);
#line 490
goto label_1;
#line 490
label_3:
#line 490
$memory_4 = c_rt_lib::ov_as($memory_2, 'fora');
#line 491
translator_priv::print_fora($memory_4, $memory_1);
#line 491
undef($memory_4);
#line 492
goto label_1;
#line 492
label_4:
#line 492
$memory_4 = c_rt_lib::ov_as($memory_2, 'loop');
#line 493
translator_priv::print_loop($memory_4, $memory_1);
#line 493
undef($memory_4);
#line 494
goto label_1;
#line 494
label_5:
#line 494
$memory_4 = c_rt_lib::ov_as($memory_2, 'rep');
#line 495
translator_priv::print_rep($memory_4, $memory_1);
#line 495
undef($memory_4);
#line 496
goto label_1;
#line 496
label_6:
#line 496
$memory_4 = c_rt_lib::ov_as($memory_2, 'forh');
#line 497
translator_priv::print_forh($memory_4, $memory_1);
#line 497
undef($memory_4);
#line 498
goto label_1;
#line 498
label_7:
#line 498
$memory_4 = c_rt_lib::ov_as($memory_2, 'while');
#line 499
translator_priv::print_while($memory_4, $memory_1);
#line 499
undef($memory_4);
#line 500
goto label_1;
#line 500
label_8:
#line 500
$memory_4 = c_rt_lib::ov_as($memory_2, 'for');
#line 501
translator_priv::print_for($memory_4, $memory_1);
#line 501
undef($memory_4);
#line 502
goto label_1;
#line 502
label_9:
#line 503
goto label_1;
#line 503
label_10:
#line 503
$memory_4 = c_rt_lib::ov_as($memory_2, 'value');
#line 504
$memory_5 = "";
#line 504
translator_priv::print_val($memory_4, $memory_5, $memory_1);
#line 504
undef($memory_5);
#line 504
undef($memory_4);
#line 505
goto label_1;
#line 505
label_11:
#line 505
$memory_4 = c_rt_lib::ov_as($memory_2, 'block');
#line 506
translator_priv::print_cmd_array($memory_4, $memory_1);
#line 506
undef($memory_4);
#line 507
goto label_1;
#line 507
label_12:
#line 507
$memory_4 = c_rt_lib::ov_as($memory_2, 'return');
#line 508
translator_priv::print_return($memory_4, $memory_1);
#line 508
undef($memory_4);
#line 509
goto label_1;
#line 509
label_13:
#line 509
$memory_4 = c_rt_lib::ov_as($memory_2, 'match');
#line 510
translator_priv::print_match($memory_4, $memory_1);
#line 510
undef($memory_4);
#line 511
goto label_1;
#line 511
label_14:
#line 511
$memory_4 = c_rt_lib::ov_as($memory_2, 'try');
#line 512
$memory_5 = c_rt_lib::to_nl(1);
#line 512
translator_priv::print_try_ensure($memory_4, $memory_5, $memory_1);
#line 512
undef($memory_5);
#line 512
undef($memory_4);
#line 513
goto label_1;
#line 513
label_15:
#line 513
$memory_4 = c_rt_lib::ov_as($memory_2, 'ensure');
#line 514
$memory_5 = c_rt_lib::to_nl(0);
#line 514
translator_priv::print_try_ensure($memory_4, $memory_5, $memory_1);
#line 514
undef($memory_5);
#line 514
undef($memory_4);
#line 515
goto label_1;
#line 515
label_16:
#line 516
$memory_4 = $memory_1->{'loop_label'};
#line 516
$memory_4 = $memory_4->{'break'};
#line 516
translator_priv::print_loop_break($memory_1, $memory_4);
#line 516
undef($memory_4);
#line 517
goto label_1;
#line 517
label_17:
#line 518
$memory_4 = $memory_1->{'loop_label'};
#line 518
$memory_4 = $memory_4->{'continue'};
#line 518
translator_priv::print_loop_break($memory_1, $memory_4);
#line 518
undef($memory_4);
#line 519
goto label_1;
#line 519
label_18:
#line 519
$memory_4 = c_rt_lib::ov_as($memory_2, 'die');
#line 520
translator_priv::print_die($memory_4, $memory_1);
#line 520
undef($memory_4);
#line 521
goto label_1;
#line 521
label_19:
#line 521
$memory_4 = c_rt_lib::ov_as($memory_2, 'var_decl');
#line 522
translator_priv::print_var_decl($memory_4, $memory_1);
#line 522
undef($memory_4);
#line 523
goto label_1;
#line 523
label_20:
#line 523
$memory_4 = c_rt_lib::ov_as($memory_2, 'if_mod');
#line 524
translator_priv::print_if_mod($memory_4, $memory_1);
#line 524
undef($memory_4);
#line 525
goto label_1;
#line 525
label_21:
#line 525
$memory_4 = c_rt_lib::ov_as($memory_2, 'unless_mod');
#line 526
translator_priv::print_unless_mod($memory_4, $memory_1);
#line 526
undef($memory_4);
#line 527
goto label_1;
#line 527
label_1:
#line 527
undef($memory_2);
#line 527
undef($memory_3);
#line 527
undef($memory_0);
#line 527
$_[1] = $memory_1;return;
$_[1] = $memory_1;}

sub translator_priv::print_loop_break($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];
#line 530
$memory_2 = $memory_1->{'logic'};
#line 530
$memory_2 = $memory_2->{'register'};
#line 530
label_2:
#line 530
$memory_3 = $memory_0->{'logic'};
#line 530
$memory_3 = $memory_3->{'register'};
#line 530
$memory_3 = c_rt_lib::to_nl($memory_2 < $memory_3);
#line 530
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 530
if (c_rt_lib::check_true($memory_3)) {goto label_1;}
#line 531
$memory_5 = {
	module => "nlasm",
	name => "reg_t",
};
#line 531
$memory_5 = c_rt_lib::ov_mk_arg('ref', $memory_5);
#line 531
$memory_4 = ptd::ensure($memory_5, $memory_2);
#line 531
undef($memory_5);
#line 531
translator_priv::undef_reg($memory_4, $memory_0);
#line 531
undef($memory_4);
#line 531
$memory_4 = 1;
#line 531
$memory_2 = $memory_2 + $memory_4;
#line 531
undef($memory_4);
#line 532
goto label_2;
#line 532
label_1:
#line 532
undef($memory_2);
#line 532
undef($memory_3);
#line 533
$memory_2 = $memory_1->{'label'};
#line 533
$memory_2 = c_rt_lib::ov_mk_arg('goto', $memory_2);
#line 533
translator_priv::print($memory_0, $memory_2);
#line 533
undef($memory_2);
#line 533
undef($memory_1);
#line 533
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub translator_priv::print_if_mod($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;$memory_0 = $_[0];$memory_1 = $_[1];Scalar::Util::weaken($_[1]) if ref($_[1]);
#line 537
$memory_3 = $memory_0->{'cond'};
#line 537
$memory_4 = $memory_0->{'cmd'};
#line 537
$memory_5 = [];
#line 537
$memory_7 = $memory_0->{'cmd'};
#line 537
$memory_7 = $memory_7->{'debug'};
#line 537
$memory_8 = c_rt_lib::ov_mk_none('nop');
#line 537
$memory_6 = {debug => $memory_7,cmd => $memory_8,};
#line 537
undef($memory_7);
#line 537
undef($memory_8);
#line 537
$memory_2 = {cond => $memory_3,if => $memory_4,elsif => $memory_5,else => $memory_6,};
#line 537
undef($memory_3);
#line 537
undef($memory_4);
#line 537
undef($memory_5);
#line 537
undef($memory_6);
#line 538
$memory_3 = c_rt_lib::to_nl(1);
#line 538
translator_priv::print_if($memory_2, $memory_3, $memory_1);
#line 538
undef($memory_3);
#line 538
undef($memory_2);
#line 538
undef($memory_0);
#line 538
$_[1] = $memory_1;return;
$_[1] = $memory_1;}

sub translator_priv::print_unless_mod($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;$memory_0 = $_[0];$memory_1 = $_[1];Scalar::Util::weaken($_[1]) if ref($_[1]);
#line 542
$memory_4 = $memory_0->{'cond'};
#line 542
$memory_4 = c_rt_lib::ov_mk_arg('parenthesis', $memory_4);
#line 542
$memory_5 = "!";
#line 542
$memory_3 = {val => $memory_4,op => $memory_5,};
#line 542
undef($memory_4);
#line 542
undef($memory_5);
#line 542
$memory_3 = c_rt_lib::ov_mk_arg('unary_op', $memory_3);
#line 542
$memory_4 = $memory_0->{'cmd'};
#line 542
$memory_5 = [];
#line 542
$memory_7 = $memory_0->{'cmd'};
#line 542
$memory_7 = $memory_7->{'debug'};
#line 542
$memory_8 = c_rt_lib::ov_mk_none('nop');
#line 542
$memory_6 = {debug => $memory_7,cmd => $memory_8,};
#line 542
undef($memory_7);
#line 542
undef($memory_8);
#line 542
$memory_2 = {cond => $memory_3,if => $memory_4,elsif => $memory_5,else => $memory_6,};
#line 542
undef($memory_3);
#line 542
undef($memory_4);
#line 542
undef($memory_5);
#line 542
undef($memory_6);
#line 548
$memory_3 = c_rt_lib::to_nl(1);
#line 548
translator_priv::print_if($memory_2, $memory_3, $memory_1);
#line 548
undef($memory_3);
#line 548
undef($memory_2);
#line 548
undef($memory_0);
#line 548
$_[1] = $memory_1;return;
$_[1] = $memory_1;}

sub translator_priv::print_if($$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;my $memory_13;my $memory_14;my $memory_15;$memory_0 = $_[0];$memory_1 = $_[1];$memory_2 = $_[2];Scalar::Util::weaken($_[2]) if ref($_[2]);
#line 552
$memory_3 = translator_priv::save_registers($memory_2);
#line 554
$memory_4 = translator_priv::get_sim_label($memory_2);
#line 555
$memory_5 = translator_priv::get_sim_label($memory_2);
#line 557
$memory_6 = translator_priv::new_register($memory_2);
#line 558
$memory_7 = translator_priv::save_registers($memory_2);
#line 560
$memory_8 = $memory_0->{'cond'};
#line 560
translator_priv::print_val($memory_8, $memory_6, $memory_2);
#line 560
undef($memory_8);
#line 561
$memory_9 = "!";
#line 561
$memory_8 = {dest => $memory_6,src => $memory_6,op => $memory_9,};
#line 561
undef($memory_9);
#line 561
$memory_8 = c_rt_lib::ov_mk_arg('una_op', $memory_8);
#line 561
translator_priv::print($memory_2, $memory_8);
#line 561
undef($memory_8);
#line 568
translator_priv::restore_registers($memory_7, $memory_2);
#line 569
translator_priv::print_if_goto($memory_5, $memory_6, $memory_2);
#line 570
$memory_8 = $memory_0->{'if'};
#line 570
translator_priv::print_cmd($memory_8, $memory_2);
#line 570
undef($memory_8);
#line 571
$memory_8 = $memory_1;
#line 571
$memory_8 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 571
$memory_8 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 571
if (c_rt_lib::check_true($memory_8)) {goto label_2;}
#line 571
$memory_10 = $memory_0->{'if'};
#line 571
$memory_10 = $memory_10->{'debug'};
#line 571
$memory_9 = translator::last_debug_char($memory_10);
#line 571
undef($memory_10);
#line 571
translator_priv::start_new_instruction($memory_9, $memory_2);
#line 571
undef($memory_9);
#line 571
goto label_2;
#line 571
label_2:
#line 571
undef($memory_8);
#line 572
$memory_8 = c_rt_lib::ov_mk_arg('goto', $memory_4);
#line 572
translator_priv::print($memory_2, $memory_8);
#line 572
undef($memory_8);
#line 573
translator_priv::print_sim_label($memory_5, $memory_2);
#line 575
$memory_8 = $memory_0->{'elsif'};
#line 575
$memory_10 = 0;
#line 575
$memory_11 = 1;
#line 575
$memory_12 = c_rt_lib::array_len($memory_8);
#line 575
label_5:
#line 575
$memory_13 = c_rt_lib::to_nl($memory_10 >= $memory_12);
#line 575
if (c_rt_lib::check_true($memory_13)) {goto label_3;}
#line 575
$memory_9 = $memory_8->[$memory_10];
#line 576
$memory_14 = $memory_9->{'debug'};
#line 576
translator_priv::start_new_instruction($memory_14, $memory_2);
#line 576
undef($memory_14);
#line 577
$memory_14 = translator_priv::get_sim_label($memory_2);
#line 577
$memory_5 = $memory_14;
#line 577
undef($memory_14);
#line 579
$memory_14 = $memory_9->{'cond'};
#line 579
translator_priv::print_val($memory_14, $memory_6, $memory_2);
#line 579
undef($memory_14);
#line 580
$memory_15 = "!";
#line 580
$memory_14 = {dest => $memory_6,src => $memory_6,op => $memory_15,};
#line 580
undef($memory_15);
#line 580
$memory_14 = c_rt_lib::ov_mk_arg('una_op', $memory_14);
#line 580
translator_priv::print($memory_2, $memory_14);
#line 580
undef($memory_14);
#line 587
translator_priv::restore_registers($memory_7, $memory_2);
#line 588
translator_priv::print_if_goto($memory_5, $memory_6, $memory_2);
#line 589
$memory_14 = $memory_9->{'cmd'};
#line 589
translator_priv::print_cmd($memory_14, $memory_2);
#line 589
undef($memory_14);
#line 590
$memory_15 = $memory_9->{'cmd'};
#line 590
$memory_15 = $memory_15->{'debug'};
#line 590
$memory_14 = translator::last_debug_char($memory_15);
#line 590
undef($memory_15);
#line 590
translator_priv::start_new_instruction($memory_14, $memory_2);
#line 590
undef($memory_14);
#line 591
$memory_14 = c_rt_lib::ov_mk_arg('goto', $memory_4);
#line 591
translator_priv::print($memory_2, $memory_14);
#line 591
undef($memory_14);
#line 592
translator_priv::print_sim_label($memory_5, $memory_2);
#line 593
$memory_10 = $memory_10 + $memory_11;
#line 593
goto label_5;
#line 593
label_3:
#line 593
undef($memory_8);
#line 593
undef($memory_9);
#line 593
undef($memory_10);
#line 593
undef($memory_11);
#line 593
undef($memory_12);
#line 593
undef($memory_13);
#line 594
$memory_8 = $memory_0->{'else'};
#line 594
$memory_8 = $memory_8->{'cmd'};
#line 594
$memory_8 = c_rt_lib::ov_is($memory_8, 'nop');
#line 594
$memory_8 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 594
$memory_8 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 594
if (c_rt_lib::check_true($memory_8)) {goto label_7;}
#line 595
$memory_9 = $memory_0->{'else'};
#line 595
translator_priv::print_cmd($memory_9, $memory_2);
#line 595
undef($memory_9);
#line 596
$memory_10 = $memory_0->{'else'};
#line 596
$memory_10 = $memory_10->{'debug'};
#line 596
$memory_9 = translator::last_debug_char($memory_10);
#line 596
undef($memory_10);
#line 596
translator_priv::start_new_instruction($memory_9, $memory_2);
#line 596
undef($memory_9);
#line 597
$memory_9 = c_rt_lib::ov_mk_arg('goto', $memory_4);
#line 597
translator_priv::print($memory_2, $memory_9);
#line 597
undef($memory_9);
#line 598
goto label_7;
#line 598
label_7:
#line 598
undef($memory_8);
#line 600
translator_priv::print_sim_label($memory_4, $memory_2);
#line 601
translator_priv::restore_registers($memory_3, $memory_2);
#line 601
undef($memory_3);
#line 601
undef($memory_4);
#line 601
undef($memory_5);
#line 601
undef($memory_6);
#line 601
undef($memory_7);
#line 601
undef($memory_0);
#line 601
undef($memory_1);
#line 601
$_[2] = $memory_2;return;
$_[2] = $memory_2;}

sub translator_priv::print_call_base($$$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;$memory_0 = $_[0];$memory_1 = $_[1];$memory_2 = $_[2];$memory_3 = $_[3];Scalar::Util::weaken($_[3]) if ref($_[3]);
#line 607
$memory_5 = "c_rt_lib";
#line 607
$memory_4 = {dest => $memory_0,mod => $memory_5,fun_name => $memory_1,args => $memory_2,};
#line 607
undef($memory_5);
#line 607
$memory_4 = c_rt_lib::ov_mk_arg('call', $memory_4);
#line 607
translator_priv::print($memory_3, $memory_4);
#line 607
undef($memory_4);
#line 607
undef($memory_0);
#line 607
undef($memory_1);
#line 607
undef($memory_2);
#line 607
$_[3] = $memory_3;return;
$_[3] = $memory_3;}

sub translator_priv::save_loop_break($$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];$memory_2 = $_[2];
#line 617
$memory_3 = $memory_0->{'loop_label'};
#line 618
$memory_4 = translator_priv::save_registers($memory_0);
#line 619
$memory_5 = {label => $memory_1,logic => $memory_4,};
#line 619
$memory_6 = "loop_label";
#line 619
$memory_6 = c_rt_lib::get_ref_hash($memory_0, $memory_6);
#line 619
$memory_7 = $memory_5;
#line 619
 if (c_rt_lib::get_hashcount($memory_6) > 1) {$memory_6 = {%{$memory_6}};}$memory_6->{'break'} = $memory_7;
#line 619
$memory_8 = "loop_label";
#line 619
c_rt_lib::set_ref_hash($memory_0, $memory_8, $memory_6);
#line 619
undef($memory_8);
#line 619
undef($memory_5);
#line 619
undef($memory_6);
#line 619
undef($memory_7);
#line 620
$memory_5 = {label => $memory_2,logic => $memory_4,};
#line 620
$memory_6 = "loop_label";
#line 620
$memory_6 = c_rt_lib::get_ref_hash($memory_0, $memory_6);
#line 620
$memory_7 = $memory_5;
#line 620
 if (c_rt_lib::get_hashcount($memory_6) > 1) {$memory_6 = {%{$memory_6}};}$memory_6->{'continue'} = $memory_7;
#line 620
$memory_8 = "loop_label";
#line 620
c_rt_lib::set_ref_hash($memory_0, $memory_8, $memory_6);
#line 620
undef($memory_8);
#line 620
undef($memory_5);
#line 620
undef($memory_6);
#line 620
undef($memory_7);
#line 621
undef($memory_1);
#line 621
undef($memory_2);
#line 621
undef($memory_4);
#line 621
$_[0] = $memory_0;return $memory_3;
#line 621
undef($memory_3);
#line 621
undef($memory_4);
#line 621
undef($memory_1);
#line 621
undef($memory_2);
#line 621
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub translator_priv::print_fora($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;my $memory_13;my $memory_14;my $memory_15;$memory_0 = $_[0];$memory_1 = $_[1];Scalar::Util::weaken($_[1]) if ref($_[1]);
#line 624
$memory_2 = $memory_1->{'debug'};
#line 624
$memory_2 = $memory_2->{'nast_debug'};
#line 625
$memory_3 = translator_priv::save_registers($memory_1);
#line 627
$memory_5 = $memory_0->{'array'};
#line 627
$memory_4 = translator_priv::calc_val($memory_5, $memory_1);
#line 627
undef($memory_5);
#line 628
$memory_6 = $memory_0->{'iter'};
#line 628
$memory_5 = translator_priv::print_var_decl($memory_6, $memory_1);
#line 628
undef($memory_6);
#line 630
$memory_6 = translator_priv::get_sim_label($memory_1);
#line 631
$memory_7 = translator_priv::get_sim_label($memory_1);
#line 632
$memory_8 = translator_priv::get_sim_label($memory_1);
#line 634
$memory_9 = translator_priv::new_register($memory_1);
#line 635
$memory_10 = 0;
#line 635
translator_priv::load_const($memory_10, $memory_9, $memory_1);
#line 635
undef($memory_10);
#line 636
$memory_10 = translator_priv::new_register($memory_1);
#line 637
$memory_11 = 1;
#line 637
translator_priv::load_const($memory_11, $memory_10, $memory_1);
#line 637
undef($memory_11);
#line 639
$memory_11 = translator_priv::new_register($memory_1);
#line 640
$memory_12 = "array_len";
#line 640
$memory_14 = c_rt_lib::ov_mk_arg('val', $memory_4);
#line 640
$memory_13 = [$memory_14];
#line 640
undef($memory_14);
#line 640
translator_priv::print_call_base($memory_11, $memory_12, $memory_13, $memory_1);
#line 640
undef($memory_13);
#line 640
undef($memory_12);
#line 642
$memory_12 = translator_priv::new_register($memory_1);
#line 644
translator_priv::print_sim_label($memory_8, $memory_1);
#line 645
$memory_13 = ">=";
#line 645
translator_priv::print_bin_op_operator_command($memory_12, $memory_9, $memory_11, $memory_13, $memory_1);
#line 645
undef($memory_13);
#line 647
translator_priv::print_if_goto($memory_6, $memory_12, $memory_1);
#line 648
$memory_13 = {dest => $memory_5,src => $memory_4,idx => $memory_9,};
#line 648
$memory_13 = c_rt_lib::ov_mk_arg('get_frm_idx', $memory_13);
#line 648
translator_priv::print($memory_1, $memory_13);
#line 648
undef($memory_13);
#line 655
$memory_13 = translator_priv::save_loop_break($memory_1, $memory_6, $memory_7);
#line 656
$memory_14 = $memory_0->{'cmd'};
#line 656
translator_priv::print_cmd($memory_14, $memory_1);
#line 656
undef($memory_14);
#line 658
translator_priv::print_sim_label($memory_7, $memory_1);
#line 659
$memory_14 = $memory_0->{'short'};
#line 659
$memory_14 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_14));
#line 659
$memory_14 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_14));
#line 659
if (c_rt_lib::check_true($memory_14)) {goto label_2;}
#line 659
$memory_15 = translator::last_debug_char($memory_2);
#line 659
translator_priv::start_new_instruction($memory_15, $memory_1);
#line 659
undef($memory_15);
#line 659
goto label_2;
#line 659
label_2:
#line 659
undef($memory_14);
#line 660
$memory_15 = "+";
#line 660
$memory_14 = {dest => $memory_9,left => $memory_9,right => $memory_10,op => $memory_15,};
#line 660
undef($memory_15);
#line 660
$memory_14 = c_rt_lib::ov_mk_arg('bin_op', $memory_14);
#line 660
translator_priv::print($memory_1, $memory_14);
#line 660
undef($memory_14);
#line 667
$memory_14 = c_rt_lib::ov_mk_arg('goto', $memory_8);
#line 667
translator_priv::print($memory_1, $memory_14);
#line 667
undef($memory_14);
#line 668
translator_priv::print_sim_label($memory_6, $memory_1);
#line 670
$memory_14 = $memory_13;
#line 670
 if (c_rt_lib::get_hashcount($memory_1) > 1) {$memory_1 = {%{$memory_1}};}$memory_1->{'loop_label'} = $memory_14;
#line 670
undef($memory_14);
#line 671
translator_priv::restore_registers($memory_3, $memory_1);
#line 671
undef($memory_2);
#line 671
undef($memory_3);
#line 671
undef($memory_4);
#line 671
undef($memory_5);
#line 671
undef($memory_6);
#line 671
undef($memory_7);
#line 671
undef($memory_8);
#line 671
undef($memory_9);
#line 671
undef($memory_10);
#line 671
undef($memory_11);
#line 671
undef($memory_12);
#line 671
undef($memory_13);
#line 671
undef($memory_0);
#line 671
$_[1] = $memory_1;return;
$_[1] = $memory_1;}

sub translator_priv::print_loop($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;$memory_0 = $_[0];$memory_1 = $_[1];Scalar::Util::weaken($_[1]) if ref($_[1]);
#line 675
$memory_2 = translator_priv::save_registers($memory_1);
#line 677
$memory_3 = translator_priv::get_sim_label($memory_1);
#line 678
$memory_4 = translator_priv::get_sim_label($memory_1);
#line 680
translator_priv::print_sim_label($memory_4, $memory_1);
#line 682
$memory_5 = translator_priv::save_loop_break($memory_1, $memory_3, $memory_4);
#line 683
translator_priv::print_cmd($memory_0, $memory_1);
#line 684
$memory_6 = $memory_0->{'debug'};
#line 684
translator_priv::start_new_instruction($memory_6, $memory_1);
#line 684
undef($memory_6);
#line 685
$memory_6 = c_rt_lib::ov_mk_arg('goto', $memory_4);
#line 685
translator_priv::print($memory_1, $memory_6);
#line 685
undef($memory_6);
#line 687
translator_priv::print_sim_label($memory_3, $memory_1);
#line 688
$memory_6 = $memory_5;
#line 688
 if (c_rt_lib::get_hashcount($memory_1) > 1) {$memory_1 = {%{$memory_1}};}$memory_1->{'loop_label'} = $memory_6;
#line 688
undef($memory_6);
#line 689
translator_priv::restore_registers($memory_2, $memory_1);
#line 689
undef($memory_2);
#line 689
undef($memory_3);
#line 689
undef($memory_4);
#line 689
undef($memory_5);
#line 689
undef($memory_0);
#line 689
$_[1] = $memory_1;return;
$_[1] = $memory_1;}

sub translator_priv::print_rep($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;my $memory_13;$memory_0 = $_[0];$memory_1 = $_[1];Scalar::Util::weaken($_[1]) if ref($_[1]);
#line 693
$memory_2 = translator_priv::save_registers($memory_1);
#line 695
$memory_3 = translator_priv::get_sim_label($memory_1);
#line 696
$memory_4 = translator_priv::get_sim_label($memory_1);
#line 697
$memory_5 = translator_priv::get_sim_label($memory_1);
#line 699
$memory_7 = $memory_0->{'count'};
#line 699
$memory_6 = translator_priv::calc_val($memory_7, $memory_1);
#line 699
undef($memory_7);
#line 701
$memory_8 = $memory_0->{'iter'};
#line 701
$memory_7 = translator_priv::print_var_decl($memory_8, $memory_1);
#line 701
undef($memory_8);
#line 702
$memory_8 = 0;
#line 702
translator_priv::load_const($memory_8, $memory_7, $memory_1);
#line 702
undef($memory_8);
#line 703
$memory_8 = translator_priv::new_register($memory_1);
#line 704
$memory_9 = 1;
#line 704
translator_priv::load_const($memory_9, $memory_8, $memory_1);
#line 704
undef($memory_9);
#line 706
$memory_9 = translator_priv::new_register($memory_1);
#line 708
translator_priv::print_sim_label($memory_5, $memory_1);
#line 709
$memory_10 = ">=";
#line 709
translator_priv::print_bin_op_operator_command($memory_9, $memory_7, $memory_6, $memory_10, $memory_1);
#line 709
undef($memory_10);
#line 710
translator_priv::print_if_goto($memory_3, $memory_9, $memory_1);
#line 712
$memory_10 = translator_priv::save_loop_break($memory_1, $memory_3, $memory_4);
#line 713
$memory_11 = $memory_0->{'cmd'};
#line 713
translator_priv::print_cmd($memory_11, $memory_1);
#line 713
undef($memory_11);
#line 715
translator_priv::print_sim_label($memory_4, $memory_1);
#line 716
$memory_11 = $memory_0->{'short'};
#line 716
$memory_11 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_11));
#line 716
$memory_11 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_11));
#line 716
if (c_rt_lib::check_true($memory_11)) {goto label_2;}
#line 716
$memory_13 = $memory_0->{'cmd'};
#line 716
$memory_13 = $memory_13->{'debug'};
#line 716
$memory_12 = translator::last_debug_char($memory_13);
#line 716
undef($memory_13);
#line 716
translator_priv::start_new_instruction($memory_12, $memory_1);
#line 716
undef($memory_12);
#line 716
goto label_2;
#line 716
label_2:
#line 716
undef($memory_11);
#line 717
$memory_12 = "+";
#line 717
$memory_11 = {dest => $memory_7,left => $memory_7,right => $memory_8,op => $memory_12,};
#line 717
undef($memory_12);
#line 717
$memory_11 = c_rt_lib::ov_mk_arg('bin_op', $memory_11);
#line 717
translator_priv::print($memory_1, $memory_11);
#line 717
undef($memory_11);
#line 724
$memory_11 = c_rt_lib::ov_mk_arg('goto', $memory_5);
#line 724
translator_priv::print($memory_1, $memory_11);
#line 724
undef($memory_11);
#line 725
translator_priv::print_sim_label($memory_3, $memory_1);
#line 727
$memory_11 = $memory_10;
#line 727
 if (c_rt_lib::get_hashcount($memory_1) > 1) {$memory_1 = {%{$memory_1}};}$memory_1->{'loop_label'} = $memory_11;
#line 727
undef($memory_11);
#line 728
translator_priv::restore_registers($memory_2, $memory_1);
#line 728
undef($memory_2);
#line 728
undef($memory_3);
#line 728
undef($memory_4);
#line 728
undef($memory_5);
#line 728
undef($memory_6);
#line 728
undef($memory_7);
#line 728
undef($memory_8);
#line 728
undef($memory_9);
#line 728
undef($memory_10);
#line 728
undef($memory_0);
#line 728
$_[1] = $memory_1;return;
$_[1] = $memory_1;}

sub translator_priv::print_forh($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;my $memory_13;my $memory_14;$memory_0 = $_[0];$memory_1 = $_[1];Scalar::Util::weaken($_[1]) if ref($_[1]);
#line 732
$memory_2 = $memory_1->{'debug'};
#line 732
$memory_2 = $memory_2->{'nast_debug'};
#line 733
$memory_3 = translator_priv::save_registers($memory_1);
#line 735
$memory_4 = translator_priv::get_sim_label($memory_1);
#line 736
$memory_5 = translator_priv::get_sim_label($memory_1);
#line 737
$memory_6 = translator_priv::get_sim_label($memory_1);
#line 739
$memory_8 = $memory_0->{'hash'};
#line 739
$memory_7 = translator_priv::calc_val($memory_8, $memory_1);
#line 739
undef($memory_8);
#line 741
$memory_9 = $memory_0->{'key'};
#line 741
$memory_8 = translator_priv::print_var_decl($memory_9, $memory_1);
#line 741
undef($memory_9);
#line 742
$memory_10 = $memory_0->{'val'};
#line 742
$memory_9 = translator_priv::print_var_decl($memory_10, $memory_1);
#line 742
undef($memory_10);
#line 744
$memory_10 = translator_priv::new_register($memory_1);
#line 745
$memory_11 = "init_iter";
#line 745
$memory_13 = c_rt_lib::ov_mk_arg('val', $memory_7);
#line 745
$memory_12 = [$memory_13];
#line 745
undef($memory_13);
#line 745
translator_priv::print_call_base($memory_10, $memory_11, $memory_12, $memory_1);
#line 745
undef($memory_12);
#line 745
undef($memory_11);
#line 747
translator_priv::print_sim_label($memory_6, $memory_1);
#line 748
$memory_11 = "is_end_hash";
#line 748
$memory_13 = c_rt_lib::ov_mk_arg('val', $memory_10);
#line 748
$memory_12 = [$memory_13];
#line 748
undef($memory_13);
#line 748
translator_priv::print_call_base($memory_8, $memory_11, $memory_12, $memory_1);
#line 748
undef($memory_12);
#line 748
undef($memory_11);
#line 749
translator_priv::print_if_goto($memory_4, $memory_8, $memory_1);
#line 751
$memory_11 = "get_key_iter";
#line 751
$memory_13 = c_rt_lib::ov_mk_arg('val', $memory_10);
#line 751
$memory_12 = [$memory_13];
#line 751
undef($memory_13);
#line 751
translator_priv::print_call_base($memory_8, $memory_11, $memory_12, $memory_1);
#line 751
undef($memory_12);
#line 751
undef($memory_11);
#line 752
$memory_11 = "hash_get_value";
#line 752
$memory_13 = c_rt_lib::ov_mk_arg('val', $memory_7);
#line 752
$memory_14 = c_rt_lib::ov_mk_arg('val', $memory_8);
#line 752
$memory_12 = [$memory_13,$memory_14];
#line 752
undef($memory_13);
#line 752
undef($memory_14);
#line 752
translator_priv::print_call_base($memory_9, $memory_11, $memory_12, $memory_1);
#line 752
undef($memory_12);
#line 752
undef($memory_11);
#line 754
$memory_11 = translator_priv::save_loop_break($memory_1, $memory_4, $memory_5);
#line 755
$memory_12 = $memory_0->{'cmd'};
#line 755
translator_priv::print_cmd($memory_12, $memory_1);
#line 755
undef($memory_12);
#line 757
translator_priv::print_sim_label($memory_5, $memory_1);
#line 758
$memory_12 = $memory_0->{'short'};
#line 758
$memory_12 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_12));
#line 758
$memory_12 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_12));
#line 758
if (c_rt_lib::check_true($memory_12)) {goto label_2;}
#line 758
$memory_13 = translator::last_debug_char($memory_2);
#line 758
translator_priv::start_new_instruction($memory_13, $memory_1);
#line 758
undef($memory_13);
#line 758
goto label_2;
#line 758
label_2:
#line 758
undef($memory_12);
#line 759
$memory_12 = "next_iter";
#line 759
$memory_14 = c_rt_lib::ov_mk_arg('val', $memory_10);
#line 759
$memory_13 = [$memory_14];
#line 759
undef($memory_14);
#line 759
translator_priv::print_call_base($memory_10, $memory_12, $memory_13, $memory_1);
#line 759
undef($memory_13);
#line 759
undef($memory_12);
#line 760
$memory_12 = c_rt_lib::ov_mk_arg('goto', $memory_6);
#line 760
translator_priv::print($memory_1, $memory_12);
#line 760
undef($memory_12);
#line 762
translator_priv::print_sim_label($memory_4, $memory_1);
#line 764
$memory_12 = $memory_11;
#line 764
 if (c_rt_lib::get_hashcount($memory_1) > 1) {$memory_1 = {%{$memory_1}};}$memory_1->{'loop_label'} = $memory_12;
#line 764
undef($memory_12);
#line 765
translator_priv::restore_registers($memory_3, $memory_1);
#line 765
undef($memory_2);
#line 765
undef($memory_3);
#line 765
undef($memory_4);
#line 765
undef($memory_5);
#line 765
undef($memory_6);
#line 765
undef($memory_7);
#line 765
undef($memory_8);
#line 765
undef($memory_9);
#line 765
undef($memory_10);
#line 765
undef($memory_11);
#line 765
undef($memory_0);
#line 765
$_[1] = $memory_1;return;
$_[1] = $memory_1;}

sub translator_priv::print_while($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;$memory_0 = $_[0];$memory_1 = $_[1];Scalar::Util::weaken($_[1]) if ref($_[1]);
#line 769
$memory_2 = translator_priv::save_registers($memory_1);
#line 771
$memory_3 = translator_priv::get_sim_label($memory_1);
#line 772
$memory_4 = translator_priv::get_sim_label($memory_1);
#line 774
$memory_5 = $memory_1->{'debug'};
#line 774
$memory_5 = $memory_5->{'nast_debug'};
#line 775
translator_priv::print_sim_label($memory_4, $memory_1);
#line 776
$memory_7 = $memory_0->{'cond'};
#line 776
$memory_6 = translator_priv::calc_val($memory_7, $memory_1);
#line 776
undef($memory_7);
#line 777
$memory_8 = "!";
#line 777
$memory_7 = {dest => $memory_6,src => $memory_6,op => $memory_8,};
#line 777
undef($memory_8);
#line 777
$memory_7 = c_rt_lib::ov_mk_arg('una_op', $memory_7);
#line 777
translator_priv::print($memory_1, $memory_7);
#line 777
undef($memory_7);
#line 784
translator_priv::print_if_goto($memory_3, $memory_6, $memory_1);
#line 786
$memory_7 = translator_priv::save_loop_break($memory_1, $memory_3, $memory_4);
#line 787
$memory_8 = $memory_0->{'cmd'};
#line 787
translator_priv::print_cmd($memory_8, $memory_1);
#line 787
undef($memory_8);
#line 788
$memory_8 = $memory_0->{'short'};
#line 788
$memory_8 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 788
$memory_8 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 788
if (c_rt_lib::check_true($memory_8)) {goto label_2;}
#line 788
$memory_9 = translator::last_debug_char($memory_5);
#line 788
translator_priv::start_new_instruction($memory_9, $memory_1);
#line 788
undef($memory_9);
#line 788
goto label_2;
#line 788
label_2:
#line 788
undef($memory_8);
#line 789
$memory_8 = c_rt_lib::ov_mk_arg('goto', $memory_4);
#line 789
translator_priv::print($memory_1, $memory_8);
#line 789
undef($memory_8);
#line 790
translator_priv::print_sim_label($memory_3, $memory_1);
#line 792
$memory_8 = $memory_7;
#line 792
 if (c_rt_lib::get_hashcount($memory_1) > 1) {$memory_1 = {%{$memory_1}};}$memory_1->{'loop_label'} = $memory_8;
#line 792
undef($memory_8);
#line 793
translator_priv::restore_registers($memory_2, $memory_1);
#line 793
undef($memory_2);
#line 793
undef($memory_3);
#line 793
undef($memory_4);
#line 793
undef($memory_5);
#line 793
undef($memory_6);
#line 793
undef($memory_7);
#line 793
undef($memory_0);
#line 793
$_[1] = $memory_1;return;
$_[1] = $memory_1;}

sub translator_priv::print_for($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;$memory_0 = $_[0];$memory_1 = $_[1];Scalar::Util::weaken($_[1]) if ref($_[1]);
#line 797
$memory_2 = translator_priv::save_registers($memory_1);
#line 799
$memory_3 = translator_priv::get_sim_label($memory_1);
#line 800
$memory_4 = translator_priv::get_sim_label($memory_1);
#line 801
$memory_5 = translator_priv::get_sim_label($memory_1);
#line 803
$memory_6 = $memory_0->{'start'};
#line 803
$memory_7 = c_rt_lib::ov_is($memory_6, 'value');
#line 803
if (c_rt_lib::check_true($memory_7)) {goto label_2;}
#line 805
$memory_7 = c_rt_lib::ov_is($memory_6, 'var_decl');
#line 805
if (c_rt_lib::check_true($memory_7)) {goto label_3;}
#line 805
$memory_7 = "NOMATCHALERT";
#line 805
$memory_7 = [$memory_7,$memory_6];
#line 805
die(dfile::ssave($memory_7));
#line 803
label_2:
#line 803
$memory_8 = c_rt_lib::ov_as($memory_6, 'value');
#line 804
$memory_9 = "";
#line 804
translator_priv::print_val($memory_8, $memory_9, $memory_1);
#line 804
undef($memory_9);
#line 804
undef($memory_8);
#line 805
goto label_1;
#line 805
label_3:
#line 805
$memory_8 = c_rt_lib::ov_as($memory_6, 'var_decl');
#line 806
translator_priv::print_var_decl($memory_8, $memory_1);
#line 806
undef($memory_8);
#line 807
goto label_1;
#line 807
label_1:
#line 807
undef($memory_6);
#line 807
undef($memory_7);
#line 809
translator_priv::print_sim_label($memory_4, $memory_1);
#line 810
$memory_6 = $memory_0->{'cond'};
#line 810
$memory_6 = c_rt_lib::ov_is($memory_6, 'nop');
#line 810
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 810
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 810
if (c_rt_lib::check_true($memory_6)) {goto label_5;}
#line 811
$memory_8 = $memory_0->{'cond'};
#line 811
$memory_7 = translator_priv::calc_val($memory_8, $memory_1);
#line 811
undef($memory_8);
#line 812
$memory_9 = "!";
#line 812
$memory_8 = {dest => $memory_7,src => $memory_7,op => $memory_9,};
#line 812
undef($memory_9);
#line 812
$memory_8 = c_rt_lib::ov_mk_arg('una_op', $memory_8);
#line 812
translator_priv::print($memory_1, $memory_8);
#line 812
undef($memory_8);
#line 819
translator_priv::print_if_goto($memory_3, $memory_7, $memory_1);
#line 819
undef($memory_7);
#line 820
goto label_5;
#line 820
label_5:
#line 820
undef($memory_6);
#line 821
$memory_6 = translator_priv::save_loop_break($memory_1, $memory_3, $memory_5);
#line 822
$memory_7 = $memory_0->{'cmd'};
#line 822
translator_priv::print_cmd($memory_7, $memory_1);
#line 822
undef($memory_7);
#line 824
translator_priv::print_sim_label($memory_5, $memory_1);
#line 825
$memory_7 = $memory_0->{'iter'};
#line 825
$memory_8 = "";
#line 825
translator_priv::print_val($memory_7, $memory_8, $memory_1);
#line 825
undef($memory_8);
#line 825
undef($memory_7);
#line 826
$memory_8 = $memory_0->{'cmd'};
#line 826
$memory_8 = $memory_8->{'debug'};
#line 826
$memory_7 = translator::last_debug_char($memory_8);
#line 826
undef($memory_8);
#line 826
translator_priv::start_new_instruction($memory_7, $memory_1);
#line 826
undef($memory_7);
#line 827
$memory_7 = c_rt_lib::ov_mk_arg('goto', $memory_4);
#line 827
translator_priv::print($memory_1, $memory_7);
#line 827
undef($memory_7);
#line 829
translator_priv::print_sim_label($memory_3, $memory_1);
#line 831
$memory_7 = $memory_6;
#line 831
 if (c_rt_lib::get_hashcount($memory_1) > 1) {$memory_1 = {%{$memory_1}};}$memory_1->{'loop_label'} = $memory_7;
#line 831
undef($memory_7);
#line 832
translator_priv::restore_registers($memory_2, $memory_1);
#line 832
undef($memory_2);
#line 832
undef($memory_3);
#line 832
undef($memory_4);
#line 832
undef($memory_5);
#line 832
undef($memory_6);
#line 832
undef($memory_0);
#line 832
$_[1] = $memory_1;return;
$_[1] = $memory_1;}

sub translator_priv::print_match($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;my $memory_13;my $memory_14;my $memory_15;my $memory_16;my $memory_17;my $memory_18;my $memory_19;my $memory_20;$memory_0 = $_[0];$memory_1 = $_[1];Scalar::Util::weaken($_[1]) if ref($_[1]);
#line 836
$memory_2 = translator_priv::save_registers($memory_1);
#line 838
$memory_3 = [];
#line 839
$memory_5 = $memory_0->{'val'};
#line 839
$memory_4 = translator_priv::calc_val($memory_5, $memory_1);
#line 839
undef($memory_5);
#line 840
$memory_5 = translator_priv::new_register($memory_1);
#line 841
$memory_6 = translator_priv::get_sim_label($memory_1);
#line 842
$memory_7 = $memory_0->{'branch_list'};
#line 842
$memory_9 = 0;
#line 842
$memory_10 = 1;
#line 842
$memory_11 = c_rt_lib::array_len($memory_7);
#line 842
label_3:
#line 842
$memory_12 = c_rt_lib::to_nl($memory_9 >= $memory_11);
#line 842
if (c_rt_lib::check_true($memory_12)) {goto label_1;}
#line 842
$memory_8 = $memory_7->[$memory_9];
#line 843
$memory_13 = $memory_8->{'debug'};
#line 843
translator_priv::start_new_instruction($memory_13, $memory_1);
#line 843
undef($memory_13);
#line 844
$memory_14 = $memory_8->{'variant'};
#line 844
$memory_14 = $memory_14->{'name'};
#line 844
$memory_13 = {dest => $memory_5,src => $memory_4,type => $memory_14,};
#line 844
undef($memory_14);
#line 844
$memory_13 = c_rt_lib::ov_mk_arg('ov_is', $memory_13);
#line 844
translator_priv::print($memory_1, $memory_13);
#line 844
undef($memory_13);
#line 850
$memory_13 = translator_priv::get_sim_label($memory_1);
#line 851
translator_priv::print_if_goto($memory_13, $memory_5, $memory_1);
#line 852
array::push($memory_3, $memory_13);
#line 852
undef($memory_13);
#line 853
$memory_9 = $memory_9 + $memory_10;
#line 853
goto label_3;
#line 853
label_1:
#line 853
undef($memory_7);
#line 853
undef($memory_8);
#line 853
undef($memory_9);
#line 853
undef($memory_10);
#line 853
undef($memory_11);
#line 853
undef($memory_12);
#line 854
$memory_7 = "NOMATCHALERT";
#line 854
translator_priv::load_const($memory_7, $memory_5, $memory_1);
#line 854
undef($memory_7);
#line 855
$memory_8 = [$memory_5,$memory_4];
#line 855
$memory_7 = {dest => $memory_5,src => $memory_8,};
#line 855
undef($memory_8);
#line 855
$memory_7 = c_rt_lib::ov_mk_arg('arr_decl', $memory_7);
#line 855
translator_priv::print($memory_1, $memory_7);
#line 855
undef($memory_7);
#line 860
$memory_7 = c_rt_lib::ov_mk_arg('die', $memory_5);
#line 860
translator_priv::print($memory_1, $memory_7);
#line 860
undef($memory_7);
#line 861
$memory_7 = 0;
#line 862
$memory_8 = $memory_0->{'branch_list'};
#line 862
$memory_10 = 0;
#line 862
$memory_11 = 1;
#line 862
$memory_12 = c_rt_lib::array_len($memory_8);
#line 862
label_6:
#line 862
$memory_13 = c_rt_lib::to_nl($memory_10 >= $memory_12);
#line 862
if (c_rt_lib::check_true($memory_13)) {goto label_4;}
#line 862
$memory_9 = $memory_8->[$memory_10];
#line 863
$memory_14 = $memory_9->{'cmd'};
#line 863
$memory_14 = $memory_14->{'debug'};
#line 863
translator_priv::start_new_instruction($memory_14, $memory_1);
#line 863
undef($memory_14);
#line 864
$memory_14 = $memory_3->[$memory_7];
#line 864
translator_priv::print_sim_label($memory_14, $memory_1);
#line 864
undef($memory_14);
#line 865
$memory_14 = translator_priv::save_registers($memory_1);
#line 866
$memory_15 = $memory_9->{'variant'};
#line 866
$memory_15 = $memory_15->{'value'};
#line 866
$memory_16 = c_rt_lib::ov_is($memory_15, 'value');
#line 866
if (c_rt_lib::check_true($memory_16)) {goto label_8;}
#line 874
$memory_16 = c_rt_lib::ov_is($memory_15, 'none');
#line 874
if (c_rt_lib::check_true($memory_16)) {goto label_9;}
#line 874
$memory_16 = "NOMATCHALERT";
#line 874
$memory_16 = [$memory_16,$memory_15];
#line 874
die(dfile::ssave($memory_16));
#line 866
label_8:
#line 866
$memory_17 = c_rt_lib::ov_as($memory_15, 'value');
#line 867
$memory_18 = translator_priv::print_var_decl($memory_17, $memory_1);
#line 868
$memory_20 = $memory_9->{'variant'};
#line 868
$memory_20 = $memory_20->{'name'};
#line 868
$memory_19 = {dest => $memory_18,src => $memory_4,type => $memory_20,};
#line 868
undef($memory_20);
#line 868
$memory_19 = c_rt_lib::ov_mk_arg('ov_as', $memory_19);
#line 868
translator_priv::print($memory_1, $memory_19);
#line 868
undef($memory_19);
#line 868
undef($memory_18);
#line 868
undef($memory_17);
#line 874
goto label_7;
#line 874
label_9:
#line 875
goto label_7;
#line 875
label_7:
#line 875
undef($memory_15);
#line 875
undef($memory_16);
#line 876
$memory_15 = $memory_9->{'cmd'};
#line 876
translator_priv::print_cmd($memory_15, $memory_1);
#line 876
undef($memory_15);
#line 877
translator_priv::restore_registers($memory_14, $memory_1);
#line 878
$memory_16 = $memory_9->{'cmd'};
#line 878
$memory_16 = $memory_16->{'debug'};
#line 878
$memory_15 = translator::last_debug_char($memory_16);
#line 878
undef($memory_16);
#line 878
translator_priv::start_new_instruction($memory_15, $memory_1);
#line 878
undef($memory_15);
#line 879
$memory_15 = c_rt_lib::ov_mk_arg('goto', $memory_6);
#line 879
translator_priv::print($memory_1, $memory_15);
#line 879
undef($memory_15);
#line 880
$memory_15 = 1;
#line 880
$memory_7 = $memory_7 + $memory_15;
#line 880
undef($memory_15);
#line 880
undef($memory_14);
#line 881
$memory_10 = $memory_10 + $memory_11;
#line 881
goto label_6;
#line 881
label_4:
#line 881
undef($memory_8);
#line 881
undef($memory_9);
#line 881
undef($memory_10);
#line 881
undef($memory_11);
#line 881
undef($memory_12);
#line 881
undef($memory_13);
#line 882
translator_priv::print_sim_label($memory_6, $memory_1);
#line 883
translator_priv::restore_registers($memory_2, $memory_1);
#line 883
undef($memory_2);
#line 883
undef($memory_3);
#line 883
undef($memory_4);
#line 883
undef($memory_5);
#line 883
undef($memory_6);
#line 883
undef($memory_7);
#line 883
undef($memory_0);
#line 883
$_[1] = $memory_1;return;
$_[1] = $memory_1;}

sub translator_priv::move($$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;$memory_0 = $_[0];$memory_1 = $_[1];$memory_2 = $_[2];Scalar::Util::weaken($_[2]) if ref($_[2]);
#line 888
$memory_3 = "";
#line 888
$memory_3 = c_rt_lib::to_nl($memory_0 eq $memory_3);
#line 888
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 888
if (c_rt_lib::check_true($memory_3)) {goto label_2;}
#line 888
undef($memory_0);
#line 888
undef($memory_1);
#line 888
undef($memory_3);
#line 888
$_[2] = $memory_2;return;
#line 888
goto label_2;
#line 888
label_2:
#line 888
undef($memory_3);
#line 889
$memory_3 = {dest => $memory_0,src => $memory_1,};
#line 889
$memory_3 = c_rt_lib::ov_mk_arg('move', $memory_3);
#line 889
translator_priv::print($memory_2, $memory_3);
#line 889
undef($memory_3);
#line 889
undef($memory_0);
#line 889
undef($memory_1);
#line 889
$_[2] = $memory_2;return;
$_[2] = $memory_2;}

sub translator_priv::print_bin_op_operator_command($$$$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;$memory_0 = $_[0];$memory_1 = $_[1];$memory_2 = $_[2];$memory_3 = $_[3];$memory_4 = $_[4];Scalar::Util::weaken($_[4]) if ref($_[4]);
#line 899
$memory_5 = "+";
#line 899
$memory_5 = c_rt_lib::to_nl($memory_3 eq $memory_5);
#line 899
if (c_rt_lib::check_true($memory_5)) {goto label_3;}
#line 899
$memory_5 = "+=";
#line 899
$memory_5 = c_rt_lib::to_nl($memory_3 eq $memory_5);
#line 899
label_3:
#line 899
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 899
if (c_rt_lib::check_true($memory_5)) {goto label_2;}
#line 900
$memory_6 = "+";
#line 900
$memory_3 = $memory_6;
#line 900
undef($memory_6);
#line 901
goto label_10;
#line 901
label_2:
#line 901
$memory_5 = "-";
#line 901
$memory_5 = c_rt_lib::to_nl($memory_3 eq $memory_5);
#line 901
if (c_rt_lib::check_true($memory_5)) {goto label_5;}
#line 901
$memory_5 = "-=";
#line 901
$memory_5 = c_rt_lib::to_nl($memory_3 eq $memory_5);
#line 901
label_5:
#line 901
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 901
if (c_rt_lib::check_true($memory_5)) {goto label_4;}
#line 902
$memory_6 = "-";
#line 902
$memory_3 = $memory_6;
#line 902
undef($memory_6);
#line 903
goto label_10;
#line 903
label_4:
#line 903
$memory_5 = "*";
#line 903
$memory_5 = c_rt_lib::to_nl($memory_3 eq $memory_5);
#line 903
if (c_rt_lib::check_true($memory_5)) {goto label_7;}
#line 903
$memory_5 = "*=";
#line 903
$memory_5 = c_rt_lib::to_nl($memory_3 eq $memory_5);
#line 903
label_7:
#line 903
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 903
if (c_rt_lib::check_true($memory_5)) {goto label_6;}
#line 904
$memory_6 = "*";
#line 904
$memory_3 = $memory_6;
#line 904
undef($memory_6);
#line 905
goto label_10;
#line 905
label_6:
#line 905
$memory_5 = "/";
#line 905
$memory_5 = c_rt_lib::to_nl($memory_3 eq $memory_5);
#line 905
if (c_rt_lib::check_true($memory_5)) {goto label_9;}
#line 905
$memory_5 = "/=";
#line 905
$memory_5 = c_rt_lib::to_nl($memory_3 eq $memory_5);
#line 905
label_9:
#line 905
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 905
if (c_rt_lib::check_true($memory_5)) {goto label_8;}
#line 906
$memory_6 = "/";
#line 906
$memory_3 = $memory_6;
#line 906
undef($memory_6);
#line 907
goto label_10;
#line 907
label_8:
#line 907
$memory_5 = ".";
#line 907
$memory_5 = c_rt_lib::to_nl($memory_3 eq $memory_5);
#line 907
if (c_rt_lib::check_true($memory_5)) {goto label_11;}
#line 907
$memory_5 = ".=";
#line 907
$memory_5 = c_rt_lib::to_nl($memory_3 eq $memory_5);
#line 907
label_11:
#line 907
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 907
if (c_rt_lib::check_true($memory_5)) {goto label_10;}
#line 908
$memory_6 = ".";
#line 908
$memory_3 = $memory_6;
#line 908
undef($memory_6);
#line 909
goto label_10;
#line 909
label_10:
#line 909
undef($memory_5);
#line 910
$memory_5 = {dest => $memory_0,left => $memory_1,right => $memory_2,op => $memory_3,};
#line 910
$memory_5 = c_rt_lib::ov_mk_arg('bin_op', $memory_5);
#line 910
translator_priv::print($memory_4, $memory_5);
#line 910
undef($memory_5);
#line 910
undef($memory_0);
#line 910
undef($memory_1);
#line 910
undef($memory_2);
#line 910
undef($memory_3);
#line 910
$_[4] = $memory_4;return;
$_[4] = $memory_4;}

sub translator_priv::print($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];
#line 920
$memory_3 = $memory_0->{'debug'};
#line 920
$memory_4 = c_rt_lib::ov_mk_none('none');
#line 920
$memory_2 = {cmd => $memory_1,debug => $memory_3,annotation => $memory_4,};
#line 920
undef($memory_3);
#line 920
undef($memory_4);
#line 921
$memory_3 = "result";
#line 921
$memory_3 = c_rt_lib::get_ref_hash($memory_0, $memory_3);
#line 921
$memory_4 = "commands";
#line 921
$memory_4 = c_rt_lib::get_ref_hash($memory_3, $memory_4);
#line 921
array::push($memory_4, $memory_2);
#line 921
$memory_5 = "commands";
#line 921
c_rt_lib::set_ref_hash($memory_3, $memory_5, $memory_4);
#line 921
$memory_5 = "result";
#line 921
c_rt_lib::set_ref_hash($memory_0, $memory_5, $memory_3);
#line 921
undef($memory_5);
#line 921
undef($memory_3);
#line 921
undef($memory_4);
#line 922
$memory_3 = {};
#line 922
$memory_4 = "debug";
#line 922
$memory_4 = c_rt_lib::get_ref_hash($memory_0, $memory_4);
#line 922
$memory_5 = $memory_3;
#line 922
 if (c_rt_lib::get_hashcount($memory_4) > 1) {$memory_4 = {%{$memory_4}};}$memory_4->{'declarations'} = $memory_5;
#line 922
$memory_6 = "debug";
#line 922
c_rt_lib::set_ref_hash($memory_0, $memory_6, $memory_4);
#line 922
undef($memory_6);
#line 922
undef($memory_3);
#line 922
undef($memory_4);
#line 922
undef($memory_5);
#line 922
undef($memory_2);
#line 922
undef($memory_1);
#line 922
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub translator_priv::print_if_goto($$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;$memory_0 = $_[0];$memory_1 = $_[1];$memory_2 = $_[2];Scalar::Util::weaken($_[2]) if ref($_[2]);
#line 926
$memory_3 = {dest => $memory_0,src => $memory_1,};
#line 926
$memory_3 = c_rt_lib::ov_mk_arg('if_goto', $memory_3);
#line 926
translator_priv::print($memory_2, $memory_3);
#line 926
undef($memory_3);
#line 926
undef($memory_0);
#line 926
undef($memory_1);
#line 926
$_[2] = $memory_2;return;
$_[2] = $memory_2;}

sub translator_priv::print_get_from_index($$$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;$memory_0 = $_[0];$memory_1 = $_[1];$memory_2 = $_[2];$memory_3 = $_[3];Scalar::Util::weaken($_[3]) if ref($_[3]);
#line 936
$memory_4 = {dest => $memory_0,src => $memory_1,idx => $memory_2,};
#line 936
$memory_4 = c_rt_lib::ov_mk_arg('get_frm_idx', $memory_4);
#line 936
translator_priv::print($memory_3, $memory_4);
#line 936
undef($memory_4);
#line 936
undef($memory_0);
#line 936
undef($memory_1);
#line 936
undef($memory_2);
#line 936
$_[3] = $memory_3;return;
$_[3] = $memory_3;}

sub translator_priv::print_set_at_index($$$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;$memory_0 = $_[0];$memory_1 = $_[1];$memory_2 = $_[2];$memory_3 = $_[3];Scalar::Util::weaken($_[3]) if ref($_[3]);
#line 948
$memory_4 = {src => $memory_0,idx => $memory_1,val => $memory_2,};
#line 948
$memory_4 = c_rt_lib::ov_mk_arg('set_at_idx', $memory_4);
#line 948
translator_priv::print($memory_3, $memory_4);
#line 948
undef($memory_4);
#line 948
undef($memory_0);
#line 948
undef($memory_1);
#line 948
undef($memory_2);
#line 948
$_[3] = $memory_3;return;
$_[3] = $memory_3;}

sub translator_priv::print_get_value($$$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;$memory_0 = $_[0];$memory_1 = $_[1];$memory_2 = $_[2];$memory_3 = $_[3];Scalar::Util::weaken($_[3]) if ref($_[3]);
#line 959
$memory_4 = {dest => $memory_0,src => $memory_1,key => $memory_2,};
#line 959
$memory_4 = c_rt_lib::ov_mk_arg('get_val', $memory_4);
#line 959
translator_priv::print($memory_3, $memory_4);
#line 959
undef($memory_4);
#line 959
undef($memory_0);
#line 959
undef($memory_1);
#line 959
undef($memory_2);
#line 959
$_[3] = $memory_3;return;
$_[3] = $memory_3;}

sub translator_priv::print_set_value($$$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;$memory_0 = $_[0];$memory_1 = $_[1];$memory_2 = $_[2];$memory_3 = $_[3];Scalar::Util::weaken($_[3]) if ref($_[3]);
#line 969
$memory_4 = {src => $memory_0,key => $memory_1,val => $memory_2,};
#line 969
$memory_4 = c_rt_lib::ov_mk_arg('set_val', $memory_4);
#line 969
translator_priv::print($memory_3, $memory_4);
#line 969
undef($memory_4);
#line 969
undef($memory_0);
#line 969
undef($memory_1);
#line 969
undef($memory_2);
#line 969
$_[3] = $memory_3;return;
$_[3] = $memory_3;}

sub translator_priv::get_stuct_of_lvalue($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);
#line 977
$memory_1 = [];
#line 978
label_2:
#line 978
$memory_3 = "bin_op";
#line 978
$memory_2 = ov::is($memory_0, $memory_3);
#line 978
undef($memory_3);
#line 978
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 978
if (c_rt_lib::check_true($memory_2)) {goto label_1;}
#line 979
$memory_3 = $memory_0;
#line 979
$memory_3 = c_rt_lib::ov_as($memory_3, 'bin_op');
#line 980
$memory_4 = $memory_3->{'op'};
#line 980
$memory_5 = "ARRAY_INDEX";
#line 980
$memory_4 = c_rt_lib::to_nl($memory_4 eq $memory_5);
#line 980
undef($memory_5);
#line 980
if (c_rt_lib::check_true($memory_4)) {goto label_5;}
#line 980
$memory_4 = $memory_3->{'op'};
#line 980
$memory_5 = "->";
#line 980
$memory_4 = c_rt_lib::to_nl($memory_4 eq $memory_5);
#line 980
undef($memory_5);
#line 980
label_5:
#line 980
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 980
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 980
if (c_rt_lib::check_true($memory_4)) {goto label_4;}
#line 980
$memory_5 = [];
#line 980
die(dfile::ssave($memory_5));
#line 980
goto label_4;
#line 980
label_4:
#line 980
undef($memory_4);
#line 980
undef($memory_5);
#line 981
$memory_4 = [];
#line 982
$memory_5 = $memory_3->{'op'};
#line 982
$memory_6 = "ARRAY_INDEX";
#line 982
$memory_5 = c_rt_lib::to_nl($memory_5 eq $memory_6);
#line 982
undef($memory_6);
#line 982
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 982
if (c_rt_lib::check_true($memory_5)) {goto label_7;}
#line 983
$memory_7 = $memory_3->{'right'};
#line 983
$memory_7 = c_rt_lib::ov_mk_arg('index', $memory_7);
#line 983
$memory_6 = [$memory_7];
#line 983
undef($memory_7);
#line 983
$memory_4 = $memory_6;
#line 983
undef($memory_6);
#line 984
goto label_6;
#line 984
label_7:
#line 985
$memory_7 = $memory_3->{'right'};
#line 985
$memory_7 = c_rt_lib::ov_as($memory_7, 'hash_key');
#line 985
$memory_7 = c_rt_lib::ov_mk_arg('key', $memory_7);
#line 985
$memory_6 = [$memory_7];
#line 985
undef($memory_7);
#line 985
$memory_4 = $memory_6;
#line 985
undef($memory_6);
#line 986
goto label_6;
#line 986
label_6:
#line 986
undef($memory_5);
#line 987
array::append($memory_4, $memory_1);
#line 988
$memory_1 = $memory_4;
#line 989
$memory_5 = $memory_3->{'left'};
#line 989
$memory_0 = $memory_5;
#line 989
undef($memory_5);
#line 989
undef($memory_3);
#line 989
undef($memory_4);
#line 990
goto label_2;
#line 990
label_1:
#line 990
undef($memory_2);
#line 991
$_[0] = $memory_0;return $memory_1;
#line 991
undef($memory_1);
#line 991
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub translator_priv::get_value_of_lvalue($$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;my $memory_13;my $memory_14;my $memory_15;my $memory_16;my $memory_17;my $memory_18;my $memory_19;$memory_0 = $_[0];$memory_1 = $_[1];$memory_2 = $_[2];Scalar::Util::weaken($_[2]) if ref($_[2]);
#line 995
$memory_3 = translator_priv::get_stuct_of_lvalue($memory_0);
#line 996
$memory_4 = $memory_0;
#line 996
$memory_4 = c_rt_lib::ov_as($memory_4, 'var');
#line 997
$memory_6 = translator_priv::get_var_register($memory_4, $memory_2);
#line 997
$memory_5 = [$memory_6];
#line 997
undef($memory_6);
#line 999
$memory_6 = [];
#line 1000
$memory_7 = array::len($memory_3);
#line 1000
$memory_8 = 0;
#line 1000
$memory_9 = 1;
#line 1000
label_3:
#line 1000
$memory_10 = c_rt_lib::to_nl($memory_8 >= $memory_7);
#line 1000
if (c_rt_lib::check_true($memory_10)) {goto label_1;}
#line 1001
$memory_11 = translator_priv::new_register($memory_2);
#line 1001
array::push($memory_5, $memory_11);
#line 1001
undef($memory_11);
#line 1002
$memory_11 = $memory_3->[$memory_8];
#line 1002
$memory_12 = c_rt_lib::ov_is($memory_11, 'index');
#line 1002
if (c_rt_lib::check_true($memory_12)) {goto label_5;}
#line 1007
$memory_12 = c_rt_lib::ov_is($memory_11, 'key');
#line 1007
if (c_rt_lib::check_true($memory_12)) {goto label_6;}
#line 1007
$memory_12 = "NOMATCHALERT";
#line 1007
$memory_12 = [$memory_12,$memory_11];
#line 1007
die(dfile::ssave($memory_12));
#line 1002
label_5:
#line 1002
$memory_13 = c_rt_lib::ov_as($memory_11, 'index');
#line 1003
$memory_14 = translator_priv::calc_val($memory_13, $memory_2);
#line 1004
$memory_16 = $memory_5->[$memory_8];
#line 1004
$memory_15 = {value => $memory_16,index => $memory_14,};
#line 1004
undef($memory_16);
#line 1004
$memory_15 = c_rt_lib::ov_mk_arg('index', $memory_15);
#line 1004
array::push($memory_6, $memory_15);
#line 1004
undef($memory_15);
#line 1005
$memory_15 = 0;
#line 1005
$memory_15 = c_rt_lib::to_nl($memory_1 == $memory_15);
#line 1005
$memory_16 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_15));
#line 1005
if (c_rt_lib::check_true($memory_16)) {goto label_9;}
#line 1005
$memory_15 = array::len($memory_3);
#line 1005
$memory_17 = 1;
#line 1005
$memory_15 = $memory_15 - $memory_17;
#line 1005
undef($memory_17);
#line 1005
$memory_15 = c_rt_lib::to_nl($memory_8 == $memory_15);
#line 1005
label_9:
#line 1005
undef($memory_16);
#line 1005
$memory_15 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_15));
#line 1005
if (c_rt_lib::check_true($memory_15)) {goto label_8;}
#line 1005
undef($memory_11);
#line 1005
undef($memory_12);
#line 1005
undef($memory_13);
#line 1005
undef($memory_14);
#line 1005
undef($memory_15);
#line 1005
goto label_1;
#line 1005
goto label_8;
#line 1005
label_8:
#line 1005
undef($memory_15);
#line 1006
$memory_16 = 1;
#line 1006
$memory_16 = $memory_8 + $memory_16;
#line 1006
$memory_15 = $memory_5->[$memory_16];
#line 1006
undef($memory_16);
#line 1006
$memory_16 = "get_ref_arr";
#line 1006
$memory_18 = $memory_5->[$memory_8];
#line 1006
$memory_18 = c_rt_lib::ov_mk_arg('val', $memory_18);
#line 1006
$memory_19 = c_rt_lib::ov_mk_arg('val', $memory_14);
#line 1006
$memory_17 = [$memory_18,$memory_19];
#line 1006
undef($memory_18);
#line 1006
undef($memory_19);
#line 1006
translator_priv::print_call_base($memory_15, $memory_16, $memory_17, $memory_2);
#line 1006
undef($memory_17);
#line 1006
undef($memory_16);
#line 1006
undef($memory_15);
#line 1006
undef($memory_14);
#line 1006
undef($memory_13);
#line 1007
goto label_4;
#line 1007
label_6:
#line 1007
$memory_13 = c_rt_lib::ov_as($memory_11, 'key');
#line 1008
$memory_15 = $memory_5->[$memory_8];
#line 1008
$memory_14 = {value => $memory_15,key => $memory_13,};
#line 1008
undef($memory_15);
#line 1008
$memory_14 = c_rt_lib::ov_mk_arg('key', $memory_14);
#line 1008
array::push($memory_6, $memory_14);
#line 1008
undef($memory_14);
#line 1009
$memory_14 = 0;
#line 1009
$memory_14 = c_rt_lib::to_nl($memory_1 == $memory_14);
#line 1009
$memory_15 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_14));
#line 1009
if (c_rt_lib::check_true($memory_15)) {goto label_12;}
#line 1009
$memory_14 = array::len($memory_3);
#line 1009
$memory_16 = 1;
#line 1009
$memory_14 = $memory_14 - $memory_16;
#line 1009
undef($memory_16);
#line 1009
$memory_14 = c_rt_lib::to_nl($memory_8 == $memory_14);
#line 1009
label_12:
#line 1009
undef($memory_15);
#line 1009
$memory_14 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_14));
#line 1009
if (c_rt_lib::check_true($memory_14)) {goto label_11;}
#line 1009
undef($memory_11);
#line 1009
undef($memory_12);
#line 1009
undef($memory_13);
#line 1009
undef($memory_14);
#line 1009
goto label_1;
#line 1009
goto label_11;
#line 1009
label_11:
#line 1009
undef($memory_14);
#line 1010
$memory_15 = 1;
#line 1010
$memory_15 = $memory_8 + $memory_15;
#line 1010
$memory_14 = $memory_5->[$memory_15];
#line 1010
undef($memory_15);
#line 1010
translator_priv::load_const($memory_13, $memory_14, $memory_2);
#line 1010
undef($memory_14);
#line 1011
$memory_15 = 1;
#line 1011
$memory_15 = $memory_8 + $memory_15;
#line 1011
$memory_14 = $memory_5->[$memory_15];
#line 1011
undef($memory_15);
#line 1011
$memory_15 = "get_ref_hash";
#line 1011
$memory_17 = $memory_5->[$memory_8];
#line 1011
$memory_17 = c_rt_lib::ov_mk_arg('val', $memory_17);
#line 1011
$memory_19 = 1;
#line 1011
$memory_19 = $memory_8 + $memory_19;
#line 1011
$memory_18 = $memory_5->[$memory_19];
#line 1011
undef($memory_19);
#line 1011
$memory_18 = c_rt_lib::ov_mk_arg('val', $memory_18);
#line 1011
$memory_16 = [$memory_17,$memory_18];
#line 1011
undef($memory_17);
#line 1011
undef($memory_18);
#line 1011
translator_priv::print_call_base($memory_14, $memory_15, $memory_16, $memory_2);
#line 1011
undef($memory_16);
#line 1011
undef($memory_15);
#line 1011
undef($memory_14);
#line 1011
undef($memory_13);
#line 1012
goto label_4;
#line 1012
label_4:
#line 1012
undef($memory_11);
#line 1012
undef($memory_12);
#line 1013
$memory_8 = $memory_8 + $memory_9;
#line 1013
goto label_3;
#line 1013
label_1:
#line 1013
undef($memory_7);
#line 1013
undef($memory_8);
#line 1013
undef($memory_9);
#line 1013
undef($memory_10);
#line 1014
$memory_8 = array::len($memory_5);
#line 1014
$memory_9 = 1;
#line 1014
$memory_8 = $memory_8 - $memory_9;
#line 1014
undef($memory_9);
#line 1014
$memory_7 = $memory_5->[$memory_8];
#line 1014
undef($memory_8);
#line 1014
$memory_7 = c_rt_lib::ov_mk_arg('value', $memory_7);
#line 1014
array::push($memory_6, $memory_7);
#line 1014
undef($memory_7);
#line 1015
undef($memory_0);
#line 1015
undef($memory_1);
#line 1015
undef($memory_3);
#line 1015
undef($memory_4);
#line 1015
undef($memory_5);
#line 1015
$_[2] = $memory_2;return $memory_6;
#line 1015
undef($memory_3);
#line 1015
undef($memory_4);
#line 1015
undef($memory_5);
#line 1015
undef($memory_6);
#line 1015
undef($memory_0);
#line 1015
undef($memory_1);
#line 1015
$_[2] = $memory_2;return;
$_[2] = $memory_2;}

sub translator_priv::set_value_of_lvalue($$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;my $memory_13;my $memory_14;my $memory_15;my $memory_16;my $memory_17;my $memory_18;$memory_0 = $_[0];$memory_1 = $_[1];$memory_2 = $_[2];Scalar::Util::weaken($_[2]) if ref($_[2]);
#line 1019
$memory_3 = translator_priv::save_registers($memory_2);
#line 1020
$memory_4 = array::len($memory_0);
#line 1021
$memory_6 = 1;
#line 1021
$memory_6 = $memory_4 - $memory_6;
#line 1021
$memory_5 = $memory_0->[$memory_6];
#line 1021
undef($memory_6);
#line 1021
$memory_5 = c_rt_lib::ov_as($memory_5, 'value');
#line 1022
$memory_6 = "";
#line 1023
$memory_7 = 2;
#line 1023
$memory_7 = $memory_4 - $memory_7;
#line 1023
label_2:
#line 1023
$memory_8 = 0;
#line 1023
$memory_8 = c_rt_lib::to_nl($memory_7 >= $memory_8);
#line 1023
$memory_8 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 1023
if (c_rt_lib::check_true($memory_8)) {goto label_1;}
#line 1024
$memory_9 = $memory_0->[$memory_7];
#line 1024
$memory_10 = c_rt_lib::ov_is($memory_9, 'value');
#line 1024
if (c_rt_lib::check_true($memory_10)) {goto label_5;}
#line 1026
$memory_10 = c_rt_lib::ov_is($memory_9, 'index');
#line 1026
if (c_rt_lib::check_true($memory_10)) {goto label_6;}
#line 1033
$memory_10 = c_rt_lib::ov_is($memory_9, 'key');
#line 1033
if (c_rt_lib::check_true($memory_10)) {goto label_7;}
#line 1033
$memory_10 = "NOMATCHALERT";
#line 1033
$memory_10 = [$memory_10,$memory_9];
#line 1033
die(dfile::ssave($memory_10));
#line 1024
label_5:
#line 1024
$memory_11 = c_rt_lib::ov_as($memory_9, 'value');
#line 1025
$memory_12 = [];
#line 1025
die(dfile::ssave($memory_12));
#line 1025
undef($memory_12);
#line 1025
undef($memory_11);
#line 1026
goto label_4;
#line 1026
label_6:
#line 1026
$memory_11 = c_rt_lib::ov_as($memory_9, 'index');
#line 1027
$memory_12 = 0;
#line 1027
$memory_12 = c_rt_lib::to_nl($memory_1 == $memory_12);
#line 1027
$memory_13 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_12));
#line 1027
if (c_rt_lib::check_true($memory_13)) {goto label_10;}
#line 1027
$memory_12 = 2;
#line 1027
$memory_12 = $memory_4 - $memory_12;
#line 1027
$memory_12 = c_rt_lib::to_nl($memory_7 == $memory_12);
#line 1027
label_10:
#line 1027
undef($memory_13);
#line 1027
$memory_12 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_12));
#line 1027
if (c_rt_lib::check_true($memory_12)) {goto label_9;}
#line 1028
$memory_13 = $memory_11->{'value'};
#line 1028
$memory_14 = $memory_11->{'index'};
#line 1028
translator_priv::print_set_at_index($memory_13, $memory_14, $memory_5, $memory_2);
#line 1028
undef($memory_14);
#line 1028
undef($memory_13);
#line 1029
goto label_8;
#line 1029
label_9:
#line 1030
$memory_13 = "";
#line 1030
$memory_14 = "set_ref_arr";
#line 1030
$memory_16 = $memory_11->{'value'};
#line 1030
$memory_16 = c_rt_lib::ov_mk_arg('ref', $memory_16);
#line 1030
$memory_17 = $memory_11->{'index'};
#line 1030
$memory_17 = c_rt_lib::ov_mk_arg('val', $memory_17);
#line 1030
$memory_18 = c_rt_lib::ov_mk_arg('val', $memory_5);
#line 1030
$memory_15 = [$memory_16,$memory_17,$memory_18];
#line 1030
undef($memory_16);
#line 1030
undef($memory_17);
#line 1030
undef($memory_18);
#line 1030
translator_priv::print_call_base($memory_13, $memory_14, $memory_15, $memory_2);
#line 1030
undef($memory_15);
#line 1030
undef($memory_14);
#line 1030
undef($memory_13);
#line 1031
goto label_8;
#line 1031
label_8:
#line 1031
undef($memory_12);
#line 1032
$memory_12 = $memory_11->{'value'};
#line 1032
$memory_5 = $memory_12;
#line 1032
undef($memory_12);
#line 1032
undef($memory_11);
#line 1033
goto label_4;
#line 1033
label_7:
#line 1033
$memory_11 = c_rt_lib::ov_as($memory_9, 'key');
#line 1034
$memory_12 = 0;
#line 1034
$memory_12 = c_rt_lib::to_nl($memory_1 == $memory_12);
#line 1034
$memory_13 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_12));
#line 1034
if (c_rt_lib::check_true($memory_13)) {goto label_13;}
#line 1034
$memory_12 = 2;
#line 1034
$memory_12 = $memory_4 - $memory_12;
#line 1034
$memory_12 = c_rt_lib::to_nl($memory_7 == $memory_12);
#line 1034
label_13:
#line 1034
undef($memory_13);
#line 1034
$memory_12 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_12));
#line 1034
if (c_rt_lib::check_true($memory_12)) {goto label_12;}
#line 1035
$memory_13 = $memory_11->{'value'};
#line 1035
$memory_14 = $memory_11->{'key'};
#line 1035
translator_priv::print_set_value($memory_13, $memory_14, $memory_5, $memory_2);
#line 1035
undef($memory_14);
#line 1035
undef($memory_13);
#line 1036
goto label_11;
#line 1036
label_12:
#line 1037
$memory_13 = "";
#line 1037
$memory_13 = c_rt_lib::to_nl($memory_6 eq $memory_13);
#line 1037
$memory_13 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_13));
#line 1037
if (c_rt_lib::check_true($memory_13)) {goto label_15;}
#line 1037
$memory_14 = translator_priv::new_register($memory_2);
#line 1037
$memory_6 = $memory_14;
#line 1037
undef($memory_14);
#line 1037
goto label_15;
#line 1037
label_15:
#line 1037
undef($memory_13);
#line 1038
$memory_13 = $memory_11->{'key'};
#line 1038
translator_priv::load_const($memory_13, $memory_6, $memory_2);
#line 1038
undef($memory_13);
#line 1039
$memory_13 = "";
#line 1039
$memory_14 = "set_ref_hash";
#line 1039
$memory_16 = $memory_11->{'value'};
#line 1039
$memory_16 = c_rt_lib::ov_mk_arg('ref', $memory_16);
#line 1039
$memory_17 = c_rt_lib::ov_mk_arg('val', $memory_6);
#line 1039
$memory_18 = c_rt_lib::ov_mk_arg('val', $memory_5);
#line 1039
$memory_15 = [$memory_16,$memory_17,$memory_18];
#line 1039
undef($memory_16);
#line 1039
undef($memory_17);
#line 1039
undef($memory_18);
#line 1039
translator_priv::print_call_base($memory_13, $memory_14, $memory_15, $memory_2);
#line 1039
undef($memory_15);
#line 1039
undef($memory_14);
#line 1039
undef($memory_13);
#line 1040
goto label_11;
#line 1040
label_11:
#line 1040
undef($memory_12);
#line 1041
$memory_12 = $memory_11->{'value'};
#line 1041
$memory_5 = $memory_12;
#line 1041
undef($memory_12);
#line 1041
undef($memory_11);
#line 1042
goto label_4;
#line 1042
label_4:
#line 1042
undef($memory_9);
#line 1042
undef($memory_10);
#line 1042
$memory_9 = 1;
#line 1042
$memory_7 = $memory_7 - $memory_9;
#line 1042
undef($memory_9);
#line 1043
goto label_2;
#line 1043
label_1:
#line 1043
undef($memory_7);
#line 1043
undef($memory_8);
#line 1044
$memory_7 = "";
#line 1044
$memory_7 = c_rt_lib::to_nl($memory_6 ne $memory_7);
#line 1044
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 1044
if (c_rt_lib::check_true($memory_7)) {goto label_17;}
#line 1044
translator_priv::restore_registers($memory_3, $memory_2);
#line 1044
goto label_17;
#line 1044
label_17:
#line 1044
undef($memory_7);
#line 1044
undef($memory_3);
#line 1044
undef($memory_4);
#line 1044
undef($memory_5);
#line 1044
undef($memory_6);
#line 1044
undef($memory_0);
#line 1044
undef($memory_1);
#line 1044
$_[2] = $memory_2;return;
$_[2] = $memory_2;}

sub translator_priv::make_string($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;$memory_0 = $_[0];$memory_1 = $_[1];Scalar::Util::weaken($_[1]) if ref($_[1]);
#line 1048
$memory_2 = "";
#line 1049
$memory_3 = 0;
#line 1050
$memory_4 = $memory_0->{'arr'};
#line 1050
$memory_6 = 0;
#line 1050
$memory_7 = 1;
#line 1050
$memory_8 = c_rt_lib::array_len($memory_4);
#line 1050
label_3:
#line 1050
$memory_9 = c_rt_lib::to_nl($memory_6 >= $memory_8);
#line 1050
if (c_rt_lib::check_true($memory_9)) {goto label_1;}
#line 1050
$memory_5 = $memory_4->[$memory_6];
#line 1051
$memory_10 = 0;
#line 1051
$memory_10 = c_rt_lib::to_nl($memory_3 > $memory_10);
#line 1051
$memory_10 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_10));
#line 1051
if (c_rt_lib::check_true($memory_10)) {goto label_5;}
#line 1051
$memory_11 = string::lf();
#line 1051
$memory_2 = $memory_2 . $memory_11;
#line 1051
undef($memory_11);
#line 1051
goto label_5;
#line 1051
label_5:
#line 1051
undef($memory_10);
#line 1052
$memory_2 = $memory_2 . $memory_5;
#line 1053
$memory_10 = 1;
#line 1053
$memory_3 = $memory_3 + $memory_10;
#line 1053
undef($memory_10);
#line 1054
$memory_6 = $memory_6 + $memory_7;
#line 1054
goto label_3;
#line 1054
label_1:
#line 1054
undef($memory_4);
#line 1054
undef($memory_5);
#line 1054
undef($memory_6);
#line 1054
undef($memory_7);
#line 1054
undef($memory_8);
#line 1054
undef($memory_9);
#line 1055
$memory_4 = $memory_0->{'last'};
#line 1055
$memory_5 = c_rt_lib::ov_is($memory_4, 'new_line');
#line 1055
if (c_rt_lib::check_true($memory_5)) {goto label_7;}
#line 1057
$memory_5 = c_rt_lib::ov_is($memory_4, 'end');
#line 1057
if (c_rt_lib::check_true($memory_5)) {goto label_8;}
#line 1057
$memory_5 = "NOMATCHALERT";
#line 1057
$memory_5 = [$memory_5,$memory_4];
#line 1057
die(dfile::ssave($memory_5));
#line 1055
label_7:
#line 1056
$memory_6 = string::lf();
#line 1056
$memory_2 = $memory_2 . $memory_6;
#line 1056
undef($memory_6);
#line 1057
goto label_6;
#line 1057
label_8:
#line 1058
goto label_6;
#line 1058
label_6:
#line 1058
undef($memory_4);
#line 1058
undef($memory_5);
#line 1059
undef($memory_0);
#line 1059
undef($memory_3);
#line 1059
$_[1] = $memory_1;return $memory_2;
#line 1059
undef($memory_2);
#line 1059
undef($memory_3);
#line 1059
undef($memory_0);
#line 1059
$_[1] = $memory_1;return;
$_[1] = $memory_1;}

sub translator_priv::print_ternary_op($$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;$memory_0 = $_[0];$memory_1 = $_[1];$memory_2 = $_[2];Scalar::Util::weaken($_[2]) if ref($_[2]);
#line 1065
$memory_3 = $memory_0->{'op'};
#line 1065
$memory_4 = "?";
#line 1065
$memory_3 = c_rt_lib::to_nl($memory_3 eq $memory_4);
#line 1065
undef($memory_4);
#line 1065
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 1065
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 1065
if (c_rt_lib::check_true($memory_3)) {goto label_2;}
#line 1065
$memory_4 = [];
#line 1065
die(dfile::ssave($memory_4));
#line 1065
goto label_2;
#line 1065
label_2:
#line 1065
undef($memory_3);
#line 1065
undef($memory_4);
#line 1067
$memory_3 = translator_priv::get_sim_label($memory_2);
#line 1068
$memory_4 = translator_priv::get_sim_label($memory_2);
#line 1070
$memory_6 = $memory_0->{'fst'};
#line 1070
$memory_5 = translator_priv::dest_val($memory_6, $memory_1, $memory_2);
#line 1070
undef($memory_6);
#line 1072
translator_priv::print_if_goto($memory_4, $memory_5, $memory_2);
#line 1073
$memory_6 = $memory_0->{'thrd'};
#line 1073
translator_priv::print_val($memory_6, $memory_1, $memory_2);
#line 1073
undef($memory_6);
#line 1074
$memory_6 = c_rt_lib::ov_mk_arg('goto', $memory_3);
#line 1074
translator_priv::print($memory_2, $memory_6);
#line 1074
undef($memory_6);
#line 1076
translator_priv::print_sim_label($memory_4, $memory_2);
#line 1077
$memory_6 = $memory_0->{'snd'};
#line 1077
translator_priv::print_val($memory_6, $memory_1, $memory_2);
#line 1077
undef($memory_6);
#line 1079
translator_priv::print_sim_label($memory_3, $memory_2);
#line 1079
undef($memory_3);
#line 1079
undef($memory_4);
#line 1079
undef($memory_5);
#line 1079
undef($memory_0);
#line 1079
undef($memory_1);
#line 1079
$_[2] = $memory_2;return;
$_[2] = $memory_2;}

sub translator_priv::print_die($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;$memory_0 = $_[0];$memory_1 = $_[1];Scalar::Util::weaken($_[1]) if ref($_[1]);
#line 1084
$memory_2 = translator_priv::new_register($memory_1);
#line 1085
$memory_3 = c_rt_lib::ov_mk_arg('arr_decl', $memory_0);
#line 1085
translator_priv::print_val($memory_3, $memory_2, $memory_1);
#line 1085
undef($memory_3);
#line 1086
$memory_3 = c_rt_lib::ov_mk_arg('die', $memory_2);
#line 1086
translator_priv::print($memory_1, $memory_3);
#line 1086
undef($memory_3);
#line 1086
undef($memory_2);
#line 1086
undef($memory_0);
#line 1086
$_[1] = $memory_1;return;
$_[1] = $memory_1;}

sub translator_priv::print_return($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;$memory_0 = $_[0];$memory_1 = $_[1];Scalar::Util::weaken($_[1]) if ref($_[1]);
#line 1090
$memory_2 = translator_priv::save_registers($memory_1);
#line 1091
$memory_3 = c_rt_lib::ov_mk_none('emp');
#line 1092
$memory_4 = $memory_0;
#line 1092
$memory_4 = c_rt_lib::ov_is($memory_4, 'nop');
#line 1092
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 1092
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 1092
if (c_rt_lib::check_true($memory_4)) {goto label_2;}
#line 1093
$memory_5 = translator_priv::calc_val($memory_0, $memory_1);
#line 1093
$memory_5 = c_rt_lib::ov_mk_arg('val', $memory_5);
#line 1093
$memory_3 = $memory_5;
#line 1093
undef($memory_5);
#line 1094
goto label_2;
#line 1094
label_2:
#line 1094
undef($memory_4);
#line 1095
translator_priv::print_safe_return($memory_3, $memory_1);
#line 1096
translator_priv::restore_registers($memory_2, $memory_1);
#line 1096
undef($memory_2);
#line 1096
undef($memory_3);
#line 1096
undef($memory_0);
#line 1096
$_[1] = $memory_1;return;
$_[1] = $memory_1;}

sub translator_priv::print_safe_return($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;$memory_0 = $_[0];$memory_1 = $_[1];Scalar::Util::weaken($_[1]) if ref($_[1]);
#line 1099
$memory_2 = translator_priv::save_registers($memory_1);
#line 1100
$memory_3 = $memory_1->{'logic'};
#line 1100
$memory_3 = $memory_3->{'register'};
#line 1101
$memory_4 = 1;
#line 1101
$memory_4 = -$memory_4;
#line 1102
$memory_5 = $memory_1->{'result'};
#line 1102
$memory_5 = $memory_5->{'args_type'};
#line 1103
$memory_6 = $memory_0;
#line 1103
$memory_6 = c_rt_lib::ov_is($memory_6, 'val');
#line 1103
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 1103
if (c_rt_lib::check_true($memory_6)) {goto label_2;}
#line 1104
$memory_7 = $memory_0;
#line 1104
$memory_7 = c_rt_lib::ov_as($memory_7, 'val');
#line 1104
$memory_4 = $memory_7;
#line 1104
undef($memory_7);
#line 1105
$memory_7 = array::len($memory_5);
#line 1105
$memory_7 = c_rt_lib::to_nl($memory_4 < $memory_7);
#line 1105
$memory_8 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 1105
if (c_rt_lib::check_true($memory_8)) {goto label_5;}
#line 1105
$memory_7 = $memory_5->[$memory_4];
#line 1105
$memory_7 = c_rt_lib::ov_is($memory_7, 'ref');
#line 1105
label_5:
#line 1105
undef($memory_8);
#line 1105
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 1105
if (c_rt_lib::check_true($memory_7)) {goto label_4;}
#line 1106
$memory_8 = translator_priv::new_register($memory_1);
#line 1106
$memory_4 = $memory_8;
#line 1106
undef($memory_8);
#line 1107
$memory_8 = $memory_0;
#line 1107
$memory_8 = c_rt_lib::ov_as($memory_8, 'val');
#line 1107
translator_priv::move($memory_4, $memory_8, $memory_1);
#line 1107
undef($memory_8);
#line 1108
$memory_8 = c_rt_lib::ov_mk_arg('val', $memory_4);
#line 1108
$memory_0 = $memory_8;
#line 1108
undef($memory_8);
#line 1109
goto label_4;
#line 1109
label_4:
#line 1109
undef($memory_7);
#line 1110
goto label_2;
#line 1110
label_2:
#line 1110
undef($memory_6);
#line 1111
$memory_6 = 0;
#line 1111
label_7:
#line 1111
$memory_7 = c_rt_lib::to_nl($memory_6 < $memory_3);
#line 1111
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 1111
if (c_rt_lib::check_true($memory_7)) {goto label_6;}
#line 1112
$memory_8 = array::len($memory_5);
#line 1112
$memory_8 = c_rt_lib::to_nl($memory_6 < $memory_8);
#line 1112
$memory_9 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 1112
if (c_rt_lib::check_true($memory_9)) {goto label_11;}
#line 1112
$memory_8 = $memory_5->[$memory_6];
#line 1112
$memory_8 = c_rt_lib::ov_is($memory_8, 'ref');
#line 1112
label_11:
#line 1112
undef($memory_9);
#line 1112
$memory_8 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 1112
if (c_rt_lib::check_true($memory_8)) {goto label_10;}
#line 1112
undef($memory_8);
#line 1112
goto label_8;
#line 1112
goto label_10;
#line 1112
label_10:
#line 1112
undef($memory_8);
#line 1113
$memory_8 = c_rt_lib::to_nl($memory_6 == $memory_4);
#line 1113
$memory_8 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 1113
if (c_rt_lib::check_true($memory_8)) {goto label_13;}
#line 1113
undef($memory_8);
#line 1113
goto label_8;
#line 1113
goto label_13;
#line 1113
label_13:
#line 1113
undef($memory_8);
#line 1114
$memory_9 = {
	module => "nlasm",
	name => "reg_t",
};
#line 1114
$memory_9 = c_rt_lib::ov_mk_arg('ref', $memory_9);
#line 1114
$memory_8 = ptd::ensure($memory_9, $memory_6);
#line 1114
undef($memory_9);
#line 1114
translator_priv::undef_reg($memory_8, $memory_1);
#line 1114
undef($memory_8);
#line 1114
label_8:
#line 1114
$memory_8 = 1;
#line 1114
$memory_6 = $memory_6 + $memory_8;
#line 1114
undef($memory_8);
#line 1115
goto label_7;
#line 1115
label_6:
#line 1115
undef($memory_6);
#line 1115
undef($memory_7);
#line 1116
$memory_6 = c_rt_lib::ov_mk_arg('return', $memory_0);
#line 1116
translator_priv::print($memory_1, $memory_6);
#line 1116
undef($memory_6);
#line 1117
translator_priv::restore_registers($memory_2, $memory_1);
#line 1117
undef($memory_2);
#line 1117
undef($memory_3);
#line 1117
undef($memory_4);
#line 1117
undef($memory_5);
#line 1117
undef($memory_0);
#line 1117
$_[1] = $memory_1;return;
$_[1] = $memory_1;}

sub translator_priv::convert_str_to_number($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;$memory_0 = $_[0];
#line 1120
$memory_1 = string::length($memory_0);
#line 1121
$memory_2 = 3;
#line 1121
$memory_2 = c_rt_lib::to_nl($memory_1 >= $memory_2);
#line 1121
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 1121
if (c_rt_lib::check_true($memory_3)) {goto label_3;}
#line 1121
$memory_4 = 1;
#line 1121
$memory_5 = 1;
#line 1121
$memory_2 = string::substr($memory_0, $memory_4, $memory_5);
#line 1121
undef($memory_5);
#line 1121
undef($memory_4);
#line 1121
$memory_4 = "x";
#line 1121
$memory_2 = c_rt_lib::to_nl($memory_2 eq $memory_4);
#line 1121
undef($memory_4);
#line 1121
label_3:
#line 1121
undef($memory_3);
#line 1121
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 1121
if (c_rt_lib::check_true($memory_2)) {goto label_2;}
#line 1122
$memory_3 = 0;
#line 1123
$memory_4 = 2;
#line 1123
label_5:
#line 1123
$memory_5 = c_rt_lib::to_nl($memory_4 < $memory_1);
#line 1123
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 1123
if (c_rt_lib::check_true($memory_5)) {goto label_4;}
#line 1124
$memory_7 = 1;
#line 1124
$memory_6 = string::substr($memory_0, $memory_4, $memory_7);
#line 1124
undef($memory_7);
#line 1125
$memory_7 = string::ord($memory_6);
#line 1126
$memory_8 = 16;
#line 1126
$memory_8 = $memory_3 * $memory_8;
#line 1126
$memory_3 = $memory_8;
#line 1126
undef($memory_8);
#line 1127
$memory_10 = 0;
#line 1127
$memory_8 = string::ord($memory_10);
#line 1127
undef($memory_10);
#line 1127
$memory_8 = c_rt_lib::to_nl($memory_7 >= $memory_8);
#line 1127
$memory_9 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 1127
if (c_rt_lib::check_true($memory_9)) {goto label_9;}
#line 1127
$memory_10 = 9;
#line 1127
$memory_8 = string::ord($memory_10);
#line 1127
undef($memory_10);
#line 1127
$memory_8 = c_rt_lib::to_nl($memory_7 <= $memory_8);
#line 1127
label_9:
#line 1127
undef($memory_9);
#line 1127
$memory_8 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 1127
if (c_rt_lib::check_true($memory_8)) {goto label_8;}
#line 1128
$memory_10 = 0;
#line 1128
$memory_9 = string::ord($memory_10);
#line 1128
undef($memory_10);
#line 1128
$memory_9 = $memory_7 - $memory_9;
#line 1128
$memory_3 = $memory_3 + $memory_9;
#line 1128
undef($memory_9);
#line 1129
goto label_7;
#line 1129
label_8:
#line 1129
$memory_10 = "A";
#line 1129
$memory_8 = string::ord($memory_10);
#line 1129
undef($memory_10);
#line 1129
$memory_8 = c_rt_lib::to_nl($memory_7 >= $memory_8);
#line 1129
$memory_9 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 1129
if (c_rt_lib::check_true($memory_9)) {goto label_11;}
#line 1129
$memory_10 = "F";
#line 1129
$memory_8 = string::ord($memory_10);
#line 1129
undef($memory_10);
#line 1129
$memory_8 = c_rt_lib::to_nl($memory_7 <= $memory_8);
#line 1129
label_11:
#line 1129
undef($memory_9);
#line 1129
$memory_8 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 1129
if (c_rt_lib::check_true($memory_8)) {goto label_10;}
#line 1130
$memory_10 = "A";
#line 1130
$memory_9 = string::ord($memory_10);
#line 1130
undef($memory_10);
#line 1130
$memory_9 = $memory_7 - $memory_9;
#line 1130
$memory_10 = 10;
#line 1130
$memory_9 = $memory_9 + $memory_10;
#line 1130
undef($memory_10);
#line 1130
$memory_3 = $memory_3 + $memory_9;
#line 1130
undef($memory_9);
#line 1131
goto label_7;
#line 1131
label_10:
#line 1131
$memory_10 = "a";
#line 1131
$memory_8 = string::ord($memory_10);
#line 1131
undef($memory_10);
#line 1131
$memory_8 = c_rt_lib::to_nl($memory_7 >= $memory_8);
#line 1131
$memory_9 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 1131
if (c_rt_lib::check_true($memory_9)) {goto label_13;}
#line 1131
$memory_10 = "f";
#line 1131
$memory_8 = string::ord($memory_10);
#line 1131
undef($memory_10);
#line 1131
$memory_8 = c_rt_lib::to_nl($memory_7 <= $memory_8);
#line 1131
label_13:
#line 1131
undef($memory_9);
#line 1131
$memory_8 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 1131
if (c_rt_lib::check_true($memory_8)) {goto label_12;}
#line 1132
$memory_10 = "a";
#line 1132
$memory_9 = string::ord($memory_10);
#line 1132
undef($memory_10);
#line 1132
$memory_9 = $memory_7 - $memory_9;
#line 1132
$memory_10 = 10;
#line 1132
$memory_9 = $memory_9 + $memory_10;
#line 1132
undef($memory_10);
#line 1132
$memory_3 = $memory_3 + $memory_9;
#line 1132
undef($memory_9);
#line 1133
goto label_7;
#line 1133
label_12:
#line 1134
$memory_9 = [];
#line 1134
die(dfile::ssave($memory_9));
#line 1134
undef($memory_9);
#line 1135
goto label_7;
#line 1135
label_7:
#line 1135
undef($memory_8);
#line 1135
undef($memory_6);
#line 1135
undef($memory_7);
#line 1135
$memory_6 = 1;
#line 1135
$memory_4 = $memory_4 + $memory_6;
#line 1135
undef($memory_6);
#line 1136
goto label_5;
#line 1136
label_4:
#line 1136
undef($memory_4);
#line 1136
undef($memory_5);
#line 1137
undef($memory_0);
#line 1137
undef($memory_1);
#line 1137
undef($memory_2);
#line 1137
return $memory_3;
#line 1137
undef($memory_3);
#line 1138
goto label_1;
#line 1138
label_2:
#line 1138
$memory_2 = 2;
#line 1138
$memory_2 = c_rt_lib::to_nl($memory_1 >= $memory_2);
#line 1138
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 1138
if (c_rt_lib::check_true($memory_4)) {goto label_16;}
#line 1138
$memory_5 = 0;
#line 1138
$memory_6 = 1;
#line 1138
$memory_2 = string::substr($memory_0, $memory_5, $memory_6);
#line 1138
undef($memory_6);
#line 1138
undef($memory_5);
#line 1138
$memory_5 = 0;
#line 1138
$memory_2 = c_rt_lib::to_nl($memory_2 eq $memory_5);
#line 1138
undef($memory_5);
#line 1138
label_16:
#line 1138
undef($memory_4);
#line 1138
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 1138
if (c_rt_lib::check_true($memory_3)) {goto label_15;}
#line 1138
$memory_2 = string_utils::is_integer($memory_0);
#line 1138
label_15:
#line 1138
undef($memory_3);
#line 1138
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 1138
if (c_rt_lib::check_true($memory_2)) {goto label_14;}
#line 1139
$memory_3 = 0;
#line 1140
$memory_4 = 0;
#line 1140
$memory_5 = 1;
#line 1140
label_19:
#line 1140
$memory_6 = c_rt_lib::to_nl($memory_4 >= $memory_1);
#line 1140
if (c_rt_lib::check_true($memory_6)) {goto label_17;}
#line 1141
$memory_7 = 8;
#line 1141
$memory_3 = $memory_3 * $memory_7;
#line 1141
undef($memory_7);
#line 1142
$memory_9 = 1;
#line 1142
$memory_8 = string::substr($memory_0, $memory_4, $memory_9);
#line 1142
undef($memory_9);
#line 1142
$memory_7 = string::ord($memory_8);
#line 1142
undef($memory_8);
#line 1142
$memory_9 = 0;
#line 1142
$memory_8 = string::ord($memory_9);
#line 1142
undef($memory_9);
#line 1142
$memory_7 = $memory_7 - $memory_8;
#line 1142
undef($memory_8);
#line 1142
$memory_3 = $memory_3 + $memory_7;
#line 1142
undef($memory_7);
#line 1143
$memory_4 = $memory_4 + $memory_5;
#line 1143
goto label_19;
#line 1143
label_17:
#line 1143
undef($memory_4);
#line 1143
undef($memory_5);
#line 1143
undef($memory_6);
#line 1144
undef($memory_0);
#line 1144
undef($memory_1);
#line 1144
undef($memory_2);
#line 1144
return $memory_3;
#line 1144
undef($memory_3);
#line 1145
goto label_1;
#line 1145
label_14:
#line 1146
undef($memory_1);
#line 1146
undef($memory_2);
#line 1146
return $memory_0;
#line 1147
goto label_1;
#line 1147
label_1:
#line 1147
undef($memory_2);
#line 1147
undef($memory_1);
#line 1147
undef($memory_0);
#line 1147
return;
}

sub translator_priv::dest_val($$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;$memory_0 = $_[0];$memory_1 = $_[1];$memory_2 = $_[2];Scalar::Util::weaken($_[2]) if ref($_[2]);
#line 1151
$memory_3 = $memory_0;
#line 1151
$memory_3 = c_rt_lib::ov_is($memory_3, 'var');
#line 1151
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 1151
if (c_rt_lib::check_true($memory_3)) {goto label_2;}
#line 1152
$memory_5 = $memory_0;
#line 1152
$memory_5 = c_rt_lib::ov_as($memory_5, 'var');
#line 1152
$memory_4 = translator_priv::get_var_register($memory_5, $memory_2);
#line 1152
undef($memory_5);
#line 1152
undef($memory_0);
#line 1152
undef($memory_1);
#line 1152
undef($memory_3);
#line 1152
$_[2] = $memory_2;return $memory_4;
#line 1152
undef($memory_4);
#line 1153
goto label_2;
#line 1153
label_2:
#line 1153
undef($memory_3);
#line 1154
$memory_3 = "";
#line 1154
$memory_3 = c_rt_lib::to_nl($memory_1 eq $memory_3);
#line 1154
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 1154
if (c_rt_lib::check_true($memory_3)) {goto label_4;}
#line 1154
$memory_4 = translator_priv::new_register($memory_2);
#line 1154
$memory_1 = $memory_4;
#line 1154
undef($memory_4);
#line 1154
goto label_4;
#line 1154
label_4:
#line 1154
undef($memory_3);
#line 1155
translator_priv::print_val($memory_0, $memory_1, $memory_2);
#line 1156
undef($memory_0);
#line 1156
$_[2] = $memory_2;return $memory_1;
#line 1156
undef($memory_0);
#line 1156
undef($memory_1);
#line 1156
$_[2] = $memory_2;return;
$_[2] = $memory_2;}

sub translator_priv::def_val($$$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;$memory_0 = $_[0];$memory_1 = $_[1];$memory_2 = $_[2];$memory_3 = $_[3];Scalar::Util::weaken($_[3]) if ref($_[3]);
#line 1159
$memory_4 = "";
#line 1159
$memory_4 = c_rt_lib::to_nl($memory_1 eq $memory_4);
#line 1159
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 1159
if (c_rt_lib::check_true($memory_4)) {goto label_2;}
#line 1159
$memory_1 = $memory_2;
#line 1159
goto label_2;
#line 1159
label_2:
#line 1159
undef($memory_4);
#line 1160
translator_priv::print_val($memory_0, $memory_1, $memory_3);
#line 1161
undef($memory_0);
#line 1161
undef($memory_2);
#line 1161
$_[3] = $memory_3;return $memory_1;
#line 1161
undef($memory_0);
#line 1161
undef($memory_1);
#line 1161
undef($memory_2);
#line 1161
$_[3] = $memory_3;return;
$_[3] = $memory_3;}

sub translator_priv::calc_val($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;$memory_0 = $_[0];$memory_1 = $_[1];Scalar::Util::weaken($_[1]) if ref($_[1]);
#line 1165
$memory_2 = $memory_0;
#line 1165
$memory_2 = c_rt_lib::ov_is($memory_2, 'var');
#line 1165
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 1165
if (c_rt_lib::check_true($memory_2)) {goto label_2;}
#line 1166
$memory_4 = $memory_0;
#line 1166
$memory_4 = c_rt_lib::ov_as($memory_4, 'var');
#line 1166
$memory_3 = translator_priv::get_var_register($memory_4, $memory_1);
#line 1166
undef($memory_4);
#line 1166
undef($memory_0);
#line 1166
undef($memory_2);
#line 1166
$_[1] = $memory_1;return $memory_3;
#line 1166
undef($memory_3);
#line 1167
goto label_2;
#line 1167
label_2:
#line 1167
undef($memory_2);
#line 1168
$memory_2 = translator_priv::new_register($memory_1);
#line 1169
translator_priv::print_val($memory_0, $memory_2, $memory_1);
#line 1170
undef($memory_0);
#line 1170
$_[1] = $memory_1;return $memory_2;
#line 1170
undef($memory_2);
#line 1170
undef($memory_0);
#line 1170
$_[1] = $memory_1;return;
$_[1] = $memory_1;}

sub translator_priv::get_var_register($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;$memory_0 = $_[0];$memory_1 = $_[1];Scalar::Util::weaken($_[1]) if ref($_[1]);
#line 1174
$memory_3 = $memory_1->{'logic'};
#line 1174
$memory_3 = $memory_3->{'variables'};
#line 1174
$memory_2 = hash::get_value($memory_3, $memory_0);
#line 1174
undef($memory_3);
#line 1174
undef($memory_0);
#line 1174
$_[1] = $memory_1;return $memory_2;
#line 1174
undef($memory_2);
#line 1174
undef($memory_0);
#line 1174
$_[1] = $memory_1;return;
$_[1] = $memory_1;}

sub translator_priv::new_declaration($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;$memory_0 = $_[0];$memory_1 = $_[1];Scalar::Util::weaken($_[1]) if ref($_[1]);
#line 1178
$memory_2 = translator_priv::new_register($memory_1);
#line 1179
$memory_3 = "logic";
#line 1179
$memory_3 = c_rt_lib::get_ref_hash($memory_1, $memory_3);
#line 1179
$memory_4 = "variables";
#line 1179
$memory_4 = c_rt_lib::get_ref_hash($memory_3, $memory_4);
#line 1179
hash::set_value($memory_4, $memory_0, $memory_2);
#line 1179
$memory_5 = "variables";
#line 1179
c_rt_lib::set_ref_hash($memory_3, $memory_5, $memory_4);
#line 1179
$memory_5 = "logic";
#line 1179
c_rt_lib::set_ref_hash($memory_1, $memory_5, $memory_3);
#line 1179
undef($memory_5);
#line 1179
undef($memory_3);
#line 1179
undef($memory_4);
#line 1180
$memory_3 = "debug";
#line 1180
$memory_3 = c_rt_lib::get_ref_hash($memory_1, $memory_3);
#line 1180
$memory_4 = "declarations";
#line 1180
$memory_4 = c_rt_lib::get_ref_hash($memory_3, $memory_4);
#line 1180
hash::set_value($memory_4, $memory_0, $memory_2);
#line 1180
$memory_5 = "declarations";
#line 1180
c_rt_lib::set_ref_hash($memory_3, $memory_5, $memory_4);
#line 1180
$memory_5 = "debug";
#line 1180
c_rt_lib::set_ref_hash($memory_1, $memory_5, $memory_3);
#line 1180
undef($memory_5);
#line 1180
undef($memory_3);
#line 1180
undef($memory_4);
#line 1181
undef($memory_0);
#line 1181
$_[1] = $memory_1;return $memory_2;
#line 1181
undef($memory_2);
#line 1181
undef($memory_0);
#line 1181
$_[1] = $memory_1;return;
$_[1] = $memory_1;}

sub translator_priv::new_register($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);
#line 1185
$memory_1 = "logic";
#line 1185
$memory_1 = c_rt_lib::get_ref_hash($memory_0, $memory_1);
#line 1185
$memory_2 = "register";
#line 1185
$memory_2 = c_rt_lib::get_ref_hash($memory_1, $memory_2);
#line 1185
$memory_3 = 1;
#line 1185
$memory_2 = $memory_2 + $memory_3;
#line 1185
$memory_4 = "register";
#line 1185
c_rt_lib::set_ref_hash($memory_1, $memory_4, $memory_2);
#line 1185
$memory_4 = "logic";
#line 1185
c_rt_lib::set_ref_hash($memory_0, $memory_4, $memory_1);
#line 1185
undef($memory_4);
#line 1185
undef($memory_1);
#line 1185
undef($memory_2);
#line 1185
undef($memory_3);
#line 1186
$memory_1 = $memory_0->{'result'};
#line 1186
$memory_1 = $memory_1->{'reg_size'};
#line 1186
$memory_2 = $memory_0->{'logic'};
#line 1186
$memory_2 = $memory_2->{'register'};
#line 1186
$memory_1 = c_rt_lib::to_nl($memory_1 < $memory_2);
#line 1186
undef($memory_2);
#line 1186
$memory_1 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_1));
#line 1186
if (c_rt_lib::check_true($memory_1)) {goto label_2;}
#line 1186
$memory_2 = $memory_0->{'logic'};
#line 1186
$memory_2 = $memory_2->{'register'};
#line 1186
$memory_3 = "result";
#line 1186
$memory_3 = c_rt_lib::get_ref_hash($memory_0, $memory_3);
#line 1186
$memory_4 = $memory_2;
#line 1186
 if (c_rt_lib::get_hashcount($memory_3) > 1) {$memory_3 = {%{$memory_3}};}$memory_3->{'reg_size'} = $memory_4;
#line 1186
$memory_5 = "result";
#line 1186
c_rt_lib::set_ref_hash($memory_0, $memory_5, $memory_3);
#line 1186
undef($memory_5);
#line 1186
undef($memory_2);
#line 1186
undef($memory_3);
#line 1186
undef($memory_4);
#line 1186
goto label_2;
#line 1186
label_2:
#line 1186
undef($memory_1);
#line 1188
$memory_1 = $memory_0->{'logic'};
#line 1188
$memory_1 = $memory_1->{'register'};
#line 1188
$memory_2 = 1;
#line 1188
$memory_1 = $memory_1 - $memory_2;
#line 1188
undef($memory_2);
#line 1188
$_[0] = $memory_0;return $memory_1;
#line 1188
undef($memory_1);
#line 1188
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub translator_priv::save_registers($) {
my $memory_0;my $memory_1;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);
#line 1192
$memory_1 = $memory_0->{'logic'};
#line 1192
$_[0] = $memory_0;return $memory_1;
#line 1192
undef($memory_1);
#line 1192
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub translator_priv::undef_reg($$) {
my $memory_0;my $memory_1;my $memory_2;$memory_0 = $_[0];$memory_1 = $_[1];Scalar::Util::weaken($_[1]) if ref($_[1]);
#line 1195
$memory_2 = c_rt_lib::ov_mk_arg('clear', $memory_0);
#line 1195
translator_priv::print($memory_1, $memory_2);
#line 1195
undef($memory_2);
#line 1195
undef($memory_0);
#line 1195
$_[1] = $memory_1;return;
$_[1] = $memory_1;}

sub translator_priv::restore_registers($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;$memory_0 = $_[0];$memory_1 = $_[1];Scalar::Util::weaken($_[1]) if ref($_[1]);
#line 1200
$memory_2 = $memory_0->{'register'};
#line 1200
label_2:
#line 1200
$memory_3 = $memory_1->{'logic'};
#line 1200
$memory_3 = $memory_3->{'register'};
#line 1200
$memory_3 = c_rt_lib::to_nl($memory_2 < $memory_3);
#line 1200
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 1200
if (c_rt_lib::check_true($memory_3)) {goto label_1;}
#line 1201
$memory_5 = {
	module => "nlasm",
	name => "reg_t",
};
#line 1201
$memory_5 = c_rt_lib::ov_mk_arg('ref', $memory_5);
#line 1201
$memory_4 = ptd::ensure($memory_5, $memory_2);
#line 1201
undef($memory_5);
#line 1201
translator_priv::undef_reg($memory_4, $memory_1);
#line 1201
undef($memory_4);
#line 1201
$memory_4 = 1;
#line 1201
$memory_2 = $memory_2 + $memory_4;
#line 1201
undef($memory_4);
#line 1202
goto label_2;
#line 1202
label_1:
#line 1202
undef($memory_2);
#line 1202
undef($memory_3);
#line 1203
$memory_2 = $memory_0;
#line 1203
 if (c_rt_lib::get_hashcount($memory_1) > 1) {$memory_1 = {%{$memory_1}};}$memory_1->{'logic'} = $memory_2;
#line 1203
undef($memory_2);
#line 1203
undef($memory_0);
#line 1203
$_[1] = $memory_1;return;
$_[1] = $memory_1;}

sub translator_priv::print_sim_label($$) {
my $memory_0;my $memory_1;my $memory_2;$memory_0 = $_[0];$memory_1 = $_[1];Scalar::Util::weaken($_[1]) if ref($_[1]);
#line 1207
$memory_2 = c_rt_lib::ov_mk_arg('prt_lbl', $memory_0);
#line 1207
translator_priv::print($memory_1, $memory_2);
#line 1207
undef($memory_2);
#line 1207
undef($memory_0);
#line 1207
$_[1] = $memory_1;return;
$_[1] = $memory_1;}

sub translator_priv::get_sim_label($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);
#line 1210
$memory_1 = "label_nr";
#line 1210
$memory_1 = c_rt_lib::get_ref_hash($memory_0, $memory_1);
#line 1210
$memory_2 = 1;
#line 1210
$memory_1 = $memory_1 + $memory_2;
#line 1210
$memory_3 = "label_nr";
#line 1210
c_rt_lib::set_ref_hash($memory_0, $memory_3, $memory_1);
#line 1210
undef($memory_3);
#line 1210
undef($memory_1);
#line 1210
undef($memory_2);
#line 1211
$memory_1 = "label_";
#line 1211
$memory_2 = $memory_0->{'label_nr'};
#line 1211
$memory_1 = $memory_1 . $memory_2;
#line 1211
undef($memory_2);
#line 1211
$_[0] = $memory_0;return $memory_1;
#line 1211
undef($memory_1);
#line 1211
$_[0] = $memory_0;return;
$_[0] = $memory_0;}
