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
use post_processing_t;
use tc_types;
use type_checker;
use module_checker;
use interpreter;
use nl;
use compiler_lib;
use profile;
use nsystem;
use string_utils;
use reference_generator;
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
sub compiler_priv::get_profile_file_name;
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
sub compiler_priv::serialize_deref;
sub compiler_priv::process_deref;
sub compiler_priv::try_save_file;
sub compiler_priv::generate_modules_to_files;
sub compiler_priv::save_module_to_file;
sub compiler_priv::get_dir;
sub compiler_priv::parse_command_line_args;

return 1;

sub compiler_priv::__get_dir_cache_name() {
my $memory_0;
#line 36
$memory_0 = "cache_nl";
#line 36
return $memory_0;
#line 36
undef($memory_0);
#line 36
return;
}

my $_get_dir_cache_name;
sub compiler_priv::get_dir_cache_name() {
	$_get_dir_cache_name = compiler_priv::__get_dir_cache_name() unless defined $_get_dir_cache_name;
	return $_get_dir_cache_name;
}

sub compiler_priv::__get_dir_pretty_name() {
my $memory_0;
#line 40
$memory_0 = "pretty_nl";
#line 40
return $memory_0;
#line 40
undef($memory_0);
#line 40
return;
}

my $_get_dir_pretty_name;
sub compiler_priv::get_dir_pretty_name() {
	$_get_dir_pretty_name = compiler_priv::__get_dir_pretty_name() unless defined $_get_dir_pretty_name;
	return $_get_dir_pretty_name;
}

sub compiler_priv::__get_default_deref_file() {
my $memory_0;
#line 44
$memory_0 = "deref.gr";
#line 44
return $memory_0;
#line 44
undef($memory_0);
#line 44
return;
}

my $_get_default_deref_file;
sub compiler_priv::get_default_deref_file() {
	$_get_default_deref_file = compiler_priv::__get_default_deref_file() unless defined $_get_default_deref_file;
	return $_get_default_deref_file;
}

sub compiler_priv::__get_default_math_file() {
my $memory_0;
#line 48
$memory_0 = "math_fun.gr";
#line 48
return $memory_0;
#line 48
undef($memory_0);
#line 48
return;
}

my $_get_default_math_file;
sub compiler_priv::get_default_math_file() {
	$_get_default_math_file = compiler_priv::__get_default_math_file() unless defined $_get_default_math_file;
	return $_get_default_math_file;
}

sub compiler::__parse_check_t() {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;
#line 53
$memory_3 = {
	module => "nast",
	name => "module_t",
};
#line 53
$memory_3 = c_rt_lib::ov_mk_arg('ref', $memory_3);
#line 53
$memory_2 = ptd::hash($memory_3);
#line 53
undef($memory_3);
#line 54
$memory_4 = ptd::sim();
#line 54
$memory_3 = ptd::arr($memory_4);
#line 54
undef($memory_4);
#line 55
$memory_4 = {
	module => "tc_types",
	name => "deref_types",
};
#line 55
$memory_4 = c_rt_lib::ov_mk_arg('ref', $memory_4);
#line 55
$memory_1 = {asts => $memory_2,errors => $memory_3,deref_type => $memory_4,};
#line 55
undef($memory_2);
#line 55
undef($memory_3);
#line 55
undef($memory_4);
#line 55
$memory_0 = ptd::rec($memory_1);
#line 55
undef($memory_1);
#line 55
return $memory_0;
#line 55
undef($memory_0);
#line 55
return;
}

my $_parse_check_t;
sub compiler::parse_check_t() {
	$_parse_check_t = compiler::__parse_check_t() unless defined $_parse_check_t;
	return $_parse_check_t;
}

sub compiler::__errors_hash_t() {
my $memory_0;my $memory_1;my $memory_2;
#line 60
$memory_2 = {
	module => "compiler_lib",
	name => "error_t",
};
#line 60
$memory_2 = c_rt_lib::ov_mk_arg('ref', $memory_2);
#line 60
$memory_1 = ptd::arr($memory_2);
#line 60
undef($memory_2);
#line 60
$memory_0 = ptd::hash($memory_1);
#line 60
undef($memory_1);
#line 60
return $memory_0;
#line 60
undef($memory_0);
#line 60
return;
}

my $_errors_hash_t;
sub compiler::errors_hash_t() {
	$_errors_hash_t = compiler::__errors_hash_t() unless defined $_errors_hash_t;
	return $_errors_hash_t;
}

sub compiler::__errors_group_t() {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;
#line 65
$memory_2 = {
	module => "compiler",
	name => "errors_hash_t",
};
#line 65
$memory_2 = c_rt_lib::ov_mk_arg('ref', $memory_2);
#line 66
$memory_3 = {
	module => "compiler",
	name => "errors_hash_t",
};
#line 66
$memory_3 = c_rt_lib::ov_mk_arg('ref', $memory_3);
#line 67
$memory_4 = {
	module => "compiler",
	name => "errors_hash_t",
};
#line 67
$memory_4 = c_rt_lib::ov_mk_arg('ref', $memory_4);
#line 68
$memory_5 = {
	module => "compiler",
	name => "errors_hash_t",
};
#line 68
$memory_5 = c_rt_lib::ov_mk_arg('ref', $memory_5);
#line 69
$memory_6 = {
	module => "module_checker",
	name => "ret_t",
};
#line 69
$memory_6 = c_rt_lib::ov_mk_arg('ref', $memory_6);
#line 69
$memory_1 = {module_errors => $memory_2,module_warnings => $memory_3,type_errors => $memory_4,type_warnings => $memory_5,loop_error => $memory_6,};
#line 69
undef($memory_2);
#line 69
undef($memory_3);
#line 69
undef($memory_4);
#line 69
undef($memory_5);
#line 69
undef($memory_6);
#line 69
$memory_0 = ptd::rec($memory_1);
#line 69
undef($memory_1);
#line 69
return $memory_0;
#line 69
undef($memory_0);
#line 69
return;
}

my $_errors_group_t;
sub compiler::errors_group_t() {
	$_errors_group_t = compiler::__errors_group_t() unless defined $_errors_group_t;
	return $_errors_group_t;
}

sub compiler::__language_t() {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;
#line 75
$memory_2 = ptd::none();
#line 76
$memory_3 = ptd::none();
#line 77
$memory_4 = ptd::none();
#line 78
$memory_5 = ptd::none();
#line 79
$memory_6 = ptd::none();
#line 80
$memory_9 = ptd::sim();
#line 80
$memory_8 = {namespace => $memory_9,};
#line 80
undef($memory_9);
#line 80
$memory_7 = ptd::rec($memory_8);
#line 80
undef($memory_8);
#line 81
$memory_8 = ptd::none();
#line 82
$memory_9 = ptd::none();
#line 82
$memory_1 = {pm => $memory_2,nla => $memory_3,c => $memory_4,nl => $memory_5,ast => $memory_6,js => $memory_7,java => $memory_8,call_graph => $memory_9,};
#line 82
undef($memory_2);
#line 82
undef($memory_3);
#line 82
undef($memory_4);
#line 82
undef($memory_5);
#line 82
undef($memory_6);
#line 82
undef($memory_7);
#line 82
undef($memory_8);
#line 82
undef($memory_9);
#line 82
$memory_0 = ptd::var($memory_1);
#line 82
undef($memory_1);
#line 82
return $memory_0;
#line 82
undef($memory_0);
#line 82
return;
}

my $_language_t;
sub compiler::language_t() {
	$_language_t = compiler::__language_t() unless defined $_language_t;
	return $_language_t;
}

sub compiler::__destination_t() {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;
#line 88
$memory_2 = ptd::sim();
#line 89
$memory_3 = ptd::sim();
#line 90
$memory_6 = ptd::sim();
#line 90
$memory_7 = ptd::sim();
#line 90
$memory_5 = {c => $memory_6,h => $memory_7,};
#line 90
undef($memory_6);
#line 90
undef($memory_7);
#line 90
$memory_4 = ptd::rec($memory_5);
#line 90
undef($memory_5);
#line 91
$memory_5 = ptd::sim();
#line 92
$memory_6 = ptd::sim();
#line 93
$memory_7 = ptd::sim();
#line 94
$memory_8 = ptd::sim();
#line 95
$memory_9 = ptd::none();
#line 96
$memory_10 = ptd::none();
#line 96
$memory_1 = {pm => $memory_2,nla => $memory_3,c => $memory_4,nl => $memory_5,ast => $memory_6,js => $memory_7,java => $memory_8,none => $memory_9,call_graph => $memory_10,};
#line 96
undef($memory_2);
#line 96
undef($memory_3);
#line 96
undef($memory_4);
#line 96
undef($memory_5);
#line 96
undef($memory_6);
#line 96
undef($memory_7);
#line 96
undef($memory_8);
#line 96
undef($memory_9);
#line 96
undef($memory_10);
#line 96
$memory_0 = ptd::var($memory_1);
#line 96
undef($memory_1);
#line 96
return $memory_0;
#line 96
undef($memory_0);
#line 96
return;
}

my $_destination_t;
sub compiler::destination_t() {
	$_destination_t = compiler::__destination_t() unless defined $_destination_t;
	return $_destination_t;
}

sub compiler::__module_t() {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;
#line 101
$memory_3 = ptd::sim();
#line 101
$memory_4 = {
	module => "compiler",
	name => "destination_t",
};
#line 101
$memory_4 = c_rt_lib::ov_mk_arg('ref', $memory_4);
#line 101
$memory_2 = {src => $memory_3,dst => $memory_4,};
#line 101
undef($memory_3);
#line 101
undef($memory_4);
#line 101
$memory_1 = ptd::rec($memory_2);
#line 101
undef($memory_2);
#line 101
$memory_0 = ptd::hash($memory_1);
#line 101
undef($memory_1);
#line 101
return $memory_0;
#line 101
undef($memory_0);
#line 101
return;
}

my $_module_t;
sub compiler::module_t() {
	$_module_t = compiler::__module_t() unless defined $_module_t;
	return $_module_t;
}

sub compiler::__deref_t() {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;
#line 105
$memory_2 = ptd::sim();
#line 105
$memory_3 = ptd::none();
#line 105
$memory_1 = {yes => $memory_2,no => $memory_3,};
#line 105
undef($memory_2);
#line 105
undef($memory_3);
#line 105
$memory_0 = ptd::var($memory_1);
#line 105
undef($memory_1);
#line 105
return $memory_0;
#line 105
undef($memory_0);
#line 105
return;
}

my $_deref_t;
sub compiler::deref_t() {
	$_deref_t = compiler::__deref_t() unless defined $_deref_t;
	return $_deref_t;
}

sub compiler::__try_t() {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;
#line 109
$memory_2 = ptd::sim();
#line 109
$memory_3 = ptd::sim();
#line 109
$memory_1 = {err => $memory_2,ok => $memory_3,};
#line 109
undef($memory_2);
#line 109
undef($memory_3);
#line 109
$memory_0 = ptd::var($memory_1);
#line 109
undef($memory_1);
#line 109
return $memory_0;
#line 109
undef($memory_0);
#line 109
return;
}

my $_try_t;
sub compiler::try_t() {
	$_try_t = compiler::__try_t() unless defined $_try_t;
	return $_try_t;
}

sub compiler::__input_type() {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;
#line 114
$memory_3 = ptd::sim();
#line 114
$memory_2 = ptd::arr($memory_3);
#line 114
undef($memory_3);
#line 115
$memory_3 = ptd::sim();
#line 116
$memory_4 = {
	module => "compiler",
	name => "deref_t",
};
#line 116
$memory_4 = c_rt_lib::ov_mk_arg('ref', $memory_4);
#line 118
$memory_7 = ptd::none();
#line 119
$memory_8 = ptd::none();
#line 120
$memory_9 = ptd::none();
#line 121
$memory_10 = ptd::none();
#line 122
$memory_11 = ptd::none();
#line 122
$memory_6 = {o0 => $memory_7,o1 => $memory_8,o2 => $memory_9,o3 => $memory_10,o4 => $memory_11,};
#line 122
undef($memory_7);
#line 122
undef($memory_8);
#line 122
undef($memory_9);
#line 122
undef($memory_10);
#line 122
undef($memory_11);
#line 122
$memory_5 = ptd::var($memory_6);
#line 122
undef($memory_6);
#line 124
$memory_6 = ptd::sim();
#line 125
$memory_9 = ptd::none();
#line 125
$memory_10 = ptd::none();
#line 125
$memory_11 = ptd::none();
#line 125
$memory_12 = ptd::sim();
#line 125
$memory_8 = {strict => $memory_9,exec => $memory_10,ide => $memory_11,idex => $memory_12,};
#line 125
undef($memory_9);
#line 125
undef($memory_10);
#line 125
undef($memory_11);
#line 125
undef($memory_12);
#line 125
$memory_7 = ptd::var($memory_8);
#line 125
undef($memory_8);
#line 126
$memory_8 = {
	module => "compiler",
	name => "language_t",
};
#line 126
$memory_8 = c_rt_lib::ov_mk_arg('ref', $memory_8);
#line 127
$memory_11 = ptd::none();
#line 127
$memory_12 = ptd::none();
#line 127
$memory_10 = {norm => $memory_11,wall => $memory_12,};
#line 127
undef($memory_11);
#line 127
undef($memory_12);
#line 127
$memory_9 = ptd::var($memory_10);
#line 127
undef($memory_10);
#line 128
$memory_10 = {
	module => "boolean_t",
	name => "type",
};
#line 128
$memory_10 = c_rt_lib::ov_mk_arg('ref', $memory_10);
#line 129
$memory_11 = {
	module => "boolean_t",
	name => "type",
};
#line 129
$memory_11 = c_rt_lib::ov_mk_arg('ref', $memory_11);
#line 129
$memory_1 = {input_path => $memory_2,cache_path => $memory_3,deref => $memory_4,optimization => $memory_5,math_fun => $memory_6,mode => $memory_7,language => $memory_8,alarm => $memory_9,check_public_fun => $memory_10,profile => $memory_11,};
#line 129
undef($memory_2);
#line 129
undef($memory_3);
#line 129
undef($memory_4);
#line 129
undef($memory_5);
#line 129
undef($memory_6);
#line 129
undef($memory_7);
#line 129
undef($memory_8);
#line 129
undef($memory_9);
#line 129
undef($memory_10);
#line 129
undef($memory_11);
#line 129
$memory_0 = ptd::rec($memory_1);
#line 129
undef($memory_1);
#line 129
return $memory_0;
#line 129
undef($memory_0);
#line 129
return;
}

my $_input_type;
sub compiler::input_type() {
	$_input_type = compiler::__input_type() unless defined $_input_type;
	return $_input_type;
}

sub compiler::__file_t() {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;
#line 134
$memory_2 = ptd::sim();
#line 134
$memory_3 = ptd::sim();
#line 134
$memory_1 = {ok => $memory_2,err => $memory_3,};
#line 134
undef($memory_2);
#line 134
undef($memory_3);
#line 134
$memory_0 = ptd::var($memory_1);
#line 134
undef($memory_1);
#line 134
return $memory_0;
#line 134
undef($memory_0);
#line 134
return;
}

my $_file_t;
sub compiler::file_t() {
	$_file_t = compiler::__file_t() unless defined $_file_t;
	return $_file_t;
}

sub compiler::compile($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;$memory_0 = $_[0];
#line 138
$memory_1 = compiler_priv::parse_command_line_args($memory_0);
#line 139
$memory_2 = $memory_1->{'cache_path'};
#line 139
c_fe_lib::mk_path($memory_2);
#line 139
undef($memory_2);
#line 140
$memory_2 = 0;
#line 141
$memory_3 = $memory_1->{'mode'};
#line 141
$memory_3 = c_rt_lib::ov_is($memory_3, 'strict');
#line 141
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 141
if (c_rt_lib::check_true($memory_3)) {goto label_16;}
#line 142
$memory_4 = "strict mode processing...";
#line 142
c_fe_lib::print($memory_4);
#line 142
undef($memory_4);
#line 143
$memory_4 = compiler_priv::compile_strict_file($memory_1);
#line 143
$memory_2 = $memory_4;
#line 143
undef($memory_4);
#line 144
goto label_47;
#line 144
label_16:
#line 144
$memory_3 = $memory_1->{'mode'};
#line 144
$memory_3 = c_rt_lib::ov_is($memory_3, 'ide');
#line 144
if (c_rt_lib::check_true($memory_3)) {goto label_22;}
#line 144
$memory_3 = $memory_1->{'mode'};
#line 144
$memory_3 = c_rt_lib::ov_is($memory_3, 'idex');
#line 144
label_22:
#line 144
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 144
if (c_rt_lib::check_true($memory_3)) {goto label_33;}
#line 145
$memory_4 = "ide mode processing...";
#line 145
c_fe_lib::print($memory_4);
#line 145
undef($memory_4);
#line 146
compiler_priv::compile_ide($memory_1);
#line 147
$memory_4 = 0;
#line 147
$memory_2 = $memory_4;
#line 147
undef($memory_4);
#line 148
goto label_47;
#line 148
label_33:
#line 148
$memory_3 = $memory_1->{'mode'};
#line 148
$memory_3 = c_rt_lib::ov_is($memory_3, 'exec');
#line 148
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 148
if (c_rt_lib::check_true($memory_3)) {goto label_42;}
#line 149
$memory_4 = compiler_priv::exec_interpreter($memory_1);
#line 149
$memory_2 = $memory_4;
#line 149
undef($memory_4);
#line 150
goto label_47;
#line 150
label_42:
#line 151
$memory_4 = [];
#line 151
die(dfile::ssave($memory_4));
#line 151
undef($memory_4);
#line 152
goto label_47;
#line 152
label_47:
#line 152
undef($memory_3);
#line 153
$memory_3 = $memory_1->{'profile'};
#line 153
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 153
if (c_rt_lib::check_true($memory_3)) {goto label_62;}
#line 154
$memory_4 = $memory_1->{'cache_path'};
#line 154
$memory_5 = "/profile";
#line 154
$memory_4 = $memory_4 . $memory_5;
#line 154
undef($memory_5);
#line 155
c_fe_lib::mk_path($memory_4);
#line 156
$memory_5 = compiler_priv::get_profile_file_name($memory_4);
#line 156
profile::save($memory_5);
#line 156
undef($memory_5);
#line 156
undef($memory_4);
#line 157
goto label_62;
#line 157
label_62:
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

sub compiler_priv::get_profile_file_name($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;$memory_0 = $_[0];
#line 162
$memory_1 = "/";
#line 162
$memory_1 = $memory_0 . $memory_1;
#line 163
$memory_3 = nsystem::time();
#line 163
$memory_2 = nsystem::localtime($memory_3);
#line 163
undef($memory_3);
#line 164
$memory_3 = nsystem::get_pid();
#line 165
$memory_4 = nsystem::time_microsec();
#line 166
$memory_5 = 5;
#line 166
$memory_6 = 0;
#line 166
$memory_7 = 1;
#line 166
label_10:
#line 166
$memory_8 = c_rt_lib::to_nl($memory_6 >= $memory_5);
#line 166
if (c_rt_lib::check_true($memory_8)) {goto label_24;}
#line 167
$memory_10 = $memory_2->[$memory_6];
#line 167
$memory_11 = 2;
#line 167
$memory_9 = string_utils::int2str($memory_10, $memory_11);
#line 167
undef($memory_11);
#line 167
undef($memory_10);
#line 167
$memory_10 = $memory_9;
#line 167
 if (c_rt_lib::get_arrcount($memory_2) > 1) {$memory_2 = [@{$memory_2}];}$memory_2->[$memory_6] = $memory_10;
#line 167
undef($memory_9);
#line 167
undef($memory_10);
#line 168
$memory_6 = $memory_6 + $memory_7;
#line 168
goto label_10;
#line 168
label_24:
#line 168
undef($memory_5);
#line 168
undef($memory_6);
#line 168
undef($memory_7);
#line 168
undef($memory_8);
#line 169
$memory_7 = 1;
#line 169
$memory_6 = $memory_4->[$memory_7];
#line 169
undef($memory_7);
#line 169
$memory_7 = 1000;
#line 169
$memory_6 = $memory_6 / $memory_7;
#line 169
undef($memory_7);
#line 169
$memory_7 = 3;
#line 169
$memory_5 = string_utils::int2str($memory_6, $memory_7);
#line 169
undef($memory_7);
#line 169
undef($memory_6);
#line 170
$memory_6 = "prof_";
#line 170
$memory_6 = $memory_1 . $memory_6;
#line 170
$memory_8 = 5;
#line 170
$memory_7 = $memory_2->[$memory_8];
#line 170
undef($memory_8);
#line 170
$memory_6 = $memory_6 . $memory_7;
#line 170
undef($memory_7);
#line 170
$memory_7 = "";
#line 170
$memory_6 = $memory_6 . $memory_7;
#line 170
undef($memory_7);
#line 170
$memory_8 = 4;
#line 170
$memory_7 = $memory_2->[$memory_8];
#line 170
undef($memory_8);
#line 170
$memory_6 = $memory_6 . $memory_7;
#line 170
undef($memory_7);
#line 170
$memory_7 = "";
#line 170
$memory_6 = $memory_6 . $memory_7;
#line 170
undef($memory_7);
#line 170
$memory_8 = 3;
#line 170
$memory_7 = $memory_2->[$memory_8];
#line 170
undef($memory_8);
#line 170
$memory_6 = $memory_6 . $memory_7;
#line 170
undef($memory_7);
#line 170
$memory_7 = "_";
#line 170
$memory_6 = $memory_6 . $memory_7;
#line 170
undef($memory_7);
#line 170
$memory_8 = 2;
#line 170
$memory_7 = $memory_2->[$memory_8];
#line 170
undef($memory_8);
#line 170
$memory_6 = $memory_6 . $memory_7;
#line 170
undef($memory_7);
#line 170
$memory_8 = 1;
#line 170
$memory_7 = $memory_2->[$memory_8];
#line 170
undef($memory_8);
#line 170
$memory_6 = $memory_6 . $memory_7;
#line 170
undef($memory_7);
#line 170
$memory_8 = 0;
#line 170
$memory_7 = $memory_2->[$memory_8];
#line 170
undef($memory_8);
#line 170
$memory_6 = $memory_6 . $memory_7;
#line 170
undef($memory_7);
#line 170
$memory_6 = $memory_6 . $memory_5;
#line 170
$memory_7 = "_";
#line 170
$memory_6 = $memory_6 . $memory_7;
#line 170
undef($memory_7);
#line 170
$memory_6 = $memory_6 . $memory_3;
#line 171
$memory_7 = ".txt";
#line 171
$memory_6 = $memory_6 . $memory_7;
#line 171
undef($memory_7);
#line 171
undef($memory_0);
#line 171
undef($memory_1);
#line 171
undef($memory_2);
#line 171
undef($memory_3);
#line 171
undef($memory_4);
#line 171
undef($memory_5);
#line 171
return $memory_6;
#line 171
undef($memory_6);
#line 171
undef($memory_1);
#line 171
undef($memory_2);
#line 171
undef($memory_3);
#line 171
undef($memory_4);
#line 171
undef($memory_5);
#line 171
undef($memory_0);
#line 171
return;
}

sub compiler_priv::__get_known_func() {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;
#line 175
$memory_0 = {};
#line 176
$memory_1 = "nl::print";
#line 176
$memory_3 = {
	module => "nl",
	name => "print",
};
#line 176
$memory_3 = c_rt_lib::ov_mk_arg('ref', $memory_3);
#line 176
$memory_4 = c_rt_lib::ov_mk_none('sequential');
#line 176
$memory_6 = ptd::sim();
#line 176
$memory_5 = [$memory_6];
#line 176
undef($memory_6);
#line 176
$memory_6 = c_rt_lib::ov_mk_none('no');
#line 176
$memory_2 = {func => $memory_3,type => $memory_4,args => $memory_5,return => $memory_6,};
#line 176
undef($memory_3);
#line 176
undef($memory_4);
#line 176
undef($memory_5);
#line 176
undef($memory_6);
#line 176
hash::set_value($memory_0, $memory_1, $memory_2);
#line 176
undef($memory_2);
#line 176
undef($memory_1);
#line 177
return $memory_0;
#line 177
undef($memory_0);
#line 177
return;
}

my $_get_known_func;
sub compiler_priv::get_known_func() {
	$_get_known_func = compiler_priv::__get_known_func() unless defined $_get_known_func;
	return $_get_known_func;
}

sub compiler_priv::exec_interpreter($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;my $memory_13;my $memory_14;my $memory_15;my $memory_16;my $memory_17;my $memory_18;my $memory_19;$memory_0 = $_[0];
#line 181
$memory_1 = {};
#line 183
$memory_3 = {};
#line 184
$memory_4 = {};
#line 185
$memory_5 = {};
#line 186
$memory_6 = {};
#line 187
$memory_7 = c_rt_lib::ov_mk_none('ok');
#line 187
$memory_2 = {module_errors => $memory_3,module_warnings => $memory_4,type_errors => $memory_5,type_warnings => $memory_6,loop_error => $memory_7,};
#line 187
undef($memory_3);
#line 187
undef($memory_4);
#line 187
undef($memory_5);
#line 187
undef($memory_6);
#line 187
undef($memory_7);
#line 189
$memory_3 = 0;
#line 190
$memory_4 = compiler_priv::get_files_to_parse($memory_0);
#line 191
$memory_7 = c_rt_lib::init_iter($memory_4);
#line 191
label_15:
#line 191
$memory_5 = c_rt_lib::is_end_hash($memory_7);
#line 191
if (c_rt_lib::check_true($memory_5)) {goto label_47;}
#line 191
$memory_5 = c_rt_lib::get_key_iter($memory_7);
#line 191
$memory_6 = c_rt_lib::hash_get_value($memory_4, $memory_5);
#line 192
$memory_9 = $memory_6->{'src'};
#line 192
$memory_8 = compiler_priv::parse_module($memory_5, $memory_9, $memory_2);
#line 192
undef($memory_9);
#line 192
$memory_9 = c_rt_lib::ov_is($memory_8, 'ok');
#line 192
if (c_rt_lib::check_true($memory_9)) {goto label_30;}
#line 194
$memory_9 = c_rt_lib::ov_is($memory_8, 'err');
#line 194
if (c_rt_lib::check_true($memory_9)) {goto label_35;}
#line 194
$memory_9 = "NOMATCHALERT";
#line 194
$memory_9 = [$memory_9,$memory_8];
#line 194
die(dfile::ssave($memory_9));
#line 192
label_30:
#line 192
$memory_10 = c_rt_lib::ov_as($memory_8, 'ok');
#line 193
hash::set_value($memory_1, $memory_5, $memory_10);
#line 193
undef($memory_10);
#line 194
goto label_42;
#line 194
label_35:
#line 194
$memory_10 = c_rt_lib::ov_as($memory_8, 'err');
#line 195
$memory_11 = 1;
#line 195
$memory_3 = $memory_3 + $memory_11;
#line 195
undef($memory_11);
#line 195
undef($memory_10);
#line 196
goto label_42;
#line 196
label_42:
#line 196
undef($memory_8);
#line 196
undef($memory_9);
#line 197
$memory_7 = c_rt_lib::next_iter($memory_7);
#line 197
goto label_15;
#line 197
label_47:
#line 197
undef($memory_5);
#line 197
undef($memory_6);
#line 197
undef($memory_7);
#line 198
$memory_5 = 0;
#line 198
$memory_5 = c_rt_lib::to_nl($memory_3 != $memory_5);
#line 198
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 198
if (c_rt_lib::check_true($memory_5)) {goto label_68;}
#line 199
$memory_6 = {};
#line 199
compiler_priv::show_and_count_errors($memory_2, $memory_0, $memory_6);
#line 199
undef($memory_6);
#line 200
$memory_6 = 1;
#line 200
undef($memory_0);
#line 200
undef($memory_1);
#line 200
undef($memory_2);
#line 200
undef($memory_3);
#line 200
undef($memory_4);
#line 200
undef($memory_5);
#line 200
return $memory_6;
#line 200
undef($memory_6);
#line 201
goto label_68;
#line 201
label_68:
#line 201
undef($memory_5);
#line 202
$memory_5 = $memory_0->{'deref'};
#line 202
$memory_6 = $memory_0->{'check_public_fun'};
#line 202
compiler_priv::check_modules($memory_1, $memory_2, $memory_5, $memory_6);
#line 202
undef($memory_6);
#line 202
undef($memory_5);
#line 203
$memory_6 = {};
#line 203
$memory_5 = compiler_priv::show_and_count_errors($memory_2, $memory_0, $memory_6);
#line 203
undef($memory_6);
#line 203
$memory_6 = 0;
#line 203
$memory_5 = c_rt_lib::to_nl($memory_5 > $memory_6);
#line 203
undef($memory_6);
#line 203
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 203
if (c_rt_lib::check_true($memory_5)) {goto label_93;}
#line 204
$memory_6 = 1;
#line 204
undef($memory_0);
#line 204
undef($memory_1);
#line 204
undef($memory_2);
#line 204
undef($memory_3);
#line 204
undef($memory_4);
#line 204
undef($memory_5);
#line 204
return $memory_6;
#line 204
undef($memory_6);
#line 205
goto label_93;
#line 205
label_93:
#line 205
undef($memory_5);
#line 206
$memory_6 = {};
#line 206
$memory_7 = $memory_0->{'optimization'};
#line 206
$memory_5 = post_processing::init($memory_6, $memory_7);
#line 206
undef($memory_7);
#line 206
undef($memory_6);
#line 207
$memory_6 = compiler_priv::translate($memory_1, $memory_5);
#line 208
$memory_7 = [];
#line 209
$memory_8 = "";
#line 210
$memory_11 = c_rt_lib::init_iter($memory_6);
#line 210
label_104:
#line 210
$memory_9 = c_rt_lib::is_end_hash($memory_11);
#line 210
if (c_rt_lib::check_true($memory_9)) {goto label_139;}
#line 210
$memory_9 = c_rt_lib::get_key_iter($memory_11);
#line 210
$memory_10 = c_rt_lib::hash_get_value($memory_6, $memory_9);
#line 211
$memory_12 = $memory_10->{'functions'};
#line 211
$memory_14 = 0;
#line 211
$memory_15 = 1;
#line 211
$memory_16 = c_rt_lib::array_len($memory_12);
#line 211
label_113:
#line 211
$memory_17 = c_rt_lib::to_nl($memory_14 >= $memory_16);
#line 211
if (c_rt_lib::check_true($memory_17)) {goto label_129;}
#line 211
$memory_13 = $memory_12->[$memory_14];
#line 212
$memory_18 = $memory_13->{'name'};
#line 212
$memory_19 = "main";
#line 212
$memory_18 = c_rt_lib::to_nl($memory_18 eq $memory_19);
#line 212
undef($memory_19);
#line 212
$memory_18 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_18));
#line 212
if (c_rt_lib::check_true($memory_18)) {goto label_125;}
#line 213
$memory_8 = $memory_9;
#line 214
goto label_125;
#line 214
label_125:
#line 214
undef($memory_18);
#line 215
$memory_14 = $memory_14 + $memory_15;
#line 215
goto label_113;
#line 215
label_129:
#line 215
undef($memory_12);
#line 215
undef($memory_13);
#line 215
undef($memory_14);
#line 215
undef($memory_15);
#line 215
undef($memory_16);
#line 215
undef($memory_17);
#line 216
array::push($memory_7, $memory_10);
#line 217
$memory_11 = c_rt_lib::next_iter($memory_11);
#line 217
goto label_104;
#line 217
label_139:
#line 217
undef($memory_9);
#line 217
undef($memory_10);
#line 217
undef($memory_11);
#line 218
$memory_10 = compiler_priv::get_known_func();
#line 218
$memory_9 = interpreter::init($memory_7, $memory_10);
#line 218
undef($memory_10);
#line 219
$memory_12 = "main";
#line 219
$memory_11 = interpreter::start($memory_9, $memory_12, $memory_8);
#line 219
undef($memory_12);
#line 219
$memory_10 = c_rt_lib::ov_is($memory_11, 'ok');
#line 219
if (c_rt_lib::check_true($memory_10)) {goto label_153;}
#line 219
$memory_11 = c_rt_lib::ov_mk_arg('ensure', $memory_11);
#line 219
die(dfile::ssave($memory_11));
#line 219
label_153:
#line 219
undef($memory_10);
#line 219
undef($memory_11);
#line 220
$memory_11 = interpreter::exec_all_code($memory_9);
#line 220
$memory_10 = c_rt_lib::ov_is($memory_11, 'ok');
#line 220
if (c_rt_lib::check_true($memory_10)) {goto label_161;}
#line 220
$memory_11 = c_rt_lib::ov_mk_arg('ensure', $memory_11);
#line 220
die(dfile::ssave($memory_11));
#line 220
label_161:
#line 220
undef($memory_10);
#line 220
undef($memory_11);
#line 221
$memory_10 = 0;
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
undef($memory_9);
#line 221
return $memory_10;
#line 221
undef($memory_10);
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
undef($memory_9);
#line 221
undef($memory_0);
#line 221
return;
}

