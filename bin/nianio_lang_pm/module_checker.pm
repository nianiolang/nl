use c_rt_lib;
use array;
use ptd;
use hash;
use nast;
use tc_types;
use tct;
use string;
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
sub module_checker::check_used_functions;
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
#line 17
$memory_1 = ptd::sim();
#line 17
$memory_0 = ptd::arr($memory_1);
#line 17
undef($memory_1);
#line 17
return $memory_0;
#line 17
undef($memory_0);
#line 17
return;
}

my $_stack_t;
sub module_checker::stack_t() {
	$_stack_t = module_checker::__stack_t() unless defined $_stack_t;
	return $_stack_t;
}

sub module_checker::__stack_hash_t() {
my $memory_0;my $memory_1;
#line 21
$memory_1 = ptd::sim();
#line 21
$memory_0 = ptd::hash($memory_1);
#line 21
undef($memory_1);
#line 21
return $memory_0;
#line 21
undef($memory_0);
#line 21
return;
}

my $_stack_hash_t;
sub module_checker::stack_hash_t() {
	$_stack_hash_t = module_checker::__stack_hash_t() unless defined $_stack_hash_t;
	return $_stack_hash_t;
}

sub module_checker::__ret_t() {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;
#line 25
$memory_3 = ptd::sim();
#line 25
$memory_2 = ptd::arr($memory_3);
#line 25
undef($memory_3);
#line 25
$memory_3 = ptd::none();
#line 25
$memory_1 = {loop => $memory_2,ok => $memory_3,};
#line 25
undef($memory_2);
#line 25
undef($memory_3);
#line 25
$memory_0 = ptd::var($memory_1);
#line 25
undef($memory_1);
#line 25
return $memory_0;
#line 25
undef($memory_0);
#line 25
return;
}

my $_ret_t;
sub module_checker::ret_t() {
	$_ret_t = module_checker::__ret_t() unless defined $_ret_t;
	return $_ret_t;
}

sub module_checker::__modules_t() {
my $memory_0;my $memory_1;my $memory_2;
#line 29
$memory_2 = ptd::sim();
#line 29
$memory_1 = ptd::arr($memory_2);
#line 29
undef($memory_2);
#line 29
$memory_0 = ptd::hash($memory_1);
#line 29
undef($memory_1);
#line 29
return $memory_0;
#line 29
undef($memory_0);
#line 29
return;
}

my $_modules_t;
sub module_checker::modules_t() {
	$_modules_t = module_checker::__modules_t() unless defined $_modules_t;
	return $_modules_t;
}

sub module_checker::search_loops($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;$memory_0 = $_[0];
#line 33
$memory_1 = {};
#line 34
$memory_4 = c_rt_lib::init_iter($memory_0);
#line 34
label_2:
#line 34
$memory_2 = c_rt_lib::is_end_hash($memory_4);
#line 34
if (c_rt_lib::check_true($memory_2)) {goto label_51;}
#line 34
$memory_2 = c_rt_lib::get_key_iter($memory_4);
#line 34
$memory_3 = c_rt_lib::hash_get_value($memory_0, $memory_2);
#line 35
$memory_5 = hash::has_key($memory_1, $memory_2);
#line 35
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 35
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 35
if (c_rt_lib::check_true($memory_5)) {goto label_47;}
#line 36
$memory_6 = [];
#line 37
$memory_7 = {};
#line 38
$memory_8 = module_checker_priv::check_module($memory_2, $memory_0, $memory_6, $memory_7, $memory_1);
#line 38
$memory_9 = c_rt_lib::ov_is($memory_8, 'loop');
#line 38
if (c_rt_lib::check_true($memory_9)) {goto label_21;}
#line 40
$memory_9 = c_rt_lib::ov_is($memory_8, 'ok');
#line 40
if (c_rt_lib::check_true($memory_9)) {goto label_39;}
#line 40
$memory_9 = "NOMATCHALERT";
#line 40
$memory_9 = [$memory_9,$memory_8];
#line 40
die(dfile::ssave($memory_9));
#line 38
label_21:
#line 38
$memory_10 = c_rt_lib::ov_as($memory_8, 'loop');
#line 39
$memory_11 = c_rt_lib::ov_mk_arg('loop', $memory_10);
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
undef($memory_5);
#line 39
undef($memory_6);
#line 39
undef($memory_7);
#line 39
undef($memory_8);
#line 39
undef($memory_9);
#line 39
undef($memory_10);
#line 39
return $memory_11;
#line 39
undef($memory_11);
#line 39
undef($memory_10);
#line 40
goto label_41;
#line 40
label_39:
#line 41
goto label_41;
#line 41
label_41:
#line 41
undef($memory_8);
#line 41
undef($memory_9);
#line 41
undef($memory_6);
#line 41
undef($memory_7);
#line 42
goto label_47;
#line 42
label_47:
#line 42
undef($memory_5);
#line 43
$memory_4 = c_rt_lib::next_iter($memory_4);
#line 43
goto label_2;
#line 43
label_51:
#line 43
undef($memory_2);
#line 43
undef($memory_3);
#line 43
undef($memory_4);
#line 44
$memory_2 = c_rt_lib::ov_mk_none('ok');
#line 44
undef($memory_0);
#line 44
undef($memory_1);
#line 44
return $memory_2;
#line 44
undef($memory_2);
#line 44
undef($memory_1);
#line 44
undef($memory_0);
#line 44
return;
}

sub module_checker_priv::check_module($$$$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;my $memory_13;my $memory_14;my $memory_15;$memory_0 = $_[0];$memory_1 = $_[1];$memory_2 = $_[2];Scalar::Util::weaken($_[2]) if ref($_[2]);$memory_3 = $_[3];Scalar::Util::weaken($_[3]) if ref($_[3]);$memory_4 = $_[4];Scalar::Util::weaken($_[4]) if ref($_[4]);
#line 49
$memory_5 = 1;
#line 49
hash::set_value($memory_4, $memory_0, $memory_5);
#line 49
undef($memory_5);
#line 50
$memory_5 = 1;
#line 50
hash::set_value($memory_3, $memory_0, $memory_5);
#line 50
undef($memory_5);
#line 51
array::push($memory_2, $memory_0);
#line 52
$memory_5 = hash::get_value($memory_1, $memory_0);
#line 52
$memory_7 = 0;
#line 52
$memory_8 = 1;
#line 52
$memory_9 = c_rt_lib::array_len($memory_5);
#line 52
label_11:
#line 52
$memory_10 = c_rt_lib::to_nl($memory_7 >= $memory_9);
#line 52
if (c_rt_lib::check_true($memory_10)) {goto label_79;}
#line 52
$memory_6 = $memory_5->[$memory_7];
#line 53
$memory_11 = hash::has_key($memory_3, $memory_6);
#line 53
$memory_11 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_11));
#line 53
if (c_rt_lib::check_true($memory_11)) {goto label_32;}
#line 54
$memory_12 = module_checker_priv::get_loop_from_stack($memory_6, $memory_2);
#line 54
$memory_12 = c_rt_lib::ov_mk_arg('loop', $memory_12);
#line 54
undef($memory_0);
#line 54
undef($memory_1);
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
$_[2] = $memory_2;$_[3] = $memory_3;$_[4] = $memory_4;return $memory_12;
#line 54
undef($memory_12);
#line 55
goto label_75;
#line 55
label_32:
#line 55
$memory_11 = hash::has_key($memory_1, $memory_6);
#line 55
$memory_12 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_11));
#line 55
if (c_rt_lib::check_true($memory_12)) {goto label_38;}
#line 55
$memory_11 = hash::has_key($memory_4, $memory_6);
#line 55
$memory_11 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_11));
#line 55
label_38:
#line 55
undef($memory_12);
#line 55
$memory_11 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_11));
#line 55
if (c_rt_lib::check_true($memory_11)) {goto label_75;}
#line 56
$memory_12 = module_checker_priv::check_module($memory_6, $memory_1, $memory_2, $memory_3, $memory_4);
#line 56
$memory_13 = c_rt_lib::ov_is($memory_12, 'loop');
#line 56
if (c_rt_lib::check_true($memory_13)) {goto label_50;}
#line 58
$memory_13 = c_rt_lib::ov_is($memory_12, 'ok');
#line 58
if (c_rt_lib::check_true($memory_13)) {goto label_69;}
#line 58
$memory_13 = "NOMATCHALERT";
#line 58
$memory_13 = [$memory_13,$memory_12];
#line 58
die(dfile::ssave($memory_13));
#line 56
label_50:
#line 56
$memory_14 = c_rt_lib::ov_as($memory_12, 'loop');
#line 57
$memory_15 = c_rt_lib::ov_mk_arg('loop', $memory_14);
#line 57
undef($memory_0);
#line 57
undef($memory_1);
#line 57
undef($memory_5);
#line 57
undef($memory_6);
#line 57
undef($memory_7);
#line 57
undef($memory_8);
#line 57
undef($memory_9);
#line 57
undef($memory_10);
#line 57
undef($memory_11);
#line 57
undef($memory_12);
#line 57
undef($memory_13);
#line 57
undef($memory_14);
#line 57
$_[2] = $memory_2;$_[3] = $memory_3;$_[4] = $memory_4;return $memory_15;
#line 57
undef($memory_15);
#line 57
undef($memory_14);
#line 58
goto label_71;
#line 58
label_69:
#line 59
goto label_71;
#line 59
label_71:
#line 59
undef($memory_12);
#line 59
undef($memory_13);
#line 60
goto label_75;
#line 60
label_75:
#line 60
undef($memory_11);
#line 61
$memory_7 = $memory_7 + $memory_8;
#line 61
goto label_11;
#line 61
label_79:
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
undef($memory_10);
#line 62
hash::delete($memory_3, $memory_0);
#line 63
$memory_6 = 0;
#line 63
$memory_7 = array::len($memory_2);
#line 63
$memory_8 = 1;
#line 63
$memory_7 = $memory_7 - $memory_8;
#line 63
undef($memory_8);
#line 63
$memory_5 = array::subarray($memory_2, $memory_6, $memory_7);
#line 63
undef($memory_7);
#line 63
undef($memory_6);
#line 63
$memory_2 = $memory_5;
#line 63
undef($memory_5);
#line 64
$memory_5 = c_rt_lib::ov_mk_none('ok');
#line 64
undef($memory_0);
#line 64
undef($memory_1);
#line 64
$_[2] = $memory_2;$_[3] = $memory_3;$_[4] = $memory_4;return $memory_5;
#line 64
undef($memory_5);
#line 64
undef($memory_0);
#line 64
undef($memory_1);
#line 64
$_[2] = $memory_2;$_[3] = $memory_3;$_[4] = $memory_4;return;
$_[2] = $memory_2;$_[3] = $memory_3;$_[4] = $memory_4;}

sub module_checker_priv::get_loop_from_stack($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;$memory_0 = $_[0];$memory_1 = $_[1];
#line 68
$memory_2 = [];
#line 69
$memory_4 = 0;
#line 69
$memory_5 = 1;
#line 69
$memory_6 = c_rt_lib::array_len($memory_1);
#line 69
label_4:
#line 69
$memory_7 = c_rt_lib::to_nl($memory_4 >= $memory_6);
#line 69
if (c_rt_lib::check_true($memory_7)) {goto label_20;}
#line 69
$memory_3 = $memory_1->[$memory_4];
#line 70
$memory_8 = c_rt_lib::to_nl($memory_3 eq $memory_0);
#line 70
$memory_8 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 70
if (c_rt_lib::check_true($memory_8)) {goto label_15;}
#line 70
$memory_9 = [];
#line 70
$memory_2 = $memory_9;
#line 70
undef($memory_9);
#line 70
goto label_15;
#line 70
label_15:
#line 70
undef($memory_8);
#line 71
array::push($memory_2, $memory_3);
#line 72
$memory_4 = $memory_4 + $memory_5;
#line 72
goto label_4;
#line 72
label_20:
#line 72
undef($memory_3);
#line 72
undef($memory_4);
#line 72
undef($memory_5);
#line 72
undef($memory_6);
#line 72
undef($memory_7);
#line 73
array::push($memory_2, $memory_0);
#line 74
undef($memory_0);
#line 74
undef($memory_1);
#line 74
return $memory_2;
#line 74
undef($memory_2);
#line 74
undef($memory_0);
#line 74
undef($memory_1);
#line 74
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
#line 80
$memory_3 = {
	module => "boolean_t",
	name => "type",
};
#line 80
$memory_3 = c_rt_lib::ov_mk_arg('ref', $memory_3);
#line 81
$memory_4 = {
	module => "boolean_t",
	name => "type",
};
#line 81
$memory_4 = c_rt_lib::ov_mk_arg('ref', $memory_4);
#line 81
$memory_1 = {write => $memory_2,read => $memory_3,is_required => $memory_4,};
#line 81
undef($memory_2);
#line 81
undef($memory_3);
#line 81
undef($memory_4);
#line 81
$memory_0 = ptd::rec($memory_1);
#line 81
undef($memory_1);
#line 81
return $memory_0;
#line 81
undef($memory_0);
#line 81
return;
}

my $_var_t;
sub module_checker::var_t() {
	$_var_t = module_checker::__var_t() unless defined $_var_t;
	return $_var_t;
}

sub module_checker::__return_t() {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;
#line 87
$memory_2 = ptd::none();
#line 88
$memory_3 = ptd::none();
#line 89
$memory_4 = ptd::none();
#line 90
$memory_5 = ptd::none();
#line 91
$memory_6 = ptd::none();
#line 91
$memory_1 = {void => $memory_2,none => $memory_3,value => $memory_4,was_void => $memory_5,was_value => $memory_6,};
#line 91
undef($memory_2);
#line 91
undef($memory_3);
#line 91
undef($memory_4);
#line 91
undef($memory_5);
#line 91
undef($memory_6);
#line 91
$memory_0 = ptd::var($memory_1);
#line 91
undef($memory_1);
#line 91
return $memory_0;
#line 91
undef($memory_0);
#line 91
return;
}

my $_return_t;
sub module_checker::return_t() {
	$_return_t = module_checker::__return_t() unless defined $_return_t;
	return $_return_t;
}

