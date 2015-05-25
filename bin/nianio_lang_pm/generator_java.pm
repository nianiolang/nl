use c_rt_lib;
use array;
use boolean_t;
use string_utils;
use nl;
use nlasm;
use ov;
use ptd;
use string;
sub generator_java::generate;
sub generator_java_priv::print_package_name;
sub generator_java_priv::print_imports;
sub generator_java_priv::get_class_name;
sub generator_java_priv::print_class_begin;
sub generator_java_priv::print_class_end;
sub generator_java_priv::get_function_name;
sub generator_java_priv::get_function_declaration;
sub generator_java_priv::escape_string;
sub generator_java_priv::is_singleton_use_function;
sub generator_java_priv::print_function_or_singleton;
sub generator_java_priv::print_function;
sub generator_java_priv::print_command;
sub generator_java_priv::print_arr;
sub generator_java_priv::print_bin_op;
sub generator_java_priv::print_imm_double_operation;
sub generator_java_priv::print_register_as_number;
sub generator_java_priv::print_int_value;
sub generator_java_priv::print_call;
sub generator_java_priv::print_const_arr;
sub generator_java_priv::print_const_hash;
sub generator_java_priv::print_const_ov;
sub generator_java_priv::print_const_value;
sub generator_java_priv::print_goto;
sub generator_java_priv::print_hash;
sub generator_java_priv::print_hash_name;
sub generator_java_priv::print_get_hash_value;
sub generator_java_priv::print_set_hash_value;
sub generator_java_priv::print_ov_mk;
sub generator_java_priv::print_register;
sub generator_java_priv::print_register_getter;
sub generator_java_priv::print_getter;
sub generator_java_priv::print_register_setter;
sub generator_java_priv::print_return;
sub generator_java_priv::print_una_op;

return 1;

sub generator_java::generate($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;$memory_0 = $_[0];
#line 16
$memory_1 = "";
#line 17
$memory_2 = generator_java_priv::print_package_name();
#line 17
$memory_1 = $memory_1 . $memory_2;
#line 17
undef($memory_2);
#line 18
$memory_2 = generator_java_priv::print_imports($memory_0);
#line 18
$memory_1 = $memory_1 . $memory_2;
#line 18
undef($memory_2);
#line 19
$memory_3 = $memory_0->{'module_name'};
#line 19
$memory_2 = generator_java_priv::print_class_begin($memory_3);
#line 19
undef($memory_3);
#line 19
$memory_1 = $memory_1 . $memory_2;
#line 19
undef($memory_2);
#line 20
$memory_2 = $memory_0->{'functions'};
#line 20
$memory_4 = 0;
#line 20
$memory_5 = 1;
#line 20
$memory_6 = c_rt_lib::array_len($memory_2);
#line 20
label_3:
#line 20
$memory_7 = c_rt_lib::to_nl($memory_4 >= $memory_6);
#line 20
if (c_rt_lib::check_true($memory_7)) {goto label_1;}
#line 20
$memory_3 = $memory_2->[$memory_4];
#line 20
$memory_9 = $memory_0->{'module_name'};
#line 20
$memory_8 = generator_java_priv::print_function_or_singleton($memory_3, $memory_9);
#line 20
undef($memory_9);
#line 20
$memory_1 = $memory_1 . $memory_8;
#line 20
undef($memory_8);
#line 20
$memory_4 = $memory_4 + $memory_5;
#line 20
goto label_3;
#line 20
label_1:
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
#line 21
$memory_2 = generator_java_priv::print_class_end();
#line 21
$memory_1 = $memory_1 . $memory_2;
#line 21
undef($memory_2);
#line 22
undef($memory_0);
#line 22
return $memory_1;
#line 22
undef($memory_1);
#line 22
undef($memory_0);
#line 22
return;
}

sub generator_java_priv::__print_package_name() {
my $memory_0;my $memory_1;
#line 26
$memory_0 = "package com.atinea.nianio;";
#line 26
$memory_1 = string::lf();
#line 26
$memory_0 = $memory_0 . $memory_1;
#line 26
undef($memory_1);
#line 26
$memory_1 = string::lf();
#line 26
$memory_0 = $memory_0 . $memory_1;
#line 26
undef($memory_1);
#line 26
return $memory_0;
#line 26
undef($memory_0);
#line 26
return;
}

my $_print_package_name;
sub generator_java_priv::print_package_name() {
	$_print_package_name = generator_java_priv::__print_package_name() unless defined $_print_package_name;
	return $_print_package_name;
}

sub generator_java_priv::print_imports($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;$memory_0 = $_[0];
#line 30
$memory_1 = "";
#line 31
$memory_2 = "import java.util.Map;";
#line 31
$memory_3 = string::lf();
#line 31
$memory_2 = $memory_2 . $memory_3;
#line 31
undef($memory_3);
#line 31
$memory_1 = $memory_1 . $memory_2;
#line 31
undef($memory_2);
#line 32
$memory_2 = "import java.util.HashMap;";
#line 32
$memory_3 = string::lf();
#line 32
$memory_2 = $memory_2 . $memory_3;
#line 32
undef($memory_3);
#line 32
$memory_1 = $memory_1 . $memory_2;
#line 32
undef($memory_2);
#line 33
$memory_2 = $memory_0->{'imports'};
#line 33
$memory_4 = 0;
#line 33
$memory_5 = 1;
#line 33
$memory_6 = c_rt_lib::array_len($memory_2);
#line 33
label_3:
#line 33
$memory_7 = c_rt_lib::to_nl($memory_4 >= $memory_6);
#line 33
if (c_rt_lib::check_true($memory_7)) {goto label_1;}
#line 33
$memory_3 = $memory_2->[$memory_4];
#line 34
$memory_8 = "import com.atinea.nianio.";
#line 34
$memory_9 = generator_java_priv::get_class_name($memory_3);
#line 34
$memory_8 = $memory_8 . $memory_9;
#line 34
undef($memory_9);
#line 34
$memory_9 = ";";
#line 34
$memory_8 = $memory_8 . $memory_9;
#line 34
undef($memory_9);
#line 34
$memory_9 = string::lf();
#line 34
$memory_8 = $memory_8 . $memory_9;
#line 34
undef($memory_9);
#line 34
$memory_1 = $memory_1 . $memory_8;
#line 34
undef($memory_8);
#line 35
$memory_4 = $memory_4 + $memory_5;
#line 35
goto label_3;
#line 35
label_1:
#line 35
undef($memory_2);
#line 35
undef($memory_3);
#line 35
undef($memory_4);
#line 35
undef($memory_5);
#line 35
undef($memory_6);
#line 35
undef($memory_7);
#line 36
undef($memory_0);
#line 36
return $memory_1;
#line 36
undef($memory_1);
#line 36
undef($memory_0);
#line 36
return;
}

sub generator_java_priv::get_class_name($) {
my $memory_0;my $memory_1;$memory_0 = $_[0];
#line 40
$memory_1 = "_NL";
#line 40
$memory_1 = $memory_0 . $memory_1;
#line 40
undef($memory_0);
#line 40
return $memory_1;
#line 40
undef($memory_1);
#line 40
undef($memory_0);
#line 40
return;
}

sub generator_java_priv::print_class_begin($) {
my $memory_0;my $memory_1;my $memory_2;$memory_0 = $_[0];
#line 44
$memory_1 = "public class ";
#line 44
$memory_2 = generator_java_priv::get_class_name($memory_0);
#line 44
$memory_1 = $memory_1 . $memory_2;
#line 44
undef($memory_2);
#line 44
$memory_2 = " {";
#line 44
$memory_1 = $memory_1 . $memory_2;
#line 44
undef($memory_2);
#line 44
$memory_2 = string::lf();
#line 44
$memory_1 = $memory_1 . $memory_2;
#line 44
undef($memory_2);
#line 44
undef($memory_0);
#line 44
return $memory_1;
#line 44
undef($memory_1);
#line 44
undef($memory_0);
#line 44
return;
}

sub generator_java_priv::__print_class_end() {
my $memory_0;my $memory_1;
#line 48
$memory_0 = string::lf();
#line 48
$memory_1 = "}";
#line 48
$memory_0 = $memory_0 . $memory_1;
#line 48
undef($memory_1);
#line 48
return $memory_0;
#line 48
undef($memory_0);
#line 48
return;
}

my $_print_class_end;
sub generator_java_priv::print_class_end() {
	$_print_class_end = generator_java_priv::__print_class_end() unless defined $_print_class_end;
	return $_print_class_end;
}

sub generator_java_priv::get_function_name($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;$memory_0 = $_[0];
#line 52
$memory_1 = "";
#line 53
$memory_2 = $memory_0->{'access'};
#line 53
$memory_3 = c_rt_lib::ov_is($memory_2, 'pub');
#line 53
if (c_rt_lib::check_true($memory_3)) {goto label_2;}
#line 54
$memory_3 = c_rt_lib::ov_is($memory_2, 'priv');
#line 54
if (c_rt_lib::check_true($memory_3)) {goto label_3;}
#line 54
$memory_3 = "NOMATCHALERT";
#line 54
$memory_3 = [$memory_3,$memory_2];
#line 54
die(dfile::ssave($memory_3));
#line 53
label_2:
#line 54
goto label_1;
#line 54
label_3:
#line 55
$memory_4 = "_priv";
#line 55
$memory_1 = $memory_4;
#line 55
undef($memory_4);
#line 56
goto label_1;
#line 56
label_1:
#line 56
undef($memory_2);
#line 56
undef($memory_3);
#line 57
$memory_2 = $memory_0->{'name'};
#line 57
$memory_2 = $memory_2 . $memory_1;
#line 57
$memory_3 = "_nl";
#line 57
$memory_2 = $memory_2 . $memory_3;
#line 57
undef($memory_3);
#line 57
undef($memory_0);
#line 57
undef($memory_1);
#line 57
return $memory_2;
#line 57
undef($memory_2);
#line 57
undef($memory_1);
#line 57
undef($memory_0);
#line 57
return;
}

sub generator_java_priv::get_function_declaration($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;$memory_0 = $_[0];
#line 61
$memory_1 = "";
#line 62
$memory_2 = $memory_0->{'access'};
#line 62
$memory_3 = c_rt_lib::ov_is($memory_2, 'pub');
#line 62
if (c_rt_lib::check_true($memory_3)) {goto label_2;}
#line 64
$memory_3 = c_rt_lib::ov_is($memory_2, 'priv');
#line 64
if (c_rt_lib::check_true($memory_3)) {goto label_3;}
#line 64
$memory_3 = "NOMATCHALERT";
#line 64
$memory_3 = [$memory_3,$memory_2];
#line 64
die(dfile::ssave($memory_3));
#line 62
label_2:
#line 63
$memory_4 = "public";
#line 63
$memory_1 = $memory_4;
#line 63
undef($memory_4);
#line 64
goto label_1;
#line 64
label_3:
#line 65
$memory_4 = "private";
#line 65
$memory_1 = $memory_4;
#line 65
undef($memory_4);
#line 66
goto label_1;
#line 66
label_1:
#line 66
undef($memory_2);
#line 66
undef($memory_3);
#line 67
$memory_2 = " static Imm ";
#line 67
$memory_2 = $memory_1 . $memory_2;
#line 67
$memory_3 = generator_java_priv::get_function_name($memory_0);
#line 67
$memory_2 = $memory_2 . $memory_3;
#line 67
undef($memory_3);
#line 67
undef($memory_0);
#line 67
undef($memory_1);
#line 67
return $memory_2;
#line 67
undef($memory_2);
#line 67
undef($memory_1);
#line 67
undef($memory_0);
#line 67
return;
}

