use c_rt_lib;
use ptd;
use nlasm;
use string;
use array;
use hash;
use ov;
use singleton;
use nl;
use boolean_t;
use string_utils;
sub generator_c_priv::get_bin_ops;
sub generator_c_priv::get_bin_ops_mod;
sub generator_c_priv::get_unary_ops;
sub generator_c_priv::gen_unary_ops;
sub generator_c_priv::gen_bin_ops;
sub generator_c_priv::gen_bin_ops_mod;
sub generator_c::const_dict;
sub generator_c::fun_args_t;
sub generator_c::const_t;
sub generator_c::global_const_t;
sub generator_c::state_t;
sub generator_c::get_empty_state;
sub generator_c_priv::print;
sub generator_c_priv::print_to_header;
sub generator_c_priv::println_to_header;
sub generator_c_priv::arg_t;
sub generator_c_priv::println;
sub generator_c_priv::get_reg;
sub generator_c_priv::get_reg_ref;
sub generator_c_priv::get_string;
sub generator_c::module_out_t;
sub generator_c::out_t;
sub generator_c::generate;
sub generator_c_priv::generate_global_const_files;
sub generator_c_priv::get_include;
sub generator_c_priv::get_cr;
sub generator_c_priv::get_function_name;
sub generator_c_priv::get_function_header;
sub generator_c_priv::get_const;
sub generator_c_priv::insert_const_to_modules_hash;
sub generator_c_priv::get_global_const;
sub generator_c::clear_module_from_state;
sub generator_c_priv::get_const_sim;
sub generator_c_priv::get_const_singleton;
sub generator_c_priv::get_func_ptr_header;
sub generator_c_priv::print_mod;
sub generator_c_priv::print_init_const;
sub generator_c_priv::print_function_block;
sub generator_c_priv::is_singleton_use_function;
sub generator_c_priv::move_args_to_register;
sub generator_c_priv::move_register_to_ref_args;
sub generator_c_priv::get_fun_lib;
sub generator_c_priv::get_module_name;
sub generator_c_priv::get_fun_name;
sub generator_c_priv::get_lib_fun;
sub generator_c_priv::generate_imm;
sub generator_c_priv::get_func_pointer;
sub generator_c_priv::print_cmd;
sub generator_c_priv::get_assign;
sub generator_c_priv::generate_call;
sub generator_c_priv::create_sim;
sub generator_c_priv::create_sim_to_memory;

return 1;

sub generator_c_priv::__get_bin_ops() {
my $memory_0;my $memory_1;
#line 18
$memory_1 = generator_c_priv::gen_bin_ops();
#line 18
$memory_0 = singleton::sigleton_do_not_use_without_approval($memory_1);
#line 18
undef($memory_1);
#line 18
return $memory_0;
#line 18
undef($memory_0);
#line 18
return;
}

my $_get_bin_ops;
sub generator_c_priv::get_bin_ops() {
	$_get_bin_ops = generator_c_priv::__get_bin_ops() unless defined $_get_bin_ops;
	return $_get_bin_ops;
}

sub generator_c_priv::__get_bin_ops_mod() {
my $memory_0;my $memory_1;
#line 22
$memory_1 = generator_c_priv::gen_bin_ops_mod();
#line 22
$memory_0 = singleton::sigleton_do_not_use_without_approval($memory_1);
#line 22
undef($memory_1);
#line 22
return $memory_0;
#line 22
undef($memory_0);
#line 22
return;
}

my $_get_bin_ops_mod;
sub generator_c_priv::get_bin_ops_mod() {
	$_get_bin_ops_mod = generator_c_priv::__get_bin_ops_mod() unless defined $_get_bin_ops_mod;
	return $_get_bin_ops_mod;
}

sub generator_c_priv::__get_unary_ops() {
my $memory_0;my $memory_1;
#line 26
$memory_1 = generator_c_priv::gen_unary_ops();
#line 26
$memory_0 = singleton::sigleton_do_not_use_without_approval($memory_1);
#line 26
undef($memory_1);
#line 26
return $memory_0;
#line 26
undef($memory_0);
#line 26
return;
}

my $_get_unary_ops;
sub generator_c_priv::get_unary_ops() {
	$_get_unary_ops = generator_c_priv::__get_unary_ops() unless defined $_get_unary_ops;
	return $_get_unary_ops;
}

sub generator_c_priv::__gen_unary_ops() {
my $memory_0;my $memory_1;my $memory_2;
#line 30
$memory_0 = {};
#line 31
$memory_1 = "!";
#line 31
$memory_2 = "not";
#line 31
hash::set_value($memory_0, $memory_1, $memory_2);
#line 31
undef($memory_2);
#line 31
undef($memory_1);
#line 32
$memory_1 = "-";
#line 32
$memory_2 = "unary_minus";
#line 32
hash::set_value($memory_0, $memory_1, $memory_2);
#line 32
undef($memory_2);
#line 32
undef($memory_1);
#line 33
$memory_1 = "+";
#line 33
$memory_2 = "unary_plus";
#line 33
hash::set_value($memory_0, $memory_1, $memory_2);
#line 33
undef($memory_2);
#line 33
undef($memory_1);
#line 34
return $memory_0;
#line 34
undef($memory_0);
#line 34
return;
}

my $_gen_unary_ops;
sub generator_c_priv::gen_unary_ops() {
	$_gen_unary_ops = generator_c_priv::__gen_unary_ops() unless defined $_gen_unary_ops;
	return $_gen_unary_ops;
}

sub generator_c_priv::__gen_bin_ops() {
my $memory_0;my $memory_1;my $memory_2;
#line 38
$memory_0 = {};
#line 39
$memory_1 = "eq";
#line 39
$memory_2 = "eq";
#line 39
hash::set_value($memory_0, $memory_1, $memory_2);
#line 39
undef($memory_2);
#line 39
undef($memory_1);
#line 40
$memory_1 = "ne";
#line 40
$memory_2 = "ne";
#line 40
hash::set_value($memory_0, $memory_1, $memory_2);
#line 40
undef($memory_2);
#line 40
undef($memory_1);
#line 41
$memory_1 = "+";
#line 41
$memory_2 = "add";
#line 41
hash::set_value($memory_0, $memory_1, $memory_2);
#line 41
undef($memory_2);
#line 41
undef($memory_1);
#line 42
$memory_1 = "-";
#line 42
$memory_2 = "sub";
#line 42
hash::set_value($memory_0, $memory_1, $memory_2);
#line 42
undef($memory_2);
#line 42
undef($memory_1);
#line 43
$memory_1 = "*";
#line 43
$memory_2 = "mul";
#line 43
hash::set_value($memory_0, $memory_1, $memory_2);
#line 43
undef($memory_2);
#line 43
undef($memory_1);
#line 44
$memory_1 = "/";
#line 44
$memory_2 = "div";
#line 44
hash::set_value($memory_0, $memory_1, $memory_2);
#line 44
undef($memory_2);
#line 44
undef($memory_1);
#line 45
$memory_1 = "%";
#line 45
$memory_2 = "mod";
#line 45
hash::set_value($memory_0, $memory_1, $memory_2);
#line 45
undef($memory_2);
#line 45
undef($memory_1);
#line 46
$memory_1 = "<=";
#line 46
$memory_2 = "le";
#line 46
hash::set_value($memory_0, $memory_1, $memory_2);
#line 46
undef($memory_2);
#line 46
undef($memory_1);
#line 47
$memory_1 = "<";
#line 47
$memory_2 = "lt";
#line 47
hash::set_value($memory_0, $memory_1, $memory_2);
#line 47
undef($memory_2);
#line 47
undef($memory_1);
#line 48
$memory_1 = "==";
#line 48
$memory_2 = "num_eq";
#line 48
hash::set_value($memory_0, $memory_1, $memory_2);
#line 48
undef($memory_2);
#line 48
undef($memory_1);
#line 49
$memory_1 = "!=";
#line 49
$memory_2 = "num_ne";
#line 49
hash::set_value($memory_0, $memory_1, $memory_2);
#line 49
undef($memory_2);
#line 49
undef($memory_1);
#line 50
$memory_1 = ">";
#line 50
$memory_2 = "gt";
#line 50
hash::set_value($memory_0, $memory_1, $memory_2);
#line 50
undef($memory_2);
#line 50
undef($memory_1);
#line 51
$memory_1 = ">=";
#line 51
$memory_2 = "ge";
#line 51
hash::set_value($memory_0, $memory_1, $memory_2);
#line 51
undef($memory_2);
#line 51
undef($memory_1);
#line 52
$memory_1 = ".";
#line 52
$memory_2 = "concat_new";
#line 52
hash::set_value($memory_0, $memory_1, $memory_2);
#line 52
undef($memory_2);
#line 52
undef($memory_1);
#line 53
return $memory_0;
#line 53
undef($memory_0);
#line 53
return;
}

my $_gen_bin_ops;
sub generator_c_priv::gen_bin_ops() {
	$_gen_bin_ops = generator_c_priv::__gen_bin_ops() unless defined $_gen_bin_ops;
	return $_gen_bin_ops;
}

sub generator_c_priv::__gen_bin_ops_mod() {
my $memory_0;my $memory_1;my $memory_2;
#line 57
$memory_0 = {};
#line 58
$memory_1 = "+";
#line 58
$memory_2 = "add_mod";
#line 58
hash::set_value($memory_0, $memory_1, $memory_2);
#line 58
undef($memory_2);
#line 58
undef($memory_1);
#line 59
$memory_1 = "-";
#line 59
$memory_2 = "sub_mod";
#line 59
hash::set_value($memory_0, $memory_1, $memory_2);
#line 59
undef($memory_2);
#line 59
undef($memory_1);
#line 60
$memory_1 = "*";
#line 60
$memory_2 = "mul_mod";
#line 60
hash::set_value($memory_0, $memory_1, $memory_2);
#line 60
undef($memory_2);
#line 60
undef($memory_1);
#line 61
$memory_1 = "/";
#line 61
$memory_2 = "div_mod";
#line 61
hash::set_value($memory_0, $memory_1, $memory_2);
#line 61
undef($memory_2);
#line 61
undef($memory_1);
#line 62
$memory_1 = "%";
#line 62
$memory_2 = "mod_mod";
#line 62
hash::set_value($memory_0, $memory_1, $memory_2);
#line 62
undef($memory_2);
#line 62
undef($memory_1);
#line 63
$memory_1 = ".";
#line 63
$memory_2 = "concat_add";
#line 63
hash::set_value($memory_0, $memory_1, $memory_2);
#line 63
undef($memory_2);
#line 63
undef($memory_1);
#line 64
return $memory_0;
#line 64
undef($memory_0);
#line 64
return;
}

my $_gen_bin_ops_mod;
sub generator_c_priv::gen_bin_ops_mod() {
	$_gen_bin_ops_mod = generator_c_priv::__gen_bin_ops_mod() unless defined $_gen_bin_ops_mod;
	return $_gen_bin_ops_mod;
}

sub generator_c::__const_dict() {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;
#line 68
$memory_3 = ptd::sim();
#line 68
$memory_2 = ptd::arr($memory_3);
#line 68
undef($memory_3);
#line 68
$memory_4 = ptd::sim();
#line 68
$memory_3 = ptd::hash($memory_4);
#line 68
undef($memory_4);
#line 68
$memory_1 = {arr => $memory_2,hash => $memory_3,};
#line 68
undef($memory_2);
#line 68
undef($memory_3);
#line 68
$memory_0 = ptd::rec($memory_1);
#line 68
undef($memory_1);
#line 68
return $memory_0;
#line 68
undef($memory_0);
#line 68
return;
}

my $_const_dict;
sub generator_c::const_dict() {
	$_const_dict = generator_c::__const_dict() unless defined $_const_dict;
	return $_const_dict;
}

sub generator_c::__fun_args_t() {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;
#line 72
$memory_3 = ptd::none();
#line 72
$memory_4 = ptd::none();
#line 72
$memory_2 = {val => $memory_3,ref => $memory_4,};
#line 72
undef($memory_3);
#line 72
undef($memory_4);
#line 72
$memory_1 = ptd::var($memory_2);
#line 72
undef($memory_2);
#line 72
$memory_0 = ptd::arr($memory_1);
#line 72
undef($memory_1);
#line 72
return $memory_0;
#line 72
undef($memory_0);
#line 72
return;
}

my $_fun_args_t;
sub generator_c::fun_args_t() {
	$_fun_args_t = generator_c::__fun_args_t() unless defined $_fun_args_t;
	return $_fun_args_t;
}

sub generator_c::__const_t() {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;
#line 76
$memory_3 = ptd::sim();
#line 76
$memory_2 = ptd::arr($memory_3);
#line 76
undef($memory_3);
#line 76
$memory_4 = ptd::sim();
#line 76
$memory_3 = ptd::hash($memory_4);
#line 76
undef($memory_4);
#line 76
$memory_1 = {arr => $memory_2,hash => $memory_3,};
#line 76
undef($memory_2);
#line 76
undef($memory_3);
#line 76
$memory_0 = ptd::rec($memory_1);
#line 76
undef($memory_1);
#line 76
return $memory_0;
#line 76
undef($memory_0);
#line 76
return;
}

my $_const_t;
sub generator_c::const_t() {
	$_const_t = generator_c::__const_t() unless defined $_const_t;
	return $_const_t;
}

sub generator_c::__global_const_t() {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;
#line 81
$memory_5 = ptd::sim();
#line 81
$memory_6 = ptd::sim();
#line 81
$memory_4 = {key => $memory_5,uses => $memory_6,};
#line 81
undef($memory_5);
#line 81
undef($memory_6);
#line 81
$memory_3 = ptd::rec($memory_4);
#line 81
undef($memory_4);
#line 81
$memory_2 = ptd::arr($memory_3);
#line 81
undef($memory_3);
#line 82
$memory_4 = ptd::sim();
#line 82
$memory_3 = ptd::hash($memory_4);
#line 82
undef($memory_4);
#line 83
$memory_5 = ptd::sim();
#line 83
$memory_4 = ptd::arr($memory_5);
#line 83
undef($memory_5);
#line 84
$memory_7 = ptd::sim();
#line 84
$memory_6 = ptd::hash($memory_7);
#line 84
undef($memory_7);
#line 84
$memory_5 = ptd::hash($memory_6);
#line 84
undef($memory_6);
#line 84
$memory_1 = {arr => $memory_2,hash => $memory_3,holes => $memory_4,module_consts => $memory_5,};
#line 84
undef($memory_2);
#line 84
undef($memory_3);
#line 84
undef($memory_4);
#line 84
undef($memory_5);
#line 84
$memory_0 = ptd::rec($memory_1);
#line 84
undef($memory_1);
#line 84
return $memory_0;
#line 84
undef($memory_0);
#line 84
return;
}

my $_global_const_t;
sub generator_c::global_const_t() {
	$_global_const_t = generator_c::__global_const_t() unless defined $_global_const_t;
	return $_global_const_t;
}

sub generator_c::__state_t() {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;
#line 90
$memory_2 = {
	module => "generator_c",
	name => "global_const_t",
};
#line 90
$memory_2 = c_rt_lib::ov_mk_arg('ref', $memory_2);
#line 91
$memory_3 = ptd::sim();
#line 92
$memory_4 = ptd::sim();
#line 93
$memory_6 = {
	module => "boolean_t",
	name => "type",
};
#line 93
$memory_6 = c_rt_lib::ov_mk_arg('ref', $memory_6);
#line 93
$memory_5 = ptd::hash($memory_6);
#line 93
undef($memory_6);
#line 94
$memory_6 = ptd::sim();
#line 95
$memory_7 = {
	module => "generator_c",
	name => "fun_args_t",
};
#line 95
$memory_7 = c_rt_lib::ov_mk_arg('ref', $memory_7);
#line 97
$memory_10 = {
	module => "generator_c",
	name => "const_t",
};
#line 97
$memory_10 = c_rt_lib::ov_mk_arg('ref', $memory_10);
#line 98
$memory_11 = {
	module => "generator_c",
	name => "const_t",
};
#line 98
$memory_11 = c_rt_lib::ov_mk_arg('ref', $memory_11);
#line 99
$memory_12 = ptd::sim();
#line 99
$memory_9 = {sim => $memory_10,singleton => $memory_11,dynamic_nr => $memory_12,};
#line 99
undef($memory_10);
#line 99
undef($memory_11);
#line 99
undef($memory_12);
#line 99
$memory_8 = ptd::rec($memory_9);
#line 99
undef($memory_9);
#line 99
$memory_1 = {global_const => $memory_2,header => $memory_3,ret => $memory_4,additional_imports => $memory_5,mod_name => $memory_6,fun_args => $memory_7,const => $memory_8,};
#line 99
undef($memory_2);
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
#line 99
$memory_0 = ptd::rec($memory_1);
#line 99
undef($memory_1);
#line 99
return $memory_0;
#line 99
undef($memory_0);
#line 99
return;
}

my $_state_t;
sub generator_c::state_t() {
	$_state_t = generator_c::__state_t() unless defined $_state_t;
	return $_state_t;
}

sub generator_c::__get_empty_state() {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;
#line 106
$memory_2 = [];
#line 106
$memory_3 = {};
#line 106
$memory_4 = [];
#line 106
$memory_5 = {};
#line 106
$memory_1 = {arr => $memory_2,hash => $memory_3,holes => $memory_4,module_consts => $memory_5,};
#line 106
undef($memory_2);
#line 106
undef($memory_3);
#line 106
undef($memory_4);
#line 106
undef($memory_5);
#line 107
$memory_2 = "";
#line 108
$memory_3 = "";
#line 109
$memory_4 = [];
#line 110
$memory_6 = 0;
#line 110
$memory_8 = [];
#line 110
$memory_9 = {};
#line 110
$memory_7 = {arr => $memory_8,hash => $memory_9,};
#line 110
undef($memory_8);
#line 110
undef($memory_9);
#line 110
$memory_9 = [];
#line 110
$memory_10 = {};
#line 110
$memory_8 = {arr => $memory_9,hash => $memory_10,};
#line 110
undef($memory_9);
#line 110
undef($memory_10);
#line 110
$memory_5 = {dynamic_nr => $memory_6,sim => $memory_7,singleton => $memory_8,};
#line 110
undef($memory_6);
#line 110
undef($memory_7);
#line 110
undef($memory_8);
#line 111
$memory_6 = "";
#line 112
$memory_7 = {};
#line 112
$memory_0 = {global_const => $memory_1,ret => $memory_2,header => $memory_3,fun_args => $memory_4,const => $memory_5,mod_name => $memory_6,additional_imports => $memory_7,};
#line 112
undef($memory_1);
#line 112
undef($memory_2);
#line 112
undef($memory_3);
#line 112
undef($memory_4);
#line 112
undef($memory_5);
#line 112
undef($memory_6);
#line 112
undef($memory_7);
#line 112
return $memory_0;
#line 112
undef($memory_0);
#line 112
return;
}

my $_get_empty_state;
sub generator_c::get_empty_state() {
	$_get_empty_state = generator_c::__get_empty_state() unless defined $_get_empty_state;
	return $_get_empty_state;
}

sub generator_c_priv::print($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];
#line 117
$memory_2 = "ret";
#line 117
$memory_2 = c_rt_lib::get_ref_hash($memory_0, $memory_2);
#line 117
$memory_2 = $memory_2 . $memory_1;
#line 117
$memory_3 = "ret";
#line 117
c_rt_lib::set_ref_hash($memory_0, $memory_3, $memory_2);
#line 117
undef($memory_3);
#line 117
undef($memory_2);
#line 117
undef($memory_1);
#line 117
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub generator_c_priv::print_to_header($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];
#line 121
$memory_2 = "header";
#line 121
$memory_2 = c_rt_lib::get_ref_hash($memory_0, $memory_2);
#line 121
$memory_2 = $memory_2 . $memory_1;
#line 121
$memory_3 = "header";
#line 121
c_rt_lib::set_ref_hash($memory_0, $memory_3, $memory_2);
#line 121
undef($memory_3);
#line 121
undef($memory_2);
#line 121
undef($memory_1);
#line 121
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub generator_c_priv::println_to_header($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];
#line 125
$memory_2 = string::lf();
#line 125
$memory_2 = $memory_1 . $memory_2;
#line 125
$memory_3 = "header";
#line 125
$memory_3 = c_rt_lib::get_ref_hash($memory_0, $memory_3);
#line 125
$memory_3 = $memory_3 . $memory_2;
#line 125
$memory_4 = "header";
#line 125
c_rt_lib::set_ref_hash($memory_0, $memory_4, $memory_3);
#line 125
undef($memory_4);
#line 125
undef($memory_2);
#line 125
undef($memory_3);
#line 125
undef($memory_1);
#line 125
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub generator_c_priv::__arg_t() {
my $memory_0;
#line 129
$memory_0 = "ImmT ";
#line 129
return $memory_0;
#line 129
undef($memory_0);
#line 129
return;
}

my $_arg_t;
sub generator_c_priv::arg_t() {
	$_arg_t = generator_c_priv::__arg_t() unless defined $_arg_t;
	return $_arg_t;
}

sub generator_c_priv::println($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];
#line 133
$memory_2 = "ret";
#line 133
$memory_2 = c_rt_lib::get_ref_hash($memory_0, $memory_2);
#line 133
$memory_2 = $memory_2 . $memory_1;
#line 133
$memory_3 = "ret";
#line 133
c_rt_lib::set_ref_hash($memory_0, $memory_3, $memory_2);
#line 133
undef($memory_3);
#line 133
undef($memory_2);
#line 134
$memory_2 = string::lf();
#line 134
$memory_3 = "ret";
#line 134
$memory_3 = c_rt_lib::get_ref_hash($memory_0, $memory_3);
#line 134
$memory_3 = $memory_3 . $memory_2;
#line 134
$memory_4 = "ret";
#line 134
c_rt_lib::set_ref_hash($memory_0, $memory_4, $memory_3);
#line 134
undef($memory_4);
#line 134
undef($memory_2);
#line 134
undef($memory_3);
#line 134
undef($memory_1);
#line 134
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub generator_c_priv::get_reg($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];
#line 138
$memory_2 = $memory_0->{'fun_args'};
#line 139
$memory_3 = array::len($memory_2);
#line 139
$memory_3 = c_rt_lib::to_nl($memory_3 > $memory_1);
#line 139
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 139
if (c_rt_lib::check_true($memory_4)) {goto label_7;}
#line 139
$memory_3 = $memory_2->[$memory_1];
#line 139
$memory_3 = c_rt_lib::ov_is($memory_3, 'ref');
#line 139
label_7:
#line 139
undef($memory_4);
#line 139
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 139
if (c_rt_lib::check_true($memory_3)) {goto label_19;}
#line 140
$memory_4 = "*___ref___";
#line 140
$memory_4 = $memory_4 . $memory_1;
#line 140
undef($memory_1);
#line 140
undef($memory_2);
#line 140
undef($memory_3);
#line 140
$_[0] = $memory_0;return $memory_4;
#line 140
undef($memory_4);
#line 141
goto label_19;
#line 141
label_19:
#line 141
undef($memory_3);
#line 142
$memory_3 = "___nl__";
#line 142
$memory_3 = $memory_3 . $memory_1;
#line 142
undef($memory_1);
#line 142
undef($memory_2);
#line 142
$_[0] = $memory_0;return $memory_3;
#line 142
undef($memory_3);
#line 142
undef($memory_2);
#line 142
undef($memory_1);
#line 142
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub generator_c_priv::get_reg_ref($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];
#line 146
$memory_2 = $memory_0->{'fun_args'};
#line 147
$memory_3 = array::len($memory_2);
#line 147
$memory_3 = c_rt_lib::to_nl($memory_3 > $memory_1);
#line 147
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 147
if (c_rt_lib::check_true($memory_4)) {goto label_7;}
#line 147
$memory_3 = $memory_2->[$memory_1];
#line 147
$memory_3 = c_rt_lib::ov_is($memory_3, 'ref');
#line 147
label_7:
#line 147
undef($memory_4);
#line 147
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 147
if (c_rt_lib::check_true($memory_3)) {goto label_19;}
#line 148
$memory_4 = "___ref___";
#line 148
$memory_4 = $memory_4 . $memory_1;
#line 148
undef($memory_1);
#line 148
undef($memory_2);
#line 148
undef($memory_3);
#line 148
$_[0] = $memory_0;return $memory_4;
#line 148
undef($memory_4);
#line 149
goto label_19;
#line 149
label_19:
#line 149
undef($memory_3);
#line 150
$memory_3 = "&___nl__";
#line 150
$memory_3 = $memory_3 . $memory_1;
#line 150
undef($memory_1);
#line 150
undef($memory_2);
#line 150
$_[0] = $memory_0;return $memory_3;
#line 150
undef($memory_3);
#line 150
undef($memory_2);
#line 150
undef($memory_1);
#line 150
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub generator_c_priv::get_string($) {
my $memory_0;my $memory_1;my $memory_2;$memory_0 = $_[0];
#line 154
$memory_1 = "\"";
#line 154
$memory_1 = $memory_1 . $memory_0;
#line 154
$memory_2 = "\"";
#line 154
$memory_1 = $memory_1 . $memory_2;
#line 154
undef($memory_2);
#line 154
undef($memory_0);
#line 154
return $memory_1;
#line 154
undef($memory_1);
#line 154
undef($memory_0);
#line 154
return;
}

