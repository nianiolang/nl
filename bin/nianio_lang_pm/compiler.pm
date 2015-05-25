use c_rt_lib;
use c_fe_lib;
use string;
use hash;
use array;
use dfile;
use ptd;
use nast;
use nparser;
use boolean_t;
use pretty_printer;
use generator_c;
use generator_pm;
use generator_js;
use generator_java;
use translator;
use nlasm;
use post_processing;
use tc_types;
use type_checker;
use module_checker;
use interpreter;
use nl;
sub compiler_priv::get_dir_cache_name;
sub compiler_priv::get_dir_pretty_name;
sub compiler_priv::get_default_deref_file;
sub compiler_priv::get_default_math_file;
sub compiler::parse_check_t;
sub compiler::errors_hash_t;
sub compiler::errors_group_t;
sub compiler::language_t;
sub compiler::destination_t;
sub compiler::module_t;
sub compiler::deref_t;
sub compiler::try_t;
sub compiler::input_type;
sub compiler::file_t;
sub compiler::compile;
sub compiler_priv::get_known_func;
sub compiler_priv::exec_interpreter;
sub compiler_priv::get_module_name;
sub compiler_priv::has_extension;
sub compiler_priv::get_generator_state;
sub compiler_priv::get_out_ext;
sub compiler_priv::mk_path;
sub compiler_priv::mk_path_module;
sub compiler_priv::get_all_nianio_file;
sub compiler_priv::get_files_to_parse;
sub compiler_priv::parse_module;
sub compiler_priv::get_mathematical_func;
sub compiler_priv::compile_ide;
sub compiler_priv::compile_strict_file;
sub compiler_priv::construct_error_message;
sub compiler_priv::show_and_count_errors;
sub compiler_priv::translate;
sub compiler_priv::check_modules;
sub compiler_priv::try_save_file;
sub compiler_priv::generate_modules_to_files;
sub compiler_priv::save_module_to_file;
sub compiler_priv::get_dir;
sub compiler_priv::parse_command_line_args;

return 1;

sub compiler_priv::__get_dir_cache_name() {
my $memory_0;
#line 30
$memory_0 = "cache_nl";
#line 30
return $memory_0;
#line 30
undef($memory_0);
#line 30
return;
}

my $_get_dir_cache_name;
sub compiler_priv::get_dir_cache_name() {
	$_get_dir_cache_name = compiler_priv::__get_dir_cache_name() unless defined $_get_dir_cache_name;
	return $_get_dir_cache_name;
}

sub compiler_priv::__get_dir_pretty_name() {
my $memory_0;
#line 33
$memory_0 = "pretty_nl";
#line 33
return $memory_0;
#line 33
undef($memory_0);
#line 33
return;
}

my $_get_dir_pretty_name;
sub compiler_priv::get_dir_pretty_name() {
	$_get_dir_pretty_name = compiler_priv::__get_dir_pretty_name() unless defined $_get_dir_pretty_name;
	return $_get_dir_pretty_name;
}

sub compiler_priv::__get_default_deref_file() {
my $memory_0;
#line 36
$memory_0 = "deref.gr";
#line 36
return $memory_0;
#line 36
undef($memory_0);
#line 36
return;
}

my $_get_default_deref_file;
sub compiler_priv::get_default_deref_file() {
	$_get_default_deref_file = compiler_priv::__get_default_deref_file() unless defined $_get_default_deref_file;
	return $_get_default_deref_file;
}

sub compiler_priv::__get_default_math_file() {
my $memory_0;
#line 39
$memory_0 = "math_fun.gr";
#line 39
return $memory_0;
#line 39
undef($memory_0);
#line 39
return;
}

my $_get_default_math_file;
sub compiler_priv::get_default_math_file() {
	$_get_default_math_file = compiler_priv::__get_default_math_file() unless defined $_get_default_math_file;
	return $_get_default_math_file;
}

sub compiler::__parse_check_t() {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;
#line 43
$memory_3 = {
	module => "nast",
	name => "module_t",
};
#line 43
$memory_3 = c_rt_lib::ov_mk_arg('ref', $memory_3);
#line 43
$memory_2 = ptd::hash($memory_3);
#line 43
undef($memory_3);
#line 43
$memory_4 = ptd::sim();
#line 43
$memory_3 = ptd::arr($memory_4);
#line 43
undef($memory_4);
#line 43
$memory_4 = {
	module => "tc_types",
	name => "deref_types",
};
#line 43
$memory_4 = c_rt_lib::ov_mk_arg('ref', $memory_4);
#line 43
$memory_1 = {asts => $memory_2,errors => $memory_3,deref_type => $memory_4,};
#line 43
undef($memory_2);
#line 43
undef($memory_3);
#line 43
undef($memory_4);
#line 43
$memory_0 = ptd::rec($memory_1);
#line 43
undef($memory_1);
#line 43
return $memory_0;
#line 43
undef($memory_0);
#line 43
return;
}

my $_parse_check_t;
sub compiler::parse_check_t() {
	$_parse_check_t = compiler::__parse_check_t() unless defined $_parse_check_t;
	return $_parse_check_t;
}

sub compiler::__errors_hash_t() {
my $memory_0;my $memory_1;my $memory_2;
#line 46
$memory_2 = {
	module => "tc_types",
	name => "check_error_t",
};
#line 46
$memory_2 = c_rt_lib::ov_mk_arg('ref', $memory_2);
#line 46
$memory_1 = ptd::arr($memory_2);
#line 46
undef($memory_2);
#line 46
$memory_0 = ptd::hash($memory_1);
#line 46
undef($memory_1);
#line 46
return $memory_0;
#line 46
undef($memory_0);
#line 46
return;
}

my $_errors_hash_t;
sub compiler::errors_hash_t() {
	$_errors_hash_t = compiler::__errors_hash_t() unless defined $_errors_hash_t;
	return $_errors_hash_t;
}

sub compiler::__errors_group_t() {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;
#line 49
$memory_2 = {
	module => "compiler",
	name => "errors_hash_t",
};
#line 49
$memory_2 = c_rt_lib::ov_mk_arg('ref', $memory_2);
#line 49
$memory_3 = {
	module => "compiler",
	name => "errors_hash_t",
};
#line 49
$memory_3 = c_rt_lib::ov_mk_arg('ref', $memory_3);
#line 49
$memory_4 = {
	module => "compiler",
	name => "errors_hash_t",
};
#line 49
$memory_4 = c_rt_lib::ov_mk_arg('ref', $memory_4);
#line 49
$memory_5 = {
	module => "compiler",
	name => "errors_hash_t",
};
#line 49
$memory_5 = c_rt_lib::ov_mk_arg('ref', $memory_5);
#line 49
$memory_6 = {
	module => "module_checker",
	name => "ret_t",
};
#line 49
$memory_6 = c_rt_lib::ov_mk_arg('ref', $memory_6);
#line 49
$memory_1 = {module_errors => $memory_2,module_warnings => $memory_3,type_errors => $memory_4,type_warnings => $memory_5,loop_error => $memory_6,};
#line 49
undef($memory_2);
#line 49
undef($memory_3);
#line 49
undef($memory_4);
#line 49
undef($memory_5);
#line 49
undef($memory_6);
#line 49
$memory_0 = ptd::rec($memory_1);
#line 49
undef($memory_1);
#line 49
return $memory_0;
#line 49
undef($memory_0);
#line 49
return;
}

my $_errors_group_t;
sub compiler::errors_group_t() {
	$_errors_group_t = compiler::__errors_group_t() unless defined $_errors_group_t;
	return $_errors_group_t;
}

sub compiler::__language_t() {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;
#line 58
$memory_2 = ptd::none();
#line 58
$memory_3 = ptd::none();
#line 58
$memory_4 = ptd::none();
#line 58
$memory_5 = ptd::none();
#line 58
$memory_6 = ptd::none();
#line 58
$memory_7 = ptd::none();
#line 58
$memory_8 = ptd::none();
#line 58
$memory_1 = {pm => $memory_2,nla => $memory_3,c => $memory_4,nl => $memory_5,ast => $memory_6,js => $memory_7,java => $memory_8,};
#line 58
undef($memory_2);
#line 58
undef($memory_3);
#line 58
undef($memory_4);
#line 58
undef($memory_5);
#line 58
undef($memory_6);
#line 58
undef($memory_7);
#line 58
undef($memory_8);
#line 58
$memory_0 = ptd::var($memory_1);
#line 58
undef($memory_1);
#line 58
return $memory_0;
#line 58
undef($memory_0);
#line 58
return;
}

my $_language_t;
sub compiler::language_t() {
	$_language_t = compiler::__language_t() unless defined $_language_t;
	return $_language_t;
}

sub compiler::__destination_t() {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;
#line 61
$memory_2 = ptd::sim();
#line 61
$memory_3 = ptd::sim();
#line 61
$memory_6 = ptd::sim();
#line 61
$memory_7 = ptd::sim();
#line 61
$memory_5 = {c => $memory_6,h => $memory_7,};
#line 61
undef($memory_6);
#line 61
undef($memory_7);
#line 61
$memory_4 = ptd::rec($memory_5);
#line 61
undef($memory_5);
#line 61
$memory_5 = ptd::sim();
#line 61
$memory_6 = ptd::sim();
#line 61
$memory_7 = ptd::sim();
#line 61
$memory_8 = ptd::sim();
#line 61
$memory_9 = ptd::none();
#line 61
$memory_1 = {pm => $memory_2,nla => $memory_3,c => $memory_4,nl => $memory_5,ast => $memory_6,js => $memory_7,java => $memory_8,none => $memory_9,};
#line 61
undef($memory_2);
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
#line 61
undef($memory_9);
#line 61
$memory_0 = ptd::var($memory_1);
#line 61
undef($memory_1);
#line 61
return $memory_0;
#line 61
undef($memory_0);
#line 61
return;
}

my $_destination_t;
sub compiler::destination_t() {
	$_destination_t = compiler::__destination_t() unless defined $_destination_t;
	return $_destination_t;
}

sub compiler::__module_t() {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;
#line 64
$memory_3 = ptd::sim();
#line 64
$memory_4 = {
	module => "compiler",
	name => "destination_t",
};
#line 64
$memory_4 = c_rt_lib::ov_mk_arg('ref', $memory_4);
#line 64
$memory_2 = {src => $memory_3,dst => $memory_4,};
#line 64
undef($memory_3);
#line 64
undef($memory_4);
#line 64
$memory_1 = ptd::rec($memory_2);
#line 64
undef($memory_2);
#line 64
$memory_0 = ptd::hash($memory_1);
#line 64
undef($memory_1);
#line 64
return $memory_0;
#line 64
undef($memory_0);
#line 64
return;
}

my $_module_t;
sub compiler::module_t() {
	$_module_t = compiler::__module_t() unless defined $_module_t;
	return $_module_t;
}

sub compiler::__deref_t() {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;
#line 67
$memory_2 = ptd::sim();
#line 67
$memory_3 = ptd::none();
#line 67
$memory_1 = {yes => $memory_2,no => $memory_3,};
#line 67
undef($memory_2);
#line 67
undef($memory_3);
#line 67
$memory_0 = ptd::var($memory_1);
#line 67
undef($memory_1);
#line 67
return $memory_0;
#line 67
undef($memory_0);
#line 67
return;
}

my $_deref_t;
sub compiler::deref_t() {
	$_deref_t = compiler::__deref_t() unless defined $_deref_t;
	return $_deref_t;
}

sub compiler::__try_t() {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;
#line 70
$memory_2 = ptd::sim();
#line 70
$memory_3 = ptd::sim();
#line 70
$memory_1 = {err => $memory_2,ok => $memory_3,};
#line 70
undef($memory_2);
#line 70
undef($memory_3);
#line 70
$memory_0 = ptd::var($memory_1);
#line 70
undef($memory_1);
#line 70
return $memory_0;
#line 70
undef($memory_0);
#line 70
return;
}

my $_try_t;
sub compiler::try_t() {
	$_try_t = compiler::__try_t() unless defined $_try_t;
	return $_try_t;
}

sub compiler::__input_type() {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;
#line 73
$memory_3 = ptd::sim();
#line 73
$memory_2 = ptd::arr($memory_3);
#line 73
undef($memory_3);
#line 73
$memory_3 = ptd::sim();
#line 73
$memory_4 = {
	module => "compiler",
	name => "deref_t",
};
#line 73
$memory_4 = c_rt_lib::ov_mk_arg('ref', $memory_4);
#line 73
$memory_7 = ptd::none();
#line 73
$memory_8 = ptd::none();
#line 73
$memory_9 = ptd::none();
#line 73
$memory_10 = ptd::none();
#line 73
$memory_11 = ptd::none();
#line 73
$memory_6 = {o0 => $memory_7,o1 => $memory_8,o2 => $memory_9,o3 => $memory_10,o4 => $memory_11,};
#line 73
undef($memory_7);
#line 73
undef($memory_8);
#line 73
undef($memory_9);
#line 73
undef($memory_10);
#line 73
undef($memory_11);
#line 73
$memory_5 = ptd::var($memory_6);
#line 73
undef($memory_6);
#line 73
$memory_6 = ptd::sim();
#line 73
$memory_9 = ptd::none();
#line 73
$memory_10 = ptd::none();
#line 73
$memory_11 = ptd::none();
#line 73
$memory_12 = ptd::sim();
#line 73
$memory_8 = {strict => $memory_9,exec => $memory_10,ide => $memory_11,idex => $memory_12,};
#line 73
undef($memory_9);
#line 73
undef($memory_10);
#line 73
undef($memory_11);
#line 73
undef($memory_12);
#line 73
$memory_7 = ptd::var($memory_8);
#line 73
undef($memory_8);
#line 73
$memory_8 = {
	module => "compiler",
	name => "language_t",
};
#line 73
$memory_8 = c_rt_lib::ov_mk_arg('ref', $memory_8);
#line 73
$memory_11 = ptd::none();
#line 73
$memory_12 = ptd::none();
#line 73
$memory_10 = {norm => $memory_11,wall => $memory_12,};
#line 73
undef($memory_11);
#line 73
undef($memory_12);
#line 73
$memory_9 = ptd::var($memory_10);
#line 73
undef($memory_10);
#line 73
$memory_1 = {input_path => $memory_2,cache_path => $memory_3,deref => $memory_4,optimization => $memory_5,math_fun => $memory_6,mode => $memory_7,language => $memory_8,alarm => $memory_9,};
#line 73
undef($memory_2);
#line 73
undef($memory_3);
#line 73
undef($memory_4);
#line 73
undef($memory_5);
#line 73
undef($memory_6);
#line 73
undef($memory_7);
#line 73
undef($memory_8);
#line 73
undef($memory_9);
#line 73
$memory_0 = ptd::rec($memory_1);
#line 73
undef($memory_1);
#line 73
return $memory_0;
#line 73
undef($memory_0);
#line 73
return;
}

my $_input_type;
sub compiler::input_type() {
	$_input_type = compiler::__input_type() unless defined $_input_type;
	return $_input_type;
}

sub compiler::__file_t() {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;
#line 85
$memory_2 = ptd::sim();
#line 85
$memory_3 = ptd::sim();
#line 85
$memory_1 = {ok => $memory_2,err => $memory_3,};
#line 85
undef($memory_2);
#line 85
undef($memory_3);
#line 85
$memory_0 = ptd::var($memory_1);
#line 85
undef($memory_1);
#line 85
return $memory_0;
#line 85
undef($memory_0);
#line 85
return;
}

my $_file_t;
sub compiler::file_t() {
	$_file_t = compiler::__file_t() unless defined $_file_t;
	return $_file_t;
}

sub compiler::compile($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;$memory_0 = $_[0];
#line 88
$memory_1 = compiler_priv::parse_command_line_args($memory_0);
#line 89
$memory_2 = $memory_1->{'cache_path'};
#line 89
c_fe_lib::mk_path($memory_2);
#line 89
undef($memory_2);
#line 90
$memory_2 = $memory_1->{'mode'};
#line 90
$memory_2 = c_rt_lib::ov_is($memory_2, 'strict');
#line 90
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 90
if (c_rt_lib::check_true($memory_2)) {goto label_2;}
#line 91
$memory_3 = "strict mode processing...";
#line 91
c_fe_lib::print($memory_3);
#line 91
undef($memory_3);
#line 92
compiler_priv::compile_strict_file($memory_1);
#line 93
goto label_1;
#line 93
label_2:
#line 93
$memory_2 = $memory_1->{'mode'};
#line 93
$memory_2 = c_rt_lib::ov_is($memory_2, 'ide');
#line 93
if (c_rt_lib::check_true($memory_2)) {goto label_4;}
#line 93
$memory_2 = $memory_1->{'mode'};
#line 93
$memory_2 = c_rt_lib::ov_is($memory_2, 'idex');
#line 93
label_4:
#line 93
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 93
if (c_rt_lib::check_true($memory_2)) {goto label_3;}
#line 94
$memory_3 = "ide mode processing...";
#line 94
c_fe_lib::print($memory_3);
#line 94
undef($memory_3);
#line 95
compiler_priv::compile_ide($memory_1);
#line 96
goto label_1;
#line 96
label_3:
#line 96
$memory_2 = $memory_1->{'mode'};
#line 96
$memory_2 = c_rt_lib::ov_is($memory_2, 'exec');
#line 96
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 96
if (c_rt_lib::check_true($memory_2)) {goto label_5;}
#line 97
compiler_priv::exec_interpreter($memory_1);
#line 98
goto label_1;
#line 98
label_5:
#line 99
$memory_3 = [];
#line 99
die(dfile::ssave($memory_3));
#line 99
undef($memory_3);
#line 100
goto label_1;
#line 100
label_1:
#line 100
undef($memory_2);
#line 100
undef($memory_1);
#line 100
undef($memory_0);
#line 100
return;
}

sub compiler_priv::__get_known_func() {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;
#line 103
$memory_0 = {};
#line 104
$memory_1 = "nl::print";
#line 104
$memory_3 = {
	module => "nl",
	name => "print",
};
#line 104
$memory_3 = c_rt_lib::ov_mk_arg('ref', $memory_3);
#line 104
$memory_4 = c_rt_lib::ov_mk_none('sequential');
#line 104
$memory_6 = ptd::sim();
#line 104
$memory_5 = [$memory_6];
#line 104
undef($memory_6);
#line 104
$memory_2 = {func => $memory_3,type => $memory_4,args => $memory_5,};
#line 104
undef($memory_3);
#line 104
undef($memory_4);
#line 104
undef($memory_5);
#line 104
hash::set_value($memory_0, $memory_1, $memory_2);
#line 104
undef($memory_2);
#line 104
undef($memory_1);
#line 105
return $memory_0;
#line 105
undef($memory_0);
#line 105
return;
}

my $_get_known_func;
sub compiler_priv::get_known_func() {
	$_get_known_func = compiler_priv::__get_known_func() unless defined $_get_known_func;
	return $_get_known_func;
}

