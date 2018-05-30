use c_rt_lib;
use ptd;
use nlasm;
use array;
use ov;
use hash;
use flow_graph;
use unnecessary_commands;
use interpreter;
use const_evaluator;
use post_processing_t;
use register_cleaner;
sub post_processing_priv::get_command_for_const;
sub post_processing::init;
sub post_processing::clear_module_from_state;
sub post_processing_priv::post_processing_labels;
sub post_processing_priv::delete_unnecessary_commands;
sub post_processing::find;
sub post_processing_priv::set_const_commands_in_modules;
sub post_processing_priv::set_const_block;
sub post_processing_priv::set_interpreted_changed_functions;
sub post_processing_priv::get_called_switched;
sub post_processing_priv::get_switched_func;
sub post_processing_priv::set_function_calls;
sub post_processing::get_call_graph;
sub post_processing_priv::get_math_fun;
sub post_processing_priv::set_non_math_fun_rec;
sub post_processing_priv::set_mathfun_in_modules;
sub post_processing_priv::set_const_reg;
sub post_processing_priv::delete_unused_labels_com;
sub post_processing_priv::recalculate_labels_com;
sub post_processing_priv::check_sub;

return 1;

sub post_processing_priv::__get_command_for_const() {
my $memory_0;my $memory_1;my $memory_2;
#line 19
$memory_0 = {};
#line 20
$memory_1 = "arr_decl";
#line 20
$memory_2 = c_rt_lib::to_nl(1);
#line 20
hash::set_value($memory_0, $memory_1, $memory_2);
#line 20
undef($memory_2);
#line 20
undef($memory_1);
#line 21
$memory_1 = "hash_decl";
#line 21
$memory_2 = c_rt_lib::to_nl(1);
#line 21
hash::set_value($memory_0, $memory_1, $memory_2);
#line 21
undef($memory_2);
#line 21
undef($memory_1);
#line 22
$memory_1 = "func";
#line 22
$memory_2 = c_rt_lib::to_nl(1);
#line 22
hash::set_value($memory_0, $memory_1, $memory_2);
#line 22
undef($memory_2);
#line 22
undef($memory_1);
#line 23
$memory_1 = "load_const";
#line 23
$memory_2 = c_rt_lib::to_nl(1);
#line 23
hash::set_value($memory_0, $memory_1, $memory_2);
#line 23
undef($memory_2);
#line 23
undef($memory_1);
#line 24
$memory_1 = "ov_mk";
#line 24
$memory_2 = c_rt_lib::to_nl(1);
#line 24
hash::set_value($memory_0, $memory_1, $memory_2);
#line 24
undef($memory_2);
#line 24
undef($memory_1);
#line 25
return $memory_0;
#line 25
undef($memory_0);
#line 25
return;
}

my $_get_command_for_const;
sub post_processing_priv::get_command_for_const() {
	$_get_command_for_const = post_processing_priv::__get_command_for_const() unless defined $_get_command_for_const;
	return $_get_command_for_const;
}

sub post_processing::init($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;$memory_0 = $_[0];$memory_1 = $_[1];
#line 30
$memory_3 = {};
#line 30
$memory_4 = {};
#line 30
$memory_5 = {};
#line 30
$memory_2 = {nl_asm => $memory_3,fun_calls => $memory_4,math_fs => $memory_5,};
#line 30
undef($memory_3);
#line 30
undef($memory_4);
#line 30
undef($memory_5);
#line 31
$memory_3 = $memory_0;
#line 31
 if (c_rt_lib::get_hashcount($memory_2) > 1) {$memory_2 = {%{$memory_2}};}$memory_2->{'mat_fun_def'} = $memory_3;
#line 31
undef($memory_3);
#line 32
$memory_3 = $memory_1;
#line 32
 if (c_rt_lib::get_hashcount($memory_2) > 1) {$memory_2 = {%{$memory_2}};}$memory_2->{'optimization'} = $memory_3;
#line 32
undef($memory_3);
#line 33
$memory_3 = post_processing_priv::get_command_for_const();
#line 33
$memory_4 = $memory_3;
#line 33
 if (c_rt_lib::get_hashcount($memory_2) > 1) {$memory_2 = {%{$memory_2}};}$memory_2->{'const_com'} = $memory_4;
#line 33
undef($memory_3);
#line 33
undef($memory_4);
#line 34
$memory_4 = [];
#line 34
$memory_5 = {};
#line 34
$memory_3 = interpreter::init($memory_4, $memory_5);
#line 34
undef($memory_5);
#line 34
undef($memory_4);
#line 34
$memory_4 = $memory_3;
#line 34
 if (c_rt_lib::get_hashcount($memory_2) > 1) {$memory_2 = {%{$memory_2}};}$memory_2->{'interpreter_state'} = $memory_4;
#line 34
undef($memory_3);
#line 34
undef($memory_4);
#line 35
undef($memory_0);
#line 35
undef($memory_1);
#line 35
return $memory_2;
#line 35
undef($memory_2);
#line 35
undef($memory_0);
#line 35
undef($memory_1);
#line 35
return;
}

sub post_processing::clear_module_from_state($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];
#line 39
$memory_2 = "nl_asm";
#line 39
$memory_2 = c_rt_lib::get_ref_hash($memory_0, $memory_2);
#line 39
hash::delete($memory_2, $memory_1);
#line 39
$memory_3 = "nl_asm";
#line 39
c_rt_lib::set_ref_hash($memory_0, $memory_3, $memory_2);
#line 39
undef($memory_3);
#line 39
undef($memory_2);
#line 40
$memory_2 = "fun_calls";
#line 40
$memory_2 = c_rt_lib::get_ref_hash($memory_0, $memory_2);
#line 40
hash::delete($memory_2, $memory_1);
#line 40
$memory_3 = "fun_calls";
#line 40
c_rt_lib::set_ref_hash($memory_0, $memory_3, $memory_2);
#line 40
undef($memory_3);
#line 40
undef($memory_2);
#line 40
undef($memory_1);
#line 40
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub post_processing_priv::post_processing_labels($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;my $memory_13;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);
#line 44
$memory_1 = {};
#line 45
$memory_4 = c_rt_lib::init_iter($memory_0);
#line 45
label_2:
#line 45
$memory_2 = c_rt_lib::is_end_hash($memory_4);
#line 45
if (c_rt_lib::check_true($memory_2)) {goto label_57;}
#line 45
$memory_2 = c_rt_lib::get_key_iter($memory_4);
#line 45
$memory_3 = c_rt_lib::hash_get_value($memory_0, $memory_2);
#line 46
$memory_5 = $memory_3;
#line 47
$memory_7 = $memory_5->{'functions'};
#line 47
$memory_6 = array::len($memory_7);
#line 47
undef($memory_7);
#line 47
$memory_7 = 0;
#line 47
$memory_8 = 1;
#line 47
label_13:
#line 47
$memory_9 = c_rt_lib::to_nl($memory_7 >= $memory_6);
#line 47
if (c_rt_lib::check_true($memory_9)) {goto label_48;}
#line 48
$memory_10 = "functions";
#line 48
$memory_10 = c_rt_lib::get_ref_hash($memory_5, $memory_10);
#line 48
$memory_11 = c_rt_lib::get_ref_arr($memory_10, $memory_7);
#line 48
$memory_12 = "commands";
#line 48
$memory_12 = c_rt_lib::get_ref_hash($memory_11, $memory_12);
#line 48
post_processing_priv::delete_unused_labels_com($memory_12);
#line 48
$memory_13 = "commands";
#line 48
c_rt_lib::set_ref_hash($memory_11, $memory_13, $memory_12);
#line 48
c_rt_lib::set_ref_arr($memory_10, $memory_7, $memory_11);
#line 48
$memory_13 = "functions";
#line 48
c_rt_lib::set_ref_hash($memory_5, $memory_13, $memory_10);
#line 48
undef($memory_13);
#line 48
undef($memory_10);
#line 48
undef($memory_11);
#line 48
undef($memory_12);
#line 49
$memory_10 = "functions";
#line 49
$memory_10 = c_rt_lib::get_ref_hash($memory_5, $memory_10);
#line 49
$memory_11 = c_rt_lib::get_ref_arr($memory_10, $memory_7);
#line 49
$memory_12 = "commands";
#line 49
$memory_12 = c_rt_lib::get_ref_hash($memory_11, $memory_12);
#line 49
post_processing_priv::recalculate_labels_com($memory_12);
#line 49
$memory_13 = "commands";
#line 49
c_rt_lib::set_ref_hash($memory_11, $memory_13, $memory_12);
#line 49
c_rt_lib::set_ref_arr($memory_10, $memory_7, $memory_11);
#line 49
$memory_13 = "functions";
#line 49
c_rt_lib::set_ref_hash($memory_5, $memory_13, $memory_10);
#line 49
undef($memory_13);
#line 49
undef($memory_10);
#line 49
undef($memory_11);
#line 49
undef($memory_12);
#line 50
$memory_7 = $memory_7 + $memory_8;
#line 50
goto label_13;
#line 50
label_48:
#line 50
undef($memory_6);
#line 50
undef($memory_7);
#line 50
undef($memory_8);
#line 50
undef($memory_9);
#line 51
hash::set_value($memory_1, $memory_2, $memory_5);
#line 51
undef($memory_5);
#line 52
$memory_4 = c_rt_lib::next_iter($memory_4);
#line 52
goto label_2;
#line 52
label_57:
#line 52
undef($memory_2);
#line 52
undef($memory_3);
#line 52
undef($memory_4);
#line 53
$memory_0 = $memory_1;
#line 53
undef($memory_1);
#line 53
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub post_processing_priv::delete_unnecessary_commands($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);
#line 57
$memory_1 = {};
#line 58
$memory_4 = c_rt_lib::init_iter($memory_0);
#line 58
label_2:
#line 58
$memory_2 = c_rt_lib::is_end_hash($memory_4);
#line 58
if (c_rt_lib::check_true($memory_2)) {goto label_37;}
#line 58
$memory_2 = c_rt_lib::get_key_iter($memory_4);
#line 58
$memory_3 = c_rt_lib::hash_get_value($memory_0, $memory_2);
#line 59
$memory_5 = $memory_3;
#line 60
$memory_7 = $memory_5->{'functions'};
#line 60
$memory_6 = array::len($memory_7);
#line 60
undef($memory_7);
#line 60
$memory_7 = 0;
#line 60
$memory_8 = 1;
#line 60
label_13:
#line 60
$memory_9 = c_rt_lib::to_nl($memory_7 >= $memory_6);
#line 60
if (c_rt_lib::check_true($memory_9)) {goto label_28;}
#line 61
$memory_10 = "functions";
#line 61
$memory_10 = c_rt_lib::get_ref_hash($memory_5, $memory_10);
#line 61
$memory_11 = c_rt_lib::get_ref_arr($memory_10, $memory_7);
#line 61
unnecessary_commands::delete_unnecessary_commands($memory_11);
#line 61
c_rt_lib::set_ref_arr($memory_10, $memory_7, $memory_11);
#line 61
$memory_12 = "functions";
#line 61
c_rt_lib::set_ref_hash($memory_5, $memory_12, $memory_10);
#line 61
undef($memory_12);
#line 61
undef($memory_10);
#line 61
undef($memory_11);
#line 62
$memory_7 = $memory_7 + $memory_8;
#line 62
goto label_13;
#line 62
label_28:
#line 62
undef($memory_6);
#line 62
undef($memory_7);
#line 62
undef($memory_8);
#line 62
undef($memory_9);
#line 63
hash::set_value($memory_1, $memory_2, $memory_5);
#line 63
undef($memory_5);
#line 64
$memory_4 = c_rt_lib::next_iter($memory_4);
#line 64
goto label_2;
#line 64
label_37:
#line 64
undef($memory_2);
#line 64
undef($memory_3);
#line 64
undef($memory_4);
#line 65
$memory_0 = $memory_1;
#line 65
undef($memory_1);
#line 65
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub post_processing::find($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];Scalar::Util::weaken($_[1]) if ref($_[1]);
#line 70
post_processing_priv::post_processing_labels($memory_1);
#line 71
$memory_2 = $memory_0->{'optimization'};
#line 71
$memory_2 = c_rt_lib::ov_is($memory_2, 'o0');
#line 71
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 71
if (c_rt_lib::check_true($memory_2)) {goto label_8;}
#line 71
undef($memory_2);
#line 71
$_[0] = $memory_0;$_[1] = $memory_1;return;
#line 71
goto label_8;
#line 71
label_8:
#line 71
undef($memory_2);
#line 72
$memory_2 = "fun_calls";
#line 72
$memory_2 = c_rt_lib::get_ref_hash($memory_0, $memory_2);
#line 72
post_processing_priv::set_function_calls($memory_2, $memory_1);
#line 72
$memory_3 = "fun_calls";
#line 72
c_rt_lib::set_ref_hash($memory_0, $memory_3, $memory_2);
#line 72
undef($memory_3);
#line 72
undef($memory_2);
#line 73
$memory_3 = $memory_0->{'fun_calls'};
#line 73
$memory_4 = $memory_0->{'mat_fun_def'};
#line 73
$memory_2 = post_processing_priv::get_math_fun($memory_3, $memory_4);
#line 73
undef($memory_4);
#line 73
undef($memory_3);
#line 74
$memory_5 = c_rt_lib::init_iter($memory_1);
#line 74
label_23:
#line 74
$memory_3 = c_rt_lib::is_end_hash($memory_5);
#line 74
if (c_rt_lib::check_true($memory_3)) {goto label_37;}
#line 74
$memory_3 = c_rt_lib::get_key_iter($memory_5);
#line 74
$memory_4 = c_rt_lib::hash_get_value($memory_1, $memory_3);
#line 75
$memory_6 = "nl_asm";
#line 75
$memory_6 = c_rt_lib::get_ref_hash($memory_0, $memory_6);
#line 75
hash::set_value($memory_6, $memory_3, $memory_4);
#line 75
$memory_7 = "nl_asm";
#line 75
c_rt_lib::set_ref_hash($memory_0, $memory_7, $memory_6);
#line 75
undef($memory_7);
#line 75
undef($memory_6);
#line 76
$memory_5 = c_rt_lib::next_iter($memory_5);
#line 76
goto label_23;
#line 76
label_37:
#line 76
undef($memory_3);
#line 76
undef($memory_4);
#line 76
undef($memory_5);
#line 77
$memory_3 = {};
#line 78
$memory_4 = $memory_0->{'optimization'};
#line 78
$memory_5 = c_rt_lib::ov_is($memory_4, 'o0');
#line 78
if (c_rt_lib::check_true($memory_5)) {goto label_56;}
#line 79
$memory_5 = c_rt_lib::ov_is($memory_4, 'o1');
#line 79
if (c_rt_lib::check_true($memory_5)) {goto label_58;}
#line 81
$memory_5 = c_rt_lib::ov_is($memory_4, 'o2');
#line 81
if (c_rt_lib::check_true($memory_5)) {goto label_61;}
#line 84
$memory_5 = c_rt_lib::ov_is($memory_4, 'o3');
#line 84
if (c_rt_lib::check_true($memory_5)) {goto label_67;}
#line 88
$memory_5 = c_rt_lib::ov_is($memory_4, 'o4');
#line 88
if (c_rt_lib::check_true($memory_5)) {goto label_74;}
#line 88
$memory_5 = "NOMATCHALERT";
#line 88
$memory_5 = [$memory_5,$memory_4];
#line 88
die(dfile::ssave($memory_5));
#line 78
label_56:
#line 79
goto label_81;
#line 79
label_58:
#line 80
post_processing_priv::set_mathfun_in_modules($memory_0, $memory_2, $memory_3, $memory_1);
#line 81
goto label_81;
#line 81
label_61:
#line 82
post_processing_priv::set_mathfun_in_modules($memory_0, $memory_2, $memory_3, $memory_1);
#line 83
$memory_6 = $memory_0->{'const_com'};
#line 83
post_processing_priv::set_const_commands_in_modules($memory_0, $memory_3, $memory_1, $memory_6, $memory_2);
#line 83
undef($memory_6);
#line 84
goto label_81;
#line 84
label_67:
#line 85
post_processing_priv::set_mathfun_in_modules($memory_0, $memory_2, $memory_3, $memory_1);
#line 86
$memory_6 = $memory_0->{'const_com'};
#line 86
post_processing_priv::set_const_commands_in_modules($memory_0, $memory_3, $memory_1, $memory_6, $memory_2);
#line 86
undef($memory_6);
#line 87
post_processing_priv::delete_unnecessary_commands($memory_1);
#line 88
goto label_81;
#line 88
label_74:
#line 89
post_processing_priv::set_mathfun_in_modules($memory_0, $memory_2, $memory_3, $memory_1);
#line 90
post_processing_priv::set_interpreted_changed_functions($memory_0, $memory_2, $memory_3);
#line 91
const_evaluator::evaluate_const_in_modules($memory_0, $memory_3, $memory_1, $memory_2);
#line 92
post_processing_priv::delete_unnecessary_commands($memory_1);
#line 93
register_cleaner::clean_registers($memory_1);
#line 94
goto label_81;
#line 94
label_81:
#line 94
undef($memory_4);
#line 94
undef($memory_5);
#line 95
post_processing_priv::post_processing_labels($memory_1);
#line 96
$memory_4 = $memory_2;
#line 96
 if (c_rt_lib::get_hashcount($memory_0) > 1) {$memory_0 = {%{$memory_0}};}$memory_0->{'math_fs'} = $memory_4;
