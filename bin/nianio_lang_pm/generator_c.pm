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
sub generator_c_priv::print_cmd;
sub generator_c_priv::get_assign;
sub generator_c_priv::generate_call;
sub generator_c_priv::create_sim;
sub generator_c_priv::create_sim_to_memory;

return 1;

sub generator_c_priv::__get_bin_ops() {
my $memory_0;my $memory_1;
#line 17
$memory_1 = generator_c_priv::gen_bin_ops();
#line 17
$memory_0 = singleton::sigleton_do_not_use_without_approval($memory_1);
#line 17
undef($memory_1);
#line 17
return $memory_0;
#line 17
undef($memory_0);
#line 17
return;
}

my $_get_bin_ops;
sub generator_c_priv::get_bin_ops() {
	$_get_bin_ops = generator_c_priv::__get_bin_ops() unless defined $_get_bin_ops;
	return $_get_bin_ops;
}

sub generator_c_priv::__get_bin_ops_mod() {
my $memory_0;my $memory_1;
#line 20
$memory_1 = generator_c_priv::gen_bin_ops_mod();
#line 20
$memory_0 = singleton::sigleton_do_not_use_without_approval($memory_1);
#line 20
undef($memory_1);
#line 20
return $memory_0;
#line 20
undef($memory_0);
#line 20
return;
}

my $_get_bin_ops_mod;
sub generator_c_priv::get_bin_ops_mod() {
	$_get_bin_ops_mod = generator_c_priv::__get_bin_ops_mod() unless defined $_get_bin_ops_mod;
	return $_get_bin_ops_mod;
}

sub generator_c_priv::__get_unary_ops() {
my $memory_0;my $memory_1;
#line 24
$memory_1 = generator_c_priv::gen_unary_ops();
#line 24
$memory_0 = singleton::sigleton_do_not_use_without_approval($memory_1);
#line 24
undef($memory_1);
#line 24
return $memory_0;
#line 24
undef($memory_0);
#line 24
return;
}

my $_get_unary_ops;
sub generator_c_priv::get_unary_ops() {
	$_get_unary_ops = generator_c_priv::__get_unary_ops() unless defined $_get_unary_ops;
	return $_get_unary_ops;
}

sub generator_c_priv::__gen_unary_ops() {
my $memory_0;my $memory_1;my $memory_2;
#line 28
$memory_0 = {};
#line 29
$memory_1 = "!";
#line 29
$memory_2 = "not";
#line 29
hash::set_value($memory_0, $memory_1, $memory_2);
#line 29
undef($memory_2);
#line 29
undef($memory_1);
#line 30
$memory_1 = "-";
#line 30
$memory_2 = "unary_minus";
#line 30
hash::set_value($memory_0, $memory_1, $memory_2);
#line 30
undef($memory_2);
#line 30
undef($memory_1);
#line 31
$memory_1 = "+";
#line 31
$memory_2 = "unary_plus";
#line 31
hash::set_value($memory_0, $memory_1, $memory_2);
#line 31
undef($memory_2);
#line 31
undef($memory_1);
#line 32
return $memory_0;
#line 32
undef($memory_0);
#line 32
return;
}

my $_gen_unary_ops;
sub generator_c_priv::gen_unary_ops() {
	$_gen_unary_ops = generator_c_priv::__gen_unary_ops() unless defined $_gen_unary_ops;
	return $_gen_unary_ops;
}

sub generator_c_priv::__gen_bin_ops() {
my $memory_0;my $memory_1;my $memory_2;
#line 36
$memory_0 = {};
#line 37
$memory_1 = "eq";
#line 37
$memory_2 = "eq";
#line 37
hash::set_value($memory_0, $memory_1, $memory_2);
#line 37
undef($memory_2);
#line 37
undef($memory_1);
#line 38
$memory_1 = "ne";
#line 38
$memory_2 = "ne";
#line 38
hash::set_value($memory_0, $memory_1, $memory_2);
#line 38
undef($memory_2);
#line 38
undef($memory_1);
#line 39
$memory_1 = "+";
#line 39
$memory_2 = "add";
#line 39
hash::set_value($memory_0, $memory_1, $memory_2);
#line 39
undef($memory_2);
#line 39
undef($memory_1);
#line 40
$memory_1 = "-";
#line 40
$memory_2 = "sub";
#line 40
hash::set_value($memory_0, $memory_1, $memory_2);
#line 40
undef($memory_2);
#line 40
undef($memory_1);
#line 41
$memory_1 = "*";
#line 41
$memory_2 = "mul";
#line 41
hash::set_value($memory_0, $memory_1, $memory_2);
#line 41
undef($memory_2);
#line 41
undef($memory_1);
#line 42
$memory_1 = "/";
#line 42
$memory_2 = "div";
#line 42
hash::set_value($memory_0, $memory_1, $memory_2);
#line 42
undef($memory_2);
#line 42
undef($memory_1);
#line 43
$memory_1 = "%";
#line 43
$memory_2 = "mod";
#line 43
hash::set_value($memory_0, $memory_1, $memory_2);
#line 43
undef($memory_2);
#line 43
undef($memory_1);
#line 44
$memory_1 = "<=";
#line 44
$memory_2 = "le";
#line 44
hash::set_value($memory_0, $memory_1, $memory_2);
#line 44
undef($memory_2);
#line 44
undef($memory_1);
#line 45
$memory_1 = "<";
#line 45
$memory_2 = "lt";
#line 45
hash::set_value($memory_0, $memory_1, $memory_2);
#line 45
undef($memory_2);
#line 45
undef($memory_1);
#line 46
$memory_1 = "==";
#line 46
$memory_2 = "num_eq";
#line 46
hash::set_value($memory_0, $memory_1, $memory_2);
#line 46
undef($memory_2);
#line 46
undef($memory_1);
#line 47
$memory_1 = "!=";
#line 47
$memory_2 = "num_ne";
#line 47
hash::set_value($memory_0, $memory_1, $memory_2);
#line 47
undef($memory_2);
#line 47
undef($memory_1);
#line 48
$memory_1 = ">";
#line 48
$memory_2 = "gt";
#line 48
hash::set_value($memory_0, $memory_1, $memory_2);
#line 48
undef($memory_2);
#line 48
undef($memory_1);
#line 49
$memory_1 = ">=";
#line 49
$memory_2 = "ge";
#line 49
hash::set_value($memory_0, $memory_1, $memory_2);
#line 49
undef($memory_2);
#line 49
undef($memory_1);
#line 50
$memory_1 = ".";
#line 50
$memory_2 = "concat_new";
#line 50
hash::set_value($memory_0, $memory_1, $memory_2);
#line 50
undef($memory_2);
#line 50
undef($memory_1);
#line 51
return $memory_0;
#line 51
undef($memory_0);
#line 51
return;
}

my $_gen_bin_ops;
sub generator_c_priv::gen_bin_ops() {
	$_gen_bin_ops = generator_c_priv::__gen_bin_ops() unless defined $_gen_bin_ops;
	return $_gen_bin_ops;
}

sub generator_c_priv::__gen_bin_ops_mod() {
my $memory_0;my $memory_1;my $memory_2;
#line 54
$memory_0 = {};
#line 55
$memory_1 = "+";
#line 55
$memory_2 = "add_mod";
#line 55
hash::set_value($memory_0, $memory_1, $memory_2);
#line 55
undef($memory_2);
#line 55
undef($memory_1);
#line 56
$memory_1 = "-";
#line 56
$memory_2 = "sub_mod";
#line 56
hash::set_value($memory_0, $memory_1, $memory_2);
#line 56
undef($memory_2);
#line 56
undef($memory_1);
#line 57
$memory_1 = "*";
#line 57
$memory_2 = "mul_mod";
#line 57
hash::set_value($memory_0, $memory_1, $memory_2);
#line 57
undef($memory_2);
#line 57
undef($memory_1);
#line 58
$memory_1 = "/";
#line 58
$memory_2 = "div_mod";
#line 58
hash::set_value($memory_0, $memory_1, $memory_2);
#line 58
undef($memory_2);
#line 58
undef($memory_1);
#line 59
$memory_1 = "%";
#line 59
$memory_2 = "mod_mod";
#line 59
hash::set_value($memory_0, $memory_1, $memory_2);
#line 59
undef($memory_2);
#line 59
undef($memory_1);
#line 60
$memory_1 = ".";
#line 60
$memory_2 = "concat_add";
#line 60
hash::set_value($memory_0, $memory_1, $memory_2);
#line 60
undef($memory_2);
#line 60
undef($memory_1);
#line 61
return $memory_0;
#line 61
undef($memory_0);
#line 61
return;
}

my $_gen_bin_ops_mod;
sub generator_c_priv::gen_bin_ops_mod() {
	$_gen_bin_ops_mod = generator_c_priv::__gen_bin_ops_mod() unless defined $_gen_bin_ops_mod;
	return $_gen_bin_ops_mod;
}

sub generator_c::__const_dict() {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;
#line 65
$memory_3 = ptd::sim();
#line 65
$memory_2 = ptd::arr($memory_3);
#line 65
undef($memory_3);
#line 65
$memory_4 = ptd::sim();
#line 65
$memory_3 = ptd::hash($memory_4);
#line 65
undef($memory_4);
#line 65
$memory_1 = {arr => $memory_2,hash => $memory_3,};
#line 65
undef($memory_2);
#line 65
undef($memory_3);
#line 65
$memory_0 = ptd::rec($memory_1);
#line 65
undef($memory_1);
#line 65
return $memory_0;
#line 65
undef($memory_0);
#line 65
return;
}

my $_const_dict;
sub generator_c::const_dict() {
	$_const_dict = generator_c::__const_dict() unless defined $_const_dict;
	return $_const_dict;
}

sub generator_c::__fun_args_t() {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;
#line 71
$memory_3 = ptd::none();
#line 71
$memory_4 = ptd::none();
#line 71
$memory_2 = {val => $memory_3,ref => $memory_4,};
#line 71
undef($memory_3);
#line 71
undef($memory_4);
#line 71
$memory_1 = ptd::var($memory_2);
#line 71
undef($memory_2);
#line 71
$memory_0 = ptd::arr($memory_1);
#line 71
undef($memory_1);
#line 71
return $memory_0;
#line 71
undef($memory_0);
#line 71
return;
}

my $_fun_args_t;
sub generator_c::fun_args_t() {
	$_fun_args_t = generator_c::__fun_args_t() unless defined $_fun_args_t;
	return $_fun_args_t;
}

sub generator_c::__const_t() {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;
#line 74
$memory_3 = ptd::sim();
#line 74
$memory_2 = ptd::arr($memory_3);
#line 74
undef($memory_3);
#line 74
$memory_4 = ptd::sim();
#line 74
$memory_3 = ptd::hash($memory_4);
#line 74
undef($memory_4);
#line 74
$memory_1 = {arr => $memory_2,hash => $memory_3,};
#line 74
undef($memory_2);
#line 74
undef($memory_3);
#line 74
$memory_0 = ptd::rec($memory_1);
#line 74
undef($memory_1);
#line 74
return $memory_0;
#line 74
undef($memory_0);
#line 74
return;
}

my $_const_t;
sub generator_c::const_t() {
	$_const_t = generator_c::__const_t() unless defined $_const_t;
	return $_const_t;
}

sub generator_c::__global_const_t() {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;
#line 80
$memory_5 = ptd::sim();
#line 80
$memory_6 = ptd::sim();
#line 80
$memory_4 = {key => $memory_5,uses => $memory_6,};
#line 80
undef($memory_5);
#line 80
undef($memory_6);
#line 80
$memory_3 = ptd::rec($memory_4);
#line 80
undef($memory_4);
#line 80
$memory_2 = ptd::arr($memory_3);
#line 80
undef($memory_3);
#line 80
$memory_4 = ptd::sim();
#line 80
$memory_3 = ptd::hash($memory_4);
#line 80
undef($memory_4);
#line 80
$memory_5 = ptd::sim();
#line 80
$memory_4 = ptd::arr($memory_5);
#line 80
undef($memory_5);
#line 80
$memory_7 = ptd::sim();
#line 80
$memory_6 = ptd::hash($memory_7);
#line 80
undef($memory_7);
#line 80
$memory_5 = ptd::hash($memory_6);
#line 80
undef($memory_6);
#line 80
$memory_1 = {arr => $memory_2,hash => $memory_3,holes => $memory_4,module_consts => $memory_5,};
#line 80
undef($memory_2);
#line 80
undef($memory_3);
#line 80
undef($memory_4);
#line 80
undef($memory_5);
#line 80
$memory_0 = ptd::rec($memory_1);
#line 80
undef($memory_1);
#line 80
return $memory_0;
#line 80
undef($memory_0);
#line 80
return;
}

my $_global_const_t;
sub generator_c::global_const_t() {
	$_global_const_t = generator_c::__global_const_t() unless defined $_global_const_t;
	return $_global_const_t;
}

sub generator_c::__state_t() {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;
#line 90
$memory_2 = {
	module => "generator_c",
	name => "global_const_t",
};
#line 90
$memory_2 = c_rt_lib::ov_mk_arg('ref', $memory_2);
#line 90
$memory_3 = ptd::sim();
#line 90
$memory_4 = ptd::sim();
#line 90
$memory_5 = ptd::sim();
#line 90
$memory_6 = {
	module => "generator_c",
	name => "fun_args_t",
};
#line 90
$memory_6 = c_rt_lib::ov_mk_arg('ref', $memory_6);
#line 90
$memory_9 = {
	module => "generator_c",
	name => "const_t",
};
#line 90
$memory_9 = c_rt_lib::ov_mk_arg('ref', $memory_9);
#line 90
$memory_10 = {
	module => "generator_c",
	name => "const_t",
};
#line 90
$memory_10 = c_rt_lib::ov_mk_arg('ref', $memory_10);
#line 90
$memory_11 = ptd::sim();
#line 90
$memory_8 = {sim => $memory_9,singleton => $memory_10,dynamic_nr => $memory_11,};
#line 90
undef($memory_9);
#line 90
undef($memory_10);
#line 90
undef($memory_11);
#line 90
$memory_7 = ptd::rec($memory_8);
#line 90
undef($memory_8);
#line 90
$memory_1 = {global_const => $memory_2,header => $memory_3,ret => $memory_4,mod_name => $memory_5,fun_args => $memory_6,const => $memory_7,};
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
$memory_0 = ptd::rec($memory_1);
#line 90
undef($memory_1);
#line 90
return $memory_0;
#line 90
undef($memory_0);
#line 90
return;
}

my $_state_t;
sub generator_c::state_t() {
	$_state_t = generator_c::__state_t() unless defined $_state_t;
	return $_state_t;
}

sub generator_c::__get_empty_state() {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;
#line 105
$memory_2 = [];
#line 105
$memory_3 = {};
#line 105
$memory_4 = [];
#line 105
$memory_5 = {};
#line 105
$memory_1 = {arr => $memory_2,hash => $memory_3,holes => $memory_4,module_consts => $memory_5,};
#line 105
undef($memory_2);
#line 105
undef($memory_3);
#line 105
undef($memory_4);
#line 105
undef($memory_5);
#line 105
$memory_2 = "";
#line 105
$memory_3 = "";
#line 105
$memory_4 = [];
#line 105
$memory_6 = 0;
#line 105
$memory_8 = [];
#line 105
$memory_9 = {};
#line 105
$memory_7 = {arr => $memory_8,hash => $memory_9,};
#line 105
undef($memory_8);
#line 105
undef($memory_9);
#line 105
$memory_9 = [];
#line 105
$memory_10 = {};
#line 105
$memory_8 = {arr => $memory_9,hash => $memory_10,};
#line 105
undef($memory_9);
#line 105
undef($memory_10);
#line 105
$memory_5 = {dynamic_nr => $memory_6,sim => $memory_7,singleton => $memory_8,};
#line 105
undef($memory_6);
#line 105
undef($memory_7);
#line 105
undef($memory_8);
#line 105
$memory_6 = "";
#line 105
$memory_0 = {global_const => $memory_1,ret => $memory_2,header => $memory_3,fun_args => $memory_4,const => $memory_5,mod_name => $memory_6,};
#line 105
undef($memory_1);
#line 105
undef($memory_2);
#line 105
undef($memory_3);
#line 105
undef($memory_4);
#line 105
undef($memory_5);
#line 105
undef($memory_6);
#line 105
return $memory_0;
#line 105
undef($memory_0);
#line 105
return;
}

my $_get_empty_state;
sub generator_c::get_empty_state() {
	$_get_empty_state = generator_c::__get_empty_state() unless defined $_get_empty_state;
	return $_get_empty_state;
}

sub generator_c_priv::print($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];
#line 120
$memory_2 = "ret";
#line 120
$memory_2 = c_rt_lib::get_ref_hash($memory_0, $memory_2);
#line 120
$memory_2 = $memory_2 . $memory_1;
#line 120
$memory_3 = "ret";
#line 120
c_rt_lib::set_ref_hash($memory_0, $memory_3, $memory_2);
#line 120
undef($memory_3);
#line 120
undef($memory_2);
#line 120
undef($memory_1);
#line 120
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub generator_c_priv::print_to_header($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];
#line 124
$memory_2 = "header";
#line 124
$memory_2 = c_rt_lib::get_ref_hash($memory_0, $memory_2);
#line 124
$memory_2 = $memory_2 . $memory_1;
#line 124
$memory_3 = "header";
#line 124
c_rt_lib::set_ref_hash($memory_0, $memory_3, $memory_2);
#line 124
undef($memory_3);
#line 124
undef($memory_2);
#line 124
undef($memory_1);
#line 124
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub generator_c_priv::println_to_header($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];
#line 128
$memory_2 = string::lf();
#line 128
$memory_2 = $memory_1 . $memory_2;
#line 128
$memory_3 = "header";
#line 128
$memory_3 = c_rt_lib::get_ref_hash($memory_0, $memory_3);
#line 128
$memory_3 = $memory_3 . $memory_2;
#line 128
$memory_4 = "header";
#line 128
c_rt_lib::set_ref_hash($memory_0, $memory_4, $memory_3);
#line 128
undef($memory_4);
#line 128
undef($memory_2);
#line 128
undef($memory_3);
#line 128
undef($memory_1);
#line 128
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub generator_c_priv::__arg_t() {
my $memory_0;
#line 132
$memory_0 = "ImmT ";
#line 132
return $memory_0;
#line 132
undef($memory_0);
#line 132
return;
}

my $_arg_t;
sub generator_c_priv::arg_t() {
	$_arg_t = generator_c_priv::__arg_t() unless defined $_arg_t;
	return $_arg_t;
}

sub generator_c_priv::println($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];
#line 136
$memory_2 = "ret";
#line 136
$memory_2 = c_rt_lib::get_ref_hash($memory_0, $memory_2);
#line 136
$memory_2 = $memory_2 . $memory_1;
#line 136
$memory_3 = "ret";
#line 136
c_rt_lib::set_ref_hash($memory_0, $memory_3, $memory_2);
#line 136
undef($memory_3);
#line 136
undef($memory_2);
#line 137
$memory_2 = string::lf();
#line 137
$memory_3 = "ret";
#line 137
$memory_3 = c_rt_lib::get_ref_hash($memory_0, $memory_3);
#line 137
$memory_3 = $memory_3 . $memory_2;
#line 137
$memory_4 = "ret";
#line 137
c_rt_lib::set_ref_hash($memory_0, $memory_4, $memory_3);
#line 137
undef($memory_4);
#line 137
undef($memory_2);
#line 137
undef($memory_3);
#line 137
undef($memory_1);
#line 137
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub generator_c_priv::get_reg($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];
#line 141
$memory_2 = $memory_0->{'fun_args'};
#line 142
$memory_3 = array::len($memory_2);
#line 142
$memory_3 = c_rt_lib::to_nl($memory_3 > $memory_1);
#line 142
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 142
if (c_rt_lib::check_true($memory_4)) {goto label_3;}
#line 142
$memory_3 = $memory_2->[$memory_1];
#line 142
$memory_3 = c_rt_lib::ov_is($memory_3, 'ref');
#line 142
label_3:
#line 142
undef($memory_4);
#line 142
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 142
if (c_rt_lib::check_true($memory_3)) {goto label_2;}
#line 143
$memory_4 = "*___ref___";
#line 143
$memory_4 = $memory_4 . $memory_1;
#line 143
undef($memory_1);
#line 143
undef($memory_2);
#line 143
undef($memory_3);
#line 143
$_[0] = $memory_0;return $memory_4;
#line 143
undef($memory_4);
#line 144
goto label_2;
#line 144
label_2:
#line 144
undef($memory_3);
#line 145
$memory_3 = "___nl__";
#line 145
$memory_3 = $memory_3 . $memory_1;
#line 145
undef($memory_1);
#line 145
undef($memory_2);
#line 145
$_[0] = $memory_0;return $memory_3;
#line 145
undef($memory_3);
#line 145
undef($memory_2);
#line 145
undef($memory_1);
#line 145
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub generator_c_priv::get_reg_ref($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];
#line 148
$memory_2 = $memory_0->{'fun_args'};
#line 149
$memory_3 = array::len($memory_2);
#line 149
$memory_3 = c_rt_lib::to_nl($memory_3 > $memory_1);
#line 149
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 149
if (c_rt_lib::check_true($memory_4)) {goto label_3;}
#line 149
$memory_3 = $memory_2->[$memory_1];
#line 149
$memory_3 = c_rt_lib::ov_is($memory_3, 'ref');
#line 149
label_3:
#line 149
undef($memory_4);
#line 149
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 149
if (c_rt_lib::check_true($memory_3)) {goto label_2;}
#line 150
$memory_4 = "___ref___";
#line 150
$memory_4 = $memory_4 . $memory_1;
#line 150
undef($memory_1);
#line 150
undef($memory_2);
#line 150
undef($memory_3);
#line 150
$_[0] = $memory_0;return $memory_4;
#line 150
undef($memory_4);
#line 151
goto label_2;
#line 151
label_2:
#line 151
undef($memory_3);
#line 152
$memory_3 = "&___nl__";
#line 152
$memory_3 = $memory_3 . $memory_1;
#line 152
undef($memory_1);
#line 152
undef($memory_2);
#line 152
$_[0] = $memory_0;return $memory_3;
#line 152
undef($memory_3);
#line 152
undef($memory_2);
#line 152
undef($memory_1);
#line 152
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub generator_c_priv::get_string($) {
my $memory_0;my $memory_1;my $memory_2;$memory_0 = $_[0];
#line 155
$memory_1 = "\"";
#line 155
$memory_1 = $memory_1 . $memory_0;
#line 155
$memory_2 = "\"";
#line 155
$memory_1 = $memory_1 . $memory_2;
#line 155
undef($memory_2);
#line 155
undef($memory_0);
#line 155
return $memory_1;
#line 155
undef($memory_1);
#line 155
undef($memory_0);
#line 155
return;
}