sub generator_c::__module_out_t() {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;
#line 158
$memory_2 = ptd::sim();
#line 158
$memory_3 = ptd::sim();
#line 158
$memory_1 = {c => $memory_2,h => $memory_3,};
#line 158
undef($memory_2);
#line 158
undef($memory_3);
#line 158
$memory_0 = ptd::rec($memory_1);
#line 158
undef($memory_1);
#line 158
return $memory_0;
#line 158
undef($memory_0);
#line 158
return;
}

my $_module_out_t;
sub generator_c::module_out_t() {
	$_module_out_t = generator_c::__module_out_t() unless defined $_module_out_t;
	return $_module_out_t;
}

sub generator_c::__out_t() {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;
#line 162
$memory_3 = {
	module => "generator_c",
	name => "module_out_t",
};
#line 162
$memory_3 = c_rt_lib::ov_mk_arg('ref', $memory_3);
#line 162
$memory_2 = ptd::hash($memory_3);
#line 162
undef($memory_3);
#line 162
$memory_3 = {
	module => "generator_c",
	name => "module_out_t",
};
#line 162
$memory_3 = c_rt_lib::ov_mk_arg('ref', $memory_3);
#line 162
$memory_1 = {modules => $memory_2,global_const => $memory_3,};
#line 162
undef($memory_2);
#line 162
undef($memory_3);
#line 162
$memory_0 = ptd::rec($memory_1);
#line 162
undef($memory_1);
#line 162
return $memory_0;
#line 162
undef($memory_0);
#line 162
return;
}

my $_out_t;
sub generator_c::out_t() {
	$_out_t = generator_c::__out_t() unless defined $_out_t;
	return $_out_t;
}

sub generator_c::generate($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;my $memory_13;my $memory_14;my $memory_15;$memory_0 = $_[0];$memory_1 = $_[1];Scalar::Util::weaken($_[1]) if ref($_[1]);
#line 166
$memory_2 = {};
#line 167
$memory_3 = [];
#line 168
$memory_6 = c_rt_lib::init_iter($memory_0);
#line 168
label_3:
#line 168
$memory_4 = c_rt_lib::is_end_hash($memory_6);
#line 168
if (c_rt_lib::check_true($memory_4)) {goto label_11;}
#line 168
$memory_4 = c_rt_lib::get_key_iter($memory_6);
#line 168
$memory_5 = c_rt_lib::hash_get_value($memory_0, $memory_4);
#line 169
array::push($memory_3, $memory_4);
#line 170
$memory_6 = c_rt_lib::next_iter($memory_6);
#line 170
goto label_3;
#line 170
label_11:
#line 170
undef($memory_4);
#line 170
undef($memory_5);
#line 170
undef($memory_6);
#line 171
array::sort($memory_3);
#line 172
$memory_5 = 0;
#line 172
$memory_6 = 1;
#line 172
$memory_7 = c_rt_lib::array_len($memory_3);
#line 172
label_19:
#line 172
$memory_8 = c_rt_lib::to_nl($memory_5 >= $memory_7);
#line 172
if (c_rt_lib::check_true($memory_8)) {goto label_92;}
#line 172
$memory_4 = $memory_3->[$memory_5];
#line 173
$memory_9 = hash::get_value($memory_0, $memory_4);
#line 174
generator_c::clear_module_from_state($memory_1, $memory_4);
#line 175
$memory_10 = "global_const";
#line 175
$memory_10 = c_rt_lib::get_ref_hash($memory_1, $memory_10);
#line 175
$memory_11 = "module_consts";
#line 175
$memory_11 = c_rt_lib::get_ref_hash($memory_10, $memory_11);
#line 175
$memory_12 = {};
#line 175
hash::set_value($memory_11, $memory_4, $memory_12);
#line 175
undef($memory_12);
#line 175
$memory_12 = "module_consts";
#line 175
c_rt_lib::set_ref_hash($memory_10, $memory_12, $memory_11);
#line 175
$memory_12 = "global_const";
#line 175
c_rt_lib::set_ref_hash($memory_1, $memory_12, $memory_10);
#line 175
undef($memory_12);
#line 175
undef($memory_10);
#line 175
undef($memory_11);
#line 176
$memory_10 = "";
#line 176
$memory_11 = $memory_10;
#line 176
 if (c_rt_lib::get_hashcount($memory_1) > 1) {$memory_1 = {%{$memory_1}};}$memory_1->{'ret'} = $memory_11;
#line 176
undef($memory_10);
#line 176
undef($memory_11);
#line 177
$memory_10 = "";
#line 177
$memory_11 = $memory_10;
#line 177
 if (c_rt_lib::get_hashcount($memory_1) > 1) {$memory_1 = {%{$memory_1}};}$memory_1->{'header'} = $memory_11;
#line 177
undef($memory_10);
#line 177
undef($memory_11);
#line 178
$memory_10 = [];
#line 178
$memory_11 = $memory_10;
#line 178
 if (c_rt_lib::get_hashcount($memory_1) > 1) {$memory_1 = {%{$memory_1}};}$memory_1->{'fun_args'} = $memory_11;
#line 178
undef($memory_10);
#line 178
undef($memory_11);
#line 179
$memory_11 = 0;
#line 179
$memory_13 = [];
#line 179
$memory_14 = {};
#line 179
$memory_12 = {arr => $memory_13,hash => $memory_14,};
#line 179
undef($memory_13);
#line 179
undef($memory_14);
#line 179
$memory_14 = [];
#line 179
$memory_15 = {};
#line 179
$memory_13 = {arr => $memory_14,hash => $memory_15,};
#line 179
undef($memory_14);
#line 179
undef($memory_15);
#line 179
$memory_10 = {dynamic_nr => $memory_11,sim => $memory_12,singleton => $memory_13,};
#line 179
undef($memory_11);
#line 179
undef($memory_12);
#line 179
undef($memory_13);
#line 179
$memory_11 = $memory_10;
#line 179
 if (c_rt_lib::get_hashcount($memory_1) > 1) {$memory_1 = {%{$memory_1}};}$memory_1->{'const'} = $memory_11;
#line 179
undef($memory_10);
#line 179
undef($memory_11);
#line 180
$memory_10 = $memory_4;
#line 180
 if (c_rt_lib::get_hashcount($memory_1) > 1) {$memory_1 = {%{$memory_1}};}$memory_1->{'mod_name'} = $memory_10;
#line 180
undef($memory_10);
#line 181
$memory_10 = {};
#line 181
$memory_11 = $memory_10;
#line 181
 if (c_rt_lib::get_hashcount($memory_1) > 1) {$memory_1 = {%{$memory_1}};}$memory_1->{'additional_imports'} = $memory_11;
#line 181
undef($memory_10);
#line 181
undef($memory_11);
#line 182
generator_c_priv::print_mod($memory_1, $memory_9);
#line 183
$memory_11 = $memory_1->{'ret'};
#line 183
$memory_12 = $memory_1->{'header'};
#line 183
$memory_10 = {c => $memory_11,h => $memory_12,};
#line 183
undef($memory_11);
#line 183
undef($memory_12);
#line 183
hash::set_value($memory_2, $memory_4, $memory_10);
#line 183
undef($memory_10);
#line 183
undef($memory_9);
#line 184
$memory_5 = $memory_5 + $memory_6;
#line 184
goto label_19;
#line 184
label_92:
#line 184
undef($memory_4);
#line 184
undef($memory_5);
#line 184
undef($memory_6);
#line 184
undef($memory_7);
#line 184
undef($memory_8);
#line 185
$memory_5 = generator_c_priv::generate_global_const_files($memory_1, $memory_3);
#line 185
$memory_4 = {modules => $memory_2,global_const => $memory_5,};
#line 185
undef($memory_5);
#line 185
undef($memory_0);
#line 185
undef($memory_2);
#line 185
undef($memory_3);
#line 185
$_[1] = $memory_1;return $memory_4;
#line 185
undef($memory_4);
#line 185
undef($memory_2);
#line 185
undef($memory_3);
#line 185
undef($memory_0);
#line 185
$_[1] = $memory_1;return;
$_[1] = $memory_1;}

sub generator_c_priv::generate_global_const_files($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];
#line 190
$memory_2 = "";
#line 190
$memory_3 = $memory_2;
#line 190
 if (c_rt_lib::get_hashcount($memory_0) > 1) {$memory_0 = {%{$memory_0}};}$memory_0->{'ret'} = $memory_3;
#line 190
undef($memory_2);
#line 190
undef($memory_3);
#line 191
$memory_2 = "";
#line 191
$memory_3 = $memory_2;
#line 191
 if (c_rt_lib::get_hashcount($memory_0) > 1) {$memory_0 = {%{$memory_0}};}$memory_0->{'header'} = $memory_3;
#line 191
undef($memory_2);
#line 191
undef($memory_3);
#line 192
$memory_2 = [];
#line 192
$memory_3 = $memory_2;
#line 192
 if (c_rt_lib::get_hashcount($memory_0) > 1) {$memory_0 = {%{$memory_0}};}$memory_0->{'fun_args'} = $memory_3;
#line 192
undef($memory_2);
#line 192
undef($memory_3);
#line 193
$memory_3 = 0;
#line 193
$memory_5 = [];
#line 193
$memory_6 = {};
#line 193
$memory_4 = {arr => $memory_5,hash => $memory_6,};
#line 193
undef($memory_5);
#line 193
undef($memory_6);
#line 193
$memory_6 = [];
#line 193
$memory_7 = {};
#line 193
$memory_5 = {arr => $memory_6,hash => $memory_7,};
#line 193
undef($memory_6);
#line 193
undef($memory_7);
#line 193
$memory_2 = {dynamic_nr => $memory_3,sim => $memory_4,singleton => $memory_5,};
#line 193
undef($memory_3);
#line 193
undef($memory_4);
#line 193
undef($memory_5);
#line 193
$memory_3 = $memory_2;
#line 193
 if (c_rt_lib::get_hashcount($memory_0) > 1) {$memory_0 = {%{$memory_0}};}$memory_0->{'const'} = $memory_3;
#line 193
undef($memory_2);
#line 193
undef($memory_3);
#line 194
$memory_2 = "";
#line 194
$memory_3 = $memory_2;
#line 194
 if (c_rt_lib::get_hashcount($memory_0) > 1) {$memory_0 = {%{$memory_0}};}$memory_0->{'mod_name'} = $memory_3;
#line 194
undef($memory_2);
#line 194
undef($memory_3);
#line 195
$memory_2 = generator_c_priv::get_cr();
#line 195
generator_c_priv::print_to_header($memory_0, $memory_2);
#line 195
undef($memory_2);
#line 196
$memory_2 = "#pragma once";
#line 196
generator_c_priv::println_to_header($memory_0, $memory_2);
#line 196
undef($memory_2);
#line 197
$memory_3 = "c_rt_lib";
#line 197
$memory_2 = generator_c_priv::get_include($memory_3);
#line 197
undef($memory_3);
#line 197
generator_c_priv::println_to_header($memory_0, $memory_2);
#line 197
undef($memory_2);
#line 198
$memory_3 = 0;
#line 198
$memory_4 = 1;
#line 198
$memory_5 = c_rt_lib::array_len($memory_1);
#line 198
label_53:
#line 198
$memory_6 = c_rt_lib::to_nl($memory_3 >= $memory_5);
#line 198
if (c_rt_lib::check_true($memory_6)) {goto label_62;}
#line 198
$memory_2 = $memory_1->[$memory_3];
#line 199
$memory_7 = generator_c_priv::get_include($memory_2);
#line 199
generator_c_priv::println_to_header($memory_0, $memory_7);
#line 199
undef($memory_7);
#line 200
$memory_3 = $memory_3 + $memory_4;
#line 200
goto label_53;
#line 200
label_62:
#line 200
undef($memory_2);
#line 200
undef($memory_3);
#line 200
undef($memory_4);
#line 200
undef($memory_5);
#line 200
undef($memory_6);
#line 201
$memory_2 = generator_c_priv::get_cr();
#line 201
generator_c_priv::print($memory_0, $memory_2);
#line 201
undef($memory_2);
#line 202
$memory_3 = "c_global_const";
#line 202
$memory_2 = generator_c_priv::get_include($memory_3);
#line 202
undef($memory_3);
#line 202
generator_c_priv::println($memory_0, $memory_2);
#line 202
undef($memory_2);
#line 203
$memory_2 = $memory_0->{'global_const'};
#line 203
$memory_2 = $memory_2->{'arr'};
#line 204
$memory_3 = array::len($memory_2);
#line 205
$memory_4 = "void ___global_const_init();";
#line 205
generator_c_priv::println_to_header($memory_0, $memory_4);
#line 205
undef($memory_4);
#line 206
$memory_4 = generator_c_priv::arg_t();
#line 206
$memory_5 = " ___get_global_const(int __nr);";
#line 206
$memory_4 = $memory_4 . $memory_5;
#line 206
undef($memory_5);
#line 206
generator_c_priv::println_to_header($memory_0, $memory_4);
#line 206
undef($memory_4);
#line 207
$memory_4 = "
static ";
#line 208
$memory_5 = generator_c_priv::arg_t();
#line 208
$memory_4 = $memory_4 . $memory_5;
#line 208
undef($memory_5);
#line 208
$memory_5 = " ___global_const__ = NULL;
static int ___global_const_init__ = 1;
static int ___global_const_offset;";
#line 208
$memory_4 = $memory_4 . $memory_5;
#line 208
undef($memory_5);
#line 208
generator_c_priv::println($memory_0, $memory_4);
#line 208
undef($memory_4);
#line 211
$memory_4 = "void ___global_const_init(){
if(!___global_const_init__) nl_die();
___global_const_init__ = 0;
___global_const_offset = c_rt_lib0get_global_const_offset();
___global_const__ = alloc_mem(";
#line 211
$memory_4 = $memory_4 . $memory_3;
#line 215
$memory_5 = " * ___global_const_offset);
";
#line 215
$memory_4 = $memory_4 . $memory_5;
#line 215
undef($memory_5);
#line 215
generator_c_priv::println($memory_0, $memory_4);
#line 215
undef($memory_4);
#line 217
$memory_4 = 0;
#line 217
$memory_5 = 1;
#line 217
label_106:
#line 217
$memory_6 = c_rt_lib::to_nl($memory_4 >= $memory_3);
#line 217
if (c_rt_lib::check_true($memory_6)) {goto label_123;}
#line 218
$memory_8 = $memory_2->[$memory_4];
#line 218
$memory_8 = $memory_8->{'key'};
#line 218
$memory_9 = "___global_const__ + ___global_const_offset * ";
#line 218
$memory_9 = $memory_9 . $memory_4;
#line 218
$memory_7 = generator_c_priv::create_sim_to_memory($memory_8, $memory_9);
#line 218
undef($memory_9);
#line 218
undef($memory_8);
#line 218
$memory_8 = ";";
#line 218
$memory_7 = $memory_7 . $memory_8;
#line 218
undef($memory_8);
#line 218
generator_c_priv::println($memory_0, $memory_7);
#line 218
undef($memory_7);
#line 219
$memory_4 = $memory_4 + $memory_5;
#line 219
goto label_106;
#line 219
label_123:
#line 219
undef($memory_4);
#line 219
undef($memory_5);
#line 219
undef($memory_6);
#line 220
$memory_4 = "
";
#line 221
$memory_6 = "register_global_const";
#line 221
$memory_5 = generator_c_priv::get_lib_fun($memory_6);
#line 221
undef($memory_6);
#line 221
$memory_4 = $memory_4 . $memory_5;
#line 221
undef($memory_5);
#line 221
$memory_5 = "((";
#line 221
$memory_4 = $memory_4 . $memory_5;
#line 221
undef($memory_5);
#line 221
$memory_5 = generator_c_priv::arg_t();
#line 221
$memory_4 = $memory_4 . $memory_5;
#line 221
undef($memory_5);
#line 221
$memory_5 = ")___global_const__,(";
#line 221
$memory_4 = $memory_4 . $memory_5;
#line 221
undef($memory_5);
#line 221
$memory_5 = generator_c_priv::arg_t();
#line 221
$memory_4 = $memory_4 . $memory_5;
#line 221
undef($memory_5);
#line 222
$memory_5 = ")___global_const__ + ";
#line 222
$memory_4 = $memory_4 . $memory_5;
#line 222
undef($memory_5);
#line 222
$memory_4 = $memory_4 . $memory_3;
#line 222
$memory_5 = " * ___global_const_offset);";
#line 222
$memory_4 = $memory_4 . $memory_5;
#line 222
undef($memory_5);
#line 222
generator_c_priv::println($memory_0, $memory_4);
#line 222
undef($memory_4);
#line 223
$memory_5 = 0;
#line 223
$memory_6 = 1;
#line 223
$memory_7 = c_rt_lib::array_len($memory_1);
#line 223
label_157:
#line 223
$memory_8 = c_rt_lib::to_nl($memory_5 >= $memory_7);
#line 223
if (c_rt_lib::check_true($memory_8)) {goto label_173;}
#line 223
$memory_4 = $memory_1->[$memory_5];
#line 224
$memory_10 = "__const__init";
#line 224
$memory_11 = $memory_0->{'mod_name'};
#line 224
$memory_9 = generator_c_priv::get_fun_name($memory_4, $memory_10, $memory_11);
#line 224
undef($memory_11);
#line 224
undef($memory_10);
#line 224
$memory_10 = "();";
#line 224
$memory_9 = $memory_9 . $memory_10;
#line 224
undef($memory_10);
#line 224
generator_c_priv::println($memory_0, $memory_9);
#line 224
undef($memory_9);
#line 225
$memory_5 = $memory_5 + $memory_6;
#line 225
goto label_157;
#line 225
label_173:
#line 225
undef($memory_4);
#line 225
undef($memory_5);
#line 225
undef($memory_6);
#line 225
undef($memory_7);
#line 225
undef($memory_8);
#line 226
$memory_4 = "}";
#line 226
generator_c_priv::println($memory_0, $memory_4);
#line 226
undef($memory_4);
#line 227
$memory_4 = generator_c_priv::arg_t();
#line 227
$memory_5 = "___get_global_const(int __nr) {
";
#line 227
$memory_4 = $memory_4 . $memory_5;
#line 227
undef($memory_5);
#line 228
$memory_5 = generator_c_priv::arg_t();
#line 228
$memory_4 = $memory_4 . $memory_5;
#line 228
undef($memory_5);
#line 228
$memory_5 = "ret = NULL;
";
#line 228
$memory_4 = $memory_4 . $memory_5;
#line 228
undef($memory_5);
#line 229
$memory_6 = "copy";
#line 229
$memory_8 = "&ret";
#line 229
$memory_9 = "(";
#line 229
$memory_10 = generator_c_priv::arg_t();
#line 229
$memory_9 = $memory_9 . $memory_10;
#line 229
undef($memory_10);
#line 229
$memory_10 = ")___global_const__ + ___global_const_offset * __nr";
#line 229
$memory_9 = $memory_9 . $memory_10;
#line 229
undef($memory_10);
#line 229
$memory_7 = [$memory_8,$memory_9];
#line 229
undef($memory_8);
#line 229
undef($memory_9);
#line 229
$memory_5 = generator_c_priv::get_fun_lib($memory_6, $memory_7);
#line 229
undef($memory_7);
#line 229
undef($memory_6);
#line 229
$memory_4 = $memory_4 . $memory_5;
#line 229
undef($memory_5);
#line 229
$memory_5 = ";
return ret;
}";
#line 229
$memory_4 = $memory_4 . $memory_5;
#line 229
undef($memory_5);
#line 229
generator_c_priv::println($memory_0, $memory_4);
#line 229
undef($memory_4);
#line 232
$memory_5 = $memory_0->{'ret'};
#line 232
$memory_6 = $memory_0->{'header'};
#line 232
$memory_4 = {c => $memory_5,h => $memory_6,};
#line 232
undef($memory_5);
#line 232
undef($memory_6);
#line 232
undef($memory_1);
#line 232
undef($memory_2);
#line 232
undef($memory_3);
#line 232
$_[0] = $memory_0;return $memory_4;
#line 232
undef($memory_4);
#line 232
undef($memory_2);
#line 232
undef($memory_3);
#line 232
undef($memory_1);
#line 232
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub generator_c_priv::get_include($) {
my $memory_0;my $memory_1;my $memory_2;$memory_0 = $_[0];
#line 236
$memory_1 = "#include \"";
#line 236
$memory_1 = $memory_1 . $memory_0;
#line 236
$memory_2 = ".h\"";
#line 236
$memory_1 = $memory_1 . $memory_2;
#line 236
undef($memory_2);
#line 236
undef($memory_0);
#line 236
return $memory_1;
#line 236
undef($memory_1);
#line 236
undef($memory_0);
#line 236
return;
}

sub generator_c_priv::__get_cr() {
my $memory_0;
#line 240
$memory_0 = "
/* (c) Atinea Sp z o. o.
 *  Stamp: nianio lang
 */
";
#line 240
return $memory_0;
#line 240
undef($memory_0);
#line 240
return;
}

my $_get_cr;
sub generator_c_priv::get_cr() {
	$_get_cr = generator_c_priv::__get_cr() unless defined $_get_cr;
	return $_get_cr;
}

sub generator_c_priv::get_function_name($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;$memory_0 = $_[0];$memory_1 = $_[1];
#line 249
$memory_3 = $memory_0->{'access'};
#line 249
$memory_4 = c_rt_lib::ov_is($memory_3, 'pub');
#line 249
if (c_rt_lib::check_true($memory_4)) {goto label_8;}
#line 251
$memory_4 = c_rt_lib::ov_is($memory_3, 'priv');
#line 251
if (c_rt_lib::check_true($memory_4)) {goto label_11;}
#line 251
$memory_4 = "NOMATCHALERT";
#line 251
$memory_4 = [$memory_4,$memory_3];
#line 251
die(dfile::ssave($memory_4));
#line 249
label_8:
#line 250
$memory_2 = $memory_1;
#line 251
goto label_16;
#line 251
label_11:
#line 252
$memory_5 = "";
#line 252
$memory_2 = $memory_5;
#line 252
undef($memory_5);
#line 253
goto label_16;
#line 253
label_16:
#line 253
undef($memory_3);
#line 253
undef($memory_4);
#line 254
$memory_4 = $memory_0->{'name'};
#line 254
$memory_3 = generator_c_priv::get_fun_name($memory_2, $memory_4, $memory_1);
#line 254
undef($memory_4);
#line 254
undef($memory_0);
#line 254
undef($memory_1);
#line 254
undef($memory_2);
#line 254
return $memory_3;
#line 254
undef($memory_3);
#line 254
undef($memory_2);
#line 254
undef($memory_0);
#line 254
undef($memory_1);
#line 254
return;
}

