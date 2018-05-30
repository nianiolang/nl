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
#line 20
$memory_2 = ptd::sim();
#line 20
$memory_3 = ptd::sim();
#line 20
$memory_4 = {
	module => "generator_pm",
	name => "fun_args_t",
};
#line 20
$memory_4 = c_rt_lib::ov_mk_arg('ref', $memory_4);
#line 20
$memory_1 = {perl_file => $memory_2,module_name => $memory_3,fun_args => $memory_4,};
#line 20
undef($memory_2);
#line 20
undef($memory_3);
#line 20
undef($memory_4);
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
sub generator_pm::state_t() {
	$_state_t = generator_pm::__state_t() unless defined $_state_t;
	return $_state_t;
}

sub generator_pm_priv::print($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];
#line 24
$memory_2 = "perl_file";
#line 24
$memory_2 = c_rt_lib::get_ref_hash($memory_0, $memory_2);
#line 24
$memory_2 = $memory_2 . $memory_1;
#line 24
$memory_3 = "perl_file";
#line 24
c_rt_lib::set_ref_hash($memory_0, $memory_3, $memory_2);
#line 24
undef($memory_3);
#line 24
undef($memory_2);
#line 24
undef($memory_1);
#line 24
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub generator_pm::generate($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;$memory_0 = $_[0];
#line 28
$memory_2 = "";
#line 28
$memory_3 = $memory_0->{'module_name'};
#line 28
$memory_4 = [];
#line 28
$memory_1 = {perl_file => $memory_2,module_name => $memory_3,fun_args => $memory_4,};
#line 28
undef($memory_2);
#line 28
undef($memory_3);
#line 28
undef($memory_4);
#line 29
$memory_2 = "use c_rt_lib;";
#line 29
$memory_3 = string::lf();
#line 29
$memory_2 = $memory_2 . $memory_3;
#line 29
undef($memory_3);
#line 29
generator_pm_priv::print($memory_1, $memory_2);
#line 29
undef($memory_2);
#line 30
$memory_2 = $memory_0->{'imports'};
#line 30
generator_pm_priv::print_imports($memory_2, $memory_1);
#line 30
undef($memory_2);
#line 31
$memory_2 = $memory_0->{'functions'};
#line 31
$memory_4 = 0;
#line 31
$memory_5 = 1;
#line 31
$memory_6 = c_rt_lib::array_len($memory_2);
#line 31
label_20:
#line 31
$memory_7 = c_rt_lib::to_nl($memory_4 >= $memory_6);
#line 31
if (c_rt_lib::check_true($memory_7)) {goto label_41;}
#line 31
$memory_3 = $memory_2->[$memory_4];
#line 32
$memory_8 = "sub ";
#line 32
generator_pm_priv::print($memory_1, $memory_8);
#line 32
undef($memory_8);
#line 33
$memory_8 = $memory_3->{'access'};
#line 33
generator_pm_priv::print_function_access($memory_8, $memory_1);
#line 33
undef($memory_8);
#line 34
$memory_8 = $memory_3->{'name'};
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
generator_pm_priv::print($memory_1, $memory_8);
#line 34
undef($memory_8);
#line 35
$memory_4 = $memory_4 + $memory_5;
#line 35
goto label_20;
#line 35
label_41:
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
$memory_2 = string::lf();
#line 36
$memory_3 = "return 1;";
#line 36
$memory_2 = $memory_2 . $memory_3;
#line 36
undef($memory_3);
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
$memory_2 = $memory_0->{'functions'};
#line 37
generator_pm_priv::print_functions($memory_2, $memory_1);
#line 37
undef($memory_2);
#line 38
$memory_2 = $memory_1->{'perl_file'};
#line 38
undef($memory_0);
#line 38
undef($memory_1);
#line 38
return $memory_2;
#line 38
undef($memory_2);
#line 38
undef($memory_1);
#line 38
undef($memory_0);
#line 38
return;
}

sub generator_pm_priv::print_imports($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;$memory_0 = $_[0];$memory_1 = $_[1];Scalar::Util::weaken($_[1]) if ref($_[1]);
#line 42
$memory_3 = 0;
#line 42
$memory_4 = 1;
#line 42
$memory_5 = c_rt_lib::array_len($memory_0);
#line 42
label_3:
#line 42
$memory_6 = c_rt_lib::to_nl($memory_3 >= $memory_5);
#line 42
if (c_rt_lib::check_true($memory_6)) {goto label_19;}
#line 42
$memory_2 = $memory_0->[$memory_3];
#line 43
$memory_7 = "use ";
#line 43
$memory_7 = $memory_7 . $memory_2;
#line 43
$memory_8 = ";";
#line 43
$memory_7 = $memory_7 . $memory_8;
#line 43
undef($memory_8);
#line 43
$memory_8 = string::lf();
#line 43
$memory_7 = $memory_7 . $memory_8;
#line 43
undef($memory_8);
#line 43
generator_pm_priv::print($memory_1, $memory_7);
#line 43
undef($memory_7);
#line 44
$memory_3 = $memory_3 + $memory_4;
#line 44
goto label_3;
#line 44
label_19:
#line 44
undef($memory_2);
#line 44
undef($memory_3);
#line 44
undef($memory_4);
#line 44
undef($memory_5);
#line 44
undef($memory_6);
#line 44
undef($memory_0);
#line 44
$_[1] = $memory_1;return;
$_[1] = $memory_1;}

sub generator_pm_priv::print_functions($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;$memory_0 = $_[0];$memory_1 = $_[1];Scalar::Util::weaken($_[1]) if ref($_[1]);
#line 48
$memory_3 = 0;
#line 48
$memory_4 = 1;
#line 48
$memory_5 = c_rt_lib::array_len($memory_0);
#line 48
label_3:
#line 48
$memory_6 = c_rt_lib::to_nl($memory_3 >= $memory_5);
#line 48
if (c_rt_lib::check_true($memory_6)) {goto label_101;}
#line 48
$memory_2 = $memory_0->[$memory_3];
#line 49
$memory_7 = generator_pm_priv::is_singleton_use_function($memory_2);
#line 49
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 49
if (c_rt_lib::check_true($memory_7)) {goto label_94;}
#line 50
$memory_8 = $memory_2->{'name'};
#line 51
$memory_9 = $memory_2;
#line 52
$memory_10 = "__";
#line 52
$memory_10 = $memory_10 . $memory_8;
#line 52
$memory_11 = $memory_10;
#line 52
 if (c_rt_lib::get_hashcount($memory_9) > 1) {$memory_9 = {%{$memory_9}};}$memory_9->{'name'} = $memory_11;
#line 52
undef($memory_10);
#line 52
undef($memory_11);
#line 53
generator_pm_priv::print_function($memory_9, $memory_1);
#line 54
$memory_11 = $memory_9->{'access'};
#line 54
$memory_12 = $memory_1->{'module_name'};
#line 54
$memory_10 = generator_pm_priv::get_function_access($memory_11, $memory_12);
#line 54
undef($memory_12);
#line 54
undef($memory_11);
#line 54
$memory_11 = $memory_9->{'name'};
#line 54
$memory_10 = $memory_10 . $memory_11;
#line 54
undef($memory_11);
#line 55
$memory_11 = string::lf();
#line 55
$memory_12 = "my \$_";
#line 55
$memory_11 = $memory_11 . $memory_12;
#line 55
undef($memory_12);
#line 55
$memory_11 = $memory_11 . $memory_8;
#line 55
$memory_12 = ";";
#line 55
$memory_11 = $memory_11 . $memory_12;
#line 55
undef($memory_12);
#line 55
$memory_12 = string::lf();
#line 55
$memory_11 = $memory_11 . $memory_12;
#line 55
undef($memory_12);
#line 55
generator_pm_priv::print($memory_1, $memory_11);
#line 55
undef($memory_11);
#line 56
$memory_11 = "sub ";
#line 56
generator_pm_priv::print($memory_1, $memory_11);
#line 56
undef($memory_11);
#line 57
$memory_11 = $memory_9->{'access'};
#line 57
generator_pm_priv::print_function_access($memory_11, $memory_1);
#line 57
undef($memory_11);
#line 58
$memory_11 = "() {";
#line 58
$memory_11 = $memory_8 . $memory_11;
#line 58
$memory_12 = string::lf();
#line 58
$memory_11 = $memory_11 . $memory_12;
#line 58
undef($memory_12);
#line 58
generator_pm_priv::print($memory_1, $memory_11);
#line 58
undef($memory_11);
#line 59
$memory_11 = "	\$_";
#line 59
$memory_11 = $memory_11 . $memory_8;
#line 59
$memory_12 = " = ";
#line 59
$memory_11 = $memory_11 . $memory_12;
#line 59
undef($memory_12);
#line 59
$memory_11 = $memory_11 . $memory_10;
#line 59
generator_pm_priv::print($memory_1, $memory_11);
#line 59
undef($memory_11);
#line 60
$memory_11 = "() unless defined ";
#line 60
$memory_12 = "\$_";
#line 60
$memory_11 = $memory_11 . $memory_12;
#line 60
undef($memory_12);
#line 60
$memory_11 = $memory_11 . $memory_8;
#line 60
$memory_12 = ";";
#line 60
$memory_11 = $memory_11 . $memory_12;
#line 60
undef($memory_12);
#line 60
$memory_12 = string::lf();
#line 60
$memory_11 = $memory_11 . $memory_12;
#line 60
undef($memory_12);
#line 60
generator_pm_priv::print($memory_1, $memory_11);
#line 60
undef($memory_11);
#line 61
$memory_11 = "	return \$_";
#line 61
$memory_11 = $memory_11 . $memory_8;
#line 61
$memory_12 = ";";
#line 61
$memory_11 = $memory_11 . $memory_12;
#line 61
undef($memory_12);
#line 61
$memory_12 = string::lf();
#line 61
$memory_11 = $memory_11 . $memory_12;
#line 61
undef($memory_12);
#line 61
generator_pm_priv::print($memory_1, $memory_11);
#line 61
undef($memory_11);
#line 62
$memory_11 = "}";
#line 62
$memory_12 = string::lf();
#line 62
$memory_11 = $memory_11 . $memory_12;
#line 62
undef($memory_12);
#line 62
generator_pm_priv::print($memory_1, $memory_11);
#line 62
undef($memory_11);
#line 62
undef($memory_8);
#line 62
undef($memory_9);
#line 62
undef($memory_10);
#line 63
goto label_97;
#line 63
label_94:
#line 64
generator_pm_priv::print_function($memory_2, $memory_1);
#line 65
goto label_97;
#line 65
label_97:
#line 65
undef($memory_7);
#line 66
$memory_3 = $memory_3 + $memory_4;
#line 66
goto label_3;
#line 66
label_101:
#line 66
undef($memory_2);
#line 66
undef($memory_3);
#line 66
undef($memory_4);
#line 66
undef($memory_5);
#line 66
undef($memory_6);
#line 66
undef($memory_0);
#line 66
$_[1] = $memory_1;return;
$_[1] = $memory_1;}

