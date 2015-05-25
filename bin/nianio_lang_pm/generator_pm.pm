use c_rt_lib;
use array;
use dfile;
use string;
use nl;
use nlasm;
use boolean_t;
use ptd;
use string_utils;
sub generator_pm::fun_args_t;
sub generator_pm::state_t;
sub generator_pm_priv::print;
sub generator_pm::generate;
sub generator_pm_priv::print_imports;
sub generator_pm_priv::print_functions;
sub generator_pm_priv::print_function;
sub generator_pm_priv::is_singleton_use_function;
sub generator_pm_priv::print_function_access;
sub generator_pm_priv::get_function_access;
sub generator_pm_priv::print_args_dollar;
sub generator_pm_priv::move_args_to_register;
sub generator_pm_priv::move_register_to_ref_args;
sub generator_pm_priv::print_commands;
sub generator_pm_priv::print_command;
sub generator_pm_priv::print_call;
sub generator_pm_priv::print_una_op;
sub generator_pm_priv::print_bin_op;
sub generator_pm_priv::print_set_at_idx;
sub generator_pm_priv::print_set_val;
sub generator_pm_priv::print_ov_mk;
sub generator_pm_priv::print_register;
sub generator_pm_priv::print_register_to_assign;

return 1;

sub generator_pm::__fun_args_t() {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;
#line 16
$memory_3 = ptd::none();
#line 16
$memory_4 = ptd::none();
#line 16
$memory_2 = {val => $memory_3,ref => $memory_4,};
#line 16
undef($memory_3);
#line 16
undef($memory_4);
#line 16
$memory_1 = ptd::var($memory_2);
#line 16
undef($memory_2);
#line 16
$memory_0 = ptd::arr($memory_1);
#line 16
undef($memory_1);
#line 16
return $memory_0;
#line 16
undef($memory_0);
#line 16
return;
}

my $_fun_args_t;
sub generator_pm::fun_args_t() {
	$_fun_args_t = generator_pm::__fun_args_t() unless defined $_fun_args_t;
	return $_fun_args_t;
}

sub generator_pm::__state_t() {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;
#line 19
$memory_2 = ptd::sim();
#line 19
$memory_3 = ptd::sim();
#line 19
$memory_4 = {
	module => "generator_pm",
	name => "fun_args_t",
};
#line 19
$memory_4 = c_rt_lib::ov_mk_arg('ref', $memory_4);
#line 19
$memory_1 = {perl_file => $memory_2,module_name => $memory_3,fun_args => $memory_4,};
#line 19
undef($memory_2);
#line 19
undef($memory_3);
#line 19
undef($memory_4);
#line 19
$memory_0 = ptd::rec($memory_1);
#line 19
undef($memory_1);
#line 19
return $memory_0;
#line 19
undef($memory_0);
#line 19
return;
}

my $_state_t;
sub generator_pm::state_t() {
	$_state_t = generator_pm::__state_t() unless defined $_state_t;
	return $_state_t;
}

sub generator_pm_priv::print($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];
#line 27
$memory_2 = "perl_file";
#line 27
$memory_2 = c_rt_lib::get_ref_hash($memory_0, $memory_2);
#line 27
$memory_2 = $memory_2 . $memory_1;
#line 27
$memory_3 = "perl_file";
#line 27
c_rt_lib::set_ref_hash($memory_0, $memory_3, $memory_2);
#line 27
undef($memory_3);
#line 27
undef($memory_2);
#line 27
undef($memory_1);
#line 27
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub generator_pm::generate($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;$memory_0 = $_[0];
#line 31
$memory_2 = "";
#line 31
$memory_3 = $memory_0->{'module_name'};
#line 31
$memory_4 = [];
#line 31
$memory_1 = {perl_file => $memory_2,module_name => $memory_3,fun_args => $memory_4,};
#line 31
undef($memory_2);
#line 31
undef($memory_3);
#line 31
undef($memory_4);
#line 36
$memory_2 = "use c_rt_lib;";
#line 36
$memory_3 = string::lf();
#line 36
$memory_2 = $memory_2 . $memory_3;
#line 36
undef($memory_3);
#line 36
generator_pm_priv::print($memory_1, $memory_2);
#line 36
undef($memory_2);
#line 37
$memory_2 = $memory_0->{'imports'};
#line 37
generator_pm_priv::print_imports($memory_2, $memory_1);
#line 37
undef($memory_2);
#line 38
$memory_2 = $memory_0->{'functions'};
#line 38
$memory_4 = 0;
#line 38
$memory_5 = 1;
#line 38
$memory_6 = c_rt_lib::array_len($memory_2);
#line 38
label_3:
#line 38
$memory_7 = c_rt_lib::to_nl($memory_4 >= $memory_6);
#line 38
if (c_rt_lib::check_true($memory_7)) {goto label_1;}
#line 38
$memory_3 = $memory_2->[$memory_4];
#line 39
$memory_8 = "sub ";
#line 39
generator_pm_priv::print($memory_1, $memory_8);
#line 39
undef($memory_8);
#line 40
$memory_8 = $memory_3->{'access'};
#line 40
generator_pm_priv::print_function_access($memory_8, $memory_1);
#line 40
undef($memory_8);
#line 41
$memory_8 = $memory_3->{'name'};
#line 41
$memory_9 = ";";
#line 41
$memory_8 = $memory_8 . $memory_9;
#line 41
undef($memory_9);
#line 41
$memory_9 = string::lf();
#line 41
$memory_8 = $memory_8 . $memory_9;
#line 41
undef($memory_9);
#line 41
generator_pm_priv::print($memory_1, $memory_8);
#line 41
undef($memory_8);
#line 42
$memory_4 = $memory_4 + $memory_5;
#line 42
goto label_3;
#line 42
label_1:
#line 42
undef($memory_2);
#line 42
undef($memory_3);
#line 42
undef($memory_4);
#line 42
undef($memory_5);
#line 42
undef($memory_6);
#line 42
undef($memory_7);
#line 43
$memory_2 = string::lf();
#line 43
$memory_3 = "return 1;";
#line 43
$memory_2 = $memory_2 . $memory_3;
#line 43
undef($memory_3);
#line 43
$memory_3 = string::lf();
#line 43
$memory_2 = $memory_2 . $memory_3;
#line 43
undef($memory_3);
#line 43
generator_pm_priv::print($memory_1, $memory_2);
#line 43
undef($memory_2);
#line 44
$memory_2 = $memory_0->{'functions'};
#line 44
generator_pm_priv::print_functions($memory_2, $memory_1);
#line 44
undef($memory_2);
#line 45
$memory_2 = $memory_1->{'perl_file'};
#line 45
undef($memory_0);
#line 45
undef($memory_1);
#line 45
return $memory_2;
#line 45
undef($memory_2);
#line 45
undef($memory_1);
#line 45
undef($memory_0);
#line 45
return;
}

sub generator_pm_priv::print_imports($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;$memory_0 = $_[0];$memory_1 = $_[1];Scalar::Util::weaken($_[1]) if ref($_[1]);
#line 49
$memory_3 = 0;
#line 49
$memory_4 = 1;
#line 49
$memory_5 = c_rt_lib::array_len($memory_0);
#line 49
label_3:
#line 49
$memory_6 = c_rt_lib::to_nl($memory_3 >= $memory_5);
#line 49
if (c_rt_lib::check_true($memory_6)) {goto label_1;}
#line 49
$memory_2 = $memory_0->[$memory_3];
#line 50
$memory_7 = "use ";
#line 50
$memory_7 = $memory_7 . $memory_2;
#line 50
$memory_8 = ";";
#line 50
$memory_7 = $memory_7 . $memory_8;
#line 50
undef($memory_8);
#line 50
$memory_8 = string::lf();
#line 50
$memory_7 = $memory_7 . $memory_8;
#line 50
undef($memory_8);
#line 50
generator_pm_priv::print($memory_1, $memory_7);
#line 50
undef($memory_7);
#line 51
$memory_3 = $memory_3 + $memory_4;
#line 51
goto label_3;
#line 51
label_1:
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
undef($memory_0);
#line 51
$_[1] = $memory_1;return;
$_[1] = $memory_1;}

