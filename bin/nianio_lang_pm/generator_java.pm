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
label_16:
#line 20
$memory_7 = c_rt_lib::to_nl($memory_4 >= $memory_6);
#line 20
if (c_rt_lib::check_true($memory_7)) {goto label_27;}
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
goto label_16;
#line 20
label_27:
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
label_17:
#line 33
$memory_7 = c_rt_lib::to_nl($memory_4 >= $memory_6);
#line 33
if (c_rt_lib::check_true($memory_7)) {goto label_35;}
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
goto label_17;
#line 35
label_35:
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
if (c_rt_lib::check_true($memory_3)) {goto label_9;}
#line 54
$memory_3 = c_rt_lib::ov_is($memory_2, 'priv');
#line 54
if (c_rt_lib::check_true($memory_3)) {goto label_11;}
#line 54
$memory_3 = "NOMATCHALERT";
#line 54
$memory_3 = [$memory_3,$memory_2];
#line 54
die(dfile::ssave($memory_3));
#line 53
label_9:
#line 54
goto label_16;
#line 54
label_11:
#line 55
$memory_4 = "_priv";
#line 55
$memory_1 = $memory_4;
#line 55
undef($memory_4);
#line 56
goto label_16;
#line 56
label_16:
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
if (c_rt_lib::check_true($memory_3)) {goto label_9;}
#line 64
$memory_3 = c_rt_lib::ov_is($memory_2, 'priv');
#line 64
if (c_rt_lib::check_true($memory_3)) {goto label_14;}
#line 64
$memory_3 = "NOMATCHALERT";
#line 64
$memory_3 = [$memory_3,$memory_2];
#line 64
die(dfile::ssave($memory_3));
#line 62
label_9:
#line 63
$memory_4 = "public";
#line 63
$memory_1 = $memory_4;
#line 63
undef($memory_4);
#line 64
goto label_19;
#line 64
label_14:
#line 65
$memory_4 = "private";
#line 65
$memory_1 = $memory_4;
#line 65
undef($memory_4);
#line 66
goto label_19;
#line 66
label_19:
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
#line 78
$memory_2 = $memory_0->{'args_type'};
#line 78
$memory_1 = array::len($memory_2);
#line 78
undef($memory_2);
#line 78
$memory_2 = 0;
#line 78
$memory_1 = c_rt_lib::to_nl($memory_1 > $memory_2);
#line 78
undef($memory_2);
#line 78
$memory_1 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_1));
#line 78
if (c_rt_lib::check_true($memory_1)) {goto label_14;}
#line 78
$memory_2 = c_rt_lib::to_nl(0);
#line 78
undef($memory_0);
#line 78
undef($memory_1);
#line 78
return $memory_2;
#line 78
undef($memory_2);
#line 78
goto label_14;
#line 78
label_14:
#line 78
undef($memory_1);
#line 79
$memory_1 = $memory_0->{'annotation'};
#line 79
$memory_1 = c_rt_lib::ov_is($memory_1, 'math');
#line 79
$memory_1 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_1));
#line 79
if (c_rt_lib::check_true($memory_1)) {goto label_26;}
#line 79
$memory_2 = c_rt_lib::to_nl(1);
#line 79
undef($memory_0);
#line 79
undef($memory_1);
#line 79
return $memory_2;
#line 79
undef($memory_2);
#line 79
goto label_26;
#line 79
label_26:
#line 79
undef($memory_1);
#line 80
$memory_1 = c_rt_lib::to_nl(0);
#line 82
$memory_3 = $memory_0->{'commands'};
#line 82
$memory_5 = 0;
#line 82
$memory_6 = 1;
#line 82
$memory_7 = c_rt_lib::array_len($memory_3);
#line 82
label_33:
#line 82
$memory_8 = c_rt_lib::to_nl($memory_5 >= $memory_7);
#line 82
if (c_rt_lib::check_true($memory_8)) {goto label_195;}
#line 82
$memory_4 = $memory_3->[$memory_5];
#line 83
$memory_9 = $memory_4->{'cmd'};
#line 84
$memory_10 = $memory_9;
#line 84
$memory_10 = c_rt_lib::ov_is($memory_10, 'call');
#line 84
$memory_10 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_10));
#line 84
if (c_rt_lib::check_true($memory_10)) {goto label_82;}
#line 85
$memory_11 = $memory_9;
#line 85
$memory_11 = c_rt_lib::ov_as($memory_11, 'call');
#line 86
$memory_12 = $memory_11->{'fun_name'};
#line 86
$memory_13 = "sigleton_do_not_use_without_approval";
#line 86
$memory_12 = c_rt_lib::to_nl($memory_12 eq $memory_13);
#line 86
undef($memory_13);
#line 86
$memory_12 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_12));
#line 86
$memory_12 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_12));
#line 86
if (c_rt_lib::check_true($memory_12)) {goto label_57;}
#line 86
undef($memory_9);
#line 86
undef($memory_10);
#line 86
undef($memory_11);
#line 86
undef($memory_12);
#line 86
goto label_192;
#line 86
goto label_57;
#line 86
label_57:
#line 86
undef($memory_12);
#line 87
$memory_12 = $memory_11->{'mod'};
#line 87
$memory_13 = "singleton";
#line 87
$memory_12 = c_rt_lib::to_nl($memory_12 eq $memory_13);
#line 87
undef($memory_13);
#line 87
$memory_12 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_12));
#line 87
$memory_12 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_12));
#line 87
if (c_rt_lib::check_true($memory_12)) {goto label_72;}
#line 87
undef($memory_9);
#line 87
undef($memory_10);
#line 87
undef($memory_11);
#line 87
undef($memory_12);
#line 87
goto label_192;
#line 87
goto label_72;
#line 87
label_72:
#line 87
undef($memory_12);
#line 88
$memory_12 = c_rt_lib::to_nl(1);
#line 88
$memory_1 = $memory_12;
#line 88
undef($memory_12);
#line 89
$memory_12 = $memory_11->{'dest'};
#line 89
$memory_2 = $memory_12;
#line 89
undef($memory_12);
#line 89
undef($memory_11);
#line 90
goto label_189;
#line 90
label_82:
#line 90
$memory_10 = $memory_9;
#line 90
$memory_10 = c_rt_lib::ov_is($memory_10, 'return');
#line 90
$memory_10 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_10));
#line 90
if (c_rt_lib::check_true($memory_10)) {goto label_154;}
#line 91
$memory_11 = $memory_1;
#line 91
$memory_11 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_11));
#line 91
$memory_11 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_11));
#line 91
if (c_rt_lib::check_true($memory_11)) {goto label_107;}
#line 91
$memory_12 = c_rt_lib::to_nl(0);
#line 91
undef($memory_0);
#line 91
undef($memory_1);
#line 91
undef($memory_2);
#line 91
undef($memory_3);
#line 91
undef($memory_4);
#line 91
undef($memory_5);
#line 91
undef($memory_6);
#line 91
undef($memory_7);
#line 91
undef($memory_8);
#line 91
undef($memory_9);
#line 91
undef($memory_10);
#line 91
undef($memory_11);
#line 91
return $memory_12;
#line 91
undef($memory_12);
#line 91
goto label_107;
#line 91
label_107:
#line 91
undef($memory_11);
#line 92
$memory_11 = $memory_9;
#line 92
$memory_11 = c_rt_lib::ov_as($memory_11, 'return');
#line 93
$memory_12 = $memory_11;
#line 93
$memory_12 = c_rt_lib::ov_is($memory_12, 'val');
#line 93
$memory_12 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_12));
#line 93
$memory_12 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_12));
#line 93
if (c_rt_lib::check_true($memory_12)) {goto label_133;}
#line 93
$memory_13 = c_rt_lib::to_nl(0);
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
undef($memory_12);
#line 93
return $memory_13;
#line 93
undef($memory_13);
#line 93
goto label_133;
#line 93
label_133:
#line 93
undef($memory_12);
#line 94
$memory_12 = $memory_11;
#line 94
$memory_12 = c_rt_lib::ov_as($memory_12, 'val');
#line 94
$memory_12 = c_rt_lib::to_nl($memory_12 eq $memory_2);
#line 94
undef($memory_0);
#line 94
undef($memory_1);
#line 94
undef($memory_2);
#line 94
undef($memory_3);
#line 94
undef($memory_4);
#line 94
undef($memory_5);
#line 94
undef($memory_6);
#line 94
undef($memory_7);
#line 94
undef($memory_8);
#line 94
undef($memory_9);
#line 94
undef($memory_10);
#line 94
undef($memory_11);
#line 94
return $memory_12;
#line 94
undef($memory_12);
#line 94
undef($memory_11);
#line 95
goto label_189;
#line 95
label_154:
#line 95
$memory_10 = $memory_9;
#line 95
$memory_10 = c_rt_lib::ov_is($memory_10, 'prt_lbl');
#line 95
$memory_10 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_10));
#line 95
if (c_rt_lib::check_true($memory_10)) {goto label_160;}
#line 96
goto label_189;
#line 96
label_160:
#line 96
$memory_10 = $memory_9;
#line 96
$memory_10 = c_rt_lib::ov_is($memory_10, 'clear');
#line 96
$memory_10 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_10));
#line 96
if (c_rt_lib::check_true($memory_10)) {goto label_166;}
#line 97
goto label_189;
#line 97
label_166:
#line 98
$memory_11 = $memory_1;
#line 98
$memory_11 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_11));
#line 98
if (c_rt_lib::check_true($memory_11)) {goto label_186;}
#line 98
$memory_12 = c_rt_lib::to_nl(0);
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
goto label_186;
#line 98
label_186:
#line 98
undef($memory_11);
#line 99
goto label_189;
#line 99
label_189:
#line 99
undef($memory_10);
#line 99
undef($memory_9);
#line 99
label_192:
#line 100
$memory_5 = $memory_5 + $memory_6;
#line 100
goto label_33;
#line 100
label_195:
#line 100
undef($memory_3);
#line 100
undef($memory_4);
#line 100
undef($memory_5);
#line 100
undef($memory_6);
#line 100
undef($memory_7);
#line 100
undef($memory_8);
#line 101
$memory_3 = c_rt_lib::to_nl(0);
#line 101
undef($memory_0);
#line 101
undef($memory_1);
#line 101
undef($memory_2);
#line 101
return $memory_3;
#line 101
undef($memory_3);
#line 101
undef($memory_1);
#line 101
undef($memory_2);
#line 101
undef($memory_0);
#line 101
return;
}

sub generator_java_priv::print_function_or_singleton($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;$memory_0 = $_[0];$memory_1 = $_[1];
#line 105
$memory_2 = generator_java_priv::is_singleton_use_function($memory_0);
#line 105
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 105
if (c_rt_lib::check_true($memory_2)) {goto label_60;}
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
#line 110
$memory_6 = generator_java_priv::print_function($memory_3, $memory_1);
#line 111
$memory_7 = "private static Imm ";
#line 111
$memory_7 = $memory_7 . $memory_5;
#line 111
$memory_8 = " = null;";
#line 111
$memory_7 = $memory_7 . $memory_8;
#line 111
undef($memory_8);
#line 111
$memory_8 = string::lf();
#line 111
$memory_7 = $memory_7 . $memory_8;
#line 111
undef($memory_8);
#line 111
$memory_8 = generator_java_priv::get_function_declaration($memory_0);
#line 111
$memory_7 = $memory_7 . $memory_8;
#line 111
undef($memory_8);
#line 112
$memory_8 = "() throws Exception {
	if (";
#line 112
$memory_7 = $memory_7 . $memory_8;
#line 112
undef($memory_8);
#line 112
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
#line 114
$memory_8 = " = ";
#line 114
$memory_7 = $memory_7 . $memory_8;
#line 114
undef($memory_8);
#line 114
$memory_7 = $memory_7 . $memory_4;
#line 114
$memory_8 = "();
	}
	return ";
#line 114
$memory_7 = $memory_7 . $memory_8;
#line 114
undef($memory_8);
#line 114
$memory_7 = $memory_7 . $memory_5;
#line 116
$memory_8 = ";
}";
#line 116
$memory_7 = $memory_7 . $memory_8;
#line 116
undef($memory_8);
#line 116
$memory_6 = $memory_6 . $memory_7;
#line 116
undef($memory_7);
#line 118
undef($memory_0);
#line 118
undef($memory_1);
#line 118
undef($memory_2);
#line 118
undef($memory_3);
#line 118
undef($memory_4);
#line 118
undef($memory_5);
#line 118
return $memory_6;
#line 118
undef($memory_3);
#line 118
undef($memory_4);
#line 118
undef($memory_5);
#line 118
undef($memory_6);
#line 119
goto label_68;
#line 119
label_60:
#line 120
$memory_3 = generator_java_priv::print_function($memory_0, $memory_1);
#line 120
undef($memory_0);
#line 120
undef($memory_1);
#line 120
undef($memory_2);
#line 120
return $memory_3;
#line 120
undef($memory_3);
#line 121
goto label_68;
#line 121
label_68:
#line 121
undef($memory_2);
#line 121
undef($memory_0);
#line 121
undef($memory_1);
#line 121
return;
}