sub generator_c_priv::get_function_header($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;my $memory_13;$memory_0 = $_[0];$memory_1 = $_[1];
#line 258
$memory_2 = "";
#line 259
$memory_3 = generator_c_priv::get_function_name($memory_0, $memory_1);
#line 260
$memory_4 = generator_c_priv::arg_t();
#line 260
$memory_4 = $memory_4 . $memory_3;
#line 260
$memory_5 = "(";
#line 260
$memory_4 = $memory_4 . $memory_5;
#line 260
undef($memory_5);
#line 260
$memory_2 = $memory_2 . $memory_4;
#line 260
undef($memory_4);
#line 261
$memory_4 = 0;
#line 262
$memory_5 = $memory_0->{'args_type'};
#line 262
$memory_7 = 0;
#line 262
$memory_8 = 1;
#line 262
$memory_9 = c_rt_lib::array_len($memory_5);
#line 262
label_14:
#line 262
$memory_10 = c_rt_lib::to_nl($memory_7 >= $memory_9);
#line 262
if (c_rt_lib::check_true($memory_10)) {goto label_61;}
#line 262
$memory_6 = $memory_5->[$memory_7];
#line 263
$memory_11 = 0;
#line 263
$memory_11 = c_rt_lib::to_nl($memory_11 == $memory_4);
#line 263
$memory_11 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_11));
#line 263
$memory_11 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_11));
#line 263
if (c_rt_lib::check_true($memory_11)) {goto label_27;}
#line 263
$memory_12 = ",";
#line 263
$memory_2 = $memory_2 . $memory_12;
#line 263
undef($memory_12);
#line 263
goto label_27;
#line 263
label_27:
#line 263
undef($memory_11);
#line 264
$memory_11 = c_rt_lib::ov_is($memory_6, 'val');
#line 264
if (c_rt_lib::check_true($memory_11)) {goto label_36;}
#line 266
$memory_11 = c_rt_lib::ov_is($memory_6, 'ref');
#line 266
if (c_rt_lib::check_true($memory_11)) {goto label_45;}
#line 266
$memory_11 = "NOMATCHALERT";
#line 266
$memory_11 = [$memory_11,$memory_6];
#line 266
die(dfile::ssave($memory_11));
#line 264
label_36:
#line 265
$memory_12 = generator_c_priv::arg_t();
#line 265
$memory_13 = "___nl__";
#line 265
$memory_12 = $memory_12 . $memory_13;
#line 265
undef($memory_13);
#line 265
$memory_12 = $memory_12 . $memory_4;
#line 265
$memory_2 = $memory_2 . $memory_12;
#line 265
undef($memory_12);
#line 266
goto label_54;
#line 266
label_45:
#line 267
$memory_12 = generator_c_priv::arg_t();
#line 267
$memory_13 = "* ___ref___";
#line 267
$memory_12 = $memory_12 . $memory_13;
#line 267
undef($memory_13);
#line 267
$memory_12 = $memory_12 . $memory_4;
#line 267
$memory_2 = $memory_2 . $memory_12;
#line 267
undef($memory_12);
#line 268
goto label_54;
#line 268
label_54:
#line 268
undef($memory_11);
#line 269
$memory_11 = 1;
#line 269
$memory_4 = $memory_4 + $memory_11;
#line 269
undef($memory_11);
#line 270
$memory_7 = $memory_7 + $memory_8;
#line 270
goto label_14;
#line 270
label_61:
#line 270
undef($memory_5);
#line 270
undef($memory_6);
#line 270
undef($memory_7);
#line 270
undef($memory_8);
#line 270
undef($memory_9);
#line 270
undef($memory_10);
#line 271
$memory_5 = ")";
#line 271
$memory_2 = $memory_2 . $memory_5;
#line 271
undef($memory_5);
#line 272
undef($memory_0);
#line 272
undef($memory_1);
#line 272
undef($memory_3);
#line 272
undef($memory_4);
#line 272
return $memory_2;
#line 272
undef($memory_2);
#line 272
undef($memory_3);
#line 272
undef($memory_4);
#line 272
undef($memory_0);
#line 272
undef($memory_1);
#line 272
return;
}

sub generator_c_priv::get_const($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];
#line 276
$memory_2 = 1;
#line 276
$memory_2 = -$memory_2;
#line 277
$memory_4 = $memory_0->{'hash'};
#line 277
$memory_3 = hash::has_key($memory_4, $memory_1);
#line 277
undef($memory_4);
#line 277
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 277
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 277
if (c_rt_lib::check_true($memory_3)) {goto label_28;}
#line 278
$memory_5 = $memory_0->{'arr'};
#line 278
$memory_4 = array::len($memory_5);
#line 278
undef($memory_5);
#line 278
$memory_2 = $memory_4;
#line 278
undef($memory_4);
#line 279
$memory_4 = "arr";
#line 279
$memory_4 = c_rt_lib::get_ref_hash($memory_0, $memory_4);
#line 279
array::push($memory_4, $memory_1);
#line 279
$memory_5 = "arr";
#line 279
c_rt_lib::set_ref_hash($memory_0, $memory_5, $memory_4);
#line 279
undef($memory_5);
#line 279
undef($memory_4);
#line 280
$memory_4 = "hash";
#line 280
$memory_4 = c_rt_lib::get_ref_hash($memory_0, $memory_4);
#line 280
hash::set_value($memory_4, $memory_1, $memory_2);
#line 280
$memory_5 = "hash";
#line 280
c_rt_lib::set_ref_hash($memory_0, $memory_5, $memory_4);
#line 280
undef($memory_5);
#line 280
undef($memory_4);
#line 281
goto label_35;
#line 281
label_28:
#line 282
$memory_5 = $memory_0->{'hash'};
#line 282
$memory_4 = hash::get_value($memory_5, $memory_1);
#line 282
undef($memory_5);
#line 282
$memory_2 = $memory_4;
#line 282
undef($memory_4);
#line 283
goto label_35;
#line 283
label_35:
#line 283
undef($memory_3);
#line 284
undef($memory_1);
#line 284
$_[0] = $memory_0;return $memory_2;
#line 284
undef($memory_2);
#line 284
undef($memory_1);
#line 284
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub generator_c_priv::insert_const_to_modules_hash($$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];$memory_2 = $_[2];
#line 288
$memory_4 = $memory_0->{'module_consts'};
#line 288
$memory_3 = hash::get_value($memory_4, $memory_2);
#line 288
undef($memory_4);
#line 289
$memory_4 = "";
#line 289
hash::set_value($memory_3, $memory_1, $memory_4);
#line 289
undef($memory_4);
#line 290
$memory_4 = "module_consts";
#line 290
$memory_4 = c_rt_lib::get_ref_hash($memory_0, $memory_4);
#line 290
hash::set_value($memory_4, $memory_2, $memory_3);
#line 290
$memory_5 = "module_consts";
#line 290
c_rt_lib::set_ref_hash($memory_0, $memory_5, $memory_4);
#line 290
undef($memory_5);
#line 290
undef($memory_4);
#line 290
undef($memory_3);
#line 290
undef($memory_1);
#line 290
undef($memory_2);
#line 290
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub generator_c_priv::get_global_const($$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];$memory_2 = $_[2];
#line 294
$memory_3 = 1;
#line 294
$memory_3 = -$memory_3;
#line 295
$memory_5 = $memory_0->{'hash'};
#line 295
$memory_4 = hash::has_key($memory_5, $memory_1);
#line 295
undef($memory_5);
#line 295
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 295
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 295
if (c_rt_lib::check_true($memory_4)) {goto label_77;}
#line 296
$memory_6 = $memory_0->{'holes'};
#line 296
$memory_5 = array::len($memory_6);
#line 296
undef($memory_6);
#line 296
$memory_6 = 0;
#line 296
$memory_5 = c_rt_lib::to_nl($memory_5 > $memory_6);
#line 296
undef($memory_6);
#line 296
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 296
if (c_rt_lib::check_true($memory_5)) {goto label_48;}
#line 297
$memory_6 = $memory_0->{'holes'};
#line 297
$memory_8 = $memory_0->{'holes'};
#line 297
$memory_7 = array::len($memory_8);
#line 297
undef($memory_8);
#line 297
$memory_8 = 1;
#line 297
$memory_7 = $memory_7 - $memory_8;
#line 297
undef($memory_8);
#line 297
$memory_6 = $memory_6->[$memory_7];
#line 297
undef($memory_7);
#line 297
$memory_3 = $memory_6;
#line 297
undef($memory_6);
#line 298
$memory_6 = "holes";
#line 298
$memory_6 = c_rt_lib::get_ref_hash($memory_0, $memory_6);
#line 298
array::pop($memory_6);
#line 298
$memory_7 = "holes";
#line 298
c_rt_lib::set_ref_hash($memory_0, $memory_7, $memory_6);
#line 298
undef($memory_7);
#line 298
undef($memory_6);
#line 299
$memory_7 = 1;
#line 299
$memory_6 = {key => $memory_1,uses => $memory_7,};
#line 299
undef($memory_7);
#line 299
$memory_7 = "arr";
#line 299
$memory_7 = c_rt_lib::get_ref_hash($memory_0, $memory_7);
#line 299
$memory_8 = $memory_6;
#line 299
 if (c_rt_lib::get_arrcount($memory_7) > 1) {$memory_7 = [@{$memory_7}];}$memory_7->[$memory_3] = $memory_8;
#line 299
$memory_9 = "arr";
#line 299
c_rt_lib::set_ref_hash($memory_0, $memory_9, $memory_7);
#line 299
undef($memory_9);
#line 299
undef($memory_6);
#line 299
undef($memory_7);
#line 299
undef($memory_8);
#line 300
goto label_66;
#line 300
label_48:
#line 301
$memory_7 = $memory_0->{'arr'};
#line 301
$memory_6 = array::len($memory_7);
#line 301
undef($memory_7);
#line 301
$memory_3 = $memory_6;
#line 301
undef($memory_6);
#line 302
$memory_6 = "arr";
#line 302
$memory_6 = c_rt_lib::get_ref_hash($memory_0, $memory_6);
#line 302
$memory_8 = 1;
#line 302
$memory_7 = {key => $memory_1,uses => $memory_8,};
#line 302
undef($memory_8);
#line 302
array::push($memory_6, $memory_7);
#line 302
undef($memory_7);
#line 302
$memory_7 = "arr";
#line 302
c_rt_lib::set_ref_hash($memory_0, $memory_7, $memory_6);
#line 302
undef($memory_7);
#line 302
undef($memory_6);
#line 303
goto label_66;
#line 303
label_66:
#line 303
undef($memory_5);
#line 304
generator_c_priv::insert_const_to_modules_hash($memory_0, $memory_1, $memory_2);
#line 305
$memory_5 = "hash";
#line 305
$memory_5 = c_rt_lib::get_ref_hash($memory_0, $memory_5);
#line 305
hash::set_value($memory_5, $memory_1, $memory_3);
#line 305
$memory_6 = "hash";
#line 305
c_rt_lib::set_ref_hash($memory_0, $memory_6, $memory_5);
#line 305
undef($memory_6);
#line 305
undef($memory_5);
#line 306
goto label_113;
#line 306
label_77:
#line 307
$memory_6 = $memory_0->{'hash'};
#line 307
$memory_5 = hash::get_value($memory_6, $memory_1);
#line 307
undef($memory_6);
#line 307
$memory_3 = $memory_5;
#line 307
undef($memory_5);
#line 308
$memory_6 = $memory_0->{'module_consts'};
#line 308
$memory_5 = hash::get_value($memory_6, $memory_2);
#line 308
undef($memory_6);
#line 309
$memory_6 = hash::has_key($memory_5, $memory_1);
#line 309
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 309
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 309
if (c_rt_lib::check_true($memory_6)) {goto label_109;}
#line 310
$memory_7 = "arr";
#line 310
$memory_7 = c_rt_lib::get_ref_hash($memory_0, $memory_7);
#line 310
$memory_8 = c_rt_lib::get_ref_arr($memory_7, $memory_3);
#line 310
$memory_9 = "uses";
#line 310
$memory_9 = c_rt_lib::get_ref_hash($memory_8, $memory_9);
#line 310
$memory_10 = 1;
#line 310
$memory_9 = $memory_9 + $memory_10;
#line 310
$memory_11 = "uses";
#line 310
c_rt_lib::set_ref_hash($memory_8, $memory_11, $memory_9);
#line 310
c_rt_lib::set_ref_arr($memory_7, $memory_3, $memory_8);
#line 310
$memory_11 = "arr";
#line 310
c_rt_lib::set_ref_hash($memory_0, $memory_11, $memory_7);
#line 310
undef($memory_11);
#line 310
undef($memory_7);
#line 310
undef($memory_8);
#line 310
undef($memory_9);
#line 310
undef($memory_10);
#line 311
generator_c_priv::insert_const_to_modules_hash($memory_0, $memory_1, $memory_2);
#line 312
goto label_109;
#line 312
label_109:
#line 312
undef($memory_6);
#line 312
undef($memory_5);
#line 313
goto label_113;
#line 313
label_113:
#line 313
undef($memory_4);
#line 314
undef($memory_1);
#line 314
undef($memory_2);
#line 314
$_[0] = $memory_0;return $memory_3;
#line 314
undef($memory_3);
#line 314
undef($memory_1);
#line 314
undef($memory_2);
#line 314
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub generator_c::clear_module_from_state($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;my $memory_13;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];
#line 318
$memory_3 = $memory_0->{'global_const'};
#line 318
$memory_3 = $memory_3->{'module_consts'};
#line 318
$memory_2 = hash::has_key($memory_3, $memory_1);
#line 318
undef($memory_3);
#line 318
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 318
if (c_rt_lib::check_true($memory_2)) {goto label_99;}
#line 319
$memory_4 = $memory_0->{'global_const'};
#line 319
$memory_4 = $memory_4->{'module_consts'};
#line 319
$memory_3 = hash::get_value($memory_4, $memory_1);
#line 319
undef($memory_4);
#line 320
$memory_6 = c_rt_lib::init_iter($memory_3);
#line 320
label_11:
#line 320
$memory_4 = c_rt_lib::is_end_hash($memory_6);
#line 320
if (c_rt_lib::check_true($memory_4)) {goto label_81;}
#line 320
$memory_4 = c_rt_lib::get_key_iter($memory_6);
#line 320
$memory_5 = c_rt_lib::hash_get_value($memory_3, $memory_4);
#line 321
$memory_8 = $memory_0->{'global_const'};
#line 321
$memory_8 = $memory_8->{'hash'};
#line 321
$memory_7 = hash::get_value($memory_8, $memory_4);
#line 321
undef($memory_8);
#line 322
$memory_8 = "global_const";
#line 322
$memory_8 = c_rt_lib::get_ref_hash($memory_0, $memory_8);
#line 322
$memory_9 = "arr";
#line 322
$memory_9 = c_rt_lib::get_ref_hash($memory_8, $memory_9);
#line 322
$memory_10 = c_rt_lib::get_ref_arr($memory_9, $memory_7);
#line 322
$memory_11 = "uses";
#line 322
$memory_11 = c_rt_lib::get_ref_hash($memory_10, $memory_11);
#line 322
$memory_12 = 1;
#line 322
$memory_11 = $memory_11 - $memory_12;
#line 322
$memory_13 = "uses";
#line 322
c_rt_lib::set_ref_hash($memory_10, $memory_13, $memory_11);
#line 322
c_rt_lib::set_ref_arr($memory_9, $memory_7, $memory_10);
#line 322
$memory_13 = "arr";
#line 322
c_rt_lib::set_ref_hash($memory_8, $memory_13, $memory_9);
#line 322
$memory_13 = "global_const";
#line 322
c_rt_lib::set_ref_hash($memory_0, $memory_13, $memory_8);
#line 322
undef($memory_13);
#line 322
undef($memory_8);
#line 322
undef($memory_9);
#line 322
undef($memory_10);
#line 322
undef($memory_11);
#line 322
undef($memory_12);
#line 323
$memory_8 = $memory_0->{'global_const'};
#line 323
$memory_8 = $memory_8->{'arr'};
#line 323
$memory_8 = $memory_8->[$memory_7];
#line 323
$memory_8 = $memory_8->{'uses'};
#line 323
$memory_9 = 0;
#line 323
$memory_8 = c_rt_lib::to_nl($memory_8 == $memory_9);
#line 323
undef($memory_9);
#line 323
$memory_8 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 323
if (c_rt_lib::check_true($memory_8)) {goto label_76;}
#line 324
$memory_9 = "global_const";
#line 324
$memory_9 = c_rt_lib::get_ref_hash($memory_0, $memory_9);
#line 324
$memory_10 = "hash";
#line 324
$memory_10 = c_rt_lib::get_ref_hash($memory_9, $memory_10);
#line 324
hash::delete($memory_10, $memory_4);
#line 324
$memory_11 = "hash";
#line 324
c_rt_lib::set_ref_hash($memory_9, $memory_11, $memory_10);
#line 324
$memory_11 = "global_const";
#line 324
c_rt_lib::set_ref_hash($memory_0, $memory_11, $memory_9);
#line 324
undef($memory_11);
#line 324
undef($memory_9);
#line 324
undef($memory_10);
#line 325
$memory_9 = "global_const";
#line 325
$memory_9 = c_rt_lib::get_ref_hash($memory_0, $memory_9);
#line 325
$memory_10 = "holes";
#line 325
$memory_10 = c_rt_lib::get_ref_hash($memory_9, $memory_10);
#line 325
array::push($memory_10, $memory_7);
#line 325
$memory_11 = "holes";
#line 325
c_rt_lib::set_ref_hash($memory_9, $memory_11, $memory_10);
#line 325
$memory_11 = "global_const";
#line 325
c_rt_lib::set_ref_hash($memory_0, $memory_11, $memory_9);
#line 325
undef($memory_11);
#line 325
undef($memory_9);
#line 325
undef($memory_10);
#line 326
goto label_76;
#line 326
label_76:
#line 326
undef($memory_8);
#line 326
undef($memory_7);
#line 327
$memory_6 = c_rt_lib::next_iter($memory_6);
#line 327
goto label_11;
#line 327
label_81:
#line 327
undef($memory_4);
#line 327
undef($memory_5);
#line 327
undef($memory_6);
#line 328
$memory_4 = "global_const";
#line 328
$memory_4 = c_rt_lib::get_ref_hash($memory_0, $memory_4);
#line 328
$memory_5 = "module_consts";
#line 328
$memory_5 = c_rt_lib::get_ref_hash($memory_4, $memory_5);
#line 328
hash::delete($memory_5, $memory_1);
#line 328
$memory_6 = "module_consts";
#line 328
c_rt_lib::set_ref_hash($memory_4, $memory_6, $memory_5);
#line 328
$memory_6 = "global_const";
#line 328
c_rt_lib::set_ref_hash($memory_0, $memory_6, $memory_4);
#line 328
undef($memory_6);
#line 328
undef($memory_4);
#line 328
undef($memory_5);
#line 328
undef($memory_3);
#line 329
goto label_99;
#line 329
label_99:
#line 329
undef($memory_2);
#line 329
undef($memory_1);
#line 329
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub generator_c_priv::get_const_sim($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];
#line 333
$memory_3 = "global_const";
#line 333
$memory_3 = c_rt_lib::get_ref_hash($memory_0, $memory_3);
#line 333
$memory_4 = $memory_0->{'mod_name'};
#line 333
$memory_2 = generator_c_priv::get_global_const($memory_3, $memory_1, $memory_4);
#line 333
undef($memory_4);
#line 333
$memory_4 = "global_const";
#line 333
c_rt_lib::set_ref_hash($memory_0, $memory_4, $memory_3);
#line 333
undef($memory_4);
#line 333
undef($memory_3);
#line 334
$memory_3 = "___get_global_const(";
#line 334
$memory_3 = $memory_3 . $memory_2;
#line 334
$memory_4 = ")";
#line 334
$memory_3 = $memory_3 . $memory_4;
#line 334
undef($memory_4);
#line 334
undef($memory_1);
#line 334
undef($memory_2);
#line 334
$_[0] = $memory_0;return $memory_3;
#line 334
undef($memory_3);
#line 334
undef($memory_2);
#line 334
undef($memory_1);
#line 334
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub generator_c_priv::get_const_singleton($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];
#line 338
$memory_3 = "const";
#line 338
$memory_3 = c_rt_lib::get_ref_hash($memory_0, $memory_3);
#line 338
$memory_4 = "singleton";
#line 338
$memory_4 = c_rt_lib::get_ref_hash($memory_3, $memory_4);
#line 338
$memory_2 = generator_c_priv::get_const($memory_4, $memory_1);
#line 338
$memory_5 = "singleton";
#line 338
c_rt_lib::set_ref_hash($memory_3, $memory_5, $memory_4);
#line 338
$memory_5 = "const";
#line 338
c_rt_lib::set_ref_hash($memory_0, $memory_5, $memory_3);
#line 338
undef($memory_5);
#line 338
undef($memory_3);
#line 338
undef($memory_4);
#line 339
$memory_4 = "";
#line 339
$memory_5 = "__const__sing";
#line 339
$memory_6 = $memory_0->{'mod_name'};
#line 339
$memory_3 = generator_c_priv::get_fun_name($memory_4, $memory_5, $memory_6);
#line 339
undef($memory_6);
#line 339
undef($memory_5);
#line 339
undef($memory_4);
#line 339
$memory_4 = "(";
#line 339
$memory_3 = $memory_3 . $memory_4;
#line 339
undef($memory_4);
#line 339
$memory_3 = $memory_3 . $memory_2;
#line 339
$memory_4 = ")";
#line 339
$memory_3 = $memory_3 . $memory_4;
#line 339
undef($memory_4);
#line 339
undef($memory_1);
#line 339
undef($memory_2);
#line 339
$_[0] = $memory_0;return $memory_3;
#line 339
undef($memory_3);
#line 339
undef($memory_2);
#line 339
undef($memory_1);
#line 339
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub generator_c_priv::get_func_ptr_header($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;$memory_0 = $_[0];$memory_1 = $_[1];
#line 343
$memory_2 = generator_c_priv::arg_t();
#line 343
$memory_3 = generator_c_priv::get_function_name($memory_0, $memory_1);
#line 343
$memory_2 = $memory_2 . $memory_3;
#line 343
undef($memory_3);
#line 343
$memory_3 = "0ptr(int _num, ImmT *_tab)";
#line 343
$memory_2 = $memory_2 . $memory_3;
#line 343
undef($memory_3);
#line 343
undef($memory_0);
#line 343
undef($memory_1);
#line 343
return $memory_2;
#line 343
undef($memory_2);
#line 343
undef($memory_0);
#line 343
undef($memory_1);
#line 343
return;
}

sub generator_c_priv::print_mod($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;my $memory_13;my $memory_14;my $memory_15;my $memory_16;my $memory_17;my $memory_18;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];
#line 347
$memory_2 = generator_c_priv::get_cr();
#line 347
generator_c_priv::print_to_header($memory_0, $memory_2);
#line 347
undef($memory_2);
#line 348
$memory_2 = "#pragma once";
#line 348
$memory_3 = string::lf();
#line 348
$memory_2 = $memory_2 . $memory_3;
#line 348
undef($memory_3);
#line 348
generator_c_priv::print_to_header($memory_0, $memory_2);
#line 348
undef($memory_2);
#line 349
$memory_3 = "c_rt_lib";
#line 349
$memory_2 = generator_c_priv::get_include($memory_3);
#line 349
undef($memory_3);
#line 349
$memory_3 = string::lf();
#line 349
$memory_2 = $memory_2 . $memory_3;
#line 349
undef($memory_3);
#line 349
generator_c_priv::print_to_header($memory_0, $memory_2);
#line 349
undef($memory_2);
#line 350
$memory_2 = generator_c_priv::get_cr();
#line 350
generator_c_priv::print($memory_0, $memory_2);
#line 350
undef($memory_2);
#line 351
$memory_3 = "c_rt_lib";
#line 351
$memory_2 = generator_c_priv::get_include($memory_3);
#line 351
undef($memory_3);
#line 351
generator_c_priv::println($memory_0, $memory_2);
#line 351
undef($memory_2);
#line 352
$memory_3 = "c_global_const";
#line 352
$memory_2 = generator_c_priv::get_include($memory_3);
#line 352
undef($memory_3);
#line 352
generator_c_priv::println($memory_0, $memory_2);
#line 352
undef($memory_2);
#line 353
$memory_3 = $memory_0->{'mod_name'};
#line 353
$memory_2 = generator_c_priv::get_include($memory_3);
#line 353
undef($memory_3);
#line 353
generator_c_priv::println($memory_0, $memory_2);
#line 353
undef($memory_2);
#line 354
$memory_2 = $memory_1->{'imports'};
#line 354
$memory_4 = 0;
#line 354
$memory_5 = 1;
#line 354
$memory_6 = c_rt_lib::array_len($memory_2);
#line 354
label_39:
#line 354
$memory_7 = c_rt_lib::to_nl($memory_4 >= $memory_6);
#line 354
if (c_rt_lib::check_true($memory_7)) {goto label_48;}
#line 354
$memory_3 = $memory_2->[$memory_4];
#line 355
$memory_8 = generator_c_priv::get_include($memory_3);
#line 355
generator_c_priv::println($memory_0, $memory_8);
#line 355
undef($memory_8);
#line 356
$memory_4 = $memory_4 + $memory_5;
#line 356
goto label_39;
#line 356
label_48:
#line 356
undef($memory_2);
#line 356
undef($memory_3);
#line 356
undef($memory_4);
#line 356
undef($memory_5);
#line 356
undef($memory_6);
#line 356
undef($memory_7);
#line 357
$memory_2 = $memory_0->{'ret'};
#line 358
$memory_3 = "";
#line 358
$memory_4 = $memory_3;
#line 358
 if (c_rt_lib::get_hashcount($memory_0) > 1) {$memory_0 = {%{$memory_0}};}$memory_0->{'ret'} = $memory_4;