sub module_checker::__state_t() {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;
#line 97
$memory_2 = {
	module => "boolean_t",
	name => "type",
};
#line 97
$memory_2 = c_rt_lib::ov_mk_arg('ref', $memory_2);
#line 98
$memory_5 = {
	module => "boolean_t",
	name => "type",
};
#line 98
$memory_5 = c_rt_lib::ov_mk_arg('ref', $memory_5);
#line 98
$memory_6 = {
	module => "module_checker",
	name => "return_t",
};
#line 98
$memory_6 = c_rt_lib::ov_mk_arg('ref', $memory_6);
#line 98
$memory_4 = {was => $memory_5,arg => $memory_6,};
#line 98
undef($memory_5);
#line 98
undef($memory_6);
#line 98
$memory_3 = ptd::rec($memory_4);
#line 98
undef($memory_4);
#line 99
$memory_5 = {
	module => "module_checker",
	name => "var_t",
};
#line 99
$memory_5 = c_rt_lib::ov_mk_arg('ref', $memory_5);
#line 99
$memory_4 = ptd::hash($memory_5);
#line 99
undef($memory_5);
#line 100
$memory_5 = {
	module => "tc_types",
	name => "errors_t",
};
#line 100
$memory_5 = c_rt_lib::ov_mk_arg('ref', $memory_5);
#line 101
$memory_9 = ptd::sim();
#line 101
$memory_8 = ptd::hash($memory_9);
#line 101
undef($memory_9);
#line 101
$memory_10 = ptd::sim();
#line 101
$memory_9 = ptd::hash($memory_10);
#line 101
undef($memory_10);
#line 101
$memory_7 = {func => $memory_8,module => $memory_9,};
#line 101
undef($memory_8);
#line 101
undef($memory_9);
#line 101
$memory_6 = ptd::rec($memory_7);
#line 101
undef($memory_7);
#line 102
$memory_7 = ptd::sim();
#line 102
$memory_1 = {in_loop => $memory_2,return => $memory_3,vars => $memory_4,errors => $memory_5,called => $memory_6,current_module => $memory_7,};
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

my $_state_t;
sub module_checker::state_t() {
	$_state_t = module_checker::__state_t() unless defined $_state_t;
	return $_state_t;
}

sub module_checker::__save_t() {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;
#line 107
$memory_2 = {
	module => "boolean_t",
	name => "type",
};
#line 107
$memory_2 = c_rt_lib::ov_mk_arg('ref', $memory_2);
#line 107
$memory_4 = {
	module => "module_checker",
	name => "var_t",
};
#line 107
$memory_4 = c_rt_lib::ov_mk_arg('ref', $memory_4);
#line 107
$memory_3 = ptd::hash($memory_4);
#line 107
undef($memory_4);
#line 107
$memory_1 = {in_loop => $memory_2,vars => $memory_3,};
#line 107
undef($memory_2);
#line 107
undef($memory_3);
#line 107
$memory_0 = ptd::rec($memory_1);
#line 107
undef($memory_1);
#line 107
return $memory_0;
#line 107
undef($memory_0);
#line 107
return;
}

my $_save_t;
sub module_checker::save_t() {
	$_save_t = module_checker::__save_t() unless defined $_save_t;
	return $_save_t;
}

sub module_checker_priv::add_error($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];
#line 111
$memory_2 = "errors";
#line 111
$memory_2 = c_rt_lib::get_ref_hash($memory_0, $memory_2);
#line 112
$memory_4 = $memory_0->{'current_line'};
#line 112
$memory_5 = $memory_0->{'module'};
#line 112
$memory_6 = c_rt_lib::ov_mk_none('error');
#line 112
$memory_7 = 1;
#line 112
$memory_7 = -$memory_7;
#line 112
$memory_3 = {message => $memory_1,line => $memory_4,module => $memory_5,type => $memory_6,column => $memory_7,};
#line 112
undef($memory_4);
#line 112
undef($memory_5);
#line 112
undef($memory_6);
#line 112
undef($memory_7);
#line 112
array::push($memory_2, $memory_3);
#line 112
undef($memory_3);
#line 112
$memory_3 = "errors";
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

sub module_checker_priv::add_warning($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];
#line 116
$memory_2 = "warnings";
#line 116
$memory_2 = c_rt_lib::get_ref_hash($memory_0, $memory_2);
#line 117
$memory_4 = $memory_0->{'current_line'};
#line 117
$memory_5 = $memory_0->{'module'};
#line 117
$memory_6 = c_rt_lib::ov_mk_none('warning');
#line 117
$memory_7 = 1;
#line 117
$memory_7 = -$memory_7;
#line 117
$memory_3 = {message => $memory_1,line => $memory_4,module => $memory_5,type => $memory_6,column => $memory_7,};
#line 117
undef($memory_4);
#line 117
undef($memory_5);
#line 117
undef($memory_6);
#line 117
undef($memory_7);
#line 117
array::push($memory_2, $memory_3);
#line 117
undef($memory_3);
#line 117
$memory_3 = "warnings";
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

sub module_checker_priv::set_used_function($$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;$memory_0 = $_[0];$memory_1 = $_[1];$memory_2 = $_[2];Scalar::Util::weaken($_[2]) if ref($_[2]);
#line 121
$memory_3 = 0;
#line 121
hash::set_value($memory_2, $memory_0, $memory_3);
#line 121
undef($memory_3);
#line 122
$memory_3 = hash::get_value($memory_1, $memory_0);
#line 122
$memory_6 = c_rt_lib::init_iter($memory_3);
#line 122
label_5:
#line 122
$memory_4 = c_rt_lib::is_end_hash($memory_6);
#line 122
if (c_rt_lib::check_true($memory_4)) {goto label_31;}
#line 122
$memory_4 = c_rt_lib::get_key_iter($memory_6);
#line 122
$memory_5 = c_rt_lib::hash_get_value($memory_3, $memory_4);
#line 123
$memory_7 = hash::has_key($memory_1, $memory_4);
#line 123
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 123
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 123
if (c_rt_lib::check_true($memory_7)) {goto label_17;}
#line 123
undef($memory_7);
#line 123
goto label_28;
#line 123
goto label_17;
#line 123
label_17:
#line 123
undef($memory_7);
#line 124
$memory_7 = hash::has_key($memory_2, $memory_4);
#line 124
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 124
if (c_rt_lib::check_true($memory_7)) {goto label_25;}
#line 124
undef($memory_7);
#line 124
goto label_28;
#line 124
goto label_25;
#line 124
label_25:
#line 124
undef($memory_7);
#line 125
module_checker_priv::set_used_function($memory_4, $memory_1, $memory_2);
#line 125
label_28:
#line 126
$memory_6 = c_rt_lib::next_iter($memory_6);
#line 126
goto label_5;
#line 126
label_31:
#line 126
undef($memory_3);
#line 126
undef($memory_4);
#line 126
undef($memory_5);
#line 126
undef($memory_6);
#line 126
undef($memory_0);
#line 126
undef($memory_1);
#line 126
$_[2] = $memory_2;return;
$_[2] = $memory_2;}

sub module_checker::check_module($$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;my $memory_13;my $memory_14;my $memory_15;my $memory_16;my $memory_17;my $memory_18;my $memory_19;my $memory_20;my $memory_21;my $memory_22;my $memory_23;$memory_0 = $_[0];$memory_1 = $_[1];$memory_2 = $_[2];Scalar::Util::weaken($_[2]) if ref($_[2]);
#line 130
$memory_4 = [];
#line 130
$memory_5 = [];
#line 130
$memory_6 = 1;
#line 130
$memory_6 = -$memory_6;
#line 130
$memory_7 = $memory_0->{'name'};
#line 130
$memory_3 = {errors => $memory_4,warnings => $memory_5,current_line => $memory_6,module => $memory_7,};
#line 130
undef($memory_4);
#line 130
undef($memory_5);
#line 130
undef($memory_6);
#line 130
undef($memory_7);
#line 131
$memory_5 = {};
#line 131
$memory_6 = {};
#line 131
$memory_4 = {func => $memory_5,module => $memory_6,};
#line 131
undef($memory_5);
#line 131
undef($memory_6);
#line 133
$memory_7 = c_rt_lib::to_nl(0);
#line 133
$memory_8 = c_rt_lib::ov_mk_none('none');
#line 133
$memory_6 = {was => $memory_7,arg => $memory_8,};
#line 133
undef($memory_7);
#line 133
undef($memory_8);
#line 134
$memory_7 = $memory_0->{'name'};
#line 135
$memory_8 = c_rt_lib::to_nl(0);
#line 137
$memory_9 = {};
#line 137
$memory_5 = {return => $memory_6,current_module => $memory_7,in_loop => $memory_8,called => $memory_4,vars => $memory_9,errors => $memory_3,};
#line 137
undef($memory_6);
#line 137
undef($memory_7);
#line 137
undef($memory_8);
#line 137
undef($memory_9);
#line 140
$memory_6 = {};
#line 141
$memory_7 = {};
#line 142
$memory_8 = $memory_0->{'fun_def'};
#line 142
$memory_10 = 0;
#line 142
$memory_11 = 1;
#line 142
$memory_12 = c_rt_lib::array_len($memory_8);
#line 142
label_34:
#line 142
$memory_13 = c_rt_lib::to_nl($memory_10 >= $memory_12);
#line 142
if (c_rt_lib::check_true($memory_13)) {goto label_209;}
#line 142
$memory_9 = $memory_8->[$memory_10];
#line 143
$memory_14 = $memory_9->{'line'};
#line 143
$memory_15 = "errors";
#line 143
$memory_15 = c_rt_lib::get_ref_hash($memory_5, $memory_15);
#line 143
$memory_16 = $memory_14;
#line 143
 if (c_rt_lib::get_hashcount($memory_15) > 1) {$memory_15 = {%{$memory_15}};}$memory_15->{'current_line'} = $memory_16;
#line 143
$memory_17 = "errors";
#line 143
c_rt_lib::set_ref_hash($memory_5, $memory_17, $memory_15);
#line 143
undef($memory_17);
#line 143
undef($memory_14);
#line 143
undef($memory_15);
#line 143
undef($memory_16);
#line 144
$memory_14 = {};
#line 144
$memory_15 = $memory_14;
#line 144
 if (c_rt_lib::get_hashcount($memory_5) > 1) {$memory_5 = {%{$memory_5}};}$memory_5->{'vars'} = $memory_15;
#line 144
undef($memory_14);
#line 144
undef($memory_15);
#line 145
$memory_15 = c_rt_lib::to_nl(0);
#line 145
$memory_17 = $memory_9->{'ret_type'};
#line 145
$memory_16 = module_checker_priv::check_return_type($memory_17, $memory_5);
#line 145
undef($memory_17);
#line 145
$memory_14 = {was => $memory_15,arg => $memory_16,};
#line 145
undef($memory_15);
#line 145
undef($memory_16);
#line 145
$memory_15 = $memory_14;
#line 145
 if (c_rt_lib::get_hashcount($memory_5) > 1) {$memory_5 = {%{$memory_5}};}$memory_5->{'return'} = $memory_15;
#line 145
undef($memory_14);
#line 145
undef($memory_15);
#line 146
$memory_14 = module_checker_priv::save_block($memory_5);
#line 147
$memory_15 = $memory_9->{'args'};
#line 147
$memory_17 = 0;
#line 147
$memory_18 = 1;
#line 147
$memory_19 = c_rt_lib::array_len($memory_15);
#line 147
label_70:
#line 147
$memory_20 = c_rt_lib::to_nl($memory_17 >= $memory_19);
#line 147
if (c_rt_lib::check_true($memory_20)) {goto label_91;}
#line 147
$memory_16 = $memory_15->[$memory_17];
#line 148
$memory_21 = $memory_16->{'name'};
#line 148
$memory_22 = c_rt_lib::to_nl(0);
#line 148
$memory_23 = c_rt_lib::to_nl(0);
#line 148
module_checker_priv::add_var($memory_21, $memory_22, $memory_23, $memory_5);
#line 148
undef($memory_23);
#line 148
undef($memory_22);
#line 148
undef($memory_21);
#line 149
$memory_21 = $memory_16->{'type'};
#line 149
module_checker_priv::check_type($memory_21, $memory_5);
#line 149
undef($memory_21);
#line 150
$memory_21 = $memory_16->{'name'};
#line 150
$memory_22 = c_rt_lib::ov_mk_none('set');
#line 150
module_checker_priv::use_var($memory_21, $memory_22, $memory_5);
#line 150
undef($memory_22);
#line 150
undef($memory_21);
#line 151
$memory_17 = $memory_17 + $memory_18;
#line 151
goto label_70;
#line 151
label_91:
#line 151
undef($memory_15);
#line 151
undef($memory_16);
#line 151
undef($memory_17);
#line 151
undef($memory_18);
#line 151
undef($memory_19);
#line 151
undef($memory_20);
#line 152
$memory_15 = $memory_9->{'cmd'};
#line 152
module_checker_priv::check_cmd($memory_15, $memory_5);
#line 152
undef($memory_15);
#line 153
$memory_15 = $memory_9->{'args'};
#line 153
$memory_17 = 0;
#line 153
$memory_18 = 1;
#line 153
$memory_19 = c_rt_lib::array_len($memory_15);
#line 153
label_105:
#line 153
$memory_20 = c_rt_lib::to_nl($memory_17 >= $memory_19);
#line 153
if (c_rt_lib::check_true($memory_20)) {goto label_123;}
#line 153
$memory_16 = $memory_15->[$memory_17];
#line 154
$memory_21 = $memory_16->{'mod'};
#line 154
$memory_21 = c_rt_lib::ov_is($memory_21, 'ref');
#line 154
$memory_21 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_21));
#line 154
if (c_rt_lib::check_true($memory_21)) {goto label_119;}
#line 155
$memory_22 = $memory_16->{'name'};
#line 155
$memory_23 = c_rt_lib::ov_mk_none('get');
#line 155
module_checker_priv::use_var($memory_22, $memory_23, $memory_5);
#line 155
undef($memory_23);
#line 155
undef($memory_22);
#line 156
goto label_119;
#line 156
label_119:
#line 156
undef($memory_21);
#line 157
$memory_17 = $memory_17 + $memory_18;
#line 157
goto label_105;
#line 157
label_123:
#line 157
undef($memory_15);
#line 157
undef($memory_16);
#line 157
undef($memory_17);
#line 157
undef($memory_18);
#line 157
undef($memory_19);
#line 157
undef($memory_20);
#line 158
module_checker_priv::load_block($memory_5, $memory_14);
#line 159
$memory_15 = $memory_5->{'return'};
#line 159
$memory_15 = $memory_15->{'was'};
#line 159
$memory_15 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_15));
#line 159
$memory_15 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_15));
#line 159
if (c_rt_lib::check_true($memory_15)) {goto label_159;}
#line 161
$memory_16 = $memory_5->{'return'};
#line 161
$memory_16 = $memory_16->{'arg'};
#line 161
$memory_16 = c_rt_lib::ov_is($memory_16, 'value');
#line 161
if (c_rt_lib::check_true($memory_16)) {goto label_143;}
#line 161
$memory_16 = $memory_5->{'return'};
#line 161
$memory_16 = $memory_16->{'arg'};
#line 161
$memory_16 = c_rt_lib::ov_is($memory_16, 'was_value');
#line 161
label_143:
#line 161
$memory_16 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_16));
#line 161
if (c_rt_lib::check_true($memory_16)) {goto label_156;}
#line 160
$memory_17 = "errors";
#line 160
$memory_17 = c_rt_lib::get_ref_hash($memory_5, $memory_17);
#line 160
$memory_18 = "no return value at end of function";
#line 160
module_checker_priv::add_error($memory_17, $memory_18);
#line 160
undef($memory_18);
#line 160
$memory_18 = "errors";
#line 160
c_rt_lib::set_ref_hash($memory_5, $memory_18, $memory_17);
#line 160
undef($memory_18);
#line 160
undef($memory_17);
#line 160
goto label_156;
#line 160
label_156:
#line 160
undef($memory_16);
#line 162
goto label_159;
#line 162
label_159:
#line 162
undef($memory_15);
#line 163
$memory_16 = $memory_9->{'access'};
#line 163
$memory_16 = c_rt_lib::ov_is($memory_16, 'pub');
#line 163
if (c_rt_lib::check_true($memory_16)) {goto label_166;}
#line 163
$memory_16 = "";
#line 163
goto label_168;
#line 163
label_166:
#line 163
$memory_16 = $memory_0->{'name'};
#line 163
label_168:
#line 163
$memory_17 = $memory_9->{'name'};
#line 163
$memory_18 = $memory_0->{'name'};
#line 163
$memory_15 = module_checker_priv::get_fun_key($memory_16, $memory_17, $memory_18);
#line 163
undef($memory_18);
#line 163
undef($memory_17);
#line 163
undef($memory_16);
#line 164
$memory_16 = $memory_5->{'called'};
#line 164
$memory_16 = $memory_16->{'func'};
#line 164
hash::set_value($memory_6, $memory_15, $memory_16);
#line 164
undef($memory_16);
#line 165
$memory_16 = $memory_5->{'called'};
#line 165
$memory_16 = $memory_16->{'func'};
#line 165
hash::set_value($memory_2, $memory_15, $memory_16);
#line 165
undef($memory_16);
#line 166
$memory_16 = $memory_9->{'access'};
#line 166
$memory_16 = c_rt_lib::ov_is($memory_16, 'priv');
#line 166
$memory_16 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_16));
#line 166
$memory_16 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_16));
#line 166
if (c_rt_lib::check_true($memory_16)) {goto label_192;}
#line 166
$memory_17 = 0;
#line 166
hash::set_value($memory_7, $memory_15, $memory_17);
#line 166
undef($memory_17);
#line 166
goto label_192;
#line 166
label_192:
#line 166
undef($memory_16);
#line 167
$memory_16 = {};
#line 167
$memory_17 = "called";
#line 167
$memory_17 = c_rt_lib::get_ref_hash($memory_5, $memory_17);
#line 167
$memory_18 = $memory_16;
#line 167
 if (c_rt_lib::get_hashcount($memory_17) > 1) {$memory_17 = {%{$memory_17}};}$memory_17->{'func'} = $memory_18;
#line 167
$memory_19 = "called";
#line 167
c_rt_lib::set_ref_hash($memory_5, $memory_19, $memory_17);
#line 167
undef($memory_19);
#line 167
undef($memory_16);
#line 167
undef($memory_17);
#line 167
undef($memory_18);
#line 167
undef($memory_14);
#line 167
undef($memory_15);
#line 168
$memory_10 = $memory_10 + $memory_11;
#line 168
goto label_34;
#line 168
label_209:
#line 168
undef($memory_8);
#line 168
undef($memory_9);
#line 168
undef($memory_10);
#line 168
undef($memory_11);
#line 168
undef($memory_12);
#line 168
undef($memory_13);
#line 169
$memory_8 = {};
#line 170
$memory_9 = $memory_0->{'import'};
#line 170
$memory_11 = 0;
#line 170
$memory_12 = 1;
#line 170
$memory_13 = c_rt_lib::array_len($memory_9);
#line 170
label_221:
#line 170
$memory_14 = c_rt_lib::to_nl($memory_11 >= $memory_13);
#line 170
if (c_rt_lib::check_true($memory_14)) {goto label_287;}
#line 170
$memory_10 = $memory_9->[$memory_11];
#line 171
$memory_15 = $memory_10->{'line'};
#line 171
$memory_16 = "errors";
#line 171
$memory_16 = c_rt_lib::get_ref_hash($memory_5, $memory_16);
#line 171
$memory_17 = $memory_15;
#line 171
 if (c_rt_lib::get_hashcount($memory_16) > 1) {$memory_16 = {%{$memory_16}};}$memory_16->{'current_line'} = $memory_17;
#line 171
$memory_18 = "errors";
#line 171
c_rt_lib::set_ref_hash($memory_5, $memory_18, $memory_16);
#line 171
undef($memory_18);
#line 171
undef($memory_15);
#line 171
undef($memory_16);
#line 171
undef($memory_17);
#line 172
$memory_16 = $memory_10->{'name'};
#line 172
$memory_15 = hash::has_key($memory_8, $memory_16);
#line 172
undef($memory_16);
#line 172
$memory_15 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_15));
#line 172
if (c_rt_lib::check_true($memory_15)) {goto label_254;}
#line 172
$memory_16 = "errors";
#line 172
$memory_16 = c_rt_lib::get_ref_hash($memory_5, $memory_16);
#line 172
$memory_17 = "multiple use module:";
#line 172
$memory_18 = $memory_10->{'name'};
#line 172
$memory_17 = $memory_17 . $memory_18;
#line 172
undef($memory_18);
#line 172
module_checker_priv::add_warning($memory_16, $memory_17);
#line 172
undef($memory_17);
#line 172
$memory_17 = "errors";
#line 172
c_rt_lib::set_ref_hash($memory_5, $memory_17, $memory_16);
#line 172
undef($memory_17);
#line 172
undef($memory_16);
#line 172
goto label_254;
#line 172
label_254:
#line 172
undef($memory_15);
#line 174
$memory_16 = $memory_5->{'called'};
#line 174
$memory_16 = $memory_16->{'module'};
#line 174
$memory_17 = $memory_10->{'name'};
#line 174
$memory_15 = hash::has_key($memory_16, $memory_17);
#line 174
undef($memory_17);
#line 174
undef($memory_16);
#line 174
$memory_15 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_15));
#line 174
$memory_15 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_15));
#line 174
if (c_rt_lib::check_true($memory_15)) {goto label_278;}
#line 173
$memory_16 = "errors";
#line 173
$memory_16 = c_rt_lib::get_ref_hash($memory_5, $memory_16);
#line 173
$memory_17 = "unused module:";
#line 173
$memory_18 = $memory_10->{'name'};
#line 173
$memory_17 = $memory_17 . $memory_18;
#line 173
undef($memory_18);
#line 173
module_checker_priv::add_warning($memory_16, $memory_17);
#line 173
undef($memory_17);
#line 173
$memory_17 = "errors";
#line 173
c_rt_lib::set_ref_hash($memory_5, $memory_17, $memory_16);
#line 173
undef($memory_17);
#line 173
undef($memory_16);
#line 173
goto label_278;
#line 173
label_278:
#line 173
undef($memory_15);
#line 175
$memory_15 = $memory_10->{'name'};
#line 175
$memory_16 = c_rt_lib::to_nl(1);
#line 175
hash::set_value($memory_8, $memory_15, $memory_16);
#line 175
undef($memory_16);
#line 175
undef($memory_15);
#line 176
$memory_11 = $memory_11 + $memory_12;
#line 176
goto label_221;
#line 176
label_287:
#line 176
undef($memory_9);
#line 176
undef($memory_10);
#line 176
undef($memory_11);
#line 176
undef($memory_12);
#line 176
undef($memory_13);
#line 176
undef($memory_14);
#line 177
$memory_9 = $memory_5->{'called'};
#line 177
$memory_9 = $memory_9->{'module'};
#line 177
$memory_12 = c_rt_lib::init_iter($memory_9);
#line 177
label_297:
#line 177
$memory_10 = c_rt_lib::is_end_hash($memory_12);
#line 177
if (c_rt_lib::check_true($memory_10)) {goto label_343;}
#line 177
$memory_10 = c_rt_lib::get_key_iter($memory_12);
#line 177
$memory_11 = c_rt_lib::hash_get_value($memory_9, $memory_10);
#line 178
$memory_13 = "errors";
#line 178
$memory_13 = c_rt_lib::get_ref_hash($memory_5, $memory_13);
#line 178
$memory_14 = $memory_11;
#line 178
 if (c_rt_lib::get_hashcount($memory_13) > 1) {$memory_13 = {%{$memory_13}};}$memory_13->{'current_line'} = $memory_14;