sub generator_pm_priv::print_functions($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;$memory_0 = $_[0];$memory_1 = $_[1];Scalar::Util::weaken($_[1]) if ref($_[1]);
#line 55
$memory_3 = 0;
#line 55
$memory_4 = 1;
#line 55
$memory_5 = c_rt_lib::array_len($memory_0);
#line 55
label_3:
#line 55
$memory_6 = c_rt_lib::to_nl($memory_3 >= $memory_5);
#line 55
if (c_rt_lib::check_true($memory_6)) {goto label_1;}
#line 55
$memory_2 = $memory_0->[$memory_3];
#line 56
$memory_7 = generator_pm_priv::is_singleton_use_function($memory_2);
#line 56
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 56
if (c_rt_lib::check_true($memory_7)) {goto label_5;}
#line 57
$memory_8 = $memory_2->{'name'};
#line 58
$memory_9 = $memory_2;
#line 59
$memory_10 = "__";
#line 59
$memory_10 = $memory_10 . $memory_8;
#line 59
$memory_11 = $memory_10;
#line 59
 if (c_rt_lib::get_hashcount($memory_9) > 1) {$memory_9 = {%{$memory_9}};}$memory_9->{'name'} = $memory_11;
#line 59
undef($memory_10);
#line 59
undef($memory_11);
#line 60
generator_pm_priv::print_function($memory_9, $memory_1);
#line 61
$memory_11 = $memory_9->{'access'};
#line 61
$memory_12 = $memory_1->{'module_name'};
#line 61
$memory_10 = generator_pm_priv::get_function_access($memory_11, $memory_12);
#line 61
undef($memory_12);
#line 61
undef($memory_11);
#line 61
$memory_11 = $memory_9->{'name'};
#line 61
$memory_10 = $memory_10 . $memory_11;
#line 61
undef($memory_11);
#line 63
$memory_11 = string::lf();
#line 63
$memory_12 = "my \$_";
#line 63
$memory_11 = $memory_11 . $memory_12;
#line 63
undef($memory_12);
#line 63
$memory_11 = $memory_11 . $memory_8;
#line 63
$memory_12 = ";";
#line 63
$memory_11 = $memory_11 . $memory_12;
#line 63
undef($memory_12);
#line 63
$memory_12 = string::lf();
#line 63
$memory_11 = $memory_11 . $memory_12;
#line 63
undef($memory_12);
#line 63
generator_pm_priv::print($memory_1, $memory_11);
#line 63
undef($memory_11);
#line 64
$memory_11 = "sub ";
#line 64
generator_pm_priv::print($memory_1, $memory_11);
#line 64
undef($memory_11);
#line 65
$memory_11 = $memory_9->{'access'};
#line 65
generator_pm_priv::print_function_access($memory_11, $memory_1);
#line 65
undef($memory_11);
#line 66
$memory_11 = "() {";
#line 66
$memory_11 = $memory_8 . $memory_11;
#line 66
$memory_12 = string::lf();
#line 66
$memory_11 = $memory_11 . $memory_12;
#line 66
undef($memory_12);
#line 66
generator_pm_priv::print($memory_1, $memory_11);
#line 66
undef($memory_11);
#line 67
$memory_11 = "	\$_";
#line 67
$memory_11 = $memory_11 . $memory_8;
#line 67
$memory_12 = " = ";
#line 67
$memory_11 = $memory_11 . $memory_12;
#line 67
undef($memory_12);
#line 67
$memory_11 = $memory_11 . $memory_10;
#line 67
generator_pm_priv::print($memory_1, $memory_11);
#line 67
undef($memory_11);
#line 68
$memory_11 = "() unless defined ";
#line 68
$memory_12 = "\$_";
#line 68
$memory_11 = $memory_11 . $memory_12;
#line 68
undef($memory_12);
#line 68
$memory_11 = $memory_11 . $memory_8;
#line 68
$memory_12 = ";";
#line 68
$memory_11 = $memory_11 . $memory_12;
#line 68
undef($memory_12);
#line 68
$memory_12 = string::lf();
#line 68
$memory_11 = $memory_11 . $memory_12;
#line 68
undef($memory_12);
#line 68
generator_pm_priv::print($memory_1, $memory_11);
#line 68
undef($memory_11);
#line 69
$memory_11 = "	return \$_";
#line 69
$memory_11 = $memory_11 . $memory_8;
#line 69
$memory_12 = ";";
#line 69
$memory_11 = $memory_11 . $memory_12;
#line 69
undef($memory_12);
#line 69
$memory_12 = string::lf();
#line 69
$memory_11 = $memory_11 . $memory_12;
#line 69
undef($memory_12);
#line 69
generator_pm_priv::print($memory_1, $memory_11);
#line 69
undef($memory_11);
#line 70
$memory_11 = "}";
#line 70
$memory_12 = string::lf();
#line 70
$memory_11 = $memory_11 . $memory_12;
#line 70
undef($memory_12);
#line 70
generator_pm_priv::print($memory_1, $memory_11);
#line 70
undef($memory_11);
#line 70
undef($memory_8);
#line 70
undef($memory_9);
#line 70
undef($memory_10);
#line 71
goto label_4;
#line 71
label_5:
#line 72
generator_pm_priv::print_function($memory_2, $memory_1);
#line 73
goto label_4;
#line 73
label_4:
#line 73
undef($memory_7);
#line 74
$memory_3 = $memory_3 + $memory_4;
#line 74
goto label_3;
#line 74
label_1:
#line 74
undef($memory_2);
#line 74
undef($memory_3);
#line 74
undef($memory_4);
#line 74
undef($memory_5);
#line 74
undef($memory_6);
#line 74
undef($memory_0);
#line 74
$_[1] = $memory_1;return;
$_[1] = $memory_1;}

sub generator_pm_priv::print_function($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;$memory_0 = $_[0];$memory_1 = $_[1];Scalar::Util::weaken($_[1]) if ref($_[1]);
#line 78
$memory_2 = $memory_0->{'args_type'};
#line 78
$memory_3 = $memory_2;
#line 78
 if (c_rt_lib::get_hashcount($memory_1) > 1) {$memory_1 = {%{$memory_1}};}$memory_1->{'fun_args'} = $memory_3;
#line 78
undef($memory_2);
#line 78
undef($memory_3);
#line 79
$memory_2 = string::lf();
#line 79
$memory_3 = "sub ";
#line 79
$memory_2 = $memory_2 . $memory_3;
#line 79
undef($memory_3);
#line 79
generator_pm_priv::print($memory_1, $memory_2);
#line 79
undef($memory_2);
#line 80
$memory_2 = $memory_0->{'access'};
#line 80
generator_pm_priv::print_function_access($memory_2, $memory_1);
#line 80
undef($memory_2);
#line 81
$memory_2 = $memory_0->{'name'};
#line 81
$memory_3 = "(";
#line 81
$memory_2 = $memory_2 . $memory_3;
#line 81
undef($memory_3);
#line 81
generator_pm_priv::print($memory_1, $memory_2);
#line 81
undef($memory_2);
#line 82
$memory_3 = $memory_0->{'args_type'};
#line 82
$memory_2 = array::len($memory_3);
#line 82
undef($memory_3);
#line 82
generator_pm_priv::print_args_dollar($memory_2, $memory_1);
#line 82
undef($memory_2);
#line 83
$memory_2 = ") {";
#line 83
$memory_3 = string::lf();
#line 83
$memory_2 = $memory_2 . $memory_3;
#line 83
undef($memory_3);
#line 83
generator_pm_priv::print($memory_1, $memory_2);
#line 83
undef($memory_2);
#line 84
$memory_2 = $memory_0->{'reg_size'};
#line 84
$memory_3 = 0;
#line 84
$memory_4 = 1;
#line 84
label_3:
#line 84
$memory_5 = c_rt_lib::to_nl($memory_3 >= $memory_2);
#line 84
if (c_rt_lib::check_true($memory_5)) {goto label_1;}
#line 85
$memory_6 = "my \$memory_";
#line 85
$memory_6 = $memory_6 . $memory_3;
#line 85
$memory_7 = ";";
#line 85
$memory_6 = $memory_6 . $memory_7;
#line 85
undef($memory_7);
#line 85
generator_pm_priv::print($memory_1, $memory_6);
#line 85
undef($memory_6);
#line 86
$memory_3 = $memory_3 + $memory_4;
#line 86
goto label_3;
#line 86
label_1:
#line 86
undef($memory_2);
#line 86
undef($memory_3);
#line 86
undef($memory_4);
#line 86
undef($memory_5);
#line 87
generator_pm_priv::move_args_to_register($memory_1);
#line 88
$memory_2 = string::lf();
#line 88
generator_pm_priv::print($memory_1, $memory_2);
#line 88
undef($memory_2);
#line 89
$memory_2 = $memory_0->{'commands'};
#line 89
generator_pm_priv::print_commands($memory_2, $memory_1);
#line 89
undef($memory_2);
#line 90
generator_pm_priv::move_register_to_ref_args($memory_1);
#line 91
$memory_2 = "}";
#line 91
$memory_3 = string::lf();
#line 91
$memory_2 = $memory_2 . $memory_3;
#line 91
undef($memory_3);
#line 91
generator_pm_priv::print($memory_1, $memory_2);
#line 91
undef($memory_2);
#line 91
undef($memory_0);
#line 91
$_[1] = $memory_1;return;
$_[1] = $memory_1;}