sub generator_pm_priv::print_function($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;$memory_0 = $_[0];$memory_1 = $_[1];Scalar::Util::weaken($_[1]) if ref($_[1]);
#line 70
$memory_2 = $memory_0->{'args_type'};
#line 70
$memory_3 = $memory_2;
#line 70
 if (c_rt_lib::get_hashcount($memory_1) > 1) {$memory_1 = {%{$memory_1}};}$memory_1->{'fun_args'} = $memory_3;
#line 70
undef($memory_2);
#line 70
undef($memory_3);
#line 71
$memory_2 = string::lf();
#line 71
$memory_3 = "sub ";
#line 71
$memory_2 = $memory_2 . $memory_3;
#line 71
undef($memory_3);
#line 71
generator_pm_priv::print($memory_1, $memory_2);
#line 71
undef($memory_2);
#line 72
$memory_2 = $memory_0->{'access'};
#line 72
generator_pm_priv::print_function_access($memory_2, $memory_1);
#line 72
undef($memory_2);
#line 73
$memory_2 = $memory_0->{'name'};
#line 73
$memory_3 = "(";
#line 73
$memory_2 = $memory_2 . $memory_3;
#line 73
undef($memory_3);
#line 73
generator_pm_priv::print($memory_1, $memory_2);
#line 73
undef($memory_2);
#line 74
$memory_3 = $memory_0->{'args_type'};
#line 74
$memory_2 = array::len($memory_3);
#line 74
undef($memory_3);
#line 74
generator_pm_priv::print_args_dollar($memory_2, $memory_1);
#line 74
undef($memory_2);
#line 75
$memory_2 = ") {";
#line 75
$memory_3 = string::lf();
#line 75
$memory_2 = $memory_2 . $memory_3;
#line 75
undef($memory_3);
#line 75
generator_pm_priv::print($memory_1, $memory_2);
#line 75
undef($memory_2);
#line 76
$memory_2 = $memory_0->{'reg_size'};
#line 76
$memory_3 = 0;
#line 76
$memory_4 = 1;
#line 76
label_34:
#line 76
$memory_5 = c_rt_lib::to_nl($memory_3 >= $memory_2);
#line 76
if (c_rt_lib::check_true($memory_5)) {goto label_46;}
#line 77
$memory_6 = "my \$memory_";
#line 77
$memory_6 = $memory_6 . $memory_3;
#line 77
$memory_7 = ";";
#line 77
$memory_6 = $memory_6 . $memory_7;
#line 77
undef($memory_7);
#line 77
generator_pm_priv::print($memory_1, $memory_6);
#line 77
undef($memory_6);
#line 78
$memory_3 = $memory_3 + $memory_4;
#line 78
goto label_34;
#line 78
label_46:
#line 78
undef($memory_2);
#line 78
undef($memory_3);
#line 78
undef($memory_4);
#line 78
undef($memory_5);
#line 79
generator_pm_priv::move_args_to_register($memory_1);
#line 80
$memory_2 = string::lf();
#line 80
generator_pm_priv::print($memory_1, $memory_2);
#line 80
undef($memory_2);
#line 81
$memory_2 = $memory_0->{'commands'};
#line 81
generator_pm_priv::print_commands($memory_2, $memory_1);
#line 81
undef($memory_2);
#line 82
generator_pm_priv::move_register_to_ref_args($memory_1);
#line 83
$memory_2 = "}";
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
#line 83
undef($memory_0);
#line 83
$_[1] = $memory_1;return;
$_[1] = $memory_1;}

sub generator_pm_priv::is_singleton_use_function($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;my $memory_13;$memory_0 = $_[0];
#line 87
$memory_2 = $memory_0->{'args_type'};
#line 87
$memory_1 = array::len($memory_2);
#line 87
undef($memory_2);
#line 87
$memory_2 = 0;
#line 87
$memory_1 = c_rt_lib::to_nl($memory_1 > $memory_2);
#line 87
undef($memory_2);
#line 87
$memory_1 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_1));
#line 87
if (c_rt_lib::check_true($memory_1)) {goto label_14;}
#line 87
$memory_2 = c_rt_lib::to_nl(0);
#line 87
undef($memory_0);
#line 87
undef($memory_1);
#line 87
return $memory_2;
#line 87
undef($memory_2);
#line 87
goto label_14;
#line 87
label_14:
#line 87
undef($memory_1);
#line 88
$memory_1 = $memory_0->{'annotation'};
#line 88
$memory_1 = c_rt_lib::ov_is($memory_1, 'math');
#line 88
$memory_1 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_1));
#line 88
if (c_rt_lib::check_true($memory_1)) {goto label_26;}
#line 88
$memory_2 = c_rt_lib::to_nl(1);
#line 88
undef($memory_0);
#line 88
undef($memory_1);
#line 88
return $memory_2;
#line 88
undef($memory_2);
#line 88
goto label_26;
#line 88
label_26:
#line 88
undef($memory_1);
#line 89
$memory_1 = c_rt_lib::to_nl(0);
#line 91
$memory_3 = $memory_0->{'commands'};
#line 91
$memory_5 = 0;
#line 91
$memory_6 = 1;
#line 91
$memory_7 = c_rt_lib::array_len($memory_3);
#line 91
label_33:
#line 91
$memory_8 = c_rt_lib::to_nl($memory_5 >= $memory_7);
#line 91
if (c_rt_lib::check_true($memory_8)) {goto label_195;}
#line 91
$memory_4 = $memory_3->[$memory_5];
#line 92
$memory_9 = $memory_4->{'cmd'};
#line 93
$memory_10 = $memory_9;
#line 93
$memory_10 = c_rt_lib::ov_is($memory_10, 'call');
#line 93
$memory_10 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_10));
#line 93
if (c_rt_lib::check_true($memory_10)) {goto label_82;}
#line 94
$memory_11 = $memory_9;
#line 94
$memory_11 = c_rt_lib::ov_as($memory_11, 'call');
#line 95
$memory_12 = $memory_11->{'fun_name'};
#line 95
$memory_13 = "sigleton_do_not_use_without_approval";
#line 95
$memory_12 = c_rt_lib::to_nl($memory_12 eq $memory_13);
#line 95
undef($memory_13);
#line 95
$memory_12 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_12));
#line 95
$memory_12 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_12));
#line 95
if (c_rt_lib::check_true($memory_12)) {goto label_57;}
#line 95
undef($memory_9);
#line 95
undef($memory_10);
#line 95
undef($memory_11);
#line 95
undef($memory_12);
#line 95
goto label_192;
#line 95
goto label_57;
#line 95
label_57:
#line 95
undef($memory_12);
#line 96
$memory_12 = $memory_11->{'mod'};
#line 96
$memory_13 = "singleton";
#line 96
$memory_12 = c_rt_lib::to_nl($memory_12 eq $memory_13);
#line 96
undef($memory_13);
#line 96
$memory_12 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_12));
#line 96
$memory_12 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_12));
#line 96
if (c_rt_lib::check_true($memory_12)) {goto label_72;}
#line 96
undef($memory_9);
#line 96
undef($memory_10);
#line 96
undef($memory_11);
#line 96
undef($memory_12);
#line 96
goto label_192;
#line 96
goto label_72;
#line 96
label_72:
#line 96
undef($memory_12);
#line 97
$memory_12 = c_rt_lib::to_nl(1);
#line 97
$memory_1 = $memory_12;
#line 97
undef($memory_12);
#line 98
$memory_12 = $memory_11->{'dest'};
#line 98
$memory_2 = $memory_12;
#line 98
undef($memory_12);
#line 98
undef($memory_11);
#line 99
goto label_189;
#line 99
label_82:
#line 99
$memory_10 = $memory_9;
#line 99
$memory_10 = c_rt_lib::ov_is($memory_10, 'return');
#line 99
$memory_10 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_10));
#line 99
if (c_rt_lib::check_true($memory_10)) {goto label_154;}
#line 100
$memory_11 = $memory_1;
#line 100
$memory_11 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_11));
#line 100
$memory_11 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_11));
#line 100
if (c_rt_lib::check_true($memory_11)) {goto label_107;}
#line 100
$memory_12 = c_rt_lib::to_nl(0);
#line 100
undef($memory_0);
#line 100
undef($memory_1);
#line 100
undef($memory_2);
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
#line 100
undef($memory_9);
#line 100
undef($memory_10);
#line 100
undef($memory_11);
#line 100
return $memory_12;
#line 100
undef($memory_12);
#line 100
goto label_107;
#line 100
label_107:
#line 100
undef($memory_11);
#line 101
$memory_11 = $memory_9;
#line 101
$memory_11 = c_rt_lib::ov_as($memory_11, 'return');
#line 102
$memory_12 = $memory_11;
#line 102
$memory_12 = c_rt_lib::ov_is($memory_12, 'val');
#line 102
$memory_12 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_12));
#line 102
$memory_12 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_12));
#line 102
if (c_rt_lib::check_true($memory_12)) {goto label_133;}
#line 102
$memory_13 = c_rt_lib::to_nl(0);
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
undef($memory_12);
#line 102
return $memory_13;
#line 102
undef($memory_13);
#line 102
goto label_133;
#line 102
label_133:
#line 102
undef($memory_12);
#line 103
$memory_12 = $memory_11;
#line 103
$memory_12 = c_rt_lib::ov_as($memory_12, 'val');
#line 103
$memory_12 = c_rt_lib::to_nl($memory_12 eq $memory_2);
#line 103
undef($memory_0);
#line 103
undef($memory_1);
#line 103
undef($memory_2);
#line 103
undef($memory_3);
#line 103
undef($memory_4);
#line 103
undef($memory_5);
#line 103
undef($memory_6);
#line 103
undef($memory_7);
#line 103
undef($memory_8);
#line 103
undef($memory_9);
#line 103
undef($memory_10);
#line 103
undef($memory_11);
#line 103
return $memory_12;
#line 103
undef($memory_12);
#line 103
undef($memory_11);
#line 104
goto label_189;
#line 104
label_154:
#line 104
$memory_10 = $memory_9;
#line 104
$memory_10 = c_rt_lib::ov_is($memory_10, 'prt_lbl');
#line 104
$memory_10 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_10));
#line 104
if (c_rt_lib::check_true($memory_10)) {goto label_160;}
#line 105
goto label_189;
#line 105
label_160:
#line 105
$memory_10 = $memory_9;
#line 105
$memory_10 = c_rt_lib::ov_is($memory_10, 'clear');
#line 105
$memory_10 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_10));
#line 105
if (c_rt_lib::check_true($memory_10)) {goto label_166;}
#line 106
goto label_189;
#line 106
label_166:
#line 107
$memory_11 = $memory_1;
#line 107
$memory_11 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_11));
#line 107
if (c_rt_lib::check_true($memory_11)) {goto label_186;}
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
goto label_186;
#line 107
label_186:
#line 107
undef($memory_11);
#line 108
goto label_189;
#line 108
label_189:
#line 108
undef($memory_10);
#line 108
undef($memory_9);
#line 108
label_192:
#line 109
$memory_5 = $memory_5 + $memory_6;
#line 109
goto label_33;
#line 109
label_195:
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
#line 110
$memory_3 = c_rt_lib::to_nl(0);
#line 110
undef($memory_0);
#line 110
undef($memory_1);
#line 110
undef($memory_2);
#line 110
return $memory_3;
#line 110
undef($memory_3);
#line 110
undef($memory_1);
#line 110
undef($memory_2);
#line 110
undef($memory_0);
#line 110
return;
}

