use c_rt_lib;
use nlasm;
use translator;
use nparser;
use module_checker;
use type_checker;
use array;
use hash;
use generator_js;
use post_processing;
use ptd;
use pretty_printer;
use nast;
use compiler_lib;
sub string_compiler::compile;
sub string_compiler::modules_t;
sub string_compiler::type_check_t;
sub string_compiler::printed_struct_t;
sub string_compiler::error_t;
sub string_compiler::print_modules;
sub string_compiler::parse_module;
sub string_compiler::check_type;
sub string_compiler::compile_to_nlasm;
sub string_compiler::compile_to_js;

return 1;

sub string_compiler::compile($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;$memory_0 = $_[0];$memory_1 = $_[1];
#line 24
$memory_2 = nparser::sparse($memory_0, $memory_1);
#line 25
$memory_3 = c_rt_lib::ov_is($memory_2, 'ok');
#line 25
if (c_rt_lib::check_true($memory_3)) {goto label_8;}
#line 38
$memory_3 = c_rt_lib::ov_is($memory_2, 'error');
#line 38
if (c_rt_lib::check_true($memory_3)) {goto label_75;}
#line 38
$memory_3 = "NOMATCHALERT";
#line 38
$memory_3 = [$memory_3,$memory_2];
#line 38
die(dfile::ssave($memory_3));
#line 25
label_8:
#line 25
$memory_4 = c_rt_lib::ov_as($memory_2, 'ok');
#line 26
$memory_5 = [];
#line 27
$memory_6 = {};
#line 28
$memory_8 = c_rt_lib::to_nl(0);
#line 28
$memory_7 = module_checker::check_module($memory_4, $memory_8, $memory_6);
#line 28
undef($memory_8);
#line 29
$memory_8 = $memory_7->{'errors'};
#line 29
$memory_5 = $memory_8;
#line 29
undef($memory_8);
#line 30
$memory_8 = array::len($memory_5);
#line 30
$memory_9 = 0;
#line 30
$memory_8 = c_rt_lib::to_nl($memory_8 == $memory_9);
#line 30
undef($memory_9);
#line 30
$memory_8 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 30
if (c_rt_lib::check_true($memory_8)) {goto label_35;}
#line 31
$memory_9 = {};
#line 32
$memory_10 = $memory_4->{'name'};
#line 32
hash::set_value($memory_9, $memory_10, $memory_4);
#line 32
undef($memory_10);
#line 33
$memory_10 = type_checker::check_modules($memory_9, $memory_9);
#line 34
$memory_11 = $memory_10->{'errors'};
#line 34
$memory_5 = $memory_11;
#line 34
undef($memory_11);
#line 34
undef($memory_9);
#line 34
undef($memory_10);
#line 35
goto label_35;
#line 35
label_35:
#line 35
undef($memory_8);
#line 36
$memory_8 = array::len($memory_5);
#line 36
$memory_9 = 0;
#line 36
$memory_8 = c_rt_lib::to_nl($memory_8 == $memory_9);
#line 36
undef($memory_9);
#line 36
$memory_8 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 36
if (c_rt_lib::check_true($memory_8)) {goto label_57;}
#line 36
$memory_9 = translator::translate($memory_4);
#line 36
$memory_9 = c_rt_lib::ov_mk_arg('ok', $memory_9);
#line 36
undef($memory_0);
#line 36
undef($memory_1);
#line 36
undef($memory_2);
#line 36
undef($memory_3);
#line 36
undef($memory_4);
#line 36
undef($memory_5);
#line 36
undef($memory_6);
#line 36
undef($memory_7);
#line 36
undef($memory_8);
#line 36
return $memory_9;
#line 36
undef($memory_9);
#line 36
goto label_57;
#line 36
label_57:
#line 36
undef($memory_8);
#line 37
$memory_8 = c_rt_lib::ov_mk_arg('err', $memory_5);
#line 37
undef($memory_0);
#line 37
undef($memory_1);
#line 37
undef($memory_2);
#line 37
undef($memory_3);
#line 37
undef($memory_4);
#line 37
undef($memory_5);
#line 37
undef($memory_6);
#line 37
undef($memory_7);
#line 37
return $memory_8;
#line 37
undef($memory_8);
#line 37
undef($memory_5);
#line 37
undef($memory_6);
#line 37
undef($memory_7);
#line 37
undef($memory_4);
#line 38
goto label_87;
#line 38
label_75:
#line 38
$memory_4 = c_rt_lib::ov_as($memory_2, 'error');
#line 39
$memory_5 = c_rt_lib::ov_mk_arg('err', $memory_4);
#line 39
undef($memory_0);
#line 39
undef($memory_1);
#line 39
undef($memory_2);
#line 39
undef($memory_3);
#line 39
undef($memory_4);
#line 39
return $memory_5;
#line 39
undef($memory_5);
#line 39
undef($memory_4);
#line 40
goto label_87;
#line 40
label_87:
#line 40
undef($memory_3);
#line 40
undef($memory_2);
#line 40
undef($memory_0);
#line 40
undef($memory_1);
#line 40
return;
}