sub generator_java_priv::print_function($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;$memory_0 = $_[0];$memory_1 = $_[1];
#line 125
$memory_2 = string::lf();
#line 125
$memory_3 = generator_java_priv::get_function_declaration($memory_0);
#line 125
$memory_2 = $memory_2 . $memory_3;
#line 125
undef($memory_3);
#line 125
$memory_3 = "(";
#line 125
$memory_2 = $memory_2 . $memory_3;
#line 125
undef($memory_3);
#line 126
$memory_4 = $memory_0->{'args_type'};
#line 126
$memory_3 = array::len($memory_4);
#line 126
undef($memory_4);
#line 126
$memory_4 = 0;
#line 126
$memory_5 = 1;
#line 126
label_12:
#line 126
$memory_6 = c_rt_lib::to_nl($memory_4 >= $memory_3);
#line 126
if (c_rt_lib::check_true($memory_6)) {goto label_32;}
#line 127
$memory_7 = 0;
#line 127
$memory_7 = c_rt_lib::to_nl($memory_4 == $memory_7);
#line 127
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 127
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 127
if (c_rt_lib::check_true($memory_7)) {goto label_24;}
#line 127
$memory_8 = ", ";
#line 127
$memory_2 = $memory_2 . $memory_8;
#line 127
undef($memory_8);
#line 127
goto label_24;
#line 127
label_24:
#line 127
undef($memory_7);
#line 128
$memory_7 = "ImmRef ___arg__";
#line 128
$memory_7 = $memory_7 . $memory_4;
#line 128
$memory_2 = $memory_2 . $memory_7;
#line 128
undef($memory_7);
#line 129
$memory_4 = $memory_4 + $memory_5;
#line 129
goto label_12;
#line 129
label_32:
#line 129
undef($memory_3);
#line 129
undef($memory_4);
#line 129
undef($memory_5);
#line 129
undef($memory_6);
#line 130
$memory_3 = ") throws Exception {";
#line 130
$memory_4 = string::lf();
#line 130
$memory_3 = $memory_3 . $memory_4;
#line 130
undef($memory_4);
#line 130
$memory_2 = $memory_2 . $memory_3;
#line 130
undef($memory_3);
#line 131
$memory_4 = $memory_0->{'args_type'};
#line 131
$memory_3 = array::len($memory_4);
#line 131
undef($memory_4);
#line 131
$memory_4 = 0;
#line 131
$memory_5 = 1;
#line 131
label_48:
#line 131
$memory_6 = c_rt_lib::to_nl($memory_4 >= $memory_3);
#line 131
if (c_rt_lib::check_true($memory_6)) {goto label_94;}
#line 132
$memory_7 = $memory_0->{'args_type'};
#line 132
$memory_7 = $memory_7->[$memory_4];
#line 132
$memory_8 = c_rt_lib::ov_is($memory_7, 'val');
#line 132
if (c_rt_lib::check_true($memory_8)) {goto label_60;}
#line 134
$memory_8 = c_rt_lib::ov_is($memory_7, 'ref');
#line 134
if (c_rt_lib::check_true($memory_8)) {goto label_76;}
#line 134
$memory_8 = "NOMATCHALERT";
#line 134
$memory_8 = [$memory_8,$memory_7];
#line 134
die(dfile::ssave($memory_8));
#line 132
label_60:
#line 133
$memory_9 = "ImmRef ___nl__";
#line 133
$memory_9 = $memory_9 . $memory_4;
#line 133
$memory_10 = " = new ImmRef(___arg__";
#line 133
$memory_9 = $memory_9 . $memory_10;
#line 133
undef($memory_10);
#line 133
$memory_9 = $memory_9 . $memory_4;
#line 133
$memory_10 = generator_java_priv::print_getter();
#line 133
$memory_9 = $memory_9 . $memory_10;
#line 133
undef($memory_10);
#line 133
$memory_10 = ");";
#line 133
$memory_9 = $memory_9 . $memory_10;
#line 133
undef($memory_10);
#line 133
$memory_2 = $memory_2 . $memory_9;
#line 133
undef($memory_9);
#line 134
goto label_89;
#line 134
label_76:
#line 135
$memory_9 = "ImmRef ___nl__";
#line 135
$memory_9 = $memory_9 . $memory_4;
#line 135
$memory_10 = " = ___arg__";
#line 135
$memory_9 = $memory_9 . $memory_10;
#line 135
undef($memory_10);
#line 135
$memory_9 = $memory_9 . $memory_4;
#line 135
$memory_10 = ";";
#line 135
$memory_9 = $memory_9 . $memory_10;
#line 135
undef($memory_10);
#line 135
$memory_2 = $memory_2 . $memory_9;
#line 135
undef($memory_9);
#line 136
goto label_89;
#line 136
label_89:
#line 136
undef($memory_7);
#line 136
undef($memory_8);
#line 137
$memory_4 = $memory_4 + $memory_5;
#line 137
goto label_48;
#line 137
label_94:
#line 137
undef($memory_3);
#line 137
undef($memory_4);
#line 137
undef($memory_5);
#line 137
undef($memory_6);
#line 138
$memory_3 = string::lf();
#line 138
$memory_2 = $memory_2 . $memory_3;
#line 138
undef($memory_3);
#line 139
$memory_4 = $memory_0->{'args_type'};
#line 139
$memory_3 = array::len($memory_4);
#line 139
undef($memory_4);
#line 139
label_105:
#line 139
$memory_4 = $memory_0->{'reg_size'};
#line 139
$memory_4 = c_rt_lib::to_nl($memory_3 < $memory_4);
#line 139
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 139
if (c_rt_lib::check_true($memory_4)) {goto label_124;}
#line 140
$memory_5 = "ImmRef ___nl__";
#line 140
$memory_5 = $memory_5 . $memory_3;
#line 140
$memory_6 = " = new ImmRef(null);";
#line 140
$memory_5 = $memory_5 . $memory_6;
#line 140
undef($memory_6);
#line 140
$memory_6 = string::lf();
#line 140
$memory_5 = $memory_5 . $memory_6;
#line 140
undef($memory_6);
#line 140
$memory_2 = $memory_2 . $memory_5;
#line 140
undef($memory_5);
#line 139
$memory_5 = 1;
#line 139
$memory_3 = $memory_3 + $memory_5;
#line 139
undef($memory_5);
#line 141
goto label_105;
#line 141
label_124:
#line 141
undef($memory_3);
#line 141
undef($memory_4);
#line 142
$memory_3 = "Map<ImmString, Imm> ";
#line 142
$memory_4 = generator_java_priv::print_hash_name();
#line 142
$memory_3 = $memory_3 . $memory_4;
#line 142
undef($memory_4);
#line 142
$memory_4 = ";";
#line 142
$memory_3 = $memory_3 . $memory_4;
#line 142
undef($memory_4);
#line 142
$memory_4 = string::lf();
#line 142
$memory_3 = $memory_3 . $memory_4;
#line 142
undef($memory_4);
#line 142
$memory_2 = $memory_2 . $memory_3;
#line 142
undef($memory_3);
#line 143
$memory_3 = "String label = \"\"; while (true) { switch (label) { default: ";
#line 143
$memory_4 = string::lf();
#line 143
$memory_3 = $memory_3 . $memory_4;
#line 143
undef($memory_4);
#line 143
$memory_2 = $memory_2 . $memory_3;
#line 143
undef($memory_3);
#line 144
$memory_3 = $memory_0->{'commands'};
#line 144
$memory_5 = 0;
#line 144
$memory_6 = 1;
#line 144
$memory_7 = c_rt_lib::array_len($memory_3);
#line 144
label_149:
#line 144
$memory_8 = c_rt_lib::to_nl($memory_5 >= $memory_7);
#line 144
if (c_rt_lib::check_true($memory_8)) {goto label_158;}
#line 144
$memory_4 = $memory_3->[$memory_5];
#line 144
$memory_9 = generator_java_priv::print_command($memory_1, $memory_4);
#line 144
$memory_2 = $memory_2 . $memory_9;
#line 144
undef($memory_9);
#line 144
$memory_5 = $memory_5 + $memory_6;
#line 144
goto label_149;
#line 144
label_158:
#line 144
undef($memory_3);
#line 144
undef($memory_4);
#line 144
undef($memory_5);
#line 144
undef($memory_6);
#line 144
undef($memory_7);
#line 144
undef($memory_8);
#line 145
$memory_3 = "}}}";
#line 145
$memory_3 = $memory_2 . $memory_3;
#line 145
$memory_4 = string::lf();
#line 145
$memory_3 = $memory_3 . $memory_4;
#line 145
undef($memory_4);
#line 145
undef($memory_0);
#line 145
undef($memory_1);
#line 145
undef($memory_2);
#line 145
return $memory_3;
#line 145
undef($memory_3);
#line 145
undef($memory_2);
#line 145
undef($memory_0);
#line 145
undef($memory_1);
#line 145
return;
}