#line 96
undef($memory_4);
#line 96
undef($memory_2);
#line 96
undef($memory_3);
#line 96
$_[0] = $memory_0;$_[1] = $memory_1;return;
$_[0] = $memory_0;$_[1] = $memory_1;}

sub post_processing_priv::set_const_commands_in_modules($$$$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;my $memory_13;my $memory_14;my $memory_15;my $memory_16;my $memory_17;my $memory_18;my $memory_19;my $memory_20;my $memory_21;my $memory_22;my $memory_23;my $memory_24;my $memory_25;my $memory_26;my $memory_27;my $memory_28;my $memory_29;my $memory_30;my $memory_31;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];$memory_2 = $_[2];Scalar::Util::weaken($_[2]) if ref($_[2]);$memory_3 = $_[3];$memory_4 = $_[4];
#line 102
$memory_6 = $memory_0->{'nl_asm'};
#line 102
$memory_5 = hash::keys($memory_6);
#line 102
undef($memory_6);
#line 102
$memory_7 = 0;
#line 102
$memory_8 = 1;
#line 102
$memory_9 = c_rt_lib::array_len($memory_5);
#line 102
label_6:
#line 102
$memory_10 = c_rt_lib::to_nl($memory_7 >= $memory_9);
#line 102
if (c_rt_lib::check_true($memory_10)) {goto label_144;}
#line 102
$memory_6 = $memory_5->[$memory_7];
#line 103
$memory_12 = $memory_0->{'nl_asm'};
#line 103
$memory_11 = hash::get_value($memory_12, $memory_6);
#line 103
undef($memory_12);
#line 104
$memory_12 = c_rt_lib::to_nl(0);
#line 105
$memory_14 = $memory_11->{'functions'};
#line 105
$memory_13 = array::len($memory_14);
#line 105
undef($memory_14);
#line 105
$memory_14 = 0;
#line 105
$memory_15 = 1;
#line 105
label_19:
#line 105
$memory_16 = c_rt_lib::to_nl($memory_14 >= $memory_13);
#line 105
if (c_rt_lib::check_true($memory_16)) {goto label_115;}
#line 106
$memory_17 = $memory_11->{'functions'};
#line 106
$memory_17 = $memory_17->[$memory_14];
#line 107
$memory_18 = $memory_17->{'access'};
#line 107
$memory_18 = c_rt_lib::ov_is($memory_18, 'pub');
#line 107
if (c_rt_lib::check_true($memory_18)) {goto label_29;}
#line 107
$memory_18 = "_priv::";
#line 107
goto label_31;
#line 107
label_29:
#line 107
$memory_18 = "::";
#line 107
label_31:
#line 107
$memory_18 = $memory_6 . $memory_18;
#line 107
$memory_19 = $memory_17->{'name'};
#line 107
$memory_18 = $memory_18 . $memory_19;
#line 107
undef($memory_19);
#line 108
$memory_19 = hash::has_key($memory_1, $memory_18);
#line 108
$memory_19 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_19));
#line 108
if (c_rt_lib::check_true($memory_19)) {goto label_109;}
#line 109
$memory_20 = c_rt_lib::to_nl(1);
#line 109
$memory_12 = $memory_20;
#line 109
undef($memory_20);
#line 110
$memory_21 = $memory_17->{'commands'};
#line 110
$memory_22 = $memory_17->{'args_type'};
#line 110
$memory_20 = flow_graph::make_blocks($memory_21, $memory_22);
#line 110
undef($memory_22);
#line 110
undef($memory_21);
#line 111
$memory_21 = $memory_11->{'module_name'};
#line 111
$memory_22 = $memory_17->{'reg_size'};
#line 111
post_processing_priv::set_const_reg($memory_20, $memory_4, $memory_21, $memory_22);
#line 111
undef($memory_22);
#line 111
undef($memory_21);
#line 112
$memory_21 = flow_graph::combine_blocks($memory_20);
#line 113
$memory_22 = array::len($memory_21);
#line 113
$memory_23 = 0;
#line 113
$memory_24 = 1;
#line 113
label_56:
#line 113
$memory_25 = c_rt_lib::to_nl($memory_23 >= $memory_22);
#line 113
if (c_rt_lib::check_true($memory_25)) {goto label_89;}
#line 114
$memory_26 = $memory_21->[$memory_23];
#line 115
$memory_29 = $memory_26->{'cmd'};
#line 115
$memory_28 = ov::get_element($memory_29);
#line 115
undef($memory_29);
#line 115
$memory_27 = hash::has_key($memory_3, $memory_28);
#line 115
undef($memory_28);
#line 115
$memory_27 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_27));
#line 115
$memory_27 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_27));
#line 115
if (c_rt_lib::check_true($memory_27)) {goto label_84;}
#line 116
$memory_28 = $memory_26->{'annotation'};
#line 116
$memory_28 = c_rt_lib::ov_is($memory_28, 'const');
#line 116
$memory_28 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_28));
#line 116
if (c_rt_lib::check_true($memory_28)) {goto label_81;}
#line 117
$memory_29 = c_rt_lib::ov_mk_none('none');
#line 117
$memory_30 = c_rt_lib::get_ref_arr($memory_21, $memory_23);
#line 117
$memory_31 = $memory_29;
#line 117
 if (c_rt_lib::get_hashcount($memory_30) > 1) {$memory_30 = {%{$memory_30}};}$memory_30->{'annotation'} = $memory_31;
#line 117
c_rt_lib::set_ref_arr($memory_21, $memory_23, $memory_30);
#line 117
undef($memory_29);
#line 117
undef($memory_30);
#line 117
undef($memory_31);
#line 118
goto label_81;
#line 118
label_81:
#line 118
undef($memory_28);
#line 119
goto label_84;
#line 119
label_84:
#line 119
undef($memory_27);
#line 119
undef($memory_26);
#line 120
$memory_23 = $memory_23 + $memory_24;
#line 120
goto label_56;
#line 120
label_89:
#line 120
undef($memory_22);
#line 120
undef($memory_23);
#line 120
undef($memory_24);
#line 120
undef($memory_25);
#line 121
$memory_22 = $memory_21;
#line 121
 if (c_rt_lib::get_hashcount($memory_17) > 1) {$memory_17 = {%{$memory_17}};}$memory_17->{'commands'} = $memory_22;
#line 121
undef($memory_22);
#line 122
$memory_22 = "functions";
#line 122
$memory_22 = c_rt_lib::get_ref_hash($memory_11, $memory_22);
#line 122
$memory_23 = $memory_17;
#line 122
 if (c_rt_lib::get_arrcount($memory_22) > 1) {$memory_22 = [@{$memory_22}];}$memory_22->[$memory_14] = $memory_23;
#line 122
$memory_24 = "functions";
#line 122
c_rt_lib::set_ref_hash($memory_11, $memory_24, $memory_22);
#line 122
undef($memory_24);
#line 122
undef($memory_22);
#line 122
undef($memory_23);
#line 122
undef($memory_20);
#line 122
undef($memory_21);
#line 123
goto label_109;
#line 123
label_109:
#line 123
undef($memory_19);
#line 123
undef($memory_17);
#line 123
undef($memory_18);
#line 124
$memory_14 = $memory_14 + $memory_15;
#line 124
goto label_19;
#line 124
label_115:
#line 124
undef($memory_13);
#line 124
undef($memory_14);
#line 124
undef($memory_15);
#line 124
undef($memory_16);
#line 125
$memory_13 = $memory_12;
#line 125
$memory_13 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_13));
#line 125
$memory_13 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_13));
#line 125
if (c_rt_lib::check_true($memory_13)) {goto label_129;}
#line 125
undef($memory_11);
#line 125
undef($memory_12);
#line 125
undef($memory_13);
#line 125
goto label_141;
#line 125
goto label_129;
#line 125
label_129:
#line 125
undef($memory_13);
#line 126
$memory_13 = "nl_asm";
#line 126
$memory_13 = c_rt_lib::get_ref_hash($memory_0, $memory_13);
#line 126
hash::set_value($memory_13, $memory_6, $memory_11);
#line 126
$memory_14 = "nl_asm";
#line 126
c_rt_lib::set_ref_hash($memory_0, $memory_14, $memory_13);
#line 126
undef($memory_14);
#line 126
undef($memory_13);
#line 127
hash::set_value($memory_2, $memory_6, $memory_11);
#line 127
undef($memory_11);
#line 127
undef($memory_12);
#line 127
label_141:
#line 128
$memory_7 = $memory_7 + $memory_8;
#line 128
goto label_6;
#line 128
label_144:
#line 128
undef($memory_5);
#line 128
undef($memory_6);
#line 128
undef($memory_7);
#line 128
undef($memory_8);
#line 128
undef($memory_9);
#line 128
undef($memory_10);
#line 128
undef($memory_1);
#line 128
undef($memory_3);
#line 128
undef($memory_4);
#line 128
$_[0] = $memory_0;$_[2] = $memory_2;return;
$_[0] = $memory_0;$_[2] = $memory_2;}

sub post_processing_priv::set_const_block($$$$$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;my $memory_13;my $memory_14;my $memory_15;my $memory_16;my $memory_17;my $memory_18;my $memory_19;my $memory_20;my $memory_21;my $memory_22;my $memory_23;my $memory_24;my $memory_25;my $memory_26;my $memory_27;my $memory_28;$memory_0 = $_[0];$memory_1 = $_[1];Scalar::Util::weaken($_[1]) if ref($_[1]);$memory_2 = $_[2];$memory_3 = $_[3];Scalar::Util::weaken($_[3]) if ref($_[3]);$memory_4 = $_[4];$memory_5 = $_[5];
#line 133
$memory_6 = $memory_1->[$memory_0];
#line 134
$memory_7 = $memory_3->[$memory_0];
#line 134
$memory_7 = $memory_7->{'was'};
#line 134
$memory_8 = 0;
#line 134
$memory_7 = c_rt_lib::to_nl($memory_7 > $memory_8);
#line 134
undef($memory_8);
#line 134
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 134
if (c_rt_lib::check_true($memory_7)) {goto label_100;}
#line 135
$memory_8 = c_rt_lib::to_nl(0);
#line 136
$memory_9 = $memory_3->[$memory_0];
#line 136
$memory_9 = $memory_9->{'regs'};
#line 137
$memory_10 = array::len($memory_5);
#line 137
$memory_11 = 0;
#line 137
$memory_12 = 1;
#line 137
label_14:
#line 137
$memory_13 = c_rt_lib::to_nl($memory_11 >= $memory_10);
#line 137
if (c_rt_lib::check_true($memory_13)) {goto label_69;}
#line 138
$memory_14 = $memory_9->[$memory_11];
#line 138
$memory_14 = c_rt_lib::ov_is($memory_14, 'no');
#line 138
$memory_14 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_14));
#line 138
if (c_rt_lib::check_true($memory_14)) {goto label_29;}
#line 139
$memory_15 = c_rt_lib::ov_mk_none('no');
#line 139
$memory_16 = $memory_15;
#line 139
 if (c_rt_lib::get_arrcount($memory_5) > 1) {$memory_5 = [@{$memory_5}];}$memory_5->[$memory_11] = $memory_16;
#line 139
undef($memory_15);
#line 139
undef($memory_16);
#line 140
undef($memory_14);
#line 140
goto label_66;
#line 141
goto label_64;
#line 141
label_29:
#line 142
$memory_15 = $memory_5->[$memory_11];
#line 142
$memory_15 = c_rt_lib::ov_is($memory_15, 'yes');
#line 142
$memory_15 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_15));
#line 142
if (c_rt_lib::check_true($memory_15)) {goto label_53;}
#line 143
$memory_16 = $memory_5->[$memory_11];
#line 143
$memory_16 = c_rt_lib::ov_as($memory_16, 'yes');
#line 144
$memory_17 = $memory_9->[$memory_11];
#line 144
$memory_17 = c_rt_lib::ov_as($memory_17, 'yes');
#line 145
$memory_18 = c_rt_lib::to_nl($memory_16 == $memory_17);
#line 145
$memory_18 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_18));
#line 145
if (c_rt_lib::check_true($memory_18)) {goto label_48;}
#line 145
undef($memory_14);
#line 145
undef($memory_15);
#line 145
undef($memory_16);
#line 145
undef($memory_17);
#line 145
undef($memory_18);
#line 145
goto label_66;
#line 145
goto label_48;
#line 145
label_48:
#line 145
undef($memory_18);
#line 145
undef($memory_16);
#line 145
undef($memory_17);
#line 146
goto label_53;
#line 146
label_53:
#line 146
undef($memory_15);
#line 147
$memory_15 = c_rt_lib::ov_mk_none('no');
#line 147
$memory_16 = $memory_15;
#line 147
 if (c_rt_lib::get_arrcount($memory_5) > 1) {$memory_5 = [@{$memory_5}];}$memory_5->[$memory_11] = $memory_16;
#line 147
undef($memory_15);
#line 147
undef($memory_16);
#line 148
$memory_15 = c_rt_lib::to_nl(1);
#line 148
$memory_8 = $memory_15;
#line 148
undef($memory_15);
#line 149
goto label_64;
#line 149
label_64:
#line 149
undef($memory_14);
#line 149
label_66:
#line 150
$memory_11 = $memory_11 + $memory_12;
#line 150
goto label_14;
#line 150
label_69:
#line 150
undef($memory_10);
#line 150
undef($memory_11);
#line 150
undef($memory_12);
#line 150
undef($memory_13);
#line 151
$memory_10 = $memory_8;
#line 151
$memory_10 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_10));
#line 151
$memory_10 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_10));
#line 151
if (c_rt_lib::check_true($memory_10)) {goto label_89;}
#line 151
undef($memory_0);
#line 151
undef($memory_2);
#line 151
undef($memory_4);
#line 151
undef($memory_5);
#line 151
undef($memory_6);
#line 151
undef($memory_7);
#line 151
undef($memory_8);
#line 151
undef($memory_9);
#line 151
undef($memory_10);
#line 151
$_[1] = $memory_1;$_[3] = $memory_3;return;
#line 151
goto label_89;
#line 151
label_89:
#line 151
undef($memory_10);
#line 152
$memory_10 = c_rt_lib::get_ref_arr($memory_3, $memory_0);
#line 152
$memory_11 = $memory_5;
#line 152
 if (c_rt_lib::get_hashcount($memory_10) > 1) {$memory_10 = {%{$memory_10}};}$memory_10->{'regs'} = $memory_11;
#line 152
c_rt_lib::set_ref_arr($memory_3, $memory_0, $memory_10);
#line 152
undef($memory_10);
#line 152
undef($memory_11);
#line 152
undef($memory_8);
#line 152
undef($memory_9);
#line 153
goto label_108;
#line 153
label_100:
#line 154
$memory_8 = c_rt_lib::get_ref_arr($memory_3, $memory_0);
#line 154
$memory_9 = $memory_5;
#line 154
 if (c_rt_lib::get_hashcount($memory_8) > 1) {$memory_8 = {%{$memory_8}};}$memory_8->{'regs'} = $memory_9;