#line 358
undef($memory_3);
#line 358
undef($memory_4);
#line 359
$memory_3 = "#line 1 \"";
#line 359
$memory_4 = $memory_0->{'mod_name'};
#line 359
$memory_3 = $memory_3 . $memory_4;
#line 359
undef($memory_4);
#line 359
$memory_4 = ".nl\"";
#line 359
$memory_3 = $memory_3 . $memory_4;
#line 359
undef($memory_4);
#line 359
$memory_4 = string::lf();
#line 359
$memory_3 = $memory_3 . $memory_4;
#line 359
undef($memory_4);
#line 359
generator_c_priv::println($memory_0, $memory_3);
#line 359
undef($memory_3);
#line 360
$memory_3 = "static ";
#line 360
$memory_4 = generator_c_priv::arg_t();
#line 360
$memory_3 = $memory_3 . $memory_4;
#line 360
undef($memory_4);
#line 360
$memory_4 = "*__const__f = NULL;";
#line 360
$memory_3 = $memory_3 . $memory_4;
#line 360
undef($memory_4);
#line 360
generator_c_priv::println($memory_0, $memory_3);
#line 360
undef($memory_3);
#line 361
$memory_3 = "void ";
#line 361
$memory_5 = $memory_0->{'mod_name'};
#line 361
$memory_6 = "__const__init";
#line 361
$memory_7 = $memory_0->{'mod_name'};
#line 361
$memory_4 = generator_c_priv::get_fun_name($memory_5, $memory_6, $memory_7);
#line 361
undef($memory_7);
#line 361
undef($memory_6);
#line 361
undef($memory_5);
#line 361
$memory_3 = $memory_3 . $memory_4;
#line 361
undef($memory_4);
#line 361
$memory_4 = "();";
#line 361
$memory_3 = $memory_3 . $memory_4;
#line 361
undef($memory_4);
#line 362
$memory_4 = string::lf();
#line 362
$memory_3 = $memory_3 . $memory_4;
#line 362
undef($memory_4);
#line 362
generator_c_priv::print_to_header($memory_0, $memory_3);
#line 362
undef($memory_3);
#line 363
$memory_3 = generator_c_priv::arg_t();
#line 363
$memory_5 = "";
#line 363
$memory_6 = "__const__sim";
#line 363
$memory_7 = $memory_0->{'mod_name'};
#line 363
$memory_4 = generator_c_priv::get_fun_name($memory_5, $memory_6, $memory_7);
#line 363
undef($memory_7);
#line 363
undef($memory_6);
#line 363
undef($memory_5);
#line 363
$memory_3 = $memory_3 . $memory_4;
#line 363
undef($memory_4);
#line 363
$memory_4 = "(int __nr);";
#line 363
$memory_3 = $memory_3 . $memory_4;
#line 363
undef($memory_4);
#line 363
generator_c_priv::println($memory_0, $memory_3);
#line 363
undef($memory_3);
#line 364
$memory_3 = generator_c_priv::arg_t();
#line 364
$memory_5 = "";
#line 364
$memory_6 = "__const__sing";
#line 364
$memory_7 = $memory_0->{'mod_name'};
#line 364
$memory_4 = generator_c_priv::get_fun_name($memory_5, $memory_6, $memory_7);
#line 364
undef($memory_7);
#line 364
undef($memory_6);
#line 364
undef($memory_5);
#line 364
$memory_3 = $memory_3 . $memory_4;
#line 364
undef($memory_4);
#line 364
$memory_4 = "(int __nr);";
#line 364
$memory_3 = $memory_3 . $memory_4;
#line 364
undef($memory_4);
#line 364
$memory_4 = string::lf();
#line 364
$memory_3 = $memory_3 . $memory_4;
#line 364
undef($memory_4);
#line 364
generator_c_priv::println($memory_0, $memory_3);
#line 364
undef($memory_3);
#line 365
$memory_3 = $memory_1->{'functions'};
#line 365
$memory_5 = 0;
#line 365
$memory_6 = 1;
#line 365
$memory_7 = c_rt_lib::array_len($memory_3);
#line 365
label_137:
#line 365
$memory_8 = c_rt_lib::to_nl($memory_5 >= $memory_7);
#line 365
if (c_rt_lib::check_true($memory_8)) {goto label_184;}
#line 365
$memory_4 = $memory_3->[$memory_5];
#line 366
$memory_10 = $memory_0->{'mod_name'};
#line 366
$memory_9 = generator_c_priv::get_function_header($memory_4, $memory_10);
#line 366
undef($memory_10);
#line 367
$memory_10 = $memory_4->{'access'};
#line 367
$memory_11 = c_rt_lib::ov_is($memory_10, 'pub');
#line 367
if (c_rt_lib::check_true($memory_11)) {goto label_152;}
#line 370
$memory_11 = c_rt_lib::ov_is($memory_10, 'priv');
#line 370
if (c_rt_lib::check_true($memory_11)) {goto label_172;}
#line 370
$memory_11 = "NOMATCHALERT";
#line 370
$memory_11 = [$memory_11,$memory_10];
#line 370
die(dfile::ssave($memory_11));
#line 367
label_152:
#line 368
$memory_12 = ";";
#line 368
$memory_12 = $memory_9 . $memory_12;
#line 368
$memory_13 = string::lf();
#line 368
$memory_12 = $memory_12 . $memory_13;
#line 368
undef($memory_13);
#line 368
generator_c_priv::print_to_header($memory_0, $memory_12);
#line 368
undef($memory_12);
#line 369
$memory_13 = $memory_0->{'mod_name'};
#line 369
$memory_12 = generator_c_priv::get_func_ptr_header($memory_4, $memory_13);
#line 369
undef($memory_13);
#line 369
$memory_13 = ";";
#line 369
$memory_12 = $memory_12 . $memory_13;
#line 369
undef($memory_13);
#line 369
$memory_13 = string::lf();
#line 369
$memory_12 = $memory_12 . $memory_13;
#line 369
undef($memory_13);
#line 369
generator_c_priv::print_to_header($memory_0, $memory_12);
#line 369
undef($memory_12);
#line 370
goto label_178;
#line 370
label_172:
#line 371
$memory_12 = ";";
#line 371
$memory_12 = $memory_9 . $memory_12;
#line 371
generator_c_priv::println($memory_0, $memory_12);
#line 371
undef($memory_12);
#line 372
goto label_178;
#line 372
label_178:
#line 372
undef($memory_10);
#line 372
undef($memory_11);
#line 372
undef($memory_9);
#line 373
$memory_5 = $memory_5 + $memory_6;
#line 373
goto label_137;
#line 373
label_184:
#line 373
undef($memory_3);
#line 373
undef($memory_4);
#line 373
undef($memory_5);
#line 373
undef($memory_6);
#line 373
undef($memory_7);
#line 373
undef($memory_8);
#line 374
$memory_3 = string::lf();
#line 374
generator_c_priv::println($memory_0, $memory_3);
#line 374
undef($memory_3);
#line 375
$memory_3 = $memory_1->{'functions'};
#line 375
$memory_5 = 0;
#line 375
$memory_6 = 1;
#line 375
$memory_7 = c_rt_lib::array_len($memory_3);
#line 375
label_198:
#line 375
$memory_8 = c_rt_lib::to_nl($memory_5 >= $memory_7);
#line 375
if (c_rt_lib::check_true($memory_8)) {goto label_343;}
#line 375
$memory_4 = $memory_3->[$memory_5];
#line 376
$memory_9 = $memory_4->{'access'};
#line 376
$memory_9 = c_rt_lib::ov_is($memory_9, 'pub');
#line 376
$memory_9 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_9));
#line 376
if (c_rt_lib::check_true($memory_9)) {goto label_298;}
#line 377
$memory_11 = $memory_0->{'mod_name'};
#line 377
$memory_10 = generator_c_priv::get_function_name($memory_4, $memory_11);
#line 377
undef($memory_11);
#line 378
$memory_12 = $memory_0->{'mod_name'};
#line 378
$memory_11 = generator_c_priv::get_func_ptr_header($memory_4, $memory_12);
#line 378
undef($memory_12);
#line 378
$memory_12 = "{";
#line 378
$memory_11 = $memory_11 . $memory_12;
#line 378
undef($memory_12);
#line 378
generator_c_priv::println($memory_0, $memory_11);
#line 378
undef($memory_11);
#line 379
$memory_12 = $memory_4->{'args_type'};
#line 379
$memory_11 = array::len($memory_12);
#line 379
undef($memory_12);
#line 380
$memory_13 = "func_num_args";
#line 380
$memory_15 = "_num";
#line 380
$memory_16 = generator_c_priv::get_string($memory_10);
#line 380
$memory_14 = [$memory_15,$memory_11,$memory_16];
#line 380
undef($memory_15);
#line 380
undef($memory_16);
#line 380
$memory_12 = generator_c_priv::get_fun_lib($memory_13, $memory_14);
#line 380
undef($memory_14);
#line 380
undef($memory_13);
#line 380
$memory_13 = ";";
#line 380
$memory_12 = $memory_12 . $memory_13;
#line 380
undef($memory_13);
#line 380
generator_c_priv::println($memory_0, $memory_12);
#line 380
undef($memory_12);
#line 381
$memory_12 = "return ";
#line 381
$memory_12 = $memory_12 . $memory_10;
#line 381
$memory_13 = "(";
#line 381
$memory_12 = $memory_12 . $memory_13;
#line 381
undef($memory_13);
#line 381
generator_c_priv::print($memory_0, $memory_12);
#line 381
undef($memory_12);
#line 382
$memory_12 = 0;
#line 382
$memory_13 = 1;
#line 382
label_243:
#line 382
$memory_14 = c_rt_lib::to_nl($memory_12 >= $memory_11);
#line 382
if (c_rt_lib::check_true($memory_14)) {goto label_288;}
#line 383
$memory_15 = 0;
#line 383
$memory_15 = c_rt_lib::to_nl($memory_12 > $memory_15);
#line 383
$memory_15 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_15));
#line 383
if (c_rt_lib::check_true($memory_15)) {goto label_254;}
#line 383
$memory_16 = ", ";
#line 383
generator_c_priv::print($memory_0, $memory_16);
#line 383
undef($memory_16);
#line 383
goto label_254;
#line 383
label_254:
#line 383
undef($memory_15);
#line 384
$memory_15 = $memory_4->{'args_type'};
#line 384
$memory_15 = $memory_15->[$memory_12];
#line 384
$memory_16 = c_rt_lib::ov_is($memory_15, 'val');
#line 384
if (c_rt_lib::check_true($memory_16)) {goto label_265;}
#line 386
$memory_16 = c_rt_lib::ov_is($memory_15, 'ref');
#line 386
if (c_rt_lib::check_true($memory_16)) {goto label_274;}
#line 386
$memory_16 = "NOMATCHALERT";
#line 386
$memory_16 = [$memory_16,$memory_15];
#line 386
die(dfile::ssave($memory_16));
#line 384
label_265:
#line 385
$memory_17 = "_tab[";
#line 385
$memory_17 = $memory_17 . $memory_12;
#line 385
$memory_18 = "]";
#line 385
$memory_17 = $memory_17 . $memory_18;
#line 385
undef($memory_18);
#line 385
generator_c_priv::print($memory_0, $memory_17);
#line 385
undef($memory_17);
#line 386
goto label_283;
#line 386
label_274:
#line 387
$memory_17 = "&_tab[";
#line 387
$memory_17 = $memory_17 . $memory_12;
#line 387
$memory_18 = "]";
#line 387
$memory_17 = $memory_17 . $memory_18;
#line 387
undef($memory_18);
#line 387
generator_c_priv::print($memory_0, $memory_17);
#line 387
undef($memory_17);
#line 388
goto label_283;
#line 388
label_283:
#line 388
undef($memory_15);
#line 388
undef($memory_16);
#line 389
$memory_12 = $memory_12 + $memory_13;
#line 389
goto label_243;
#line 389
label_288:
#line 389
undef($memory_12);
#line 389
undef($memory_13);
#line 389
undef($memory_14);
#line 390
$memory_12 = ");}";
#line 390
generator_c_priv::println($memory_0, $memory_12);
#line 390
undef($memory_12);
#line 390
undef($memory_10);
#line 390
undef($memory_11);
#line 391
goto label_298;
#line 391
label_298:
#line 391
undef($memory_9);
#line 392
$memory_9 = generator_c_priv::is_singleton_use_function($memory_4);
#line 392
$memory_9 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_9));
#line 392
if (c_rt_lib::check_true($memory_9)) {goto label_331;}
#line 393
$memory_11 = $memory_0->{'mod_name'};
#line 393
$memory_10 = generator_c_priv::get_function_name($memory_4, $memory_11);
#line 393
undef($memory_11);
#line 394
$memory_11 = generator_c_priv::arg_t();
#line 394
$memory_11 = $memory_11 . $memory_10;
#line 394
$memory_12 = "(){";
#line 394
$memory_11 = $memory_11 . $memory_12;
#line 394
undef($memory_12);
#line 394
generator_c_priv::println($memory_0, $memory_11);
#line 394
undef($memory_11);
#line 395
$memory_11 = "return ";
#line 395
$memory_12 = generator_c_priv::get_const_singleton($memory_0, $memory_10);
#line 395
$memory_11 = $memory_11 . $memory_12;
#line 395
undef($memory_12);
#line 395
$memory_12 = ";}";
#line 395
$memory_11 = $memory_11 . $memory_12;
#line 395
undef($memory_12);
#line 395
generator_c_priv::println($memory_0, $memory_11);
#line 395
undef($memory_11);
#line 396
$memory_11 = generator_c_priv::arg_t();
#line 396
$memory_11 = $memory_11 . $memory_10;
#line 396
$memory_12 = "0cal()";
#line 396
$memory_11 = $memory_11 . $memory_12;
#line 396
undef($memory_12);
#line 396
generator_c_priv::print($memory_0, $memory_11);
#line 396
undef($memory_11);
#line 396
undef($memory_10);
#line 397
goto label_338;
#line 397
label_331:
#line 398
$memory_11 = $memory_0->{'mod_name'};
#line 398
$memory_10 = generator_c_priv::get_function_header($memory_4, $memory_11);
#line 398
undef($memory_11);
#line 398
generator_c_priv::print($memory_0, $memory_10);
#line 398
undef($memory_10);
#line 399
goto label_338;
#line 399
label_338:
#line 399
undef($memory_9);
#line 400
generator_c_priv::print_function_block($memory_0, $memory_4);
#line 401
$memory_5 = $memory_5 + $memory_6;
#line 401
goto label_198;
#line 401
label_343:
#line 401
undef($memory_3);
#line 401
undef($memory_4);
#line 401
undef($memory_5);
#line 401
undef($memory_6);
#line 401
undef($memory_7);
#line 401
undef($memory_8);
#line 402
generator_c_priv::print_init_const($memory_0);
#line 403
$memory_3 = $memory_0->{'additional_imports'};
#line 403
$memory_6 = c_rt_lib::init_iter($memory_3);
#line 403
label_353:
#line 403
$memory_4 = c_rt_lib::is_end_hash($memory_6);
#line 403
if (c_rt_lib::check_true($memory_4)) {goto label_366;}
#line 403
$memory_4 = c_rt_lib::get_key_iter($memory_6);
#line 403
$memory_5 = c_rt_lib::hash_get_value($memory_3, $memory_4);
#line 404
$memory_7 = generator_c_priv::get_include($memory_4);
#line 404
$memory_8 = string::lf();
#line 404
$memory_7 = $memory_7 . $memory_8;
#line 404
undef($memory_8);
#line 404
$memory_2 = $memory_2 . $memory_7;
#line 404
undef($memory_7);
#line 405
$memory_6 = c_rt_lib::next_iter($memory_6);
#line 405
goto label_353;
#line 405
label_366:
#line 405
undef($memory_3);
#line 405
undef($memory_4);
#line 405
undef($memory_5);
#line 405
undef($memory_6);
#line 406
$memory_3 = $memory_0->{'ret'};
#line 406
$memory_3 = $memory_2 . $memory_3;
#line 406
$memory_4 = $memory_3;
#line 406
 if (c_rt_lib::get_hashcount($memory_0) > 1) {$memory_0 = {%{$memory_0}};}$memory_0->{'ret'} = $memory_4;
#line 406
undef($memory_3);
#line 406
undef($memory_4);
#line 406
undef($memory_2);
#line 406
undef($memory_1);
#line 406
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub generator_c_priv::print_init_const($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;my $memory_13;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);
#line 410
$memory_1 = $memory_0->{'const'};
#line 410
$memory_1 = $memory_1->{'sim'};
#line 410
$memory_1 = $memory_1->{'arr'};
#line 411
$memory_2 = $memory_0->{'const'};
#line 411
$memory_2 = $memory_2->{'singleton'};
#line 411
$memory_2 = $memory_2->{'arr'};
#line 412
$memory_3 = array::len($memory_1);
#line 413
$memory_4 = array::len($memory_2);
#line 414
$memory_5 = $memory_0->{'const'};
#line 414
$memory_5 = $memory_5->{'dynamic_nr'};
#line 415
$memory_6 = $memory_3 + $memory_4;
#line 415
$memory_6 = $memory_6 + $memory_5;
#line 416
$memory_7 = "
static ";
#line 417
$memory_8 = generator_c_priv::arg_t();
#line 417
$memory_7 = $memory_7 . $memory_8;
#line 417
undef($memory_8);
#line 417
$memory_8 = "___const__[";
#line 417
$memory_7 = $memory_7 . $memory_8;
#line 417
undef($memory_8);
#line 417
$memory_8 = 1;
#line 417
$memory_8 = $memory_8 + $memory_6;
#line 417
$memory_7 = $memory_7 . $memory_8;
#line 417
undef($memory_8);
#line 417
$memory_8 = "];
static int ___const_init__ = 1;";
#line 417
$memory_7 = $memory_7 . $memory_8;
#line 417
undef($memory_8);
#line 417
generator_c_priv::println($memory_0, $memory_7);
#line 417
undef($memory_7);
#line 419
$memory_7 = "void ";
#line 419
$memory_9 = $memory_0->{'mod_name'};
#line 419
$memory_10 = "__const__init";
#line 419
$memory_11 = $memory_0->{'mod_name'};
#line 419
$memory_8 = generator_c_priv::get_fun_name($memory_9, $memory_10, $memory_11);
#line 419
undef($memory_11);
#line 419
undef($memory_10);
#line 419
undef($memory_9);
#line 419
$memory_7 = $memory_7 . $memory_8;
#line 419
undef($memory_8);
#line 419
$memory_8 = "(){
if(!___const_init__) nl_die();
___const_init__ = 0;
__const__f = &___const__[";
#line 419
$memory_7 = $memory_7 . $memory_8;
#line 419
undef($memory_8);
#line 422
$memory_8 = $memory_3 + $memory_4;
#line 422
$memory_7 = $memory_7 . $memory_8;
#line 422
undef($memory_8);
#line 422
$memory_8 = "];
";
#line 422
$memory_7 = $memory_7 . $memory_8;
#line 422
undef($memory_8);
#line 422
generator_c_priv::println($memory_0, $memory_7);
#line 422
undef($memory_7);
#line 424
$memory_7 = 0;
#line 424
$memory_8 = 1;
#line 424
label_51:
#line 424
$memory_9 = c_rt_lib::to_nl($memory_7 >= $memory_3);
#line 424
if (c_rt_lib::check_true($memory_9)) {goto label_71;}
#line 425
$memory_10 = "___const__[";
#line 425
$memory_10 = $memory_10 . $memory_7;
#line 425
$memory_11 = "] = ";
#line 425
$memory_10 = $memory_10 . $memory_11;
#line 425
undef($memory_11);
#line 425
$memory_12 = $memory_1->[$memory_7];
#line 425
$memory_11 = generator_c_priv::create_sim($memory_12);
#line 425
undef($memory_12);
#line 425
$memory_10 = $memory_10 . $memory_11;
#line 425
undef($memory_11);
#line 425
$memory_11 = ";";
#line 425
$memory_10 = $memory_10 . $memory_11;
#line 425
undef($memory_11);
#line 425
generator_c_priv::println($memory_0, $memory_10);
#line 425
undef($memory_10);
#line 426
$memory_7 = $memory_7 + $memory_8;
#line 426
goto label_51;
#line 426
label_71:
#line 426
undef($memory_7);
#line 426
undef($memory_8);
#line 426
undef($memory_9);
#line 427
$memory_7 = "
for(int i=";
#line 427
$memory_7 = $memory_7 . $memory_3;
#line 428
$memory_8 = ";i<";
#line 428
$memory_7 = $memory_7 . $memory_8;
#line 428
undef($memory_8);
#line 428
$memory_7 = $memory_7 . $memory_6;
#line 428
$memory_8 = ";++i) ___const__[i] = NULL;
";
#line 428
$memory_7 = $memory_7 . $memory_8;
#line 428
undef($memory_8);
#line 429
$memory_9 = "register_const";
#line 429
$memory_8 = generator_c_priv::get_lib_fun($memory_9);
#line 429
undef($memory_9);
#line 429
$memory_7 = $memory_7 . $memory_8;
#line 429
undef($memory_8);
#line 429
$memory_8 = "(___const__, ";
#line 429
$memory_7 = $memory_7 . $memory_8;
#line 429
undef($memory_8);
#line 429
$memory_7 = $memory_7 . $memory_6;
#line 429
$memory_8 = ");
}";
#line 429
$memory_7 = $memory_7 . $memory_8;
#line 429
undef($memory_8);
#line 429
generator_c_priv::println($memory_0, $memory_7);
#line 429
undef($memory_7);
#line 431
$memory_7 = generator_c_priv::arg_t();
#line 431
$memory_9 = "";
#line 431
$memory_10 = "__const__sim";
#line 431
$memory_11 = $memory_0->{'mod_name'};
#line 431
$memory_8 = generator_c_priv::get_fun_name($memory_9, $memory_10, $memory_11);
#line 431
undef($memory_11);
#line 431
undef($memory_10);
#line 431
undef($memory_9);
#line 431
$memory_7 = $memory_7 . $memory_8;
#line 431
undef($memory_8);
#line 431
$memory_8 = "(int __nr) {
";
#line 431
$memory_7 = $memory_7 . $memory_8;
#line 431
undef($memory_8);
#line 432
$memory_8 = generator_c_priv::arg_t();
#line 432
$memory_7 = $memory_7 . $memory_8;
#line 432
undef($memory_8);
#line 432
$memory_8 = "ret = NULL;
";
#line 432
$memory_7 = $memory_7 . $memory_8;
#line 432
undef($memory_8);
#line 433
$memory_9 = "copy";
#line 433
$memory_11 = "&ret";
#line 433
$memory_12 = "___const__[__nr]";
#line 433
$memory_10 = [$memory_11,$memory_12];
#line 433
undef($memory_11);
#line 433
undef($memory_12);
#line 433
$memory_8 = generator_c_priv::get_fun_lib($memory_9, $memory_10);
#line 433
undef($memory_10);
#line 433
undef($memory_9);
#line 433
$memory_7 = $memory_7 . $memory_8;
#line 433
undef($memory_8);
#line 433
$memory_8 = ";
return ret;
}";
#line 433
$memory_7 = $memory_7 . $memory_8;
#line 433
undef($memory_8);
#line 433
generator_c_priv::println($memory_0, $memory_7);
#line 433
undef($memory_7);
#line 436
$memory_7 = generator_c_priv::arg_t();
#line 436
$memory_9 = "";
#line 436
$memory_10 = "__const__sing";
#line 436
$memory_11 = $memory_0->{'mod_name'};
#line 436
$memory_8 = generator_c_priv::get_fun_name($memory_9, $memory_10, $memory_11);
#line 436
undef($memory_11);
#line 436
undef($memory_10);
#line 436
undef($memory_9);
#line 436
$memory_7 = $memory_7 . $memory_8;
#line 436
undef($memory_8);
#line 436
$memory_8 = "(int __nr) {
if(___const__[__nr+";
#line 436
$memory_7 = $memory_7 . $memory_8;
#line 436
undef($memory_8);
#line 436
$memory_7 = $memory_7 . $memory_3;
#line 437
$memory_8 = "]==NULL) {
switch(__nr){";
#line 437
$memory_7 = $memory_7 . $memory_8;
#line 437
undef($memory_8);
#line 437
generator_c_priv::println($memory_0, $memory_7);
#line 437
undef($memory_7);
#line 439
$memory_7 = array::len($memory_2);
#line 439
$memory_8 = 0;
#line 439
$memory_9 = 1;
#line 439
label_155:
#line 439
$memory_10 = c_rt_lib::to_nl($memory_8 >= $memory_7);
#line 439
if (c_rt_lib::check_true($memory_10)) {goto label_185;}
#line 440
$memory_11 = "case ";
#line 440
$memory_11 = $memory_11 . $memory_8;
#line 440
$memory_12 = ":";
#line 440
$memory_11 = $memory_11 . $memory_12;
#line 440
undef($memory_12);
#line 440
generator_c_priv::println($memory_0, $memory_11);
#line 440
undef($memory_11);
#line 441
$memory_11 = "	___const__[";
#line 441
$memory_12 = $memory_8 + $memory_3;
#line 441
$memory_11 = $memory_11 . $memory_12;
#line 441
undef($memory_12);
#line 441
$memory_12 = "] = ";
#line 441
$memory_11 = $memory_11 . $memory_12;
#line 441
undef($memory_12);
#line 441
$memory_12 = $memory_2->[$memory_8];
#line 441
$memory_11 = $memory_11 . $memory_12;
#line 441
undef($memory_12);
#line 441
$memory_12 = "0cal();";
#line 441
$memory_11 = $memory_11 . $memory_12;
#line 441
undef($memory_12);
#line 441
generator_c_priv::println($memory_0, $memory_11);
#line 441
undef($memory_11);
#line 442
$memory_11 = "	break;";
#line 442
generator_c_priv::println($memory_0, $memory_11);
#line 442
undef($memory_11);
#line 443
$memory_8 = $memory_8 + $memory_9;
#line 443
goto label_155;
#line 443
label_185:
#line 443
undef($memory_7);
#line 443
undef($memory_8);
#line 443
undef($memory_9);
#line 443
undef($memory_10);
#line 444
$memory_7 = "default:
	nl_die();
}}
";
#line 447
$memory_8 = generator_c_priv::arg_t();
#line 447
$memory_7 = $memory_7 . $memory_8;
#line 447
undef($memory_8);
#line 447
$memory_8 = "ret = NULL;
";
#line 447
$memory_7 = $memory_7 . $memory_8;
#line 447
undef($memory_8);
#line 448
$memory_9 = "copy";
#line 448
$memory_11 = "&ret";
#line 448
$memory_12 = "___const__[__nr+";
#line 448
$memory_12 = $memory_12 . $memory_3;
#line 448
$memory_13 = "]";
#line 448
$memory_12 = $memory_12 . $memory_13;
#line 448
undef($memory_13);
#line 448
$memory_10 = [$memory_11,$memory_12];
#line 448
undef($memory_11);
#line 448
undef($memory_12);
#line 448
$memory_8 = generator_c_priv::get_fun_lib($memory_9, $memory_10);
#line 448
undef($memory_10);
#line 448
undef($memory_9);
#line 448
$memory_7 = $memory_7 . $memory_8;
#line 448
undef($memory_8);
#line 448
$memory_8 = ";
return ret;
}";
#line 448
$memory_7 = $memory_7 . $memory_8;
#line 448
undef($memory_8);
#line 448
generator_c_priv::println($memory_0, $memory_7);
#line 448
undef($memory_7);
#line 448
undef($memory_1);
#line 448
undef($memory_2);
#line 448
undef($memory_3);
#line 448
undef($memory_4);
#line 448
undef($memory_5);
#line 448
undef($memory_6);
#line 448
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub generator_c_priv::print_function_block($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;my $memory_13;my $memory_14;my $memory_15;my $memory_16;my $memory_17;my $memory_18;my $memory_19;my $memory_20;my $memory_21;my $memory_22;my $memory_23;my $memory_24;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];
#line 454
$memory_2 = " {";
#line 454
generator_c_priv::println($memory_0, $memory_2);
#line 454
undef($memory_2);
#line 455
$memory_2 = $memory_1->{'args_type'};
#line 455
$memory_3 = $memory_2;
#line 455
 if (c_rt_lib::get_hashcount($memory_0) > 1) {$memory_0 = {%{$memory_0}};}$memory_0->{'fun_args'} = $memory_3;
