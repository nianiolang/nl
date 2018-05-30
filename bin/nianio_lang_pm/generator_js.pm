use c_rt_lib;
use array;
use nl;
use string;
use string_utils;
use boolean_t;
use ov;
use nlasm;
use ptd;
sub generator_js_priv::get_namespace_name;
sub generator_js::generate;
sub generator_js_priv::print_const_value_aggr;
sub generator_js_priv::get_function_name;
sub generator_js_priv::get_function_call_name;
sub generator_js_priv::get_function_call_name_raw;
sub generator_js_priv::escape_string;
sub generator_js_priv::print_str_imm;
sub generator_js_priv::is_singleton_use_function;
sub generator_js_priv::print_function_or_singleton;
sub generator_js_priv::print_function;
sub generator_js_priv::print_command;
sub generator_js_priv::print_arr;
sub generator_js_priv::imm_call;
sub generator_js_priv::print_bin_op;
sub generator_js_priv::print_call;
sub generator_js_priv::process_ref_reg;
sub generator_js_priv::print_internal_call;
sub generator_js_priv::print_int_call_sim;
sub generator_js_priv::print_const_arr;
sub generator_js_priv::print_const_hash;
sub generator_js_priv::print_const_ov;
sub generator_js_priv::print_const_value;
sub generator_js_priv::print_goto;
sub generator_js_priv::print_hash;
sub generator_js_priv::print_ov_mk;
sub generator_js_priv::print_register;
sub generator_js_priv::print_register_to_assign;
sub generator_js_priv::print_return;
sub generator_js_priv::print_una_op;

return 1;

sub generator_js_priv::__get_namespace_name() {
my $memory_0;
#line 16
$memory_0 = "_namespace";
#line 16
return $memory_0;
#line 16
undef($memory_0);
#line 16
return;
}

my $_get_namespace_name;
sub generator_js_priv::get_namespace_name() {
	$_get_namespace_name = generator_js_priv::__get_namespace_name() unless defined $_get_namespace_name;
	return $_get_namespace_name;
}

sub generator_js::generate($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;$memory_0 = $_[0];$memory_1 = $_[1];
#line 20
$memory_2 = "";
#line 21
$memory_4 = [];
#line 21
$memory_5 = "__const_";
#line 21
$memory_3 = {arr => $memory_4,name => $memory_5,};
#line 21
undef($memory_4);
#line 21
undef($memory_5);
#line 22
$memory_4 = $memory_0->{'functions'};
#line 22
$memory_6 = 0;
#line 22
$memory_7 = 1;
#line 22
$memory_8 = c_rt_lib::array_len($memory_4);
#line 22
label_10:
#line 22
$memory_9 = c_rt_lib::to_nl($memory_6 >= $memory_8);
#line 22
if (c_rt_lib::check_true($memory_9)) {goto label_21;}
#line 22
$memory_5 = $memory_4->[$memory_6];
#line 22
$memory_11 = $memory_0->{'module_name'};
#line 22
$memory_10 = generator_js_priv::print_function_or_singleton($memory_5, $memory_11, $memory_3);
#line 22
undef($memory_11);
#line 22
$memory_2 = $memory_2 . $memory_10;
#line 22
undef($memory_10);
#line 22
$memory_6 = $memory_6 + $memory_7;
#line 22
goto label_10;
#line 22
label_21:
#line 22
undef($memory_4);
#line 22
undef($memory_5);
#line 22
undef($memory_6);
#line 22
undef($memory_7);
#line 22
undef($memory_8);
#line 22
undef($memory_9);
#line 23
$memory_4 = "var ";
#line 23
$memory_5 = $memory_3->{'name'};
#line 23
$memory_4 = $memory_4 . $memory_5;
#line 23
undef($memory_5);
#line 23
$memory_5 = " = [];";
#line 23
$memory_4 = $memory_4 . $memory_5;
#line 23
undef($memory_5);
#line 23
$memory_2 = $memory_2 . $memory_4;
#line 23
undef($memory_4);
#line 24
$memory_4 = 0;
#line 25
$memory_5 = $memory_3->{'arr'};
#line 25
$memory_7 = 0;
#line 25
$memory_8 = 1;
#line 25
$memory_9 = c_rt_lib::array_len($memory_5);
#line 25
label_42:
#line 25
$memory_10 = c_rt_lib::to_nl($memory_7 >= $memory_9);
#line 25
if (c_rt_lib::check_true($memory_10)) {goto label_67;}
#line 25
$memory_6 = $memory_5->[$memory_7];
#line 26
$memory_11 = $memory_3->{'name'};
#line 26
$memory_12 = "[";
#line 26
$memory_11 = $memory_11 . $memory_12;
#line 26
undef($memory_12);
#line 26
$memory_11 = $memory_11 . $memory_4;
#line 26
$memory_12 = "] = ";
#line 26
$memory_11 = $memory_11 . $memory_12;
#line 26
undef($memory_12);
#line 26
$memory_12 = generator_js_priv::print_const_value($memory_6);
#line 26
$memory_11 = $memory_11 . $memory_12;
#line 26
undef($memory_12);
#line 26
$memory_12 = ";";
#line 26
$memory_11 = $memory_11 . $memory_12;
#line 26
undef($memory_12);
#line 26
$memory_2 = $memory_2 . $memory_11;
#line 26
undef($memory_11);
#line 27
$memory_11 = 1;
#line 27
$memory_4 = $memory_4 + $memory_11;
#line 27
undef($memory_11);
#line 28
$memory_7 = $memory_7 + $memory_8;
#line 28
goto label_42;
#line 28
label_67:
#line 28
undef($memory_5);
#line 28
undef($memory_6);
#line 28
undef($memory_7);
#line 28
undef($memory_8);
#line 28
undef($memory_9);
#line 28
undef($memory_10);
#line 29
$memory_5 = "var ";
#line 29
$memory_5 = $memory_5 . $memory_1;
#line 29
$memory_6 = ";
(function(";
#line 29
$memory_5 = $memory_5 . $memory_6;
#line 29
undef($memory_6);
#line 30
$memory_6 = generator_js_priv::get_namespace_name();
#line 30
$memory_5 = $memory_5 . $memory_6;
#line 30
undef($memory_6);
#line 30
$memory_6 = " , undefined) {
";
#line 30
$memory_5 = $memory_5 . $memory_6;
#line 30
undef($memory_6);
#line 31
$memory_6 = generator_js_priv::get_namespace_name();
#line 31
$memory_5 = $memory_5 . $memory_6;
#line 31
undef($memory_6);
#line 31
$memory_6 = ".";
#line 31
$memory_5 = $memory_5 . $memory_6;
#line 31
undef($memory_6);
#line 31
$memory_6 = $memory_0->{'module_name'};
#line 31
$memory_5 = $memory_5 . $memory_6;
#line 31
undef($memory_6);
#line 31
$memory_6 = " = {};
";
#line 31
$memory_5 = $memory_5 . $memory_6;
#line 31
undef($memory_6);
#line 31
$memory_5 = $memory_5 . $memory_2;
#line 32
$memory_6 = "
})(";
#line 32
$memory_5 = $memory_5 . $memory_6;
#line 32
undef($memory_6);
#line 32
$memory_5 = $memory_5 . $memory_1;
#line 33
$memory_6 = " = ";
#line 33
$memory_5 = $memory_5 . $memory_6;
#line 33
undef($memory_6);
#line 33
$memory_6 = " ";
#line 33
$memory_5 = $memory_5 . $memory_6;
#line 33
undef($memory_6);
#line 33
$memory_5 = $memory_5 . $memory_1;
#line 33
$memory_6 = " || {}); ";
#line 33
$memory_5 = $memory_5 . $memory_6;
#line 33
undef($memory_6);
#line 33
undef($memory_0);
#line 33
undef($memory_1);
#line 33
undef($memory_2);
#line 33
undef($memory_3);
#line 33
undef($memory_4);
#line 33
return $memory_5;
#line 33
undef($memory_5);
#line 33
undef($memory_2);
#line 33
undef($memory_3);
#line 33
undef($memory_4);
#line 33
undef($memory_0);
#line 33
undef($memory_1);
#line 33
return;
}

sub generator_js_priv::print_const_value_aggr($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;$memory_0 = $_[0];$memory_1 = $_[1];Scalar::Util::weaken($_[1]) if ref($_[1]);
#line 37
$memory_2 = "arr";
#line 37
$memory_2 = c_rt_lib::get_ref_hash($memory_1, $memory_2);
#line 37
array::push($memory_2, $memory_0);
#line 37
$memory_3 = "arr";
#line 37
c_rt_lib::set_ref_hash($memory_1, $memory_3, $memory_2);
#line 37
undef($memory_3);
#line 37
undef($memory_2);
#line 38
$memory_2 = $memory_1->{'name'};
#line 38
$memory_3 = "[";
#line 38
$memory_2 = $memory_2 . $memory_3;
#line 38
undef($memory_3);
#line 38
$memory_4 = $memory_1->{'arr'};
#line 38
$memory_3 = array::len($memory_4);
#line 38
undef($memory_4);
#line 38
$memory_4 = 1;
#line 38
$memory_3 = $memory_3 - $memory_4;
#line 38
undef($memory_4);
#line 38
$memory_2 = $memory_2 . $memory_3;
#line 38
undef($memory_3);
#line 38
$memory_3 = "]";
#line 38
$memory_2 = $memory_2 . $memory_3;
#line 38
undef($memory_3);
#line 38
undef($memory_0);
#line 38
$_[1] = $memory_1;return $memory_2;
#line 38
undef($memory_2);
#line 38
undef($memory_0);
#line 38
$_[1] = $memory_1;return;
$_[1] = $memory_1;}

sub generator_js_priv::get_function_name($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;$memory_0 = $_[0];$memory_1 = $_[1];
#line 42
$memory_2 = $memory_0->{'access'};
#line 42
$memory_3 = c_rt_lib::ov_is($memory_2, 'pub');
#line 42
if (c_rt_lib::check_true($memory_3)) {goto label_8;}
#line 44
$memory_3 = c_rt_lib::ov_is($memory_2, 'priv');
#line 44
if (c_rt_lib::check_true($memory_3)) {goto label_21;}
#line 44
$memory_3 = "NOMATCHALERT";
#line 44
$memory_3 = [$memory_3,$memory_2];
#line 44
die(dfile::ssave($memory_3));
#line 42
label_8:
#line 43
$memory_4 = ".";
#line 43
$memory_4 = $memory_1 . $memory_4;
#line 43
$memory_5 = $memory_0->{'name'};
#line 43
$memory_4 = $memory_4 . $memory_5;
#line 43
undef($memory_5);
#line 43
undef($memory_0);
#line 43
undef($memory_1);
#line 43
undef($memory_2);
#line 43
undef($memory_3);
#line 43
return $memory_4;
#line 43
undef($memory_4);
#line 44
goto label_33;
#line 44
label_21:
#line 45
$memory_4 = "__priv_";
#line 45
$memory_5 = $memory_0->{'name'};
#line 45
$memory_4 = $memory_4 . $memory_5;
#line 45
undef($memory_5);
#line 45
undef($memory_0);
#line 45
undef($memory_1);
#line 45
undef($memory_2);
#line 45
undef($memory_3);
#line 45
return $memory_4;
#line 45
undef($memory_4);
#line 46
goto label_33;
#line 46
label_33:
#line 46
undef($memory_2);
#line 46
undef($memory_3);
#line 46
undef($memory_0);
#line 46
undef($memory_1);
#line 46
return;
}

sub generator_js_priv::get_function_call_name($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;$memory_0 = $_[0];$memory_1 = $_[1];
#line 50
$memory_2 = "";
#line 50
$memory_3 = $memory_0->{'access'};
#line 50
$memory_4 = c_rt_lib::ov_is($memory_3, 'pub');
#line 50
if (c_rt_lib::check_true($memory_4)) {goto label_9;}
#line 52
$memory_4 = c_rt_lib::ov_is($memory_3, 'priv');
#line 52
if (c_rt_lib::check_true($memory_4)) {goto label_12;}
#line 52
$memory_4 = "NOMATCHALERT";
#line 52
$memory_4 = [$memory_4,$memory_3];
#line 52
die(dfile::ssave($memory_4));
#line 50
label_9:
#line 51
$memory_2 = $memory_1;
#line 52
goto label_17;
#line 52
label_12:
#line 53
$memory_5 = "";
#line 53
$memory_2 = $memory_5;
#line 53
undef($memory_5);
#line 54
goto label_17;
#line 54
label_17:
#line 54
undef($memory_3);
#line 54
undef($memory_4);
#line 55
$memory_4 = $memory_0->{'name'};
#line 55
$memory_3 = generator_js_priv::get_function_call_name_raw($memory_4, $memory_2);
#line 55
undef($memory_4);
#line 55
undef($memory_0);
#line 55
undef($memory_1);
#line 55
undef($memory_2);
#line 55
return $memory_3;
#line 55
undef($memory_3);
#line 55
undef($memory_2);
#line 55
undef($memory_0);
#line 55
undef($memory_1);
#line 55
return;
}

sub generator_js_priv::get_function_call_name_raw($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;$memory_0 = $_[0];$memory_1 = $_[1];
#line 59
$memory_2 = "";
#line 59
$memory_2 = c_rt_lib::to_nl($memory_1 eq $memory_2);
#line 59
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 59
if (c_rt_lib::check_true($memory_2)) {goto label_12;}
#line 60
$memory_3 = "__priv_";
#line 60
$memory_3 = $memory_3 . $memory_0;
#line 60
undef($memory_0);
#line 60
undef($memory_1);
#line 60
undef($memory_2);
#line 60
return $memory_3;
#line 60
undef($memory_3);
#line 61
goto label_28;
#line 61
label_12:
#line 62
$memory_3 = generator_js_priv::get_namespace_name();
#line 62
$memory_4 = ".";
#line 62
$memory_3 = $memory_3 . $memory_4;
#line 62
undef($memory_4);
#line 62
$memory_3 = $memory_3 . $memory_1;
#line 62
$memory_4 = ".";
#line 62
$memory_3 = $memory_3 . $memory_4;
#line 62
undef($memory_4);
#line 62
$memory_3 = $memory_3 . $memory_0;
#line 62
undef($memory_0);
#line 62
undef($memory_1);
#line 62
undef($memory_2);
#line 62
return $memory_3;
#line 62
undef($memory_3);
#line 63
goto label_28;
#line 63
label_28:
#line 63
undef($memory_2);
#line 63
undef($memory_0);
#line 63
undef($memory_1);
#line 63
return;
}

sub generator_js_priv::escape_string($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;$memory_0 = $_[0];
#line 67
$memory_2 = "\\";
#line 67
$memory_3 = "\\\\";
#line 67
$memory_1 = string::replace($memory_0, $memory_2, $memory_3);
#line 67
undef($memory_3);
#line 67
undef($memory_2);
#line 67
$memory_0 = $memory_1;
#line 67
undef($memory_1);
#line 68
$memory_2 = "\"";
#line 68
$memory_3 = "\\\"";
#line 68
$memory_1 = string::replace($memory_0, $memory_2, $memory_3);
#line 68
undef($memory_3);
#line 68
undef($memory_2);
#line 68
$memory_0 = $memory_1;
#line 68
undef($memory_1);
#line 69
$memory_2 = string::lf();
#line 69
$memory_3 = "\\n";
#line 69
$memory_1 = string::replace($memory_0, $memory_2, $memory_3);
#line 69
undef($memory_3);
#line 69
undef($memory_2);
#line 69
$memory_0 = $memory_1;
#line 69
undef($memory_1);
#line 70
$memory_2 = string::r();
#line 70
$memory_3 = "\\r";
#line 70
$memory_1 = string::replace($memory_0, $memory_2, $memory_3);
#line 70
undef($memory_3);
#line 70
undef($memory_2);
#line 70
$memory_0 = $memory_1;
#line 70
undef($memory_1);
#line 71
$memory_3 = 0;
#line 71
$memory_2 = string::chr($memory_3);
#line 71
undef($memory_3);
#line 71
$memory_3 = "\\0";
#line 71
$memory_1 = string::replace($memory_0, $memory_2, $memory_3);
#line 71
undef($memory_3);
#line 71
undef($memory_2);
#line 71
$memory_0 = $memory_1;
#line 71
undef($memory_1);
#line 72
$memory_2 = string::tab();
#line 72
$memory_3 = "\\t";
#line 72
$memory_1 = string::replace($memory_0, $memory_2, $memory_3);
#line 72
undef($memory_3);
#line 72
undef($memory_2);
#line 72
$memory_0 = $memory_1;
#line 72
undef($memory_1);
#line 74
$memory_1 = "\"";
#line 74
$memory_3 = string::lf();
#line 74
$memory_4 = "\\n";
#line 74
$memory_2 = string::replace($memory_0, $memory_3, $memory_4);
#line 74
undef($memory_4);
#line 74
undef($memory_3);
#line 74
$memory_1 = $memory_1 . $memory_2;
#line 74
undef($memory_2);
#line 74
$memory_2 = "\"";
#line 74
$memory_1 = $memory_1 . $memory_2;
#line 74
undef($memory_2);
#line 74
undef($memory_0);
#line 74
return $memory_1;
#line 74
undef($memory_1);
#line 74
undef($memory_0);
#line 74
return;
}

sub generator_js_priv::print_str_imm($$) {
my $memory_0;my $memory_1;my $memory_2;$memory_0 = $_[0];$memory_1 = $_[1];Scalar::Util::weaken($_[1]) if ref($_[1]);
#line 78
$memory_2 = generator_js_priv::print_const_value_aggr($memory_0, $memory_1);
#line 78
undef($memory_0);
#line 78
$_[1] = $memory_1;return $memory_2;
#line 78
undef($memory_2);
#line 78
undef($memory_0);
#line 78
$_[1] = $memory_1;return;
$_[1] = $memory_1;}

sub generator_js_priv::is_singleton_use_function($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;my $memory_13;$memory_0 = $_[0];
#line 82
$memory_2 = $memory_0->{'args_type'};
#line 82
$memory_1 = array::len($memory_2);
#line 82
undef($memory_2);
#line 82
$memory_2 = 0;
#line 82
$memory_1 = c_rt_lib::to_nl($memory_1 > $memory_2);
#line 82
undef($memory_2);
#line 82
$memory_1 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_1));
#line 82
if (c_rt_lib::check_true($memory_1)) {goto label_14;}
#line 82
$memory_2 = c_rt_lib::to_nl(0);
#line 82
undef($memory_0);
#line 82
undef($memory_1);
#line 82
return $memory_2;
#line 82
undef($memory_2);
#line 82
goto label_14;
#line 82
label_14:
#line 82
undef($memory_1);
#line 83
$memory_1 = $memory_0->{'annotation'};
#line 83
$memory_1 = c_rt_lib::ov_is($memory_1, 'math');
#line 83
$memory_1 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_1));
#line 83
if (c_rt_lib::check_true($memory_1)) {goto label_26;}
#line 83
$memory_2 = c_rt_lib::to_nl(1);
#line 83
undef($memory_0);
#line 83
undef($memory_1);
#line 83
return $memory_2;
#line 83
undef($memory_2);
#line 83
goto label_26;
#line 83
label_26:
#line 83
undef($memory_1);
#line 84
$memory_1 = c_rt_lib::to_nl(0);
#line 86
$memory_3 = $memory_0->{'commands'};
#line 86
$memory_5 = 0;
#line 86
$memory_6 = 1;
#line 86
$memory_7 = c_rt_lib::array_len($memory_3);
#line 86
label_33:
#line 86
$memory_8 = c_rt_lib::to_nl($memory_5 >= $memory_7);
#line 86
if (c_rt_lib::check_true($memory_8)) {goto label_195;}
#line 86
$memory_4 = $memory_3->[$memory_5];
#line 87
$memory_9 = $memory_4->{'cmd'};
#line 88
$memory_10 = $memory_9;
#line 88
$memory_10 = c_rt_lib::ov_is($memory_10, 'call');
#line 88
$memory_10 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_10));
#line 88
if (c_rt_lib::check_true($memory_10)) {goto label_82;}
#line 89
$memory_11 = $memory_9;
#line 89
$memory_11 = c_rt_lib::ov_as($memory_11, 'call');
#line 90
$memory_12 = $memory_11->{'fun_name'};
#line 90
$memory_13 = "sigleton_do_not_use_without_approval";
#line 90
$memory_12 = c_rt_lib::to_nl($memory_12 eq $memory_13);
#line 90
undef($memory_13);
#line 90
$memory_12 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_12));
#line 90
$memory_12 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_12));
#line 90
if (c_rt_lib::check_true($memory_12)) {goto label_57;}
#line 90
undef($memory_9);
#line 90
undef($memory_10);
#line 90
undef($memory_11);
#line 90
undef($memory_12);
#line 90
goto label_192;
#line 90
goto label_57;
#line 90
label_57:
#line 90
undef($memory_12);
#line 91
$memory_12 = $memory_11->{'mod'};
#line 91
$memory_13 = "singleton";
#line 91
$memory_12 = c_rt_lib::to_nl($memory_12 eq $memory_13);
#line 91
undef($memory_13);
#line 91
$memory_12 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_12));
#line 91
$memory_12 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_12));
#line 91
if (c_rt_lib::check_true($memory_12)) {goto label_72;}
#line 91
undef($memory_9);
#line 91
undef($memory_10);
#line 91
undef($memory_11);
#line 91
undef($memory_12);
#line 91
goto label_192;
#line 91
goto label_72;
#line 91
label_72:
#line 91
undef($memory_12);
#line 92
$memory_12 = c_rt_lib::to_nl(1);
#line 92
$memory_1 = $memory_12;
#line 92
undef($memory_12);
#line 93
$memory_12 = $memory_11->{'dest'};
#line 93
$memory_2 = $memory_12;
#line 93
undef($memory_12);
#line 93
undef($memory_11);
#line 94
goto label_189;
#line 94
label_82:
#line 94
$memory_10 = $memory_9;
#line 94
$memory_10 = c_rt_lib::ov_is($memory_10, 'return');
#line 94
$memory_10 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_10));
#line 94
if (c_rt_lib::check_true($memory_10)) {goto label_154;}
#line 95
$memory_11 = $memory_1;
#line 95
$memory_11 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_11));
#line 95
$memory_11 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_11));
#line 95
if (c_rt_lib::check_true($memory_11)) {goto label_107;}
#line 95
$memory_12 = c_rt_lib::to_nl(0);
#line 95
undef($memory_0);
#line 95
undef($memory_1);
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
#line 95
undef($memory_8);
#line 95
undef($memory_9);
#line 95
undef($memory_10);
#line 95
undef($memory_11);
#line 95
return $memory_12;
#line 95
undef($memory_12);
#line 95
goto label_107;
#line 95
label_107:
#line 95
undef($memory_11);
#line 96
$memory_11 = $memory_9;
#line 96
$memory_11 = c_rt_lib::ov_as($memory_11, 'return');
#line 97
$memory_12 = $memory_11;
#line 97
$memory_12 = c_rt_lib::ov_is($memory_12, 'val');
#line 97
$memory_12 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_12));
#line 97
$memory_12 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_12));
#line 97
if (c_rt_lib::check_true($memory_12)) {goto label_133;}
#line 97
$memory_13 = c_rt_lib::to_nl(0);
#line 97
undef($memory_0);
#line 97
undef($memory_1);
#line 97
undef($memory_2);
#line 97
undef($memory_3);
#line 97
undef($memory_4);
#line 97
undef($memory_5);
#line 97
undef($memory_6);
#line 97
undef($memory_7);
#line 97
undef($memory_8);
#line 97
undef($memory_9);
#line 97
undef($memory_10);
#line 97
undef($memory_11);
#line 97
undef($memory_12);
#line 97
return $memory_13;
#line 97
undef($memory_13);
#line 97
goto label_133;
#line 97
label_133:
#line 97
undef($memory_12);
#line 98
$memory_12 = $memory_11;
#line 98
$memory_12 = c_rt_lib::ov_as($memory_12, 'val');
#line 98
$memory_12 = c_rt_lib::to_nl($memory_12 eq $memory_2);
#line 98
undef($memory_0);
#line 98
undef($memory_1);
#line 98
undef($memory_2);
#line 98
undef($memory_3);
#line 98
undef($memory_4);
#line 98
undef($memory_5);
#line 98
undef($memory_6);
#line 98
undef($memory_7);
#line 98
undef($memory_8);
#line 98
undef($memory_9);
#line 98
undef($memory_10);
#line 98
undef($memory_11);
#line 98
return $memory_12;
#line 98
undef($memory_12);
#line 98
undef($memory_11);
#line 99
goto label_189;
#line 99
label_154:
#line 99
$memory_10 = $memory_9;
#line 99
$memory_10 = c_rt_lib::ov_is($memory_10, 'prt_lbl');
#line 99
$memory_10 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_10));
#line 99
if (c_rt_lib::check_true($memory_10)) {goto label_160;}
#line 100
goto label_189;
#line 100
label_160:
#line 100
$memory_10 = $memory_9;
#line 100
$memory_10 = c_rt_lib::ov_is($memory_10, 'clear');
#line 100
$memory_10 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_10));
#line 100
if (c_rt_lib::check_true($memory_10)) {goto label_166;}
#line 101
goto label_189;
#line 101
label_166:
#line 102
$memory_11 = $memory_1;
#line 102
$memory_11 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_11));
#line 102
if (c_rt_lib::check_true($memory_11)) {goto label_186;}
#line 102
$memory_12 = c_rt_lib::to_nl(0);
#line 102
undef($memory_0);
#line 102
undef($memory_1);
#line 102
undef($memory_2);
#line 102
undef($memory_3);
#line 102
undef($memory_4);
#line 102
undef($memory_5);
#line 102
undef($memory_6);
#line 102
undef($memory_7);
#line 102
undef($memory_8);
#line 102
undef($memory_9);
#line 102
undef($memory_10);
#line 102
undef($memory_11);
#line 102
return $memory_12;
#line 102
undef($memory_12);
#line 102
goto label_186;
#line 102
label_186:
#line 102
undef($memory_11);
#line 103
goto label_189;
#line 103
label_189:
#line 103
undef($memory_10);
#line 103
undef($memory_9);
#line 103
label_192:
#line 104
$memory_5 = $memory_5 + $memory_6;
#line 104
goto label_33;
#line 104
label_195:
#line 104
undef($memory_3);
#line 104
undef($memory_4);
#line 104
undef($memory_5);
#line 104
undef($memory_6);
#line 104
undef($memory_7);
#line 104
undef($memory_8);
#line 105
$memory_3 = c_rt_lib::to_nl(0);
#line 105
undef($memory_0);
#line 105
undef($memory_1);
#line 105
undef($memory_2);
#line 105
return $memory_3;
#line 105
undef($memory_3);
#line 105
undef($memory_1);
#line 105
undef($memory_2);
#line 105
undef($memory_0);
#line 105
return;
}

