use c_rt_lib;
use ptd;
use nlasm;
use array;
use ov;
use hash;
use boolean_t;
use flow_graph;
use unnecessary_commands;
use interpreter;
sub post_processing::fun_tree_t;
sub post_processing::state_t;
sub post_processing::math_funs_t;
sub post_processing::reg_const;
sub post_processing::reg_val_const;
sub post_processing::optimization_t;
sub post_processing::const_reg_t;
sub post_processing::const_reg_val_t;
sub post_processing_priv::get_command_for_const;
sub post_processing::init;
sub post_processing::clear_module_from_state;
sub post_processing_priv::delete_unused_labels;
sub post_processing_priv::delete_unnecessary_commands;
sub post_processing::find;
sub post_processing_priv::set_const_commands_in_modules;
sub post_processing_priv::evaluate_const_in_modules;
sub post_processing_priv::evaluate_const_in_function;
sub post_processing_priv::set_interpreted_changed_functions;
sub post_processing_priv::get_called_switched;
sub post_processing_priv::get_switched_func;
sub post_processing_priv::set_function_calls;
sub post_processing_priv::get_math_fun;
sub post_processing_priv::set_non_math_fun_rec;
sub post_processing_priv::set_mathfun_in_modules;
sub post_processing_priv::set_const_reg;
sub post_processing_priv::evaluate_const_in_blocks;
sub post_processing_priv::check_sub;
sub post_processing_priv::check_sub_val;
sub post_processing_priv::set_const_block;
sub post_processing_priv::evaluate_const;
sub post_processing_priv::push_load_const;
sub post_processing_priv::set_const_block_val;
sub post_processing_priv::delete_unused_labels_com;

return 1;

sub post_processing::__fun_tree_t() {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;
#line 17
$memory_4 = ptd::sim();
#line 17
$memory_3 = ptd::arr($memory_4);
#line 17
undef($memory_4);
#line 17
$memory_2 = ptd::hash($memory_3);
#line 17
undef($memory_3);
#line 17
$memory_1 = ptd::hash($memory_2);
#line 17
undef($memory_2);
#line 17
$memory_0 = ptd::hash($memory_1);
#line 17
undef($memory_1);
#line 17
return $memory_0;
#line 17
undef($memory_0);
#line 17
return;
}

my $_fun_tree_t;
sub post_processing::fun_tree_t() {
	$_fun_tree_t = post_processing::__fun_tree_t() unless defined $_fun_tree_t;
	return $_fun_tree_t;
}

sub post_processing::__state_t() {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;
#line 20
$memory_3 = {
	module => "nlasm",
	name => "result_t",
};
#line 20
$memory_3 = c_rt_lib::ov_mk_arg('ref', $memory_3);
#line 20
$memory_2 = ptd::hash($memory_3);
#line 20
undef($memory_3);
#line 20
$memory_4 = ptd::sim();
#line 20
$memory_3 = ptd::hash($memory_4);
#line 20
undef($memory_4);
#line 20
$memory_4 = {
	module => "post_processing",
	name => "math_funs_t",
};
#line 20
$memory_4 = c_rt_lib::ov_mk_arg('ref', $memory_4);
#line 20
$memory_5 = {
	module => "post_processing",
	name => "fun_tree_t",
};
#line 20
$memory_5 = c_rt_lib::ov_mk_arg('ref', $memory_5);
#line 20
$memory_6 = {
	module => "post_processing",
	name => "math_funs_t",
};
#line 20
$memory_6 = c_rt_lib::ov_mk_arg('ref', $memory_6);
#line 20
$memory_7 = {
	module => "post_processing",
	name => "optimization_t",
};
#line 20
$memory_7 = c_rt_lib::ov_mk_arg('ref', $memory_7);
#line 20
$memory_8 = {
	module => "interpreter",
	name => "state_t",
};
#line 20
$memory_8 = c_rt_lib::ov_mk_arg('ref', $memory_8);
#line 20
$memory_1 = {nl_asm => $memory_2,mat_fun_def => $memory_3,math_fs => $memory_4,fun_calls => $memory_5,const_com => $memory_6,optimization => $memory_7,interpreter_state => $memory_8,};
#line 20
undef($memory_2);
#line 20
undef($memory_3);
#line 20
undef($memory_4);
#line 20
undef($memory_5);
#line 20
undef($memory_6);
#line 20
undef($memory_7);
#line 20
undef($memory_8);
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

my $_state_t;
sub post_processing::state_t() {
	$_state_t = post_processing::__state_t() unless defined $_state_t;
	return $_state_t;
}

sub post_processing::__math_funs_t() {
my $memory_0;my $memory_1;
#line 31
$memory_1 = {
	module => "boolean_t",
	name => "type",
};
#line 31
$memory_1 = c_rt_lib::ov_mk_arg('ref', $memory_1);
#line 31
$memory_0 = ptd::hash($memory_1);
#line 31
undef($memory_1);
#line 31
return $memory_0;
#line 31
undef($memory_0);
#line 31
return;
}

my $_math_funs_t;
sub post_processing::math_funs_t() {
	$_math_funs_t = post_processing::__math_funs_t() unless defined $_math_funs_t;
	return $_math_funs_t;
}

sub post_processing::__reg_const() {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;
#line 34
$memory_2 = ptd::none();
#line 34
$memory_3 = ptd::sim();
#line 34
$memory_1 = {no => $memory_2,yes => $memory_3,};
#line 34
undef($memory_2);
#line 34
undef($memory_3);
#line 34
$memory_0 = ptd::var($memory_1);
#line 34
undef($memory_1);
#line 34
return $memory_0;
#line 34
undef($memory_0);
#line 34
return;
}

my $_reg_const;
sub post_processing::reg_const() {
	$_reg_const = post_processing::__reg_const() unless defined $_reg_const;
	return $_reg_const;
}

sub post_processing::__reg_val_const() {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;
#line 37
$memory_2 = ptd::none();
#line 37
$memory_5 = ptd::sim();
#line 37
$memory_6 = ptd::ptd_im();
#line 37
$memory_4 = {nr => $memory_5,value => $memory_6,};
#line 37
undef($memory_5);
#line 37
undef($memory_6);
#line 37
$memory_3 = ptd::rec($memory_4);
#line 37
undef($memory_4);
#line 37
$memory_1 = {no => $memory_2,yes => $memory_3,};
#line 37
undef($memory_2);
#line 37
undef($memory_3);
#line 37
$memory_0 = ptd::var($memory_1);
#line 37
undef($memory_1);
#line 37
return $memory_0;
#line 37
undef($memory_0);
#line 37
return;
}

my $_reg_val_const;
sub post_processing::reg_val_const() {
	$_reg_val_const = post_processing::__reg_val_const() unless defined $_reg_val_const;
	return $_reg_val_const;
}

sub post_processing::__optimization_t() {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;
#line 46
$memory_2 = ptd::none();
#line 46
$memory_3 = ptd::none();
#line 46
$memory_4 = ptd::none();
#line 46
$memory_5 = ptd::none();
#line 46
$memory_6 = ptd::none();
#line 46
$memory_1 = {o0 => $memory_2,o1 => $memory_3,o2 => $memory_4,o3 => $memory_5,o4 => $memory_6,};
#line 46
undef($memory_2);
#line 46
undef($memory_3);
#line 46
undef($memory_4);
#line 46
undef($memory_5);
#line 46
undef($memory_6);
#line 46
$memory_0 = ptd::var($memory_1);
#line 46
undef($memory_1);
#line 46
return $memory_0;
#line 46
undef($memory_0);
#line 46
return;
}

my $_optimization_t;
sub post_processing::optimization_t() {
	$_optimization_t = post_processing::__optimization_t() unless defined $_optimization_t;
	return $_optimization_t;
}

sub post_processing::__const_reg_t() {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;
#line 49
$memory_4 = {
	module => "post_processing",
	name => "reg_const",
};
#line 49
$memory_4 = c_rt_lib::ov_mk_arg('ref', $memory_4);
#line 49
$memory_3 = ptd::arr($memory_4);
#line 49
undef($memory_4);
#line 49
$memory_4 = ptd::sim();
#line 49
$memory_2 = {regs => $memory_3,was => $memory_4,};
#line 49
undef($memory_3);
#line 49
undef($memory_4);
#line 49
$memory_1 = ptd::rec($memory_2);
#line 49
undef($memory_2);
#line 49
$memory_0 = ptd::arr($memory_1);
#line 49
undef($memory_1);
#line 49
return $memory_0;
#line 49
undef($memory_0);
#line 49
return;
}

my $_const_reg_t;
sub post_processing::const_reg_t() {
	$_const_reg_t = post_processing::__const_reg_t() unless defined $_const_reg_t;
	return $_const_reg_t;
}

sub post_processing::__const_reg_val_t() {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;
#line 52
$memory_4 = {
	module => "post_processing",
	name => "reg_val_const",
};
#line 52
$memory_4 = c_rt_lib::ov_mk_arg('ref', $memory_4);
#line 52
$memory_3 = ptd::arr($memory_4);
#line 52
undef($memory_4);
#line 52
$memory_4 = ptd::sim();
#line 52
$memory_2 = {regs => $memory_3,was => $memory_4,};
#line 52
undef($memory_3);
#line 52
undef($memory_4);
#line 52
$memory_1 = ptd::rec($memory_2);
#line 52
undef($memory_2);
#line 52
$memory_0 = ptd::arr($memory_1);
#line 52
undef($memory_1);
#line 52
return $memory_0;
#line 52
undef($memory_0);
#line 52
return;
}

my $_const_reg_val_t;
sub post_processing::const_reg_val_t() {
	$_const_reg_val_t = post_processing::__const_reg_val_t() unless defined $_const_reg_val_t;
	return $_const_reg_val_t;
}

sub post_processing_priv::__get_command_for_const() {
my $memory_0;my $memory_1;my $memory_2;
#line 61
$memory_0 = {};
#line 62
$memory_1 = "arr_decl";
#line 62
$memory_2 = c_rt_lib::to_nl(1);
#line 62
hash::set_value($memory_0, $memory_1, $memory_2);
#line 62
undef($memory_2);
#line 62
undef($memory_1);
#line 63
$memory_1 = "hash_decl";
#line 63
$memory_2 = c_rt_lib::to_nl(1);
#line 63
hash::set_value($memory_0, $memory_1, $memory_2);
#line 63
undef($memory_2);
#line 63
undef($memory_1);
#line 64
$memory_1 = "func";
#line 64
$memory_2 = c_rt_lib::to_nl(1);
#line 64
hash::set_value($memory_0, $memory_1, $memory_2);
#line 64
undef($memory_2);
#line 64
undef($memory_1);
#line 65
$memory_1 = "load_const";
#line 65
$memory_2 = c_rt_lib::to_nl(1);
#line 65
hash::set_value($memory_0, $memory_1, $memory_2);
#line 65
undef($memory_2);
#line 65
undef($memory_1);
#line 75
$memory_1 = "ov_mk";
#line 75
$memory_2 = c_rt_lib::to_nl(1);
#line 75
hash::set_value($memory_0, $memory_1, $memory_2);
#line 75
undef($memory_2);
#line 75
undef($memory_1);
#line 76
return $memory_0;
#line 76
undef($memory_0);
#line 76
return;
}

my $_get_command_for_const;
sub post_processing_priv::get_command_for_const() {
	$_get_command_for_const = post_processing_priv::__get_command_for_const() unless defined $_get_command_for_const;
	return $_get_command_for_const;
}

sub post_processing::init($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;$memory_0 = $_[0];$memory_1 = $_[1];
#line 80
$memory_3 = {};
#line 80
$memory_4 = {};
#line 80
$memory_5 = {};
#line 80
$memory_2 = {nl_asm => $memory_3,fun_calls => $memory_4,math_fs => $memory_5,};
#line 80
undef($memory_3);
#line 80
undef($memory_4);
#line 80
undef($memory_5);
#line 81
$memory_3 = $memory_0;
#line 81
 if (c_rt_lib::get_hashcount($memory_2) > 1) {$memory_2 = {%{$memory_2}};}$memory_2->{'mat_fun_def'} = $memory_3;
#line 81
undef($memory_3);
#line 82
$memory_3 = $memory_1;
#line 82
 if (c_rt_lib::get_hashcount($memory_2) > 1) {$memory_2 = {%{$memory_2}};}$memory_2->{'optimization'} = $memory_3;
#line 82
undef($memory_3);
#line 83
$memory_3 = post_processing_priv::get_command_for_const();
#line 83
$memory_4 = $memory_3;
#line 83
 if (c_rt_lib::get_hashcount($memory_2) > 1) {$memory_2 = {%{$memory_2}};}$memory_2->{'const_com'} = $memory_4;
#line 83
undef($memory_3);
#line 83
undef($memory_4);
#line 84
$memory_4 = [];
#line 84
$memory_5 = {};
#line 84
$memory_3 = interpreter::init($memory_4, $memory_5);
#line 84
undef($memory_5);
#line 84
undef($memory_4);
#line 84
$memory_4 = $memory_3;
#line 84
 if (c_rt_lib::get_hashcount($memory_2) > 1) {$memory_2 = {%{$memory_2}};}$memory_2->{'interpreter_state'} = $memory_4;
#line 84
undef($memory_3);
#line 84
undef($memory_4);
#line 85
undef($memory_0);
#line 85
undef($memory_1);
#line 85
return $memory_2;
#line 85
undef($memory_2);
#line 85
undef($memory_0);
#line 85
undef($memory_1);
#line 85
return;
}

sub post_processing::clear_module_from_state($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];
#line 88
$memory_2 = "nl_asm";
#line 88
$memory_2 = c_rt_lib::get_ref_hash($memory_0, $memory_2);
#line 88
hash::delete($memory_2, $memory_1);
#line 88
$memory_3 = "nl_asm";
#line 88
c_rt_lib::set_ref_hash($memory_0, $memory_3, $memory_2);
#line 88
undef($memory_3);
#line 88
undef($memory_2);
#line 89
$memory_2 = "fun_calls";
#line 89
$memory_2 = c_rt_lib::get_ref_hash($memory_0, $memory_2);
#line 89
hash::delete($memory_2, $memory_1);
#line 89
$memory_3 = "fun_calls";
#line 89
c_rt_lib::set_ref_hash($memory_0, $memory_3, $memory_2);
#line 89
undef($memory_3);
#line 89
undef($memory_2);
#line 89
undef($memory_1);
#line 89
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub post_processing_priv::delete_unused_labels($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;my $memory_13;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);
#line 92
$memory_1 = {};
#line 93
$memory_4 = c_rt_lib::init_iter($memory_0);
#line 93
label_3:
#line 93
$memory_2 = c_rt_lib::is_end_hash($memory_4);
#line 93
if (c_rt_lib::check_true($memory_2)) {goto label_1;}
#line 93
$memory_2 = c_rt_lib::get_key_iter($memory_4);
#line 93
$memory_3 = c_rt_lib::hash_get_value($memory_0, $memory_2);
#line 94
$memory_5 = $memory_3;
#line 95
$memory_7 = $memory_5->{'functions'};
#line 95
$memory_6 = array::len($memory_7);
#line 95
undef($memory_7);
#line 95
$memory_7 = 0;
#line 95
$memory_8 = 1;
#line 95
label_6:
#line 95
$memory_9 = c_rt_lib::to_nl($memory_7 >= $memory_6);
#line 95
if (c_rt_lib::check_true($memory_9)) {goto label_4;}
#line 96
$memory_10 = "functions";
#line 96
$memory_10 = c_rt_lib::get_ref_hash($memory_5, $memory_10);
#line 96
$memory_11 = c_rt_lib::get_ref_arr($memory_10, $memory_7);
#line 96
$memory_12 = "commands";
#line 96
$memory_12 = c_rt_lib::get_ref_hash($memory_11, $memory_12);
#line 96
post_processing_priv::delete_unused_labels_com($memory_12);
#line 96
$memory_13 = "commands";
#line 96
c_rt_lib::set_ref_hash($memory_11, $memory_13, $memory_12);
#line 96
c_rt_lib::set_ref_arr($memory_10, $memory_7, $memory_11);
#line 96
$memory_13 = "functions";
#line 96
c_rt_lib::set_ref_hash($memory_5, $memory_13, $memory_10);
#line 96
undef($memory_13);
#line 96
undef($memory_10);
#line 96
undef($memory_11);
#line 96
undef($memory_12);
#line 97
$memory_7 = $memory_7 + $memory_8;
#line 97
goto label_6;
#line 97
label_4:
#line 97
undef($memory_6);
#line 97
undef($memory_7);
#line 97
undef($memory_8);
#line 97
undef($memory_9);
#line 98
hash::set_value($memory_1, $memory_2, $memory_5);
#line 98
undef($memory_5);
#line 99
$memory_4 = c_rt_lib::next_iter($memory_4);
#line 99
goto label_3;
#line 99
label_1:
#line 99
undef($memory_2);
#line 99
undef($memory_3);
#line 99
undef($memory_4);
#line 100
$memory_0 = $memory_1;
#line 100
undef($memory_1);
#line 100
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub post_processing_priv::delete_unnecessary_commands($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;my $memory_13;my $memory_14;my $memory_15;my $memory_16;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];
#line 103
$memory_2 = {};
#line 104
$memory_5 = c_rt_lib::init_iter($memory_0);
#line 104
label_3:
#line 104
$memory_3 = c_rt_lib::is_end_hash($memory_5);
#line 104
if (c_rt_lib::check_true($memory_3)) {goto label_1;}
#line 104
$memory_3 = c_rt_lib::get_key_iter($memory_5);
#line 104
$memory_4 = c_rt_lib::hash_get_value($memory_0, $memory_3);
#line 105
$memory_6 = $memory_4;
#line 106
$memory_8 = $memory_6->{'functions'};
#line 106
$memory_7 = array::len($memory_8);
#line 106
undef($memory_8);
#line 106
$memory_8 = 0;
#line 106
$memory_9 = 1;
#line 106
label_6:
#line 106
$memory_10 = c_rt_lib::to_nl($memory_8 >= $memory_7);
#line 106
if (c_rt_lib::check_true($memory_10)) {goto label_4;}
#line 107
$memory_11 = $memory_6->{'functions'};
#line 107
$memory_11 = $memory_11->[$memory_8];
#line 108
$memory_12 = $memory_4->{'module_name'};
#line 108
$memory_13 = $memory_11->{'access'};
#line 108
$memory_13 = c_rt_lib::ov_is($memory_13, 'pub');
#line 108
if (c_rt_lib::check_true($memory_13)) {goto label_8;}
#line 108
$memory_13 = "_priv::";
#line 108
goto label_7;
#line 108
label_8:
#line 108
$memory_13 = "::";
#line 108
label_7:
#line 108
$memory_12 = $memory_12 . $memory_13;
#line 108
undef($memory_13);
#line 108
$memory_13 = $memory_11->{'name'};
#line 108
$memory_12 = $memory_12 . $memory_13;
#line 108
undef($memory_13);
#line 109
$memory_13 = hash::has_key($memory_1, $memory_12);
#line 109
$memory_13 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_13));
#line 109
if (c_rt_lib::check_true($memory_13)) {goto label_10;}
#line 110
$memory_14 = "functions";
#line 110
$memory_14 = c_rt_lib::get_ref_hash($memory_6, $memory_14);
#line 110
$memory_15 = c_rt_lib::get_ref_arr($memory_14, $memory_8);
#line 110
unnecessary_commands::delete_unnecessary_commands($memory_15);
#line 110
c_rt_lib::set_ref_arr($memory_14, $memory_8, $memory_15);
#line 110
$memory_16 = "functions";
#line 110
c_rt_lib::set_ref_hash($memory_6, $memory_16, $memory_14);
#line 110
undef($memory_16);
#line 110
undef($memory_14);
#line 110
undef($memory_15);
#line 111
goto label_10;
#line 111
label_10:
#line 111
undef($memory_13);
#line 111
undef($memory_11);
#line 111
undef($memory_12);
#line 112
$memory_8 = $memory_8 + $memory_9;
#line 112
goto label_6;
#line 112
label_4:
#line 112
undef($memory_7);
#line 112
undef($memory_8);
#line 112
undef($memory_9);
#line 112
undef($memory_10);
#line 113
hash::set_value($memory_2, $memory_3, $memory_6);
#line 113
undef($memory_6);
#line 114
$memory_5 = c_rt_lib::next_iter($memory_5);
#line 114
goto label_3;
#line 114
label_1:
#line 114
undef($memory_3);
#line 114
undef($memory_4);
#line 114
undef($memory_5);
#line 115
$memory_0 = $memory_2;
#line 115
undef($memory_2);
#line 115
undef($memory_1);
#line 115
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub post_processing::find($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];Scalar::Util::weaken($_[1]) if ref($_[1]);
#line 119
post_processing_priv::delete_unused_labels($memory_1);
#line 120
$memory_2 = $memory_0->{'optimization'};
#line 120
$memory_2 = c_rt_lib::ov_is($memory_2, 'o0');
#line 120
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 120
if (c_rt_lib::check_true($memory_2)) {goto label_2;}
#line 120
undef($memory_2);
#line 120
$_[0] = $memory_0;$_[1] = $memory_1;return;
#line 120
goto label_2;
#line 120
label_2:
#line 120
undef($memory_2);
#line 122
$memory_2 = "fun_calls";
#line 122
$memory_2 = c_rt_lib::get_ref_hash($memory_0, $memory_2);
#line 122
post_processing_priv::set_function_calls($memory_2, $memory_1);
#line 122
$memory_3 = "fun_calls";
#line 122
c_rt_lib::set_ref_hash($memory_0, $memory_3, $memory_2);
#line 122
undef($memory_3);
#line 122
undef($memory_2);
#line 123
$memory_3 = $memory_0->{'fun_calls'};
#line 123
$memory_4 = $memory_0->{'mat_fun_def'};
#line 123
$memory_2 = post_processing_priv::get_math_fun($memory_3, $memory_4);
#line 123
undef($memory_4);
#line 123
undef($memory_3);
#line 125
$memory_5 = c_rt_lib::init_iter($memory_1);
#line 125
label_5:
#line 125
$memory_3 = c_rt_lib::is_end_hash($memory_5);
#line 125
if (c_rt_lib::check_true($memory_3)) {goto label_3;}
#line 125
$memory_3 = c_rt_lib::get_key_iter($memory_5);
#line 125
$memory_4 = c_rt_lib::hash_get_value($memory_1, $memory_3);
#line 126
$memory_6 = "nl_asm";
#line 126
$memory_6 = c_rt_lib::get_ref_hash($memory_0, $memory_6);
#line 126
hash::set_value($memory_6, $memory_3, $memory_4);
#line 126
$memory_7 = "nl_asm";
#line 126
c_rt_lib::set_ref_hash($memory_0, $memory_7, $memory_6);
#line 126
undef($memory_7);
#line 126
undef($memory_6);
#line 127
$memory_5 = c_rt_lib::next_iter($memory_5);
#line 127
goto label_5;
#line 127
label_3:
#line 127
undef($memory_3);
#line 127
undef($memory_4);
#line 127
undef($memory_5);
#line 128
$memory_3 = {};
#line 129
$memory_4 = $memory_0->{'optimization'};
#line 129
$memory_5 = c_rt_lib::ov_is($memory_4, 'o0');
#line 129
if (c_rt_lib::check_true($memory_5)) {goto label_7;}
#line 130
$memory_5 = c_rt_lib::ov_is($memory_4, 'o1');
#line 130
if (c_rt_lib::check_true($memory_5)) {goto label_8;}
#line 132
$memory_5 = c_rt_lib::ov_is($memory_4, 'o2');
#line 132
if (c_rt_lib::check_true($memory_5)) {goto label_9;}
#line 135
$memory_5 = c_rt_lib::ov_is($memory_4, 'o3');
#line 135
if (c_rt_lib::check_true($memory_5)) {goto label_10;}
#line 139
$memory_5 = c_rt_lib::ov_is($memory_4, 'o4');
#line 139
if (c_rt_lib::check_true($memory_5)) {goto label_11;}
#line 139
$memory_5 = "NOMATCHALERT";
#line 139
$memory_5 = [$memory_5,$memory_4];
#line 139
die(dfile::ssave($memory_5));
#line 129
label_7:
#line 130
goto label_6;
#line 130
label_8:
#line 131
post_processing_priv::set_mathfun_in_modules($memory_0, $memory_2, $memory_3, $memory_1);
#line 132
goto label_6;
#line 132
label_9:
#line 133
post_processing_priv::set_mathfun_in_modules($memory_0, $memory_2, $memory_3, $memory_1);
#line 134
$memory_6 = $memory_0->{'const_com'};
#line 134
post_processing_priv::set_const_commands_in_modules($memory_0, $memory_3, $memory_1, $memory_6, $memory_2);
#line 134
undef($memory_6);
#line 135
goto label_6;
#line 135
label_10:
#line 136
post_processing_priv::set_mathfun_in_modules($memory_0, $memory_2, $memory_3, $memory_1);
#line 137
$memory_6 = $memory_0->{'const_com'};
#line 137
post_processing_priv::set_const_commands_in_modules($memory_0, $memory_3, $memory_1, $memory_6, $memory_2);
#line 137
undef($memory_6);
#line 138
post_processing_priv::delete_unnecessary_commands($memory_1, $memory_3);
#line 139
goto label_6;
#line 139
label_11:
#line 140
post_processing_priv::set_mathfun_in_modules($memory_0, $memory_2, $memory_3, $memory_1);
#line 141
post_processing_priv::set_interpreted_changed_functions($memory_0, $memory_2, $memory_3);
#line 142
post_processing_priv::evaluate_const_in_modules($memory_0, $memory_3, $memory_1, $memory_2);
#line 143
post_processing_priv::delete_unnecessary_commands($memory_1, $memory_3);
#line 144
goto label_6;
#line 144
label_6:
#line 144
undef($memory_4);
#line 144
undef($memory_5);
#line 145
post_processing_priv::delete_unused_labels($memory_1);
#line 146
$memory_4 = $memory_2;
#line 146
 if (c_rt_lib::get_hashcount($memory_0) > 1) {$memory_0 = {%{$memory_0}};}$memory_0->{'math_fs'} = $memory_4;