sub generator_pm_priv::print_function_access($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;$memory_0 = $_[0];$memory_1 = $_[1];Scalar::Util::weaken($_[1]) if ref($_[1]);
#line 114
$memory_3 = $memory_1->{'module_name'};
#line 114
$memory_2 = generator_pm_priv::get_function_access($memory_0, $memory_3);
#line 114
undef($memory_3);
#line 114
generator_pm_priv::print($memory_1, $memory_2);
#line 114
undef($memory_2);
#line 114
undef($memory_0);
#line 114
$_[1] = $memory_1;return;
$_[1] = $memory_1;}

sub generator_pm_priv::get_function_access($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;$memory_0 = $_[0];$memory_1 = $_[1];
#line 118
$memory_2 = c_rt_lib::ov_is($memory_0, 'pub');
#line 118
if (c_rt_lib::check_true($memory_2)) {goto label_7;}
#line 120
$memory_2 = c_rt_lib::ov_is($memory_0, 'priv');
#line 120
if (c_rt_lib::check_true($memory_2)) {goto label_16;}
#line 120
$memory_2 = "NOMATCHALERT";
#line 120
$memory_2 = [$memory_2,$memory_0];
#line 120
die(dfile::ssave($memory_2));
#line 118
label_7:
#line 119
$memory_3 = "::";
#line 119
$memory_3 = $memory_1 . $memory_3;
#line 119
undef($memory_0);
#line 119
undef($memory_1);
#line 119
undef($memory_2);
#line 119
return $memory_3;
#line 119
undef($memory_3);
#line 120
goto label_25;
#line 120
label_16:
#line 121
$memory_3 = "_priv::";
#line 121
$memory_3 = $memory_1 . $memory_3;
#line 121
undef($memory_0);
#line 121
undef($memory_1);
#line 121
undef($memory_2);
#line 121
return $memory_3;
#line 121
undef($memory_3);
#line 122
goto label_25;
#line 122
label_25:
#line 122
undef($memory_2);
#line 122
undef($memory_0);
#line 122
undef($memory_1);
#line 122
return;
}

sub generator_pm_priv::print_args_dollar($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;$memory_0 = $_[0];$memory_1 = $_[1];Scalar::Util::weaken($_[1]) if ref($_[1]);
#line 126
$memory_2 = 0;
#line 126
$memory_3 = 1;
#line 126
label_2:
#line 126
$memory_4 = c_rt_lib::to_nl($memory_2 >= $memory_0);
#line 126
if (c_rt_lib::check_true($memory_4)) {goto label_10;}
#line 127
$memory_5 = "\$";
#line 127
generator_pm_priv::print($memory_1, $memory_5);
#line 127
undef($memory_5);
#line 128
$memory_2 = $memory_2 + $memory_3;
#line 128
goto label_2;
#line 128
label_10:
#line 128
undef($memory_2);
#line 128
undef($memory_3);
#line 128
undef($memory_4);
#line 128
undef($memory_0);
#line 128
$_[1] = $memory_1;return;
$_[1] = $memory_1;}

sub generator_pm_priv::move_args_to_register($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);
#line 132
$memory_2 = $memory_0->{'fun_args'};
#line 132
$memory_1 = array::len($memory_2);
#line 132
undef($memory_2);
#line 132
$memory_2 = 0;
#line 132
$memory_3 = 1;
#line 132
label_5:
#line 132
$memory_4 = c_rt_lib::to_nl($memory_2 >= $memory_1);
#line 132
if (c_rt_lib::check_true($memory_4)) {goto label_48;}
#line 133
$memory_5 = "\$memory_";
#line 133
$memory_5 = $memory_5 . $memory_2;
#line 133
$memory_6 = " = \$_[";
#line 133
$memory_5 = $memory_5 . $memory_6;
#line 133
undef($memory_6);
#line 133
$memory_5 = $memory_5 . $memory_2;
#line 133
$memory_6 = "];";
#line 133
$memory_5 = $memory_5 . $memory_6;
#line 133
undef($memory_6);
#line 133
generator_pm_priv::print($memory_0, $memory_5);
#line 133
undef($memory_5);
#line 134
$memory_5 = $memory_0->{'fun_args'};
#line 134
$memory_5 = $memory_5->[$memory_2];
#line 134
$memory_6 = c_rt_lib::ov_is($memory_5, 'val');
#line 134
if (c_rt_lib::check_true($memory_6)) {goto label_28;}
#line 135
$memory_6 = c_rt_lib::ov_is($memory_5, 'ref');
#line 135
if (c_rt_lib::check_true($memory_6)) {goto label_30;}
#line 135
$memory_6 = "NOMATCHALERT";
#line 135
$memory_6 = [$memory_6,$memory_5];
#line 135
die(dfile::ssave($memory_6));
#line 134
label_28:
#line 135
goto label_43;
#line 135
label_30:
#line 136
$memory_7 = "Scalar::Util::weaken(\$_[";
#line 136
$memory_7 = $memory_7 . $memory_2;
#line 136
$memory_8 = "]) if ref(\$_[";
#line 136
$memory_7 = $memory_7 . $memory_8;
#line 136
undef($memory_8);
#line 136
$memory_7 = $memory_7 . $memory_2;
#line 136
$memory_8 = "]);";
#line 136
$memory_7 = $memory_7 . $memory_8;
#line 136
undef($memory_8);
#line 136
generator_pm_priv::print($memory_0, $memory_7);
#line 136
undef($memory_7);
#line 137
goto label_43;
#line 137
label_43:
#line 137
undef($memory_5);
#line 137
undef($memory_6);
#line 138
$memory_2 = $memory_2 + $memory_3;
#line 138
goto label_5;
#line 138
label_48:
#line 138
undef($memory_1);
#line 138
undef($memory_2);
#line 138
undef($memory_3);
#line 138
undef($memory_4);
#line 138
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub generator_pm_priv::move_register_to_ref_args($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);
#line 142
$memory_2 = $memory_0->{'fun_args'};
#line 142
$memory_1 = array::len($memory_2);
#line 142
undef($memory_2);
#line 142
$memory_2 = 0;
#line 142
$memory_3 = 1;
#line 142
label_5:
#line 142
$memory_4 = c_rt_lib::to_nl($memory_2 >= $memory_1);
#line 142
if (c_rt_lib::check_true($memory_4)) {goto label_37;}
#line 143
$memory_5 = $memory_0->{'fun_args'};
#line 143
$memory_5 = $memory_5->[$memory_2];
#line 143
$memory_6 = c_rt_lib::ov_is($memory_5, 'val');
#line 143
if (c_rt_lib::check_true($memory_6)) {goto label_17;}
#line 144
$memory_6 = c_rt_lib::ov_is($memory_5, 'ref');
#line 144
if (c_rt_lib::check_true($memory_6)) {goto label_19;}
#line 144
$memory_6 = "NOMATCHALERT";
#line 144
$memory_6 = [$memory_6,$memory_5];
#line 144
die(dfile::ssave($memory_6));
#line 143
label_17:
#line 144
goto label_32;
#line 144
label_19:
#line 145
$memory_7 = "\$_[";
#line 145
$memory_7 = $memory_7 . $memory_2;
#line 145
$memory_8 = "] = \$memory_";
#line 145
$memory_7 = $memory_7 . $memory_8;
#line 145
undef($memory_8);
#line 145
$memory_7 = $memory_7 . $memory_2;
#line 145
$memory_8 = ";";
#line 145
$memory_7 = $memory_7 . $memory_8;
#line 145
undef($memory_8);
#line 145
generator_pm_priv::print($memory_0, $memory_7);
#line 145
undef($memory_7);
#line 146
goto label_32;
#line 146
label_32:
#line 146
undef($memory_5);
#line 146
undef($memory_6);
#line 147
$memory_2 = $memory_2 + $memory_3;
#line 147
goto label_5;
#line 147
label_37:
#line 147
undef($memory_1);
#line 147
undef($memory_2);
#line 147
undef($memory_3);
#line 147
undef($memory_4);
#line 147
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub generator_pm_priv::print_commands($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;$memory_0 = $_[0];$memory_1 = $_[1];Scalar::Util::weaken($_[1]) if ref($_[1]);
#line 151
$memory_3 = 0;
#line 151
$memory_4 = 1;
#line 151
$memory_5 = c_rt_lib::array_len($memory_0);
#line 151
label_3:
#line 151
$memory_6 = c_rt_lib::to_nl($memory_3 >= $memory_5);
#line 151
if (c_rt_lib::check_true($memory_6)) {goto label_10;}
#line 151
$memory_2 = $memory_0->[$memory_3];
#line 152
generator_pm_priv::print_command($memory_2, $memory_1);
#line 153
$memory_3 = $memory_3 + $memory_4;
#line 153
goto label_3;
#line 153
label_10:
#line 153
undef($memory_2);
#line 153
undef($memory_3);
#line 153
undef($memory_4);
#line 153
undef($memory_5);
#line 153
undef($memory_6);
#line 153
undef($memory_0);
#line 153
$_[1] = $memory_1;return;
$_[1] = $memory_1;}