#line 154
c_rt_lib::set_ref_arr($memory_3, $memory_0, $memory_8);
#line 154
undef($memory_8);
#line 154
undef($memory_9);
#line 155
goto label_108;
#line 155
label_108:
#line 155
undef($memory_7);
#line 156
$memory_7 = c_rt_lib::get_ref_arr($memory_3, $memory_0);
#line 156
$memory_8 = "was";
#line 156
$memory_8 = c_rt_lib::get_ref_hash($memory_7, $memory_8);
#line 156
$memory_9 = 1;
#line 156
$memory_8 = $memory_8 + $memory_9;
#line 156
$memory_10 = "was";
#line 156
c_rt_lib::set_ref_hash($memory_7, $memory_10, $memory_8);
#line 156
c_rt_lib::set_ref_arr($memory_3, $memory_0, $memory_7);
#line 156
undef($memory_10);
#line 156
undef($memory_7);
#line 156
undef($memory_8);
#line 156
undef($memory_9);
#line 157
$memory_7 = $memory_6->{'cmds'};
#line 158
$memory_8 = array::len($memory_7);
#line 158
$memory_9 = 0;
#line 158
$memory_10 = 1;
#line 158
label_126:
#line 158
$memory_11 = c_rt_lib::to_nl($memory_9 >= $memory_8);
#line 158
if (c_rt_lib::check_true($memory_11)) {goto label_843;}
#line 159
$memory_12 = [];
#line 160
$memory_13 = [];
#line 161
$memory_14 = $memory_6->{'from'};
#line 161
$memory_14 = $memory_9 + $memory_14;
#line 161
$memory_14 = c_rt_lib::ov_mk_arg('yes', $memory_14);
#line 162
$memory_15 = $memory_7->[$memory_9];
#line 162
$memory_15 = $memory_15->{'cmd'};
#line 162
$memory_16 = c_rt_lib::ov_is($memory_15, 'arr_decl');
#line 162
if (c_rt_lib::check_true($memory_16)) {goto label_181;}
#line 168
$memory_16 = c_rt_lib::ov_is($memory_15, 'hash_decl');
#line 168
if (c_rt_lib::check_true($memory_16)) {goto label_223;}
#line 174
$memory_16 = c_rt_lib::ov_is($memory_15, 'call');
#line 174
if (c_rt_lib::check_true($memory_16)) {goto label_267;}
#line 199
$memory_16 = c_rt_lib::ov_is($memory_15, 'una_op');
#line 199
if (c_rt_lib::check_true($memory_16)) {goto label_413;}
#line 203
$memory_16 = c_rt_lib::ov_is($memory_15, 'bin_op');
#line 203
if (c_rt_lib::check_true($memory_16)) {goto label_440;}
#line 208
$memory_16 = c_rt_lib::ov_is($memory_15, 'ov_is');
#line 208
if (c_rt_lib::check_true($memory_16)) {goto label_472;}
#line 212
$memory_16 = c_rt_lib::ov_is($memory_15, 'ov_as');
#line 212
if (c_rt_lib::check_true($memory_16)) {goto label_499;}
#line 216
$memory_16 = c_rt_lib::ov_is($memory_15, 'func');
#line 216
if (c_rt_lib::check_true($memory_16)) {goto label_526;}
#line 219
$memory_16 = c_rt_lib::ov_is($memory_15, 'move');
#line 219
if (c_rt_lib::check_true($memory_16)) {goto label_548;}
#line 223
$memory_16 = c_rt_lib::ov_is($memory_15, 'load_const');
#line 223
if (c_rt_lib::check_true($memory_16)) {goto label_575;}
#line 226
$memory_16 = c_rt_lib::ov_is($memory_15, 'get_frm_idx');
#line 226
if (c_rt_lib::check_true($memory_16)) {goto label_597;}
#line 231
$memory_16 = c_rt_lib::ov_is($memory_15, 'set_at_idx');
#line 231
if (c_rt_lib::check_true($memory_16)) {goto label_629;}
#line 237
$memory_16 = c_rt_lib::ov_is($memory_15, 'get_val');
#line 237
if (c_rt_lib::check_true($memory_16)) {goto label_656;}
#line 241
$memory_16 = c_rt_lib::ov_is($memory_15, 'set_val');
#line 241
if (c_rt_lib::check_true($memory_16)) {goto label_683;}
#line 246
$memory_16 = c_rt_lib::ov_is($memory_15, 'ov_mk');
#line 246
if (c_rt_lib::check_true($memory_16)) {goto label_705;}
#line 252
$memory_16 = c_rt_lib::ov_is($memory_15, 'return');
#line 252
if (c_rt_lib::check_true($memory_16)) {goto label_740;}
#line 256
$memory_16 = c_rt_lib::ov_is($memory_15, 'die');
#line 256
if (c_rt_lib::check_true($memory_16)) {goto label_757;}
#line 258
$memory_16 = c_rt_lib::ov_is($memory_15, 'prt_lbl');
#line 258
if (c_rt_lib::check_true($memory_16)) {goto label_764;}
#line 260
$memory_16 = c_rt_lib::ov_is($memory_15, 'if_goto');
#line 260
if (c_rt_lib::check_true($memory_16)) {goto label_771;}
#line 262
$memory_16 = c_rt_lib::ov_is($memory_15, 'goto');
#line 262
if (c_rt_lib::check_true($memory_16)) {goto label_780;}
#line 264
$memory_16 = c_rt_lib::ov_is($memory_15, 'clear');
#line 264
if (c_rt_lib::check_true($memory_16)) {goto label_787;}
#line 264
$memory_16 = "NOMATCHALERT";
#line 264
$memory_16 = [$memory_16,$memory_15];
#line 264
die(dfile::ssave($memory_16));
#line 162
label_181:
#line 162
$memory_17 = c_rt_lib::ov_as($memory_15, 'arr_decl');
#line 163
$memory_18 = $memory_17->{'src'};
#line 163
$memory_20 = 0;
#line 163
$memory_21 = 1;
#line 163
$memory_22 = c_rt_lib::array_len($memory_18);
#line 163
label_187:
#line 163
$memory_23 = c_rt_lib::to_nl($memory_20 >= $memory_22);
#line 163
if (c_rt_lib::check_true($memory_23)) {goto label_196;}
#line 163
$memory_19 = $memory_18->[$memory_20];
#line 164
$memory_24 = $memory_5->[$memory_19];
#line 164
post_processing_priv::check_sub($memory_14, $memory_24, $memory_12);
#line 164
undef($memory_24);
#line 165
$memory_20 = $memory_20 + $memory_21;
#line 165
goto label_187;
#line 165
label_196:
#line 165
undef($memory_18);
#line 165
undef($memory_19);
#line 165
undef($memory_20);
#line 165
undef($memory_21);
#line 165
undef($memory_22);
#line 165
undef($memory_23);
#line 166
$memory_18 = $memory_17->{'dest'};
#line 166
$memory_19 = "";
#line 166
$memory_18 = c_rt_lib::to_nl($memory_18 eq $memory_19);
#line 166
undef($memory_19);
#line 166
$memory_18 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_18));
#line 166
$memory_18 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_18));
#line 166
if (c_rt_lib::check_true($memory_18)) {goto label_216;}
#line 166
$memory_20 = $memory_17->{'dest'};
#line 166
$memory_19 = $memory_14;
#line 166
 if (c_rt_lib::get_arrcount($memory_5) > 1) {$memory_5 = [@{$memory_5}];}$memory_5->[$memory_20] = $memory_19;
#line 166
undef($memory_19);
#line 166
undef($memory_20);
#line 166
goto label_216;
#line 166
label_216:
#line 166
undef($memory_18);
#line 167
$memory_18 = $memory_17->{'dest'};
#line 167
array::push($memory_13, $memory_18);
#line 167
undef($memory_18);
#line 167
undef($memory_17);
#line 168
goto label_799;
#line 168
label_223:
#line 168
$memory_17 = c_rt_lib::ov_as($memory_15, 'hash_decl');
#line 169
$memory_18 = $memory_17->{'src'};
#line 169
$memory_20 = 0;
#line 169
$memory_21 = 1;
#line 169
$memory_22 = c_rt_lib::array_len($memory_18);
#line 169
label_229:
#line 169
$memory_23 = c_rt_lib::to_nl($memory_20 >= $memory_22);
#line 169
if (c_rt_lib::check_true($memory_23)) {goto label_240;}
#line 169
$memory_19 = $memory_18->[$memory_20];
#line 170
$memory_25 = $memory_19->{'val'};
#line 170
$memory_24 = $memory_5->[$memory_25];
#line 170
undef($memory_25);
#line 170
post_processing_priv::check_sub($memory_14, $memory_24, $memory_12);
#line 170
undef($memory_24);
#line 171
$memory_20 = $memory_20 + $memory_21;
#line 171
goto label_229;
#line 171
label_240:
#line 171
undef($memory_18);
#line 171
undef($memory_19);
#line 171
undef($memory_20);
#line 171
undef($memory_21);
#line 171
undef($memory_22);
#line 171
undef($memory_23);
#line 172
$memory_18 = $memory_17->{'dest'};
#line 172
$memory_19 = "";
#line 172
$memory_18 = c_rt_lib::to_nl($memory_18 eq $memory_19);
#line 172
undef($memory_19);
#line 172
$memory_18 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_18));
#line 172
$memory_18 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_18));
#line 172
if (c_rt_lib::check_true($memory_18)) {goto label_260;}
#line 172
$memory_20 = $memory_17->{'dest'};
#line 172
$memory_19 = $memory_14;
#line 172
 if (c_rt_lib::get_arrcount($memory_5) > 1) {$memory_5 = [@{$memory_5}];}$memory_5->[$memory_20] = $memory_19;
#line 172
undef($memory_19);
#line 172
undef($memory_20);
#line 172
goto label_260;
#line 172
label_260:
#line 172
undef($memory_18);
#line 173
$memory_18 = $memory_17->{'dest'};
#line 173
array::push($memory_13, $memory_18);
#line 173
undef($memory_18);
#line 173
undef($memory_17);
#line 174
goto label_799;
#line 174
label_267:
#line 174
$memory_17 = c_rt_lib::ov_as($memory_15, 'call');
#line 175
$memory_18 = $memory_17->{'mod'};
#line 175
$memory_19 = "";
#line 175
$memory_18 = c_rt_lib::to_nl($memory_18 eq $memory_19);
#line 175
undef($memory_19);
#line 175
if (c_rt_lib::check_true($memory_18)) {goto label_276;}
#line 175
$memory_18 = $memory_17->{'mod'};
#line 175
goto label_279;
#line 175
label_276:
#line 175
$memory_18 = "_priv";
#line 175
$memory_18 = $memory_4 . $memory_18;
#line 175
label_279:
#line 175
$memory_19 = "::";
#line 175
$memory_18 = $memory_18 . $memory_19;
#line 175
undef($memory_19);
#line 175
$memory_19 = $memory_17->{'fun_name'};
#line 175
$memory_18 = $memory_18 . $memory_19;
#line 175
undef($memory_19);
#line 176
$memory_19 = hash::has_key($memory_2, $memory_18);
#line 176
$memory_19 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_19));
#line 176
if (c_rt_lib::check_true($memory_19)) {goto label_300;}
#line 177
$memory_20 = hash::get_value($memory_2, $memory_18);
#line 177
$memory_20 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_20));
#line 177
$memory_20 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_20));
#line 177
if (c_rt_lib::check_true($memory_20)) {goto label_297;}
#line 177
$memory_21 = c_rt_lib::ov_mk_none('no');
#line 177
$memory_14 = $memory_21;
#line 177
undef($memory_21);
#line 177
goto label_297;
#line 177
label_297:
#line 177
undef($memory_20);
#line 178
goto label_305;
#line 178
label_300:
#line 179
$memory_20 = c_rt_lib::ov_mk_none('no');
#line 179
$memory_14 = $memory_20;
#line 179
undef($memory_20);
#line 180
goto label_305;
#line 180
label_305:
#line 180
undef($memory_19);
#line 181
$memory_19 = $memory_14;
#line 181
$memory_19 = c_rt_lib::ov_is($memory_19, 'yes');
#line 181
$memory_19 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_19));
#line 181
if (c_rt_lib::check_true($memory_19)) {goto label_352;}
#line 182
$memory_20 = $memory_17->{'args'};
#line 182
$memory_22 = 0;
#line 182
$memory_23 = 1;
#line 182
$memory_24 = c_rt_lib::array_len($memory_20);
#line 182
label_315:
#line 182
$memory_25 = c_rt_lib::to_nl($memory_22 >= $memory_24);
#line 182
if (c_rt_lib::check_true($memory_25)) {goto label_344;}
#line 182
$memory_21 = $memory_20->[$memory_22];
#line 183
$memory_26 = c_rt_lib::ov_is($memory_21, 'val');
#line 183
if (c_rt_lib::check_true($memory_26)) {goto label_326;}
#line 185
$memory_26 = c_rt_lib::ov_is($memory_21, 'ref');
#line 185
if (c_rt_lib::check_true($memory_26)) {goto label_333;}
#line 185
$memory_26 = "NOMATCHALERT";
#line 185
$memory_26 = [$memory_26,$memory_21];
#line 185
die(dfile::ssave($memory_26));
#line 183
label_326:
#line 183
$memory_27 = c_rt_lib::ov_as($memory_21, 'val');
#line 184
$memory_28 = $memory_5->[$memory_27];
#line 184
post_processing_priv::check_sub($memory_14, $memory_28, $memory_12);
#line 184
undef($memory_28);
#line 184
undef($memory_27);
#line 185
goto label_340;
#line 185
label_333:
#line 185
$memory_27 = c_rt_lib::ov_as($memory_21, 'ref');
#line 186
$memory_28 = $memory_5->[$memory_27];
#line 186
post_processing_priv::check_sub($memory_14, $memory_28, $memory_12);
#line 186
undef($memory_28);
#line 186
undef($memory_27);
#line 187
goto label_340;
#line 187
label_340:
#line 187
undef($memory_26);
#line 188
$memory_22 = $memory_22 + $memory_23;
#line 188
goto label_315;
#line 188
label_344:
#line 188
undef($memory_20);
#line 188
undef($memory_21);
#line 188
undef($memory_22);
#line 188
undef($memory_23);
#line 188
undef($memory_24);
#line 188
undef($memory_25);
#line 189
goto label_352;
#line 189
label_352:
#line 189
undef($memory_19);
#line 190
$memory_19 = $memory_17->{'args'};
#line 190
$memory_21 = 0;
#line 190
$memory_22 = 1;
#line 190
$memory_23 = c_rt_lib::array_len($memory_19);
#line 190
label_358:
#line 190
$memory_24 = c_rt_lib::to_nl($memory_21 >= $memory_23);
#line 190
if (c_rt_lib::check_true($memory_24)) {goto label_385;}
#line 190
$memory_20 = $memory_19->[$memory_21];
#line 191
$memory_25 = c_rt_lib::ov_is($memory_20, 'val');
#line 191
if (c_rt_lib::check_true($memory_25)) {goto label_369;}
#line 192
$memory_25 = c_rt_lib::ov_is($memory_20, 'ref');
#line 192
if (c_rt_lib::check_true($memory_25)) {goto label_373;}
#line 192
$memory_25 = "NOMATCHALERT";
#line 192
$memory_25 = [$memory_25,$memory_20];
#line 192
die(dfile::ssave($memory_25));
#line 191
label_369:
#line 191
$memory_26 = c_rt_lib::ov_as($memory_20, 'val');
#line 191
undef($memory_26);
#line 192
goto label_381;
#line 192
label_373:
#line 192
$memory_26 = c_rt_lib::ov_as($memory_20, 'ref');
#line 193
$memory_27 = $memory_14;
#line 193
 if (c_rt_lib::get_arrcount($memory_5) > 1) {$memory_5 = [@{$memory_5}];}$memory_5->[$memory_26] = $memory_27;