sub generator_pm_priv::is_singleton_use_function($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;my $memory_13;$memory_0 = $_[0];
#line 94
$memory_2 = $memory_0->{'args_type'};
#line 94
$memory_1 = array::len($memory_2);
#line 94
undef($memory_2);
#line 94
$memory_2 = 0;
#line 94
$memory_1 = c_rt_lib::to_nl($memory_1 > $memory_2);
#line 94
undef($memory_2);
#line 94
$memory_1 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_1));
#line 94
if (c_rt_lib::check_true($memory_1)) {goto label_2;}
#line 94
$memory_2 = c_rt_lib::to_nl(0);
#line 94
undef($memory_0);
#line 94
undef($memory_1);
#line 94
return $memory_2;
#line 94
undef($memory_2);
#line 94
goto label_2;
#line 94
label_2:
#line 94
undef($memory_1);
#line 95
$memory_1 = $memory_0->{'annotation'};
#line 95
$memory_1 = c_rt_lib::ov_is($memory_1, 'math');
#line 95
$memory_1 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_1));
#line 95
if (c_rt_lib::check_true($memory_1)) {goto label_4;}
#line 95
$memory_2 = c_rt_lib::to_nl(1);
#line 95
undef($memory_0);
#line 95
undef($memory_1);
#line 95
return $memory_2;
#line 95
undef($memory_2);
#line 95
goto label_4;
#line 95
label_4:
#line 95
undef($memory_1);
#line 96
$memory_1 = c_rt_lib::to_nl(0);
#line 98
$memory_3 = $memory_0->{'commands'};
#line 98
$memory_5 = 0;
#line 98
$memory_6 = 1;
#line 98
$memory_7 = c_rt_lib::array_len($memory_3);
#line 98
label_7:
#line 98
$memory_8 = c_rt_lib::to_nl($memory_5 >= $memory_7);
#line 98
if (c_rt_lib::check_true($memory_8)) {goto label_5;}
#line 98
$memory_4 = $memory_3->[$memory_5];
#line 99
$memory_9 = $memory_4->{'cmd'};
#line 100
$memory_10 = $memory_9;
#line 100
$memory_10 = c_rt_lib::ov_is($memory_10, 'call');
#line 100
$memory_10 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_10));
#line 100
if (c_rt_lib::check_true($memory_10)) {goto label_9;}
#line 101
$memory_11 = $memory_9;
#line 101
$memory_11 = c_rt_lib::ov_as($memory_11, 'call');
#line 102
$memory_12 = $memory_11->{'fun_name'};
#line 102
$memory_13 = "sigleton_do_not_use_without_approval";
#line 102
$memory_12 = c_rt_lib::to_nl($memory_12 eq $memory_13);
#line 102
undef($memory_13);
#line 102
$memory_12 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_12));
#line 102
$memory_12 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_12));
#line 102
if (c_rt_lib::check_true($memory_12)) {goto label_11;}
#line 102
undef($memory_9);
#line 102
undef($memory_10);
#line 102
undef($memory_11);
#line 102
undef($memory_12);
#line 102
goto label_6;
#line 102
goto label_11;
#line 102
label_11:
#line 102
undef($memory_12);
#line 103
$memory_12 = $memory_11->{'mod'};
#line 103
$memory_13 = "singleton";
#line 103
$memory_12 = c_rt_lib::to_nl($memory_12 eq $memory_13);
#line 103
undef($memory_13);
#line 103
$memory_12 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_12));
#line 103
$memory_12 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_12));
#line 103
if (c_rt_lib::check_true($memory_12)) {goto label_13;}
#line 103
undef($memory_9);
#line 103
undef($memory_10);
#line 103
undef($memory_11);
#line 103
undef($memory_12);
#line 103
goto label_6;
#line 103
goto label_13;
#line 103
label_13:
#line 103
undef($memory_12);
#line 104
$memory_12 = c_rt_lib::to_nl(1);
#line 104
$memory_1 = $memory_12;
#line 104
undef($memory_12);
#line 105
$memory_12 = $memory_11->{'dest'};
#line 105
$memory_2 = $memory_12;
#line 105
undef($memory_12);
#line 105
undef($memory_11);
#line 106
goto label_8;
#line 106
label_9:
#line 106
$memory_10 = $memory_9;
#line 106
$memory_10 = c_rt_lib::ov_is($memory_10, 'return');
#line 106
$memory_10 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_10));
#line 106
if (c_rt_lib::check_true($memory_10)) {goto label_14;}
#line 107
$memory_11 = $memory_1;
#line 107
$memory_11 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_11));
#line 107
$memory_11 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_11));
#line 107
if (c_rt_lib::check_true($memory_11)) {goto label_16;}
#line 107
$memory_12 = c_rt_lib::to_nl(0);
#line 107
undef($memory_0);
#line 107
undef($memory_1);
#line 107
undef($memory_2);
#line 107
undef($memory_3);
#line 107
undef($memory_4);
#line 107
undef($memory_5);
#line 107
undef($memory_6);
#line 107
undef($memory_7);
#line 107
undef($memory_8);
#line 107
undef($memory_9);
#line 107
undef($memory_10);
#line 107
undef($memory_11);
#line 107
return $memory_12;
#line 107
undef($memory_12);
#line 107
goto label_16;
#line 107
label_16:
#line 107
undef($memory_11);
#line 108
$memory_11 = $memory_9;
#line 108
$memory_11 = c_rt_lib::ov_as($memory_11, 'return');
#line 109
$memory_12 = $memory_11;
#line 109
$memory_12 = c_rt_lib::ov_is($memory_12, 'val');
#line 109
$memory_12 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_12));
#line 109
$memory_12 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_12));
#line 109
if (c_rt_lib::check_true($memory_12)) {goto label_18;}
#line 109
$memory_13 = c_rt_lib::to_nl(0);
#line 109
undef($memory_0);
#line 109
undef($memory_1);
#line 109
undef($memory_2);
#line 109
undef($memory_3);
#line 109
undef($memory_4);
#line 109
undef($memory_5);
#line 109
undef($memory_6);
#line 109
undef($memory_7);
#line 109
undef($memory_8);
#line 109
undef($memory_9);
#line 109
undef($memory_10);
#line 109
undef($memory_11);
#line 109
undef($memory_12);
#line 109
return $memory_13;
#line 109
undef($memory_13);
#line 109
goto label_18;
#line 109
label_18:
#line 109
undef($memory_12);
#line 110
$memory_12 = $memory_11;
#line 110
$memory_12 = c_rt_lib::ov_as($memory_12, 'val');
#line 110
$memory_12 = c_rt_lib::to_nl($memory_12 eq $memory_2);
#line 110
undef($memory_0);
#line 110
undef($memory_1);
#line 110
undef($memory_2);
#line 110
undef($memory_3);
#line 110
undef($memory_4);
#line 110
undef($memory_5);
#line 110
undef($memory_6);
#line 110
undef($memory_7);
#line 110
undef($memory_8);
#line 110
undef($memory_9);
#line 110
undef($memory_10);
#line 110
undef($memory_11);
#line 110
return $memory_12;
#line 110
undef($memory_12);
#line 110
undef($memory_11);
#line 111
goto label_8;
#line 111
label_14:
#line 111
$memory_10 = $memory_9;
#line 111
$memory_10 = c_rt_lib::ov_is($memory_10, 'prt_lbl');
#line 111
$memory_10 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_10));
#line 111
if (c_rt_lib::check_true($memory_10)) {goto label_19;}
#line 112
goto label_8;
#line 112
label_19:
#line 112
$memory_10 = $memory_9;
#line 112
$memory_10 = c_rt_lib::ov_is($memory_10, 'clear');
#line 112
$memory_10 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_10));
#line 112
if (c_rt_lib::check_true($memory_10)) {goto label_20;}
#line 113
goto label_8;
#line 113
label_20:
#line 114
$memory_11 = $memory_1;
#line 114
$memory_11 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_11));
#line 114
if (c_rt_lib::check_true($memory_11)) {goto label_22;}
#line 114
$memory_12 = c_rt_lib::to_nl(0);
#line 114
undef($memory_0);
#line 114
undef($memory_1);
#line 114
undef($memory_2);
#line 114
undef($memory_3);
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
#line 114
undef($memory_9);
#line 114
undef($memory_10);
#line 114
undef($memory_11);
#line 114
return $memory_12;
#line 114
undef($memory_12);
#line 114
goto label_22;
#line 114
label_22:
#line 114
undef($memory_11);
#line 115
goto label_8;
#line 115
label_8:
#line 115
undef($memory_10);
#line 115
undef($memory_9);
#line 115
label_6:
#line 116
$memory_5 = $memory_5 + $memory_6;
#line 116
goto label_7;
#line 116
label_5:
#line 116
undef($memory_3);
#line 116
undef($memory_4);
#line 116
undef($memory_5);
#line 116
undef($memory_6);
#line 116
undef($memory_7);
#line 116
undef($memory_8);
#line 117
$memory_3 = c_rt_lib::to_nl(0);
#line 117
undef($memory_0);
#line 117
undef($memory_1);
#line 117
undef($memory_2);
#line 117
return $memory_3;
#line 117
undef($memory_3);
#line 117
undef($memory_1);
#line 117
undef($memory_2);
#line 117
undef($memory_0);
#line 117
return;
}

sub generator_pm_priv::print_function_access($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;$memory_0 = $_[0];$memory_1 = $_[1];Scalar::Util::weaken($_[1]) if ref($_[1]);
#line 122
$memory_3 = $memory_1->{'module_name'};
#line 122
$memory_2 = generator_pm_priv::get_function_access($memory_0, $memory_3);
#line 122
undef($memory_3);
#line 122
generator_pm_priv::print($memory_1, $memory_2);
#line 122
undef($memory_2);
#line 122
undef($memory_0);
#line 122
$_[1] = $memory_1;return;
$_[1] = $memory_1;}

sub generator_pm_priv::get_function_access($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;$memory_0 = $_[0];$memory_1 = $_[1];
#line 126
$memory_2 = c_rt_lib::ov_is($memory_0, 'pub');
#line 126
if (c_rt_lib::check_true($memory_2)) {goto label_2;}
#line 128
$memory_2 = c_rt_lib::ov_is($memory_0, 'priv');
#line 128
if (c_rt_lib::check_true($memory_2)) {goto label_3;}
#line 128
$memory_2 = "NOMATCHALERT";
#line 128
$memory_2 = [$memory_2,$memory_0];
#line 128
die(dfile::ssave($memory_2));
#line 126
label_2:
#line 127
$memory_3 = "::";
#line 127
$memory_3 = $memory_1 . $memory_3;
#line 127
undef($memory_0);
#line 127
undef($memory_1);
#line 127
undef($memory_2);
#line 127
return $memory_3;
#line 127
undef($memory_3);
#line 128
goto label_1;
#line 128
label_3:
#line 129
$memory_3 = "_priv::";
#line 129
$memory_3 = $memory_1 . $memory_3;
#line 129
undef($memory_0);
#line 129
undef($memory_1);
#line 129
undef($memory_2);
#line 129
return $memory_3;
#line 129
undef($memory_3);
#line 130
goto label_1;
#line 130
label_1:
#line 130
undef($memory_2);
#line 130
undef($memory_0);
#line 130
undef($memory_1);
#line 130
return;
}

sub generator_pm_priv::print_args_dollar($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;$memory_0 = $_[0];$memory_1 = $_[1];Scalar::Util::weaken($_[1]) if ref($_[1]);
#line 134
$memory_2 = 0;
#line 134
$memory_3 = 1;
#line 134
label_3:
#line 134
$memory_4 = c_rt_lib::to_nl($memory_2 >= $memory_0);
#line 134
if (c_rt_lib::check_true($memory_4)) {goto label_1;}
#line 135
$memory_5 = "\$";
#line 135
generator_pm_priv::print($memory_1, $memory_5);
#line 135
undef($memory_5);
#line 136
$memory_2 = $memory_2 + $memory_3;
#line 136
goto label_3;
#line 136
label_1:
#line 136
undef($memory_2);
#line 136
undef($memory_3);
#line 136
undef($memory_4);
#line 136
undef($memory_0);
#line 136
$_[1] = $memory_1;return;
$_[1] = $memory_1;}