sub generator_java_priv::escape_string($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;$memory_0 = $_[0];
#line 71
$memory_2 = "\\";
#line 71
$memory_3 = "\\\\";
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
$memory_2 = "\"";
#line 72
$memory_3 = "\\\"";
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
#line 73
$memory_3 = 13;
#line 73
$memory_2 = string::chr($memory_3);
#line 73
undef($memory_3);
#line 73
$memory_3 = string::lf();
#line 73
$memory_2 = $memory_2 . $memory_3;
#line 73
undef($memory_3);
#line 73
$memory_3 = "\\r\\n";
#line 73
$memory_1 = string::replace($memory_0, $memory_2, $memory_3);
#line 73
undef($memory_3);
#line 73
undef($memory_2);
#line 73
$memory_0 = $memory_1;
#line 73
undef($memory_1);
#line 74
$memory_2 = string::lf();
#line 74
$memory_3 = "\\n";
#line 74
$memory_1 = string::replace($memory_0, $memory_2, $memory_3);
#line 74
undef($memory_3);
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

sub generator_java_priv::is_singleton_use_function($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;my $memory_13;$memory_0 = $_[0];
#line 77
$memory_2 = $memory_0->{'args_type'};
#line 77
$memory_1 = array::len($memory_2);
#line 77
undef($memory_2);
#line 77
$memory_2 = 0;
#line 77
$memory_1 = c_rt_lib::to_nl($memory_1 > $memory_2);
#line 77
undef($memory_2);
#line 77
$memory_1 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_1));
#line 77
if (c_rt_lib::check_true($memory_1)) {goto label_2;}
#line 77
$memory_2 = c_rt_lib::to_nl(0);
#line 77
undef($memory_0);
#line 77
undef($memory_1);
#line 77
return $memory_2;
#line 77
undef($memory_2);
#line 77
goto label_2;
#line 77
label_2:
#line 77
undef($memory_1);
#line 78
$memory_1 = $memory_0->{'annotation'};
#line 78
$memory_1 = c_rt_lib::ov_is($memory_1, 'math');
#line 78
$memory_1 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_1));
#line 78
if (c_rt_lib::check_true($memory_1)) {goto label_4;}
#line 78
$memory_2 = c_rt_lib::to_nl(1);
#line 78
undef($memory_0);
#line 78
undef($memory_1);
#line 78
return $memory_2;
#line 78
undef($memory_2);
#line 78
goto label_4;
#line 78
label_4:
#line 78
undef($memory_1);
#line 79
$memory_1 = c_rt_lib::to_nl(0);
#line 81
$memory_3 = $memory_0->{'commands'};
#line 81
$memory_5 = 0;
#line 81
$memory_6 = 1;
#line 81
$memory_7 = c_rt_lib::array_len($memory_3);
#line 81
label_7:
#line 81
$memory_8 = c_rt_lib::to_nl($memory_5 >= $memory_7);
#line 81
if (c_rt_lib::check_true($memory_8)) {goto label_5;}
#line 81
$memory_4 = $memory_3->[$memory_5];
#line 82
$memory_9 = $memory_4->{'cmd'};
#line 83
$memory_10 = $memory_9;
#line 83
$memory_10 = c_rt_lib::ov_is($memory_10, 'call');
#line 83
$memory_10 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_10));
#line 83
if (c_rt_lib::check_true($memory_10)) {goto label_9;}
#line 84
$memory_11 = $memory_9;
#line 84
$memory_11 = c_rt_lib::ov_as($memory_11, 'call');
#line 85
$memory_12 = $memory_11->{'fun_name'};
#line 85
$memory_13 = "sigleton_do_not_use_without_approval";
#line 85
$memory_12 = c_rt_lib::to_nl($memory_12 eq $memory_13);
#line 85
undef($memory_13);
#line 85
$memory_12 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_12));
#line 85
$memory_12 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_12));
#line 85
if (c_rt_lib::check_true($memory_12)) {goto label_11;}
#line 85
undef($memory_9);
#line 85
undef($memory_10);
#line 85
undef($memory_11);
#line 85
undef($memory_12);
#line 85
goto label_6;
#line 85
goto label_11;
#line 85
label_11:
#line 85
undef($memory_12);
#line 86
$memory_12 = $memory_11->{'mod'};
#line 86
$memory_13 = "singleton";
#line 86
$memory_12 = c_rt_lib::to_nl($memory_12 eq $memory_13);
#line 86
undef($memory_13);
#line 86
$memory_12 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_12));
#line 86
$memory_12 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_12));
#line 86
if (c_rt_lib::check_true($memory_12)) {goto label_13;}
#line 86
undef($memory_9);
#line 86
undef($memory_10);
#line 86
undef($memory_11);
#line 86
undef($memory_12);
#line 86
goto label_6;
#line 86
goto label_13;
#line 86
label_13:
#line 86
undef($memory_12);
#line 87
$memory_12 = c_rt_lib::to_nl(1);
#line 87
$memory_1 = $memory_12;
#line 87
undef($memory_12);
#line 88
$memory_12 = $memory_11->{'dest'};
#line 88
$memory_2 = $memory_12;
#line 88
undef($memory_12);
#line 88
undef($memory_11);
#line 89
goto label_8;
#line 89
label_9:
#line 89
$memory_10 = $memory_9;
#line 89
$memory_10 = c_rt_lib::ov_is($memory_10, 'return');
#line 89
$memory_10 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_10));
#line 89
if (c_rt_lib::check_true($memory_10)) {goto label_14;}
#line 90
$memory_11 = $memory_1;
#line 90
$memory_11 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_11));
#line 90
$memory_11 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_11));
#line 90
if (c_rt_lib::check_true($memory_11)) {goto label_16;}
#line 90
$memory_12 = c_rt_lib::to_nl(0);
#line 90
undef($memory_0);
#line 90
undef($memory_1);
#line 90
undef($memory_2);
#line 90
undef($memory_3);
#line 90
undef($memory_4);
#line 90
undef($memory_5);
#line 90
undef($memory_6);
#line 90
undef($memory_7);
#line 90
undef($memory_8);
#line 90
undef($memory_9);
#line 90
undef($memory_10);
#line 90
undef($memory_11);
#line 90
return $memory_12;
#line 90
undef($memory_12);
#line 90
goto label_16;
#line 90
label_16:
#line 90
undef($memory_11);
#line 91
$memory_11 = $memory_9;
#line 91
$memory_11 = c_rt_lib::ov_as($memory_11, 'return');
#line 92
$memory_12 = $memory_11;
#line 92
$memory_12 = c_rt_lib::ov_is($memory_12, 'val');
#line 92
$memory_12 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_12));
#line 92
$memory_12 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_12));
#line 92
if (c_rt_lib::check_true($memory_12)) {goto label_18;}
#line 92
$memory_13 = c_rt_lib::to_nl(0);
#line 92
undef($memory_0);
#line 92
undef($memory_1);
#line 92
undef($memory_2);
#line 92
undef($memory_3);
#line 92
undef($memory_4);
#line 92
undef($memory_5);
#line 92
undef($memory_6);
#line 92
undef($memory_7);
#line 92
undef($memory_8);
#line 92
undef($memory_9);
#line 92
undef($memory_10);
#line 92
undef($memory_11);
#line 92
undef($memory_12);
#line 92
return $memory_13;
#line 92
undef($memory_13);
#line 92
goto label_18;
#line 92
label_18:
#line 92
undef($memory_12);
#line 93
$memory_12 = $memory_11;
#line 93
$memory_12 = c_rt_lib::ov_as($memory_12, 'val');
#line 93
$memory_12 = c_rt_lib::to_nl($memory_12 eq $memory_2);
#line 93
undef($memory_0);
#line 93
undef($memory_1);
#line 93
undef($memory_2);
#line 93
undef($memory_3);
#line 93
undef($memory_4);
#line 93
undef($memory_5);
#line 93
undef($memory_6);
#line 93
undef($memory_7);
#line 93
undef($memory_8);
#line 93
undef($memory_9);
#line 93
undef($memory_10);
#line 93
undef($memory_11);
#line 93
return $memory_12;
#line 93
undef($memory_12);
#line 93
undef($memory_11);
#line 94
goto label_8;
#line 94
label_14:
#line 94
$memory_10 = $memory_9;
#line 94
$memory_10 = c_rt_lib::ov_is($memory_10, 'prt_lbl');
#line 94
$memory_10 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_10));
#line 94
if (c_rt_lib::check_true($memory_10)) {goto label_19;}
#line 95
goto label_8;
#line 95
label_19:
#line 95
$memory_10 = $memory_9;
#line 95
$memory_10 = c_rt_lib::ov_is($memory_10, 'clear');
#line 95
$memory_10 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_10));
#line 95
if (c_rt_lib::check_true($memory_10)) {goto label_20;}
#line 96
goto label_8;
#line 96
label_20:
#line 97
$memory_11 = $memory_1;
#line 97
$memory_11 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_11));
#line 97
if (c_rt_lib::check_true($memory_11)) {goto label_22;}
#line 97
$memory_12 = c_rt_lib::to_nl(0);
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
return $memory_12;
#line 97
undef($memory_12);
#line 97
goto label_22;
#line 97
label_22:
#line 97
undef($memory_11);
#line 98
goto label_8;
#line 98
label_8:
#line 98
undef($memory_10);
#line 98
undef($memory_9);
#line 98
label_6:
#line 99
$memory_5 = $memory_5 + $memory_6;
#line 99
goto label_7;
#line 99
label_5:
#line 99
undef($memory_3);
#line 99
undef($memory_4);
#line 99
undef($memory_5);
#line 99
undef($memory_6);
#line 99
undef($memory_7);
#line 99
undef($memory_8);
#line 100
$memory_3 = c_rt_lib::to_nl(0);
#line 100
undef($memory_0);
#line 100
undef($memory_1);
#line 100
undef($memory_2);
#line 100
return $memory_3;
#line 100
undef($memory_3);
#line 100
undef($memory_1);
#line 100
undef($memory_2);
#line 100
undef($memory_0);
#line 100
return;
}

sub generator_java_priv::print_function_or_singleton($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;$memory_0 = $_[0];$memory_1 = $_[1];
#line 105
$memory_2 = generator_java_priv::is_singleton_use_function($memory_0);
#line 105
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 105
if (c_rt_lib::check_true($memory_2)) {goto label_2;}
#line 106
$memory_3 = $memory_0;
#line 107
$memory_4 = "SINGLETON_";
#line 107
$memory_5 = $memory_0->{'name'};
#line 107
$memory_4 = $memory_4 . $memory_5;
#line 107
undef($memory_5);
#line 107
$memory_5 = $memory_4;
#line 107
 if (c_rt_lib::get_hashcount($memory_3) > 1) {$memory_3 = {%{$memory_3}};}$memory_3->{'name'} = $memory_5;
#line 107
undef($memory_4);
#line 107
undef($memory_5);
#line 108
$memory_4 = generator_java_priv::get_function_name($memory_3);
#line 109
$memory_5 = "value__singleton__";
#line 109
$memory_5 = $memory_5 . $memory_4;
#line 111
$memory_6 = generator_java_priv::print_function($memory_3, $memory_1);
#line 113
$memory_7 = "private static Imm ";
#line 113
$memory_7 = $memory_7 . $memory_5;
#line 113
$memory_8 = " = null;";
#line 113
$memory_7 = $memory_7 . $memory_8;
#line 113
undef($memory_8);
#line 113
$memory_8 = string::lf();
#line 113
$memory_7 = $memory_7 . $memory_8;
#line 113
undef($memory_8);
#line 113
$memory_8 = generator_java_priv::get_function_declaration($memory_0);
#line 113
$memory_7 = $memory_7 . $memory_8;
#line 113
undef($memory_8);
#line 113
$memory_8 = "() throws Exception {
	if (";
#line 113
$memory_7 = $memory_7 . $memory_8;
#line 113
undef($memory_8);
#line 113
$memory_7 = $memory_7 . $memory_5;
#line 113
$memory_8 = " == null) {
		";
#line 113
$memory_7 = $memory_7 . $memory_8;
#line 113
undef($memory_8);
#line 113
$memory_7 = $memory_7 . $memory_5;
#line 113
$memory_8 = " = ";
#line 113
$memory_7 = $memory_7 . $memory_8;
#line 113
undef($memory_8);
#line 113
$memory_7 = $memory_7 . $memory_4;
#line 113
$memory_8 = "();
	}
	return ";
#line 113
$memory_7 = $memory_7 . $memory_8;
#line 113
undef($memory_8);
#line 113
$memory_7 = $memory_7 . $memory_5;
#line 113
$memory_8 = ";
}";
#line 113
$memory_7 = $memory_7 . $memory_8;
#line 113
undef($memory_8);
#line 113
$memory_6 = $memory_6 . $memory_7;
#line 113
undef($memory_7);
#line 120
undef($memory_0);
#line 120
undef($memory_1);
#line 120
undef($memory_2);
#line 120
undef($memory_3);
#line 120
undef($memory_4);
#line 120
undef($memory_5);
#line 120
return $memory_6;
#line 120
undef($memory_3);
#line 120
undef($memory_4);
#line 120
undef($memory_5);
#line 120
undef($memory_6);
#line 121
goto label_1;
#line 121
label_2:
#line 122
$memory_3 = generator_java_priv::print_function($memory_0, $memory_1);
#line 122
undef($memory_0);
#line 122
undef($memory_1);
#line 122
undef($memory_2);
#line 122
return $memory_3;
#line 122
undef($memory_3);
#line 123
goto label_1;
#line 123
label_1:
#line 123
undef($memory_2);
#line 123
undef($memory_0);
#line 123
undef($memory_1);
#line 123
return;
}