#line 146
undef($memory_4);
#line 146
undef($memory_2);
#line 146
undef($memory_3);
#line 146
$_[0] = $memory_0;$_[1] = $memory_1;return;
$_[0] = $memory_0;$_[1] = $memory_1;}

sub post_processing_priv::set_const_commands_in_modules($$$$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;my $memory_13;my $memory_14;my $memory_15;my $memory_16;my $memory_17;my $memory_18;my $memory_19;my $memory_20;my $memory_21;my $memory_22;my $memory_23;my $memory_24;my $memory_25;my $memory_26;my $memory_27;my $memory_28;my $memory_29;my $memory_30;my $memory_31;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];$memory_2 = $_[2];Scalar::Util::weaken($_[2]) if ref($_[2]);$memory_3 = $_[3];$memory_4 = $_[4];
#line 151
$memory_6 = $memory_0->{'nl_asm'};
#line 151
$memory_5 = hash::keys($memory_6);
#line 151
undef($memory_6);
#line 151
$memory_7 = 0;
#line 151
$memory_8 = 1;
#line 151
$memory_9 = c_rt_lib::array_len($memory_5);
#line 151
label_3:
#line 151
$memory_10 = c_rt_lib::to_nl($memory_7 >= $memory_9);
#line 151
if (c_rt_lib::check_true($memory_10)) {goto label_1;}
#line 151
$memory_6 = $memory_5->[$memory_7];
#line 152
$memory_12 = $memory_0->{'nl_asm'};
#line 152
$memory_11 = hash::get_value($memory_12, $memory_6);
#line 152
undef($memory_12);
#line 153
$memory_12 = c_rt_lib::to_nl(0);
#line 154
$memory_14 = $memory_11->{'functions'};
#line 154
$memory_13 = array::len($memory_14);
#line 154
undef($memory_14);
#line 154
$memory_14 = 0;
#line 154
$memory_15 = 1;
#line 154
label_6:
#line 154
$memory_16 = c_rt_lib::to_nl($memory_14 >= $memory_13);
#line 154
if (c_rt_lib::check_true($memory_16)) {goto label_4;}
#line 155
$memory_17 = $memory_11->{'functions'};
#line 155
$memory_17 = $memory_17->[$memory_14];
#line 156
$memory_18 = $memory_17->{'access'};
#line 156
$memory_18 = c_rt_lib::ov_is($memory_18, 'pub');
#line 156
if (c_rt_lib::check_true($memory_18)) {goto label_8;}
#line 156
$memory_18 = "_priv::";
#line 156
goto label_7;
#line 156
label_8:
#line 156
$memory_18 = "::";
#line 156
label_7:
#line 156
$memory_18 = $memory_6 . $memory_18;
#line 156
$memory_19 = $memory_17->{'name'};
#line 156
$memory_18 = $memory_18 . $memory_19;
#line 156
undef($memory_19);
#line 157
$memory_19 = hash::has_key($memory_1, $memory_18);
#line 157
$memory_19 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_19));
#line 157
if (c_rt_lib::check_true($memory_19)) {goto label_10;}
#line 158
$memory_20 = c_rt_lib::to_nl(1);
#line 158
$memory_12 = $memory_20;
#line 158
undef($memory_20);
#line 159
$memory_21 = $memory_17->{'commands'};
#line 159
$memory_22 = $memory_17->{'args_type'};
#line 159
$memory_20 = flow_graph::make_blocks($memory_21, $memory_22);
#line 159
undef($memory_22);
#line 159
undef($memory_21);
#line 160
$memory_21 = $memory_11->{'module_name'};
#line 160
$memory_22 = $memory_17->{'reg_size'};
#line 160
post_processing_priv::set_const_reg($memory_20, $memory_4, $memory_21, $memory_22);
#line 160
undef($memory_22);
#line 160
undef($memory_21);
#line 161
$memory_21 = flow_graph::combine_blocks($memory_20);
#line 162
$memory_22 = array::len($memory_21);
#line 162
$memory_23 = 0;
#line 162
$memory_24 = 1;
#line 162
label_13:
#line 162
$memory_25 = c_rt_lib::to_nl($memory_23 >= $memory_22);
#line 162
if (c_rt_lib::check_true($memory_25)) {goto label_11;}
#line 163
$memory_26 = $memory_21->[$memory_23];
#line 164
$memory_29 = $memory_26->{'cmd'};
#line 164
$memory_28 = ov::get_element($memory_29);
#line 164
undef($memory_29);
#line 164
$memory_27 = hash::has_key($memory_3, $memory_28);
#line 164
undef($memory_28);
#line 164
$memory_27 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_27));
#line 164
$memory_27 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_27));
#line 164
if (c_rt_lib::check_true($memory_27)) {goto label_15;}
#line 165
$memory_28 = $memory_26->{'annotation'};
#line 165
$memory_28 = c_rt_lib::ov_is($memory_28, 'const');
#line 165
$memory_28 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_28));
#line 165
if (c_rt_lib::check_true($memory_28)) {goto label_17;}
#line 166
$memory_29 = c_rt_lib::ov_mk_none('none');
#line 166
$memory_30 = c_rt_lib::get_ref_arr($memory_21, $memory_23);
#line 166
$memory_31 = $memory_29;
#line 166
 if (c_rt_lib::get_hashcount($memory_30) > 1) {$memory_30 = {%{$memory_30}};}$memory_30->{'annotation'} = $memory_31;
#line 166
c_rt_lib::set_ref_arr($memory_21, $memory_23, $memory_30);
#line 166
undef($memory_29);
#line 166
undef($memory_30);
#line 166
undef($memory_31);
#line 167
goto label_17;
#line 167
label_17:
#line 167
undef($memory_28);
#line 168
goto label_15;
#line 168
label_15:
#line 168
undef($memory_27);
#line 168
undef($memory_26);
#line 169
$memory_23 = $memory_23 + $memory_24;
#line 169
goto label_13;
#line 169
label_11:
#line 169
undef($memory_22);
#line 169
undef($memory_23);
#line 169
undef($memory_24);
#line 169
undef($memory_25);
#line 170
$memory_22 = $memory_21;
#line 170
 if (c_rt_lib::get_hashcount($memory_17) > 1) {$memory_17 = {%{$memory_17}};}$memory_17->{'commands'} = $memory_22;
#line 170
undef($memory_22);
#line 171
$memory_22 = "functions";
#line 171
$memory_22 = c_rt_lib::get_ref_hash($memory_11, $memory_22);
#line 171
$memory_23 = $memory_17;
#line 171
 if (c_rt_lib::get_arrcount($memory_22) > 1) {$memory_22 = [@{$memory_22}];}$memory_22->[$memory_14] = $memory_23;
#line 171
$memory_24 = "functions";
#line 171
c_rt_lib::set_ref_hash($memory_11, $memory_24, $memory_22);
#line 171
undef($memory_24);
#line 171
undef($memory_22);
#line 171
undef($memory_23);
#line 171
undef($memory_20);
#line 171
undef($memory_21);
#line 172
goto label_10;
#line 172
label_10:
#line 172
undef($memory_19);
#line 172
undef($memory_17);
#line 172
undef($memory_18);
#line 173
$memory_14 = $memory_14 + $memory_15;
#line 173
goto label_6;
#line 173
label_4:
#line 173
undef($memory_13);
#line 173
undef($memory_14);
#line 173
undef($memory_15);
#line 173
undef($memory_16);
#line 174
$memory_13 = $memory_12;
#line 174
$memory_13 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_13));
#line 174
$memory_13 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_13));
#line 174
if (c_rt_lib::check_true($memory_13)) {goto label_19;}
#line 174
undef($memory_11);
#line 174
undef($memory_12);
#line 174
undef($memory_13);
#line 174
goto label_2;
#line 174
goto label_19;
#line 174
label_19:
#line 174
undef($memory_13);
#line 175
$memory_13 = "nl_asm";
#line 175
$memory_13 = c_rt_lib::get_ref_hash($memory_0, $memory_13);
#line 175
hash::set_value($memory_13, $memory_6, $memory_11);
#line 175
$memory_14 = "nl_asm";
#line 175
c_rt_lib::set_ref_hash($memory_0, $memory_14, $memory_13);
#line 175
undef($memory_14);
#line 175
undef($memory_13);
#line 176
hash::set_value($memory_2, $memory_6, $memory_11);
#line 176
undef($memory_11);
#line 176
undef($memory_12);
#line 176
label_2:
#line 177
$memory_7 = $memory_7 + $memory_8;
#line 177
goto label_3;
#line 177
label_1:
#line 177
undef($memory_5);
#line 177
undef($memory_6);
#line 177
undef($memory_7);
#line 177
undef($memory_8);
#line 177
undef($memory_9);
#line 177
undef($memory_10);
#line 177
undef($memory_1);
#line 177
undef($memory_3);
#line 177
undef($memory_4);
#line 177
$_[0] = $memory_0;$_[2] = $memory_2;return;
$_[0] = $memory_0;$_[2] = $memory_2;}

sub post_processing_priv::evaluate_const_in_modules($$$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;my $memory_13;my $memory_14;my $memory_15;my $memory_16;my $memory_17;my $memory_18;my $memory_19;my $memory_20;my $memory_21;my $memory_22;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];$memory_2 = $_[2];Scalar::Util::weaken($_[2]) if ref($_[2]);$memory_3 = $_[3];
#line 183
$memory_4 = [];
#line 184
$memory_5 = $memory_0->{'nl_asm'};
#line 184
$memory_8 = c_rt_lib::init_iter($memory_5);
#line 184
label_3:
#line 184
$memory_6 = c_rt_lib::is_end_hash($memory_8);
#line 184
if (c_rt_lib::check_true($memory_6)) {goto label_1;}
#line 184
$memory_6 = c_rt_lib::get_key_iter($memory_8);
#line 184
$memory_7 = c_rt_lib::hash_get_value($memory_5, $memory_6);
#line 185
array::push($memory_4, $memory_7);
#line 186
$memory_8 = c_rt_lib::next_iter($memory_8);
#line 186
goto label_3;
#line 186
label_1:
#line 186
undef($memory_5);
#line 186
undef($memory_6);
#line 186
undef($memory_7);
#line 186
undef($memory_8);
#line 187
$memory_6 = {};
#line 187
$memory_5 = interpreter::init($memory_4, $memory_6);
#line 187
undef($memory_6);
#line 187
$memory_6 = $memory_5;
#line 187
 if (c_rt_lib::get_hashcount($memory_0) > 1) {$memory_0 = {%{$memory_0}};}$memory_0->{'interpreter_state'} = $memory_6;
#line 187
undef($memory_5);
#line 187
undef($memory_6);
#line 188
$memory_6 = $memory_0->{'nl_asm'};
#line 188
$memory_5 = hash::keys($memory_6);
#line 188
undef($memory_6);
#line 188
$memory_7 = 0;
#line 188
$memory_8 = 1;
#line 188
$memory_9 = c_rt_lib::array_len($memory_5);
#line 188
label_6:
#line 188
$memory_10 = c_rt_lib::to_nl($memory_7 >= $memory_9);
#line 188
if (c_rt_lib::check_true($memory_10)) {goto label_4;}
#line 188
$memory_6 = $memory_5->[$memory_7];
#line 189
$memory_12 = $memory_0->{'nl_asm'};
#line 189
$memory_11 = hash::get_value($memory_12, $memory_6);
#line 189
undef($memory_12);
#line 190
$memory_12 = c_rt_lib::to_nl(0);
#line 191
$memory_14 = $memory_11->{'functions'};
#line 191
$memory_13 = array::len($memory_14);
#line 191
undef($memory_14);
#line 191
$memory_14 = 0;
#line 191
$memory_15 = 1;
#line 191
label_9:
#line 191
$memory_16 = c_rt_lib::to_nl($memory_14 >= $memory_13);
#line 191
if (c_rt_lib::check_true($memory_16)) {goto label_7;}
#line 192
$memory_17 = $memory_11->{'functions'};
#line 192
$memory_17 = $memory_17->[$memory_14];
#line 193
$memory_18 = $memory_17->{'access'};
#line 193
$memory_18 = c_rt_lib::ov_is($memory_18, 'pub');
#line 193
if (c_rt_lib::check_true($memory_18)) {goto label_11;}
#line 193
$memory_18 = "_priv::";
#line 193
goto label_10;
#line 193
label_11:
#line 193
$memory_18 = "::";
#line 193
label_10:
#line 193
$memory_18 = $memory_6 . $memory_18;
#line 193
$memory_19 = $memory_17->{'name'};
#line 193
$memory_18 = $memory_18 . $memory_19;
#line 193
undef($memory_19);
#line 194
$memory_19 = hash::has_key($memory_1, $memory_18);
#line 194
$memory_19 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_19));
#line 194
if (c_rt_lib::check_true($memory_19)) {goto label_13;}
#line 195
$memory_20 = c_rt_lib::to_nl(1);
#line 195
$memory_12 = $memory_20;
#line 195
undef($memory_20);
#line 196
$memory_21 = $memory_11->{'module_name'};
#line 196
$memory_22 = $memory_0->{'interpreter_state'};
#line 196
$memory_20 = post_processing_priv::evaluate_const_in_function($memory_17, $memory_21, $memory_3, $memory_22);
#line 196
undef($memory_22);
#line 196
undef($memory_21);
#line 196
$memory_21 = $memory_20;
#line 196
 if (c_rt_lib::get_hashcount($memory_17) > 1) {$memory_17 = {%{$memory_17}};}$memory_17->{'commands'} = $memory_21;
#line 196
undef($memory_20);
#line 196
undef($memory_21);
#line 197
$memory_20 = "functions";
#line 197
$memory_20 = c_rt_lib::get_ref_hash($memory_11, $memory_20);
#line 197
$memory_21 = $memory_17;
#line 197
 if (c_rt_lib::get_arrcount($memory_20) > 1) {$memory_20 = [@{$memory_20}];}$memory_20->[$memory_14] = $memory_21;
#line 197
$memory_22 = "functions";
#line 197
c_rt_lib::set_ref_hash($memory_11, $memory_22, $memory_20);
#line 197
undef($memory_22);
#line 197
undef($memory_20);
#line 197
undef($memory_21);
#line 198
goto label_13;
#line 198
label_13:
#line 198
undef($memory_19);
#line 198
undef($memory_17);
#line 198
undef($memory_18);
#line 199
$memory_14 = $memory_14 + $memory_15;
#line 199
goto label_9;
#line 199
label_7:
#line 199
undef($memory_13);
#line 199
undef($memory_14);
#line 199
undef($memory_15);
#line 199
undef($memory_16);
#line 200
$memory_13 = $memory_12;
#line 200
$memory_13 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_13));
#line 200
$memory_13 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_13));
#line 200
if (c_rt_lib::check_true($memory_13)) {goto label_15;}
#line 200
undef($memory_11);
#line 200
undef($memory_12);
#line 200
undef($memory_13);
#line 200
goto label_5;
#line 200
goto label_15;
#line 200
label_15:
#line 200
undef($memory_13);
#line 201
$memory_13 = "nl_asm";
#line 201
$memory_13 = c_rt_lib::get_ref_hash($memory_0, $memory_13);
#line 201
hash::set_value($memory_13, $memory_6, $memory_11);
#line 201
$memory_14 = "nl_asm";
#line 201
c_rt_lib::set_ref_hash($memory_0, $memory_14, $memory_13);
#line 201
undef($memory_14);
#line 201
undef($memory_13);
#line 202
hash::set_value($memory_2, $memory_6, $memory_11);
#line 202
undef($memory_11);
#line 202
undef($memory_12);
#line 202
label_5:
#line 203
$memory_7 = $memory_7 + $memory_8;
#line 203
goto label_6;
#line 203
label_4:
#line 203
undef($memory_5);
#line 203
undef($memory_6);
#line 203
undef($memory_7);
#line 203
undef($memory_8);
#line 203
undef($memory_9);
#line 203
undef($memory_10);
#line 203
undef($memory_4);
#line 203
undef($memory_1);
#line 203
undef($memory_3);
#line 203
$_[0] = $memory_0;$_[2] = $memory_2;return;
$_[0] = $memory_0;$_[2] = $memory_2;}

sub post_processing_priv::evaluate_const_in_function($$$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;$memory_0 = $_[0];$memory_1 = $_[1];$memory_2 = $_[2];$memory_3 = $_[3];
#line 207
$memory_5 = $memory_0->{'commands'};
#line 207
$memory_6 = $memory_0->{'args_type'};
#line 207
$memory_4 = flow_graph::make_blocks($memory_5, $memory_6);
#line 207
undef($memory_6);
#line 207
undef($memory_5);
#line 208
post_processing_priv::evaluate_const_in_blocks($memory_4, $memory_2, $memory_0, $memory_1, $memory_3);
#line 209
$memory_5 = flow_graph::combine_blocks($memory_4);
#line 209
undef($memory_0);
#line 209
undef($memory_1);
#line 209
undef($memory_2);
#line 209
undef($memory_3);
#line 209
undef($memory_4);
#line 209
return $memory_5;
#line 209
undef($memory_5);
#line 209
undef($memory_4);
#line 209
undef($memory_0);
#line 209
undef($memory_1);
#line 209
undef($memory_2);
#line 209
undef($memory_3);
#line 209
return;
}

sub post_processing_priv::set_interpreted_changed_functions($$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;my $memory_13;my $memory_14;my $memory_15;my $memory_16;my $memory_17;my $memory_18;my $memory_19;my $memory_20;my $memory_21;$memory_0 = $_[0];$memory_1 = $_[1];$memory_2 = $_[2];Scalar::Util::weaken($_[2]) if ref($_[2]);
#line 213
$memory_3 = $memory_0->{'fun_calls'};
#line 214
$memory_4 = $memory_0->{'nl_asm'};
#line 214
$memory_7 = c_rt_lib::init_iter($memory_4);
#line 214
label_3:
#line 214
$memory_5 = c_rt_lib::is_end_hash($memory_7);
#line 214
if (c_rt_lib::check_true($memory_5)) {goto label_1;}
#line 214
$memory_5 = c_rt_lib::get_key_iter($memory_7);
#line 214
$memory_6 = c_rt_lib::hash_get_value($memory_4, $memory_5);
#line 215
$memory_8 = $memory_6->{'functions'};
#line 215
$memory_10 = 0;
#line 215
$memory_11 = 1;
#line 215
$memory_12 = c_rt_lib::array_len($memory_8);
#line 215
label_6:
#line 215
$memory_13 = c_rt_lib::to_nl($memory_10 >= $memory_12);
#line 215
if (c_rt_lib::check_true($memory_13)) {goto label_4;}
#line 215
$memory_9 = $memory_8->[$memory_10];
#line 216
$memory_14 = $memory_9->{'access'};
#line 216
$memory_14 = c_rt_lib::ov_is($memory_14, 'pub');
#line 216
if (c_rt_lib::check_true($memory_14)) {goto label_8;}
#line 216
$memory_14 = "_priv::";
#line 216
goto label_7;
#line 216
label_8:
#line 216
$memory_14 = "::";
#line 216
label_7:
#line 216
$memory_15 = $memory_9->{'name'};
#line 216
$memory_14 = $memory_14 . $memory_15;
#line 216
undef($memory_15);
#line 217
$memory_15 = $memory_5 . $memory_14;
#line 218
$memory_17 = hash::get_value($memory_3, $memory_5);
#line 218
$memory_16 = hash::get_value($memory_17, $memory_14);
#line 218
undef($memory_17);
#line 219
$memory_19 = c_rt_lib::init_iter($memory_16);
#line 219
label_11:
#line 219
$memory_17 = c_rt_lib::is_end_hash($memory_19);
#line 219
if (c_rt_lib::check_true($memory_17)) {goto label_9;}
#line 219
$memory_17 = c_rt_lib::get_key_iter($memory_19);
#line 219
$memory_18 = c_rt_lib::hash_get_value($memory_16, $memory_17);
#line 220
$memory_20 = hash::has_key($memory_2, $memory_17);
#line 220
$memory_20 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_20));
#line 220
$memory_20 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_20));
#line 220
if (c_rt_lib::check_true($memory_20)) {goto label_13;}
#line 220
undef($memory_20);
#line 220
goto label_10;
#line 220
goto label_13;
#line 220
label_13:
#line 220
undef($memory_20);
#line 221
$memory_20 = hash::get_value($memory_1, $memory_17);
#line 222
$memory_21 = $memory_20;
#line 222
$memory_21 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_21));
#line 222
$memory_21 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_21));
#line 222
if (c_rt_lib::check_true($memory_21)) {goto label_15;}
#line 222
undef($memory_20);
#line 222
undef($memory_21);
#line 222
goto label_10;
#line 222
goto label_15;
#line 222
label_15:
#line 222
undef($memory_21);
#line 223
$memory_21 = "";
#line 223
hash::set_value($memory_2, $memory_15, $memory_21);
#line 223
undef($memory_21);
#line 223
undef($memory_20);
#line 223
label_10:
#line 224
$memory_19 = c_rt_lib::next_iter($memory_19);
#line 224
goto label_11;
#line 224
label_9:
#line 224
undef($memory_17);
#line 224
undef($memory_18);
#line 224
undef($memory_19);
#line 224
undef($memory_14);
#line 224
undef($memory_15);
#line 224
undef($memory_16);
#line 225
$memory_10 = $memory_10 + $memory_11;
#line 225
goto label_6;
#line 225
label_4:
#line 225
undef($memory_8);
#line 225
undef($memory_9);
#line 225
undef($memory_10);
#line 225
undef($memory_11);
#line 225
undef($memory_12);
#line 225
undef($memory_13);
#line 226
$memory_7 = c_rt_lib::next_iter($memory_7);
#line 226
goto label_3;
#line 226
label_1:
#line 226
undef($memory_4);
#line 226
undef($memory_5);
#line 226
undef($memory_6);
#line 226
undef($memory_7);
#line 226
undef($memory_3);
#line 226
undef($memory_0);
#line 226
undef($memory_1);
#line 226
$_[2] = $memory_2;return;
$_[2] = $memory_2;}