sub generator_pm_priv::move_args_to_register($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);
#line 140
$memory_2 = $memory_0->{'fun_args'};
#line 140
$memory_1 = array::len($memory_2);
#line 140
undef($memory_2);
#line 140
$memory_2 = 0;
#line 140
$memory_3 = 1;
#line 140
label_3:
#line 140
$memory_4 = c_rt_lib::to_nl($memory_2 >= $memory_1);
#line 140
if (c_rt_lib::check_true($memory_4)) {goto label_1;}
#line 141
$memory_5 = "\$memory_";
#line 141
$memory_5 = $memory_5 . $memory_2;
#line 141
$memory_6 = " = \$_[";
#line 141
$memory_5 = $memory_5 . $memory_6;
#line 141
undef($memory_6);
#line 141
$memory_5 = $memory_5 . $memory_2;
#line 141
$memory_6 = "];";
#line 141
$memory_5 = $memory_5 . $memory_6;
#line 141
undef($memory_6);
#line 141
generator_pm_priv::print($memory_0, $memory_5);
#line 141
undef($memory_5);
#line 142
$memory_5 = $memory_0->{'fun_args'};
#line 142
$memory_5 = $memory_5->[$memory_2];
#line 142
$memory_6 = c_rt_lib::ov_is($memory_5, 'val');
#line 142
if (c_rt_lib::check_true($memory_6)) {goto label_5;}
#line 143
$memory_6 = c_rt_lib::ov_is($memory_5, 'ref');
#line 143
if (c_rt_lib::check_true($memory_6)) {goto label_6;}
#line 143
$memory_6 = "NOMATCHALERT";
#line 143
$memory_6 = [$memory_6,$memory_5];
#line 143
die(dfile::ssave($memory_6));
#line 142
label_5:
#line 143
goto label_4;
#line 143
label_6:
#line 144
$memory_7 = "Scalar::Util::weaken(\$_[";
#line 144
$memory_7 = $memory_7 . $memory_2;
#line 144
$memory_8 = "]) if ref(\$_[";
#line 144
$memory_7 = $memory_7 . $memory_8;
#line 144
undef($memory_8);
#line 144
$memory_7 = $memory_7 . $memory_2;
#line 144
$memory_8 = "]);";
#line 144
$memory_7 = $memory_7 . $memory_8;
#line 144
undef($memory_8);
#line 144
generator_pm_priv::print($memory_0, $memory_7);
#line 144
undef($memory_7);
#line 145
goto label_4;
#line 145
label_4:
#line 145
undef($memory_5);
#line 145
undef($memory_6);
#line 146
$memory_2 = $memory_2 + $memory_3;
#line 146
goto label_3;
#line 146
label_1:
#line 146
undef($memory_1);
#line 146
undef($memory_2);
#line 146
undef($memory_3);
#line 146
undef($memory_4);
#line 146
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub generator_pm_priv::move_register_to_ref_args($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);
#line 149
$memory_2 = $memory_0->{'fun_args'};
#line 149
$memory_1 = array::len($memory_2);
#line 149
undef($memory_2);
#line 149
$memory_2 = 0;
#line 149
$memory_3 = 1;
#line 149
label_3:
#line 149
$memory_4 = c_rt_lib::to_nl($memory_2 >= $memory_1);
#line 149
if (c_rt_lib::check_true($memory_4)) {goto label_1;}
#line 150
$memory_5 = $memory_0->{'fun_args'};
#line 150
$memory_5 = $memory_5->[$memory_2];
#line 150
$memory_6 = c_rt_lib::ov_is($memory_5, 'val');
#line 150
if (c_rt_lib::check_true($memory_6)) {goto label_5;}
#line 151
$memory_6 = c_rt_lib::ov_is($memory_5, 'ref');
#line 151
if (c_rt_lib::check_true($memory_6)) {goto label_6;}
#line 151
$memory_6 = "NOMATCHALERT";
#line 151
$memory_6 = [$memory_6,$memory_5];
#line 151
die(dfile::ssave($memory_6));
#line 150
label_5:
#line 151
goto label_4;
#line 151
label_6:
#line 152
$memory_7 = "\$_[";
#line 152
$memory_7 = $memory_7 . $memory_2;
#line 152
$memory_8 = "] = \$memory_";
#line 152
$memory_7 = $memory_7 . $memory_8;
#line 152
undef($memory_8);
#line 152
$memory_7 = $memory_7 . $memory_2;
#line 152
$memory_8 = ";";
#line 152
$memory_7 = $memory_7 . $memory_8;
#line 152
undef($memory_8);
#line 152
generator_pm_priv::print($memory_0, $memory_7);
#line 152
undef($memory_7);
#line 153
goto label_4;
#line 153
label_4:
#line 153
undef($memory_5);
#line 153
undef($memory_6);
#line 154
$memory_2 = $memory_2 + $memory_3;
#line 154
goto label_3;
#line 154
label_1:
#line 154
undef($memory_1);
#line 154
undef($memory_2);
#line 154
undef($memory_3);
#line 154
undef($memory_4);
#line 154
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub generator_pm_priv::print_commands($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;$memory_0 = $_[0];$memory_1 = $_[1];Scalar::Util::weaken($_[1]) if ref($_[1]);
#line 157
$memory_3 = 0;
#line 157
$memory_4 = 1;
#line 157
$memory_5 = c_rt_lib::array_len($memory_0);
#line 157
label_3:
#line 157
$memory_6 = c_rt_lib::to_nl($memory_3 >= $memory_5);
#line 157
if (c_rt_lib::check_true($memory_6)) {goto label_1;}
#line 157
$memory_2 = $memory_0->[$memory_3];
#line 158
generator_pm_priv::print_command($memory_2, $memory_1);
#line 159
$memory_3 = $memory_3 + $memory_4;
#line 159
goto label_3;
#line 159
label_1:
#line 159
undef($memory_2);
#line 159
undef($memory_3);
#line 159
undef($memory_4);
#line 159
undef($memory_5);
#line 159
undef($memory_6);
#line 159
undef($memory_0);
#line 159
$_[1] = $memory_1;return;
$_[1] = $memory_1;}