sub generator_java_priv::print_function($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;$memory_0 = $_[0];$memory_1 = $_[1];
#line 127
$memory_2 = string::lf();
#line 127
$memory_3 = generator_java_priv::get_function_declaration($memory_0);
#line 127
$memory_2 = $memory_2 . $memory_3;
#line 127
undef($memory_3);
#line 127
$memory_3 = "(";
#line 127
$memory_2 = $memory_2 . $memory_3;
#line 127
undef($memory_3);
#line 128
$memory_4 = $memory_0->{'args_type'};
#line 128
$memory_3 = array::len($memory_4);
#line 128
undef($memory_4);
#line 128
$memory_4 = 0;
#line 128
$memory_5 = 1;
#line 128
label_3:
#line 128
$memory_6 = c_rt_lib::to_nl($memory_4 >= $memory_3);
#line 128
if (c_rt_lib::check_true($memory_6)) {goto label_1;}
#line 129
$memory_7 = 0;
#line 129
$memory_7 = c_rt_lib::to_nl($memory_4 == $memory_7);
#line 129
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 129
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 129
if (c_rt_lib::check_true($memory_7)) {goto label_5;}
#line 129
$memory_8 = ", ";
#line 129
$memory_2 = $memory_2 . $memory_8;
#line 129
undef($memory_8);
#line 129
goto label_5;
#line 129
label_5:
#line 129
undef($memory_7);
#line 130
$memory_7 = "ImmRef ___arg__";
#line 130
$memory_7 = $memory_7 . $memory_4;
#line 130
$memory_2 = $memory_2 . $memory_7;
#line 130
undef($memory_7);
#line 131
$memory_4 = $memory_4 + $memory_5;
#line 131
goto label_3;
#line 131
label_1:
#line 131
undef($memory_3);
#line 131
undef($memory_4);
#line 131
undef($memory_5);
#line 131
undef($memory_6);
#line 132
$memory_3 = ") throws Exception {";
#line 132
$memory_4 = string::lf();
#line 132
$memory_3 = $memory_3 . $memory_4;
#line 132
undef($memory_4);
#line 132
$memory_2 = $memory_2 . $memory_3;
#line 132
undef($memory_3);
#line 133
$memory_4 = $memory_0->{'args_type'};
#line 133
$memory_3 = array::len($memory_4);
#line 133
undef($memory_4);
#line 133
$memory_4 = 0;
#line 133
$memory_5 = 1;
#line 133
label_8:
#line 133
$memory_6 = c_rt_lib::to_nl($memory_4 >= $memory_3);
#line 133
if (c_rt_lib::check_true($memory_6)) {goto label_6;}
#line 134
$memory_7 = $memory_0->{'args_type'};
#line 134
$memory_7 = $memory_7->[$memory_4];
#line 134
$memory_8 = c_rt_lib::ov_is($memory_7, 'val');
#line 134
if (c_rt_lib::check_true($memory_8)) {goto label_10;}
#line 136
$memory_8 = c_rt_lib::ov_is($memory_7, 'ref');
#line 136
if (c_rt_lib::check_true($memory_8)) {goto label_11;}
#line 136
$memory_8 = "NOMATCHALERT";
#line 136
$memory_8 = [$memory_8,$memory_7];
#line 136
die(dfile::ssave($memory_8));
#line 134
label_10:
#line 135
$memory_9 = "ImmRef ___nl__";
#line 135
$memory_9 = $memory_9 . $memory_4;
#line 135
$memory_10 = " = new ImmRef(___arg__";
#line 135
$memory_9 = $memory_9 . $memory_10;
#line 135
undef($memory_10);
#line 135
$memory_9 = $memory_9 . $memory_4;
#line 135
$memory_10 = generator_java_priv::print_getter();
#line 135
$memory_9 = $memory_9 . $memory_10;
#line 135
undef($memory_10);
#line 135
$memory_10 = ");";
#line 135
$memory_9 = $memory_9 . $memory_10;
#line 135
undef($memory_10);
#line 135
$memory_2 = $memory_2 . $memory_9;
#line 135
undef($memory_9);
#line 136
goto label_9;
#line 136
label_11:
#line 137
$memory_9 = "ImmRef ___nl__";
#line 137
$memory_9 = $memory_9 . $memory_4;
#line 137
$memory_10 = " = ___arg__";
#line 137
$memory_9 = $memory_9 . $memory_10;
#line 137
undef($memory_10);
#line 137
$memory_9 = $memory_9 . $memory_4;
#line 137
$memory_10 = ";";
#line 137
$memory_9 = $memory_9 . $memory_10;
#line 137
undef($memory_10);
#line 137
$memory_2 = $memory_2 . $memory_9;
#line 137
undef($memory_9);
#line 138
goto label_9;
#line 138
label_9:
#line 138
undef($memory_7);
#line 138
undef($memory_8);
#line 139
$memory_4 = $memory_4 + $memory_5;
#line 139
goto label_8;
#line 139
label_6:
#line 139
undef($memory_3);
#line 139
undef($memory_4);
#line 139
undef($memory_5);
#line 139
undef($memory_6);
#line 140
$memory_3 = string::lf();
#line 140
$memory_2 = $memory_2 . $memory_3;
#line 140
undef($memory_3);
#line 141
$memory_4 = $memory_0->{'args_type'};
#line 141
$memory_3 = array::len($memory_4);
#line 141
undef($memory_4);
#line 141
label_13:
#line 141
$memory_4 = $memory_0->{'reg_size'};
#line 141
$memory_4 = c_rt_lib::to_nl($memory_3 < $memory_4);
#line 141
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 141
if (c_rt_lib::check_true($memory_4)) {goto label_12;}
#line 142
$memory_5 = "ImmRef ___nl__";
#line 142
$memory_5 = $memory_5 . $memory_3;
#line 142
$memory_6 = " = new ImmRef(null);";
#line 142
$memory_5 = $memory_5 . $memory_6;
#line 142
undef($memory_6);
#line 142
$memory_6 = string::lf();
#line 142
$memory_5 = $memory_5 . $memory_6;
#line 142
undef($memory_6);
#line 142
$memory_2 = $memory_2 . $memory_5;
#line 142
undef($memory_5);
#line 142
$memory_5 = 1;
#line 142
$memory_3 = $memory_3 + $memory_5;
#line 142
undef($memory_5);
#line 143
goto label_13;
#line 143
label_12:
#line 143
undef($memory_3);
#line 143
undef($memory_4);
#line 144
$memory_3 = "Map<ImmString, Imm> ";
#line 144
$memory_4 = generator_java_priv::print_hash_name();
#line 144
$memory_3 = $memory_3 . $memory_4;
#line 144
undef($memory_4);
#line 144
$memory_4 = ";";
#line 144
$memory_3 = $memory_3 . $memory_4;
#line 144
undef($memory_4);
#line 144
$memory_4 = string::lf();
#line 144
$memory_3 = $memory_3 . $memory_4;
#line 144
undef($memory_4);
#line 144
$memory_2 = $memory_2 . $memory_3;
#line 144
undef($memory_3);
#line 145
$memory_3 = "String label = \"\"; while (true) { switch (label) { default: ";
#line 145
$memory_4 = string::lf();
#line 145
$memory_3 = $memory_3 . $memory_4;
#line 145
undef($memory_4);
#line 145
$memory_2 = $memory_2 . $memory_3;
#line 145
undef($memory_3);
#line 146
$memory_3 = $memory_0->{'commands'};
#line 146
$memory_5 = 0;
#line 146
$memory_6 = 1;
#line 146
$memory_7 = c_rt_lib::array_len($memory_3);
#line 146
label_17:
#line 146
$memory_8 = c_rt_lib::to_nl($memory_5 >= $memory_7);
#line 146
if (c_rt_lib::check_true($memory_8)) {goto label_15;}
#line 146
$memory_4 = $memory_3->[$memory_5];
#line 146
$memory_9 = generator_java_priv::print_command($memory_1, $memory_4);
#line 146
$memory_2 = $memory_2 . $memory_9;
#line 146
undef($memory_9);
#line 146
$memory_5 = $memory_5 + $memory_6;
#line 146
goto label_17;
#line 146
label_15:
#line 146
undef($memory_3);
#line 146
undef($memory_4);
#line 146
undef($memory_5);
#line 146
undef($memory_6);
#line 146
undef($memory_7);
#line 146
undef($memory_8);
#line 147
$memory_3 = "}}}";
#line 147
$memory_3 = $memory_2 . $memory_3;
#line 147
$memory_4 = string::lf();
#line 147
$memory_3 = $memory_3 . $memory_4;
#line 147
undef($memory_4);
#line 147
undef($memory_0);
#line 147
undef($memory_1);
#line 147
undef($memory_2);
#line 147
return $memory_3;
#line 147
undef($memory_3);
#line 147
undef($memory_2);
#line 147
undef($memory_0);
#line 147
undef($memory_1);
#line 147
return;
}