#line 193
undef($memory_27);
#line 194
array::push($memory_13, $memory_26);
#line 194
undef($memory_26);
#line 195
goto label_381;
#line 195
label_381:
#line 195
undef($memory_25);
#line 196
$memory_21 = $memory_21 + $memory_22;
#line 196
goto label_358;
#line 196
label_385:
#line 196
undef($memory_19);
#line 196
undef($memory_20);
#line 196
undef($memory_21);
#line 196
undef($memory_22);
#line 196
undef($memory_23);
#line 196
undef($memory_24);
#line 197
$memory_19 = $memory_17->{'dest'};
#line 197
$memory_20 = "";
#line 197
$memory_19 = c_rt_lib::to_nl($memory_19 eq $memory_20);
#line 197
undef($memory_20);
#line 197
$memory_19 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_19));
#line 197
$memory_19 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_19));
#line 197
if (c_rt_lib::check_true($memory_19)) {goto label_405;}
#line 197
$memory_21 = $memory_17->{'dest'};
#line 197
$memory_20 = $memory_14;
#line 197
 if (c_rt_lib::get_arrcount($memory_5) > 1) {$memory_5 = [@{$memory_5}];}$memory_5->[$memory_21] = $memory_20;
#line 197
undef($memory_20);
#line 197
undef($memory_21);
#line 197
goto label_405;
#line 197
label_405:
#line 197
undef($memory_19);
#line 198
$memory_19 = $memory_17->{'dest'};
#line 198
array::push($memory_13, $memory_19);
#line 198
undef($memory_19);
#line 198
undef($memory_18);
#line 198
undef($memory_17);
#line 199
goto label_799;
#line 199
label_413:
#line 199
$memory_17 = c_rt_lib::ov_as($memory_15, 'una_op');
#line 200
$memory_19 = $memory_17->{'src'};
#line 200
$memory_18 = $memory_5->[$memory_19];
#line 200
undef($memory_19);
#line 200
post_processing_priv::check_sub($memory_14, $memory_18, $memory_12);
#line 200
undef($memory_18);
#line 201
$memory_18 = $memory_17->{'dest'};
#line 201
$memory_19 = "";
#line 201
$memory_18 = c_rt_lib::to_nl($memory_18 eq $memory_19);
#line 201
undef($memory_19);
#line 201
$memory_18 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_18));
#line 201
$memory_18 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_18));
#line 201
if (c_rt_lib::check_true($memory_18)) {goto label_433;}
#line 201
$memory_20 = $memory_17->{'dest'};
#line 201
$memory_19 = $memory_14;
#line 201
 if (c_rt_lib::get_arrcount($memory_5) > 1) {$memory_5 = [@{$memory_5}];}$memory_5->[$memory_20] = $memory_19;
#line 201
undef($memory_19);
#line 201
undef($memory_20);
#line 201
goto label_433;
#line 201
label_433:
#line 201
undef($memory_18);
#line 202
$memory_18 = $memory_17->{'dest'};
#line 202
array::push($memory_13, $memory_18);
#line 202
undef($memory_18);
#line 202
undef($memory_17);
#line 203
goto label_799;
#line 203
label_440:
#line 203
$memory_17 = c_rt_lib::ov_as($memory_15, 'bin_op');
#line 204
$memory_19 = $memory_17->{'left'};
#line 204
$memory_18 = $memory_5->[$memory_19];
#line 204
undef($memory_19);
#line 204
post_processing_priv::check_sub($memory_14, $memory_18, $memory_12);
#line 204
undef($memory_18);
#line 205
$memory_19 = $memory_17->{'right'};
#line 205
$memory_18 = $memory_5->[$memory_19];
#line 205
undef($memory_19);
#line 205
post_processing_priv::check_sub($memory_14, $memory_18, $memory_12);
#line 205
undef($memory_18);
#line 206
$memory_18 = $memory_17->{'dest'};
#line 206
$memory_19 = "";
#line 206
$memory_18 = c_rt_lib::to_nl($memory_18 eq $memory_19);
#line 206
undef($memory_19);
#line 206
$memory_18 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_18));
#line 206
$memory_18 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_18));
#line 206
if (c_rt_lib::check_true($memory_18)) {goto label_465;}
#line 206
$memory_20 = $memory_17->{'dest'};
#line 206
$memory_19 = $memory_14;
#line 206
 if (c_rt_lib::get_arrcount($memory_5) > 1) {$memory_5 = [@{$memory_5}];}$memory_5->[$memory_20] = $memory_19;
#line 206
undef($memory_19);
#line 206
undef($memory_20);
#line 206
goto label_465;
#line 206
label_465:
#line 206
undef($memory_18);
#line 207
$memory_18 = $memory_17->{'dest'};
#line 207
array::push($memory_13, $memory_18);
#line 207
undef($memory_18);
#line 207
undef($memory_17);
#line 208
goto label_799;
#line 208
label_472:
#line 208
$memory_17 = c_rt_lib::ov_as($memory_15, 'ov_is');
#line 209
$memory_19 = $memory_17->{'src'};
#line 209
$memory_18 = $memory_5->[$memory_19];
#line 209
undef($memory_19);
#line 209
post_processing_priv::check_sub($memory_14, $memory_18, $memory_12);
#line 209
undef($memory_18);
#line 210
$memory_18 = $memory_17->{'dest'};
#line 210
$memory_19 = "";
#line 210
$memory_18 = c_rt_lib::to_nl($memory_18 eq $memory_19);
#line 210
undef($memory_19);
#line 210
$memory_18 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_18));
#line 210
$memory_18 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_18));
#line 210
if (c_rt_lib::check_true($memory_18)) {goto label_492;}
#line 210
$memory_20 = $memory_17->{'dest'};
#line 210
$memory_19 = $memory_14;
#line 210
 if (c_rt_lib::get_arrcount($memory_5) > 1) {$memory_5 = [@{$memory_5}];}$memory_5->[$memory_20] = $memory_19;
#line 210
undef($memory_19);
#line 210
undef($memory_20);
#line 210
goto label_492;
#line 210
label_492:
#line 210
undef($memory_18);
#line 211
$memory_18 = $memory_17->{'dest'};
#line 211
array::push($memory_13, $memory_18);
#line 211
undef($memory_18);
#line 211
undef($memory_17);
#line 212
goto label_799;
#line 212
label_499:
#line 212
$memory_17 = c_rt_lib::ov_as($memory_15, 'ov_as');
#line 213
$memory_19 = $memory_17->{'src'};
#line 213
$memory_18 = $memory_5->[$memory_19];
#line 213
undef($memory_19);
#line 213
post_processing_priv::check_sub($memory_14, $memory_18, $memory_12);
#line 213
undef($memory_18);
#line 214
$memory_18 = $memory_17->{'dest'};
#line 214
$memory_19 = "";
#line 214
$memory_18 = c_rt_lib::to_nl($memory_18 eq $memory_19);
#line 214
undef($memory_19);
#line 214
$memory_18 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_18));
#line 214
$memory_18 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_18));
#line 214
if (c_rt_lib::check_true($memory_18)) {goto label_519;}
#line 214
$memory_20 = $memory_17->{'dest'};
#line 214
$memory_19 = $memory_14;
#line 214
 if (c_rt_lib::get_arrcount($memory_5) > 1) {$memory_5 = [@{$memory_5}];}$memory_5->[$memory_20] = $memory_19;
#line 214
undef($memory_19);
#line 214
undef($memory_20);
#line 214
goto label_519;
#line 214
label_519:
#line 214
undef($memory_18);
#line 215
$memory_18 = $memory_17->{'dest'};
#line 215
array::push($memory_13, $memory_18);
#line 215
undef($memory_18);
#line 215
undef($memory_17);
#line 216
goto label_799;
#line 216
label_526:
#line 216
$memory_17 = c_rt_lib::ov_as($memory_15, 'func');
#line 217
$memory_18 = $memory_17->{'dest'};
#line 217
$memory_19 = "";
#line 217
$memory_18 = c_rt_lib::to_nl($memory_18 eq $memory_19);
#line 217
undef($memory_19);
#line 217
$memory_18 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_18));
#line 217
$memory_18 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_18));
#line 217
if (c_rt_lib::check_true($memory_18)) {goto label_541;}
#line 217
$memory_20 = $memory_17->{'dest'};
#line 217
$memory_19 = $memory_14;
#line 217
 if (c_rt_lib::get_arrcount($memory_5) > 1) {$memory_5 = [@{$memory_5}];}$memory_5->[$memory_20] = $memory_19;
#line 217
undef($memory_19);
#line 217
undef($memory_20);
#line 217
goto label_541;
#line 217
label_541:
#line 217
undef($memory_18);
#line 218
$memory_18 = $memory_17->{'dest'};
#line 218
array::push($memory_13, $memory_18);
#line 218
undef($memory_18);
#line 218
undef($memory_17);
#line 219
goto label_799;
#line 219
label_548:
#line 219
$memory_17 = c_rt_lib::ov_as($memory_15, 'move');
#line 220
$memory_19 = $memory_17->{'src'};
#line 220
$memory_18 = $memory_5->[$memory_19];
#line 220
undef($memory_19);
#line 220
post_processing_priv::check_sub($memory_14, $memory_18, $memory_12);
#line 220
undef($memory_18);
#line 221
$memory_18 = $memory_17->{'dest'};
#line 221
$memory_19 = "";
#line 221
$memory_18 = c_rt_lib::to_nl($memory_18 eq $memory_19);
#line 221
undef($memory_19);
#line 221
$memory_18 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_18));
#line 221
$memory_18 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_18));
#line 221
if (c_rt_lib::check_true($memory_18)) {goto label_568;}
#line 221
$memory_20 = $memory_17->{'dest'};
#line 221
$memory_19 = $memory_14;
#line 221
 if (c_rt_lib::get_arrcount($memory_5) > 1) {$memory_5 = [@{$memory_5}];}$memory_5->[$memory_20] = $memory_19;
#line 221
undef($memory_19);
#line 221
undef($memory_20);
#line 221
goto label_568;
#line 221
label_568:
#line 221
undef($memory_18);
#line 222
$memory_18 = $memory_17->{'dest'};
#line 222
array::push($memory_13, $memory_18);
#line 222
undef($memory_18);
#line 222
undef($memory_17);
#line 223
goto label_799;
#line 223
label_575:
#line 223
$memory_17 = c_rt_lib::ov_as($memory_15, 'load_const');
#line 224
$memory_18 = $memory_17->{'dest'};
#line 224
$memory_19 = "";
#line 224
$memory_18 = c_rt_lib::to_nl($memory_18 eq $memory_19);
#line 224
undef($memory_19);
#line 224
$memory_18 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_18));
#line 224
$memory_18 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_18));
#line 224
if (c_rt_lib::check_true($memory_18)) {goto label_590;}
#line 224
$memory_20 = $memory_17->{'dest'};
#line 224
$memory_19 = $memory_14;
#line 224
 if (c_rt_lib::get_arrcount($memory_5) > 1) {$memory_5 = [@{$memory_5}];}$memory_5->[$memory_20] = $memory_19;
#line 224
undef($memory_19);
#line 224
undef($memory_20);
#line 224
goto label_590;
#line 224
label_590:
#line 224
undef($memory_18);
#line 225
$memory_18 = $memory_17->{'dest'};
#line 225
array::push($memory_13, $memory_18);
#line 225
undef($memory_18);
#line 225
undef($memory_17);
#line 226
goto label_799;
#line 226
label_597:
#line 226
$memory_17 = c_rt_lib::ov_as($memory_15, 'get_frm_idx');
#line 227
$memory_19 = $memory_17->{'src'};
#line 227
$memory_18 = $memory_5->[$memory_19];
#line 227
undef($memory_19);
#line 227
post_processing_priv::check_sub($memory_14, $memory_18, $memory_12);
#line 227
undef($memory_18);
#line 228
$memory_19 = $memory_17->{'idx'};
#line 228
$memory_18 = $memory_5->[$memory_19];
#line 228
undef($memory_19);
#line 228
post_processing_priv::check_sub($memory_14, $memory_18, $memory_12);
#line 228
undef($memory_18);
#line 229
$memory_18 = $memory_17->{'dest'};
#line 229
$memory_19 = "";
#line 229
$memory_18 = c_rt_lib::to_nl($memory_18 eq $memory_19);
#line 229
undef($memory_19);
#line 229
$memory_18 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_18));
#line 229
$memory_18 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_18));
#line 229
if (c_rt_lib::check_true($memory_18)) {goto label_622;}
#line 229
$memory_20 = $memory_17->{'dest'};
#line 229
$memory_19 = $memory_14;
#line 229
 if (c_rt_lib::get_arrcount($memory_5) > 1) {$memory_5 = [@{$memory_5}];}$memory_5->[$memory_20] = $memory_19;
#line 229
undef($memory_19);
#line 229
undef($memory_20);
#line 229
goto label_622;
#line 229
label_622:
#line 229
undef($memory_18);
#line 230
$memory_18 = $memory_17->{'dest'};
#line 230
array::push($memory_13, $memory_18);
#line 230
undef($memory_18);
#line 230
undef($memory_17);
#line 231
goto label_799;
#line 231
label_629:
#line 231
$memory_17 = c_rt_lib::ov_as($memory_15, 'set_at_idx');
#line 232
$memory_19 = $memory_17->{'src'};
#line 232
$memory_18 = $memory_5->[$memory_19];
#line 232
undef($memory_19);
#line 232
post_processing_priv::check_sub($memory_14, $memory_18, $memory_12);
#line 232
undef($memory_18);
#line 233
$memory_19 = $memory_17->{'idx'};
#line 233
$memory_18 = $memory_5->[$memory_19];
#line 233
undef($memory_19);
#line 233
post_processing_priv::check_sub($memory_14, $memory_18, $memory_12);
#line 233
undef($memory_18);
#line 234
$memory_19 = $memory_17->{'val'};
#line 234
$memory_18 = $memory_5->[$memory_19];
#line 234
undef($memory_19);
#line 234
post_processing_priv::check_sub($memory_14, $memory_18, $memory_12);
#line 234
undef($memory_18);
#line 235
$memory_19 = $memory_17->{'src'};
#line 235
$memory_18 = $memory_14;
#line 235
 if (c_rt_lib::get_arrcount($memory_5) > 1) {$memory_5 = [@{$memory_5}];}$memory_5->[$memory_19] = $memory_18;
#line 235
undef($memory_18);
#line 235
undef($memory_19);
#line 236
$memory_18 = $memory_17->{'src'};
#line 236
array::push($memory_13, $memory_18);
#line 236
undef($memory_18);
#line 236
undef($memory_17);
#line 237
goto label_799;
#line 237
label_656:
#line 237
$memory_17 = c_rt_lib::ov_as($memory_15, 'get_val');
#line 238
$memory_19 = $memory_17->{'src'};
#line 238
$memory_18 = $memory_5->[$memory_19];
#line 238
undef($memory_19);
#line 238
post_processing_priv::check_sub($memory_14, $memory_18, $memory_12);
#line 238
undef($memory_18);
#line 239
$memory_18 = $memory_17->{'dest'};
#line 239
$memory_19 = "";
#line 239
$memory_18 = c_rt_lib::to_nl($memory_18 eq $memory_19);
#line 239
undef($memory_19);
#line 239
$memory_18 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_18));
#line 239
$memory_18 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_18));
#line 239
if (c_rt_lib::check_true($memory_18)) {goto label_676;}
#line 239
$memory_20 = $memory_17->{'dest'};
#line 239
$memory_19 = $memory_14;
#line 239
 if (c_rt_lib::get_arrcount($memory_5) > 1) {$memory_5 = [@{$memory_5}];}$memory_5->[$memory_20] = $memory_19;
#line 239
undef($memory_19);
#line 239
undef($memory_20);
#line 239
goto label_676;
#line 239
label_676:
#line 239
undef($memory_18);
#line 240
$memory_18 = $memory_17->{'dest'};
#line 240
array::push($memory_13, $memory_18);
#line 240
undef($memory_18);
#line 240
undef($memory_17);
#line 241
goto label_799;
#line 241
label_683:
#line 241
$memory_17 = c_rt_lib::ov_as($memory_15, 'set_val');
#line 242
$memory_19 = $memory_17->{'src'};
#line 242
$memory_18 = $memory_5->[$memory_19];
#line 242
undef($memory_19);
#line 242
post_processing_priv::check_sub($memory_14, $memory_18, $memory_12);
#line 242
undef($memory_18);
#line 243
$memory_19 = $memory_17->{'val'};
#line 243
$memory_18 = $memory_5->[$memory_19];
#line 243
undef($memory_19);
#line 243
post_processing_priv::check_sub($memory_14, $memory_18, $memory_12);
#line 243
undef($memory_18);
#line 244
$memory_19 = $memory_17->{'src'};
#line 244
$memory_18 = $memory_14;
#line 244
 if (c_rt_lib::get_arrcount($memory_5) > 1) {$memory_5 = [@{$memory_5}];}$memory_5->[$memory_19] = $memory_18;