sub generator_js_priv::print_function_or_singleton($$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;my $memory_13;my $memory_14;my $memory_15;my $memory_16;my $memory_17;my $memory_18;$memory_0 = $_[0];$memory_1 = $_[1];$memory_2 = $_[2];Scalar::Util::weaken($_[2]) if ref($_[2]);
#line 109
$memory_3 = "";
#line 110
$memory_4 = generator_js_priv::is_singleton_use_function($memory_0);
#line 110
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 110
if (c_rt_lib::check_true($memory_4)) {goto label_93;}
#line 111
$memory_5 = generator_js_priv::get_function_name($memory_0, $memory_1);
#line 112
$memory_6 = $memory_0;
#line 113
$memory_7 = "__singleton_function_";
#line 113
$memory_8 = $memory_0->{'name'};
#line 113
$memory_7 = $memory_7 . $memory_8;
#line 113
undef($memory_8);
#line 113
$memory_8 = $memory_7;
#line 113
 if (c_rt_lib::get_hashcount($memory_6) > 1) {$memory_6 = {%{$memory_6}};}$memory_6->{'name'} = $memory_8;
#line 113
undef($memory_7);
#line 113
undef($memory_8);
#line 114
$memory_7 = c_rt_lib::ov_mk_none('priv');
#line 114
$memory_8 = $memory_7;
#line 114
 if (c_rt_lib::get_hashcount($memory_6) > 1) {$memory_6 = {%{$memory_6}};}$memory_6->{'access'} = $memory_8;
#line 114
undef($memory_7);
#line 114
undef($memory_8);
#line 115
$memory_7 = "__singleton_value_";
#line 115
$memory_8 = generator_js_priv::get_function_name($memory_6, $memory_1);
#line 115
$memory_7 = $memory_7 . $memory_8;
#line 115
undef($memory_8);
#line 116
$memory_8 = generator_js_priv::print_function($memory_6, $memory_1, $memory_2);
#line 116
$memory_3 = $memory_8;
#line 116
undef($memory_8);
#line 117
$memory_8 = "var ";
#line 117
$memory_8 = $memory_8 . $memory_7;
#line 117
$memory_9 = ";";
#line 117
$memory_8 = $memory_8 . $memory_9;
#line 117
undef($memory_9);
#line 117
$memory_9 = string::lf();
#line 117
$memory_8 = $memory_8 . $memory_9;
#line 117
undef($memory_9);
#line 117
$memory_3 = $memory_3 . $memory_8;
#line 117
undef($memory_8);
#line 118
$memory_8 = $memory_0->{'access'};
#line 118
$memory_9 = c_rt_lib::ov_is($memory_8, 'pub');
#line 118
if (c_rt_lib::check_true($memory_9)) {goto label_44;}
#line 120
$memory_9 = c_rt_lib::ov_is($memory_8, 'priv');
#line 120
if (c_rt_lib::check_true($memory_9)) {goto label_56;}
#line 120
$memory_9 = "NOMATCHALERT";
#line 120
$memory_9 = [$memory_9,$memory_8];
#line 120
die(dfile::ssave($memory_9));
#line 118
label_44:
#line 119
$memory_10 = generator_js_priv::get_namespace_name();
#line 119
$memory_11 = ".";
#line 119
$memory_10 = $memory_10 . $memory_11;
#line 119
undef($memory_11);
#line 119
$memory_10 = $memory_10 . $memory_5;
#line 119
$memory_11 = " = function() {";
#line 119
$memory_10 = $memory_10 . $memory_11;
#line 119
undef($memory_11);
#line 119
$memory_3 = $memory_3 . $memory_10;
#line 119
undef($memory_10);
#line 120
goto label_65;
#line 120
label_56:
#line 121
$memory_10 = "function ";
#line 121
$memory_10 = $memory_10 . $memory_5;
#line 121
$memory_11 = "() {";
#line 121
$memory_10 = $memory_10 . $memory_11;
#line 121
undef($memory_11);
#line 121
$memory_3 = $memory_3 . $memory_10;
#line 121
undef($memory_10);
#line 122
goto label_65;
#line 122
label_65:
#line 122
undef($memory_8);
#line 122
undef($memory_9);
#line 124
$memory_8 = "	if (";
#line 124
$memory_8 = $memory_8 . $memory_7;
#line 124
$memory_9 = " === undefined) {
		";
#line 124
$memory_8 = $memory_8 . $memory_9;
#line 124
undef($memory_9);
#line 124
$memory_8 = $memory_8 . $memory_7;
#line 125
$memory_9 = " = ";
#line 125
$memory_8 = $memory_8 . $memory_9;
#line 125
undef($memory_9);
#line 125
$memory_9 = generator_js_priv::get_function_call_name($memory_6, $memory_1);
#line 125
$memory_8 = $memory_8 . $memory_9;
#line 125
undef($memory_9);
#line 125
$memory_9 = "();
	}
	return ";