sub post_processing_priv::get_called_switched($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;my $memory_13;$memory_0 = $_[0];$memory_1 = $_[1];
#line 230
$memory_2 = {};
#line 231
$memory_5 = c_rt_lib::init_iter($memory_0);
#line 231
label_3:
#line 231
$memory_3 = c_rt_lib::is_end_hash($memory_5);
#line 231
if (c_rt_lib::check_true($memory_3)) {goto label_1;}
#line 231
$memory_3 = c_rt_lib::get_key_iter($memory_5);
#line 231
$memory_4 = c_rt_lib::hash_get_value($memory_0, $memory_3);
#line 232
$memory_8 = c_rt_lib::init_iter($memory_4);
#line 232
label_6:
#line 232
$memory_6 = c_rt_lib::is_end_hash($memory_8);
#line 232
if (c_rt_lib::check_true($memory_6)) {goto label_4;}
#line 232
$memory_6 = c_rt_lib::get_key_iter($memory_8);
#line 232
$memory_7 = c_rt_lib::hash_get_value($memory_4, $memory_6);
#line 233
$memory_11 = c_rt_lib::init_iter($memory_7);
#line 233
label_9:
#line 233
$memory_9 = c_rt_lib::is_end_hash($memory_11);
#line 233
if (c_rt_lib::check_true($memory_9)) {goto label_7;}
#line 233
$memory_9 = c_rt_lib::get_key_iter($memory_11);
#line 233
$memory_10 = c_rt_lib::hash_get_value($memory_7, $memory_9);
#line 234
$memory_12 = hash::has_key($memory_1, $memory_9);
#line 234
$memory_12 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_12));
#line 234
if (c_rt_lib::check_true($memory_12)) {goto label_11;}
#line 235
$memory_13 = c_rt_lib::to_nl(1);
#line 235
hash::set_value($memory_2, $memory_9, $memory_13);
#line 235
undef($memory_13);
#line 236
goto label_11;
#line 236
label_11:
#line 236
undef($memory_12);
#line 237
$memory_11 = c_rt_lib::next_iter($memory_11);
#line 237
goto label_9;
#line 237
label_7:
#line 237
undef($memory_9);
#line 237
undef($memory_10);
#line 237
undef($memory_11);
#line 238
$memory_8 = c_rt_lib::next_iter($memory_8);
#line 238
goto label_6;
#line 238
label_4:
#line 238
undef($memory_6);
#line 238
undef($memory_7);
#line 238
undef($memory_8);
#line 239
$memory_5 = c_rt_lib::next_iter($memory_5);
#line 239
goto label_3;
#line 239
label_1:
#line 239
undef($memory_3);
#line 239
undef($memory_4);
#line 239
undef($memory_5);
#line 240
undef($memory_0);
#line 240
undef($memory_1);
#line 240
return $memory_2;
#line 240
undef($memory_2);
#line 240
undef($memory_0);
#line 240
undef($memory_1);
#line 240
return;
}

sub post_processing_priv::get_switched_func($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;$memory_0 = $_[0];$memory_1 = $_[1];
#line 243
$memory_2 = {};
#line 244
$memory_5 = c_rt_lib::init_iter($memory_1);
#line 244
label_3:
#line 244
$memory_3 = c_rt_lib::is_end_hash($memory_5);
#line 244
if (c_rt_lib::check_true($memory_3)) {goto label_1;}
#line 244
$memory_3 = c_rt_lib::get_key_iter($memory_5);
#line 244
$memory_4 = c_rt_lib::hash_get_value($memory_1, $memory_3);
#line 245
$memory_6 = hash::has_key($memory_0, $memory_3);
#line 245
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 245
if (c_rt_lib::check_true($memory_6)) {goto label_5;}
#line 246
$memory_7 = hash::get_value($memory_0, $memory_3);
#line 247
$memory_8 = $memory_7;
#line 247
$memory_9 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 247
if (c_rt_lib::check_true($memory_9)) {goto label_9;}
#line 247
$memory_8 = $memory_4;
#line 247
label_9:
#line 247
undef($memory_9);
#line 247
if (c_rt_lib::check_true($memory_8)) {goto label_8;}
#line 247
$memory_8 = $memory_7;
#line 247
$memory_8 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 247
$memory_9 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 247
if (c_rt_lib::check_true($memory_9)) {goto label_10;}
#line 247
$memory_8 = $memory_4;
#line 247
$memory_8 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 247
label_10:
#line 247
undef($memory_9);
#line 247
label_8:
#line 247
$memory_8 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 247
if (c_rt_lib::check_true($memory_8)) {goto label_7;}
#line 247
undef($memory_6);
#line 247
undef($memory_7);
#line 247
undef($memory_8);
#line 247
goto label_2;
#line 247
goto label_7;
#line 247
label_7:
#line 247
undef($memory_8);
#line 247
undef($memory_7);
#line 248
goto label_5;
#line 248
label_5:
#line 248
undef($memory_6);
#line 249
hash::set_value($memory_2, $memory_3, $memory_4);
#line 249
label_2:
#line 250
$memory_5 = c_rt_lib::next_iter($memory_5);
#line 250
goto label_3;
#line 250
label_1:
#line 250
undef($memory_3);
#line 250
undef($memory_4);
#line 250
undef($memory_5);
#line 251
undef($memory_0);
#line 251
undef($memory_1);
#line 251
return $memory_2;
#line 251
undef($memory_2);
#line 251
undef($memory_0);
#line 251
undef($memory_1);
#line 251
return;
}

sub post_processing_priv::set_function_calls($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;my $memory_13;my $memory_14;my $memory_15;my $memory_16;my $memory_17;my $memory_18;my $memory_19;my $memory_20;my $memory_21;my $memory_22;my $memory_23;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];
#line 254
$memory_4 = c_rt_lib::init_iter($memory_1);
#line 254
label_3:
#line 254
$memory_2 = c_rt_lib::is_end_hash($memory_4);
#line 254
if (c_rt_lib::check_true($memory_2)) {goto label_1;}
#line 254
$memory_2 = c_rt_lib::get_key_iter($memory_4);
#line 254
$memory_3 = c_rt_lib::hash_get_value($memory_1, $memory_2);
#line 255
$memory_5 = {};
#line 256
$memory_6 = $memory_3->{'functions'};
#line 256
$memory_8 = 0;
#line 256
$memory_9 = 1;
#line 256
$memory_10 = c_rt_lib::array_len($memory_6);
#line 256
label_6:
#line 256
$memory_11 = c_rt_lib::to_nl($memory_8 >= $memory_10);
#line 256
if (c_rt_lib::check_true($memory_11)) {goto label_4;}
#line 256
$memory_7 = $memory_6->[$memory_8];
#line 257
$memory_12 = {};
#line 258
$memory_13 = $memory_7->{'commands'};
#line 258
$memory_15 = 0;
#line 258
$memory_16 = 1;
#line 258
$memory_17 = c_rt_lib::array_len($memory_13);
#line 258
label_9:
#line 258
$memory_18 = c_rt_lib::to_nl($memory_15 >= $memory_17);
#line 258
if (c_rt_lib::check_true($memory_18)) {goto label_7;}
#line 258
$memory_14 = $memory_13->[$memory_15];
#line 259
$memory_19 = $memory_14->{'cmd'};
#line 259
$memory_19 = c_rt_lib::ov_is($memory_19, 'call');
#line 259
$memory_19 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_19));
#line 259
$memory_19 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_19));
#line 259
if (c_rt_lib::check_true($memory_19)) {goto label_11;}
#line 259
undef($memory_19);
#line 259
goto label_8;
#line 259
goto label_11;
#line 259
label_11:
#line 259
undef($memory_19);
#line 260
$memory_19 = $memory_14->{'cmd'};
#line 260
$memory_19 = c_rt_lib::ov_as($memory_19, 'call');
#line 261
$memory_20 = $memory_19->{'mod'};
#line 262
$memory_21 = "::";
#line 262
$memory_22 = $memory_19->{'fun_name'};
#line 262
$memory_21 = $memory_21 . $memory_22;
#line 262
undef($memory_22);
#line 263
$memory_22 = "";
#line 263
$memory_22 = c_rt_lib::to_nl($memory_20 eq $memory_22);
#line 263
$memory_22 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_22));
#line 263
if (c_rt_lib::check_true($memory_22)) {goto label_13;}
#line 264
$memory_20 = $memory_2;
#line 265
$memory_23 = "_priv";
#line 265
$memory_23 = $memory_23 . $memory_21;
#line 265
$memory_21 = $memory_23;
#line 265
undef($memory_23);
#line 266
goto label_13;
#line 266
label_13:
#line 266
undef($memory_22);
#line 267
$memory_22 = $memory_20 . $memory_21;
#line 267
$memory_23 = [$memory_20,$memory_21];
#line 267
hash::set_value($memory_12, $memory_22, $memory_23);
#line 267
undef($memory_23);
#line 267
undef($memory_22);
#line 267
undef($memory_19);
#line 267
undef($memory_20);
#line 267
undef($memory_21);
#line 267
label_8:
#line 268
$memory_15 = $memory_15 + $memory_16;
#line 268
goto label_9;
#line 268
label_7:
#line 268
undef($memory_13);
#line 268
undef($memory_14);
#line 268
undef($memory_15);
#line 268
undef($memory_16);
#line 268
undef($memory_17);
#line 268
undef($memory_18);
#line 269
$memory_13 = $memory_7->{'access'};
#line 269
$memory_13 = c_rt_lib::ov_is($memory_13, 'pub');
#line 269
if (c_rt_lib::check_true($memory_13)) {goto label_15;}
#line 269
$memory_13 = "_priv::";
#line 269
goto label_14;
#line 269
label_15:
#line 269
$memory_13 = "::";
#line 269
label_14:
#line 270
$memory_14 = $memory_7->{'name'};
#line 270
$memory_14 = $memory_13 . $memory_14;
#line 270
hash::set_value($memory_5, $memory_14, $memory_12);
#line 270
undef($memory_14);
#line 270
undef($memory_12);
#line 270
undef($memory_13);
#line 271
$memory_8 = $memory_8 + $memory_9;
#line 271
goto label_6;
#line 271
label_4:
#line 271
undef($memory_6);
#line 271
undef($memory_7);
#line 271
undef($memory_8);
#line 271
undef($memory_9);
#line 271
undef($memory_10);
#line 271
undef($memory_11);
#line 272
hash::set_value($memory_0, $memory_2, $memory_5);
#line 272
undef($memory_5);
#line 273
$memory_4 = c_rt_lib::next_iter($memory_4);
#line 273
goto label_3;
#line 273
label_1:
#line 273
undef($memory_2);
#line 273
undef($memory_3);
#line 273
undef($memory_4);
#line 273
undef($memory_1);
#line 273
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub post_processing_priv::get_math_fun($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;my $memory_13;my $memory_14;my $memory_15;my $memory_16;$memory_0 = $_[0];$memory_1 = $_[1];
#line 277
$memory_2 = {};
#line 278
$memory_5 = c_rt_lib::init_iter($memory_1);
#line 278
label_3:
#line 278
$memory_3 = c_rt_lib::is_end_hash($memory_5);
#line 278
if (c_rt_lib::check_true($memory_3)) {goto label_1;}
#line 278
$memory_3 = c_rt_lib::get_key_iter($memory_5);
#line 278
$memory_4 = c_rt_lib::hash_get_value($memory_1, $memory_3);
#line 279
$memory_6 = c_rt_lib::to_nl(1);
#line 279
hash::set_value($memory_2, $memory_3, $memory_6);
#line 279
undef($memory_6);
#line 280
$memory_5 = c_rt_lib::next_iter($memory_5);
#line 280
goto label_3;
#line 280
label_1:
#line 280
undef($memory_3);
#line 280
undef($memory_4);
#line 280
undef($memory_5);
#line 281
$memory_5 = c_rt_lib::init_iter($memory_0);
#line 281
label_6:
#line 281
$memory_3 = c_rt_lib::is_end_hash($memory_5);
#line 281
if (c_rt_lib::check_true($memory_3)) {goto label_4;}
#line 281
$memory_3 = c_rt_lib::get_key_iter($memory_5);
#line 281
$memory_4 = c_rt_lib::hash_get_value($memory_0, $memory_3);
#line 282
$memory_8 = c_rt_lib::init_iter($memory_4);
#line 282
label_9:
#line 282
$memory_6 = c_rt_lib::is_end_hash($memory_8);
#line 282
if (c_rt_lib::check_true($memory_6)) {goto label_7;}
#line 282
$memory_6 = c_rt_lib::get_key_iter($memory_8);
#line 282
$memory_7 = c_rt_lib::hash_get_value($memory_4, $memory_6);
#line 283
$memory_9 = $memory_3 . $memory_6;
#line 283
$memory_10 = c_rt_lib::to_nl(1);
#line 283
hash::set_value($memory_2, $memory_9, $memory_10);
#line 283
undef($memory_10);
#line 283
undef($memory_9);
#line 284
$memory_8 = c_rt_lib::next_iter($memory_8);
#line 284
goto label_9;
#line 284
label_7:
#line 284
undef($memory_6);
#line 284
undef($memory_7);
#line 284
undef($memory_8);
#line 285
$memory_5 = c_rt_lib::next_iter($memory_5);
#line 285
goto label_6;
#line 285
label_4:
#line 285
undef($memory_3);
#line 285
undef($memory_4);
#line 285
undef($memory_5);
#line 286
$memory_3 = {};
#line 287
$memory_4 = {};
#line 288
$memory_7 = c_rt_lib::init_iter($memory_0);
#line 288
label_12:
#line 288
$memory_5 = c_rt_lib::is_end_hash($memory_7);
#line 288
if (c_rt_lib::check_true($memory_5)) {goto label_10;}
#line 288
$memory_5 = c_rt_lib::get_key_iter($memory_7);
#line 288
$memory_6 = c_rt_lib::hash_get_value($memory_0, $memory_5);
#line 289
$memory_10 = c_rt_lib::init_iter($memory_6);
#line 289
label_15:
#line 289
$memory_8 = c_rt_lib::is_end_hash($memory_10);
#line 289
if (c_rt_lib::check_true($memory_8)) {goto label_13;}
#line 289
$memory_8 = c_rt_lib::get_key_iter($memory_10);
#line 289
$memory_9 = c_rt_lib::hash_get_value($memory_6, $memory_8);
#line 290
$memory_13 = c_rt_lib::init_iter($memory_9);
#line 290
label_18:
#line 290
$memory_11 = c_rt_lib::is_end_hash($memory_13);
#line 290
if (c_rt_lib::check_true($memory_11)) {goto label_16;}
#line 290
$memory_11 = c_rt_lib::get_key_iter($memory_13);
#line 290
$memory_12 = c_rt_lib::hash_get_value($memory_9, $memory_11);
#line 291
$memory_14 = {};
#line 292
$memory_15 = hash::has_key($memory_3, $memory_11);
#line 292
$memory_15 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_15));
#line 292
if (c_rt_lib::check_true($memory_15)) {goto label_20;}
#line 293
$memory_16 = hash::get_value($memory_3, $memory_11);
#line 293
$memory_14 = $memory_16;
#line 293
undef($memory_16);
#line 294
goto label_20;
#line 294
label_20:
#line 294
undef($memory_15);
#line 295
$memory_15 = hash::has_key($memory_2, $memory_11);
#line 295
$memory_15 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_15));
#line 295
$memory_15 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_15));
#line 295
if (c_rt_lib::check_true($memory_15)) {goto label_22;}
#line 295
$memory_16 = c_rt_lib::to_nl(1);
#line 295
hash::set_value($memory_4, $memory_11, $memory_16);
#line 295
undef($memory_16);
#line 295
goto label_22;
#line 295
label_22:
#line 295
undef($memory_15);
#line 297
$memory_15 = $memory_5 . $memory_8;
#line 297
$memory_16 = 0;
#line 297
hash::set_value($memory_14, $memory_15, $memory_16);
#line 297
undef($memory_16);
#line 297
undef($memory_15);
#line 298
hash::set_value($memory_3, $memory_11, $memory_14);
#line 298
undef($memory_14);
#line 299
$memory_13 = c_rt_lib::next_iter($memory_13);
#line 299
goto label_18;
#line 299
label_16:
#line 299
undef($memory_11);
#line 299
undef($memory_12);
#line 299
undef($memory_13);
#line 300
$memory_10 = c_rt_lib::next_iter($memory_10);
#line 300
goto label_15;
#line 300
label_13:
#line 300
undef($memory_8);
#line 300
undef($memory_9);
#line 300
undef($memory_10);
#line 301
$memory_7 = c_rt_lib::next_iter($memory_7);
#line 301
goto label_12;
#line 301
label_10:
#line 301
undef($memory_5);
#line 301
undef($memory_6);
#line 301
undef($memory_7);
#line 302
$memory_7 = c_rt_lib::init_iter($memory_4);
#line 302
label_25:
#line 302
$memory_5 = c_rt_lib::is_end_hash($memory_7);
#line 302
if (c_rt_lib::check_true($memory_5)) {goto label_23;}
#line 302
$memory_5 = c_rt_lib::get_key_iter($memory_7);
#line 302
$memory_6 = c_rt_lib::hash_get_value($memory_4, $memory_5);
#line 303
$memory_8 = c_rt_lib::to_nl(1);
#line 303
hash::set_value($memory_2, $memory_5, $memory_8);
#line 303
undef($memory_8);
#line 304
post_processing_priv::set_non_math_fun_rec($memory_2, $memory_5, $memory_3);
#line 305
$memory_7 = c_rt_lib::next_iter($memory_7);
#line 305
goto label_25;
#line 305
label_23:
#line 305
undef($memory_5);
#line 305
undef($memory_6);
#line 305
undef($memory_7);
#line 306
undef($memory_0);
#line 306
undef($memory_1);
#line 306
undef($memory_3);
#line 306
undef($memory_4);
#line 306
return $memory_2;
#line 306
undef($memory_2);
#line 306
undef($memory_3);
#line 306
undef($memory_4);
#line 306
undef($memory_0);
#line 306
undef($memory_1);
#line 306
return;
}

sub post_processing_priv::set_non_math_fun_rec($$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];$memory_2 = $_[2];
#line 309
$memory_3 = hash::get_value($memory_0, $memory_1);
#line 309
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 309
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 309
if (c_rt_lib::check_true($memory_3)) {goto label_2;}
#line 309
undef($memory_1);
#line 309
undef($memory_2);
#line 309
undef($memory_3);
#line 309
$_[0] = $memory_0;return;
#line 309
goto label_2;
#line 309
label_2:
#line 309
undef($memory_3);
#line 310
$memory_3 = c_rt_lib::to_nl(0);
#line 310
hash::set_value($memory_0, $memory_1, $memory_3);
#line 310
undef($memory_3);
#line 311
$memory_3 = hash::has_key($memory_2, $memory_1);
#line 311
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 311
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 311
if (c_rt_lib::check_true($memory_3)) {goto label_4;}
#line 311
undef($memory_1);
#line 311
undef($memory_2);
#line 311
undef($memory_3);
#line 311
$_[0] = $memory_0;return;
#line 311
goto label_4;
#line 311
label_4:
#line 311
undef($memory_3);
#line 312
$memory_3 = hash::get_value($memory_2, $memory_1);
#line 313
$memory_6 = c_rt_lib::init_iter($memory_3);
#line 313
label_7:
#line 313
$memory_4 = c_rt_lib::is_end_hash($memory_6);
#line 313
if (c_rt_lib::check_true($memory_4)) {goto label_5;}
#line 313
$memory_4 = c_rt_lib::get_key_iter($memory_6);
#line 313
$memory_5 = c_rt_lib::hash_get_value($memory_3, $memory_4);
#line 314
post_processing_priv::set_non_math_fun_rec($memory_0, $memory_4, $memory_2);
#line 315
$memory_6 = c_rt_lib::next_iter($memory_6);
#line 315
goto label_7;
#line 315
label_5:
#line 315
undef($memory_4);
#line 315
undef($memory_5);
#line 315
undef($memory_6);
#line 315
undef($memory_3);
#line 315
undef($memory_1);
#line 315
undef($memory_2);
#line 315
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub post_processing_priv::set_mathfun_in_modules($$$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;my $memory_13;my $memory_14;my $memory_15;my $memory_16;my $memory_17;my $memory_18;my $memory_19;my $memory_20;my $memory_21;my $memory_22;my $memory_23;my $memory_24;my $memory_25;my $memory_26;my $memory_27;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];$memory_2 = $_[2];Scalar::Util::weaken($_[2]) if ref($_[2]);$memory_3 = $_[3];Scalar::Util::weaken($_[3]) if ref($_[3]);
#line 320
$memory_5 = $memory_0->{'math_fs'};
#line 320
$memory_4 = post_processing_priv::get_switched_func($memory_5, $memory_1);
#line 320
undef($memory_5);
#line 321
$memory_6 = $memory_0->{'fun_calls'};
#line 321
$memory_5 = post_processing_priv::get_called_switched($memory_6, $memory_4);
#line 321
undef($memory_6);
#line 322
$memory_7 = $memory_0->{'nl_asm'};
#line 322
$memory_6 = hash::keys($memory_7);
#line 322
undef($memory_7);
#line 322
$memory_8 = 0;
#line 322
$memory_9 = 1;
#line 322
$memory_10 = c_rt_lib::array_len($memory_6);
#line 322
label_3:
#line 322
$memory_11 = c_rt_lib::to_nl($memory_8 >= $memory_10);
#line 322
if (c_rt_lib::check_true($memory_11)) {goto label_1;}
#line 322
$memory_7 = $memory_6->[$memory_8];
#line 323
$memory_13 = $memory_0->{'nl_asm'};
#line 323
$memory_12 = hash::get_value($memory_13, $memory_7);
#line 323
undef($memory_13);
#line 324
$memory_13 = c_rt_lib::to_nl(0);
#line 325
$memory_15 = $memory_12->{'functions'};
#line 325
$memory_14 = array::len($memory_15);
#line 325
undef($memory_15);
#line 325
$memory_15 = 0;
#line 325
$memory_16 = 1;
#line 325
label_6:
#line 325
$memory_17 = c_rt_lib::to_nl($memory_15 >= $memory_14);
#line 325
if (c_rt_lib::check_true($memory_17)) {goto label_4;}
#line 326
$memory_18 = c_rt_lib::to_nl(0);
#line 327
$memory_19 = $memory_12->{'functions'};
#line 327
$memory_19 = $memory_19->[$memory_15];
#line 328
$memory_20 = $memory_12->{'module_name'};
#line 328
$memory_21 = $memory_19->{'access'};
#line 328
$memory_21 = c_rt_lib::ov_is($memory_21, 'pub');
#line 328
if (c_rt_lib::check_true($memory_21)) {goto label_8;}
#line 328
$memory_21 = "_priv::";
#line 328
goto label_7;
#line 328
label_8:
#line 328
$memory_21 = "::";
#line 328
label_7:
#line 328
$memory_20 = $memory_20 . $memory_21;
#line 328
undef($memory_21);
#line 328
$memory_21 = $memory_19->{'name'};
#line 328
$memory_20 = $memory_20 . $memory_21;
#line 328
undef($memory_21);
#line 329
$memory_21 = hash::get_value($memory_1, $memory_20);
#line 330
$memory_22 = $memory_21;
#line 330
$memory_23 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_22));
#line 330
if (c_rt_lib::check_true($memory_23)) {goto label_11;}
#line 330
$memory_22 = $memory_19->{'annotation'};
#line 330
$memory_22 = c_rt_lib::ov_is($memory_22, 'math');
#line 330
$memory_22 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_22));
#line 330
label_11:
#line 330
undef($memory_23);
#line 330
$memory_22 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_22));
#line 330
if (c_rt_lib::check_true($memory_22)) {goto label_10;}
#line 331
$memory_23 = c_rt_lib::ov_mk_none('math');
#line 331
$memory_24 = "functions";
#line 331
$memory_24 = c_rt_lib::get_ref_hash($memory_12, $memory_24);
#line 331
$memory_25 = c_rt_lib::get_ref_arr($memory_24, $memory_15);
#line 331
$memory_26 = $memory_23;
#line 331
 if (c_rt_lib::get_hashcount($memory_25) > 1) {$memory_25 = {%{$memory_25}};}$memory_25->{'annotation'} = $memory_26;
#line 331
c_rt_lib::set_ref_arr($memory_24, $memory_15, $memory_25);
#line 331
$memory_27 = "functions";
#line 331
c_rt_lib::set_ref_hash($memory_12, $memory_27, $memory_24);
#line 331
undef($memory_27);
#line 331
undef($memory_23);
#line 331
undef($memory_24);
#line 331
undef($memory_25);
#line 331
undef($memory_26);
#line 332
$memory_23 = c_rt_lib::to_nl(1);
#line 332
$memory_18 = $memory_23;
#line 332
undef($memory_23);
#line 333
goto label_12;
#line 333
label_10:
#line 333
$memory_22 = $memory_21;
#line 333
$memory_22 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_22));
#line 333
$memory_23 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_22));
#line 333
if (c_rt_lib::check_true($memory_23)) {goto label_13;}
#line 333
$memory_22 = $memory_19->{'annotation'};
#line 333
$memory_22 = c_rt_lib::ov_is($memory_22, 'state');
#line 333
$memory_22 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_22));
#line 333
label_13:
#line 333
undef($memory_23);
#line 333
$memory_22 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_22));
#line 333
if (c_rt_lib::check_true($memory_22)) {goto label_12;}
#line 334
$memory_23 = c_rt_lib::ov_mk_none('state');
#line 334
$memory_24 = "functions";
#line 334
$memory_24 = c_rt_lib::get_ref_hash($memory_12, $memory_24);
#line 334
$memory_25 = c_rt_lib::get_ref_arr($memory_24, $memory_15);
#line 334
$memory_26 = $memory_23;
#line 334
 if (c_rt_lib::get_hashcount($memory_25) > 1) {$memory_25 = {%{$memory_25}};}$memory_25->{'annotation'} = $memory_26;