sub compiler_priv::get_module_name($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;$memory_0 = $_[0];
#line 225
$memory_1 = string::length($memory_0);
#line 225
$memory_2 = 1;
#line 225
$memory_1 = $memory_1 - $memory_2;
#line 225
undef($memory_2);
#line 226
label_4:
#line 226
$memory_2 = 0;
#line 226
$memory_2 = c_rt_lib::to_nl($memory_1 >= $memory_2);
#line 226
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 226
if (c_rt_lib::check_true($memory_4)) {goto label_15;}
#line 226
$memory_5 = 1;
#line 226
$memory_2 = string::substr($memory_0, $memory_1, $memory_5);
#line 226
undef($memory_5);
#line 226
$memory_5 = "/";
#line 226
$memory_2 = c_rt_lib::to_nl($memory_2 ne $memory_5);
#line 226
undef($memory_5);
#line 226
label_15:
#line 226
undef($memory_4);
#line 226
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 226
if (c_rt_lib::check_true($memory_3)) {goto label_25;}
#line 226
$memory_4 = 1;
#line 226
$memory_2 = string::substr($memory_0, $memory_1, $memory_4);
#line 226
undef($memory_4);
#line 226
$memory_4 = "\\";
#line 226
$memory_2 = c_rt_lib::to_nl($memory_2 ne $memory_4);
#line 226
undef($memory_4);
#line 226
label_25:
#line 226
undef($memory_3);
#line 226
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 226
if (c_rt_lib::check_true($memory_2)) {goto label_49;}
#line 227
$memory_4 = 1;
#line 227
$memory_3 = string::substr($memory_0, $memory_1, $memory_4);
#line 227
undef($memory_4);
#line 227
$memory_4 = ".";
#line 227
$memory_3 = c_rt_lib::to_nl($memory_3 eq $memory_4);
#line 227
undef($memory_4);
#line 227
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 227
if (c_rt_lib::check_true($memory_3)) {goto label_43;}
#line 228
$memory_4 = 1;
#line 228
$memory_1 = $memory_1 - $memory_4;
#line 228
undef($memory_4);
#line 229
undef($memory_3);
#line 229
goto label_49;
#line 230
goto label_43;
#line 230
label_43:
#line 230
undef($memory_3);
#line 231
$memory_3 = 1;
#line 231
$memory_1 = $memory_1 - $memory_3;
#line 231
undef($memory_3);
#line 232
goto label_4;
#line 232
label_49:
#line 232
undef($memory_2);
#line 233
$memory_2 = "";
#line 234
label_52:
#line 234
$memory_3 = 0;
#line 234
$memory_3 = c_rt_lib::to_nl($memory_1 >= $memory_3);
#line 234
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 234
if (c_rt_lib::check_true($memory_5)) {goto label_63;}
#line 234
$memory_6 = 1;
#line 234
$memory_3 = string::substr($memory_0, $memory_1, $memory_6);
#line 234
undef($memory_6);
#line 234
$memory_6 = "/";
#line 234
$memory_3 = c_rt_lib::to_nl($memory_3 ne $memory_6);
#line 234
undef($memory_6);
#line 234
label_63:
#line 234
undef($memory_5);
#line 234
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 234
if (c_rt_lib::check_true($memory_4)) {goto label_73;}
#line 234
$memory_5 = 1;
#line 234
$memory_3 = string::substr($memory_0, $memory_1, $memory_5);
#line 234
undef($memory_5);
#line 234
$memory_5 = "\\";
#line 234
$memory_3 = c_rt_lib::to_nl($memory_3 ne $memory_5);
#line 234
undef($memory_5);
#line 234
label_73:
#line 234
undef($memory_4);
#line 234
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 234
if (c_rt_lib::check_true($memory_3)) {goto label_87;}
#line 235
$memory_5 = 1;
#line 235
$memory_4 = string::substr($memory_0, $memory_1, $memory_5);
#line 235
undef($memory_5);
#line 235
$memory_4 = $memory_4 . $memory_2;
#line 235
$memory_2 = $memory_4;
#line 235
undef($memory_4);
#line 236
$memory_4 = 1;
#line 236
$memory_1 = $memory_1 - $memory_4;
#line 236
undef($memory_4);
#line 237
goto label_52;
#line 237
label_87:
#line 237
undef($memory_3);
#line 238
undef($memory_0);
#line 238
undef($memory_1);
#line 238
return $memory_2;
#line 238
undef($memory_1);
#line 238
undef($memory_2);
#line 238
undef($memory_0);
#line 238
return;
}

sub compiler_priv::has_extension($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;$memory_0 = $_[0];$memory_1 = $_[1];
#line 242
$memory_2 = string::length($memory_1);
#line 243
$memory_3 = string::length($memory_0);
#line 243
$memory_3 = c_rt_lib::to_nl($memory_3 <= $memory_2);
#line 243
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 243
if (c_rt_lib::check_true($memory_3)) {goto label_13;}
#line 243
$memory_4 = c_rt_lib::to_nl(0);
#line 243
undef($memory_0);
#line 243
undef($memory_1);
#line 243
undef($memory_2);
#line 243
undef($memory_3);
#line 243
return $memory_4;
#line 243
undef($memory_4);
#line 243
goto label_13;
#line 243
label_13:
#line 243
undef($memory_3);
#line 244
$memory_4 = string::length($memory_0);
#line 244
$memory_4 = $memory_4 - $memory_2;
#line 244
$memory_3 = string::substr($memory_0, $memory_4, $memory_2);
#line 244
undef($memory_4);
#line 244
$memory_2 = $memory_3;
#line 244
undef($memory_3);
#line 245
$memory_3 = c_rt_lib::to_nl($memory_2 eq $memory_1);
#line 245
undef($memory_0);
#line 245
undef($memory_1);
#line 245
undef($memory_2);
#line 245
return $memory_3;
#line 245
undef($memory_3);
#line 245
undef($memory_2);
#line 245
undef($memory_0);
#line 245
undef($memory_1);
#line 245
return;
}

sub compiler_priv::get_generator_state($) {
my $memory_0;my $memory_1;$memory_0 = $_[0];
#line 250
$memory_1 = generator_c::get_empty_state();
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

sub compiler_priv::get_out_ext($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;$memory_0 = $_[0];
#line 254
$memory_1 = c_rt_lib::ov_is($memory_0, 'pm');
#line 254
if (c_rt_lib::check_true($memory_1)) {goto label_19;}
#line 256
$memory_1 = c_rt_lib::ov_is($memory_0, 'nla');
#line 256
if (c_rt_lib::check_true($memory_1)) {goto label_26;}
#line 258
$memory_1 = c_rt_lib::ov_is($memory_0, 'c');
#line 258
if (c_rt_lib::check_true($memory_1)) {goto label_33;}
#line 260
$memory_1 = c_rt_lib::ov_is($memory_0, 'ast');
#line 260
if (c_rt_lib::check_true($memory_1)) {goto label_40;}
#line 262
$memory_1 = c_rt_lib::ov_is($memory_0, 'nl');
#line 262
if (c_rt_lib::check_true($memory_1)) {goto label_47;}
#line 264
$memory_1 = c_rt_lib::ov_is($memory_0, 'js');
#line 264
if (c_rt_lib::check_true($memory_1)) {goto label_54;}
#line 266
$memory_1 = c_rt_lib::ov_is($memory_0, 'java');
#line 266
if (c_rt_lib::check_true($memory_1)) {goto label_64;}
#line 268
$memory_1 = c_rt_lib::ov_is($memory_0, 'call_graph');
#line 268
if (c_rt_lib::check_true($memory_1)) {goto label_71;}
#line 268
$memory_1 = "NOMATCHALERT";
#line 268
$memory_1 = [$memory_1,$memory_0];
#line 268
die(dfile::ssave($memory_1));
#line 254
label_19:
#line 255
$memory_2 = ".pm";
#line 255
undef($memory_0);
#line 255
undef($memory_1);
#line 255
return $memory_2;
#line 255
undef($memory_2);
#line 256
goto label_78;
#line 256
label_26:
#line 257
$memory_2 = ".nla";
#line 257
undef($memory_0);
#line 257
undef($memory_1);
#line 257
return $memory_2;
#line 257
undef($memory_2);
#line 258
goto label_78;
#line 258
label_33:
#line 259
$memory_2 = ".c";
#line 259
undef($memory_0);
#line 259
undef($memory_1);
#line 259
return $memory_2;
#line 259
undef($memory_2);
#line 260
goto label_78;
#line 260
label_40:
#line 261
$memory_2 = ".ast";
#line 261
undef($memory_0);
#line 261
undef($memory_1);
#line 261
return $memory_2;
#line 261
undef($memory_2);
#line 262
goto label_78;
#line 262
label_47:
#line 263
$memory_2 = ".nl";
#line 263
undef($memory_0);
#line 263
undef($memory_1);
#line 263
return $memory_2;
#line 263
undef($memory_2);
#line 264
goto label_78;
#line 264
label_54:
#line 264
$memory_2 = c_rt_lib::ov_as($memory_0, 'js');
#line 265
$memory_3 = ".js";
#line 265
undef($memory_0);
#line 265
undef($memory_1);
#line 265
undef($memory_2);
#line 265
return $memory_3;
#line 265
undef($memory_3);
#line 265
undef($memory_2);
#line 266
goto label_78;
#line 266
label_64:
#line 267
$memory_2 = ".java";
#line 267
undef($memory_0);
#line 267
undef($memory_1);
#line 267
return $memory_2;
#line 267
undef($memory_2);
#line 268
goto label_78;
#line 268
label_71:
#line 269
$memory_2 = "_call_graph.df";
#line 269
undef($memory_0);
#line 269
undef($memory_1);
#line 269
return $memory_2;
#line 269
undef($memory_2);
#line 270
goto label_78;
#line 270
label_78:
#line 270
undef($memory_1);
#line 270
undef($memory_0);
#line 270
return;
}

sub compiler_priv::mk_path($$) {
my $memory_0;my $memory_1;my $memory_2;$memory_0 = $_[0];$memory_1 = $_[1];
#line 274
$memory_2 = ".";
#line 274
$memory_2 = c_rt_lib::to_nl($memory_1 eq $memory_2);
#line 274
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 274
if (c_rt_lib::check_true($memory_2)) {goto label_9;}
#line 274
undef($memory_0);
#line 274
undef($memory_1);
#line 274
undef($memory_2);
#line 274
return;
#line 274
goto label_9;
#line 274
label_9:
#line 274
undef($memory_2);
#line 275
$memory_2 = compiler_priv::get_dir($memory_1);
#line 275
compiler_priv::mk_path($memory_0, $memory_2);
#line 275
undef($memory_2);
#line 276
$memory_2 = $memory_0 . $memory_1;
#line 276
c_fe_lib::mk_path($memory_2);
#line 276
undef($memory_2);
#line 276
undef($memory_0);
#line 276
undef($memory_1);
#line 276
return;
}

sub compiler_priv::mk_path_module($$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;$memory_0 = $_[0];$memory_1 = $_[1];$memory_2 = $_[2];
#line 281
$memory_3 = $memory_2->{'cache_path'};
#line 281
$memory_3 = $memory_3 . $memory_1;
#line 282
$memory_4 = $memory_0->{'file'};
#line 283
$memory_5 = $memory_2->{'language'};
#line 283
$memory_6 = c_rt_lib::ov_is($memory_5, 'pm');
#line 283
if (c_rt_lib::check_true($memory_6)) {goto label_23;}
#line 285
$memory_6 = c_rt_lib::ov_is($memory_5, 'nla');
#line 285
if (c_rt_lib::check_true($memory_6)) {goto label_39;}
#line 287
$memory_6 = c_rt_lib::ov_is($memory_5, 'c');
#line 287
if (c_rt_lib::check_true($memory_6)) {goto label_55;}
#line 289
$memory_6 = c_rt_lib::ov_is($memory_5, 'nl');
#line 289
if (c_rt_lib::check_true($memory_6)) {goto label_76;}
#line 297
$memory_6 = c_rt_lib::ov_is($memory_5, 'ast');
#line 297
if (c_rt_lib::check_true($memory_6)) {goto label_123;}
#line 299
$memory_6 = c_rt_lib::ov_is($memory_5, 'js');
#line 299
if (c_rt_lib::check_true($memory_6)) {goto label_139;}
#line 301
$memory_6 = c_rt_lib::ov_is($memory_5, 'java');
#line 301
if (c_rt_lib::check_true($memory_6)) {goto label_158;}
#line 303
$memory_6 = c_rt_lib::ov_is($memory_5, 'call_graph');
#line 303
if (c_rt_lib::check_true($memory_6)) {goto label_174;}
#line 303
$memory_6 = "NOMATCHALERT";
#line 303
$memory_6 = [$memory_6,$memory_5];
#line 303
die(dfile::ssave($memory_6));
#line 283
label_23:
#line 284
$memory_8 = ".pm";
#line 284
$memory_8 = $memory_3 . $memory_8;
#line 284
$memory_8 = c_rt_lib::ov_mk_arg('pm', $memory_8);
#line 284
$memory_7 = {src => $memory_4,dst => $memory_8,};
#line 284
undef($memory_8);
#line 284
undef($memory_0);
#line 284
undef($memory_1);
#line 284
undef($memory_2);
#line 284
undef($memory_3);
#line 284
undef($memory_4);
#line 284
undef($memory_5);
#line 284
undef($memory_6);
#line 284
return $memory_7;
#line 284
undef($memory_7);
#line 285
goto label_188;
#line 285
label_39:
#line 286
$memory_8 = ".nla";
#line 286
$memory_8 = $memory_3 . $memory_8;
#line 286
$memory_8 = c_rt_lib::ov_mk_arg('nla', $memory_8);
#line 286
$memory_7 = {src => $memory_4,dst => $memory_8,};
#line 286
undef($memory_8);
#line 286
undef($memory_0);
#line 286
undef($memory_1);
#line 286
undef($memory_2);
#line 286
undef($memory_3);
#line 286
undef($memory_4);
#line 286
undef($memory_5);
#line 286
undef($memory_6);
#line 286
return $memory_7;
#line 286
undef($memory_7);
#line 287
goto label_188;
#line 287
label_55:
#line 288
$memory_9 = ".c";
#line 288
$memory_9 = $memory_3 . $memory_9;
#line 288
$memory_10 = ".h";
#line 288
$memory_10 = $memory_3 . $memory_10;
#line 288
$memory_8 = {c => $memory_9,h => $memory_10,};
#line 288
undef($memory_9);
#line 288
undef($memory_10);
#line 288
$memory_8 = c_rt_lib::ov_mk_arg('c', $memory_8);
#line 288
$memory_7 = {src => $memory_4,dst => $memory_8,};
#line 288
undef($memory_8);
#line 288
undef($memory_0);
#line 288
undef($memory_1);
#line 288
undef($memory_2);
#line 288
undef($memory_3);
#line 288
undef($memory_4);
#line 288
undef($memory_5);
#line 288
undef($memory_6);
#line 288
return $memory_7;
#line 288
undef($memory_7);
#line 289
goto label_188;
#line 289
label_76:
#line 290
$memory_8 = $memory_0->{'dir'};
#line 290
$memory_7 = string::length($memory_8);
#line 290
undef($memory_8);
#line 291
$memory_8 = compiler_priv::get_dir($memory_4);
#line 292
$memory_9 = $memory_2->{'cache_path'};
#line 292
$memory_9 = $memory_9 . $memory_8;
#line 292
$memory_10 = "/";
#line 292
$memory_9 = $memory_9 . $memory_10;
#line 292
undef($memory_10);
#line 292
$memory_9 = $memory_9 . $memory_1;
#line 292
$memory_3 = $memory_9;
#line 292
undef($memory_9);
#line 293
$memory_9 = string::length($memory_8);
#line 293
$memory_9 = c_rt_lib::to_nl($memory_7 < $memory_9);
#line 293
$memory_9 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_9));
#line 293
if (c_rt_lib::check_true($memory_9)) {goto label_102;}
#line 294
$memory_10 = $memory_2->{'cache_path'};
#line 294
$memory_12 = 1;
#line 294
$memory_12 = $memory_7 + $memory_12;
#line 294
$memory_11 = string::substr2($memory_8, $memory_12);
#line 294
undef($memory_12);
#line 294
compiler_priv::mk_path($memory_10, $memory_11);
#line 294
undef($memory_11);
#line 294
undef($memory_10);
#line 295
goto label_102;
#line 295
label_102:
#line 295
undef($memory_9);
#line 296
$memory_10 = ".nl";
#line 296
$memory_10 = $memory_3 . $memory_10;
#line 296
$memory_10 = c_rt_lib::ov_mk_arg('nl', $memory_10);
#line 296
$memory_9 = {src => $memory_4,dst => $memory_10,};
#line 296
undef($memory_10);
#line 296
undef($memory_0);
#line 296
undef($memory_1);
#line 296
undef($memory_2);
#line 296
undef($memory_3);
#line 296
undef($memory_4);
#line 296
undef($memory_5);
#line 296
undef($memory_6);
#line 296
undef($memory_7);
#line 296
undef($memory_8);
#line 296
return $memory_9;
#line 296
undef($memory_9);
#line 296
undef($memory_7);
#line 296
undef($memory_8);
#line 297
goto label_188;
#line 297
label_123:
#line 298
$memory_8 = ".ast";
#line 298
$memory_8 = $memory_3 . $memory_8;
#line 298
$memory_8 = c_rt_lib::ov_mk_arg('ast', $memory_8);
#line 298
$memory_7 = {src => $memory_4,dst => $memory_8,};
#line 298
undef($memory_8);
#line 298
undef($memory_0);
#line 298
undef($memory_1);
#line 298
undef($memory_2);
#line 298
undef($memory_3);
#line 298
undef($memory_4);
#line 298
undef($memory_5);
#line 298
undef($memory_6);
#line 298
return $memory_7;
#line 298
undef($memory_7);
#line 299
goto label_188;
#line 299
label_139:
#line 299
$memory_7 = c_rt_lib::ov_as($memory_5, 'js');
#line 300
$memory_9 = ".js";
#line 300
$memory_9 = $memory_3 . $memory_9;
#line 300
$memory_9 = c_rt_lib::ov_mk_arg('js', $memory_9);
#line 300
$memory_8 = {src => $memory_4,dst => $memory_9,};
#line 300
undef($memory_9);
#line 300
undef($memory_0);
#line 300
undef($memory_1);
#line 300
undef($memory_2);
#line 300
undef($memory_3);
#line 300
undef($memory_4);
#line 300
undef($memory_5);
#line 300
undef($memory_6);
#line 300
undef($memory_7);
#line 300
return $memory_8;
#line 300
undef($memory_8);
#line 300
undef($memory_7);
#line 301
goto label_188;
#line 301
label_158:
#line 302
$memory_8 = "_NL.java";
#line 302
$memory_8 = $memory_3 . $memory_8;
#line 302
$memory_8 = c_rt_lib::ov_mk_arg('java', $memory_8);
#line 302
$memory_7 = {src => $memory_4,dst => $memory_8,};
#line 302
undef($memory_8);
#line 302
undef($memory_0);
#line 302
undef($memory_1);
#line 302
undef($memory_2);
#line 302
undef($memory_3);
#line 302
undef($memory_4);
#line 302
undef($memory_5);
#line 302
undef($memory_6);
#line 302
return $memory_7;
#line 302
undef($memory_7);
#line 303
goto label_188;
#line 303
label_174:
#line 304
$memory_8 = c_rt_lib::ov_mk_none('call_graph');
#line 304
$memory_7 = {src => $memory_4,dst => $memory_8,};
#line 304
undef($memory_8);
#line 304
undef($memory_0);
#line 304
undef($memory_1);
#line 304
undef($memory_2);
#line 304
undef($memory_3);
#line 304
undef($memory_4);
#line 304
undef($memory_5);
#line 304
undef($memory_6);
#line 304
return $memory_7;
#line 304
undef($memory_7);
#line 305
goto label_188;
#line 305
label_188:
#line 305
undef($memory_5);
#line 305
undef($memory_6);
#line 305
undef($memory_3);
#line 305
undef($memory_4);
#line 305
undef($memory_0);
#line 305
undef($memory_1);
#line 305
undef($memory_2);
#line 305
return;
}

