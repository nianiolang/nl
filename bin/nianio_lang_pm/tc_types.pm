use c_rt_lib;
use hash;
use ptd;
use tct;
use boolean_t;
use nast;
use singleton;
sub tc_types_priv::op_def;
sub tc_types::get_bin_op_def;
sub tc_types_priv::get_binary_ops;
sub tc_types::errors_t;
sub tc_types::bin_op_type;
sub tc_types::defs_funs_t;
sub tc_types::return_t;
sub tc_types::modules_t;
sub tc_types::deref_type;
sub tc_types::deref_types;
sub tc_types::env;
sub tc_types::var_t;
sub tc_types::fun_arg_t;
sub tc_types::def_fun_t;
sub tc_types::vars_t;
sub tc_types::check_error_t;
sub tc_types::check_errors_t;
sub tc_types::type;
sub tc_types::value_src;
sub tc_types::lval_path;
sub tc_types::walk_arg;
sub tc_types::ref_t;
sub tc_types::stack_info_type;
sub tc_types::check_info;
sub tc_types::special_functions;

return 1;

sub tc_types_priv::op_def($$$$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];$memory_2 = $_[2];$memory_3 = $_[3];$memory_4 = $_[4];
#line 16
$memory_5 = {arg1 => $memory_2,arg2 => $memory_3,ret => $memory_4,};
#line 16
hash::set_value($memory_0, $memory_1, $memory_5);
#line 16
undef($memory_5);
#line 16
undef($memory_1);
#line 16
undef($memory_2);
#line 16
undef($memory_3);
#line 16
undef($memory_4);
#line 16
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub tc_types::get_bin_op_def($) {
my $memory_0;my $memory_1;my $memory_2;$memory_0 = $_[0];
#line 20
$memory_2 = tc_types_priv::get_binary_ops();
#line 20
$memory_1 = hash::get_value($memory_2, $memory_0);
#line 20
undef($memory_2);
#line 20
undef($memory_0);
#line 20
return $memory_1;
#line 20
undef($memory_1);
#line 20
undef($memory_0);
#line 20
return;
}

