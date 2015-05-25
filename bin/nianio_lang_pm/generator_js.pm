use c_rt_lib;
use array;
use nl;
use string;
use string_utils;
use boolean_t;
use ov;
use nlasm;
use ptd;
sub generator_js::generate;
sub generator_js_priv::get_function_name;
sub generator_js_priv::escape_mod_fun_name;
sub generator_js_priv::escape_string;
sub generator_js_priv::is_singleton_use_function;
sub generator_js_priv::print_function_or_singleton;
sub generator_js_priv::print_function;
sub generator_js_priv::print_command;
sub generator_js_priv::print_arr;
sub generator_js_priv::print_bin_op;
sub generator_js_priv::print_call;
sub generator_js_priv::print_const_arr;
sub generator_js_priv::print_const_hash;
sub generator_js_priv::print_const_ov;
sub generator_js_priv::print_const_value;
sub generator_js_priv::print_goto;
sub generator_js_priv::print_hash;
sub generator_js_priv::print_ov_mk;
sub generator_js_priv::print_register;
sub generator_js_priv::print_register_value;
sub generator_js_priv::print_register_to_assign;
sub generator_js_priv::print_return;
sub generator_js_priv::print_una_op;

return 1;

sub generator_js::generate($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;$memory_0 = $_[0];
#line 15
$memory_1 = "";
#line 16
$memory_2 = $memory_0->{'functions'};
#line 16
$memory_4 = 0;
#line 16
$memory_5 = 1;
#line 16
$memory_6 = c_rt_lib::array_len($memory_2);
#line 16
label_3:
#line 16
$memory_7 = c_rt_lib::to_nl($memory_4 >= $memory_6);
#line 16
if (c_rt_lib::check_true($memory_7)) {goto label_1;}
#line 16
$memory_3 = $memory_2->[$memory_4];
#line 16
$memory_9 = $memory_0->{'module_name'};
#line 16
$memory_8 = generator_js_priv::print_function_or_singleton($memory_3, $memory_9);
#line 16
undef($memory_9);
#line 16
$memory_1 = $memory_1 . $memory_8;
#line 16
undef($memory_8);
#line 16
$memory_4 = $memory_4 + $memory_5;
#line 16
goto label_3;
#line 16
label_1:
#line 16
undef($memory_2);
#line 16
undef($memory_3);
#line 16
undef($memory_4);
#line 16
undef($memory_5);
#line 16
undef($memory_6);
#line 16
undef($memory_7);
#line 17
undef($memory_0);
#line 17
return $memory_1;
#line 17
undef($memory_1);
#line 17
undef($memory_0);
#line 17
return;
}

sub generator_js_priv::get_function_name($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;$memory_0 = $_[0];$memory_1 = $_[1];
#line 21
$memory_2 = $memory_0->{'access'};
#line 21
$memory_3 = c_rt_lib::ov_is($memory_2, 'pub');
#line 21
if (c_rt_lib::check_true($memory_3)) {goto label_2;}
#line 23
$memory_3 = c_rt_lib::ov_is($memory_2, 'priv');
#line 23
if (c_rt_lib::check_true($memory_3)) {goto label_3;}
#line 23
$memory_3 = "NOMATCHALERT";
#line 23
$memory_3 = [$memory_3,$memory_2];
#line 23
die(dfile::ssave($memory_3));
#line 21
label_2:
#line 22
$memory_4 = generator_js_priv::escape_mod_fun_name($memory_1);
#line 22
$memory_5 = 0;
#line 22
$memory_4 = $memory_4 . $memory_5;
#line 22
undef($memory_5);
#line 22
$memory_6 = $memory_0->{'name'};
#line 22
$memory_5 = generator_js_priv::escape_mod_fun_name($memory_6);
#line 22
undef($memory_6);
#line 22
$memory_4 = $memory_4 . $memory_5;
#line 22
undef($memory_5);
#line 22
undef($memory_0);
#line 22
undef($memory_1);
#line 22
undef($memory_2);
#line 22
undef($memory_3);
#line 22
return $memory_4;
#line 22
undef($memory_4);
#line 23
goto label_1;
#line 23
label_3:
#line 24
$memory_4 = generator_js_priv::escape_mod_fun_name($memory_1);
#line 24
$memory_5 = "_priv0";
#line 24
$memory_4 = $memory_4 . $memory_5;
#line 24
undef($memory_5);
#line 24
$memory_6 = $memory_0->{'name'};
#line 24
$memory_5 = generator_js_priv::escape_mod_fun_name($memory_6);
#line 24
undef($memory_6);
#line 24
$memory_4 = $memory_4 . $memory_5;
#line 24
undef($memory_5);
#line 24
undef($memory_0);
#line 24
undef($memory_1);
#line 24
undef($memory_2);
#line 24
undef($memory_3);
#line 24
return $memory_4;
#line 24
undef($memory_4);
#line 25
goto label_1;
#line 25
label_1:
#line 25
undef($memory_2);
#line 25
undef($memory_3);
#line 25
undef($memory_0);
#line 25
undef($memory_1);
#line 25
return;
}

sub generator_js_priv::escape_mod_fun_name($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;$memory_0 = $_[0];
#line 29
$memory_2 = 0;
#line 29
$memory_3 = "00";
#line 29
$memory_1 = string::replace($memory_0, $memory_2, $memory_3);
#line 29
undef($memory_3);
#line 29
undef($memory_2);
#line 29
undef($memory_0);
#line 29
return $memory_1;
#line 29
undef($memory_1);
#line 29
undef($memory_0);
#line 29
return;
}

sub generator_js_priv::escape_string($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;$memory_0 = $_[0];
#line 33
$memory_2 = "\\";
#line 33
$memory_3 = "\\\\";
#line 33
$memory_1 = string::replace($memory_0, $memory_2, $memory_3);
#line 33
undef($memory_3);
#line 33
undef($memory_2);
#line 33
$memory_0 = $memory_1;
#line 33
undef($memory_1);
#line 34
$memory_2 = "\"";
#line 34
$memory_3 = "\\\"";
#line 34
$memory_1 = string::replace($memory_0, $memory_2, $memory_3);
#line 34
undef($memory_3);
#line 34
undef($memory_2);
#line 34
$memory_0 = $memory_1;
#line 34
undef($memory_1);
#line 35
$memory_3 = 13;
#line 35
$memory_2 = string::chr($memory_3);
#line 35
undef($memory_3);
#line 35
$memory_3 = string::lf();
#line 35
$memory_2 = $memory_2 . $memory_3;
#line 35
undef($memory_3);
#line 35
$memory_3 = "\\r\\n";
#line 35
$memory_1 = string::replace($memory_0, $memory_2, $memory_3);
#line 35
undef($memory_3);
#line 35
undef($memory_2);
#line 35
$memory_0 = $memory_1;
#line 35
undef($memory_1);
#line 36
$memory_2 = string::lf();
#line 36
$memory_3 = "\\n";
#line 36
$memory_1 = string::replace($memory_0, $memory_2, $memory_3);
#line 36
undef($memory_3);
#line 36
undef($memory_2);
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

sub generator_js_priv::is_singleton_use_function($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;my $memory_13;$memory_0 = $_[0];
#line 39
$memory_2 = $memory_0->{'args_type'};
#line 39
$memory_1 = array::len($memory_2);
#line 39
undef($memory_2);
#line 39
$memory_2 = 0;
#line 39
$memory_1 = c_rt_lib::to_nl($memory_1 > $memory_2);
#line 39
undef($memory_2);
#line 39
$memory_1 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_1));
#line 39
if (c_rt_lib::check_true($memory_1)) {goto label_2;}
#line 39
$memory_2 = c_rt_lib::to_nl(0);
#line 39
undef($memory_0);
#line 39
undef($memory_1);
#line 39
return $memory_2;
#line 39
undef($memory_2);
#line 39
goto label_2;
#line 39
label_2:
#line 39
undef($memory_1);
#line 40
$memory_1 = $memory_0->{'annotation'};
#line 40
$memory_1 = c_rt_lib::ov_is($memory_1, 'math');
#line 40
$memory_1 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_1));
#line 40
if (c_rt_lib::check_true($memory_1)) {goto label_4;}
#line 40
$memory_2 = c_rt_lib::to_nl(1);
#line 40
undef($memory_0);
#line 40
undef($memory_1);
#line 40
return $memory_2;
#line 40
undef($memory_2);
#line 40
goto label_4;
#line 40
label_4:
#line 40
undef($memory_1);
#line 41
$memory_1 = c_rt_lib::to_nl(0);
#line 43
$memory_3 = $memory_0->{'commands'};
#line 43
$memory_5 = 0;
#line 43
$memory_6 = 1;
#line 43
$memory_7 = c_rt_lib::array_len($memory_3);
#line 43
label_7:
#line 43
$memory_8 = c_rt_lib::to_nl($memory_5 >= $memory_7);
#line 43
if (c_rt_lib::check_true($memory_8)) {goto label_5;}
#line 43
$memory_4 = $memory_3->[$memory_5];
#line 44
$memory_9 = $memory_4->{'cmd'};
#line 45
$memory_10 = $memory_9;
#line 45
$memory_10 = c_rt_lib::ov_is($memory_10, 'call');
#line 45
$memory_10 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_10));
#line 45
if (c_rt_lib::check_true($memory_10)) {goto label_9;}
#line 46
$memory_11 = $memory_9;
#line 46
$memory_11 = c_rt_lib::ov_as($memory_11, 'call');
#line 47
$memory_12 = $memory_11->{'fun_name'};
#line 47
$memory_13 = "sigleton_do_not_use_without_approval";
#line 47
$memory_12 = c_rt_lib::to_nl($memory_12 eq $memory_13);
#line 47
undef($memory_13);
#line 47
$memory_12 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_12));
#line 47
$memory_12 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_12));
#line 47
if (c_rt_lib::check_true($memory_12)) {goto label_11;}
#line 47
undef($memory_9);
#line 47
undef($memory_10);
#line 47
undef($memory_11);
#line 47
undef($memory_12);
#line 47
goto label_6;
#line 47
goto label_11;
#line 47
label_11:
#line 47
undef($memory_12);
#line 48
$memory_12 = $memory_11->{'mod'};
#line 48
$memory_13 = "singleton";
#line 48
$memory_12 = c_rt_lib::to_nl($memory_12 eq $memory_13);
#line 48
undef($memory_13);
#line 48
$memory_12 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_12));
#line 48
$memory_12 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_12));
#line 48
if (c_rt_lib::check_true($memory_12)) {goto label_13;}
#line 48
undef($memory_9);
#line 48
undef($memory_10);
#line 48
undef($memory_11);
#line 48
undef($memory_12);
#line 48
goto label_6;
#line 48
goto label_13;
#line 48
label_13:
#line 48
undef($memory_12);
#line 49
$memory_12 = c_rt_lib::to_nl(1);
#line 49
$memory_1 = $memory_12;
#line 49
undef($memory_12);
#line 50
$memory_12 = $memory_11->{'dest'};
#line 50
$memory_2 = $memory_12;
#line 50
undef($memory_12);
#line 50
undef($memory_11);
#line 51
goto label_8;
#line 51
label_9:
#line 51
$memory_10 = $memory_9;
#line 51
$memory_10 = c_rt_lib::ov_is($memory_10, 'return');
#line 51
$memory_10 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_10));
#line 51
if (c_rt_lib::check_true($memory_10)) {goto label_14;}
#line 52
$memory_11 = $memory_1;
#line 52
$memory_11 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_11));
#line 52
$memory_11 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_11));
#line 52
if (c_rt_lib::check_true($memory_11)) {goto label_16;}
#line 52
$memory_12 = c_rt_lib::to_nl(0);
#line 52
undef($memory_0);
#line 52
undef($memory_1);
#line 52
undef($memory_2);
#line 52
undef($memory_3);
#line 52
undef($memory_4);
#line 52
undef($memory_5);
#line 52
undef($memory_6);
#line 52
undef($memory_7);
#line 52
undef($memory_8);
#line 52
undef($memory_9);
#line 52
undef($memory_10);
#line 52
undef($memory_11);
#line 52
return $memory_12;
#line 52
undef($memory_12);
#line 52
goto label_16;
#line 52
label_16:
#line 52
undef($memory_11);
#line 53
$memory_11 = $memory_9;
#line 53
$memory_11 = c_rt_lib::ov_as($memory_11, 'return');
#line 54
$memory_12 = $memory_11;
#line 54
$memory_12 = c_rt_lib::ov_is($memory_12, 'val');
#line 54
$memory_12 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_12));
#line 54
$memory_12 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_12));
#line 54
if (c_rt_lib::check_true($memory_12)) {goto label_18;}
#line 54
$memory_13 = c_rt_lib::to_nl(0);
#line 54
undef($memory_0);
#line 54
undef($memory_1);
#line 54
undef($memory_2);
#line 54
undef($memory_3);
#line 54
undef($memory_4);
#line 54
undef($memory_5);
#line 54
undef($memory_6);
#line 54
undef($memory_7);
#line 54
undef($memory_8);
#line 54
undef($memory_9);
#line 54
undef($memory_10);
#line 54
undef($memory_11);
#line 54
undef($memory_12);
#line 54
return $memory_13;
#line 54
undef($memory_13);
#line 54
goto label_18;
#line 54
label_18:
#line 54
undef($memory_12);
#line 55
$memory_12 = $memory_11;
#line 55
$memory_12 = c_rt_lib::ov_as($memory_12, 'val');
#line 55
$memory_12 = c_rt_lib::to_nl($memory_12 eq $memory_2);
#line 55
undef($memory_0);
#line 55
undef($memory_1);
#line 55
undef($memory_2);
#line 55
undef($memory_3);
#line 55
undef($memory_4);
#line 55
undef($memory_5);
#line 55
undef($memory_6);
#line 55
undef($memory_7);
#line 55
undef($memory_8);
#line 55
undef($memory_9);
#line 55
undef($memory_10);
#line 55
undef($memory_11);
#line 55
return $memory_12;
#line 55
undef($memory_12);
#line 55
undef($memory_11);
#line 56
goto label_8;
#line 56
label_14:
#line 56
$memory_10 = $memory_9;
#line 56
$memory_10 = c_rt_lib::ov_is($memory_10, 'prt_lbl');
#line 56
$memory_10 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_10));
#line 56
if (c_rt_lib::check_true($memory_10)) {goto label_19;}
#line 57
goto label_8;
#line 57
label_19:
#line 57
$memory_10 = $memory_9;
#line 57
$memory_10 = c_rt_lib::ov_is($memory_10, 'clear');
#line 57
$memory_10 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_10));
#line 57
if (c_rt_lib::check_true($memory_10)) {goto label_20;}
#line 58
goto label_8;
#line 58
label_20:
#line 59
$memory_11 = $memory_1;
#line 59
$memory_11 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_11));
#line 59
if (c_rt_lib::check_true($memory_11)) {goto label_22;}
#line 59
$memory_12 = c_rt_lib::to_nl(0);
#line 59
undef($memory_0);
#line 59
undef($memory_1);
#line 59
undef($memory_2);
#line 59
undef($memory_3);
#line 59
undef($memory_4);
#line 59
undef($memory_5);
#line 59
undef($memory_6);
#line 59
undef($memory_7);
#line 59
undef($memory_8);
#line 59
undef($memory_9);
#line 59
undef($memory_10);
#line 59
undef($memory_11);
#line 59
return $memory_12;
#line 59
undef($memory_12);
#line 59
goto label_22;
#line 59
label_22:
#line 59
undef($memory_11);
#line 60
goto label_8;
#line 60
label_8:
#line 60
undef($memory_10);
#line 60
undef($memory_9);
#line 60
label_6:
#line 61
$memory_5 = $memory_5 + $memory_6;
#line 61
goto label_7;
#line 61
label_5:
#line 61
undef($memory_3);
#line 61
undef($memory_4);
#line 61
undef($memory_5);
#line 61
undef($memory_6);
#line 61
undef($memory_7);
#line 61
undef($memory_8);
#line 62
$memory_3 = c_rt_lib::to_nl(0);
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
#line 62
undef($memory_1);
#line 62
undef($memory_2);
#line 62
undef($memory_0);
#line 62
return;
}