#line 244
undef($memory_18);
#line 244
undef($memory_19);
#line 245
$memory_18 = $memory_17->{'src'};
#line 245
array::push($memory_13, $memory_18);
#line 245
undef($memory_18);
#line 245
undef($memory_17);
#line 246
goto label_799;
#line 246
label_705:
#line 246
$memory_17 = c_rt_lib::ov_as($memory_15, 'ov_mk');
#line 247
$memory_18 = $memory_17->{'src'};
#line 247
$memory_18 = c_rt_lib::ov_is($memory_18, 'arg');
#line 247
$memory_18 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_18));
#line 247
if (c_rt_lib::check_true($memory_18)) {goto label_718;}
#line 248
$memory_20 = $memory_17->{'src'};
#line 248
$memory_20 = c_rt_lib::ov_as($memory_20, 'arg');
#line 248
$memory_19 = $memory_5->[$memory_20];
#line 248
undef($memory_20);
#line 248
post_processing_priv::check_sub($memory_14, $memory_19, $memory_12);
#line 248
undef($memory_19);
#line 249
goto label_718;
#line 249
label_718:
#line 249
undef($memory_18);
#line 250
$memory_18 = $memory_17->{'dest'};
#line 250
$memory_19 = "";
#line 250
$memory_18 = c_rt_lib::to_nl($memory_18 eq $memory_19);
#line 250
undef($memory_19);
#line 250
$memory_18 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_18));
#line 250
$memory_18 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_18));
#line 250
if (c_rt_lib::check_true($memory_18)) {goto label_733;}
#line 250
$memory_20 = $memory_17->{'dest'};
#line 250
$memory_19 = $memory_14;
#line 250
 if (c_rt_lib::get_arrcount($memory_5) > 1) {$memory_5 = [@{$memory_5}];}$memory_5->[$memory_20] = $memory_19;
#line 250
undef($memory_19);
#line 250
undef($memory_20);
#line 250
goto label_733;
#line 250
label_733:
#line 250
undef($memory_18);
#line 251
$memory_18 = $memory_17->{'dest'};
#line 251
array::push($memory_13, $memory_18);
#line 251
undef($memory_18);
#line 251
undef($memory_17);
#line 252
goto label_799;
#line 252
label_740:
#line 252
$memory_17 = c_rt_lib::ov_as($memory_15, 'return');
#line 253
$memory_18 = $memory_17;
#line 253
$memory_18 = c_rt_lib::ov_is($memory_18, 'val');
#line 253
$memory_18 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_18));
#line 253
if (c_rt_lib::check_true($memory_18)) {goto label_753;}
#line 254
$memory_20 = $memory_17;
#line 254
$memory_20 = c_rt_lib::ov_as($memory_20, 'val');
#line 254
$memory_19 = $memory_5->[$memory_20];
#line 254
undef($memory_20);
#line 254
post_processing_priv::check_sub($memory_14, $memory_19, $memory_12);
#line 254
undef($memory_19);
#line 255
goto label_753;
#line 255
label_753:
#line 255
undef($memory_18);
#line 255
undef($memory_17);
#line 256
goto label_799;
#line 256
label_757:
#line 256
$memory_17 = c_rt_lib::ov_as($memory_15, 'die');
#line 257
$memory_18 = $memory_5->[$memory_17];
#line 257
post_processing_priv::check_sub($memory_14, $memory_18, $memory_12);
#line 257
undef($memory_18);
#line 257
undef($memory_17);
#line 258
goto label_799;
#line 258
label_764:
#line 258
$memory_17 = c_rt_lib::ov_as($memory_15, 'prt_lbl');
#line 259
$memory_18 = c_rt_lib::ov_mk_none('no');
#line 259
$memory_14 = $memory_18;
#line 259
undef($memory_18);
#line 259
undef($memory_17);
#line 260
goto label_799;
#line 260
label_771:
#line 260
$memory_17 = c_rt_lib::ov_as($memory_15, 'if_goto');
#line 261
$memory_19 = $memory_17->{'src'};
#line 261
$memory_18 = $memory_5->[$memory_19];
#line 261
undef($memory_19);
#line 261
post_processing_priv::check_sub($memory_14, $memory_18, $memory_12);
#line 261
undef($memory_18);
#line 261
undef($memory_17);
#line 262
goto label_799;
#line 262
label_780:
#line 262
$memory_17 = c_rt_lib::ov_as($memory_15, 'goto');
#line 263
$memory_18 = c_rt_lib::ov_mk_none('no');
#line 263
$memory_14 = $memory_18;
#line 263
undef($memory_18);
#line 263
undef($memory_17);
#line 264
goto label_799;
#line 264
label_787:
#line 264
$memory_17 = c_rt_lib::ov_as($memory_15, 'clear');
#line 265
$memory_18 = $memory_5->[$memory_17];
#line 265
post_processing_priv::check_sub($memory_14, $memory_18, $memory_12);
#line 265
undef($memory_18);
#line 266
$memory_18 = c_rt_lib::ov_mk_none('no');
#line 266
$memory_19 = $memory_18;
#line 266
 if (c_rt_lib::get_arrcount($memory_5) > 1) {$memory_5 = [@{$memory_5}];}$memory_5->[$memory_17] = $memory_19;
#line 266
undef($memory_18);
#line 266
undef($memory_19);
#line 266
undef($memory_17);
#line 267
goto label_799;
#line 267
label_799:
#line 267
undef($memory_15);
#line 267
undef($memory_16);
#line 268
$memory_15 = array::len($memory_13);
#line 269
$memory_16 = 0;
#line 269
$memory_16 = c_rt_lib::to_nl($memory_15 > $memory_16);
#line 269
$memory_17 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_16));
#line 269
if (c_rt_lib::check_true($memory_17)) {goto label_814;}
#line 269
$memory_18 = 1;
#line 269
$memory_18 = $memory_15 - $memory_18;
#line 269
$memory_16 = $memory_13->[$memory_18];
#line 269
undef($memory_18);
#line 269
$memory_18 = "";
#line 269
$memory_16 = c_rt_lib::to_nl($memory_16 eq $memory_18);
#line 269
undef($memory_18);
#line 269
label_814:
#line 269
undef($memory_17);
#line 269
$memory_16 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_16));
#line 269
if (c_rt_lib::check_true($memory_16)) {goto label_820;}
#line 270
array::pop($memory_13);
#line 271
goto label_820;
#line 271
label_820:
#line 271
undef($memory_16);
#line 272
$memory_16 = $memory_14;
#line 272
$memory_16 = c_rt_lib::ov_is($memory_16, 'yes');
#line 272
if (c_rt_lib::check_true($memory_16)) {goto label_827;}
#line 272
$memory_16 = c_rt_lib::ov_mk_none('none');
#line 272
goto label_829;
#line 272
label_827:
#line 272
$memory_16 = c_rt_lib::ov_mk_arg('const', $memory_13);
#line 272
label_829:
#line 272
$memory_17 = c_rt_lib::get_ref_arr($memory_7, $memory_9);
#line 272
$memory_18 = $memory_16;
#line 272
 if (c_rt_lib::get_hashcount($memory_17) > 1) {$memory_17 = {%{$memory_17}};}$memory_17->{'annotation'} = $memory_18;
#line 272
c_rt_lib::set_ref_arr($memory_7, $memory_9, $memory_17);
#line 272
undef($memory_16);
#line 272
undef($memory_17);
#line 272
undef($memory_18);
#line 272
undef($memory_12);
#line 272
undef($memory_13);
#line 272
undef($memory_14);
#line 272
undef($memory_15);
#line 273
$memory_9 = $memory_9 + $memory_10;
#line 273
goto label_126;
#line 273
label_843:
#line 273
undef($memory_8);
#line 273
undef($memory_9);
#line 273
undef($memory_10);
#line 273
undef($memory_11);
#line 274
$memory_8 = $memory_7;
#line 274
 if (c_rt_lib::get_hashcount($memory_6) > 1) {$memory_6 = {%{$memory_6}};}$memory_6->{'cmds'} = $memory_8;
#line 274
undef($memory_8);
#line 275
$memory_8 = $memory_6;
#line 275
 if (c_rt_lib::get_arrcount($memory_1) > 1) {$memory_1 = [@{$memory_1}];}$memory_1->[$memory_0] = $memory_8;
#line 275
undef($memory_8);
#line 276
$memory_8 = $memory_6->{'next'};
#line 276
$memory_10 = 0;
#line 276
$memory_11 = 1;
#line 276
$memory_12 = c_rt_lib::array_len($memory_8);
#line 276
label_858:
#line 276
$memory_13 = c_rt_lib::to_nl($memory_10 >= $memory_12);
#line 276
if (c_rt_lib::check_true($memory_13)) {goto label_865;}
#line 276
$memory_9 = $memory_8->[$memory_10];
#line 277
post_processing_priv::set_const_block($memory_9, $memory_1, $memory_2, $memory_3, $memory_4, $memory_5);
#line 278
$memory_10 = $memory_10 + $memory_11;
#line 278
goto label_858;
#line 278
label_865:
#line 278
undef($memory_8);
#line 278
undef($memory_9);
#line 278
undef($memory_10);
#line 278
undef($memory_11);
#line 278
undef($memory_12);
#line 278
undef($memory_13);
#line 278
undef($memory_6);
#line 278
undef($memory_7);
#line 278
undef($memory_0);
#line 278
undef($memory_2);
#line 278
undef($memory_4);
#line 278
undef($memory_5);
#line 278
$_[1] = $memory_1;$_[3] = $memory_3;return;
$_[1] = $memory_1;$_[3] = $memory_3;}

sub post_processing_priv::set_interpreted_changed_functions($$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;my $memory_13;my $memory_14;my $memory_15;my $memory_16;my $memory_17;my $memory_18;my $memory_19;my $memory_20;my $memory_21;$memory_0 = $_[0];$memory_1 = $_[1];$memory_2 = $_[2];Scalar::Util::weaken($_[2]) if ref($_[2]);
#line 285
$memory_3 = $memory_0->{'fun_calls'};
#line 286
$memory_4 = $memory_0->{'nl_asm'};
#line 286
$memory_7 = c_rt_lib::init_iter($memory_4);
#line 286
label_3:
#line 286
$memory_5 = c_rt_lib::is_end_hash($memory_7);
#line 286
if (c_rt_lib::check_true($memory_5)) {goto label_82;}
#line 286
$memory_5 = c_rt_lib::get_key_iter($memory_7);
#line 286
$memory_6 = c_rt_lib::hash_get_value($memory_4, $memory_5);
#line 287
$memory_8 = $memory_6->{'functions'};
#line 287
$memory_10 = 0;
#line 287
$memory_11 = 1;
#line 287
$memory_12 = c_rt_lib::array_len($memory_8);
#line 287
label_12:
#line 287
$memory_13 = c_rt_lib::to_nl($memory_10 >= $memory_12);
#line 287
if (c_rt_lib::check_true($memory_13)) {goto label_73;}
#line 287
$memory_9 = $memory_8->[$memory_10];
#line 288
$memory_14 = $memory_9->{'access'};
#line 288
$memory_14 = c_rt_lib::ov_is($memory_14, 'pub');
#line 288
if (c_rt_lib::check_true($memory_14)) {goto label_21;}
#line 288
$memory_14 = "_priv::";
#line 288
goto label_23;
#line 288
label_21:
#line 288
$memory_14 = "::";
#line 288
label_23:
#line 288
$memory_15 = $memory_9->{'name'};
#line 288
$memory_14 = $memory_14 . $memory_15;
#line 288
undef($memory_15);
#line 289
$memory_15 = $memory_5 . $memory_14;
#line 290
$memory_17 = hash::get_value($memory_3, $memory_5);
#line 290
$memory_16 = hash::get_value($memory_17, $memory_14);
#line 290
undef($memory_17);
#line 291
$memory_19 = c_rt_lib::init_iter($memory_16);
#line 291
label_32:
#line 291
$memory_17 = c_rt_lib::is_end_hash($memory_19);
#line 291
if (c_rt_lib::check_true($memory_17)) {goto label_64;}
#line 291
$memory_17 = c_rt_lib::get_key_iter($memory_19);
#line 291
$memory_18 = c_rt_lib::hash_get_value($memory_16, $memory_17);
#line 292
$memory_20 = hash::has_key($memory_2, $memory_17);
#line 292
$memory_20 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_20));
#line 292
$memory_20 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_20));
#line 292
if (c_rt_lib::check_true($memory_20)) {goto label_44;}
#line 292
undef($memory_20);
#line 292
goto label_61;
#line 292
goto label_44;
#line 292
label_44:
#line 292
undef($memory_20);
#line 293
$memory_20 = hash::get_value($memory_1, $memory_17);
#line 294
$memory_21 = $memory_20;
#line 294
$memory_21 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_21));
#line 294
$memory_21 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_21));
#line 294
if (c_rt_lib::check_true($memory_21)) {goto label_55;}
#line 294
undef($memory_20);
#line 294
undef($memory_21);
#line 294
goto label_61;
#line 294
goto label_55;
#line 294
label_55:
#line 294
undef($memory_21);
#line 295
$memory_21 = "";
#line 295
hash::set_value($memory_2, $memory_15, $memory_21);
#line 295
undef($memory_21);
#line 295
undef($memory_20);
#line 295
label_61:
#line 296
$memory_19 = c_rt_lib::next_iter($memory_19);
#line 296
goto label_32;
#line 296
label_64:
#line 296
undef($memory_17);
#line 296
undef($memory_18);
#line 296
undef($memory_19);
#line 296
undef($memory_14);
#line 296
undef($memory_15);
#line 296
undef($memory_16);
#line 297
$memory_10 = $memory_10 + $memory_11;
#line 297
goto label_12;
#line 297
label_73:
#line 297
undef($memory_8);
#line 297
undef($memory_9);
#line 297
undef($memory_10);
#line 297
undef($memory_11);
#line 297
undef($memory_12);
#line 297
undef($memory_13);
#line 298
$memory_7 = c_rt_lib::next_iter($memory_7);
#line 298
goto label_3;
#line 298
label_82:
#line 298
undef($memory_4);
#line 298
undef($memory_5);
#line 298
undef($memory_6);
#line 298
undef($memory_7);
#line 298
undef($memory_3);
#line 298
undef($memory_0);
#line 298
undef($memory_1);
#line 298
$_[2] = $memory_2;return;
$_[2] = $memory_2;}

sub post_processing_priv::get_called_switched($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;my $memory_13;$memory_0 = $_[0];$memory_1 = $_[1];
#line 303
$memory_2 = {};
#line 304
$memory_5 = c_rt_lib::init_iter($memory_0);
#line 304
label_2:
#line 304
$memory_3 = c_rt_lib::is_end_hash($memory_5);
#line 304
if (c_rt_lib::check_true($memory_3)) {goto label_42;}
#line 304
$memory_3 = c_rt_lib::get_key_iter($memory_5);
#line 304
$memory_4 = c_rt_lib::hash_get_value($memory_0, $memory_3);
#line 305
$memory_8 = c_rt_lib::init_iter($memory_4);
#line 305
label_8:
#line 305
$memory_6 = c_rt_lib::is_end_hash($memory_8);
#line 305
if (c_rt_lib::check_true($memory_6)) {goto label_36;}
#line 305
$memory_6 = c_rt_lib::get_key_iter($memory_8);
#line 305
$memory_7 = c_rt_lib::hash_get_value($memory_4, $memory_6);
#line 306
$memory_11 = c_rt_lib::init_iter($memory_7);
#line 306
label_14:
#line 306
$memory_9 = c_rt_lib::is_end_hash($memory_11);
#line 306
if (c_rt_lib::check_true($memory_9)) {goto label_30;}
#line 306
$memory_9 = c_rt_lib::get_key_iter($memory_11);
#line 306
$memory_10 = c_rt_lib::hash_get_value($memory_7, $memory_9);
#line 307
$memory_12 = hash::has_key($memory_1, $memory_9);
#line 307
$memory_12 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_12));
#line 307
if (c_rt_lib::check_true($memory_12)) {goto label_26;}
#line 308
$memory_13 = c_rt_lib::to_nl(1);
#line 308
hash::set_value($memory_2, $memory_9, $memory_13);
#line 308
undef($memory_13);
#line 309
goto label_26;
#line 309
label_26:
#line 309
undef($memory_12);
#line 310
$memory_11 = c_rt_lib::next_iter($memory_11);
#line 310
goto label_14;
#line 310
label_30:
#line 310
undef($memory_9);
#line 310
undef($memory_10);
#line 310
undef($memory_11);
#line 311
$memory_8 = c_rt_lib::next_iter($memory_8);
#line 311
goto label_8;
#line 311
label_36:
#line 311
undef($memory_6);
#line 311
undef($memory_7);
#line 311
undef($memory_8);
#line 312
$memory_5 = c_rt_lib::next_iter($memory_5);
#line 312
goto label_2;
#line 312
label_42:
#line 312
undef($memory_3);
#line 312
undef($memory_4);
#line 312
undef($memory_5);
#line 313
undef($memory_0);
#line 313
undef($memory_1);
#line 313
return $memory_2;
#line 313
undef($memory_2);
#line 313
undef($memory_0);
#line 313
undef($memory_1);
#line 313
return;
}