sub compiler_priv::exec_interpreter($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;my $memory_13;my $memory_14;my $memory_15;my $memory_16;my $memory_17;my $memory_18;my $memory_19;$memory_0 = $_[0];
#line 108
$memory_1 = {};
#line 109
$memory_3 = {};
#line 109
$memory_4 = {};
#line 109
$memory_5 = {};
#line 109
$memory_6 = {};
#line 109
$memory_7 = c_rt_lib::ov_mk_none('ok');
#line 109
$memory_2 = {module_errors => $memory_3,module_warnings => $memory_4,type_errors => $memory_5,type_warnings => $memory_6,loop_error => $memory_7,};
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
#line 110
$memory_3 = 0;
#line 111
$memory_4 = compiler_priv::get_files_to_parse($memory_0);
#line 112
$memory_7 = c_rt_lib::init_iter($memory_4);
#line 112
label_3:
#line 112
$memory_5 = c_rt_lib::is_end_hash($memory_7);
#line 112
if (c_rt_lib::check_true($memory_5)) {goto label_1;}
#line 112
$memory_5 = c_rt_lib::get_key_iter($memory_7);
#line 112
$memory_6 = c_rt_lib::hash_get_value($memory_4, $memory_5);
#line 113
$memory_9 = $memory_6->{'src'};
#line 113
$memory_8 = compiler_priv::parse_module($memory_5, $memory_9, $memory_2);
#line 113
undef($memory_9);
#line 113
$memory_9 = c_rt_lib::ov_is($memory_8, 'ok');
#line 113
if (c_rt_lib::check_true($memory_9)) {goto label_5;}
#line 115
$memory_9 = c_rt_lib::ov_is($memory_8, 'err');
#line 115
if (c_rt_lib::check_true($memory_9)) {goto label_6;}
#line 115
$memory_9 = "NOMATCHALERT";
#line 115
$memory_9 = [$memory_9,$memory_8];
#line 115
die(dfile::ssave($memory_9));
#line 113
label_5:
#line 113
$memory_10 = c_rt_lib::ov_as($memory_8, 'ok');
#line 114
hash::set_value($memory_1, $memory_5, $memory_10);
#line 114
undef($memory_10);
#line 115
goto label_4;
#line 115
label_6:
#line 115
$memory_10 = c_rt_lib::ov_as($memory_8, 'err');
#line 116
$memory_11 = 1;
#line 116
$memory_3 = $memory_3 + $memory_11;
#line 116
undef($memory_11);
#line 116
undef($memory_10);
#line 117
goto label_4;
#line 117
label_4:
#line 117
undef($memory_8);
#line 117
undef($memory_9);
#line 118
$memory_7 = c_rt_lib::next_iter($memory_7);
#line 118
goto label_3;
#line 118
label_1:
#line 118
undef($memory_5);
#line 118
undef($memory_6);
#line 118
undef($memory_7);
#line 119
$memory_5 = 0;
#line 119
$memory_5 = c_rt_lib::to_nl($memory_3 != $memory_5);
#line 119
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 119
if (c_rt_lib::check_true($memory_5)) {goto label_8;}
#line 120
compiler_priv::show_and_count_errors($memory_2, $memory_0);
#line 121
undef($memory_0);
#line 121
undef($memory_1);
#line 121
undef($memory_2);
#line 121
undef($memory_3);
#line 121
undef($memory_4);
#line 121
undef($memory_5);
#line 121
return;
#line 122
goto label_8;
#line 122
label_8:
#line 122
undef($memory_5);
#line 123
$memory_5 = $memory_0->{'deref'};
#line 123
compiler_priv::check_modules($memory_1, $memory_2, $memory_5);
#line 123
undef($memory_5);
#line 124
$memory_5 = compiler_priv::show_and_count_errors($memory_2, $memory_0);
#line 124
$memory_6 = 0;
#line 124
$memory_5 = c_rt_lib::to_nl($memory_5 > $memory_6);
#line 124
undef($memory_6);
#line 124
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 124
if (c_rt_lib::check_true($memory_5)) {goto label_10;}
#line 125
undef($memory_0);
#line 125
undef($memory_1);
#line 125
undef($memory_2);
#line 125
undef($memory_3);
#line 125
undef($memory_4);
#line 125
undef($memory_5);
#line 125
return;
#line 126
goto label_10;
#line 126
label_10:
#line 126
undef($memory_5);
#line 128
$memory_6 = {};
#line 128
$memory_7 = $memory_0->{'optimization'};
#line 128
$memory_5 = post_processing::init($memory_6, $memory_7);
#line 128
undef($memory_7);
#line 128
undef($memory_6);
#line 129
$memory_6 = compiler_priv::translate($memory_1, $memory_5);
#line 130
$memory_7 = [];
#line 131
$memory_8 = "";
#line 132
$memory_11 = c_rt_lib::init_iter($memory_6);
#line 132
label_13:
#line 132
$memory_9 = c_rt_lib::is_end_hash($memory_11);
#line 132
if (c_rt_lib::check_true($memory_9)) {goto label_11;}
#line 132
$memory_9 = c_rt_lib::get_key_iter($memory_11);
#line 132
$memory_10 = c_rt_lib::hash_get_value($memory_6, $memory_9);
#line 133
$memory_12 = $memory_10->{'functions'};
#line 133
$memory_14 = 0;
#line 133
$memory_15 = 1;
#line 133
$memory_16 = c_rt_lib::array_len($memory_12);
#line 133
label_16:
#line 133
$memory_17 = c_rt_lib::to_nl($memory_14 >= $memory_16);
#line 133
if (c_rt_lib::check_true($memory_17)) {goto label_14;}
#line 133
$memory_13 = $memory_12->[$memory_14];
#line 134
$memory_18 = $memory_13->{'name'};
#line 134
$memory_19 = "main";
#line 134
$memory_18 = c_rt_lib::to_nl($memory_18 eq $memory_19);
#line 134
undef($memory_19);
#line 134
$memory_18 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_18));
#line 134
if (c_rt_lib::check_true($memory_18)) {goto label_18;}
#line 135
$memory_8 = $memory_9;
#line 136
goto label_18;
#line 136
label_18:
#line 136
undef($memory_18);
#line 137
$memory_14 = $memory_14 + $memory_15;
#line 137
goto label_16;
#line 137
label_14:
#line 137
undef($memory_12);
#line 137
undef($memory_13);
#line 137
undef($memory_14);
#line 137
undef($memory_15);
#line 137
undef($memory_16);
#line 137
undef($memory_17);
#line 138
array::push($memory_7, $memory_10);
#line 139
$memory_11 = c_rt_lib::next_iter($memory_11);
#line 139
goto label_13;
#line 139
label_11:
#line 139
undef($memory_9);
#line 139
undef($memory_10);
#line 139
undef($memory_11);
#line 140
$memory_10 = compiler_priv::get_known_func();
#line 140
$memory_9 = interpreter::init($memory_7, $memory_10);
#line 140
undef($memory_10);
#line 141
$memory_12 = "main";
#line 141
$memory_11 = interpreter::start($memory_9, $memory_12, $memory_8);
#line 141
undef($memory_12);
#line 141
$memory_10 = c_rt_lib::ov_is($memory_11, 'ok');
#line 141
if (c_rt_lib::check_true($memory_10)) {goto label_19;}
#line 141
$memory_11 = c_rt_lib::ov_mk_arg('ensure', $memory_11);
#line 141
die(dfile::ssave($memory_11));
#line 141
label_19:
#line 141
undef($memory_10);
#line 141
undef($memory_11);
#line 142
$memory_11 = interpreter::exec_all_code($memory_9);
#line 142
$memory_10 = c_rt_lib::ov_is($memory_11, 'ok');
#line 142
if (c_rt_lib::check_true($memory_10)) {goto label_20;}
#line 142
$memory_11 = c_rt_lib::ov_mk_arg('ensure', $memory_11);
#line 142
die(dfile::ssave($memory_11));
#line 142
label_20:
#line 142
undef($memory_10);
#line 142
undef($memory_11);
#line 142
undef($memory_1);
#line 142
undef($memory_2);
#line 142
undef($memory_3);
#line 142
undef($memory_4);
#line 142
undef($memory_5);
#line 142
undef($memory_6);
#line 142
undef($memory_7);
#line 142
undef($memory_8);
#line 142
undef($memory_9);
#line 142
undef($memory_0);
#line 142
return;
}

sub compiler_priv::get_module_name($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;$memory_0 = $_[0];
#line 145
$memory_1 = string::length($memory_0);
#line 145
$memory_2 = 1;
#line 145
$memory_1 = $memory_1 - $memory_2;
#line 145
undef($memory_2);
#line 146
label_2:
#line 146
$memory_2 = 0;
#line 146
$memory_2 = c_rt_lib::to_nl($memory_1 >= $memory_2);
#line 146
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 146
if (c_rt_lib::check_true($memory_4)) {goto label_4;}
#line 146
$memory_5 = 1;
#line 146
$memory_2 = string::substr($memory_0, $memory_1, $memory_5);
#line 146
undef($memory_5);
#line 146
$memory_5 = "/";
#line 146
$memory_2 = c_rt_lib::to_nl($memory_2 ne $memory_5);
#line 146
undef($memory_5);
#line 146
label_4:
#line 146
undef($memory_4);
#line 146
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 146
if (c_rt_lib::check_true($memory_3)) {goto label_3;}
#line 146
$memory_4 = 1;
#line 146
$memory_2 = string::substr($memory_0, $memory_1, $memory_4);
#line 146
undef($memory_4);
#line 146
$memory_4 = "\\";
#line 146
$memory_2 = c_rt_lib::to_nl($memory_2 ne $memory_4);
#line 146
undef($memory_4);
#line 146
label_3:
#line 146
undef($memory_3);
#line 146
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 146
if (c_rt_lib::check_true($memory_2)) {goto label_1;}
#line 147
$memory_4 = 1;
#line 147
$memory_3 = string::substr($memory_0, $memory_1, $memory_4);
#line 147
undef($memory_4);
#line 147
$memory_4 = ".";
#line 147
$memory_3 = c_rt_lib::to_nl($memory_3 eq $memory_4);
#line 147
undef($memory_4);
#line 147
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 147
if (c_rt_lib::check_true($memory_3)) {goto label_6;}
#line 148
$memory_4 = 1;
#line 148
$memory_1 = $memory_1 - $memory_4;
#line 148
undef($memory_4);
#line 149
undef($memory_3);
#line 149
goto label_1;
#line 150
goto label_6;
#line 150
label_6:
#line 150
undef($memory_3);
#line 151
$memory_3 = 1;
#line 151
$memory_1 = $memory_1 - $memory_3;
#line 151
undef($memory_3);
#line 152
goto label_2;
#line 152
label_1:
#line 152
undef($memory_2);
#line 153
$memory_2 = "";
#line 154
label_8:
#line 154
$memory_3 = 0;
#line 154
$memory_3 = c_rt_lib::to_nl($memory_1 >= $memory_3);
#line 154
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 154
if (c_rt_lib::check_true($memory_5)) {goto label_10;}
#line 154
$memory_6 = 1;
#line 154
$memory_3 = string::substr($memory_0, $memory_1, $memory_6);
#line 154
undef($memory_6);
#line 154
$memory_6 = "/";
#line 154
$memory_3 = c_rt_lib::to_nl($memory_3 ne $memory_6);
#line 154
undef($memory_6);
#line 154
label_10:
#line 154
undef($memory_5);
#line 154
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 154
if (c_rt_lib::check_true($memory_4)) {goto label_9;}
#line 154
$memory_5 = 1;
#line 154
$memory_3 = string::substr($memory_0, $memory_1, $memory_5);
#line 154
undef($memory_5);
#line 154
$memory_5 = "\\";
#line 154
$memory_3 = c_rt_lib::to_nl($memory_3 ne $memory_5);
#line 154
undef($memory_5);
#line 154
label_9:
#line 154
undef($memory_4);
#line 154
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 154
if (c_rt_lib::check_true($memory_3)) {goto label_7;}
#line 155
$memory_5 = 1;
#line 155
$memory_4 = string::substr($memory_0, $memory_1, $memory_5);
#line 155
undef($memory_5);
#line 155
$memory_4 = $memory_4 . $memory_2;
#line 155
$memory_2 = $memory_4;
#line 155
undef($memory_4);
#line 156
$memory_4 = 1;
#line 156
$memory_1 = $memory_1 - $memory_4;
#line 156
undef($memory_4);
#line 157
goto label_8;
#line 157
label_7:
#line 157
undef($memory_3);
#line 158
undef($memory_0);
#line 158
undef($memory_1);
#line 158
return $memory_2;
#line 158
undef($memory_1);
#line 158
undef($memory_2);
#line 158
undef($memory_0);
#line 158
return;
}

sub compiler_priv::has_extension($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;$memory_0 = $_[0];$memory_1 = $_[1];
#line 161
$memory_2 = string::length($memory_1);
#line 162
$memory_3 = string::length($memory_0);
#line 162
$memory_3 = c_rt_lib::to_nl($memory_3 <= $memory_2);
#line 162
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 162
if (c_rt_lib::check_true($memory_3)) {goto label_2;}
#line 162
$memory_4 = c_rt_lib::to_nl(0);
#line 162
undef($memory_0);
#line 162
undef($memory_1);
#line 162
undef($memory_2);
#line 162
undef($memory_3);
#line 162
return $memory_4;
#line 162
undef($memory_4);
#line 162
goto label_2;
#line 162
label_2:
#line 162
undef($memory_3);
#line 163
$memory_4 = string::length($memory_0);
#line 163
$memory_4 = $memory_4 - $memory_2;
#line 163
$memory_3 = string::substr($memory_0, $memory_4, $memory_2);
#line 163
undef($memory_4);
#line 163
$memory_2 = $memory_3;
#line 163
undef($memory_3);
#line 164
$memory_3 = c_rt_lib::to_nl($memory_2 eq $memory_1);
#line 164
undef($memory_0);
#line 164
undef($memory_1);
#line 164
undef($memory_2);
#line 164
return $memory_3;
#line 164
undef($memory_3);
#line 164
undef($memory_2);
#line 164
undef($memory_0);
#line 164
undef($memory_1);
#line 164
return;
}

sub compiler_priv::get_generator_state($) {
my $memory_0;my $memory_1;my $memory_2;$memory_0 = $_[0];
#line 167
$memory_1 = c_rt_lib::ov_is($memory_0, 'pm');
#line 167
if (c_rt_lib::check_true($memory_1)) {goto label_2;}
#line 169
$memory_1 = c_rt_lib::ov_is($memory_0, 'nla');
#line 169
if (c_rt_lib::check_true($memory_1)) {goto label_3;}
#line 171
$memory_1 = c_rt_lib::ov_is($memory_0, 'c');
#line 171
if (c_rt_lib::check_true($memory_1)) {goto label_4;}
#line 173
$memory_1 = c_rt_lib::ov_is($memory_0, 'ast');
#line 173
if (c_rt_lib::check_true($memory_1)) {goto label_5;}
#line 175
$memory_1 = c_rt_lib::ov_is($memory_0, 'nl');
#line 175
if (c_rt_lib::check_true($memory_1)) {goto label_6;}
#line 177
$memory_1 = c_rt_lib::ov_is($memory_0, 'js');
#line 177
if (c_rt_lib::check_true($memory_1)) {goto label_7;}
#line 179
$memory_1 = c_rt_lib::ov_is($memory_0, 'java');
#line 179
if (c_rt_lib::check_true($memory_1)) {goto label_8;}
#line 179
$memory_1 = "NOMATCHALERT";
#line 179
$memory_1 = [$memory_1,$memory_0];
#line 179
die(dfile::ssave($memory_1));
#line 167
label_2:
#line 168
$memory_2 = generator_c::get_empty_state();
#line 168
undef($memory_0);
#line 168
undef($memory_1);
#line 168
return $memory_2;
#line 168
undef($memory_2);
#line 169
goto label_1;
#line 169
label_3:
#line 170
$memory_2 = generator_c::get_empty_state();
#line 170
undef($memory_0);
#line 170
undef($memory_1);
#line 170
return $memory_2;
#line 170
undef($memory_2);
#line 171
goto label_1;
#line 171
label_4:
#line 172
$memory_2 = generator_c::get_empty_state();
#line 172
undef($memory_0);
#line 172
undef($memory_1);
#line 172
return $memory_2;
#line 172
undef($memory_2);
#line 173
goto label_1;
#line 173
label_5:
#line 174
$memory_2 = [];
#line 174
die(dfile::ssave($memory_2));
#line 174
undef($memory_2);
#line 175
goto label_1;
#line 175
label_6:
#line 176
$memory_2 = [];
#line 176
die(dfile::ssave($memory_2));
#line 176
undef($memory_2);
#line 177
goto label_1;
#line 177
label_7:
#line 178
$memory_2 = generator_c::get_empty_state();
#line 178
undef($memory_0);
#line 178
undef($memory_1);
#line 178
return $memory_2;
#line 178
undef($memory_2);
#line 179
goto label_1;
#line 179
label_8:
#line 180
$memory_2 = generator_c::get_empty_state();
#line 180
undef($memory_0);
#line 180
undef($memory_1);
#line 180
return $memory_2;
#line 180
undef($memory_2);
#line 181
goto label_1;
#line 181
label_1:
#line 181
undef($memory_1);
#line 181
undef($memory_0);
#line 181
return;
}

sub compiler_priv::get_out_ext($) {
my $memory_0;my $memory_1;my $memory_2;$memory_0 = $_[0];
#line 184
$memory_1 = c_rt_lib::ov_is($memory_0, 'pm');
#line 184
if (c_rt_lib::check_true($memory_1)) {goto label_2;}
#line 186
$memory_1 = c_rt_lib::ov_is($memory_0, 'nla');
#line 186
if (c_rt_lib::check_true($memory_1)) {goto label_3;}
#line 188
$memory_1 = c_rt_lib::ov_is($memory_0, 'c');
#line 188
if (c_rt_lib::check_true($memory_1)) {goto label_4;}
#line 190
$memory_1 = c_rt_lib::ov_is($memory_0, 'ast');
#line 190
if (c_rt_lib::check_true($memory_1)) {goto label_5;}
#line 192
$memory_1 = c_rt_lib::ov_is($memory_0, 'nl');
#line 192
if (c_rt_lib::check_true($memory_1)) {goto label_6;}
#line 194
$memory_1 = c_rt_lib::ov_is($memory_0, 'js');
#line 194
if (c_rt_lib::check_true($memory_1)) {goto label_7;}
#line 196
$memory_1 = c_rt_lib::ov_is($memory_0, 'java');
#line 196
if (c_rt_lib::check_true($memory_1)) {goto label_8;}
#line 196
$memory_1 = "NOMATCHALERT";
#line 196
$memory_1 = [$memory_1,$memory_0];
#line 196
die(dfile::ssave($memory_1));
#line 184
label_2:
#line 185
$memory_2 = ".pm";
#line 185
undef($memory_0);
#line 185
undef($memory_1);
#line 185
return $memory_2;
#line 185
undef($memory_2);
#line 186
goto label_1;
#line 186
label_3:
#line 187
$memory_2 = ".nla";
#line 187
undef($memory_0);
#line 187
undef($memory_1);
#line 187
return $memory_2;
#line 187
undef($memory_2);
#line 188
goto label_1;
#line 188
label_4:
#line 189
$memory_2 = ".c";
#line 189
undef($memory_0);
#line 189
undef($memory_1);
#line 189
return $memory_2;
#line 189
undef($memory_2);
#line 190
goto label_1;
#line 190
label_5:
#line 191
$memory_2 = ".ast";
#line 191
undef($memory_0);
#line 191
undef($memory_1);
#line 191
return $memory_2;
#line 191
undef($memory_2);
#line 192
goto label_1;
#line 192
label_6:
#line 193
$memory_2 = ".nl";
#line 193
undef($memory_0);
#line 193
undef($memory_1);
#line 193
return $memory_2;
#line 193
undef($memory_2);
#line 194
goto label_1;
#line 194
label_7:
#line 195
$memory_2 = ".js";
#line 195
undef($memory_0);
#line 195
undef($memory_1);
#line 195
return $memory_2;
#line 195
undef($memory_2);
#line 196
goto label_1;
#line 196
label_8:
#line 197
$memory_2 = ".java";
#line 197
undef($memory_0);
#line 197
undef($memory_1);
#line 197
return $memory_2;
#line 197
undef($memory_2);
#line 198
goto label_1;
#line 198
label_1:
#line 198
undef($memory_1);
#line 198
undef($memory_0);
#line 198
return;
}

sub compiler_priv::mk_path($$) {
my $memory_0;my $memory_1;my $memory_2;$memory_0 = $_[0];$memory_1 = $_[1];
#line 201
$memory_2 = ".";
#line 201
$memory_2 = c_rt_lib::to_nl($memory_1 eq $memory_2);
#line 201
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 201
if (c_rt_lib::check_true($memory_2)) {goto label_2;}
#line 201
undef($memory_0);
#line 201
undef($memory_1);
#line 201
undef($memory_2);
#line 201
return;
#line 201
goto label_2;
#line 201
label_2:
#line 201
undef($memory_2);
#line 202
$memory_2 = compiler_priv::get_dir($memory_1);
#line 202
compiler_priv::mk_path($memory_0, $memory_2);
#line 202
undef($memory_2);
#line 203
$memory_2 = $memory_0 . $memory_1;
#line 203
c_fe_lib::mk_path($memory_2);
#line 203
undef($memory_2);
#line 203
undef($memory_0);
#line 203
undef($memory_1);
#line 203
return;
}