sub generator_js_priv::print_function_or_singleton($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;$memory_0 = $_[0];$memory_1 = $_[1];
#line 67
$memory_2 = generator_js_priv::is_singleton_use_function($memory_0);
#line 67
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 67
if (c_rt_lib::check_true($memory_2)) {goto label_2;}
#line 68
$memory_3 = generator_js_priv::get_function_name($memory_0, $memory_1);
#line 69
$memory_4 = $memory_0;
#line 70
$memory_5 = "SINGLETON__";
#line 70
$memory_6 = $memory_0->{'name'};
#line 70
$memory_5 = $memory_5 . $memory_6;
#line 70
undef($memory_6);
#line 70
$memory_6 = $memory_5;
#line 70
 if (c_rt_lib::get_hashcount($memory_4) > 1) {$memory_4 = {%{$memory_4}};}$memory_4->{'name'} = $memory_6;
#line 70
undef($memory_5);
#line 70
undef($memory_6);
#line 71
$memory_5 = generator_js_priv::get_function_name($memory_4, $memory_1);
#line 72
$memory_6 = "value__singleton__";
#line 72
$memory_6 = $memory_6 . $memory_5;
#line 74
$memory_7 = generator_js_priv::print_function($memory_4, $memory_1);
#line 76
$memory_8 = "var ";
#line 76
$memory_8 = $memory_8 . $memory_6;
#line 76
$memory_9 = ";
function ";
#line 76
$memory_8 = $memory_8 . $memory_9;
#line 76
undef($memory_9);
#line 76
$memory_8 = $memory_8 . $memory_3;
#line 76
$memory_9 = "(){
	if (";
#line 76
$memory_8 = $memory_8 . $memory_9;
#line 76
undef($memory_9);
#line 76
$memory_8 = $memory_8 . $memory_6;
#line 76
$memory_9 = " === undefined) {
		";
#line 76
$memory_8 = $memory_8 . $memory_9;
#line 76
undef($memory_9);
#line 76
$memory_8 = $memory_8 . $memory_6;
#line 76
$memory_9 = " = ";
#line 76
$memory_8 = $memory_8 . $memory_9;
#line 76
undef($memory_9);
#line 76
$memory_8 = $memory_8 . $memory_5;
#line 76
$memory_9 = "();
	}
	return ";
#line 76
$memory_8 = $memory_8 . $memory_9;
#line 76
undef($memory_9);
#line 76
$memory_8 = $memory_8 . $memory_6;
#line 76
$memory_9 = ";
}";
#line 76
$memory_8 = $memory_8 . $memory_9;
#line 76
undef($memory_9);
#line 76
$memory_7 = $memory_7 . $memory_8;
#line 76
undef($memory_8);
#line 83
undef($memory_0);
#line 83
undef($memory_1);
#line 83
undef($memory_2);
#line 83
undef($memory_3);
#line 83
undef($memory_4);
#line 83
undef($memory_5);
#line 83
undef($memory_6);
#line 83
return $memory_7;
#line 83
undef($memory_3);
#line 83
undef($memory_4);
#line 83
undef($memory_5);
#line 83
undef($memory_6);
#line 83
undef($memory_7);
#line 84
goto label_1;
#line 84
label_2:
#line 85
$memory_3 = generator_js_priv::print_function($memory_0, $memory_1);
#line 85
undef($memory_0);
#line 85
undef($memory_1);
#line 85
undef($memory_2);
#line 85
return $memory_3;
#line 85
undef($memory_3);
#line 86
goto label_1;
#line 86
label_1:
#line 86
undef($memory_2);
#line 86
undef($memory_0);
#line 86
undef($memory_1);
#line 86
return;
}