sub generator_java_priv::print_command($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;$memory_0 = $_[0];$memory_1 = $_[1];
#line 152
$memory_3 = $memory_1->{'cmd'};
#line 152
$memory_4 = c_rt_lib::ov_is($memory_3, 'arr_decl');
#line 152
if (c_rt_lib::check_true($memory_4)) {goto label_2;}
#line 154
$memory_4 = c_rt_lib::ov_is($memory_3, 'hash_decl');
#line 154
if (c_rt_lib::check_true($memory_4)) {goto label_3;}
#line 157
$memory_4 = c_rt_lib::ov_is($memory_3, 'call');
#line 157
if (c_rt_lib::check_true($memory_4)) {goto label_4;}
#line 159
$memory_4 = c_rt_lib::ov_is($memory_3, 'func');
#line 159
if (c_rt_lib::check_true($memory_4)) {goto label_5;}
#line 161
$memory_4 = c_rt_lib::ov_is($memory_3, 'una_op');
#line 161
if (c_rt_lib::check_true($memory_4)) {goto label_6;}
#line 163
$memory_4 = c_rt_lib::ov_is($memory_3, 'bin_op');
#line 163
if (c_rt_lib::check_true($memory_4)) {goto label_7;}
#line 165
$memory_4 = c_rt_lib::ov_is($memory_3, 'ov_is');
#line 165
if (c_rt_lib::check_true($memory_4)) {goto label_8;}
#line 167
$memory_4 = c_rt_lib::ov_is($memory_3, 'ov_as');
#line 167
if (c_rt_lib::check_true($memory_4)) {goto label_9;}
#line 169
$memory_4 = c_rt_lib::ov_is($memory_3, 'return');
#line 169
if (c_rt_lib::check_true($memory_4)) {goto label_10;}
#line 171
$memory_4 = c_rt_lib::ov_is($memory_3, 'die');
#line 171
if (c_rt_lib::check_true($memory_4)) {goto label_11;}
#line 173
$memory_4 = c_rt_lib::ov_is($memory_3, 'move');
#line 173
if (c_rt_lib::check_true($memory_4)) {goto label_12;}
#line 175
$memory_4 = c_rt_lib::ov_is($memory_3, 'load_const');
#line 175
if (c_rt_lib::check_true($memory_4)) {goto label_13;}
#line 177
$memory_4 = c_rt_lib::ov_is($memory_3, 'get_frm_idx');
#line 177
if (c_rt_lib::check_true($memory_4)) {goto label_14;}
#line 181
$memory_4 = c_rt_lib::ov_is($memory_3, 'set_at_idx');
#line 181
if (c_rt_lib::check_true($memory_4)) {goto label_15;}
#line 185
$memory_4 = c_rt_lib::ov_is($memory_3, 'get_val');
#line 185
if (c_rt_lib::check_true($memory_4)) {goto label_16;}
#line 187
$memory_4 = c_rt_lib::ov_is($memory_3, 'set_val');
#line 187
if (c_rt_lib::check_true($memory_4)) {goto label_17;}
#line 190
$memory_4 = c_rt_lib::ov_is($memory_3, 'ov_mk');
#line 190
if (c_rt_lib::check_true($memory_4)) {goto label_18;}
#line 192
$memory_4 = c_rt_lib::ov_is($memory_3, 'prt_lbl');
#line 192
if (c_rt_lib::check_true($memory_4)) {goto label_19;}
#line 194
$memory_4 = c_rt_lib::ov_is($memory_3, 'if_goto');
#line 194
if (c_rt_lib::check_true($memory_4)) {goto label_20;}
#line 196
$memory_4 = c_rt_lib::ov_is($memory_3, 'goto');
#line 196
if (c_rt_lib::check_true($memory_4)) {goto label_21;}
#line 198
$memory_4 = c_rt_lib::ov_is($memory_3, 'clear');
#line 198
if (c_rt_lib::check_true($memory_4)) {goto label_22;}
#line 198
$memory_4 = "NOMATCHALERT";
#line 198
$memory_4 = [$memory_4,$memory_3];
#line 198
die(dfile::ssave($memory_4));
#line 152
label_2:
#line 152
$memory_5 = c_rt_lib::ov_as($memory_3, 'arr_decl');
#line 153
$memory_7 = $memory_5->{'dest'};
#line 153
$memory_9 = $memory_5->{'src'};
#line 153
$memory_8 = generator_java_priv::print_arr($memory_9);
#line 153
undef($memory_9);
#line 153
$memory_6 = generator_java_priv::print_register_setter($memory_7, $memory_8);
#line 153
undef($memory_8);
#line 153
undef($memory_7);
#line 153
$memory_7 = ";";
#line 153
$memory_6 = $memory_6 . $memory_7;
#line 153
undef($memory_7);
#line 153
$memory_2 = $memory_6;
#line 153
undef($memory_6);
#line 153
undef($memory_5);
#line 154
goto label_1;
#line 154
label_3:
#line 154
$memory_5 = c_rt_lib::ov_as($memory_3, 'hash_decl');
#line 155
$memory_6 = generator_java_priv::print_hash($memory_5);
#line 155
$memory_2 = $memory_6;
#line 155
undef($memory_6);
#line 156
$memory_7 = $memory_5->{'dest'};
#line 156
$memory_8 = "new ImmMap(";
#line 156
$memory_9 = generator_java_priv::print_hash_name();
#line 156
$memory_8 = $memory_8 . $memory_9;
#line 156
undef($memory_9);
#line 156
$memory_9 = ")";
#line 156
$memory_8 = $memory_8 . $memory_9;
#line 156
undef($memory_9);
#line 156
$memory_6 = generator_java_priv::print_register_setter($memory_7, $memory_8);
#line 156
undef($memory_8);
#line 156
undef($memory_7);
#line 156
$memory_7 = ";";
#line 156
$memory_6 = $memory_6 . $memory_7;
#line 156
undef($memory_7);
#line 156
$memory_2 = $memory_2 . $memory_6;
#line 156
undef($memory_6);
#line 156
undef($memory_5);
#line 157
goto label_1;
#line 157
label_4:
#line 157
$memory_5 = c_rt_lib::ov_as($memory_3, 'call');
#line 158
$memory_7 = $memory_5->{'dest'};
#line 158
$memory_9 = $memory_5->{'mod'};
#line 158
$memory_10 = $memory_5->{'fun_name'};
#line 158
$memory_11 = $memory_5->{'args'};
#line 158
$memory_8 = generator_java_priv::print_call($memory_0, $memory_9, $memory_10, $memory_11);
#line 158
undef($memory_11);
#line 158
undef($memory_10);
#line 158
undef($memory_9);
#line 158
$memory_6 = generator_java_priv::print_register_setter($memory_7, $memory_8);
#line 158
undef($memory_8);
#line 158
undef($memory_7);
#line 158
$memory_7 = ";";
#line 158
$memory_6 = $memory_6 . $memory_7;
#line 158
undef($memory_7);
#line 158
$memory_2 = $memory_6;
#line 158
undef($memory_6);
#line 158
undef($memory_5);
#line 159
goto label_1;
#line 159
label_5:
#line 159
$memory_5 = c_rt_lib::ov_as($memory_3, 'func');
#line 160
$memory_7 = $memory_5->{'dest'};
#line 160
$memory_10 = $memory_5->{'module'};
#line 160
$memory_9 = generator_java_priv::get_class_name($memory_10);
#line 160
undef($memory_10);
#line 160
$memory_10 = $memory_5->{'name'};
#line 160
$memory_11 = "_nl";
#line 160
$memory_10 = $memory_10 . $memory_11;
#line 160
undef($memory_11);
#line 160
$memory_8 = {module => $memory_9,name => $memory_10,};
#line 160
undef($memory_9);
#line 160
undef($memory_10);
#line 160
$memory_6 = generator_java_priv::print_const_hash($memory_7, $memory_8);
#line 160
undef($memory_8);
#line 160
undef($memory_7);
#line 160
$memory_7 = ";";
#line 160
$memory_6 = $memory_6 . $memory_7;
#line 160
undef($memory_7);
#line 160
$memory_2 = $memory_6;
#line 160
undef($memory_6);
#line 160
undef($memory_5);
#line 161
goto label_1;
#line 161
label_6:
#line 161
$memory_5 = c_rt_lib::ov_as($memory_3, 'una_op');
#line 162
$memory_6 = generator_java_priv::print_una_op($memory_5);
#line 162
$memory_2 = $memory_6;
#line 162
undef($memory_6);
#line 162
undef($memory_5);
#line 163
goto label_1;
#line 163
label_7:
#line 163
$memory_5 = c_rt_lib::ov_as($memory_3, 'bin_op');
#line 164
$memory_6 = generator_java_priv::print_bin_op($memory_5);
#line 164
$memory_2 = $memory_6;
#line 164
undef($memory_6);
#line 164
undef($memory_5);
#line 165
goto label_1;
#line 165
label_8:
#line 165
$memory_5 = c_rt_lib::ov_as($memory_3, 'ov_is');
#line 166
$memory_7 = $memory_5->{'dest'};
#line 166
$memory_8 = "c_rt_lib_NL.ov_is_nl(";
#line 166
$memory_10 = $memory_5->{'src'};
#line 166
$memory_9 = generator_java_priv::print_register($memory_10);
#line 166
undef($memory_10);
#line 166
$memory_8 = $memory_8 . $memory_9;
#line 166
undef($memory_9);
#line 166
$memory_9 = ", new ImmRef(new ImmString(\"";
#line 166
$memory_8 = $memory_8 . $memory_9;
#line 166
undef($memory_9);
#line 166
$memory_10 = $memory_5->{'type'};
#line 166
$memory_9 = generator_java_priv::escape_string($memory_10);
#line 166
undef($memory_10);
#line 166
$memory_8 = $memory_8 . $memory_9;
#line 166
undef($memory_9);
#line 166
$memory_9 = "\")))";
#line 166
$memory_8 = $memory_8 . $memory_9;
#line 166
undef($memory_9);
#line 166
$memory_6 = generator_java_priv::print_register_setter($memory_7, $memory_8);
#line 166
undef($memory_8);
#line 166
undef($memory_7);
#line 166
$memory_7 = ";";
#line 166
$memory_6 = $memory_6 . $memory_7;
#line 166
undef($memory_7);
#line 166
$memory_2 = $memory_6;
#line 166
undef($memory_6);
#line 166
undef($memory_5);
#line 167
goto label_1;
#line 167
label_9:
#line 167
$memory_5 = c_rt_lib::ov_as($memory_3, 'ov_as');
#line 168
$memory_7 = $memory_5->{'dest'};
#line 168
$memory_8 = "c_rt_lib_NL.ov_as_nl(";
#line 168
$memory_10 = $memory_5->{'src'};
#line 168
$memory_9 = generator_java_priv::print_register($memory_10);
#line 168
undef($memory_10);
#line 168
$memory_8 = $memory_8 . $memory_9;
#line 168
undef($memory_9);
#line 168
$memory_9 = ", new ImmRef(new ImmString(\"";
#line 168
$memory_8 = $memory_8 . $memory_9;
#line 168
undef($memory_9);
#line 168
$memory_10 = $memory_5->{'type'};
#line 168
$memory_9 = generator_java_priv::escape_string($memory_10);
#line 168
undef($memory_10);
#line 168
$memory_8 = $memory_8 . $memory_9;
#line 168
undef($memory_9);
#line 168
$memory_9 = "\")))";
#line 168
$memory_8 = $memory_8 . $memory_9;
#line 168
undef($memory_9);
#line 168
$memory_6 = generator_java_priv::print_register_setter($memory_7, $memory_8);
#line 168
undef($memory_8);
#line 168
undef($memory_7);
#line 168
$memory_7 = ";";
#line 168
$memory_6 = $memory_6 . $memory_7;
#line 168
undef($memory_7);
#line 168
$memory_2 = $memory_6;
#line 168
undef($memory_6);
#line 168
undef($memory_5);
#line 169
goto label_1;
#line 169
label_10:
#line 169
$memory_5 = c_rt_lib::ov_as($memory_3, 'return');
#line 170
$memory_6 = generator_java_priv::print_return($memory_5);
#line 170
$memory_2 = $memory_6;
#line 170
undef($memory_6);
#line 170
undef($memory_5);
#line 171
goto label_1;
#line 171
label_11:
#line 171
$memory_5 = c_rt_lib::ov_as($memory_3, 'die');
#line 172
$memory_6 = "c_rt_lib_NL.die_nl();";
#line 172
$memory_2 = $memory_6;
#line 172
undef($memory_6);
#line 172
undef($memory_5);
#line 173
goto label_1;
#line 173
label_12:
#line 173
$memory_5 = c_rt_lib::ov_as($memory_3, 'move');
#line 174
$memory_7 = $memory_5->{'dest'};
#line 174
$memory_9 = $memory_5->{'src'};
#line 174
$memory_8 = generator_java_priv::print_register_getter($memory_9);
#line 174
undef($memory_9);
#line 174
$memory_6 = generator_java_priv::print_register_setter($memory_7, $memory_8);
#line 174
undef($memory_8);
#line 174
undef($memory_7);
#line 174
$memory_7 = ";";
#line 174
$memory_6 = $memory_6 . $memory_7;
#line 174
undef($memory_7);
#line 174
$memory_2 = $memory_6;
#line 174
undef($memory_6);
#line 174
undef($memory_5);
#line 175
goto label_1;
#line 175
label_13:
#line 175
$memory_5 = c_rt_lib::ov_as($memory_3, 'load_const');
#line 176
$memory_7 = $memory_5->{'dest'};
#line 176
$memory_10 = $memory_5->{'dest'};
#line 176
$memory_9 = generator_java_priv::print_register($memory_10);
#line 176
undef($memory_10);
#line 176
$memory_10 = $memory_5->{'val'};
#line 176
$memory_8 = generator_java_priv::print_const_value($memory_9, $memory_10);
#line 176
undef($memory_10);
#line 176
undef($memory_9);
#line 176
$memory_6 = generator_java_priv::print_register_setter($memory_7, $memory_8);
#line 176
undef($memory_8);
#line 176
undef($memory_7);
#line 176
$memory_7 = ";";
#line 176
$memory_6 = $memory_6 . $memory_7;
#line 176
undef($memory_7);
#line 176
$memory_2 = $memory_6;
#line 176
undef($memory_6);
#line 176
undef($memory_5);
#line 177
goto label_1;
#line 177
label_14:
#line 177
$memory_5 = c_rt_lib::ov_as($memory_3, 'get_frm_idx');
#line 178
$memory_6 = "((ImmArray)";
#line 178
$memory_8 = $memory_5->{'src'};
#line 178
$memory_7 = generator_java_priv::print_register_getter($memory_8);
#line 178
undef($memory_8);
#line 178
$memory_6 = $memory_6 . $memory_7;
#line 178
undef($memory_7);
#line 178
$memory_7 = ")";
#line 178
$memory_6 = $memory_6 . $memory_7;
#line 178
undef($memory_7);
#line 178
$memory_7 = generator_java_priv::print_getter();
#line 178
$memory_6 = $memory_6 . $memory_7;
#line 178
undef($memory_7);
#line 178
$memory_2 = $memory_6;
#line 178
undef($memory_6);
#line 179
$memory_6 = "[((ImmDouble)(";
#line 179
$memory_8 = $memory_5->{'idx'};
#line 179
$memory_7 = generator_java_priv::print_register_getter($memory_8);
#line 179
undef($memory_8);
#line 179
$memory_6 = $memory_6 . $memory_7;
#line 179
undef($memory_7);
#line 179
$memory_7 = "))";
#line 179
$memory_6 = $memory_6 . $memory_7;
#line 179
undef($memory_7);
#line 179
$memory_7 = generator_java_priv::print_getter();
#line 179
$memory_6 = $memory_6 . $memory_7;
#line 179
undef($memory_7);
#line 179
$memory_7 = generator_java_priv::print_int_value();
#line 179
$memory_6 = $memory_6 . $memory_7;
#line 179
undef($memory_7);
#line 179
$memory_7 = "]";
#line 179
$memory_6 = $memory_6 . $memory_7;
#line 179
undef($memory_7);
#line 179
$memory_2 = $memory_2 . $memory_6;
#line 179
undef($memory_6);
#line 180
$memory_7 = $memory_5->{'dest'};
#line 180
$memory_6 = generator_java_priv::print_register_setter($memory_7, $memory_2);
#line 180
undef($memory_7);
#line 180
$memory_7 = ";";
#line 180
$memory_6 = $memory_6 . $memory_7;
#line 180
undef($memory_7);
#line 180
$memory_2 = $memory_6;
#line 180
undef($memory_6);
#line 180
undef($memory_5);
#line 181
goto label_1;
#line 181
label_15:
#line 181
$memory_5 = c_rt_lib::ov_as($memory_3, 'set_at_idx');
#line 182
$memory_7 = $memory_5->{'src'};
#line 182
$memory_8 = "c_rt_lib_NL.clone_nl(";
#line 182
$memory_10 = $memory_5->{'src'};
#line 182
$memory_9 = generator_java_priv::print_register_getter($memory_10);
#line 182
undef($memory_10);
#line 182
$memory_8 = $memory_8 . $memory_9;
#line 182
undef($memory_9);
#line 182
$memory_9 = ")";
#line 182
$memory_8 = $memory_8 . $memory_9;
#line 182
undef($memory_9);
#line 182
$memory_6 = generator_java_priv::print_register_setter($memory_7, $memory_8);
#line 182
undef($memory_8);
#line 182
undef($memory_7);
#line 182
$memory_7 = ";";
#line 182
$memory_6 = $memory_6 . $memory_7;
#line 182
undef($memory_7);
#line 182
$memory_7 = string::lf();
#line 182
$memory_6 = $memory_6 . $memory_7;
#line 182
undef($memory_7);
#line 182
$memory_2 = $memory_6;
#line 182
undef($memory_6);
#line 183
$memory_6 = "((ImmArray)";
#line 183
$memory_8 = $memory_5->{'src'};
#line 183
$memory_7 = generator_java_priv::print_register_getter($memory_8);
#line 183
undef($memory_8);
#line 183
$memory_6 = $memory_6 . $memory_7;
#line 183
undef($memory_7);
#line 183
$memory_7 = ")";
#line 183
$memory_6 = $memory_6 . $memory_7;
#line 183
undef($memory_7);
#line 183
$memory_7 = generator_java_priv::print_getter();
#line 183
$memory_6 = $memory_6 . $memory_7;
#line 183
undef($memory_7);
#line 183
$memory_7 = "[";
#line 183
$memory_6 = $memory_6 . $memory_7;
#line 183
undef($memory_7);
#line 183
$memory_2 = $memory_2 . $memory_6;
#line 183
undef($memory_6);
#line 184
$memory_6 = "((ImmDouble)";
#line 184
$memory_8 = $memory_5->{'idx'};
#line 184
$memory_7 = generator_java_priv::print_register_getter($memory_8);
#line 184
undef($memory_8);
#line 184
$memory_6 = $memory_6 . $memory_7;
#line 184
undef($memory_7);
#line 184
$memory_7 = ")";
#line 184
$memory_6 = $memory_6 . $memory_7;
#line 184
undef($memory_7);
#line 184
$memory_7 = generator_java_priv::print_getter();
#line 184
$memory_6 = $memory_6 . $memory_7;
#line 184
undef($memory_7);
#line 184
$memory_7 = generator_java_priv::print_int_value();
#line 184
$memory_6 = $memory_6 . $memory_7;
#line 184
undef($memory_7);
#line 184
$memory_7 = "] = ";
#line 184
$memory_6 = $memory_6 . $memory_7;
#line 184
undef($memory_7);
#line 184
$memory_8 = $memory_5->{'val'};
#line 184
$memory_7 = generator_java_priv::print_register_getter($memory_8);
#line 184
undef($memory_8);
#line 184
$memory_6 = $memory_6 . $memory_7;
#line 184
undef($memory_7);
#line 184
$memory_7 = ";";
#line 184
$memory_6 = $memory_6 . $memory_7;
#line 184
undef($memory_7);
#line 184
$memory_2 = $memory_2 . $memory_6;
#line 184
undef($memory_6);
#line 184
undef($memory_5);
#line 185
goto label_1;
#line 185
label_16:
#line 185
$memory_5 = c_rt_lib::ov_as($memory_3, 'get_val');
#line 186
$memory_7 = $memory_5->{'dest'};
#line 186
$memory_8 = generator_java_priv::print_get_hash_value($memory_5);
#line 186
$memory_6 = generator_java_priv::print_register_setter($memory_7, $memory_8);
#line 186
undef($memory_8);
#line 186
undef($memory_7);
#line 186
$memory_7 = ";";
#line 186
$memory_6 = $memory_6 . $memory_7;
#line 186
undef($memory_7);
#line 186
$memory_2 = $memory_6;
#line 186
undef($memory_6);
#line 186
undef($memory_5);
#line 187
goto label_1;
#line 187
label_17:
#line 187
$memory_5 = c_rt_lib::ov_as($memory_3, 'set_val');
#line 188
$memory_7 = $memory_5->{'src'};
#line 188
$memory_8 = "c_rt_lib_NL.clone_nl(";
#line 188
$memory_10 = $memory_5->{'src'};
#line 188
$memory_9 = generator_java_priv::print_register_getter($memory_10);
#line 188
undef($memory_10);
#line 188
$memory_8 = $memory_8 . $memory_9;
#line 188
undef($memory_9);
#line 188
$memory_9 = ")";
#line 188
$memory_8 = $memory_8 . $memory_9;
#line 188
undef($memory_9);
#line 188
$memory_6 = generator_java_priv::print_register_setter($memory_7, $memory_8);
#line 188
undef($memory_8);
#line 188
undef($memory_7);
#line 188
$memory_7 = ";";
#line 188
$memory_6 = $memory_6 . $memory_7;
#line 188
undef($memory_7);
#line 188
$memory_7 = string::lf();
#line 188
$memory_6 = $memory_6 . $memory_7;
#line 188
undef($memory_7);
#line 188
$memory_2 = $memory_6;
#line 188
undef($memory_6);
#line 189
$memory_6 = generator_java_priv::print_set_hash_value($memory_5);
#line 189
$memory_7 = ";";
#line 189
$memory_6 = $memory_6 . $memory_7;
#line 189
undef($memory_7);
#line 189
$memory_2 = $memory_2 . $memory_6;
#line 189
undef($memory_6);
#line 189
undef($memory_5);
#line 190
goto label_1;
#line 190
label_18:
#line 190
$memory_5 = c_rt_lib::ov_as($memory_3, 'ov_mk');
#line 191
$memory_6 = generator_java_priv::print_ov_mk($memory_5);
#line 191
$memory_2 = $memory_6;
#line 191
undef($memory_6);
#line 191
undef($memory_5);
#line 192
goto label_1;
#line 192
label_19:
#line 192
$memory_5 = c_rt_lib::ov_as($memory_3, 'prt_lbl');
#line 193
$memory_6 = "case \"";
#line 193
$memory_6 = $memory_6 . $memory_5;
#line 193
$memory_7 = "\":";
#line 193
$memory_6 = $memory_6 . $memory_7;
#line 193
undef($memory_7);
#line 193
$memory_2 = $memory_6;
#line 193
undef($memory_6);
#line 193
undef($memory_5);
#line 194
goto label_1;
#line 194
label_20:
#line 194
$memory_5 = c_rt_lib::ov_as($memory_3, 'if_goto');
#line 195
$memory_6 = "if (c_rt_lib_NL.check_true_native_nl(";
#line 195
$memory_8 = $memory_5->{'src'};
#line 195
$memory_7 = generator_java_priv::print_register($memory_8);
#line 195
undef($memory_8);
#line 195
$memory_6 = $memory_6 . $memory_7;
#line 195
undef($memory_7);
#line 195
$memory_7 = ")) {";
#line 195
$memory_6 = $memory_6 . $memory_7;
#line 195
undef($memory_7);
#line 195
$memory_8 = $memory_5->{'dest'};
#line 195
$memory_7 = generator_java_priv::print_goto($memory_8);
#line 195
undef($memory_8);
#line 195
$memory_6 = $memory_6 . $memory_7;
#line 195
undef($memory_7);
#line 195
$memory_7 = "}";
#line 195
$memory_6 = $memory_6 . $memory_7;
#line 195
undef($memory_7);
#line 195
$memory_2 = $memory_6;
#line 195
undef($memory_6);
#line 195
undef($memory_5);
#line 196
goto label_1;
#line 196
label_21:
#line 196
$memory_5 = c_rt_lib::ov_as($memory_3, 'goto');
#line 197
$memory_6 = generator_java_priv::print_goto($memory_5);
#line 197
$memory_2 = $memory_6;
#line 197
undef($memory_6);
#line 197
undef($memory_5);
#line 198
goto label_1;
#line 198
label_22:
#line 198
$memory_5 = c_rt_lib::ov_as($memory_3, 'clear');
#line 199
$memory_7 = "null";
#line 199
$memory_6 = generator_java_priv::print_register_setter($memory_5, $memory_7);
#line 199
undef($memory_7);
#line 199
$memory_7 = ";";
#line 199
$memory_6 = $memory_6 . $memory_7;
#line 199
undef($memory_7);
#line 199
$memory_2 = $memory_6;
#line 199
undef($memory_6);
#line 199
undef($memory_5);
#line 200
goto label_1;
#line 200
label_1:
#line 200
undef($memory_3);
#line 200
undef($memory_4);
#line 201
$memory_3 = "//line ";
#line 201
$memory_4 = $memory_1->{'debug'};
#line 201
$memory_4 = $memory_4->{'nast_debug'};
#line 201
$memory_4 = $memory_4->{'begin'};
#line 201
$memory_4 = $memory_4->{'line'};
#line 201
$memory_3 = $memory_3 . $memory_4;
#line 201
undef($memory_4);
#line 201
$memory_4 = string::lf();
#line 201
$memory_3 = $memory_3 . $memory_4;
#line 201
undef($memory_4);
#line 201
$memory_3 = $memory_3 . $memory_2;
#line 201
$memory_4 = string::lf();
#line 201
$memory_3 = $memory_3 . $memory_4;
#line 201
undef($memory_4);
#line 201
undef($memory_0);
#line 201
undef($memory_1);
#line 201
undef($memory_2);
#line 201
return $memory_3;
#line 201
undef($memory_3);
#line 201
undef($memory_2);
#line 201
undef($memory_0);
#line 201
undef($memory_1);
#line 201
return;
}