sub generator_java_priv::print_command($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;$memory_0 = $_[0];$memory_1 = $_[1];
#line 150
$memory_3 = $memory_1->{'cmd'};
#line 150
$memory_4 = c_rt_lib::ov_is($memory_3, 'arr_decl');
#line 150
if (c_rt_lib::check_true($memory_4)) {goto label_46;}
#line 152
$memory_4 = c_rt_lib::ov_is($memory_3, 'hash_decl');
#line 152
if (c_rt_lib::check_true($memory_4)) {goto label_62;}
#line 155
$memory_4 = c_rt_lib::ov_is($memory_3, 'call');
#line 155
if (c_rt_lib::check_true($memory_4)) {goto label_85;}
#line 157
$memory_4 = c_rt_lib::ov_is($memory_3, 'func');
#line 157
if (c_rt_lib::check_true($memory_4)) {goto label_105;}
#line 160
$memory_4 = c_rt_lib::ov_is($memory_3, 'una_op');
#line 160
if (c_rt_lib::check_true($memory_4)) {goto label_128;}
#line 162
$memory_4 = c_rt_lib::ov_is($memory_3, 'bin_op');
#line 162
if (c_rt_lib::check_true($memory_4)) {goto label_135;}
#line 164
$memory_4 = c_rt_lib::ov_is($memory_3, 'ov_is');
#line 164
if (c_rt_lib::check_true($memory_4)) {goto label_142;}
#line 167
$memory_4 = c_rt_lib::ov_is($memory_3, 'ov_as');
#line 167
if (c_rt_lib::check_true($memory_4)) {goto label_172;}
#line 170
$memory_4 = c_rt_lib::ov_is($memory_3, 'return');
#line 170
if (c_rt_lib::check_true($memory_4)) {goto label_202;}
#line 172
$memory_4 = c_rt_lib::ov_is($memory_3, 'die');
#line 172
if (c_rt_lib::check_true($memory_4)) {goto label_209;}
#line 174
$memory_4 = c_rt_lib::ov_is($memory_3, 'move');
#line 174
if (c_rt_lib::check_true($memory_4)) {goto label_216;}
#line 176
$memory_4 = c_rt_lib::ov_is($memory_3, 'load_const');
#line 176
if (c_rt_lib::check_true($memory_4)) {goto label_232;}
#line 178
$memory_4 = c_rt_lib::ov_is($memory_3, 'get_frm_idx');
#line 178
if (c_rt_lib::check_true($memory_4)) {goto label_252;}
#line 183
$memory_4 = c_rt_lib::ov_is($memory_3, 'set_at_idx');
#line 183
if (c_rt_lib::check_true($memory_4)) {goto label_298;}
#line 189
$memory_4 = c_rt_lib::ov_is($memory_3, 'get_val');
#line 189
if (c_rt_lib::check_true($memory_4)) {goto label_368;}
#line 191
$memory_4 = c_rt_lib::ov_is($memory_3, 'set_val');
#line 191
if (c_rt_lib::check_true($memory_4)) {goto label_382;}
#line 195
$memory_4 = c_rt_lib::ov_is($memory_3, 'ov_mk');
#line 195
if (c_rt_lib::check_true($memory_4)) {goto label_413;}
#line 197
$memory_4 = c_rt_lib::ov_is($memory_3, 'prt_lbl');
#line 197
if (c_rt_lib::check_true($memory_4)) {goto label_420;}
#line 199
$memory_4 = c_rt_lib::ov_is($memory_3, 'if_goto');
#line 199
if (c_rt_lib::check_true($memory_4)) {goto label_431;}
#line 202
$memory_4 = c_rt_lib::ov_is($memory_3, 'goto');
#line 202
if (c_rt_lib::check_true($memory_4)) {goto label_454;}
#line 204
$memory_4 = c_rt_lib::ov_is($memory_3, 'clear');
#line 204
if (c_rt_lib::check_true($memory_4)) {goto label_461;}
#line 204
$memory_4 = "NOMATCHALERT";
#line 204
$memory_4 = [$memory_4,$memory_3];
#line 204
die(dfile::ssave($memory_4));
#line 150
label_46:
#line 150
$memory_5 = c_rt_lib::ov_as($memory_3, 'arr_decl');
#line 151
$memory_7 = $memory_5->{'dest'};
#line 151
$memory_9 = $memory_5->{'src'};
#line 151
$memory_8 = generator_java_priv::print_arr($memory_9);
#line 151
undef($memory_9);
#line 151
$memory_6 = generator_java_priv::print_register_setter($memory_7, $memory_8);
#line 151
undef($memory_8);
#line 151
undef($memory_7);
#line 151
$memory_7 = ";";
#line 151
$memory_6 = $memory_6 . $memory_7;
#line 151
undef($memory_7);
#line 151
$memory_2 = $memory_6;
#line 151
undef($memory_6);
#line 151
undef($memory_5);
#line 152
goto label_473;
#line 152
label_62:
#line 152
$memory_5 = c_rt_lib::ov_as($memory_3, 'hash_decl');
#line 153
$memory_6 = generator_java_priv::print_hash($memory_5);
#line 153
$memory_2 = $memory_6;
#line 153
undef($memory_6);
#line 154
$memory_7 = $memory_5->{'dest'};
#line 154
$memory_8 = "new ImmMap(";
#line 154
$memory_9 = generator_java_priv::print_hash_name();
#line 154
$memory_8 = $memory_8 . $memory_9;
#line 154
undef($memory_9);
#line 154
$memory_9 = ")";
#line 154
$memory_8 = $memory_8 . $memory_9;
#line 154
undef($memory_9);
#line 154
$memory_6 = generator_java_priv::print_register_setter($memory_7, $memory_8);
#line 154
undef($memory_8);
#line 154
undef($memory_7);
#line 154
$memory_7 = ";";
#line 154
$memory_6 = $memory_6 . $memory_7;
#line 154
undef($memory_7);
#line 154
$memory_2 = $memory_2 . $memory_6;
#line 154
undef($memory_6);
#line 154
undef($memory_5);
#line 155
goto label_473;
#line 155
label_85:
#line 155
$memory_5 = c_rt_lib::ov_as($memory_3, 'call');
#line 156
$memory_7 = $memory_5->{'dest'};
#line 156
$memory_9 = $memory_5->{'mod'};
#line 156
$memory_10 = $memory_5->{'fun_name'};
#line 156
$memory_11 = $memory_5->{'args'};
#line 156
$memory_8 = generator_java_priv::print_call($memory_0, $memory_9, $memory_10, $memory_11);
#line 156
undef($memory_11);
#line 156
undef($memory_10);
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
$memory_2 = $memory_6;
#line 156
undef($memory_6);
#line 156
undef($memory_5);
#line 157
goto label_473;
#line 157
label_105:
#line 157
$memory_5 = c_rt_lib::ov_as($memory_3, 'func');
#line 158
$memory_7 = $memory_5->{'dest'};
#line 158
$memory_10 = $memory_5->{'module'};
#line 158
$memory_9 = generator_java_priv::get_class_name($memory_10);
#line 158
undef($memory_10);
#line 158
$memory_10 = $memory_5->{'name'};
#line 158
$memory_11 = "_nl";
#line 158
$memory_10 = $memory_10 . $memory_11;
#line 158
undef($memory_11);
#line 158
$memory_8 = {module => $memory_9,name => $memory_10,};
#line 158
undef($memory_9);
#line 158
undef($memory_10);
#line 158
$memory_6 = generator_java_priv::print_const_hash($memory_7, $memory_8);
#line 158
undef($memory_8);
#line 158
undef($memory_7);
#line 159
$memory_7 = ";";
#line 159
$memory_6 = $memory_6 . $memory_7;
#line 159
undef($memory_7);
#line 159
$memory_2 = $memory_6;
#line 159
undef($memory_6);
#line 159
undef($memory_5);
#line 160
goto label_473;
#line 160
label_128:
#line 160
$memory_5 = c_rt_lib::ov_as($memory_3, 'una_op');
#line 161
$memory_6 = generator_java_priv::print_una_op($memory_5);
#line 161
$memory_2 = $memory_6;
#line 161
undef($memory_6);
#line 161
undef($memory_5);
#line 162
goto label_473;
#line 162
label_135:
#line 162
$memory_5 = c_rt_lib::ov_as($memory_3, 'bin_op');
#line 163
$memory_6 = generator_java_priv::print_bin_op($memory_5);
#line 163
$memory_2 = $memory_6;
#line 163
undef($memory_6);
#line 163
undef($memory_5);
#line 164
goto label_473;
#line 164
label_142:
#line 164
$memory_5 = c_rt_lib::ov_as($memory_3, 'ov_is');
#line 165
$memory_7 = $memory_5->{'dest'};
#line 165
$memory_8 = "c_rt_lib_NL.ov_is_nl(";
#line 165
$memory_10 = $memory_5->{'src'};
#line 165
$memory_9 = generator_java_priv::print_register($memory_10);
#line 165
undef($memory_10);
#line 165
$memory_8 = $memory_8 . $memory_9;
#line 165
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
goto label_473;
#line 167
label_172:
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
#line 169
$memory_9 = ", new ImmRef(new ImmString(\"";
#line 169
$memory_8 = $memory_8 . $memory_9;
#line 169
undef($memory_9);
#line 169
$memory_10 = $memory_5->{'type'};
#line 169
$memory_9 = generator_java_priv::escape_string($memory_10);
#line 169
undef($memory_10);
#line 169
$memory_8 = $memory_8 . $memory_9;
#line 169
undef($memory_9);
#line 169
$memory_9 = "\")))";
#line 169
$memory_8 = $memory_8 . $memory_9;
#line 169
undef($memory_9);
#line 169
$memory_6 = generator_java_priv::print_register_setter($memory_7, $memory_8);
#line 169
undef($memory_8);
#line 169
undef($memory_7);
#line 169
$memory_7 = ";";
#line 169
$memory_6 = $memory_6 . $memory_7;
#line 169
undef($memory_7);
#line 169
$memory_2 = $memory_6;
#line 169
undef($memory_6);
#line 169
undef($memory_5);
#line 170
goto label_473;
#line 170
label_202:
#line 170
$memory_5 = c_rt_lib::ov_as($memory_3, 'return');
#line 171
$memory_6 = generator_java_priv::print_return($memory_5);
#line 171
$memory_2 = $memory_6;
#line 171
undef($memory_6);
#line 171
undef($memory_5);
#line 172
goto label_473;
#line 172
label_209:
#line 172
$memory_5 = c_rt_lib::ov_as($memory_3, 'die');
#line 173
$memory_6 = "c_rt_lib_NL.die_nl();";
#line 173
$memory_2 = $memory_6;
#line 173
undef($memory_6);
#line 173
undef($memory_5);
#line 174
goto label_473;
#line 174
label_216:
#line 174
$memory_5 = c_rt_lib::ov_as($memory_3, 'move');
#line 175
$memory_7 = $memory_5->{'dest'};
#line 175
$memory_9 = $memory_5->{'src'};
#line 175
$memory_8 = generator_java_priv::print_register_getter($memory_9);
#line 175
undef($memory_9);
#line 175
$memory_6 = generator_java_priv::print_register_setter($memory_7, $memory_8);
#line 175
undef($memory_8);
#line 175
undef($memory_7);
#line 175
$memory_7 = ";";
#line 175
$memory_6 = $memory_6 . $memory_7;
#line 175
undef($memory_7);
#line 175
$memory_2 = $memory_6;
#line 175
undef($memory_6);
#line 175
undef($memory_5);
#line 176
goto label_473;
#line 176
label_232:
#line 176
$memory_5 = c_rt_lib::ov_as($memory_3, 'load_const');
#line 177
$memory_7 = $memory_5->{'dest'};
#line 177
$memory_10 = $memory_5->{'dest'};
#line 177
$memory_9 = generator_java_priv::print_register($memory_10);
#line 177
undef($memory_10);
#line 177
$memory_10 = $memory_5->{'val'};
#line 177
$memory_8 = generator_java_priv::print_const_value($memory_9, $memory_10);
#line 177
undef($memory_10);
#line 177
undef($memory_9);
#line 177
$memory_6 = generator_java_priv::print_register_setter($memory_7, $memory_8);
#line 177
undef($memory_8);
#line 177
undef($memory_7);
#line 177
$memory_7 = ";";
#line 177
$memory_6 = $memory_6 . $memory_7;
#line 177
undef($memory_7);
#line 177
$memory_2 = $memory_6;
#line 177
undef($memory_6);
#line 177
undef($memory_5);
#line 178
goto label_473;
#line 178
label_252:
#line 178
$memory_5 = c_rt_lib::ov_as($memory_3, 'get_frm_idx');
#line 179
$memory_6 = "((ImmArray)";
#line 179
$memory_8 = $memory_5->{'src'};
#line 179
$memory_7 = generator_java_priv::print_register_getter($memory_8);
#line 179
undef($memory_8);
#line 179
$memory_6 = $memory_6 . $memory_7;
#line 179
undef($memory_7);
#line 179
$memory_7 = ")";
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
$memory_2 = $memory_6;
#line 179
undef($memory_6);
#line 180
$memory_6 = "[((ImmDouble)(";
#line 180
$memory_8 = $memory_5->{'idx'};
#line 180
$memory_7 = generator_java_priv::print_register_getter($memory_8);
#line 180
undef($memory_8);
#line 180
$memory_6 = $memory_6 . $memory_7;
#line 180
undef($memory_7);
#line 180
$memory_7 = "))";
#line 180
$memory_6 = $memory_6 . $memory_7;
#line 180
undef($memory_7);
#line 180
$memory_7 = generator_java_priv::print_getter();
#line 180
$memory_6 = $memory_6 . $memory_7;
#line 180
undef($memory_7);
#line 180
$memory_7 = generator_java_priv::print_int_value();
#line 180
$memory_6 = $memory_6 . $memory_7;
#line 180
undef($memory_7);
#line 181
$memory_7 = "]";
#line 181
$memory_6 = $memory_6 . $memory_7;
#line 181
undef($memory_7);
#line 181
$memory_2 = $memory_2 . $memory_6;
#line 181
undef($memory_6);
#line 182
$memory_7 = $memory_5->{'dest'};
#line 182
$memory_6 = generator_java_priv::print_register_setter($memory_7, $memory_2);
#line 182
undef($memory_7);
#line 182
$memory_7 = ";";
#line 182
$memory_6 = $memory_6 . $memory_7;
#line 182
undef($memory_7);
#line 182
$memory_2 = $memory_6;
#line 182
undef($memory_6);
#line 182
undef($memory_5);
#line 183
goto label_473;
#line 183
label_298:
#line 183
$memory_5 = c_rt_lib::ov_as($memory_3, 'set_at_idx');
#line 184
$memory_7 = $memory_5->{'src'};
#line 184
$memory_8 = "c_rt_lib_NL.clone_nl(";
#line 184
$memory_10 = $memory_5->{'src'};
#line 184
$memory_9 = generator_java_priv::print_register_getter($memory_10);
#line 184
undef($memory_10);
#line 184
$memory_8 = $memory_8 . $memory_9;
#line 184
undef($memory_9);
#line 185
$memory_9 = ")";
#line 185
$memory_8 = $memory_8 . $memory_9;
#line 185
undef($memory_9);
#line 185
$memory_6 = generator_java_priv::print_register_setter($memory_7, $memory_8);
#line 185
undef($memory_8);
#line 185
undef($memory_7);
#line 185
$memory_7 = ";";
#line 185
$memory_6 = $memory_6 . $memory_7;
#line 185
undef($memory_7);
#line 185
$memory_7 = string::lf();
#line 185
$memory_6 = $memory_6 . $memory_7;
#line 185
undef($memory_7);
#line 185
$memory_2 = $memory_6;
#line 185
undef($memory_6);
#line 186
$memory_6 = "((ImmArray)";
#line 186
$memory_8 = $memory_5->{'src'};
#line 186
$memory_7 = generator_java_priv::print_register_getter($memory_8);
#line 186
undef($memory_8);
#line 186
$memory_6 = $memory_6 . $memory_7;
#line 186
undef($memory_7);
#line 186
$memory_7 = ")";
#line 186
$memory_6 = $memory_6 . $memory_7;
#line 186
undef($memory_7);
#line 186
$memory_7 = generator_java_priv::print_getter();
#line 186
$memory_6 = $memory_6 . $memory_7;
#line 186
undef($memory_7);
#line 186
$memory_7 = "[";
#line 186
$memory_6 = $memory_6 . $memory_7;
#line 186
undef($memory_7);
#line 186
$memory_2 = $memory_2 . $memory_6;
#line 186
undef($memory_6);
#line 187
$memory_6 = "((ImmDouble)";
#line 187
$memory_8 = $memory_5->{'idx'};
#line 187
$memory_7 = generator_java_priv::print_register_getter($memory_8);
#line 187
undef($memory_8);
#line 187
$memory_6 = $memory_6 . $memory_7;
#line 187
undef($memory_7);
#line 187
$memory_7 = ")";
#line 187
$memory_6 = $memory_6 . $memory_7;
#line 187
undef($memory_7);
#line 187
$memory_7 = generator_java_priv::print_getter();
#line 187
$memory_6 = $memory_6 . $memory_7;
#line 187
undef($memory_7);
#line 187
$memory_7 = generator_java_priv::print_int_value();
#line 187
$memory_6 = $memory_6 . $memory_7;
#line 187
undef($memory_7);
#line 188
$memory_7 = "] = ";
#line 188
$memory_6 = $memory_6 . $memory_7;
#line 188
undef($memory_7);
#line 188
$memory_8 = $memory_5->{'val'};
#line 188
$memory_7 = generator_java_priv::print_register_getter($memory_8);
#line 188
undef($memory_8);
#line 188
$memory_6 = $memory_6 . $memory_7;
#line 188
undef($memory_7);
#line 188
$memory_7 = ";";
#line 188
$memory_6 = $memory_6 . $memory_7;
#line 188
undef($memory_7);
#line 188
$memory_2 = $memory_2 . $memory_6;
#line 188
undef($memory_6);
#line 188
undef($memory_5);
#line 189
goto label_473;
#line 189
label_368:
#line 189
$memory_5 = c_rt_lib::ov_as($memory_3, 'get_val');
#line 190
$memory_7 = $memory_5->{'dest'};
#line 190
$memory_8 = generator_java_priv::print_get_hash_value($memory_5);
#line 190
$memory_6 = generator_java_priv::print_register_setter($memory_7, $memory_8);
#line 190
undef($memory_8);
#line 190
undef($memory_7);
#line 190
$memory_7 = ";";
#line 190
$memory_6 = $memory_6 . $memory_7;
#line 190
undef($memory_7);
#line 190
$memory_2 = $memory_6;
#line 190
undef($memory_6);
#line 190
undef($memory_5);
#line 191
goto label_473;
#line 191
label_382:
#line 191
$memory_5 = c_rt_lib::ov_as($memory_3, 'set_val');
#line 192
$memory_7 = $memory_5->{'src'};
#line 192
$memory_8 = "c_rt_lib_NL.clone_nl(";
#line 192
$memory_10 = $memory_5->{'src'};
#line 192
$memory_9 = generator_java_priv::print_register_getter($memory_10);
#line 192
undef($memory_10);
#line 192
$memory_8 = $memory_8 . $memory_9;
#line 192
undef($memory_9);
#line 192
$memory_9 = ")";
#line 192
$memory_8 = $memory_8 . $memory_9;
#line 192
undef($memory_9);
#line 192
$memory_6 = generator_java_priv::print_register_setter($memory_7, $memory_8);
#line 192
undef($memory_8);
#line 192
undef($memory_7);
#line 193
$memory_7 = ";";
#line 193
$memory_6 = $memory_6 . $memory_7;
#line 193
undef($memory_7);
#line 193
$memory_7 = string::lf();
#line 193
$memory_6 = $memory_6 . $memory_7;
#line 193
undef($memory_7);
#line 193
$memory_2 = $memory_6;
#line 193
undef($memory_6);
#line 194
$memory_6 = generator_java_priv::print_set_hash_value($memory_5);
#line 194
$memory_7 = ";";
#line 194
$memory_6 = $memory_6 . $memory_7;
#line 194
undef($memory_7);
#line 194
$memory_2 = $memory_2 . $memory_6;
#line 194
undef($memory_6);
#line 194
undef($memory_5);
#line 195
goto label_473;
#line 195
label_413:
#line 195
$memory_5 = c_rt_lib::ov_as($memory_3, 'ov_mk');
#line 196
$memory_6 = generator_java_priv::print_ov_mk($memory_5);
#line 196
$memory_2 = $memory_6;
#line 196
undef($memory_6);
#line 196
undef($memory_5);
#line 197
goto label_473;
#line 197
label_420:
#line 197
$memory_5 = c_rt_lib::ov_as($memory_3, 'prt_lbl');
#line 198
$memory_6 = "case \"label_";
#line 198
$memory_6 = $memory_6 . $memory_5;
#line 198
$memory_7 = "\":";
#line 198
$memory_6 = $memory_6 . $memory_7;
#line 198
undef($memory_7);
#line 198
$memory_2 = $memory_6;
#line 198
undef($memory_6);
#line 198
undef($memory_5);
#line 199
goto label_473;
#line 199
label_431:
#line 199
$memory_5 = c_rt_lib::ov_as($memory_3, 'if_goto');
#line 200
$memory_6 = "if (c_rt_lib_NL.check_true_native_nl(";
#line 200
$memory_8 = $memory_5->{'src'};
#line 200
$memory_7 = generator_java_priv::print_register($memory_8);
#line 200
undef($memory_8);
#line 200
$memory_6 = $memory_6 . $memory_7;
#line 200
undef($memory_7);
#line 200
$memory_7 = ")) {";
#line 200
$memory_6 = $memory_6 . $memory_7;
#line 200
undef($memory_7);
#line 201
$memory_8 = $memory_5->{'dest'};
#line 201
$memory_7 = generator_java_priv::print_goto($memory_8);
#line 201
undef($memory_8);
#line 201
$memory_6 = $memory_6 . $memory_7;
#line 201
undef($memory_7);
#line 201
$memory_7 = "}";
#line 201
$memory_6 = $memory_6 . $memory_7;
#line 201
undef($memory_7);
#line 201
$memory_2 = $memory_6;
#line 201
undef($memory_6);
#line 201
undef($memory_5);
#line 202
goto label_473;
#line 202
label_454:
#line 202
$memory_5 = c_rt_lib::ov_as($memory_3, 'goto');
#line 203
$memory_6 = generator_java_priv::print_goto($memory_5);
#line 203
$memory_2 = $memory_6;
#line 203
undef($memory_6);
#line 203
undef($memory_5);
#line 204
goto label_473;
#line 204
label_461:
#line 204
$memory_5 = c_rt_lib::ov_as($memory_3, 'clear');
#line 205
$memory_7 = "null";
#line 205
$memory_6 = generator_java_priv::print_register_setter($memory_5, $memory_7);
#line 205
undef($memory_7);
#line 205
$memory_7 = ";";
#line 205
$memory_6 = $memory_6 . $memory_7;
#line 205
undef($memory_7);
#line 205
$memory_2 = $memory_6;
#line 205
undef($memory_6);
#line 205
undef($memory_5);
#line 206
goto label_473;
#line 206
label_473:
#line 206
undef($memory_3);
#line 206
undef($memory_4);
#line 207
$memory_3 = "//line ";
#line 207
$memory_4 = $memory_1->{'debug'};
#line 207
$memory_4 = $memory_4->{'nast_debug'};
#line 207
$memory_4 = $memory_4->{'begin'};
#line 207
$memory_4 = $memory_4->{'line'};
#line 207
$memory_3 = $memory_3 . $memory_4;
#line 207
undef($memory_4);
#line 207
$memory_4 = string::lf();
#line 207
$memory_3 = $memory_3 . $memory_4;
#line 207
undef($memory_4);
#line 207
$memory_3 = $memory_3 . $memory_2;
#line 207
$memory_4 = string::lf();
#line 207
$memory_3 = $memory_3 . $memory_4;
#line 207
undef($memory_4);
#line 207
undef($memory_0);
#line 207
undef($memory_1);
#line 207
undef($memory_2);
#line 207
return $memory_3;
#line 207
undef($memory_3);
#line 207
undef($memory_2);
#line 207
undef($memory_0);
#line 207
undef($memory_1);
#line 207
return;
}