sub generator_js_priv::print_function($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;$memory_0 = $_[0];$memory_1 = $_[1];
#line 90
$memory_2 = string::lf();
#line 90
$memory_3 = "function ";
#line 90
$memory_2 = $memory_2 . $memory_3;
#line 90
undef($memory_3);
#line 91
$memory_3 = generator_js_priv::get_function_name($memory_0, $memory_1);
#line 91
$memory_4 = "(";
#line 91
$memory_3 = $memory_3 . $memory_4;
#line 91
undef($memory_4);
#line 91
$memory_2 = $memory_2 . $memory_3;
#line 91
undef($memory_3);
#line 92
$memory_4 = $memory_0->{'args_type'};
#line 92
$memory_3 = array::len($memory_4);
#line 92
undef($memory_4);
#line 92
$memory_4 = 0;
#line 92
$memory_5 = 1;
#line 92
label_3:
#line 92
$memory_6 = c_rt_lib::to_nl($memory_4 >= $memory_3);
#line 92
if (c_rt_lib::check_true($memory_6)) {goto label_1;}
#line 93
$memory_7 = 0;
#line 93
$memory_7 = c_rt_lib::to_nl($memory_4 == $memory_7);
#line 93
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 93
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 93
if (c_rt_lib::check_true($memory_7)) {goto label_5;}
#line 93
$memory_8 = ", ";
#line 93
$memory_2 = $memory_2 . $memory_8;
#line 93
undef($memory_8);
#line 93
goto label_5;
#line 93
label_5:
#line 93
undef($memory_7);
#line 94
$memory_7 = "___arg__";
#line 94
$memory_7 = $memory_7 . $memory_4;
#line 94
$memory_2 = $memory_2 . $memory_7;
#line 94
undef($memory_7);
#line 95
$memory_4 = $memory_4 + $memory_5;
#line 95
goto label_3;
#line 95
label_1:
#line 95
undef($memory_3);
#line 95
undef($memory_4);
#line 95
undef($memory_5);
#line 95
undef($memory_6);
#line 96
$memory_3 = ") {";
#line 96
$memory_4 = string::lf();
#line 96
$memory_3 = $memory_3 . $memory_4;
#line 96
undef($memory_4);
#line 96
$memory_2 = $memory_2 . $memory_3;
#line 96
undef($memory_3);
#line 97
$memory_4 = $memory_0->{'args_type'};
#line 97
$memory_3 = array::len($memory_4);
#line 97
undef($memory_4);
#line 97
$memory_4 = 0;
#line 97
$memory_5 = 1;
#line 97
label_8:
#line 97
$memory_6 = c_rt_lib::to_nl($memory_4 >= $memory_3);
#line 97
if (c_rt_lib::check_true($memory_6)) {goto label_6;}
#line 98
$memory_7 = $memory_0->{'args_type'};
#line 98
$memory_7 = $memory_7->[$memory_4];
#line 98
$memory_8 = c_rt_lib::ov_is($memory_7, 'val');
#line 98
if (c_rt_lib::check_true($memory_8)) {goto label_10;}
#line 100
$memory_8 = c_rt_lib::ov_is($memory_7, 'ref');
#line 100
if (c_rt_lib::check_true($memory_8)) {goto label_11;}
#line 100
$memory_8 = "NOMATCHALERT";
#line 100
$memory_8 = [$memory_8,$memory_7];
#line 100
die(dfile::ssave($memory_8));
#line 98
label_10:
#line 99
$memory_9 = "var ___nl__";
#line 99
$memory_9 = $memory_9 . $memory_4;
#line 99
$memory_10 = " = new ImRef(___arg__";
#line 99
$memory_9 = $memory_9 . $memory_10;
#line 99
undef($memory_10);
#line 99
$memory_9 = $memory_9 . $memory_4;
#line 99
$memory_10 = ".value);";
#line 99
$memory_9 = $memory_9 . $memory_10;
#line 99
undef($memory_10);
#line 99
$memory_2 = $memory_2 . $memory_9;
#line 99
undef($memory_9);
#line 100
goto label_9;
#line 100
label_11:
#line 101
$memory_9 = "var ___nl__";
#line 101
$memory_9 = $memory_9 . $memory_4;
#line 101
$memory_10 = " = ___arg__";
#line 101
$memory_9 = $memory_9 . $memory_10;
#line 101
undef($memory_10);
#line 101
$memory_9 = $memory_9 . $memory_4;
#line 101
$memory_10 = ";";
#line 101
$memory_9 = $memory_9 . $memory_10;
#line 101
undef($memory_10);
#line 101
$memory_2 = $memory_2 . $memory_9;
#line 101
undef($memory_9);
#line 102
goto label_9;
#line 102
label_9:
#line 102
undef($memory_7);
#line 102
undef($memory_8);
#line 103
$memory_4 = $memory_4 + $memory_5;
#line 103
goto label_8;
#line 103
label_6:
#line 103
undef($memory_3);
#line 103
undef($memory_4);
#line 103
undef($memory_5);
#line 103
undef($memory_6);
#line 104
$memory_3 = string::lf();
#line 104
$memory_2 = $memory_2 . $memory_3;
#line 104
undef($memory_3);
#line 105
$memory_4 = $memory_0->{'args_type'};
#line 105
$memory_3 = array::len($memory_4);
#line 105
undef($memory_4);
#line 105
label_13:
#line 105
$memory_4 = $memory_0->{'reg_size'};
#line 105
$memory_4 = c_rt_lib::to_nl($memory_3 < $memory_4);
#line 105
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 105
if (c_rt_lib::check_true($memory_4)) {goto label_12;}
#line 106
$memory_5 = "var ___nl__";
#line 106
$memory_5 = $memory_5 . $memory_3;
#line 106
$memory_6 = " = new ImRef(null);";
#line 106
$memory_5 = $memory_5 . $memory_6;
#line 106
undef($memory_6);
#line 106
$memory_6 = string::lf();
#line 106
$memory_5 = $memory_5 . $memory_6;
#line 106
undef($memory_6);
#line 106
$memory_2 = $memory_2 . $memory_5;
#line 106
undef($memory_5);
#line 106
$memory_5 = 1;
#line 106
$memory_3 = $memory_3 + $memory_5;
#line 106
undef($memory_5);
#line 107
goto label_13;
#line 107
label_12:
#line 107
undef($memory_3);
#line 107
undef($memory_4);
#line 108
$memory_3 = "var label = null; while (1) { switch (label) { default: ";
#line 108
$memory_4 = string::lf();
#line 108
$memory_3 = $memory_3 . $memory_4;
#line 108
undef($memory_4);
#line 108
$memory_2 = $memory_2 . $memory_3;
#line 108
undef($memory_3);
#line 109
$memory_3 = $memory_0->{'commands'};
#line 109
$memory_5 = 0;
#line 109
$memory_6 = 1;
#line 109
$memory_7 = c_rt_lib::array_len($memory_3);
#line 109
label_17:
#line 109
$memory_8 = c_rt_lib::to_nl($memory_5 >= $memory_7);
#line 109
if (c_rt_lib::check_true($memory_8)) {goto label_15;}
#line 109
$memory_4 = $memory_3->[$memory_5];
#line 109
$memory_9 = generator_js_priv::print_command($memory_1, $memory_4);
#line 109
$memory_2 = $memory_2 . $memory_9;
#line 109
undef($memory_9);
#line 109
$memory_5 = $memory_5 + $memory_6;
#line 109
goto label_17;
#line 109
label_15:
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
$memory_3 = "}}}";
#line 110
$memory_3 = $memory_2 . $memory_3;
#line 110
$memory_4 = string::lf();
#line 110
$memory_3 = $memory_3 . $memory_4;
#line 110
undef($memory_4);
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
undef($memory_2);
#line 110
undef($memory_0);
#line 110
undef($memory_1);
#line 110
return;
}

