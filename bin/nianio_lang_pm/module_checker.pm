use c_rt_lib;
use array;
use ptd;
use hash;
use nast;
use tc_types;
use tct;
use string;
use ov;
use boolean_t;
use ptd_parser;
sub module_checker::stack_t;
sub module_checker::stack_hash_t;
sub module_checker::ret_t;
sub module_checker::modules_t;
sub module_checker::search_loops;
sub module_checker_priv::check_module;
sub module_checker_priv::get_loop_from_stack;
sub module_checker::var_t;
sub module_checker::return_t;
sub module_checker::state_t;
sub module_checker::save_t;
sub module_checker_priv::add_error;
sub module_checker_priv::add_warning;
sub module_checker_priv::set_used_function;
sub module_checker::check_module;
sub module_checker_priv::check_types_imported;
sub module_checker_priv::get_fun_key;
sub module_checker_priv::add_fun_used;
sub module_checker_priv::check_return_type;
sub module_checker_priv::check_type;
sub module_checker_priv::add_var;
sub module_checker_priv::use_var;
sub module_checker_priv::add_var_dec;
sub module_checker_priv::check_cmd;
sub module_checker_priv::check_lvalue;
sub module_checker_priv::check_val;
sub module_checker_priv::save_block;
sub module_checker_priv::load_block;

return 1;

sub module_checker::__stack_t() {
my $memory_0;my $memory_1;
#line 19
$memory_1 = ptd::sim();
#line 19
$memory_0 = ptd::arr($memory_1);
#line 19
undef($memory_1);
#line 19
return $memory_0;
#line 19
undef($memory_0);
#line 19
return;
}

my $_stack_t;
sub module_checker::stack_t() {
	$_stack_t = module_checker::__stack_t() unless defined $_stack_t;
	return $_stack_t;
}

sub module_checker::__stack_hash_t() {
my $memory_0;my $memory_1;
#line 23
$memory_1 = ptd::sim();
#line 23
$memory_0 = ptd::hash($memory_1);
#line 23
undef($memory_1);
#line 23
return $memory_0;
#line 23
undef($memory_0);
#line 23
return;
}

my $_stack_hash_t;
sub module_checker::stack_hash_t() {
	$_stack_hash_t = module_checker::__stack_hash_t() unless defined $_stack_hash_t;
	return $_stack_hash_t;
}

sub module_checker::__ret_t() {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;
#line 27
$memory_3 = ptd::sim();
#line 27
$memory_2 = ptd::arr($memory_3);
#line 27
undef($memory_3);
#line 27
$memory_3 = ptd::none();
#line 27
$memory_1 = {loop => $memory_2,ok => $memory_3,};
#line 27
undef($memory_2);
#line 27
undef($memory_3);
#line 27
$memory_0 = ptd::var($memory_1);
#line 27
undef($memory_1);
#line 27
return $memory_0;
#line 27
undef($memory_0);
#line 27
return;
}

my $_ret_t;
sub module_checker::ret_t() {
	$_ret_t = module_checker::__ret_t() unless defined $_ret_t;
	return $_ret_t;
}

sub module_checker::__modules_t() {
my $memory_0;my $memory_1;my $memory_2;
#line 31
$memory_2 = ptd::sim();
#line 31
$memory_1 = ptd::arr($memory_2);
#line 31
undef($memory_2);
#line 31
$memory_0 = ptd::hash($memory_1);
#line 31
undef($memory_1);
#line 31
return $memory_0;
#line 31
undef($memory_0);
#line 31
return;
}

my $_modules_t;
sub module_checker::modules_t() {
	$_modules_t = module_checker::__modules_t() unless defined $_modules_t;
	return $_modules_t;
}

sub module_checker::search_loops($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;$memory_0 = $_[0];
#line 35
$memory_1 = {};
#line 36
$memory_4 = c_rt_lib::init_iter($memory_0);
#line 36
label_3:
#line 36
$memory_2 = c_rt_lib::is_end_hash($memory_4);
#line 36
if (c_rt_lib::check_true($memory_2)) {goto label_1;}
#line 36
$memory_2 = c_rt_lib::get_key_iter($memory_4);
#line 36
$memory_3 = c_rt_lib::hash_get_value($memory_0, $memory_2);
#line 37
$memory_5 = hash::has_key($memory_1, $memory_2);
#line 37
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 37
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 37
if (c_rt_lib::check_true($memory_5)) {goto label_5;}
#line 38
$memory_6 = [];
#line 39
$memory_7 = {};
#line 40
$memory_8 = module_checker_priv::check_module($memory_2, $memory_0, $memory_6, $memory_7, $memory_1);
#line 40
$memory_9 = c_rt_lib::ov_is($memory_8, 'loop');
#line 40
if (c_rt_lib::check_true($memory_9)) {goto label_7;}
#line 42
$memory_9 = c_rt_lib::ov_is($memory_8, 'ok');
#line 42
if (c_rt_lib::check_true($memory_9)) {goto label_8;}
#line 42
$memory_9 = "NOMATCHALERT";
#line 42
$memory_9 = [$memory_9,$memory_8];
#line 42
die(dfile::ssave($memory_9));
#line 40
label_7:
#line 40
$memory_10 = c_rt_lib::ov_as($memory_8, 'loop');
#line 41
$memory_11 = c_rt_lib::ov_mk_arg('loop', $memory_10);
#line 41
undef($memory_0);
#line 41
undef($memory_1);
#line 41
undef($memory_2);
#line 41
undef($memory_3);
#line 41
undef($memory_4);
#line 41
undef($memory_5);
#line 41
undef($memory_6);
#line 41
undef($memory_7);
#line 41
undef($memory_8);
#line 41
undef($memory_9);
#line 41
undef($memory_10);
#line 41
return $memory_11;
#line 41
undef($memory_11);
#line 41
undef($memory_10);
#line 42
goto label_6;
#line 42
label_8:
#line 43
goto label_6;
#line 43
label_6:
#line 43
undef($memory_8);
#line 43
undef($memory_9);
#line 43
undef($memory_6);
#line 43
undef($memory_7);
#line 44
goto label_5;
#line 44
label_5:
#line 44
undef($memory_5);
#line 45
$memory_4 = c_rt_lib::next_iter($memory_4);
#line 45
goto label_3;
#line 45
label_1:
#line 45
undef($memory_2);
#line 45
undef($memory_3);
#line 45
undef($memory_4);
#line 46
$memory_2 = c_rt_lib::ov_mk_none('ok');
#line 46
undef($memory_0);
#line 46
undef($memory_1);
#line 46
return $memory_2;
#line 46
undef($memory_2);
#line 46
undef($memory_1);
#line 46
undef($memory_0);
#line 46
return;
}

sub module_checker_priv::check_module($$$$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;my $memory_13;my $memory_14;my $memory_15;$memory_0 = $_[0];$memory_1 = $_[1];$memory_2 = $_[2];Scalar::Util::weaken($_[2]) if ref($_[2]);$memory_3 = $_[3];Scalar::Util::weaken($_[3]) if ref($_[3]);$memory_4 = $_[4];Scalar::Util::weaken($_[4]) if ref($_[4]);
#line 51
$memory_5 = 1;
#line 51
hash::set_value($memory_4, $memory_0, $memory_5);
#line 51
undef($memory_5);
#line 52
$memory_5 = 1;
#line 52
hash::set_value($memory_3, $memory_0, $memory_5);
#line 52
undef($memory_5);
#line 53
array::push($memory_2, $memory_0);
#line 54
$memory_5 = hash::get_value($memory_1, $memory_0);
#line 54
$memory_7 = 0;
#line 54
$memory_8 = 1;
#line 54
$memory_9 = c_rt_lib::array_len($memory_5);
#line 54
label_3:
#line 54
$memory_10 = c_rt_lib::to_nl($memory_7 >= $memory_9);
#line 54
if (c_rt_lib::check_true($memory_10)) {goto label_1;}
#line 54
$memory_6 = $memory_5->[$memory_7];
#line 55
$memory_11 = hash::has_key($memory_3, $memory_6);
#line 55
$memory_11 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_11));
#line 55
if (c_rt_lib::check_true($memory_11)) {goto label_5;}
#line 56
$memory_12 = module_checker_priv::get_loop_from_stack($memory_6, $memory_2);
#line 56
$memory_12 = c_rt_lib::ov_mk_arg('loop', $memory_12);
#line 56
undef($memory_0);
#line 56
undef($memory_1);
#line 56
undef($memory_5);
#line 56
undef($memory_6);
#line 56
undef($memory_7);
#line 56
undef($memory_8);
#line 56
undef($memory_9);
#line 56
undef($memory_10);
#line 56
undef($memory_11);
#line 56
$_[2] = $memory_2;$_[3] = $memory_3;$_[4] = $memory_4;return $memory_12;
#line 56
undef($memory_12);
#line 57
goto label_6;
#line 57
label_5:
#line 57
$memory_11 = hash::has_key($memory_1, $memory_6);
#line 57
$memory_12 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_11));
#line 57
if (c_rt_lib::check_true($memory_12)) {goto label_7;}
#line 57
$memory_11 = hash::has_key($memory_4, $memory_6);
#line 57
$memory_11 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_11));
#line 57
label_7:
#line 57
undef($memory_12);
#line 57
$memory_11 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_11));
#line 57
if (c_rt_lib::check_true($memory_11)) {goto label_6;}
#line 58
$memory_12 = module_checker_priv::check_module($memory_6, $memory_1, $memory_2, $memory_3, $memory_4);
#line 58
$memory_13 = c_rt_lib::ov_is($memory_12, 'loop');
#line 58
if (c_rt_lib::check_true($memory_13)) {goto label_9;}
#line 60
$memory_13 = c_rt_lib::ov_is($memory_12, 'ok');
#line 60
if (c_rt_lib::check_true($memory_13)) {goto label_10;}
#line 60
$memory_13 = "NOMATCHALERT";
#line 60
$memory_13 = [$memory_13,$memory_12];
#line 60
die(dfile::ssave($memory_13));
#line 58
label_9:
#line 58
$memory_14 = c_rt_lib::ov_as($memory_12, 'loop');
#line 59
$memory_15 = c_rt_lib::ov_mk_arg('loop', $memory_14);
#line 59
undef($memory_0);
#line 59
undef($memory_1);
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
undef($memory_12);
#line 59
undef($memory_13);
#line 59
undef($memory_14);
#line 59
$_[2] = $memory_2;$_[3] = $memory_3;$_[4] = $memory_4;return $memory_15;
#line 59
undef($memory_15);
#line 59
undef($memory_14);
#line 60
goto label_8;
#line 60
label_10:
#line 61
goto label_8;
#line 61
label_8:
#line 61
undef($memory_12);
#line 61
undef($memory_13);
#line 62
goto label_6;
#line 62
label_6:
#line 62
undef($memory_11);
#line 63
$memory_7 = $memory_7 + $memory_8;
#line 63
goto label_3;
#line 63
label_1:
#line 63
undef($memory_5);
#line 63
undef($memory_6);
#line 63
undef($memory_7);
#line 63
undef($memory_8);
#line 63
undef($memory_9);
#line 63
undef($memory_10);
#line 64
hash::delete($memory_3, $memory_0);
#line 65
$memory_6 = 0;
#line 65
$memory_7 = array::len($memory_2);
#line 65
$memory_8 = 1;
#line 65
$memory_7 = $memory_7 - $memory_8;
#line 65
undef($memory_8);
#line 65
$memory_5 = array::subarray($memory_2, $memory_6, $memory_7);
#line 65
undef($memory_7);
#line 65
undef($memory_6);
#line 65
$memory_2 = $memory_5;
#line 65
undef($memory_5);
#line 66
$memory_5 = c_rt_lib::ov_mk_none('ok');
#line 66
undef($memory_0);
#line 66
undef($memory_1);
#line 66
$_[2] = $memory_2;$_[3] = $memory_3;$_[4] = $memory_4;return $memory_5;
#line 66
undef($memory_5);
#line 66
undef($memory_0);
#line 66
undef($memory_1);
#line 66
$_[2] = $memory_2;$_[3] = $memory_3;$_[4] = $memory_4;return;
$_[2] = $memory_2;$_[3] = $memory_3;$_[4] = $memory_4;}

sub module_checker_priv::get_loop_from_stack($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;$memory_0 = $_[0];$memory_1 = $_[1];
#line 70
$memory_2 = [];
#line 71
$memory_4 = 0;
#line 71
$memory_5 = 1;
#line 71
$memory_6 = c_rt_lib::array_len($memory_1);
#line 71
label_3:
#line 71
$memory_7 = c_rt_lib::to_nl($memory_4 >= $memory_6);
#line 71
if (c_rt_lib::check_true($memory_7)) {goto label_1;}
#line 71
$memory_3 = $memory_1->[$memory_4];
#line 72
$memory_8 = c_rt_lib::to_nl($memory_3 eq $memory_0);
#line 72
$memory_8 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 72
if (c_rt_lib::check_true($memory_8)) {goto label_5;}
#line 72
$memory_9 = [];
#line 72
$memory_2 = $memory_9;
#line 72
undef($memory_9);
#line 72
goto label_5;
#line 72
label_5:
#line 72
undef($memory_8);
#line 73
array::push($memory_2, $memory_3);
#line 74
$memory_4 = $memory_4 + $memory_5;
#line 74
goto label_3;
#line 74
label_1:
#line 74
undef($memory_3);
#line 74
undef($memory_4);
#line 74
undef($memory_5);
#line 74
undef($memory_6);
#line 74
undef($memory_7);
#line 75
array::push($memory_2, $memory_0);
#line 76
undef($memory_0);
#line 76
undef($memory_1);
#line 76
return $memory_2;
#line 76
undef($memory_2);
#line 76
undef($memory_0);
#line 76
undef($memory_1);
#line 76
return;
}

sub module_checker::__var_t() {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;
#line 79
$memory_4 = ptd::none();
#line 79
$memory_5 = ptd::none();
#line 79
$memory_6 = ptd::none();
#line 79
$memory_3 = {const => $memory_4,none => $memory_5,value => $memory_6,};
#line 79
undef($memory_4);
#line 79
undef($memory_5);
#line 79
undef($memory_6);
#line 79
$memory_2 = ptd::var($memory_3);
#line 79
undef($memory_3);
#line 79
$memory_3 = {
	module => "boolean_t",
	name => "type",
};
#line 79
$memory_3 = c_rt_lib::ov_mk_arg('ref', $memory_3);
#line 79
$memory_4 = {
	module => "boolean_t",
	name => "type",
};
#line 79
$memory_4 = c_rt_lib::ov_mk_arg('ref', $memory_4);
#line 79
$memory_1 = {write => $memory_2,read => $memory_3,is_required => $memory_4,};
#line 79
undef($memory_2);
#line 79
undef($memory_3);
#line 79
undef($memory_4);
#line 79
$memory_0 = ptd::rec($memory_1);
#line 79
undef($memory_1);
#line 79
return $memory_0;
#line 79
undef($memory_0);
#line 79
return;
}

my $_var_t;
sub module_checker::var_t() {
	$_var_t = module_checker::__var_t() unless defined $_var_t;
	return $_var_t;
}

sub module_checker::__return_t() {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;
#line 86
$memory_2 = ptd::none();
#line 86
$memory_3 = ptd::none();
#line 86
$memory_4 = ptd::none();
#line 86
$memory_5 = ptd::none();
#line 86
$memory_6 = ptd::none();
#line 86
$memory_1 = {void => $memory_2,none => $memory_3,value => $memory_4,was_void => $memory_5,was_value => $memory_6,};
#line 86
undef($memory_2);
#line 86
undef($memory_3);
#line 86
undef($memory_4);
#line 86
undef($memory_5);
#line 86
undef($memory_6);
#line 86
$memory_0 = ptd::var($memory_1);
#line 86
undef($memory_1);
#line 86
return $memory_0;
#line 86
undef($memory_0);
#line 86
return;
}

my $_return_t;
sub module_checker::return_t() {
	$_return_t = module_checker::__return_t() unless defined $_return_t;
	return $_return_t;
}

sub module_checker::__state_t() {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;
#line 89
$memory_2 = {
	module => "boolean_t",
	name => "type",
};
#line 89
$memory_2 = c_rt_lib::ov_mk_arg('ref', $memory_2);
#line 89
$memory_5 = {
	module => "boolean_t",
	name => "type",
};
#line 89
$memory_5 = c_rt_lib::ov_mk_arg('ref', $memory_5);
#line 89
$memory_6 = {
	module => "module_checker",
	name => "return_t",
};
#line 89
$memory_6 = c_rt_lib::ov_mk_arg('ref', $memory_6);
#line 89
$memory_4 = {was => $memory_5,arg => $memory_6,};
#line 89
undef($memory_5);
#line 89
undef($memory_6);
#line 89
$memory_3 = ptd::rec($memory_4);
#line 89
undef($memory_4);
#line 89
$memory_5 = {
	module => "module_checker",
	name => "var_t",
};
#line 89
$memory_5 = c_rt_lib::ov_mk_arg('ref', $memory_5);
#line 89
$memory_4 = ptd::hash($memory_5);
#line 89
undef($memory_5);
#line 89
$memory_5 = {
	module => "tc_types",
	name => "errors_t",
};
#line 89
$memory_5 = c_rt_lib::ov_mk_arg('ref', $memory_5);
#line 89
$memory_9 = ptd::sim();
#line 89
$memory_8 = ptd::hash($memory_9);
#line 89
undef($memory_9);
#line 89
$memory_10 = ptd::sim();
#line 89
$memory_9 = ptd::hash($memory_10);
#line 89
undef($memory_10);
#line 89
$memory_7 = {func => $memory_8,module => $memory_9,};
#line 89
undef($memory_8);
#line 89
undef($memory_9);
#line 89
$memory_6 = ptd::rec($memory_7);
#line 89
undef($memory_7);
#line 89
$memory_7 = ptd::sim();
#line 89
$memory_1 = {in_loop => $memory_2,return => $memory_3,vars => $memory_4,errors => $memory_5,called => $memory_6,current_module => $memory_7,};
#line 89
undef($memory_2);
#line 89
undef($memory_3);
#line 89
undef($memory_4);
#line 89
undef($memory_5);
#line 89
undef($memory_6);
#line 89
undef($memory_7);
#line 89
$memory_0 = ptd::rec($memory_1);
#line 89
undef($memory_1);
#line 89
return $memory_0;
#line 89
undef($memory_0);
#line 89
return;
}

my $_state_t;
sub module_checker::state_t() {
	$_state_t = module_checker::__state_t() unless defined $_state_t;
	return $_state_t;
}