sub generator_java_priv::print_arr($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;$memory_0 = $_[0];
#line 211
$memory_1 = "new ImmArray(new Imm[";
#line 212
$memory_2 = array::len($memory_0);
#line 212
$memory_3 = 0;
#line 212
$memory_2 = c_rt_lib::to_nl($memory_2 == $memory_3);
#line 212
undef($memory_3);
#line 212
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 212
if (c_rt_lib::check_true($memory_2)) {goto label_11;}
#line 213
$memory_3 = "0]";
#line 213
$memory_1 = $memory_1 . $memory_3;
#line 213
undef($memory_3);
#line 214
goto label_40;
#line 214
label_11:
#line 215
$memory_3 = "] {";
#line 215
$memory_1 = $memory_1 . $memory_3;
#line 215
undef($memory_3);
#line 216
$memory_4 = 0;
#line 216
$memory_5 = 1;
#line 216
$memory_6 = c_rt_lib::array_len($memory_0);
#line 216
label_18:
#line 216
$memory_7 = c_rt_lib::to_nl($memory_4 >= $memory_6);
#line 216
if (c_rt_lib::check_true($memory_7)) {goto label_30;}
#line 216
$memory_3 = $memory_0->[$memory_4];
#line 216
$memory_8 = generator_java_priv::print_register_getter($memory_3);
#line 216
$memory_9 = ",";
#line 216
$memory_8 = $memory_8 . $memory_9;
#line 216
undef($memory_9);
#line 216
$memory_1 = $memory_1 . $memory_8;
#line 216
undef($memory_8);
#line 216
$memory_4 = $memory_4 + $memory_5;
#line 216
goto label_18;
#line 216
label_30:
#line 216
undef($memory_3);
#line 216
undef($memory_4);
#line 216
undef($memory_5);
#line 216
undef($memory_6);
#line 216
undef($memory_7);
#line 217
$memory_3 = "}";
#line 217
$memory_1 = $memory_1 . $memory_3;
#line 217
undef($memory_3);
#line 218
goto label_40;
#line 218
label_40:
#line 218
undef($memory_2);
#line 219
$memory_2 = ")";
#line 219
$memory_2 = $memory_1 . $memory_2;
#line 219
undef($memory_0);
#line 219
undef($memory_1);
#line 219
return $memory_2;
#line 219
undef($memory_2);
#line 219
undef($memory_1);
#line 219
undef($memory_0);
#line 219
return;
}