sub compiler_priv::get_all_nianio_file($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;$memory_0 = $_[0];
#line 309
$memory_1 = [];
#line 310
$memory_4 = ptd::sim();
#line 310
$memory_3 = ptd::arr($memory_4);
#line 310
undef($memory_4);
#line 310
$memory_4 = c_fe_lib::get_module_files_rec($memory_0);
#line 310
$memory_2 = ptd::ensure($memory_3, $memory_4);
#line 310
undef($memory_4);
#line 310
undef($memory_3);
#line 311
$memory_4 = 0;
#line 311
$memory_5 = 1;
#line 311
$memory_6 = c_rt_lib::array_len($memory_2);
#line 311
label_11:
#line 311
$memory_7 = c_rt_lib::to_nl($memory_4 >= $memory_6);
#line 311
if (c_rt_lib::check_true($memory_7)) {goto label_26;}
#line 311
$memory_3 = $memory_2->[$memory_4];
#line 312
$memory_9 = ".nl";
#line 312
$memory_8 = compiler_priv::has_extension($memory_3, $memory_9);
#line 312
undef($memory_9);
#line 312
$memory_8 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 312
if (c_rt_lib::check_true($memory_8)) {goto label_22;}
#line 312
array::push($memory_1, $memory_3);
#line 312
goto label_22;
#line 312
label_22:
#line 312
undef($memory_8);
#line 313
$memory_4 = $memory_4 + $memory_5;
#line 313
goto label_11;
#line 313
label_26:
#line 313
undef($memory_3);
#line 313
undef($memory_4);
#line 313
undef($memory_5);
#line 313
undef($memory_6);
#line 313
undef($memory_7);
#line 314
undef($memory_0);
#line 314
undef($memory_2);
#line 314
return $memory_1;
#line 314
undef($memory_1);
#line 314
undef($memory_2);
#line 314
undef($memory_0);
#line 314
return;
}

sub compiler_priv::get_files_to_parse($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;my $memory_13;my $memory_14;my $memory_15;my $memory_16;$memory_0 = $_[0];
#line 318
$memory_1 = $memory_0->{'cache_path'};
#line 319
$memory_2 = [];
#line 320
$memory_3 = $memory_0->{'input_path'};
#line 320
$memory_5 = 0;
#line 320
$memory_6 = 1;
#line 320
$memory_7 = c_rt_lib::array_len($memory_3);
#line 320
label_6:
#line 320
$memory_8 = c_rt_lib::to_nl($memory_5 >= $memory_7);
#line 320
if (c_rt_lib::check_true($memory_8)) {goto label_47;}
#line 320
$memory_4 = $memory_3->[$memory_5];
#line 321
$memory_10 = ".nl";
#line 321
$memory_9 = compiler_priv::has_extension($memory_4, $memory_10);
#line 321
undef($memory_10);
#line 321
$memory_9 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_9));
#line 321
if (c_rt_lib::check_true($memory_9)) {goto label_21;}
#line 322
$memory_11 = compiler_priv::get_dir($memory_4);
#line 322
$memory_10 = {dir => $memory_11,file => $memory_4,};
#line 322
undef($memory_11);
#line 322
array::push($memory_2, $memory_10);
#line 322
undef($memory_10);
#line 323
goto label_43;
#line 323
label_21:
#line 324
$memory_10 = compiler_priv::get_all_nianio_file($memory_4);
#line 324
$memory_12 = 0;
#line 324
$memory_13 = 1;
#line 324
$memory_14 = c_rt_lib::array_len($memory_10);
#line 324
label_26:
#line 324
$memory_15 = c_rt_lib::to_nl($memory_12 >= $memory_14);
#line 324
if (c_rt_lib::check_true($memory_15)) {goto label_35;}
#line 324
$memory_11 = $memory_10->[$memory_12];
#line 325
$memory_16 = {dir => $memory_4,file => $memory_11,};
#line 325
array::push($memory_2, $memory_16);
#line 325
undef($memory_16);
#line 326
$memory_12 = $memory_12 + $memory_13;
#line 326
goto label_26;
#line 326
label_35:
#line 326
undef($memory_10);
#line 326
undef($memory_11);
#line 326
undef($memory_12);
#line 326
undef($memory_13);
#line 326
undef($memory_14);
#line 326
undef($memory_15);
#line 327
goto label_43;
#line 327
label_43:
#line 327
undef($memory_9);
#line 328
$memory_5 = $memory_5 + $memory_6;
#line 328
goto label_6;
#line 328
label_47:
#line 328
undef($memory_3);
#line 328
undef($memory_4);
#line 328
undef($memory_5);
#line 328
undef($memory_6);
#line 328
undef($memory_7);
#line 328
undef($memory_8);
#line 329
$memory_4 = $memory_0->{'language'};
#line 329
$memory_3 = compiler_priv::get_out_ext($memory_4);
#line 329
undef($memory_4);
#line 330
$memory_4 = {};
#line 331
$memory_5 = c_fe_lib::get_module_files($memory_1);
#line 331
$memory_6 = c_rt_lib::ov_is($memory_5, 'ok');
#line 331
if (c_rt_lib::check_true($memory_6)) {goto label_66;}
#line 336
$memory_6 = c_rt_lib::ov_is($memory_5, 'err');
#line 336
if (c_rt_lib::check_true($memory_6)) {goto label_104;}
#line 336
$memory_6 = "NOMATCHALERT";
#line 336
$memory_6 = [$memory_6,$memory_5];
#line 336
die(dfile::ssave($memory_6));
#line 331
label_66:
#line 331
$memory_7 = c_rt_lib::ov_as($memory_5, 'ok');
#line 332
$memory_10 = ptd::sim();
#line 332
$memory_9 = ptd::arr($memory_10);
#line 332
undef($memory_10);
#line 332
$memory_8 = ptd::ensure($memory_9, $memory_7);
#line 332
undef($memory_9);
#line 332
$memory_10 = 0;
#line 332
$memory_11 = 1;
#line 332
$memory_12 = c_rt_lib::array_len($memory_8);
#line 332
label_76:
#line 332
$memory_13 = c_rt_lib::to_nl($memory_10 >= $memory_12);
#line 332
if (c_rt_lib::check_true($memory_13)) {goto label_95;}
#line 332
$memory_9 = $memory_8->[$memory_10];
#line 333
$memory_14 = compiler_priv::has_extension($memory_9, $memory_3);
#line 333
$memory_14 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_14));
#line 333
$memory_14 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_14));
#line 333
if (c_rt_lib::check_true($memory_14)) {goto label_87;}
#line 333
undef($memory_14);
#line 333
goto label_92;
#line 333
goto label_87;
#line 333
label_87:
#line 333
undef($memory_14);
#line 334
$memory_14 = compiler_priv::get_module_name($memory_9);
#line 334
hash::set_value($memory_4, $memory_14, $memory_9);
#line 334
undef($memory_14);
#line 334
label_92:
#line 335
$memory_10 = $memory_10 + $memory_11;
#line 335
goto label_76;
#line 335
label_95:
#line 335
undef($memory_8);
#line 335
undef($memory_9);
#line 335
undef($memory_10);
#line 335
undef($memory_11);
#line 335
undef($memory_12);
#line 335
undef($memory_13);
#line 335
undef($memory_7);
#line 336
goto label_119;
#line 336
label_104:
#line 336
$memory_7 = c_rt_lib::ov_as($memory_5, 'err');
#line 337
$memory_8 = {};
#line 337
undef($memory_0);
#line 337
undef($memory_1);
#line 337
undef($memory_2);
#line 337
undef($memory_3);
#line 337
undef($memory_4);
#line 337
undef($memory_5);
#line 337
undef($memory_6);
#line 337
undef($memory_7);
#line 337
return $memory_8;
#line 337
undef($memory_8);
#line 337
undef($memory_7);
#line 338
goto label_119;
#line 338
label_119:
#line 338
undef($memory_5);
#line 338
undef($memory_6);
#line 339
$memory_5 = {};
#line 340
$memory_7 = 0;
#line 340
$memory_8 = 1;
#line 340
$memory_9 = c_rt_lib::array_len($memory_2);
#line 340
label_126:
#line 340
$memory_10 = c_rt_lib::to_nl($memory_7 >= $memory_9);
#line 340
if (c_rt_lib::check_true($memory_10)) {goto label_139;}
#line 340
$memory_6 = $memory_2->[$memory_7];
#line 341
$memory_12 = $memory_6->{'file'};
#line 341
$memory_11 = compiler_priv::get_module_name($memory_12);
#line 341
undef($memory_12);
#line 342
$memory_12 = compiler_priv::mk_path_module($memory_6, $memory_11, $memory_0);
#line 343
hash::set_value($memory_5, $memory_11, $memory_12);
#line 343
undef($memory_11);
#line 343
undef($memory_12);
#line 344
$memory_7 = $memory_7 + $memory_8;
#line 344
goto label_126;
#line 344
label_139:
#line 344
undef($memory_6);
#line 344
undef($memory_7);
#line 344
undef($memory_8);
#line 344
undef($memory_9);
#line 344
undef($memory_10);
#line 345
undef($memory_0);
#line 345
undef($memory_1);
#line 345
undef($memory_2);
#line 345
undef($memory_3);
#line 345
undef($memory_4);
#line 345
return $memory_5;
#line 345
undef($memory_1);
#line 345
undef($memory_2);
#line 345
undef($memory_3);
#line 345
undef($memory_4);
#line 345
undef($memory_5);
#line 345
undef($memory_0);
#line 345
return;
}

sub compiler_priv::parse_module($$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;$memory_0 = $_[0];$memory_1 = $_[1];$memory_2 = $_[2];Scalar::Util::weaken($_[2]) if ref($_[2]);
#line 352
$memory_3 = "processing ";
#line 352
$memory_3 = $memory_3 . $memory_0;
#line 352
$memory_4 = "...";
#line 352
$memory_3 = $memory_3 . $memory_4;
#line 352
undef($memory_4);
#line 352
c_fe_lib::print($memory_3);
#line 352
undef($memory_3);
#line 353
$memory_8 = ptd::sim();
#line 353
$memory_9 = ptd::sim();
#line 353
$memory_7 = {ok => $memory_8,err => $memory_9,};
#line 353
undef($memory_8);
#line 353
undef($memory_9);
#line 353
$memory_6 = ptd::var($memory_7);
#line 353
undef($memory_7);
#line 353
$memory_7 = c_fe_lib::file_to_string($memory_1);
#line 353
$memory_5 = ptd::ensure($memory_6, $memory_7);
#line 353
undef($memory_7);
#line 353
undef($memory_6);
#line 353
$memory_4 = c_rt_lib::ov_is($memory_5, 'ok');
#line 353
if (c_rt_lib::check_true($memory_4)) {goto label_25;}
#line 353
undef($memory_0);
#line 353
undef($memory_1);
#line 353
undef($memory_3);
#line 353
undef($memory_4);
#line 353
$_[2] = $memory_2;return $memory_5;
#line 353
label_25:
#line 353
$memory_3 = c_rt_lib::ov_as($memory_5, 'ok');
#line 353
undef($memory_4);
#line 353
undef($memory_5);
#line 354
$memory_4 = nparser::sparse($memory_3, $memory_0);
#line 355
$memory_5 = c_rt_lib::ov_is($memory_4, 'ok');
#line 355
if (c_rt_lib::check_true($memory_5)) {goto label_37;}
#line 362
$memory_5 = c_rt_lib::ov_is($memory_4, 'error');
#line 362
if (c_rt_lib::check_true($memory_5)) {goto label_101;}
#line 362
$memory_5 = "NOMATCHALERT";
#line 362
$memory_5 = [$memory_5,$memory_4];
#line 362
die(dfile::ssave($memory_5));
#line 355
label_37:
#line 355
$memory_6 = c_rt_lib::ov_as($memory_4, 'ok');
#line 356
$memory_7 = {};
#line 357
$memory_9 = c_rt_lib::to_nl(0);
#line 357
$memory_8 = module_checker::check_module($memory_6, $memory_9, $memory_7);
#line 357
undef($memory_9);
#line 358
$memory_9 = "module_warnings";
#line 358
$memory_9 = c_rt_lib::get_ref_hash($memory_2, $memory_9);
#line 358
$memory_10 = $memory_8->{'warnings'};
#line 358
hash::set_value($memory_9, $memory_0, $memory_10);
#line 358
undef($memory_10);
#line 358
$memory_10 = "module_warnings";
#line 358
c_rt_lib::set_ref_hash($memory_2, $memory_10, $memory_9);
#line 358
undef($memory_10);
#line 358
undef($memory_9);
#line 359
$memory_9 = "module_errors";
#line 359
$memory_9 = c_rt_lib::get_ref_hash($memory_2, $memory_9);
#line 359
$memory_10 = $memory_8->{'errors'};
#line 359
hash::set_value($memory_9, $memory_0, $memory_10);
#line 359
undef($memory_10);
#line 359
$memory_10 = "module_errors";
#line 359
c_rt_lib::set_ref_hash($memory_2, $memory_10, $memory_9);
#line 359
undef($memory_10);
#line 359
undef($memory_9);
#line 360
$memory_10 = $memory_8->{'errors'};
#line 360
$memory_9 = array::len($memory_10);
#line 360
undef($memory_10);
#line 360
$memory_10 = 0;
#line 360
$memory_9 = c_rt_lib::to_nl($memory_9 == $memory_10);
#line 360
undef($memory_10);
#line 360
$memory_9 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_9));
#line 360
$memory_9 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_9));
#line 360
if (c_rt_lib::check_true($memory_9)) {goto label_84;}
#line 360
$memory_10 = "";
#line 360
$memory_10 = c_rt_lib::ov_mk_arg('err', $memory_10);
#line 360
undef($memory_0);
#line 360
undef($memory_1);
#line 360
undef($memory_3);
#line 360
undef($memory_4);
#line 360
undef($memory_5);
#line 360
undef($memory_6);
#line 360
undef($memory_7);
#line 360
undef($memory_8);
#line 360
undef($memory_9);
#line 360
$_[2] = $memory_2;return $memory_10;
#line 360
undef($memory_10);
#line 360
goto label_84;
#line 360
label_84:
#line 360
undef($memory_9);
#line 361
$memory_9 = c_rt_lib::ov_mk_arg('ok', $memory_6);
#line 361
undef($memory_0);
#line 361
undef($memory_1);
#line 361
undef($memory_3);
#line 361
undef($memory_4);
#line 361
undef($memory_5);
#line 361
undef($memory_6);
#line 361
undef($memory_7);
#line 361
undef($memory_8);
#line 361
$_[2] = $memory_2;return $memory_9;
#line 361
undef($memory_9);
#line 361
undef($memory_7);
#line 361
undef($memory_8);
#line 361
undef($memory_6);
#line 362
goto label_131;
#line 362
label_101:
#line 362
$memory_6 = c_rt_lib::ov_as($memory_4, 'error');
#line 363
$memory_7 = "module_warnings";
#line 363
$memory_7 = c_rt_lib::get_ref_hash($memory_2, $memory_7);
#line 363
$memory_8 = [];
#line 363
hash::set_value($memory_7, $memory_0, $memory_8);
#line 363
undef($memory_8);
#line 363
$memory_8 = "module_warnings";
#line 363
c_rt_lib::set_ref_hash($memory_2, $memory_8, $memory_7);
#line 363
undef($memory_8);
#line 363
undef($memory_7);
#line 364
$memory_7 = "module_errors";
#line 364
$memory_7 = c_rt_lib::get_ref_hash($memory_2, $memory_7);
#line 364
hash::set_value($memory_7, $memory_0, $memory_6);
#line 364
$memory_8 = "module_errors";
#line 364
c_rt_lib::set_ref_hash($memory_2, $memory_8, $memory_7);
#line 364
undef($memory_8);
#line 364
undef($memory_7);
#line 365
$memory_7 = "";
#line 365
$memory_7 = c_rt_lib::ov_mk_arg('err', $memory_7);
#line 365
undef($memory_0);
#line 365
undef($memory_1);
#line 365
undef($memory_3);
#line 365
undef($memory_4);
#line 365
undef($memory_5);
#line 365
undef($memory_6);
#line 365
$_[2] = $memory_2;return $memory_7;
#line 365
undef($memory_7);
#line 365
undef($memory_6);
#line 366
goto label_131;
#line 366
label_131:
#line 366
undef($memory_5);
#line 366
undef($memory_3);
#line 366
undef($memory_4);
#line 366
undef($memory_0);
#line 366
undef($memory_1);
#line 366
$_[2] = $memory_2;return;
$_[2] = $memory_2;}

sub compiler_priv::get_mathematical_func($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;$memory_0 = $_[0];
#line 370
$memory_1 = {};
#line 371
$memory_3 = $memory_0->{'math_fun'};
#line 371
$memory_2 = c_fe_lib::file_to_string($memory_3);
#line 371
undef($memory_3);
#line 371
$memory_3 = c_rt_lib::ov_is($memory_2, 'ok');
#line 371
if (c_rt_lib::check_true($memory_3)) {goto label_11;}
#line 384
$memory_3 = c_rt_lib::ov_is($memory_2, 'err');
#line 384
if (c_rt_lib::check_true($memory_3)) {goto label_62;}
#line 384
$memory_3 = "NOMATCHALERT";
#line 384
$memory_3 = [$memory_3,$memory_2];
#line 384
die(dfile::ssave($memory_3));
#line 371
label_11:
#line 371
$memory_4 = c_rt_lib::ov_as($memory_2, 'ok');
#line 372
$memory_5 = "list of mathematical functions loaded";
#line 372
c_fe_lib::print($memory_5);
#line 372
undef($memory_5);
#line 373
$memory_5 = dfile::try_sload($memory_4);
#line 374
$memory_6 = [];
#line 375
$memory_7 = c_rt_lib::ov_is($memory_5, 'ok');
#line 375
if (c_rt_lib::check_true($memory_7)) {goto label_25;}
#line 377
$memory_7 = c_rt_lib::ov_is($memory_5, 'err');
#line 377
if (c_rt_lib::check_true($memory_7)) {goto label_30;}
#line 377
$memory_7 = "NOMATCHALERT";
#line 377
$memory_7 = [$memory_7,$memory_5];
#line 377
die(dfile::ssave($memory_7));
#line 375
label_25:
#line 375
$memory_8 = c_rt_lib::ov_as($memory_5, 'ok');
#line 376
$memory_6 = $memory_8;
#line 376
undef($memory_8);
#line 377
goto label_38;
#line 377
label_30:
#line 377
$memory_8 = c_rt_lib::ov_as($memory_5, 'err');
#line 378
$memory_9 = "could not parse list of mathematical functions:";
#line 378
c_fe_lib::print($memory_9);
#line 378
undef($memory_9);
#line 379
c_fe_lib::print($memory_8);
#line 379
undef($memory_8);
#line 380
goto label_38;
#line 380
label_38:
#line 380
undef($memory_7);
#line 381
$memory_8 = 0;
#line 381
$memory_9 = 1;
#line 381
$memory_10 = c_rt_lib::array_len($memory_6);
#line 381
label_43:
#line 381
$memory_11 = c_rt_lib::to_nl($memory_8 >= $memory_10);
#line 381
if (c_rt_lib::check_true($memory_11)) {goto label_52;}
#line 381
$memory_7 = $memory_6->[$memory_8];
#line 382
$memory_12 = 1;
#line 382
hash::set_value($memory_1, $memory_7, $memory_12);
#line 382
undef($memory_12);
#line 383
$memory_8 = $memory_8 + $memory_9;
#line 383
goto label_43;
#line 383
label_52:
#line 383
undef($memory_7);
#line 383
undef($memory_8);
#line 383
undef($memory_9);
#line 383
undef($memory_10);
#line 383
undef($memory_11);
#line 383
undef($memory_5);
#line 383
undef($memory_6);
#line 383
undef($memory_4);
#line 384
goto label_69;
#line 384
label_62:
#line 384
$memory_4 = c_rt_lib::ov_as($memory_2, 'err');
#line 385
$memory_5 = "NOT LOAD: list of mathematical functions";
#line 385
c_fe_lib::print($memory_5);
#line 385
undef($memory_5);
#line 385
undef($memory_4);
#line 386
goto label_69;
#line 386
label_69:
#line 386
undef($memory_2);
#line 386
undef($memory_3);
#line 387
undef($memory_0);
#line 387
return $memory_1;
#line 387
undef($memory_1);
#line 387
undef($memory_0);
#line 387
return;
}