sub module_checker::__save_t() {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;
#line 102
$memory_2 = {
	module => "boolean_t",
	name => "type",
};
#line 102
$memory_2 = c_rt_lib::ov_mk_arg('ref', $memory_2);
#line 102
$memory_4 = {
	module => "module_checker",
	name => "var_t",
};
#line 102
$memory_4 = c_rt_lib::ov_mk_arg('ref', $memory_4);
#line 102
$memory_3 = ptd::hash($memory_4);
#line 102
undef($memory_4);
#line 102
$memory_1 = {in_loop => $memory_2,vars => $memory_3,};
#line 102
undef($memory_2);
#line 102
undef($memory_3);
#line 102
$memory_0 = ptd::rec($memory_1);
#line 102
undef($memory_1);
#line 102
return $memory_0;
#line 102
undef($memory_0);
#line 102
return;
}

my $_save_t;
sub module_checker::save_t() {
	$_save_t = module_checker::__save_t() unless defined $_save_t;
	return $_save_t;
}

sub module_checker_priv::add_error($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];
#line 109
$memory_2 = "errors";
#line 109
$memory_2 = c_rt_lib::get_ref_hash($memory_0, $memory_2);
#line 109
$memory_4 = $memory_0->{'current_line'};
#line 109
$memory_5 = $memory_0->{'module'};
#line 109
$memory_3 = {msg => $memory_1,line => $memory_4,module => $memory_5,};
#line 109
undef($memory_4);
#line 109
undef($memory_5);
#line 109
array::push($memory_2, $memory_3);
#line 109
undef($memory_3);
#line 109
$memory_3 = "errors";
#line 109
c_rt_lib::set_ref_hash($memory_0, $memory_3, $memory_2);
#line 109
undef($memory_3);
#line 109
undef($memory_2);
#line 109
undef($memory_1);
#line 109
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub module_checker_priv::add_warning($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];
#line 112
$memory_2 = "warnings";
#line 112
$memory_2 = c_rt_lib::get_ref_hash($memory_0, $memory_2);
#line 112
$memory_4 = $memory_0->{'current_line'};
#line 112
$memory_5 = $memory_0->{'module'};
#line 112
$memory_3 = {msg => $memory_1,line => $memory_4,module => $memory_5,};
#line 112
undef($memory_4);
#line 112
undef($memory_5);
#line 112
array::push($memory_2, $memory_3);
#line 112
undef($memory_3);
#line 112
$memory_3 = "warnings";
#line 112
c_rt_lib::set_ref_hash($memory_0, $memory_3, $memory_2);
#line 112
undef($memory_3);
#line 112
undef($memory_2);
#line 112
undef($memory_1);
#line 112
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub module_checker_priv::set_used_function($$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;$memory_0 = $_[0];$memory_1 = $_[1];$memory_2 = $_[2];Scalar::Util::weaken($_[2]) if ref($_[2]);
#line 115
$memory_3 = 0;
#line 115
hash::set_value($memory_2, $memory_0, $memory_3);
#line 115
undef($memory_3);
#line 116
$memory_3 = hash::get_value($memory_1, $memory_0);
#line 116
$memory_6 = c_rt_lib::init_iter($memory_3);
#line 116
label_3:
#line 116
$memory_4 = c_rt_lib::is_end_hash($memory_6);
#line 116
if (c_rt_lib::check_true($memory_4)) {goto label_1;}
#line 116
$memory_4 = c_rt_lib::get_key_iter($memory_6);
#line 116
$memory_5 = c_rt_lib::hash_get_value($memory_3, $memory_4);
#line 117
$memory_7 = hash::has_key($memory_1, $memory_4);
#line 117
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 117
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 117
if (c_rt_lib::check_true($memory_7)) {goto label_5;}
#line 117
undef($memory_7);
#line 117
goto label_2;
#line 117
goto label_5;
#line 117
label_5:
#line 117
undef($memory_7);
#line 118
$memory_7 = hash::has_key($memory_2, $memory_4);
#line 118
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 118
if (c_rt_lib::check_true($memory_7)) {goto label_7;}
#line 118
undef($memory_7);
#line 118
goto label_2;
#line 118
goto label_7;
#line 118
label_7:
#line 118
undef($memory_7);
#line 119
module_checker_priv::set_used_function($memory_4, $memory_1, $memory_2);
#line 119
label_2:
#line 120
$memory_6 = c_rt_lib::next_iter($memory_6);
#line 120
goto label_3;
#line 120
label_1:
#line 120
undef($memory_3);
#line 120
undef($memory_4);
#line 120
undef($memory_5);
#line 120
undef($memory_6);
#line 120
undef($memory_0);
#line 120
undef($memory_1);
#line 120
$_[2] = $memory_2;return;
$_[2] = $memory_2;}

sub module_checker::check_module($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;my $memory_13;my $memory_14;my $memory_15;my $memory_16;my $memory_17;my $memory_18;my $memory_19;my $memory_20;my $memory_21;$memory_0 = $_[0];
#line 123
$memory_2 = [];
#line 123
$memory_3 = [];
#line 123
$memory_4 = 1;
#line 123
$memory_4 = -$memory_4;
#line 123
$memory_5 = $memory_0->{'name'};
#line 123
$memory_1 = {errors => $memory_2,warnings => $memory_3,current_line => $memory_4,module => $memory_5,};
#line 123
undef($memory_2);
#line 123
undef($memory_3);
#line 123
undef($memory_4);
#line 123
undef($memory_5);
#line 124
$memory_3 = {};
#line 124
$memory_4 = {};
#line 124
$memory_2 = {func => $memory_3,module => $memory_4,};
#line 124
undef($memory_3);
#line 124
undef($memory_4);
#line 125
$memory_5 = c_rt_lib::to_nl(0);
#line 125
$memory_6 = c_rt_lib::ov_mk_none('none');
#line 125
$memory_4 = {was => $memory_5,arg => $memory_6,};
#line 125
undef($memory_5);
#line 125
undef($memory_6);
#line 125
$memory_5 = $memory_0->{'name'};
#line 125
$memory_6 = c_rt_lib::to_nl(0);
#line 125
$memory_7 = {};
#line 125
$memory_3 = {return => $memory_4,current_module => $memory_5,in_loop => $memory_6,called => $memory_2,vars => $memory_7,errors => $memory_1,};
#line 125
undef($memory_4);
#line 125
undef($memory_5);
#line 125
undef($memory_6);
#line 125
undef($memory_7);
#line 126
$memory_4 = {};
#line 127
$memory_5 = {};
#line 128
$memory_6 = $memory_0->{'fun_def'};
#line 128
$memory_8 = 0;
#line 128
$memory_9 = 1;
#line 128
$memory_10 = c_rt_lib::array_len($memory_6);
#line 128
label_3:
#line 128
$memory_11 = c_rt_lib::to_nl($memory_8 >= $memory_10);
#line 128
if (c_rt_lib::check_true($memory_11)) {goto label_1;}
#line 128
$memory_7 = $memory_6->[$memory_8];
#line 129
$memory_12 = $memory_7->{'line'};
#line 129
$memory_13 = "errors";
#line 129
$memory_13 = c_rt_lib::get_ref_hash($memory_3, $memory_13);
#line 129
$memory_14 = $memory_12;
#line 129
 if (c_rt_lib::get_hashcount($memory_13) > 1) {$memory_13 = {%{$memory_13}};}$memory_13->{'current_line'} = $memory_14;
#line 129
$memory_15 = "errors";
#line 129
c_rt_lib::set_ref_hash($memory_3, $memory_15, $memory_13);
#line 129
undef($memory_15);
#line 129
undef($memory_12);
#line 129
undef($memory_13);
#line 129
undef($memory_14);
#line 130
$memory_12 = {};
#line 130
$memory_13 = $memory_12;
#line 130
 if (c_rt_lib::get_hashcount($memory_3) > 1) {$memory_3 = {%{$memory_3}};}$memory_3->{'vars'} = $memory_13;
#line 130
undef($memory_12);
#line 130
undef($memory_13);
#line 131
$memory_13 = c_rt_lib::to_nl(0);
#line 131
$memory_15 = $memory_7->{'ret_type'};
#line 131
$memory_14 = module_checker_priv::check_return_type($memory_15, $memory_3);
#line 131
undef($memory_15);
#line 131
$memory_12 = {was => $memory_13,arg => $memory_14,};
#line 131
undef($memory_13);
#line 131
undef($memory_14);
#line 131
$memory_13 = $memory_12;
#line 131
 if (c_rt_lib::get_hashcount($memory_3) > 1) {$memory_3 = {%{$memory_3}};}$memory_3->{'return'} = $memory_13;
#line 131
undef($memory_12);
#line 131
undef($memory_13);
#line 132
$memory_12 = module_checker_priv::save_block($memory_3);
#line 133
$memory_13 = $memory_7->{'args'};
#line 133
$memory_15 = 0;
#line 133
$memory_16 = 1;
#line 133
$memory_17 = c_rt_lib::array_len($memory_13);
#line 133
label_6:
#line 133
$memory_18 = c_rt_lib::to_nl($memory_15 >= $memory_17);
#line 133
if (c_rt_lib::check_true($memory_18)) {goto label_4;}
#line 133
$memory_14 = $memory_13->[$memory_15];
#line 134
$memory_19 = $memory_14->{'name'};
#line 134
$memory_20 = c_rt_lib::to_nl(0);
#line 134
$memory_21 = c_rt_lib::to_nl(0);
#line 134
module_checker_priv::add_var($memory_19, $memory_20, $memory_21, $memory_3);
#line 134
undef($memory_21);
#line 134
undef($memory_20);
#line 134
undef($memory_19);
#line 135
$memory_19 = $memory_14->{'type'};
#line 135
module_checker_priv::check_type($memory_19, $memory_3);
#line 135
undef($memory_19);
#line 136
$memory_19 = $memory_14->{'name'};
#line 136
$memory_20 = c_rt_lib::ov_mk_none('set');
#line 136
module_checker_priv::use_var($memory_19, $memory_20, $memory_3);
#line 136
undef($memory_20);
#line 136
undef($memory_19);
#line 137
$memory_15 = $memory_15 + $memory_16;
#line 137
goto label_6;
#line 137
label_4:
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
#line 137
undef($memory_18);
#line 138
$memory_13 = $memory_7->{'cmd'};
#line 138
module_checker_priv::check_cmd($memory_13, $memory_3);
#line 138
undef($memory_13);
#line 139
$memory_13 = $memory_7->{'args'};
#line 139
$memory_15 = 0;
#line 139
$memory_16 = 1;
#line 139
$memory_17 = c_rt_lib::array_len($memory_13);
#line 139
label_9:
#line 139
$memory_18 = c_rt_lib::to_nl($memory_15 >= $memory_17);
#line 139
if (c_rt_lib::check_true($memory_18)) {goto label_7;}
#line 139
$memory_14 = $memory_13->[$memory_15];
#line 140
$memory_19 = $memory_14->{'mod'};
#line 140
$memory_19 = c_rt_lib::ov_is($memory_19, 'ref');
#line 140
$memory_19 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_19));
#line 140
if (c_rt_lib::check_true($memory_19)) {goto label_11;}
#line 141
$memory_20 = $memory_14->{'name'};
#line 141
$memory_21 = c_rt_lib::ov_mk_none('get');
#line 141
module_checker_priv::use_var($memory_20, $memory_21, $memory_3);
#line 141
undef($memory_21);
#line 141
undef($memory_20);
#line 142
goto label_11;
#line 142
label_11:
#line 142
undef($memory_19);
#line 143
$memory_15 = $memory_15 + $memory_16;
#line 143
goto label_9;
#line 143
label_7:
#line 143
undef($memory_13);
#line 143
undef($memory_14);
#line 143
undef($memory_15);
#line 143
undef($memory_16);
#line 143
undef($memory_17);
#line 143
undef($memory_18);
#line 144
module_checker_priv::load_block($memory_3, $memory_12);
#line 145
$memory_13 = $memory_3->{'return'};
#line 145
$memory_13 = $memory_13->{'was'};
#line 145
$memory_13 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_13));
#line 145
$memory_13 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_13));
#line 145
if (c_rt_lib::check_true($memory_13)) {goto label_13;}
#line 146
$memory_14 = $memory_3->{'return'};
#line 146
$memory_14 = $memory_14->{'arg'};
#line 146
$memory_14 = c_rt_lib::ov_is($memory_14, 'value');
#line 146
if (c_rt_lib::check_true($memory_14)) {goto label_16;}
#line 146
$memory_14 = $memory_3->{'return'};
#line 146
$memory_14 = $memory_14->{'arg'};
#line 146
$memory_14 = c_rt_lib::ov_is($memory_14, 'was_value');
#line 146
label_16:
#line 146
$memory_14 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_14));
#line 146
if (c_rt_lib::check_true($memory_14)) {goto label_15;}
#line 146
$memory_15 = "errors";
#line 146
$memory_15 = c_rt_lib::get_ref_hash($memory_3, $memory_15);
#line 146
$memory_16 = "no return value at end of function";
#line 146
module_checker_priv::add_error($memory_15, $memory_16);
#line 146
undef($memory_16);
#line 146
$memory_16 = "errors";
#line 146
c_rt_lib::set_ref_hash($memory_3, $memory_16, $memory_15);
#line 146
undef($memory_16);
#line 146
undef($memory_15);
#line 146
goto label_15;
#line 146
label_15:
#line 146
undef($memory_14);
#line 148
goto label_13;
#line 148
label_13:
#line 148
undef($memory_13);
#line 149
$memory_14 = $memory_7->{'access'};
#line 149
$memory_14 = c_rt_lib::ov_is($memory_14, 'pub');
#line 149
if (c_rt_lib::check_true($memory_14)) {goto label_18;}
#line 149
$memory_14 = "";
#line 149
goto label_17;
#line 149
label_18:
#line 149
$memory_14 = $memory_0->{'name'};
#line 149
label_17:
#line 149
$memory_15 = $memory_7->{'name'};
#line 149
$memory_16 = $memory_0->{'name'};
#line 149
$memory_13 = module_checker_priv::get_fun_key($memory_14, $memory_15, $memory_16);
#line 149
undef($memory_16);
#line 149
undef($memory_15);
#line 149
undef($memory_14);
#line 150
$memory_14 = $memory_3->{'called'};
#line 150
$memory_14 = $memory_14->{'func'};
#line 150
hash::set_value($memory_4, $memory_13, $memory_14);
#line 150
undef($memory_14);
#line 151
$memory_14 = $memory_7->{'access'};
#line 151
$memory_14 = c_rt_lib::ov_is($memory_14, 'priv');
#line 151
$memory_14 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_14));
#line 151
$memory_14 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_14));
#line 151
if (c_rt_lib::check_true($memory_14)) {goto label_20;}
#line 151
$memory_15 = 0;
#line 151
hash::set_value($memory_5, $memory_13, $memory_15);
#line 151
undef($memory_15);
#line 151
goto label_20;
#line 151
label_20:
#line 151
undef($memory_14);
#line 152
$memory_14 = {};
#line 152
$memory_15 = "called";
#line 152
$memory_15 = c_rt_lib::get_ref_hash($memory_3, $memory_15);
#line 152
$memory_16 = $memory_14;
#line 152
 if (c_rt_lib::get_hashcount($memory_15) > 1) {$memory_15 = {%{$memory_15}};}$memory_15->{'func'} = $memory_16;
#line 152
$memory_17 = "called";
#line 152
c_rt_lib::set_ref_hash($memory_3, $memory_17, $memory_15);
#line 152
undef($memory_17);
#line 152
undef($memory_14);
#line 152
undef($memory_15);
#line 152
undef($memory_16);
#line 152
undef($memory_12);
#line 152
undef($memory_13);
#line 153
$memory_8 = $memory_8 + $memory_9;
#line 153
goto label_3;
#line 153
label_1:
#line 153
undef($memory_6);
#line 153
undef($memory_7);
#line 153
undef($memory_8);
#line 153
undef($memory_9);
#line 153
undef($memory_10);
#line 153
undef($memory_11);
#line 154
$memory_6 = {};
#line 155
$memory_7 = $memory_0->{'import'};
#line 155
$memory_9 = 0;
#line 155
$memory_10 = 1;
#line 155
$memory_11 = c_rt_lib::array_len($memory_7);
#line 155
label_23:
#line 155
$memory_12 = c_rt_lib::to_nl($memory_9 >= $memory_11);
#line 155
if (c_rt_lib::check_true($memory_12)) {goto label_21;}
#line 155
$memory_8 = $memory_7->[$memory_9];
#line 156
$memory_13 = $memory_8->{'line'};
#line 156
$memory_14 = "errors";
#line 156
$memory_14 = c_rt_lib::get_ref_hash($memory_3, $memory_14);
#line 156
$memory_15 = $memory_13;
#line 156
 if (c_rt_lib::get_hashcount($memory_14) > 1) {$memory_14 = {%{$memory_14}};}$memory_14->{'current_line'} = $memory_15;
#line 156
$memory_16 = "errors";
#line 156
c_rt_lib::set_ref_hash($memory_3, $memory_16, $memory_14);
#line 156
undef($memory_16);
#line 156
undef($memory_13);
#line 156
undef($memory_14);
#line 156
undef($memory_15);
#line 157
$memory_14 = $memory_8->{'name'};
#line 157
$memory_13 = hash::has_key($memory_6, $memory_14);
#line 157
undef($memory_14);
#line 157
$memory_13 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_13));
#line 157
if (c_rt_lib::check_true($memory_13)) {goto label_25;}
#line 157
$memory_14 = "errors";
#line 157
$memory_14 = c_rt_lib::get_ref_hash($memory_3, $memory_14);
#line 157
$memory_15 = "multiple use module:";
#line 157
$memory_16 = $memory_8->{'name'};
#line 157
$memory_15 = $memory_15 . $memory_16;
#line 157
undef($memory_16);
#line 157
module_checker_priv::add_warning($memory_14, $memory_15);
#line 157
undef($memory_15);
#line 157
$memory_15 = "errors";
#line 157
c_rt_lib::set_ref_hash($memory_3, $memory_15, $memory_14);
#line 157
undef($memory_15);
#line 157
undef($memory_14);
#line 157
goto label_25;
#line 157
label_25:
#line 157
undef($memory_13);
#line 159
$memory_14 = $memory_3->{'called'};
#line 159
$memory_14 = $memory_14->{'module'};
#line 159
$memory_15 = $memory_8->{'name'};
#line 159
$memory_13 = hash::has_key($memory_14, $memory_15);
#line 159
undef($memory_15);
#line 159
undef($memory_14);
#line 159
$memory_13 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_13));
#line 159
$memory_13 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_13));
#line 159
if (c_rt_lib::check_true($memory_13)) {goto label_27;}
#line 159
$memory_14 = "errors";
#line 159
$memory_14 = c_rt_lib::get_ref_hash($memory_3, $memory_14);
#line 159
$memory_15 = "unused module:";
#line 159
$memory_16 = $memory_8->{'name'};
#line 159
$memory_15 = $memory_15 . $memory_16;
#line 159
undef($memory_16);
#line 159
module_checker_priv::add_warning($memory_14, $memory_15);
#line 159
undef($memory_15);
#line 159
$memory_15 = "errors";
#line 159
c_rt_lib::set_ref_hash($memory_3, $memory_15, $memory_14);
#line 159
undef($memory_15);
#line 159
undef($memory_14);
#line 159
goto label_27;
#line 159
label_27:
#line 159
undef($memory_13);
#line 161
$memory_13 = $memory_8->{'name'};
#line 161
$memory_14 = c_rt_lib::to_nl(1);
#line 161
hash::set_value($memory_6, $memory_13, $memory_14);
#line 161
undef($memory_14);
#line 161
undef($memory_13);
#line 162
$memory_9 = $memory_9 + $memory_10;
#line 162
goto label_23;
#line 162
label_21:
#line 162
undef($memory_7);
#line 162
undef($memory_8);
#line 162
undef($memory_9);
#line 162
undef($memory_10);
#line 162
undef($memory_11);
#line 162
undef($memory_12);
#line 163
$memory_7 = $memory_3->{'called'};
#line 163
$memory_7 = $memory_7->{'module'};
#line 163
$memory_10 = c_rt_lib::init_iter($memory_7);
#line 163
label_30:
#line 163
$memory_8 = c_rt_lib::is_end_hash($memory_10);
#line 163
if (c_rt_lib::check_true($memory_8)) {goto label_28;}
#line 163
$memory_8 = c_rt_lib::get_key_iter($memory_10);
#line 163
$memory_9 = c_rt_lib::hash_get_value($memory_7, $memory_8);
#line 164
$memory_11 = "errors";
#line 164
$memory_11 = c_rt_lib::get_ref_hash($memory_3, $memory_11);
#line 164
$memory_12 = $memory_9;
#line 164
 if (c_rt_lib::get_hashcount($memory_11) > 1) {$memory_11 = {%{$memory_11}};}$memory_11->{'current_line'} = $memory_12;