#line 178
$memory_15 = "errors";
#line 178
c_rt_lib::set_ref_hash($memory_5, $memory_15, $memory_13);
#line 178
undef($memory_15);
#line 178
undef($memory_13);
#line 178
undef($memory_14);
#line 179
$memory_13 = $memory_0->{'name'};
#line 179
$memory_13 = c_rt_lib::to_nl($memory_13 eq $memory_10);
#line 179
$memory_13 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_13));
#line 179
if (c_rt_lib::check_true($memory_13)) {goto label_318;}
#line 179
undef($memory_13);
#line 179
goto label_340;
#line 179
goto label_318;
#line 179
label_318:
#line 179
undef($memory_13);
#line 180
$memory_13 = hash::has_key($memory_8, $memory_10);
#line 180
$memory_13 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_13));
#line 180
$memory_13 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_13));
#line 180
if (c_rt_lib::check_true($memory_13)) {goto label_338;}
#line 180
$memory_14 = "errors";
#line 180
$memory_14 = c_rt_lib::get_ref_hash($memory_5, $memory_14);
#line 180
$memory_15 = "module '";
#line 180
$memory_15 = $memory_15 . $memory_10;
#line 180
$memory_16 = "' not imported";
#line 180
$memory_15 = $memory_15 . $memory_16;
#line 180
undef($memory_16);
#line 180
module_checker_priv::add_error($memory_14, $memory_15);
#line 180
undef($memory_15);
#line 180
$memory_15 = "errors";
#line 180
c_rt_lib::set_ref_hash($memory_5, $memory_15, $memory_14);
#line 180
undef($memory_15);
#line 180
undef($memory_14);
#line 180
goto label_338;
#line 180
label_338:
#line 180
undef($memory_13);
#line 180
label_340:
#line 181
$memory_12 = c_rt_lib::next_iter($memory_12);
#line 181
goto label_297;
#line 181
label_343:
#line 181
undef($memory_9);
#line 181
undef($memory_10);
#line 181
undef($memory_11);
#line 181
undef($memory_12);
#line 182
$memory_9 = $memory_1;
#line 182
$memory_9 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_9));
#line 182
$memory_9 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_9));
#line 182
if (c_rt_lib::check_true($memory_9)) {goto label_447;}
#line 183
$memory_10 = $memory_7;
#line 184
$memory_13 = c_rt_lib::init_iter($memory_10);
#line 184
label_354:
#line 184
$memory_11 = c_rt_lib::is_end_hash($memory_13);
#line 184
if (c_rt_lib::check_true($memory_11)) {goto label_362;}
#line 184
$memory_11 = c_rt_lib::get_key_iter($memory_13);
#line 184
$memory_12 = c_rt_lib::hash_get_value($memory_10, $memory_11);
#line 185
module_checker_priv::set_used_function($memory_11, $memory_6, $memory_7);
#line 186
$memory_13 = c_rt_lib::next_iter($memory_13);
#line 186
goto label_354;
#line 186
label_362:
#line 186
undef($memory_11);
#line 186
undef($memory_12);
#line 186
undef($memory_13);
#line 187
$memory_11 = $memory_0->{'fun_def'};
#line 187
$memory_13 = 0;
#line 187
$memory_14 = 1;
#line 187
$memory_15 = c_rt_lib::array_len($memory_11);
#line 187
label_370:
#line 187
$memory_16 = c_rt_lib::to_nl($memory_13 >= $memory_15);
#line 187
if (c_rt_lib::check_true($memory_16)) {goto label_438;}
#line 187
$memory_12 = $memory_11->[$memory_13];
#line 188
$memory_17 = $memory_12->{'access'};
#line 188
$memory_17 = c_rt_lib::ov_is($memory_17, 'pub');
#line 188
$memory_17 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_17));
#line 188
if (c_rt_lib::check_true($memory_17)) {goto label_381;}
#line 188
undef($memory_17);
#line 188
goto label_435;
#line 188
goto label_381;
#line 188
label_381:
#line 188
undef($memory_17);
#line 189
$memory_19 = $memory_12->{'access'};
#line 189
$memory_19 = c_rt_lib::ov_is($memory_19, 'pub');
#line 189
if (c_rt_lib::check_true($memory_19)) {goto label_388;}
#line 189
$memory_19 = "";
#line 189
goto label_390;
#line 189
label_388:
#line 189
$memory_19 = $memory_0->{'name'};
#line 189
label_390:
#line 189
$memory_20 = $memory_12->{'name'};
#line 189
$memory_21 = $memory_0->{'name'};
#line 189
$memory_18 = module_checker_priv::get_fun_key($memory_19, $memory_20, $memory_21);
#line 189
undef($memory_21);
#line 189
undef($memory_20);
#line 189
undef($memory_19);
#line 189
$memory_17 = hash::has_key($memory_7, $memory_18);
#line 189
undef($memory_18);
#line 189
$memory_17 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_17));
#line 189
if (c_rt_lib::check_true($memory_17)) {goto label_404;}
#line 189
undef($memory_17);
#line 189
goto label_435;
#line 189
goto label_404;
#line 189
label_404:
#line 189
undef($memory_17);
#line 190
$memory_17 = $memory_12->{'line'};
#line 190
$memory_18 = "errors";
#line 190
$memory_18 = c_rt_lib::get_ref_hash($memory_5, $memory_18);
#line 190
$memory_19 = $memory_17;
#line 190
 if (c_rt_lib::get_hashcount($memory_18) > 1) {$memory_18 = {%{$memory_18}};}$memory_18->{'current_line'} = $memory_19;
#line 190
$memory_20 = "errors";
#line 190
c_rt_lib::set_ref_hash($memory_5, $memory_20, $memory_18);
#line 190
undef($memory_20);
#line 190
undef($memory_17);
#line 190
undef($memory_18);
#line 190
undef($memory_19);
#line 191
$memory_17 = "errors";
#line 191
$memory_17 = c_rt_lib::get_ref_hash($memory_5, $memory_17);
#line 191
$memory_18 = "unused function: ";
#line 191
$memory_19 = $memory_0->{'name'};
#line 191
$memory_18 = $memory_18 . $memory_19;
#line 191
undef($memory_19);
#line 191
$memory_19 = "_priv::";
#line 191
$memory_18 = $memory_18 . $memory_19;
#line 191
undef($memory_19);
#line 191
$memory_19 = $memory_12->{'name'};
#line 191
$memory_18 = $memory_18 . $memory_19;
#line 191
undef($memory_19);
#line 191
module_checker_priv::add_warning($memory_17, $memory_18);
#line 191
undef($memory_18);
#line 191
$memory_18 = "errors";
#line 191
c_rt_lib::set_ref_hash($memory_5, $memory_18, $memory_17);
#line 191
undef($memory_18);
#line 191
undef($memory_17);
#line 191
label_435:
#line 192
$memory_13 = $memory_13 + $memory_14;
#line 192
goto label_370;
#line 192
label_438:
#line 192
undef($memory_11);
#line 192
undef($memory_12);
#line 192
undef($memory_13);
#line 192
undef($memory_14);
#line 192
undef($memory_15);
#line 192
undef($memory_16);
#line 192
undef($memory_10);
#line 193
goto label_447;
#line 193
label_447:
#line 193
undef($memory_9);
#line 194
$memory_9 = $memory_5->{'errors'};
#line 194
undef($memory_0);
#line 194
undef($memory_1);
#line 194
undef($memory_3);
#line 194
undef($memory_4);
#line 194
undef($memory_5);
#line 194
undef($memory_6);
#line 194
undef($memory_7);
#line 194
undef($memory_8);
#line 194
$_[2] = $memory_2;return $memory_9;
#line 194
undef($memory_9);
#line 194
undef($memory_3);
#line 194
undef($memory_4);
#line 194
undef($memory_5);
#line 194
undef($memory_6);
#line 194
undef($memory_7);
#line 194
undef($memory_8);
#line 194
undef($memory_0);
#line 194
undef($memory_1);
#line 194
$_[2] = $memory_2;return;
$_[2] = $memory_2;}

sub module_checker::check_used_functions($$$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;my $memory_13;my $memory_14;my $memory_15;my $memory_16;my $memory_17;my $memory_18;my $memory_19;my $memory_20;my $memory_21;my $memory_22;my $memory_23;$memory_0 = $_[0];$memory_1 = $_[1];$memory_2 = $_[2];$memory_3 = $_[3];Scalar::Util::weaken($_[3]) if ref($_[3]);
#line 198
$memory_4 = $memory_0;
#line 199
$memory_7 = c_rt_lib::init_iter($memory_4);
#line 199
label_2:
#line 199
$memory_5 = c_rt_lib::is_end_hash($memory_7);
#line 199
if (c_rt_lib::check_true($memory_5)) {goto label_39;}
#line 199
$memory_5 = c_rt_lib::get_key_iter($memory_7);
#line 199
$memory_6 = c_rt_lib::hash_get_value($memory_4, $memory_5);
#line 200
$memory_8 = hash::has_key($memory_1, $memory_5);
#line 200
$memory_8 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 200
$memory_8 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 200
if (c_rt_lib::check_true($memory_8)) {goto label_33;}
#line 201
$memory_9 = "warnings";
#line 201
$memory_9 = c_rt_lib::get_ref_hash($memory_3, $memory_9);
#line 201
$memory_11 = "public_functions dictionary key does not exist";
#line 201
$memory_12 = 0;
#line 201
$memory_13 = 0;
#line 201
$memory_14 = "public_functions.df";
#line 201
$memory_15 = c_rt_lib::ov_mk_none('warning');
#line 201
$memory_10 = {message => $memory_11,line => $memory_12,column => $memory_13,module => $memory_14,type => $memory_15,};
#line 201
undef($memory_11);
#line 201
undef($memory_12);
#line 201
undef($memory_13);
#line 201
undef($memory_14);
#line 201
undef($memory_15);
#line 201
array::push($memory_9, $memory_10);
#line 201
undef($memory_10);
#line 201
$memory_10 = "warnings";
#line 201
c_rt_lib::set_ref_hash($memory_3, $memory_10, $memory_9);
#line 201
undef($memory_10);
#line 201
undef($memory_9);
#line 202
undef($memory_8);
#line 202
goto label_36;
#line 203
goto label_33;
#line 203
label_33:
#line 203
undef($memory_8);
#line 204
module_checker_priv::set_used_function($memory_5, $memory_1, $memory_0);
#line 204
label_36:
#line 205
$memory_7 = c_rt_lib::next_iter($memory_7);
#line 205
goto label_2;
#line 205
label_39:
#line 205
undef($memory_5);
#line 205
undef($memory_6);
#line 205
undef($memory_7);
#line 206
$memory_6 = 0;
#line 206
$memory_7 = 1;
#line 206
$memory_8 = c_rt_lib::array_len($memory_2);
#line 206
label_46:
#line 206
$memory_9 = c_rt_lib::to_nl($memory_6 >= $memory_8);
#line 206
if (c_rt_lib::check_true($memory_9)) {goto label_114;}
#line 206
$memory_5 = $memory_2->[$memory_6];
#line 207
$memory_10 = $memory_5->{'fun_def'};
#line 207
$memory_12 = 0;
#line 207
$memory_13 = 1;
#line 207
$memory_14 = c_rt_lib::array_len($memory_10);
#line 207
label_54:
#line 207
$memory_15 = c_rt_lib::to_nl($memory_12 >= $memory_14);
#line 207
if (c_rt_lib::check_true($memory_15)) {goto label_105;}
#line 207
$memory_11 = $memory_10->[$memory_12];
#line 208
$memory_17 = $memory_11->{'access'};
#line 208
$memory_17 = c_rt_lib::ov_is($memory_17, 'pub');
#line 208
if (c_rt_lib::check_true($memory_17)) {goto label_63;}
#line 208
$memory_17 = "";
#line 208
goto label_65;
#line 208
label_63:
#line 208
$memory_17 = $memory_5->{'name'};
#line 208
label_65:
#line 208
$memory_18 = $memory_11->{'name'};
#line 208
$memory_19 = $memory_5->{'name'};
#line 208
$memory_16 = module_checker_priv::get_fun_key($memory_17, $memory_18, $memory_19);
#line 208
undef($memory_19);
#line 208
undef($memory_18);
#line 208
undef($memory_17);
#line 209
$memory_17 = hash::has_key($memory_0, $memory_16);
#line 209
$memory_17 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_17));
#line 209
if (c_rt_lib::check_true($memory_17)) {goto label_79;}
#line 209
undef($memory_16);
#line 209
undef($memory_17);
#line 209
goto label_102;
#line 209
goto label_79;
#line 209
label_79:
#line 209
undef($memory_17);
#line 210
$memory_17 = "warnings";
#line 210
$memory_17 = c_rt_lib::get_ref_hash($memory_3, $memory_17);
#line 210
$memory_19 = "unused function: ";
#line 210
$memory_19 = $memory_19 . $memory_16;
#line 210
$memory_20 = $memory_11->{'line'};
#line 210
$memory_21 = 0;
#line 210
$memory_22 = $memory_5->{'name'};
#line 210
$memory_23 = c_rt_lib::ov_mk_none('warning');
#line 210
$memory_18 = {message => $memory_19,line => $memory_20,column => $memory_21,module => $memory_22,type => $memory_23,};
#line 210
undef($memory_19);
#line 210
undef($memory_20);
#line 210
undef($memory_21);
#line 210
undef($memory_22);
#line 210
undef($memory_23);
#line 210
array::push($memory_17, $memory_18);
#line 210
undef($memory_18);
#line 210
$memory_18 = "warnings";
#line 210
c_rt_lib::set_ref_hash($memory_3, $memory_18, $memory_17);
#line 210
undef($memory_18);
#line 210
undef($memory_17);
#line 210
undef($memory_16);
#line 210
label_102:
#line 211
$memory_12 = $memory_12 + $memory_13;
#line 211
goto label_54;
#line 211
label_105:
#line 211
undef($memory_10);
#line 211
undef($memory_11);
#line 211
undef($memory_12);
#line 211
undef($memory_13);
#line 211
undef($memory_14);
#line 211
undef($memory_15);
#line 212
$memory_6 = $memory_6 + $memory_7;
#line 212
goto label_46;
#line 212
label_114:
#line 212
undef($memory_5);
#line 212
undef($memory_6);
#line 212
undef($memory_7);
#line 212
undef($memory_8);
#line 212
undef($memory_9);
#line 212
undef($memory_4);
#line 212
undef($memory_0);
#line 212
undef($memory_1);
#line 212
undef($memory_2);
#line 212
$_[3] = $memory_3;return;
$_[3] = $memory_3;}

sub module_checker_priv::check_types_imported($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;$memory_0 = $_[0];$memory_1 = $_[1];Scalar::Util::weaken($_[1]) if ref($_[1]);
#line 216
$memory_2 = c_rt_lib::ov_is($memory_0, 'tct_im');
#line 216
if (c_rt_lib::check_true($memory_2)) {goto label_21;}
#line 217
$memory_2 = c_rt_lib::ov_is($memory_0, 'tct_arr');
#line 217
if (c_rt_lib::check_true($memory_2)) {goto label_23;}
#line 219
$memory_2 = c_rt_lib::ov_is($memory_0, 'tct_hash');
#line 219
if (c_rt_lib::check_true($memory_2)) {goto label_28;}
#line 221
$memory_2 = c_rt_lib::ov_is($memory_0, 'tct_rec');
#line 221
if (c_rt_lib::check_true($memory_2)) {goto label_33;}
#line 225
$memory_2 = c_rt_lib::ov_is($memory_0, 'tct_ref');
#line 225
if (c_rt_lib::check_true($memory_2)) {goto label_50;}
#line 234
$memory_2 = c_rt_lib::ov_is($memory_0, 'tct_void');
#line 234
if (c_rt_lib::check_true($memory_2)) {goto label_96;}
#line 235
$memory_2 = c_rt_lib::ov_is($memory_0, 'tct_sim');
#line 235
if (c_rt_lib::check_true($memory_2)) {goto label_98;}
#line 236
$memory_2 = c_rt_lib::ov_is($memory_0, 'tct_var');
#line 236
if (c_rt_lib::check_true($memory_2)) {goto label_100;}
#line 243
$memory_2 = c_rt_lib::ov_is($memory_0, 'tct_empty');
#line 243
if (c_rt_lib::check_true($memory_2)) {goto label_132;}
#line 243
$memory_2 = "NOMATCHALERT";
#line 243
$memory_2 = [$memory_2,$memory_0];
#line 243
die(dfile::ssave($memory_2));
#line 216
label_21:
#line 217
goto label_134;
#line 217
label_23:
#line 217
$memory_3 = c_rt_lib::ov_as($memory_0, 'tct_arr');
#line 218
module_checker_priv::check_types_imported($memory_3, $memory_1);
#line 218
undef($memory_3);
#line 219
goto label_134;
#line 219
label_28:
#line 219
$memory_3 = c_rt_lib::ov_as($memory_0, 'tct_hash');
#line 220
module_checker_priv::check_types_imported($memory_3, $memory_1);
#line 220
undef($memory_3);
#line 221
goto label_134;
#line 221
label_33:
#line 221
$memory_3 = c_rt_lib::ov_as($memory_0, 'tct_rec');
#line 222
$memory_6 = c_rt_lib::init_iter($memory_3);
#line 222
label_36:
#line 222
$memory_4 = c_rt_lib::is_end_hash($memory_6);
#line 222
if (c_rt_lib::check_true($memory_4)) {goto label_44;}
#line 222
$memory_4 = c_rt_lib::get_key_iter($memory_6);
#line 222
$memory_5 = c_rt_lib::hash_get_value($memory_3, $memory_4);
#line 223
module_checker_priv::check_types_imported($memory_5, $memory_1);
#line 224
$memory_6 = c_rt_lib::next_iter($memory_6);
#line 224
goto label_36;
#line 224
label_44:
#line 224
undef($memory_4);
#line 224
undef($memory_5);
#line 224
undef($memory_6);
#line 224
undef($memory_3);
#line 225
goto label_134;
#line 225
label_50:
#line 225
$memory_3 = c_rt_lib::ov_as($memory_0, 'tct_ref');
#line 226
$memory_5 = "::";
#line 226
$memory_4 = string::index2($memory_3, $memory_5);
#line 226
undef($memory_5);
#line 227
$memory_5 = 0;
#line 227
$memory_5 = c_rt_lib::to_nl($memory_4 >= $memory_5);
#line 227
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 227
if (c_rt_lib::check_true($memory_5)) {goto label_76;}
#line 228
$memory_7 = 0;
#line 228
$memory_6 = string::substr($memory_3, $memory_7, $memory_4);
#line 228
undef($memory_7);
#line 229
$memory_8 = 2;
#line 229
$memory_8 = $memory_4 + $memory_8;
#line 229
$memory_9 = string::length($memory_3);
#line 229
$memory_9 = $memory_9 - $memory_4;
#line 229
$memory_10 = 2;
#line 229
$memory_9 = $memory_9 - $memory_10;
#line 229
undef($memory_10);
#line 229
$memory_7 = string::substr($memory_3, $memory_8, $memory_9);
#line 229
undef($memory_9);
#line 229
undef($memory_8);
#line 230
module_checker_priv::add_fun_used($memory_6, $memory_7, $memory_1);
#line 230
undef($memory_6);
#line 230
undef($memory_7);
#line 231
goto label_91;
#line 231
label_76:
#line 232
$memory_6 = "errors";
#line 232
$memory_6 = c_rt_lib::get_ref_hash($memory_1, $memory_6);
#line 232
$memory_7 = "wrong type function name '";
#line 232
$memory_7 = $memory_7 . $memory_3;
#line 232
$memory_8 = "' ";
#line 232
$memory_7 = $memory_7 . $memory_8;
#line 232
undef($memory_8);
#line 232
module_checker_priv::add_error($memory_6, $memory_7);
#line 232
undef($memory_7);
#line 232
$memory_7 = "errors";
#line 232
c_rt_lib::set_ref_hash($memory_1, $memory_7, $memory_6);
#line 232
undef($memory_7);
#line 232
undef($memory_6);
#line 233
goto label_91;
#line 233
label_91:
#line 233
undef($memory_5);
#line 233
undef($memory_4);
#line 233
undef($memory_3);
#line 234
goto label_134;
#line 234
label_96:
#line 235
goto label_134;
#line 235
label_98:
#line 236
goto label_134;
#line 236
label_100:
#line 236
$memory_3 = c_rt_lib::ov_as($memory_0, 'tct_var');
#line 237
$memory_6 = c_rt_lib::init_iter($memory_3);
#line 237
label_103:
#line 237
$memory_4 = c_rt_lib::is_end_hash($memory_6);
#line 237
if (c_rt_lib::check_true($memory_4)) {goto label_126;}
#line 237
$memory_4 = c_rt_lib::get_key_iter($memory_6);
#line 237
$memory_5 = c_rt_lib::hash_get_value($memory_3, $memory_4);
#line 238
$memory_7 = c_rt_lib::ov_is($memory_5, 'no_param');
#line 238
if (c_rt_lib::check_true($memory_7)) {goto label_115;}
#line 239
$memory_7 = c_rt_lib::ov_is($memory_5, 'with_param');
#line 239
if (c_rt_lib::check_true($memory_7)) {goto label_117;}
#line 239
$memory_7 = "NOMATCHALERT";
#line 239
$memory_7 = [$memory_7,$memory_5];
#line 239
die(dfile::ssave($memory_7));
#line 238
label_115:
#line 239
goto label_122;
#line 239
label_117:
#line 239
$memory_8 = c_rt_lib::ov_as($memory_5, 'with_param');
#line 240
module_checker_priv::check_types_imported($memory_8, $memory_1);
#line 240
undef($memory_8);
#line 241
goto label_122;
#line 241
label_122:
#line 241
undef($memory_7);
#line 242
$memory_6 = c_rt_lib::next_iter($memory_6);
#line 242
goto label_103;
#line 242
label_126:
#line 242
undef($memory_4);
#line 242
undef($memory_5);
#line 242
undef($memory_6);
#line 242
undef($memory_3);
#line 243
goto label_134;
#line 243
label_132:
#line 244
goto label_134;
#line 244
label_134:
#line 244
undef($memory_2);
#line 244
undef($memory_0);
#line 244
$_[1] = $memory_1;return;
$_[1] = $memory_1;}