sub generator_java_priv::print_arr($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;$memory_0 = $_[0];
#line 205
$memory_1 = "new ImmArray(new Imm[";
#line 206
$memory_2 = array::len($memory_0);
#line 206
$memory_3 = 0;
#line 206
$memory_2 = c_rt_lib::to_nl($memory_2 == $memory_3);
#line 206
undef($memory_3);
#line 206
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 206
if (c_rt_lib::check_true($memory_2)) {goto label_2;}
#line 207
$memory_3 = "0]";
#line 207
$memory_1 = $memory_1 . $memory_3;
#line 207
undef($memory_3);
#line 208
goto label_1;
#line 208
label_2:
#line 209
$memory_3 = "] {";
#line 209
$memory_1 = $memory_1 . $memory_3;
#line 209
undef($memory_3);
#line 210
$memory_4 = 0;
#line 210
$memory_5 = 1;
#line 210
$memory_6 = c_rt_lib::array_len($memory_0);
#line 210
label_5:
#line 210
$memory_7 = c_rt_lib::to_nl($memory_4 >= $memory_6);
#line 210
if (c_rt_lib::check_true($memory_7)) {goto label_3;}
#line 210
$memory_3 = $memory_0->[$memory_4];
#line 210
$memory_8 = generator_java_priv::print_register_getter($memory_3);
#line 210
$memory_9 = ",";
#line 210
$memory_8 = $memory_8 . $memory_9;
#line 210
undef($memory_9);
#line 210
$memory_1 = $memory_1 . $memory_8;
#line 210
undef($memory_8);
#line 210
$memory_4 = $memory_4 + $memory_5;
#line 210
goto label_5;
#line 210
label_3:
#line 210
undef($memory_3);
#line 210
undef($memory_4);
#line 210
undef($memory_5);
#line 210
undef($memory_6);
#line 210
undef($memory_7);
#line 211
$memory_3 = "}";
#line 211
$memory_1 = $memory_1 . $memory_3;
#line 211
undef($memory_3);
#line 212
goto label_1;
#line 212
label_1:
#line 212
undef($memory_2);
#line 213
$memory_2 = ")";
#line 213
$memory_2 = $memory_1 . $memory_2;
#line 213
undef($memory_0);
#line 213
undef($memory_1);
#line 213
return $memory_2;
#line 213
undef($memory_2);
#line 213
undef($memory_1);
#line 213
undef($memory_0);
#line 213
return;
}

sub generator_java_priv::print_bin_op($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;$memory_0 = $_[0];
#line 217
$memory_1 = "";
#line 218
$memory_2 = $memory_0->{'op'};
#line 218
$memory_3 = ">=";
#line 218
$memory_2 = c_rt_lib::to_nl($memory_2 eq $memory_3);
#line 218
undef($memory_3);
#line 218
if (c_rt_lib::check_true($memory_2)) {goto label_7;}
#line 218
$memory_2 = $memory_0->{'op'};
#line 218
$memory_3 = "<=";
#line 218
$memory_2 = c_rt_lib::to_nl($memory_2 eq $memory_3);
#line 218
undef($memory_3);
#line 218
label_7:
#line 218
if (c_rt_lib::check_true($memory_2)) {goto label_6;}
#line 218
$memory_2 = $memory_0->{'op'};
#line 218
$memory_3 = "<";
#line 218
$memory_2 = c_rt_lib::to_nl($memory_2 eq $memory_3);
#line 218
undef($memory_3);
#line 218
label_6:
#line 218
if (c_rt_lib::check_true($memory_2)) {goto label_5;}
#line 218
$memory_2 = $memory_0->{'op'};
#line 218
$memory_3 = ">";
#line 218
$memory_2 = c_rt_lib::to_nl($memory_2 eq $memory_3);
#line 218
undef($memory_3);
#line 218
label_5:
#line 218
if (c_rt_lib::check_true($memory_2)) {goto label_4;}
#line 218
$memory_2 = $memory_0->{'op'};
#line 218
$memory_3 = "==";
#line 218
$memory_2 = c_rt_lib::to_nl($memory_2 eq $memory_3);
#line 218
undef($memory_3);
#line 218
label_4:
#line 218
if (c_rt_lib::check_true($memory_2)) {goto label_3;}
#line 218
$memory_2 = $memory_0->{'op'};
#line 218
$memory_3 = "!=";
#line 218
$memory_2 = c_rt_lib::to_nl($memory_2 eq $memory_3);
#line 218
undef($memory_3);
#line 218
label_3:
#line 218
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 218
if (c_rt_lib::check_true($memory_2)) {goto label_2;}
#line 220
$memory_3 = "c_rt_lib_NL.native_to_nl_nl(";
#line 220
$memory_4 = generator_java_priv::print_imm_double_operation($memory_0);
#line 220
$memory_3 = $memory_3 . $memory_4;
#line 220
undef($memory_4);
#line 220
$memory_4 = " )";
#line 220
$memory_3 = $memory_3 . $memory_4;
#line 220
undef($memory_4);
#line 220
$memory_1 = $memory_1 . $memory_3;
#line 220
undef($memory_3);
#line 221
goto label_1;
#line 221
label_2:
#line 221
$memory_2 = $memory_0->{'op'};
#line 221
$memory_3 = "eq";
#line 221
$memory_2 = c_rt_lib::to_nl($memory_2 eq $memory_3);
#line 221
undef($memory_3);
#line 221
if (c_rt_lib::check_true($memory_2)) {goto label_9;}
#line 221
$memory_2 = $memory_0->{'op'};
#line 221
$memory_3 = "ne";
#line 221
$memory_2 = c_rt_lib::to_nl($memory_2 eq $memory_3);
#line 221
undef($memory_3);
#line 221
label_9:
#line 221
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 221
if (c_rt_lib::check_true($memory_2)) {goto label_8;}
#line 222
$memory_3 = "c_rt_lib_NL.native_to_nl_nl(";
#line 222
$memory_1 = $memory_1 . $memory_3;
#line 222
undef($memory_3);
#line 223
$memory_3 = $memory_0->{'op'};
#line 223
$memory_4 = "ne";
#line 223
$memory_3 = c_rt_lib::to_nl($memory_3 eq $memory_4);
#line 223
undef($memory_4);
#line 223
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 223
if (c_rt_lib::check_true($memory_3)) {goto label_11;}
#line 224
$memory_4 = "!";
#line 224
$memory_1 = $memory_1 . $memory_4;
#line 224
undef($memory_4);
#line 225
goto label_11;
#line 225
label_11:
#line 225
undef($memory_3);
#line 226
$memory_4 = $memory_0->{'left'};
#line 226
$memory_3 = generator_java_priv::print_register_getter($memory_4);
#line 226
undef($memory_4);
#line 226
$memory_4 = ".toString().equals(";
#line 226
$memory_3 = $memory_3 . $memory_4;
#line 226
undef($memory_4);
#line 226
$memory_1 = $memory_1 . $memory_3;
#line 226
undef($memory_3);
#line 227
$memory_4 = $memory_0->{'right'};
#line 227
$memory_3 = generator_java_priv::print_register_getter($memory_4);
#line 227
undef($memory_4);
#line 227
$memory_4 = ".toString()))";
#line 227
$memory_3 = $memory_3 . $memory_4;
#line 227
undef($memory_4);
#line 227
$memory_1 = $memory_1 . $memory_3;
#line 227
undef($memory_3);
#line 228
goto label_1;
#line 228
label_8:
#line 228
$memory_2 = $memory_0->{'op'};
#line 228
$memory_3 = ".";
#line 228
$memory_2 = c_rt_lib::to_nl($memory_2 eq $memory_3);
#line 228
undef($memory_3);
#line 228
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 228
if (c_rt_lib::check_true($memory_2)) {goto label_12;}
#line 229
$memory_3 = "new ImmString(";
#line 229
$memory_5 = $memory_0->{'left'};
#line 229
$memory_4 = generator_java_priv::print_register_getter($memory_5);
#line 229
undef($memory_5);
#line 229
$memory_3 = $memory_3 . $memory_4;
#line 229
undef($memory_4);
#line 229
$memory_4 = ".toString() + ";
#line 229
$memory_3 = $memory_3 . $memory_4;
#line 229
undef($memory_4);
#line 229
$memory_5 = $memory_0->{'right'};
#line 229
$memory_4 = generator_java_priv::print_register_getter($memory_5);
#line 229
undef($memory_5);
#line 229
$memory_3 = $memory_3 . $memory_4;
#line 229
undef($memory_4);
#line 229
$memory_4 = ".toString())";
#line 229
$memory_3 = $memory_3 . $memory_4;
#line 229
undef($memory_4);
#line 229
$memory_1 = $memory_1 . $memory_3;
#line 229
undef($memory_3);
#line 230
goto label_1;
#line 230
label_12:
#line 231
$memory_3 = "new ImmDouble(";
#line 231
$memory_4 = generator_java_priv::print_imm_double_operation($memory_0);
#line 231
$memory_3 = $memory_3 . $memory_4;
#line 231
undef($memory_4);
#line 231
$memory_4 = ")";
#line 231
$memory_3 = $memory_3 . $memory_4;
#line 231
undef($memory_4);
#line 231
$memory_1 = $memory_1 . $memory_3;
#line 231
undef($memory_3);
#line 232
goto label_1;
#line 232
label_1:
#line 232
undef($memory_2);
#line 233
$memory_3 = $memory_0->{'dest'};
#line 233
$memory_2 = generator_java_priv::print_register_setter($memory_3, $memory_1);
#line 233
undef($memory_3);
#line 233
$memory_3 = ";";
#line 233
$memory_2 = $memory_2 . $memory_3;
#line 233
undef($memory_3);
#line 233
undef($memory_0);
#line 233
undef($memory_1);
#line 233
return $memory_2;
#line 233
undef($memory_2);
#line 233
undef($memory_1);
#line 233
undef($memory_0);
#line 233
return;
}