sub string_compiler::__modules_t() {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;
#line 44
$memory_3 = ptd::sim();
#line 44
$memory_4 = ptd::sim();
#line 44
$memory_2 = {code => $memory_3,module_name => $memory_4,};
#line 44
undef($memory_3);
#line 44
undef($memory_4);
#line 44
$memory_1 = ptd::rec($memory_2);
#line 44
undef($memory_2);
#line 44
$memory_0 = ptd::hash($memory_1);
#line 44
undef($memory_1);
#line 44
return $memory_0;
#line 44
undef($memory_0);
#line 44
return;
}

my $_modules_t;
sub string_compiler::modules_t() {
	$_modules_t = string_compiler::__modules_t() unless defined $_modules_t;
	return $_modules_t;
}

sub string_compiler::__type_check_t() {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;
#line 48
$memory_4 = ptd::sim();
#line 48
$memory_3 = ptd::arr($memory_4);
#line 48
undef($memory_4);
#line 48
$memory_5 = ptd::sim();
#line 48
$memory_4 = ptd::arr($memory_5);
#line 48
undef($memory_5);
#line 48
$memory_2 = {check => $memory_3,lib => $memory_4,};
#line 48
undef($memory_3);
#line 48
undef($memory_4);
#line 48
$memory_1 = ptd::rec($memory_2);
#line 48
undef($memory_2);
#line 48
$memory_0 = ptd::arr($memory_1);
#line 48
undef($memory_1);
#line 48
return $memory_0;
#line 48
undef($memory_0);
#line 48
return;
}

my $_type_check_t;
sub string_compiler::type_check_t() {
	$_type_check_t = string_compiler::__type_check_t() unless defined $_type_check_t;
	return $_type_check_t;
}

sub string_compiler::__printed_struct_t() {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;
#line 53
$memory_3 = ptd::sim();
#line 53
$memory_2 = ptd::arr($memory_3);
#line 53
undef($memory_3);
#line 54
$memory_6 = ptd::sim();
#line 54
$memory_7 = ptd::sim();
#line 54
$memory_8 = ptd::sim();
#line 54
$memory_5 = {name => $memory_6,head => $memory_7,body => $memory_8,};
#line 54
undef($memory_6);
#line 54
undef($memory_7);
#line 54
undef($memory_8);
#line 54
$memory_4 = ptd::rec($memory_5);
#line 54
undef($memory_5);
#line 54
$memory_3 = ptd::arr($memory_4);
#line 54
undef($memory_4);
#line 54
$memory_1 = {imports => $memory_2,functions => $memory_3,};
#line 54
undef($memory_2);
#line 54
undef($memory_3);
#line 54
$memory_0 = ptd::rec($memory_1);
#line 54
undef($memory_1);
#line 54
return $memory_0;
#line 54
undef($memory_0);
#line 54
return;
}

my $_printed_struct_t;
sub string_compiler::printed_struct_t() {
	$_printed_struct_t = string_compiler::__printed_struct_t() unless defined $_printed_struct_t;
	return $_printed_struct_t;
}

sub string_compiler::__error_t() {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;
#line 59
$memory_2 = {
	module => "compiler_lib",
	name => "error_t",
};
#line 59
$memory_2 = c_rt_lib::ov_mk_arg('ref', $memory_2);
#line 59
$memory_3 = ptd::sim();
#line 59
$memory_1 = {error => $memory_2,key => $memory_3,};
#line 59
undef($memory_2);
#line 59
undef($memory_3);
#line 59
$memory_0 = ptd::rec($memory_1);
#line 59
undef($memory_1);
#line 59
return $memory_0;
#line 59
undef($memory_0);
#line 59
return;
}