sub module_checker_priv::get_fun_key($$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;$memory_0 = $_[0];$memory_1 = $_[1];$memory_2 = $_[2];
#line 248
$memory_3 = "";
#line 248
$memory_3 = c_rt_lib::to_nl($memory_0 eq $memory_3);
#line 248
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 248
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 248
if (c_rt_lib::check_true($memory_3)) {goto label_15;}
#line 248
$memory_4 = "::";
#line 248
$memory_4 = $memory_0 . $memory_4;
#line 248
$memory_4 = $memory_4 . $memory_1;
#line 248
undef($memory_0);
#line 248
undef($memory_1);
#line 248
undef($memory_2);
#line 248
undef($memory_3);
#line 248
return $memory_4;
#line 248
undef($memory_4);
#line 248
goto label_15;
#line 248
label_15:
#line 248
undef($memory_3);
#line 249
$memory_3 = "priv:";
#line 249
$memory_3 = $memory_3 . $memory_2;
#line 249
$memory_4 = "::";
#line 249
$memory_3 = $memory_3 . $memory_4;
#line 249
undef($memory_4);
#line 249
$memory_3 = $memory_3 . $memory_1;
#line 249
undef($memory_0);
#line 249
undef($memory_1);
#line 249
undef($memory_2);
#line 249
return $memory_3;
#line 249
undef($memory_3);
#line 249
undef($memory_0);
#line 249
undef($memory_1);
#line 249
undef($memory_2);
#line 249
return;
}

sub module_checker_priv::add_fun_used($$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;$memory_0 = $_[0];$memory_1 = $_[1];$memory_2 = $_[2];Scalar::Util::weaken($_[2]) if ref($_[2]);
#line 253
$memory_4 = $memory_2->{'current_module'};
#line 253
$memory_3 = module_checker_priv::get_fun_key($memory_0, $memory_1, $memory_4);
#line 253
undef($memory_4);
#line 254
$memory_5 = $memory_2->{'called'};
#line 254
$memory_5 = $memory_5->{'func'};
#line 254
$memory_4 = hash::has_key($memory_5, $memory_3);
#line 254
undef($memory_5);
#line 254
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 254
if (c_rt_lib::check_true($memory_4)) {goto label_15;}
#line 254
undef($memory_0);
#line 254
undef($memory_1);
#line 254
undef($memory_3);
#line 254
undef($memory_4);
#line 254
$_[2] = $memory_2;return;
#line 254
goto label_15;
#line 254
label_15:
#line 254
undef($memory_4);
#line 255
$memory_4 = "called";
#line 255
$memory_4 = c_rt_lib::get_ref_hash($memory_2, $memory_4);
#line 255
$memory_5 = "func";
#line 255
$memory_5 = c_rt_lib::get_ref_hash($memory_4, $memory_5);
#line 255
$memory_6 = $memory_2->{'errors'};
#line 255
$memory_6 = $memory_6->{'current_line'};
#line 255
hash::set_value($memory_5, $memory_3, $memory_6);
#line 255
undef($memory_6);
#line 255
$memory_6 = "func";
#line 255
c_rt_lib::set_ref_hash($memory_4, $memory_6, $memory_5);
#line 255
$memory_6 = "called";
#line 255
c_rt_lib::set_ref_hash($memory_2, $memory_6, $memory_4);
#line 255
undef($memory_6);
#line 255
undef($memory_4);
#line 255
undef($memory_5);
#line 256
$memory_4 = "";
#line 256
$memory_4 = c_rt_lib::to_nl($memory_0 eq $memory_4);
#line 256
if (c_rt_lib::check_true($memory_4)) {goto label_39;}
#line 256
$memory_5 = $memory_2->{'called'};
#line 256
$memory_5 = $memory_5->{'module'};
#line 256
$memory_4 = hash::has_key($memory_5, $memory_0);
#line 256
undef($memory_5);
#line 256
label_39:
#line 256
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 256
if (c_rt_lib::check_true($memory_4)) {goto label_48;}
#line 256
undef($memory_0);
#line 256
undef($memory_1);
#line 256
undef($memory_3);
#line 256
undef($memory_4);
#line 256
$_[2] = $memory_2;return;
#line 256
goto label_48;
#line 256
label_48:
#line 256
undef($memory_4);
#line 257
$memory_4 = "called";
#line 257
$memory_4 = c_rt_lib::get_ref_hash($memory_2, $memory_4);
#line 257
$memory_5 = "module";
#line 257
$memory_5 = c_rt_lib::get_ref_hash($memory_4, $memory_5);
#line 257
$memory_6 = $memory_2->{'errors'};
#line 257
$memory_6 = $memory_6->{'current_line'};
#line 257
hash::set_value($memory_5, $memory_0, $memory_6);
#line 257
undef($memory_6);
#line 257
$memory_6 = "module";
#line 257
c_rt_lib::set_ref_hash($memory_4, $memory_6, $memory_5);
#line 257
$memory_6 = "called";
#line 257
c_rt_lib::set_ref_hash($memory_2, $memory_6, $memory_4);
#line 257
undef($memory_6);
#line 257
undef($memory_4);
#line 257
undef($memory_5);
#line 257
undef($memory_3);
#line 257
undef($memory_0);
#line 257
undef($memory_1);
#line 257
$_[2] = $memory_2;return;
$_[2] = $memory_2;}

sub module_checker_priv::check_return_type($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;$memory_0 = $_[0];$memory_1 = $_[1];Scalar::Util::weaken($_[1]) if ref($_[1]);
#line 261
$memory_2 = c_rt_lib::ov_is($memory_0, 'none');
#line 261
if (c_rt_lib::check_true($memory_2)) {goto label_7;}
#line 263
$memory_2 = c_rt_lib::ov_is($memory_0, 'type');
#line 263
if (c_rt_lib::check_true($memory_2)) {goto label_14;}
#line 263
$memory_2 = "NOMATCHALERT";
#line 263
$memory_2 = [$memory_2,$memory_0];
#line 263
die(dfile::ssave($memory_2));
#line 261
label_7:
#line 262
$memory_3 = c_rt_lib::ov_mk_none('none');
#line 262
undef($memory_0);
#line 262
undef($memory_2);
#line 262
$_[1] = $memory_1;return $memory_3;
#line 262
undef($memory_3);
#line 263
goto label_59;
#line 263
label_14:
#line 263
$memory_3 = c_rt_lib::ov_as($memory_0, 'type');
#line 264
$memory_4 = $memory_3->{'value'};
#line 264
$memory_4 = c_rt_lib::ov_is($memory_4, 'fun_val');
#line 264
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 264
if (c_rt_lib::check_true($memory_4)) {goto label_55;}
#line 265
$memory_5 = $memory_3->{'value'};
#line 265
$memory_5 = c_rt_lib::ov_as($memory_5, 'fun_val');
#line 266
$memory_6 = $memory_5->{'module'};
#line 266
$memory_8 = "ptd";
#line 266
$memory_6 = c_rt_lib::to_nl($memory_6 eq $memory_8);
#line 266
undef($memory_8);
#line 266
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 266
if (c_rt_lib::check_true($memory_7)) {goto label_32;}
#line 266
$memory_6 = $memory_5->{'name'};
#line 266
$memory_8 = "void";
#line 266
$memory_6 = c_rt_lib::to_nl($memory_6 eq $memory_8);
#line 266
undef($memory_8);
#line 266
label_32:
#line 266
undef($memory_7);
#line 266
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 266
if (c_rt_lib::check_true($memory_6)) {goto label_51;}
#line 267
$memory_7 = "ptd";
#line 267
$memory_8 = "void";
#line 267
module_checker_priv::add_fun_used($memory_7, $memory_8, $memory_1);
#line 267
undef($memory_8);
#line 267
undef($memory_7);
#line 268
$memory_7 = c_rt_lib::ov_mk_none('void');
#line 268
undef($memory_0);
#line 268
undef($memory_2);
#line 268
undef($memory_3);
#line 268
undef($memory_4);
#line 268
undef($memory_5);
#line 268
undef($memory_6);
#line 268
$_[1] = $memory_1;return $memory_7;
#line 268
undef($memory_7);
#line 269
goto label_51;
#line 269
label_51:
#line 269
undef($memory_6);
#line 269
undef($memory_5);
#line 270
goto label_55;
#line 270
label_55:
#line 270
undef($memory_4);
#line 270
undef($memory_3);
#line 271
goto label_59;
#line 271
label_59:
#line 271
undef($memory_2);
#line 272
module_checker_priv::check_type($memory_0, $memory_1);
#line 273
$memory_2 = c_rt_lib::ov_mk_none('value');
#line 273
undef($memory_0);
#line 273
$_[1] = $memory_1;return $memory_2;
#line 273
undef($memory_2);
#line 273
undef($memory_0);
#line 273
$_[1] = $memory_1;return;
$_[1] = $memory_1;}

sub module_checker_priv::check_type($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;$memory_0 = $_[0];$memory_1 = $_[1];Scalar::Util::weaken($_[1]) if ref($_[1]);
#line 277
$memory_2 = c_rt_lib::ov_is($memory_0, 'none');
#line 277
if (c_rt_lib::check_true($memory_2)) {goto label_7;}
#line 278
$memory_2 = c_rt_lib::ov_is($memory_0, 'type');
#line 278
if (c_rt_lib::check_true($memory_2)) {goto label_9;}
#line 278
$memory_2 = "NOMATCHALERT";
#line 278
$memory_2 = [$memory_2,$memory_0];
#line 278
die(dfile::ssave($memory_2));
#line 277
label_7:
#line 278
goto label_55;
#line 278
label_9:
#line 278
$memory_3 = c_rt_lib::ov_as($memory_0, 'type');
#line 279
$memory_4 = $memory_3->{'value'};
#line 279
$memory_4 = c_rt_lib::ov_is($memory_4, 'fun_val');
#line 279
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 279
if (c_rt_lib::check_true($memory_4)) {goto label_24;}
#line 280
$memory_5 = $memory_3->{'value'};
#line 280
$memory_5 = c_rt_lib::ov_as($memory_5, 'fun_val');
#line 281
$memory_6 = $memory_5->{'module'};
#line 281
$memory_7 = $memory_5->{'name'};
#line 281
module_checker_priv::add_fun_used($memory_6, $memory_7, $memory_1);
#line 281
undef($memory_7);
#line 281
undef($memory_6);
#line 281
undef($memory_5);
#line 282
goto label_24;
#line 282
label_24:
#line 282
undef($memory_4);
#line 283
$memory_4 = ptd_parser::try_value_to_ptd($memory_3);
#line 283
$memory_5 = c_rt_lib::ov_is($memory_4, 'err');
#line 283
if (c_rt_lib::check_true($memory_5)) {goto label_34;}
#line 285
$memory_5 = c_rt_lib::ov_is($memory_4, 'ok');
#line 285
if (c_rt_lib::check_true($memory_5)) {goto label_45;}
#line 285
$memory_5 = "NOMATCHALERT";
#line 285
$memory_5 = [$memory_5,$memory_4];
#line 285
die(dfile::ssave($memory_5));
#line 283
label_34:
#line 283
$memory_6 = c_rt_lib::ov_as($memory_4, 'err');
#line 284
$memory_7 = "errors";
#line 284
$memory_7 = c_rt_lib::get_ref_hash($memory_1, $memory_7);
#line 284
module_checker_priv::add_error($memory_7, $memory_6);
#line 284
$memory_8 = "errors";
#line 284
c_rt_lib::set_ref_hash($memory_1, $memory_8, $memory_7);
#line 284
undef($memory_8);
#line 284
undef($memory_7);
#line 284
undef($memory_6);
#line 285
goto label_50;
#line 285
label_45:
#line 285
$memory_6 = c_rt_lib::ov_as($memory_4, 'ok');
#line 286
module_checker_priv::check_types_imported($memory_6, $memory_1);
#line 286
undef($memory_6);
#line 287
goto label_50;
#line 287
label_50:
#line 287
undef($memory_4);
#line 287
undef($memory_5);
#line 287
undef($memory_3);
#line 288
goto label_55;
#line 288
label_55:
#line 288
undef($memory_2);
#line 288
undef($memory_0);
#line 288
$_[1] = $memory_1;return;
$_[1] = $memory_1;}

sub module_checker_priv::add_var($$$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;$memory_0 = $_[0];$memory_1 = $_[1];$memory_2 = $_[2];$memory_3 = $_[3];Scalar::Util::weaken($_[3]) if ref($_[3]);
#line 293
$memory_5 = $memory_3->{'vars'};
#line 293
$memory_4 = hash::has_key($memory_5, $memory_0);
#line 293
undef($memory_5);
#line 293
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 293
if (c_rt_lib::check_true($memory_4)) {goto label_16;}
#line 294
$memory_5 = "errors";
#line 294
$memory_5 = c_rt_lib::get_ref_hash($memory_3, $memory_5);
#line 294
$memory_6 = "redeclaration variable: ";
#line 294
$memory_6 = $memory_6 . $memory_0;
#line 294
module_checker_priv::add_error($memory_5, $memory_6);
#line 294
undef($memory_6);
#line 294
$memory_6 = "errors";
#line 294
c_rt_lib::set_ref_hash($memory_3, $memory_6, $memory_5);
#line 294
undef($memory_6);
#line 294
undef($memory_5);
#line 295
goto label_16;
#line 295
label_16:
#line 295
undef($memory_4);
#line 296
$memory_5 = c_rt_lib::ov_mk_none('none');
#line 296
$memory_6 = c_rt_lib::to_nl(0);
#line 296
$memory_4 = {write => $memory_5,read => $memory_6,is_required => $memory_2,};
#line 296
undef($memory_5);
#line 296
undef($memory_6);
#line 297
$memory_5 = $memory_1;
#line 297
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 297
if (c_rt_lib::check_true($memory_5)) {goto label_32;}
#line 297
$memory_6 = c_rt_lib::ov_mk_none('const');
#line 297
$memory_7 = $memory_6;
#line 297
 if (c_rt_lib::get_hashcount($memory_4) > 1) {$memory_4 = {%{$memory_4}};}$memory_4->{'write'} = $memory_7;
#line 297
undef($memory_6);
#line 297
undef($memory_7);
#line 297
goto label_32;
#line 297
label_32:
#line 297
undef($memory_5);
#line 298
$memory_5 = "vars";
#line 298
$memory_5 = c_rt_lib::get_ref_hash($memory_3, $memory_5);
#line 298
hash::set_value($memory_5, $memory_0, $memory_4);
#line 298
$memory_6 = "vars";
#line 298
c_rt_lib::set_ref_hash($memory_3, $memory_6, $memory_5);
#line 298
undef($memory_6);
#line 298
undef($memory_5);
#line 298
undef($memory_4);
#line 298
undef($memory_0);
#line 298
undef($memory_1);
#line 298
undef($memory_2);
#line 298
$_[3] = $memory_3;return;
$_[3] = $memory_3;}

sub module_checker_priv::use_var($$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;$memory_0 = $_[0];$memory_1 = $_[1];$memory_2 = $_[2];Scalar::Util::weaken($_[2]) if ref($_[2]);
#line 303
$memory_4 = $memory_2->{'vars'};
#line 303
$memory_3 = hash::has_key($memory_4, $memory_0);
#line 303
undef($memory_4);
#line 303
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 303
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 303
if (c_rt_lib::check_true($memory_3)) {goto label_21;}
#line 304
$memory_4 = "errors";
#line 304
$memory_4 = c_rt_lib::get_ref_hash($memory_2, $memory_4);
#line 304
$memory_5 = "unknown variable: ";
#line 304
$memory_5 = $memory_5 . $memory_0;
#line 304
module_checker_priv::add_error($memory_4, $memory_5);
#line 304
undef($memory_5);
#line 304
$memory_5 = "errors";
#line 304
c_rt_lib::set_ref_hash($memory_2, $memory_5, $memory_4);
#line 304
undef($memory_5);
#line 304
undef($memory_4);
#line 305
undef($memory_0);
#line 305
undef($memory_1);
#line 305
undef($memory_3);
#line 305
$_[2] = $memory_2;return;
#line 306
goto label_21;
#line 306
label_21:
#line 306
undef($memory_3);
#line 307
$memory_4 = $memory_2->{'vars'};
#line 307
$memory_3 = hash::get_value($memory_4, $memory_0);
#line 307
undef($memory_4);
#line 308
$memory_4 = c_rt_lib::ov_is($memory_1, 'get');
#line 308
if (c_rt_lib::check_true($memory_4)) {goto label_35;}
#line 310
$memory_4 = c_rt_lib::ov_is($memory_1, 'set');
#line 310
if (c_rt_lib::check_true($memory_4)) {goto label_42;}
#line 316
$memory_4 = c_rt_lib::ov_is($memory_1, 'mod');
#line 316
if (c_rt_lib::check_true($memory_4)) {goto label_72;}
#line 316
$memory_4 = "NOMATCHALERT";
#line 316
$memory_4 = [$memory_4,$memory_1];
#line 316
die(dfile::ssave($memory_4));
#line 308
label_35:
#line 309
$memory_5 = c_rt_lib::to_nl(1);
#line 309
$memory_6 = $memory_5;
#line 309
 if (c_rt_lib::get_hashcount($memory_3) > 1) {$memory_3 = {%{$memory_3}};}$memory_3->{'read'} = $memory_6;
#line 309
undef($memory_5);
#line 309
undef($memory_6);
#line 310
goto label_107;
#line 310
label_42:
#line 311
$memory_5 = $memory_3->{'write'};
#line 311
$memory_5 = c_rt_lib::ov_is($memory_5, 'const');
#line 311
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 311
if (c_rt_lib::check_true($memory_5)) {goto label_64;}
#line 312
$memory_6 = "errors";
#line 312
$memory_6 = c_rt_lib::get_ref_hash($memory_2, $memory_6);
#line 312
$memory_7 = "can't change const variable: ";
#line 312
$memory_7 = $memory_7 . $memory_0;
#line 312
module_checker_priv::add_error($memory_6, $memory_7);
#line 312
undef($memory_7);
#line 312
$memory_7 = "errors";
#line 312
c_rt_lib::set_ref_hash($memory_2, $memory_7, $memory_6);
#line 312
undef($memory_7);
#line 312
undef($memory_6);
#line 313
undef($memory_0);
#line 313
undef($memory_1);
#line 313
undef($memory_3);
#line 313
undef($memory_4);
#line 313
undef($memory_5);
#line 313
$_[2] = $memory_2;return;
#line 314
goto label_64;
#line 314
label_64:
#line 314
undef($memory_5);
#line 315
$memory_5 = c_rt_lib::ov_mk_none('value');
#line 315
$memory_6 = $memory_5;
#line 315
 if (c_rt_lib::get_hashcount($memory_3) > 1) {$memory_3 = {%{$memory_3}};}$memory_3->{'write'} = $memory_6;
#line 315
undef($memory_5);
#line 315
undef($memory_6);
#line 316
goto label_107;
#line 316
label_72:
#line 317
$memory_5 = c_rt_lib::to_nl(1);
#line 317
$memory_6 = $memory_5;
#line 317
 if (c_rt_lib::get_hashcount($memory_3) > 1) {$memory_3 = {%{$memory_3}};}$memory_3->{'read'} = $memory_6;
#line 317
undef($memory_5);
#line 317
undef($memory_6);
#line 318
$memory_5 = $memory_3->{'write'};
#line 318
$memory_5 = c_rt_lib::ov_is($memory_5, 'const');
#line 318
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 318
if (c_rt_lib::check_true($memory_5)) {goto label_99;}
#line 319
$memory_6 = "errors";
#line 319
$memory_6 = c_rt_lib::get_ref_hash($memory_2, $memory_6);
#line 319
$memory_7 = "can't change const variable: ";
#line 319
$memory_7 = $memory_7 . $memory_0;
#line 319
module_checker_priv::add_error($memory_6, $memory_7);
#line 319
undef($memory_7);
#line 319
$memory_7 = "errors";
#line 319
c_rt_lib::set_ref_hash($memory_2, $memory_7, $memory_6);
#line 319
undef($memory_7);
#line 319
undef($memory_6);
#line 320
undef($memory_0);
#line 320
undef($memory_1);
#line 320
undef($memory_3);
#line 320
undef($memory_4);
#line 320
undef($memory_5);
#line 320
$_[2] = $memory_2;return;
#line 321
goto label_99;
#line 321
label_99:
#line 321
undef($memory_5);
#line 322
$memory_5 = c_rt_lib::ov_mk_none('value');
#line 322
$memory_6 = $memory_5;
#line 322
 if (c_rt_lib::get_hashcount($memory_3) > 1) {$memory_3 = {%{$memory_3}};}$memory_3->{'write'} = $memory_6;
#line 322
undef($memory_5);
#line 322
undef($memory_6);
#line 323
goto label_107;
#line 323
label_107:
#line 323
undef($memory_4);
#line 324
$memory_4 = "vars";
#line 324
$memory_4 = c_rt_lib::get_ref_hash($memory_2, $memory_4);
#line 324
hash::set_value($memory_4, $memory_0, $memory_3);
#line 324
$memory_5 = "vars";
#line 324
c_rt_lib::set_ref_hash($memory_2, $memory_5, $memory_4);
#line 324
undef($memory_5);
#line 324
undef($memory_4);
#line 324
undef($memory_3);
#line 324
undef($memory_0);
#line 324
undef($memory_1);
#line 324
$_[2] = $memory_2;return;
$_[2] = $memory_2;}