sub compiler_priv::compile_ide($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;my $memory_13;my $memory_14;my $memory_15;my $memory_16;my $memory_17;my $memory_18;my $memory_19;my $memory_20;my $memory_21;$memory_0 = $_[0];
#line 391
$memory_1 = {};
#line 392
$memory_2 = {};
#line 393
$memory_3 = {};
#line 394
$memory_4 = {};
#line 396
$memory_6 = {};
#line 397
$memory_7 = {};
#line 398
$memory_8 = {};
#line 399
$memory_9 = {};
#line 400
$memory_10 = c_rt_lib::ov_mk_none('ok');
#line 400
$memory_5 = {module_errors => $memory_6,module_warnings => $memory_7,type_errors => $memory_8,type_warnings => $memory_9,loop_error => $memory_10,};
#line 400
undef($memory_6);
#line 400
undef($memory_7);
#line 400
undef($memory_8);
#line 400
undef($memory_9);
#line 400
undef($memory_10);
#line 402
$memory_7 = compiler_priv::get_mathematical_func($memory_0);
#line 402
$memory_8 = $memory_0->{'optimization'};
#line 402
$memory_6 = post_processing::init($memory_7, $memory_8);
#line 402
undef($memory_8);
#line 402
undef($memory_7);
#line 403
$memory_7 = {};
#line 404
$memory_9 = $memory_0->{'language'};
#line 404
$memory_8 = compiler_priv::get_generator_state($memory_9);
#line 404
undef($memory_9);
#line 405
label_24:
#line 406
$memory_9 = {};
#line 406
$memory_10 = $memory_9;
#line 406
 if (c_rt_lib::get_hashcount($memory_5) > 1) {$memory_5 = {%{$memory_5}};}$memory_5->{'type_errors'} = $memory_10;
#line 406
undef($memory_9);
#line 406
undef($memory_10);
#line 407
$memory_9 = {};
#line 407
$memory_10 = $memory_9;
#line 407
 if (c_rt_lib::get_hashcount($memory_5) > 1) {$memory_5 = {%{$memory_5}};}$memory_5->{'type_warnings'} = $memory_10;
#line 407
undef($memory_9);
#line 407
undef($memory_10);
#line 408
$memory_9 = c_rt_lib::ov_mk_none('ok');
#line 408
$memory_10 = $memory_9;
#line 408
 if (c_rt_lib::get_hashcount($memory_5) > 1) {$memory_5 = {%{$memory_5}};}$memory_5->{'loop_error'} = $memory_10;
#line 408
undef($memory_9);
#line 408
undef($memory_10);
#line 409
$memory_9 = compiler_priv::get_files_to_parse($memory_0);
#line 410
$memory_10 = 0;
#line 411
$memory_13 = c_rt_lib::init_iter($memory_9);
#line 411
label_43:
#line 411
$memory_11 = c_rt_lib::is_end_hash($memory_13);
#line 411
if (c_rt_lib::check_true($memory_11)) {goto label_94;}
#line 411
$memory_11 = c_rt_lib::get_key_iter($memory_13);
#line 411
$memory_12 = c_rt_lib::hash_get_value($memory_9, $memory_11);
#line 412
$memory_15 = $memory_12->{'src'};
#line 412
$memory_14 = c_fe_lib::get_modif_time($memory_15);
#line 412
undef($memory_15);
#line 413
$memory_15 = $memory_14;
#line 413
$memory_15 = c_rt_lib::ov_is($memory_15, 'err');
#line 413
$memory_15 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_15));
#line 413
if (c_rt_lib::check_true($memory_15)) {goto label_59;}
#line 413
undef($memory_14);
#line 413
undef($memory_15);
#line 413
goto label_91;
#line 413
goto label_59;
#line 413
label_59:
#line 413
undef($memory_15);
#line 414
$memory_15 = $memory_14;
#line 414
$memory_15 = c_rt_lib::ov_as($memory_15, 'ok');
#line 414
$memory_14 = $memory_15;
#line 414
undef($memory_15);
#line 415
$memory_15 = hash::has_key($memory_1, $memory_11);
#line 415
$memory_15 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_15));
#line 415
if (c_rt_lib::check_true($memory_15)) {goto label_83;}
#line 416
$memory_16 = hash::get_value($memory_1, $memory_11);
#line 417
$memory_17 = c_rt_lib::to_nl($memory_14 > $memory_16);
#line 417
$memory_17 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_17));
#line 417
$memory_17 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_17));
#line 417
if (c_rt_lib::check_true($memory_17)) {goto label_79;}
#line 417
undef($memory_14);
#line 417
undef($memory_15);
#line 417
undef($memory_16);
#line 417
undef($memory_17);
#line 417
goto label_91;
#line 417
goto label_79;
#line 417
label_79:
#line 417
undef($memory_17);
#line 417
undef($memory_16);
#line 418
goto label_83;
#line 418
label_83:
#line 418
undef($memory_15);
#line 419
hash::set_value($memory_1, $memory_11, $memory_14);
#line 420
hash::set_value($memory_4, $memory_11, $memory_12);
#line 421
$memory_15 = 1;
#line 421
$memory_10 = $memory_10 + $memory_15;
#line 421
undef($memory_15);
#line 421
undef($memory_14);
#line 421
label_91:
#line 422
$memory_13 = c_rt_lib::next_iter($memory_13);
#line 422
goto label_43;
#line 422
label_94:
#line 422
undef($memory_11);
#line 422
undef($memory_12);
#line 422
undef($memory_13);
#line 423
$memory_13 = c_rt_lib::init_iter($memory_7);
#line 423
label_99:
#line 423
$memory_11 = c_rt_lib::is_end_hash($memory_13);
#line 423
if (c_rt_lib::check_true($memory_11)) {goto label_143;}
#line 423
$memory_11 = c_rt_lib::get_key_iter($memory_13);
#line 423
$memory_12 = c_rt_lib::hash_get_value($memory_7, $memory_11);
#line 424
$memory_14 = hash::has_key($memory_9, $memory_11);
#line 424
$memory_14 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_14));
#line 424
$memory_14 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_14));
#line 424
if (c_rt_lib::check_true($memory_14)) {goto label_139;}
#line 425
$memory_15 = 1;
#line 425
$memory_10 = $memory_10 + $memory_15;
#line 425
undef($memory_15);
#line 426
$memory_15 = "module_errors";
#line 426
$memory_15 = c_rt_lib::get_ref_hash($memory_5, $memory_15);
#line 426
hash::delete($memory_15, $memory_11);
#line 426
$memory_16 = "module_errors";
#line 426
c_rt_lib::set_ref_hash($memory_5, $memory_16, $memory_15);
#line 426
undef($memory_16);
#line 426
undef($memory_15);
#line 427
$memory_15 = "module_warnings";
#line 427
$memory_15 = c_rt_lib::get_ref_hash($memory_5, $memory_15);
#line 427
hash::delete($memory_15, $memory_11);
#line 427
$memory_16 = "module_warnings";
#line 427
c_rt_lib::set_ref_hash($memory_5, $memory_16, $memory_15);
#line 427
undef($memory_16);
#line 427
undef($memory_15);
#line 428
hash::delete($memory_2, $memory_11);
#line 429
hash::delete($memory_1, $memory_11);
#line 430
hash::delete($memory_4, $memory_11);
#line 431
hash::delete($memory_3, $memory_11);
#line 432
post_processing::clear_module_from_state($memory_6, $memory_11);
#line 433
$memory_15 = $memory_0->{'language'};
#line 433
$memory_15 = c_rt_lib::ov_is($memory_15, 'c');
#line 433
$memory_15 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_15));
#line 433
if (c_rt_lib::check_true($memory_15)) {goto label_136;}
#line 434
generator_c::clear_module_from_state($memory_8, $memory_11);
#line 435
goto label_136;
#line 435
label_136:
#line 435
undef($memory_15);
#line 436
goto label_139;
#line 436
label_139:
#line 436
undef($memory_14);
#line 437
$memory_13 = c_rt_lib::next_iter($memory_13);
#line 437
goto label_99;
#line 437
label_143:
#line 437
undef($memory_11);
#line 437
undef($memory_12);
#line 437
undef($memory_13);
#line 438
$memory_7 = $memory_9;
#line 439
$memory_11 = 0;
#line 439
$memory_11 = c_rt_lib::to_nl($memory_10 == $memory_11);
#line 439
$memory_11 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_11));
#line 439
if (c_rt_lib::check_true($memory_11)) {goto label_160;}
#line 440
$memory_12 = 1;
#line 440
c_fe_lib::sleep($memory_12);
#line 440
undef($memory_12);
#line 441
undef($memory_9);
#line 441
undef($memory_10);
#line 441
undef($memory_11);
#line 441
goto label_24;
#line 442
goto label_160;
#line 442
label_160:
#line 442
undef($memory_11);
#line 443
$memory_11 = {};
#line 444
$memory_14 = c_rt_lib::init_iter($memory_4);
#line 444
label_164:
#line 444
$memory_12 = c_rt_lib::is_end_hash($memory_14);
#line 444
if (c_rt_lib::check_true($memory_12)) {goto label_195;}
#line 444
$memory_12 = c_rt_lib::get_key_iter($memory_14);
#line 444
$memory_13 = c_rt_lib::hash_get_value($memory_4, $memory_12);
#line 445
$memory_16 = $memory_13->{'src'};
#line 445
$memory_15 = compiler_priv::parse_module($memory_12, $memory_16, $memory_5);
#line 445
undef($memory_16);
#line 445
$memory_16 = c_rt_lib::ov_is($memory_15, 'ok');
#line 445
if (c_rt_lib::check_true($memory_16)) {goto label_179;}
#line 448
$memory_16 = c_rt_lib::ov_is($memory_15, 'err');
#line 448
if (c_rt_lib::check_true($memory_16)) {goto label_185;}
#line 448
$memory_16 = "NOMATCHALERT";
#line 448
$memory_16 = [$memory_16,$memory_15];
#line 448
die(dfile::ssave($memory_16));
#line 445
label_179:
#line 445
$memory_17 = c_rt_lib::ov_as($memory_15, 'ok');
#line 446
hash::set_value($memory_2, $memory_12, $memory_17);
#line 447
hash::set_value($memory_3, $memory_12, $memory_17);
#line 447
undef($memory_17);
#line 448
goto label_190;
#line 448
label_185:
#line 448
$memory_17 = c_rt_lib::ov_as($memory_15, 'err');
#line 449
hash::set_value($memory_11, $memory_12, $memory_13);
#line 449
undef($memory_17);
#line 450
goto label_190;
#line 450
label_190:
#line 450
undef($memory_15);
#line 450
undef($memory_16);
#line 451
$memory_14 = c_rt_lib::next_iter($memory_14);
#line 451
goto label_164;
#line 451
label_195:
#line 451
undef($memory_12);
#line 451
undef($memory_13);
#line 451
undef($memory_14);
#line 452
$memory_4 = $memory_11;
#line 453
$memory_12 = hash::size($memory_4);
#line 453
$memory_13 = 0;
#line 453
$memory_12 = c_rt_lib::to_nl($memory_12 > $memory_13);
#line 453
undef($memory_13);
#line 453
$memory_12 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_12));
#line 453
if (c_rt_lib::check_true($memory_12)) {goto label_228;}
#line 454
compiler_priv::show_and_count_errors($memory_5, $memory_0, $memory_9);
#line 455
$memory_13 = string::lf();
#line 455
$memory_14 = "ERROR: while parsing ";
#line 455
$memory_13 = $memory_13 . $memory_14;
#line 455
undef($memory_14);
#line 455
$memory_14 = hash::size($memory_4);
#line 455
$memory_13 = $memory_13 . $memory_14;
#line 455
undef($memory_14);
#line 455
$memory_14 = " modules";
#line 455
$memory_13 = $memory_13 . $memory_14;
#line 455
undef($memory_14);
#line 455
c_fe_lib::print($memory_13);
#line 455
undef($memory_13);
#line 456
$memory_13 = "############################################################";
#line 456
c_fe_lib::print($memory_13);
#line 456
undef($memory_13);
#line 457
undef($memory_9);
#line 457
undef($memory_10);
#line 457
undef($memory_11);
#line 457
undef($memory_12);
#line 457
goto label_24;
#line 458
goto label_228;
#line 458
label_228:
#line 458
undef($memory_12);
#line 459
$memory_12 = $memory_0->{'deref'};
#line 459
$memory_13 = $memory_0->{'check_public_fun'};
#line 459
compiler_priv::check_modules($memory_2, $memory_5, $memory_12, $memory_13);
#line 459
undef($memory_13);
#line 459
undef($memory_12);
#line 460
$memory_12 = compiler_priv::show_and_count_errors($memory_5, $memory_0, $memory_9);
#line 460
$memory_13 = 0;
#line 460
$memory_12 = c_rt_lib::to_nl($memory_12 > $memory_13);
#line 460
undef($memory_13);
#line 460
$memory_12 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_12));
#line 460
if (c_rt_lib::check_true($memory_12)) {goto label_250;}
#line 461
$memory_13 = "############################################################";
#line 461
c_fe_lib::print($memory_13);
#line 461
undef($memory_13);
#line 462
undef($memory_9);
#line 462
undef($memory_10);
#line 462
undef($memory_11);
#line 462
undef($memory_12);
#line 462
goto label_24;
#line 463
goto label_250;
#line 463
label_250:
#line 463
undef($memory_12);
#line 464
$memory_12 = $memory_0->{'language'};
#line 464
$memory_12 = c_rt_lib::ov_is($memory_12, 'ast');
#line 464
if (c_rt_lib::check_true($memory_12)) {goto label_257;}
#line 464
$memory_12 = $memory_0->{'language'};
#line 464
$memory_12 = c_rt_lib::ov_is($memory_12, 'nl');
#line 464
label_257:
#line 464
$memory_12 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_12));
#line 464
$memory_12 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_12));
#line 464
if (c_rt_lib::check_true($memory_12)) {goto label_308;}
#line 465
$memory_13 = "search constants...";
#line 465
c_fe_lib::print($memory_13);
#line 465
undef($memory_13);
#line 466
$memory_13 = {};
#line 467
$memory_14 = compiler_priv::translate($memory_3, $memory_6);
#line 468
$memory_16 = $memory_0->{'cache_path'};
#line 468
$memory_17 = $memory_0->{'language'};
#line 468
$memory_15 = compiler_priv::generate_modules_to_files($memory_14, $memory_9, $memory_16, $memory_8, $memory_17);
#line 468
undef($memory_17);
#line 468
undef($memory_16);
#line 469
$memory_16 = c_rt_lib::ov_is($memory_15, 'err');
#line 469
if (c_rt_lib::check_true($memory_16)) {goto label_278;}
#line 473
$memory_16 = c_rt_lib::ov_is($memory_15, 'ok');
#line 473
if (c_rt_lib::check_true($memory_16)) {goto label_297;}
#line 473
$memory_16 = "NOMATCHALERT";
#line 473
$memory_16 = [$memory_16,$memory_15];
#line 473
die(dfile::ssave($memory_16));
#line 469
label_278:
#line 469
$memory_17 = c_rt_lib::ov_as($memory_15, 'err');
#line 470
$memory_20 = c_rt_lib::init_iter($memory_17);
#line 470
label_281:
#line 470
$memory_18 = c_rt_lib::is_end_hash($memory_20);
#line 470
if (c_rt_lib::check_true($memory_18)) {goto label_291;}
#line 470
$memory_18 = c_rt_lib::get_key_iter($memory_20);
#line 470
$memory_19 = c_rt_lib::hash_get_value($memory_17, $memory_18);
#line 471
$memory_21 = hash::get_value($memory_2, $memory_18);
#line 471
hash::set_value($memory_13, $memory_18, $memory_21);
#line 471
undef($memory_21);
#line 472
$memory_20 = c_rt_lib::next_iter($memory_20);
#line 472
goto label_281;
#line 472
label_291:
#line 472
undef($memory_18);
#line 472
undef($memory_19);
#line 472
undef($memory_20);
#line 472
undef($memory_17);
#line 473
goto label_301;
#line 473
label_297:
#line 473
$memory_17 = c_rt_lib::ov_as($memory_15, 'ok');
#line 473
undef($memory_17);
#line 474
goto label_301;
#line 474
label_301:
#line 474
undef($memory_15);
#line 474
undef($memory_16);
#line 475
$memory_3 = $memory_13;
#line 475
undef($memory_13);
#line 475
undef($memory_14);
#line 476
goto label_356;
#line 476
label_308:
#line 477
$memory_13 = {};
#line 478
$memory_16 = c_rt_lib::init_iter($memory_3);
#line 478
label_311:
#line 478
$memory_14 = c_rt_lib::is_end_hash($memory_16);
#line 478
if (c_rt_lib::check_true($memory_14)) {goto label_349;}
#line 478
$memory_14 = c_rt_lib::get_key_iter($memory_16);
#line 478
$memory_15 = c_rt_lib::hash_get_value($memory_3, $memory_14);
#line 479
$memory_17 = "saving file: ";
#line 479
$memory_17 = $memory_17 . $memory_14;
#line 479
c_fe_lib::print($memory_17);
#line 479
undef($memory_17);
#line 480
$memory_18 = hash::get_value($memory_9, $memory_14);
#line 480
$memory_18 = $memory_18->{'dst'};
#line 480
$memory_17 = compiler_priv::save_module_to_file($memory_15, $memory_18);
#line 480
undef($memory_18);
#line 480
$memory_18 = c_rt_lib::ov_is($memory_17, 'err');
#line 480
if (c_rt_lib::check_true($memory_18)) {goto label_331;}
#line 483
$memory_18 = c_rt_lib::ov_is($memory_17, 'ok');
#line 483
if (c_rt_lib::check_true($memory_18)) {goto label_340;}
#line 483
$memory_18 = "NOMATCHALERT";
#line 483
$memory_18 = [$memory_18,$memory_17];
#line 483
die(dfile::ssave($memory_18));
#line 480
label_331:
#line 480
$memory_19 = c_rt_lib::ov_as($memory_17, 'err');
#line 481
$memory_20 = "ERROR: ";
#line 481
$memory_20 = $memory_20 . $memory_19;
#line 481
c_fe_lib::print($memory_20);
#line 481
undef($memory_20);
#line 482
hash::set_value($memory_13, $memory_14, $memory_15);
#line 482
undef($memory_19);
#line 483
goto label_344;
#line 483
label_340:
#line 483
$memory_19 = c_rt_lib::ov_as($memory_17, 'ok');
#line 483
undef($memory_19);
#line 484
goto label_344;
#line 484
label_344:
#line 484
undef($memory_17);
#line 484
undef($memory_18);
#line 485
$memory_16 = c_rt_lib::next_iter($memory_16);
#line 485
goto label_311;
#line 485
label_349:
#line 485
undef($memory_14);
#line 485
undef($memory_15);
#line 485
undef($memory_16);
#line 486
$memory_3 = $memory_13;
#line 486
undef($memory_13);
#line 487
goto label_356;
#line 487
label_356:
#line 487
undef($memory_12);
#line 488
$memory_12 = hash::size($memory_3);
#line 488
$memory_13 = 0;
#line 488
$memory_12 = c_rt_lib::to_nl($memory_12 > $memory_13);
#line 488
undef($memory_13);
#line 488
$memory_12 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_12));
#line 488
if (c_rt_lib::check_true($memory_12)) {goto label_380;}
#line 489
$memory_13 = "Can not save ";
#line 489
$memory_14 = hash::size($memory_3);
#line 489
$memory_13 = $memory_13 . $memory_14;
#line 489
undef($memory_14);
#line 489
$memory_14 = " files. ";
#line 489
$memory_13 = $memory_13 . $memory_14;
#line 489
undef($memory_14);
#line 490
$memory_14 = string::lf();
#line 490
$memory_15 = "ERROR: ";
#line 490
$memory_14 = $memory_14 . $memory_15;
#line 490
undef($memory_15);
#line 490
$memory_14 = $memory_14 . $memory_13;
#line 490
c_fe_lib::print($memory_14);
#line 490
undef($memory_14);
#line 490
undef($memory_13);
#line 491
goto label_399;
#line 491
label_380:
#line 492
$memory_13 = $memory_0->{'mode'};
#line 492
$memory_13 = c_rt_lib::ov_is($memory_13, 'idex');
#line 492
$memory_13 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_13));
#line 492
if (c_rt_lib::check_true($memory_13)) {goto label_390;}
#line 492
$memory_14 = $memory_0->{'mode'};
#line 492
$memory_14 = c_rt_lib::ov_as($memory_14, 'idex');
#line 492
c_fe_lib::exec_cmd($memory_14);
#line 492
undef($memory_14);
#line 492
goto label_390;
#line 492
label_390:
#line 492
undef($memory_13);
#line 493
$memory_13 = string::lf();
#line 493
$memory_14 = "OK: compile, check types and save changes without errors";
#line 493
$memory_13 = $memory_13 . $memory_14;
#line 493
undef($memory_14);
#line 493
c_fe_lib::print($memory_13);
#line 493
undef($memory_13);
#line 494
goto label_399;
#line 494
label_399:
#line 494
undef($memory_12);
#line 495
$memory_12 = "############################################################";
#line 495
c_fe_lib::print($memory_12);
#line 495
undef($memory_12);
#line 495
undef($memory_9);
#line 495
undef($memory_10);
#line 495
undef($memory_11);
#line 405
goto label_24;
#line 405
undef($memory_1);
#line 405
undef($memory_2);
#line 405
undef($memory_3);
#line 405
undef($memory_4);
#line 405
undef($memory_5);
#line 405
undef($memory_6);
#line 405
undef($memory_7);
#line 405
undef($memory_8);
#line 405
undef($memory_0);
#line 405
return;
}