my $_error_t;
sub string_compiler::error_t() {
	$_error_t = string_compiler::__error_t() unless defined $_error_t;
	return $_error_t;
}

sub string_compiler::print_modules($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;$memory_0 = $_[0];
#line 63
$memory_1 = {};
#line 64
$memory_4 = c_rt_lib::init_iter($memory_0);
#line 64
label_2:
#line 64
$memory_2 = c_rt_lib::is_end_hash($memory_4);
#line 64
if (c_rt_lib::check_true($memory_2)) {goto label_12;}
#line 64
$memory_2 = c_rt_lib::get_key_iter($memory_4);
#line 64
$memory_3 = c_rt_lib::hash_get_value($memory_0, $memory_2);
#line 65
$memory_5 = pretty_printer::print_module_to_struct($memory_3);
#line 65
hash::set_value($memory_1, $memory_2, $memory_5);
#line 65
undef($memory_5);
#line 66
$memory_4 = c_rt_lib::next_iter($memory_4);
#line 66
goto label_2;
#line 66
label_12:
#line 66
undef($memory_2);
#line 66
undef($memory_3);
#line 66
undef($memory_4);
#line 67
undef($memory_0);
#line 67
return $memory_1;
#line 67
undef($memory_1);
#line 67
undef($memory_0);
#line 67
return;
}

sub string_compiler::parse_module($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;my $memory_13;my $memory_14;my $memory_15;my $memory_16;my $memory_17;$memory_0 = $_[0];
#line 74
$memory_1 = [];
#line 75
$memory_2 = {};
#line 76
$memory_5 = c_rt_lib::init_iter($memory_0);
#line 76
label_3:
#line 76
$memory_3 = c_rt_lib::is_end_hash($memory_5);
#line 76
if (c_rt_lib::check_true($memory_3)) {goto label_78;}
#line 76
$memory_3 = c_rt_lib::get_key_iter($memory_5);
#line 76
$memory_4 = c_rt_lib::hash_get_value($memory_0, $memory_3);
#line 77
$memory_7 = $memory_4->{'code'};
#line 77
$memory_8 = $memory_4->{'module_name'};
#line 77
$memory_6 = nparser::sparse($memory_7, $memory_8);
#line 77
undef($memory_8);
#line 77
undef($memory_7);
#line 77
$memory_7 = c_rt_lib::ov_is($memory_6, 'ok');
#line 77
if (c_rt_lib::check_true($memory_7)) {goto label_20;}
#line 84
$memory_7 = c_rt_lib::ov_is($memory_6, 'error');
#line 84
if (c_rt_lib::check_true($memory_7)) {goto label_51;}
#line 84
$memory_7 = "NOMATCHALERT";
#line 84
$memory_7 = [$memory_7,$memory_6];
#line 84
die(dfile::ssave($memory_7));
#line 77
label_20:
#line 77
$memory_8 = c_rt_lib::ov_as($memory_6, 'ok');
#line 78
$memory_9 = {};
#line 79
$memory_11 = c_rt_lib::to_nl(0);
#line 79
$memory_10 = module_checker::check_module($memory_8, $memory_11, $memory_9);
#line 79
undef($memory_11);
#line 80
$memory_11 = $memory_10->{'errors'};
#line 80
$memory_13 = 0;
#line 80
$memory_14 = 1;
#line 80
$memory_15 = c_rt_lib::array_len($memory_11);
#line 80
label_30:
#line 80
$memory_16 = c_rt_lib::to_nl($memory_13 >= $memory_15);
#line 80
if (c_rt_lib::check_true($memory_16)) {goto label_39;}
#line 80
$memory_12 = $memory_11->[$memory_13];
#line 81
$memory_17 = {error => $memory_12,key => $memory_3,};
#line 81
array::push($memory_1, $memory_17);
#line 81
undef($memory_17);
#line 82
$memory_13 = $memory_13 + $memory_14;
#line 82
goto label_30;
#line 82
label_39:
#line 82
undef($memory_11);
#line 82
undef($memory_12);
#line 82
undef($memory_13);
#line 82
undef($memory_14);
#line 82
undef($memory_15);
#line 82
undef($memory_16);
#line 83
hash::set_value($memory_2, $memory_3, $memory_8);
#line 83
undef($memory_9);
#line 83
undef($memory_10);
#line 83
undef($memory_8);
#line 84
goto label_73;
#line 84
label_51:
#line 84
$memory_8 = c_rt_lib::ov_as($memory_6, 'error');
#line 85
$memory_10 = 0;
#line 85
$memory_11 = 1;
#line 85
$memory_12 = c_rt_lib::array_len($memory_8);
#line 85
label_56:
#line 85
$memory_13 = c_rt_lib::to_nl($memory_10 >= $memory_12);
#line 85
if (c_rt_lib::check_true($memory_13)) {goto label_65;}
#line 85
$memory_9 = $memory_8->[$memory_10];
#line 86
$memory_14 = {error => $memory_9,key => $memory_3,};
#line 86
array::push($memory_1, $memory_14);
#line 86
undef($memory_14);
#line 87
$memory_10 = $memory_10 + $memory_11;
#line 87
goto label_56;
#line 87
label_65:
#line 87
undef($memory_9);
#line 87
undef($memory_10);
#line 87
undef($memory_11);
#line 87
undef($memory_12);
#line 87
undef($memory_13);
#line 87
undef($memory_8);
#line 88
goto label_73;
#line 88
label_73:
#line 88
undef($memory_6);
#line 88
undef($memory_7);
#line 89
$memory_5 = c_rt_lib::next_iter($memory_5);
#line 89
goto label_3;
#line 89
label_78:
#line 89
undef($memory_3);
#line 89
undef($memory_4);
#line 89
undef($memory_5);
#line 90
$memory_3 = array::len($memory_1);
#line 90
$memory_4 = 0;
#line 90
$memory_3 = c_rt_lib::to_nl($memory_3 > $memory_4);
#line 90
undef($memory_4);
#line 90
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 90
if (c_rt_lib::check_true($memory_3)) {goto label_96;}
#line 90
$memory_4 = c_rt_lib::ov_mk_arg('err', $memory_1);
#line 90
undef($memory_0);
#line 90
undef($memory_1);
#line 90
undef($memory_2);
#line 90
undef($memory_3);
#line 90
return $memory_4;
#line 90
undef($memory_4);
#line 90
goto label_96;
#line 90
label_96:
#line 90
undef($memory_3);
#line 91
$memory_3 = c_rt_lib::ov_mk_arg('ok', $memory_2);
#line 91
undef($memory_0);
#line 91
undef($memory_1);
#line 91
undef($memory_2);
#line 91
return $memory_3;
#line 91
undef($memory_3);
#line 91
undef($memory_1);
#line 91
undef($memory_2);
#line 91
undef($memory_0);
#line 91
return;
}