sub tc_types_priv::__get_binary_ops() {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;
#line 24
$memory_0 = {};
#line 25
$memory_1 = "*";
#line 25
$memory_2 = tct::sim();
#line 25
$memory_3 = tct::sim();
#line 25
$memory_4 = tct::sim();
#line 25
tc_types_priv::op_def($memory_0, $memory_1, $memory_2, $memory_3, $memory_4);
#line 25
undef($memory_4);
#line 25
undef($memory_3);
#line 25
undef($memory_2);
#line 25
undef($memory_1);
#line 26
$memory_1 = "/";
#line 26
$memory_2 = tct::sim();
#line 26
$memory_3 = tct::sim();
#line 26
$memory_4 = tct::sim();
#line 26
tc_types_priv::op_def($memory_0, $memory_1, $memory_2, $memory_3, $memory_4);
#line 26
undef($memory_4);
#line 26
undef($memory_3);
#line 26
undef($memory_2);
#line 26
undef($memory_1);
#line 27
$memory_1 = "%";
#line 27
$memory_2 = tct::sim();
#line 27
$memory_3 = tct::sim();
#line 27
$memory_4 = tct::sim();
#line 27
tc_types_priv::op_def($memory_0, $memory_1, $memory_2, $memory_3, $memory_4);
#line 27
undef($memory_4);
#line 27
undef($memory_3);
#line 27
undef($memory_2);
#line 27
undef($memory_1);
#line 28
$memory_1 = "+";
#line 28
$memory_2 = tct::sim();
#line 28
$memory_3 = tct::sim();
#line 28
$memory_4 = tct::sim();
#line 28
tc_types_priv::op_def($memory_0, $memory_1, $memory_2, $memory_3, $memory_4);
#line 28
undef($memory_4);
#line 28
undef($memory_3);
#line 28
undef($memory_2);
#line 28
undef($memory_1);
#line 29
$memory_1 = "-";
#line 29
$memory_2 = tct::sim();
#line 29
$memory_3 = tct::sim();
#line 29
$memory_4 = tct::sim();
#line 29
tc_types_priv::op_def($memory_0, $memory_1, $memory_2, $memory_3, $memory_4);
#line 29
undef($memory_4);
#line 29
undef($memory_3);
#line 29
undef($memory_2);
#line 29
undef($memory_1);
#line 30
$memory_1 = ".";
#line 30
$memory_2 = tct::sim();
#line 30
$memory_3 = tct::sim();
#line 30
$memory_4 = tct::sim();
#line 30
tc_types_priv::op_def($memory_0, $memory_1, $memory_2, $memory_3, $memory_4);
#line 30
undef($memory_4);
#line 30
undef($memory_3);
#line 30
undef($memory_2);
#line 30
undef($memory_1);
#line 31
$memory_1 = "<<";
#line 31
$memory_2 = tct::sim();
#line 31
$memory_3 = tct::sim();
#line 31
$memory_4 = tct::sim();
#line 31
tc_types_priv::op_def($memory_0, $memory_1, $memory_2, $memory_3, $memory_4);
#line 31
undef($memory_4);
#line 31
undef($memory_3);
#line 31
undef($memory_2);
#line 31
undef($memory_1);
#line 32
$memory_1 = ">>";
#line 32
$memory_2 = tct::sim();
#line 32
$memory_3 = tct::sim();
#line 32
$memory_4 = tct::sim();
#line 32
tc_types_priv::op_def($memory_0, $memory_1, $memory_2, $memory_3, $memory_4);
#line 32
undef($memory_4);
#line 32
undef($memory_3);
#line 32
undef($memory_2);
#line 32
undef($memory_1);
#line 33
$memory_1 = ">=";
#line 33
$memory_2 = tct::sim();
#line 33
$memory_3 = tct::sim();
#line 33
$memory_4 = tct::bool();
#line 33
tc_types_priv::op_def($memory_0, $memory_1, $memory_2, $memory_3, $memory_4);
#line 33
undef($memory_4);
#line 33
undef($memory_3);
#line 33
undef($memory_2);
#line 33
undef($memory_1);
#line 34
$memory_1 = "lt";
#line 34
$memory_2 = tct::sim();
#line 34
$memory_3 = tct::sim();
#line 34
$memory_4 = tct::bool();
#line 34
tc_types_priv::op_def($memory_0, $memory_1, $memory_2, $memory_3, $memory_4);
#line 34
undef($memory_4);
#line 34
undef($memory_3);
#line 34
undef($memory_2);
#line 34
undef($memory_1);
#line 35
$memory_1 = "gt";
#line 35
$memory_2 = tct::sim();
#line 35
$memory_3 = tct::sim();
#line 35
$memory_4 = tct::bool();
#line 35
tc_types_priv::op_def($memory_0, $memory_1, $memory_2, $memory_3, $memory_4);
#line 35
undef($memory_4);
#line 35
undef($memory_3);
#line 35
undef($memory_2);
#line 35
undef($memory_1);
#line 36
$memory_1 = "le";
#line 36
$memory_2 = tct::sim();
#line 36
$memory_3 = tct::sim();
#line 36
$memory_4 = tct::bool();
#line 36
tc_types_priv::op_def($memory_0, $memory_1, $memory_2, $memory_3, $memory_4);
#line 36
undef($memory_4);
#line 36
undef($memory_3);
#line 36
undef($memory_2);
#line 36
undef($memory_1);
#line 37
$memory_1 = "ge";
#line 37
$memory_2 = tct::sim();
#line 37
$memory_3 = tct::sim();
#line 37
$memory_4 = tct::bool();
#line 37
tc_types_priv::op_def($memory_0, $memory_1, $memory_2, $memory_3, $memory_4);
#line 37
undef($memory_4);
#line 37
undef($memory_3);
#line 37
undef($memory_2);
#line 37
undef($memory_1);
#line 38
$memory_1 = "<=";
#line 38
$memory_2 = tct::sim();
#line 38
$memory_3 = tct::sim();
#line 38
$memory_4 = tct::bool();
#line 38
tc_types_priv::op_def($memory_0, $memory_1, $memory_2, $memory_3, $memory_4);
#line 38
undef($memory_4);
#line 38
undef($memory_3);
#line 38
undef($memory_2);
#line 38
undef($memory_1);
#line 39
$memory_1 = "<";
#line 39
$memory_2 = tct::sim();
#line 39
$memory_3 = tct::sim();
#line 39
$memory_4 = tct::bool();
#line 39
tc_types_priv::op_def($memory_0, $memory_1, $memory_2, $memory_3, $memory_4);
#line 39
undef($memory_4);
#line 39
undef($memory_3);
#line 39
undef($memory_2);
#line 39
undef($memory_1);
#line 40
$memory_1 = ">";
#line 40
$memory_2 = tct::sim();
#line 40
$memory_3 = tct::sim();
#line 40
$memory_4 = tct::bool();
#line 40
tc_types_priv::op_def($memory_0, $memory_1, $memory_2, $memory_3, $memory_4);
#line 40
undef($memory_4);
#line 40
undef($memory_3);
#line 40
undef($memory_2);
#line 40
undef($memory_1);
#line 41
$memory_1 = "==";
#line 41
$memory_2 = tct::sim();
#line 41
$memory_3 = tct::sim();
#line 41
$memory_4 = tct::bool();
#line 41
tc_types_priv::op_def($memory_0, $memory_1, $memory_2, $memory_3, $memory_4);
#line 41
undef($memory_4);
#line 41
undef($memory_3);
#line 41
undef($memory_2);
#line 41
undef($memory_1);
#line 42
$memory_1 = "!=";
#line 42
$memory_2 = tct::sim();
#line 42
$memory_3 = tct::sim();
#line 42
$memory_4 = tct::bool();
#line 42
tc_types_priv::op_def($memory_0, $memory_1, $memory_2, $memory_3, $memory_4);
#line 42
undef($memory_4);
#line 42
undef($memory_3);
#line 42
undef($memory_2);
#line 42
undef($memory_1);
#line 43
$memory_1 = "<=>";
#line 43
$memory_2 = tct::sim();
#line 43
$memory_3 = tct::sim();
#line 43
$memory_4 = tct::bool();
#line 43
tc_types_priv::op_def($memory_0, $memory_1, $memory_2, $memory_3, $memory_4);
#line 43
undef($memory_4);
#line 43
undef($memory_3);
#line 43
undef($memory_2);
#line 43
undef($memory_1);
#line 44
$memory_1 = "eq";
#line 44
$memory_2 = tct::sim();
#line 44
$memory_3 = tct::sim();
#line 44
$memory_4 = tct::bool();
#line 44
tc_types_priv::op_def($memory_0, $memory_1, $memory_2, $memory_3, $memory_4);
#line 44
undef($memory_4);
#line 44
undef($memory_3);
#line 44
undef($memory_2);
#line 44
undef($memory_1);
#line 45
$memory_1 = "ne";
#line 45
$memory_2 = tct::sim();
#line 45
$memory_3 = tct::sim();
#line 45
$memory_4 = tct::bool();
#line 45
tc_types_priv::op_def($memory_0, $memory_1, $memory_2, $memory_3, $memory_4);
#line 45
undef($memory_4);
#line 45
undef($memory_3);
#line 45
undef($memory_2);
#line 45
undef($memory_1);
#line 46
$memory_1 = "cmp";
#line 46
$memory_2 = tct::sim();
#line 46
$memory_3 = tct::sim();
#line 46
$memory_4 = tct::bool();
#line 46
tc_types_priv::op_def($memory_0, $memory_1, $memory_2, $memory_3, $memory_4);
#line 46
undef($memory_4);
#line 46
undef($memory_3);
#line 46
undef($memory_2);
#line 46
undef($memory_1);
#line 47
$memory_1 = "&";
#line 47
$memory_2 = tct::sim();
#line 47
$memory_3 = tct::sim();
#line 47
$memory_4 = tct::sim();
#line 47
tc_types_priv::op_def($memory_0, $memory_1, $memory_2, $memory_3, $memory_4);
#line 47
undef($memory_4);
#line 47
undef($memory_3);
#line 47
undef($memory_2);
#line 47
undef($memory_1);
#line 48
$memory_1 = "|";
#line 48
$memory_2 = tct::sim();
#line 48
$memory_3 = tct::sim();
#line 48
$memory_4 = tct::sim();
#line 48
tc_types_priv::op_def($memory_0, $memory_1, $memory_2, $memory_3, $memory_4);
#line 48
undef($memory_4);
#line 48
undef($memory_3);
#line 48
undef($memory_2);
#line 48
undef($memory_1);
#line 49
$memory_1 = "^";
#line 49
$memory_2 = tct::sim();
#line 49
$memory_3 = tct::sim();
#line 49
$memory_4 = tct::sim();
#line 49
tc_types_priv::op_def($memory_0, $memory_1, $memory_2, $memory_3, $memory_4);
#line 49
undef($memory_4);
#line 49
undef($memory_3);
#line 49
undef($memory_2);
#line 49
undef($memory_1);
#line 50
$memory_1 = "&&";
#line 50
$memory_2 = tct::bool();
#line 50
$memory_3 = tct::bool();
#line 50
$memory_4 = tct::bool();
#line 50
tc_types_priv::op_def($memory_0, $memory_1, $memory_2, $memory_3, $memory_4);
#line 50
undef($memory_4);
#line 50
undef($memory_3);
#line 50
undef($memory_2);
#line 50
undef($memory_1);
#line 51
$memory_1 = "||";
#line 51
$memory_2 = tct::bool();
#line 51
$memory_3 = tct::bool();
#line 51
$memory_4 = tct::bool();
#line 51
tc_types_priv::op_def($memory_0, $memory_1, $memory_2, $memory_3, $memory_4);
#line 51
undef($memory_4);
#line 51
undef($memory_3);
#line 51
undef($memory_2);
#line 51
undef($memory_1);
#line 52
$memory_1 = "+=";
#line 52
$memory_2 = tct::sim();
#line 52
$memory_3 = tct::sim();
#line 52
$memory_4 = tct::sim();
#line 52
tc_types_priv::op_def($memory_0, $memory_1, $memory_2, $memory_3, $memory_4);
#line 52
undef($memory_4);
#line 52
undef($memory_3);
#line 52
undef($memory_2);
#line 52
undef($memory_1);
#line 53
$memory_1 = "/=";
#line 53
$memory_2 = tct::sim();
#line 53
$memory_3 = tct::sim();
#line 53
$memory_4 = tct::sim();
#line 53
tc_types_priv::op_def($memory_0, $memory_1, $memory_2, $memory_3, $memory_4);
#line 53
undef($memory_4);
#line 53
undef($memory_3);
#line 53
undef($memory_2);
#line 53
undef($memory_1);
#line 54
$memory_1 = "*=";
#line 54
$memory_2 = tct::sim();
#line 54
$memory_3 = tct::sim();
#line 54
$memory_4 = tct::sim();
#line 54
tc_types_priv::op_def($memory_0, $memory_1, $memory_2, $memory_3, $memory_4);
#line 54
undef($memory_4);
#line 54
undef($memory_3);
#line 54
undef($memory_2);
#line 54
undef($memory_1);
#line 55
$memory_1 = ".=";
#line 55
$memory_2 = tct::sim();
#line 55
$memory_3 = tct::sim();
#line 55
$memory_4 = tct::sim();
#line 55
tc_types_priv::op_def($memory_0, $memory_1, $memory_2, $memory_3, $memory_4);
#line 55
undef($memory_4);
#line 55
undef($memory_3);
#line 55
undef($memory_2);
#line 55
undef($memory_1);
#line 56
$memory_1 = "-=";
#line 56
$memory_2 = tct::sim();
#line 56
$memory_3 = tct::sim();
#line 56
$memory_4 = tct::sim();
#line 56
tc_types_priv::op_def($memory_0, $memory_1, $memory_2, $memory_3, $memory_4);
#line 56
undef($memory_4);
#line 56
undef($memory_3);
#line 56
undef($memory_2);
#line 56
undef($memory_1);
#line 57
$memory_1 = singleton::sigleton_do_not_use_without_approval($memory_0);
#line 57
undef($memory_0);
#line 57
return $memory_1;
#line 57
undef($memory_1);
#line 57
undef($memory_0);
#line 57
return;
}