#line 164
$memory_13 = "errors";
#line 164
c_rt_lib::set_ref_hash($memory_3, $memory_13, $memory_11);
#line 164
undef($memory_13);
#line 164
undef($memory_11);
#line 164
undef($memory_12);
#line 165
$memory_11 = $memory_0->{'name'};
#line 165
$memory_11 = c_rt_lib::to_nl($memory_11 eq $memory_8);
#line 165
$memory_11 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_11));
#line 165
if (c_rt_lib::check_true($memory_11)) {goto label_32;}
#line 165
undef($memory_11);
#line 165
goto label_29;
#line 165
goto label_32;
#line 165
label_32:
#line 165
undef($memory_11);
#line 166
$memory_11 = hash::has_key($memory_6, $memory_8);
#line 166
$memory_11 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_11));
#line 166
$memory_11 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_11));
#line 166
if (c_rt_lib::check_true($memory_11)) {goto label_34;}
#line 166
$memory_12 = "errors";
#line 166
$memory_12 = c_rt_lib::get_ref_hash($memory_3, $memory_12);
#line 166
$memory_13 = "module '";
#line 166
$memory_13 = $memory_13 . $memory_8;
#line 166
$memory_14 = "' not imported";
#line 166
$memory_13 = $memory_13 . $memory_14;
#line 166
undef($memory_14);
#line 166
module_checker_priv::add_error($memory_12, $memory_13);
#line 166
undef($memory_13);
#line 166
$memory_13 = "errors";
#line 166
c_rt_lib::set_ref_hash($memory_3, $memory_13, $memory_12);
#line 166
undef($memory_13);
#line 166
undef($memory_12);
#line 166
goto label_34;
#line 166
label_34:
#line 166
undef($memory_11);
#line 166
label_29:
#line 168
$memory_10 = c_rt_lib::next_iter($memory_10);
#line 168
goto label_30;
#line 168
label_28:
#line 168
undef($memory_7);
#line 168
undef($memory_8);
#line 168
undef($memory_9);
#line 168
undef($memory_10);
#line 169
$memory_7 = $memory_5;
#line 170
$memory_10 = c_rt_lib::init_iter($memory_7);
#line 170
label_37:
#line 170
$memory_8 = c_rt_lib::is_end_hash($memory_10);
#line 170
if (c_rt_lib::check_true($memory_8)) {goto label_35;}
#line 170
$memory_8 = c_rt_lib::get_key_iter($memory_10);
#line 170
$memory_9 = c_rt_lib::hash_get_value($memory_7, $memory_8);
#line 171
module_checker_priv::set_used_function($memory_8, $memory_4, $memory_5);
#line 172
$memory_10 = c_rt_lib::next_iter($memory_10);
#line 172
goto label_37;
#line 172
label_35:
#line 172
undef($memory_8);
#line 172
undef($memory_9);
#line 172
undef($memory_10);
#line 173
$memory_8 = $memory_0->{'fun_def'};
#line 173
$memory_10 = 0;
#line 173
$memory_11 = 1;
#line 173
$memory_12 = c_rt_lib::array_len($memory_8);
#line 173
label_40:
#line 173
$memory_13 = c_rt_lib::to_nl($memory_10 >= $memory_12);
#line 173
if (c_rt_lib::check_true($memory_13)) {goto label_38;}
#line 173
$memory_9 = $memory_8->[$memory_10];
#line 174
$memory_14 = $memory_9->{'access'};
#line 174
$memory_14 = c_rt_lib::ov_is($memory_14, 'pub');
#line 174
$memory_14 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_14));
#line 174
if (c_rt_lib::check_true($memory_14)) {goto label_42;}
#line 174
undef($memory_14);
#line 174
goto label_39;
#line 174
goto label_42;
#line 174
label_42:
#line 174
undef($memory_14);
#line 175
$memory_15 = "priv:";
#line 175
$memory_16 = $memory_0->{'name'};
#line 175
$memory_15 = $memory_15 . $memory_16;
#line 175
undef($memory_16);
#line 175
$memory_16 = "::";
#line 175
$memory_15 = $memory_15 . $memory_16;
#line 175
undef($memory_16);
#line 175
$memory_16 = $memory_9->{'name'};
#line 175
$memory_15 = $memory_15 . $memory_16;
#line 175
undef($memory_16);
#line 175
$memory_14 = hash::has_key($memory_5, $memory_15);
#line 175
undef($memory_15);
#line 175
$memory_14 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_14));
#line 175
if (c_rt_lib::check_true($memory_14)) {goto label_44;}
#line 175
undef($memory_14);
#line 175
goto label_39;
#line 175
goto label_44;
#line 175
label_44:
#line 175
undef($memory_14);
#line 176
$memory_14 = $memory_9->{'line'};
#line 176
$memory_15 = "errors";
#line 176
$memory_15 = c_rt_lib::get_ref_hash($memory_3, $memory_15);
#line 176
$memory_16 = $memory_14;
#line 176
 if (c_rt_lib::get_hashcount($memory_15) > 1) {$memory_15 = {%{$memory_15}};}$memory_15->{'current_line'} = $memory_16;
#line 176
$memory_17 = "errors";
#line 176
c_rt_lib::set_ref_hash($memory_3, $memory_17, $memory_15);
#line 176
undef($memory_17);
#line 176
undef($memory_14);
#line 176
undef($memory_15);
#line 176
undef($memory_16);
#line 177
$memory_14 = "errors";
#line 177
$memory_14 = c_rt_lib::get_ref_hash($memory_3, $memory_14);
#line 177
$memory_15 = "unused function: ";
#line 177
$memory_16 = $memory_0->{'name'};
#line 177
$memory_15 = $memory_15 . $memory_16;
#line 177
undef($memory_16);
#line 177
$memory_16 = "_priv::";
#line 177
$memory_15 = $memory_15 . $memory_16;
#line 177
undef($memory_16);
#line 177
$memory_16 = $memory_9->{'name'};
#line 177
$memory_15 = $memory_15 . $memory_16;
#line 177
undef($memory_16);
#line 177
module_checker_priv::add_warning($memory_14, $memory_15);
#line 177
undef($memory_15);
#line 177
$memory_15 = "errors";
#line 177
c_rt_lib::set_ref_hash($memory_3, $memory_15, $memory_14);
#line 177
undef($memory_15);
#line 177
undef($memory_14);
#line 177
label_39:
#line 178
$memory_10 = $memory_10 + $memory_11;
#line 178
goto label_40;
#line 178
label_38:
#line 178
undef($memory_8);
#line 178
undef($memory_9);
#line 178
undef($memory_10);
#line 178
undef($memory_11);
#line 178
undef($memory_12);
#line 178
undef($memory_13);
#line 179
$memory_8 = $memory_3->{'errors'};
#line 179
undef($memory_0);
#line 179
undef($memory_1);
#line 179
undef($memory_2);
#line 179
undef($memory_3);
#line 179
undef($memory_4);
#line 179
undef($memory_5);
#line 179
undef($memory_6);
#line 179
undef($memory_7);
#line 179
return $memory_8;
#line 179
undef($memory_8);
#line 179
undef($memory_1);
#line 179
undef($memory_2);
#line 179
undef($memory_3);
#line 179
undef($memory_4);
#line 179
undef($memory_5);
#line 179
undef($memory_6);
#line 179
undef($memory_7);
#line 179
undef($memory_0);
#line 179
return;
}

sub module_checker_priv::check_types_imported($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;$memory_0 = $_[0];$memory_1 = $_[1];Scalar::Util::weaken($_[1]) if ref($_[1]);
#line 182
$memory_2 = c_rt_lib::ov_is($memory_0, 'tct_im');
#line 182
if (c_rt_lib::check_true($memory_2)) {goto label_2;}
#line 183
$memory_2 = c_rt_lib::ov_is($memory_0, 'tct_arr');
#line 183
if (c_rt_lib::check_true($memory_2)) {goto label_3;}
#line 185
$memory_2 = c_rt_lib::ov_is($memory_0, 'tct_hash');
#line 185
if (c_rt_lib::check_true($memory_2)) {goto label_4;}
#line 187
$memory_2 = c_rt_lib::ov_is($memory_0, 'tct_rec');
#line 187
if (c_rt_lib::check_true($memory_2)) {goto label_5;}
#line 191
$memory_2 = c_rt_lib::ov_is($memory_0, 'tct_ref');
#line 191
if (c_rt_lib::check_true($memory_2)) {goto label_6;}
#line 200
$memory_2 = c_rt_lib::ov_is($memory_0, 'tct_void');
#line 200
if (c_rt_lib::check_true($memory_2)) {goto label_7;}
#line 201
$memory_2 = c_rt_lib::ov_is($memory_0, 'tct_sim');
#line 201
if (c_rt_lib::check_true($memory_2)) {goto label_8;}
#line 202
$memory_2 = c_rt_lib::ov_is($memory_0, 'tct_var');
#line 202
if (c_rt_lib::check_true($memory_2)) {goto label_9;}
#line 209
$memory_2 = c_rt_lib::ov_is($memory_0, 'tct_empty');
#line 209
if (c_rt_lib::check_true($memory_2)) {goto label_10;}
#line 209
$memory_2 = "NOMATCHALERT";
#line 209
$memory_2 = [$memory_2,$memory_0];
#line 209
die(dfile::ssave($memory_2));
#line 182
label_2:
#line 183
goto label_1;
#line 183
label_3:
#line 183
$memory_3 = c_rt_lib::ov_as($memory_0, 'tct_arr');
#line 184
module_checker_priv::check_types_imported($memory_3, $memory_1);
#line 184
undef($memory_3);
#line 185
goto label_1;
#line 185
label_4:
#line 185
$memory_3 = c_rt_lib::ov_as($memory_0, 'tct_hash');
#line 186
module_checker_priv::check_types_imported($memory_3, $memory_1);
#line 186
undef($memory_3);
#line 187
goto label_1;
#line 187
label_5:
#line 187
$memory_3 = c_rt_lib::ov_as($memory_0, 'tct_rec');
#line 188
$memory_6 = c_rt_lib::init_iter($memory_3);
#line 188
label_13:
#line 188
$memory_4 = c_rt_lib::is_end_hash($memory_6);
#line 188
if (c_rt_lib::check_true($memory_4)) {goto label_11;}
#line 188
$memory_4 = c_rt_lib::get_key_iter($memory_6);
#line 188
$memory_5 = c_rt_lib::hash_get_value($memory_3, $memory_4);
#line 189
module_checker_priv::check_types_imported($memory_5, $memory_1);
#line 190
$memory_6 = c_rt_lib::next_iter($memory_6);
#line 190
goto label_13;
#line 190
label_11:
#line 190
undef($memory_4);
#line 190
undef($memory_5);
#line 190
undef($memory_6);
#line 190
undef($memory_3);
#line 191
goto label_1;
#line 191
label_6:
#line 191
$memory_3 = c_rt_lib::ov_as($memory_0, 'tct_ref');
#line 192
$memory_5 = "::";
#line 192
$memory_4 = string::index2($memory_3, $memory_5);
#line 192
undef($memory_5);
#line 193
$memory_5 = 0;
#line 193
$memory_5 = c_rt_lib::to_nl($memory_4 >= $memory_5);
#line 193
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 193
if (c_rt_lib::check_true($memory_5)) {goto label_15;}
#line 194
$memory_7 = 0;
#line 194
$memory_6 = string::substr($memory_3, $memory_7, $memory_4);
#line 194
undef($memory_7);
#line 195
$memory_8 = 2;
#line 195
$memory_8 = $memory_4 + $memory_8;
#line 195
$memory_9 = string::length($memory_3);
#line 195
$memory_9 = $memory_9 - $memory_4;
#line 195
$memory_10 = 2;
#line 195
$memory_9 = $memory_9 - $memory_10;
#line 195
undef($memory_10);
#line 195
$memory_7 = string::substr($memory_3, $memory_8, $memory_9);
#line 195
undef($memory_9);
#line 195
undef($memory_8);
#line 196
module_checker_priv::add_fun_used($memory_6, $memory_7, $memory_1);
#line 196
undef($memory_6);
#line 196
undef($memory_7);
#line 197
goto label_14;
#line 197
label_15:
#line 198
$memory_6 = "errors";
#line 198
$memory_6 = c_rt_lib::get_ref_hash($memory_1, $memory_6);
#line 198
$memory_7 = "wrong type function name '";
#line 198
$memory_7 = $memory_7 . $memory_3;
#line 198
$memory_8 = "' ";
#line 198
$memory_7 = $memory_7 . $memory_8;
#line 198
undef($memory_8);
#line 198
module_checker_priv::add_error($memory_6, $memory_7);
#line 198
undef($memory_7);
#line 198
$memory_7 = "errors";
#line 198
c_rt_lib::set_ref_hash($memory_1, $memory_7, $memory_6);
#line 198
undef($memory_7);
#line 198
undef($memory_6);
#line 199
goto label_14;
#line 199
label_14:
#line 199
undef($memory_5);
#line 199
undef($memory_4);
#line 199
undef($memory_3);
#line 200
goto label_1;
#line 200
label_7:
#line 201
goto label_1;
#line 201
label_8:
#line 202
goto label_1;
#line 202
label_9:
#line 202
$memory_3 = c_rt_lib::ov_as($memory_0, 'tct_var');
#line 203
$memory_6 = c_rt_lib::init_iter($memory_3);
#line 203
label_18:
#line 203
$memory_4 = c_rt_lib::is_end_hash($memory_6);
#line 203
if (c_rt_lib::check_true($memory_4)) {goto label_16;}
#line 203
$memory_4 = c_rt_lib::get_key_iter($memory_6);
#line 203
$memory_5 = c_rt_lib::hash_get_value($memory_3, $memory_4);
#line 204
$memory_7 = c_rt_lib::ov_is($memory_5, 'no_param');
#line 204
if (c_rt_lib::check_true($memory_7)) {goto label_20;}
#line 205
$memory_7 = c_rt_lib::ov_is($memory_5, 'with_param');
#line 205
if (c_rt_lib::check_true($memory_7)) {goto label_21;}
#line 205
$memory_7 = "NOMATCHALERT";
#line 205
$memory_7 = [$memory_7,$memory_5];
#line 205
die(dfile::ssave($memory_7));
#line 204
label_20:
#line 205
goto label_19;
#line 205
label_21:
#line 205
$memory_8 = c_rt_lib::ov_as($memory_5, 'with_param');
#line 206
module_checker_priv::check_types_imported($memory_8, $memory_1);
#line 206
undef($memory_8);
#line 207
goto label_19;
#line 207
label_19:
#line 207
undef($memory_7);
#line 208
$memory_6 = c_rt_lib::next_iter($memory_6);
#line 208
goto label_18;
#line 208
label_16:
#line 208
undef($memory_4);
#line 208
undef($memory_5);
#line 208
undef($memory_6);
#line 208
undef($memory_3);
#line 209
goto label_1;
#line 209
label_10:
#line 210
goto label_1;
#line 210
label_1:
#line 210
undef($memory_2);
#line 210
undef($memory_0);
#line 210
$_[1] = $memory_1;return;
$_[1] = $memory_1;}

sub module_checker_priv::get_fun_key($$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;$memory_0 = $_[0];$memory_1 = $_[1];$memory_2 = $_[2];
#line 214
$memory_3 = "";
#line 214
$memory_3 = c_rt_lib::to_nl($memory_0 eq $memory_3);
#line 214
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 214
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 214
if (c_rt_lib::check_true($memory_3)) {goto label_2;}
#line 214
$memory_4 = "::";
#line 214
$memory_4 = $memory_0 . $memory_4;
#line 214
$memory_4 = $memory_4 . $memory_1;
#line 214
undef($memory_0);
#line 214
undef($memory_1);
#line 214
undef($memory_2);
#line 214
undef($memory_3);
#line 214
return $memory_4;
#line 214
undef($memory_4);
#line 214
goto label_2;
#line 214
label_2:
#line 214
undef($memory_3);
#line 215
$memory_3 = "priv:";
#line 215
$memory_3 = $memory_3 . $memory_2;
#line 215
$memory_4 = "::";
#line 215
$memory_3 = $memory_3 . $memory_4;
#line 215
undef($memory_4);
#line 215
$memory_3 = $memory_3 . $memory_1;
#line 215
undef($memory_0);
#line 215
undef($memory_1);
#line 215
undef($memory_2);
#line 215
return $memory_3;
#line 215
undef($memory_3);
#line 215
undef($memory_0);
#line 215
undef($memory_1);
#line 215
undef($memory_2);
#line 215
return;
}