sub generator_c::__module_out_t() {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;
#line 159
$memory_2 = ptd::sim();
#line 159
$memory_3 = ptd::sim();
#line 159
$memory_1 = {c => $memory_2,h => $memory_3,};
#line 159
undef($memory_2);
#line 159
undef($memory_3);
#line 159
$memory_0 = ptd::rec($memory_1);
#line 159
undef($memory_1);
#line 159
return $memory_0;
#line 159
undef($memory_0);
#line 159
return;
}

my $_module_out_t;
sub generator_c::module_out_t() {
	$_module_out_t = generator_c::__module_out_t() unless defined $_module_out_t;
	return $_module_out_t;
}

sub generator_c::__out_t() {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;
#line 163
$memory_3 = {
	module => "generator_c",
	name => "module_out_t",
};
#line 163
$memory_3 = c_rt_lib::ov_mk_arg('ref', $memory_3);
#line 163
$memory_2 = ptd::hash($memory_3);
#line 163
undef($memory_3);
#line 163
$memory_3 = {
	module => "generator_c",
	name => "module_out_t",
};
#line 163
$memory_3 = c_rt_lib::ov_mk_arg('ref', $memory_3);
#line 163
$memory_1 = {modules => $memory_2,global_const => $memory_3,};
#line 163
undef($memory_2);
#line 163
undef($memory_3);
#line 163
$memory_0 = ptd::rec($memory_1);
#line 163
undef($memory_1);
#line 163
return $memory_0;
#line 163
undef($memory_0);
#line 163
return;
}

my $_out_t;
sub generator_c::out_t() {
	$_out_t = generator_c::__out_t() unless defined $_out_t;
	return $_out_t;
}

sub generator_c::generate($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;my $memory_13;my $memory_14;my $memory_15;$memory_0 = $_[0];$memory_1 = $_[1];Scalar::Util::weaken($_[1]) if ref($_[1]);
#line 170
$memory_2 = {};
#line 171
$memory_3 = [];
#line 172
$memory_6 = c_rt_lib::init_iter($memory_0);
#line 172
label_3:
#line 172
$memory_4 = c_rt_lib::is_end_hash($memory_6);
#line 172
if (c_rt_lib::check_true($memory_4)) {goto label_1;}
#line 172
$memory_4 = c_rt_lib::get_key_iter($memory_6);
#line 172
$memory_5 = c_rt_lib::hash_get_value($memory_0, $memory_4);
#line 173
array::push($memory_3, $memory_4);
#line 174
$memory_6 = c_rt_lib::next_iter($memory_6);
#line 174
goto label_3;
#line 174
label_1:
#line 174
undef($memory_4);
#line 174
undef($memory_5);
#line 174
undef($memory_6);
#line 175
array::sort($memory_3);
#line 176
$memory_5 = 0;
#line 176
$memory_6 = 1;
#line 176
$memory_7 = c_rt_lib::array_len($memory_3);
#line 176
label_6:
#line 176
$memory_8 = c_rt_lib::to_nl($memory_5 >= $memory_7);
#line 176
if (c_rt_lib::check_true($memory_8)) {goto label_4;}
#line 176
$memory_4 = $memory_3->[$memory_5];
#line 177
$memory_9 = hash::get_value($memory_0, $memory_4);
#line 178
generator_c::clear_module_from_state($memory_1, $memory_4);
#line 179
$memory_10 = "global_const";
#line 179
$memory_10 = c_rt_lib::get_ref_hash($memory_1, $memory_10);
#line 179
$memory_11 = "module_consts";
#line 179
$memory_11 = c_rt_lib::get_ref_hash($memory_10, $memory_11);
#line 179
$memory_12 = {};
#line 179
hash::set_value($memory_11, $memory_4, $memory_12);
#line 179
undef($memory_12);
#line 179
$memory_12 = "module_consts";
#line 179
c_rt_lib::set_ref_hash($memory_10, $memory_12, $memory_11);
#line 179
$memory_12 = "global_const";
#line 179
c_rt_lib::set_ref_hash($memory_1, $memory_12, $memory_10);
#line 179
undef($memory_12);
#line 179
undef($memory_10);
#line 179
undef($memory_11);
#line 180
$memory_10 = "";
#line 180
$memory_11 = $memory_10;
#line 180
 if (c_rt_lib::get_hashcount($memory_1) > 1) {$memory_1 = {%{$memory_1}};}$memory_1->{'ret'} = $memory_11;
#line 180
undef($memory_10);
#line 180
undef($memory_11);
#line 181
$memory_10 = "";
#line 181
$memory_11 = $memory_10;
#line 181
 if (c_rt_lib::get_hashcount($memory_1) > 1) {$memory_1 = {%{$memory_1}};}$memory_1->{'header'} = $memory_11;
#line 181
undef($memory_10);
#line 181
undef($memory_11);
#line 182
$memory_10 = [];
#line 182
$memory_11 = $memory_10;
#line 182
 if (c_rt_lib::get_hashcount($memory_1) > 1) {$memory_1 = {%{$memory_1}};}$memory_1->{'fun_args'} = $memory_11;
#line 182
undef($memory_10);
#line 182
undef($memory_11);
#line 183
$memory_11 = 0;
#line 183
$memory_13 = [];
#line 183
$memory_14 = {};
#line 183
$memory_12 = {arr => $memory_13,hash => $memory_14,};
#line 183
undef($memory_13);
#line 183
undef($memory_14);
#line 183
$memory_14 = [];
#line 183
$memory_15 = {};
#line 183
$memory_13 = {arr => $memory_14,hash => $memory_15,};
#line 183
undef($memory_14);
#line 183
undef($memory_15);
#line 183
$memory_10 = {dynamic_nr => $memory_11,sim => $memory_12,singleton => $memory_13,};
#line 183
undef($memory_11);
#line 183
undef($memory_12);
#line 183
undef($memory_13);
#line 183
$memory_11 = $memory_10;
#line 183
 if (c_rt_lib::get_hashcount($memory_1) > 1) {$memory_1 = {%{$memory_1}};}$memory_1->{'const'} = $memory_11;
#line 183
undef($memory_10);
#line 183
undef($memory_11);
#line 188
$memory_10 = $memory_4;
#line 188
 if (c_rt_lib::get_hashcount($memory_1) > 1) {$memory_1 = {%{$memory_1}};}$memory_1->{'mod_name'} = $memory_10;
#line 188
undef($memory_10);
#line 189
generator_c_priv::print_mod($memory_1, $memory_9);
#line 190
$memory_11 = $memory_1->{'ret'};
#line 190
$memory_12 = $memory_1->{'header'};
#line 190
$memory_10 = {c => $memory_11,h => $memory_12,};
#line 190
undef($memory_11);
#line 190
undef($memory_12);
#line 190
hash::set_value($memory_2, $memory_4, $memory_10);
#line 190
undef($memory_10);
#line 190
undef($memory_9);
#line 191
$memory_5 = $memory_5 + $memory_6;
#line 191
goto label_6;
#line 191
label_4:
#line 191
undef($memory_4);
#line 191
undef($memory_5);
#line 191
undef($memory_6);
#line 191
undef($memory_7);
#line 191
undef($memory_8);
#line 192
$memory_5 = generator_c_priv::generate_global_const_files($memory_1);
#line 192
$memory_4 = {modules => $memory_2,global_const => $memory_5,};
#line 192
undef($memory_5);
#line 192
undef($memory_0);
#line 192
undef($memory_2);
#line 192
undef($memory_3);
#line 192
$_[1] = $memory_1;return $memory_4;
#line 192
undef($memory_4);
#line 192
undef($memory_2);
#line 192
undef($memory_3);
#line 192
undef($memory_0);
#line 192
$_[1] = $memory_1;return;
$_[1] = $memory_1;}

sub generator_c_priv::generate_global_const_files($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);
#line 196
$memory_1 = "";
#line 196
$memory_2 = $memory_1;
#line 196
 if (c_rt_lib::get_hashcount($memory_0) > 1) {$memory_0 = {%{$memory_0}};}$memory_0->{'ret'} = $memory_2;
#line 196
undef($memory_1);
#line 196
undef($memory_2);
#line 197
$memory_1 = "";
#line 197
$memory_2 = $memory_1;
#line 197
 if (c_rt_lib::get_hashcount($memory_0) > 1) {$memory_0 = {%{$memory_0}};}$memory_0->{'header'} = $memory_2;
#line 197
undef($memory_1);
#line 197
undef($memory_2);
#line 198
$memory_1 = [];
#line 198
$memory_2 = $memory_1;
#line 198
 if (c_rt_lib::get_hashcount($memory_0) > 1) {$memory_0 = {%{$memory_0}};}$memory_0->{'fun_args'} = $memory_2;
#line 198
undef($memory_1);
#line 198
undef($memory_2);
#line 199
$memory_2 = 0;
#line 199
$memory_4 = [];
#line 199
$memory_5 = {};
#line 199
$memory_3 = {arr => $memory_4,hash => $memory_5,};
#line 199
undef($memory_4);
#line 199
undef($memory_5);
#line 199
$memory_5 = [];
#line 199
$memory_6 = {};
#line 199
$memory_4 = {arr => $memory_5,hash => $memory_6,};
#line 199
undef($memory_5);
#line 199
undef($memory_6);
#line 199
$memory_1 = {dynamic_nr => $memory_2,sim => $memory_3,singleton => $memory_4,};
#line 199
undef($memory_2);
#line 199
undef($memory_3);
#line 199
undef($memory_4);
#line 199
$memory_2 = $memory_1;
#line 199
 if (c_rt_lib::get_hashcount($memory_0) > 1) {$memory_0 = {%{$memory_0}};}$memory_0->{'const'} = $memory_2;
#line 199
undef($memory_1);
#line 199
undef($memory_2);
#line 204
$memory_1 = "";
#line 204
$memory_2 = $memory_1;
#line 204
 if (c_rt_lib::get_hashcount($memory_0) > 1) {$memory_0 = {%{$memory_0}};}$memory_0->{'mod_name'} = $memory_2;
#line 204
undef($memory_1);
#line 204
undef($memory_2);
#line 206
$memory_1 = generator_c_priv::get_cr();
#line 206
generator_c_priv::print_to_header($memory_0, $memory_1);
#line 206
undef($memory_1);
#line 207
$memory_1 = "#pragma once";
#line 207
generator_c_priv::println_to_header($memory_0, $memory_1);
#line 207
undef($memory_1);
#line 208
$memory_2 = "c_rt_lib";
#line 208
$memory_1 = generator_c_priv::get_include($memory_2);
#line 208
undef($memory_2);
#line 208
generator_c_priv::println_to_header($memory_0, $memory_1);
#line 208
undef($memory_1);
#line 211
$memory_1 = generator_c_priv::get_cr();
#line 211
generator_c_priv::print($memory_0, $memory_1);
#line 211
undef($memory_1);
#line 212
$memory_2 = "c_global_const";
#line 212
$memory_1 = generator_c_priv::get_include($memory_2);
#line 212
undef($memory_2);
#line 212
generator_c_priv::println($memory_0, $memory_1);
#line 212
undef($memory_1);
#line 214
$memory_1 = $memory_0->{'global_const'};
#line 214
$memory_1 = $memory_1->{'arr'};
#line 215
$memory_2 = array::len($memory_1);
#line 217
$memory_3 = "void ___global_const_init();";
#line 217
generator_c_priv::println_to_header($memory_0, $memory_3);
#line 217
undef($memory_3);
#line 218
$memory_3 = generator_c_priv::arg_t();
#line 218
$memory_4 = " ___get_global_const(int __nr);";
#line 218
$memory_3 = $memory_3 . $memory_4;
#line 218
undef($memory_4);
#line 218
generator_c_priv::println_to_header($memory_0, $memory_3);
#line 218
undef($memory_3);
#line 220
$memory_3 = "
static ";
#line 220
$memory_4 = generator_c_priv::arg_t();
#line 220
$memory_3 = $memory_3 . $memory_4;
#line 220
undef($memory_4);
#line 220
$memory_4 = " ___global_const__ = NULL;
static int ___global_const_init__ = 1;
static int ___global_const_offset;";
#line 220
$memory_3 = $memory_3 . $memory_4;
#line 220
undef($memory_4);
#line 220
generator_c_priv::println($memory_0, $memory_3);
#line 220
undef($memory_3);
#line 225
$memory_3 = "void ___global_const_init(){
if(___global_const_init__) {
___global_const_init__ = 0;
___global_const_offset = c_rt_lib0get_global_const_offset();
___global_const__ = alloc_mem(";
#line 225
$memory_3 = $memory_3 . $memory_2;
#line 225
$memory_4 = " * ___global_const_offset);
";
#line 225
$memory_3 = $memory_3 . $memory_4;
#line 225
undef($memory_4);
#line 225
generator_c_priv::println($memory_0, $memory_3);
#line 225
undef($memory_3);
#line 232
$memory_3 = 0;
#line 232
$memory_4 = 1;
#line 232
label_3:
#line 232
$memory_5 = c_rt_lib::to_nl($memory_3 >= $memory_2);
#line 232
if (c_rt_lib::check_true($memory_5)) {goto label_1;}
#line 233
$memory_7 = $memory_1->[$memory_3];
#line 233
$memory_7 = $memory_7->{'key'};
#line 233
$memory_8 = "___global_const__ + ___global_const_offset * ";
#line 233
$memory_8 = $memory_8 . $memory_3;
#line 233
$memory_6 = generator_c_priv::create_sim_to_memory($memory_7, $memory_8);
#line 233
undef($memory_8);
#line 233
undef($memory_7);
#line 233
$memory_7 = ";";
#line 233
$memory_6 = $memory_6 . $memory_7;
#line 233
undef($memory_7);
#line 233
generator_c_priv::println($memory_0, $memory_6);
#line 233
undef($memory_6);
#line 234
$memory_3 = $memory_3 + $memory_4;
#line 234
goto label_3;
#line 234
label_1:
#line 234
undef($memory_3);
#line 234
undef($memory_4);
#line 234
undef($memory_5);
#line 236
$memory_3 = "
";
#line 236
$memory_5 = "register_global_const";
#line 236
$memory_4 = generator_c_priv::get_lib_fun($memory_5);
#line 236
undef($memory_5);
#line 236
$memory_3 = $memory_3 . $memory_4;
#line 236
undef($memory_4);
#line 236
$memory_4 = "((";
#line 236
$memory_3 = $memory_3 . $memory_4;
#line 236
undef($memory_4);
#line 236
$memory_4 = generator_c_priv::arg_t();
#line 236
$memory_3 = $memory_3 . $memory_4;
#line 236
undef($memory_4);
#line 236
$memory_4 = ")___global_const__,(";
#line 236
$memory_3 = $memory_3 . $memory_4;
#line 236
undef($memory_4);
#line 236
$memory_4 = generator_c_priv::arg_t();
#line 236
$memory_3 = $memory_3 . $memory_4;
#line 236
undef($memory_4);
#line 236
$memory_4 = ")___global_const__ + ";
#line 236
$memory_3 = $memory_3 . $memory_4;
#line 236
undef($memory_4);
#line 236
$memory_3 = $memory_3 . $memory_2;
#line 236
$memory_4 = " * ___global_const_offset);
}}";
#line 236
$memory_3 = $memory_3 . $memory_4;
#line 236
undef($memory_4);
#line 236
generator_c_priv::println($memory_0, $memory_3);
#line 236
undef($memory_3);
#line 241
$memory_3 = generator_c_priv::arg_t();
#line 241
$memory_4 = "___get_global_const(int __nr) {
";
#line 241
$memory_3 = $memory_3 . $memory_4;
#line 241
undef($memory_4);
#line 241
$memory_4 = generator_c_priv::arg_t();
#line 241
$memory_3 = $memory_3 . $memory_4;
#line 241
undef($memory_4);
#line 241
$memory_4 = "ret = NULL;
";
#line 241
$memory_3 = $memory_3 . $memory_4;
#line 241
undef($memory_4);
#line 241
$memory_5 = "copy";
#line 241
$memory_7 = "&ret";
#line 241
$memory_8 = "(";
#line 241
$memory_9 = generator_c_priv::arg_t();
#line 241
$memory_8 = $memory_8 . $memory_9;
#line 241
undef($memory_9);
#line 241
$memory_9 = ")___global_const__ + ___global_const_offset * __nr";
#line 241
$memory_8 = $memory_8 . $memory_9;
#line 241
undef($memory_9);
#line 241
$memory_6 = [$memory_7,$memory_8];
#line 241
undef($memory_7);
#line 241
undef($memory_8);
#line 241
$memory_4 = generator_c_priv::get_fun_lib($memory_5, $memory_6);
#line 241
undef($memory_6);
#line 241
undef($memory_5);
#line 241
$memory_3 = $memory_3 . $memory_4;
#line 241
undef($memory_4);
#line 241
$memory_4 = ";
return ret;
}";
#line 241
$memory_3 = $memory_3 . $memory_4;
#line 241
undef($memory_4);
#line 241
generator_c_priv::println($memory_0, $memory_3);
#line 241
undef($memory_3);
#line 248
$memory_4 = $memory_0->{'ret'};
#line 248
$memory_5 = $memory_0->{'header'};
#line 248
$memory_3 = {c => $memory_4,h => $memory_5,};
#line 248
undef($memory_4);
#line 248
undef($memory_5);
#line 248
undef($memory_1);
#line 248
undef($memory_2);
#line 248
$_[0] = $memory_0;return $memory_3;
#line 248
undef($memory_3);
#line 248
undef($memory_1);
#line 248
undef($memory_2);
#line 248
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub generator_c_priv::get_include($) {
my $memory_0;my $memory_1;my $memory_2;$memory_0 = $_[0];
#line 252
$memory_1 = "#include \"";
#line 252
$memory_1 = $memory_1 . $memory_0;
#line 252
$memory_2 = ".h\"";
#line 252
$memory_1 = $memory_1 . $memory_2;
#line 252
undef($memory_2);
#line 252
undef($memory_0);
#line 252
return $memory_1;
#line 252
undef($memory_1);
#line 252
undef($memory_0);
#line 252
return;
}

sub generator_c_priv::__get_cr() {
my $memory_0;
#line 256
$memory_0 = "
/* (c) Atinea Sp z o. o.
 *  Stamp: nianio lang
 */
";
#line 256
return $memory_0;
#line 256
undef($memory_0);
#line 256
return;
}

my $_get_cr;
sub generator_c_priv::get_cr() {
	$_get_cr = generator_c_priv::__get_cr() unless defined $_get_cr;
	return $_get_cr;
}

sub generator_c_priv::get_function_name($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;$memory_0 = $_[0];$memory_1 = $_[1];
#line 264
$memory_3 = $memory_0->{'access'};
#line 264
$memory_4 = c_rt_lib::ov_is($memory_3, 'pub');
#line 264
if (c_rt_lib::check_true($memory_4)) {goto label_2;}
#line 266
$memory_4 = c_rt_lib::ov_is($memory_3, 'priv');
#line 266
if (c_rt_lib::check_true($memory_4)) {goto label_3;}
#line 266
$memory_4 = "NOMATCHALERT";
#line 266
$memory_4 = [$memory_4,$memory_3];
#line 266
die(dfile::ssave($memory_4));
#line 264
label_2:
#line 265
$memory_2 = $memory_1;
#line 266
goto label_1;
#line 266
label_3:
#line 267
$memory_5 = "";
#line 267
$memory_2 = $memory_5;
#line 267
undef($memory_5);
#line 268
goto label_1;
#line 268
label_1:
#line 268
undef($memory_3);
#line 268
undef($memory_4);
#line 269
$memory_4 = $memory_0->{'name'};
#line 269
$memory_3 = generator_c_priv::get_fun_name($memory_2, $memory_4, $memory_1);
#line 269
undef($memory_4);
#line 269
undef($memory_0);
#line 269
undef($memory_1);
#line 269
undef($memory_2);
#line 269
return $memory_3;
#line 269
undef($memory_3);
#line 269
undef($memory_2);
#line 269
undef($memory_0);
#line 269
undef($memory_1);
#line 269
return;
}

sub generator_c_priv::get_function_header($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;my $memory_13;$memory_0 = $_[0];$memory_1 = $_[1];
#line 272
$memory_2 = "";
#line 273
$memory_3 = generator_c_priv::get_function_name($memory_0, $memory_1);
#line 274
$memory_4 = generator_c_priv::arg_t();
#line 274
$memory_4 = $memory_4 . $memory_3;
#line 274
$memory_5 = "(";
#line 274
$memory_4 = $memory_4 . $memory_5;
#line 274
undef($memory_5);
#line 274
$memory_2 = $memory_2 . $memory_4;
#line 274
undef($memory_4);
#line 275
$memory_4 = 0;
#line 276
$memory_5 = $memory_0->{'args_type'};
#line 276
$memory_7 = 0;
#line 276
$memory_8 = 1;
#line 276
$memory_9 = c_rt_lib::array_len($memory_5);
#line 276
label_3:
#line 276
$memory_10 = c_rt_lib::to_nl($memory_7 >= $memory_9);
#line 276
if (c_rt_lib::check_true($memory_10)) {goto label_1;}
#line 276
$memory_6 = $memory_5->[$memory_7];
#line 277
$memory_11 = 0;
#line 277
$memory_11 = c_rt_lib::to_nl($memory_11 == $memory_4);
#line 277
$memory_11 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_11));
#line 277
$memory_11 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_11));
#line 277
if (c_rt_lib::check_true($memory_11)) {goto label_5;}
#line 277
$memory_12 = ",";
#line 277
$memory_2 = $memory_2 . $memory_12;
#line 277
undef($memory_12);
#line 277
goto label_5;
#line 277
label_5:
#line 277
undef($memory_11);
#line 278
$memory_11 = c_rt_lib::ov_is($memory_6, 'val');
#line 278
if (c_rt_lib::check_true($memory_11)) {goto label_7;}
#line 280
$memory_11 = c_rt_lib::ov_is($memory_6, 'ref');
#line 280
if (c_rt_lib::check_true($memory_11)) {goto label_8;}
#line 280
$memory_11 = "NOMATCHALERT";
#line 280
$memory_11 = [$memory_11,$memory_6];
#line 280
die(dfile::ssave($memory_11));
#line 278
label_7:
#line 279
$memory_12 = generator_c_priv::arg_t();
#line 279
$memory_13 = "___nl__";
#line 279
$memory_12 = $memory_12 . $memory_13;
#line 279
undef($memory_13);
#line 279
$memory_12 = $memory_12 . $memory_4;
#line 279
$memory_2 = $memory_2 . $memory_12;
#line 279
undef($memory_12);
#line 280
goto label_6;
#line 280
label_8:
#line 281
$memory_12 = generator_c_priv::arg_t();
#line 281
$memory_13 = "* ___ref___";
#line 281
$memory_12 = $memory_12 . $memory_13;
#line 281
undef($memory_13);
#line 281
$memory_12 = $memory_12 . $memory_4;
#line 281
$memory_2 = $memory_2 . $memory_12;
#line 281
undef($memory_12);
#line 282
goto label_6;
#line 282
label_6:
#line 282
undef($memory_11);
#line 283
$memory_11 = 1;
#line 283
$memory_4 = $memory_4 + $memory_11;
#line 283
undef($memory_11);
#line 284
$memory_7 = $memory_7 + $memory_8;
#line 284
goto label_3;
#line 284
label_1:
#line 284
undef($memory_5);
#line 284
undef($memory_6);
#line 284
undef($memory_7);
#line 284
undef($memory_8);
#line 284
undef($memory_9);
#line 284
undef($memory_10);
#line 286
$memory_5 = ")";
#line 286
$memory_2 = $memory_2 . $memory_5;
#line 286
undef($memory_5);
#line 288
undef($memory_0);
#line 288
undef($memory_1);
#line 288
undef($memory_3);
#line 288
undef($memory_4);
#line 288
return $memory_2;
#line 288
undef($memory_2);
#line 288
undef($memory_3);
#line 288
undef($memory_4);
#line 288
undef($memory_0);
#line 288
undef($memory_1);
#line 288
return;
}