#line 125
$memory_8 = $memory_8 . $memory_9;
#line 125
undef($memory_9);
#line 125
$memory_8 = $memory_8 . $memory_7;
#line 127
$memory_9 = ";
}";
#line 127
$memory_8 = $memory_8 . $memory_9;
#line 127
undef($memory_9);
#line 127
$memory_3 = $memory_3 . $memory_8;
#line 127
undef($memory_8);
#line 127
undef($memory_5);
#line 127
undef($memory_6);
#line 127
undef($memory_7);
#line 129
goto label_98;
#line 129
label_93:
#line 130
$memory_5 = generator_js_priv::print_function($memory_0, $memory_1, $memory_2);
#line 130
$memory_3 = $memory_5;
#line 130
undef($memory_5);
#line 131
goto label_98;
#line 131
label_98:
#line 131
undef($memory_4);
#line 133
$memory_4 = string::lf();
#line 133
$memory_3 = $memory_3 . $memory_4;
#line 133
undef($memory_4);
#line 134
$memory_4 = $memory_0->{'access'};
#line 134
$memory_5 = c_rt_lib::ov_is($memory_4, 'pub');
#line 134
if (c_rt_lib::check_true($memory_5)) {goto label_111;}
#line 156
$memory_5 = c_rt_lib::ov_is($memory_4, 'priv');
#line 156
if (c_rt_lib::check_true($memory_5)) {goto label_264;}
#line 156
$memory_5 = "NOMATCHALERT";
#line 156
$memory_5 = [$memory_5,$memory_4];
#line 156
die(dfile::ssave($memory_5));
#line 134
label_111:
#line 135
$memory_6 = generator_js_priv::get_namespace_name();
#line 135
$memory_7 = ".";
#line 135
$memory_6 = $memory_6 . $memory_7;
#line 135
undef($memory_7);
#line 135
$memory_6 = $memory_6 . $memory_1;
#line 135
$memory_7 = ".__dyn_";
#line 135
$memory_6 = $memory_6 . $memory_7;
#line 135
undef($memory_7);
#line 135
$memory_7 = $memory_0->{'name'};
#line 135
$memory_6 = $memory_6 . $memory_7;
#line 135
undef($memory_7);
#line 135
$memory_7 = " = function(arr) {";
#line 135
$memory_6 = $memory_6 . $memory_7;
#line 135
undef($memory_7);
#line 135
$memory_7 = string::lf();
#line 135
$memory_6 = $memory_6 . $memory_7;
#line 135
undef($memory_7);
#line 135
$memory_3 = $memory_3 . $memory_6;
#line 135
undef($memory_6);
#line 136
$memory_6 = 0;
#line 137
$memory_7 = "";
#line 138
$memory_8 = "";
#line 139
$memory_9 = $memory_0->{'args_type'};
#line 139
$memory_11 = 0;
#line 139
$memory_12 = 1;
#line 139
$memory_13 = c_rt_lib::array_len($memory_9);
#line 139
label_138:
#line 139
$memory_14 = c_rt_lib::to_nl($memory_11 >= $memory_13);
#line 139
if (c_rt_lib::check_true($memory_14)) {goto label_224;}
#line 139
$memory_10 = $memory_9->[$memory_11];
#line 140
$memory_15 = 0;
#line 140
$memory_15 = c_rt_lib::to_nl($memory_6 == $memory_15);
#line 140
$memory_15 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_15));
#line 140
$memory_15 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_15));
#line 140
if (c_rt_lib::check_true($memory_15)) {goto label_151;}
#line 140
$memory_16 = ", ";
#line 140
$memory_7 = $memory_7 . $memory_16;
#line 140
undef($memory_16);
#line 140
goto label_151;
#line 140
label_151:
#line 140
undef($memory_15);
#line 141
$memory_15 = "arg";
#line 141
$memory_15 = $memory_15 . $memory_6;
#line 141
$memory_7 = $memory_7 . $memory_15;
#line 141
undef($memory_15);
#line 142
$memory_15 = "var arg";
#line 142
$memory_15 = $memory_15 . $memory_6;
#line 142
$memory_16 = " = ";
#line 142
$memory_15 = $memory_15 . $memory_16;
#line 142
undef($memory_16);
#line 142
$memory_3 = $memory_3 . $memory_15;
#line 142
undef($memory_15);
#line 143
$memory_15 = c_rt_lib::ov_is($memory_10, 'ref');
#line 143
if (c_rt_lib::check_true($memory_15)) {goto label_171;}
#line 146
$memory_15 = c_rt_lib::ov_is($memory_10, 'val');
#line 146
if (c_rt_lib::check_true($memory_15)) {goto label_205;}
#line 146
$memory_15 = "NOMATCHALERT";
#line 146
$memory_15 = [$memory_15,$memory_10];
#line 146
die(dfile::ssave($memory_15));
#line 143
label_171:
#line 144
$memory_16 = "new ";
#line 144
$memory_18 = "ref";
#line 144
$memory_17 = generator_js_priv::imm_call($memory_18);
#line 144
undef($memory_18);
#line 144
$memory_16 = $memory_16 . $memory_17;
#line 144
undef($memory_17);
#line 144
$memory_17 = "(";
#line 144
$memory_16 = $memory_16 . $memory_17;
#line 144
undef($memory_17);
#line 144
$memory_17 = "arr.value.get_index_int(";
#line 144
$memory_16 = $memory_16 . $memory_17;
#line 144
undef($memory_17);
#line 144
$memory_16 = $memory_16 . $memory_6;
#line 144
$memory_17 = "));";
#line 144
$memory_16 = $memory_16 . $memory_17;
#line 144
undef($memory_17);
#line 144
$memory_3 = $memory_3 . $memory_16;
#line 144
undef($memory_16);
#line 145
$memory_16 = "arr.value = arr.value.set_index_int(";
#line 145
$memory_16 = $memory_16 . $memory_6;
#line 145
$memory_17 = ", arg";
#line 145
$memory_16 = $memory_16 . $memory_17;
#line 145
undef($memory_17);
#line 145
$memory_16 = $memory_16 . $memory_6;
#line 145
$memory_17 = ".value);";
#line 145
$memory_16 = $memory_16 . $memory_17;
#line 145
undef($memory_17);
#line 145
$memory_17 = string::lf();
#line 145
$memory_16 = $memory_16 . $memory_17;
#line 145
undef($memory_17);
#line 145
$memory_8 = $memory_8 . $memory_16;
#line 145
undef($memory_16);
#line 146
goto label_214;
#line 146
label_205:
#line 147
$memory_16 = "arr.value.get_index_int(";
#line 147
$memory_16 = $memory_16 . $memory_6;
#line 147
$memory_17 = ");";
#line 147
$memory_16 = $memory_16 . $memory_17;
#line 147
undef($memory_17);
#line 147
$memory_3 = $memory_3 . $memory_16;
#line 147
undef($memory_16);
#line 148
goto label_214;
#line 148
label_214:
#line 148
undef($memory_15);
#line 149
$memory_15 = string::lf();
#line 149
$memory_3 = $memory_3 . $memory_15;
#line 149
undef($memory_15);
#line 150
$memory_15 = 1;
#line 150
$memory_6 = $memory_6 + $memory_15;
#line 150
undef($memory_15);
#line 151
$memory_11 = $memory_11 + $memory_12;
#line 151
goto label_138;
#line 151
label_224:
#line 151
undef($memory_9);
#line 151
undef($memory_10);
#line 151
undef($memory_11);
#line 151
undef($memory_12);
#line 151
undef($memory_13);
#line 151
undef($memory_14);
#line 152
$memory_9 = "var ret = ";
#line 152
$memory_10 = generator_js_priv::get_function_call_name($memory_0, $memory_1);
#line 152
$memory_9 = $memory_9 . $memory_10;
#line 152
undef($memory_10);
#line 152
$memory_10 = "(";
#line 152
$memory_9 = $memory_9 . $memory_10;
#line 152
undef($memory_10);
#line 152
$memory_9 = $memory_9 . $memory_7;
#line 152
$memory_10 = ")";
#line 152
$memory_9 = $memory_9 . $memory_10;
#line 152
undef($memory_10);
#line 152
$memory_10 = string::lf();
#line 152
$memory_9 = $memory_9 . $memory_10;
#line 152
undef($memory_10);
#line 152
$memory_3 = $memory_3 . $memory_9;
#line 152
undef($memory_9);
#line 153
$memory_3 = $memory_3 . $memory_8;
#line 154
$memory_9 = "return ret;";
#line 154
$memory_10 = string::lf();
#line 154
$memory_9 = $memory_9 . $memory_10;
#line 154
undef($memory_10);
#line 154
$memory_3 = $memory_3 . $memory_9;
#line 154
undef($memory_9);
#line 155
$memory_9 = "}";
#line 155
$memory_10 = string::lf();
#line 155
$memory_9 = $memory_9 . $memory_10;
#line 155
undef($memory_10);
#line 155
$memory_3 = $memory_3 . $memory_9;
#line 155
undef($memory_9);
#line 155
undef($memory_6);
#line 155
undef($memory_7);
#line 155
undef($memory_8);
#line 156
goto label_269;
#line 156
label_264:
#line 157
$memory_6 = string::lf();
#line 157
$memory_3 = $memory_3 . $memory_6;
#line 157
undef($memory_6);
#line 158
goto label_269;
#line 158
label_269:
#line 158
undef($memory_4);
#line 158
undef($memory_5);
#line 159
undef($memory_0);
#line 159
undef($memory_1);
#line 159
$_[2] = $memory_2;return $memory_3;
#line 159
undef($memory_3);
#line 159
undef($memory_0);
#line 159
undef($memory_1);
#line 159
$_[2] = $memory_2;return;
$_[2] = $memory_2;}

sub generator_js_priv::print_function($$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;$memory_0 = $_[0];$memory_1 = $_[1];$memory_2 = $_[2];Scalar::Util::weaken($_[2]) if ref($_[2]);
#line 163
$memory_3 = string::lf();
#line 164
$memory_4 = $memory_0->{'access'};
#line 164
$memory_5 = c_rt_lib::ov_is($memory_4, 'pub');
#line 164
if (c_rt_lib::check_true($memory_5)) {goto label_9;}
#line 166
$memory_5 = c_rt_lib::ov_is($memory_4, 'priv');
#line 166
if (c_rt_lib::check_true($memory_5)) {goto label_23;}
#line 166
$memory_5 = "NOMATCHALERT";
#line 166
$memory_5 = [$memory_5,$memory_4];
#line 166
die(dfile::ssave($memory_5));
#line 164
label_9:
#line 165
$memory_6 = generator_js_priv::get_namespace_name();
#line 165
$memory_7 = ".";
#line 165
$memory_6 = $memory_6 . $memory_7;
#line 165
undef($memory_7);
#line 165
$memory_7 = generator_js_priv::get_function_name($memory_0, $memory_1);
#line 165
$memory_6 = $memory_6 . $memory_7;
#line 165
undef($memory_7);
#line 165
$memory_7 = " = function(";
#line 165
$memory_6 = $memory_6 . $memory_7;
#line 165
undef($memory_7);
#line 165
$memory_3 = $memory_3 . $memory_6;
#line 165
undef($memory_6);
#line 166
goto label_34;
#line 166
label_23:
#line 167
$memory_6 = "function ";
#line 167
$memory_7 = generator_js_priv::get_function_name($memory_0, $memory_1);
#line 167
$memory_6 = $memory_6 . $memory_7;
#line 167
undef($memory_7);
#line 167
$memory_7 = "(";
#line 167
$memory_6 = $memory_6 . $memory_7;
#line 167
undef($memory_7);
#line 167
$memory_3 = $memory_3 . $memory_6;
#line 167
undef($memory_6);
#line 168
goto label_34;
#line 168
label_34:
#line 168
undef($memory_4);
#line 168
undef($memory_5);
#line 169
$memory_5 = $memory_0->{'args_type'};
#line 169
$memory_4 = array::len($memory_5);
#line 169
undef($memory_5);
#line 169
$memory_5 = 0;
#line 169
$memory_6 = 1;
#line 169
label_42:
#line 169
$memory_7 = c_rt_lib::to_nl($memory_5 >= $memory_4);
#line 169
if (c_rt_lib::check_true($memory_7)) {goto label_62;}
#line 170
$memory_8 = 0;
#line 170
$memory_8 = c_rt_lib::to_nl($memory_5 == $memory_8);
#line 170
$memory_8 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 170
$memory_8 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 170
if (c_rt_lib::check_true($memory_8)) {goto label_54;}
#line 170
$memory_9 = ", ";
#line 170
$memory_3 = $memory_3 . $memory_9;
#line 170
undef($memory_9);
#line 170
goto label_54;
#line 170
label_54:
#line 170
undef($memory_8);
#line 171
$memory_8 = "___arg__";
#line 171
$memory_8 = $memory_8 . $memory_5;
#line 171
$memory_3 = $memory_3 . $memory_8;
#line 171
undef($memory_8);
#line 172
$memory_5 = $memory_5 + $memory_6;
#line 172
goto label_42;
#line 172
label_62:
#line 172
undef($memory_4);
#line 172
undef($memory_5);
#line 172
undef($memory_6);
#line 172
undef($memory_7);
#line 173
$memory_4 = ") {";
#line 173
$memory_5 = string::lf();
#line 173
$memory_4 = $memory_4 . $memory_5;
#line 173
undef($memory_5);
#line 173
$memory_3 = $memory_3 . $memory_4;
#line 173
undef($memory_4);
#line 174
$memory_5 = $memory_0->{'args_type'};
#line 174
$memory_4 = array::len($memory_5);
#line 174
undef($memory_5);
#line 174
$memory_5 = 0;
#line 174
$memory_6 = 1;
#line 174
label_78:
#line 174
$memory_7 = c_rt_lib::to_nl($memory_5 >= $memory_4);
#line 174
if (c_rt_lib::check_true($memory_7)) {goto label_131;}
#line 175
$memory_8 = $memory_0->{'args_type'};
#line 175
$memory_8 = $memory_8->[$memory_5];
#line 175
$memory_9 = c_rt_lib::ov_is($memory_8, 'val');
#line 175
if (c_rt_lib::check_true($memory_9)) {goto label_90;}
#line 177
$memory_9 = c_rt_lib::ov_is($memory_8, 'ref');
#line 177
if (c_rt_lib::check_true($memory_9)) {goto label_103;}
#line 177
$memory_9 = "NOMATCHALERT";
#line 177
$memory_9 = [$memory_9,$memory_8];
#line 177
die(dfile::ssave($memory_9));
#line 175
label_90:
#line 176
$memory_10 = "var ___nl__";
#line 176
$memory_10 = $memory_10 . $memory_5;
#line 176
$memory_11 = " = ___arg__";
#line 176
$memory_10 = $memory_10 . $memory_11;
#line 176
undef($memory_11);
#line 176
$memory_10 = $memory_10 . $memory_5;
#line 176
$memory_11 = ";";
#line 176
$memory_10 = $memory_10 . $memory_11;
#line 176
undef($memory_11);
#line 176
$memory_3 = $memory_3 . $memory_10;
#line 176
undef($memory_10);
#line 177
goto label_116;
#line 177
label_103:
#line 178
$memory_10 = "var ___nl__";
#line 178
$memory_10 = $memory_10 . $memory_5;
#line 178
$memory_11 = " = ___arg__";
#line 178
$memory_10 = $memory_10 . $memory_11;
#line 178
undef($memory_11);
#line 178
$memory_10 = $memory_10 . $memory_5;
#line 178
$memory_11 = ".value;";
#line 178
$memory_10 = $memory_10 . $memory_11;
#line 178
undef($memory_11);
#line 178
$memory_3 = $memory_3 . $memory_10;
#line 178
undef($memory_10);
#line 179
goto label_116;
#line 179
label_116:
#line 179
undef($memory_8);
#line 179
undef($memory_9);
#line 180
$memory_8 = generator_js_priv::get_namespace_name();
#line 180
$memory_9 = ".check_null(___nl__";
#line 180
$memory_8 = $memory_8 . $memory_9;
#line 180
undef($memory_9);
#line 180
$memory_8 = $memory_8 . $memory_5;
#line 180
$memory_9 = ");";
#line 180
$memory_8 = $memory_8 . $memory_9;
#line 180
undef($memory_9);
#line 180
$memory_3 = $memory_3 . $memory_8;
#line 180
undef($memory_8);
#line 181
$memory_5 = $memory_5 + $memory_6;
#line 181
goto label_78;
#line 181
label_131:
#line 181
undef($memory_4);
#line 181
undef($memory_5);
#line 181
undef($memory_6);
#line 181
undef($memory_7);
#line 182
$memory_4 = string::lf();
#line 182
$memory_3 = $memory_3 . $memory_4;
#line 182
undef($memory_4);
#line 183
$memory_5 = $memory_0->{'args_type'};
#line 183
$memory_4 = array::len($memory_5);
#line 183
undef($memory_5);
#line 183
label_142:
#line 183
$memory_5 = $memory_0->{'reg_size'};
#line 183
$memory_5 = c_rt_lib::to_nl($memory_4 < $memory_5);
#line 183
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 183
if (c_rt_lib::check_true($memory_5)) {goto label_161;}
#line 184
$memory_6 = "var ___nl__";
#line 184
$memory_6 = $memory_6 . $memory_4;
#line 184
$memory_7 = " = null;";
#line 184
$memory_6 = $memory_6 . $memory_7;
#line 184
undef($memory_7);
#line 184
$memory_7 = string::lf();
#line 184
$memory_6 = $memory_6 . $memory_7;
#line 184
undef($memory_7);
#line 184
$memory_3 = $memory_3 . $memory_6;
#line 184
undef($memory_6);
#line 183
$memory_6 = 1;
#line 183
$memory_4 = $memory_4 + $memory_6;
#line 183
undef($memory_6);
#line 185
goto label_142;
#line 185
label_161:
#line 185
undef($memory_4);
#line 185
undef($memory_5);
#line 186
$memory_4 = "var label = null; while (1) { switch (label) { default: ";
#line 186
$memory_5 = string::lf();
#line 186
$memory_4 = $memory_4 . $memory_5;
#line 186
undef($memory_5);
#line 186
$memory_3 = $memory_3 . $memory_4;
#line 186
undef($memory_4);
#line 187
$memory_4 = 0;
#line 189
$memory_5 = $memory_0->{'commands'};
#line 189
$memory_7 = 0;
#line 189
$memory_8 = 1;
#line 189
$memory_9 = c_rt_lib::array_len($memory_5);
#line 189
label_175:
#line 189
$memory_10 = c_rt_lib::to_nl($memory_7 >= $memory_9);
#line 189
if (c_rt_lib::check_true($memory_10)) {goto label_186;}
#line 189
$memory_6 = $memory_5->[$memory_7];
#line 188
$memory_12 = $memory_0->{'args_type'};
#line 188
$memory_11 = generator_js_priv::print_command($memory_6, $memory_12, $memory_4, $memory_2);
#line 188
undef($memory_12);
#line 188
$memory_3 = $memory_3 . $memory_11;
#line 188
undef($memory_11);
#line 188
$memory_7 = $memory_7 + $memory_8;
#line 188
goto label_175;
#line 188
label_186:
#line 188
undef($memory_5);
#line 188
undef($memory_6);
#line 188
undef($memory_7);
#line 188
undef($memory_8);
#line 188
undef($memory_9);
#line 188
undef($memory_10);
#line 190
$memory_5 = "}}}";
#line 190
$memory_5 = $memory_3 . $memory_5;
#line 190
$memory_6 = string::lf();
#line 190
$memory_5 = $memory_5 . $memory_6;
#line 190
undef($memory_6);
#line 190
undef($memory_0);
#line 190
undef($memory_1);
#line 190
undef($memory_3);
#line 190
undef($memory_4);
#line 190
$_[2] = $memory_2;return $memory_5;
#line 190
undef($memory_5);
#line 190
undef($memory_3);
#line 190
undef($memory_4);
#line 190
undef($memory_0);
#line 190
undef($memory_1);
#line 190
$_[2] = $memory_2;return;
$_[2] = $memory_2;}