sub module_checker_priv::add_fun_used($$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;$memory_0 = $_[0];$memory_1 = $_[1];$memory_2 = $_[2];Scalar::Util::weaken($_[2]) if ref($_[2]);
#line 219
$memory_4 = $memory_2->{'current_module'};
#line 219
$memory_3 = module_checker_priv::get_fun_key($memory_0, $memory_1, $memory_4);
#line 219
undef($memory_4);
#line 220
$memory_5 = $memory_2->{'called'};
#line 220
$memory_5 = $memory_5->{'func'};
#line 220
$memory_4 = hash::has_key($memory_5, $memory_3);
#line 220
undef($memory_5);
#line 220
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 220
if (c_rt_lib::check_true($memory_4)) {goto label_2;}
#line 220
undef($memory_0);
#line 220
undef($memory_1);
#line 220
undef($memory_3);
#line 220
undef($memory_4);
#line 220
$_[2] = $memory_2;return;
#line 220
goto label_2;
#line 220
label_2:
#line 220
undef($memory_4);
#line 221
$memory_4 = "called";
#line 221
$memory_4 = c_rt_lib::get_ref_hash($memory_2, $memory_4);
#line 221
$memory_5 = "func";
#line 221
$memory_5 = c_rt_lib::get_ref_hash($memory_4, $memory_5);
#line 221
$memory_6 = $memory_2->{'errors'};
#line 221
$memory_6 = $memory_6->{'current_line'};
#line 221
hash::set_value($memory_5, $memory_3, $memory_6);
#line 221
undef($memory_6);
#line 221
$memory_6 = "func";
#line 221
c_rt_lib::set_ref_hash($memory_4, $memory_6, $memory_5);
#line 221
$memory_6 = "called";
#line 221
c_rt_lib::set_ref_hash($memory_2, $memory_6, $memory_4);
#line 221
undef($memory_6);
#line 221
undef($memory_4);
#line 221
undef($memory_5);
#line 222
$memory_4 = "";
#line 222
$memory_4 = c_rt_lib::to_nl($memory_0 eq $memory_4);
#line 222
if (c_rt_lib::check_true($memory_4)) {goto label_5;}
#line 222
$memory_5 = $memory_2->{'called'};
#line 222
$memory_5 = $memory_5->{'module'};
#line 222
$memory_4 = hash::has_key($memory_5, $memory_0);
#line 222
undef($memory_5);
#line 222
label_5:
#line 222
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 222
if (c_rt_lib::check_true($memory_4)) {goto label_4;}
#line 222
undef($memory_0);
#line 222
undef($memory_1);
#line 222
undef($memory_3);
#line 222
undef($memory_4);
#line 222
$_[2] = $memory_2;return;
#line 222
goto label_4;
#line 222
label_4:
#line 222
undef($memory_4);
#line 223
$memory_4 = "called";
#line 223
$memory_4 = c_rt_lib::get_ref_hash($memory_2, $memory_4);
#line 223
$memory_5 = "module";
#line 223
$memory_5 = c_rt_lib::get_ref_hash($memory_4, $memory_5);
#line 223
$memory_6 = $memory_2->{'errors'};
#line 223
$memory_6 = $memory_6->{'current_line'};
#line 223
hash::set_value($memory_5, $memory_0, $memory_6);
#line 223
undef($memory_6);
#line 223
$memory_6 = "module";
#line 223
c_rt_lib::set_ref_hash($memory_4, $memory_6, $memory_5);
#line 223
$memory_6 = "called";
#line 223
c_rt_lib::set_ref_hash($memory_2, $memory_6, $memory_4);
#line 223
undef($memory_6);
#line 223
undef($memory_4);
#line 223
undef($memory_5);
#line 223
undef($memory_3);
#line 223
undef($memory_0);
#line 223
undef($memory_1);
#line 223
$_[2] = $memory_2;return;
$_[2] = $memory_2;}

sub module_checker_priv::check_return_type($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;$memory_0 = $_[0];$memory_1 = $_[1];Scalar::Util::weaken($_[1]) if ref($_[1]);
#line 227
$memory_2 = c_rt_lib::ov_is($memory_0, 'none');
#line 227
if (c_rt_lib::check_true($memory_2)) {goto label_2;}
#line 229
$memory_2 = c_rt_lib::ov_is($memory_0, 'type');
#line 229
if (c_rt_lib::check_true($memory_2)) {goto label_3;}
#line 229
$memory_2 = "NOMATCHALERT";
#line 229
$memory_2 = [$memory_2,$memory_0];
#line 229
die(dfile::ssave($memory_2));
#line 227
label_2:
#line 228
$memory_3 = c_rt_lib::ov_mk_none('none');
#line 228
undef($memory_0);
#line 228
undef($memory_2);
#line 228
$_[1] = $memory_1;return $memory_3;
#line 228
undef($memory_3);
#line 229
goto label_1;
#line 229
label_3:
#line 229
$memory_3 = c_rt_lib::ov_as($memory_0, 'type');
#line 230
$memory_4 = $memory_3;
#line 230
$memory_4 = c_rt_lib::ov_is($memory_4, 'fun_val');
#line 230
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 230
if (c_rt_lib::check_true($memory_4)) {goto label_5;}
#line 231
$memory_5 = $memory_3;
#line 231
$memory_5 = c_rt_lib::ov_as($memory_5, 'fun_val');
#line 232
$memory_6 = $memory_5->{'module'};
#line 232
$memory_8 = "ptd";
#line 232
$memory_6 = c_rt_lib::to_nl($memory_6 eq $memory_8);
#line 232
undef($memory_8);
#line 232
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 232
if (c_rt_lib::check_true($memory_7)) {goto label_8;}
#line 232
$memory_6 = $memory_5->{'name'};
#line 232
$memory_8 = "void";
#line 232
$memory_6 = c_rt_lib::to_nl($memory_6 eq $memory_8);
#line 232
undef($memory_8);
#line 232
label_8:
#line 232
undef($memory_7);
#line 232
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 232
if (c_rt_lib::check_true($memory_6)) {goto label_7;}
#line 233
$memory_7 = "ptd";
#line 233
$memory_8 = "void";
#line 233
module_checker_priv::add_fun_used($memory_7, $memory_8, $memory_1);
#line 233
undef($memory_8);
#line 233
undef($memory_7);
#line 234
$memory_7 = c_rt_lib::ov_mk_none('void');
#line 234
undef($memory_0);
#line 234
undef($memory_2);
#line 234
undef($memory_3);
#line 234
undef($memory_4);
#line 234
undef($memory_5);
#line 234
undef($memory_6);
#line 234
$_[1] = $memory_1;return $memory_7;
#line 234
undef($memory_7);
#line 235
goto label_7;
#line 235
label_7:
#line 235
undef($memory_6);
#line 235
undef($memory_5);
#line 236
goto label_5;
#line 236
label_5:
#line 236
undef($memory_4);
#line 236
undef($memory_3);
#line 237
goto label_1;
#line 237
label_1:
#line 237
undef($memory_2);
#line 238
module_checker_priv::check_type($memory_0, $memory_1);
#line 239
$memory_2 = c_rt_lib::ov_mk_none('value');
#line 239
undef($memory_0);
#line 239
$_[1] = $memory_1;return $memory_2;
#line 239
undef($memory_2);
#line 239
undef($memory_0);
#line 239
$_[1] = $memory_1;return;
$_[1] = $memory_1;}

sub module_checker_priv::check_type($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;$memory_0 = $_[0];$memory_1 = $_[1];Scalar::Util::weaken($_[1]) if ref($_[1]);
#line 242
$memory_2 = c_rt_lib::ov_is($memory_0, 'none');
#line 242
if (c_rt_lib::check_true($memory_2)) {goto label_2;}
#line 243
$memory_2 = c_rt_lib::ov_is($memory_0, 'type');
#line 243
if (c_rt_lib::check_true($memory_2)) {goto label_3;}
#line 243
$memory_2 = "NOMATCHALERT";
#line 243
$memory_2 = [$memory_2,$memory_0];
#line 243
die(dfile::ssave($memory_2));
#line 242
label_2:
#line 243
goto label_1;
#line 243
label_3:
#line 243
$memory_3 = c_rt_lib::ov_as($memory_0, 'type');
#line 244
$memory_4 = $memory_3;
#line 244
$memory_4 = c_rt_lib::ov_is($memory_4, 'fun_val');
#line 244
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 244
if (c_rt_lib::check_true($memory_4)) {goto label_5;}
#line 245
$memory_5 = $memory_3;
#line 245
$memory_5 = c_rt_lib::ov_as($memory_5, 'fun_val');
#line 246
$memory_6 = $memory_5->{'module'};
#line 246
$memory_7 = $memory_5->{'name'};
#line 246
module_checker_priv::add_fun_used($memory_6, $memory_7, $memory_1);
#line 246
undef($memory_7);
#line 246
undef($memory_6);
#line 246
undef($memory_5);
#line 247
goto label_5;
#line 247
label_5:
#line 247
undef($memory_4);
#line 248
$memory_4 = ptd_parser::try_value_to_ptd($memory_3);
#line 248
$memory_5 = c_rt_lib::ov_is($memory_4, 'err');
#line 248
if (c_rt_lib::check_true($memory_5)) {goto label_7;}
#line 250
$memory_5 = c_rt_lib::ov_is($memory_4, 'ok');
#line 250
if (c_rt_lib::check_true($memory_5)) {goto label_8;}
#line 250
$memory_5 = "NOMATCHALERT";
#line 250
$memory_5 = [$memory_5,$memory_4];
#line 250
die(dfile::ssave($memory_5));
#line 248
label_7:
#line 248
$memory_6 = c_rt_lib::ov_as($memory_4, 'err');
#line 249
$memory_7 = "errors";
#line 249
$memory_7 = c_rt_lib::get_ref_hash($memory_1, $memory_7);
#line 249
module_checker_priv::add_error($memory_7, $memory_6);
#line 249
$memory_8 = "errors";
#line 249
c_rt_lib::set_ref_hash($memory_1, $memory_8, $memory_7);
#line 249
undef($memory_8);
#line 249
undef($memory_7);
#line 249
undef($memory_6);
#line 250
goto label_6;
#line 250
label_8:
#line 250
$memory_6 = c_rt_lib::ov_as($memory_4, 'ok');
#line 251
module_checker_priv::check_types_imported($memory_6, $memory_1);
#line 251
undef($memory_6);
#line 252
goto label_6;
#line 252
label_6:
#line 252
undef($memory_4);
#line 252
undef($memory_5);
#line 252
undef($memory_3);
#line 253
goto label_1;
#line 253
label_1:
#line 253
undef($memory_2);
#line 253
undef($memory_0);
#line 253
$_[1] = $memory_1;return;
$_[1] = $memory_1;}

sub module_checker_priv::add_var($$$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;$memory_0 = $_[0];$memory_1 = $_[1];$memory_2 = $_[2];$memory_3 = $_[3];Scalar::Util::weaken($_[3]) if ref($_[3]);
#line 257
$memory_5 = $memory_3->{'vars'};
#line 257
$memory_4 = hash::has_key($memory_5, $memory_0);
#line 257
undef($memory_5);
#line 257
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 257
if (c_rt_lib::check_true($memory_4)) {goto label_2;}
#line 258
$memory_5 = "errors";
#line 258
$memory_5 = c_rt_lib::get_ref_hash($memory_3, $memory_5);
#line 258
$memory_6 = "redeclaration variable: ";
#line 258
$memory_6 = $memory_6 . $memory_0;
#line 258
module_checker_priv::add_error($memory_5, $memory_6);
#line 258
undef($memory_6);
#line 258
$memory_6 = "errors";
#line 258
c_rt_lib::set_ref_hash($memory_3, $memory_6, $memory_5);
#line 258
undef($memory_6);
#line 258
undef($memory_5);
#line 259
goto label_2;
#line 259
label_2:
#line 259
undef($memory_4);
#line 260
$memory_5 = c_rt_lib::ov_mk_none('none');
#line 260
$memory_6 = c_rt_lib::to_nl(0);
#line 260
$memory_4 = {write => $memory_5,read => $memory_6,is_required => $memory_2,};
#line 260
undef($memory_5);
#line 260
undef($memory_6);
#line 261
$memory_5 = $memory_1;
#line 261
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 261
if (c_rt_lib::check_true($memory_5)) {goto label_4;}
#line 261
$memory_6 = c_rt_lib::ov_mk_none('const');
#line 261
$memory_7 = $memory_6;
#line 261
 if (c_rt_lib::get_hashcount($memory_4) > 1) {$memory_4 = {%{$memory_4}};}$memory_4->{'write'} = $memory_7;
#line 261
undef($memory_6);
#line 261
undef($memory_7);
#line 261
goto label_4;
#line 261
label_4:
#line 261
undef($memory_5);
#line 262
$memory_5 = "vars";
#line 262
$memory_5 = c_rt_lib::get_ref_hash($memory_3, $memory_5);
#line 262
hash::set_value($memory_5, $memory_0, $memory_4);
#line 262
$memory_6 = "vars";
#line 262
c_rt_lib::set_ref_hash($memory_3, $memory_6, $memory_5);
#line 262
undef($memory_6);
#line 262
undef($memory_5);
#line 262
undef($memory_4);
#line 262
undef($memory_0);
#line 262
undef($memory_1);
#line 262
undef($memory_2);
#line 262
$_[3] = $memory_3;return;
$_[3] = $memory_3;}

sub module_checker_priv::use_var($$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;$memory_0 = $_[0];$memory_1 = $_[1];$memory_2 = $_[2];Scalar::Util::weaken($_[2]) if ref($_[2]);
#line 265
$memory_4 = $memory_2->{'vars'};
#line 265
$memory_3 = hash::has_key($memory_4, $memory_0);
#line 265
undef($memory_4);
#line 265
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 265
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 265
if (c_rt_lib::check_true($memory_3)) {goto label_2;}
#line 266
$memory_4 = "errors";
#line 266
$memory_4 = c_rt_lib::get_ref_hash($memory_2, $memory_4);
#line 266
$memory_5 = "unknown variable: ";
#line 266
$memory_5 = $memory_5 . $memory_0;
#line 266
module_checker_priv::add_error($memory_4, $memory_5);
#line 266
undef($memory_5);
#line 266
$memory_5 = "errors";
#line 266
c_rt_lib::set_ref_hash($memory_2, $memory_5, $memory_4);
#line 266
undef($memory_5);
#line 266
undef($memory_4);
#line 267
undef($memory_0);
#line 267
undef($memory_1);
#line 267
undef($memory_3);
#line 267
$_[2] = $memory_2;return;
#line 268
goto label_2;
#line 268
label_2:
#line 268
undef($memory_3);
#line 269
$memory_4 = $memory_2->{'vars'};
#line 269
$memory_3 = hash::get_value($memory_4, $memory_0);
#line 269
undef($memory_4);
#line 270
$memory_4 = c_rt_lib::ov_is($memory_1, 'get');
#line 270
if (c_rt_lib::check_true($memory_4)) {goto label_4;}
#line 272
$memory_4 = c_rt_lib::ov_is($memory_1, 'set');
#line 272
if (c_rt_lib::check_true($memory_4)) {goto label_5;}
#line 278
$memory_4 = c_rt_lib::ov_is($memory_1, 'mod');
#line 278
if (c_rt_lib::check_true($memory_4)) {goto label_6;}
#line 278
$memory_4 = "NOMATCHALERT";
#line 278
$memory_4 = [$memory_4,$memory_1];
#line 278
die(dfile::ssave($memory_4));
#line 270
label_4:
#line 271
$memory_5 = c_rt_lib::to_nl(1);
#line 271
$memory_6 = $memory_5;
#line 271
 if (c_rt_lib::get_hashcount($memory_3) > 1) {$memory_3 = {%{$memory_3}};}$memory_3->{'read'} = $memory_6;
#line 271
undef($memory_5);
#line 271
undef($memory_6);
#line 272
goto label_3;
#line 272
label_5:
#line 273
$memory_5 = $memory_3->{'write'};
#line 273
$memory_5 = c_rt_lib::ov_is($memory_5, 'const');
#line 273
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 273
if (c_rt_lib::check_true($memory_5)) {goto label_8;}
#line 274
$memory_6 = "errors";
#line 274
$memory_6 = c_rt_lib::get_ref_hash($memory_2, $memory_6);
#line 274
$memory_7 = "can't change const variable: ";
#line 274
$memory_7 = $memory_7 . $memory_0;
#line 274
module_checker_priv::add_error($memory_6, $memory_7);
#line 274
undef($memory_7);
#line 274
$memory_7 = "errors";
#line 274
c_rt_lib::set_ref_hash($memory_2, $memory_7, $memory_6);
#line 274
undef($memory_7);
#line 274
undef($memory_6);
#line 275
undef($memory_0);
#line 275
undef($memory_1);
#line 275
undef($memory_3);
#line 275
undef($memory_4);
#line 275
undef($memory_5);
#line 275
$_[2] = $memory_2;return;
#line 276
goto label_8;
#line 276
label_8:
#line 276
undef($memory_5);
#line 277
$memory_5 = c_rt_lib::ov_mk_none('value');
#line 277
$memory_6 = $memory_5;
#line 277
 if (c_rt_lib::get_hashcount($memory_3) > 1) {$memory_3 = {%{$memory_3}};}$memory_3->{'write'} = $memory_6;
#line 277
undef($memory_5);
#line 277
undef($memory_6);
#line 278
goto label_3;
#line 278
label_6:
#line 279
$memory_5 = c_rt_lib::to_nl(1);
#line 279
$memory_6 = $memory_5;
#line 279
 if (c_rt_lib::get_hashcount($memory_3) > 1) {$memory_3 = {%{$memory_3}};}$memory_3->{'read'} = $memory_6;
#line 279
undef($memory_5);
#line 279
undef($memory_6);
#line 280
$memory_5 = $memory_3->{'write'};
#line 280
$memory_5 = c_rt_lib::ov_is($memory_5, 'const');
#line 280
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 280
if (c_rt_lib::check_true($memory_5)) {goto label_10;}
#line 281
$memory_6 = "errors";
#line 281
$memory_6 = c_rt_lib::get_ref_hash($memory_2, $memory_6);
#line 281
$memory_7 = "can't change const variable: ";
#line 281
$memory_7 = $memory_7 . $memory_0;
#line 281
module_checker_priv::add_error($memory_6, $memory_7);
#line 281
undef($memory_7);
#line 281
$memory_7 = "errors";
#line 281
c_rt_lib::set_ref_hash($memory_2, $memory_7, $memory_6);
#line 281
undef($memory_7);
#line 281
undef($memory_6);
#line 282
undef($memory_0);
#line 282
undef($memory_1);
#line 282
undef($memory_3);
#line 282
undef($memory_4);
#line 282
undef($memory_5);
#line 282
$_[2] = $memory_2;return;
#line 283
goto label_10;
#line 283
label_10:
#line 283
undef($memory_5);
#line 284
$memory_5 = c_rt_lib::ov_mk_none('value');
#line 284
$memory_6 = $memory_5;
#line 284
 if (c_rt_lib::get_hashcount($memory_3) > 1) {$memory_3 = {%{$memory_3}};}$memory_3->{'write'} = $memory_6;
#line 284
undef($memory_5);
#line 284
undef($memory_6);
#line 285
goto label_3;
#line 285
label_3:
#line 285
undef($memory_4);
#line 286
$memory_4 = "vars";
#line 286
$memory_4 = c_rt_lib::get_ref_hash($memory_2, $memory_4);
#line 286
hash::set_value($memory_4, $memory_0, $memory_3);
#line 286
$memory_5 = "vars";
#line 286
c_rt_lib::set_ref_hash($memory_2, $memory_5, $memory_4);
#line 286
undef($memory_5);
#line 286
undef($memory_4);
#line 286
undef($memory_3);
#line 286
undef($memory_0);
#line 286
undef($memory_1);
#line 286
$_[2] = $memory_2;return;
$_[2] = $memory_2;}