sub generator_c_priv::get_const($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];
#line 291
$memory_2 = 1;
#line 291
$memory_2 = -$memory_2;
#line 292
$memory_4 = $memory_0->{'hash'};
#line 292
$memory_3 = hash::has_key($memory_4, $memory_1);
#line 292
undef($memory_4);
#line 292
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 292
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 292
if (c_rt_lib::check_true($memory_3)) {goto label_2;}
#line 293
$memory_5 = $memory_0->{'arr'};
#line 293
$memory_4 = array::len($memory_5);
#line 293
undef($memory_5);
#line 293
$memory_2 = $memory_4;
#line 293
undef($memory_4);
#line 294
$memory_4 = "arr";
#line 294
$memory_4 = c_rt_lib::get_ref_hash($memory_0, $memory_4);
#line 294
array::push($memory_4, $memory_1);
#line 294
$memory_5 = "arr";
#line 294
c_rt_lib::set_ref_hash($memory_0, $memory_5, $memory_4);
#line 294
undef($memory_5);
#line 294
undef($memory_4);
#line 295
$memory_4 = "hash";
#line 295
$memory_4 = c_rt_lib::get_ref_hash($memory_0, $memory_4);
#line 295
hash::set_value($memory_4, $memory_1, $memory_2);
#line 295
$memory_5 = "hash";
#line 295
c_rt_lib::set_ref_hash($memory_0, $memory_5, $memory_4);
#line 295
undef($memory_5);
#line 295
undef($memory_4);
#line 296
goto label_1;
#line 296
label_2:
#line 297
$memory_5 = $memory_0->{'hash'};
#line 297
$memory_4 = hash::get_value($memory_5, $memory_1);
#line 297
undef($memory_5);
#line 297
$memory_2 = $memory_4;
#line 297
undef($memory_4);
#line 298
goto label_1;
#line 298
label_1:
#line 298
undef($memory_3);
#line 299
undef($memory_1);
#line 299
$_[0] = $memory_0;return $memory_2;
#line 299
undef($memory_2);
#line 299
undef($memory_1);
#line 299
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub generator_c_priv::insert_const_to_modules_hash($$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];$memory_2 = $_[2];
#line 302
$memory_4 = $memory_0->{'module_consts'};
#line 302
$memory_3 = hash::get_value($memory_4, $memory_2);
#line 302
undef($memory_4);
#line 303
$memory_4 = "";
#line 303
hash::set_value($memory_3, $memory_1, $memory_4);
#line 303
undef($memory_4);
#line 304
$memory_4 = "module_consts";
#line 304
$memory_4 = c_rt_lib::get_ref_hash($memory_0, $memory_4);
#line 304
hash::set_value($memory_4, $memory_2, $memory_3);
#line 304
$memory_5 = "module_consts";
#line 304
c_rt_lib::set_ref_hash($memory_0, $memory_5, $memory_4);
#line 304
undef($memory_5);
#line 304
undef($memory_4);
#line 304
undef($memory_3);
#line 304
undef($memory_1);
#line 304
undef($memory_2);
#line 304
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub generator_c_priv::get_global_const($$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];$memory_2 = $_[2];
#line 307
$memory_3 = 1;
#line 307
$memory_3 = -$memory_3;
#line 308
$memory_5 = $memory_0->{'hash'};
#line 308
$memory_4 = hash::has_key($memory_5, $memory_1);
#line 308
undef($memory_5);
#line 308
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 308
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 308
if (c_rt_lib::check_true($memory_4)) {goto label_2;}
#line 309
$memory_6 = $memory_0->{'holes'};
#line 309
$memory_5 = array::len($memory_6);
#line 309
undef($memory_6);
#line 309
$memory_6 = 0;
#line 309
$memory_5 = c_rt_lib::to_nl($memory_5 > $memory_6);
#line 309
undef($memory_6);
#line 309
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 309
if (c_rt_lib::check_true($memory_5)) {goto label_4;}
#line 310
$memory_6 = $memory_0->{'holes'};
#line 310
$memory_8 = $memory_0->{'holes'};
#line 310
$memory_7 = array::len($memory_8);
#line 310
undef($memory_8);
#line 310
$memory_8 = 1;
#line 310
$memory_7 = $memory_7 - $memory_8;
#line 310
undef($memory_8);
#line 310
$memory_6 = $memory_6->[$memory_7];
#line 310
undef($memory_7);
#line 310
$memory_3 = $memory_6;
#line 310
undef($memory_6);
#line 311
$memory_6 = "holes";
#line 311
$memory_6 = c_rt_lib::get_ref_hash($memory_0, $memory_6);
#line 311
array::pop($memory_6);
#line 311
$memory_7 = "holes";
#line 311
c_rt_lib::set_ref_hash($memory_0, $memory_7, $memory_6);
#line 311
undef($memory_7);
#line 311
undef($memory_6);
#line 312
$memory_7 = 1;
#line 312
$memory_6 = {key => $memory_1,uses => $memory_7,};
#line 312
undef($memory_7);
#line 312
$memory_7 = "arr";
#line 312
$memory_7 = c_rt_lib::get_ref_hash($memory_0, $memory_7);
#line 312
$memory_8 = $memory_6;
#line 312
 if (c_rt_lib::get_arrcount($memory_7) > 1) {$memory_7 = [@{$memory_7}];}$memory_7->[$memory_3] = $memory_8;
#line 312
$memory_9 = "arr";
#line 312
c_rt_lib::set_ref_hash($memory_0, $memory_9, $memory_7);
#line 312
undef($memory_9);
#line 312
undef($memory_6);
#line 312
undef($memory_7);
#line 312
undef($memory_8);
#line 313
goto label_3;
#line 313
label_4:
#line 314
$memory_7 = $memory_0->{'arr'};
#line 314
$memory_6 = array::len($memory_7);
#line 314
undef($memory_7);
#line 314
$memory_3 = $memory_6;
#line 314
undef($memory_6);
#line 315
$memory_6 = "arr";
#line 315
$memory_6 = c_rt_lib::get_ref_hash($memory_0, $memory_6);
#line 315
$memory_8 = 1;
#line 315
$memory_7 = {key => $memory_1,uses => $memory_8,};
#line 315
undef($memory_8);
#line 315
array::push($memory_6, $memory_7);
#line 315
undef($memory_7);
#line 315
$memory_7 = "arr";
#line 315
c_rt_lib::set_ref_hash($memory_0, $memory_7, $memory_6);
#line 315
undef($memory_7);
#line 315
undef($memory_6);
#line 316
goto label_3;
#line 316
label_3:
#line 316
undef($memory_5);
#line 317
generator_c_priv::insert_const_to_modules_hash($memory_0, $memory_1, $memory_2);
#line 318
$memory_5 = "hash";
#line 318
$memory_5 = c_rt_lib::get_ref_hash($memory_0, $memory_5);
#line 318
hash::set_value($memory_5, $memory_1, $memory_3);
#line 318
$memory_6 = "hash";
#line 318
c_rt_lib::set_ref_hash($memory_0, $memory_6, $memory_5);
#line 318
undef($memory_6);
#line 318
undef($memory_5);
#line 319
goto label_1;
#line 319
label_2:
#line 320
$memory_6 = $memory_0->{'hash'};
#line 320
$memory_5 = hash::get_value($memory_6, $memory_1);
#line 320
undef($memory_6);
#line 320
$memory_3 = $memory_5;
#line 320
undef($memory_5);
#line 321
$memory_6 = $memory_0->{'module_consts'};
#line 321
$memory_5 = hash::get_value($memory_6, $memory_2);
#line 321
undef($memory_6);
#line 322
$memory_6 = hash::has_key($memory_5, $memory_1);
#line 322
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 322
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 322
if (c_rt_lib::check_true($memory_6)) {goto label_6;}
#line 323
$memory_7 = "arr";
#line 323
$memory_7 = c_rt_lib::get_ref_hash($memory_0, $memory_7);
#line 323
$memory_8 = c_rt_lib::get_ref_arr($memory_7, $memory_3);
#line 323
$memory_9 = "uses";
#line 323
$memory_9 = c_rt_lib::get_ref_hash($memory_8, $memory_9);
#line 323
$memory_10 = 1;
#line 323
$memory_9 = $memory_9 + $memory_10;
#line 323
$memory_11 = "uses";
#line 323
c_rt_lib::set_ref_hash($memory_8, $memory_11, $memory_9);
#line 323
c_rt_lib::set_ref_arr($memory_7, $memory_3, $memory_8);
#line 323
$memory_11 = "arr";
#line 323
c_rt_lib::set_ref_hash($memory_0, $memory_11, $memory_7);
#line 323
undef($memory_11);
#line 323
undef($memory_7);
#line 323
undef($memory_8);
#line 323
undef($memory_9);
#line 323
undef($memory_10);
#line 324
generator_c_priv::insert_const_to_modules_hash($memory_0, $memory_1, $memory_2);
#line 325
goto label_6;
#line 325
label_6:
#line 325
undef($memory_6);
#line 325
undef($memory_5);
#line 326
goto label_1;
#line 326
label_1:
#line 326
undef($memory_4);
#line 327
undef($memory_1);
#line 327
undef($memory_2);
#line 327
$_[0] = $memory_0;return $memory_3;
#line 327
undef($memory_3);
#line 327
undef($memory_1);
#line 327
undef($memory_2);
#line 327
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub generator_c::clear_module_from_state($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;my $memory_13;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];
#line 330
$memory_3 = $memory_0->{'global_const'};
#line 330
$memory_3 = $memory_3->{'module_consts'};
#line 330
$memory_2 = hash::has_key($memory_3, $memory_1);
#line 330
undef($memory_3);
#line 330
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 330
if (c_rt_lib::check_true($memory_2)) {goto label_2;}
#line 331
$memory_4 = $memory_0->{'global_const'};
#line 331
$memory_4 = $memory_4->{'module_consts'};
#line 331
$memory_3 = hash::get_value($memory_4, $memory_1);
#line 331
undef($memory_4);
#line 332
$memory_6 = c_rt_lib::init_iter($memory_3);
#line 332
label_5:
#line 332
$memory_4 = c_rt_lib::is_end_hash($memory_6);
#line 332
if (c_rt_lib::check_true($memory_4)) {goto label_3;}
#line 332
$memory_4 = c_rt_lib::get_key_iter($memory_6);
#line 332
$memory_5 = c_rt_lib::hash_get_value($memory_3, $memory_4);
#line 333
$memory_8 = $memory_0->{'global_const'};
#line 333
$memory_8 = $memory_8->{'hash'};
#line 333
$memory_7 = hash::get_value($memory_8, $memory_4);
#line 333
undef($memory_8);
#line 334
$memory_8 = "global_const";
#line 334
$memory_8 = c_rt_lib::get_ref_hash($memory_0, $memory_8);
#line 334
$memory_9 = "arr";
#line 334
$memory_9 = c_rt_lib::get_ref_hash($memory_8, $memory_9);
#line 334
$memory_10 = c_rt_lib::get_ref_arr($memory_9, $memory_7);
#line 334
$memory_11 = "uses";
#line 334
$memory_11 = c_rt_lib::get_ref_hash($memory_10, $memory_11);
#line 334
$memory_12 = 1;
#line 334
$memory_11 = $memory_11 - $memory_12;
#line 334
$memory_13 = "uses";
#line 334
c_rt_lib::set_ref_hash($memory_10, $memory_13, $memory_11);
#line 334
c_rt_lib::set_ref_arr($memory_9, $memory_7, $memory_10);
#line 334
$memory_13 = "arr";
#line 334
c_rt_lib::set_ref_hash($memory_8, $memory_13, $memory_9);
#line 334
$memory_13 = "global_const";
#line 334
c_rt_lib::set_ref_hash($memory_0, $memory_13, $memory_8);
#line 334
undef($memory_13);
#line 334
undef($memory_8);
#line 334
undef($memory_9);
#line 334
undef($memory_10);
#line 334
undef($memory_11);
#line 334
undef($memory_12);
#line 335
$memory_8 = $memory_0->{'global_const'};
#line 335
$memory_8 = $memory_8->{'arr'};
#line 335
$memory_8 = $memory_8->[$memory_7];
#line 335
$memory_8 = $memory_8->{'uses'};
#line 335
$memory_9 = 0;
#line 335
$memory_8 = c_rt_lib::to_nl($memory_8 == $memory_9);
#line 335
undef($memory_9);
#line 335
$memory_8 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 335
if (c_rt_lib::check_true($memory_8)) {goto label_7;}
#line 336
$memory_9 = "global_const";
#line 336
$memory_9 = c_rt_lib::get_ref_hash($memory_0, $memory_9);
#line 336
$memory_10 = "hash";
#line 336
$memory_10 = c_rt_lib::get_ref_hash($memory_9, $memory_10);
#line 336
hash::delete($memory_10, $memory_4);
#line 336
$memory_11 = "hash";
#line 336
c_rt_lib::set_ref_hash($memory_9, $memory_11, $memory_10);
#line 336
$memory_11 = "global_const";
#line 336
c_rt_lib::set_ref_hash($memory_0, $memory_11, $memory_9);
#line 336
undef($memory_11);
#line 336
undef($memory_9);
#line 336
undef($memory_10);
#line 337
$memory_9 = "global_const";
#line 337
$memory_9 = c_rt_lib::get_ref_hash($memory_0, $memory_9);
#line 337
$memory_10 = "holes";
#line 337
$memory_10 = c_rt_lib::get_ref_hash($memory_9, $memory_10);
#line 337
array::push($memory_10, $memory_7);
#line 337
$memory_11 = "holes";
#line 337
c_rt_lib::set_ref_hash($memory_9, $memory_11, $memory_10);
#line 337
$memory_11 = "global_const";
#line 337
c_rt_lib::set_ref_hash($memory_0, $memory_11, $memory_9);
#line 337
undef($memory_11);
#line 337
undef($memory_9);
#line 337
undef($memory_10);
#line 338
goto label_7;
#line 338
label_7:
#line 338
undef($memory_8);
#line 338
undef($memory_7);
#line 339
$memory_6 = c_rt_lib::next_iter($memory_6);
#line 339
goto label_5;
#line 339
label_3:
#line 339
undef($memory_4);
#line 339
undef($memory_5);
#line 339
undef($memory_6);
#line 340
$memory_4 = "global_const";
#line 340
$memory_4 = c_rt_lib::get_ref_hash($memory_0, $memory_4);
#line 340
$memory_5 = "module_consts";
#line 340
$memory_5 = c_rt_lib::get_ref_hash($memory_4, $memory_5);
#line 340
hash::delete($memory_5, $memory_1);
#line 340
$memory_6 = "module_consts";
#line 340
c_rt_lib::set_ref_hash($memory_4, $memory_6, $memory_5);
#line 340
$memory_6 = "global_const";
#line 340
c_rt_lib::set_ref_hash($memory_0, $memory_6, $memory_4);
#line 340
undef($memory_6);
#line 340
undef($memory_4);
#line 340
undef($memory_5);
#line 340
undef($memory_3);
#line 341
goto label_2;
#line 341
label_2:
#line 341
undef($memory_2);
#line 341
undef($memory_1);
#line 341
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub generator_c_priv::get_const_sim($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];
#line 344
$memory_3 = "global_const";
#line 344
$memory_3 = c_rt_lib::get_ref_hash($memory_0, $memory_3);
#line 344
$memory_4 = $memory_0->{'mod_name'};
#line 344
$memory_2 = generator_c_priv::get_global_const($memory_3, $memory_1, $memory_4);
#line 344
undef($memory_4);
#line 344
$memory_4 = "global_const";
#line 344
c_rt_lib::set_ref_hash($memory_0, $memory_4, $memory_3);
#line 344
undef($memory_4);
#line 344
undef($memory_3);
#line 345
$memory_3 = "___get_global_const(";
#line 345
$memory_3 = $memory_3 . $memory_2;
#line 345
$memory_4 = ")";
#line 345
$memory_3 = $memory_3 . $memory_4;
#line 345
undef($memory_4);
#line 345
undef($memory_1);
#line 345
undef($memory_2);
#line 345
$_[0] = $memory_0;return $memory_3;
#line 345
undef($memory_3);
#line 345
undef($memory_2);
#line 345
undef($memory_1);
#line 345
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub generator_c_priv::get_const_singleton($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];
#line 348
$memory_3 = "const";
#line 348
$memory_3 = c_rt_lib::get_ref_hash($memory_0, $memory_3);
#line 348
$memory_4 = "singleton";
#line 348
$memory_4 = c_rt_lib::get_ref_hash($memory_3, $memory_4);
#line 348
$memory_2 = generator_c_priv::get_const($memory_4, $memory_1);
#line 348
$memory_5 = "singleton";
#line 348
c_rt_lib::set_ref_hash($memory_3, $memory_5, $memory_4);
#line 348
$memory_5 = "const";
#line 348
c_rt_lib::set_ref_hash($memory_0, $memory_5, $memory_3);
#line 348
undef($memory_5);
#line 348
undef($memory_3);
#line 348
undef($memory_4);
#line 349
$memory_4 = "";
#line 349
$memory_5 = "__const__sing";
#line 349
$memory_6 = $memory_0->{'mod_name'};
#line 349
$memory_3 = generator_c_priv::get_fun_name($memory_4, $memory_5, $memory_6);
#line 349
undef($memory_6);
#line 349
undef($memory_5);
#line 349
undef($memory_4);
#line 349
$memory_4 = "(";
#line 349
$memory_3 = $memory_3 . $memory_4;
#line 349
undef($memory_4);
#line 349
$memory_3 = $memory_3 . $memory_2;
#line 349
$memory_4 = ")";
#line 349
$memory_3 = $memory_3 . $memory_4;
#line 349
undef($memory_4);
#line 349
undef($memory_1);
#line 349
undef($memory_2);
#line 349
$_[0] = $memory_0;return $memory_3;
#line 349
undef($memory_3);
#line 349
undef($memory_2);
#line 349
undef($memory_1);
#line 349
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub generator_c_priv::get_func_ptr_header($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;$memory_0 = $_[0];$memory_1 = $_[1];
#line 352
$memory_2 = generator_c_priv::arg_t();
#line 352
$memory_3 = generator_c_priv::get_function_name($memory_0, $memory_1);
#line 352
$memory_2 = $memory_2 . $memory_3;
#line 352
undef($memory_3);
#line 352
$memory_3 = "0ptr(int _num, ImmT *_tab)";
#line 352
$memory_2 = $memory_2 . $memory_3;
#line 352
undef($memory_3);
#line 352
undef($memory_0);
#line 352
undef($memory_1);
#line 352
return $memory_2;
#line 352
undef($memory_2);
#line 352
undef($memory_0);
#line 352
undef($memory_1);
#line 352
return;
}