sub generator_js_priv::print_command($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;$memory_0 = $_[0];$memory_1 = $_[1];
#line 115
$memory_3 = $memory_1->{'cmd'};
#line 115
$memory_4 = c_rt_lib::ov_is($memory_3, 'arr_decl');
#line 115
if (c_rt_lib::check_true($memory_4)) {goto label_2;}
#line 117
$memory_4 = c_rt_lib::ov_is($memory_3, 'hash_decl');
#line 117
if (c_rt_lib::check_true($memory_4)) {goto label_3;}
#line 119
$memory_4 = c_rt_lib::ov_is($memory_3, 'call');
#line 119
if (c_rt_lib::check_true($memory_4)) {goto label_4;}
#line 121
$memory_4 = c_rt_lib::ov_is($memory_3, 'func');
#line 121
if (c_rt_lib::check_true($memory_4)) {goto label_5;}
#line 123
$memory_4 = c_rt_lib::ov_is($memory_3, 'una_op');
#line 123
if (c_rt_lib::check_true($memory_4)) {goto label_6;}
#line 125
$memory_4 = c_rt_lib::ov_is($memory_3, 'bin_op');
#line 125
if (c_rt_lib::check_true($memory_4)) {goto label_7;}
#line 127
$memory_4 = c_rt_lib::ov_is($memory_3, 'ov_is');
#line 127
if (c_rt_lib::check_true($memory_4)) {goto label_8;}
#line 129
$memory_4 = c_rt_lib::ov_is($memory_3, 'ov_as');
#line 129
if (c_rt_lib::check_true($memory_4)) {goto label_9;}
#line 131
$memory_4 = c_rt_lib::ov_is($memory_3, 'return');
#line 131
if (c_rt_lib::check_true($memory_4)) {goto label_10;}
#line 133
$memory_4 = c_rt_lib::ov_is($memory_3, 'die');
#line 133
if (c_rt_lib::check_true($memory_4)) {goto label_11;}
#line 135
$memory_4 = c_rt_lib::ov_is($memory_3, 'move');
#line 135
if (c_rt_lib::check_true($memory_4)) {goto label_12;}
#line 137
$memory_4 = c_rt_lib::ov_is($memory_3, 'load_const');
#line 137
if (c_rt_lib::check_true($memory_4)) {goto label_13;}
#line 139
$memory_4 = c_rt_lib::ov_is($memory_3, 'get_frm_idx');
#line 139
if (c_rt_lib::check_true($memory_4)) {goto label_14;}
#line 141
$memory_4 = c_rt_lib::ov_is($memory_3, 'set_at_idx');
#line 141
if (c_rt_lib::check_true($memory_4)) {goto label_15;}
#line 144
$memory_4 = c_rt_lib::ov_is($memory_3, 'get_val');
#line 144
if (c_rt_lib::check_true($memory_4)) {goto label_16;}
#line 146
$memory_4 = c_rt_lib::ov_is($memory_3, 'set_val');
#line 146
if (c_rt_lib::check_true($memory_4)) {goto label_17;}
#line 149
$memory_4 = c_rt_lib::ov_is($memory_3, 'ov_mk');
#line 149
if (c_rt_lib::check_true($memory_4)) {goto label_18;}
#line 151
$memory_4 = c_rt_lib::ov_is($memory_3, 'prt_lbl');
#line 151
if (c_rt_lib::check_true($memory_4)) {goto label_19;}
#line 153
$memory_4 = c_rt_lib::ov_is($memory_3, 'if_goto');
#line 153
if (c_rt_lib::check_true($memory_4)) {goto label_20;}
#line 155
$memory_4 = c_rt_lib::ov_is($memory_3, 'goto');
#line 155
if (c_rt_lib::check_true($memory_4)) {goto label_21;}
#line 157
$memory_4 = c_rt_lib::ov_is($memory_3, 'clear');
#line 157
if (c_rt_lib::check_true($memory_4)) {goto label_22;}
#line 157
$memory_4 = "NOMATCHALERT";
#line 157
$memory_4 = [$memory_4,$memory_3];
#line 157
die(dfile::ssave($memory_4));
#line 115
label_2:
#line 115
$memory_5 = c_rt_lib::ov_as($memory_3, 'arr_decl');
#line 116
$memory_7 = $memory_5->{'dest'};
#line 116
$memory_6 = generator_js_priv::print_register_to_assign($memory_7);
#line 116
undef($memory_7);
#line 116
$memory_8 = $memory_5->{'src'};
#line 116
$memory_7 = generator_js_priv::print_arr($memory_8);
#line 116
undef($memory_8);
#line 116
$memory_6 = $memory_6 . $memory_7;
#line 116
undef($memory_7);
#line 116
$memory_7 = ";";
#line 116
$memory_6 = $memory_6 . $memory_7;
#line 116
undef($memory_7);
#line 116
$memory_2 = $memory_6;
#line 116
undef($memory_6);
#line 116
undef($memory_5);
#line 117
goto label_1;
#line 117
label_3:
#line 117
$memory_5 = c_rt_lib::ov_as($memory_3, 'hash_decl');
#line 118
$memory_7 = $memory_5->{'dest'};
#line 118
$memory_6 = generator_js_priv::print_register_to_assign($memory_7);
#line 118
undef($memory_7);
#line 118
$memory_8 = $memory_5->{'src'};
#line 118
$memory_7 = generator_js_priv::print_hash($memory_8);
#line 118
undef($memory_8);
#line 118
$memory_6 = $memory_6 . $memory_7;
#line 118
undef($memory_7);
#line 118
$memory_7 = ";";
#line 118
$memory_6 = $memory_6 . $memory_7;
#line 118
undef($memory_7);
#line 118
$memory_2 = $memory_6;
#line 118
undef($memory_6);
#line 118
undef($memory_5);
#line 119
goto label_1;
#line 119
label_4:
#line 119
$memory_5 = c_rt_lib::ov_as($memory_3, 'call');
#line 120
$memory_7 = $memory_5->{'dest'};
#line 120
$memory_6 = generator_js_priv::print_register_to_assign($memory_7);
#line 120
undef($memory_7);
#line 120
$memory_8 = $memory_5->{'mod'};
#line 120
$memory_9 = $memory_5->{'fun_name'};
#line 120
$memory_10 = $memory_5->{'args'};
#line 120
$memory_7 = generator_js_priv::print_call($memory_0, $memory_8, $memory_9, $memory_10);
#line 120
undef($memory_10);
#line 120
undef($memory_9);
#line 120
undef($memory_8);
#line 120
$memory_6 = $memory_6 . $memory_7;
#line 120
undef($memory_7);
#line 120
$memory_2 = $memory_6;
#line 120
undef($memory_6);
#line 120
undef($memory_5);
#line 121
goto label_1;
#line 121
label_5:
#line 121
$memory_5 = c_rt_lib::ov_as($memory_3, 'func');
#line 122
$memory_7 = $memory_5->{'dest'};
#line 122
$memory_6 = generator_js_priv::print_register_to_assign($memory_7);
#line 122
undef($memory_7);
#line 122
$memory_9 = $memory_5->{'module'};
#line 122
$memory_10 = $memory_5->{'name'};
#line 122
$memory_8 = {module => $memory_9,name => $memory_10,};
#line 122
undef($memory_9);
#line 122
undef($memory_10);
#line 122
$memory_7 = generator_js_priv::print_const_hash($memory_8);
#line 122
undef($memory_8);
#line 122
$memory_6 = $memory_6 . $memory_7;
#line 122
undef($memory_7);
#line 122
$memory_7 = ";";
#line 122
$memory_6 = $memory_6 . $memory_7;
#line 122
undef($memory_7);
#line 122
$memory_2 = $memory_6;
#line 122
undef($memory_6);
#line 122
undef($memory_5);
#line 123
goto label_1;
#line 123
label_6:
#line 123
$memory_5 = c_rt_lib::ov_as($memory_3, 'una_op');
#line 124
$memory_6 = generator_js_priv::print_una_op($memory_5);
#line 124
$memory_2 = $memory_6;
#line 124
undef($memory_6);
#line 124
undef($memory_5);
#line 125
goto label_1;
#line 125
label_7:
#line 125
$memory_5 = c_rt_lib::ov_as($memory_3, 'bin_op');
#line 126
$memory_6 = generator_js_priv::print_bin_op($memory_5);
#line 126
$memory_2 = $memory_6;
#line 126
undef($memory_6);
#line 126
undef($memory_5);
#line 127
goto label_1;
#line 127
label_8:
#line 127
$memory_5 = c_rt_lib::ov_as($memory_3, 'ov_is');
#line 128
$memory_7 = $memory_5->{'dest'};
#line 128
$memory_6 = generator_js_priv::print_register_to_assign($memory_7);
#line 128
undef($memory_7);
#line 128
$memory_7 = "c_rt_lib0ov_is(";
#line 128
$memory_6 = $memory_6 . $memory_7;
#line 128
undef($memory_7);
#line 128
$memory_8 = $memory_5->{'src'};
#line 128
$memory_7 = generator_js_priv::print_register($memory_8);
#line 128
undef($memory_8);
#line 128
$memory_6 = $memory_6 . $memory_7;
#line 128
undef($memory_7);
#line 128
$memory_7 = ", new ImRef(\"";
#line 128
$memory_6 = $memory_6 . $memory_7;
#line 128
undef($memory_7);
#line 128
$memory_8 = $memory_5->{'type'};
#line 128
$memory_7 = generator_js_priv::escape_string($memory_8);
#line 128
undef($memory_8);
#line 128
$memory_6 = $memory_6 . $memory_7;
#line 128
undef($memory_7);
#line 128
$memory_7 = "\"));";
#line 128
$memory_6 = $memory_6 . $memory_7;
#line 128
undef($memory_7);
#line 128
$memory_2 = $memory_6;
#line 128
undef($memory_6);
#line 128
undef($memory_5);
#line 129
goto label_1;
#line 129
label_9:
#line 129
$memory_5 = c_rt_lib::ov_as($memory_3, 'ov_as');
#line 130
$memory_7 = $memory_5->{'dest'};
#line 130
$memory_6 = generator_js_priv::print_register_to_assign($memory_7);
#line 130
undef($memory_7);
#line 130
$memory_7 = "c_rt_lib0ov_as(";
#line 130
$memory_6 = $memory_6 . $memory_7;
#line 130
undef($memory_7);
#line 130
$memory_8 = $memory_5->{'src'};
#line 130
$memory_7 = generator_js_priv::print_register($memory_8);
#line 130
undef($memory_8);
#line 130
$memory_6 = $memory_6 . $memory_7;
#line 130
undef($memory_7);
#line 130
$memory_7 = ", new ImRef(\"";
#line 130
$memory_6 = $memory_6 . $memory_7;
#line 130
undef($memory_7);
#line 130
$memory_8 = $memory_5->{'type'};
#line 130
$memory_7 = generator_js_priv::escape_string($memory_8);
#line 130
undef($memory_8);
#line 130
$memory_6 = $memory_6 . $memory_7;
#line 130
undef($memory_7);
#line 130
$memory_7 = "\"));";
#line 130
$memory_6 = $memory_6 . $memory_7;
#line 130
undef($memory_7);
#line 130
$memory_2 = $memory_6;
#line 130
undef($memory_6);
#line 130
undef($memory_5);
#line 131
goto label_1;
#line 131
label_10:
#line 131
$memory_5 = c_rt_lib::ov_as($memory_3, 'return');
#line 132
$memory_6 = generator_js_priv::print_return($memory_5);
#line 132
$memory_2 = $memory_6;
#line 132
undef($memory_6);
#line 132
undef($memory_5);
#line 133
goto label_1;
#line 133
label_11:
#line 133
$memory_5 = c_rt_lib::ov_as($memory_3, 'die');
#line 134
$memory_6 = "nl_die();";
#line 134
$memory_2 = $memory_6;
#line 134
undef($memory_6);
#line 134
undef($memory_5);
#line 135
goto label_1;
#line 135
label_12:
#line 135
$memory_5 = c_rt_lib::ov_as($memory_3, 'move');
#line 136
$memory_7 = $memory_5->{'dest'};
#line 136
$memory_6 = generator_js_priv::print_register_to_assign($memory_7);
#line 136
undef($memory_7);
#line 136
$memory_8 = $memory_5->{'src'};
#line 136
$memory_7 = generator_js_priv::print_register_value($memory_8);
#line 136
undef($memory_8);
#line 136
$memory_6 = $memory_6 . $memory_7;
#line 136
undef($memory_7);
#line 136
$memory_7 = ";";
#line 136
$memory_6 = $memory_6 . $memory_7;
#line 136
undef($memory_7);
#line 136
$memory_2 = $memory_6;
#line 136
undef($memory_6);
#line 136
undef($memory_5);
#line 137
goto label_1;
#line 137
label_13:
#line 137
$memory_5 = c_rt_lib::ov_as($memory_3, 'load_const');
#line 138
$memory_7 = $memory_5->{'dest'};
#line 138
$memory_6 = generator_js_priv::print_register_to_assign($memory_7);
#line 138
undef($memory_7);
#line 138
$memory_8 = $memory_5->{'val'};
#line 138
$memory_7 = generator_js_priv::print_const_value($memory_8);
#line 138
undef($memory_8);
#line 138
$memory_6 = $memory_6 . $memory_7;
#line 138
undef($memory_7);
#line 138
$memory_7 = ";";
#line 138
$memory_6 = $memory_6 . $memory_7;
#line 138
undef($memory_7);
#line 138
$memory_2 = $memory_6;
#line 138
undef($memory_6);
#line 138
undef($memory_5);
#line 139
goto label_1;
#line 139
label_14:
#line 139
$memory_5 = c_rt_lib::ov_as($memory_3, 'get_frm_idx');
#line 140
$memory_7 = $memory_5->{'dest'};
#line 140
$memory_6 = generator_js_priv::print_register_to_assign($memory_7);
#line 140
undef($memory_7);
#line 140
$memory_8 = $memory_5->{'src'};
#line 140
$memory_7 = generator_js_priv::print_register_value($memory_8);
#line 140
undef($memory_8);
#line 140
$memory_6 = $memory_6 . $memory_7;
#line 140
undef($memory_7);
#line 140
$memory_7 = "[Math.floor(";
#line 140
$memory_6 = $memory_6 . $memory_7;
#line 140
undef($memory_7);
#line 140
$memory_8 = $memory_5->{'idx'};
#line 140
$memory_7 = generator_js_priv::print_register_value($memory_8);
#line 140
undef($memory_8);
#line 140
$memory_6 = $memory_6 . $memory_7;
#line 140
undef($memory_7);
#line 140
$memory_7 = ")];";
#line 140
$memory_6 = $memory_6 . $memory_7;
#line 140
undef($memory_7);
#line 140
$memory_2 = $memory_6;
#line 140
undef($memory_6);
#line 140
undef($memory_5);
#line 141
goto label_1;
#line 141
label_15:
#line 141
$memory_5 = c_rt_lib::ov_as($memory_3, 'set_at_idx');
#line 142
$memory_7 = $memory_5->{'src'};
#line 142
$memory_6 = generator_js_priv::print_register_to_assign($memory_7);
#line 142
undef($memory_7);
#line 142
$memory_8 = $memory_5->{'src'};
#line 142
$memory_7 = generator_js_priv::print_register_value($memory_8);
#line 142
undef($memory_8);
#line 142
$memory_6 = $memory_6 . $memory_7;
#line 142
undef($memory_7);
#line 142
$memory_7 = ".slice();";
#line 142
$memory_6 = $memory_6 . $memory_7;
#line 142
undef($memory_7);
#line 142
$memory_2 = $memory_6;
#line 142
undef($memory_6);
#line 143
$memory_7 = $memory_5->{'src'};
#line 143
$memory_6 = generator_js_priv::print_register_value($memory_7);
#line 143
undef($memory_7);
#line 143
$memory_7 = "[Math.floor(";
#line 143
$memory_6 = $memory_6 . $memory_7;
#line 143
undef($memory_7);
#line 143
$memory_8 = $memory_5->{'idx'};
#line 143
$memory_7 = generator_js_priv::print_register_value($memory_8);
#line 143
undef($memory_8);
#line 143
$memory_6 = $memory_6 . $memory_7;
#line 143
undef($memory_7);
#line 143
$memory_7 = ")] = ";
#line 143
$memory_6 = $memory_6 . $memory_7;
#line 143
undef($memory_7);
#line 143
$memory_8 = $memory_5->{'val'};
#line 143
$memory_7 = generator_js_priv::print_register_value($memory_8);
#line 143
undef($memory_8);
#line 143
$memory_6 = $memory_6 . $memory_7;
#line 143
undef($memory_7);
#line 143
$memory_7 = ";";
#line 143
$memory_6 = $memory_6 . $memory_7;
#line 143
undef($memory_7);
#line 143
$memory_2 = $memory_2 . $memory_6;
#line 143
undef($memory_6);
#line 143
undef($memory_5);
#line 144
goto label_1;
#line 144
label_16:
#line 144
$memory_5 = c_rt_lib::ov_as($memory_3, 'get_val');
#line 145
$memory_7 = $memory_5->{'dest'};
#line 145
$memory_6 = generator_js_priv::print_register_to_assign($memory_7);
#line 145
undef($memory_7);
#line 145
$memory_8 = $memory_5->{'src'};
#line 145
$memory_7 = generator_js_priv::print_register_value($memory_8);
#line 145
undef($memory_8);
#line 145
$memory_6 = $memory_6 . $memory_7;
#line 145
undef($memory_7);
#line 145
$memory_7 = "[\"";
#line 145
$memory_6 = $memory_6 . $memory_7;
#line 145
undef($memory_7);
#line 145
$memory_8 = $memory_5->{'key'};
#line 145
$memory_7 = generator_js_priv::escape_string($memory_8);
#line 145
undef($memory_8);
#line 145
$memory_6 = $memory_6 . $memory_7;
#line 145
undef($memory_7);
#line 145
$memory_7 = "\"];";
#line 145
$memory_6 = $memory_6 . $memory_7;
#line 145
undef($memory_7);
#line 145
$memory_2 = $memory_6;
#line 145
undef($memory_6);
#line 145
undef($memory_5);
#line 146
goto label_1;
#line 146
label_17:
#line 146
$memory_5 = c_rt_lib::ov_as($memory_3, 'set_val');
#line 147
$memory_7 = $memory_5->{'src'};
#line 147
$memory_6 = generator_js_priv::print_register_to_assign($memory_7);
#line 147
undef($memory_7);
#line 147
$memory_7 = "c_rt_lib0clone(";
#line 147
$memory_6 = $memory_6 . $memory_7;
#line 147
undef($memory_7);
#line 147
$memory_8 = $memory_5->{'src'};
#line 147
$memory_7 = generator_js_priv::print_register_value($memory_8);
#line 147
undef($memory_8);
#line 147
$memory_6 = $memory_6 . $memory_7;
#line 147
undef($memory_7);
#line 147
$memory_7 = ");";
#line 147
$memory_6 = $memory_6 . $memory_7;
#line 147
undef($memory_7);
#line 147
$memory_2 = $memory_6;
#line 147
undef($memory_6);
#line 148
$memory_7 = $memory_5->{'src'};
#line 148
$memory_6 = generator_js_priv::print_register_value($memory_7);
#line 148
undef($memory_7);
#line 148
$memory_7 = "[\"";
#line 148
$memory_6 = $memory_6 . $memory_7;
#line 148
undef($memory_7);
#line 148
$memory_8 = $memory_5->{'key'};
#line 148
$memory_7 = generator_js_priv::escape_string($memory_8);
#line 148
undef($memory_8);
#line 148
$memory_6 = $memory_6 . $memory_7;
#line 148
undef($memory_7);
#line 148
$memory_7 = "\"] = ";
#line 148
$memory_6 = $memory_6 . $memory_7;
#line 148
undef($memory_7);
#line 148
$memory_8 = $memory_5->{'val'};
#line 148
$memory_7 = generator_js_priv::print_register_value($memory_8);
#line 148
undef($memory_8);
#line 148
$memory_6 = $memory_6 . $memory_7;
#line 148
undef($memory_7);
#line 148
$memory_7 = ";";
#line 148
$memory_6 = $memory_6 . $memory_7;
#line 148
undef($memory_7);
#line 148
$memory_2 = $memory_2 . $memory_6;
#line 148
undef($memory_6);
#line 148
undef($memory_5);
#line 149
goto label_1;
#line 149
label_18:
#line 149
$memory_5 = c_rt_lib::ov_as($memory_3, 'ov_mk');
#line 150
$memory_6 = generator_js_priv::print_ov_mk($memory_5);
#line 150
$memory_2 = $memory_6;
#line 150
undef($memory_6);
#line 150
undef($memory_5);
#line 151
goto label_1;
#line 151
label_19:
#line 151
$memory_5 = c_rt_lib::ov_as($memory_3, 'prt_lbl');
#line 152
$memory_6 = "case \"";
#line 152
$memory_6 = $memory_6 . $memory_5;
#line 152
$memory_7 = "\":";
#line 152
$memory_6 = $memory_6 . $memory_7;
#line 152
undef($memory_7);
#line 152
$memory_2 = $memory_6;
#line 152
undef($memory_6);
#line 152
undef($memory_5);
#line 153
goto label_1;
#line 153
label_20:
#line 153
$memory_5 = c_rt_lib::ov_as($memory_3, 'if_goto');
#line 154
$memory_6 = "if (c_rt_lib0check_true_native(";
#line 154
$memory_8 = $memory_5->{'src'};
#line 154
$memory_7 = generator_js_priv::print_register($memory_8);
#line 154
undef($memory_8);
#line 154
$memory_6 = $memory_6 . $memory_7;
#line 154
undef($memory_7);
#line 154
$memory_7 = ")) {";
#line 154
$memory_6 = $memory_6 . $memory_7;
#line 154
undef($memory_7);
#line 154
$memory_8 = $memory_5->{'dest'};
#line 154
$memory_7 = generator_js_priv::print_goto($memory_8);
#line 154
undef($memory_8);
#line 154
$memory_6 = $memory_6 . $memory_7;
#line 154
undef($memory_7);
#line 154
$memory_7 = "}";
#line 154
$memory_6 = $memory_6 . $memory_7;
#line 154
undef($memory_7);
#line 154
$memory_2 = $memory_6;
#line 154
undef($memory_6);
#line 154
undef($memory_5);
#line 155
goto label_1;
#line 155
label_21:
#line 155
$memory_5 = c_rt_lib::ov_as($memory_3, 'goto');
#line 156
$memory_6 = generator_js_priv::print_goto($memory_5);
#line 156
$memory_2 = $memory_6;
#line 156
undef($memory_6);
#line 156
undef($memory_5);
#line 157
goto label_1;
#line 157
label_22:
#line 157
$memory_5 = c_rt_lib::ov_as($memory_3, 'clear');
#line 158
$memory_6 = generator_js_priv::print_register_to_assign($memory_5);
#line 158
$memory_7 = "null";
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
label_1:
#line 159
undef($memory_3);
#line 159
undef($memory_4);
#line 160
$memory_3 = "//line ";
#line 160
$memory_4 = $memory_1->{'debug'};
#line 160
$memory_4 = $memory_4->{'nast_debug'};
#line 160
$memory_4 = $memory_4->{'begin'};
#line 160
$memory_4 = $memory_4->{'line'};
#line 160
$memory_3 = $memory_3 . $memory_4;
#line 160
undef($memory_4);
#line 160
$memory_4 = string::lf();
#line 160
$memory_3 = $memory_3 . $memory_4;
#line 160
undef($memory_4);
#line 160
$memory_3 = $memory_3 . $memory_2;
#line 160
$memory_4 = string::lf();
#line 160
$memory_3 = $memory_3 . $memory_4;
#line 160
undef($memory_4);
#line 160
undef($memory_0);
#line 160
undef($memory_1);
#line 160
undef($memory_2);
#line 160
return $memory_3;
#line 160
undef($memory_3);
#line 160
undef($memory_2);
#line 160
undef($memory_0);
#line 160
undef($memory_1);
#line 160
return;
}