sub generator_pm_priv::print_command($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;my $memory_13;$memory_0 = $_[0];$memory_1 = $_[1];Scalar::Util::weaken($_[1]) if ref($_[1]);
#line 157
$memory_2 = "#line ";
#line 157
$memory_3 = $memory_0->{'debug'};
#line 157
$memory_3 = $memory_3->{'nast_debug'};
#line 157
$memory_3 = $memory_3->{'begin'};
#line 157
$memory_3 = $memory_3->{'line'};
#line 157
$memory_2 = $memory_2 . $memory_3;
#line 157
undef($memory_3);
#line 157
$memory_3 = string::lf();
#line 157
$memory_2 = $memory_2 . $memory_3;
#line 157
undef($memory_3);
#line 157
generator_pm_priv::print($memory_1, $memory_2);
#line 157
undef($memory_2);
#line 158
$memory_2 = $memory_0->{'cmd'};
#line 158
$memory_3 = c_rt_lib::ov_is($memory_2, 'arr_decl');
#line 158
if (c_rt_lib::check_true($memory_3)) {goto label_58;}
#line 170
$memory_3 = c_rt_lib::ov_is($memory_2, 'hash_decl');
#line 170
if (c_rt_lib::check_true($memory_3)) {goto label_104;}
#line 180
$memory_3 = c_rt_lib::ov_is($memory_2, 'call');
#line 180
if (c_rt_lib::check_true($memory_3)) {goto label_146;}
#line 182
$memory_3 = c_rt_lib::ov_is($memory_2, 'func');
#line 182
if (c_rt_lib::check_true($memory_3)) {goto label_151;}
#line 185
$memory_3 = c_rt_lib::ov_is($memory_2, 'una_op');
#line 185
if (c_rt_lib::check_true($memory_3)) {goto label_170;}
#line 187
$memory_3 = c_rt_lib::ov_is($memory_2, 'bin_op');
#line 187
if (c_rt_lib::check_true($memory_3)) {goto label_175;}
#line 189
$memory_3 = c_rt_lib::ov_is($memory_2, 'ov_is');
#line 189
if (c_rt_lib::check_true($memory_3)) {goto label_180;}
#line 194
$memory_3 = c_rt_lib::ov_is($memory_2, 'ov_as');
#line 194
if (c_rt_lib::check_true($memory_3)) {goto label_202;}
#line 199
$memory_3 = c_rt_lib::ov_is($memory_2, 'return');
#line 199
if (c_rt_lib::check_true($memory_3)) {goto label_224;}
#line 208
$memory_3 = c_rt_lib::ov_is($memory_2, 'die');
#line 208
if (c_rt_lib::check_true($memory_3)) {goto label_254;}
#line 212
$memory_3 = c_rt_lib::ov_is($memory_2, 'move');
#line 212
if (c_rt_lib::check_true($memory_3)) {goto label_265;}
#line 216
$memory_3 = c_rt_lib::ov_is($memory_2, 'load_const');
#line 216
if (c_rt_lib::check_true($memory_3)) {goto label_278;}
#line 223
$memory_3 = c_rt_lib::ov_is($memory_2, 'get_frm_idx');
#line 223
if (c_rt_lib::check_true($memory_3)) {goto label_330;}
#line 229
$memory_3 = c_rt_lib::ov_is($memory_2, 'set_at_idx');
#line 229
if (c_rt_lib::check_true($memory_3)) {goto label_349;}
#line 231
$memory_3 = c_rt_lib::ov_is($memory_2, 'get_val');
#line 231
if (c_rt_lib::check_true($memory_3)) {goto label_354;}
#line 235
$memory_3 = c_rt_lib::ov_is($memory_2, 'set_val');
#line 235
if (c_rt_lib::check_true($memory_3)) {goto label_373;}
#line 237
$memory_3 = c_rt_lib::ov_is($memory_2, 'ov_mk');
#line 237
if (c_rt_lib::check_true($memory_3)) {goto label_378;}
#line 239
$memory_3 = c_rt_lib::ov_is($memory_2, 'prt_lbl');
#line 239
if (c_rt_lib::check_true($memory_3)) {goto label_383;}
#line 241
$memory_3 = c_rt_lib::ov_is($memory_2, 'if_goto');
#line 241
if (c_rt_lib::check_true($memory_3)) {goto label_394;}
#line 247
$memory_3 = c_rt_lib::ov_is($memory_2, 'goto');
#line 247
if (c_rt_lib::check_true($memory_3)) {goto label_419;}
#line 249
$memory_3 = c_rt_lib::ov_is($memory_2, 'clear');
#line 249
if (c_rt_lib::check_true($memory_3)) {goto label_430;}
#line 249
$memory_3 = "NOMATCHALERT";
#line 249
$memory_3 = [$memory_3,$memory_2];
#line 249
die(dfile::ssave($memory_3));
#line 158
label_58:
#line 158
$memory_4 = c_rt_lib::ov_as($memory_2, 'arr_decl');
#line 159
$memory_5 = $memory_4->{'dest'};
#line 159
generator_pm_priv::print_register_to_assign($memory_5, $memory_1);
#line 159
undef($memory_5);
#line 160
$memory_5 = "[";
#line 160
generator_pm_priv::print($memory_1, $memory_5);
#line 160
undef($memory_5);
#line 161
$memory_5 = 0;
#line 162
$memory_6 = $memory_4->{'src'};
#line 162
$memory_8 = 0;
#line 162
$memory_9 = 1;
#line 162
$memory_10 = c_rt_lib::array_len($memory_6);
#line 162
label_71:
#line 162
$memory_11 = c_rt_lib::to_nl($memory_8 >= $memory_10);
#line 162
if (c_rt_lib::check_true($memory_11)) {goto label_91;}
#line 162
$memory_7 = $memory_6->[$memory_8];
#line 163
$memory_12 = 0;
#line 163
$memory_12 = c_rt_lib::to_nl($memory_5 > $memory_12);
#line 163
$memory_12 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_12));
#line 163
if (c_rt_lib::check_true($memory_12)) {goto label_83;}
#line 164
$memory_13 = ",";
#line 164
generator_pm_priv::print($memory_1, $memory_13);
#line 164
undef($memory_13);
#line 165
goto label_83;
#line 165
label_83:
#line 165
undef($memory_12);
#line 166
generator_pm_priv::print_register($memory_7, $memory_1);
#line 167
$memory_12 = 1;
#line 167
$memory_5 = $memory_5 + $memory_12;
#line 167
undef($memory_12);
#line 168
$memory_8 = $memory_8 + $memory_9;
#line 168
goto label_71;
#line 168
label_91:
#line 168
undef($memory_6);
#line 168
undef($memory_7);
#line 168
undef($memory_8);
#line 168
undef($memory_9);
#line 168
undef($memory_10);
#line 168
undef($memory_11);
#line 169
$memory_6 = "];";
#line 169
generator_pm_priv::print($memory_1, $memory_6);
#line 169
undef($memory_6);
#line 169
undef($memory_5);
#line 169
undef($memory_4);
#line 170
goto label_441;
#line 170
label_104:
#line 170
$memory_4 = c_rt_lib::ov_as($memory_2, 'hash_decl');
#line 171
$memory_5 = $memory_4->{'dest'};
#line 171
generator_pm_priv::print_register_to_assign($memory_5, $memory_1);
#line 171
undef($memory_5);
#line 172
$memory_5 = "{";
#line 172
generator_pm_priv::print($memory_1, $memory_5);
#line 172
undef($memory_5);
#line 173
$memory_5 = $memory_4->{'src'};
#line 173
$memory_7 = 0;
#line 173
$memory_8 = 1;
#line 173
$memory_9 = c_rt_lib::array_len($memory_5);
#line 173
label_116:
#line 173
$memory_10 = c_rt_lib::to_nl($memory_7 >= $memory_9);
#line 173
if (c_rt_lib::check_true($memory_10)) {goto label_134;}
#line 173
$memory_6 = $memory_5->[$memory_7];
#line 174
$memory_11 = $memory_6->{'key'};
#line 174
generator_pm_priv::print($memory_1, $memory_11);
#line 174
undef($memory_11);
#line 175
$memory_11 = " => ";
#line 175
generator_pm_priv::print($memory_1, $memory_11);
#line 175
undef($memory_11);
#line 176
$memory_11 = $memory_6->{'val'};
#line 176
generator_pm_priv::print_register($memory_11, $memory_1);
#line 176
undef($memory_11);
#line 177
$memory_11 = ",";
#line 177
generator_pm_priv::print($memory_1, $memory_11);
#line 177
undef($memory_11);
#line 178
$memory_7 = $memory_7 + $memory_8;
#line 178
goto label_116;
#line 178
label_134:
#line 178
undef($memory_5);
#line 178
undef($memory_6);
#line 178
undef($memory_7);
#line 178
undef($memory_8);
#line 178
undef($memory_9);
#line 178
undef($memory_10);
#line 179
$memory_5 = "};";
#line 179
generator_pm_priv::print($memory_1, $memory_5);
#line 179
undef($memory_5);
#line 179
undef($memory_4);
#line 180
goto label_441;
#line 180
label_146:
#line 180
$memory_4 = c_rt_lib::ov_as($memory_2, 'call');
#line 181
generator_pm_priv::print_call($memory_4, $memory_1);
#line 181
undef($memory_4);
#line 182
goto label_441;
#line 182
label_151:
#line 182
$memory_4 = c_rt_lib::ov_as($memory_2, 'func');
#line 183
$memory_5 = $memory_4->{'dest'};
#line 183
generator_pm_priv::print_register_to_assign($memory_5, $memory_1);
#line 183
undef($memory_5);
#line 184
$memory_7 = $memory_4->{'module'};
#line 184
$memory_8 = $memory_4->{'name'};
#line 184
$memory_6 = {module => $memory_7,name => $memory_8,};
#line 184
undef($memory_7);
#line 184
undef($memory_8);
#line 184
$memory_5 = dfile::ssave($memory_6);
#line 184
undef($memory_6);
#line 184
$memory_6 = ";";
#line 184
$memory_5 = $memory_5 . $memory_6;
#line 184
undef($memory_6);
#line 184
generator_pm_priv::print($memory_1, $memory_5);
#line 184
undef($memory_5);
#line 184
undef($memory_4);
#line 185
goto label_441;
#line 185
label_170:
#line 185
$memory_4 = c_rt_lib::ov_as($memory_2, 'una_op');
#line 186
generator_pm_priv::print_una_op($memory_4, $memory_1);
#line 186
undef($memory_4);
#line 187
goto label_441;
#line 187
label_175:
#line 187
$memory_4 = c_rt_lib::ov_as($memory_2, 'bin_op');
#line 188
generator_pm_priv::print_bin_op($memory_4, $memory_1);
#line 188
undef($memory_4);
#line 189
goto label_441;
#line 189
label_180:
#line 189
$memory_4 = c_rt_lib::ov_as($memory_2, 'ov_is');
#line 190
$memory_5 = $memory_4->{'dest'};
#line 190
generator_pm_priv::print_register_to_assign($memory_5, $memory_1);
#line 190
undef($memory_5);
#line 191
$memory_5 = "c_rt_lib::ov_is(";
#line 191
generator_pm_priv::print($memory_1, $memory_5);
#line 191
undef($memory_5);
#line 192
$memory_5 = $memory_4->{'src'};
#line 192
generator_pm_priv::print_register($memory_5, $memory_1);
#line 192
undef($memory_5);
#line 193
$memory_5 = ", '";
#line 193
$memory_6 = $memory_4->{'type'};
#line 193
$memory_5 = $memory_5 . $memory_6;
#line 193
undef($memory_6);
#line 193
$memory_6 = "');";
#line 193
$memory_5 = $memory_5 . $memory_6;
#line 193
undef($memory_6);
#line 193
generator_pm_priv::print($memory_1, $memory_5);
#line 193
undef($memory_5);
#line 193
undef($memory_4);
#line 194
goto label_441;
#line 194
label_202:
#line 194
$memory_4 = c_rt_lib::ov_as($memory_2, 'ov_as');
#line 195
$memory_5 = $memory_4->{'dest'};
#line 195
generator_pm_priv::print_register_to_assign($memory_5, $memory_1);
#line 195
undef($memory_5);
#line 196
$memory_5 = "c_rt_lib::ov_as(";
#line 196
generator_pm_priv::print($memory_1, $memory_5);
#line 196
undef($memory_5);
#line 197
$memory_5 = $memory_4->{'src'};
#line 197
generator_pm_priv::print_register($memory_5, $memory_1);
#line 197
undef($memory_5);
#line 198
$memory_5 = ", '";
#line 198
$memory_6 = $memory_4->{'type'};
#line 198
$memory_5 = $memory_5 . $memory_6;
#line 198
undef($memory_6);
#line 198
$memory_6 = "');";
#line 198
$memory_5 = $memory_5 . $memory_6;
#line 198
undef($memory_6);
#line 198
generator_pm_priv::print($memory_1, $memory_5);
#line 198
undef($memory_5);
#line 198
undef($memory_4);
#line 199
goto label_441;
#line 199
label_224:
#line 199
$memory_4 = c_rt_lib::ov_as($memory_2, 'return');
#line 200
generator_pm_priv::move_register_to_ref_args($memory_1);
#line 201
$memory_5 = c_rt_lib::ov_is($memory_4, 'val');
#line 201
if (c_rt_lib::check_true($memory_5)) {goto label_234;}
#line 205
$memory_5 = c_rt_lib::ov_is($memory_4, 'emp');
#line 205
if (c_rt_lib::check_true($memory_5)) {goto label_245;}
#line 205
$memory_5 = "NOMATCHALERT";
#line 205
$memory_5 = [$memory_5,$memory_4];
#line 205
die(dfile::ssave($memory_5));
#line 201
label_234:
#line 201
$memory_6 = c_rt_lib::ov_as($memory_4, 'val');
#line 202
$memory_7 = "return ";
#line 202
generator_pm_priv::print($memory_1, $memory_7);
#line 202
undef($memory_7);
#line 203
generator_pm_priv::print_register($memory_6, $memory_1);
#line 204
$memory_7 = ";";
#line 204
generator_pm_priv::print($memory_1, $memory_7);
#line 204
undef($memory_7);
#line 204
undef($memory_6);
#line 205
goto label_250;
#line 205
label_245:
#line 206
$memory_6 = "return;";
#line 206
generator_pm_priv::print($memory_1, $memory_6);
#line 206
undef($memory_6);
#line 207
goto label_250;
#line 207
label_250:
#line 207
undef($memory_5);
#line 207
undef($memory_4);
#line 208
goto label_441;
#line 208
label_254:
#line 208
$memory_4 = c_rt_lib::ov_as($memory_2, 'die');
#line 209
$memory_5 = "die(dfile::ssave(";
#line 209
generator_pm_priv::print($memory_1, $memory_5);
#line 209
undef($memory_5);
#line 210
generator_pm_priv::print_register($memory_4, $memory_1);
#line 211
$memory_5 = "));";
#line 211
generator_pm_priv::print($memory_1, $memory_5);
#line 211
undef($memory_5);
#line 211
undef($memory_4);
#line 212
goto label_441;
#line 212
label_265:
#line 212
$memory_4 = c_rt_lib::ov_as($memory_2, 'move');
#line 213
$memory_5 = $memory_4->{'dest'};
#line 213
generator_pm_priv::print_register_to_assign($memory_5, $memory_1);
#line 213
undef($memory_5);
#line 214
$memory_5 = $memory_4->{'src'};
#line 214
generator_pm_priv::print_register($memory_5, $memory_1);
#line 214
undef($memory_5);
#line 215
$memory_5 = ";";
#line 215
generator_pm_priv::print($memory_1, $memory_5);
#line 215
undef($memory_5);
#line 215
undef($memory_4);
#line 216
goto label_441;
#line 216
label_278:
#line 216
$memory_4 = c_rt_lib::ov_as($memory_2, 'load_const');
#line 217
$memory_5 = $memory_4->{'dest'};
#line 217
generator_pm_priv::print_register_to_assign($memory_5, $memory_1);
#line 217
undef($memory_5);
#line 218
$memory_8 = $memory_4->{'val'};
#line 218
$memory_5 = nl::is_sim($memory_8);
#line 218
undef($memory_8);
#line 218
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 218
if (c_rt_lib::check_true($memory_7)) {goto label_294;}
#line 218
$memory_8 = $memory_4->{'val'};
#line 218
$memory_9 = "";
#line 218
$memory_8 = $memory_8 . $memory_9;
#line 218
undef($memory_9);
#line 218
$memory_5 = string_utils::is_integer($memory_8);
#line 218
undef($memory_8);
#line 218
label_294:
#line 218
undef($memory_7);
#line 218
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 218
if (c_rt_lib::check_true($memory_6)) {goto label_305;}
#line 218
$memory_5 = 0;
#line 218
$memory_7 = $memory_4->{'val'};
#line 218
$memory_5 = $memory_5 + $memory_7;
#line 218
undef($memory_7);
#line 218
$memory_7 = $memory_4->{'val'};
#line 218
$memory_5 = c_rt_lib::to_nl($memory_5 eq $memory_7);
#line 218
undef($memory_7);
#line 218
label_305:
#line 218
undef($memory_6);
#line 218
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 218
if (c_rt_lib::check_true($memory_5)) {goto label_316;}
#line 219
$memory_6 = $memory_4->{'val'};
#line 219
$memory_7 = ";";
#line 219
$memory_6 = $memory_6 . $memory_7;
#line 219
undef($memory_7);
#line 219
generator_pm_priv::print($memory_1, $memory_6);
#line 219
undef($memory_6);
#line 220
goto label_326;
#line 220
label_316:
#line 221
$memory_7 = $memory_4->{'val'};
#line 221
$memory_6 = dfile::ssave($memory_7);
#line 221
undef($memory_7);
#line 221
$memory_7 = ";";
#line 221
$memory_6 = $memory_6 . $memory_7;
#line 221
undef($memory_7);
#line 221
generator_pm_priv::print($memory_1, $memory_6);
#line 221
undef($memory_6);
#line 222
goto label_326;
#line 222
label_326:
#line 222
undef($memory_5);
#line 222
undef($memory_4);
#line 223
goto label_441;
#line 223
label_330:
#line 223
$memory_4 = c_rt_lib::ov_as($memory_2, 'get_frm_idx');
#line 224
$memory_5 = $memory_4->{'dest'};
#line 224
generator_pm_priv::print_register_to_assign($memory_5, $memory_1);
#line 224
undef($memory_5);
#line 225
$memory_5 = $memory_4->{'src'};
#line 225
generator_pm_priv::print_register($memory_5, $memory_1);
#line 225
undef($memory_5);
#line 226
$memory_5 = "->[";
#line 226
generator_pm_priv::print($memory_1, $memory_5);
#line 226
undef($memory_5);
#line 227
$memory_5 = $memory_4->{'idx'};
#line 227
generator_pm_priv::print_register($memory_5, $memory_1);
#line 227
undef($memory_5);
#line 228
$memory_5 = "];";
#line 228
generator_pm_priv::print($memory_1, $memory_5);
#line 228
undef($memory_5);
#line 228
undef($memory_4);
#line 229
goto label_441;
#line 229
label_349:
#line 229
$memory_4 = c_rt_lib::ov_as($memory_2, 'set_at_idx');
#line 230
generator_pm_priv::print_set_at_idx($memory_4, $memory_1);
#line 230
undef($memory_4);
#line 231
goto label_441;
#line 231
label_354:
#line 231
$memory_4 = c_rt_lib::ov_as($memory_2, 'get_val');
#line 232
$memory_5 = $memory_4->{'dest'};
#line 232
generator_pm_priv::print_register_to_assign($memory_5, $memory_1);
#line 232
undef($memory_5);
#line 233
$memory_5 = $memory_4->{'src'};
#line 233
generator_pm_priv::print_register($memory_5, $memory_1);
#line 233
undef($memory_5);
#line 234
$memory_5 = "->{'";
#line 234
$memory_6 = $memory_4->{'key'};
#line 234
$memory_5 = $memory_5 . $memory_6;
#line 234
undef($memory_6);
#line 234
$memory_6 = "'};";
#line 234
$memory_5 = $memory_5 . $memory_6;
#line 234
undef($memory_6);
#line 234
generator_pm_priv::print($memory_1, $memory_5);
#line 234
undef($memory_5);
#line 234
undef($memory_4);
#line 235
goto label_441;
#line 235
label_373:
#line 235
$memory_4 = c_rt_lib::ov_as($memory_2, 'set_val');
#line 236
generator_pm_priv::print_set_val($memory_4, $memory_1);
#line 236
undef($memory_4);
#line 237
goto label_441;
#line 237
label_378:
#line 237
$memory_4 = c_rt_lib::ov_as($memory_2, 'ov_mk');
#line 238
generator_pm_priv::print_ov_mk($memory_4, $memory_1);
#line 238
undef($memory_4);
#line 239
goto label_441;
#line 239
label_383:
#line 239
$memory_4 = c_rt_lib::ov_as($memory_2, 'prt_lbl');
#line 240
$memory_5 = "label_";
#line 240
$memory_5 = $memory_5 . $memory_4;
#line 240
$memory_6 = ":";
#line 240
$memory_5 = $memory_5 . $memory_6;
#line 240
undef($memory_6);
#line 240
generator_pm_priv::print($memory_1, $memory_5);
#line 240
undef($memory_5);
#line 240
undef($memory_4);
#line 241
goto label_441;
#line 241
label_394:
#line 241
$memory_4 = c_rt_lib::ov_as($memory_2, 'if_goto');
#line 242
$memory_5 = "if (c_rt_lib::check_true(";
#line 242
generator_pm_priv::print($memory_1, $memory_5);
#line 242
undef($memory_5);
#line 243
$memory_5 = $memory_4->{'src'};
#line 243
generator_pm_priv::print_register($memory_5, $memory_1);
#line 243
undef($memory_5);
#line 244
$memory_5 = ")) {";
#line 244
generator_pm_priv::print($memory_1, $memory_5);
#line 244
undef($memory_5);
#line 245
$memory_5 = "goto label_";
#line 245
$memory_6 = $memory_4->{'dest'};
#line 245
$memory_5 = $memory_5 . $memory_6;
#line 245
undef($memory_6);
#line 245
$memory_6 = ";";
#line 245
$memory_5 = $memory_5 . $memory_6;
#line 245
undef($memory_6);
#line 245
generator_pm_priv::print($memory_1, $memory_5);
#line 245
undef($memory_5);
#line 246
$memory_5 = "}";
#line 246
generator_pm_priv::print($memory_1, $memory_5);
#line 246
undef($memory_5);
#line 246
undef($memory_4);
#line 247
goto label_441;
#line 247
label_419:
#line 247
$memory_4 = c_rt_lib::ov_as($memory_2, 'goto');
#line 248
$memory_5 = "goto label_";
#line 248
$memory_5 = $memory_5 . $memory_4;
#line 248
$memory_6 = ";";
#line 248
$memory_5 = $memory_5 . $memory_6;
#line 248
undef($memory_6);
#line 248
generator_pm_priv::print($memory_1, $memory_5);
#line 248
undef($memory_5);
#line 248
undef($memory_4);
#line 249
goto label_441;
#line 249
label_430:
#line 249
$memory_4 = c_rt_lib::ov_as($memory_2, 'clear');
#line 250
$memory_5 = "undef(";
#line 250
generator_pm_priv::print($memory_1, $memory_5);
#line 250
undef($memory_5);
#line 251
generator_pm_priv::print_register($memory_4, $memory_1);
#line 252
$memory_5 = ");";
#line 252
generator_pm_priv::print($memory_1, $memory_5);
#line 252
undef($memory_5);
#line 252
undef($memory_4);
#line 253
goto label_441;
#line 253
label_441:
#line 253
undef($memory_2);
#line 253
undef($memory_3);
#line 254
$memory_2 = string::lf();
#line 254
generator_pm_priv::print($memory_1, $memory_2);
#line 254
undef($memory_2);
#line 254
undef($memory_0);
#line 254
$_[1] = $memory_1;return;
$_[1] = $memory_1;}