sub generator_c_priv::print_mod($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;my $memory_13;my $memory_14;my $memory_15;my $memory_16;my $memory_17;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];
#line 356
$memory_2 = generator_c_priv::get_cr();
#line 356
generator_c_priv::print_to_header($memory_0, $memory_2);
#line 356
undef($memory_2);
#line 357
$memory_2 = "#pragma once";
#line 357
$memory_3 = string::lf();
#line 357
$memory_2 = $memory_2 . $memory_3;
#line 357
undef($memory_3);
#line 357
generator_c_priv::print_to_header($memory_0, $memory_2);
#line 357
undef($memory_2);
#line 358
$memory_3 = "c_rt_lib";
#line 358
$memory_2 = generator_c_priv::get_include($memory_3);
#line 358
undef($memory_3);
#line 358
$memory_3 = string::lf();
#line 358
$memory_2 = $memory_2 . $memory_3;
#line 358
undef($memory_3);
#line 358
generator_c_priv::print_to_header($memory_0, $memory_2);
#line 358
undef($memory_2);
#line 360
$memory_2 = generator_c_priv::get_cr();
#line 360
generator_c_priv::print($memory_0, $memory_2);
#line 360
undef($memory_2);
#line 361
$memory_3 = "c_rt_lib";
#line 361
$memory_2 = generator_c_priv::get_include($memory_3);
#line 361
undef($memory_3);
#line 361
generator_c_priv::println($memory_0, $memory_2);
#line 361
undef($memory_2);
#line 362
$memory_3 = "c_global_const";
#line 362
$memory_2 = generator_c_priv::get_include($memory_3);
#line 362
undef($memory_3);
#line 362
generator_c_priv::println($memory_0, $memory_2);
#line 362
undef($memory_2);
#line 363
$memory_3 = $memory_0->{'mod_name'};
#line 363
$memory_2 = generator_c_priv::get_include($memory_3);
#line 363
undef($memory_3);
#line 363
generator_c_priv::println($memory_0, $memory_2);
#line 363
undef($memory_2);
#line 365
$memory_2 = $memory_1->{'imports'};
#line 365
$memory_4 = 0;
#line 365
$memory_5 = 1;
#line 365
$memory_6 = c_rt_lib::array_len($memory_2);
#line 365
label_3:
#line 365
$memory_7 = c_rt_lib::to_nl($memory_4 >= $memory_6);
#line 365
if (c_rt_lib::check_true($memory_7)) {goto label_1;}
#line 365
$memory_3 = $memory_2->[$memory_4];
#line 366
$memory_8 = generator_c_priv::get_include($memory_3);
#line 366
generator_c_priv::println($memory_0, $memory_8);
#line 366
undef($memory_8);
#line 367
$memory_4 = $memory_4 + $memory_5;
#line 367
goto label_3;
#line 367
label_1:
#line 367
undef($memory_2);
#line 367
undef($memory_3);
#line 367
undef($memory_4);
#line 367
undef($memory_5);
#line 367
undef($memory_6);
#line 367
undef($memory_7);
#line 368
$memory_2 = "#line 1 \"";
#line 368
$memory_3 = $memory_0->{'mod_name'};
#line 368
$memory_2 = $memory_2 . $memory_3;
#line 368
undef($memory_3);
#line 368
$memory_3 = ".nl\"";
#line 368
$memory_2 = $memory_2 . $memory_3;
#line 368
undef($memory_3);
#line 368
$memory_3 = string::lf();
#line 368
$memory_2 = $memory_2 . $memory_3;
#line 368
undef($memory_3);
#line 368
generator_c_priv::println($memory_0, $memory_2);
#line 368
undef($memory_2);
#line 371
$memory_2 = "static ";
#line 371
$memory_3 = generator_c_priv::arg_t();
#line 371
$memory_2 = $memory_2 . $memory_3;
#line 371
undef($memory_3);
#line 371
$memory_3 = "*__const__f = NULL;";
#line 371
$memory_2 = $memory_2 . $memory_3;
#line 371
undef($memory_3);
#line 371
generator_c_priv::println($memory_0, $memory_2);
#line 371
undef($memory_2);
#line 372
$memory_2 = "void ";
#line 372
$memory_4 = "";
#line 372
$memory_5 = "__const__init";
#line 372
$memory_6 = $memory_0->{'mod_name'};
#line 372
$memory_3 = generator_c_priv::get_fun_name($memory_4, $memory_5, $memory_6);
#line 372
undef($memory_6);
#line 372
undef($memory_5);
#line 372
undef($memory_4);
#line 372
$memory_2 = $memory_2 . $memory_3;
#line 372
undef($memory_3);
#line 372
$memory_3 = "();";
#line 372
$memory_2 = $memory_2 . $memory_3;
#line 372
undef($memory_3);
#line 372
generator_c_priv::println($memory_0, $memory_2);
#line 372
undef($memory_2);
#line 373
$memory_2 = generator_c_priv::arg_t();
#line 373
$memory_4 = "";
#line 373
$memory_5 = "__const__sim";
#line 373
$memory_6 = $memory_0->{'mod_name'};
#line 373
$memory_3 = generator_c_priv::get_fun_name($memory_4, $memory_5, $memory_6);
#line 373
undef($memory_6);
#line 373
undef($memory_5);
#line 373
undef($memory_4);
#line 373
$memory_2 = $memory_2 . $memory_3;
#line 373
undef($memory_3);
#line 373
$memory_3 = "(int __nr);";
#line 373
$memory_2 = $memory_2 . $memory_3;
#line 373
undef($memory_3);
#line 373
generator_c_priv::println($memory_0, $memory_2);
#line 373
undef($memory_2);
#line 374
$memory_2 = generator_c_priv::arg_t();
#line 374
$memory_4 = "";
#line 374
$memory_5 = "__const__sing";
#line 374
$memory_6 = $memory_0->{'mod_name'};
#line 374
$memory_3 = generator_c_priv::get_fun_name($memory_4, $memory_5, $memory_6);
#line 374
undef($memory_6);
#line 374
undef($memory_5);
#line 374
undef($memory_4);
#line 374
$memory_2 = $memory_2 . $memory_3;
#line 374
undef($memory_3);
#line 374
$memory_3 = "(int __nr);";
#line 374
$memory_2 = $memory_2 . $memory_3;
#line 374
undef($memory_3);
#line 374
$memory_3 = string::lf();
#line 374
$memory_2 = $memory_2 . $memory_3;
#line 374
undef($memory_3);
#line 374
generator_c_priv::println($memory_0, $memory_2);
#line 374
undef($memory_2);
#line 376
$memory_2 = $memory_1->{'functions'};
#line 376
$memory_4 = 0;
#line 376
$memory_5 = 1;
#line 376
$memory_6 = c_rt_lib::array_len($memory_2);
#line 376
label_6:
#line 376
$memory_7 = c_rt_lib::to_nl($memory_4 >= $memory_6);
#line 376
if (c_rt_lib::check_true($memory_7)) {goto label_4;}
#line 376
$memory_3 = $memory_2->[$memory_4];
#line 377
$memory_9 = $memory_0->{'mod_name'};
#line 377
$memory_8 = generator_c_priv::get_function_header($memory_3, $memory_9);
#line 377
undef($memory_9);
#line 378
$memory_9 = $memory_3->{'access'};
#line 378
$memory_10 = c_rt_lib::ov_is($memory_9, 'pub');
#line 378
if (c_rt_lib::check_true($memory_10)) {goto label_8;}
#line 381
$memory_10 = c_rt_lib::ov_is($memory_9, 'priv');
#line 381
if (c_rt_lib::check_true($memory_10)) {goto label_9;}
#line 381
$memory_10 = "NOMATCHALERT";
#line 381
$memory_10 = [$memory_10,$memory_9];
#line 381
die(dfile::ssave($memory_10));
#line 378
label_8:
#line 379
$memory_11 = ";";
#line 379
$memory_11 = $memory_8 . $memory_11;
#line 379
$memory_12 = string::lf();
#line 379
$memory_11 = $memory_11 . $memory_12;
#line 379
undef($memory_12);
#line 379
generator_c_priv::print_to_header($memory_0, $memory_11);
#line 379
undef($memory_11);
#line 380
$memory_12 = $memory_0->{'mod_name'};
#line 380
$memory_11 = generator_c_priv::get_func_ptr_header($memory_3, $memory_12);
#line 380
undef($memory_12);
#line 380
$memory_12 = ";";
#line 380
$memory_11 = $memory_11 . $memory_12;
#line 380
undef($memory_12);
#line 380
$memory_12 = string::lf();
#line 380
$memory_11 = $memory_11 . $memory_12;
#line 380
undef($memory_12);
#line 380
generator_c_priv::print_to_header($memory_0, $memory_11);
#line 380
undef($memory_11);
#line 381
goto label_7;
#line 381
label_9:
#line 382
$memory_11 = ";";
#line 382
$memory_11 = $memory_8 . $memory_11;
#line 382
generator_c_priv::println($memory_0, $memory_11);
#line 382
undef($memory_11);
#line 383
goto label_7;
#line 383
label_7:
#line 383
undef($memory_9);
#line 383
undef($memory_10);
#line 383
undef($memory_8);
#line 384
$memory_4 = $memory_4 + $memory_5;
#line 384
goto label_6;
#line 384
label_4:
#line 384
undef($memory_2);
#line 384
undef($memory_3);
#line 384
undef($memory_4);
#line 384
undef($memory_5);
#line 384
undef($memory_6);
#line 384
undef($memory_7);
#line 385
$memory_2 = string::lf();
#line 385
generator_c_priv::println($memory_0, $memory_2);
#line 385
undef($memory_2);
#line 387
$memory_2 = $memory_1->{'functions'};
#line 387
$memory_4 = 0;
#line 387
$memory_5 = 1;
#line 387
$memory_6 = c_rt_lib::array_len($memory_2);
#line 387
label_12:
#line 387
$memory_7 = c_rt_lib::to_nl($memory_4 >= $memory_6);
#line 387
if (c_rt_lib::check_true($memory_7)) {goto label_10;}
#line 387
$memory_3 = $memory_2->[$memory_4];
#line 388
$memory_8 = $memory_3->{'access'};
#line 388
$memory_8 = c_rt_lib::ov_is($memory_8, 'pub');
#line 388
$memory_8 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 388
if (c_rt_lib::check_true($memory_8)) {goto label_14;}
#line 389
$memory_10 = $memory_0->{'mod_name'};
#line 389
$memory_9 = generator_c_priv::get_function_name($memory_3, $memory_10);
#line 389
undef($memory_10);
#line 390
$memory_11 = $memory_0->{'mod_name'};
#line 390
$memory_10 = generator_c_priv::get_func_ptr_header($memory_3, $memory_11);
#line 390
undef($memory_11);
#line 390
$memory_11 = "{";
#line 390
$memory_10 = $memory_10 . $memory_11;
#line 390
undef($memory_11);
#line 390
generator_c_priv::println($memory_0, $memory_10);
#line 390
undef($memory_10);
#line 391
$memory_11 = $memory_3->{'args_type'};
#line 391
$memory_10 = array::len($memory_11);
#line 391
undef($memory_11);
#line 392
$memory_12 = "func_num_args";
#line 392
$memory_14 = "_num";
#line 392
$memory_15 = generator_c_priv::get_string($memory_9);
#line 392
$memory_13 = [$memory_14,$memory_10,$memory_15];
#line 392
undef($memory_14);
#line 392
undef($memory_15);
#line 392
$memory_11 = generator_c_priv::get_fun_lib($memory_12, $memory_13);
#line 392
undef($memory_13);
#line 392
undef($memory_12);
#line 392
$memory_12 = ";";
#line 392
$memory_11 = $memory_11 . $memory_12;
#line 392
undef($memory_12);
#line 392
generator_c_priv::println($memory_0, $memory_11);
#line 392
undef($memory_11);
#line 393
$memory_11 = "return ";
#line 393
$memory_11 = $memory_11 . $memory_9;
#line 393
$memory_12 = "(";
#line 393
$memory_11 = $memory_11 . $memory_12;
#line 393
undef($memory_12);
#line 393
generator_c_priv::print($memory_0, $memory_11);
#line 393
undef($memory_11);
#line 394
$memory_11 = 0;
#line 394
$memory_12 = 1;
#line 394
label_17:
#line 394
$memory_13 = c_rt_lib::to_nl($memory_11 >= $memory_10);
#line 394
if (c_rt_lib::check_true($memory_13)) {goto label_15;}
#line 395
$memory_14 = 0;
#line 395
$memory_14 = c_rt_lib::to_nl($memory_11 > $memory_14);
#line 395
$memory_14 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_14));
#line 395
if (c_rt_lib::check_true($memory_14)) {goto label_19;}
#line 395
$memory_15 = ", ";
#line 395
generator_c_priv::print($memory_0, $memory_15);
#line 395
undef($memory_15);
#line 395
goto label_19;
#line 395
label_19:
#line 395
undef($memory_14);
#line 396
$memory_14 = $memory_3->{'args_type'};
#line 396
$memory_14 = $memory_14->[$memory_11];
#line 396
$memory_15 = c_rt_lib::ov_is($memory_14, 'val');
#line 396
if (c_rt_lib::check_true($memory_15)) {goto label_21;}
#line 398
$memory_15 = c_rt_lib::ov_is($memory_14, 'ref');
#line 398
if (c_rt_lib::check_true($memory_15)) {goto label_22;}
#line 398
$memory_15 = "NOMATCHALERT";
#line 398
$memory_15 = [$memory_15,$memory_14];
#line 398
die(dfile::ssave($memory_15));
#line 396
label_21:
#line 397
$memory_16 = "_tab[";
#line 397
$memory_16 = $memory_16 . $memory_11;
#line 397
$memory_17 = "]";
#line 397
$memory_16 = $memory_16 . $memory_17;
#line 397
undef($memory_17);
#line 397
generator_c_priv::print($memory_0, $memory_16);
#line 397
undef($memory_16);
#line 398
goto label_20;
#line 398
label_22:
#line 399
$memory_16 = "&_tab[";
#line 399
$memory_16 = $memory_16 . $memory_11;
#line 399
$memory_17 = "]";
#line 399
$memory_16 = $memory_16 . $memory_17;
#line 399
undef($memory_17);
#line 399
generator_c_priv::print($memory_0, $memory_16);
#line 399
undef($memory_16);
#line 400
goto label_20;
#line 400
label_20:
#line 400
undef($memory_14);
#line 400
undef($memory_15);
#line 401
$memory_11 = $memory_11 + $memory_12;
#line 401
goto label_17;
#line 401
label_15:
#line 401
undef($memory_11);
#line 401
undef($memory_12);
#line 401
undef($memory_13);
#line 402
$memory_11 = ");}";
#line 402
generator_c_priv::println($memory_0, $memory_11);
#line 402
undef($memory_11);
#line 402
undef($memory_9);
#line 402
undef($memory_10);
#line 403
goto label_14;
#line 403
label_14:
#line 403
undef($memory_8);
#line 404
$memory_8 = generator_c_priv::is_singleton_use_function($memory_3);
#line 404
$memory_8 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 404
if (c_rt_lib::check_true($memory_8)) {goto label_24;}
#line 405
$memory_10 = $memory_0->{'mod_name'};
#line 405
$memory_9 = generator_c_priv::get_function_name($memory_3, $memory_10);
#line 405
undef($memory_10);
#line 406
$memory_10 = generator_c_priv::arg_t();
#line 406
$memory_10 = $memory_10 . $memory_9;
#line 406
$memory_11 = "(){";
#line 406
$memory_10 = $memory_10 . $memory_11;
#line 406
undef($memory_11);
#line 406
generator_c_priv::println($memory_0, $memory_10);
#line 406
undef($memory_10);
#line 407
$memory_11 = "";
#line 407
$memory_12 = "__const__init";
#line 407
$memory_13 = $memory_0->{'mod_name'};
#line 407
$memory_10 = generator_c_priv::get_fun_name($memory_11, $memory_12, $memory_13);
#line 407
undef($memory_13);
#line 407
undef($memory_12);
#line 407
undef($memory_11);
#line 407
$memory_11 = "();";
#line 407
$memory_10 = $memory_10 . $memory_11;
#line 407
undef($memory_11);
#line 407
generator_c_priv::println($memory_0, $memory_10);
#line 407
undef($memory_10);
#line 408
$memory_10 = "return ";
#line 408
$memory_11 = generator_c_priv::get_const_singleton($memory_0, $memory_9);
#line 408
$memory_10 = $memory_10 . $memory_11;
#line 408
undef($memory_11);
#line 408
$memory_11 = ";}";
#line 408
$memory_10 = $memory_10 . $memory_11;
#line 408
undef($memory_11);
#line 408
generator_c_priv::println($memory_0, $memory_10);
#line 408
undef($memory_10);
#line 409
$memory_10 = generator_c_priv::arg_t();
#line 409
$memory_10 = $memory_10 . $memory_9;
#line 409
$memory_11 = "0cal()";
#line 409
$memory_10 = $memory_10 . $memory_11;
#line 409
undef($memory_11);
#line 409
generator_c_priv::print($memory_0, $memory_10);
#line 409
undef($memory_10);
#line 409
undef($memory_9);
#line 410
goto label_23;
#line 410
label_24:
#line 411
$memory_10 = $memory_0->{'mod_name'};
#line 411
$memory_9 = generator_c_priv::get_function_header($memory_3, $memory_10);
#line 411
undef($memory_10);
#line 411
generator_c_priv::print($memory_0, $memory_9);
#line 411
undef($memory_9);
#line 412
goto label_23;
#line 412
label_23:
#line 412
undef($memory_8);
#line 413
generator_c_priv::print_function_block($memory_0, $memory_3);
#line 414
$memory_4 = $memory_4 + $memory_5;
#line 414
goto label_12;
#line 414
label_10:
#line 414
undef($memory_2);
#line 414
undef($memory_3);
#line 414
undef($memory_4);
#line 414
undef($memory_5);
#line 414
undef($memory_6);
#line 414
undef($memory_7);
#line 415
generator_c_priv::print_init_const($memory_0);
#line 415
undef($memory_1);
#line 415
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub generator_c_priv::print_init_const($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;my $memory_13;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);
#line 418
$memory_1 = $memory_0->{'const'};
#line 418
$memory_1 = $memory_1->{'sim'};
#line 418
$memory_1 = $memory_1->{'arr'};
#line 419
$memory_2 = $memory_0->{'const'};
#line 419
$memory_2 = $memory_2->{'singleton'};
#line 419
$memory_2 = $memory_2->{'arr'};
#line 420
$memory_3 = array::len($memory_1);
#line 421
$memory_4 = array::len($memory_2);
#line 422
$memory_5 = $memory_0->{'const'};
#line 422
$memory_5 = $memory_5->{'dynamic_nr'};
#line 423
$memory_6 = $memory_3 + $memory_4;
#line 423
$memory_6 = $memory_6 + $memory_5;
#line 424
$memory_7 = "
static ";
#line 424
$memory_8 = generator_c_priv::arg_t();
#line 424
$memory_7 = $memory_7 . $memory_8;
#line 424
undef($memory_8);
#line 424
$memory_8 = "___const__[";
#line 424
$memory_7 = $memory_7 . $memory_8;
#line 424
undef($memory_8);
#line 424
$memory_8 = 1;
#line 424
$memory_8 = $memory_8 + $memory_6;
#line 424
$memory_7 = $memory_7 . $memory_8;
#line 424
undef($memory_8);
#line 424
$memory_8 = "];
static int ___const_init__ = 1;";
#line 424
$memory_7 = $memory_7 . $memory_8;
#line 424
undef($memory_8);
#line 424
generator_c_priv::println($memory_0, $memory_7);
#line 424
undef($memory_7);
#line 427
$memory_7 = "void ";
#line 427
$memory_9 = "";
#line 427
$memory_10 = "__const__init";
#line 427
$memory_11 = $memory_0->{'mod_name'};
#line 427
$memory_8 = generator_c_priv::get_fun_name($memory_9, $memory_10, $memory_11);
#line 427
undef($memory_11);
#line 427
undef($memory_10);
#line 427
undef($memory_9);
#line 427
$memory_7 = $memory_7 . $memory_8;
#line 427
undef($memory_8);
#line 427
$memory_8 = "(){
if(___const_init__) {
___const_init__ = 0;
__const__f = &___const__[";
#line 427
$memory_7 = $memory_7 . $memory_8;
#line 427
undef($memory_8);
#line 427
$memory_8 = $memory_3 + $memory_4;
#line 427
$memory_7 = $memory_7 . $memory_8;
#line 427
undef($memory_8);
#line 427
$memory_8 = "];
";
#line 427
$memory_7 = $memory_7 . $memory_8;
#line 427
undef($memory_8);
#line 427
generator_c_priv::println($memory_0, $memory_7);
#line 427
undef($memory_7);
#line 432
$memory_7 = 0;
#line 432
$memory_8 = 1;
#line 432
label_3:
#line 432
$memory_9 = c_rt_lib::to_nl($memory_7 >= $memory_3);
#line 432
if (c_rt_lib::check_true($memory_9)) {goto label_1;}
#line 433
$memory_10 = "___const__[";
#line 433
$memory_10 = $memory_10 . $memory_7;
#line 433
$memory_11 = "] = ";
#line 433
$memory_10 = $memory_10 . $memory_11;
#line 433
undef($memory_11);
#line 433
$memory_12 = $memory_1->[$memory_7];
#line 433
$memory_11 = generator_c_priv::create_sim($memory_12);
#line 433
undef($memory_12);
#line 433
$memory_10 = $memory_10 . $memory_11;
#line 433
undef($memory_11);
#line 433
$memory_11 = ";";
#line 433
$memory_10 = $memory_10 . $memory_11;
#line 433
undef($memory_11);
#line 433
generator_c_priv::println($memory_0, $memory_10);
#line 433
undef($memory_10);
#line 434
$memory_7 = $memory_7 + $memory_8;
#line 434
goto label_3;
#line 434
label_1:
#line 434
undef($memory_7);
#line 434
undef($memory_8);
#line 434
undef($memory_9);
#line 435
$memory_7 = "
for(int i=";
#line 435
$memory_7 = $memory_7 . $memory_3;
#line 435
$memory_8 = ";i<";
#line 435
$memory_7 = $memory_7 . $memory_8;
#line 435
undef($memory_8);
#line 435
$memory_7 = $memory_7 . $memory_6;
#line 435
$memory_8 = ";++i) ___const__[i] = NULL;
";
#line 435
$memory_7 = $memory_7 . $memory_8;
#line 435
undef($memory_8);
#line 435
$memory_9 = "register_const";
#line 435
$memory_8 = generator_c_priv::get_lib_fun($memory_9);
#line 435
undef($memory_9);
#line 435
$memory_7 = $memory_7 . $memory_8;
#line 435
undef($memory_8);
#line 435
$memory_8 = "(___const__, ";
#line 435
$memory_7 = $memory_7 . $memory_8;
#line 435
undef($memory_8);
#line 435
$memory_7 = $memory_7 . $memory_6;
#line 435
$memory_8 = ");
}}";
#line 435
$memory_7 = $memory_7 . $memory_8;
#line 435
undef($memory_8);
#line 435
generator_c_priv::println($memory_0, $memory_7);
#line 435
undef($memory_7);
#line 439
$memory_7 = generator_c_priv::arg_t();
#line 439
$memory_9 = "";
#line 439
$memory_10 = "__const__sim";
#line 439
$memory_11 = $memory_0->{'mod_name'};
#line 439
$memory_8 = generator_c_priv::get_fun_name($memory_9, $memory_10, $memory_11);
#line 439
undef($memory_11);
#line 439
undef($memory_10);
#line 439
undef($memory_9);
#line 439
$memory_7 = $memory_7 . $memory_8;
#line 439
undef($memory_8);
#line 439
$memory_8 = "(int __nr) {
";
#line 439
$memory_7 = $memory_7 . $memory_8;
#line 439
undef($memory_8);
#line 439
$memory_8 = generator_c_priv::arg_t();
#line 439
$memory_7 = $memory_7 . $memory_8;
#line 439
undef($memory_8);
#line 439
$memory_8 = "ret = NULL;
";
#line 439
$memory_7 = $memory_7 . $memory_8;
#line 439
undef($memory_8);
#line 439
$memory_9 = "copy";
#line 439
$memory_11 = "&ret";
#line 439
$memory_12 = "___const__[__nr]";
#line 439
$memory_10 = [$memory_11,$memory_12];
#line 439
undef($memory_11);
#line 439
undef($memory_12);
#line 439
$memory_8 = generator_c_priv::get_fun_lib($memory_9, $memory_10);
#line 439
undef($memory_10);
#line 439
undef($memory_9);
#line 439
$memory_7 = $memory_7 . $memory_8;
#line 439
undef($memory_8);
#line 439
$memory_8 = ";
return ret;
}";
#line 439
$memory_7 = $memory_7 . $memory_8;
#line 439
undef($memory_8);
#line 439
generator_c_priv::println($memory_0, $memory_7);
#line 439
undef($memory_7);
#line 444
$memory_7 = generator_c_priv::arg_t();
#line 444
$memory_9 = "";
#line 444
$memory_10 = "__const__sing";
#line 444
$memory_11 = $memory_0->{'mod_name'};
#line 444
$memory_8 = generator_c_priv::get_fun_name($memory_9, $memory_10, $memory_11);
#line 444
undef($memory_11);
#line 444
undef($memory_10);
#line 444
undef($memory_9);
#line 444
$memory_7 = $memory_7 . $memory_8;
#line 444
undef($memory_8);
#line 444
$memory_8 = "(int __nr) {
if(___const__[__nr+";
#line 444
$memory_7 = $memory_7 . $memory_8;
#line 444
undef($memory_8);
#line 444
$memory_7 = $memory_7 . $memory_3;
#line 444
$memory_8 = "]==NULL) {
switch(__nr){";
#line 444
$memory_7 = $memory_7 . $memory_8;
#line 444
undef($memory_8);
#line 444
generator_c_priv::println($memory_0, $memory_7);
#line 444
undef($memory_7);
#line 447
$memory_7 = array::len($memory_2);
#line 447
$memory_8 = 0;
#line 447
$memory_9 = 1;
#line 447
label_6:
#line 447
$memory_10 = c_rt_lib::to_nl($memory_8 >= $memory_7);
#line 447
if (c_rt_lib::check_true($memory_10)) {goto label_4;}
#line 448
$memory_11 = "case ";
#line 448
$memory_11 = $memory_11 . $memory_8;
#line 448
$memory_12 = ":";
#line 448
$memory_11 = $memory_11 . $memory_12;
#line 448
undef($memory_12);
#line 448
generator_c_priv::println($memory_0, $memory_11);
#line 448
undef($memory_11);
#line 449
$memory_11 = "	___const__[";
#line 449
$memory_12 = $memory_8 + $memory_3;
#line 449
$memory_11 = $memory_11 . $memory_12;
#line 449
undef($memory_12);
#line 449
$memory_12 = "] = ";
#line 449
$memory_11 = $memory_11 . $memory_12;
#line 449
undef($memory_12);
#line 449
$memory_12 = $memory_2->[$memory_8];
#line 449
$memory_11 = $memory_11 . $memory_12;
#line 449
undef($memory_12);
#line 449
$memory_12 = "0cal();";
#line 449
$memory_11 = $memory_11 . $memory_12;
#line 449
undef($memory_12);
#line 449
generator_c_priv::println($memory_0, $memory_11);
#line 449
undef($memory_11);
#line 450
$memory_11 = "	break;";
#line 450
generator_c_priv::println($memory_0, $memory_11);
#line 450
undef($memory_11);
#line 451
$memory_8 = $memory_8 + $memory_9;
#line 451
goto label_6;
#line 451
label_4:
#line 451
undef($memory_7);
#line 451
undef($memory_8);
#line 451
undef($memory_9);
#line 451
undef($memory_10);
#line 452
$memory_7 = "default:
	nl_die();
}}
";
#line 452
$memory_8 = generator_c_priv::arg_t();
#line 452
$memory_7 = $memory_7 . $memory_8;
#line 452
undef($memory_8);
#line 452
$memory_8 = "ret = NULL;
";
#line 452
$memory_7 = $memory_7 . $memory_8;
#line 452
undef($memory_8);
#line 452
$memory_9 = "copy";
#line 452
$memory_11 = "&ret";
#line 452
$memory_12 = "___const__[__nr+";
#line 452
$memory_12 = $memory_12 . $memory_3;
#line 452
$memory_13 = "]";
#line 452
$memory_12 = $memory_12 . $memory_13;
#line 452
undef($memory_13);
#line 452
$memory_10 = [$memory_11,$memory_12];
#line 452
undef($memory_11);
#line 452
undef($memory_12);
#line 452
$memory_8 = generator_c_priv::get_fun_lib($memory_9, $memory_10);
#line 452
undef($memory_10);
#line 452
undef($memory_9);
#line 452
$memory_7 = $memory_7 . $memory_8;
#line 452
undef($memory_8);
#line 452
$memory_8 = ";
return ret;
}";
#line 452
$memory_7 = $memory_7 . $memory_8;
#line 452
undef($memory_8);
#line 452
generator_c_priv::println($memory_0, $memory_7);
#line 452
undef($memory_7);
#line 452
undef($memory_1);
#line 452
undef($memory_2);
#line 452
undef($memory_3);
#line 452
undef($memory_4);
#line 452
undef($memory_5);
#line 452
undef($memory_6);
#line 452
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub generator_c_priv::print_function_block($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;my $memory_13;my $memory_14;my $memory_15;my $memory_16;my $memory_17;my $memory_18;my $memory_19;my $memory_20;my $memory_21;my $memory_22;my $memory_23;my $memory_24;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];
#line 461
$memory_2 = " {";
#line 461
generator_c_priv::println($memory_0, $memory_2);
#line 461
undef($memory_2);
#line 462
$memory_2 = $memory_1->{'args_type'};
#line 462
$memory_3 = $memory_2;
#line 462
 if (c_rt_lib::get_hashcount($memory_0) > 1) {$memory_0 = {%{$memory_0}};}$memory_0->{'fun_args'} = $memory_3;