sub generator_java_priv::print_imm_double_operation($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;$memory_0 = $_[0];
#line 237
$memory_2 = $memory_0->{'left'};
#line 237
$memory_1 = generator_java_priv::print_register_as_number($memory_2);
#line 237
undef($memory_2);
#line 238
$memory_2 = $memory_0->{'op'};
#line 238
$memory_3 = "==";
#line 238
$memory_2 = c_rt_lib::to_nl($memory_2 eq $memory_3);
#line 238
undef($memory_3);
#line 238
if (c_rt_lib::check_true($memory_2)) {goto label_3;}
#line 238
$memory_2 = $memory_0->{'op'};
#line 238
$memory_3 = "!=";
#line 238
$memory_2 = c_rt_lib::to_nl($memory_2 eq $memory_3);
#line 238
undef($memory_3);
#line 238
label_3:
#line 238
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 238
if (c_rt_lib::check_true($memory_2)) {goto label_2;}
#line 239
$memory_3 = ".compareTo(";
#line 239
$memory_5 = $memory_0->{'right'};
#line 239
$memory_4 = generator_java_priv::print_register_as_number($memory_5);
#line 239
undef($memory_5);
#line 239
$memory_3 = $memory_3 . $memory_4;
#line 239
undef($memory_4);
#line 239
$memory_4 = ") ";
#line 239
$memory_3 = $memory_3 . $memory_4;
#line 239
undef($memory_4);
#line 239
$memory_4 = $memory_0->{'op'};
#line 239
$memory_3 = $memory_3 . $memory_4;
#line 239
undef($memory_4);
#line 239
$memory_4 = " 0";
#line 239
$memory_3 = $memory_3 . $memory_4;
#line 239
undef($memory_4);
#line 239
$memory_1 = $memory_1 . $memory_3;
#line 239
undef($memory_3);
#line 240
goto label_1;
#line 240
label_2:
#line 241
$memory_3 = $memory_0->{'op'};
#line 241
$memory_5 = $memory_0->{'right'};
#line 241
$memory_4 = generator_java_priv::print_register_as_number($memory_5);
#line 241
undef($memory_5);
#line 241
$memory_3 = $memory_3 . $memory_4;
#line 241
undef($memory_4);
#line 241
$memory_1 = $memory_1 . $memory_3;
#line 241
undef($memory_3);
#line 242
goto label_1;
#line 242
label_1:
#line 242
undef($memory_2);
#line 243
undef($memory_0);
#line 243
return $memory_1;
#line 243
undef($memory_1);
#line 243
undef($memory_0);
#line 243
return;
}

sub generator_java_priv::print_register_as_number($) {
my $memory_0;my $memory_1;my $memory_2;$memory_0 = $_[0];
#line 247
$memory_1 = "(Double.valueOf(String.valueOf(";
#line 247
$memory_2 = generator_java_priv::print_register_getter($memory_0);
#line 247
$memory_1 = $memory_1 . $memory_2;
#line 247
undef($memory_2);
#line 247
$memory_2 = generator_java_priv::print_getter();
#line 247
$memory_1 = $memory_1 . $memory_2;
#line 247
undef($memory_2);
#line 247
$memory_2 = ")))";
#line 247
$memory_1 = $memory_1 . $memory_2;
#line 247
undef($memory_2);
#line 247
undef($memory_0);
#line 247
return $memory_1;
#line 247
undef($memory_1);
#line 247
undef($memory_0);
#line 247
return;
}

sub generator_java_priv::__print_int_value() {
my $memory_0;
#line 251
$memory_0 = ".intValue()";
#line 251
return $memory_0;
#line 251
undef($memory_0);
#line 251
return;
}

my $_print_int_value;
sub generator_java_priv::print_int_value() {
	$_print_int_value = generator_java_priv::__print_int_value() unless defined $_print_int_value;
	return $_print_int_value;
}

sub generator_java_priv::print_call($$$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;my $memory_13;$memory_0 = $_[0];$memory_1 = $_[1];$memory_2 = $_[2];$memory_3 = $_[3];
#line 255
$memory_4 = "";
#line 255
$memory_4 = c_rt_lib::to_nl($memory_1 eq $memory_4);
#line 255
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 255
if (c_rt_lib::check_true($memory_4)) {goto label_2;}
#line 255
$memory_5 = "_priv";
#line 255
$memory_5 = $memory_2 . $memory_5;
#line 255
$memory_2 = $memory_5;
#line 255
undef($memory_5);
#line 255
goto label_2;
#line 255
label_2:
#line 255
undef($memory_4);
#line 256
$memory_4 = "";
#line 256
$memory_4 = c_rt_lib::to_nl($memory_1 eq $memory_4);
#line 256
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 256
if (c_rt_lib::check_true($memory_4)) {goto label_4;}
#line 256
$memory_1 = $memory_0;
#line 256
goto label_4;
#line 256
label_4:
#line 256
undef($memory_4);
#line 257
$memory_4 = generator_java_priv::get_class_name($memory_1);
#line 257
$memory_5 = ".";
#line 257
$memory_4 = $memory_4 . $memory_5;
#line 257
undef($memory_5);
#line 257
$memory_5 = $memory_2;
#line 257
$memory_4 = $memory_4 . $memory_5;
#line 257
undef($memory_5);
#line 257
$memory_5 = "_nl(";
#line 257
$memory_4 = $memory_4 . $memory_5;
#line 257
undef($memory_5);
#line 258
$memory_5 = 0;
#line 259
$memory_7 = 0;
#line 259
$memory_8 = 1;
#line 259
$memory_9 = c_rt_lib::array_len($memory_3);
#line 259
label_7:
#line 259
$memory_10 = c_rt_lib::to_nl($memory_7 >= $memory_9);
#line 259
if (c_rt_lib::check_true($memory_10)) {goto label_5;}
#line 259
$memory_6 = $memory_3->[$memory_7];
#line 260
$memory_11 = 0;
#line 260
$memory_11 = c_rt_lib::to_nl($memory_5 == $memory_11);
#line 260
$memory_11 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_11));
#line 260
$memory_11 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_11));
#line 260
if (c_rt_lib::check_true($memory_11)) {goto label_9;}
#line 260
$memory_12 = ",";
#line 260
$memory_4 = $memory_4 . $memory_12;
#line 260
undef($memory_12);
#line 260
goto label_9;
#line 260
label_9:
#line 260
undef($memory_11);
#line 261
$memory_11 = 1;
#line 261
$memory_5 = $memory_5 + $memory_11;
#line 261
undef($memory_11);
#line 262
$memory_11 = c_rt_lib::ov_is($memory_6, 'ref');
#line 262
if (c_rt_lib::check_true($memory_11)) {goto label_11;}
#line 264
$memory_11 = c_rt_lib::ov_is($memory_6, 'val');
#line 264
if (c_rt_lib::check_true($memory_11)) {goto label_12;}
#line 264
$memory_11 = "NOMATCHALERT";
#line 264
$memory_11 = [$memory_11,$memory_6];
#line 264
die(dfile::ssave($memory_11));
#line 262
label_11:
#line 262
$memory_12 = c_rt_lib::ov_as($memory_6, 'ref');
#line 263
$memory_13 = generator_java_priv::print_register($memory_12);
#line 263
$memory_4 = $memory_4 . $memory_13;
#line 263
undef($memory_13);
#line 263
undef($memory_12);
#line 264
goto label_10;
#line 264
label_12:
#line 264
$memory_12 = c_rt_lib::ov_as($memory_6, 'val');
#line 265
$memory_13 = generator_java_priv::print_register($memory_12);
#line 265
$memory_4 = $memory_4 . $memory_13;
#line 265
undef($memory_13);
#line 265
undef($memory_12);
#line 266
goto label_10;
#line 266
label_10:
#line 266
undef($memory_11);
#line 267
$memory_7 = $memory_7 + $memory_8;
#line 267
goto label_7;
#line 267
label_5:
#line 267
undef($memory_6);
#line 267
undef($memory_7);
#line 267
undef($memory_8);
#line 267
undef($memory_9);
#line 267
undef($memory_10);
#line 268
$memory_6 = ")";
#line 268
$memory_6 = $memory_4 . $memory_6;
#line 268
undef($memory_0);
#line 268
undef($memory_1);
#line 268
undef($memory_2);
#line 268
undef($memory_3);
#line 268
undef($memory_4);
#line 268
undef($memory_5);
#line 268
return $memory_6;
#line 268
undef($memory_6);
#line 268
undef($memory_4);
#line 268
undef($memory_5);
#line 268
undef($memory_0);
#line 268
undef($memory_1);
#line 268
undef($memory_2);
#line 268
undef($memory_3);
#line 268
return;
}

sub generator_java_priv::print_const_arr($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;$memory_0 = $_[0];$memory_1 = $_[1];
#line 272
$memory_2 = "new Imm[] {";
#line 273
$memory_4 = 0;
#line 273
$memory_5 = 1;
#line 273
$memory_6 = c_rt_lib::array_len($memory_1);
#line 273
label_3:
#line 273
$memory_7 = c_rt_lib::to_nl($memory_4 >= $memory_6);
#line 273
if (c_rt_lib::check_true($memory_7)) {goto label_1;}
#line 273
$memory_3 = $memory_1->[$memory_4];
#line 273
$memory_8 = generator_java_priv::print_const_value($memory_0, $memory_3);
#line 273
$memory_9 = ",";
#line 273
$memory_8 = $memory_8 . $memory_9;
#line 273
undef($memory_9);
#line 273
$memory_2 = $memory_2 . $memory_8;
#line 273
undef($memory_8);
#line 273
$memory_4 = $memory_4 + $memory_5;
#line 273
goto label_3;
#line 273
label_1:
#line 273
undef($memory_3);
#line 273
undef($memory_4);
#line 273
undef($memory_5);
#line 273
undef($memory_6);
#line 273
undef($memory_7);
#line 274
$memory_3 = "}";
#line 274
$memory_3 = $memory_2 . $memory_3;
#line 274
undef($memory_0);
#line 274
undef($memory_1);
#line 274
undef($memory_2);
#line 274
return $memory_3;
#line 274
undef($memory_3);
#line 274
undef($memory_2);
#line 274
undef($memory_0);
#line 274
undef($memory_1);
#line 274
return;
}