#line 334
c_rt_lib::set_ref_arr($memory_24, $memory_15, $memory_25);
#line 334
$memory_27 = "functions";
#line 334
c_rt_lib::set_ref_hash($memory_12, $memory_27, $memory_24);
#line 334
undef($memory_27);
#line 334
undef($memory_23);
#line 334
undef($memory_24);
#line 334
undef($memory_25);
#line 334
undef($memory_26);
#line 335
$memory_23 = c_rt_lib::to_nl(1);
#line 335
$memory_18 = $memory_23;
#line 335
undef($memory_23);
#line 336
goto label_12;
#line 336
label_12:
#line 336
undef($memory_22);
#line 337
$memory_22 = hash::has_key($memory_5, $memory_20);
#line 337
$memory_22 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_22));
#line 337
if (c_rt_lib::check_true($memory_22)) {goto label_15;}
#line 337
$memory_23 = c_rt_lib::to_nl(1);
#line 337
$memory_18 = $memory_23;
#line 337
undef($memory_23);
#line 337
goto label_15;
#line 337
label_15:
#line 337
undef($memory_22);
#line 338
$memory_22 = $memory_18;
#line 338
$memory_22 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_22));
#line 338
if (c_rt_lib::check_true($memory_22)) {goto label_17;}
#line 339
$memory_23 = "";
#line 339
hash::set_value($memory_2, $memory_20, $memory_23);
#line 339
undef($memory_23);
#line 340
$memory_23 = c_rt_lib::to_nl(1);
#line 340
$memory_13 = $memory_23;
#line 340
undef($memory_23);
#line 341
goto label_17;
#line 341
label_17:
#line 341
undef($memory_22);
#line 341
undef($memory_18);
#line 341
undef($memory_19);
#line 341
undef($memory_20);
#line 341
undef($memory_21);
#line 342
$memory_15 = $memory_15 + $memory_16;
#line 342
goto label_6;
#line 342
label_4:
#line 342
undef($memory_14);
#line 342
undef($memory_15);
#line 342
undef($memory_16);
#line 342
undef($memory_17);
#line 343
$memory_14 = $memory_13;
#line 343
$memory_14 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_14));
#line 343
$memory_14 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_14));
#line 343
if (c_rt_lib::check_true($memory_14)) {goto label_19;}
#line 343
undef($memory_12);
#line 343
undef($memory_13);
#line 343
undef($memory_14);
#line 343
goto label_2;
#line 343
goto label_19;
#line 343
label_19:
#line 343
undef($memory_14);
#line 344
hash::set_value($memory_3, $memory_7, $memory_12);
#line 345
$memory_14 = "nl_asm";
#line 345
$memory_14 = c_rt_lib::get_ref_hash($memory_0, $memory_14);
#line 345
hash::set_value($memory_14, $memory_7, $memory_12);
#line 345
$memory_15 = "nl_asm";
#line 345
c_rt_lib::set_ref_hash($memory_0, $memory_15, $memory_14);
#line 345
undef($memory_15);
#line 345
undef($memory_14);
#line 345
undef($memory_12);
#line 345
undef($memory_13);
#line 345
label_2:
#line 346
$memory_8 = $memory_8 + $memory_9;
#line 346
goto label_3;
#line 346
label_1:
#line 346
undef($memory_6);
#line 346
undef($memory_7);
#line 346
undef($memory_8);
#line 346
undef($memory_9);
#line 346
undef($memory_10);
#line 346
undef($memory_11);
#line 346
undef($memory_4);
#line 346
undef($memory_5);
#line 346
undef($memory_1);
#line 346
$_[0] = $memory_0;$_[2] = $memory_2;$_[3] = $memory_3;return;
$_[0] = $memory_0;$_[2] = $memory_2;$_[3] = $memory_3;}

sub post_processing_priv::set_const_reg($$$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];$memory_2 = $_[2];$memory_3 = $_[3];
#line 349
$memory_4 = [];
#line 350
$memory_5 = 0;
#line 350
$memory_6 = 1;
#line 350
label_3:
#line 350
$memory_7 = c_rt_lib::to_nl($memory_5 >= $memory_3);
#line 350
if (c_rt_lib::check_true($memory_7)) {goto label_1;}
#line 351
$memory_8 = c_rt_lib::ov_mk_none('no');
#line 351
array::push($memory_4, $memory_8);
#line 351
undef($memory_8);
#line 352
$memory_5 = $memory_5 + $memory_6;
#line 352
goto label_3;
#line 352
label_1:
#line 352
undef($memory_5);
#line 352
undef($memory_6);
#line 352
undef($memory_7);
#line 353
$memory_5 = [];
#line 354
$memory_7 = 0;
#line 354
$memory_8 = [];
#line 354
$memory_6 = {was => $memory_7,regs => $memory_8,};
#line 354
undef($memory_7);
#line 354
undef($memory_8);
#line 355
$memory_7 = array::len($memory_0);
#line 355
$memory_8 = 0;
#line 355
$memory_9 = 1;
#line 355
label_6:
#line 355
$memory_10 = c_rt_lib::to_nl($memory_8 >= $memory_7);
#line 355
if (c_rt_lib::check_true($memory_10)) {goto label_4;}
#line 356
array::push($memory_5, $memory_6);
#line 357
$memory_8 = $memory_8 + $memory_9;
#line 357
goto label_6;
#line 357
label_4:
#line 357
undef($memory_7);
#line 357
undef($memory_8);
#line 357
undef($memory_9);
#line 357
undef($memory_10);
#line 358
$memory_7 = array::len($memory_0);
#line 358
$memory_8 = 0;
#line 358
$memory_7 = c_rt_lib::to_nl($memory_7 == $memory_8);
#line 358
undef($memory_8);
#line 358
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 358
if (c_rt_lib::check_true($memory_7)) {goto label_8;}
#line 358
$memory_8 = [];
#line 358
die(dfile::ssave($memory_8));
#line 358
goto label_8;
#line 358
label_8:
#line 358
undef($memory_7);
#line 358
undef($memory_8);
#line 359
$memory_7 = 0;
#line 359
post_processing_priv::set_const_block($memory_7, $memory_0, $memory_1, $memory_5, $memory_2, $memory_4);
#line 359
undef($memory_7);
#line 359
undef($memory_4);
#line 359
undef($memory_5);
#line 359
undef($memory_6);
#line 359
undef($memory_1);
#line 359
undef($memory_2);
#line 359
undef($memory_3);
#line 359
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub post_processing_priv::evaluate_const_in_blocks($$$$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];$memory_2 = $_[2];$memory_3 = $_[3];$memory_4 = $_[4];
#line 363
$memory_5 = [];
#line 364
$memory_6 = $memory_2->{'reg_size'};
#line 364
$memory_7 = 0;
#line 364
$memory_8 = 1;
#line 364
label_3:
#line 364
$memory_9 = c_rt_lib::to_nl($memory_7 >= $memory_6);
#line 364
if (c_rt_lib::check_true($memory_9)) {goto label_1;}
#line 365
$memory_10 = c_rt_lib::ov_mk_none('no');
#line 365
array::push($memory_5, $memory_10);
#line 365
undef($memory_10);
#line 366
$memory_7 = $memory_7 + $memory_8;
#line 366
goto label_3;
#line 366
label_1:
#line 366
undef($memory_6);
#line 366
undef($memory_7);
#line 366
undef($memory_8);
#line 366
undef($memory_9);
#line 367
$memory_6 = [];
#line 368
$memory_8 = 0;
#line 368
$memory_9 = [];
#line 368
$memory_7 = {was => $memory_8,regs => $memory_9,};
#line 368
undef($memory_8);
#line 368
undef($memory_9);
#line 369
$memory_8 = array::len($memory_0);
#line 369
$memory_9 = 0;
#line 369
$memory_10 = 1;
#line 369
label_6:
#line 369
$memory_11 = c_rt_lib::to_nl($memory_9 >= $memory_8);
#line 369
if (c_rt_lib::check_true($memory_11)) {goto label_4;}
#line 370
array::push($memory_6, $memory_7);
#line 371
$memory_9 = $memory_9 + $memory_10;
#line 371
goto label_6;
#line 371
label_4:
#line 371
undef($memory_8);
#line 371
undef($memory_9);
#line 371
undef($memory_10);
#line 371
undef($memory_11);
#line 372
$memory_8 = array::len($memory_0);
#line 372
$memory_9 = 0;
#line 372
$memory_8 = c_rt_lib::to_nl($memory_8 == $memory_9);
#line 372
undef($memory_9);
#line 372
$memory_8 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 372
if (c_rt_lib::check_true($memory_8)) {goto label_8;}
#line 372
$memory_9 = [];
#line 372
die(dfile::ssave($memory_9));
#line 372
goto label_8;
#line 372
label_8:
#line 372
undef($memory_8);
#line 372
undef($memory_9);
#line 373
$memory_8 = $memory_0;
#line 375
$memory_9 = 0;
#line 375
post_processing_priv::set_const_block_val($memory_9, $memory_0, $memory_8, $memory_1, $memory_6, $memory_4, $memory_5, $memory_2, $memory_3);
#line 375
undef($memory_9);
#line 376
$memory_0 = $memory_8;
#line 376
undef($memory_5);
#line 376
undef($memory_6);
#line 376
undef($memory_7);
#line 376
undef($memory_8);
#line 376
undef($memory_1);
#line 376
undef($memory_2);
#line 376
undef($memory_3);
#line 376
undef($memory_4);
#line 376
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub post_processing_priv::check_sub($$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];$memory_2 = $_[2];Scalar::Util::weaken($_[2]) if ref($_[2]);
#line 379
$memory_3 = c_rt_lib::ov_is($memory_1, 'no');
#line 379
if (c_rt_lib::check_true($memory_3)) {goto label_2;}
#line 381
$memory_3 = c_rt_lib::ov_is($memory_1, 'yes');
#line 381
if (c_rt_lib::check_true($memory_3)) {goto label_3;}
#line 381
$memory_3 = "NOMATCHALERT";
#line 381
$memory_3 = [$memory_3,$memory_1];
#line 381
die(dfile::ssave($memory_3));
#line 379
label_2:
#line 380
$memory_4 = c_rt_lib::ov_mk_none('no');
#line 380
$memory_0 = $memory_4;
#line 380
undef($memory_4);
#line 381
goto label_1;
#line 381
label_3:
#line 381
$memory_4 = c_rt_lib::ov_as($memory_1, 'yes');
#line 382
array::push($memory_2, $memory_4);
#line 382
undef($memory_4);
#line 383
goto label_1;
#line 383
label_1:
#line 383
undef($memory_3);
#line 383
undef($memory_1);
#line 383
$_[0] = $memory_0;$_[2] = $memory_2;return;
$_[0] = $memory_0;$_[2] = $memory_2;}

sub post_processing_priv::check_sub_val($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];
#line 386
$memory_2 = $memory_1;
#line 386
$memory_2 = c_rt_lib::ov_is($memory_2, 'no');
#line 386
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 386
if (c_rt_lib::check_true($memory_2)) {goto label_2;}
#line 387
$memory_3 = c_rt_lib::ov_mk_none('no');
#line 387
$memory_0 = $memory_3;
#line 387
undef($memory_3);
#line 388
goto label_2;
#line 388
label_2:
#line 388
undef($memory_2);
#line 388
undef($memory_1);
#line 388
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub post_processing_priv::set_const_block($$$$$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;my $memory_13;my $memory_14;my $memory_15;my $memory_16;my $memory_17;my $memory_18;my $memory_19;my $memory_20;my $memory_21;my $memory_22;my $memory_23;my $memory_24;my $memory_25;my $memory_26;my $memory_27;my $memory_28;$memory_0 = $_[0];$memory_1 = $_[1];Scalar::Util::weaken($_[1]) if ref($_[1]);$memory_2 = $_[2];$memory_3 = $_[3];Scalar::Util::weaken($_[3]) if ref($_[3]);$memory_4 = $_[4];$memory_5 = $_[5];
#line 392
$memory_6 = $memory_1->[$memory_0];
#line 393
$memory_7 = $memory_3->[$memory_0];
#line 393
$memory_7 = $memory_7->{'was'};
#line 393
$memory_8 = 0;
#line 393
$memory_7 = c_rt_lib::to_nl($memory_7 > $memory_8);
#line 393
undef($memory_8);
#line 393
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 393
if (c_rt_lib::check_true($memory_7)) {goto label_2;}
#line 394
$memory_8 = c_rt_lib::to_nl(0);
#line 395
$memory_9 = $memory_3->[$memory_0];
#line 395
$memory_9 = $memory_9->{'regs'};
#line 396
$memory_10 = array::len($memory_5);
#line 396
$memory_11 = 0;
#line 396
$memory_12 = 1;
#line 396
label_5:
#line 396
$memory_13 = c_rt_lib::to_nl($memory_11 >= $memory_10);
#line 396
if (c_rt_lib::check_true($memory_13)) {goto label_3;}
#line 397
$memory_14 = $memory_9->[$memory_11];
#line 397
$memory_14 = c_rt_lib::ov_is($memory_14, 'no');
#line 397
$memory_14 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_14));
#line 397
if (c_rt_lib::check_true($memory_14)) {goto label_7;}
#line 398
$memory_15 = c_rt_lib::ov_mk_none('no');
#line 398
$memory_16 = $memory_15;
#line 398
 if (c_rt_lib::get_arrcount($memory_5) > 1) {$memory_5 = [@{$memory_5}];}$memory_5->[$memory_11] = $memory_16;
#line 398
undef($memory_15);
#line 398
undef($memory_16);
#line 399
undef($memory_14);
#line 399
goto label_4;
#line 400
goto label_6;
#line 400
label_7:
#line 401
$memory_15 = $memory_5->[$memory_11];
#line 401
$memory_15 = c_rt_lib::ov_is($memory_15, 'yes');
#line 401
$memory_15 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_15));
#line 401
if (c_rt_lib::check_true($memory_15)) {goto label_9;}
#line 402
$memory_16 = $memory_5->[$memory_11];
#line 402
$memory_16 = c_rt_lib::ov_as($memory_16, 'yes');
#line 403
$memory_17 = $memory_9->[$memory_11];
#line 403
$memory_17 = c_rt_lib::ov_as($memory_17, 'yes');
#line 404
$memory_18 = c_rt_lib::to_nl($memory_16 == $memory_17);
#line 404
$memory_18 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_18));
#line 404
if (c_rt_lib::check_true($memory_18)) {goto label_11;}
#line 404
undef($memory_14);
#line 404
undef($memory_15);
#line 404
undef($memory_16);
#line 404
undef($memory_17);
#line 404
undef($memory_18);
#line 404
goto label_4;
#line 404
goto label_11;
#line 404
label_11:
#line 404
undef($memory_18);
#line 404
undef($memory_16);
#line 404
undef($memory_17);
#line 405
goto label_9;
#line 405
label_9:
#line 405
undef($memory_15);
#line 406
$memory_15 = c_rt_lib::ov_mk_none('no');
#line 406
$memory_16 = $memory_15;
#line 406
 if (c_rt_lib::get_arrcount($memory_5) > 1) {$memory_5 = [@{$memory_5}];}$memory_5->[$memory_11] = $memory_16;
#line 406
undef($memory_15);
#line 406
undef($memory_16);
#line 407
$memory_15 = c_rt_lib::to_nl(1);
#line 407
$memory_8 = $memory_15;
#line 407
undef($memory_15);
#line 408
goto label_6;
#line 408
label_6:
#line 408
undef($memory_14);
#line 408
label_4:
#line 409
$memory_11 = $memory_11 + $memory_12;
#line 409
goto label_5;
#line 409
label_3:
#line 409
undef($memory_10);
#line 409
undef($memory_11);
#line 409
undef($memory_12);
#line 409
undef($memory_13);
#line 410
$memory_10 = $memory_8;
#line 410
$memory_10 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_10));
#line 410
$memory_10 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_10));
#line 410
if (c_rt_lib::check_true($memory_10)) {goto label_13;}
#line 410
undef($memory_0);
#line 410
undef($memory_2);
#line 410
undef($memory_4);
#line 410
undef($memory_5);
#line 410
undef($memory_6);
#line 410
undef($memory_7);
#line 410
undef($memory_8);
#line 410
undef($memory_9);
#line 410
undef($memory_10);
#line 410
$_[1] = $memory_1;$_[3] = $memory_3;return;
#line 410
goto label_13;
#line 410
label_13:
#line 410
undef($memory_10);
#line 411
$memory_10 = c_rt_lib::get_ref_arr($memory_3, $memory_0);
#line 411
$memory_11 = $memory_5;
#line 411
 if (c_rt_lib::get_hashcount($memory_10) > 1) {$memory_10 = {%{$memory_10}};}$memory_10->{'regs'} = $memory_11;
#line 411
c_rt_lib::set_ref_arr($memory_3, $memory_0, $memory_10);
#line 411
undef($memory_10);
#line 411
undef($memory_11);
#line 411
undef($memory_8);
#line 411
undef($memory_9);
#line 412
goto label_1;
#line 412
label_2:
#line 413
$memory_8 = c_rt_lib::get_ref_arr($memory_3, $memory_0);
#line 413
$memory_9 = $memory_5;
#line 413
 if (c_rt_lib::get_hashcount($memory_8) > 1) {$memory_8 = {%{$memory_8}};}$memory_8->{'regs'} = $memory_9;
#line 413
c_rt_lib::set_ref_arr($memory_3, $memory_0, $memory_8);
#line 413
undef($memory_8);
#line 413
undef($memory_9);
#line 414
goto label_1;
#line 414
label_1:
#line 414
undef($memory_7);
#line 415
$memory_7 = c_rt_lib::get_ref_arr($memory_3, $memory_0);
#line 415
$memory_8 = "was";
#line 415
$memory_8 = c_rt_lib::get_ref_hash($memory_7, $memory_8);
#line 415
$memory_9 = 1;
#line 415
$memory_8 = $memory_8 + $memory_9;
#line 415
$memory_10 = "was";
#line 415
c_rt_lib::set_ref_hash($memory_7, $memory_10, $memory_8);
#line 415
c_rt_lib::set_ref_arr($memory_3, $memory_0, $memory_7);
#line 415
undef($memory_10);
#line 415
undef($memory_7);
#line 415
undef($memory_8);
#line 415
undef($memory_9);
#line 416
$memory_7 = $memory_6->{'cmds'};
#line 417
$memory_8 = array::len($memory_7);
#line 417
$memory_9 = 0;
#line 417
$memory_10 = 1;
#line 417
label_16:
#line 417
$memory_11 = c_rt_lib::to_nl($memory_9 >= $memory_8);
#line 417
if (c_rt_lib::check_true($memory_11)) {goto label_14;}
#line 418
$memory_12 = [];
#line 419
$memory_13 = [];
#line 420
$memory_14 = $memory_6->{'from'};
#line 420
$memory_14 = $memory_9 + $memory_14;
#line 420
$memory_14 = c_rt_lib::ov_mk_arg('yes', $memory_14);
#line 421
$memory_15 = $memory_7->[$memory_9];
#line 421
$memory_15 = $memory_15->{'cmd'};
#line 421
$memory_16 = c_rt_lib::ov_is($memory_15, 'arr_decl');
#line 421
if (c_rt_lib::check_true($memory_16)) {goto label_18;}
#line 427
$memory_16 = c_rt_lib::ov_is($memory_15, 'hash_decl');
#line 427
if (c_rt_lib::check_true($memory_16)) {goto label_19;}
#line 433
$memory_16 = c_rt_lib::ov_is($memory_15, 'call');
#line 433
if (c_rt_lib::check_true($memory_16)) {goto label_20;}
#line 458
$memory_16 = c_rt_lib::ov_is($memory_15, 'una_op');
#line 458
if (c_rt_lib::check_true($memory_16)) {goto label_21;}
#line 462
$memory_16 = c_rt_lib::ov_is($memory_15, 'bin_op');
#line 462
if (c_rt_lib::check_true($memory_16)) {goto label_22;}
#line 467
$memory_16 = c_rt_lib::ov_is($memory_15, 'ov_is');
#line 467
if (c_rt_lib::check_true($memory_16)) {goto label_23;}
#line 471
$memory_16 = c_rt_lib::ov_is($memory_15, 'ov_as');
#line 471
if (c_rt_lib::check_true($memory_16)) {goto label_24;}
#line 475
$memory_16 = c_rt_lib::ov_is($memory_15, 'func');
#line 475
if (c_rt_lib::check_true($memory_16)) {goto label_25;}
#line 478
$memory_16 = c_rt_lib::ov_is($memory_15, 'move');
#line 478
if (c_rt_lib::check_true($memory_16)) {goto label_26;}
#line 482
$memory_16 = c_rt_lib::ov_is($memory_15, 'load_const');
#line 482
if (c_rt_lib::check_true($memory_16)) {goto label_27;}
#line 485
$memory_16 = c_rt_lib::ov_is($memory_15, 'get_frm_idx');
#line 485
if (c_rt_lib::check_true($memory_16)) {goto label_28;}
#line 490
$memory_16 = c_rt_lib::ov_is($memory_15, 'set_at_idx');
#line 490
if (c_rt_lib::check_true($memory_16)) {goto label_29;}
#line 496
$memory_16 = c_rt_lib::ov_is($memory_15, 'get_val');
#line 496
if (c_rt_lib::check_true($memory_16)) {goto label_30;}
#line 500
$memory_16 = c_rt_lib::ov_is($memory_15, 'set_val');
#line 500
if (c_rt_lib::check_true($memory_16)) {goto label_31;}
#line 505
$memory_16 = c_rt_lib::ov_is($memory_15, 'ov_mk');
#line 505
if (c_rt_lib::check_true($memory_16)) {goto label_32;}
#line 511
$memory_16 = c_rt_lib::ov_is($memory_15, 'return');
#line 511
if (c_rt_lib::check_true($memory_16)) {goto label_33;}
#line 515
$memory_16 = c_rt_lib::ov_is($memory_15, 'die');
#line 515
if (c_rt_lib::check_true($memory_16)) {goto label_34;}
#line 517
$memory_16 = c_rt_lib::ov_is($memory_15, 'prt_lbl');
#line 517
if (c_rt_lib::check_true($memory_16)) {goto label_35;}
#line 519
$memory_16 = c_rt_lib::ov_is($memory_15, 'if_goto');
#line 519
if (c_rt_lib::check_true($memory_16)) {goto label_36;}
#line 521
$memory_16 = c_rt_lib::ov_is($memory_15, 'goto');
#line 521
if (c_rt_lib::check_true($memory_16)) {goto label_37;}
#line 523
$memory_16 = c_rt_lib::ov_is($memory_15, 'clear');
#line 523
if (c_rt_lib::check_true($memory_16)) {goto label_38;}
#line 523
$memory_16 = "NOMATCHALERT";
#line 523
$memory_16 = [$memory_16,$memory_15];
#line 523
die(dfile::ssave($memory_16));
#line 421
label_18:
#line 421
$memory_17 = c_rt_lib::ov_as($memory_15, 'arr_decl');
#line 422
$memory_18 = $memory_17->{'src'};
#line 422
$memory_20 = 0;
#line 422
$memory_21 = 1;
#line 422
$memory_22 = c_rt_lib::array_len($memory_18);
#line 422
label_41:
#line 422
$memory_23 = c_rt_lib::to_nl($memory_20 >= $memory_22);
#line 422
if (c_rt_lib::check_true($memory_23)) {goto label_39;}
#line 422
$memory_19 = $memory_18->[$memory_20];
#line 423
$memory_24 = $memory_5->[$memory_19];
#line 423
post_processing_priv::check_sub($memory_14, $memory_24, $memory_12);
#line 423
undef($memory_24);
#line 424
$memory_20 = $memory_20 + $memory_21;
#line 424
goto label_41;
#line 424
label_39:
#line 424
undef($memory_18);
#line 424
undef($memory_19);
#line 424
undef($memory_20);
#line 424
undef($memory_21);
#line 424
undef($memory_22);
#line 424
undef($memory_23);
#line 425
$memory_18 = $memory_17->{'dest'};
#line 425
$memory_19 = "";
#line 425
$memory_18 = c_rt_lib::to_nl($memory_18 eq $memory_19);
#line 425
undef($memory_19);
#line 425
$memory_18 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_18));
#line 425
$memory_18 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_18));
#line 425
if (c_rt_lib::check_true($memory_18)) {goto label_43;}
#line 425
$memory_20 = $memory_17->{'dest'};
#line 425
$memory_19 = $memory_14;
#line 425
 if (c_rt_lib::get_arrcount($memory_5) > 1) {$memory_5 = [@{$memory_5}];}$memory_5->[$memory_20] = $memory_19;