sub module_checker_priv::add_var_dec($$$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;$memory_0 = $_[0];$memory_1 = $_[1];$memory_2 = $_[2];$memory_3 = $_[3];Scalar::Util::weaken($_[3]) if ref($_[3]);
#line 329
$memory_4 = $memory_0->{'name'};
#line 329
module_checker_priv::add_var($memory_4, $memory_1, $memory_2, $memory_3);
#line 329
undef($memory_4);
#line 330
$memory_4 = $memory_0->{'type'};
#line 330
module_checker_priv::check_type($memory_4, $memory_3);
#line 330
undef($memory_4);
#line 331
$memory_4 = $memory_0->{'value'};
#line 331
$memory_5 = c_rt_lib::ov_is($memory_4, 'value');
#line 331
if (c_rt_lib::check_true($memory_5)) {goto label_14;}
#line 335
$memory_5 = c_rt_lib::ov_is($memory_4, 'none');
#line 335
if (c_rt_lib::check_true($memory_5)) {goto label_33;}
#line 335
$memory_5 = "NOMATCHALERT";
#line 335
$memory_5 = [$memory_5,$memory_4];
#line 335
die(dfile::ssave($memory_5));
#line 331
label_14:
#line 331
$memory_6 = c_rt_lib::ov_as($memory_4, 'value');
#line 332
module_checker_priv::check_val($memory_6, $memory_3);
#line 333
$memory_7 = $memory_1;
#line 333
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 333
if (c_rt_lib::check_true($memory_7)) {goto label_23;}
#line 333
$memory_8 = [];
#line 333
die(dfile::ssave($memory_8));
#line 333
goto label_23;
#line 333
label_23:
#line 333
undef($memory_7);
#line 333
undef($memory_8);
#line 334
$memory_7 = $memory_0->{'name'};
#line 334
$memory_8 = c_rt_lib::ov_mk_none('set');
#line 334
module_checker_priv::use_var($memory_7, $memory_8, $memory_3);
#line 334
undef($memory_8);
#line 334
undef($memory_7);
#line 334
undef($memory_6);
#line 335
goto label_35;
#line 335
label_33:
#line 336
goto label_35;
#line 336
label_35:
#line 336
undef($memory_4);
#line 336
undef($memory_5);
#line 336
undef($memory_0);
#line 336
undef($memory_1);
#line 336
undef($memory_2);
#line 336
$_[3] = $memory_3;return;
$_[3] = $memory_3;}

sub module_checker_priv::check_cmd($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;my $memory_13;my $memory_14;my $memory_15;my $memory_16;my $memory_17;$memory_0 = $_[0];$memory_1 = $_[1];Scalar::Util::weaken($_[1]) if ref($_[1]);
#line 340
$memory_2 = $memory_0->{'debug'};
#line 340
$memory_2 = $memory_2->{'begin'};
#line 340
$memory_2 = $memory_2->{'line'};
#line 340
$memory_3 = "errors";
#line 340
$memory_3 = c_rt_lib::get_ref_hash($memory_1, $memory_3);
#line 340
$memory_4 = $memory_2;
#line 340
 if (c_rt_lib::get_hashcount($memory_3) > 1) {$memory_3 = {%{$memory_3}};}$memory_3->{'current_line'} = $memory_4;
#line 340
$memory_5 = "errors";
#line 340
c_rt_lib::set_ref_hash($memory_1, $memory_5, $memory_3);
#line 340
undef($memory_5);
#line 340
undef($memory_2);
#line 340
undef($memory_3);
#line 340
undef($memory_4);
#line 341
$memory_2 = $memory_1->{'return'};
#line 341
$memory_2 = $memory_2->{'was'};
#line 341
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 341
if (c_rt_lib::check_true($memory_2)) {goto label_38;}
#line 342
$memory_3 = "errors";
#line 342
$memory_3 = c_rt_lib::get_ref_hash($memory_1, $memory_3);
#line 342
$memory_4 = "never used command";
#line 342
module_checker_priv::add_warning($memory_3, $memory_4);
#line 342
undef($memory_4);
#line 342
$memory_4 = "errors";
#line 342
c_rt_lib::set_ref_hash($memory_1, $memory_4, $memory_3);
#line 342
undef($memory_4);
#line 342
undef($memory_3);
#line 343
$memory_3 = c_rt_lib::to_nl(0);
#line 343
$memory_4 = "return";
#line 343
$memory_4 = c_rt_lib::get_ref_hash($memory_1, $memory_4);
#line 343
$memory_5 = $memory_3;
#line 343
 if (c_rt_lib::get_hashcount($memory_4) > 1) {$memory_4 = {%{$memory_4}};}$memory_4->{'was'} = $memory_5;
#line 343
$memory_6 = "return";
#line 343
c_rt_lib::set_ref_hash($memory_1, $memory_6, $memory_4);
#line 343
undef($memory_6);
#line 343
undef($memory_3);
#line 343
undef($memory_4);
#line 343
undef($memory_5);
#line 344
goto label_38;
#line 344
label_38:
#line 344
undef($memory_2);
#line 345
$memory_2 = $memory_0->{'cmd'};
#line 345
$memory_3 = c_rt_lib::ov_is($memory_2, 'if');
#line 345
if (c_rt_lib::check_true($memory_3)) {goto label_84;}
#line 359
$memory_3 = c_rt_lib::ov_is($memory_2, 'for');
#line 359
if (c_rt_lib::check_true($memory_3)) {goto label_176;}
#line 372
$memory_3 = c_rt_lib::ov_is($memory_2, 'fora');
#line 372
if (c_rt_lib::check_true($memory_3)) {goto label_233;}
#line 380
$memory_3 = c_rt_lib::ov_is($memory_2, 'forh');
#line 380
if (c_rt_lib::check_true($memory_3)) {goto label_269;}
#line 389
$memory_3 = c_rt_lib::ov_is($memory_2, 'loop');
#line 389
if (c_rt_lib::check_true($memory_3)) {goto label_312;}
#line 394
$memory_3 = c_rt_lib::ov_is($memory_2, 'rep');
#line 394
if (c_rt_lib::check_true($memory_3)) {goto label_325;}
#line 402
$memory_3 = c_rt_lib::ov_is($memory_2, 'while');
#line 402
if (c_rt_lib::check_true($memory_3)) {goto label_361;}
#line 409
$memory_3 = c_rt_lib::ov_is($memory_2, 'if_mod');
#line 409
if (c_rt_lib::check_true($memory_3)) {goto label_390;}
#line 413
$memory_3 = c_rt_lib::ov_is($memory_2, 'unless_mod');
#line 413
if (c_rt_lib::check_true($memory_3)) {goto label_411;}
#line 417
$memory_3 = c_rt_lib::ov_is($memory_2, 'break');
#line 417
if (c_rt_lib::check_true($memory_3)) {goto label_432;}
#line 421
$memory_3 = c_rt_lib::ov_is($memory_2, 'continue');
#line 421
if (c_rt_lib::check_true($memory_3)) {goto label_450;}
#line 425
$memory_3 = c_rt_lib::ov_is($memory_2, 'match');
#line 425
if (c_rt_lib::check_true($memory_3)) {goto label_468;}
#line 440
$memory_3 = c_rt_lib::ov_is($memory_2, 'value');
#line 440
if (c_rt_lib::check_true($memory_3)) {goto label_554;}
#line 442
$memory_3 = c_rt_lib::ov_is($memory_2, 'return');
#line 442
if (c_rt_lib::check_true($memory_3)) {goto label_559;}
#line 458
$memory_3 = c_rt_lib::ov_is($memory_2, 'block');
#line 458
if (c_rt_lib::check_true($memory_3)) {goto label_723;}
#line 464
$memory_3 = c_rt_lib::ov_is($memory_2, 'die');
#line 464
if (c_rt_lib::check_true($memory_3)) {goto label_746;}
#line 469
$memory_3 = c_rt_lib::ov_is($memory_2, 'var_decl');
#line 469
if (c_rt_lib::check_true($memory_3)) {goto label_777;}
#line 471
$memory_3 = c_rt_lib::ov_is($memory_2, 'try');
#line 471
if (c_rt_lib::check_true($memory_3)) {goto label_786;}
#line 479
$memory_3 = c_rt_lib::ov_is($memory_2, 'ensure');
#line 479
if (c_rt_lib::check_true($memory_3)) {goto label_826;}
#line 487
$memory_3 = c_rt_lib::ov_is($memory_2, 'nop');
#line 487
if (c_rt_lib::check_true($memory_3)) {goto label_866;}
#line 487
$memory_3 = "NOMATCHALERT";
#line 487
$memory_3 = [$memory_3,$memory_2];
#line 487
die(dfile::ssave($memory_3));
#line 345
label_84:
#line 345
$memory_4 = c_rt_lib::ov_as($memory_2, 'if');
#line 346
$memory_5 = $memory_4->{'cond'};
#line 346
module_checker_priv::check_val($memory_5, $memory_1);
#line 346
undef($memory_5);
#line 347
$memory_5 = $memory_4->{'if'};
#line 347
module_checker_priv::check_cmd($memory_5, $memory_1);
#line 347
undef($memory_5);
#line 348
$memory_5 = $memory_1->{'return'};
#line 348
$memory_5 = $memory_5->{'was'};
#line 349
$memory_6 = $memory_4->{'elsif'};
#line 349
$memory_8 = 0;
#line 349
$memory_9 = 1;
#line 349
$memory_10 = c_rt_lib::array_len($memory_6);
#line 349
label_98:
#line 349
$memory_11 = c_rt_lib::to_nl($memory_8 >= $memory_10);
#line 349
if (c_rt_lib::check_true($memory_11)) {goto label_132;}
#line 349
$memory_7 = $memory_6->[$memory_8];
#line 350
$memory_12 = c_rt_lib::to_nl(0);
#line 350
$memory_13 = "return";
#line 350
$memory_13 = c_rt_lib::get_ref_hash($memory_1, $memory_13);
#line 350
$memory_14 = $memory_12;
#line 350
 if (c_rt_lib::get_hashcount($memory_13) > 1) {$memory_13 = {%{$memory_13}};}$memory_13->{'was'} = $memory_14;
#line 350
$memory_15 = "return";
#line 350
c_rt_lib::set_ref_hash($memory_1, $memory_15, $memory_13);
#line 350
undef($memory_15);
#line 350
undef($memory_12);
#line 350
undef($memory_13);
#line 350
undef($memory_14);
#line 351
$memory_12 = $memory_7->{'cond'};
#line 351
module_checker_priv::check_val($memory_12, $memory_1);
#line 351
undef($memory_12);
#line 352
$memory_12 = $memory_7->{'cmd'};
#line 352
module_checker_priv::check_cmd($memory_12, $memory_1);
#line 352
undef($memory_12);
#line 353
$memory_12 = $memory_1->{'return'};
#line 353
$memory_12 = $memory_12->{'was'};
#line 353
$memory_12 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_12));
#line 353
$memory_12 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_12));
#line 353
if (c_rt_lib::check_true($memory_12)) {goto label_128;}
#line 353
$memory_13 = c_rt_lib::to_nl(0);
#line 353
$memory_5 = $memory_13;
#line 353
undef($memory_13);
#line 353
goto label_128;
#line 353
label_128:
#line 353
undef($memory_12);
#line 354
$memory_8 = $memory_8 + $memory_9;
#line 354
goto label_98;
#line 354
label_132:
#line 354
undef($memory_6);
#line 354
undef($memory_7);
#line 354
undef($memory_8);
#line 354
undef($memory_9);
#line 354
undef($memory_10);
#line 354
undef($memory_11);
#line 355
$memory_6 = c_rt_lib::to_nl(0);
#line 355
$memory_7 = "return";
#line 355
$memory_7 = c_rt_lib::get_ref_hash($memory_1, $memory_7);
#line 355
$memory_8 = $memory_6;
#line 355
 if (c_rt_lib::get_hashcount($memory_7) > 1) {$memory_7 = {%{$memory_7}};}$memory_7->{'was'} = $memory_8;
#line 355
$memory_9 = "return";
#line 355
c_rt_lib::set_ref_hash($memory_1, $memory_9, $memory_7);
#line 355
undef($memory_9);
#line 355
undef($memory_6);
#line 355
undef($memory_7);
#line 355
undef($memory_8);
#line 356
$memory_6 = $memory_4->{'else'};
#line 356
module_checker_priv::check_cmd($memory_6, $memory_1);
#line 356
undef($memory_6);
#line 357
$memory_6 = $memory_1->{'return'};
#line 357
$memory_6 = $memory_6->{'was'};
#line 357
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 357
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 357
if (c_rt_lib::check_true($memory_6)) {goto label_162;}
#line 357
$memory_7 = c_rt_lib::to_nl(0);
#line 357
$memory_5 = $memory_7;
#line 357
undef($memory_7);
#line 357
goto label_162;
#line 357
label_162:
#line 357
undef($memory_6);
#line 358
$memory_6 = "return";
#line 358
$memory_6 = c_rt_lib::get_ref_hash($memory_1, $memory_6);
#line 358
$memory_7 = $memory_5;
#line 358
 if (c_rt_lib::get_hashcount($memory_6) > 1) {$memory_6 = {%{$memory_6}};}$memory_6->{'was'} = $memory_7;
#line 358
$memory_8 = "return";
#line 358
c_rt_lib::set_ref_hash($memory_1, $memory_8, $memory_6);
#line 358
undef($memory_8);
#line 358
undef($memory_6);
#line 358
undef($memory_7);
#line 358
undef($memory_5);
#line 358
undef($memory_4);
#line 359
goto label_868;
#line 359
label_176:
#line 359
$memory_4 = c_rt_lib::ov_as($memory_2, 'for');
#line 360
$memory_5 = module_checker_priv::save_block($memory_1);
#line 361
$memory_6 = $memory_4->{'start'};
#line 361
$memory_7 = c_rt_lib::ov_is($memory_6, 'value');
#line 361
if (c_rt_lib::check_true($memory_7)) {goto label_187;}
#line 363
$memory_7 = c_rt_lib::ov_is($memory_6, 'var_decl');
#line 363
if (c_rt_lib::check_true($memory_7)) {goto label_192;}
#line 363
$memory_7 = "NOMATCHALERT";
#line 363
$memory_7 = [$memory_7,$memory_6];
#line 363
die(dfile::ssave($memory_7));
#line 361
label_187:
#line 361
$memory_8 = c_rt_lib::ov_as($memory_6, 'value');
#line 362
module_checker_priv::check_val($memory_8, $memory_1);
#line 362
undef($memory_8);
#line 363
goto label_201;
#line 363
label_192:
#line 363
$memory_8 = c_rt_lib::ov_as($memory_6, 'var_decl');
#line 364
$memory_9 = c_rt_lib::to_nl(0);
#line 364
$memory_10 = c_rt_lib::to_nl(0);
#line 364
module_checker_priv::add_var_dec($memory_8, $memory_9, $memory_10, $memory_1);
#line 364
undef($memory_10);
#line 364
undef($memory_9);
#line 364
undef($memory_8);
#line 365
goto label_201;
#line 365
label_201:
#line 365
undef($memory_6);
#line 365
undef($memory_7);
#line 366
$memory_6 = $memory_4->{'cond'};
#line 366
module_checker_priv::check_val($memory_6, $memory_1);
#line 366
undef($memory_6);
#line 367
$memory_6 = c_rt_lib::to_nl(1);
#line 367
$memory_7 = $memory_6;
#line 367
 if (c_rt_lib::get_hashcount($memory_1) > 1) {$memory_1 = {%{$memory_1}};}$memory_1->{'in_loop'} = $memory_7;
#line 367
undef($memory_6);
#line 367
undef($memory_7);
#line 368
$memory_6 = $memory_4->{'cmd'};
#line 368
module_checker_priv::check_cmd($memory_6, $memory_1);
#line 368
undef($memory_6);
#line 369
$memory_6 = $memory_4->{'iter'};
#line 369
module_checker_priv::check_val($memory_6, $memory_1);
#line 369
undef($memory_6);
#line 370
module_checker_priv::load_block($memory_1, $memory_5);
#line 371
$memory_6 = c_rt_lib::to_nl(0);
#line 371
$memory_7 = "return";
#line 371
$memory_7 = c_rt_lib::get_ref_hash($memory_1, $memory_7);
#line 371
$memory_8 = $memory_6;
#line 371
 if (c_rt_lib::get_hashcount($memory_7) > 1) {$memory_7 = {%{$memory_7}};}$memory_7->{'was'} = $memory_8;