sub generator_java_priv::print_const_hash($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;$memory_0 = $_[0];$memory_1 = $_[1];
#line 278
$memory_2 = generator_java_priv::print_hash_name();
#line 278
$memory_3 = " = new HashMap<ImmString, Imm>();";
#line 278
$memory_2 = $memory_2 . $memory_3;
#line 278
undef($memory_3);
#line 278
$memory_3 = string::lf();
#line 278
$memory_2 = $memory_2 . $memory_3;
#line 278
undef($memory_3);
#line 279
$memory_5 = c_rt_lib::init_iter($memory_1);
#line 279
label_3:
#line 279
$memory_3 = c_rt_lib::is_end_hash($memory_5);
#line 279
if (c_rt_lib::check_true($memory_3)) {goto label_1;}
#line 279
$memory_3 = c_rt_lib::get_key_iter($memory_5);
#line 279
$memory_4 = c_rt_lib::hash_get_value($memory_1, $memory_3);
#line 279
$memory_6 = generator_java_priv::print_hash_name();
#line 279
$memory_7 = ".put(new ImmString(\"";
#line 279
$memory_6 = $memory_6 . $memory_7;
#line 279
undef($memory_7);
#line 279
$memory_7 = generator_java_priv::escape_string($memory_3);
#line 279
$memory_6 = $memory_6 . $memory_7;
#line 279
undef($memory_7);
#line 279
$memory_7 = "\"),";
#line 279
$memory_6 = $memory_6 . $memory_7;
#line 279
undef($memory_7);
#line 279
$memory_7 = generator_java_priv::print_const_value($memory_0, $memory_4);
#line 279
$memory_6 = $memory_6 . $memory_7;
#line 279
undef($memory_7);
#line 279
$memory_7 = ");";
#line 279
$memory_6 = $memory_6 . $memory_7;
#line 279
undef($memory_7);
#line 279
$memory_7 = string::lf();
#line 279
$memory_6 = $memory_6 . $memory_7;
#line 279
undef($memory_7);
#line 279
$memory_2 = $memory_2 . $memory_6;
#line 279
undef($memory_6);
#line 279
$memory_5 = c_rt_lib::next_iter($memory_5);
#line 279
goto label_3;
#line 279
label_1:
#line 279
undef($memory_3);
#line 279
undef($memory_4);
#line 279
undef($memory_5);
#line 280
$memory_4 = "new ImmMap(";
#line 280
$memory_5 = generator_java_priv::print_hash_name();
#line 280
$memory_4 = $memory_4 . $memory_5;
#line 280
undef($memory_5);
#line 280
$memory_5 = ")";
#line 280
$memory_4 = $memory_4 . $memory_5;
#line 280
undef($memory_5);
#line 280
$memory_3 = generator_java_priv::print_register_setter($memory_0, $memory_4);
#line 280
undef($memory_4);
#line 280
$memory_3 = $memory_2 . $memory_3;
#line 280
undef($memory_0);
#line 280
undef($memory_1);
#line 280
undef($memory_2);
#line 280
return $memory_3;
#line 280
undef($memory_3);
#line 280
undef($memory_2);
#line 280
undef($memory_0);
#line 280
undef($memory_1);
#line 280
return;
}

sub generator_java_priv::print_const_ov($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;$memory_0 = $_[0];$memory_1 = $_[1];
#line 284
$memory_2 = "";
#line 285
$memory_3 = ov::has_value($memory_1);
#line 285
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 285
if (c_rt_lib::check_true($memory_3)) {goto label_2;}
#line 286
$memory_4 = "new OV(\"";
#line 286
$memory_6 = ov::get_element($memory_1);
#line 286
$memory_5 = generator_java_priv::escape_string($memory_6);
#line 286
undef($memory_6);
#line 286
$memory_4 = $memory_4 . $memory_5;
#line 286
undef($memory_5);
#line 286
$memory_5 = "\", ";
#line 286
$memory_4 = $memory_4 . $memory_5;
#line 286
undef($memory_5);
#line 286
$memory_6 = ov::get_value($memory_1);
#line 286
$memory_5 = generator_java_priv::print_const_value($memory_0, $memory_6);
#line 286
undef($memory_6);
#line 286
$memory_4 = $memory_4 . $memory_5;
#line 286
undef($memory_5);
#line 286
$memory_5 = ")";
#line 286
$memory_4 = $memory_4 . $memory_5;
#line 286
undef($memory_5);
#line 286
$memory_2 = $memory_4;
#line 286
undef($memory_4);
#line 287
goto label_1;
#line 287
label_2:
#line 288
$memory_4 = "new OV(\"";
#line 288
$memory_6 = ov::get_element($memory_1);
#line 288
$memory_5 = generator_java_priv::escape_string($memory_6);
#line 288
undef($memory_6);
#line 288
$memory_4 = $memory_4 . $memory_5;
#line 288
undef($memory_5);
#line 288
$memory_5 = "\", null)";
#line 288
$memory_4 = $memory_4 . $memory_5;
#line 288
undef($memory_5);
#line 288
$memory_2 = $memory_4;
#line 288
undef($memory_4);
#line 289
goto label_1;
#line 289
label_1:
#line 289
undef($memory_3);
#line 290
undef($memory_0);
#line 290
undef($memory_1);
#line 290
return $memory_2;
#line 290
undef($memory_2);
#line 290
undef($memory_0);
#line 290
undef($memory_1);
#line 290
return;
}

sub generator_java_priv::print_const_value($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;$memory_0 = $_[0];$memory_1 = $_[1];
#line 294
$memory_2 = nl::is_sim($memory_1);
#line 294
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 294
if (c_rt_lib::check_true($memory_3)) {goto label_4;}
#line 294
$memory_5 = ptd::sim();
#line 294
$memory_4 = ptd::ensure($memory_5, $memory_1);
#line 294
undef($memory_5);
#line 294
$memory_2 = string_utils::is_integer($memory_4);
#line 294
undef($memory_4);
#line 294
if (c_rt_lib::check_true($memory_2)) {goto label_4;}
#line 294
$memory_5 = ptd::sim();
#line 294
$memory_4 = ptd::ensure($memory_5, $memory_1);
#line 294
undef($memory_5);
#line 294
$memory_2 = string_utils::is_float($memory_4);
#line 294
undef($memory_4);
#line 294
label_4:
#line 294
undef($memory_3);
#line 294
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 294
if (c_rt_lib::check_true($memory_2)) {goto label_2;}
#line 296
$memory_3 = "new ImmDouble(";
#line 296
$memory_3 = $memory_3 . $memory_1;
#line 296
$memory_4 = ")";
#line 296
$memory_3 = $memory_3 . $memory_4;
#line 296
undef($memory_4);
#line 296
undef($memory_0);
#line 296
undef($memory_1);
#line 296
undef($memory_2);
#line 296
return $memory_3;
#line 296
undef($memory_3);
#line 297
goto label_1;
#line 297
label_2:
#line 297
$memory_2 = nl::is_sim($memory_1);
#line 297
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 297
if (c_rt_lib::check_true($memory_2)) {goto label_5;}
#line 298
$memory_3 = "new ImmString(\"";
#line 298
$memory_4 = generator_java_priv::escape_string($memory_1);
#line 298
$memory_3 = $memory_3 . $memory_4;
#line 298
undef($memory_4);
#line 298
$memory_4 = "\")";
#line 298
$memory_3 = $memory_3 . $memory_4;
#line 298
undef($memory_4);
#line 298
undef($memory_0);
#line 298
undef($memory_1);
#line 298
undef($memory_2);
#line 298
return $memory_3;
#line 298
undef($memory_3);
#line 299
goto label_1;
#line 299
label_5:
#line 299
$memory_2 = nl::is_array($memory_1);
#line 299
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 299
if (c_rt_lib::check_true($memory_2)) {goto label_6;}
#line 300
$memory_3 = generator_java_priv::print_const_arr($memory_0, $memory_1);
#line 300
undef($memory_0);
#line 300
undef($memory_1);
#line 300
undef($memory_2);
#line 300
return $memory_3;
#line 300
undef($memory_3);
#line 301
goto label_1;
#line 301
label_6:
#line 301
$memory_2 = nl::is_hash($memory_1);
#line 301
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 301
if (c_rt_lib::check_true($memory_2)) {goto label_7;}
#line 302
$memory_3 = generator_java_priv::print_const_hash($memory_0, $memory_1);
#line 302
undef($memory_0);
#line 302
undef($memory_1);
#line 302
undef($memory_2);
#line 302
return $memory_3;
#line 302
undef($memory_3);
#line 303
goto label_1;
#line 303
label_7:
#line 303
$memory_2 = nl::is_variant($memory_1);
#line 303
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 303
if (c_rt_lib::check_true($memory_2)) {goto label_8;}
#line 304
$memory_3 = generator_java_priv::print_const_ov($memory_0, $memory_1);
#line 304
undef($memory_0);
#line 304
undef($memory_1);
#line 304
undef($memory_2);
#line 304
return $memory_3;
#line 304
undef($memory_3);
#line 305
goto label_1;
#line 305
label_8:
#line 306
$memory_3 = [];
#line 306
die(dfile::ssave($memory_3));
#line 306
undef($memory_3);
#line 307
goto label_1;
#line 307
label_1:
#line 307
undef($memory_2);
#line 307
undef($memory_0);
#line 307
undef($memory_1);
#line 307
return;
}

sub generator_java_priv::print_goto($) {
my $memory_0;my $memory_1;my $memory_2;$memory_0 = $_[0];
#line 311
$memory_1 = "if (true) {label = \"";
#line 311
$memory_1 = $memory_1 . $memory_0;
#line 311
$memory_2 = "\"; continue; }";
#line 311
$memory_1 = $memory_1 . $memory_2;
#line 311
undef($memory_2);
#line 311
undef($memory_0);
#line 311
return $memory_1;
#line 311
undef($memory_1);
#line 311
undef($memory_0);
#line 311
return;
}

sub generator_java_priv::print_hash($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;$memory_0 = $_[0];
#line 315
$memory_1 = generator_java_priv::print_hash_name();
#line 315
$memory_2 = " = new HashMap<ImmString, Imm>();";
#line 315
$memory_1 = $memory_1 . $memory_2;
#line 315
undef($memory_2);
#line 315
$memory_2 = string::lf();
#line 315
$memory_1 = $memory_1 . $memory_2;
#line 315
undef($memory_2);
#line 316
$memory_2 = $memory_0->{'src'};
#line 316
$memory_4 = 0;
#line 316
$memory_5 = 1;
#line 316
$memory_6 = c_rt_lib::array_len($memory_2);
#line 316
label_3:
#line 316
$memory_7 = c_rt_lib::to_nl($memory_4 >= $memory_6);
#line 316
if (c_rt_lib::check_true($memory_7)) {goto label_1;}
#line 316
$memory_3 = $memory_2->[$memory_4];
#line 316
$memory_8 = generator_java_priv::print_hash_name();
#line 316
$memory_9 = ".put(new ImmString(\"";
#line 316
$memory_8 = $memory_8 . $memory_9;
#line 316
undef($memory_9);
#line 316
$memory_10 = $memory_3->{'key'};
#line 316
$memory_9 = generator_java_priv::escape_string($memory_10);
#line 316
undef($memory_10);
#line 316
$memory_8 = $memory_8 . $memory_9;
#line 316
undef($memory_9);
#line 316
$memory_9 = "\"),";
#line 316
$memory_8 = $memory_8 . $memory_9;
#line 316
undef($memory_9);
#line 316
$memory_10 = $memory_3->{'val'};
#line 316
$memory_9 = generator_java_priv::print_register_getter($memory_10);
#line 316
undef($memory_10);
#line 316
$memory_8 = $memory_8 . $memory_9;
#line 316
undef($memory_9);
#line 316
$memory_9 = ");";
#line 316
$memory_8 = $memory_8 . $memory_9;
#line 316
undef($memory_9);
#line 316
$memory_9 = string::lf();
#line 316
$memory_8 = $memory_8 . $memory_9;
#line 316
undef($memory_9);
#line 316
$memory_1 = $memory_1 . $memory_8;
#line 316
undef($memory_8);
#line 316
$memory_4 = $memory_4 + $memory_5;
#line 316
goto label_3;
#line 316
label_1:
#line 316
undef($memory_2);
#line 316
undef($memory_3);
#line 316
undef($memory_4);
#line 316
undef($memory_5);
#line 316
undef($memory_6);
#line 316
undef($memory_7);
#line 317
undef($memory_0);
#line 317
return $memory_1;
#line 317
undef($memory_1);
#line 317
undef($memory_0);
#line 317
return;
}

sub generator_java_priv::__print_hash_name() {
my $memory_0;
#line 321
$memory_0 = "__function_map";
#line 321
return $memory_0;
#line 321
undef($memory_0);
#line 321
return;
}

my $_print_hash_name;
sub generator_java_priv::print_hash_name() {
	$_print_hash_name = generator_java_priv::__print_hash_name() unless defined $_print_hash_name;
	return $_print_hash_name;
}

sub generator_java_priv::print_get_hash_value($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;$memory_0 = $_[0];
#line 325
$memory_1 = "((ImmMap)";
#line 325
$memory_3 = $memory_0->{'src'};
#line 325
$memory_2 = generator_java_priv::print_register_getter($memory_3);
#line 325
undef($memory_3);
#line 325
$memory_1 = $memory_1 . $memory_2;
#line 325
undef($memory_2);
#line 325
$memory_2 = ")";
#line 325
$memory_1 = $memory_1 . $memory_2;
#line 325
undef($memory_2);
#line 325
$memory_2 = generator_java_priv::print_getter();
#line 325
$memory_1 = $memory_1 . $memory_2;
#line 325
undef($memory_2);
#line 325
$memory_2 = ".get(new ImmString(\"";
#line 325
$memory_1 = $memory_1 . $memory_2;
#line 325
undef($memory_2);
#line 325
$memory_3 = $memory_0->{'key'};
#line 325
$memory_2 = generator_java_priv::escape_string($memory_3);
#line 325
undef($memory_3);
#line 325
$memory_1 = $memory_1 . $memory_2;
#line 325
undef($memory_2);
#line 325
$memory_2 = "\"))";
#line 325
$memory_1 = $memory_1 . $memory_2;
#line 325
undef($memory_2);
#line 325
undef($memory_0);
#line 325
return $memory_1;
#line 325
undef($memory_1);
#line 325
undef($memory_0);
#line 325
return;
}