sub compiler_priv::mk_path_module($$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;$memory_0 = $_[0];$memory_1 = $_[1];$memory_2 = $_[2];
#line 206
$memory_3 = $memory_2->{'cache_path'};
#line 206
$memory_3 = $memory_3 . $memory_1;
#line 207
$memory_4 = $memory_0->{'file'};
#line 208
$memory_5 = $memory_2->{'language'};
#line 208
$memory_6 = c_rt_lib::ov_is($memory_5, 'pm');
#line 208
if (c_rt_lib::check_true($memory_6)) {goto label_2;}
#line 210
$memory_6 = c_rt_lib::ov_is($memory_5, 'nla');
#line 210
if (c_rt_lib::check_true($memory_6)) {goto label_3;}
#line 212
$memory_6 = c_rt_lib::ov_is($memory_5, 'c');
#line 212
if (c_rt_lib::check_true($memory_6)) {goto label_4;}
#line 214
$memory_6 = c_rt_lib::ov_is($memory_5, 'nl');
#line 214
if (c_rt_lib::check_true($memory_6)) {goto label_5;}
#line 222
$memory_6 = c_rt_lib::ov_is($memory_5, 'ast');
#line 222
if (c_rt_lib::check_true($memory_6)) {goto label_6;}
#line 224
$memory_6 = c_rt_lib::ov_is($memory_5, 'js');
#line 224
if (c_rt_lib::check_true($memory_6)) {goto label_7;}
#line 226
$memory_6 = c_rt_lib::ov_is($memory_5, 'java');
#line 226
if (c_rt_lib::check_true($memory_6)) {goto label_8;}
#line 226
$memory_6 = "NOMATCHALERT";
#line 226
$memory_6 = [$memory_6,$memory_5];
#line 226
die(dfile::ssave($memory_6));
#line 208
label_2:
#line 209
$memory_8 = ".pm";
#line 209
$memory_8 = $memory_3 . $memory_8;
#line 209
$memory_8 = c_rt_lib::ov_mk_arg('pm', $memory_8);
#line 209
$memory_7 = {src => $memory_4,dst => $memory_8,};
#line 209
undef($memory_8);
#line 209
undef($memory_0);
#line 209
undef($memory_1);
#line 209
undef($memory_2);
#line 209
undef($memory_3);
#line 209
undef($memory_4);
#line 209
undef($memory_5);
#line 209
undef($memory_6);
#line 209
return $memory_7;
#line 209
undef($memory_7);
#line 210
goto label_1;
#line 210
label_3:
#line 211
$memory_8 = ".nla";
#line 211
$memory_8 = $memory_3 . $memory_8;
#line 211
$memory_8 = c_rt_lib::ov_mk_arg('nla', $memory_8);
#line 211
$memory_7 = {src => $memory_4,dst => $memory_8,};
#line 211
undef($memory_8);
#line 211
undef($memory_0);
#line 211
undef($memory_1);
#line 211
undef($memory_2);
#line 211
undef($memory_3);
#line 211
undef($memory_4);
#line 211
undef($memory_5);
#line 211
undef($memory_6);
#line 211
return $memory_7;
#line 211
undef($memory_7);
#line 212
goto label_1;
#line 212
label_4:
#line 213
$memory_9 = ".c";
#line 213
$memory_9 = $memory_3 . $memory_9;
#line 213
$memory_10 = ".h";
#line 213
$memory_10 = $memory_3 . $memory_10;
#line 213
$memory_8 = {c => $memory_9,h => $memory_10,};
#line 213
undef($memory_9);
#line 213
undef($memory_10);
#line 213
$memory_8 = c_rt_lib::ov_mk_arg('c', $memory_8);
#line 213
$memory_7 = {src => $memory_4,dst => $memory_8,};
#line 213
undef($memory_8);
#line 213
undef($memory_0);
#line 213
undef($memory_1);
#line 213
undef($memory_2);
#line 213
undef($memory_3);
#line 213
undef($memory_4);
#line 213
undef($memory_5);
#line 213
undef($memory_6);
#line 213
return $memory_7;
#line 213
undef($memory_7);
#line 214
goto label_1;
#line 214
label_5:
#line 215
$memory_8 = $memory_0->{'dir'};
#line 215
$memory_7 = string::length($memory_8);
#line 215
undef($memory_8);
#line 216
$memory_8 = compiler_priv::get_dir($memory_4);
#line 217
$memory_9 = $memory_2->{'cache_path'};
#line 217
$memory_9 = $memory_9 . $memory_8;
#line 217
$memory_10 = "/";
#line 217
$memory_9 = $memory_9 . $memory_10;
#line 217
undef($memory_10);
#line 217
$memory_9 = $memory_9 . $memory_1;
#line 217
$memory_3 = $memory_9;
#line 217
undef($memory_9);
#line 218
$memory_9 = string::length($memory_8);
#line 218
$memory_9 = c_rt_lib::to_nl($memory_7 < $memory_9);
#line 218
$memory_9 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_9));
#line 218
if (c_rt_lib::check_true($memory_9)) {goto label_10;}
#line 219
$memory_10 = $memory_2->{'cache_path'};
#line 219
$memory_12 = 1;
#line 219
$memory_12 = $memory_7 + $memory_12;
#line 219
$memory_11 = string::substr2($memory_8, $memory_12);
#line 219
undef($memory_12);
#line 219
compiler_priv::mk_path($memory_10, $memory_11);
#line 219
undef($memory_11);
#line 219
undef($memory_10);
#line 220
goto label_10;
#line 220
label_10:
#line 220
undef($memory_9);
#line 221
$memory_10 = ".nl";
#line 221
$memory_10 = $memory_3 . $memory_10;
#line 221
$memory_10 = c_rt_lib::ov_mk_arg('nl', $memory_10);
#line 221
$memory_9 = {src => $memory_4,dst => $memory_10,};
#line 221
undef($memory_10);
#line 221
undef($memory_0);
#line 221
undef($memory_1);
#line 221
undef($memory_2);
#line 221
undef($memory_3);
#line 221
undef($memory_4);
#line 221
undef($memory_5);
#line 221
undef($memory_6);
#line 221
undef($memory_7);
#line 221
undef($memory_8);
#line 221
return $memory_9;
#line 221
undef($memory_9);
#line 221
undef($memory_7);
#line 221
undef($memory_8);
#line 222
goto label_1;
#line 222
label_6:
#line 223
$memory_8 = ".ast";
#line 223
$memory_8 = $memory_3 . $memory_8;
#line 223
$memory_8 = c_rt_lib::ov_mk_arg('ast', $memory_8);
#line 223
$memory_7 = {src => $memory_4,dst => $memory_8,};
#line 223
undef($memory_8);
#line 223
undef($memory_0);
#line 223
undef($memory_1);
#line 223
undef($memory_2);
#line 223
undef($memory_3);
#line 223
undef($memory_4);
#line 223
undef($memory_5);
#line 223
undef($memory_6);
#line 223
return $memory_7;
#line 223
undef($memory_7);
#line 224
goto label_1;
#line 224
label_7:
#line 225
$memory_8 = ".js";
#line 225
$memory_8 = $memory_3 . $memory_8;
#line 225
$memory_8 = c_rt_lib::ov_mk_arg('js', $memory_8);
#line 225
$memory_7 = {src => $memory_4,dst => $memory_8,};
#line 225
undef($memory_8);
#line 225
undef($memory_0);
#line 225
undef($memory_1);
#line 225
undef($memory_2);
#line 225
undef($memory_3);
#line 225
undef($memory_4);
#line 225
undef($memory_5);
#line 225
undef($memory_6);
#line 225
return $memory_7;
#line 225
undef($memory_7);
#line 226
goto label_1;
#line 226
label_8:
#line 227
$memory_8 = "_NL.java";
#line 227
$memory_8 = $memory_3 . $memory_8;
#line 227
$memory_8 = c_rt_lib::ov_mk_arg('java', $memory_8);
#line 227
$memory_7 = {src => $memory_4,dst => $memory_8,};
#line 227
undef($memory_8);
#line 227
undef($memory_0);
#line 227
undef($memory_1);
#line 227
undef($memory_2);
#line 227
undef($memory_3);
#line 227
undef($memory_4);
#line 227
undef($memory_5);
#line 227
undef($memory_6);
#line 227
return $memory_7;
#line 227
undef($memory_7);
#line 228
goto label_1;
#line 228
label_1:
#line 228
undef($memory_5);
#line 228
undef($memory_6);
#line 228
undef($memory_3);
#line 228
undef($memory_4);
#line 228
undef($memory_0);
#line 228
undef($memory_1);
#line 228
undef($memory_2);
#line 228
return;
}

sub compiler_priv::get_all_nianio_file($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;$memory_0 = $_[0];
#line 232
$memory_1 = [];
#line 233
$memory_4 = ptd::sim();
#line 233
$memory_3 = ptd::arr($memory_4);
#line 233
undef($memory_4);
#line 233
$memory_4 = c_fe_lib::get_module_files_rec($memory_0);
#line 233
$memory_2 = ptd::ensure($memory_3, $memory_4);
#line 233
undef($memory_4);
#line 233
undef($memory_3);
#line 234
$memory_4 = 0;
#line 234
$memory_5 = 1;
#line 234
$memory_6 = c_rt_lib::array_len($memory_2);
#line 234
label_3:
#line 234
$memory_7 = c_rt_lib::to_nl($memory_4 >= $memory_6);
#line 234
if (c_rt_lib::check_true($memory_7)) {goto label_1;}
#line 234
$memory_3 = $memory_2->[$memory_4];
#line 235
$memory_9 = ".nl";
#line 235
$memory_8 = compiler_priv::has_extension($memory_3, $memory_9);
#line 235
undef($memory_9);
#line 235
$memory_8 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 235
if (c_rt_lib::check_true($memory_8)) {goto label_5;}
#line 235
array::push($memory_1, $memory_3);
#line 235
goto label_5;
#line 235
label_5:
#line 235
undef($memory_8);
#line 236
$memory_4 = $memory_4 + $memory_5;
#line 236
goto label_3;
#line 236
label_1:
#line 236
undef($memory_3);
#line 236
undef($memory_4);
#line 236
undef($memory_5);
#line 236
undef($memory_6);
#line 236
undef($memory_7);
#line 237
undef($memory_0);
#line 237
undef($memory_2);
#line 237
return $memory_1;
#line 237
undef($memory_1);
#line 237
undef($memory_2);
#line 237
undef($memory_0);
#line 237
return;
}

sub compiler_priv::get_files_to_parse($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;my $memory_13;my $memory_14;my $memory_15;my $memory_16;$memory_0 = $_[0];
#line 240
$memory_1 = $memory_0->{'cache_path'};
#line 241
$memory_2 = [];
#line 242
$memory_3 = $memory_0->{'input_path'};
#line 242
$memory_5 = 0;
#line 242
$memory_6 = 1;
#line 242
$memory_7 = c_rt_lib::array_len($memory_3);
#line 242
label_3:
#line 242
$memory_8 = c_rt_lib::to_nl($memory_5 >= $memory_7);
#line 242
if (c_rt_lib::check_true($memory_8)) {goto label_1;}
#line 242
$memory_4 = $memory_3->[$memory_5];
#line 243
$memory_10 = ".nl";
#line 243
$memory_9 = compiler_priv::has_extension($memory_4, $memory_10);
#line 243
undef($memory_10);
#line 243
$memory_9 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_9));
#line 243
if (c_rt_lib::check_true($memory_9)) {goto label_5;}
#line 244
$memory_11 = compiler_priv::get_dir($memory_4);
#line 244
$memory_10 = {dir => $memory_11,file => $memory_4,};
#line 244
undef($memory_11);
#line 244
array::push($memory_2, $memory_10);
#line 244
undef($memory_10);
#line 245
goto label_4;
#line 245
label_5:
#line 246
$memory_10 = compiler_priv::get_all_nianio_file($memory_4);
#line 246
$memory_12 = 0;
#line 246
$memory_13 = 1;
#line 246
$memory_14 = c_rt_lib::array_len($memory_10);
#line 246
label_8:
#line 246
$memory_15 = c_rt_lib::to_nl($memory_12 >= $memory_14);
#line 246
if (c_rt_lib::check_true($memory_15)) {goto label_6;}
#line 246
$memory_11 = $memory_10->[$memory_12];
#line 247
$memory_16 = {dir => $memory_4,file => $memory_11,};
#line 247
array::push($memory_2, $memory_16);
#line 247
undef($memory_16);
#line 248
$memory_12 = $memory_12 + $memory_13;
#line 248
goto label_8;
#line 248
label_6:
#line 248
undef($memory_10);
#line 248
undef($memory_11);
#line 248
undef($memory_12);
#line 248
undef($memory_13);
#line 248
undef($memory_14);
#line 248
undef($memory_15);
#line 249
goto label_4;
#line 249
label_4:
#line 249
undef($memory_9);
#line 250
$memory_5 = $memory_5 + $memory_6;
#line 250
goto label_3;
#line 250
label_1:
#line 250
undef($memory_3);
#line 250
undef($memory_4);
#line 250
undef($memory_5);
#line 250
undef($memory_6);
#line 250
undef($memory_7);
#line 250
undef($memory_8);
#line 251
$memory_4 = $memory_0->{'language'};
#line 251
$memory_3 = compiler_priv::get_out_ext($memory_4);
#line 251
undef($memory_4);
#line 252
$memory_4 = {};
#line 253
$memory_5 = c_fe_lib::get_module_files($memory_1);
#line 253
$memory_6 = c_rt_lib::ov_is($memory_5, 'ok');
#line 253
if (c_rt_lib::check_true($memory_6)) {goto label_10;}
#line 258
$memory_6 = c_rt_lib::ov_is($memory_5, 'err');
#line 258
if (c_rt_lib::check_true($memory_6)) {goto label_11;}
#line 258
$memory_6 = "NOMATCHALERT";
#line 258
$memory_6 = [$memory_6,$memory_5];
#line 258
die(dfile::ssave($memory_6));
#line 253
label_10:
#line 253
$memory_7 = c_rt_lib::ov_as($memory_5, 'ok');
#line 254
$memory_10 = ptd::sim();
#line 254
$memory_9 = ptd::arr($memory_10);
#line 254
undef($memory_10);
#line 254
$memory_8 = ptd::ensure($memory_9, $memory_7);
#line 254
undef($memory_9);
#line 254
$memory_10 = 0;
#line 254
$memory_11 = 1;
#line 254
$memory_12 = c_rt_lib::array_len($memory_8);
#line 254
label_14:
#line 254
$memory_13 = c_rt_lib::to_nl($memory_10 >= $memory_12);
#line 254
if (c_rt_lib::check_true($memory_13)) {goto label_12;}
#line 254
$memory_9 = $memory_8->[$memory_10];
#line 255
$memory_14 = compiler_priv::has_extension($memory_9, $memory_3);
#line 255
$memory_14 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_14));
#line 255
$memory_14 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_14));
#line 255
if (c_rt_lib::check_true($memory_14)) {goto label_16;}
#line 255
undef($memory_14);
#line 255
goto label_13;
#line 255
goto label_16;
#line 255
label_16:
#line 255
undef($memory_14);
#line 256
$memory_14 = compiler_priv::get_module_name($memory_9);
#line 256
hash::set_value($memory_4, $memory_14, $memory_9);
#line 256
undef($memory_14);
#line 256
label_13:
#line 257
$memory_10 = $memory_10 + $memory_11;
#line 257
goto label_14;
#line 257
label_12:
#line 257
undef($memory_8);
#line 257
undef($memory_9);
#line 257
undef($memory_10);
#line 257
undef($memory_11);
#line 257
undef($memory_12);
#line 257
undef($memory_13);
#line 257
undef($memory_7);
#line 258
goto label_9;
#line 258
label_11:
#line 258
$memory_7 = c_rt_lib::ov_as($memory_5, 'err');
#line 259
$memory_8 = {};
#line 259
undef($memory_0);
#line 259
undef($memory_1);
#line 259
undef($memory_2);
#line 259
undef($memory_3);
#line 259
undef($memory_4);
#line 259
undef($memory_5);
#line 259
undef($memory_6);
#line 259
undef($memory_7);
#line 259
return $memory_8;
#line 259
undef($memory_8);
#line 259
undef($memory_7);
#line 260
goto label_9;
#line 260
label_9:
#line 260
undef($memory_5);
#line 260
undef($memory_6);
#line 261
$memory_5 = {};
#line 262
$memory_7 = 0;
#line 262
$memory_8 = 1;
#line 262
$memory_9 = c_rt_lib::array_len($memory_2);
#line 262
label_19:
#line 262
$memory_10 = c_rt_lib::to_nl($memory_7 >= $memory_9);
#line 262
if (c_rt_lib::check_true($memory_10)) {goto label_17;}
#line 262
$memory_6 = $memory_2->[$memory_7];
#line 263
$memory_12 = $memory_6->{'file'};
#line 263
$memory_11 = compiler_priv::get_module_name($memory_12);
#line 263
undef($memory_12);
#line 264
$memory_12 = compiler_priv::mk_path_module($memory_6, $memory_11, $memory_0);
#line 265
hash::set_value($memory_5, $memory_11, $memory_12);
#line 265
undef($memory_11);
#line 265
undef($memory_12);
#line 266
$memory_7 = $memory_7 + $memory_8;
#line 266
goto label_19;
#line 266
label_17:
#line 266
undef($memory_6);
#line 266
undef($memory_7);
#line 266
undef($memory_8);
#line 266
undef($memory_9);
#line 266
undef($memory_10);
#line 267
undef($memory_0);
#line 267
undef($memory_1);
#line 267
undef($memory_2);
#line 267
undef($memory_3);
#line 267
undef($memory_4);
#line 267
return $memory_5;
#line 267
undef($memory_1);
#line 267
undef($memory_2);
#line 267
undef($memory_3);
#line 267
undef($memory_4);
#line 267
undef($memory_5);
#line 267
undef($memory_0);
#line 267
return;
}

sub compiler_priv::parse_module($$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;my $memory_13;my $memory_14;my $memory_15;$memory_0 = $_[0];$memory_1 = $_[1];$memory_2 = $_[2];Scalar::Util::weaken($_[2]) if ref($_[2]);
#line 271
$memory_3 = "processing ";
#line 271
$memory_3 = $memory_3 . $memory_0;
#line 271
$memory_4 = "...";
#line 271
$memory_3 = $memory_3 . $memory_4;
#line 271
undef($memory_4);
#line 271
c_fe_lib::print($memory_3);
#line 271
undef($memory_3);
#line 272
$memory_5 = c_fe_lib::file_to_string($memory_1);
#line 272
$memory_4 = c_rt_lib::ov_is($memory_5, 'ok');
#line 272
if (c_rt_lib::check_true($memory_4)) {goto label_1;}
#line 272
undef($memory_0);
#line 272
undef($memory_1);
#line 272
undef($memory_3);
#line 272
undef($memory_4);
#line 272
$_[2] = $memory_2;return $memory_5;
#line 272
label_1:
#line 272
$memory_3 = c_rt_lib::ov_as($memory_5, 'ok');
#line 272
undef($memory_4);
#line 272
undef($memory_5);
#line 273
$memory_6 = ptd::sim();
#line 273
$memory_5 = ptd::ensure($memory_6, $memory_3);
#line 273
undef($memory_6);
#line 273
$memory_4 = nparser::sparse($memory_5, $memory_0);
#line 273
undef($memory_5);
#line 274
$memory_5 = c_rt_lib::ov_is($memory_4, 'ok');
#line 274
if (c_rt_lib::check_true($memory_5)) {goto label_3;}
#line 280
$memory_5 = c_rt_lib::ov_is($memory_4, 'error');
#line 280
if (c_rt_lib::check_true($memory_5)) {goto label_4;}
#line 280
$memory_5 = "NOMATCHALERT";
#line 280
$memory_5 = [$memory_5,$memory_4];
#line 280
die(dfile::ssave($memory_5));
#line 274
label_3:
#line 274
$memory_6 = c_rt_lib::ov_as($memory_4, 'ok');
#line 275
$memory_7 = module_checker::check_module($memory_6);
#line 276
$memory_8 = "module_warnings";
#line 276
$memory_8 = c_rt_lib::get_ref_hash($memory_2, $memory_8);
#line 276
$memory_9 = $memory_7->{'warnings'};
#line 276
hash::set_value($memory_8, $memory_0, $memory_9);
#line 276
undef($memory_9);
#line 276
$memory_9 = "module_warnings";
#line 276
c_rt_lib::set_ref_hash($memory_2, $memory_9, $memory_8);
#line 276
undef($memory_9);
#line 276
undef($memory_8);
#line 277
$memory_8 = "module_errors";
#line 277
$memory_8 = c_rt_lib::get_ref_hash($memory_2, $memory_8);
#line 277
$memory_9 = $memory_7->{'errors'};
#line 277
hash::set_value($memory_8, $memory_0, $memory_9);
#line 277
undef($memory_9);
#line 277
$memory_9 = "module_errors";
#line 277
c_rt_lib::set_ref_hash($memory_2, $memory_9, $memory_8);
#line 277
undef($memory_9);
#line 277
undef($memory_8);
#line 278
$memory_9 = $memory_7->{'errors'};
#line 278
$memory_8 = array::len($memory_9);
#line 278
undef($memory_9);
#line 278
$memory_9 = 0;
#line 278
$memory_8 = c_rt_lib::to_nl($memory_8 == $memory_9);
#line 278
undef($memory_9);
#line 278
$memory_8 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 278
$memory_8 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 278
if (c_rt_lib::check_true($memory_8)) {goto label_6;}
#line 278
$memory_9 = "";
#line 278
$memory_9 = c_rt_lib::ov_mk_arg('err', $memory_9);
#line 278
undef($memory_0);
#line 278
undef($memory_1);
#line 278
undef($memory_3);
#line 278
undef($memory_4);
#line 278
undef($memory_5);
#line 278
undef($memory_6);
#line 278
undef($memory_7);
#line 278
undef($memory_8);
#line 278
$_[2] = $memory_2;return $memory_9;
#line 278
undef($memory_9);
#line 278
goto label_6;
#line 278
label_6:
#line 278
undef($memory_8);
#line 279
$memory_8 = c_rt_lib::ov_mk_arg('ok', $memory_6);
#line 279
undef($memory_0);
#line 279
undef($memory_1);
#line 279
undef($memory_3);
#line 279
undef($memory_4);
#line 279
undef($memory_5);
#line 279
undef($memory_6);
#line 279
undef($memory_7);
#line 279
$_[2] = $memory_2;return $memory_8;
#line 279
undef($memory_8);
#line 279
undef($memory_7);
#line 279
undef($memory_6);
#line 280
goto label_2;
#line 280
label_4:
#line 280
$memory_6 = c_rt_lib::ov_as($memory_4, 'error');
#line 281
$memory_7 = "module_warnings";
#line 281
$memory_7 = c_rt_lib::get_ref_hash($memory_2, $memory_7);
#line 281
$memory_8 = [];
#line 281
hash::set_value($memory_7, $memory_0, $memory_8);
#line 281
undef($memory_8);
#line 281
$memory_8 = "module_warnings";
#line 281
c_rt_lib::set_ref_hash($memory_2, $memory_8, $memory_7);
#line 281
undef($memory_8);
#line 281
undef($memory_7);
#line 282
$memory_7 = [];
#line 283
$memory_9 = 0;
#line 283
$memory_10 = 1;
#line 283
$memory_11 = c_rt_lib::array_len($memory_6);
#line 283
label_9:
#line 283
$memory_12 = c_rt_lib::to_nl($memory_9 >= $memory_11);
#line 283
if (c_rt_lib::check_true($memory_12)) {goto label_7;}
#line 283
$memory_8 = $memory_6->[$memory_9];
#line 284
$memory_14 = $memory_8->{'msg'};
#line 284
$memory_15 = $memory_8->{'line'};
#line 284
$memory_13 = {msg => $memory_14,line => $memory_15,module => $memory_0,};
#line 284
undef($memory_14);
#line 284
undef($memory_15);
#line 284
array::push($memory_7, $memory_13);
#line 284
undef($memory_13);
#line 285
$memory_9 = $memory_9 + $memory_10;
#line 285
goto label_9;
#line 285
label_7:
#line 285
undef($memory_8);
#line 285
undef($memory_9);
#line 285
undef($memory_10);
#line 285
undef($memory_11);
#line 285
undef($memory_12);
#line 286
$memory_8 = "module_errors";
#line 286
$memory_8 = c_rt_lib::get_ref_hash($memory_2, $memory_8);
#line 286
hash::set_value($memory_8, $memory_0, $memory_7);
#line 286
$memory_9 = "module_errors";
#line 286
c_rt_lib::set_ref_hash($memory_2, $memory_9, $memory_8);
#line 286
undef($memory_9);
#line 286
undef($memory_8);
#line 287
$memory_8 = "";
#line 287
$memory_8 = c_rt_lib::ov_mk_arg('err', $memory_8);
#line 287
undef($memory_0);
#line 287
undef($memory_1);
#line 287
undef($memory_3);
#line 287
undef($memory_4);
#line 287
undef($memory_5);
#line 287
undef($memory_6);
#line 287
undef($memory_7);
#line 287
$_[2] = $memory_2;return $memory_8;
#line 287
undef($memory_8);
#line 287
undef($memory_7);
#line 287
undef($memory_6);
#line 288
goto label_2;
#line 288
label_2:
#line 288
undef($memory_5);
#line 288
undef($memory_3);
#line 288
undef($memory_4);
#line 288
undef($memory_0);
#line 288
undef($memory_1);
#line 288
$_[2] = $memory_2;return;
$_[2] = $memory_2;}