sub generator_pm_priv::print_call($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;$memory_0 = $_[0];$memory_1 = $_[1];Scalar::Util::weaken($_[1]) if ref($_[1]);
#line 258
$memory_2 = $memory_0->{'dest'};
#line 258
generator_pm_priv::print_register_to_assign($memory_2, $memory_1);
#line 258
undef($memory_2);
#line 259
$memory_2 = $memory_0->{'mod'};
#line 259
$memory_3 = "";
#line 259
$memory_2 = c_rt_lib::to_nl($memory_2 ne $memory_3);
#line 259
undef($memory_3);
#line 259
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 259
if (c_rt_lib::check_true($memory_2)) {goto label_16;}
#line 260
$memory_3 = $memory_0->{'mod'};
#line 260
$memory_4 = "::";
#line 260
$memory_3 = $memory_3 . $memory_4;
#line 260
undef($memory_4);
#line 260
generator_pm_priv::print($memory_1, $memory_3);
#line 260
undef($memory_3);
#line 261
goto label_24;
#line 261
label_16:
#line 262
$memory_3 = $memory_1->{'module_name'};
#line 262
$memory_4 = "_priv::";
#line 262
$memory_3 = $memory_3 . $memory_4;
#line 262
undef($memory_4);
#line 262
generator_pm_priv::print($memory_1, $memory_3);
#line 262
undef($memory_3);
#line 263
goto label_24;
#line 263
label_24:
#line 263
undef($memory_2);
#line 264
$memory_2 = $memory_0->{'fun_name'};
#line 264
$memory_3 = "(";
#line 264
$memory_2 = $memory_2 . $memory_3;
#line 264
undef($memory_3);
#line 264
generator_pm_priv::print($memory_1, $memory_2);
#line 264
undef($memory_2);
#line 265
$memory_2 = 0;
#line 266
$memory_3 = $memory_0->{'args'};
#line 266
$memory_5 = 0;
#line 266
$memory_6 = 1;
#line 266
$memory_7 = c_rt_lib::array_len($memory_3);
#line 266
label_37:
#line 266
$memory_8 = c_rt_lib::to_nl($memory_5 >= $memory_7);
#line 266
if (c_rt_lib::check_true($memory_8)) {goto label_75;}
#line 266
$memory_4 = $memory_3->[$memory_5];
#line 267
$memory_9 = 0;
#line 267
$memory_9 = c_rt_lib::to_nl($memory_2 > $memory_9);
#line 267
$memory_9 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_9));
#line 267
if (c_rt_lib::check_true($memory_9)) {goto label_49;}
#line 268
$memory_10 = ", ";
#line 268
generator_pm_priv::print($memory_1, $memory_10);
#line 268
undef($memory_10);
#line 269
goto label_49;
#line 269
label_49:
#line 269
undef($memory_9);
#line 270
$memory_9 = c_rt_lib::ov_is($memory_4, 'val');
#line 270
if (c_rt_lib::check_true($memory_9)) {goto label_58;}
#line 272
$memory_9 = c_rt_lib::ov_is($memory_4, 'ref');
#line 272
if (c_rt_lib::check_true($memory_9)) {goto label_63;}
#line 272
$memory_9 = "NOMATCHALERT";
#line 272
$memory_9 = [$memory_9,$memory_4];
#line 272
die(dfile::ssave($memory_9));
#line 270
label_58:
#line 270
$memory_10 = c_rt_lib::ov_as($memory_4, 'val');
#line 271
generator_pm_priv::print_register($memory_10, $memory_1);
#line 271
undef($memory_10);
#line 272
goto label_68;
#line 272
label_63:
#line 272
$memory_10 = c_rt_lib::ov_as($memory_4, 'ref');
#line 273
generator_pm_priv::print_register($memory_10, $memory_1);
#line 273
undef($memory_10);
#line 274
goto label_68;
#line 274
label_68:
#line 274
undef($memory_9);
#line 275
$memory_9 = 1;
#line 275
$memory_2 = $memory_2 + $memory_9;
#line 275
undef($memory_9);
#line 276
$memory_5 = $memory_5 + $memory_6;
#line 276
goto label_37;
#line 276
label_75:
#line 276
undef($memory_3);
#line 276
undef($memory_4);
#line 276
undef($memory_5);
#line 276
undef($memory_6);
#line 276
undef($memory_7);
#line 276
undef($memory_8);
#line 277
$memory_3 = ");";
#line 277
generator_pm_priv::print($memory_1, $memory_3);
#line 277
undef($memory_3);
#line 277
undef($memory_2);
#line 277
undef($memory_0);
#line 277
$_[1] = $memory_1;return;
$_[1] = $memory_1;}