sub post_processing_priv::get_switched_func($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;$memory_0 = $_[0];$memory_1 = $_[1];
#line 318
$memory_2 = {};
#line 319
$memory_5 = c_rt_lib::init_iter($memory_1);
#line 319
label_2:
#line 319
$memory_3 = c_rt_lib::is_end_hash($memory_5);
#line 319
if (c_rt_lib::check_true($memory_3)) {goto label_44;}
#line 319
$memory_3 = c_rt_lib::get_key_iter($memory_5);
#line 319
$memory_4 = c_rt_lib::hash_get_value($memory_1, $memory_3);
#line 320
$memory_6 = hash::has_key($memory_0, $memory_3);
#line 320
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 320
if (c_rt_lib::check_true($memory_6)) {goto label_38;}
#line 321
$memory_7 = hash::get_value($memory_0, $memory_3);
#line 322
$memory_8 = $memory_7;
#line 322
$memory_9 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 322
if (c_rt_lib::check_true($memory_9)) {goto label_15;}
#line 322
$memory_8 = $memory_4;
#line 322
label_15:
#line 322
undef($memory_9);
#line 322
if (c_rt_lib::check_true($memory_8)) {goto label_26;}
#line 322
$memory_8 = $memory_7;
#line 322
$memory_8 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 322
$memory_9 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 322
if (c_rt_lib::check_true($memory_9)) {goto label_24;}
#line 322
$memory_8 = $memory_4;
#line 322
$memory_8 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 322
label_24:
#line 322
undef($memory_9);
#line 322
label_26:
#line 322
$memory_8 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 322
if (c_rt_lib::check_true($memory_8)) {goto label_34;}
#line 322
undef($memory_6);
#line 322
undef($memory_7);
#line 322
undef($memory_8);
#line 322
goto label_41;
#line 322
goto label_34;
#line 322
label_34:
#line 322
undef($memory_8);
#line 322
undef($memory_7);
#line 323
goto label_38;
#line 323
label_38:
#line 323
undef($memory_6);
#line 324
hash::set_value($memory_2, $memory_3, $memory_4);
#line 324
label_41:
#line 325
$memory_5 = c_rt_lib::next_iter($memory_5);
#line 325
goto label_2;
#line 325
label_44:
#line 325
undef($memory_3);
#line 325
undef($memory_4);
#line 325
undef($memory_5);
#line 326
undef($memory_0);
#line 326
undef($memory_1);
#line 326
return $memory_2;
#line 326
undef($memory_2);
#line 326
undef($memory_0);
#line 326
undef($memory_1);
#line 326
return;
}

sub post_processing_priv::set_function_calls($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;my $memory_13;my $memory_14;my $memory_15;my $memory_16;my $memory_17;my $memory_18;my $memory_19;my $memory_20;my $memory_21;my $memory_22;my $memory_23;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];
#line 330
$memory_4 = c_rt_lib::init_iter($memory_1);
#line 330
label_1:
#line 330
$memory_2 = c_rt_lib::is_end_hash($memory_4);
#line 330
if (c_rt_lib::check_true($memory_2)) {goto label_98;}
#line 330
$memory_2 = c_rt_lib::get_key_iter($memory_4);
#line 330
$memory_3 = c_rt_lib::hash_get_value($memory_1, $memory_2);
#line 331
$memory_5 = {};
#line 332
$memory_6 = $memory_3->{'functions'};
#line 332
$memory_8 = 0;
#line 332
$memory_9 = 1;
#line 332
$memory_10 = c_rt_lib::array_len($memory_6);
#line 332
label_11:
#line 332
$memory_11 = c_rt_lib::to_nl($memory_8 >= $memory_10);
#line 332
if (c_rt_lib::check_true($memory_11)) {goto label_87;}
#line 332
$memory_7 = $memory_6->[$memory_8];
#line 333
$memory_12 = {};
#line 334
$memory_13 = $memory_7->{'commands'};
#line 334
$memory_15 = 0;
#line 334
$memory_16 = 1;
#line 334
$memory_17 = c_rt_lib::array_len($memory_13);
#line 334
label_20:
#line 334
$memory_18 = c_rt_lib::to_nl($memory_15 >= $memory_17);
#line 334
if (c_rt_lib::check_true($memory_18)) {goto label_64;}
#line 334
$memory_14 = $memory_13->[$memory_15];
#line 335
$memory_19 = $memory_14->{'cmd'};
#line 335
$memory_19 = c_rt_lib::ov_is($memory_19, 'call');
#line 335
$memory_19 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_19));
#line 335
$memory_19 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_19));
#line 335
if (c_rt_lib::check_true($memory_19)) {goto label_32;}
#line 335
undef($memory_19);
#line 335
goto label_61;
#line 335
goto label_32;
#line 335
label_32:
#line 335
undef($memory_19);
#line 336
$memory_19 = $memory_14->{'cmd'};
#line 336
$memory_19 = c_rt_lib::ov_as($memory_19, 'call');
#line 337
$memory_20 = $memory_19->{'mod'};
#line 338
$memory_21 = "::";
#line 338
$memory_22 = $memory_19->{'fun_name'};
#line 338
$memory_21 = $memory_21 . $memory_22;
#line 338
undef($memory_22);
#line 339
$memory_22 = "";
#line 339
$memory_22 = c_rt_lib::to_nl($memory_20 eq $memory_22);
#line 339
$memory_22 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_22));
#line 339
if (c_rt_lib::check_true($memory_22)) {goto label_51;}
#line 340
$memory_20 = $memory_2;
#line 341
$memory_23 = "_priv";
#line 341
$memory_23 = $memory_23 . $memory_21;
#line 341
$memory_21 = $memory_23;
#line 341
undef($memory_23);
#line 342
goto label_51;
#line 342
label_51:
#line 342
undef($memory_22);
#line 343
$memory_22 = $memory_20 . $memory_21;
#line 343
$memory_23 = [$memory_20,$memory_21];
#line 343
hash::set_value($memory_12, $memory_22, $memory_23);
#line 343
undef($memory_23);
#line 343
undef($memory_22);
#line 343
undef($memory_19);
#line 343
undef($memory_20);
#line 343
undef($memory_21);
#line 343
label_61:
#line 344
$memory_15 = $memory_15 + $memory_16;
#line 344
goto label_20;
#line 344
label_64:
#line 344
undef($memory_13);
#line 344
undef($memory_14);
#line 344
undef($memory_15);
#line 344
undef($memory_16);
#line 344
undef($memory_17);
#line 344
undef($memory_18);
#line 345
$memory_13 = $memory_7->{'access'};
#line 345
$memory_13 = c_rt_lib::ov_is($memory_13, 'pub');
#line 345
if (c_rt_lib::check_true($memory_13)) {goto label_76;}
#line 345
$memory_13 = "_priv::";
#line 345
goto label_78;
#line 345
label_76:
#line 345
$memory_13 = "::";
#line 345
label_78:
#line 346
$memory_14 = $memory_7->{'name'};
#line 346
$memory_14 = $memory_13 . $memory_14;
#line 346
hash::set_value($memory_5, $memory_14, $memory_12);
#line 346
undef($memory_14);
#line 346
undef($memory_12);
#line 346
undef($memory_13);
#line 347
$memory_8 = $memory_8 + $memory_9;
#line 347
goto label_11;
#line 347
label_87:
#line 347
undef($memory_6);
#line 347
undef($memory_7);
#line 347
undef($memory_8);
#line 347
undef($memory_9);
#line 347
undef($memory_10);
#line 347
undef($memory_11);
#line 348
hash::set_value($memory_0, $memory_2, $memory_5);
#line 348
undef($memory_5);
#line 349
$memory_4 = c_rt_lib::next_iter($memory_4);
#line 349
goto label_1;
#line 349
label_98:
#line 349
undef($memory_2);
#line 349
undef($memory_3);
#line 349
undef($memory_4);
#line 349
undef($memory_1);
#line 349
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub post_processing::get_call_graph($) {
my $memory_0;my $memory_1;$memory_0 = $_[0];
#line 353
$memory_1 = {};
#line 354
post_processing_priv::set_function_calls($memory_1, $memory_0);
#line 355
undef($memory_0);
#line 355
return $memory_1;
#line 355
undef($memory_1);
#line 355
undef($memory_0);
#line 355
return;
}

sub post_processing_priv::get_math_fun($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;my $memory_13;my $memory_14;my $memory_15;my $memory_16;$memory_0 = $_[0];$memory_1 = $_[1];
#line 359
$memory_2 = {};
#line 360
$memory_5 = c_rt_lib::init_iter($memory_1);
#line 360
label_2:
#line 360
$memory_3 = c_rt_lib::is_end_hash($memory_5);
#line 360
if (c_rt_lib::check_true($memory_3)) {goto label_12;}
#line 360
$memory_3 = c_rt_lib::get_key_iter($memory_5);
#line 360
$memory_4 = c_rt_lib::hash_get_value($memory_1, $memory_3);
#line 361
$memory_6 = c_rt_lib::to_nl(1);
#line 361
hash::set_value($memory_2, $memory_3, $memory_6);
#line 361
undef($memory_6);
#line 362
$memory_5 = c_rt_lib::next_iter($memory_5);
#line 362
goto label_2;
#line 362
label_12:
#line 362
undef($memory_3);
#line 362
undef($memory_4);
#line 362
undef($memory_5);
#line 363
$memory_5 = c_rt_lib::init_iter($memory_0);
#line 363
label_17:
#line 363
$memory_3 = c_rt_lib::is_end_hash($memory_5);
#line 363
if (c_rt_lib::check_true($memory_3)) {goto label_41;}
#line 363
$memory_3 = c_rt_lib::get_key_iter($memory_5);
#line 363
$memory_4 = c_rt_lib::hash_get_value($memory_0, $memory_3);
#line 364
$memory_8 = c_rt_lib::init_iter($memory_4);
#line 364
label_23:
#line 364
$memory_6 = c_rt_lib::is_end_hash($memory_8);
#line 364
if (c_rt_lib::check_true($memory_6)) {goto label_35;}
#line 364
$memory_6 = c_rt_lib::get_key_iter($memory_8);
#line 364
$memory_7 = c_rt_lib::hash_get_value($memory_4, $memory_6);
#line 365
$memory_9 = $memory_3 . $memory_6;
#line 365
$memory_10 = c_rt_lib::to_nl(1);
#line 365
hash::set_value($memory_2, $memory_9, $memory_10);
#line 365
undef($memory_10);
#line 365
undef($memory_9);
#line 366
$memory_8 = c_rt_lib::next_iter($memory_8);
#line 366
goto label_23;
#line 366
label_35:
#line 366
undef($memory_6);
#line 366
undef($memory_7);
#line 366
undef($memory_8);
#line 367
$memory_5 = c_rt_lib::next_iter($memory_5);
#line 367
goto label_17;
#line 367
label_41:
#line 367
undef($memory_3);
#line 367
undef($memory_4);
#line 367
undef($memory_5);
#line 368
$memory_3 = {};
#line 369
$memory_4 = {};
#line 370
$memory_7 = c_rt_lib::init_iter($memory_0);
#line 370
label_48:
#line 370
$memory_5 = c_rt_lib::is_end_hash($memory_7);
#line 370
if (c_rt_lib::check_true($memory_5)) {goto label_106;}
#line 370
$memory_5 = c_rt_lib::get_key_iter($memory_7);
#line 370
$memory_6 = c_rt_lib::hash_get_value($memory_0, $memory_5);
#line 371
$memory_10 = c_rt_lib::init_iter($memory_6);
#line 371
label_54:
#line 371
$memory_8 = c_rt_lib::is_end_hash($memory_10);
#line 371
if (c_rt_lib::check_true($memory_8)) {goto label_100;}
#line 371
$memory_8 = c_rt_lib::get_key_iter($memory_10);
#line 371
$memory_9 = c_rt_lib::hash_get_value($memory_6, $memory_8);
#line 372
$memory_13 = c_rt_lib::init_iter($memory_9);
#line 372
label_60:
#line 372
$memory_11 = c_rt_lib::is_end_hash($memory_13);
#line 372
if (c_rt_lib::check_true($memory_11)) {goto label_94;}
#line 372
$memory_11 = c_rt_lib::get_key_iter($memory_13);
#line 372
$memory_12 = c_rt_lib::hash_get_value($memory_9, $memory_11);
#line 373
$memory_14 = {};
#line 374
$memory_15 = hash::has_key($memory_3, $memory_11);
#line 374
$memory_15 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_15));
#line 374
if (c_rt_lib::check_true($memory_15)) {goto label_73;}
#line 375
$memory_16 = hash::get_value($memory_3, $memory_11);
#line 375
$memory_14 = $memory_16;
#line 375
undef($memory_16);
#line 376
goto label_73;
#line 376
label_73:
#line 376
undef($memory_15);
#line 377
$memory_15 = hash::has_key($memory_2, $memory_11);
#line 377
$memory_15 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_15));
#line 377
$memory_15 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_15));
#line 377
if (c_rt_lib::check_true($memory_15)) {goto label_83;}
#line 377
$memory_16 = c_rt_lib::to_nl(1);
#line 377
hash::set_value($memory_4, $memory_11, $memory_16);
#line 377
undef($memory_16);
#line 377
goto label_83;
#line 377
label_83:
#line 377
undef($memory_15);
#line 378
$memory_15 = $memory_5 . $memory_8;
#line 378
$memory_16 = 0;
#line 378
hash::set_value($memory_14, $memory_15, $memory_16);
#line 378
undef($memory_16);
#line 378
undef($memory_15);
#line 379
hash::set_value($memory_3, $memory_11, $memory_14);
#line 379
undef($memory_14);
#line 380
$memory_13 = c_rt_lib::next_iter($memory_13);
#line 380
goto label_60;
#line 380
label_94:
#line 380
undef($memory_11);
#line 380
undef($memory_12);
#line 380
undef($memory_13);
#line 381
$memory_10 = c_rt_lib::next_iter($memory_10);
#line 381
goto label_54;
#line 381
label_100:
#line 381
undef($memory_8);
#line 381
undef($memory_9);
#line 381
undef($memory_10);
#line 382
$memory_7 = c_rt_lib::next_iter($memory_7);
#line 382
goto label_48;
#line 382
label_106:
#line 382
undef($memory_5);
#line 382
undef($memory_6);
#line 382
undef($memory_7);
#line 383
$memory_7 = c_rt_lib::init_iter($memory_4);
#line 383
label_111:
#line 383
$memory_5 = c_rt_lib::is_end_hash($memory_7);
#line 383
if (c_rt_lib::check_true($memory_5)) {goto label_122;}
#line 383
$memory_5 = c_rt_lib::get_key_iter($memory_7);
#line 383
$memory_6 = c_rt_lib::hash_get_value($memory_4, $memory_5);
#line 384
$memory_8 = c_rt_lib::to_nl(1);
#line 384
hash::set_value($memory_2, $memory_5, $memory_8);
#line 384
undef($memory_8);
#line 385
post_processing_priv::set_non_math_fun_rec($memory_2, $memory_5, $memory_3);
#line 386
$memory_7 = c_rt_lib::next_iter($memory_7);
#line 386
goto label_111;
#line 386
label_122:
#line 386
undef($memory_5);
#line 386
undef($memory_6);
#line 386
undef($memory_7);
#line 387
undef($memory_0);
#line 387
undef($memory_1);
#line 387
undef($memory_3);
#line 387
undef($memory_4);
#line 387
return $memory_2;
#line 387
undef($memory_2);
#line 387
undef($memory_3);
#line 387
undef($memory_4);
#line 387
undef($memory_0);
#line 387
undef($memory_1);
#line 387
return;
}