#line 462
undef($memory_2);
#line 462
undef($memory_3);
#line 463
generator_c_priv::move_args_to_register($memory_0);
#line 464
$memory_3 = "";
#line 464
$memory_4 = "__const__init";
#line 464
$memory_5 = $memory_0->{'mod_name'};
#line 464
$memory_2 = generator_c_priv::get_fun_name($memory_3, $memory_4, $memory_5);
#line 464
undef($memory_5);
#line 464
undef($memory_4);
#line 464
undef($memory_3);
#line 464
$memory_3 = "();";
#line 464
$memory_2 = $memory_2 . $memory_3;
#line 464
undef($memory_3);
#line 464
generator_c_priv::println($memory_0, $memory_2);
#line 464
undef($memory_2);
#line 465
$memory_3 = $memory_1->{'args_type'};
#line 465
$memory_2 = array::len($memory_3);
#line 465
undef($memory_3);
#line 465
label_2:
#line 465
$memory_3 = $memory_1->{'reg_size'};
#line 465
$memory_3 = c_rt_lib::to_nl($memory_2 < $memory_3);
#line 465
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 465
if (c_rt_lib::check_true($memory_3)) {goto label_1;}
#line 466
$memory_4 = generator_c_priv::arg_t();
#line 466
$memory_5 = generator_c_priv::get_reg($memory_0, $memory_2);
#line 466
$memory_4 = $memory_4 . $memory_5;
#line 466
undef($memory_5);
#line 466
$memory_5 = " = NULL;";
#line 466
$memory_4 = $memory_4 . $memory_5;
#line 466
undef($memory_5);
#line 466
generator_c_priv::println($memory_0, $memory_4);
#line 466
undef($memory_4);
#line 466
$memory_4 = 1;
#line 466
$memory_2 = $memory_2 + $memory_4;
#line 466
undef($memory_4);
#line 467
goto label_2;
#line 467
label_1:
#line 467
undef($memory_2);
#line 467
undef($memory_3);
#line 468
$memory_2 = $memory_1->{'commands'};
#line 468
$memory_4 = 0;
#line 468
$memory_5 = 1;
#line 468
$memory_6 = c_rt_lib::array_len($memory_2);
#line 468
label_6:
#line 468
$memory_7 = c_rt_lib::to_nl($memory_4 >= $memory_6);
#line 468
if (c_rt_lib::check_true($memory_7)) {goto label_4;}
#line 468
$memory_3 = $memory_2->[$memory_4];
#line 469
$memory_8 = $memory_3->{'annotation'};
#line 469
$memory_9 = c_rt_lib::ov_is($memory_8, 'none');
#line 469
if (c_rt_lib::check_true($memory_9)) {goto label_8;}
#line 471
$memory_9 = c_rt_lib::ov_is($memory_8, 'const');
#line 471
if (c_rt_lib::check_true($memory_9)) {goto label_9;}
#line 471
$memory_9 = "NOMATCHALERT";
#line 471
$memory_9 = [$memory_9,$memory_8];
#line 471
die(dfile::ssave($memory_9));
#line 469
label_8:
#line 470
generator_c_priv::print_cmd($memory_0, $memory_3);
#line 471
goto label_7;
#line 471
label_9:
#line 471
$memory_10 = c_rt_lib::ov_as($memory_8, 'const');
#line 472
$memory_11 = $memory_3->{'cmd'};
#line 472
$memory_11 = c_rt_lib::ov_is($memory_11, 'load_const');
#line 472
$memory_11 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_11));
#line 472
if (c_rt_lib::check_true($memory_11)) {goto label_11;}
#line 473
$memory_12 = $memory_3->{'cmd'};
#line 473
$memory_12 = c_rt_lib::ov_as($memory_12, 'load_const');
#line 473
$memory_12 = $memory_12->{'val'};
#line 474
$memory_13 = nl::is_sim($memory_12);
#line 474
$memory_13 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_13));
#line 474
if (c_rt_lib::check_true($memory_13)) {goto label_13;}
#line 475
generator_c_priv::print_cmd($memory_0, $memory_3);
#line 476
undef($memory_8);
#line 476
undef($memory_9);
#line 476
undef($memory_10);
#line 476
undef($memory_11);
#line 476
undef($memory_12);
#line 476
undef($memory_13);
#line 476
goto label_5;
#line 477
goto label_13;
#line 477
label_13:
#line 477
undef($memory_13);
#line 477
undef($memory_12);
#line 478
goto label_11;
#line 478
label_11:
#line 478
undef($memory_11);
#line 479
$memory_11 = array::len($memory_10);
#line 480
$memory_12 = 0;
#line 480
$memory_12 = c_rt_lib::to_nl($memory_11 == $memory_12);
#line 480
$memory_12 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_12));
#line 480
if (c_rt_lib::check_true($memory_12)) {goto label_15;}
#line 481
generator_c_priv::print_cmd($memory_0, $memory_3);
#line 482
undef($memory_8);
#line 482
undef($memory_9);
#line 482
undef($memory_10);
#line 482
undef($memory_11);
#line 482
undef($memory_12);
#line 482
goto label_5;
#line 483
goto label_14;
#line 483
label_15:
#line 484
$memory_13 = $memory_0->{'const'};
#line 484
$memory_13 = $memory_13->{'dynamic_nr'};
#line 485
$memory_14 = "if(__const__f[";
#line 485
$memory_14 = $memory_14 . $memory_13;
#line 485
$memory_15 = "] == NULL) {";
#line 485
$memory_14 = $memory_14 . $memory_15;
#line 485
undef($memory_15);
#line 485
generator_c_priv::println($memory_0, $memory_14);
#line 485
undef($memory_14);
#line 486
generator_c_priv::print_cmd($memory_0, $memory_3);
#line 487
$memory_15 = 0;
#line 487
$memory_16 = 1;
#line 487
$memory_17 = c_rt_lib::array_len($memory_10);
#line 487
label_18:
#line 487
$memory_18 = c_rt_lib::to_nl($memory_15 >= $memory_17);
#line 487
if (c_rt_lib::check_true($memory_18)) {goto label_16;}
#line 487
$memory_14 = $memory_10->[$memory_15];
#line 488
$memory_20 = "copy";
#line 488
$memory_22 = "&__const__f[";
#line 488
$memory_22 = $memory_22 . $memory_13;
#line 488
$memory_23 = "]";
#line 488
$memory_22 = $memory_22 . $memory_23;
#line 488
undef($memory_23);
#line 488
$memory_23 = generator_c_priv::get_reg($memory_0, $memory_14);
#line 488
$memory_21 = [$memory_22,$memory_23];
#line 488
undef($memory_22);
#line 488
undef($memory_23);
#line 488
$memory_19 = generator_c_priv::get_fun_lib($memory_20, $memory_21);
#line 488
undef($memory_21);
#line 488
undef($memory_20);
#line 488
$memory_20 = ";";
#line 488
$memory_19 = $memory_19 . $memory_20;
#line 488
undef($memory_20);
#line 488
generator_c_priv::println($memory_0, $memory_19);
#line 488
undef($memory_19);
#line 489
$memory_19 = 1;
#line 489
$memory_13 = $memory_13 + $memory_19;
#line 489
undef($memory_19);
#line 490
$memory_15 = $memory_15 + $memory_16;
#line 490
goto label_18;
#line 490
label_16:
#line 490
undef($memory_14);
#line 490
undef($memory_15);
#line 490
undef($memory_16);
#line 490
undef($memory_17);
#line 490
undef($memory_18);
#line 491
$memory_14 = "}";
#line 491
generator_c_priv::println($memory_0, $memory_14);
#line 491
undef($memory_14);
#line 492
$memory_13 = $memory_13 - $memory_11;
#line 493
$memory_15 = 0;
#line 493
$memory_16 = 1;
#line 493
$memory_17 = c_rt_lib::array_len($memory_10);
#line 493
label_21:
#line 493
$memory_18 = c_rt_lib::to_nl($memory_15 >= $memory_17);
#line 493
if (c_rt_lib::check_true($memory_18)) {goto label_19;}
#line 493
$memory_14 = $memory_10->[$memory_15];
#line 494
$memory_20 = "copy";
#line 494
$memory_22 = generator_c_priv::get_reg_ref($memory_0, $memory_14);
#line 494
$memory_23 = "__const__f[";
#line 494
$memory_23 = $memory_23 . $memory_13;
#line 494
$memory_24 = "]";
#line 494
$memory_23 = $memory_23 . $memory_24;
#line 494
undef($memory_24);
#line 494
$memory_21 = [$memory_22,$memory_23];
#line 494
undef($memory_22);
#line 494
undef($memory_23);
#line 494
$memory_19 = generator_c_priv::get_fun_lib($memory_20, $memory_21);
#line 494
undef($memory_21);
#line 494
undef($memory_20);
#line 494
$memory_20 = ";";
#line 494
$memory_19 = $memory_19 . $memory_20;
#line 494
undef($memory_20);
#line 494
generator_c_priv::println($memory_0, $memory_19);
#line 494
undef($memory_19);
#line 495
$memory_19 = 1;
#line 495
$memory_13 = $memory_13 + $memory_19;
#line 495
undef($memory_19);
#line 496
$memory_15 = $memory_15 + $memory_16;
#line 496
goto label_21;
#line 496
label_19:
#line 496
undef($memory_14);
#line 496
undef($memory_15);
#line 496
undef($memory_16);
#line 496
undef($memory_17);
#line 496
undef($memory_18);
#line 497
$memory_14 = "const";
#line 497
$memory_14 = c_rt_lib::get_ref_hash($memory_0, $memory_14);
#line 497
$memory_15 = $memory_13;
#line 497
 if (c_rt_lib::get_hashcount($memory_14) > 1) {$memory_14 = {%{$memory_14}};}$memory_14->{'dynamic_nr'} = $memory_15;
#line 497
$memory_16 = "const";
#line 497
c_rt_lib::set_ref_hash($memory_0, $memory_16, $memory_14);
#line 497
undef($memory_16);
#line 497
undef($memory_14);
#line 497
undef($memory_15);
#line 497
undef($memory_13);
#line 498
goto label_14;
#line 498
label_14:
#line 498
undef($memory_12);
#line 498
undef($memory_11);
#line 498
undef($memory_10);
#line 499
goto label_7;
#line 499
label_7:
#line 499
undef($memory_8);
#line 499
undef($memory_9);
#line 499
label_5:
#line 500
$memory_4 = $memory_4 + $memory_5;
#line 500
goto label_6;
#line 500
label_4:
#line 500
undef($memory_2);
#line 500
undef($memory_3);
#line 500
undef($memory_4);
#line 500
undef($memory_5);
#line 500
undef($memory_6);
#line 500
undef($memory_7);
#line 501
$memory_2 = "}";
#line 501
$memory_3 = string::lf();
#line 501
$memory_2 = $memory_2 . $memory_3;
#line 501
undef($memory_3);
#line 501
generator_c_priv::println($memory_0, $memory_2);
#line 501
undef($memory_2);
#line 501
undef($memory_1);
#line 501
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub generator_c_priv::is_singleton_use_function($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;my $memory_13;my $memory_14;$memory_0 = $_[0];
#line 504
$memory_2 = $memory_0->{'args_type'};
#line 504
$memory_1 = array::len($memory_2);
#line 504
undef($memory_2);
#line 504
$memory_2 = 0;
#line 504
$memory_1 = c_rt_lib::to_nl($memory_1 > $memory_2);
#line 504
undef($memory_2);
#line 504
$memory_1 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_1));
#line 504
if (c_rt_lib::check_true($memory_1)) {goto label_2;}
#line 504
$memory_2 = c_rt_lib::to_nl(0);
#line 504
undef($memory_0);
#line 504
undef($memory_1);
#line 504
return $memory_2;
#line 504
undef($memory_2);
#line 504
goto label_2;
#line 504
label_2:
#line 504
undef($memory_1);
#line 505
$memory_1 = $memory_0->{'annotation'};
#line 505
$memory_1 = c_rt_lib::ov_is($memory_1, 'math');
#line 506
$memory_2 = c_rt_lib::to_nl(0);
#line 508
$memory_4 = $memory_0->{'commands'};
#line 508
$memory_6 = 0;
#line 508
$memory_7 = 1;
#line 508
$memory_8 = c_rt_lib::array_len($memory_4);
#line 508
label_5:
#line 508
$memory_9 = c_rt_lib::to_nl($memory_6 >= $memory_8);
#line 508
if (c_rt_lib::check_true($memory_9)) {goto label_3;}
#line 508
$memory_5 = $memory_4->[$memory_6];
#line 509
$memory_10 = $memory_5->{'cmd'};
#line 510
$memory_11 = $memory_10;
#line 510
$memory_11 = c_rt_lib::ov_is($memory_11, 'call');
#line 510
$memory_11 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_11));
#line 510
if (c_rt_lib::check_true($memory_11)) {goto label_7;}
#line 511
$memory_12 = $memory_10;
#line 511
$memory_12 = c_rt_lib::ov_as($memory_12, 'call');
#line 512
$memory_13 = $memory_12->{'fun_name'};
#line 512
$memory_14 = "sigleton_do_not_use_without_approval";
#line 512
$memory_13 = c_rt_lib::to_nl($memory_13 eq $memory_14);
#line 512
undef($memory_14);
#line 512
$memory_13 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_13));
#line 512
$memory_13 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_13));
#line 512
if (c_rt_lib::check_true($memory_13)) {goto label_9;}
#line 512
undef($memory_10);
#line 512
undef($memory_11);
#line 512
undef($memory_12);
#line 512
undef($memory_13);
#line 512
goto label_4;
#line 512
goto label_9;
#line 512
label_9:
#line 512
undef($memory_13);
#line 513
$memory_13 = $memory_12->{'mod'};
#line 513
$memory_14 = "singleton";
#line 513
$memory_13 = c_rt_lib::to_nl($memory_13 eq $memory_14);
#line 513
undef($memory_14);
#line 513
$memory_13 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_13));
#line 513
$memory_13 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_13));
#line 513
if (c_rt_lib::check_true($memory_13)) {goto label_11;}
#line 513
undef($memory_10);
#line 513
undef($memory_11);
#line 513
undef($memory_12);
#line 513
undef($memory_13);
#line 513
goto label_4;
#line 513
goto label_11;
#line 513
label_11:
#line 513
undef($memory_13);
#line 514
$memory_13 = c_rt_lib::to_nl(1);
#line 514
$memory_2 = $memory_13;
#line 514
undef($memory_13);
#line 515
$memory_13 = $memory_12->{'dest'};
#line 515
$memory_3 = $memory_13;
#line 515
undef($memory_13);
#line 515
undef($memory_12);
#line 516
goto label_6;
#line 516
label_7:
#line 516
$memory_11 = $memory_10;
#line 516
$memory_11 = c_rt_lib::ov_is($memory_11, 'return');
#line 516
$memory_11 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_11));
#line 516
if (c_rt_lib::check_true($memory_11)) {goto label_12;}
#line 517
$memory_12 = $memory_10;
#line 517
$memory_12 = c_rt_lib::ov_as($memory_12, 'return');
#line 518
$memory_13 = $memory_12;
#line 518
$memory_13 = c_rt_lib::ov_is($memory_13, 'val');
#line 518
$memory_13 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_13));
#line 518
$memory_13 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_13));
#line 518
if (c_rt_lib::check_true($memory_13)) {goto label_14;}
#line 518
$memory_14 = c_rt_lib::to_nl(0);
#line 518
undef($memory_0);
#line 518
undef($memory_1);
#line 518
undef($memory_2);
#line 518
undef($memory_3);
#line 518
undef($memory_4);
#line 518
undef($memory_5);
#line 518
undef($memory_6);
#line 518
undef($memory_7);
#line 518
undef($memory_8);
#line 518
undef($memory_9);
#line 518
undef($memory_10);
#line 518
undef($memory_11);
#line 518
undef($memory_12);
#line 518
undef($memory_13);
#line 518
return $memory_14;
#line 518
undef($memory_14);
#line 518
goto label_14;
#line 518
label_14:
#line 518
undef($memory_13);
#line 519
$memory_13 = $memory_1;
#line 519
$memory_13 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_13));
#line 519
if (c_rt_lib::check_true($memory_13)) {goto label_16;}
#line 519
$memory_14 = c_rt_lib::to_nl(1);
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
undef($memory_13);
#line 519
return $memory_14;
#line 519
undef($memory_14);
#line 519
goto label_16;
#line 519
label_16:
#line 519
undef($memory_13);
#line 520
$memory_13 = $memory_2;
#line 520
$memory_13 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_13));
#line 520
$memory_13 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_13));
#line 520
if (c_rt_lib::check_true($memory_13)) {goto label_18;}
#line 520
$memory_14 = c_rt_lib::to_nl(0);
#line 520
undef($memory_0);
#line 520
undef($memory_1);
#line 520
undef($memory_2);
#line 520
undef($memory_3);
#line 520
undef($memory_4);
#line 520
undef($memory_5);
#line 520
undef($memory_6);
#line 520
undef($memory_7);
#line 520
undef($memory_8);
#line 520
undef($memory_9);
#line 520
undef($memory_10);
#line 520
undef($memory_11);
#line 520
undef($memory_12);
#line 520
undef($memory_13);
#line 520
return $memory_14;
#line 520
undef($memory_14);
#line 520
goto label_18;
#line 520
label_18:
#line 520
undef($memory_13);
#line 521
$memory_13 = $memory_12;
#line 521
$memory_13 = c_rt_lib::ov_as($memory_13, 'val');
#line 521
$memory_13 = c_rt_lib::to_nl($memory_13 eq $memory_3);
#line 521
undef($memory_0);
#line 521
undef($memory_1);
#line 521
undef($memory_2);
#line 521
undef($memory_3);
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
#line 521
undef($memory_10);
#line 521
undef($memory_11);
#line 521
undef($memory_12);
#line 521
return $memory_13;
#line 521
undef($memory_13);
#line 521
undef($memory_12);
#line 522
goto label_6;
#line 522
label_12:
#line 522
$memory_11 = $memory_10;
#line 522
$memory_11 = c_rt_lib::ov_is($memory_11, 'prt_lbl');
#line 522
$memory_11 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_11));
#line 522
if (c_rt_lib::check_true($memory_11)) {goto label_19;}
#line 523
goto label_6;
#line 523
label_19:
#line 523
$memory_11 = $memory_10;
#line 523
$memory_11 = c_rt_lib::ov_is($memory_11, 'clear');
#line 523
$memory_11 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_11));
#line 523
if (c_rt_lib::check_true($memory_11)) {goto label_20;}
#line 524
goto label_6;
#line 524
label_20:
#line 525
$memory_12 = $memory_2;
#line 525
$memory_12 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_12));
#line 525
if (c_rt_lib::check_true($memory_12)) {goto label_22;}
#line 525
$memory_13 = c_rt_lib::to_nl(0);
#line 525
undef($memory_0);
#line 525
undef($memory_1);
#line 525
undef($memory_2);
#line 525
undef($memory_3);
#line 525
undef($memory_4);
#line 525
undef($memory_5);
#line 525
undef($memory_6);
#line 525
undef($memory_7);
#line 525
undef($memory_8);
#line 525
undef($memory_9);
#line 525
undef($memory_10);
#line 525
undef($memory_11);
#line 525
undef($memory_12);
#line 525
return $memory_13;
#line 525
undef($memory_13);
#line 525
goto label_22;
#line 525
label_22:
#line 525
undef($memory_12);
#line 526
goto label_6;
#line 526
label_6:
#line 526
undef($memory_11);
#line 526
undef($memory_10);
#line 526
label_4:
#line 527
$memory_6 = $memory_6 + $memory_7;
#line 527
goto label_5;
#line 527
label_3:
#line 527
undef($memory_4);
#line 527
undef($memory_5);
#line 527
undef($memory_6);
#line 527
undef($memory_7);
#line 527
undef($memory_8);
#line 527
undef($memory_9);
#line 528
$memory_4 = c_rt_lib::to_nl(0);
#line 528
undef($memory_0);
#line 528
undef($memory_1);
#line 528
undef($memory_2);
#line 528
undef($memory_3);
#line 528
return $memory_4;
#line 528
undef($memory_4);
#line 528
undef($memory_1);
#line 528
undef($memory_2);
#line 528
undef($memory_3);
#line 528
undef($memory_0);
#line 528
return;
}