sub generator_js_priv::print_command($$$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;my $memory_13;my $memory_14;my $memory_15;$memory_0 = $_[0];$memory_1 = $_[1];$memory_2 = $_[2];Scalar::Util::weaken($_[2]) if ref($_[2]);$memory_3 = $_[3];Scalar::Util::weaken($_[3]) if ref($_[3]);
#line 195
$memory_5 = $memory_0->{'cmd'};
#line 195
$memory_6 = c_rt_lib::ov_is($memory_5, 'arr_decl');
#line 195
if (c_rt_lib::check_true($memory_6)) {goto label_46;}
#line 197
$memory_6 = c_rt_lib::ov_is($memory_5, 'hash_decl');
#line 197
if (c_rt_lib::check_true($memory_6)) {goto label_63;}
#line 199
$memory_6 = c_rt_lib::ov_is($memory_5, 'call');
#line 199
if (c_rt_lib::check_true($memory_6)) {goto label_80;}
#line 201
$memory_6 = c_rt_lib::ov_is($memory_5, 'func');
#line 201
if (c_rt_lib::check_true($memory_6)) {goto label_95;}
#line 204
$memory_6 = c_rt_lib::ov_is($memory_5, 'una_op');
#line 204
if (c_rt_lib::check_true($memory_6)) {goto label_116;}
#line 206
$memory_6 = c_rt_lib::ov_is($memory_5, 'bin_op');
#line 206
if (c_rt_lib::check_true($memory_6)) {goto label_123;}
#line 208
$memory_6 = c_rt_lib::ov_is($memory_5, 'ov_is');
#line 208
if (c_rt_lib::check_true($memory_6)) {goto label_130;}
#line 211
$memory_6 = c_rt_lib::ov_is($memory_5, 'ov_as');
#line 211
if (c_rt_lib::check_true($memory_6)) {goto label_159;}
#line 214
$memory_6 = c_rt_lib::ov_is($memory_5, 'return');
#line 214
if (c_rt_lib::check_true($memory_6)) {goto label_188;}
#line 216
$memory_6 = c_rt_lib::ov_is($memory_5, 'die');
#line 216
if (c_rt_lib::check_true($memory_6)) {goto label_195;}
#line 218
$memory_6 = c_rt_lib::ov_is($memory_5, 'move');
#line 218
if (c_rt_lib::check_true($memory_6)) {goto label_205;}
#line 220
$memory_6 = c_rt_lib::ov_is($memory_5, 'load_const');
#line 220
if (c_rt_lib::check_true($memory_6)) {goto label_222;}
#line 222
$memory_6 = c_rt_lib::ov_is($memory_5, 'get_frm_idx');
#line 222
if (c_rt_lib::check_true($memory_6)) {goto label_239;}
#line 225
$memory_6 = c_rt_lib::ov_is($memory_5, 'set_at_idx');
#line 225
if (c_rt_lib::check_true($memory_6)) {goto label_264;}
#line 228
$memory_6 = c_rt_lib::ov_is($memory_5, 'get_val');
#line 228
if (c_rt_lib::check_true($memory_6)) {goto label_293;}
#line 231
$memory_6 = c_rt_lib::ov_is($memory_5, 'set_val');
#line 231
if (c_rt_lib::check_true($memory_6)) {goto label_324;}
#line 234
$memory_6 = c_rt_lib::ov_is($memory_5, 'ov_mk');
#line 234
if (c_rt_lib::check_true($memory_6)) {goto label_353;}
#line 236
$memory_6 = c_rt_lib::ov_is($memory_5, 'prt_lbl');
#line 236
if (c_rt_lib::check_true($memory_6)) {goto label_360;}
#line 238
$memory_6 = c_rt_lib::ov_is($memory_5, 'if_goto');
#line 238
if (c_rt_lib::check_true($memory_6)) {goto label_371;}
#line 241
$memory_6 = c_rt_lib::ov_is($memory_5, 'goto');
#line 241
if (c_rt_lib::check_true($memory_6)) {goto label_400;}
#line 243
$memory_6 = c_rt_lib::ov_is($memory_5, 'clear');
#line 243
if (c_rt_lib::check_true($memory_6)) {goto label_407;}
#line 243
$memory_6 = "NOMATCHALERT";
#line 243
$memory_6 = [$memory_6,$memory_5];
#line 243
die(dfile::ssave($memory_6));
#line 195
label_46:
#line 195
$memory_7 = c_rt_lib::ov_as($memory_5, 'arr_decl');
#line 196
$memory_9 = $memory_7->{'dest'};
#line 196
$memory_8 = generator_js_priv::print_register_to_assign($memory_9);
#line 196
undef($memory_9);
#line 196
$memory_10 = $memory_7->{'src'};
#line 196
$memory_9 = generator_js_priv::print_arr($memory_10);
#line 196
undef($memory_10);
#line 196
$memory_8 = $memory_8 . $memory_9;
#line 196
undef($memory_9);
#line 196
$memory_9 = ";";
#line 196
$memory_8 = $memory_8 . $memory_9;
#line 196
undef($memory_9);
#line 196
$memory_4 = $memory_8;
#line 196
undef($memory_8);
#line 196
undef($memory_7);
#line 197
goto label_417;
#line 197
label_63:
#line 197
$memory_7 = c_rt_lib::ov_as($memory_5, 'hash_decl');
#line 198
$memory_9 = $memory_7->{'dest'};
#line 198
$memory_8 = generator_js_priv::print_register_to_assign($memory_9);
#line 198
undef($memory_9);
#line 198
$memory_10 = $memory_7->{'src'};
#line 198
$memory_9 = generator_js_priv::print_hash($memory_10);
#line 198
undef($memory_10);
#line 198
$memory_8 = $memory_8 . $memory_9;
#line 198
undef($memory_9);
#line 198
$memory_9 = ";";
#line 198
$memory_8 = $memory_8 . $memory_9;
#line 198
undef($memory_9);
#line 198
$memory_4 = $memory_8;
#line 198
undef($memory_8);
#line 198
undef($memory_7);
#line 199
goto label_417;
#line 199
label_80:
#line 199
$memory_7 = c_rt_lib::ov_as($memory_5, 'call');
#line 200
$memory_9 = $memory_7->{'mod'};
#line 200
$memory_10 = $memory_7->{'fun_name'};
#line 200
$memory_11 = $memory_7->{'args'};
#line 200
$memory_12 = $memory_7->{'dest'};
#line 200
$memory_8 = generator_js_priv::print_call($memory_9, $memory_10, $memory_11, $memory_12, $memory_2);
#line 200
undef($memory_12);
#line 200
undef($memory_11);
#line 200
undef($memory_10);
#line 200
undef($memory_9);
#line 200
$memory_4 = $memory_8;
#line 200
undef($memory_8);
#line 200
undef($memory_7);
#line 201
goto label_417;
#line 201
label_95:
#line 201
$memory_7 = c_rt_lib::ov_as($memory_5, 'func');
#line 202
$memory_9 = $memory_7->{'dest'};
#line 202
$memory_8 = generator_js_priv::print_register_to_assign($memory_9);
#line 202
undef($memory_9);
#line 202
$memory_11 = $memory_7->{'module'};
#line 202
$memory_12 = $memory_7->{'name'};
#line 202
$memory_10 = {module => $memory_11,name => $memory_12,};
#line 202
undef($memory_11);
#line 202
undef($memory_12);
#line 202
$memory_9 = generator_js_priv::print_const_hash($memory_10);
#line 202
undef($memory_10);
#line 202
$memory_8 = $memory_8 . $memory_9;
#line 202
undef($memory_9);
#line 203
$memory_9 = ";";
#line 203
$memory_8 = $memory_8 . $memory_9;
#line 203
undef($memory_9);
#line 203
$memory_4 = $memory_8;
#line 203
undef($memory_8);
#line 203
undef($memory_7);
#line 204
goto label_417;
#line 204
label_116:
#line 204
$memory_7 = c_rt_lib::ov_as($memory_5, 'una_op');
#line 205
$memory_8 = generator_js_priv::print_una_op($memory_7);
#line 205
$memory_4 = $memory_8;
#line 205
undef($memory_8);
#line 205
undef($memory_7);
#line 206
goto label_417;
#line 206
label_123:
#line 206
$memory_7 = c_rt_lib::ov_as($memory_5, 'bin_op');
#line 207
$memory_8 = generator_js_priv::print_bin_op($memory_7, $memory_2);
#line 207
$memory_4 = $memory_8;
#line 207
undef($memory_8);
#line 207
undef($memory_7);
#line 208
goto label_417;
#line 208
label_130:
#line 208
$memory_7 = c_rt_lib::ov_as($memory_5, 'ov_is');
#line 209
$memory_9 = $memory_7->{'dest'};
#line 209
$memory_8 = generator_js_priv::print_register_to_assign($memory_9);
#line 209
undef($memory_9);
#line 209
$memory_10 = "c_rt_lib";
#line 209
$memory_11 = "ov_is";
#line 210
$memory_13 = $memory_7->{'src'};
#line 210
$memory_13 = c_rt_lib::ov_mk_arg('reg', $memory_13);
#line 210
$memory_15 = $memory_7->{'type'};
#line 210
$memory_14 = generator_js_priv::print_str_imm($memory_15, $memory_3);
#line 210
undef($memory_15);
#line 210
$memory_14 = c_rt_lib::ov_mk_arg('str', $memory_14);
#line 210
$memory_12 = [$memory_13,$memory_14];
#line 210
undef($memory_13);
#line 210
undef($memory_14);
#line 210
$memory_9 = generator_js_priv::print_internal_call($memory_10, $memory_11, $memory_12, $memory_2);
#line 210
undef($memory_12);
#line 210
undef($memory_11);
#line 210
undef($memory_10);
#line 210
$memory_8 = $memory_8 . $memory_9;
#line 210
undef($memory_9);
#line 210
$memory_9 = ";";
#line 210
$memory_8 = $memory_8 . $memory_9;
#line 210
undef($memory_9);
#line 210
$memory_4 = $memory_8;
#line 210
undef($memory_8);
#line 210
undef($memory_7);
#line 211
goto label_417;
#line 211
label_159:
#line 211
$memory_7 = c_rt_lib::ov_as($memory_5, 'ov_as');
#line 212
$memory_9 = $memory_7->{'dest'};
#line 212
$memory_8 = generator_js_priv::print_register_to_assign($memory_9);
#line 212
undef($memory_9);
#line 212
$memory_10 = "c_rt_lib";
#line 212
$memory_11 = "ov_as";
#line 213
$memory_13 = $memory_7->{'src'};
#line 213
$memory_13 = c_rt_lib::ov_mk_arg('reg', $memory_13);
#line 213
$memory_15 = $memory_7->{'type'};
#line 213
$memory_14 = generator_js_priv::print_str_imm($memory_15, $memory_3);
#line 213
undef($memory_15);
#line 213
$memory_14 = c_rt_lib::ov_mk_arg('str', $memory_14);
#line 213
$memory_12 = [$memory_13,$memory_14];
#line 213
undef($memory_13);
#line 213
undef($memory_14);
#line 213
$memory_9 = generator_js_priv::print_internal_call($memory_10, $memory_11, $memory_12, $memory_2);
#line 213
undef($memory_12);
#line 213
undef($memory_11);
#line 213
undef($memory_10);
#line 213
$memory_8 = $memory_8 . $memory_9;
#line 213
undef($memory_9);
#line 213
$memory_9 = ";";
#line 213
$memory_8 = $memory_8 . $memory_9;
#line 213
undef($memory_9);
#line 213
$memory_4 = $memory_8;
#line 213
undef($memory_8);
#line 213
undef($memory_7);
#line 214
goto label_417;
#line 214
label_188:
#line 214
$memory_7 = c_rt_lib::ov_as($memory_5, 'return');
#line 215
$memory_8 = generator_js_priv::print_return($memory_7, $memory_1);
#line 215
$memory_4 = $memory_8;
#line 215
undef($memory_8);
#line 215
undef($memory_7);
#line 216
goto label_417;
#line 216
label_195:
#line 216
$memory_7 = c_rt_lib::ov_as($memory_5, 'die');
#line 217
$memory_8 = generator_js_priv::get_namespace_name();
#line 217
$memory_9 = ".nl_die();";
#line 217
$memory_8 = $memory_8 . $memory_9;
#line 217
undef($memory_9);
#line 217
$memory_4 = $memory_8;
#line 217
undef($memory_8);
#line 217
undef($memory_7);
#line 218
goto label_417;
#line 218
label_205:
#line 218
$memory_7 = c_rt_lib::ov_as($memory_5, 'move');
#line 219
$memory_9 = $memory_7->{'dest'};
#line 219
$memory_8 = generator_js_priv::print_register_to_assign($memory_9);
#line 219
undef($memory_9);
#line 219
$memory_10 = $memory_7->{'src'};
#line 219
$memory_9 = generator_js_priv::print_register($memory_10);
#line 219
undef($memory_10);
#line 219
$memory_8 = $memory_8 . $memory_9;
#line 219
undef($memory_9);
#line 219
$memory_9 = ";";
#line 219
$memory_8 = $memory_8 . $memory_9;
#line 219
undef($memory_9);
#line 219
$memory_4 = $memory_8;
#line 219
undef($memory_8);
#line 219
undef($memory_7);
#line 220
goto label_417;
#line 220
label_222:
#line 220
$memory_7 = c_rt_lib::ov_as($memory_5, 'load_const');
#line 221
$memory_9 = $memory_7->{'dest'};
#line 221
$memory_8 = generator_js_priv::print_register_to_assign($memory_9);
#line 221
undef($memory_9);
#line 221
$memory_10 = $memory_7->{'val'};
#line 221
$memory_9 = generator_js_priv::print_const_value_aggr($memory_10, $memory_3);
#line 221
undef($memory_10);
#line 221
$memory_8 = $memory_8 . $memory_9;
#line 221
undef($memory_9);
#line 221
$memory_9 = ";";
#line 221
$memory_8 = $memory_8 . $memory_9;
#line 221
undef($memory_9);
#line 221
$memory_4 = $memory_8;
#line 221
undef($memory_8);
#line 221
undef($memory_7);
#line 222
goto label_417;
#line 222
label_239:
#line 222
$memory_7 = c_rt_lib::ov_as($memory_5, 'get_frm_idx');
#line 223
$memory_9 = $memory_7->{'dest'};
#line 223
$memory_8 = generator_js_priv::print_register_to_assign($memory_9);
#line 223
undef($memory_9);
#line 223
$memory_10 = $memory_7->{'src'};
#line 223
$memory_9 = generator_js_priv::print_register($memory_10);
#line 223
undef($memory_10);
#line 223
$memory_8 = $memory_8 . $memory_9;
#line 223
undef($memory_9);
#line 223
$memory_9 = ".get_index(";
#line 223
$memory_8 = $memory_8 . $memory_9;
#line 223
undef($memory_9);
#line 224
$memory_10 = $memory_7->{'idx'};
#line 224
$memory_9 = generator_js_priv::print_register($memory_10);
#line 224
undef($memory_10);
#line 224
$memory_8 = $memory_8 . $memory_9;
#line 224
undef($memory_9);
#line 224
$memory_9 = ");";
#line 224
$memory_8 = $memory_8 . $memory_9;
#line 224
undef($memory_9);
#line 224
$memory_4 = $memory_8;
#line 224
undef($memory_8);
#line 224
undef($memory_7);
#line 225
goto label_417;
#line 225
label_264:
#line 225
$memory_7 = c_rt_lib::ov_as($memory_5, 'set_at_idx');
#line 226
$memory_9 = "c_rt_lib";
#line 226
$memory_10 = "set_ref_arr";
#line 226
$memory_12 = $memory_7->{'src'};
#line 226
$memory_12 = c_rt_lib::ov_mk_arg('ref', $memory_12);
#line 227
$memory_14 = $memory_7->{'idx'};
#line 227
$memory_13 = generator_js_priv::print_register($memory_14);
#line 227
undef($memory_14);
#line 227
$memory_13 = c_rt_lib::ov_mk_arg('str', $memory_13);
#line 227
$memory_15 = $memory_7->{'val'};
#line 227
$memory_14 = generator_js_priv::print_register($memory_15);
#line 227
undef($memory_15);
#line 227
$memory_14 = c_rt_lib::ov_mk_arg('str', $memory_14);
#line 227
$memory_11 = [$memory_12,$memory_13,$memory_14];
#line 227
undef($memory_12);
#line 227
undef($memory_13);
#line 227
undef($memory_14);
#line 227
$memory_8 = generator_js_priv::print_internal_call($memory_9, $memory_10, $memory_11, $memory_2);
#line 227
undef($memory_11);
#line 227
undef($memory_10);
#line 227
undef($memory_9);
#line 227
$memory_9 = ";";
#line 227
$memory_8 = $memory_8 . $memory_9;
#line 227
undef($memory_9);
#line 227
$memory_4 = $memory_8;
#line 227
undef($memory_8);
#line 227
undef($memory_7);
#line 228
goto label_417;
#line 228
label_293:
#line 228
$memory_7 = c_rt_lib::ov_as($memory_5, 'get_val');
#line 229
$memory_9 = $memory_7->{'dest'};
#line 229
$memory_8 = generator_js_priv::print_register_to_assign($memory_9);
#line 229
undef($memory_9);
#line 229
$memory_10 = "c_rt_lib";
#line 229
$memory_11 = "hash_get_value";
#line 230
$memory_14 = $memory_7->{'src'};
#line 230
$memory_13 = generator_js_priv::print_register($memory_14);
#line 230
undef($memory_14);
#line 230
$memory_13 = c_rt_lib::ov_mk_arg('str', $memory_13);
#line 230
$memory_15 = $memory_7->{'key'};
#line 230
$memory_14 = generator_js_priv::print_str_imm($memory_15, $memory_3);
#line 230
undef($memory_15);
#line 230
$memory_14 = c_rt_lib::ov_mk_arg('str', $memory_14);
#line 230
$memory_12 = [$memory_13,$memory_14];
#line 230
undef($memory_13);
#line 230
undef($memory_14);
#line 230
$memory_9 = generator_js_priv::print_internal_call($memory_10, $memory_11, $memory_12, $memory_2);
#line 230
undef($memory_12);
#line 230
undef($memory_11);
#line 230
undef($memory_10);
#line 230
$memory_8 = $memory_8 . $memory_9;
#line 230
undef($memory_9);
#line 230
$memory_9 = ";";
#line 230
$memory_8 = $memory_8 . $memory_9;
#line 230
undef($memory_9);
#line 230
$memory_4 = $memory_8;
#line 230
undef($memory_8);
#line 230
undef($memory_7);
#line 231
goto label_417;
#line 231
label_324:
#line 231
$memory_7 = c_rt_lib::ov_as($memory_5, 'set_val');
#line 232
$memory_9 = "c_rt_lib";
#line 232
$memory_10 = "hash_set_value";
#line 232
$memory_12 = $memory_7->{'src'};
#line 232
$memory_12 = c_rt_lib::ov_mk_arg('ref', $memory_12);
#line 233
$memory_14 = $memory_7->{'key'};
#line 233
$memory_13 = generator_js_priv::print_str_imm($memory_14, $memory_3);
#line 233
undef($memory_14);
#line 233
$memory_13 = c_rt_lib::ov_mk_arg('str', $memory_13);
#line 233
$memory_15 = $memory_7->{'val'};
#line 233
$memory_14 = generator_js_priv::print_register($memory_15);
#line 233
undef($memory_15);
#line 233
$memory_14 = c_rt_lib::ov_mk_arg('str', $memory_14);
#line 233
$memory_11 = [$memory_12,$memory_13,$memory_14];
#line 233
undef($memory_12);
#line 233
undef($memory_13);
#line 233
undef($memory_14);
#line 233
$memory_8 = generator_js_priv::print_internal_call($memory_9, $memory_10, $memory_11, $memory_2);
#line 233
undef($memory_11);
#line 233
undef($memory_10);
#line 233
undef($memory_9);
#line 233
$memory_9 = ";";
#line 233
$memory_8 = $memory_8 . $memory_9;
#line 233
undef($memory_9);
#line 233
$memory_4 = $memory_8;
#line 233
undef($memory_8);
#line 233
undef($memory_7);
#line 234
goto label_417;
#line 234
label_353:
#line 234
$memory_7 = c_rt_lib::ov_as($memory_5, 'ov_mk');
#line 235
$memory_8 = generator_js_priv::print_ov_mk($memory_7, $memory_3, $memory_2);
#line 235
$memory_4 = $memory_8;
#line 235
undef($memory_8);
#line 235
undef($memory_7);
#line 236
goto label_417;
#line 236
label_360:
#line 236
$memory_7 = c_rt_lib::ov_as($memory_5, 'prt_lbl');
#line 237
$memory_8 = "case ";
#line 237
$memory_8 = $memory_8 . $memory_7;
#line 237
$memory_9 = ":";
#line 237
$memory_8 = $memory_8 . $memory_9;
#line 237
undef($memory_9);
#line 237
$memory_4 = $memory_8;
#line 237
undef($memory_8);
#line 237
undef($memory_7);
#line 238
goto label_417;
#line 238
label_371:
#line 238
$memory_7 = c_rt_lib::ov_as($memory_5, 'if_goto');
#line 239
$memory_8 = "if (";
#line 239
$memory_10 = "c_rt_lib";
#line 239
$memory_11 = "check_true_native";
#line 239
$memory_13 = $memory_7->{'src'};
#line 239
$memory_12 = [$memory_13];
#line 239
undef($memory_13);
#line 239
$memory_9 = generator_js_priv::print_int_call_sim($memory_10, $memory_11, $memory_12);
#line 239
undef($memory_12);
#line 239
undef($memory_11);
#line 239
undef($memory_10);
#line 239
$memory_8 = $memory_8 . $memory_9;
#line 239
undef($memory_9);
#line 239
$memory_9 = ") {";
#line 239
$memory_8 = $memory_8 . $memory_9;
#line 239
undef($memory_9);
#line 239
$memory_10 = $memory_7->{'dest'};
#line 239
$memory_9 = generator_js_priv::print_goto($memory_10);
#line 239
undef($memory_10);
#line 239
$memory_8 = $memory_8 . $memory_9;
#line 239
undef($memory_9);
#line 240
$memory_9 = "}";
#line 240
$memory_8 = $memory_8 . $memory_9;
#line 240
undef($memory_9);
#line 240
$memory_4 = $memory_8;
#line 240
undef($memory_8);
#line 240
undef($memory_7);
#line 241
goto label_417;
#line 241
label_400:
#line 241
$memory_7 = c_rt_lib::ov_as($memory_5, 'goto');
#line 242
$memory_8 = generator_js_priv::print_goto($memory_7);
#line 242
$memory_4 = $memory_8;
#line 242
undef($memory_8);
#line 242
undef($memory_7);
#line 243
goto label_417;
#line 243
label_407:
#line 243
$memory_7 = c_rt_lib::ov_as($memory_5, 'clear');
#line 244
$memory_8 = generator_js_priv::print_register_to_assign($memory_7);
#line 244
$memory_9 = "null;";
#line 244
$memory_8 = $memory_8 . $memory_9;
#line 244
undef($memory_9);
#line 244
$memory_4 = $memory_8;
#line 244
undef($memory_8);
#line 244
undef($memory_7);
#line 245
goto label_417;
#line 245
label_417:
#line 245
undef($memory_5);
#line 245
undef($memory_6);
#line 246
$memory_5 = "//line ";
#line 246
$memory_6 = $memory_0->{'debug'};
#line 246
$memory_6 = $memory_6->{'nast_debug'};
#line 246
$memory_6 = $memory_6->{'begin'};
#line 246
$memory_6 = $memory_6->{'line'};
#line 246
$memory_5 = $memory_5 . $memory_6;
#line 246
undef($memory_6);
#line 246
$memory_6 = string::lf();
#line 246
$memory_5 = $memory_5 . $memory_6;
#line 246
undef($memory_6);
#line 246
$memory_5 = $memory_5 . $memory_4;
#line 246
$memory_6 = string::lf();
#line 246
$memory_5 = $memory_5 . $memory_6;
#line 246
undef($memory_6);
#line 246
undef($memory_0);
#line 246
undef($memory_1);
#line 246
undef($memory_4);
#line 246
$_[2] = $memory_2;$_[3] = $memory_3;return $memory_5;
#line 246
undef($memory_5);
#line 246
undef($memory_4);
#line 246
undef($memory_0);
#line 246
undef($memory_1);
#line 246
$_[2] = $memory_2;$_[3] = $memory_3;return;
$_[2] = $memory_2;$_[3] = $memory_3;}