sub compiler_priv::compile_strict_file($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;$memory_0 = $_[0];
#line 500
$memory_1 = {};
#line 502
$memory_3 = {};
#line 503
$memory_4 = {};
#line 504
$memory_5 = {};
#line 505
$memory_6 = {};
#line 506
$memory_7 = c_rt_lib::ov_mk_none('ok');
#line 506
$memory_2 = {module_errors => $memory_3,module_warnings => $memory_4,type_errors => $memory_5,type_warnings => $memory_6,loop_error => $memory_7,};
#line 506
undef($memory_3);
#line 506
undef($memory_4);
#line 506
undef($memory_5);
#line 506
undef($memory_6);
#line 506
undef($memory_7);
#line 509
$memory_3 = "module parsing";
#line 509
profile::begin($memory_3);
#line 509
undef($memory_3);
#line 510
$memory_3 = 0;
#line 511
$memory_4 = compiler_priv::get_files_to_parse($memory_0);
#line 512
$memory_7 = c_rt_lib::init_iter($memory_4);
#line 512
label_18:
#line 512
$memory_5 = c_rt_lib::is_end_hash($memory_7);
#line 512
if (c_rt_lib::check_true($memory_5)) {goto label_50;}
#line 512
$memory_5 = c_rt_lib::get_key_iter($memory_7);
#line 512
$memory_6 = c_rt_lib::hash_get_value($memory_4, $memory_5);
#line 513
$memory_9 = $memory_6->{'src'};
#line 513
$memory_8 = compiler_priv::parse_module($memory_5, $memory_9, $memory_2);
#line 513
undef($memory_9);
#line 513
$memory_9 = c_rt_lib::ov_is($memory_8, 'ok');
#line 513
if (c_rt_lib::check_true($memory_9)) {goto label_33;}
#line 515
$memory_9 = c_rt_lib::ov_is($memory_8, 'err');
#line 515
if (c_rt_lib::check_true($memory_9)) {goto label_38;}
#line 515
$memory_9 = "NOMATCHALERT";
#line 515
$memory_9 = [$memory_9,$memory_8];
#line 515
die(dfile::ssave($memory_9));
#line 513
label_33:
#line 513
$memory_10 = c_rt_lib::ov_as($memory_8, 'ok');
#line 514
hash::set_value($memory_1, $memory_5, $memory_10);
#line 514
undef($memory_10);
#line 515
goto label_45;
#line 515
label_38:
#line 515
$memory_10 = c_rt_lib::ov_as($memory_8, 'err');
#line 516
$memory_11 = 1;
#line 516
$memory_3 = $memory_3 + $memory_11;
#line 516
undef($memory_11);
#line 516
undef($memory_10);
#line 517
goto label_45;
#line 517
label_45:
#line 517
undef($memory_8);
#line 517
undef($memory_9);
#line 518
$memory_7 = c_rt_lib::next_iter($memory_7);
#line 518
goto label_18;
#line 518
label_50:
#line 518
undef($memory_5);
#line 518
undef($memory_6);
#line 518
undef($memory_7);
#line 519
$memory_5 = "module parsing";
#line 519
profile::end($memory_5);
#line 519
undef($memory_5);
#line 520
$memory_5 = 0;
#line 520
$memory_5 = c_rt_lib::to_nl($memory_3 != $memory_5);
#line 520
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 520
if (c_rt_lib::check_true($memory_5)) {goto label_72;}
#line 521
compiler_priv::show_and_count_errors($memory_2, $memory_0, $memory_4);
#line 522
$memory_6 = 1;
#line 522
undef($memory_0);
#line 522
undef($memory_1);
#line 522
undef($memory_2);
#line 522
undef($memory_3);
#line 522
undef($memory_4);
#line 522
undef($memory_5);
#line 522
return $memory_6;
#line 522
undef($memory_6);
#line 523
goto label_72;
#line 523
label_72:
#line 523
undef($memory_5);
#line 525
$memory_5 = "module checking";
#line 525
profile::begin($memory_5);
#line 525
undef($memory_5);
#line 526
$memory_5 = $memory_0->{'deref'};
#line 526
$memory_6 = $memory_0->{'check_public_fun'};
#line 526
compiler_priv::check_modules($memory_1, $memory_2, $memory_5, $memory_6);
#line 526
undef($memory_6);
#line 526
undef($memory_5);
#line 527
$memory_5 = "module_checking";
#line 527
profile::end($memory_5);
#line 527
undef($memory_5);
#line 528
$memory_5 = compiler_priv::show_and_count_errors($memory_2, $memory_0, $memory_4);
#line 528
$memory_6 = 0;
#line 528
$memory_5 = c_rt_lib::to_nl($memory_5 > $memory_6);
#line 528
undef($memory_6);
#line 528
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 528
if (c_rt_lib::check_true($memory_5)) {goto label_101;}
#line 529
$memory_6 = 1;
#line 529
undef($memory_0);
#line 529
undef($memory_1);
#line 529
undef($memory_2);
#line 529
undef($memory_3);
#line 529
undef($memory_4);
#line 529
undef($memory_5);
#line 529
return $memory_6;
#line 529
undef($memory_6);
#line 530
goto label_101;
#line 530
label_101:
#line 530
undef($memory_5);
#line 531
$memory_5 = $memory_0->{'language'};
#line 531
$memory_5 = c_rt_lib::ov_is($memory_5, 'ast');
#line 531
if (c_rt_lib::check_true($memory_5)) {goto label_108;}
#line 531
$memory_5 = $memory_0->{'language'};
#line 531
$memory_5 = c_rt_lib::ov_is($memory_5, 'nl');
#line 531
label_108:
#line 531
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 531
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 531
if (c_rt_lib::check_true($memory_5)) {goto label_151;}
#line 532
$memory_6 = "post processing";
#line 532
profile::begin($memory_6);
#line 532
undef($memory_6);
#line 533
$memory_7 = $memory_0->{'language'};
#line 533
$memory_6 = compiler_priv::get_generator_state($memory_7);
#line 533
undef($memory_7);
#line 534
$memory_7 = "search constants...";
#line 534
c_fe_lib::print($memory_7);
#line 534
undef($memory_7);
#line 535
$memory_8 = compiler_priv::get_mathematical_func($memory_0);
#line 535
$memory_9 = $memory_0->{'optimization'};
#line 535
$memory_7 = post_processing::init($memory_8, $memory_9);
#line 535
undef($memory_9);
#line 535
undef($memory_8);
#line 536
$memory_8 = "post processing";
#line 536
profile::end($memory_8);
#line 536
undef($memory_8);
#line 538
$memory_8 = "translate to nlasm";
#line 538
profile::begin($memory_8);
#line 538
undef($memory_8);
#line 539
$memory_8 = compiler_priv::translate($memory_1, $memory_7);
#line 540
$memory_9 = "translate to nlasm";
#line 540
profile::end($memory_9);
#line 540
undef($memory_9);
#line 542
$memory_9 = "save files";
#line 542
profile::begin($memory_9);
#line 542
undef($memory_9);
#line 543
$memory_9 = $memory_0->{'cache_path'};
#line 543
$memory_10 = $memory_0->{'language'};
#line 543
compiler_priv::generate_modules_to_files($memory_8, $memory_4, $memory_9, $memory_6, $memory_10);
#line 543
undef($memory_10);
#line 543
undef($memory_9);
#line 544
$memory_9 = "save files";
#line 544
profile::end($memory_9);
#line 544
undef($memory_9);
#line 544
undef($memory_6);
#line 544
undef($memory_7);
#line 544
undef($memory_8);
#line 545
goto label_210;
#line 545
label_151:
#line 546
$memory_8 = c_rt_lib::init_iter($memory_1);
#line 546
label_153:
#line 546
$memory_6 = c_rt_lib::is_end_hash($memory_8);
#line 546
if (c_rt_lib::check_true($memory_6)) {goto label_205;}
#line 546
$memory_6 = c_rt_lib::get_key_iter($memory_8);
#line 546
$memory_7 = c_rt_lib::hash_get_value($memory_1, $memory_6);
#line 547
$memory_9 = "saving file: ";
#line 547
$memory_9 = $memory_9 . $memory_6;
#line 547
c_fe_lib::print($memory_9);
#line 547
undef($memory_9);
#line 548
$memory_10 = hash::get_value($memory_4, $memory_6);
#line 548
$memory_10 = $memory_10->{'dst'};
#line 548
$memory_9 = compiler_priv::save_module_to_file($memory_7, $memory_10);
#line 548
undef($memory_10);
#line 548
$memory_10 = c_rt_lib::ov_is($memory_9, 'err');
#line 548
if (c_rt_lib::check_true($memory_10)) {goto label_173;}
#line 551
$memory_10 = c_rt_lib::ov_is($memory_9, 'ok');
#line 551
if (c_rt_lib::check_true($memory_10)) {goto label_196;}
#line 551
$memory_10 = "NOMATCHALERT";
#line 551
$memory_10 = [$memory_10,$memory_9];
#line 551
die(dfile::ssave($memory_10));
#line 548
label_173:
#line 548
$memory_11 = c_rt_lib::ov_as($memory_9, 'err');
#line 549
$memory_12 = "ERROR: ";
#line 549
$memory_12 = $memory_12 . $memory_11;
#line 549
c_fe_lib::print($memory_12);
#line 549
undef($memory_12);
#line 550
$memory_12 = 1;
#line 550
undef($memory_0);
#line 550
undef($memory_1);
#line 550
undef($memory_2);
#line 550
undef($memory_3);
#line 550
undef($memory_4);
#line 550
undef($memory_5);
#line 550
undef($memory_6);
#line 550
undef($memory_7);
#line 550
undef($memory_8);
#line 550
undef($memory_9);
#line 550
undef($memory_10);
#line 550
undef($memory_11);
#line 550
return $memory_12;
#line 550
undef($memory_12);
#line 550
undef($memory_11);
#line 551
goto label_200;
#line 551
label_196:
#line 551
$memory_11 = c_rt_lib::ov_as($memory_9, 'ok');
#line 551
undef($memory_11);
#line 552
goto label_200;
#line 552
label_200:
#line 552
undef($memory_9);
#line 552
undef($memory_10);
#line 553
$memory_8 = c_rt_lib::next_iter($memory_8);
#line 553
goto label_153;
#line 553
label_205:
#line 553
undef($memory_6);
#line 553
undef($memory_7);
#line 553
undef($memory_8);
#line 554
goto label_210;
#line 554
label_210:
#line 554
undef($memory_5);
#line 555
$memory_5 = 0;
#line 555
undef($memory_0);
#line 555
undef($memory_1);
#line 555
undef($memory_2);
#line 555
undef($memory_3);
#line 555
undef($memory_4);
#line 555
return $memory_5;
#line 555
undef($memory_5);
#line 555
undef($memory_1);
#line 555
undef($memory_2);
#line 555
undef($memory_3);
#line 555
undef($memory_4);
#line 555
undef($memory_0);
#line 555
return;
}

sub compiler_priv::construct_error_message($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;$memory_0 = $_[0];$memory_1 = $_[1];
#line 559
$memory_2 = "";
#line 563
$memory_4 = $memory_0->{'module'};
#line 563
$memory_3 = string::length($memory_4);
#line 563
undef($memory_4);
#line 563
$memory_4 = 0;
#line 563
$memory_3 = c_rt_lib::to_nl($memory_3 == $memory_4);
#line 563
undef($memory_4);
#line 563
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 563
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 563
if (c_rt_lib::check_true($memory_3)) {goto label_28;}
#line 560
$memory_4 = " mod: ";
#line 560
$memory_6 = $memory_0->{'module'};
#line 560
$memory_5 = hash::has_key($memory_1, $memory_6);
#line 560
undef($memory_6);
#line 560
if (c_rt_lib::check_true($memory_5)) {goto label_17;}
#line 562
$memory_5 = $memory_0->{'module'};
#line 562
goto label_22;
#line 562
label_17:
#line 561
$memory_6 = $memory_0->{'module'};
#line 561
$memory_5 = hash::get_value($memory_1, $memory_6);
#line 561
undef($memory_6);
#line 561
$memory_5 = $memory_5->{'src'};
#line 561
label_22:
#line 561
$memory_4 = $memory_4 . $memory_5;
#line 561
undef($memory_5);
#line 561
$memory_2 = $memory_2 . $memory_4;
#line 561
undef($memory_4);
#line 561
goto label_28;
#line 561
label_28:
#line 561
undef($memory_3);
#line 564
$memory_4 = $memory_0->{'line'};
#line 564
$memory_3 = string::length($memory_4);
#line 564
undef($memory_4);
#line 564
$memory_4 = 0;
#line 564
$memory_3 = c_rt_lib::to_nl($memory_3 == $memory_4);
#line 564
undef($memory_4);
#line 564
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 564
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 564
if (c_rt_lib::check_true($memory_3)) {goto label_46;}
#line 564
$memory_4 = " line: ";
#line 564
$memory_5 = $memory_0->{'line'};
#line 564
$memory_4 = $memory_4 . $memory_5;
#line 564
undef($memory_5);
#line 564
$memory_2 = $memory_2 . $memory_4;
#line 564
undef($memory_4);
#line 564
goto label_46;
#line 564
label_46:
#line 564
undef($memory_3);
#line 565
$memory_3 = string::lf();
#line 565
$memory_4 = "     ";
#line 565
$memory_3 = $memory_3 . $memory_4;
#line 565
undef($memory_4);
#line 565
$memory_4 = $memory_0->{'message'};
#line 565
$memory_3 = $memory_3 . $memory_4;
#line 565
undef($memory_4);
#line 565
$memory_2 = $memory_2 . $memory_3;
#line 565
undef($memory_3);
#line 566
undef($memory_0);
#line 566
undef($memory_1);
#line 566
return $memory_2;
#line 566
undef($memory_2);
#line 566
undef($memory_0);
#line 566
undef($memory_1);
#line 566
return;
}

sub compiler_priv::show_and_count_errors($$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;my $memory_13;my $memory_14;my $memory_15;my $memory_16;my $memory_17;my $memory_18;my $memory_19;$memory_0 = $_[0];$memory_1 = $_[1];$memory_2 = $_[2];
#line 570
$memory_3 = 0;
#line 571
$memory_4 = 0;
#line 572
$memory_5 = $memory_0->{'module_warnings'};
#line 572
$memory_8 = c_rt_lib::init_iter($memory_5);
#line 572
label_4:
#line 572
$memory_6 = c_rt_lib::is_end_hash($memory_8);
#line 572
if (c_rt_lib::check_true($memory_6)) {goto label_146;}
#line 572
$memory_6 = c_rt_lib::get_key_iter($memory_8);
#line 572
$memory_7 = c_rt_lib::hash_get_value($memory_5, $memory_6);
#line 573
$memory_9 = "WAR";
#line 574
$memory_10 = $memory_1->{'alarm'};
#line 574
$memory_10 = c_rt_lib::ov_is($memory_10, 'wall');
#line 574
$memory_10 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_10));
#line 574
if (c_rt_lib::check_true($memory_10)) {goto label_18;}
#line 574
$memory_11 = "ERR";
#line 574
$memory_9 = $memory_11;
#line 574
undef($memory_11);
#line 574
goto label_18;
#line 574
label_18:
#line 574
undef($memory_10);
#line 575
$memory_11 = 0;
#line 575
$memory_12 = 1;
#line 575
$memory_13 = c_rt_lib::array_len($memory_7);
#line 575
label_23:
#line 575
$memory_14 = c_rt_lib::to_nl($memory_11 >= $memory_13);
#line 575
if (c_rt_lib::check_true($memory_14)) {goto label_33;}
#line 575
$memory_10 = $memory_7->[$memory_11];
#line 576
$memory_15 = compiler_priv::construct_error_message($memory_10, $memory_2);
#line 576
$memory_15 = $memory_9 . $memory_15;
#line 576
c_fe_lib::print($memory_15);
#line 576
undef($memory_15);
#line 577
$memory_11 = $memory_11 + $memory_12;
#line 577
goto label_23;
#line 577
label_33:
#line 577
undef($memory_10);
#line 577
undef($memory_11);
#line 577
undef($memory_12);
#line 577
undef($memory_13);
#line 577
undef($memory_14);
#line 578
$memory_10 = array::len($memory_7);
#line 578
$memory_3 = $memory_3 + $memory_10;
#line 578
undef($memory_10);
#line 579
$memory_11 = $memory_0->{'type_warnings'};
#line 579
$memory_10 = hash::has_key($memory_11, $memory_6);
#line 579
undef($memory_11);
#line 579
$memory_10 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_10));
#line 579
if (c_rt_lib::check_true($memory_10)) {goto label_74;}
#line 580
$memory_12 = $memory_0->{'type_warnings'};
#line 580
$memory_11 = hash::get_value($memory_12, $memory_6);
#line 580
undef($memory_12);
#line 581
$memory_13 = 0;
#line 581
$memory_14 = 1;
#line 581
$memory_15 = c_rt_lib::array_len($memory_11);
#line 581
label_53:
#line 581
$memory_16 = c_rt_lib::to_nl($memory_13 >= $memory_15);
#line 581
if (c_rt_lib::check_true($memory_16)) {goto label_63;}
#line 581
$memory_12 = $memory_11->[$memory_13];
#line 582
$memory_17 = compiler_priv::construct_error_message($memory_12, $memory_2);
#line 582
$memory_17 = $memory_9 . $memory_17;
#line 582
c_fe_lib::print($memory_17);
#line 582
undef($memory_17);
#line 583
$memory_13 = $memory_13 + $memory_14;
#line 583
goto label_53;
#line 583
label_63:
#line 583
undef($memory_12);
#line 583
undef($memory_13);
#line 583
undef($memory_14);
#line 583
undef($memory_15);
#line 583
undef($memory_16);
#line 584
$memory_12 = array::len($memory_11);
#line 584
$memory_3 = $memory_3 + $memory_12;
#line 584
undef($memory_12);
#line 584
undef($memory_11);
#line 585
goto label_74;
#line 585
label_74:
#line 585
undef($memory_10);
#line 586
$memory_10 = "ERR";
#line 586
$memory_9 = $memory_10;
#line 586
undef($memory_10);
#line 587
$memory_11 = $memory_0->{'module_errors'};
#line 587
$memory_10 = hash::get_value($memory_11, $memory_6);
#line 587
undef($memory_11);
#line 588
$memory_12 = 0;
#line 588
$memory_13 = 1;
#line 588
$memory_14 = c_rt_lib::array_len($memory_10);
#line 588
label_85:
#line 588
$memory_15 = c_rt_lib::to_nl($memory_12 >= $memory_14);
#line 588
if (c_rt_lib::check_true($memory_15)) {goto label_97;}
#line 588
$memory_11 = $memory_10->[$memory_12];
#line 589
$memory_16 = "ERR";
#line 589
$memory_17 = compiler_priv::construct_error_message($memory_11, $memory_2);
#line 589
$memory_16 = $memory_16 . $memory_17;
#line 589
undef($memory_17);
#line 589
c_fe_lib::print($memory_16);
#line 589
undef($memory_16);
#line 590
$memory_12 = $memory_12 + $memory_13;
#line 590
goto label_85;
#line 590
label_97:
#line 590
undef($memory_11);
#line 590
undef($memory_12);
#line 590
undef($memory_13);
#line 590
undef($memory_14);
#line 590
undef($memory_15);
#line 591
$memory_11 = array::len($memory_10);
#line 591
$memory_4 = $memory_4 + $memory_11;
#line 591
undef($memory_11);
#line 592
$memory_12 = $memory_0->{'type_errors'};
#line 592
$memory_11 = hash::has_key($memory_12, $memory_6);
#line 592
undef($memory_12);
#line 592
$memory_11 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_11));
#line 592
if (c_rt_lib::check_true($memory_11)) {goto label_140;}
#line 593
$memory_13 = $memory_0->{'type_errors'};
#line 593
$memory_12 = hash::get_value($memory_13, $memory_6);
#line 593
undef($memory_13);
#line 594
$memory_14 = 0;
#line 594
$memory_15 = 1;
#line 594
$memory_16 = c_rt_lib::array_len($memory_12);
#line 594
label_117:
#line 594
$memory_17 = c_rt_lib::to_nl($memory_14 >= $memory_16);
#line 594
if (c_rt_lib::check_true($memory_17)) {goto label_129;}
#line 594
$memory_13 = $memory_12->[$memory_14];
#line 595
$memory_18 = "ERR";
#line 595
$memory_19 = compiler_priv::construct_error_message($memory_13, $memory_2);
#line 595
$memory_18 = $memory_18 . $memory_19;
#line 595
undef($memory_19);
#line 595
c_fe_lib::print($memory_18);
#line 595
undef($memory_18);
#line 596
$memory_14 = $memory_14 + $memory_15;
#line 596
goto label_117;
#line 596
label_129:
#line 596
undef($memory_13);
#line 596
undef($memory_14);
#line 596
undef($memory_15);
#line 596
undef($memory_16);
#line 596
undef($memory_17);
#line 597
$memory_13 = array::len($memory_12);
#line 597
$memory_4 = $memory_4 + $memory_13;
#line 597
undef($memory_13);
#line 597
undef($memory_12);
#line 598
goto label_140;
#line 598
label_140:
#line 598
undef($memory_11);
#line 598
undef($memory_9);
#line 598
undef($memory_10);
#line 599
$memory_8 = c_rt_lib::next_iter($memory_8);
#line 599
goto label_4;
#line 599
label_146:
#line 599
undef($memory_5);
#line 599
undef($memory_6);
#line 599
undef($memory_7);
#line 599
undef($memory_8);
#line 600
$memory_5 = $memory_0->{'loop_error'};
#line 600
$memory_6 = c_rt_lib::ov_is($memory_5, 'loop');
#line 600
if (c_rt_lib::check_true($memory_6)) {goto label_159;}
#line 607
$memory_6 = c_rt_lib::ov_is($memory_5, 'ok');
#line 607
if (c_rt_lib::check_true($memory_6)) {goto label_194;}
#line 607
$memory_6 = "NOMATCHALERT";
#line 607
$memory_6 = [$memory_6,$memory_5];
#line 607
die(dfile::ssave($memory_6));
#line 600
label_159:
#line 600
$memory_7 = c_rt_lib::ov_as($memory_5, 'loop');
#line 601
$memory_8 = "";
#line 602
$memory_10 = 0;
#line 602
$memory_11 = 1;
#line 602
$memory_12 = c_rt_lib::array_len($memory_7);
#line 602
label_165:
#line 602
$memory_13 = c_rt_lib::to_nl($memory_10 >= $memory_12);
#line 602
if (c_rt_lib::check_true($memory_13)) {goto label_175;}
#line 602
$memory_9 = $memory_7->[$memory_10];
#line 603
$memory_14 = " -> ";
#line 603
$memory_14 = $memory_9 . $memory_14;
#line 603
$memory_8 = $memory_8 . $memory_14;
#line 603
undef($memory_14);
#line 604
$memory_10 = $memory_10 + $memory_11;
#line 604
goto label_165;
#line 604
label_175:
#line 604
undef($memory_9);
#line 604
undef($memory_10);
#line 604
undef($memory_11);
#line 604
undef($memory_12);
#line 604
undef($memory_13);
#line 605
$memory_9 = "ERR Loop found in module imports: ";
#line 605
$memory_9 = $memory_9 . $memory_8;
#line 605
$memory_10 = ". ";
#line 605
$memory_9 = $memory_9 . $memory_10;
#line 605
undef($memory_10);
#line 605
c_fe_lib::print($memory_9);
#line 605
undef($memory_9);
#line 606
$memory_9 = 1;
#line 606
$memory_4 = $memory_4 + $memory_9;
#line 606
undef($memory_9);
#line 606
undef($memory_8);
#line 606
undef($memory_7);
#line 607
goto label_196;
#line 607
label_194:
#line 608
goto label_196;
#line 608
label_196:
#line 608
undef($memory_5);
#line 608
undef($memory_6);
#line 609
$memory_5 = $memory_1->{'alarm'};
#line 609
$memory_5 = c_rt_lib::ov_is($memory_5, 'wall');
#line 609
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 609
if (c_rt_lib::check_true($memory_5)) {goto label_208;}
#line 610
$memory_4 = $memory_4 + $memory_3;
#line 611
$memory_6 = 0;
#line 611
$memory_3 = $memory_6;
#line 611
undef($memory_6);
#line 612
goto label_208;
#line 612
label_208:
#line 612
undef($memory_5);
#line 613
$memory_5 = "ERR: ";
#line 613
$memory_5 = $memory_5 . $memory_4;
#line 613
$memory_6 = " WAR: ";
#line 613
$memory_5 = $memory_5 . $memory_6;
#line 613
undef($memory_6);
#line 613
$memory_5 = $memory_5 . $memory_3;
#line 613
c_fe_lib::print($memory_5);
#line 613
undef($memory_5);
#line 614
undef($memory_0);
#line 614
undef($memory_1);
#line 614
undef($memory_2);
#line 614
undef($memory_3);
#line 614
return $memory_4;
#line 614
undef($memory_3);
#line 614
undef($memory_4);
#line 614
undef($memory_0);
#line 614
undef($memory_1);
#line 614
undef($memory_2);
#line 614
return;
}

