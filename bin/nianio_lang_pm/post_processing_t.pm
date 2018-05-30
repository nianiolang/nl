use c_rt_lib;
use ptd;
use nlasm;
use boolean_t;
use interpreter;
sub post_processing_t::fun_tree_t;
sub post_processing_t::state_t;
sub post_processing_t::math_funs_t;
sub post_processing_t::reg_const;
sub post_processing_t::reg_val_const;
sub post_processing_t::optimization_t;
sub post_processing_t::const_reg_t;
sub post_processing_t::const_reg_val_t;

return 1;

sub post_processing_t::__fun_tree_t() {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;
#line 12
$memory_4 = ptd::sim();
#line 12
$memory_3 = ptd::arr($memory_4);
#line 12
undef($memory_4);
#line 12
$memory_2 = ptd::hash($memory_3);
#line 12
undef($memory_3);
#line 12
$memory_1 = ptd::hash($memory_2);
#line 12
undef($memory_2);
#line 12
$memory_0 = ptd::hash($memory_1);
#line 12
undef($memory_1);
#line 12
return $memory_0;
#line 12
undef($memory_0);
#line 12
return;
}

my $_fun_tree_t;
sub post_processing_t::fun_tree_t() {
	$_fun_tree_t = post_processing_t::__fun_tree_t() unless defined $_fun_tree_t;
	return $_fun_tree_t;
}

sub post_processing_t::__state_t() {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;
#line 17
$memory_3 = {
	module => "nlasm",
	name => "result_t",
};
#line 17
$memory_3 = c_rt_lib::ov_mk_arg('ref', $memory_3);
#line 17
$memory_2 = ptd::hash($memory_3);
#line 17
undef($memory_3);
#line 18
$memory_4 = ptd::sim();
#line 18
$memory_3 = ptd::hash($memory_4);
#line 18
undef($memory_4);
#line 19
$memory_4 = {
	module => "post_processing_t",
	name => "math_funs_t",
};
#line 19
$memory_4 = c_rt_lib::ov_mk_arg('ref', $memory_4);
#line 20
$memory_5 = {
	module => "post_processing_t",
	name => "fun_tree_t",
};
#line 20
$memory_5 = c_rt_lib::ov_mk_arg('ref', $memory_5);
#line 21
$memory_6 = {
	module => "post_processing_t",
	name => "math_funs_t",
};
#line 21
$memory_6 = c_rt_lib::ov_mk_arg('ref', $memory_6);
#line 22
$memory_7 = {
	module => "post_processing_t",
	name => "optimization_t",
};
#line 22
$memory_7 = c_rt_lib::ov_mk_arg('ref', $memory_7);
#line 23
$memory_8 = {
	module => "interpreter",
	name => "state_t",
};
#line 23
$memory_8 = c_rt_lib::ov_mk_arg('ref', $memory_8);
#line 23
$memory_1 = {nl_asm => $memory_2,mat_fun_def => $memory_3,math_fs => $memory_4,fun_calls => $memory_5,const_com => $memory_6,optimization => $memory_7,interpreter_state => $memory_8,};
#line 23
undef($memory_2);
#line 23
undef($memory_3);
#line 23
undef($memory_4);
#line 23
undef($memory_5);
#line 23
undef($memory_6);
#line 23
undef($memory_7);
#line 23
undef($memory_8);
#line 23
$memory_0 = ptd::rec($memory_1);
#line 23
undef($memory_1);
#line 23
return $memory_0;
#line 23
undef($memory_0);
#line 23
return;
}

my $_state_t;
sub post_processing_t::state_t() {
	$_state_t = post_processing_t::__state_t() unless defined $_state_t;
	return $_state_t;
}

sub post_processing_t::__math_funs_t() {
my $memory_0;my $memory_1;
#line 28
$memory_1 = {
	module => "boolean_t",
	name => "type",
};
#line 28
$memory_1 = c_rt_lib::ov_mk_arg('ref', $memory_1);
#line 28
$memory_0 = ptd::hash($memory_1);
#line 28
undef($memory_1);
#line 28
return $memory_0;
#line 28
undef($memory_0);
#line 28
return;
}

my $_math_funs_t;
sub post_processing_t::math_funs_t() {
	$_math_funs_t = post_processing_t::__math_funs_t() unless defined $_math_funs_t;
	return $_math_funs_t;
}