sub generator_pm_priv::print_una_op($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;$memory_0 = $_[0];$memory_1 = $_[1];Scalar::Util::weaken($_[1]) if ref($_[1]);
#line 282
$memory_2 = $memory_0->{'dest'};
#line 282
generator_pm_priv::print_register_to_assign($memory_2, $memory_1);
#line 282
undef($memory_2);
#line 283
$memory_2 = $memory_0->{'op'};
#line 283
$memory_3 = "!";
#line 283
$memory_2 = c_rt_lib::to_nl($memory_2 eq $memory_3);
#line 283
undef($memory_3);
#line 283
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 283
if (c_rt_lib::check_true($memory_2)) {goto label_13;}
#line 283
$memory_3 = "c_rt_lib::to_nl(";
#line 283
generator_pm_priv::print($memory_1, $memory_3);
#line 283
undef($memory_3);
#line 283
goto label_13;
#line 283
label_13:
#line 283
undef($memory_2);
#line 284
$memory_2 = $memory_0->{'op'};
#line 284
generator_pm_priv::print($memory_1, $memory_2);
#line 284
undef($memory_2);
#line 285
$memory_2 = $memory_0->{'op'};
#line 285
$memory_3 = "!";
#line 285
$memory_2 = c_rt_lib::to_nl($memory_2 eq $memory_3);
#line 285
undef($memory_3);
#line 285
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 285
if (c_rt_lib::check_true($memory_2)) {goto label_28;}
#line 285
$memory_3 = "c_rt_lib::check_true(";
#line 285
generator_pm_priv::print($memory_1, $memory_3);
#line 285
undef($memory_3);
#line 285
goto label_28;
#line 285
label_28:
#line 285
undef($memory_2);
#line 286
$memory_2 = $memory_0->{'src'};
#line 286
generator_pm_priv::print_register($memory_2, $memory_1);
#line 286
undef($memory_2);
#line 287
$memory_2 = $memory_0->{'op'};
#line 287
$memory_3 = "!";
#line 287
$memory_2 = c_rt_lib::to_nl($memory_2 eq $memory_3);
#line 287
undef($memory_3);
#line 287
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 287
if (c_rt_lib::check_true($memory_2)) {goto label_43;}
#line 287
$memory_3 = "))";
#line 287
generator_pm_priv::print($memory_1, $memory_3);
#line 287
undef($memory_3);
#line 287
goto label_43;
#line 287
label_43:
#line 287
undef($memory_2);
#line 288
$memory_2 = ";";
#line 288
generator_pm_priv::print($memory_1, $memory_2);
#line 288
undef($memory_2);
#line 288
undef($memory_0);
#line 288
$_[1] = $memory_1;return;
$_[1] = $memory_1;}