sub compiler_priv::translate($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;$memory_0 = $_[0];$memory_1 = $_[1];Scalar::Util::weaken($_[1]) if ref($_[1]);
#line 618
$memory_2 = {};
#line 619
$memory_5 = c_rt_lib::init_iter($memory_0);
#line 619
label_2:
#line 619
$memory_3 = c_rt_lib::is_end_hash($memory_5);
#line 619
if (c_rt_lib::check_true($memory_3)) {goto label_12;}
#line 619
$memory_3 = c_rt_lib::get_key_iter($memory_5);
#line 619
$memory_4 = c_rt_lib::hash_get_value($memory_0, $memory_3);
#line 620
$memory_6 = translator::translate($memory_4);
#line 621
hash::set_value($memory_2, $memory_3, $memory_6);
#line 621
undef($memory_6);
#line 622
$memory_5 = c_rt_lib::next_iter($memory_5);
#line 622
goto label_2;
#line 622
label_12:
#line 622
undef($memory_3);
#line 622
undef($memory_4);
#line 622
undef($memory_5);
#line 623
post_processing::find($memory_1, $memory_2);
#line 624
undef($memory_0);
#line 624
$_[1] = $memory_1;return $memory_2;
#line 624
undef($memory_2);
#line 624
undef($memory_0);
#line 624
$_[1] = $memory_1;return;
$_[1] = $memory_1;}

sub compiler_priv::check_modules($$$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;my $memory_13;my $memory_14;my $memory_15;my $memory_16;my $memory_17;$memory_0 = $_[0];$memory_1 = $_[1];Scalar::Util::weaken($_[1]) if ref($_[1]);$memory_2 = $_[2];$memory_3 = $_[3];
#line 629
$memory_4 = "type checking...";
#line 629
c_fe_lib::print($memory_4);
#line 629
undef($memory_4);
#line 630
$memory_4 = type_checker::check_modules($memory_0, $memory_0);
#line 631
$memory_5 = $memory_3;
#line 631
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 631
if (c_rt_lib::check_true($memory_5)) {goto label_62;}
#line 632
$memory_6 = {};
#line 633
$memory_8 = "public_functions.df";
#line 633
$memory_7 = c_fe_lib::file_to_string($memory_8);
#line 633
undef($memory_8);
#line 633
$memory_8 = c_rt_lib::ov_is($memory_7, 'ok');
#line 633
if (c_rt_lib::check_true($memory_8)) {goto label_18;}
#line 636
$memory_8 = c_rt_lib::ov_is($memory_7, 'err');
#line 636
if (c_rt_lib::check_true($memory_8)) {goto label_32;}
#line 636
$memory_8 = "NOMATCHALERT";
#line 636
$memory_8 = [$memory_8,$memory_7];
#line 636
die(dfile::ssave($memory_8));
#line 633
label_18:
#line 633
$memory_9 = c_rt_lib::ov_as($memory_7, 'ok');
#line 634
$memory_10 = dfile::sload($memory_9);
#line 634
$memory_6 = $memory_10;
#line 634
undef($memory_10);
#line 635
$memory_12 = ptd::sim();
#line 635
$memory_11 = ptd::hash($memory_12);
#line 635
undef($memory_12);
#line 635
$memory_10 = ptd::ensure($memory_11, $memory_6);
#line 635
undef($memory_11);
#line 635
$memory_6 = $memory_10;
#line 635
undef($memory_10);
#line 635
undef($memory_9);
#line 636
goto label_36;
#line 636
label_32:
#line 636
$memory_9 = c_rt_lib::ov_as($memory_7, 'err');
#line 636
undef($memory_9);
#line 637
goto label_36;
#line 637
label_36:
#line 637
undef($memory_7);
#line 637
undef($memory_8);
#line 638
$memory_7 = {};
#line 639
$memory_8 = [];
#line 640
$memory_11 = c_rt_lib::init_iter($memory_0);
#line 640
label_42:
#line 640
$memory_9 = c_rt_lib::is_end_hash($memory_11);
#line 640
if (c_rt_lib::check_true($memory_9)) {goto label_53;}
#line 640
$memory_9 = c_rt_lib::get_key_iter($memory_11);
#line 640
$memory_10 = c_rt_lib::hash_get_value($memory_0, $memory_9);
#line 641
$memory_12 = c_rt_lib::to_nl(1);
#line 641
module_checker::check_module($memory_10, $memory_12, $memory_7);
#line 641
undef($memory_12);
#line 642
array::push($memory_8, $memory_10);
#line 643
$memory_11 = c_rt_lib::next_iter($memory_11);
#line 643
goto label_42;
#line 643
label_53:
#line 643
undef($memory_9);
#line 643
undef($memory_10);
#line 643
undef($memory_11);
#line 645
module_checker::check_used_functions($memory_6, $memory_7, $memory_8, $memory_4);
#line 645
undef($memory_6);
#line 645
undef($memory_7);
#line 645
undef($memory_8);
#line 646
goto label_62;
#line 646
label_62:
#line 646
undef($memory_5);
#line 647
$memory_6 = $memory_4->{'errors'};
#line 647
$memory_5 = array::len($memory_6);
#line 647
undef($memory_6);
#line 648
$memory_6 = $memory_4->{'errors'};
#line 648
$memory_8 = 0;
#line 648
$memory_9 = 1;
#line 648
$memory_10 = c_rt_lib::array_len($memory_6);
#line 648
label_71:
#line 648
$memory_11 = c_rt_lib::to_nl($memory_8 >= $memory_10);
#line 648
if (c_rt_lib::check_true($memory_11)) {goto label_106;}
#line 648
$memory_7 = $memory_6->[$memory_8];
#line 649
$memory_12 = [];
#line 650
$memory_14 = $memory_1->{'type_errors'};
#line 650
$memory_15 = $memory_7->{'module'};
#line 650
$memory_13 = hash::has_key($memory_14, $memory_15);
#line 650
undef($memory_15);
#line 650
undef($memory_14);
#line 650
$memory_13 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_13));
#line 650
if (c_rt_lib::check_true($memory_13)) {goto label_91;}
#line 651
$memory_15 = $memory_1->{'type_errors'};
#line 651
$memory_16 = $memory_7->{'module'};
#line 651
$memory_14 = hash::get_value($memory_15, $memory_16);
#line 651
undef($memory_16);
#line 651
undef($memory_15);
#line 651
$memory_12 = $memory_14;
#line 651
undef($memory_14);
#line 652
goto label_91;
#line 652
label_91:
#line 652
undef($memory_13);
#line 653
array::push($memory_12, $memory_7);
#line 654
$memory_13 = "type_errors";
#line 654
$memory_13 = c_rt_lib::get_ref_hash($memory_1, $memory_13);
#line 654
$memory_14 = $memory_7->{'module'};
#line 654
hash::set_value($memory_13, $memory_14, $memory_12);
#line 654
undef($memory_14);
#line 654
$memory_14 = "type_errors";
#line 654
c_rt_lib::set_ref_hash($memory_1, $memory_14, $memory_13);
#line 654
undef($memory_14);
#line 654
undef($memory_13);
#line 654
undef($memory_12);
#line 655
$memory_8 = $memory_8 + $memory_9;
#line 655
goto label_71;
#line 655
label_106:
#line 655
undef($memory_6);
#line 655
undef($memory_7);
#line 655
undef($memory_8);
#line 655
undef($memory_9);
#line 655
undef($memory_10);
#line 655
undef($memory_11);
#line 656
$memory_6 = $memory_4->{'warnings'};
#line 656
$memory_8 = 0;
#line 656
$memory_9 = 1;
#line 656
$memory_10 = c_rt_lib::array_len($memory_6);
#line 656
label_117:
#line 656
$memory_11 = c_rt_lib::to_nl($memory_8 >= $memory_10);
#line 656
if (c_rt_lib::check_true($memory_11)) {goto label_152;}
#line 656
$memory_7 = $memory_6->[$memory_8];
#line 657
$memory_12 = [];
#line 658
$memory_14 = $memory_1->{'type_warnings'};
#line 658
$memory_15 = $memory_7->{'module'};
#line 658
$memory_13 = hash::has_key($memory_14, $memory_15);
#line 658
undef($memory_15);
#line 658
undef($memory_14);
#line 658
$memory_13 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_13));
#line 658
if (c_rt_lib::check_true($memory_13)) {goto label_137;}
#line 659
$memory_15 = $memory_1->{'type_warnings'};
#line 659
$memory_16 = $memory_7->{'module'};
#line 659
$memory_14 = hash::get_value($memory_15, $memory_16);
#line 659
undef($memory_16);
#line 659
undef($memory_15);
#line 659
$memory_12 = $memory_14;
#line 659
undef($memory_14);
#line 660
goto label_137;
#line 660
label_137:
#line 660
undef($memory_13);
#line 661
array::push($memory_12, $memory_7);
#line 662
$memory_13 = "type_warnings";
#line 662
$memory_13 = c_rt_lib::get_ref_hash($memory_1, $memory_13);
#line 662
$memory_14 = $memory_7->{'module'};
#line 662
hash::set_value($memory_13, $memory_14, $memory_12);
#line 662
undef($memory_14);
#line 662
$memory_14 = "type_warnings";
#line 662
c_rt_lib::set_ref_hash($memory_1, $memory_14, $memory_13);
#line 662
undef($memory_14);
#line 662
undef($memory_13);
#line 662
undef($memory_12);
#line 663
$memory_8 = $memory_8 + $memory_9;
#line 663
goto label_117;
#line 663
label_152:
#line 663
undef($memory_6);
#line 663
undef($memory_7);
#line 663
undef($memory_8);
#line 663
undef($memory_9);
#line 663
undef($memory_10);
#line 663
undef($memory_11);
#line 664
$memory_6 = 0;
#line 664
$memory_6 = c_rt_lib::to_nl($memory_5 == $memory_6);
#line 664
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 664
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 664
if (c_rt_lib::check_true($memory_6)) {goto label_172;}
#line 664
$memory_7 = "Found ";
#line 664
$memory_7 = $memory_7 . $memory_5;
#line 664
$memory_8 = " errors of types. ";
#line 664
$memory_7 = $memory_7 . $memory_8;
#line 664
undef($memory_8);
#line 664
c_fe_lib::print($memory_7);
#line 664
undef($memory_7);
#line 664
goto label_172;
#line 664
label_172:
#line 664
undef($memory_6);
#line 665
$memory_6 = {};
#line 666
$memory_9 = c_rt_lib::init_iter($memory_0);
#line 666
label_176:
#line 666
$memory_7 = c_rt_lib::is_end_hash($memory_9);
#line 666
if (c_rt_lib::check_true($memory_7)) {goto label_206;}
#line 666
$memory_7 = c_rt_lib::get_key_iter($memory_9);
#line 666
$memory_8 = c_rt_lib::hash_get_value($memory_0, $memory_7);
#line 667
$memory_10 = [];
#line 668
$memory_11 = $memory_8->{'import'};
#line 668
$memory_13 = 0;
#line 668
$memory_14 = 1;
#line 668
$memory_15 = c_rt_lib::array_len($memory_11);
#line 668
label_186:
#line 668
$memory_16 = c_rt_lib::to_nl($memory_13 >= $memory_15);
#line 668
if (c_rt_lib::check_true($memory_16)) {goto label_195;}
#line 668
$memory_12 = $memory_11->[$memory_13];
#line 669
$memory_17 = $memory_12->{'name'};
#line 669
array::push($memory_10, $memory_17);
#line 669
undef($memory_17);
#line 670
$memory_13 = $memory_13 + $memory_14;
#line 670
goto label_186;
#line 670
label_195:
#line 670
undef($memory_11);
#line 670
undef($memory_12);
#line 670
undef($memory_13);
#line 670
undef($memory_14);
#line 670
undef($memory_15);
#line 670
undef($memory_16);
#line 671
hash::set_value($memory_6, $memory_7, $memory_10);
#line 671
undef($memory_10);
#line 672
$memory_9 = c_rt_lib::next_iter($memory_9);
#line 672
goto label_176;
#line 672
label_206:
#line 672
undef($memory_7);
#line 672
undef($memory_8);
#line 672
undef($memory_9);
#line 673
$memory_7 = module_checker::search_loops($memory_6);
#line 673
$memory_8 = $memory_7;
#line 673
 if (c_rt_lib::get_hashcount($memory_1) > 1) {$memory_1 = {%{$memory_1}};}$memory_1->{'loop_error'} = $memory_8;
#line 673
undef($memory_7);
#line 673
undef($memory_8);
#line 674
$memory_7 = $memory_2;
#line 674
$memory_7 = c_rt_lib::ov_is($memory_7, 'yes');
#line 674
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 674
if (c_rt_lib::check_true($memory_7)) {goto label_255;}
#line 675
$memory_8 = "deleted types: ";
#line 675
$memory_10 = $memory_4->{'deref'};
#line 675
$memory_10 = $memory_10->{'delete'};
#line 675
$memory_9 = array::len($memory_10);
#line 675
undef($memory_10);
#line 675
$memory_8 = $memory_8 . $memory_9;
#line 675
undef($memory_9);
#line 675
c_fe_lib::print($memory_8);
#line 675
undef($memory_8);
#line 676
$memory_8 = "created types: ";
#line 676
$memory_10 = $memory_4->{'deref'};
#line 676
$memory_10 = $memory_10->{'create'};
#line 676
$memory_9 = array::len($memory_10);
#line 676
undef($memory_10);
#line 676
$memory_8 = $memory_8 . $memory_9;
#line 676
undef($memory_9);
#line 676
c_fe_lib::print($memory_8);
#line 676
undef($memory_8);
#line 677
$memory_8 = reference_generator::generate($memory_0);
#line 678
$memory_11 = $memory_2;
#line 678
$memory_11 = c_rt_lib::ov_as($memory_11, 'yes');
#line 678
$memory_13 = $memory_4->{'deref'};
#line 678
$memory_12 = compiler_priv::serialize_deref($memory_13, $memory_8);
#line 678
undef($memory_13);
#line 678
$memory_10 = c_fe_lib::string_to_file($memory_11, $memory_12);
#line 678
undef($memory_12);
#line 678
undef($memory_11);
#line 678
$memory_9 = c_rt_lib::ov_is($memory_10, 'ok');
#line 678
if (c_rt_lib::check_true($memory_9)) {goto label_250;}
#line 678
$memory_10 = c_rt_lib::ov_mk_arg('ensure', $memory_10);
#line 678
die(dfile::ssave($memory_10));
#line 678
label_250:
#line 678
undef($memory_9);
#line 678
undef($memory_10);
#line 678
undef($memory_8);
#line 679
goto label_255;
#line 679
label_255:
#line 679
undef($memory_7);
#line 679
undef($memory_4);
#line 679
undef($memory_5);
#line 679
undef($memory_6);
#line 679
undef($memory_0);
#line 679
undef($memory_2);
#line 679
undef($memory_3);
#line 679
$_[1] = $memory_1;return;
$_[1] = $memory_1;}

sub compiler_priv::serialize_deref($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;$memory_0 = $_[0];$memory_1 = $_[1];
#line 683
$memory_2 = [];
#line 684
$memory_3 = compiler_priv::process_deref($memory_0);
#line 684
array::append($memory_2, $memory_3);
#line 684
undef($memory_3);
#line 685
array::append($memory_2, $memory_1);
#line 686
$memory_5 = {
	module => "reference_generator",
	name => "refs",
};
#line 686
$memory_5 = c_rt_lib::ov_mk_arg('ref', $memory_5);
#line 686
$memory_4 = ptd::ensure($memory_5, $memory_2);
#line 686
undef($memory_5);
#line 686
$memory_3 = dfile::ssave_net_format($memory_4);
#line 686
undef($memory_4);
#line 686
undef($memory_0);
#line 686
undef($memory_1);
#line 686
undef($memory_2);
#line 686
return $memory_3;
#line 686
undef($memory_3);
#line 686
undef($memory_2);
#line 686
undef($memory_0);
#line 686
undef($memory_1);
#line 686
return;
}

sub compiler_priv::process_deref($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;$memory_0 = $_[0];
#line 691
$memory_1 = [];
#line 692
$memory_2 = $memory_0->{'create'};
#line 692
$memory_4 = 0;
#line 692
$memory_5 = 1;
#line 692
$memory_6 = c_rt_lib::array_len($memory_2);
#line 692
label_5:
#line 692
$memory_7 = c_rt_lib::to_nl($memory_4 >= $memory_6);
#line 692
if (c_rt_lib::check_true($memory_7)) {goto label_15;}
#line 692
$memory_3 = $memory_2->[$memory_4];
#line 693
$memory_8 = c_rt_lib::ov_mk_arg('delete', $memory_3);
#line 693
$memory_8 = c_rt_lib::ov_mk_arg('deref', $memory_8);
#line 693
c_rt_lib::array_push($memory_1, $memory_8);
#line 693
undef($memory_8);
#line 694
$memory_4 = $memory_4 + $memory_5;
#line 694
goto label_5;
#line 694
label_15:
#line 694
undef($memory_2);
#line 694
undef($memory_3);
#line 694
undef($memory_4);
#line 694
undef($memory_5);
#line 694
undef($memory_6);
#line 694
undef($memory_7);
#line 696
$memory_2 = $memory_0->{'delete'};
#line 696
$memory_4 = 0;
#line 696
$memory_5 = 1;
#line 696
$memory_6 = c_rt_lib::array_len($memory_2);
#line 696
label_26:
#line 696
$memory_7 = c_rt_lib::to_nl($memory_4 >= $memory_6);
#line 696
if (c_rt_lib::check_true($memory_7)) {goto label_36;}
#line 696
$memory_3 = $memory_2->[$memory_4];
#line 697
$memory_8 = c_rt_lib::ov_mk_arg('create', $memory_3);
#line 697
$memory_8 = c_rt_lib::ov_mk_arg('deref', $memory_8);
#line 697
c_rt_lib::array_push($memory_1, $memory_8);
#line 697
undef($memory_8);
#line 698
$memory_4 = $memory_4 + $memory_5;
#line 698
goto label_26;
#line 698
label_36:
#line 698
undef($memory_2);
#line 698
undef($memory_3);
#line 698
undef($memory_4);
#line 698
undef($memory_5);
#line 698
undef($memory_6);
#line 698
undef($memory_7);
#line 699
undef($memory_0);
#line 699
return $memory_1;
#line 699
undef($memory_1);
#line 699
undef($memory_0);
#line 699
return;
}

sub compiler_priv::try_save_file($$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;$memory_0 = $_[0];$memory_1 = $_[1];$memory_2 = $_[2];Scalar::Util::weaken($_[2]) if ref($_[2]);
#line 703
$memory_3 = c_fe_lib::string_to_file($memory_1, $memory_0);
#line 703
$memory_4 = c_rt_lib::ov_is($memory_3, 'ok');
#line 703
if (c_rt_lib::check_true($memory_4)) {goto label_8;}
#line 704
$memory_4 = c_rt_lib::ov_is($memory_3, 'err');
#line 704
if (c_rt_lib::check_true($memory_4)) {goto label_12;}
#line 704
$memory_4 = "NOMATCHALERT";
#line 704
$memory_4 = [$memory_4,$memory_3];
#line 704
die(dfile::ssave($memory_4));
#line 703
label_8:
#line 703
$memory_5 = c_rt_lib::ov_as($memory_3, 'ok');
#line 703
undef($memory_5);
#line 704
goto label_23;
#line 704
label_12:
#line 704
$memory_5 = c_rt_lib::ov_as($memory_3, 'err');
#line 705
$memory_6 = "ERROR: ";
#line 705
$memory_6 = $memory_6 . $memory_5;
#line 705
c_fe_lib::print($memory_6);
#line 705
undef($memory_6);
#line 706
$memory_6 = c_rt_lib::to_nl(1);
#line 706
$memory_2 = $memory_6;
#line 706
undef($memory_6);
#line 706
undef($memory_5);
#line 707
goto label_23;
#line 707
label_23:
#line 707
undef($memory_3);
#line 707
undef($memory_4);
#line 707
undef($memory_0);
#line 707
undef($memory_1);
#line 707
$_[2] = $memory_2;return;
$_[2] = $memory_2;}