sub generator_pm_priv::print_command($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;my $memory_13;$memory_0 = $_[0];$memory_1 = $_[1];Scalar::Util::weaken($_[1]) if ref($_[1]);
#line 163
$memory_2 = "#line ";
#line 163
$memory_3 = $memory_0->{'debug'};
#line 163
$memory_3 = $memory_3->{'nast_debug'};
#line 163
$memory_3 = $memory_3->{'begin'};
#line 163
$memory_3 = $memory_3->{'line'};
#line 163
$memory_2 = $memory_2 . $memory_3;
#line 163
undef($memory_3);
#line 163
$memory_3 = string::lf();
#line 163
$memory_2 = $memory_2 . $memory_3;
#line 163
undef($memory_3);
#line 163
generator_pm_priv::print($memory_1, $memory_2);
#line 163
undef($memory_2);
#line 164
$memory_2 = $memory_0->{'cmd'};
#line 164
$memory_3 = c_rt_lib::ov_is($memory_2, 'arr_decl');
#line 164
if (c_rt_lib::check_true($memory_3)) {goto label_2;}
#line 176
$memory_3 = c_rt_lib::ov_is($memory_2, 'hash_decl');
#line 176
if (c_rt_lib::check_true($memory_3)) {goto label_3;}
#line 186
$memory_3 = c_rt_lib::ov_is($memory_2, 'call');
#line 186
if (c_rt_lib::check_true($memory_3)) {goto label_4;}
#line 188
$memory_3 = c_rt_lib::ov_is($memory_2, 'func');
#line 188
if (c_rt_lib::check_true($memory_3)) {goto label_5;}
#line 194
$memory_3 = c_rt_lib::ov_is($memory_2, 'una_op');
#line 194
if (c_rt_lib::check_true($memory_3)) {goto label_6;}
#line 196
$memory_3 = c_rt_lib::ov_is($memory_2, 'bin_op');
#line 196
if (c_rt_lib::check_true($memory_3)) {goto label_7;}
#line 198
$memory_3 = c_rt_lib::ov_is($memory_2, 'ov_is');
#line 198
if (c_rt_lib::check_true($memory_3)) {goto label_8;}
#line 203
$memory_3 = c_rt_lib::ov_is($memory_2, 'ov_as');
#line 203
if (c_rt_lib::check_true($memory_3)) {goto label_9;}
#line 208
$memory_3 = c_rt_lib::ov_is($memory_2, 'return');
#line 208
if (c_rt_lib::check_true($memory_3)) {goto label_10;}
#line 217
$memory_3 = c_rt_lib::ov_is($memory_2, 'die');
#line 217
if (c_rt_lib::check_true($memory_3)) {goto label_11;}
#line 221
$memory_3 = c_rt_lib::ov_is($memory_2, 'move');
#line 221
if (c_rt_lib::check_true($memory_3)) {goto label_12;}
#line 225
$memory_3 = c_rt_lib::ov_is($memory_2, 'load_const');
#line 225
if (c_rt_lib::check_true($memory_3)) {goto label_13;}
#line 232
$memory_3 = c_rt_lib::ov_is($memory_2, 'get_frm_idx');
#line 232
if (c_rt_lib::check_true($memory_3)) {goto label_14;}
#line 238
$memory_3 = c_rt_lib::ov_is($memory_2, 'set_at_idx');
#line 238
if (c_rt_lib::check_true($memory_3)) {goto label_15;}
#line 240
$memory_3 = c_rt_lib::ov_is($memory_2, 'get_val');
#line 240
if (c_rt_lib::check_true($memory_3)) {goto label_16;}
#line 244
$memory_3 = c_rt_lib::ov_is($memory_2, 'set_val');
#line 244
if (c_rt_lib::check_true($memory_3)) {goto label_17;}
#line 246
$memory_3 = c_rt_lib::ov_is($memory_2, 'ov_mk');
#line 246
if (c_rt_lib::check_true($memory_3)) {goto label_18;}
#line 248
$memory_3 = c_rt_lib::ov_is($memory_2, 'prt_lbl');
#line 248
if (c_rt_lib::check_true($memory_3)) {goto label_19;}
#line 250
$memory_3 = c_rt_lib::ov_is($memory_2, 'if_goto');
#line 250
if (c_rt_lib::check_true($memory_3)) {goto label_20;}
#line 256
$memory_3 = c_rt_lib::ov_is($memory_2, 'goto');
#line 256
if (c_rt_lib::check_true($memory_3)) {goto label_21;}
#line 258
$memory_3 = c_rt_lib::ov_is($memory_2, 'clear');
#line 258
if (c_rt_lib::check_true($memory_3)) {goto label_22;}
#line 258
$memory_3 = "NOMATCHALERT";
#line 258
$memory_3 = [$memory_3,$memory_2];
#line 258
die(dfile::ssave($memory_3));
#line 164
label_2:
#line 164
$memory_4 = c_rt_lib::ov_as($memory_2, 'arr_decl');
#line 165
$memory_5 = $memory_4->{'dest'};
#line 165
generator_pm_priv::print_register_to_assign($memory_5, $memory_1);
#line 165
undef($memory_5);
#line 166
$memory_5 = "[";
#line 166
generator_pm_priv::print($memory_1, $memory_5);
#line 166
undef($memory_5);
#line 167
$memory_5 = 0;
#line 168
$memory_6 = $memory_4->{'src'};
#line 168
$memory_8 = 0;
#line 168
$memory_9 = 1;
#line 168
$memory_10 = c_rt_lib::array_len($memory_6);
#line 168
label_25:
#line 168
$memory_11 = c_rt_lib::to_nl($memory_8 >= $memory_10);
#line 168
if (c_rt_lib::check_true($memory_11)) {goto label_23;}
#line 168
$memory_7 = $memory_6->[$memory_8];
#line 169
$memory_12 = 0;
#line 169
$memory_12 = c_rt_lib::to_nl($memory_5 > $memory_12);
#line 169
$memory_12 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_12));
#line 169
if (c_rt_lib::check_true($memory_12)) {goto label_27;}
#line 170
$memory_13 = ",";
#line 170
generator_pm_priv::print($memory_1, $memory_13);
#line 170
undef($memory_13);
#line 171
goto label_27;
#line 171
label_27:
#line 171
undef($memory_12);
#line 172
generator_pm_priv::print_register($memory_7, $memory_1);
#line 173
$memory_12 = 1;
#line 173
$memory_5 = $memory_5 + $memory_12;
#line 173
undef($memory_12);
#line 174
$memory_8 = $memory_8 + $memory_9;
#line 174
goto label_25;
#line 174
label_23:
#line 174
undef($memory_6);
#line 174
undef($memory_7);
#line 174
undef($memory_8);
#line 174
undef($memory_9);
#line 174
undef($memory_10);
#line 174
undef($memory_11);
#line 175
$memory_6 = "];";
#line 175
generator_pm_priv::print($memory_1, $memory_6);
#line 175
undef($memory_6);
#line 175
undef($memory_5);
#line 175
undef($memory_4);
#line 176
goto label_1;
#line 176
label_3:
#line 176
$memory_4 = c_rt_lib::ov_as($memory_2, 'hash_decl');
#line 177
$memory_5 = $memory_4->{'dest'};
#line 177
generator_pm_priv::print_register_to_assign($memory_5, $memory_1);
#line 177
undef($memory_5);
#line 178
$memory_5 = "{";
#line 178
generator_pm_priv::print($memory_1, $memory_5);
#line 178
undef($memory_5);
#line 179
$memory_5 = $memory_4->{'src'};
#line 179
$memory_7 = 0;
#line 179
$memory_8 = 1;
#line 179
$memory_9 = c_rt_lib::array_len($memory_5);
#line 179
label_30:
#line 179
$memory_10 = c_rt_lib::to_nl($memory_7 >= $memory_9);
#line 179
if (c_rt_lib::check_true($memory_10)) {goto label_28;}
#line 179
$memory_6 = $memory_5->[$memory_7];
#line 180
$memory_11 = $memory_6->{'key'};
#line 180
generator_pm_priv::print($memory_1, $memory_11);
#line 180
undef($memory_11);
#line 181
$memory_11 = " => ";
#line 181
generator_pm_priv::print($memory_1, $memory_11);
#line 181
undef($memory_11);
#line 182
$memory_11 = $memory_6->{'val'};
#line 182
generator_pm_priv::print_register($memory_11, $memory_1);
#line 182
undef($memory_11);
#line 183
$memory_11 = ",";
#line 183
generator_pm_priv::print($memory_1, $memory_11);
#line 183
undef($memory_11);
#line 184
$memory_7 = $memory_7 + $memory_8;
#line 184
goto label_30;
#line 184
label_28:
#line 184
undef($memory_5);
#line 184
undef($memory_6);
#line 184
undef($memory_7);
#line 184
undef($memory_8);
#line 184
undef($memory_9);
#line 184
undef($memory_10);
#line 185
$memory_5 = "};";
#line 185
generator_pm_priv::print($memory_1, $memory_5);
#line 185
undef($memory_5);
#line 185
undef($memory_4);
#line 186
goto label_1;
#line 186
label_4:
#line 186
$memory_4 = c_rt_lib::ov_as($memory_2, 'call');
#line 187
generator_pm_priv::print_call($memory_4, $memory_1);
#line 187
undef($memory_4);
#line 188
goto label_1;
#line 188
label_5:
#line 188
$memory_4 = c_rt_lib::ov_as($memory_2, 'func');
#line 189
$memory_5 = $memory_4->{'dest'};
#line 189
generator_pm_priv::print_register_to_assign($memory_5, $memory_1);
#line 189
undef($memory_5);
#line 190
$memory_7 = $memory_4->{'module'};
#line 190
$memory_8 = $memory_4->{'name'};
#line 190
$memory_6 = {module => $memory_7,name => $memory_8,};
#line 190
undef($memory_7);
#line 190
undef($memory_8);
#line 190
$memory_5 = dfile::ssave($memory_6);
#line 190
undef($memory_6);
#line 190
$memory_6 = ";";
#line 190
$memory_5 = $memory_5 . $memory_6;
#line 190
undef($memory_6);
#line 190
generator_pm_priv::print($memory_1, $memory_5);
#line 190
undef($memory_5);
#line 190
undef($memory_4);
#line 194
goto label_1;
#line 194
label_6:
#line 194
$memory_4 = c_rt_lib::ov_as($memory_2, 'una_op');
#line 195
generator_pm_priv::print_una_op($memory_4, $memory_1);
#line 195
undef($memory_4);
#line 196
goto label_1;
#line 196
label_7:
#line 196
$memory_4 = c_rt_lib::ov_as($memory_2, 'bin_op');
#line 197
generator_pm_priv::print_bin_op($memory_4, $memory_1);
#line 197
undef($memory_4);
#line 198
goto label_1;
#line 198
label_8:
#line 198
$memory_4 = c_rt_lib::ov_as($memory_2, 'ov_is');
#line 199
$memory_5 = $memory_4->{'dest'};
#line 199
generator_pm_priv::print_register_to_assign($memory_5, $memory_1);
#line 199
undef($memory_5);
#line 200
$memory_5 = "c_rt_lib::ov_is(";
#line 200
generator_pm_priv::print($memory_1, $memory_5);
#line 200
undef($memory_5);
#line 201
$memory_5 = $memory_4->{'src'};
#line 201
generator_pm_priv::print_register($memory_5, $memory_1);
#line 201
undef($memory_5);
#line 202
$memory_5 = ", '";
#line 202
$memory_6 = $memory_4->{'type'};
#line 202
$memory_5 = $memory_5 . $memory_6;
#line 202
undef($memory_6);
#line 202
$memory_6 = "');";
#line 202
$memory_5 = $memory_5 . $memory_6;
#line 202
undef($memory_6);
#line 202
generator_pm_priv::print($memory_1, $memory_5);
#line 202
undef($memory_5);
#line 202
undef($memory_4);
#line 203
goto label_1;
#line 203
label_9:
#line 203
$memory_4 = c_rt_lib::ov_as($memory_2, 'ov_as');
#line 204
$memory_5 = $memory_4->{'dest'};
#line 204
generator_pm_priv::print_register_to_assign($memory_5, $memory_1);
#line 204
undef($memory_5);
#line 205
$memory_5 = "c_rt_lib::ov_as(";
#line 205
generator_pm_priv::print($memory_1, $memory_5);
#line 205
undef($memory_5);
#line 206
$memory_5 = $memory_4->{'src'};
#line 206
generator_pm_priv::print_register($memory_5, $memory_1);
#line 206
undef($memory_5);
#line 207
$memory_5 = ", '";
#line 207
$memory_6 = $memory_4->{'type'};
#line 207
$memory_5 = $memory_5 . $memory_6;
#line 207
undef($memory_6);
#line 207
$memory_6 = "');";
#line 207
$memory_5 = $memory_5 . $memory_6;
#line 207
undef($memory_6);
#line 207
generator_pm_priv::print($memory_1, $memory_5);
#line 207
undef($memory_5);
#line 207
undef($memory_4);
#line 208
goto label_1;
#line 208
label_10:
#line 208
$memory_4 = c_rt_lib::ov_as($memory_2, 'return');
#line 209
generator_pm_priv::move_register_to_ref_args($memory_1);
#line 210
$memory_5 = c_rt_lib::ov_is($memory_4, 'val');
#line 210
if (c_rt_lib::check_true($memory_5)) {goto label_32;}
#line 214
$memory_5 = c_rt_lib::ov_is($memory_4, 'emp');
#line 214
if (c_rt_lib::check_true($memory_5)) {goto label_33;}
#line 214
$memory_5 = "NOMATCHALERT";
#line 214
$memory_5 = [$memory_5,$memory_4];
#line 214
die(dfile::ssave($memory_5));
#line 210
label_32:
#line 210
$memory_6 = c_rt_lib::ov_as($memory_4, 'val');
#line 211
$memory_7 = "return ";
#line 211
generator_pm_priv::print($memory_1, $memory_7);
#line 211
undef($memory_7);
#line 212
generator_pm_priv::print_register($memory_6, $memory_1);
#line 213
$memory_7 = ";";
#line 213
generator_pm_priv::print($memory_1, $memory_7);
#line 213
undef($memory_7);
#line 213
undef($memory_6);
#line 214
goto label_31;
#line 214
label_33:
#line 215
$memory_6 = "return;";
#line 215
generator_pm_priv::print($memory_1, $memory_6);
#line 215
undef($memory_6);
#line 216
goto label_31;
#line 216
label_31:
#line 216
undef($memory_5);
#line 216
undef($memory_4);
#line 217
goto label_1;
#line 217
label_11:
#line 217
$memory_4 = c_rt_lib::ov_as($memory_2, 'die');
#line 218
$memory_5 = "die(dfile::ssave(";
#line 218
generator_pm_priv::print($memory_1, $memory_5);
#line 218
undef($memory_5);
#line 219
generator_pm_priv::print_register($memory_4, $memory_1);
#line 220
$memory_5 = "));";
#line 220
generator_pm_priv::print($memory_1, $memory_5);
#line 220
undef($memory_5);
#line 220
undef($memory_4);
#line 221
goto label_1;
#line 221
label_12:
#line 221
$memory_4 = c_rt_lib::ov_as($memory_2, 'move');
#line 222
$memory_5 = $memory_4->{'dest'};
#line 222
generator_pm_priv::print_register_to_assign($memory_5, $memory_1);
#line 222
undef($memory_5);
#line 223
$memory_5 = $memory_4->{'src'};
#line 223
generator_pm_priv::print_register($memory_5, $memory_1);
#line 223
undef($memory_5);
#line 224
$memory_5 = ";";
#line 224
generator_pm_priv::print($memory_1, $memory_5);
#line 224
undef($memory_5);
#line 224
undef($memory_4);
#line 225
goto label_1;
#line 225
label_13:
#line 225
$memory_4 = c_rt_lib::ov_as($memory_2, 'load_const');
#line 226
$memory_5 = $memory_4->{'dest'};
#line 226
generator_pm_priv::print_register_to_assign($memory_5, $memory_1);
#line 226
undef($memory_5);
#line 227
$memory_8 = $memory_4->{'val'};
#line 227
$memory_5 = nl::is_sim($memory_8);
#line 227
undef($memory_8);
#line 227
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 227
if (c_rt_lib::check_true($memory_7)) {goto label_37;}
#line 227
$memory_8 = $memory_4->{'val'};
#line 227
$memory_9 = "";
#line 227
$memory_8 = $memory_8 . $memory_9;
#line 227
undef($memory_9);
#line 227
$memory_5 = string_utils::is_integer($memory_8);
#line 227
undef($memory_8);
#line 227
label_37:
#line 227
undef($memory_7);
#line 227
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 227
if (c_rt_lib::check_true($memory_6)) {goto label_36;}
#line 227
$memory_5 = 0;
#line 227
$memory_7 = $memory_4->{'val'};
#line 227
$memory_5 = $memory_5 + $memory_7;
#line 227
undef($memory_7);
#line 227
$memory_7 = $memory_4->{'val'};
#line 227
$memory_5 = c_rt_lib::to_nl($memory_5 eq $memory_7);
#line 227
undef($memory_7);
#line 227
label_36:
#line 227
undef($memory_6);
#line 227
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 227
if (c_rt_lib::check_true($memory_5)) {goto label_35;}
#line 228
$memory_6 = $memory_4->{'val'};
#line 228
$memory_7 = ";";
#line 228
$memory_6 = $memory_6 . $memory_7;
#line 228
undef($memory_7);
#line 228
generator_pm_priv::print($memory_1, $memory_6);
#line 228
undef($memory_6);
#line 229
goto label_34;
#line 229
label_35:
#line 230
$memory_7 = $memory_4->{'val'};
#line 230
$memory_6 = dfile::ssave($memory_7);
#line 230
undef($memory_7);
#line 230
$memory_7 = ";";
#line 230
$memory_6 = $memory_6 . $memory_7;
#line 230
undef($memory_7);
#line 230
generator_pm_priv::print($memory_1, $memory_6);
#line 230
undef($memory_6);
#line 231
goto label_34;
#line 231
label_34:
#line 231
undef($memory_5);
#line 231
undef($memory_4);
#line 232
goto label_1;
#line 232
label_14:
#line 232
$memory_4 = c_rt_lib::ov_as($memory_2, 'get_frm_idx');
#line 233
$memory_5 = $memory_4->{'dest'};
#line 233
generator_pm_priv::print_register_to_assign($memory_5, $memory_1);
#line 233
undef($memory_5);
#line 234
$memory_5 = $memory_4->{'src'};
#line 234
generator_pm_priv::print_register($memory_5, $memory_1);
#line 234
undef($memory_5);
#line 235
$memory_5 = "->[";
#line 235
generator_pm_priv::print($memory_1, $memory_5);
#line 235
undef($memory_5);
#line 236
$memory_5 = $memory_4->{'idx'};
#line 236
generator_pm_priv::print_register($memory_5, $memory_1);
#line 236
undef($memory_5);
#line 237
$memory_5 = "];";
#line 237
generator_pm_priv::print($memory_1, $memory_5);
#line 237
undef($memory_5);
#line 237
undef($memory_4);
#line 238
goto label_1;
#line 238
label_15:
#line 238
$memory_4 = c_rt_lib::ov_as($memory_2, 'set_at_idx');
#line 239
generator_pm_priv::print_set_at_idx($memory_4, $memory_1);
#line 239
undef($memory_4);
#line 240
goto label_1;
#line 240
label_16:
#line 240
$memory_4 = c_rt_lib::ov_as($memory_2, 'get_val');
#line 241
$memory_5 = $memory_4->{'dest'};
#line 241
generator_pm_priv::print_register_to_assign($memory_5, $memory_1);
#line 241
undef($memory_5);
#line 242
$memory_5 = $memory_4->{'src'};
#line 242
generator_pm_priv::print_register($memory_5, $memory_1);
#line 242
undef($memory_5);
#line 243
$memory_5 = "->{'";
#line 243
$memory_6 = $memory_4->{'key'};
#line 243
$memory_5 = $memory_5 . $memory_6;
#line 243
undef($memory_6);
#line 243
$memory_6 = "'};";
#line 243
$memory_5 = $memory_5 . $memory_6;
#line 243
undef($memory_6);
#line 243
generator_pm_priv::print($memory_1, $memory_5);
#line 243
undef($memory_5);
#line 243
undef($memory_4);
#line 244
goto label_1;
#line 244
label_17:
#line 244
$memory_4 = c_rt_lib::ov_as($memory_2, 'set_val');
#line 245
generator_pm_priv::print_set_val($memory_4, $memory_1);
#line 245
undef($memory_4);
#line 246
goto label_1;
#line 246
label_18:
#line 246
$memory_4 = c_rt_lib::ov_as($memory_2, 'ov_mk');
#line 247
generator_pm_priv::print_ov_mk($memory_4, $memory_1);
#line 247
undef($memory_4);
#line 248
goto label_1;
#line 248
label_19:
#line 248
$memory_4 = c_rt_lib::ov_as($memory_2, 'prt_lbl');
#line 249
$memory_5 = ":";
#line 249
$memory_5 = $memory_4 . $memory_5;
#line 249
generator_pm_priv::print($memory_1, $memory_5);
#line 249
undef($memory_5);
#line 249
undef($memory_4);
#line 250
goto label_1;
#line 250
label_20:
#line 250
$memory_4 = c_rt_lib::ov_as($memory_2, 'if_goto');
#line 251
$memory_5 = "if (c_rt_lib::check_true(";
#line 251
generator_pm_priv::print($memory_1, $memory_5);
#line 251
undef($memory_5);
#line 252
$memory_5 = $memory_4->{'src'};
#line 252
generator_pm_priv::print_register($memory_5, $memory_1);
#line 252
undef($memory_5);
#line 253
$memory_5 = ")) {";
#line 253
generator_pm_priv::print($memory_1, $memory_5);
#line 253
undef($memory_5);
#line 254
$memory_5 = "goto ";
#line 254
$memory_6 = $memory_4->{'dest'};
#line 254
$memory_5 = $memory_5 . $memory_6;
#line 254
undef($memory_6);
#line 254
$memory_6 = ";";
#line 254
$memory_5 = $memory_5 . $memory_6;
#line 254
undef($memory_6);
#line 254
generator_pm_priv::print($memory_1, $memory_5);
#line 254
undef($memory_5);
#line 255
$memory_5 = "}";
#line 255
generator_pm_priv::print($memory_1, $memory_5);
#line 255
undef($memory_5);
#line 255
undef($memory_4);
#line 256
goto label_1;
#line 256
label_21:
#line 256
$memory_4 = c_rt_lib::ov_as($memory_2, 'goto');
#line 257
$memory_5 = "goto ";
#line 257
$memory_5 = $memory_5 . $memory_4;
#line 257
$memory_6 = ";";
#line 257
$memory_5 = $memory_5 . $memory_6;
#line 257
undef($memory_6);
#line 257
generator_pm_priv::print($memory_1, $memory_5);
#line 257
undef($memory_5);
#line 257
undef($memory_4);
#line 258
goto label_1;
#line 258
label_22:
#line 258
$memory_4 = c_rt_lib::ov_as($memory_2, 'clear');
#line 259
$memory_5 = "undef(";
#line 259
generator_pm_priv::print($memory_1, $memory_5);
#line 259
undef($memory_5);
#line 260
generator_pm_priv::print_register($memory_4, $memory_1);
#line 261
$memory_5 = ");";
#line 261
generator_pm_priv::print($memory_1, $memory_5);
#line 261
undef($memory_5);
#line 261
undef($memory_4);
#line 262
goto label_1;
#line 262
label_1:
#line 262
undef($memory_2);
#line 262
undef($memory_3);
#line 263
$memory_2 = string::lf();
#line 263
generator_pm_priv::print($memory_1, $memory_2);
#line 263
undef($memory_2);
#line 263
undef($memory_0);
#line 263
$_[1] = $memory_1;return;
$_[1] = $memory_1;}