#line 425
undef($memory_19);
#line 425
undef($memory_20);
#line 425
goto label_43;
#line 425
label_43:
#line 425
undef($memory_18);
#line 426
$memory_18 = $memory_17->{'dest'};
#line 426
array::push($memory_13, $memory_18);
#line 426
undef($memory_18);
#line 426
undef($memory_17);
#line 427
goto label_17;
#line 427
label_19:
#line 427
$memory_17 = c_rt_lib::ov_as($memory_15, 'hash_decl');
#line 428
$memory_18 = $memory_17->{'src'};
#line 428
$memory_20 = 0;
#line 428
$memory_21 = 1;
#line 428
$memory_22 = c_rt_lib::array_len($memory_18);
#line 428
label_46:
#line 428
$memory_23 = c_rt_lib::to_nl($memory_20 >= $memory_22);
#line 428
if (c_rt_lib::check_true($memory_23)) {goto label_44;}
#line 428
$memory_19 = $memory_18->[$memory_20];
#line 429
$memory_25 = $memory_19->{'val'};
#line 429
$memory_24 = $memory_5->[$memory_25];
#line 429
undef($memory_25);
#line 429
post_processing_priv::check_sub($memory_14, $memory_24, $memory_12);
#line 429
undef($memory_24);
#line 430
$memory_20 = $memory_20 + $memory_21;
#line 430
goto label_46;
#line 430
label_44:
#line 430
undef($memory_18);
#line 430
undef($memory_19);
#line 430
undef($memory_20);
#line 430
undef($memory_21);
#line 430
undef($memory_22);
#line 430
undef($memory_23);
#line 431
$memory_18 = $memory_17->{'dest'};
#line 431
$memory_19 = "";
#line 431
$memory_18 = c_rt_lib::to_nl($memory_18 eq $memory_19);
#line 431
undef($memory_19);
#line 431
$memory_18 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_18));
#line 431
$memory_18 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_18));
#line 431
if (c_rt_lib::check_true($memory_18)) {goto label_48;}
#line 431
$memory_20 = $memory_17->{'dest'};
#line 431
$memory_19 = $memory_14;
#line 431
 if (c_rt_lib::get_arrcount($memory_5) > 1) {$memory_5 = [@{$memory_5}];}$memory_5->[$memory_20] = $memory_19;
#line 431
undef($memory_19);
#line 431
undef($memory_20);
#line 431
goto label_48;
#line 431
label_48:
#line 431
undef($memory_18);
#line 432
$memory_18 = $memory_17->{'dest'};
#line 432
array::push($memory_13, $memory_18);
#line 432
undef($memory_18);
#line 432
undef($memory_17);
#line 433
goto label_17;
#line 433
label_20:
#line 433
$memory_17 = c_rt_lib::ov_as($memory_15, 'call');
#line 434
$memory_18 = $memory_17->{'mod'};
#line 434
$memory_19 = "";
#line 434
$memory_18 = c_rt_lib::to_nl($memory_18 eq $memory_19);
#line 434
undef($memory_19);
#line 434
if (c_rt_lib::check_true($memory_18)) {goto label_50;}
#line 434
$memory_18 = $memory_17->{'mod'};
#line 434
goto label_49;
#line 434
label_50:
#line 434
$memory_18 = "_priv";
#line 434
$memory_18 = $memory_4 . $memory_18;
#line 434
label_49:
#line 434
$memory_19 = "::";
#line 434
$memory_18 = $memory_18 . $memory_19;
#line 434
undef($memory_19);
#line 434
$memory_19 = $memory_17->{'fun_name'};
#line 434
$memory_18 = $memory_18 . $memory_19;
#line 434
undef($memory_19);
#line 435
$memory_19 = hash::has_key($memory_2, $memory_18);
#line 435
$memory_19 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_19));
#line 435
if (c_rt_lib::check_true($memory_19)) {goto label_52;}
#line 436
$memory_20 = hash::get_value($memory_2, $memory_18);
#line 436
$memory_20 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_20));
#line 436
$memory_20 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_20));
#line 436
if (c_rt_lib::check_true($memory_20)) {goto label_54;}
#line 436
$memory_21 = c_rt_lib::ov_mk_none('no');
#line 436
$memory_14 = $memory_21;
#line 436
undef($memory_21);
#line 436
goto label_54;
#line 436
label_54:
#line 436
undef($memory_20);
#line 437
goto label_51;
#line 437
label_52:
#line 438
$memory_20 = c_rt_lib::ov_mk_none('no');
#line 438
$memory_14 = $memory_20;
#line 438
undef($memory_20);
#line 439
goto label_51;
#line 439
label_51:
#line 439
undef($memory_19);
#line 440
$memory_19 = $memory_14;
#line 440
$memory_19 = c_rt_lib::ov_is($memory_19, 'yes');
#line 440
$memory_19 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_19));
#line 440
if (c_rt_lib::check_true($memory_19)) {goto label_56;}
#line 441
$memory_20 = $memory_17->{'args'};
#line 441
$memory_22 = 0;
#line 441
$memory_23 = 1;
#line 441
$memory_24 = c_rt_lib::array_len($memory_20);
#line 441
label_59:
#line 441
$memory_25 = c_rt_lib::to_nl($memory_22 >= $memory_24);
#line 441
if (c_rt_lib::check_true($memory_25)) {goto label_57;}
#line 441
$memory_21 = $memory_20->[$memory_22];
#line 442
$memory_26 = c_rt_lib::ov_is($memory_21, 'val');
#line 442
if (c_rt_lib::check_true($memory_26)) {goto label_61;}
#line 444
$memory_26 = c_rt_lib::ov_is($memory_21, 'ref');
#line 444
if (c_rt_lib::check_true($memory_26)) {goto label_62;}
#line 444
$memory_26 = "NOMATCHALERT";
#line 444
$memory_26 = [$memory_26,$memory_21];
#line 444
die(dfile::ssave($memory_26));
#line 442
label_61:
#line 442
$memory_27 = c_rt_lib::ov_as($memory_21, 'val');
#line 443
$memory_28 = $memory_5->[$memory_27];
#line 443
post_processing_priv::check_sub($memory_14, $memory_28, $memory_12);
#line 443
undef($memory_28);
#line 443
undef($memory_27);
#line 444
goto label_60;
#line 444
label_62:
#line 444
$memory_27 = c_rt_lib::ov_as($memory_21, 'ref');
#line 445
$memory_28 = $memory_5->[$memory_27];
#line 445
post_processing_priv::check_sub($memory_14, $memory_28, $memory_12);
#line 445
undef($memory_28);
#line 445
undef($memory_27);
#line 446
goto label_60;
#line 446
label_60:
#line 446
undef($memory_26);
#line 447
$memory_22 = $memory_22 + $memory_23;
#line 447
goto label_59;
#line 447
label_57:
#line 447
undef($memory_20);
#line 447
undef($memory_21);
#line 447
undef($memory_22);
#line 447
undef($memory_23);
#line 447
undef($memory_24);
#line 447
undef($memory_25);
#line 448
goto label_56;
#line 448
label_56:
#line 448
undef($memory_19);
#line 449
$memory_19 = $memory_17->{'args'};
#line 449
$memory_21 = 0;
#line 449
$memory_22 = 1;
#line 449
$memory_23 = c_rt_lib::array_len($memory_19);
#line 449
label_65:
#line 449
$memory_24 = c_rt_lib::to_nl($memory_21 >= $memory_23);
#line 449
if (c_rt_lib::check_true($memory_24)) {goto label_63;}
#line 449
$memory_20 = $memory_19->[$memory_21];
#line 450
$memory_25 = c_rt_lib::ov_is($memory_20, 'val');
#line 450
if (c_rt_lib::check_true($memory_25)) {goto label_67;}
#line 451
$memory_25 = c_rt_lib::ov_is($memory_20, 'ref');
#line 451
if (c_rt_lib::check_true($memory_25)) {goto label_68;}
#line 451
$memory_25 = "NOMATCHALERT";
#line 451
$memory_25 = [$memory_25,$memory_20];
#line 451
die(dfile::ssave($memory_25));
#line 450
label_67:
#line 450
$memory_26 = c_rt_lib::ov_as($memory_20, 'val');
#line 450
undef($memory_26);
#line 451
goto label_66;
#line 451
label_68:
#line 451
$memory_26 = c_rt_lib::ov_as($memory_20, 'ref');
#line 452
$memory_27 = $memory_14;
#line 452
 if (c_rt_lib::get_arrcount($memory_5) > 1) {$memory_5 = [@{$memory_5}];}$memory_5->[$memory_26] = $memory_27;
#line 452
undef($memory_27);
#line 453
array::push($memory_13, $memory_26);
#line 453
undef($memory_26);
#line 454
goto label_66;
#line 454
label_66:
#line 454
undef($memory_25);
#line 455
$memory_21 = $memory_21 + $memory_22;
#line 455
goto label_65;
#line 455
label_63:
#line 455
undef($memory_19);
#line 455
undef($memory_20);
#line 455
undef($memory_21);
#line 455
undef($memory_22);
#line 455
undef($memory_23);
#line 455
undef($memory_24);
#line 456
$memory_19 = $memory_17->{'dest'};
#line 456
$memory_20 = "";
#line 456
$memory_19 = c_rt_lib::to_nl($memory_19 eq $memory_20);
#line 456
undef($memory_20);
#line 456
$memory_19 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_19));
#line 456
$memory_19 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_19));
#line 456
if (c_rt_lib::check_true($memory_19)) {goto label_70;}
#line 456
$memory_21 = $memory_17->{'dest'};
#line 456
$memory_20 = $memory_14;
#line 456
 if (c_rt_lib::get_arrcount($memory_5) > 1) {$memory_5 = [@{$memory_5}];}$memory_5->[$memory_21] = $memory_20;
#line 456
undef($memory_20);
#line 456
undef($memory_21);
#line 456
goto label_70;
#line 456
label_70:
#line 456
undef($memory_19);
#line 457
$memory_19 = $memory_17->{'dest'};
#line 457
array::push($memory_13, $memory_19);
#line 457
undef($memory_19);
#line 457
undef($memory_18);
#line 457
undef($memory_17);
#line 458
goto label_17;
#line 458
label_21:
#line 458
$memory_17 = c_rt_lib::ov_as($memory_15, 'una_op');
#line 459
$memory_19 = $memory_17->{'src'};
#line 459
$memory_18 = $memory_5->[$memory_19];
#line 459
undef($memory_19);
#line 459
post_processing_priv::check_sub($memory_14, $memory_18, $memory_12);
#line 459
undef($memory_18);
#line 460
$memory_18 = $memory_17->{'dest'};
#line 460
$memory_19 = "";
#line 460
$memory_18 = c_rt_lib::to_nl($memory_18 eq $memory_19);
#line 460
undef($memory_19);
#line 460
$memory_18 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_18));
#line 460
$memory_18 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_18));
#line 460
if (c_rt_lib::check_true($memory_18)) {goto label_72;}
#line 460
$memory_20 = $memory_17->{'dest'};
#line 460
$memory_19 = $memory_14;
#line 460
 if (c_rt_lib::get_arrcount($memory_5) > 1) {$memory_5 = [@{$memory_5}];}$memory_5->[$memory_20] = $memory_19;
#line 460
undef($memory_19);
#line 460
undef($memory_20);
#line 460
goto label_72;
#line 460
label_72:
#line 460
undef($memory_18);
#line 461
$memory_18 = $memory_17->{'dest'};
#line 461
array::push($memory_13, $memory_18);
#line 461
undef($memory_18);
#line 461
undef($memory_17);
#line 462
goto label_17;
#line 462
label_22:
#line 462
$memory_17 = c_rt_lib::ov_as($memory_15, 'bin_op');
#line 463
$memory_19 = $memory_17->{'left'};
#line 463
$memory_18 = $memory_5->[$memory_19];
#line 463
undef($memory_19);
#line 463
post_processing_priv::check_sub($memory_14, $memory_18, $memory_12);
#line 463
undef($memory_18);
#line 464
$memory_19 = $memory_17->{'right'};
#line 464
$memory_18 = $memory_5->[$memory_19];
#line 464
undef($memory_19);
#line 464
post_processing_priv::check_sub($memory_14, $memory_18, $memory_12);
#line 464
undef($memory_18);
#line 465
$memory_18 = $memory_17->{'dest'};
#line 465
$memory_19 = "";
#line 465
$memory_18 = c_rt_lib::to_nl($memory_18 eq $memory_19);
#line 465
undef($memory_19);
#line 465
$memory_18 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_18));
#line 465
$memory_18 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_18));
#line 465
if (c_rt_lib::check_true($memory_18)) {goto label_74;}
#line 465
$memory_20 = $memory_17->{'dest'};
#line 465
$memory_19 = $memory_14;
#line 465
 if (c_rt_lib::get_arrcount($memory_5) > 1) {$memory_5 = [@{$memory_5}];}$memory_5->[$memory_20] = $memory_19;
#line 465
undef($memory_19);
#line 465
undef($memory_20);
#line 465
goto label_74;
#line 465
label_74:
#line 465
undef($memory_18);
#line 466
$memory_18 = $memory_17->{'dest'};
#line 466
array::push($memory_13, $memory_18);
#line 466
undef($memory_18);
#line 466
undef($memory_17);
#line 467
goto label_17;
#line 467
label_23:
#line 467
$memory_17 = c_rt_lib::ov_as($memory_15, 'ov_is');
#line 468
$memory_19 = $memory_17->{'src'};
#line 468
$memory_18 = $memory_5->[$memory_19];
#line 468
undef($memory_19);
#line 468
post_processing_priv::check_sub($memory_14, $memory_18, $memory_12);
#line 468
undef($memory_18);
#line 469
$memory_18 = $memory_17->{'dest'};
#line 469
$memory_19 = "";
#line 469
$memory_18 = c_rt_lib::to_nl($memory_18 eq $memory_19);
#line 469
undef($memory_19);
#line 469
$memory_18 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_18));
#line 469
$memory_18 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_18));
#line 469
if (c_rt_lib::check_true($memory_18)) {goto label_76;}
#line 469
$memory_20 = $memory_17->{'dest'};
#line 469
$memory_19 = $memory_14;
#line 469
 if (c_rt_lib::get_arrcount($memory_5) > 1) {$memory_5 = [@{$memory_5}];}$memory_5->[$memory_20] = $memory_19;
#line 469
undef($memory_19);
#line 469
undef($memory_20);
#line 469
goto label_76;
#line 469
label_76:
#line 469
undef($memory_18);
#line 470
$memory_18 = $memory_17->{'dest'};
#line 470
array::push($memory_13, $memory_18);
#line 470
undef($memory_18);
#line 470
undef($memory_17);
#line 471
goto label_17;
#line 471
label_24:
#line 471
$memory_17 = c_rt_lib::ov_as($memory_15, 'ov_as');
#line 472
$memory_19 = $memory_17->{'src'};
#line 472
$memory_18 = $memory_5->[$memory_19];
#line 472
undef($memory_19);
#line 472
post_processing_priv::check_sub($memory_14, $memory_18, $memory_12);
#line 472
undef($memory_18);
#line 473
$memory_18 = $memory_17->{'dest'};
#line 473
$memory_19 = "";
#line 473
$memory_18 = c_rt_lib::to_nl($memory_18 eq $memory_19);
#line 473
undef($memory_19);
#line 473
$memory_18 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_18));
#line 473
$memory_18 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_18));
#line 473
if (c_rt_lib::check_true($memory_18)) {goto label_78;}
#line 473
$memory_20 = $memory_17->{'dest'};
#line 473
$memory_19 = $memory_14;
#line 473
 if (c_rt_lib::get_arrcount($memory_5) > 1) {$memory_5 = [@{$memory_5}];}$memory_5->[$memory_20] = $memory_19;
#line 473
undef($memory_19);
#line 473
undef($memory_20);
#line 473
goto label_78;
#line 473
label_78:
#line 473
undef($memory_18);
#line 474
$memory_18 = $memory_17->{'dest'};
#line 474
array::push($memory_13, $memory_18);
#line 474
undef($memory_18);
#line 474
undef($memory_17);
#line 475
goto label_17;
#line 475
label_25:
#line 475
$memory_17 = c_rt_lib::ov_as($memory_15, 'func');
#line 476
$memory_18 = $memory_17->{'dest'};
#line 476
$memory_19 = "";
#line 476
$memory_18 = c_rt_lib::to_nl($memory_18 eq $memory_19);
#line 476
undef($memory_19);
#line 476
$memory_18 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_18));
#line 476
$memory_18 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_18));
#line 476
if (c_rt_lib::check_true($memory_18)) {goto label_80;}
#line 476
$memory_20 = $memory_17->{'dest'};
#line 476
$memory_19 = $memory_14;
#line 476
 if (c_rt_lib::get_arrcount($memory_5) > 1) {$memory_5 = [@{$memory_5}];}$memory_5->[$memory_20] = $memory_19;
#line 476
undef($memory_19);
#line 476
undef($memory_20);
#line 476
goto label_80;
#line 476
label_80:
#line 476
undef($memory_18);
#line 477
$memory_18 = $memory_17->{'dest'};
#line 477
array::push($memory_13, $memory_18);
#line 477
undef($memory_18);
#line 477
undef($memory_17);
#line 478
goto label_17;
#line 478
label_26:
#line 478
$memory_17 = c_rt_lib::ov_as($memory_15, 'move');
#line 479
$memory_19 = $memory_17->{'src'};
#line 479
$memory_18 = $memory_5->[$memory_19];
#line 479
undef($memory_19);
#line 479
post_processing_priv::check_sub($memory_14, $memory_18, $memory_12);
#line 479
undef($memory_18);
#line 480
$memory_18 = $memory_17->{'dest'};
#line 480
$memory_19 = "";
#line 480
$memory_18 = c_rt_lib::to_nl($memory_18 eq $memory_19);
#line 480
undef($memory_19);
#line 480
$memory_18 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_18));
#line 480
$memory_18 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_18));
#line 480
if (c_rt_lib::check_true($memory_18)) {goto label_82;}
#line 480
$memory_20 = $memory_17->{'dest'};
#line 480
$memory_19 = $memory_14;
#line 480
 if (c_rt_lib::get_arrcount($memory_5) > 1) {$memory_5 = [@{$memory_5}];}$memory_5->[$memory_20] = $memory_19;
#line 480
undef($memory_19);
#line 480
undef($memory_20);
#line 480
goto label_82;
#line 480
label_82:
#line 480
undef($memory_18);
#line 481
$memory_18 = $memory_17->{'dest'};
#line 481
array::push($memory_13, $memory_18);
#line 481
undef($memory_18);
#line 481
undef($memory_17);
#line 482
goto label_17;
#line 482
label_27:
#line 482
$memory_17 = c_rt_lib::ov_as($memory_15, 'load_const');
#line 483
$memory_18 = $memory_17->{'dest'};
#line 483
$memory_19 = "";
#line 483
$memory_18 = c_rt_lib::to_nl($memory_18 eq $memory_19);
#line 483
undef($memory_19);
#line 483
$memory_18 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_18));
#line 483
$memory_18 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_18));
#line 483
if (c_rt_lib::check_true($memory_18)) {goto label_84;}
#line 483
$memory_20 = $memory_17->{'dest'};
#line 483
$memory_19 = $memory_14;
#line 483
 if (c_rt_lib::get_arrcount($memory_5) > 1) {$memory_5 = [@{$memory_5}];}$memory_5->[$memory_20] = $memory_19;
#line 483
undef($memory_19);
#line 483
undef($memory_20);
#line 483
goto label_84;
#line 483
label_84:
#line 483
undef($memory_18);
#line 484
$memory_18 = $memory_17->{'dest'};
#line 484
array::push($memory_13, $memory_18);
#line 484
undef($memory_18);
#line 484
undef($memory_17);
#line 485
goto label_17;
#line 485
label_28:
#line 485
$memory_17 = c_rt_lib::ov_as($memory_15, 'get_frm_idx');
#line 486
$memory_19 = $memory_17->{'src'};
#line 486
$memory_18 = $memory_5->[$memory_19];
#line 486
undef($memory_19);
#line 486
post_processing_priv::check_sub($memory_14, $memory_18, $memory_12);
#line 486
undef($memory_18);
#line 487
$memory_19 = $memory_17->{'idx'};
#line 487
$memory_18 = $memory_5->[$memory_19];
#line 487
undef($memory_19);
#line 487
post_processing_priv::check_sub($memory_14, $memory_18, $memory_12);
#line 487
undef($memory_18);
#line 488
$memory_18 = $memory_17->{'dest'};
#line 488
$memory_19 = "";
#line 488
$memory_18 = c_rt_lib::to_nl($memory_18 eq $memory_19);
#line 488
undef($memory_19);
#line 488
$memory_18 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_18));
#line 488
$memory_18 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_18));
#line 488
if (c_rt_lib::check_true($memory_18)) {goto label_86;}
#line 488
$memory_20 = $memory_17->{'dest'};
#line 488
$memory_19 = $memory_14;
#line 488
 if (c_rt_lib::get_arrcount($memory_5) > 1) {$memory_5 = [@{$memory_5}];}$memory_5->[$memory_20] = $memory_19;
#line 488
undef($memory_19);
#line 488
undef($memory_20);
#line 488
goto label_86;
#line 488
label_86:
#line 488
undef($memory_18);
#line 489
$memory_18 = $memory_17->{'dest'};
#line 489
array::push($memory_13, $memory_18);
#line 489
undef($memory_18);
#line 489
undef($memory_17);
#line 490
goto label_17;
#line 490
label_29:
#line 490
$memory_17 = c_rt_lib::ov_as($memory_15, 'set_at_idx');
#line 491
$memory_19 = $memory_17->{'src'};
#line 491
$memory_18 = $memory_5->[$memory_19];
#line 491
undef($memory_19);
#line 491
post_processing_priv::check_sub($memory_14, $memory_18, $memory_12);
#line 491
undef($memory_18);
#line 492
$memory_19 = $memory_17->{'idx'};
#line 492
$memory_18 = $memory_5->[$memory_19];
#line 492
undef($memory_19);
#line 492
post_processing_priv::check_sub($memory_14, $memory_18, $memory_12);
#line 492
undef($memory_18);
#line 493
$memory_19 = $memory_17->{'val'};
#line 493
$memory_18 = $memory_5->[$memory_19];
#line 493
undef($memory_19);
#line 493
post_processing_priv::check_sub($memory_14, $memory_18, $memory_12);
#line 493
undef($memory_18);
#line 494
$memory_19 = $memory_17->{'src'};
#line 494
$memory_18 = $memory_14;
#line 494
 if (c_rt_lib::get_arrcount($memory_5) > 1) {$memory_5 = [@{$memory_5}];}$memory_5->[$memory_19] = $memory_18;
#line 494
undef($memory_18);
#line 494
undef($memory_19);
#line 495
$memory_18 = $memory_17->{'src'};
#line 495
array::push($memory_13, $memory_18);
#line 495
undef($memory_18);
#line 495
undef($memory_17);
#line 496
goto label_17;
#line 496
label_30:
#line 496
$memory_17 = c_rt_lib::ov_as($memory_15, 'get_val');
#line 497
$memory_19 = $memory_17->{'src'};
#line 497
$memory_18 = $memory_5->[$memory_19];
#line 497
undef($memory_19);
#line 497
post_processing_priv::check_sub($memory_14, $memory_18, $memory_12);
#line 497
undef($memory_18);
#line 498
$memory_18 = $memory_17->{'dest'};
#line 498
$memory_19 = "";
#line 498
$memory_18 = c_rt_lib::to_nl($memory_18 eq $memory_19);
#line 498
undef($memory_19);
#line 498
$memory_18 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_18));
#line 498
$memory_18 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_18));
#line 498
if (c_rt_lib::check_true($memory_18)) {goto label_88;}
#line 498
$memory_20 = $memory_17->{'dest'};
#line 498
$memory_19 = $memory_14;
#line 498
 if (c_rt_lib::get_arrcount($memory_5) > 1) {$memory_5 = [@{$memory_5}];}$memory_5->[$memory_20] = $memory_19;