sub compiler_priv::get_mathematical_func($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;$memory_0 = $_[0];
#line 291
$memory_1 = {};
#line 292
$memory_3 = $memory_0->{'math_fun'};
#line 292
$memory_2 = c_fe_lib::file_to_string($memory_3);
#line 292
undef($memory_3);
#line 292
$memory_3 = c_rt_lib::ov_is($memory_2, 'ok');
#line 292
if (c_rt_lib::check_true($memory_3)) {goto label_2;}
#line 305
$memory_3 = c_rt_lib::ov_is($memory_2, 'err');
#line 305
if (c_rt_lib::check_true($memory_3)) {goto label_3;}
#line 305
$memory_3 = "NOMATCHALERT";
#line 305
$memory_3 = [$memory_3,$memory_2];
#line 305
die(dfile::ssave($memory_3));
#line 292
label_2:
#line 292
$memory_4 = c_rt_lib::ov_as($memory_2, 'ok');
#line 293
$memory_5 = "list of mathematical functions loaded";
#line 293
c_fe_lib::print($memory_5);
#line 293
undef($memory_5);
#line 294
$memory_5 = dfile::try_sload($memory_4);
#line 295
$memory_6 = [];
#line 296
$memory_7 = c_rt_lib::ov_is($memory_5, 'ok');
#line 296
if (c_rt_lib::check_true($memory_7)) {goto label_5;}
#line 298
$memory_7 = c_rt_lib::ov_is($memory_5, 'err');
#line 298
if (c_rt_lib::check_true($memory_7)) {goto label_6;}
#line 298
$memory_7 = "NOMATCHALERT";
#line 298
$memory_7 = [$memory_7,$memory_5];
#line 298
die(dfile::ssave($memory_7));
#line 296
label_5:
#line 296
$memory_8 = c_rt_lib::ov_as($memory_5, 'ok');
#line 297
$memory_6 = $memory_8;
#line 297
undef($memory_8);
#line 298
goto label_4;
#line 298
label_6:
#line 298
$memory_8 = c_rt_lib::ov_as($memory_5, 'err');
#line 299
$memory_9 = "could not parse list of mathematical functions:";
#line 299
c_fe_lib::print($memory_9);
#line 299
undef($memory_9);
#line 300
c_fe_lib::print($memory_8);
#line 300
undef($memory_8);
#line 301
goto label_4;
#line 301
label_4:
#line 301
undef($memory_7);
#line 302
$memory_8 = 0;
#line 302
$memory_9 = 1;
#line 302
$memory_10 = c_rt_lib::array_len($memory_6);
#line 302
label_9:
#line 302
$memory_11 = c_rt_lib::to_nl($memory_8 >= $memory_10);
#line 302
if (c_rt_lib::check_true($memory_11)) {goto label_7;}
#line 302
$memory_7 = $memory_6->[$memory_8];
#line 303
$memory_12 = 1;
#line 303
hash::set_value($memory_1, $memory_7, $memory_12);
#line 303
undef($memory_12);
#line 304
$memory_8 = $memory_8 + $memory_9;
#line 304
goto label_9;
#line 304
label_7:
#line 304
undef($memory_7);
#line 304
undef($memory_8);
#line 304
undef($memory_9);
#line 304
undef($memory_10);
#line 304
undef($memory_11);
#line 304
undef($memory_5);
#line 304
undef($memory_6);
#line 304
undef($memory_4);
#line 305
goto label_1;
#line 305
label_3:
#line 305
$memory_4 = c_rt_lib::ov_as($memory_2, 'err');
#line 306
$memory_5 = "NOT LOAD: list of mathematical functions";
#line 306
c_fe_lib::print($memory_5);
#line 306
undef($memory_5);
#line 306
undef($memory_4);
#line 307
goto label_1;
#line 307
label_1:
#line 307
undef($memory_2);
#line 307
undef($memory_3);
#line 308
undef($memory_0);
#line 308
return $memory_1;
#line 308
undef($memory_1);
#line 308
undef($memory_0);
#line 308
return;
}

sub compiler_priv::compile_ide($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;my $memory_13;my $memory_14;my $memory_15;my $memory_16;my $memory_17;my $memory_18;my $memory_19;my $memory_20;my $memory_21;$memory_0 = $_[0];
#line 311
$memory_1 = {};
#line 312
$memory_2 = {};
#line 313
$memory_3 = {};
#line 314
$memory_4 = {};
#line 315
$memory_6 = {};
#line 315
$memory_7 = {};
#line 315
$memory_8 = {};
#line 315
$memory_9 = {};
#line 315
$memory_10 = c_rt_lib::ov_mk_none('ok');
#line 315
$memory_5 = {module_errors => $memory_6,module_warnings => $memory_7,type_errors => $memory_8,type_warnings => $memory_9,loop_error => $memory_10,};
#line 315
undef($memory_6);
#line 315
undef($memory_7);
#line 315
undef($memory_8);
#line 315
undef($memory_9);
#line 315
undef($memory_10);
#line 316
$memory_7 = compiler_priv::get_mathematical_func($memory_0);
#line 316
$memory_8 = $memory_0->{'optimization'};
#line 316
$memory_6 = post_processing::init($memory_7, $memory_8);
#line 316
undef($memory_8);
#line 316
undef($memory_7);
#line 317
$memory_7 = {};
#line 318
$memory_9 = $memory_0->{'language'};
#line 318
$memory_8 = compiler_priv::get_generator_state($memory_9);
#line 318
undef($memory_9);
#line 319
label_2:
#line 320
$memory_9 = {};
#line 320
$memory_10 = $memory_9;
#line 320
 if (c_rt_lib::get_hashcount($memory_5) > 1) {$memory_5 = {%{$memory_5}};}$memory_5->{'type_errors'} = $memory_10;
#line 320
undef($memory_9);
#line 320
undef($memory_10);
#line 321
$memory_9 = {};
#line 321
$memory_10 = $memory_9;
#line 321
 if (c_rt_lib::get_hashcount($memory_5) > 1) {$memory_5 = {%{$memory_5}};}$memory_5->{'type_warnings'} = $memory_10;
#line 321
undef($memory_9);
#line 321
undef($memory_10);
#line 322
$memory_9 = c_rt_lib::ov_mk_none('ok');
#line 322
$memory_10 = $memory_9;
#line 322
 if (c_rt_lib::get_hashcount($memory_5) > 1) {$memory_5 = {%{$memory_5}};}$memory_5->{'loop_error'} = $memory_10;
#line 322
undef($memory_9);
#line 322
undef($memory_10);
#line 323
$memory_9 = compiler_priv::get_files_to_parse($memory_0);
#line 324
$memory_10 = 0;
#line 325
$memory_13 = c_rt_lib::init_iter($memory_9);
#line 325
label_5:
#line 325
$memory_11 = c_rt_lib::is_end_hash($memory_13);
#line 325
if (c_rt_lib::check_true($memory_11)) {goto label_3;}
#line 325
$memory_11 = c_rt_lib::get_key_iter($memory_13);
#line 325
$memory_12 = c_rt_lib::hash_get_value($memory_9, $memory_11);
#line 326
$memory_15 = $memory_12->{'src'};
#line 326
$memory_14 = c_fe_lib::get_modif_time($memory_15);
#line 326
undef($memory_15);
#line 327
$memory_15 = $memory_14;
#line 327
$memory_15 = c_rt_lib::ov_is($memory_15, 'err');
#line 327
$memory_15 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_15));
#line 327
if (c_rt_lib::check_true($memory_15)) {goto label_7;}
#line 327
undef($memory_14);
#line 327
undef($memory_15);
#line 327
goto label_4;
#line 327
goto label_7;
#line 327
label_7:
#line 327
undef($memory_15);
#line 328
$memory_15 = $memory_14;
#line 328
$memory_15 = c_rt_lib::ov_as($memory_15, 'ok');
#line 328
$memory_14 = $memory_15;
#line 328
undef($memory_15);
#line 329
$memory_15 = hash::has_key($memory_1, $memory_11);
#line 329
$memory_15 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_15));
#line 329
if (c_rt_lib::check_true($memory_15)) {goto label_9;}
#line 330
$memory_16 = hash::get_value($memory_1, $memory_11);
#line 331
$memory_17 = c_rt_lib::to_nl($memory_14 > $memory_16);
#line 331
$memory_17 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_17));
#line 331
$memory_17 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_17));
#line 331
if (c_rt_lib::check_true($memory_17)) {goto label_11;}
#line 331
undef($memory_14);
#line 331
undef($memory_15);
#line 331
undef($memory_16);
#line 331
undef($memory_17);
#line 331
goto label_4;
#line 331
goto label_11;
#line 331
label_11:
#line 331
undef($memory_17);
#line 331
undef($memory_16);
#line 332
goto label_9;
#line 332
label_9:
#line 332
undef($memory_15);
#line 333
hash::set_value($memory_1, $memory_11, $memory_14);
#line 334
hash::set_value($memory_4, $memory_11, $memory_12);
#line 335
$memory_15 = 1;
#line 335
$memory_10 = $memory_10 + $memory_15;
#line 335
undef($memory_15);
#line 335
undef($memory_14);
#line 335
label_4:
#line 336
$memory_13 = c_rt_lib::next_iter($memory_13);
#line 336
goto label_5;
#line 336
label_3:
#line 336
undef($memory_11);
#line 336
undef($memory_12);
#line 336
undef($memory_13);
#line 337
$memory_13 = c_rt_lib::init_iter($memory_7);
#line 337
label_14:
#line 337
$memory_11 = c_rt_lib::is_end_hash($memory_13);
#line 337
if (c_rt_lib::check_true($memory_11)) {goto label_12;}
#line 337
$memory_11 = c_rt_lib::get_key_iter($memory_13);
#line 337
$memory_12 = c_rt_lib::hash_get_value($memory_7, $memory_11);
#line 338
$memory_14 = hash::has_key($memory_9, $memory_11);
#line 338
$memory_14 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_14));
#line 338
$memory_14 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_14));
#line 338
if (c_rt_lib::check_true($memory_14)) {goto label_16;}
#line 339
$memory_15 = 1;
#line 339
$memory_10 = $memory_10 + $memory_15;
#line 339
undef($memory_15);
#line 340
$memory_15 = "module_errors";
#line 340
$memory_15 = c_rt_lib::get_ref_hash($memory_5, $memory_15);
#line 340
hash::delete($memory_15, $memory_11);
#line 340
$memory_16 = "module_errors";
#line 340
c_rt_lib::set_ref_hash($memory_5, $memory_16, $memory_15);
#line 340
undef($memory_16);
#line 340
undef($memory_15);
#line 341
$memory_15 = "module_warnings";
#line 341
$memory_15 = c_rt_lib::get_ref_hash($memory_5, $memory_15);
#line 341
hash::delete($memory_15, $memory_11);
#line 341
$memory_16 = "module_warnings";
#line 341
c_rt_lib::set_ref_hash($memory_5, $memory_16, $memory_15);
#line 341
undef($memory_16);
#line 341
undef($memory_15);
#line 342
hash::delete($memory_2, $memory_11);
#line 343
hash::delete($memory_1, $memory_11);
#line 344
hash::delete($memory_4, $memory_11);
#line 345
hash::delete($memory_3, $memory_11);
#line 346
post_processing::clear_module_from_state($memory_6, $memory_11);
#line 347
$memory_15 = $memory_0->{'language'};
#line 347
$memory_15 = c_rt_lib::ov_is($memory_15, 'c');
#line 347
$memory_15 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_15));
#line 347
if (c_rt_lib::check_true($memory_15)) {goto label_18;}
#line 348
generator_c::clear_module_from_state($memory_8, $memory_11);
#line 349
goto label_18;
#line 349
label_18:
#line 349
undef($memory_15);
#line 350
goto label_16;
#line 350
label_16:
#line 350
undef($memory_14);
#line 351
$memory_13 = c_rt_lib::next_iter($memory_13);
#line 351
goto label_14;
#line 351
label_12:
#line 351
undef($memory_11);
#line 351
undef($memory_12);
#line 351
undef($memory_13);
#line 352
$memory_7 = $memory_9;
#line 353
$memory_11 = 0;
#line 353
$memory_11 = c_rt_lib::to_nl($memory_10 == $memory_11);
#line 353
$memory_11 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_11));
#line 353
if (c_rt_lib::check_true($memory_11)) {goto label_20;}
#line 354
$memory_12 = 1;
#line 354
c_fe_lib::sleep($memory_12);
#line 354
undef($memory_12);
#line 355
undef($memory_9);
#line 355
undef($memory_10);
#line 355
undef($memory_11);
#line 355
goto label_2;
#line 356
goto label_20;
#line 356
label_20:
#line 356
undef($memory_11);
#line 357
$memory_11 = {};
#line 358
$memory_14 = c_rt_lib::init_iter($memory_4);
#line 358
label_23:
#line 358
$memory_12 = c_rt_lib::is_end_hash($memory_14);
#line 358
if (c_rt_lib::check_true($memory_12)) {goto label_21;}
#line 358
$memory_12 = c_rt_lib::get_key_iter($memory_14);
#line 358
$memory_13 = c_rt_lib::hash_get_value($memory_4, $memory_12);
#line 359
$memory_16 = $memory_13->{'src'};
#line 359
$memory_15 = compiler_priv::parse_module($memory_12, $memory_16, $memory_5);
#line 359
undef($memory_16);
#line 359
$memory_16 = c_rt_lib::ov_is($memory_15, 'ok');
#line 359
if (c_rt_lib::check_true($memory_16)) {goto label_25;}
#line 362
$memory_16 = c_rt_lib::ov_is($memory_15, 'err');
#line 362
if (c_rt_lib::check_true($memory_16)) {goto label_26;}
#line 362
$memory_16 = "NOMATCHALERT";
#line 362
$memory_16 = [$memory_16,$memory_15];
#line 362
die(dfile::ssave($memory_16));
#line 359
label_25:
#line 359
$memory_17 = c_rt_lib::ov_as($memory_15, 'ok');
#line 360
hash::set_value($memory_2, $memory_12, $memory_17);
#line 361
hash::set_value($memory_3, $memory_12, $memory_17);
#line 361
undef($memory_17);
#line 362
goto label_24;
#line 362
label_26:
#line 362
$memory_17 = c_rt_lib::ov_as($memory_15, 'err');
#line 363
hash::set_value($memory_11, $memory_12, $memory_13);
#line 363
undef($memory_17);
#line 364
goto label_24;
#line 364
label_24:
#line 364
undef($memory_15);
#line 364
undef($memory_16);
#line 365
$memory_14 = c_rt_lib::next_iter($memory_14);
#line 365
goto label_23;
#line 365
label_21:
#line 365
undef($memory_12);
#line 365
undef($memory_13);
#line 365
undef($memory_14);
#line 366
$memory_4 = $memory_11;
#line 367
$memory_12 = hash::size($memory_4);
#line 367
$memory_13 = 0;
#line 367
$memory_12 = c_rt_lib::to_nl($memory_12 > $memory_13);
#line 367
undef($memory_13);
#line 367
$memory_12 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_12));
#line 367
if (c_rt_lib::check_true($memory_12)) {goto label_28;}
#line 368
compiler_priv::show_and_count_errors($memory_5, $memory_0);
#line 369
$memory_13 = string::lf();
#line 369
$memory_14 = "ERROR: while parsing ";
#line 369
$memory_13 = $memory_13 . $memory_14;
#line 369
undef($memory_14);
#line 369
$memory_14 = hash::size($memory_4);
#line 369
$memory_13 = $memory_13 . $memory_14;
#line 369
undef($memory_14);
#line 369
$memory_14 = " modules";
#line 369
$memory_13 = $memory_13 . $memory_14;
#line 369
undef($memory_14);
#line 369
c_fe_lib::print($memory_13);
#line 369
undef($memory_13);
#line 370
$memory_13 = "############################################################";
#line 370
c_fe_lib::print($memory_13);
#line 370
undef($memory_13);
#line 371
undef($memory_9);
#line 371
undef($memory_10);
#line 371
undef($memory_11);
#line 371
undef($memory_12);
#line 371
goto label_2;
#line 372
goto label_28;
#line 372
label_28:
#line 372
undef($memory_12);
#line 373
$memory_12 = $memory_0->{'deref'};
#line 373
compiler_priv::check_modules($memory_2, $memory_5, $memory_12);
#line 373
undef($memory_12);
#line 374
$memory_12 = compiler_priv::show_and_count_errors($memory_5, $memory_0);
#line 374
$memory_13 = 0;
#line 374
$memory_12 = c_rt_lib::to_nl($memory_12 > $memory_13);
#line 374
undef($memory_13);
#line 374
$memory_12 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_12));
#line 374
if (c_rt_lib::check_true($memory_12)) {goto label_30;}
#line 375
$memory_13 = "############################################################";
#line 375
c_fe_lib::print($memory_13);
#line 375
undef($memory_13);
#line 376
undef($memory_9);
#line 376
undef($memory_10);
#line 376
undef($memory_11);
#line 376
undef($memory_12);
#line 376
goto label_2;
#line 377
goto label_30;
#line 377
label_30:
#line 377
undef($memory_12);
#line 378
$memory_12 = $memory_0->{'language'};
#line 378
$memory_12 = c_rt_lib::ov_is($memory_12, 'ast');
#line 378
if (c_rt_lib::check_true($memory_12)) {goto label_33;}
#line 378
$memory_12 = $memory_0->{'language'};
#line 378
$memory_12 = c_rt_lib::ov_is($memory_12, 'nl');
#line 378
label_33:
#line 378
$memory_12 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_12));
#line 378
$memory_12 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_12));
#line 378
if (c_rt_lib::check_true($memory_12)) {goto label_32;}
#line 379
$memory_13 = "search constants...";
#line 379
c_fe_lib::print($memory_13);
#line 379
undef($memory_13);
#line 380
$memory_13 = {};
#line 381
$memory_14 = compiler_priv::translate($memory_3, $memory_6);
#line 382
$memory_16 = $memory_0->{'cache_path'};
#line 382
$memory_17 = $memory_0->{'language'};
#line 382
$memory_15 = compiler_priv::generate_modules_to_files($memory_14, $memory_9, $memory_16, $memory_8, $memory_17);
#line 382
undef($memory_17);
#line 382
undef($memory_16);
#line 382
$memory_16 = c_rt_lib::ov_is($memory_15, 'err');
#line 382
if (c_rt_lib::check_true($memory_16)) {goto label_35;}
#line 386
$memory_16 = c_rt_lib::ov_is($memory_15, 'ok');
#line 386
if (c_rt_lib::check_true($memory_16)) {goto label_36;}
#line 386
$memory_16 = "NOMATCHALERT";
#line 386
$memory_16 = [$memory_16,$memory_15];
#line 386
die(dfile::ssave($memory_16));
#line 382
label_35:
#line 382
$memory_17 = c_rt_lib::ov_as($memory_15, 'err');
#line 383
$memory_20 = c_rt_lib::init_iter($memory_17);
#line 383
label_39:
#line 383
$memory_18 = c_rt_lib::is_end_hash($memory_20);
#line 383
if (c_rt_lib::check_true($memory_18)) {goto label_37;}
#line 383
$memory_18 = c_rt_lib::get_key_iter($memory_20);
#line 383
$memory_19 = c_rt_lib::hash_get_value($memory_17, $memory_18);
#line 384
$memory_21 = hash::get_value($memory_2, $memory_18);
#line 384
hash::set_value($memory_13, $memory_18, $memory_21);
#line 384
undef($memory_21);
#line 385
$memory_20 = c_rt_lib::next_iter($memory_20);
#line 385
goto label_39;
#line 385
label_37:
#line 385
undef($memory_18);
#line 385
undef($memory_19);
#line 385
undef($memory_20);
#line 385
undef($memory_17);
#line 386
goto label_34;
#line 386
label_36:
#line 386
$memory_17 = c_rt_lib::ov_as($memory_15, 'ok');
#line 386
undef($memory_17);
#line 387
goto label_34;
#line 387
label_34:
#line 387
undef($memory_15);
#line 387
undef($memory_16);
#line 388
$memory_3 = $memory_13;
#line 388
undef($memory_13);
#line 388
undef($memory_14);
#line 389
goto label_31;
#line 389
label_32:
#line 390
$memory_13 = {};
#line 391
$memory_16 = c_rt_lib::init_iter($memory_3);
#line 391
label_42:
#line 391
$memory_14 = c_rt_lib::is_end_hash($memory_16);
#line 391
if (c_rt_lib::check_true($memory_14)) {goto label_40;}
#line 391
$memory_14 = c_rt_lib::get_key_iter($memory_16);
#line 391
$memory_15 = c_rt_lib::hash_get_value($memory_3, $memory_14);
#line 392
$memory_17 = "saving file: ";
#line 392
$memory_17 = $memory_17 . $memory_14;
#line 392
c_fe_lib::print($memory_17);
#line 392
undef($memory_17);
#line 393
$memory_18 = hash::get_value($memory_9, $memory_14);
#line 393
$memory_18 = $memory_18->{'dst'};
#line 393
$memory_17 = compiler_priv::save_module_to_file($memory_15, $memory_18);
#line 393
undef($memory_18);
#line 393
$memory_18 = c_rt_lib::ov_is($memory_17, 'err');
#line 393
if (c_rt_lib::check_true($memory_18)) {goto label_44;}
#line 396
$memory_18 = c_rt_lib::ov_is($memory_17, 'ok');
#line 396
if (c_rt_lib::check_true($memory_18)) {goto label_45;}
#line 396
$memory_18 = "NOMATCHALERT";
#line 396
$memory_18 = [$memory_18,$memory_17];
#line 396
die(dfile::ssave($memory_18));
#line 393
label_44:
#line 393
$memory_19 = c_rt_lib::ov_as($memory_17, 'err');
#line 394
$memory_20 = "ERROR: ";
#line 394
$memory_20 = $memory_20 . $memory_19;
#line 394
c_fe_lib::print($memory_20);
#line 394
undef($memory_20);
#line 395
hash::set_value($memory_13, $memory_14, $memory_15);
#line 395
undef($memory_19);
#line 396
goto label_43;
#line 396
label_45:
#line 396
$memory_19 = c_rt_lib::ov_as($memory_17, 'ok');
#line 396
undef($memory_19);
#line 397
goto label_43;
#line 397
label_43:
#line 397
undef($memory_17);
#line 397
undef($memory_18);
#line 398
$memory_16 = c_rt_lib::next_iter($memory_16);
#line 398
goto label_42;
#line 398
label_40:
#line 398
undef($memory_14);
#line 398
undef($memory_15);
#line 398
undef($memory_16);
#line 399
$memory_3 = $memory_13;
#line 399
undef($memory_13);
#line 400
goto label_31;
#line 400
label_31:
#line 400
undef($memory_12);
#line 401
$memory_12 = hash::size($memory_3);
#line 401
$memory_13 = 0;
#line 401
$memory_12 = c_rt_lib::to_nl($memory_12 > $memory_13);
#line 401
undef($memory_13);
#line 401
$memory_12 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_12));
#line 401
if (c_rt_lib::check_true($memory_12)) {goto label_47;}
#line 402
$memory_13 = "Can not save ";
#line 402
$memory_14 = hash::size($memory_3);
#line 402
$memory_13 = $memory_13 . $memory_14;
#line 402
undef($memory_14);
#line 402
$memory_14 = " files. ";
#line 402
$memory_13 = $memory_13 . $memory_14;
#line 402
undef($memory_14);
#line 403
$memory_14 = string::lf();
#line 403
$memory_15 = "ERROR: ";
#line 403
$memory_14 = $memory_14 . $memory_15;
#line 403
undef($memory_15);
#line 403
$memory_14 = $memory_14 . $memory_13;
#line 403
c_fe_lib::print($memory_14);
#line 403
undef($memory_14);
#line 403
undef($memory_13);
#line 404
goto label_46;
#line 404
label_47:
#line 405
$memory_13 = $memory_0->{'mode'};
#line 405
$memory_13 = c_rt_lib::ov_is($memory_13, 'idex');
#line 405
$memory_13 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_13));
#line 405
if (c_rt_lib::check_true($memory_13)) {goto label_49;}
#line 405
$memory_14 = $memory_0->{'mode'};
#line 405
$memory_14 = c_rt_lib::ov_as($memory_14, 'idex');
#line 405
c_fe_lib::exec_cmd($memory_14);
#line 405
undef($memory_14);
#line 405
goto label_49;
#line 405
label_49:
#line 405
undef($memory_13);
#line 406
$memory_13 = string::lf();
#line 406
$memory_14 = "OK: compile, check types and save changes without errors";
#line 406
$memory_13 = $memory_13 . $memory_14;
#line 406
undef($memory_14);
#line 406
c_fe_lib::print($memory_13);
#line 406
undef($memory_13);
#line 407
goto label_46;
#line 407
label_46:
#line 407
undef($memory_12);
#line 408
$memory_12 = "############################################################";
#line 408
c_fe_lib::print($memory_12);
#line 408
undef($memory_12);
#line 408
undef($memory_9);
#line 408
undef($memory_10);
#line 408
undef($memory_11);
#line 319
goto label_2;
#line 319
undef($memory_1);
#line 319
undef($memory_2);
#line 319
undef($memory_3);
#line 319
undef($memory_4);
#line 319
undef($memory_5);
#line 319
undef($memory_6);
#line 319
undef($memory_7);
#line 319
undef($memory_8);
#line 319
undef($memory_0);
#line 319
return;
}