sub string_compiler::check_type($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;my $memory_13;my $memory_14;my $memory_15;my $memory_16;my $memory_17;my $memory_18;my $memory_19;my $memory_20;$memory_0 = $_[0];$memory_1 = $_[1];
#line 98
$memory_2 = [];
#line 99
$memory_4 = 0;
#line 99
$memory_5 = 1;
#line 99
$memory_6 = c_rt_lib::array_len($memory_0);
#line 99
label_4:
#line 99
$memory_7 = c_rt_lib::to_nl($memory_4 >= $memory_6);
#line 99
if (c_rt_lib::check_true($memory_7)) {goto label_123;}
#line 99
$memory_3 = $memory_0->[$memory_4];
#line 100
$memory_8 = {};
#line 101
$memory_9 = {};
#line 102
$memory_10 = {};
#line 103
$memory_11 = $memory_3->{'lib'};
#line 103
$memory_13 = 0;
#line 103
$memory_14 = 1;
#line 103
$memory_15 = c_rt_lib::array_len($memory_11);
#line 103
label_15:
#line 103
$memory_16 = c_rt_lib::to_nl($memory_13 >= $memory_15);
#line 103
if (c_rt_lib::check_true($memory_16)) {goto label_31;}
#line 103
$memory_12 = $memory_11->[$memory_13];
#line 104
$memory_17 = hash::get_value($memory_1, $memory_12);
#line 104
$memory_17 = $memory_17->{'name'};
#line 104
$memory_18 = hash::get_value($memory_1, $memory_12);
#line 104
hash::set_value($memory_8, $memory_17, $memory_18);
#line 104
undef($memory_18);
#line 104
undef($memory_17);
#line 105
$memory_17 = hash::get_value($memory_1, $memory_12);
#line 105
$memory_17 = $memory_17->{'name'};
#line 105
hash::set_value($memory_10, $memory_17, $memory_12);
#line 105
undef($memory_17);
#line 106
$memory_13 = $memory_13 + $memory_14;
#line 106
goto label_15;
#line 106
label_31:
#line 106
undef($memory_11);
#line 106
undef($memory_12);
#line 106
undef($memory_13);
#line 106
undef($memory_14);
#line 106
undef($memory_15);
#line 106
undef($memory_16);
#line 107
$memory_11 = $memory_3->{'check'};
#line 107
$memory_13 = 0;
#line 107
$memory_14 = 1;
#line 107
$memory_15 = c_rt_lib::array_len($memory_11);
#line 107
label_42:
#line 107
$memory_16 = c_rt_lib::to_nl($memory_13 >= $memory_15);
#line 107
if (c_rt_lib::check_true($memory_16)) {goto label_58;}
#line 107
$memory_12 = $memory_11->[$memory_13];
#line 108
$memory_17 = hash::get_value($memory_1, $memory_12);
#line 108
$memory_17 = $memory_17->{'name'};
#line 108
$memory_18 = hash::get_value($memory_1, $memory_12);
#line 108
hash::set_value($memory_9, $memory_17, $memory_18);
#line 108
undef($memory_18);
#line 108
undef($memory_17);
#line 109
$memory_17 = hash::get_value($memory_1, $memory_12);
#line 109
$memory_17 = $memory_17->{'name'};
#line 109
hash::set_value($memory_10, $memory_17, $memory_12);
#line 109
undef($memory_17);
#line 110
$memory_13 = $memory_13 + $memory_14;
#line 110
goto label_42;
#line 110
label_58:
#line 110
undef($memory_11);
#line 110
undef($memory_12);
#line 110
undef($memory_13);
#line 110
undef($memory_14);
#line 110
undef($memory_15);
#line 110
undef($memory_16);
#line 111
$memory_11 = type_checker::check_modules($memory_9, $memory_8);
#line 112
$memory_12 = $memory_11->{'errors'};
#line 112
$memory_14 = 0;
#line 112
$memory_15 = 1;
#line 112
$memory_16 = c_rt_lib::array_len($memory_12);
#line 112
label_70:
#line 112
$memory_17 = c_rt_lib::to_nl($memory_14 >= $memory_16);
#line 112
if (c_rt_lib::check_true($memory_17)) {goto label_83;}
#line 112
$memory_13 = $memory_12->[$memory_14];
#line 113
$memory_20 = $memory_13->{'module'};
#line 113
$memory_19 = hash::get_value($memory_10, $memory_20);
#line 113
undef($memory_20);
#line 113
$memory_18 = {error => $memory_13,key => $memory_19,};
#line 113
undef($memory_19);
#line 113
array::push($memory_2, $memory_18);
#line 113
undef($memory_18);
#line 114
$memory_14 = $memory_14 + $memory_15;
#line 114
goto label_70;
#line 114
label_83:
#line 114
undef($memory_12);
#line 114
undef($memory_13);
#line 114
undef($memory_14);
#line 114
undef($memory_15);
#line 114
undef($memory_16);
#line 114
undef($memory_17);
#line 115
$memory_13 = $memory_11->{'errors'};
#line 115
$memory_12 = array::len($memory_13);
#line 115
undef($memory_13);
#line 115
$memory_13 = 0;
#line 115
$memory_12 = c_rt_lib::to_nl($memory_12 > $memory_13);
#line 115
undef($memory_13);
#line 115
$memory_12 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_12));
#line 115
if (c_rt_lib::check_true($memory_12)) {goto label_115;}
#line 115
$memory_13 = c_rt_lib::ov_mk_arg('err', $memory_2);
#line 115
undef($memory_0);
#line 115
undef($memory_1);
#line 115
undef($memory_2);
#line 115
undef($memory_3);
#line 115
undef($memory_4);
#line 115
undef($memory_5);
#line 115
undef($memory_6);
#line 115
undef($memory_7);
#line 115
undef($memory_8);
#line 115
undef($memory_9);
#line 115
undef($memory_10);
#line 115
undef($memory_11);
#line 115
undef($memory_12);
#line 115
return $memory_13;
#line 115
undef($memory_13);
#line 115
goto label_115;
#line 115
label_115:
#line 115
undef($memory_12);
#line 115
undef($memory_8);
#line 115
undef($memory_9);
#line 115
undef($memory_10);
#line 115
undef($memory_11);
#line 116
$memory_4 = $memory_4 + $memory_5;
#line 116
goto label_4;
#line 116
label_123:
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
#line 117
$memory_3 = "";
#line 117
$memory_3 = c_rt_lib::ov_mk_arg('ok', $memory_3);
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
undef($memory_2);
#line 117
undef($memory_0);
#line 117
undef($memory_1);
#line 117
return;
}