sub generator_java_priv::print_bin_op($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;$memory_0 = $_[0];
#line 223
$memory_1 = "";
#line 224
$memory_2 = $memory_0->{'op'};
#line 224
$memory_3 = ">=";
#line 224
$memory_2 = c_rt_lib::to_nl($memory_2 eq $memory_3);
#line 224
undef($memory_3);
#line 224
if (c_rt_lib::check_true($memory_2)) {goto label_10;}
#line 224
$memory_2 = $memory_0->{'op'};
#line 224
$memory_3 = "<=";
#line 224
$memory_2 = c_rt_lib::to_nl($memory_2 eq $memory_3);
#line 224
undef($memory_3);
#line 224
label_10:
#line 224
if (c_rt_lib::check_true($memory_2)) {goto label_16;}
#line 224
$memory_2 = $memory_0->{'op'};
#line 224
$memory_3 = "<";
#line 224
$memory_2 = c_rt_lib::to_nl($memory_2 eq $memory_3);
#line 224
undef($memory_3);
#line 224
label_16:
#line 224
if (c_rt_lib::check_true($memory_2)) {goto label_22;}
#line 224
$memory_2 = $memory_0->{'op'};
#line 224
$memory_3 = ">";
#line 224
$memory_2 = c_rt_lib::to_nl($memory_2 eq $memory_3);
#line 224
undef($memory_3);
#line 224
label_22:
#line 224
if (c_rt_lib::check_true($memory_2)) {goto label_28;}
#line 224
$memory_2 = $memory_0->{'op'};
#line 224
$memory_3 = "==";
#line 224
$memory_2 = c_rt_lib::to_nl($memory_2 eq $memory_3);
#line 224
undef($memory_3);
#line 224
label_28:
#line 224
if (c_rt_lib::check_true($memory_2)) {goto label_34;}
#line 225
$memory_2 = $memory_0->{'op'};
#line 225
$memory_3 = "!=";
#line 225
$memory_2 = c_rt_lib::to_nl($memory_2 eq $memory_3);
#line 225
undef($memory_3);
#line 225
label_34:
#line 225
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 225
if (c_rt_lib::check_true($memory_2)) {goto label_47;}
#line 226
$memory_3 = "c_rt_lib_NL.native_to_nl_nl(";
#line 226
$memory_4 = generator_java_priv::print_imm_double_operation($memory_0);
#line 226
$memory_3 = $memory_3 . $memory_4;
#line 226
undef($memory_4);
#line 226
$memory_4 = " )";
#line 226
$memory_3 = $memory_3 . $memory_4;
#line 226
undef($memory_4);
#line 226
$memory_1 = $memory_1 . $memory_3;
#line 226
undef($memory_3);
#line 227
goto label_130;
#line 227
label_47:
#line 227
$memory_2 = $memory_0->{'op'};
#line 227
$memory_3 = "eq";
#line 227
$memory_2 = c_rt_lib::to_nl($memory_2 eq $memory_3);
#line 227
undef($memory_3);
#line 227
if (c_rt_lib::check_true($memory_2)) {goto label_57;}
#line 227
$memory_2 = $memory_0->{'op'};
#line 227
$memory_3 = "ne";
#line 227
$memory_2 = c_rt_lib::to_nl($memory_2 eq $memory_3);
#line 227
undef($memory_3);
#line 227
label_57:
#line 227
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 227
if (c_rt_lib::check_true($memory_2)) {goto label_92;}
#line 228
$memory_3 = "c_rt_lib_NL.native_to_nl_nl(";
#line 228
$memory_1 = $memory_1 . $memory_3;
#line 228
undef($memory_3);
#line 229
$memory_3 = $memory_0->{'op'};
#line 229
$memory_4 = "ne";
#line 229
$memory_3 = c_rt_lib::to_nl($memory_3 eq $memory_4);
#line 229
undef($memory_4);
#line 229
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 229
if (c_rt_lib::check_true($memory_3)) {goto label_73;}
#line 230
$memory_4 = "!";
#line 230
$memory_1 = $memory_1 . $memory_4;
#line 230
undef($memory_4);
#line 231
goto label_73;
#line 231
label_73:
#line 231
undef($memory_3);
#line 232
$memory_4 = $memory_0->{'left'};
#line 232
$memory_3 = generator_java_priv::print_register_getter($memory_4);
#line 232
undef($memory_4);
#line 232
$memory_4 = ".toString().equals(";
#line 232
$memory_3 = $memory_3 . $memory_4;
#line 232
undef($memory_4);
#line 232
$memory_1 = $memory_1 . $memory_3;
#line 232
undef($memory_3);
#line 233
$memory_4 = $memory_0->{'right'};
#line 233
$memory_3 = generator_java_priv::print_register_getter($memory_4);
#line 233
undef($memory_4);
#line 233
$memory_4 = ".toString()))";
#line 233
$memory_3 = $memory_3 . $memory_4;
#line 233
undef($memory_4);
#line 233
$memory_1 = $memory_1 . $memory_3;
#line 233
undef($memory_3);
#line 234
goto label_130;
#line 234
label_92:
#line 234
$memory_2 = $memory_0->{'op'};
#line 234
$memory_3 = ".";
#line 234
$memory_2 = c_rt_lib::to_nl($memory_2 eq $memory_3);
#line 234
undef($memory_3);
#line 234
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 234
if (c_rt_lib::check_true($memory_2)) {goto label_119;}
#line 235
$memory_3 = "new ImmString(";
#line 235
$memory_5 = $memory_0->{'left'};
#line 235
$memory_4 = generator_java_priv::print_register_getter($memory_5);
#line 235
undef($memory_5);
#line 235
$memory_3 = $memory_3 . $memory_4;
#line 235
undef($memory_4);
#line 235
$memory_4 = ".toString() + ";
#line 235
$memory_3 = $memory_3 . $memory_4;
#line 235
undef($memory_4);
#line 236
$memory_5 = $memory_0->{'right'};
#line 236
$memory_4 = generator_java_priv::print_register_getter($memory_5);
#line 236
undef($memory_5);
#line 236
$memory_3 = $memory_3 . $memory_4;
#line 236
undef($memory_4);
#line 236
$memory_4 = ".toString())";
#line 236
$memory_3 = $memory_3 . $memory_4;
#line 236
undef($memory_4);
#line 236
$memory_1 = $memory_1 . $memory_3;
#line 236
undef($memory_3);
#line 237
goto label_130;
#line 237
label_119:
#line 238
$memory_3 = "new ImmDouble(";
#line 238
$memory_4 = generator_java_priv::print_imm_double_operation($memory_0);
#line 238
$memory_3 = $memory_3 . $memory_4;
#line 238
undef($memory_4);
#line 238
$memory_4 = ")";
#line 238
$memory_3 = $memory_3 . $memory_4;
#line 238
undef($memory_4);
#line 238
$memory_1 = $memory_1 . $memory_3;
#line 238
undef($memory_3);
#line 239
goto label_130;
#line 239
label_130:
#line 239
undef($memory_2);
#line 240
$memory_3 = $memory_0->{'dest'};
#line 240
$memory_2 = generator_java_priv::print_register_setter($memory_3, $memory_1);
#line 240
undef($memory_3);
#line 240
$memory_3 = ";";
#line 240
$memory_2 = $memory_2 . $memory_3;
#line 240
undef($memory_3);
#line 240
undef($memory_0);
#line 240
undef($memory_1);
#line 240
return $memory_2;
#line 240
undef($memory_2);
#line 240
undef($memory_1);
#line 240
undef($memory_0);
#line 240
return;
}

sub generator_java_priv::print_imm_double_operation($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;$memory_0 = $_[0];
#line 244
$memory_2 = $memory_0->{'left'};
#line 244
$memory_1 = generator_java_priv::print_register_as_number($memory_2);
#line 244
undef($memory_2);
#line 245
$memory_2 = $memory_0->{'op'};
#line 245
$memory_3 = "==";
#line 245
$memory_2 = c_rt_lib::to_nl($memory_2 eq $memory_3);
#line 245
undef($memory_3);
#line 245
if (c_rt_lib::check_true($memory_2)) {goto label_12;}
#line 245
$memory_2 = $memory_0->{'op'};
#line 245
$memory_3 = "!=";
#line 245
$memory_2 = c_rt_lib::to_nl($memory_2 eq $memory_3);
#line 245
undef($memory_3);
#line 245
label_12:
#line 245
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 245
if (c_rt_lib::check_true($memory_2)) {goto label_33;}
#line 246
$memory_3 = ".compareTo(";
#line 246
$memory_5 = $memory_0->{'right'};
#line 246
$memory_4 = generator_java_priv::print_register_as_number($memory_5);
#line 246
undef($memory_5);
#line 246
$memory_3 = $memory_3 . $memory_4;
#line 246
undef($memory_4);
#line 246
$memory_4 = ") ";
#line 246
$memory_3 = $memory_3 . $memory_4;
#line 246
undef($memory_4);
#line 246
$memory_4 = $memory_0->{'op'};
#line 246
$memory_3 = $memory_3 . $memory_4;
#line 246
undef($memory_4);
#line 246
$memory_4 = " 0";
#line 246
$memory_3 = $memory_3 . $memory_4;
#line 246
undef($memory_4);
#line 246
$memory_1 = $memory_1 . $memory_3;
#line 246
undef($memory_3);
#line 247
goto label_43;
#line 247
label_33:
#line 248
$memory_3 = $memory_0->{'op'};
#line 248
$memory_5 = $memory_0->{'right'};
#line 248
$memory_4 = generator_java_priv::print_register_as_number($memory_5);
#line 248
undef($memory_5);
#line 248
$memory_3 = $memory_3 . $memory_4;
#line 248
undef($memory_4);
#line 248
$memory_1 = $memory_1 . $memory_3;
#line 248
undef($memory_3);
#line 249
goto label_43;
#line 249
label_43:
#line 249
undef($memory_2);
#line 250
undef($memory_0);
#line 250
return $memory_1;
#line 250
undef($memory_1);
#line 250
undef($memory_0);
#line 250
return;
}

sub generator_java_priv::print_register_as_number($) {
my $memory_0;my $memory_1;my $memory_2;$memory_0 = $_[0];
#line 254
$memory_1 = "(Double.valueOf(String.valueOf(";
#line 254
$memory_2 = generator_java_priv::print_register_getter($memory_0);
#line 254
$memory_1 = $memory_1 . $memory_2;
#line 254
undef($memory_2);
#line 254
$memory_2 = generator_java_priv::print_getter();
#line 254
$memory_1 = $memory_1 . $memory_2;
#line 254
undef($memory_2);
#line 254
$memory_2 = ")))";
#line 254
$memory_1 = $memory_1 . $memory_2;
#line 254
undef($memory_2);
#line 254
undef($memory_0);
#line 254
return $memory_1;
#line 254
undef($memory_1);
#line 254
undef($memory_0);
#line 254
return;
}