sub compiler_priv::generate_modules_to_files($$$$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;my $memory_13;my $memory_14;my $memory_15;$memory_0 = $_[0];$memory_1 = $_[1];$memory_2 = $_[2];$memory_3 = $_[3];Scalar::Util::weaken($_[3]) if ref($_[3]);$memory_4 = $_[4];
#line 715
$memory_5 = {};
#line 716
$memory_6 = c_rt_lib::ov_is($memory_4, 'nla');
#line 716
if (c_rt_lib::check_true($memory_6)) {goto label_20;}
#line 724
$memory_6 = c_rt_lib::ov_is($memory_4, 'c');
#line 724
if (c_rt_lib::check_true($memory_6)) {goto label_56;}
#line 738
$memory_6 = c_rt_lib::ov_is($memory_4, 'pm');
#line 738
if (c_rt_lib::check_true($memory_6)) {goto label_123;}
#line 747
$memory_6 = c_rt_lib::ov_is($memory_4, 'js');
#line 747
if (c_rt_lib::check_true($memory_6)) {goto label_159;}
#line 756
$memory_6 = c_rt_lib::ov_is($memory_4, 'java');
#line 756
if (c_rt_lib::check_true($memory_6)) {goto label_199;}
#line 765
$memory_6 = c_rt_lib::ov_is($memory_4, 'nl');
#line 765
if (c_rt_lib::check_true($memory_6)) {goto label_235;}
#line 767
$memory_6 = c_rt_lib::ov_is($memory_4, 'ast');
#line 767
if (c_rt_lib::check_true($memory_6)) {goto label_240;}
#line 769
$memory_6 = c_rt_lib::ov_is($memory_4, 'call_graph');
#line 769
if (c_rt_lib::check_true($memory_6)) {goto label_245;}
#line 769
$memory_6 = "NOMATCHALERT";
#line 769
$memory_6 = [$memory_6,$memory_4];
#line 769
die(dfile::ssave($memory_6));
#line 716
label_20:
#line 717
$memory_9 = c_rt_lib::init_iter($memory_0);
#line 717
label_22:
#line 717
$memory_7 = c_rt_lib::is_end_hash($memory_9);
#line 717
if (c_rt_lib::check_true($memory_7)) {goto label_51;}
#line 717
$memory_7 = c_rt_lib::get_key_iter($memory_9);
#line 717
$memory_8 = c_rt_lib::hash_get_value($memory_0, $memory_7);
#line 718
$memory_10 = c_rt_lib::to_nl(0);
#line 719
$memory_11 = hash::get_value($memory_1, $memory_7);
#line 719
$memory_11 = $memory_11->{'dst'};
#line 719
$memory_11 = c_rt_lib::ov_as($memory_11, 'nla');
#line 720
$memory_12 = "saving file: ";
#line 720
$memory_12 = $memory_12 . $memory_7;
#line 720
c_fe_lib::print($memory_12);
#line 720
undef($memory_12);
#line 721
$memory_12 = dfile::ssave($memory_8);
#line 721
compiler_priv::try_save_file($memory_12, $memory_11, $memory_10);
#line 721
undef($memory_12);
#line 722
$memory_12 = $memory_10;
#line 722
$memory_12 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_12));
#line 722
if (c_rt_lib::check_true($memory_12)) {goto label_45;}
#line 722
$memory_13 = "";
#line 722
hash::set_value($memory_5, $memory_7, $memory_13);
#line 722
undef($memory_13);
#line 722
goto label_45;
#line 722
label_45:
#line 722
undef($memory_12);
#line 722
undef($memory_10);
#line 722
undef($memory_11);
#line 723
$memory_9 = c_rt_lib::next_iter($memory_9);
#line 723
goto label_22;
#line 723
label_51:
#line 723
undef($memory_7);
#line 723
undef($memory_8);
#line 723
undef($memory_9);
#line 724
goto label_269;
#line 724
label_56:
#line 725
$memory_7 = generator_c::generate($memory_0, $memory_3);
#line 726
$memory_8 = c_rt_lib::to_nl(0);
#line 727
$memory_9 = $memory_7->{'modules'};
#line 727
$memory_12 = c_rt_lib::init_iter($memory_9);
#line 727
label_61:
#line 727
$memory_10 = c_rt_lib::is_end_hash($memory_12);
#line 727
if (c_rt_lib::check_true($memory_10)) {goto label_98;}
#line 727
$memory_10 = c_rt_lib::get_key_iter($memory_12);
#line 727
$memory_11 = c_rt_lib::hash_get_value($memory_9, $memory_10);
#line 728
$memory_13 = c_rt_lib::to_nl(0);
#line 728
$memory_8 = $memory_13;
#line 728
undef($memory_13);
#line 729
$memory_13 = hash::get_value($memory_1, $memory_10);
#line 729
$memory_13 = $memory_13->{'dst'};
#line 729
$memory_13 = c_rt_lib::ov_as($memory_13, 'c');
#line 730
$memory_14 = "saving file: ";
#line 730
$memory_14 = $memory_14 . $memory_10;
#line 730
c_fe_lib::print($memory_14);
#line 730
undef($memory_14);
#line 731
$memory_14 = $memory_11->{'c'};
#line 731
$memory_15 = $memory_13->{'c'};
#line 731
compiler_priv::try_save_file($memory_14, $memory_15, $memory_8);
#line 731
undef($memory_15);
#line 731
undef($memory_14);
#line 732
$memory_14 = $memory_11->{'h'};
#line 732
$memory_15 = $memory_13->{'h'};
#line 732
compiler_priv::try_save_file($memory_14, $memory_15, $memory_8);
#line 732
undef($memory_15);
#line 732
undef($memory_14);
#line 733
$memory_14 = $memory_8;
#line 733
$memory_14 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_14));
#line 733
if (c_rt_lib::check_true($memory_14)) {goto label_93;}
#line 733
$memory_15 = "";
#line 733
hash::set_value($memory_5, $memory_10, $memory_15);
#line 733
undef($memory_15);
#line 733
goto label_93;
#line 733
label_93:
#line 733
undef($memory_14);
#line 733
undef($memory_13);
#line 734
$memory_12 = c_rt_lib::next_iter($memory_12);
#line 734
goto label_61;
#line 734
label_98:
#line 734
undef($memory_9);
#line 734
undef($memory_10);
#line 734
undef($memory_11);
#line 734
undef($memory_12);
#line 735
$memory_9 = "saving global const file";
#line 735
c_fe_lib::print($memory_9);
#line 735
undef($memory_9);
#line 736
$memory_9 = $memory_7->{'global_const'};
#line 736
$memory_9 = $memory_9->{'c'};
#line 736
$memory_10 = "c_global_const.c";
#line 736
$memory_10 = $memory_2 . $memory_10;
#line 736
compiler_priv::try_save_file($memory_9, $memory_10, $memory_8);
#line 736
undef($memory_10);
#line 736
undef($memory_9);
#line 737
$memory_9 = $memory_7->{'global_const'};
#line 737
$memory_9 = $memory_9->{'h'};
#line 737
$memory_10 = "c_global_const.h";
#line 737
$memory_10 = $memory_2 . $memory_10;
#line 737
compiler_priv::try_save_file($memory_9, $memory_10, $memory_8);
#line 737
undef($memory_10);
#line 737
undef($memory_9);
#line 737
undef($memory_7);
#line 737
undef($memory_8);
#line 738
goto label_269;
#line 738
label_123:
#line 739
$memory_9 = c_rt_lib::init_iter($memory_0);
#line 739
label_125:
#line 739
$memory_7 = c_rt_lib::is_end_hash($memory_9);
#line 739
if (c_rt_lib::check_true($memory_7)) {goto label_154;}
#line 739
$memory_7 = c_rt_lib::get_key_iter($memory_9);
#line 739
$memory_8 = c_rt_lib::hash_get_value($memory_0, $memory_7);
#line 740
$memory_10 = c_rt_lib::to_nl(0);
#line 741
$memory_11 = generator_pm::generate($memory_8);
#line 742
$memory_12 = hash::get_value($memory_1, $memory_7);
#line 742
$memory_12 = $memory_12->{'dst'};
#line 742
$memory_12 = c_rt_lib::ov_as($memory_12, 'pm');
#line 743
$memory_13 = "saving file: ";
#line 743
$memory_13 = $memory_13 . $memory_7;
#line 743
c_fe_lib::print($memory_13);
#line 743
undef($memory_13);
#line 744
compiler_priv::try_save_file($memory_11, $memory_12, $memory_10);
#line 745
$memory_13 = $memory_10;
#line 745
$memory_13 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_13));
#line 745
if (c_rt_lib::check_true($memory_13)) {goto label_147;}
#line 745
$memory_14 = "";
#line 745
hash::set_value($memory_5, $memory_7, $memory_14);
#line 745
undef($memory_14);
#line 745
goto label_147;
#line 745
label_147:
#line 745
undef($memory_13);
#line 745
undef($memory_10);
#line 745
undef($memory_11);
#line 745
undef($memory_12);
#line 746
$memory_9 = c_rt_lib::next_iter($memory_9);
#line 746
goto label_125;
#line 746
label_154:
#line 746
undef($memory_7);
#line 746
undef($memory_8);
#line 746
undef($memory_9);
#line 747
goto label_269;
#line 747
label_159:
#line 747
$memory_7 = c_rt_lib::ov_as($memory_4, 'js');
#line 748
$memory_10 = c_rt_lib::init_iter($memory_0);
#line 748
label_162:
#line 748
$memory_8 = c_rt_lib::is_end_hash($memory_10);
#line 748
if (c_rt_lib::check_true($memory_8)) {goto label_193;}
#line 748
$memory_8 = c_rt_lib::get_key_iter($memory_10);
#line 748
$memory_9 = c_rt_lib::hash_get_value($memory_0, $memory_8);
#line 749
$memory_11 = c_rt_lib::to_nl(0);
#line 750
$memory_13 = $memory_7->{'namespace'};
#line 750
$memory_12 = generator_js::generate($memory_9, $memory_13);
#line 750
undef($memory_13);
#line 751
$memory_13 = hash::get_value($memory_1, $memory_8);
#line 751
$memory_13 = $memory_13->{'dst'};
#line 751
$memory_13 = c_rt_lib::ov_as($memory_13, 'js');
#line 752
$memory_14 = "saving file: ";
#line 752
$memory_14 = $memory_14 . $memory_8;
#line 752
c_fe_lib::print($memory_14);
#line 752
undef($memory_14);
#line 753
compiler_priv::try_save_file($memory_12, $memory_13, $memory_11);
#line 754
$memory_14 = $memory_11;
#line 754
$memory_14 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_14));
#line 754
if (c_rt_lib::check_true($memory_14)) {goto label_186;}
#line 754
$memory_15 = "";
#line 754
hash::set_value($memory_5, $memory_8, $memory_15);
#line 754
undef($memory_15);
#line 754
goto label_186;
#line 754
label_186:
#line 754
undef($memory_14);
#line 754
undef($memory_11);
#line 754
undef($memory_12);
#line 754
undef($memory_13);
#line 755
$memory_10 = c_rt_lib::next_iter($memory_10);
#line 755
goto label_162;
#line 755
label_193:
#line 755
undef($memory_8);
#line 755
undef($memory_9);
#line 755
undef($memory_10);
#line 755
undef($memory_7);
#line 756
goto label_269;
#line 756
label_199:
#line 757
$memory_9 = c_rt_lib::init_iter($memory_0);
#line 757
label_201:
#line 757
$memory_7 = c_rt_lib::is_end_hash($memory_9);
#line 757
if (c_rt_lib::check_true($memory_7)) {goto label_230;}
#line 757
$memory_7 = c_rt_lib::get_key_iter($memory_9);
#line 757
$memory_8 = c_rt_lib::hash_get_value($memory_0, $memory_7);
#line 758
$memory_10 = c_rt_lib::to_nl(0);
#line 759
$memory_11 = generator_java::generate($memory_8);
#line 760
$memory_12 = hash::get_value($memory_1, $memory_7);
#line 760
$memory_12 = $memory_12->{'dst'};
#line 760
$memory_12 = c_rt_lib::ov_as($memory_12, 'java');
#line 761
$memory_13 = "saving file: ";
#line 761
$memory_13 = $memory_13 . $memory_7;
#line 761
c_fe_lib::print($memory_13);
#line 761
undef($memory_13);
#line 762
compiler_priv::try_save_file($memory_11, $memory_12, $memory_10);
#line 763
$memory_13 = $memory_10;
#line 763
$memory_13 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_13));
#line 763
if (c_rt_lib::check_true($memory_13)) {goto label_223;}
#line 763
$memory_14 = "";
#line 763
hash::set_value($memory_5, $memory_7, $memory_14);
#line 763
undef($memory_14);
#line 763
goto label_223;
#line 763
label_223:
#line 763
undef($memory_13);
#line 763
undef($memory_10);
#line 763
undef($memory_11);
#line 763
undef($memory_12);
#line 764
$memory_9 = c_rt_lib::next_iter($memory_9);
#line 764
goto label_201;
#line 764
label_230:
#line 764
undef($memory_7);
#line 764
undef($memory_8);
#line 764
undef($memory_9);
#line 765
goto label_269;
#line 765
label_235:
#line 766
$memory_7 = [];
#line 766
die(dfile::ssave($memory_7));
#line 766
undef($memory_7);
#line 767
goto label_269;
#line 767
label_240:
#line 768
$memory_7 = [];
#line 768
die(dfile::ssave($memory_7));
#line 768
undef($memory_7);
#line 769
goto label_269;
#line 769
label_245:
#line 770
$memory_7 = post_processing::get_call_graph($memory_0);
#line 771
$memory_8 = c_rt_lib::to_nl(0);
#line 772
$memory_9 = "Saving call_graph file...";
#line 772
c_fe_lib::print($memory_9);
#line 772
undef($memory_9);
#line 773
$memory_9 = dfile::ssave($memory_7);
#line 773
$memory_10 = "_call_graph.df";
#line 773
$memory_10 = $memory_2 . $memory_10;
#line 773
compiler_priv::try_save_file($memory_9, $memory_10, $memory_8);
#line 773
undef($memory_10);
#line 773
undef($memory_9);
#line 774
$memory_9 = $memory_8;
#line 774
$memory_9 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_9));
#line 774
if (c_rt_lib::check_true($memory_9)) {goto label_264;}
#line 775
$memory_10 = "Error while saving to file.";
#line 775
c_fe_lib::print($memory_10);
#line 775
undef($memory_10);
#line 776
goto label_264;
#line 776
label_264:
#line 776
undef($memory_9);
#line 776
undef($memory_7);
#line 776
undef($memory_8);
#line 777
goto label_269;
#line 777
label_269:
#line 777
undef($memory_6);
#line 778
$memory_6 = hash::size($memory_5);
#line 778
$memory_7 = 0;
#line 778
$memory_6 = c_rt_lib::to_nl($memory_6 > $memory_7);
#line 778
undef($memory_7);
#line 778
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 778
if (c_rt_lib::check_true($memory_6)) {goto label_287;}
#line 779
$memory_7 = c_rt_lib::ov_mk_arg('err', $memory_5);
#line 779
undef($memory_0);
#line 779
undef($memory_1);
#line 779
undef($memory_2);
#line 779
undef($memory_4);
#line 779
undef($memory_5);
#line 779
undef($memory_6);
#line 779
$_[3] = $memory_3;return $memory_7;
#line 779
undef($memory_7);
#line 780
goto label_299;
#line 780
label_287:
#line 781
$memory_7 = "";
#line 781
$memory_7 = c_rt_lib::ov_mk_arg('ok', $memory_7);
#line 781
undef($memory_0);
#line 781
undef($memory_1);
#line 781
undef($memory_2);
#line 781
undef($memory_4);
#line 781
undef($memory_5);
#line 781
undef($memory_6);
#line 781
$_[3] = $memory_3;return $memory_7;
#line 781
undef($memory_7);
#line 782
goto label_299;
#line 782
label_299:
#line 782
undef($memory_6);
#line 782
undef($memory_5);
#line 782
undef($memory_0);
#line 782
undef($memory_1);
#line 782
undef($memory_2);
#line 782
undef($memory_4);
#line 782
$_[3] = $memory_3;return;
$_[3] = $memory_3;}

sub compiler_priv::save_module_to_file($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;$memory_0 = $_[0];$memory_1 = $_[1];
#line 786
$memory_2 = c_rt_lib::ov_is($memory_1, 'nla');
#line 786
if (c_rt_lib::check_true($memory_2)) {goto label_21;}
#line 788
$memory_2 = c_rt_lib::ov_is($memory_1, 'c');
#line 788
if (c_rt_lib::check_true($memory_2)) {goto label_28;}
#line 790
$memory_2 = c_rt_lib::ov_is($memory_1, 'pm');
#line 790
if (c_rt_lib::check_true($memory_2)) {goto label_35;}
#line 792
$memory_2 = c_rt_lib::ov_is($memory_1, 'js');
#line 792
if (c_rt_lib::check_true($memory_2)) {goto label_42;}
#line 794
$memory_2 = c_rt_lib::ov_is($memory_1, 'java');
#line 794
if (c_rt_lib::check_true($memory_2)) {goto label_49;}
#line 796
$memory_2 = c_rt_lib::ov_is($memory_1, 'nl');
#line 796
if (c_rt_lib::check_true($memory_2)) {goto label_56;}
#line 798
$memory_2 = c_rt_lib::ov_is($memory_1, 'ast');
#line 798
if (c_rt_lib::check_true($memory_2)) {goto label_74;}
#line 800
$memory_2 = c_rt_lib::ov_is($memory_1, 'none');
#line 800
if (c_rt_lib::check_true($memory_2)) {goto label_92;}
#line 802
$memory_2 = c_rt_lib::ov_is($memory_1, 'call_graph');
#line 802
if (c_rt_lib::check_true($memory_2)) {goto label_97;}
#line 802
$memory_2 = "NOMATCHALERT";
#line 802
$memory_2 = [$memory_2,$memory_1];
#line 802
die(dfile::ssave($memory_2));
#line 786
label_21:
#line 786
$memory_3 = c_rt_lib::ov_as($memory_1, 'nla');
#line 787
$memory_4 = [];
#line 787
die(dfile::ssave($memory_4));
#line 787
undef($memory_4);
#line 787
undef($memory_3);
#line 788
goto label_102;
#line 788
label_28:
#line 788
$memory_3 = c_rt_lib::ov_as($memory_1, 'c');
#line 789
$memory_4 = [];
#line 789
die(dfile::ssave($memory_4));
#line 789
undef($memory_4);
#line 789
undef($memory_3);
#line 790
goto label_102;
#line 790
label_35:
#line 790
$memory_3 = c_rt_lib::ov_as($memory_1, 'pm');
#line 791
$memory_4 = [];
#line 791
die(dfile::ssave($memory_4));
#line 791
undef($memory_4);
#line 791
undef($memory_3);
#line 792
goto label_102;
#line 792
label_42:
#line 792
$memory_3 = c_rt_lib::ov_as($memory_1, 'js');
#line 793
$memory_4 = [];
#line 793
die(dfile::ssave($memory_4));
#line 793
undef($memory_4);
#line 793
undef($memory_3);
#line 794
goto label_102;
#line 794
label_49:
#line 794
$memory_3 = c_rt_lib::ov_as($memory_1, 'java');
#line 795
$memory_4 = [];
#line 795
die(dfile::ssave($memory_4));
#line 795
undef($memory_4);
#line 795
undef($memory_3);
#line 796
goto label_102;
#line 796
label_56:
#line 796
$memory_3 = c_rt_lib::ov_as($memory_1, 'nl');
#line 797
$memory_5 = {
	module => "compiler",
	name => "file_t",
};
#line 797
$memory_5 = c_rt_lib::ov_mk_arg('ref', $memory_5);
#line 797
$memory_7 = pretty_printer::print_module_to_str($memory_0);
#line 797
$memory_6 = c_fe_lib::string_to_file($memory_3, $memory_7);
#line 797
undef($memory_7);
#line 797
$memory_4 = ptd::ensure($memory_5, $memory_6);
#line 797
undef($memory_6);
#line 797
undef($memory_5);
#line 797
undef($memory_0);
#line 797
undef($memory_1);
#line 797
undef($memory_2);
#line 797
undef($memory_3);
#line 797
return $memory_4;
#line 797
undef($memory_4);
#line 797
undef($memory_3);
#line 798
goto label_102;
#line 798
label_74:
#line 798
$memory_3 = c_rt_lib::ov_as($memory_1, 'ast');
#line 799
$memory_5 = {
	module => "compiler",
	name => "file_t",
};
#line 799
$memory_5 = c_rt_lib::ov_mk_arg('ref', $memory_5);
#line 799
$memory_7 = dfile::ssave($memory_0);
#line 799
$memory_6 = c_fe_lib::string_to_file($memory_3, $memory_7);
#line 799
undef($memory_7);
#line 799
$memory_4 = ptd::ensure($memory_5, $memory_6);
#line 799
undef($memory_6);
#line 799
undef($memory_5);
#line 799
undef($memory_0);
#line 799
undef($memory_1);
#line 799
undef($memory_2);
#line 799
undef($memory_3);
#line 799
return $memory_4;
#line 799
undef($memory_4);
#line 799
undef($memory_3);
#line 800
goto label_102;
#line 800
label_92:
#line 801
$memory_3 = [];
#line 801
die(dfile::ssave($memory_3));
#line 801
undef($memory_3);
#line 802
goto label_102;
#line 802
label_97:
#line 803
$memory_3 = [];
#line 803
die(dfile::ssave($memory_3));
#line 803
undef($memory_3);
#line 804
goto label_102;
#line 804
label_102:
#line 804
undef($memory_2);
#line 804
undef($memory_0);
#line 804
undef($memory_1);
#line 804
return;
}

sub compiler_priv::get_dir($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;$memory_0 = $_[0];
#line 808
$memory_1 = string::length($memory_0);
#line 808
$memory_2 = 1;
#line 808
$memory_1 = $memory_1 - $memory_2;
#line 808
undef($memory_2);
#line 809
$memory_3 = 1;
#line 809
$memory_2 = string::substr($memory_0, $memory_1, $memory_3);
#line 809
undef($memory_3);
#line 809
$memory_3 = "/";
#line 809
$memory_2 = c_rt_lib::to_nl($memory_2 eq $memory_3);
#line 809
undef($memory_3);
#line 809
if (c_rt_lib::check_true($memory_2)) {goto label_17;}
#line 809
$memory_3 = 1;
#line 809
$memory_2 = string::substr($memory_0, $memory_1, $memory_3);
#line 809
undef($memory_3);
#line 809
$memory_3 = "\\";
#line 809
$memory_2 = c_rt_lib::to_nl($memory_2 eq $memory_3);
#line 809
undef($memory_3);
#line 809
label_17:
#line 809
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 809
if (c_rt_lib::check_true($memory_2)) {goto label_24;}
#line 809
$memory_3 = 1;
#line 809
$memory_1 = $memory_1 - $memory_3;
#line 809
undef($memory_3);
#line 809
goto label_24;
#line 809
label_24:
#line 809
undef($memory_2);
#line 810
label_26:
#line 810
$memory_2 = 0;
#line 810
$memory_2 = c_rt_lib::to_nl($memory_1 >= $memory_2);
#line 810
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 810
if (c_rt_lib::check_true($memory_4)) {goto label_37;}
#line 810
$memory_5 = 1;
#line 810
$memory_2 = string::substr($memory_0, $memory_1, $memory_5);
#line 810
undef($memory_5);
#line 810
$memory_5 = "/";
#line 810
$memory_2 = c_rt_lib::to_nl($memory_2 ne $memory_5);
#line 810
undef($memory_5);
#line 810
label_37:
#line 810
undef($memory_4);
#line 810
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 810
if (c_rt_lib::check_true($memory_3)) {goto label_47;}
#line 810
$memory_4 = 1;
#line 810
$memory_2 = string::substr($memory_0, $memory_1, $memory_4);
#line 810
undef($memory_4);
#line 810
$memory_4 = "\\";
#line 810
$memory_2 = c_rt_lib::to_nl($memory_2 ne $memory_4);
#line 810
undef($memory_4);
#line 810
label_47:
#line 810
undef($memory_3);
#line 810
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 810
if (c_rt_lib::check_true($memory_2)) {goto label_55;}
#line 810
$memory_3 = 1;
#line 810
$memory_1 = $memory_1 - $memory_3;
#line 810
undef($memory_3);
#line 810
goto label_26;
#line 810
label_55:
#line 810
undef($memory_2);
#line 811
$memory_2 = 0;
#line 811
$memory_2 = c_rt_lib::to_nl($memory_1 <= $memory_2);
#line 811
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 811
if (c_rt_lib::check_true($memory_2)) {goto label_68;}
#line 811
$memory_3 = ".";
#line 811
undef($memory_0);
#line 811
undef($memory_1);
#line 811
undef($memory_2);
#line 811
return $memory_3;
#line 811
undef($memory_3);
#line 811
goto label_68;
#line 811
label_68:
#line 811
undef($memory_2);
#line 812
$memory_3 = 0;
#line 812
$memory_2 = string::substr($memory_0, $memory_3, $memory_1);
#line 812
undef($memory_3);
#line 812
undef($memory_0);
#line 812
undef($memory_1);
#line 812
return $memory_2;
#line 812
undef($memory_2);
#line 812
undef($memory_1);
#line 812
undef($memory_0);
#line 812
return;
}

sub compiler_priv::parse_command_line_args($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;$memory_0 = $_[0];
#line 817
$memory_2 = c_rt_lib::ov_mk_none('c');
#line 818
$memory_3 = c_rt_lib::ov_mk_none('strict');
#line 819
$memory_5 = ".";
#line 819
$memory_4 = [$memory_5];
#line 819
undef($memory_5);
#line 820
$memory_5 = c_rt_lib::ov_mk_none('o1');
#line 821
$memory_6 = c_rt_lib::ov_mk_none('no');
#line 822
$memory_7 = compiler_priv::get_default_math_file();
#line 823
$memory_8 = "";
#line 824
$memory_9 = c_rt_lib::ov_mk_none('norm');
#line 825
$memory_10 = c_rt_lib::to_nl(0);
#line 826
$memory_11 = c_rt_lib::to_nl(0);
#line 826
$memory_1 = {language => $memory_2,mode => $memory_3,input_path => $memory_4,optimization => $memory_5,deref => $memory_6,math_fun => $memory_7,cache_path => $memory_8,alarm => $memory_9,check_public_fun => $memory_10,profile => $memory_11,};
#line 826
undef($memory_2);
#line 826
undef($memory_3);
#line 826
undef($memory_4);
#line 826
undef($memory_5);
#line 826
undef($memory_6);
#line 826
undef($memory_7);
#line 826
undef($memory_8);
#line 826
undef($memory_9);
#line 826
undef($memory_10);
#line 826
undef($memory_11);
#line 828
$memory_2 = c_rt_lib::to_nl(0);
#line 829
$memory_3 = compiler_priv::get_dir_cache_name();
#line 830
$memory_4 = 1;
#line 830
label_26:
#line 830
$memory_5 = array::len($memory_0);
#line 830
$memory_5 = c_rt_lib::to_nl($memory_4 < $memory_5);
#line 830
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 830
if (c_rt_lib::check_true($memory_5)) {goto label_444;}
#line 831
$memory_6 = $memory_0->[$memory_4];
#line 832
$memory_7 = string::length($memory_6);
#line 832
$memory_9 = 2;
#line 832
$memory_7 = c_rt_lib::to_nl($memory_7 >= $memory_9);
#line 832
undef($memory_9);
#line 832
$memory_8 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 832
if (c_rt_lib::check_true($memory_8)) {goto label_46;}
#line 832
$memory_9 = 0;
#line 832
$memory_10 = 2;
#line 832
$memory_7 = string::substr($memory_6, $memory_9, $memory_10);
#line 832
undef($memory_10);
#line 832
undef($memory_9);
#line 832
$memory_9 = "--";
#line 832
$memory_7 = c_rt_lib::to_nl($memory_7 eq $memory_9);
#line 832
undef($memory_9);
#line 832
label_46:
#line 832
undef($memory_8);
#line 832
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 832
if (c_rt_lib::check_true($memory_7)) {goto label_413;}
#line 833
$memory_9 = 2;
#line 833
$memory_10 = string::length($memory_6);
#line 833
$memory_11 = 2;
#line 833
$memory_10 = $memory_10 - $memory_11;
#line 833
undef($memory_11);
#line 833
$memory_8 = string::substr($memory_6, $memory_9, $memory_10);
#line 833
undef($memory_10);
#line 833
undef($memory_9);
#line 834
$memory_9 = "deref";
#line 834
$memory_9 = c_rt_lib::to_nl($memory_8 eq $memory_9);
#line 834
$memory_9 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_9));
#line 834
if (c_rt_lib::check_true($memory_9)) {goto label_69;}
#line 835
$memory_10 = "";
#line 835
$memory_10 = c_rt_lib::ov_mk_arg('yes', $memory_10);
#line 835
$memory_11 = $memory_10;
#line 835
 if (c_rt_lib::get_hashcount($memory_1) > 1) {$memory_1 = {%{$memory_1}};}$memory_1->{'deref'} = $memory_11;