#line 498
undef($memory_19);
#line 498
undef($memory_20);
#line 498
goto label_88;
#line 498
label_88:
#line 498
undef($memory_18);
#line 499
$memory_18 = $memory_17->{'dest'};
#line 499
array::push($memory_13, $memory_18);
#line 499
undef($memory_18);
#line 499
undef($memory_17);
#line 500
goto label_17;
#line 500
label_31:
#line 500
$memory_17 = c_rt_lib::ov_as($memory_15, 'set_val');
#line 501
$memory_19 = $memory_17->{'src'};
#line 501
$memory_18 = $memory_5->[$memory_19];
#line 501
undef($memory_19);
#line 501
post_processing_priv::check_sub($memory_14, $memory_18, $memory_12);
#line 501
undef($memory_18);
#line 502
$memory_19 = $memory_17->{'val'};
#line 502
$memory_18 = $memory_5->[$memory_19];
#line 502
undef($memory_19);
#line 502
post_processing_priv::check_sub($memory_14, $memory_18, $memory_12);
#line 502
undef($memory_18);
#line 503
$memory_19 = $memory_17->{'src'};
#line 503
$memory_18 = $memory_14;
#line 503
 if (c_rt_lib::get_arrcount($memory_5) > 1) {$memory_5 = [@{$memory_5}];}$memory_5->[$memory_19] = $memory_18;
#line 503
undef($memory_18);
#line 503
undef($memory_19);
#line 504
$memory_18 = $memory_17->{'src'};
#line 504
array::push($memory_13, $memory_18);
#line 504
undef($memory_18);
#line 504
undef($memory_17);
#line 505
goto label_17;
#line 505
label_32:
#line 505
$memory_17 = c_rt_lib::ov_as($memory_15, 'ov_mk');
#line 506
$memory_18 = $memory_17->{'src'};
#line 506
$memory_18 = c_rt_lib::ov_is($memory_18, 'arg');
#line 506
$memory_18 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_18));
#line 506
if (c_rt_lib::check_true($memory_18)) {goto label_90;}
#line 507
$memory_20 = $memory_17->{'src'};
#line 507
$memory_20 = c_rt_lib::ov_as($memory_20, 'arg');
#line 507
$memory_19 = $memory_5->[$memory_20];
#line 507
undef($memory_20);
#line 507
post_processing_priv::check_sub($memory_14, $memory_19, $memory_12);
#line 507
undef($memory_19);
#line 508
goto label_90;
#line 508
label_90:
#line 508
undef($memory_18);
#line 509
$memory_18 = $memory_17->{'dest'};
#line 509
$memory_19 = "";
#line 509
$memory_18 = c_rt_lib::to_nl($memory_18 eq $memory_19);
#line 509
undef($memory_19);
#line 509
$memory_18 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_18));
#line 509
$memory_18 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_18));
#line 509
if (c_rt_lib::check_true($memory_18)) {goto label_92;}
#line 509
$memory_20 = $memory_17->{'dest'};
#line 509
$memory_19 = $memory_14;
#line 509
 if (c_rt_lib::get_arrcount($memory_5) > 1) {$memory_5 = [@{$memory_5}];}$memory_5->[$memory_20] = $memory_19;
#line 509
undef($memory_19);
#line 509
undef($memory_20);
#line 509
goto label_92;
#line 509
label_92:
#line 509
undef($memory_18);
#line 510
$memory_18 = $memory_17->{'dest'};
#line 510
array::push($memory_13, $memory_18);
#line 510
undef($memory_18);
#line 510
undef($memory_17);
#line 511
goto label_17;
#line 511
label_33:
#line 511
$memory_17 = c_rt_lib::ov_as($memory_15, 'return');
#line 512
$memory_18 = $memory_17;
#line 512
$memory_18 = c_rt_lib::ov_is($memory_18, 'val');
#line 512
$memory_18 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_18));
#line 512
if (c_rt_lib::check_true($memory_18)) {goto label_94;}
#line 513
$memory_20 = $memory_17;
#line 513
$memory_20 = c_rt_lib::ov_as($memory_20, 'val');
#line 513
$memory_19 = $memory_5->[$memory_20];
#line 513
undef($memory_20);
#line 513
post_processing_priv::check_sub($memory_14, $memory_19, $memory_12);
#line 513
undef($memory_19);
#line 514
goto label_94;
#line 514
label_94:
#line 514
undef($memory_18);
#line 514
undef($memory_17);
#line 515
goto label_17;
#line 515
label_34:
#line 515
$memory_17 = c_rt_lib::ov_as($memory_15, 'die');
#line 516
$memory_18 = $memory_5->[$memory_17];
#line 516
post_processing_priv::check_sub($memory_14, $memory_18, $memory_12);
#line 516
undef($memory_18);
#line 516
undef($memory_17);
#line 517
goto label_17;
#line 517
label_35:
#line 517
$memory_17 = c_rt_lib::ov_as($memory_15, 'prt_lbl');
#line 518
$memory_18 = c_rt_lib::ov_mk_none('no');
#line 518
$memory_14 = $memory_18;
#line 518
undef($memory_18);
#line 518
undef($memory_17);
#line 519
goto label_17;
#line 519
label_36:
#line 519
$memory_17 = c_rt_lib::ov_as($memory_15, 'if_goto');
#line 520
$memory_19 = $memory_17->{'src'};
#line 520
$memory_18 = $memory_5->[$memory_19];
#line 520
undef($memory_19);
#line 520
post_processing_priv::check_sub($memory_14, $memory_18, $memory_12);
#line 520
undef($memory_18);
#line 520
undef($memory_17);
#line 521
goto label_17;
#line 521
label_37:
#line 521
$memory_17 = c_rt_lib::ov_as($memory_15, 'goto');
#line 522
$memory_18 = c_rt_lib::ov_mk_none('no');
#line 522
$memory_14 = $memory_18;
#line 522
undef($memory_18);
#line 522
undef($memory_17);
#line 523
goto label_17;
#line 523
label_38:
#line 523
$memory_17 = c_rt_lib::ov_as($memory_15, 'clear');
#line 524
$memory_18 = $memory_5->[$memory_17];
#line 524
post_processing_priv::check_sub($memory_14, $memory_18, $memory_12);
#line 524
undef($memory_18);
#line 525
$memory_18 = c_rt_lib::ov_mk_none('no');
#line 525
$memory_19 = $memory_18;
#line 525
 if (c_rt_lib::get_arrcount($memory_5) > 1) {$memory_5 = [@{$memory_5}];}$memory_5->[$memory_17] = $memory_19;
#line 525
undef($memory_18);
#line 525
undef($memory_19);
#line 525
undef($memory_17);
#line 526
goto label_17;
#line 526
label_17:
#line 526
undef($memory_15);
#line 526
undef($memory_16);
#line 527
$memory_15 = array::len($memory_13);
#line 528
$memory_16 = 0;
#line 528
$memory_16 = c_rt_lib::to_nl($memory_15 > $memory_16);
#line 528
$memory_17 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_16));
#line 528
if (c_rt_lib::check_true($memory_17)) {goto label_97;}
#line 528
$memory_18 = 1;
#line 528
$memory_18 = $memory_15 - $memory_18;
#line 528
$memory_16 = $memory_13->[$memory_18];
#line 528
undef($memory_18);
#line 528
$memory_18 = "";
#line 528
$memory_16 = c_rt_lib::to_nl($memory_16 eq $memory_18);
#line 528
undef($memory_18);
#line 528
label_97:
#line 528
undef($memory_17);
#line 528
$memory_16 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_16));
#line 528
if (c_rt_lib::check_true($memory_16)) {goto label_96;}
#line 529
array::pop($memory_13);
#line 530
goto label_96;
#line 530
label_96:
#line 530
undef($memory_16);
#line 531
$memory_16 = $memory_14;
#line 531
$memory_16 = c_rt_lib::ov_is($memory_16, 'yes');
#line 531
if (c_rt_lib::check_true($memory_16)) {goto label_99;}
#line 531
$memory_16 = c_rt_lib::ov_mk_none('none');
#line 531
goto label_98;
#line 531
label_99:
#line 531
$memory_16 = c_rt_lib::ov_mk_arg('const', $memory_13);
#line 531
label_98:
#line 531
$memory_17 = c_rt_lib::get_ref_arr($memory_7, $memory_9);
#line 531
$memory_18 = $memory_16;
#line 531
 if (c_rt_lib::get_hashcount($memory_17) > 1) {$memory_17 = {%{$memory_17}};}$memory_17->{'annotation'} = $memory_18;
#line 531
c_rt_lib::set_ref_arr($memory_7, $memory_9, $memory_17);
#line 531
undef($memory_16);
#line 531
undef($memory_17);
#line 531
undef($memory_18);
#line 531
undef($memory_12);
#line 531
undef($memory_13);
#line 531
undef($memory_14);
#line 531
undef($memory_15);
#line 532
$memory_9 = $memory_9 + $memory_10;
#line 532
goto label_16;
#line 532
label_14:
#line 532
undef($memory_8);
#line 532
undef($memory_9);
#line 532
undef($memory_10);
#line 532
undef($memory_11);
#line 533
$memory_8 = $memory_7;
#line 533
 if (c_rt_lib::get_hashcount($memory_6) > 1) {$memory_6 = {%{$memory_6}};}$memory_6->{'cmds'} = $memory_8;
#line 533
undef($memory_8);
#line 534
$memory_8 = $memory_6;
#line 534
 if (c_rt_lib::get_arrcount($memory_1) > 1) {$memory_1 = [@{$memory_1}];}$memory_1->[$memory_0] = $memory_8;
#line 534
undef($memory_8);
#line 535
$memory_8 = $memory_6->{'next'};
#line 535
$memory_10 = 0;
#line 535
$memory_11 = 1;
#line 535
$memory_12 = c_rt_lib::array_len($memory_8);
#line 535
label_102:
#line 535
$memory_13 = c_rt_lib::to_nl($memory_10 >= $memory_12);
#line 535
if (c_rt_lib::check_true($memory_13)) {goto label_100;}
#line 535
$memory_9 = $memory_8->[$memory_10];
#line 536
post_processing_priv::set_const_block($memory_9, $memory_1, $memory_2, $memory_3, $memory_4, $memory_5);
#line 537
$memory_10 = $memory_10 + $memory_11;
#line 537
goto label_102;
#line 537
label_100:
#line 537
undef($memory_8);
#line 537
undef($memory_9);
#line 537
undef($memory_10);
#line 537
undef($memory_11);
#line 537
undef($memory_12);
#line 537
undef($memory_13);
#line 537
undef($memory_6);
#line 537
undef($memory_7);
#line 537
undef($memory_0);
#line 537
undef($memory_2);
#line 537
undef($memory_4);
#line 537
undef($memory_5);
#line 537
$_[1] = $memory_1;$_[3] = $memory_3;return;
$_[1] = $memory_1;$_[3] = $memory_3;}

sub post_processing_priv::evaluate_const($$$$$$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;my $memory_13;my $memory_14;my $memory_15;my $memory_16;my $memory_17;my $memory_18;my $memory_19;my $memory_20;$memory_0 = $_[0];$memory_1 = $_[1];$memory_2 = $_[2];$memory_3 = $_[3];Scalar::Util::weaken($_[3]) if ref($_[3]);$memory_4 = $_[4];Scalar::Util::weaken($_[4]) if ref($_[4]);$memory_5 = $_[5];$memory_6 = $_[6];
#line 542
$memory_7 = $memory_3;
#line 542
$memory_7 = c_rt_lib::ov_is($memory_7, 'no');
#line 542
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 542
if (c_rt_lib::check_true($memory_7)) {goto label_2;}
#line 543
$memory_9 = 0;
#line 543
$memory_10 = 1;
#line 543
$memory_11 = c_rt_lib::array_len($memory_6);
#line 543
label_5:
#line 543
$memory_12 = c_rt_lib::to_nl($memory_9 >= $memory_11);
#line 543
if (c_rt_lib::check_true($memory_12)) {goto label_3;}
#line 543
$memory_8 = $memory_6->[$memory_9];
#line 544
$memory_13 = "";
#line 544
$memory_13 = c_rt_lib::to_nl($memory_8 eq $memory_13);
#line 544
$memory_13 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_13));
#line 544
$memory_13 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_13));
#line 544
if (c_rt_lib::check_true($memory_13)) {goto label_7;}
#line 544
$memory_14 = c_rt_lib::ov_mk_none('no');
#line 544
$memory_15 = $memory_14;
#line 544
 if (c_rt_lib::get_arrcount($memory_4) > 1) {$memory_4 = [@{$memory_4}];}$memory_4->[$memory_8] = $memory_15;
#line 544
undef($memory_14);
#line 544
undef($memory_15);
#line 544
goto label_7;
#line 544
label_7:
#line 544
undef($memory_13);
#line 545
$memory_9 = $memory_9 + $memory_10;
#line 545
goto label_5;
#line 545
label_3:
#line 545
undef($memory_8);
#line 545
undef($memory_9);
#line 545
undef($memory_10);
#line 545
undef($memory_11);
#line 545
undef($memory_12);
#line 546
undef($memory_0);
#line 546
undef($memory_1);
#line 546
undef($memory_2);
#line 546
undef($memory_5);
#line 546
undef($memory_6);
#line 546
undef($memory_7);
#line 546
$_[3] = $memory_3;$_[4] = $memory_4;return;
#line 547
goto label_2;
#line 547
label_2:
#line 547
undef($memory_7);
#line 548
$memory_7 = $memory_3;
#line 548
$memory_7 = c_rt_lib::ov_as($memory_7, 'yes');
#line 549
$memory_8 = [];
#line 550
$memory_10 = 0;
#line 550
$memory_11 = 1;
#line 550
$memory_12 = c_rt_lib::array_len($memory_4);
#line 550
label_10:
#line 550
$memory_13 = c_rt_lib::to_nl($memory_10 >= $memory_12);
#line 550
if (c_rt_lib::check_true($memory_13)) {goto label_8;}
#line 550
$memory_9 = $memory_4->[$memory_10];
#line 551
$memory_14 = interpreter::get_none_variant();
#line 552
$memory_15 = $memory_9;
#line 552
$memory_15 = c_rt_lib::ov_is($memory_15, 'yes');
#line 552
$memory_15 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_15));
#line 552
if (c_rt_lib::check_true($memory_15)) {goto label_12;}
#line 553
$memory_16 = $memory_9;
#line 553
$memory_16 = c_rt_lib::ov_as($memory_16, 'yes');
#line 554
$memory_17 = $memory_16->{'value'};
#line 554
$memory_14 = $memory_17;
#line 554
undef($memory_17);
#line 554
undef($memory_16);
#line 555
goto label_12;
#line 555
label_12:
#line 555
undef($memory_15);
#line 556
array::push($memory_8, $memory_14);
#line 556
undef($memory_14);
#line 557
$memory_10 = $memory_10 + $memory_11;
#line 557
goto label_10;
#line 557
label_8:
#line 557
undef($memory_9);
#line 557
undef($memory_10);
#line 557
undef($memory_11);
#line 557
undef($memory_12);
#line 557
undef($memory_13);
#line 558
$memory_9 = interpreter::evaluate_const($memory_5, $memory_0, $memory_1, $memory_8, $memory_2);
#line 559
$memory_10 = $memory_9;
#line 559
$memory_10 = c_rt_lib::ov_is($memory_10, 'err');
#line 559
$memory_10 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_10));
#line 559
if (c_rt_lib::check_true($memory_10)) {goto label_14;}
#line 560
$memory_11 = c_rt_lib::ov_mk_none('no');
#line 560
$memory_3 = $memory_11;
#line 560
undef($memory_11);
#line 561
$memory_12 = 0;
#line 561
$memory_13 = 1;
#line 561
$memory_14 = c_rt_lib::array_len($memory_6);
#line 561
label_17:
#line 561
$memory_15 = c_rt_lib::to_nl($memory_12 >= $memory_14);
#line 561
if (c_rt_lib::check_true($memory_15)) {goto label_15;}
#line 561
$memory_11 = $memory_6->[$memory_12];
#line 562
$memory_16 = "";
#line 562
$memory_16 = c_rt_lib::to_nl($memory_11 eq $memory_16);
#line 562
$memory_16 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_16));
#line 562
$memory_16 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_16));
#line 562
if (c_rt_lib::check_true($memory_16)) {goto label_19;}
#line 562
$memory_17 = c_rt_lib::ov_mk_none('no');
#line 562
$memory_18 = $memory_17;
#line 562
 if (c_rt_lib::get_arrcount($memory_4) > 1) {$memory_4 = [@{$memory_4}];}$memory_4->[$memory_11] = $memory_18;
#line 562
undef($memory_17);
#line 562
undef($memory_18);
#line 562
goto label_19;
#line 562
label_19:
#line 562
undef($memory_16);
#line 563
$memory_12 = $memory_12 + $memory_13;
#line 563
goto label_17;
#line 563
label_15:
#line 563
undef($memory_11);
#line 563
undef($memory_12);
#line 563
undef($memory_13);
#line 563
undef($memory_14);
#line 563
undef($memory_15);
#line 564
goto label_13;
#line 564
label_14:
#line 565
$memory_11 = $memory_9;
#line 565
$memory_11 = c_rt_lib::ov_as($memory_11, 'ok');
#line 566
$memory_12 = array::len($memory_6);
#line 566
$memory_13 = 0;
#line 566
$memory_14 = 1;
#line 566
label_22:
#line 566
$memory_15 = c_rt_lib::to_nl($memory_13 >= $memory_12);
#line 566
if (c_rt_lib::check_true($memory_15)) {goto label_20;}
#line 567
$memory_16 = $memory_6->[$memory_13];
#line 568
$memory_17 = "";
#line 568
$memory_17 = c_rt_lib::to_nl($memory_16 eq $memory_17);
#line 568
$memory_17 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_17));
#line 568
$memory_17 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_17));
#line 568
if (c_rt_lib::check_true($memory_17)) {goto label_24;}
#line 568
$memory_19 = 10000;
#line 568
$memory_20 = $memory_7->{'nr'};
#line 568
$memory_19 = $memory_19 * $memory_20;
#line 568
undef($memory_20);
#line 568
$memory_19 = $memory_19 + $memory_13;
#line 568
$memory_20 = $memory_11->[$memory_16];
#line 568
$memory_18 = {nr => $memory_19,value => $memory_20,};
#line 568
undef($memory_19);
#line 568
undef($memory_20);
#line 568
$memory_18 = c_rt_lib::ov_mk_arg('yes', $memory_18);
#line 568
$memory_19 = $memory_18;
#line 568
 if (c_rt_lib::get_arrcount($memory_4) > 1) {$memory_4 = [@{$memory_4}];}$memory_4->[$memory_16] = $memory_19;
#line 568
undef($memory_18);
#line 568
undef($memory_19);
#line 568
goto label_24;
#line 568
label_24:
#line 568
undef($memory_17);
#line 568
undef($memory_16);
#line 569
$memory_13 = $memory_13 + $memory_14;
#line 569
goto label_22;
#line 569
label_20:
#line 569
undef($memory_12);
#line 569
undef($memory_13);
#line 569
undef($memory_14);
#line 569
undef($memory_15);
#line 569
undef($memory_11);
#line 570
goto label_13;
#line 570
label_13:
#line 570
undef($memory_10);
#line 570
undef($memory_7);
#line 570
undef($memory_8);
#line 570
undef($memory_9);
#line 570
undef($memory_0);
#line 570
undef($memory_1);
#line 570
undef($memory_2);
#line 570
undef($memory_5);
#line 570
undef($memory_6);
#line 570
$_[3] = $memory_3;$_[4] = $memory_4;return;
$_[3] = $memory_3;$_[4] = $memory_4;}

sub post_processing_priv::push_load_const($$$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];$memory_2 = $_[2];$memory_3 = $_[3];
#line 573
$memory_4 = $memory_1;
#line 573
$memory_4 = c_rt_lib::ov_is($memory_4, 'yes');
#line 573
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 573
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 573
if (c_rt_lib::check_true($memory_4)) {goto label_2;}
#line 573
$memory_5 = [];
#line 573
die(dfile::ssave($memory_5));
#line 573
goto label_2;
#line 573
label_2:
#line 573
undef($memory_4);
#line 573
undef($memory_5);
#line 574
$memory_4 = $memory_1;
#line 574
$memory_4 = c_rt_lib::ov_as($memory_4, 'yes');
#line 575
$memory_6 = $memory_3->{'debug'};
#line 575
$memory_7 = [$memory_2];
#line 575
$memory_7 = c_rt_lib::ov_mk_arg('const', $memory_7);
#line 575
$memory_9 = $memory_4->{'value'};
#line 575
$memory_8 = {dest => $memory_2,val => $memory_9,};
#line 575
undef($memory_9);
#line 575
$memory_8 = c_rt_lib::ov_mk_arg('load_const', $memory_8);
#line 575
$memory_5 = {debug => $memory_6,annotation => $memory_7,cmd => $memory_8,};
#line 575
undef($memory_6);
#line 575
undef($memory_7);
#line 575
undef($memory_8);
#line 575
array::push($memory_0, $memory_5);
#line 575
undef($memory_5);
#line 575
undef($memory_4);
#line 575
undef($memory_1);
#line 575
undef($memory_2);
#line 575
undef($memory_3);
#line 575
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub post_processing_priv::set_const_block_val($$$$$$$$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;my $memory_13;my $memory_14;my $memory_15;my $memory_16;my $memory_17;my $memory_18;my $memory_19;my $memory_20;my $memory_21;my $memory_22;my $memory_23;my $memory_24;my $memory_25;my $memory_26;my $memory_27;my $memory_28;my $memory_29;my $memory_30;my $memory_31;$memory_0 = $_[0];$memory_1 = $_[1];$memory_2 = $_[2];Scalar::Util::weaken($_[2]) if ref($_[2]);$memory_3 = $_[3];$memory_4 = $_[4];Scalar::Util::weaken($_[4]) if ref($_[4]);$memory_5 = $_[5];$memory_6 = $_[6];$memory_7 = $_[7];$memory_8 = $_[8];
#line 587
$memory_9 = $memory_1->[$memory_0];
#line 588
$memory_10 = $memory_4->[$memory_0];
#line 588
$memory_10 = $memory_10->{'was'};
#line 588
$memory_11 = 0;
#line 588
$memory_10 = c_rt_lib::to_nl($memory_10 > $memory_11);
#line 588
undef($memory_11);
#line 588
$memory_10 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_10));
#line 588
if (c_rt_lib::check_true($memory_10)) {goto label_2;}
#line 589
$memory_11 = c_rt_lib::to_nl(0);
#line 590
$memory_12 = $memory_4->[$memory_0];
#line 590
$memory_12 = $memory_12->{'regs'};
#line 591
$memory_13 = array::len($memory_6);
#line 591
$memory_14 = 0;
#line 591
$memory_15 = 1;
#line 591
label_5:
#line 591
$memory_16 = c_rt_lib::to_nl($memory_14 >= $memory_13);
#line 591
if (c_rt_lib::check_true($memory_16)) {goto label_3;}
#line 592
$memory_17 = $memory_12->[$memory_14];
#line 592
$memory_17 = c_rt_lib::ov_is($memory_17, 'no');
#line 592
$memory_17 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_17));
#line 592
if (c_rt_lib::check_true($memory_17)) {goto label_7;}
#line 593
$memory_18 = c_rt_lib::ov_mk_none('no');
#line 593
$memory_19 = $memory_18;
#line 593
 if (c_rt_lib::get_arrcount($memory_6) > 1) {$memory_6 = [@{$memory_6}];}$memory_6->[$memory_14] = $memory_19;
#line 593
undef($memory_18);
#line 593
undef($memory_19);
#line 594
undef($memory_17);
#line 594
goto label_4;
#line 595
goto label_6;
#line 595
label_7:
#line 596
$memory_18 = $memory_6->[$memory_14];
#line 596
$memory_18 = c_rt_lib::ov_is($memory_18, 'yes');
#line 596
$memory_18 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_18));
#line 596
if (c_rt_lib::check_true($memory_18)) {goto label_9;}
#line 597
$memory_19 = $memory_6->[$memory_14];
#line 597
$memory_19 = c_rt_lib::ov_as($memory_19, 'yes');
#line 598
$memory_20 = $memory_12->[$memory_14];
#line 598
$memory_20 = c_rt_lib::ov_as($memory_20, 'yes');
#line 599
$memory_21 = $memory_19->{'nr'};
#line 599
$memory_22 = $memory_20->{'nr'};
#line 599
$memory_21 = c_rt_lib::to_nl($memory_21 == $memory_22);
#line 599
undef($memory_22);
#line 599
$memory_21 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_21));
#line 599
if (c_rt_lib::check_true($memory_21)) {goto label_11;}
#line 599
undef($memory_17);
#line 599
undef($memory_18);
#line 599
undef($memory_19);
#line 599
undef($memory_20);
#line 599
undef($memory_21);
#line 599
goto label_4;
#line 599
goto label_11;
#line 599
label_11:
#line 599
undef($memory_21);
#line 599
undef($memory_19);
#line 599
undef($memory_20);
#line 600
goto label_9;
#line 600
label_9:
#line 600
undef($memory_18);
#line 601
$memory_18 = c_rt_lib::ov_mk_none('no');
#line 601
$memory_19 = $memory_18;
#line 601
 if (c_rt_lib::get_arrcount($memory_6) > 1) {$memory_6 = [@{$memory_6}];}$memory_6->[$memory_14] = $memory_19;