sub post_processing_priv::set_non_math_fun_rec($$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];$memory_2 = $_[2];
#line 392
$memory_3 = hash::get_value($memory_0, $memory_1);
#line 392
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 392
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 392
if (c_rt_lib::check_true($memory_3)) {goto label_9;}
#line 392
undef($memory_1);
#line 392
undef($memory_2);
#line 392
undef($memory_3);
#line 392
$_[0] = $memory_0;return;
#line 392
goto label_9;
#line 392
label_9:
#line 392
undef($memory_3);
#line 393
$memory_3 = c_rt_lib::to_nl(0);
#line 393
hash::set_value($memory_0, $memory_1, $memory_3);
#line 393
undef($memory_3);
#line 394
$memory_3 = hash::has_key($memory_2, $memory_1);
#line 394
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 394
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 394
if (c_rt_lib::check_true($memory_3)) {goto label_23;}
#line 394
undef($memory_1);
#line 394
undef($memory_2);
#line 394
undef($memory_3);
#line 394
$_[0] = $memory_0;return;
#line 394
goto label_23;
#line 394
label_23:
#line 394
undef($memory_3);
#line 395
$memory_3 = hash::get_value($memory_2, $memory_1);
#line 396
$memory_6 = c_rt_lib::init_iter($memory_3);
#line 396
label_27:
#line 396
$memory_4 = c_rt_lib::is_end_hash($memory_6);
#line 396
if (c_rt_lib::check_true($memory_4)) {goto label_35;}
#line 396
$memory_4 = c_rt_lib::get_key_iter($memory_6);
#line 396
$memory_5 = c_rt_lib::hash_get_value($memory_3, $memory_4);
#line 397
post_processing_priv::set_non_math_fun_rec($memory_0, $memory_4, $memory_2);
#line 398
$memory_6 = c_rt_lib::next_iter($memory_6);
#line 398
goto label_27;
#line 398
label_35:
#line 398
undef($memory_4);
#line 398
undef($memory_5);
#line 398
undef($memory_6);
#line 398
undef($memory_3);
#line 398
undef($memory_1);
#line 398
undef($memory_2);
#line 398
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub post_processing_priv::set_mathfun_in_modules($$$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;my $memory_13;my $memory_14;my $memory_15;my $memory_16;my $memory_17;my $memory_18;my $memory_19;my $memory_20;my $memory_21;my $memory_22;my $memory_23;my $memory_24;my $memory_25;my $memory_26;my $memory_27;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];$memory_2 = $_[2];Scalar::Util::weaken($_[2]) if ref($_[2]);$memory_3 = $_[3];Scalar::Util::weaken($_[3]) if ref($_[3]);
#line 403
$memory_5 = $memory_0->{'math_fs'};
#line 403
$memory_4 = post_processing_priv::get_switched_func($memory_5, $memory_1);
#line 403
undef($memory_5);
#line 404
$memory_6 = $memory_0->{'fun_calls'};
#line 404
$memory_5 = post_processing_priv::get_called_switched($memory_6, $memory_4);
#line 404
undef($memory_6);
#line 405
$memory_7 = $memory_0->{'nl_asm'};
#line 405
$memory_6 = hash::keys($memory_7);
#line 405
undef($memory_7);
#line 405
$memory_8 = 0;
#line 405
$memory_9 = 1;
#line 405
$memory_10 = c_rt_lib::array_len($memory_6);
#line 405
label_12:
#line 405
$memory_11 = c_rt_lib::to_nl($memory_8 >= $memory_10);
#line 405
if (c_rt_lib::check_true($memory_11)) {goto label_162;}
#line 405
$memory_7 = $memory_6->[$memory_8];
#line 406
$memory_13 = $memory_0->{'nl_asm'};
#line 406
$memory_12 = hash::get_value($memory_13, $memory_7);
#line 406
undef($memory_13);
#line 407
$memory_13 = c_rt_lib::to_nl(0);
#line 408
$memory_15 = $memory_12->{'functions'};
#line 408
$memory_14 = array::len($memory_15);
#line 408
undef($memory_15);
#line 408
$memory_15 = 0;
#line 408
$memory_16 = 1;
#line 408
label_25:
#line 408
$memory_17 = c_rt_lib::to_nl($memory_15 >= $memory_14);
#line 408
if (c_rt_lib::check_true($memory_17)) {goto label_133;}
#line 409
$memory_18 = c_rt_lib::to_nl(0);
#line 410
$memory_19 = $memory_12->{'functions'};
#line 410
$memory_19 = $memory_19->[$memory_15];
#line 411
$memory_20 = $memory_12->{'module_name'};
#line 411
$memory_21 = $memory_19->{'access'};
#line 411
$memory_21 = c_rt_lib::ov_is($memory_21, 'pub');
#line 411
if (c_rt_lib::check_true($memory_21)) {goto label_37;}
#line 411
$memory_21 = "_priv::";
#line 411
goto label_39;
#line 411
label_37:
#line 411
$memory_21 = "::";
#line 411
label_39:
#line 411
$memory_20 = $memory_20 . $memory_21;
#line 411
undef($memory_21);
#line 411
$memory_21 = $memory_19->{'name'};
#line 411
$memory_20 = $memory_20 . $memory_21;
#line 411
undef($memory_21);
#line 412
$memory_21 = hash::get_value($memory_1, $memory_20);
#line 413
$memory_22 = $memory_21;
#line 413
$memory_23 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_22));
#line 413
if (c_rt_lib::check_true($memory_23)) {goto label_52;}
#line 413
$memory_22 = $memory_19->{'annotation'};
#line 413
$memory_22 = c_rt_lib::ov_is($memory_22, 'math');
#line 413
$memory_22 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_22));
#line 413
label_52:
#line 413
undef($memory_23);
#line 413
$memory_22 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_22));
#line 413
if (c_rt_lib::check_true($memory_22)) {goto label_74;}
#line 414
$memory_23 = c_rt_lib::ov_mk_none('math');
#line 414
$memory_24 = "functions";
#line 414
$memory_24 = c_rt_lib::get_ref_hash($memory_12, $memory_24);
#line 414
$memory_25 = c_rt_lib::get_ref_arr($memory_24, $memory_15);
#line 414
$memory_26 = $memory_23;
#line 414
 if (c_rt_lib::get_hashcount($memory_25) > 1) {$memory_25 = {%{$memory_25}};}$memory_25->{'annotation'} = $memory_26;
#line 414
c_rt_lib::set_ref_arr($memory_24, $memory_15, $memory_25);
#line 414
$memory_27 = "functions";
#line 414
c_rt_lib::set_ref_hash($memory_12, $memory_27, $memory_24);
#line 414
undef($memory_27);
#line 414
undef($memory_23);
#line 414
undef($memory_24);
#line 414
undef($memory_25);
#line 414
undef($memory_26);
#line 415
$memory_23 = c_rt_lib::to_nl(1);
#line 415
$memory_18 = $memory_23;
#line 415
undef($memory_23);
#line 416
goto label_104;
#line 416
label_74:
#line 416
$memory_22 = $memory_21;
#line 416
$memory_22 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_22));
#line 416
$memory_23 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_22));
#line 416
if (c_rt_lib::check_true($memory_23)) {goto label_82;}
#line 416
$memory_22 = $memory_19->{'annotation'};
#line 416
$memory_22 = c_rt_lib::ov_is($memory_22, 'state');
#line 416
$memory_22 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_22));
#line 416
label_82:
#line 416
undef($memory_23);
#line 416
$memory_22 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_22));
#line 416
if (c_rt_lib::check_true($memory_22)) {goto label_104;}
#line 417
$memory_23 = c_rt_lib::ov_mk_none('state');
#line 417
$memory_24 = "functions";
#line 417
$memory_24 = c_rt_lib::get_ref_hash($memory_12, $memory_24);
#line 417
$memory_25 = c_rt_lib::get_ref_arr($memory_24, $memory_15);
#line 417
$memory_26 = $memory_23;
#line 417
 if (c_rt_lib::get_hashcount($memory_25) > 1) {$memory_25 = {%{$memory_25}};}$memory_25->{'annotation'} = $memory_26;
#line 417
c_rt_lib::set_ref_arr($memory_24, $memory_15, $memory_25);
#line 417
$memory_27 = "functions";
#line 417
c_rt_lib::set_ref_hash($memory_12, $memory_27, $memory_24);
#line 417
undef($memory_27);
#line 417
undef($memory_23);
#line 417
undef($memory_24);
#line 417
undef($memory_25);
#line 417
undef($memory_26);
#line 418
$memory_23 = c_rt_lib::to_nl(1);
#line 418
$memory_18 = $memory_23;
#line 418
undef($memory_23);
#line 419
goto label_104;
#line 419
label_104:
#line 419
undef($memory_22);
#line 420
$memory_22 = hash::has_key($memory_5, $memory_20);
#line 420
$memory_22 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_22));
#line 420
if (c_rt_lib::check_true($memory_22)) {goto label_113;}
#line 420
$memory_23 = c_rt_lib::to_nl(1);
#line 420
$memory_18 = $memory_23;
#line 420
undef($memory_23);
#line 420
goto label_113;
#line 420
label_113:
#line 420
undef($memory_22);
#line 421
$memory_22 = $memory_18;
#line 421
$memory_22 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_22));
#line 421
if (c_rt_lib::check_true($memory_22)) {goto label_125;}
#line 422
$memory_23 = "";
#line 422
hash::set_value($memory_2, $memory_20, $memory_23);
#line 422
undef($memory_23);
#line 423
$memory_23 = c_rt_lib::to_nl(1);
#line 423
$memory_13 = $memory_23;
#line 423
undef($memory_23);
#line 424
goto label_125;
#line 424
label_125:
#line 424
undef($memory_22);
#line 424
undef($memory_18);
#line 424
undef($memory_19);
#line 424
undef($memory_20);
#line 424
undef($memory_21);
#line 425
$memory_15 = $memory_15 + $memory_16;
#line 425
goto label_25;
#line 425
label_133:
#line 425
undef($memory_14);
#line 425
undef($memory_15);
#line 425
undef($memory_16);
#line 425
undef($memory_17);
#line 426
$memory_14 = $memory_13;
#line 426
$memory_14 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_14));
#line 426
$memory_14 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_14));
#line 426
if (c_rt_lib::check_true($memory_14)) {goto label_147;}
#line 426
undef($memory_12);
#line 426
undef($memory_13);
#line 426
undef($memory_14);
#line 426
goto label_159;
#line 426
goto label_147;
#line 426
label_147:
#line 426
undef($memory_14);
#line 427
hash::set_value($memory_3, $memory_7, $memory_12);
#line 428
$memory_14 = "nl_asm";
#line 428
$memory_14 = c_rt_lib::get_ref_hash($memory_0, $memory_14);
#line 428
hash::set_value($memory_14, $memory_7, $memory_12);
#line 428
$memory_15 = "nl_asm";
#line 428
c_rt_lib::set_ref_hash($memory_0, $memory_15, $memory_14);
#line 428
undef($memory_15);
#line 428
undef($memory_14);
#line 428
undef($memory_12);
#line 428
undef($memory_13);
#line 428
label_159:
#line 429
$memory_8 = $memory_8 + $memory_9;
#line 429
goto label_12;
#line 429
label_162:
#line 429
undef($memory_6);
#line 429
undef($memory_7);
#line 429
undef($memory_8);
#line 429
undef($memory_9);
#line 429
undef($memory_10);
#line 429
undef($memory_11);
#line 429
undef($memory_4);
#line 429
undef($memory_5);
#line 429
undef($memory_1);
#line 429
$_[0] = $memory_0;$_[2] = $memory_2;$_[3] = $memory_3;return;
$_[0] = $memory_0;$_[2] = $memory_2;$_[3] = $memory_3;}