sub compiler_priv::compile_strict_file($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;$memory_0 = $_[0];
#line 412
$memory_1 = {};
#line 413
$memory_3 = {};
#line 413
$memory_4 = {};
#line 413
$memory_5 = {};
#line 413
$memory_6 = {};
#line 413
$memory_7 = c_rt_lib::ov_mk_none('ok');
#line 413
$memory_2 = {module_errors => $memory_3,module_warnings => $memory_4,type_errors => $memory_5,type_warnings => $memory_6,loop_error => $memory_7,};
#line 413
undef($memory_3);
#line 413
undef($memory_4);
#line 413
undef($memory_5);
#line 413
undef($memory_6);
#line 413
undef($memory_7);
#line 414
$memory_3 = 0;
#line 415
$memory_4 = compiler_priv::get_files_to_parse($memory_0);
#line 416
$memory_7 = c_rt_lib::init_iter($memory_4);
#line 416
label_3:
#line 416
$memory_5 = c_rt_lib::is_end_hash($memory_7);
#line 416
if (c_rt_lib::check_true($memory_5)) {goto label_1;}
#line 416
$memory_5 = c_rt_lib::get_key_iter($memory_7);
#line 416
$memory_6 = c_rt_lib::hash_get_value($memory_4, $memory_5);
#line 417
$memory_9 = $memory_6->{'src'};
#line 417
$memory_8 = compiler_priv::parse_module($memory_5, $memory_9, $memory_2);
#line 417
undef($memory_9);
#line 417
$memory_9 = c_rt_lib::ov_is($memory_8, 'ok');
#line 417
if (c_rt_lib::check_true($memory_9)) {goto label_5;}
#line 419
$memory_9 = c_rt_lib::ov_is($memory_8, 'err');
#line 419
if (c_rt_lib::check_true($memory_9)) {goto label_6;}
#line 419
$memory_9 = "NOMATCHALERT";
#line 419
$memory_9 = [$memory_9,$memory_8];
#line 419
die(dfile::ssave($memory_9));
#line 417
label_5:
#line 417
$memory_10 = c_rt_lib::ov_as($memory_8, 'ok');
#line 418
hash::set_value($memory_1, $memory_5, $memory_10);
#line 418
undef($memory_10);
#line 419
goto label_4;
#line 419
label_6:
#line 419
$memory_10 = c_rt_lib::ov_as($memory_8, 'err');
#line 420
$memory_11 = 1;
#line 420
$memory_3 = $memory_3 + $memory_11;
#line 420
undef($memory_11);
#line 420
undef($memory_10);
#line 421
goto label_4;
#line 421
label_4:
#line 421
undef($memory_8);
#line 421
undef($memory_9);
#line 422
$memory_7 = c_rt_lib::next_iter($memory_7);
#line 422
goto label_3;
#line 422
label_1:
#line 422
undef($memory_5);
#line 422
undef($memory_6);
#line 422
undef($memory_7);
#line 423
$memory_5 = 0;
#line 423
$memory_5 = c_rt_lib::to_nl($memory_3 != $memory_5);
#line 423
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 423
if (c_rt_lib::check_true($memory_5)) {goto label_8;}
#line 424
compiler_priv::show_and_count_errors($memory_2, $memory_0);
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
undef($memory_5);
#line 425
return;
#line 426
goto label_8;
#line 426
label_8:
#line 426
undef($memory_5);
#line 427
$memory_5 = $memory_0->{'deref'};
#line 427
compiler_priv::check_modules($memory_1, $memory_2, $memory_5);
#line 427
undef($memory_5);
#line 428
$memory_5 = compiler_priv::show_and_count_errors($memory_2, $memory_0);
#line 428
$memory_6 = 0;
#line 428
$memory_5 = c_rt_lib::to_nl($memory_5 > $memory_6);
#line 428
undef($memory_6);
#line 428
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 428
if (c_rt_lib::check_true($memory_5)) {goto label_10;}
#line 429
undef($memory_0);
#line 429
undef($memory_1);
#line 429
undef($memory_2);
#line 429
undef($memory_3);
#line 429
undef($memory_4);
#line 429
undef($memory_5);
#line 429
return;
#line 430
goto label_10;
#line 430
label_10:
#line 430
undef($memory_5);
#line 432
$memory_5 = $memory_0->{'language'};
#line 432
$memory_5 = c_rt_lib::ov_is($memory_5, 'ast');
#line 432
if (c_rt_lib::check_true($memory_5)) {goto label_13;}
#line 432
$memory_5 = $memory_0->{'language'};
#line 432
$memory_5 = c_rt_lib::ov_is($memory_5, 'nl');
#line 432
label_13:
#line 432
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 432
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 432
if (c_rt_lib::check_true($memory_5)) {goto label_12;}
#line 433
$memory_7 = $memory_0->{'language'};
#line 433
$memory_6 = compiler_priv::get_generator_state($memory_7);
#line 433
undef($memory_7);
#line 434
$memory_7 = "search constants...";
#line 434
c_fe_lib::print($memory_7);
#line 434
undef($memory_7);
#line 435
$memory_8 = compiler_priv::get_mathematical_func($memory_0);
#line 435
$memory_9 = $memory_0->{'optimization'};
#line 435
$memory_7 = post_processing::init($memory_8, $memory_9);
#line 435
undef($memory_9);
#line 435
undef($memory_8);
#line 436
$memory_8 = compiler_priv::translate($memory_1, $memory_7);
#line 437
$memory_9 = $memory_0->{'cache_path'};
#line 437
$memory_10 = $memory_0->{'language'};
#line 437
compiler_priv::generate_modules_to_files($memory_8, $memory_4, $memory_9, $memory_6, $memory_10);
#line 437
undef($memory_10);
#line 437
undef($memory_9);
#line 437
undef($memory_6);
#line 437
undef($memory_7);
#line 437
undef($memory_8);
#line 438
goto label_11;
#line 438
label_12:
#line 439
$memory_8 = c_rt_lib::init_iter($memory_1);
#line 439
label_16:
#line 439
$memory_6 = c_rt_lib::is_end_hash($memory_8);
#line 439
if (c_rt_lib::check_true($memory_6)) {goto label_14;}
#line 439
$memory_6 = c_rt_lib::get_key_iter($memory_8);
#line 439
$memory_7 = c_rt_lib::hash_get_value($memory_1, $memory_6);
#line 440
$memory_9 = "saving file: ";
#line 440
$memory_9 = $memory_9 . $memory_6;
#line 440
c_fe_lib::print($memory_9);
#line 440
undef($memory_9);
#line 441
$memory_10 = hash::get_value($memory_4, $memory_6);
#line 441
$memory_10 = $memory_10->{'dst'};
#line 441
$memory_9 = compiler_priv::save_module_to_file($memory_7, $memory_10);
#line 441
undef($memory_10);
#line 441
$memory_10 = c_rt_lib::ov_is($memory_9, 'err');
#line 441
if (c_rt_lib::check_true($memory_10)) {goto label_18;}
#line 443
$memory_10 = c_rt_lib::ov_is($memory_9, 'ok');
#line 443
if (c_rt_lib::check_true($memory_10)) {goto label_19;}
#line 443
$memory_10 = "NOMATCHALERT";
#line 443
$memory_10 = [$memory_10,$memory_9];
#line 443
die(dfile::ssave($memory_10));
#line 441
label_18:
#line 441
$memory_11 = c_rt_lib::ov_as($memory_9, 'err');
#line 442
$memory_12 = "ERROR: ";
#line 442
$memory_12 = $memory_12 . $memory_11;
#line 442
c_fe_lib::print($memory_12);
#line 442
undef($memory_12);
#line 442
undef($memory_11);
#line 443
goto label_17;
#line 443
label_19:
#line 443
$memory_11 = c_rt_lib::ov_as($memory_9, 'ok');
#line 443
undef($memory_11);
#line 444
goto label_17;
#line 444
label_17:
#line 444
undef($memory_9);
#line 444
undef($memory_10);
#line 445
$memory_8 = c_rt_lib::next_iter($memory_8);
#line 445
goto label_16;
#line 445
label_14:
#line 445
undef($memory_6);
#line 445
undef($memory_7);
#line 445
undef($memory_8);
#line 446
goto label_11;
#line 446
label_11:
#line 446
undef($memory_5);
#line 446
undef($memory_1);
#line 446
undef($memory_2);
#line 446
undef($memory_3);
#line 446
undef($memory_4);
#line 446
undef($memory_0);
#line 446
return;
}

sub compiler_priv::construct_error_message($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;$memory_0 = $_[0];
#line 449
$memory_1 = "";
#line 450
$memory_3 = $memory_0->{'module'};
#line 450
$memory_2 = string::length($memory_3);
#line 450
undef($memory_3);
#line 450
$memory_3 = 0;
#line 450
$memory_2 = c_rt_lib::to_nl($memory_2 == $memory_3);
#line 450
undef($memory_3);
#line 450
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 450
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 450
if (c_rt_lib::check_true($memory_2)) {goto label_2;}
#line 450
$memory_3 = " mod: ";
#line 450
$memory_4 = $memory_0->{'module'};
#line 450
$memory_3 = $memory_3 . $memory_4;
#line 450
undef($memory_4);
#line 450
$memory_1 = $memory_1 . $memory_3;
#line 450
undef($memory_3);
#line 450
goto label_2;
#line 450
label_2:
#line 450
undef($memory_2);
#line 451
$memory_3 = $memory_0->{'line'};
#line 451
$memory_2 = string::length($memory_3);
#line 451
undef($memory_3);
#line 451
$memory_3 = 0;
#line 451
$memory_2 = c_rt_lib::to_nl($memory_2 == $memory_3);
#line 451
undef($memory_3);
#line 451
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 451
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 451
if (c_rt_lib::check_true($memory_2)) {goto label_4;}
#line 451
$memory_3 = " line: ";
#line 451
$memory_4 = $memory_0->{'line'};
#line 451
$memory_3 = $memory_3 . $memory_4;
#line 451
undef($memory_4);
#line 451
$memory_1 = $memory_1 . $memory_3;
#line 451
undef($memory_3);
#line 451
goto label_4;
#line 451
label_4:
#line 451
undef($memory_2);
#line 452
$memory_2 = string::lf();
#line 452
$memory_3 = "     ";
#line 452
$memory_2 = $memory_2 . $memory_3;
#line 452
undef($memory_3);
#line 452
$memory_3 = $memory_0->{'msg'};
#line 452
$memory_2 = $memory_2 . $memory_3;
#line 452
undef($memory_3);
#line 452
$memory_1 = $memory_1 . $memory_2;
#line 452
undef($memory_2);
#line 453
undef($memory_0);
#line 453
return $memory_1;
#line 453
undef($memory_1);
#line 453
undef($memory_0);
#line 453
return;
}

sub compiler_priv::show_and_count_errors($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;my $memory_13;my $memory_14;my $memory_15;my $memory_16;my $memory_17;my $memory_18;$memory_0 = $_[0];$memory_1 = $_[1];
#line 456
$memory_2 = 0;
#line 457
$memory_3 = 0;
#line 458
$memory_4 = $memory_0->{'module_warnings'};
#line 458
$memory_7 = c_rt_lib::init_iter($memory_4);
#line 458
label_3:
#line 458
$memory_5 = c_rt_lib::is_end_hash($memory_7);
#line 458
if (c_rt_lib::check_true($memory_5)) {goto label_1;}
#line 458
$memory_5 = c_rt_lib::get_key_iter($memory_7);
#line 458
$memory_6 = c_rt_lib::hash_get_value($memory_4, $memory_5);
#line 459
$memory_8 = "WAR";
#line 460
$memory_9 = $memory_1->{'alarm'};
#line 460
$memory_9 = c_rt_lib::ov_is($memory_9, 'wall');
#line 460
$memory_9 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_9));
#line 460
if (c_rt_lib::check_true($memory_9)) {goto label_5;}
#line 460
$memory_10 = "ERR";
#line 460
$memory_8 = $memory_10;
#line 460
undef($memory_10);
#line 460
goto label_5;
#line 460
label_5:
#line 460
undef($memory_9);
#line 461
$memory_10 = 0;
#line 461
$memory_11 = 1;
#line 461
$memory_12 = c_rt_lib::array_len($memory_6);
#line 461
label_8:
#line 461
$memory_13 = c_rt_lib::to_nl($memory_10 >= $memory_12);
#line 461
if (c_rt_lib::check_true($memory_13)) {goto label_6;}
#line 461
$memory_9 = $memory_6->[$memory_10];
#line 462
$memory_14 = compiler_priv::construct_error_message($memory_9);
#line 462
$memory_14 = $memory_8 . $memory_14;
#line 462
c_fe_lib::print($memory_14);
#line 462
undef($memory_14);
#line 463
$memory_10 = $memory_10 + $memory_11;
#line 463
goto label_8;
#line 463
label_6:
#line 463
undef($memory_9);
#line 463
undef($memory_10);
#line 463
undef($memory_11);
#line 463
undef($memory_12);
#line 463
undef($memory_13);
#line 464
$memory_9 = array::len($memory_6);
#line 464
$memory_2 = $memory_2 + $memory_9;
#line 464
undef($memory_9);
#line 465
$memory_10 = $memory_0->{'type_warnings'};
#line 465
$memory_9 = hash::has_key($memory_10, $memory_5);
#line 465
undef($memory_10);
#line 465
$memory_9 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_9));
#line 465
if (c_rt_lib::check_true($memory_9)) {goto label_10;}
#line 466
$memory_11 = $memory_0->{'type_warnings'};
#line 466
$memory_10 = hash::get_value($memory_11, $memory_5);
#line 466
undef($memory_11);
#line 467
$memory_12 = 0;
#line 467
$memory_13 = 1;
#line 467
$memory_14 = c_rt_lib::array_len($memory_10);
#line 467
label_13:
#line 467
$memory_15 = c_rt_lib::to_nl($memory_12 >= $memory_14);
#line 467
if (c_rt_lib::check_true($memory_15)) {goto label_11;}
#line 467
$memory_11 = $memory_10->[$memory_12];
#line 468
$memory_16 = compiler_priv::construct_error_message($memory_11);
#line 468
$memory_16 = $memory_8 . $memory_16;
#line 468
c_fe_lib::print($memory_16);
#line 468
undef($memory_16);
#line 469
$memory_12 = $memory_12 + $memory_13;
#line 469
goto label_13;
#line 469
label_11:
#line 469
undef($memory_11);
#line 469
undef($memory_12);
#line 469
undef($memory_13);
#line 469
undef($memory_14);
#line 469
undef($memory_15);
#line 470
$memory_11 = array::len($memory_10);
#line 470
$memory_2 = $memory_2 + $memory_11;
#line 470
undef($memory_11);
#line 470
undef($memory_10);
#line 471
goto label_10;
#line 471
label_10:
#line 471
undef($memory_9);
#line 472
$memory_9 = "ERR";
#line 472
$memory_8 = $memory_9;
#line 472
undef($memory_9);
#line 473
$memory_10 = $memory_0->{'module_errors'};
#line 473
$memory_9 = hash::get_value($memory_10, $memory_5);
#line 473
undef($memory_10);
#line 474
$memory_11 = 0;
#line 474
$memory_12 = 1;
#line 474
$memory_13 = c_rt_lib::array_len($memory_9);
#line 474
label_16:
#line 474
$memory_14 = c_rt_lib::to_nl($memory_11 >= $memory_13);
#line 474
if (c_rt_lib::check_true($memory_14)) {goto label_14;}
#line 474
$memory_10 = $memory_9->[$memory_11];
#line 475
$memory_15 = "ERR";
#line 475
$memory_16 = compiler_priv::construct_error_message($memory_10);
#line 475
$memory_15 = $memory_15 . $memory_16;
#line 475
undef($memory_16);
#line 475
c_fe_lib::print($memory_15);
#line 475
undef($memory_15);
#line 476
$memory_11 = $memory_11 + $memory_12;
#line 476
goto label_16;
#line 476
label_14:
#line 476
undef($memory_10);
#line 476
undef($memory_11);
#line 476
undef($memory_12);
#line 476
undef($memory_13);
#line 476
undef($memory_14);
#line 477
$memory_10 = array::len($memory_9);
#line 477
$memory_3 = $memory_3 + $memory_10;
#line 477
undef($memory_10);
#line 478
$memory_11 = $memory_0->{'type_errors'};
#line 478
$memory_10 = hash::has_key($memory_11, $memory_5);
#line 478
undef($memory_11);
#line 478
$memory_10 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_10));
#line 478
if (c_rt_lib::check_true($memory_10)) {goto label_18;}
#line 479
$memory_12 = $memory_0->{'type_errors'};
#line 479
$memory_11 = hash::get_value($memory_12, $memory_5);
#line 479
undef($memory_12);
#line 480
$memory_13 = 0;
#line 480
$memory_14 = 1;
#line 480
$memory_15 = c_rt_lib::array_len($memory_11);
#line 480
label_21:
#line 480
$memory_16 = c_rt_lib::to_nl($memory_13 >= $memory_15);
#line 480
if (c_rt_lib::check_true($memory_16)) {goto label_19;}
#line 480
$memory_12 = $memory_11->[$memory_13];
#line 481
$memory_17 = "ERR";
#line 481
$memory_18 = compiler_priv::construct_error_message($memory_12);
#line 481
$memory_17 = $memory_17 . $memory_18;
#line 481
undef($memory_18);
#line 481
c_fe_lib::print($memory_17);
#line 481
undef($memory_17);
#line 482
$memory_13 = $memory_13 + $memory_14;
#line 482
goto label_21;
#line 482
label_19:
#line 482
undef($memory_12);
#line 482
undef($memory_13);
#line 482
undef($memory_14);
#line 482
undef($memory_15);
#line 482
undef($memory_16);
#line 483
$memory_12 = array::len($memory_11);
#line 483
$memory_3 = $memory_3 + $memory_12;
#line 483
undef($memory_12);
#line 483
undef($memory_11);
#line 484
goto label_18;
#line 484
label_18:
#line 484
undef($memory_10);
#line 484
undef($memory_8);
#line 484
undef($memory_9);
#line 485
$memory_7 = c_rt_lib::next_iter($memory_7);
#line 485
goto label_3;
#line 485
label_1:
#line 485
undef($memory_4);
#line 485
undef($memory_5);
#line 485
undef($memory_6);
#line 485
undef($memory_7);
#line 486
$memory_4 = $memory_0->{'loop_error'};
#line 486
$memory_5 = c_rt_lib::ov_is($memory_4, 'loop');
#line 486
if (c_rt_lib::check_true($memory_5)) {goto label_23;}
#line 493
$memory_5 = c_rt_lib::ov_is($memory_4, 'ok');
#line 493
if (c_rt_lib::check_true($memory_5)) {goto label_24;}
#line 493
$memory_5 = "NOMATCHALERT";
#line 493
$memory_5 = [$memory_5,$memory_4];
#line 493
die(dfile::ssave($memory_5));
#line 486
label_23:
#line 486
$memory_6 = c_rt_lib::ov_as($memory_4, 'loop');
#line 487
$memory_7 = "";
#line 488
$memory_9 = 0;
#line 488
$memory_10 = 1;
#line 488
$memory_11 = c_rt_lib::array_len($memory_6);
#line 488
label_27:
#line 488
$memory_12 = c_rt_lib::to_nl($memory_9 >= $memory_11);
#line 488
if (c_rt_lib::check_true($memory_12)) {goto label_25;}
#line 488
$memory_8 = $memory_6->[$memory_9];
#line 489
$memory_13 = " -> ";
#line 489
$memory_13 = $memory_8 . $memory_13;
#line 489
$memory_7 = $memory_7 . $memory_13;
#line 489
undef($memory_13);
#line 490
$memory_9 = $memory_9 + $memory_10;
#line 490
goto label_27;
#line 490
label_25:
#line 490
undef($memory_8);
#line 490
undef($memory_9);
#line 490
undef($memory_10);
#line 490
undef($memory_11);
#line 490
undef($memory_12);
#line 491
$memory_8 = "ERR Loop found in module imports: ";
#line 491
$memory_8 = $memory_8 . $memory_7;
#line 491
$memory_9 = ". ";
#line 491
$memory_8 = $memory_8 . $memory_9;
#line 491
undef($memory_9);
#line 491
c_fe_lib::print($memory_8);
#line 491
undef($memory_8);
#line 492
$memory_8 = 1;
#line 492
$memory_3 = $memory_3 + $memory_8;
#line 492
undef($memory_8);
#line 492
undef($memory_7);
#line 492
undef($memory_6);
#line 493
goto label_22;
#line 493
label_24:
#line 494
goto label_22;
#line 494
label_22:
#line 494
undef($memory_4);
#line 494
undef($memory_5);
#line 496
$memory_4 = $memory_1->{'alarm'};
#line 496
$memory_4 = c_rt_lib::ov_is($memory_4, 'wall');
#line 496
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 496
if (c_rt_lib::check_true($memory_4)) {goto label_29;}
#line 497
$memory_3 = $memory_3 + $memory_2;
#line 498
$memory_5 = 0;
#line 498
$memory_2 = $memory_5;
#line 498
undef($memory_5);
#line 499
goto label_29;
#line 499
label_29:
#line 499
undef($memory_4);
#line 500
$memory_4 = "ERR: ";
#line 500
$memory_4 = $memory_4 . $memory_3;
#line 500
$memory_5 = " WAR: ";
#line 500
$memory_4 = $memory_4 . $memory_5;
#line 500
undef($memory_5);
#line 500
$memory_4 = $memory_4 . $memory_2;
#line 500
c_fe_lib::print($memory_4);
#line 500
undef($memory_4);
#line 501
undef($memory_0);
#line 501
undef($memory_1);
#line 501
undef($memory_2);
#line 501
return $memory_3;
#line 501
undef($memory_2);
#line 501
undef($memory_3);
#line 501
undef($memory_0);
#line 501
undef($memory_1);
#line 501
return;
}