sub generator_js_priv::print_arr($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;$memory_0 = $_[0];
#line 164
$memory_1 = "[";
#line 165
$memory_3 = 0;
#line 165
$memory_4 = 1;
#line 165
$memory_5 = c_rt_lib::array_len($memory_0);
#line 165
label_3:
#line 165
$memory_6 = c_rt_lib::to_nl($memory_3 >= $memory_5);
#line 165
if (c_rt_lib::check_true($memory_6)) {goto label_1;}
#line 165
$memory_2 = $memory_0->[$memory_3];
#line 165
$memory_7 = generator_js_priv::print_register_value($memory_2);
#line 165
$memory_8 = ",";
#line 165
$memory_7 = $memory_7 . $memory_8;
#line 165
undef($memory_8);
#line 165
$memory_1 = $memory_1 . $memory_7;
#line 165
undef($memory_7);
#line 165
$memory_3 = $memory_3 + $memory_4;
#line 165
goto label_3;
#line 165
label_1:
#line 165
undef($memory_2);
#line 165
undef($memory_3);
#line 165
undef($memory_4);
#line 165
undef($memory_5);
#line 165
undef($memory_6);
#line 166
$memory_2 = "]";
#line 166
$memory_2 = $memory_1 . $memory_2;
#line 166
undef($memory_0);
#line 166
undef($memory_1);
#line 166
return $memory_2;
#line 166
undef($memory_2);
#line 166
undef($memory_1);
#line 166
undef($memory_0);
#line 166
return;
}