sub module_checker_priv::add_var_dec($$$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;$memory_0 = $_[0];$memory_1 = $_[1];$memory_2 = $_[2];$memory_3 = $_[3];Scalar::Util::weaken($_[3]) if ref($_[3]);
#line 289
$memory_4 = $memory_0->{'name'};
#line 289
module_checker_priv::add_var($memory_4, $memory_1, $memory_2, $memory_3);
#line 289
undef($memory_4);
#line 290
$memory_4 = $memory_0->{'type'};
#line 290
module_checker_priv::check_type($memory_4, $memory_3);
#line 290
undef($memory_4);
#line 291
$memory_4 = $memory_0->{'value'};
#line 291
$memory_5 = c_rt_lib::ov_is($memory_4, 'value');
#line 291
if (c_rt_lib::check_true($memory_5)) {goto label_2;}
#line 295
$memory_5 = c_rt_lib::ov_is($memory_4, 'none');
#line 295
if (c_rt_lib::check_true($memory_5)) {goto label_3;}
#line 295
$memory_5 = "NOMATCHALERT";
#line 295
$memory_5 = [$memory_5,$memory_4];
#line 295
die(dfile::ssave($memory_5));
#line 291
label_2:
#line 291
$memory_6 = c_rt_lib::ov_as($memory_4, 'value');
#line 292
module_checker_priv::check_val($memory_6, $memory_3);
#line 293
$memory_7 = $memory_1;
#line 293
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 293
if (c_rt_lib::check_true($memory_7)) {goto label_5;}
#line 293
$memory_8 = [];
#line 293
die(dfile::ssave($memory_8));
#line 293
goto label_5;
#line 293
label_5:
#line 293
undef($memory_7);
#line 293
undef($memory_8);
#line 294
$memory_7 = $memory_0->{'name'};
#line 294
$memory_8 = c_rt_lib::ov_mk_none('set');
#line 294
module_checker_priv::use_var($memory_7, $memory_8, $memory_3);
#line 294
undef($memory_8);
#line 294
undef($memory_7);
#line 294
undef($memory_6);
#line 295
goto label_1;
#line 295
label_3:
#line 296
goto label_1;
#line 296
label_1:
#line 296
undef($memory_4);
#line 296
undef($memory_5);
#line 296
undef($memory_0);
#line 296
undef($memory_1);
#line 296
undef($memory_2);
#line 296
$_[3] = $memory_3;return;
$_[3] = $memory_3;}

sub module_checker_priv::check_cmd($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;my $memory_13;my $memory_14;my $memory_15;my $memory_16;my $memory_17;$memory_0 = $_[0];$memory_1 = $_[1];Scalar::Util::weaken($_[1]) if ref($_[1]);
#line 300
$memory_2 = $memory_0->{'debug'};
#line 300
$memory_2 = $memory_2->{'begin'};
#line 300
$memory_2 = $memory_2->{'line'};
#line 300
$memory_3 = "errors";
#line 300
$memory_3 = c_rt_lib::get_ref_hash($memory_1, $memory_3);
#line 300
$memory_4 = $memory_2;
#line 300
 if (c_rt_lib::get_hashcount($memory_3) > 1) {$memory_3 = {%{$memory_3}};}$memory_3->{'current_line'} = $memory_4;
#line 300
$memory_5 = "errors";
#line 300
c_rt_lib::set_ref_hash($memory_1, $memory_5, $memory_3);
#line 300
undef($memory_5);
#line 300
undef($memory_2);
#line 300
undef($memory_3);
#line 300
undef($memory_4);
#line 301
$memory_2 = $memory_1->{'return'};
#line 301
$memory_2 = $memory_2->{'was'};
#line 301
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 301
if (c_rt_lib::check_true($memory_2)) {goto label_2;}
#line 302
$memory_3 = "errors";
#line 302
$memory_3 = c_rt_lib::get_ref_hash($memory_1, $memory_3);
#line 302
$memory_4 = "never used command";
#line 302
module_checker_priv::add_warning($memory_3, $memory_4);
#line 302
undef($memory_4);
#line 302
$memory_4 = "errors";
#line 302
c_rt_lib::set_ref_hash($memory_1, $memory_4, $memory_3);
#line 302
undef($memory_4);
#line 302
undef($memory_3);
#line 303
$memory_3 = c_rt_lib::to_nl(0);
#line 303
$memory_4 = "return";
#line 303
$memory_4 = c_rt_lib::get_ref_hash($memory_1, $memory_4);
#line 303
$memory_5 = $memory_3;
#line 303
 if (c_rt_lib::get_hashcount($memory_4) > 1) {$memory_4 = {%{$memory_4}};}$memory_4->{'was'} = $memory_5;
#line 303
$memory_6 = "return";
#line 303
c_rt_lib::set_ref_hash($memory_1, $memory_6, $memory_4);
#line 303
undef($memory_6);
#line 303
undef($memory_3);
#line 303
undef($memory_4);
#line 303
undef($memory_5);
#line 304
goto label_2;
#line 304
label_2:
#line 304
undef($memory_2);
#line 305
$memory_2 = $memory_0->{'cmd'};
#line 305
$memory_3 = c_rt_lib::ov_is($memory_2, 'if');
#line 305
if (c_rt_lib::check_true($memory_3)) {goto label_4;}
#line 319
$memory_3 = c_rt_lib::ov_is($memory_2, 'for');
#line 319
if (c_rt_lib::check_true($memory_3)) {goto label_5;}
#line 332
$memory_3 = c_rt_lib::ov_is($memory_2, 'fora');
#line 332
if (c_rt_lib::check_true($memory_3)) {goto label_6;}
#line 340
$memory_3 = c_rt_lib::ov_is($memory_2, 'forh');
#line 340
if (c_rt_lib::check_true($memory_3)) {goto label_7;}
#line 349
$memory_3 = c_rt_lib::ov_is($memory_2, 'loop');
#line 349
if (c_rt_lib::check_true($memory_3)) {goto label_8;}
#line 354
$memory_3 = c_rt_lib::ov_is($memory_2, 'rep');
#line 354
if (c_rt_lib::check_true($memory_3)) {goto label_9;}
#line 362
$memory_3 = c_rt_lib::ov_is($memory_2, 'while');
#line 362
if (c_rt_lib::check_true($memory_3)) {goto label_10;}
#line 369
$memory_3 = c_rt_lib::ov_is($memory_2, 'if_mod');
#line 369
if (c_rt_lib::check_true($memory_3)) {goto label_11;}
#line 373
$memory_3 = c_rt_lib::ov_is($memory_2, 'unless_mod');
#line 373
if (c_rt_lib::check_true($memory_3)) {goto label_12;}
#line 377
$memory_3 = c_rt_lib::ov_is($memory_2, 'break');
#line 377
if (c_rt_lib::check_true($memory_3)) {goto label_13;}
#line 381
$memory_3 = c_rt_lib::ov_is($memory_2, 'continue');
#line 381
if (c_rt_lib::check_true($memory_3)) {goto label_14;}
#line 385
$memory_3 = c_rt_lib::ov_is($memory_2, 'match');
#line 385
if (c_rt_lib::check_true($memory_3)) {goto label_15;}
#line 400
$memory_3 = c_rt_lib::ov_is($memory_2, 'value');
#line 400
if (c_rt_lib::check_true($memory_3)) {goto label_16;}
#line 402
$memory_3 = c_rt_lib::ov_is($memory_2, 'return');
#line 402
if (c_rt_lib::check_true($memory_3)) {goto label_17;}
#line 418
$memory_3 = c_rt_lib::ov_is($memory_2, 'block');
#line 418
if (c_rt_lib::check_true($memory_3)) {goto label_18;}
#line 424
$memory_3 = c_rt_lib::ov_is($memory_2, 'die');
#line 424
if (c_rt_lib::check_true($memory_3)) {goto label_19;}
#line 429
$memory_3 = c_rt_lib::ov_is($memory_2, 'var_decl');
#line 429
if (c_rt_lib::check_true($memory_3)) {goto label_20;}
#line 431
$memory_3 = c_rt_lib::ov_is($memory_2, 'try');
#line 431
if (c_rt_lib::check_true($memory_3)) {goto label_21;}
#line 439
$memory_3 = c_rt_lib::ov_is($memory_2, 'ensure');
#line 439
if (c_rt_lib::check_true($memory_3)) {goto label_22;}
#line 447
$memory_3 = c_rt_lib::ov_is($memory_2, 'nop');
#line 447
if (c_rt_lib::check_true($memory_3)) {goto label_23;}
#line 447
$memory_3 = "NOMATCHALERT";
#line 447
$memory_3 = [$memory_3,$memory_2];
#line 447
die(dfile::ssave($memory_3));
#line 305
label_4:
#line 305
$memory_4 = c_rt_lib::ov_as($memory_2, 'if');
#line 306
$memory_5 = $memory_4->{'cond'};
#line 306
module_checker_priv::check_val($memory_5, $memory_1);
#line 306
undef($memory_5);
#line 307
$memory_5 = $memory_4->{'if'};
#line 307
module_checker_priv::check_cmd($memory_5, $memory_1);
#line 307
undef($memory_5);
#line 308
$memory_5 = $memory_1->{'return'};
#line 308
$memory_5 = $memory_5->{'was'};
#line 309
$memory_6 = $memory_4->{'elsif'};
#line 309
$memory_8 = 0;
#line 309
$memory_9 = 1;
#line 309
$memory_10 = c_rt_lib::array_len($memory_6);
#line 309
label_26:
#line 309
$memory_11 = c_rt_lib::to_nl($memory_8 >= $memory_10);
#line 309
if (c_rt_lib::check_true($memory_11)) {goto label_24;}
#line 309
$memory_7 = $memory_6->[$memory_8];
#line 310
$memory_12 = c_rt_lib::to_nl(0);
#line 310
$memory_13 = "return";
#line 310
$memory_13 = c_rt_lib::get_ref_hash($memory_1, $memory_13);
#line 310
$memory_14 = $memory_12;
#line 310
 if (c_rt_lib::get_hashcount($memory_13) > 1) {$memory_13 = {%{$memory_13}};}$memory_13->{'was'} = $memory_14;
#line 310
$memory_15 = "return";
#line 310
c_rt_lib::set_ref_hash($memory_1, $memory_15, $memory_13);
#line 310
undef($memory_15);
#line 310
undef($memory_12);
#line 310
undef($memory_13);
#line 310
undef($memory_14);
#line 311
$memory_12 = $memory_7->{'cond'};
#line 311
module_checker_priv::check_val($memory_12, $memory_1);
#line 311
undef($memory_12);
#line 312
$memory_12 = $memory_7->{'cmd'};
#line 312
module_checker_priv::check_cmd($memory_12, $memory_1);
#line 312
undef($memory_12);
#line 313
$memory_12 = $memory_1->{'return'};
#line 313
$memory_12 = $memory_12->{'was'};
#line 313
$memory_12 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_12));
#line 313
$memory_12 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_12));
#line 313
if (c_rt_lib::check_true($memory_12)) {goto label_28;}
#line 313
$memory_13 = c_rt_lib::to_nl(0);
#line 313
$memory_5 = $memory_13;
#line 313
undef($memory_13);
#line 313
goto label_28;
#line 313
label_28:
#line 313
undef($memory_12);
#line 314
$memory_8 = $memory_8 + $memory_9;
#line 314
goto label_26;
#line 314
label_24:
#line 314
undef($memory_6);
#line 314
undef($memory_7);
#line 314
undef($memory_8);
#line 314
undef($memory_9);
#line 314
undef($memory_10);
#line 314
undef($memory_11);
#line 315
$memory_6 = c_rt_lib::to_nl(0);
#line 315
$memory_7 = "return";
#line 315
$memory_7 = c_rt_lib::get_ref_hash($memory_1, $memory_7);
#line 315
$memory_8 = $memory_6;
#line 315
 if (c_rt_lib::get_hashcount($memory_7) > 1) {$memory_7 = {%{$memory_7}};}$memory_7->{'was'} = $memory_8;
#line 315
$memory_9 = "return";
#line 315
c_rt_lib::set_ref_hash($memory_1, $memory_9, $memory_7);
#line 315
undef($memory_9);
#line 315
undef($memory_6);
#line 315
undef($memory_7);
#line 315
undef($memory_8);
#line 316
$memory_6 = $memory_4->{'else'};
#line 316
module_checker_priv::check_cmd($memory_6, $memory_1);
#line 316
undef($memory_6);
#line 317
$memory_6 = $memory_1->{'return'};
#line 317
$memory_6 = $memory_6->{'was'};
#line 317
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 317
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 317
if (c_rt_lib::check_true($memory_6)) {goto label_30;}
#line 317
$memory_7 = c_rt_lib::to_nl(0);
#line 317
$memory_5 = $memory_7;
#line 317
undef($memory_7);
#line 317
goto label_30;
#line 317
label_30:
#line 317
undef($memory_6);
#line 318
$memory_6 = "return";
#line 318
$memory_6 = c_rt_lib::get_ref_hash($memory_1, $memory_6);
#line 318
$memory_7 = $memory_5;
#line 318
 if (c_rt_lib::get_hashcount($memory_6) > 1) {$memory_6 = {%{$memory_6}};}$memory_6->{'was'} = $memory_7;
#line 318
$memory_8 = "return";
#line 318
c_rt_lib::set_ref_hash($memory_1, $memory_8, $memory_6);
#line 318
undef($memory_8);
#line 318
undef($memory_6);
#line 318
undef($memory_7);
#line 318
undef($memory_5);
#line 318
undef($memory_4);
#line 319
goto label_3;
#line 319
label_5:
#line 319
$memory_4 = c_rt_lib::ov_as($memory_2, 'for');
#line 320
$memory_5 = module_checker_priv::save_block($memory_1);
#line 321
$memory_6 = $memory_4->{'start'};
#line 321
$memory_7 = c_rt_lib::ov_is($memory_6, 'value');
#line 321
if (c_rt_lib::check_true($memory_7)) {goto label_32;}
#line 323
$memory_7 = c_rt_lib::ov_is($memory_6, 'var_decl');
#line 323
if (c_rt_lib::check_true($memory_7)) {goto label_33;}
#line 323
$memory_7 = "NOMATCHALERT";
#line 323
$memory_7 = [$memory_7,$memory_6];
#line 323
die(dfile::ssave($memory_7));
#line 321
label_32:
#line 321
$memory_8 = c_rt_lib::ov_as($memory_6, 'value');
#line 322
module_checker_priv::check_val($memory_8, $memory_1);
#line 322
undef($memory_8);
#line 323
goto label_31;
#line 323
label_33:
#line 323
$memory_8 = c_rt_lib::ov_as($memory_6, 'var_decl');
#line 324
$memory_9 = c_rt_lib::to_nl(0);
#line 324
$memory_10 = c_rt_lib::to_nl(0);
#line 324
module_checker_priv::add_var_dec($memory_8, $memory_9, $memory_10, $memory_1);
#line 324
undef($memory_10);
#line 324
undef($memory_9);
#line 324
undef($memory_8);
#line 325
goto label_31;
#line 325
label_31:
#line 325
undef($memory_6);
#line 325
undef($memory_7);
#line 326
$memory_6 = $memory_4->{'cond'};
#line 326
module_checker_priv::check_val($memory_6, $memory_1);
#line 326
undef($memory_6);
#line 327
$memory_6 = c_rt_lib::to_nl(1);
#line 327
$memory_7 = $memory_6;
#line 327
 if (c_rt_lib::get_hashcount($memory_1) > 1) {$memory_1 = {%{$memory_1}};}$memory_1->{'in_loop'} = $memory_7;
#line 327
undef($memory_6);
#line 327
undef($memory_7);
#line 328
$memory_6 = $memory_4->{'cmd'};
#line 328
module_checker_priv::check_cmd($memory_6, $memory_1);
#line 328
undef($memory_6);
#line 329
$memory_6 = $memory_4->{'iter'};
#line 329
module_checker_priv::check_val($memory_6, $memory_1);
#line 329
undef($memory_6);
#line 330
module_checker_priv::load_block($memory_1, $memory_5);
#line 331
$memory_6 = c_rt_lib::to_nl(0);
#line 331
$memory_7 = "return";
#line 331
$memory_7 = c_rt_lib::get_ref_hash($memory_1, $memory_7);
#line 331
$memory_8 = $memory_6;
#line 331
 if (c_rt_lib::get_hashcount($memory_7) > 1) {$memory_7 = {%{$memory_7}};}$memory_7->{'was'} = $memory_8;
#line 331
$memory_9 = "return";
#line 331
c_rt_lib::set_ref_hash($memory_1, $memory_9, $memory_7);
#line 331
undef($memory_9);
#line 331
undef($memory_6);
#line 331
undef($memory_7);
#line 331
undef($memory_8);
#line 331
undef($memory_5);
#line 331
undef($memory_4);
#line 332
goto label_3;
#line 332
label_6:
#line 332
$memory_4 = c_rt_lib::ov_as($memory_2, 'fora');
#line 333
$memory_5 = module_checker_priv::save_block($memory_1);
#line 334
$memory_6 = $memory_4->{'array'};
#line 334
module_checker_priv::check_val($memory_6, $memory_1);
#line 334
undef($memory_6);
#line 335
$memory_6 = $memory_4->{'iter'};
#line 335
$memory_7 = c_rt_lib::to_nl(1);
#line 335
$memory_8 = c_rt_lib::to_nl(1);
#line 335
module_checker_priv::add_var_dec($memory_6, $memory_7, $memory_8, $memory_1);
#line 335
undef($memory_8);
#line 335
undef($memory_7);
#line 335
undef($memory_6);
#line 336
$memory_6 = c_rt_lib::to_nl(1);
#line 336
$memory_7 = $memory_6;
#line 336
 if (c_rt_lib::get_hashcount($memory_1) > 1) {$memory_1 = {%{$memory_1}};}$memory_1->{'in_loop'} = $memory_7;