#line 601
undef($memory_18);
#line 601
undef($memory_19);
#line 602
$memory_18 = c_rt_lib::to_nl(1);
#line 602
$memory_11 = $memory_18;
#line 602
undef($memory_18);
#line 603
goto label_6;
#line 603
label_6:
#line 603
undef($memory_17);
#line 603
label_4:
#line 604
$memory_14 = $memory_14 + $memory_15;
#line 604
goto label_5;
#line 604
label_3:
#line 604
undef($memory_13);
#line 604
undef($memory_14);
#line 604
undef($memory_15);
#line 604
undef($memory_16);
#line 605
$memory_13 = $memory_11;
#line 605
$memory_13 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_13));
#line 605
$memory_13 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_13));
#line 605
if (c_rt_lib::check_true($memory_13)) {goto label_13;}
#line 605
undef($memory_0);
#line 605
undef($memory_1);
#line 605
undef($memory_3);
#line 605
undef($memory_5);
#line 605
undef($memory_6);
#line 605
undef($memory_7);
#line 605
undef($memory_8);
#line 605
undef($memory_9);
#line 605
undef($memory_10);
#line 605
undef($memory_11);
#line 605
undef($memory_12);
#line 605
undef($memory_13);
#line 605
$_[2] = $memory_2;$_[4] = $memory_4;return;
#line 605
goto label_13;
#line 605
label_13:
#line 605
undef($memory_13);
#line 605
undef($memory_11);
#line 605
undef($memory_12);
#line 606
goto label_2;
#line 606
label_2:
#line 606
undef($memory_10);
#line 607
$memory_10 = c_rt_lib::get_ref_arr($memory_4, $memory_0);
#line 607
$memory_11 = $memory_6;
#line 607
 if (c_rt_lib::get_hashcount($memory_10) > 1) {$memory_10 = {%{$memory_10}};}$memory_10->{'regs'} = $memory_11;
#line 607
c_rt_lib::set_ref_arr($memory_4, $memory_0, $memory_10);
#line 607
undef($memory_10);
#line 607
undef($memory_11);
#line 608
$memory_10 = [];
#line 609
$memory_11 = c_rt_lib::get_ref_arr($memory_4, $memory_0);
#line 609
$memory_12 = "was";
#line 609
$memory_12 = c_rt_lib::get_ref_hash($memory_11, $memory_12);
#line 609
$memory_13 = 1;
#line 609
$memory_12 = $memory_12 + $memory_13;
#line 609
$memory_14 = "was";
#line 609
c_rt_lib::set_ref_hash($memory_11, $memory_14, $memory_12);
#line 609
c_rt_lib::set_ref_arr($memory_4, $memory_0, $memory_11);
#line 609
undef($memory_14);
#line 609
undef($memory_11);
#line 609
undef($memory_12);
#line 609
undef($memory_13);
#line 610
$memory_11 = $memory_9->{'cmds'};
#line 611
$memory_12 = array::len($memory_11);
#line 611
$memory_13 = 0;
#line 611
$memory_14 = 1;
#line 611
label_16:
#line 611
$memory_15 = c_rt_lib::to_nl($memory_13 >= $memory_12);
#line 611
if (c_rt_lib::check_true($memory_15)) {goto label_14;}
#line 612
$memory_16 = $memory_9->{'from'};
#line 612
$memory_16 = $memory_16 + $memory_13;
#line 613
$memory_18 = $memory_9->{'from'};
#line 613
$memory_18 = $memory_13 + $memory_18;
#line 613
$memory_19 = "";
#line 613
$memory_17 = {nr => $memory_18,value => $memory_19,};
#line 613
undef($memory_18);
#line 613
undef($memory_19);
#line 613
$memory_17 = c_rt_lib::ov_mk_arg('yes', $memory_17);
#line 614
$memory_18 = $memory_11->[$memory_13];
#line 615
$memory_19 = [];
#line 616
$memory_20 = $memory_18->{'cmd'};
#line 616
$memory_21 = c_rt_lib::ov_is($memory_20, 'arr_decl');
#line 616
if (c_rt_lib::check_true($memory_21)) {goto label_18;}
#line 622
$memory_21 = c_rt_lib::ov_is($memory_20, 'hash_decl');
#line 622
if (c_rt_lib::check_true($memory_21)) {goto label_19;}
#line 628
$memory_21 = c_rt_lib::ov_is($memory_20, 'call');
#line 628
if (c_rt_lib::check_true($memory_21)) {goto label_20;}
#line 650
$memory_21 = c_rt_lib::ov_is($memory_20, 'una_op');
#line 650
if (c_rt_lib::check_true($memory_21)) {goto label_21;}
#line 654
$memory_21 = c_rt_lib::ov_is($memory_20, 'bin_op');
#line 654
if (c_rt_lib::check_true($memory_21)) {goto label_22;}
#line 659
$memory_21 = c_rt_lib::ov_is($memory_20, 'ov_is');
#line 659
if (c_rt_lib::check_true($memory_21)) {goto label_23;}
#line 663
$memory_21 = c_rt_lib::ov_is($memory_20, 'ov_as');
#line 663
if (c_rt_lib::check_true($memory_21)) {goto label_24;}
#line 667
$memory_21 = c_rt_lib::ov_is($memory_20, 'func');
#line 667
if (c_rt_lib::check_true($memory_21)) {goto label_25;}
#line 671
$memory_21 = c_rt_lib::ov_is($memory_20, 'move');
#line 671
if (c_rt_lib::check_true($memory_21)) {goto label_26;}
#line 675
$memory_21 = c_rt_lib::ov_is($memory_20, 'load_const');
#line 675
if (c_rt_lib::check_true($memory_21)) {goto label_27;}
#line 680
$memory_21 = c_rt_lib::ov_is($memory_20, 'get_frm_idx');
#line 680
if (c_rt_lib::check_true($memory_21)) {goto label_28;}
#line 685
$memory_21 = c_rt_lib::ov_is($memory_20, 'set_at_idx');
#line 685
if (c_rt_lib::check_true($memory_21)) {goto label_29;}
#line 691
$memory_21 = c_rt_lib::ov_is($memory_20, 'get_val');
#line 691
if (c_rt_lib::check_true($memory_21)) {goto label_30;}
#line 695
$memory_21 = c_rt_lib::ov_is($memory_20, 'set_val');
#line 695
if (c_rt_lib::check_true($memory_21)) {goto label_31;}
#line 700
$memory_21 = c_rt_lib::ov_is($memory_20, 'ov_mk');
#line 700
if (c_rt_lib::check_true($memory_21)) {goto label_32;}
#line 706
$memory_21 = c_rt_lib::ov_is($memory_20, 'return');
#line 706
if (c_rt_lib::check_true($memory_21)) {goto label_33;}
#line 711
$memory_21 = c_rt_lib::ov_is($memory_20, 'die');
#line 711
if (c_rt_lib::check_true($memory_21)) {goto label_34;}
#line 714
$memory_21 = c_rt_lib::ov_is($memory_20, 'prt_lbl');
#line 714
if (c_rt_lib::check_true($memory_21)) {goto label_35;}
#line 716
$memory_21 = c_rt_lib::ov_is($memory_20, 'if_goto');
#line 716
if (c_rt_lib::check_true($memory_21)) {goto label_36;}
#line 719
$memory_21 = c_rt_lib::ov_is($memory_20, 'goto');
#line 719
if (c_rt_lib::check_true($memory_21)) {goto label_37;}
#line 721
$memory_21 = c_rt_lib::ov_is($memory_20, 'clear');
#line 721
if (c_rt_lib::check_true($memory_21)) {goto label_38;}
#line 721
$memory_21 = "NOMATCHALERT";
#line 721
$memory_21 = [$memory_21,$memory_20];
#line 721
die(dfile::ssave($memory_21));
#line 616
label_18:
#line 616
$memory_22 = c_rt_lib::ov_as($memory_20, 'arr_decl');
#line 617
$memory_23 = $memory_22->{'src'};
#line 617
$memory_25 = 0;
#line 617
$memory_26 = 1;
#line 617
$memory_27 = c_rt_lib::array_len($memory_23);
#line 617
label_41:
#line 617
$memory_28 = c_rt_lib::to_nl($memory_25 >= $memory_27);
#line 617
if (c_rt_lib::check_true($memory_28)) {goto label_39;}
#line 617
$memory_24 = $memory_23->[$memory_25];
#line 618
$memory_29 = $memory_6->[$memory_24];
#line 618
post_processing_priv::check_sub_val($memory_17, $memory_29);
#line 618
undef($memory_29);
#line 619
$memory_25 = $memory_25 + $memory_26;
#line 619
goto label_41;
#line 619
label_39:
#line 619
undef($memory_23);
#line 619
undef($memory_24);
#line 619
undef($memory_25);
#line 619
undef($memory_26);
#line 619
undef($memory_27);
#line 619
undef($memory_28);
#line 620
$memory_24 = $memory_22->{'dest'};
#line 620
$memory_23 = [$memory_24];
#line 620
undef($memory_24);
#line 620
$memory_19 = $memory_23;
#line 620
undef($memory_23);
#line 621
post_processing_priv::evaluate_const($memory_7, $memory_8, $memory_16, $memory_17, $memory_6, $memory_5, $memory_19);
#line 621
undef($memory_22);
#line 622
goto label_17;
#line 622
label_19:
#line 622
$memory_22 = c_rt_lib::ov_as($memory_20, 'hash_decl');
#line 623
$memory_23 = $memory_22->{'src'};
#line 623
$memory_25 = 0;
#line 623
$memory_26 = 1;
#line 623
$memory_27 = c_rt_lib::array_len($memory_23);
#line 623
label_44:
#line 623
$memory_28 = c_rt_lib::to_nl($memory_25 >= $memory_27);
#line 623
if (c_rt_lib::check_true($memory_28)) {goto label_42;}
#line 623
$memory_24 = $memory_23->[$memory_25];
#line 624
$memory_30 = $memory_24->{'val'};
#line 624
$memory_29 = $memory_6->[$memory_30];
#line 624
undef($memory_30);
#line 624
post_processing_priv::check_sub_val($memory_17, $memory_29);
#line 624
undef($memory_29);
#line 625
$memory_25 = $memory_25 + $memory_26;
#line 625
goto label_44;
#line 625
label_42:
#line 625
undef($memory_23);
#line 625
undef($memory_24);
#line 625
undef($memory_25);
#line 625
undef($memory_26);
#line 625
undef($memory_27);
#line 625
undef($memory_28);
#line 626
$memory_24 = $memory_22->{'dest'};
#line 626
$memory_23 = [$memory_24];
#line 626
undef($memory_24);
#line 626
$memory_19 = $memory_23;
#line 626
undef($memory_23);
#line 627
post_processing_priv::evaluate_const($memory_7, $memory_8, $memory_16, $memory_17, $memory_6, $memory_5, $memory_19);
#line 627
undef($memory_22);
#line 628
goto label_17;
#line 628
label_20:
#line 628
$memory_22 = c_rt_lib::ov_as($memory_20, 'call');
#line 629
$memory_23 = $memory_22->{'args'};
#line 629
$memory_25 = 0;
#line 629
$memory_26 = 1;
#line 629
$memory_27 = c_rt_lib::array_len($memory_23);
#line 629
label_47:
#line 629
$memory_28 = c_rt_lib::to_nl($memory_25 >= $memory_27);
#line 629
if (c_rt_lib::check_true($memory_28)) {goto label_45;}
#line 629
$memory_24 = $memory_23->[$memory_25];
#line 630
$memory_29 = c_rt_lib::ov_is($memory_24, 'val');
#line 630
if (c_rt_lib::check_true($memory_29)) {goto label_49;}
#line 632
$memory_29 = c_rt_lib::ov_is($memory_24, 'ref');
#line 632
if (c_rt_lib::check_true($memory_29)) {goto label_50;}
#line 632
$memory_29 = "NOMATCHALERT";
#line 632
$memory_29 = [$memory_29,$memory_24];
#line 632
die(dfile::ssave($memory_29));
#line 630
label_49:
#line 630
$memory_30 = c_rt_lib::ov_as($memory_24, 'val');
#line 631
$memory_31 = $memory_6->[$memory_30];
#line 631
post_processing_priv::check_sub_val($memory_17, $memory_31);
#line 631
undef($memory_31);
#line 631
undef($memory_30);
#line 632
goto label_48;
#line 632
label_50:
#line 632
$memory_30 = c_rt_lib::ov_as($memory_24, 'ref');
#line 633
$memory_31 = $memory_6->[$memory_30];
#line 633
post_processing_priv::check_sub_val($memory_17, $memory_31);
#line 633
undef($memory_31);
#line 634
array::push($memory_19, $memory_30);
#line 634
undef($memory_30);
#line 635
goto label_48;
#line 635
label_48:
#line 635
undef($memory_29);
#line 636
$memory_25 = $memory_25 + $memory_26;
#line 636
goto label_47;
#line 636
label_45:
#line 636
undef($memory_23);
#line 636
undef($memory_24);
#line 636
undef($memory_25);
#line 636
undef($memory_26);
#line 636
undef($memory_27);
#line 636
undef($memory_28);
#line 637
$memory_23 = $memory_22->{'dest'};
#line 637
array::push($memory_19, $memory_23);
#line 637
undef($memory_23);
#line 638
$memory_23 = $memory_22->{'mod'};
#line 638
$memory_24 = "";
#line 638
$memory_23 = c_rt_lib::to_nl($memory_23 eq $memory_24);
#line 638
undef($memory_24);
#line 638
if (c_rt_lib::check_true($memory_23)) {goto label_52;}
#line 638
$memory_23 = $memory_22->{'mod'};
#line 638
goto label_51;
#line 638
label_52:
#line 638
$memory_23 = "_priv";
#line 638
$memory_23 = $memory_8 . $memory_23;
#line 638
label_51:
#line 638
$memory_24 = "::";
#line 638
$memory_23 = $memory_23 . $memory_24;
#line 638
undef($memory_24);
#line 638
$memory_24 = $memory_22->{'fun_name'};
#line 638
$memory_23 = $memory_23 . $memory_24;
#line 638
undef($memory_24);
#line 639
$memory_24 = hash::has_key($memory_3, $memory_23);
#line 639
$memory_24 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_24));
#line 639
if (c_rt_lib::check_true($memory_24)) {goto label_54;}
#line 640
$memory_25 = hash::get_value($memory_3, $memory_23);
#line 640
$memory_25 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_25));
#line 640
$memory_25 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_25));
#line 640
if (c_rt_lib::check_true($memory_25)) {goto label_56;}
#line 640
$memory_26 = c_rt_lib::ov_mk_none('no');
#line 640
$memory_17 = $memory_26;
#line 640
undef($memory_26);
#line 640
goto label_56;
#line 640
label_56:
#line 640
undef($memory_25);
#line 641
goto label_53;
#line 641
label_54:
#line 642
$memory_25 = c_rt_lib::ov_mk_none('no');
#line 642
$memory_17 = $memory_25;
#line 642
undef($memory_25);
#line 643
goto label_53;
#line 643
label_53:
#line 643
undef($memory_24);
#line 644
$memory_24 = $memory_22->{'mod'};
#line 644
$memory_25 = "c_rt_lib";
#line 644
$memory_24 = c_rt_lib::to_nl($memory_24 eq $memory_25);
#line 644
undef($memory_25);
#line 644
$memory_24 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_24));
#line 644
if (c_rt_lib::check_true($memory_24)) {goto label_58;}
#line 645
$memory_25 = $memory_22->{'fun_name'};
#line 645
$memory_26 = "init_iter";
#line 645
$memory_25 = c_rt_lib::to_nl($memory_25 eq $memory_26);
#line 645
undef($memory_26);
#line 645
if (c_rt_lib::check_true($memory_25)) {goto label_63;}
#line 645
$memory_25 = $memory_22->{'fun_name'};
#line 645
$memory_26 = "is_end_hash";
#line 645
$memory_25 = c_rt_lib::to_nl($memory_25 eq $memory_26);
#line 645
undef($memory_26);
#line 645
label_63:
#line 645
if (c_rt_lib::check_true($memory_25)) {goto label_62;}
#line 645
$memory_25 = $memory_22->{'fun_name'};
#line 645
$memory_26 = "get_key_iter";
#line 645
$memory_25 = c_rt_lib::to_nl($memory_25 eq $memory_26);
#line 645
undef($memory_26);
#line 645
label_62:
#line 645
if (c_rt_lib::check_true($memory_25)) {goto label_61;}
#line 645
$memory_25 = $memory_22->{'fun_name'};
#line 645
$memory_26 = "next_iter";
#line 645
$memory_25 = c_rt_lib::to_nl($memory_25 eq $memory_26);
#line 645
undef($memory_26);
#line 645
label_61:
#line 645
$memory_25 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_25));
#line 645
if (c_rt_lib::check_true($memory_25)) {goto label_60;}
#line 646
$memory_26 = c_rt_lib::ov_mk_none('no');
#line 646
$memory_17 = $memory_26;
#line 646
undef($memory_26);
#line 647
goto label_60;
#line 647
label_60:
#line 647
undef($memory_25);
#line 648
goto label_58;
#line 648
label_58:
#line 648
undef($memory_24);
#line 649
post_processing_priv::evaluate_const($memory_7, $memory_8, $memory_16, $memory_17, $memory_6, $memory_5, $memory_19);
#line 649
undef($memory_23);
#line 649
undef($memory_22);
#line 650
goto label_17;
#line 650
label_21:
#line 650
$memory_22 = c_rt_lib::ov_as($memory_20, 'una_op');
#line 651
$memory_24 = $memory_22->{'src'};
#line 651
$memory_23 = $memory_6->[$memory_24];
#line 651
undef($memory_24);
#line 651
post_processing_priv::check_sub_val($memory_17, $memory_23);
#line 651
undef($memory_23);
#line 652
$memory_24 = $memory_22->{'dest'};
#line 652
$memory_23 = [$memory_24];
#line 652
undef($memory_24);
#line 652
$memory_19 = $memory_23;
#line 652
undef($memory_23);
#line 653
post_processing_priv::evaluate_const($memory_7, $memory_8, $memory_16, $memory_17, $memory_6, $memory_5, $memory_19);
#line 653
undef($memory_22);
#line 654
goto label_17;
#line 654
label_22:
#line 654
$memory_22 = c_rt_lib::ov_as($memory_20, 'bin_op');
#line 655
$memory_24 = $memory_22->{'left'};
#line 655
$memory_23 = $memory_6->[$memory_24];
#line 655
undef($memory_24);
#line 655
post_processing_priv::check_sub_val($memory_17, $memory_23);
#line 655
undef($memory_23);
#line 656
$memory_24 = $memory_22->{'right'};
#line 656
$memory_23 = $memory_6->[$memory_24];
#line 656
undef($memory_24);
#line 656
post_processing_priv::check_sub_val($memory_17, $memory_23);
#line 656
undef($memory_23);
#line 657
$memory_24 = $memory_22->{'dest'};
#line 657
$memory_23 = [$memory_24];
#line 657
undef($memory_24);
#line 657
$memory_19 = $memory_23;
#line 657
undef($memory_23);
#line 658
post_processing_priv::evaluate_const($memory_7, $memory_8, $memory_16, $memory_17, $memory_6, $memory_5, $memory_19);
#line 658
undef($memory_22);
#line 659
goto label_17;
#line 659
label_23:
#line 659
$memory_22 = c_rt_lib::ov_as($memory_20, 'ov_is');
#line 660
$memory_24 = $memory_22->{'src'};
#line 660
$memory_23 = $memory_6->[$memory_24];
#line 660
undef($memory_24);
#line 660
post_processing_priv::check_sub_val($memory_17, $memory_23);
#line 660
undef($memory_23);
#line 661
$memory_24 = $memory_22->{'dest'};
#line 661
$memory_23 = [$memory_24];
#line 661
undef($memory_24);
#line 661
$memory_19 = $memory_23;
#line 661
undef($memory_23);
#line 662
post_processing_priv::evaluate_const($memory_7, $memory_8, $memory_16, $memory_17, $memory_6, $memory_5, $memory_19);
#line 662
undef($memory_22);
#line 663
goto label_17;
#line 663
label_24:
#line 663
$memory_22 = c_rt_lib::ov_as($memory_20, 'ov_as');
#line 664
$memory_24 = $memory_22->{'src'};
#line 664
$memory_23 = $memory_6->[$memory_24];
#line 664
undef($memory_24);
#line 664
post_processing_priv::check_sub_val($memory_17, $memory_23);
#line 664
undef($memory_23);
#line 665
$memory_24 = $memory_22->{'dest'};
#line 665
$memory_23 = [$memory_24];
#line 665
undef($memory_24);
#line 665
$memory_19 = $memory_23;
#line 665
undef($memory_23);
#line 666
post_processing_priv::evaluate_const($memory_7, $memory_8, $memory_16, $memory_17, $memory_6, $memory_5, $memory_19);
#line 666
undef($memory_22);
#line 667
goto label_17;
#line 667
label_25:
#line 667
$memory_22 = c_rt_lib::ov_as($memory_20, 'func');
#line 668
$memory_24 = $memory_22->{'dest'};
#line 668
$memory_23 = [$memory_24];
#line 668
undef($memory_24);
#line 668
$memory_19 = $memory_23;
#line 668
undef($memory_23);
#line 669
$memory_23 = c_rt_lib::ov_mk_none('no');
#line 669
$memory_17 = $memory_23;
#line 669
undef($memory_23);
#line 670
post_processing_priv::evaluate_const($memory_7, $memory_8, $memory_16, $memory_17, $memory_6, $memory_5, $memory_19);
#line 670
undef($memory_22);
#line 671
goto label_17;
#line 671
label_26:
#line 671
$memory_22 = c_rt_lib::ov_as($memory_20, 'move');
#line 672
$memory_24 = $memory_22->{'src'};
#line 672
$memory_23 = $memory_6->[$memory_24];
#line 672
undef($memory_24);
#line 672
post_processing_priv::check_sub_val($memory_17, $memory_23);
#line 672
undef($memory_23);
#line 673
$memory_24 = $memory_22->{'dest'};
#line 673
$memory_23 = [$memory_24];
#line 673
undef($memory_24);
#line 673
$memory_19 = $memory_23;
#line 673
undef($memory_23);
#line 674
post_processing_priv::evaluate_const($memory_7, $memory_8, $memory_16, $memory_17, $memory_6, $memory_5, $memory_19);
#line 674
undef($memory_22);
#line 675
goto label_17;
#line 675
label_27:
#line 675
$memory_22 = c_rt_lib::ov_as($memory_20, 'load_const');
#line 676
$memory_24 = $memory_22->{'dest'};
#line 676
$memory_23 = [$memory_24];
#line 676
undef($memory_24);
#line 676
$memory_19 = $memory_23;
#line 676
undef($memory_23);
#line 677
$memory_24 = $memory_9->{'from'};
#line 677
$memory_24 = $memory_13 + $memory_24;
#line 677
$memory_25 = $memory_22->{'val'};
#line 677
$memory_23 = {nr => $memory_24,value => $memory_25,};
#line 677
undef($memory_24);
#line 677
undef($memory_25);
#line 677
$memory_23 = c_rt_lib::ov_mk_arg('yes', $memory_23);
#line 677
$memory_17 = $memory_23;
#line 677
undef($memory_23);
#line 678
$memory_23 = $memory_22->{'dest'};
#line 678
$memory_24 = "";
#line 678
$memory_23 = c_rt_lib::to_nl($memory_23 eq $memory_24);
#line 678
undef($memory_24);
#line 678
$memory_23 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_23));
#line 678
$memory_23 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_23));
#line 678
if (c_rt_lib::check_true($memory_23)) {goto label_65;}
#line 678
$memory_25 = $memory_22->{'dest'};
#line 678
$memory_24 = $memory_17;
#line 678
 if (c_rt_lib::get_arrcount($memory_6) > 1) {$memory_6 = [@{$memory_6}];}$memory_6->[$memory_25] = $memory_24;