sub generator_c_priv::move_args_to_register($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);
#line 532
$memory_2 = $memory_0->{'fun_args'};
#line 532
$memory_1 = array::len($memory_2);
#line 532
undef($memory_2);
#line 532
$memory_2 = 0;
#line 532
$memory_3 = 1;
#line 532
label_3:
#line 532
$memory_4 = c_rt_lib::to_nl($memory_2 >= $memory_1);
#line 532
if (c_rt_lib::check_true($memory_4)) {goto label_1;}
#line 533
$memory_5 = $memory_0->{'fun_args'};
#line 533
$memory_5 = $memory_5->[$memory_2];
#line 533
$memory_6 = c_rt_lib::ov_is($memory_5, 'val');
#line 533
if (c_rt_lib::check_true($memory_6)) {goto label_5;}
#line 536
$memory_6 = c_rt_lib::ov_is($memory_5, 'ref');
#line 536
if (c_rt_lib::check_true($memory_6)) {goto label_6;}
#line 536
$memory_6 = "NOMATCHALERT";
#line 536
$memory_6 = [$memory_6,$memory_5];
#line 536
die(dfile::ssave($memory_6));
#line 533
label_5:
#line 534
$memory_8 = "arg_val";
#line 534
$memory_10 = generator_c_priv::get_reg($memory_0, $memory_2);
#line 534
$memory_9 = [$memory_10];
#line 534
undef($memory_10);
#line 534
$memory_7 = generator_c_priv::get_fun_lib($memory_8, $memory_9);
#line 534
undef($memory_9);
#line 534
undef($memory_8);
#line 534
generator_c_priv::print($memory_0, $memory_7);
#line 534
undef($memory_7);
#line 535
$memory_7 = ";";
#line 535
generator_c_priv::println($memory_0, $memory_7);
#line 535
undef($memory_7);
#line 536
goto label_4;
#line 536
label_6:
#line 537
goto label_4;
#line 537
label_4:
#line 537
undef($memory_5);
#line 537
undef($memory_6);
#line 538
$memory_2 = $memory_2 + $memory_3;
#line 538
goto label_3;
#line 538
label_1:
#line 538
undef($memory_1);
#line 538
undef($memory_2);
#line 538
undef($memory_3);
#line 538
undef($memory_4);
#line 538
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub generator_c_priv::move_register_to_ref_args($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);
#line 541
$memory_2 = $memory_0->{'fun_args'};
#line 541
$memory_1 = array::len($memory_2);
#line 541
undef($memory_2);
#line 541
$memory_2 = 0;
#line 541
$memory_3 = 1;
#line 541
label_3:
#line 541
$memory_4 = c_rt_lib::to_nl($memory_2 >= $memory_1);
#line 541
if (c_rt_lib::check_true($memory_4)) {goto label_1;}
#line 542
$memory_5 = $memory_0->{'fun_args'};
#line 542
$memory_5 = $memory_5->[$memory_2];
#line 542
$memory_6 = c_rt_lib::ov_is($memory_5, 'val');
#line 542
if (c_rt_lib::check_true($memory_6)) {goto label_5;}
#line 543
$memory_6 = c_rt_lib::ov_is($memory_5, 'ref');
#line 543
if (c_rt_lib::check_true($memory_6)) {goto label_6;}
#line 543
$memory_6 = "NOMATCHALERT";
#line 543
$memory_6 = [$memory_6,$memory_5];
#line 543
die(dfile::ssave($memory_6));
#line 542
label_5:
#line 543
goto label_4;
#line 543
label_6:
#line 544
goto label_4;
#line 544
label_4:
#line 544
undef($memory_5);
#line 544
undef($memory_6);
#line 545
$memory_2 = $memory_2 + $memory_3;
#line 545
goto label_3;
#line 545
label_1:
#line 545
undef($memory_1);
#line 545
undef($memory_2);
#line 545
undef($memory_3);
#line 545
undef($memory_4);
#line 545
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub generator_c_priv::get_fun_lib($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;$memory_0 = $_[0];$memory_1 = $_[1];
#line 549
$memory_2 = generator_c_priv::get_lib_fun($memory_0);
#line 549
$memory_3 = "(";
#line 549
$memory_2 = $memory_2 . $memory_3;
#line 549
undef($memory_3);
#line 550
$memory_3 = 0;
#line 551
$memory_5 = 0;
#line 551
$memory_6 = 1;
#line 551
$memory_7 = c_rt_lib::array_len($memory_1);
#line 551
label_3:
#line 551
$memory_8 = c_rt_lib::to_nl($memory_5 >= $memory_7);
#line 551
if (c_rt_lib::check_true($memory_8)) {goto label_1;}
#line 551
$memory_4 = $memory_1->[$memory_5];
#line 552
$memory_9 = 0;
#line 552
$memory_9 = c_rt_lib::to_nl($memory_9 == $memory_3);
#line 552
$memory_9 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_9));
#line 552
$memory_9 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_9));
#line 552
if (c_rt_lib::check_true($memory_9)) {goto label_5;}
#line 552
$memory_10 = ", ";
#line 552
$memory_2 = $memory_2 . $memory_10;
#line 552
undef($memory_10);
#line 552
goto label_5;
#line 552
label_5:
#line 552
undef($memory_9);
#line 553
$memory_2 = $memory_2 . $memory_4;
#line 554
$memory_9 = 1;
#line 554
$memory_3 = $memory_3 + $memory_9;
#line 554
undef($memory_9);
#line 555
$memory_5 = $memory_5 + $memory_6;
#line 555
goto label_3;
#line 555
label_1:
#line 555
undef($memory_4);
#line 555
undef($memory_5);
#line 555
undef($memory_6);
#line 555
undef($memory_7);
#line 555
undef($memory_8);
#line 556
$memory_4 = ")";
#line 556
$memory_4 = $memory_2 . $memory_4;
#line 556
undef($memory_0);
#line 556
undef($memory_1);
#line 556
undef($memory_2);
#line 556
undef($memory_3);
#line 556
return $memory_4;
#line 556
undef($memory_4);
#line 556
undef($memory_2);
#line 556
undef($memory_3);
#line 556
undef($memory_0);
#line 556
undef($memory_1);
#line 556
return;
}

sub generator_c_priv::get_module_name($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;$memory_0 = $_[0];
#line 560
$memory_2 = 0;
#line 560
$memory_3 = "00";
#line 560
$memory_1 = string::replace($memory_0, $memory_2, $memory_3);
#line 560
undef($memory_3);
#line 560
undef($memory_2);
#line 560
undef($memory_0);
#line 560
return $memory_1;
#line 560
undef($memory_1);
#line 560
undef($memory_0);
#line 560
return;
}

sub generator_c_priv::get_fun_name($$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;$memory_0 = $_[0];$memory_1 = $_[1];$memory_2 = $_[2];
#line 564
$memory_3 = "";
#line 564
$memory_3 = c_rt_lib::to_nl($memory_0 eq $memory_3);
#line 564
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 564
if (c_rt_lib::check_true($memory_3)) {goto label_2;}
#line 564
$memory_4 = "_priv";
#line 564
$memory_4 = $memory_2 . $memory_4;
#line 564
$memory_0 = $memory_4;
#line 564
undef($memory_4);
#line 564
goto label_2;
#line 564
label_2:
#line 564
undef($memory_3);
#line 565
$memory_3 = generator_c_priv::get_module_name($memory_0);
#line 565
$memory_4 = 0;
#line 565
$memory_3 = $memory_3 . $memory_4;
#line 565
undef($memory_4);
#line 565
$memory_5 = 0;
#line 565
$memory_6 = "00";
#line 565
$memory_4 = string::replace($memory_1, $memory_5, $memory_6);
#line 565
undef($memory_6);
#line 565
undef($memory_5);
#line 565
$memory_3 = $memory_3 . $memory_4;
#line 565
undef($memory_4);
#line 565
undef($memory_0);
#line 565
undef($memory_1);
#line 565
undef($memory_2);
#line 565
return $memory_3;
#line 565
undef($memory_3);
#line 565
undef($memory_0);
#line 565
undef($memory_1);
#line 565
undef($memory_2);
#line 565
return;
}

sub generator_c_priv::get_lib_fun($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;$memory_0 = $_[0];
#line 570
$memory_2 = "c_rt_lib";
#line 570
$memory_3 = "";
#line 570
$memory_1 = generator_c_priv::get_fun_name($memory_2, $memory_0, $memory_3);
#line 570
undef($memory_3);
#line 570
undef($memory_2);
#line 570
undef($memory_0);
#line 570
return $memory_1;
#line 570
undef($memory_1);
#line 570
undef($memory_0);
#line 570
return;
}