#line 455
undef($memory_2);
#line 455
undef($memory_3);
#line 456
generator_c_priv::move_args_to_register($memory_0);
#line 457
$memory_3 = $memory_1->{'args_type'};
#line 457
$memory_2 = array::len($memory_3);
#line 457
undef($memory_3);
#line 457
label_12:
#line 457
$memory_3 = $memory_1->{'reg_size'};
#line 457
$memory_3 = c_rt_lib::to_nl($memory_2 < $memory_3);
#line 457
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 457
if (c_rt_lib::check_true($memory_3)) {goto label_30;}
#line 458
$memory_4 = generator_c_priv::arg_t();
#line 458
$memory_5 = generator_c_priv::get_reg($memory_0, $memory_2);
#line 458
$memory_4 = $memory_4 . $memory_5;
#line 458
undef($memory_5);
#line 458
$memory_5 = " = NULL;";
#line 458
$memory_4 = $memory_4 . $memory_5;
#line 458
undef($memory_5);
#line 458
generator_c_priv::println($memory_0, $memory_4);
#line 458
undef($memory_4);
#line 457
$memory_4 = 1;
#line 457
$memory_2 = $memory_2 + $memory_4;
#line 457
undef($memory_4);
#line 459
goto label_12;
#line 459
label_30:
#line 459
undef($memory_2);
#line 459
undef($memory_3);
#line 460
$memory_2 = $memory_1->{'commands'};
#line 460
$memory_4 = 0;
#line 460
$memory_5 = 1;
#line 460
$memory_6 = c_rt_lib::array_len($memory_2);
#line 460
label_37:
#line 460
$memory_7 = c_rt_lib::to_nl($memory_4 >= $memory_6);
#line 460
if (c_rt_lib::check_true($memory_7)) {goto label_201;}
#line 460
$memory_3 = $memory_2->[$memory_4];
#line 461
$memory_8 = $memory_3->{'annotation'};
#line 461
$memory_9 = c_rt_lib::ov_is($memory_8, 'none');
#line 461
if (c_rt_lib::check_true($memory_9)) {goto label_49;}
#line 463
$memory_9 = c_rt_lib::ov_is($memory_8, 'const');
#line 463
if (c_rt_lib::check_true($memory_9)) {goto label_52;}
#line 463
$memory_9 = "NOMATCHALERT";
#line 463
$memory_9 = [$memory_9,$memory_8];
#line 463
die(dfile::ssave($memory_9));
#line 461
label_49:
#line 462
generator_c_priv::print_cmd($memory_0, $memory_3);
#line 463
goto label_195;
#line 463
label_52:
#line 463
$memory_10 = c_rt_lib::ov_as($memory_8, 'const');
#line 464
$memory_11 = $memory_3->{'cmd'};
#line 464
$memory_11 = c_rt_lib::ov_is($memory_11, 'load_const');
#line 464
$memory_11 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_11));
#line 464
if (c_rt_lib::check_true($memory_11)) {goto label_77;}
#line 465
$memory_12 = $memory_3->{'cmd'};
#line 465
$memory_12 = c_rt_lib::ov_as($memory_12, 'load_const');
#line 465
$memory_12 = $memory_12->{'val'};
#line 466
$memory_13 = nl::is_sim($memory_12);
#line 466
$memory_13 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_13));
#line 466
if (c_rt_lib::check_true($memory_13)) {goto label_73;}
#line 467
generator_c_priv::print_cmd($memory_0, $memory_3);
#line 468
undef($memory_8);
#line 468
undef($memory_9);
#line 468
undef($memory_10);
#line 468
undef($memory_11);
#line 468
undef($memory_12);
#line 468
undef($memory_13);
#line 468
goto label_198;
#line 469
goto label_73;
#line 469
label_73:
#line 469
undef($memory_13);
#line 469
undef($memory_12);
#line 470
goto label_77;
#line 470
label_77:
#line 470
undef($memory_11);
#line 471
$memory_11 = array::len($memory_10);
#line 472
$memory_12 = 0;
#line 472
$memory_12 = c_rt_lib::to_nl($memory_11 == $memory_12);
#line 472
$memory_12 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_12));
#line 472
if (c_rt_lib::check_true($memory_12)) {goto label_92;}
#line 473
generator_c_priv::print_cmd($memory_0, $memory_3);
#line 474
undef($memory_8);
#line 474
undef($memory_9);
#line 474
undef($memory_10);
#line 474
undef($memory_11);
#line 474
undef($memory_12);
#line 474
goto label_198;
#line 475
goto label_190;
#line 475
label_92:
#line 476
$memory_13 = $memory_0->{'const'};
#line 476
$memory_13 = $memory_13->{'dynamic_nr'};
#line 477
$memory_14 = "if(__const__f[";
#line 477
$memory_14 = $memory_14 . $memory_13;
#line 477
$memory_15 = "] == NULL) {";
#line 477
$memory_14 = $memory_14 . $memory_15;
#line 477
undef($memory_15);
#line 477
generator_c_priv::println($memory_0, $memory_14);
#line 477
undef($memory_14);
#line 478
generator_c_priv::print_cmd($memory_0, $memory_3);
#line 479
$memory_15 = 0;
#line 479
$memory_16 = 1;
#line 479
$memory_17 = c_rt_lib::array_len($memory_10);
#line 479
label_106:
#line 479
$memory_18 = c_rt_lib::to_nl($memory_15 >= $memory_17);
#line 479
if (c_rt_lib::check_true($memory_18)) {goto label_133;}
#line 479
$memory_14 = $memory_10->[$memory_15];
#line 480
$memory_20 = "copy";
#line 480
$memory_22 = "&__const__f[";
#line 480
$memory_22 = $memory_22 . $memory_13;
#line 480
$memory_23 = "]";
#line 480
$memory_22 = $memory_22 . $memory_23;
#line 480
undef($memory_23);
#line 480
$memory_23 = generator_c_priv::get_reg($memory_0, $memory_14);
#line 480
$memory_21 = [$memory_22,$memory_23];
#line 480
undef($memory_22);
#line 480
undef($memory_23);
#line 480
$memory_19 = generator_c_priv::get_fun_lib($memory_20, $memory_21);
#line 480
undef($memory_21);
#line 480
undef($memory_20);
#line 480
$memory_20 = ";";
#line 480
$memory_19 = $memory_19 . $memory_20;
#line 480
undef($memory_20);
#line 480
generator_c_priv::println($memory_0, $memory_19);
#line 480
undef($memory_19);
#line 481
$memory_19 = 1;
#line 481
$memory_13 = $memory_13 + $memory_19;
#line 481
undef($memory_19);
#line 482
$memory_15 = $memory_15 + $memory_16;
#line 482
goto label_106;
#line 482
label_133:
#line 482
undef($memory_14);
#line 482
undef($memory_15);
#line 482
undef($memory_16);
#line 482
undef($memory_17);
#line 482
undef($memory_18);
#line 483
$memory_14 = "}";
#line 483
generator_c_priv::println($memory_0, $memory_14);
#line 483
undef($memory_14);
#line 484
$memory_13 = $memory_13 - $memory_11;
#line 485
$memory_15 = 0;
#line 485
$memory_16 = 1;
#line 485
$memory_17 = c_rt_lib::array_len($memory_10);
#line 485
label_146:
#line 485
$memory_18 = c_rt_lib::to_nl($memory_15 >= $memory_17);
#line 485
if (c_rt_lib::check_true($memory_18)) {goto label_173;}
#line 485
$memory_14 = $memory_10->[$memory_15];
#line 486
$memory_20 = "copy";
#line 486
$memory_22 = generator_c_priv::get_reg_ref($memory_0, $memory_14);
#line 486
$memory_23 = "__const__f[";
#line 486
$memory_23 = $memory_23 . $memory_13;
#line 486
$memory_24 = "]";
#line 486
$memory_23 = $memory_23 . $memory_24;
#line 486
undef($memory_24);
#line 486
$memory_21 = [$memory_22,$memory_23];
#line 486
undef($memory_22);
#line 486
undef($memory_23);
#line 486
$memory_19 = generator_c_priv::get_fun_lib($memory_20, $memory_21);
#line 486
undef($memory_21);
#line 486
undef($memory_20);
#line 487
$memory_20 = ";";
#line 487
$memory_19 = $memory_19 . $memory_20;
#line 487
undef($memory_20);
#line 487
generator_c_priv::println($memory_0, $memory_19);
#line 487
undef($memory_19);
#line 488
$memory_19 = 1;
#line 488
$memory_13 = $memory_13 + $memory_19;
#line 488
undef($memory_19);
#line 489
$memory_15 = $memory_15 + $memory_16;
#line 489
goto label_146;
#line 489
label_173:
#line 489
undef($memory_14);
#line 489
undef($memory_15);
#line 489
undef($memory_16);
#line 489
undef($memory_17);
#line 489
undef($memory_18);
#line 490
$memory_14 = "const";
#line 490
$memory_14 = c_rt_lib::get_ref_hash($memory_0, $memory_14);
#line 490
$memory_15 = $memory_13;
#line 490
 if (c_rt_lib::get_hashcount($memory_14) > 1) {$memory_14 = {%{$memory_14}};}$memory_14->{'dynamic_nr'} = $memory_15;
#line 490
$memory_16 = "const";
#line 490
c_rt_lib::set_ref_hash($memory_0, $memory_16, $memory_14);
#line 490
undef($memory_16);
#line 490
undef($memory_14);
#line 490
undef($memory_15);
#line 490
undef($memory_13);
#line 491
goto label_190;
#line 491
label_190:
#line 491
undef($memory_12);
#line 491
undef($memory_11);
#line 491
undef($memory_10);
#line 492
goto label_195;
#line 492
label_195:
#line 492
undef($memory_8);
#line 492
undef($memory_9);
#line 492
label_198:
#line 493
$memory_4 = $memory_4 + $memory_5;
#line 493
goto label_37;
#line 493
label_201:
#line 493
undef($memory_2);
#line 493
undef($memory_3);
#line 493
undef($memory_4);
#line 493
undef($memory_5);
#line 493
undef($memory_6);
#line 493
undef($memory_7);
#line 494
$memory_2 = "}";
#line 494
$memory_3 = string::lf();
#line 494
$memory_2 = $memory_2 . $memory_3;
#line 494
undef($memory_3);
#line 494
generator_c_priv::println($memory_0, $memory_2);
#line 494
undef($memory_2);
#line 494
undef($memory_1);
#line 494
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub generator_c_priv::is_singleton_use_function($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;my $memory_13;my $memory_14;$memory_0 = $_[0];
#line 498
$memory_2 = $memory_0->{'args_type'};
#line 498
$memory_1 = array::len($memory_2);
#line 498
undef($memory_2);
#line 498
$memory_2 = 0;
#line 498
$memory_1 = c_rt_lib::to_nl($memory_1 > $memory_2);
#line 498
undef($memory_2);
#line 498
$memory_1 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_1));
#line 498
if (c_rt_lib::check_true($memory_1)) {goto label_14;}
#line 498
$memory_2 = c_rt_lib::to_nl(0);
#line 498
undef($memory_0);
#line 498
undef($memory_1);
#line 498
return $memory_2;
#line 498
undef($memory_2);
#line 498
goto label_14;
#line 498
label_14:
#line 498
undef($memory_1);
#line 499
$memory_1 = $memory_0->{'annotation'};
#line 499
$memory_1 = c_rt_lib::ov_is($memory_1, 'math');
#line 500
$memory_2 = c_rt_lib::to_nl(0);
#line 502
$memory_4 = $memory_0->{'commands'};
#line 502
$memory_6 = 0;
#line 502
$memory_7 = 1;
#line 502
$memory_8 = c_rt_lib::array_len($memory_4);
#line 502
label_23:
#line 502
$memory_9 = c_rt_lib::to_nl($memory_6 >= $memory_8);
#line 502
if (c_rt_lib::check_true($memory_9)) {goto label_213;}
#line 502
$memory_5 = $memory_4->[$memory_6];
#line 503
$memory_10 = $memory_5->{'cmd'};
#line 504
$memory_11 = $memory_10;
#line 504
$memory_11 = c_rt_lib::ov_is($memory_11, 'call');
#line 504
$memory_11 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_11));
#line 504
if (c_rt_lib::check_true($memory_11)) {goto label_72;}
#line 505
$memory_12 = $memory_10;
#line 505
$memory_12 = c_rt_lib::ov_as($memory_12, 'call');
#line 506
$memory_13 = $memory_12->{'fun_name'};
#line 506
$memory_14 = "sigleton_do_not_use_without_approval";
#line 506
$memory_13 = c_rt_lib::to_nl($memory_13 eq $memory_14);
#line 506
undef($memory_14);
#line 506
$memory_13 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_13));
#line 506
$memory_13 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_13));
#line 506
if (c_rt_lib::check_true($memory_13)) {goto label_47;}
#line 506
undef($memory_10);
#line 506
undef($memory_11);
#line 506
undef($memory_12);
#line 506
undef($memory_13);
#line 506
goto label_210;
#line 506
goto label_47;
#line 506
label_47:
#line 506
undef($memory_13);
#line 507
$memory_13 = $memory_12->{'mod'};
#line 507
$memory_14 = "singleton";
#line 507
$memory_13 = c_rt_lib::to_nl($memory_13 eq $memory_14);
#line 507
undef($memory_14);
#line 507
$memory_13 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_13));
#line 507
$memory_13 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_13));
#line 507
if (c_rt_lib::check_true($memory_13)) {goto label_62;}
#line 507
undef($memory_10);
#line 507
undef($memory_11);
#line 507
undef($memory_12);
#line 507
undef($memory_13);
#line 507
goto label_210;
#line 507
goto label_62;
#line 507
label_62:
#line 507
undef($memory_13);
#line 508
$memory_13 = c_rt_lib::to_nl(1);
#line 508
$memory_2 = $memory_13;
#line 508
undef($memory_13);
#line 509
$memory_13 = $memory_12->{'dest'};
#line 509
$memory_3 = $memory_13;
#line 509
undef($memory_13);
#line 509
undef($memory_12);
#line 510
goto label_207;
#line 510
label_72:
#line 510
$memory_11 = $memory_10;
#line 510
$memory_11 = c_rt_lib::ov_is($memory_11, 'return');
#line 510
$memory_11 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_11));
#line 510
if (c_rt_lib::check_true($memory_11)) {goto label_171;}
#line 511
$memory_12 = $memory_10;
#line 511
$memory_12 = c_rt_lib::ov_as($memory_12, 'return');
#line 512
$memory_13 = $memory_12;
#line 512
$memory_13 = c_rt_lib::ov_is($memory_13, 'val');
#line 512
$memory_13 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_13));
#line 512
$memory_13 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_13));
#line 512
if (c_rt_lib::check_true($memory_13)) {goto label_102;}
#line 512
$memory_14 = c_rt_lib::to_nl(0);
#line 512
undef($memory_0);
#line 512
undef($memory_1);
#line 512
undef($memory_2);
#line 512
undef($memory_3);
#line 512
undef($memory_4);
#line 512
undef($memory_5);
#line 512
undef($memory_6);
#line 512
undef($memory_7);
#line 512
undef($memory_8);
#line 512
undef($memory_9);
#line 512
undef($memory_10);
#line 512
undef($memory_11);
#line 512
undef($memory_12);
#line 512
undef($memory_13);
#line 512
return $memory_14;
#line 512
undef($memory_14);
#line 512
goto label_102;
#line 512
label_102:
#line 512
undef($memory_13);
#line 513
$memory_13 = $memory_1;
#line 513
$memory_13 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_13));
#line 513
if (c_rt_lib::check_true($memory_13)) {goto label_125;}
#line 513
$memory_14 = c_rt_lib::to_nl(1);
#line 513
undef($memory_0);
#line 513
undef($memory_1);
#line 513
undef($memory_2);
#line 513
undef($memory_3);
#line 513
undef($memory_4);
#line 513
undef($memory_5);
#line 513
undef($memory_6);
#line 513
undef($memory_7);
#line 513
undef($memory_8);
#line 513
undef($memory_9);
#line 513
undef($memory_10);
#line 513
undef($memory_11);
#line 513
undef($memory_12);
#line 513
undef($memory_13);
#line 513
return $memory_14;
#line 513
undef($memory_14);
#line 513
goto label_125;
#line 513
label_125:
#line 513
undef($memory_13);
#line 514
$memory_13 = $memory_2;
#line 514
$memory_13 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_13));
#line 514
$memory_13 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_13));
#line 514
if (c_rt_lib::check_true($memory_13)) {goto label_149;}
#line 514
$memory_14 = c_rt_lib::to_nl(0);
#line 514
undef($memory_0);
#line 514
undef($memory_1);
#line 514
undef($memory_2);
#line 514
undef($memory_3);
#line 514
undef($memory_4);
#line 514
undef($memory_5);
#line 514
undef($memory_6);
#line 514
undef($memory_7);
#line 514
undef($memory_8);
#line 514
undef($memory_9);
#line 514
undef($memory_10);
#line 514
undef($memory_11);
#line 514
undef($memory_12);
#line 514
undef($memory_13);
#line 514
return $memory_14;
#line 514
undef($memory_14);
#line 514
goto label_149;
#line 514
label_149:
#line 514
undef($memory_13);
#line 515
$memory_13 = $memory_12;
#line 515
$memory_13 = c_rt_lib::ov_as($memory_13, 'val');
#line 515
$memory_13 = c_rt_lib::to_nl($memory_13 eq $memory_3);
#line 515
undef($memory_0);
#line 515
undef($memory_1);
#line 515
undef($memory_2);
#line 515
undef($memory_3);
#line 515
undef($memory_4);
#line 515
undef($memory_5);
#line 515
undef($memory_6);
#line 515
undef($memory_7);
#line 515
undef($memory_8);
#line 515
undef($memory_9);
#line 515
undef($memory_10);
#line 515
undef($memory_11);
#line 515
undef($memory_12);
#line 515
return $memory_13;
#line 515
undef($memory_13);
#line 515
undef($memory_12);
#line 516
goto label_207;
#line 516
label_171:
#line 516
$memory_11 = $memory_10;
#line 516
$memory_11 = c_rt_lib::ov_is($memory_11, 'prt_lbl');
#line 516
$memory_11 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_11));
#line 516
if (c_rt_lib::check_true($memory_11)) {goto label_177;}
#line 517
goto label_207;
#line 517
label_177:
#line 517
$memory_11 = $memory_10;
#line 517
$memory_11 = c_rt_lib::ov_is($memory_11, 'clear');
#line 517
$memory_11 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_11));
#line 517
if (c_rt_lib::check_true($memory_11)) {goto label_183;}
#line 518
goto label_207;
#line 518
label_183:
#line 519
$memory_12 = $memory_2;
#line 519
$memory_12 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_12));
#line 519
if (c_rt_lib::check_true($memory_12)) {goto label_204;}
#line 519
$memory_13 = c_rt_lib::to_nl(0);
#line 519
undef($memory_0);
#line 519
undef($memory_1);
#line 519
undef($memory_2);
#line 519
undef($memory_3);
#line 519
undef($memory_4);
#line 519
undef($memory_5);
#line 519
undef($memory_6);
#line 519
undef($memory_7);
#line 519
undef($memory_8);
#line 519
undef($memory_9);
#line 519
undef($memory_10);
#line 519
undef($memory_11);
#line 519
undef($memory_12);
#line 519
return $memory_13;
#line 519
undef($memory_13);
#line 519
goto label_204;
#line 519
label_204:
#line 519
undef($memory_12);
#line 520
goto label_207;
#line 520
label_207:
#line 520
undef($memory_11);
#line 520
undef($memory_10);
#line 520
label_210:
#line 521
$memory_6 = $memory_6 + $memory_7;
#line 521
goto label_23;
#line 521
label_213:
#line 521
undef($memory_4);
#line 521
undef($memory_5);
#line 521
undef($memory_6);
#line 521
undef($memory_7);
#line 521
undef($memory_8);
#line 521
undef($memory_9);
#line 522
$memory_4 = c_rt_lib::to_nl(0);
#line 522
undef($memory_0);
#line 522
undef($memory_1);
#line 522
undef($memory_2);
#line 522
undef($memory_3);
#line 522
return $memory_4;
#line 522
undef($memory_4);
#line 522
undef($memory_1);
#line 522
undef($memory_2);
#line 522
undef($memory_3);
#line 522
undef($memory_0);
#line 522
return;
}