sub generator_js_priv::print_arr($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;$memory_0 = $_[0];
#line 250
$memory_2 = "arr";
#line 250
$memory_1 = generator_js_priv::imm_call($memory_2);
#line 250
undef($memory_2);
#line 250
$memory_2 = "([";
#line 250
$memory_1 = $memory_1 . $memory_2;
#line 250
undef($memory_2);
#line 251
$memory_3 = 0;
#line 251
$memory_4 = 1;
#line 251
$memory_5 = c_rt_lib::array_len($memory_0);
#line 251
label_9:
#line 251
$memory_6 = c_rt_lib::to_nl($memory_3 >= $memory_5);
#line 251
if (c_rt_lib::check_true($memory_6)) {goto label_21;}
#line 251
$memory_2 = $memory_0->[$memory_3];
#line 251
$memory_7 = generator_js_priv::print_register($memory_2);
#line 251
$memory_8 = ",";
#line 251
$memory_7 = $memory_7 . $memory_8;
#line 251
undef($memory_8);
#line 251
$memory_1 = $memory_1 . $memory_7;
#line 251
undef($memory_7);
#line 251
$memory_3 = $memory_3 + $memory_4;
#line 251
goto label_9;
#line 251
label_21:
#line 251
undef($memory_2);
#line 251
undef($memory_3);
#line 251
undef($memory_4);
#line 251
undef($memory_5);
#line 251
undef($memory_6);
#line 252
$memory_2 = "])";
#line 252
$memory_2 = $memory_1 . $memory_2;
#line 252
undef($memory_0);
#line 252
undef($memory_1);
#line 252
return $memory_2;
#line 252
undef($memory_2);
#line 252
undef($memory_1);
#line 252
undef($memory_0);
#line 252
return;
}

sub generator_js_priv::imm_call($) {
my $memory_0;my $memory_1;my $memory_2;$memory_0 = $_[0];
#line 256
$memory_1 = generator_js_priv::get_namespace_name();
#line 256
$memory_2 = ".imm_";
#line 256
$memory_1 = $memory_1 . $memory_2;
#line 256
undef($memory_2);
#line 256
$memory_1 = $memory_1 . $memory_0;
#line 256
undef($memory_0);
#line 256
return $memory_1;
#line 256
undef($memory_1);
#line 256
undef($memory_0);
#line 256
return;
}