sub compiler_priv::translate($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;$memory_0 = $_[0];$memory_1 = $_[1];Scalar::Util::weaken($_[1]) if ref($_[1]);
#line 504
$memory_2 = {};
#line 505
$memory_5 = c_rt_lib::init_iter($memory_0);
#line 505
label_3:
#line 505
$memory_3 = c_rt_lib::is_end_hash($memory_5);
#line 505
if (c_rt_lib::check_true($memory_3)) {goto label_1;}
#line 505
$memory_3 = c_rt_lib::get_key_iter($memory_5);
#line 505
$memory_4 = c_rt_lib::hash_get_value($memory_0, $memory_3);
#line 506
$memory_6 = translator::translate($memory_4);
#line 507
hash::set_value($memory_2, $memory_3, $memory_6);
#line 507
undef($memory_6);
#line 508
$memory_5 = c_rt_lib::next_iter($memory_5);
#line 508
goto label_3;
#line 508
label_1:
#line 508
undef($memory_3);
#line 508
undef($memory_4);
#line 508
undef($memory_5);
#line 509
post_processing::find($memory_1, $memory_2);
#line 510
undef($memory_0);
#line 510
$_[1] = $memory_1;return $memory_2;
#line 510
undef($memory_2);
#line 510
undef($memory_0);
#line 510
$_[1] = $memory_1;return;
$_[1] = $memory_1;}

sub compiler_priv::check_modules($$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;my $memory_13;my $memory_14;my $memory_15;my $memory_16;$memory_0 = $_[0];$memory_1 = $_[1];Scalar::Util::weaken($_[1]) if ref($_[1]);$memory_2 = $_[2];
#line 513
$memory_3 = "type checking...";
#line 513
c_fe_lib::print($memory_3);
#line 513
undef($memory_3);
#line 514
$memory_3 = type_checker::check_modules($memory_0, $memory_0);
#line 515
$memory_5 = $memory_3->{'errors'};
#line 515
$memory_4 = array::len($memory_5);
#line 515
undef($memory_5);
#line 516
$memory_5 = $memory_3->{'errors'};
#line 516
$memory_7 = 0;
#line 516
$memory_8 = 1;
#line 516
$memory_9 = c_rt_lib::array_len($memory_5);
#line 516
label_3:
#line 516
$memory_10 = c_rt_lib::to_nl($memory_7 >= $memory_9);
#line 516
if (c_rt_lib::check_true($memory_10)) {goto label_1;}
#line 516
$memory_6 = $memory_5->[$memory_7];
#line 517
$memory_11 = [];
#line 518
$memory_13 = $memory_1->{'type_errors'};
#line 518
$memory_14 = $memory_6->{'module'};
#line 518
$memory_12 = hash::has_key($memory_13, $memory_14);
#line 518
undef($memory_14);
#line 518
undef($memory_13);
#line 518
$memory_12 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_12));
#line 518
if (c_rt_lib::check_true($memory_12)) {goto label_5;}
#line 519
$memory_14 = $memory_1->{'type_errors'};
#line 519
$memory_15 = $memory_6->{'module'};
#line 519
$memory_13 = hash::get_value($memory_14, $memory_15);
#line 519
undef($memory_15);
#line 519
undef($memory_14);
#line 519
$memory_11 = $memory_13;
#line 519
undef($memory_13);
#line 520
goto label_5;
#line 520
label_5:
#line 520
undef($memory_12);
#line 521
array::push($memory_11, $memory_6);
#line 522
$memory_12 = "type_errors";
#line 522
$memory_12 = c_rt_lib::get_ref_hash($memory_1, $memory_12);
#line 522
$memory_13 = $memory_6->{'module'};
#line 522
hash::set_value($memory_12, $memory_13, $memory_11);
#line 522
undef($memory_13);
#line 522
$memory_13 = "type_errors";
#line 522
c_rt_lib::set_ref_hash($memory_1, $memory_13, $memory_12);
#line 522
undef($memory_13);
#line 522
undef($memory_12);
#line 522
undef($memory_11);
#line 523
$memory_7 = $memory_7 + $memory_8;
#line 523
goto label_3;
#line 523
label_1:
#line 523
undef($memory_5);
#line 523
undef($memory_6);
#line 523
undef($memory_7);
#line 523
undef($memory_8);
#line 523
undef($memory_9);
#line 523
undef($memory_10);
#line 524
$memory_5 = $memory_3->{'warnings'};
#line 524
$memory_7 = 0;
#line 524
$memory_8 = 1;
#line 524
$memory_9 = c_rt_lib::array_len($memory_5);
#line 524
label_8:
#line 524
$memory_10 = c_rt_lib::to_nl($memory_7 >= $memory_9);
#line 524
if (c_rt_lib::check_true($memory_10)) {goto label_6;}
#line 524
$memory_6 = $memory_5->[$memory_7];
#line 525
$memory_11 = [];
#line 526
$memory_13 = $memory_1->{'type_warnings'};
#line 526
$memory_14 = $memory_6->{'module'};
#line 526
$memory_12 = hash::has_key($memory_13, $memory_14);
#line 526
undef($memory_14);
#line 526
undef($memory_13);
#line 526
$memory_12 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_12));
#line 526
if (c_rt_lib::check_true($memory_12)) {goto label_10;}
#line 527
$memory_14 = $memory_1->{'type_warnings'};
#line 527
$memory_15 = $memory_6->{'module'};
#line 527
$memory_13 = hash::get_value($memory_14, $memory_15);
#line 527
undef($memory_15);
#line 527
undef($memory_14);
#line 527
$memory_11 = $memory_13;
#line 527
undef($memory_13);
#line 528
goto label_10;
#line 528
label_10:
#line 528
undef($memory_12);
#line 529
array::push($memory_11, $memory_6);
#line 530
$memory_12 = "type_warnings";
#line 530
$memory_12 = c_rt_lib::get_ref_hash($memory_1, $memory_12);
#line 530
$memory_13 = $memory_6->{'module'};
#line 530
hash::set_value($memory_12, $memory_13, $memory_11);
#line 530
undef($memory_13);
#line 530
$memory_13 = "type_warnings";
#line 530
c_rt_lib::set_ref_hash($memory_1, $memory_13, $memory_12);
#line 530
undef($memory_13);
#line 530
undef($memory_12);
#line 530
undef($memory_11);
#line 531
$memory_7 = $memory_7 + $memory_8;
#line 531
goto label_8;
#line 531
label_6:
#line 531
undef($memory_5);
#line 531
undef($memory_6);
#line 531
undef($memory_7);
#line 531
undef($memory_8);
#line 531
undef($memory_9);
#line 531
undef($memory_10);
#line 532
$memory_5 = 0;
#line 532
$memory_5 = c_rt_lib::to_nl($memory_4 == $memory_5);
#line 532
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 532
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 532
if (c_rt_lib::check_true($memory_5)) {goto label_12;}
#line 532
$memory_6 = "Found ";
#line 532
$memory_6 = $memory_6 . $memory_4;
#line 532
$memory_7 = " errors of types. ";
#line 532
$memory_6 = $memory_6 . $memory_7;
#line 532
undef($memory_7);
#line 532
c_fe_lib::print($memory_6);
#line 532
undef($memory_6);
#line 532
goto label_12;
#line 532
label_12:
#line 532
undef($memory_5);
#line 533
$memory_5 = {};
#line 534
$memory_8 = c_rt_lib::init_iter($memory_0);
#line 534
label_15:
#line 534
$memory_6 = c_rt_lib::is_end_hash($memory_8);
#line 534
if (c_rt_lib::check_true($memory_6)) {goto label_13;}
#line 534
$memory_6 = c_rt_lib::get_key_iter($memory_8);
#line 534
$memory_7 = c_rt_lib::hash_get_value($memory_0, $memory_6);
#line 535
$memory_9 = [];
#line 536
$memory_10 = $memory_7->{'import'};
#line 536
$memory_12 = 0;
#line 536
$memory_13 = 1;
#line 536
$memory_14 = c_rt_lib::array_len($memory_10);
#line 536
label_18:
#line 536
$memory_15 = c_rt_lib::to_nl($memory_12 >= $memory_14);
#line 536
if (c_rt_lib::check_true($memory_15)) {goto label_16;}
#line 536
$memory_11 = $memory_10->[$memory_12];
#line 537
$memory_16 = $memory_11->{'name'};
#line 537
array::push($memory_9, $memory_16);
#line 537
undef($memory_16);
#line 538
$memory_12 = $memory_12 + $memory_13;
#line 538
goto label_18;
#line 538
label_16:
#line 538
undef($memory_10);
#line 538
undef($memory_11);
#line 538
undef($memory_12);
#line 538
undef($memory_13);
#line 538
undef($memory_14);
#line 538
undef($memory_15);
#line 539
hash::set_value($memory_5, $memory_6, $memory_9);
#line 539
undef($memory_9);
#line 540
$memory_8 = c_rt_lib::next_iter($memory_8);
#line 540
goto label_15;
#line 540
label_13:
#line 540
undef($memory_6);
#line 540
undef($memory_7);
#line 540
undef($memory_8);
#line 541
$memory_6 = module_checker::search_loops($memory_5);
#line 541
$memory_7 = $memory_6;
#line 541
 if (c_rt_lib::get_hashcount($memory_1) > 1) {$memory_1 = {%{$memory_1}};}$memory_1->{'loop_error'} = $memory_7;
#line 541
undef($memory_6);
#line 541
undef($memory_7);
#line 542
$memory_6 = $memory_2;
#line 542
$memory_6 = c_rt_lib::ov_is($memory_6, 'yes');
#line 542
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 542
if (c_rt_lib::check_true($memory_6)) {goto label_20;}
#line 543
$memory_7 = "deleted types: ";
#line 543
$memory_9 = $memory_3->{'deref'};
#line 543
$memory_9 = $memory_9->{'delete'};
#line 543
$memory_8 = array::len($memory_9);
#line 543
undef($memory_9);
#line 543
$memory_7 = $memory_7 . $memory_8;
#line 543
undef($memory_8);
#line 543
c_fe_lib::print($memory_7);
#line 543
undef($memory_7);
#line 544
$memory_7 = "created types: ";
#line 544
$memory_9 = $memory_3->{'deref'};
#line 544
$memory_9 = $memory_9->{'create'};
#line 544
$memory_8 = array::len($memory_9);
#line 544
undef($memory_9);
#line 544
$memory_7 = $memory_7 . $memory_8;
#line 544
undef($memory_8);
#line 544
c_fe_lib::print($memory_7);
#line 544
undef($memory_7);
#line 545
$memory_7 = $memory_2;
#line 545
$memory_7 = c_rt_lib::ov_as($memory_7, 'yes');
#line 545
$memory_9 = $memory_3->{'deref'};
#line 545
$memory_8 = dfile::ssave($memory_9);
#line 545
undef($memory_9);
#line 545
c_fe_lib::string_to_file($memory_7, $memory_8);
#line 545
undef($memory_8);
#line 545
undef($memory_7);
#line 546
goto label_20;
#line 546
label_20:
#line 546
undef($memory_6);
#line 546
undef($memory_3);
#line 546
undef($memory_4);
#line 546
undef($memory_5);
#line 546
undef($memory_0);
#line 546
undef($memory_2);
#line 546
$_[1] = $memory_1;return;
$_[1] = $memory_1;}

sub compiler_priv::try_save_file($$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;$memory_0 = $_[0];$memory_1 = $_[1];$memory_2 = $_[2];Scalar::Util::weaken($_[2]) if ref($_[2]);
#line 549
$memory_3 = c_fe_lib::string_to_file($memory_1, $memory_0);
#line 549
$memory_4 = c_rt_lib::ov_is($memory_3, 'ok');
#line 549
if (c_rt_lib::check_true($memory_4)) {goto label_2;}
#line 550
$memory_4 = c_rt_lib::ov_is($memory_3, 'err');
#line 550
if (c_rt_lib::check_true($memory_4)) {goto label_3;}
#line 550
$memory_4 = "NOMATCHALERT";
#line 550
$memory_4 = [$memory_4,$memory_3];
#line 550
die(dfile::ssave($memory_4));
#line 549
label_2:
#line 549
$memory_5 = c_rt_lib::ov_as($memory_3, 'ok');
#line 549
undef($memory_5);
#line 550
goto label_1;
#line 550
label_3:
#line 550
$memory_5 = c_rt_lib::ov_as($memory_3, 'err');
#line 551
$memory_6 = "ERROR: ";
#line 551
$memory_6 = $memory_6 . $memory_5;
#line 551
c_fe_lib::print($memory_6);
#line 551
undef($memory_6);
#line 552
$memory_6 = c_rt_lib::to_nl(1);
#line 552
$memory_2 = $memory_6;
#line 552
undef($memory_6);
#line 552
undef($memory_5);
#line 553
goto label_1;
#line 553
label_1:
#line 553
undef($memory_3);
#line 553
undef($memory_4);
#line 553
undef($memory_0);
#line 553
undef($memory_1);
#line 553
$_[2] = $memory_2;return;
$_[2] = $memory_2;}