sub generator_js_priv::print_bin_op($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;$memory_0 = $_[0];
#line 170
$memory_2 = $memory_0->{'dest'};
#line 170
$memory_1 = generator_js_priv::print_register_to_assign($memory_2);
#line 170
undef($memory_2);
#line 171
$memory_2 = $memory_0->{'op'};
#line 171
$memory_3 = ">=";
#line 171
$memory_2 = c_rt_lib::to_nl($memory_2 eq $memory_3);
#line 171
undef($memory_3);
#line 171
if (c_rt_lib::check_true($memory_2)) {goto label_7;}
#line 171
$memory_2 = $memory_0->{'op'};
#line 171
$memory_3 = "<=";
#line 171
$memory_2 = c_rt_lib::to_nl($memory_2 eq $memory_3);
#line 171
undef($memory_3);
#line 171
label_7:
#line 171
if (c_rt_lib::check_true($memory_2)) {goto label_6;}
#line 171
$memory_2 = $memory_0->{'op'};
#line 171
$memory_3 = "<";
#line 171
$memory_2 = c_rt_lib::to_nl($memory_2 eq $memory_3);
#line 171
undef($memory_3);
#line 171
label_6:
#line 171
if (c_rt_lib::check_true($memory_2)) {goto label_5;}
#line 171
$memory_2 = $memory_0->{'op'};
#line 171
$memory_3 = ">";
#line 171
$memory_2 = c_rt_lib::to_nl($memory_2 eq $memory_3);
#line 171
undef($memory_3);
#line 171
label_5:
#line 171
if (c_rt_lib::check_true($memory_2)) {goto label_4;}
#line 171
$memory_2 = $memory_0->{'op'};
#line 171
$memory_3 = "==";
#line 171
$memory_2 = c_rt_lib::to_nl($memory_2 eq $memory_3);
#line 171
undef($memory_3);
#line 171
label_4:
#line 171
if (c_rt_lib::check_true($memory_2)) {goto label_3;}
#line 171
$memory_2 = $memory_0->{'op'};
#line 171
$memory_3 = "!=";
#line 171
$memory_2 = c_rt_lib::to_nl($memory_2 eq $memory_3);
#line 171
undef($memory_3);
#line 171
label_3:
#line 171
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 171
if (c_rt_lib::check_true($memory_2)) {goto label_2;}
#line 173
$memory_3 = "c_rt_lib0native_to_nl(parseFloat(";
#line 173
$memory_3 = $memory_1 . $memory_3;
#line 173
$memory_5 = $memory_0->{'left'};
#line 173
$memory_4 = generator_js_priv::print_register_value($memory_5);
#line 173
undef($memory_5);
#line 173
$memory_3 = $memory_3 . $memory_4;
#line 173
undef($memory_4);
#line 173
$memory_4 = ") ";
#line 173
$memory_3 = $memory_3 . $memory_4;
#line 173
undef($memory_4);
#line 173
$memory_4 = $memory_0->{'op'};
#line 173
$memory_3 = $memory_3 . $memory_4;
#line 173
undef($memory_4);
#line 173
$memory_4 = " parseFloat(";
#line 173
$memory_3 = $memory_3 . $memory_4;
#line 173
undef($memory_4);
#line 173
$memory_5 = $memory_0->{'right'};
#line 173
$memory_4 = generator_js_priv::print_register_value($memory_5);
#line 173
undef($memory_5);
#line 173
$memory_3 = $memory_3 . $memory_4;
#line 173
undef($memory_4);
#line 173
$memory_4 = "));";
#line 173
$memory_3 = $memory_3 . $memory_4;
#line 173
undef($memory_4);
#line 173
undef($memory_0);
#line 173
undef($memory_1);
#line 173
undef($memory_2);
#line 173
return $memory_3;
#line 173
undef($memory_3);
#line 174
goto label_1;
#line 174
label_2:
#line 174
$memory_2 = $memory_0->{'op'};
#line 174
$memory_3 = "eq";
#line 174
$memory_2 = c_rt_lib::to_nl($memory_2 eq $memory_3);
#line 174
undef($memory_3);
#line 174
if (c_rt_lib::check_true($memory_2)) {goto label_9;}
#line 174
$memory_2 = $memory_0->{'op'};
#line 174
$memory_3 = "ne";
#line 174
$memory_2 = c_rt_lib::to_nl($memory_2 eq $memory_3);
#line 174
undef($memory_3);
#line 174
label_9:
#line 174
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 174
if (c_rt_lib::check_true($memory_2)) {goto label_8;}
#line 175
$memory_3 = "c_rt_lib0native_to_nl(";
#line 175
$memory_5 = $memory_0->{'left'};
#line 175
$memory_4 = generator_js_priv::print_register_value($memory_5);
#line 175
undef($memory_5);
#line 175
$memory_3 = $memory_3 . $memory_4;
#line 175
undef($memory_4);
#line 175
$memory_4 = ".toString()";
#line 175
$memory_3 = $memory_3 . $memory_4;
#line 175
undef($memory_4);
#line 175
$memory_1 = $memory_1 . $memory_3;
#line 175
undef($memory_3);
#line 176
$memory_3 = $memory_0->{'op'};
#line 176
$memory_4 = "eq";
#line 176
$memory_3 = c_rt_lib::to_nl($memory_3 eq $memory_4);
#line 176
undef($memory_4);
#line 176
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 176
if (c_rt_lib::check_true($memory_3)) {goto label_11;}
#line 177
$memory_4 = " == ";
#line 177
$memory_1 = $memory_1 . $memory_4;
#line 177
undef($memory_4);
#line 178
goto label_10;
#line 178
label_11:
#line 179
$memory_4 = " != ";
#line 179
$memory_1 = $memory_1 . $memory_4;
#line 179
undef($memory_4);
#line 180
goto label_10;
#line 180
label_10:
#line 180
undef($memory_3);
#line 181
$memory_4 = $memory_0->{'right'};
#line 181
$memory_3 = generator_js_priv::print_register_value($memory_4);
#line 181
undef($memory_4);
#line 181
$memory_3 = $memory_1 . $memory_3;
#line 181
$memory_4 = ".toString());";
#line 181
$memory_3 = $memory_3 . $memory_4;
#line 181
undef($memory_4);
#line 181
undef($memory_0);
#line 181
undef($memory_1);
#line 181
undef($memory_2);
#line 181
return $memory_3;
#line 181
undef($memory_3);
#line 182
goto label_1;
#line 182
label_8:
#line 182
$memory_2 = $memory_0->{'op'};
#line 182
$memory_3 = ".";
#line 182
$memory_2 = c_rt_lib::to_nl($memory_2 eq $memory_3);
#line 182
undef($memory_3);
#line 182
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 182
if (c_rt_lib::check_true($memory_2)) {goto label_12;}
#line 183
$memory_4 = $memory_0->{'left'};
#line 183
$memory_3 = generator_js_priv::print_register_value($memory_4);
#line 183
undef($memory_4);
#line 183
$memory_3 = $memory_1 . $memory_3;
#line 183
$memory_4 = ".toString() + ";
#line 183
$memory_3 = $memory_3 . $memory_4;
#line 183
undef($memory_4);
#line 183
$memory_5 = $memory_0->{'right'};
#line 183
$memory_4 = generator_js_priv::print_register_value($memory_5);
#line 183
undef($memory_5);
#line 183
$memory_3 = $memory_3 . $memory_4;
#line 183
undef($memory_4);
#line 183
$memory_4 = ".toString();";
#line 183
$memory_3 = $memory_3 . $memory_4;
#line 183
undef($memory_4);
#line 183
undef($memory_0);
#line 183
undef($memory_1);
#line 183
undef($memory_2);
#line 183
return $memory_3;
#line 183
undef($memory_3);
#line 184
goto label_1;
#line 184
label_12:
#line 185
$memory_3 = "parseFloat(";
#line 185
$memory_3 = $memory_1 . $memory_3;
#line 185
$memory_5 = $memory_0->{'left'};
#line 185
$memory_4 = generator_js_priv::print_register_value($memory_5);
#line 185
undef($memory_5);
#line 185
$memory_3 = $memory_3 . $memory_4;
#line 185
undef($memory_4);
#line 185
$memory_4 = ") ";
#line 185
$memory_3 = $memory_3 . $memory_4;
#line 185
undef($memory_4);
#line 185
$memory_4 = $memory_0->{'op'};
#line 185
$memory_3 = $memory_3 . $memory_4;
#line 185
undef($memory_4);
#line 185
$memory_4 = " parseFloat(";
#line 185
$memory_3 = $memory_3 . $memory_4;
#line 185
undef($memory_4);
#line 185
$memory_5 = $memory_0->{'right'};
#line 185
$memory_4 = generator_js_priv::print_register_value($memory_5);
#line 185
undef($memory_5);
#line 185
$memory_3 = $memory_3 . $memory_4;
#line 185
undef($memory_4);
#line 185
$memory_4 = ");";
#line 185
$memory_3 = $memory_3 . $memory_4;
#line 185
undef($memory_4);
#line 185
undef($memory_0);
#line 185
undef($memory_1);
#line 185
undef($memory_2);
#line 185
return $memory_3;
#line 185
undef($memory_3);
#line 186
goto label_1;
#line 186
label_1:
#line 186
undef($memory_2);
#line 186
undef($memory_1);
#line 186
undef($memory_0);
#line 186
return;
}

sub generator_js_priv::print_call($$$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;my $memory_13;$memory_0 = $_[0];$memory_1 = $_[1];$memory_2 = $_[2];$memory_3 = $_[3];
#line 190
$memory_4 = "";
#line 190
$memory_4 = c_rt_lib::to_nl($memory_1 eq $memory_4);
#line 190
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 190
if (c_rt_lib::check_true($memory_4)) {goto label_2;}
#line 190
$memory_5 = "_priv";
#line 190
$memory_5 = $memory_0 . $memory_5;
#line 190
$memory_1 = $memory_5;
#line 190
undef($memory_5);
#line 190
goto label_2;
#line 190
label_2:
#line 190
undef($memory_4);
#line 191
$memory_4 = generator_js_priv::escape_mod_fun_name($memory_1);
#line 191
$memory_5 = 0;
#line 191
$memory_4 = $memory_4 . $memory_5;
#line 191
undef($memory_5);
#line 191
$memory_5 = generator_js_priv::escape_mod_fun_name($memory_2);
#line 191
$memory_4 = $memory_4 . $memory_5;
#line 191
undef($memory_5);
#line 191
$memory_5 = "(";
#line 191
$memory_4 = $memory_4 . $memory_5;
#line 191
undef($memory_5);
#line 192
$memory_5 = 0;
#line 193
$memory_7 = 0;
#line 193
$memory_8 = 1;
#line 193
$memory_9 = c_rt_lib::array_len($memory_3);
#line 193
label_5:
#line 193
$memory_10 = c_rt_lib::to_nl($memory_7 >= $memory_9);
#line 193
if (c_rt_lib::check_true($memory_10)) {goto label_3;}
#line 193
$memory_6 = $memory_3->[$memory_7];
#line 194
$memory_11 = 0;
#line 194
$memory_11 = c_rt_lib::to_nl($memory_5 == $memory_11);
#line 194
$memory_11 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_11));
#line 194
$memory_11 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_11));
#line 194
if (c_rt_lib::check_true($memory_11)) {goto label_7;}
#line 194
$memory_12 = ",";
#line 194
$memory_4 = $memory_4 . $memory_12;
#line 194
undef($memory_12);
#line 194
goto label_7;
#line 194
label_7:
#line 194
undef($memory_11);
#line 195
$memory_11 = 1;
#line 195
$memory_5 = $memory_5 + $memory_11;
#line 195
undef($memory_11);
#line 196
$memory_11 = c_rt_lib::ov_is($memory_6, 'ref');
#line 196
if (c_rt_lib::check_true($memory_11)) {goto label_9;}
#line 198
$memory_11 = c_rt_lib::ov_is($memory_6, 'val');
#line 198
if (c_rt_lib::check_true($memory_11)) {goto label_10;}
#line 198
$memory_11 = "NOMATCHALERT";
#line 198
$memory_11 = [$memory_11,$memory_6];
#line 198
die(dfile::ssave($memory_11));
#line 196
label_9:
#line 196
$memory_12 = c_rt_lib::ov_as($memory_6, 'ref');
#line 197
$memory_13 = generator_js_priv::print_register($memory_12);
#line 197
$memory_4 = $memory_4 . $memory_13;
#line 197
undef($memory_13);
#line 197
undef($memory_12);
#line 198
goto label_8;
#line 198
label_10:
#line 198
$memory_12 = c_rt_lib::ov_as($memory_6, 'val');
#line 199
$memory_13 = generator_js_priv::print_register($memory_12);
#line 199
$memory_4 = $memory_4 . $memory_13;
#line 199
undef($memory_13);
#line 199
undef($memory_12);
#line 200
goto label_8;
#line 200
label_8:
#line 200
undef($memory_11);
#line 201
$memory_7 = $memory_7 + $memory_8;
#line 201
goto label_5;
#line 201
label_3:
#line 201
undef($memory_6);
#line 201
undef($memory_7);
#line 201
undef($memory_8);
#line 201
undef($memory_9);
#line 201
undef($memory_10);
#line 202
$memory_6 = ");";
#line 202
$memory_6 = $memory_4 . $memory_6;
#line 202
undef($memory_0);
#line 202
undef($memory_1);
#line 202
undef($memory_2);
#line 202
undef($memory_3);
#line 202
undef($memory_4);
#line 202
undef($memory_5);
#line 202
return $memory_6;
#line 202
undef($memory_6);
#line 202
undef($memory_4);
#line 202
undef($memory_5);
#line 202
undef($memory_0);
#line 202
undef($memory_1);
#line 202
undef($memory_2);
#line 202
undef($memory_3);
#line 202
return;
}