#line 371
$memory_9 = "return";
#line 371
c_rt_lib::set_ref_hash($memory_1, $memory_9, $memory_7);
#line 371
undef($memory_9);
#line 371
undef($memory_6);
#line 371
undef($memory_7);
#line 371
undef($memory_8);
#line 371
undef($memory_5);
#line 371
undef($memory_4);
#line 372
goto label_868;
#line 372
label_233:
#line 372
$memory_4 = c_rt_lib::ov_as($memory_2, 'fora');
#line 373
$memory_5 = module_checker_priv::save_block($memory_1);
#line 374
$memory_6 = $memory_4->{'array'};
#line 374
module_checker_priv::check_val($memory_6, $memory_1);
#line 374
undef($memory_6);
#line 375
$memory_6 = $memory_4->{'iter'};
#line 375
$memory_7 = c_rt_lib::to_nl(1);
#line 375
$memory_8 = c_rt_lib::to_nl(1);
#line 375
module_checker_priv::add_var_dec($memory_6, $memory_7, $memory_8, $memory_1);
#line 375
undef($memory_8);
#line 375
undef($memory_7);
#line 375
undef($memory_6);
#line 376
$memory_6 = c_rt_lib::to_nl(1);
#line 376
$memory_7 = $memory_6;
#line 376
 if (c_rt_lib::get_hashcount($memory_1) > 1) {$memory_1 = {%{$memory_1}};}$memory_1->{'in_loop'} = $memory_7;
#line 376
undef($memory_6);
#line 376
undef($memory_7);
#line 377
$memory_6 = $memory_4->{'cmd'};
#line 377
module_checker_priv::check_cmd($memory_6, $memory_1);
#line 377
undef($memory_6);
#line 378
module_checker_priv::load_block($memory_1, $memory_5);
#line 379
$memory_6 = c_rt_lib::to_nl(0);
#line 379
$memory_7 = "return";
#line 379
$memory_7 = c_rt_lib::get_ref_hash($memory_1, $memory_7);
#line 379
$memory_8 = $memory_6;
#line 379
 if (c_rt_lib::get_hashcount($memory_7) > 1) {$memory_7 = {%{$memory_7}};}$memory_7->{'was'} = $memory_8;
#line 379
$memory_9 = "return";
#line 379
c_rt_lib::set_ref_hash($memory_1, $memory_9, $memory_7);
#line 379
undef($memory_9);
#line 379
undef($memory_6);
#line 379
undef($memory_7);
#line 379
undef($memory_8);
#line 379
undef($memory_5);
#line 379
undef($memory_4);
#line 380
goto label_868;
#line 380
label_269:
#line 380
$memory_4 = c_rt_lib::ov_as($memory_2, 'forh');
#line 381
$memory_5 = module_checker_priv::save_block($memory_1);
#line 382
$memory_6 = $memory_4->{'hash'};
#line 382
module_checker_priv::check_val($memory_6, $memory_1);
#line 382
undef($memory_6);
#line 383
$memory_6 = $memory_4->{'val'};
#line 383
$memory_7 = c_rt_lib::to_nl(1);
#line 383
$memory_8 = c_rt_lib::to_nl(1);
#line 383
module_checker_priv::add_var_dec($memory_6, $memory_7, $memory_8, $memory_1);
#line 383
undef($memory_8);
#line 383
undef($memory_7);
#line 383
undef($memory_6);
#line 384
$memory_6 = $memory_4->{'key'};
#line 384
$memory_7 = c_rt_lib::to_nl(1);
#line 384
$memory_8 = c_rt_lib::to_nl(1);
#line 384
module_checker_priv::add_var_dec($memory_6, $memory_7, $memory_8, $memory_1);
#line 384
undef($memory_8);
#line 384
undef($memory_7);
#line 384
undef($memory_6);
#line 385
$memory_6 = c_rt_lib::to_nl(1);
#line 385
$memory_7 = $memory_6;
#line 385
 if (c_rt_lib::get_hashcount($memory_1) > 1) {$memory_1 = {%{$memory_1}};}$memory_1->{'in_loop'} = $memory_7;
#line 385
undef($memory_6);
#line 385
undef($memory_7);
#line 386
$memory_6 = $memory_4->{'cmd'};
#line 386
module_checker_priv::check_cmd($memory_6, $memory_1);
#line 386
undef($memory_6);
#line 387
module_checker_priv::load_block($memory_1, $memory_5);
#line 388
$memory_6 = c_rt_lib::to_nl(0);
#line 388
$memory_7 = "return";
#line 388
$memory_7 = c_rt_lib::get_ref_hash($memory_1, $memory_7);
#line 388
$memory_8 = $memory_6;
#line 388
 if (c_rt_lib::get_hashcount($memory_7) > 1) {$memory_7 = {%{$memory_7}};}$memory_7->{'was'} = $memory_8;
#line 388
$memory_9 = "return";
#line 388
c_rt_lib::set_ref_hash($memory_1, $memory_9, $memory_7);
#line 388
undef($memory_9);
#line 388
undef($memory_6);
#line 388
undef($memory_7);
#line 388
undef($memory_8);
#line 388
undef($memory_5);
#line 388
undef($memory_4);
#line 389
goto label_868;
#line 389
label_312:
#line 389
$memory_4 = c_rt_lib::ov_as($memory_2, 'loop');
#line 390
$memory_5 = module_checker_priv::save_block($memory_1);
#line 391
$memory_6 = c_rt_lib::to_nl(1);
#line 391
$memory_7 = $memory_6;
#line 391
 if (c_rt_lib::get_hashcount($memory_1) > 1) {$memory_1 = {%{$memory_1}};}$memory_1->{'in_loop'} = $memory_7;
#line 391
undef($memory_6);
#line 391
undef($memory_7);
#line 392
module_checker_priv::check_cmd($memory_4, $memory_1);
#line 393
module_checker_priv::load_block($memory_1, $memory_5);
#line 393
undef($memory_5);
#line 393
undef($memory_4);
#line 394
goto label_868;
#line 394
label_325:
#line 394
$memory_4 = c_rt_lib::ov_as($memory_2, 'rep');
#line 395
$memory_5 = module_checker_priv::save_block($memory_1);
#line 396
$memory_6 = $memory_4->{'count'};
#line 396
module_checker_priv::check_val($memory_6, $memory_1);
#line 396
undef($memory_6);
#line 397
$memory_6 = $memory_4->{'iter'};
#line 397
$memory_7 = c_rt_lib::to_nl(1);
#line 397
$memory_8 = c_rt_lib::to_nl(1);
#line 397
module_checker_priv::add_var_dec($memory_6, $memory_7, $memory_8, $memory_1);
#line 397
undef($memory_8);
#line 397
undef($memory_7);
#line 397
undef($memory_6);
#line 398
$memory_6 = c_rt_lib::to_nl(1);
#line 398
$memory_7 = $memory_6;
#line 398
 if (c_rt_lib::get_hashcount($memory_1) > 1) {$memory_1 = {%{$memory_1}};}$memory_1->{'in_loop'} = $memory_7;
#line 398
undef($memory_6);
#line 398
undef($memory_7);
#line 399
$memory_6 = $memory_4->{'cmd'};
#line 399
module_checker_priv::check_cmd($memory_6, $memory_1);
#line 399
undef($memory_6);
#line 400
module_checker_priv::load_block($memory_1, $memory_5);
#line 401
$memory_6 = c_rt_lib::to_nl(0);
#line 401
$memory_7 = "return";
#line 401
$memory_7 = c_rt_lib::get_ref_hash($memory_1, $memory_7);
#line 401
$memory_8 = $memory_6;
#line 401
 if (c_rt_lib::get_hashcount($memory_7) > 1) {$memory_7 = {%{$memory_7}};}$memory_7->{'was'} = $memory_8;
#line 401
$memory_9 = "return";
#line 401
c_rt_lib::set_ref_hash($memory_1, $memory_9, $memory_7);
#line 401
undef($memory_9);
#line 401
undef($memory_6);
#line 401
undef($memory_7);
#line 401
undef($memory_8);
#line 401
undef($memory_5);
#line 401
undef($memory_4);
#line 402
goto label_868;
#line 402
label_361:
#line 402
$memory_4 = c_rt_lib::ov_as($memory_2, 'while');
#line 403
$memory_5 = module_checker_priv::save_block($memory_1);
#line 404
$memory_6 = $memory_4->{'cond'};
#line 404
module_checker_priv::check_val($memory_6, $memory_1);
#line 404
undef($memory_6);
#line 405
$memory_6 = c_rt_lib::to_nl(1);
#line 405
$memory_7 = $memory_6;
#line 405
 if (c_rt_lib::get_hashcount($memory_1) > 1) {$memory_1 = {%{$memory_1}};}$memory_1->{'in_loop'} = $memory_7;
#line 405
undef($memory_6);
#line 405
undef($memory_7);
#line 406
$memory_6 = $memory_4->{'cmd'};
#line 406
module_checker_priv::check_cmd($memory_6, $memory_1);
#line 406
undef($memory_6);
#line 407
module_checker_priv::load_block($memory_1, $memory_5);
#line 408
$memory_6 = c_rt_lib::to_nl(0);
#line 408
$memory_7 = "return";
#line 408
$memory_7 = c_rt_lib::get_ref_hash($memory_1, $memory_7);
#line 408
$memory_8 = $memory_6;
#line 408
 if (c_rt_lib::get_hashcount($memory_7) > 1) {$memory_7 = {%{$memory_7}};}$memory_7->{'was'} = $memory_8;
#line 408
$memory_9 = "return";
#line 408
c_rt_lib::set_ref_hash($memory_1, $memory_9, $memory_7);
#line 408
undef($memory_9);
#line 408
undef($memory_6);
#line 408
undef($memory_7);
#line 408
undef($memory_8);
#line 408
undef($memory_5);
#line 408
undef($memory_4);
#line 409
goto label_868;
#line 409
label_390:
#line 409
$memory_4 = c_rt_lib::ov_as($memory_2, 'if_mod');
#line 410
$memory_5 = $memory_4->{'cond'};
#line 410
module_checker_priv::check_val($memory_5, $memory_1);
#line 410
undef($memory_5);
#line 411
$memory_5 = $memory_4->{'cmd'};
#line 411
module_checker_priv::check_cmd($memory_5, $memory_1);
#line 411
undef($memory_5);
#line 412
$memory_5 = c_rt_lib::to_nl(0);
#line 412
$memory_6 = "return";
#line 412
$memory_6 = c_rt_lib::get_ref_hash($memory_1, $memory_6);
#line 412
$memory_7 = $memory_5;
#line 412
 if (c_rt_lib::get_hashcount($memory_6) > 1) {$memory_6 = {%{$memory_6}};}$memory_6->{'was'} = $memory_7;
#line 412
$memory_8 = "return";
#line 412
c_rt_lib::set_ref_hash($memory_1, $memory_8, $memory_6);
#line 412
undef($memory_8);
#line 412
undef($memory_5);
#line 412
undef($memory_6);
#line 412
undef($memory_7);
#line 412
undef($memory_4);
#line 413
goto label_868;
#line 413
label_411:
#line 413
$memory_4 = c_rt_lib::ov_as($memory_2, 'unless_mod');
#line 414
$memory_5 = $memory_4->{'cond'};
#line 414
module_checker_priv::check_val($memory_5, $memory_1);
#line 414
undef($memory_5);
#line 415
$memory_5 = $memory_4->{'cmd'};
#line 415
module_checker_priv::check_cmd($memory_5, $memory_1);
#line 415
undef($memory_5);
#line 416
$memory_5 = c_rt_lib::to_nl(0);
#line 416
$memory_6 = "return";
#line 416
$memory_6 = c_rt_lib::get_ref_hash($memory_1, $memory_6);
#line 416
$memory_7 = $memory_5;
#line 416
 if (c_rt_lib::get_hashcount($memory_6) > 1) {$memory_6 = {%{$memory_6}};}$memory_6->{'was'} = $memory_7;
#line 416
$memory_8 = "return";
#line 416
c_rt_lib::set_ref_hash($memory_1, $memory_8, $memory_6);
#line 416
undef($memory_8);
#line 416
undef($memory_5);
#line 416
undef($memory_6);
#line 416
undef($memory_7);
#line 416
undef($memory_4);
#line 417
goto label_868;
#line 417
label_432:
#line 418
$memory_4 = $memory_1->{'in_loop'};
#line 418
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 418
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 418
if (c_rt_lib::check_true($memory_4)) {goto label_447;}
#line 419
$memory_5 = "errors";
#line 419
$memory_5 = c_rt_lib::get_ref_hash($memory_1, $memory_5);
#line 419
$memory_6 = "command break can be used only in cyclic block";
#line 419
module_checker_priv::add_error($memory_5, $memory_6);
#line 419
undef($memory_6);
#line 419
$memory_6 = "errors";
#line 419
c_rt_lib::set_ref_hash($memory_1, $memory_6, $memory_5);
#line 419
undef($memory_6);
#line 419
undef($memory_5);
#line 420
goto label_447;
#line 420
label_447:
#line 420
undef($memory_4);
#line 421
goto label_868;
#line 421
label_450:
#line 422
$memory_4 = $memory_1->{'in_loop'};
#line 422
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 422
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 422
if (c_rt_lib::check_true($memory_4)) {goto label_465;}
#line 423
$memory_5 = "errors";
#line 423
$memory_5 = c_rt_lib::get_ref_hash($memory_1, $memory_5);
#line 423
$memory_6 = "command continue can be used only in cyclic block";
#line 423
module_checker_priv::add_error($memory_5, $memory_6);
#line 423
undef($memory_6);
#line 423
$memory_6 = "errors";
#line 423
c_rt_lib::set_ref_hash($memory_1, $memory_6, $memory_5);
#line 423
undef($memory_6);
#line 423
undef($memory_5);
#line 424
goto label_465;
#line 424
label_465:
#line 424
undef($memory_4);
#line 425
goto label_868;
#line 425
label_468:
#line 425
$memory_4 = c_rt_lib::ov_as($memory_2, 'match');
#line 426
$memory_5 = $memory_4->{'val'};
#line 426
module_checker_priv::check_val($memory_5, $memory_1);
#line 426
undef($memory_5);
#line 427
$memory_5 = c_rt_lib::to_nl(1);
#line 428
$memory_6 = $memory_4->{'branch_list'};
#line 428
$memory_8 = 0;
#line 428
$memory_9 = 1;
#line 428
$memory_10 = c_rt_lib::array_len($memory_6);
#line 428
label_478:
#line 428
$memory_11 = c_rt_lib::to_nl($memory_8 >= $memory_10);
#line 428
if (c_rt_lib::check_true($memory_11)) {goto label_535;}
#line 428
$memory_7 = $memory_6->[$memory_8];
#line 429
$memory_12 = c_rt_lib::to_nl(0);
#line 429
$memory_13 = "return";
#line 429
$memory_13 = c_rt_lib::get_ref_hash($memory_1, $memory_13);
#line 429
$memory_14 = $memory_12;
#line 429
 if (c_rt_lib::get_hashcount($memory_13) > 1) {$memory_13 = {%{$memory_13}};}$memory_13->{'was'} = $memory_14;
#line 429
$memory_15 = "return";
#line 429
c_rt_lib::set_ref_hash($memory_1, $memory_15, $memory_13);
#line 429
undef($memory_15);
#line 429
undef($memory_12);
#line 429
undef($memory_13);
#line 429
undef($memory_14);
#line 430
$memory_12 = module_checker_priv::save_block($memory_1);
#line 431
$memory_13 = $memory_7->{'variant'};
#line 431
$memory_13 = $memory_13->{'value'};
#line 431
$memory_14 = c_rt_lib::ov_is($memory_13, 'none');
#line 431
if (c_rt_lib::check_true($memory_14)) {goto label_503;}
#line 432
$memory_14 = c_rt_lib::ov_is($memory_13, 'value');
#line 432
if (c_rt_lib::check_true($memory_14)) {goto label_505;}
#line 432
$memory_14 = "NOMATCHALERT";
#line 432
$memory_14 = [$memory_14,$memory_13];
#line 432
die(dfile::ssave($memory_14));
#line 431
label_503:
#line 432
goto label_514;
#line 432
label_505:
#line 432
$memory_15 = c_rt_lib::ov_as($memory_13, 'value');
#line 433
$memory_16 = c_rt_lib::to_nl(0);
#line 433
$memory_17 = c_rt_lib::to_nl(1);
#line 433
module_checker_priv::add_var_dec($memory_15, $memory_16, $memory_17, $memory_1);
#line 433
undef($memory_17);
#line 433
undef($memory_16);
#line 433
undef($memory_15);
#line 434
goto label_514;
#line 434
label_514:
#line 434
undef($memory_13);
#line 434
undef($memory_14);
#line 435
$memory_13 = $memory_7->{'cmd'};
#line 435
module_checker_priv::check_cmd($memory_13, $memory_1);
#line 435
undef($memory_13);
#line 436
$memory_13 = $memory_1->{'return'};
#line 436
$memory_13 = $memory_13->{'was'};
#line 436
$memory_13 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_13));
#line 436
$memory_13 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_13));
#line 436
if (c_rt_lib::check_true($memory_13)) {goto label_529;}
#line 436
$memory_14 = c_rt_lib::to_nl(0);
#line 436
$memory_5 = $memory_14;
#line 436
undef($memory_14);
#line 436
goto label_529;
#line 436
label_529:
#line 436
undef($memory_13);
#line 437
module_checker_priv::load_block($memory_1, $memory_12);
#line 437
undef($memory_12);
#line 438
$memory_8 = $memory_8 + $memory_9;
#line 438
goto label_478;
#line 438
label_535:
#line 438
undef($memory_6);
#line 438
undef($memory_7);
#line 438
undef($memory_8);
#line 438
undef($memory_9);
#line 438
undef($memory_10);
#line 438
undef($memory_11);
#line 439
$memory_6 = "return";
#line 439
$memory_6 = c_rt_lib::get_ref_hash($memory_1, $memory_6);
#line 439
$memory_7 = $memory_5;
#line 439
 if (c_rt_lib::get_hashcount($memory_6) > 1) {$memory_6 = {%{$memory_6}};}$memory_6->{'was'} = $memory_7;