sub generator_c_priv::move_args_to_register($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);
#line 526
$memory_2 = $memory_0->{'fun_args'};
#line 526
$memory_1 = array::len($memory_2);
#line 526
undef($memory_2);
#line 526
$memory_2 = 0;
#line 526
$memory_3 = 1;
#line 526
label_5:
#line 526
$memory_4 = c_rt_lib::to_nl($memory_2 >= $memory_1);
#line 526
if (c_rt_lib::check_true($memory_4)) {goto label_38;}
#line 527
$memory_5 = $memory_0->{'fun_args'};
#line 527
$memory_5 = $memory_5->[$memory_2];
#line 527
$memory_6 = c_rt_lib::ov_is($memory_5, 'val');
#line 527
if (c_rt_lib::check_true($memory_6)) {goto label_17;}
#line 530
$memory_6 = c_rt_lib::ov_is($memory_5, 'ref');
#line 530
if (c_rt_lib::check_true($memory_6)) {goto label_31;}
#line 530
$memory_6 = "NOMATCHALERT";
#line 530
$memory_6 = [$memory_6,$memory_5];
#line 530
die(dfile::ssave($memory_6));
#line 527
label_17:
#line 528
$memory_8 = "arg_val";
#line 528
$memory_10 = generator_c_priv::get_reg($memory_0, $memory_2);
#line 528
$memory_9 = [$memory_10];
#line 528
undef($memory_10);
#line 528
$memory_7 = generator_c_priv::get_fun_lib($memory_8, $memory_9);
#line 528
undef($memory_9);
#line 528
undef($memory_8);
#line 528
generator_c_priv::print($memory_0, $memory_7);
#line 528
undef($memory_7);
#line 529
$memory_7 = ";";
#line 529
generator_c_priv::println($memory_0, $memory_7);
#line 529
undef($memory_7);
#line 530
goto label_33;
#line 530
label_31:
#line 531
goto label_33;
#line 531
label_33:
#line 531
undef($memory_5);
#line 531
undef($memory_6);
#line 532
$memory_2 = $memory_2 + $memory_3;
#line 532
goto label_5;
#line 532
label_38:
#line 532
undef($memory_1);
#line 532
undef($memory_2);
#line 532
undef($memory_3);
#line 532
undef($memory_4);
#line 532
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub generator_c_priv::move_register_to_ref_args($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);
#line 536
$memory_2 = $memory_0->{'fun_args'};
#line 536
$memory_1 = array::len($memory_2);
#line 536
undef($memory_2);
#line 536
$memory_2 = 0;
#line 536
$memory_3 = 1;
#line 536
label_5:
#line 536
$memory_4 = c_rt_lib::to_nl($memory_2 >= $memory_1);
#line 536
if (c_rt_lib::check_true($memory_4)) {goto label_26;}
#line 537
$memory_5 = $memory_0->{'fun_args'};
#line 537
$memory_5 = $memory_5->[$memory_2];
#line 537
$memory_6 = c_rt_lib::ov_is($memory_5, 'val');
#line 537
if (c_rt_lib::check_true($memory_6)) {goto label_17;}
#line 538
$memory_6 = c_rt_lib::ov_is($memory_5, 'ref');
#line 538
if (c_rt_lib::check_true($memory_6)) {goto label_19;}
#line 538
$memory_6 = "NOMATCHALERT";
#line 538
$memory_6 = [$memory_6,$memory_5];
#line 538
die(dfile::ssave($memory_6));
#line 537
label_17:
#line 538
goto label_21;
#line 538
label_19:
#line 539
goto label_21;
#line 539
label_21:
#line 539
undef($memory_5);
#line 539
undef($memory_6);
#line 540
$memory_2 = $memory_2 + $memory_3;
#line 540
goto label_5;
#line 540
label_26:
#line 540
undef($memory_1);
#line 540
undef($memory_2);
#line 540
undef($memory_3);
#line 540
undef($memory_4);
#line 540
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub generator_c_priv::get_fun_lib($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;$memory_0 = $_[0];$memory_1 = $_[1];
#line 544
$memory_2 = generator_c_priv::get_lib_fun($memory_0);
#line 544
$memory_3 = "(";
#line 544
$memory_2 = $memory_2 . $memory_3;
#line 544
undef($memory_3);
#line 545
$memory_3 = 0;
#line 546
$memory_5 = 0;
#line 546
$memory_6 = 1;
#line 546
$memory_7 = c_rt_lib::array_len($memory_1);
#line 546
label_8:
#line 546
$memory_8 = c_rt_lib::to_nl($memory_5 >= $memory_7);
#line 546
if (c_rt_lib::check_true($memory_8)) {goto label_29;}
#line 546
$memory_4 = $memory_1->[$memory_5];
#line 547
$memory_9 = 0;
#line 547
$memory_9 = c_rt_lib::to_nl($memory_9 == $memory_3);
#line 547
$memory_9 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_9));
#line 547
$memory_9 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_9));
#line 547
if (c_rt_lib::check_true($memory_9)) {goto label_21;}
#line 547
$memory_10 = ", ";
#line 547
$memory_2 = $memory_2 . $memory_10;
#line 547
undef($memory_10);
#line 547
goto label_21;
#line 547
label_21:
#line 547
undef($memory_9);
#line 548
$memory_2 = $memory_2 . $memory_4;
#line 549
$memory_9 = 1;
#line 549
$memory_3 = $memory_3 + $memory_9;
#line 549
undef($memory_9);
#line 550
$memory_5 = $memory_5 + $memory_6;
#line 550
goto label_8;
#line 550
label_29:
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
#line 551
$memory_4 = ")";
#line 551
$memory_4 = $memory_2 . $memory_4;
#line 551
undef($memory_0);
#line 551
undef($memory_1);
#line 551
undef($memory_2);
#line 551
undef($memory_3);
#line 551
return $memory_4;
#line 551
undef($memory_4);
#line 551
undef($memory_2);
#line 551
undef($memory_3);
#line 551
undef($memory_0);
#line 551
undef($memory_1);
#line 551
return;
}

sub generator_c_priv::get_module_name($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;$memory_0 = $_[0];
#line 555
$memory_2 = 0;
#line 555
$memory_3 = "00";
#line 555
$memory_1 = string::replace($memory_0, $memory_2, $memory_3);
#line 555
undef($memory_3);
#line 555
undef($memory_2);
#line 555
undef($memory_0);
#line 555
return $memory_1;
#line 555
undef($memory_1);
#line 555
undef($memory_0);
#line 555
return;
}

sub generator_c_priv::get_fun_name($$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;$memory_0 = $_[0];$memory_1 = $_[1];$memory_2 = $_[2];
#line 559
$memory_3 = "";
#line 559
$memory_3 = c_rt_lib::to_nl($memory_0 eq $memory_3);
#line 559
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 559
if (c_rt_lib::check_true($memory_3)) {goto label_9;}
#line 559
$memory_4 = "_priv";
#line 559
$memory_4 = $memory_2 . $memory_4;
#line 559
$memory_0 = $memory_4;
#line 559
undef($memory_4);
#line 559
goto label_9;
#line 559
label_9:
#line 559
undef($memory_3);
#line 560
$memory_3 = generator_c_priv::get_module_name($memory_0);
#line 560
$memory_4 = 0;
#line 560
$memory_3 = $memory_3 . $memory_4;
#line 560
undef($memory_4);
#line 560
$memory_5 = 0;
#line 560
$memory_6 = "00";
#line 560
$memory_4 = string::replace($memory_1, $memory_5, $memory_6);
#line 560
undef($memory_6);
#line 560
undef($memory_5);
#line 560
$memory_3 = $memory_3 . $memory_4;
#line 560
undef($memory_4);
#line 560
undef($memory_0);
#line 560
undef($memory_1);
#line 560
undef($memory_2);
#line 560
return $memory_3;
#line 560
undef($memory_3);
#line 560
undef($memory_0);
#line 560
undef($memory_1);
#line 560
undef($memory_2);
#line 560
return;
}

sub generator_c_priv::get_lib_fun($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;$memory_0 = $_[0];
#line 564
$memory_2 = "c_rt_lib";
#line 564
$memory_3 = "";
#line 564
$memory_1 = generator_c_priv::get_fun_name($memory_2, $memory_0, $memory_3);
#line 564
undef($memory_3);
#line 564
undef($memory_2);
#line 564
undef($memory_0);
#line 564
return $memory_1;
#line 564
undef($memory_1);
#line 564
undef($memory_0);
#line 564
return;
}