sub generator_js_priv::print_const_arr($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;$memory_0 = $_[0];
#line 206
$memory_1 = "[";
#line 207
$memory_3 = 0;
#line 207
$memory_4 = 1;
#line 207
$memory_5 = c_rt_lib::array_len($memory_0);
#line 207
label_3:
#line 207
$memory_6 = c_rt_lib::to_nl($memory_3 >= $memory_5);
#line 207
if (c_rt_lib::check_true($memory_6)) {goto label_1;}
#line 207
$memory_2 = $memory_0->[$memory_3];
#line 207
$memory_7 = generator_js_priv::print_const_value($memory_2);
#line 207
$memory_8 = ",";
#line 207
$memory_7 = $memory_7 . $memory_8;
#line 207
undef($memory_8);
#line 207
$memory_1 = $memory_1 . $memory_7;
#line 207
undef($memory_7);
#line 207
$memory_3 = $memory_3 + $memory_4;
#line 207
goto label_3;
#line 207
label_1:
#line 207
undef($memory_2);
#line 207
undef($memory_3);
#line 207
undef($memory_4);
#line 207
undef($memory_5);
#line 207
undef($memory_6);
#line 208
$memory_2 = "]";
#line 208
$memory_2 = $memory_1 . $memory_2;
#line 208
undef($memory_0);
#line 208
undef($memory_1);
#line 208
return $memory_2;
#line 208
undef($memory_2);
#line 208
undef($memory_1);
#line 208
undef($memory_0);
#line 208
return;
}

sub generator_js_priv::print_const_hash($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;$memory_0 = $_[0];
#line 212
$memory_1 = "{";
#line 213
$memory_4 = c_rt_lib::init_iter($memory_0);
#line 213
label_3:
#line 213
$memory_2 = c_rt_lib::is_end_hash($memory_4);
#line 213
if (c_rt_lib::check_true($memory_2)) {goto label_1;}
#line 213
$memory_2 = c_rt_lib::get_key_iter($memory_4);
#line 213
$memory_3 = c_rt_lib::hash_get_value($memory_0, $memory_2);
#line 213
$memory_5 = "\"";
#line 213
$memory_6 = generator_js_priv::escape_string($memory_2);
#line 213
$memory_5 = $memory_5 . $memory_6;
#line 213
undef($memory_6);
#line 213
$memory_6 = "\":";
#line 213
$memory_5 = $memory_5 . $memory_6;
#line 213
undef($memory_6);
#line 213
$memory_6 = generator_js_priv::print_const_value($memory_3);
#line 213
$memory_5 = $memory_5 . $memory_6;
#line 213
undef($memory_6);
#line 213
$memory_6 = ",";
#line 213
$memory_5 = $memory_5 . $memory_6;
#line 213
undef($memory_6);
#line 213
$memory_1 = $memory_1 . $memory_5;
#line 213
undef($memory_5);
#line 213
$memory_4 = c_rt_lib::next_iter($memory_4);
#line 213
goto label_3;
#line 213
label_1:
#line 213
undef($memory_2);
#line 213
undef($memory_3);
#line 213
undef($memory_4);
#line 214
$memory_2 = "}";
#line 214
$memory_2 = $memory_1 . $memory_2;
#line 214
undef($memory_0);
#line 214
undef($memory_1);
#line 214
return $memory_2;
#line 214
undef($memory_2);
#line 214
undef($memory_1);
#line 214
undef($memory_0);
#line 214
return;
}

sub generator_js_priv::print_const_ov($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;$memory_0 = $_[0];
#line 218
$memory_1 = "";
#line 219
$memory_2 = ov::has_value($memory_0);
#line 219
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 219
if (c_rt_lib::check_true($memory_2)) {goto label_2;}
#line 220
$memory_3 = "new OV(\"";
#line 220
$memory_5 = ov::get_element($memory_0);
#line 220
$memory_4 = generator_js_priv::escape_string($memory_5);
#line 220
undef($memory_5);
#line 220
$memory_3 = $memory_3 . $memory_4;
#line 220
undef($memory_4);
#line 220
$memory_4 = "\", ";
#line 220
$memory_3 = $memory_3 . $memory_4;
#line 220
undef($memory_4);
#line 220
$memory_5 = ov::get_value($memory_0);
#line 220
$memory_4 = generator_js_priv::print_const_value($memory_5);
#line 220
undef($memory_5);
#line 220
$memory_3 = $memory_3 . $memory_4;
#line 220
undef($memory_4);
#line 220
$memory_4 = ")";
#line 220
$memory_3 = $memory_3 . $memory_4;
#line 220
undef($memory_4);
#line 220
$memory_1 = $memory_3;
#line 220
undef($memory_3);
#line 221
goto label_1;
#line 221
label_2:
#line 222
$memory_3 = "new OV(\"";
#line 222
$memory_5 = ov::get_element($memory_0);
#line 222
$memory_4 = generator_js_priv::escape_string($memory_5);
#line 222
undef($memory_5);
#line 222
$memory_3 = $memory_3 . $memory_4;
#line 222
undef($memory_4);
#line 222
$memory_4 = "\", null)";
#line 222
$memory_3 = $memory_3 . $memory_4;
#line 222
undef($memory_4);
#line 222
$memory_1 = $memory_3;
#line 222
undef($memory_3);
#line 223
goto label_1;
#line 223
label_1:
#line 223
undef($memory_2);
#line 224
undef($memory_0);
#line 224
return $memory_1;
#line 224
undef($memory_1);
#line 224
undef($memory_0);
#line 224
return;
}

sub generator_js_priv::print_const_value($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;$memory_0 = $_[0];
#line 228
$memory_1 = nl::is_sim($memory_0);
#line 228
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_1));
#line 228
if (c_rt_lib::check_true($memory_3)) {goto label_4;}
#line 228
$memory_4 = "";
#line 228
$memory_4 = $memory_0 . $memory_4;
#line 228
$memory_1 = string_utils::is_integer($memory_4);
#line 228
undef($memory_4);
#line 228
label_4:
#line 228
undef($memory_3);
#line 228
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_1));
#line 228
if (c_rt_lib::check_true($memory_2)) {goto label_3;}
#line 228
$memory_1 = 0;
#line 228
$memory_1 = $memory_1 + $memory_0;
#line 228
$memory_1 = c_rt_lib::to_nl($memory_1 eq $memory_0);
#line 228
label_3:
#line 228
undef($memory_2);
#line 228
$memory_1 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_1));
#line 228
if (c_rt_lib::check_true($memory_1)) {goto label_2;}
#line 229
undef($memory_1);
#line 229
return $memory_0;
#line 230
goto label_1;
#line 230
label_2:
#line 230
$memory_1 = nl::is_sim($memory_0);
#line 230
$memory_1 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_1));
#line 230
if (c_rt_lib::check_true($memory_1)) {goto label_5;}
#line 231
$memory_2 = "\"";
#line 231
$memory_3 = generator_js_priv::escape_string($memory_0);
#line 231
$memory_2 = $memory_2 . $memory_3;
#line 231
undef($memory_3);
#line 231
$memory_3 = "\"";
#line 231
$memory_2 = $memory_2 . $memory_3;
#line 231
undef($memory_3);
#line 231
undef($memory_0);
#line 231
undef($memory_1);
#line 231
return $memory_2;
#line 231
undef($memory_2);
#line 232
goto label_1;
#line 232
label_5:
#line 232
$memory_1 = nl::is_array($memory_0);
#line 232
$memory_1 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_1));
#line 232
if (c_rt_lib::check_true($memory_1)) {goto label_6;}
#line 233
$memory_2 = generator_js_priv::print_const_arr($memory_0);
#line 233
undef($memory_0);
#line 233
undef($memory_1);
#line 233
return $memory_2;
#line 233
undef($memory_2);
#line 234
goto label_1;
#line 234
label_6:
#line 234
$memory_1 = nl::is_hash($memory_0);
#line 234
$memory_1 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_1));
#line 234
if (c_rt_lib::check_true($memory_1)) {goto label_7;}
#line 235
$memory_2 = generator_js_priv::print_const_hash($memory_0);
#line 235
undef($memory_0);
#line 235
undef($memory_1);
#line 235
return $memory_2;
#line 235
undef($memory_2);
#line 236
goto label_1;
#line 236
label_7:
#line 236
$memory_1 = nl::is_variant($memory_0);
#line 236
$memory_1 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_1));
#line 236
if (c_rt_lib::check_true($memory_1)) {goto label_8;}
#line 237
$memory_2 = generator_js_priv::print_const_ov($memory_0);
#line 237
undef($memory_0);
#line 237
undef($memory_1);
#line 237
return $memory_2;
#line 237
undef($memory_2);
#line 238
goto label_1;
#line 238
label_8:
#line 239
$memory_2 = [];
#line 239
die(dfile::ssave($memory_2));
#line 239
undef($memory_2);
#line 240
goto label_1;
#line 240
label_1:
#line 240
undef($memory_1);
#line 240
undef($memory_0);
#line 240
return;
}

sub generator_js_priv::print_goto($) {
my $memory_0;my $memory_1;my $memory_2;$memory_0 = $_[0];
#line 244
$memory_1 = "label = \"";
#line 244
$memory_1 = $memory_1 . $memory_0;
#line 244
$memory_2 = "\"; continue;";
#line 244
$memory_1 = $memory_1 . $memory_2;
#line 244
undef($memory_2);
#line 244
undef($memory_0);
#line 244
return $memory_1;
#line 244
undef($memory_1);
#line 244
undef($memory_0);
#line 244
return;
}