#line 336
undef($memory_6);
#line 336
undef($memory_7);
#line 337
$memory_6 = $memory_4->{'cmd'};
#line 337
module_checker_priv::check_cmd($memory_6, $memory_1);
#line 337
undef($memory_6);
#line 338
module_checker_priv::load_block($memory_1, $memory_5);
#line 339
$memory_6 = c_rt_lib::to_nl(0);
#line 339
$memory_7 = "return";
#line 339
$memory_7 = c_rt_lib::get_ref_hash($memory_1, $memory_7);
#line 339
$memory_8 = $memory_6;
#line 339
 if (c_rt_lib::get_hashcount($memory_7) > 1) {$memory_7 = {%{$memory_7}};}$memory_7->{'was'} = $memory_8;
#line 339
$memory_9 = "return";
#line 339
c_rt_lib::set_ref_hash($memory_1, $memory_9, $memory_7);
#line 339
undef($memory_9);
#line 339
undef($memory_6);
#line 339
undef($memory_7);
#line 339
undef($memory_8);
#line 339
undef($memory_5);
#line 339
undef($memory_4);
#line 340
goto label_3;
#line 340
label_7:
#line 340
$memory_4 = c_rt_lib::ov_as($memory_2, 'forh');
#line 341
$memory_5 = module_checker_priv::save_block($memory_1);
#line 342
$memory_6 = $memory_4->{'hash'};
#line 342
module_checker_priv::check_val($memory_6, $memory_1);
#line 342
undef($memory_6);
#line 343
$memory_6 = $memory_4->{'val'};
#line 343
$memory_7 = c_rt_lib::to_nl(1);
#line 343
$memory_8 = c_rt_lib::to_nl(1);
#line 343
module_checker_priv::add_var_dec($memory_6, $memory_7, $memory_8, $memory_1);
#line 343
undef($memory_8);
#line 343
undef($memory_7);
#line 343
undef($memory_6);
#line 344
$memory_6 = $memory_4->{'key'};
#line 344
$memory_7 = c_rt_lib::to_nl(1);
#line 344
$memory_8 = c_rt_lib::to_nl(1);
#line 344
module_checker_priv::add_var_dec($memory_6, $memory_7, $memory_8, $memory_1);
#line 344
undef($memory_8);
#line 344
undef($memory_7);
#line 344
undef($memory_6);
#line 345
$memory_6 = c_rt_lib::to_nl(1);
#line 345
$memory_7 = $memory_6;
#line 345
 if (c_rt_lib::get_hashcount($memory_1) > 1) {$memory_1 = {%{$memory_1}};}$memory_1->{'in_loop'} = $memory_7;
#line 345
undef($memory_6);
#line 345
undef($memory_7);
#line 346
$memory_6 = $memory_4->{'cmd'};
#line 346
module_checker_priv::check_cmd($memory_6, $memory_1);
#line 346
undef($memory_6);
#line 347
module_checker_priv::load_block($memory_1, $memory_5);
#line 348
$memory_6 = c_rt_lib::to_nl(0);
#line 348
$memory_7 = "return";
#line 348
$memory_7 = c_rt_lib::get_ref_hash($memory_1, $memory_7);
#line 348
$memory_8 = $memory_6;
#line 348
 if (c_rt_lib::get_hashcount($memory_7) > 1) {$memory_7 = {%{$memory_7}};}$memory_7->{'was'} = $memory_8;
#line 348
$memory_9 = "return";
#line 348
c_rt_lib::set_ref_hash($memory_1, $memory_9, $memory_7);
#line 348
undef($memory_9);
#line 348
undef($memory_6);
#line 348
undef($memory_7);
#line 348
undef($memory_8);
#line 348
undef($memory_5);
#line 348
undef($memory_4);
#line 349
goto label_3;
#line 349
label_8:
#line 349
$memory_4 = c_rt_lib::ov_as($memory_2, 'loop');
#line 350
$memory_5 = module_checker_priv::save_block($memory_1);
#line 351
$memory_6 = c_rt_lib::to_nl(1);
#line 351
$memory_7 = $memory_6;
#line 351
 if (c_rt_lib::get_hashcount($memory_1) > 1) {$memory_1 = {%{$memory_1}};}$memory_1->{'in_loop'} = $memory_7;
#line 351
undef($memory_6);
#line 351
undef($memory_7);
#line 352
module_checker_priv::check_cmd($memory_4, $memory_1);
#line 353
module_checker_priv::load_block($memory_1, $memory_5);
#line 353
undef($memory_5);
#line 353
undef($memory_4);
#line 354
goto label_3;
#line 354
label_9:
#line 354
$memory_4 = c_rt_lib::ov_as($memory_2, 'rep');
#line 355
$memory_5 = module_checker_priv::save_block($memory_1);
#line 356
$memory_6 = $memory_4->{'count'};
#line 356
module_checker_priv::check_val($memory_6, $memory_1);
#line 356
undef($memory_6);
#line 357
$memory_6 = $memory_4->{'iter'};
#line 357
$memory_7 = c_rt_lib::to_nl(1);
#line 357
$memory_8 = c_rt_lib::to_nl(1);
#line 357
module_checker_priv::add_var_dec($memory_6, $memory_7, $memory_8, $memory_1);
#line 357
undef($memory_8);
#line 357
undef($memory_7);
#line 357
undef($memory_6);
#line 358
$memory_6 = c_rt_lib::to_nl(1);
#line 358
$memory_7 = $memory_6;
#line 358
 if (c_rt_lib::get_hashcount($memory_1) > 1) {$memory_1 = {%{$memory_1}};}$memory_1->{'in_loop'} = $memory_7;
#line 358
undef($memory_6);
#line 358
undef($memory_7);
#line 359
$memory_6 = $memory_4->{'cmd'};
#line 359
module_checker_priv::check_cmd($memory_6, $memory_1);
#line 359
undef($memory_6);
#line 360
module_checker_priv::load_block($memory_1, $memory_5);
#line 361
$memory_6 = c_rt_lib::to_nl(0);
#line 361
$memory_7 = "return";
#line 361
$memory_7 = c_rt_lib::get_ref_hash($memory_1, $memory_7);
#line 361
$memory_8 = $memory_6;
#line 361
 if (c_rt_lib::get_hashcount($memory_7) > 1) {$memory_7 = {%{$memory_7}};}$memory_7->{'was'} = $memory_8;
#line 361
$memory_9 = "return";
#line 361
c_rt_lib::set_ref_hash($memory_1, $memory_9, $memory_7);
#line 361
undef($memory_9);
#line 361
undef($memory_6);
#line 361
undef($memory_7);
#line 361
undef($memory_8);
#line 361
undef($memory_5);
#line 361
undef($memory_4);
#line 362
goto label_3;
#line 362
label_10:
#line 362
$memory_4 = c_rt_lib::ov_as($memory_2, 'while');
#line 363
$memory_5 = module_checker_priv::save_block($memory_1);
#line 364
$memory_6 = $memory_4->{'cond'};
#line 364
module_checker_priv::check_val($memory_6, $memory_1);
#line 364
undef($memory_6);
#line 365
$memory_6 = c_rt_lib::to_nl(1);
#line 365
$memory_7 = $memory_6;
#line 365
 if (c_rt_lib::get_hashcount($memory_1) > 1) {$memory_1 = {%{$memory_1}};}$memory_1->{'in_loop'} = $memory_7;
#line 365
undef($memory_6);
#line 365
undef($memory_7);
#line 366
$memory_6 = $memory_4->{'cmd'};
#line 366
module_checker_priv::check_cmd($memory_6, $memory_1);
#line 366
undef($memory_6);
#line 367
module_checker_priv::load_block($memory_1, $memory_5);
#line 368
$memory_6 = c_rt_lib::to_nl(0);
#line 368
$memory_7 = "return";
#line 368
$memory_7 = c_rt_lib::get_ref_hash($memory_1, $memory_7);
#line 368
$memory_8 = $memory_6;
#line 368
 if (c_rt_lib::get_hashcount($memory_7) > 1) {$memory_7 = {%{$memory_7}};}$memory_7->{'was'} = $memory_8;
#line 368
$memory_9 = "return";
#line 368
c_rt_lib::set_ref_hash($memory_1, $memory_9, $memory_7);
#line 368
undef($memory_9);
#line 368
undef($memory_6);
#line 368
undef($memory_7);
#line 368
undef($memory_8);
#line 368
undef($memory_5);
#line 368
undef($memory_4);
#line 369
goto label_3;
#line 369
label_11:
#line 369
$memory_4 = c_rt_lib::ov_as($memory_2, 'if_mod');
#line 370
$memory_5 = $memory_4->{'cond'};
#line 370
module_checker_priv::check_val($memory_5, $memory_1);
#line 370
undef($memory_5);
#line 371
$memory_5 = $memory_4->{'cmd'};
#line 371
module_checker_priv::check_cmd($memory_5, $memory_1);
#line 371
undef($memory_5);
#line 372
$memory_5 = c_rt_lib::to_nl(0);
#line 372
$memory_6 = "return";
#line 372
$memory_6 = c_rt_lib::get_ref_hash($memory_1, $memory_6);
#line 372
$memory_7 = $memory_5;
#line 372
 if (c_rt_lib::get_hashcount($memory_6) > 1) {$memory_6 = {%{$memory_6}};}$memory_6->{'was'} = $memory_7;
#line 372
$memory_8 = "return";
#line 372
c_rt_lib::set_ref_hash($memory_1, $memory_8, $memory_6);
#line 372
undef($memory_8);
#line 372
undef($memory_5);
#line 372
undef($memory_6);
#line 372
undef($memory_7);
#line 372
undef($memory_4);
#line 373
goto label_3;
#line 373
label_12:
#line 373
$memory_4 = c_rt_lib::ov_as($memory_2, 'unless_mod');
#line 374
$memory_5 = $memory_4->{'cond'};
#line 374
module_checker_priv::check_val($memory_5, $memory_1);
#line 374
undef($memory_5);
#line 375
$memory_5 = $memory_4->{'cmd'};
#line 375
module_checker_priv::check_cmd($memory_5, $memory_1);
#line 375
undef($memory_5);
#line 376
$memory_5 = c_rt_lib::to_nl(0);
#line 376
$memory_6 = "return";
#line 376
$memory_6 = c_rt_lib::get_ref_hash($memory_1, $memory_6);
#line 376
$memory_7 = $memory_5;
#line 376
 if (c_rt_lib::get_hashcount($memory_6) > 1) {$memory_6 = {%{$memory_6}};}$memory_6->{'was'} = $memory_7;
#line 376
$memory_8 = "return";
#line 376
c_rt_lib::set_ref_hash($memory_1, $memory_8, $memory_6);
#line 376
undef($memory_8);
#line 376
undef($memory_5);
#line 376
undef($memory_6);
#line 376
undef($memory_7);
#line 376
undef($memory_4);
#line 377
goto label_3;
#line 377
label_13:
#line 378
$memory_4 = $memory_1->{'in_loop'};
#line 378
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 378
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 378
if (c_rt_lib::check_true($memory_4)) {goto label_35;}
#line 379
$memory_5 = "errors";
#line 379
$memory_5 = c_rt_lib::get_ref_hash($memory_1, $memory_5);
#line 379
$memory_6 = "command break can be used only in cyclic block";
#line 379
module_checker_priv::add_error($memory_5, $memory_6);
#line 379
undef($memory_6);
#line 379
$memory_6 = "errors";
#line 379
c_rt_lib::set_ref_hash($memory_1, $memory_6, $memory_5);
#line 379
undef($memory_6);
#line 379
undef($memory_5);
#line 380
goto label_35;
#line 380
label_35:
#line 380
undef($memory_4);
#line 381
goto label_3;
#line 381
label_14:
#line 382
$memory_4 = $memory_1->{'in_loop'};
#line 382
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 382
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 382
if (c_rt_lib::check_true($memory_4)) {goto label_37;}
#line 383
$memory_5 = "errors";
#line 383
$memory_5 = c_rt_lib::get_ref_hash($memory_1, $memory_5);
#line 383
$memory_6 = "command continue can be used only in cyclic block";
#line 383
module_checker_priv::add_error($memory_5, $memory_6);
#line 383
undef($memory_6);
#line 383
$memory_6 = "errors";
#line 383
c_rt_lib::set_ref_hash($memory_1, $memory_6, $memory_5);
#line 383
undef($memory_6);
#line 383
undef($memory_5);
#line 384
goto label_37;
#line 384
label_37:
#line 384
undef($memory_4);
#line 385
goto label_3;
#line 385
label_15:
#line 385
$memory_4 = c_rt_lib::ov_as($memory_2, 'match');
#line 386
$memory_5 = $memory_4->{'val'};
#line 386
module_checker_priv::check_val($memory_5, $memory_1);
#line 386
undef($memory_5);
#line 387
$memory_5 = c_rt_lib::to_nl(1);
#line 388
$memory_6 = $memory_4->{'branch_list'};
#line 388
$memory_8 = 0;
#line 388
$memory_9 = 1;
#line 388
$memory_10 = c_rt_lib::array_len($memory_6);
#line 388
label_40:
#line 388
$memory_11 = c_rt_lib::to_nl($memory_8 >= $memory_10);
#line 388
if (c_rt_lib::check_true($memory_11)) {goto label_38;}
#line 388
$memory_7 = $memory_6->[$memory_8];
#line 389
$memory_12 = c_rt_lib::to_nl(0);
#line 389
$memory_13 = "return";
#line 389
$memory_13 = c_rt_lib::get_ref_hash($memory_1, $memory_13);
#line 389
$memory_14 = $memory_12;
#line 389
 if (c_rt_lib::get_hashcount($memory_13) > 1) {$memory_13 = {%{$memory_13}};}$memory_13->{'was'} = $memory_14;
#line 389
$memory_15 = "return";
#line 389
c_rt_lib::set_ref_hash($memory_1, $memory_15, $memory_13);
#line 389
undef($memory_15);
#line 389
undef($memory_12);
#line 389
undef($memory_13);
#line 389
undef($memory_14);
#line 390
$memory_12 = module_checker_priv::save_block($memory_1);
#line 391
$memory_13 = $memory_7->{'variant'};
#line 391
$memory_13 = $memory_13->{'value'};
#line 391
$memory_14 = c_rt_lib::ov_is($memory_13, 'none');
#line 391
if (c_rt_lib::check_true($memory_14)) {goto label_42;}
#line 392
$memory_14 = c_rt_lib::ov_is($memory_13, 'value');
#line 392
if (c_rt_lib::check_true($memory_14)) {goto label_43;}
#line 392
$memory_14 = "NOMATCHALERT";
#line 392
$memory_14 = [$memory_14,$memory_13];
#line 392
die(dfile::ssave($memory_14));
#line 391
label_42:
#line 392
goto label_41;
#line 392
label_43:
#line 392
$memory_15 = c_rt_lib::ov_as($memory_13, 'value');
#line 393
$memory_16 = c_rt_lib::to_nl(0);
#line 393
$memory_17 = c_rt_lib::to_nl(1);
#line 393
module_checker_priv::add_var_dec($memory_15, $memory_16, $memory_17, $memory_1);
#line 393
undef($memory_17);
#line 393
undef($memory_16);
#line 393
undef($memory_15);
#line 394
goto label_41;
#line 394
label_41:
#line 394
undef($memory_13);
#line 394
undef($memory_14);
#line 395
$memory_13 = $memory_7->{'cmd'};
#line 395
module_checker_priv::check_cmd($memory_13, $memory_1);
#line 395
undef($memory_13);
#line 396
$memory_13 = $memory_1->{'return'};
#line 396
$memory_13 = $memory_13->{'was'};
#line 396
$memory_13 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_13));
#line 396
$memory_13 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_13));
#line 396
if (c_rt_lib::check_true($memory_13)) {goto label_45;}
#line 396
$memory_14 = c_rt_lib::to_nl(0);
#line 396
$memory_5 = $memory_14;
#line 396
undef($memory_14);
#line 396
goto label_45;
#line 396
label_45:
#line 396
undef($memory_13);
#line 397
module_checker_priv::load_block($memory_1, $memory_12);
#line 397
undef($memory_12);
#line 398
$memory_8 = $memory_8 + $memory_9;
#line 398
goto label_40;
#line 398
label_38:
#line 398
undef($memory_6);
#line 398
undef($memory_7);
#line 398
undef($memory_8);
#line 398
undef($memory_9);
#line 398
undef($memory_10);
#line 398
undef($memory_11);
#line 399
$memory_6 = "return";
#line 399
$memory_6 = c_rt_lib::get_ref_hash($memory_1, $memory_6);
#line 399
$memory_7 = $memory_5;
#line 399
 if (c_rt_lib::get_hashcount($memory_6) > 1) {$memory_6 = {%{$memory_6}};}$memory_6->{'was'} = $memory_7;
#line 399
$memory_8 = "return";
#line 399
c_rt_lib::set_ref_hash($memory_1, $memory_8, $memory_6);
#line 399
undef($memory_8);
#line 399
undef($memory_6);
#line 399
undef($memory_7);
#line 399
undef($memory_5);
#line 399
undef($memory_4);
#line 400
goto label_3;
#line 400
label_16:
#line 400
$memory_4 = c_rt_lib::ov_as($memory_2, 'value');
#line 401
module_checker_priv::check_val($memory_4, $memory_1);
#line 401
undef($memory_4);
#line 402
goto label_3;
#line 402
label_17:
#line 402
$memory_4 = c_rt_lib::ov_as($memory_2, 'return');
#line 403
module_checker_priv::check_val($memory_4, $memory_1);
#line 404
$memory_5 = $memory_1->{'return'};
#line 404
$memory_5 = $memory_5->{'arg'};
#line 404
$memory_6 = c_rt_lib::ov_is($memory_5, 'value');
#line 404
if (c_rt_lib::check_true($memory_6)) {goto label_47;}
#line 406
$memory_6 = c_rt_lib::ov_is($memory_5, 'none');
#line 406
if (c_rt_lib::check_true($memory_6)) {goto label_48;}
#line 408
$memory_6 = c_rt_lib::ov_is($memory_5, 'was_value');
#line 408
if (c_rt_lib::check_true($memory_6)) {goto label_49;}
#line 411
$memory_6 = c_rt_lib::ov_is($memory_5, 'was_void');
#line 411
if (c_rt_lib::check_true($memory_6)) {goto label_50;}
#line 414
$memory_6 = c_rt_lib::ov_is($memory_5, 'void');
#line 414
if (c_rt_lib::check_true($memory_6)) {goto label_51;}
#line 414
$memory_6 = "NOMATCHALERT";
#line 414
$memory_6 = [$memory_6,$memory_5];
#line 414
die(dfile::ssave($memory_6));
#line 404
label_47:
#line 405
$memory_7 = $memory_4;
#line 405
$memory_7 = c_rt_lib::ov_is($memory_7, 'nop');
#line 405
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 405
if (c_rt_lib::check_true($memory_7)) {goto label_53;}
#line 405
$memory_8 = "errors";
#line 405
$memory_8 = c_rt_lib::get_ref_hash($memory_1, $memory_8);
#line 405
$memory_9 = "return command without value";
#line 405
module_checker_priv::add_error($memory_8, $memory_9);
#line 405
undef($memory_9);
#line 405
$memory_9 = "errors";
#line 405
c_rt_lib::set_ref_hash($memory_1, $memory_9, $memory_8);
#line 405
undef($memory_9);
#line 405
undef($memory_8);
#line 405
goto label_53;
#line 405
label_53:
#line 405
undef($memory_7);
#line 406
goto label_46;
#line 406
label_48:
#line 407
$memory_7 = $memory_4;
#line 407
$memory_7 = c_rt_lib::ov_is($memory_7, 'nop');
#line 407
if (c_rt_lib::check_true($memory_7)) {goto label_55;}
#line 407
$memory_7 = c_rt_lib::ov_mk_none('was_value');
#line 407
goto label_54;
#line 407
label_55:
#line 407
$memory_7 = c_rt_lib::ov_mk_none('was_void');
#line 407
label_54:
#line 407
$memory_8 = "return";
#line 407
$memory_8 = c_rt_lib::get_ref_hash($memory_1, $memory_8);
#line 407
$memory_9 = $memory_7;
#line 407
 if (c_rt_lib::get_hashcount($memory_8) > 1) {$memory_8 = {%{$memory_8}};}$memory_8->{'arg'} = $memory_9;