sub generator_js_priv::print_bin_op($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;$memory_0 = $_[0];$memory_1 = $_[1];Scalar::Util::weaken($_[1]) if ref($_[1]);
#line 260
$memory_3 = $memory_0->{'dest'};
#line 260
$memory_2 = generator_js_priv::print_register_to_assign($memory_3);
#line 260
undef($memory_3);
#line 261
$memory_3 = $memory_0->{'op'};
#line 261
$memory_4 = ">=";
#line 261
$memory_3 = c_rt_lib::to_nl($memory_3 eq $memory_4);
#line 261
undef($memory_4);
#line 261
if (c_rt_lib::check_true($memory_3)) {goto label_12;}
#line 261
$memory_3 = $memory_0->{'op'};
#line 261
$memory_4 = "<=";
#line 261
$memory_3 = c_rt_lib::to_nl($memory_3 eq $memory_4);
#line 261
undef($memory_4);
#line 261
label_12:
#line 261
if (c_rt_lib::check_true($memory_3)) {goto label_18;}
#line 261
$memory_3 = $memory_0->{'op'};
#line 261
$memory_4 = "<";
#line 261
$memory_3 = c_rt_lib::to_nl($memory_3 eq $memory_4);
#line 261
undef($memory_4);
#line 261
label_18:
#line 261
if (c_rt_lib::check_true($memory_3)) {goto label_24;}
#line 261
$memory_3 = $memory_0->{'op'};
#line 261
$memory_4 = ">";
#line 261
$memory_3 = c_rt_lib::to_nl($memory_3 eq $memory_4);
#line 261
undef($memory_4);
#line 261
label_24:
#line 261
if (c_rt_lib::check_true($memory_3)) {goto label_30;}
#line 261
$memory_3 = $memory_0->{'op'};
#line 261
$memory_4 = "==";
#line 261
$memory_3 = c_rt_lib::to_nl($memory_3 eq $memory_4);
#line 261
undef($memory_4);
#line 261
label_30:
#line 261
if (c_rt_lib::check_true($memory_3)) {goto label_36;}
#line 262
$memory_3 = $memory_0->{'op'};
#line 262
$memory_4 = "!=";
#line 262
$memory_3 = c_rt_lib::to_nl($memory_3 eq $memory_4);
#line 262
undef($memory_4);
#line 262
label_36:
#line 262
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 262
if (c_rt_lib::check_true($memory_3)) {goto label_83;}
#line 263
$memory_5 = "c_rt_lib";
#line 263
$memory_6 = "imm_to_float";
#line 263
$memory_8 = $memory_0->{'left'};
#line 263
$memory_7 = [$memory_8];
#line 263
undef($memory_8);
#line 263
$memory_4 = generator_js_priv::print_int_call_sim($memory_5, $memory_6, $memory_7);
#line 263
undef($memory_7);
#line 263
undef($memory_6);
#line 263
undef($memory_5);
#line 264
$memory_6 = "c_rt_lib";
#line 264
$memory_7 = "imm_to_float";
#line 264
$memory_9 = $memory_0->{'right'};
#line 264
$memory_8 = [$memory_9];
#line 264
undef($memory_9);
#line 264
$memory_5 = generator_js_priv::print_int_call_sim($memory_6, $memory_7, $memory_8);
#line 264
undef($memory_8);
#line 264
undef($memory_7);
#line 264
undef($memory_6);
#line 265
$memory_7 = "c_rt_lib";
#line 265
$memory_8 = "native_to_nl";
#line 265
$memory_10 = $memory_0->{'op'};
#line 265
$memory_10 = $memory_4 . $memory_10;
#line 265
$memory_10 = $memory_10 . $memory_5;
#line 265
$memory_10 = c_rt_lib::ov_mk_arg('str', $memory_10);
#line 265
$memory_9 = [$memory_10];
#line 265
undef($memory_10);
#line 265
$memory_6 = generator_js_priv::print_internal_call($memory_7, $memory_8, $memory_9, $memory_1);
#line 265
undef($memory_9);
#line 265
undef($memory_8);
#line 265
undef($memory_7);
#line 265
$memory_6 = $memory_2 . $memory_6;
#line 265
$memory_7 = ";";
#line 265
$memory_6 = $memory_6 . $memory_7;
#line 265
undef($memory_7);
#line 265
undef($memory_0);
#line 265
undef($memory_2);
#line 265
undef($memory_3);
#line 265
undef($memory_4);
#line 265
undef($memory_5);
#line 265
$_[1] = $memory_1;return $memory_6;
#line 265
undef($memory_6);
#line 265
undef($memory_4);
#line 265
undef($memory_5);
#line 266
goto label_237;
#line 266
label_83:
#line 266
$memory_3 = $memory_0->{'op'};
#line 266
$memory_4 = "eq";
#line 266
$memory_3 = c_rt_lib::to_nl($memory_3 eq $memory_4);
#line 266
undef($memory_4);
#line 266
if (c_rt_lib::check_true($memory_3)) {goto label_93;}
#line 266
$memory_3 = $memory_0->{'op'};
#line 266
$memory_4 = "ne";
#line 266
$memory_3 = c_rt_lib::to_nl($memory_3 eq $memory_4);
#line 266
undef($memory_4);
#line 266
label_93:
#line 266
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 266
if (c_rt_lib::check_true($memory_3)) {goto label_114;}
#line 267
$memory_5 = "c_rt_lib";
#line 267
$memory_6 = $memory_0->{'op'};
#line 267
$memory_8 = $memory_0->{'left'};
#line 267
$memory_9 = $memory_0->{'right'};
#line 267
$memory_7 = [$memory_8,$memory_9];
#line 267
undef($memory_8);
#line 267
undef($memory_9);
#line 267
$memory_4 = generator_js_priv::print_int_call_sim($memory_5, $memory_6, $memory_7);
#line 267
undef($memory_7);
#line 267
undef($memory_6);
#line 267
undef($memory_5);
#line 267
$memory_4 = $memory_2 . $memory_4;
#line 267
undef($memory_0);
#line 267
undef($memory_2);
#line 267
undef($memory_3);
#line 267
$_[1] = $memory_1;return $memory_4;
#line 267
undef($memory_4);
#line 268
goto label_237;
#line 268
label_114:
#line 268
$memory_3 = $memory_0->{'op'};
#line 268
$memory_4 = ".";
#line 268
$memory_3 = c_rt_lib::to_nl($memory_3 eq $memory_4);
#line 268
undef($memory_4);
#line 268
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 268
if (c_rt_lib::check_true($memory_3)) {goto label_193;}
#line 269
$memory_4 = c_rt_lib::to_nl(0);
#line 269
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 269
if (c_rt_lib::check_true($memory_5)) {goto label_128;}
#line 269
$memory_4 = $memory_0->{'left'};
#line 269
$memory_6 = $memory_0->{'dest'};
#line 269
$memory_4 = c_rt_lib::to_nl($memory_4 eq $memory_6);
#line 269
undef($memory_6);
#line 269
label_128:
#line 269
undef($memory_5);
#line 269
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 269
if (c_rt_lib::check_true($memory_4)) {goto label_161;}
#line 270
$memory_6 = "c_rt_lib";
#line 270
$memory_7 = "concat_add";
#line 270
$memory_10 = ptd::sim();
#line 270
$memory_11 = $memory_0->{'left'};
#line 270
$memory_9 = ptd::ensure($memory_10, $memory_11);
#line 270
undef($memory_11);
#line 270
undef($memory_10);
#line 270
$memory_9 = c_rt_lib::ov_mk_arg('ref', $memory_9);
#line 270
$memory_11 = $memory_0->{'right'};
#line 270
$memory_10 = generator_js_priv::print_register($memory_11);
#line 270
undef($memory_11);
#line 270
$memory_10 = c_rt_lib::ov_mk_arg('str', $memory_10);
#line 270
$memory_8 = [$memory_9,$memory_10];
#line 270
undef($memory_9);
#line 270
undef($memory_10);
#line 270
$memory_5 = generator_js_priv::print_internal_call($memory_6, $memory_7, $memory_8, $memory_1);
#line 270
undef($memory_8);
#line 270
undef($memory_7);
#line 270
undef($memory_6);
#line 270
$memory_6 = ";";
#line 270
$memory_5 = $memory_5 . $memory_6;
#line 270
undef($memory_6);
#line 270
undef($memory_0);
#line 270
undef($memory_2);
#line 270
undef($memory_3);
#line 270
undef($memory_4);
#line 270
$_[1] = $memory_1;return $memory_5;
#line 270
undef($memory_5);
#line 271
goto label_190;
#line 271
label_161:
#line 272
$memory_6 = "c_rt_lib";
#line 272
$memory_7 = "concat";
#line 273
$memory_10 = $memory_0->{'left'};
#line 273
$memory_9 = generator_js_priv::print_register($memory_10);
#line 273
undef($memory_10);
#line 273
$memory_9 = c_rt_lib::ov_mk_arg('str', $memory_9);
#line 273
$memory_11 = $memory_0->{'right'};
#line 273
$memory_10 = generator_js_priv::print_register($memory_11);
#line 273
undef($memory_11);
#line 273
$memory_10 = c_rt_lib::ov_mk_arg('str', $memory_10);
#line 273
$memory_8 = [$memory_9,$memory_10];
#line 273
undef($memory_9);
#line 273
undef($memory_10);
#line 273
$memory_5 = generator_js_priv::print_internal_call($memory_6, $memory_7, $memory_8, $memory_1);
#line 273
undef($memory_8);
#line 273
undef($memory_7);
#line 273
undef($memory_6);
#line 273
$memory_5 = $memory_2 . $memory_5;
#line 273
$memory_6 = ";";
#line 273
$memory_5 = $memory_5 . $memory_6;
#line 273
undef($memory_6);
#line 273
undef($memory_0);
#line 273
undef($memory_2);
#line 273
undef($memory_3);
#line 273
undef($memory_4);
#line 273
$_[1] = $memory_1;return $memory_5;
#line 273
undef($memory_5);
#line 275
goto label_190;
#line 275
label_190:
#line 275
undef($memory_4);
#line 276
goto label_237;
#line 276
label_193:
#line 277
$memory_5 = "c_rt_lib";
#line 277
$memory_6 = "imm_to_float";
#line 277
$memory_8 = $memory_0->{'left'};
#line 277
$memory_7 = [$memory_8];
#line 277
undef($memory_8);
#line 277
$memory_4 = generator_js_priv::print_int_call_sim($memory_5, $memory_6, $memory_7);
#line 277
undef($memory_7);
#line 277
undef($memory_6);
#line 277
undef($memory_5);
#line 278
$memory_6 = "c_rt_lib";
#line 278
$memory_7 = "imm_to_float";
#line 278
$memory_9 = $memory_0->{'right'};
#line 278
$memory_8 = [$memory_9];
#line 278
undef($memory_9);
#line 278
$memory_5 = generator_js_priv::print_int_call_sim($memory_6, $memory_7, $memory_8);
#line 278
undef($memory_8);
#line 278
undef($memory_7);
#line 278
undef($memory_6);
#line 279
$memory_7 = "float";
#line 279
$memory_6 = generator_js_priv::imm_call($memory_7);
#line 279
undef($memory_7);
#line 279
$memory_6 = $memory_2 . $memory_6;
#line 279
$memory_7 = "(";
#line 279
$memory_6 = $memory_6 . $memory_7;
#line 279
undef($memory_7);
#line 279
$memory_6 = $memory_6 . $memory_4;
#line 279
$memory_7 = $memory_0->{'op'};
#line 279
$memory_6 = $memory_6 . $memory_7;
#line 279
undef($memory_7);
#line 279
$memory_6 = $memory_6 . $memory_5;
#line 279
$memory_7 = ");";
#line 279
$memory_6 = $memory_6 . $memory_7;
#line 279
undef($memory_7);
#line 279
undef($memory_0);
#line 279
undef($memory_2);
#line 279
undef($memory_3);
#line 279
undef($memory_4);
#line 279
undef($memory_5);
#line 279
$_[1] = $memory_1;return $memory_6;
#line 279
undef($memory_6);
#line 279
undef($memory_4);
#line 279
undef($memory_5);
#line 280
goto label_237;
#line 280
label_237:
#line 280
undef($memory_3);
#line 280
undef($memory_2);
#line 280
undef($memory_0);
#line 280
$_[1] = $memory_1;return;
$_[1] = $memory_1;}

sub generator_js_priv::print_call($$$$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;my $memory_13;my $memory_14;my $memory_15;my $memory_16;my $memory_17;$memory_0 = $_[0];$memory_1 = $_[1];$memory_2 = $_[2];$memory_3 = $_[3];$memory_4 = $_[4];Scalar::Util::weaken($_[4]) if ref($_[4]);
#line 285
$memory_5 = generator_js_priv::print_register_to_assign($memory_3);
#line 285
$memory_6 = generator_js_priv::get_function_call_name_raw($memory_1, $memory_0);
#line 285
$memory_5 = $memory_5 . $memory_6;
#line 285
undef($memory_6);
#line 285
$memory_6 = "(";
#line 285
$memory_5 = $memory_5 . $memory_6;
#line 285
undef($memory_6);
#line 286
$memory_6 = 0;
#line 287
$memory_7 = "";
#line 288
$memory_8 = "";
#line 289
$memory_10 = 0;
#line 289
$memory_11 = 1;
#line 289
$memory_12 = c_rt_lib::array_len($memory_2);
#line 289
label_13:
#line 289
$memory_13 = c_rt_lib::to_nl($memory_10 >= $memory_12);
#line 289
if (c_rt_lib::check_true($memory_13)) {goto label_59;}
#line 289
$memory_9 = $memory_2->[$memory_10];
#line 290
$memory_14 = 0;
#line 290
$memory_14 = c_rt_lib::to_nl($memory_6 == $memory_14);
#line 290
$memory_14 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_14));
#line 290
$memory_14 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_14));
#line 290
if (c_rt_lib::check_true($memory_14)) {goto label_26;}
#line 290
$memory_15 = ",";
#line 290
$memory_5 = $memory_5 . $memory_15;
#line 290
undef($memory_15);
#line 290
goto label_26;
#line 290
label_26:
#line 290
undef($memory_14);
#line 291
$memory_14 = 1;
#line 291
$memory_6 = $memory_6 + $memory_14;
#line 291
undef($memory_14);
#line 292
$memory_14 = c_rt_lib::ov_is($memory_9, 'ref');
#line 292
if (c_rt_lib::check_true($memory_14)) {goto label_38;}
#line 295
$memory_14 = c_rt_lib::ov_is($memory_9, 'val');
#line 295
if (c_rt_lib::check_true($memory_14)) {goto label_48;}
#line 295
$memory_14 = "NOMATCHALERT";
#line 295
$memory_14 = [$memory_14,$memory_9];
#line 295
die(dfile::ssave($memory_14));
#line 292
label_38:
#line 292
$memory_15 = c_rt_lib::ov_as($memory_9, 'ref');
#line 293
$memory_17 = ptd::sim();
#line 293
$memory_16 = ptd::ensure($memory_17, $memory_15);
#line 293
undef($memory_17);
#line 293
$memory_15 = $memory_16;
#line 293
undef($memory_16);
#line 294
generator_js_priv::process_ref_reg($memory_7, $memory_5, $memory_8, $memory_15, $memory_6, $memory_4);
#line 294
undef($memory_15);
#line 295
goto label_55;
#line 295
label_48:
#line 295
$memory_15 = c_rt_lib::ov_as($memory_9, 'val');
#line 296
$memory_16 = generator_js_priv::print_register($memory_15);
#line 296
$memory_5 = $memory_5 . $memory_16;
#line 296
undef($memory_16);
#line 296
undef($memory_15);
#line 297
goto label_55;
#line 297
label_55:
#line 297
undef($memory_14);
#line 298
$memory_10 = $memory_10 + $memory_11;
#line 298
goto label_13;
#line 298
label_59:
#line 298
undef($memory_9);
#line 298
undef($memory_10);
#line 298
undef($memory_11);
#line 298
undef($memory_12);
#line 298
undef($memory_13);
#line 299
$memory_9 = 1;
#line 299
$memory_4 = $memory_4 + $memory_9;
#line 299
undef($memory_9);
#line 300
$memory_9 = $memory_7 . $memory_5;
#line 300
$memory_10 = ");";
#line 300
$memory_9 = $memory_9 . $memory_10;
#line 300
undef($memory_10);
#line 300
$memory_9 = $memory_9 . $memory_8;
#line 300
undef($memory_0);
#line 300
undef($memory_1);
#line 300
undef($memory_2);
#line 300
undef($memory_3);
#line 300
undef($memory_5);
#line 300
undef($memory_6);
#line 300
undef($memory_7);
#line 300
undef($memory_8);
#line 300
$_[4] = $memory_4;return $memory_9;
#line 300
undef($memory_9);
#line 300
undef($memory_5);
#line 300
undef($memory_6);
#line 300
undef($memory_7);
#line 300
undef($memory_8);
#line 300
undef($memory_0);
#line 300
undef($memory_1);
#line 300
undef($memory_2);
#line 300
undef($memory_3);
#line 300
$_[4] = $memory_4;return;
$_[4] = $memory_4;}

sub generator_js_priv::process_ref_reg($$$$$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];Scalar::Util::weaken($_[1]) if ref($_[1]);$memory_2 = $_[2];Scalar::Util::weaken($_[2]) if ref($_[2]);$memory_3 = $_[3];$memory_4 = $_[4];$memory_5 = $_[5];
#line 304
$memory_6 = "call_";
#line 304
$memory_6 = $memory_6 . $memory_5;
#line 304
$memory_7 = "_";
#line 304
$memory_6 = $memory_6 . $memory_7;
#line 304
undef($memory_7);
#line 304
$memory_6 = $memory_6 . $memory_4;
#line 305
$memory_7 = "var ";
#line 305
$memory_7 = $memory_7 . $memory_6;
#line 305
$memory_8 = " = new ";
#line 305
$memory_7 = $memory_7 . $memory_8;
#line 305
undef($memory_8);
#line 305
$memory_9 = "ref";
#line 305
$memory_8 = generator_js_priv::imm_call($memory_9);
#line 305
undef($memory_9);
#line 305
$memory_7 = $memory_7 . $memory_8;
#line 305
undef($memory_8);
#line 305
$memory_8 = "(";
#line 305
$memory_7 = $memory_7 . $memory_8;
#line 305
undef($memory_8);
#line 305
$memory_8 = generator_js_priv::print_register($memory_3);
#line 305
$memory_7 = $memory_7 . $memory_8;
#line 305
undef($memory_8);
#line 305
$memory_8 = ");";
#line 305
$memory_7 = $memory_7 . $memory_8;
#line 305
undef($memory_8);
#line 305
$memory_0 = $memory_0 . $memory_7;
#line 305
undef($memory_7);
#line 306
$memory_1 = $memory_1 . $memory_6;
#line 307
$memory_7 = generator_js_priv::print_register_to_assign($memory_3);
#line 307
$memory_7 = $memory_7 . $memory_6;
#line 307
$memory_8 = ".value;";
#line 307
$memory_7 = $memory_7 . $memory_8;
#line 307
undef($memory_8);
#line 307
$memory_2 = $memory_2 . $memory_7;
#line 307
undef($memory_7);
#line 308
$memory_7 = " = null;";
#line 308
$memory_7 = $memory_6 . $memory_7;
#line 308
$memory_2 = $memory_2 . $memory_7;
#line 308
undef($memory_7);
#line 308
undef($memory_6);
#line 308
undef($memory_3);
#line 308
undef($memory_4);
#line 308
undef($memory_5);
#line 308
$_[0] = $memory_0;$_[1] = $memory_1;$_[2] = $memory_2;return;
$_[0] = $memory_0;$_[1] = $memory_1;$_[2] = $memory_2;}