sub generator_pm_priv::print_bin_op($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;$memory_0 = $_[0];$memory_1 = $_[1];Scalar::Util::weaken($_[1]) if ref($_[1]);
#line 297
$memory_2 = $memory_0->{'dest'};
#line 297
generator_pm_priv::print_register_to_assign($memory_2, $memory_1);
#line 297
undef($memory_2);
#line 298
$memory_2 = $memory_0->{'op'};
#line 298
$memory_3 = ">=";
#line 298
$memory_2 = c_rt_lib::to_nl($memory_2 eq $memory_3);
#line 298
undef($memory_3);
#line 298
if (c_rt_lib::check_true($memory_2)) {goto label_12;}
#line 298
$memory_2 = $memory_0->{'op'};
#line 298
$memory_3 = "<=";
#line 298
$memory_2 = c_rt_lib::to_nl($memory_2 eq $memory_3);
#line 298
undef($memory_3);
#line 298
label_12:
#line 298
if (c_rt_lib::check_true($memory_2)) {goto label_18;}
#line 298
$memory_2 = $memory_0->{'op'};
#line 298
$memory_3 = "<";
#line 298
$memory_2 = c_rt_lib::to_nl($memory_2 eq $memory_3);
#line 298
undef($memory_3);
#line 298
label_18:
#line 298
if (c_rt_lib::check_true($memory_2)) {goto label_24;}
#line 298
$memory_2 = $memory_0->{'op'};
#line 298
$memory_3 = ">";
#line 298
$memory_2 = c_rt_lib::to_nl($memory_2 eq $memory_3);
#line 298
undef($memory_3);
#line 298
label_24:
#line 298
if (c_rt_lib::check_true($memory_2)) {goto label_30;}
#line 298
$memory_2 = $memory_0->{'op'};
#line 298
$memory_3 = "==";
#line 298
$memory_2 = c_rt_lib::to_nl($memory_2 eq $memory_3);
#line 298
undef($memory_3);
#line 298
label_30:
#line 298
if (c_rt_lib::check_true($memory_2)) {goto label_36;}
#line 299
$memory_2 = $memory_0->{'op'};
#line 299
$memory_3 = "eq";
#line 299
$memory_2 = c_rt_lib::to_nl($memory_2 eq $memory_3);
#line 299
undef($memory_3);
#line 299
label_36:
#line 299
if (c_rt_lib::check_true($memory_2)) {goto label_42;}
#line 299
$memory_2 = $memory_0->{'op'};
#line 299
$memory_3 = "!=";
#line 299
$memory_2 = c_rt_lib::to_nl($memory_2 eq $memory_3);
#line 299
undef($memory_3);
#line 299
label_42:
#line 299
if (c_rt_lib::check_true($memory_2)) {goto label_48;}
#line 299
$memory_2 = $memory_0->{'op'};
#line 299
$memory_3 = "ne";
#line 299
$memory_2 = c_rt_lib::to_nl($memory_2 eq $memory_3);
#line 299
undef($memory_3);
#line 299
label_48:
#line 299
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 299
if (c_rt_lib::check_true($memory_2)) {goto label_73;}
#line 300
$memory_3 = "c_rt_lib::to_nl(";
#line 300
generator_pm_priv::print($memory_1, $memory_3);
#line 300
undef($memory_3);
#line 301
$memory_3 = $memory_0->{'left'};
#line 301
generator_pm_priv::print_register($memory_3, $memory_1);
#line 301
undef($memory_3);
#line 302
$memory_3 = " ";
#line 302
$memory_4 = $memory_0->{'op'};
#line 302
$memory_3 = $memory_3 . $memory_4;
#line 302
undef($memory_4);
#line 302
$memory_4 = " ";
#line 302
$memory_3 = $memory_3 . $memory_4;
#line 302
undef($memory_4);
#line 302
generator_pm_priv::print($memory_1, $memory_3);
#line 302
undef($memory_3);
#line 303
$memory_3 = $memory_0->{'right'};
#line 303
generator_pm_priv::print_register($memory_3, $memory_1);
#line 303
undef($memory_3);
#line 304
$memory_3 = ");";
#line 304
generator_pm_priv::print($memory_1, $memory_3);
#line 304
undef($memory_3);
#line 305
goto label_93;
#line 305
label_73:
#line 306
$memory_3 = $memory_0->{'left'};
#line 306
generator_pm_priv::print_register($memory_3, $memory_1);
#line 306
undef($memory_3);
#line 307
$memory_3 = " ";
#line 307
$memory_4 = $memory_0->{'op'};
#line 307
$memory_3 = $memory_3 . $memory_4;
#line 307
undef($memory_4);
#line 307
$memory_4 = " ";
#line 307
$memory_3 = $memory_3 . $memory_4;
#line 307
undef($memory_4);
#line 307
generator_pm_priv::print($memory_1, $memory_3);
#line 307
undef($memory_3);
#line 308
$memory_3 = $memory_0->{'right'};
#line 308
generator_pm_priv::print_register($memory_3, $memory_1);
#line 308
undef($memory_3);
#line 309
$memory_3 = ";";
#line 309
generator_pm_priv::print($memory_1, $memory_3);
#line 309
undef($memory_3);
#line 310
goto label_93;
#line 310
label_93:
#line 310
undef($memory_2);
#line 310
undef($memory_0);
#line 310
$_[1] = $memory_1;return;
$_[1] = $memory_1;}