sub generator_js_priv::print_hash($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;$memory_0 = $_[0];
#line 248
$memory_1 = "{";
#line 249
$memory_3 = 0;
#line 249
$memory_4 = 1;
#line 249
$memory_5 = c_rt_lib::array_len($memory_0);
#line 249
label_3:
#line 249
$memory_6 = c_rt_lib::to_nl($memory_3 >= $memory_5);
#line 249
if (c_rt_lib::check_true($memory_6)) {goto label_1;}
#line 249
$memory_2 = $memory_0->[$memory_3];
#line 249
$memory_7 = "\"";
#line 249
$memory_9 = $memory_2->{'key'};
#line 249
$memory_8 = generator_js_priv::escape_string($memory_9);
#line 249
undef($memory_9);
#line 249
$memory_7 = $memory_7 . $memory_8;
#line 249
undef($memory_8);
#line 249
$memory_8 = "\":";
#line 249
$memory_7 = $memory_7 . $memory_8;
#line 249
undef($memory_8);
#line 249
$memory_9 = $memory_2->{'val'};
#line 249
$memory_8 = generator_js_priv::print_register_value($memory_9);
#line 249
undef($memory_9);
#line 249
$memory_7 = $memory_7 . $memory_8;
#line 249
undef($memory_8);
#line 249
$memory_8 = ",";
#line 249
$memory_7 = $memory_7 . $memory_8;
#line 249
undef($memory_8);
#line 249
$memory_1 = $memory_1 . $memory_7;
#line 249
undef($memory_7);
#line 249
$memory_3 = $memory_3 + $memory_4;
#line 249
goto label_3;
#line 249
label_1:
#line 249
undef($memory_2);
#line 249
undef($memory_3);
#line 249
undef($memory_4);
#line 249
undef($memory_5);
#line 249
undef($memory_6);
#line 250
$memory_2 = "}";
#line 250
$memory_2 = $memory_1 . $memory_2;
#line 250
undef($memory_0);
#line 250
undef($memory_1);
#line 250
return $memory_2;
#line 250
undef($memory_2);
#line 250
undef($memory_1);
#line 250
undef($memory_0);
#line 250
return;
}

sub generator_js_priv::print_ov_mk($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;$memory_0 = $_[0];
#line 254
$memory_2 = $memory_0->{'dest'};
#line 254
$memory_1 = generator_js_priv::print_register_to_assign($memory_2);
#line 254
undef($memory_2);
#line 255
$memory_2 = $memory_0->{'src'};
#line 255
$memory_3 = c_rt_lib::ov_is($memory_2, 'arg');
#line 255
if (c_rt_lib::check_true($memory_3)) {goto label_2;}
#line 257
$memory_3 = c_rt_lib::ov_is($memory_2, 'emp');
#line 257
if (c_rt_lib::check_true($memory_3)) {goto label_3;}
#line 257
$memory_3 = "NOMATCHALERT";
#line 257
$memory_3 = [$memory_3,$memory_2];
#line 257
die(dfile::ssave($memory_3));
#line 255
label_2:
#line 255
$memory_4 = c_rt_lib::ov_as($memory_2, 'arg');
#line 256
$memory_5 = "c_rt_lib0ov_mk_arg(\"";
#line 256
$memory_5 = $memory_1 . $memory_5;
#line 256
$memory_7 = $memory_0->{'name'};
#line 256
$memory_6 = generator_js_priv::escape_string($memory_7);
#line 256
undef($memory_7);
#line 256
$memory_5 = $memory_5 . $memory_6;
#line 256
undef($memory_6);
#line 256
$memory_6 = "\", ";
#line 256
$memory_5 = $memory_5 . $memory_6;
#line 256
undef($memory_6);
#line 256
$memory_6 = generator_js_priv::print_register($memory_4);
#line 256
$memory_5 = $memory_5 . $memory_6;
#line 256
undef($memory_6);
#line 256
$memory_6 = ");";
#line 256
$memory_5 = $memory_5 . $memory_6;
#line 256
undef($memory_6);
#line 256
undef($memory_0);
#line 256
undef($memory_1);
#line 256
undef($memory_2);
#line 256
undef($memory_3);
#line 256
undef($memory_4);
#line 256
return $memory_5;
#line 256
undef($memory_5);
#line 256
undef($memory_4);
#line 257
goto label_1;
#line 257
label_3:
#line 258
$memory_4 = "c_rt_lib0ov_mk_none(\"";
#line 258
$memory_4 = $memory_1 . $memory_4;
#line 258
$memory_6 = $memory_0->{'name'};
#line 258
$memory_5 = generator_js_priv::escape_string($memory_6);
#line 258
undef($memory_6);
#line 258
$memory_4 = $memory_4 . $memory_5;
#line 258
undef($memory_5);
#line 258
$memory_5 = "\");";
#line 258
$memory_4 = $memory_4 . $memory_5;
#line 258
undef($memory_5);
#line 258
undef($memory_0);
#line 258
undef($memory_1);
#line 258
undef($memory_2);
#line 258
undef($memory_3);
#line 258
return $memory_4;
#line 258
undef($memory_4);
#line 259
goto label_1;
#line 259
label_1:
#line 259
undef($memory_2);
#line 259
undef($memory_3);
#line 259
undef($memory_1);
#line 259
undef($memory_0);
#line 259
return;
}

sub generator_js_priv::print_register($) {
my $memory_0;my $memory_1;$memory_0 = $_[0];
#line 263
$memory_1 = "___nl__";
#line 263
$memory_1 = $memory_1 . $memory_0;
#line 263
undef($memory_0);
#line 263
return $memory_1;
#line 263
undef($memory_1);
#line 263
undef($memory_0);
#line 263
return;
}

sub generator_js_priv::print_register_value($) {
my $memory_0;my $memory_1;my $memory_2;$memory_0 = $_[0];
#line 267
$memory_1 = generator_js_priv::print_register($memory_0);
#line 267
$memory_2 = ".value";
#line 267
$memory_1 = $memory_1 . $memory_2;
#line 267
undef($memory_2);
#line 267
undef($memory_0);
#line 267
return $memory_1;
#line 267
undef($memory_1);
#line 267
undef($memory_0);
#line 267
return;
}

sub generator_js_priv::print_register_to_assign($) {
my $memory_0;my $memory_1;my $memory_2;$memory_0 = $_[0];
#line 271
$memory_1 = "";
#line 271
$memory_1 = c_rt_lib::to_nl($memory_0 eq $memory_1);
#line 271
$memory_1 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_1));
#line 271
if (c_rt_lib::check_true($memory_1)) {goto label_2;}
#line 271
$memory_2 = "";
#line 271
undef($memory_0);
#line 271
undef($memory_1);
#line 271
return $memory_2;
#line 271
undef($memory_2);
#line 271
goto label_2;
#line 271
label_2:
#line 271
undef($memory_1);
#line 272
$memory_1 = generator_js_priv::print_register_value($memory_0);
#line 272
$memory_2 = " = ";
#line 272
$memory_1 = $memory_1 . $memory_2;
#line 272
undef($memory_2);
#line 272
undef($memory_0);
#line 272
return $memory_1;
#line 272
undef($memory_1);
#line 272
undef($memory_0);
#line 272
return;
}

sub generator_js_priv::print_return($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;$memory_0 = $_[0];
#line 276
$memory_1 = c_rt_lib::ov_is($memory_0, 'val');
#line 276
if (c_rt_lib::check_true($memory_1)) {goto label_2;}
#line 278
$memory_1 = c_rt_lib::ov_is($memory_0, 'emp');
#line 278
if (c_rt_lib::check_true($memory_1)) {goto label_3;}
#line 278
$memory_1 = "NOMATCHALERT";
#line 278
$memory_1 = [$memory_1,$memory_0];
#line 278
die(dfile::ssave($memory_1));
#line 276
label_2:
#line 276
$memory_2 = c_rt_lib::ov_as($memory_0, 'val');
#line 277
$memory_3 = "return ";
#line 277
$memory_4 = generator_js_priv::print_register_value($memory_2);
#line 277
$memory_3 = $memory_3 . $memory_4;
#line 277
undef($memory_4);
#line 277
$memory_4 = ";";
#line 277
$memory_3 = $memory_3 . $memory_4;
#line 277
undef($memory_4);
#line 277
undef($memory_0);
#line 277
undef($memory_1);
#line 277
undef($memory_2);
#line 277
return $memory_3;
#line 277
undef($memory_3);
#line 277
undef($memory_2);
#line 278
goto label_1;
#line 278
label_3:
#line 279
$memory_2 = "return null;";
#line 279
undef($memory_0);
#line 279
undef($memory_1);
#line 279
return $memory_2;
#line 279
undef($memory_2);
#line 280
goto label_1;
#line 280
label_1:
#line 280
undef($memory_1);
#line 280
undef($memory_0);
#line 280
return;
}

sub generator_js_priv::print_una_op($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;$memory_0 = $_[0];
#line 284
$memory_2 = $memory_0->{'dest'};
#line 284
$memory_1 = generator_js_priv::print_register_to_assign($memory_2);
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
if (c_rt_lib::check_true($memory_2)) {goto label_2;}
#line 286
$memory_3 = "c_rt_lib0native_to_nl(!c_rt_lib0check_true_native(";
#line 286
$memory_3 = $memory_1 . $memory_3;
#line 286
$memory_5 = $memory_0->{'src'};
#line 286
$memory_4 = generator_js_priv::print_register($memory_5);
#line 286
undef($memory_5);
#line 286
$memory_3 = $memory_3 . $memory_4;
#line 286
undef($memory_4);
#line 286
$memory_4 = "));";
#line 286
$memory_3 = $memory_3 . $memory_4;
#line 286
undef($memory_4);
#line 286
undef($memory_0);
#line 286
undef($memory_1);
#line 286
undef($memory_2);
#line 286
return $memory_3;
#line 286
undef($memory_3);
#line 287
goto label_1;
#line 287
label_2:
#line 288
$memory_3 = $memory_0->{'op'};
#line 288
$memory_3 = $memory_1 . $memory_3;
#line 288
$memory_5 = $memory_0->{'src'};
#line 288
$memory_4 = generator_js_priv::print_register_value($memory_5);
#line 288
undef($memory_5);
#line 288
$memory_3 = $memory_3 . $memory_4;
#line 288
undef($memory_4);
#line 288
$memory_4 = ";";
#line 288
$memory_3 = $memory_3 . $memory_4;
#line 288
undef($memory_4);
#line 288
undef($memory_0);
#line 288
undef($memory_1);
#line 288
undef($memory_2);
#line 288
return $memory_3;
#line 288
undef($memory_3);
#line 289
goto label_1;
#line 289
label_1:
#line 289
undef($memory_2);
#line 289
undef($memory_1);
#line 289
undef($memory_0);
#line 289
return;
}