sub post_processing_t::__reg_const() {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;
#line 32
$memory_2 = ptd::none();
#line 32
$memory_3 = ptd::sim();
#line 32
$memory_1 = {no => $memory_2,yes => $memory_3,};
#line 32
undef($memory_2);
#line 32
undef($memory_3);
#line 32
$memory_0 = ptd::var($memory_1);
#line 32
undef($memory_1);
#line 32
return $memory_0;
#line 32
undef($memory_0);
#line 32
return;
}

my $_reg_const;
sub post_processing_t::reg_const() {
	$_reg_const = post_processing_t::__reg_const() unless defined $_reg_const;
	return $_reg_const;
}

sub post_processing_t::__reg_val_const() {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;
#line 36
$memory_2 = ptd::none();
#line 36
$memory_5 = ptd::sim();
#line 36
$memory_6 = ptd::ptd_im();
#line 36
$memory_4 = {nr => $memory_5,value => $memory_6,};
#line 36
undef($memory_5);
#line 36
undef($memory_6);
#line 36
$memory_3 = ptd::rec($memory_4);
#line 36
undef($memory_4);
#line 36
$memory_1 = {no => $memory_2,yes => $memory_3,};
#line 36
undef($memory_2);
#line 36
undef($memory_3);
#line 36
$memory_0 = ptd::var($memory_1);
#line 36
undef($memory_1);
#line 36
return $memory_0;
#line 36
undef($memory_0);
#line 36
return;
}

my $_reg_val_const;
sub post_processing_t::reg_val_const() {
	$_reg_val_const = post_processing_t::__reg_val_const() unless defined $_reg_val_const;
	return $_reg_val_const;
}

sub post_processing_t::__optimization_t() {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;
#line 40
$memory_2 = ptd::none();
#line 40
$memory_3 = ptd::none();
#line 40
$memory_4 = ptd::none();
#line 40
$memory_5 = ptd::none();
#line 40
$memory_6 = ptd::none();
#line 40
$memory_1 = {o0 => $memory_2,o1 => $memory_3,o2 => $memory_4,o3 => $memory_5,o4 => $memory_6,};
#line 40
undef($memory_2);
#line 40
undef($memory_3);
#line 40
undef($memory_4);
#line 40
undef($memory_5);
#line 40
undef($memory_6);
#line 40
$memory_0 = ptd::var($memory_1);
#line 40
undef($memory_1);
#line 40
return $memory_0;
#line 40
undef($memory_0);
#line 40
return;
}

my $_optimization_t;
sub post_processing_t::optimization_t() {
	$_optimization_t = post_processing_t::__optimization_t() unless defined $_optimization_t;
	return $_optimization_t;
}

sub post_processing_t::__const_reg_t() {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;
#line 44
$memory_4 = {
	module => "post_processing_t",
	name => "reg_const",
};
#line 44
$memory_4 = c_rt_lib::ov_mk_arg('ref', $memory_4);
#line 44
$memory_3 = ptd::arr($memory_4);
#line 44
undef($memory_4);
#line 44
$memory_4 = ptd::sim();
#line 44
$memory_2 = {regs => $memory_3,was => $memory_4,};
#line 44
undef($memory_3);
#line 44
undef($memory_4);
#line 44
$memory_1 = ptd::rec($memory_2);
#line 44
undef($memory_2);
#line 44
$memory_0 = ptd::arr($memory_1);
#line 44
undef($memory_1);
#line 44
return $memory_0;
#line 44
undef($memory_0);
#line 44
return;
}

my $_const_reg_t;
sub post_processing_t::const_reg_t() {
	$_const_reg_t = post_processing_t::__const_reg_t() unless defined $_const_reg_t;
	return $_const_reg_t;
}

sub post_processing_t::__const_reg_val_t() {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;
#line 48
$memory_4 = {
	module => "post_processing_t",
	name => "reg_val_const",
};
#line 48
$memory_4 = c_rt_lib::ov_mk_arg('ref', $memory_4);
#line 48
$memory_3 = ptd::arr($memory_4);
#line 48
undef($memory_4);
#line 48
$memory_4 = ptd::sim();
#line 48
$memory_2 = {regs => $memory_3,was => $memory_4,};
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

my $_const_reg_val_t;
sub post_processing_t::const_reg_val_t() {
	$_const_reg_val_t = post_processing_t::__const_reg_val_t() unless defined $_const_reg_val_t;
	return $_const_reg_val_t;
}