sub generator_c_priv::generate_imm($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];
#line 574
$memory_2 = nl::is_hash($memory_1);
#line 574
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 574
if (c_rt_lib::check_true($memory_2)) {goto label_2;}
#line 575
$memory_4 = "hash_mk_dec";
#line 575
$memory_3 = generator_c_priv::get_lib_fun($memory_4);
#line 575
undef($memory_4);
#line 575
$memory_4 = "(";
#line 575
$memory_3 = $memory_3 . $memory_4;
#line 575
undef($memory_4);
#line 575
$memory_4 = hash::size($memory_1);
#line 575
$memory_3 = $memory_3 . $memory_4;
#line 575
undef($memory_4);
#line 575
generator_c_priv::print($memory_0, $memory_3);
#line 575
undef($memory_3);
#line 576
$memory_5 = c_rt_lib::init_iter($memory_1);
#line 576
label_5:
#line 576
$memory_3 = c_rt_lib::is_end_hash($memory_5);
#line 576
if (c_rt_lib::check_true($memory_3)) {goto label_3;}
#line 576
$memory_3 = c_rt_lib::get_key_iter($memory_5);
#line 576
$memory_4 = c_rt_lib::hash_get_value($memory_1, $memory_3);
#line 577
$memory_6 = ", ";
#line 577
generator_c_priv::print($memory_0, $memory_6);
#line 577
undef($memory_6);
#line 578
$memory_6 = generator_c_priv::get_const_sim($memory_0, $memory_3);
#line 578
generator_c_priv::print($memory_0, $memory_6);
#line 578
undef($memory_6);
#line 579
$memory_6 = ", ";
#line 579
generator_c_priv::print($memory_0, $memory_6);
#line 579
undef($memory_6);
#line 580
generator_c_priv::generate_imm($memory_0, $memory_4);
#line 581
$memory_5 = c_rt_lib::next_iter($memory_5);
#line 581
goto label_5;
#line 581
label_3:
#line 581
undef($memory_3);
#line 581
undef($memory_4);
#line 581
undef($memory_5);
#line 582
$memory_3 = ")";
#line 582
generator_c_priv::print($memory_0, $memory_3);
#line 582
undef($memory_3);
#line 583
goto label_1;
#line 583
label_2:
#line 583
$memory_2 = nl::is_array($memory_1);
#line 583
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 583
if (c_rt_lib::check_true($memory_2)) {goto label_6;}
#line 584
$memory_4 = "array_mk_dec";
#line 584
$memory_3 = generator_c_priv::get_lib_fun($memory_4);
#line 584
undef($memory_4);
#line 584
$memory_4 = "(";
#line 584
$memory_3 = $memory_3 . $memory_4;
#line 584
undef($memory_4);
#line 584
$memory_4 = array::len($memory_1);
#line 584
$memory_3 = $memory_3 . $memory_4;
#line 584
undef($memory_4);
#line 584
generator_c_priv::print($memory_0, $memory_3);
#line 584
undef($memory_3);
#line 585
$memory_4 = 0;
#line 585
$memory_5 = 1;
#line 585
$memory_6 = c_rt_lib::array_len($memory_1);
#line 585
label_9:
#line 585
$memory_7 = c_rt_lib::to_nl($memory_4 >= $memory_6);
#line 585
if (c_rt_lib::check_true($memory_7)) {goto label_7;}
#line 585
$memory_3 = $memory_1->[$memory_4];
#line 586
$memory_8 = ", ";
#line 586
generator_c_priv::print($memory_0, $memory_8);
#line 586
undef($memory_8);
#line 587
generator_c_priv::generate_imm($memory_0, $memory_3);
#line 588
$memory_4 = $memory_4 + $memory_5;
#line 588
goto label_9;
#line 588
label_7:
#line 588
undef($memory_3);
#line 588
undef($memory_4);
#line 588
undef($memory_5);
#line 588
undef($memory_6);
#line 588
undef($memory_7);
#line 589
$memory_3 = ")";
#line 589
generator_c_priv::print($memory_0, $memory_3);
#line 589
undef($memory_3);
#line 590
goto label_1;
#line 590
label_6:
#line 590
$memory_2 = nl::is_variant($memory_1);
#line 590
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 590
if (c_rt_lib::check_true($memory_2)) {goto label_10;}
#line 591
$memory_5 = ptd::sim();
#line 591
$memory_6 = ov::get_element($memory_1);
#line 591
$memory_4 = ptd::ensure($memory_5, $memory_6);
#line 591
undef($memory_6);
#line 591
undef($memory_5);
#line 591
$memory_3 = generator_c_priv::get_const_sim($memory_0, $memory_4);
#line 591
undef($memory_4);
#line 592
$memory_4 = ov::has_value($memory_1);
#line 592
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 592
if (c_rt_lib::check_true($memory_4)) {goto label_12;}
#line 593
$memory_6 = "ov_mk_arg_dec";
#line 593
$memory_5 = generator_c_priv::get_lib_fun($memory_6);
#line 593
undef($memory_6);
#line 593
$memory_6 = "(";
#line 593
$memory_5 = $memory_5 . $memory_6;
#line 593
undef($memory_6);
#line 593
$memory_5 = $memory_5 . $memory_3;
#line 593
$memory_6 = ", ";
#line 593
$memory_5 = $memory_5 . $memory_6;
#line 593
undef($memory_6);
#line 593
generator_c_priv::print($memory_0, $memory_5);
#line 593
undef($memory_5);
#line 594
$memory_5 = ov::get_value($memory_1);
#line 594
generator_c_priv::generate_imm($memory_0, $memory_5);
#line 594
undef($memory_5);
#line 595
$memory_5 = ")";
#line 595
generator_c_priv::print($memory_0, $memory_5);
#line 595
undef($memory_5);
#line 596
goto label_11;
#line 596
label_12:
#line 597
$memory_6 = "ov_mk_none";
#line 597
$memory_5 = generator_c_priv::get_lib_fun($memory_6);
#line 597
undef($memory_6);
#line 597
$memory_6 = "(";
#line 597
$memory_5 = $memory_5 . $memory_6;
#line 597
undef($memory_6);
#line 597
$memory_5 = $memory_5 . $memory_3;
#line 597
$memory_6 = ")";
#line 597
$memory_5 = $memory_5 . $memory_6;
#line 597
undef($memory_6);
#line 597
generator_c_priv::print($memory_0, $memory_5);
#line 597
undef($memory_5);
#line 598
goto label_11;
#line 598
label_11:
#line 598
undef($memory_4);
#line 598
undef($memory_3);
#line 599
goto label_1;
#line 599
label_10:
#line 599
$memory_2 = nl::is_sim($memory_1);
#line 599
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 599
if (c_rt_lib::check_true($memory_2)) {goto label_13;}
#line 600
$memory_5 = ptd::sim();
#line 600
$memory_4 = ptd::ensure($memory_5, $memory_1);
#line 600
undef($memory_5);
#line 600
$memory_3 = generator_c_priv::get_const_sim($memory_0, $memory_4);
#line 600
undef($memory_4);
#line 600
generator_c_priv::print($memory_0, $memory_3);
#line 600
undef($memory_3);
#line 601
goto label_1;
#line 601
label_13:
#line 602
$memory_3 = [];
#line 602
die(dfile::ssave($memory_3));
#line 602
undef($memory_3);
#line 603
goto label_1;
#line 603
label_1:
#line 603
undef($memory_2);
#line 603
undef($memory_1);
#line 603
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub generator_c_priv::print_cmd($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;my $memory_13;my $memory_14;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];
#line 607
$memory_2 = "#line ";
#line 607
$memory_3 = $memory_1->{'debug'};
#line 607
$memory_3 = $memory_3->{'nast_debug'};
#line 607
$memory_3 = $memory_3->{'begin'};
#line 607
$memory_3 = $memory_3->{'line'};
#line 607
$memory_2 = $memory_2 . $memory_3;
#line 607
undef($memory_3);
#line 607
$memory_3 = string::lf();
#line 607
$memory_2 = $memory_2 . $memory_3;
#line 607
undef($memory_3);
#line 607
generator_c_priv::print($memory_0, $memory_2);
#line 607
undef($memory_2);
#line 608
$memory_2 = $memory_1->{'cmd'};
#line 608
$memory_3 = c_rt_lib::ov_is($memory_2, 'arr_decl');
#line 608
if (c_rt_lib::check_true($memory_3)) {goto label_2;}
#line 613
$memory_3 = c_rt_lib::ov_is($memory_2, 'hash_decl');
#line 613
if (c_rt_lib::check_true($memory_3)) {goto label_3;}
#line 621
$memory_3 = c_rt_lib::ov_is($memory_2, 'func');
#line 621
if (c_rt_lib::check_true($memory_3)) {goto label_4;}
#line 628
$memory_3 = c_rt_lib::ov_is($memory_2, 'call');
#line 628
if (c_rt_lib::check_true($memory_3)) {goto label_5;}
#line 630
$memory_3 = c_rt_lib::ov_is($memory_2, 'una_op');
#line 630
if (c_rt_lib::check_true($memory_3)) {goto label_6;}
#line 634
$memory_3 = c_rt_lib::ov_is($memory_2, 'bin_op');
#line 634
if (c_rt_lib::check_true($memory_3)) {goto label_7;}
#line 641
$memory_3 = c_rt_lib::ov_is($memory_2, 'ov_is');
#line 641
if (c_rt_lib::check_true($memory_3)) {goto label_8;}
#line 644
$memory_3 = c_rt_lib::ov_is($memory_2, 'ov_as');
#line 644
if (c_rt_lib::check_true($memory_3)) {goto label_9;}
#line 647
$memory_3 = c_rt_lib::ov_is($memory_2, 'return');
#line 647
if (c_rt_lib::check_true($memory_3)) {goto label_10;}
#line 655
$memory_3 = c_rt_lib::ov_is($memory_2, 'die');
#line 655
if (c_rt_lib::check_true($memory_3)) {goto label_11;}
#line 657
$memory_3 = c_rt_lib::ov_is($memory_2, 'move');
#line 657
if (c_rt_lib::check_true($memory_3)) {goto label_12;}
#line 661
$memory_3 = c_rt_lib::ov_is($memory_2, 'load_const');
#line 661
if (c_rt_lib::check_true($memory_3)) {goto label_13;}
#line 666
$memory_3 = c_rt_lib::ov_is($memory_2, 'get_frm_idx');
#line 666
if (c_rt_lib::check_true($memory_3)) {goto label_14;}
#line 669
$memory_3 = c_rt_lib::ov_is($memory_2, 'set_at_idx');
#line 669
if (c_rt_lib::check_true($memory_3)) {goto label_15;}
#line 672
$memory_3 = c_rt_lib::ov_is($memory_2, 'get_val');
#line 672
if (c_rt_lib::check_true($memory_3)) {goto label_16;}
#line 676
$memory_3 = c_rt_lib::ov_is($memory_2, 'set_val');
#line 676
if (c_rt_lib::check_true($memory_3)) {goto label_17;}
#line 679
$memory_3 = c_rt_lib::ov_is($memory_2, 'ov_mk');
#line 679
if (c_rt_lib::check_true($memory_3)) {goto label_18;}
#line 693
$memory_3 = c_rt_lib::ov_is($memory_2, 'prt_lbl');
#line 693
if (c_rt_lib::check_true($memory_3)) {goto label_19;}
#line 696
$memory_3 = c_rt_lib::ov_is($memory_2, 'if_goto');
#line 696
if (c_rt_lib::check_true($memory_3)) {goto label_20;}
#line 701
$memory_3 = c_rt_lib::ov_is($memory_2, 'goto');
#line 701
if (c_rt_lib::check_true($memory_3)) {goto label_21;}
#line 703
$memory_3 = c_rt_lib::ov_is($memory_2, 'clear');
#line 703
if (c_rt_lib::check_true($memory_3)) {goto label_22;}
#line 703
$memory_3 = "NOMATCHALERT";
#line 703
$memory_3 = [$memory_3,$memory_2];
#line 703
die(dfile::ssave($memory_3));
#line 608
label_2:
#line 608
$memory_4 = c_rt_lib::ov_as($memory_2, 'arr_decl');
#line 609
$memory_7 = $memory_4->{'src'};
#line 609
$memory_6 = array::len($memory_7);
#line 609
undef($memory_7);
#line 609
$memory_5 = [$memory_6];
#line 609
undef($memory_6);
#line 610
$memory_6 = $memory_4->{'src'};
#line 610
$memory_8 = 0;
#line 610
$memory_9 = 1;
#line 610
$memory_10 = c_rt_lib::array_len($memory_6);
#line 610
label_25:
#line 610
$memory_11 = c_rt_lib::to_nl($memory_8 >= $memory_10);
#line 610
if (c_rt_lib::check_true($memory_11)) {goto label_23;}
#line 610
$memory_7 = $memory_6->[$memory_8];
#line 610
$memory_12 = generator_c_priv::get_reg($memory_0, $memory_7);
#line 610
array::push($memory_5, $memory_12);
#line 610
undef($memory_12);
#line 610
$memory_8 = $memory_8 + $memory_9;
#line 610
goto label_25;
#line 610
label_23:
#line 610
undef($memory_6);
#line 610
undef($memory_7);
#line 610
undef($memory_8);
#line 610
undef($memory_9);
#line 610
undef($memory_10);
#line 610
undef($memory_11);
#line 611
$memory_7 = "array_mk";
#line 611
$memory_6 = generator_c_priv::get_fun_lib($memory_7, $memory_5);
#line 611
undef($memory_7);
#line 612
$memory_8 = $memory_4->{'dest'};
#line 612
$memory_7 = generator_c_priv::get_assign($memory_0, $memory_8, $memory_6);
#line 612
undef($memory_8);
#line 612
generator_c_priv::print($memory_0, $memory_7);
#line 612
undef($memory_7);
#line 612
undef($memory_5);
#line 612
undef($memory_6);
#line 612
undef($memory_4);
#line 613
goto label_1;
#line 613
label_3:
#line 613
$memory_4 = c_rt_lib::ov_as($memory_2, 'hash_decl');
#line 614
$memory_7 = $memory_4->{'src'};
#line 614
$memory_6 = array::len($memory_7);
#line 614
undef($memory_7);
#line 614
$memory_5 = [$memory_6];
#line 614
undef($memory_6);
#line 615
$memory_6 = $memory_4->{'src'};
#line 615
$memory_8 = 0;
#line 615
$memory_9 = 1;
#line 615
$memory_10 = c_rt_lib::array_len($memory_6);
#line 615
label_28:
#line 615
$memory_11 = c_rt_lib::to_nl($memory_8 >= $memory_10);
#line 615
if (c_rt_lib::check_true($memory_11)) {goto label_26;}
#line 615
$memory_7 = $memory_6->[$memory_8];
#line 616
$memory_13 = $memory_7->{'key'};
#line 616
$memory_12 = generator_c_priv::get_const_sim($memory_0, $memory_13);
#line 616
undef($memory_13);
#line 616
array::push($memory_5, $memory_12);
#line 616
undef($memory_12);
#line 617
$memory_13 = $memory_7->{'val'};
#line 617
$memory_12 = generator_c_priv::get_reg($memory_0, $memory_13);
#line 617
undef($memory_13);
#line 617
array::push($memory_5, $memory_12);
#line 617
undef($memory_12);
#line 618
$memory_8 = $memory_8 + $memory_9;
#line 618
goto label_28;
#line 618
label_26:
#line 618
undef($memory_6);
#line 618
undef($memory_7);
#line 618
undef($memory_8);
#line 618
undef($memory_9);
#line 618
undef($memory_10);
#line 618
undef($memory_11);
#line 619
$memory_7 = "hash_mk";
#line 619
$memory_6 = generator_c_priv::get_fun_lib($memory_7, $memory_5);
#line 619
undef($memory_7);
#line 620
$memory_8 = $memory_4->{'dest'};
#line 620
$memory_7 = generator_c_priv::get_assign($memory_0, $memory_8, $memory_6);
#line 620
undef($memory_8);
#line 620
generator_c_priv::print($memory_0, $memory_7);
#line 620
undef($memory_7);
#line 620
undef($memory_5);
#line 620
undef($memory_6);
#line 620
undef($memory_4);
#line 621
goto label_1;
#line 621
label_4:
#line 621
$memory_4 = c_rt_lib::ov_as($memory_2, 'func');
#line 622
$memory_6 = "func_new";
#line 622
$memory_9 = $memory_4->{'module'};
#line 622
$memory_10 = $memory_4->{'name'};
#line 622
$memory_11 = $memory_0->{'mod_name'};
#line 622
$memory_8 = generator_c_priv::get_fun_name($memory_9, $memory_10, $memory_11);
#line 622
undef($memory_11);
#line 622
undef($memory_10);
#line 622
undef($memory_9);
#line 622
$memory_9 = "0ptr";
#line 622
$memory_8 = $memory_8 . $memory_9;
#line 622
undef($memory_9);
#line 622
$memory_10 = $memory_4->{'module'};
#line 622
$memory_9 = generator_c_priv::get_const_sim($memory_0, $memory_10);
#line 622
undef($memory_10);
#line 622
$memory_11 = $memory_4->{'name'};
#line 622
$memory_10 = generator_c_priv::get_const_sim($memory_0, $memory_11);
#line 622
undef($memory_11);
#line 622
$memory_7 = [$memory_8,$memory_9,$memory_10];
#line 622
undef($memory_8);
#line 622
undef($memory_9);
#line 622
undef($memory_10);
#line 622
$memory_5 = generator_c_priv::get_fun_lib($memory_6, $memory_7);
#line 622
undef($memory_7);
#line 622
undef($memory_6);
#line 627
$memory_7 = $memory_4->{'dest'};
#line 627
$memory_6 = generator_c_priv::get_assign($memory_0, $memory_7, $memory_5);
#line 627
undef($memory_7);
#line 627
generator_c_priv::print($memory_0, $memory_6);
#line 627
undef($memory_6);
#line 627
undef($memory_5);
#line 627
undef($memory_4);
#line 628
goto label_1;
#line 628
label_5:
#line 628
$memory_4 = c_rt_lib::ov_as($memory_2, 'call');
#line 629
generator_c_priv::generate_call($memory_0, $memory_4);
#line 629
undef($memory_4);
#line 630
goto label_1;
#line 630
label_6:
#line 630
$memory_4 = c_rt_lib::ov_as($memory_2, 'una_op');
#line 631
$memory_6 = generator_c_priv::get_unary_ops();
#line 631
$memory_7 = $memory_4->{'op'};
#line 631
$memory_5 = hash::get_value($memory_6, $memory_7);
#line 631
undef($memory_7);
#line 631
undef($memory_6);
#line 632
$memory_9 = $memory_4->{'src'};
#line 632
$memory_8 = generator_c_priv::get_reg($memory_0, $memory_9);
#line 632
undef($memory_9);
#line 632
$memory_7 = [$memory_8];
#line 632
undef($memory_8);
#line 632
$memory_6 = generator_c_priv::get_fun_lib($memory_5, $memory_7);
#line 632
undef($memory_7);
#line 633
$memory_8 = $memory_4->{'dest'};
#line 633
$memory_7 = generator_c_priv::get_assign($memory_0, $memory_8, $memory_6);
#line 633
undef($memory_8);
#line 633
generator_c_priv::print($memory_0, $memory_7);
#line 633
undef($memory_7);
#line 633
undef($memory_5);
#line 633
undef($memory_6);
#line 633
undef($memory_4);
#line 634
goto label_1;
#line 634
label_7:
#line 634
$memory_4 = c_rt_lib::ov_as($memory_2, 'bin_op');
#line 635
$memory_6 = generator_c_priv::get_bin_ops();
#line 635
$memory_7 = $memory_4->{'op'};
#line 635
$memory_5 = hash::get_value($memory_6, $memory_7);
#line 635
undef($memory_7);
#line 635
undef($memory_6);
#line 636
$memory_6 = $memory_4->{'dest'};
#line 636
$memory_8 = $memory_4->{'left'};
#line 636
$memory_6 = c_rt_lib::to_nl($memory_6 eq $memory_8);
#line 636
undef($memory_8);
#line 636
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 636
if (c_rt_lib::check_true($memory_7)) {goto label_31;}
#line 636
$memory_8 = generator_c_priv::get_bin_ops_mod();
#line 636
$memory_9 = $memory_4->{'op'};
#line 636
$memory_6 = hash::has_key($memory_8, $memory_9);
#line 636
undef($memory_9);
#line 636
undef($memory_8);
#line 636
label_31:
#line 636
undef($memory_7);
#line 636
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 636
if (c_rt_lib::check_true($memory_6)) {goto label_30;}
#line 637
$memory_8 = generator_c_priv::get_bin_ops_mod();
#line 637
$memory_9 = $memory_4->{'op'};
#line 637
$memory_7 = hash::get_value($memory_8, $memory_9);
#line 637
undef($memory_9);
#line 637
undef($memory_8);
#line 637
$memory_5 = $memory_7;
#line 637
undef($memory_7);
#line 638
goto label_30;
#line 638
label_30:
#line 638
undef($memory_6);
#line 639
$memory_9 = $memory_4->{'left'};
#line 639
$memory_8 = generator_c_priv::get_reg($memory_0, $memory_9);
#line 639
undef($memory_9);
#line 639
$memory_10 = $memory_4->{'right'};
#line 639
$memory_9 = generator_c_priv::get_reg($memory_0, $memory_10);
#line 639
undef($memory_10);
#line 639
$memory_7 = [$memory_8,$memory_9];
#line 639
undef($memory_8);
#line 639
undef($memory_9);
#line 639
$memory_6 = generator_c_priv::get_fun_lib($memory_5, $memory_7);
#line 639
undef($memory_7);
#line 640
$memory_8 = $memory_4->{'dest'};
#line 640
$memory_7 = generator_c_priv::get_assign($memory_0, $memory_8, $memory_6);
#line 640
undef($memory_8);
#line 640
generator_c_priv::print($memory_0, $memory_7);
#line 640
undef($memory_7);
#line 640
undef($memory_5);
#line 640
undef($memory_6);
#line 640
undef($memory_4);
#line 641
goto label_1;
#line 641
label_8:
#line 641
$memory_4 = c_rt_lib::ov_as($memory_2, 'ov_is');
#line 642
$memory_6 = "priv_is";
#line 642
$memory_9 = $memory_4->{'src'};
#line 642
$memory_8 = generator_c_priv::get_reg($memory_0, $memory_9);
#line 642
undef($memory_9);
#line 642
$memory_10 = $memory_4->{'type'};
#line 642
$memory_9 = generator_c_priv::get_const_sim($memory_0, $memory_10);
#line 642
undef($memory_10);
#line 642
$memory_7 = [$memory_8,$memory_9];
#line 642
undef($memory_8);
#line 642
undef($memory_9);
#line 642
$memory_5 = generator_c_priv::get_fun_lib($memory_6, $memory_7);
#line 642
undef($memory_7);
#line 642
undef($memory_6);
#line 643
$memory_7 = $memory_4->{'dest'};
#line 643
$memory_6 = generator_c_priv::get_assign($memory_0, $memory_7, $memory_5);
#line 643
undef($memory_7);
#line 643
generator_c_priv::print($memory_0, $memory_6);
#line 643
undef($memory_6);
#line 643
undef($memory_5);
#line 643
undef($memory_4);
#line 644
goto label_1;
#line 644
label_9:
#line 644
$memory_4 = c_rt_lib::ov_as($memory_2, 'ov_as');
#line 645
$memory_6 = "priv_as";
#line 645
$memory_9 = $memory_4->{'src'};
#line 645
$memory_8 = generator_c_priv::get_reg($memory_0, $memory_9);
#line 645
undef($memory_9);
#line 645
$memory_10 = $memory_4->{'type'};
#line 645
$memory_9 = generator_c_priv::get_const_sim($memory_0, $memory_10);
#line 645
undef($memory_10);
#line 645
$memory_7 = [$memory_8,$memory_9];
#line 645
undef($memory_8);
#line 645
undef($memory_9);
#line 645
$memory_5 = generator_c_priv::get_fun_lib($memory_6, $memory_7);
#line 645
undef($memory_7);
#line 645
undef($memory_6);
#line 646
$memory_7 = $memory_4->{'dest'};
#line 646
$memory_6 = generator_c_priv::get_assign($memory_0, $memory_7, $memory_5);
#line 646
undef($memory_7);
#line 646
generator_c_priv::print($memory_0, $memory_6);
#line 646
undef($memory_6);
#line 646
undef($memory_5);
#line 646
undef($memory_4);
#line 647
goto label_1;
#line 647
label_10:
#line 647
$memory_4 = c_rt_lib::ov_as($memory_2, 'return');
#line 648
generator_c_priv::move_register_to_ref_args($memory_0);
#line 649
$memory_5 = "return ";
#line 649
generator_c_priv::print($memory_0, $memory_5);
#line 649
undef($memory_5);
#line 650
$memory_5 = c_rt_lib::ov_is($memory_4, 'val');
#line 650
if (c_rt_lib::check_true($memory_5)) {goto label_33;}
#line 652
$memory_5 = c_rt_lib::ov_is($memory_4, 'emp');
#line 652
if (c_rt_lib::check_true($memory_5)) {goto label_34;}
#line 652
$memory_5 = "NOMATCHALERT";
#line 652
$memory_5 = [$memory_5,$memory_4];
#line 652
die(dfile::ssave($memory_5));
#line 650
label_33:
#line 650
$memory_6 = c_rt_lib::ov_as($memory_4, 'val');
#line 651
$memory_7 = generator_c_priv::get_reg($memory_0, $memory_6);
#line 651
generator_c_priv::print($memory_0, $memory_7);
#line 651
undef($memory_7);
#line 651
undef($memory_6);
#line 652
goto label_32;
#line 652
label_34:
#line 653
$memory_6 = "NULL";
#line 653
generator_c_priv::print($memory_0, $memory_6);
#line 653
undef($memory_6);
#line 654
goto label_32;
#line 654
label_32:
#line 654
undef($memory_5);
#line 654
undef($memory_4);
#line 655
goto label_1;
#line 655
label_11:
#line 655
$memory_4 = c_rt_lib::ov_as($memory_2, 'die');
#line 656
$memory_5 = "nl_die_arg(";
#line 656
$memory_6 = generator_c_priv::get_reg($memory_0, $memory_4);
#line 656
$memory_5 = $memory_5 . $memory_6;
#line 656
undef($memory_6);
#line 656
$memory_6 = ")";
#line 656
$memory_5 = $memory_5 . $memory_6;
#line 656
undef($memory_6);
#line 656
generator_c_priv::print($memory_0, $memory_5);
#line 656
undef($memory_5);
#line 656
undef($memory_4);
#line 657
goto label_1;
#line 657
label_12:
#line 657
$memory_4 = c_rt_lib::ov_as($memory_2, 'move');
#line 658
$memory_5 = $memory_4->{'dest'};
#line 658
$memory_6 = "";
#line 658
$memory_5 = c_rt_lib::to_nl($memory_5 eq $memory_6);
#line 658
undef($memory_6);
#line 658
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 658
if (c_rt_lib::check_true($memory_5)) {goto label_36;}
#line 658
undef($memory_1);
#line 658
undef($memory_2);
#line 658
undef($memory_3);
#line 658
undef($memory_4);
#line 658
undef($memory_5);
#line 658
$_[0] = $memory_0;return;
#line 658
goto label_36;
#line 658
label_36:
#line 658
undef($memory_5);
#line 659
$memory_7 = $memory_4->{'dest'};
#line 659
$memory_6 = generator_c_priv::get_reg_ref($memory_0, $memory_7);
#line 659
undef($memory_7);
#line 659
$memory_8 = $memory_4->{'src'};
#line 659
$memory_7 = generator_c_priv::get_reg($memory_0, $memory_8);
#line 659
undef($memory_8);
#line 659
$memory_5 = [$memory_6,$memory_7];
#line 659
undef($memory_6);
#line 659
undef($memory_7);
#line 660
$memory_7 = "copy";
#line 660
$memory_6 = generator_c_priv::get_fun_lib($memory_7, $memory_5);
#line 660
undef($memory_7);
#line 660
generator_c_priv::print($memory_0, $memory_6);
#line 660
undef($memory_6);
#line 660
undef($memory_5);
#line 660
undef($memory_4);
#line 661
goto label_1;
#line 661
label_13:
#line 661
$memory_4 = c_rt_lib::ov_as($memory_2, 'load_const');
#line 662
$memory_5 = $memory_4->{'dest'};
#line 662
$memory_6 = "";
#line 662
$memory_5 = c_rt_lib::to_nl($memory_5 eq $memory_6);
#line 662
undef($memory_6);
#line 662
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 662
if (c_rt_lib::check_true($memory_5)) {goto label_38;}
#line 662
undef($memory_1);
#line 662
undef($memory_2);
#line 662
undef($memory_3);
#line 662
undef($memory_4);
#line 662
undef($memory_5);
#line 662
$_[0] = $memory_0;return;
#line 662
goto label_38;
#line 662
label_38:
#line 662
undef($memory_5);
#line 663
$memory_6 = "move";
#line 663
$memory_5 = generator_c_priv::get_lib_fun($memory_6);
#line 663
undef($memory_6);
#line 663
$memory_6 = "(";
#line 663
$memory_5 = $memory_5 . $memory_6;
#line 663
undef($memory_6);
#line 663
$memory_7 = $memory_4->{'dest'};
#line 663
$memory_6 = generator_c_priv::get_reg_ref($memory_0, $memory_7);
#line 663
undef($memory_7);
#line 663
$memory_5 = $memory_5 . $memory_6;
#line 663
undef($memory_6);
#line 663
$memory_6 = ",";
#line 663
$memory_5 = $memory_5 . $memory_6;
#line 663
undef($memory_6);
#line 663
generator_c_priv::print($memory_0, $memory_5);
#line 663
undef($memory_5);
#line 664
$memory_5 = $memory_4->{'val'};
#line 664
generator_c_priv::generate_imm($memory_0, $memory_5);
#line 664
undef($memory_5);
#line 665
$memory_5 = ")";
#line 665
generator_c_priv::print($memory_0, $memory_5);
#line 665
undef($memory_5);
#line 665
undef($memory_4);
#line 666
goto label_1;
#line 666
label_14:
#line 666
$memory_4 = c_rt_lib::ov_as($memory_2, 'get_frm_idx');
#line 667
$memory_6 = "array_get";
#line 667
$memory_9 = $memory_4->{'src'};
#line 667
$memory_8 = generator_c_priv::get_reg($memory_0, $memory_9);
#line 667
undef($memory_9);
#line 667
$memory_10 = $memory_4->{'idx'};
#line 667
$memory_9 = generator_c_priv::get_reg($memory_0, $memory_10);
#line 667
undef($memory_10);
#line 667
$memory_7 = [$memory_8,$memory_9];
#line 667
undef($memory_8);
#line 667
undef($memory_9);
#line 667
$memory_5 = generator_c_priv::get_fun_lib($memory_6, $memory_7);
#line 667
undef($memory_7);
#line 667
undef($memory_6);
#line 668
$memory_7 = $memory_4->{'dest'};
#line 668
$memory_6 = generator_c_priv::get_assign($memory_0, $memory_7, $memory_5);
#line 668
undef($memory_7);
#line 668
generator_c_priv::print($memory_0, $memory_6);
#line 668
undef($memory_6);
#line 668
undef($memory_5);
#line 668
undef($memory_4);
#line 669
goto label_1;
#line 669
label_15:
#line 669
$memory_4 = c_rt_lib::ov_as($memory_2, 'set_at_idx');
#line 670
$memory_6 = "array_set";
#line 670
$memory_9 = $memory_4->{'src'};
#line 670
$memory_8 = generator_c_priv::get_reg_ref($memory_0, $memory_9);
#line 670
undef($memory_9);
#line 670
$memory_10 = $memory_4->{'idx'};
#line 670
$memory_9 = generator_c_priv::get_reg($memory_0, $memory_10);
#line 670
undef($memory_10);
#line 670
$memory_11 = $memory_4->{'val'};
#line 670
$memory_10 = generator_c_priv::get_reg($memory_0, $memory_11);
#line 670
undef($memory_11);
#line 670
$memory_7 = [$memory_8,$memory_9,$memory_10];
#line 670
undef($memory_8);
#line 670
undef($memory_9);
#line 670
undef($memory_10);
#line 670
$memory_5 = generator_c_priv::get_fun_lib($memory_6, $memory_7);
#line 670
undef($memory_7);
#line 670
undef($memory_6);
#line 670
generator_c_priv::print($memory_0, $memory_5);
#line 670
undef($memory_5);
#line 670
undef($memory_4);
#line 672
goto label_1;
#line 672
label_16:
#line 672
$memory_4 = c_rt_lib::ov_as($memory_2, 'get_val');
#line 673
$memory_6 = "hash_get_value_dec";
#line 673
$memory_9 = $memory_4->{'src'};
#line 673
$memory_8 = generator_c_priv::get_reg($memory_0, $memory_9);
#line 673
undef($memory_9);
#line 673
$memory_10 = $memory_4->{'key'};
#line 673
$memory_9 = generator_c_priv::get_const_sim($memory_0, $memory_10);
#line 673
undef($memory_10);
#line 673
$memory_7 = [$memory_8,$memory_9];
#line 673
undef($memory_8);
#line 673
undef($memory_9);
#line 673
$memory_5 = generator_c_priv::get_fun_lib($memory_6, $memory_7);
#line 673
undef($memory_7);
#line 673
undef($memory_6);
#line 675
$memory_7 = $memory_4->{'dest'};
#line 675
$memory_6 = generator_c_priv::get_assign($memory_0, $memory_7, $memory_5);
#line 675
undef($memory_7);
#line 675
generator_c_priv::print($memory_0, $memory_6);
#line 675
undef($memory_6);
#line 675
undef($memory_5);
#line 675
undef($memory_4);
#line 676
goto label_1;
#line 676
label_17:
#line 676
$memory_4 = c_rt_lib::ov_as($memory_2, 'set_val');
#line 677
$memory_6 = "hash_set_value_dec";
#line 677
$memory_9 = $memory_4->{'src'};
#line 677
$memory_8 = generator_c_priv::get_reg_ref($memory_0, $memory_9);
#line 677
undef($memory_9);
#line 677
$memory_10 = $memory_4->{'key'};
#line 677
$memory_9 = generator_c_priv::get_const_sim($memory_0, $memory_10);
#line 677
undef($memory_10);
#line 677
$memory_11 = $memory_4->{'val'};
#line 677
$memory_10 = generator_c_priv::get_reg($memory_0, $memory_11);
#line 677
undef($memory_11);
#line 677
$memory_7 = [$memory_8,$memory_9,$memory_10];
#line 677
undef($memory_8);
#line 677
undef($memory_9);
#line 677
undef($memory_10);
#line 677
$memory_5 = generator_c_priv::get_fun_lib($memory_6, $memory_7);
#line 677
undef($memory_7);
#line 677
undef($memory_6);
#line 677
generator_c_priv::print($memory_0, $memory_5);
#line 677
undef($memory_5);
#line 677
undef($memory_4);
#line 679
goto label_1;
#line 679
label_18:
#line 679
$memory_4 = c_rt_lib::ov_as($memory_2, 'ov_mk');
#line 681
$memory_6 = $memory_4->{'src'};
#line 681
$memory_6 = c_rt_lib::ov_is($memory_6, 'emp');
#line 681
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 681
if (c_rt_lib::check_true($memory_7)) {goto label_41;}
#line 681
$memory_6 = $memory_4->{'name'};
#line 681
$memory_8 = "TRUE";
#line 681
$memory_6 = c_rt_lib::to_nl($memory_6 eq $memory_8);
#line 681
undef($memory_8);
#line 681
label_41:
#line 681
undef($memory_7);
#line 681
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 681
if (c_rt_lib::check_true($memory_6)) {goto label_40;}
#line 682
$memory_8 = "get_true";
#line 682
$memory_9 = [];
#line 682
$memory_7 = generator_c_priv::get_fun_lib($memory_8, $memory_9);
#line 682
undef($memory_9);
#line 682
undef($memory_8);
#line 682
$memory_5 = $memory_7;
#line 682
undef($memory_7);
#line 683
goto label_39;
#line 683
label_40:
#line 683
$memory_6 = $memory_4->{'src'};
#line 683
$memory_6 = c_rt_lib::ov_is($memory_6, 'emp');
#line 683
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 683
if (c_rt_lib::check_true($memory_7)) {goto label_43;}
#line 683
$memory_6 = $memory_4->{'name'};
#line 683
$memory_8 = "FALSE";
#line 683
$memory_6 = c_rt_lib::to_nl($memory_6 eq $memory_8);
#line 683
undef($memory_8);
#line 683
label_43:
#line 683
undef($memory_7);
#line 683
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 683
if (c_rt_lib::check_true($memory_6)) {goto label_42;}
#line 684
$memory_8 = "get_false";
#line 684
$memory_9 = [];
#line 684
$memory_7 = generator_c_priv::get_fun_lib($memory_8, $memory_9);
#line 684
undef($memory_9);
#line 684
undef($memory_8);
#line 684
$memory_5 = $memory_7;
#line 684
undef($memory_7);
#line 685
goto label_39;
#line 685
label_42:
#line 686
$memory_7 = $memory_4->{'src'};
#line 686
$memory_8 = c_rt_lib::ov_is($memory_7, 'arg');
#line 686
if (c_rt_lib::check_true($memory_8)) {goto label_45;}
#line 688
$memory_8 = c_rt_lib::ov_is($memory_7, 'emp');
#line 688
if (c_rt_lib::check_true($memory_8)) {goto label_46;}
#line 688
$memory_8 = "NOMATCHALERT";
#line 688
$memory_8 = [$memory_8,$memory_7];
#line 688
die(dfile::ssave($memory_8));
#line 686
label_45:
#line 686
$memory_9 = c_rt_lib::ov_as($memory_7, 'arg');
#line 687
$memory_11 = "ov_mk_arg";
#line 687
$memory_14 = $memory_4->{'name'};
#line 687
$memory_13 = generator_c_priv::get_const_sim($memory_0, $memory_14);
#line 687
undef($memory_14);
#line 687
$memory_14 = generator_c_priv::get_reg($memory_0, $memory_9);
#line 687
$memory_12 = [$memory_13,$memory_14];
#line 687
undef($memory_13);
#line 687
undef($memory_14);
#line 687
$memory_10 = generator_c_priv::get_fun_lib($memory_11, $memory_12);
#line 687
undef($memory_12);
#line 687
undef($memory_11);
#line 687
$memory_5 = $memory_10;
#line 687
undef($memory_10);
#line 687
undef($memory_9);
#line 688
goto label_44;
#line 688
label_46:
#line 689
$memory_10 = "ov_mk_none";
#line 689
$memory_13 = $memory_4->{'name'};
#line 689
$memory_12 = generator_c_priv::get_const_sim($memory_0, $memory_13);
#line 689
undef($memory_13);
#line 689
$memory_11 = [$memory_12];
#line 689
undef($memory_12);
#line 689
$memory_9 = generator_c_priv::get_fun_lib($memory_10, $memory_11);
#line 689
undef($memory_11);
#line 689
undef($memory_10);
#line 689
$memory_5 = $memory_9;
#line 689
undef($memory_9);
#line 690
goto label_44;
#line 690
label_44:
#line 690
undef($memory_7);
#line 690
undef($memory_8);
#line 691
goto label_39;
#line 691
label_39:
#line 691
undef($memory_6);
#line 692
$memory_7 = $memory_4->{'dest'};
#line 692
$memory_6 = generator_c_priv::get_assign($memory_0, $memory_7, $memory_5);
#line 692
undef($memory_7);
#line 692
generator_c_priv::print($memory_0, $memory_6);
#line 692
undef($memory_6);
#line 692
undef($memory_5);
#line 692
undef($memory_4);
#line 693
goto label_1;
#line 693
label_19:
#line 693
$memory_4 = c_rt_lib::ov_as($memory_2, 'prt_lbl');
#line 694
$memory_5 = ":";
#line 694
$memory_5 = $memory_4 . $memory_5;
#line 694
$memory_6 = string::lf();
#line 694
$memory_5 = $memory_5 . $memory_6;
#line 694
undef($memory_6);
#line 694
generator_c_priv::print($memory_0, $memory_5);
#line 694
undef($memory_5);
#line 695
undef($memory_1);
#line 695
undef($memory_2);
#line 695
undef($memory_3);
#line 695
undef($memory_4);
#line 695
$_[0] = $memory_0;return;
#line 695
undef($memory_4);
#line 696
goto label_1;
#line 696
label_20:
#line 696
$memory_4 = c_rt_lib::ov_as($memory_2, 'if_goto');
#line 697
$memory_5 = "if(";
#line 697
generator_c_priv::print($memory_0, $memory_5);
#line 697
undef($memory_5);
#line 698
$memory_6 = "check_true_native";
#line 698
$memory_9 = $memory_4->{'src'};
#line 698
$memory_8 = generator_c_priv::get_reg($memory_0, $memory_9);
#line 698
undef($memory_9);
#line 698
$memory_7 = [$memory_8];
#line 698
undef($memory_8);
#line 698
$memory_5 = generator_c_priv::get_fun_lib($memory_6, $memory_7);
#line 698
undef($memory_7);
#line 698
undef($memory_6);
#line 698
generator_c_priv::print($memory_0, $memory_5);
#line 698
undef($memory_5);
#line 699
$memory_5 = "){ goto ";
#line 699
$memory_6 = $memory_4->{'dest'};
#line 699
$memory_5 = $memory_5 . $memory_6;
#line 699
undef($memory_6);
#line 699
$memory_6 = ";}";
#line 699
$memory_5 = $memory_5 . $memory_6;
#line 699
undef($memory_6);
#line 699
$memory_6 = string::lf();
#line 699
$memory_5 = $memory_5 . $memory_6;
#line 699
undef($memory_6);
#line 699
generator_c_priv::print($memory_0, $memory_5);
#line 699
undef($memory_5);
#line 700
undef($memory_1);
#line 700
undef($memory_2);
#line 700
undef($memory_3);
#line 700
undef($memory_4);
#line 700
$_[0] = $memory_0;return;
#line 700
undef($memory_4);
#line 701
goto label_1;
#line 701
label_21:
#line 701
$memory_4 = c_rt_lib::ov_as($memory_2, 'goto');
#line 702
$memory_5 = "goto ";
#line 702
$memory_5 = $memory_5 . $memory_4;
#line 702
generator_c_priv::print($memory_0, $memory_5);
#line 702
undef($memory_5);
#line 702
undef($memory_4);
#line 703
goto label_1;
#line 703
label_22:
#line 703
$memory_4 = c_rt_lib::ov_as($memory_2, 'clear');
#line 704
$memory_6 = "clear";
#line 704
$memory_8 = generator_c_priv::get_reg_ref($memory_0, $memory_4);
#line 704
$memory_7 = [$memory_8];
#line 704
undef($memory_8);
#line 704
$memory_5 = generator_c_priv::get_fun_lib($memory_6, $memory_7);
#line 704
undef($memory_7);
#line 704
undef($memory_6);
#line 704
generator_c_priv::print($memory_0, $memory_5);
#line 704
undef($memory_5);
#line 704
undef($memory_4);
#line 705
goto label_1;
#line 705
label_1:
#line 705
undef($memory_2);
#line 705
undef($memory_3);
#line 706
$memory_2 = ";";
#line 706
$memory_3 = string::lf();
#line 706
$memory_2 = $memory_2 . $memory_3;
#line 706
undef($memory_3);
#line 706
generator_c_priv::print($memory_0, $memory_2);
#line 706
undef($memory_2);
#line 706
undef($memory_1);
#line 706
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub generator_c_priv::get_assign($$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];$memory_2 = $_[2];
#line 710
$memory_3 = "";
#line 710
$memory_3 = c_rt_lib::to_nl($memory_1 eq $memory_3);
#line 710
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 710
if (c_rt_lib::check_true($memory_3)) {goto label_2;}
#line 711
$memory_5 = "delete";
#line 711
$memory_6 = [$memory_2];
#line 711
$memory_4 = generator_c_priv::get_fun_lib($memory_5, $memory_6);
#line 711
undef($memory_6);
#line 711
undef($memory_5);
#line 711
undef($memory_1);
#line 711
undef($memory_2);
#line 711
undef($memory_3);
#line 711
$_[0] = $memory_0;return $memory_4;
#line 711
undef($memory_4);
#line 712
goto label_1;
#line 712
label_2:
#line 713
$memory_5 = "move";
#line 713
$memory_7 = generator_c_priv::get_reg_ref($memory_0, $memory_1);
#line 713
$memory_6 = [$memory_7,$memory_2];
#line 713
undef($memory_7);
#line 713
$memory_4 = generator_c_priv::get_fun_lib($memory_5, $memory_6);
#line 713
undef($memory_6);
#line 713
undef($memory_5);
#line 713
undef($memory_1);
#line 713
undef($memory_2);
#line 713
undef($memory_3);
#line 713
$_[0] = $memory_0;return $memory_4;
#line 713
undef($memory_4);
#line 714
goto label_1;
#line 714
label_1:
#line 714
undef($memory_3);
#line 714
undef($memory_1);
#line 714
undef($memory_2);
#line 714
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub generator_c_priv::generate_call($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];
#line 718
$memory_3 = $memory_1->{'mod'};
#line 718
$memory_4 = $memory_1->{'fun_name'};
#line 718
$memory_5 = $memory_0->{'mod_name'};
#line 718
$memory_2 = generator_c_priv::get_fun_name($memory_3, $memory_4, $memory_5);
#line 718
undef($memory_5);
#line 718
undef($memory_4);
#line 718
undef($memory_3);
#line 718
$memory_3 = "(";
#line 718
$memory_2 = $memory_2 . $memory_3;
#line 718
undef($memory_3);
#line 719
$memory_4 = $memory_1->{'args'};
#line 719
$memory_3 = array::len($memory_4);
#line 719
undef($memory_4);
#line 719
$memory_4 = 0;
#line 719
$memory_5 = 1;
#line 719
label_3:
#line 719
$memory_6 = c_rt_lib::to_nl($memory_4 >= $memory_3);
#line 719
if (c_rt_lib::check_true($memory_6)) {goto label_1;}
#line 720
$memory_7 = 0;
#line 720
$memory_7 = c_rt_lib::to_nl($memory_7 == $memory_4);
#line 720
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 720
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 720
if (c_rt_lib::check_true($memory_7)) {goto label_5;}
#line 720
$memory_8 = ", ";
#line 720
$memory_2 = $memory_2 . $memory_8;
#line 720
undef($memory_8);
#line 720
goto label_5;
#line 720
label_5:
#line 720
undef($memory_7);
#line 721
$memory_7 = $memory_1->{'args'};
#line 721
$memory_7 = $memory_7->[$memory_4];
#line 721
$memory_8 = c_rt_lib::ov_is($memory_7, 'val');
#line 721
if (c_rt_lib::check_true($memory_8)) {goto label_7;}
#line 723
$memory_8 = c_rt_lib::ov_is($memory_7, 'ref');
#line 723
if (c_rt_lib::check_true($memory_8)) {goto label_8;}
#line 723
$memory_8 = "NOMATCHALERT";
#line 723
$memory_8 = [$memory_8,$memory_7];
#line 723
die(dfile::ssave($memory_8));
#line 721
label_7:
#line 721
$memory_9 = c_rt_lib::ov_as($memory_7, 'val');
#line 722
$memory_10 = generator_c_priv::get_reg($memory_0, $memory_9);
#line 722
$memory_2 = $memory_2 . $memory_10;
#line 722
undef($memory_10);
#line 722
undef($memory_9);
#line 723
goto label_6;
#line 723
label_8:
#line 723
$memory_9 = c_rt_lib::ov_as($memory_7, 'ref');
#line 724
$memory_10 = generator_c_priv::get_reg_ref($memory_0, $memory_9);
#line 724
$memory_2 = $memory_2 . $memory_10;
#line 724
undef($memory_10);
#line 724
undef($memory_9);
#line 725
goto label_6;
#line 725
label_6:
#line 725
undef($memory_7);
#line 725
undef($memory_8);
#line 726
$memory_4 = $memory_4 + $memory_5;
#line 726
goto label_3;
#line 726
label_1:
#line 726
undef($memory_3);
#line 726
undef($memory_4);
#line 726
undef($memory_5);
#line 726
undef($memory_6);
#line 727
$memory_3 = ")";
#line 727
$memory_2 = $memory_2 . $memory_3;
#line 727
undef($memory_3);
#line 728
$memory_4 = $memory_1->{'dest'};
#line 728
$memory_3 = generator_c_priv::get_assign($memory_0, $memory_4, $memory_2);
#line 728
undef($memory_4);
#line 728
generator_c_priv::print($memory_0, $memory_3);
#line 728
undef($memory_3);
#line 728
undef($memory_2);
#line 728
undef($memory_1);
#line 728
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub generator_c_priv::create_sim($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;$memory_0 = $_[0];
#line 732
$memory_1 = string_utils::is_integer($memory_0);
#line 732
$memory_1 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_1));
#line 732
if (c_rt_lib::check_true($memory_1)) {goto label_2;}
#line 733
$memory_3 = "int_new";
#line 733
$memory_2 = generator_c_priv::get_lib_fun($memory_3);
#line 733
undef($memory_3);
#line 733
$memory_3 = "(";
#line 733
$memory_2 = $memory_2 . $memory_3;
#line 733
undef($memory_3);
#line 733
$memory_2 = $memory_2 . $memory_0;
#line 733
$memory_3 = ")";
#line 733
$memory_2 = $memory_2 . $memory_3;
#line 733
undef($memory_3);
#line 733
undef($memory_0);
#line 733
undef($memory_1);
#line 733
return $memory_2;
#line 733
undef($memory_2);
#line 734
goto label_1;
#line 734
label_2:
#line 734
$memory_1 = string_utils::is_float($memory_0);
#line 734
$memory_1 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_1));
#line 734
if (c_rt_lib::check_true($memory_1)) {goto label_3;}
#line 735
$memory_3 = "float_new";
#line 735
$memory_2 = generator_c_priv::get_lib_fun($memory_3);
#line 735
undef($memory_3);
#line 735
$memory_3 = "(";
#line 735
$memory_2 = $memory_2 . $memory_3;
#line 735
undef($memory_3);
#line 735
$memory_2 = $memory_2 . $memory_0;
#line 735
$memory_3 = ")";
#line 735
$memory_2 = $memory_2 . $memory_3;
#line 735
undef($memory_3);
#line 735
undef($memory_0);
#line 735
undef($memory_1);
#line 735
return $memory_2;
#line 735
undef($memory_2);
#line 736
goto label_1;
#line 736
label_3:
#line 737
$memory_2 = "";
#line 737
$memory_2 = $memory_0 . $memory_2;
#line 738
$memory_4 = "\\";
#line 738
$memory_5 = "\\\\";
#line 738
$memory_3 = string::replace($memory_2, $memory_4, $memory_5);
#line 738
undef($memory_5);
#line 738
undef($memory_4);
#line 738
$memory_2 = $memory_3;
#line 738
undef($memory_3);
#line 739
$memory_4 = string::lf();
#line 739
$memory_5 = "\\n";
#line 739
$memory_3 = string::replace($memory_2, $memory_4, $memory_5);
#line 739
undef($memory_5);
#line 739
undef($memory_4);
#line 739
$memory_2 = $memory_3;
#line 739
undef($memory_3);
#line 740
$memory_4 = string::r();
#line 740
$memory_5 = "\\r";
#line 740
$memory_3 = string::replace($memory_2, $memory_4, $memory_5);
#line 740
undef($memory_5);
#line 740
undef($memory_4);
#line 740
$memory_2 = $memory_3;
#line 740
undef($memory_3);
#line 741
$memory_4 = string::tab();
#line 741
$memory_5 = "\\t";
#line 741
$memory_3 = string::replace($memory_2, $memory_4, $memory_5);
#line 741
undef($memory_5);
#line 741
undef($memory_4);
#line 741
$memory_2 = $memory_3;
#line 741
undef($memory_3);
#line 742
$memory_4 = "\"";
#line 742
$memory_5 = "\\\"";
#line 742
$memory_3 = string::replace($memory_2, $memory_4, $memory_5);
#line 742
undef($memory_5);
#line 742
undef($memory_4);
#line 742
$memory_2 = $memory_3;
#line 742
undef($memory_3);
#line 743
$memory_4 = "'";
#line 743
$memory_5 = "\\'";
#line 743
$memory_3 = string::replace($memory_2, $memory_4, $memory_5);
#line 743
undef($memory_5);
#line 743
undef($memory_4);
#line 743
$memory_2 = $memory_3;
#line 743
undef($memory_3);
#line 744
$memory_4 = "string_new";
#line 744
$memory_3 = generator_c_priv::get_lib_fun($memory_4);
#line 744
undef($memory_4);
#line 744
$memory_4 = "(\"";
#line 744
$memory_3 = $memory_3 . $memory_4;
#line 744
undef($memory_4);
#line 744
$memory_3 = $memory_3 . $memory_2;
#line 744
$memory_4 = "\")";
#line 744
$memory_3 = $memory_3 . $memory_4;
#line 744
undef($memory_4);
#line 744
undef($memory_0);
#line 744
undef($memory_1);
#line 744
undef($memory_2);
#line 744
return $memory_3;
#line 744
undef($memory_3);
#line 744
undef($memory_2);
#line 745
goto label_1;
#line 745
label_1:
#line 745
undef($memory_1);
#line 745
undef($memory_0);
#line 745
return;
}