sub generator_js_priv::print_internal_call($$$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;my $memory_13;my $memory_14;my $memory_15;$memory_0 = $_[0];$memory_1 = $_[1];$memory_2 = $_[2];$memory_3 = $_[3];Scalar::Util::weaken($_[3]) if ref($_[3]);
#line 313
$memory_4 = 0;
#line 314
$memory_5 = "";
#line 315
$memory_6 = "";
#line 316
$memory_7 = generator_js_priv::get_namespace_name();
#line 316
$memory_8 = ".";
#line 316
$memory_7 = $memory_7 . $memory_8;
#line 316
undef($memory_8);
#line 316
$memory_7 = $memory_7 . $memory_0;
#line 316
$memory_8 = ".";
#line 316
$memory_7 = $memory_7 . $memory_8;
#line 316
undef($memory_8);
#line 316
$memory_7 = $memory_7 . $memory_1;
#line 316
$memory_8 = "(";
#line 316
$memory_7 = $memory_7 . $memory_8;
#line 316
undef($memory_8);
#line 317
$memory_9 = 0;
#line 317
$memory_10 = 1;
#line 317
$memory_11 = c_rt_lib::array_len($memory_2);
#line 317
label_18:
#line 317
$memory_12 = c_rt_lib::to_nl($memory_9 >= $memory_11);
#line 317
if (c_rt_lib::check_true($memory_12)) {goto label_66;}
#line 317
$memory_8 = $memory_2->[$memory_9];
#line 318
$memory_13 = 0;
#line 318
$memory_13 = c_rt_lib::to_nl($memory_4 == $memory_13);
#line 318
$memory_13 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_13));
#line 318
$memory_13 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_13));
#line 318
if (c_rt_lib::check_true($memory_13)) {goto label_31;}
#line 318
$memory_14 = ",";
#line 318
$memory_7 = $memory_7 . $memory_14;
#line 318
undef($memory_14);
#line 318
goto label_31;
#line 318
label_31:
#line 318
undef($memory_13);
#line 319
$memory_13 = 1;
#line 319
$memory_4 = $memory_4 + $memory_13;
#line 319
undef($memory_13);
#line 320
$memory_13 = c_rt_lib::ov_is($memory_8, 'ref');
#line 320
if (c_rt_lib::check_true($memory_13)) {goto label_45;}
#line 322
$memory_13 = c_rt_lib::ov_is($memory_8, 'reg');
#line 322
if (c_rt_lib::check_true($memory_13)) {goto label_50;}
#line 324
$memory_13 = c_rt_lib::ov_is($memory_8, 'str');
#line 324
if (c_rt_lib::check_true($memory_13)) {goto label_57;}
#line 324
$memory_13 = "NOMATCHALERT";
#line 324
$memory_13 = [$memory_13,$memory_8];
#line 324
die(dfile::ssave($memory_13));
#line 320
label_45:
#line 320
$memory_14 = c_rt_lib::ov_as($memory_8, 'ref');
#line 321
generator_js_priv::process_ref_reg($memory_5, $memory_7, $memory_6, $memory_14, $memory_4, $memory_3);
#line 321
undef($memory_14);
#line 322
goto label_62;
#line 322
label_50:
#line 322
$memory_14 = c_rt_lib::ov_as($memory_8, 'reg');
#line 323
$memory_15 = generator_js_priv::print_register($memory_14);
#line 323
$memory_7 = $memory_7 . $memory_15;
#line 323
undef($memory_15);
#line 323
undef($memory_14);
#line 324
goto label_62;
#line 324
label_57:
#line 324
$memory_14 = c_rt_lib::ov_as($memory_8, 'str');
#line 325
$memory_7 = $memory_7 . $memory_14;
#line 325
undef($memory_14);
#line 326
goto label_62;
#line 326
label_62:
#line 326
undef($memory_13);
#line 327
$memory_9 = $memory_9 + $memory_10;
#line 327
goto label_18;
#line 327
label_66:
#line 327
undef($memory_8);
#line 327
undef($memory_9);
#line 327
undef($memory_10);
#line 327
undef($memory_11);
#line 327
undef($memory_12);
#line 328
$memory_8 = 1;
#line 328
$memory_3 = $memory_3 + $memory_8;
#line 328
undef($memory_8);
#line 329
$memory_8 = $memory_5 . $memory_7;
#line 329
$memory_9 = ");";
#line 329
$memory_8 = $memory_8 . $memory_9;
#line 329
undef($memory_9);
#line 329
$memory_8 = $memory_8 . $memory_6;
#line 329
undef($memory_0);
#line 329
undef($memory_1);
#line 329
undef($memory_2);
#line 329
undef($memory_4);
#line 329
undef($memory_5);
#line 329
undef($memory_6);
#line 329
undef($memory_7);
#line 329
$_[3] = $memory_3;return $memory_8;
#line 329
undef($memory_8);
#line 329
undef($memory_4);
#line 329
undef($memory_5);
#line 329
undef($memory_6);
#line 329
undef($memory_7);
#line 329
undef($memory_0);
#line 329
undef($memory_1);
#line 329
undef($memory_2);
#line 329
$_[3] = $memory_3;return;
$_[3] = $memory_3;}

sub generator_js_priv::print_int_call_sim($$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;$memory_0 = $_[0];$memory_1 = $_[1];$memory_2 = $_[2];
#line 333
$memory_3 = [];
#line 334
$memory_5 = 0;
#line 334
$memory_6 = 1;
#line 334
$memory_7 = c_rt_lib::array_len($memory_2);
#line 334
label_4:
#line 334
$memory_8 = c_rt_lib::to_nl($memory_5 >= $memory_7);
#line 334
if (c_rt_lib::check_true($memory_8)) {goto label_13;}
#line 334
$memory_4 = $memory_2->[$memory_5];
#line 335
$memory_9 = generator_js_priv::print_register($memory_4);
#line 335
c_rt_lib::array_push($memory_3, $memory_9);
#line 335
undef($memory_9);
#line 336
$memory_5 = $memory_5 + $memory_6;
#line 336
goto label_4;
#line 336
label_13:
#line 336
undef($memory_4);
#line 336
undef($memory_5);
#line 336
undef($memory_6);
#line 336
undef($memory_7);
#line 336
undef($memory_8);
#line 337
$memory_4 = generator_js_priv::get_namespace_name();
#line 337
$memory_5 = ".";
#line 337
$memory_4 = $memory_4 . $memory_5;
#line 337
undef($memory_5);
#line 337
$memory_4 = $memory_4 . $memory_0;
#line 337
$memory_5 = ".";
#line 337
$memory_4 = $memory_4 . $memory_5;
#line 337
undef($memory_5);
#line 337
$memory_4 = $memory_4 . $memory_1;
#line 337
$memory_5 = "(";
#line 337
$memory_4 = $memory_4 . $memory_5;
#line 337
undef($memory_5);
#line 337
$memory_6 = ", ";
#line 337
$memory_5 = array::join($memory_6, $memory_3);
#line 337
undef($memory_6);
#line 337
$memory_4 = $memory_4 . $memory_5;
#line 337
undef($memory_5);
#line 337
$memory_5 = ")";
#line 337
$memory_4 = $memory_4 . $memory_5;
#line 337
undef($memory_5);
#line 337
undef($memory_0);
#line 337
undef($memory_1);
#line 337
undef($memory_2);
#line 337
undef($memory_3);
#line 337
return $memory_4;
#line 337
undef($memory_4);
#line 337
undef($memory_3);
#line 337
undef($memory_0);
#line 337
undef($memory_1);
#line 337
undef($memory_2);
#line 337
return;
}

sub generator_js_priv::print_const_arr($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;$memory_0 = $_[0];
#line 341
$memory_2 = "arr";
#line 341
$memory_1 = generator_js_priv::imm_call($memory_2);
#line 341
undef($memory_2);
#line 341
$memory_2 = "([";
#line 341
$memory_1 = $memory_1 . $memory_2;
#line 341
undef($memory_2);
#line 342
$memory_3 = 0;
#line 342
$memory_4 = 1;
#line 342
$memory_5 = c_rt_lib::array_len($memory_0);
#line 342
label_9:
#line 342
$memory_6 = c_rt_lib::to_nl($memory_3 >= $memory_5);
#line 342
if (c_rt_lib::check_true($memory_6)) {goto label_21;}
#line 342
$memory_2 = $memory_0->[$memory_3];
#line 342
$memory_7 = generator_js_priv::print_const_value($memory_2);
#line 342
$memory_8 = ",";
#line 342
$memory_7 = $memory_7 . $memory_8;
#line 342
undef($memory_8);
#line 342
$memory_1 = $memory_1 . $memory_7;
#line 342
undef($memory_7);
#line 342
$memory_3 = $memory_3 + $memory_4;
#line 342
goto label_9;
#line 342
label_21:
#line 342
undef($memory_2);
#line 342
undef($memory_3);
#line 342
undef($memory_4);
#line 342
undef($memory_5);
#line 342
undef($memory_6);
#line 343
$memory_2 = "])";
#line 343
$memory_2 = $memory_1 . $memory_2;
#line 343
undef($memory_0);
#line 343
undef($memory_1);
#line 343
return $memory_2;
#line 343
undef($memory_2);
#line 343
undef($memory_1);
#line 343
undef($memory_0);
#line 343
return;
}

sub generator_js_priv::print_const_hash($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;$memory_0 = $_[0];
#line 347
$memory_2 = "hash";
#line 347
$memory_1 = generator_js_priv::imm_call($memory_2);
#line 347
undef($memory_2);
#line 347
$memory_2 = "({";
#line 347
$memory_1 = $memory_1 . $memory_2;
#line 347
undef($memory_2);
#line 348
$memory_4 = c_rt_lib::init_iter($memory_0);
#line 348
label_7:
#line 348
$memory_2 = c_rt_lib::is_end_hash($memory_4);
#line 348
if (c_rt_lib::check_true($memory_2)) {goto label_29;}
#line 348
$memory_2 = c_rt_lib::get_key_iter($memory_4);
#line 348
$memory_3 = c_rt_lib::hash_get_value($memory_0, $memory_2);
#line 348
$memory_5 = "";
#line 348
$memory_6 = generator_js_priv::escape_string($memory_2);
#line 348
$memory_5 = $memory_5 . $memory_6;
#line 348
undef($memory_6);
#line 348
$memory_6 = ":";
#line 348
$memory_5 = $memory_5 . $memory_6;
#line 348
undef($memory_6);
#line 348
$memory_6 = generator_js_priv::print_const_value($memory_3);
#line 348
$memory_5 = $memory_5 . $memory_6;
#line 348
undef($memory_6);
#line 348
$memory_6 = ",";
#line 348
$memory_5 = $memory_5 . $memory_6;
#line 348
undef($memory_6);
#line 348
$memory_1 = $memory_1 . $memory_5;
#line 348
undef($memory_5);
#line 348
$memory_4 = c_rt_lib::next_iter($memory_4);
#line 348
goto label_7;
#line 348
label_29:
#line 348
undef($memory_2);
#line 348
undef($memory_3);
#line 348
undef($memory_4);
#line 349
$memory_2 = "})";
#line 349
$memory_2 = $memory_1 . $memory_2;
#line 349
undef($memory_0);
#line 349
undef($memory_1);
#line 349
return $memory_2;
#line 349
undef($memory_2);
#line 349
undef($memory_1);
#line 349
undef($memory_0);
#line 349
return;
}

sub generator_js_priv::print_const_ov($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;$memory_0 = $_[0];
#line 353
$memory_1 = ov::has_value($memory_0);
#line 353
$memory_1 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_1));
#line 353
if (c_rt_lib::check_true($memory_1)) {goto label_30;}
#line 354
$memory_3 = "ov_js_str";
#line 354
$memory_2 = generator_js_priv::imm_call($memory_3);
#line 354
undef($memory_3);
#line 354
$memory_3 = "(";
#line 354
$memory_2 = $memory_2 . $memory_3;
#line 354
undef($memory_3);
#line 354
$memory_4 = ov::get_element($memory_0);
#line 354
$memory_3 = generator_js_priv::escape_string($memory_4);
#line 354
undef($memory_4);
#line 354
$memory_2 = $memory_2 . $memory_3;
#line 354
undef($memory_3);
#line 354
$memory_3 = ", ";
#line 354
$memory_2 = $memory_2 . $memory_3;
#line 354
undef($memory_3);
#line 355
$memory_4 = ov::get_value($memory_0);
#line 355
$memory_3 = generator_js_priv::print_const_value($memory_4);
#line 355
undef($memory_4);
#line 355
$memory_2 = $memory_2 . $memory_3;
#line 355
undef($memory_3);
#line 355
$memory_3 = ")";
#line 355
$memory_2 = $memory_2 . $memory_3;
#line 355
undef($memory_3);
#line 355
undef($memory_0);
#line 355
undef($memory_1);
#line 355
return $memory_2;
#line 355
undef($memory_2);
#line 356
goto label_50;
#line 356
label_30:
#line 357
$memory_3 = "ov_js_str";
#line 357
$memory_2 = generator_js_priv::imm_call($memory_3);
#line 357
undef($memory_3);
#line 357
$memory_3 = "(";
#line 357
$memory_2 = $memory_2 . $memory_3;
#line 357
undef($memory_3);
#line 357
$memory_4 = ov::get_element($memory_0);
#line 357
$memory_3 = generator_js_priv::escape_string($memory_4);
#line 357
undef($memory_4);
#line 357
$memory_2 = $memory_2 . $memory_3;
#line 357
undef($memory_3);
#line 357
$memory_3 = ", null)";
#line 357
$memory_2 = $memory_2 . $memory_3;
#line 357
undef($memory_3);
#line 357
undef($memory_0);
#line 357
undef($memory_1);
#line 357
return $memory_2;
#line 357
undef($memory_2);
#line 358
goto label_50;
#line 358
label_50:
#line 358
undef($memory_1);
#line 358
undef($memory_0);
#line 358
return;
}

sub generator_js_priv::print_const_value($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;$memory_0 = $_[0];
#line 362
$memory_1 = nl::is_sim($memory_0);
#line 362
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_1));
#line 362
if (c_rt_lib::check_true($memory_3)) {goto label_7;}
#line 362
$memory_4 = "";
#line 362
$memory_4 = $memory_0 . $memory_4;
#line 362
$memory_1 = string_utils::is_integer($memory_4);
#line 362
undef($memory_4);
#line 362
label_7:
#line 362
undef($memory_3);
#line 362
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_1));
#line 362
if (c_rt_lib::check_true($memory_2)) {goto label_14;}
#line 362
$memory_1 = 0;
#line 362
$memory_1 = $memory_1 + $memory_0;
#line 362
$memory_1 = c_rt_lib::to_nl($memory_1 eq $memory_0);
#line 362
label_14:
#line 362
undef($memory_2);
#line 362
$memory_1 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_1));
#line 362
if (c_rt_lib::check_true($memory_1)) {goto label_33;}
#line 363
$memory_3 = "int";
#line 363
$memory_2 = generator_js_priv::imm_call($memory_3);
#line 363
undef($memory_3);
#line 363
$memory_3 = "(";
#line 363
$memory_2 = $memory_2 . $memory_3;
#line 363
undef($memory_3);
#line 363
$memory_2 = $memory_2 . $memory_0;
#line 363
$memory_3 = ")";
#line 363
$memory_2 = $memory_2 . $memory_3;
#line 363
undef($memory_3);
#line 363
undef($memory_0);
#line 363
undef($memory_1);
#line 363
return $memory_2;
#line 363
undef($memory_2);
#line 364
goto label_141;
#line 364
label_33:
#line 364
$memory_1 = nl::is_sim($memory_0);
#line 364
$memory_1 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_1));
#line 364
if (c_rt_lib::check_true($memory_1)) {goto label_54;}
#line 365
$memory_3 = "str";
#line 365
$memory_2 = generator_js_priv::imm_call($memory_3);
#line 365
undef($memory_3);
#line 365
$memory_3 = "(";
#line 365
$memory_2 = $memory_2 . $memory_3;
#line 365
undef($memory_3);
#line 365
$memory_3 = generator_js_priv::escape_string($memory_0);
#line 365
$memory_2 = $memory_2 . $memory_3;
#line 365
undef($memory_3);
#line 365
$memory_3 = ")";
#line 365
$memory_2 = $memory_2 . $memory_3;
#line 365
undef($memory_3);
#line 365
undef($memory_0);
#line 365
undef($memory_1);
#line 365
return $memory_2;
#line 365
undef($memory_2);
#line 366
goto label_141;
#line 366
label_54:
#line 366
$memory_1 = nl::is_array($memory_0);
#line 366
$memory_1 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_1));
#line 366
if (c_rt_lib::check_true($memory_1)) {goto label_64;}
#line 367
$memory_2 = generator_js_priv::print_const_arr($memory_0);
#line 367
undef($memory_0);
#line 367
undef($memory_1);
#line 367
return $memory_2;
#line 367
undef($memory_2);
#line 368
goto label_141;
#line 368
label_64:
#line 368
$memory_1 = nl::is_hash($memory_0);
#line 368
$memory_1 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_1));
#line 368
if (c_rt_lib::check_true($memory_1)) {goto label_74;}
#line 369
$memory_2 = generator_js_priv::print_const_hash($memory_0);
#line 369
undef($memory_0);
#line 369
undef($memory_1);
#line 369
return $memory_2;
#line 369
undef($memory_2);
#line 370
goto label_141;
#line 370
label_74:
#line 370
$memory_1 = nl::is_variant($memory_0);
#line 370
$memory_1 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_1));
#line 370
if (c_rt_lib::check_true($memory_1)) {goto label_136;}
#line 371
$memory_2 = $memory_0;
#line 371
$memory_2 = c_rt_lib::ov_is($memory_2, 'TRUE');
#line 371
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 371
if (c_rt_lib::check_true($memory_3)) {goto label_84;}
#line 371
$memory_2 = ov::has_value($memory_0);
#line 371
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 371
label_84:
#line 371
undef($memory_3);
#line 371
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 371
if (c_rt_lib::check_true($memory_2)) {goto label_101;}
#line 372
$memory_4 = "c_rt_lib";
#line 372
$memory_5 = "get_true";
#line 372
$memory_6 = [];
#line 372
$memory_3 = generator_js_priv::print_int_call_sim($memory_4, $memory_5, $memory_6);
#line 372
undef($memory_6);
#line 372
undef($memory_5);
#line 372
undef($memory_4);
#line 372
undef($memory_0);
#line 372
undef($memory_1);
#line 372
undef($memory_2);
#line 372
return $memory_3;
#line 372
undef($memory_3);
#line 373
goto label_133;
#line 373
label_101:
#line 373
$memory_2 = $memory_0;
#line 373
$memory_2 = c_rt_lib::ov_is($memory_2, 'FALSE');
#line 373
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 373
if (c_rt_lib::check_true($memory_3)) {goto label_108;}
#line 373
$memory_2 = ov::has_value($memory_0);
#line 373
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 373
label_108:
#line 373
undef($memory_3);
#line 373
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 373
if (c_rt_lib::check_true($memory_2)) {goto label_125;}
#line 374
$memory_4 = "c_rt_lib";
#line 374
$memory_5 = "get_false";
#line 374
$memory_6 = [];
#line 374
$memory_3 = generator_js_priv::print_int_call_sim($memory_4, $memory_5, $memory_6);
#line 374
undef($memory_6);
#line 374
undef($memory_5);
#line 374
undef($memory_4);
#line 374
undef($memory_0);
#line 374
undef($memory_1);
#line 374
undef($memory_2);
#line 374
return $memory_3;
#line 374
undef($memory_3);
#line 375
goto label_133;
#line 375
label_125:
#line 376
$memory_3 = generator_js_priv::print_const_ov($memory_0);
#line 376
undef($memory_0);
#line 376
undef($memory_1);
#line 376
undef($memory_2);
#line 376
return $memory_3;
#line 376
undef($memory_3);
#line 377
goto label_133;
#line 377
label_133:
#line 377
undef($memory_2);
#line 378
goto label_141;
#line 378
label_136:
#line 379
$memory_2 = [];
#line 379
die(dfile::ssave($memory_2));
#line 379
undef($memory_2);
#line 380
goto label_141;
#line 380
label_141:
#line 380
undef($memory_1);
#line 380
undef($memory_0);
#line 380
return;
}