sub post_processing_priv::set_const_reg($$$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];$memory_2 = $_[2];$memory_3 = $_[3];
#line 434
$memory_4 = [];
#line 435
$memory_5 = 0;
#line 435
$memory_6 = 1;
#line 435
label_3:
#line 435
$memory_7 = c_rt_lib::to_nl($memory_5 >= $memory_3);
#line 435
if (c_rt_lib::check_true($memory_7)) {goto label_11;}
#line 436
$memory_8 = c_rt_lib::ov_mk_none('no');
#line 436
array::push($memory_4, $memory_8);
#line 436
undef($memory_8);
#line 437
$memory_5 = $memory_5 + $memory_6;
#line 437
goto label_3;
#line 437
label_11:
#line 437
undef($memory_5);
#line 437
undef($memory_6);
#line 437
undef($memory_7);
#line 438
$memory_5 = [];
#line 439
$memory_7 = 0;
#line 439
$memory_8 = [];
#line 439
$memory_6 = {was => $memory_7,regs => $memory_8,};
#line 439
undef($memory_7);
#line 439
undef($memory_8);
#line 440
$memory_7 = array::len($memory_0);
#line 440
$memory_8 = 0;
#line 440
$memory_9 = 1;
#line 440
label_24:
#line 440
$memory_10 = c_rt_lib::to_nl($memory_8 >= $memory_7);
#line 440
if (c_rt_lib::check_true($memory_10)) {goto label_30;}
#line 441
array::push($memory_5, $memory_6);
#line 442
$memory_8 = $memory_8 + $memory_9;
#line 442
goto label_24;
#line 442
label_30:
#line 442
undef($memory_7);
#line 442
undef($memory_8);
#line 442
undef($memory_9);
#line 442
undef($memory_10);
#line 443
$memory_7 = array::len($memory_0);
#line 443
$memory_8 = 0;
#line 443
$memory_7 = c_rt_lib::to_nl($memory_7 == $memory_8);
#line 443
undef($memory_8);
#line 443
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 443
if (c_rt_lib::check_true($memory_7)) {goto label_44;}
#line 443
$memory_8 = [];
#line 443
die(dfile::ssave($memory_8));
#line 443
goto label_44;
#line 443
label_44:
#line 443
undef($memory_7);
#line 443
undef($memory_8);
#line 444
$memory_7 = 0;
#line 444
post_processing_priv::set_const_block($memory_7, $memory_0, $memory_1, $memory_5, $memory_2, $memory_4);
#line 444
undef($memory_7);
#line 444
undef($memory_4);
#line 444
undef($memory_5);
#line 444
undef($memory_6);
#line 444
undef($memory_1);
#line 444
undef($memory_2);
#line 444
undef($memory_3);
#line 444
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub post_processing_priv::delete_unused_labels_com($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;my $memory_13;my $memory_14;my $memory_15;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);
#line 448
$memory_1 = {};
#line 449
$memory_2 = {};
#line 451
$memory_4 = "";
#line 452
$memory_6 = 0;
#line 452
$memory_7 = 1;
#line 452
$memory_8 = c_rt_lib::array_len($memory_0);
#line 452
label_6:
#line 452
$memory_9 = c_rt_lib::to_nl($memory_6 >= $memory_8);
#line 452
if (c_rt_lib::check_true($memory_9)) {goto label_68;}
#line 452
$memory_5 = $memory_0->[$memory_6];
#line 453
$memory_10 = $memory_5->{'cmd'};
#line 454
$memory_11 = $memory_10;
#line 454
$memory_11 = c_rt_lib::ov_is($memory_11, 'prt_lbl');
#line 454
$memory_11 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_11));
#line 454
if (c_rt_lib::check_true($memory_11)) {goto label_31;}
#line 455
$memory_12 = $memory_10;
#line 455
$memory_12 = c_rt_lib::ov_as($memory_12, 'prt_lbl');
#line 455
$memory_3 = $memory_12;
#line 455
undef($memory_12);
#line 456
$memory_12 = "";
#line 456
$memory_12 = c_rt_lib::to_nl($memory_4 eq $memory_12);
#line 456
$memory_12 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_12));
#line 456
if (c_rt_lib::check_true($memory_12)) {goto label_25;}
#line 457
$memory_4 = $memory_3;
#line 458
goto label_28;
#line 458
label_25:
#line 459
hash::set_value($memory_2, $memory_3, $memory_4);
#line 460
goto label_28;
#line 460
label_28:
#line 460
undef($memory_12);
#line 461
goto label_36;
#line 461
label_31:
#line 462
$memory_12 = "";
#line 462
$memory_4 = $memory_12;
#line 462
undef($memory_12);
#line 463
goto label_36;
#line 463
label_36:
#line 463
undef($memory_11);
#line 464
$memory_11 = $memory_10;
#line 464
$memory_11 = c_rt_lib::ov_is($memory_11, 'goto');
#line 464
$memory_11 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_11));
#line 464
if (c_rt_lib::check_true($memory_11)) {goto label_48;}
#line 465
$memory_12 = $memory_10;
#line 465
$memory_12 = c_rt_lib::ov_as($memory_12, 'goto');
#line 465
$memory_3 = $memory_12;
#line 465
undef($memory_12);
#line 466
hash::set_value($memory_1, $memory_3, $memory_3);
#line 467
goto label_63;
#line 467
label_48:
#line 467
$memory_11 = $memory_10;
#line 467
$memory_11 = c_rt_lib::ov_is($memory_11, 'if_goto');
#line 467
$memory_11 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_11));
#line 467
if (c_rt_lib::check_true($memory_11)) {goto label_63;}
#line 468
$memory_12 = $memory_10;
#line 468
$memory_12 = c_rt_lib::ov_as($memory_12, 'if_goto');
#line 468
$memory_3 = $memory_12;
#line 468
undef($memory_12);
#line 469
$memory_12 = $memory_3->{'dest'};
#line 469
$memory_13 = $memory_3->{'dest'};
#line 469
hash::set_value($memory_1, $memory_12, $memory_13);
#line 469
undef($memory_13);
#line 469
undef($memory_12);
#line 470
goto label_63;
#line 470
label_63:
#line 470
undef($memory_11);
#line 470
undef($memory_10);
#line 471
$memory_6 = $memory_6 + $memory_7;
#line 471
goto label_6;
#line 471
label_68:
#line 471
undef($memory_5);
#line 471
undef($memory_6);
#line 471
undef($memory_7);
#line 471
undef($memory_8);
#line 471
undef($memory_9);
#line 472
$memory_7 = c_rt_lib::init_iter($memory_2);
#line 472
label_75:
#line 472
$memory_5 = c_rt_lib::is_end_hash($memory_7);
#line 472
if (c_rt_lib::check_true($memory_5)) {goto label_89;}
#line 472
$memory_5 = c_rt_lib::get_key_iter($memory_7);
#line 472
$memory_6 = c_rt_lib::hash_get_value($memory_2, $memory_5);
#line 473
$memory_8 = hash::has_key($memory_1, $memory_5);
#line 473
$memory_8 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 473
if (c_rt_lib::check_true($memory_8)) {goto label_85;}
#line 474
hash::set_value($memory_1, $memory_6, $memory_6);
#line 475
goto label_85;
#line 475
label_85:
#line 475
undef($memory_8);
#line 476
$memory_7 = c_rt_lib::next_iter($memory_7);
#line 476
goto label_75;
#line 476
label_89:
#line 476
undef($memory_5);
#line 476
undef($memory_6);
#line 476
undef($memory_7);
#line 477
$memory_5 = [];
#line 478
$memory_7 = 0;
#line 478
$memory_8 = 1;
#line 478
$memory_9 = c_rt_lib::array_len($memory_0);
#line 478
label_97:
#line 478
$memory_10 = c_rt_lib::to_nl($memory_7 >= $memory_9);
#line 478
if (c_rt_lib::check_true($memory_10)) {goto label_194;}
#line 478
$memory_6 = $memory_0->[$memory_7];
#line 479
$memory_11 = $memory_6->{'cmd'};
#line 480
$memory_12 = $memory_11;
#line 480
$memory_12 = c_rt_lib::ov_is($memory_12, 'prt_lbl');
#line 480
$memory_12 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_12));
#line 480
if (c_rt_lib::check_true($memory_12)) {goto label_132;}
#line 481
$memory_13 = $memory_11;
#line 481
$memory_13 = c_rt_lib::ov_as($memory_13, 'prt_lbl');
#line 481
$memory_3 = $memory_13;
#line 481
undef($memory_13);
#line 482
$memory_13 = hash::has_key($memory_2, $memory_3);
#line 482
$memory_13 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_13));
#line 482
if (c_rt_lib::check_true($memory_13)) {goto label_118;}
#line 482
undef($memory_11);
#line 482
undef($memory_12);
#line 482
undef($memory_13);
#line 482
goto label_191;
#line 482
goto label_118;
#line 482
label_118:
#line 482
undef($memory_13);
#line 483
$memory_13 = hash::has_key($memory_1, $memory_3);
#line 483
$memory_13 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_13));
#line 483
$memory_13 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_13));
#line 483
if (c_rt_lib::check_true($memory_13)) {goto label_129;}
#line 483
undef($memory_11);
#line 483
undef($memory_12);
#line 483
undef($memory_13);
#line 483
goto label_191;
#line 483
goto label_129;
#line 483
label_129:
#line 483
undef($memory_13);
#line 484
goto label_182;
#line 484
label_132:
#line 484
$memory_12 = $memory_11;
#line 484
$memory_12 = c_rt_lib::ov_is($memory_12, 'goto');
#line 484
$memory_12 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_12));
#line 484
if (c_rt_lib::check_true($memory_12)) {goto label_154;}
#line 485
$memory_13 = $memory_11;
#line 485
$memory_13 = c_rt_lib::ov_as($memory_13, 'goto');
#line 485
$memory_3 = $memory_13;
#line 485
undef($memory_13);
#line 486
$memory_13 = hash::has_key($memory_2, $memory_3);
#line 486
$memory_13 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_13));
#line 486
if (c_rt_lib::check_true($memory_13)) {goto label_148;}
#line 486
$memory_14 = hash::get_value($memory_2, $memory_3);
#line 486
$memory_3 = $memory_14;
#line 486
undef($memory_14);
#line 486
goto label_148;
#line 486
label_148:
#line 486
undef($memory_13);
#line 487
$memory_13 = c_rt_lib::ov_mk_arg('goto', $memory_3);
#line 487
$memory_11 = $memory_13;
#line 487
undef($memory_13);
#line 488
goto label_182;
#line 488
label_154:
#line 488
$memory_12 = $memory_11;
#line 488
$memory_12 = c_rt_lib::ov_is($memory_12, 'if_goto');
#line 488
$memory_12 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_12));
#line 488
if (c_rt_lib::check_true($memory_12)) {goto label_182;}
#line 489
$memory_13 = $memory_11;
#line 489
$memory_13 = c_rt_lib::ov_as($memory_13, 'if_goto');
#line 489
$memory_3 = $memory_13;
#line 489
undef($memory_13);
#line 490
$memory_14 = $memory_3->{'dest'};
#line 490
$memory_13 = hash::has_key($memory_2, $memory_14);
#line 490
undef($memory_14);
#line 490
$memory_13 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_13));
#line 490
if (c_rt_lib::check_true($memory_13)) {goto label_176;}
#line 490
$memory_15 = $memory_3->{'dest'};
#line 490
$memory_14 = hash::get_value($memory_2, $memory_15);
#line 490
undef($memory_15);
#line 490
$memory_15 = $memory_14;
#line 490
 if (c_rt_lib::get_hashcount($memory_3) > 1) {$memory_3 = {%{$memory_3}};}$memory_3->{'dest'} = $memory_15;
#line 490
undef($memory_14);
#line 490
undef($memory_15);
#line 490
goto label_176;
#line 490
label_176:
#line 490
undef($memory_13);
#line 491
$memory_13 = c_rt_lib::ov_mk_arg('if_goto', $memory_3);
#line 491
$memory_11 = $memory_13;
#line 491
undef($memory_13);
#line 492
goto label_182;
#line 492
label_182:
#line 492
undef($memory_12);
#line 493
$memory_12 = $memory_6;
#line 494
$memory_13 = $memory_11;
#line 494
 if (c_rt_lib::get_hashcount($memory_12) > 1) {$memory_12 = {%{$memory_12}};}$memory_12->{'cmd'} = $memory_13;
#line 494
undef($memory_13);
#line 495
array::push($memory_5, $memory_12);
#line 495
undef($memory_11);
#line 495
undef($memory_12);
#line 495
label_191:
#line 496
$memory_7 = $memory_7 + $memory_8;
#line 496
goto label_97;
#line 496
label_194:
#line 496
undef($memory_6);
#line 496
undef($memory_7);
#line 496
undef($memory_8);
#line 496
undef($memory_9);
#line 496
undef($memory_10);
#line 497
$memory_0 = $memory_5;
#line 497
undef($memory_1);
#line 497
undef($memory_2);
#line 497
undef($memory_3);
#line 497
undef($memory_4);
#line 497
undef($memory_5);
#line 497
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub post_processing_priv::recalculate_labels_com($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);
#line 501
$memory_1 = {};
#line 502
$memory_2 = array::len($memory_0);
#line 502
$memory_3 = 0;
#line 502
$memory_4 = 1;
#line 502
label_4:
#line 502
$memory_5 = c_rt_lib::to_nl($memory_3 >= $memory_2);
#line 502
if (c_rt_lib::check_true($memory_5)) {goto label_31;}
#line 503
$memory_6 = $memory_0->[$memory_3];
#line 503
$memory_6 = $memory_6->{'cmd'};
#line 504
$memory_7 = $memory_6;
#line 504
$memory_7 = c_rt_lib::ov_is($memory_7, 'prt_lbl');
#line 504
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 504
if (c_rt_lib::check_true($memory_7)) {goto label_26;}
#line 505
$memory_8 = $memory_6;
#line 505
$memory_8 = c_rt_lib::ov_as($memory_8, 'prt_lbl');
#line 505
hash::set_value($memory_1, $memory_8, $memory_3);
#line 505
undef($memory_8);
#line 506
$memory_8 = c_rt_lib::ov_mk_arg('prt_lbl', $memory_3);
#line 506
$memory_9 = c_rt_lib::get_ref_arr($memory_0, $memory_3);
#line 506
$memory_10 = $memory_8;
#line 506
 if (c_rt_lib::get_hashcount($memory_9) > 1) {$memory_9 = {%{$memory_9}};}$memory_9->{'cmd'} = $memory_10;
#line 506
c_rt_lib::set_ref_arr($memory_0, $memory_3, $memory_9);
#line 506
undef($memory_8);
#line 506
undef($memory_9);
#line 506
undef($memory_10);
#line 507
goto label_26;
#line 507
label_26:
#line 507
undef($memory_7);
#line 507
undef($memory_6);
#line 508
$memory_3 = $memory_3 + $memory_4;
#line 508
goto label_4;
#line 508
label_31:
#line 508
undef($memory_2);
#line 508
undef($memory_3);
#line 508
undef($memory_4);
#line 508
undef($memory_5);
#line 509
$memory_2 = array::len($memory_0);
#line 509
$memory_3 = 0;
#line 509
$memory_4 = 1;
#line 509
label_39:
#line 509
$memory_5 = c_rt_lib::to_nl($memory_3 >= $memory_2);
#line 509
if (c_rt_lib::check_true($memory_5)) {goto label_90;}
#line 510
$memory_6 = $memory_0->[$memory_3];
#line 510
$memory_6 = $memory_6->{'cmd'};
#line 511
$memory_7 = $memory_6;
#line 511
$memory_7 = c_rt_lib::ov_is($memory_7, 'goto');
#line 511
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 511
if (c_rt_lib::check_true($memory_7)) {goto label_61;}
#line 512
$memory_9 = $memory_6;
#line 512
$memory_9 = c_rt_lib::ov_as($memory_9, 'goto');
#line 512
$memory_8 = hash::get_value($memory_1, $memory_9);
#line 512
undef($memory_9);
#line 512
$memory_8 = c_rt_lib::ov_mk_arg('goto', $memory_8);
#line 512
$memory_9 = c_rt_lib::get_ref_arr($memory_0, $memory_3);
#line 512
$memory_10 = $memory_8;
#line 512
 if (c_rt_lib::get_hashcount($memory_9) > 1) {$memory_9 = {%{$memory_9}};}$memory_9->{'cmd'} = $memory_10;
#line 512
c_rt_lib::set_ref_arr($memory_0, $memory_3, $memory_9);
#line 512
undef($memory_8);
#line 512
undef($memory_9);
#line 512
undef($memory_10);
#line 513
goto label_85;
#line 513
label_61:
#line 513
$memory_7 = $memory_6;
#line 513
$memory_7 = c_rt_lib::ov_is($memory_7, 'if_goto');
#line 513
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 513
if (c_rt_lib::check_true($memory_7)) {goto label_85;}
#line 514
$memory_8 = $memory_6;
#line 514
$memory_8 = c_rt_lib::ov_as($memory_8, 'if_goto');
#line 515
$memory_10 = $memory_8->{'dest'};
#line 515
$memory_9 = hash::get_value($memory_1, $memory_10);
#line 515
undef($memory_10);
#line 515
$memory_10 = $memory_9;
#line 515
 if (c_rt_lib::get_hashcount($memory_8) > 1) {$memory_8 = {%{$memory_8}};}$memory_8->{'dest'} = $memory_10;
#line 515
undef($memory_9);
#line 515
undef($memory_10);
#line 516
$memory_9 = c_rt_lib::ov_mk_arg('if_goto', $memory_8);
#line 516
$memory_10 = c_rt_lib::get_ref_arr($memory_0, $memory_3);
#line 516
$memory_11 = $memory_9;
#line 516
 if (c_rt_lib::get_hashcount($memory_10) > 1) {$memory_10 = {%{$memory_10}};}$memory_10->{'cmd'} = $memory_11;
#line 516
c_rt_lib::set_ref_arr($memory_0, $memory_3, $memory_10);
#line 516
undef($memory_9);
#line 516
undef($memory_10);
#line 516
undef($memory_11);
#line 516
undef($memory_8);
#line 517
goto label_85;
#line 517
label_85:
#line 517
undef($memory_7);
#line 517
undef($memory_6);
#line 518
$memory_3 = $memory_3 + $memory_4;
#line 518
goto label_39;
#line 518
label_90:
#line 518
undef($memory_2);
#line 518
undef($memory_3);
#line 518
undef($memory_4);
#line 518
undef($memory_5);
#line 518
undef($memory_1);
#line 518
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub post_processing_priv::check_sub($$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];$memory_2 = $_[2];Scalar::Util::weaken($_[2]) if ref($_[2]);
#line 522
$memory_3 = c_rt_lib::ov_is($memory_1, 'no');
#line 522
if (c_rt_lib::check_true($memory_3)) {goto label_7;}
#line 524
$memory_3 = c_rt_lib::ov_is($memory_1, 'yes');
#line 524
if (c_rt_lib::check_true($memory_3)) {goto label_12;}
#line 524
$memory_3 = "NOMATCHALERT";
#line 524
$memory_3 = [$memory_3,$memory_1];
#line 524
die(dfile::ssave($memory_3));
#line 522
label_7:
#line 523
$memory_4 = c_rt_lib::ov_mk_none('no');
#line 523
$memory_0 = $memory_4;
#line 523
undef($memory_4);
#line 524
goto label_17;
#line 524
label_12:
#line 524
$memory_4 = c_rt_lib::ov_as($memory_1, 'yes');
#line 525
array::push($memory_2, $memory_4);
#line 525
undef($memory_4);
#line 526
goto label_17;
#line 526
label_17:
#line 526
undef($memory_3);
#line 526
undef($memory_1);
#line 526
$_[0] = $memory_0;$_[2] = $memory_2;return;
$_[0] = $memory_0;$_[2] = $memory_2;}