sub string_compiler::compile_to_nlasm($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;$memory_0 = $_[0];
#line 124
$memory_1 = [];
#line 125
$memory_2 = {};
#line 126
$memory_5 = c_rt_lib::init_iter($memory_0);
#line 126
label_3:
#line 126
$memory_3 = c_rt_lib::is_end_hash($memory_5);
#line 126
if (c_rt_lib::check_true($memory_3)) {goto label_40;}
#line 126
$memory_3 = c_rt_lib::get_key_iter($memory_5);
#line 126
$memory_4 = c_rt_lib::hash_get_value($memory_0, $memory_3);
#line 127
$memory_6 = nparser::sparse($memory_4, $memory_3);
#line 127
$memory_7 = c_rt_lib::ov_is($memory_6, 'ok');
#line 127
if (c_rt_lib::check_true($memory_7)) {goto label_16;}
#line 132
$memory_7 = c_rt_lib::ov_is($memory_6, 'error');
#line 132
if (c_rt_lib::check_true($memory_7)) {goto label_30;}
#line 132
$memory_7 = "NOMATCHALERT";
#line 132
$memory_7 = [$memory_7,$memory_6];
#line 132
die(dfile::ssave($memory_7));
#line 127
label_16:
#line 127
$memory_8 = c_rt_lib::ov_as($memory_6, 'ok');
#line 128
$memory_9 = {};
#line 129
$memory_11 = c_rt_lib::to_nl(0);
#line 129
$memory_10 = module_checker::check_module($memory_8, $memory_11, $memory_9);
#line 129
undef($memory_11);
#line 130
$memory_11 = $memory_10->{'errors'};
#line 130
array::append($memory_1, $memory_11);
#line 130
undef($memory_11);
#line 131
hash::set_value($memory_2, $memory_3, $memory_8);
#line 131
undef($memory_9);
#line 131
undef($memory_10);
#line 131
undef($memory_8);
#line 132
goto label_35;
#line 132
label_30:
#line 132
$memory_8 = c_rt_lib::ov_as($memory_6, 'error');
#line 133
array::append($memory_1, $memory_8);
#line 133
undef($memory_8);
#line 134
goto label_35;
#line 134
label_35:
#line 134
undef($memory_6);
#line 134
undef($memory_7);
#line 135
$memory_5 = c_rt_lib::next_iter($memory_5);
#line 135
goto label_3;
#line 135
label_40:
#line 135
undef($memory_3);
#line 135
undef($memory_4);
#line 135
undef($memory_5);
#line 136
$memory_3 = array::len($memory_1);
#line 136
$memory_4 = 0;
#line 136
$memory_3 = c_rt_lib::to_nl($memory_3 > $memory_4);
#line 136
undef($memory_4);
#line 136
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 136
if (c_rt_lib::check_true($memory_3)) {goto label_58;}
#line 136
$memory_4 = c_rt_lib::ov_mk_arg('err', $memory_1);
#line 136
undef($memory_0);
#line 136
undef($memory_1);
#line 136
undef($memory_2);
#line 136
undef($memory_3);
#line 136
return $memory_4;
#line 136
undef($memory_4);
#line 136
goto label_58;
#line 136
label_58:
#line 136
undef($memory_3);
#line 137
$memory_3 = type_checker::check_modules($memory_2, $memory_2);
#line 138
$memory_5 = $memory_3->{'errors'};
#line 138
$memory_4 = array::len($memory_5);
#line 138
undef($memory_5);
#line 138
$memory_5 = 0;
#line 138
$memory_4 = c_rt_lib::to_nl($memory_4 > $memory_5);
#line 138
undef($memory_5);
#line 138
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 138
if (c_rt_lib::check_true($memory_4)) {goto label_79;}
#line 138
$memory_5 = $memory_3->{'errors'};
#line 138
$memory_5 = c_rt_lib::ov_mk_arg('err', $memory_5);
#line 138
undef($memory_0);
#line 138
undef($memory_1);
#line 138
undef($memory_2);
#line 138
undef($memory_3);
#line 138
undef($memory_4);
#line 138
return $memory_5;
#line 138
undef($memory_5);
#line 138
goto label_79;
#line 138
label_79:
#line 138
undef($memory_4);
#line 139
$memory_4 = {};
#line 140
$memory_7 = c_rt_lib::init_iter($memory_2);
#line 140
label_83:
#line 140
$memory_5 = c_rt_lib::is_end_hash($memory_7);
#line 140
if (c_rt_lib::check_true($memory_5)) {goto label_93;}
#line 140
$memory_5 = c_rt_lib::get_key_iter($memory_7);
#line 140
$memory_6 = c_rt_lib::hash_get_value($memory_2, $memory_5);
#line 141
$memory_8 = translator::translate($memory_6);
#line 141
hash::set_value($memory_4, $memory_5, $memory_8);
#line 141
undef($memory_8);
#line 142
$memory_7 = c_rt_lib::next_iter($memory_7);
#line 142
goto label_83;
#line 142
label_93:
#line 142
undef($memory_5);
#line 142
undef($memory_6);
#line 142
undef($memory_7);
#line 143
$memory_6 = {};
#line 143
$memory_7 = c_rt_lib::ov_mk_none('o0');
#line 143
$memory_5 = post_processing::init($memory_6, $memory_7);
#line 143
undef($memory_7);
#line 143
undef($memory_6);
#line 144
post_processing::find($memory_5, $memory_4);
#line 145
$memory_6 = c_rt_lib::ov_mk_arg('ok', $memory_4);
#line 145
undef($memory_0);
#line 145
undef($memory_1);
#line 145
undef($memory_2);
#line 145
undef($memory_3);
#line 145
undef($memory_4);
#line 145
undef($memory_5);
#line 145
return $memory_6;
#line 145
undef($memory_6);
#line 145
undef($memory_1);
#line 145
undef($memory_2);
#line 145
undef($memory_3);
#line 145
undef($memory_4);
#line 145
undef($memory_5);
#line 145
undef($memory_0);
#line 145
return;
}

