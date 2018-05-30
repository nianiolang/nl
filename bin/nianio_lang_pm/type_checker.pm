use c_rt_lib;
use array;
use ptd;
use tct;
use tc_types;
use hash;
use enum;
use string;
use boolean_t;
use nast;
use ptd_parser;
use ptd_system;
use singleton;
sub type_checker_priv::type_to_ptd;
sub type_checker_priv::get_fun_def_key;
sub type_checker_priv::get_fun_key;
sub type_checker_priv::return_type_to_tct;
sub type_checker_priv::check_types_imported;
sub type_checker_priv::prepare_def_fun;
sub type_checker::check;
sub type_checker::check_modules;
sub type_checker_priv::check_module;
sub type_checker_priv::join_vars;
sub type_checker_priv::set_end_function;
sub type_checker_priv::check_cmd;
sub type_checker_priv::break_continue_block;
sub type_checker_priv::check_try_ensure;
sub type_checker_priv::check_forh;
sub type_checker_priv::check_fora;
sub type_checker_priv::check_while;
sub type_checker_priv::check_rep;
sub type_checker_priv::check_match;
sub type_checker_priv::check_val;
sub type_checker_priv::check_fun_val;
sub type_checker_priv::unary_op_dec_inc;
sub type_checker_priv::get_special_functions;
sub type_checker_priv::get_special_function_def;
sub type_checker_priv::check_special_function;
sub type_checker_priv::rec_get_var_from_lval;
sub type_checker_priv::mk_new_type_lval;
sub type_checker_priv::set_type_to_lval;
sub type_checker_priv::set_type_to_lval_spec;
sub type_checker_priv::get_type_left_side_equation;
sub type_checker_priv::get_type_record_key;
sub type_checker_priv::get_type_from_bin_op_and_check;
sub type_checker_priv::get_print_tct_type_name;
sub type_checker_priv::get_print_tct_label;
sub type_checker_priv::get_print_check_info;
sub type_checker_priv::check_var_decl;
sub type_checker_priv::check_var_decl_try;
sub type_checker_priv::add_var_to_vars;
sub type_checker_priv::set_type_to_variable;
sub type_checker_priv::add_var_decl_to_vars;
sub type_checker_priv::add_var_decl_with_type_and_check;
sub type_checker_priv::is_known;
sub type_checker_priv::get_function_name;
sub type_checker_priv::get_fun_module;
sub type_checker_priv::get_function_def;
sub type_checker_priv::check_function_exists;
sub type_checker_priv::add_error;
sub type_checker_priv::add_warning;

return 1;

sub type_checker_priv::type_to_ptd($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;$memory_0 = $_[0];$memory_1 = $_[1];Scalar::Util::weaken($_[1]) if ref($_[1]);
#line 20
$memory_2 = c_rt_lib::ov_is($memory_0, 'type');
#line 20
if (c_rt_lib::check_true($memory_2)) {goto label_7;}
#line 27
$memory_2 = c_rt_lib::ov_is($memory_0, 'none');
#line 27
if (c_rt_lib::check_true($memory_2)) {goto label_46;}
#line 27
$memory_2 = "NOMATCHALERT";
#line 27
$memory_2 = [$memory_2,$memory_0];
#line 27
die(dfile::ssave($memory_2));
#line 20
label_7:
#line 20
$memory_3 = c_rt_lib::ov_as($memory_0, 'type');
#line 21
$memory_4 = ptd_parser::try_value_to_ptd($memory_3);
#line 21
$memory_5 = c_rt_lib::ov_is($memory_4, 'err');
#line 21
if (c_rt_lib::check_true($memory_5)) {goto label_17;}
#line 24
$memory_5 = c_rt_lib::ov_is($memory_4, 'ok');
#line 24
if (c_rt_lib::check_true($memory_5)) {goto label_31;}
#line 24
$memory_5 = "NOMATCHALERT";
#line 24
$memory_5 = [$memory_5,$memory_4];
#line 24
die(dfile::ssave($memory_5));
#line 21
label_17:
#line 21
$memory_6 = c_rt_lib::ov_as($memory_4, 'err');
#line 22
type_checker_priv::add_error($memory_1, $memory_6);
#line 23
$memory_7 = tct::tct_im();
#line 23
undef($memory_0);
#line 23
undef($memory_2);
#line 23
undef($memory_3);
#line 23
undef($memory_4);
#line 23
undef($memory_5);
#line 23
undef($memory_6);
#line 23
$_[1] = $memory_1;return $memory_7;
#line 23
undef($memory_7);
#line 23
undef($memory_6);
#line 24
goto label_41;
#line 24
label_31:
#line 24
$memory_6 = c_rt_lib::ov_as($memory_4, 'ok');
#line 25
undef($memory_0);
#line 25
undef($memory_2);
#line 25
undef($memory_3);
#line 25
undef($memory_4);
#line 25
undef($memory_5);
#line 25
$_[1] = $memory_1;return $memory_6;
#line 25
undef($memory_6);
#line 26
goto label_41;
#line 26
label_41:
#line 26
undef($memory_4);
#line 26
undef($memory_5);
#line 26
undef($memory_3);
#line 27
goto label_53;
#line 27
label_46:
#line 28
$memory_3 = tct::tct_im();
#line 28
undef($memory_0);
#line 28
undef($memory_2);
#line 28
$_[1] = $memory_1;return $memory_3;
#line 28
undef($memory_3);
#line 29
goto label_53;
#line 29
label_53:
#line 29
undef($memory_2);
#line 29
undef($memory_0);
#line 29
$_[1] = $memory_1;return;
$_[1] = $memory_1;}

sub type_checker_priv::get_fun_def_key($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;$memory_0 = $_[0];
#line 33
$memory_1 = $memory_0->{'access'};
#line 33
$memory_2 = c_rt_lib::ov_is($memory_1, 'pub');
#line 33
if (c_rt_lib::check_true($memory_2)) {goto label_8;}
#line 35
$memory_2 = c_rt_lib::ov_is($memory_1, 'priv');
#line 35
if (c_rt_lib::check_true($memory_2)) {goto label_16;}
#line 35
$memory_2 = "NOMATCHALERT";
#line 35
$memory_2 = [$memory_2,$memory_1];
#line 35
die(dfile::ssave($memory_2));
#line 33
label_8:
#line 34
$memory_3 = $memory_0->{'name'};
#line 34
undef($memory_0);
#line 34
undef($memory_1);
#line 34
undef($memory_2);
#line 34
return $memory_3;
#line 34
undef($memory_3);
#line 35
goto label_27;
#line 35
label_16:
#line 36
$memory_3 = "priv::";
#line 36
$memory_4 = $memory_0->{'name'};
#line 36
$memory_3 = $memory_3 . $memory_4;
#line 36
undef($memory_4);
#line 36
undef($memory_0);
#line 36
undef($memory_1);
#line 36
undef($memory_2);
#line 36
return $memory_3;
#line 36
undef($memory_3);
#line 37
goto label_27;
#line 37
label_27:
#line 37
undef($memory_1);
#line 37
undef($memory_2);
#line 37
undef($memory_0);
#line 37
return;
}

sub type_checker_priv::get_fun_key($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;$memory_0 = $_[0];$memory_1 = $_[1];
#line 41
$memory_2 = "";
#line 42
$memory_3 = "";
#line 42
$memory_3 = c_rt_lib::to_nl($memory_1 eq $memory_3);
#line 42
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 42
if (c_rt_lib::check_true($memory_3)) {goto label_9;}
#line 42
$memory_4 = "priv::";
#line 42
$memory_2 = $memory_2 . $memory_4;
#line 42
undef($memory_4);
#line 42
goto label_9;
#line 42
label_9:
#line 42
undef($memory_3);
#line 43
$memory_3 = $memory_2 . $memory_0;
#line 43
undef($memory_0);
#line 43
undef($memory_1);
#line 43
undef($memory_2);
#line 43
return $memory_3;
#line 43
undef($memory_3);
#line 43
undef($memory_2);
#line 43
undef($memory_0);
#line 43
undef($memory_1);
#line 43
return;
}

sub type_checker_priv::return_type_to_tct($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;$memory_0 = $_[0];$memory_1 = $_[1];Scalar::Util::weaken($_[1]) if ref($_[1]);
#line 47
$memory_2 = c_rt_lib::ov_is($memory_0, 'type');
#line 47
if (c_rt_lib::check_true($memory_2)) {goto label_7;}
#line 55
$memory_2 = c_rt_lib::ov_is($memory_0, 'none');
#line 55
if (c_rt_lib::check_true($memory_2)) {goto label_53;}
#line 55
$memory_2 = "NOMATCHALERT";
#line 55
$memory_2 = [$memory_2,$memory_0];
#line 55
die(dfile::ssave($memory_2));
#line 47
label_7:
#line 47
$memory_3 = c_rt_lib::ov_as($memory_0, 'type');
#line 48
$memory_4 = $memory_3->{'value'};
#line 48
$memory_4 = c_rt_lib::ov_is($memory_4, 'fun_val');
#line 48
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 48
if (c_rt_lib::check_true($memory_4)) {goto label_43;}
#line 49
$memory_5 = $memory_3->{'value'};
#line 49
$memory_5 = c_rt_lib::ov_as($memory_5, 'fun_val');
#line 50
$memory_6 = $memory_5->{'module'};
#line 50
$memory_8 = "ptd";
#line 50
$memory_6 = c_rt_lib::to_nl($memory_6 eq $memory_8);
#line 50
undef($memory_8);
#line 50
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 50
if (c_rt_lib::check_true($memory_7)) {goto label_25;}
#line 50
$memory_6 = $memory_5->{'name'};
#line 50
$memory_8 = "void";
#line 50
$memory_6 = c_rt_lib::to_nl($memory_6 eq $memory_8);
#line 50
undef($memory_8);
#line 50
label_25:
#line 50
undef($memory_7);
#line 50
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 50
if (c_rt_lib::check_true($memory_6)) {goto label_39;}
#line 51
$memory_7 = tct::void();
#line 51
undef($memory_0);
#line 51
undef($memory_2);
#line 51
undef($memory_3);
#line 51
undef($memory_4);
#line 51
undef($memory_5);
#line 51
undef($memory_6);
#line 51
$_[1] = $memory_1;return $memory_7;
#line 51
undef($memory_7);
#line 52
goto label_39;
#line 52
label_39:
#line 52
undef($memory_6);
#line 52
undef($memory_5);
#line 53
goto label_43;
#line 53
label_43:
#line 53
undef($memory_4);
#line 54
$memory_4 = type_checker_priv::type_to_ptd($memory_0, $memory_1);
#line 54
undef($memory_0);
#line 54
undef($memory_2);
#line 54
undef($memory_3);
#line 54
$_[1] = $memory_1;return $memory_4;
#line 54
undef($memory_4);
#line 54
undef($memory_3);
#line 55
goto label_60;
#line 55
label_53:
#line 56
$memory_3 = tct::tct_im();
#line 56
undef($memory_0);
#line 56
undef($memory_2);
#line 56
$_[1] = $memory_1;return $memory_3;
#line 56
undef($memory_3);
#line 57
goto label_60;
#line 57
label_60:
#line 57
undef($memory_2);
#line 57
undef($memory_0);
#line 57
$_[1] = $memory_1;return;
$_[1] = $memory_1;}

sub type_checker_priv::check_types_imported($$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;$memory_0 = $_[0];$memory_1 = $_[1];Scalar::Util::weaken($_[1]) if ref($_[1]);$memory_2 = $_[2];Scalar::Util::weaken($_[2]) if ref($_[2]);
#line 62
$memory_3 = c_rt_lib::ov_is($memory_0, 'tct_im');
#line 62
if (c_rt_lib::check_true($memory_3)) {goto label_21;}
#line 63
$memory_3 = c_rt_lib::ov_is($memory_0, 'tct_arr');
#line 63
if (c_rt_lib::check_true($memory_3)) {goto label_23;}
#line 65
$memory_3 = c_rt_lib::ov_is($memory_0, 'tct_hash');
#line 65
if (c_rt_lib::check_true($memory_3)) {goto label_28;}
#line 67
$memory_3 = c_rt_lib::ov_is($memory_0, 'tct_rec');
#line 67
if (c_rt_lib::check_true($memory_3)) {goto label_33;}
#line 71
$memory_3 = c_rt_lib::ov_is($memory_0, 'tct_ref');
#line 71
if (c_rt_lib::check_true($memory_3)) {goto label_50;}
#line 80
$memory_3 = c_rt_lib::ov_is($memory_0, 'tct_void');
#line 80
if (c_rt_lib::check_true($memory_3)) {goto label_90;}
#line 81
$memory_3 = c_rt_lib::ov_is($memory_0, 'tct_sim');
#line 81
if (c_rt_lib::check_true($memory_3)) {goto label_92;}
#line 82
$memory_3 = c_rt_lib::ov_is($memory_0, 'tct_var');
#line 82
if (c_rt_lib::check_true($memory_3)) {goto label_94;}
#line 89
$memory_3 = c_rt_lib::ov_is($memory_0, 'tct_empty');
#line 89
if (c_rt_lib::check_true($memory_3)) {goto label_126;}
#line 89
$memory_3 = "NOMATCHALERT";
#line 89
$memory_3 = [$memory_3,$memory_0];
#line 89
die(dfile::ssave($memory_3));
#line 62
label_21:
#line 63
goto label_128;
#line 63
label_23:
#line 63
$memory_4 = c_rt_lib::ov_as($memory_0, 'tct_arr');
#line 64
type_checker_priv::check_types_imported($memory_4, $memory_1, $memory_2);
#line 64
undef($memory_4);
#line 65
goto label_128;
#line 65
label_28:
#line 65
$memory_4 = c_rt_lib::ov_as($memory_0, 'tct_hash');
#line 66
type_checker_priv::check_types_imported($memory_4, $memory_1, $memory_2);
#line 66
undef($memory_4);
#line 67
goto label_128;
#line 67
label_33:
#line 67
$memory_4 = c_rt_lib::ov_as($memory_0, 'tct_rec');
#line 68
$memory_7 = c_rt_lib::init_iter($memory_4);
#line 68
label_36:
#line 68
$memory_5 = c_rt_lib::is_end_hash($memory_7);
#line 68
if (c_rt_lib::check_true($memory_5)) {goto label_44;}
#line 68
$memory_5 = c_rt_lib::get_key_iter($memory_7);
#line 68
$memory_6 = c_rt_lib::hash_get_value($memory_4, $memory_5);
#line 69
type_checker_priv::check_types_imported($memory_6, $memory_1, $memory_2);
#line 70
$memory_7 = c_rt_lib::next_iter($memory_7);
#line 70
goto label_36;
#line 70
label_44:
#line 70
undef($memory_5);
#line 70
undef($memory_6);
#line 70
undef($memory_7);
#line 70
undef($memory_4);
#line 71
goto label_128;
#line 71
label_50:
#line 71
$memory_4 = c_rt_lib::ov_as($memory_0, 'tct_ref');
#line 72
$memory_6 = "::";
#line 72
$memory_5 = string::index2($memory_4, $memory_6);
#line 72
undef($memory_6);
#line 73
$memory_6 = 0;
#line 73
$memory_6 = c_rt_lib::to_nl($memory_5 >= $memory_6);
#line 73
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 73
if (c_rt_lib::check_true($memory_6)) {goto label_76;}
#line 74
$memory_8 = 0;
#line 74
$memory_7 = string::substr($memory_4, $memory_8, $memory_5);
#line 74
undef($memory_8);
#line 75
$memory_9 = 2;
#line 75
$memory_9 = $memory_5 + $memory_9;
#line 75
$memory_10 = string::length($memory_4);
#line 75
$memory_10 = $memory_10 - $memory_5;
#line 75
$memory_11 = 2;
#line 75
$memory_10 = $memory_10 - $memory_11;
#line 75
undef($memory_11);
#line 75
$memory_8 = string::substr($memory_4, $memory_9, $memory_10);
#line 75
undef($memory_10);
#line 75
undef($memory_9);
#line 76
type_checker_priv::check_function_exists($memory_7, $memory_8, $memory_1, $memory_2);
#line 76
undef($memory_7);
#line 76
undef($memory_8);
#line 77
goto label_85;
#line 77
label_76:
#line 78
$memory_7 = "wrong type name '";
#line 78
$memory_7 = $memory_7 . $memory_4;
#line 78
$memory_8 = "' ";
#line 78
$memory_7 = $memory_7 . $memory_8;
#line 78
undef($memory_8);
#line 78
type_checker_priv::add_error($memory_2, $memory_7);
#line 78
undef($memory_7);
#line 79
goto label_85;
#line 79
label_85:
#line 79
undef($memory_6);
#line 79
undef($memory_5);
#line 79
undef($memory_4);
#line 80
goto label_128;
#line 80
label_90:
#line 81
goto label_128;
#line 81
label_92:
#line 82
goto label_128;
#line 82
label_94:
#line 82
$memory_4 = c_rt_lib::ov_as($memory_0, 'tct_var');
#line 83
$memory_7 = c_rt_lib::init_iter($memory_4);
#line 83
label_97:
#line 83
$memory_5 = c_rt_lib::is_end_hash($memory_7);
#line 83
if (c_rt_lib::check_true($memory_5)) {goto label_120;}
#line 83
$memory_5 = c_rt_lib::get_key_iter($memory_7);
#line 83
$memory_6 = c_rt_lib::hash_get_value($memory_4, $memory_5);
#line 84
$memory_8 = c_rt_lib::ov_is($memory_6, 'no_param');
#line 84
if (c_rt_lib::check_true($memory_8)) {goto label_109;}
#line 85
$memory_8 = c_rt_lib::ov_is($memory_6, 'with_param');
#line 85
if (c_rt_lib::check_true($memory_8)) {goto label_111;}
#line 85
$memory_8 = "NOMATCHALERT";
#line 85
$memory_8 = [$memory_8,$memory_6];
#line 85
die(dfile::ssave($memory_8));
#line 84
label_109:
#line 85
goto label_116;
#line 85
label_111:
#line 85
$memory_9 = c_rt_lib::ov_as($memory_6, 'with_param');
#line 86
type_checker_priv::check_types_imported($memory_9, $memory_1, $memory_2);
#line 86
undef($memory_9);
#line 87
goto label_116;
#line 87
label_116:
#line 87
undef($memory_8);
#line 88
$memory_7 = c_rt_lib::next_iter($memory_7);
#line 88
goto label_97;
#line 88
label_120:
#line 88
undef($memory_5);
#line 88
undef($memory_6);
#line 88
undef($memory_7);
#line 88
undef($memory_4);
#line 89
goto label_128;
#line 89
label_126:
#line 90
goto label_128;
#line 90
label_128:
#line 90
undef($memory_3);
#line 90
undef($memory_0);
#line 90
$_[1] = $memory_1;$_[2] = $memory_2;return;
$_[1] = $memory_1;$_[2] = $memory_2;}

sub type_checker_priv::prepare_def_fun($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;my $memory_13;my $memory_14;my $memory_15;my $memory_16;my $memory_17;my $memory_18;my $memory_19;my $memory_20;my $memory_21;my $memory_22;my $memory_23;my $memory_24;$memory_0 = $_[0];$memory_1 = $_[1];Scalar::Util::weaken($_[1]) if ref($_[1]);
#line 94
$memory_2 = {};
#line 95
$memory_5 = c_rt_lib::init_iter($memory_0);
#line 95
label_2:
#line 95
$memory_3 = c_rt_lib::is_end_hash($memory_5);
#line 95
if (c_rt_lib::check_true($memory_3)) {goto label_97;}
#line 95
$memory_3 = c_rt_lib::get_key_iter($memory_5);
#line 95
$memory_4 = c_rt_lib::hash_get_value($memory_0, $memory_3);
#line 96
$memory_6 = 1;
#line 96
$memory_6 = -$memory_6;
#line 96
$memory_7 = $memory_6;
#line 96
 if (c_rt_lib::get_hashcount($memory_1) > 1) {$memory_1 = {%{$memory_1}};}$memory_1->{'current_line'} = $memory_7;
#line 96
undef($memory_6);
#line 96
undef($memory_7);
#line 97
$memory_6 = $memory_3;
#line 97
 if (c_rt_lib::get_hashcount($memory_1) > 1) {$memory_1 = {%{$memory_1}};}$memory_1->{'module'} = $memory_6;
#line 97
undef($memory_6);
#line 98
$memory_6 = {};
#line 99
$memory_7 = $memory_4->{'fun_def'};
#line 99
$memory_9 = 0;
#line 99
$memory_10 = 1;
#line 99
$memory_11 = c_rt_lib::array_len($memory_7);
#line 99
label_21:
#line 99
$memory_12 = c_rt_lib::to_nl($memory_9 >= $memory_11);
#line 99
if (c_rt_lib::check_true($memory_12)) {goto label_86;}
#line 99
$memory_8 = $memory_7->[$memory_9];
#line 100
$memory_13 = [];
#line 101
$memory_14 = $memory_8->{'args'};
#line 101
$memory_16 = 0;
#line 101
$memory_17 = 1;
#line 101
$memory_18 = c_rt_lib::array_len($memory_14);
#line 101
label_30:
#line 101
$memory_19 = c_rt_lib::to_nl($memory_16 >= $memory_18);
#line 101
if (c_rt_lib::check_true($memory_19)) {goto label_47;}
#line 101
$memory_15 = $memory_14->[$memory_16];
#line 103
$memory_21 = $memory_15->{'name'};
#line 104
$memory_22 = $memory_15->{'mod'};
#line 105
$memory_24 = $memory_15->{'type'};
#line 105
$memory_23 = type_checker_priv::type_to_ptd($memory_24, $memory_1);
#line 105
undef($memory_24);
#line 105
$memory_20 = {name => $memory_21,mod => $memory_22,type => $memory_23,};
#line 105
undef($memory_21);
#line 105
undef($memory_22);
#line 105
undef($memory_23);
#line 105
array::push($memory_13, $memory_20);
#line 105
undef($memory_20);
#line 107
$memory_16 = $memory_16 + $memory_17;
#line 107
goto label_30;
#line 107
label_47:
#line 107
undef($memory_14);
#line 107
undef($memory_15);
#line 107
undef($memory_16);
#line 107
undef($memory_17);
#line 107
undef($memory_18);
#line 107
undef($memory_19);
#line 109
$memory_15 = $memory_8->{'cmd'};
#line 110
$memory_16 = c_rt_lib::ov_mk_none('no');
#line 111
$memory_17 = c_rt_lib::ov_mk_none('no');
#line 112
$memory_18 = $memory_8->{'name'};
#line 114
$memory_19 = $memory_8->{'access'};
#line 116
$memory_21 = $memory_8->{'ret_type'};
#line 116
$memory_20 = type_checker_priv::return_type_to_tct($memory_21, $memory_1);
#line 116
undef($memory_21);
#line 116
$memory_14 = {cmd => $memory_15,is_type => $memory_16,ref_types => $memory_17,name => $memory_18,module => $memory_3,access => $memory_19,args => $memory_13,ret_type => $memory_20,};
#line 116
undef($memory_15);
#line 116
undef($memory_16);
#line 116
undef($memory_17);
#line 116
undef($memory_18);
#line 116
undef($memory_19);
#line 116
undef($memory_20);
#line 118
$memory_15 = type_checker_priv::get_fun_def_key($memory_14);
#line 119
$memory_16 = hash::has_key($memory_6, $memory_15);
#line 119
$memory_16 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_16));
#line 119
if (c_rt_lib::check_true($memory_16)) {goto label_78;}
#line 119
$memory_17 = "redefine function: ";
#line 119
$memory_17 = $memory_17 . $memory_15;
#line 119
type_checker_priv::add_error($memory_1, $memory_17);
#line 119
undef($memory_17);
#line 119
goto label_78;
#line 119
label_78:
#line 119
undef($memory_16);
#line 120
hash::set_value($memory_6, $memory_15, $memory_14);
#line 120
undef($memory_13);
#line 120
undef($memory_14);
#line 120
undef($memory_15);
#line 121
$memory_9 = $memory_9 + $memory_10;
#line 121
goto label_21;
#line 121
label_86:
#line 121
undef($memory_7);
#line 121
undef($memory_8);
#line 121
undef($memory_9);
#line 121
undef($memory_10);
#line 121
undef($memory_11);
#line 121
undef($memory_12);
#line 122
hash::set_value($memory_2, $memory_3, $memory_6);
#line 122
undef($memory_6);
#line 123
$memory_5 = c_rt_lib::next_iter($memory_5);
#line 123
goto label_2;
#line 123
label_97:
#line 123
undef($memory_3);
#line 123
undef($memory_4);
#line 123
undef($memory_5);
#line 124
undef($memory_0);
#line 124
$_[1] = $memory_1;return $memory_2;
#line 124
undef($memory_2);
#line 124
undef($memory_0);
#line 124
$_[1] = $memory_1;return;
$_[1] = $memory_1;}

sub type_checker::check($$) {
my $memory_0;my $memory_1;my $memory_2;$memory_0 = $_[0];$memory_1 = $_[1];
#line 129
$memory_2 = type_checker::check_modules($memory_0, $memory_1);
#line 129
undef($memory_0);
#line 129
undef($memory_1);
#line 129
return $memory_2;
#line 129
undef($memory_2);
#line 129
undef($memory_0);
#line 129
undef($memory_1);
#line 129
return;
}

sub type_checker::check_modules($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;$memory_0 = $_[0];$memory_1 = $_[1];
#line 134
$memory_3 = [];
#line 134
$memory_4 = [];
#line 134
$memory_5 = 1;
#line 134
$memory_5 = -$memory_5;
#line 134
$memory_6 = "";
#line 134
$memory_2 = {errors => $memory_3,warnings => $memory_4,current_line => $memory_5,module => $memory_6,};
#line 134
undef($memory_3);
#line 134
undef($memory_4);
#line 134
undef($memory_5);
#line 134
undef($memory_6);
#line 135
$memory_3 = type_checker_priv::prepare_def_fun($memory_1, $memory_2);
#line 136
$memory_5 = [];
#line 136
$memory_6 = [];
#line 136
$memory_4 = {delete => $memory_5,create => $memory_6,};
#line 136
undef($memory_5);
#line 136
undef($memory_6);
#line 137
$memory_7 = c_rt_lib::init_iter($memory_0);
#line 137
label_17:
#line 137
$memory_5 = c_rt_lib::is_end_hash($memory_7);
#line 137
if (c_rt_lib::check_true($memory_5)) {goto label_34;}
#line 137
$memory_5 = c_rt_lib::get_key_iter($memory_7);
#line 137
$memory_6 = c_rt_lib::hash_get_value($memory_0, $memory_5);
#line 138
$memory_8 = 1;
#line 138
$memory_8 = -$memory_8;
#line 138
$memory_9 = $memory_8;
#line 138
 if (c_rt_lib::get_hashcount($memory_2) > 1) {$memory_2 = {%{$memory_2}};}$memory_2->{'current_line'} = $memory_9;
#line 138
undef($memory_8);
#line 138
undef($memory_9);
#line 139
$memory_8 = $memory_5;
#line 139
 if (c_rt_lib::get_hashcount($memory_2) > 1) {$memory_2 = {%{$memory_2}};}$memory_2->{'module'} = $memory_8;
#line 139
undef($memory_8);
#line 140
type_checker_priv::check_module($memory_6, $memory_3, $memory_2, $memory_4);
#line 141
$memory_7 = c_rt_lib::next_iter($memory_7);
#line 141
goto label_17;
#line 141
label_34:
#line 141
undef($memory_5);
#line 141
undef($memory_6);
#line 141
undef($memory_7);
#line 142
$memory_6 = $memory_2->{'errors'};
#line 142
$memory_7 = $memory_2->{'warnings'};
#line 142
$memory_5 = {errors => $memory_6,deref => $memory_4,warnings => $memory_7,};
#line 142
undef($memory_6);
#line 142
undef($memory_7);
#line 142
undef($memory_0);
#line 142
undef($memory_1);
#line 142
undef($memory_2);
#line 142
undef($memory_3);
#line 142
undef($memory_4);
#line 142
return $memory_5;
#line 142
undef($memory_5);
#line 142
undef($memory_2);
#line 142
undef($memory_3);
#line 142
undef($memory_4);
#line 142
undef($memory_0);
#line 142
undef($memory_1);
#line 142
return;
}

sub type_checker_priv::check_module($$$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;my $memory_13;my $memory_14;my $memory_15;my $memory_16;my $memory_17;my $memory_18;my $memory_19;$memory_0 = $_[0];$memory_1 = $_[1];Scalar::Util::weaken($_[1]) if ref($_[1]);$memory_2 = $_[2];Scalar::Util::weaken($_[2]) if ref($_[2]);$memory_3 = $_[3];Scalar::Util::weaken($_[3]) if ref($_[3]);
#line 150
$memory_6 = $memory_0->{'name'};
#line 151
$memory_8 = {};
#line 151
$memory_9 = c_rt_lib::to_nl(0);
#line 151
$memory_7 = {vars => $memory_8,is => $memory_9,};
#line 151
undef($memory_8);
#line 151
undef($memory_9);
#line 152
$memory_8 = tct::empty();
#line 152
$memory_5 = {deref => $memory_3,current_module => $memory_6,breaks => $memory_7,ret_type => $memory_8,};
#line 152
undef($memory_6);
#line 152
undef($memory_7);
#line 152
undef($memory_8);
#line 154
$memory_6 = {};
#line 154
$memory_4 = {env => $memory_5,imports => $memory_6,funs => $memory_1,};
#line 154
undef($memory_5);
#line 154
undef($memory_6);
#line 157
$memory_5 = $memory_0->{'import'};
#line 157
$memory_7 = 0;
#line 157
$memory_8 = 1;
#line 157
$memory_9 = c_rt_lib::array_len($memory_5);
#line 157
label_19:
#line 157
$memory_10 = c_rt_lib::to_nl($memory_7 >= $memory_9);
#line 157
if (c_rt_lib::check_true($memory_10)) {goto label_36;}
#line 157
$memory_6 = $memory_5->[$memory_7];
#line 158
$memory_11 = "imports";
#line 158
$memory_11 = c_rt_lib::get_ref_hash($memory_4, $memory_11);
#line 158
$memory_12 = $memory_6->{'name'};
#line 158
$memory_13 = c_rt_lib::to_nl(1);
#line 158
hash::set_value($memory_11, $memory_12, $memory_13);
#line 158
undef($memory_13);
#line 158
undef($memory_12);
#line 158
$memory_12 = "imports";
#line 158
c_rt_lib::set_ref_hash($memory_4, $memory_12, $memory_11);
#line 158
undef($memory_12);
#line 158
undef($memory_11);
#line 159
$memory_7 = $memory_7 + $memory_8;
#line 159
goto label_19;
#line 159
label_36:
#line 159
undef($memory_5);
#line 159
undef($memory_6);
#line 159
undef($memory_7);
#line 159
undef($memory_8);
#line 159
undef($memory_9);
#line 159
undef($memory_10);
#line 160
$memory_5 = "imports";
#line 160
$memory_5 = c_rt_lib::get_ref_hash($memory_4, $memory_5);
#line 160
$memory_6 = $memory_0->{'name'};
#line 160
$memory_7 = c_rt_lib::to_nl(1);
#line 160
hash::set_value($memory_5, $memory_6, $memory_7);
#line 160
undef($memory_7);
#line 160
undef($memory_6);
#line 160
$memory_6 = "imports";
#line 160
c_rt_lib::set_ref_hash($memory_4, $memory_6, $memory_5);
#line 160
undef($memory_6);
#line 160
undef($memory_5);
#line 161
$memory_5 = $memory_0->{'fun_def'};
#line 161
$memory_7 = 0;
#line 161
$memory_8 = 1;
#line 161
$memory_9 = c_rt_lib::array_len($memory_5);
#line 161
label_58:
#line 161
$memory_10 = c_rt_lib::to_nl($memory_7 >= $memory_9);
#line 161
if (c_rt_lib::check_true($memory_10)) {goto label_111;}
#line 161
$memory_6 = $memory_5->[$memory_7];
#line 162
$memory_11 = {};
#line 163
$memory_12 = $memory_6->{'args'};
#line 163
$memory_14 = 0;
#line 163
$memory_15 = 1;
#line 163
$memory_16 = c_rt_lib::array_len($memory_12);
#line 163
label_67:
#line 163
$memory_17 = c_rt_lib::to_nl($memory_14 >= $memory_16);
#line 163
if (c_rt_lib::check_true($memory_17)) {goto label_81;}
#line 163
$memory_13 = $memory_12->[$memory_14];
#line 164
$memory_19 = $memory_13->{'type'};
#line 164
$memory_18 = type_checker_priv::type_to_ptd($memory_19, $memory_2);
#line 164
undef($memory_19);
#line 165
type_checker_priv::check_types_imported($memory_18, $memory_4, $memory_2);
#line 166
$memory_19 = $memory_13->{'name'};
#line 166
type_checker_priv::add_var_decl_to_vars($memory_18, $memory_19, $memory_11);
#line 166
undef($memory_19);
#line 166
undef($memory_18);
#line 167
$memory_14 = $memory_14 + $memory_15;
#line 167
goto label_67;
#line 167
label_81:
#line 167
undef($memory_12);
#line 167
undef($memory_13);
#line 167
undef($memory_14);
#line 167
undef($memory_15);
#line 167
undef($memory_16);
#line 167
undef($memory_17);
#line 168
$memory_13 = $memory_6->{'ret_type'};
#line 168
$memory_12 = type_checker_priv::return_type_to_tct($memory_13, $memory_2);
#line 168
undef($memory_13);
#line 168
$memory_13 = "env";
#line 168
$memory_13 = c_rt_lib::get_ref_hash($memory_4, $memory_13);
#line 168
$memory_14 = $memory_12;
#line 168
 if (c_rt_lib::get_hashcount($memory_13) > 1) {$memory_13 = {%{$memory_13}};}$memory_13->{'ret_type'} = $memory_14;
#line 168
$memory_15 = "env";
#line 168
c_rt_lib::set_ref_hash($memory_4, $memory_15, $memory_13);
#line 168
undef($memory_15);
#line 168
undef($memory_12);
#line 168
undef($memory_13);
#line 168
undef($memory_14);
#line 169
$memory_12 = $memory_4->{'env'};
#line 169
$memory_12 = $memory_12->{'ret_type'};
#line 169
type_checker_priv::check_types_imported($memory_12, $memory_4, $memory_2);
#line 169
undef($memory_12);
#line 170
$memory_12 = $memory_6->{'cmd'};
#line 170
type_checker_priv::check_cmd($memory_12, $memory_4, $memory_11, $memory_2);
#line 170
undef($memory_12);
#line 170
undef($memory_11);
#line 171
$memory_7 = $memory_7 + $memory_8;
#line 171
goto label_58;
#line 171
label_111:
#line 171
undef($memory_5);
#line 171
undef($memory_6);
#line 171
undef($memory_7);
#line 171
undef($memory_8);
#line 171
undef($memory_9);
#line 171
undef($memory_10);
#line 172
$memory_5 = $memory_4->{'funs'};
#line 172
$memory_1 = $memory_5;
#line 172
undef($memory_5);
#line 173
$memory_5 = $memory_4->{'env'};
#line 173
$memory_5 = $memory_5->{'deref'};
#line 173
$memory_3 = $memory_5;
#line 173
undef($memory_5);
#line 173
undef($memory_4);
#line 173
undef($memory_0);
#line 173
$_[1] = $memory_1;$_[2] = $memory_2;$_[3] = $memory_3;return;
$_[1] = $memory_1;$_[2] = $memory_2;$_[3] = $memory_3;}

sub type_checker_priv::join_vars($$$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];$memory_2 = $_[2];Scalar::Util::weaken($_[2]) if ref($_[2]);$memory_3 = $_[3];Scalar::Util::weaken($_[3]) if ref($_[3]);
#line 178
$memory_5 = "__END";
#line 178
$memory_4 = hash::has_key($memory_1, $memory_5);
#line 178
undef($memory_5);
#line 178
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 178
if (c_rt_lib::check_true($memory_4)) {goto label_9;}
#line 178
undef($memory_1);
#line 178
undef($memory_4);
#line 178
$_[0] = $memory_0;$_[2] = $memory_2;$_[3] = $memory_3;return;
#line 178
goto label_9;
#line 178
label_9:
#line 178
undef($memory_4);
#line 179
$memory_5 = "__END";
#line 179
$memory_4 = hash::has_key($memory_0, $memory_5);
#line 179
undef($memory_5);
#line 179
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 179
if (c_rt_lib::check_true($memory_4)) {goto label_21;}
#line 180
$memory_0 = $memory_1;
#line 181
undef($memory_1);
#line 181
undef($memory_4);
#line 181
$_[0] = $memory_0;$_[2] = $memory_2;$_[3] = $memory_3;return;
#line 182
goto label_21;
#line 182
label_21:
#line 182
undef($memory_4);
#line 183
$memory_6 = c_rt_lib::init_iter($memory_0);
#line 183
label_24:
#line 183
$memory_4 = c_rt_lib::is_end_hash($memory_6);
#line 183
if (c_rt_lib::check_true($memory_4)) {goto label_54;}
#line 183
$memory_4 = c_rt_lib::get_key_iter($memory_6);
#line 183
$memory_5 = c_rt_lib::hash_get_value($memory_0, $memory_4);
#line 184
$memory_7 = $memory_5->{'overwrited'};
#line 184
$memory_8 = c_rt_lib::ov_is($memory_7, 'yes');
#line 184
if (c_rt_lib::check_true($memory_8)) {goto label_37;}
#line 188
$memory_8 = c_rt_lib::ov_is($memory_7, 'no');
#line 188
if (c_rt_lib::check_true($memory_8)) {goto label_47;}
#line 188
$memory_8 = "NOMATCHALERT";
#line 188
$memory_8 = [$memory_8,$memory_7];
#line 188
die(dfile::ssave($memory_8));
#line 184
label_37:
#line 185
$memory_9 = $memory_5->{'type'};
#line 186
$memory_10 = hash::get_value($memory_1, $memory_4);
#line 186
$memory_10 = $memory_10->{'type'};
#line 187
$memory_11 = ptd_system::cross_type($memory_9, $memory_10, $memory_2, $memory_3);
#line 187
type_checker_priv::set_type_to_variable($memory_0, $memory_4, $memory_11);
#line 187
undef($memory_11);
#line 187
undef($memory_9);
#line 187
undef($memory_10);
#line 188
goto label_49;
#line 188
label_47:
#line 189
goto label_49;
#line 189
label_49:
#line 189
undef($memory_7);
#line 189
undef($memory_8);
#line 190
$memory_6 = c_rt_lib::next_iter($memory_6);
#line 190
goto label_24;
#line 190
label_54:
#line 190
undef($memory_4);
#line 190
undef($memory_5);
#line 190
undef($memory_6);
#line 190
undef($memory_1);
#line 190
$_[0] = $memory_0;$_[2] = $memory_2;$_[3] = $memory_3;return;
$_[0] = $memory_0;$_[2] = $memory_2;$_[3] = $memory_3;}

sub type_checker_priv::set_end_function($) {
my $memory_0;my $memory_1;my $memory_2;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);
#line 194
$memory_1 = "__END";
#line 194
$memory_2 = tct::empty();
#line 194
type_checker_priv::set_type_to_variable($memory_0, $memory_1, $memory_2);
#line 194
undef($memory_2);
#line 194
undef($memory_1);
#line 194
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub type_checker_priv::check_cmd($$$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;my $memory_13;my $memory_14;my $memory_15;my $memory_16;my $memory_17;my $memory_18;my $memory_19;my $memory_20;my $memory_21;$memory_0 = $_[0];$memory_1 = $_[1];Scalar::Util::weaken($_[1]) if ref($_[1]);$memory_2 = $_[2];Scalar::Util::weaken($_[2]) if ref($_[2]);$memory_3 = $_[3];Scalar::Util::weaken($_[3]) if ref($_[3]);
#line 199
$memory_4 = $memory_0->{'debug'};
#line 199
$memory_4 = $memory_4->{'begin'};
#line 199
$memory_4 = $memory_4->{'line'};
#line 199
$memory_5 = $memory_4;
#line 199
 if (c_rt_lib::get_hashcount($memory_3) > 1) {$memory_3 = {%{$memory_3}};}$memory_3->{'current_line'} = $memory_5;
#line 199
undef($memory_4);
#line 199
undef($memory_5);
#line 200
$memory_4 = {};
#line 201
$memory_5 = $memory_2;
#line 202
$memory_6 = $memory_0->{'cmd'};
#line 202
$memory_7 = c_rt_lib::ov_is($memory_6, 'if');
#line 202
if (c_rt_lib::check_true($memory_7)) {goto label_53;}
#line 221
$memory_7 = c_rt_lib::ov_is($memory_6, 'for');
#line 221
if (c_rt_lib::check_true($memory_7)) {goto label_135;}
#line 238
$memory_7 = c_rt_lib::ov_is($memory_6, 'fora');
#line 238
if (c_rt_lib::check_true($memory_7)) {goto label_202;}
#line 240
$memory_7 = c_rt_lib::ov_is($memory_6, 'forh');
#line 240
if (c_rt_lib::check_true($memory_7)) {goto label_207;}
#line 242
$memory_7 = c_rt_lib::ov_is($memory_6, 'loop');
#line 242
if (c_rt_lib::check_true($memory_7)) {goto label_212;}
#line 244
$memory_7 = c_rt_lib::ov_is($memory_6, 'rep');
#line 244
if (c_rt_lib::check_true($memory_7)) {goto label_217;}
#line 246
$memory_7 = c_rt_lib::ov_is($memory_6, 'while');
#line 246
if (c_rt_lib::check_true($memory_7)) {goto label_222;}
#line 248
$memory_7 = c_rt_lib::ov_is($memory_6, 'if_mod');
#line 248
if (c_rt_lib::check_true($memory_7)) {goto label_227;}
#line 256
$memory_7 = c_rt_lib::ov_is($memory_6, 'unless_mod');
#line 256
if (c_rt_lib::check_true($memory_7)) {goto label_256;}
#line 264
$memory_7 = c_rt_lib::ov_is($memory_6, 'break');
#line 264
if (c_rt_lib::check_true($memory_7)) {goto label_285;}
#line 272
$memory_7 = c_rt_lib::ov_is($memory_6, 'continue');
#line 272
if (c_rt_lib::check_true($memory_7)) {goto label_320;}
#line 280
$memory_7 = c_rt_lib::ov_is($memory_6, 'match');
#line 280
if (c_rt_lib::check_true($memory_7)) {goto label_355;}
#line 282
$memory_7 = c_rt_lib::ov_is($memory_6, 'value');
#line 282
if (c_rt_lib::check_true($memory_7)) {goto label_360;}
#line 284
$memory_7 = c_rt_lib::ov_is($memory_6, 'return');
#line 284
if (c_rt_lib::check_true($memory_7)) {goto label_365;}
#line 298
$memory_7 = c_rt_lib::ov_is($memory_6, 'block');
#line 298
if (c_rt_lib::check_true($memory_7)) {goto label_448;}
#line 304
$memory_7 = c_rt_lib::ov_is($memory_6, 'die');
#line 304
if (c_rt_lib::check_true($memory_7)) {goto label_482;}
#line 309
$memory_7 = c_rt_lib::ov_is($memory_6, 'var_decl');
#line 309
if (c_rt_lib::check_true($memory_7)) {goto label_503;}
#line 311
$memory_7 = c_rt_lib::ov_is($memory_6, 'try');
#line 311
if (c_rt_lib::check_true($memory_7)) {goto label_512;}
#line 322
$memory_7 = c_rt_lib::ov_is($memory_6, 'ensure');
#line 322
if (c_rt_lib::check_true($memory_7)) {goto label_566;}
#line 326
$memory_7 = c_rt_lib::ov_is($memory_6, 'nop');
#line 326
if (c_rt_lib::check_true($memory_7)) {goto label_575;}
#line 326
$memory_7 = "NOMATCHALERT";
#line 326
$memory_7 = [$memory_7,$memory_6];
#line 326
die(dfile::ssave($memory_7));
#line 202
label_53:
#line 202
$memory_8 = c_rt_lib::ov_as($memory_6, 'if');
#line 203
$memory_10 = $memory_8->{'cond'};
#line 203
$memory_9 = type_checker_priv::check_val($memory_10, $memory_1, $memory_5, $memory_3);
#line 203
undef($memory_10);
#line 206
$memory_10 = ptd_system::is_condition_type($memory_9, $memory_1, $memory_3);
#line 206
$memory_10 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_10));
#line 206
$memory_10 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_10));
#line 206
if (c_rt_lib::check_true($memory_10)) {goto label_71;}
#line 204
$memory_11 = "if argument should be sim or boolean instead of ";
#line 205
$memory_13 = $memory_9->{'type'};
#line 205
$memory_12 = type_checker_priv::get_print_tct_type_name($memory_13);
#line 205
undef($memory_13);
#line 205
$memory_11 = $memory_11 . $memory_12;
#line 205
undef($memory_12);
#line 205
type_checker_priv::add_error($memory_3, $memory_11);
#line 205
undef($memory_11);
#line 205
goto label_71;
#line 205
label_71:
#line 205
undef($memory_10);
#line 207
$memory_10 = $memory_5;
#line 208
$memory_11 = $memory_8->{'if'};
#line 208
type_checker_priv::check_cmd($memory_11, $memory_1, $memory_10, $memory_3);
#line 208
undef($memory_11);
#line 209
$memory_11 = $memory_8->{'elsif'};
#line 209
$memory_13 = 0;
#line 209
$memory_14 = 1;
#line 209
$memory_15 = c_rt_lib::array_len($memory_11);
#line 209
label_81:
#line 209
$memory_16 = c_rt_lib::to_nl($memory_13 >= $memory_15);
#line 209
if (c_rt_lib::check_true($memory_16)) {goto label_120;}
#line 209
$memory_12 = $memory_11->[$memory_13];
#line 210
$memory_17 = $memory_12->{'cmd'};
#line 210
$memory_17 = $memory_17->{'debug'};
#line 210
$memory_17 = $memory_17->{'begin'};
#line 210
$memory_17 = $memory_17->{'line'};
#line 210
$memory_18 = $memory_17;
#line 210
 if (c_rt_lib::get_hashcount($memory_3) > 1) {$memory_3 = {%{$memory_3}};}$memory_3->{'current_line'} = $memory_18;
#line 210
undef($memory_17);
#line 210
undef($memory_18);
#line 211
$memory_18 = $memory_12->{'cond'};
#line 211
$memory_17 = type_checker_priv::check_val($memory_18, $memory_1, $memory_5, $memory_3);
#line 211
undef($memory_18);
#line 214
$memory_18 = ptd_system::is_condition_type($memory_17, $memory_1, $memory_3);
#line 214
$memory_18 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_18));
#line 214
$memory_18 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_18));
#line 214
if (c_rt_lib::check_true($memory_18)) {goto label_109;}
#line 212
$memory_19 = "elsif condition should be sim or boolean instead of ";
#line 213
$memory_21 = $memory_17->{'type'};
#line 213
$memory_20 = type_checker_priv::get_print_tct_type_name($memory_21);
#line 213
undef($memory_21);
#line 213
$memory_19 = $memory_19 . $memory_20;
#line 213
undef($memory_20);
#line 213
type_checker_priv::add_error($memory_3, $memory_19);
#line 213
undef($memory_19);
#line 213
goto label_109;
#line 213
label_109:
#line 213
undef($memory_18);
#line 215
$memory_18 = $memory_5;
#line 216
$memory_19 = $memory_12->{'cmd'};
#line 216
type_checker_priv::check_cmd($memory_19, $memory_1, $memory_18, $memory_3);
#line 216
undef($memory_19);
#line 217
type_checker_priv::join_vars($memory_10, $memory_18, $memory_1, $memory_3);
#line 217
undef($memory_17);
#line 217
undef($memory_18);
#line 218
$memory_13 = $memory_13 + $memory_14;
#line 218
goto label_81;
#line 218
label_120:
#line 218
undef($memory_11);
#line 218
undef($memory_12);
#line 218
undef($memory_13);
#line 218
undef($memory_14);
#line 218
undef($memory_15);
#line 218
undef($memory_16);
#line 219
$memory_11 = $memory_8->{'else'};
#line 219
type_checker_priv::check_cmd($memory_11, $memory_1, $memory_5, $memory_3);
#line 219
undef($memory_11);
#line 220
type_checker_priv::join_vars($memory_5, $memory_10, $memory_1, $memory_3);
#line 220
undef($memory_9);
#line 220
undef($memory_10);
#line 220
undef($memory_8);
#line 221
goto label_577;
#line 221
label_135:
#line 221
$memory_8 = c_rt_lib::ov_as($memory_6, 'for');
#line 222
$memory_9 = $memory_8->{'start'};
#line 222
$memory_10 = c_rt_lib::ov_is($memory_9, 'value');
#line 222
if (c_rt_lib::check_true($memory_10)) {goto label_145;}
#line 224
$memory_10 = c_rt_lib::ov_is($memory_9, 'var_decl');
#line 224
if (c_rt_lib::check_true($memory_10)) {goto label_150;}
#line 224
$memory_10 = "NOMATCHALERT";
#line 224
$memory_10 = [$memory_10,$memory_9];
#line 224
die(dfile::ssave($memory_10));
#line 222
label_145:
#line 222
$memory_11 = c_rt_lib::ov_as($memory_9, 'value');
#line 223
type_checker_priv::check_val($memory_11, $memory_1, $memory_5, $memory_3);
#line 223
undef($memory_11);
#line 224
goto label_159;
#line 224
label_150:
#line 224
$memory_11 = c_rt_lib::ov_as($memory_9, 'var_decl');
#line 225
$memory_12 = type_checker_priv::check_var_decl($memory_11, $memory_1, $memory_5, $memory_3);
#line 225
$memory_13 = $memory_11->{'name'};
#line 225
type_checker_priv::add_var_to_vars($memory_12, $memory_13, $memory_5);
#line 225
undef($memory_13);
#line 225
undef($memory_12);
#line 225
undef($memory_11);
#line 226
goto label_159;
#line 226
label_159:
#line 226
undef($memory_9);
#line 226
undef($memory_10);
#line 227
$memory_9 = $memory_5;
#line 228
$memory_10 = $memory_8->{'cond'};
#line 228
$memory_10 = $memory_10->{'value'};
#line 228
$memory_10 = c_rt_lib::ov_is($memory_10, 'nop');
#line 228
$memory_10 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_10));
#line 228
$memory_10 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_10));
#line 228
if (c_rt_lib::check_true($memory_10)) {goto label_190;}
#line 229
$memory_12 = $memory_8->{'cond'};
#line 229
$memory_11 = type_checker_priv::check_val($memory_12, $memory_1, $memory_9, $memory_3);
#line 229
undef($memory_12);
#line 232
$memory_12 = ptd_system::is_condition_type($memory_11, $memory_1, $memory_3);
#line 232
$memory_12 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_12));
#line 232
$memory_12 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_12));
#line 232
if (c_rt_lib::check_true($memory_12)) {goto label_185;}
#line 230
$memory_13 = "for condition should be sim or boolean instead of ";
#line 231
$memory_15 = $memory_11->{'type'};
#line 231
$memory_14 = type_checker_priv::get_print_tct_type_name($memory_15);
#line 231
undef($memory_15);
#line 231
$memory_13 = $memory_13 . $memory_14;
#line 231
undef($memory_14);
#line 231
type_checker_priv::add_error($memory_3, $memory_13);
#line 231
undef($memory_13);
#line 231
goto label_185;
#line 231
label_185:
#line 231
undef($memory_12);
#line 233
type_checker_priv::join_vars($memory_9, $memory_5, $memory_1, $memory_3);
#line 233
undef($memory_11);
#line 234
goto label_190;
#line 234
label_190:
#line 234
undef($memory_10);
#line 235
$memory_10 = $memory_8->{'cmd'};
#line 235
type_checker_priv::break_continue_block($memory_10, $memory_1, $memory_9, $memory_3);
#line 235
undef($memory_10);
#line 236
$memory_10 = $memory_8->{'iter'};
#line 236
type_checker_priv::check_val($memory_10, $memory_1, $memory_9, $memory_3);
#line 236
undef($memory_10);
#line 237
type_checker_priv::join_vars($memory_5, $memory_9, $memory_1, $memory_3);
#line 237
undef($memory_9);
#line 237
undef($memory_8);
#line 238
goto label_577;
#line 238
label_202:
#line 238
$memory_8 = c_rt_lib::ov_as($memory_6, 'fora');
#line 239
type_checker_priv::check_fora($memory_8, $memory_1, $memory_5, $memory_3);
#line 239
undef($memory_8);
#line 240
goto label_577;
#line 240
label_207:
#line 240
$memory_8 = c_rt_lib::ov_as($memory_6, 'forh');
#line 241
type_checker_priv::check_forh($memory_8, $memory_1, $memory_5, $memory_3);
#line 241
undef($memory_8);
#line 242
goto label_577;
#line 242
label_212:
#line 242
$memory_8 = c_rt_lib::ov_as($memory_6, 'loop');
#line 243
type_checker_priv::break_continue_block($memory_8, $memory_1, $memory_5, $memory_3);
#line 243
undef($memory_8);
#line 244
goto label_577;
#line 244
label_217:
#line 244
$memory_8 = c_rt_lib::ov_as($memory_6, 'rep');
#line 245
type_checker_priv::check_rep($memory_8, $memory_1, $memory_5, $memory_3);
#line 245
undef($memory_8);
#line 246
goto label_577;
#line 246
label_222:
#line 246
$memory_8 = c_rt_lib::ov_as($memory_6, 'while');
#line 247
type_checker_priv::check_while($memory_8, $memory_1, $memory_5, $memory_3);
#line 247
undef($memory_8);
#line 248
goto label_577;
#line 248
label_227:
#line 248
$memory_8 = c_rt_lib::ov_as($memory_6, 'if_mod');
#line 249
$memory_10 = $memory_8->{'cond'};
#line 249
$memory_9 = type_checker_priv::check_val($memory_10, $memory_1, $memory_5, $memory_3);
#line 249
undef($memory_10);
#line 252
$memory_10 = ptd_system::is_condition_type($memory_9, $memory_1, $memory_3);
#line 252
$memory_10 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_10));
#line 252
$memory_10 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_10));
#line 252
if (c_rt_lib::check_true($memory_10)) {goto label_245;}
#line 250
$memory_11 = "if argument should be sim or boolean type instead of ";
#line 251
$memory_13 = $memory_9->{'type'};
#line 251
$memory_12 = type_checker_priv::get_print_tct_type_name($memory_13);
#line 251
undef($memory_13);
#line 251
$memory_11 = $memory_11 . $memory_12;
#line 251
undef($memory_12);
#line 251
type_checker_priv::add_error($memory_3, $memory_11);
#line 251
undef($memory_11);
#line 251
goto label_245;
#line 251
label_245:
#line 251
undef($memory_10);
#line 253
$memory_10 = $memory_5;
#line 254
$memory_11 = $memory_8->{'cmd'};
#line 254
type_checker_priv::check_cmd($memory_11, $memory_1, $memory_10, $memory_3);
#line 254
undef($memory_11);
#line 255
type_checker_priv::join_vars($memory_5, $memory_10, $memory_1, $memory_3);
#line 255
undef($memory_9);
#line 255
undef($memory_10);
#line 255
undef($memory_8);
#line 256
goto label_577;
#line 256
label_256:
#line 256
$memory_8 = c_rt_lib::ov_as($memory_6, 'unless_mod');
#line 257
$memory_10 = $memory_8->{'cond'};
#line 257
$memory_9 = type_checker_priv::check_val($memory_10, $memory_1, $memory_5, $memory_3);
#line 257
undef($memory_10);
#line 260
$memory_10 = ptd_system::is_condition_type($memory_9, $memory_1, $memory_3);
#line 260
$memory_10 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_10));
#line 260
$memory_10 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_10));
#line 260
if (c_rt_lib::check_true($memory_10)) {goto label_274;}
#line 258
$memory_11 = "unless argument should be sim or boolean type instead of ";
#line 259
$memory_13 = $memory_9->{'type'};
#line 259
$memory_12 = type_checker_priv::get_print_tct_type_name($memory_13);
#line 259
undef($memory_13);
#line 259
$memory_11 = $memory_11 . $memory_12;
#line 259
undef($memory_12);
#line 259
type_checker_priv::add_error($memory_3, $memory_11);
#line 259
undef($memory_11);
#line 259
goto label_274;
#line 259
label_274:
#line 259
undef($memory_10);
#line 261
$memory_10 = $memory_5;
#line 262
$memory_11 = $memory_8->{'cmd'};
#line 262
type_checker_priv::check_cmd($memory_11, $memory_1, $memory_10, $memory_3);
#line 262
undef($memory_11);
#line 263
type_checker_priv::join_vars($memory_5, $memory_10, $memory_1, $memory_3);
#line 263
undef($memory_9);
#line 263
undef($memory_10);
#line 263
undef($memory_8);
#line 264
goto label_577;
#line 264
label_285:
#line 265
$memory_8 = $memory_1->{'env'};
#line 265
$memory_8 = $memory_8->{'breaks'};
#line 265
$memory_8 = $memory_8->{'is'};
#line 265
$memory_8 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 265
$memory_8 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 265
if (c_rt_lib::check_true($memory_8)) {goto label_296;}
#line 266
$memory_9 = "command break can be used only in cyclic block";
#line 266
type_checker_priv::add_error($memory_3, $memory_9);
#line 266
undef($memory_9);
#line 267
goto label_317;
#line 267
label_296:
#line 268
$memory_9 = $memory_1->{'env'};
#line 268
$memory_9 = $memory_9->{'breaks'};
#line 268
$memory_9 = $memory_9->{'vars'};
#line 269
type_checker_priv::join_vars($memory_9, $memory_5, $memory_1, $memory_3);
#line 270
$memory_10 = "env";
#line 270
$memory_10 = c_rt_lib::get_ref_hash($memory_1, $memory_10);
#line 270
$memory_11 = "breaks";
#line 270
$memory_11 = c_rt_lib::get_ref_hash($memory_10, $memory_11);
#line 270
$memory_12 = $memory_9;
#line 270
 if (c_rt_lib::get_hashcount($memory_11) > 1) {$memory_11 = {%{$memory_11}};}$memory_11->{'vars'} = $memory_12;
#line 270
$memory_13 = "breaks";
#line 270
c_rt_lib::set_ref_hash($memory_10, $memory_13, $memory_11);
#line 270
$memory_13 = "env";
#line 270
c_rt_lib::set_ref_hash($memory_1, $memory_13, $memory_10);
#line 270
undef($memory_13);
#line 270
undef($memory_10);
#line 270
undef($memory_11);
#line 270
undef($memory_12);
#line 270
undef($memory_9);
#line 271
goto label_317;
#line 271
label_317:
#line 271
undef($memory_8);
#line 272
goto label_577;
#line 272
label_320:
#line 273
$memory_8 = $memory_1->{'env'};
#line 273
$memory_8 = $memory_8->{'breaks'};
#line 273
$memory_8 = $memory_8->{'is'};
#line 273
$memory_8 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 273
$memory_8 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 273
if (c_rt_lib::check_true($memory_8)) {goto label_331;}
#line 274
$memory_9 = "command continue can be used only in cyclic block";
#line 274
type_checker_priv::add_error($memory_3, $memory_9);
#line 274
undef($memory_9);
#line 275
goto label_352;
#line 275
label_331:
#line 276
$memory_9 = $memory_1->{'env'};
#line 276
$memory_9 = $memory_9->{'breaks'};
#line 276
$memory_9 = $memory_9->{'vars'};
#line 277
type_checker_priv::join_vars($memory_9, $memory_5, $memory_1, $memory_3);
#line 278
$memory_10 = "env";
#line 278
$memory_10 = c_rt_lib::get_ref_hash($memory_1, $memory_10);
#line 278
$memory_11 = "breaks";
#line 278
$memory_11 = c_rt_lib::get_ref_hash($memory_10, $memory_11);
#line 278
$memory_12 = $memory_9;
#line 278
 if (c_rt_lib::get_hashcount($memory_11) > 1) {$memory_11 = {%{$memory_11}};}$memory_11->{'vars'} = $memory_12;
#line 278
$memory_13 = "breaks";
#line 278
c_rt_lib::set_ref_hash($memory_10, $memory_13, $memory_11);
#line 278
$memory_13 = "env";
#line 278
c_rt_lib::set_ref_hash($memory_1, $memory_13, $memory_10);
#line 278
undef($memory_13);
#line 278
undef($memory_10);
#line 278
undef($memory_11);
#line 278
undef($memory_12);
#line 278
undef($memory_9);
#line 279
goto label_352;
#line 279
label_352:
#line 279
undef($memory_8);
#line 280
goto label_577;
#line 280
label_355:
#line 280
$memory_8 = c_rt_lib::ov_as($memory_6, 'match');
#line 281
type_checker_priv::check_match($memory_8, $memory_1, $memory_5, $memory_3);
#line 281
undef($memory_8);
#line 282
goto label_577;
#line 282
label_360:
#line 282
$memory_8 = c_rt_lib::ov_as($memory_6, 'value');
#line 283
type_checker_priv::check_val($memory_8, $memory_1, $memory_5, $memory_3);
#line 283
undef($memory_8);
#line 284
goto label_577;
#line 284
label_365:
#line 284
$memory_8 = c_rt_lib::ov_as($memory_6, 'return');
#line 285
$memory_9 = type_checker_priv::check_val($memory_8, $memory_1, $memory_5, $memory_3);
#line 286
$memory_10 = $memory_1->{'env'};
#line 286
$memory_10 = $memory_10->{'ret_type'};
#line 286
$memory_10 = c_rt_lib::ov_is($memory_10, 'tct_void');
#line 286
$memory_11 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_10));
#line 286
if (c_rt_lib::check_true($memory_11)) {goto label_376;}
#line 286
$memory_10 = $memory_9->{'type'};
#line 286
$memory_10 = c_rt_lib::ov_is($memory_10, 'tct_empty');
#line 286
$memory_10 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_10));
#line 286
label_376:
#line 286
undef($memory_11);
#line 286
$memory_10 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_10));
#line 286
if (c_rt_lib::check_true($memory_10)) {goto label_384;}
#line 287
$memory_11 = "can't return value in void function";
#line 287
type_checker_priv::add_error($memory_3, $memory_11);
#line 287
undef($memory_11);
#line 288
goto label_442;
#line 288
label_384:
#line 288
$memory_10 = $memory_1->{'env'};
#line 288
$memory_10 = $memory_10->{'ret_type'};
#line 288
$memory_10 = c_rt_lib::ov_is($memory_10, 'tct_void');
#line 288
$memory_10 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_10));
#line 288
$memory_12 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_10));
#line 288
if (c_rt_lib::check_true($memory_12)) {goto label_395;}
#line 288
$memory_10 = $memory_1->{'env'};
#line 288
$memory_10 = $memory_10->{'ret_type'};
#line 288
$memory_10 = c_rt_lib::ov_is($memory_10, 'tct_im');
#line 288
$memory_10 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_10));
#line 288
label_395:
#line 288
undef($memory_12);
#line 288
$memory_11 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_10));
#line 288
if (c_rt_lib::check_true($memory_11)) {goto label_401;}
#line 288
$memory_10 = $memory_9->{'type'};
#line 288
$memory_10 = c_rt_lib::ov_is($memory_10, 'tct_empty');
#line 288
label_401:
#line 288
undef($memory_11);
#line 288
$memory_10 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_10));
#line 288
if (c_rt_lib::check_true($memory_10)) {goto label_409;}
#line 290
$memory_11 = "must be returned value in non void function";
#line 290
type_checker_priv::add_error($memory_3, $memory_11);
#line 290
undef($memory_11);
#line 291
goto label_442;
#line 291
label_409:
#line 291
$memory_10 = $memory_1->{'env'};
#line 291
$memory_10 = $memory_10->{'ret_type'};
#line 291
$memory_10 = c_rt_lib::ov_is($memory_10, 'tct_void');
#line 291
$memory_10 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_10));
#line 291
$memory_11 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_10));
#line 291
if (c_rt_lib::check_true($memory_11)) {goto label_419;}
#line 291
$memory_10 = $memory_9->{'type'};
#line 291
$memory_10 = c_rt_lib::ov_is($memory_10, 'tct_empty');
#line 291
$memory_10 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_10));
#line 291
label_419:
#line 291
undef($memory_11);
#line 291
$memory_10 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_10));
#line 291
if (c_rt_lib::check_true($memory_10)) {goto label_442;}
#line 292
$memory_12 = $memory_1->{'env'};
#line 292
$memory_12 = $memory_12->{'ret_type'};
#line 292
$memory_11 = ptd_system::check_assignment($memory_12, $memory_9, $memory_1, $memory_3);
#line 292
undef($memory_12);
#line 293
$memory_12 = $memory_11;
#line 293
$memory_12 = c_rt_lib::ov_is($memory_12, 'err');
#line 293
$memory_12 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_12));
#line 293
if (c_rt_lib::check_true($memory_12)) {goto label_438;}
#line 294
$memory_13 = "return value has the wrong type: ";
#line 294
$memory_14 = type_checker_priv::get_print_check_info($memory_11);
#line 294
$memory_13 = $memory_13 . $memory_14;
#line 294
undef($memory_14);
#line 294
type_checker_priv::add_error($memory_3, $memory_13);
#line 294
undef($memory_13);
#line 295
goto label_438;
#line 295
label_438:
#line 295
undef($memory_12);
#line 295
undef($memory_11);
#line 296
goto label_442;
#line 296
label_442:
#line 296
undef($memory_10);
#line 297
type_checker_priv::set_end_function($memory_5);
#line 297
undef($memory_9);
#line 297
undef($memory_8);
#line 298
goto label_577;
#line 298
label_448:
#line 298
$memory_8 = c_rt_lib::ov_as($memory_6, 'block');
#line 299
$memory_10 = 0;
#line 299
$memory_11 = 1;
#line 299
$memory_12 = c_rt_lib::array_len($memory_8);
#line 299
label_453:
#line 299
$memory_13 = c_rt_lib::to_nl($memory_10 >= $memory_12);
#line 299
if (c_rt_lib::check_true($memory_13)) {goto label_474;}
#line 299
$memory_9 = $memory_8->[$memory_10];
#line 300
$memory_14 = type_checker_priv::check_cmd($memory_9, $memory_1, $memory_5, $memory_3);
#line 300
$memory_17 = c_rt_lib::init_iter($memory_14);
#line 300
label_459:
#line 300
$memory_15 = c_rt_lib::is_end_hash($memory_17);
#line 300
if (c_rt_lib::check_true($memory_15)) {goto label_467;}
#line 300
$memory_15 = c_rt_lib::get_key_iter($memory_17);
#line 300
$memory_16 = c_rt_lib::hash_get_value($memory_14, $memory_15);
#line 301
type_checker_priv::add_var_to_vars($memory_16, $memory_15, $memory_5);
#line 302
$memory_17 = c_rt_lib::next_iter($memory_17);
#line 302
goto label_459;
#line 302
label_467:
#line 302
undef($memory_14);
#line 302
undef($memory_15);
#line 302
undef($memory_16);
#line 302
undef($memory_17);
#line 303
$memory_10 = $memory_10 + $memory_11;
#line 303
goto label_453;
#line 303
label_474:
#line 303
undef($memory_9);
#line 303
undef($memory_10);
#line 303
undef($memory_11);
#line 303
undef($memory_12);
#line 303
undef($memory_13);
#line 303
undef($memory_8);
#line 304
goto label_577;
#line 304
label_482:
#line 304
$memory_8 = c_rt_lib::ov_as($memory_6, 'die');
#line 305
$memory_10 = 0;
#line 305
$memory_11 = 1;
#line 305
$memory_12 = c_rt_lib::array_len($memory_8);
#line 305
label_487:
#line 305
$memory_13 = c_rt_lib::to_nl($memory_10 >= $memory_12);
#line 305
if (c_rt_lib::check_true($memory_13)) {goto label_494;}
#line 305
$memory_9 = $memory_8->[$memory_10];
#line 306
type_checker_priv::check_val($memory_9, $memory_1, $memory_5, $memory_3);
#line 307
$memory_10 = $memory_10 + $memory_11;
#line 307
goto label_487;
#line 307
label_494:
#line 307
undef($memory_9);
#line 307
undef($memory_10);
#line 307
undef($memory_11);
#line 307
undef($memory_12);
#line 307
undef($memory_13);
#line 308
type_checker_priv::set_end_function($memory_5);
#line 308
undef($memory_8);
#line 309
goto label_577;
#line 309
label_503:
#line 309
$memory_8 = c_rt_lib::ov_as($memory_6, 'var_decl');
#line 310
$memory_9 = $memory_8->{'name'};
#line 310
$memory_10 = type_checker_priv::check_var_decl($memory_8, $memory_1, $memory_5, $memory_3);
#line 310
hash::set_value($memory_4, $memory_9, $memory_10);
#line 310
undef($memory_10);
#line 310
undef($memory_9);
#line 310
undef($memory_8);
#line 311
goto label_577;
#line 311
label_512:
#line 311
$memory_8 = c_rt_lib::ov_as($memory_6, 'try');
#line 312
$memory_10 = $memory_1->{'env'};
#line 312
$memory_10 = $memory_10->{'ret_type'};
#line 312
$memory_11 = c_rt_lib::ov_mk_none('speculation');
#line 312
$memory_9 = {type => $memory_10,src => $memory_11,};
#line 312
undef($memory_10);
#line 312
undef($memory_11);
#line 314
$memory_10 = ptd_system::is_try_ensure_type($memory_9, $memory_1, $memory_3);
#line 314
$memory_10 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_10));
#line 314
$memory_10 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_10));
#line 314
if (c_rt_lib::check_true($memory_10)) {goto label_528;}
#line 313
$memory_11 = "function in which is used 'try' must return variant: ok, err ";
#line 313
type_checker_priv::add_error($memory_3, $memory_11);
#line 313
undef($memory_11);
#line 313
goto label_528;
#line 313
label_528:
#line 313
undef($memory_10);
#line 315
$memory_10 = type_checker_priv::check_try_ensure($memory_8, $memory_1, $memory_5, $memory_3);
#line 316
$memory_13 = $memory_1->{'env'};
#line 316
$memory_13 = $memory_13->{'ret_type'};
#line 316
$memory_14 = c_rt_lib::ov_mk_none('known');
#line 316
$memory_12 = {type => $memory_13,src => $memory_14,};
#line 316
undef($memory_13);
#line 316
undef($memory_14);
#line 316
$memory_11 = ptd_system::try_get_ensure_sub_types($memory_12, $memory_1, $memory_3);
#line 316
undef($memory_12);
#line 317
$memory_13 = $memory_11->{'err'};
#line 317
$memory_14 = $memory_10->{'err_type'};
#line 317
$memory_12 = ptd_system::check_assignment($memory_13, $memory_14, $memory_1, $memory_3);
#line 317
undef($memory_14);
#line 317
undef($memory_13);
#line 318
$memory_13 = $memory_12;
#line 318
$memory_13 = c_rt_lib::ov_is($memory_13, 'err');
#line 318
$memory_13 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_13));
#line 318
if (c_rt_lib::check_true($memory_13)) {goto label_555;}
#line 319
$memory_14 = "the return value have the wrong type: ";
#line 319
$memory_15 = type_checker_priv::get_print_check_info($memory_12);
#line 319
$memory_14 = $memory_14 . $memory_15;
#line 319
undef($memory_15);
#line 319
type_checker_priv::add_error($memory_3, $memory_14);
#line 319
undef($memory_14);
#line 320
goto label_555;
#line 320
label_555:
#line 320
undef($memory_13);
#line 321
$memory_13 = $memory_10->{'vars'};
#line 321
$memory_4 = $memory_13;
#line 321
undef($memory_13);
#line 321
undef($memory_9);
#line 321
undef($memory_10);
#line 321
undef($memory_11);
#line 321
undef($memory_12);
#line 321
undef($memory_8);
#line 322
goto label_577;
#line 322
label_566:
#line 322
$memory_8 = c_rt_lib::ov_as($memory_6, 'ensure');
#line 323
$memory_9 = type_checker_priv::check_try_ensure($memory_8, $memory_1, $memory_5, $memory_3);
#line 325
$memory_10 = $memory_9->{'vars'};
#line 325
$memory_4 = $memory_10;
#line 325
undef($memory_10);
#line 325
undef($memory_9);
#line 325
undef($memory_8);
#line 326
goto label_577;
#line 326
label_575:
#line 327
goto label_577;
#line 327
label_577:
#line 327
undef($memory_6);
#line 327
undef($memory_7);
#line 328
$memory_8 = c_rt_lib::init_iter($memory_2);
#line 328
label_581:
#line 328
$memory_6 = c_rt_lib::is_end_hash($memory_8);
#line 328
if (c_rt_lib::check_true($memory_6)) {goto label_591;}
#line 328
$memory_6 = c_rt_lib::get_key_iter($memory_8);
#line 328
$memory_7 = c_rt_lib::hash_get_value($memory_2, $memory_6);
#line 329
$memory_9 = hash::get_value($memory_5, $memory_6);
#line 329
hash::set_value($memory_2, $memory_6, $memory_9);
#line 329
undef($memory_9);
#line 330
$memory_8 = c_rt_lib::next_iter($memory_8);
#line 330
goto label_581;
#line 330
label_591:
#line 330
undef($memory_6);
#line 330
undef($memory_7);
#line 330
undef($memory_8);
#line 331
$memory_7 = "__END";
#line 331
$memory_6 = hash::has_key($memory_5, $memory_7);
#line 331
undef($memory_7);
#line 331
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 331
if (c_rt_lib::check_true($memory_6)) {goto label_610;}
#line 332
$memory_7 = "__END";
#line 332
$memory_9 = c_rt_lib::ov_mk_none('yes');
#line 332
$memory_10 = tct::empty();
#line 332
$memory_8 = {overwrited => $memory_9,type => $memory_10,};
#line 332
undef($memory_9);
#line 332
undef($memory_10);
#line 332
hash::set_value($memory_2, $memory_7, $memory_8);
#line 332
undef($memory_8);
#line 332
undef($memory_7);
#line 333
goto label_610;
#line 333
label_610:
#line 333
undef($memory_6);
#line 334
undef($memory_0);
#line 334
undef($memory_5);
#line 334
$_[1] = $memory_1;$_[2] = $memory_2;$_[3] = $memory_3;return $memory_4;
#line 334
undef($memory_4);
#line 334
undef($memory_5);
#line 334
undef($memory_0);
#line 334
$_[1] = $memory_1;$_[2] = $memory_2;$_[3] = $memory_3;return;
$_[1] = $memory_1;$_[2] = $memory_2;$_[3] = $memory_3;}

sub type_checker_priv::break_continue_block($$$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;$memory_0 = $_[0];$memory_1 = $_[1];Scalar::Util::weaken($_[1]) if ref($_[1]);$memory_2 = $_[2];Scalar::Util::weaken($_[2]) if ref($_[2]);$memory_3 = $_[3];Scalar::Util::weaken($_[3]) if ref($_[3]);
#line 339
$memory_4 = $memory_1->{'env'};
#line 339
$memory_4 = $memory_4->{'breaks'};
#line 340
$memory_6 = c_rt_lib::to_nl(1);
#line 340
$memory_5 = {is => $memory_6,vars => $memory_2,};
#line 340
undef($memory_6);
#line 340
$memory_6 = "env";
#line 340
$memory_6 = c_rt_lib::get_ref_hash($memory_1, $memory_6);
#line 340
$memory_7 = $memory_5;
#line 340
 if (c_rt_lib::get_hashcount($memory_6) > 1) {$memory_6 = {%{$memory_6}};}$memory_6->{'breaks'} = $memory_7;
#line 340
$memory_8 = "env";
#line 340
c_rt_lib::set_ref_hash($memory_1, $memory_8, $memory_6);
#line 340
undef($memory_8);
#line 340
undef($memory_5);
#line 340
undef($memory_6);
#line 340
undef($memory_7);
#line 341
type_checker_priv::check_cmd($memory_0, $memory_1, $memory_2, $memory_3);
#line 342
$memory_5 = $memory_1->{'env'};
#line 342
$memory_5 = $memory_5->{'breaks'};
#line 342
$memory_5 = $memory_5->{'vars'};
#line 342
type_checker_priv::join_vars($memory_2, $memory_5, $memory_1, $memory_3);
#line 342
undef($memory_5);
#line 343
$memory_5 = "env";
#line 343
$memory_5 = c_rt_lib::get_ref_hash($memory_1, $memory_5);
#line 343
$memory_6 = $memory_4;
#line 343
 if (c_rt_lib::get_hashcount($memory_5) > 1) {$memory_5 = {%{$memory_5}};}$memory_5->{'breaks'} = $memory_6;
#line 343
$memory_7 = "env";
#line 343
c_rt_lib::set_ref_hash($memory_1, $memory_7, $memory_5);
#line 343
undef($memory_7);
#line 343
undef($memory_5);
#line 343
undef($memory_6);
#line 343
undef($memory_4);
#line 343
undef($memory_0);
#line 343
$_[1] = $memory_1;$_[2] = $memory_2;$_[3] = $memory_3;return;
$_[1] = $memory_1;$_[2] = $memory_2;$_[3] = $memory_3;}

sub type_checker_priv::check_try_ensure($$$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;my $memory_13;my $memory_14;my $memory_15;my $memory_16;$memory_0 = $_[0];$memory_1 = $_[1];Scalar::Util::weaken($_[1]) if ref($_[1]);$memory_2 = $_[2];Scalar::Util::weaken($_[2]) if ref($_[2]);$memory_3 = $_[3];Scalar::Util::weaken($_[3]) if ref($_[3]);
#line 348
$memory_4 = {};
#line 349
$memory_6 = tct::empty();
#line 349
$memory_7 = c_rt_lib::ov_mk_none('speculation');
#line 349
$memory_5 = {type => $memory_6,src => $memory_7,};
#line 349
undef($memory_6);
#line 349
undef($memory_7);
#line 350
$memory_6 = tct::tct_im();
#line 351
$memory_7 = c_rt_lib::ov_is($memory_0, 'decl');
#line 351
if (c_rt_lib::check_true($memory_7)) {goto label_16;}
#line 356
$memory_7 = c_rt_lib::ov_is($memory_0, 'lval');
#line 356
if (c_rt_lib::check_true($memory_7)) {goto label_36;}
#line 368
$memory_7 = c_rt_lib::ov_is($memory_0, 'expr');
#line 368
if (c_rt_lib::check_true($memory_7)) {goto label_85;}
#line 368
$memory_7 = "NOMATCHALERT";
#line 368
$memory_7 = [$memory_7,$memory_0];
#line 368
die(dfile::ssave($memory_7));
#line 351
label_16:
#line 351
$memory_8 = c_rt_lib::ov_as($memory_0, 'decl');
#line 352
$memory_10 = c_rt_lib::to_nl(1);
#line 352
$memory_9 = type_checker_priv::check_var_decl_try($memory_8, $memory_10, $memory_1, $memory_2, $memory_3);
#line 352
undef($memory_10);
#line 353
$memory_10 = $memory_8->{'name'};
#line 353
$memory_11 = $memory_9->{'ok'};
#line 353
hash::set_value($memory_4, $memory_10, $memory_11);
#line 353
undef($memory_11);
#line 353
undef($memory_10);
#line 354
$memory_10 = $memory_9->{'err'};
#line 354
$memory_5 = $memory_10;
#line 354
undef($memory_10);
#line 355
$memory_10 = $memory_9->{'ok'};
#line 355
$memory_10 = $memory_10->{'type'};
#line 355
$memory_6 = $memory_10;
#line 355
undef($memory_10);
#line 355
undef($memory_9);
#line 355
undef($memory_8);
#line 356
goto label_103;
#line 356
label_36:
#line 356
$memory_8 = c_rt_lib::ov_as($memory_0, 'lval');
#line 357
$memory_10 = $memory_8->{'right'};
#line 357
$memory_9 = type_checker_priv::check_val($memory_10, $memory_1, $memory_2, $memory_3);
#line 357
undef($memory_10);
#line 358
$memory_11 = $memory_3->{'errors'};
#line 358
$memory_10 = array::len($memory_11);
#line 358
undef($memory_11);
#line 359
$memory_12 = $memory_8->{'left'};
#line 359
$memory_11 = type_checker_priv::get_type_left_side_equation($memory_12, $memory_1, $memory_2, $memory_3);
#line 359
undef($memory_12);
#line 360
$memory_13 = $memory_3->{'errors'};
#line 360
$memory_12 = array::len($memory_13);
#line 360
undef($memory_13);
#line 360
$memory_12 = $memory_12 - $memory_10;
#line 360
$memory_10 = $memory_12;
#line 360
undef($memory_12);
#line 361
$memory_12 = 0;
#line 361
$memory_12 = c_rt_lib::to_nl($memory_10 == $memory_12);
#line 361
$memory_12 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_12));
#line 361
if (c_rt_lib::check_true($memory_12)) {goto label_78;}
#line 362
$memory_13 = ptd_system::try_get_ensure_sub_types($memory_9, $memory_1, $memory_3);
#line 363
$memory_14 = $memory_13->{'ok'};
#line 363
$memory_15 = $memory_14;
#line 363
 if (c_rt_lib::get_hashcount($memory_9) > 1) {$memory_9 = {%{$memory_9}};}$memory_9->{'type'} = $memory_15;
#line 363
undef($memory_14);
#line 363
undef($memory_15);
#line 364
$memory_14 = $memory_8->{'left'};
#line 364
type_checker_priv::set_type_to_lval($memory_14, $memory_11, $memory_9, $memory_1, $memory_2, $memory_3);
#line 364
undef($memory_14);
#line 365
$memory_15 = $memory_13->{'err'};
#line 365
$memory_16 = $memory_9->{'src'};
#line 365
$memory_14 = {type => $memory_15,src => $memory_16,};
#line 365
undef($memory_15);
#line 365
undef($memory_16);
#line 365
$memory_5 = $memory_14;
#line 365
undef($memory_14);
#line 366
$memory_14 = $memory_13->{'ok'};
#line 366
$memory_6 = $memory_14;
#line 366
undef($memory_14);
#line 366
undef($memory_13);
#line 367
goto label_78;
#line 367
label_78:
#line 367
undef($memory_12);
#line 367
undef($memory_9);
#line 367
undef($memory_10);
#line 367
undef($memory_11);
#line 367
undef($memory_8);
#line 368
goto label_103;
#line 368
label_85:
#line 368
$memory_8 = c_rt_lib::ov_as($memory_0, 'expr');
#line 369
$memory_9 = type_checker_priv::check_val($memory_8, $memory_1, $memory_2, $memory_3);
#line 370
$memory_10 = ptd_system::try_get_ensure_sub_types($memory_9, $memory_1, $memory_3);
#line 371
$memory_12 = $memory_10->{'err'};
#line 371
$memory_13 = $memory_9->{'src'};
#line 371
$memory_11 = {type => $memory_12,src => $memory_13,};
#line 371
undef($memory_12);
#line 371
undef($memory_13);
#line 371
$memory_5 = $memory_11;
#line 371
undef($memory_11);
#line 372
$memory_11 = $memory_10->{'ok'};
#line 372
$memory_6 = $memory_11;
#line 372
undef($memory_11);
#line 372
undef($memory_9);
#line 372
undef($memory_10);
#line 372
undef($memory_8);
#line 373
goto label_103;
#line 373
label_103:
#line 373
undef($memory_7);
#line 374
$memory_7 = $memory_5->{'type'};
#line 374
$memory_7 = c_rt_lib::ov_is($memory_7, 'tct_empty');
#line 374
$memory_8 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 374
if (c_rt_lib::check_true($memory_8)) {goto label_111;}
#line 374
$memory_7 = $memory_6;
#line 374
$memory_7 = c_rt_lib::ov_is($memory_7, 'tct_empty');
#line 374
label_111:
#line 374
undef($memory_8);
#line 374
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 374
if (c_rt_lib::check_true($memory_7)) {goto label_119;}
#line 374
$memory_8 = "empty, no value used as variant in try/ensure";
#line 374
type_checker_priv::add_error($memory_3, $memory_8);
#line 374
undef($memory_8);
#line 374
goto label_119;
#line 374
label_119:
#line 374
undef($memory_7);
#line 375
$memory_7 = {vars => $memory_4,err_type => $memory_5,};
#line 375
undef($memory_0);
#line 375
undef($memory_4);
#line 375
undef($memory_5);
#line 375
undef($memory_6);
#line 375
$_[1] = $memory_1;$_[2] = $memory_2;$_[3] = $memory_3;return $memory_7;
#line 375
undef($memory_7);
#line 375
undef($memory_4);
#line 375
undef($memory_5);
#line 375
undef($memory_6);
#line 375
undef($memory_0);
#line 375
$_[1] = $memory_1;$_[2] = $memory_2;$_[3] = $memory_3;return;
$_[1] = $memory_1;$_[2] = $memory_2;$_[3] = $memory_3;}

sub type_checker_priv::check_forh($$$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;$memory_0 = $_[0];$memory_1 = $_[1];Scalar::Util::weaken($_[1]) if ref($_[1]);$memory_2 = $_[2];Scalar::Util::weaken($_[2]) if ref($_[2]);$memory_3 = $_[3];Scalar::Util::weaken($_[3]) if ref($_[3]);
#line 380
$memory_6 = $memory_0->{'hash'};
#line 380
$memory_5 = type_checker_priv::check_val($memory_6, $memory_1, $memory_2, $memory_3);
#line 380
undef($memory_6);
#line 380
$memory_4 = ptd_system::can_delete($memory_5, $memory_1, $memory_3);
#line 380
undef($memory_5);
#line 382
$memory_7 = tct::tct_im();
#line 382
$memory_6 = tct::hash($memory_7);
#line 382
undef($memory_7);
#line 382
$memory_5 = ptd_system::is_accepted($memory_4, $memory_6, $memory_1, $memory_3);
#line 382
undef($memory_6);
#line 382
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 382
if (c_rt_lib::check_true($memory_5)) {goto label_13;}
#line 383
goto label_41;
#line 383
label_13:
#line 383
$memory_7 = {};
#line 383
$memory_6 = tct::rec($memory_7);
#line 383
undef($memory_7);
#line 383
$memory_5 = ptd_system::is_accepted($memory_4, $memory_6, $memory_1, $memory_3);
#line 383
undef($memory_6);
#line 383
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 383
if (c_rt_lib::check_true($memory_5)) {goto label_31;}
#line 384
$memory_6 = type_checker_priv::is_known($memory_4);
#line 384
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 384
if (c_rt_lib::check_true($memory_6)) {goto label_28;}
#line 384
$memory_7 = "forh argument should be a hash not rec";
#line 384
type_checker_priv::add_error($memory_3, $memory_7);
#line 384
undef($memory_7);
#line 384
goto label_28;
#line 384
label_28:
#line 384
undef($memory_6);
#line 385
goto label_41;
#line 385
label_31:
#line 386
$memory_6 = "forh argument should be a hash type instead of ";
#line 387
$memory_8 = $memory_4->{'type'};
#line 387
$memory_7 = type_checker_priv::get_print_tct_type_name($memory_8);
#line 387
undef($memory_8);
#line 387
$memory_6 = $memory_6 . $memory_7;
#line 387
undef($memory_7);
#line 387
type_checker_priv::add_error($memory_3, $memory_6);
#line 387
undef($memory_6);
#line 388
goto label_41;
#line 388
label_41:
#line 388
undef($memory_5);
#line 389
$memory_5 = $memory_4->{'type'};
#line 389
$memory_5 = c_rt_lib::ov_is($memory_5, 'tct_hash');
#line 389
if (c_rt_lib::check_true($memory_5)) {goto label_48;}
#line 389
$memory_5 = tct::tct_im();
#line 389
goto label_51;
#line 389
label_48:
#line 389
$memory_5 = $memory_4->{'type'};
#line 389
$memory_5 = c_rt_lib::ov_as($memory_5, 'tct_hash');
#line 389
label_51:
#line 389
$memory_6 = $memory_5;
#line 389
 if (c_rt_lib::get_hashcount($memory_4) > 1) {$memory_4 = {%{$memory_4}};}$memory_4->{'type'} = $memory_6;
#line 389
undef($memory_5);
#line 389
undef($memory_6);
#line 390
$memory_5 = $memory_2;
#line 391
$memory_6 = $memory_0->{'key'};
#line 391
$memory_8 = tct::sim();
#line 391
$memory_9 = c_rt_lib::ov_mk_none('speculation');
#line 391
$memory_7 = {type => $memory_8,src => $memory_9,};
#line 391
undef($memory_8);
#line 391
undef($memory_9);
#line 391
type_checker_priv::add_var_decl_with_type_and_check($memory_6, $memory_7, $memory_5, $memory_3);
#line 391
undef($memory_7);
#line 391
undef($memory_6);
#line 392
$memory_6 = $memory_0->{'val'};
#line 392
type_checker_priv::add_var_decl_with_type_and_check($memory_6, $memory_4, $memory_5, $memory_3);
#line 392
undef($memory_6);
#line 393
$memory_6 = $memory_0->{'cmd'};
#line 393
type_checker_priv::break_continue_block($memory_6, $memory_1, $memory_5, $memory_3);
#line 393
undef($memory_6);
#line 394
type_checker_priv::join_vars($memory_2, $memory_5, $memory_1, $memory_3);
#line 394
undef($memory_4);
#line 394
undef($memory_5);
#line 394
undef($memory_0);
#line 394
$_[1] = $memory_1;$_[2] = $memory_2;$_[3] = $memory_3;return;
$_[1] = $memory_1;$_[2] = $memory_2;$_[3] = $memory_3;}

sub type_checker_priv::check_fora($$$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;$memory_0 = $_[0];$memory_1 = $_[1];Scalar::Util::weaken($_[1]) if ref($_[1]);$memory_2 = $_[2];Scalar::Util::weaken($_[2]) if ref($_[2]);$memory_3 = $_[3];Scalar::Util::weaken($_[3]) if ref($_[3]);
#line 399
$memory_6 = $memory_0->{'array'};
#line 399
$memory_5 = type_checker_priv::check_val($memory_6, $memory_1, $memory_2, $memory_3);
#line 399
undef($memory_6);
#line 399
$memory_4 = ptd_system::can_delete($memory_5, $memory_1, $memory_3);
#line 399
undef($memory_5);
#line 402
$memory_7 = tct::tct_im();
#line 402
$memory_6 = tct::arr($memory_7);
#line 402
undef($memory_7);
#line 402
$memory_5 = ptd_system::is_accepted($memory_4, $memory_6, $memory_1, $memory_3);
#line 402
undef($memory_6);
#line 402
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 402
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 402
if (c_rt_lib::check_true($memory_5)) {goto label_22;}
#line 401
$memory_6 = "fora argument should be an array instead of ";
#line 401
$memory_8 = $memory_4->{'type'};
#line 401
$memory_7 = type_checker_priv::get_print_tct_type_name($memory_8);
#line 401
undef($memory_8);
#line 401
$memory_6 = $memory_6 . $memory_7;
#line 401
undef($memory_7);
#line 401
type_checker_priv::add_error($memory_3, $memory_6);
#line 401
undef($memory_6);
#line 401
goto label_22;
#line 401
label_22:
#line 401
undef($memory_5);
#line 403
$memory_5 = $memory_4->{'type'};
#line 403
$memory_5 = c_rt_lib::ov_is($memory_5, 'tct_arr');
#line 403
if (c_rt_lib::check_true($memory_5)) {goto label_29;}
#line 403
$memory_5 = tct::tct_im();
#line 403
goto label_32;
#line 403
label_29:
#line 403
$memory_5 = $memory_4->{'type'};
#line 403
$memory_5 = c_rt_lib::ov_as($memory_5, 'tct_arr');
#line 403
label_32:
#line 403
$memory_6 = $memory_5;
#line 403
 if (c_rt_lib::get_hashcount($memory_4) > 1) {$memory_4 = {%{$memory_4}};}$memory_4->{'type'} = $memory_6;
#line 403
undef($memory_5);
#line 403
undef($memory_6);
#line 404
$memory_5 = $memory_2;
#line 405
$memory_6 = $memory_0->{'iter'};
#line 405
type_checker_priv::add_var_decl_with_type_and_check($memory_6, $memory_4, $memory_5, $memory_3);
#line 405
undef($memory_6);
#line 406
$memory_6 = $memory_0->{'cmd'};
#line 406
type_checker_priv::break_continue_block($memory_6, $memory_1, $memory_5, $memory_3);
#line 406
undef($memory_6);
#line 407
type_checker_priv::join_vars($memory_2, $memory_5, $memory_1, $memory_3);
#line 407
undef($memory_4);
#line 407
undef($memory_5);
#line 407
undef($memory_0);
#line 407
$_[1] = $memory_1;$_[2] = $memory_2;$_[3] = $memory_3;return;
$_[1] = $memory_1;$_[2] = $memory_2;$_[3] = $memory_3;}

sub type_checker_priv::check_while($$$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;$memory_0 = $_[0];$memory_1 = $_[1];Scalar::Util::weaken($_[1]) if ref($_[1]);$memory_2 = $_[2];Scalar::Util::weaken($_[2]) if ref($_[2]);$memory_3 = $_[3];Scalar::Util::weaken($_[3]) if ref($_[3]);
#line 412
$memory_5 = $memory_0->{'cond'};
#line 412
$memory_4 = type_checker_priv::check_val($memory_5, $memory_1, $memory_2, $memory_3);
#line 412
undef($memory_5);
#line 415
$memory_5 = ptd_system::is_condition_type($memory_4, $memory_1, $memory_3);
#line 415
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 415
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 415
if (c_rt_lib::check_true($memory_5)) {goto label_16;}
#line 413
$memory_6 = "while argument should be sim or boolean type insteand of ";
#line 414
$memory_8 = $memory_4->{'type'};
#line 414
$memory_7 = type_checker_priv::get_print_tct_type_name($memory_8);
#line 414
undef($memory_8);
#line 414
$memory_6 = $memory_6 . $memory_7;
#line 414
undef($memory_7);
#line 414
type_checker_priv::add_error($memory_3, $memory_6);
#line 414
undef($memory_6);
#line 414
goto label_16;
#line 414
label_16:
#line 414
undef($memory_5);
#line 416
$memory_5 = $memory_2;
#line 417
$memory_6 = $memory_0->{'cmd'};
#line 417
type_checker_priv::break_continue_block($memory_6, $memory_1, $memory_5, $memory_3);
#line 417
undef($memory_6);
#line 418
type_checker_priv::join_vars($memory_2, $memory_5, $memory_1, $memory_3);
#line 418
undef($memory_4);
#line 418
undef($memory_5);
#line 418
undef($memory_0);
#line 418
$_[1] = $memory_1;$_[2] = $memory_2;$_[3] = $memory_3;return;
$_[1] = $memory_1;$_[2] = $memory_2;$_[3] = $memory_3;}

sub type_checker_priv::check_rep($$$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;$memory_0 = $_[0];$memory_1 = $_[1];Scalar::Util::weaken($_[1]) if ref($_[1]);$memory_2 = $_[2];Scalar::Util::weaken($_[2]) if ref($_[2]);$memory_3 = $_[3];Scalar::Util::weaken($_[3]) if ref($_[3]);
#line 423
$memory_5 = $memory_0->{'count'};
#line 423
$memory_4 = type_checker_priv::check_val($memory_5, $memory_1, $memory_2, $memory_3);
#line 423
undef($memory_5);
#line 425
$memory_6 = tct::sim();
#line 425
$memory_5 = ptd_system::is_accepted($memory_4, $memory_6, $memory_1, $memory_3);
#line 425
undef($memory_6);
#line 425
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 425
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 425
if (c_rt_lib::check_true($memory_5)) {goto label_18;}
#line 424
$memory_6 = "rep argument should be a number instead of ";
#line 424
$memory_8 = $memory_4->{'type'};
#line 424
$memory_7 = type_checker_priv::get_print_tct_type_name($memory_8);
#line 424
undef($memory_8);
#line 424
$memory_6 = $memory_6 . $memory_7;
#line 424
undef($memory_7);
#line 424
type_checker_priv::add_error($memory_3, $memory_6);
#line 424
undef($memory_6);
#line 424
goto label_18;
#line 424
label_18:
#line 424
undef($memory_5);
#line 426
$memory_5 = $memory_2;
#line 427
$memory_6 = $memory_0->{'iter'};
#line 427
$memory_8 = tct::sim();
#line 427
$memory_9 = c_rt_lib::ov_mk_none('speculation');
#line 427
$memory_7 = {type => $memory_8,src => $memory_9,};
#line 427
undef($memory_8);
#line 427
undef($memory_9);
#line 427
type_checker_priv::add_var_decl_with_type_and_check($memory_6, $memory_7, $memory_5, $memory_3);
#line 427
undef($memory_7);
#line 427
undef($memory_6);
#line 428
$memory_6 = $memory_0->{'cmd'};
#line 428
type_checker_priv::break_continue_block($memory_6, $memory_1, $memory_5, $memory_3);
#line 428
undef($memory_6);
#line 429
type_checker_priv::join_vars($memory_2, $memory_5, $memory_1, $memory_3);
#line 429
undef($memory_4);
#line 429
undef($memory_5);
#line 429
undef($memory_0);
#line 429
$_[1] = $memory_1;$_[2] = $memory_2;$_[3] = $memory_3;return;
$_[1] = $memory_1;$_[2] = $memory_2;$_[3] = $memory_3;}

sub type_checker_priv::check_match($$$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;my $memory_13;my $memory_14;my $memory_15;my $memory_16;my $memory_17;my $memory_18;my $memory_19;my $memory_20;my $memory_21;my $memory_22;my $memory_23;my $memory_24;my $memory_25;my $memory_26;$memory_0 = $_[0];$memory_1 = $_[1];Scalar::Util::weaken($_[1]) if ref($_[1]);$memory_2 = $_[2];Scalar::Util::weaken($_[2]) if ref($_[2]);$memory_3 = $_[3];Scalar::Util::weaken($_[3]) if ref($_[3]);
#line 434
$memory_6 = $memory_0->{'val'};
#line 434
$memory_5 = type_checker_priv::check_val($memory_6, $memory_1, $memory_2, $memory_3);
#line 434
undef($memory_6);
#line 434
$memory_4 = ptd_system::can_delete($memory_5, $memory_1, $memory_3);
#line 434
undef($memory_5);
#line 436
$memory_5 = $memory_0->{'branch_list'};
#line 437
$memory_6 = c_rt_lib::to_nl(0);
#line 438
$memory_7 = {};
#line 439
$memory_8 = {};
#line 440
$memory_11 = {};
#line 440
$memory_10 = tct::var($memory_11);
#line 440
undef($memory_11);
#line 440
$memory_9 = ptd_system::is_accepted($memory_4, $memory_10, $memory_1, $memory_3);
#line 440
undef($memory_10);
#line 440
$memory_9 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_9));
#line 440
$memory_9 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_9));
#line 440
if (c_rt_lib::check_true($memory_9)) {goto label_26;}
#line 441
$memory_10 = "wrong type used as match argument: ";
#line 441
$memory_12 = $memory_4->{'type'};
#line 441
$memory_11 = type_checker_priv::get_print_tct_type_name($memory_12);
#line 441
undef($memory_12);
#line 441
$memory_10 = $memory_10 . $memory_11;
#line 441
undef($memory_11);
#line 441
type_checker_priv::add_error($memory_3, $memory_10);
#line 441
undef($memory_10);
#line 442
goto label_26;
#line 442
label_26:
#line 442
undef($memory_9);
#line 443
$memory_9 = $memory_4->{'type'};
#line 443
$memory_9 = c_rt_lib::ov_is($memory_9, 'tct_var');
#line 443
$memory_9 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_9));
#line 443
if (c_rt_lib::check_true($memory_9)) {goto label_128;}
#line 444
$memory_10 = $memory_4->{'type'};
#line 444
$memory_10 = c_rt_lib::ov_as($memory_10, 'tct_var');
#line 444
$memory_8 = $memory_10;
#line 444
undef($memory_10);
#line 445
$memory_10 = {};
#line 446
$memory_12 = 0;
#line 446
$memory_13 = 1;
#line 446
$memory_14 = c_rt_lib::array_len($memory_5);
#line 446
label_40:
#line 446
$memory_15 = c_rt_lib::to_nl($memory_12 >= $memory_14);
#line 446
if (c_rt_lib::check_true($memory_15)) {goto label_94;}
#line 446
$memory_11 = $memory_5->[$memory_12];
#line 447
$memory_16 = $memory_11->{'variant'};
#line 447
$memory_16 = $memory_16->{'name'};
#line 448
$memory_17 = hash::has_key($memory_8, $memory_16);
#line 448
$memory_17 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_17));
#line 448
$memory_17 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_17));
#line 448
if (c_rt_lib::check_true($memory_17)) {goto label_67;}
#line 450
$memory_18 = type_checker_priv::is_known($memory_4);
#line 450
$memory_18 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_18));
#line 450
if (c_rt_lib::check_true($memory_18)) {goto label_61;}
#line 449
$memory_19 = "variant definition `:";
#line 449
$memory_19 = $memory_19 . $memory_16;
#line 449
$memory_20 = "' does not exist";
#line 449
$memory_19 = $memory_19 . $memory_20;
#line 449
undef($memory_20);
#line 449
type_checker_priv::add_error($memory_3, $memory_19);
#line 449
undef($memory_19);
#line 449
goto label_61;
#line 449
label_61:
#line 449
undef($memory_18);
#line 451
undef($memory_16);
#line 451
undef($memory_17);
#line 451
goto label_91;
#line 452
goto label_67;
#line 452
label_67:
#line 452
undef($memory_17);
#line 453
$memory_17 = c_rt_lib::to_nl(1);
#line 453
hash::set_value($memory_10, $memory_16, $memory_17);
#line 453
undef($memory_17);
#line 454
$memory_17 = hash::get_value($memory_8, $memory_16);
#line 454
$memory_18 = c_rt_lib::ov_is($memory_17, 'with_param');
#line 454
if (c_rt_lib::check_true($memory_18)) {goto label_80;}
#line 456
$memory_18 = c_rt_lib::ov_is($memory_17, 'no_param');
#line 456
if (c_rt_lib::check_true($memory_18)) {goto label_85;}
#line 456
$memory_18 = "NOMATCHALERT";
#line 456
$memory_18 = [$memory_18,$memory_17];
#line 456
die(dfile::ssave($memory_18));
#line 454
label_80:
#line 454
$memory_19 = c_rt_lib::ov_as($memory_17, 'with_param');
#line 455
hash::set_value($memory_7, $memory_16, $memory_19);
#line 455
undef($memory_19);
#line 456
goto label_87;
#line 456
label_85:
#line 457
goto label_87;
#line 457
label_87:
#line 457
undef($memory_17);
#line 457
undef($memory_18);
#line 457
undef($memory_16);
#line 457
label_91:
#line 458
$memory_12 = $memory_12 + $memory_13;
#line 458
goto label_40;
#line 458
label_94:
#line 458
undef($memory_11);
#line 458
undef($memory_12);
#line 458
undef($memory_13);
#line 458
undef($memory_14);
#line 458
undef($memory_15);
#line 459
$memory_13 = c_rt_lib::init_iter($memory_8);
#line 459
label_101:
#line 459
$memory_11 = c_rt_lib::is_end_hash($memory_13);
#line 459
if (c_rt_lib::check_true($memory_11)) {goto label_119;}
#line 459
$memory_11 = c_rt_lib::get_key_iter($memory_13);
#line 459
$memory_12 = c_rt_lib::hash_get_value($memory_8, $memory_11);
#line 460
$memory_14 = hash::has_key($memory_10, $memory_11);
#line 460
$memory_14 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_14));
#line 460
$memory_14 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_14));
#line 460
if (c_rt_lib::check_true($memory_14)) {goto label_115;}
#line 461
$memory_15 = "unchecked match variants: ";
#line 461
$memory_15 = $memory_15 . $memory_11;
#line 461
type_checker_priv::add_error($memory_3, $memory_15);
#line 461
undef($memory_15);
#line 462
goto label_115;
#line 462
label_115:
#line 462
undef($memory_14);
#line 463
$memory_13 = c_rt_lib::next_iter($memory_13);
#line 463
goto label_101;
#line 463
label_119:
#line 463
undef($memory_11);
#line 463
undef($memory_12);
#line 463
undef($memory_13);
#line 464
$memory_11 = c_rt_lib::to_nl(1);
#line 464
$memory_6 = $memory_11;
#line 464
undef($memory_11);
#line 464
undef($memory_10);
#line 465
goto label_128;
#line 465
label_128:
#line 465
undef($memory_9);
#line 466
$memory_9 = $memory_2;
#line 467
$memory_10 = c_rt_lib::to_nl(1);
#line 468
$memory_11 = {};
#line 469
$memory_13 = 0;
#line 469
$memory_14 = 1;
#line 469
$memory_15 = c_rt_lib::array_len($memory_5);
#line 469
label_136:
#line 469
$memory_16 = c_rt_lib::to_nl($memory_13 >= $memory_15);
#line 469
if (c_rt_lib::check_true($memory_16)) {goto label_296;}
#line 469
$memory_12 = $memory_5->[$memory_13];
#line 470
$memory_17 = $memory_2;
#line 471
$memory_18 = $memory_12->{'variant'};
#line 471
$memory_18 = $memory_18->{'name'};
#line 473
$memory_19 = hash::has_key($memory_11, $memory_18);
#line 473
$memory_19 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_19));
#line 473
if (c_rt_lib::check_true($memory_19)) {goto label_151;}
#line 472
$memory_20 = "repeated the case name in match: ";
#line 472
$memory_20 = $memory_20 . $memory_18;
#line 472
type_checker_priv::add_error($memory_3, $memory_20);
#line 472
undef($memory_20);
#line 472
goto label_151;
#line 472
label_151:
#line 472
undef($memory_19);
#line 474
$memory_19 = 1;
#line 474
hash::set_value($memory_11, $memory_18, $memory_19);
#line 474
undef($memory_19);
#line 475
$memory_19 = $memory_12->{'variant'};
#line 475
$memory_19 = $memory_19->{'value'};
#line 475
$memory_20 = c_rt_lib::ov_is($memory_19, 'value');
#line 475
if (c_rt_lib::check_true($memory_20)) {goto label_165;}
#line 489
$memory_20 = c_rt_lib::ov_is($memory_19, 'none');
#line 489
if (c_rt_lib::check_true($memory_20)) {goto label_227;}
#line 489
$memory_20 = "NOMATCHALERT";
#line 489
$memory_20 = [$memory_20,$memory_19];
#line 489
die(dfile::ssave($memory_20));
#line 475
label_165:
#line 475
$memory_21 = c_rt_lib::ov_as($memory_19, 'value');
#line 476
type_checker_priv::check_var_decl($memory_21, $memory_1, $memory_17, $memory_3);
#line 478
$memory_23 = $memory_6;
#line 478
$memory_23 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_23));
#line 478
if (c_rt_lib::check_true($memory_23)) {goto label_214;}
#line 479
$memory_24 = hash::has_key($memory_8, $memory_18);
#line 479
$memory_24 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_24));
#line 479
$memory_24 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_24));
#line 479
if (c_rt_lib::check_true($memory_24)) {goto label_185;}
#line 479
undef($memory_17);
#line 479
undef($memory_18);
#line 479
undef($memory_19);
#line 479
undef($memory_20);
#line 479
undef($memory_21);
#line 479
undef($memory_22);
#line 479
undef($memory_23);
#line 479
undef($memory_24);
#line 479
goto label_293;
#line 479
goto label_185;
#line 479
label_185:
#line 479
undef($memory_24);
#line 480
$memory_24 = hash::has_key($memory_7, $memory_18);
#line 480
$memory_24 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_24));
#line 480
$memory_24 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_24));
#line 480
if (c_rt_lib::check_true($memory_24)) {goto label_208;}
#line 481
$memory_25 = "variant `:";
#line 481
$memory_25 = $memory_25 . $memory_18;
#line 481
$memory_26 = "' should has no param";
#line 481
$memory_25 = $memory_25 . $memory_26;
#line 481
undef($memory_26);
#line 481
type_checker_priv::add_error($memory_3, $memory_25);
#line 481
undef($memory_25);
#line 482
undef($memory_17);
#line 482
undef($memory_18);
#line 482
undef($memory_19);
#line 482
undef($memory_20);
#line 482
undef($memory_21);
#line 482
undef($memory_22);
#line 482
undef($memory_23);
#line 482
undef($memory_24);
#line 482
goto label_293;
#line 483
goto label_208;
#line 483
label_208:
#line 483
undef($memory_24);
#line 484
$memory_24 = hash::get_value($memory_7, $memory_18);
#line 484
$memory_22 = $memory_24;
#line 484
undef($memory_24);
#line 485
goto label_219;
#line 485
label_214:
#line 486
$memory_24 = tct::tct_im();
#line 486
$memory_22 = $memory_24;
#line 486
undef($memory_24);
#line 487
goto label_219;
#line 487
label_219:
#line 487
undef($memory_23);
#line 488
$memory_23 = $memory_21->{'name'};
#line 488
type_checker_priv::add_var_decl_to_vars($memory_22, $memory_23, $memory_17);
#line 488
undef($memory_23);
#line 488
undef($memory_22);
#line 488
undef($memory_21);
#line 489
goto label_242;
#line 489
label_227:
#line 490
$memory_21 = hash::has_key($memory_7, $memory_18);
#line 490
$memory_21 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_21));
#line 490
if (c_rt_lib::check_true($memory_21)) {goto label_239;}
#line 491
$memory_22 = "variant `:";
#line 491
$memory_22 = $memory_22 . $memory_18;
#line 491
$memory_23 = " should has param";
#line 491
$memory_22 = $memory_22 . $memory_23;
#line 491
undef($memory_23);
#line 491
type_checker_priv::add_error($memory_3, $memory_22);
#line 491
undef($memory_22);
#line 492
goto label_239;
#line 492
label_239:
#line 492
undef($memory_21);
#line 493
goto label_242;
#line 493
label_242:
#line 493
undef($memory_19);
#line 493
undef($memory_20);
#line 494
$memory_19 = $memory_12->{'cmd'};
#line 494
type_checker_priv::check_cmd($memory_19, $memory_1, $memory_17, $memory_3);
#line 494
undef($memory_19);
#line 495
$memory_19 = $memory_12->{'variant'};
#line 495
$memory_19 = $memory_19->{'value'};
#line 495
$memory_20 = c_rt_lib::ov_is($memory_19, 'value');
#line 495
if (c_rt_lib::check_true($memory_20)) {goto label_257;}
#line 497
$memory_20 = c_rt_lib::ov_is($memory_19, 'none');
#line 497
if (c_rt_lib::check_true($memory_20)) {goto label_273;}
#line 497
$memory_20 = "NOMATCHALERT";
#line 497
$memory_20 = [$memory_20,$memory_19];
#line 497
die(dfile::ssave($memory_20));
#line 495
label_257:
#line 495
$memory_21 = c_rt_lib::ov_as($memory_19, 'value');
#line 496
$memory_23 = $memory_21->{'name'};
#line 496
$memory_22 = hash::has_key($memory_9, $memory_23);
#line 496
undef($memory_23);
#line 496
$memory_22 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_22));
#line 496
$memory_22 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_22));
#line 496
if (c_rt_lib::check_true($memory_22)) {goto label_269;}
#line 496
$memory_23 = $memory_21->{'name'};
#line 496
hash::delete($memory_17, $memory_23);
#line 496
undef($memory_23);
#line 496
goto label_269;
#line 496
label_269:
#line 496
undef($memory_22);
#line 496
undef($memory_21);
#line 497
goto label_275;
#line 497
label_273:
#line 498
goto label_275;
#line 498
label_275:
#line 498
undef($memory_19);
#line 498
undef($memory_20);
#line 499
$memory_19 = $memory_10;
#line 499
$memory_19 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_19));
#line 499
if (c_rt_lib::check_true($memory_19)) {goto label_283;}
#line 500
$memory_9 = $memory_17;
#line 501
goto label_286;
#line 501
label_283:
#line 502
type_checker_priv::join_vars($memory_9, $memory_17, $memory_1, $memory_3);
#line 503
goto label_286;
#line 503
label_286:
#line 503
undef($memory_19);
#line 504
$memory_19 = c_rt_lib::to_nl(0);
#line 504
$memory_10 = $memory_19;
#line 504
undef($memory_19);
#line 504
undef($memory_17);
#line 504
undef($memory_18);
#line 504
label_293:
#line 505
$memory_13 = $memory_13 + $memory_14;
#line 505
goto label_136;
#line 505
label_296:
#line 505
undef($memory_12);
#line 505
undef($memory_13);
#line 505
undef($memory_14);
#line 505
undef($memory_15);
#line 505
undef($memory_16);
#line 506
$memory_2 = $memory_9;
#line 506
undef($memory_4);
#line 506
undef($memory_5);
#line 506
undef($memory_6);
#line 506
undef($memory_7);
#line 506
undef($memory_8);
#line 506
undef($memory_9);
#line 506
undef($memory_10);
#line 506
undef($memory_11);
#line 506
undef($memory_0);
#line 506
$_[1] = $memory_1;$_[2] = $memory_2;$_[3] = $memory_3;return;
$_[1] = $memory_1;$_[2] = $memory_2;$_[3] = $memory_3;}

sub type_checker_priv::check_val($$$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;my $memory_13;my $memory_14;my $memory_15;my $memory_16;my $memory_17;my $memory_18;$memory_0 = $_[0];$memory_1 = $_[1];Scalar::Util::weaken($_[1]) if ref($_[1]);$memory_2 = $_[2];Scalar::Util::weaken($_[2]) if ref($_[2]);$memory_3 = $_[3];Scalar::Util::weaken($_[3]) if ref($_[3]);
#line 511
$memory_4 = tc_types::get_default_type();
#line 512
$memory_5 = $memory_0->{'value'};
#line 512
$memory_6 = c_rt_lib::ov_is($memory_5, 'ternary_op');
#line 512
if (c_rt_lib::check_true($memory_6)) {goto label_39;}
#line 528
$memory_6 = c_rt_lib::ov_is($memory_5, 'hash_key');
#line 528
if (c_rt_lib::check_true($memory_6)) {goto label_101;}
#line 530
$memory_6 = c_rt_lib::ov_is($memory_5, 'nop');
#line 530
if (c_rt_lib::check_true($memory_6)) {goto label_110;}
#line 532
$memory_6 = c_rt_lib::ov_is($memory_5, 'parenthesis');
#line 532
if (c_rt_lib::check_true($memory_6)) {goto label_117;}
#line 534
$memory_6 = c_rt_lib::ov_is($memory_5, 'variant');
#line 534
if (c_rt_lib::check_true($memory_6)) {goto label_129;}
#line 548
$memory_6 = c_rt_lib::ov_is($memory_5, 'const');
#line 548
if (c_rt_lib::check_true($memory_6)) {goto label_195;}
#line 550
$memory_6 = c_rt_lib::ov_is($memory_5, 'arr_decl');
#line 550
if (c_rt_lib::check_true($memory_6)) {goto label_204;}
#line 565
$memory_6 = c_rt_lib::ov_is($memory_5, 'hash_decl');
#line 565
if (c_rt_lib::check_true($memory_6)) {goto label_279;}
#line 577
$memory_6 = c_rt_lib::ov_is($memory_5, 'var');
#line 577
if (c_rt_lib::check_true($memory_6)) {goto label_331;}
#line 588
$memory_6 = c_rt_lib::ov_is($memory_5, 'bin_op');
#line 588
if (c_rt_lib::check_true($memory_6)) {goto label_402;}
#line 590
$memory_6 = c_rt_lib::ov_is($memory_5, 'var_op');
#line 590
if (c_rt_lib::check_true($memory_6)) {goto label_414;}
#line 623
$memory_6 = c_rt_lib::ov_is($memory_5, 'unary_op');
#line 623
if (c_rt_lib::check_true($memory_6)) {goto label_595;}
#line 649
$memory_6 = c_rt_lib::ov_is($memory_5, 'fun_label');
#line 649
if (c_rt_lib::check_true($memory_6)) {goto label_750;}
#line 652
$memory_6 = c_rt_lib::ov_is($memory_5, 'fun_val');
#line 652
if (c_rt_lib::check_true($memory_6)) {goto label_764;}
#line 654
$memory_6 = c_rt_lib::ov_is($memory_5, 'string');
#line 654
if (c_rt_lib::check_true($memory_6)) {goto label_771;}
#line 656
$memory_6 = c_rt_lib::ov_is($memory_5, 'post_inc');
#line 656
if (c_rt_lib::check_true($memory_6)) {goto label_780;}
#line 658
$memory_6 = c_rt_lib::ov_is($memory_5, 'post_dec');
#line 658
if (c_rt_lib::check_true($memory_6)) {goto label_794;}
#line 658
$memory_6 = "NOMATCHALERT";
#line 658
$memory_6 = [$memory_6,$memory_5];
#line 658
die(dfile::ssave($memory_6));
#line 512
label_39:
#line 512
$memory_7 = c_rt_lib::ov_as($memory_5, 'ternary_op');
#line 513
$memory_9 = $memory_7->{'fst'};
#line 513
$memory_8 = type_checker_priv::check_val($memory_9, $memory_1, $memory_2, $memory_3);
#line 513
undef($memory_9);
#line 516
$memory_9 = ptd_system::is_condition_type($memory_8, $memory_1, $memory_3);
#line 516
$memory_9 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_9));
#line 516
$memory_9 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_9));
#line 516
if (c_rt_lib::check_true($memory_9)) {goto label_57;}
#line 514
$memory_10 = "ternary op first argument should be sim or boolean type instead of ";
#line 515
$memory_12 = $memory_8->{'type'};
#line 515
$memory_11 = type_checker_priv::get_print_tct_type_name($memory_12);
#line 515
undef($memory_12);
#line 515
$memory_10 = $memory_10 . $memory_11;
#line 515
undef($memory_11);
#line 515
type_checker_priv::add_error($memory_3, $memory_10);
#line 515
undef($memory_10);
#line 515
goto label_57;
#line 515
label_57:
#line 515
undef($memory_9);
#line 517
$memory_10 = $memory_7->{'snd'};
#line 517
$memory_9 = type_checker_priv::check_val($memory_10, $memory_1, $memory_2, $memory_3);
#line 517
undef($memory_10);
#line 517
$memory_9 = $memory_9->{'type'};
#line 518
$memory_10 = $memory_9;
#line 518
$memory_10 = c_rt_lib::ov_is($memory_10, 'tct_void');
#line 518
$memory_10 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_10));
#line 518
if (c_rt_lib::check_true($memory_10)) {goto label_71;}
#line 519
$memory_11 = $memory_9;
#line 519
 if (c_rt_lib::get_hashcount($memory_4) > 1) {$memory_4 = {%{$memory_4}};}$memory_4->{'type'} = $memory_11;
#line 519
undef($memory_11);
#line 520
goto label_95;
#line 520
label_71:
#line 521
$memory_12 = $memory_7->{'thrd'};
#line 521
$memory_11 = type_checker_priv::check_val($memory_12, $memory_1, $memory_2, $memory_3);
#line 521
undef($memory_12);
#line 521
$memory_11 = $memory_11->{'type'};
#line 522
$memory_12 = $memory_11;
#line 522
$memory_12 = c_rt_lib::ov_is($memory_12, 'tct_void');
#line 522
$memory_12 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_12));
#line 522
if (c_rt_lib::check_true($memory_12)) {goto label_84;}
#line 523
$memory_13 = $memory_11;
#line 523
 if (c_rt_lib::get_hashcount($memory_4) > 1) {$memory_4 = {%{$memory_4}};}$memory_4->{'type'} = $memory_13;
#line 523
undef($memory_13);
#line 524
goto label_91;
#line 524
label_84:
#line 525
$memory_13 = ptd_system::cross_type($memory_9, $memory_11, $memory_1, $memory_3);
#line 525
$memory_14 = $memory_13;
#line 525
 if (c_rt_lib::get_hashcount($memory_4) > 1) {$memory_4 = {%{$memory_4}};}$memory_4->{'type'} = $memory_14;
#line 525
undef($memory_13);
#line 525
undef($memory_14);
#line 526
goto label_91;
#line 526
label_91:
#line 526
undef($memory_12);
#line 526
undef($memory_11);
#line 527
goto label_95;
#line 527
label_95:
#line 527
undef($memory_10);
#line 527
undef($memory_8);
#line 527
undef($memory_9);
#line 527
undef($memory_7);
#line 528
goto label_808;
#line 528
label_101:
#line 528
$memory_7 = c_rt_lib::ov_as($memory_5, 'hash_key');
#line 529
$memory_8 = tct::sim();
#line 529
$memory_9 = $memory_8;
#line 529
 if (c_rt_lib::get_hashcount($memory_4) > 1) {$memory_4 = {%{$memory_4}};}$memory_4->{'type'} = $memory_9;
#line 529
undef($memory_8);
#line 529
undef($memory_9);
#line 529
undef($memory_7);
#line 530
goto label_808;
#line 530
label_110:
#line 531
$memory_7 = tct::empty();
#line 531
$memory_8 = $memory_7;
#line 531
 if (c_rt_lib::get_hashcount($memory_4) > 1) {$memory_4 = {%{$memory_4}};}$memory_4->{'type'} = $memory_8;
#line 531
undef($memory_7);
#line 531
undef($memory_8);
#line 532
goto label_808;
#line 532
label_117:
#line 532
$memory_7 = c_rt_lib::ov_as($memory_5, 'parenthesis');
#line 533
$memory_8 = type_checker_priv::check_val($memory_7, $memory_1, $memory_2, $memory_3);
#line 533
undef($memory_0);
#line 533
undef($memory_4);
#line 533
undef($memory_5);
#line 533
undef($memory_6);
#line 533
undef($memory_7);
#line 533
$_[1] = $memory_1;$_[2] = $memory_2;$_[3] = $memory_3;return $memory_8;
#line 533
undef($memory_8);
#line 533
undef($memory_7);
#line 534
goto label_808;
#line 534
label_129:
#line 534
$memory_7 = c_rt_lib::ov_as($memory_5, 'variant');
#line 535
$memory_8 = $memory_7->{'name'};
#line 535
$memory_9 = "TRUE";
#line 535
$memory_8 = c_rt_lib::to_nl($memory_8 eq $memory_9);
#line 535
undef($memory_9);
#line 535
if (c_rt_lib::check_true($memory_8)) {goto label_140;}
#line 535
$memory_8 = $memory_7->{'name'};
#line 535
$memory_9 = "FALSE";
#line 535
$memory_8 = c_rt_lib::to_nl($memory_8 eq $memory_9);
#line 535
undef($memory_9);
#line 535
label_140:
#line 535
$memory_8 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 535
if (c_rt_lib::check_true($memory_8)) {goto label_155;}
#line 536
$memory_9 = tct::bool();
#line 536
$memory_10 = $memory_9;
#line 536
 if (c_rt_lib::get_hashcount($memory_4) > 1) {$memory_4 = {%{$memory_4}};}$memory_4->{'type'} = $memory_10;
#line 536
undef($memory_9);
#line 536
undef($memory_10);
#line 537
undef($memory_0);
#line 537
undef($memory_5);
#line 537
undef($memory_6);
#line 537
undef($memory_7);
#line 537
undef($memory_8);
#line 537
$_[1] = $memory_1;$_[2] = $memory_2;$_[3] = $memory_3;return $memory_4;
#line 538
goto label_155;
#line 538
label_155:
#line 538
undef($memory_8);
#line 539
$memory_8 = {};
#line 540
$memory_9 = $memory_7->{'var'};
#line 540
$memory_9 = $memory_9->{'value'};
#line 540
$memory_9 = c_rt_lib::ov_is($memory_9, 'nop');
#line 540
$memory_9 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_9));
#line 540
if (c_rt_lib::check_true($memory_9)) {goto label_169;}
#line 541
$memory_10 = $memory_7->{'name'};
#line 541
$memory_11 = tct::none();
#line 541
hash::set_value($memory_8, $memory_10, $memory_11);
#line 541
undef($memory_11);
#line 541
undef($memory_10);
#line 542
goto label_185;
#line 542
label_169:
#line 543
$memory_11 = $memory_7->{'var'};
#line 543
$memory_10 = type_checker_priv::check_val($memory_11, $memory_1, $memory_2, $memory_3);
#line 543
undef($memory_11);
#line 544
$memory_11 = $memory_7->{'name'};
#line 544
$memory_12 = $memory_10->{'type'};
#line 544
hash::set_value($memory_8, $memory_11, $memory_12);
#line 544
undef($memory_12);
#line 544
undef($memory_11);
#line 545
$memory_11 = $memory_10->{'src'};
#line 545
$memory_12 = $memory_11;
#line 545
 if (c_rt_lib::get_hashcount($memory_4) > 1) {$memory_4 = {%{$memory_4}};}$memory_4->{'src'} = $memory_12;
#line 545
undef($memory_11);
#line 545
undef($memory_12);
#line 545
undef($memory_10);
#line 546
goto label_185;
#line 546
label_185:
#line 546
undef($memory_9);
#line 547
$memory_9 = tct::var($memory_8);
#line 547
$memory_10 = $memory_9;
#line 547
 if (c_rt_lib::get_hashcount($memory_4) > 1) {$memory_4 = {%{$memory_4}};}$memory_4->{'type'} = $memory_10;
#line 547
undef($memory_9);
#line 547
undef($memory_10);
#line 547
undef($memory_8);
#line 547
undef($memory_7);
#line 548
goto label_808;
#line 548
label_195:
#line 548
$memory_7 = c_rt_lib::ov_as($memory_5, 'const');
#line 549
$memory_8 = tct::sim();
#line 549
$memory_9 = $memory_8;
#line 549
 if (c_rt_lib::get_hashcount($memory_4) > 1) {$memory_4 = {%{$memory_4}};}$memory_4->{'type'} = $memory_9;
#line 549
undef($memory_8);
#line 549
undef($memory_9);
#line 549
undef($memory_7);
#line 550
goto label_808;
#line 550
label_204:
#line 550
$memory_7 = c_rt_lib::ov_as($memory_5, 'arr_decl');
#line 551
$memory_8 = array::len($memory_7);
#line 551
$memory_9 = 0;
#line 551
$memory_8 = c_rt_lib::to_nl($memory_8 == $memory_9);
#line 551
undef($memory_9);
#line 551
$memory_8 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 551
if (c_rt_lib::check_true($memory_8)) {goto label_226;}
#line 552
$memory_10 = tct::empty();
#line 552
$memory_9 = tct::arr($memory_10);
#line 552
undef($memory_10);
#line 552
$memory_10 = $memory_9;
#line 552
 if (c_rt_lib::get_hashcount($memory_4) > 1) {$memory_4 = {%{$memory_4}};}$memory_4->{'type'} = $memory_10;
#line 552
undef($memory_9);
#line 552
undef($memory_10);
#line 553
undef($memory_0);
#line 553
undef($memory_5);
#line 553
undef($memory_6);
#line 553
undef($memory_7);
#line 553
undef($memory_8);
#line 553
$_[1] = $memory_1;$_[2] = $memory_2;$_[3] = $memory_3;return $memory_4;
#line 554
goto label_226;
#line 554
label_226:
#line 554
undef($memory_8);
#line 555
$memory_8 = [];
#line 556
$memory_10 = 0;
#line 556
$memory_11 = 1;
#line 556
$memory_12 = c_rt_lib::array_len($memory_7);
#line 556
label_232:
#line 556
$memory_13 = c_rt_lib::to_nl($memory_10 >= $memory_12);
#line 556
if (c_rt_lib::check_true($memory_13)) {goto label_241;}
#line 556
$memory_9 = $memory_7->[$memory_10];
#line 557
$memory_14 = type_checker_priv::check_val($memory_9, $memory_1, $memory_2, $memory_3);
#line 558
array::push($memory_8, $memory_14);
#line 558
undef($memory_14);
#line 559
$memory_10 = $memory_10 + $memory_11;
#line 559
goto label_232;
#line 559
label_241:
#line 559
undef($memory_9);
#line 559
undef($memory_10);
#line 559
undef($memory_11);
#line 559
undef($memory_12);
#line 559
undef($memory_13);
#line 560
$memory_10 = 0;
#line 560
$memory_9 = $memory_8->[$memory_10];
#line 560
undef($memory_10);
#line 560
$memory_9 = $memory_9->{'type'};
#line 561
$memory_10 = 1;
#line 561
label_252:
#line 561
$memory_11 = array::len($memory_8);
#line 561
$memory_11 = c_rt_lib::to_nl($memory_10 < $memory_11);
#line 561
$memory_11 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_11));
#line 561
if (c_rt_lib::check_true($memory_11)) {goto label_267;}
#line 562
$memory_13 = $memory_8->[$memory_10];
#line 562
$memory_13 = $memory_13->{'type'};
#line 562
$memory_12 = ptd_system::cross_type($memory_9, $memory_13, $memory_1, $memory_3);
#line 562
undef($memory_13);
#line 562
$memory_9 = $memory_12;
#line 562
undef($memory_12);
#line 561
$memory_12 = 1;
#line 561
$memory_10 = $memory_10 + $memory_12;
#line 561
undef($memory_12);
#line 563
goto label_252;
#line 563
label_267:
#line 563
undef($memory_10);
#line 563
undef($memory_11);
#line 564
$memory_10 = tct::arr($memory_9);
#line 564
$memory_11 = $memory_10;
#line 564
 if (c_rt_lib::get_hashcount($memory_4) > 1) {$memory_4 = {%{$memory_4}};}$memory_4->{'type'} = $memory_11;
#line 564
undef($memory_10);
#line 564
undef($memory_11);
#line 564
undef($memory_8);
#line 564
undef($memory_9);
#line 564
undef($memory_7);
#line 565
goto label_808;
#line 565
label_279:
#line 565
$memory_7 = c_rt_lib::ov_as($memory_5, 'hash_decl');
#line 566
$memory_8 = {};
#line 567
$memory_10 = 0;
#line 567
$memory_11 = 1;
#line 567
$memory_12 = c_rt_lib::array_len($memory_7);
#line 567
label_285:
#line 567
$memory_13 = c_rt_lib::to_nl($memory_10 >= $memory_12);
#line 567
if (c_rt_lib::check_true($memory_13)) {goto label_300;}
#line 567
$memory_9 = $memory_7->[$memory_10];
#line 568
$memory_14 = $memory_9->{'key'};
#line 568
$memory_14 = $memory_14->{'value'};
#line 568
$memory_14 = c_rt_lib::ov_as($memory_14, 'hash_key');
#line 569
$memory_16 = $memory_9->{'val'};
#line 569
$memory_15 = type_checker_priv::check_val($memory_16, $memory_1, $memory_2, $memory_3);
#line 569
undef($memory_16);
#line 570
hash::set_value($memory_8, $memory_14, $memory_15);
#line 570
undef($memory_14);
#line 570
undef($memory_15);
#line 571
$memory_10 = $memory_10 + $memory_11;
#line 571
goto label_285;
#line 571
label_300:
#line 571
undef($memory_9);
#line 571
undef($memory_10);
#line 571
undef($memory_11);
#line 571
undef($memory_12);
#line 571
undef($memory_13);
#line 572
$memory_9 = {};
#line 573
$memory_12 = c_rt_lib::init_iter($memory_8);
#line 573
label_308:
#line 573
$memory_10 = c_rt_lib::is_end_hash($memory_12);
#line 573
if (c_rt_lib::check_true($memory_10)) {goto label_318;}
#line 573
$memory_10 = c_rt_lib::get_key_iter($memory_12);
#line 573
$memory_11 = c_rt_lib::hash_get_value($memory_8, $memory_10);
#line 574
$memory_13 = $memory_11->{'type'};
#line 574
hash::set_value($memory_9, $memory_10, $memory_13);
#line 574
undef($memory_13);
#line 575
$memory_12 = c_rt_lib::next_iter($memory_12);
#line 575
goto label_308;
#line 575
label_318:
#line 575
undef($memory_10);
#line 575
undef($memory_11);
#line 575
undef($memory_12);
#line 576
$memory_10 = tct::rec($memory_9);
#line 576
$memory_11 = $memory_10;
#line 576
 if (c_rt_lib::get_hashcount($memory_4) > 1) {$memory_4 = {%{$memory_4}};}$memory_4->{'type'} = $memory_11;
#line 576
undef($memory_10);
#line 576
undef($memory_11);
#line 576
undef($memory_8);
#line 576
undef($memory_9);
#line 576
undef($memory_7);
#line 577
goto label_808;
#line 577
label_331:
#line 577
$memory_7 = c_rt_lib::ov_as($memory_5, 'var');
#line 578
$memory_8 = hash::has_key($memory_2, $memory_7);
#line 578
$memory_8 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 578
$memory_8 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 578
if (c_rt_lib::check_true($memory_8)) {goto label_351;}
#line 579
$memory_9 = "variable `";
#line 579
$memory_9 = $memory_9 . $memory_7;
#line 579
$memory_10 = "' does not exist";
#line 579
$memory_9 = $memory_9 . $memory_10;
#line 579
undef($memory_10);
#line 579
type_checker_priv::add_error($memory_3, $memory_9);
#line 579
undef($memory_9);
#line 580
undef($memory_0);
#line 580
undef($memory_5);
#line 580
undef($memory_6);
#line 580
undef($memory_7);
#line 580
undef($memory_8);
#line 580
$_[1] = $memory_1;$_[2] = $memory_2;$_[3] = $memory_3;return $memory_4;
#line 581
goto label_351;
#line 581
label_351:
#line 581
undef($memory_8);
#line 582
$memory_8 = hash::get_value($memory_2, $memory_7);
#line 583
$memory_9 = $memory_8->{'overwrited'};
#line 583
$memory_10 = c_rt_lib::ov_is($memory_9, 'yes');
#line 583
if (c_rt_lib::check_true($memory_10)) {goto label_362;}
#line 585
$memory_10 = c_rt_lib::ov_is($memory_9, 'no');
#line 585
if (c_rt_lib::check_true($memory_10)) {goto label_379;}
#line 585
$memory_10 = "NOMATCHALERT";
#line 585
$memory_10 = [$memory_10,$memory_9];
#line 585
die(dfile::ssave($memory_10));
#line 583
label_362:
#line 584
$memory_12 = $memory_8->{'type'};
#line 584
$memory_13 = c_rt_lib::ov_mk_none('speculation');
#line 584
$memory_11 = {type => $memory_12,src => $memory_13,};
#line 584
undef($memory_12);
#line 584
undef($memory_13);
#line 584
undef($memory_0);
#line 584
undef($memory_4);
#line 584
undef($memory_5);
#line 584
undef($memory_6);
#line 584
undef($memory_7);
#line 584
undef($memory_8);
#line 584
undef($memory_9);
#line 584
undef($memory_10);
#line 584
$_[1] = $memory_1;$_[2] = $memory_2;$_[3] = $memory_3;return $memory_11;
#line 584
undef($memory_11);
#line 585
goto label_396;
#line 585
label_379:
#line 586
$memory_12 = $memory_8->{'type'};
#line 586
$memory_13 = c_rt_lib::ov_mk_none('known');
#line 586
$memory_11 = {type => $memory_12,src => $memory_13,};
#line 586
undef($memory_12);
#line 586
undef($memory_13);
#line 586
undef($memory_0);
#line 586
undef($memory_4);
#line 586
undef($memory_5);
#line 586
undef($memory_6);
#line 586
undef($memory_7);
#line 586
undef($memory_8);
#line 586
undef($memory_9);
#line 586
undef($memory_10);
#line 586
$_[1] = $memory_1;$_[2] = $memory_2;$_[3] = $memory_3;return $memory_11;
#line 586
undef($memory_11);
#line 587
goto label_396;
#line 587
label_396:
#line 587
undef($memory_9);
#line 587
undef($memory_10);
#line 587
undef($memory_8);
#line 587
undef($memory_7);
#line 588
goto label_808;
#line 588
label_402:
#line 588
$memory_7 = c_rt_lib::ov_as($memory_5, 'bin_op');
#line 589
$memory_8 = type_checker_priv::get_type_from_bin_op_and_check($memory_7, $memory_1, $memory_2, $memory_3);
#line 589
undef($memory_0);
#line 589
undef($memory_4);
#line 589
undef($memory_5);
#line 589
undef($memory_6);
#line 589
undef($memory_7);
#line 589
$_[1] = $memory_1;$_[2] = $memory_2;$_[3] = $memory_3;return $memory_8;
#line 589
undef($memory_8);
#line 589
undef($memory_7);
#line 590
goto label_808;
#line 590
label_414:
#line 590
$memory_7 = c_rt_lib::ov_as($memory_5, 'var_op');
#line 591
$memory_10 = $memory_7->{'left'};
#line 591
$memory_9 = type_checker_priv::check_val($memory_10, $memory_1, $memory_2, $memory_3);
#line 591
undef($memory_10);
#line 591
$memory_8 = ptd_system::can_delete($memory_9, $memory_1, $memory_3);
#line 591
undef($memory_9);
#line 594
$memory_10 = $memory_7->{'op'};
#line 594
$memory_11 = c_rt_lib::ov_is($memory_10, 'ov_is');
#line 594
if (c_rt_lib::check_true($memory_11)) {goto label_429;}
#line 596
$memory_11 = c_rt_lib::ov_is($memory_10, 'ov_as');
#line 596
if (c_rt_lib::check_true($memory_11)) {goto label_438;}
#line 596
$memory_11 = "NOMATCHALERT";
#line 596
$memory_11 = [$memory_11,$memory_10];
#line 596
die(dfile::ssave($memory_11));
#line 594
label_429:
#line 595
$memory_13 = tct::bool();
#line 595
$memory_14 = c_rt_lib::ov_mk_none('speculation');
#line 595
$memory_12 = {type => $memory_13,src => $memory_14,};
#line 595
undef($memory_13);
#line 595
undef($memory_14);
#line 595
$memory_9 = $memory_12;
#line 595
undef($memory_12);
#line 596
goto label_447;
#line 596
label_438:
#line 597
$memory_13 = tct::tct_im();
#line 597
$memory_14 = $memory_8->{'src'};
#line 597
$memory_12 = {type => $memory_13,src => $memory_14,};
#line 597
undef($memory_13);
#line 597
undef($memory_14);
#line 597
$memory_9 = $memory_12;
#line 597
undef($memory_12);
#line 598
goto label_447;
#line 598
label_447:
#line 598
undef($memory_10);
#line 598
undef($memory_11);
#line 599
$memory_12 = {};
#line 599
$memory_11 = tct::var($memory_12);
#line 599
undef($memory_12);
#line 599
$memory_10 = ptd_system::is_accepted($memory_8, $memory_11, $memory_1, $memory_3);
#line 599
undef($memory_11);
#line 599
$memory_10 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_10));
#line 599
if (c_rt_lib::check_true($memory_10)) {goto label_571;}
#line 600
$memory_11 = $memory_8->{'type'};
#line 600
$memory_11 = c_rt_lib::ov_is($memory_11, 'tct_var');
#line 600
$memory_11 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_11));
#line 600
$memory_11 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_11));
#line 600
if (c_rt_lib::check_true($memory_11)) {goto label_472;}
#line 600
undef($memory_0);
#line 600
undef($memory_4);
#line 600
undef($memory_5);
#line 600
undef($memory_6);
#line 600
undef($memory_7);
#line 600
undef($memory_8);
#line 600
undef($memory_10);
#line 600
undef($memory_11);
#line 600
$_[1] = $memory_1;$_[2] = $memory_2;$_[3] = $memory_3;return $memory_9;
#line 600
goto label_472;
#line 600
label_472:
#line 600
undef($memory_11);
#line 601
$memory_11 = $memory_8->{'type'};
#line 601
$memory_11 = c_rt_lib::ov_as($memory_11, 'tct_var');
#line 602
$memory_13 = $memory_7->{'case'};
#line 602
$memory_12 = hash::has_key($memory_11, $memory_13);
#line 602
undef($memory_13);
#line 602
$memory_12 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_12));
#line 602
$memory_12 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_12));
#line 602
if (c_rt_lib::check_true($memory_12)) {goto label_507;}
#line 603
$memory_13 = "case ";
#line 603
$memory_14 = $memory_7->{'case'};
#line 603
$memory_13 = $memory_13 . $memory_14;
#line 603
undef($memory_14);
#line 603
$memory_14 = " doesn't exist is: ";
#line 603
$memory_13 = $memory_13 . $memory_14;
#line 603
undef($memory_14);
#line 604
$memory_15 = $memory_8->{'type'};
#line 604
$memory_14 = type_checker_priv::get_print_tct_type_name($memory_15);
#line 604
undef($memory_15);
#line 604
$memory_13 = $memory_13 . $memory_14;
#line 604
undef($memory_14);
#line 604
type_checker_priv::add_error($memory_3, $memory_13);
#line 604
undef($memory_13);
#line 605
undef($memory_0);
#line 605
undef($memory_4);
#line 605
undef($memory_5);
#line 605
undef($memory_6);
#line 605
undef($memory_7);
#line 605
undef($memory_8);
#line 605
undef($memory_10);
#line 605
undef($memory_11);
#line 605
undef($memory_12);
#line 605
$_[1] = $memory_1;$_[2] = $memory_2;$_[3] = $memory_3;return $memory_9;
#line 606
goto label_507;
#line 606
label_507:
#line 606
undef($memory_12);
#line 607
$memory_12 = $memory_7->{'op'};
#line 607
$memory_13 = c_rt_lib::ov_is($memory_12, 'ov_is');
#line 607
if (c_rt_lib::check_true($memory_13)) {goto label_517;}
#line 608
$memory_13 = c_rt_lib::ov_is($memory_12, 'ov_as');
#line 608
if (c_rt_lib::check_true($memory_13)) {goto label_519;}
#line 608
$memory_13 = "NOMATCHALERT";
#line 608
$memory_13 = [$memory_13,$memory_12];
#line 608
die(dfile::ssave($memory_13));
#line 607
label_517:
#line 608
goto label_557;
#line 608
label_519:
#line 609
$memory_15 = $memory_7->{'case'};
#line 609
$memory_14 = hash::get_value($memory_11, $memory_15);
#line 609
undef($memory_15);
#line 610
$memory_15 = c_rt_lib::ov_is($memory_14, 'with_param');
#line 610
if (c_rt_lib::check_true($memory_15)) {goto label_530;}
#line 612
$memory_15 = c_rt_lib::ov_is($memory_14, 'no_param');
#line 612
if (c_rt_lib::check_true($memory_15)) {goto label_537;}
#line 612
$memory_15 = "NOMATCHALERT";
#line 612
$memory_15 = [$memory_15,$memory_14];
#line 612
die(dfile::ssave($memory_15));
#line 610
label_530:
#line 610
$memory_16 = c_rt_lib::ov_as($memory_14, 'with_param');
#line 611
$memory_17 = $memory_16;
#line 611
 if (c_rt_lib::get_hashcount($memory_9) > 1) {$memory_9 = {%{$memory_9}};}$memory_9->{'type'} = $memory_17;
#line 611
undef($memory_17);
#line 611
undef($memory_16);
#line 612
goto label_553;
#line 612
label_537:
#line 613
$memory_16 = "case ";
#line 613
$memory_17 = $memory_7->{'case'};
#line 613
$memory_16 = $memory_16 . $memory_17;
#line 613
undef($memory_17);
#line 613
$memory_17 = " don't have value: ";
#line 613
$memory_16 = $memory_16 . $memory_17;
#line 613
undef($memory_17);
#line 614
$memory_18 = $memory_8->{'type'};
#line 614
$memory_17 = type_checker_priv::get_print_tct_type_name($memory_18);
#line 614
undef($memory_18);
#line 614
$memory_16 = $memory_16 . $memory_17;
#line 614
undef($memory_17);
#line 614
type_checker_priv::add_error($memory_3, $memory_16);
#line 614
undef($memory_16);
#line 615
goto label_553;
#line 615
label_553:
#line 615
undef($memory_15);
#line 615
undef($memory_14);
#line 616
goto label_557;
#line 616
label_557:
#line 616
undef($memory_12);
#line 616
undef($memory_13);
#line 617
undef($memory_0);
#line 617
undef($memory_4);
#line 617
undef($memory_5);
#line 617
undef($memory_6);
#line 617
undef($memory_7);
#line 617
undef($memory_8);
#line 617
undef($memory_10);
#line 617
undef($memory_11);
#line 617
$_[1] = $memory_1;$_[2] = $memory_2;$_[3] = $memory_3;return $memory_9;
#line 617
undef($memory_11);
#line 618
goto label_589;
#line 618
label_571:
#line 619
$memory_11 = "binary operator 'as/is' can be applied only to variant: ";
#line 620
$memory_13 = $memory_8->{'type'};
#line 620
$memory_12 = type_checker_priv::get_print_tct_type_name($memory_13);
#line 620
undef($memory_13);
#line 620
$memory_11 = $memory_11 . $memory_12;
#line 620
undef($memory_12);
#line 620
type_checker_priv::add_error($memory_3, $memory_11);
#line 620
undef($memory_11);
#line 621
undef($memory_0);
#line 621
undef($memory_4);
#line 621
undef($memory_5);
#line 621
undef($memory_6);
#line 621
undef($memory_7);
#line 621
undef($memory_8);
#line 621
undef($memory_10);
#line 621
$_[1] = $memory_1;$_[2] = $memory_2;$_[3] = $memory_3;return $memory_9;
#line 622
goto label_589;
#line 622
label_589:
#line 622
undef($memory_10);
#line 622
undef($memory_8);
#line 622
undef($memory_9);
#line 622
undef($memory_7);
#line 623
goto label_808;
#line 623
label_595:
#line 623
$memory_7 = c_rt_lib::ov_as($memory_5, 'unary_op');
#line 624
$memory_9 = $memory_7->{'val'};
#line 624
$memory_8 = type_checker_priv::check_val($memory_9, $memory_1, $memory_2, $memory_3);
#line 624
undef($memory_9);
#line 625
$memory_9 = $memory_7->{'op'};
#line 625
$memory_10 = "!";
#line 625
$memory_9 = c_rt_lib::to_nl($memory_9 eq $memory_10);
#line 625
undef($memory_10);
#line 625
$memory_9 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_9));
#line 625
if (c_rt_lib::check_true($memory_9)) {goto label_634;}
#line 626
$memory_10 = ptd_system::is_condition_type($memory_8, $memory_1, $memory_3);
#line 626
$memory_10 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_10));
#line 626
$memory_10 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_10));
#line 626
if (c_rt_lib::check_true($memory_10)) {goto label_619;}
#line 627
$memory_11 = "incorrect type of argument operator '!' : ";
#line 628
$memory_13 = $memory_8->{'type'};
#line 628
$memory_12 = type_checker_priv::get_print_tct_type_name($memory_13);
#line 628
undef($memory_13);
#line 628
$memory_11 = $memory_11 . $memory_12;
#line 628
undef($memory_12);
#line 628
type_checker_priv::add_error($memory_3, $memory_11);
#line 628
undef($memory_11);
#line 629
goto label_619;
#line 629
label_619:
#line 629
undef($memory_10);
#line 630
$memory_10 = tct::bool();
#line 630
$memory_11 = $memory_10;
#line 630
 if (c_rt_lib::get_hashcount($memory_4) > 1) {$memory_4 = {%{$memory_4}};}$memory_4->{'type'} = $memory_11;
#line 630
undef($memory_10);
#line 630
undef($memory_11);
#line 631
undef($memory_0);
#line 631
undef($memory_5);
#line 631
undef($memory_6);
#line 631
undef($memory_7);
#line 631
undef($memory_8);
#line 631
undef($memory_9);
#line 631
$_[1] = $memory_1;$_[2] = $memory_2;$_[3] = $memory_3;return $memory_4;
#line 632
goto label_740;
#line 632
label_634:
#line 632
$memory_9 = $memory_7->{'op'};
#line 632
$memory_10 = "\@";
#line 632
$memory_9 = c_rt_lib::to_nl($memory_9 eq $memory_10);
#line 632
undef($memory_10);
#line 632
$memory_9 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_9));
#line 632
if (c_rt_lib::check_true($memory_9)) {goto label_681;}
#line 633
$memory_11 = tct::func();
#line 633
$memory_10 = ptd_system::is_accepted($memory_8, $memory_11, $memory_1, $memory_3);
#line 633
undef($memory_11);
#line 633
$memory_10 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_10));
#line 633
$memory_10 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_10));
#line 633
if (c_rt_lib::check_true($memory_10)) {goto label_662;}
#line 634
$memory_11 = "incorrect type of argument operator '";
#line 634
$memory_12 = $memory_7->{'op'};
#line 634
$memory_11 = $memory_11 . $memory_12;
#line 634
undef($memory_12);
#line 634
$memory_12 = "' : ";
#line 634
$memory_11 = $memory_11 . $memory_12;
#line 634
undef($memory_12);
#line 635
$memory_13 = $memory_8->{'type'};
#line 635
$memory_12 = type_checker_priv::get_print_tct_type_name($memory_13);
#line 635
undef($memory_13);
#line 635
$memory_11 = $memory_11 . $memory_12;
#line 635
undef($memory_12);
#line 635
type_checker_priv::add_error($memory_3, $memory_11);
#line 635
undef($memory_11);
#line 636
goto label_662;
#line 636
label_662:
#line 636
undef($memory_10);
#line 637
$memory_12 = tct::func();
#line 637
$memory_11 = {ref => $memory_12,};
#line 637
undef($memory_12);
#line 637
$memory_10 = tct::var($memory_11);
#line 637
undef($memory_11);
#line 637
$memory_11 = $memory_10;
#line 637
 if (c_rt_lib::get_hashcount($memory_4) > 1) {$memory_4 = {%{$memory_4}};}$memory_4->{'type'} = $memory_11;
#line 637
undef($memory_10);
#line 637
undef($memory_11);
#line 638
undef($memory_0);
#line 638
undef($memory_5);
#line 638
undef($memory_6);
#line 638
undef($memory_7);
#line 638
undef($memory_8);
#line 638
undef($memory_9);
#line 638
$_[1] = $memory_1;$_[2] = $memory_2;$_[3] = $memory_3;return $memory_4;
#line 639
goto label_740;
#line 639
label_681:
#line 639
$memory_9 = $memory_7->{'op'};
#line 639
$memory_10 = "--";
#line 639
$memory_9 = c_rt_lib::to_nl($memory_9 eq $memory_10);
#line 639
undef($memory_10);
#line 639
if (c_rt_lib::check_true($memory_9)) {goto label_691;}
#line 639
$memory_9 = $memory_7->{'op'};
#line 639
$memory_10 = "++";
#line 639
$memory_9 = c_rt_lib::to_nl($memory_9 eq $memory_10);
#line 639
undef($memory_10);
#line 639
label_691:
#line 639
$memory_9 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_9));
#line 639
if (c_rt_lib::check_true($memory_9)) {goto label_715;}
#line 640
$memory_11 = $memory_7->{'val'};
#line 640
$memory_12 = "incorrect type of argument operator '";
#line 640
$memory_13 = $memory_7->{'op'};
#line 640
$memory_12 = $memory_12 . $memory_13;
#line 640
undef($memory_13);
#line 640
$memory_13 = "' : ";
#line 640
$memory_12 = $memory_12 . $memory_13;
#line 640
undef($memory_13);
#line 640
$memory_10 = type_checker_priv::unary_op_dec_inc($memory_11, $memory_12, $memory_1, $memory_2, $memory_3);
#line 640
undef($memory_12);
#line 640
undef($memory_11);
#line 640
undef($memory_0);
#line 640
undef($memory_4);
#line 640
undef($memory_5);
#line 640
undef($memory_6);
#line 640
undef($memory_7);
#line 640
undef($memory_8);
#line 640
undef($memory_9);
#line 640
$_[1] = $memory_1;$_[2] = $memory_2;$_[3] = $memory_3;return $memory_10;
#line 640
undef($memory_10);
#line 642
goto label_740;
#line 642
label_715:
#line 643
$memory_11 = tct::sim();
#line 643
$memory_10 = ptd_system::is_accepted($memory_8, $memory_11, $memory_1, $memory_3);
#line 643
undef($memory_11);
#line 643
$memory_10 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_10));
#line 643
$memory_10 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_10));
#line 643
if (c_rt_lib::check_true($memory_10)) {goto label_737;}
#line 644
$memory_11 = "incorrect type of argument operator '";
#line 644
$memory_12 = $memory_7->{'op'};
#line 644
$memory_11 = $memory_11 . $memory_12;
#line 644
undef($memory_12);
#line 644
$memory_12 = "' : ";
#line 644
$memory_11 = $memory_11 . $memory_12;
#line 644
undef($memory_12);
#line 645
$memory_13 = $memory_8->{'type'};
#line 645
$memory_12 = type_checker_priv::get_print_tct_type_name($memory_13);
#line 645
undef($memory_13);
#line 645
$memory_11 = $memory_11 . $memory_12;
#line 645
undef($memory_12);
#line 645
type_checker_priv::add_error($memory_3, $memory_11);
#line 645
undef($memory_11);
#line 646
goto label_737;
#line 646
label_737:
#line 646
undef($memory_10);
#line 647
goto label_740;
#line 647
label_740:
#line 647
undef($memory_9);
#line 648
$memory_9 = tct::sim();
#line 648
$memory_10 = $memory_9;
#line 648
 if (c_rt_lib::get_hashcount($memory_4) > 1) {$memory_4 = {%{$memory_4}};}$memory_4->{'type'} = $memory_10;
#line 648
undef($memory_9);
#line 648
undef($memory_10);
#line 648
undef($memory_8);
#line 648
undef($memory_7);
#line 649
goto label_808;
#line 649
label_750:
#line 649
$memory_7 = c_rt_lib::ov_as($memory_5, 'fun_label');
#line 650
$memory_8 = $memory_7->{'module'};
#line 650
$memory_9 = $memory_7->{'name'};
#line 650
type_checker_priv::check_function_exists($memory_8, $memory_9, $memory_1, $memory_3);
#line 650
undef($memory_9);
#line 650
undef($memory_8);
#line 651
$memory_8 = tct::func();
#line 651
$memory_9 = $memory_8;
#line 651
 if (c_rt_lib::get_hashcount($memory_4) > 1) {$memory_4 = {%{$memory_4}};}$memory_4->{'type'} = $memory_9;
#line 651
undef($memory_8);
#line 651
undef($memory_9);
#line 651
undef($memory_7);
#line 652
goto label_808;
#line 652
label_764:
#line 652
$memory_7 = c_rt_lib::ov_as($memory_5, 'fun_val');
#line 653
$memory_8 = type_checker_priv::check_fun_val($memory_7, $memory_1, $memory_2, $memory_3);
#line 653
$memory_4 = $memory_8;
#line 653
undef($memory_8);
#line 653
undef($memory_7);
#line 654
goto label_808;
#line 654
label_771:
#line 654
$memory_7 = c_rt_lib::ov_as($memory_5, 'string');
#line 655
$memory_8 = tct::sim();
#line 655
$memory_9 = $memory_8;
#line 655
 if (c_rt_lib::get_hashcount($memory_4) > 1) {$memory_4 = {%{$memory_4}};}$memory_4->{'type'} = $memory_9;
#line 655
undef($memory_8);
#line 655
undef($memory_9);
#line 655
undef($memory_7);
#line 656
goto label_808;
#line 656
label_780:
#line 656
$memory_7 = c_rt_lib::ov_as($memory_5, 'post_inc');
#line 657
$memory_9 = "wrong type in post increment : ";
#line 657
$memory_8 = type_checker_priv::unary_op_dec_inc($memory_7, $memory_9, $memory_1, $memory_2, $memory_3);
#line 657
undef($memory_9);
#line 657
undef($memory_0);
#line 657
undef($memory_4);
#line 657
undef($memory_5);
#line 657
undef($memory_6);
#line 657
undef($memory_7);
#line 657
$_[1] = $memory_1;$_[2] = $memory_2;$_[3] = $memory_3;return $memory_8;
#line 657
undef($memory_8);
#line 657
undef($memory_7);
#line 658
goto label_808;
#line 658
label_794:
#line 658
$memory_7 = c_rt_lib::ov_as($memory_5, 'post_dec');
#line 659
$memory_9 = "wrong type in post decrement : ";
#line 659
$memory_8 = type_checker_priv::unary_op_dec_inc($memory_7, $memory_9, $memory_1, $memory_2, $memory_3);
#line 659
undef($memory_9);
#line 659
undef($memory_0);
#line 659
undef($memory_4);
#line 659
undef($memory_5);
#line 659
undef($memory_6);
#line 659
undef($memory_7);
#line 659
$_[1] = $memory_1;$_[2] = $memory_2;$_[3] = $memory_3;return $memory_8;
#line 659
undef($memory_8);
#line 659
undef($memory_7);
#line 660
goto label_808;
#line 660
label_808:
#line 660
undef($memory_5);
#line 660
undef($memory_6);
#line 661
undef($memory_0);
#line 661
$_[1] = $memory_1;$_[2] = $memory_2;$_[3] = $memory_3;return $memory_4;
#line 661
undef($memory_4);
#line 661
undef($memory_0);
#line 661
$_[1] = $memory_1;$_[2] = $memory_2;$_[3] = $memory_3;return;
$_[1] = $memory_1;$_[2] = $memory_2;$_[3] = $memory_3;}

sub type_checker_priv::check_fun_val($$$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;my $memory_13;my $memory_14;my $memory_15;my $memory_16;my $memory_17;my $memory_18;my $memory_19;my $memory_20;my $memory_21;my $memory_22;my $memory_23;my $memory_24;my $memory_25;my $memory_26;$memory_0 = $_[0];$memory_1 = $_[1];Scalar::Util::weaken($_[1]) if ref($_[1]);$memory_2 = $_[2];Scalar::Util::weaken($_[2]) if ref($_[2]);$memory_3 = $_[3];Scalar::Util::weaken($_[3]) if ref($_[3]);
#line 667
$memory_4 = tc_types::get_default_type();
#line 668
$memory_5 = [];
#line 669
$memory_6 = $memory_0->{'args'};
#line 669
$memory_8 = 0;
#line 669
$memory_9 = 1;
#line 669
$memory_10 = c_rt_lib::array_len($memory_6);
#line 669
label_6:
#line 669
$memory_11 = c_rt_lib::to_nl($memory_8 >= $memory_10);
#line 669
if (c_rt_lib::check_true($memory_11)) {goto label_17;}
#line 669
$memory_7 = $memory_6->[$memory_8];
#line 670
$memory_13 = $memory_7->{'val'};
#line 670
$memory_12 = type_checker_priv::check_val($memory_13, $memory_1, $memory_2, $memory_3);
#line 670
undef($memory_13);
#line 670
array::push($memory_5, $memory_12);
#line 670
undef($memory_12);
#line 671
$memory_8 = $memory_8 + $memory_9;
#line 671
goto label_6;
#line 671
label_17:
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
#line 672
$memory_7 = $memory_0->{'module'};
#line 672
$memory_8 = $memory_0->{'name'};
#line 672
$memory_6 = type_checker_priv::get_special_function_def($memory_7, $memory_8);
#line 672
undef($memory_8);
#line 672
undef($memory_7);
#line 673
$memory_7 = c_rt_lib::to_nl(0);
#line 674
$memory_8 = $memory_6->{'access'};
#line 674
$memory_9 = c_rt_lib::ov_is($memory_8, 'pub');
#line 674
if (c_rt_lib::check_true($memory_9)) {goto label_38;}
#line 680
$memory_9 = c_rt_lib::ov_is($memory_8, 'priv');
#line 680
if (c_rt_lib::check_true($memory_9)) {goto label_74;}
#line 680
$memory_9 = "NOMATCHALERT";
#line 680
$memory_9 = [$memory_9,$memory_8];
#line 680
die(dfile::ssave($memory_9));
#line 674
label_38:
#line 675
$memory_10 = c_rt_lib::to_nl(1);
#line 675
$memory_7 = $memory_10;
#line 675
undef($memory_10);
#line 676
$memory_11 = $memory_1->{'imports'};
#line 676
$memory_12 = $memory_0->{'module'};
#line 676
$memory_10 = hash::has_key($memory_11, $memory_12);
#line 676
undef($memory_12);
#line 676
undef($memory_11);
#line 676
$memory_10 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_10));
#line 676
$memory_10 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_10));
#line 676
if (c_rt_lib::check_true($memory_10)) {goto label_71;}
#line 677
$memory_11 = "module '";
#line 677
$memory_12 = $memory_0->{'module'};
#line 677
$memory_11 = $memory_11 . $memory_12;
#line 677
undef($memory_12);
#line 677
$memory_12 = "' not imported";
#line 677
$memory_11 = $memory_11 . $memory_12;
#line 677
undef($memory_12);
#line 677
type_checker_priv::add_error($memory_3, $memory_11);
#line 677
undef($memory_11);
#line 678
$memory_11 = "imports";
#line 678
$memory_11 = c_rt_lib::get_ref_hash($memory_1, $memory_11);
#line 678
$memory_12 = $memory_0->{'module'};
#line 678
$memory_13 = c_rt_lib::to_nl(0);
#line 678
hash::set_value($memory_11, $memory_12, $memory_13);
#line 678
undef($memory_13);
#line 678
undef($memory_12);
#line 678
$memory_12 = "imports";
#line 678
c_rt_lib::set_ref_hash($memory_1, $memory_12, $memory_11);
#line 678
undef($memory_12);
#line 678
undef($memory_11);
#line 679
goto label_71;
#line 679
label_71:
#line 679
undef($memory_10);
#line 680
goto label_102;
#line 680
label_74:
#line 681
$memory_11 = $memory_0->{'module'};
#line 681
$memory_12 = $memory_0->{'name'};
#line 681
$memory_10 = type_checker_priv::check_function_exists($memory_11, $memory_12, $memory_1, $memory_3);
#line 681
undef($memory_12);
#line 681
undef($memory_11);
#line 681
$memory_10 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_10));
#line 681
$memory_10 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_10));
#line 681
if (c_rt_lib::check_true($memory_10)) {goto label_92;}
#line 681
undef($memory_0);
#line 681
undef($memory_5);
#line 681
undef($memory_6);
#line 681
undef($memory_7);
#line 681
undef($memory_8);
#line 681
undef($memory_9);
#line 681
undef($memory_10);
#line 681
$_[1] = $memory_1;$_[2] = $memory_2;$_[3] = $memory_3;return $memory_4;
#line 681
goto label_92;
#line 681
label_92:
#line 681
undef($memory_10);
#line 682
$memory_11 = $memory_0->{'module'};
#line 682
$memory_12 = $memory_0->{'name'};
#line 682
$memory_10 = type_checker_priv::get_function_def($memory_11, $memory_12, $memory_1);
#line 682
undef($memory_12);
#line 682
undef($memory_11);
#line 682
$memory_6 = $memory_10;
#line 682
undef($memory_10);
#line 683
goto label_102;
#line 683
label_102:
#line 683
undef($memory_8);
#line 683
undef($memory_9);
#line 684
$memory_9 = $memory_0->{'args'};
#line 684
$memory_8 = array::len($memory_9);
#line 684
undef($memory_9);
#line 684
$memory_10 = $memory_6->{'args'};
#line 684
$memory_9 = array::len($memory_10);
#line 684
undef($memory_10);
#line 684
$memory_8 = c_rt_lib::to_nl($memory_8 != $memory_9);
#line 684
undef($memory_9);
#line 684
$memory_8 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 684
if (c_rt_lib::check_true($memory_8)) {goto label_140;}
#line 685
$memory_9 = "wrong number ";
#line 685
$memory_11 = $memory_0->{'args'};
#line 685
$memory_10 = array::len($memory_11);
#line 685
undef($memory_11);
#line 685
$memory_9 = $memory_9 . $memory_10;
#line 685
undef($memory_10);
#line 685
$memory_10 = " of function arguments : ";
#line 685
$memory_9 = $memory_9 . $memory_10;
#line 685
undef($memory_10);
#line 686
$memory_11 = $memory_0->{'module'};
#line 686
$memory_12 = $memory_0->{'name'};
#line 686
$memory_10 = type_checker_priv::get_function_name($memory_11, $memory_12);
#line 686
undef($memory_12);
#line 686
undef($memory_11);
#line 686
$memory_9 = $memory_9 . $memory_10;
#line 686
undef($memory_10);
#line 686
type_checker_priv::add_error($memory_3, $memory_9);
#line 686
undef($memory_9);
#line 687
undef($memory_0);
#line 687
undef($memory_5);
#line 687
undef($memory_6);
#line 687
undef($memory_7);
#line 687
undef($memory_8);
#line 687
$_[1] = $memory_1;$_[2] = $memory_2;$_[3] = $memory_3;return $memory_4;
#line 688
goto label_140;
#line 688
label_140:
#line 688
undef($memory_8);
#line 689
$memory_8 = {};
#line 690
$memory_10 = $memory_0->{'args'};
#line 690
$memory_9 = array::len($memory_10);
#line 690
undef($memory_10);
#line 690
$memory_10 = 0;
#line 690
$memory_11 = 1;
#line 690
label_148:
#line 690
$memory_12 = c_rt_lib::to_nl($memory_10 >= $memory_9);
#line 690
if (c_rt_lib::check_true($memory_12)) {goto label_319;}
#line 691
$memory_13 = $memory_0->{'args'};
#line 691
$memory_13 = $memory_13->[$memory_10];
#line 692
$memory_14 = $memory_6->{'args'};
#line 692
$memory_14 = $memory_14->[$memory_10];
#line 696
$memory_16 = $memory_14->{'mod'};
#line 696
$memory_17 = $memory_13->{'mod'};
#line 696
$memory_15 = enum::eq($memory_16, $memory_17);
#line 696
undef($memory_17);
#line 696
undef($memory_16);
#line 696
if (c_rt_lib::check_true($memory_15)) {goto label_175;}
#line 697
$memory_17 = $memory_14->{'mod'};
#line 697
$memory_18 = c_rt_lib::ov_mk_none('fun');
#line 697
$memory_15 = enum::eq($memory_17, $memory_18);
#line 697
undef($memory_18);
#line 697
undef($memory_17);
#line 697
$memory_16 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_15));
#line 697
if (c_rt_lib::check_true($memory_16)) {goto label_173;}
#line 697
$memory_17 = $memory_13->{'mod'};
#line 697
$memory_18 = c_rt_lib::ov_mk_none('none');
#line 697
$memory_15 = enum::eq($memory_17, $memory_18);
#line 697
undef($memory_18);
#line 697
undef($memory_17);
#line 697
label_173:
#line 697
undef($memory_16);
#line 697
label_175:
#line 697
$memory_15 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_15));
#line 697
$memory_15 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_15));
#line 697
if (c_rt_lib::check_true($memory_15)) {goto label_196;}
#line 693
$memory_16 = "arg no. ";
#line 693
$memory_17 = 1;
#line 693
$memory_17 = $memory_10 + $memory_17;
#line 693
$memory_16 = $memory_16 . $memory_17;
#line 693
undef($memory_17);
#line 693
$memory_17 = " '";
#line 693
$memory_16 = $memory_16 . $memory_17;
#line 693
undef($memory_17);
#line 693
$memory_17 = $memory_14->{'name'};
#line 693
$memory_16 = $memory_16 . $memory_17;
#line 693
undef($memory_17);
#line 694
$memory_17 = "' ref mismatched with function prototype";
#line 694
$memory_16 = $memory_16 . $memory_17;
#line 694
undef($memory_17);
#line 694
type_checker_priv::add_error($memory_3, $memory_16);
#line 694
undef($memory_16);
#line 694
goto label_196;
#line 694
label_196:
#line 694
undef($memory_15);
#line 699
$memory_16 = $memory_7;
#line 699
$memory_16 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_16));
#line 699
if (c_rt_lib::check_true($memory_16)) {goto label_214;}
#line 700
$memory_17 = $memory_5->[$memory_10];
#line 701
$memory_18 = c_rt_lib::ov_mk_none('speculation');
#line 701
$memory_19 = $memory_18;
#line 701
 if (c_rt_lib::get_hashcount($memory_17) > 1) {$memory_17 = {%{$memory_17}};}$memory_17->{'src'} = $memory_19;
#line 701
undef($memory_18);
#line 701
undef($memory_19);
#line 702
$memory_19 = $memory_14->{'type'};
#line 702
$memory_18 = ptd_system::is_accepted_info($memory_17, $memory_19, $memory_1, $memory_3);
#line 702
undef($memory_19);
#line 702
$memory_15 = $memory_18;
#line 702
undef($memory_18);
#line 702
undef($memory_17);
#line 703
goto label_276;
#line 703
label_214:
#line 704
$memory_17 = $memory_14->{'mod'};
#line 704
$memory_17 = c_rt_lib::ov_is($memory_17, 'ref');
#line 704
$memory_17 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_17));
#line 704
if (c_rt_lib::check_true($memory_17)) {goto label_266;}
#line 705
$memory_19 = $memory_3->{'errors'};
#line 705
$memory_18 = array::len($memory_19);
#line 705
undef($memory_19);
#line 706
$memory_20 = $memory_13->{'val'};
#line 706
$memory_19 = type_checker_priv::rec_get_var_from_lval($memory_20, $memory_3);
#line 706
undef($memory_20);
#line 707
$memory_21 = $memory_3->{'errors'};
#line 707
$memory_20 = array::len($memory_21);
#line 707
undef($memory_21);
#line 707
$memory_20 = c_rt_lib::to_nl($memory_18 == $memory_20);
#line 707
$memory_20 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_20));
#line 707
if (c_rt_lib::check_true($memory_20)) {goto label_261;}
#line 708
$memory_22 = 0;
#line 708
$memory_21 = $memory_19->[$memory_22];
#line 708
undef($memory_22);
#line 708
$memory_21 = c_rt_lib::ov_as($memory_21, 'var');
#line 709
$memory_22 = hash::has_key($memory_8, $memory_21);
#line 709
$memory_22 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_22));
#line 709
if (c_rt_lib::check_true($memory_22)) {goto label_243;}
#line 710
$memory_23 = "many ref-arguments come from the same variable: ";
#line 710
$memory_23 = $memory_23 . $memory_21;
#line 710
type_checker_priv::add_warning($memory_3, $memory_23);
#line 710
undef($memory_23);
#line 711
goto label_243;
#line 711
label_243:
#line 711
undef($memory_22);
#line 712
$memory_22 = 0;
#line 712
hash::set_value($memory_8, $memory_21, $memory_22);
#line 712
undef($memory_22);
#line 713
$memory_22 = $memory_13->{'val'};
#line 713
$memory_23 = $memory_5->[$memory_10];
#line 714
$memory_25 = $memory_14->{'type'};
#line 714
$memory_26 = c_rt_lib::ov_mk_none('known');
#line 714
$memory_24 = {type => $memory_25,src => $memory_26,};
#line 714
undef($memory_25);
#line 714
undef($memory_26);
#line 714
type_checker_priv::set_type_to_lval($memory_22, $memory_23, $memory_24, $memory_1, $memory_2, $memory_3);
#line 714
undef($memory_24);
#line 714
undef($memory_23);
#line 714
undef($memory_22);
#line 714
undef($memory_21);
#line 715
goto label_261;
#line 715
label_261:
#line 715
undef($memory_20);
#line 715
undef($memory_18);
#line 715
undef($memory_19);
#line 716
goto label_266;
#line 716
label_266:
#line 716
undef($memory_17);
#line 717
$memory_18 = $memory_14->{'type'};
#line 717
$memory_19 = $memory_5->[$memory_10];
#line 717
$memory_17 = ptd_system::check_assignment($memory_18, $memory_19, $memory_1, $memory_3);
#line 717
undef($memory_19);
#line 717
undef($memory_18);
#line 717
$memory_15 = $memory_17;
#line 717
undef($memory_17);
#line 719
goto label_276;
#line 719
label_276:
#line 719
undef($memory_16);
#line 720
$memory_16 = $memory_15;
#line 720
$memory_16 = c_rt_lib::ov_is($memory_16, 'err');
#line 720
$memory_16 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_16));
#line 720
if (c_rt_lib::check_true($memory_16)) {goto label_312;}
#line 721
$memory_17 = "In function call: ";
#line 721
$memory_19 = $memory_0->{'module'};
#line 721
$memory_20 = $memory_0->{'name'};
#line 721
$memory_18 = type_checker_priv::get_function_name($memory_19, $memory_20);
#line 721
undef($memory_20);
#line 721
undef($memory_19);
#line 721
$memory_17 = $memory_17 . $memory_18;
#line 721
undef($memory_18);
#line 722
$memory_18 = " argument no.";
#line 722
$memory_17 = $memory_17 . $memory_18;
#line 722
undef($memory_18);
#line 722
$memory_18 = 1;
#line 722
$memory_18 = $memory_10 + $memory_18;
#line 722
$memory_17 = $memory_17 . $memory_18;
#line 722
undef($memory_18);
#line 722
$memory_18 = " '";
#line 722
$memory_17 = $memory_17 . $memory_18;
#line 722
undef($memory_18);
#line 722
$memory_18 = $memory_14->{'name'};
#line 722
$memory_17 = $memory_17 . $memory_18;
#line 722
undef($memory_18);
#line 722
$memory_18 = "' has invalid type: ";
#line 722
$memory_17 = $memory_17 . $memory_18;
#line 722
undef($memory_18);
#line 723
$memory_18 = type_checker_priv::get_print_check_info($memory_15);
#line 723
$memory_17 = $memory_17 . $memory_18;
#line 723
undef($memory_18);
#line 723
type_checker_priv::add_error($memory_3, $memory_17);
#line 723
undef($memory_17);
#line 724
goto label_312;
#line 724
label_312:
#line 724
undef($memory_16);
#line 724
undef($memory_13);
#line 724
undef($memory_14);
#line 724
undef($memory_15);
#line 725
$memory_10 = $memory_10 + $memory_11;
#line 725
goto label_148;
#line 725
label_319:
#line 725
undef($memory_9);
#line 725
undef($memory_10);
#line 725
undef($memory_11);
#line 725
undef($memory_12);
#line 726
$memory_11 = $memory_6->{'ret_type'};
#line 726
$memory_12 = c_rt_lib::ov_mk_none('known');
#line 726
$memory_10 = {type => $memory_11,src => $memory_12,};
#line 726
undef($memory_11);
#line 726
undef($memory_12);
#line 726
$memory_9 = type_checker_priv::check_special_function($memory_10, $memory_0, $memory_5, $memory_1, $memory_2, $memory_3);
#line 726
undef($memory_10);
#line 726
undef($memory_0);
#line 726
undef($memory_4);
#line 726
undef($memory_5);
#line 726
undef($memory_6);
#line 726
undef($memory_7);
#line 726
undef($memory_8);
#line 726
$_[1] = $memory_1;$_[2] = $memory_2;$_[3] = $memory_3;return $memory_9;
#line 726
undef($memory_9);
#line 726
undef($memory_4);
#line 726
undef($memory_5);
#line 726
undef($memory_6);
#line 726
undef($memory_7);
#line 726
undef($memory_8);
#line 726
undef($memory_0);
#line 726
$_[1] = $memory_1;$_[2] = $memory_2;$_[3] = $memory_3;return;
$_[1] = $memory_1;$_[2] = $memory_2;$_[3] = $memory_3;}

sub type_checker_priv::unary_op_dec_inc($$$$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;$memory_0 = $_[0];$memory_1 = $_[1];$memory_2 = $_[2];Scalar::Util::weaken($_[2]) if ref($_[2]);$memory_3 = $_[3];Scalar::Util::weaken($_[3]) if ref($_[3]);$memory_4 = $_[4];Scalar::Util::weaken($_[4]) if ref($_[4]);
#line 732
$memory_5 = type_checker_priv::check_val($memory_0, $memory_2, $memory_3, $memory_4);
#line 733
$memory_7 = tct::sim();
#line 733
$memory_6 = ptd_system::is_accepted($memory_5, $memory_7, $memory_2, $memory_4);
#line 733
undef($memory_7);
#line 733
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 733
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 733
if (c_rt_lib::check_true($memory_6)) {goto label_14;}
#line 734
$memory_8 = $memory_5->{'type'};
#line 734
$memory_7 = type_checker_priv::get_print_tct_type_name($memory_8);
#line 734
undef($memory_8);
#line 734
$memory_7 = $memory_1 . $memory_7;
#line 734
type_checker_priv::add_error($memory_4, $memory_7);
#line 734
undef($memory_7);
#line 735
goto label_14;
#line 735
label_14:
#line 735
undef($memory_6);
#line 736
$memory_6 = tct::sim();
#line 736
$memory_7 = $memory_6;
#line 736
 if (c_rt_lib::get_hashcount($memory_5) > 1) {$memory_5 = {%{$memory_5}};}$memory_5->{'type'} = $memory_7;
#line 736
undef($memory_6);
#line 736
undef($memory_7);
#line 737
$memory_7 = $memory_4->{'errors'};
#line 737
$memory_6 = array::len($memory_7);
#line 737
undef($memory_7);
#line 738
$memory_7 = type_checker_priv::get_type_left_side_equation($memory_0, $memory_2, $memory_3, $memory_4);
#line 739
$memory_9 = $memory_4->{'errors'};
#line 739
$memory_8 = array::len($memory_9);
#line 739
undef($memory_9);
#line 739
$memory_8 = $memory_8 - $memory_6;
#line 739
$memory_9 = 0;
#line 739
$memory_8 = c_rt_lib::to_nl($memory_8 > $memory_9);
#line 739
undef($memory_9);
#line 739
$memory_8 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 739
if (c_rt_lib::check_true($memory_8)) {goto label_41;}
#line 740
undef($memory_0);
#line 740
undef($memory_1);
#line 740
undef($memory_5);
#line 740
undef($memory_6);
#line 740
undef($memory_8);
#line 740
$_[2] = $memory_2;$_[3] = $memory_3;$_[4] = $memory_4;return $memory_7;
#line 741
goto label_41;
#line 741
label_41:
#line 741
undef($memory_8);
#line 742
$memory_8 = type_checker_priv::set_type_to_lval($memory_0, $memory_7, $memory_5, $memory_2, $memory_3, $memory_4);
#line 742
undef($memory_0);
#line 742
undef($memory_1);
#line 742
undef($memory_5);
#line 742
undef($memory_6);
#line 742
undef($memory_7);
#line 742
$_[2] = $memory_2;$_[3] = $memory_3;$_[4] = $memory_4;return $memory_8;
#line 742
undef($memory_8);
#line 742
undef($memory_5);
#line 742
undef($memory_6);
#line 742
undef($memory_7);
#line 742
undef($memory_0);
#line 742
undef($memory_1);
#line 742
$_[2] = $memory_2;$_[3] = $memory_3;$_[4] = $memory_4;return;
$_[2] = $memory_2;$_[3] = $memory_3;$_[4] = $memory_4;}

sub type_checker_priv::__get_special_functions() {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;
#line 746
$memory_0 = {};
#line 747
$memory_1 = "ptd::ensure";
#line 748
$memory_3 = tct::tct_im();
#line 749
$memory_6 = c_rt_lib::ov_mk_none('none');
#line 749
$memory_7 = tct::tct_im();
#line 749
$memory_8 = "";
#line 749
$memory_5 = {mod => $memory_6,type => $memory_7,name => $memory_8,};
#line 749
undef($memory_6);
#line 749
undef($memory_7);
#line 749
undef($memory_8);
#line 749
$memory_7 = c_rt_lib::ov_mk_none('none');
#line 749
$memory_8 = tct::tct_im();
#line 749
$memory_9 = "";
#line 749
$memory_6 = {mod => $memory_7,type => $memory_8,name => $memory_9,};
#line 749
undef($memory_7);
#line 749
undef($memory_8);
#line 749
undef($memory_9);
#line 749
$memory_4 = [$memory_5,$memory_6];
#line 749
undef($memory_5);
#line 749
undef($memory_6);
#line 749
$memory_2 = {r => $memory_3,a => $memory_4,};
#line 749
undef($memory_3);
#line 749
undef($memory_4);
#line 749
hash::set_value($memory_0, $memory_1, $memory_2);
#line 749
undef($memory_2);
#line 749
undef($memory_1);
#line 751
$memory_1 = "ptd::try_cast";
#line 752
$memory_3 = tct::tct_im();
#line 753
$memory_6 = c_rt_lib::ov_mk_none('none');
#line 753
$memory_7 = tct::tct_im();
#line 753
$memory_8 = "";
#line 753
$memory_5 = {mod => $memory_6,type => $memory_7,name => $memory_8,};
#line 753
undef($memory_6);
#line 753
undef($memory_7);
#line 753
undef($memory_8);
#line 753
$memory_7 = c_rt_lib::ov_mk_none('none');
#line 753
$memory_8 = tct::tct_im();
#line 753
$memory_9 = "";
#line 753
$memory_6 = {mod => $memory_7,type => $memory_8,name => $memory_9,};
#line 753
undef($memory_7);
#line 753
undef($memory_8);
#line 753
undef($memory_9);
#line 753
$memory_4 = [$memory_5,$memory_6];
#line 753
undef($memory_5);
#line 753
undef($memory_6);
#line 753
$memory_2 = {r => $memory_3,a => $memory_4,};
#line 753
undef($memory_3);
#line 753
undef($memory_4);
#line 753
hash::set_value($memory_0, $memory_1, $memory_2);
#line 753
undef($memory_2);
#line 753
undef($memory_1);
#line 755
$memory_1 = "ptd::ensure_only_static_do_not_touch_without_permission";
#line 756
$memory_3 = tct::tct_im();
#line 757
$memory_6 = c_rt_lib::ov_mk_none('none');
#line 757
$memory_7 = tct::tct_im();
#line 757
$memory_8 = "";
#line 757
$memory_5 = {mod => $memory_6,type => $memory_7,name => $memory_8,};
#line 757
undef($memory_6);
#line 757
undef($memory_7);
#line 757
undef($memory_8);
#line 757
$memory_7 = c_rt_lib::ov_mk_none('none');
#line 757
$memory_8 = tct::tct_im();
#line 757
$memory_9 = "";
#line 757
$memory_6 = {mod => $memory_7,type => $memory_8,name => $memory_9,};
#line 757
undef($memory_7);
#line 757
undef($memory_8);
#line 757
undef($memory_9);
#line 757
$memory_4 = [$memory_5,$memory_6];
#line 757
undef($memory_5);
#line 757
undef($memory_6);
#line 757
$memory_2 = {r => $memory_3,a => $memory_4,};
#line 757
undef($memory_3);
#line 757
undef($memory_4);
#line 757
hash::set_value($memory_0, $memory_1, $memory_2);
#line 757
undef($memory_2);
#line 757
undef($memory_1);
#line 759
$memory_1 = "array::push";
#line 760
$memory_3 = tct::void();
#line 762
$memory_6 = c_rt_lib::ov_mk_none('ref');
#line 762
$memory_8 = tct::tct_im();
#line 762
$memory_7 = tct::arr($memory_8);
#line 762
undef($memory_8);
#line 762
$memory_8 = "";
#line 762
$memory_5 = {mod => $memory_6,type => $memory_7,name => $memory_8,};
#line 762
undef($memory_6);
#line 762
undef($memory_7);
#line 762
undef($memory_8);
#line 763
$memory_7 = c_rt_lib::ov_mk_none('none');
#line 763
$memory_8 = tct::tct_im();
#line 763
$memory_9 = "";
#line 763
$memory_6 = {mod => $memory_7,type => $memory_8,name => $memory_9,};
#line 763
undef($memory_7);
#line 763
undef($memory_8);
#line 763
undef($memory_9);
#line 763
$memory_4 = [$memory_5,$memory_6];
#line 763
undef($memory_5);
#line 763
undef($memory_6);
#line 763
$memory_2 = {r => $memory_3,a => $memory_4,};
#line 763
undef($memory_3);
#line 763
undef($memory_4);
#line 763
hash::set_value($memory_0, $memory_1, $memory_2);
#line 763
undef($memory_2);
#line 763
undef($memory_1);
#line 766
$memory_1 = "array::insert";
#line 767
$memory_3 = tct::void();
#line 769
$memory_6 = c_rt_lib::ov_mk_none('ref');
#line 769
$memory_8 = tct::tct_im();
#line 769
$memory_7 = tct::arr($memory_8);
#line 769
undef($memory_8);
#line 769
$memory_8 = "";
#line 769
$memory_5 = {mod => $memory_6,type => $memory_7,name => $memory_8,};
#line 769
undef($memory_6);
#line 769
undef($memory_7);
#line 769
undef($memory_8);
#line 770
$memory_7 = c_rt_lib::ov_mk_none('none');
#line 770
$memory_8 = tct::tct_im();
#line 770
$memory_9 = "";
#line 770
$memory_6 = {mod => $memory_7,type => $memory_8,name => $memory_9,};
#line 770
undef($memory_7);
#line 770
undef($memory_8);
#line 770
undef($memory_9);
#line 771
$memory_8 = c_rt_lib::ov_mk_none('none');
#line 771
$memory_9 = tct::tct_im();
#line 771
$memory_10 = "";
#line 771
$memory_7 = {mod => $memory_8,type => $memory_9,name => $memory_10,};
#line 771
undef($memory_8);
#line 771
undef($memory_9);
#line 771
undef($memory_10);
#line 771
$memory_4 = [$memory_5,$memory_6,$memory_7];
#line 771
undef($memory_5);
#line 771
undef($memory_6);
#line 771
undef($memory_7);
#line 771
$memory_2 = {r => $memory_3,a => $memory_4,};
#line 771
undef($memory_3);
#line 771
undef($memory_4);
#line 771
hash::set_value($memory_0, $memory_1, $memory_2);
#line 771
undef($memory_2);
#line 771
undef($memory_1);
#line 774
$memory_1 = "array::remove";
#line 775
$memory_3 = tct::void();
#line 777
$memory_6 = c_rt_lib::ov_mk_none('ref');
#line 777
$memory_8 = tct::tct_im();
#line 777
$memory_7 = tct::arr($memory_8);
#line 777
undef($memory_8);
#line 777
$memory_8 = "";
#line 777
$memory_5 = {mod => $memory_6,type => $memory_7,name => $memory_8,};
#line 777
undef($memory_6);
#line 777
undef($memory_7);
#line 777
undef($memory_8);
#line 778
$memory_7 = c_rt_lib::ov_mk_none('none');
#line 778
$memory_8 = tct::tct_im();
#line 778
$memory_9 = "";
#line 778
$memory_6 = {mod => $memory_7,type => $memory_8,name => $memory_9,};
#line 778
undef($memory_7);
#line 778
undef($memory_8);
#line 778
undef($memory_9);
#line 778
$memory_4 = [$memory_5,$memory_6];
#line 778
undef($memory_5);
#line 778
undef($memory_6);
#line 778
$memory_2 = {r => $memory_3,a => $memory_4,};
#line 778
undef($memory_3);
#line 778
undef($memory_4);
#line 778
hash::set_value($memory_0, $memory_1, $memory_2);
#line 778
undef($memory_2);
#line 778
undef($memory_1);
#line 783
$memory_1 = "array::subarray";
#line 784
$memory_3 = tct::tct_im();
#line 786
$memory_6 = c_rt_lib::ov_mk_none('none');
#line 786
$memory_8 = tct::tct_im();
#line 786
$memory_7 = tct::arr($memory_8);
#line 786
undef($memory_8);
#line 786
$memory_8 = "";
#line 786
$memory_5 = {mod => $memory_6,type => $memory_7,name => $memory_8,};
#line 786
undef($memory_6);
#line 786
undef($memory_7);
#line 786
undef($memory_8);
#line 787
$memory_7 = c_rt_lib::ov_mk_none('none');
#line 787
$memory_8 = tct::sim();
#line 787
$memory_9 = "";
#line 787
$memory_6 = {mod => $memory_7,type => $memory_8,name => $memory_9,};
#line 787
undef($memory_7);
#line 787
undef($memory_8);
#line 787
undef($memory_9);
#line 788
$memory_8 = c_rt_lib::ov_mk_none('none');
#line 788
$memory_9 = tct::sim();
#line 788
$memory_10 = "";
#line 788
$memory_7 = {mod => $memory_8,type => $memory_9,name => $memory_10,};
#line 788
undef($memory_8);
#line 788
undef($memory_9);
#line 788
undef($memory_10);
#line 788
$memory_4 = [$memory_5,$memory_6,$memory_7];
#line 788
undef($memory_5);
#line 788
undef($memory_6);
#line 788
undef($memory_7);
#line 788
$memory_2 = {r => $memory_3,a => $memory_4,};
#line 788
undef($memory_3);
#line 788
undef($memory_4);
#line 788
hash::set_value($memory_0, $memory_1, $memory_2);
#line 788
undef($memory_2);
#line 788
undef($memory_1);
#line 791
$memory_1 = "array::join";
#line 792
$memory_3 = tct::sim();
#line 794
$memory_6 = c_rt_lib::ov_mk_none('none');
#line 794
$memory_7 = tct::sim();
#line 794
$memory_8 = "";
#line 794
$memory_5 = {mod => $memory_6,type => $memory_7,name => $memory_8,};
#line 794
undef($memory_6);
#line 794
undef($memory_7);
#line 794
undef($memory_8);
#line 795
$memory_7 = c_rt_lib::ov_mk_none('none');
#line 795
$memory_9 = tct::sim();
#line 795
$memory_8 = tct::arr($memory_9);
#line 795
undef($memory_9);
#line 795
$memory_9 = "";
#line 795
$memory_6 = {mod => $memory_7,type => $memory_8,name => $memory_9,};
#line 795
undef($memory_7);
#line 795
undef($memory_8);
#line 795
undef($memory_9);
#line 795
$memory_4 = [$memory_5,$memory_6];
#line 795
undef($memory_5);
#line 795
undef($memory_6);
#line 795
$memory_2 = {r => $memory_3,a => $memory_4,};
#line 795
undef($memory_3);
#line 795
undef($memory_4);
#line 795
hash::set_value($memory_0, $memory_1, $memory_2);
#line 795
undef($memory_2);
#line 795
undef($memory_1);
#line 798
$memory_1 = "array::append";
#line 799
$memory_3 = tct::void();
#line 801
$memory_6 = c_rt_lib::ov_mk_none('ref');
#line 801
$memory_8 = tct::tct_im();
#line 801
$memory_7 = tct::arr($memory_8);
#line 801
undef($memory_8);
#line 801
$memory_8 = "";
#line 801
$memory_5 = {mod => $memory_6,type => $memory_7,name => $memory_8,};
#line 801
undef($memory_6);
#line 801
undef($memory_7);
#line 801
undef($memory_8);
#line 802
$memory_7 = c_rt_lib::ov_mk_none('none');
#line 802
$memory_9 = tct::tct_im();
#line 802
$memory_8 = tct::arr($memory_9);
#line 802
undef($memory_9);
#line 802
$memory_9 = "";
#line 802
$memory_6 = {mod => $memory_7,type => $memory_8,name => $memory_9,};
#line 802
undef($memory_7);
#line 802
undef($memory_8);
#line 802
undef($memory_9);
#line 802
$memory_4 = [$memory_5,$memory_6];
#line 802
undef($memory_5);
#line 802
undef($memory_6);
#line 802
$memory_2 = {r => $memory_3,a => $memory_4,};
#line 802
undef($memory_3);
#line 802
undef($memory_4);
#line 802
hash::set_value($memory_0, $memory_1, $memory_2);
#line 802
undef($memory_2);
#line 802
undef($memory_1);
#line 805
$memory_1 = "array::len";
#line 806
$memory_3 = tct::sim();
#line 807
$memory_6 = c_rt_lib::ov_mk_none('none');
#line 807
$memory_8 = tct::tct_im();
#line 807
$memory_7 = tct::arr($memory_8);
#line 807
undef($memory_8);
#line 807
$memory_8 = "";
#line 807
$memory_5 = {mod => $memory_6,type => $memory_7,name => $memory_8,};
#line 807
undef($memory_6);
#line 807
undef($memory_7);
#line 807
undef($memory_8);
#line 807
$memory_4 = [$memory_5];
#line 807
undef($memory_5);
#line 807
$memory_2 = {r => $memory_3,a => $memory_4,};
#line 807
undef($memory_3);
#line 807
undef($memory_4);
#line 807
hash::set_value($memory_0, $memory_1, $memory_2);
#line 807
undef($memory_2);
#line 807
undef($memory_1);
#line 809
$memory_1 = "array::sort";
#line 810
$memory_3 = tct::void();
#line 811
$memory_6 = c_rt_lib::ov_mk_none('ref');
#line 811
$memory_8 = tct::sim();
#line 811
$memory_7 = tct::arr($memory_8);
#line 811
undef($memory_8);
#line 811
$memory_8 = "";
#line 811
$memory_5 = {mod => $memory_6,type => $memory_7,name => $memory_8,};
#line 811
undef($memory_6);
#line 811
undef($memory_7);
#line 811
undef($memory_8);
#line 811
$memory_4 = [$memory_5];
#line 811
undef($memory_5);
#line 811
$memory_2 = {r => $memory_3,a => $memory_4,};
#line 811
undef($memory_3);
#line 811
undef($memory_4);
#line 811
hash::set_value($memory_0, $memory_1, $memory_2);
#line 811
undef($memory_2);
#line 811
undef($memory_1);
#line 813
$memory_1 = "array::pop";
#line 814
$memory_3 = tct::void();
#line 815
$memory_6 = c_rt_lib::ov_mk_none('ref');
#line 815
$memory_8 = tct::tct_im();
#line 815
$memory_7 = tct::arr($memory_8);
#line 815
undef($memory_8);
#line 815
$memory_8 = "";
#line 815
$memory_5 = {mod => $memory_6,type => $memory_7,name => $memory_8,};
#line 815
undef($memory_6);
#line 815
undef($memory_7);
#line 815
undef($memory_8);
#line 815
$memory_4 = [$memory_5];
#line 815
undef($memory_5);
#line 815
$memory_2 = {r => $memory_3,a => $memory_4,};
#line 815
undef($memory_3);
#line 815
undef($memory_4);
#line 815
hash::set_value($memory_0, $memory_1, $memory_2);
#line 815
undef($memory_2);
#line 815
undef($memory_1);
#line 817
$memory_1 = "hash::set_value";
#line 818
$memory_3 = tct::void();
#line 820
$memory_6 = c_rt_lib::ov_mk_none('ref');
#line 820
$memory_8 = tct::tct_im();
#line 820
$memory_7 = tct::hash($memory_8);
#line 820
undef($memory_8);
#line 820
$memory_8 = "";
#line 820
$memory_5 = {mod => $memory_6,type => $memory_7,name => $memory_8,};
#line 820
undef($memory_6);
#line 820
undef($memory_7);
#line 820
undef($memory_8);
#line 821
$memory_7 = c_rt_lib::ov_mk_none('none');
#line 821
$memory_8 = tct::sim();
#line 821
$memory_9 = "";
#line 821
$memory_6 = {mod => $memory_7,type => $memory_8,name => $memory_9,};
#line 821
undef($memory_7);
#line 821
undef($memory_8);
#line 821
undef($memory_9);
#line 822
$memory_8 = c_rt_lib::ov_mk_none('none');
#line 822
$memory_9 = tct::tct_im();
#line 822
$memory_10 = "";
#line 822
$memory_7 = {mod => $memory_8,type => $memory_9,name => $memory_10,};
#line 822
undef($memory_8);
#line 822
undef($memory_9);
#line 822
undef($memory_10);
#line 822
$memory_4 = [$memory_5,$memory_6,$memory_7];
#line 822
undef($memory_5);
#line 822
undef($memory_6);
#line 822
undef($memory_7);
#line 822
$memory_2 = {r => $memory_3,a => $memory_4,};
#line 822
undef($memory_3);
#line 822
undef($memory_4);
#line 822
hash::set_value($memory_0, $memory_1, $memory_2);
#line 822
undef($memory_2);
#line 822
undef($memory_1);
#line 825
$memory_1 = "hash::get_value";
#line 826
$memory_3 = tct::tct_im();
#line 828
$memory_6 = c_rt_lib::ov_mk_none('none');
#line 828
$memory_8 = tct::tct_im();
#line 828
$memory_7 = tct::hash($memory_8);
#line 828
undef($memory_8);
#line 828
$memory_8 = "";
#line 828
$memory_5 = {mod => $memory_6,type => $memory_7,name => $memory_8,};
#line 828
undef($memory_6);
#line 828
undef($memory_7);
#line 828
undef($memory_8);
#line 829
$memory_7 = c_rt_lib::ov_mk_none('none');
#line 829
$memory_8 = tct::sim();
#line 829
$memory_9 = "";
#line 829
$memory_6 = {mod => $memory_7,type => $memory_8,name => $memory_9,};
#line 829
undef($memory_7);
#line 829
undef($memory_8);
#line 829
undef($memory_9);
#line 829
$memory_4 = [$memory_5,$memory_6];
#line 829
undef($memory_5);
#line 829
undef($memory_6);
#line 829
$memory_2 = {r => $memory_3,a => $memory_4,};
#line 829
undef($memory_3);
#line 829
undef($memory_4);
#line 829
hash::set_value($memory_0, $memory_1, $memory_2);
#line 829
undef($memory_2);
#line 829
undef($memory_1);
#line 832
$memory_1 = "hash::has_key";
#line 833
$memory_3 = tct::bool();
#line 835
$memory_6 = c_rt_lib::ov_mk_none('none');
#line 835
$memory_8 = tct::tct_im();
#line 835
$memory_7 = tct::hash($memory_8);
#line 835
undef($memory_8);
#line 835
$memory_8 = "";
#line 835
$memory_5 = {mod => $memory_6,type => $memory_7,name => $memory_8,};
#line 835
undef($memory_6);
#line 835
undef($memory_7);
#line 835
undef($memory_8);
#line 836
$memory_7 = c_rt_lib::ov_mk_none('none');
#line 836
$memory_8 = tct::sim();
#line 836
$memory_9 = "";
#line 836
$memory_6 = {mod => $memory_7,type => $memory_8,name => $memory_9,};
#line 836
undef($memory_7);
#line 836
undef($memory_8);
#line 836
undef($memory_9);
#line 836
$memory_4 = [$memory_5,$memory_6];
#line 836
undef($memory_5);
#line 836
undef($memory_6);
#line 836
$memory_2 = {r => $memory_3,a => $memory_4,};
#line 836
undef($memory_3);
#line 836
undef($memory_4);
#line 836
hash::set_value($memory_0, $memory_1, $memory_2);
#line 836
undef($memory_2);
#line 836
undef($memory_1);
#line 839
$memory_1 = "hash::delete";
#line 840
$memory_3 = tct::void();
#line 842
$memory_6 = c_rt_lib::ov_mk_none('ref');
#line 842
$memory_8 = tct::tct_im();
#line 842
$memory_7 = tct::hash($memory_8);
#line 842
undef($memory_8);
#line 842
$memory_8 = "";
#line 842
$memory_5 = {mod => $memory_6,type => $memory_7,name => $memory_8,};
#line 842
undef($memory_6);
#line 842
undef($memory_7);
#line 842
undef($memory_8);
#line 843
$memory_7 = c_rt_lib::ov_mk_none('none');
#line 843
$memory_8 = tct::sim();
#line 843
$memory_9 = "";
#line 843
$memory_6 = {mod => $memory_7,type => $memory_8,name => $memory_9,};
#line 843
undef($memory_7);
#line 843
undef($memory_8);
#line 843
undef($memory_9);
#line 843
$memory_4 = [$memory_5,$memory_6];
#line 843
undef($memory_5);
#line 843
undef($memory_6);
#line 843
$memory_2 = {r => $memory_3,a => $memory_4,};
#line 843
undef($memory_3);
#line 843
undef($memory_4);
#line 843
hash::set_value($memory_0, $memory_1, $memory_2);
#line 843
undef($memory_2);
#line 843
undef($memory_1);
#line 846
$memory_1 = "hash::size";
#line 847
$memory_3 = tct::sim();
#line 848
$memory_6 = c_rt_lib::ov_mk_none('none');
#line 848
$memory_8 = tct::tct_im();
#line 848
$memory_7 = tct::hash($memory_8);
#line 848
undef($memory_8);
#line 848
$memory_8 = "";
#line 848
$memory_5 = {mod => $memory_6,type => $memory_7,name => $memory_8,};
#line 848
undef($memory_6);
#line 848
undef($memory_7);
#line 848
undef($memory_8);
#line 848
$memory_4 = [$memory_5];
#line 848
undef($memory_5);
#line 848
$memory_2 = {r => $memory_3,a => $memory_4,};
#line 848
undef($memory_3);
#line 848
undef($memory_4);
#line 848
hash::set_value($memory_0, $memory_1, $memory_2);
#line 848
undef($memory_2);
#line 848
undef($memory_1);
#line 850
$memory_1 = "hash::values";
#line 851
$memory_4 = tct::tct_im();
#line 851
$memory_3 = tct::arr($memory_4);
#line 851
undef($memory_4);
#line 852
$memory_6 = c_rt_lib::ov_mk_none('none');
#line 852
$memory_8 = tct::tct_im();
#line 852
$memory_7 = tct::hash($memory_8);
#line 852
undef($memory_8);
#line 852
$memory_8 = "";
#line 852
$memory_5 = {mod => $memory_6,type => $memory_7,name => $memory_8,};
#line 852
undef($memory_6);
#line 852
undef($memory_7);
#line 852
undef($memory_8);
#line 852
$memory_4 = [$memory_5];
#line 852
undef($memory_5);
#line 852
$memory_2 = {r => $memory_3,a => $memory_4,};
#line 852
undef($memory_3);
#line 852
undef($memory_4);
#line 852
hash::set_value($memory_0, $memory_1, $memory_2);
#line 852
undef($memory_2);
#line 852
undef($memory_1);
#line 854
$memory_1 = "hash::keys";
#line 855
$memory_4 = tct::sim();
#line 855
$memory_3 = tct::arr($memory_4);
#line 855
undef($memory_4);
#line 856
$memory_6 = c_rt_lib::ov_mk_none('none');
#line 856
$memory_8 = tct::tct_im();
#line 856
$memory_7 = tct::hash($memory_8);
#line 856
undef($memory_8);
#line 856
$memory_8 = "";
#line 856
$memory_5 = {mod => $memory_6,type => $memory_7,name => $memory_8,};
#line 856
undef($memory_6);
#line 856
undef($memory_7);
#line 856
undef($memory_8);
#line 856
$memory_4 = [$memory_5];
#line 856
undef($memory_5);
#line 856
$memory_2 = {r => $memory_3,a => $memory_4,};
#line 856
undef($memory_3);
#line 856
undef($memory_4);
#line 856
hash::set_value($memory_0, $memory_1, $memory_2);
#line 856
undef($memory_2);
#line 856
undef($memory_1);
#line 858
$memory_1 = "hash::add_all";
#line 859
$memory_3 = tct::void();
#line 861
$memory_6 = c_rt_lib::ov_mk_none('ref');
#line 861
$memory_8 = tct::tct_im();
#line 861
$memory_7 = tct::hash($memory_8);
#line 861
undef($memory_8);
#line 861
$memory_8 = "";
#line 861
$memory_5 = {mod => $memory_6,type => $memory_7,name => $memory_8,};
#line 861
undef($memory_6);
#line 861
undef($memory_7);
#line 861
undef($memory_8);
#line 862
$memory_7 = c_rt_lib::ov_mk_none('none');
#line 862
$memory_9 = tct::tct_im();
#line 862
$memory_8 = tct::hash($memory_9);
#line 862
undef($memory_9);
#line 862
$memory_9 = "";
#line 862
$memory_6 = {mod => $memory_7,type => $memory_8,name => $memory_9,};
#line 862
undef($memory_7);
#line 862
undef($memory_8);
#line 862
undef($memory_9);
#line 862
$memory_4 = [$memory_5,$memory_6];
#line 862
undef($memory_5);
#line 862
undef($memory_6);
#line 862
$memory_2 = {r => $memory_3,a => $memory_4,};
#line 862
undef($memory_3);
#line 862
undef($memory_4);
#line 862
hash::set_value($memory_0, $memory_1, $memory_2);
#line 862
undef($memory_2);
#line 862
undef($memory_1);
#line 865
$memory_1 = "ov::is";
#line 866
$memory_3 = tct::bool();
#line 867
$memory_6 = c_rt_lib::ov_mk_none('none');
#line 867
$memory_8 = {};
#line 867
$memory_7 = tct::var($memory_8);
#line 867
undef($memory_8);
#line 867
$memory_8 = "";
#line 867
$memory_5 = {mod => $memory_6,type => $memory_7,name => $memory_8,};
#line 867
undef($memory_6);
#line 867
undef($memory_7);
#line 867
undef($memory_8);
#line 867
$memory_7 = c_rt_lib::ov_mk_none('none');
#line 867
$memory_8 = tct::sim();
#line 867
$memory_9 = "";
#line 867
$memory_6 = {mod => $memory_7,type => $memory_8,name => $memory_9,};
#line 867
undef($memory_7);
#line 867
undef($memory_8);
#line 867
undef($memory_9);
#line 867
$memory_4 = [$memory_5,$memory_6];
#line 867
undef($memory_5);
#line 867
undef($memory_6);
#line 867
$memory_2 = {r => $memory_3,a => $memory_4,};
#line 867
undef($memory_3);
#line 867
undef($memory_4);
#line 867
hash::set_value($memory_0, $memory_1, $memory_2);
#line 867
undef($memory_2);
#line 867
undef($memory_1);
#line 869
$memory_1 = "ov::as";
#line 870
$memory_3 = tct::tct_im();
#line 871
$memory_6 = c_rt_lib::ov_mk_none('none');
#line 871
$memory_8 = {};
#line 871
$memory_7 = tct::var($memory_8);
#line 871
undef($memory_8);
#line 871
$memory_8 = "";
#line 871
$memory_5 = {mod => $memory_6,type => $memory_7,name => $memory_8,};
#line 871
undef($memory_6);
#line 871
undef($memory_7);
#line 871
undef($memory_8);
#line 871
$memory_7 = c_rt_lib::ov_mk_none('none');
#line 871
$memory_8 = tct::sim();
#line 871
$memory_9 = "";
#line 871
$memory_6 = {mod => $memory_7,type => $memory_8,name => $memory_9,};
#line 871
undef($memory_7);
#line 871
undef($memory_8);
#line 871
undef($memory_9);
#line 871
$memory_4 = [$memory_5,$memory_6];
#line 871
undef($memory_5);
#line 871
undef($memory_6);
#line 871
$memory_2 = {r => $memory_3,a => $memory_4,};
#line 871
undef($memory_3);
#line 871
undef($memory_4);
#line 871
hash::set_value($memory_0, $memory_1, $memory_2);
#line 871
undef($memory_2);
#line 871
undef($memory_1);
#line 873
$memory_1 = "dfile::ssave";
#line 873
$memory_3 = tct::sim();
#line 873
$memory_6 = c_rt_lib::ov_mk_none('none');
#line 873
$memory_7 = tct::tct_im();
#line 873
$memory_8 = "";
#line 873
$memory_5 = {mod => $memory_6,type => $memory_7,name => $memory_8,};
#line 873
undef($memory_6);
#line 873
undef($memory_7);
#line 873
undef($memory_8);
#line 873
$memory_4 = [$memory_5];
#line 873
undef($memory_5);
#line 873
$memory_2 = {r => $memory_3,a => $memory_4,};
#line 873
undef($memory_3);
#line 873
undef($memory_4);
#line 873
hash::set_value($memory_0, $memory_1, $memory_2);
#line 873
undef($memory_2);
#line 873
undef($memory_1);
#line 874
$memory_1 = "string::lf";
#line 874
$memory_3 = tct::sim();
#line 874
$memory_4 = [];
#line 874
$memory_2 = {r => $memory_3,a => $memory_4,};
#line 874
undef($memory_3);
#line 874
undef($memory_4);
#line 874
hash::set_value($memory_0, $memory_1, $memory_2);
#line 874
undef($memory_2);
#line 874
undef($memory_1);
#line 875
$memory_1 = "string::length";
#line 875
$memory_3 = tct::sim();
#line 875
$memory_6 = c_rt_lib::ov_mk_none('none');
#line 875
$memory_7 = tct::sim();
#line 875
$memory_8 = "";
#line 875
$memory_5 = {mod => $memory_6,type => $memory_7,name => $memory_8,};
#line 875
undef($memory_6);
#line 875
undef($memory_7);
#line 875
undef($memory_8);
#line 875
$memory_4 = [$memory_5];
#line 875
undef($memory_5);
#line 875
$memory_2 = {r => $memory_3,a => $memory_4,};
#line 875
undef($memory_3);
#line 875
undef($memory_4);
#line 875
hash::set_value($memory_0, $memory_1, $memory_2);
#line 875
undef($memory_2);
#line 875
undef($memory_1);
#line 876
$memory_1 = "string::substr";
#line 877
$memory_3 = tct::sim();
#line 879
$memory_6 = c_rt_lib::ov_mk_none('none');
#line 879
$memory_7 = tct::sim();
#line 879
$memory_8 = "";
#line 879
$memory_5 = {mod => $memory_6,type => $memory_7,name => $memory_8,};
#line 879
undef($memory_6);
#line 879
undef($memory_7);
#line 879
undef($memory_8);
#line 880
$memory_7 = c_rt_lib::ov_mk_none('none');
#line 880
$memory_8 = tct::sim();
#line 880
$memory_9 = "";
#line 880
$memory_6 = {mod => $memory_7,type => $memory_8,name => $memory_9,};
#line 880
undef($memory_7);
#line 880
undef($memory_8);
#line 880
undef($memory_9);
#line 881
$memory_8 = c_rt_lib::ov_mk_none('none');
#line 881
$memory_9 = tct::sim();
#line 881
$memory_10 = "";
#line 881
$memory_7 = {mod => $memory_8,type => $memory_9,name => $memory_10,};
#line 881
undef($memory_8);
#line 881
undef($memory_9);
#line 881
undef($memory_10);
#line 881
$memory_4 = [$memory_5,$memory_6,$memory_7];
#line 881
undef($memory_5);
#line 881
undef($memory_6);
#line 881
undef($memory_7);
#line 881
$memory_2 = {r => $memory_3,a => $memory_4,};
#line 881
undef($memory_3);
#line 881
undef($memory_4);
#line 881
hash::set_value($memory_0, $memory_1, $memory_2);
#line 881
undef($memory_2);
#line 881
undef($memory_1);
#line 884
$memory_1 = "string::replace";
#line 885
$memory_3 = tct::sim();
#line 887
$memory_6 = c_rt_lib::ov_mk_none('none');
#line 887
$memory_7 = tct::sim();
#line 887
$memory_8 = "";
#line 887
$memory_5 = {mod => $memory_6,type => $memory_7,name => $memory_8,};
#line 887
undef($memory_6);
#line 887
undef($memory_7);
#line 887
undef($memory_8);
#line 888
$memory_7 = c_rt_lib::ov_mk_none('none');
#line 888
$memory_8 = tct::sim();
#line 888
$memory_9 = "";
#line 888
$memory_6 = {mod => $memory_7,type => $memory_8,name => $memory_9,};
#line 888
undef($memory_7);
#line 888
undef($memory_8);
#line 888
undef($memory_9);
#line 889
$memory_8 = c_rt_lib::ov_mk_none('none');
#line 889
$memory_9 = tct::sim();
#line 889
$memory_10 = "";
#line 889
$memory_7 = {mod => $memory_8,type => $memory_9,name => $memory_10,};
#line 889
undef($memory_8);
#line 889
undef($memory_9);
#line 889
undef($memory_10);
#line 889
$memory_4 = [$memory_5,$memory_6,$memory_7];
#line 889
undef($memory_5);
#line 889
undef($memory_6);
#line 889
undef($memory_7);
#line 889
$memory_2 = {r => $memory_3,a => $memory_4,};
#line 889
undef($memory_3);
#line 889
undef($memory_4);
#line 889
hash::set_value($memory_0, $memory_1, $memory_2);
#line 889
undef($memory_2);
#line 889
undef($memory_1);
#line 892
$memory_1 = "string::chr";
#line 892
$memory_3 = tct::sim();
#line 892
$memory_6 = c_rt_lib::ov_mk_none('none');
#line 892
$memory_7 = tct::sim();
#line 892
$memory_8 = "";
#line 892
$memory_5 = {mod => $memory_6,type => $memory_7,name => $memory_8,};
#line 892
undef($memory_6);
#line 892
undef($memory_7);
#line 892
undef($memory_8);
#line 892
$memory_4 = [$memory_5];
#line 892
undef($memory_5);
#line 892
$memory_2 = {r => $memory_3,a => $memory_4,};
#line 892
undef($memory_3);
#line 892
undef($memory_4);
#line 892
hash::set_value($memory_0, $memory_1, $memory_2);
#line 892
undef($memory_2);
#line 892
undef($memory_1);
#line 893
$memory_1 = "string::ord";
#line 893
$memory_3 = tct::sim();
#line 893
$memory_6 = c_rt_lib::ov_mk_none('none');
#line 893
$memory_7 = tct::sim();
#line 893
$memory_8 = "";
#line 893
$memory_5 = {mod => $memory_6,type => $memory_7,name => $memory_8,};
#line 893
undef($memory_6);
#line 893
undef($memory_7);
#line 893
undef($memory_8);
#line 893
$memory_4 = [$memory_5];
#line 893
undef($memory_5);
#line 893
$memory_2 = {r => $memory_3,a => $memory_4,};
#line 893
undef($memory_3);
#line 893
undef($memory_4);
#line 893
hash::set_value($memory_0, $memory_1, $memory_2);
#line 893
undef($memory_2);
#line 893
undef($memory_1);
#line 894
$memory_1 = "string::split";
#line 895
$memory_4 = tct::sim();
#line 895
$memory_3 = tct::arr($memory_4);
#line 895
undef($memory_4);
#line 896
$memory_6 = c_rt_lib::ov_mk_none('none');
#line 896
$memory_7 = tct::sim();
#line 896
$memory_8 = "";
#line 896
$memory_5 = {mod => $memory_6,type => $memory_7,name => $memory_8,};
#line 896
undef($memory_6);
#line 896
undef($memory_7);
#line 896
undef($memory_8);
#line 896
$memory_7 = c_rt_lib::ov_mk_none('none');
#line 896
$memory_8 = tct::sim();
#line 896
$memory_9 = "";
#line 896
$memory_6 = {mod => $memory_7,type => $memory_8,name => $memory_9,};
#line 896
undef($memory_7);
#line 896
undef($memory_8);
#line 896
undef($memory_9);
#line 896
$memory_4 = [$memory_5,$memory_6];
#line 896
undef($memory_5);
#line 896
undef($memory_6);
#line 896
$memory_2 = {r => $memory_3,a => $memory_4,};
#line 896
undef($memory_3);
#line 896
undef($memory_4);
#line 896
hash::set_value($memory_0, $memory_1, $memory_2);
#line 896
undef($memory_2);
#line 896
undef($memory_1);
#line 898
$memory_1 = "c_std_lib::fast_substr";
#line 899
$memory_3 = tct::sim();
#line 901
$memory_6 = c_rt_lib::ov_mk_none('none');
#line 901
$memory_7 = tct::tct_im();
#line 901
$memory_8 = "";
#line 901
$memory_5 = {mod => $memory_6,type => $memory_7,name => $memory_8,};
#line 901
undef($memory_6);
#line 901
undef($memory_7);
#line 901
undef($memory_8);
#line 902
$memory_7 = c_rt_lib::ov_mk_none('none');
#line 902
$memory_8 = tct::tct_im();
#line 902
$memory_9 = "";
#line 902
$memory_6 = {mod => $memory_7,type => $memory_8,name => $memory_9,};
#line 902
undef($memory_7);
#line 902
undef($memory_8);
#line 902
undef($memory_9);
#line 903
$memory_8 = c_rt_lib::ov_mk_none('none');
#line 903
$memory_9 = tct::tct_im();
#line 903
$memory_10 = "";
#line 903
$memory_7 = {mod => $memory_8,type => $memory_9,name => $memory_10,};
#line 903
undef($memory_8);
#line 903
undef($memory_9);
#line 903
undef($memory_10);
#line 903
$memory_4 = [$memory_5,$memory_6,$memory_7];
#line 903
undef($memory_5);
#line 903
undef($memory_6);
#line 903
undef($memory_7);
#line 903
$memory_2 = {r => $memory_3,a => $memory_4,};
#line 903
undef($memory_3);
#line 903
undef($memory_4);
#line 903
hash::set_value($memory_0, $memory_1, $memory_2);
#line 903
undef($memory_2);
#line 903
undef($memory_1);
#line 906
$memory_1 = "c_singleton::sigleton_do_not_use_without_approval";
#line 907
$memory_3 = tct::tct_im();
#line 908
$memory_6 = c_rt_lib::ov_mk_none('none');
#line 908
$memory_7 = tct::tct_im();
#line 908
$memory_8 = "";
#line 908
$memory_5 = {mod => $memory_6,type => $memory_7,name => $memory_8,};
#line 908
undef($memory_6);
#line 908
undef($memory_7);
#line 908
undef($memory_8);
#line 908
$memory_4 = [$memory_5];
#line 908
undef($memory_5);
#line 908
$memory_2 = {r => $memory_3,a => $memory_4,};
#line 908
undef($memory_3);
#line 908
undef($memory_4);
#line 908
hash::set_value($memory_0, $memory_1, $memory_2);
#line 908
undef($memory_2);
#line 908
undef($memory_1);
#line 910
$memory_1 = singleton::sigleton_do_not_use_without_approval($memory_0);
#line 910
undef($memory_0);
#line 910
return $memory_1;
#line 910
undef($memory_1);
#line 910
undef($memory_0);
#line 910
return;
}

my $_get_special_functions;
sub type_checker_priv::get_special_functions() {
	$_get_special_functions = type_checker_priv::__get_special_functions() unless defined $_get_special_functions;
	return $_get_special_functions;
}

sub type_checker_priv::get_special_function_def($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;$memory_0 = $_[0];$memory_1 = $_[1];
#line 914
$memory_2 = type_checker_priv::get_special_functions();
#line 916
$memory_5 = nast::empty_debug();
#line 916
$memory_6 = c_rt_lib::ov_mk_none('nop');
#line 916
$memory_4 = {debug => $memory_5,cmd => $memory_6,};
#line 916
undef($memory_5);
#line 916
undef($memory_6);
#line 917
$memory_5 = c_rt_lib::ov_mk_none('no');
#line 918
$memory_6 = c_rt_lib::ov_mk_none('no');
#line 921
$memory_7 = c_rt_lib::ov_mk_none('pub');
#line 922
$memory_8 = [];
#line 923
$memory_9 = tct::empty();
#line 923
$memory_3 = {cmd => $memory_4,is_type => $memory_5,ref_types => $memory_6,name => $memory_1,module => $memory_0,access => $memory_7,args => $memory_8,ret_type => $memory_9,};
#line 923
undef($memory_4);
#line 923
undef($memory_5);
#line 923
undef($memory_6);
#line 923
undef($memory_7);
#line 923
undef($memory_8);
#line 923
undef($memory_9);
#line 925
$memory_4 = type_checker_priv::get_function_name($memory_0, $memory_1);
#line 925
$memory_1 = $memory_4;
#line 925
undef($memory_4);
#line 926
$memory_4 = hash::has_key($memory_2, $memory_1);
#line 926
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 926
if (c_rt_lib::check_true($memory_4)) {goto label_37;}
#line 927
$memory_5 = hash::get_value($memory_2, $memory_1);
#line 928
$memory_6 = $memory_5->{'a'};
#line 928
$memory_7 = $memory_6;
#line 928
 if (c_rt_lib::get_hashcount($memory_3) > 1) {$memory_3 = {%{$memory_3}};}$memory_3->{'args'} = $memory_7;
#line 928
undef($memory_6);
#line 928
undef($memory_7);
#line 929
$memory_6 = $memory_5->{'r'};
#line 929
$memory_7 = $memory_6;
#line 929
 if (c_rt_lib::get_hashcount($memory_3) > 1) {$memory_3 = {%{$memory_3}};}$memory_3->{'ret_type'} = $memory_7;
#line 929
undef($memory_6);
#line 929
undef($memory_7);
#line 929
undef($memory_5);
#line 930
goto label_44;
#line 930
label_37:
#line 931
$memory_5 = c_rt_lib::ov_mk_none('priv');
#line 931
$memory_6 = $memory_5;
#line 931
 if (c_rt_lib::get_hashcount($memory_3) > 1) {$memory_3 = {%{$memory_3}};}$memory_3->{'access'} = $memory_6;
#line 931
undef($memory_5);
#line 931
undef($memory_6);
#line 932
goto label_44;
#line 932
label_44:
#line 932
undef($memory_4);
#line 933
undef($memory_0);
#line 933
undef($memory_1);
#line 933
undef($memory_2);
#line 933
return $memory_3;
#line 933
undef($memory_2);
#line 933
undef($memory_3);
#line 933
undef($memory_0);
#line 933
undef($memory_1);
#line 933
return;
}

sub type_checker_priv::check_special_function($$$$$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;my $memory_13;my $memory_14;my $memory_15;my $memory_16;my $memory_17;my $memory_18;$memory_0 = $_[0];$memory_1 = $_[1];$memory_2 = $_[2];$memory_3 = $_[3];Scalar::Util::weaken($_[3]) if ref($_[3]);$memory_4 = $_[4];Scalar::Util::weaken($_[4]) if ref($_[4]);$memory_5 = $_[5];Scalar::Util::weaken($_[5]) if ref($_[5]);
#line 939
$memory_7 = $memory_1->{'module'};
#line 939
$memory_8 = $memory_1->{'name'};
#line 939
$memory_6 = type_checker_priv::get_function_name($memory_7, $memory_8);
#line 939
undef($memory_8);
#line 939
undef($memory_7);
#line 940
$memory_7 = "ptd::ensure";
#line 940
$memory_7 = c_rt_lib::to_nl($memory_6 eq $memory_7);
#line 940
if (c_rt_lib::check_true($memory_7)) {goto label_10;}
#line 940
$memory_7 = "ptd::ensure_only_static_do_not_touch_without_permission";
#line 940
$memory_7 = c_rt_lib::to_nl($memory_6 eq $memory_7);
#line 940
label_10:
#line 940
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 940
if (c_rt_lib::check_true($memory_7)) {goto label_68;}
#line 941
$memory_9 = $memory_1->{'args'};
#line 941
$memory_10 = 0;
#line 941
$memory_9 = $memory_9->[$memory_10];
#line 941
undef($memory_10);
#line 941
$memory_9 = $memory_9->{'val'};
#line 941
$memory_8 = ptd_parser::try_value_to_ptd($memory_9);
#line 941
undef($memory_9);
#line 941
$memory_9 = c_rt_lib::ov_is($memory_8, 'err');
#line 941
if (c_rt_lib::check_true($memory_9)) {goto label_27;}
#line 944
$memory_9 = c_rt_lib::ov_is($memory_8, 'ok');
#line 944
if (c_rt_lib::check_true($memory_9)) {goto label_37;}
#line 944
$memory_9 = "NOMATCHALERT";
#line 944
$memory_9 = [$memory_9,$memory_8];
#line 944
die(dfile::ssave($memory_9));
#line 941
label_27:
#line 941
$memory_10 = c_rt_lib::ov_as($memory_8, 'err');
#line 942
type_checker_priv::add_error($memory_5, $memory_10);
#line 943
$memory_11 = tct::tct_im();
#line 943
$memory_12 = $memory_11;
#line 943
 if (c_rt_lib::get_hashcount($memory_0) > 1) {$memory_0 = {%{$memory_0}};}$memory_0->{'type'} = $memory_12;
#line 943
undef($memory_11);
#line 943
undef($memory_12);
#line 943
undef($memory_10);
#line 944
goto label_64;
#line 944
label_37:
#line 944
$memory_10 = c_rt_lib::ov_as($memory_8, 'ok');
#line 945
$memory_13 = 1;
#line 945
$memory_12 = $memory_2->[$memory_13];
#line 945
undef($memory_13);
#line 945
$memory_11 = ptd_system::cast_type($memory_10, $memory_12, $memory_3, $memory_5);
#line 945
undef($memory_12);
#line 946
$memory_12 = $memory_11;
#line 946
$memory_12 = c_rt_lib::ov_is($memory_12, 'err');
#line 946
$memory_12 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_12));
#line 946
if (c_rt_lib::check_true($memory_12)) {goto label_55;}
#line 947
$memory_13 = "this casting of type cannot be correct: ";
#line 947
$memory_14 = type_checker_priv::get_print_check_info($memory_11);
#line 947
$memory_13 = $memory_13 . $memory_14;
#line 947
undef($memory_14);
#line 947
type_checker_priv::add_error($memory_5, $memory_13);
#line 947
undef($memory_13);
#line 948
goto label_55;
#line 948
label_55:
#line 948
undef($memory_12);
#line 949
$memory_12 = $memory_10;
#line 949
 if (c_rt_lib::get_hashcount($memory_0) > 1) {$memory_0 = {%{$memory_0}};}$memory_0->{'type'} = $memory_12;
#line 949
undef($memory_12);
#line 950
type_checker_priv::check_types_imported($memory_10, $memory_3, $memory_5);
#line 950
undef($memory_11);
#line 950
undef($memory_10);
#line 951
goto label_64;
#line 951
label_64:
#line 951
undef($memory_8);
#line 951
undef($memory_9);
#line 952
goto label_68;
#line 952
label_68:
#line 952
undef($memory_7);
#line 953
$memory_7 = "ptd::try_cast";
#line 953
$memory_7 = c_rt_lib::to_nl($memory_6 eq $memory_7);
#line 953
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 953
if (c_rt_lib::check_true($memory_7)) {goto label_157;}
#line 954
$memory_9 = $memory_1->{'args'};
#line 954
$memory_10 = 0;
#line 954
$memory_9 = $memory_9->[$memory_10];
#line 954
undef($memory_10);
#line 954
$memory_9 = $memory_9->{'val'};
#line 954
$memory_8 = ptd_parser::try_value_to_ptd($memory_9);
#line 954
undef($memory_9);
#line 954
$memory_9 = c_rt_lib::ov_is($memory_8, 'err');
#line 954
if (c_rt_lib::check_true($memory_9)) {goto label_88;}
#line 957
$memory_9 = c_rt_lib::ov_is($memory_8, 'ok');
#line 957
if (c_rt_lib::check_true($memory_9)) {goto label_98;}
#line 957
$memory_9 = "NOMATCHALERT";
#line 957
$memory_9 = [$memory_9,$memory_8];
#line 957
die(dfile::ssave($memory_9));
#line 954
label_88:
#line 954
$memory_10 = c_rt_lib::ov_as($memory_8, 'err');
#line 955
type_checker_priv::add_error($memory_5, $memory_10);
#line 956
$memory_11 = tct::tct_im();
#line 956
$memory_12 = $memory_11;
#line 956
 if (c_rt_lib::get_hashcount($memory_0) > 1) {$memory_0 = {%{$memory_0}};}$memory_0->{'type'} = $memory_12;
#line 956
undef($memory_11);
#line 956
undef($memory_12);
#line 956
undef($memory_10);
#line 957
goto label_153;
#line 957
label_98:
#line 957
$memory_10 = c_rt_lib::ov_as($memory_8, 'ok');
#line 958
$memory_12 = $memory_1->{'module'};
#line 958
$memory_13 = $memory_1->{'name'};
#line 958
$memory_11 = type_checker_priv::get_function_def($memory_12, $memory_13, $memory_3);
#line 958
undef($memory_13);
#line 958
undef($memory_12);
#line 959
$memory_13 = $memory_11->{'ret_type'};
#line 959
$memory_14 = c_rt_lib::ov_mk_none('known');
#line 959
$memory_12 = {type => $memory_13,src => $memory_14,};
#line 959
undef($memory_13);
#line 959
undef($memory_14);
#line 960
$memory_13 = ptd_system::can_delete($memory_12, $memory_3, $memory_5);
#line 960
$memory_13 = $memory_13->{'type'};
#line 960
$memory_14 = $memory_13;
#line 960
 if (c_rt_lib::get_hashcount($memory_0) > 1) {$memory_0 = {%{$memory_0}};}$memory_0->{'type'} = $memory_14;
#line 960
undef($memory_13);
#line 960
undef($memory_14);
#line 961
$memory_13 = ptd_system::is_try_ensure_type($memory_0, $memory_3, $memory_5);
#line 961
$memory_13 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_13));
#line 961
if (c_rt_lib::check_true($memory_13)) {goto label_141;}
#line 962
$memory_17 = $memory_0->{'type'};
#line 962
$memory_18 = "err";
#line 962
$memory_16 = tct::try_var_as_case($memory_17, $memory_18);
#line 962
undef($memory_18);
#line 962
undef($memory_17);
#line 962
$memory_15 = c_rt_lib::ov_is($memory_16, 'ok');
#line 962
if (c_rt_lib::check_true($memory_15)) {goto label_128;}
#line 962
$memory_16 = c_rt_lib::ov_mk_arg('ensure', $memory_16);
#line 962
die(dfile::ssave($memory_16));
#line 962
label_128:
#line 962
$memory_14 = c_rt_lib::ov_as($memory_16, 'ok');
#line 962
undef($memory_15);
#line 962
undef($memory_16);
#line 963
$memory_16 = {ok => $memory_10,err => $memory_14,};
#line 963
$memory_15 = tct::var($memory_16);
#line 963
undef($memory_16);
#line 963
$memory_16 = $memory_15;
#line 963
 if (c_rt_lib::get_hashcount($memory_0) > 1) {$memory_0 = {%{$memory_0}};}$memory_0->{'type'} = $memory_16;
#line 963
undef($memory_15);
#line 963
undef($memory_16);
#line 963
undef($memory_14);
#line 964
goto label_146;
#line 964
label_141:
#line 965
$memory_14 = "function ptd::try_cast must return variant: ok, err ";
#line 965
type_checker_priv::add_error($memory_5, $memory_14);
#line 965
undef($memory_14);
#line 966
goto label_146;
#line 966
label_146:
#line 966
undef($memory_13);
#line 967
type_checker_priv::check_types_imported($memory_10, $memory_3, $memory_5);
#line 967
undef($memory_11);
#line 967
undef($memory_12);
#line 967
undef($memory_10);
#line 968
goto label_153;
#line 968
label_153:
#line 968
undef($memory_8);
#line 968
undef($memory_9);
#line 969
goto label_157;
#line 969
label_157:
#line 969
undef($memory_7);
#line 970
$memory_7 = "array::push";
#line 970
$memory_7 = c_rt_lib::to_nl($memory_6 eq $memory_7);
#line 970
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 970
if (c_rt_lib::check_true($memory_7)) {goto label_198;}
#line 971
$memory_10 = 1;
#line 971
$memory_9 = $memory_2->[$memory_10];
#line 971
undef($memory_10);
#line 971
$memory_9 = $memory_9->{'type'};
#line 971
$memory_8 = tct::arr($memory_9);
#line 971
undef($memory_9);
#line 971
$memory_10 = 1;
#line 971
$memory_9 = c_rt_lib::get_ref_arr($memory_2, $memory_10);
#line 971
$memory_11 = $memory_8;
#line 971
 if (c_rt_lib::get_hashcount($memory_9) > 1) {$memory_9 = {%{$memory_9}};}$memory_9->{'type'} = $memory_11;
#line 971
c_rt_lib::set_ref_arr($memory_2, $memory_10, $memory_9);
#line 971
undef($memory_8);
#line 971
undef($memory_9);
#line 971
undef($memory_10);
#line 971
undef($memory_11);
#line 972
$memory_8 = $memory_1->{'args'};
#line 972
$memory_9 = 0;
#line 972
$memory_8 = $memory_8->[$memory_9];
#line 972
undef($memory_9);
#line 972
$memory_8 = $memory_8->{'val'};
#line 972
$memory_10 = 0;
#line 972
$memory_9 = $memory_2->[$memory_10];
#line 972
undef($memory_10);
#line 972
$memory_11 = 1;
#line 972
$memory_10 = $memory_2->[$memory_11];
#line 972
undef($memory_11);
#line 972
$memory_12 = tct::empty();
#line 972
$memory_11 = tct::arr($memory_12);
#line 972
undef($memory_12);
#line 972
type_checker_priv::set_type_to_lval_spec($memory_8, $memory_9, $memory_10, $memory_11, $memory_3, $memory_4, $memory_5);
#line 972
undef($memory_11);
#line 972
undef($memory_10);
#line 972
undef($memory_9);
#line 972
undef($memory_8);
#line 974
goto label_198;
#line 974
label_198:
#line 974
undef($memory_7);
#line 975
$memory_7 = "array::insert";
#line 975
$memory_7 = c_rt_lib::to_nl($memory_6 eq $memory_7);
#line 975
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 975
if (c_rt_lib::check_true($memory_7)) {goto label_239;}
#line 976
$memory_10 = 2;
#line 976
$memory_9 = $memory_2->[$memory_10];
#line 976
undef($memory_10);
#line 976
$memory_9 = $memory_9->{'type'};
#line 976
$memory_8 = tct::arr($memory_9);
#line 976
undef($memory_9);
#line 976
$memory_10 = 2;
#line 976
$memory_9 = c_rt_lib::get_ref_arr($memory_2, $memory_10);
#line 976
$memory_11 = $memory_8;
#line 976
 if (c_rt_lib::get_hashcount($memory_9) > 1) {$memory_9 = {%{$memory_9}};}$memory_9->{'type'} = $memory_11;
#line 976
c_rt_lib::set_ref_arr($memory_2, $memory_10, $memory_9);
#line 976
undef($memory_8);
#line 976
undef($memory_9);
#line 976
undef($memory_10);
#line 976
undef($memory_11);
#line 977
$memory_8 = $memory_1->{'args'};
#line 977
$memory_9 = 0;
#line 977
$memory_8 = $memory_8->[$memory_9];
#line 977
undef($memory_9);
#line 977
$memory_8 = $memory_8->{'val'};
#line 977
$memory_10 = 0;
#line 977
$memory_9 = $memory_2->[$memory_10];
#line 977
undef($memory_10);
#line 977
$memory_11 = 2;
#line 977
$memory_10 = $memory_2->[$memory_11];
#line 977
undef($memory_11);
#line 977
$memory_12 = tct::empty();
#line 977
$memory_11 = tct::arr($memory_12);
#line 977
undef($memory_12);
#line 977
type_checker_priv::set_type_to_lval_spec($memory_8, $memory_9, $memory_10, $memory_11, $memory_3, $memory_4, $memory_5);
#line 977
undef($memory_11);
#line 977
undef($memory_10);
#line 977
undef($memory_9);
#line 977
undef($memory_8);
#line 979
goto label_239;
#line 979
label_239:
#line 979
undef($memory_7);
#line 980
$memory_7 = "array::append";
#line 980
$memory_7 = c_rt_lib::to_nl($memory_6 eq $memory_7);
#line 980
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 980
if (c_rt_lib::check_true($memory_7)) {goto label_265;}
#line 981
$memory_8 = $memory_1->{'args'};
#line 981
$memory_9 = 0;
#line 981
$memory_8 = $memory_8->[$memory_9];
#line 981
undef($memory_9);
#line 981
$memory_8 = $memory_8->{'val'};
#line 981
$memory_10 = 0;
#line 981
$memory_9 = $memory_2->[$memory_10];
#line 981
undef($memory_10);
#line 981
$memory_11 = 1;
#line 981
$memory_10 = $memory_2->[$memory_11];
#line 981
undef($memory_11);
#line 981
$memory_12 = tct::empty();
#line 981
$memory_11 = tct::arr($memory_12);
#line 981
undef($memory_12);
#line 981
type_checker_priv::set_type_to_lval_spec($memory_8, $memory_9, $memory_10, $memory_11, $memory_3, $memory_4, $memory_5);
#line 981
undef($memory_11);
#line 981
undef($memory_10);
#line 981
undef($memory_9);
#line 981
undef($memory_8);
#line 983
goto label_265;
#line 983
label_265:
#line 983
undef($memory_7);
#line 984
$memory_7 = "array::subarray";
#line 984
$memory_7 = c_rt_lib::to_nl($memory_6 eq $memory_7);
#line 984
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 984
if (c_rt_lib::check_true($memory_7)) {goto label_282;}
#line 985
$memory_9 = 0;
#line 985
$memory_8 = $memory_2->[$memory_9];
#line 985
undef($memory_9);
#line 985
undef($memory_0);
#line 985
undef($memory_1);
#line 985
undef($memory_2);
#line 985
undef($memory_6);
#line 985
undef($memory_7);
#line 985
$_[3] = $memory_3;$_[4] = $memory_4;$_[5] = $memory_5;return $memory_8;
#line 985
undef($memory_8);
#line 986
goto label_282;
#line 986
label_282:
#line 986
undef($memory_7);
#line 987
$memory_7 = "hash::set_value";
#line 987
$memory_7 = c_rt_lib::to_nl($memory_6 eq $memory_7);
#line 987
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 987
if (c_rt_lib::check_true($memory_7)) {goto label_323;}
#line 988
$memory_10 = 2;
#line 988
$memory_9 = $memory_2->[$memory_10];
#line 988
undef($memory_10);
#line 988
$memory_9 = $memory_9->{'type'};
#line 988
$memory_8 = tct::hash($memory_9);
#line 988
undef($memory_9);
#line 988
$memory_10 = 2;
#line 988
$memory_9 = c_rt_lib::get_ref_arr($memory_2, $memory_10);
#line 988
$memory_11 = $memory_8;
#line 988
 if (c_rt_lib::get_hashcount($memory_9) > 1) {$memory_9 = {%{$memory_9}};}$memory_9->{'type'} = $memory_11;
#line 988
c_rt_lib::set_ref_arr($memory_2, $memory_10, $memory_9);
#line 988
undef($memory_8);
#line 988
undef($memory_9);
#line 988
undef($memory_10);
#line 988
undef($memory_11);
#line 989
$memory_8 = $memory_1->{'args'};
#line 989
$memory_9 = 0;
#line 989
$memory_8 = $memory_8->[$memory_9];
#line 989
undef($memory_9);
#line 989
$memory_8 = $memory_8->{'val'};
#line 989
$memory_10 = 0;
#line 989
$memory_9 = $memory_2->[$memory_10];
#line 989
undef($memory_10);
#line 989
$memory_11 = 2;
#line 989
$memory_10 = $memory_2->[$memory_11];
#line 989
undef($memory_11);
#line 989
$memory_12 = {};
#line 989
$memory_11 = tct::rec($memory_12);
#line 989
undef($memory_12);
#line 989
type_checker_priv::set_type_to_lval_spec($memory_8, $memory_9, $memory_10, $memory_11, $memory_3, $memory_4, $memory_5);
#line 989
undef($memory_11);
#line 989
undef($memory_10);
#line 989
undef($memory_9);
#line 989
undef($memory_8);
#line 991
goto label_323;
#line 991
label_323:
#line 991
undef($memory_7);
#line 992
$memory_7 = "hash::delete";
#line 992
$memory_7 = c_rt_lib::to_nl($memory_6 eq $memory_7);
#line 992
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 992
if (c_rt_lib::check_true($memory_7)) {goto label_367;}
#line 993
$memory_10 = 0;
#line 993
$memory_9 = $memory_2->[$memory_10];
#line 993
undef($memory_10);
#line 993
$memory_8 = ptd_system::can_delete($memory_9, $memory_3, $memory_5);
#line 993
undef($memory_9);
#line 994
$memory_9 = $memory_8->{'type'};
#line 994
$memory_9 = c_rt_lib::ov_is($memory_9, 'tct_rec');
#line 994
$memory_9 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_9));
#line 994
if (c_rt_lib::check_true($memory_9)) {goto label_363;}
#line 995
$memory_10 = $memory_8;
#line 996
$memory_13 = tct::empty();
#line 996
$memory_12 = tct::hash($memory_13);
#line 996
undef($memory_13);
#line 996
$memory_13 = $memory_8->{'type'};
#line 996
$memory_11 = ptd_system::cross_type($memory_12, $memory_13, $memory_3, $memory_5);
#line 996
undef($memory_13);
#line 996
undef($memory_12);
#line 996
$memory_12 = $memory_11;
#line 996
 if (c_rt_lib::get_hashcount($memory_10) > 1) {$memory_10 = {%{$memory_10}};}$memory_10->{'type'} = $memory_12;
#line 996
undef($memory_11);
#line 996
undef($memory_12);
#line 997
$memory_11 = $memory_1->{'args'};
#line 997
$memory_12 = 0;
#line 997
$memory_11 = $memory_11->[$memory_12];
#line 997
undef($memory_12);
#line 997
$memory_11 = $memory_11->{'val'};
#line 997
$memory_13 = {};
#line 997
$memory_12 = tct::rec($memory_13);
#line 997
undef($memory_13);
#line 997
type_checker_priv::set_type_to_lval_spec($memory_11, $memory_8, $memory_10, $memory_12, $memory_3, $memory_4, $memory_5);
#line 997
undef($memory_12);
#line 997
undef($memory_11);
#line 997
undef($memory_10);
#line 998
goto label_363;
#line 998
label_363:
#line 998
undef($memory_9);
#line 998
undef($memory_8);
#line 999
goto label_367;
#line 999
label_367:
#line 999
undef($memory_7);
#line 1000
$memory_7 = "hash::get_value";
#line 1000
$memory_7 = c_rt_lib::to_nl($memory_6 eq $memory_7);
#line 1000
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 1000
if (c_rt_lib::check_true($memory_7)) {goto label_398;}
#line 1001
$memory_10 = 0;
#line 1001
$memory_9 = $memory_2->[$memory_10];
#line 1001
undef($memory_10);
#line 1001
$memory_8 = ptd_system::can_delete($memory_9, $memory_3, $memory_5);
#line 1001
undef($memory_9);
#line 1002
$memory_9 = $memory_8->{'src'};
#line 1002
$memory_10 = $memory_9;
#line 1002
 if (c_rt_lib::get_hashcount($memory_0) > 1) {$memory_0 = {%{$memory_0}};}$memory_0->{'src'} = $memory_10;
#line 1002
undef($memory_9);
#line 1002
undef($memory_10);
#line 1003
$memory_9 = $memory_8->{'type'};
#line 1003
$memory_9 = c_rt_lib::ov_is($memory_9, 'tct_hash');
#line 1003
$memory_9 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_9));
#line 1003
if (c_rt_lib::check_true($memory_9)) {goto label_394;}
#line 1003
$memory_10 = $memory_8->{'type'};
#line 1003
$memory_10 = c_rt_lib::ov_as($memory_10, 'tct_hash');
#line 1003
$memory_11 = $memory_10;
#line 1003
 if (c_rt_lib::get_hashcount($memory_0) > 1) {$memory_0 = {%{$memory_0}};}$memory_0->{'type'} = $memory_11;
#line 1003
undef($memory_10);
#line 1003
undef($memory_11);
#line 1003
goto label_394;
#line 1003
label_394:
#line 1003
undef($memory_9);
#line 1003
undef($memory_8);
#line 1004
goto label_398;
#line 1004
label_398:
#line 1004
undef($memory_7);
#line 1005
$memory_7 = "hash::values";
#line 1005
$memory_7 = c_rt_lib::to_nl($memory_6 eq $memory_7);
#line 1005
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 1005
if (c_rt_lib::check_true($memory_7)) {goto label_431;}
#line 1006
$memory_10 = 0;
#line 1006
$memory_9 = $memory_2->[$memory_10];
#line 1006
undef($memory_10);
#line 1006
$memory_8 = ptd_system::can_delete($memory_9, $memory_3, $memory_5);
#line 1006
undef($memory_9);
#line 1007
$memory_9 = $memory_8->{'src'};
#line 1007
$memory_10 = $memory_9;
#line 1007
 if (c_rt_lib::get_hashcount($memory_0) > 1) {$memory_0 = {%{$memory_0}};}$memory_0->{'src'} = $memory_10;
#line 1007
undef($memory_9);
#line 1007
undef($memory_10);
#line 1008
$memory_9 = $memory_8->{'type'};
#line 1008
$memory_9 = c_rt_lib::ov_is($memory_9, 'tct_hash');
#line 1008
$memory_9 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_9));
#line 1008
if (c_rt_lib::check_true($memory_9)) {goto label_427;}
#line 1008
$memory_11 = $memory_8->{'type'};
#line 1008
$memory_11 = c_rt_lib::ov_as($memory_11, 'tct_hash');
#line 1008
$memory_10 = tct::arr($memory_11);
#line 1008
undef($memory_11);
#line 1008
$memory_11 = $memory_10;
#line 1008
 if (c_rt_lib::get_hashcount($memory_0) > 1) {$memory_0 = {%{$memory_0}};}$memory_0->{'type'} = $memory_11;
#line 1008
undef($memory_10);
#line 1008
undef($memory_11);
#line 1008
goto label_427;
#line 1008
label_427:
#line 1008
undef($memory_9);
#line 1008
undef($memory_8);
#line 1009
goto label_431;
#line 1009
label_431:
#line 1009
undef($memory_7);
#line 1010
$memory_7 = "hash::add_all";
#line 1010
$memory_7 = c_rt_lib::to_nl($memory_6 eq $memory_7);
#line 1010
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 1010
if (c_rt_lib::check_true($memory_7)) {goto label_457;}
#line 1011
$memory_8 = $memory_1->{'args'};
#line 1011
$memory_9 = 0;
#line 1011
$memory_8 = $memory_8->[$memory_9];
#line 1011
undef($memory_9);
#line 1011
$memory_8 = $memory_8->{'val'};
#line 1011
$memory_10 = 0;
#line 1011
$memory_9 = $memory_2->[$memory_10];
#line 1011
undef($memory_10);
#line 1011
$memory_11 = 1;
#line 1011
$memory_10 = $memory_2->[$memory_11];
#line 1011
undef($memory_11);
#line 1011
$memory_12 = {};
#line 1011
$memory_11 = tct::rec($memory_12);
#line 1011
undef($memory_12);
#line 1011
type_checker_priv::set_type_to_lval_spec($memory_8, $memory_9, $memory_10, $memory_11, $memory_3, $memory_4, $memory_5);
#line 1011
undef($memory_11);
#line 1011
undef($memory_10);
#line 1011
undef($memory_9);
#line 1011
undef($memory_8);
#line 1013
goto label_457;
#line 1013
label_457:
#line 1013
undef($memory_7);
#line 1015
$memory_7 = "ov::as";
#line 1015
$memory_7 = c_rt_lib::to_nl($memory_6 eq $memory_7);
#line 1015
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 1015
if (c_rt_lib::check_true($memory_7)) {goto label_471;}
#line 1016
$memory_8 = tct::tct_im();
#line 1016
$memory_10 = 0;
#line 1016
$memory_9 = $memory_2->[$memory_10];
#line 1016
undef($memory_10);
#line 1016
ptd_system::check_assignment($memory_8, $memory_9, $memory_3, $memory_5);
#line 1016
undef($memory_9);
#line 1016
undef($memory_8);
#line 1017
goto label_471;
#line 1017
label_471:
#line 1017
undef($memory_7);
#line 1018
$memory_7 = "dfile::ssave";
#line 1018
$memory_7 = c_rt_lib::to_nl($memory_6 eq $memory_7);
#line 1018
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 1018
if (c_rt_lib::check_true($memory_7)) {goto label_485;}
#line 1019
$memory_8 = tct::tct_im();
#line 1019
$memory_10 = 0;
#line 1019
$memory_9 = $memory_2->[$memory_10];
#line 1019
undef($memory_10);
#line 1019
ptd_system::check_assignment($memory_8, $memory_9, $memory_3, $memory_5);
#line 1019
undef($memory_9);
#line 1019
undef($memory_8);
#line 1020
goto label_485;
#line 1020
label_485:
#line 1020
undef($memory_7);
#line 1021
$memory_7 = "singleton::sigleton_do_not_use_without_approval";
#line 1021
$memory_7 = c_rt_lib::to_nl($memory_6 eq $memory_7);
#line 1021
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 1021
if (c_rt_lib::check_true($memory_7)) {goto label_502;}
#line 1022
$memory_9 = 0;
#line 1022
$memory_8 = $memory_2->[$memory_9];
#line 1022
undef($memory_9);
#line 1022
undef($memory_0);
#line 1022
undef($memory_1);
#line 1022
undef($memory_2);
#line 1022
undef($memory_6);
#line 1022
undef($memory_7);
#line 1022
$_[3] = $memory_3;$_[4] = $memory_4;$_[5] = $memory_5;return $memory_8;
#line 1022
undef($memory_8);
#line 1023
goto label_502;
#line 1023
label_502:
#line 1023
undef($memory_7);
#line 1024
undef($memory_1);
#line 1024
undef($memory_2);
#line 1024
undef($memory_6);
#line 1024
$_[3] = $memory_3;$_[4] = $memory_4;$_[5] = $memory_5;return $memory_0;
#line 1024
undef($memory_6);
#line 1024
undef($memory_0);
#line 1024
undef($memory_1);
#line 1024
undef($memory_2);
#line 1024
$_[3] = $memory_3;$_[4] = $memory_4;$_[5] = $memory_5;return;
$_[3] = $memory_3;$_[4] = $memory_4;$_[5] = $memory_5;}

sub type_checker_priv::rec_get_var_from_lval($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;$memory_0 = $_[0];$memory_1 = $_[1];Scalar::Util::weaken($_[1]) if ref($_[1]);
#line 1028
$memory_2 = [];
#line 1029
$memory_3 = $memory_0->{'value'};
#line 1029
$memory_3 = c_rt_lib::ov_is($memory_3, 'var');
#line 1029
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 1029
if (c_rt_lib::check_true($memory_3)) {goto label_11;}
#line 1030
$memory_4 = $memory_0->{'value'};
#line 1030
$memory_4 = c_rt_lib::ov_as($memory_4, 'var');
#line 1030
$memory_4 = c_rt_lib::ov_mk_arg('var', $memory_4);
#line 1030
array::push($memory_2, $memory_4);
#line 1030
undef($memory_4);
#line 1031
goto label_88;
#line 1031
label_11:
#line 1031
$memory_3 = $memory_0->{'value'};
#line 1031
$memory_3 = c_rt_lib::ov_is($memory_3, 'bin_op');
#line 1031
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 1031
if (c_rt_lib::check_true($memory_3)) {goto label_83;}
#line 1032
$memory_4 = $memory_0->{'value'};
#line 1032
$memory_4 = c_rt_lib::ov_as($memory_4, 'bin_op');
#line 1033
$memory_5 = $memory_4->{'op'};
#line 1033
$memory_6 = "->";
#line 1033
$memory_5 = c_rt_lib::to_nl($memory_5 eq $memory_6);
#line 1033
undef($memory_6);
#line 1033
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 1033
if (c_rt_lib::check_true($memory_5)) {goto label_36;}
#line 1034
$memory_7 = $memory_4->{'left'};
#line 1034
$memory_6 = type_checker_priv::rec_get_var_from_lval($memory_7, $memory_1);
#line 1034
undef($memory_7);
#line 1034
$memory_2 = $memory_6;
#line 1034
undef($memory_6);
#line 1035
$memory_6 = $memory_4->{'right'};
#line 1035
$memory_6 = $memory_6->{'value'};
#line 1035
$memory_6 = c_rt_lib::ov_as($memory_6, 'hash_key');
#line 1035
$memory_6 = c_rt_lib::ov_mk_arg('rec', $memory_6);
#line 1035
array::push($memory_2, $memory_6);
#line 1035
undef($memory_6);
#line 1036
goto label_79;
#line 1036
label_36:
#line 1036
$memory_5 = $memory_4->{'op'};
#line 1036
$memory_6 = "ARRAY_INDEX";
#line 1036
$memory_5 = c_rt_lib::to_nl($memory_5 eq $memory_6);
#line 1036
undef($memory_6);
#line 1036
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 1036
if (c_rt_lib::check_true($memory_5)) {goto label_52;}
#line 1037
$memory_7 = $memory_4->{'left'};
#line 1037
$memory_6 = type_checker_priv::rec_get_var_from_lval($memory_7, $memory_1);
#line 1037
undef($memory_7);
#line 1037
$memory_2 = $memory_6;
#line 1037
undef($memory_6);
#line 1038
$memory_6 = c_rt_lib::ov_mk_none('arr');
#line 1038
array::push($memory_2, $memory_6);
#line 1038
undef($memory_6);
#line 1039
goto label_79;
#line 1039
label_52:
#line 1039
$memory_5 = $memory_4->{'op'};
#line 1039
$memory_6 = "HASH_INDEX";
#line 1039
$memory_5 = c_rt_lib::to_nl($memory_5 eq $memory_6);
#line 1039
undef($memory_6);
#line 1039
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 1039
if (c_rt_lib::check_true($memory_5)) {goto label_68;}
#line 1040
$memory_7 = $memory_4->{'left'};
#line 1040
$memory_6 = type_checker_priv::rec_get_var_from_lval($memory_7, $memory_1);
#line 1040
undef($memory_7);
#line 1040
$memory_2 = $memory_6;
#line 1040
undef($memory_6);
#line 1041
$memory_6 = c_rt_lib::ov_mk_none('hashkey');
#line 1041
array::push($memory_2, $memory_6);
#line 1041
undef($memory_6);
#line 1042
goto label_79;
#line 1042
label_68:
#line 1043
$memory_6 = "invalid operator ";
#line 1043
$memory_7 = $memory_4->{'op'};
#line 1043
$memory_6 = $memory_6 . $memory_7;
#line 1043
undef($memory_7);
#line 1043
$memory_7 = " used in lvalue";
#line 1043
$memory_6 = $memory_6 . $memory_7;
#line 1043
undef($memory_7);
#line 1043
type_checker_priv::add_error($memory_1, $memory_6);
#line 1043
undef($memory_6);
#line 1044
goto label_79;
#line 1044
label_79:
#line 1044
undef($memory_5);
#line 1044
undef($memory_4);
#line 1045
goto label_88;
#line 1045
label_83:
#line 1046
$memory_4 = "invalid type for lvalue";
#line 1046
type_checker_priv::add_error($memory_1, $memory_4);
#line 1046
undef($memory_4);
#line 1047
goto label_88;
#line 1047
label_88:
#line 1047
undef($memory_3);
#line 1048
undef($memory_0);
#line 1048
$_[1] = $memory_1;return $memory_2;
#line 1048
undef($memory_2);
#line 1048
undef($memory_0);
#line 1048
$_[1] = $memory_1;return;
$_[1] = $memory_1;}

sub type_checker_priv::mk_new_type_lval($$$$$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;my $memory_13;$memory_0 = $_[0];$memory_1 = $_[1];$memory_2 = $_[2];$memory_3 = $_[3];$memory_4 = $_[4];Scalar::Util::weaken($_[4]) if ref($_[4]);$memory_5 = $_[5];Scalar::Util::weaken($_[5]) if ref($_[5]);
#line 1053
$memory_7 = 1;
#line 1053
$memory_8 = array::len($memory_0);
#line 1053
$memory_9 = 1;
#line 1053
$memory_8 = $memory_8 - $memory_9;
#line 1053
undef($memory_9);
#line 1053
$memory_6 = array::subarray($memory_0, $memory_7, $memory_8);
#line 1053
undef($memory_8);
#line 1053
undef($memory_7);
#line 1053
$memory_0 = $memory_6;
#line 1053
undef($memory_6);
#line 1054
$memory_6 = array::len($memory_0);
#line 1054
$memory_7 = 0;
#line 1054
$memory_6 = c_rt_lib::to_nl($memory_6 == $memory_7);
#line 1054
undef($memory_7);
#line 1054
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 1054
if (c_rt_lib::check_true($memory_6)) {goto label_89;}
#line 1055
$memory_7 = type_checker_priv::is_known($memory_2);
#line 1055
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 1055
if (c_rt_lib::check_true($memory_7)) {goto label_47;}
#line 1056
$memory_9 = $memory_2->{'type'};
#line 1056
$memory_8 = ptd_system::check_assignment($memory_9, $memory_1, $memory_4, $memory_5);
#line 1056
undef($memory_9);
#line 1057
$memory_9 = $memory_8;
#line 1057
$memory_9 = c_rt_lib::ov_is($memory_9, 'err');
#line 1057
$memory_9 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_9));
#line 1057
if (c_rt_lib::check_true($memory_9)) {goto label_33;}
#line 1058
$memory_10 = "invalid type in assignment: ";
#line 1058
$memory_11 = type_checker_priv::get_print_check_info($memory_8);
#line 1058
$memory_10 = $memory_10 . $memory_11;
#line 1058
undef($memory_11);
#line 1058
type_checker_priv::add_error($memory_5, $memory_10);
#line 1058
undef($memory_10);
#line 1059
goto label_33;
#line 1059
label_33:
#line 1059
undef($memory_9);
#line 1060
$memory_9 = $memory_2->{'type'};
#line 1060
undef($memory_0);
#line 1060
undef($memory_1);
#line 1060
undef($memory_2);
#line 1060
undef($memory_3);
#line 1060
undef($memory_6);
#line 1060
undef($memory_7);
#line 1060
undef($memory_8);
#line 1060
$_[4] = $memory_4;$_[5] = $memory_5;return $memory_9;
#line 1060
undef($memory_9);
#line 1060
undef($memory_8);
#line 1061
goto label_86;
#line 1061
label_47:
#line 1062
$memory_8 = tct::tct_im();
#line 1062
ptd_system::check_assignment($memory_8, $memory_1, $memory_4, $memory_5);
#line 1062
undef($memory_8);
#line 1063
$memory_8 = ptd_system::can_create($memory_2, $memory_4, $memory_5);
#line 1063
$memory_2 = $memory_8;
#line 1063
undef($memory_8);
#line 1064
$memory_9 = $memory_2->{'type'};
#line 1064
$memory_8 = ptd_system::is_equal($memory_9, $memory_3);
#line 1064
undef($memory_9);
#line 1064
$memory_8 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 1064
if (c_rt_lib::check_true($memory_8)) {goto label_70;}
#line 1064
$memory_9 = $memory_1->{'type'};
#line 1064
undef($memory_0);
#line 1064
undef($memory_1);
#line 1064
undef($memory_2);
#line 1064
undef($memory_3);
#line 1064
undef($memory_6);
#line 1064
undef($memory_7);
#line 1064
undef($memory_8);
#line 1064
$_[4] = $memory_4;$_[5] = $memory_5;return $memory_9;
#line 1064
undef($memory_9);
#line 1064
goto label_70;
#line 1064
label_70:
#line 1064
undef($memory_8);
#line 1065
$memory_9 = $memory_2->{'type'};
#line 1065
$memory_10 = $memory_1->{'type'};
#line 1065
$memory_8 = ptd_system::cross_type($memory_9, $memory_10, $memory_4, $memory_5);
#line 1065
undef($memory_10);
#line 1065
undef($memory_9);
#line 1065
undef($memory_0);
#line 1065
undef($memory_1);
#line 1065
undef($memory_2);
#line 1065
undef($memory_3);
#line 1065
undef($memory_6);
#line 1065
undef($memory_7);
#line 1065
$_[4] = $memory_4;$_[5] = $memory_5;return $memory_8;
#line 1065
undef($memory_8);
#line 1066
goto label_86;
#line 1066
label_86:
#line 1066
undef($memory_7);
#line 1067
goto label_280;
#line 1067
label_89:
#line 1068
$memory_7 = ptd_system::can_create($memory_2, $memory_4, $memory_5);
#line 1068
$memory_2 = $memory_7;
#line 1068
undef($memory_7);
#line 1069
$memory_8 = 0;
#line 1069
$memory_7 = $memory_0->[$memory_8];
#line 1069
undef($memory_8);
#line 1069
$memory_8 = c_rt_lib::ov_is($memory_7, 'var');
#line 1069
if (c_rt_lib::check_true($memory_8)) {goto label_107;}
#line 1071
$memory_8 = c_rt_lib::ov_is($memory_7, 'arr');
#line 1071
if (c_rt_lib::check_true($memory_8)) {goto label_114;}
#line 1075
$memory_8 = c_rt_lib::ov_is($memory_7, 'hashkey');
#line 1075
if (c_rt_lib::check_true($memory_8)) {goto label_153;}
#line 1079
$memory_8 = c_rt_lib::ov_is($memory_7, 'rec');
#line 1079
if (c_rt_lib::check_true($memory_8)) {goto label_192;}
#line 1079
$memory_8 = "NOMATCHALERT";
#line 1079
$memory_8 = [$memory_8,$memory_7];
#line 1079
die(dfile::ssave($memory_8));
#line 1069
label_107:
#line 1069
$memory_9 = c_rt_lib::ov_as($memory_7, 'var');
#line 1070
$memory_10 = [$memory_0];
#line 1070
die(dfile::ssave($memory_10));
#line 1070
undef($memory_10);
#line 1070
undef($memory_9);
#line 1071
goto label_276;
#line 1071
label_114:
#line 1072
$memory_9 = $memory_2->{'type'};
#line 1072
$memory_9 = c_rt_lib::ov_is($memory_9, 'tct_arr');
#line 1072
$memory_9 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_9));
#line 1072
$memory_9 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_9));
#line 1072
if (c_rt_lib::check_true($memory_9)) {goto label_132;}
#line 1072
$memory_10 = tct::tct_im();
#line 1072
undef($memory_0);
#line 1072
undef($memory_1);
#line 1072
undef($memory_2);
#line 1072
undef($memory_3);
#line 1072
undef($memory_6);
#line 1072
undef($memory_7);
#line 1072
undef($memory_8);
#line 1072
undef($memory_9);
#line 1072
$_[4] = $memory_4;$_[5] = $memory_5;return $memory_10;
#line 1072
undef($memory_10);
#line 1072
goto label_132;
#line 1072
label_132:
#line 1072
undef($memory_9);
#line 1073
$memory_9 = $memory_2->{'type'};
#line 1073
$memory_9 = c_rt_lib::ov_as($memory_9, 'tct_arr');
#line 1073
$memory_10 = $memory_9;
#line 1073
 if (c_rt_lib::get_hashcount($memory_2) > 1) {$memory_2 = {%{$memory_2}};}$memory_2->{'type'} = $memory_10;
#line 1073
undef($memory_9);
#line 1073
undef($memory_10);
#line 1074
$memory_10 = type_checker_priv::mk_new_type_lval($memory_0, $memory_1, $memory_2, $memory_3, $memory_4, $memory_5);
#line 1074
$memory_9 = tct::arr($memory_10);
#line 1074
undef($memory_10);
#line 1074
undef($memory_0);
#line 1074
undef($memory_1);
#line 1074
undef($memory_2);
#line 1074
undef($memory_3);
#line 1074
undef($memory_6);
#line 1074
undef($memory_7);
#line 1074
undef($memory_8);
#line 1074
$_[4] = $memory_4;$_[5] = $memory_5;return $memory_9;
#line 1074
undef($memory_9);
#line 1075
goto label_276;
#line 1075
label_153:
#line 1076
$memory_9 = $memory_2->{'type'};
#line 1076
$memory_9 = c_rt_lib::ov_is($memory_9, 'tct_hash');
#line 1076
$memory_9 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_9));
#line 1076
$memory_9 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_9));
#line 1076
if (c_rt_lib::check_true($memory_9)) {goto label_171;}
#line 1076
$memory_10 = tct::tct_im();
#line 1076
undef($memory_0);
#line 1076
undef($memory_1);
#line 1076
undef($memory_2);
#line 1076
undef($memory_3);
#line 1076
undef($memory_6);
#line 1076
undef($memory_7);
#line 1076
undef($memory_8);
#line 1076
undef($memory_9);
#line 1076
$_[4] = $memory_4;$_[5] = $memory_5;return $memory_10;
#line 1076
undef($memory_10);
#line 1076
goto label_171;
#line 1076
label_171:
#line 1076
undef($memory_9);
#line 1077
$memory_9 = $memory_2->{'type'};
#line 1077
$memory_9 = c_rt_lib::ov_as($memory_9, 'tct_hash');
#line 1077
$memory_10 = $memory_9;
#line 1077
 if (c_rt_lib::get_hashcount($memory_2) > 1) {$memory_2 = {%{$memory_2}};}$memory_2->{'type'} = $memory_10;
#line 1077
undef($memory_9);
#line 1077
undef($memory_10);
#line 1078
$memory_10 = type_checker_priv::mk_new_type_lval($memory_0, $memory_1, $memory_2, $memory_3, $memory_4, $memory_5);
#line 1078
$memory_9 = tct::hash($memory_10);
#line 1078
undef($memory_10);
#line 1078
undef($memory_0);
#line 1078
undef($memory_1);
#line 1078
undef($memory_2);
#line 1078
undef($memory_3);
#line 1078
undef($memory_6);
#line 1078
undef($memory_7);
#line 1078
undef($memory_8);
#line 1078
$_[4] = $memory_4;$_[5] = $memory_5;return $memory_9;
#line 1078
undef($memory_9);
#line 1079
goto label_276;
#line 1079
label_192:
#line 1079
$memory_9 = c_rt_lib::ov_as($memory_7, 'rec');
#line 1080
$memory_10 = $memory_2->{'type'};
#line 1080
$memory_10 = c_rt_lib::ov_is($memory_10, 'tct_rec');
#line 1080
$memory_10 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_10));
#line 1080
$memory_10 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_10));
#line 1080
if (c_rt_lib::check_true($memory_10)) {goto label_212;}
#line 1080
$memory_11 = tct::tct_im();
#line 1080
undef($memory_0);
#line 1080
undef($memory_1);
#line 1080
undef($memory_2);
#line 1080
undef($memory_3);
#line 1080
undef($memory_6);
#line 1080
undef($memory_7);
#line 1080
undef($memory_8);
#line 1080
undef($memory_9);
#line 1080
undef($memory_10);
#line 1080
$_[4] = $memory_4;$_[5] = $memory_5;return $memory_11;
#line 1080
undef($memory_11);
#line 1080
goto label_212;
#line 1080
label_212:
#line 1080
undef($memory_10);
#line 1081
$memory_10 = $memory_2->{'type'};
#line 1081
$memory_10 = c_rt_lib::ov_as($memory_10, 'tct_rec');
#line 1082
$memory_11 = hash::has_key($memory_10, $memory_9);
#line 1082
$memory_11 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_11));
#line 1082
if (c_rt_lib::check_true($memory_11)) {goto label_228;}
#line 1083
$memory_12 = hash::get_value($memory_10, $memory_9);
#line 1083
$memory_13 = $memory_12;
#line 1083
 if (c_rt_lib::get_hashcount($memory_2) > 1) {$memory_2 = {%{$memory_2}};}$memory_2->{'type'} = $memory_13;
#line 1083
undef($memory_12);
#line 1083
undef($memory_13);
#line 1084
$memory_12 = type_checker_priv::mk_new_type_lval($memory_0, $memory_1, $memory_2, $memory_3, $memory_4, $memory_5);
#line 1084
hash::set_value($memory_10, $memory_9, $memory_12);
#line 1084
undef($memory_12);
#line 1086
goto label_259;
#line 1086
label_228:
#line 1087
$memory_12 = array::len($memory_0);
#line 1087
$memory_13 = 1;
#line 1087
$memory_12 = c_rt_lib::to_nl($memory_12 != $memory_13);
#line 1087
undef($memory_13);
#line 1087
$memory_12 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_12));
#line 1087
if (c_rt_lib::check_true($memory_12)) {goto label_250;}
#line 1088
$memory_13 = tct::tct_im();
#line 1088
undef($memory_0);
#line 1088
undef($memory_1);
#line 1088
undef($memory_2);
#line 1088
undef($memory_3);
#line 1088
undef($memory_6);
#line 1088
undef($memory_7);
#line 1088
undef($memory_8);
#line 1088
undef($memory_9);
#line 1088
undef($memory_10);
#line 1088
undef($memory_11);
#line 1088
undef($memory_12);
#line 1088
$_[4] = $memory_4;$_[5] = $memory_5;return $memory_13;
#line 1088
undef($memory_13);
#line 1089
goto label_250;
#line 1089
label_250:
#line 1089
undef($memory_12);
#line 1090
$memory_12 = tct::tct_im();
#line 1090
ptd_system::check_assignment($memory_12, $memory_1, $memory_4, $memory_5);
#line 1090
undef($memory_12);
#line 1091
$memory_12 = $memory_1->{'type'};
#line 1091
hash::set_value($memory_10, $memory_9, $memory_12);
#line 1091
undef($memory_12);
#line 1092
goto label_259;
#line 1092
label_259:
#line 1092
undef($memory_11);
#line 1093
$memory_11 = tct::rec($memory_10);
#line 1093
undef($memory_0);
#line 1093
undef($memory_1);
#line 1093
undef($memory_2);
#line 1093
undef($memory_3);
#line 1093
undef($memory_6);
#line 1093
undef($memory_7);
#line 1093
undef($memory_8);
#line 1093
undef($memory_9);
#line 1093
undef($memory_10);
#line 1093
$_[4] = $memory_4;$_[5] = $memory_5;return $memory_11;
#line 1093
undef($memory_11);
#line 1093
undef($memory_10);
#line 1093
undef($memory_9);
#line 1094
goto label_276;
#line 1094
label_276:
#line 1094
undef($memory_7);
#line 1094
undef($memory_8);
#line 1095
goto label_280;
#line 1095
label_280:
#line 1095
undef($memory_6);
#line 1095
undef($memory_0);
#line 1095
undef($memory_1);
#line 1095
undef($memory_2);
#line 1095
undef($memory_3);
#line 1095
$_[4] = $memory_4;$_[5] = $memory_5;return;
$_[4] = $memory_4;$_[5] = $memory_5;}

sub type_checker_priv::set_type_to_lval($$$$$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;$memory_0 = $_[0];$memory_1 = $_[1];$memory_2 = $_[2];$memory_3 = $_[3];Scalar::Util::weaken($_[3]) if ref($_[3]);$memory_4 = $_[4];Scalar::Util::weaken($_[4]) if ref($_[4]);$memory_5 = $_[5];Scalar::Util::weaken($_[5]) if ref($_[5]);
#line 1100
$memory_6 = ptd_system::can_delete($memory_1, $memory_3, $memory_5);
#line 1101
$memory_8 = $memory_6->{'type'};
#line 1101
$memory_7 = type_checker_priv::set_type_to_lval_spec($memory_0, $memory_1, $memory_2, $memory_8, $memory_3, $memory_4, $memory_5);
#line 1101
undef($memory_8);
#line 1101
undef($memory_0);
#line 1101
undef($memory_1);
#line 1101
undef($memory_2);
#line 1101
undef($memory_6);
#line 1101
$_[3] = $memory_3;$_[4] = $memory_4;$_[5] = $memory_5;return $memory_7;
#line 1101
undef($memory_7);
#line 1101
undef($memory_6);
#line 1101
undef($memory_0);
#line 1101
undef($memory_1);
#line 1101
undef($memory_2);
#line 1101
$_[3] = $memory_3;$_[4] = $memory_4;$_[5] = $memory_5;return;
$_[3] = $memory_3;$_[4] = $memory_4;$_[5] = $memory_5;}

sub type_checker_priv::set_type_to_lval_spec($$$$$$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;my $memory_13;my $memory_14;my $memory_15;my $memory_16;$memory_0 = $_[0];$memory_1 = $_[1];$memory_2 = $_[2];$memory_3 = $_[3];$memory_4 = $_[4];Scalar::Util::weaken($_[4]) if ref($_[4]);$memory_5 = $_[5];Scalar::Util::weaken($_[5]) if ref($_[5]);$memory_6 = $_[6];Scalar::Util::weaken($_[6]) if ref($_[6]);
#line 1107
$memory_8 = $memory_6->{'errors'};
#line 1107
$memory_7 = array::len($memory_8);
#line 1107
undef($memory_8);
#line 1108
$memory_8 = type_checker_priv::rec_get_var_from_lval($memory_0, $memory_6);
#line 1109
$memory_10 = $memory_6->{'errors'};
#line 1109
$memory_9 = array::len($memory_10);
#line 1109
undef($memory_10);
#line 1109
$memory_9 = c_rt_lib::to_nl($memory_7 != $memory_9);
#line 1109
$memory_9 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_9));
#line 1109
if (c_rt_lib::check_true($memory_9)) {goto label_18;}
#line 1109
undef($memory_0);
#line 1109
undef($memory_2);
#line 1109
undef($memory_3);
#line 1109
undef($memory_7);
#line 1109
undef($memory_8);
#line 1109
undef($memory_9);
#line 1109
$_[4] = $memory_4;$_[5] = $memory_5;$_[6] = $memory_6;return $memory_1;
#line 1109
goto label_18;
#line 1109
label_18:
#line 1109
undef($memory_9);
#line 1110
$memory_10 = 0;
#line 1110
$memory_9 = $memory_8->[$memory_10];
#line 1110
undef($memory_10);
#line 1110
$memory_9 = c_rt_lib::ov_as($memory_9, 'var');
#line 1111
$memory_10 = hash::has_key($memory_5, $memory_9);
#line 1111
$memory_10 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_10));
#line 1111
$memory_10 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_10));
#line 1111
if (c_rt_lib::check_true($memory_10)) {goto label_44;}
#line 1112
$memory_11 = "variable ";
#line 1112
$memory_11 = $memory_11 . $memory_9;
#line 1112
$memory_12 = " does not exist";
#line 1112
$memory_11 = $memory_11 . $memory_12;
#line 1112
undef($memory_12);
#line 1112
type_checker_priv::add_error($memory_6, $memory_11);
#line 1112
undef($memory_11);
#line 1113
undef($memory_0);
#line 1113
undef($memory_2);
#line 1113
undef($memory_3);
#line 1113
undef($memory_7);
#line 1113
undef($memory_8);
#line 1113
undef($memory_9);
#line 1113
undef($memory_10);
#line 1113
$_[4] = $memory_4;$_[5] = $memory_5;$_[6] = $memory_6;return $memory_1;
#line 1114
goto label_44;
#line 1114
label_44:
#line 1114
undef($memory_10);
#line 1115
$memory_10 = hash::get_value($memory_5, $memory_9);
#line 1116
$memory_11 = $memory_10->{'overwrited'};
#line 1116
$memory_12 = c_rt_lib::ov_is($memory_11, 'yes');
#line 1116
if (c_rt_lib::check_true($memory_12)) {goto label_55;}
#line 1121
$memory_12 = c_rt_lib::ov_is($memory_11, 'no');
#line 1121
if (c_rt_lib::check_true($memory_12)) {goto label_77;}
#line 1121
$memory_12 = "NOMATCHALERT";
#line 1121
$memory_12 = [$memory_12,$memory_11];
#line 1121
die(dfile::ssave($memory_12));
#line 1116
label_55:
#line 1117
$memory_15 = $memory_10->{'type'};
#line 1117
$memory_16 = c_rt_lib::ov_mk_none('speculation');
#line 1117
$memory_14 = {type => $memory_15,src => $memory_16,};
#line 1117
undef($memory_15);
#line 1117
undef($memory_16);
#line 1117
$memory_13 = type_checker_priv::mk_new_type_lval($memory_8, $memory_2, $memory_14, $memory_3, $memory_4, $memory_6);
#line 1117
undef($memory_14);
#line 1119
type_checker_priv::set_type_to_variable($memory_5, $memory_9, $memory_13);
#line 1120
undef($memory_0);
#line 1120
undef($memory_1);
#line 1120
undef($memory_3);
#line 1120
undef($memory_7);
#line 1120
undef($memory_8);
#line 1120
undef($memory_9);
#line 1120
undef($memory_10);
#line 1120
undef($memory_11);
#line 1120
undef($memory_12);
#line 1120
undef($memory_13);
#line 1120
$_[4] = $memory_4;$_[5] = $memory_5;$_[6] = $memory_6;return $memory_2;
#line 1120
undef($memory_13);
#line 1121
goto label_96;
#line 1121
label_77:
#line 1122
$memory_14 = $memory_10->{'type'};
#line 1122
$memory_15 = c_rt_lib::ov_mk_none('known');
#line 1122
$memory_13 = {type => $memory_14,src => $memory_15,};
#line 1122
undef($memory_14);
#line 1122
undef($memory_15);
#line 1122
type_checker_priv::mk_new_type_lval($memory_8, $memory_2, $memory_13, $memory_3, $memory_4, $memory_6);
#line 1122
undef($memory_13);
#line 1123
undef($memory_0);
#line 1123
undef($memory_2);
#line 1123
undef($memory_3);
#line 1123
undef($memory_7);
#line 1123
undef($memory_8);
#line 1123
undef($memory_9);
#line 1123
undef($memory_10);
#line 1123
undef($memory_11);
#line 1123
undef($memory_12);
#line 1123
$_[4] = $memory_4;$_[5] = $memory_5;$_[6] = $memory_6;return $memory_1;
#line 1124
goto label_96;
#line 1124
label_96:
#line 1124
undef($memory_11);
#line 1124
undef($memory_12);
#line 1124
undef($memory_7);
#line 1124
undef($memory_8);
#line 1124
undef($memory_9);
#line 1124
undef($memory_10);
#line 1124
undef($memory_0);
#line 1124
undef($memory_1);
#line 1124
undef($memory_2);
#line 1124
undef($memory_3);
#line 1124
$_[4] = $memory_4;$_[5] = $memory_5;$_[6] = $memory_6;return;
$_[4] = $memory_4;$_[5] = $memory_5;$_[6] = $memory_6;}

sub type_checker_priv::get_type_left_side_equation($$$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;$memory_0 = $_[0];$memory_1 = $_[1];Scalar::Util::weaken($_[1]) if ref($_[1]);$memory_2 = $_[2];Scalar::Util::weaken($_[2]) if ref($_[2]);$memory_3 = $_[3];Scalar::Util::weaken($_[3]) if ref($_[3]);
#line 1129
$memory_4 = $memory_0->{'value'};
#line 1129
$memory_4 = c_rt_lib::ov_is($memory_4, 'bin_op');
#line 1129
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 1129
if (c_rt_lib::check_true($memory_5)) {goto label_10;}
#line 1129
$memory_4 = $memory_0->{'value'};
#line 1129
$memory_4 = c_rt_lib::ov_as($memory_4, 'bin_op');
#line 1129
$memory_4 = $memory_4->{'op'};
#line 1129
$memory_6 = "->";
#line 1129
$memory_4 = c_rt_lib::to_nl($memory_4 eq $memory_6);
#line 1129
undef($memory_6);
#line 1129
label_10:
#line 1129
undef($memory_5);
#line 1129
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 1129
if (c_rt_lib::check_true($memory_4)) {goto label_23;}
#line 1130
$memory_6 = $memory_0->{'value'};
#line 1130
$memory_6 = c_rt_lib::ov_as($memory_6, 'bin_op');
#line 1130
$memory_5 = type_checker_priv::get_type_record_key($memory_6, $memory_1, $memory_2, $memory_3);
#line 1130
undef($memory_6);
#line 1130
undef($memory_0);
#line 1130
undef($memory_4);
#line 1130
$_[1] = $memory_1;$_[2] = $memory_2;$_[3] = $memory_3;return $memory_5;
#line 1130
undef($memory_5);
#line 1131
goto label_30;
#line 1131
label_23:
#line 1132
$memory_5 = type_checker_priv::check_val($memory_0, $memory_1, $memory_2, $memory_3);
#line 1132
undef($memory_0);
#line 1132
undef($memory_4);
#line 1132
$_[1] = $memory_1;$_[2] = $memory_2;$_[3] = $memory_3;return $memory_5;
#line 1132
undef($memory_5);
#line 1133
goto label_30;
#line 1133
label_30:
#line 1133
undef($memory_4);
#line 1133
undef($memory_0);
#line 1133
$_[1] = $memory_1;$_[2] = $memory_2;$_[3] = $memory_3;return;
$_[1] = $memory_1;$_[2] = $memory_2;$_[3] = $memory_3;}

sub type_checker_priv::get_type_record_key($$$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;$memory_0 = $_[0];$memory_1 = $_[1];Scalar::Util::weaken($_[1]) if ref($_[1]);$memory_2 = $_[2];Scalar::Util::weaken($_[2]) if ref($_[2]);$memory_3 = $_[3];Scalar::Util::weaken($_[3]) if ref($_[3]);
#line 1138
$memory_5 = $memory_0->{'left'};
#line 1138
$memory_4 = type_checker_priv::check_val($memory_5, $memory_1, $memory_2, $memory_3);
#line 1138
undef($memory_5);
#line 1139
$memory_5 = ptd_system::can_delete($memory_4, $memory_1, $memory_3);
#line 1139
$memory_4 = $memory_5;
#line 1139
undef($memory_5);
#line 1140
$memory_5 = $memory_4->{'type'};
#line 1140
$memory_5 = c_rt_lib::ov_is($memory_5, 'tct_rec');
#line 1140
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 1140
if (c_rt_lib::check_true($memory_5)) {goto label_56;}
#line 1141
$memory_6 = $memory_4->{'type'};
#line 1141
$memory_6 = c_rt_lib::ov_as($memory_6, 'tct_rec');
#line 1142
$memory_7 = $memory_0->{'right'};
#line 1142
$memory_7 = $memory_7->{'value'};
#line 1142
$memory_7 = c_rt_lib::ov_as($memory_7, 'hash_key');
#line 1143
$memory_8 = hash::has_key($memory_6, $memory_7);
#line 1143
$memory_8 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 1143
$memory_8 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 1143
if (c_rt_lib::check_true($memory_8)) {goto label_41;}
#line 1144
$memory_9 = type_checker_priv::is_known($memory_4);
#line 1144
$memory_9 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_9));
#line 1144
if (c_rt_lib::check_true($memory_9)) {goto label_27;}
#line 1144
$memory_10 = "unknown record key: ";
#line 1144
$memory_10 = $memory_10 . $memory_7;
#line 1144
type_checker_priv::add_error($memory_3, $memory_10);
#line 1144
undef($memory_10);
#line 1144
goto label_27;
#line 1144
label_27:
#line 1144
undef($memory_9);
#line 1145
$memory_9 = tct::tct_im();
#line 1145
$memory_10 = $memory_9;
#line 1145
 if (c_rt_lib::get_hashcount($memory_4) > 1) {$memory_4 = {%{$memory_4}};}$memory_4->{'type'} = $memory_10;
#line 1145
undef($memory_9);
#line 1145
undef($memory_10);
#line 1146
undef($memory_0);
#line 1146
undef($memory_5);
#line 1146
undef($memory_6);
#line 1146
undef($memory_7);
#line 1146
undef($memory_8);
#line 1146
$_[1] = $memory_1;$_[2] = $memory_2;$_[3] = $memory_3;return $memory_4;
#line 1147
goto label_41;
#line 1147
label_41:
#line 1147
undef($memory_8);
#line 1148
$memory_8 = hash::get_value($memory_6, $memory_7);
#line 1148
$memory_9 = $memory_8;
#line 1148
 if (c_rt_lib::get_hashcount($memory_4) > 1) {$memory_4 = {%{$memory_4}};}$memory_4->{'type'} = $memory_9;
#line 1148
undef($memory_8);
#line 1148
undef($memory_9);
#line 1149
undef($memory_0);
#line 1149
undef($memory_5);
#line 1149
undef($memory_6);
#line 1149
undef($memory_7);
#line 1149
$_[1] = $memory_1;$_[2] = $memory_2;$_[3] = $memory_3;return $memory_4;
#line 1149
undef($memory_6);
#line 1149
undef($memory_7);
#line 1150
goto label_56;
#line 1150
label_56:
#line 1150
undef($memory_5);
#line 1151
$memory_5 = $memory_4->{'type'};
#line 1151
$memory_5 = c_rt_lib::ov_is($memory_5, 'tct_hash');
#line 1151
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 1151
if (c_rt_lib::check_true($memory_5)) {goto label_72;}
#line 1152
$memory_6 = $memory_4->{'type'};
#line 1152
$memory_6 = c_rt_lib::ov_as($memory_6, 'tct_hash');
#line 1152
$memory_7 = $memory_6;
#line 1152
 if (c_rt_lib::get_hashcount($memory_4) > 1) {$memory_4 = {%{$memory_4}};}$memory_4->{'type'} = $memory_7;
#line 1152
undef($memory_6);
#line 1152
undef($memory_7);
#line 1153
undef($memory_0);
#line 1153
undef($memory_5);
#line 1153
$_[1] = $memory_1;$_[2] = $memory_2;$_[3] = $memory_3;return $memory_4;
#line 1154
goto label_72;
#line 1154
label_72:
#line 1154
undef($memory_5);
#line 1155
$memory_7 = {};
#line 1155
$memory_6 = tct::rec($memory_7);
#line 1155
undef($memory_7);
#line 1155
$memory_5 = ptd_system::is_accepted($memory_4, $memory_6, $memory_1, $memory_3);
#line 1155
undef($memory_6);
#line 1155
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 1155
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 1155
if (c_rt_lib::check_true($memory_5)) {goto label_91;}
#line 1156
$memory_6 = "binary operator -> can be applied only to record : ";
#line 1157
$memory_8 = $memory_4->{'type'};
#line 1157
$memory_7 = type_checker_priv::get_print_tct_type_name($memory_8);
#line 1157
undef($memory_8);
#line 1157
$memory_6 = $memory_6 . $memory_7;
#line 1157
undef($memory_7);
#line 1157
type_checker_priv::add_error($memory_3, $memory_6);
#line 1157
undef($memory_6);
#line 1158
goto label_91;
#line 1158
label_91:
#line 1158
undef($memory_5);
#line 1159
$memory_5 = tct::tct_im();
#line 1159
$memory_6 = $memory_5;
#line 1159
 if (c_rt_lib::get_hashcount($memory_4) > 1) {$memory_4 = {%{$memory_4}};}$memory_4->{'type'} = $memory_6;
#line 1159
undef($memory_5);
#line 1159
undef($memory_6);
#line 1160
undef($memory_0);
#line 1160
$_[1] = $memory_1;$_[2] = $memory_2;$_[3] = $memory_3;return $memory_4;
#line 1160
undef($memory_4);
#line 1160
undef($memory_0);
#line 1160
$_[1] = $memory_1;$_[2] = $memory_2;$_[3] = $memory_3;return;
$_[1] = $memory_1;$_[2] = $memory_2;$_[3] = $memory_3;}

sub type_checker_priv::get_type_from_bin_op_and_check($$$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;$memory_0 = $_[0];$memory_1 = $_[1];Scalar::Util::weaken($_[1]) if ref($_[1]);$memory_2 = $_[2];Scalar::Util::weaken($_[2]) if ref($_[2]);$memory_3 = $_[3];Scalar::Util::weaken($_[3]) if ref($_[3]);
#line 1165
$memory_4 = $memory_0->{'op'};
#line 1166
$memory_6 = $memory_0->{'right'};
#line 1166
$memory_5 = type_checker_priv::check_val($memory_6, $memory_1, $memory_2, $memory_3);
#line 1166
undef($memory_6);
#line 1167
$memory_6 = "=";
#line 1167
$memory_6 = c_rt_lib::to_nl($memory_4 eq $memory_6);
#line 1167
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 1167
if (c_rt_lib::check_true($memory_6)) {goto label_69;}
#line 1168
$memory_7 = $memory_5->{'type'};
#line 1168
$memory_7 = c_rt_lib::ov_is($memory_7, 'tct_void');
#line 1168
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 1168
if (c_rt_lib::check_true($memory_7)) {goto label_28;}
#line 1169
$memory_8 = "cannot use 'void' type returned from function as value";
#line 1169
type_checker_priv::add_error($memory_3, $memory_8);
#line 1169
undef($memory_8);
#line 1170
$memory_9 = tct::tct_im();
#line 1170
$memory_10 = c_rt_lib::ov_mk_none('speculation');
#line 1170
$memory_8 = {type => $memory_9,src => $memory_10,};
#line 1170
undef($memory_9);
#line 1170
undef($memory_10);
#line 1170
undef($memory_0);
#line 1170
undef($memory_4);
#line 1170
undef($memory_5);
#line 1170
undef($memory_6);
#line 1170
undef($memory_7);
#line 1170
$_[1] = $memory_1;$_[2] = $memory_2;$_[3] = $memory_3;return $memory_8;
#line 1170
undef($memory_8);
#line 1171
goto label_28;
#line 1171
label_28:
#line 1171
undef($memory_7);
#line 1172
$memory_8 = $memory_3->{'errors'};
#line 1172
$memory_7 = array::len($memory_8);
#line 1172
undef($memory_8);
#line 1173
$memory_9 = $memory_0->{'left'};
#line 1173
$memory_8 = type_checker_priv::get_type_left_side_equation($memory_9, $memory_1, $memory_2, $memory_3);
#line 1173
undef($memory_9);
#line 1174
$memory_10 = $memory_3->{'errors'};
#line 1174
$memory_9 = array::len($memory_10);
#line 1174
undef($memory_10);
#line 1174
$memory_9 = $memory_9 - $memory_7;
#line 1174
$memory_10 = 0;
#line 1174
$memory_9 = c_rt_lib::to_nl($memory_9 > $memory_10);
#line 1174
undef($memory_10);
#line 1174
$memory_9 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_9));
#line 1174
if (c_rt_lib::check_true($memory_9)) {goto label_53;}
#line 1174
undef($memory_0);
#line 1174
undef($memory_4);
#line 1174
undef($memory_5);
#line 1174
undef($memory_6);
#line 1174
undef($memory_7);
#line 1174
undef($memory_9);
#line 1174
$_[1] = $memory_1;$_[2] = $memory_2;$_[3] = $memory_3;return $memory_8;
#line 1174
goto label_53;
#line 1174
label_53:
#line 1174
undef($memory_9);
#line 1175
$memory_10 = $memory_0->{'left'};
#line 1175
$memory_9 = type_checker_priv::set_type_to_lval($memory_10, $memory_8, $memory_5, $memory_1, $memory_2, $memory_3);
#line 1175
undef($memory_10);
#line 1175
undef($memory_0);
#line 1175
undef($memory_4);
#line 1175
undef($memory_5);
#line 1175
undef($memory_6);
#line 1175
undef($memory_7);
#line 1175
undef($memory_8);
#line 1175
$_[1] = $memory_1;$_[2] = $memory_2;$_[3] = $memory_3;return $memory_9;
#line 1175
undef($memory_9);
#line 1175
undef($memory_7);
#line 1175
undef($memory_8);
#line 1176
goto label_69;
#line 1176
label_69:
#line 1176
undef($memory_6);
#line 1177
$memory_8 = $memory_0->{'left'};
#line 1177
$memory_7 = type_checker_priv::check_val($memory_8, $memory_1, $memory_2, $memory_3);
#line 1177
undef($memory_8);
#line 1177
$memory_6 = ptd_system::can_delete($memory_7, $memory_1, $memory_3);
#line 1177
undef($memory_7);
#line 1179
$memory_8 = tct::tct_im();
#line 1179
$memory_9 = $memory_6->{'src'};
#line 1179
$memory_7 = {type => $memory_8,src => $memory_9,};
#line 1179
undef($memory_8);
#line 1179
undef($memory_9);
#line 1180
$memory_8 = "->";
#line 1180
$memory_8 = c_rt_lib::to_nl($memory_4 eq $memory_8);
#line 1180
$memory_8 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 1180
if (c_rt_lib::check_true($memory_8)) {goto label_95;}
#line 1181
$memory_9 = type_checker_priv::get_type_record_key($memory_0, $memory_1, $memory_2, $memory_3);
#line 1181
undef($memory_0);
#line 1181
undef($memory_4);
#line 1181
undef($memory_5);
#line 1181
undef($memory_6);
#line 1181
undef($memory_7);
#line 1181
undef($memory_8);
#line 1181
$_[1] = $memory_1;$_[2] = $memory_2;$_[3] = $memory_3;return $memory_9;
#line 1181
undef($memory_9);
#line 1182
goto label_95;
#line 1182
label_95:
#line 1182
undef($memory_8);
#line 1183
$memory_8 = "ARRAY_INDEX";
#line 1183
$memory_8 = c_rt_lib::to_nl($memory_4 eq $memory_8);
#line 1183
$memory_8 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 1183
if (c_rt_lib::check_true($memory_8)) {goto label_159;}
#line 1184
$memory_11 = tct::tct_im();
#line 1184
$memory_10 = tct::arr($memory_11);
#line 1184
undef($memory_11);
#line 1184
$memory_9 = ptd_system::is_accepted($memory_6, $memory_10, $memory_1, $memory_3);
#line 1184
undef($memory_10);
#line 1184
$memory_9 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_9));
#line 1184
$memory_9 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_9));
#line 1184
if (c_rt_lib::check_true($memory_9)) {goto label_125;}
#line 1185
$memory_10 = "array operator '[]' can be applied only to array, not for: ";
#line 1186
$memory_12 = $memory_6->{'type'};
#line 1186
$memory_11 = type_checker_priv::get_print_tct_type_name($memory_12);
#line 1186
undef($memory_12);
#line 1186
$memory_10 = $memory_10 . $memory_11;
#line 1186
undef($memory_11);
#line 1186
type_checker_priv::add_error($memory_3, $memory_10);
#line 1186
undef($memory_10);
#line 1187
undef($memory_0);
#line 1187
undef($memory_4);
#line 1187
undef($memory_5);
#line 1187
undef($memory_6);
#line 1187
undef($memory_8);
#line 1187
undef($memory_9);
#line 1187
$_[1] = $memory_1;$_[2] = $memory_2;$_[3] = $memory_3;return $memory_7;
#line 1188
goto label_125;
#line 1188
label_125:
#line 1188
undef($memory_9);
#line 1189
$memory_10 = tct::sim();
#line 1189
$memory_9 = ptd_system::is_accepted($memory_5, $memory_10, $memory_1, $memory_3);
#line 1189
undef($memory_10);
#line 1189
$memory_9 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_9));
#line 1189
$memory_9 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_9));
#line 1189
if (c_rt_lib::check_true($memory_9)) {goto label_137;}
#line 1190
$memory_10 = "array index should be number";
#line 1190
type_checker_priv::add_error($memory_3, $memory_10);
#line 1190
undef($memory_10);
#line 1191
goto label_137;
#line 1191
label_137:
#line 1191
undef($memory_9);
#line 1192
$memory_9 = $memory_6->{'type'};
#line 1192
$memory_9 = c_rt_lib::ov_is($memory_9, 'tct_arr');
#line 1192
$memory_9 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_9));
#line 1192
if (c_rt_lib::check_true($memory_9)) {goto label_150;}
#line 1192
$memory_10 = $memory_6->{'type'};
#line 1192
$memory_10 = c_rt_lib::ov_as($memory_10, 'tct_arr');
#line 1192
$memory_11 = $memory_10;
#line 1192
 if (c_rt_lib::get_hashcount($memory_6) > 1) {$memory_6 = {%{$memory_6}};}$memory_6->{'type'} = $memory_11;
#line 1192
undef($memory_10);
#line 1192
undef($memory_11);
#line 1192
goto label_150;
#line 1192
label_150:
#line 1192
undef($memory_9);
#line 1193
undef($memory_0);
#line 1193
undef($memory_4);
#line 1193
undef($memory_5);
#line 1193
undef($memory_7);
#line 1193
undef($memory_8);
#line 1193
$_[1] = $memory_1;$_[2] = $memory_2;$_[3] = $memory_3;return $memory_6;
#line 1194
goto label_159;
#line 1194
label_159:
#line 1194
undef($memory_8);
#line 1195
$memory_8 = "HASH_INDEX";
#line 1195
$memory_8 = c_rt_lib::to_nl($memory_4 eq $memory_8);
#line 1195
$memory_8 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 1195
if (c_rt_lib::check_true($memory_8)) {goto label_218;}
#line 1196
$memory_11 = tct::tct_im();
#line 1196
$memory_10 = tct::hash($memory_11);
#line 1196
undef($memory_11);
#line 1196
$memory_9 = ptd_system::is_accepted($memory_6, $memory_10, $memory_1, $memory_3);
#line 1196
undef($memory_10);
#line 1196
$memory_9 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_9));
#line 1196
$memory_9 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_9));
#line 1196
if (c_rt_lib::check_true($memory_9)) {goto label_184;}
#line 1197
$memory_10 = "hash operator '{}' can be applied only to hash";
#line 1197
type_checker_priv::add_error($memory_3, $memory_10);
#line 1197
undef($memory_10);
#line 1198
undef($memory_0);
#line 1198
undef($memory_4);
#line 1198
undef($memory_5);
#line 1198
undef($memory_6);
#line 1198
undef($memory_8);
#line 1198
undef($memory_9);
#line 1198
$_[1] = $memory_1;$_[2] = $memory_2;$_[3] = $memory_3;return $memory_7;
#line 1199
goto label_184;
#line 1199
label_184:
#line 1199
undef($memory_9);
#line 1200
$memory_10 = tct::sim();
#line 1200
$memory_9 = ptd_system::is_accepted($memory_5, $memory_10, $memory_1, $memory_3);
#line 1200
undef($memory_10);
#line 1200
$memory_9 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_9));
#line 1200
$memory_9 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_9));
#line 1200
if (c_rt_lib::check_true($memory_9)) {goto label_196;}
#line 1201
$memory_10 = "hash index should be string";
#line 1201
type_checker_priv::add_error($memory_3, $memory_10);
#line 1201
undef($memory_10);
#line 1202
goto label_196;
#line 1202
label_196:
#line 1202
undef($memory_9);
#line 1203
$memory_9 = $memory_6->{'type'};
#line 1203
$memory_9 = c_rt_lib::ov_is($memory_9, 'tct_hash');
#line 1203
$memory_9 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_9));
#line 1203
if (c_rt_lib::check_true($memory_9)) {goto label_209;}
#line 1203
$memory_10 = $memory_6->{'type'};
#line 1203
$memory_10 = c_rt_lib::ov_as($memory_10, 'tct_hash');
#line 1203
$memory_11 = $memory_10;
#line 1203
 if (c_rt_lib::get_hashcount($memory_6) > 1) {$memory_6 = {%{$memory_6}};}$memory_6->{'type'} = $memory_11;
#line 1203
undef($memory_10);
#line 1203
undef($memory_11);
#line 1203
goto label_209;
#line 1203
label_209:
#line 1203
undef($memory_9);
#line 1204
undef($memory_0);
#line 1204
undef($memory_4);
#line 1204
undef($memory_5);
#line 1204
undef($memory_7);
#line 1204
undef($memory_8);
#line 1204
$_[1] = $memory_1;$_[2] = $memory_2;$_[3] = $memory_3;return $memory_6;
#line 1205
goto label_218;
#line 1205
label_218:
#line 1205
undef($memory_8);
#line 1206
$memory_8 = "[]=";
#line 1206
$memory_8 = c_rt_lib::to_nl($memory_4 eq $memory_8);
#line 1206
$memory_8 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 1206
if (c_rt_lib::check_true($memory_8)) {goto label_279;}
#line 1207
$memory_11 = tct::tct_im();
#line 1207
$memory_10 = tct::arr($memory_11);
#line 1207
undef($memory_11);
#line 1207
$memory_9 = ptd_system::is_accepted($memory_6, $memory_10, $memory_1, $memory_3);
#line 1207
undef($memory_10);
#line 1207
$memory_9 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_9));
#line 1207
$memory_9 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_9));
#line 1207
if (c_rt_lib::check_true($memory_9)) {goto label_243;}
#line 1208
$memory_10 = "array operator '[]=' can be applied only to array";
#line 1208
type_checker_priv::add_error($memory_3, $memory_10);
#line 1208
undef($memory_10);
#line 1209
undef($memory_0);
#line 1209
undef($memory_4);
#line 1209
undef($memory_5);
#line 1209
undef($memory_6);
#line 1209
undef($memory_8);
#line 1209
undef($memory_9);
#line 1209
$_[1] = $memory_1;$_[2] = $memory_2;$_[3] = $memory_3;return $memory_7;
#line 1210
goto label_243;
#line 1210
label_243:
#line 1210
undef($memory_9);
#line 1211
$memory_10 = $memory_5->{'type'};
#line 1211
$memory_9 = tct::arr($memory_10);
#line 1211
undef($memory_10);
#line 1211
$memory_10 = $memory_9;
#line 1211
 if (c_rt_lib::get_hashcount($memory_5) > 1) {$memory_5 = {%{$memory_5}};}$memory_5->{'type'} = $memory_10;
#line 1211
undef($memory_9);
#line 1211
undef($memory_10);
#line 1212
$memory_9 = $memory_0->{'left'};
#line 1212
$memory_11 = tct::empty();
#line 1212
$memory_10 = tct::arr($memory_11);
#line 1212
undef($memory_11);
#line 1212
type_checker_priv::set_type_to_lval_spec($memory_9, $memory_6, $memory_5, $memory_10, $memory_1, $memory_2, $memory_3);
#line 1212
undef($memory_10);
#line 1212
undef($memory_9);
#line 1214
$memory_9 = $memory_6->{'type'};
#line 1214
$memory_9 = c_rt_lib::ov_is($memory_9, 'tct_arr');
#line 1214
$memory_9 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_9));
#line 1214
if (c_rt_lib::check_true($memory_9)) {goto label_270;}
#line 1214
$memory_10 = $memory_6->{'type'};
#line 1214
$memory_10 = c_rt_lib::ov_as($memory_10, 'tct_arr');
#line 1214
$memory_11 = $memory_10;
#line 1214
 if (c_rt_lib::get_hashcount($memory_6) > 1) {$memory_6 = {%{$memory_6}};}$memory_6->{'type'} = $memory_11;
#line 1214
undef($memory_10);
#line 1214
undef($memory_11);
#line 1214
goto label_270;
#line 1214
label_270:
#line 1214
undef($memory_9);
#line 1215
undef($memory_0);
#line 1215
undef($memory_4);
#line 1215
undef($memory_5);
#line 1215
undef($memory_7);
#line 1215
undef($memory_8);
#line 1215
$_[1] = $memory_1;$_[2] = $memory_2;$_[3] = $memory_3;return $memory_6;
#line 1217
goto label_279;
#line 1217
label_279:
#line 1217
undef($memory_8);
#line 1218
$memory_8 = tc_types::get_bin_op_def($memory_4);
#line 1219
$memory_10 = $memory_8->{'arg1'};
#line 1219
$memory_9 = ptd_system::is_accepted($memory_6, $memory_10, $memory_1, $memory_3);
#line 1219
undef($memory_10);
#line 1219
$memory_9 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_9));
#line 1219
$memory_9 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_9));
#line 1219
if (c_rt_lib::check_true($memory_9)) {goto label_296;}
#line 1220
$memory_10 = "incorrect type of the first argument operator '";
#line 1220
$memory_10 = $memory_10 . $memory_4;
#line 1220
$memory_11 = "'";
#line 1220
$memory_10 = $memory_10 . $memory_11;
#line 1220
undef($memory_11);
#line 1220
type_checker_priv::add_error($memory_3, $memory_10);
#line 1220
undef($memory_10);
#line 1221
goto label_296;
#line 1221
label_296:
#line 1221
undef($memory_9);
#line 1222
$memory_10 = $memory_8->{'arg2'};
#line 1222
$memory_9 = ptd_system::is_accepted($memory_5, $memory_10, $memory_1, $memory_3);
#line 1222
undef($memory_10);
#line 1222
$memory_9 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_9));
#line 1222
$memory_9 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_9));
#line 1222
if (c_rt_lib::check_true($memory_9)) {goto label_312;}
#line 1223
$memory_10 = "incorrect type of the second argument operator '";
#line 1223
$memory_10 = $memory_10 . $memory_4;
#line 1223
$memory_11 = "'";
#line 1223
$memory_10 = $memory_10 . $memory_11;
#line 1223
undef($memory_11);
#line 1223
type_checker_priv::add_error($memory_3, $memory_10);
#line 1223
undef($memory_10);
#line 1224
goto label_312;
#line 1224
label_312:
#line 1224
undef($memory_9);
#line 1225
$memory_10 = $memory_8->{'ret'};
#line 1225
$memory_11 = c_rt_lib::ov_mk_none('speculation');
#line 1225
$memory_9 = {type => $memory_10,src => $memory_11,};
#line 1225
undef($memory_10);
#line 1225
undef($memory_11);
#line 1225
undef($memory_0);
#line 1225
undef($memory_4);
#line 1225
undef($memory_5);
#line 1225
undef($memory_6);
#line 1225
undef($memory_7);
#line 1225
undef($memory_8);
#line 1225
$_[1] = $memory_1;$_[2] = $memory_2;$_[3] = $memory_3;return $memory_9;
#line 1225
undef($memory_9);
#line 1225
undef($memory_4);
#line 1225
undef($memory_5);
#line 1225
undef($memory_6);
#line 1225
undef($memory_7);
#line 1225
undef($memory_8);
#line 1225
undef($memory_0);
#line 1225
$_[1] = $memory_1;$_[2] = $memory_2;$_[3] = $memory_3;return;
$_[1] = $memory_1;$_[2] = $memory_2;$_[3] = $memory_3;}

sub type_checker_priv::get_print_tct_type_name($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;$memory_0 = $_[0];
#line 1229
$memory_1 = c_rt_lib::ov_is($memory_0, 'tct_empty');
#line 1229
if (c_rt_lib::check_true($memory_1)) {goto label_21;}
#line 1231
$memory_1 = c_rt_lib::ov_is($memory_0, 'tct_im');
#line 1231
if (c_rt_lib::check_true($memory_1)) {goto label_28;}
#line 1233
$memory_1 = c_rt_lib::ov_is($memory_0, 'tct_void');
#line 1233
if (c_rt_lib::check_true($memory_1)) {goto label_35;}
#line 1235
$memory_1 = c_rt_lib::ov_is($memory_0, 'tct_sim');
#line 1235
if (c_rt_lib::check_true($memory_1)) {goto label_42;}
#line 1237
$memory_1 = c_rt_lib::ov_is($memory_0, 'tct_ref');
#line 1237
if (c_rt_lib::check_true($memory_1)) {goto label_49;}
#line 1239
$memory_1 = c_rt_lib::ov_is($memory_0, 'tct_arr');
#line 1239
if (c_rt_lib::check_true($memory_1)) {goto label_60;}
#line 1241
$memory_1 = c_rt_lib::ov_is($memory_0, 'tct_var');
#line 1241
if (c_rt_lib::check_true($memory_1)) {goto label_76;}
#line 1251
$memory_1 = c_rt_lib::ov_is($memory_0, 'tct_rec');
#line 1251
if (c_rt_lib::check_true($memory_1)) {goto label_131;}
#line 1257
$memory_1 = c_rt_lib::ov_is($memory_0, 'tct_hash');
#line 1257
if (c_rt_lib::check_true($memory_1)) {goto label_167;}
#line 1257
$memory_1 = "NOMATCHALERT";
#line 1257
$memory_1 = [$memory_1,$memory_0];
#line 1257
die(dfile::ssave($memory_1));
#line 1229
label_21:
#line 1230
$memory_2 = "";
#line 1230
undef($memory_0);
#line 1230
undef($memory_1);
#line 1230
return $memory_2;
#line 1230
undef($memory_2);
#line 1231
goto label_183;
#line 1231
label_28:
#line 1232
$memory_2 = "ptd::ptd_im()";
#line 1232
undef($memory_0);
#line 1232
undef($memory_1);
#line 1232
return $memory_2;
#line 1232
undef($memory_2);
#line 1233
goto label_183;
#line 1233
label_35:
#line 1234
$memory_2 = "ptd::void()";
#line 1234
undef($memory_0);
#line 1234
undef($memory_1);
#line 1234
return $memory_2;
#line 1234
undef($memory_2);
#line 1235
goto label_183;
#line 1235
label_42:
#line 1236
$memory_2 = "ptd::sim()";
#line 1236
undef($memory_0);
#line 1236
undef($memory_1);
#line 1236
return $memory_2;
#line 1236
undef($memory_2);
#line 1237
goto label_183;
#line 1237
label_49:
#line 1237
$memory_2 = c_rt_lib::ov_as($memory_0, 'tct_ref');
#line 1238
$memory_3 = "\@";
#line 1238
$memory_3 = $memory_3 . $memory_2;
#line 1238
undef($memory_0);
#line 1238
undef($memory_1);
#line 1238
undef($memory_2);
#line 1238
return $memory_3;
#line 1238
undef($memory_3);
#line 1238
undef($memory_2);
#line 1239
goto label_183;
#line 1239
label_60:
#line 1239
$memory_2 = c_rt_lib::ov_as($memory_0, 'tct_arr');
#line 1240
$memory_3 = "ptd::arr(";
#line 1240
$memory_4 = type_checker_priv::get_print_tct_type_name($memory_2);
#line 1240
$memory_3 = $memory_3 . $memory_4;
#line 1240
undef($memory_4);
#line 1240
$memory_4 = ")";
#line 1240
$memory_3 = $memory_3 . $memory_4;
#line 1240
undef($memory_4);
#line 1240
undef($memory_0);
#line 1240
undef($memory_1);
#line 1240
undef($memory_2);
#line 1240
return $memory_3;
#line 1240
undef($memory_3);
#line 1240
undef($memory_2);
#line 1241
goto label_183;
#line 1241
label_76:
#line 1241
$memory_2 = c_rt_lib::ov_as($memory_0, 'tct_var');
#line 1242
$memory_3 = "ptd::var(";
#line 1243
$memory_6 = c_rt_lib::init_iter($memory_2);
#line 1243
label_80:
#line 1243
$memory_4 = c_rt_lib::is_end_hash($memory_6);
#line 1243
if (c_rt_lib::check_true($memory_4)) {goto label_116;}
#line 1243
$memory_4 = c_rt_lib::get_key_iter($memory_6);
#line 1243
$memory_5 = c_rt_lib::hash_get_value($memory_2, $memory_4);
#line 1244
$memory_7 = c_rt_lib::ov_is($memory_5, 'with_param');
#line 1244
if (c_rt_lib::check_true($memory_7)) {goto label_92;}
#line 1246
$memory_7 = c_rt_lib::ov_is($memory_5, 'no_param');
#line 1246
if (c_rt_lib::check_true($memory_7)) {goto label_106;}
#line 1246
$memory_7 = "NOMATCHALERT";
#line 1246
$memory_7 = [$memory_7,$memory_5];
#line 1246
die(dfile::ssave($memory_7));
#line 1244
label_92:
#line 1244
$memory_8 = c_rt_lib::ov_as($memory_5, 'with_param');
#line 1245
$memory_9 = " => ";
#line 1245
$memory_9 = $memory_4 . $memory_9;
#line 1245
$memory_10 = type_checker_priv::get_print_tct_type_name($memory_8);
#line 1245
$memory_9 = $memory_9 . $memory_10;
#line 1245
undef($memory_10);
#line 1245
$memory_10 = ", ";
#line 1245
$memory_9 = $memory_9 . $memory_10;
#line 1245
undef($memory_10);
#line 1245
$memory_3 = $memory_3 . $memory_9;
#line 1245
undef($memory_9);
#line 1245
undef($memory_8);
#line 1246
goto label_112;
#line 1246
label_106:
#line 1247
$memory_8 = ", ";
#line 1247
$memory_8 = $memory_4 . $memory_8;
#line 1247
$memory_3 = $memory_3 . $memory_8;
#line 1247
undef($memory_8);
#line 1248
goto label_112;
#line 1248
label_112:
#line 1248
undef($memory_7);
#line 1249
$memory_6 = c_rt_lib::next_iter($memory_6);
#line 1249
goto label_80;
#line 1249
label_116:
#line 1249
undef($memory_4);
#line 1249
undef($memory_5);
#line 1249
undef($memory_6);
#line 1250
$memory_4 = ")";
#line 1250
$memory_4 = $memory_3 . $memory_4;
#line 1250
undef($memory_0);
#line 1250
undef($memory_1);
#line 1250
undef($memory_2);
#line 1250
undef($memory_3);
#line 1250
return $memory_4;
#line 1250
undef($memory_4);
#line 1250
undef($memory_3);
#line 1250
undef($memory_2);
#line 1251
goto label_183;
#line 1251
label_131:
#line 1251
$memory_2 = c_rt_lib::ov_as($memory_0, 'tct_rec');
#line 1252
$memory_3 = "ptd::rec(";
#line 1253
$memory_6 = c_rt_lib::init_iter($memory_2);
#line 1253
label_135:
#line 1253
$memory_4 = c_rt_lib::is_end_hash($memory_6);
#line 1253
if (c_rt_lib::check_true($memory_4)) {goto label_152;}
#line 1253
$memory_4 = c_rt_lib::get_key_iter($memory_6);
#line 1253
$memory_5 = c_rt_lib::hash_get_value($memory_2, $memory_4);
#line 1254
$memory_7 = " => ";
#line 1254
$memory_7 = $memory_4 . $memory_7;
#line 1254
$memory_8 = type_checker_priv::get_print_tct_type_name($memory_5);
#line 1254
$memory_7 = $memory_7 . $memory_8;
#line 1254
undef($memory_8);
#line 1254
$memory_8 = ", ";
#line 1254
$memory_7 = $memory_7 . $memory_8;
#line 1254
undef($memory_8);
#line 1254
$memory_3 = $memory_3 . $memory_7;
#line 1254
undef($memory_7);
#line 1255
$memory_6 = c_rt_lib::next_iter($memory_6);
#line 1255
goto label_135;
#line 1255
label_152:
#line 1255
undef($memory_4);
#line 1255
undef($memory_5);
#line 1255
undef($memory_6);
#line 1256
$memory_4 = ")";
#line 1256
$memory_4 = $memory_3 . $memory_4;
#line 1256
undef($memory_0);
#line 1256
undef($memory_1);
#line 1256
undef($memory_2);
#line 1256
undef($memory_3);
#line 1256
return $memory_4;
#line 1256
undef($memory_4);
#line 1256
undef($memory_3);
#line 1256
undef($memory_2);
#line 1257
goto label_183;
#line 1257
label_167:
#line 1257
$memory_2 = c_rt_lib::ov_as($memory_0, 'tct_hash');
#line 1258
$memory_3 = "ptd::hash(";
#line 1258
$memory_4 = type_checker_priv::get_print_tct_type_name($memory_2);
#line 1258
$memory_3 = $memory_3 . $memory_4;
#line 1258
undef($memory_4);
#line 1258
$memory_4 = ")";
#line 1258
$memory_3 = $memory_3 . $memory_4;
#line 1258
undef($memory_4);
#line 1258
undef($memory_0);
#line 1258
undef($memory_1);
#line 1258
undef($memory_2);
#line 1258
return $memory_3;
#line 1258
undef($memory_3);
#line 1258
undef($memory_2);
#line 1259
goto label_183;
#line 1259
label_183:
#line 1259
undef($memory_1);
#line 1259
undef($memory_0);
#line 1259
return;
}

sub type_checker_priv::get_print_tct_label($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;$memory_0 = $_[0];
#line 1263
$memory_1 = c_rt_lib::ov_is($memory_0, 'tct_empty');
#line 1263
if (c_rt_lib::check_true($memory_1)) {goto label_21;}
#line 1265
$memory_1 = c_rt_lib::ov_is($memory_0, 'tct_im');
#line 1265
if (c_rt_lib::check_true($memory_1)) {goto label_28;}
#line 1267
$memory_1 = c_rt_lib::ov_is($memory_0, 'tct_void');
#line 1267
if (c_rt_lib::check_true($memory_1)) {goto label_35;}
#line 1269
$memory_1 = c_rt_lib::ov_is($memory_0, 'tct_sim');
#line 1269
if (c_rt_lib::check_true($memory_1)) {goto label_42;}
#line 1271
$memory_1 = c_rt_lib::ov_is($memory_0, 'tct_ref');
#line 1271
if (c_rt_lib::check_true($memory_1)) {goto label_49;}
#line 1273
$memory_1 = c_rt_lib::ov_is($memory_0, 'tct_arr');
#line 1273
if (c_rt_lib::check_true($memory_1)) {goto label_59;}
#line 1275
$memory_1 = c_rt_lib::ov_is($memory_0, 'tct_var');
#line 1275
if (c_rt_lib::check_true($memory_1)) {goto label_69;}
#line 1277
$memory_1 = c_rt_lib::ov_is($memory_0, 'tct_rec');
#line 1277
if (c_rt_lib::check_true($memory_1)) {goto label_79;}
#line 1279
$memory_1 = c_rt_lib::ov_is($memory_0, 'tct_hash');
#line 1279
if (c_rt_lib::check_true($memory_1)) {goto label_89;}
#line 1279
$memory_1 = "NOMATCHALERT";
#line 1279
$memory_1 = [$memory_1,$memory_0];
#line 1279
die(dfile::ssave($memory_1));
#line 1263
label_21:
#line 1264
$memory_2 = "ptd::ptd_empty";
#line 1264
undef($memory_0);
#line 1264
undef($memory_1);
#line 1264
return $memory_2;
#line 1264
undef($memory_2);
#line 1265
goto label_99;
#line 1265
label_28:
#line 1266
$memory_2 = "ptd::ptd_im";
#line 1266
undef($memory_0);
#line 1266
undef($memory_1);
#line 1266
return $memory_2;
#line 1266
undef($memory_2);
#line 1267
goto label_99;
#line 1267
label_35:
#line 1268
$memory_2 = "ptd::void";
#line 1268
undef($memory_0);
#line 1268
undef($memory_1);
#line 1268
return $memory_2;
#line 1268
undef($memory_2);
#line 1269
goto label_99;
#line 1269
label_42:
#line 1270
$memory_2 = "ptd::sim";
#line 1270
undef($memory_0);
#line 1270
undef($memory_1);
#line 1270
return $memory_2;
#line 1270
undef($memory_2);
#line 1271
goto label_99;
#line 1271
label_49:
#line 1271
$memory_2 = c_rt_lib::ov_as($memory_0, 'tct_ref');
#line 1272
$memory_3 = "ptd::ref";
#line 1272
undef($memory_0);
#line 1272
undef($memory_1);
#line 1272
undef($memory_2);
#line 1272
return $memory_3;
#line 1272
undef($memory_3);
#line 1272
undef($memory_2);
#line 1273
goto label_99;
#line 1273
label_59:
#line 1273
$memory_2 = c_rt_lib::ov_as($memory_0, 'tct_arr');
#line 1274
$memory_3 = "ptd::arr";
#line 1274
undef($memory_0);
#line 1274
undef($memory_1);
#line 1274
undef($memory_2);
#line 1274
return $memory_3;
#line 1274
undef($memory_3);
#line 1274
undef($memory_2);
#line 1275
goto label_99;
#line 1275
label_69:
#line 1275
$memory_2 = c_rt_lib::ov_as($memory_0, 'tct_var');
#line 1276
$memory_3 = "ptd::var";
#line 1276
undef($memory_0);
#line 1276
undef($memory_1);
#line 1276
undef($memory_2);
#line 1276
return $memory_3;
#line 1276
undef($memory_3);
#line 1276
undef($memory_2);
#line 1277
goto label_99;
#line 1277
label_79:
#line 1277
$memory_2 = c_rt_lib::ov_as($memory_0, 'tct_rec');
#line 1278
$memory_3 = "ptd::rec";
#line 1278
undef($memory_0);
#line 1278
undef($memory_1);
#line 1278
undef($memory_2);
#line 1278
return $memory_3;
#line 1278
undef($memory_3);
#line 1278
undef($memory_2);
#line 1279
goto label_99;
#line 1279
label_89:
#line 1279
$memory_2 = c_rt_lib::ov_as($memory_0, 'tct_hash');
#line 1280
$memory_3 = "ptd::hash";
#line 1280
undef($memory_0);
#line 1280
undef($memory_1);
#line 1280
undef($memory_2);
#line 1280
return $memory_3;
#line 1280
undef($memory_3);
#line 1280
undef($memory_2);
#line 1281
goto label_99;
#line 1281
label_99:
#line 1281
undef($memory_1);
#line 1281
undef($memory_0);
#line 1281
return;
}

sub type_checker_priv::get_print_check_info($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;my $memory_13;my $memory_14;my $memory_15;$memory_0 = $_[0];
#line 1285
$memory_1 = c_rt_lib::ov_is($memory_0, 'ok');
#line 1285
if (c_rt_lib::check_true($memory_1)) {goto label_7;}
#line 1287
$memory_1 = c_rt_lib::ov_is($memory_0, 'err');
#line 1287
if (c_rt_lib::check_true($memory_1)) {goto label_12;}
#line 1287
$memory_1 = "NOMATCHALERT";
#line 1287
$memory_1 = [$memory_1,$memory_0];
#line 1287
die(dfile::ssave($memory_1));
#line 1285
label_7:
#line 1286
$memory_2 = [];
#line 1286
die(dfile::ssave($memory_2));
#line 1286
undef($memory_2);
#line 1287
goto label_362;
#line 1287
label_12:
#line 1287
$memory_2 = c_rt_lib::ov_as($memory_0, 'err');
#line 1288
$memory_3 = " ";
#line 1289
$memory_5 = $memory_2->{'stack'};
#line 1289
$memory_4 = array::len($memory_5);
#line 1289
undef($memory_5);
#line 1289
$memory_5 = 1;
#line 1289
$memory_4 = $memory_4 - $memory_5;
#line 1289
undef($memory_5);
#line 1289
label_21:
#line 1289
$memory_5 = 0;
#line 1289
$memory_5 = c_rt_lib::to_nl($memory_4 >= $memory_5);
#line 1289
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 1289
if (c_rt_lib::check_true($memory_5)) {goto label_81;}
#line 1290
$memory_6 = $memory_2->{'stack'};
#line 1290
$memory_6 = $memory_6->[$memory_4];
#line 1290
$memory_7 = c_rt_lib::ov_is($memory_6, 'ptd_arr');
#line 1290
if (c_rt_lib::check_true($memory_7)) {goto label_39;}
#line 1292
$memory_7 = c_rt_lib::ov_is($memory_6, 'ptd_var');
#line 1292
if (c_rt_lib::check_true($memory_7)) {goto label_44;}
#line 1294
$memory_7 = c_rt_lib::ov_is($memory_6, 'ptd_rec');
#line 1294
if (c_rt_lib::check_true($memory_7)) {goto label_55;}
#line 1296
$memory_7 = c_rt_lib::ov_is($memory_6, 'ptd_hash');
#line 1296
if (c_rt_lib::check_true($memory_7)) {goto label_66;}
#line 1296
$memory_7 = "NOMATCHALERT";
#line 1296
$memory_7 = [$memory_7,$memory_6];
#line 1296
die(dfile::ssave($memory_7));
#line 1290
label_39:
#line 1291
$memory_8 = "ptd::arr";
#line 1291
$memory_3 = $memory_3 . $memory_8;
#line 1291
undef($memory_8);
#line 1292
goto label_71;
#line 1292
label_44:
#line 1292
$memory_8 = c_rt_lib::ov_as($memory_6, 'ptd_var');
#line 1293
$memory_9 = "ptd::var(";
#line 1293
$memory_9 = $memory_9 . $memory_8;
#line 1293
$memory_10 = ")";
#line 1293
$memory_9 = $memory_9 . $memory_10;
#line 1293
undef($memory_10);
#line 1293
$memory_3 = $memory_3 . $memory_9;
#line 1293
undef($memory_9);
#line 1293
undef($memory_8);
#line 1294
goto label_71;
#line 1294
label_55:
#line 1294
$memory_8 = c_rt_lib::ov_as($memory_6, 'ptd_rec');
#line 1295
$memory_9 = "ptd::rec(";
#line 1295
$memory_9 = $memory_9 . $memory_8;
#line 1295
$memory_10 = ")";
#line 1295
$memory_9 = $memory_9 . $memory_10;
#line 1295
undef($memory_10);
#line 1295
$memory_3 = $memory_3 . $memory_9;
#line 1295
undef($memory_9);
#line 1295
undef($memory_8);
#line 1296
goto label_71;
#line 1296
label_66:
#line 1297
$memory_8 = "ptd::hash";
#line 1297
$memory_3 = $memory_3 . $memory_8;
#line 1297
undef($memory_8);
#line 1298
goto label_71;
#line 1298
label_71:
#line 1298
undef($memory_6);
#line 1298
undef($memory_7);
#line 1299
$memory_6 = "->";
#line 1299
$memory_3 = $memory_3 . $memory_6;
#line 1299
undef($memory_6);
#line 1289
$memory_6 = 1;
#line 1289
$memory_4 = $memory_4 - $memory_6;
#line 1289
undef($memory_6);
#line 1300
goto label_21;
#line 1300
label_81:
#line 1300
undef($memory_4);
#line 1300
undef($memory_5);
#line 1301
$memory_4 = $memory_2->{'from'};
#line 1301
$memory_4 = c_rt_lib::ov_is($memory_4, 'tct_rec');
#line 1301
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 1301
if (c_rt_lib::check_true($memory_5)) {goto label_90;}
#line 1301
$memory_4 = $memory_2->{'to'};
#line 1301
$memory_4 = c_rt_lib::ov_is($memory_4, 'tct_rec');
#line 1301
label_90:
#line 1301
undef($memory_5);
#line 1301
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 1301
if (c_rt_lib::check_true($memory_4)) {goto label_191;}
#line 1302
$memory_5 = $memory_2->{'from'};
#line 1302
$memory_5 = c_rt_lib::ov_as($memory_5, 'tct_rec');
#line 1302
$memory_8 = c_rt_lib::init_iter($memory_5);
#line 1302
label_97:
#line 1302
$memory_6 = c_rt_lib::is_end_hash($memory_8);
#line 1302
if (c_rt_lib::check_true($memory_6)) {goto label_137;}
#line 1302
$memory_6 = c_rt_lib::get_key_iter($memory_8);
#line 1302
$memory_7 = c_rt_lib::hash_get_value($memory_5, $memory_6);
#line 1303
$memory_10 = $memory_2->{'to'};
#line 1303
$memory_10 = c_rt_lib::ov_as($memory_10, 'tct_rec');
#line 1303
$memory_9 = hash::has_key($memory_10, $memory_6);
#line 1303
undef($memory_10);
#line 1303
$memory_9 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_9));
#line 1303
if (c_rt_lib::check_true($memory_9)) {goto label_111;}
#line 1303
undef($memory_9);
#line 1303
goto label_134;
#line 1303
goto label_111;
#line 1303
label_111:
#line 1303
undef($memory_9);
#line 1304
$memory_9 = "(ptd::rec with field: '";
#line 1304
$memory_9 = $memory_3 . $memory_9;
#line 1304
$memory_9 = $memory_9 . $memory_6;
#line 1304
$memory_10 = "' instead of ptd::rec without field: '";
#line 1304
$memory_9 = $memory_9 . $memory_10;
#line 1304
undef($memory_10);
#line 1304
$memory_9 = $memory_9 . $memory_6;
#line 1305
$memory_10 = "')";
#line 1305
$memory_9 = $memory_9 . $memory_10;
#line 1305
undef($memory_10);
#line 1305
undef($memory_0);
#line 1305
undef($memory_1);
#line 1305
undef($memory_2);
#line 1305
undef($memory_3);
#line 1305
undef($memory_4);
#line 1305
undef($memory_5);
#line 1305
undef($memory_6);
#line 1305
undef($memory_7);
#line 1305
undef($memory_8);
#line 1305
return $memory_9;
#line 1305
undef($memory_9);
#line 1305
label_134:
#line 1306
$memory_8 = c_rt_lib::next_iter($memory_8);
#line 1306
goto label_97;
#line 1306
label_137:
#line 1306
undef($memory_5);
#line 1306
undef($memory_6);
#line 1306
undef($memory_7);
#line 1306
undef($memory_8);
#line 1307
$memory_5 = $memory_2->{'to'};
#line 1307
$memory_5 = c_rt_lib::ov_as($memory_5, 'tct_rec');
#line 1307
$memory_8 = c_rt_lib::init_iter($memory_5);
#line 1307
label_145:
#line 1307
$memory_6 = c_rt_lib::is_end_hash($memory_8);
#line 1307
if (c_rt_lib::check_true($memory_6)) {goto label_185;}
#line 1307
$memory_6 = c_rt_lib::get_key_iter($memory_8);
#line 1307
$memory_7 = c_rt_lib::hash_get_value($memory_5, $memory_6);
#line 1308
$memory_10 = $memory_2->{'from'};
#line 1308
$memory_10 = c_rt_lib::ov_as($memory_10, 'tct_rec');
#line 1308
$memory_9 = hash::has_key($memory_10, $memory_6);
#line 1308
undef($memory_10);
#line 1308
$memory_9 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_9));
#line 1308
if (c_rt_lib::check_true($memory_9)) {goto label_159;}
#line 1308
undef($memory_9);
#line 1308
goto label_182;
#line 1308
goto label_159;
#line 1308
label_159:
#line 1308
undef($memory_9);
#line 1309
$memory_9 = "(ptd::rec without field: '";
#line 1309
$memory_9 = $memory_3 . $memory_9;
#line 1309
$memory_9 = $memory_9 . $memory_6;
#line 1309
$memory_10 = "' instead of ptd::rec with field: '";
#line 1309
$memory_9 = $memory_9 . $memory_10;
#line 1309
undef($memory_10);
#line 1309
$memory_9 = $memory_9 . $memory_6;
#line 1310
$memory_10 = "')";
#line 1310
$memory_9 = $memory_9 . $memory_10;
#line 1310
undef($memory_10);
#line 1310
undef($memory_0);
#line 1310
undef($memory_1);
#line 1310
undef($memory_2);
#line 1310
undef($memory_3);
#line 1310
undef($memory_4);
#line 1310
undef($memory_5);
#line 1310
undef($memory_6);
#line 1310
undef($memory_7);
#line 1310
undef($memory_8);
#line 1310
return $memory_9;
#line 1310
undef($memory_9);
#line 1310
label_182:
#line 1311
$memory_8 = c_rt_lib::next_iter($memory_8);
#line 1311
goto label_145;
#line 1311
label_185:
#line 1311
undef($memory_5);
#line 1311
undef($memory_6);
#line 1311
undef($memory_7);
#line 1311
undef($memory_8);
#line 1312
goto label_353;
#line 1312
label_191:
#line 1312
$memory_4 = $memory_2->{'from'};
#line 1312
$memory_4 = c_rt_lib::ov_is($memory_4, 'tct_var');
#line 1312
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 1312
if (c_rt_lib::check_true($memory_5)) {goto label_198;}
#line 1312
$memory_4 = $memory_2->{'to'};
#line 1312
$memory_4 = c_rt_lib::ov_is($memory_4, 'tct_var');
#line 1312
label_198:
#line 1312
undef($memory_5);
#line 1312
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 1312
if (c_rt_lib::check_true($memory_4)) {goto label_332;}
#line 1313
$memory_5 = $memory_2->{'from'};
#line 1313
$memory_5 = c_rt_lib::ov_as($memory_5, 'tct_var');
#line 1313
$memory_8 = c_rt_lib::init_iter($memory_5);
#line 1313
label_205:
#line 1313
$memory_6 = c_rt_lib::is_end_hash($memory_8);
#line 1313
if (c_rt_lib::check_true($memory_6)) {goto label_326;}
#line 1313
$memory_6 = c_rt_lib::get_key_iter($memory_8);
#line 1313
$memory_7 = c_rt_lib::hash_get_value($memory_5, $memory_6);
#line 1314
$memory_9 = $memory_2->{'to'};
#line 1314
$memory_9 = c_rt_lib::ov_as($memory_9, 'tct_var');
#line 1315
$memory_10 = hash::has_key($memory_9, $memory_6);
#line 1315
$memory_10 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_10));
#line 1315
if (c_rt_lib::check_true($memory_10)) {goto label_296;}
#line 1316
$memory_11 = c_rt_lib::ov_is($memory_7, 'no_param');
#line 1316
if (c_rt_lib::check_true($memory_11)) {goto label_222;}
#line 1321
$memory_11 = c_rt_lib::ov_is($memory_7, 'with_param');
#line 1321
if (c_rt_lib::check_true($memory_11)) {goto label_256;}
#line 1321
$memory_11 = "NOMATCHALERT";
#line 1321
$memory_11 = [$memory_11,$memory_7];
#line 1321
die(dfile::ssave($memory_11));
#line 1316
label_222:
#line 1317
$memory_12 = hash::get_value($memory_9, $memory_6);
#line 1317
$memory_12 = c_rt_lib::ov_is($memory_12, 'with_param');
#line 1317
$memory_12 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_12));
#line 1317
if (c_rt_lib::check_true($memory_12)) {goto label_253;}
#line 1318
$memory_13 = "(ptd::var case: '";
#line 1318
$memory_13 = $memory_3 . $memory_13;
#line 1318
$memory_13 = $memory_13 . $memory_6;
#line 1318
$memory_14 = "' no_param instead of ptd::var case: '";
#line 1318
$memory_13 = $memory_13 . $memory_14;
#line 1318
undef($memory_14);
#line 1318
$memory_13 = $memory_13 . $memory_6;
#line 1319
$memory_14 = "' with_param)";
#line 1319
$memory_13 = $memory_13 . $memory_14;
#line 1319
undef($memory_14);
#line 1319
undef($memory_0);
#line 1319
undef($memory_1);
#line 1319
undef($memory_2);
#line 1319
undef($memory_3);
#line 1319
undef($memory_4);
#line 1319
undef($memory_5);
#line 1319
undef($memory_6);
#line 1319
undef($memory_7);
#line 1319
undef($memory_8);
#line 1319
undef($memory_9);
#line 1319
undef($memory_10);
#line 1319
undef($memory_11);
#line 1319
undef($memory_12);
#line 1319
return $memory_13;
#line 1319
undef($memory_13);
#line 1320
goto label_253;
#line 1320
label_253:
#line 1320
undef($memory_12);
#line 1321
goto label_293;
#line 1321
label_256:
#line 1321
$memory_12 = c_rt_lib::ov_as($memory_7, 'with_param');
#line 1322
$memory_13 = hash::get_value($memory_9, $memory_6);
#line 1322
$memory_13 = c_rt_lib::ov_is($memory_13, 'no_param');
#line 1322
$memory_13 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_13));
#line 1322
if (c_rt_lib::check_true($memory_13)) {goto label_289;}
#line 1323
$memory_14 = "(ptd::var case: '";
#line 1323
$memory_14 = $memory_3 . $memory_14;
#line 1323
$memory_14 = $memory_14 . $memory_6;
#line 1323
$memory_15 = "' with_param instead of ptd::var case: '";
#line 1323
$memory_14 = $memory_14 . $memory_15;
#line 1323
undef($memory_15);
#line 1323
$memory_14 = $memory_14 . $memory_6;
#line 1324
$memory_15 = "' no_param)";
#line 1324
$memory_14 = $memory_14 . $memory_15;
#line 1324
undef($memory_15);
#line 1324
undef($memory_0);
#line 1324
undef($memory_1);
#line 1324
undef($memory_2);
#line 1324
undef($memory_3);
#line 1324
undef($memory_4);
#line 1324
undef($memory_5);
#line 1324
undef($memory_6);
#line 1324
undef($memory_7);
#line 1324
undef($memory_8);
#line 1324
undef($memory_9);
#line 1324
undef($memory_10);
#line 1324
undef($memory_11);
#line 1324
undef($memory_12);
#line 1324
undef($memory_13);
#line 1324
return $memory_14;
#line 1324
undef($memory_14);
#line 1325
goto label_289;
#line 1325
label_289:
#line 1325
undef($memory_13);
#line 1325
undef($memory_12);
#line 1326
goto label_293;
#line 1326
label_293:
#line 1326
undef($memory_11);
#line 1327
goto label_321;
#line 1327
label_296:
#line 1328
$memory_11 = "(ptd::var with case: '";
#line 1328
$memory_11 = $memory_3 . $memory_11;
#line 1328
$memory_11 = $memory_11 . $memory_6;
#line 1328
$memory_12 = "' instead of ptd::var without case: '";
#line 1328
$memory_11 = $memory_11 . $memory_12;
#line 1328
undef($memory_12);
#line 1328
$memory_11 = $memory_11 . $memory_6;
#line 1329
$memory_12 = "')";
#line 1329
$memory_11 = $memory_11 . $memory_12;
#line 1329
undef($memory_12);
#line 1329
undef($memory_0);
#line 1329
undef($memory_1);
#line 1329
undef($memory_2);
#line 1329
undef($memory_3);
#line 1329
undef($memory_4);
#line 1329
undef($memory_5);
#line 1329
undef($memory_6);
#line 1329
undef($memory_7);
#line 1329
undef($memory_8);
#line 1329
undef($memory_9);
#line 1329
undef($memory_10);
#line 1329
return $memory_11;
#line 1329
undef($memory_11);
#line 1330
goto label_321;
#line 1330
label_321:
#line 1330
undef($memory_10);
#line 1330
undef($memory_9);
#line 1331
$memory_8 = c_rt_lib::next_iter($memory_8);
#line 1331
goto label_205;
#line 1331
label_326:
#line 1331
undef($memory_5);
#line 1331
undef($memory_6);
#line 1331
undef($memory_7);
#line 1331
undef($memory_8);
#line 1332
goto label_353;
#line 1332
label_332:
#line 1333
$memory_5 = "(";
#line 1333
$memory_7 = $memory_2->{'from'};
#line 1333
$memory_6 = type_checker_priv::get_print_tct_label($memory_7);
#line 1333
undef($memory_7);
#line 1333
$memory_5 = $memory_5 . $memory_6;
#line 1333
undef($memory_6);
#line 1333
$memory_6 = " instead of ";
#line 1333
$memory_5 = $memory_5 . $memory_6;
#line 1333
undef($memory_6);
#line 1333
$memory_7 = $memory_2->{'to'};
#line 1333
$memory_6 = type_checker_priv::get_print_tct_label($memory_7);
#line 1333
undef($memory_7);
#line 1333
$memory_5 = $memory_5 . $memory_6;
#line 1333
undef($memory_6);
#line 1333
$memory_6 = ")";
#line 1333
$memory_5 = $memory_5 . $memory_6;
#line 1333
undef($memory_6);
#line 1333
$memory_3 = $memory_3 . $memory_5;
#line 1333
undef($memory_5);
#line 1334
goto label_353;
#line 1334
label_353:
#line 1334
undef($memory_4);
#line 1335
undef($memory_0);
#line 1335
undef($memory_1);
#line 1335
undef($memory_2);
#line 1335
return $memory_3;
#line 1335
undef($memory_3);
#line 1335
undef($memory_2);
#line 1336
goto label_362;
#line 1336
label_362:
#line 1336
undef($memory_1);
#line 1336
undef($memory_0);
#line 1336
return;
}

sub type_checker_priv::check_var_decl($$$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;$memory_0 = $_[0];$memory_1 = $_[1];Scalar::Util::weaken($_[1]) if ref($_[1]);$memory_2 = $_[2];Scalar::Util::weaken($_[2]) if ref($_[2]);$memory_3 = $_[3];Scalar::Util::weaken($_[3]) if ref($_[3]);
#line 1341
$memory_5 = c_rt_lib::to_nl(0);
#line 1341
$memory_4 = type_checker_priv::check_var_decl_try($memory_0, $memory_5, $memory_1, $memory_2, $memory_3);
#line 1341
undef($memory_5);
#line 1341
$memory_4 = $memory_4->{'ok'};
#line 1341
undef($memory_0);
#line 1341
$_[1] = $memory_1;$_[2] = $memory_2;$_[3] = $memory_3;return $memory_4;
#line 1341
undef($memory_4);
#line 1341
undef($memory_0);
#line 1341
$_[1] = $memory_1;$_[2] = $memory_2;$_[3] = $memory_3;return;
$_[1] = $memory_1;$_[2] = $memory_2;$_[3] = $memory_3;}

sub type_checker_priv::check_var_decl_try($$$$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;my $memory_13;my $memory_14;my $memory_15;$memory_0 = $_[0];$memory_1 = $_[1];$memory_2 = $_[2];Scalar::Util::weaken($_[2]) if ref($_[2]);$memory_3 = $_[3];Scalar::Util::weaken($_[3]) if ref($_[3]);$memory_4 = $_[4];Scalar::Util::weaken($_[4]) if ref($_[4]);
#line 1346
$memory_6 = $memory_0->{'name'};
#line 1346
$memory_5 = hash::has_key($memory_3, $memory_6);
#line 1346
undef($memory_6);
#line 1346
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 1346
if (c_rt_lib::check_true($memory_5)) {goto label_15;}
#line 1346
$memory_6 = "variable '";
#line 1346
$memory_7 = $memory_0->{'name'};
#line 1346
$memory_6 = $memory_6 . $memory_7;
#line 1346
undef($memory_7);
#line 1346
$memory_7 = "' already exists";
#line 1346
$memory_6 = $memory_6 . $memory_7;
#line 1346
undef($memory_7);
#line 1346
type_checker_priv::add_error($memory_4, $memory_6);
#line 1346
undef($memory_6);
#line 1346
goto label_15;
#line 1346
label_15:
#line 1346
undef($memory_5);
#line 1348
$memory_7 = c_rt_lib::ov_mk_none('yes');
#line 1348
$memory_8 = tct::empty();
#line 1348
$memory_6 = {overwrited => $memory_7,type => $memory_8,};
#line 1348
undef($memory_7);
#line 1348
undef($memory_8);
#line 1349
$memory_8 = tct::empty();
#line 1349
$memory_9 = c_rt_lib::ov_mk_none('speculation');
#line 1349
$memory_7 = {type => $memory_8,src => $memory_9,};
#line 1349
undef($memory_8);
#line 1349
undef($memory_9);
#line 1349
$memory_5 = {ok => $memory_6,err => $memory_7,};
#line 1349
undef($memory_6);
#line 1349
undef($memory_7);
#line 1351
$memory_6 = $memory_0->{'type'};
#line 1351
$memory_7 = c_rt_lib::ov_is($memory_6, 'type');
#line 1351
if (c_rt_lib::check_true($memory_7)) {goto label_38;}
#line 1360
$memory_7 = c_rt_lib::ov_is($memory_6, 'none');
#line 1360
if (c_rt_lib::check_true($memory_7)) {goto label_94;}
#line 1360
$memory_7 = "NOMATCHALERT";
#line 1360
$memory_7 = [$memory_7,$memory_6];
#line 1360
die(dfile::ssave($memory_7));
#line 1351
label_38:
#line 1351
$memory_8 = c_rt_lib::ov_as($memory_6, 'type');
#line 1352
$memory_9 = ptd_parser::try_value_to_ptd($memory_8);
#line 1352
$memory_10 = c_rt_lib::ov_is($memory_9, 'err');
#line 1352
if (c_rt_lib::check_true($memory_10)) {goto label_48;}
#line 1355
$memory_10 = c_rt_lib::ov_is($memory_9, 'ok');
#line 1355
if (c_rt_lib::check_true($memory_10)) {goto label_64;}
#line 1355
$memory_10 = "NOMATCHALERT";
#line 1355
$memory_10 = [$memory_10,$memory_9];
#line 1355
die(dfile::ssave($memory_10));
#line 1352
label_48:
#line 1352
$memory_11 = c_rt_lib::ov_as($memory_9, 'err');
#line 1353
type_checker_priv::add_error($memory_4, $memory_11);
#line 1354
$memory_12 = tct::tct_im();
#line 1354
$memory_13 = "ok";
#line 1354
$memory_13 = c_rt_lib::get_ref_hash($memory_5, $memory_13);
#line 1354
$memory_14 = $memory_12;
#line 1354
 if (c_rt_lib::get_hashcount($memory_13) > 1) {$memory_13 = {%{$memory_13}};}$memory_13->{'type'} = $memory_14;
#line 1354
$memory_15 = "ok";
#line 1354
c_rt_lib::set_ref_hash($memory_5, $memory_15, $memory_13);
#line 1354
undef($memory_15);
#line 1354
undef($memory_12);
#line 1354
undef($memory_13);
#line 1354
undef($memory_14);
#line 1354
undef($memory_11);
#line 1355
goto label_78;
#line 1355
label_64:
#line 1355
$memory_11 = c_rt_lib::ov_as($memory_9, 'ok');
#line 1356
$memory_12 = "ok";
#line 1356
$memory_12 = c_rt_lib::get_ref_hash($memory_5, $memory_12);
#line 1356
$memory_13 = $memory_11;
#line 1356
 if (c_rt_lib::get_hashcount($memory_12) > 1) {$memory_12 = {%{$memory_12}};}$memory_12->{'type'} = $memory_13;
#line 1356
$memory_14 = "ok";
#line 1356
c_rt_lib::set_ref_hash($memory_5, $memory_14, $memory_12);
#line 1356
undef($memory_14);
#line 1356
undef($memory_12);
#line 1356
undef($memory_13);
#line 1357
type_checker_priv::check_types_imported($memory_11, $memory_2, $memory_4);
#line 1357
undef($memory_11);
#line 1358
goto label_78;
#line 1358
label_78:
#line 1358
undef($memory_9);
#line 1358
undef($memory_10);
#line 1359
$memory_9 = c_rt_lib::ov_mk_none('no');
#line 1359
$memory_10 = "ok";
#line 1359
$memory_10 = c_rt_lib::get_ref_hash($memory_5, $memory_10);
#line 1359
$memory_11 = $memory_9;
#line 1359
 if (c_rt_lib::get_hashcount($memory_10) > 1) {$memory_10 = {%{$memory_10}};}$memory_10->{'overwrited'} = $memory_11;
#line 1359
$memory_12 = "ok";
#line 1359
c_rt_lib::set_ref_hash($memory_5, $memory_12, $memory_10);
#line 1359
undef($memory_12);
#line 1359
undef($memory_9);
#line 1359
undef($memory_10);
#line 1359
undef($memory_11);
#line 1359
undef($memory_8);
#line 1360
goto label_96;
#line 1360
label_94:
#line 1361
goto label_96;
#line 1361
label_96:
#line 1361
undef($memory_6);
#line 1361
undef($memory_7);
#line 1362
$memory_6 = $memory_0->{'value'};
#line 1362
$memory_7 = c_rt_lib::ov_is($memory_6, 'value');
#line 1362
if (c_rt_lib::check_true($memory_7)) {goto label_107;}
#line 1382
$memory_7 = c_rt_lib::ov_is($memory_6, 'none');
#line 1382
if (c_rt_lib::check_true($memory_7)) {goto label_195;}
#line 1382
$memory_7 = "NOMATCHALERT";
#line 1382
$memory_7 = [$memory_7,$memory_6];
#line 1382
die(dfile::ssave($memory_7));
#line 1362
label_107:
#line 1362
$memory_8 = c_rt_lib::ov_as($memory_6, 'value');
#line 1363
$memory_9 = type_checker_priv::check_val($memory_8, $memory_2, $memory_3, $memory_4);
#line 1364
$memory_10 = $memory_9->{'type'};
#line 1364
$memory_10 = c_rt_lib::ov_is($memory_10, 'tct_void');
#line 1364
$memory_10 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_10));
#line 1364
if (c_rt_lib::check_true($memory_10)) {goto label_126;}
#line 1365
$memory_11 = "cannot use 'void' type returned from function as value";
#line 1365
type_checker_priv::add_error($memory_4, $memory_11);
#line 1365
undef($memory_11);
#line 1366
undef($memory_0);
#line 1366
undef($memory_1);
#line 1366
undef($memory_6);
#line 1366
undef($memory_7);
#line 1366
undef($memory_8);
#line 1366
undef($memory_9);
#line 1366
undef($memory_10);
#line 1366
$_[2] = $memory_2;$_[3] = $memory_3;$_[4] = $memory_4;return $memory_5;
#line 1367
goto label_126;
#line 1367
label_126:
#line 1367
undef($memory_10);
#line 1368
$memory_10 = $memory_1;
#line 1368
$memory_10 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_10));
#line 1368
if (c_rt_lib::check_true($memory_10)) {goto label_148;}
#line 1369
$memory_11 = ptd_system::try_get_ensure_sub_types($memory_9, $memory_2, $memory_4);
#line 1370
$memory_13 = $memory_11->{'err'};
#line 1370
$memory_14 = $memory_9->{'src'};
#line 1370
$memory_12 = {type => $memory_13,src => $memory_14,};
#line 1370
undef($memory_13);
#line 1370
undef($memory_14);
#line 1370
$memory_13 = $memory_12;
#line 1370
 if (c_rt_lib::get_hashcount($memory_5) > 1) {$memory_5 = {%{$memory_5}};}$memory_5->{'err'} = $memory_13;
#line 1370
undef($memory_12);
#line 1370
undef($memory_13);
#line 1371
$memory_12 = $memory_11->{'ok'};
#line 1371
$memory_13 = $memory_12;
#line 1371
 if (c_rt_lib::get_hashcount($memory_9) > 1) {$memory_9 = {%{$memory_9}};}$memory_9->{'type'} = $memory_13;
#line 1371
undef($memory_12);
#line 1371
undef($memory_13);
#line 1371
undef($memory_11);
#line 1372
goto label_148;
#line 1372
label_148:
#line 1372
undef($memory_10);
#line 1373
$memory_10 = $memory_5->{'ok'};
#line 1373
$memory_10 = $memory_10->{'type'};
#line 1373
$memory_10 = c_rt_lib::ov_is($memory_10, 'tct_empty');
#line 1373
$memory_10 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_10));
#line 1373
if (c_rt_lib::check_true($memory_10)) {goto label_170;}
#line 1374
$memory_11 = tct::tct_im();
#line 1374
ptd_system::check_assignment($memory_11, $memory_9, $memory_2, $memory_4);
#line 1374
undef($memory_11);
#line 1375
$memory_11 = $memory_9->{'type'};
#line 1375
$memory_12 = "ok";
#line 1375
$memory_12 = c_rt_lib::get_ref_hash($memory_5, $memory_12);
#line 1375
$memory_13 = $memory_11;
#line 1375
 if (c_rt_lib::get_hashcount($memory_12) > 1) {$memory_12 = {%{$memory_12}};}$memory_12->{'type'} = $memory_13;
#line 1375
$memory_14 = "ok";
#line 1375
c_rt_lib::set_ref_hash($memory_5, $memory_14, $memory_12);
#line 1375
undef($memory_14);
#line 1375
undef($memory_11);
#line 1375
undef($memory_12);
#line 1375
undef($memory_13);
#line 1376
goto label_190;
#line 1376
label_170:
#line 1377
$memory_12 = $memory_5->{'ok'};
#line 1377
$memory_12 = $memory_12->{'type'};
#line 1377
$memory_11 = ptd_system::check_assignment($memory_12, $memory_9, $memory_2, $memory_4);
#line 1377
undef($memory_12);
#line 1378
$memory_12 = $memory_11;
#line 1378
$memory_12 = c_rt_lib::ov_is($memory_12, 'err');
#line 1378
$memory_12 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_12));
#line 1378
if (c_rt_lib::check_true($memory_12)) {goto label_186;}
#line 1379
$memory_13 = "invalid type in variable declaration: ";
#line 1379
$memory_14 = type_checker_priv::get_print_check_info($memory_11);
#line 1379
$memory_13 = $memory_13 . $memory_14;
#line 1379
undef($memory_14);
#line 1379
type_checker_priv::add_error($memory_4, $memory_13);
#line 1379
undef($memory_13);
#line 1380
goto label_186;
#line 1380
label_186:
#line 1380
undef($memory_12);
#line 1380
undef($memory_11);
#line 1381
goto label_190;
#line 1381
label_190:
#line 1381
undef($memory_10);
#line 1381
undef($memory_9);
#line 1381
undef($memory_8);
#line 1382
goto label_197;
#line 1382
label_195:
#line 1383
goto label_197;
#line 1383
label_197:
#line 1383
undef($memory_6);
#line 1383
undef($memory_7);
#line 1384
undef($memory_0);
#line 1384
undef($memory_1);
#line 1384
$_[2] = $memory_2;$_[3] = $memory_3;$_[4] = $memory_4;return $memory_5;
#line 1384
undef($memory_5);
#line 1384
undef($memory_0);
#line 1384
undef($memory_1);
#line 1384
$_[2] = $memory_2;$_[3] = $memory_3;$_[4] = $memory_4;return;
$_[2] = $memory_2;$_[3] = $memory_3;$_[4] = $memory_4;}

sub type_checker_priv::add_var_to_vars($$$) {
my $memory_0;my $memory_1;my $memory_2;$memory_0 = $_[0];$memory_1 = $_[1];$memory_2 = $_[2];Scalar::Util::weaken($_[2]) if ref($_[2]);
#line 1388
hash::set_value($memory_2, $memory_1, $memory_0);
#line 1388
undef($memory_0);
#line 1388
undef($memory_1);
#line 1388
$_[2] = $memory_2;return;
$_[2] = $memory_2;}

sub type_checker_priv::set_type_to_variable($$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];$memory_2 = $_[2];
#line 1392
$memory_4 = c_rt_lib::ov_mk_none('yes');
#line 1392
$memory_3 = {overwrited => $memory_4,type => $memory_2,};
#line 1392
undef($memory_4);
#line 1392
type_checker_priv::add_var_to_vars($memory_3, $memory_1, $memory_0);
#line 1392
undef($memory_3);
#line 1392
undef($memory_1);
#line 1392
undef($memory_2);
#line 1392
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub type_checker_priv::add_var_decl_to_vars($$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;$memory_0 = $_[0];$memory_1 = $_[1];$memory_2 = $_[2];Scalar::Util::weaken($_[2]) if ref($_[2]);
#line 1396
$memory_3 = $memory_0;
#line 1396
$memory_3 = c_rt_lib::ov_is($memory_3, 'tct_im');
#line 1396
if (c_rt_lib::check_true($memory_3)) {goto label_5;}
#line 1396
$memory_3 = $memory_0;
#line 1396
$memory_3 = c_rt_lib::ov_is($memory_3, 'tct_empty');
#line 1396
label_5:
#line 1396
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 1396
if (c_rt_lib::check_true($memory_3)) {goto label_14;}
#line 1397
$memory_5 = c_rt_lib::ov_mk_none('yes');
#line 1397
$memory_4 = {overwrited => $memory_5,type => $memory_0,};
#line 1397
undef($memory_5);
#line 1397
type_checker_priv::add_var_to_vars($memory_4, $memory_1, $memory_2);
#line 1397
undef($memory_4);
#line 1398
goto label_21;
#line 1398
label_14:
#line 1399
$memory_5 = c_rt_lib::ov_mk_none('no');
#line 1399
$memory_4 = {overwrited => $memory_5,type => $memory_0,};
#line 1399
undef($memory_5);
#line 1399
type_checker_priv::add_var_to_vars($memory_4, $memory_1, $memory_2);
#line 1399
undef($memory_4);
#line 1400
goto label_21;
#line 1400
label_21:
#line 1400
undef($memory_3);
#line 1400
undef($memory_0);
#line 1400
undef($memory_1);
#line 1400
$_[2] = $memory_2;return;
$_[2] = $memory_2;}

sub type_checker_priv::add_var_decl_with_type_and_check($$$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;$memory_0 = $_[0];$memory_1 = $_[1];$memory_2 = $_[2];Scalar::Util::weaken($_[2]) if ref($_[2]);$memory_3 = $_[3];Scalar::Util::weaken($_[3]) if ref($_[3]);
#line 1405
$memory_5 = $memory_0->{'name'};
#line 1405
$memory_4 = hash::has_key($memory_2, $memory_5);
#line 1405
undef($memory_5);
#line 1405
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 1405
if (c_rt_lib::check_true($memory_4)) {goto label_15;}
#line 1405
$memory_5 = "variable `";
#line 1405
$memory_6 = $memory_0->{'name'};
#line 1405
$memory_5 = $memory_5 . $memory_6;
#line 1405
undef($memory_6);
#line 1405
$memory_6 = "' already exists";
#line 1405
$memory_5 = $memory_5 . $memory_6;
#line 1405
undef($memory_6);
#line 1405
type_checker_priv::add_error($memory_3, $memory_5);
#line 1405
undef($memory_5);
#line 1405
goto label_15;
#line 1405
label_15:
#line 1405
undef($memory_4);
#line 1406
$memory_4 = type_checker_priv::is_known($memory_1);
#line 1406
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 1406
if (c_rt_lib::check_true($memory_4)) {goto label_30;}
#line 1407
$memory_6 = c_rt_lib::ov_mk_none('no');
#line 1407
$memory_7 = $memory_1->{'type'};
#line 1407
$memory_5 = {overwrited => $memory_6,type => $memory_7,};
#line 1407
undef($memory_6);
#line 1407
undef($memory_7);
#line 1407
$memory_6 = $memory_0->{'name'};
#line 1407
type_checker_priv::add_var_to_vars($memory_5, $memory_6, $memory_2);
#line 1407
undef($memory_6);
#line 1407
undef($memory_5);
#line 1408
goto label_41;
#line 1408
label_30:
#line 1409
$memory_6 = c_rt_lib::ov_mk_none('yes');
#line 1409
$memory_7 = $memory_1->{'type'};
#line 1409
$memory_5 = {overwrited => $memory_6,type => $memory_7,};
#line 1409
undef($memory_6);
#line 1409
undef($memory_7);
#line 1409
$memory_6 = $memory_0->{'name'};
#line 1409
type_checker_priv::add_var_to_vars($memory_5, $memory_6, $memory_2);
#line 1409
undef($memory_6);
#line 1409
undef($memory_5);
#line 1410
goto label_41;
#line 1410
label_41:
#line 1410
undef($memory_4);
#line 1410
undef($memory_0);
#line 1410
undef($memory_1);
#line 1410
$_[2] = $memory_2;$_[3] = $memory_3;return;
$_[2] = $memory_2;$_[3] = $memory_3;}

sub type_checker_priv::is_known($) {
my $memory_0;my $memory_1;my $memory_2;$memory_0 = $_[0];
#line 1414
$memory_2 = $memory_0->{'src'};
#line 1414
$memory_1 = ptd_system::is_known($memory_2);
#line 1414
undef($memory_2);
#line 1414
undef($memory_0);
#line 1414
return $memory_1;
#line 1414
undef($memory_1);
#line 1414
undef($memory_0);
#line 1414
return;
}

sub type_checker_priv::get_function_name($$) {
my $memory_0;my $memory_1;my $memory_2;$memory_0 = $_[0];$memory_1 = $_[1];
#line 1418
$memory_2 = "";
#line 1418
$memory_2 = c_rt_lib::to_nl($memory_0 ne $memory_2);
#line 1418
if (c_rt_lib::check_true($memory_2)) {goto label_5;}
#line 1418
$memory_2 = "";
#line 1418
goto label_8;
#line 1418
label_5:
#line 1418
$memory_2 = "::";
#line 1418
$memory_2 = $memory_0 . $memory_2;
#line 1418
label_8:
#line 1418
$memory_2 = $memory_2 . $memory_1;
#line 1418
undef($memory_0);
#line 1418
undef($memory_1);
#line 1418
return $memory_2;
#line 1418
undef($memory_2);
#line 1418
undef($memory_0);
#line 1418
undef($memory_1);
#line 1418
return;
}

sub type_checker_priv::get_fun_module($$) {
my $memory_0;my $memory_1;my $memory_2;$memory_0 = $_[0];$memory_1 = $_[1];
#line 1422
$memory_2 = "";
#line 1422
$memory_2 = c_rt_lib::to_nl($memory_0 eq $memory_2);
#line 1422
if (c_rt_lib::check_true($memory_2)) {goto label_5;}
#line 1422
$memory_2 = $memory_0;
#line 1422
goto label_7;
#line 1422
label_5:
#line 1422
$memory_2 = $memory_1;
#line 1422
label_7:
#line 1422
undef($memory_0);
#line 1422
undef($memory_1);
#line 1422
return $memory_2;
#line 1422
undef($memory_2);
#line 1422
undef($memory_0);
#line 1422
undef($memory_1);
#line 1422
return;
}

sub type_checker_priv::get_function_def($$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;$memory_0 = $_[0];$memory_1 = $_[1];$memory_2 = $_[2];
#line 1427
$memory_5 = $memory_2->{'funs'};
#line 1427
$memory_7 = $memory_2->{'env'};
#line 1427
$memory_7 = $memory_7->{'current_module'};
#line 1427
$memory_6 = type_checker_priv::get_fun_module($memory_0, $memory_7);
#line 1427
undef($memory_7);
#line 1427
$memory_4 = hash::get_value($memory_5, $memory_6);
#line 1427
undef($memory_6);
#line 1427
undef($memory_5);
#line 1428
$memory_5 = type_checker_priv::get_fun_key($memory_1, $memory_0);
#line 1428
$memory_3 = hash::get_value($memory_4, $memory_5);
#line 1428
undef($memory_5);
#line 1428
undef($memory_4);
#line 1428
undef($memory_0);
#line 1428
undef($memory_1);
#line 1428
undef($memory_2);
#line 1428
return $memory_3;
#line 1428
undef($memory_3);
#line 1428
undef($memory_0);
#line 1428
undef($memory_1);
#line 1428
undef($memory_2);
#line 1428
return;
}

sub type_checker_priv::check_function_exists($$$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;$memory_0 = $_[0];$memory_1 = $_[1];$memory_2 = $_[2];Scalar::Util::weaken($_[2]) if ref($_[2]);$memory_3 = $_[3];Scalar::Util::weaken($_[3]) if ref($_[3]);
#line 1433
$memory_5 = $memory_2->{'env'};
#line 1433
$memory_5 = $memory_5->{'current_module'};
#line 1433
$memory_4 = type_checker_priv::get_fun_module($memory_0, $memory_5);
#line 1433
undef($memory_5);
#line 1434
$memory_6 = $memory_2->{'imports'};
#line 1434
$memory_5 = hash::has_key($memory_6, $memory_4);
#line 1434
undef($memory_6);
#line 1434
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 1434
if (c_rt_lib::check_true($memory_5)) {goto label_13;}
#line 1434
$memory_6 = $memory_2->{'imports'};
#line 1434
$memory_5 = hash::get_value($memory_6, $memory_4);
#line 1434
undef($memory_6);
#line 1434
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 1434
label_13:
#line 1434
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 1434
if (c_rt_lib::check_true($memory_5)) {goto label_49;}
#line 1435
$memory_7 = $memory_2->{'imports'};
#line 1435
$memory_6 = hash::has_key($memory_7, $memory_4);
#line 1435
undef($memory_7);
#line 1435
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 1435
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 1435
if (c_rt_lib::check_true($memory_6)) {goto label_30;}
#line 1435
$memory_7 = "module '";
#line 1435
$memory_7 = $memory_7 . $memory_4;
#line 1435
$memory_8 = "' not imported";
#line 1435
$memory_7 = $memory_7 . $memory_8;
#line 1435
undef($memory_8);
#line 1435
type_checker_priv::add_error($memory_3, $memory_7);
#line 1435
undef($memory_7);
#line 1435
goto label_30;
#line 1435
label_30:
#line 1435
undef($memory_6);
#line 1436
$memory_6 = "imports";
#line 1436
$memory_6 = c_rt_lib::get_ref_hash($memory_2, $memory_6);
#line 1436
$memory_7 = c_rt_lib::to_nl(0);
#line 1436
hash::set_value($memory_6, $memory_4, $memory_7);
#line 1436
undef($memory_7);
#line 1436
$memory_7 = "imports";
#line 1436
c_rt_lib::set_ref_hash($memory_2, $memory_7, $memory_6);
#line 1436
undef($memory_7);
#line 1436
undef($memory_6);
#line 1437
$memory_6 = c_rt_lib::to_nl(0);
#line 1437
undef($memory_0);
#line 1437
undef($memory_1);
#line 1437
undef($memory_4);
#line 1437
undef($memory_5);
#line 1437
$_[2] = $memory_2;$_[3] = $memory_3;return $memory_6;
#line 1437
undef($memory_6);
#line 1438
goto label_64;
#line 1438
label_49:
#line 1438
$memory_6 = $memory_2->{'funs'};
#line 1438
$memory_5 = hash::has_key($memory_6, $memory_4);
#line 1438
undef($memory_6);
#line 1438
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 1438
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 1438
if (c_rt_lib::check_true($memory_5)) {goto label_64;}
#line 1439
$memory_6 = c_rt_lib::to_nl(0);
#line 1439
undef($memory_0);
#line 1439
undef($memory_1);
#line 1439
undef($memory_4);
#line 1439
undef($memory_5);
#line 1439
$_[2] = $memory_2;$_[3] = $memory_3;return $memory_6;
#line 1439
undef($memory_6);
#line 1440
goto label_64;
#line 1440
label_64:
#line 1440
undef($memory_5);
#line 1441
$memory_7 = $memory_2->{'funs'};
#line 1441
$memory_6 = hash::get_value($memory_7, $memory_4);
#line 1441
undef($memory_7);
#line 1441
$memory_7 = type_checker_priv::get_fun_key($memory_1, $memory_0);
#line 1441
$memory_5 = hash::has_key($memory_6, $memory_7);
#line 1441
undef($memory_7);
#line 1441
undef($memory_6);
#line 1441
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 1441
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 1441
if (c_rt_lib::check_true($memory_5)) {goto label_93;}
#line 1442
$memory_6 = "function `";
#line 1442
$memory_7 = type_checker_priv::get_function_name($memory_0, $memory_1);
#line 1442
$memory_6 = $memory_6 . $memory_7;
#line 1442
undef($memory_7);
#line 1442
$memory_7 = "' does not exist";
#line 1442
$memory_6 = $memory_6 . $memory_7;
#line 1442
undef($memory_7);
#line 1442
type_checker_priv::add_error($memory_3, $memory_6);
#line 1442
undef($memory_6);
#line 1443
$memory_6 = c_rt_lib::to_nl(0);
#line 1443
undef($memory_0);
#line 1443
undef($memory_1);
#line 1443
undef($memory_4);
#line 1443
undef($memory_5);
#line 1443
$_[2] = $memory_2;$_[3] = $memory_3;return $memory_6;
#line 1443
undef($memory_6);
#line 1444
goto label_93;
#line 1444
label_93:
#line 1444
undef($memory_5);
#line 1445
$memory_5 = c_rt_lib::to_nl(1);
#line 1445
undef($memory_0);
#line 1445
undef($memory_1);
#line 1445
undef($memory_4);
#line 1445
$_[2] = $memory_2;$_[3] = $memory_3;return $memory_5;
#line 1445
undef($memory_5);
#line 1445
undef($memory_4);
#line 1445
undef($memory_0);
#line 1445
undef($memory_1);
#line 1445
$_[2] = $memory_2;$_[3] = $memory_3;return;
$_[2] = $memory_2;$_[3] = $memory_3;}

sub type_checker_priv::add_error($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];
#line 1449
$memory_2 = "errors";
#line 1449
$memory_2 = c_rt_lib::get_ref_hash($memory_0, $memory_2);
#line 1449
$memory_4 = $memory_0->{'current_line'};
#line 1449
$memory_5 = $memory_0->{'module'};
#line 1449
$memory_6 = 1;
#line 1449
$memory_6 = -$memory_6;
#line 1449
$memory_7 = c_rt_lib::ov_mk_none('error');
#line 1449
$memory_3 = {message => $memory_1,line => $memory_4,module => $memory_5,column => $memory_6,type => $memory_7,};
#line 1449
undef($memory_4);
#line 1449
undef($memory_5);
#line 1449
undef($memory_6);
#line 1449
undef($memory_7);
#line 1449
array::push($memory_2, $memory_3);
#line 1449
undef($memory_3);
#line 1449
$memory_3 = "errors";
#line 1449
c_rt_lib::set_ref_hash($memory_0, $memory_3, $memory_2);
#line 1449
undef($memory_3);
#line 1449
undef($memory_2);
#line 1449
undef($memory_1);
#line 1449
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub type_checker_priv::add_warning($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];
#line 1453
$memory_2 = "warnings";
#line 1453
$memory_2 = c_rt_lib::get_ref_hash($memory_0, $memory_2);
#line 1453
$memory_4 = $memory_0->{'current_line'};
#line 1453
$memory_5 = $memory_0->{'module'};
#line 1453
$memory_6 = 1;
#line 1453
$memory_6 = -$memory_6;
#line 1453
$memory_7 = c_rt_lib::ov_mk_none('warning');
#line 1453
$memory_3 = {message => $memory_1,line => $memory_4,module => $memory_5,column => $memory_6,type => $memory_7,};
#line 1453
undef($memory_4);
#line 1453
undef($memory_5);
#line 1453
undef($memory_6);
#line 1453
undef($memory_7);
#line 1453
array::push($memory_2, $memory_3);
#line 1453
undef($memory_3);
#line 1453
$memory_3 = "warnings";
#line 1453
c_rt_lib::set_ref_hash($memory_0, $memory_3, $memory_2);
#line 1453
undef($memory_3);
#line 1453
undef($memory_2);
#line 1453
undef($memory_1);
#line 1453
$_[0] = $memory_0;return;
$_[0] = $memory_0;}