sub generator_java_priv::print_set_hash_value($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;$memory_0 = $_[0];
#line 329
$memory_1 = "((ImmMap)";
#line 329
$memory_3 = $memory_0->{'src'};
#line 329
$memory_2 = generator_java_priv::print_register_getter($memory_3);
#line 329
undef($memory_3);
#line 329
$memory_1 = $memory_1 . $memory_2;
#line 329
undef($memory_2);
#line 329
$memory_2 = ")";
#line 329
$memory_1 = $memory_1 . $memory_2;
#line 329
undef($memory_2);
#line 329
$memory_2 = generator_java_priv::print_getter();
#line 329
$memory_1 = $memory_1 . $memory_2;
#line 329
undef($memory_2);
#line 329
$memory_2 = ".put(new ImmString(\"";
#line 329
$memory_1 = $memory_1 . $memory_2;
#line 329
undef($memory_2);
#line 329
$memory_3 = $memory_0->{'key'};
#line 329
$memory_2 = generator_java_priv::escape_string($memory_3);
#line 329
undef($memory_3);
#line 329
$memory_1 = $memory_1 . $memory_2;
#line 329
undef($memory_2);
#line 329
$memory_2 = "\"), ";
#line 329
$memory_1 = $memory_1 . $memory_2;
#line 329
undef($memory_2);
#line 330
$memory_3 = $memory_0->{'val'};
#line 330
$memory_2 = generator_java_priv::print_register_getter($memory_3);
#line 330
undef($memory_3);
#line 330
$memory_3 = ")";
#line 330
$memory_2 = $memory_2 . $memory_3;
#line 330
undef($memory_3);
#line 330
$memory_1 = $memory_1 . $memory_2;
#line 330
undef($memory_2);
#line 331
undef($memory_0);
#line 331
return $memory_1;
#line 331
undef($memory_1);
#line 331
undef($memory_0);
#line 331
return;
}

sub generator_java_priv::print_ov_mk($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;$memory_0 = $_[0];
#line 335
$memory_1 = "";
#line 336
$memory_2 = $memory_0->{'src'};
#line 336
$memory_2 = c_rt_lib::ov_is($memory_2, 'emp');
#line 336
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 336
if (c_rt_lib::check_true($memory_3)) {goto label_3;}
#line 336
$memory_2 = $memory_0->{'name'};
#line 336
$memory_4 = "TRUE";
#line 336
$memory_2 = c_rt_lib::to_nl($memory_2 eq $memory_4);
#line 336
undef($memory_4);
#line 336
label_3:
#line 336
undef($memory_3);
#line 336
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 336
if (c_rt_lib::check_true($memory_2)) {goto label_2;}
#line 337
$memory_3 = "c_rt_lib_NL.get_true_nl()";
#line 337
$memory_1 = $memory_3;
#line 337
undef($memory_3);
#line 338
goto label_1;
#line 338
label_2:
#line 338
$memory_2 = $memory_0->{'src'};
#line 338
$memory_2 = c_rt_lib::ov_is($memory_2, 'emp');
#line 338
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 338
if (c_rt_lib::check_true($memory_3)) {goto label_5;}
#line 338
$memory_2 = $memory_0->{'name'};
#line 338
$memory_4 = "FALSE";
#line 338
$memory_2 = c_rt_lib::to_nl($memory_2 eq $memory_4);
#line 338
undef($memory_4);
#line 338
label_5:
#line 338
undef($memory_3);
#line 338
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 338
if (c_rt_lib::check_true($memory_2)) {goto label_4;}
#line 339
$memory_3 = "c_rt_lib_NL.get_false_nl()";
#line 339
$memory_1 = $memory_3;
#line 339
undef($memory_3);
#line 340
goto label_1;
#line 340
label_4:
#line 341
$memory_3 = $memory_0->{'src'};
#line 341
$memory_4 = c_rt_lib::ov_is($memory_3, 'arg');
#line 341
if (c_rt_lib::check_true($memory_4)) {goto label_7;}
#line 343
$memory_4 = c_rt_lib::ov_is($memory_3, 'emp');
#line 343
if (c_rt_lib::check_true($memory_4)) {goto label_8;}
#line 343
$memory_4 = "NOMATCHALERT";
#line 343
$memory_4 = [$memory_4,$memory_3];
#line 343
die(dfile::ssave($memory_4));
#line 341
label_7:
#line 341
$memory_5 = c_rt_lib::ov_as($memory_3, 'arg');
#line 342
$memory_6 = "c_rt_lib_NL.ov_mk_arg_nl(new ImmString(\"";
#line 342
$memory_8 = $memory_0->{'name'};
#line 342
$memory_7 = generator_java_priv::escape_string($memory_8);
#line 342
undef($memory_8);
#line 342
$memory_6 = $memory_6 . $memory_7;
#line 342
undef($memory_7);
#line 342
$memory_7 = "\"), ";
#line 342
$memory_6 = $memory_6 . $memory_7;
#line 342
undef($memory_7);
#line 342
$memory_7 = generator_java_priv::print_register($memory_5);
#line 342
$memory_6 = $memory_6 . $memory_7;
#line 342
undef($memory_7);
#line 342
$memory_7 = ")";
#line 342
$memory_6 = $memory_6 . $memory_7;
#line 342
undef($memory_7);
#line 342
$memory_1 = $memory_6;
#line 342
undef($memory_6);
#line 342
undef($memory_5);
#line 343
goto label_6;
#line 343
label_8:
#line 344
$memory_5 = "c_rt_lib_NL.ov_mk_none_nl(new ImmString(\"";
#line 344
$memory_7 = $memory_0->{'name'};
#line 344
$memory_6 = generator_java_priv::escape_string($memory_7);
#line 344
undef($memory_7);
#line 344
$memory_5 = $memory_5 . $memory_6;
#line 344
undef($memory_6);
#line 344
$memory_6 = "\"))";
#line 344
$memory_5 = $memory_5 . $memory_6;
#line 344
undef($memory_6);
#line 344
$memory_1 = $memory_5;
#line 344
undef($memory_5);
#line 345
goto label_6;
#line 345
label_6:
#line 345
undef($memory_3);
#line 345
undef($memory_4);
#line 346
goto label_1;
#line 346
label_1:
#line 346
undef($memory_2);
#line 347
$memory_3 = $memory_0->{'dest'};
#line 347
$memory_2 = generator_java_priv::print_register_setter($memory_3, $memory_1);
#line 347
undef($memory_3);
#line 347
$memory_3 = ";";
#line 347
$memory_2 = $memory_2 . $memory_3;
#line 347
undef($memory_3);
#line 347
undef($memory_0);
#line 347
undef($memory_1);
#line 347
return $memory_2;
#line 347
undef($memory_2);
#line 347
undef($memory_1);
#line 347
undef($memory_0);
#line 347
return;
}

sub generator_java_priv::print_register($) {
my $memory_0;my $memory_1;$memory_0 = $_[0];
#line 351
$memory_1 = "___nl__";
#line 351
$memory_1 = $memory_1 . $memory_0;
#line 351
undef($memory_0);
#line 351
return $memory_1;
#line 351
undef($memory_1);
#line 351
undef($memory_0);
#line 351
return;
}

sub generator_java_priv::print_register_getter($) {
my $memory_0;my $memory_1;my $memory_2;$memory_0 = $_[0];
#line 355
$memory_1 = generator_java_priv::print_register($memory_0);
#line 355
$memory_2 = generator_java_priv::print_getter();
#line 355
$memory_1 = $memory_1 . $memory_2;
#line 355
undef($memory_2);
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

sub generator_java_priv::__print_getter() {
my $memory_0;
#line 359
$memory_0 = ".getValue()";
#line 359
return $memory_0;
#line 359
undef($memory_0);
#line 359
return;
}

my $_print_getter;
sub generator_java_priv::print_getter() {
	$_print_getter = generator_java_priv::__print_getter() unless defined $_print_getter;
	return $_print_getter;
}

sub generator_java_priv::print_register_setter($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;$memory_0 = $_[0];$memory_1 = $_[1];
#line 363
$memory_2 = "";
#line 363
$memory_2 = c_rt_lib::to_nl($memory_0 eq $memory_2);
#line 363
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 363
if (c_rt_lib::check_true($memory_2)) {goto label_2;}
#line 363
$memory_3 = "";
#line 363
$memory_3 = $memory_1 . $memory_3;
#line 363
undef($memory_0);
#line 363
undef($memory_1);
#line 363
undef($memory_2);
#line 363
return $memory_3;
#line 363
undef($memory_3);
#line 363
goto label_2;
#line 363
label_2:
#line 363
undef($memory_2);
#line 364
$memory_2 = generator_java_priv::print_register($memory_0);
#line 364
$memory_3 = ".setValue(";
#line 364
$memory_2 = $memory_2 . $memory_3;
#line 364
undef($memory_3);
#line 364
$memory_2 = $memory_2 . $memory_1;
#line 364
$memory_3 = ")";
#line 364
$memory_2 = $memory_2 . $memory_3;
#line 364
undef($memory_3);
#line 364
undef($memory_0);
#line 364
undef($memory_1);
#line 364
return $memory_2;
#line 364
undef($memory_2);
#line 364
undef($memory_0);
#line 364
undef($memory_1);
#line 364
return;
}

sub generator_java_priv::print_return($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;$memory_0 = $_[0];
#line 368
$memory_1 = "";
#line 369
$memory_2 = c_rt_lib::ov_is($memory_0, 'val');
#line 369
if (c_rt_lib::check_true($memory_2)) {goto label_2;}
#line 371
$memory_2 = c_rt_lib::ov_is($memory_0, 'emp');
#line 371
if (c_rt_lib::check_true($memory_2)) {goto label_3;}
#line 371
$memory_2 = "NOMATCHALERT";
#line 371
$memory_2 = [$memory_2,$memory_0];
#line 371
die(dfile::ssave($memory_2));
#line 369
label_2:
#line 369
$memory_3 = c_rt_lib::ov_as($memory_0, 'val');
#line 370
$memory_4 = "return ";
#line 370
$memory_5 = generator_java_priv::print_register_getter($memory_3);
#line 370
$memory_4 = $memory_4 . $memory_5;
#line 370
undef($memory_5);
#line 370
$memory_5 = ";";
#line 370
$memory_4 = $memory_4 . $memory_5;
#line 370
undef($memory_5);
#line 370
$memory_1 = $memory_4;
#line 370
undef($memory_4);
#line 370
undef($memory_3);
#line 371
goto label_1;
#line 371
label_3:
#line 372
$memory_3 = "return null;";
#line 372
$memory_1 = $memory_3;
#line 372
undef($memory_3);
#line 373
goto label_1;
#line 373
label_1:
#line 373
undef($memory_2);
#line 374
$memory_2 = "if(true) ";
#line 374
$memory_2 = $memory_2 . $memory_1;
#line 374
undef($memory_0);
#line 374
undef($memory_1);
#line 374
return $memory_2;
#line 374
undef($memory_2);
#line 374
undef($memory_1);
#line 374
undef($memory_0);
#line 374
return;
}

sub generator_java_priv::print_una_op($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;$memory_0 = $_[0];
#line 378
$memory_1 = "";
#line 379
$memory_2 = $memory_0->{'op'};
#line 379
$memory_3 = "!";
#line 379
$memory_2 = c_rt_lib::to_nl($memory_2 eq $memory_3);
#line 379
undef($memory_3);
#line 379
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 379
if (c_rt_lib::check_true($memory_2)) {goto label_2;}
#line 380
$memory_3 = "c_rt_lib_NL.native_to_nl_nl(!c_rt_lib_NL.check_true_native_nl(";
#line 380
$memory_5 = $memory_0->{'src'};
#line 380
$memory_4 = generator_java_priv::print_register($memory_5);
#line 380
undef($memory_5);
#line 380
$memory_3 = $memory_3 . $memory_4;
#line 380
undef($memory_4);
#line 380
$memory_4 = "))";
#line 380
$memory_3 = $memory_3 . $memory_4;
#line 380
undef($memory_4);
#line 380
$memory_1 = $memory_1 . $memory_3;
#line 380
undef($memory_3);
#line 381
goto label_1;
#line 381
label_2:
#line 382
$memory_3 = "new ImmDouble(";
#line 382
$memory_4 = $memory_0->{'op'};
#line 382
$memory_3 = $memory_3 . $memory_4;
#line 382
undef($memory_4);
#line 382
$memory_4 = "((ImmDouble)";
#line 382
$memory_3 = $memory_3 . $memory_4;
#line 382
undef($memory_4);
#line 382
$memory_5 = $memory_0->{'src'};
#line 382
$memory_4 = generator_java_priv::print_register_getter($memory_5);
#line 382
undef($memory_5);
#line 382
$memory_3 = $memory_3 . $memory_4;
#line 382
undef($memory_4);
#line 382
$memory_4 = ")";
#line 382
$memory_3 = $memory_3 . $memory_4;
#line 382
undef($memory_4);
#line 382
$memory_4 = generator_java_priv::print_getter();
#line 382
$memory_3 = $memory_3 . $memory_4;
#line 382
undef($memory_4);
#line 382
$memory_4 = ")";
#line 382
$memory_3 = $memory_3 . $memory_4;
#line 382
undef($memory_4);
#line 382
$memory_1 = $memory_1 . $memory_3;
#line 382
undef($memory_3);
#line 383
goto label_1;
#line 383
label_1:
#line 383
undef($memory_2);
#line 384
$memory_3 = $memory_0->{'dest'};
#line 384
$memory_2 = generator_java_priv::print_register_setter($memory_3, $memory_1);
#line 384
undef($memory_3);
#line 384
$memory_3 = ";";
#line 384
$memory_2 = $memory_2 . $memory_3;
#line 384
undef($memory_3);
#line 384
undef($memory_0);
#line 384
undef($memory_1);
#line 384
return $memory_2;
#line 384
undef($memory_2);
#line 384
undef($memory_1);
#line 384
undef($memory_0);
#line 384
return;
}