#line 678
undef($memory_24);
#line 678
undef($memory_25);
#line 678
goto label_65;
#line 678
label_65:
#line 678
undef($memory_23);
#line 679
$memory_24 = $memory_22->{'dest'};
#line 679
$memory_23 = [$memory_24];
#line 679
undef($memory_24);
#line 679
$memory_23 = c_rt_lib::ov_mk_arg('const', $memory_23);
#line 679
$memory_24 = $memory_23;
#line 679
 if (c_rt_lib::get_hashcount($memory_18) > 1) {$memory_18 = {%{$memory_18}};}$memory_18->{'annotation'} = $memory_24;
#line 679
undef($memory_23);
#line 679
undef($memory_24);
#line 679
undef($memory_22);
#line 680
goto label_17;
#line 680
label_28:
#line 680
$memory_22 = c_rt_lib::ov_as($memory_20, 'get_frm_idx');
#line 681
$memory_24 = $memory_22->{'src'};
#line 681
$memory_23 = $memory_6->[$memory_24];
#line 681
undef($memory_24);
#line 681
post_processing_priv::check_sub_val($memory_17, $memory_23);
#line 681
undef($memory_23);
#line 682
$memory_24 = $memory_22->{'idx'};
#line 682
$memory_23 = $memory_6->[$memory_24];
#line 682
undef($memory_24);
#line 682
post_processing_priv::check_sub_val($memory_17, $memory_23);
#line 682
undef($memory_23);
#line 683
$memory_24 = $memory_22->{'dest'};
#line 683
$memory_23 = [$memory_24];
#line 683
undef($memory_24);
#line 683
$memory_19 = $memory_23;
#line 683
undef($memory_23);
#line 684
post_processing_priv::evaluate_const($memory_7, $memory_8, $memory_16, $memory_17, $memory_6, $memory_5, $memory_19);
#line 684
undef($memory_22);
#line 685
goto label_17;
#line 685
label_29:
#line 685
$memory_22 = c_rt_lib::ov_as($memory_20, 'set_at_idx');
#line 686
$memory_24 = $memory_22->{'src'};
#line 686
$memory_23 = $memory_6->[$memory_24];
#line 686
undef($memory_24);
#line 686
post_processing_priv::check_sub_val($memory_17, $memory_23);
#line 686
undef($memory_23);
#line 687
$memory_24 = $memory_22->{'idx'};
#line 687
$memory_23 = $memory_6->[$memory_24];
#line 687
undef($memory_24);
#line 687
post_processing_priv::check_sub_val($memory_17, $memory_23);
#line 687
undef($memory_23);
#line 688
$memory_24 = $memory_22->{'val'};
#line 688
$memory_23 = $memory_6->[$memory_24];
#line 688
undef($memory_24);
#line 688
post_processing_priv::check_sub_val($memory_17, $memory_23);
#line 688
undef($memory_23);
#line 689
$memory_24 = $memory_22->{'src'};
#line 689
$memory_23 = [$memory_24];
#line 689
undef($memory_24);
#line 689
$memory_19 = $memory_23;
#line 689
undef($memory_23);
#line 690
post_processing_priv::evaluate_const($memory_7, $memory_8, $memory_16, $memory_17, $memory_6, $memory_5, $memory_19);
#line 690
undef($memory_22);
#line 691
goto label_17;
#line 691
label_30:
#line 691
$memory_22 = c_rt_lib::ov_as($memory_20, 'get_val');
#line 692
$memory_24 = $memory_22->{'src'};
#line 692
$memory_23 = $memory_6->[$memory_24];
#line 692
undef($memory_24);
#line 692
post_processing_priv::check_sub_val($memory_17, $memory_23);
#line 692
undef($memory_23);
#line 693
$memory_24 = $memory_22->{'dest'};
#line 693
$memory_23 = [$memory_24];
#line 693
undef($memory_24);
#line 693
$memory_19 = $memory_23;
#line 693
undef($memory_23);
#line 694
post_processing_priv::evaluate_const($memory_7, $memory_8, $memory_16, $memory_17, $memory_6, $memory_5, $memory_19);
#line 694
undef($memory_22);
#line 695
goto label_17;
#line 695
label_31:
#line 695
$memory_22 = c_rt_lib::ov_as($memory_20, 'set_val');
#line 696
$memory_24 = $memory_22->{'src'};
#line 696
$memory_23 = $memory_6->[$memory_24];
#line 696
undef($memory_24);
#line 696
post_processing_priv::check_sub_val($memory_17, $memory_23);
#line 696
undef($memory_23);
#line 697
$memory_24 = $memory_22->{'val'};
#line 697
$memory_23 = $memory_6->[$memory_24];
#line 697
undef($memory_24);
#line 697
post_processing_priv::check_sub_val($memory_17, $memory_23);
#line 697
undef($memory_23);
#line 698
$memory_24 = $memory_22->{'src'};
#line 698
$memory_23 = [$memory_24];
#line 698
undef($memory_24);
#line 698
$memory_19 = $memory_23;
#line 698
undef($memory_23);
#line 699
post_processing_priv::evaluate_const($memory_7, $memory_8, $memory_16, $memory_17, $memory_6, $memory_5, $memory_19);
#line 699
undef($memory_22);
#line 700
goto label_17;
#line 700
label_32:
#line 700
$memory_22 = c_rt_lib::ov_as($memory_20, 'ov_mk');
#line 701
$memory_23 = $memory_22->{'src'};
#line 701
$memory_23 = c_rt_lib::ov_is($memory_23, 'arg');
#line 701
$memory_23 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_23));
#line 701
if (c_rt_lib::check_true($memory_23)) {goto label_67;}
#line 702
$memory_25 = $memory_22->{'src'};
#line 702
$memory_25 = c_rt_lib::ov_as($memory_25, 'arg');
#line 702
$memory_24 = $memory_6->[$memory_25];
#line 702
undef($memory_25);
#line 702
post_processing_priv::check_sub_val($memory_17, $memory_24);
#line 702
undef($memory_24);
#line 703
goto label_67;
#line 703
label_67:
#line 703
undef($memory_23);
#line 704
$memory_24 = $memory_22->{'dest'};
#line 704
$memory_23 = [$memory_24];
#line 704
undef($memory_24);
#line 704
$memory_19 = $memory_23;
#line 704
undef($memory_23);
#line 705
post_processing_priv::evaluate_const($memory_7, $memory_8, $memory_16, $memory_17, $memory_6, $memory_5, $memory_19);
#line 705
undef($memory_22);
#line 706
goto label_17;
#line 706
label_33:
#line 706
$memory_22 = c_rt_lib::ov_as($memory_20, 'return');
#line 707
$memory_23 = c_rt_lib::ov_mk_none('no');
#line 707
$memory_17 = $memory_23;
#line 707
undef($memory_23);
#line 708
$memory_23 = $memory_22;
#line 708
$memory_23 = c_rt_lib::ov_is($memory_23, 'val');
#line 708
$memory_23 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_23));
#line 708
if (c_rt_lib::check_true($memory_23)) {goto label_69;}
#line 709
$memory_25 = $memory_22;
#line 709
$memory_25 = c_rt_lib::ov_as($memory_25, 'val');
#line 709
$memory_24 = $memory_6->[$memory_25];
#line 709
undef($memory_25);
#line 709
post_processing_priv::check_sub_val($memory_17, $memory_24);
#line 709
undef($memory_24);
#line 710
goto label_69;
#line 710
label_69:
#line 710
undef($memory_23);
#line 710
undef($memory_22);
#line 711
goto label_17;
#line 711
label_34:
#line 711
$memory_22 = c_rt_lib::ov_as($memory_20, 'die');
#line 712
$memory_23 = c_rt_lib::ov_mk_none('no');
#line 712
$memory_17 = $memory_23;
#line 712
undef($memory_23);
#line 713
$memory_23 = $memory_6->[$memory_22];
#line 713
post_processing_priv::check_sub_val($memory_17, $memory_23);
#line 713
undef($memory_23);
#line 713
undef($memory_22);
#line 714
goto label_17;
#line 714
label_35:
#line 714
$memory_22 = c_rt_lib::ov_as($memory_20, 'prt_lbl');
#line 715
$memory_23 = c_rt_lib::ov_mk_none('no');
#line 715
$memory_17 = $memory_23;
#line 715
undef($memory_23);
#line 715
undef($memory_22);
#line 716
goto label_17;
#line 716
label_36:
#line 716
$memory_22 = c_rt_lib::ov_as($memory_20, 'if_goto');
#line 717
$memory_23 = c_rt_lib::ov_mk_none('no');
#line 717
$memory_17 = $memory_23;
#line 717
undef($memory_23);
#line 718
$memory_24 = $memory_22->{'src'};
#line 718
$memory_23 = $memory_6->[$memory_24];
#line 718
undef($memory_24);
#line 718
post_processing_priv::check_sub_val($memory_17, $memory_23);
#line 718
undef($memory_23);
#line 718
undef($memory_22);
#line 719
goto label_17;
#line 719
label_37:
#line 719
$memory_22 = c_rt_lib::ov_as($memory_20, 'goto');
#line 720
$memory_23 = c_rt_lib::ov_mk_none('no');
#line 720
$memory_17 = $memory_23;
#line 720
undef($memory_23);
#line 720
undef($memory_22);
#line 721
goto label_17;
#line 721
label_38:
#line 721
$memory_22 = c_rt_lib::ov_as($memory_20, 'clear');
#line 722
$memory_23 = c_rt_lib::ov_mk_none('no');
#line 722
$memory_17 = $memory_23;
#line 722
undef($memory_23);
#line 723
$memory_23 = c_rt_lib::ov_mk_none('no');
#line 723
$memory_24 = $memory_23;
#line 723
 if (c_rt_lib::get_arrcount($memory_6) > 1) {$memory_6 = [@{$memory_6}];}$memory_6->[$memory_22] = $memory_24;
#line 723
undef($memory_23);
#line 723
undef($memory_24);
#line 723
undef($memory_22);
#line 724
goto label_17;
#line 724
label_17:
#line 724
undef($memory_20);
#line 724
undef($memory_21);
#line 725
$memory_20 = $memory_17;
#line 725
$memory_20 = c_rt_lib::ov_is($memory_20, 'yes');
#line 725
$memory_20 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_20));
#line 725
if (c_rt_lib::check_true($memory_20)) {goto label_71;}
#line 726
$memory_22 = 0;
#line 726
$memory_23 = 1;
#line 726
$memory_24 = c_rt_lib::array_len($memory_19);
#line 726
label_74:
#line 726
$memory_25 = c_rt_lib::to_nl($memory_22 >= $memory_24);
#line 726
if (c_rt_lib::check_true($memory_25)) {goto label_72;}
#line 726
$memory_21 = $memory_19->[$memory_22];
#line 727
$memory_26 = "";
#line 727
$memory_26 = c_rt_lib::to_nl($memory_21 eq $memory_26);
#line 727
$memory_26 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_26));
#line 727
$memory_26 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_26));
#line 727
if (c_rt_lib::check_true($memory_26)) {goto label_76;}
#line 727
$memory_27 = $memory_6->[$memory_21];
#line 727
$memory_28 = $memory_11->[$memory_13];
#line 727
post_processing_priv::push_load_const($memory_10, $memory_27, $memory_21, $memory_28);
#line 727
undef($memory_28);
#line 727
undef($memory_27);
#line 727
goto label_76;
#line 727
label_76:
#line 727
undef($memory_26);
#line 728
$memory_22 = $memory_22 + $memory_23;
#line 728
goto label_74;
#line 728
label_72:
#line 728
undef($memory_21);
#line 728
undef($memory_22);
#line 728
undef($memory_23);
#line 728
undef($memory_24);
#line 728
undef($memory_25);
#line 729
goto label_70;
#line 729
label_71:
#line 730
array::push($memory_10, $memory_18);
#line 731
goto label_70;
#line 731
label_70:
#line 731
undef($memory_20);
#line 731
undef($memory_16);
#line 731
undef($memory_17);
#line 731
undef($memory_18);
#line 731
undef($memory_19);
#line 732
$memory_13 = $memory_13 + $memory_14;
#line 732
goto label_16;
#line 732
label_14:
#line 732
undef($memory_12);
#line 732
undef($memory_13);
#line 732
undef($memory_14);
#line 732
undef($memory_15);
#line 733
$memory_12 = c_rt_lib::get_ref_arr($memory_2, $memory_0);
#line 733
$memory_13 = $memory_10;
#line 733
 if (c_rt_lib::get_hashcount($memory_12) > 1) {$memory_12 = {%{$memory_12}};}$memory_12->{'cmds'} = $memory_13;
#line 733
c_rt_lib::set_ref_arr($memory_2, $memory_0, $memory_12);
#line 733
undef($memory_12);
#line 733
undef($memory_13);
#line 734
$memory_12 = $memory_9->{'next'};
#line 734
$memory_14 = 0;
#line 734
$memory_15 = 1;
#line 734
$memory_16 = c_rt_lib::array_len($memory_12);
#line 734
label_79:
#line 734
$memory_17 = c_rt_lib::to_nl($memory_14 >= $memory_16);
#line 734
if (c_rt_lib::check_true($memory_17)) {goto label_77;}
#line 734
$memory_13 = $memory_12->[$memory_14];
#line 735
post_processing_priv::set_const_block_val($memory_13, $memory_1, $memory_2, $memory_3, $memory_4, $memory_5, $memory_6, $memory_7, $memory_8);
#line 736
$memory_14 = $memory_14 + $memory_15;
#line 736
goto label_79;
#line 736
label_77:
#line 736
undef($memory_12);
#line 736
undef($memory_13);
#line 736
undef($memory_14);
#line 736
undef($memory_15);
#line 736
undef($memory_16);
#line 736
undef($memory_17);
#line 736
undef($memory_9);
#line 736
undef($memory_10);
#line 736
undef($memory_11);
#line 736
undef($memory_0);
#line 736
undef($memory_1);
#line 736
undef($memory_3);
#line 736
undef($memory_5);
#line 736
undef($memory_6);
#line 736
undef($memory_7);
#line 736
undef($memory_8);
#line 736
$_[2] = $memory_2;$_[4] = $memory_4;return;
$_[2] = $memory_2;$_[4] = $memory_4;}

sub post_processing_priv::delete_unused_labels_com($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;my $memory_13;my $memory_14;my $memory_15;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);
#line 739
$memory_1 = {};
#line 740
$memory_2 = {};
#line 742
$memory_4 = "";
#line 743
$memory_6 = 0;
#line 743
$memory_7 = 1;
#line 743
$memory_8 = c_rt_lib::array_len($memory_0);
#line 743
label_3:
#line 743
$memory_9 = c_rt_lib::to_nl($memory_6 >= $memory_8);
#line 743
if (c_rt_lib::check_true($memory_9)) {goto label_1;}
#line 743
$memory_5 = $memory_0->[$memory_6];
#line 744
$memory_10 = $memory_5->{'cmd'};
#line 745
$memory_11 = $memory_10;
#line 745
$memory_11 = c_rt_lib::ov_is($memory_11, 'prt_lbl');
#line 745
$memory_11 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_11));
#line 745
if (c_rt_lib::check_true($memory_11)) {goto label_5;}
#line 746
$memory_12 = $memory_10;
#line 746
$memory_12 = c_rt_lib::ov_as($memory_12, 'prt_lbl');
#line 746
$memory_3 = $memory_12;
#line 746
undef($memory_12);
#line 747
$memory_12 = "";
#line 747
$memory_12 = c_rt_lib::to_nl($memory_4 eq $memory_12);
#line 747
$memory_12 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_12));
#line 747
if (c_rt_lib::check_true($memory_12)) {goto label_7;}
#line 748
$memory_4 = $memory_3;
#line 749
goto label_6;
#line 749
label_7:
#line 750
hash::set_value($memory_2, $memory_3, $memory_4);
#line 751
goto label_6;
#line 751
label_6:
#line 751
undef($memory_12);
#line 752
goto label_4;
#line 752
label_5:
#line 753
$memory_12 = "";
#line 753
$memory_4 = $memory_12;
#line 753
undef($memory_12);
#line 754
goto label_4;
#line 754
label_4:
#line 754
undef($memory_11);
#line 755
$memory_11 = $memory_10;
#line 755
$memory_11 = c_rt_lib::ov_is($memory_11, 'goto');
#line 755
$memory_11 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_11));
#line 755
if (c_rt_lib::check_true($memory_11)) {goto label_9;}
#line 756
$memory_12 = $memory_10;
#line 756
$memory_12 = c_rt_lib::ov_as($memory_12, 'goto');
#line 756
$memory_3 = $memory_12;
#line 756
undef($memory_12);
#line 757
hash::set_value($memory_1, $memory_3, $memory_3);
#line 758
goto label_10;
#line 758
label_9:
#line 758
$memory_11 = $memory_10;
#line 758
$memory_11 = c_rt_lib::ov_is($memory_11, 'if_goto');
#line 758
$memory_11 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_11));
#line 758
if (c_rt_lib::check_true($memory_11)) {goto label_10;}
#line 759
$memory_12 = $memory_10;
#line 759
$memory_12 = c_rt_lib::ov_as($memory_12, 'if_goto');
#line 759
$memory_3 = $memory_12;
#line 759
undef($memory_12);
#line 760
$memory_12 = $memory_3->{'dest'};
#line 760
$memory_13 = $memory_3->{'dest'};
#line 760
hash::set_value($memory_1, $memory_12, $memory_13);
#line 760
undef($memory_13);
#line 760
undef($memory_12);
#line 761
goto label_10;
#line 761
label_10:
#line 761
undef($memory_11);
#line 761
undef($memory_10);
#line 762
$memory_6 = $memory_6 + $memory_7;
#line 762
goto label_3;
#line 762
label_1:
#line 762
undef($memory_5);
#line 762
undef($memory_6);
#line 762
undef($memory_7);
#line 762
undef($memory_8);
#line 762
undef($memory_9);
#line 763
$memory_7 = c_rt_lib::init_iter($memory_2);
#line 763
label_13:
#line 763
$memory_5 = c_rt_lib::is_end_hash($memory_7);
#line 763
if (c_rt_lib::check_true($memory_5)) {goto label_11;}
#line 763
$memory_5 = c_rt_lib::get_key_iter($memory_7);
#line 763
$memory_6 = c_rt_lib::hash_get_value($memory_2, $memory_5);
#line 764
$memory_8 = hash::has_key($memory_1, $memory_5);
#line 764
$memory_8 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 764
if (c_rt_lib::check_true($memory_8)) {goto label_15;}
#line 765
hash::set_value($memory_1, $memory_6, $memory_6);
#line 766
goto label_15;
#line 766
label_15:
#line 766
undef($memory_8);
#line 767
$memory_7 = c_rt_lib::next_iter($memory_7);
#line 767
goto label_13;
#line 767
label_11:
#line 767
undef($memory_5);
#line 767
undef($memory_6);
#line 767
undef($memory_7);
#line 768
$memory_5 = [];
#line 769
$memory_7 = 0;
#line 769
$memory_8 = 1;
#line 769
$memory_9 = c_rt_lib::array_len($memory_0);
#line 769
label_18:
#line 769
$memory_10 = c_rt_lib::to_nl($memory_7 >= $memory_9);
#line 769
if (c_rt_lib::check_true($memory_10)) {goto label_16;}
#line 769
$memory_6 = $memory_0->[$memory_7];
#line 770
$memory_11 = $memory_6->{'cmd'};
#line 771
$memory_12 = $memory_11;
#line 771
$memory_12 = c_rt_lib::ov_is($memory_12, 'prt_lbl');
#line 771
$memory_12 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_12));
#line 771
if (c_rt_lib::check_true($memory_12)) {goto label_20;}
#line 772
$memory_13 = $memory_11;
#line 772
$memory_13 = c_rt_lib::ov_as($memory_13, 'prt_lbl');
#line 772
$memory_3 = $memory_13;
#line 772
undef($memory_13);
#line 773
$memory_13 = hash::has_key($memory_2, $memory_3);
#line 773
$memory_13 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_13));
#line 773
if (c_rt_lib::check_true($memory_13)) {goto label_22;}
#line 773
undef($memory_11);
#line 773
undef($memory_12);
#line 773
undef($memory_13);
#line 773
goto label_17;
#line 773
goto label_22;
#line 773
label_22:
#line 773
undef($memory_13);
#line 774
$memory_13 = hash::has_key($memory_1, $memory_3);
#line 774
$memory_13 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_13));
#line 774
$memory_13 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_13));
#line 774
if (c_rt_lib::check_true($memory_13)) {goto label_24;}
#line 774
undef($memory_11);
#line 774
undef($memory_12);
#line 774
undef($memory_13);
#line 774
goto label_17;
#line 774
goto label_24;
#line 774
label_24:
#line 774
undef($memory_13);
#line 775
goto label_28;
#line 775
label_20:
#line 775
$memory_12 = $memory_11;
#line 775
$memory_12 = c_rt_lib::ov_is($memory_12, 'goto');
#line 775
$memory_12 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_12));
#line 775
if (c_rt_lib::check_true($memory_12)) {goto label_25;}
#line 776
$memory_13 = $memory_11;
#line 776
$memory_13 = c_rt_lib::ov_as($memory_13, 'goto');
#line 776
$memory_3 = $memory_13;
#line 776
undef($memory_13);
#line 777
$memory_13 = hash::has_key($memory_2, $memory_3);
#line 777
$memory_13 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_13));
#line 777
if (c_rt_lib::check_true($memory_13)) {goto label_27;}
#line 777
$memory_14 = hash::get_value($memory_2, $memory_3);
#line 777
$memory_3 = $memory_14;
#line 777
undef($memory_14);
#line 777
goto label_27;
#line 777
label_27:
#line 777
undef($memory_13);
#line 778
$memory_13 = c_rt_lib::ov_mk_arg('goto', $memory_3);
#line 778
$memory_11 = $memory_13;
#line 778
undef($memory_13);
#line 779
goto label_28;
#line 779
label_25:
#line 779
$memory_12 = $memory_11;
#line 779
$memory_12 = c_rt_lib::ov_is($memory_12, 'if_goto');
#line 779
$memory_12 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_12));
#line 779
if (c_rt_lib::check_true($memory_12)) {goto label_28;}
#line 780
$memory_13 = $memory_11;
#line 780
$memory_13 = c_rt_lib::ov_as($memory_13, 'if_goto');
#line 780
$memory_3 = $memory_13;
#line 780
undef($memory_13);
#line 781
$memory_14 = $memory_3->{'dest'};
#line 781
$memory_13 = hash::has_key($memory_2, $memory_14);
#line 781
undef($memory_14);
#line 781
$memory_13 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_13));
#line 781
if (c_rt_lib::check_true($memory_13)) {goto label_30;}
#line 781
$memory_15 = $memory_3->{'dest'};
#line 781
$memory_14 = hash::get_value($memory_2, $memory_15);
#line 781
undef($memory_15);
#line 781
$memory_15 = $memory_14;
#line 781
 if (c_rt_lib::get_hashcount($memory_3) > 1) {$memory_3 = {%{$memory_3}};}$memory_3->{'dest'} = $memory_15;
#line 781
undef($memory_14);
#line 781
undef($memory_15);
#line 781
goto label_30;
#line 781
label_30:
#line 781
undef($memory_13);
#line 782
$memory_13 = c_rt_lib::ov_mk_arg('if_goto', $memory_3);
#line 782
$memory_11 = $memory_13;
#line 782
undef($memory_13);
#line 783
goto label_28;
#line 783
label_28:
#line 783
undef($memory_12);
#line 784
$memory_12 = $memory_6;
#line 785
$memory_13 = $memory_11;
#line 785
 if (c_rt_lib::get_hashcount($memory_12) > 1) {$memory_12 = {%{$memory_12}};}$memory_12->{'cmd'} = $memory_13;
#line 785
undef($memory_13);
#line 786
array::push($memory_5, $memory_12);
#line 786
undef($memory_11);
#line 786
undef($memory_12);
#line 786
label_17:
#line 787
$memory_7 = $memory_7 + $memory_8;
#line 787
goto label_18;
#line 787
label_16:
#line 787
undef($memory_6);
#line 787
undef($memory_7);
#line 787
undef($memory_8);
#line 787
undef($memory_9);
#line 787
undef($memory_10);
#line 788
$memory_0 = $memory_5;
#line 788
undef($memory_1);
#line 788
undef($memory_2);
#line 788
undef($memory_3);
#line 788
undef($memory_4);
#line 788
undef($memory_5);
#line 788
$_[0] = $memory_0;return;
$_[0] = $memory_0;}
