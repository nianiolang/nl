use c_rt_lib;
use array;
use ptd;
use tct;
use tc_types;
use hash;
use enum;
use ov;
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
sub type_checker_priv::get_special_functions;
sub type_checker_priv::get_special_function_def;
sub type_checker_priv::check_special_function;
sub type_checker_priv::rec_get_var_from_lval;
sub type_checker_priv::mk_new_type_lval;
sub type_checker_priv::set_type_to_lval;
sub type_checker_priv::set_type_to_lval_spec;
sub type_checker_priv::get_type_left_site_equation;
sub type_checker_priv::get_type_record_key;
sub type_checker_priv::get_type_from_bin_op_and_check;
sub type_checker_priv::get_print_tct_type_name;
sub type_checker_priv::get_print_tct_label;
sub type_checker_priv::get_print_check_info;
sub type_checker_priv::check_var_decl;
sub type_checker_priv::check_var_decl_try;
sub type_checker_priv::add_var_to_vars;
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
#line 21
$memory_2 = c_rt_lib::ov_is($memory_0, 'type');
#line 21
if (c_rt_lib::check_true($memory_2)) {goto label_2;}
#line 28
$memory_2 = c_rt_lib::ov_is($memory_0, 'none');
#line 28
if (c_rt_lib::check_true($memory_2)) {goto label_3;}
#line 28
$memory_2 = "NOMATCHALERT";
#line 28
$memory_2 = [$memory_2,$memory_0];
#line 28
die(dfile::ssave($memory_2));
#line 21
label_2:
#line 21
$memory_3 = c_rt_lib::ov_as($memory_0, 'type');
#line 22
$memory_4 = ptd_parser::try_value_to_ptd($memory_3);
#line 22
$memory_5 = c_rt_lib::ov_is($memory_4, 'err');
#line 22
if (c_rt_lib::check_true($memory_5)) {goto label_5;}
#line 25
$memory_5 = c_rt_lib::ov_is($memory_4, 'ok');
#line 25
if (c_rt_lib::check_true($memory_5)) {goto label_6;}
#line 25
$memory_5 = "NOMATCHALERT";
#line 25
$memory_5 = [$memory_5,$memory_4];
#line 25
die(dfile::ssave($memory_5));
#line 22
label_5:
#line 22
$memory_6 = c_rt_lib::ov_as($memory_4, 'err');
#line 23
type_checker_priv::add_error($memory_1, $memory_6);
#line 24
$memory_7 = tct::tct_im();
#line 24
undef($memory_0);
#line 24
undef($memory_2);
#line 24
undef($memory_3);
#line 24
undef($memory_4);
#line 24
undef($memory_5);
#line 24
undef($memory_6);
#line 24
$_[1] = $memory_1;return $memory_7;
#line 24
undef($memory_7);
#line 24
undef($memory_6);
#line 25
goto label_4;
#line 25
label_6:
#line 25
$memory_6 = c_rt_lib::ov_as($memory_4, 'ok');
#line 26
undef($memory_0);
#line 26
undef($memory_2);
#line 26
undef($memory_3);
#line 26
undef($memory_4);
#line 26
undef($memory_5);
#line 26
$_[1] = $memory_1;return $memory_6;
#line 26
undef($memory_6);
#line 27
goto label_4;
#line 27
label_4:
#line 27
undef($memory_4);
#line 27
undef($memory_5);
#line 27
undef($memory_3);
#line 28
goto label_1;
#line 28
label_3:
#line 29
$memory_3 = tct::tct_im();
#line 29
undef($memory_0);
#line 29
undef($memory_2);
#line 29
$_[1] = $memory_1;return $memory_3;
#line 29
undef($memory_3);
#line 30
goto label_1;
#line 30
label_1:
#line 30
undef($memory_2);
#line 30
undef($memory_0);
#line 30
$_[1] = $memory_1;return;
$_[1] = $memory_1;}

sub type_checker_priv::get_fun_def_key($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;$memory_0 = $_[0];
#line 34
$memory_1 = $memory_0->{'access'};
#line 34
$memory_2 = c_rt_lib::ov_is($memory_1, 'pub');
#line 34
if (c_rt_lib::check_true($memory_2)) {goto label_2;}
#line 36
$memory_2 = c_rt_lib::ov_is($memory_1, 'priv');
#line 36
if (c_rt_lib::check_true($memory_2)) {goto label_3;}
#line 36
$memory_2 = "NOMATCHALERT";
#line 36
$memory_2 = [$memory_2,$memory_1];
#line 36
die(dfile::ssave($memory_2));
#line 34
label_2:
#line 35
$memory_3 = $memory_0->{'name'};
#line 35
undef($memory_0);
#line 35
undef($memory_1);
#line 35
undef($memory_2);
#line 35
return $memory_3;
#line 35
undef($memory_3);
#line 36
goto label_1;
#line 36
label_3:
#line 37
$memory_3 = "priv::";
#line 37
$memory_4 = $memory_0->{'name'};
#line 37
$memory_3 = $memory_3 . $memory_4;
#line 37
undef($memory_4);
#line 37
undef($memory_0);
#line 37
undef($memory_1);
#line 37
undef($memory_2);
#line 37
return $memory_3;
#line 37
undef($memory_3);
#line 38
goto label_1;
#line 38
label_1:
#line 38
undef($memory_1);
#line 38
undef($memory_2);
#line 38
undef($memory_0);
#line 38
return;
}

sub type_checker_priv::get_fun_key($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;$memory_0 = $_[0];$memory_1 = $_[1];
#line 42
$memory_2 = "";
#line 43
$memory_3 = "";
#line 43
$memory_3 = c_rt_lib::to_nl($memory_1 eq $memory_3);
#line 43
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 43
if (c_rt_lib::check_true($memory_3)) {goto label_2;}
#line 43
$memory_4 = "priv::";
#line 43
$memory_2 = $memory_2 . $memory_4;
#line 43
undef($memory_4);
#line 43
goto label_2;
#line 43
label_2:
#line 43
undef($memory_3);
#line 44
$memory_3 = $memory_2 . $memory_0;
#line 44
undef($memory_0);
#line 44
undef($memory_1);
#line 44
undef($memory_2);
#line 44
return $memory_3;
#line 44
undef($memory_3);
#line 44
undef($memory_2);
#line 44
undef($memory_0);
#line 44
undef($memory_1);
#line 44
return;
}

sub type_checker_priv::return_type_to_tct($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;$memory_0 = $_[0];$memory_1 = $_[1];Scalar::Util::weaken($_[1]) if ref($_[1]);
#line 47
$memory_2 = c_rt_lib::ov_is($memory_0, 'type');
#line 47
if (c_rt_lib::check_true($memory_2)) {goto label_2;}
#line 55
$memory_2 = c_rt_lib::ov_is($memory_0, 'none');
#line 55
if (c_rt_lib::check_true($memory_2)) {goto label_3;}
#line 55
$memory_2 = "NOMATCHALERT";
#line 55
$memory_2 = [$memory_2,$memory_0];
#line 55
die(dfile::ssave($memory_2));
#line 47
label_2:
#line 47
$memory_3 = c_rt_lib::ov_as($memory_0, 'type');
#line 48
$memory_5 = "fun_val";
#line 48
$memory_4 = ov::is($memory_3, $memory_5);
#line 48
undef($memory_5);
#line 48
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 48
if (c_rt_lib::check_true($memory_4)) {goto label_5;}
#line 49
$memory_5 = $memory_3;
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
if (c_rt_lib::check_true($memory_7)) {goto label_8;}
#line 50
$memory_6 = $memory_5->{'name'};
#line 50
$memory_8 = "void";
#line 50
$memory_6 = c_rt_lib::to_nl($memory_6 eq $memory_8);
#line 50
undef($memory_8);
#line 50
label_8:
#line 50
undef($memory_7);
#line 50
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 50
if (c_rt_lib::check_true($memory_6)) {goto label_7;}
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
goto label_7;
#line 52
label_7:
#line 52
undef($memory_6);
#line 52
undef($memory_5);
#line 53
goto label_5;
#line 53
label_5:
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
goto label_1;
#line 55
label_3:
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
goto label_1;
#line 57
label_1:
#line 57
undef($memory_2);
#line 57
undef($memory_0);
#line 57
$_[1] = $memory_1;return;
$_[1] = $memory_1;}

sub type_checker_priv::check_types_imported($$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;$memory_0 = $_[0];$memory_1 = $_[1];Scalar::Util::weaken($_[1]) if ref($_[1]);$memory_2 = $_[2];Scalar::Util::weaken($_[2]) if ref($_[2]);
#line 61
$memory_3 = c_rt_lib::ov_is($memory_0, 'tct_im');
#line 61
if (c_rt_lib::check_true($memory_3)) {goto label_2;}
#line 62
$memory_3 = c_rt_lib::ov_is($memory_0, 'tct_arr');
#line 62
if (c_rt_lib::check_true($memory_3)) {goto label_3;}
#line 64
$memory_3 = c_rt_lib::ov_is($memory_0, 'tct_hash');
#line 64
if (c_rt_lib::check_true($memory_3)) {goto label_4;}
#line 66
$memory_3 = c_rt_lib::ov_is($memory_0, 'tct_rec');
#line 66
if (c_rt_lib::check_true($memory_3)) {goto label_5;}
#line 70
$memory_3 = c_rt_lib::ov_is($memory_0, 'tct_ref');
#line 70
if (c_rt_lib::check_true($memory_3)) {goto label_6;}
#line 79
$memory_3 = c_rt_lib::ov_is($memory_0, 'tct_void');
#line 79
if (c_rt_lib::check_true($memory_3)) {goto label_7;}
#line 80
$memory_3 = c_rt_lib::ov_is($memory_0, 'tct_sim');
#line 80
if (c_rt_lib::check_true($memory_3)) {goto label_8;}
#line 81
$memory_3 = c_rt_lib::ov_is($memory_0, 'tct_var');
#line 81
if (c_rt_lib::check_true($memory_3)) {goto label_9;}
#line 88
$memory_3 = c_rt_lib::ov_is($memory_0, 'tct_empty');
#line 88
if (c_rt_lib::check_true($memory_3)) {goto label_10;}
#line 88
$memory_3 = "NOMATCHALERT";
#line 88
$memory_3 = [$memory_3,$memory_0];
#line 88
die(dfile::ssave($memory_3));
#line 61
label_2:
#line 62
goto label_1;
#line 62
label_3:
#line 62
$memory_4 = c_rt_lib::ov_as($memory_0, 'tct_arr');
#line 63
type_checker_priv::check_types_imported($memory_4, $memory_1, $memory_2);
#line 63
undef($memory_4);
#line 64
goto label_1;
#line 64
label_4:
#line 64
$memory_4 = c_rt_lib::ov_as($memory_0, 'tct_hash');
#line 65
type_checker_priv::check_types_imported($memory_4, $memory_1, $memory_2);
#line 65
undef($memory_4);
#line 66
goto label_1;
#line 66
label_5:
#line 66
$memory_4 = c_rt_lib::ov_as($memory_0, 'tct_rec');
#line 67
$memory_7 = c_rt_lib::init_iter($memory_4);
#line 67
label_13:
#line 67
$memory_5 = c_rt_lib::is_end_hash($memory_7);
#line 67
if (c_rt_lib::check_true($memory_5)) {goto label_11;}
#line 67
$memory_5 = c_rt_lib::get_key_iter($memory_7);
#line 67
$memory_6 = c_rt_lib::hash_get_value($memory_4, $memory_5);
#line 68
type_checker_priv::check_types_imported($memory_6, $memory_1, $memory_2);
#line 69
$memory_7 = c_rt_lib::next_iter($memory_7);
#line 69
goto label_13;
#line 69
label_11:
#line 69
undef($memory_5);
#line 69
undef($memory_6);
#line 69
undef($memory_7);
#line 69
undef($memory_4);
#line 70
goto label_1;
#line 70
label_6:
#line 70
$memory_4 = c_rt_lib::ov_as($memory_0, 'tct_ref');
#line 71
$memory_6 = "::";
#line 71
$memory_5 = string::index2($memory_4, $memory_6);
#line 71
undef($memory_6);
#line 72
$memory_6 = 0;
#line 72
$memory_6 = c_rt_lib::to_nl($memory_5 >= $memory_6);
#line 72
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 72
if (c_rt_lib::check_true($memory_6)) {goto label_15;}
#line 73
$memory_8 = 0;
#line 73
$memory_7 = string::substr($memory_4, $memory_8, $memory_5);
#line 73
undef($memory_8);
#line 74
$memory_9 = 2;
#line 74
$memory_9 = $memory_5 + $memory_9;
#line 74
$memory_10 = string::length($memory_4);
#line 74
$memory_10 = $memory_10 - $memory_5;
#line 74
$memory_11 = 2;
#line 74
$memory_10 = $memory_10 - $memory_11;
#line 74
undef($memory_11);
#line 74
$memory_8 = string::substr($memory_4, $memory_9, $memory_10);
#line 74
undef($memory_10);
#line 74
undef($memory_9);
#line 75
type_checker_priv::check_function_exists($memory_7, $memory_8, $memory_1, $memory_2);
#line 75
undef($memory_7);
#line 75
undef($memory_8);
#line 76
goto label_14;
#line 76
label_15:
#line 77
$memory_7 = "wrong type name '";
#line 77
$memory_7 = $memory_7 . $memory_4;
#line 77
$memory_8 = "' ";
#line 77
$memory_7 = $memory_7 . $memory_8;
#line 77
undef($memory_8);
#line 77
type_checker_priv::add_error($memory_2, $memory_7);
#line 77
undef($memory_7);
#line 78
goto label_14;
#line 78
label_14:
#line 78
undef($memory_6);
#line 78
undef($memory_5);
#line 78
undef($memory_4);
#line 79
goto label_1;
#line 79
label_7:
#line 80
goto label_1;
#line 80
label_8:
#line 81
goto label_1;
#line 81
label_9:
#line 81
$memory_4 = c_rt_lib::ov_as($memory_0, 'tct_var');
#line 82
$memory_7 = c_rt_lib::init_iter($memory_4);
#line 82
label_18:
#line 82
$memory_5 = c_rt_lib::is_end_hash($memory_7);
#line 82
if (c_rt_lib::check_true($memory_5)) {goto label_16;}
#line 82
$memory_5 = c_rt_lib::get_key_iter($memory_7);
#line 82
$memory_6 = c_rt_lib::hash_get_value($memory_4, $memory_5);
#line 83
$memory_8 = c_rt_lib::ov_is($memory_6, 'no_param');
#line 83
if (c_rt_lib::check_true($memory_8)) {goto label_20;}
#line 84
$memory_8 = c_rt_lib::ov_is($memory_6, 'with_param');
#line 84
if (c_rt_lib::check_true($memory_8)) {goto label_21;}
#line 84
$memory_8 = "NOMATCHALERT";
#line 84
$memory_8 = [$memory_8,$memory_6];
#line 84
die(dfile::ssave($memory_8));
#line 83
label_20:
#line 84
goto label_19;
#line 84
label_21:
#line 84
$memory_9 = c_rt_lib::ov_as($memory_6, 'with_param');
#line 85
type_checker_priv::check_types_imported($memory_9, $memory_1, $memory_2);
#line 85
undef($memory_9);
#line 86
goto label_19;
#line 86
label_19:
#line 86
undef($memory_8);
#line 87
$memory_7 = c_rt_lib::next_iter($memory_7);
#line 87
goto label_18;
#line 87
label_16:
#line 87
undef($memory_5);
#line 87
undef($memory_6);
#line 87
undef($memory_7);
#line 87
undef($memory_4);
#line 88
goto label_1;
#line 88
label_10:
#line 89
goto label_1;
#line 89
label_1:
#line 89
undef($memory_3);
#line 89
undef($memory_0);
#line 89
$_[1] = $memory_1;$_[2] = $memory_2;return;
$_[1] = $memory_1;$_[2] = $memory_2;}

sub type_checker_priv::prepare_def_fun($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;my $memory_13;my $memory_14;my $memory_15;my $memory_16;my $memory_17;my $memory_18;my $memory_19;my $memory_20;my $memory_21;my $memory_22;my $memory_23;my $memory_24;$memory_0 = $_[0];$memory_1 = $_[1];Scalar::Util::weaken($_[1]) if ref($_[1]);
#line 92
$memory_2 = {};
#line 93
$memory_5 = c_rt_lib::init_iter($memory_0);
#line 93
label_3:
#line 93
$memory_3 = c_rt_lib::is_end_hash($memory_5);
#line 93
if (c_rt_lib::check_true($memory_3)) {goto label_1;}
#line 93
$memory_3 = c_rt_lib::get_key_iter($memory_5);
#line 93
$memory_4 = c_rt_lib::hash_get_value($memory_0, $memory_3);
#line 94
$memory_6 = 1;
#line 94
$memory_6 = -$memory_6;
#line 94
$memory_7 = $memory_6;
#line 94
 if (c_rt_lib::get_hashcount($memory_1) > 1) {$memory_1 = {%{$memory_1}};}$memory_1->{'current_line'} = $memory_7;
#line 94
undef($memory_6);
#line 94
undef($memory_7);
#line 95
$memory_6 = $memory_3;
#line 95
 if (c_rt_lib::get_hashcount($memory_1) > 1) {$memory_1 = {%{$memory_1}};}$memory_1->{'module'} = $memory_6;
#line 95
undef($memory_6);
#line 96
$memory_6 = {};
#line 97
$memory_7 = $memory_4->{'fun_def'};
#line 97
$memory_9 = 0;
#line 97
$memory_10 = 1;
#line 97
$memory_11 = c_rt_lib::array_len($memory_7);
#line 97
label_6:
#line 97
$memory_12 = c_rt_lib::to_nl($memory_9 >= $memory_11);
#line 97
if (c_rt_lib::check_true($memory_12)) {goto label_4;}
#line 97
$memory_8 = $memory_7->[$memory_9];
#line 98
$memory_13 = [];
#line 99
$memory_14 = $memory_8->{'args'};
#line 99
$memory_16 = 0;
#line 99
$memory_17 = 1;
#line 99
$memory_18 = c_rt_lib::array_len($memory_14);
#line 99
label_9:
#line 99
$memory_19 = c_rt_lib::to_nl($memory_16 >= $memory_18);
#line 99
if (c_rt_lib::check_true($memory_19)) {goto label_7;}
#line 99
$memory_15 = $memory_14->[$memory_16];
#line 100
$memory_21 = $memory_15->{'name'};
#line 100
$memory_22 = $memory_15->{'mod'};
#line 100
$memory_24 = $memory_15->{'type'};
#line 100
$memory_23 = type_checker_priv::type_to_ptd($memory_24, $memory_1);
#line 100
undef($memory_24);
#line 100
$memory_20 = {name => $memory_21,mod => $memory_22,type => $memory_23,};
#line 100
undef($memory_21);
#line 100
undef($memory_22);
#line 100
undef($memory_23);
#line 100
array::push($memory_13, $memory_20);
#line 100
undef($memory_20);
#line 105
$memory_16 = $memory_16 + $memory_17;
#line 105
goto label_9;
#line 105
label_7:
#line 105
undef($memory_14);
#line 105
undef($memory_15);
#line 105
undef($memory_16);
#line 105
undef($memory_17);
#line 105
undef($memory_18);
#line 105
undef($memory_19);
#line 106
$memory_15 = $memory_8->{'cmd'};
#line 106
$memory_16 = c_rt_lib::ov_mk_none('no');
#line 106
$memory_17 = c_rt_lib::ov_mk_none('no');
#line 106
$memory_18 = $memory_8->{'name'};
#line 106
$memory_19 = $memory_8->{'access'};
#line 106
$memory_21 = $memory_8->{'ret_type'};
#line 106
$memory_20 = type_checker_priv::return_type_to_tct($memory_21, $memory_1);
#line 106
undef($memory_21);
#line 106
$memory_14 = {cmd => $memory_15,is_type => $memory_16,ref_types => $memory_17,name => $memory_18,module => $memory_3,access => $memory_19,args => $memory_13,ret_type => $memory_20,};
#line 106
undef($memory_15);
#line 106
undef($memory_16);
#line 106
undef($memory_17);
#line 106
undef($memory_18);
#line 106
undef($memory_19);
#line 106
undef($memory_20);
#line 116
$memory_15 = type_checker_priv::get_fun_def_key($memory_14);
#line 117
$memory_16 = hash::has_key($memory_6, $memory_15);
#line 117
$memory_16 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_16));
#line 117
if (c_rt_lib::check_true($memory_16)) {goto label_11;}
#line 117
$memory_17 = "redefine function: ";
#line 117
$memory_17 = $memory_17 . $memory_15;
#line 117
type_checker_priv::add_error($memory_1, $memory_17);
#line 117
undef($memory_17);
#line 117
goto label_11;
#line 117
label_11:
#line 117
undef($memory_16);
#line 118
hash::set_value($memory_6, $memory_15, $memory_14);
#line 118
undef($memory_13);
#line 118
undef($memory_14);
#line 118
undef($memory_15);
#line 119
$memory_9 = $memory_9 + $memory_10;
#line 119
goto label_6;
#line 119
label_4:
#line 119
undef($memory_7);
#line 119
undef($memory_8);
#line 119
undef($memory_9);
#line 119
undef($memory_10);
#line 119
undef($memory_11);
#line 119
undef($memory_12);
#line 120
hash::set_value($memory_2, $memory_3, $memory_6);
#line 120
undef($memory_6);
#line 121
$memory_5 = c_rt_lib::next_iter($memory_5);
#line 121
goto label_3;
#line 121
label_1:
#line 121
undef($memory_3);
#line 121
undef($memory_4);
#line 121
undef($memory_5);
#line 122
undef($memory_0);
#line 122
$_[1] = $memory_1;return $memory_2;
#line 122
undef($memory_2);
#line 122
undef($memory_0);
#line 122
$_[1] = $memory_1;return;
$_[1] = $memory_1;}

sub type_checker::check($$) {
my $memory_0;my $memory_1;my $memory_2;$memory_0 = $_[0];$memory_1 = $_[1];
#line 125
$memory_2 = type_checker::check_modules($memory_0, $memory_1);
#line 125
undef($memory_0);
#line 125
undef($memory_1);
#line 125
return $memory_2;
#line 125
undef($memory_2);
#line 125
undef($memory_0);
#line 125
undef($memory_1);
#line 125
return;
}

sub type_checker::check_modules($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;$memory_0 = $_[0];$memory_1 = $_[1];
#line 129
$memory_3 = [];
#line 129
$memory_4 = [];
#line 129
$memory_5 = 1;
#line 129
$memory_5 = -$memory_5;
#line 129
$memory_6 = "";
#line 129
$memory_2 = {errors => $memory_3,warnings => $memory_4,current_line => $memory_5,module => $memory_6,};
#line 129
undef($memory_3);
#line 129
undef($memory_4);
#line 129
undef($memory_5);
#line 129
undef($memory_6);
#line 130
$memory_3 = type_checker_priv::prepare_def_fun($memory_1, $memory_2);
#line 131
$memory_5 = [];
#line 131
$memory_6 = [];
#line 131
$memory_4 = {delete => $memory_5,create => $memory_6,};
#line 131
undef($memory_5);
#line 131
undef($memory_6);
#line 132
$memory_7 = c_rt_lib::init_iter($memory_0);
#line 132
label_3:
#line 132
$memory_5 = c_rt_lib::is_end_hash($memory_7);
#line 132
if (c_rt_lib::check_true($memory_5)) {goto label_1;}
#line 132
$memory_5 = c_rt_lib::get_key_iter($memory_7);
#line 132
$memory_6 = c_rt_lib::hash_get_value($memory_0, $memory_5);
#line 133
$memory_8 = 1;
#line 133
$memory_8 = -$memory_8;
#line 133
$memory_9 = $memory_8;
#line 133
 if (c_rt_lib::get_hashcount($memory_2) > 1) {$memory_2 = {%{$memory_2}};}$memory_2->{'current_line'} = $memory_9;
#line 133
undef($memory_8);
#line 133
undef($memory_9);
#line 134
$memory_8 = $memory_5;
#line 134
 if (c_rt_lib::get_hashcount($memory_2) > 1) {$memory_2 = {%{$memory_2}};}$memory_2->{'module'} = $memory_8;
#line 134
undef($memory_8);
#line 135
type_checker_priv::check_module($memory_6, $memory_3, $memory_2, $memory_4);
#line 136
$memory_7 = c_rt_lib::next_iter($memory_7);
#line 136
goto label_3;
#line 136
label_1:
#line 136
undef($memory_5);
#line 136
undef($memory_6);
#line 136
undef($memory_7);
#line 137
$memory_6 = $memory_2->{'errors'};
#line 137
$memory_7 = $memory_2->{'warnings'};
#line 137
$memory_5 = {errors => $memory_6,deref => $memory_4,warnings => $memory_7,};
#line 137
undef($memory_6);
#line 137
undef($memory_7);
#line 137
undef($memory_0);
#line 137
undef($memory_1);
#line 137
undef($memory_2);
#line 137
undef($memory_3);
#line 137
undef($memory_4);
#line 137
return $memory_5;
#line 137
undef($memory_5);
#line 137
undef($memory_2);
#line 137
undef($memory_3);
#line 137
undef($memory_4);
#line 137
undef($memory_0);
#line 137
undef($memory_1);
#line 137
return;
}

sub type_checker_priv::check_module($$$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;my $memory_13;my $memory_14;my $memory_15;my $memory_16;my $memory_17;my $memory_18;my $memory_19;$memory_0 = $_[0];$memory_1 = $_[1];Scalar::Util::weaken($_[1]) if ref($_[1]);$memory_2 = $_[2];Scalar::Util::weaken($_[2]) if ref($_[2]);$memory_3 = $_[3];Scalar::Util::weaken($_[3]) if ref($_[3]);
#line 142
$memory_6 = $memory_0->{'name'};
#line 142
$memory_8 = {};
#line 142
$memory_9 = c_rt_lib::to_nl(0);
#line 142
$memory_7 = {vars => $memory_8,is => $memory_9,};
#line 142
undef($memory_8);
#line 142
undef($memory_9);
#line 142
$memory_8 = tct::empty();
#line 142
$memory_5 = {deref => $memory_3,current_module => $memory_6,breaks => $memory_7,ret_type => $memory_8,};
#line 142
undef($memory_6);
#line 142
undef($memory_7);
#line 142
undef($memory_8);
#line 142
$memory_6 = {};
#line 142
$memory_4 = {env => $memory_5,imports => $memory_6,funs => $memory_1,};
#line 142
undef($memory_5);
#line 142
undef($memory_6);
#line 143
$memory_5 = $memory_0->{'import'};
#line 143
$memory_7 = 0;
#line 143
$memory_8 = 1;
#line 143
$memory_9 = c_rt_lib::array_len($memory_5);
#line 143
label_3:
#line 143
$memory_10 = c_rt_lib::to_nl($memory_7 >= $memory_9);
#line 143
if (c_rt_lib::check_true($memory_10)) {goto label_1;}
#line 143
$memory_6 = $memory_5->[$memory_7];
#line 144
$memory_11 = "imports";
#line 144
$memory_11 = c_rt_lib::get_ref_hash($memory_4, $memory_11);
#line 144
$memory_12 = $memory_6->{'name'};
#line 144
$memory_13 = c_rt_lib::to_nl(1);
#line 144
hash::set_value($memory_11, $memory_12, $memory_13);
#line 144
undef($memory_13);
#line 144
undef($memory_12);
#line 144
$memory_12 = "imports";
#line 144
c_rt_lib::set_ref_hash($memory_4, $memory_12, $memory_11);
#line 144
undef($memory_12);
#line 144
undef($memory_11);
#line 145
$memory_7 = $memory_7 + $memory_8;
#line 145
goto label_3;
#line 145
label_1:
#line 145
undef($memory_5);
#line 145
undef($memory_6);
#line 145
undef($memory_7);
#line 145
undef($memory_8);
#line 145
undef($memory_9);
#line 145
undef($memory_10);
#line 146
$memory_5 = "imports";
#line 146
$memory_5 = c_rt_lib::get_ref_hash($memory_4, $memory_5);
#line 146
$memory_6 = $memory_0->{'name'};
#line 146
$memory_7 = c_rt_lib::to_nl(1);
#line 146
hash::set_value($memory_5, $memory_6, $memory_7);
#line 146
undef($memory_7);
#line 146
undef($memory_6);
#line 146
$memory_6 = "imports";
#line 146
c_rt_lib::set_ref_hash($memory_4, $memory_6, $memory_5);
#line 146
undef($memory_6);
#line 146
undef($memory_5);
#line 147
$memory_5 = $memory_0->{'fun_def'};
#line 147
$memory_7 = 0;
#line 147
$memory_8 = 1;
#line 147
$memory_9 = c_rt_lib::array_len($memory_5);
#line 147
label_6:
#line 147
$memory_10 = c_rt_lib::to_nl($memory_7 >= $memory_9);
#line 147
if (c_rt_lib::check_true($memory_10)) {goto label_4;}
#line 147
$memory_6 = $memory_5->[$memory_7];
#line 148
$memory_11 = {};
#line 149
$memory_12 = $memory_6->{'args'};
#line 149
$memory_14 = 0;
#line 149
$memory_15 = 1;
#line 149
$memory_16 = c_rt_lib::array_len($memory_12);
#line 149
label_9:
#line 149
$memory_17 = c_rt_lib::to_nl($memory_14 >= $memory_16);
#line 149
if (c_rt_lib::check_true($memory_17)) {goto label_7;}
#line 149
$memory_13 = $memory_12->[$memory_14];
#line 150
$memory_19 = $memory_13->{'type'};
#line 150
$memory_18 = type_checker_priv::type_to_ptd($memory_19, $memory_2);
#line 150
undef($memory_19);
#line 151
type_checker_priv::check_types_imported($memory_18, $memory_4, $memory_2);
#line 152
$memory_19 = $memory_13->{'name'};
#line 152
type_checker_priv::add_var_decl_to_vars($memory_18, $memory_19, $memory_11);
#line 152
undef($memory_19);
#line 152
undef($memory_18);
#line 153
$memory_14 = $memory_14 + $memory_15;
#line 153
goto label_9;
#line 153
label_7:
#line 153
undef($memory_12);
#line 153
undef($memory_13);
#line 153
undef($memory_14);
#line 153
undef($memory_15);
#line 153
undef($memory_16);
#line 153
undef($memory_17);
#line 154
$memory_13 = $memory_6->{'ret_type'};
#line 154
$memory_12 = type_checker_priv::return_type_to_tct($memory_13, $memory_2);
#line 154
undef($memory_13);
#line 154
$memory_13 = "env";
#line 154
$memory_13 = c_rt_lib::get_ref_hash($memory_4, $memory_13);
#line 154
$memory_14 = $memory_12;
#line 154
 if (c_rt_lib::get_hashcount($memory_13) > 1) {$memory_13 = {%{$memory_13}};}$memory_13->{'ret_type'} = $memory_14;
#line 154
$memory_15 = "env";
#line 154
c_rt_lib::set_ref_hash($memory_4, $memory_15, $memory_13);
#line 154
undef($memory_15);
#line 154
undef($memory_12);
#line 154
undef($memory_13);
#line 154
undef($memory_14);
#line 155
$memory_12 = $memory_4->{'env'};
#line 155
$memory_12 = $memory_12->{'ret_type'};
#line 155
type_checker_priv::check_types_imported($memory_12, $memory_4, $memory_2);
#line 155
undef($memory_12);
#line 156
$memory_12 = $memory_6->{'cmd'};
#line 156
type_checker_priv::check_cmd($memory_12, $memory_4, $memory_11, $memory_2);
#line 156
undef($memory_12);
#line 156
undef($memory_11);
#line 157
$memory_7 = $memory_7 + $memory_8;
#line 157
goto label_6;
#line 157
label_4:
#line 157
undef($memory_5);
#line 157
undef($memory_6);
#line 157
undef($memory_7);
#line 157
undef($memory_8);
#line 157
undef($memory_9);
#line 157
undef($memory_10);
#line 158
$memory_5 = $memory_4->{'funs'};
#line 158
$memory_1 = $memory_5;
#line 158
undef($memory_5);
#line 159
$memory_5 = $memory_4->{'env'};
#line 159
$memory_5 = $memory_5->{'deref'};
#line 159
$memory_3 = $memory_5;
#line 159
undef($memory_5);
#line 159
undef($memory_4);
#line 159
undef($memory_0);
#line 159
$_[1] = $memory_1;$_[2] = $memory_2;$_[3] = $memory_3;return;
$_[1] = $memory_1;$_[2] = $memory_2;$_[3] = $memory_3;}

sub type_checker_priv::join_vars($$$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;my $memory_13;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];$memory_2 = $_[2];Scalar::Util::weaken($_[2]) if ref($_[2]);$memory_3 = $_[3];Scalar::Util::weaken($_[3]) if ref($_[3]);
#line 163
$memory_5 = "__END";
#line 163
$memory_4 = hash::has_key($memory_1, $memory_5);
#line 163
undef($memory_5);
#line 163
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 163
if (c_rt_lib::check_true($memory_4)) {goto label_2;}
#line 163
undef($memory_1);
#line 163
undef($memory_4);
#line 163
$_[0] = $memory_0;$_[2] = $memory_2;$_[3] = $memory_3;return;
#line 163
goto label_2;
#line 163
label_2:
#line 163
undef($memory_4);
#line 164
$memory_5 = "__END";
#line 164
$memory_4 = hash::has_key($memory_0, $memory_5);
#line 164
undef($memory_5);
#line 164
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 164
if (c_rt_lib::check_true($memory_4)) {goto label_4;}
#line 165
$memory_0 = $memory_1;
#line 166
undef($memory_1);
#line 166
undef($memory_4);
#line 166
$_[0] = $memory_0;$_[2] = $memory_2;$_[3] = $memory_3;return;
#line 167
goto label_4;
#line 167
label_4:
#line 167
undef($memory_4);
#line 168
$memory_6 = c_rt_lib::init_iter($memory_0);
#line 168
label_7:
#line 168
$memory_4 = c_rt_lib::is_end_hash($memory_6);
#line 168
if (c_rt_lib::check_true($memory_4)) {goto label_5;}
#line 168
$memory_4 = c_rt_lib::get_key_iter($memory_6);
#line 168
$memory_5 = c_rt_lib::hash_get_value($memory_0, $memory_4);
#line 169
$memory_7 = $memory_5->{'overwrited'};
#line 169
$memory_8 = c_rt_lib::ov_is($memory_7, 'yes');
#line 169
if (c_rt_lib::check_true($memory_8)) {goto label_9;}
#line 176
$memory_8 = c_rt_lib::ov_is($memory_7, 'no');
#line 176
if (c_rt_lib::check_true($memory_8)) {goto label_10;}
#line 176
$memory_8 = "NOMATCHALERT";
#line 176
$memory_8 = [$memory_8,$memory_7];
#line 176
die(dfile::ssave($memory_8));
#line 169
label_9:
#line 170
$memory_9 = $memory_5->{'type'};
#line 171
$memory_10 = hash::get_value($memory_1, $memory_4);
#line 171
$memory_10 = $memory_10->{'type'};
#line 172
$memory_12 = c_rt_lib::ov_mk_none('yes');
#line 172
$memory_13 = ptd_system::cross_type($memory_9, $memory_10, $memory_2, $memory_3);
#line 172
$memory_11 = {overwrited => $memory_12,type => $memory_13,};
#line 172
undef($memory_12);
#line 172
undef($memory_13);
#line 172
hash::set_value($memory_0, $memory_4, $memory_11);
#line 172
undef($memory_11);
#line 172
undef($memory_9);
#line 172
undef($memory_10);
#line 176
goto label_8;
#line 176
label_10:
#line 177
goto label_8;
#line 177
label_8:
#line 177
undef($memory_7);
#line 177
undef($memory_8);
#line 178
$memory_6 = c_rt_lib::next_iter($memory_6);
#line 178
goto label_7;
#line 178
label_5:
#line 178
undef($memory_4);
#line 178
undef($memory_5);
#line 178
undef($memory_6);
#line 178
undef($memory_1);
#line 178
$_[0] = $memory_0;$_[2] = $memory_2;$_[3] = $memory_3;return;
$_[0] = $memory_0;$_[2] = $memory_2;$_[3] = $memory_3;}

sub type_checker_priv::set_end_function($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);
#line 181
$memory_1 = "__END";
#line 181
$memory_3 = c_rt_lib::ov_mk_none('yes');
#line 181
$memory_4 = tct::empty();
#line 181
$memory_2 = {overwrited => $memory_3,type => $memory_4,};
#line 181
undef($memory_3);
#line 181
undef($memory_4);
#line 181
hash::set_value($memory_0, $memory_1, $memory_2);
#line 181
undef($memory_2);
#line 181
undef($memory_1);
#line 181
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub type_checker_priv::check_cmd($$$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;my $memory_13;my $memory_14;my $memory_15;my $memory_16;my $memory_17;my $memory_18;my $memory_19;my $memory_20;my $memory_21;$memory_0 = $_[0];$memory_1 = $_[1];Scalar::Util::weaken($_[1]) if ref($_[1]);$memory_2 = $_[2];Scalar::Util::weaken($_[2]) if ref($_[2]);$memory_3 = $_[3];Scalar::Util::weaken($_[3]) if ref($_[3]);
#line 186
$memory_4 = $memory_0->{'debug'};
#line 186
$memory_4 = $memory_4->{'begin'};
#line 186
$memory_4 = $memory_4->{'line'};
#line 186
$memory_5 = $memory_4;
#line 186
 if (c_rt_lib::get_hashcount($memory_3) > 1) {$memory_3 = {%{$memory_3}};}$memory_3->{'current_line'} = $memory_5;
#line 186
undef($memory_4);
#line 186
undef($memory_5);
#line 187
$memory_4 = {};
#line 188
$memory_5 = $memory_2;
#line 189
$memory_6 = $memory_0->{'cmd'};
#line 189
$memory_7 = c_rt_lib::ov_is($memory_6, 'if');
#line 189
if (c_rt_lib::check_true($memory_7)) {goto label_2;}
#line 208
$memory_7 = c_rt_lib::ov_is($memory_6, 'for');
#line 208
if (c_rt_lib::check_true($memory_7)) {goto label_3;}
#line 225
$memory_7 = c_rt_lib::ov_is($memory_6, 'fora');
#line 225
if (c_rt_lib::check_true($memory_7)) {goto label_4;}
#line 227
$memory_7 = c_rt_lib::ov_is($memory_6, 'forh');
#line 227
if (c_rt_lib::check_true($memory_7)) {goto label_5;}
#line 229
$memory_7 = c_rt_lib::ov_is($memory_6, 'loop');
#line 229
if (c_rt_lib::check_true($memory_7)) {goto label_6;}
#line 231
$memory_7 = c_rt_lib::ov_is($memory_6, 'rep');
#line 231
if (c_rt_lib::check_true($memory_7)) {goto label_7;}
#line 233
$memory_7 = c_rt_lib::ov_is($memory_6, 'while');
#line 233
if (c_rt_lib::check_true($memory_7)) {goto label_8;}
#line 235
$memory_7 = c_rt_lib::ov_is($memory_6, 'if_mod');
#line 235
if (c_rt_lib::check_true($memory_7)) {goto label_9;}
#line 243
$memory_7 = c_rt_lib::ov_is($memory_6, 'unless_mod');
#line 243
if (c_rt_lib::check_true($memory_7)) {goto label_10;}
#line 251
$memory_7 = c_rt_lib::ov_is($memory_6, 'break');
#line 251
if (c_rt_lib::check_true($memory_7)) {goto label_11;}
#line 259
$memory_7 = c_rt_lib::ov_is($memory_6, 'continue');
#line 259
if (c_rt_lib::check_true($memory_7)) {goto label_12;}
#line 267
$memory_7 = c_rt_lib::ov_is($memory_6, 'match');
#line 267
if (c_rt_lib::check_true($memory_7)) {goto label_13;}
#line 269
$memory_7 = c_rt_lib::ov_is($memory_6, 'value');
#line 269
if (c_rt_lib::check_true($memory_7)) {goto label_14;}
#line 271
$memory_7 = c_rt_lib::ov_is($memory_6, 'return');
#line 271
if (c_rt_lib::check_true($memory_7)) {goto label_15;}
#line 284
$memory_7 = c_rt_lib::ov_is($memory_6, 'block');
#line 284
if (c_rt_lib::check_true($memory_7)) {goto label_16;}
#line 290
$memory_7 = c_rt_lib::ov_is($memory_6, 'die');
#line 290
if (c_rt_lib::check_true($memory_7)) {goto label_17;}
#line 295
$memory_7 = c_rt_lib::ov_is($memory_6, 'var_decl');
#line 295
if (c_rt_lib::check_true($memory_7)) {goto label_18;}
#line 297
$memory_7 = c_rt_lib::ov_is($memory_6, 'try');
#line 297
if (c_rt_lib::check_true($memory_7)) {goto label_19;}
#line 302
$memory_7 = c_rt_lib::ov_is($memory_6, 'ensure');
#line 302
if (c_rt_lib::check_true($memory_7)) {goto label_20;}
#line 304
$memory_7 = c_rt_lib::ov_is($memory_6, 'nop');
#line 304
if (c_rt_lib::check_true($memory_7)) {goto label_21;}
#line 304
$memory_7 = "NOMATCHALERT";
#line 304
$memory_7 = [$memory_7,$memory_6];
#line 304
die(dfile::ssave($memory_7));
#line 189
label_2:
#line 189
$memory_8 = c_rt_lib::ov_as($memory_6, 'if');
#line 190
$memory_10 = $memory_8->{'cond'};
#line 190
$memory_9 = type_checker_priv::check_val($memory_10, $memory_1, $memory_5, $memory_3);
#line 190
undef($memory_10);
#line 191
$memory_10 = ptd_system::is_condition_type($memory_9, $memory_1, $memory_3);
#line 191
$memory_10 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_10));
#line 191
$memory_10 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_10));
#line 191
if (c_rt_lib::check_true($memory_10)) {goto label_23;}
#line 191
$memory_11 = "if argument should be sim or boolean instead of ";
#line 191
$memory_13 = $memory_9->{'type'};
#line 191
$memory_12 = type_checker_priv::get_print_tct_type_name($memory_13);
#line 191
undef($memory_13);
#line 191
$memory_11 = $memory_11 . $memory_12;
#line 191
undef($memory_12);
#line 191
type_checker_priv::add_error($memory_3, $memory_11);
#line 191
undef($memory_11);
#line 191
goto label_23;
#line 191
label_23:
#line 191
undef($memory_10);
#line 194
$memory_10 = $memory_5;
#line 195
$memory_11 = $memory_8->{'if'};
#line 195
type_checker_priv::check_cmd($memory_11, $memory_1, $memory_10, $memory_3);
#line 195
undef($memory_11);
#line 196
$memory_11 = $memory_8->{'elsif'};
#line 196
$memory_13 = 0;
#line 196
$memory_14 = 1;
#line 196
$memory_15 = c_rt_lib::array_len($memory_11);
#line 196
label_26:
#line 196
$memory_16 = c_rt_lib::to_nl($memory_13 >= $memory_15);
#line 196
if (c_rt_lib::check_true($memory_16)) {goto label_24;}
#line 196
$memory_12 = $memory_11->[$memory_13];
#line 197
$memory_17 = $memory_12->{'cmd'};
#line 197
$memory_17 = $memory_17->{'debug'};
#line 197
$memory_17 = $memory_17->{'begin'};
#line 197
$memory_17 = $memory_17->{'line'};
#line 197
$memory_18 = $memory_17;
#line 197
 if (c_rt_lib::get_hashcount($memory_3) > 1) {$memory_3 = {%{$memory_3}};}$memory_3->{'current_line'} = $memory_18;
#line 197
undef($memory_17);
#line 197
undef($memory_18);
#line 198
$memory_18 = $memory_12->{'cond'};
#line 198
$memory_17 = type_checker_priv::check_val($memory_18, $memory_1, $memory_5, $memory_3);
#line 198
undef($memory_18);
#line 199
$memory_18 = ptd_system::is_condition_type($memory_17, $memory_1, $memory_3);
#line 199
$memory_18 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_18));
#line 199
$memory_18 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_18));
#line 199
if (c_rt_lib::check_true($memory_18)) {goto label_28;}
#line 199
$memory_19 = "elsif condition should be sim or boolean instead of ";
#line 199
$memory_21 = $memory_17->{'type'};
#line 199
$memory_20 = type_checker_priv::get_print_tct_type_name($memory_21);
#line 199
undef($memory_21);
#line 199
$memory_19 = $memory_19 . $memory_20;
#line 199
undef($memory_20);
#line 199
type_checker_priv::add_error($memory_3, $memory_19);
#line 199
undef($memory_19);
#line 199
goto label_28;
#line 199
label_28:
#line 199
undef($memory_18);
#line 202
$memory_18 = $memory_5;
#line 203
$memory_19 = $memory_12->{'cmd'};
#line 203
type_checker_priv::check_cmd($memory_19, $memory_1, $memory_18, $memory_3);
#line 203
undef($memory_19);
#line 204
type_checker_priv::join_vars($memory_10, $memory_18, $memory_1, $memory_3);
#line 204
undef($memory_17);
#line 204
undef($memory_18);
#line 205
$memory_13 = $memory_13 + $memory_14;
#line 205
goto label_26;
#line 205
label_24:
#line 205
undef($memory_11);
#line 205
undef($memory_12);
#line 205
undef($memory_13);
#line 205
undef($memory_14);
#line 205
undef($memory_15);
#line 205
undef($memory_16);
#line 206
$memory_11 = $memory_8->{'else'};
#line 206
type_checker_priv::check_cmd($memory_11, $memory_1, $memory_5, $memory_3);
#line 206
undef($memory_11);
#line 207
type_checker_priv::join_vars($memory_5, $memory_10, $memory_1, $memory_3);
#line 207
undef($memory_9);
#line 207
undef($memory_10);
#line 207
undef($memory_8);
#line 208
goto label_1;
#line 208
label_3:
#line 208
$memory_8 = c_rt_lib::ov_as($memory_6, 'for');
#line 209
$memory_9 = $memory_8->{'start'};
#line 209
$memory_10 = c_rt_lib::ov_is($memory_9, 'value');
#line 209
if (c_rt_lib::check_true($memory_10)) {goto label_30;}
#line 211
$memory_10 = c_rt_lib::ov_is($memory_9, 'var_decl');
#line 211
if (c_rt_lib::check_true($memory_10)) {goto label_31;}
#line 211
$memory_10 = "NOMATCHALERT";
#line 211
$memory_10 = [$memory_10,$memory_9];
#line 211
die(dfile::ssave($memory_10));
#line 209
label_30:
#line 209
$memory_11 = c_rt_lib::ov_as($memory_9, 'value');
#line 210
type_checker_priv::check_val($memory_11, $memory_1, $memory_5, $memory_3);
#line 210
undef($memory_11);
#line 211
goto label_29;
#line 211
label_31:
#line 211
$memory_11 = c_rt_lib::ov_as($memory_9, 'var_decl');
#line 212
$memory_12 = type_checker_priv::check_var_decl($memory_11, $memory_1, $memory_5, $memory_3);
#line 212
$memory_13 = $memory_11->{'name'};
#line 212
type_checker_priv::add_var_to_vars($memory_12, $memory_13, $memory_5);
#line 212
undef($memory_13);
#line 212
undef($memory_12);
#line 212
undef($memory_11);
#line 213
goto label_29;
#line 213
label_29:
#line 213
undef($memory_9);
#line 213
undef($memory_10);
#line 214
$memory_9 = $memory_5;
#line 215
$memory_10 = $memory_8->{'cond'};
#line 215
$memory_10 = c_rt_lib::ov_is($memory_10, 'nop');
#line 215
$memory_10 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_10));
#line 215
$memory_10 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_10));
#line 215
if (c_rt_lib::check_true($memory_10)) {goto label_33;}
#line 216
$memory_12 = $memory_8->{'cond'};
#line 216
$memory_11 = type_checker_priv::check_val($memory_12, $memory_1, $memory_9, $memory_3);
#line 216
undef($memory_12);
#line 217
$memory_12 = ptd_system::is_condition_type($memory_11, $memory_1, $memory_3);
#line 217
$memory_12 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_12));
#line 217
$memory_12 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_12));
#line 217
if (c_rt_lib::check_true($memory_12)) {goto label_35;}
#line 217
$memory_13 = "for condition should be sim or boolean instead of ";
#line 217
$memory_15 = $memory_11->{'type'};
#line 217
$memory_14 = type_checker_priv::get_print_tct_type_name($memory_15);
#line 217
undef($memory_15);
#line 217
$memory_13 = $memory_13 . $memory_14;
#line 217
undef($memory_14);
#line 217
type_checker_priv::add_error($memory_3, $memory_13);
#line 217
undef($memory_13);
#line 217
goto label_35;
#line 217
label_35:
#line 217
undef($memory_12);
#line 220
type_checker_priv::join_vars($memory_9, $memory_5, $memory_1, $memory_3);
#line 220
undef($memory_11);
#line 221
goto label_33;
#line 221
label_33:
#line 221
undef($memory_10);
#line 222
$memory_10 = $memory_8->{'cmd'};
#line 222
type_checker_priv::break_continue_block($memory_10, $memory_1, $memory_9, $memory_3);
#line 222
undef($memory_10);
#line 223
$memory_10 = $memory_8->{'iter'};
#line 223
type_checker_priv::check_val($memory_10, $memory_1, $memory_9, $memory_3);
#line 223
undef($memory_10);
#line 224
type_checker_priv::join_vars($memory_5, $memory_9, $memory_1, $memory_3);
#line 224
undef($memory_9);
#line 224
undef($memory_8);
#line 225
goto label_1;
#line 225
label_4:
#line 225
$memory_8 = c_rt_lib::ov_as($memory_6, 'fora');
#line 226
type_checker_priv::check_fora($memory_8, $memory_1, $memory_5, $memory_3);
#line 226
undef($memory_8);
#line 227
goto label_1;
#line 227
label_5:
#line 227
$memory_8 = c_rt_lib::ov_as($memory_6, 'forh');
#line 228
type_checker_priv::check_forh($memory_8, $memory_1, $memory_5, $memory_3);
#line 228
undef($memory_8);
#line 229
goto label_1;
#line 229
label_6:
#line 229
$memory_8 = c_rt_lib::ov_as($memory_6, 'loop');
#line 230
type_checker_priv::break_continue_block($memory_8, $memory_1, $memory_5, $memory_3);
#line 230
undef($memory_8);
#line 231
goto label_1;
#line 231
label_7:
#line 231
$memory_8 = c_rt_lib::ov_as($memory_6, 'rep');
#line 232
type_checker_priv::check_rep($memory_8, $memory_1, $memory_5, $memory_3);
#line 232
undef($memory_8);
#line 233
goto label_1;
#line 233
label_8:
#line 233
$memory_8 = c_rt_lib::ov_as($memory_6, 'while');
#line 234
type_checker_priv::check_while($memory_8, $memory_1, $memory_5, $memory_3);
#line 234
undef($memory_8);
#line 235
goto label_1;
#line 235
label_9:
#line 235
$memory_8 = c_rt_lib::ov_as($memory_6, 'if_mod');
#line 236
$memory_10 = $memory_8->{'cond'};
#line 236
$memory_9 = type_checker_priv::check_val($memory_10, $memory_1, $memory_5, $memory_3);
#line 236
undef($memory_10);
#line 237
$memory_10 = ptd_system::is_condition_type($memory_9, $memory_1, $memory_3);
#line 237
$memory_10 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_10));
#line 237
$memory_10 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_10));
#line 237
if (c_rt_lib::check_true($memory_10)) {goto label_37;}
#line 237
$memory_11 = "if argument should be sim or boolean type instead of ";
#line 237
$memory_13 = $memory_9->{'type'};
#line 237
$memory_12 = type_checker_priv::get_print_tct_type_name($memory_13);
#line 237
undef($memory_13);
#line 237
$memory_11 = $memory_11 . $memory_12;
#line 237
undef($memory_12);
#line 237
type_checker_priv::add_error($memory_3, $memory_11);
#line 237
undef($memory_11);
#line 237
goto label_37;
#line 237
label_37:
#line 237
undef($memory_10);
#line 240
$memory_10 = $memory_5;
#line 241
$memory_11 = $memory_8->{'cmd'};
#line 241
type_checker_priv::check_cmd($memory_11, $memory_1, $memory_10, $memory_3);
#line 241
undef($memory_11);
#line 242
type_checker_priv::join_vars($memory_5, $memory_10, $memory_1, $memory_3);
#line 242
undef($memory_9);
#line 242
undef($memory_10);
#line 242
undef($memory_8);
#line 243
goto label_1;
#line 243
label_10:
#line 243
$memory_8 = c_rt_lib::ov_as($memory_6, 'unless_mod');
#line 244
$memory_10 = $memory_8->{'cond'};
#line 244
$memory_9 = type_checker_priv::check_val($memory_10, $memory_1, $memory_5, $memory_3);
#line 244
undef($memory_10);
#line 245
$memory_10 = ptd_system::is_condition_type($memory_9, $memory_1, $memory_3);
#line 245
$memory_10 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_10));
#line 245
$memory_10 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_10));
#line 245
if (c_rt_lib::check_true($memory_10)) {goto label_39;}
#line 245
$memory_11 = "unless argument should be sim or boolean type instead of ";
#line 245
$memory_13 = $memory_9->{'type'};
#line 245
$memory_12 = type_checker_priv::get_print_tct_type_name($memory_13);
#line 245
undef($memory_13);
#line 245
$memory_11 = $memory_11 . $memory_12;
#line 245
undef($memory_12);
#line 245
type_checker_priv::add_error($memory_3, $memory_11);
#line 245
undef($memory_11);
#line 245
goto label_39;
#line 245
label_39:
#line 245
undef($memory_10);
#line 248
$memory_10 = $memory_5;
#line 249
$memory_11 = $memory_8->{'cmd'};
#line 249
type_checker_priv::check_cmd($memory_11, $memory_1, $memory_10, $memory_3);
#line 249
undef($memory_11);
#line 250
type_checker_priv::join_vars($memory_5, $memory_10, $memory_1, $memory_3);
#line 250
undef($memory_9);
#line 250
undef($memory_10);
#line 250
undef($memory_8);
#line 251
goto label_1;
#line 251
label_11:
#line 252
$memory_8 = $memory_1->{'env'};
#line 252
$memory_8 = $memory_8->{'breaks'};
#line 252
$memory_8 = $memory_8->{'is'};
#line 252
$memory_8 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 252
$memory_8 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 252
if (c_rt_lib::check_true($memory_8)) {goto label_41;}
#line 253
$memory_9 = "command break can be used only in cyclic block";
#line 253
type_checker_priv::add_error($memory_3, $memory_9);
#line 253
undef($memory_9);
#line 254
goto label_40;
#line 254
label_41:
#line 255
$memory_9 = $memory_1->{'env'};
#line 255
$memory_9 = $memory_9->{'breaks'};
#line 255
$memory_9 = $memory_9->{'vars'};
#line 256
type_checker_priv::join_vars($memory_9, $memory_5, $memory_1, $memory_3);
#line 257
$memory_10 = "env";
#line 257
$memory_10 = c_rt_lib::get_ref_hash($memory_1, $memory_10);
#line 257
$memory_11 = "breaks";
#line 257
$memory_11 = c_rt_lib::get_ref_hash($memory_10, $memory_11);
#line 257
$memory_12 = $memory_9;
#line 257
 if (c_rt_lib::get_hashcount($memory_11) > 1) {$memory_11 = {%{$memory_11}};}$memory_11->{'vars'} = $memory_12;
#line 257
$memory_13 = "breaks";
#line 257
c_rt_lib::set_ref_hash($memory_10, $memory_13, $memory_11);
#line 257
$memory_13 = "env";
#line 257
c_rt_lib::set_ref_hash($memory_1, $memory_13, $memory_10);
#line 257
undef($memory_13);
#line 257
undef($memory_10);
#line 257
undef($memory_11);
#line 257
undef($memory_12);
#line 257
undef($memory_9);
#line 258
goto label_40;
#line 258
label_40:
#line 258
undef($memory_8);
#line 259
goto label_1;
#line 259
label_12:
#line 260
$memory_8 = $memory_1->{'env'};
#line 260
$memory_8 = $memory_8->{'breaks'};
#line 260
$memory_8 = $memory_8->{'is'};
#line 260
$memory_8 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 260
$memory_8 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 260
if (c_rt_lib::check_true($memory_8)) {goto label_43;}
#line 261
$memory_9 = "command continue can be used only in cyclic block";
#line 261
type_checker_priv::add_error($memory_3, $memory_9);
#line 261
undef($memory_9);
#line 262
goto label_42;
#line 262
label_43:
#line 263
$memory_9 = $memory_1->{'env'};
#line 263
$memory_9 = $memory_9->{'breaks'};
#line 263
$memory_9 = $memory_9->{'vars'};
#line 264
type_checker_priv::join_vars($memory_9, $memory_5, $memory_1, $memory_3);
#line 265
$memory_10 = "env";
#line 265
$memory_10 = c_rt_lib::get_ref_hash($memory_1, $memory_10);
#line 265
$memory_11 = "breaks";
#line 265
$memory_11 = c_rt_lib::get_ref_hash($memory_10, $memory_11);
#line 265
$memory_12 = $memory_9;
#line 265
 if (c_rt_lib::get_hashcount($memory_11) > 1) {$memory_11 = {%{$memory_11}};}$memory_11->{'vars'} = $memory_12;
#line 265
$memory_13 = "breaks";
#line 265
c_rt_lib::set_ref_hash($memory_10, $memory_13, $memory_11);
#line 265
$memory_13 = "env";
#line 265
c_rt_lib::set_ref_hash($memory_1, $memory_13, $memory_10);
#line 265
undef($memory_13);
#line 265
undef($memory_10);
#line 265
undef($memory_11);
#line 265
undef($memory_12);
#line 265
undef($memory_9);
#line 266
goto label_42;
#line 266
label_42:
#line 266
undef($memory_8);
#line 267
goto label_1;
#line 267
label_13:
#line 267
$memory_8 = c_rt_lib::ov_as($memory_6, 'match');
#line 268
type_checker_priv::check_match($memory_8, $memory_1, $memory_5, $memory_3);
#line 268
undef($memory_8);
#line 269
goto label_1;
#line 269
label_14:
#line 269
$memory_8 = c_rt_lib::ov_as($memory_6, 'value');
#line 270
type_checker_priv::check_val($memory_8, $memory_1, $memory_5, $memory_3);
#line 270
undef($memory_8);
#line 271
goto label_1;
#line 271
label_15:
#line 271
$memory_8 = c_rt_lib::ov_as($memory_6, 'return');
#line 272
$memory_9 = type_checker_priv::check_val($memory_8, $memory_1, $memory_5, $memory_3);
#line 273
$memory_12 = $memory_1->{'env'};
#line 273
$memory_12 = $memory_12->{'ret_type'};
#line 273
$memory_13 = "tct_void";
#line 273
$memory_10 = ov::is($memory_12, $memory_13);
#line 273
undef($memory_13);
#line 273
undef($memory_12);
#line 273
$memory_11 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_10));
#line 273
if (c_rt_lib::check_true($memory_11)) {goto label_46;}
#line 273
$memory_12 = $memory_9->{'type'};
#line 273
$memory_13 = "tct_empty";
#line 273
$memory_10 = ov::is($memory_12, $memory_13);
#line 273
undef($memory_13);
#line 273
undef($memory_12);
#line 273
$memory_10 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_10));
#line 273
label_46:
#line 273
undef($memory_11);
#line 273
$memory_10 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_10));
#line 273
if (c_rt_lib::check_true($memory_10)) {goto label_45;}
#line 274
$memory_11 = "can't return value in void function";
#line 274
type_checker_priv::add_error($memory_3, $memory_11);
#line 274
undef($memory_11);
#line 275
goto label_50;
#line 275
label_45:
#line 275
$memory_13 = $memory_1->{'env'};
#line 275
$memory_13 = $memory_13->{'ret_type'};
#line 275
$memory_14 = "tct_void";
#line 275
$memory_10 = ov::is($memory_13, $memory_14);
#line 275
undef($memory_14);
#line 275
undef($memory_13);
#line 275
$memory_10 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_10));
#line 275
$memory_12 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_10));
#line 275
if (c_rt_lib::check_true($memory_12)) {goto label_49;}
#line 275
$memory_13 = $memory_1->{'env'};
#line 275
$memory_13 = $memory_13->{'ret_type'};
#line 275
$memory_14 = "tct_im";
#line 275
$memory_10 = ov::is($memory_13, $memory_14);
#line 275
undef($memory_14);
#line 275
undef($memory_13);
#line 275
$memory_10 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_10));
#line 275
label_49:
#line 275
undef($memory_12);
#line 275
$memory_11 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_10));
#line 275
if (c_rt_lib::check_true($memory_11)) {goto label_48;}
#line 275
$memory_12 = $memory_9->{'type'};
#line 275
$memory_13 = "tct_empty";
#line 275
$memory_10 = ov::is($memory_12, $memory_13);
#line 275
undef($memory_13);
#line 275
undef($memory_12);
#line 275
label_48:
#line 275
undef($memory_11);
#line 275
$memory_10 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_10));
#line 275
if (c_rt_lib::check_true($memory_10)) {goto label_47;}
#line 276
$memory_11 = "must be returned value in non void function";
#line 276
type_checker_priv::add_error($memory_3, $memory_11);
#line 276
undef($memory_11);
#line 277
goto label_50;
#line 277
label_47:
#line 277
$memory_12 = $memory_1->{'env'};
#line 277
$memory_12 = $memory_12->{'ret_type'};
#line 277
$memory_13 = "tct_void";
#line 277
$memory_10 = ov::is($memory_12, $memory_13);
#line 277
undef($memory_13);
#line 277
undef($memory_12);
#line 277
$memory_10 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_10));
#line 277
$memory_11 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_10));
#line 277
if (c_rt_lib::check_true($memory_11)) {goto label_51;}
#line 277
$memory_12 = $memory_9->{'type'};
#line 277
$memory_13 = "tct_empty";
#line 277
$memory_10 = ov::is($memory_12, $memory_13);
#line 277
undef($memory_13);
#line 277
undef($memory_12);
#line 277
$memory_10 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_10));
#line 277
label_51:
#line 277
undef($memory_11);
#line 277
$memory_10 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_10));
#line 277
if (c_rt_lib::check_true($memory_10)) {goto label_50;}
#line 278
$memory_12 = $memory_1->{'env'};
#line 278
$memory_12 = $memory_12->{'ret_type'};
#line 278
$memory_11 = ptd_system::check_assignment($memory_12, $memory_9, $memory_1, $memory_3);
#line 278
undef($memory_12);
#line 279
$memory_13 = "err";
#line 279
$memory_12 = ov::is($memory_11, $memory_13);
#line 279
undef($memory_13);
#line 279
$memory_12 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_12));
#line 279
if (c_rt_lib::check_true($memory_12)) {goto label_53;}
#line 280
$memory_13 = "the return value have the wrong type: ";
#line 280
$memory_14 = type_checker_priv::get_print_check_info($memory_11);
#line 280
$memory_13 = $memory_13 . $memory_14;
#line 280
undef($memory_14);
#line 280
type_checker_priv::add_error($memory_3, $memory_13);
#line 280
undef($memory_13);
#line 281
goto label_53;
#line 281
label_53:
#line 281
undef($memory_12);
#line 281
undef($memory_11);
#line 282
goto label_50;
#line 282
label_50:
#line 282
undef($memory_10);
#line 283
type_checker_priv::set_end_function($memory_5);
#line 283
undef($memory_9);
#line 283
undef($memory_8);
#line 284
goto label_1;
#line 284
label_16:
#line 284
$memory_8 = c_rt_lib::ov_as($memory_6, 'block');
#line 285
$memory_10 = 0;
#line 285
$memory_11 = 1;
#line 285
$memory_12 = c_rt_lib::array_len($memory_8);
#line 285
label_56:
#line 285
$memory_13 = c_rt_lib::to_nl($memory_10 >= $memory_12);
#line 285
if (c_rt_lib::check_true($memory_13)) {goto label_54;}
#line 285
$memory_9 = $memory_8->[$memory_10];
#line 286
$memory_14 = type_checker_priv::check_cmd($memory_9, $memory_1, $memory_5, $memory_3);
#line 286
$memory_17 = c_rt_lib::init_iter($memory_14);
#line 286
label_59:
#line 286
$memory_15 = c_rt_lib::is_end_hash($memory_17);
#line 286
if (c_rt_lib::check_true($memory_15)) {goto label_57;}
#line 286
$memory_15 = c_rt_lib::get_key_iter($memory_17);
#line 286
$memory_16 = c_rt_lib::hash_get_value($memory_14, $memory_15);
#line 287
type_checker_priv::add_var_to_vars($memory_16, $memory_15, $memory_5);
#line 288
$memory_17 = c_rt_lib::next_iter($memory_17);
#line 288
goto label_59;
#line 288
label_57:
#line 288
undef($memory_14);
#line 288
undef($memory_15);
#line 288
undef($memory_16);
#line 288
undef($memory_17);
#line 289
$memory_10 = $memory_10 + $memory_11;
#line 289
goto label_56;
#line 289
label_54:
#line 289
undef($memory_9);
#line 289
undef($memory_10);
#line 289
undef($memory_11);
#line 289
undef($memory_12);
#line 289
undef($memory_13);
#line 289
undef($memory_8);
#line 290
goto label_1;
#line 290
label_17:
#line 290
$memory_8 = c_rt_lib::ov_as($memory_6, 'die');
#line 291
$memory_10 = 0;
#line 291
$memory_11 = 1;
#line 291
$memory_12 = c_rt_lib::array_len($memory_8);
#line 291
label_62:
#line 291
$memory_13 = c_rt_lib::to_nl($memory_10 >= $memory_12);
#line 291
if (c_rt_lib::check_true($memory_13)) {goto label_60;}
#line 291
$memory_9 = $memory_8->[$memory_10];
#line 292
type_checker_priv::check_val($memory_9, $memory_1, $memory_5, $memory_3);
#line 293
$memory_10 = $memory_10 + $memory_11;
#line 293
goto label_62;
#line 293
label_60:
#line 293
undef($memory_9);
#line 293
undef($memory_10);
#line 293
undef($memory_11);
#line 293
undef($memory_12);
#line 293
undef($memory_13);
#line 294
type_checker_priv::set_end_function($memory_5);
#line 294
undef($memory_8);
#line 295
goto label_1;
#line 295
label_18:
#line 295
$memory_8 = c_rt_lib::ov_as($memory_6, 'var_decl');
#line 296
$memory_9 = $memory_8->{'name'};
#line 296
$memory_10 = type_checker_priv::check_var_decl($memory_8, $memory_1, $memory_5, $memory_3);
#line 296
hash::set_value($memory_4, $memory_9, $memory_10);
#line 296
undef($memory_10);
#line 296
undef($memory_9);
#line 296
undef($memory_8);
#line 297
goto label_1;
#line 297
label_19:
#line 297
$memory_8 = c_rt_lib::ov_as($memory_6, 'try');
#line 298
$memory_10 = $memory_1->{'env'};
#line 298
$memory_10 = $memory_10->{'ret_type'};
#line 298
$memory_11 = c_rt_lib::ov_mk_none('speculation');
#line 298
$memory_9 = {type => $memory_10,src => $memory_11,};
#line 298
undef($memory_10);
#line 298
undef($memory_11);
#line 299
$memory_10 = ptd_system::is_try_ensure_type($memory_9, $memory_1, $memory_3);
#line 299
$memory_10 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_10));
#line 299
$memory_10 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_10));
#line 299
if (c_rt_lib::check_true($memory_10)) {goto label_64;}
#line 299
$memory_11 = "function in which is used 'try' must return variant: ok, err ";
#line 299
type_checker_priv::add_error($memory_3, $memory_11);
#line 299
undef($memory_11);
#line 299
goto label_64;
#line 299
label_64:
#line 299
undef($memory_10);
#line 301
$memory_10 = type_checker_priv::check_try_ensure($memory_8, $memory_1, $memory_5, $memory_3);
#line 301
$memory_4 = $memory_10;
#line 301
undef($memory_10);
#line 301
undef($memory_9);
#line 301
undef($memory_8);
#line 302
goto label_1;
#line 302
label_20:
#line 302
$memory_8 = c_rt_lib::ov_as($memory_6, 'ensure');
#line 303
$memory_9 = type_checker_priv::check_try_ensure($memory_8, $memory_1, $memory_5, $memory_3);
#line 303
$memory_4 = $memory_9;
#line 303
undef($memory_9);
#line 303
undef($memory_8);
#line 304
goto label_1;
#line 304
label_21:
#line 305
goto label_1;
#line 305
label_1:
#line 305
undef($memory_6);
#line 305
undef($memory_7);
#line 306
$memory_8 = c_rt_lib::init_iter($memory_2);
#line 306
label_67:
#line 306
$memory_6 = c_rt_lib::is_end_hash($memory_8);
#line 306
if (c_rt_lib::check_true($memory_6)) {goto label_65;}
#line 306
$memory_6 = c_rt_lib::get_key_iter($memory_8);
#line 306
$memory_7 = c_rt_lib::hash_get_value($memory_2, $memory_6);
#line 307
$memory_9 = hash::get_value($memory_5, $memory_6);
#line 307
hash::set_value($memory_2, $memory_6, $memory_9);
#line 307
undef($memory_9);
#line 308
$memory_8 = c_rt_lib::next_iter($memory_8);
#line 308
goto label_67;
#line 308
label_65:
#line 308
undef($memory_6);
#line 308
undef($memory_7);
#line 308
undef($memory_8);
#line 309
$memory_7 = "__END";
#line 309
$memory_6 = hash::has_key($memory_5, $memory_7);
#line 309
undef($memory_7);
#line 309
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 309
if (c_rt_lib::check_true($memory_6)) {goto label_69;}
#line 310
$memory_7 = "__END";
#line 310
$memory_9 = c_rt_lib::ov_mk_none('yes');
#line 310
$memory_10 = tct::empty();
#line 310
$memory_8 = {overwrited => $memory_9,type => $memory_10,};
#line 310
undef($memory_9);
#line 310
undef($memory_10);
#line 310
hash::set_value($memory_2, $memory_7, $memory_8);
#line 310
undef($memory_8);
#line 310
undef($memory_7);
#line 311
goto label_69;
#line 311
label_69:
#line 311
undef($memory_6);
#line 312
undef($memory_0);
#line 312
undef($memory_5);
#line 312
$_[1] = $memory_1;$_[2] = $memory_2;$_[3] = $memory_3;return $memory_4;
#line 312
undef($memory_4);
#line 312
undef($memory_5);
#line 312
undef($memory_0);
#line 312
$_[1] = $memory_1;$_[2] = $memory_2;$_[3] = $memory_3;return;
$_[1] = $memory_1;$_[2] = $memory_2;$_[3] = $memory_3;}

sub type_checker_priv::break_continue_block($$$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;$memory_0 = $_[0];$memory_1 = $_[1];Scalar::Util::weaken($_[1]) if ref($_[1]);$memory_2 = $_[2];Scalar::Util::weaken($_[2]) if ref($_[2]);$memory_3 = $_[3];Scalar::Util::weaken($_[3]) if ref($_[3]);
#line 316
$memory_4 = $memory_1->{'env'};
#line 316
$memory_4 = $memory_4->{'breaks'};
#line 317
$memory_6 = c_rt_lib::to_nl(1);
#line 317
$memory_5 = {is => $memory_6,vars => $memory_2,};
#line 317
undef($memory_6);
#line 317
$memory_6 = "env";
#line 317
$memory_6 = c_rt_lib::get_ref_hash($memory_1, $memory_6);
#line 317
$memory_7 = $memory_5;
#line 317
 if (c_rt_lib::get_hashcount($memory_6) > 1) {$memory_6 = {%{$memory_6}};}$memory_6->{'breaks'} = $memory_7;
#line 317
$memory_8 = "env";
#line 317
c_rt_lib::set_ref_hash($memory_1, $memory_8, $memory_6);
#line 317
undef($memory_8);
#line 317
undef($memory_5);
#line 317
undef($memory_6);
#line 317
undef($memory_7);
#line 318
type_checker_priv::check_cmd($memory_0, $memory_1, $memory_2, $memory_3);
#line 319
$memory_5 = $memory_1->{'env'};
#line 319
$memory_5 = $memory_5->{'breaks'};
#line 319
$memory_5 = $memory_5->{'vars'};
#line 319
type_checker_priv::join_vars($memory_2, $memory_5, $memory_1, $memory_3);
#line 319
undef($memory_5);
#line 320
$memory_5 = "env";
#line 320
$memory_5 = c_rt_lib::get_ref_hash($memory_1, $memory_5);
#line 320
$memory_6 = $memory_4;
#line 320
 if (c_rt_lib::get_hashcount($memory_5) > 1) {$memory_5 = {%{$memory_5}};}$memory_5->{'breaks'} = $memory_6;
#line 320
$memory_7 = "env";
#line 320
c_rt_lib::set_ref_hash($memory_1, $memory_7, $memory_5);
#line 320
undef($memory_7);
#line 320
undef($memory_5);
#line 320
undef($memory_6);
#line 320
undef($memory_4);
#line 320
undef($memory_0);
#line 320
$_[1] = $memory_1;$_[2] = $memory_2;$_[3] = $memory_3;return;
$_[1] = $memory_1;$_[2] = $memory_2;$_[3] = $memory_3;}

sub type_checker_priv::check_try_ensure($$$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;$memory_0 = $_[0];$memory_1 = $_[1];Scalar::Util::weaken($_[1]) if ref($_[1]);$memory_2 = $_[2];Scalar::Util::weaken($_[2]) if ref($_[2]);$memory_3 = $_[3];Scalar::Util::weaken($_[3]) if ref($_[3]);
#line 324
$memory_4 = {};
#line 325
$memory_5 = c_rt_lib::ov_is($memory_0, 'decl');
#line 325
if (c_rt_lib::check_true($memory_5)) {goto label_2;}
#line 327
$memory_5 = c_rt_lib::ov_is($memory_0, 'lval');
#line 327
if (c_rt_lib::check_true($memory_5)) {goto label_3;}
#line 335
$memory_5 = c_rt_lib::ov_is($memory_0, 'expr');
#line 335
if (c_rt_lib::check_true($memory_5)) {goto label_4;}
#line 335
$memory_5 = "NOMATCHALERT";
#line 335
$memory_5 = [$memory_5,$memory_0];
#line 335
die(dfile::ssave($memory_5));
#line 325
label_2:
#line 325
$memory_6 = c_rt_lib::ov_as($memory_0, 'decl');
#line 326
$memory_7 = $memory_6->{'name'};
#line 326
$memory_9 = c_rt_lib::to_nl(1);
#line 326
$memory_8 = type_checker_priv::check_var_decl_try($memory_6, $memory_9, $memory_1, $memory_2, $memory_3);
#line 326
undef($memory_9);
#line 326
hash::set_value($memory_4, $memory_7, $memory_8);
#line 326
undef($memory_8);
#line 326
undef($memory_7);
#line 326
undef($memory_6);
#line 327
goto label_1;
#line 327
label_3:
#line 327
$memory_6 = c_rt_lib::ov_as($memory_0, 'lval');
#line 328
$memory_8 = $memory_6->{'right'};
#line 328
$memory_7 = type_checker_priv::check_val($memory_8, $memory_1, $memory_2, $memory_3);
#line 328
undef($memory_8);
#line 329
$memory_9 = $memory_3->{'errors'};
#line 329
$memory_8 = array::len($memory_9);
#line 329
undef($memory_9);
#line 330
$memory_10 = $memory_6->{'left'};
#line 330
$memory_9 = type_checker_priv::get_type_left_site_equation($memory_10, $memory_1, $memory_2, $memory_3);
#line 330
undef($memory_10);
#line 331
$memory_11 = $memory_3->{'errors'};
#line 331
$memory_10 = array::len($memory_11);
#line 331
undef($memory_11);
#line 331
$memory_10 = $memory_10 - $memory_8;
#line 331
$memory_8 = $memory_10;
#line 331
undef($memory_10);
#line 332
$memory_10 = 0;
#line 332
$memory_10 = c_rt_lib::to_nl($memory_8 > $memory_10);
#line 332
$memory_10 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_10));
#line 332
if (c_rt_lib::check_true($memory_10)) {goto label_6;}
#line 332
undef($memory_0);
#line 332
undef($memory_5);
#line 332
undef($memory_6);
#line 332
undef($memory_7);
#line 332
undef($memory_8);
#line 332
undef($memory_9);
#line 332
undef($memory_10);
#line 332
$_[1] = $memory_1;$_[2] = $memory_2;$_[3] = $memory_3;return $memory_4;
#line 332
goto label_6;
#line 332
label_6:
#line 332
undef($memory_10);
#line 333
$memory_10 = ptd_system::get_try_ensure_ok_type($memory_7, $memory_1, $memory_3);
#line 333
$memory_11 = $memory_10;
#line 333
 if (c_rt_lib::get_hashcount($memory_7) > 1) {$memory_7 = {%{$memory_7}};}$memory_7->{'type'} = $memory_11;
#line 333
undef($memory_10);
#line 333
undef($memory_11);
#line 334
$memory_10 = $memory_6->{'left'};
#line 334
type_checker_priv::set_type_to_lval($memory_10, $memory_9, $memory_7, $memory_1, $memory_2, $memory_3);
#line 334
undef($memory_10);
#line 334
undef($memory_7);
#line 334
undef($memory_8);
#line 334
undef($memory_9);
#line 334
undef($memory_6);
#line 335
goto label_1;
#line 335
label_4:
#line 335
$memory_6 = c_rt_lib::ov_as($memory_0, 'expr');
#line 336
$memory_7 = type_checker_priv::check_val($memory_6, $memory_1, $memory_2, $memory_3);
#line 337
ptd_system::get_try_ensure_ok_type($memory_7, $memory_1, $memory_3);
#line 337
undef($memory_7);
#line 337
undef($memory_6);
#line 338
goto label_1;
#line 338
label_1:
#line 338
undef($memory_5);
#line 339
undef($memory_0);
#line 339
$_[1] = $memory_1;$_[2] = $memory_2;$_[3] = $memory_3;return $memory_4;
#line 339
undef($memory_4);
#line 339
undef($memory_0);
#line 339
$_[1] = $memory_1;$_[2] = $memory_2;$_[3] = $memory_3;return;
$_[1] = $memory_1;$_[2] = $memory_2;$_[3] = $memory_3;}

sub type_checker_priv::check_forh($$$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;$memory_0 = $_[0];$memory_1 = $_[1];Scalar::Util::weaken($_[1]) if ref($_[1]);$memory_2 = $_[2];Scalar::Util::weaken($_[2]) if ref($_[2]);$memory_3 = $_[3];Scalar::Util::weaken($_[3]) if ref($_[3]);
#line 344
$memory_6 = $memory_0->{'hash'};
#line 344
$memory_5 = type_checker_priv::check_val($memory_6, $memory_1, $memory_2, $memory_3);
#line 344
undef($memory_6);
#line 344
$memory_4 = ptd_system::can_delete($memory_5, $memory_1, $memory_3);
#line 344
undef($memory_5);
#line 345
$memory_7 = tct::tct_im();
#line 345
$memory_6 = tct::hash($memory_7);
#line 345
undef($memory_7);
#line 345
$memory_5 = ptd_system::is_accepted($memory_4, $memory_6, $memory_1, $memory_3);
#line 345
undef($memory_6);
#line 345
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 345
if (c_rt_lib::check_true($memory_5)) {goto label_2;}
#line 346
goto label_1;
#line 346
label_2:
#line 346
$memory_7 = {};
#line 346
$memory_6 = tct::rec($memory_7);
#line 346
undef($memory_7);
#line 346
$memory_5 = ptd_system::is_accepted($memory_4, $memory_6, $memory_1, $memory_3);
#line 346
undef($memory_6);
#line 346
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 346
if (c_rt_lib::check_true($memory_5)) {goto label_3;}
#line 347
$memory_6 = type_checker_priv::is_known($memory_4);
#line 347
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 347
if (c_rt_lib::check_true($memory_6)) {goto label_5;}
#line 347
$memory_7 = "forh argument should be a hash not rec";
#line 347
type_checker_priv::add_error($memory_3, $memory_7);
#line 347
undef($memory_7);
#line 347
goto label_5;
#line 347
label_5:
#line 347
undef($memory_6);
#line 348
goto label_1;
#line 348
label_3:
#line 349
$memory_6 = "forh argument should be a hash type instead of ";
#line 349
$memory_8 = $memory_4->{'type'};
#line 349
$memory_7 = type_checker_priv::get_print_tct_type_name($memory_8);
#line 349
undef($memory_8);
#line 349
$memory_6 = $memory_6 . $memory_7;
#line 349
undef($memory_7);
#line 349
type_checker_priv::add_error($memory_3, $memory_6);
#line 349
undef($memory_6);
#line 350
goto label_1;
#line 350
label_1:
#line 350
undef($memory_5);
#line 352
$memory_6 = $memory_4->{'type'};
#line 352
$memory_7 = "tct_hash";
#line 352
$memory_5 = ov::is($memory_6, $memory_7);
#line 352
undef($memory_7);
#line 352
undef($memory_6);
#line 352
if (c_rt_lib::check_true($memory_5)) {goto label_7;}
#line 352
$memory_5 = tct::tct_im();
#line 352
goto label_6;
#line 352
label_7:
#line 352
$memory_5 = $memory_4->{'type'};
#line 352
$memory_5 = c_rt_lib::ov_as($memory_5, 'tct_hash');
#line 352
label_6:
#line 352
$memory_6 = $memory_5;
#line 352
 if (c_rt_lib::get_hashcount($memory_4) > 1) {$memory_4 = {%{$memory_4}};}$memory_4->{'type'} = $memory_6;
#line 352
undef($memory_5);
#line 352
undef($memory_6);
#line 355
$memory_5 = $memory_2;
#line 356
$memory_6 = $memory_0->{'key'};
#line 356
$memory_8 = tct::sim();
#line 356
$memory_9 = c_rt_lib::ov_mk_none('speculation');
#line 356
$memory_7 = {type => $memory_8,src => $memory_9,};
#line 356
undef($memory_8);
#line 356
undef($memory_9);
#line 356
type_checker_priv::add_var_decl_with_type_and_check($memory_6, $memory_7, $memory_5, $memory_3);
#line 356
undef($memory_7);
#line 356
undef($memory_6);
#line 357
$memory_6 = $memory_0->{'val'};
#line 357
type_checker_priv::add_var_decl_with_type_and_check($memory_6, $memory_4, $memory_5, $memory_3);
#line 357
undef($memory_6);
#line 358
$memory_6 = $memory_0->{'cmd'};
#line 358
type_checker_priv::break_continue_block($memory_6, $memory_1, $memory_5, $memory_3);
#line 358
undef($memory_6);
#line 359
type_checker_priv::join_vars($memory_2, $memory_5, $memory_1, $memory_3);
#line 359
undef($memory_4);
#line 359
undef($memory_5);
#line 359
undef($memory_0);
#line 359
$_[1] = $memory_1;$_[2] = $memory_2;$_[3] = $memory_3;return;
$_[1] = $memory_1;$_[2] = $memory_2;$_[3] = $memory_3;}

sub type_checker_priv::check_fora($$$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;$memory_0 = $_[0];$memory_1 = $_[1];Scalar::Util::weaken($_[1]) if ref($_[1]);$memory_2 = $_[2];Scalar::Util::weaken($_[2]) if ref($_[2]);$memory_3 = $_[3];Scalar::Util::weaken($_[3]) if ref($_[3]);
#line 364
$memory_6 = $memory_0->{'array'};
#line 364
$memory_5 = type_checker_priv::check_val($memory_6, $memory_1, $memory_2, $memory_3);
#line 364
undef($memory_6);
#line 364
$memory_4 = ptd_system::can_delete($memory_5, $memory_1, $memory_3);
#line 364
undef($memory_5);
#line 366
$memory_7 = tct::tct_im();
#line 366
$memory_6 = tct::arr($memory_7);
#line 366
undef($memory_7);
#line 366
$memory_5 = ptd_system::is_accepted($memory_4, $memory_6, $memory_1, $memory_3);
#line 366
undef($memory_6);
#line 366
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 366
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 366
if (c_rt_lib::check_true($memory_5)) {goto label_2;}
#line 366
$memory_6 = "fora argument should be an array instead of ";
#line 366
$memory_8 = $memory_4->{'type'};
#line 366
$memory_7 = type_checker_priv::get_print_tct_type_name($memory_8);
#line 366
undef($memory_8);
#line 366
$memory_6 = $memory_6 . $memory_7;
#line 366
undef($memory_7);
#line 366
type_checker_priv::add_error($memory_3, $memory_6);
#line 366
undef($memory_6);
#line 366
goto label_2;
#line 366
label_2:
#line 366
undef($memory_5);
#line 369
$memory_6 = $memory_4->{'type'};
#line 369
$memory_7 = "tct_arr";
#line 369
$memory_5 = ov::is($memory_6, $memory_7);
#line 369
undef($memory_7);
#line 369
undef($memory_6);
#line 369
if (c_rt_lib::check_true($memory_5)) {goto label_4;}
#line 369
$memory_5 = tct::tct_im();
#line 369
goto label_3;
#line 369
label_4:
#line 369
$memory_5 = $memory_4->{'type'};
#line 369
$memory_5 = c_rt_lib::ov_as($memory_5, 'tct_arr');
#line 369
label_3:
#line 369
$memory_6 = $memory_5;
#line 369
 if (c_rt_lib::get_hashcount($memory_4) > 1) {$memory_4 = {%{$memory_4}};}$memory_4->{'type'} = $memory_6;
#line 369
undef($memory_5);
#line 369
undef($memory_6);
#line 372
$memory_5 = $memory_2;
#line 373
$memory_6 = $memory_0->{'iter'};
#line 373
type_checker_priv::add_var_decl_with_type_and_check($memory_6, $memory_4, $memory_5, $memory_3);
#line 373
undef($memory_6);
#line 374
$memory_6 = $memory_0->{'cmd'};
#line 374
type_checker_priv::break_continue_block($memory_6, $memory_1, $memory_5, $memory_3);
#line 374
undef($memory_6);
#line 375
type_checker_priv::join_vars($memory_2, $memory_5, $memory_1, $memory_3);
#line 375
undef($memory_4);
#line 375
undef($memory_5);
#line 375
undef($memory_0);
#line 375
$_[1] = $memory_1;$_[2] = $memory_2;$_[3] = $memory_3;return;
$_[1] = $memory_1;$_[2] = $memory_2;$_[3] = $memory_3;}

sub type_checker_priv::check_while($$$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;$memory_0 = $_[0];$memory_1 = $_[1];Scalar::Util::weaken($_[1]) if ref($_[1]);$memory_2 = $_[2];Scalar::Util::weaken($_[2]) if ref($_[2]);$memory_3 = $_[3];Scalar::Util::weaken($_[3]) if ref($_[3]);
#line 380
$memory_5 = $memory_0->{'cond'};
#line 380
$memory_4 = type_checker_priv::check_val($memory_5, $memory_1, $memory_2, $memory_3);
#line 380
undef($memory_5);
#line 381
$memory_5 = ptd_system::is_condition_type($memory_4, $memory_1, $memory_3);
#line 381
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 381
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 381
if (c_rt_lib::check_true($memory_5)) {goto label_2;}
#line 381
$memory_6 = "while argument should be sim or boolean type insteand of ";
#line 381
$memory_8 = $memory_4->{'type'};
#line 381
$memory_7 = type_checker_priv::get_print_tct_type_name($memory_8);
#line 381
undef($memory_8);
#line 381
$memory_6 = $memory_6 . $memory_7;
#line 381
undef($memory_7);
#line 381
type_checker_priv::add_error($memory_3, $memory_6);
#line 381
undef($memory_6);
#line 381
goto label_2;
#line 381
label_2:
#line 381
undef($memory_5);
#line 384
$memory_5 = $memory_2;
#line 385
$memory_6 = $memory_0->{'cmd'};
#line 385
type_checker_priv::break_continue_block($memory_6, $memory_1, $memory_5, $memory_3);
#line 385
undef($memory_6);
#line 386
type_checker_priv::join_vars($memory_2, $memory_5, $memory_1, $memory_3);
#line 386
undef($memory_4);
#line 386
undef($memory_5);
#line 386
undef($memory_0);
#line 386
$_[1] = $memory_1;$_[2] = $memory_2;$_[3] = $memory_3;return;
$_[1] = $memory_1;$_[2] = $memory_2;$_[3] = $memory_3;}

sub type_checker_priv::check_rep($$$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;$memory_0 = $_[0];$memory_1 = $_[1];Scalar::Util::weaken($_[1]) if ref($_[1]);$memory_2 = $_[2];Scalar::Util::weaken($_[2]) if ref($_[2]);$memory_3 = $_[3];Scalar::Util::weaken($_[3]) if ref($_[3]);
#line 391
$memory_5 = $memory_0->{'count'};
#line 391
$memory_4 = type_checker_priv::check_val($memory_5, $memory_1, $memory_2, $memory_3);
#line 391
undef($memory_5);
#line 392
$memory_6 = tct::sim();
#line 392
$memory_5 = ptd_system::is_accepted($memory_4, $memory_6, $memory_1, $memory_3);
#line 392
undef($memory_6);
#line 392
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 392
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 392
if (c_rt_lib::check_true($memory_5)) {goto label_2;}
#line 392
$memory_6 = "rep argument should be a number instead of ";
#line 392
$memory_8 = $memory_4->{'type'};
#line 392
$memory_7 = type_checker_priv::get_print_tct_type_name($memory_8);
#line 392
undef($memory_8);
#line 392
$memory_6 = $memory_6 . $memory_7;
#line 392
undef($memory_7);
#line 392
type_checker_priv::add_error($memory_3, $memory_6);
#line 392
undef($memory_6);
#line 392
goto label_2;
#line 392
label_2:
#line 392
undef($memory_5);
#line 395
$memory_5 = $memory_2;
#line 396
$memory_6 = $memory_0->{'iter'};
#line 396
$memory_8 = tct::sim();
#line 396
$memory_9 = c_rt_lib::ov_mk_none('speculation');
#line 396
$memory_7 = {type => $memory_8,src => $memory_9,};
#line 396
undef($memory_8);
#line 396
undef($memory_9);
#line 396
type_checker_priv::add_var_decl_with_type_and_check($memory_6, $memory_7, $memory_5, $memory_3);
#line 396
undef($memory_7);
#line 396
undef($memory_6);
#line 397
$memory_6 = $memory_0->{'cmd'};
#line 397
type_checker_priv::break_continue_block($memory_6, $memory_1, $memory_5, $memory_3);
#line 397
undef($memory_6);
#line 398
type_checker_priv::join_vars($memory_2, $memory_5, $memory_1, $memory_3);
#line 398
undef($memory_4);
#line 398
undef($memory_5);
#line 398
undef($memory_0);
#line 398
$_[1] = $memory_1;$_[2] = $memory_2;$_[3] = $memory_3;return;
$_[1] = $memory_1;$_[2] = $memory_2;$_[3] = $memory_3;}

sub type_checker_priv::check_match($$$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;my $memory_13;my $memory_14;my $memory_15;my $memory_16;my $memory_17;my $memory_18;my $memory_19;my $memory_20;my $memory_21;my $memory_22;my $memory_23;my $memory_24;my $memory_25;my $memory_26;$memory_0 = $_[0];$memory_1 = $_[1];Scalar::Util::weaken($_[1]) if ref($_[1]);$memory_2 = $_[2];Scalar::Util::weaken($_[2]) if ref($_[2]);$memory_3 = $_[3];Scalar::Util::weaken($_[3]) if ref($_[3]);
#line 403
$memory_6 = $memory_0->{'val'};
#line 403
$memory_5 = type_checker_priv::check_val($memory_6, $memory_1, $memory_2, $memory_3);
#line 403
undef($memory_6);
#line 403
$memory_4 = ptd_system::can_delete($memory_5, $memory_1, $memory_3);
#line 403
undef($memory_5);
#line 405
$memory_5 = $memory_0->{'branch_list'};
#line 406
$memory_6 = c_rt_lib::to_nl(0);
#line 407
$memory_7 = {};
#line 408
$memory_8 = {};
#line 409
$memory_11 = {};
#line 409
$memory_10 = tct::var($memory_11);
#line 409
undef($memory_11);
#line 409
$memory_9 = ptd_system::is_accepted($memory_4, $memory_10, $memory_1, $memory_3);
#line 409
undef($memory_10);
#line 409
$memory_9 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_9));
#line 409
$memory_9 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_9));
#line 409
if (c_rt_lib::check_true($memory_9)) {goto label_2;}
#line 410
$memory_10 = "wrong type used as match argument: ";
#line 410
$memory_12 = $memory_4->{'type'};
#line 410
$memory_11 = type_checker_priv::get_print_tct_type_name($memory_12);
#line 410
undef($memory_12);
#line 410
$memory_10 = $memory_10 . $memory_11;
#line 410
undef($memory_11);
#line 410
type_checker_priv::add_error($memory_3, $memory_10);
#line 410
undef($memory_10);
#line 411
goto label_2;
#line 411
label_2:
#line 411
undef($memory_9);
#line 412
$memory_10 = $memory_4->{'type'};
#line 412
$memory_11 = "tct_var";
#line 412
$memory_9 = ov::is($memory_10, $memory_11);
#line 412
undef($memory_11);
#line 412
undef($memory_10);
#line 412
$memory_9 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_9));
#line 412
if (c_rt_lib::check_true($memory_9)) {goto label_4;}
#line 413
$memory_10 = $memory_4->{'type'};
#line 413
$memory_10 = c_rt_lib::ov_as($memory_10, 'tct_var');
#line 413
$memory_8 = $memory_10;
#line 413
undef($memory_10);
#line 414
$memory_10 = {};
#line 415
$memory_12 = 0;
#line 415
$memory_13 = 1;
#line 415
$memory_14 = c_rt_lib::array_len($memory_5);
#line 415
label_7:
#line 415
$memory_15 = c_rt_lib::to_nl($memory_12 >= $memory_14);
#line 415
if (c_rt_lib::check_true($memory_15)) {goto label_5;}
#line 415
$memory_11 = $memory_5->[$memory_12];
#line 416
$memory_16 = $memory_11->{'variant'};
#line 416
$memory_16 = $memory_16->{'name'};
#line 417
$memory_17 = hash::has_key($memory_8, $memory_16);
#line 417
$memory_17 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_17));
#line 417
$memory_17 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_17));
#line 417
if (c_rt_lib::check_true($memory_17)) {goto label_9;}
#line 418
$memory_18 = type_checker_priv::is_known($memory_4);
#line 418
$memory_18 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_18));
#line 418
if (c_rt_lib::check_true($memory_18)) {goto label_11;}
#line 418
$memory_19 = "variant definition `:";
#line 418
$memory_19 = $memory_19 . $memory_16;
#line 418
$memory_20 = "' does not exist";
#line 418
$memory_19 = $memory_19 . $memory_20;
#line 418
undef($memory_20);
#line 418
type_checker_priv::add_error($memory_3, $memory_19);
#line 418
undef($memory_19);
#line 418
goto label_11;
#line 418
label_11:
#line 418
undef($memory_18);
#line 420
undef($memory_16);
#line 420
undef($memory_17);
#line 420
goto label_6;
#line 421
goto label_9;
#line 421
label_9:
#line 421
undef($memory_17);
#line 423
$memory_17 = c_rt_lib::to_nl(1);
#line 423
hash::set_value($memory_10, $memory_16, $memory_17);
#line 423
undef($memory_17);
#line 424
$memory_17 = hash::get_value($memory_8, $memory_16);
#line 424
$memory_18 = c_rt_lib::ov_is($memory_17, 'with_param');
#line 424
if (c_rt_lib::check_true($memory_18)) {goto label_13;}
#line 426
$memory_18 = c_rt_lib::ov_is($memory_17, 'no_param');
#line 426
if (c_rt_lib::check_true($memory_18)) {goto label_14;}
#line 426
$memory_18 = "NOMATCHALERT";
#line 426
$memory_18 = [$memory_18,$memory_17];
#line 426
die(dfile::ssave($memory_18));
#line 424
label_13:
#line 424
$memory_19 = c_rt_lib::ov_as($memory_17, 'with_param');
#line 425
hash::set_value($memory_7, $memory_16, $memory_19);
#line 425
undef($memory_19);
#line 426
goto label_12;
#line 426
label_14:
#line 427
goto label_12;
#line 427
label_12:
#line 427
undef($memory_17);
#line 427
undef($memory_18);
#line 427
undef($memory_16);
#line 427
label_6:
#line 428
$memory_12 = $memory_12 + $memory_13;
#line 428
goto label_7;
#line 428
label_5:
#line 428
undef($memory_11);
#line 428
undef($memory_12);
#line 428
undef($memory_13);
#line 428
undef($memory_14);
#line 428
undef($memory_15);
#line 429
$memory_13 = c_rt_lib::init_iter($memory_8);
#line 429
label_17:
#line 429
$memory_11 = c_rt_lib::is_end_hash($memory_13);
#line 429
if (c_rt_lib::check_true($memory_11)) {goto label_15;}
#line 429
$memory_11 = c_rt_lib::get_key_iter($memory_13);
#line 429
$memory_12 = c_rt_lib::hash_get_value($memory_8, $memory_11);
#line 430
$memory_14 = hash::has_key($memory_10, $memory_11);
#line 430
$memory_14 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_14));
#line 430
$memory_14 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_14));
#line 430
if (c_rt_lib::check_true($memory_14)) {goto label_19;}
#line 431
$memory_15 = "unchecked match variants: ";
#line 431
$memory_15 = $memory_15 . $memory_11;
#line 431
type_checker_priv::add_error($memory_3, $memory_15);
#line 431
undef($memory_15);
#line 432
goto label_19;
#line 432
label_19:
#line 432
undef($memory_14);
#line 433
$memory_13 = c_rt_lib::next_iter($memory_13);
#line 433
goto label_17;
#line 433
label_15:
#line 433
undef($memory_11);
#line 433
undef($memory_12);
#line 433
undef($memory_13);
#line 434
$memory_11 = c_rt_lib::to_nl(1);
#line 434
$memory_6 = $memory_11;
#line 434
undef($memory_11);
#line 434
undef($memory_10);
#line 435
goto label_4;
#line 435
label_4:
#line 435
undef($memory_9);
#line 436
$memory_9 = $memory_2;
#line 437
$memory_10 = c_rt_lib::to_nl(1);
#line 438
$memory_11 = {};
#line 439
$memory_13 = 0;
#line 439
$memory_14 = 1;
#line 439
$memory_15 = c_rt_lib::array_len($memory_5);
#line 439
label_22:
#line 439
$memory_16 = c_rt_lib::to_nl($memory_13 >= $memory_15);
#line 439
if (c_rt_lib::check_true($memory_16)) {goto label_20;}
#line 439
$memory_12 = $memory_5->[$memory_13];
#line 440
$memory_17 = $memory_2;
#line 441
$memory_18 = $memory_12->{'variant'};
#line 441
$memory_18 = $memory_18->{'name'};
#line 442
$memory_19 = hash::has_key($memory_11, $memory_18);
#line 442
$memory_19 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_19));
#line 442
if (c_rt_lib::check_true($memory_19)) {goto label_24;}
#line 442
$memory_20 = "repeated the case name in match: ";
#line 442
$memory_20 = $memory_20 . $memory_18;
#line 442
type_checker_priv::add_error($memory_3, $memory_20);
#line 442
undef($memory_20);
#line 442
goto label_24;
#line 442
label_24:
#line 442
undef($memory_19);
#line 444
$memory_19 = 1;
#line 444
hash::set_value($memory_11, $memory_18, $memory_19);
#line 444
undef($memory_19);
#line 445
$memory_19 = $memory_12->{'variant'};
#line 445
$memory_19 = $memory_19->{'value'};
#line 445
$memory_20 = c_rt_lib::ov_is($memory_19, 'value');
#line 445
if (c_rt_lib::check_true($memory_20)) {goto label_26;}
#line 461
$memory_20 = c_rt_lib::ov_is($memory_19, 'none');
#line 461
if (c_rt_lib::check_true($memory_20)) {goto label_27;}
#line 461
$memory_20 = "NOMATCHALERT";
#line 461
$memory_20 = [$memory_20,$memory_19];
#line 461
die(dfile::ssave($memory_20));
#line 445
label_26:
#line 445
$memory_21 = c_rt_lib::ov_as($memory_19, 'value');
#line 446
type_checker_priv::check_var_decl($memory_21, $memory_1, $memory_17, $memory_3);
#line 448
$memory_23 = $memory_6;
#line 448
$memory_23 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_23));
#line 448
if (c_rt_lib::check_true($memory_23)) {goto label_29;}
#line 449
$memory_24 = hash::has_key($memory_8, $memory_18);
#line 449
$memory_24 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_24));
#line 449
$memory_24 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_24));
#line 449
if (c_rt_lib::check_true($memory_24)) {goto label_31;}
#line 449
undef($memory_17);
#line 449
undef($memory_18);
#line 449
undef($memory_19);
#line 449
undef($memory_20);
#line 449
undef($memory_21);
#line 449
undef($memory_22);
#line 449
undef($memory_23);
#line 449
undef($memory_24);
#line 449
goto label_21;
#line 449
goto label_31;
#line 449
label_31:
#line 449
undef($memory_24);
#line 450
$memory_24 = hash::has_key($memory_7, $memory_18);
#line 450
$memory_24 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_24));
#line 450
$memory_24 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_24));
#line 450
if (c_rt_lib::check_true($memory_24)) {goto label_33;}
#line 451
$memory_25 = "variant `:";
#line 451
$memory_25 = $memory_25 . $memory_18;
#line 451
$memory_26 = "' should has no param";
#line 451
$memory_25 = $memory_25 . $memory_26;
#line 451
undef($memory_26);
#line 451
type_checker_priv::add_error($memory_3, $memory_25);
#line 451
undef($memory_25);
#line 452
undef($memory_17);
#line 452
undef($memory_18);
#line 452
undef($memory_19);
#line 452
undef($memory_20);
#line 452
undef($memory_21);
#line 452
undef($memory_22);
#line 452
undef($memory_23);
#line 452
undef($memory_24);
#line 452
goto label_21;
#line 453
goto label_33;
#line 453
label_33:
#line 453
undef($memory_24);
#line 455
$memory_24 = hash::get_value($memory_7, $memory_18);
#line 455
$memory_22 = $memory_24;
#line 455
undef($memory_24);
#line 456
goto label_28;
#line 456
label_29:
#line 457
$memory_24 = tct::tct_im();
#line 457
$memory_22 = $memory_24;
#line 457
undef($memory_24);
#line 458
goto label_28;
#line 458
label_28:
#line 458
undef($memory_23);
#line 460
$memory_23 = $memory_21->{'name'};
#line 460
type_checker_priv::add_var_decl_to_vars($memory_22, $memory_23, $memory_17);
#line 460
undef($memory_23);
#line 460
undef($memory_22);
#line 460
undef($memory_21);
#line 461
goto label_25;
#line 461
label_27:
#line 462
$memory_21 = hash::has_key($memory_7, $memory_18);
#line 462
$memory_21 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_21));
#line 462
if (c_rt_lib::check_true($memory_21)) {goto label_35;}
#line 463
$memory_22 = "variant `:";
#line 463
$memory_22 = $memory_22 . $memory_18;
#line 463
$memory_23 = " should has param";
#line 463
$memory_22 = $memory_22 . $memory_23;
#line 463
undef($memory_23);
#line 463
type_checker_priv::add_error($memory_3, $memory_22);
#line 463
undef($memory_22);
#line 464
goto label_35;
#line 464
label_35:
#line 464
undef($memory_21);
#line 466
goto label_25;
#line 466
label_25:
#line 466
undef($memory_19);
#line 466
undef($memory_20);
#line 467
$memory_19 = $memory_12->{'cmd'};
#line 467
type_checker_priv::check_cmd($memory_19, $memory_1, $memory_17, $memory_3);
#line 467
undef($memory_19);
#line 468
$memory_19 = $memory_12->{'variant'};
#line 468
$memory_19 = $memory_19->{'value'};
#line 468
$memory_20 = c_rt_lib::ov_is($memory_19, 'value');
#line 468
if (c_rt_lib::check_true($memory_20)) {goto label_37;}
#line 470
$memory_20 = c_rt_lib::ov_is($memory_19, 'none');
#line 470
if (c_rt_lib::check_true($memory_20)) {goto label_38;}
#line 470
$memory_20 = "NOMATCHALERT";
#line 470
$memory_20 = [$memory_20,$memory_19];
#line 470
die(dfile::ssave($memory_20));
#line 468
label_37:
#line 468
$memory_21 = c_rt_lib::ov_as($memory_19, 'value');
#line 469
$memory_23 = $memory_21->{'name'};
#line 469
$memory_22 = hash::has_key($memory_9, $memory_23);
#line 469
undef($memory_23);
#line 469
$memory_22 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_22));
#line 469
$memory_22 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_22));
#line 469
if (c_rt_lib::check_true($memory_22)) {goto label_40;}
#line 469
$memory_23 = $memory_21->{'name'};
#line 469
hash::delete($memory_17, $memory_23);
#line 469
undef($memory_23);
#line 469
goto label_40;
#line 469
label_40:
#line 469
undef($memory_22);
#line 469
undef($memory_21);
#line 470
goto label_36;
#line 470
label_38:
#line 471
goto label_36;
#line 471
label_36:
#line 471
undef($memory_19);
#line 471
undef($memory_20);
#line 472
$memory_19 = $memory_10;
#line 472
$memory_19 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_19));
#line 472
if (c_rt_lib::check_true($memory_19)) {goto label_42;}
#line 473
$memory_9 = $memory_17;
#line 474
goto label_41;
#line 474
label_42:
#line 475
type_checker_priv::join_vars($memory_9, $memory_17, $memory_1, $memory_3);
#line 476
goto label_41;
#line 476
label_41:
#line 476
undef($memory_19);
#line 478
$memory_19 = c_rt_lib::to_nl(0);
#line 478
$memory_10 = $memory_19;
#line 478
undef($memory_19);
#line 478
undef($memory_17);
#line 478
undef($memory_18);
#line 478
label_21:
#line 479
$memory_13 = $memory_13 + $memory_14;
#line 479
goto label_22;
#line 479
label_20:
#line 479
undef($memory_12);
#line 479
undef($memory_13);
#line 479
undef($memory_14);
#line 479
undef($memory_15);
#line 479
undef($memory_16);
#line 480
$memory_2 = $memory_9;
#line 480
undef($memory_4);
#line 480
undef($memory_5);
#line 480
undef($memory_6);
#line 480
undef($memory_7);
#line 480
undef($memory_8);
#line 480
undef($memory_9);
#line 480
undef($memory_10);
#line 480
undef($memory_11);
#line 480
undef($memory_0);
#line 480
$_[1] = $memory_1;$_[2] = $memory_2;$_[3] = $memory_3;return;
$_[1] = $memory_1;$_[2] = $memory_2;$_[3] = $memory_3;}

sub type_checker_priv::check_val($$$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;my $memory_13;my $memory_14;my $memory_15;my $memory_16;my $memory_17;my $memory_18;my $memory_19;my $memory_20;my $memory_21;my $memory_22;my $memory_23;my $memory_24;my $memory_25;my $memory_26;$memory_0 = $_[0];$memory_1 = $_[1];Scalar::Util::weaken($_[1]) if ref($_[1]);$memory_2 = $_[2];Scalar::Util::weaken($_[2]) if ref($_[2]);$memory_3 = $_[3];Scalar::Util::weaken($_[3]) if ref($_[3]);
#line 485
$memory_5 = tct::tct_im();
#line 485
$memory_6 = c_rt_lib::ov_mk_none('speculation');
#line 485
$memory_4 = {type => $memory_5,src => $memory_6,};
#line 485
undef($memory_5);
#line 485
undef($memory_6);
#line 486
$memory_5 = c_rt_lib::ov_is($memory_0, 'ternary_op');
#line 486
if (c_rt_lib::check_true($memory_5)) {goto label_2;}
#line 502
$memory_5 = c_rt_lib::ov_is($memory_0, 'hash_key');
#line 502
if (c_rt_lib::check_true($memory_5)) {goto label_3;}
#line 504
$memory_5 = c_rt_lib::ov_is($memory_0, 'nop');
#line 504
if (c_rt_lib::check_true($memory_5)) {goto label_4;}
#line 506
$memory_5 = c_rt_lib::ov_is($memory_0, 'parenthesis');
#line 506
if (c_rt_lib::check_true($memory_5)) {goto label_5;}
#line 508
$memory_5 = c_rt_lib::ov_is($memory_0, 'variant');
#line 508
if (c_rt_lib::check_true($memory_5)) {goto label_6;}
#line 523
$memory_5 = c_rt_lib::ov_is($memory_0, 'const');
#line 523
if (c_rt_lib::check_true($memory_5)) {goto label_7;}
#line 525
$memory_5 = c_rt_lib::ov_is($memory_0, 'arr_decl');
#line 525
if (c_rt_lib::check_true($memory_5)) {goto label_8;}
#line 545
$memory_5 = c_rt_lib::ov_is($memory_0, 'hash_decl');
#line 545
if (c_rt_lib::check_true($memory_5)) {goto label_9;}
#line 561
$memory_5 = c_rt_lib::ov_is($memory_0, 'var');
#line 561
if (c_rt_lib::check_true($memory_5)) {goto label_10;}
#line 572
$memory_5 = c_rt_lib::ov_is($memory_0, 'bin_op');
#line 572
if (c_rt_lib::check_true($memory_5)) {goto label_11;}
#line 574
$memory_5 = c_rt_lib::ov_is($memory_0, 'var_op');
#line 574
if (c_rt_lib::check_true($memory_5)) {goto label_12;}
#line 605
$memory_5 = c_rt_lib::ov_is($memory_0, 'unary_op');
#line 605
if (c_rt_lib::check_true($memory_5)) {goto label_13;}
#line 625
$memory_5 = c_rt_lib::ov_is($memory_0, 'fun_label');
#line 625
if (c_rt_lib::check_true($memory_5)) {goto label_14;}
#line 628
$memory_5 = c_rt_lib::ov_is($memory_0, 'fun_val');
#line 628
if (c_rt_lib::check_true($memory_5)) {goto label_15;}
#line 685
$memory_5 = c_rt_lib::ov_is($memory_0, 'string');
#line 685
if (c_rt_lib::check_true($memory_5)) {goto label_16;}
#line 687
$memory_5 = c_rt_lib::ov_is($memory_0, 'post_inc');
#line 687
if (c_rt_lib::check_true($memory_5)) {goto label_17;}
#line 693
$memory_5 = c_rt_lib::ov_is($memory_0, 'post_dec');
#line 693
if (c_rt_lib::check_true($memory_5)) {goto label_18;}
#line 693
$memory_5 = "NOMATCHALERT";
#line 693
$memory_5 = [$memory_5,$memory_0];
#line 693
die(dfile::ssave($memory_5));
#line 486
label_2:
#line 486
$memory_6 = c_rt_lib::ov_as($memory_0, 'ternary_op');
#line 487
$memory_8 = $memory_6->{'fst'};
#line 487
$memory_7 = type_checker_priv::check_val($memory_8, $memory_1, $memory_2, $memory_3);
#line 487
undef($memory_8);
#line 488
$memory_8 = ptd_system::is_condition_type($memory_7, $memory_1, $memory_3);
#line 488
$memory_8 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 488
$memory_8 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 488
if (c_rt_lib::check_true($memory_8)) {goto label_20;}
#line 488
$memory_9 = "ternary op first argument should be sim or boolean type instead of ";
#line 488
$memory_11 = $memory_7->{'type'};
#line 488
$memory_10 = type_checker_priv::get_print_tct_type_name($memory_11);
#line 488
undef($memory_11);
#line 488
$memory_9 = $memory_9 . $memory_10;
#line 488
undef($memory_10);
#line 488
type_checker_priv::add_error($memory_3, $memory_9);
#line 488
undef($memory_9);
#line 488
goto label_20;
#line 488
label_20:
#line 488
undef($memory_8);
#line 491
$memory_9 = $memory_6->{'snd'};
#line 491
$memory_8 = type_checker_priv::check_val($memory_9, $memory_1, $memory_2, $memory_3);
#line 491
undef($memory_9);
#line 491
$memory_8 = $memory_8->{'type'};
#line 492
$memory_10 = "tct_void";
#line 492
$memory_9 = ov::is($memory_8, $memory_10);
#line 492
undef($memory_10);
#line 492
$memory_9 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_9));
#line 492
if (c_rt_lib::check_true($memory_9)) {goto label_22;}
#line 493
$memory_10 = $memory_8;
#line 493
 if (c_rt_lib::get_hashcount($memory_4) > 1) {$memory_4 = {%{$memory_4}};}$memory_4->{'type'} = $memory_10;
#line 493
undef($memory_10);
#line 494
goto label_21;
#line 494
label_22:
#line 495
$memory_11 = $memory_6->{'thrd'};
#line 495
$memory_10 = type_checker_priv::check_val($memory_11, $memory_1, $memory_2, $memory_3);
#line 495
undef($memory_11);
#line 495
$memory_10 = $memory_10->{'type'};
#line 496
$memory_12 = "tct_void";
#line 496
$memory_11 = ov::is($memory_10, $memory_12);
#line 496
undef($memory_12);
#line 496
$memory_11 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_11));
#line 496
if (c_rt_lib::check_true($memory_11)) {goto label_24;}
#line 497
$memory_12 = $memory_10;
#line 497
 if (c_rt_lib::get_hashcount($memory_4) > 1) {$memory_4 = {%{$memory_4}};}$memory_4->{'type'} = $memory_12;
#line 497
undef($memory_12);
#line 498
goto label_23;
#line 498
label_24:
#line 499
$memory_12 = ptd_system::cross_type($memory_8, $memory_10, $memory_1, $memory_3);
#line 499
$memory_13 = $memory_12;
#line 499
 if (c_rt_lib::get_hashcount($memory_4) > 1) {$memory_4 = {%{$memory_4}};}$memory_4->{'type'} = $memory_13;
#line 499
undef($memory_12);
#line 499
undef($memory_13);
#line 500
goto label_23;
#line 500
label_23:
#line 500
undef($memory_11);
#line 500
undef($memory_10);
#line 501
goto label_21;
#line 501
label_21:
#line 501
undef($memory_9);
#line 501
undef($memory_7);
#line 501
undef($memory_8);
#line 501
undef($memory_6);
#line 502
goto label_1;
#line 502
label_3:
#line 502
$memory_6 = c_rt_lib::ov_as($memory_0, 'hash_key');
#line 503
$memory_7 = tct::sim();
#line 503
$memory_8 = $memory_7;
#line 503
 if (c_rt_lib::get_hashcount($memory_4) > 1) {$memory_4 = {%{$memory_4}};}$memory_4->{'type'} = $memory_8;
#line 503
undef($memory_7);
#line 503
undef($memory_8);
#line 503
undef($memory_6);
#line 504
goto label_1;
#line 504
label_4:
#line 505
$memory_6 = tct::empty();
#line 505
$memory_7 = $memory_6;
#line 505
 if (c_rt_lib::get_hashcount($memory_4) > 1) {$memory_4 = {%{$memory_4}};}$memory_4->{'type'} = $memory_7;
#line 505
undef($memory_6);
#line 505
undef($memory_7);
#line 506
goto label_1;
#line 506
label_5:
#line 506
$memory_6 = c_rt_lib::ov_as($memory_0, 'parenthesis');
#line 507
$memory_7 = type_checker_priv::check_val($memory_6, $memory_1, $memory_2, $memory_3);
#line 507
undef($memory_0);
#line 507
undef($memory_4);
#line 507
undef($memory_5);
#line 507
undef($memory_6);
#line 507
$_[1] = $memory_1;$_[2] = $memory_2;$_[3] = $memory_3;return $memory_7;
#line 507
undef($memory_7);
#line 507
undef($memory_6);
#line 508
goto label_1;
#line 508
label_6:
#line 508
$memory_6 = c_rt_lib::ov_as($memory_0, 'variant');
#line 509
$memory_7 = $memory_6->{'name'};
#line 509
$memory_8 = "TRUE";
#line 509
$memory_7 = c_rt_lib::to_nl($memory_7 eq $memory_8);
#line 509
undef($memory_8);
#line 509
if (c_rt_lib::check_true($memory_7)) {goto label_27;}
#line 509
$memory_7 = $memory_6->{'name'};
#line 509
$memory_8 = "FALSE";
#line 509
$memory_7 = c_rt_lib::to_nl($memory_7 eq $memory_8);
#line 509
undef($memory_8);
#line 509
label_27:
#line 509
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 509
if (c_rt_lib::check_true($memory_7)) {goto label_26;}
#line 510
$memory_8 = tct::bool();
#line 510
$memory_9 = $memory_8;
#line 510
 if (c_rt_lib::get_hashcount($memory_4) > 1) {$memory_4 = {%{$memory_4}};}$memory_4->{'type'} = $memory_9;
#line 510
undef($memory_8);
#line 510
undef($memory_9);
#line 511
undef($memory_0);
#line 511
undef($memory_5);
#line 511
undef($memory_6);
#line 511
undef($memory_7);
#line 511
$_[1] = $memory_1;$_[2] = $memory_2;$_[3] = $memory_3;return $memory_4;
#line 512
goto label_26;
#line 512
label_26:
#line 512
undef($memory_7);
#line 514
$memory_7 = {};
#line 515
$memory_9 = $memory_6->{'var'};
#line 515
$memory_10 = "nop";
#line 515
$memory_8 = ov::is($memory_9, $memory_10);
#line 515
undef($memory_10);
#line 515
undef($memory_9);
#line 515
$memory_8 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 515
if (c_rt_lib::check_true($memory_8)) {goto label_29;}
#line 516
$memory_9 = $memory_6->{'name'};
#line 516
$memory_10 = tct::none();
#line 516
hash::set_value($memory_7, $memory_9, $memory_10);
#line 516
undef($memory_10);
#line 516
undef($memory_9);
#line 517
goto label_28;
#line 517
label_29:
#line 518
$memory_10 = $memory_6->{'var'};
#line 518
$memory_9 = type_checker_priv::check_val($memory_10, $memory_1, $memory_2, $memory_3);
#line 518
undef($memory_10);
#line 519
$memory_10 = $memory_6->{'name'};
#line 519
$memory_11 = $memory_9->{'type'};
#line 519
hash::set_value($memory_7, $memory_10, $memory_11);
#line 519
undef($memory_11);
#line 519
undef($memory_10);
#line 520
$memory_10 = $memory_9->{'src'};
#line 520
$memory_11 = $memory_10;
#line 520
 if (c_rt_lib::get_hashcount($memory_4) > 1) {$memory_4 = {%{$memory_4}};}$memory_4->{'src'} = $memory_11;
#line 520
undef($memory_10);
#line 520
undef($memory_11);
#line 520
undef($memory_9);
#line 521
goto label_28;
#line 521
label_28:
#line 521
undef($memory_8);
#line 522
$memory_8 = tct::var($memory_7);
#line 522
$memory_9 = $memory_8;
#line 522
 if (c_rt_lib::get_hashcount($memory_4) > 1) {$memory_4 = {%{$memory_4}};}$memory_4->{'type'} = $memory_9;
#line 522
undef($memory_8);
#line 522
undef($memory_9);
#line 522
undef($memory_7);
#line 522
undef($memory_6);
#line 523
goto label_1;
#line 523
label_7:
#line 523
$memory_6 = c_rt_lib::ov_as($memory_0, 'const');
#line 524
$memory_7 = tct::sim();
#line 524
$memory_8 = $memory_7;
#line 524
 if (c_rt_lib::get_hashcount($memory_4) > 1) {$memory_4 = {%{$memory_4}};}$memory_4->{'type'} = $memory_8;
#line 524
undef($memory_7);
#line 524
undef($memory_8);
#line 524
undef($memory_6);
#line 525
goto label_1;
#line 525
label_8:
#line 525
$memory_6 = c_rt_lib::ov_as($memory_0, 'arr_decl');
#line 526
$memory_7 = array::len($memory_6);
#line 526
$memory_8 = 0;
#line 526
$memory_7 = c_rt_lib::to_nl($memory_7 == $memory_8);
#line 526
undef($memory_8);
#line 526
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 526
if (c_rt_lib::check_true($memory_7)) {goto label_31;}
#line 527
$memory_9 = tct::empty();
#line 527
$memory_8 = tct::arr($memory_9);
#line 527
undef($memory_9);
#line 527
$memory_9 = $memory_8;
#line 527
 if (c_rt_lib::get_hashcount($memory_4) > 1) {$memory_4 = {%{$memory_4}};}$memory_4->{'type'} = $memory_9;
#line 527
undef($memory_8);
#line 527
undef($memory_9);
#line 528
undef($memory_0);
#line 528
undef($memory_5);
#line 528
undef($memory_6);
#line 528
undef($memory_7);
#line 528
$_[1] = $memory_1;$_[2] = $memory_2;$_[3] = $memory_3;return $memory_4;
#line 529
goto label_31;
#line 529
label_31:
#line 529
undef($memory_7);
#line 530
$memory_7 = [];
#line 531
$memory_8 = c_rt_lib::to_nl(0);
#line 532
$memory_10 = 0;
#line 532
$memory_11 = 1;
#line 532
$memory_12 = c_rt_lib::array_len($memory_6);
#line 532
label_34:
#line 532
$memory_13 = c_rt_lib::to_nl($memory_10 >= $memory_12);
#line 532
if (c_rt_lib::check_true($memory_13)) {goto label_32;}
#line 532
$memory_9 = $memory_6->[$memory_10];
#line 533
$memory_14 = type_checker_priv::check_val($memory_9, $memory_1, $memory_2, $memory_3);
#line 534
array::push($memory_7, $memory_14);
#line 535
$memory_15 = type_checker_priv::is_known($memory_14);
#line 535
$memory_15 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_15));
#line 535
$memory_15 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_15));
#line 535
if (c_rt_lib::check_true($memory_15)) {goto label_36;}
#line 535
$memory_16 = c_rt_lib::to_nl(1);
#line 535
$memory_8 = $memory_16;
#line 535
undef($memory_16);
#line 535
goto label_36;
#line 535
label_36:
#line 535
undef($memory_15);
#line 535
undef($memory_14);
#line 536
$memory_10 = $memory_10 + $memory_11;
#line 536
goto label_34;
#line 536
label_32:
#line 536
undef($memory_9);
#line 536
undef($memory_10);
#line 536
undef($memory_11);
#line 536
undef($memory_12);
#line 536
undef($memory_13);
#line 537
$memory_10 = 0;
#line 537
$memory_9 = $memory_7->[$memory_10];
#line 537
undef($memory_10);
#line 537
$memory_9 = $memory_9->{'type'};
#line 538
$memory_10 = $memory_8;
#line 538
$memory_10 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_10));
#line 538
if (c_rt_lib::check_true($memory_10)) {goto label_38;}
#line 538
$memory_11 = tct::tct_im();
#line 538
$memory_13 = 0;
#line 538
$memory_12 = $memory_7->[$memory_13];
#line 538
undef($memory_13);
#line 538
ptd_system::check_assignment($memory_11, $memory_12, $memory_1, $memory_3);
#line 538
undef($memory_12);
#line 538
undef($memory_11);
#line 538
goto label_38;
#line 538
label_38:
#line 538
undef($memory_10);
#line 539
$memory_10 = 1;
#line 539
label_40:
#line 539
$memory_11 = array::len($memory_7);
#line 539
$memory_11 = c_rt_lib::to_nl($memory_10 < $memory_11);
#line 539
$memory_11 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_11));
#line 539
if (c_rt_lib::check_true($memory_11)) {goto label_39;}
#line 540
$memory_13 = $memory_7->[$memory_10];
#line 540
$memory_13 = $memory_13->{'type'};
#line 540
$memory_12 = ptd_system::cross_type($memory_9, $memory_13, $memory_1, $memory_3);
#line 540
undef($memory_13);
#line 540
$memory_9 = $memory_12;
#line 540
undef($memory_12);
#line 541
$memory_12 = $memory_8;
#line 541
$memory_12 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_12));
#line 541
if (c_rt_lib::check_true($memory_12)) {goto label_43;}
#line 541
$memory_13 = tct::tct_im();
#line 541
$memory_14 = $memory_7->[$memory_10];
#line 541
ptd_system::check_assignment($memory_13, $memory_14, $memory_1, $memory_3);
#line 541
undef($memory_14);
#line 541
undef($memory_13);
#line 541
goto label_43;
#line 541
label_43:
#line 541
undef($memory_12);
#line 541
$memory_12 = 1;
#line 541
$memory_10 = $memory_10 + $memory_12;
#line 541
undef($memory_12);
#line 542
goto label_40;
#line 542
label_39:
#line 542
undef($memory_10);
#line 542
undef($memory_11);
#line 543
$memory_10 = $memory_8;
#line 543
$memory_10 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_10));
#line 543
$memory_10 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_10));
#line 543
if (c_rt_lib::check_true($memory_10)) {goto label_45;}
#line 543
$memory_11 = c_rt_lib::ov_mk_none('known');
#line 543
$memory_12 = $memory_11;
#line 543
 if (c_rt_lib::get_hashcount($memory_4) > 1) {$memory_4 = {%{$memory_4}};}$memory_4->{'src'} = $memory_12;
#line 543
undef($memory_11);
#line 543
undef($memory_12);
#line 543
goto label_45;
#line 543
label_45:
#line 543
undef($memory_10);
#line 544
$memory_10 = tct::arr($memory_9);
#line 544
$memory_11 = $memory_10;
#line 544
 if (c_rt_lib::get_hashcount($memory_4) > 1) {$memory_4 = {%{$memory_4}};}$memory_4->{'type'} = $memory_11;
#line 544
undef($memory_10);
#line 544
undef($memory_11);
#line 544
undef($memory_7);
#line 544
undef($memory_8);
#line 544
undef($memory_9);
#line 544
undef($memory_6);
#line 545
goto label_1;
#line 545
label_9:
#line 545
$memory_6 = c_rt_lib::ov_as($memory_0, 'hash_decl');
#line 546
$memory_7 = {};
#line 547
$memory_8 = c_rt_lib::to_nl(0);
#line 548
$memory_10 = 0;
#line 548
$memory_11 = 1;
#line 548
$memory_12 = c_rt_lib::array_len($memory_6);
#line 548
label_48:
#line 548
$memory_13 = c_rt_lib::to_nl($memory_10 >= $memory_12);
#line 548
if (c_rt_lib::check_true($memory_13)) {goto label_46;}
#line 548
$memory_9 = $memory_6->[$memory_10];
#line 549
$memory_15 = $memory_9->{'key'};
#line 549
$memory_16 = "hash_key";
#line 549
$memory_14 = ov::as($memory_15, $memory_16);
#line 549
undef($memory_16);
#line 549
undef($memory_15);
#line 550
$memory_16 = $memory_9->{'val'};
#line 550
$memory_15 = type_checker_priv::check_val($memory_16, $memory_1, $memory_2, $memory_3);
#line 550
undef($memory_16);
#line 551
hash::set_value($memory_7, $memory_14, $memory_15);
#line 552
$memory_16 = type_checker_priv::is_known($memory_15);
#line 552
$memory_16 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_16));
#line 552
$memory_16 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_16));
#line 552
if (c_rt_lib::check_true($memory_16)) {goto label_50;}
#line 552
$memory_17 = c_rt_lib::to_nl(1);
#line 552
$memory_8 = $memory_17;
#line 552
undef($memory_17);
#line 552
goto label_50;
#line 552
label_50:
#line 552
undef($memory_16);
#line 552
undef($memory_14);
#line 552
undef($memory_15);
#line 553
$memory_10 = $memory_10 + $memory_11;
#line 553
goto label_48;
#line 553
label_46:
#line 553
undef($memory_9);
#line 553
undef($memory_10);
#line 553
undef($memory_11);
#line 553
undef($memory_12);
#line 553
undef($memory_13);
#line 554
$memory_9 = {};
#line 555
$memory_12 = c_rt_lib::init_iter($memory_7);
#line 555
label_53:
#line 555
$memory_10 = c_rt_lib::is_end_hash($memory_12);
#line 555
if (c_rt_lib::check_true($memory_10)) {goto label_51;}
#line 555
$memory_10 = c_rt_lib::get_key_iter($memory_12);
#line 555
$memory_11 = c_rt_lib::hash_get_value($memory_7, $memory_10);
#line 556
$memory_13 = $memory_8;
#line 556
$memory_13 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_13));
#line 556
if (c_rt_lib::check_true($memory_13)) {goto label_55;}
#line 556
$memory_14 = tct::tct_im();
#line 556
ptd_system::check_assignment($memory_14, $memory_11, $memory_1, $memory_3);
#line 556
undef($memory_14);
#line 556
goto label_55;
#line 556
label_55:
#line 556
undef($memory_13);
#line 557
$memory_13 = $memory_11->{'type'};
#line 557
hash::set_value($memory_9, $memory_10, $memory_13);
#line 557
undef($memory_13);
#line 558
$memory_12 = c_rt_lib::next_iter($memory_12);
#line 558
goto label_53;
#line 558
label_51:
#line 558
undef($memory_10);
#line 558
undef($memory_11);
#line 558
undef($memory_12);
#line 559
$memory_10 = $memory_8;
#line 559
$memory_10 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_10));
#line 559
$memory_10 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_10));
#line 559
if (c_rt_lib::check_true($memory_10)) {goto label_57;}
#line 559
$memory_11 = c_rt_lib::ov_mk_none('knownhash');
#line 559
$memory_12 = $memory_11;
#line 559
 if (c_rt_lib::get_hashcount($memory_4) > 1) {$memory_4 = {%{$memory_4}};}$memory_4->{'src'} = $memory_12;
#line 559
undef($memory_11);
#line 559
undef($memory_12);
#line 559
goto label_57;
#line 559
label_57:
#line 559
undef($memory_10);
#line 560
$memory_10 = tct::rec($memory_9);
#line 560
$memory_11 = $memory_10;
#line 560
 if (c_rt_lib::get_hashcount($memory_4) > 1) {$memory_4 = {%{$memory_4}};}$memory_4->{'type'} = $memory_11;
#line 560
undef($memory_10);
#line 560
undef($memory_11);
#line 560
undef($memory_7);
#line 560
undef($memory_8);
#line 560
undef($memory_9);
#line 560
undef($memory_6);
#line 561
goto label_1;
#line 561
label_10:
#line 561
$memory_6 = c_rt_lib::ov_as($memory_0, 'var');
#line 562
$memory_7 = hash::has_key($memory_2, $memory_6);
#line 562
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 562
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 562
if (c_rt_lib::check_true($memory_7)) {goto label_59;}
#line 563
$memory_8 = "variable `";
#line 563
$memory_8 = $memory_8 . $memory_6;
#line 563
$memory_9 = "' does not exist";
#line 563
$memory_8 = $memory_8 . $memory_9;
#line 563
undef($memory_9);
#line 563
type_checker_priv::add_error($memory_3, $memory_8);
#line 563
undef($memory_8);
#line 564
undef($memory_0);
#line 564
undef($memory_5);
#line 564
undef($memory_6);
#line 564
undef($memory_7);
#line 564
$_[1] = $memory_1;$_[2] = $memory_2;$_[3] = $memory_3;return $memory_4;
#line 565
goto label_59;
#line 565
label_59:
#line 565
undef($memory_7);
#line 566
$memory_7 = hash::get_value($memory_2, $memory_6);
#line 567
$memory_8 = $memory_7->{'overwrited'};
#line 567
$memory_9 = c_rt_lib::ov_is($memory_8, 'yes');
#line 567
if (c_rt_lib::check_true($memory_9)) {goto label_61;}
#line 569
$memory_9 = c_rt_lib::ov_is($memory_8, 'no');
#line 569
if (c_rt_lib::check_true($memory_9)) {goto label_62;}
#line 569
$memory_9 = "NOMATCHALERT";
#line 569
$memory_9 = [$memory_9,$memory_8];
#line 569
die(dfile::ssave($memory_9));
#line 567
label_61:
#line 568
$memory_11 = $memory_7->{'type'};
#line 568
$memory_12 = c_rt_lib::ov_mk_none('speculation');
#line 568
$memory_10 = {type => $memory_11,src => $memory_12,};
#line 568
undef($memory_11);
#line 568
undef($memory_12);
#line 568
undef($memory_0);
#line 568
undef($memory_4);
#line 568
undef($memory_5);
#line 568
undef($memory_6);
#line 568
undef($memory_7);
#line 568
undef($memory_8);
#line 568
undef($memory_9);
#line 568
$_[1] = $memory_1;$_[2] = $memory_2;$_[3] = $memory_3;return $memory_10;
#line 568
undef($memory_10);
#line 569
goto label_60;
#line 569
label_62:
#line 570
$memory_11 = $memory_7->{'type'};
#line 570
$memory_12 = c_rt_lib::ov_mk_none('known');
#line 570
$memory_10 = {type => $memory_11,src => $memory_12,};
#line 570
undef($memory_11);
#line 570
undef($memory_12);
#line 570
undef($memory_0);
#line 570
undef($memory_4);
#line 570
undef($memory_5);
#line 570
undef($memory_6);
#line 570
undef($memory_7);
#line 570
undef($memory_8);
#line 570
undef($memory_9);
#line 570
$_[1] = $memory_1;$_[2] = $memory_2;$_[3] = $memory_3;return $memory_10;
#line 570
undef($memory_10);
#line 571
goto label_60;
#line 571
label_60:
#line 571
undef($memory_8);
#line 571
undef($memory_9);
#line 571
undef($memory_7);
#line 571
undef($memory_6);
#line 572
goto label_1;
#line 572
label_11:
#line 572
$memory_6 = c_rt_lib::ov_as($memory_0, 'bin_op');
#line 573
$memory_7 = type_checker_priv::get_type_from_bin_op_and_check($memory_6, $memory_1, $memory_2, $memory_3);
#line 573
undef($memory_0);
#line 573
undef($memory_4);
#line 573
undef($memory_5);
#line 573
undef($memory_6);
#line 573
$_[1] = $memory_1;$_[2] = $memory_2;$_[3] = $memory_3;return $memory_7;
#line 573
undef($memory_7);
#line 573
undef($memory_6);
#line 574
goto label_1;
#line 574
label_12:
#line 574
$memory_6 = c_rt_lib::ov_as($memory_0, 'var_op');
#line 575
$memory_9 = $memory_6->{'left'};
#line 575
$memory_8 = type_checker_priv::check_val($memory_9, $memory_1, $memory_2, $memory_3);
#line 575
undef($memory_9);
#line 575
$memory_7 = ptd_system::can_delete($memory_8, $memory_1, $memory_3);
#line 575
undef($memory_8);
#line 578
$memory_9 = $memory_6->{'op'};
#line 578
$memory_10 = c_rt_lib::ov_is($memory_9, 'ov_is');
#line 578
if (c_rt_lib::check_true($memory_10)) {goto label_64;}
#line 580
$memory_10 = c_rt_lib::ov_is($memory_9, 'ov_as');
#line 580
if (c_rt_lib::check_true($memory_10)) {goto label_65;}
#line 580
$memory_10 = "NOMATCHALERT";
#line 580
$memory_10 = [$memory_10,$memory_9];
#line 580
die(dfile::ssave($memory_10));
#line 578
label_64:
#line 579
$memory_12 = tct::bool();
#line 579
$memory_13 = c_rt_lib::ov_mk_none('speculation');
#line 579
$memory_11 = {type => $memory_12,src => $memory_13,};
#line 579
undef($memory_12);
#line 579
undef($memory_13);
#line 579
$memory_8 = $memory_11;
#line 579
undef($memory_11);
#line 580
goto label_63;
#line 580
label_65:
#line 581
$memory_12 = tct::tct_im();
#line 581
$memory_13 = $memory_7->{'src'};
#line 581
$memory_11 = {type => $memory_12,src => $memory_13,};
#line 581
undef($memory_12);
#line 581
undef($memory_13);
#line 581
$memory_8 = $memory_11;
#line 581
undef($memory_11);
#line 582
goto label_63;
#line 582
label_63:
#line 582
undef($memory_9);
#line 582
undef($memory_10);
#line 583
$memory_11 = {};
#line 583
$memory_10 = tct::var($memory_11);
#line 583
undef($memory_11);
#line 583
$memory_9 = ptd_system::is_accepted($memory_7, $memory_10, $memory_1, $memory_3);
#line 583
undef($memory_10);
#line 583
$memory_9 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_9));
#line 583
if (c_rt_lib::check_true($memory_9)) {goto label_67;}
#line 584
$memory_11 = $memory_7->{'type'};
#line 584
$memory_12 = "tct_var";
#line 584
$memory_10 = ov::is($memory_11, $memory_12);
#line 584
undef($memory_12);
#line 584
undef($memory_11);
#line 584
$memory_10 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_10));
#line 584
$memory_10 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_10));
#line 584
if (c_rt_lib::check_true($memory_10)) {goto label_69;}
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
undef($memory_9);
#line 584
undef($memory_10);
#line 584
$_[1] = $memory_1;$_[2] = $memory_2;$_[3] = $memory_3;return $memory_8;
#line 584
goto label_69;
#line 584
label_69:
#line 584
undef($memory_10);
#line 585
$memory_10 = $memory_7->{'type'};
#line 585
$memory_10 = c_rt_lib::ov_as($memory_10, 'tct_var');
#line 586
$memory_12 = $memory_6->{'case'};
#line 586
$memory_11 = hash::has_key($memory_10, $memory_12);
#line 586
undef($memory_12);
#line 586
$memory_11 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_11));
#line 586
$memory_11 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_11));
#line 586
if (c_rt_lib::check_true($memory_11)) {goto label_71;}
#line 587
$memory_12 = "case ";
#line 587
$memory_13 = $memory_6->{'case'};
#line 587
$memory_12 = $memory_12 . $memory_13;
#line 587
undef($memory_13);
#line 587
$memory_13 = " don't exists is: ";
#line 587
$memory_12 = $memory_12 . $memory_13;
#line 587
undef($memory_13);
#line 587
$memory_14 = $memory_7->{'type'};
#line 587
$memory_13 = type_checker_priv::get_print_tct_type_name($memory_14);
#line 587
undef($memory_14);
#line 587
$memory_12 = $memory_12 . $memory_13;
#line 587
undef($memory_13);
#line 587
type_checker_priv::add_error($memory_3, $memory_12);
#line 587
undef($memory_12);
#line 588
undef($memory_0);
#line 588
undef($memory_4);
#line 588
undef($memory_5);
#line 588
undef($memory_6);
#line 588
undef($memory_7);
#line 588
undef($memory_9);
#line 588
undef($memory_10);
#line 588
undef($memory_11);
#line 588
$_[1] = $memory_1;$_[2] = $memory_2;$_[3] = $memory_3;return $memory_8;
#line 589
goto label_71;
#line 589
label_71:
#line 589
undef($memory_11);
#line 590
$memory_11 = $memory_6->{'op'};
#line 590
$memory_12 = c_rt_lib::ov_is($memory_11, 'ov_is');
#line 590
if (c_rt_lib::check_true($memory_12)) {goto label_73;}
#line 591
$memory_12 = c_rt_lib::ov_is($memory_11, 'ov_as');
#line 591
if (c_rt_lib::check_true($memory_12)) {goto label_74;}
#line 591
$memory_12 = "NOMATCHALERT";
#line 591
$memory_12 = [$memory_12,$memory_11];
#line 591
die(dfile::ssave($memory_12));
#line 590
label_73:
#line 591
goto label_72;
#line 591
label_74:
#line 592
$memory_14 = $memory_6->{'case'};
#line 592
$memory_13 = hash::get_value($memory_10, $memory_14);
#line 592
undef($memory_14);
#line 593
$memory_14 = c_rt_lib::ov_is($memory_13, 'with_param');
#line 593
if (c_rt_lib::check_true($memory_14)) {goto label_76;}
#line 595
$memory_14 = c_rt_lib::ov_is($memory_13, 'no_param');
#line 595
if (c_rt_lib::check_true($memory_14)) {goto label_77;}
#line 595
$memory_14 = "NOMATCHALERT";
#line 595
$memory_14 = [$memory_14,$memory_13];
#line 595
die(dfile::ssave($memory_14));
#line 593
label_76:
#line 593
$memory_15 = c_rt_lib::ov_as($memory_13, 'with_param');
#line 594
$memory_16 = $memory_15;
#line 594
 if (c_rt_lib::get_hashcount($memory_8) > 1) {$memory_8 = {%{$memory_8}};}$memory_8->{'type'} = $memory_16;
#line 594
undef($memory_16);
#line 594
undef($memory_15);
#line 595
goto label_75;
#line 595
label_77:
#line 596
$memory_15 = "case ";
#line 596
$memory_16 = $memory_6->{'case'};
#line 596
$memory_15 = $memory_15 . $memory_16;
#line 596
undef($memory_16);
#line 596
$memory_16 = " don't have value: ";
#line 596
$memory_15 = $memory_15 . $memory_16;
#line 596
undef($memory_16);
#line 596
$memory_17 = $memory_7->{'type'};
#line 596
$memory_16 = type_checker_priv::get_print_tct_type_name($memory_17);
#line 596
undef($memory_17);
#line 596
$memory_15 = $memory_15 . $memory_16;
#line 596
undef($memory_16);
#line 596
type_checker_priv::add_error($memory_3, $memory_15);
#line 596
undef($memory_15);
#line 597
goto label_75;
#line 597
label_75:
#line 597
undef($memory_14);
#line 597
undef($memory_13);
#line 598
goto label_72;
#line 598
label_72:
#line 598
undef($memory_11);
#line 598
undef($memory_12);
#line 599
undef($memory_0);
#line 599
undef($memory_4);
#line 599
undef($memory_5);
#line 599
undef($memory_6);
#line 599
undef($memory_7);
#line 599
undef($memory_9);
#line 599
undef($memory_10);
#line 599
$_[1] = $memory_1;$_[2] = $memory_2;$_[3] = $memory_3;return $memory_8;
#line 599
undef($memory_10);
#line 600
goto label_66;
#line 600
label_67:
#line 601
$memory_10 = "binary operator 'as/is' can be applied only to variant: ";
#line 601
$memory_12 = $memory_7->{'type'};
#line 601
$memory_11 = type_checker_priv::get_print_tct_type_name($memory_12);
#line 601
undef($memory_12);
#line 601
$memory_10 = $memory_10 . $memory_11;
#line 601
undef($memory_11);
#line 601
type_checker_priv::add_error($memory_3, $memory_10);
#line 601
undef($memory_10);
#line 603
undef($memory_0);
#line 603
undef($memory_4);
#line 603
undef($memory_5);
#line 603
undef($memory_6);
#line 603
undef($memory_7);
#line 603
undef($memory_9);
#line 603
$_[1] = $memory_1;$_[2] = $memory_2;$_[3] = $memory_3;return $memory_8;
#line 604
goto label_66;
#line 604
label_66:
#line 604
undef($memory_9);
#line 604
undef($memory_7);
#line 604
undef($memory_8);
#line 604
undef($memory_6);
#line 605
goto label_1;
#line 605
label_13:
#line 605
$memory_6 = c_rt_lib::ov_as($memory_0, 'unary_op');
#line 606
$memory_8 = $memory_6->{'val'};
#line 606
$memory_7 = type_checker_priv::check_val($memory_8, $memory_1, $memory_2, $memory_3);
#line 606
undef($memory_8);
#line 607
$memory_8 = $memory_6->{'op'};
#line 607
$memory_9 = "!";
#line 607
$memory_8 = c_rt_lib::to_nl($memory_8 eq $memory_9);
#line 607
undef($memory_9);
#line 607
$memory_8 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 607
if (c_rt_lib::check_true($memory_8)) {goto label_79;}
#line 608
$memory_9 = ptd_system::is_condition_type($memory_7, $memory_1, $memory_3);
#line 608
$memory_9 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_9));
#line 608
$memory_9 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_9));
#line 608
if (c_rt_lib::check_true($memory_9)) {goto label_81;}
#line 609
$memory_10 = "incorrect type of argument operator '!' : ";
#line 609
$memory_12 = $memory_7->{'type'};
#line 609
$memory_11 = type_checker_priv::get_print_tct_type_name($memory_12);
#line 609
undef($memory_12);
#line 609
$memory_10 = $memory_10 . $memory_11;
#line 609
undef($memory_11);
#line 609
type_checker_priv::add_error($memory_3, $memory_10);
#line 609
undef($memory_10);
#line 610
goto label_81;
#line 610
label_81:
#line 610
undef($memory_9);
#line 611
$memory_9 = tct::bool();
#line 611
$memory_10 = $memory_9;
#line 611
 if (c_rt_lib::get_hashcount($memory_4) > 1) {$memory_4 = {%{$memory_4}};}$memory_4->{'type'} = $memory_10;
#line 611
undef($memory_9);
#line 611
undef($memory_10);
#line 612
undef($memory_0);
#line 612
undef($memory_5);
#line 612
undef($memory_6);
#line 612
undef($memory_7);
#line 612
undef($memory_8);
#line 612
$_[1] = $memory_1;$_[2] = $memory_2;$_[3] = $memory_3;return $memory_4;
#line 613
goto label_78;
#line 613
label_79:
#line 613
$memory_8 = $memory_6->{'op'};
#line 613
$memory_9 = "\@";
#line 613
$memory_8 = c_rt_lib::to_nl($memory_8 eq $memory_9);
#line 613
undef($memory_9);
#line 613
$memory_8 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 613
if (c_rt_lib::check_true($memory_8)) {goto label_82;}
#line 614
$memory_10 = tct::sim();
#line 614
$memory_9 = ptd_system::is_accepted($memory_7, $memory_10, $memory_1, $memory_3);
#line 614
undef($memory_10);
#line 614
$memory_9 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_9));
#line 614
$memory_9 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_9));
#line 614
if (c_rt_lib::check_true($memory_9)) {goto label_84;}
#line 615
$memory_10 = "incorrect type of argument operator '";
#line 615
$memory_11 = $memory_6->{'op'};
#line 615
$memory_10 = $memory_10 . $memory_11;
#line 615
undef($memory_11);
#line 615
$memory_11 = "' : ";
#line 615
$memory_10 = $memory_10 . $memory_11;
#line 615
undef($memory_11);
#line 615
$memory_12 = $memory_7->{'type'};
#line 615
$memory_11 = type_checker_priv::get_print_tct_type_name($memory_12);
#line 615
undef($memory_12);
#line 615
$memory_10 = $memory_10 . $memory_11;
#line 615
undef($memory_11);
#line 615
type_checker_priv::add_error($memory_3, $memory_10);
#line 615
undef($memory_10);
#line 616
goto label_84;
#line 616
label_84:
#line 616
undef($memory_9);
#line 617
$memory_11 = tct::sim();
#line 617
$memory_10 = {ref => $memory_11,};
#line 617
undef($memory_11);
#line 617
$memory_9 = tct::var($memory_10);
#line 617
undef($memory_10);
#line 617
$memory_10 = $memory_9;
#line 617
 if (c_rt_lib::get_hashcount($memory_4) > 1) {$memory_4 = {%{$memory_4}};}$memory_4->{'type'} = $memory_10;
#line 617
undef($memory_9);
#line 617
undef($memory_10);
#line 618
undef($memory_0);
#line 618
undef($memory_5);
#line 618
undef($memory_6);
#line 618
undef($memory_7);
#line 618
undef($memory_8);
#line 618
$_[1] = $memory_1;$_[2] = $memory_2;$_[3] = $memory_3;return $memory_4;
#line 619
goto label_78;
#line 619
label_82:
#line 620
$memory_10 = tct::sim();
#line 620
$memory_9 = ptd_system::is_accepted($memory_7, $memory_10, $memory_1, $memory_3);
#line 620
undef($memory_10);
#line 620
$memory_9 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_9));
#line 620
$memory_9 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_9));
#line 620
if (c_rt_lib::check_true($memory_9)) {goto label_86;}
#line 621
$memory_10 = "incorrect type of argument operator '";
#line 621
$memory_11 = $memory_6->{'op'};
#line 621
$memory_10 = $memory_10 . $memory_11;
#line 621
undef($memory_11);
#line 621
$memory_11 = "' : ";
#line 621
$memory_10 = $memory_10 . $memory_11;
#line 621
undef($memory_11);
#line 621
$memory_12 = $memory_7->{'type'};
#line 621
$memory_11 = type_checker_priv::get_print_tct_type_name($memory_12);
#line 621
undef($memory_12);
#line 621
$memory_10 = $memory_10 . $memory_11;
#line 621
undef($memory_11);
#line 621
type_checker_priv::add_error($memory_3, $memory_10);
#line 621
undef($memory_10);
#line 622
goto label_86;
#line 622
label_86:
#line 622
undef($memory_9);
#line 623
goto label_78;
#line 623
label_78:
#line 623
undef($memory_8);
#line 624
$memory_8 = tct::sim();
#line 624
$memory_9 = $memory_8;
#line 624
 if (c_rt_lib::get_hashcount($memory_4) > 1) {$memory_4 = {%{$memory_4}};}$memory_4->{'type'} = $memory_9;
#line 624
undef($memory_8);
#line 624
undef($memory_9);
#line 624
undef($memory_7);
#line 624
undef($memory_6);
#line 625
goto label_1;
#line 625
label_14:
#line 625
$memory_6 = c_rt_lib::ov_as($memory_0, 'fun_label');
#line 626
$memory_7 = $memory_6->{'module'};
#line 626
$memory_8 = $memory_6->{'name'};
#line 626
type_checker_priv::check_function_exists($memory_7, $memory_8, $memory_1, $memory_3);
#line 626
undef($memory_8);
#line 626
undef($memory_7);
#line 627
$memory_7 = tct::sim();
#line 627
$memory_8 = $memory_7;
#line 627
 if (c_rt_lib::get_hashcount($memory_4) > 1) {$memory_4 = {%{$memory_4}};}$memory_4->{'type'} = $memory_8;
#line 627
undef($memory_7);
#line 627
undef($memory_8);
#line 627
undef($memory_6);
#line 628
goto label_1;
#line 628
label_15:
#line 628
$memory_6 = c_rt_lib::ov_as($memory_0, 'fun_val');
#line 629
$memory_7 = [];
#line 630
$memory_8 = $memory_6->{'args'};
#line 630
$memory_10 = 0;
#line 630
$memory_11 = 1;
#line 630
$memory_12 = c_rt_lib::array_len($memory_8);
#line 630
label_89:
#line 630
$memory_13 = c_rt_lib::to_nl($memory_10 >= $memory_12);
#line 630
if (c_rt_lib::check_true($memory_13)) {goto label_87;}
#line 630
$memory_9 = $memory_8->[$memory_10];
#line 631
$memory_15 = $memory_9->{'val'};
#line 631
$memory_14 = type_checker_priv::check_val($memory_15, $memory_1, $memory_2, $memory_3);
#line 631
undef($memory_15);
#line 631
array::push($memory_7, $memory_14);
#line 631
undef($memory_14);
#line 632
$memory_10 = $memory_10 + $memory_11;
#line 632
goto label_89;
#line 632
label_87:
#line 632
undef($memory_8);
#line 632
undef($memory_9);
#line 632
undef($memory_10);
#line 632
undef($memory_11);
#line 632
undef($memory_12);
#line 632
undef($memory_13);
#line 633
$memory_9 = $memory_6->{'module'};
#line 633
$memory_10 = $memory_6->{'name'};
#line 633
$memory_8 = type_checker_priv::get_special_function_def($memory_9, $memory_10);
#line 633
undef($memory_10);
#line 633
undef($memory_9);
#line 634
$memory_9 = c_rt_lib::to_nl(0);
#line 635
$memory_10 = $memory_8->{'access'};
#line 635
$memory_11 = c_rt_lib::ov_is($memory_10, 'pub');
#line 635
if (c_rt_lib::check_true($memory_11)) {goto label_91;}
#line 641
$memory_11 = c_rt_lib::ov_is($memory_10, 'priv');
#line 641
if (c_rt_lib::check_true($memory_11)) {goto label_92;}
#line 641
$memory_11 = "NOMATCHALERT";
#line 641
$memory_11 = [$memory_11,$memory_10];
#line 641
die(dfile::ssave($memory_11));
#line 635
label_91:
#line 636
$memory_12 = c_rt_lib::to_nl(1);
#line 636
$memory_9 = $memory_12;
#line 636
undef($memory_12);
#line 637
$memory_13 = $memory_1->{'imports'};
#line 637
$memory_14 = $memory_6->{'module'};
#line 637
$memory_12 = hash::has_key($memory_13, $memory_14);
#line 637
undef($memory_14);
#line 637
undef($memory_13);
#line 637
$memory_12 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_12));
#line 637
$memory_12 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_12));
#line 637
if (c_rt_lib::check_true($memory_12)) {goto label_94;}
#line 638
$memory_13 = "module '";
#line 638
$memory_14 = $memory_6->{'module'};
#line 638
$memory_13 = $memory_13 . $memory_14;
#line 638
undef($memory_14);
#line 638
$memory_14 = "' not imported";
#line 638
$memory_13 = $memory_13 . $memory_14;
#line 638
undef($memory_14);
#line 638
type_checker_priv::add_error($memory_3, $memory_13);
#line 638
undef($memory_13);
#line 639
$memory_13 = "imports";
#line 639
$memory_13 = c_rt_lib::get_ref_hash($memory_1, $memory_13);
#line 639
$memory_14 = $memory_6->{'module'};
#line 639
$memory_15 = c_rt_lib::to_nl(0);
#line 639
hash::set_value($memory_13, $memory_14, $memory_15);
#line 639
undef($memory_15);
#line 639
undef($memory_14);
#line 639
$memory_14 = "imports";
#line 639
c_rt_lib::set_ref_hash($memory_1, $memory_14, $memory_13);
#line 639
undef($memory_14);
#line 639
undef($memory_13);
#line 640
goto label_94;
#line 640
label_94:
#line 640
undef($memory_12);
#line 641
goto label_90;
#line 641
label_92:
#line 642
$memory_13 = $memory_6->{'module'};
#line 642
$memory_14 = $memory_6->{'name'};
#line 642
$memory_12 = type_checker_priv::check_function_exists($memory_13, $memory_14, $memory_1, $memory_3);
#line 642
undef($memory_14);
#line 642
undef($memory_13);
#line 642
$memory_12 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_12));
#line 642
$memory_12 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_12));
#line 642
if (c_rt_lib::check_true($memory_12)) {goto label_96;}
#line 642
undef($memory_0);
#line 642
undef($memory_5);
#line 642
undef($memory_6);
#line 642
undef($memory_7);
#line 642
undef($memory_8);
#line 642
undef($memory_9);
#line 642
undef($memory_10);
#line 642
undef($memory_11);
#line 642
undef($memory_12);
#line 642
$_[1] = $memory_1;$_[2] = $memory_2;$_[3] = $memory_3;return $memory_4;
#line 642
goto label_96;
#line 642
label_96:
#line 642
undef($memory_12);
#line 643
$memory_13 = $memory_6->{'module'};
#line 643
$memory_14 = $memory_6->{'name'};
#line 643
$memory_12 = type_checker_priv::get_function_def($memory_13, $memory_14, $memory_1);
#line 643
undef($memory_14);
#line 643
undef($memory_13);
#line 643
$memory_8 = $memory_12;
#line 643
undef($memory_12);
#line 644
goto label_90;
#line 644
label_90:
#line 644
undef($memory_10);
#line 644
undef($memory_11);
#line 645
$memory_11 = $memory_6->{'args'};
#line 645
$memory_10 = array::len($memory_11);
#line 645
undef($memory_11);
#line 645
$memory_12 = $memory_8->{'args'};
#line 645
$memory_11 = array::len($memory_12);
#line 645
undef($memory_12);
#line 645
$memory_10 = c_rt_lib::to_nl($memory_10 != $memory_11);
#line 645
undef($memory_11);
#line 645
$memory_10 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_10));
#line 645
if (c_rt_lib::check_true($memory_10)) {goto label_98;}
#line 646
$memory_11 = "wrong number ";
#line 646
$memory_13 = $memory_6->{'args'};
#line 646
$memory_12 = array::len($memory_13);
#line 646
undef($memory_13);
#line 646
$memory_11 = $memory_11 . $memory_12;
#line 646
undef($memory_12);
#line 646
$memory_12 = " of function arguments : ";
#line 646
$memory_11 = $memory_11 . $memory_12;
#line 646
undef($memory_12);
#line 646
$memory_13 = $memory_6->{'module'};
#line 646
$memory_14 = $memory_6->{'name'};
#line 646
$memory_12 = type_checker_priv::get_function_name($memory_13, $memory_14);
#line 646
undef($memory_14);
#line 646
undef($memory_13);
#line 646
$memory_11 = $memory_11 . $memory_12;
#line 646
undef($memory_12);
#line 646
type_checker_priv::add_error($memory_3, $memory_11);
#line 646
undef($memory_11);
#line 648
undef($memory_0);
#line 648
undef($memory_5);
#line 648
undef($memory_6);
#line 648
undef($memory_7);
#line 648
undef($memory_8);
#line 648
undef($memory_9);
#line 648
undef($memory_10);
#line 648
$_[1] = $memory_1;$_[2] = $memory_2;$_[3] = $memory_3;return $memory_4;
#line 649
goto label_98;
#line 649
label_98:
#line 649
undef($memory_10);
#line 650
$memory_10 = {};
#line 651
$memory_12 = $memory_6->{'args'};
#line 651
$memory_11 = array::len($memory_12);
#line 651
undef($memory_12);
#line 651
$memory_12 = 0;
#line 651
$memory_13 = 1;
#line 651
label_101:
#line 651
$memory_14 = c_rt_lib::to_nl($memory_12 >= $memory_11);
#line 651
if (c_rt_lib::check_true($memory_14)) {goto label_99;}
#line 652
$memory_15 = $memory_6->{'args'};
#line 652
$memory_15 = $memory_15->[$memory_12];
#line 653
$memory_16 = $memory_8->{'args'};
#line 653
$memory_16 = $memory_16->[$memory_12];
#line 654
$memory_18 = $memory_16->{'mod'};
#line 654
$memory_19 = $memory_15->{'mod'};
#line 654
$memory_17 = enum::eq($memory_18, $memory_19);
#line 654
undef($memory_19);
#line 654
undef($memory_18);
#line 654
if (c_rt_lib::check_true($memory_17)) {goto label_104;}
#line 654
$memory_19 = $memory_16->{'mod'};
#line 654
$memory_20 = c_rt_lib::ov_mk_none('fun');
#line 654
$memory_17 = enum::eq($memory_19, $memory_20);
#line 654
undef($memory_20);
#line 654
undef($memory_19);
#line 654
$memory_18 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_17));
#line 654
if (c_rt_lib::check_true($memory_18)) {goto label_105;}
#line 654
$memory_19 = $memory_15->{'mod'};
#line 654
$memory_20 = c_rt_lib::ov_mk_none('none');
#line 654
$memory_17 = enum::eq($memory_19, $memory_20);
#line 654
undef($memory_20);
#line 654
undef($memory_19);
#line 654
label_105:
#line 654
undef($memory_18);
#line 654
label_104:
#line 654
$memory_17 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_17));
#line 654
$memory_17 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_17));
#line 654
if (c_rt_lib::check_true($memory_17)) {goto label_103;}
#line 654
$memory_18 = "arg no. ";
#line 654
$memory_19 = 1;
#line 654
$memory_19 = $memory_12 + $memory_19;
#line 654
$memory_18 = $memory_18 . $memory_19;
#line 654
undef($memory_19);
#line 654
$memory_19 = " '";
#line 654
$memory_18 = $memory_18 . $memory_19;
#line 654
undef($memory_19);
#line 654
$memory_19 = $memory_16->{'name'};
#line 654
$memory_18 = $memory_18 . $memory_19;
#line 654
undef($memory_19);
#line 654
$memory_19 = "' ref mismatched with function prototype";
#line 654
$memory_18 = $memory_18 . $memory_19;
#line 654
undef($memory_19);
#line 654
type_checker_priv::add_error($memory_3, $memory_18);
#line 654
undef($memory_18);
#line 654
goto label_103;
#line 654
label_103:
#line 654
undef($memory_17);
#line 660
$memory_18 = $memory_9;
#line 660
$memory_18 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_18));
#line 660
if (c_rt_lib::check_true($memory_18)) {goto label_107;}
#line 661
$memory_19 = $memory_7->[$memory_12];
#line 662
$memory_20 = c_rt_lib::ov_mk_none('speculation');
#line 662
$memory_21 = $memory_20;
#line 662
 if (c_rt_lib::get_hashcount($memory_19) > 1) {$memory_19 = {%{$memory_19}};}$memory_19->{'src'} = $memory_21;
#line 662
undef($memory_20);
#line 662
undef($memory_21);
#line 663
$memory_21 = $memory_16->{'type'};
#line 663
$memory_20 = ptd_system::is_accepted_info($memory_19, $memory_21, $memory_1, $memory_3);
#line 663
undef($memory_21);
#line 663
$memory_17 = $memory_20;
#line 663
undef($memory_20);
#line 663
undef($memory_19);
#line 664
goto label_106;
#line 664
label_107:
#line 665
$memory_20 = $memory_16->{'mod'};
#line 665
$memory_21 = "ref";
#line 665
$memory_19 = ov::is($memory_20, $memory_21);
#line 665
undef($memory_21);
#line 665
undef($memory_20);
#line 665
$memory_19 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_19));
#line 665
if (c_rt_lib::check_true($memory_19)) {goto label_109;}
#line 666
$memory_21 = $memory_3->{'errors'};
#line 666
$memory_20 = array::len($memory_21);
#line 666
undef($memory_21);
#line 667
$memory_22 = $memory_15->{'val'};
#line 667
$memory_21 = type_checker_priv::rec_get_var_from_lval($memory_22, $memory_3);
#line 667
undef($memory_22);
#line 668
$memory_23 = $memory_3->{'errors'};
#line 668
$memory_22 = array::len($memory_23);
#line 668
undef($memory_23);
#line 668
$memory_22 = c_rt_lib::to_nl($memory_20 == $memory_22);
#line 668
$memory_22 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_22));
#line 668
if (c_rt_lib::check_true($memory_22)) {goto label_111;}
#line 669
$memory_25 = 0;
#line 669
$memory_24 = $memory_21->[$memory_25];
#line 669
undef($memory_25);
#line 669
$memory_25 = "var";
#line 669
$memory_23 = ov::as($memory_24, $memory_25);
#line 669
undef($memory_25);
#line 669
undef($memory_24);
#line 670
$memory_24 = hash::has_key($memory_10, $memory_23);
#line 670
$memory_24 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_24));
#line 670
if (c_rt_lib::check_true($memory_24)) {goto label_113;}
#line 671
$memory_25 = "many ref-arguments come from the same variable: ";
#line 671
$memory_25 = $memory_25 . $memory_23;
#line 671
type_checker_priv::add_warning($memory_3, $memory_25);
#line 671
undef($memory_25);
#line 672
goto label_113;
#line 672
label_113:
#line 672
undef($memory_24);
#line 673
$memory_24 = 0;
#line 673
hash::set_value($memory_10, $memory_23, $memory_24);
#line 673
undef($memory_24);
#line 674
$memory_24 = $memory_15->{'val'};
#line 674
$memory_25 = $memory_7->[$memory_12];
#line 674
$memory_26 = $memory_7->[$memory_12];
#line 674
type_checker_priv::set_type_to_lval($memory_24, $memory_25, $memory_26, $memory_1, $memory_2, $memory_3);
#line 674
undef($memory_26);
#line 674
undef($memory_25);
#line 674
undef($memory_24);
#line 674
undef($memory_23);
#line 675
goto label_111;
#line 675
label_111:
#line 675
undef($memory_22);
#line 675
undef($memory_20);
#line 675
undef($memory_21);
#line 676
goto label_109;
#line 676
label_109:
#line 676
undef($memory_19);
#line 677
$memory_20 = $memory_16->{'type'};
#line 677
$memory_21 = $memory_7->[$memory_12];
#line 677
$memory_19 = ptd_system::check_assignment($memory_20, $memory_21, $memory_1, $memory_3);
#line 677
undef($memory_21);
#line 677
undef($memory_20);
#line 677
$memory_17 = $memory_19;
#line 677
undef($memory_19);
#line 678
goto label_106;
#line 678
label_106:
#line 678
undef($memory_18);
#line 679
$memory_19 = "err";
#line 679
$memory_18 = ov::is($memory_17, $memory_19);
#line 679
undef($memory_19);
#line 679
$memory_18 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_18));
#line 679
if (c_rt_lib::check_true($memory_18)) {goto label_115;}
#line 680
$memory_19 = "In function call: ";
#line 680
$memory_21 = $memory_6->{'module'};
#line 680
$memory_22 = $memory_6->{'name'};
#line 680
$memory_20 = type_checker_priv::get_function_name($memory_21, $memory_22);
#line 680
undef($memory_22);
#line 680
undef($memory_21);
#line 680
$memory_19 = $memory_19 . $memory_20;
#line 680
undef($memory_20);
#line 680
$memory_20 = " argument no.";
#line 680
$memory_19 = $memory_19 . $memory_20;
#line 680
undef($memory_20);
#line 680
$memory_20 = 1;
#line 680
$memory_20 = $memory_12 + $memory_20;
#line 680
$memory_19 = $memory_19 . $memory_20;
#line 680
undef($memory_20);
#line 680
$memory_20 = " '";
#line 680
$memory_19 = $memory_19 . $memory_20;
#line 680
undef($memory_20);
#line 680
$memory_20 = $memory_16->{'name'};
#line 680
$memory_19 = $memory_19 . $memory_20;
#line 680
undef($memory_20);
#line 680
$memory_20 = "' has invalid type: ";
#line 680
$memory_19 = $memory_19 . $memory_20;
#line 680
undef($memory_20);
#line 680
$memory_20 = type_checker_priv::get_print_check_info($memory_17);
#line 680
$memory_19 = $memory_19 . $memory_20;
#line 680
undef($memory_20);
#line 680
type_checker_priv::add_error($memory_3, $memory_19);
#line 680
undef($memory_19);
#line 682
goto label_115;
#line 682
label_115:
#line 682
undef($memory_18);
#line 682
undef($memory_15);
#line 682
undef($memory_16);
#line 682
undef($memory_17);
#line 683
$memory_12 = $memory_12 + $memory_13;
#line 683
goto label_101;
#line 683
label_99:
#line 683
undef($memory_11);
#line 683
undef($memory_12);
#line 683
undef($memory_13);
#line 683
undef($memory_14);
#line 684
$memory_13 = $memory_8->{'ret_type'};
#line 684
$memory_14 = c_rt_lib::ov_mk_none('known');
#line 684
$memory_12 = {type => $memory_13,src => $memory_14,};
#line 684
undef($memory_13);
#line 684
undef($memory_14);
#line 684
$memory_11 = type_checker_priv::check_special_function($memory_12, $memory_6, $memory_7, $memory_1, $memory_2, $memory_3);
#line 684
undef($memory_12);
#line 684
$memory_4 = $memory_11;
#line 684
undef($memory_11);
#line 684
undef($memory_7);
#line 684
undef($memory_8);
#line 684
undef($memory_9);
#line 684
undef($memory_10);
#line 684
undef($memory_6);
#line 685
goto label_1;
#line 685
label_16:
#line 685
$memory_6 = c_rt_lib::ov_as($memory_0, 'string');
#line 686
$memory_7 = tct::sim();
#line 686
$memory_8 = $memory_7;
#line 686
 if (c_rt_lib::get_hashcount($memory_4) > 1) {$memory_4 = {%{$memory_4}};}$memory_4->{'type'} = $memory_8;
#line 686
undef($memory_7);
#line 686
undef($memory_8);
#line 686
undef($memory_6);
#line 687
goto label_1;
#line 687
label_17:
#line 687
$memory_6 = c_rt_lib::ov_as($memory_0, 'post_inc');
#line 688
$memory_7 = type_checker_priv::check_val($memory_6, $memory_1, $memory_2, $memory_3);
#line 689
$memory_9 = tct::sim();
#line 689
$memory_8 = ptd_system::is_accepted($memory_7, $memory_9, $memory_1, $memory_3);
#line 689
undef($memory_9);
#line 689
$memory_8 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 689
$memory_8 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 689
if (c_rt_lib::check_true($memory_8)) {goto label_117;}
#line 690
$memory_9 = "wrong type in post increment : ";
#line 690
$memory_11 = $memory_7->{'type'};
#line 690
$memory_10 = type_checker_priv::get_print_tct_type_name($memory_11);
#line 690
undef($memory_11);
#line 690
$memory_9 = $memory_9 . $memory_10;
#line 690
undef($memory_10);
#line 690
type_checker_priv::add_error($memory_3, $memory_9);
#line 690
undef($memory_9);
#line 691
goto label_117;
#line 691
label_117:
#line 691
undef($memory_8);
#line 692
$memory_8 = tct::sim();
#line 692
$memory_9 = $memory_8;
#line 692
 if (c_rt_lib::get_hashcount($memory_4) > 1) {$memory_4 = {%{$memory_4}};}$memory_4->{'type'} = $memory_9;
#line 692
undef($memory_8);
#line 692
undef($memory_9);
#line 692
undef($memory_7);
#line 692
undef($memory_6);
#line 693
goto label_1;
#line 693
label_18:
#line 693
$memory_6 = c_rt_lib::ov_as($memory_0, 'post_dec');
#line 694
$memory_7 = type_checker_priv::check_val($memory_6, $memory_1, $memory_2, $memory_3);
#line 695
$memory_9 = tct::sim();
#line 695
$memory_8 = ptd_system::is_accepted($memory_7, $memory_9, $memory_1, $memory_3);
#line 695
undef($memory_9);
#line 695
$memory_8 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 695
$memory_8 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 695
if (c_rt_lib::check_true($memory_8)) {goto label_119;}
#line 696
$memory_9 = "wrong type in post decrement : ";
#line 696
$memory_11 = $memory_7->{'type'};
#line 696
$memory_10 = type_checker_priv::get_print_tct_type_name($memory_11);
#line 696
undef($memory_11);
#line 696
$memory_9 = $memory_9 . $memory_10;
#line 696
undef($memory_10);
#line 696
type_checker_priv::add_error($memory_3, $memory_9);
#line 696
undef($memory_9);
#line 697
goto label_119;
#line 697
label_119:
#line 697
undef($memory_8);
#line 698
$memory_8 = tct::sim();
#line 698
$memory_9 = $memory_8;
#line 698
 if (c_rt_lib::get_hashcount($memory_4) > 1) {$memory_4 = {%{$memory_4}};}$memory_4->{'type'} = $memory_9;
#line 698
undef($memory_8);
#line 698
undef($memory_9);
#line 698
undef($memory_7);
#line 698
undef($memory_6);
#line 699
goto label_1;
#line 699
label_1:
#line 699
undef($memory_5);
#line 700
undef($memory_0);
#line 700
$_[1] = $memory_1;$_[2] = $memory_2;$_[3] = $memory_3;return $memory_4;
#line 700
undef($memory_4);
#line 700
undef($memory_0);
#line 700
$_[1] = $memory_1;$_[2] = $memory_2;$_[3] = $memory_3;return;
$_[1] = $memory_1;$_[2] = $memory_2;$_[3] = $memory_3;}

sub type_checker_priv::__get_special_functions() {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;
#line 704
$memory_0 = {};
#line 705
$memory_1 = "ptd::ensure";
#line 705
$memory_3 = tct::tct_im();
#line 705
$memory_6 = c_rt_lib::ov_mk_none('none');
#line 705
$memory_7 = tct::tct_im();
#line 705
$memory_8 = "";
#line 705
$memory_5 = {mod => $memory_6,type => $memory_7,name => $memory_8,};
#line 705
undef($memory_6);
#line 705
undef($memory_7);
#line 705
undef($memory_8);
#line 705
$memory_7 = c_rt_lib::ov_mk_none('none');
#line 705
$memory_8 = tct::tct_im();
#line 705
$memory_9 = "";
#line 705
$memory_6 = {mod => $memory_7,type => $memory_8,name => $memory_9,};
#line 705
undef($memory_7);
#line 705
undef($memory_8);
#line 705
undef($memory_9);
#line 705
$memory_4 = [$memory_5,$memory_6];
#line 705
undef($memory_5);
#line 705
undef($memory_6);
#line 705
$memory_2 = {r => $memory_3,a => $memory_4,};
#line 705
undef($memory_3);
#line 705
undef($memory_4);
#line 705
hash::set_value($memory_0, $memory_1, $memory_2);
#line 705
undef($memory_2);
#line 705
undef($memory_1);
#line 708
$memory_1 = "ptd::ensure_only_static_do_not_touch_without_permission";
#line 708
$memory_3 = tct::tct_im();
#line 708
$memory_6 = c_rt_lib::ov_mk_none('none');
#line 708
$memory_7 = tct::tct_im();
#line 708
$memory_8 = "";
#line 708
$memory_5 = {mod => $memory_6,type => $memory_7,name => $memory_8,};
#line 708
undef($memory_6);
#line 708
undef($memory_7);
#line 708
undef($memory_8);
#line 708
$memory_7 = c_rt_lib::ov_mk_none('none');
#line 708
$memory_8 = tct::tct_im();
#line 708
$memory_9 = "";
#line 708
$memory_6 = {mod => $memory_7,type => $memory_8,name => $memory_9,};
#line 708
undef($memory_7);
#line 708
undef($memory_8);
#line 708
undef($memory_9);
#line 708
$memory_4 = [$memory_5,$memory_6];
#line 708
undef($memory_5);
#line 708
undef($memory_6);
#line 708
$memory_2 = {r => $memory_3,a => $memory_4,};
#line 708
undef($memory_3);
#line 708
undef($memory_4);
#line 708
hash::set_value($memory_0, $memory_1, $memory_2);
#line 708
undef($memory_2);
#line 708
undef($memory_1);
#line 712
$memory_1 = "array::push";
#line 712
$memory_3 = tct::void();
#line 712
$memory_6 = c_rt_lib::ov_mk_none('ref');
#line 712
$memory_8 = tct::tct_im();
#line 712
$memory_7 = tct::arr($memory_8);
#line 712
undef($memory_8);
#line 712
$memory_8 = "";
#line 712
$memory_5 = {mod => $memory_6,type => $memory_7,name => $memory_8,};
#line 712
undef($memory_6);
#line 712
undef($memory_7);
#line 712
undef($memory_8);
#line 712
$memory_7 = c_rt_lib::ov_mk_none('none');
#line 712
$memory_8 = tct::tct_im();
#line 712
$memory_9 = "";
#line 712
$memory_6 = {mod => $memory_7,type => $memory_8,name => $memory_9,};
#line 712
undef($memory_7);
#line 712
undef($memory_8);
#line 712
undef($memory_9);
#line 712
$memory_4 = [$memory_5,$memory_6];
#line 712
undef($memory_5);
#line 712
undef($memory_6);
#line 712
$memory_2 = {r => $memory_3,a => $memory_4,};
#line 712
undef($memory_3);
#line 712
undef($memory_4);
#line 712
hash::set_value($memory_0, $memory_1, $memory_2);
#line 712
undef($memory_2);
#line 712
undef($memory_1);
#line 715
$memory_1 = "array::subarray";
#line 715
$memory_3 = tct::tct_im();
#line 715
$memory_6 = c_rt_lib::ov_mk_none('none');
#line 715
$memory_8 = tct::tct_im();
#line 715
$memory_7 = tct::arr($memory_8);
#line 715
undef($memory_8);
#line 715
$memory_8 = "";
#line 715
$memory_5 = {mod => $memory_6,type => $memory_7,name => $memory_8,};
#line 715
undef($memory_6);
#line 715
undef($memory_7);
#line 715
undef($memory_8);
#line 715
$memory_7 = c_rt_lib::ov_mk_none('none');
#line 715
$memory_8 = tct::sim();
#line 715
$memory_9 = "";
#line 715
$memory_6 = {mod => $memory_7,type => $memory_8,name => $memory_9,};
#line 715
undef($memory_7);
#line 715
undef($memory_8);
#line 715
undef($memory_9);
#line 715
$memory_8 = c_rt_lib::ov_mk_none('none');
#line 715
$memory_9 = tct::sim();
#line 715
$memory_10 = "";
#line 715
$memory_7 = {mod => $memory_8,type => $memory_9,name => $memory_10,};
#line 715
undef($memory_8);
#line 715
undef($memory_9);
#line 715
undef($memory_10);
#line 715
$memory_4 = [$memory_5,$memory_6,$memory_7];
#line 715
undef($memory_5);
#line 715
undef($memory_6);
#line 715
undef($memory_7);
#line 715
$memory_2 = {r => $memory_3,a => $memory_4,};
#line 715
undef($memory_3);
#line 715
undef($memory_4);
#line 715
hash::set_value($memory_0, $memory_1, $memory_2);
#line 715
undef($memory_2);
#line 715
undef($memory_1);
#line 720
$memory_1 = "array::join";
#line 720
$memory_3 = tct::sim();
#line 720
$memory_6 = c_rt_lib::ov_mk_none('none');
#line 720
$memory_7 = tct::sim();
#line 720
$memory_8 = "";
#line 720
$memory_5 = {mod => $memory_6,type => $memory_7,name => $memory_8,};
#line 720
undef($memory_6);
#line 720
undef($memory_7);
#line 720
undef($memory_8);
#line 720
$memory_7 = c_rt_lib::ov_mk_none('none');
#line 720
$memory_9 = tct::sim();
#line 720
$memory_8 = tct::arr($memory_9);
#line 720
undef($memory_9);
#line 720
$memory_9 = "";
#line 720
$memory_6 = {mod => $memory_7,type => $memory_8,name => $memory_9,};
#line 720
undef($memory_7);
#line 720
undef($memory_8);
#line 720
undef($memory_9);
#line 720
$memory_4 = [$memory_5,$memory_6];
#line 720
undef($memory_5);
#line 720
undef($memory_6);
#line 720
$memory_2 = {r => $memory_3,a => $memory_4,};
#line 720
undef($memory_3);
#line 720
undef($memory_4);
#line 720
hash::set_value($memory_0, $memory_1, $memory_2);
#line 720
undef($memory_2);
#line 720
undef($memory_1);
#line 724
$memory_1 = "array::append";
#line 724
$memory_3 = tct::void();
#line 724
$memory_6 = c_rt_lib::ov_mk_none('ref');
#line 724
$memory_8 = tct::tct_im();
#line 724
$memory_7 = tct::arr($memory_8);
#line 724
undef($memory_8);
#line 724
$memory_8 = "";
#line 724
$memory_5 = {mod => $memory_6,type => $memory_7,name => $memory_8,};
#line 724
undef($memory_6);
#line 724
undef($memory_7);
#line 724
undef($memory_8);
#line 724
$memory_7 = c_rt_lib::ov_mk_none('none');
#line 724
$memory_9 = tct::tct_im();
#line 724
$memory_8 = tct::arr($memory_9);
#line 724
undef($memory_9);
#line 724
$memory_9 = "";
#line 724
$memory_6 = {mod => $memory_7,type => $memory_8,name => $memory_9,};
#line 724
undef($memory_7);
#line 724
undef($memory_8);
#line 724
undef($memory_9);
#line 724
$memory_4 = [$memory_5,$memory_6];
#line 724
undef($memory_5);
#line 724
undef($memory_6);
#line 724
$memory_2 = {r => $memory_3,a => $memory_4,};
#line 724
undef($memory_3);
#line 724
undef($memory_4);
#line 724
hash::set_value($memory_0, $memory_1, $memory_2);
#line 724
undef($memory_2);
#line 724
undef($memory_1);
#line 728
$memory_1 = "array::len";
#line 728
$memory_3 = tct::sim();
#line 728
$memory_6 = c_rt_lib::ov_mk_none('none');
#line 728
$memory_8 = tct::tct_im();
#line 728
$memory_7 = tct::arr($memory_8);
#line 728
undef($memory_8);
#line 728
$memory_8 = "";
#line 728
$memory_5 = {mod => $memory_6,type => $memory_7,name => $memory_8,};
#line 728
undef($memory_6);
#line 728
undef($memory_7);
#line 728
undef($memory_8);
#line 728
$memory_4 = [$memory_5];
#line 728
undef($memory_5);
#line 728
$memory_2 = {r => $memory_3,a => $memory_4,};
#line 728
undef($memory_3);
#line 728
undef($memory_4);
#line 728
hash::set_value($memory_0, $memory_1, $memory_2);
#line 728
undef($memory_2);
#line 728
undef($memory_1);
#line 732
$memory_1 = "hash::set_value";
#line 732
$memory_3 = tct::void();
#line 732
$memory_6 = c_rt_lib::ov_mk_none('ref');
#line 732
$memory_8 = tct::tct_im();
#line 732
$memory_7 = tct::hash($memory_8);
#line 732
undef($memory_8);
#line 732
$memory_8 = "";
#line 732
$memory_5 = {mod => $memory_6,type => $memory_7,name => $memory_8,};
#line 732
undef($memory_6);
#line 732
undef($memory_7);
#line 732
undef($memory_8);
#line 732
$memory_7 = c_rt_lib::ov_mk_none('none');
#line 732
$memory_8 = tct::sim();
#line 732
$memory_9 = "";
#line 732
$memory_6 = {mod => $memory_7,type => $memory_8,name => $memory_9,};
#line 732
undef($memory_7);
#line 732
undef($memory_8);
#line 732
undef($memory_9);
#line 732
$memory_8 = c_rt_lib::ov_mk_none('none');
#line 732
$memory_9 = tct::tct_im();
#line 732
$memory_10 = "";
#line 732
$memory_7 = {mod => $memory_8,type => $memory_9,name => $memory_10,};
#line 732
undef($memory_8);
#line 732
undef($memory_9);
#line 732
undef($memory_10);
#line 732
$memory_4 = [$memory_5,$memory_6,$memory_7];
#line 732
undef($memory_5);
#line 732
undef($memory_6);
#line 732
undef($memory_7);
#line 732
$memory_2 = {r => $memory_3,a => $memory_4,};
#line 732
undef($memory_3);
#line 732
undef($memory_4);
#line 732
hash::set_value($memory_0, $memory_1, $memory_2);
#line 732
undef($memory_2);
#line 732
undef($memory_1);
#line 737
$memory_1 = "hash::get_value";
#line 737
$memory_3 = tct::tct_im();
#line 737
$memory_6 = c_rt_lib::ov_mk_none('none');
#line 737
$memory_8 = tct::tct_im();
#line 737
$memory_7 = tct::hash($memory_8);
#line 737
undef($memory_8);
#line 737
$memory_8 = "";
#line 737
$memory_5 = {mod => $memory_6,type => $memory_7,name => $memory_8,};
#line 737
undef($memory_6);
#line 737
undef($memory_7);
#line 737
undef($memory_8);
#line 737
$memory_7 = c_rt_lib::ov_mk_none('none');
#line 737
$memory_8 = tct::sim();
#line 737
$memory_9 = "";
#line 737
$memory_6 = {mod => $memory_7,type => $memory_8,name => $memory_9,};
#line 737
undef($memory_7);
#line 737
undef($memory_8);
#line 737
undef($memory_9);
#line 737
$memory_4 = [$memory_5,$memory_6];
#line 737
undef($memory_5);
#line 737
undef($memory_6);
#line 737
$memory_2 = {r => $memory_3,a => $memory_4,};
#line 737
undef($memory_3);
#line 737
undef($memory_4);
#line 737
hash::set_value($memory_0, $memory_1, $memory_2);
#line 737
undef($memory_2);
#line 737
undef($memory_1);
#line 740
$memory_1 = "hash::has_key";
#line 740
$memory_3 = tct::bool();
#line 740
$memory_6 = c_rt_lib::ov_mk_none('none');
#line 740
$memory_8 = tct::tct_im();
#line 740
$memory_7 = tct::hash($memory_8);
#line 740
undef($memory_8);
#line 740
$memory_8 = "";
#line 740
$memory_5 = {mod => $memory_6,type => $memory_7,name => $memory_8,};
#line 740
undef($memory_6);
#line 740
undef($memory_7);
#line 740
undef($memory_8);
#line 740
$memory_7 = c_rt_lib::ov_mk_none('none');
#line 740
$memory_8 = tct::sim();
#line 740
$memory_9 = "";
#line 740
$memory_6 = {mod => $memory_7,type => $memory_8,name => $memory_9,};
#line 740
undef($memory_7);
#line 740
undef($memory_8);
#line 740
undef($memory_9);
#line 740
$memory_4 = [$memory_5,$memory_6];
#line 740
undef($memory_5);
#line 740
undef($memory_6);
#line 740
$memory_2 = {r => $memory_3,a => $memory_4,};
#line 740
undef($memory_3);
#line 740
undef($memory_4);
#line 740
hash::set_value($memory_0, $memory_1, $memory_2);
#line 740
undef($memory_2);
#line 740
undef($memory_1);
#line 743
$memory_1 = "hash::delete";
#line 743
$memory_3 = tct::void();
#line 743
$memory_6 = c_rt_lib::ov_mk_none('ref');
#line 743
$memory_8 = tct::tct_im();
#line 743
$memory_7 = tct::hash($memory_8);
#line 743
undef($memory_8);
#line 743
$memory_8 = "";
#line 743
$memory_5 = {mod => $memory_6,type => $memory_7,name => $memory_8,};
#line 743
undef($memory_6);
#line 743
undef($memory_7);
#line 743
undef($memory_8);
#line 743
$memory_7 = c_rt_lib::ov_mk_none('none');
#line 743
$memory_8 = tct::sim();
#line 743
$memory_9 = "";
#line 743
$memory_6 = {mod => $memory_7,type => $memory_8,name => $memory_9,};
#line 743
undef($memory_7);
#line 743
undef($memory_8);
#line 743
undef($memory_9);
#line 743
$memory_4 = [$memory_5,$memory_6];
#line 743
undef($memory_5);
#line 743
undef($memory_6);
#line 743
$memory_2 = {r => $memory_3,a => $memory_4,};
#line 743
undef($memory_3);
#line 743
undef($memory_4);
#line 743
hash::set_value($memory_0, $memory_1, $memory_2);
#line 743
undef($memory_2);
#line 743
undef($memory_1);
#line 746
$memory_1 = "hash::size";
#line 746
$memory_3 = tct::sim();
#line 746
$memory_6 = c_rt_lib::ov_mk_none('none');
#line 746
$memory_8 = tct::tct_im();
#line 746
$memory_7 = tct::hash($memory_8);
#line 746
undef($memory_8);
#line 746
$memory_8 = "";
#line 746
$memory_5 = {mod => $memory_6,type => $memory_7,name => $memory_8,};
#line 746
undef($memory_6);
#line 746
undef($memory_7);
#line 746
undef($memory_8);
#line 746
$memory_4 = [$memory_5];
#line 746
undef($memory_5);
#line 746
$memory_2 = {r => $memory_3,a => $memory_4,};
#line 746
undef($memory_3);
#line 746
undef($memory_4);
#line 746
hash::set_value($memory_0, $memory_1, $memory_2);
#line 746
undef($memory_2);
#line 746
undef($memory_1);
#line 748
$memory_1 = "hash::values";
#line 748
$memory_4 = tct::tct_im();
#line 748
$memory_3 = tct::arr($memory_4);
#line 748
undef($memory_4);
#line 748
$memory_6 = c_rt_lib::ov_mk_none('none');
#line 748
$memory_8 = tct::tct_im();
#line 748
$memory_7 = tct::hash($memory_8);
#line 748
undef($memory_8);
#line 748
$memory_8 = "";
#line 748
$memory_5 = {mod => $memory_6,type => $memory_7,name => $memory_8,};
#line 748
undef($memory_6);
#line 748
undef($memory_7);
#line 748
undef($memory_8);
#line 748
$memory_4 = [$memory_5];
#line 748
undef($memory_5);
#line 748
$memory_2 = {r => $memory_3,a => $memory_4,};
#line 748
undef($memory_3);
#line 748
undef($memory_4);
#line 748
hash::set_value($memory_0, $memory_1, $memory_2);
#line 748
undef($memory_2);
#line 748
undef($memory_1);
#line 751
$memory_1 = "ov::is";
#line 751
$memory_3 = tct::bool();
#line 751
$memory_6 = c_rt_lib::ov_mk_none('none');
#line 751
$memory_8 = {};
#line 751
$memory_7 = tct::var($memory_8);
#line 751
undef($memory_8);
#line 751
$memory_8 = "";
#line 751
$memory_5 = {mod => $memory_6,type => $memory_7,name => $memory_8,};
#line 751
undef($memory_6);
#line 751
undef($memory_7);
#line 751
undef($memory_8);
#line 751
$memory_7 = c_rt_lib::ov_mk_none('none');
#line 751
$memory_8 = tct::sim();
#line 751
$memory_9 = "";
#line 751
$memory_6 = {mod => $memory_7,type => $memory_8,name => $memory_9,};
#line 751
undef($memory_7);
#line 751
undef($memory_8);
#line 751
undef($memory_9);
#line 751
$memory_4 = [$memory_5,$memory_6];
#line 751
undef($memory_5);
#line 751
undef($memory_6);
#line 751
$memory_2 = {r => $memory_3,a => $memory_4,};
#line 751
undef($memory_3);
#line 751
undef($memory_4);
#line 751
hash::set_value($memory_0, $memory_1, $memory_2);
#line 751
undef($memory_2);
#line 751
undef($memory_1);
#line 755
$memory_1 = "ov::as";
#line 755
$memory_3 = tct::tct_im();
#line 755
$memory_6 = c_rt_lib::ov_mk_none('none');
#line 755
$memory_8 = {};
#line 755
$memory_7 = tct::var($memory_8);
#line 755
undef($memory_8);
#line 755
$memory_8 = "";
#line 755
$memory_5 = {mod => $memory_6,type => $memory_7,name => $memory_8,};
#line 755
undef($memory_6);
#line 755
undef($memory_7);
#line 755
undef($memory_8);
#line 755
$memory_7 = c_rt_lib::ov_mk_none('none');
#line 755
$memory_8 = tct::sim();
#line 755
$memory_9 = "";
#line 755
$memory_6 = {mod => $memory_7,type => $memory_8,name => $memory_9,};
#line 755
undef($memory_7);
#line 755
undef($memory_8);
#line 755
undef($memory_9);
#line 755
$memory_4 = [$memory_5,$memory_6];
#line 755
undef($memory_5);
#line 755
undef($memory_6);
#line 755
$memory_2 = {r => $memory_3,a => $memory_4,};
#line 755
undef($memory_3);
#line 755
undef($memory_4);
#line 755
hash::set_value($memory_0, $memory_1, $memory_2);
#line 755
undef($memory_2);
#line 755
undef($memory_1);
#line 760
$memory_1 = "dfile::ssave";
#line 760
$memory_3 = tct::sim();
#line 760
$memory_6 = c_rt_lib::ov_mk_none('none');
#line 760
$memory_7 = tct::tct_im();
#line 760
$memory_8 = "";
#line 760
$memory_5 = {mod => $memory_6,type => $memory_7,name => $memory_8,};
#line 760
undef($memory_6);
#line 760
undef($memory_7);
#line 760
undef($memory_8);
#line 760
$memory_4 = [$memory_5];
#line 760
undef($memory_5);
#line 760
$memory_2 = {r => $memory_3,a => $memory_4,};
#line 760
undef($memory_3);
#line 760
undef($memory_4);
#line 760
hash::set_value($memory_0, $memory_1, $memory_2);
#line 760
undef($memory_2);
#line 760
undef($memory_1);
#line 764
$memory_1 = "string::lf";
#line 764
$memory_3 = tct::sim();
#line 764
$memory_4 = [];
#line 764
$memory_2 = {r => $memory_3,a => $memory_4,};
#line 764
undef($memory_3);
#line 764
undef($memory_4);
#line 764
hash::set_value($memory_0, $memory_1, $memory_2);
#line 764
undef($memory_2);
#line 764
undef($memory_1);
#line 765
$memory_1 = "string::length";
#line 765
$memory_3 = tct::sim();
#line 765
$memory_6 = c_rt_lib::ov_mk_none('none');
#line 765
$memory_7 = tct::sim();
#line 765
$memory_8 = "";
#line 765
$memory_5 = {mod => $memory_6,type => $memory_7,name => $memory_8,};
#line 765
undef($memory_6);
#line 765
undef($memory_7);
#line 765
undef($memory_8);
#line 765
$memory_4 = [$memory_5];
#line 765
undef($memory_5);
#line 765
$memory_2 = {r => $memory_3,a => $memory_4,};
#line 765
undef($memory_3);
#line 765
undef($memory_4);
#line 765
hash::set_value($memory_0, $memory_1, $memory_2);
#line 765
undef($memory_2);
#line 765
undef($memory_1);
#line 768
$memory_1 = "string::substr";
#line 768
$memory_3 = tct::sim();
#line 768
$memory_6 = c_rt_lib::ov_mk_none('none');
#line 768
$memory_7 = tct::sim();
#line 768
$memory_8 = "";
#line 768
$memory_5 = {mod => $memory_6,type => $memory_7,name => $memory_8,};
#line 768
undef($memory_6);
#line 768
undef($memory_7);
#line 768
undef($memory_8);
#line 768
$memory_7 = c_rt_lib::ov_mk_none('none');
#line 768
$memory_8 = tct::sim();
#line 768
$memory_9 = "";
#line 768
$memory_6 = {mod => $memory_7,type => $memory_8,name => $memory_9,};
#line 768
undef($memory_7);
#line 768
undef($memory_8);
#line 768
undef($memory_9);
#line 768
$memory_8 = c_rt_lib::ov_mk_none('none');
#line 768
$memory_9 = tct::sim();
#line 768
$memory_10 = "";
#line 768
$memory_7 = {mod => $memory_8,type => $memory_9,name => $memory_10,};
#line 768
undef($memory_8);
#line 768
undef($memory_9);
#line 768
undef($memory_10);
#line 768
$memory_4 = [$memory_5,$memory_6,$memory_7];
#line 768
undef($memory_5);
#line 768
undef($memory_6);
#line 768
undef($memory_7);
#line 768
$memory_2 = {r => $memory_3,a => $memory_4,};
#line 768
undef($memory_3);
#line 768
undef($memory_4);
#line 768
hash::set_value($memory_0, $memory_1, $memory_2);
#line 768
undef($memory_2);
#line 768
undef($memory_1);
#line 773
$memory_1 = "string::replace";
#line 773
$memory_3 = tct::sim();
#line 773
$memory_6 = c_rt_lib::ov_mk_none('none');
#line 773
$memory_7 = tct::sim();
#line 773
$memory_8 = "";
#line 773
$memory_5 = {mod => $memory_6,type => $memory_7,name => $memory_8,};
#line 773
undef($memory_6);
#line 773
undef($memory_7);
#line 773
undef($memory_8);
#line 773
$memory_7 = c_rt_lib::ov_mk_none('none');
#line 773
$memory_8 = tct::sim();
#line 773
$memory_9 = "";
#line 773
$memory_6 = {mod => $memory_7,type => $memory_8,name => $memory_9,};
#line 773
undef($memory_7);
#line 773
undef($memory_8);
#line 773
undef($memory_9);
#line 773
$memory_8 = c_rt_lib::ov_mk_none('none');
#line 773
$memory_9 = tct::sim();
#line 773
$memory_10 = "";
#line 773
$memory_7 = {mod => $memory_8,type => $memory_9,name => $memory_10,};
#line 773
undef($memory_8);
#line 773
undef($memory_9);
#line 773
undef($memory_10);
#line 773
$memory_4 = [$memory_5,$memory_6,$memory_7];
#line 773
undef($memory_5);
#line 773
undef($memory_6);
#line 773
undef($memory_7);
#line 773
$memory_2 = {r => $memory_3,a => $memory_4,};
#line 773
undef($memory_3);
#line 773
undef($memory_4);
#line 773
hash::set_value($memory_0, $memory_1, $memory_2);
#line 773
undef($memory_2);
#line 773
undef($memory_1);
#line 778
$memory_1 = "string::chr";
#line 778
$memory_3 = tct::sim();
#line 778
$memory_6 = c_rt_lib::ov_mk_none('none');
#line 778
$memory_7 = tct::sim();
#line 778
$memory_8 = "";
#line 778
$memory_5 = {mod => $memory_6,type => $memory_7,name => $memory_8,};
#line 778
undef($memory_6);
#line 778
undef($memory_7);
#line 778
undef($memory_8);
#line 778
$memory_4 = [$memory_5];
#line 778
undef($memory_5);
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
#line 781
$memory_1 = "string::ord";
#line 781
$memory_3 = tct::sim();
#line 781
$memory_6 = c_rt_lib::ov_mk_none('none');
#line 781
$memory_7 = tct::sim();
#line 781
$memory_8 = "";
#line 781
$memory_5 = {mod => $memory_6,type => $memory_7,name => $memory_8,};
#line 781
undef($memory_6);
#line 781
undef($memory_7);
#line 781
undef($memory_8);
#line 781
$memory_4 = [$memory_5];
#line 781
undef($memory_5);
#line 781
$memory_2 = {r => $memory_3,a => $memory_4,};
#line 781
undef($memory_3);
#line 781
undef($memory_4);
#line 781
hash::set_value($memory_0, $memory_1, $memory_2);
#line 781
undef($memory_2);
#line 781
undef($memory_1);
#line 784
$memory_1 = "string::split";
#line 784
$memory_4 = tct::sim();
#line 784
$memory_3 = tct::arr($memory_4);
#line 784
undef($memory_4);
#line 784
$memory_6 = c_rt_lib::ov_mk_none('none');
#line 784
$memory_7 = tct::sim();
#line 784
$memory_8 = "";
#line 784
$memory_5 = {mod => $memory_6,type => $memory_7,name => $memory_8,};
#line 784
undef($memory_6);
#line 784
undef($memory_7);
#line 784
undef($memory_8);
#line 784
$memory_7 = c_rt_lib::ov_mk_none('none');
#line 784
$memory_8 = tct::sim();
#line 784
$memory_9 = "";
#line 784
$memory_6 = {mod => $memory_7,type => $memory_8,name => $memory_9,};
#line 784
undef($memory_7);
#line 784
undef($memory_8);
#line 784
undef($memory_9);
#line 784
$memory_4 = [$memory_5,$memory_6];
#line 784
undef($memory_5);
#line 784
undef($memory_6);
#line 784
$memory_2 = {r => $memory_3,a => $memory_4,};
#line 784
undef($memory_3);
#line 784
undef($memory_4);
#line 784
hash::set_value($memory_0, $memory_1, $memory_2);
#line 784
undef($memory_2);
#line 784
undef($memory_1);
#line 788
$memory_1 = "c_std_lib::fast_substr";
#line 788
$memory_3 = tct::sim();
#line 788
$memory_6 = c_rt_lib::ov_mk_none('none');
#line 788
$memory_7 = tct::tct_im();
#line 788
$memory_8 = "";
#line 788
$memory_5 = {mod => $memory_6,type => $memory_7,name => $memory_8,};
#line 788
undef($memory_6);
#line 788
undef($memory_7);
#line 788
undef($memory_8);
#line 788
$memory_7 = c_rt_lib::ov_mk_none('none');
#line 788
$memory_8 = tct::tct_im();
#line 788
$memory_9 = "";
#line 788
$memory_6 = {mod => $memory_7,type => $memory_8,name => $memory_9,};
#line 788
undef($memory_7);
#line 788
undef($memory_8);
#line 788
undef($memory_9);
#line 788
$memory_8 = c_rt_lib::ov_mk_none('none');
#line 788
$memory_9 = tct::tct_im();
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
#line 793
$memory_1 = "c_singleton::sigleton_do_not_use_without_approval";
#line 793
$memory_3 = tct::tct_im();
#line 793
$memory_6 = c_rt_lib::ov_mk_none('none');
#line 793
$memory_7 = tct::tct_im();
#line 793
$memory_8 = "";
#line 793
$memory_5 = {mod => $memory_6,type => $memory_7,name => $memory_8,};
#line 793
undef($memory_6);
#line 793
undef($memory_7);
#line 793
undef($memory_8);
#line 793
$memory_4 = [$memory_5];
#line 793
undef($memory_5);
#line 793
$memory_2 = {r => $memory_3,a => $memory_4,};
#line 793
undef($memory_3);
#line 793
undef($memory_4);
#line 793
hash::set_value($memory_0, $memory_1, $memory_2);
#line 793
undef($memory_2);
#line 793
undef($memory_1);
#line 796
$memory_1 = singleton::sigleton_do_not_use_without_approval($memory_0);
#line 796
undef($memory_0);
#line 796
return $memory_1;
#line 796
undef($memory_1);
#line 796
undef($memory_0);
#line 796
return;
}

my $_get_special_functions;
sub type_checker_priv::get_special_functions() {
	$_get_special_functions = type_checker_priv::__get_special_functions() unless defined $_get_special_functions;
	return $_get_special_functions;
}

sub type_checker_priv::get_special_function_def($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;$memory_0 = $_[0];$memory_1 = $_[1];
#line 799
$memory_2 = type_checker_priv::get_special_functions();
#line 800
$memory_5 = nast::empty_debug();
#line 800
$memory_6 = c_rt_lib::ov_mk_none('nop');
#line 800
$memory_4 = {debug => $memory_5,cmd => $memory_6,};
#line 800
undef($memory_5);
#line 800
undef($memory_6);
#line 800
$memory_5 = c_rt_lib::ov_mk_none('no');
#line 800
$memory_6 = c_rt_lib::ov_mk_none('no');
#line 800
$memory_7 = c_rt_lib::ov_mk_none('pub');
#line 800
$memory_8 = [];
#line 800
$memory_9 = tct::empty();
#line 800
$memory_3 = {cmd => $memory_4,is_type => $memory_5,ref_types => $memory_6,name => $memory_1,module => $memory_0,access => $memory_7,args => $memory_8,ret_type => $memory_9,};
#line 800
undef($memory_4);
#line 800
undef($memory_5);
#line 800
undef($memory_6);
#line 800
undef($memory_7);
#line 800
undef($memory_8);
#line 800
undef($memory_9);
#line 810
$memory_4 = type_checker_priv::get_function_name($memory_0, $memory_1);
#line 810
$memory_1 = $memory_4;
#line 810
undef($memory_4);
#line 811
$memory_4 = hash::has_key($memory_2, $memory_1);
#line 811
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 811
if (c_rt_lib::check_true($memory_4)) {goto label_2;}
#line 812
$memory_5 = hash::get_value($memory_2, $memory_1);
#line 813
$memory_6 = $memory_5->{'a'};
#line 813
$memory_7 = $memory_6;
#line 813
 if (c_rt_lib::get_hashcount($memory_3) > 1) {$memory_3 = {%{$memory_3}};}$memory_3->{'args'} = $memory_7;
#line 813
undef($memory_6);
#line 813
undef($memory_7);
#line 814
$memory_6 = $memory_5->{'r'};
#line 814
$memory_7 = $memory_6;
#line 814
 if (c_rt_lib::get_hashcount($memory_3) > 1) {$memory_3 = {%{$memory_3}};}$memory_3->{'ret_type'} = $memory_7;
#line 814
undef($memory_6);
#line 814
undef($memory_7);
#line 814
undef($memory_5);
#line 815
goto label_1;
#line 815
label_2:
#line 816
$memory_5 = c_rt_lib::ov_mk_none('priv');
#line 816
$memory_6 = $memory_5;
#line 816
 if (c_rt_lib::get_hashcount($memory_3) > 1) {$memory_3 = {%{$memory_3}};}$memory_3->{'access'} = $memory_6;
#line 816
undef($memory_5);
#line 816
undef($memory_6);
#line 817
goto label_1;
#line 817
label_1:
#line 817
undef($memory_4);
#line 818
undef($memory_0);
#line 818
undef($memory_1);
#line 818
undef($memory_2);
#line 818
return $memory_3;
#line 818
undef($memory_2);
#line 818
undef($memory_3);
#line 818
undef($memory_0);
#line 818
undef($memory_1);
#line 818
return;
}

sub type_checker_priv::check_special_function($$$$$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;my $memory_13;my $memory_14;$memory_0 = $_[0];$memory_1 = $_[1];$memory_2 = $_[2];$memory_3 = $_[3];Scalar::Util::weaken($_[3]) if ref($_[3]);$memory_4 = $_[4];Scalar::Util::weaken($_[4]) if ref($_[4]);$memory_5 = $_[5];Scalar::Util::weaken($_[5]) if ref($_[5]);
#line 822
$memory_7 = $memory_1->{'module'};
#line 822
$memory_8 = $memory_1->{'name'};
#line 822
$memory_6 = type_checker_priv::get_function_name($memory_7, $memory_8);
#line 822
undef($memory_8);
#line 822
undef($memory_7);
#line 824
$memory_7 = "ptd::ensure";
#line 824
$memory_7 = c_rt_lib::to_nl($memory_6 eq $memory_7);
#line 824
if (c_rt_lib::check_true($memory_7)) {goto label_3;}
#line 824
$memory_7 = "ptd::ensure_only_static_do_not_touch_without_permission";
#line 824
$memory_7 = c_rt_lib::to_nl($memory_6 eq $memory_7);
#line 824
label_3:
#line 824
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 824
if (c_rt_lib::check_true($memory_7)) {goto label_2;}
#line 825
$memory_9 = $memory_1->{'args'};
#line 825
$memory_10 = 0;
#line 825
$memory_9 = $memory_9->[$memory_10];
#line 825
undef($memory_10);
#line 825
$memory_9 = $memory_9->{'val'};
#line 825
$memory_8 = ptd_parser::try_value_to_ptd($memory_9);
#line 825
undef($memory_9);
#line 825
$memory_9 = c_rt_lib::ov_is($memory_8, 'err');
#line 825
if (c_rt_lib::check_true($memory_9)) {goto label_5;}
#line 828
$memory_9 = c_rt_lib::ov_is($memory_8, 'ok');
#line 828
if (c_rt_lib::check_true($memory_9)) {goto label_6;}
#line 828
$memory_9 = "NOMATCHALERT";
#line 828
$memory_9 = [$memory_9,$memory_8];
#line 828
die(dfile::ssave($memory_9));
#line 825
label_5:
#line 825
$memory_10 = c_rt_lib::ov_as($memory_8, 'err');
#line 826
type_checker_priv::add_error($memory_5, $memory_10);
#line 827
$memory_11 = tct::tct_im();
#line 827
$memory_12 = $memory_11;
#line 827
 if (c_rt_lib::get_hashcount($memory_0) > 1) {$memory_0 = {%{$memory_0}};}$memory_0->{'type'} = $memory_12;
#line 827
undef($memory_11);
#line 827
undef($memory_12);
#line 827
undef($memory_10);
#line 828
goto label_4;
#line 828
label_6:
#line 828
$memory_10 = c_rt_lib::ov_as($memory_8, 'ok');
#line 829
$memory_13 = 1;
#line 829
$memory_12 = $memory_2->[$memory_13];
#line 829
undef($memory_13);
#line 829
$memory_11 = ptd_system::cast_type($memory_10, $memory_12, $memory_3, $memory_5);
#line 829
undef($memory_12);
#line 830
$memory_13 = "err";
#line 830
$memory_12 = ov::is($memory_11, $memory_13);
#line 830
undef($memory_13);
#line 830
$memory_12 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_12));
#line 830
if (c_rt_lib::check_true($memory_12)) {goto label_8;}
#line 831
$memory_13 = "this casting of type cannot be correct: ";
#line 831
$memory_14 = type_checker_priv::get_print_check_info($memory_11);
#line 831
$memory_13 = $memory_13 . $memory_14;
#line 831
undef($memory_14);
#line 831
type_checker_priv::add_error($memory_5, $memory_13);
#line 831
undef($memory_13);
#line 832
goto label_8;
#line 832
label_8:
#line 832
undef($memory_12);
#line 833
$memory_12 = $memory_10;
#line 833
 if (c_rt_lib::get_hashcount($memory_0) > 1) {$memory_0 = {%{$memory_0}};}$memory_0->{'type'} = $memory_12;
#line 833
undef($memory_12);
#line 834
type_checker_priv::check_types_imported($memory_10, $memory_3, $memory_5);
#line 834
undef($memory_11);
#line 834
undef($memory_10);
#line 835
goto label_4;
#line 835
label_4:
#line 835
undef($memory_8);
#line 835
undef($memory_9);
#line 836
goto label_2;
#line 836
label_2:
#line 836
undef($memory_7);
#line 837
$memory_7 = "array::push";
#line 837
$memory_7 = c_rt_lib::to_nl($memory_6 eq $memory_7);
#line 837
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 837
if (c_rt_lib::check_true($memory_7)) {goto label_10;}
#line 838
$memory_10 = 1;
#line 838
$memory_9 = $memory_2->[$memory_10];
#line 838
undef($memory_10);
#line 838
$memory_9 = $memory_9->{'type'};
#line 838
$memory_8 = tct::arr($memory_9);
#line 838
undef($memory_9);
#line 838
$memory_10 = 1;
#line 838
$memory_9 = c_rt_lib::get_ref_arr($memory_2, $memory_10);
#line 838
$memory_11 = $memory_8;
#line 838
 if (c_rt_lib::get_hashcount($memory_9) > 1) {$memory_9 = {%{$memory_9}};}$memory_9->{'type'} = $memory_11;
#line 838
c_rt_lib::set_ref_arr($memory_2, $memory_10, $memory_9);
#line 838
undef($memory_8);
#line 838
undef($memory_9);
#line 838
undef($memory_10);
#line 838
undef($memory_11);
#line 839
$memory_8 = $memory_1->{'args'};
#line 839
$memory_9 = 0;
#line 839
$memory_8 = $memory_8->[$memory_9];
#line 839
undef($memory_9);
#line 839
$memory_8 = $memory_8->{'val'};
#line 839
$memory_10 = 0;
#line 839
$memory_9 = $memory_2->[$memory_10];
#line 839
undef($memory_10);
#line 839
$memory_11 = 1;
#line 839
$memory_10 = $memory_2->[$memory_11];
#line 839
undef($memory_11);
#line 839
$memory_12 = tct::empty();
#line 839
$memory_11 = tct::arr($memory_12);
#line 839
undef($memory_12);
#line 839
type_checker_priv::set_type_to_lval_spec($memory_8, $memory_9, $memory_10, $memory_11, $memory_3, $memory_4, $memory_5);
#line 839
undef($memory_11);
#line 839
undef($memory_10);
#line 839
undef($memory_9);
#line 839
undef($memory_8);
#line 841
goto label_10;
#line 841
label_10:
#line 841
undef($memory_7);
#line 842
$memory_7 = "array::append";
#line 842
$memory_7 = c_rt_lib::to_nl($memory_6 eq $memory_7);
#line 842
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 842
if (c_rt_lib::check_true($memory_7)) {goto label_12;}
#line 843
$memory_8 = $memory_1->{'args'};
#line 843
$memory_9 = 0;
#line 843
$memory_8 = $memory_8->[$memory_9];
#line 843
undef($memory_9);
#line 843
$memory_8 = $memory_8->{'val'};
#line 843
$memory_10 = 0;
#line 843
$memory_9 = $memory_2->[$memory_10];
#line 843
undef($memory_10);
#line 843
$memory_11 = 1;
#line 843
$memory_10 = $memory_2->[$memory_11];
#line 843
undef($memory_11);
#line 843
$memory_12 = tct::empty();
#line 843
$memory_11 = tct::arr($memory_12);
#line 843
undef($memory_12);
#line 843
type_checker_priv::set_type_to_lval_spec($memory_8, $memory_9, $memory_10, $memory_11, $memory_3, $memory_4, $memory_5);
#line 843
undef($memory_11);
#line 843
undef($memory_10);
#line 843
undef($memory_9);
#line 843
undef($memory_8);
#line 845
goto label_12;
#line 845
label_12:
#line 845
undef($memory_7);
#line 846
$memory_7 = "array::subarray";
#line 846
$memory_7 = c_rt_lib::to_nl($memory_6 eq $memory_7);
#line 846
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 846
if (c_rt_lib::check_true($memory_7)) {goto label_14;}
#line 847
$memory_9 = 0;
#line 847
$memory_8 = $memory_2->[$memory_9];
#line 847
undef($memory_9);
#line 847
undef($memory_0);
#line 847
undef($memory_1);
#line 847
undef($memory_2);
#line 847
undef($memory_6);
#line 847
undef($memory_7);
#line 847
$_[3] = $memory_3;$_[4] = $memory_4;$_[5] = $memory_5;return $memory_8;
#line 847
undef($memory_8);
#line 848
goto label_14;
#line 848
label_14:
#line 848
undef($memory_7);
#line 850
$memory_7 = "hash::set_value";
#line 850
$memory_7 = c_rt_lib::to_nl($memory_6 eq $memory_7);
#line 850
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 850
if (c_rt_lib::check_true($memory_7)) {goto label_16;}
#line 851
$memory_10 = 2;
#line 851
$memory_9 = $memory_2->[$memory_10];
#line 851
undef($memory_10);
#line 851
$memory_9 = $memory_9->{'type'};
#line 851
$memory_8 = tct::hash($memory_9);
#line 851
undef($memory_9);
#line 851
$memory_10 = 2;
#line 851
$memory_9 = c_rt_lib::get_ref_arr($memory_2, $memory_10);
#line 851
$memory_11 = $memory_8;
#line 851
 if (c_rt_lib::get_hashcount($memory_9) > 1) {$memory_9 = {%{$memory_9}};}$memory_9->{'type'} = $memory_11;
#line 851
c_rt_lib::set_ref_arr($memory_2, $memory_10, $memory_9);
#line 851
undef($memory_8);
#line 851
undef($memory_9);
#line 851
undef($memory_10);
#line 851
undef($memory_11);
#line 852
$memory_8 = $memory_1->{'args'};
#line 852
$memory_9 = 0;
#line 852
$memory_8 = $memory_8->[$memory_9];
#line 852
undef($memory_9);
#line 852
$memory_8 = $memory_8->{'val'};
#line 852
$memory_10 = 0;
#line 852
$memory_9 = $memory_2->[$memory_10];
#line 852
undef($memory_10);
#line 852
$memory_11 = 2;
#line 852
$memory_10 = $memory_2->[$memory_11];
#line 852
undef($memory_11);
#line 852
$memory_12 = {};
#line 852
$memory_11 = tct::rec($memory_12);
#line 852
undef($memory_12);
#line 852
type_checker_priv::set_type_to_lval_spec($memory_8, $memory_9, $memory_10, $memory_11, $memory_3, $memory_4, $memory_5);
#line 852
undef($memory_11);
#line 852
undef($memory_10);
#line 852
undef($memory_9);
#line 852
undef($memory_8);
#line 854
goto label_16;
#line 854
label_16:
#line 854
undef($memory_7);
#line 855
$memory_7 = "hash::delete";
#line 855
$memory_7 = c_rt_lib::to_nl($memory_6 eq $memory_7);
#line 855
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 855
if (c_rt_lib::check_true($memory_7)) {goto label_18;}
#line 856
$memory_10 = 0;
#line 856
$memory_9 = $memory_2->[$memory_10];
#line 856
undef($memory_10);
#line 856
$memory_8 = ptd_system::can_delete($memory_9, $memory_3, $memory_5);
#line 856
undef($memory_9);
#line 857
$memory_9 = $memory_8->{'type'};
#line 857
$memory_9 = c_rt_lib::ov_is($memory_9, 'tct_rec');
#line 857
$memory_9 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_9));
#line 857
if (c_rt_lib::check_true($memory_9)) {goto label_20;}
#line 858
$memory_10 = $memory_8;
#line 859
$memory_13 = tct::empty();
#line 859
$memory_12 = tct::hash($memory_13);
#line 859
undef($memory_13);
#line 859
$memory_13 = $memory_8->{'type'};
#line 859
$memory_11 = ptd_system::cross_type($memory_12, $memory_13, $memory_3, $memory_5);
#line 859
undef($memory_13);
#line 859
undef($memory_12);
#line 859
$memory_12 = $memory_11;
#line 859
 if (c_rt_lib::get_hashcount($memory_10) > 1) {$memory_10 = {%{$memory_10}};}$memory_10->{'type'} = $memory_12;
#line 859
undef($memory_11);
#line 859
undef($memory_12);
#line 860
$memory_11 = $memory_1->{'args'};
#line 860
$memory_12 = 0;
#line 860
$memory_11 = $memory_11->[$memory_12];
#line 860
undef($memory_12);
#line 860
$memory_11 = $memory_11->{'val'};
#line 860
$memory_13 = {};
#line 860
$memory_12 = tct::rec($memory_13);
#line 860
undef($memory_13);
#line 860
type_checker_priv::set_type_to_lval_spec($memory_11, $memory_8, $memory_10, $memory_12, $memory_3, $memory_4, $memory_5);
#line 860
undef($memory_12);
#line 860
undef($memory_11);
#line 860
undef($memory_10);
#line 861
goto label_20;
#line 861
label_20:
#line 861
undef($memory_9);
#line 861
undef($memory_8);
#line 862
goto label_18;
#line 862
label_18:
#line 862
undef($memory_7);
#line 863
$memory_7 = "hash::get_value";
#line 863
$memory_7 = c_rt_lib::to_nl($memory_6 eq $memory_7);
#line 863
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 863
if (c_rt_lib::check_true($memory_7)) {goto label_22;}
#line 864
$memory_10 = 0;
#line 864
$memory_9 = $memory_2->[$memory_10];
#line 864
undef($memory_10);
#line 864
$memory_8 = ptd_system::can_delete($memory_9, $memory_3, $memory_5);
#line 864
undef($memory_9);
#line 865
$memory_9 = $memory_8->{'src'};
#line 865
$memory_10 = $memory_9;
#line 865
 if (c_rt_lib::get_hashcount($memory_0) > 1) {$memory_0 = {%{$memory_0}};}$memory_0->{'src'} = $memory_10;
#line 865
undef($memory_9);
#line 865
undef($memory_10);
#line 866
$memory_9 = $memory_8->{'type'};
#line 866
$memory_9 = c_rt_lib::ov_is($memory_9, 'tct_hash');
#line 866
$memory_9 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_9));
#line 866
if (c_rt_lib::check_true($memory_9)) {goto label_24;}
#line 866
$memory_10 = $memory_8->{'type'};
#line 866
$memory_10 = c_rt_lib::ov_as($memory_10, 'tct_hash');
#line 866
$memory_11 = $memory_10;
#line 866
 if (c_rt_lib::get_hashcount($memory_0) > 1) {$memory_0 = {%{$memory_0}};}$memory_0->{'type'} = $memory_11;
#line 866
undef($memory_10);
#line 866
undef($memory_11);
#line 866
goto label_24;
#line 866
label_24:
#line 866
undef($memory_9);
#line 866
undef($memory_8);
#line 867
goto label_22;
#line 867
label_22:
#line 867
undef($memory_7);
#line 868
$memory_7 = "hash::values";
#line 868
$memory_7 = c_rt_lib::to_nl($memory_6 eq $memory_7);
#line 868
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 868
if (c_rt_lib::check_true($memory_7)) {goto label_26;}
#line 869
$memory_10 = 0;
#line 869
$memory_9 = $memory_2->[$memory_10];
#line 869
undef($memory_10);
#line 869
$memory_8 = ptd_system::can_delete($memory_9, $memory_3, $memory_5);
#line 869
undef($memory_9);
#line 870
$memory_9 = $memory_8->{'src'};
#line 870
$memory_10 = $memory_9;
#line 870
 if (c_rt_lib::get_hashcount($memory_0) > 1) {$memory_0 = {%{$memory_0}};}$memory_0->{'src'} = $memory_10;
#line 870
undef($memory_9);
#line 870
undef($memory_10);
#line 871
$memory_9 = $memory_8->{'type'};
#line 871
$memory_9 = c_rt_lib::ov_is($memory_9, 'tct_hash');
#line 871
$memory_9 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_9));
#line 871
if (c_rt_lib::check_true($memory_9)) {goto label_28;}
#line 871
$memory_11 = $memory_8->{'type'};
#line 871
$memory_11 = c_rt_lib::ov_as($memory_11, 'tct_hash');
#line 871
$memory_10 = tct::arr($memory_11);
#line 871
undef($memory_11);
#line 871
$memory_11 = $memory_10;
#line 871
 if (c_rt_lib::get_hashcount($memory_0) > 1) {$memory_0 = {%{$memory_0}};}$memory_0->{'type'} = $memory_11;
#line 871
undef($memory_10);
#line 871
undef($memory_11);
#line 871
goto label_28;
#line 871
label_28:
#line 871
undef($memory_9);
#line 871
undef($memory_8);
#line 872
goto label_26;
#line 872
label_26:
#line 872
undef($memory_7);
#line 873
$memory_7 = "ov::as";
#line 873
$memory_7 = c_rt_lib::to_nl($memory_6 eq $memory_7);
#line 873
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 873
if (c_rt_lib::check_true($memory_7)) {goto label_30;}
#line 874
$memory_8 = tct::tct_im();
#line 874
$memory_10 = 0;
#line 874
$memory_9 = $memory_2->[$memory_10];
#line 874
undef($memory_10);
#line 874
ptd_system::check_assignment($memory_8, $memory_9, $memory_3, $memory_5);
#line 874
undef($memory_9);
#line 874
undef($memory_8);
#line 875
goto label_30;
#line 875
label_30:
#line 875
undef($memory_7);
#line 876
$memory_7 = "dfile::ssave";
#line 876
$memory_7 = c_rt_lib::to_nl($memory_6 eq $memory_7);
#line 876
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 876
if (c_rt_lib::check_true($memory_7)) {goto label_32;}
#line 877
$memory_8 = tct::tct_im();
#line 877
$memory_10 = 0;
#line 877
$memory_9 = $memory_2->[$memory_10];
#line 877
undef($memory_10);
#line 877
ptd_system::check_assignment($memory_8, $memory_9, $memory_3, $memory_5);
#line 877
undef($memory_9);
#line 877
undef($memory_8);
#line 878
goto label_32;
#line 878
label_32:
#line 878
undef($memory_7);
#line 879
$memory_7 = "singleton::sigleton_do_not_use_without_approval";
#line 879
$memory_7 = c_rt_lib::to_nl($memory_6 eq $memory_7);
#line 879
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 879
if (c_rt_lib::check_true($memory_7)) {goto label_34;}
#line 880
$memory_9 = 0;
#line 880
$memory_8 = $memory_2->[$memory_9];
#line 880
undef($memory_9);
#line 880
undef($memory_0);
#line 880
undef($memory_1);
#line 880
undef($memory_2);
#line 880
undef($memory_6);
#line 880
undef($memory_7);
#line 880
$_[3] = $memory_3;$_[4] = $memory_4;$_[5] = $memory_5;return $memory_8;
#line 880
undef($memory_8);
#line 881
goto label_34;
#line 881
label_34:
#line 881
undef($memory_7);
#line 883
undef($memory_1);
#line 883
undef($memory_2);
#line 883
undef($memory_6);
#line 883
$_[3] = $memory_3;$_[4] = $memory_4;$_[5] = $memory_5;return $memory_0;
#line 883
undef($memory_6);
#line 883
undef($memory_0);
#line 883
undef($memory_1);
#line 883
undef($memory_2);
#line 883
$_[3] = $memory_3;$_[4] = $memory_4;$_[5] = $memory_5;return;
$_[3] = $memory_3;$_[4] = $memory_4;$_[5] = $memory_5;}

sub type_checker_priv::rec_get_var_from_lval($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;$memory_0 = $_[0];$memory_1 = $_[1];Scalar::Util::weaken($_[1]) if ref($_[1]);
#line 887
$memory_2 = [];
#line 888
$memory_4 = "var";
#line 888
$memory_3 = ov::is($memory_0, $memory_4);
#line 888
undef($memory_4);
#line 888
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 888
if (c_rt_lib::check_true($memory_3)) {goto label_2;}
#line 889
$memory_4 = $memory_0;
#line 889
$memory_4 = c_rt_lib::ov_as($memory_4, 'var');
#line 890
$memory_5 = c_rt_lib::ov_mk_arg('var', $memory_4);
#line 890
array::push($memory_2, $memory_5);
#line 890
undef($memory_5);
#line 890
undef($memory_4);
#line 891
goto label_1;
#line 891
label_2:
#line 891
$memory_4 = "bin_op";
#line 891
$memory_3 = ov::is($memory_0, $memory_4);
#line 891
undef($memory_4);
#line 891
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 891
if (c_rt_lib::check_true($memory_3)) {goto label_3;}
#line 892
$memory_4 = $memory_0;
#line 892
$memory_4 = c_rt_lib::ov_as($memory_4, 'bin_op');
#line 893
$memory_5 = $memory_4->{'op'};
#line 893
$memory_6 = "->";
#line 893
$memory_5 = c_rt_lib::to_nl($memory_5 eq $memory_6);
#line 893
undef($memory_6);
#line 893
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 893
if (c_rt_lib::check_true($memory_5)) {goto label_5;}
#line 894
$memory_7 = $memory_4->{'left'};
#line 894
$memory_6 = type_checker_priv::rec_get_var_from_lval($memory_7, $memory_1);
#line 894
undef($memory_7);
#line 894
$memory_2 = $memory_6;
#line 894
undef($memory_6);
#line 895
$memory_6 = $memory_4->{'right'};
#line 895
$memory_6 = c_rt_lib::ov_as($memory_6, 'hash_key');
#line 895
$memory_6 = c_rt_lib::ov_mk_arg('rec', $memory_6);
#line 895
array::push($memory_2, $memory_6);
#line 895
undef($memory_6);
#line 896
goto label_4;
#line 896
label_5:
#line 896
$memory_5 = $memory_4->{'op'};
#line 896
$memory_6 = "ARRAY_INDEX";
#line 896
$memory_5 = c_rt_lib::to_nl($memory_5 eq $memory_6);
#line 896
undef($memory_6);
#line 896
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 896
if (c_rt_lib::check_true($memory_5)) {goto label_6;}
#line 897
$memory_7 = $memory_4->{'left'};
#line 897
$memory_6 = type_checker_priv::rec_get_var_from_lval($memory_7, $memory_1);
#line 897
undef($memory_7);
#line 897
$memory_2 = $memory_6;
#line 897
undef($memory_6);
#line 898
$memory_6 = c_rt_lib::ov_mk_none('arr');
#line 898
array::push($memory_2, $memory_6);
#line 898
undef($memory_6);
#line 899
goto label_4;
#line 899
label_6:
#line 900
$memory_6 = "invalid operator ";
#line 900
$memory_7 = $memory_4->{'op'};
#line 900
$memory_6 = $memory_6 . $memory_7;
#line 900
undef($memory_7);
#line 900
$memory_7 = " used in lvalue";
#line 900
$memory_6 = $memory_6 . $memory_7;
#line 900
undef($memory_7);
#line 900
type_checker_priv::add_error($memory_1, $memory_6);
#line 900
undef($memory_6);
#line 901
goto label_4;
#line 901
label_4:
#line 901
undef($memory_5);
#line 901
undef($memory_4);
#line 903
goto label_1;
#line 903
label_3:
#line 904
$memory_4 = "invalid type for lvalue";
#line 904
type_checker_priv::add_error($memory_1, $memory_4);
#line 904
undef($memory_4);
#line 905
goto label_1;
#line 905
label_1:
#line 905
undef($memory_3);
#line 907
undef($memory_0);
#line 907
$_[1] = $memory_1;return $memory_2;
#line 907
undef($memory_2);
#line 907
undef($memory_0);
#line 907
$_[1] = $memory_1;return;
$_[1] = $memory_1;}

sub type_checker_priv::mk_new_type_lval($$$$$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;my $memory_13;$memory_0 = $_[0];$memory_1 = $_[1];$memory_2 = $_[2];$memory_3 = $_[3];$memory_4 = $_[4];Scalar::Util::weaken($_[4]) if ref($_[4]);$memory_5 = $_[5];Scalar::Util::weaken($_[5]) if ref($_[5]);
#line 912
$memory_7 = 1;
#line 912
$memory_8 = array::len($memory_0);
#line 912
$memory_9 = 1;
#line 912
$memory_8 = $memory_8 - $memory_9;
#line 912
undef($memory_9);
#line 912
$memory_6 = array::subarray($memory_0, $memory_7, $memory_8);
#line 912
undef($memory_8);
#line 912
undef($memory_7);
#line 912
$memory_0 = $memory_6;
#line 912
undef($memory_6);
#line 913
$memory_6 = array::len($memory_0);
#line 913
$memory_7 = 0;
#line 913
$memory_6 = c_rt_lib::to_nl($memory_6 == $memory_7);
#line 913
undef($memory_7);
#line 913
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 913
if (c_rt_lib::check_true($memory_6)) {goto label_2;}
#line 914
$memory_7 = type_checker_priv::is_known($memory_2);
#line 914
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 914
if (c_rt_lib::check_true($memory_7)) {goto label_4;}
#line 915
$memory_9 = $memory_2->{'type'};
#line 915
$memory_8 = ptd_system::check_assignment($memory_9, $memory_1, $memory_4, $memory_5);
#line 915
undef($memory_9);
#line 916
$memory_10 = "err";
#line 916
$memory_9 = ov::is($memory_8, $memory_10);
#line 916
undef($memory_10);
#line 916
$memory_9 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_9));
#line 916
if (c_rt_lib::check_true($memory_9)) {goto label_6;}
#line 917
$memory_10 = "invalid type in assignment: ";
#line 917
$memory_11 = type_checker_priv::get_print_check_info($memory_8);
#line 917
$memory_10 = $memory_10 . $memory_11;
#line 917
undef($memory_11);
#line 917
type_checker_priv::add_error($memory_5, $memory_10);
#line 917
undef($memory_10);
#line 918
goto label_6;
#line 918
label_6:
#line 918
undef($memory_9);
#line 919
$memory_9 = $memory_2->{'type'};
#line 919
undef($memory_0);
#line 919
undef($memory_1);
#line 919
undef($memory_2);
#line 919
undef($memory_3);
#line 919
undef($memory_6);
#line 919
undef($memory_7);
#line 919
undef($memory_8);
#line 919
$_[4] = $memory_4;$_[5] = $memory_5;return $memory_9;
#line 919
undef($memory_9);
#line 919
undef($memory_8);
#line 920
goto label_3;
#line 920
label_4:
#line 921
$memory_8 = tct::tct_im();
#line 921
ptd_system::check_assignment($memory_8, $memory_1, $memory_4, $memory_5);
#line 921
undef($memory_8);
#line 922
$memory_8 = ptd_system::can_create($memory_2, $memory_4, $memory_5);
#line 922
$memory_2 = $memory_8;
#line 922
undef($memory_8);
#line 923
$memory_9 = $memory_2->{'type'};
#line 923
$memory_8 = ptd_system::is_equal($memory_9, $memory_3);
#line 923
undef($memory_9);
#line 923
$memory_8 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 923
if (c_rt_lib::check_true($memory_8)) {goto label_8;}
#line 923
$memory_9 = $memory_1->{'type'};
#line 923
undef($memory_0);
#line 923
undef($memory_1);
#line 923
undef($memory_2);
#line 923
undef($memory_3);
#line 923
undef($memory_6);
#line 923
undef($memory_7);
#line 923
undef($memory_8);
#line 923
$_[4] = $memory_4;$_[5] = $memory_5;return $memory_9;
#line 923
undef($memory_9);
#line 923
goto label_8;
#line 923
label_8:
#line 923
undef($memory_8);
#line 924
$memory_9 = $memory_2->{'type'};
#line 924
$memory_10 = $memory_1->{'type'};
#line 924
$memory_8 = ptd_system::cross_type($memory_9, $memory_10, $memory_4, $memory_5);
#line 924
undef($memory_10);
#line 924
undef($memory_9);
#line 924
undef($memory_0);
#line 924
undef($memory_1);
#line 924
undef($memory_2);
#line 924
undef($memory_3);
#line 924
undef($memory_6);
#line 924
undef($memory_7);
#line 924
$_[4] = $memory_4;$_[5] = $memory_5;return $memory_8;
#line 924
undef($memory_8);
#line 925
goto label_3;
#line 925
label_3:
#line 925
undef($memory_7);
#line 926
goto label_1;
#line 926
label_2:
#line 927
$memory_7 = ptd_system::can_create($memory_2, $memory_4, $memory_5);
#line 927
$memory_2 = $memory_7;
#line 927
undef($memory_7);
#line 928
$memory_8 = 0;
#line 928
$memory_7 = $memory_0->[$memory_8];
#line 928
undef($memory_8);
#line 928
$memory_8 = c_rt_lib::ov_is($memory_7, 'var');
#line 928
if (c_rt_lib::check_true($memory_8)) {goto label_10;}
#line 930
$memory_8 = c_rt_lib::ov_is($memory_7, 'arr');
#line 930
if (c_rt_lib::check_true($memory_8)) {goto label_11;}
#line 934
$memory_8 = c_rt_lib::ov_is($memory_7, 'rec');
#line 934
if (c_rt_lib::check_true($memory_8)) {goto label_12;}
#line 934
$memory_8 = "NOMATCHALERT";
#line 934
$memory_8 = [$memory_8,$memory_7];
#line 934
die(dfile::ssave($memory_8));
#line 928
label_10:
#line 928
$memory_9 = c_rt_lib::ov_as($memory_7, 'var');
#line 929
$memory_10 = [$memory_0];
#line 929
die(dfile::ssave($memory_10));
#line 929
undef($memory_10);
#line 929
undef($memory_9);
#line 930
goto label_9;
#line 930
label_11:
#line 931
$memory_10 = $memory_2->{'type'};
#line 931
$memory_11 = "tct_arr";
#line 931
$memory_9 = ov::is($memory_10, $memory_11);
#line 931
undef($memory_11);
#line 931
undef($memory_10);
#line 931
$memory_9 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_9));
#line 931
$memory_9 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_9));
#line 931
if (c_rt_lib::check_true($memory_9)) {goto label_14;}
#line 931
$memory_10 = tct::tct_im();
#line 931
undef($memory_0);
#line 931
undef($memory_1);
#line 931
undef($memory_2);
#line 931
undef($memory_3);
#line 931
undef($memory_6);
#line 931
undef($memory_7);
#line 931
undef($memory_8);
#line 931
undef($memory_9);
#line 931
$_[4] = $memory_4;$_[5] = $memory_5;return $memory_10;
#line 931
undef($memory_10);
#line 931
goto label_14;
#line 931
label_14:
#line 931
undef($memory_9);
#line 932
$memory_9 = $memory_2->{'type'};
#line 932
$memory_9 = c_rt_lib::ov_as($memory_9, 'tct_arr');
#line 932
$memory_10 = $memory_9;
#line 932
 if (c_rt_lib::get_hashcount($memory_2) > 1) {$memory_2 = {%{$memory_2}};}$memory_2->{'type'} = $memory_10;
#line 932
undef($memory_9);
#line 932
undef($memory_10);
#line 933
$memory_10 = type_checker_priv::mk_new_type_lval($memory_0, $memory_1, $memory_2, $memory_3, $memory_4, $memory_5);
#line 933
$memory_9 = tct::arr($memory_10);
#line 933
undef($memory_10);
#line 933
undef($memory_0);
#line 933
undef($memory_1);
#line 933
undef($memory_2);
#line 933
undef($memory_3);
#line 933
undef($memory_6);
#line 933
undef($memory_7);
#line 933
undef($memory_8);
#line 933
$_[4] = $memory_4;$_[5] = $memory_5;return $memory_9;
#line 933
undef($memory_9);
#line 934
goto label_9;
#line 934
label_12:
#line 934
$memory_9 = c_rt_lib::ov_as($memory_7, 'rec');
#line 935
$memory_11 = $memory_2->{'type'};
#line 935
$memory_12 = "tct_rec";
#line 935
$memory_10 = ov::is($memory_11, $memory_12);
#line 935
undef($memory_12);
#line 935
undef($memory_11);
#line 935
$memory_10 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_10));
#line 935
$memory_10 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_10));
#line 935
if (c_rt_lib::check_true($memory_10)) {goto label_16;}
#line 935
$memory_11 = tct::tct_im();
#line 935
undef($memory_0);
#line 935
undef($memory_1);
#line 935
undef($memory_2);
#line 935
undef($memory_3);
#line 935
undef($memory_6);
#line 935
undef($memory_7);
#line 935
undef($memory_8);
#line 935
undef($memory_9);
#line 935
undef($memory_10);
#line 935
$_[4] = $memory_4;$_[5] = $memory_5;return $memory_11;
#line 935
undef($memory_11);
#line 935
goto label_16;
#line 935
label_16:
#line 935
undef($memory_10);
#line 936
$memory_10 = $memory_2->{'type'};
#line 936
$memory_10 = c_rt_lib::ov_as($memory_10, 'tct_rec');
#line 937
$memory_11 = hash::has_key($memory_10, $memory_9);
#line 937
$memory_11 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_11));
#line 937
if (c_rt_lib::check_true($memory_11)) {goto label_18;}
#line 938
$memory_12 = hash::get_value($memory_10, $memory_9);
#line 938
$memory_13 = $memory_12;
#line 938
 if (c_rt_lib::get_hashcount($memory_2) > 1) {$memory_2 = {%{$memory_2}};}$memory_2->{'type'} = $memory_13;
#line 938
undef($memory_12);
#line 938
undef($memory_13);
#line 939
$memory_12 = type_checker_priv::mk_new_type_lval($memory_0, $memory_1, $memory_2, $memory_3, $memory_4, $memory_5);
#line 939
hash::set_value($memory_10, $memory_9, $memory_12);
#line 939
undef($memory_12);
#line 940
goto label_17;
#line 940
label_18:
#line 941
$memory_12 = array::len($memory_0);
#line 941
$memory_13 = 1;
#line 941
$memory_12 = c_rt_lib::to_nl($memory_12 != $memory_13);
#line 941
undef($memory_13);
#line 941
$memory_12 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_12));
#line 941
if (c_rt_lib::check_true($memory_12)) {goto label_20;}
#line 942
$memory_13 = tct::tct_im();
#line 942
undef($memory_0);
#line 942
undef($memory_1);
#line 942
undef($memory_2);
#line 942
undef($memory_3);
#line 942
undef($memory_6);
#line 942
undef($memory_7);
#line 942
undef($memory_8);
#line 942
undef($memory_9);
#line 942
undef($memory_10);
#line 942
undef($memory_11);
#line 942
undef($memory_12);
#line 942
$_[4] = $memory_4;$_[5] = $memory_5;return $memory_13;
#line 942
undef($memory_13);
#line 943
goto label_20;
#line 943
label_20:
#line 943
undef($memory_12);
#line 944
$memory_12 = tct::tct_im();
#line 944
ptd_system::check_assignment($memory_12, $memory_1, $memory_4, $memory_5);
#line 944
undef($memory_12);
#line 945
$memory_12 = $memory_1->{'type'};
#line 945
hash::set_value($memory_10, $memory_9, $memory_12);
#line 945
undef($memory_12);
#line 946
goto label_17;
#line 946
label_17:
#line 946
undef($memory_11);
#line 948
$memory_11 = tct::rec($memory_10);
#line 948
undef($memory_0);
#line 948
undef($memory_1);
#line 948
undef($memory_2);
#line 948
undef($memory_3);
#line 948
undef($memory_6);
#line 948
undef($memory_7);
#line 948
undef($memory_8);
#line 948
undef($memory_9);
#line 948
undef($memory_10);
#line 948
$_[4] = $memory_4;$_[5] = $memory_5;return $memory_11;
#line 948
undef($memory_11);
#line 948
undef($memory_10);
#line 948
undef($memory_9);
#line 949
goto label_9;
#line 949
label_9:
#line 949
undef($memory_7);
#line 949
undef($memory_8);
#line 950
goto label_1;
#line 950
label_1:
#line 950
undef($memory_6);
#line 950
undef($memory_0);
#line 950
undef($memory_1);
#line 950
undef($memory_2);
#line 950
undef($memory_3);
#line 950
$_[4] = $memory_4;$_[5] = $memory_5;return;
$_[4] = $memory_4;$_[5] = $memory_5;}

sub type_checker_priv::set_type_to_lval($$$$$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;$memory_0 = $_[0];$memory_1 = $_[1];$memory_2 = $_[2];$memory_3 = $_[3];Scalar::Util::weaken($_[3]) if ref($_[3]);$memory_4 = $_[4];Scalar::Util::weaken($_[4]) if ref($_[4]);$memory_5 = $_[5];Scalar::Util::weaken($_[5]) if ref($_[5]);
#line 954
$memory_7 = $memory_1->{'type'};
#line 954
$memory_6 = type_checker_priv::set_type_to_lval_spec($memory_0, $memory_1, $memory_2, $memory_7, $memory_3, $memory_4, $memory_5);
#line 954
undef($memory_7);
#line 954
undef($memory_0);
#line 954
undef($memory_1);
#line 954
undef($memory_2);
#line 954
$_[3] = $memory_3;$_[4] = $memory_4;$_[5] = $memory_5;return $memory_6;
#line 954
undef($memory_6);
#line 954
undef($memory_0);
#line 954
undef($memory_1);
#line 954
undef($memory_2);
#line 954
$_[3] = $memory_3;$_[4] = $memory_4;$_[5] = $memory_5;return;
$_[3] = $memory_3;$_[4] = $memory_4;$_[5] = $memory_5;}

sub type_checker_priv::set_type_to_lval_spec($$$$$$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;my $memory_13;my $memory_14;my $memory_15;my $memory_16;$memory_0 = $_[0];$memory_1 = $_[1];$memory_2 = $_[2];$memory_3 = $_[3];$memory_4 = $_[4];Scalar::Util::weaken($_[4]) if ref($_[4]);$memory_5 = $_[5];Scalar::Util::weaken($_[5]) if ref($_[5]);$memory_6 = $_[6];Scalar::Util::weaken($_[6]) if ref($_[6]);
#line 959
$memory_8 = $memory_6->{'errors'};
#line 959
$memory_7 = array::len($memory_8);
#line 959
undef($memory_8);
#line 960
$memory_8 = type_checker_priv::rec_get_var_from_lval($memory_0, $memory_6);
#line 961
$memory_10 = $memory_6->{'errors'};
#line 961
$memory_9 = array::len($memory_10);
#line 961
undef($memory_10);
#line 961
$memory_9 = c_rt_lib::to_nl($memory_7 != $memory_9);
#line 961
$memory_9 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_9));
#line 961
if (c_rt_lib::check_true($memory_9)) {goto label_2;}
#line 961
undef($memory_0);
#line 961
undef($memory_2);
#line 961
undef($memory_3);
#line 961
undef($memory_7);
#line 961
undef($memory_8);
#line 961
undef($memory_9);
#line 961
$_[4] = $memory_4;$_[5] = $memory_5;$_[6] = $memory_6;return $memory_1;
#line 961
goto label_2;
#line 961
label_2:
#line 961
undef($memory_9);
#line 962
$memory_11 = 0;
#line 962
$memory_10 = $memory_8->[$memory_11];
#line 962
undef($memory_11);
#line 962
$memory_11 = "var";
#line 962
$memory_9 = ov::as($memory_10, $memory_11);
#line 962
undef($memory_11);
#line 962
undef($memory_10);
#line 963
$memory_10 = hash::has_key($memory_5, $memory_9);
#line 963
$memory_10 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_10));
#line 963
$memory_10 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_10));
#line 963
if (c_rt_lib::check_true($memory_10)) {goto label_4;}
#line 964
$memory_11 = "variable ";
#line 964
$memory_11 = $memory_11 . $memory_9;
#line 964
$memory_12 = " dont exist";
#line 964
$memory_11 = $memory_11 . $memory_12;
#line 964
undef($memory_12);
#line 964
type_checker_priv::add_error($memory_6, $memory_11);
#line 964
undef($memory_11);
#line 965
undef($memory_0);
#line 965
undef($memory_2);
#line 965
undef($memory_3);
#line 965
undef($memory_7);
#line 965
undef($memory_8);
#line 965
undef($memory_9);
#line 965
undef($memory_10);
#line 965
$_[4] = $memory_4;$_[5] = $memory_5;$_[6] = $memory_6;return $memory_1;
#line 966
goto label_4;
#line 966
label_4:
#line 966
undef($memory_10);
#line 967
$memory_10 = hash::get_value($memory_5, $memory_9);
#line 968
$memory_11 = $memory_10->{'overwrited'};
#line 968
$memory_12 = c_rt_lib::ov_is($memory_11, 'yes');
#line 968
if (c_rt_lib::check_true($memory_12)) {goto label_6;}
#line 972
$memory_12 = c_rt_lib::ov_is($memory_11, 'no');
#line 972
if (c_rt_lib::check_true($memory_12)) {goto label_7;}
#line 972
$memory_12 = "NOMATCHALERT";
#line 972
$memory_12 = [$memory_12,$memory_11];
#line 972
die(dfile::ssave($memory_12));
#line 968
label_6:
#line 969
$memory_15 = $memory_10->{'type'};
#line 969
$memory_16 = c_rt_lib::ov_mk_none('speculation');
#line 969
$memory_14 = {type => $memory_15,src => $memory_16,};
#line 969
undef($memory_15);
#line 969
undef($memory_16);
#line 969
$memory_13 = type_checker_priv::mk_new_type_lval($memory_8, $memory_2, $memory_14, $memory_3, $memory_4, $memory_6);
#line 969
undef($memory_14);
#line 970
$memory_15 = c_rt_lib::ov_mk_none('yes');
#line 970
$memory_14 = {overwrited => $memory_15,type => $memory_13,};
#line 970
undef($memory_15);
#line 970
hash::set_value($memory_5, $memory_9, $memory_14);
#line 970
undef($memory_14);
#line 971
undef($memory_0);
#line 971
undef($memory_1);
#line 971
undef($memory_3);
#line 971
undef($memory_7);
#line 971
undef($memory_8);
#line 971
undef($memory_9);
#line 971
undef($memory_10);
#line 971
undef($memory_11);
#line 971
undef($memory_12);
#line 971
undef($memory_13);
#line 971
$_[4] = $memory_4;$_[5] = $memory_5;$_[6] = $memory_6;return $memory_2;
#line 971
undef($memory_13);
#line 972
goto label_5;
#line 972
label_7:
#line 973
$memory_14 = $memory_10->{'type'};
#line 973
$memory_15 = c_rt_lib::ov_mk_none('known');
#line 973
$memory_13 = {type => $memory_14,src => $memory_15,};
#line 973
undef($memory_14);
#line 973
undef($memory_15);
#line 973
type_checker_priv::mk_new_type_lval($memory_8, $memory_2, $memory_13, $memory_3, $memory_4, $memory_6);
#line 973
undef($memory_13);
#line 974
undef($memory_0);
#line 974
undef($memory_2);
#line 974
undef($memory_3);
#line 974
undef($memory_7);
#line 974
undef($memory_8);
#line 974
undef($memory_9);
#line 974
undef($memory_10);
#line 974
undef($memory_11);
#line 974
undef($memory_12);
#line 974
$_[4] = $memory_4;$_[5] = $memory_5;$_[6] = $memory_6;return $memory_1;
#line 975
goto label_5;
#line 975
label_5:
#line 975
undef($memory_11);
#line 975
undef($memory_12);
#line 975
undef($memory_7);
#line 975
undef($memory_8);
#line 975
undef($memory_9);
#line 975
undef($memory_10);
#line 975
undef($memory_0);
#line 975
undef($memory_1);
#line 975
undef($memory_2);
#line 975
undef($memory_3);
#line 975
$_[4] = $memory_4;$_[5] = $memory_5;$_[6] = $memory_6;return;
$_[4] = $memory_4;$_[5] = $memory_5;$_[6] = $memory_6;}

sub type_checker_priv::get_type_left_site_equation($$$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;$memory_0 = $_[0];$memory_1 = $_[1];Scalar::Util::weaken($_[1]) if ref($_[1]);$memory_2 = $_[2];Scalar::Util::weaken($_[2]) if ref($_[2]);$memory_3 = $_[3];Scalar::Util::weaken($_[3]) if ref($_[3]);
#line 980
$memory_6 = "bin_op";
#line 980
$memory_4 = ov::is($memory_0, $memory_6);
#line 980
undef($memory_6);
#line 980
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 980
if (c_rt_lib::check_true($memory_5)) {goto label_3;}
#line 980
$memory_4 = $memory_0;
#line 980
$memory_4 = c_rt_lib::ov_as($memory_4, 'bin_op');
#line 980
$memory_4 = $memory_4->{'op'};
#line 980
$memory_6 = "->";
#line 980
$memory_4 = c_rt_lib::to_nl($memory_4 eq $memory_6);
#line 980
undef($memory_6);
#line 980
label_3:
#line 980
undef($memory_5);
#line 980
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 980
if (c_rt_lib::check_true($memory_4)) {goto label_2;}
#line 981
$memory_6 = $memory_0;
#line 981
$memory_6 = c_rt_lib::ov_as($memory_6, 'bin_op');
#line 981
$memory_5 = type_checker_priv::get_type_record_key($memory_6, $memory_1, $memory_2, $memory_3);
#line 981
undef($memory_6);
#line 981
undef($memory_0);
#line 981
undef($memory_4);
#line 981
$_[1] = $memory_1;$_[2] = $memory_2;$_[3] = $memory_3;return $memory_5;
#line 981
undef($memory_5);
#line 982
goto label_1;
#line 982
label_2:
#line 983
$memory_5 = type_checker_priv::check_val($memory_0, $memory_1, $memory_2, $memory_3);
#line 983
undef($memory_0);
#line 983
undef($memory_4);
#line 983
$_[1] = $memory_1;$_[2] = $memory_2;$_[3] = $memory_3;return $memory_5;
#line 983
undef($memory_5);
#line 984
goto label_1;
#line 984
label_1:
#line 984
undef($memory_4);
#line 984
undef($memory_0);
#line 984
$_[1] = $memory_1;$_[2] = $memory_2;$_[3] = $memory_3;return;
$_[1] = $memory_1;$_[2] = $memory_2;$_[3] = $memory_3;}

sub type_checker_priv::get_type_record_key($$$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;$memory_0 = $_[0];$memory_1 = $_[1];Scalar::Util::weaken($_[1]) if ref($_[1]);$memory_2 = $_[2];Scalar::Util::weaken($_[2]) if ref($_[2]);$memory_3 = $_[3];Scalar::Util::weaken($_[3]) if ref($_[3]);
#line 988
$memory_5 = $memory_0->{'left'};
#line 988
$memory_4 = type_checker_priv::check_val($memory_5, $memory_1, $memory_2, $memory_3);
#line 988
undef($memory_5);
#line 989
$memory_5 = ptd_system::can_delete($memory_4, $memory_1, $memory_3);
#line 989
$memory_4 = $memory_5;
#line 989
undef($memory_5);
#line 990
$memory_5 = $memory_4->{'type'};
#line 990
$memory_5 = c_rt_lib::ov_is($memory_5, 'tct_rec');
#line 990
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 990
if (c_rt_lib::check_true($memory_5)) {goto label_2;}
#line 991
$memory_6 = $memory_4->{'type'};
#line 991
$memory_6 = c_rt_lib::ov_as($memory_6, 'tct_rec');
#line 992
$memory_7 = $memory_0->{'right'};
#line 992
$memory_7 = c_rt_lib::ov_as($memory_7, 'hash_key');
#line 993
$memory_8 = hash::has_key($memory_6, $memory_7);
#line 993
$memory_8 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 993
$memory_8 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 993
if (c_rt_lib::check_true($memory_8)) {goto label_4;}
#line 994
$memory_9 = type_checker_priv::is_known($memory_4);
#line 994
$memory_9 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_9));
#line 994
if (c_rt_lib::check_true($memory_9)) {goto label_6;}
#line 994
$memory_10 = "unknown record key: ";
#line 994
$memory_10 = $memory_10 . $memory_7;
#line 994
type_checker_priv::add_error($memory_3, $memory_10);
#line 994
undef($memory_10);
#line 994
goto label_6;
#line 994
label_6:
#line 994
undef($memory_9);
#line 995
$memory_9 = tct::tct_im();
#line 995
$memory_10 = $memory_9;
#line 995
 if (c_rt_lib::get_hashcount($memory_4) > 1) {$memory_4 = {%{$memory_4}};}$memory_4->{'type'} = $memory_10;
#line 995
undef($memory_9);
#line 995
undef($memory_10);
#line 996
undef($memory_0);
#line 996
undef($memory_5);
#line 996
undef($memory_6);
#line 996
undef($memory_7);
#line 996
undef($memory_8);
#line 996
$_[1] = $memory_1;$_[2] = $memory_2;$_[3] = $memory_3;return $memory_4;
#line 997
goto label_4;
#line 997
label_4:
#line 997
undef($memory_8);
#line 998
$memory_8 = hash::get_value($memory_6, $memory_7);
#line 998
$memory_9 = $memory_8;
#line 998
 if (c_rt_lib::get_hashcount($memory_4) > 1) {$memory_4 = {%{$memory_4}};}$memory_4->{'type'} = $memory_9;
#line 998
undef($memory_8);
#line 998
undef($memory_9);
#line 999
undef($memory_0);
#line 999
undef($memory_5);
#line 999
undef($memory_6);
#line 999
undef($memory_7);
#line 999
$_[1] = $memory_1;$_[2] = $memory_2;$_[3] = $memory_3;return $memory_4;
#line 999
undef($memory_6);
#line 999
undef($memory_7);
#line 1000
goto label_2;
#line 1000
label_2:
#line 1000
undef($memory_5);
#line 1001
$memory_5 = $memory_4->{'type'};
#line 1001
$memory_5 = c_rt_lib::ov_is($memory_5, 'tct_hash');
#line 1001
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 1001
if (c_rt_lib::check_true($memory_5)) {goto label_8;}
#line 1002
$memory_6 = $memory_4->{'type'};
#line 1002
$memory_6 = c_rt_lib::ov_as($memory_6, 'tct_hash');
#line 1002
$memory_7 = $memory_6;
#line 1002
 if (c_rt_lib::get_hashcount($memory_4) > 1) {$memory_4 = {%{$memory_4}};}$memory_4->{'type'} = $memory_7;
#line 1002
undef($memory_6);
#line 1002
undef($memory_7);
#line 1003
undef($memory_0);
#line 1003
undef($memory_5);
#line 1003
$_[1] = $memory_1;$_[2] = $memory_2;$_[3] = $memory_3;return $memory_4;
#line 1004
goto label_8;
#line 1004
label_8:
#line 1004
undef($memory_5);
#line 1005
$memory_7 = {};
#line 1005
$memory_6 = tct::rec($memory_7);
#line 1005
undef($memory_7);
#line 1005
$memory_5 = ptd_system::is_accepted($memory_4, $memory_6, $memory_1, $memory_3);
#line 1005
undef($memory_6);
#line 1005
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 1005
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 1005
if (c_rt_lib::check_true($memory_5)) {goto label_10;}
#line 1006
$memory_6 = "binary operator -> can be applied only to record : ";
#line 1006
$memory_8 = $memory_4->{'type'};
#line 1006
$memory_7 = type_checker_priv::get_print_tct_type_name($memory_8);
#line 1006
undef($memory_8);
#line 1006
$memory_6 = $memory_6 . $memory_7;
#line 1006
undef($memory_7);
#line 1006
type_checker_priv::add_error($memory_3, $memory_6);
#line 1006
undef($memory_6);
#line 1008
goto label_10;
#line 1008
label_10:
#line 1008
undef($memory_5);
#line 1009
$memory_5 = tct::tct_im();
#line 1009
$memory_6 = $memory_5;
#line 1009
 if (c_rt_lib::get_hashcount($memory_4) > 1) {$memory_4 = {%{$memory_4}};}$memory_4->{'type'} = $memory_6;
#line 1009
undef($memory_5);
#line 1009
undef($memory_6);
#line 1010
undef($memory_0);
#line 1010
$_[1] = $memory_1;$_[2] = $memory_2;$_[3] = $memory_3;return $memory_4;
#line 1010
undef($memory_4);
#line 1010
undef($memory_0);
#line 1010
$_[1] = $memory_1;$_[2] = $memory_2;$_[3] = $memory_3;return;
$_[1] = $memory_1;$_[2] = $memory_2;$_[3] = $memory_3;}

sub type_checker_priv::get_type_from_bin_op_and_check($$$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;$memory_0 = $_[0];$memory_1 = $_[1];Scalar::Util::weaken($_[1]) if ref($_[1]);$memory_2 = $_[2];Scalar::Util::weaken($_[2]) if ref($_[2]);$memory_3 = $_[3];Scalar::Util::weaken($_[3]) if ref($_[3]);
#line 1014
$memory_4 = $memory_0->{'op'};
#line 1015
$memory_6 = $memory_0->{'right'};
#line 1015
$memory_5 = type_checker_priv::check_val($memory_6, $memory_1, $memory_2, $memory_3);
#line 1015
undef($memory_6);
#line 1016
$memory_6 = "=";
#line 1016
$memory_6 = c_rt_lib::to_nl($memory_4 eq $memory_6);
#line 1016
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 1016
if (c_rt_lib::check_true($memory_6)) {goto label_2;}
#line 1017
$memory_8 = $memory_5->{'type'};
#line 1017
$memory_9 = "tct_void";
#line 1017
$memory_7 = ov::is($memory_8, $memory_9);
#line 1017
undef($memory_9);
#line 1017
undef($memory_8);
#line 1017
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 1017
if (c_rt_lib::check_true($memory_7)) {goto label_4;}
#line 1018
$memory_8 = "cannot use 'void' type returned from function as value";
#line 1018
type_checker_priv::add_error($memory_3, $memory_8);
#line 1018
undef($memory_8);
#line 1019
$memory_9 = tct::tct_im();
#line 1019
$memory_10 = c_rt_lib::ov_mk_none('speculation');
#line 1019
$memory_8 = {type => $memory_9,src => $memory_10,};
#line 1019
undef($memory_9);
#line 1019
undef($memory_10);
#line 1019
undef($memory_0);
#line 1019
undef($memory_4);
#line 1019
undef($memory_5);
#line 1019
undef($memory_6);
#line 1019
undef($memory_7);
#line 1019
$_[1] = $memory_1;$_[2] = $memory_2;$_[3] = $memory_3;return $memory_8;
#line 1019
undef($memory_8);
#line 1020
goto label_4;
#line 1020
label_4:
#line 1020
undef($memory_7);
#line 1021
$memory_8 = $memory_3->{'errors'};
#line 1021
$memory_7 = array::len($memory_8);
#line 1021
undef($memory_8);
#line 1022
$memory_9 = $memory_0->{'left'};
#line 1022
$memory_8 = type_checker_priv::get_type_left_site_equation($memory_9, $memory_1, $memory_2, $memory_3);
#line 1022
undef($memory_9);
#line 1023
$memory_10 = $memory_3->{'errors'};
#line 1023
$memory_9 = array::len($memory_10);
#line 1023
undef($memory_10);
#line 1023
$memory_9 = $memory_9 - $memory_7;
#line 1023
$memory_10 = 0;
#line 1023
$memory_9 = c_rt_lib::to_nl($memory_9 > $memory_10);
#line 1023
undef($memory_10);
#line 1023
$memory_9 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_9));
#line 1023
if (c_rt_lib::check_true($memory_9)) {goto label_6;}
#line 1023
undef($memory_0);
#line 1023
undef($memory_4);
#line 1023
undef($memory_5);
#line 1023
undef($memory_6);
#line 1023
undef($memory_7);
#line 1023
undef($memory_9);
#line 1023
$_[1] = $memory_1;$_[2] = $memory_2;$_[3] = $memory_3;return $memory_8;
#line 1023
goto label_6;
#line 1023
label_6:
#line 1023
undef($memory_9);
#line 1024
$memory_10 = $memory_0->{'left'};
#line 1024
$memory_9 = type_checker_priv::set_type_to_lval($memory_10, $memory_8, $memory_5, $memory_1, $memory_2, $memory_3);
#line 1024
undef($memory_10);
#line 1024
undef($memory_0);
#line 1024
undef($memory_4);
#line 1024
undef($memory_5);
#line 1024
undef($memory_6);
#line 1024
undef($memory_7);
#line 1024
undef($memory_8);
#line 1024
$_[1] = $memory_1;$_[2] = $memory_2;$_[3] = $memory_3;return $memory_9;
#line 1024
undef($memory_9);
#line 1024
undef($memory_7);
#line 1024
undef($memory_8);
#line 1025
goto label_2;
#line 1025
label_2:
#line 1025
undef($memory_6);
#line 1027
$memory_8 = $memory_0->{'left'};
#line 1027
$memory_7 = type_checker_priv::check_val($memory_8, $memory_1, $memory_2, $memory_3);
#line 1027
undef($memory_8);
#line 1027
$memory_6 = ptd_system::can_delete($memory_7, $memory_1, $memory_3);
#line 1027
undef($memory_7);
#line 1029
$memory_8 = tct::tct_im();
#line 1029
$memory_9 = $memory_6->{'src'};
#line 1029
$memory_7 = {type => $memory_8,src => $memory_9,};
#line 1029
undef($memory_8);
#line 1029
undef($memory_9);
#line 1030
$memory_8 = "->";
#line 1030
$memory_8 = c_rt_lib::to_nl($memory_4 eq $memory_8);
#line 1030
$memory_8 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 1030
if (c_rt_lib::check_true($memory_8)) {goto label_8;}
#line 1031
$memory_9 = type_checker_priv::get_type_record_key($memory_0, $memory_1, $memory_2, $memory_3);
#line 1031
undef($memory_0);
#line 1031
undef($memory_4);
#line 1031
undef($memory_5);
#line 1031
undef($memory_6);
#line 1031
undef($memory_7);
#line 1031
undef($memory_8);
#line 1031
$_[1] = $memory_1;$_[2] = $memory_2;$_[3] = $memory_3;return $memory_9;
#line 1031
undef($memory_9);
#line 1032
goto label_8;
#line 1032
label_8:
#line 1032
undef($memory_8);
#line 1034
$memory_8 = "ARRAY_INDEX";
#line 1034
$memory_8 = c_rt_lib::to_nl($memory_4 eq $memory_8);
#line 1034
$memory_8 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 1034
if (c_rt_lib::check_true($memory_8)) {goto label_10;}
#line 1035
$memory_11 = tct::tct_im();
#line 1035
$memory_10 = tct::arr($memory_11);
#line 1035
undef($memory_11);
#line 1035
$memory_9 = ptd_system::is_accepted($memory_6, $memory_10, $memory_1, $memory_3);
#line 1035
undef($memory_10);
#line 1035
$memory_9 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_9));
#line 1035
$memory_9 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_9));
#line 1035
if (c_rt_lib::check_true($memory_9)) {goto label_12;}
#line 1036
$memory_10 = "array operator '[]' can be applied only to array";
#line 1036
type_checker_priv::add_error($memory_3, $memory_10);
#line 1036
undef($memory_10);
#line 1037
undef($memory_0);
#line 1037
undef($memory_4);
#line 1037
undef($memory_5);
#line 1037
undef($memory_6);
#line 1037
undef($memory_8);
#line 1037
undef($memory_9);
#line 1037
$_[1] = $memory_1;$_[2] = $memory_2;$_[3] = $memory_3;return $memory_7;
#line 1038
goto label_12;
#line 1038
label_12:
#line 1038
undef($memory_9);
#line 1039
$memory_10 = tct::sim();
#line 1039
$memory_9 = ptd_system::is_accepted($memory_5, $memory_10, $memory_1, $memory_3);
#line 1039
undef($memory_10);
#line 1039
$memory_9 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_9));
#line 1039
$memory_9 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_9));
#line 1039
if (c_rt_lib::check_true($memory_9)) {goto label_14;}
#line 1040
$memory_10 = "array index should be number";
#line 1040
type_checker_priv::add_error($memory_3, $memory_10);
#line 1040
undef($memory_10);
#line 1041
goto label_14;
#line 1041
label_14:
#line 1041
undef($memory_9);
#line 1042
$memory_9 = $memory_6->{'type'};
#line 1042
$memory_9 = c_rt_lib::ov_is($memory_9, 'tct_arr');
#line 1042
$memory_9 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_9));
#line 1042
if (c_rt_lib::check_true($memory_9)) {goto label_16;}
#line 1042
$memory_10 = $memory_6->{'type'};
#line 1042
$memory_10 = c_rt_lib::ov_as($memory_10, 'tct_arr');
#line 1042
$memory_11 = $memory_10;
#line 1042
 if (c_rt_lib::get_hashcount($memory_6) > 1) {$memory_6 = {%{$memory_6}};}$memory_6->{'type'} = $memory_11;
#line 1042
undef($memory_10);
#line 1042
undef($memory_11);
#line 1042
goto label_16;
#line 1042
label_16:
#line 1042
undef($memory_9);
#line 1043
undef($memory_0);
#line 1043
undef($memory_4);
#line 1043
undef($memory_5);
#line 1043
undef($memory_7);
#line 1043
undef($memory_8);
#line 1043
$_[1] = $memory_1;$_[2] = $memory_2;$_[3] = $memory_3;return $memory_6;
#line 1044
goto label_10;
#line 1044
label_10:
#line 1044
undef($memory_8);
#line 1046
$memory_8 = tc_types::get_bin_op_def($memory_4);
#line 1047
$memory_10 = $memory_8->{'arg1'};
#line 1047
$memory_9 = ptd_system::is_accepted($memory_6, $memory_10, $memory_1, $memory_3);
#line 1047
undef($memory_10);
#line 1047
$memory_9 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_9));
#line 1047
$memory_9 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_9));
#line 1047
if (c_rt_lib::check_true($memory_9)) {goto label_18;}
#line 1048
$memory_10 = "incorrect type of the first argument operator '";
#line 1048
$memory_10 = $memory_10 . $memory_4;
#line 1048
$memory_11 = "'";
#line 1048
$memory_10 = $memory_10 . $memory_11;
#line 1048
undef($memory_11);
#line 1048
type_checker_priv::add_error($memory_3, $memory_10);
#line 1048
undef($memory_10);
#line 1049
goto label_18;
#line 1049
label_18:
#line 1049
undef($memory_9);
#line 1050
$memory_10 = $memory_8->{'arg2'};
#line 1050
$memory_9 = ptd_system::is_accepted($memory_5, $memory_10, $memory_1, $memory_3);
#line 1050
undef($memory_10);
#line 1050
$memory_9 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_9));
#line 1050
$memory_9 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_9));
#line 1050
if (c_rt_lib::check_true($memory_9)) {goto label_20;}
#line 1051
$memory_10 = "incorrect type of the second argument operator '";
#line 1051
$memory_10 = $memory_10 . $memory_4;
#line 1051
$memory_11 = "'";
#line 1051
$memory_10 = $memory_10 . $memory_11;
#line 1051
undef($memory_11);
#line 1051
type_checker_priv::add_error($memory_3, $memory_10);
#line 1051
undef($memory_10);
#line 1052
goto label_20;
#line 1052
label_20:
#line 1052
undef($memory_9);
#line 1054
$memory_10 = $memory_8->{'ret'};
#line 1054
$memory_11 = c_rt_lib::ov_mk_none('speculation');
#line 1054
$memory_9 = {type => $memory_10,src => $memory_11,};
#line 1054
undef($memory_10);
#line 1054
undef($memory_11);
#line 1054
undef($memory_0);
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
$_[1] = $memory_1;$_[2] = $memory_2;$_[3] = $memory_3;return $memory_9;
#line 1054
undef($memory_9);
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
undef($memory_0);
#line 1054
$_[1] = $memory_1;$_[2] = $memory_2;$_[3] = $memory_3;return;
$_[1] = $memory_1;$_[2] = $memory_2;$_[3] = $memory_3;}

sub type_checker_priv::get_print_tct_type_name($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;$memory_0 = $_[0];
#line 1057
$memory_1 = c_rt_lib::ov_is($memory_0, 'tct_empty');
#line 1057
if (c_rt_lib::check_true($memory_1)) {goto label_2;}
#line 1059
$memory_1 = c_rt_lib::ov_is($memory_0, 'tct_im');
#line 1059
if (c_rt_lib::check_true($memory_1)) {goto label_3;}
#line 1061
$memory_1 = c_rt_lib::ov_is($memory_0, 'tct_void');
#line 1061
if (c_rt_lib::check_true($memory_1)) {goto label_4;}
#line 1063
$memory_1 = c_rt_lib::ov_is($memory_0, 'tct_sim');
#line 1063
if (c_rt_lib::check_true($memory_1)) {goto label_5;}
#line 1065
$memory_1 = c_rt_lib::ov_is($memory_0, 'tct_ref');
#line 1065
if (c_rt_lib::check_true($memory_1)) {goto label_6;}
#line 1067
$memory_1 = c_rt_lib::ov_is($memory_0, 'tct_arr');
#line 1067
if (c_rt_lib::check_true($memory_1)) {goto label_7;}
#line 1069
$memory_1 = c_rt_lib::ov_is($memory_0, 'tct_var');
#line 1069
if (c_rt_lib::check_true($memory_1)) {goto label_8;}
#line 1079
$memory_1 = c_rt_lib::ov_is($memory_0, 'tct_rec');
#line 1079
if (c_rt_lib::check_true($memory_1)) {goto label_9;}
#line 1085
$memory_1 = c_rt_lib::ov_is($memory_0, 'tct_hash');
#line 1085
if (c_rt_lib::check_true($memory_1)) {goto label_10;}
#line 1085
$memory_1 = "NOMATCHALERT";
#line 1085
$memory_1 = [$memory_1,$memory_0];
#line 1085
die(dfile::ssave($memory_1));
#line 1057
label_2:
#line 1058
$memory_2 = "";
#line 1058
undef($memory_0);
#line 1058
undef($memory_1);
#line 1058
return $memory_2;
#line 1058
undef($memory_2);
#line 1059
goto label_1;
#line 1059
label_3:
#line 1060
$memory_2 = "ptd::ptd_im()";
#line 1060
undef($memory_0);
#line 1060
undef($memory_1);
#line 1060
return $memory_2;
#line 1060
undef($memory_2);
#line 1061
goto label_1;
#line 1061
label_4:
#line 1062
$memory_2 = "ptd::void()";
#line 1062
undef($memory_0);
#line 1062
undef($memory_1);
#line 1062
return $memory_2;
#line 1062
undef($memory_2);
#line 1063
goto label_1;
#line 1063
label_5:
#line 1064
$memory_2 = "ptd::sim()";
#line 1064
undef($memory_0);
#line 1064
undef($memory_1);
#line 1064
return $memory_2;
#line 1064
undef($memory_2);
#line 1065
goto label_1;
#line 1065
label_6:
#line 1065
$memory_2 = c_rt_lib::ov_as($memory_0, 'tct_ref');
#line 1066
$memory_3 = "\@";
#line 1066
$memory_3 = $memory_3 . $memory_2;
#line 1066
undef($memory_0);
#line 1066
undef($memory_1);
#line 1066
undef($memory_2);
#line 1066
return $memory_3;
#line 1066
undef($memory_3);
#line 1066
undef($memory_2);
#line 1067
goto label_1;
#line 1067
label_7:
#line 1067
$memory_2 = c_rt_lib::ov_as($memory_0, 'tct_arr');
#line 1068
$memory_3 = "ptd::arr(";
#line 1068
$memory_4 = type_checker_priv::get_print_tct_type_name($memory_2);
#line 1068
$memory_3 = $memory_3 . $memory_4;
#line 1068
undef($memory_4);
#line 1068
$memory_4 = ")";
#line 1068
$memory_3 = $memory_3 . $memory_4;
#line 1068
undef($memory_4);
#line 1068
undef($memory_0);
#line 1068
undef($memory_1);
#line 1068
undef($memory_2);
#line 1068
return $memory_3;
#line 1068
undef($memory_3);
#line 1068
undef($memory_2);
#line 1069
goto label_1;
#line 1069
label_8:
#line 1069
$memory_2 = c_rt_lib::ov_as($memory_0, 'tct_var');
#line 1070
$memory_3 = "ptd::var(";
#line 1071
$memory_6 = c_rt_lib::init_iter($memory_2);
#line 1071
label_13:
#line 1071
$memory_4 = c_rt_lib::is_end_hash($memory_6);
#line 1071
if (c_rt_lib::check_true($memory_4)) {goto label_11;}
#line 1071
$memory_4 = c_rt_lib::get_key_iter($memory_6);
#line 1071
$memory_5 = c_rt_lib::hash_get_value($memory_2, $memory_4);
#line 1072
$memory_7 = c_rt_lib::ov_is($memory_5, 'with_param');
#line 1072
if (c_rt_lib::check_true($memory_7)) {goto label_15;}
#line 1074
$memory_7 = c_rt_lib::ov_is($memory_5, 'no_param');
#line 1074
if (c_rt_lib::check_true($memory_7)) {goto label_16;}
#line 1074
$memory_7 = "NOMATCHALERT";
#line 1074
$memory_7 = [$memory_7,$memory_5];
#line 1074
die(dfile::ssave($memory_7));
#line 1072
label_15:
#line 1072
$memory_8 = c_rt_lib::ov_as($memory_5, 'with_param');
#line 1073
$memory_9 = " => ";
#line 1073
$memory_9 = $memory_4 . $memory_9;
#line 1073
$memory_10 = type_checker_priv::get_print_tct_type_name($memory_8);
#line 1073
$memory_9 = $memory_9 . $memory_10;
#line 1073
undef($memory_10);
#line 1073
$memory_10 = ", ";
#line 1073
$memory_9 = $memory_9 . $memory_10;
#line 1073
undef($memory_10);
#line 1073
$memory_3 = $memory_3 . $memory_9;
#line 1073
undef($memory_9);
#line 1073
undef($memory_8);
#line 1074
goto label_14;
#line 1074
label_16:
#line 1075
$memory_8 = ", ";
#line 1075
$memory_8 = $memory_4 . $memory_8;
#line 1075
$memory_3 = $memory_3 . $memory_8;
#line 1075
undef($memory_8);
#line 1076
goto label_14;
#line 1076
label_14:
#line 1076
undef($memory_7);
#line 1077
$memory_6 = c_rt_lib::next_iter($memory_6);
#line 1077
goto label_13;
#line 1077
label_11:
#line 1077
undef($memory_4);
#line 1077
undef($memory_5);
#line 1077
undef($memory_6);
#line 1078
$memory_4 = ")";
#line 1078
$memory_4 = $memory_3 . $memory_4;
#line 1078
undef($memory_0);
#line 1078
undef($memory_1);
#line 1078
undef($memory_2);
#line 1078
undef($memory_3);
#line 1078
return $memory_4;
#line 1078
undef($memory_4);
#line 1078
undef($memory_3);
#line 1078
undef($memory_2);
#line 1079
goto label_1;
#line 1079
label_9:
#line 1079
$memory_2 = c_rt_lib::ov_as($memory_0, 'tct_rec');
#line 1080
$memory_3 = "ptd::rec(";
#line 1081
$memory_6 = c_rt_lib::init_iter($memory_2);
#line 1081
label_19:
#line 1081
$memory_4 = c_rt_lib::is_end_hash($memory_6);
#line 1081
if (c_rt_lib::check_true($memory_4)) {goto label_17;}
#line 1081
$memory_4 = c_rt_lib::get_key_iter($memory_6);
#line 1081
$memory_5 = c_rt_lib::hash_get_value($memory_2, $memory_4);
#line 1082
$memory_7 = " => ";
#line 1082
$memory_7 = $memory_4 . $memory_7;
#line 1082
$memory_8 = type_checker_priv::get_print_tct_type_name($memory_5);
#line 1082
$memory_7 = $memory_7 . $memory_8;
#line 1082
undef($memory_8);
#line 1082
$memory_8 = ", ";
#line 1082
$memory_7 = $memory_7 . $memory_8;
#line 1082
undef($memory_8);
#line 1082
$memory_3 = $memory_3 . $memory_7;
#line 1082
undef($memory_7);
#line 1083
$memory_6 = c_rt_lib::next_iter($memory_6);
#line 1083
goto label_19;
#line 1083
label_17:
#line 1083
undef($memory_4);
#line 1083
undef($memory_5);
#line 1083
undef($memory_6);
#line 1084
$memory_4 = ")";
#line 1084
$memory_4 = $memory_3 . $memory_4;
#line 1084
undef($memory_0);
#line 1084
undef($memory_1);
#line 1084
undef($memory_2);
#line 1084
undef($memory_3);
#line 1084
return $memory_4;
#line 1084
undef($memory_4);
#line 1084
undef($memory_3);
#line 1084
undef($memory_2);
#line 1085
goto label_1;
#line 1085
label_10:
#line 1085
$memory_2 = c_rt_lib::ov_as($memory_0, 'tct_hash');
#line 1086
$memory_3 = "ptd::hash(";
#line 1086
$memory_4 = type_checker_priv::get_print_tct_type_name($memory_2);
#line 1086
$memory_3 = $memory_3 . $memory_4;
#line 1086
undef($memory_4);
#line 1086
$memory_4 = ")";
#line 1086
$memory_3 = $memory_3 . $memory_4;
#line 1086
undef($memory_4);
#line 1086
undef($memory_0);
#line 1086
undef($memory_1);
#line 1086
undef($memory_2);
#line 1086
return $memory_3;
#line 1086
undef($memory_3);
#line 1086
undef($memory_2);
#line 1087
goto label_1;
#line 1087
label_1:
#line 1087
undef($memory_1);
#line 1087
undef($memory_0);
#line 1087
return;
}

sub type_checker_priv::get_print_tct_label($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;$memory_0 = $_[0];
#line 1090
$memory_1 = c_rt_lib::ov_is($memory_0, 'tct_empty');
#line 1090
if (c_rt_lib::check_true($memory_1)) {goto label_2;}
#line 1092
$memory_1 = c_rt_lib::ov_is($memory_0, 'tct_im');
#line 1092
if (c_rt_lib::check_true($memory_1)) {goto label_3;}
#line 1094
$memory_1 = c_rt_lib::ov_is($memory_0, 'tct_void');
#line 1094
if (c_rt_lib::check_true($memory_1)) {goto label_4;}
#line 1096
$memory_1 = c_rt_lib::ov_is($memory_0, 'tct_sim');
#line 1096
if (c_rt_lib::check_true($memory_1)) {goto label_5;}
#line 1098
$memory_1 = c_rt_lib::ov_is($memory_0, 'tct_ref');
#line 1098
if (c_rt_lib::check_true($memory_1)) {goto label_6;}
#line 1100
$memory_1 = c_rt_lib::ov_is($memory_0, 'tct_arr');
#line 1100
if (c_rt_lib::check_true($memory_1)) {goto label_7;}
#line 1102
$memory_1 = c_rt_lib::ov_is($memory_0, 'tct_var');
#line 1102
if (c_rt_lib::check_true($memory_1)) {goto label_8;}
#line 1104
$memory_1 = c_rt_lib::ov_is($memory_0, 'tct_rec');
#line 1104
if (c_rt_lib::check_true($memory_1)) {goto label_9;}
#line 1106
$memory_1 = c_rt_lib::ov_is($memory_0, 'tct_hash');
#line 1106
if (c_rt_lib::check_true($memory_1)) {goto label_10;}
#line 1106
$memory_1 = "NOMATCHALERT";
#line 1106
$memory_1 = [$memory_1,$memory_0];
#line 1106
die(dfile::ssave($memory_1));
#line 1090
label_2:
#line 1091
$memory_2 = "ptd::ptd_empty";
#line 1091
undef($memory_0);
#line 1091
undef($memory_1);
#line 1091
return $memory_2;
#line 1091
undef($memory_2);
#line 1092
goto label_1;
#line 1092
label_3:
#line 1093
$memory_2 = "ptd::ptd_im";
#line 1093
undef($memory_0);
#line 1093
undef($memory_1);
#line 1093
return $memory_2;
#line 1093
undef($memory_2);
#line 1094
goto label_1;
#line 1094
label_4:
#line 1095
$memory_2 = "ptd::void";
#line 1095
undef($memory_0);
#line 1095
undef($memory_1);
#line 1095
return $memory_2;
#line 1095
undef($memory_2);
#line 1096
goto label_1;
#line 1096
label_5:
#line 1097
$memory_2 = "ptd::sim";
#line 1097
undef($memory_0);
#line 1097
undef($memory_1);
#line 1097
return $memory_2;
#line 1097
undef($memory_2);
#line 1098
goto label_1;
#line 1098
label_6:
#line 1098
$memory_2 = c_rt_lib::ov_as($memory_0, 'tct_ref');
#line 1099
$memory_3 = "ptd::ref";
#line 1099
undef($memory_0);
#line 1099
undef($memory_1);
#line 1099
undef($memory_2);
#line 1099
return $memory_3;
#line 1099
undef($memory_3);
#line 1099
undef($memory_2);
#line 1100
goto label_1;
#line 1100
label_7:
#line 1100
$memory_2 = c_rt_lib::ov_as($memory_0, 'tct_arr');
#line 1101
$memory_3 = "ptd::arr";
#line 1101
undef($memory_0);
#line 1101
undef($memory_1);
#line 1101
undef($memory_2);
#line 1101
return $memory_3;
#line 1101
undef($memory_3);
#line 1101
undef($memory_2);
#line 1102
goto label_1;
#line 1102
label_8:
#line 1102
$memory_2 = c_rt_lib::ov_as($memory_0, 'tct_var');
#line 1103
$memory_3 = "ptd::var";
#line 1103
undef($memory_0);
#line 1103
undef($memory_1);
#line 1103
undef($memory_2);
#line 1103
return $memory_3;
#line 1103
undef($memory_3);
#line 1103
undef($memory_2);
#line 1104
goto label_1;
#line 1104
label_9:
#line 1104
$memory_2 = c_rt_lib::ov_as($memory_0, 'tct_rec');
#line 1105
$memory_3 = "ptd::rec";
#line 1105
undef($memory_0);
#line 1105
undef($memory_1);
#line 1105
undef($memory_2);
#line 1105
return $memory_3;
#line 1105
undef($memory_3);
#line 1105
undef($memory_2);
#line 1106
goto label_1;
#line 1106
label_10:
#line 1106
$memory_2 = c_rt_lib::ov_as($memory_0, 'tct_hash');
#line 1107
$memory_3 = "ptd::hash";
#line 1107
undef($memory_0);
#line 1107
undef($memory_1);
#line 1107
undef($memory_2);
#line 1107
return $memory_3;
#line 1107
undef($memory_3);
#line 1107
undef($memory_2);
#line 1108
goto label_1;
#line 1108
label_1:
#line 1108
undef($memory_1);
#line 1108
undef($memory_0);
#line 1108
return;
}

sub type_checker_priv::get_print_check_info($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;my $memory_13;my $memory_14;my $memory_15;$memory_0 = $_[0];
#line 1111
$memory_1 = c_rt_lib::ov_is($memory_0, 'ok');
#line 1111
if (c_rt_lib::check_true($memory_1)) {goto label_2;}
#line 1113
$memory_1 = c_rt_lib::ov_is($memory_0, 'err');
#line 1113
if (c_rt_lib::check_true($memory_1)) {goto label_3;}
#line 1113
$memory_1 = "NOMATCHALERT";
#line 1113
$memory_1 = [$memory_1,$memory_0];
#line 1113
die(dfile::ssave($memory_1));
#line 1111
label_2:
#line 1112
$memory_2 = [];
#line 1112
die(dfile::ssave($memory_2));
#line 1112
undef($memory_2);
#line 1113
goto label_1;
#line 1113
label_3:
#line 1113
$memory_2 = c_rt_lib::ov_as($memory_0, 'err');
#line 1114
$memory_3 = " ";
#line 1115
$memory_5 = $memory_2->{'stack'};
#line 1115
$memory_4 = array::len($memory_5);
#line 1115
undef($memory_5);
#line 1115
$memory_5 = 1;
#line 1115
$memory_4 = $memory_4 - $memory_5;
#line 1115
undef($memory_5);
#line 1115
label_5:
#line 1115
$memory_5 = 0;
#line 1115
$memory_5 = c_rt_lib::to_nl($memory_4 >= $memory_5);
#line 1115
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 1115
if (c_rt_lib::check_true($memory_5)) {goto label_4;}
#line 1116
$memory_6 = $memory_2->{'stack'};
#line 1116
$memory_6 = $memory_6->[$memory_4];
#line 1116
$memory_7 = c_rt_lib::ov_is($memory_6, 'ptd_arr');
#line 1116
if (c_rt_lib::check_true($memory_7)) {goto label_8;}
#line 1118
$memory_7 = c_rt_lib::ov_is($memory_6, 'ptd_var');
#line 1118
if (c_rt_lib::check_true($memory_7)) {goto label_9;}
#line 1120
$memory_7 = c_rt_lib::ov_is($memory_6, 'ptd_rec');
#line 1120
if (c_rt_lib::check_true($memory_7)) {goto label_10;}
#line 1122
$memory_7 = c_rt_lib::ov_is($memory_6, 'ptd_hash');
#line 1122
if (c_rt_lib::check_true($memory_7)) {goto label_11;}
#line 1122
$memory_7 = "NOMATCHALERT";
#line 1122
$memory_7 = [$memory_7,$memory_6];
#line 1122
die(dfile::ssave($memory_7));
#line 1116
label_8:
#line 1117
$memory_8 = "ptd::arr";
#line 1117
$memory_3 = $memory_3 . $memory_8;
#line 1117
undef($memory_8);
#line 1118
goto label_7;
#line 1118
label_9:
#line 1118
$memory_8 = c_rt_lib::ov_as($memory_6, 'ptd_var');
#line 1119
$memory_9 = "ptd::var(";
#line 1119
$memory_9 = $memory_9 . $memory_8;
#line 1119
$memory_10 = ")";
#line 1119
$memory_9 = $memory_9 . $memory_10;
#line 1119
undef($memory_10);
#line 1119
$memory_3 = $memory_3 . $memory_9;
#line 1119
undef($memory_9);
#line 1119
undef($memory_8);
#line 1120
goto label_7;
#line 1120
label_10:
#line 1120
$memory_8 = c_rt_lib::ov_as($memory_6, 'ptd_rec');
#line 1121
$memory_9 = "ptd::rec(";
#line 1121
$memory_9 = $memory_9 . $memory_8;
#line 1121
$memory_10 = ")";
#line 1121
$memory_9 = $memory_9 . $memory_10;
#line 1121
undef($memory_10);
#line 1121
$memory_3 = $memory_3 . $memory_9;
#line 1121
undef($memory_9);
#line 1121
undef($memory_8);
#line 1122
goto label_7;
#line 1122
label_11:
#line 1123
$memory_8 = "ptd::hash";
#line 1123
$memory_3 = $memory_3 . $memory_8;
#line 1123
undef($memory_8);
#line 1124
goto label_7;
#line 1124
label_7:
#line 1124
undef($memory_6);
#line 1124
undef($memory_7);
#line 1125
$memory_6 = "->";
#line 1125
$memory_3 = $memory_3 . $memory_6;
#line 1125
undef($memory_6);
#line 1125
$memory_6 = 1;
#line 1125
$memory_4 = $memory_4 - $memory_6;
#line 1125
undef($memory_6);
#line 1126
goto label_5;
#line 1126
label_4:
#line 1126
undef($memory_4);
#line 1126
undef($memory_5);
#line 1127
$memory_4 = $memory_2->{'from'};
#line 1127
$memory_4 = c_rt_lib::ov_is($memory_4, 'tct_rec');
#line 1127
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 1127
if (c_rt_lib::check_true($memory_5)) {goto label_14;}
#line 1127
$memory_4 = $memory_2->{'to'};
#line 1127
$memory_4 = c_rt_lib::ov_is($memory_4, 'tct_rec');
#line 1127
label_14:
#line 1127
undef($memory_5);
#line 1127
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 1127
if (c_rt_lib::check_true($memory_4)) {goto label_13;}
#line 1128
$memory_5 = $memory_2->{'from'};
#line 1128
$memory_5 = c_rt_lib::ov_as($memory_5, 'tct_rec');
#line 1128
$memory_8 = c_rt_lib::init_iter($memory_5);
#line 1128
label_17:
#line 1128
$memory_6 = c_rt_lib::is_end_hash($memory_8);
#line 1128
if (c_rt_lib::check_true($memory_6)) {goto label_15;}
#line 1128
$memory_6 = c_rt_lib::get_key_iter($memory_8);
#line 1128
$memory_7 = c_rt_lib::hash_get_value($memory_5, $memory_6);
#line 1129
$memory_10 = $memory_2->{'to'};
#line 1129
$memory_10 = c_rt_lib::ov_as($memory_10, 'tct_rec');
#line 1129
$memory_9 = hash::has_key($memory_10, $memory_6);
#line 1129
undef($memory_10);
#line 1129
$memory_9 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_9));
#line 1129
if (c_rt_lib::check_true($memory_9)) {goto label_19;}
#line 1129
undef($memory_9);
#line 1129
goto label_16;
#line 1129
goto label_19;
#line 1129
label_19:
#line 1129
undef($memory_9);
#line 1130
$memory_9 = "(ptd::rec with field: '";
#line 1130
$memory_9 = $memory_3 . $memory_9;
#line 1130
$memory_9 = $memory_9 . $memory_6;
#line 1130
$memory_10 = "' instead of ptd::rec without field: '";
#line 1130
$memory_9 = $memory_9 . $memory_10;
#line 1130
undef($memory_10);
#line 1130
$memory_9 = $memory_9 . $memory_6;
#line 1130
$memory_10 = "')";
#line 1130
$memory_9 = $memory_9 . $memory_10;
#line 1130
undef($memory_10);
#line 1130
undef($memory_0);
#line 1130
undef($memory_1);
#line 1130
undef($memory_2);
#line 1130
undef($memory_3);
#line 1130
undef($memory_4);
#line 1130
undef($memory_5);
#line 1130
undef($memory_6);
#line 1130
undef($memory_7);
#line 1130
undef($memory_8);
#line 1130
return $memory_9;
#line 1130
undef($memory_9);
#line 1130
label_16:
#line 1131
$memory_8 = c_rt_lib::next_iter($memory_8);
#line 1131
goto label_17;
#line 1131
label_15:
#line 1131
undef($memory_5);
#line 1131
undef($memory_6);
#line 1131
undef($memory_7);
#line 1131
undef($memory_8);
#line 1132
$memory_5 = $memory_2->{'to'};
#line 1132
$memory_5 = c_rt_lib::ov_as($memory_5, 'tct_rec');
#line 1132
$memory_8 = c_rt_lib::init_iter($memory_5);
#line 1132
label_22:
#line 1132
$memory_6 = c_rt_lib::is_end_hash($memory_8);
#line 1132
if (c_rt_lib::check_true($memory_6)) {goto label_20;}
#line 1132
$memory_6 = c_rt_lib::get_key_iter($memory_8);
#line 1132
$memory_7 = c_rt_lib::hash_get_value($memory_5, $memory_6);
#line 1133
$memory_10 = $memory_2->{'from'};
#line 1133
$memory_10 = c_rt_lib::ov_as($memory_10, 'tct_rec');
#line 1133
$memory_9 = hash::has_key($memory_10, $memory_6);
#line 1133
undef($memory_10);
#line 1133
$memory_9 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_9));
#line 1133
if (c_rt_lib::check_true($memory_9)) {goto label_24;}
#line 1133
undef($memory_9);
#line 1133
goto label_21;
#line 1133
goto label_24;
#line 1133
label_24:
#line 1133
undef($memory_9);
#line 1134
$memory_9 = "(ptd::rec without field: '";
#line 1134
$memory_9 = $memory_3 . $memory_9;
#line 1134
$memory_9 = $memory_9 . $memory_6;
#line 1134
$memory_10 = "' instead of ptd::rec with field: '";
#line 1134
$memory_9 = $memory_9 . $memory_10;
#line 1134
undef($memory_10);
#line 1134
$memory_9 = $memory_9 . $memory_6;
#line 1134
$memory_10 = "')";
#line 1134
$memory_9 = $memory_9 . $memory_10;
#line 1134
undef($memory_10);
#line 1134
undef($memory_0);
#line 1134
undef($memory_1);
#line 1134
undef($memory_2);
#line 1134
undef($memory_3);
#line 1134
undef($memory_4);
#line 1134
undef($memory_5);
#line 1134
undef($memory_6);
#line 1134
undef($memory_7);
#line 1134
undef($memory_8);
#line 1134
return $memory_9;
#line 1134
undef($memory_9);
#line 1134
label_21:
#line 1135
$memory_8 = c_rt_lib::next_iter($memory_8);
#line 1135
goto label_22;
#line 1135
label_20:
#line 1135
undef($memory_5);
#line 1135
undef($memory_6);
#line 1135
undef($memory_7);
#line 1135
undef($memory_8);
#line 1136
goto label_12;
#line 1136
label_13:
#line 1136
$memory_4 = $memory_2->{'from'};
#line 1136
$memory_4 = c_rt_lib::ov_is($memory_4, 'tct_var');
#line 1136
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 1136
if (c_rt_lib::check_true($memory_5)) {goto label_26;}
#line 1136
$memory_4 = $memory_2->{'to'};
#line 1136
$memory_4 = c_rt_lib::ov_is($memory_4, 'tct_var');
#line 1136
label_26:
#line 1136
undef($memory_5);
#line 1136
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 1136
if (c_rt_lib::check_true($memory_4)) {goto label_25;}
#line 1137
$memory_5 = $memory_2->{'from'};
#line 1137
$memory_5 = c_rt_lib::ov_as($memory_5, 'tct_var');
#line 1137
$memory_8 = c_rt_lib::init_iter($memory_5);
#line 1137
label_29:
#line 1137
$memory_6 = c_rt_lib::is_end_hash($memory_8);
#line 1137
if (c_rt_lib::check_true($memory_6)) {goto label_27;}
#line 1137
$memory_6 = c_rt_lib::get_key_iter($memory_8);
#line 1137
$memory_7 = c_rt_lib::hash_get_value($memory_5, $memory_6);
#line 1138
$memory_9 = $memory_2->{'to'};
#line 1138
$memory_9 = c_rt_lib::ov_as($memory_9, 'tct_var');
#line 1139
$memory_10 = hash::has_key($memory_9, $memory_6);
#line 1139
$memory_10 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_10));
#line 1139
if (c_rt_lib::check_true($memory_10)) {goto label_31;}
#line 1140
$memory_11 = c_rt_lib::ov_is($memory_7, 'no_param');
#line 1140
if (c_rt_lib::check_true($memory_11)) {goto label_33;}
#line 1144
$memory_11 = c_rt_lib::ov_is($memory_7, 'with_param');
#line 1144
if (c_rt_lib::check_true($memory_11)) {goto label_34;}
#line 1144
$memory_11 = "NOMATCHALERT";
#line 1144
$memory_11 = [$memory_11,$memory_7];
#line 1144
die(dfile::ssave($memory_11));
#line 1140
label_33:
#line 1141
$memory_12 = hash::get_value($memory_9, $memory_6);
#line 1141
$memory_12 = c_rt_lib::ov_is($memory_12, 'with_param');
#line 1141
$memory_12 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_12));
#line 1141
if (c_rt_lib::check_true($memory_12)) {goto label_36;}
#line 1142
$memory_13 = "(ptd::var case: '";
#line 1142
$memory_13 = $memory_3 . $memory_13;
#line 1142
$memory_13 = $memory_13 . $memory_6;
#line 1142
$memory_14 = "' no_param instead of ptd::var case: '";
#line 1142
$memory_13 = $memory_13 . $memory_14;
#line 1142
undef($memory_14);
#line 1142
$memory_13 = $memory_13 . $memory_6;
#line 1142
$memory_14 = "' with_param)";
#line 1142
$memory_13 = $memory_13 . $memory_14;
#line 1142
undef($memory_14);
#line 1142
undef($memory_0);
#line 1142
undef($memory_1);
#line 1142
undef($memory_2);
#line 1142
undef($memory_3);
#line 1142
undef($memory_4);
#line 1142
undef($memory_5);
#line 1142
undef($memory_6);
#line 1142
undef($memory_7);
#line 1142
undef($memory_8);
#line 1142
undef($memory_9);
#line 1142
undef($memory_10);
#line 1142
undef($memory_11);
#line 1142
undef($memory_12);
#line 1142
return $memory_13;
#line 1142
undef($memory_13);
#line 1143
goto label_36;
#line 1143
label_36:
#line 1143
undef($memory_12);
#line 1144
goto label_32;
#line 1144
label_34:
#line 1144
$memory_12 = c_rt_lib::ov_as($memory_7, 'with_param');
#line 1145
$memory_13 = hash::get_value($memory_9, $memory_6);
#line 1145
$memory_13 = c_rt_lib::ov_is($memory_13, 'no_param');
#line 1145
$memory_13 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_13));
#line 1145
if (c_rt_lib::check_true($memory_13)) {goto label_38;}
#line 1146
$memory_14 = "(ptd::var case: '";
#line 1146
$memory_14 = $memory_3 . $memory_14;
#line 1146
$memory_14 = $memory_14 . $memory_6;
#line 1146
$memory_15 = "' with_param instead of ptd::var case: '";
#line 1146
$memory_14 = $memory_14 . $memory_15;
#line 1146
undef($memory_15);
#line 1146
$memory_14 = $memory_14 . $memory_6;
#line 1146
$memory_15 = "' no_param)";
#line 1146
$memory_14 = $memory_14 . $memory_15;
#line 1146
undef($memory_15);
#line 1146
undef($memory_0);
#line 1146
undef($memory_1);
#line 1146
undef($memory_2);
#line 1146
undef($memory_3);
#line 1146
undef($memory_4);
#line 1146
undef($memory_5);
#line 1146
undef($memory_6);
#line 1146
undef($memory_7);
#line 1146
undef($memory_8);
#line 1146
undef($memory_9);
#line 1146
undef($memory_10);
#line 1146
undef($memory_11);
#line 1146
undef($memory_12);
#line 1146
undef($memory_13);
#line 1146
return $memory_14;
#line 1146
undef($memory_14);
#line 1147
goto label_38;
#line 1147
label_38:
#line 1147
undef($memory_13);
#line 1147
undef($memory_12);
#line 1148
goto label_32;
#line 1148
label_32:
#line 1148
undef($memory_11);
#line 1149
goto label_30;
#line 1149
label_31:
#line 1150
$memory_11 = "(ptd::var with case: '";
#line 1150
$memory_11 = $memory_3 . $memory_11;
#line 1150
$memory_11 = $memory_11 . $memory_6;
#line 1150
$memory_12 = "' instead of ptd::var without case: '";
#line 1150
$memory_11 = $memory_11 . $memory_12;
#line 1150
undef($memory_12);
#line 1150
$memory_11 = $memory_11 . $memory_6;
#line 1150
$memory_12 = "')";
#line 1150
$memory_11 = $memory_11 . $memory_12;
#line 1150
undef($memory_12);
#line 1150
undef($memory_0);
#line 1150
undef($memory_1);
#line 1150
undef($memory_2);
#line 1150
undef($memory_3);
#line 1150
undef($memory_4);
#line 1150
undef($memory_5);
#line 1150
undef($memory_6);
#line 1150
undef($memory_7);
#line 1150
undef($memory_8);
#line 1150
undef($memory_9);
#line 1150
undef($memory_10);
#line 1150
return $memory_11;
#line 1150
undef($memory_11);
#line 1151
goto label_30;
#line 1151
label_30:
#line 1151
undef($memory_10);
#line 1151
undef($memory_9);
#line 1152
$memory_8 = c_rt_lib::next_iter($memory_8);
#line 1152
goto label_29;
#line 1152
label_27:
#line 1152
undef($memory_5);
#line 1152
undef($memory_6);
#line 1152
undef($memory_7);
#line 1152
undef($memory_8);
#line 1153
goto label_12;
#line 1153
label_25:
#line 1154
$memory_5 = "(";
#line 1154
$memory_7 = $memory_2->{'from'};
#line 1154
$memory_6 = type_checker_priv::get_print_tct_label($memory_7);
#line 1154
undef($memory_7);
#line 1154
$memory_5 = $memory_5 . $memory_6;
#line 1154
undef($memory_6);
#line 1154
$memory_6 = " instead of ";
#line 1154
$memory_5 = $memory_5 . $memory_6;
#line 1154
undef($memory_6);
#line 1154
$memory_7 = $memory_2->{'to'};
#line 1154
$memory_6 = type_checker_priv::get_print_tct_label($memory_7);
#line 1154
undef($memory_7);
#line 1154
$memory_5 = $memory_5 . $memory_6;
#line 1154
undef($memory_6);
#line 1154
$memory_6 = ")";
#line 1154
$memory_5 = $memory_5 . $memory_6;
#line 1154
undef($memory_6);
#line 1154
$memory_3 = $memory_3 . $memory_5;
#line 1154
undef($memory_5);
#line 1155
goto label_12;
#line 1155
label_12:
#line 1155
undef($memory_4);
#line 1156
undef($memory_0);
#line 1156
undef($memory_1);
#line 1156
undef($memory_2);
#line 1156
return $memory_3;
#line 1156
undef($memory_3);
#line 1156
undef($memory_2);
#line 1157
goto label_1;
#line 1157
label_1:
#line 1157
undef($memory_1);
#line 1157
undef($memory_0);
#line 1157
return;
}

sub type_checker_priv::check_var_decl($$$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;$memory_0 = $_[0];$memory_1 = $_[1];Scalar::Util::weaken($_[1]) if ref($_[1]);$memory_2 = $_[2];Scalar::Util::weaken($_[2]) if ref($_[2]);$memory_3 = $_[3];Scalar::Util::weaken($_[3]) if ref($_[3]);
#line 1162
$memory_5 = c_rt_lib::to_nl(0);
#line 1162
$memory_4 = type_checker_priv::check_var_decl_try($memory_0, $memory_5, $memory_1, $memory_2, $memory_3);
#line 1162
undef($memory_5);
#line 1162
undef($memory_0);
#line 1162
$_[1] = $memory_1;$_[2] = $memory_2;$_[3] = $memory_3;return $memory_4;
#line 1162
undef($memory_4);
#line 1162
undef($memory_0);
#line 1162
$_[1] = $memory_1;$_[2] = $memory_2;$_[3] = $memory_3;return;
$_[1] = $memory_1;$_[2] = $memory_2;$_[3] = $memory_3;}

sub type_checker_priv::check_var_decl_try($$$$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;my $memory_13;my $memory_14;$memory_0 = $_[0];$memory_1 = $_[1];$memory_2 = $_[2];Scalar::Util::weaken($_[2]) if ref($_[2]);$memory_3 = $_[3];Scalar::Util::weaken($_[3]) if ref($_[3]);$memory_4 = $_[4];Scalar::Util::weaken($_[4]) if ref($_[4]);
#line 1168
$memory_6 = $memory_0->{'name'};
#line 1168
$memory_5 = hash::has_key($memory_3, $memory_6);
#line 1168
undef($memory_6);
#line 1168
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 1168
if (c_rt_lib::check_true($memory_5)) {goto label_2;}
#line 1168
$memory_6 = "variable `";
#line 1168
$memory_7 = $memory_0->{'name'};
#line 1168
$memory_6 = $memory_6 . $memory_7;
#line 1168
undef($memory_7);
#line 1168
$memory_7 = "' already exists";
#line 1168
$memory_6 = $memory_6 . $memory_7;
#line 1168
undef($memory_7);
#line 1168
type_checker_priv::add_error($memory_4, $memory_6);
#line 1168
undef($memory_6);
#line 1168
goto label_2;
#line 1168
label_2:
#line 1168
undef($memory_5);
#line 1169
$memory_5 = tct::empty();
#line 1170
$memory_6 = $memory_0->{'type'};
#line 1170
$memory_7 = c_rt_lib::ov_is($memory_6, 'type');
#line 1170
if (c_rt_lib::check_true($memory_7)) {goto label_4;}
#line 1178
$memory_7 = c_rt_lib::ov_is($memory_6, 'none');
#line 1178
if (c_rt_lib::check_true($memory_7)) {goto label_5;}
#line 1178
$memory_7 = "NOMATCHALERT";
#line 1178
$memory_7 = [$memory_7,$memory_6];
#line 1178
die(dfile::ssave($memory_7));
#line 1170
label_4:
#line 1170
$memory_8 = c_rt_lib::ov_as($memory_6, 'type');
#line 1171
$memory_9 = ptd_parser::try_value_to_ptd($memory_8);
#line 1171
$memory_10 = c_rt_lib::ov_is($memory_9, 'err');
#line 1171
if (c_rt_lib::check_true($memory_10)) {goto label_7;}
#line 1174
$memory_10 = c_rt_lib::ov_is($memory_9, 'ok');
#line 1174
if (c_rt_lib::check_true($memory_10)) {goto label_8;}
#line 1174
$memory_10 = "NOMATCHALERT";
#line 1174
$memory_10 = [$memory_10,$memory_9];
#line 1174
die(dfile::ssave($memory_10));
#line 1171
label_7:
#line 1171
$memory_11 = c_rt_lib::ov_as($memory_9, 'err');
#line 1172
type_checker_priv::add_error($memory_4, $memory_11);
#line 1173
$memory_12 = tct::tct_im();
#line 1173
$memory_5 = $memory_12;
#line 1173
undef($memory_12);
#line 1173
undef($memory_11);
#line 1174
goto label_6;
#line 1174
label_8:
#line 1174
$memory_11 = c_rt_lib::ov_as($memory_9, 'ok');
#line 1175
$memory_5 = $memory_11;
#line 1176
type_checker_priv::check_types_imported($memory_11, $memory_2, $memory_4);
#line 1176
undef($memory_11);
#line 1177
goto label_6;
#line 1177
label_6:
#line 1177
undef($memory_9);
#line 1177
undef($memory_10);
#line 1177
undef($memory_8);
#line 1178
goto label_3;
#line 1178
label_5:
#line 1179
goto label_3;
#line 1179
label_3:
#line 1179
undef($memory_6);
#line 1179
undef($memory_7);
#line 1180
$memory_6 = $memory_0->{'value'};
#line 1180
$memory_7 = c_rt_lib::ov_is($memory_6, 'value');
#line 1180
if (c_rt_lib::check_true($memory_7)) {goto label_10;}
#line 1200
$memory_7 = c_rt_lib::ov_is($memory_6, 'none');
#line 1200
if (c_rt_lib::check_true($memory_7)) {goto label_11;}
#line 1200
$memory_7 = "NOMATCHALERT";
#line 1200
$memory_7 = [$memory_7,$memory_6];
#line 1200
die(dfile::ssave($memory_7));
#line 1180
label_10:
#line 1180
$memory_8 = c_rt_lib::ov_as($memory_6, 'value');
#line 1181
$memory_9 = type_checker_priv::check_val($memory_8, $memory_2, $memory_3, $memory_4);
#line 1182
$memory_11 = $memory_9->{'type'};
#line 1182
$memory_12 = "tct_void";
#line 1182
$memory_10 = ov::is($memory_11, $memory_12);
#line 1182
undef($memory_12);
#line 1182
undef($memory_11);
#line 1182
$memory_10 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_10));
#line 1182
if (c_rt_lib::check_true($memory_10)) {goto label_13;}
#line 1183
$memory_11 = "cannot use 'void' type returned from function as value";
#line 1183
type_checker_priv::add_error($memory_4, $memory_11);
#line 1183
undef($memory_11);
#line 1184
$memory_12 = c_rt_lib::ov_mk_none('yes');
#line 1184
$memory_13 = tct::tct_im();
#line 1184
$memory_11 = {overwrited => $memory_12,type => $memory_13,};
#line 1184
undef($memory_12);
#line 1184
undef($memory_13);
#line 1184
undef($memory_0);
#line 1184
undef($memory_1);
#line 1184
undef($memory_5);
#line 1184
undef($memory_6);
#line 1184
undef($memory_7);
#line 1184
undef($memory_8);
#line 1184
undef($memory_9);
#line 1184
undef($memory_10);
#line 1184
$_[2] = $memory_2;$_[3] = $memory_3;$_[4] = $memory_4;return $memory_11;
#line 1184
undef($memory_11);
#line 1185
goto label_13;
#line 1185
label_13:
#line 1185
undef($memory_10);
#line 1186
$memory_10 = $memory_1;
#line 1186
$memory_10 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_10));
#line 1186
if (c_rt_lib::check_true($memory_10)) {goto label_15;}
#line 1187
$memory_11 = ptd_system::get_try_ensure_ok_type($memory_9, $memory_2, $memory_4);
#line 1187
$memory_12 = $memory_11;
#line 1187
 if (c_rt_lib::get_hashcount($memory_9) > 1) {$memory_9 = {%{$memory_9}};}$memory_9->{'type'} = $memory_12;
#line 1187
undef($memory_11);
#line 1187
undef($memory_12);
#line 1188
goto label_15;
#line 1188
label_15:
#line 1188
undef($memory_10);
#line 1189
$memory_11 = "tct_empty";
#line 1189
$memory_10 = ov::is($memory_5, $memory_11);
#line 1189
undef($memory_11);
#line 1189
$memory_10 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_10));
#line 1189
if (c_rt_lib::check_true($memory_10)) {goto label_17;}
#line 1190
$memory_11 = tct::tct_im();
#line 1190
ptd_system::check_assignment($memory_11, $memory_9, $memory_2, $memory_4);
#line 1190
undef($memory_11);
#line 1191
$memory_11 = $memory_9->{'type'};
#line 1191
$memory_5 = $memory_11;
#line 1191
undef($memory_11);
#line 1192
$memory_12 = c_rt_lib::ov_mk_none('yes');
#line 1192
$memory_11 = {overwrited => $memory_12,type => $memory_5,};
#line 1192
undef($memory_12);
#line 1192
undef($memory_0);
#line 1192
undef($memory_1);
#line 1192
undef($memory_5);
#line 1192
undef($memory_6);
#line 1192
undef($memory_7);
#line 1192
undef($memory_8);
#line 1192
undef($memory_9);
#line 1192
undef($memory_10);
#line 1192
$_[2] = $memory_2;$_[3] = $memory_3;$_[4] = $memory_4;return $memory_11;
#line 1192
undef($memory_11);
#line 1193
goto label_16;
#line 1193
label_17:
#line 1194
$memory_11 = ptd_system::check_assignment($memory_5, $memory_9, $memory_2, $memory_4);
#line 1195
$memory_13 = "err";
#line 1195
$memory_12 = ov::is($memory_11, $memory_13);
#line 1195
undef($memory_13);
#line 1195
$memory_12 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_12));
#line 1195
if (c_rt_lib::check_true($memory_12)) {goto label_19;}
#line 1196
$memory_13 = "invalid type in variable declaration: ";
#line 1196
$memory_14 = type_checker_priv::get_print_check_info($memory_11);
#line 1196
$memory_13 = $memory_13 . $memory_14;
#line 1196
undef($memory_14);
#line 1196
type_checker_priv::add_error($memory_4, $memory_13);
#line 1196
undef($memory_13);
#line 1197
goto label_19;
#line 1197
label_19:
#line 1197
undef($memory_12);
#line 1198
$memory_13 = c_rt_lib::ov_mk_none('no');
#line 1198
$memory_12 = {overwrited => $memory_13,type => $memory_5,};
#line 1198
undef($memory_13);
#line 1198
undef($memory_0);
#line 1198
undef($memory_1);
#line 1198
undef($memory_5);
#line 1198
undef($memory_6);
#line 1198
undef($memory_7);
#line 1198
undef($memory_8);
#line 1198
undef($memory_9);
#line 1198
undef($memory_10);
#line 1198
undef($memory_11);
#line 1198
$_[2] = $memory_2;$_[3] = $memory_3;$_[4] = $memory_4;return $memory_12;
#line 1198
undef($memory_12);
#line 1198
undef($memory_11);
#line 1199
goto label_16;
#line 1199
label_16:
#line 1199
undef($memory_10);
#line 1199
undef($memory_9);
#line 1199
undef($memory_8);
#line 1200
goto label_9;
#line 1200
label_11:
#line 1201
$memory_9 = "tct_empty";
#line 1201
$memory_8 = ov::is($memory_5, $memory_9);
#line 1201
undef($memory_9);
#line 1201
$memory_8 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 1201
if (c_rt_lib::check_true($memory_8)) {goto label_21;}
#line 1201
$memory_10 = c_rt_lib::ov_mk_none('yes');
#line 1201
$memory_9 = {overwrited => $memory_10,type => $memory_5,};
#line 1201
undef($memory_10);
#line 1201
undef($memory_0);
#line 1201
undef($memory_1);
#line 1201
undef($memory_5);
#line 1201
undef($memory_6);
#line 1201
undef($memory_7);
#line 1201
undef($memory_8);
#line 1201
$_[2] = $memory_2;$_[3] = $memory_3;$_[4] = $memory_4;return $memory_9;
#line 1201
undef($memory_9);
#line 1201
goto label_21;
#line 1201
label_21:
#line 1201
undef($memory_8);
#line 1202
goto label_9;
#line 1202
label_9:
#line 1202
undef($memory_6);
#line 1202
undef($memory_7);
#line 1203
$memory_7 = c_rt_lib::ov_mk_none('no');
#line 1203
$memory_6 = {overwrited => $memory_7,type => $memory_5,};
#line 1203
undef($memory_7);
#line 1203
undef($memory_0);
#line 1203
undef($memory_1);
#line 1203
undef($memory_5);
#line 1203
$_[2] = $memory_2;$_[3] = $memory_3;$_[4] = $memory_4;return $memory_6;
#line 1203
undef($memory_6);
#line 1203
undef($memory_5);
#line 1203
undef($memory_0);
#line 1203
undef($memory_1);
#line 1203
$_[2] = $memory_2;$_[3] = $memory_3;$_[4] = $memory_4;return;
$_[2] = $memory_2;$_[3] = $memory_3;$_[4] = $memory_4;}

sub type_checker_priv::add_var_to_vars($$$) {
my $memory_0;my $memory_1;my $memory_2;$memory_0 = $_[0];$memory_1 = $_[1];$memory_2 = $_[2];Scalar::Util::weaken($_[2]) if ref($_[2]);
#line 1207
hash::set_value($memory_2, $memory_1, $memory_0);
#line 1207
undef($memory_0);
#line 1207
undef($memory_1);
#line 1207
$_[2] = $memory_2;return;
$_[2] = $memory_2;}

sub type_checker_priv::add_var_decl_to_vars($$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;$memory_0 = $_[0];$memory_1 = $_[1];$memory_2 = $_[2];Scalar::Util::weaken($_[2]) if ref($_[2]);
#line 1211
$memory_4 = "tct_im";
#line 1211
$memory_3 = ov::is($memory_0, $memory_4);
#line 1211
undef($memory_4);
#line 1211
if (c_rt_lib::check_true($memory_3)) {goto label_3;}
#line 1211
$memory_4 = "tct_empty";
#line 1211
$memory_3 = ov::is($memory_0, $memory_4);
#line 1211
undef($memory_4);
#line 1211
label_3:
#line 1211
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 1211
if (c_rt_lib::check_true($memory_3)) {goto label_2;}
#line 1212
$memory_5 = c_rt_lib::ov_mk_none('yes');
#line 1212
$memory_4 = {overwrited => $memory_5,type => $memory_0,};
#line 1212
undef($memory_5);
#line 1212
type_checker_priv::add_var_to_vars($memory_4, $memory_1, $memory_2);
#line 1212
undef($memory_4);
#line 1213
goto label_1;
#line 1213
label_2:
#line 1214
$memory_5 = c_rt_lib::ov_mk_none('no');
#line 1214
$memory_4 = {overwrited => $memory_5,type => $memory_0,};
#line 1214
undef($memory_5);
#line 1214
type_checker_priv::add_var_to_vars($memory_4, $memory_1, $memory_2);
#line 1214
undef($memory_4);
#line 1215
goto label_1;
#line 1215
label_1:
#line 1215
undef($memory_3);
#line 1215
undef($memory_0);
#line 1215
undef($memory_1);
#line 1215
$_[2] = $memory_2;return;
$_[2] = $memory_2;}

sub type_checker_priv::add_var_decl_with_type_and_check($$$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;$memory_0 = $_[0];$memory_1 = $_[1];$memory_2 = $_[2];Scalar::Util::weaken($_[2]) if ref($_[2]);$memory_3 = $_[3];Scalar::Util::weaken($_[3]) if ref($_[3]);
#line 1220
$memory_5 = $memory_0->{'name'};
#line 1220
$memory_4 = hash::has_key($memory_2, $memory_5);
#line 1220
undef($memory_5);
#line 1220
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 1220
if (c_rt_lib::check_true($memory_4)) {goto label_2;}
#line 1220
$memory_5 = "variable `";
#line 1220
$memory_6 = $memory_0->{'name'};
#line 1220
$memory_5 = $memory_5 . $memory_6;
#line 1220
undef($memory_6);
#line 1220
$memory_6 = "' already exists";
#line 1220
$memory_5 = $memory_5 . $memory_6;
#line 1220
undef($memory_6);
#line 1220
type_checker_priv::add_error($memory_3, $memory_5);
#line 1220
undef($memory_5);
#line 1220
goto label_2;
#line 1220
label_2:
#line 1220
undef($memory_4);
#line 1221
$memory_4 = type_checker_priv::is_known($memory_1);
#line 1221
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 1221
if (c_rt_lib::check_true($memory_4)) {goto label_4;}
#line 1222
$memory_6 = c_rt_lib::ov_mk_none('no');
#line 1222
$memory_7 = $memory_1->{'type'};
#line 1222
$memory_5 = {overwrited => $memory_6,type => $memory_7,};
#line 1222
undef($memory_6);
#line 1222
undef($memory_7);
#line 1222
$memory_6 = $memory_0->{'name'};
#line 1222
type_checker_priv::add_var_to_vars($memory_5, $memory_6, $memory_2);
#line 1222
undef($memory_6);
#line 1222
undef($memory_5);
#line 1223
goto label_3;
#line 1223
label_4:
#line 1224
$memory_6 = c_rt_lib::ov_mk_none('yes');
#line 1224
$memory_7 = $memory_1->{'type'};
#line 1224
$memory_5 = {overwrited => $memory_6,type => $memory_7,};
#line 1224
undef($memory_6);
#line 1224
undef($memory_7);
#line 1224
$memory_6 = $memory_0->{'name'};
#line 1224
type_checker_priv::add_var_to_vars($memory_5, $memory_6, $memory_2);
#line 1224
undef($memory_6);
#line 1224
undef($memory_5);
#line 1225
goto label_3;
#line 1225
label_3:
#line 1225
undef($memory_4);
#line 1225
undef($memory_0);
#line 1225
undef($memory_1);
#line 1225
$_[2] = $memory_2;$_[3] = $memory_3;return;
$_[2] = $memory_2;$_[3] = $memory_3;}

sub type_checker_priv::is_known($) {
my $memory_0;my $memory_1;my $memory_2;$memory_0 = $_[0];
#line 1228
$memory_2 = $memory_0->{'src'};
#line 1228
$memory_1 = ptd_system::is_known($memory_2);
#line 1228
undef($memory_2);
#line 1228
undef($memory_0);
#line 1228
return $memory_1;
#line 1228
undef($memory_1);
#line 1228
undef($memory_0);
#line 1228
return;
}

sub type_checker_priv::get_function_name($$) {
my $memory_0;my $memory_1;my $memory_2;$memory_0 = $_[0];$memory_1 = $_[1];
#line 1231
$memory_2 = "";
#line 1231
$memory_2 = c_rt_lib::to_nl($memory_0 ne $memory_2);
#line 1231
if (c_rt_lib::check_true($memory_2)) {goto label_2;}
#line 1231
$memory_2 = "";
#line 1231
goto label_1;
#line 1231
label_2:
#line 1231
$memory_2 = "::";
#line 1231
$memory_2 = $memory_0 . $memory_2;
#line 1231
label_1:
#line 1231
$memory_2 = $memory_2 . $memory_1;
#line 1231
undef($memory_0);
#line 1231
undef($memory_1);
#line 1231
return $memory_2;
#line 1231
undef($memory_2);
#line 1231
undef($memory_0);
#line 1231
undef($memory_1);
#line 1231
return;
}

sub type_checker_priv::get_fun_module($$) {
my $memory_0;my $memory_1;my $memory_2;$memory_0 = $_[0];$memory_1 = $_[1];
#line 1235
$memory_2 = "";
#line 1235
$memory_2 = c_rt_lib::to_nl($memory_0 eq $memory_2);
#line 1235
if (c_rt_lib::check_true($memory_2)) {goto label_2;}
#line 1235
$memory_2 = $memory_0;
#line 1235
goto label_1;
#line 1235
label_2:
#line 1235
$memory_2 = $memory_1;
#line 1235
label_1:
#line 1235
undef($memory_0);
#line 1235
undef($memory_1);
#line 1235
return $memory_2;
#line 1235
undef($memory_2);
#line 1235
undef($memory_0);
#line 1235
undef($memory_1);
#line 1235
return;
}

sub type_checker_priv::get_function_def($$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;$memory_0 = $_[0];$memory_1 = $_[1];$memory_2 = $_[2];
#line 1240
$memory_5 = $memory_2->{'funs'};
#line 1240
$memory_7 = $memory_2->{'env'};
#line 1240
$memory_7 = $memory_7->{'current_module'};
#line 1240
$memory_6 = type_checker_priv::get_fun_module($memory_0, $memory_7);
#line 1240
undef($memory_7);
#line 1240
$memory_4 = hash::get_value($memory_5, $memory_6);
#line 1240
undef($memory_6);
#line 1240
undef($memory_5);
#line 1240
$memory_5 = type_checker_priv::get_fun_key($memory_1, $memory_0);
#line 1240
$memory_3 = hash::get_value($memory_4, $memory_5);
#line 1240
undef($memory_5);
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
undef($memory_0);
#line 1240
undef($memory_1);
#line 1240
undef($memory_2);
#line 1240
return;
}

sub type_checker_priv::check_function_exists($$$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;$memory_0 = $_[0];$memory_1 = $_[1];$memory_2 = $_[2];Scalar::Util::weaken($_[2]) if ref($_[2]);$memory_3 = $_[3];Scalar::Util::weaken($_[3]) if ref($_[3]);
#line 1246
$memory_5 = $memory_2->{'env'};
#line 1246
$memory_5 = $memory_5->{'current_module'};
#line 1246
$memory_4 = type_checker_priv::get_fun_module($memory_0, $memory_5);
#line 1246
undef($memory_5);
#line 1247
$memory_6 = $memory_2->{'imports'};
#line 1247
$memory_5 = hash::has_key($memory_6, $memory_4);
#line 1247
undef($memory_6);
#line 1247
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 1247
if (c_rt_lib::check_true($memory_5)) {goto label_3;}
#line 1247
$memory_6 = $memory_2->{'imports'};
#line 1247
$memory_5 = hash::get_value($memory_6, $memory_4);
#line 1247
undef($memory_6);
#line 1247
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 1247
label_3:
#line 1247
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 1247
if (c_rt_lib::check_true($memory_5)) {goto label_2;}
#line 1248
$memory_7 = $memory_2->{'imports'};
#line 1248
$memory_6 = hash::has_key($memory_7, $memory_4);
#line 1248
undef($memory_7);
#line 1248
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 1248
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 1248
if (c_rt_lib::check_true($memory_6)) {goto label_5;}
#line 1248
$memory_7 = "module '";
#line 1248
$memory_7 = $memory_7 . $memory_4;
#line 1248
$memory_8 = "' not imported";
#line 1248
$memory_7 = $memory_7 . $memory_8;
#line 1248
undef($memory_8);
#line 1248
type_checker_priv::add_error($memory_3, $memory_7);
#line 1248
undef($memory_7);
#line 1248
goto label_5;
#line 1248
label_5:
#line 1248
undef($memory_6);
#line 1249
$memory_6 = "imports";
#line 1249
$memory_6 = c_rt_lib::get_ref_hash($memory_2, $memory_6);
#line 1249
$memory_7 = c_rt_lib::to_nl(0);
#line 1249
hash::set_value($memory_6, $memory_4, $memory_7);
#line 1249
undef($memory_7);
#line 1249
$memory_7 = "imports";
#line 1249
c_rt_lib::set_ref_hash($memory_2, $memory_7, $memory_6);
#line 1249
undef($memory_7);
#line 1249
undef($memory_6);
#line 1250
$memory_6 = c_rt_lib::to_nl(0);
#line 1250
undef($memory_0);
#line 1250
undef($memory_1);
#line 1250
undef($memory_4);
#line 1250
undef($memory_5);
#line 1250
$_[2] = $memory_2;$_[3] = $memory_3;return $memory_6;
#line 1250
undef($memory_6);
#line 1251
goto label_6;
#line 1251
label_2:
#line 1251
$memory_6 = $memory_2->{'funs'};
#line 1251
$memory_5 = hash::has_key($memory_6, $memory_4);
#line 1251
undef($memory_6);
#line 1251
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 1251
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 1251
if (c_rt_lib::check_true($memory_5)) {goto label_6;}
#line 1252
$memory_6 = c_rt_lib::to_nl(0);
#line 1252
undef($memory_0);
#line 1252
undef($memory_1);
#line 1252
undef($memory_4);
#line 1252
undef($memory_5);
#line 1252
$_[2] = $memory_2;$_[3] = $memory_3;return $memory_6;
#line 1252
undef($memory_6);
#line 1253
goto label_6;
#line 1253
label_6:
#line 1253
undef($memory_5);
#line 1255
$memory_7 = $memory_2->{'funs'};
#line 1255
$memory_6 = hash::get_value($memory_7, $memory_4);
#line 1255
undef($memory_7);
#line 1255
$memory_7 = type_checker_priv::get_fun_key($memory_1, $memory_0);
#line 1255
$memory_5 = hash::has_key($memory_6, $memory_7);
#line 1255
undef($memory_7);
#line 1255
undef($memory_6);
#line 1255
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 1255
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 1255
if (c_rt_lib::check_true($memory_5)) {goto label_8;}
#line 1256
$memory_6 = "function `";
#line 1256
$memory_7 = type_checker_priv::get_function_name($memory_0, $memory_1);
#line 1256
$memory_6 = $memory_6 . $memory_7;
#line 1256
undef($memory_7);
#line 1256
$memory_7 = "' does not exist";
#line 1256
$memory_6 = $memory_6 . $memory_7;
#line 1256
undef($memory_7);
#line 1256
type_checker_priv::add_error($memory_3, $memory_6);
#line 1256
undef($memory_6);
#line 1257
$memory_6 = c_rt_lib::to_nl(0);
#line 1257
undef($memory_0);
#line 1257
undef($memory_1);
#line 1257
undef($memory_4);
#line 1257
undef($memory_5);
#line 1257
$_[2] = $memory_2;$_[3] = $memory_3;return $memory_6;
#line 1257
undef($memory_6);
#line 1258
goto label_8;
#line 1258
label_8:
#line 1258
undef($memory_5);
#line 1260
$memory_5 = c_rt_lib::to_nl(1);
#line 1260
undef($memory_0);
#line 1260
undef($memory_1);
#line 1260
undef($memory_4);
#line 1260
$_[2] = $memory_2;$_[3] = $memory_3;return $memory_5;
#line 1260
undef($memory_5);
#line 1260
undef($memory_4);
#line 1260
undef($memory_0);
#line 1260
undef($memory_1);
#line 1260
$_[2] = $memory_2;$_[3] = $memory_3;return;
$_[2] = $memory_2;$_[3] = $memory_3;}

sub type_checker_priv::add_error($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];
#line 1264
$memory_2 = "errors";
#line 1264
$memory_2 = c_rt_lib::get_ref_hash($memory_0, $memory_2);
#line 1264
$memory_4 = $memory_0->{'current_line'};
#line 1264
$memory_5 = $memory_0->{'module'};
#line 1264
$memory_3 = {msg => $memory_1,line => $memory_4,module => $memory_5,};
#line 1264
undef($memory_4);
#line 1264
undef($memory_5);
#line 1264
array::push($memory_2, $memory_3);
#line 1264
undef($memory_3);
#line 1264
$memory_3 = "errors";
#line 1264
c_rt_lib::set_ref_hash($memory_0, $memory_3, $memory_2);
#line 1264
undef($memory_3);
#line 1264
undef($memory_2);
#line 1264
undef($memory_1);
#line 1264
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub type_checker_priv::add_warning($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];
#line 1267
$memory_2 = "warnings";
#line 1267
$memory_2 = c_rt_lib::get_ref_hash($memory_0, $memory_2);
#line 1267
$memory_4 = $memory_0->{'current_line'};
#line 1267
$memory_5 = $memory_0->{'module'};
#line 1267
$memory_3 = {msg => $memory_1,line => $memory_4,module => $memory_5,};
#line 1267
undef($memory_4);
#line 1267
undef($memory_5);
#line 1267
array::push($memory_2, $memory_3);
#line 1267
undef($memory_3);
#line 1267
$memory_3 = "warnings";
#line 1267
c_rt_lib::set_ref_hash($memory_0, $memory_3, $memory_2);
#line 1267
undef($memory_3);
#line 1267
undef($memory_2);
#line 1267
undef($memory_1);
#line 1267
$_[0] = $memory_0;return;
$_[0] = $memory_0;}