my $_get_binary_ops;
sub tc_types_priv::get_binary_ops() {
	$_get_binary_ops = tc_types_priv::__get_binary_ops() unless defined $_get_binary_ops;
	return $_get_binary_ops;
}

sub tc_types::__errors_t() {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;
#line 61
$memory_2 = ptd::sim();
#line 61
$memory_3 = ptd::sim();
#line 61
$memory_4 = {
	module => "tc_types",
	name => "check_errors_t",
};
#line 61
$memory_4 = c_rt_lib::ov_mk_arg('ref', $memory_4);
#line 61
$memory_5 = {
	module => "tc_types",
	name => "check_errors_t",
};
#line 61
$memory_5 = c_rt_lib::ov_mk_arg('ref', $memory_5);
#line 61
$memory_1 = {current_line => $memory_2,module => $memory_3,warnings => $memory_4,errors => $memory_5,};
#line 61
undef($memory_2);
#line 61
undef($memory_3);
#line 61
undef($memory_4);
#line 61
undef($memory_5);
#line 61
$memory_0 = ptd::rec($memory_1);
#line 61
undef($memory_1);
#line 61
return $memory_0;
#line 61
undef($memory_0);
#line 61
return;
}

my $_errors_t;
sub tc_types::errors_t() {
	$_errors_t = tc_types::__errors_t() unless defined $_errors_t;
	return $_errors_t;
}