sub generator_java_priv::__print_int_value() {
my $memory_0;
#line 258
$memory_0 = ".intValue()";
#line 258
return $memory_0;
#line 258
undef($memory_0);
#line 258
return;
}

my $_print_int_value;
sub generator_java_priv::print_int_value() {
	$_print_int_value = generator_java_priv::__print_int_value() unless defined $_print_int_value;
	return $_print_int_value;
}

sub generator_java_priv::print_call($$$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;my $memory_13;$memory_0 = $_[0];$memory_1 = $_[1];$memory_2 = $_[2];$memory_3 = $_[3];
#line 262
$memory_4 = "";
#line 262
$memory_4 = c_rt_lib::to_nl($memory_1 eq $memory_4);
#line 262
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 262
if (c_rt_lib::check_true($memory_4)) {goto label_9;}
#line 262
$memory_5 = "_priv";
#line 262
$memory_5 = $memory_2 . $memory_5;
#line 262
$memory_2 = $memory_5;
#line 262
undef($memory_5);
#line 262
goto label_9;
#line 262
label_9:
#line 262
undef($memory_4);
#line 263
$memory_4 = "";
#line 263
$memory_4 = c_rt_lib::to_nl($memory_1 eq $memory_4);
#line 263
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 263
if (c_rt_lib::check_true($memory_4)) {goto label_17;}
#line 263
$memory_1 = $memory_0;
#line 263
goto label_17;
#line 263
label_17:
#line 263
undef($memory_4);
#line 264
$memory_4 = generator_java_priv::get_class_name($memory_1);
#line 264
$memory_5 = ".";
#line 264
$memory_4 = $memory_4 . $memory_5;
#line 264
undef($memory_5);
#line 264
$memory_5 = $memory_2;
#line 264
$memory_4 = $memory_4 . $memory_5;
#line 264
undef($memory_5);
#line 264
$memory_5 = "_nl(";
#line 264
$memory_4 = $memory_4 . $memory_5;
#line 264
undef($memory_5);
#line 265
$memory_5 = 0;
#line 266
$memory_7 = 0;
#line 266
$memory_8 = 1;
#line 266
$memory_9 = c_rt_lib::array_len($memory_3);
#line 266
label_33:
#line 266
$memory_10 = c_rt_lib::to_nl($memory_7 >= $memory_9);
#line 266
if (c_rt_lib::check_true($memory_10)) {goto label_76;}
#line 266
$memory_6 = $memory_3->[$memory_7];
#line 267
$memory_11 = 0;
#line 267
$memory_11 = c_rt_lib::to_nl($memory_5 == $memory_11);
#line 267
$memory_11 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_11));
#line 267
$memory_11 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_11));
#line 267
if (c_rt_lib::check_true($memory_11)) {goto label_46;}
#line 267
$memory_12 = ",";
#line 267
$memory_4 = $memory_4 . $memory_12;
#line 267
undef($memory_12);
#line 267
goto label_46;
#line 267
label_46:
#line 267
undef($memory_11);
#line 268
$memory_11 = 1;
#line 268
$memory_5 = $memory_5 + $memory_11;
#line 268
undef($memory_11);
#line 269
$memory_11 = c_rt_lib::ov_is($memory_6, 'ref');
#line 269
if (c_rt_lib::check_true($memory_11)) {goto label_58;}
#line 271
$memory_11 = c_rt_lib::ov_is($memory_6, 'val');
#line 271
if (c_rt_lib::check_true($memory_11)) {goto label_65;}
#line 271
$memory_11 = "NOMATCHALERT";
#line 271
$memory_11 = [$memory_11,$memory_6];
#line 271
die(dfile::ssave($memory_11));
#line 269
label_58:
#line 269
$memory_12 = c_rt_lib::ov_as($memory_6, 'ref');
#line 270
$memory_13 = generator_java_priv::print_register($memory_12);
#line 270
$memory_4 = $memory_4 . $memory_13;
#line 270
undef($memory_13);
#line 270
undef($memory_12);
#line 271
goto label_72;
#line 271
label_65:
#line 271
$memory_12 = c_rt_lib::ov_as($memory_6, 'val');
#line 272
$memory_13 = generator_java_priv::print_register($memory_12);
#line 272
$memory_4 = $memory_4 . $memory_13;
#line 272
undef($memory_13);
#line 272
undef($memory_12);
#line 273
goto label_72;
#line 273
label_72:
#line 273
undef($memory_11);
#line 274
$memory_7 = $memory_7 + $memory_8;
#line 274
goto label_33;
#line 274
label_76:
#line 274
undef($memory_6);
#line 274
undef($memory_7);
#line 274
undef($memory_8);
#line 274
undef($memory_9);
#line 274
undef($memory_10);
#line 275
$memory_6 = ")";
#line 275
$memory_6 = $memory_4 . $memory_6;
#line 275
undef($memory_0);
#line 275
undef($memory_1);
#line 275
undef($memory_2);
#line 275
undef($memory_3);
#line 275
undef($memory_4);
#line 275
undef($memory_5);
#line 275
return $memory_6;
#line 275
undef($memory_6);
#line 275
undef($memory_4);
#line 275
undef($memory_5);
#line 275
undef($memory_0);
#line 275
undef($memory_1);
#line 275
undef($memory_2);
#line 275
undef($memory_3);
#line 275
return;
}

sub generator_java_priv::print_const_arr($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;$memory_0 = $_[0];$memory_1 = $_[1];
#line 279
$memory_2 = "new Imm[] {";
#line 280
$memory_4 = 0;
#line 280
$memory_5 = 1;
#line 280
$memory_6 = c_rt_lib::array_len($memory_1);
#line 280
label_4:
#line 280
$memory_7 = c_rt_lib::to_nl($memory_4 >= $memory_6);
#line 280
if (c_rt_lib::check_true($memory_7)) {goto label_16;}
#line 280
$memory_3 = $memory_1->[$memory_4];
#line 280
$memory_8 = generator_java_priv::print_const_value($memory_0, $memory_3);
#line 280
$memory_9 = ",";
#line 280
$memory_8 = $memory_8 . $memory_9;
#line 280
undef($memory_9);
#line 280
$memory_2 = $memory_2 . $memory_8;
#line 280
undef($memory_8);
#line 280
$memory_4 = $memory_4 + $memory_5;
#line 280
goto label_4;
#line 280
label_16:
#line 280
undef($memory_3);
#line 280
undef($memory_4);
#line 280
undef($memory_5);
#line 280
undef($memory_6);
#line 280
undef($memory_7);
#line 281
$memory_3 = "}";
#line 281
$memory_3 = $memory_2 . $memory_3;
#line 281
undef($memory_0);
#line 281
undef($memory_1);
#line 281
undef($memory_2);
#line 281
return $memory_3;
#line 281
undef($memory_3);
#line 281
undef($memory_2);
#line 281
undef($memory_0);
#line 281
undef($memory_1);
#line 281
return;
}

sub generator_java_priv::print_const_hash($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;$memory_0 = $_[0];$memory_1 = $_[1];
#line 285
$memory_2 = generator_java_priv::print_hash_name();
#line 285
$memory_3 = " = new HashMap<ImmString, Imm>();";
#line 285
$memory_2 = $memory_2 . $memory_3;
#line 285
undef($memory_3);
#line 285
$memory_3 = string::lf();
#line 285
$memory_2 = $memory_2 . $memory_3;
#line 285
undef($memory_3);
#line 286
$memory_5 = c_rt_lib::init_iter($memory_1);
#line 286
label_8:
#line 286
$memory_3 = c_rt_lib::is_end_hash($memory_5);
#line 286
if (c_rt_lib::check_true($memory_3)) {goto label_36;}
#line 286
$memory_3 = c_rt_lib::get_key_iter($memory_5);
#line 286
$memory_4 = c_rt_lib::hash_get_value($memory_1, $memory_3);
#line 286
$memory_6 = generator_java_priv::print_hash_name();
#line 286
$memory_7 = ".put(new ImmString(\"";
#line 286
$memory_6 = $memory_6 . $memory_7;
#line 286
undef($memory_7);
#line 286
$memory_7 = generator_java_priv::escape_string($memory_3);
#line 286
$memory_6 = $memory_6 . $memory_7;
#line 286
undef($memory_7);
#line 286
$memory_7 = "\"),";
#line 286
$memory_6 = $memory_6 . $memory_7;
#line 286
undef($memory_7);
#line 286
$memory_7 = generator_java_priv::print_const_value($memory_0, $memory_4);
#line 286
$memory_6 = $memory_6 . $memory_7;
#line 286
undef($memory_7);
#line 287
$memory_7 = ");";
#line 287
$memory_6 = $memory_6 . $memory_7;
#line 287
undef($memory_7);
#line 287
$memory_7 = string::lf();
#line 287
$memory_6 = $memory_6 . $memory_7;
#line 287
undef($memory_7);
#line 287
$memory_2 = $memory_2 . $memory_6;
#line 287
undef($memory_6);
#line 287
$memory_5 = c_rt_lib::next_iter($memory_5);
#line 287
goto label_8;
#line 287
label_36:
#line 287
undef($memory_3);
#line 287
undef($memory_4);
#line 287
undef($memory_5);
#line 289
$memory_4 = "new ImmMap(";
#line 289
$memory_5 = generator_java_priv::print_hash_name();
#line 289
$memory_4 = $memory_4 . $memory_5;
#line 289
undef($memory_5);
#line 289
$memory_5 = ")";
#line 289
$memory_4 = $memory_4 . $memory_5;
#line 289
undef($memory_5);
#line 289
$memory_3 = generator_java_priv::print_register_setter($memory_0, $memory_4);
#line 289
undef($memory_4);
#line 289
$memory_3 = $memory_2 . $memory_3;
#line 289
undef($memory_0);
#line 289
undef($memory_1);
#line 289
undef($memory_2);
#line 289
return $memory_3;
#line 289
undef($memory_3);
#line 289
undef($memory_2);
#line 289
undef($memory_0);
#line 289
undef($memory_1);
#line 289
return;
}

sub generator_java_priv::print_const_ov($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;$memory_0 = $_[0];$memory_1 = $_[1];
#line 293
$memory_2 = "";
#line 294
$memory_3 = ov::has_value($memory_1);
#line 294
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 294
if (c_rt_lib::check_true($memory_3)) {goto label_24;}
#line 295
$memory_4 = "new OV(\"";
#line 295
$memory_6 = ov::get_element($memory_1);
#line 295
$memory_5 = generator_java_priv::escape_string($memory_6);
#line 295
undef($memory_6);
#line 295
$memory_4 = $memory_4 . $memory_5;
#line 295
undef($memory_5);
#line 295
$memory_5 = "\", ";
#line 295
$memory_4 = $memory_4 . $memory_5;
#line 295
undef($memory_5);
#line 296
$memory_6 = ov::get_value($memory_1);
#line 296
$memory_5 = generator_java_priv::print_const_value($memory_0, $memory_6);
#line 296
undef($memory_6);
#line 296
$memory_4 = $memory_4 . $memory_5;
#line 296
undef($memory_5);
#line 296
$memory_5 = ")";
#line 296
$memory_4 = $memory_4 . $memory_5;
#line 296
undef($memory_5);
#line 296
$memory_2 = $memory_4;
#line 296
undef($memory_4);
#line 297
goto label_37;
#line 297
label_24:
#line 298
$memory_4 = "new OV(\"";
#line 298
$memory_6 = ov::get_element($memory_1);
#line 298
$memory_5 = generator_java_priv::escape_string($memory_6);
#line 298
undef($memory_6);
#line 298
$memory_4 = $memory_4 . $memory_5;
#line 298
undef($memory_5);
#line 298
$memory_5 = "\", null)";
#line 298
$memory_4 = $memory_4 . $memory_5;
#line 298
undef($memory_5);
#line 298
$memory_2 = $memory_4;
#line 298
undef($memory_4);
#line 299
goto label_37;
#line 299
label_37:
#line 299
undef($memory_3);
#line 300
undef($memory_0);
#line 300
undef($memory_1);
#line 300
return $memory_2;
#line 300
undef($memory_2);
#line 300
undef($memory_0);
#line 300
undef($memory_1);
#line 300
return;
}