sub string_compiler::compile_to_js($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;$memory_0 = $_[0];$memory_1 = $_[1];
#line 152
$memory_4 = string_compiler::compile_to_nlasm($memory_0);
#line 152
$memory_3 = c_rt_lib::ov_is($memory_4, 'ok');
#line 152
if (c_rt_lib::check_true($memory_3)) {goto label_8;}
#line 152
undef($memory_0);
#line 152
undef($memory_1);
#line 152
undef($memory_2);
#line 152
undef($memory_3);
#line 152
return $memory_4;
#line 152
label_8:
#line 152
$memory_2 = c_rt_lib::ov_as($memory_4, 'ok');
#line 152
undef($memory_3);
#line 152
undef($memory_4);
#line 153
$memory_3 = {};
#line 154
$memory_6 = c_rt_lib::init_iter($memory_2);
#line 154
label_14:
#line 154
$memory_4 = c_rt_lib::is_end_hash($memory_6);
#line 154
if (c_rt_lib::check_true($memory_4)) {goto label_24;}
#line 154
$memory_4 = c_rt_lib::get_key_iter($memory_6);
#line 154
$memory_5 = c_rt_lib::hash_get_value($memory_2, $memory_4);
#line 155
$memory_7 = generator_js::generate($memory_5, $memory_1);
#line 155
hash::set_value($memory_3, $memory_4, $memory_7);
#line 155
undef($memory_7);
#line 156
$memory_6 = c_rt_lib::next_iter($memory_6);
#line 156
goto label_14;
#line 156
label_24:
#line 156
undef($memory_4);
#line 156
undef($memory_5);
#line 156
undef($memory_6);
#line 157
$memory_4 = c_rt_lib::ov_mk_arg('ok', $memory_3);
#line 157
undef($memory_0);
#line 157
undef($memory_1);
#line 157
undef($memory_2);
#line 157
undef($memory_3);
#line 157
return $memory_4;
#line 157
undef($memory_4);
#line 157
undef($memory_2);
#line 157
undef($memory_3);
#line 157
undef($memory_0);
#line 157
undef($memory_1);
#line 157
return;
}