sub generator_pm_priv::print_call($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;$memory_0 = $_[0];$memory_1 = $_[1];Scalar::Util::weaken($_[1]) if ref($_[1]);
#line 267
$memory_2 = $memory_0->{'dest'};
#line 267
generator_pm_priv::print_register_to_assign($memory_2, $memory_1);
#line 267
undef($memory_2);
#line 268
$memory_2 = $memory_0->{'mod'};
#line 268
$memory_3 = "";
#line 268
$memory_2 = c_rt_lib::to_nl($memory_2 ne $memory_3);
#line 268
undef($memory_3);
#line 268
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 268
if (c_rt_lib::check_true($memory_2)) {goto label_2;}
#line 269
$memory_3 = $memory_0->{'mod'};
#line 269
$memory_4 = "::";
#line 269
$memory_3 = $memory_3 . $memory_4;
#line 269
undef($memory_4);
#line 269
generator_pm_priv::print($memory_1, $memory_3);
#line 269
undef($memory_3);
#line 270
goto label_1;
#line 270
label_2:
#line 271
$memory_3 = $memory_1->{'module_name'};
#line 271
$memory_4 = "_priv::";
#line 271
$memory_3 = $memory_3 . $memory_4;
#line 271
undef($memory_4);
#line 271
generator_pm_priv::print($memory_1, $memory_3);
#line 271
undef($memory_3);
#line 272
goto label_1;
#line 272
label_1:
#line 272
undef($memory_2);
#line 273
$memory_2 = $memory_0->{'fun_name'};
#line 273
$memory_3 = "(";
#line 273
$memory_2 = $memory_2 . $memory_3;
#line 273
undef($memory_3);
#line 273
generator_pm_priv::print($memory_1, $memory_2);
#line 273
undef($memory_2);
#line 275
$memory_2 = 0;
#line 276
$memory_3 = $memory_0->{'args'};
#line 276
$memory_5 = 0;
#line 276
$memory_6 = 1;
#line 276
$memory_7 = c_rt_lib::array_len($memory_3);
#line 276
label_5:
#line 276
$memory_8 = c_rt_lib::to_nl($memory_5 >= $memory_7);
#line 276
if (c_rt_lib::check_true($memory_8)) {goto label_3;}
#line 276
$memory_4 = $memory_3->[$memory_5];
#line 277
$memory_9 = 0;
#line 277
$memory_9 = c_rt_lib::to_nl($memory_2 > $memory_9);
#line 277
$memory_9 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_9));
#line 277
if (c_rt_lib::check_true($memory_9)) {goto label_7;}
#line 278
$memory_10 = ", ";
#line 278
generator_pm_priv::print($memory_1, $memory_10);
#line 278
undef($memory_10);
#line 279
goto label_7;
#line 279
label_7:
#line 279
undef($memory_9);
#line 280
$memory_9 = c_rt_lib::ov_is($memory_4, 'val');
#line 280
if (c_rt_lib::check_true($memory_9)) {goto label_9;}
#line 282
$memory_9 = c_rt_lib::ov_is($memory_4, 'ref');
#line 282
if (c_rt_lib::check_true($memory_9)) {goto label_10;}
#line 282
$memory_9 = "NOMATCHALERT";
#line 282
$memory_9 = [$memory_9,$memory_4];
#line 282
die(dfile::ssave($memory_9));
#line 280
label_9:
#line 280
$memory_10 = c_rt_lib::ov_as($memory_4, 'val');
#line 281
generator_pm_priv::print_register($memory_10, $memory_1);
#line 281
undef($memory_10);
#line 282
goto label_8;
#line 282
label_10:
#line 282
$memory_10 = c_rt_lib::ov_as($memory_4, 'ref');
#line 283
generator_pm_priv::print_register($memory_10, $memory_1);
#line 283
undef($memory_10);
#line 284
goto label_8;
#line 284
label_8:
#line 284
undef($memory_9);
#line 285
$memory_9 = 1;
#line 285
$memory_2 = $memory_2 + $memory_9;
#line 285
undef($memory_9);
#line 286
$memory_5 = $memory_5 + $memory_6;
#line 286
goto label_5;
#line 286
label_3:
#line 286
undef($memory_3);
#line 286
undef($memory_4);
#line 286
undef($memory_5);
#line 286
undef($memory_6);
#line 286
undef($memory_7);
#line 286
undef($memory_8);
#line 287
$memory_3 = ");";
#line 287
generator_pm_priv::print($memory_1, $memory_3);
#line 287
undef($memory_3);
#line 287
undef($memory_2);
#line 287
undef($memory_0);
#line 287
$_[1] = $memory_1;return;
$_[1] = $memory_1;}