sub generator_pm_priv::print_set_at_idx($$) {
my $memory_0;my $memory_1;my $memory_2;$memory_0 = $_[0];$memory_1 = $_[1];Scalar::Util::weaken($_[1]) if ref($_[1]);
#line 315
$memory_2 = " if (c_rt_lib::get_arrcount(";
#line 315
generator_pm_priv::print($memory_1, $memory_2);
#line 315
undef($memory_2);
#line 316
$memory_2 = $memory_0->{'src'};
#line 316
generator_pm_priv::print_register($memory_2, $memory_1);
#line 316
undef($memory_2);
#line 317
$memory_2 = ") > 1) {";
#line 317
generator_pm_priv::print($memory_1, $memory_2);
#line 317
undef($memory_2);
#line 318
$memory_2 = $memory_0->{'src'};
#line 318
generator_pm_priv::print_register_to_assign($memory_2, $memory_1);
#line 318
undef($memory_2);
#line 319
$memory_2 = "[\@{";
#line 319
generator_pm_priv::print($memory_1, $memory_2);
#line 319
undef($memory_2);
#line 320
$memory_2 = $memory_0->{'src'};
#line 320
generator_pm_priv::print_register($memory_2, $memory_1);
#line 320
undef($memory_2);
#line 321
$memory_2 = "}];}";
#line 321
generator_pm_priv::print($memory_1, $memory_2);
#line 321
undef($memory_2);
#line 322
$memory_2 = $memory_0->{'src'};
#line 322
generator_pm_priv::print_register($memory_2, $memory_1);
#line 322
undef($memory_2);
#line 323
$memory_2 = "->[";
#line 323
generator_pm_priv::print($memory_1, $memory_2);
#line 323
undef($memory_2);
#line 324
$memory_2 = $memory_0->{'idx'};
#line 324
generator_pm_priv::print_register($memory_2, $memory_1);
#line 324
undef($memory_2);
#line 325
$memory_2 = "] = ";
#line 325
generator_pm_priv::print($memory_1, $memory_2);
#line 325
undef($memory_2);
#line 326
$memory_2 = $memory_0->{'val'};
#line 326
generator_pm_priv::print_register($memory_2, $memory_1);
#line 326
undef($memory_2);
#line 327
$memory_2 = ";";
#line 327
generator_pm_priv::print($memory_1, $memory_2);
#line 327
undef($memory_2);
#line 327
undef($memory_0);
#line 327
$_[1] = $memory_1;return;
$_[1] = $memory_1;}

sub generator_pm_priv::print_set_val($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;$memory_0 = $_[0];$memory_1 = $_[1];Scalar::Util::weaken($_[1]) if ref($_[1]);
#line 332
$memory_2 = " if (c_rt_lib::get_hashcount(";
#line 332
generator_pm_priv::print($memory_1, $memory_2);
#line 332
undef($memory_2);
#line 333
$memory_2 = $memory_0->{'src'};
#line 333
generator_pm_priv::print_register($memory_2, $memory_1);
#line 333
undef($memory_2);
#line 334
$memory_2 = ") > 1) {";
#line 334
generator_pm_priv::print($memory_1, $memory_2);
#line 334
undef($memory_2);
#line 335
$memory_2 = $memory_0->{'src'};
#line 335
generator_pm_priv::print_register_to_assign($memory_2, $memory_1);
#line 335
undef($memory_2);
#line 336
$memory_2 = "{%{";
#line 336
generator_pm_priv::print($memory_1, $memory_2);
#line 336
undef($memory_2);
#line 337
$memory_2 = $memory_0->{'src'};
#line 337
generator_pm_priv::print_register($memory_2, $memory_1);
#line 337
undef($memory_2);
#line 338
$memory_2 = "}};}";
#line 338
generator_pm_priv::print($memory_1, $memory_2);
#line 338
undef($memory_2);
#line 339
$memory_2 = $memory_0->{'src'};
#line 339
generator_pm_priv::print_register($memory_2, $memory_1);
#line 339
undef($memory_2);
#line 340
$memory_2 = "->{'";
#line 340
$memory_3 = $memory_0->{'key'};
#line 340
$memory_2 = $memory_2 . $memory_3;
#line 340
undef($memory_3);
#line 340
$memory_3 = "'} = ";
#line 340
$memory_2 = $memory_2 . $memory_3;
#line 340
undef($memory_3);
#line 340
generator_pm_priv::print($memory_1, $memory_2);
#line 340
undef($memory_2);
#line 341
$memory_2 = $memory_0->{'val'};
#line 341
generator_pm_priv::print_register($memory_2, $memory_1);
#line 341
undef($memory_2);
#line 342
$memory_2 = ";";
#line 342
generator_pm_priv::print($memory_1, $memory_2);
#line 342
undef($memory_2);
#line 342
undef($memory_0);
#line 342
$_[1] = $memory_1;return;
$_[1] = $memory_1;}

sub generator_pm_priv::print_ov_mk($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;$memory_0 = $_[0];$memory_1 = $_[1];Scalar::Util::weaken($_[1]) if ref($_[1]);
#line 346
$memory_2 = $memory_0->{'dest'};
#line 346
generator_pm_priv::print_register_to_assign($memory_2, $memory_1);
#line 346
undef($memory_2);
#line 347
$memory_2 = $memory_0->{'src'};
#line 347
$memory_2 = c_rt_lib::ov_is($memory_2, 'emp');
#line 347
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 347
if (c_rt_lib::check_true($memory_3)) {goto label_11;}
#line 347
$memory_2 = $memory_0->{'name'};
#line 347
$memory_4 = "TRUE";
#line 347
$memory_2 = c_rt_lib::to_nl($memory_2 eq $memory_4);
#line 347
undef($memory_4);
#line 347
label_11:
#line 347
undef($memory_3);
#line 347
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 347
if (c_rt_lib::check_true($memory_2)) {goto label_19;}
#line 348
$memory_3 = "c_rt_lib::to_nl(1);";
#line 348
generator_pm_priv::print($memory_1, $memory_3);
#line 348
undef($memory_3);
#line 349
goto label_77;
#line 349
label_19:
#line 349
$memory_2 = $memory_0->{'src'};
#line 349
$memory_2 = c_rt_lib::ov_is($memory_2, 'emp');
#line 349
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 349
if (c_rt_lib::check_true($memory_3)) {goto label_28;}
#line 349
$memory_2 = $memory_0->{'name'};
#line 349
$memory_4 = "FALSE";
#line 349
$memory_2 = c_rt_lib::to_nl($memory_2 eq $memory_4);
#line 349
undef($memory_4);
#line 349
label_28:
#line 349
undef($memory_3);
#line 349
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 349
if (c_rt_lib::check_true($memory_2)) {goto label_36;}
#line 350
$memory_3 = "c_rt_lib::to_nl(0);";
#line 350
generator_pm_priv::print($memory_1, $memory_3);
#line 350
undef($memory_3);
#line 351
goto label_77;
#line 351
label_36:
#line 352
$memory_3 = $memory_0->{'src'};
#line 352
$memory_4 = c_rt_lib::ov_is($memory_3, 'arg');
#line 352
if (c_rt_lib::check_true($memory_4)) {goto label_45;}
#line 356
$memory_4 = c_rt_lib::ov_is($memory_3, 'emp');
#line 356
if (c_rt_lib::check_true($memory_4)) {goto label_62;}
#line 356
$memory_4 = "NOMATCHALERT";
#line 356
$memory_4 = [$memory_4,$memory_3];
#line 356
die(dfile::ssave($memory_4));
#line 352
label_45:
#line 352
$memory_5 = c_rt_lib::ov_as($memory_3, 'arg');
#line 353
$memory_6 = "c_rt_lib::ov_mk_arg('";
#line 353
$memory_7 = $memory_0->{'name'};
#line 353
$memory_6 = $memory_6 . $memory_7;
#line 353
undef($memory_7);
#line 353
$memory_7 = "', ";
#line 353
$memory_6 = $memory_6 . $memory_7;
#line 353
undef($memory_7);
#line 353
generator_pm_priv::print($memory_1, $memory_6);
#line 353
undef($memory_6);
#line 354
generator_pm_priv::print_register($memory_5, $memory_1);
#line 355
$memory_6 = ");";
#line 355
generator_pm_priv::print($memory_1, $memory_6);
#line 355
undef($memory_6);
#line 355
undef($memory_5);
#line 356
goto label_73;
#line 356
label_62:
#line 357
$memory_5 = "c_rt_lib::ov_mk_none('";
#line 357
$memory_6 = $memory_0->{'name'};
#line 357
$memory_5 = $memory_5 . $memory_6;
#line 357
undef($memory_6);
#line 357
$memory_6 = "');";
#line 357
$memory_5 = $memory_5 . $memory_6;
#line 357
undef($memory_6);
#line 357
generator_pm_priv::print($memory_1, $memory_5);
#line 357
undef($memory_5);
#line 358
goto label_73;
#line 358
label_73:
#line 358
undef($memory_3);
#line 358
undef($memory_4);
#line 359
goto label_77;
#line 359
label_77:
#line 359
undef($memory_2);
#line 359
undef($memory_0);
#line 359
$_[1] = $memory_1;return;
$_[1] = $memory_1;}

sub generator_pm_priv::print_register($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;$memory_0 = $_[0];$memory_1 = $_[1];Scalar::Util::weaken($_[1]) if ref($_[1]);
#line 363
$memory_2 = "";
#line 363
$memory_2 = c_rt_lib::to_nl($memory_0 eq $memory_2);
#line 363
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 363
if (c_rt_lib::check_true($memory_2)) {goto label_8;}
#line 363
undef($memory_0);
#line 363
undef($memory_2);
#line 363
$_[1] = $memory_1;return;
#line 363
goto label_8;
#line 363
label_8:
#line 363
undef($memory_2);
#line 364
$memory_2 = "\$memory_";
#line 364
$memory_2 = $memory_2 . $memory_0;
#line 364
$memory_3 = "";
#line 364
$memory_2 = $memory_2 . $memory_3;
#line 364
undef($memory_3);
#line 364
generator_pm_priv::print($memory_1, $memory_2);
#line 364
undef($memory_2);
#line 364
undef($memory_0);
#line 364
$_[1] = $memory_1;return;
$_[1] = $memory_1;}

sub generator_pm_priv::print_register_to_assign($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;$memory_0 = $_[0];$memory_1 = $_[1];Scalar::Util::weaken($_[1]) if ref($_[1]);
#line 368
generator_pm_priv::print_register($memory_0, $memory_1);
#line 369
$memory_2 = "";
#line 369
$memory_2 = c_rt_lib::to_nl($memory_0 ne $memory_2);
#line 369
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 369
if (c_rt_lib::check_true($memory_2)) {goto label_9;}
#line 369
$memory_3 = " = ";
#line 369
generator_pm_priv::print($memory_1, $memory_3);
#line 369
undef($memory_3);
#line 369
goto label_9;
#line 369
label_9:
#line 369
undef($memory_2);
#line 369
undef($memory_0);
#line 369
$_[1] = $memory_1;return;
$_[1] = $memory_1;}