sub generator_java_priv::print_const_value($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;$memory_0 = $_[0];$memory_1 = $_[1];
#line 304
$memory_2 = nl::is_sim($memory_1);
#line 304
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 304
if (c_rt_lib::check_true($memory_3)) {goto label_14;}
#line 304
$memory_5 = ptd::sim();
#line 304
$memory_4 = ptd::ensure($memory_5, $memory_1);
#line 304
undef($memory_5);
#line 304
$memory_2 = string_utils::is_integer($memory_4);
#line 304
undef($memory_4);
#line 304
if (c_rt_lib::check_true($memory_2)) {goto label_14;}
#line 305
$memory_5 = ptd::sim();
#line 305
$memory_4 = ptd::ensure($memory_5, $memory_1);
#line 305
undef($memory_5);
#line 305
$memory_2 = string_utils::is_float($memory_4);
#line 305
undef($memory_4);
#line 305
label_14:
#line 305
undef($memory_3);
#line 305
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 305
if (c_rt_lib::check_true($memory_2)) {goto label_29;}
#line 306
$memory_3 = "new ImmDouble(";
#line 306
$memory_3 = $memory_3 . $memory_1;
#line 306
$memory_4 = ")";
#line 306
$memory_3 = $memory_3 . $memory_4;
#line 306
undef($memory_4);
#line 306
undef($memory_0);
#line 306
undef($memory_1);
#line 306
undef($memory_2);
#line 306
return $memory_3;
#line 306
undef($memory_3);
#line 307
goto label_84;
#line 307
label_29:
#line 307
$memory_2 = nl::is_sim($memory_1);
#line 307
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 307
if (c_rt_lib::check_true($memory_2)) {goto label_46;}
#line 308
$memory_3 = "new ImmString(\"";
#line 308
$memory_4 = generator_java_priv::escape_string($memory_1);
#line 308
$memory_3 = $memory_3 . $memory_4;
#line 308
undef($memory_4);
#line 308
$memory_4 = "\")";
#line 308
$memory_3 = $memory_3 . $memory_4;
#line 308
undef($memory_4);
#line 308
undef($memory_0);
#line 308
undef($memory_1);
#line 308
undef($memory_2);
#line 308
return $memory_3;
#line 308
undef($memory_3);
#line 309
goto label_84;
#line 309
label_46:
#line 309
$memory_2 = nl::is_array($memory_1);
#line 309
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 309
if (c_rt_lib::check_true($memory_2)) {goto label_57;}
#line 310
$memory_3 = generator_java_priv::print_const_arr($memory_0, $memory_1);
#line 310
undef($memory_0);
#line 310
undef($memory_1);
#line 310
undef($memory_2);
#line 310
return $memory_3;
#line 310
undef($memory_3);
#line 311
goto label_84;
#line 311
label_57:
#line 311
$memory_2 = nl::is_hash($memory_1);
#line 311
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 311
if (c_rt_lib::check_true($memory_2)) {goto label_68;}
#line 312
$memory_3 = generator_java_priv::print_const_hash($memory_0, $memory_1);
#line 312
undef($memory_0);
#line 312
undef($memory_1);
#line 312
undef($memory_2);
#line 312
return $memory_3;
#line 312
undef($memory_3);
#line 313
goto label_84;
#line 313
label_68:
#line 313
$memory_2 = nl::is_variant($memory_1);
#line 313
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 313
if (c_rt_lib::check_true($memory_2)) {goto label_79;}
#line 314
$memory_3 = generator_java_priv::print_const_ov($memory_0, $memory_1);
#line 314
undef($memory_0);
#line 314
undef($memory_1);
#line 314
undef($memory_2);
#line 314
return $memory_3;
#line 314
undef($memory_3);
#line 315
goto label_84;
#line 315
label_79:
#line 316
$memory_3 = [];
#line 316
die(dfile::ssave($memory_3));
#line 316
undef($memory_3);
#line 317
goto label_84;
#line 317
label_84:
#line 317
undef($memory_2);
#line 317
undef($memory_0);
#line 317
undef($memory_1);
#line 317
return;
}

sub generator_java_priv::print_goto($) {
my $memory_0;my $memory_1;my $memory_2;$memory_0 = $_[0];
#line 321
$memory_1 = "if (true) {label = \"label_";
#line 321
$memory_1 = $memory_1 . $memory_0;
#line 321
$memory_2 = "\"; continue; }";
#line 321
$memory_1 = $memory_1 . $memory_2;
#line 321
undef($memory_2);
#line 321
undef($memory_0);
#line 321
return $memory_1;
#line 321
undef($memory_1);
#line 321
undef($memory_0);
#line 321
return;
}

sub generator_java_priv::print_hash($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;$memory_0 = $_[0];
#line 325
$memory_1 = generator_java_priv::print_hash_name();
#line 325
$memory_2 = " = new HashMap<ImmString, Imm>();";
#line 325
$memory_1 = $memory_1 . $memory_2;
#line 325
undef($memory_2);
#line 325
$memory_2 = string::lf();
#line 325
$memory_1 = $memory_1 . $memory_2;
#line 325
undef($memory_2);
#line 328
$memory_2 = $memory_0->{'src'};
#line 328
$memory_4 = 0;
#line 328
$memory_5 = 1;
#line 328
$memory_6 = c_rt_lib::array_len($memory_2);
#line 328
label_11:
#line 328
$memory_7 = c_rt_lib::to_nl($memory_4 >= $memory_6);
#line 328
if (c_rt_lib::check_true($memory_7)) {goto label_42;}
#line 328
$memory_3 = $memory_2->[$memory_4];
#line 326
$memory_8 = generator_java_priv::print_hash_name();
#line 326
$memory_9 = ".put(new ImmString(\"";
#line 326
$memory_8 = $memory_8 . $memory_9;
#line 326
undef($memory_9);
#line 326
$memory_10 = $memory_3->{'key'};
#line 326
$memory_9 = generator_java_priv::escape_string($memory_10);
#line 326
undef($memory_10);
#line 326
$memory_8 = $memory_8 . $memory_9;
#line 326
undef($memory_9);
#line 326
$memory_9 = "\"),";
#line 326
$memory_8 = $memory_8 . $memory_9;
#line 326
undef($memory_9);
#line 327
$memory_10 = $memory_3->{'val'};
#line 327
$memory_9 = generator_java_priv::print_register_getter($memory_10);
#line 327
undef($memory_10);
#line 327
$memory_8 = $memory_8 . $memory_9;
#line 327
undef($memory_9);
#line 327
$memory_9 = ");";
#line 327
$memory_8 = $memory_8 . $memory_9;
#line 327
undef($memory_9);
#line 327
$memory_9 = string::lf();
#line 327
$memory_8 = $memory_8 . $memory_9;
#line 327
undef($memory_9);
#line 327
$memory_1 = $memory_1 . $memory_8;
#line 327
undef($memory_8);
#line 327
$memory_4 = $memory_4 + $memory_5;
#line 327
goto label_11;
#line 327
label_42:
#line 327
undef($memory_2);
#line 327
undef($memory_3);
#line 327
undef($memory_4);
#line 327
undef($memory_5);
#line 327
undef($memory_6);
#line 327
undef($memory_7);
#line 329
undef($memory_0);
#line 329
return $memory_1;
#line 329
undef($memory_1);
#line 329
undef($memory_0);
#line 329
return;
}

sub generator_java_priv::__print_hash_name() {
my $memory_0;
#line 333
$memory_0 = "__function_map";
#line 333
return $memory_0;
#line 333
undef($memory_0);
#line 333
return;
}

my $_print_hash_name;
sub generator_java_priv::print_hash_name() {
	$_print_hash_name = generator_java_priv::__print_hash_name() unless defined $_print_hash_name;
	return $_print_hash_name;
}

sub generator_java_priv::print_get_hash_value($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;$memory_0 = $_[0];
#line 337
$memory_1 = "((ImmMap)";
#line 337
$memory_3 = $memory_0->{'src'};
#line 337
$memory_2 = generator_java_priv::print_register_getter($memory_3);
#line 337
undef($memory_3);
#line 337
$memory_1 = $memory_1 . $memory_2;
#line 337
undef($memory_2);
#line 337
$memory_2 = ")";
#line 337
$memory_1 = $memory_1 . $memory_2;
#line 337
undef($memory_2);
#line 337
$memory_2 = generator_java_priv::print_getter();
#line 337
$memory_1 = $memory_1 . $memory_2;
#line 337
undef($memory_2);
#line 337
$memory_2 = ".get(new ImmString(\"";
#line 337
$memory_1 = $memory_1 . $memory_2;
#line 337
undef($memory_2);
#line 338
$memory_3 = $memory_0->{'key'};
#line 338
$memory_2 = generator_java_priv::escape_string($memory_3);
#line 338
undef($memory_3);
#line 338
$memory_1 = $memory_1 . $memory_2;
#line 338
undef($memory_2);
#line 338
$memory_2 = "\"))";
#line 338
$memory_1 = $memory_1 . $memory_2;
#line 338
undef($memory_2);
#line 338
undef($memory_0);
#line 338
return $memory_1;
#line 338
undef($memory_1);
#line 338
undef($memory_0);
#line 338
return;
}

sub generator_java_priv::print_set_hash_value($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;$memory_0 = $_[0];
#line 342
$memory_1 = "((ImmMap)";
#line 342
$memory_3 = $memory_0->{'src'};
#line 342
$memory_2 = generator_java_priv::print_register_getter($memory_3);
#line 342
undef($memory_3);
#line 342
$memory_1 = $memory_1 . $memory_2;
#line 342
undef($memory_2);
#line 342
$memory_2 = ")";
#line 342
$memory_1 = $memory_1 . $memory_2;
#line 342
undef($memory_2);
#line 342
$memory_2 = generator_java_priv::print_getter();
#line 342
$memory_1 = $memory_1 . $memory_2;
#line 342
undef($memory_2);
#line 342
$memory_2 = ".put(new ImmString(\"";
#line 342
$memory_1 = $memory_1 . $memory_2;
#line 342
undef($memory_2);
#line 343
$memory_3 = $memory_0->{'key'};
#line 343
$memory_2 = generator_java_priv::escape_string($memory_3);
#line 343
undef($memory_3);
#line 343
$memory_1 = $memory_1 . $memory_2;
#line 343
undef($memory_2);
#line 343
$memory_2 = "\"), ";
#line 343
$memory_1 = $memory_1 . $memory_2;
#line 343
undef($memory_2);
#line 344
$memory_3 = $memory_0->{'val'};
#line 344
$memory_2 = generator_java_priv::print_register_getter($memory_3);
#line 344
undef($memory_3);
#line 344
$memory_3 = ")";
#line 344
$memory_2 = $memory_2 . $memory_3;
#line 344
undef($memory_3);
#line 344
$memory_1 = $memory_1 . $memory_2;
#line 344
undef($memory_2);
#line 345
undef($memory_0);
#line 345
return $memory_1;
#line 345
undef($memory_1);
#line 345
undef($memory_0);
#line 345
return;
}