sub compiler_priv::generate_modules_to_files($$$$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;my $memory_13;my $memory_14;my $memory_15;$memory_0 = $_[0];$memory_1 = $_[1];$memory_2 = $_[2];$memory_3 = $_[3];Scalar::Util::weaken($_[3]) if ref($_[3]);$memory_4 = $_[4];
#line 557
$memory_5 = {};
#line 558
$memory_6 = c_rt_lib::ov_is($memory_4, 'nla');
#line 558
if (c_rt_lib::check_true($memory_6)) {goto label_2;}
#line 566
$memory_6 = c_rt_lib::ov_is($memory_4, 'c');
#line 566
if (c_rt_lib::check_true($memory_6)) {goto label_3;}
#line 580
$memory_6 = c_rt_lib::ov_is($memory_4, 'pm');
#line 580
if (c_rt_lib::check_true($memory_6)) {goto label_4;}
#line 589
$memory_6 = c_rt_lib::ov_is($memory_4, 'js');
#line 589
if (c_rt_lib::check_true($memory_6)) {goto label_5;}
#line 598
$memory_6 = c_rt_lib::ov_is($memory_4, 'java');
#line 598
if (c_rt_lib::check_true($memory_6)) {goto label_6;}
#line 607
$memory_6 = c_rt_lib::ov_is($memory_4, 'nl');
#line 607
if (c_rt_lib::check_true($memory_6)) {goto label_7;}
#line 609
$memory_6 = c_rt_lib::ov_is($memory_4, 'ast');
#line 609
if (c_rt_lib::check_true($memory_6)) {goto label_8;}
#line 609
$memory_6 = "NOMATCHALERT";
#line 609
$memory_6 = [$memory_6,$memory_4];
#line 609
die(dfile::ssave($memory_6));
#line 558
label_2:
#line 559
$memory_9 = c_rt_lib::init_iter($memory_0);
#line 559
label_11:
#line 559
$memory_7 = c_rt_lib::is_end_hash($memory_9);
#line 559
if (c_rt_lib::check_true($memory_7)) {goto label_9;}
#line 559
$memory_7 = c_rt_lib::get_key_iter($memory_9);
#line 559
$memory_8 = c_rt_lib::hash_get_value($memory_0, $memory_7);
#line 560
$memory_10 = c_rt_lib::to_nl(0);
#line 561
$memory_11 = hash::get_value($memory_1, $memory_7);
#line 561
$memory_11 = $memory_11->{'dst'};
#line 561
$memory_11 = c_rt_lib::ov_as($memory_11, 'nla');
#line 562
$memory_12 = "saving file: ";
#line 562
$memory_12 = $memory_12 . $memory_7;
#line 562
c_fe_lib::print($memory_12);
#line 562
undef($memory_12);
#line 563
$memory_12 = dfile::ssave($memory_8);
#line 563
compiler_priv::try_save_file($memory_12, $memory_11, $memory_10);
#line 563
undef($memory_12);
#line 564
$memory_12 = $memory_10;
#line 564
$memory_12 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_12));
#line 564
if (c_rt_lib::check_true($memory_12)) {goto label_13;}
#line 564
$memory_13 = "";
#line 564
hash::set_value($memory_5, $memory_7, $memory_13);
#line 564
undef($memory_13);
#line 564
goto label_13;
#line 564
label_13:
#line 564
undef($memory_12);
#line 564
undef($memory_10);
#line 564
undef($memory_11);
#line 565
$memory_9 = c_rt_lib::next_iter($memory_9);
#line 565
goto label_11;
#line 565
label_9:
#line 565
undef($memory_7);
#line 565
undef($memory_8);
#line 565
undef($memory_9);
#line 566
goto label_1;
#line 566
label_3:
#line 567
$memory_7 = generator_c::generate($memory_0, $memory_3);
#line 568
$memory_8 = c_rt_lib::to_nl(0);
#line 569
$memory_9 = $memory_7->{'modules'};
#line 569
$memory_12 = c_rt_lib::init_iter($memory_9);
#line 569
label_16:
#line 569
$memory_10 = c_rt_lib::is_end_hash($memory_12);
#line 569
if (c_rt_lib::check_true($memory_10)) {goto label_14;}
#line 569
$memory_10 = c_rt_lib::get_key_iter($memory_12);
#line 569
$memory_11 = c_rt_lib::hash_get_value($memory_9, $memory_10);
#line 570
$memory_13 = c_rt_lib::to_nl(0);
#line 570
$memory_8 = $memory_13;
#line 570
undef($memory_13);
#line 571
$memory_13 = hash::get_value($memory_1, $memory_10);
#line 571
$memory_13 = $memory_13->{'dst'};
#line 571
$memory_13 = c_rt_lib::ov_as($memory_13, 'c');
#line 572
$memory_14 = "saving file: ";
#line 572
$memory_14 = $memory_14 . $memory_10;
#line 572
c_fe_lib::print($memory_14);
#line 572
undef($memory_14);
#line 573
$memory_14 = $memory_11->{'c'};
#line 573
$memory_15 = $memory_13->{'c'};
#line 573
compiler_priv::try_save_file($memory_14, $memory_15, $memory_8);
#line 573
undef($memory_15);
#line 573
undef($memory_14);
#line 574
$memory_14 = $memory_11->{'h'};
#line 574
$memory_15 = $memory_13->{'h'};
#line 574
compiler_priv::try_save_file($memory_14, $memory_15, $memory_8);
#line 574
undef($memory_15);
#line 574
undef($memory_14);
#line 575
$memory_14 = $memory_8;
#line 575
$memory_14 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_14));
#line 575
if (c_rt_lib::check_true($memory_14)) {goto label_18;}
#line 575
$memory_15 = "";
#line 575
hash::set_value($memory_5, $memory_10, $memory_15);
#line 575
undef($memory_15);
#line 575
goto label_18;
#line 575
label_18:
#line 575
undef($memory_14);
#line 575
undef($memory_13);
#line 576
$memory_12 = c_rt_lib::next_iter($memory_12);
#line 576
goto label_16;
#line 576
label_14:
#line 576
undef($memory_9);
#line 576
undef($memory_10);
#line 576
undef($memory_11);
#line 576
undef($memory_12);
#line 577
$memory_9 = "saving global const file";
#line 577
c_fe_lib::print($memory_9);
#line 577
undef($memory_9);
#line 578
$memory_9 = $memory_7->{'global_const'};
#line 578
$memory_9 = $memory_9->{'c'};
#line 578
$memory_10 = "c_global_const.c";
#line 578
$memory_10 = $memory_2 . $memory_10;
#line 578
compiler_priv::try_save_file($memory_9, $memory_10, $memory_8);
#line 578
undef($memory_10);
#line 578
undef($memory_9);
#line 579
$memory_9 = $memory_7->{'global_const'};
#line 579
$memory_9 = $memory_9->{'h'};
#line 579
$memory_10 = "c_global_const.h";
#line 579
$memory_10 = $memory_2 . $memory_10;
#line 579
compiler_priv::try_save_file($memory_9, $memory_10, $memory_8);
#line 579
undef($memory_10);
#line 579
undef($memory_9);
#line 579
undef($memory_7);
#line 579
undef($memory_8);
#line 580
goto label_1;
#line 580
label_4:
#line 581
$memory_9 = c_rt_lib::init_iter($memory_0);
#line 581
label_21:
#line 581
$memory_7 = c_rt_lib::is_end_hash($memory_9);
#line 581
if (c_rt_lib::check_true($memory_7)) {goto label_19;}
#line 581
$memory_7 = c_rt_lib::get_key_iter($memory_9);
#line 581
$memory_8 = c_rt_lib::hash_get_value($memory_0, $memory_7);
#line 582
$memory_10 = c_rt_lib::to_nl(0);
#line 583
$memory_11 = generator_pm::generate($memory_8);
#line 584
$memory_12 = hash::get_value($memory_1, $memory_7);
#line 584
$memory_12 = $memory_12->{'dst'};
#line 584
$memory_12 = c_rt_lib::ov_as($memory_12, 'pm');
#line 585
$memory_13 = "saving file: ";
#line 585
$memory_13 = $memory_13 . $memory_7;
#line 585
c_fe_lib::print($memory_13);
#line 585
undef($memory_13);
#line 586
compiler_priv::try_save_file($memory_11, $memory_12, $memory_10);
#line 587
$memory_13 = $memory_10;
#line 587
$memory_13 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_13));
#line 587
if (c_rt_lib::check_true($memory_13)) {goto label_23;}
#line 587
$memory_14 = "";
#line 587
hash::set_value($memory_5, $memory_7, $memory_14);
#line 587
undef($memory_14);
#line 587
goto label_23;
#line 587
label_23:
#line 587
undef($memory_13);
#line 587
undef($memory_10);
#line 587
undef($memory_11);
#line 587
undef($memory_12);
#line 588
$memory_9 = c_rt_lib::next_iter($memory_9);
#line 588
goto label_21;
#line 588
label_19:
#line 588
undef($memory_7);
#line 588
undef($memory_8);
#line 588
undef($memory_9);
#line 589
goto label_1;
#line 589
label_5:
#line 590
$memory_9 = c_rt_lib::init_iter($memory_0);
#line 590
label_26:
#line 590
$memory_7 = c_rt_lib::is_end_hash($memory_9);
#line 590
if (c_rt_lib::check_true($memory_7)) {goto label_24;}
#line 590
$memory_7 = c_rt_lib::get_key_iter($memory_9);
#line 590
$memory_8 = c_rt_lib::hash_get_value($memory_0, $memory_7);
#line 591
$memory_10 = c_rt_lib::to_nl(0);
#line 592
$memory_11 = generator_js::generate($memory_8);
#line 593
$memory_12 = hash::get_value($memory_1, $memory_7);
#line 593
$memory_12 = $memory_12->{'dst'};
#line 593
$memory_12 = c_rt_lib::ov_as($memory_12, 'js');
#line 594
$memory_13 = "saving file: ";
#line 594
$memory_13 = $memory_13 . $memory_7;
#line 594
c_fe_lib::print($memory_13);
#line 594
undef($memory_13);
#line 595
compiler_priv::try_save_file($memory_11, $memory_12, $memory_10);
#line 596
$memory_13 = $memory_10;
#line 596
$memory_13 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_13));
#line 596
if (c_rt_lib::check_true($memory_13)) {goto label_28;}
#line 596
$memory_14 = "";
#line 596
hash::set_value($memory_5, $memory_7, $memory_14);
#line 596
undef($memory_14);
#line 596
goto label_28;
#line 596
label_28:
#line 596
undef($memory_13);
#line 596
undef($memory_10);
#line 596
undef($memory_11);
#line 596
undef($memory_12);
#line 597
$memory_9 = c_rt_lib::next_iter($memory_9);
#line 597
goto label_26;
#line 597
label_24:
#line 597
undef($memory_7);
#line 597
undef($memory_8);
#line 597
undef($memory_9);
#line 598
goto label_1;
#line 598
label_6:
#line 599
$memory_9 = c_rt_lib::init_iter($memory_0);
#line 599
label_31:
#line 599
$memory_7 = c_rt_lib::is_end_hash($memory_9);
#line 599
if (c_rt_lib::check_true($memory_7)) {goto label_29;}
#line 599
$memory_7 = c_rt_lib::get_key_iter($memory_9);
#line 599
$memory_8 = c_rt_lib::hash_get_value($memory_0, $memory_7);
#line 600
$memory_10 = c_rt_lib::to_nl(0);
#line 601
$memory_11 = generator_java::generate($memory_8);
#line 602
$memory_12 = hash::get_value($memory_1, $memory_7);
#line 602
$memory_12 = $memory_12->{'dst'};
#line 602
$memory_12 = c_rt_lib::ov_as($memory_12, 'java');
#line 603
$memory_13 = "saving file: ";
#line 603
$memory_13 = $memory_13 . $memory_7;
#line 603
c_fe_lib::print($memory_13);
#line 603
undef($memory_13);
#line 604
compiler_priv::try_save_file($memory_11, $memory_12, $memory_10);
#line 605
$memory_13 = $memory_10;
#line 605
$memory_13 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_13));
#line 605
if (c_rt_lib::check_true($memory_13)) {goto label_33;}
#line 605
$memory_14 = "";
#line 605
hash::set_value($memory_5, $memory_7, $memory_14);
#line 605
undef($memory_14);
#line 605
goto label_33;
#line 605
label_33:
#line 605
undef($memory_13);
#line 605
undef($memory_10);
#line 605
undef($memory_11);
#line 605
undef($memory_12);
#line 606
$memory_9 = c_rt_lib::next_iter($memory_9);
#line 606
goto label_31;
#line 606
label_29:
#line 606
undef($memory_7);
#line 606
undef($memory_8);
#line 606
undef($memory_9);
#line 607
goto label_1;
#line 607
label_7:
#line 608
$memory_7 = [];
#line 608
die(dfile::ssave($memory_7));
#line 608
undef($memory_7);
#line 609
goto label_1;
#line 609
label_8:
#line 610
$memory_7 = [];
#line 610
die(dfile::ssave($memory_7));
#line 610
undef($memory_7);
#line 611
goto label_1;
#line 611
label_1:
#line 611
undef($memory_6);
#line 612
$memory_6 = hash::size($memory_5);
#line 612
$memory_7 = 0;
#line 612
$memory_6 = c_rt_lib::to_nl($memory_6 > $memory_7);
#line 612
undef($memory_7);
#line 612
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 612
if (c_rt_lib::check_true($memory_6)) {goto label_35;}
#line 613
$memory_7 = c_rt_lib::ov_mk_arg('err', $memory_5);
#line 613
undef($memory_0);
#line 613
undef($memory_1);
#line 613
undef($memory_2);
#line 613
undef($memory_4);
#line 613
undef($memory_5);
#line 613
undef($memory_6);
#line 613
$_[3] = $memory_3;return $memory_7;
#line 613
undef($memory_7);
#line 614
goto label_34;
#line 614
label_35:
#line 615
$memory_7 = "";
#line 615
$memory_7 = c_rt_lib::ov_mk_arg('ok', $memory_7);
#line 615
undef($memory_0);
#line 615
undef($memory_1);
#line 615
undef($memory_2);
#line 615
undef($memory_4);
#line 615
undef($memory_5);
#line 615
undef($memory_6);
#line 615
$_[3] = $memory_3;return $memory_7;
#line 615
undef($memory_7);
#line 616
goto label_34;
#line 616
label_34:
#line 616
undef($memory_6);
#line 616
undef($memory_5);
#line 616
undef($memory_0);
#line 616
undef($memory_1);
#line 616
undef($memory_2);
#line 616
undef($memory_4);
#line 616
$_[3] = $memory_3;return;
$_[3] = $memory_3;}

sub compiler_priv::save_module_to_file($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;$memory_0 = $_[0];$memory_1 = $_[1];
#line 619
$memory_2 = c_rt_lib::ov_is($memory_1, 'nla');
#line 619
if (c_rt_lib::check_true($memory_2)) {goto label_2;}
#line 621
$memory_2 = c_rt_lib::ov_is($memory_1, 'c');
#line 621
if (c_rt_lib::check_true($memory_2)) {goto label_3;}
#line 623
$memory_2 = c_rt_lib::ov_is($memory_1, 'pm');
#line 623
if (c_rt_lib::check_true($memory_2)) {goto label_4;}
#line 625
$memory_2 = c_rt_lib::ov_is($memory_1, 'js');
#line 625
if (c_rt_lib::check_true($memory_2)) {goto label_5;}
#line 627
$memory_2 = c_rt_lib::ov_is($memory_1, 'java');
#line 627
if (c_rt_lib::check_true($memory_2)) {goto label_6;}
#line 629
$memory_2 = c_rt_lib::ov_is($memory_1, 'nl');
#line 629
if (c_rt_lib::check_true($memory_2)) {goto label_7;}
#line 631
$memory_2 = c_rt_lib::ov_is($memory_1, 'ast');
#line 631
if (c_rt_lib::check_true($memory_2)) {goto label_8;}
#line 633
$memory_2 = c_rt_lib::ov_is($memory_1, 'none');
#line 633
if (c_rt_lib::check_true($memory_2)) {goto label_9;}
#line 633
$memory_2 = "NOMATCHALERT";
#line 633
$memory_2 = [$memory_2,$memory_1];
#line 633
die(dfile::ssave($memory_2));
#line 619
label_2:
#line 619
$memory_3 = c_rt_lib::ov_as($memory_1, 'nla');
#line 620
$memory_4 = [];
#line 620
die(dfile::ssave($memory_4));
#line 620
undef($memory_4);
#line 620
undef($memory_3);
#line 621
goto label_1;
#line 621
label_3:
#line 621
$memory_3 = c_rt_lib::ov_as($memory_1, 'c');
#line 622
$memory_4 = [];
#line 622
die(dfile::ssave($memory_4));
#line 622
undef($memory_4);
#line 622
undef($memory_3);
#line 623
goto label_1;
#line 623
label_4:
#line 623
$memory_3 = c_rt_lib::ov_as($memory_1, 'pm');
#line 624
$memory_4 = [];
#line 624
die(dfile::ssave($memory_4));
#line 624
undef($memory_4);
#line 624
undef($memory_3);
#line 625
goto label_1;
#line 625
label_5:
#line 625
$memory_3 = c_rt_lib::ov_as($memory_1, 'js');
#line 626
$memory_4 = [];
#line 626
die(dfile::ssave($memory_4));
#line 626
undef($memory_4);
#line 626
undef($memory_3);
#line 627
goto label_1;
#line 627
label_6:
#line 627
$memory_3 = c_rt_lib::ov_as($memory_1, 'java');
#line 628
$memory_4 = [];
#line 628
die(dfile::ssave($memory_4));
#line 628
undef($memory_4);
#line 628
undef($memory_3);
#line 629
goto label_1;
#line 629
label_7:
#line 629
$memory_3 = c_rt_lib::ov_as($memory_1, 'nl');
#line 630
$memory_5 = {
	module => "compiler",
	name => "file_t",
};
#line 630
$memory_5 = c_rt_lib::ov_mk_arg('ref', $memory_5);
#line 630
$memory_7 = pretty_printer::print_module_to_str($memory_0);
#line 630
$memory_6 = c_fe_lib::string_to_file($memory_3, $memory_7);
#line 630
undef($memory_7);
#line 630
$memory_4 = ptd::ensure($memory_5, $memory_6);
#line 630
undef($memory_6);
#line 630
undef($memory_5);
#line 630
undef($memory_0);
#line 630
undef($memory_1);
#line 630
undef($memory_2);
#line 630
undef($memory_3);
#line 630
return $memory_4;
#line 630
undef($memory_4);
#line 630
undef($memory_3);
#line 631
goto label_1;
#line 631
label_8:
#line 631
$memory_3 = c_rt_lib::ov_as($memory_1, 'ast');
#line 632
$memory_5 = {
	module => "compiler",
	name => "file_t",
};
#line 632
$memory_5 = c_rt_lib::ov_mk_arg('ref', $memory_5);
#line 632
$memory_7 = dfile::ssave($memory_0);
#line 632
$memory_6 = c_fe_lib::string_to_file($memory_3, $memory_7);
#line 632
undef($memory_7);
#line 632
$memory_4 = ptd::ensure($memory_5, $memory_6);
#line 632
undef($memory_6);
#line 632
undef($memory_5);
#line 632
undef($memory_0);
#line 632
undef($memory_1);
#line 632
undef($memory_2);
#line 632
undef($memory_3);
#line 632
return $memory_4;
#line 632
undef($memory_4);
#line 632
undef($memory_3);
#line 633
goto label_1;
#line 633
label_9:
#line 634
$memory_3 = [];
#line 634
die(dfile::ssave($memory_3));
#line 634
undef($memory_3);
#line 635
goto label_1;
#line 635
label_1:
#line 635
undef($memory_2);
#line 635
undef($memory_0);
#line 635
undef($memory_1);
#line 635
return;
}

sub compiler_priv::get_dir($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;$memory_0 = $_[0];
#line 639
$memory_1 = string::length($memory_0);
#line 639
$memory_2 = 1;
#line 639
$memory_1 = $memory_1 - $memory_2;
#line 639
undef($memory_2);
#line 640
$memory_3 = 1;
#line 640
$memory_2 = string::substr($memory_0, $memory_1, $memory_3);
#line 640
undef($memory_3);
#line 640
$memory_3 = "/";
#line 640
$memory_2 = c_rt_lib::to_nl($memory_2 eq $memory_3);
#line 640
undef($memory_3);
#line 640
if (c_rt_lib::check_true($memory_2)) {goto label_3;}
#line 640
$memory_3 = 1;
#line 640
$memory_2 = string::substr($memory_0, $memory_1, $memory_3);
#line 640
undef($memory_3);
#line 640
$memory_3 = "\\";
#line 640
$memory_2 = c_rt_lib::to_nl($memory_2 eq $memory_3);
#line 640
undef($memory_3);
#line 640
label_3:
#line 640
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 640
if (c_rt_lib::check_true($memory_2)) {goto label_2;}
#line 640
$memory_3 = 1;
#line 640
$memory_1 = $memory_1 - $memory_3;
#line 640
undef($memory_3);
#line 640
goto label_2;
#line 640
label_2:
#line 640
undef($memory_2);
#line 641
label_5:
#line 641
$memory_2 = 0;
#line 641
$memory_2 = c_rt_lib::to_nl($memory_1 >= $memory_2);
#line 641
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 641
if (c_rt_lib::check_true($memory_4)) {goto label_7;}
#line 641
$memory_5 = 1;
#line 641
$memory_2 = string::substr($memory_0, $memory_1, $memory_5);
#line 641
undef($memory_5);
#line 641
$memory_5 = "/";
#line 641
$memory_2 = c_rt_lib::to_nl($memory_2 ne $memory_5);
#line 641
undef($memory_5);
#line 641
label_7:
#line 641
undef($memory_4);
#line 641
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 641
if (c_rt_lib::check_true($memory_3)) {goto label_6;}
#line 641
$memory_4 = 1;
#line 641
$memory_2 = string::substr($memory_0, $memory_1, $memory_4);
#line 641
undef($memory_4);
#line 641
$memory_4 = "\\";
#line 641
$memory_2 = c_rt_lib::to_nl($memory_2 ne $memory_4);
#line 641
undef($memory_4);
#line 641
label_6:
#line 641
undef($memory_3);
#line 641
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 641
if (c_rt_lib::check_true($memory_2)) {goto label_4;}
#line 641
$memory_3 = 1;
#line 641
$memory_1 = $memory_1 - $memory_3;
#line 641
undef($memory_3);
#line 641
goto label_5;
#line 641
label_4:
#line 641
undef($memory_2);
#line 642
$memory_2 = 0;
#line 642
$memory_2 = c_rt_lib::to_nl($memory_1 <= $memory_2);
#line 642
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 642
if (c_rt_lib::check_true($memory_2)) {goto label_9;}
#line 642
$memory_3 = ".";
#line 642
undef($memory_0);
#line 642
undef($memory_1);
#line 642
undef($memory_2);
#line 642
return $memory_3;
#line 642
undef($memory_3);
#line 642
goto label_9;
#line 642
label_9:
#line 642
undef($memory_2);
#line 643
$memory_3 = 0;
#line 643
$memory_2 = string::substr($memory_0, $memory_3, $memory_1);
#line 643
undef($memory_3);
#line 643
undef($memory_0);
#line 643
undef($memory_1);
#line 643
return $memory_2;
#line 643
undef($memory_2);
#line 643
undef($memory_1);
#line 643
undef($memory_0);
#line 643
return;
}