#line 835
undef($memory_10);
#line 835
undef($memory_11);
#line 836
goto label_409;
#line 836
label_69:
#line 836
$memory_9 = "nla";
#line 836
$memory_9 = c_rt_lib::to_nl($memory_8 eq $memory_9);
#line 836
$memory_9 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_9));
#line 836
if (c_rt_lib::check_true($memory_9)) {goto label_80;}
#line 837
$memory_10 = c_rt_lib::ov_mk_none('nla');
#line 837
$memory_11 = $memory_10;
#line 837
 if (c_rt_lib::get_hashcount($memory_1) > 1) {$memory_1 = {%{$memory_1}};}$memory_1->{'language'} = $memory_11;
#line 837
undef($memory_10);
#line 837
undef($memory_11);
#line 838
goto label_409;
#line 838
label_80:
#line 838
$memory_9 = "ast";
#line 838
$memory_9 = c_rt_lib::to_nl($memory_8 eq $memory_9);
#line 838
$memory_9 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_9));
#line 838
if (c_rt_lib::check_true($memory_9)) {goto label_91;}
#line 839
$memory_10 = c_rt_lib::ov_mk_none('ast');
#line 839
$memory_11 = $memory_10;
#line 839
 if (c_rt_lib::get_hashcount($memory_1) > 1) {$memory_1 = {%{$memory_1}};}$memory_1->{'language'} = $memory_11;
#line 839
undef($memory_10);
#line 839
undef($memory_11);
#line 840
goto label_409;
#line 840
label_91:
#line 840
$memory_9 = "pm";
#line 840
$memory_9 = c_rt_lib::to_nl($memory_8 eq $memory_9);
#line 840
$memory_9 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_9));
#line 840
if (c_rt_lib::check_true($memory_9)) {goto label_102;}
#line 841
$memory_10 = c_rt_lib::ov_mk_none('pm');
#line 841
$memory_11 = $memory_10;
#line 841
 if (c_rt_lib::get_hashcount($memory_1) > 1) {$memory_1 = {%{$memory_1}};}$memory_1->{'language'} = $memory_11;
#line 841
undef($memory_10);
#line 841
undef($memory_11);
#line 842
goto label_409;
#line 842
label_102:
#line 842
$memory_9 = "c";
#line 842
$memory_9 = c_rt_lib::to_nl($memory_8 eq $memory_9);
#line 842
$memory_9 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_9));
#line 842
if (c_rt_lib::check_true($memory_9)) {goto label_113;}
#line 843
$memory_10 = c_rt_lib::ov_mk_none('c');
#line 843
$memory_11 = $memory_10;
#line 843
 if (c_rt_lib::get_hashcount($memory_1) > 1) {$memory_1 = {%{$memory_1}};}$memory_1->{'language'} = $memory_11;
#line 843
undef($memory_10);
#line 843
undef($memory_11);
#line 844
goto label_409;
#line 844
label_113:
#line 844
$memory_9 = "js";
#line 844
$memory_9 = c_rt_lib::to_nl($memory_8 eq $memory_9);
#line 844
$memory_9 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_9));
#line 844
if (c_rt_lib::check_true($memory_9)) {goto label_135;}
#line 845
$memory_10 = $memory_1->{'language'};
#line 845
$memory_10 = c_rt_lib::ov_is($memory_10, 'js');
#line 845
$memory_10 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_10));
#line 845
$memory_10 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_10));
#line 845
if (c_rt_lib::check_true($memory_10)) {goto label_132;}
#line 846
$memory_12 = "nl";
#line 846
$memory_11 = {namespace => $memory_12,};
#line 846
undef($memory_12);
#line 846
$memory_11 = c_rt_lib::ov_mk_arg('js', $memory_11);
#line 846
$memory_12 = $memory_11;
#line 846
 if (c_rt_lib::get_hashcount($memory_1) > 1) {$memory_1 = {%{$memory_1}};}$memory_1->{'language'} = $memory_12;
#line 846
undef($memory_11);
#line 846
undef($memory_12);
#line 847
goto label_132;
#line 847
label_132:
#line 847
undef($memory_10);
#line 848
goto label_409;
#line 848
label_135:
#line 848
$memory_9 = "call_graph";
#line 848
$memory_9 = c_rt_lib::to_nl($memory_8 eq $memory_9);
#line 848
$memory_9 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_9));
#line 848
if (c_rt_lib::check_true($memory_9)) {goto label_146;}
#line 849
$memory_10 = c_rt_lib::ov_mk_none('call_graph');
#line 849
$memory_11 = $memory_10;
#line 849
 if (c_rt_lib::get_hashcount($memory_1) > 1) {$memory_1 = {%{$memory_1}};}$memory_1->{'language'} = $memory_11;
#line 849
undef($memory_10);
#line 849
undef($memory_11);
#line 850
goto label_409;
#line 850
label_146:
#line 850
$memory_9 = "java";
#line 850
$memory_9 = c_rt_lib::to_nl($memory_8 eq $memory_9);
#line 850
$memory_9 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_9));
#line 850
if (c_rt_lib::check_true($memory_9)) {goto label_157;}
#line 851
$memory_10 = c_rt_lib::ov_mk_none('java');
#line 851
$memory_11 = $memory_10;
#line 851
 if (c_rt_lib::get_hashcount($memory_1) > 1) {$memory_1 = {%{$memory_1}};}$memory_1->{'language'} = $memory_11;
#line 851
undef($memory_10);
#line 851
undef($memory_11);
#line 852
goto label_409;
#line 852
label_157:
#line 852
$memory_9 = "nl";
#line 852
$memory_9 = c_rt_lib::to_nl($memory_8 eq $memory_9);
#line 852
$memory_9 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_9));
#line 852
if (c_rt_lib::check_true($memory_9)) {goto label_171;}
#line 853
$memory_10 = c_rt_lib::ov_mk_none('nl');
#line 853
$memory_11 = $memory_10;
#line 853
 if (c_rt_lib::get_hashcount($memory_1) > 1) {$memory_1 = {%{$memory_1}};}$memory_1->{'language'} = $memory_11;
#line 853
undef($memory_10);
#line 853
undef($memory_11);
#line 854
$memory_10 = compiler_priv::get_dir_pretty_name();
#line 854
$memory_3 = $memory_10;
#line 854
undef($memory_10);
#line 855
goto label_409;
#line 855
label_171:
#line 855
$memory_9 = "ide";
#line 855
$memory_9 = c_rt_lib::to_nl($memory_8 eq $memory_9);
#line 855
$memory_9 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_9));
#line 855
if (c_rt_lib::check_true($memory_9)) {goto label_182;}
#line 856
$memory_10 = c_rt_lib::ov_mk_none('ide');
#line 856
$memory_11 = $memory_10;
#line 856
 if (c_rt_lib::get_hashcount($memory_1) > 1) {$memory_1 = {%{$memory_1}};}$memory_1->{'mode'} = $memory_11;
#line 856
undef($memory_10);
#line 856
undef($memory_11);
#line 857
goto label_409;
#line 857
label_182:
#line 857
$memory_9 = "idex";
#line 857
$memory_9 = c_rt_lib::to_nl($memory_8 eq $memory_9);
#line 857
$memory_9 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_9));
#line 857
if (c_rt_lib::check_true($memory_9)) {goto label_208;}
#line 858
$memory_10 = 1;
#line 858
$memory_4 = $memory_4 + $memory_10;
#line 858
undef($memory_10);
#line 859
$memory_10 = array::len($memory_0);
#line 859
$memory_10 = c_rt_lib::to_nl($memory_4 < $memory_10);
#line 859
$memory_10 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_10));
#line 859
$memory_10 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_10));
#line 859
if (c_rt_lib::check_true($memory_10)) {goto label_198;}
#line 859
$memory_11 = [];
#line 859
die(dfile::ssave($memory_11));
#line 859
goto label_198;
#line 859
label_198:
#line 859
undef($memory_10);
#line 859
undef($memory_11);
#line 860
$memory_10 = $memory_0->[$memory_4];
#line 860
$memory_10 = c_rt_lib::ov_mk_arg('idex', $memory_10);
#line 860
$memory_11 = $memory_10;
#line 860
 if (c_rt_lib::get_hashcount($memory_1) > 1) {$memory_1 = {%{$memory_1}};}$memory_1->{'mode'} = $memory_11;
#line 860
undef($memory_10);
#line 860
undef($memory_11);
#line 861
goto label_409;
#line 861
label_208:
#line 861
$memory_9 = "strict";
#line 861
$memory_9 = c_rt_lib::to_nl($memory_8 eq $memory_9);
#line 861
$memory_9 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_9));
#line 861
if (c_rt_lib::check_true($memory_9)) {goto label_219;}
#line 862
$memory_10 = c_rt_lib::ov_mk_none('strict');
#line 862
$memory_11 = $memory_10;
#line 862
 if (c_rt_lib::get_hashcount($memory_1) > 1) {$memory_1 = {%{$memory_1}};}$memory_1->{'mode'} = $memory_11;
#line 862
undef($memory_10);
#line 862
undef($memory_11);
#line 863
goto label_409;
#line 863
label_219:
#line 863
$memory_9 = "exec";
#line 863
$memory_9 = c_rt_lib::to_nl($memory_8 eq $memory_9);
#line 863
$memory_9 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_9));
#line 863
if (c_rt_lib::check_true($memory_9)) {goto label_230;}
#line 864
$memory_10 = c_rt_lib::ov_mk_none('exec');
#line 864
$memory_11 = $memory_10;
#line 864
 if (c_rt_lib::get_hashcount($memory_1) > 1) {$memory_1 = {%{$memory_1}};}$memory_1->{'mode'} = $memory_11;
#line 864
undef($memory_10);
#line 864
undef($memory_11);
#line 865
goto label_409;
#line 865
label_230:
#line 865
$memory_9 = "o";
#line 865
$memory_9 = c_rt_lib::to_nl($memory_8 eq $memory_9);
#line 865
if (c_rt_lib::check_true($memory_9)) {goto label_236;}
#line 865
$memory_9 = "out";
#line 865
$memory_9 = c_rt_lib::to_nl($memory_8 eq $memory_9);
#line 865
label_236:
#line 865
$memory_9 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_9));
#line 865
if (c_rt_lib::check_true($memory_9)) {goto label_262;}
#line 866
$memory_10 = 1;
#line 866
$memory_4 = $memory_4 + $memory_10;
#line 866
undef($memory_10);
#line 867
$memory_10 = array::len($memory_0);
#line 867
$memory_10 = c_rt_lib::to_nl($memory_4 < $memory_10);
#line 867
$memory_10 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_10));
#line 867
$memory_10 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_10));
#line 867
if (c_rt_lib::check_true($memory_10)) {goto label_250;}
#line 867
$memory_11 = [];
#line 867
die(dfile::ssave($memory_11));
#line 867
goto label_250;
#line 867
label_250:
#line 867
undef($memory_10);
#line 867
undef($memory_11);
#line 868
$memory_10 = $memory_0->[$memory_4];
#line 868
$memory_11 = "/";
#line 868
$memory_10 = $memory_10 . $memory_11;
#line 868
undef($memory_11);
#line 868
$memory_11 = $memory_10;
#line 868
 if (c_rt_lib::get_hashcount($memory_1) > 1) {$memory_1 = {%{$memory_1}};}$memory_1->{'cache_path'} = $memory_11;
#line 868
undef($memory_10);
#line 868
undef($memory_11);
#line 869
goto label_409;
#line 869
label_262:
#line 869
$memory_9 = "math";
#line 869
$memory_9 = c_rt_lib::to_nl($memory_8 eq $memory_9);
#line 869
$memory_9 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_9));
#line 869
if (c_rt_lib::check_true($memory_9)) {goto label_287;}
#line 870
$memory_10 = 1;
#line 870
$memory_4 = $memory_4 + $memory_10;
#line 870
undef($memory_10);
#line 871
$memory_10 = array::len($memory_0);
#line 871
$memory_10 = c_rt_lib::to_nl($memory_4 < $memory_10);
#line 871
$memory_10 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_10));
#line 871
$memory_10 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_10));
#line 871
if (c_rt_lib::check_true($memory_10)) {goto label_278;}
#line 871
$memory_11 = [];
#line 871
die(dfile::ssave($memory_11));
#line 871
goto label_278;
#line 871
label_278:
#line 871
undef($memory_10);
#line 871
undef($memory_11);
#line 872
$memory_10 = $memory_0->[$memory_4];
#line 872
$memory_11 = $memory_10;
#line 872
 if (c_rt_lib::get_hashcount($memory_1) > 1) {$memory_1 = {%{$memory_1}};}$memory_1->{'math_fun'} = $memory_11;
#line 872
undef($memory_10);
#line 872
undef($memory_11);
#line 873
goto label_409;
#line 873
label_287:
#line 873
$memory_9 = "O0";
#line 873
$memory_9 = c_rt_lib::to_nl($memory_8 eq $memory_9);
#line 873
$memory_9 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_9));
#line 873
if (c_rt_lib::check_true($memory_9)) {goto label_298;}
#line 874
$memory_10 = c_rt_lib::ov_mk_none('o0');
#line 874
$memory_11 = $memory_10;
#line 874
 if (c_rt_lib::get_hashcount($memory_1) > 1) {$memory_1 = {%{$memory_1}};}$memory_1->{'optimization'} = $memory_11;
#line 874
undef($memory_10);
#line 874
undef($memory_11);
#line 875
goto label_409;
#line 875
label_298:
#line 875
$memory_9 = "O1";
#line 875
$memory_9 = c_rt_lib::to_nl($memory_8 eq $memory_9);
#line 875
$memory_9 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_9));
#line 875
if (c_rt_lib::check_true($memory_9)) {goto label_309;}
#line 876
$memory_10 = c_rt_lib::ov_mk_none('o1');
#line 876
$memory_11 = $memory_10;
#line 876
 if (c_rt_lib::get_hashcount($memory_1) > 1) {$memory_1 = {%{$memory_1}};}$memory_1->{'optimization'} = $memory_11;
#line 876
undef($memory_10);
#line 876
undef($memory_11);
#line 877
goto label_409;
#line 877
label_309:
#line 877
$memory_9 = "O2";
#line 877
$memory_9 = c_rt_lib::to_nl($memory_8 eq $memory_9);
#line 877
$memory_9 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_9));
#line 877
if (c_rt_lib::check_true($memory_9)) {goto label_320;}
#line 878
$memory_10 = c_rt_lib::ov_mk_none('o2');
#line 878
$memory_11 = $memory_10;
#line 878
 if (c_rt_lib::get_hashcount($memory_1) > 1) {$memory_1 = {%{$memory_1}};}$memory_1->{'optimization'} = $memory_11;
#line 878
undef($memory_10);
#line 878
undef($memory_11);
#line 879
goto label_409;
#line 879
label_320:
#line 879
$memory_9 = "O3";
#line 879
$memory_9 = c_rt_lib::to_nl($memory_8 eq $memory_9);
#line 879
$memory_9 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_9));
#line 879
if (c_rt_lib::check_true($memory_9)) {goto label_331;}
#line 880
$memory_10 = c_rt_lib::ov_mk_none('o3');
#line 880
$memory_11 = $memory_10;
#line 880
 if (c_rt_lib::get_hashcount($memory_1) > 1) {$memory_1 = {%{$memory_1}};}$memory_1->{'optimization'} = $memory_11;
#line 880
undef($memory_10);
#line 880
undef($memory_11);
#line 881
goto label_409;
#line 881
label_331:
#line 881
$memory_9 = "O4";
#line 881
$memory_9 = c_rt_lib::to_nl($memory_8 eq $memory_9);
#line 881
$memory_9 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_9));
#line 881
if (c_rt_lib::check_true($memory_9)) {goto label_342;}
#line 882
$memory_10 = c_rt_lib::ov_mk_none('o4');
#line 882
$memory_11 = $memory_10;
#line 882
 if (c_rt_lib::get_hashcount($memory_1) > 1) {$memory_1 = {%{$memory_1}};}$memory_1->{'optimization'} = $memory_11;
#line 882
undef($memory_10);
#line 882
undef($memory_11);
#line 883
goto label_409;
#line 883
label_342:
#line 883
$memory_9 = "Wall";
#line 883
$memory_9 = c_rt_lib::to_nl($memory_8 eq $memory_9);
#line 883
$memory_9 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_9));
#line 883
if (c_rt_lib::check_true($memory_9)) {goto label_353;}
#line 884
$memory_10 = c_rt_lib::ov_mk_none('wall');
#line 884
$memory_11 = $memory_10;
#line 884
 if (c_rt_lib::get_hashcount($memory_1) > 1) {$memory_1 = {%{$memory_1}};}$memory_1->{'alarm'} = $memory_11;
#line 884
undef($memory_10);
#line 884
undef($memory_11);
#line 885
goto label_409;
#line 885
label_353:
#line 885
$memory_9 = "check_public_fun";
#line 885
$memory_9 = c_rt_lib::to_nl($memory_8 eq $memory_9);
#line 885
$memory_9 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_9));
#line 885
if (c_rt_lib::check_true($memory_9)) {goto label_364;}
#line 886
$memory_10 = c_rt_lib::to_nl(1);
#line 886
$memory_11 = $memory_10;
#line 886
 if (c_rt_lib::get_hashcount($memory_1) > 1) {$memory_1 = {%{$memory_1}};}$memory_1->{'check_public_fun'} = $memory_11;
#line 886
undef($memory_10);
#line 886
undef($memory_11);
#line 887
goto label_409;
#line 887
label_364:
#line 887
$memory_9 = "profile";
#line 887
$memory_9 = c_rt_lib::to_nl($memory_8 eq $memory_9);
#line 887
$memory_9 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_9));
#line 887
if (c_rt_lib::check_true($memory_9)) {goto label_375;}
#line 888
$memory_10 = c_rt_lib::to_nl(1);
#line 888
$memory_11 = $memory_10;
#line 888
 if (c_rt_lib::get_hashcount($memory_1) > 1) {$memory_1 = {%{$memory_1}};}$memory_1->{'profile'} = $memory_11;
#line 888
undef($memory_10);
#line 888
undef($memory_11);
#line 889
goto label_409;
#line 889
label_375:
#line 889
$memory_9 = "namespace";
#line 889
$memory_9 = c_rt_lib::to_nl($memory_8 eq $memory_9);
#line 889
$memory_9 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_9));
#line 889
if (c_rt_lib::check_true($memory_9)) {goto label_403;}
#line 890
$memory_10 = 1;
#line 890
$memory_4 = $memory_4 + $memory_10;
#line 890
undef($memory_10);
#line 891
$memory_10 = array::len($memory_0);
#line 891
$memory_10 = c_rt_lib::to_nl($memory_4 < $memory_10);
#line 891
$memory_10 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_10));
#line 891
$memory_10 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_10));
#line 891
if (c_rt_lib::check_true($memory_10)) {goto label_391;}
#line 891
$memory_11 = [];
#line 891
die(dfile::ssave($memory_11));
#line 891
goto label_391;
#line 891
label_391:
#line 891
undef($memory_10);
#line 891
undef($memory_11);
#line 892
$memory_11 = $memory_0->[$memory_4];
#line 892
$memory_10 = {namespace => $memory_11,};
#line 892
undef($memory_11);
#line 892
$memory_10 = c_rt_lib::ov_mk_arg('js', $memory_10);
#line 892
$memory_11 = $memory_10;
#line 892
 if (c_rt_lib::get_hashcount($memory_1) > 1) {$memory_1 = {%{$memory_1}};}$memory_1->{'language'} = $memory_11;
#line 892
undef($memory_10);
#line 892
undef($memory_11);
#line 893
goto label_409;
#line 893
label_403:
#line 894
$memory_10 = "unknown compiler option: ";
#line 894
$memory_10 = $memory_10 . $memory_6;
#line 894
c_fe_lib::print($memory_10);
#line 894
undef($memory_10);
#line 895
goto label_409;
#line 895
label_409:
#line 895
undef($memory_9);
#line 895
undef($memory_8);
#line 896
goto label_437;
#line 896
label_413:
#line 897
$memory_8 = $memory_2;
#line 897
$memory_8 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 897
$memory_8 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 897
if (c_rt_lib::check_true($memory_8)) {goto label_424;}
#line 897
$memory_9 = [];
#line 897
$memory_10 = $memory_9;
#line 897
 if (c_rt_lib::get_hashcount($memory_1) > 1) {$memory_1 = {%{$memory_1}};}$memory_1->{'input_path'} = $memory_10;
#line 897
undef($memory_9);
#line 897
undef($memory_10);
#line 897
goto label_424;
#line 897
label_424:
#line 897
undef($memory_8);
#line 898
$memory_8 = "input_path";
#line 898
$memory_8 = c_rt_lib::get_ref_hash($memory_1, $memory_8);
#line 898
array::push($memory_8, $memory_6);
#line 898
$memory_9 = "input_path";
#line 898
c_rt_lib::set_ref_hash($memory_1, $memory_9, $memory_8);
#line 898
undef($memory_9);
#line 898
undef($memory_8);
#line 899
$memory_8 = c_rt_lib::to_nl(1);
#line 899
$memory_2 = $memory_8;
#line 899
undef($memory_8);
#line 900
goto label_437;
#line 900
label_437:
#line 900
undef($memory_7);
#line 900
undef($memory_6);
#line 830
$memory_6 = 1;
#line 830
$memory_4 = $memory_4 + $memory_6;
#line 830
undef($memory_6);
#line 901
goto label_26;
#line 901
label_444:
#line 901
undef($memory_4);
#line 901
undef($memory_5);
#line 902
$memory_4 = $memory_1->{'cache_path'};
#line 902
$memory_5 = "";
#line 902
$memory_4 = c_rt_lib::to_nl($memory_4 eq $memory_5);
#line 902
undef($memory_5);
#line 902
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 902
if (c_rt_lib::check_true($memory_4)) {goto label_463;}
#line 903
$memory_5 = "./";
#line 903
$memory_5 = $memory_5 . $memory_3;
#line 903
$memory_6 = "/";
#line 903
$memory_5 = $memory_5 . $memory_6;
#line 903
undef($memory_6);
#line 903
$memory_6 = $memory_5;
#line 903
 if (c_rt_lib::get_hashcount($memory_1) > 1) {$memory_1 = {%{$memory_1}};}$memory_1->{'cache_path'} = $memory_6;
#line 903
undef($memory_5);
#line 903
undef($memory_6);
#line 904
goto label_463;
#line 904
label_463:
#line 904
undef($memory_4);
#line 905
$memory_4 = $memory_1->{'deref'};
#line 905
$memory_4 = c_rt_lib::ov_is($memory_4, 'yes');
#line 905
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 905
if (c_rt_lib::check_true($memory_4)) {goto label_479;}
#line 905
$memory_5 = $memory_1->{'cache_path'};
#line 905
$memory_6 = compiler_priv::get_default_deref_file();
#line 905
$memory_5 = $memory_5 . $memory_6;
#line 905
undef($memory_6);
#line 905
$memory_5 = c_rt_lib::ov_mk_arg('yes', $memory_5);
#line 905
$memory_6 = $memory_5;
#line 905
 if (c_rt_lib::get_hashcount($memory_1) > 1) {$memory_1 = {%{$memory_1}};}$memory_1->{'deref'} = $memory_6;
#line 905
undef($memory_5);
#line 905
undef($memory_6);
#line 905
goto label_479;
#line 905
label_479:
#line 905
undef($memory_4);
#line 906
undef($memory_0);
#line 906
undef($memory_2);
#line 906
undef($memory_3);
#line 906
return $memory_1;
#line 906
undef($memory_1);
#line 906
undef($memory_2);
#line 906
undef($memory_3);
#line 906
undef($memory_0);
#line 906
return;
}