sub generator_java_priv::print_ov_mk($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;$memory_0 = $_[0];
#line 349
$memory_1 = "";
#line 350
$memory_2 = $memory_0->{'src'};
#line 350
$memory_2 = c_rt_lib::ov_is($memory_2, 'emp');
#line 350
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 350
if (c_rt_lib::check_true($memory_3)) {goto label_9;}
#line 350
$memory_2 = $memory_0->{'name'};
#line 350
$memory_4 = "TRUE";
#line 350
$memory_2 = c_rt_lib::to_nl($memory_2 eq $memory_4);
#line 350
undef($memory_4);
#line 350
label_9:
#line 350
undef($memory_3);
#line 350
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 350
if (c_rt_lib::check_true($memory_2)) {goto label_17;}
#line 351
$memory_3 = "c_rt_lib_NL.get_true_nl()";
#line 351
$memory_1 = $memory_3;
#line 351
undef($memory_3);
#line 352
goto label_81;
#line 352
label_17:
#line 352
$memory_2 = $memory_0->{'src'};
#line 352
$memory_2 = c_rt_lib::ov_is($memory_2, 'emp');
#line 352
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 352
if (c_rt_lib::check_true($memory_3)) {goto label_26;}
#line 352
$memory_2 = $memory_0->{'name'};
#line 352
$memory_4 = "FALSE";
#line 352
$memory_2 = c_rt_lib::to_nl($memory_2 eq $memory_4);
#line 352
undef($memory_4);
#line 352
label_26:
#line 352
undef($memory_3);
#line 352
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 352
if (c_rt_lib::check_true($memory_2)) {goto label_34;}
#line 353
$memory_3 = "c_rt_lib_NL.get_false_nl()";
#line 353
$memory_1 = $memory_3;
#line 353
undef($memory_3);
#line 354
goto label_81;
#line 354
label_34:
#line 355
$memory_3 = $memory_0->{'src'};
#line 355
$memory_4 = c_rt_lib::ov_is($memory_3, 'arg');
#line 355
if (c_rt_lib::check_true($memory_4)) {goto label_43;}
#line 358
$memory_4 = c_rt_lib::ov_is($memory_3, 'emp');
#line 358
if (c_rt_lib::check_true($memory_4)) {goto label_64;}
#line 358
$memory_4 = "NOMATCHALERT";
#line 358
$memory_4 = [$memory_4,$memory_3];
#line 358
die(dfile::ssave($memory_4));
#line 355
label_43:
#line 355
$memory_5 = c_rt_lib::ov_as($memory_3, 'arg');
#line 356
$memory_6 = "c_rt_lib_NL.ov_mk_arg_nl(new ImmString(\"";
#line 356
$memory_8 = $memory_0->{'name'};
#line 356
$memory_7 = generator_java_priv::escape_string($memory_8);
#line 356
undef($memory_8);
#line 356
$memory_6 = $memory_6 . $memory_7;
#line 356
undef($memory_7);
#line 356
$memory_7 = "\"), ";
#line 356
$memory_6 = $memory_6 . $memory_7;
#line 356
undef($memory_7);
#line 357
$memory_7 = generator_java_priv::print_register($memory_5);
#line 357
$memory_6 = $memory_6 . $memory_7;
#line 357
undef($memory_7);
#line 357
$memory_7 = ")";
#line 357
$memory_6 = $memory_6 . $memory_7;
#line 357
undef($memory_7);
#line 357
$memory_1 = $memory_6;
#line 357
undef($memory_6);
#line 357
undef($memory_5);
#line 358
goto label_77;
#line 358
label_64:
#line 359
$memory_5 = "c_rt_lib_NL.ov_mk_none_nl(new ImmString(\"";
#line 359
$memory_7 = $memory_0->{'name'};
#line 359
$memory_6 = generator_java_priv::escape_string($memory_7);
#line 359
undef($memory_7);
#line 359
$memory_5 = $memory_5 . $memory_6;
#line 359
undef($memory_6);
#line 359
$memory_6 = "\"))";
#line 359
$memory_5 = $memory_5 . $memory_6;
#line 359
undef($memory_6);
#line 359
$memory_1 = $memory_5;
#line 359
undef($memory_5);
#line 360
goto label_77;
#line 360
label_77:
#line 360
undef($memory_3);
#line 360
undef($memory_4);
#line 361
goto label_81;
#line 361
label_81:
#line 361
undef($memory_2);
#line 362
$memory_3 = $memory_0->{'dest'};
#line 362
$memory_2 = generator_java_priv::print_register_setter($memory_3, $memory_1);
#line 362
undef($memory_3);
#line 362
$memory_3 = ";";
#line 362
$memory_2 = $memory_2 . $memory_3;
#line 362
undef($memory_3);
#line 362
undef($memory_0);
#line 362
undef($memory_1);
#line 362
return $memory_2;
#line 362
undef($memory_2);
#line 362
undef($memory_1);
#line 362
undef($memory_0);
#line 362
return;
}

sub generator_java_priv::print_register($) {
my $memory_0;my $memory_1;$memory_0 = $_[0];
#line 366
$memory_1 = "___nl__";
#line 366
$memory_1 = $memory_1 . $memory_0;
#line 366
undef($memory_0);
#line 366
return $memory_1;
#line 366
undef($memory_1);
#line 366
undef($memory_0);
#line 366
return;
}

sub generator_java_priv::print_register_getter($) {
my $memory_0;my $memory_1;my $memory_2;$memory_0 = $_[0];
#line 370
$memory_1 = generator_java_priv::print_register($memory_0);
#line 370
$memory_2 = generator_java_priv::print_getter();
#line 370
$memory_1 = $memory_1 . $memory_2;
#line 370
undef($memory_2);
#line 370
undef($memory_0);
#line 370
return $memory_1;
#line 370
undef($memory_1);
#line 370
undef($memory_0);
#line 370
return;
}

sub generator_java_priv::__print_getter() {
my $memory_0;
#line 374
$memory_0 = ".getValue()";
#line 374
return $memory_0;
#line 374
undef($memory_0);
#line 374
return;
}

my $_print_getter;
sub generator_java_priv::print_getter() {
	$_print_getter = generator_java_priv::__print_getter() unless defined $_print_getter;
	return $_print_getter;
}

sub generator_java_priv::print_register_setter($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;$memory_0 = $_[0];$memory_1 = $_[1];
#line 378
$memory_2 = "";
#line 378
$memory_2 = c_rt_lib::to_nl($memory_0 eq $memory_2);
#line 378
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 378
if (c_rt_lib::check_true($memory_2)) {goto label_12;}
#line 378
$memory_3 = "";
#line 378
$memory_3 = $memory_1 . $memory_3;
#line 378
undef($memory_0);
#line 378
undef($memory_1);
#line 378
undef($memory_2);
#line 378
return $memory_3;
#line 378
undef($memory_3);
#line 378
goto label_12;
#line 378
label_12:
#line 378
undef($memory_2);
#line 379
$memory_2 = generator_java_priv::print_register($memory_0);
#line 379
$memory_3 = ".setValue(";
#line 379
$memory_2 = $memory_2 . $memory_3;
#line 379
undef($memory_3);
#line 379
$memory_2 = $memory_2 . $memory_1;
#line 379
$memory_3 = ")";
#line 379
$memory_2 = $memory_2 . $memory_3;
#line 379
undef($memory_3);
#line 379
undef($memory_0);
#line 379
undef($memory_1);
#line 379
return $memory_2;
#line 379
undef($memory_2);
#line 379
undef($memory_0);
#line 379
undef($memory_1);
#line 379
return;
}

sub generator_java_priv::print_return($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;$memory_0 = $_[0];
#line 383
$memory_1 = "";
#line 384
$memory_2 = c_rt_lib::ov_is($memory_0, 'val');
#line 384
if (c_rt_lib::check_true($memory_2)) {goto label_8;}
#line 386
$memory_2 = c_rt_lib::ov_is($memory_0, 'emp');
#line 386
if (c_rt_lib::check_true($memory_2)) {goto label_21;}
#line 386
$memory_2 = "NOMATCHALERT";
#line 386
$memory_2 = [$memory_2,$memory_0];
#line 386
die(dfile::ssave($memory_2));
#line 384
label_8:
#line 384
$memory_3 = c_rt_lib::ov_as($memory_0, 'val');
#line 385
$memory_4 = "return ";
#line 385
$memory_5 = generator_java_priv::print_register_getter($memory_3);
#line 385
$memory_4 = $memory_4 . $memory_5;
#line 385
undef($memory_5);
#line 385
$memory_5 = ";";
#line 385
$memory_4 = $memory_4 . $memory_5;
#line 385
undef($memory_5);
#line 385
$memory_1 = $memory_4;
#line 385
undef($memory_4);
#line 385
undef($memory_3);
#line 386
goto label_26;
#line 386
label_21:
#line 387
$memory_3 = "return null;";
#line 387
$memory_1 = $memory_3;
#line 387
undef($memory_3);
#line 388
goto label_26;
#line 388
label_26:
#line 388
undef($memory_2);
#line 389
$memory_2 = "if(true) ";
#line 389
$memory_2 = $memory_2 . $memory_1;
#line 389
undef($memory_0);
#line 389
undef($memory_1);
#line 389
return $memory_2;
#line 389
undef($memory_2);
#line 389
undef($memory_1);
#line 389
undef($memory_0);
#line 389
return;
}

sub generator_java_priv::print_una_op($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;$memory_0 = $_[0];
#line 393
$memory_1 = "";
#line 394
$memory_2 = $memory_0->{'op'};
#line 394
$memory_3 = "!";
#line 394
$memory_2 = c_rt_lib::to_nl($memory_2 eq $memory_3);
#line 394
undef($memory_3);
#line 394
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 394
if (c_rt_lib::check_true($memory_2)) {goto label_19;}
#line 395
$memory_3 = "c_rt_lib_NL.native_to_nl_nl(!c_rt_lib_NL.check_true_native_nl(";
#line 395
$memory_5 = $memory_0->{'src'};
#line 395
$memory_4 = generator_java_priv::print_register($memory_5);
#line 395
undef($memory_5);
#line 395
$memory_3 = $memory_3 . $memory_4;
#line 395
undef($memory_4);
#line 395
$memory_4 = "))";
#line 395
$memory_3 = $memory_3 . $memory_4;
#line 395
undef($memory_4);
#line 395
$memory_1 = $memory_1 . $memory_3;
#line 395
undef($memory_3);
#line 396
goto label_44;
#line 396
label_19:
#line 397
$memory_3 = "new ImmDouble(";
#line 397
$memory_4 = $memory_0->{'op'};
#line 397
$memory_3 = $memory_3 . $memory_4;
#line 397
undef($memory_4);
#line 397
$memory_4 = "((ImmDouble)";
#line 397
$memory_3 = $memory_3 . $memory_4;
#line 397
undef($memory_4);
#line 397
$memory_5 = $memory_0->{'src'};
#line 397
$memory_4 = generator_java_priv::print_register_getter($memory_5);
#line 397
undef($memory_5);
#line 397
$memory_3 = $memory_3 . $memory_4;
#line 397
undef($memory_4);
#line 397
$memory_4 = ")";
#line 397
$memory_3 = $memory_3 . $memory_4;
#line 397
undef($memory_4);
#line 398
$memory_4 = generator_java_priv::print_getter();
#line 398
$memory_3 = $memory_3 . $memory_4;
#line 398
undef($memory_4);
#line 398
$memory_4 = ")";
#line 398
$memory_3 = $memory_3 . $memory_4;
#line 398
undef($memory_4);
#line 398
$memory_1 = $memory_1 . $memory_3;
#line 398
undef($memory_3);
#line 399
goto label_44;
#line 399
label_44:
#line 399
undef($memory_2);
#line 400
$memory_3 = $memory_0->{'dest'};
#line 400
$memory_2 = generator_java_priv::print_register_setter($memory_3, $memory_1);
#line 400
undef($memory_3);
#line 400
$memory_3 = ";";
#line 400
$memory_2 = $memory_2 . $memory_3;
#line 400
undef($memory_3);
#line 400
undef($memory_0);
#line 400
undef($memory_1);
#line 400
return $memory_2;
#line 400
undef($memory_2);
#line 400
undef($memory_1);
#line 400
undef($memory_0);
#line 400
return;
}