#line 439
$memory_8 = "return";
#line 439
c_rt_lib::set_ref_hash($memory_1, $memory_8, $memory_6);
#line 439
undef($memory_8);
#line 439
undef($memory_6);
#line 439
undef($memory_7);
#line 439
undef($memory_5);
#line 439
undef($memory_4);
#line 440
goto label_868;
#line 440
label_554:
#line 440
$memory_4 = c_rt_lib::ov_as($memory_2, 'value');
#line 441
module_checker_priv::check_val($memory_4, $memory_1);
#line 441
undef($memory_4);
#line 442
goto label_868;
#line 442
label_559:
#line 442
$memory_4 = c_rt_lib::ov_as($memory_2, 'return');
#line 443
module_checker_priv::check_val($memory_4, $memory_1);
#line 444
$memory_5 = $memory_1->{'return'};
#line 444
$memory_5 = $memory_5->{'arg'};
#line 444
$memory_6 = c_rt_lib::ov_is($memory_5, 'value');
#line 444
if (c_rt_lib::check_true($memory_6)) {goto label_577;}
#line 446
$memory_6 = c_rt_lib::ov_is($memory_5, 'none');
#line 446
if (c_rt_lib::check_true($memory_6)) {goto label_595;}
#line 448
$memory_6 = c_rt_lib::ov_is($memory_5, 'was_value');
#line 448
if (c_rt_lib::check_true($memory_6)) {goto label_615;}
#line 451
$memory_6 = c_rt_lib::ov_is($memory_5, 'was_void');
#line 451
if (c_rt_lib::check_true($memory_6)) {goto label_651;}
#line 454
$memory_6 = c_rt_lib::ov_is($memory_5, 'void');
#line 454
if (c_rt_lib::check_true($memory_6)) {goto label_688;}
#line 454
$memory_6 = "NOMATCHALERT";
#line 454
$memory_6 = [$memory_6,$memory_5];
#line 454
die(dfile::ssave($memory_6));
#line 444
label_577:
#line 445
$memory_7 = $memory_4->{'value'};
#line 445
$memory_7 = c_rt_lib::ov_is($memory_7, 'nop');
#line 445
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 445
if (c_rt_lib::check_true($memory_7)) {goto label_592;}
#line 445
$memory_8 = "errors";
#line 445
$memory_8 = c_rt_lib::get_ref_hash($memory_1, $memory_8);
#line 445
$memory_9 = "return command without value";
#line 445
module_checker_priv::add_error($memory_8, $memory_9);
#line 445
undef($memory_9);
#line 445
$memory_9 = "errors";
#line 445
c_rt_lib::set_ref_hash($memory_1, $memory_9, $memory_8);
#line 445
undef($memory_9);
#line 445
undef($memory_8);
#line 445
goto label_592;
#line 445
label_592:
#line 445
undef($memory_7);
#line 446
goto label_707;
#line 446
label_595:
#line 447
$memory_7 = $memory_4->{'value'};
#line 447
$memory_7 = c_rt_lib::ov_is($memory_7, 'nop');
#line 447
if (c_rt_lib::check_true($memory_7)) {goto label_601;}
#line 447
$memory_7 = c_rt_lib::ov_mk_none('was_value');
#line 447
goto label_603;
#line 447
label_601:
#line 447
$memory_7 = c_rt_lib::ov_mk_none('was_void');
#line 447
label_603:
#line 447
$memory_8 = "return";
#line 447
$memory_8 = c_rt_lib::get_ref_hash($memory_1, $memory_8);
#line 447
$memory_9 = $memory_7;
#line 447
 if (c_rt_lib::get_hashcount($memory_8) > 1) {$memory_8 = {%{$memory_8}};}$memory_8->{'arg'} = $memory_9;
#line 447
$memory_10 = "return";
#line 447
c_rt_lib::set_ref_hash($memory_1, $memory_10, $memory_8);
#line 447
undef($memory_10);
#line 447
undef($memory_7);
#line 447
undef($memory_8);
#line 447
undef($memory_9);
#line 448
goto label_707;
#line 448
label_615:
#line 449
$memory_7 = $memory_4->{'value'};
#line 449
$memory_7 = c_rt_lib::ov_is($memory_7, 'nop');
#line 449
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 449
if (c_rt_lib::check_true($memory_7)) {goto label_630;}
#line 449
$memory_8 = "errors";
#line 449
$memory_8 = c_rt_lib::get_ref_hash($memory_1, $memory_8);
#line 449
$memory_9 = "previously was return with value";
#line 449
module_checker_priv::add_error($memory_8, $memory_9);
#line 449
undef($memory_9);
#line 449
$memory_9 = "errors";
#line 449
c_rt_lib::set_ref_hash($memory_1, $memory_9, $memory_8);
#line 449
undef($memory_9);
#line 449
undef($memory_8);
#line 449
goto label_630;
#line 449
label_630:
#line 449
undef($memory_7);
#line 450
$memory_7 = $memory_4->{'value'};
#line 450
$memory_7 = c_rt_lib::ov_is($memory_7, 'nop');
#line 450
if (c_rt_lib::check_true($memory_7)) {goto label_637;}
#line 450
$memory_7 = c_rt_lib::ov_mk_none('was_value');
#line 450
goto label_639;
#line 450
label_637:
#line 450
$memory_7 = c_rt_lib::ov_mk_none('was_void');
#line 450
label_639:
#line 450
$memory_8 = "return";
#line 450
$memory_8 = c_rt_lib::get_ref_hash($memory_1, $memory_8);
#line 450
$memory_9 = $memory_7;
#line 450
 if (c_rt_lib::get_hashcount($memory_8) > 1) {$memory_8 = {%{$memory_8}};}$memory_8->{'arg'} = $memory_9;
#line 450
$memory_10 = "return";
#line 450
c_rt_lib::set_ref_hash($memory_1, $memory_10, $memory_8);
#line 450
undef($memory_10);
#line 450
undef($memory_7);
#line 450
undef($memory_8);
#line 450
undef($memory_9);
#line 451
goto label_707;
#line 451
label_651:
#line 452
$memory_7 = $memory_4->{'value'};
#line 452
$memory_7 = c_rt_lib::ov_is($memory_7, 'nop');
#line 452
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 452
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 452
if (c_rt_lib::check_true($memory_7)) {goto label_667;}
#line 452
$memory_8 = "errors";
#line 452
$memory_8 = c_rt_lib::get_ref_hash($memory_1, $memory_8);
#line 452
$memory_9 = "previously was empty return";
#line 452
module_checker_priv::add_error($memory_8, $memory_9);
#line 452
undef($memory_9);
#line 452
$memory_9 = "errors";
#line 452
c_rt_lib::set_ref_hash($memory_1, $memory_9, $memory_8);
#line 452
undef($memory_9);
#line 452
undef($memory_8);
#line 452
goto label_667;
#line 452
label_667:
#line 452
undef($memory_7);
#line 453
$memory_7 = $memory_4->{'value'};
#line 453
$memory_7 = c_rt_lib::ov_is($memory_7, 'nop');
#line 453
if (c_rt_lib::check_true($memory_7)) {goto label_674;}
#line 453
$memory_7 = c_rt_lib::ov_mk_none('was_value');
#line 453
goto label_676;
#line 453
label_674:
#line 453
$memory_7 = c_rt_lib::ov_mk_none('was_void');
#line 453
label_676:
#line 453
$memory_8 = "return";
#line 453
$memory_8 = c_rt_lib::get_ref_hash($memory_1, $memory_8);
#line 453
$memory_9 = $memory_7;
#line 453
 if (c_rt_lib::get_hashcount($memory_8) > 1) {$memory_8 = {%{$memory_8}};}$memory_8->{'arg'} = $memory_9;
#line 453
$memory_10 = "return";
#line 453
c_rt_lib::set_ref_hash($memory_1, $memory_10, $memory_8);
#line 453
undef($memory_10);
#line 453
undef($memory_7);
#line 453
undef($memory_8);
#line 453
undef($memory_9);
#line 454
goto label_707;
#line 454
label_688:
#line 455
$memory_7 = $memory_4->{'value'};
#line 455
$memory_7 = c_rt_lib::ov_is($memory_7, 'nop');
#line 455
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 455
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 455
if (c_rt_lib::check_true($memory_7)) {goto label_704;}
#line 455
$memory_8 = "errors";
#line 455
$memory_8 = c_rt_lib::get_ref_hash($memory_1, $memory_8);
#line 455
$memory_9 = "return value in void function";
#line 455
module_checker_priv::add_error($memory_8, $memory_9);
#line 455
undef($memory_9);
#line 455
$memory_9 = "errors";
#line 455
c_rt_lib::set_ref_hash($memory_1, $memory_9, $memory_8);
#line 455
undef($memory_9);
#line 455
undef($memory_8);
#line 455
goto label_704;
#line 455
label_704:
#line 455
undef($memory_7);
#line 456
goto label_707;
#line 456
label_707:
#line 456
undef($memory_5);
#line 456
undef($memory_6);
#line 457
$memory_5 = c_rt_lib::to_nl(1);
#line 457
$memory_6 = "return";
#line 457
$memory_6 = c_rt_lib::get_ref_hash($memory_1, $memory_6);
#line 457
$memory_7 = $memory_5;
#line 457
 if (c_rt_lib::get_hashcount($memory_6) > 1) {$memory_6 = {%{$memory_6}};}$memory_6->{'was'} = $memory_7;
#line 457
$memory_8 = "return";
#line 457
c_rt_lib::set_ref_hash($memory_1, $memory_8, $memory_6);
#line 457
undef($memory_8);
#line 457
undef($memory_5);
#line 457
undef($memory_6);
#line 457
undef($memory_7);
#line 457
undef($memory_4);
#line 458
goto label_868;
#line 458
label_723:
#line 458
$memory_4 = c_rt_lib::ov_as($memory_2, 'block');
#line 459
$memory_5 = module_checker_priv::save_block($memory_1);
#line 460
$memory_7 = 0;
#line 460
$memory_8 = 1;
#line 460
$memory_9 = c_rt_lib::array_len($memory_4);
#line 460
label_729:
#line 460
$memory_10 = c_rt_lib::to_nl($memory_7 >= $memory_9);
#line 460
if (c_rt_lib::check_true($memory_10)) {goto label_736;}
#line 460
$memory_6 = $memory_4->[$memory_7];
#line 461
module_checker_priv::check_cmd($memory_6, $memory_1);
#line 462
$memory_7 = $memory_7 + $memory_8;
#line 462
goto label_729;
#line 462
label_736:
#line 462
undef($memory_6);
#line 462
undef($memory_7);
#line 462
undef($memory_8);
#line 462
undef($memory_9);
#line 462
undef($memory_10);
#line 463
module_checker_priv::load_block($memory_1, $memory_5);
#line 463
undef($memory_5);
#line 463
undef($memory_4);
#line 464
goto label_868;
#line 464
label_746:
#line 464
$memory_4 = c_rt_lib::ov_as($memory_2, 'die');
#line 465
$memory_6 = 0;
#line 465
$memory_7 = 1;
#line 465
$memory_8 = c_rt_lib::array_len($memory_4);
#line 465
label_751:
#line 465
$memory_9 = c_rt_lib::to_nl($memory_6 >= $memory_8);
#line 465
if (c_rt_lib::check_true($memory_9)) {goto label_758;}
#line 465
$memory_5 = $memory_4->[$memory_6];
#line 466
module_checker_priv::check_val($memory_5, $memory_1);
#line 467
$memory_6 = $memory_6 + $memory_7;
#line 467
goto label_751;
#line 467
label_758:
#line 467
undef($memory_5);
#line 467
undef($memory_6);
#line 467
undef($memory_7);
#line 467
undef($memory_8);
#line 467
undef($memory_9);
#line 468
$memory_5 = c_rt_lib::to_nl(1);
#line 468
$memory_6 = "return";
#line 468
$memory_6 = c_rt_lib::get_ref_hash($memory_1, $memory_6);
#line 468
$memory_7 = $memory_5;
#line 468
 if (c_rt_lib::get_hashcount($memory_6) > 1) {$memory_6 = {%{$memory_6}};}$memory_6->{'was'} = $memory_7;
#line 468
$memory_8 = "return";
#line 468
c_rt_lib::set_ref_hash($memory_1, $memory_8, $memory_6);
#line 468
undef($memory_8);
#line 468
undef($memory_5);
#line 468
undef($memory_6);
#line 468
undef($memory_7);
#line 468
undef($memory_4);
#line 469
goto label_868;
#line 469
label_777:
#line 469
$memory_4 = c_rt_lib::ov_as($memory_2, 'var_decl');
#line 470
$memory_5 = c_rt_lib::to_nl(0);
#line 470
$memory_6 = c_rt_lib::to_nl(0);
#line 470
module_checker_priv::add_var_dec($memory_4, $memory_5, $memory_6, $memory_1);
#line 470
undef($memory_6);
#line 470
undef($memory_5);
#line 470
undef($memory_4);
#line 471
goto label_868;
#line 471
label_786:
#line 471
$memory_4 = c_rt_lib::ov_as($memory_2, 'try');
#line 472
$memory_5 = c_rt_lib::ov_is($memory_4, 'decl');
#line 472
if (c_rt_lib::check_true($memory_5)) {goto label_797;}
#line 474
$memory_5 = c_rt_lib::ov_is($memory_4, 'lval');
#line 474
if (c_rt_lib::check_true($memory_5)) {goto label_806;}
#line 476
$memory_5 = c_rt_lib::ov_is($memory_4, 'expr');
#line 476
if (c_rt_lib::check_true($memory_5)) {goto label_817;}
#line 476
$memory_5 = "NOMATCHALERT";
#line 476
$memory_5 = [$memory_5,$memory_4];
#line 476
die(dfile::ssave($memory_5));
#line 472
label_797:
#line 472
$memory_6 = c_rt_lib::ov_as($memory_4, 'decl');
#line 473
$memory_7 = c_rt_lib::to_nl(0);
#line 473
$memory_8 = c_rt_lib::to_nl(0);
#line 473
module_checker_priv::add_var_dec($memory_6, $memory_7, $memory_8, $memory_1);
#line 473
undef($memory_8);
#line 473
undef($memory_7);
#line 473
undef($memory_6);
#line 474
goto label_822;
#line 474
label_806:
#line 474
$memory_6 = c_rt_lib::ov_as($memory_4, 'lval');
#line 475
$memory_8 = $memory_0->{'debug'};
#line 475
$memory_9 = c_rt_lib::ov_mk_arg('bin_op', $memory_6);
#line 475
$memory_7 = {debug => $memory_8,value => $memory_9,};
#line 475
undef($memory_8);
#line 475
undef($memory_9);
#line 475
module_checker_priv::check_val($memory_7, $memory_1);
#line 475
undef($memory_7);
#line 475
undef($memory_6);
#line 476
goto label_822;
#line 476
label_817:
#line 476
$memory_6 = c_rt_lib::ov_as($memory_4, 'expr');
#line 477
module_checker_priv::check_val($memory_6, $memory_1);
#line 477
undef($memory_6);
#line 478
goto label_822;
#line 478
label_822:
#line 478
undef($memory_5);
#line 478
undef($memory_4);
#line 479
goto label_868;
#line 479
label_826:
#line 479
$memory_4 = c_rt_lib::ov_as($memory_2, 'ensure');
#line 480
$memory_5 = c_rt_lib::ov_is($memory_4, 'decl');
#line 480
if (c_rt_lib::check_true($memory_5)) {goto label_837;}
#line 482
$memory_5 = c_rt_lib::ov_is($memory_4, 'lval');
#line 482
if (c_rt_lib::check_true($memory_5)) {goto label_846;}
#line 484
$memory_5 = c_rt_lib::ov_is($memory_4, 'expr');
#line 484
if (c_rt_lib::check_true($memory_5)) {goto label_857;}
#line 484
$memory_5 = "NOMATCHALERT";
#line 484
$memory_5 = [$memory_5,$memory_4];
#line 484
die(dfile::ssave($memory_5));
#line 480
label_837:
#line 480
$memory_6 = c_rt_lib::ov_as($memory_4, 'decl');
#line 481
$memory_7 = c_rt_lib::to_nl(0);
#line 481
$memory_8 = c_rt_lib::to_nl(0);
#line 481
module_checker_priv::add_var_dec($memory_6, $memory_7, $memory_8, $memory_1);
#line 481
undef($memory_8);
#line 481
undef($memory_7);
#line 481
undef($memory_6);
#line 482
goto label_862;
#line 482
label_846:
#line 482
$memory_6 = c_rt_lib::ov_as($memory_4, 'lval');
#line 483
$memory_8 = $memory_0->{'debug'};
#line 483
$memory_9 = c_rt_lib::ov_mk_arg('bin_op', $memory_6);
#line 483
$memory_7 = {debug => $memory_8,value => $memory_9,};
#line 483
undef($memory_8);
#line 483
undef($memory_9);
#line 483
module_checker_priv::check_val($memory_7, $memory_1);
#line 483
undef($memory_7);
#line 483
undef($memory_6);
#line 484
goto label_862;
#line 484
label_857:
#line 484
$memory_6 = c_rt_lib::ov_as($memory_4, 'expr');
#line 485
module_checker_priv::check_val($memory_6, $memory_1);
#line 485
undef($memory_6);
#line 486
goto label_862;
#line 486
label_862:
#line 486
undef($memory_5);
#line 486
undef($memory_4);
#line 487
goto label_868;
#line 487
label_866:
#line 488
goto label_868;
#line 488
label_868:
#line 488
undef($memory_2);
#line 488
undef($memory_3);
#line 488
undef($memory_0);
#line 488
$_[1] = $memory_1;return;
$_[1] = $memory_1;}

sub module_checker_priv::check_lvalue($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;$memory_0 = $_[0];$memory_1 = $_[1];Scalar::Util::weaken($_[1]) if ref($_[1]);
#line 492
$memory_2 = $memory_0->{'value'};
#line 492
$memory_2 = c_rt_lib::ov_is($memory_2, 'var');
#line 492
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 492
if (c_rt_lib::check_true($memory_2)) {goto label_14;}
#line 493
$memory_3 = $memory_0->{'value'};
#line 493
$memory_3 = c_rt_lib::ov_as($memory_3, 'var');
#line 493
$memory_4 = c_rt_lib::ov_mk_none('mod');
#line 493
module_checker_priv::use_var($memory_3, $memory_4, $memory_1);
#line 493
undef($memory_4);
#line 493
undef($memory_3);
#line 494
undef($memory_0);
#line 494
undef($memory_2);
#line 494
$_[1] = $memory_1;return;
#line 495
goto label_55;
#line 495
label_14:
#line 495
$memory_2 = $memory_0->{'value'};
#line 495
$memory_2 = c_rt_lib::ov_is($memory_2, 'bin_op');
#line 495
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 495
if (c_rt_lib::check_true($memory_2)) {goto label_55;}
#line 496
$memory_3 = $memory_0->{'value'};
#line 496
$memory_3 = c_rt_lib::ov_as($memory_3, 'bin_op');
#line 497
$memory_4 = $memory_3->{'op'};
#line 497
$memory_5 = "->";
#line 497
$memory_4 = c_rt_lib::to_nl($memory_4 eq $memory_5);
#line 497
undef($memory_5);
#line 497
if (c_rt_lib::check_true($memory_4)) {goto label_30;}
#line 497
$memory_4 = $memory_3->{'op'};
#line 497
$memory_5 = "ARRAY_INDEX";
#line 497
$memory_4 = c_rt_lib::to_nl($memory_4 eq $memory_5);
#line 497
undef($memory_5);
#line 497
label_30:
#line 497
if (c_rt_lib::check_true($memory_4)) {goto label_36;}
#line 497
$memory_4 = $memory_3->{'op'};
#line 497
$memory_5 = "HASH_INDEX";
#line 497
$memory_4 = c_rt_lib::to_nl($memory_4 eq $memory_5);
#line 497
undef($memory_5);
#line 497
label_36:
#line 497
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 497
if (c_rt_lib::check_true($memory_4)) {goto label_51;}
#line 498
$memory_5 = $memory_3->{'left'};
#line 498
module_checker_priv::check_lvalue($memory_5, $memory_1);
#line 498
undef($memory_5);
#line 499
$memory_5 = $memory_3->{'right'};
#line 499
module_checker_priv::check_val($memory_5, $memory_1);
#line 499
undef($memory_5);
#line 500
undef($memory_0);
#line 500
undef($memory_2);
#line 500
undef($memory_3);
#line 500
undef($memory_4);
#line 500
$_[1] = $memory_1;return;
#line 501
goto label_51;
#line 501
label_51:
#line 501
undef($memory_4);
#line 501
undef($memory_3);
#line 502
goto label_55;
#line 502
label_55:
#line 502
undef($memory_2);
#line 503
$memory_2 = "errors";
#line 503
$memory_2 = c_rt_lib::get_ref_hash($memory_1, $memory_2);
#line 503
$memory_3 = "invalid expression for lvalue";
#line 503
module_checker_priv::add_error($memory_2, $memory_3);
#line 503
undef($memory_3);
#line 503
$memory_3 = "errors";
#line 503
c_rt_lib::set_ref_hash($memory_1, $memory_3, $memory_2);
#line 503
undef($memory_3);
#line 503
undef($memory_2);
#line 503
undef($memory_0);
#line 503
$_[1] = $memory_1;return;
$_[1] = $memory_1;}