sub generator_pm_priv::print_una_op($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;$memory_0 = $_[0];$memory_1 = $_[1];Scalar::Util::weaken($_[1]) if ref($_[1]);
#line 291
$memory_2 = $memory_0->{'dest'};
#line 291
generator_pm_priv::print_register_to_assign($memory_2, $memory_1);
#line 291
undef($memory_2);
#line 292
$memory_2 = $memory_0->{'op'};
#line 292
$memory_3 = "!";
#line 292
$memory_2 = c_rt_lib::to_nl($memory_2 eq $memory_3);
#line 292
undef($memory_3);
#line 292
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 292
if (c_rt_lib::check_true($memory_2)) {goto label_2;}
#line 292
$memory_3 = "c_rt_lib::to_nl(";
#line 292
generator_pm_priv::print($memory_1, $memory_3);
#line 292
undef($memory_3);
#line 292
goto label_2;
#line 292
label_2:
#line 292
undef($memory_2);
#line 293
$memory_2 = $memory_0->{'op'};
#line 293
generator_pm_priv::print($memory_1, $memory_2);
#line 293
undef($memory_2);
#line 294
$memory_2 = $memory_0->{'op'};
#line 294
$memory_3 = "!";
#line 294
$memory_2 = c_rt_lib::to_nl($memory_2 eq $memory_3);
#line 294
undef($memory_3);
#line 294
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 294
if (c_rt_lib::check_true($memory_2)) {goto label_4;}
#line 294
$memory_3 = "c_rt_lib::check_true(";
#line 294
generator_pm_priv::print($memory_1, $memory_3);
#line 294
undef($memory_3);
#line 294
goto label_4;
#line 294
label_4:
#line 294
undef($memory_2);
#line 295
$memory_2 = $memory_0->{'src'};
#line 295
generator_pm_priv::print_register($memory_2, $memory_1);
#line 295
undef($memory_2);
#line 296
$memory_2 = $memory_0->{'op'};
#line 296
$memory_3 = "!";
#line 296
$memory_2 = c_rt_lib::to_nl($memory_2 eq $memory_3);
#line 296
undef($memory_3);
#line 296
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 296
if (c_rt_lib::check_true($memory_2)) {goto label_6;}
#line 296
$memory_3 = "))";
#line 296
generator_pm_priv::print($memory_1, $memory_3);
#line 296
undef($memory_3);
#line 296
goto label_6;
#line 296
label_6:
#line 296
undef($memory_2);
#line 297
$memory_2 = ";";
#line 297
generator_pm_priv::print($memory_1, $memory_2);
#line 297
undef($memory_2);
#line 297
undef($memory_0);
#line 297
$_[1] = $memory_1;return;
$_[1] = $memory_1;}

sub generator_pm_priv::print_bin_op($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;$memory_0 = $_[0];$memory_1 = $_[1];Scalar::Util::weaken($_[1]) if ref($_[1]);
#line 301
$memory_2 = $memory_0->{'dest'};
#line 301
generator_pm_priv::print_register_to_assign($memory_2, $memory_1);
#line 301
undef($memory_2);
#line 302
$memory_2 = $memory_0->{'op'};
#line 302
$memory_3 = ">=";
#line 302
$memory_2 = c_rt_lib::to_nl($memory_2 eq $memory_3);
#line 302
undef($memory_3);
#line 302
if (c_rt_lib::check_true($memory_2)) {goto label_9;}
#line 302
$memory_2 = $memory_0->{'op'};
#line 302
$memory_3 = "<=";
#line 302
$memory_2 = c_rt_lib::to_nl($memory_2 eq $memory_3);
#line 302
undef($memory_3);
#line 302
label_9:
#line 302
if (c_rt_lib::check_true($memory_2)) {goto label_8;}
#line 302
$memory_2 = $memory_0->{'op'};
#line 302
$memory_3 = "<";
#line 302
$memory_2 = c_rt_lib::to_nl($memory_2 eq $memory_3);
#line 302
undef($memory_3);
#line 302
label_8:
#line 302
if (c_rt_lib::check_true($memory_2)) {goto label_7;}
#line 302
$memory_2 = $memory_0->{'op'};
#line 302
$memory_3 = ">";
#line 302
$memory_2 = c_rt_lib::to_nl($memory_2 eq $memory_3);
#line 302
undef($memory_3);
#line 302
label_7:
#line 302
if (c_rt_lib::check_true($memory_2)) {goto label_6;}
#line 302
$memory_2 = $memory_0->{'op'};
#line 302
$memory_3 = "==";
#line 302
$memory_2 = c_rt_lib::to_nl($memory_2 eq $memory_3);
#line 302
undef($memory_3);
#line 302
label_6:
#line 302
if (c_rt_lib::check_true($memory_2)) {goto label_5;}
#line 302
$memory_2 = $memory_0->{'op'};
#line 302
$memory_3 = "eq";
#line 302
$memory_2 = c_rt_lib::to_nl($memory_2 eq $memory_3);
#line 302
undef($memory_3);
#line 302
label_5:
#line 302
if (c_rt_lib::check_true($memory_2)) {goto label_4;}
#line 302
$memory_2 = $memory_0->{'op'};
#line 302
$memory_3 = "!=";
#line 302
$memory_2 = c_rt_lib::to_nl($memory_2 eq $memory_3);
#line 302
undef($memory_3);
#line 302
label_4:
#line 302
if (c_rt_lib::check_true($memory_2)) {goto label_3;}
#line 302
$memory_2 = $memory_0->{'op'};
#line 302
$memory_3 = "ne";
#line 302
$memory_2 = c_rt_lib::to_nl($memory_2 eq $memory_3);
#line 302
undef($memory_3);
#line 302
label_3:
#line 302
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 302
if (c_rt_lib::check_true($memory_2)) {goto label_2;}
#line 310
$memory_3 = "c_rt_lib::to_nl(";
#line 310
generator_pm_priv::print($memory_1, $memory_3);
#line 310
undef($memory_3);
#line 311
$memory_3 = $memory_0->{'left'};
#line 311
generator_pm_priv::print_register($memory_3, $memory_1);
#line 311
undef($memory_3);
#line 312
$memory_3 = " ";
#line 312
$memory_4 = $memory_0->{'op'};
#line 312
$memory_3 = $memory_3 . $memory_4;
#line 312
undef($memory_4);
#line 312
$memory_4 = " ";
#line 312
$memory_3 = $memory_3 . $memory_4;
#line 312
undef($memory_4);
#line 312
generator_pm_priv::print($memory_1, $memory_3);
#line 312
undef($memory_3);
#line 313
$memory_3 = $memory_0->{'right'};
#line 313
generator_pm_priv::print_register($memory_3, $memory_1);
#line 313
undef($memory_3);
#line 314
$memory_3 = ");";
#line 314
generator_pm_priv::print($memory_1, $memory_3);
#line 314
undef($memory_3);
#line 315
goto label_1;
#line 315
label_2:
#line 316
$memory_3 = $memory_0->{'left'};
#line 316
generator_pm_priv::print_register($memory_3, $memory_1);
#line 316
undef($memory_3);
#line 317
$memory_3 = " ";
#line 317
$memory_4 = $memory_0->{'op'};
#line 317
$memory_3 = $memory_3 . $memory_4;
#line 317
undef($memory_4);
#line 317
$memory_4 = " ";
#line 317
$memory_3 = $memory_3 . $memory_4;
#line 317
undef($memory_4);
#line 317
generator_pm_priv::print($memory_1, $memory_3);
#line 317
undef($memory_3);
#line 318
$memory_3 = $memory_0->{'right'};
#line 318
generator_pm_priv::print_register($memory_3, $memory_1);
#line 318
undef($memory_3);
#line 319
$memory_3 = ";";
#line 319
generator_pm_priv::print($memory_1, $memory_3);
#line 319
undef($memory_3);
#line 320
goto label_1;
#line 320
label_1:
#line 320
undef($memory_2);
#line 320
undef($memory_0);
#line 320
$_[1] = $memory_1;return;
$_[1] = $memory_1;}