sub generator_c_priv::generate_imm($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];
#line 568
$memory_2 = nl::is_hash($memory_1);
#line 568
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 568
if (c_rt_lib::check_true($memory_2)) {goto label_40;}
#line 569
$memory_4 = "hash_mk_dec";
#line 569
$memory_3 = generator_c_priv::get_lib_fun($memory_4);
#line 569
undef($memory_4);
#line 569
$memory_4 = "(";
#line 569
$memory_3 = $memory_3 . $memory_4;
#line 569
undef($memory_4);
#line 569
$memory_4 = hash::size($memory_1);
#line 569
$memory_3 = $memory_3 . $memory_4;
#line 569
undef($memory_4);
#line 569
generator_c_priv::print($memory_0, $memory_3);
#line 569
undef($memory_3);
#line 570
$memory_5 = c_rt_lib::init_iter($memory_1);
#line 570
label_15:
#line 570
$memory_3 = c_rt_lib::is_end_hash($memory_5);
#line 570
if (c_rt_lib::check_true($memory_3)) {goto label_32;}
#line 570
$memory_3 = c_rt_lib::get_key_iter($memory_5);
#line 570
$memory_4 = c_rt_lib::hash_get_value($memory_1, $memory_3);
#line 571
$memory_6 = ", ";
#line 571
generator_c_priv::print($memory_0, $memory_6);
#line 571
undef($memory_6);
#line 572
$memory_6 = generator_c_priv::get_const_sim($memory_0, $memory_3);
#line 572
generator_c_priv::print($memory_0, $memory_6);
#line 572
undef($memory_6);
#line 573
$memory_6 = ", ";
#line 573
generator_c_priv::print($memory_0, $memory_6);
#line 573
undef($memory_6);
#line 574
generator_c_priv::generate_imm($memory_0, $memory_4);
#line 575
$memory_5 = c_rt_lib::next_iter($memory_5);
#line 575
goto label_15;
#line 575
label_32:
#line 575
undef($memory_3);
#line 575
undef($memory_4);
#line 575
undef($memory_5);
#line 576
$memory_3 = ")";
#line 576
generator_c_priv::print($memory_0, $memory_3);
#line 576
undef($memory_3);
#line 577
goto label_215;
#line 577
label_40:
#line 577
$memory_2 = nl::is_array($memory_1);
#line 577
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 577
if (c_rt_lib::check_true($memory_2)) {goto label_78;}
#line 578
$memory_4 = "array_mk_dec";
#line 578
$memory_3 = generator_c_priv::get_lib_fun($memory_4);
#line 578
undef($memory_4);
#line 578
$memory_4 = "(";
#line 578
$memory_3 = $memory_3 . $memory_4;
#line 578
undef($memory_4);
#line 578
$memory_4 = array::len($memory_1);
#line 578
$memory_3 = $memory_3 . $memory_4;
#line 578
undef($memory_4);
#line 578
generator_c_priv::print($memory_0, $memory_3);
#line 578
undef($memory_3);
#line 579
$memory_4 = 0;
#line 579
$memory_5 = 1;
#line 579
$memory_6 = c_rt_lib::array_len($memory_1);
#line 579
label_58:
#line 579
$memory_7 = c_rt_lib::to_nl($memory_4 >= $memory_6);
#line 579
if (c_rt_lib::check_true($memory_7)) {goto label_68;}
#line 579
$memory_3 = $memory_1->[$memory_4];
#line 580
$memory_8 = ", ";
#line 580
generator_c_priv::print($memory_0, $memory_8);
#line 580
undef($memory_8);
#line 581
generator_c_priv::generate_imm($memory_0, $memory_3);
#line 582
$memory_4 = $memory_4 + $memory_5;
#line 582
goto label_58;
#line 582
label_68:
#line 582
undef($memory_3);
#line 582
undef($memory_4);
#line 582
undef($memory_5);
#line 582
undef($memory_6);
#line 582
undef($memory_7);
#line 583
$memory_3 = ")";
#line 583
generator_c_priv::print($memory_0, $memory_3);
#line 583
undef($memory_3);
#line 584
goto label_215;
#line 584
label_78:
#line 584
$memory_2 = nl::is_variant($memory_1);
#line 584
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 584
if (c_rt_lib::check_true($memory_2)) {goto label_198;}
#line 586
$memory_5 = ptd::sim();
#line 586
$memory_6 = ov::get_element($memory_1);
#line 586
$memory_4 = ptd::ensure($memory_5, $memory_6);
#line 586
undef($memory_6);
#line 586
undef($memory_5);
#line 586
$memory_3 = generator_c_priv::get_const_sim($memory_0, $memory_4);
#line 586
undef($memory_4);
#line 587
$memory_4 = ov::has_value($memory_1);
#line 587
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 587
if (c_rt_lib::check_true($memory_4)) {goto label_180;}
#line 588
$memory_6 = "ov_mk_arg_dec";
#line 588
$memory_5 = generator_c_priv::get_lib_fun($memory_6);
#line 588
undef($memory_6);
#line 588
$memory_6 = "(";
#line 588
$memory_5 = $memory_5 . $memory_6;
#line 588
undef($memory_6);
#line 588
$memory_5 = $memory_5 . $memory_3;
#line 588
$memory_6 = ", ";
#line 588
$memory_5 = $memory_5 . $memory_6;
#line 588
undef($memory_6);
#line 588
generator_c_priv::print($memory_0, $memory_5);
#line 588
undef($memory_5);
#line 590
$memory_5 = ov::get_value($memory_1);
#line 591
$memory_6 = $memory_1;
#line 591
$memory_6 = c_rt_lib::ov_is($memory_6, 'ref');
#line 591
$memory_10 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 591
if (c_rt_lib::check_true($memory_10)) {goto label_110;}
#line 591
$memory_6 = nl::is_hash($memory_5);
#line 591
label_110:
#line 591
undef($memory_10);
#line 591
$memory_9 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 591
if (c_rt_lib::check_true($memory_9)) {goto label_118;}
#line 591
$memory_6 = hash::size($memory_5);
#line 591
$memory_10 = 2;
#line 591
$memory_6 = c_rt_lib::to_nl($memory_6 == $memory_10);
#line 591
undef($memory_10);
#line 591
label_118:
#line 591
undef($memory_9);
#line 591
$memory_8 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 591
if (c_rt_lib::check_true($memory_8)) {goto label_125;}
#line 591
$memory_9 = "name";
#line 591
$memory_6 = hash::has_key($memory_5, $memory_9);
#line 591
undef($memory_9);
#line 591
label_125:
#line 591
undef($memory_8);
#line 591
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 591
if (c_rt_lib::check_true($memory_7)) {goto label_132;}
#line 591
$memory_8 = "module";
#line 591
$memory_6 = hash::has_key($memory_5, $memory_8);
#line 591
undef($memory_8);
#line 591
label_132:
#line 591
undef($memory_7);
#line 591
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 591
if (c_rt_lib::check_true($memory_6)) {goto label_170;}
#line 592
$memory_9 = $memory_5->{'name'};
#line 592
$memory_7 = nl::is_sim($memory_9);
#line 592
undef($memory_9);
#line 592
$memory_8 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 592
if (c_rt_lib::check_true($memory_8)) {goto label_144;}
#line 592
$memory_9 = $memory_5->{'module'};
#line 592
$memory_7 = nl::is_sim($memory_9);
#line 592
undef($memory_9);
#line 592
label_144:
#line 592
undef($memory_8);
#line 592
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 592
if (c_rt_lib::check_true($memory_7)) {goto label_164;}
#line 593
$memory_10 = ptd::sim();
#line 593
$memory_11 = $memory_5->{'module'};
#line 593
$memory_9 = ptd::ensure($memory_10, $memory_11);
#line 593
undef($memory_11);
#line 593
undef($memory_10);
#line 593
$memory_11 = ptd::sim();
#line 593
$memory_12 = $memory_5->{'name'};
#line 593
$memory_10 = ptd::ensure($memory_11, $memory_12);
#line 593
undef($memory_12);
#line 593
undef($memory_11);
#line 593
$memory_8 = generator_c_priv::get_func_pointer($memory_0, $memory_9, $memory_10);
#line 593
undef($memory_10);
#line 593
undef($memory_9);
#line 593
generator_c_priv::print($memory_0, $memory_8);
#line 593
undef($memory_8);
#line 594
goto label_167;
#line 594
label_164:
#line 595
generator_c_priv::generate_imm($memory_0, $memory_5);
#line 596
goto label_167;
#line 596
label_167:
#line 596
undef($memory_7);
#line 597
goto label_173;
#line 597
label_170:
#line 598
generator_c_priv::generate_imm($memory_0, $memory_5);
#line 599
goto label_173;
#line 599
label_173:
#line 599
undef($memory_6);
#line 601
$memory_6 = ")";
#line 601
generator_c_priv::print($memory_0, $memory_6);
#line 601
undef($memory_6);
#line 601
undef($memory_5);
#line 602
goto label_194;
#line 602
label_180:
#line 603
$memory_6 = "ov_mk_none";
#line 603
$memory_5 = generator_c_priv::get_lib_fun($memory_6);
#line 603
undef($memory_6);
#line 603
$memory_6 = "(";
#line 603
$memory_5 = $memory_5 . $memory_6;
#line 603
undef($memory_6);
#line 603
$memory_5 = $memory_5 . $memory_3;
#line 603
$memory_6 = ")";
#line 603
$memory_5 = $memory_5 . $memory_6;
#line 603
undef($memory_6);
#line 603
generator_c_priv::print($memory_0, $memory_5);
#line 603
undef($memory_5);
#line 604
goto label_194;
#line 604
label_194:
#line 604
undef($memory_4);
#line 604
undef($memory_3);
#line 605
goto label_215;
#line 605
label_198:
#line 605
$memory_2 = nl::is_sim($memory_1);
#line 605
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 605
if (c_rt_lib::check_true($memory_2)) {goto label_210;}
#line 606
$memory_5 = ptd::sim();
#line 606
$memory_4 = ptd::ensure($memory_5, $memory_1);
#line 606
undef($memory_5);
#line 606
$memory_3 = generator_c_priv::get_const_sim($memory_0, $memory_4);
#line 606
undef($memory_4);
#line 606
generator_c_priv::print($memory_0, $memory_3);
#line 606
undef($memory_3);
#line 607
goto label_215;
#line 607
label_210:
#line 608
$memory_3 = [];
#line 608
die(dfile::ssave($memory_3));
#line 608
undef($memory_3);
#line 609
goto label_215;
#line 609
label_215:
#line 609
undef($memory_2);
#line 609
undef($memory_1);
#line 609
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub generator_c_priv::get_func_pointer($$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];$memory_2 = $_[2];
#line 614
$memory_3 = c_rt_lib::to_nl(1);
#line 614
$memory_4 = "additional_imports";
#line 614
$memory_4 = c_rt_lib::get_ref_hash($memory_0, $memory_4);
#line 614
$memory_5 = $memory_3;
#line 614
c_rt_lib::hash_set_value($memory_4, $memory_1, $memory_5);
#line 614
$memory_6 = "additional_imports";
#line 614
c_rt_lib::set_ref_hash($memory_0, $memory_6, $memory_4);
#line 614
undef($memory_6);
#line 614
undef($memory_3);
#line 614
undef($memory_4);
#line 614
undef($memory_5);
#line 615
$memory_4 = "func_new";
#line 616
$memory_7 = $memory_0->{'mod_name'};
#line 616
$memory_6 = generator_c_priv::get_fun_name($memory_1, $memory_2, $memory_7);
#line 616
undef($memory_7);
#line 616
$memory_7 = "0ptr";
#line 616
$memory_6 = $memory_6 . $memory_7;
#line 616
undef($memory_7);
#line 617
$memory_7 = generator_c_priv::get_const_sim($memory_0, $memory_1);
#line 618
$memory_8 = generator_c_priv::get_const_sim($memory_0, $memory_2);
#line 618
$memory_5 = [$memory_6,$memory_7,$memory_8];
#line 618
undef($memory_6);
#line 618
undef($memory_7);
#line 618
undef($memory_8);
#line 618
$memory_3 = generator_c_priv::get_fun_lib($memory_4, $memory_5);
#line 618
undef($memory_5);
#line 618
undef($memory_4);
#line 618
undef($memory_1);
#line 618
undef($memory_2);
#line 618
$_[0] = $memory_0;return $memory_3;
#line 618
undef($memory_3);
#line 618
undef($memory_1);
#line 618
undef($memory_2);
#line 618
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub generator_c_priv::print_cmd($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;my $memory_13;my $memory_14;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];
#line 623
$memory_2 = "#line ";
#line 623
$memory_3 = $memory_1->{'debug'};
#line 623
$memory_3 = $memory_3->{'nast_debug'};
#line 623
$memory_3 = $memory_3->{'begin'};
#line 623
$memory_3 = $memory_3->{'line'};
#line 623
$memory_2 = $memory_2 . $memory_3;
#line 623
undef($memory_3);
#line 623
$memory_3 = string::lf();
#line 623
$memory_2 = $memory_2 . $memory_3;
#line 623
undef($memory_3);
#line 623
generator_c_priv::print($memory_0, $memory_2);
#line 623
undef($memory_2);
#line 624
$memory_2 = $memory_1->{'cmd'};
#line 624
$memory_3 = c_rt_lib::ov_is($memory_2, 'arr_decl');
#line 624
if (c_rt_lib::check_true($memory_3)) {goto label_58;}
#line 629
$memory_3 = c_rt_lib::ov_is($memory_2, 'hash_decl');
#line 629
if (c_rt_lib::check_true($memory_3)) {goto label_97;}
#line 637
$memory_3 = c_rt_lib::ov_is($memory_2, 'func');
#line 637
if (c_rt_lib::check_true($memory_3)) {goto label_143;}
#line 640
$memory_3 = c_rt_lib::ov_is($memory_2, 'call');
#line 640
if (c_rt_lib::check_true($memory_3)) {goto label_158;}
#line 642
$memory_3 = c_rt_lib::ov_is($memory_2, 'una_op');
#line 642
if (c_rt_lib::check_true($memory_3)) {goto label_163;}
#line 646
$memory_3 = c_rt_lib::ov_is($memory_2, 'bin_op');
#line 646
if (c_rt_lib::check_true($memory_3)) {goto label_186;}
#line 653
$memory_3 = c_rt_lib::ov_is($memory_2, 'ov_is');
#line 653
if (c_rt_lib::check_true($memory_3)) {goto label_238;}
#line 656
$memory_3 = c_rt_lib::ov_is($memory_2, 'ov_as');
#line 656
if (c_rt_lib::check_true($memory_3)) {goto label_261;}
#line 659
$memory_3 = c_rt_lib::ov_is($memory_2, 'return');
#line 659
if (c_rt_lib::check_true($memory_3)) {goto label_284;}
#line 667
$memory_3 = c_rt_lib::ov_is($memory_2, 'die');
#line 667
if (c_rt_lib::check_true($memory_3)) {goto label_313;}
#line 669
$memory_3 = c_rt_lib::ov_is($memory_2, 'move');
#line 669
if (c_rt_lib::check_true($memory_3)) {goto label_326;}
#line 673
$memory_3 = c_rt_lib::ov_is($memory_2, 'load_const');
#line 673
if (c_rt_lib::check_true($memory_3)) {goto label_360;}
#line 678
$memory_3 = c_rt_lib::ov_is($memory_2, 'get_frm_idx');
#line 678
if (c_rt_lib::check_true($memory_3)) {goto label_401;}
#line 681
$memory_3 = c_rt_lib::ov_is($memory_2, 'set_at_idx');
#line 681
if (c_rt_lib::check_true($memory_3)) {goto label_424;}
#line 687
$memory_3 = c_rt_lib::ov_is($memory_2, 'get_val');
#line 687
if (c_rt_lib::check_true($memory_3)) {goto label_447;}
#line 690
$memory_3 = c_rt_lib::ov_is($memory_2, 'set_val');
#line 690
if (c_rt_lib::check_true($memory_3)) {goto label_470;}
#line 696
$memory_3 = c_rt_lib::ov_is($memory_2, 'ov_mk');
#line 696
if (c_rt_lib::check_true($memory_3)) {goto label_493;}
#line 710
$memory_3 = c_rt_lib::ov_is($memory_2, 'prt_lbl');
#line 710
if (c_rt_lib::check_true($memory_3)) {goto label_589;}
#line 713
$memory_3 = c_rt_lib::ov_is($memory_2, 'if_goto');
#line 713
if (c_rt_lib::check_true($memory_3)) {goto label_608;}
#line 718
$memory_3 = c_rt_lib::ov_is($memory_2, 'goto');
#line 718
if (c_rt_lib::check_true($memory_3)) {goto label_643;}
#line 720
$memory_3 = c_rt_lib::ov_is($memory_2, 'clear');
#line 720
if (c_rt_lib::check_true($memory_3)) {goto label_651;}
#line 720
$memory_3 = "NOMATCHALERT";
#line 720
$memory_3 = [$memory_3,$memory_2];
#line 720
die(dfile::ssave($memory_3));
#line 624
label_58:
#line 624
$memory_4 = c_rt_lib::ov_as($memory_2, 'arr_decl');
#line 625
$memory_7 = $memory_4->{'src'};
#line 625
$memory_6 = array::len($memory_7);
#line 625
undef($memory_7);
#line 625
$memory_5 = [$memory_6];
#line 625
undef($memory_6);
#line 626
$memory_6 = $memory_4->{'src'};
#line 626
$memory_8 = 0;
#line 626
$memory_9 = 1;
#line 626
$memory_10 = c_rt_lib::array_len($memory_6);
#line 626
label_69:
#line 626
$memory_11 = c_rt_lib::to_nl($memory_8 >= $memory_10);
#line 626
if (c_rt_lib::check_true($memory_11)) {goto label_78;}
#line 626
$memory_7 = $memory_6->[$memory_8];
#line 626
$memory_12 = generator_c_priv::get_reg($memory_0, $memory_7);
#line 626
array::push($memory_5, $memory_12);
#line 626
undef($memory_12);
#line 626
$memory_8 = $memory_8 + $memory_9;
#line 626
goto label_69;
#line 626
label_78:
#line 626
undef($memory_6);
#line 626
undef($memory_7);
#line 626
undef($memory_8);
#line 626
undef($memory_9);
#line 626
undef($memory_10);
#line 626
undef($memory_11);
#line 627
$memory_7 = "array_mk";
#line 627
$memory_6 = generator_c_priv::get_fun_lib($memory_7, $memory_5);
#line 627
undef($memory_7);
#line 628
$memory_8 = $memory_4->{'dest'};
#line 628
$memory_7 = generator_c_priv::get_assign($memory_0, $memory_8, $memory_6);
#line 628
undef($memory_8);
#line 628
generator_c_priv::print($memory_0, $memory_7);
#line 628
undef($memory_7);
#line 628
undef($memory_5);
#line 628
undef($memory_6);
#line 628
undef($memory_4);
#line 629
goto label_664;
#line 629
label_97:
#line 629
$memory_4 = c_rt_lib::ov_as($memory_2, 'hash_decl');
#line 630
$memory_7 = $memory_4->{'src'};
#line 630
$memory_6 = array::len($memory_7);
#line 630
undef($memory_7);
#line 630
$memory_5 = [$memory_6];
#line 630
undef($memory_6);
#line 631
$memory_6 = $memory_4->{'src'};
#line 631
$memory_8 = 0;
#line 631
$memory_9 = 1;
#line 631
$memory_10 = c_rt_lib::array_len($memory_6);
#line 631
label_108:
#line 631
$memory_11 = c_rt_lib::to_nl($memory_8 >= $memory_10);
#line 631
if (c_rt_lib::check_true($memory_11)) {goto label_124;}
#line 631
$memory_7 = $memory_6->[$memory_8];
#line 632
$memory_13 = $memory_7->{'key'};
#line 632
$memory_12 = generator_c_priv::get_const_sim($memory_0, $memory_13);
#line 632
undef($memory_13);
#line 632
array::push($memory_5, $memory_12);
#line 632
undef($memory_12);
#line 633
$memory_13 = $memory_7->{'val'};
#line 633
$memory_12 = generator_c_priv::get_reg($memory_0, $memory_13);
#line 633
undef($memory_13);
#line 633
array::push($memory_5, $memory_12);
#line 633
undef($memory_12);
#line 634
$memory_8 = $memory_8 + $memory_9;
#line 634
goto label_108;
#line 634
label_124:
#line 634
undef($memory_6);
#line 634
undef($memory_7);
#line 634
undef($memory_8);
#line 634
undef($memory_9);
#line 634
undef($memory_10);
#line 634
undef($memory_11);
#line 635
$memory_7 = "hash_mk";
#line 635
$memory_6 = generator_c_priv::get_fun_lib($memory_7, $memory_5);
#line 635
undef($memory_7);
#line 636
$memory_8 = $memory_4->{'dest'};
#line 636
$memory_7 = generator_c_priv::get_assign($memory_0, $memory_8, $memory_6);
#line 636
undef($memory_8);
#line 636
generator_c_priv::print($memory_0, $memory_7);
#line 636
undef($memory_7);
#line 636
undef($memory_5);
#line 636
undef($memory_6);
#line 636
undef($memory_4);
#line 637
goto label_664;
#line 637
label_143:
#line 637
$memory_4 = c_rt_lib::ov_as($memory_2, 'func');
#line 638
$memory_6 = $memory_4->{'module'};
#line 638
$memory_7 = $memory_4->{'name'};
#line 638
$memory_5 = generator_c_priv::get_func_pointer($memory_0, $memory_6, $memory_7);
#line 638
undef($memory_7);
#line 638
undef($memory_6);
#line 639
$memory_7 = $memory_4->{'dest'};
#line 639
$memory_6 = generator_c_priv::get_assign($memory_0, $memory_7, $memory_5);
#line 639
undef($memory_7);
#line 639
generator_c_priv::print($memory_0, $memory_6);
#line 639
undef($memory_6);
#line 639
undef($memory_5);
#line 639
undef($memory_4);
#line 640
goto label_664;
#line 640
label_158:
#line 640
$memory_4 = c_rt_lib::ov_as($memory_2, 'call');
#line 641
generator_c_priv::generate_call($memory_0, $memory_4);
#line 641
undef($memory_4);
#line 642
goto label_664;
#line 642
label_163:
#line 642
$memory_4 = c_rt_lib::ov_as($memory_2, 'una_op');
#line 643
$memory_6 = generator_c_priv::get_unary_ops();
#line 643
$memory_7 = $memory_4->{'op'};
#line 643
$memory_5 = hash::get_value($memory_6, $memory_7);
#line 643
undef($memory_7);
#line 643
undef($memory_6);
#line 644
$memory_9 = $memory_4->{'src'};
#line 644
$memory_8 = generator_c_priv::get_reg($memory_0, $memory_9);
#line 644
undef($memory_9);
#line 644
$memory_7 = [$memory_8];
#line 644
undef($memory_8);
#line 644
$memory_6 = generator_c_priv::get_fun_lib($memory_5, $memory_7);
#line 644
undef($memory_7);
#line 645
$memory_8 = $memory_4->{'dest'};
#line 645
$memory_7 = generator_c_priv::get_assign($memory_0, $memory_8, $memory_6);
#line 645
undef($memory_8);
#line 645
generator_c_priv::print($memory_0, $memory_7);
#line 645
undef($memory_7);
#line 645
undef($memory_5);
#line 645
undef($memory_6);
#line 645
undef($memory_4);
#line 646
goto label_664;
#line 646
label_186:
#line 646
$memory_4 = c_rt_lib::ov_as($memory_2, 'bin_op');
#line 647
$memory_6 = generator_c_priv::get_bin_ops();
#line 647
$memory_7 = $memory_4->{'op'};
#line 647
$memory_5 = hash::get_value($memory_6, $memory_7);
#line 647
undef($memory_7);
#line 647
undef($memory_6);
#line 648
$memory_6 = $memory_4->{'dest'};
#line 648
$memory_8 = $memory_4->{'left'};
#line 648
$memory_6 = c_rt_lib::to_nl($memory_6 eq $memory_8);
#line 648
undef($memory_8);
#line 648
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 648
if (c_rt_lib::check_true($memory_7)) {goto label_204;}
#line 648
$memory_8 = generator_c_priv::get_bin_ops_mod();
#line 648
$memory_9 = $memory_4->{'op'};
#line 648
$memory_6 = hash::has_key($memory_8, $memory_9);
#line 648
undef($memory_9);
#line 648
undef($memory_8);
#line 648
label_204:
#line 648
undef($memory_7);
#line 648
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 648
if (c_rt_lib::check_true($memory_6)) {goto label_216;}
#line 649
$memory_8 = generator_c_priv::get_bin_ops_mod();
#line 649
$memory_9 = $memory_4->{'op'};
#line 649
$memory_7 = hash::get_value($memory_8, $memory_9);
#line 649
undef($memory_9);
#line 649
undef($memory_8);
#line 649
$memory_5 = $memory_7;
#line 649
undef($memory_7);
#line 650
goto label_216;
#line 650
label_216:
#line 650
undef($memory_6);
#line 651
$memory_9 = $memory_4->{'left'};
#line 651
$memory_8 = generator_c_priv::get_reg($memory_0, $memory_9);
#line 651
undef($memory_9);
#line 651
$memory_10 = $memory_4->{'right'};
#line 651
$memory_9 = generator_c_priv::get_reg($memory_0, $memory_10);
#line 651
undef($memory_10);
#line 651
$memory_7 = [$memory_8,$memory_9];
#line 651
undef($memory_8);
#line 651
undef($memory_9);
#line 651
$memory_6 = generator_c_priv::get_fun_lib($memory_5, $memory_7);
#line 651
undef($memory_7);
#line 652
$memory_8 = $memory_4->{'dest'};
#line 652
$memory_7 = generator_c_priv::get_assign($memory_0, $memory_8, $memory_6);
#line 652
undef($memory_8);
#line 652
generator_c_priv::print($memory_0, $memory_7);
#line 652
undef($memory_7);
#line 652
undef($memory_5);
#line 652
undef($memory_6);
#line 652
undef($memory_4);
#line 653
goto label_664;
#line 653
label_238:
#line 653
$memory_4 = c_rt_lib::ov_as($memory_2, 'ov_is');
#line 654
$memory_6 = "priv_is";
#line 654
$memory_9 = $memory_4->{'src'};
#line 654
$memory_8 = generator_c_priv::get_reg($memory_0, $memory_9);
#line 654
undef($memory_9);
#line 654
$memory_10 = $memory_4->{'type'};
#line 654
$memory_9 = generator_c_priv::get_const_sim($memory_0, $memory_10);
#line 654
undef($memory_10);
#line 654
$memory_7 = [$memory_8,$memory_9];
#line 654
undef($memory_8);
#line 654
undef($memory_9);
#line 654
$memory_5 = generator_c_priv::get_fun_lib($memory_6, $memory_7);
#line 654
undef($memory_7);
#line 654
undef($memory_6);
#line 655
$memory_7 = $memory_4->{'dest'};
#line 655
$memory_6 = generator_c_priv::get_assign($memory_0, $memory_7, $memory_5);
#line 655
undef($memory_7);
#line 655
generator_c_priv::print($memory_0, $memory_6);
#line 655
undef($memory_6);
#line 655
undef($memory_5);
#line 655
undef($memory_4);
#line 656
goto label_664;
#line 656
label_261:
#line 656
$memory_4 = c_rt_lib::ov_as($memory_2, 'ov_as');
#line 657
$memory_6 = "priv_as";
#line 657
$memory_9 = $memory_4->{'src'};
#line 657
$memory_8 = generator_c_priv::get_reg($memory_0, $memory_9);
#line 657
undef($memory_9);
#line 657
$memory_10 = $memory_4->{'type'};
#line 657
$memory_9 = generator_c_priv::get_const_sim($memory_0, $memory_10);
#line 657
undef($memory_10);
#line 657
$memory_7 = [$memory_8,$memory_9];
#line 657
undef($memory_8);
#line 657
undef($memory_9);
#line 657
$memory_5 = generator_c_priv::get_fun_lib($memory_6, $memory_7);
#line 657
undef($memory_7);
#line 657
undef($memory_6);
#line 658
$memory_7 = $memory_4->{'dest'};
#line 658
$memory_6 = generator_c_priv::get_assign($memory_0, $memory_7, $memory_5);
#line 658
undef($memory_7);
#line 658
generator_c_priv::print($memory_0, $memory_6);
#line 658
undef($memory_6);
#line 658
undef($memory_5);
#line 658
undef($memory_4);
#line 659
goto label_664;
#line 659
label_284:
#line 659
$memory_4 = c_rt_lib::ov_as($memory_2, 'return');
#line 660
generator_c_priv::move_register_to_ref_args($memory_0);
#line 661
$memory_5 = "return ";
#line 661
generator_c_priv::print($memory_0, $memory_5);
#line 661
undef($memory_5);
#line 662
$memory_5 = c_rt_lib::ov_is($memory_4, 'val');
#line 662
if (c_rt_lib::check_true($memory_5)) {goto label_297;}
#line 664
$memory_5 = c_rt_lib::ov_is($memory_4, 'emp');
#line 664
if (c_rt_lib::check_true($memory_5)) {goto label_304;}
#line 664
$memory_5 = "NOMATCHALERT";
#line 664
$memory_5 = [$memory_5,$memory_4];
#line 664
die(dfile::ssave($memory_5));
#line 662
label_297:
#line 662
$memory_6 = c_rt_lib::ov_as($memory_4, 'val');
#line 663
$memory_7 = generator_c_priv::get_reg($memory_0, $memory_6);
#line 663
generator_c_priv::print($memory_0, $memory_7);
#line 663
undef($memory_7);
#line 663
undef($memory_6);
#line 664
goto label_309;
#line 664
label_304:
#line 665
$memory_6 = "NULL";
#line 665
generator_c_priv::print($memory_0, $memory_6);
#line 665
undef($memory_6);
#line 666
goto label_309;
#line 666
label_309:
#line 666
undef($memory_5);
#line 666
undef($memory_4);
#line 667
goto label_664;
#line 667
label_313:
#line 667
$memory_4 = c_rt_lib::ov_as($memory_2, 'die');
#line 668
$memory_5 = "nl_die_arg(";
#line 668
$memory_6 = generator_c_priv::get_reg($memory_0, $memory_4);
#line 668
$memory_5 = $memory_5 . $memory_6;
#line 668
undef($memory_6);
#line 668
$memory_6 = ")";
#line 668
$memory_5 = $memory_5 . $memory_6;
#line 668
undef($memory_6);
#line 668
generator_c_priv::print($memory_0, $memory_5);
#line 668
undef($memory_5);
#line 668
undef($memory_4);
#line 669
goto label_664;
#line 669
label_326:
#line 669
$memory_4 = c_rt_lib::ov_as($memory_2, 'move');
#line 670
$memory_5 = $memory_4->{'dest'};
#line 670
$memory_6 = "";
#line 670
$memory_5 = c_rt_lib::to_nl($memory_5 eq $memory_6);
#line 670
undef($memory_6);
#line 670
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 670
if (c_rt_lib::check_true($memory_5)) {goto label_341;}
#line 670
undef($memory_1);
#line 670
undef($memory_2);
#line 670
undef($memory_3);
#line 670
undef($memory_4);
#line 670
undef($memory_5);
#line 670
$_[0] = $memory_0;return;
#line 670
goto label_341;
#line 670
label_341:
#line 670
undef($memory_5);
#line 671
$memory_7 = $memory_4->{'dest'};
#line 671
$memory_6 = generator_c_priv::get_reg_ref($memory_0, $memory_7);
#line 671
undef($memory_7);
#line 671
$memory_8 = $memory_4->{'src'};
#line 671
$memory_7 = generator_c_priv::get_reg($memory_0, $memory_8);
#line 671
undef($memory_8);
#line 671
$memory_5 = [$memory_6,$memory_7];
#line 671
undef($memory_6);
#line 671
undef($memory_7);
#line 672
$memory_7 = "copy";
#line 672
$memory_6 = generator_c_priv::get_fun_lib($memory_7, $memory_5);
#line 672
undef($memory_7);
#line 672
generator_c_priv::print($memory_0, $memory_6);
#line 672
undef($memory_6);
#line 672
undef($memory_5);
#line 672
undef($memory_4);
#line 673
goto label_664;
#line 673
label_360:
#line 673
$memory_4 = c_rt_lib::ov_as($memory_2, 'load_const');
#line 674
$memory_5 = $memory_4->{'dest'};
#line 674
$memory_6 = "";
#line 674
$memory_5 = c_rt_lib::to_nl($memory_5 eq $memory_6);
#line 674
undef($memory_6);
#line 674
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 674
if (c_rt_lib::check_true($memory_5)) {goto label_375;}
#line 674
undef($memory_1);
#line 674
undef($memory_2);
#line 674
undef($memory_3);
#line 674
undef($memory_4);
#line 674
undef($memory_5);
#line 674
$_[0] = $memory_0;return;
#line 674
goto label_375;
#line 674
label_375:
#line 674
undef($memory_5);
#line 675
$memory_6 = "move";
#line 675
$memory_5 = generator_c_priv::get_lib_fun($memory_6);
#line 675
undef($memory_6);
#line 675
$memory_6 = "(";
#line 675
$memory_5 = $memory_5 . $memory_6;
#line 675
undef($memory_6);
#line 675
$memory_7 = $memory_4->{'dest'};
#line 675
$memory_6 = generator_c_priv::get_reg_ref($memory_0, $memory_7);
#line 675
undef($memory_7);
#line 675
$memory_5 = $memory_5 . $memory_6;
#line 675
undef($memory_6);
#line 675
$memory_6 = ",";
#line 675
$memory_5 = $memory_5 . $memory_6;
#line 675
undef($memory_6);
#line 675
generator_c_priv::print($memory_0, $memory_5);
#line 675
undef($memory_5);
#line 676
$memory_5 = $memory_4->{'val'};
#line 676
generator_c_priv::generate_imm($memory_0, $memory_5);
#line 676
undef($memory_5);
#line 677
$memory_5 = ")";
#line 677
generator_c_priv::print($memory_0, $memory_5);
#line 677
undef($memory_5);
#line 677
undef($memory_4);
#line 678
goto label_664;
#line 678
label_401:
#line 678
$memory_4 = c_rt_lib::ov_as($memory_2, 'get_frm_idx');
#line 679
$memory_6 = "array_get";
#line 679
$memory_9 = $memory_4->{'src'};
#line 679
$memory_8 = generator_c_priv::get_reg($memory_0, $memory_9);
#line 679
undef($memory_9);
#line 679
$memory_10 = $memory_4->{'idx'};
#line 679
$memory_9 = generator_c_priv::get_reg($memory_0, $memory_10);
#line 679
undef($memory_10);
#line 679
$memory_7 = [$memory_8,$memory_9];
#line 679
undef($memory_8);
#line 679
undef($memory_9);
#line 679
$memory_5 = generator_c_priv::get_fun_lib($memory_6, $memory_7);
#line 679
undef($memory_7);
#line 679
undef($memory_6);
#line 680
$memory_7 = $memory_4->{'dest'};
#line 680
$memory_6 = generator_c_priv::get_assign($memory_0, $memory_7, $memory_5);
#line 680
undef($memory_7);
#line 680
generator_c_priv::print($memory_0, $memory_6);
#line 680
undef($memory_6);
#line 680
undef($memory_5);
#line 680
undef($memory_4);
#line 681
goto label_664;
#line 681
label_424:
#line 681
$memory_4 = c_rt_lib::ov_as($memory_2, 'set_at_idx');
#line 682
$memory_6 = "array_set";
#line 683
$memory_9 = $memory_4->{'src'};
#line 683
$memory_8 = generator_c_priv::get_reg_ref($memory_0, $memory_9);
#line 683
undef($memory_9);
#line 684
$memory_10 = $memory_4->{'idx'};
#line 684
$memory_9 = generator_c_priv::get_reg($memory_0, $memory_10);
#line 684
undef($memory_10);
#line 685
$memory_11 = $memory_4->{'val'};
#line 685
$memory_10 = generator_c_priv::get_reg($memory_0, $memory_11);
#line 685
undef($memory_11);
#line 685
$memory_7 = [$memory_8,$memory_9,$memory_10];
#line 685
undef($memory_8);
#line 685
undef($memory_9);
#line 685
undef($memory_10);
#line 685
$memory_5 = generator_c_priv::get_fun_lib($memory_6, $memory_7);
#line 685
undef($memory_7);
#line 685
undef($memory_6);
#line 685
generator_c_priv::print($memory_0, $memory_5);
#line 685
undef($memory_5);
#line 685
undef($memory_4);
#line 687
goto label_664;
#line 687
label_447:
#line 687
$memory_4 = c_rt_lib::ov_as($memory_2, 'get_val');
#line 688
$memory_6 = "hash_get_value_dec";
#line 688
$memory_9 = $memory_4->{'src'};
#line 688
$memory_8 = generator_c_priv::get_reg($memory_0, $memory_9);
#line 688
undef($memory_9);
#line 688
$memory_10 = $memory_4->{'key'};
#line 688
$memory_9 = generator_c_priv::get_const_sim($memory_0, $memory_10);
#line 688
undef($memory_10);
#line 688
$memory_7 = [$memory_8,$memory_9];
#line 688
undef($memory_8);
#line 688
undef($memory_9);
#line 688
$memory_5 = generator_c_priv::get_fun_lib($memory_6, $memory_7);
#line 688
undef($memory_7);
#line 688
undef($memory_6);
#line 689
$memory_7 = $memory_4->{'dest'};
#line 689
$memory_6 = generator_c_priv::get_assign($memory_0, $memory_7, $memory_5);
#line 689
undef($memory_7);
#line 689
generator_c_priv::print($memory_0, $memory_6);
#line 689
undef($memory_6);
#line 689
undef($memory_5);
#line 689
undef($memory_4);
#line 690
goto label_664;
#line 690
label_470:
#line 690
$memory_4 = c_rt_lib::ov_as($memory_2, 'set_val');
#line 691
$memory_6 = "hash_set_value_dec";
#line 692
$memory_9 = $memory_4->{'src'};
#line 692
$memory_8 = generator_c_priv::get_reg_ref($memory_0, $memory_9);
#line 692
undef($memory_9);
#line 693
$memory_10 = $memory_4->{'key'};
#line 693
$memory_9 = generator_c_priv::get_const_sim($memory_0, $memory_10);
#line 693
undef($memory_10);
#line 694
$memory_11 = $memory_4->{'val'};
#line 694
$memory_10 = generator_c_priv::get_reg($memory_0, $memory_11);
#line 694
undef($memory_11);
#line 694
$memory_7 = [$memory_8,$memory_9,$memory_10];
#line 694
undef($memory_8);
#line 694
undef($memory_9);
#line 694
undef($memory_10);
#line 694
$memory_5 = generator_c_priv::get_fun_lib($memory_6, $memory_7);
#line 694
undef($memory_7);
#line 694
undef($memory_6);
#line 694
generator_c_priv::print($memory_0, $memory_5);
#line 694
undef($memory_5);
#line 694
undef($memory_4);
#line 696
goto label_664;
#line 696
label_493:
#line 696
$memory_4 = c_rt_lib::ov_as($memory_2, 'ov_mk');
#line 698
$memory_6 = $memory_4->{'src'};
#line 698
$memory_6 = c_rt_lib::ov_is($memory_6, 'emp');
#line 698
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 698
if (c_rt_lib::check_true($memory_7)) {goto label_503;}
#line 698
$memory_6 = $memory_4->{'name'};
#line 698
$memory_8 = "TRUE";
#line 698
$memory_6 = c_rt_lib::to_nl($memory_6 eq $memory_8);
#line 698
undef($memory_8);
#line 698
label_503:
#line 698
undef($memory_7);
#line 698
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 698
if (c_rt_lib::check_true($memory_6)) {goto label_515;}
#line 699
$memory_8 = "get_true";
#line 699
$memory_9 = [];
#line 699
$memory_7 = generator_c_priv::get_fun_lib($memory_8, $memory_9);
#line 699
undef($memory_9);
#line 699
undef($memory_8);
#line 699
$memory_5 = $memory_7;
#line 699
undef($memory_7);
#line 700
goto label_579;
#line 700
label_515:
#line 700
$memory_6 = $memory_4->{'src'};
#line 700
$memory_6 = c_rt_lib::ov_is($memory_6, 'emp');
#line 700
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 700
if (c_rt_lib::check_true($memory_7)) {goto label_524;}
#line 700
$memory_6 = $memory_4->{'name'};
#line 700
$memory_8 = "FALSE";
#line 700
$memory_6 = c_rt_lib::to_nl($memory_6 eq $memory_8);
#line 700
undef($memory_8);
#line 700
label_524:
#line 700
undef($memory_7);
#line 700
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 700
if (c_rt_lib::check_true($memory_6)) {goto label_536;}
#line 701
$memory_8 = "get_false";
#line 701
$memory_9 = [];
#line 701
$memory_7 = generator_c_priv::get_fun_lib($memory_8, $memory_9);
#line 701
undef($memory_9);
#line 701
undef($memory_8);
#line 701
$memory_5 = $memory_7;
#line 701
undef($memory_7);
#line 702
goto label_579;
#line 702
label_536:
#line 703
$memory_7 = $memory_4->{'src'};
#line 703
$memory_8 = c_rt_lib::ov_is($memory_7, 'arg');
#line 703
if (c_rt_lib::check_true($memory_8)) {goto label_545;}
#line 705
$memory_8 = c_rt_lib::ov_is($memory_7, 'emp');
#line 705
if (c_rt_lib::check_true($memory_8)) {goto label_562;}
#line 705
$memory_8 = "NOMATCHALERT";
#line 705
$memory_8 = [$memory_8,$memory_7];
#line 705
die(dfile::ssave($memory_8));
#line 703
label_545:
#line 703
$memory_9 = c_rt_lib::ov_as($memory_7, 'arg');
#line 704
$memory_11 = "ov_mk_arg";
#line 704
$memory_14 = $memory_4->{'name'};
#line 704
$memory_13 = generator_c_priv::get_const_sim($memory_0, $memory_14);
#line 704
undef($memory_14);
#line 704
$memory_14 = generator_c_priv::get_reg($memory_0, $memory_9);
#line 704
$memory_12 = [$memory_13,$memory_14];
#line 704
undef($memory_13);
#line 704
undef($memory_14);
#line 704
$memory_10 = generator_c_priv::get_fun_lib($memory_11, $memory_12);
#line 704
undef($memory_12);
#line 704
undef($memory_11);
#line 704
$memory_5 = $memory_10;
#line 704
undef($memory_10);
#line 704
undef($memory_9);
#line 705
goto label_575;
#line 705
label_562:
#line 706
$memory_10 = "ov_mk_none";
#line 706
$memory_13 = $memory_4->{'name'};
#line 706
$memory_12 = generator_c_priv::get_const_sim($memory_0, $memory_13);
#line 706
undef($memory_13);
#line 706
$memory_11 = [$memory_12];
#line 706
undef($memory_12);
#line 706
$memory_9 = generator_c_priv::get_fun_lib($memory_10, $memory_11);
#line 706
undef($memory_11);
#line 706
undef($memory_10);
#line 706
$memory_5 = $memory_9;
#line 706
undef($memory_9);
#line 707
goto label_575;
#line 707
label_575:
#line 707
undef($memory_7);
#line 707
undef($memory_8);
#line 708
goto label_579;
#line 708
label_579:
#line 708
undef($memory_6);
#line 709
$memory_7 = $memory_4->{'dest'};
#line 709
$memory_6 = generator_c_priv::get_assign($memory_0, $memory_7, $memory_5);
#line 709
undef($memory_7);
#line 709
generator_c_priv::print($memory_0, $memory_6);
#line 709
undef($memory_6);
#line 709
undef($memory_5);
#line 709
undef($memory_4);
#line 710
goto label_664;
#line 710
label_589:
#line 710
$memory_4 = c_rt_lib::ov_as($memory_2, 'prt_lbl');
#line 711
$memory_5 = "label_";
#line 711
$memory_5 = $memory_5 . $memory_4;
#line 711
$memory_6 = ":";
#line 711
$memory_5 = $memory_5 . $memory_6;
#line 711
undef($memory_6);
#line 711
$memory_6 = string::lf();
#line 711
$memory_5 = $memory_5 . $memory_6;
#line 711
undef($memory_6);
#line 711
generator_c_priv::print($memory_0, $memory_5);
#line 711
undef($memory_5);
#line 712
undef($memory_1);
#line 712
undef($memory_2);
#line 712
undef($memory_3);
#line 712
undef($memory_4);
#line 712
$_[0] = $memory_0;return;
#line 712
undef($memory_4);
#line 713
goto label_664;
#line 713
label_608:
#line 713
$memory_4 = c_rt_lib::ov_as($memory_2, 'if_goto');
#line 714
$memory_5 = "if(";
#line 714
generator_c_priv::print($memory_0, $memory_5);
#line 714
undef($memory_5);
#line 715
$memory_6 = "check_true_native";
#line 715
$memory_9 = $memory_4->{'src'};
#line 715
$memory_8 = generator_c_priv::get_reg($memory_0, $memory_9);
#line 715
undef($memory_9);
#line 715
$memory_7 = [$memory_8];
#line 715
undef($memory_8);
#line 715
$memory_5 = generator_c_priv::get_fun_lib($memory_6, $memory_7);
#line 715
undef($memory_7);
#line 715
undef($memory_6);
#line 715
generator_c_priv::print($memory_0, $memory_5);
#line 715
undef($memory_5);
#line 716
$memory_5 = "){ goto label_";
#line 716
$memory_6 = $memory_4->{'dest'};
#line 716
$memory_5 = $memory_5 . $memory_6;
#line 716
undef($memory_6);
#line 716
$memory_6 = ";}";
#line 716
$memory_5 = $memory_5 . $memory_6;
#line 716
undef($memory_6);
#line 716
$memory_6 = string::lf();
#line 716
$memory_5 = $memory_5 . $memory_6;
#line 716
undef($memory_6);
#line 716
generator_c_priv::print($memory_0, $memory_5);
#line 716
undef($memory_5);
#line 717
undef($memory_1);
#line 717
undef($memory_2);
#line 717
undef($memory_3);
#line 717
undef($memory_4);
#line 717
$_[0] = $memory_0;return;
#line 717
undef($memory_4);
#line 718
goto label_664;
#line 718
label_643:
#line 718
$memory_4 = c_rt_lib::ov_as($memory_2, 'goto');
#line 719
$memory_5 = "goto label_";
#line 719
$memory_5 = $memory_5 . $memory_4;
#line 719
generator_c_priv::print($memory_0, $memory_5);
#line 719
undef($memory_5);
#line 719
undef($memory_4);
#line 720
goto label_664;
#line 720
label_651:
#line 720
$memory_4 = c_rt_lib::ov_as($memory_2, 'clear');
#line 721
$memory_6 = "clear";
#line 721
$memory_8 = generator_c_priv::get_reg_ref($memory_0, $memory_4);
#line 721
$memory_7 = [$memory_8];
#line 721
undef($memory_8);
#line 721
$memory_5 = generator_c_priv::get_fun_lib($memory_6, $memory_7);
#line 721
undef($memory_7);
#line 721
undef($memory_6);
#line 721
generator_c_priv::print($memory_0, $memory_5);
#line 721
undef($memory_5);
#line 721
undef($memory_4);
#line 722
goto label_664;
#line 722
label_664:
#line 722
undef($memory_2);
#line 722
undef($memory_3);
#line 723
$memory_2 = ";";
#line 723
$memory_3 = string::lf();
#line 723
$memory_2 = $memory_2 . $memory_3;
#line 723
undef($memory_3);
#line 723
generator_c_priv::print($memory_0, $memory_2);
#line 723
undef($memory_2);
#line 723
undef($memory_1);
#line 723
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub generator_c_priv::get_assign($$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];$memory_2 = $_[2];
#line 727
$memory_3 = "";
#line 727
$memory_3 = c_rt_lib::to_nl($memory_1 eq $memory_3);
#line 727
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 727
if (c_rt_lib::check_true($memory_3)) {goto label_15;}
#line 728
$memory_5 = "delete";
#line 728
$memory_6 = [$memory_2];
#line 728
$memory_4 = generator_c_priv::get_fun_lib($memory_5, $memory_6);
#line 728
undef($memory_6);
#line 728
undef($memory_5);
#line 728
undef($memory_1);
#line 728
undef($memory_2);
#line 728
undef($memory_3);
#line 728
$_[0] = $memory_0;return $memory_4;
#line 728
undef($memory_4);
#line 729
goto label_29;
#line 729
label_15:
#line 730
$memory_5 = "move";
#line 730
$memory_7 = generator_c_priv::get_reg_ref($memory_0, $memory_1);
#line 730
$memory_6 = [$memory_7,$memory_2];
#line 730
undef($memory_7);
#line 730
$memory_4 = generator_c_priv::get_fun_lib($memory_5, $memory_6);
#line 730
undef($memory_6);
#line 730
undef($memory_5);
#line 730
undef($memory_1);
#line 730
undef($memory_2);
#line 730
undef($memory_3);
#line 730
$_[0] = $memory_0;return $memory_4;
#line 730
undef($memory_4);
#line 731
goto label_29;
#line 731
label_29:
#line 731
undef($memory_3);
#line 731
undef($memory_1);
#line 731
undef($memory_2);
#line 731
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub generator_c_priv::generate_call($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];
#line 735
$memory_3 = $memory_1->{'mod'};
#line 735
$memory_4 = $memory_1->{'fun_name'};
#line 735
$memory_5 = $memory_0->{'mod_name'};
#line 735
$memory_2 = generator_c_priv::get_fun_name($memory_3, $memory_4, $memory_5);
#line 735
undef($memory_5);
#line 735
undef($memory_4);
#line 735
undef($memory_3);
#line 735
$memory_3 = "(";
#line 735
$memory_2 = $memory_2 . $memory_3;
#line 735
undef($memory_3);
#line 736
$memory_4 = $memory_1->{'args'};
#line 736
$memory_3 = array::len($memory_4);
#line 736
undef($memory_4);
#line 736
$memory_4 = 0;
#line 736
$memory_5 = 1;
#line 736
label_15:
#line 736
$memory_6 = c_rt_lib::to_nl($memory_4 >= $memory_3);
#line 736
if (c_rt_lib::check_true($memory_6)) {goto label_57;}
#line 737
$memory_7 = 0;
#line 737
$memory_7 = c_rt_lib::to_nl($memory_7 == $memory_4);
#line 737
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 737
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 737
if (c_rt_lib::check_true($memory_7)) {goto label_27;}
#line 737
$memory_8 = ", ";
#line 737
$memory_2 = $memory_2 . $memory_8;
#line 737
undef($memory_8);
#line 737
goto label_27;
#line 737
label_27:
#line 737
undef($memory_7);
#line 738
$memory_7 = $memory_1->{'args'};
#line 738
$memory_7 = $memory_7->[$memory_4];
#line 738
$memory_8 = c_rt_lib::ov_is($memory_7, 'val');
#line 738
if (c_rt_lib::check_true($memory_8)) {goto label_38;}
#line 740
$memory_8 = c_rt_lib::ov_is($memory_7, 'ref');
#line 740
if (c_rt_lib::check_true($memory_8)) {goto label_45;}
#line 740
$memory_8 = "NOMATCHALERT";
#line 740
$memory_8 = [$memory_8,$memory_7];
#line 740
die(dfile::ssave($memory_8));
#line 738
label_38:
#line 738
$memory_9 = c_rt_lib::ov_as($memory_7, 'val');
#line 739
$memory_10 = generator_c_priv::get_reg($memory_0, $memory_9);
#line 739
$memory_2 = $memory_2 . $memory_10;
#line 739
undef($memory_10);
#line 739
undef($memory_9);
#line 740
goto label_52;
#line 740
label_45:
#line 740
$memory_9 = c_rt_lib::ov_as($memory_7, 'ref');
#line 741
$memory_10 = generator_c_priv::get_reg_ref($memory_0, $memory_9);
#line 741
$memory_2 = $memory_2 . $memory_10;
#line 741
undef($memory_10);
#line 741
undef($memory_9);
#line 742
goto label_52;
#line 742
label_52:
#line 742
undef($memory_7);
#line 742
undef($memory_8);
#line 743
$memory_4 = $memory_4 + $memory_5;
#line 743
goto label_15;
#line 743
label_57:
#line 743
undef($memory_3);
#line 743
undef($memory_4);
#line 743
undef($memory_5);
#line 743
undef($memory_6);
#line 744
$memory_3 = ")";
#line 744
$memory_2 = $memory_2 . $memory_3;
#line 744
undef($memory_3);
#line 745
$memory_4 = $memory_1->{'dest'};
#line 745
$memory_3 = generator_c_priv::get_assign($memory_0, $memory_4, $memory_2);
#line 745
undef($memory_4);
#line 745
generator_c_priv::print($memory_0, $memory_3);
#line 745
undef($memory_3);
#line 745
undef($memory_2);
#line 745
undef($memory_1);
#line 745
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub generator_c_priv::create_sim($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;$memory_0 = $_[0];
#line 749
$memory_1 = string_utils::is_integer($memory_0);
#line 749
$memory_1 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_1));
#line 749
if (c_rt_lib::check_true($memory_1)) {goto label_18;}
#line 750
$memory_3 = "int_new";
#line 750
$memory_2 = generator_c_priv::get_lib_fun($memory_3);
#line 750
undef($memory_3);
#line 750
$memory_3 = "(";
#line 750
$memory_2 = $memory_2 . $memory_3;
#line 750
undef($memory_3);
#line 750
$memory_2 = $memory_2 . $memory_0;
#line 750
$memory_3 = ")";
#line 750
$memory_2 = $memory_2 . $memory_3;
#line 750
undef($memory_3);
#line 750
undef($memory_0);
#line 750
undef($memory_1);
#line 750
return $memory_2;
#line 750
undef($memory_2);
#line 751
goto label_99;
#line 751
label_18:
#line 751
$memory_1 = string_utils::is_float($memory_0);
#line 751
$memory_1 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_1));
#line 751
if (c_rt_lib::check_true($memory_1)) {goto label_37;}
#line 752
$memory_3 = "float_new";
#line 752
$memory_2 = generator_c_priv::get_lib_fun($memory_3);
#line 752
undef($memory_3);
#line 752
$memory_3 = "(";
#line 752
$memory_2 = $memory_2 . $memory_3;
#line 752
undef($memory_3);
#line 752
$memory_2 = $memory_2 . $memory_0;
#line 752
$memory_3 = ")";
#line 752
$memory_2 = $memory_2 . $memory_3;
#line 752
undef($memory_3);
#line 752
undef($memory_0);
#line 752
undef($memory_1);
#line 752
return $memory_2;
#line 752
undef($memory_2);
#line 753
goto label_99;
#line 753
label_37:
#line 754
$memory_2 = "";
#line 754
$memory_2 = $memory_0 . $memory_2;
#line 755
$memory_4 = "\\";
#line 755
$memory_5 = "\\\\";
#line 755
$memory_3 = string::replace($memory_2, $memory_4, $memory_5);
#line 755
undef($memory_5);
#line 755
undef($memory_4);
#line 755
$memory_2 = $memory_3;
#line 755
undef($memory_3);
#line 756
$memory_4 = string::lf();
#line 756
$memory_5 = "\\n";
#line 756
$memory_3 = string::replace($memory_2, $memory_4, $memory_5);
#line 756
undef($memory_5);
#line 756
undef($memory_4);
#line 756
$memory_2 = $memory_3;
#line 756
undef($memory_3);
#line 757
$memory_4 = string::r();
#line 757
$memory_5 = "\\r";
#line 757
$memory_3 = string::replace($memory_2, $memory_4, $memory_5);
#line 757
undef($memory_5);
#line 757
undef($memory_4);
#line 757
$memory_2 = $memory_3;
#line 757
undef($memory_3);
#line 758
$memory_4 = string::tab();
#line 758
$memory_5 = "\\t";
#line 758
$memory_3 = string::replace($memory_2, $memory_4, $memory_5);
#line 758
undef($memory_5);
#line 758
undef($memory_4);
#line 758
$memory_2 = $memory_3;
#line 758
undef($memory_3);
#line 759
$memory_4 = "\"";
#line 759
$memory_5 = "\\\"";
#line 759
$memory_3 = string::replace($memory_2, $memory_4, $memory_5);
#line 759
undef($memory_5);
#line 759
undef($memory_4);
#line 759
$memory_2 = $memory_3;
#line 759
undef($memory_3);
#line 760
$memory_4 = "'";
#line 760
$memory_5 = "\\'";
#line 760
$memory_3 = string::replace($memory_2, $memory_4, $memory_5);
#line 760
undef($memory_5);
#line 760
undef($memory_4);
#line 760
$memory_2 = $memory_3;
#line 760
undef($memory_3);
#line 761
$memory_4 = "string_new";
#line 761
$memory_3 = generator_c_priv::get_lib_fun($memory_4);
#line 761
undef($memory_4);
#line 761
$memory_4 = "(\"";
#line 761
$memory_3 = $memory_3 . $memory_4;
#line 761
undef($memory_4);
#line 761
$memory_3 = $memory_3 . $memory_2;
#line 761
$memory_4 = "\")";
#line 761
$memory_3 = $memory_3 . $memory_4;
#line 761
undef($memory_4);
#line 761
undef($memory_0);
#line 761
undef($memory_1);
#line 761
undef($memory_2);
#line 761
return $memory_3;
#line 761
undef($memory_3);
#line 761
undef($memory_2);
#line 762
goto label_99;
#line 762
label_99:
#line 762
undef($memory_1);
#line 762
undef($memory_0);
#line 762
return;
}