sub tc_types::__bin_op_type() {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;
#line 70
$memory_2 = {
	module => "tct",
	name => "meta_type",
};
#line 70
$memory_2 = c_rt_lib::ov_mk_arg('ref', $memory_2);
#line 70
$memory_3 = {
	module => "tct",
	name => "meta_type",
};
#line 70
$memory_3 = c_rt_lib::ov_mk_arg('ref', $memory_3);
#line 70
$memory_4 = {
	module => "tct",
	name => "meta_type",
};
#line 70
$memory_4 = c_rt_lib::ov_mk_arg('ref', $memory_4);
#line 70
$memory_1 = {arg1 => $memory_2,arg2 => $memory_3,ret => $memory_4,};
#line 70
undef($memory_2);
#line 70
undef($memory_3);
#line 70
undef($memory_4);
#line 70
$memory_0 = ptd::rec($memory_1);
#line 70
undef($memory_1);
#line 70
return $memory_0;
#line 70
undef($memory_0);
#line 70
return;
}

my $_bin_op_type;
sub tc_types::bin_op_type() {
	$_bin_op_type = tc_types::__bin_op_type() unless defined $_bin_op_type;
	return $_bin_op_type;
}

sub tc_types::__defs_funs_t() {
my $memory_0;my $memory_1;my $memory_2;
#line 74
$memory_2 = {
	module => "tc_types",
	name => "def_fun_t",
};
#line 74
$memory_2 = c_rt_lib::ov_mk_arg('ref', $memory_2);
#line 74
$memory_1 = ptd::hash($memory_2);
#line 74
undef($memory_2);
#line 74
$memory_0 = ptd::hash($memory_1);
#line 74
undef($memory_1);
#line 74
return $memory_0;
#line 74
undef($memory_0);
#line 74
return;
}

my $_defs_funs_t;
sub tc_types::defs_funs_t() {
	$_defs_funs_t = tc_types::__defs_funs_t() unless defined $_defs_funs_t;
	return $_defs_funs_t;
}

sub tc_types::__return_t() {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;
#line 77
$memory_2 = {
	module => "tc_types",
	name => "check_errors_t",
};
#line 77
$memory_2 = c_rt_lib::ov_mk_arg('ref', $memory_2);
#line 77
$memory_3 = {
	module => "tc_types",
	name => "check_errors_t",
};
#line 77
$memory_3 = c_rt_lib::ov_mk_arg('ref', $memory_3);
#line 77
$memory_4 = {
	module => "tc_types",
	name => "deref_types",
};
#line 77
$memory_4 = c_rt_lib::ov_mk_arg('ref', $memory_4);
#line 77
$memory_1 = {errors => $memory_2,warnings => $memory_3,deref => $memory_4,};
#line 77
undef($memory_2);
#line 77
undef($memory_3);
#line 77
undef($memory_4);
#line 77
$memory_0 = ptd::rec($memory_1);
#line 77
undef($memory_1);
#line 77
return $memory_0;
#line 77
undef($memory_0);
#line 77
return;
}