sub compiler_priv::parse_command_line_args($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;$memory_0 = $_[0];
#line 647
$memory_2 = c_rt_lib::ov_mk_none('c');
#line 647
$memory_3 = c_rt_lib::ov_mk_none('strict');
#line 647
$memory_5 = ".";
#line 647
$memory_4 = [$memory_5];
#line 647
undef($memory_5);
#line 647
$memory_5 = c_rt_lib::ov_mk_none('o1');
#line 647
$memory_6 = c_rt_lib::ov_mk_none('no');
#line 647
$memory_7 = compiler_priv::get_default_math_file();
#line 647
$memory_8 = "";
#line 647
$memory_9 = c_rt_lib::ov_mk_none('norm');
#line 647
$memory_1 = {language => $memory_2,mode => $memory_3,input_path => $memory_4,optimization => $memory_5,deref => $memory_6,math_fun => $memory_7,cache_path => $memory_8,alarm => $memory_9,};
#line 647
undef($memory_2);
#line 647
undef($memory_3);
#line 647
undef($memory_4);
#line 647
undef($memory_5);
#line 647
undef($memory_6);
#line 647
undef($memory_7);
#line 647
undef($memory_8);
#line 647
undef($memory_9);
#line 657
$memory_2 = c_rt_lib::to_nl(0);
#line 658
$memory_3 = compiler_priv::get_dir_cache_name();
#line 659
$memory_4 = 1;
#line 659
label_2:
#line 659
$memory_5 = array::len($memory_0);
#line 659
$memory_5 = c_rt_lib::to_nl($memory_4 < $memory_5);
#line 659
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 659
if (c_rt_lib::check_true($memory_5)) {goto label_1;}
#line 660
$memory_6 = $memory_0->[$memory_4];
#line 661
$memory_7 = string::length($memory_6);
#line 661
$memory_9 = 2;
#line 661
$memory_7 = c_rt_lib::to_nl($memory_7 >= $memory_9);
#line 661
undef($memory_9);
#line 661
$memory_8 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 661
if (c_rt_lib::check_true($memory_8)) {goto label_6;}
#line 661
$memory_9 = 0;
#line 661
$memory_10 = 2;
#line 661
$memory_7 = string::substr($memory_6, $memory_9, $memory_10);
#line 661
undef($memory_10);
#line 661
undef($memory_9);
#line 661
$memory_9 = "--";
#line 661
$memory_7 = c_rt_lib::to_nl($memory_7 eq $memory_9);
#line 661
undef($memory_9);
#line 661
label_6:
#line 661
undef($memory_8);
#line 661
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 661
if (c_rt_lib::check_true($memory_7)) {goto label_5;}
#line 662
$memory_9 = 2;
#line 662
$memory_10 = string::length($memory_6);
#line 662
$memory_11 = 2;
#line 662
$memory_10 = $memory_10 - $memory_11;
#line 662
undef($memory_11);
#line 662
$memory_8 = string::substr($memory_6, $memory_9, $memory_10);
#line 662
undef($memory_10);
#line 662
undef($memory_9);
#line 663
$memory_9 = "deref";
#line 663
$memory_9 = c_rt_lib::to_nl($memory_8 eq $memory_9);
#line 663
$memory_9 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_9));
#line 663
if (c_rt_lib::check_true($memory_9)) {goto label_8;}
#line 664
$memory_10 = "";
#line 664
$memory_10 = c_rt_lib::ov_mk_arg('yes', $memory_10);
#line 664
$memory_11 = $memory_10;
#line 664
 if (c_rt_lib::get_hashcount($memory_1) > 1) {$memory_1 = {%{$memory_1}};}$memory_1->{'deref'} = $memory_11;
#line 664
undef($memory_10);
#line 664
undef($memory_11);
#line 665
goto label_7;
#line 665
label_8:
#line 665
$memory_9 = "nla";
#line 665
$memory_9 = c_rt_lib::to_nl($memory_8 eq $memory_9);
#line 665
$memory_9 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_9));
#line 665
if (c_rt_lib::check_true($memory_9)) {goto label_9;}
#line 666
$memory_10 = c_rt_lib::ov_mk_none('nla');
#line 666
$memory_11 = $memory_10;
#line 666
 if (c_rt_lib::get_hashcount($memory_1) > 1) {$memory_1 = {%{$memory_1}};}$memory_1->{'language'} = $memory_11;
#line 666
undef($memory_10);
#line 666
undef($memory_11);
#line 667
goto label_7;
#line 667
label_9:
#line 667
$memory_9 = "ast";
#line 667
$memory_9 = c_rt_lib::to_nl($memory_8 eq $memory_9);
#line 667
$memory_9 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_9));
#line 667
if (c_rt_lib::check_true($memory_9)) {goto label_10;}
#line 668
$memory_10 = c_rt_lib::ov_mk_none('ast');
#line 668
$memory_11 = $memory_10;
#line 668
 if (c_rt_lib::get_hashcount($memory_1) > 1) {$memory_1 = {%{$memory_1}};}$memory_1->{'language'} = $memory_11;
#line 668
undef($memory_10);
#line 668
undef($memory_11);
#line 669
goto label_7;
#line 669
label_10:
#line 669
$memory_9 = "pm";
#line 669
$memory_9 = c_rt_lib::to_nl($memory_8 eq $memory_9);
#line 669
$memory_9 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_9));
#line 669
if (c_rt_lib::check_true($memory_9)) {goto label_11;}
#line 670
$memory_10 = c_rt_lib::ov_mk_none('pm');
#line 670
$memory_11 = $memory_10;
#line 670
 if (c_rt_lib::get_hashcount($memory_1) > 1) {$memory_1 = {%{$memory_1}};}$memory_1->{'language'} = $memory_11;
#line 670
undef($memory_10);
#line 670
undef($memory_11);
#line 671
goto label_7;
#line 671
label_11:
#line 671
$memory_9 = "c";
#line 671
$memory_9 = c_rt_lib::to_nl($memory_8 eq $memory_9);
#line 671
$memory_9 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_9));
#line 671
if (c_rt_lib::check_true($memory_9)) {goto label_12;}
#line 672
$memory_10 = c_rt_lib::ov_mk_none('c');
#line 672
$memory_11 = $memory_10;
#line 672
 if (c_rt_lib::get_hashcount($memory_1) > 1) {$memory_1 = {%{$memory_1}};}$memory_1->{'language'} = $memory_11;
#line 672
undef($memory_10);
#line 672
undef($memory_11);
#line 673
goto label_7;
#line 673
label_12:
#line 673
$memory_9 = "js";
#line 673
$memory_9 = c_rt_lib::to_nl($memory_8 eq $memory_9);
#line 673
$memory_9 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_9));
#line 673
if (c_rt_lib::check_true($memory_9)) {goto label_13;}
#line 674
$memory_10 = c_rt_lib::ov_mk_none('js');
#line 674
$memory_11 = $memory_10;
#line 674
 if (c_rt_lib::get_hashcount($memory_1) > 1) {$memory_1 = {%{$memory_1}};}$memory_1->{'language'} = $memory_11;
#line 674
undef($memory_10);
#line 674
undef($memory_11);
#line 675
goto label_7;
#line 675
label_13:
#line 675
$memory_9 = "java";
#line 675
$memory_9 = c_rt_lib::to_nl($memory_8 eq $memory_9);
#line 675
$memory_9 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_9));
#line 675
if (c_rt_lib::check_true($memory_9)) {goto label_14;}
#line 676
$memory_10 = c_rt_lib::ov_mk_none('java');
#line 676
$memory_11 = $memory_10;
#line 676
 if (c_rt_lib::get_hashcount($memory_1) > 1) {$memory_1 = {%{$memory_1}};}$memory_1->{'language'} = $memory_11;
#line 676
undef($memory_10);
#line 676
undef($memory_11);
#line 677
goto label_7;
#line 677
label_14:
#line 677
$memory_9 = "nl";
#line 677
$memory_9 = c_rt_lib::to_nl($memory_8 eq $memory_9);
#line 677
$memory_9 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_9));
#line 677
if (c_rt_lib::check_true($memory_9)) {goto label_15;}
#line 678
$memory_10 = c_rt_lib::ov_mk_none('nl');
#line 678
$memory_11 = $memory_10;
#line 678
 if (c_rt_lib::get_hashcount($memory_1) > 1) {$memory_1 = {%{$memory_1}};}$memory_1->{'language'} = $memory_11;
#line 678
undef($memory_10);
#line 678
undef($memory_11);
#line 679
$memory_10 = compiler_priv::get_dir_pretty_name();
#line 679
$memory_3 = $memory_10;
#line 679
undef($memory_10);
#line 680
goto label_7;
#line 680
label_15:
#line 680
$memory_9 = "ide";
#line 680
$memory_9 = c_rt_lib::to_nl($memory_8 eq $memory_9);
#line 680
$memory_9 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_9));
#line 680
if (c_rt_lib::check_true($memory_9)) {goto label_16;}
#line 681
$memory_10 = c_rt_lib::ov_mk_none('ide');
#line 681
$memory_11 = $memory_10;
#line 681
 if (c_rt_lib::get_hashcount($memory_1) > 1) {$memory_1 = {%{$memory_1}};}$memory_1->{'mode'} = $memory_11;
#line 681
undef($memory_10);
#line 681
undef($memory_11);
#line 682
goto label_7;
#line 682
label_16:
#line 682
$memory_9 = "idex";
#line 682
$memory_9 = c_rt_lib::to_nl($memory_8 eq $memory_9);
#line 682
$memory_9 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_9));
#line 682
if (c_rt_lib::check_true($memory_9)) {goto label_17;}
#line 683
$memory_10 = 1;
#line 683
$memory_4 = $memory_4 + $memory_10;
#line 683
undef($memory_10);
#line 684
$memory_10 = array::len($memory_0);
#line 684
$memory_10 = c_rt_lib::to_nl($memory_4 < $memory_10);
#line 684
$memory_10 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_10));
#line 684
$memory_10 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_10));
#line 684
if (c_rt_lib::check_true($memory_10)) {goto label_19;}
#line 684
$memory_11 = [];
#line 684
die(dfile::ssave($memory_11));
#line 684
goto label_19;
#line 684
label_19:
#line 684
undef($memory_10);
#line 684
undef($memory_11);
#line 685
$memory_10 = $memory_0->[$memory_4];
#line 685
$memory_10 = c_rt_lib::ov_mk_arg('idex', $memory_10);
#line 685
$memory_11 = $memory_10;
#line 685
 if (c_rt_lib::get_hashcount($memory_1) > 1) {$memory_1 = {%{$memory_1}};}$memory_1->{'mode'} = $memory_11;
#line 685
undef($memory_10);
#line 685
undef($memory_11);
#line 686
goto label_7;
#line 686
label_17:
#line 686
$memory_9 = "strict";
#line 686
$memory_9 = c_rt_lib::to_nl($memory_8 eq $memory_9);
#line 686
$memory_9 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_9));
#line 686
if (c_rt_lib::check_true($memory_9)) {goto label_20;}
#line 687
$memory_10 = c_rt_lib::ov_mk_none('strict');
#line 687
$memory_11 = $memory_10;
#line 687
 if (c_rt_lib::get_hashcount($memory_1) > 1) {$memory_1 = {%{$memory_1}};}$memory_1->{'mode'} = $memory_11;
#line 687
undef($memory_10);
#line 687
undef($memory_11);
#line 688
goto label_7;
#line 688
label_20:
#line 688
$memory_9 = "exec";
#line 688
$memory_9 = c_rt_lib::to_nl($memory_8 eq $memory_9);
#line 688
$memory_9 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_9));
#line 688
if (c_rt_lib::check_true($memory_9)) {goto label_21;}
#line 689
$memory_10 = c_rt_lib::ov_mk_none('exec');
#line 689
$memory_11 = $memory_10;
#line 689
 if (c_rt_lib::get_hashcount($memory_1) > 1) {$memory_1 = {%{$memory_1}};}$memory_1->{'mode'} = $memory_11;
#line 689
undef($memory_10);
#line 689
undef($memory_11);
#line 690
goto label_7;
#line 690
label_21:
#line 690
$memory_9 = "o";
#line 690
$memory_9 = c_rt_lib::to_nl($memory_8 eq $memory_9);
#line 690
if (c_rt_lib::check_true($memory_9)) {goto label_23;}
#line 690
$memory_9 = "out";
#line 690
$memory_9 = c_rt_lib::to_nl($memory_8 eq $memory_9);
#line 690
label_23:
#line 690
$memory_9 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_9));
#line 690
if (c_rt_lib::check_true($memory_9)) {goto label_22;}
#line 691
$memory_10 = 1;
#line 691
$memory_4 = $memory_4 + $memory_10;
#line 691
undef($memory_10);
#line 692
$memory_10 = array::len($memory_0);
#line 692
$memory_10 = c_rt_lib::to_nl($memory_4 < $memory_10);
#line 692
$memory_10 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_10));
#line 692
$memory_10 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_10));
#line 692
if (c_rt_lib::check_true($memory_10)) {goto label_25;}
#line 692
$memory_11 = [];
#line 692
die(dfile::ssave($memory_11));
#line 692
goto label_25;
#line 692
label_25:
#line 692
undef($memory_10);
#line 692
undef($memory_11);
#line 693
$memory_10 = $memory_0->[$memory_4];
#line 693
$memory_11 = "/";
#line 693
$memory_10 = $memory_10 . $memory_11;
#line 693
undef($memory_11);
#line 693
$memory_11 = $memory_10;
#line 693
 if (c_rt_lib::get_hashcount($memory_1) > 1) {$memory_1 = {%{$memory_1}};}$memory_1->{'cache_path'} = $memory_11;
#line 693
undef($memory_10);
#line 693
undef($memory_11);
#line 694
goto label_7;
#line 694
label_22:
#line 694
$memory_9 = "math";
#line 694
$memory_9 = c_rt_lib::to_nl($memory_8 eq $memory_9);
#line 694
$memory_9 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_9));
#line 694
if (c_rt_lib::check_true($memory_9)) {goto label_26;}
#line 695
$memory_10 = 1;
#line 695
$memory_4 = $memory_4 + $memory_10;
#line 695
undef($memory_10);
#line 696
$memory_10 = array::len($memory_0);
#line 696
$memory_10 = c_rt_lib::to_nl($memory_4 < $memory_10);
#line 696
$memory_10 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_10));
#line 696
$memory_10 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_10));
#line 696
if (c_rt_lib::check_true($memory_10)) {goto label_28;}
#line 696
$memory_11 = [];
#line 696
die(dfile::ssave($memory_11));
#line 696
goto label_28;
#line 696
label_28:
#line 696
undef($memory_10);
#line 696
undef($memory_11);
#line 697
$memory_10 = $memory_0->[$memory_4];
#line 697
$memory_11 = $memory_10;
#line 697
 if (c_rt_lib::get_hashcount($memory_1) > 1) {$memory_1 = {%{$memory_1}};}$memory_1->{'math_fun'} = $memory_11;
#line 697
undef($memory_10);
#line 697
undef($memory_11);
#line 698
goto label_7;
#line 698
label_26:
#line 698
$memory_9 = "O0";
#line 698
$memory_9 = c_rt_lib::to_nl($memory_8 eq $memory_9);
#line 698
$memory_9 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_9));
#line 698
if (c_rt_lib::check_true($memory_9)) {goto label_29;}
#line 699
$memory_10 = c_rt_lib::ov_mk_none('o0');
#line 699
$memory_11 = $memory_10;
#line 699
 if (c_rt_lib::get_hashcount($memory_1) > 1) {$memory_1 = {%{$memory_1}};}$memory_1->{'optimization'} = $memory_11;
#line 699
undef($memory_10);
#line 699
undef($memory_11);
#line 700
goto label_7;
#line 700
label_29:
#line 700
$memory_9 = "O1";
#line 700
$memory_9 = c_rt_lib::to_nl($memory_8 eq $memory_9);
#line 700
$memory_9 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_9));
#line 700
if (c_rt_lib::check_true($memory_9)) {goto label_30;}
#line 701
$memory_10 = c_rt_lib::ov_mk_none('o1');
#line 701
$memory_11 = $memory_10;
#line 701
 if (c_rt_lib::get_hashcount($memory_1) > 1) {$memory_1 = {%{$memory_1}};}$memory_1->{'optimization'} = $memory_11;
#line 701
undef($memory_10);
#line 701
undef($memory_11);
#line 702
goto label_7;
#line 702
label_30:
#line 702
$memory_9 = "O2";
#line 702
$memory_9 = c_rt_lib::to_nl($memory_8 eq $memory_9);
#line 702
$memory_9 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_9));
#line 702
if (c_rt_lib::check_true($memory_9)) {goto label_31;}
#line 703
$memory_10 = c_rt_lib::ov_mk_none('o2');
#line 703
$memory_11 = $memory_10;
#line 703
 if (c_rt_lib::get_hashcount($memory_1) > 1) {$memory_1 = {%{$memory_1}};}$memory_1->{'optimization'} = $memory_11;
#line 703
undef($memory_10);
#line 703
undef($memory_11);
#line 704
goto label_7;
#line 704
label_31:
#line 704
$memory_9 = "O3";
#line 704
$memory_9 = c_rt_lib::to_nl($memory_8 eq $memory_9);
#line 704
$memory_9 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_9));
#line 704
if (c_rt_lib::check_true($memory_9)) {goto label_32;}
#line 705
$memory_10 = c_rt_lib::ov_mk_none('o3');
#line 705
$memory_11 = $memory_10;
#line 705
 if (c_rt_lib::get_hashcount($memory_1) > 1) {$memory_1 = {%{$memory_1}};}$memory_1->{'optimization'} = $memory_11;
#line 705
undef($memory_10);
#line 705
undef($memory_11);
#line 706
goto label_7;
#line 706
label_32:
#line 706
$memory_9 = "O4";
#line 706
$memory_9 = c_rt_lib::to_nl($memory_8 eq $memory_9);
#line 706
$memory_9 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_9));
#line 706
if (c_rt_lib::check_true($memory_9)) {goto label_33;}
#line 707
$memory_10 = c_rt_lib::ov_mk_none('o4');
#line 707
$memory_11 = $memory_10;
#line 707
 if (c_rt_lib::get_hashcount($memory_1) > 1) {$memory_1 = {%{$memory_1}};}$memory_1->{'optimization'} = $memory_11;
#line 707
undef($memory_10);
#line 707
undef($memory_11);
#line 708
goto label_7;
#line 708
label_33:
#line 708
$memory_9 = "Wall";
#line 708
$memory_9 = c_rt_lib::to_nl($memory_8 eq $memory_9);
#line 708
$memory_9 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_9));
#line 708
if (c_rt_lib::check_true($memory_9)) {goto label_34;}
#line 709
$memory_10 = c_rt_lib::ov_mk_none('wall');
#line 709
$memory_11 = $memory_10;
#line 709
 if (c_rt_lib::get_hashcount($memory_1) > 1) {$memory_1 = {%{$memory_1}};}$memory_1->{'alarm'} = $memory_11;
#line 709
undef($memory_10);
#line 709
undef($memory_11);
#line 710
goto label_7;
#line 710
label_34:
#line 711
$memory_10 = "unknown compiler option: ";
#line 711
$memory_10 = $memory_10 . $memory_6;
#line 711
c_fe_lib::print($memory_10);
#line 711
undef($memory_10);
#line 712
goto label_7;
#line 712
label_7:
#line 712
undef($memory_9);
#line 712
undef($memory_8);
#line 713
goto label_4;
#line 713
label_5:
#line 714
$memory_8 = $memory_2;
#line 714
$memory_8 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 714
$memory_8 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 714
if (c_rt_lib::check_true($memory_8)) {goto label_36;}
#line 714
$memory_9 = [];
#line 714
$memory_10 = $memory_9;
#line 714
 if (c_rt_lib::get_hashcount($memory_1) > 1) {$memory_1 = {%{$memory_1}};}$memory_1->{'input_path'} = $memory_10;
#line 714
undef($memory_9);
#line 714
undef($memory_10);
#line 714
goto label_36;
#line 714
label_36:
#line 714
undef($memory_8);
#line 715
$memory_8 = "input_path";
#line 715
$memory_8 = c_rt_lib::get_ref_hash($memory_1, $memory_8);
#line 715
array::push($memory_8, $memory_6);
#line 715
$memory_9 = "input_path";
#line 715
c_rt_lib::set_ref_hash($memory_1, $memory_9, $memory_8);
#line 715
undef($memory_9);
#line 715
undef($memory_8);
#line 716
$memory_8 = c_rt_lib::to_nl(1);
#line 716
$memory_2 = $memory_8;
#line 716
undef($memory_8);
#line 717
goto label_4;
#line 717
label_4:
#line 717
undef($memory_7);
#line 717
undef($memory_6);
#line 717
$memory_6 = 1;
#line 717
$memory_4 = $memory_4 + $memory_6;
#line 717
undef($memory_6);
#line 718
goto label_2;
#line 718
label_1:
#line 718
undef($memory_4);
#line 718
undef($memory_5);
#line 719
$memory_4 = $memory_1->{'cache_path'};
#line 719
$memory_5 = "";
#line 719
$memory_4 = c_rt_lib::to_nl($memory_4 eq $memory_5);
#line 719
undef($memory_5);
#line 719
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 719
if (c_rt_lib::check_true($memory_4)) {goto label_38;}
#line 720
$memory_5 = "./";
#line 720
$memory_5 = $memory_5 . $memory_3;
#line 720
$memory_6 = "/";
#line 720
$memory_5 = $memory_5 . $memory_6;
#line 720
undef($memory_6);
#line 720
$memory_6 = $memory_5;
#line 720
 if (c_rt_lib::get_hashcount($memory_1) > 1) {$memory_1 = {%{$memory_1}};}$memory_1->{'cache_path'} = $memory_6;
#line 720
undef($memory_5);
#line 720
undef($memory_6);
#line 721
goto label_38;
#line 721
label_38:
#line 721
undef($memory_4);
#line 722
$memory_4 = $memory_1->{'deref'};
#line 722
$memory_4 = c_rt_lib::ov_is($memory_4, 'yes');
#line 722
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 722
if (c_rt_lib::check_true($memory_4)) {goto label_40;}
#line 722
$memory_5 = $memory_1->{'cache_path'};
#line 722
$memory_6 = compiler_priv::get_default_deref_file();
#line 722
$memory_5 = $memory_5 . $memory_6;
#line 722
undef($memory_6);
#line 722
$memory_5 = c_rt_lib::ov_mk_arg('yes', $memory_5);
#line 722
$memory_6 = $memory_5;
#line 722
 if (c_rt_lib::get_hashcount($memory_1) > 1) {$memory_1 = {%{$memory_1}};}$memory_1->{'deref'} = $memory_6;
#line 722
undef($memory_5);
#line 722
undef($memory_6);
#line 722
goto label_40;
#line 722
label_40:
#line 722
undef($memory_4);
#line 723
undef($memory_0);
#line 723
undef($memory_2);
#line 723
undef($memory_3);
#line 723
return $memory_1;
#line 723
undef($memory_1);
#line 723
undef($memory_2);
#line 723
undef($memory_3);
#line 723
undef($memory_0);
#line 723
return;
}