sub generator_c_priv::create_sim_to_memory($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;$memory_0 = $_[0];$memory_1 = $_[1];
#line 766
$memory_2 = string_utils::is_integer($memory_0);
#line 766
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 766
if (c_rt_lib::check_true($memory_2)) {goto label_23;}
#line 767
$memory_4 = "int_new_to_memory";
#line 767
$memory_3 = generator_c_priv::get_lib_fun($memory_4);
#line 767
undef($memory_4);
#line 767
$memory_4 = "(";
#line 767
$memory_3 = $memory_3 . $memory_4;
#line 767
undef($memory_4);
#line 767
$memory_3 = $memory_3 . $memory_0;
#line 767
$memory_4 = ",";
#line 767
$memory_3 = $memory_3 . $memory_4;
#line 767
undef($memory_4);
#line 767
$memory_3 = $memory_3 . $memory_1;
#line 767
$memory_4 = ")";
#line 767
$memory_3 = $memory_3 . $memory_4;
#line 767
undef($memory_4);
#line 767
undef($memory_0);
#line 767
undef($memory_1);
#line 767
undef($memory_2);
#line 767
return $memory_3;
#line 767
undef($memory_3);
#line 768
goto label_123;
#line 768
label_23:
#line 768
$memory_2 = string_utils::is_float($memory_0);
#line 768
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 768
if (c_rt_lib::check_true($memory_2)) {goto label_47;}
#line 769
$memory_4 = "float_new_to_memory";
#line 769
$memory_3 = generator_c_priv::get_lib_fun($memory_4);
#line 769
undef($memory_4);
#line 769
$memory_4 = "(";
#line 769
$memory_3 = $memory_3 . $memory_4;
#line 769
undef($memory_4);
#line 769
$memory_3 = $memory_3 . $memory_0;
#line 769
$memory_4 = ",";
#line 769
$memory_3 = $memory_3 . $memory_4;
#line 769
undef($memory_4);
#line 769
$memory_3 = $memory_3 . $memory_1;
#line 769
$memory_4 = ")";
#line 769
$memory_3 = $memory_3 . $memory_4;
#line 769
undef($memory_4);
#line 769
undef($memory_0);
#line 769
undef($memory_1);
#line 769
undef($memory_2);
#line 769
return $memory_3;
#line 769
undef($memory_3);
#line 770
goto label_123;
#line 770
label_47:
#line 771
$memory_3 = "";
#line 771
$memory_3 = $memory_0 . $memory_3;
#line 772
$memory_5 = "\\";
#line 772
$memory_6 = "\\\\";
#line 772
$memory_4 = string::replace($memory_3, $memory_5, $memory_6);
#line 772
undef($memory_6);
#line 772
undef($memory_5);
#line 772
$memory_3 = $memory_4;
#line 772
undef($memory_4);
#line 773
$memory_5 = string::lf();
#line 773
$memory_6 = "\\n";
#line 773
$memory_4 = string::replace($memory_3, $memory_5, $memory_6);
#line 773
undef($memory_6);
#line 773
undef($memory_5);
#line 773
$memory_3 = $memory_4;
#line 773
undef($memory_4);
#line 774
$memory_5 = string::r();
#line 774
$memory_6 = "\\r";
#line 774
$memory_4 = string::replace($memory_3, $memory_5, $memory_6);
#line 774
undef($memory_6);
#line 774
undef($memory_5);
#line 774
$memory_3 = $memory_4;
#line 774
undef($memory_4);
#line 775
$memory_5 = string::tab();
#line 775
$memory_6 = "\\t";
#line 775
$memory_4 = string::replace($memory_3, $memory_5, $memory_6);
#line 775
undef($memory_6);
#line 775
undef($memory_5);
#line 775
$memory_3 = $memory_4;
#line 775
undef($memory_4);
#line 776
$memory_5 = "\"";
#line 776
$memory_6 = "\\\"";
#line 776
$memory_4 = string::replace($memory_3, $memory_5, $memory_6);
#line 776
undef($memory_6);
#line 776
undef($memory_5);
#line 776
$memory_3 = $memory_4;
#line 776
undef($memory_4);
#line 777
$memory_5 = "'";
#line 777
$memory_6 = "\\'";
#line 777
$memory_4 = string::replace($memory_3, $memory_5, $memory_6);
#line 777
undef($memory_6);
#line 777
undef($memory_5);
#line 777
$memory_3 = $memory_4;
#line 777
undef($memory_4);
#line 778
$memory_6 = 0;
#line 778
$memory_5 = string::chr($memory_6);
#line 778
undef($memory_6);
#line 778
$memory_6 = "\\0";
#line 778
$memory_4 = string::replace($memory_3, $memory_5, $memory_6);
#line 778
undef($memory_6);
#line 778
undef($memory_5);
#line 778
$memory_3 = $memory_4;
#line 778
undef($memory_4);
#line 779
$memory_5 = "string_new_to_memory";
#line 779
$memory_4 = generator_c_priv::get_lib_fun($memory_5);
#line 779
undef($memory_5);
#line 779
$memory_5 = "(\"";
#line 779
$memory_4 = $memory_4 . $memory_5;
#line 779
undef($memory_5);
#line 779
$memory_4 = $memory_4 . $memory_3;
#line 779
$memory_5 = "\",";
#line 779
$memory_4 = $memory_4 . $memory_5;
#line 779
undef($memory_5);
#line 779
$memory_4 = $memory_4 . $memory_1;
#line 779
$memory_5 = ")";
#line 779
$memory_4 = $memory_4 . $memory_5;
#line 779
undef($memory_5);
#line 779
undef($memory_0);
#line 779
undef($memory_1);
#line 779
undef($memory_2);
#line 779
undef($memory_3);
#line 779
return $memory_4;
#line 779
undef($memory_4);
#line 779
undef($memory_3);
#line 780
goto label_123;
#line 780
label_123:
#line 780
undef($memory_2);
#line 780
undef($memory_0);
#line 780
undef($memory_1);
#line 780
return;
}