sub module_checker_priv::check_val($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;my $memory_13;$memory_0 = $_[0];$memory_1 = $_[1];Scalar::Util::weaken($_[1]) if ref($_[1]);
#line 507
$memory_2 = $memory_0->{'value'};
#line 507
$memory_3 = c_rt_lib::ov_is($memory_2, 'ternary_op');
#line 507
if (c_rt_lib::check_true($memory_3)) {goto label_38;}
#line 511
$memory_3 = c_rt_lib::ov_is($memory_2, 'parenthesis');
#line 511
if (c_rt_lib::check_true($memory_3)) {goto label_51;}
#line 513
$memory_3 = c_rt_lib::ov_is($memory_2, 'variant');
#line 513
if (c_rt_lib::check_true($memory_3)) {goto label_56;}
#line 515
$memory_3 = c_rt_lib::ov_is($memory_2, 'const');
#line 515
if (c_rt_lib::check_true($memory_3)) {goto label_63;}
#line 516
$memory_3 = c_rt_lib::ov_is($memory_2, 'string');
#line 516
if (c_rt_lib::check_true($memory_3)) {goto label_67;}
#line 517
$memory_3 = c_rt_lib::ov_is($memory_2, 'nop');
#line 517
if (c_rt_lib::check_true($memory_3)) {goto label_71;}
#line 518
$memory_3 = c_rt_lib::ov_is($memory_2, 'hash_key');
#line 518
if (c_rt_lib::check_true($memory_3)) {goto label_73;}
#line 519
$memory_3 = c_rt_lib::ov_is($memory_2, 'arr_decl');
#line 519
if (c_rt_lib::check_true($memory_3)) {goto label_77;}
#line 523
$memory_3 = c_rt_lib::ov_is($memory_2, 'hash_decl');
#line 523
if (c_rt_lib::check_true($memory_3)) {goto label_97;}
#line 528
$memory_3 = c_rt_lib::ov_is($memory_2, 'var');
#line 528
if (c_rt_lib::check_true($memory_3)) {goto label_119;}
#line 530
$memory_3 = c_rt_lib::ov_is($memory_2, 'bin_op');
#line 530
if (c_rt_lib::check_true($memory_3)) {goto label_126;}
#line 542
$memory_3 = c_rt_lib::ov_is($memory_2, 'var_op');
#line 542
if (c_rt_lib::check_true($memory_3)) {goto label_193;}
#line 544
$memory_3 = c_rt_lib::ov_is($memory_2, 'unary_op');
#line 544
if (c_rt_lib::check_true($memory_3)) {goto label_200;}
#line 546
$memory_3 = c_rt_lib::ov_is($memory_2, 'fun_label');
#line 546
if (c_rt_lib::check_true($memory_3)) {goto label_207;}
#line 548
$memory_3 = c_rt_lib::ov_is($memory_2, 'fun_val');
#line 548
if (c_rt_lib::check_true($memory_3)) {goto label_216;}
#line 557
$memory_3 = c_rt_lib::ov_is($memory_2, 'post_inc');
#line 557
if (c_rt_lib::check_true($memory_3)) {goto label_263;}
#line 559
$memory_3 = c_rt_lib::ov_is($memory_2, 'post_dec');
#line 559
if (c_rt_lib::check_true($memory_3)) {goto label_268;}
#line 559
$memory_3 = "NOMATCHALERT";
#line 559
$memory_3 = [$memory_3,$memory_2];
#line 559
die(dfile::ssave($memory_3));
#line 507
label_38:
#line 507
$memory_4 = c_rt_lib::ov_as($memory_2, 'ternary_op');
#line 508
$memory_5 = $memory_4->{'fst'};
#line 508
module_checker_priv::check_val($memory_5, $memory_1);
#line 508
undef($memory_5);
#line 509
$memory_5 = $memory_4->{'snd'};
#line 509
module_checker_priv::check_val($memory_5, $memory_1);
#line 509
undef($memory_5);
#line 510
$memory_5 = $memory_4->{'thrd'};
#line 510
module_checker_priv::check_val($memory_5, $memory_1);
#line 510
undef($memory_5);
#line 510
undef($memory_4);
#line 511
goto label_273;
#line 511
label_51:
#line 511
$memory_4 = c_rt_lib::ov_as($memory_2, 'parenthesis');
#line 512
module_checker_priv::check_val($memory_4, $memory_1);
#line 512
undef($memory_4);
#line 513
goto label_273;
#line 513
label_56:
#line 513
$memory_4 = c_rt_lib::ov_as($memory_2, 'variant');
#line 514
$memory_5 = $memory_4->{'var'};
#line 514
module_checker_priv::check_val($memory_5, $memory_1);
#line 514
undef($memory_5);
#line 514
undef($memory_4);
#line 515
goto label_273;
#line 515
label_63:
#line 515
$memory_4 = c_rt_lib::ov_as($memory_2, 'const');
#line 515
undef($memory_4);
#line 516
goto label_273;
#line 516
label_67:
#line 516
$memory_4 = c_rt_lib::ov_as($memory_2, 'string');
#line 516
undef($memory_4);
#line 517
goto label_273;
#line 517
label_71:
#line 518
goto label_273;
#line 518
label_73:
#line 518
$memory_4 = c_rt_lib::ov_as($memory_2, 'hash_key');
#line 518
undef($memory_4);
#line 519
goto label_273;
#line 519
label_77:
#line 519
$memory_4 = c_rt_lib::ov_as($memory_2, 'arr_decl');
#line 520
$memory_6 = 0;
#line 520
$memory_7 = 1;
#line 520
$memory_8 = c_rt_lib::array_len($memory_4);
#line 520
label_82:
#line 520
$memory_9 = c_rt_lib::to_nl($memory_6 >= $memory_8);
#line 520
if (c_rt_lib::check_true($memory_9)) {goto label_89;}
#line 520
$memory_5 = $memory_4->[$memory_6];
#line 521
module_checker_priv::check_val($memory_5, $memory_1);
#line 522
$memory_6 = $memory_6 + $memory_7;
#line 522
goto label_82;
#line 522
label_89:
#line 522
undef($memory_5);
#line 522
undef($memory_6);
#line 522
undef($memory_7);
#line 522
undef($memory_8);
#line 522
undef($memory_9);
#line 522
undef($memory_4);
#line 523
goto label_273;
#line 523
label_97:
#line 523
$memory_4 = c_rt_lib::ov_as($memory_2, 'hash_decl');
#line 524
$memory_6 = 0;
#line 524
$memory_7 = 1;
#line 524
$memory_8 = c_rt_lib::array_len($memory_4);
#line 524
label_102:
#line 524
$memory_9 = c_rt_lib::to_nl($memory_6 >= $memory_8);
#line 524
if (c_rt_lib::check_true($memory_9)) {goto label_111;}
#line 524
$memory_5 = $memory_4->[$memory_6];
#line 526
$memory_10 = $memory_5->{'val'};
#line 526
module_checker_priv::check_val($memory_10, $memory_1);
#line 526
undef($memory_10);
#line 527
$memory_6 = $memory_6 + $memory_7;
#line 527
goto label_102;
#line 527
label_111:
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
#line 527
undef($memory_4);
#line 528
goto label_273;
#line 528
label_119:
#line 528
$memory_4 = c_rt_lib::ov_as($memory_2, 'var');
#line 529
$memory_5 = c_rt_lib::ov_mk_none('get');
#line 529
module_checker_priv::use_var($memory_4, $memory_5, $memory_1);
#line 529
undef($memory_5);
#line 529
undef($memory_4);
#line 530
goto label_273;
#line 530
label_126:
#line 530
$memory_4 = c_rt_lib::ov_as($memory_2, 'bin_op');
#line 531
$memory_5 = $memory_4->{'op'};
#line 532
$memory_6 = "=";
#line 532
$memory_6 = c_rt_lib::to_nl($memory_5 eq $memory_6);
#line 532
if (c_rt_lib::check_true($memory_6)) {goto label_134;}
#line 532
$memory_6 = "+=";
#line 532
$memory_6 = c_rt_lib::to_nl($memory_5 eq $memory_6);
#line 532
label_134:
#line 532
if (c_rt_lib::check_true($memory_6)) {goto label_138;}
#line 532
$memory_6 = "-=";
#line 532
$memory_6 = c_rt_lib::to_nl($memory_5 eq $memory_6);
#line 532
label_138:
#line 532
if (c_rt_lib::check_true($memory_6)) {goto label_142;}
#line 532
$memory_6 = "*=";
#line 532
$memory_6 = c_rt_lib::to_nl($memory_5 eq $memory_6);
#line 532
label_142:
#line 532
if (c_rt_lib::check_true($memory_6)) {goto label_146;}
#line 532
$memory_6 = "/=";
#line 532
$memory_6 = c_rt_lib::to_nl($memory_5 eq $memory_6);
#line 532
label_146:
#line 532
if (c_rt_lib::check_true($memory_6)) {goto label_150;}
#line 532
$memory_6 = ".=";
#line 532
$memory_6 = c_rt_lib::to_nl($memory_5 eq $memory_6);
#line 532
label_150:
#line 532
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 532
if (c_rt_lib::check_true($memory_6)) {goto label_180;}
#line 533
$memory_7 = $memory_4->{'left'};
#line 533
$memory_7 = $memory_7->{'value'};
#line 533
$memory_7 = c_rt_lib::ov_is($memory_7, 'var');
#line 533
$memory_8 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 533
if (c_rt_lib::check_true($memory_8)) {goto label_160;}
#line 533
$memory_7 = "=";
#line 533
$memory_7 = c_rt_lib::to_nl($memory_5 eq $memory_7);
#line 533
label_160:
#line 533
undef($memory_8);
#line 533
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 533
if (c_rt_lib::check_true($memory_7)) {goto label_172;}
#line 534
$memory_8 = $memory_4->{'left'};
#line 534
$memory_8 = $memory_8->{'value'};
#line 534
$memory_8 = c_rt_lib::ov_as($memory_8, 'var');
#line 534
$memory_9 = c_rt_lib::ov_mk_none('set');
#line 534
module_checker_priv::use_var($memory_8, $memory_9, $memory_1);
#line 534
undef($memory_9);
#line 534
undef($memory_8);
#line 535
goto label_177;
#line 535
label_172:
#line 536
$memory_8 = $memory_4->{'left'};
#line 536
module_checker_priv::check_lvalue($memory_8, $memory_1);
#line 536
undef($memory_8);
#line 537
goto label_177;
#line 537
label_177:
#line 537
undef($memory_7);
#line 538
goto label_185;
#line 538
label_180:
#line 539
$memory_7 = $memory_4->{'left'};
#line 539
module_checker_priv::check_val($memory_7, $memory_1);
#line 539
undef($memory_7);
#line 540
goto label_185;
#line 540
label_185:
#line 540
undef($memory_6);
#line 541
$memory_6 = $memory_4->{'right'};
#line 541
module_checker_priv::check_val($memory_6, $memory_1);
#line 541
undef($memory_6);
#line 541
undef($memory_5);
#line 541
undef($memory_4);
#line 542
goto label_273;
#line 542
label_193:
#line 542
$memory_4 = c_rt_lib::ov_as($memory_2, 'var_op');
#line 543
$memory_5 = $memory_4->{'left'};
#line 543
module_checker_priv::check_val($memory_5, $memory_1);
#line 543
undef($memory_5);
#line 543
undef($memory_4);
#line 544
goto label_273;
#line 544
label_200:
#line 544
$memory_4 = c_rt_lib::ov_as($memory_2, 'unary_op');
#line 545
$memory_5 = $memory_4->{'val'};
#line 545
module_checker_priv::check_val($memory_5, $memory_1);
#line 545
undef($memory_5);
#line 545
undef($memory_4);
#line 546
goto label_273;
#line 546
label_207:
#line 546
$memory_4 = c_rt_lib::ov_as($memory_2, 'fun_label');
#line 547
$memory_5 = $memory_4->{'module'};
#line 547
$memory_6 = $memory_4->{'name'};
#line 547
module_checker_priv::add_fun_used($memory_5, $memory_6, $memory_1);
#line 547
undef($memory_6);
#line 547
undef($memory_5);
#line 547
undef($memory_4);
#line 548
goto label_273;
#line 548
label_216:
#line 548
$memory_4 = c_rt_lib::ov_as($memory_2, 'fun_val');
#line 549
$memory_5 = $memory_4->{'args'};
#line 549
$memory_7 = 0;
#line 549
$memory_8 = 1;
#line 549
$memory_9 = c_rt_lib::array_len($memory_5);
#line 549
label_222:
#line 549
$memory_10 = c_rt_lib::to_nl($memory_7 >= $memory_9);
#line 549
if (c_rt_lib::check_true($memory_10)) {goto label_249;}
#line 549
$memory_6 = $memory_5->[$memory_7];
#line 550
$memory_11 = $memory_6->{'mod'};
#line 550
$memory_12 = c_rt_lib::ov_is($memory_11, 'none');
#line 550
if (c_rt_lib::check_true($memory_12)) {goto label_234;}
#line 552
$memory_12 = c_rt_lib::ov_is($memory_11, 'ref');
#line 552
if (c_rt_lib::check_true($memory_12)) {goto label_239;}
#line 552
$memory_12 = "NOMATCHALERT";
#line 552
$memory_12 = [$memory_12,$memory_11];
#line 552
die(dfile::ssave($memory_12));
#line 550
label_234:
#line 551
$memory_13 = $memory_6->{'val'};
#line 551
module_checker_priv::check_val($memory_13, $memory_1);
#line 551
undef($memory_13);
#line 552
goto label_244;
#line 552
label_239:
#line 553
$memory_13 = $memory_6->{'val'};
#line 553
module_checker_priv::check_lvalue($memory_13, $memory_1);
#line 553
undef($memory_13);
#line 554
goto label_244;
#line 554
label_244:
#line 554
undef($memory_11);
#line 554
undef($memory_12);
#line 555
$memory_7 = $memory_7 + $memory_8;
#line 555
goto label_222;
#line 555
label_249:
#line 555
undef($memory_5);
#line 555
undef($memory_6);
#line 555
undef($memory_7);
#line 555
undef($memory_8);
#line 555
undef($memory_9);
#line 555
undef($memory_10);
#line 556
$memory_5 = $memory_4->{'module'};
#line 556
$memory_6 = $memory_4->{'name'};
#line 556
module_checker_priv::add_fun_used($memory_5, $memory_6, $memory_1);
#line 556
undef($memory_6);
#line 556
undef($memory_5);
#line 556
undef($memory_4);
#line 557
goto label_273;
#line 557
label_263:
#line 557
$memory_4 = c_rt_lib::ov_as($memory_2, 'post_inc');
#line 558
module_checker_priv::check_val($memory_4, $memory_1);
#line 558
undef($memory_4);
#line 559
goto label_273;
#line 559
label_268:
#line 559
$memory_4 = c_rt_lib::ov_as($memory_2, 'post_dec');
#line 560
module_checker_priv::check_val($memory_4, $memory_1);
#line 560
undef($memory_4);
#line 561
goto label_273;
#line 561
label_273:
#line 561
undef($memory_2);
#line 561
undef($memory_3);
#line 561
undef($memory_0);
#line 561
$_[1] = $memory_1;return;
$_[1] = $memory_1;}

sub module_checker_priv::save_block($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);
#line 565
$memory_2 = $memory_0->{'in_loop'};
#line 565
$memory_3 = $memory_0->{'vars'};
#line 565
$memory_1 = {in_loop => $memory_2,vars => $memory_3,};
#line 565
undef($memory_2);
#line 565
undef($memory_3);
#line 565
$_[0] = $memory_0;return $memory_1;
#line 565
undef($memory_1);
#line 565
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub module_checker_priv::load_block($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];
#line 569
$memory_2 = $memory_1->{'in_loop'};
#line 569
$memory_3 = $memory_2;
#line 569
 if (c_rt_lib::get_hashcount($memory_0) > 1) {$memory_0 = {%{$memory_0}};}$memory_0->{'in_loop'} = $memory_3;
#line 569
undef($memory_2);
#line 569
undef($memory_3);
#line 570
$memory_3 = $memory_0->{'vars'};
#line 570
$memory_2 = hash::keys($memory_3);
#line 570
undef($memory_3);
#line 571
$memory_4 = 0;
#line 571
$memory_5 = 1;
#line 571
$memory_6 = c_rt_lib::array_len($memory_2);
#line 571
label_11:
#line 571
$memory_7 = c_rt_lib::to_nl($memory_4 >= $memory_6);
#line 571
if (c_rt_lib::check_true($memory_7)) {goto label_60;}
#line 571
$memory_3 = $memory_2->[$memory_4];
#line 572
$memory_9 = $memory_1->{'vars'};
#line 572
$memory_8 = hash::has_key($memory_9, $memory_3);
#line 572
undef($memory_9);
#line 572
$memory_8 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 572
$memory_8 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 572
if (c_rt_lib::check_true($memory_8)) {goto label_56;}
#line 573
$memory_10 = $memory_0->{'vars'};
#line 573
$memory_9 = hash::get_value($memory_10, $memory_3);
#line 573
undef($memory_10);
#line 574
$memory_10 = "vars";
#line 574
$memory_10 = c_rt_lib::get_ref_hash($memory_0, $memory_10);
#line 574
hash::delete($memory_10, $memory_3);
#line 574
$memory_11 = "vars";
#line 574
c_rt_lib::set_ref_hash($memory_0, $memory_11, $memory_10);
#line 574
undef($memory_11);
#line 574
undef($memory_10);
#line 575
$memory_10 = $memory_9->{'read'};
#line 575
$memory_10 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_10));
#line 575
$memory_11 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_10));
#line 575
if (c_rt_lib::check_true($memory_11)) {goto label_37;}
#line 575
$memory_10 = $memory_9->{'is_required'};
#line 575
$memory_10 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_10));
#line 575
label_37:
#line 575
undef($memory_11);
#line 575
$memory_10 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_10));
#line 575
if (c_rt_lib::check_true($memory_10)) {goto label_52;}
#line 576
$memory_11 = "errors";
#line 576
$memory_11 = c_rt_lib::get_ref_hash($memory_0, $memory_11);
#line 576
$memory_12 = "never read variable: ";
#line 576
$memory_12 = $memory_12 . $memory_3;
#line 576
module_checker_priv::add_warning($memory_11, $memory_12);
#line 576
undef($memory_12);
#line 576
$memory_12 = "errors";
#line 576
c_rt_lib::set_ref_hash($memory_0, $memory_12, $memory_11);
#line 576
undef($memory_12);
#line 576
undef($memory_11);
#line 577
goto label_52;
#line 577
label_52:
#line 577
undef($memory_10);
#line 577
undef($memory_9);
#line 578
goto label_56;
#line 578
label_56:
#line 578
undef($memory_8);
#line 579
$memory_4 = $memory_4 + $memory_5;
#line 579
goto label_11;
#line 579
label_60:
#line 579
undef($memory_3);
#line 579
undef($memory_4);
#line 579
undef($memory_5);
#line 579
undef($memory_6);
#line 579
undef($memory_7);
#line 579
undef($memory_2);
#line 579
undef($memory_1);
#line 579
$_[0] = $memory_0;return;
$_[0] = $memory_0;}