sub generator_c_priv::create_sim_to_memory($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;$memory_0 = $_[0];$memory_1 = $_[1];
#line 749
$memory_2 = string_utils::is_integer($memory_0);
#line 749
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 749
if (c_rt_lib::check_true($memory_2)) {goto label_2;}
#line 750
$memory_4 = "int_new_to_memory";
#line 750
$memory_3 = generator_c_priv::get_lib_fun($memory_4);
#line 750
undef($memory_4);
#line 750
$memory_4 = "(";
#line 750
$memory_3 = $memory_3 . $memory_4;
#line 750
undef($memory_4);
#line 750
$memory_3 = $memory_3 . $memory_0;
#line 750
$memory_4 = ",";
#line 750
$memory_3 = $memory_3 . $memory_4;
#line 750
undef($memory_4);
#line 750
$memory_3 = $memory_3 . $memory_1;
#line 750
$memory_4 = ")";
#line 750
$memory_3 = $memory_3 . $memory_4;
#line 750
undef($memory_4);
#line 750
undef($memory_0);
#line 750
undef($memory_1);
#line 750
undef($memory_2);
#line 750
return $memory_3;
#line 750
undef($memory_3);
#line 751
goto label_1;
#line 751
label_2:
#line 751
$memory_2 = string_utils::is_float($memory_0);
#line 751
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 751
if (c_rt_lib::check_true($memory_2)) {goto label_3;}
#line 752
$memory_4 = "float_new_to_memory";
#line 752
$memory_3 = generator_c_priv::get_lib_fun($memory_4);
#line 752
undef($memory_4);
#line 752
$memory_4 = "(";
#line 752
$memory_3 = $memory_3 . $memory_4;
#line 752
undef($memory_4);
#line 752
$memory_3 = $memory_3 . $memory_0;
#line 752
$memory_4 = ",";
#line 752
$memory_3 = $memory_3 . $memory_4;
#line 752
undef($memory_4);
#line 752
$memory_3 = $memory_3 . $memory_1;
#line 752
$memory_4 = ")";
#line 752
$memory_3 = $memory_3 . $memory_4;
#line 752
undef($memory_4);
#line 752
undef($memory_0);
#line 752
undef($memory_1);
#line 752
undef($memory_2);
#line 752
return $memory_3;
#line 752
undef($memory_3);
#line 753
goto label_1;
#line 753
label_3:
#line 754
$memory_3 = "";
#line 754
$memory_3 = $memory_0 . $memory_3;
#line 755
$memory_5 = "\\";
#line 755
$memory_6 = "\\\\";
#line 755
$memory_4 = string::replace($memory_3, $memory_5, $memory_6);
#line 755
undef($memory_6);
#line 755
undef($memory_5);
#line 755
$memory_3 = $memory_4;
#line 755
undef($memory_4);
#line 756
$memory_5 = string::lf();
#line 756
$memory_6 = "\\n";
#line 756
$memory_4 = string::replace($memory_3, $memory_5, $memory_6);
#line 756
undef($memory_6);
#line 756
undef($memory_5);
#line 756
$memory_3 = $memory_4;
#line 756
undef($memory_4);
#line 757
$memory_5 = string::r();
#line 757
$memory_6 = "\\r";
#line 757
$memory_4 = string::replace($memory_3, $memory_5, $memory_6);
#line 757
undef($memory_6);
#line 757
undef($memory_5);
#line 757
$memory_3 = $memory_4;
#line 757
undef($memory_4);
#line 758
$memory_5 = string::tab();
#line 758
$memory_6 = "\\t";
#line 758
$memory_4 = string::replace($memory_3, $memory_5, $memory_6);
#line 758
undef($memory_6);
#line 758
undef($memory_5);
#line 758
$memory_3 = $memory_4;
#line 758
undef($memory_4);
#line 759
$memory_5 = "\"";
#line 759
$memory_6 = "\\\"";
#line 759
$memory_4 = string::replace($memory_3, $memory_5, $memory_6);
#line 759
undef($memory_6);
#line 759
undef($memory_5);
#line 759
$memory_3 = $memory_4;
#line 759
undef($memory_4);
#line 760
$memory_5 = "'";
#line 760
$memory_6 = "\\'";
#line 760
$memory_4 = string::replace($memory_3, $memory_5, $memory_6);
#line 760
undef($memory_6);
#line 760
undef($memory_5);
#line 760
$memory_3 = $memory_4;
#line 760
undef($memory_4);
#line 761
$memory_5 = "string_new_to_memory";
#line 761
$memory_4 = generator_c_priv::get_lib_fun($memory_5);
#line 761
undef($memory_5);
#line 761
$memory_5 = "(\"";
#line 761
$memory_4 = $memory_4 . $memory_5;
#line 761
undef($memory_5);
#line 761
$memory_4 = $memory_4 . $memory_3;
#line 761
$memory_5 = "\",";
#line 761
$memory_4 = $memory_4 . $memory_5;
#line 761
undef($memory_5);
#line 761
$memory_4 = $memory_4 . $memory_1;
#line 761
$memory_5 = ")";
#line 761
$memory_4 = $memory_4 . $memory_5;
#line 761
undef($memory_5);
#line 761
undef($memory_0);
#line 761
undef($memory_1);
#line 761
undef($memory_2);
#line 761
undef($memory_3);
#line 761
return $memory_4;
#line 761
undef($memory_4);
#line 761
undef($memory_3);
#line 762
goto label_1;
#line 762
label_1:
#line 762
undef($memory_2);
#line 762
undef($memory_0);
#line 762
undef($memory_1);
#line 762
return;
}