#line 407
$memory_10 = "return";
#line 407
c_rt_lib::set_ref_hash($memory_1, $memory_10, $memory_8);
#line 407
undef($memory_10);
#line 407
undef($memory_7);
#line 407
undef($memory_8);
#line 407
undef($memory_9);
#line 408
goto label_46;
#line 408
label_49:
#line 409
$memory_7 = $memory_4;
#line 409
$memory_7 = c_rt_lib::ov_is($memory_7, 'nop');
#line 409
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 409
if (c_rt_lib::check_true($memory_7)) {goto label_57;}
#line 409
$memory_8 = "errors";
#line 409
$memory_8 = c_rt_lib::get_ref_hash($memory_1, $memory_8);
#line 409
$memory_9 = "previously was return with value";
#line 409
module_checker_priv::add_error($memory_8, $memory_9);
#line 409
undef($memory_9);
#line 409
$memory_9 = "errors";
#line 409
c_rt_lib::set_ref_hash($memory_1, $memory_9, $memory_8);
#line 409
undef($memory_9);
#line 409
undef($memory_8);
#line 409
goto label_57;
#line 409
label_57:
#line 409
undef($memory_7);
#line 410
$memory_7 = $memory_4;
#line 410
$memory_7 = c_rt_lib::ov_is($memory_7, 'nop');
#line 410
if (c_rt_lib::check_true($memory_7)) {goto label_59;}
#line 410
$memory_7 = c_rt_lib::ov_mk_none('was_value');
#line 410
goto label_58;
#line 410
label_59:
#line 410
$memory_7 = c_rt_lib::ov_mk_none('was_void');
#line 410
label_58:
#line 410
$memory_8 = "return";
#line 410
$memory_8 = c_rt_lib::get_ref_hash($memory_1, $memory_8);
#line 410
$memory_9 = $memory_7;
#line 410
 if (c_rt_lib::get_hashcount($memory_8) > 1) {$memory_8 = {%{$memory_8}};}$memory_8->{'arg'} = $memory_9;
#line 410
$memory_10 = "return";
#line 410
c_rt_lib::set_ref_hash($memory_1, $memory_10, $memory_8);
#line 410
undef($memory_10);
#line 410
undef($memory_7);
#line 410
undef($memory_8);
#line 410
undef($memory_9);
#line 411
goto label_46;
#line 411
label_50:
#line 412
$memory_7 = $memory_4;
#line 412
$memory_7 = c_rt_lib::ov_is($memory_7, 'nop');
#line 412
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 412
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 412
if (c_rt_lib::check_true($memory_7)) {goto label_61;}
#line 412
$memory_8 = "errors";
#line 412
$memory_8 = c_rt_lib::get_ref_hash($memory_1, $memory_8);
#line 412
$memory_9 = "previously was empty return";
#line 412
module_checker_priv::add_error($memory_8, $memory_9);
#line 412
undef($memory_9);
#line 412
$memory_9 = "errors";
#line 412
c_rt_lib::set_ref_hash($memory_1, $memory_9, $memory_8);
#line 412
undef($memory_9);
#line 412
undef($memory_8);
#line 412
goto label_61;
#line 412
label_61:
#line 412
undef($memory_7);
#line 413
$memory_7 = $memory_4;
#line 413
$memory_7 = c_rt_lib::ov_is($memory_7, 'nop');
#line 413
if (c_rt_lib::check_true($memory_7)) {goto label_63;}
#line 413
$memory_7 = c_rt_lib::ov_mk_none('was_value');
#line 413
goto label_62;
#line 413
label_63:
#line 413
$memory_7 = c_rt_lib::ov_mk_none('was_void');
#line 413
label_62:
#line 413
$memory_8 = "return";
#line 413
$memory_8 = c_rt_lib::get_ref_hash($memory_1, $memory_8);
#line 413
$memory_9 = $memory_7;
#line 413
 if (c_rt_lib::get_hashcount($memory_8) > 1) {$memory_8 = {%{$memory_8}};}$memory_8->{'arg'} = $memory_9;
#line 413
$memory_10 = "return";
#line 413
c_rt_lib::set_ref_hash($memory_1, $memory_10, $memory_8);
#line 413
undef($memory_10);
#line 413
undef($memory_7);
#line 413
undef($memory_8);
#line 413
undef($memory_9);
#line 414
goto label_46;
#line 414
label_51:
#line 415
$memory_7 = $memory_4;
#line 415
$memory_7 = c_rt_lib::ov_is($memory_7, 'nop');
#line 415
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 415
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 415
if (c_rt_lib::check_true($memory_7)) {goto label_65;}
#line 415
$memory_8 = "errors";
#line 415
$memory_8 = c_rt_lib::get_ref_hash($memory_1, $memory_8);
#line 415
$memory_9 = "return value in void function";
#line 415
module_checker_priv::add_error($memory_8, $memory_9);
#line 415
undef($memory_9);
#line 415
$memory_9 = "errors";
#line 415
c_rt_lib::set_ref_hash($memory_1, $memory_9, $memory_8);
#line 415
undef($memory_9);
#line 415
undef($memory_8);
#line 415
goto label_65;
#line 415
label_65:
#line 415
undef($memory_7);
#line 416
goto label_46;
#line 416
label_46:
#line 416
undef($memory_5);
#line 416
undef($memory_6);
#line 417
$memory_5 = c_rt_lib::to_nl(1);
#line 417
$memory_6 = "return";
#line 417
$memory_6 = c_rt_lib::get_ref_hash($memory_1, $memory_6);
#line 417
$memory_7 = $memory_5;
#line 417
 if (c_rt_lib::get_hashcount($memory_6) > 1) {$memory_6 = {%{$memory_6}};}$memory_6->{'was'} = $memory_7;
#line 417
$memory_8 = "return";
#line 417
c_rt_lib::set_ref_hash($memory_1, $memory_8, $memory_6);
#line 417
undef($memory_8);
#line 417
undef($memory_5);
#line 417
undef($memory_6);
#line 417
undef($memory_7);
#line 417
undef($memory_4);
#line 418
goto label_3;
#line 418
label_18:
#line 418
$memory_4 = c_rt_lib::ov_as($memory_2, 'block');
#line 419
$memory_5 = module_checker_priv::save_block($memory_1);
#line 420
$memory_7 = 0;
#line 420
$memory_8 = 1;
#line 420
$memory_9 = c_rt_lib::array_len($memory_4);
#line 420
label_68:
#line 420
$memory_10 = c_rt_lib::to_nl($memory_7 >= $memory_9);
#line 420
if (c_rt_lib::check_true($memory_10)) {goto label_66;}
#line 420
$memory_6 = $memory_4->[$memory_7];
#line 421
module_checker_priv::check_cmd($memory_6, $memory_1);
#line 422
$memory_7 = $memory_7 + $memory_8;
#line 422
goto label_68;
#line 422
label_66:
#line 422
undef($memory_6);
#line 422
undef($memory_7);
#line 422
undef($memory_8);
#line 422
undef($memory_9);
#line 422
undef($memory_10);
#line 423
module_checker_priv::load_block($memory_1, $memory_5);
#line 423
undef($memory_5);
#line 423
undef($memory_4);
#line 424
goto label_3;
#line 424
label_19:
#line 424
$memory_4 = c_rt_lib::ov_as($memory_2, 'die');
#line 425
$memory_6 = 0;
#line 425
$memory_7 = 1;
#line 425
$memory_8 = c_rt_lib::array_len($memory_4);
#line 425
label_71:
#line 425
$memory_9 = c_rt_lib::to_nl($memory_6 >= $memory_8);
#line 425
if (c_rt_lib::check_true($memory_9)) {goto label_69;}
#line 425
$memory_5 = $memory_4->[$memory_6];
#line 426
module_checker_priv::check_val($memory_5, $memory_1);
#line 427
$memory_6 = $memory_6 + $memory_7;
#line 427
goto label_71;
#line 427
label_69:
#line 427
undef($memory_5);
#line 427
undef($memory_6);
#line 427
undef($memory_7);
#line 427
undef($memory_8);
#line 427
undef($memory_9);
#line 428
$memory_5 = c_rt_lib::to_nl(1);
#line 428
$memory_6 = "return";
#line 428
$memory_6 = c_rt_lib::get_ref_hash($memory_1, $memory_6);
#line 428
$memory_7 = $memory_5;
#line 428
 if (c_rt_lib::get_hashcount($memory_6) > 1) {$memory_6 = {%{$memory_6}};}$memory_6->{'was'} = $memory_7;
#line 428
$memory_8 = "return";
#line 428
c_rt_lib::set_ref_hash($memory_1, $memory_8, $memory_6);
#line 428
undef($memory_8);
#line 428
undef($memory_5);
#line 428
undef($memory_6);
#line 428
undef($memory_7);
#line 428
undef($memory_4);
#line 429
goto label_3;
#line 429
label_20:
#line 429
$memory_4 = c_rt_lib::ov_as($memory_2, 'var_decl');
#line 430
$memory_5 = c_rt_lib::to_nl(0);
#line 430
$memory_6 = c_rt_lib::to_nl(0);
#line 430
module_checker_priv::add_var_dec($memory_4, $memory_5, $memory_6, $memory_1);
#line 430
undef($memory_6);
#line 430
undef($memory_5);
#line 430
undef($memory_4);
#line 431
goto label_3;
#line 431
label_21:
#line 431
$memory_4 = c_rt_lib::ov_as($memory_2, 'try');
#line 432
$memory_5 = c_rt_lib::ov_is($memory_4, 'decl');
#line 432
if (c_rt_lib::check_true($memory_5)) {goto label_73;}
#line 434
$memory_5 = c_rt_lib::ov_is($memory_4, 'lval');
#line 434
if (c_rt_lib::check_true($memory_5)) {goto label_74;}
#line 436
$memory_5 = c_rt_lib::ov_is($memory_4, 'expr');
#line 436
if (c_rt_lib::check_true($memory_5)) {goto label_75;}
#line 436
$memory_5 = "NOMATCHALERT";
#line 436
$memory_5 = [$memory_5,$memory_4];
#line 436
die(dfile::ssave($memory_5));
#line 432
label_73:
#line 432
$memory_6 = c_rt_lib::ov_as($memory_4, 'decl');
#line 433
$memory_7 = c_rt_lib::to_nl(0);
#line 433
$memory_8 = c_rt_lib::to_nl(0);
#line 433
module_checker_priv::add_var_dec($memory_6, $memory_7, $memory_8, $memory_1);
#line 433
undef($memory_8);
#line 433
undef($memory_7);
#line 433
undef($memory_6);
#line 434
goto label_72;
#line 434
label_74:
#line 434
$memory_6 = c_rt_lib::ov_as($memory_4, 'lval');
#line 435
$memory_7 = c_rt_lib::ov_mk_arg('bin_op', $memory_6);
#line 435
module_checker_priv::check_val($memory_7, $memory_1);
#line 435
undef($memory_7);
#line 435
undef($memory_6);
#line 436
goto label_72;
#line 436
label_75:
#line 436
$memory_6 = c_rt_lib::ov_as($memory_4, 'expr');
#line 437
module_checker_priv::check_val($memory_6, $memory_1);
#line 437
undef($memory_6);
#line 438
goto label_72;
#line 438
label_72:
#line 438
undef($memory_5);
#line 438
undef($memory_4);
#line 439
goto label_3;
#line 439
label_22:
#line 439
$memory_4 = c_rt_lib::ov_as($memory_2, 'ensure');
#line 440
$memory_5 = c_rt_lib::ov_is($memory_4, 'decl');
#line 440
if (c_rt_lib::check_true($memory_5)) {goto label_77;}
#line 442
$memory_5 = c_rt_lib::ov_is($memory_4, 'lval');
#line 442
if (c_rt_lib::check_true($memory_5)) {goto label_78;}
#line 444
$memory_5 = c_rt_lib::ov_is($memory_4, 'expr');
#line 444
if (c_rt_lib::check_true($memory_5)) {goto label_79;}
#line 444
$memory_5 = "NOMATCHALERT";
#line 444
$memory_5 = [$memory_5,$memory_4];
#line 444
die(dfile::ssave($memory_5));
#line 440
label_77:
#line 440
$memory_6 = c_rt_lib::ov_as($memory_4, 'decl');
#line 441
$memory_7 = c_rt_lib::to_nl(0);
#line 441
$memory_8 = c_rt_lib::to_nl(0);
#line 441
module_checker_priv::add_var_dec($memory_6, $memory_7, $memory_8, $memory_1);
#line 441
undef($memory_8);
#line 441
undef($memory_7);
#line 441
undef($memory_6);
#line 442
goto label_76;
#line 442
label_78:
#line 442
$memory_6 = c_rt_lib::ov_as($memory_4, 'lval');
#line 443
$memory_7 = c_rt_lib::ov_mk_arg('bin_op', $memory_6);
#line 443
module_checker_priv::check_val($memory_7, $memory_1);
#line 443
undef($memory_7);
#line 443
undef($memory_6);
#line 444
goto label_76;
#line 444
label_79:
#line 444
$memory_6 = c_rt_lib::ov_as($memory_4, 'expr');
#line 445
module_checker_priv::check_val($memory_6, $memory_1);
#line 445
undef($memory_6);
#line 446
goto label_76;
#line 446
label_76:
#line 446
undef($memory_5);
#line 446
undef($memory_4);
#line 447
goto label_3;
#line 447
label_23:
#line 448
goto label_3;
#line 448
label_3:
#line 448
undef($memory_2);
#line 448
undef($memory_3);
#line 448
undef($memory_0);
#line 448
$_[1] = $memory_1;return;
$_[1] = $memory_1;}

sub module_checker_priv::check_lvalue($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;$memory_0 = $_[0];$memory_1 = $_[1];Scalar::Util::weaken($_[1]) if ref($_[1]);
#line 451
$memory_2 = $memory_0;
#line 451
$memory_2 = c_rt_lib::ov_is($memory_2, 'var');
#line 451
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 451
if (c_rt_lib::check_true($memory_2)) {goto label_2;}
#line 452
$memory_3 = $memory_0;
#line 452
$memory_3 = c_rt_lib::ov_as($memory_3, 'var');
#line 452
$memory_4 = c_rt_lib::ov_mk_none('mod');
#line 452
module_checker_priv::use_var($memory_3, $memory_4, $memory_1);
#line 452
undef($memory_4);
#line 452
undef($memory_3);
#line 453
undef($memory_0);
#line 453
undef($memory_2);
#line 453
$_[1] = $memory_1;return;
#line 454
goto label_3;
#line 454
label_2:
#line 454
$memory_2 = $memory_0;
#line 454
$memory_2 = c_rt_lib::ov_is($memory_2, 'bin_op');
#line 454
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 454
if (c_rt_lib::check_true($memory_2)) {goto label_3;}
#line 455
$memory_3 = $memory_0;
#line 455
$memory_3 = c_rt_lib::ov_as($memory_3, 'bin_op');
#line 456
$memory_4 = $memory_3->{'op'};
#line 456
$memory_5 = "->";
#line 456
$memory_4 = c_rt_lib::to_nl($memory_4 eq $memory_5);
#line 456
undef($memory_5);
#line 456
if (c_rt_lib::check_true($memory_4)) {goto label_6;}
#line 456
$memory_4 = $memory_3->{'op'};
#line 456
$memory_5 = "ARRAY_INDEX";
#line 456
$memory_4 = c_rt_lib::to_nl($memory_4 eq $memory_5);
#line 456
undef($memory_5);
#line 456
label_6:
#line 456
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 456
if (c_rt_lib::check_true($memory_4)) {goto label_5;}
#line 457
$memory_5 = $memory_3->{'left'};
#line 457
module_checker_priv::check_lvalue($memory_5, $memory_1);
#line 457
undef($memory_5);
#line 458
$memory_5 = $memory_3->{'right'};
#line 458
module_checker_priv::check_val($memory_5, $memory_1);
#line 458
undef($memory_5);
#line 459
undef($memory_0);
#line 459
undef($memory_2);
#line 459
undef($memory_3);
#line 459
undef($memory_4);
#line 459
$_[1] = $memory_1;return;
#line 460
goto label_5;
#line 460
label_5:
#line 460
undef($memory_4);
#line 460
undef($memory_3);
#line 461
goto label_3;
#line 461
label_3:
#line 461
undef($memory_2);
#line 462
$memory_2 = "errors";
#line 462
$memory_2 = c_rt_lib::get_ref_hash($memory_1, $memory_2);
#line 462
$memory_3 = "invalid expression for lvalue";
#line 462
module_checker_priv::add_error($memory_2, $memory_3);
#line 462
undef($memory_3);
#line 462
$memory_3 = "errors";
#line 462
c_rt_lib::set_ref_hash($memory_1, $memory_3, $memory_2);
#line 462
undef($memory_3);
#line 462
undef($memory_2);
#line 462
undef($memory_0);
#line 462
$_[1] = $memory_1;return;
$_[1] = $memory_1;}