my $_return_t;
sub tc_types::return_t() {
	$_return_t = tc_types::__return_t() unless defined $_return_t;
	return $_return_t;
}

sub tc_types::__modules_t() {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;
#line 84
$memory_3 = {
	module => "boolean_t",
	name => "type",
};
#line 84
$memory_3 = c_rt_lib::ov_mk_arg('ref', $memory_3);
#line 84
$memory_2 = ptd::hash($memory_3);
#line 84
undef($memory_3);
#line 84
$memory_3 = {
	module => "tc_types",
	name => "env",
};
#line 84
$memory_3 = c_rt_lib::ov_mk_arg('ref', $memory_3);
#line 84
$memory_4 = {
	module => "tc_types",
	name => "defs_funs_t",
};
#line 84
$memory_4 = c_rt_lib::ov_mk_arg('ref', $memory_4);
#line 84
$memory_1 = {imports => $memory_2,env => $memory_3,funs => $memory_4,};
#line 84
undef($memory_2);
#line 84
undef($memory_3);
#line 84
undef($memory_4);
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

my $_modules_t;
sub tc_types::modules_t() {
	$_modules_t = tc_types::__modules_t() unless defined $_modules_t;
	return $_modules_t;
}

sub tc_types::__deref_type() {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;
#line 91
$memory_2 = ptd::sim();
#line 91
$memory_3 = ptd::sim();
#line 91
$memory_4 = ptd::sim();
#line 91
$memory_1 = {line => $memory_2,module => $memory_3,type_name => $memory_4,};
#line 91
undef($memory_2);
#line 91
undef($memory_3);
#line 91
undef($memory_4);
#line 91
$memory_0 = ptd::rec($memory_1);
#line 91
undef($memory_1);
#line 91
return $memory_0;
#line 91
undef($memory_0);
#line 91
return;
}

my $_deref_type;
sub tc_types::deref_type() {
	$_deref_type = tc_types::__deref_type() unless defined $_deref_type;
	return $_deref_type;
}

sub tc_types::__deref_types() {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;
#line 98
$memory_3 = {
	module => "tc_types",
	name => "deref_type",
};
#line 98
$memory_3 = c_rt_lib::ov_mk_arg('ref', $memory_3);
#line 98
$memory_2 = ptd::arr($memory_3);
#line 98
undef($memory_3);
#line 98
$memory_4 = {
	module => "tc_types",
	name => "deref_type",
};
#line 98
$memory_4 = c_rt_lib::ov_mk_arg('ref', $memory_4);
#line 98
$memory_3 = ptd::arr($memory_4);
#line 98
undef($memory_4);
#line 98
$memory_1 = {delete => $memory_2,create => $memory_3,};
#line 98
undef($memory_2);
#line 98
undef($memory_3);
#line 98
$memory_0 = ptd::rec($memory_1);
#line 98
undef($memory_1);
#line 98
return $memory_0;
#line 98
undef($memory_0);
#line 98
return;
}

my $_deref_types;
sub tc_types::deref_types() {
	$_deref_types = tc_types::__deref_types() unless defined $_deref_types;
	return $_deref_types;
}

sub tc_types::__env() {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;
#line 104
$memory_2 = ptd::sim();
#line 104
$memory_5 = {
	module => "tc_types",
	name => "vars_t",
};
#line 104
$memory_5 = c_rt_lib::ov_mk_arg('ref', $memory_5);
#line 104
$memory_6 = {
	module => "boolean_t",
	name => "type",
};
#line 104
$memory_6 = c_rt_lib::ov_mk_arg('ref', $memory_6);
#line 104
$memory_4 = {vars => $memory_5,is => $memory_6,};
#line 104
undef($memory_5);
#line 104
undef($memory_6);
#line 104
$memory_3 = ptd::rec($memory_4);
#line 104
undef($memory_4);
#line 104
$memory_4 = {
	module => "tct",
	name => "meta_type",
};
#line 104
$memory_4 = c_rt_lib::ov_mk_arg('ref', $memory_4);
#line 104
$memory_5 = {
	module => "tc_types",
	name => "deref_types",
};
#line 104
$memory_5 = c_rt_lib::ov_mk_arg('ref', $memory_5);
#line 104
$memory_1 = {current_module => $memory_2,breaks => $memory_3,ret_type => $memory_4,deref => $memory_5,};
#line 104
undef($memory_2);
#line 104
undef($memory_3);
#line 104
undef($memory_4);
#line 104
undef($memory_5);
#line 104
$memory_0 = ptd::rec($memory_1);
#line 104
undef($memory_1);
#line 104
return $memory_0;
#line 104
undef($memory_0);
#line 104
return;
}

my $_env;
sub tc_types::env() {
	$_env = tc_types::__env() unless defined $_env;
	return $_env;
}

sub tc_types::__var_t() {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;
#line 113
$memory_4 = ptd::none();
#line 113
$memory_5 = ptd::none();
#line 113
$memory_3 = {yes => $memory_4,no => $memory_5,};
#line 113
undef($memory_4);
#line 113
undef($memory_5);
#line 113
$memory_2 = ptd::var($memory_3);
#line 113
undef($memory_3);
#line 113
$memory_3 = {
	module => "tct",
	name => "meta_type",
};
#line 113
$memory_3 = c_rt_lib::ov_mk_arg('ref', $memory_3);
#line 113
$memory_1 = {overwrited => $memory_2,type => $memory_3,};
#line 113
undef($memory_2);
#line 113
undef($memory_3);
#line 113
$memory_0 = ptd::rec($memory_1);
#line 113
undef($memory_1);
#line 113
return $memory_0;
#line 113
undef($memory_0);
#line 113
return;
}

my $_var_t;
sub tc_types::var_t() {
	$_var_t = tc_types::__var_t() unless defined $_var_t;
	return $_var_t;
}

sub tc_types::__fun_arg_t() {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;
#line 117
$memory_2 = ptd::sim();
#line 117
$memory_3 = {
	module => "tct",
	name => "meta_type",
};
#line 117
$memory_3 = c_rt_lib::ov_mk_arg('ref', $memory_3);
#line 117
$memory_6 = ptd::none();
#line 117
$memory_7 = ptd::none();
#line 117
$memory_5 = {none => $memory_6,ref => $memory_7,};
#line 117
undef($memory_6);
#line 117
undef($memory_7);
#line 117
$memory_4 = ptd::var($memory_5);
#line 117
undef($memory_5);
#line 117
$memory_1 = {name => $memory_2,type => $memory_3,mod => $memory_4,};
#line 117
undef($memory_2);
#line 117
undef($memory_3);
#line 117
undef($memory_4);
#line 117
$memory_0 = ptd::rec($memory_1);
#line 117
undef($memory_1);
#line 117
return $memory_0;
#line 117
undef($memory_0);
#line 117
return;
}

my $_fun_arg_t;
sub tc_types::fun_arg_t() {
	$_fun_arg_t = tc_types::__fun_arg_t() unless defined $_fun_arg_t;
	return $_fun_arg_t;
}

sub tc_types::__def_fun_t() {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;
#line 125
$memory_2 = {
	module => "nast",
	name => "cmd_t",
};
#line 125
$memory_2 = c_rt_lib::ov_mk_arg('ref', $memory_2);
#line 125
$memory_5 = ptd::none();
#line 125
$memory_6 = {
	module => "tct",
	name => "meta_type",
};
#line 125
$memory_6 = c_rt_lib::ov_mk_arg('ref', $memory_6);
#line 125
$memory_4 = {no => $memory_5,yes => $memory_6,};
#line 125
undef($memory_5);
#line 125
undef($memory_6);
#line 125
$memory_3 = ptd::var($memory_4);
#line 125
undef($memory_4);
#line 125
$memory_6 = ptd::none();
#line 125
$memory_8 = ptd::sim();
#line 125
$memory_7 = ptd::arr($memory_8);
#line 125
undef($memory_8);
#line 125
$memory_5 = {no => $memory_6,yes => $memory_7,};
#line 125
undef($memory_6);
#line 125
undef($memory_7);
#line 125
$memory_4 = ptd::var($memory_5);
#line 125
undef($memory_5);
#line 125
$memory_5 = ptd::sim();
#line 125
$memory_6 = ptd::sim();
#line 125
$memory_9 = ptd::none();
#line 125
$memory_10 = ptd::none();
#line 125
$memory_8 = {priv => $memory_9,pub => $memory_10,};
#line 125
undef($memory_9);
#line 125
undef($memory_10);
#line 125
$memory_7 = ptd::var($memory_8);
#line 125
undef($memory_8);
#line 125
$memory_9 = {
	module => "tc_types",
	name => "fun_arg_t",
};
#line 125
$memory_9 = c_rt_lib::ov_mk_arg('ref', $memory_9);
#line 125
$memory_8 = ptd::arr($memory_9);
#line 125
undef($memory_9);
#line 125
$memory_9 = {
	module => "tct",
	name => "meta_type",
};
#line 125
$memory_9 = c_rt_lib::ov_mk_arg('ref', $memory_9);
#line 125
$memory_1 = {cmd => $memory_2,is_type => $memory_3,ref_types => $memory_4,name => $memory_5,module => $memory_6,access => $memory_7,args => $memory_8,ret_type => $memory_9,};
#line 125
undef($memory_2);
#line 125
undef($memory_3);
#line 125
undef($memory_4);
#line 125
undef($memory_5);
#line 125
undef($memory_6);
#line 125
undef($memory_7);
#line 125
undef($memory_8);
#line 125
undef($memory_9);
#line 125
$memory_0 = ptd::rec($memory_1);
#line 125
undef($memory_1);
#line 125
return $memory_0;
#line 125
undef($memory_0);
#line 125
return;
}

my $_def_fun_t;
sub tc_types::def_fun_t() {
	$_def_fun_t = tc_types::__def_fun_t() unless defined $_def_fun_t;
	return $_def_fun_t;
}

sub tc_types::__vars_t() {
my $memory_0;my $memory_1;
#line 138
$memory_1 = {
	module => "tc_types",
	name => "var_t",
};
#line 138
$memory_1 = c_rt_lib::ov_mk_arg('ref', $memory_1);
#line 138
$memory_0 = ptd::hash($memory_1);
#line 138
undef($memory_1);
#line 138
return $memory_0;
#line 138
undef($memory_0);
#line 138
return;
}

my $_vars_t;
sub tc_types::vars_t() {
	$_vars_t = tc_types::__vars_t() unless defined $_vars_t;
	return $_vars_t;
}

sub tc_types::__check_error_t() {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;
#line 142
$memory_2 = ptd::sim();
#line 142
$memory_3 = ptd::sim();
#line 142
$memory_4 = ptd::sim();
#line 142
$memory_1 = {msg => $memory_2,line => $memory_3,module => $memory_4,};
#line 142
undef($memory_2);
#line 142
undef($memory_3);
#line 142
undef($memory_4);
#line 142
$memory_0 = ptd::rec($memory_1);
#line 142
undef($memory_1);
#line 142
return $memory_0;
#line 142
undef($memory_0);
#line 142
return;
}

my $_check_error_t;
sub tc_types::check_error_t() {
	$_check_error_t = tc_types::__check_error_t() unless defined $_check_error_t;
	return $_check_error_t;
}

sub tc_types::__check_errors_t() {
my $memory_0;my $memory_1;
#line 146
$memory_1 = {
	module => "tc_types",
	name => "check_error_t",
};
#line 146
$memory_1 = c_rt_lib::ov_mk_arg('ref', $memory_1);
#line 146
$memory_0 = ptd::arr($memory_1);
#line 146
undef($memory_1);
#line 146
return $memory_0;
#line 146
undef($memory_0);
#line 146
return;
}

my $_check_errors_t;
sub tc_types::check_errors_t() {
	$_check_errors_t = tc_types::__check_errors_t() unless defined $_check_errors_t;
	return $_check_errors_t;
}

sub tc_types::__type() {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;
#line 149
$memory_2 = {
	module => "tc_types",
	name => "value_src",
};
#line 149
$memory_2 = c_rt_lib::ov_mk_arg('ref', $memory_2);
#line 149
$memory_3 = {
	module => "tct",
	name => "meta_type",
};
#line 149
$memory_3 = c_rt_lib::ov_mk_arg('ref', $memory_3);
#line 149
$memory_1 = {src => $memory_2,type => $memory_3,};
#line 149
undef($memory_2);
#line 149
undef($memory_3);
#line 149
$memory_0 = ptd::rec($memory_1);
#line 149
undef($memory_1);
#line 149
return $memory_0;
#line 149
undef($memory_0);
#line 149
return;
}

my $_type;
sub tc_types::type() {
	$_type = tc_types::__type() unless defined $_type;
	return $_type;
}

sub tc_types::__value_src() {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;
#line 153
$memory_2 = ptd::none();
#line 153
$memory_3 = ptd::none();
#line 153
$memory_4 = ptd::none();
#line 153
$memory_1 = {known => $memory_2,knownhash => $memory_3,speculation => $memory_4,};
#line 153
undef($memory_2);
#line 153
undef($memory_3);
#line 153
undef($memory_4);
#line 153
$memory_0 = ptd::var($memory_1);
#line 153
undef($memory_1);
#line 153
return $memory_0;
#line 153
undef($memory_0);
#line 153
return;
}

my $_value_src;
sub tc_types::value_src() {
	$_value_src = tc_types::__value_src() unless defined $_value_src;
	return $_value_src;
}

sub tc_types::__lval_path() {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;
#line 156
$memory_3 = ptd::sim();
#line 156
$memory_4 = ptd::none();
#line 156
$memory_5 = ptd::sim();
#line 156
$memory_2 = {var => $memory_3,arr => $memory_4,rec => $memory_5,};
#line 156
undef($memory_3);
#line 156
undef($memory_4);
#line 156
undef($memory_5);
#line 156
$memory_1 = ptd::var($memory_2);
#line 156
undef($memory_2);
#line 156
$memory_0 = ptd::arr($memory_1);
#line 156
undef($memory_1);
#line 156
return $memory_0;
#line 156
undef($memory_0);
#line 156
return;
}

my $_lval_path;
sub tc_types::lval_path() {
	$_lval_path = tc_types::__lval_path() unless defined $_lval_path;
	return $_lval_path;
}

sub tc_types::__walk_arg() {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;
#line 159
$memory_4 = ptd::sim();
#line 159
$memory_3 = ptd::arr($memory_4);
#line 159
undef($memory_4);
#line 159
$memory_2 = ptd::hash($memory_3);
#line 159
undef($memory_3);
#line 159
$memory_3 = {
	module => "tc_types",
	name => "errors_t",
};
#line 159
$memory_3 = c_rt_lib::ov_mk_arg('ref', $memory_3);
#line 159
$memory_4 = {
	module => "tc_types",
	name => "modules_t",
};
#line 159
$memory_4 = c_rt_lib::ov_mk_arg('ref', $memory_4);
#line 159
$memory_1 = {ref_inf => $memory_2,errors => $memory_3,modules => $memory_4,};
#line 159
undef($memory_2);
#line 159
undef($memory_3);
#line 159
undef($memory_4);
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

my $_walk_arg;
sub tc_types::walk_arg() {
	$_walk_arg = tc_types::__walk_arg() unless defined $_walk_arg;
	return $_walk_arg;
}

sub tc_types::__ref_t() {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;
#line 167
$memory_2 = ptd::sim();
#line 167
$memory_5 = ptd::sim();
#line 167
$memory_4 = ptd::arr($memory_5);
#line 167
undef($memory_5);
#line 167
$memory_3 = ptd::hash($memory_4);
#line 167
undef($memory_4);
#line 167
$memory_6 = ptd::sim();
#line 167
$memory_5 = ptd::arr($memory_6);
#line 167
undef($memory_6);
#line 167
$memory_4 = ptd::hash($memory_5);
#line 167
undef($memory_5);
#line 167
$memory_5 = {
	module => "boolean_t",
	name => "type",
};
#line 167
$memory_5 = c_rt_lib::ov_mk_arg('ref', $memory_5);
#line 167
$memory_6 = {
	module => "boolean_t",
	name => "type",
};
#line 167
$memory_6 = c_rt_lib::ov_mk_arg('ref', $memory_6);
#line 167
$memory_1 = {level => $memory_2,from => $memory_3,to => $memory_4,check => $memory_5,cast => $memory_6,};
#line 167
undef($memory_2);
#line 167
undef($memory_3);
#line 167
undef($memory_4);
#line 167
undef($memory_5);
#line 167
undef($memory_6);
#line 167
$memory_0 = ptd::rec($memory_1);
#line 167
undef($memory_1);
#line 167
return $memory_0;
#line 167
undef($memory_0);
#line 167
return;
}

my $_ref_t;
sub tc_types::ref_t() {
	$_ref_t = tc_types::__ref_t() unless defined $_ref_t;
	return $_ref_t;
}

sub tc_types::__stack_info_type() {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;
#line 176
$memory_2 = ptd::none();
#line 176
$memory_3 = ptd::none();
#line 176
$memory_4 = ptd::sim();
#line 176
$memory_5 = ptd::sim();
#line 176
$memory_1 = {ptd_hash => $memory_2,ptd_arr => $memory_3,ptd_rec => $memory_4,ptd_var => $memory_5,};
#line 176
undef($memory_2);
#line 176
undef($memory_3);
#line 176
undef($memory_4);
#line 176
undef($memory_5);
#line 176
$memory_0 = ptd::var($memory_1);
#line 176
undef($memory_1);
#line 176
return $memory_0;
#line 176
undef($memory_0);
#line 176
return;
}

my $_stack_info_type;
sub tc_types::stack_info_type() {
	$_stack_info_type = tc_types::__stack_info_type() unless defined $_stack_info_type;
	return $_stack_info_type;
}

sub tc_types::__check_info() {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;
#line 184
$memory_2 = ptd::none();
#line 184
$memory_5 = {
	module => "tct",
	name => "meta_type",
};
#line 184
$memory_5 = c_rt_lib::ov_mk_arg('ref', $memory_5);
#line 184
$memory_6 = {
	module => "tct",
	name => "meta_type",
};
#line 184
$memory_6 = c_rt_lib::ov_mk_arg('ref', $memory_6);
#line 184
$memory_8 = {
	module => "tc_types",
	name => "stack_info_type",
};
#line 184
$memory_8 = c_rt_lib::ov_mk_arg('ref', $memory_8);
#line 184
$memory_7 = ptd::arr($memory_8);
#line 184
undef($memory_8);
#line 184
$memory_4 = {from => $memory_5,to => $memory_6,stack => $memory_7,};
#line 184
undef($memory_5);
#line 184
undef($memory_6);
#line 184
undef($memory_7);
#line 184
$memory_3 = ptd::rec($memory_4);
#line 184
undef($memory_4);
#line 184
$memory_1 = {ok => $memory_2,err => $memory_3,};
#line 184
undef($memory_2);
#line 184
undef($memory_3);
#line 184
$memory_0 = ptd::var($memory_1);
#line 184
undef($memory_1);
#line 184
return $memory_0;
#line 184
undef($memory_0);
#line 184
return;
}

my $_check_info;
sub tc_types::check_info() {
	$_check_info = tc_types::__check_info() unless defined $_check_info;
	return $_check_info;
}

sub tc_types::__special_functions() {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;
#line 194
$memory_3 = {
	module => "tct",
	name => "meta_type",
};
#line 194
$memory_3 = c_rt_lib::ov_mk_arg('ref', $memory_3);
#line 194
$memory_5 = {
	module => "tc_types",
	name => "fun_arg_t",
};
#line 194
$memory_5 = c_rt_lib::ov_mk_arg('ref', $memory_5);
#line 194
$memory_4 = ptd::arr($memory_5);
#line 194
undef($memory_5);
#line 194
$memory_2 = {r => $memory_3,a => $memory_4,};
#line 194
undef($memory_3);
#line 194
undef($memory_4);
#line 194
$memory_1 = ptd::rec($memory_2);
#line 194
undef($memory_2);
#line 194
$memory_0 = ptd::hash($memory_1);
#line 194
undef($memory_1);
#line 194
return $memory_0;
#line 194
undef($memory_0);
#line 194
return;
}

my $_special_functions;
sub tc_types::special_functions() {
	$_special_functions = tc_types::__special_functions() unless defined $_special_functions;
	return $_special_functions;
}