sub generator_js_priv::print_goto($) {
my $memory_0;my $memory_1;my $memory_2;$memory_0 = $_[0];
#line 384
$memory_1 = "label = ";
#line 384
$memory_1 = $memory_1 . $memory_0;
#line 384
$memory_2 = "; continue;";
#line 384
$memory_1 = $memory_1 . $memory_2;
#line 384
undef($memory_2);
#line 384
undef($memory_0);
#line 384
return $memory_1;
#line 384
undef($memory_1);
#line 384
undef($memory_0);
#line 384
return;
}

sub generator_js_priv::print_hash($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;$memory_0 = $_[0];
#line 388
$memory_2 = "hash";
#line 388
$memory_1 = generator_js_priv::imm_call($memory_2);
#line 388
undef($memory_2);
#line 388
$memory_2 = "({";
#line 388
$memory_1 = $memory_1 . $memory_2;
#line 388
undef($memory_2);
#line 389
$memory_3 = 0;
#line 389
$memory_4 = 1;
#line 389
$memory_5 = c_rt_lib::array_len($memory_0);
#line 389
label_9:
#line 389
$memory_6 = c_rt_lib::to_nl($memory_3 >= $memory_5);
#line 389
if (c_rt_lib::check_true($memory_6)) {goto label_31;}
#line 389
$memory_2 = $memory_0->[$memory_3];
#line 389
$memory_8 = $memory_2->{'key'};
#line 389
$memory_7 = generator_js_priv::escape_string($memory_8);
#line 389
undef($memory_8);
#line 389
$memory_8 = ":";
#line 389
$memory_7 = $memory_7 . $memory_8;
#line 389
undef($memory_8);
#line 389
$memory_9 = $memory_2->{'val'};
#line 389
$memory_8 = generator_js_priv::print_register($memory_9);
#line 389
undef($memory_9);
#line 389
$memory_7 = $memory_7 . $memory_8;
#line 389
undef($memory_8);
#line 389
$memory_8 = ",";
#line 389
$memory_7 = $memory_7 . $memory_8;
#line 389
undef($memory_8);
#line 389
$memory_1 = $memory_1 . $memory_7;
#line 389
undef($memory_7);
#line 389
$memory_3 = $memory_3 + $memory_4;
#line 389
goto label_9;
#line 389
label_31:
#line 389
undef($memory_2);
#line 389
undef($memory_3);
#line 389
undef($memory_4);
#line 389
undef($memory_5);
#line 389
undef($memory_6);
#line 390
$memory_2 = "})";
#line 390
$memory_2 = $memory_1 . $memory_2;
#line 390
undef($memory_0);
#line 390
undef($memory_1);
#line 390
return $memory_2;
#line 390
undef($memory_2);
#line 390
undef($memory_1);
#line 390
undef($memory_0);
#line 390
return;
}

sub generator_js_priv::print_ov_mk($$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;$memory_0 = $_[0];$memory_1 = $_[1];Scalar::Util::weaken($_[1]) if ref($_[1]);$memory_2 = $_[2];Scalar::Util::weaken($_[2]) if ref($_[2]);
#line 394
$memory_4 = $memory_0->{'dest'};
#line 394
$memory_3 = generator_js_priv::print_register_to_assign($memory_4);
#line 394
undef($memory_4);
#line 395
$memory_4 = $memory_0->{'src'};
#line 395
$memory_5 = c_rt_lib::ov_is($memory_4, 'arg');
#line 395
if (c_rt_lib::check_true($memory_5)) {goto label_11;}
#line 398
$memory_5 = c_rt_lib::ov_is($memory_4, 'emp');
#line 398
if (c_rt_lib::check_true($memory_5)) {goto label_40;}
#line 398
$memory_5 = "NOMATCHALERT";
#line 398
$memory_5 = [$memory_5,$memory_4];
#line 398
die(dfile::ssave($memory_5));
#line 395
label_11:
#line 395
$memory_6 = c_rt_lib::ov_as($memory_4, 'arg');
#line 396
$memory_8 = "c_rt_lib";
#line 396
$memory_9 = "ov_mk_arg";
#line 397
$memory_12 = $memory_0->{'name'};
#line 397
$memory_11 = generator_js_priv::print_const_value_aggr($memory_12, $memory_1);
#line 397
undef($memory_12);
#line 397
$memory_11 = c_rt_lib::ov_mk_arg('str', $memory_11);
#line 397
$memory_12 = c_rt_lib::ov_mk_arg('reg', $memory_6);
#line 397
$memory_10 = [$memory_11,$memory_12];
#line 397
undef($memory_11);
#line 397
undef($memory_12);
#line 397
$memory_7 = generator_js_priv::print_internal_call($memory_8, $memory_9, $memory_10, $memory_2);
#line 397
undef($memory_10);
#line 397
undef($memory_9);
#line 397
undef($memory_8);
#line 397
$memory_7 = $memory_3 . $memory_7;
#line 397
$memory_8 = ";";
#line 397
$memory_7 = $memory_7 . $memory_8;
#line 397
undef($memory_8);
#line 397
undef($memory_0);
#line 397
undef($memory_3);
#line 397
undef($memory_4);
#line 397
undef($memory_5);
#line 397
undef($memory_6);
#line 397
$_[1] = $memory_1;$_[2] = $memory_2;return $memory_7;
#line 397
undef($memory_7);
#line 397
undef($memory_6);
#line 398
goto label_54;
#line 398
label_40:
#line 399
$memory_8 = $memory_0->{'name'};
#line 399
$memory_7 = ov::mk($memory_8);
#line 399
undef($memory_8);
#line 399
$memory_6 = generator_js_priv::print_const_value_aggr($memory_7, $memory_1);
#line 399
undef($memory_7);
#line 399
$memory_6 = $memory_3 . $memory_6;
#line 399
undef($memory_0);
#line 399
undef($memory_3);
#line 399
undef($memory_4);
#line 399
undef($memory_5);
#line 399
$_[1] = $memory_1;$_[2] = $memory_2;return $memory_6;
#line 399
undef($memory_6);
#line 400
goto label_54;
#line 400
label_54:
#line 400
undef($memory_4);
#line 400
undef($memory_5);
#line 400
undef($memory_3);
#line 400
undef($memory_0);
#line 400
$_[1] = $memory_1;$_[2] = $memory_2;return;
$_[1] = $memory_1;$_[2] = $memory_2;}

sub generator_js_priv::print_register($) {
my $memory_0;my $memory_1;$memory_0 = $_[0];
#line 404
$memory_1 = "___nl__";
#line 404
$memory_1 = $memory_1 . $memory_0;
#line 404
undef($memory_0);
#line 404
return $memory_1;
#line 404
undef($memory_1);
#line 404
undef($memory_0);
#line 404
return;
}

sub generator_js_priv::print_register_to_assign($) {
my $memory_0;my $memory_1;my $memory_2;$memory_0 = $_[0];
#line 408
$memory_1 = "";
#line 408
$memory_1 = c_rt_lib::to_nl($memory_0 eq $memory_1);
#line 408
$memory_1 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_1));
#line 408
if (c_rt_lib::check_true($memory_1)) {goto label_10;}
#line 408
$memory_2 = "";
#line 408
undef($memory_0);
#line 408
undef($memory_1);
#line 408
return $memory_2;
#line 408
undef($memory_2);
#line 408
goto label_10;
#line 408
label_10:
#line 408
undef($memory_1);
#line 409
$memory_1 = generator_js_priv::print_register($memory_0);
#line 409
$memory_2 = " = ";
#line 409
$memory_1 = $memory_1 . $memory_2;
#line 409
undef($memory_2);
#line 409
undef($memory_0);
#line 409
return $memory_1;
#line 409
undef($memory_1);
#line 409
undef($memory_0);
#line 409
return;
}

sub generator_js_priv::print_return($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;$memory_0 = $_[0];$memory_1 = $_[1];
#line 413
$memory_2 = "";
#line 414
$memory_3 = 0;
#line 415
$memory_5 = 0;
#line 415
$memory_6 = 1;
#line 415
$memory_7 = c_rt_lib::array_len($memory_1);
#line 415
label_5:
#line 415
$memory_8 = c_rt_lib::to_nl($memory_5 >= $memory_7);
#line 415
if (c_rt_lib::check_true($memory_8)) {goto label_41;}
#line 415
$memory_4 = $memory_1->[$memory_5];
#line 416
$memory_9 = c_rt_lib::ov_is($memory_4, 'ref');
#line 416
if (c_rt_lib::check_true($memory_9)) {goto label_16;}
#line 418
$memory_9 = c_rt_lib::ov_is($memory_4, 'val');
#line 418
if (c_rt_lib::check_true($memory_9)) {goto label_32;}
#line 418
$memory_9 = "NOMATCHALERT";
#line 418
$memory_9 = [$memory_9,$memory_4];
#line 418
die(dfile::ssave($memory_9));
#line 416
label_16:
#line 417
$memory_10 = "___arg__";
#line 417
$memory_10 = $memory_10 . $memory_3;
#line 417
$memory_11 = ".value = ";
#line 417
$memory_10 = $memory_10 . $memory_11;
#line 417
undef($memory_11);
#line 417
$memory_11 = "___nl__";
#line 417
$memory_10 = $memory_10 . $memory_11;
#line 417
undef($memory_11);
#line 417
$memory_10 = $memory_10 . $memory_3;
#line 417
$memory_11 = ";";
#line 417
$memory_10 = $memory_10 . $memory_11;
#line 417
undef($memory_11);
#line 417
$memory_2 = $memory_2 . $memory_10;
#line 417
undef($memory_10);
#line 418
goto label_34;
#line 418
label_32:
#line 419
goto label_34;
#line 419
label_34:
#line 419
undef($memory_9);
#line 420
$memory_9 = 1;
#line 420
$memory_3 = $memory_3 + $memory_9;
#line 420
undef($memory_9);
#line 421
$memory_5 = $memory_5 + $memory_6;
#line 421
goto label_5;
#line 421
label_41:
#line 421
undef($memory_4);
#line 421
undef($memory_5);
#line 421
undef($memory_6);
#line 421
undef($memory_7);
#line 421
undef($memory_8);
#line 422
$memory_4 = c_rt_lib::ov_is($memory_0, 'val');
#line 422
if (c_rt_lib::check_true($memory_4)) {goto label_54;}
#line 424
$memory_4 = c_rt_lib::ov_is($memory_0, 'emp');
#line 424
if (c_rt_lib::check_true($memory_4)) {goto label_77;}
#line 424
$memory_4 = "NOMATCHALERT";
#line 424
$memory_4 = [$memory_4,$memory_0];
#line 424
die(dfile::ssave($memory_4));
#line 422
label_54:
#line 422
$memory_5 = c_rt_lib::ov_as($memory_0, 'val');
#line 423
$memory_6 = string::lf();
#line 423
$memory_6 = $memory_2 . $memory_6;
#line 423
$memory_7 = "return ";
#line 423
$memory_6 = $memory_6 . $memory_7;
#line 423
undef($memory_7);
#line 423
$memory_7 = generator_js_priv::print_register($memory_5);
#line 423
$memory_6 = $memory_6 . $memory_7;
#line 423
undef($memory_7);
#line 423
$memory_7 = ";";
#line 423
$memory_6 = $memory_6 . $memory_7;
#line 423
undef($memory_7);
#line 423
undef($memory_0);
#line 423
undef($memory_1);
#line 423
undef($memory_2);
#line 423
undef($memory_3);
#line 423
undef($memory_4);
#line 423
undef($memory_5);
#line 423
return $memory_6;
#line 423
undef($memory_6);
#line 423
undef($memory_5);
#line 424
goto label_91;
#line 424
label_77:
#line 425
$memory_5 = string::lf();
#line 425
$memory_5 = $memory_2 . $memory_5;
#line 425
$memory_6 = "return null;";
#line 425
$memory_5 = $memory_5 . $memory_6;
#line 425
undef($memory_6);
#line 425
undef($memory_0);
#line 425
undef($memory_1);
#line 425
undef($memory_2);
#line 425
undef($memory_3);
#line 425
undef($memory_4);
#line 425
return $memory_5;
#line 425
undef($memory_5);
#line 426
goto label_91;
#line 426
label_91:
#line 426
undef($memory_4);
#line 426
undef($memory_2);
#line 426
undef($memory_3);
#line 426
undef($memory_0);
#line 426
undef($memory_1);
#line 426
return;
}

sub generator_js_priv::print_una_op($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;$memory_0 = $_[0];
#line 430
$memory_2 = $memory_0->{'dest'};
#line 430
$memory_1 = generator_js_priv::print_register_to_assign($memory_2);
#line 430
undef($memory_2);
#line 431
$memory_2 = $memory_0->{'op'};
#line 431
$memory_3 = "!";
#line 431
$memory_2 = c_rt_lib::to_nl($memory_2 eq $memory_3);
#line 431
undef($memory_3);
#line 431
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 431
if (c_rt_lib::check_true($memory_2)) {goto label_25;}
#line 432
$memory_4 = "c_rt_lib";
#line 432
$memory_5 = "bool_not";
#line 432
$memory_7 = $memory_0->{'src'};
#line 432
$memory_6 = [$memory_7];
#line 432
undef($memory_7);
#line 432
$memory_3 = generator_js_priv::print_int_call_sim($memory_4, $memory_5, $memory_6);
#line 432
undef($memory_6);
#line 432
undef($memory_5);
#line 432
undef($memory_4);
#line 432
$memory_3 = $memory_1 . $memory_3;
#line 432
undef($memory_0);
#line 432
undef($memory_1);
#line 432
undef($memory_2);
#line 432
return $memory_3;
#line 432
undef($memory_3);
#line 433
goto label_56;
#line 433
label_25:
#line 434
$memory_4 = "float";
#line 434
$memory_3 = generator_js_priv::imm_call($memory_4);
#line 434
undef($memory_4);
#line 434
$memory_3 = $memory_1 . $memory_3;
#line 434
$memory_4 = "(";
#line 434
$memory_3 = $memory_3 . $memory_4;
#line 434
undef($memory_4);
#line 434
$memory_4 = $memory_0->{'op'};
#line 434
$memory_3 = $memory_3 . $memory_4;
#line 434
undef($memory_4);
#line 435
$memory_5 = "c_rt_lib";
#line 435
$memory_6 = "imm_to_float";
#line 435
$memory_8 = $memory_0->{'src'};
#line 435
$memory_7 = [$memory_8];
#line 435
undef($memory_8);
#line 435
$memory_4 = generator_js_priv::print_int_call_sim($memory_5, $memory_6, $memory_7);
#line 435
undef($memory_7);
#line 435
undef($memory_6);
#line 435
undef($memory_5);
#line 435
$memory_3 = $memory_3 . $memory_4;
#line 435
undef($memory_4);
#line 435
$memory_4 = ");";
#line 435
$memory_3 = $memory_3 . $memory_4;
#line 435
undef($memory_4);
#line 435
undef($memory_0);
#line 435
undef($memory_1);
#line 435
undef($memory_2);
#line 435
return $memory_3;
#line 435
undef($memory_3);
#line 436
goto label_56;
#line 436
label_56:
#line 436
undef($memory_2);
#line 436
undef($memory_1);
#line 436
undef($memory_0);
#line 436
return;
}