sub module_checker_priv::check_val($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;$memory_0 = $_[0];$memory_1 = $_[1];Scalar::Util::weaken($_[1]) if ref($_[1]);
#line 465
$memory_2 = c_rt_lib::ov_is($memory_0, 'ternary_op');
#line 465
if (c_rt_lib::check_true($memory_2)) {goto label_2;}
#line 469
$memory_2 = c_rt_lib::ov_is($memory_0, 'parenthesis');
#line 469
if (c_rt_lib::check_true($memory_2)) {goto label_3;}
#line 471
$memory_2 = c_rt_lib::ov_is($memory_0, 'variant');
#line 471
if (c_rt_lib::check_true($memory_2)) {goto label_4;}
#line 473
$memory_2 = c_rt_lib::ov_is($memory_0, 'const');
#line 473
if (c_rt_lib::check_true($memory_2)) {goto label_5;}
#line 474
$memory_2 = c_rt_lib::ov_is($memory_0, 'string');
#line 474
if (c_rt_lib::check_true($memory_2)) {goto label_6;}
#line 475
$memory_2 = c_rt_lib::ov_is($memory_0, 'nop');
#line 475
if (c_rt_lib::check_true($memory_2)) {goto label_7;}
#line 476
$memory_2 = c_rt_lib::ov_is($memory_0, 'hash_key');
#line 476
if (c_rt_lib::check_true($memory_2)) {goto label_8;}
#line 477
$memory_2 = c_rt_lib::ov_is($memory_0, 'arr_decl');
#line 477
if (c_rt_lib::check_true($memory_2)) {goto label_9;}
#line 481
$memory_2 = c_rt_lib::ov_is($memory_0, 'hash_decl');
#line 481
if (c_rt_lib::check_true($memory_2)) {goto label_10;}
#line 486
$memory_2 = c_rt_lib::ov_is($memory_0, 'var');
#line 486
if (c_rt_lib::check_true($memory_2)) {goto label_11;}
#line 488
$memory_2 = c_rt_lib::ov_is($memory_0, 'bin_op');
#line 488
if (c_rt_lib::check_true($memory_2)) {goto label_12;}
#line 500
$memory_2 = c_rt_lib::ov_is($memory_0, 'var_op');
#line 500
if (c_rt_lib::check_true($memory_2)) {goto label_13;}
#line 502
$memory_2 = c_rt_lib::ov_is($memory_0, 'unary_op');
#line 502
if (c_rt_lib::check_true($memory_2)) {goto label_14;}
#line 504
$memory_2 = c_rt_lib::ov_is($memory_0, 'fun_label');
#line 504
if (c_rt_lib::check_true($memory_2)) {goto label_15;}
#line 506
$memory_2 = c_rt_lib::ov_is($memory_0, 'fun_val');
#line 506
if (c_rt_lib::check_true($memory_2)) {goto label_16;}
#line 515
$memory_2 = c_rt_lib::ov_is($memory_0, 'post_inc');
#line 515
if (c_rt_lib::check_true($memory_2)) {goto label_17;}
#line 517
$memory_2 = c_rt_lib::ov_is($memory_0, 'post_dec');
#line 517
if (c_rt_lib::check_true($memory_2)) {goto label_18;}
#line 517
$memory_2 = "NOMATCHALERT";
#line 517
$memory_2 = [$memory_2,$memory_0];
#line 517
die(dfile::ssave($memory_2));
#line 465
label_2:
#line 465
$memory_3 = c_rt_lib::ov_as($memory_0, 'ternary_op');
#line 466
$memory_4 = $memory_3->{'fst'};
#line 466
module_checker_priv::check_val($memory_4, $memory_1);
#line 466
undef($memory_4);
#line 467
$memory_4 = $memory_3->{'snd'};
#line 467
module_checker_priv::check_val($memory_4, $memory_1);
#line 467
undef($memory_4);
#line 468
$memory_4 = $memory_3->{'thrd'};
#line 468
module_checker_priv::check_val($memory_4, $memory_1);
#line 468
undef($memory_4);
#line 468
undef($memory_3);
#line 469
goto label_1;
#line 469
label_3:
#line 469
$memory_3 = c_rt_lib::ov_as($memory_0, 'parenthesis');
#line 470
module_checker_priv::check_val($memory_3, $memory_1);
#line 470
undef($memory_3);
#line 471
goto label_1;
#line 471
label_4:
#line 471
$memory_3 = c_rt_lib::ov_as($memory_0, 'variant');
#line 472
$memory_4 = $memory_3->{'var'};
#line 472
module_checker_priv::check_val($memory_4, $memory_1);
#line 472
undef($memory_4);
#line 472
undef($memory_3);
#line 473
goto label_1;
#line 473
label_5:
#line 473
$memory_3 = c_rt_lib::ov_as($memory_0, 'const');
#line 473
undef($memory_3);
#line 474
goto label_1;
#line 474
label_6:
#line 474
$memory_3 = c_rt_lib::ov_as($memory_0, 'string');
#line 474
undef($memory_3);
#line 475
goto label_1;
#line 475
label_7:
#line 476
goto label_1;
#line 476
label_8:
#line 476
$memory_3 = c_rt_lib::ov_as($memory_0, 'hash_key');
#line 476
undef($memory_3);
#line 477
goto label_1;
#line 477
label_9:
#line 477
$memory_3 = c_rt_lib::ov_as($memory_0, 'arr_decl');
#line 478
$memory_5 = 0;
#line 478
$memory_6 = 1;
#line 478
$memory_7 = c_rt_lib::array_len($memory_3);
#line 478
label_21:
#line 478
$memory_8 = c_rt_lib::to_nl($memory_5 >= $memory_7);
#line 478
if (c_rt_lib::check_true($memory_8)) {goto label_19;}
#line 478
$memory_4 = $memory_3->[$memory_5];
#line 479
module_checker_priv::check_val($memory_4, $memory_1);
#line 480
$memory_5 = $memory_5 + $memory_6;
#line 480
goto label_21;
#line 480
label_19:
#line 480
undef($memory_4);
#line 480
undef($memory_5);
#line 480
undef($memory_6);
#line 480
undef($memory_7);
#line 480
undef($memory_8);
#line 480
undef($memory_3);
#line 481
goto label_1;
#line 481
label_10:
#line 481
$memory_3 = c_rt_lib::ov_as($memory_0, 'hash_decl');
#line 482
$memory_5 = 0;
#line 482
$memory_6 = 1;
#line 482
$memory_7 = c_rt_lib::array_len($memory_3);
#line 482
label_24:
#line 482
$memory_8 = c_rt_lib::to_nl($memory_5 >= $memory_7);
#line 482
if (c_rt_lib::check_true($memory_8)) {goto label_22;}
#line 482
$memory_4 = $memory_3->[$memory_5];
#line 483
$memory_9 = $memory_4->{'key'};
#line 483
$memory_10 = "hash_key";
#line 483
ov::as($memory_9, $memory_10);
#line 483
undef($memory_10);
#line 483
undef($memory_9);
#line 484
$memory_9 = $memory_4->{'val'};
#line 484
module_checker_priv::check_val($memory_9, $memory_1);
#line 484
undef($memory_9);
#line 485
$memory_5 = $memory_5 + $memory_6;
#line 485
goto label_24;
#line 485
label_22:
#line 485
undef($memory_4);
#line 485
undef($memory_5);
#line 485
undef($memory_6);
#line 485
undef($memory_7);
#line 485
undef($memory_8);
#line 485
undef($memory_3);
#line 486
goto label_1;
#line 486
label_11:
#line 486
$memory_3 = c_rt_lib::ov_as($memory_0, 'var');
#line 487
$memory_4 = c_rt_lib::ov_mk_none('get');
#line 487
module_checker_priv::use_var($memory_3, $memory_4, $memory_1);
#line 487
undef($memory_4);
#line 487
undef($memory_3);
#line 488
goto label_1;
#line 488
label_12:
#line 488
$memory_3 = c_rt_lib::ov_as($memory_0, 'bin_op');
#line 489
$memory_4 = $memory_3->{'op'};
#line 490
$memory_5 = "=";
#line 490
$memory_5 = c_rt_lib::to_nl($memory_4 eq $memory_5);
#line 490
if (c_rt_lib::check_true($memory_5)) {goto label_31;}
#line 490
$memory_5 = "+=";
#line 490
$memory_5 = c_rt_lib::to_nl($memory_4 eq $memory_5);
#line 490
label_31:
#line 490
if (c_rt_lib::check_true($memory_5)) {goto label_30;}
#line 490
$memory_5 = "-=";
#line 490
$memory_5 = c_rt_lib::to_nl($memory_4 eq $memory_5);
#line 490
label_30:
#line 490
if (c_rt_lib::check_true($memory_5)) {goto label_29;}
#line 490
$memory_5 = "*=";
#line 490
$memory_5 = c_rt_lib::to_nl($memory_4 eq $memory_5);
#line 490
label_29:
#line 490
if (c_rt_lib::check_true($memory_5)) {goto label_28;}
#line 490
$memory_5 = "/=";
#line 490
$memory_5 = c_rt_lib::to_nl($memory_4 eq $memory_5);
#line 490
label_28:
#line 490
if (c_rt_lib::check_true($memory_5)) {goto label_27;}
#line 490
$memory_5 = ".=";
#line 490
$memory_5 = c_rt_lib::to_nl($memory_4 eq $memory_5);
#line 490
label_27:
#line 490
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 490
if (c_rt_lib::check_true($memory_5)) {goto label_26;}
#line 491
$memory_6 = $memory_3->{'left'};
#line 491
$memory_6 = c_rt_lib::ov_is($memory_6, 'var');
#line 491
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 491
if (c_rt_lib::check_true($memory_7)) {goto label_34;}
#line 491
$memory_6 = "=";
#line 491
$memory_6 = c_rt_lib::to_nl($memory_4 eq $memory_6);
#line 491
label_34:
#line 491
undef($memory_7);
#line 491
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 491
if (c_rt_lib::check_true($memory_6)) {goto label_33;}
#line 492
$memory_7 = $memory_3->{'left'};
#line 492
$memory_7 = c_rt_lib::ov_as($memory_7, 'var');
#line 492
$memory_8 = c_rt_lib::ov_mk_none('set');
#line 492
module_checker_priv::use_var($memory_7, $memory_8, $memory_1);
#line 492
undef($memory_8);
#line 492
undef($memory_7);
#line 493
goto label_32;
#line 493
label_33:
#line 494
$memory_7 = $memory_3->{'left'};
#line 494
module_checker_priv::check_lvalue($memory_7, $memory_1);
#line 494
undef($memory_7);
#line 495
goto label_32;
#line 495
label_32:
#line 495
undef($memory_6);
#line 496
goto label_25;
#line 496
label_26:
#line 497
$memory_6 = $memory_3->{'left'};
#line 497
module_checker_priv::check_val($memory_6, $memory_1);
#line 497
undef($memory_6);
#line 498
goto label_25;
#line 498
label_25:
#line 498
undef($memory_5);
#line 499
$memory_5 = $memory_3->{'right'};
#line 499
module_checker_priv::check_val($memory_5, $memory_1);
#line 499
undef($memory_5);
#line 499
undef($memory_4);
#line 499
undef($memory_3);
#line 500
goto label_1;
#line 500
label_13:
#line 500
$memory_3 = c_rt_lib::ov_as($memory_0, 'var_op');
#line 501
$memory_4 = $memory_3->{'left'};
#line 501
module_checker_priv::check_val($memory_4, $memory_1);
#line 501
undef($memory_4);
#line 501
undef($memory_3);
#line 502
goto label_1;
#line 502
label_14:
#line 502
$memory_3 = c_rt_lib::ov_as($memory_0, 'unary_op');
#line 503
$memory_4 = $memory_3->{'val'};
#line 503
module_checker_priv::check_val($memory_4, $memory_1);
#line 503
undef($memory_4);
#line 503
undef($memory_3);
#line 504
goto label_1;
#line 504
label_15:
#line 504
$memory_3 = c_rt_lib::ov_as($memory_0, 'fun_label');
#line 505
$memory_4 = $memory_3->{'module'};
#line 505
$memory_5 = $memory_3->{'name'};
#line 505
module_checker_priv::add_fun_used($memory_4, $memory_5, $memory_1);
#line 505
undef($memory_5);
#line 505
undef($memory_4);
#line 505
undef($memory_3);
#line 506
goto label_1;
#line 506
label_16:
#line 506
$memory_3 = c_rt_lib::ov_as($memory_0, 'fun_val');
#line 507
$memory_4 = $memory_3->{'args'};
#line 507
$memory_6 = 0;
#line 507
$memory_7 = 1;
#line 507
$memory_8 = c_rt_lib::array_len($memory_4);
#line 507
label_37:
#line 507
$memory_9 = c_rt_lib::to_nl($memory_6 >= $memory_8);
#line 507
if (c_rt_lib::check_true($memory_9)) {goto label_35;}
#line 507
$memory_5 = $memory_4->[$memory_6];
#line 508
$memory_10 = $memory_5->{'mod'};
#line 508
$memory_11 = c_rt_lib::ov_is($memory_10, 'none');
#line 508
if (c_rt_lib::check_true($memory_11)) {goto label_39;}
#line 510
$memory_11 = c_rt_lib::ov_is($memory_10, 'ref');
#line 510
if (c_rt_lib::check_true($memory_11)) {goto label_40;}
#line 510
$memory_11 = "NOMATCHALERT";
#line 510
$memory_11 = [$memory_11,$memory_10];
#line 510
die(dfile::ssave($memory_11));
#line 508
label_39:
#line 509
$memory_12 = $memory_5->{'val'};
#line 509
module_checker_priv::check_val($memory_12, $memory_1);
#line 509
undef($memory_12);
#line 510
goto label_38;
#line 510
label_40:
#line 511
$memory_12 = $memory_5->{'val'};
#line 511
module_checker_priv::check_lvalue($memory_12, $memory_1);
#line 511
undef($memory_12);
#line 512
goto label_38;
#line 512
label_38:
#line 512
undef($memory_10);
#line 512
undef($memory_11);
#line 513
$memory_6 = $memory_6 + $memory_7;
#line 513
goto label_37;
#line 513
label_35:
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
#line 514
$memory_4 = $memory_3->{'module'};
#line 514
$memory_5 = $memory_3->{'name'};
#line 514
module_checker_priv::add_fun_used($memory_4, $memory_5, $memory_1);
#line 514
undef($memory_5);
#line 514
undef($memory_4);
#line 514
undef($memory_3);
#line 515
goto label_1;
#line 515
label_17:
#line 515
$memory_3 = c_rt_lib::ov_as($memory_0, 'post_inc');
#line 516
module_checker_priv::check_val($memory_3, $memory_1);
#line 516
undef($memory_3);
#line 517
goto label_1;
#line 517
label_18:
#line 517
$memory_3 = c_rt_lib::ov_as($memory_0, 'post_dec');
#line 518
module_checker_priv::check_val($memory_3, $memory_1);
#line 518
undef($memory_3);
#line 519
goto label_1;
#line 519
label_1:
#line 519
undef($memory_2);
#line 519
undef($memory_0);
#line 519
$_[1] = $memory_1;return;
$_[1] = $memory_1;}

sub module_checker_priv::save_block($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);
#line 522
$memory_2 = $memory_0->{'in_loop'};
#line 522
$memory_3 = $memory_0->{'vars'};
#line 522
$memory_1 = {in_loop => $memory_2,vars => $memory_3,};
#line 522
undef($memory_2);
#line 522
undef($memory_3);
#line 522
$_[0] = $memory_0;return $memory_1;
#line 522
undef($memory_1);
#line 522
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub module_checker_priv::load_block($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];
#line 525
$memory_2 = $memory_1->{'in_loop'};
#line 525
$memory_3 = $memory_2;
#line 525
 if (c_rt_lib::get_hashcount($memory_0) > 1) {$memory_0 = {%{$memory_0}};}$memory_0->{'in_loop'} = $memory_3;
#line 525
undef($memory_2);
#line 525
undef($memory_3);
#line 526
$memory_3 = $memory_0->{'vars'};
#line 526
$memory_2 = hash::keys($memory_3);
#line 526
undef($memory_3);
#line 527
$memory_4 = 0;
#line 527
$memory_5 = 1;
#line 527
$memory_6 = c_rt_lib::array_len($memory_2);
#line 527
label_3:
#line 527
$memory_7 = c_rt_lib::to_nl($memory_4 >= $memory_6);
#line 527
if (c_rt_lib::check_true($memory_7)) {goto label_1;}
#line 527
$memory_3 = $memory_2->[$memory_4];
#line 528
$memory_9 = $memory_1->{'vars'};
#line 528
$memory_8 = hash::has_key($memory_9, $memory_3);
#line 528
undef($memory_9);
#line 528
$memory_8 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 528
$memory_8 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 528
if (c_rt_lib::check_true($memory_8)) {goto label_5;}
#line 529
$memory_10 = $memory_0->{'vars'};
#line 529
$memory_9 = hash::get_value($memory_10, $memory_3);
#line 529
undef($memory_10);
#line 530
$memory_10 = "vars";
#line 530
$memory_10 = c_rt_lib::get_ref_hash($memory_0, $memory_10);
#line 530
hash::delete($memory_10, $memory_3);
#line 530
$memory_11 = "vars";
#line 530
c_rt_lib::set_ref_hash($memory_0, $memory_11, $memory_10);
#line 530
undef($memory_11);
#line 530
undef($memory_10);
#line 531
$memory_10 = $memory_9->{'read'};
#line 531
$memory_10 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_10));
#line 531
$memory_11 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_10));
#line 531
if (c_rt_lib::check_true($memory_11)) {goto label_8;}
#line 531
$memory_10 = $memory_9->{'is_required'};
#line 531
$memory_10 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_10));
#line 531
label_8:
#line 531
undef($memory_11);
#line 531
$memory_10 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_10));
#line 531
if (c_rt_lib::check_true($memory_10)) {goto label_7;}
#line 532
$memory_11 = "errors";
#line 532
$memory_11 = c_rt_lib::get_ref_hash($memory_0, $memory_11);
#line 532
$memory_12 = "never read variable: ";
#line 532
$memory_12 = $memory_12 . $memory_3;
#line 532
module_checker_priv::add_warning($memory_11, $memory_12);
#line 532
undef($memory_12);
#line 532
$memory_12 = "errors";
#line 532
c_rt_lib::set_ref_hash($memory_0, $memory_12, $memory_11);
#line 532
undef($memory_12);
#line 532
undef($memory_11);
#line 533
goto label_7;
#line 533
label_7:
#line 533
undef($memory_10);
#line 533
undef($memory_9);
#line 534
goto label_5;
#line 534
label_5:
#line 534
undef($memory_8);
#line 535
$memory_4 = $memory_4 + $memory_5;
#line 535
goto label_3;
#line 535
label_1:
#line 535
undef($memory_3);
#line 535
undef($memory_4);
#line 535
undef($memory_5);
#line 535
undef($memory_6);
#line 535
undef($memory_7);
#line 535
undef($memory_2);
#line 535
undef($memory_1);
#line 535
$_[0] = $memory_0;return;
$_[0] = $memory_0;}