sub generator_pm_priv::print_set_at_idx($$) {
my $memory_0;my $memory_1;my $memory_2;$memory_0 = $_[0];$memory_1 = $_[1];Scalar::Util::weaken($_[1]) if ref($_[1]);
#line 324
$memory_2 = " if (c_rt_lib::get_arrcount(";
#line 324
generator_pm_priv::print($memory_1, $memory_2);
#line 324
undef($memory_2);
#line 325
$memory_2 = $memory_0->{'src'};
#line 325
generator_pm_priv::print_register($memory_2, $memory_1);
#line 325
undef($memory_2);
#line 326
$memory_2 = ") > 1) {";
#line 326
generator_pm_priv::print($memory_1, $memory_2);
#line 326
undef($memory_2);
#line 327
$memory_2 = $memory_0->{'src'};
#line 327
generator_pm_priv::print_register_to_assign($memory_2, $memory_1);
#line 327
undef($memory_2);
#line 328
$memory_2 = "[\@{";
#line 328
generator_pm_priv::print($memory_1, $memory_2);
#line 328
undef($memory_2);
#line 329
$memory_2 = $memory_0->{'src'};
#line 329
generator_pm_priv::print_register($memory_2, $memory_1);
#line 329
undef($memory_2);
#line 330
$memory_2 = "}];}";
#line 330
generator_pm_priv::print($memory_1, $memory_2);
#line 330
undef($memory_2);
#line 332
$memory_2 = $memory_0->{'src'};
#line 332
generator_pm_priv::print_register($memory_2, $memory_1);
#line 332
undef($memory_2);
#line 333
$memory_2 = "->[";
#line 333
generator_pm_priv::print($memory_1, $memory_2);
#line 333
undef($memory_2);
#line 334
$memory_2 = $memory_0->{'idx'};
#line 334
generator_pm_priv::print_register($memory_2, $memory_1);
#line 334
undef($memory_2);
#line 335
$memory_2 = "] = ";
#line 335
generator_pm_priv::print($memory_1, $memory_2);
#line 335
undef($memory_2);
#line 336
$memory_2 = $memory_0->{'val'};
#line 336
generator_pm_priv::print_register($memory_2, $memory_1);
#line 336
undef($memory_2);
#line 337
$memory_2 = ";";
#line 337
generator_pm_priv::print($memory_1, $memory_2);
#line 337
undef($memory_2);
#line 337
undef($memory_0);
#line 337
$_[1] = $memory_1;return;
$_[1] = $memory_1;}

sub generator_pm_priv::print_set_val($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;$memory_0 = $_[0];$memory_1 = $_[1];Scalar::Util::weaken($_[1]) if ref($_[1]);
#line 341
$memory_2 = " if (c_rt_lib::get_hashcount(";
#line 341
generator_pm_priv::print($memory_1, $memory_2);
#line 341
undef($memory_2);
#line 342
$memory_2 = $memory_0->{'src'};
#line 342
generator_pm_priv::print_register($memory_2, $memory_1);
#line 342
undef($memory_2);
#line 343
$memory_2 = ") > 1) {";
#line 343
generator_pm_priv::print($memory_1, $memory_2);
#line 343
undef($memory_2);
#line 344
$memory_2 = $memory_0->{'src'};
#line 344
generator_pm_priv::print_register_to_assign($memory_2, $memory_1);
#line 344
undef($memory_2);
#line 345
$memory_2 = "{%{";
#line 345
generator_pm_priv::print($memory_1, $memory_2);
#line 345
undef($memory_2);
#line 346
$memory_2 = $memory_0->{'src'};
#line 346
generator_pm_priv::print_register($memory_2, $memory_1);
#line 346
undef($memory_2);
#line 347
$memory_2 = "}};}";
#line 347
generator_pm_priv::print($memory_1, $memory_2);
#line 347
undef($memory_2);
#line 348
$memory_2 = $memory_0->{'src'};
#line 348
generator_pm_priv::print_register($memory_2, $memory_1);
#line 348
undef($memory_2);
#line 349
$memory_2 = "->{'";
#line 349
$memory_3 = $memory_0->{'key'};
#line 349
$memory_2 = $memory_2 . $memory_3;
#line 349
undef($memory_3);
#line 349
$memory_3 = "'} = ";
#line 349
$memory_2 = $memory_2 . $memory_3;
#line 349
undef($memory_3);
#line 349
generator_pm_priv::print($memory_1, $memory_2);
#line 349
undef($memory_2);
#line 350
$memory_2 = $memory_0->{'val'};
#line 350
generator_pm_priv::print_register($memory_2, $memory_1);
#line 350
undef($memory_2);
#line 351
$memory_2 = ";";
#line 351
generator_pm_priv::print($memory_1, $memory_2);
#line 351
undef($memory_2);
#line 351
undef($memory_0);
#line 351
$_[1] = $memory_1;return;
$_[1] = $memory_1;}

sub generator_pm_priv::print_ov_mk($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;$memory_0 = $_[0];$memory_1 = $_[1];Scalar::Util::weaken($_[1]) if ref($_[1]);
#line 355
$memory_2 = $memory_0->{'dest'};
#line 355
generator_pm_priv::print_register_to_assign($memory_2, $memory_1);
#line 355
undef($memory_2);
#line 356
$memory_2 = $memory_0->{'src'};
#line 356
$memory_2 = c_rt_lib::ov_is($memory_2, 'emp');
#line 356
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 356
if (c_rt_lib::check_true($memory_3)) {goto label_3;}
#line 356
$memory_2 = $memory_0->{'name'};
#line 356
$memory_4 = "TRUE";
#line 356
$memory_2 = c_rt_lib::to_nl($memory_2 eq $memory_4);
#line 356
undef($memory_4);
#line 356
label_3:
#line 356
undef($memory_3);
#line 356
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 356
if (c_rt_lib::check_true($memory_2)) {goto label_2;}
#line 357
$memory_3 = "c_rt_lib::to_nl(1);";
#line 357
generator_pm_priv::print($memory_1, $memory_3);
#line 357
undef($memory_3);
#line 358
goto label_1;
#line 358
label_2:
#line 358
$memory_2 = $memory_0->{'src'};
#line 358
$memory_2 = c_rt_lib::ov_is($memory_2, 'emp');
#line 358
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 358
if (c_rt_lib::check_true($memory_3)) {goto label_5;}
#line 358
$memory_2 = $memory_0->{'name'};
#line 358
$memory_4 = "FALSE";
#line 358
$memory_2 = c_rt_lib::to_nl($memory_2 eq $memory_4);
#line 358
undef($memory_4);
#line 358
label_5:
#line 358
undef($memory_3);
#line 358
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 358
if (c_rt_lib::check_true($memory_2)) {goto label_4;}
#line 359
$memory_3 = "c_rt_lib::to_nl(0);";
#line 359
generator_pm_priv::print($memory_1, $memory_3);
#line 359
undef($memory_3);
#line 360
goto label_1;
#line 360
label_4:
#line 361
$memory_3 = $memory_0->{'src'};
#line 361
$memory_4 = c_rt_lib::ov_is($memory_3, 'arg');
#line 361
if (c_rt_lib::check_true($memory_4)) {goto label_7;}
#line 365
$memory_4 = c_rt_lib::ov_is($memory_3, 'emp');
#line 365
if (c_rt_lib::check_true($memory_4)) {goto label_8;}
#line 365
$memory_4 = "NOMATCHALERT";
#line 365
$memory_4 = [$memory_4,$memory_3];
#line 365
die(dfile::ssave($memory_4));
#line 361
label_7:
#line 361
$memory_5 = c_rt_lib::ov_as($memory_3, 'arg');
#line 362
$memory_6 = "c_rt_lib::ov_mk_arg('";
#line 362
$memory_7 = $memory_0->{'name'};
#line 362
$memory_6 = $memory_6 . $memory_7;
#line 362
undef($memory_7);
#line 362
$memory_7 = "', ";
#line 362
$memory_6 = $memory_6 . $memory_7;
#line 362
undef($memory_7);
#line 362
generator_pm_priv::print($memory_1, $memory_6);
#line 362
undef($memory_6);
#line 363
generator_pm_priv::print_register($memory_5, $memory_1);
#line 364
$memory_6 = ");";
#line 364
generator_pm_priv::print($memory_1, $memory_6);
#line 364
undef($memory_6);
#line 364
undef($memory_5);
#line 365
goto label_6;
#line 365
label_8:
#line 366
$memory_5 = "c_rt_lib::ov_mk_none('";
#line 366
$memory_6 = $memory_0->{'name'};
#line 366
$memory_5 = $memory_5 . $memory_6;
#line 366
undef($memory_6);
#line 366
$memory_6 = "');";
#line 366
$memory_5 = $memory_5 . $memory_6;
#line 366
undef($memory_6);
#line 366
generator_pm_priv::print($memory_1, $memory_5);
#line 366
undef($memory_5);
#line 367
goto label_6;
#line 367
label_6:
#line 367
undef($memory_3);
#line 367
undef($memory_4);
#line 368
goto label_1;
#line 368
label_1:
#line 368
undef($memory_2);
#line 368
undef($memory_0);
#line 368
$_[1] = $memory_1;return;
$_[1] = $memory_1;}

sub generator_pm_priv::print_register($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;$memory_0 = $_[0];$memory_1 = $_[1];Scalar::Util::weaken($_[1]) if ref($_[1]);
#line 372
$memory_2 = "";
#line 372
$memory_2 = c_rt_lib::to_nl($memory_0 eq $memory_2);
#line 372
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 372
if (c_rt_lib::check_true($memory_2)) {goto label_2;}
#line 372
undef($memory_0);
#line 372
undef($memory_2);
#line 372
$_[1] = $memory_1;return;
#line 372
goto label_2;
#line 372
label_2:
#line 372
undef($memory_2);
#line 373
$memory_2 = "\$memory_";
#line 373
$memory_2 = $memory_2 . $memory_0;
#line 373
$memory_3 = "";
#line 373
$memory_2 = $memory_2 . $memory_3;
#line 373
undef($memory_3);
#line 373
generator_pm_priv::print($memory_1, $memory_2);
#line 373
undef($memory_2);
#line 373
undef($memory_0);
#line 373
$_[1] = $memory_1;return;
$_[1] = $memory_1;}

sub generator_pm_priv::print_register_to_assign($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;$memory_0 = $_[0];$memory_1 = $_[1];Scalar::Util::weaken($_[1]) if ref($_[1]);
#line 377
generator_pm_priv::print_register($memory_0, $memory_1);
#line 378
$memory_2 = "";
#line 378
$memory_2 = c_rt_lib::to_nl($memory_0 ne $memory_2);
#line 378
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 378
if (c_rt_lib::check_true($memory_2)) {goto label_2;}
#line 378
$memory_3 = " = ";
#line 378
generator_pm_priv::print($memory_1, $memory_3);
#line 378
undef($memory_3);
#line 378
goto label_2;
#line 378
label_2:
#line 378
undef($memory_2);
#line 378
undef($memory_0);
#line 378
$_[1] = $memory_1;return;
$_[1] = $memory_1;}
