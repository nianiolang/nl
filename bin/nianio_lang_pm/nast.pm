use c_rt_lib;
use hash;
use ptd;
use singleton;
sub nast::bool_t;
sub nast::op_assoc_t;
sub nast::op_t;
sub nast::op_struct_t;
sub nast_priv::op_def;
sub nast::get_ternary_ops;
sub nast::get_unary_ops;
sub nast::get_bin_ops;
sub nast::get_max_precedence;
sub nast::variant_t;
sub nast::fun_def_t;
sub nast::fun_def_arg_t;
sub nast::module_t;
sub nast::variable_type_t;
sub nast::variable_declaration_t;
sub nast::fun_val_arg_t;
sub nast::fun_val_t;
sub nast::hash_elem_t;
sub nast::hash_decl_t;
sub nast::bin_op_t;
sub nast::var_op_t;
sub nast::fun_label_t;
sub nast::unary_op_t;
sub nast::ternary_op_t;
sub nast::value_t;
sub nast::match_t;
sub nast::variant_decl_t;
sub nast::match_branch_t;
sub nast::fora_t;
sub nast::forh_t;
sub nast::rep_t;
sub nast::while_t;
sub nast::try_ensure_t;
sub nast::if_t;
sub nast::for_t;
sub nast::place_t;
sub nast::debug_t;
sub nast::empty_debug;
sub nast::cmd_t;

return 1;

sub nast::__bool_t() {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;
#line 11
$memory_2 = ptd::none();
#line 11
$memory_3 = ptd::none();
#line 11
$memory_1 = {FALSE => $memory_2,TRUE => $memory_3,};
#line 11
undef($memory_2);
#line 11
undef($memory_3);
#line 11
$memory_0 = ptd::var($memory_1);
#line 11
undef($memory_1);
#line 11
return $memory_0;
#line 11
undef($memory_0);
#line 11
return;
}

my $_bool_t;
sub nast::bool_t() {
	$_bool_t = nast::__bool_t() unless defined $_bool_t;
	return $_bool_t;
}

sub nast::__op_assoc_t() {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;
#line 15
$memory_2 = ptd::none();
#line 15
$memory_3 = ptd::none();
#line 15
$memory_4 = ptd::none();
#line 15
$memory_1 = {left => $memory_2,right => $memory_3,none => $memory_4,};
#line 15
undef($memory_2);
#line 15
undef($memory_3);
#line 15
undef($memory_4);
#line 15
$memory_0 = ptd::var($memory_1);
#line 15
undef($memory_1);
#line 15
return $memory_0;
#line 15
undef($memory_0);
#line 15
return;
}

my $_op_assoc_t;
sub nast::op_assoc_t() {
	$_op_assoc_t = nast::__op_assoc_t() unless defined $_op_assoc_t;
	return $_op_assoc_t;
}

sub nast::__op_t() {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;
#line 19
$memory_2 = ptd::sim();
#line 19
$memory_3 = {
	module => "nast",
	name => "op_assoc_t",
};
#line 19
$memory_3 = c_rt_lib::ov_mk_arg('ref', $memory_3);
#line 19
$memory_1 = {prec => $memory_2,assoc => $memory_3,};
#line 19
undef($memory_2);
#line 19
undef($memory_3);
#line 19
$memory_0 = ptd::rec($memory_1);
#line 19
undef($memory_1);
#line 19
return $memory_0;
#line 19
undef($memory_0);
#line 19
return;
}

my $_op_t;
sub nast::op_t() {
	$_op_t = nast::__op_t() unless defined $_op_t;
	return $_op_t;
}

sub nast::__op_struct_t() {
my $memory_0;my $memory_1;
#line 23
$memory_1 = {
	module => "nast",
	name => "op_t",
};
#line 23
$memory_1 = c_rt_lib::ov_mk_arg('ref', $memory_1);
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

my $_op_struct_t;
sub nast::op_struct_t() {
	$_op_struct_t = nast::__op_struct_t() unless defined $_op_struct_t;
	return $_op_struct_t;
}

sub nast_priv::op_def($$$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];$memory_2 = $_[2];$memory_3 = $_[3];
#line 27
$memory_4 = {prec => $memory_2,assoc => $memory_3,};
#line 27
hash::set_value($memory_0, $memory_1, $memory_4);
#line 27
undef($memory_4);
#line 27
undef($memory_1);
#line 27
undef($memory_2);
#line 27
undef($memory_3);
#line 27
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub nast::__get_ternary_ops() {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;
#line 31
$memory_0 = {};
#line 32
$memory_1 = "?";
#line 32
$memory_2 = 880;
#line 32
$memory_3 = c_rt_lib::ov_mk_none('right');
#line 32
nast_priv::op_def($memory_0, $memory_1, $memory_2, $memory_3);
#line 32
undef($memory_3);
#line 32
undef($memory_2);
#line 32
undef($memory_1);
#line 33
$memory_1 = singleton::sigleton_do_not_use_without_approval($memory_0);
#line 33
undef($memory_0);
#line 33
return $memory_1;
#line 33
undef($memory_1);
#line 33
undef($memory_0);
#line 33
return;
}

my $_get_ternary_ops;
sub nast::get_ternary_ops() {
	$_get_ternary_ops = nast::__get_ternary_ops() unless defined $_get_ternary_ops;
	return $_get_ternary_ops;
}

sub nast::__get_unary_ops() {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;
#line 37
$memory_0 = {};
#line 38
$memory_1 = "\@";
#line 38
$memory_2 = 1010;
#line 38
$memory_3 = c_rt_lib::ov_mk_none('right');
#line 38
nast_priv::op_def($memory_0, $memory_1, $memory_2, $memory_3);
#line 38
undef($memory_3);
#line 38
undef($memory_2);
#line 38
undef($memory_1);
#line 39
$memory_1 = "++";
#line 39
$memory_2 = 990;
#line 39
$memory_3 = c_rt_lib::ov_mk_none('none');
#line 39
nast_priv::op_def($memory_0, $memory_1, $memory_2, $memory_3);
#line 39
undef($memory_3);
#line 39
undef($memory_2);
#line 39
undef($memory_1);
#line 40
$memory_1 = "--";
#line 40
$memory_2 = 990;
#line 40
$memory_3 = c_rt_lib::ov_mk_none('none');
#line 40
nast_priv::op_def($memory_0, $memory_1, $memory_2, $memory_3);
#line 40
undef($memory_3);
#line 40
undef($memory_2);
#line 40
undef($memory_1);
#line 41
$memory_1 = "!";
#line 41
$memory_2 = 980;
#line 41
$memory_3 = c_rt_lib::ov_mk_none('right');
#line 41
nast_priv::op_def($memory_0, $memory_1, $memory_2, $memory_3);
#line 41
undef($memory_3);
#line 41
undef($memory_2);
#line 41
undef($memory_1);
#line 42
$memory_1 = "+";
#line 42
$memory_2 = 980;
#line 42
$memory_3 = c_rt_lib::ov_mk_none('right');
#line 42
nast_priv::op_def($memory_0, $memory_1, $memory_2, $memory_3);
#line 42
undef($memory_3);
#line 42
undef($memory_2);
#line 42
undef($memory_1);
#line 43
$memory_1 = "-";
#line 43
$memory_2 = 980;
#line 43
$memory_3 = c_rt_lib::ov_mk_none('right');
#line 43
nast_priv::op_def($memory_0, $memory_1, $memory_2, $memory_3);
#line 43
undef($memory_3);
#line 43
undef($memory_2);
#line 43
undef($memory_1);
#line 44
$memory_1 = singleton::sigleton_do_not_use_without_approval($memory_0);
#line 44
undef($memory_0);
#line 44
return $memory_1;
#line 44
undef($memory_1);
#line 44
undef($memory_0);
#line 44
return;
}

my $_get_unary_ops;
sub nast::get_unary_ops() {
	$_get_unary_ops = nast::__get_unary_ops() unless defined $_get_unary_ops;
	return $_get_unary_ops;
}

sub nast::__get_bin_ops() {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;
#line 48
$memory_0 = {};
#line 49
$memory_1 = "->";
#line 49
$memory_2 = 2000;
#line 49
$memory_3 = c_rt_lib::ov_mk_none('left');
#line 49
nast_priv::op_def($memory_0, $memory_1, $memory_2, $memory_3);
#line 49
undef($memory_3);
#line 49
undef($memory_2);
#line 49
undef($memory_1);
#line 50
$memory_1 = "is";
#line 50
$memory_2 = 1500;
#line 50
$memory_3 = c_rt_lib::ov_mk_none('left');
#line 50
nast_priv::op_def($memory_0, $memory_1, $memory_2, $memory_3);
#line 50
undef($memory_3);
#line 50
undef($memory_2);
#line 50
undef($memory_1);
#line 51
$memory_1 = "as";
#line 51
$memory_2 = 1500;
#line 51
$memory_3 = c_rt_lib::ov_mk_none('left');
#line 51
nast_priv::op_def($memory_0, $memory_1, $memory_2, $memory_3);
#line 51
undef($memory_3);
#line 51
undef($memory_2);
#line 51
undef($memory_1);
#line 52
$memory_1 = "*";
#line 52
$memory_2 = 970;
#line 52
$memory_3 = c_rt_lib::ov_mk_none('left');
#line 52
nast_priv::op_def($memory_0, $memory_1, $memory_2, $memory_3);
#line 52
undef($memory_3);
#line 52
undef($memory_2);
#line 52
undef($memory_1);
#line 53
$memory_1 = "/";
#line 53
$memory_2 = 970;
#line 53
$memory_3 = c_rt_lib::ov_mk_none('left');
#line 53
nast_priv::op_def($memory_0, $memory_1, $memory_2, $memory_3);
#line 53
undef($memory_3);
#line 53
undef($memory_2);
#line 53
undef($memory_1);
#line 54
$memory_1 = "%";
#line 54
$memory_2 = 970;
#line 54
$memory_3 = c_rt_lib::ov_mk_none('left');
#line 54
nast_priv::op_def($memory_0, $memory_1, $memory_2, $memory_3);
#line 54
undef($memory_3);
#line 54
undef($memory_2);
#line 54
undef($memory_1);
#line 55
$memory_1 = "+";
#line 55
$memory_2 = 960;
#line 55
$memory_3 = c_rt_lib::ov_mk_none('left');
#line 55
nast_priv::op_def($memory_0, $memory_1, $memory_2, $memory_3);
#line 55
undef($memory_3);
#line 55
undef($memory_2);
#line 55
undef($memory_1);
#line 56
$memory_1 = "-";
#line 56
$memory_2 = 960;
#line 56
$memory_3 = c_rt_lib::ov_mk_none('left');
#line 56
nast_priv::op_def($memory_0, $memory_1, $memory_2, $memory_3);
#line 56
undef($memory_3);
#line 56
undef($memory_2);
#line 56
undef($memory_1);
#line 57
$memory_1 = ".";
#line 57
$memory_2 = 960;
#line 57
$memory_3 = c_rt_lib::ov_mk_none('left');
#line 57
nast_priv::op_def($memory_0, $memory_1, $memory_2, $memory_3);
#line 57
undef($memory_3);
#line 57
undef($memory_2);
#line 57
undef($memory_1);
#line 58
$memory_1 = ">=";
#line 58
$memory_2 = 940;
#line 58
$memory_3 = c_rt_lib::ov_mk_none('none');
#line 58
nast_priv::op_def($memory_0, $memory_1, $memory_2, $memory_3);
#line 58
undef($memory_3);
#line 58
undef($memory_2);
#line 58
undef($memory_1);
#line 59
$memory_1 = "<=";
#line 59
$memory_2 = 940;
#line 59
$memory_3 = c_rt_lib::ov_mk_none('none');
#line 59
nast_priv::op_def($memory_0, $memory_1, $memory_2, $memory_3);
#line 59
undef($memory_3);
#line 59
undef($memory_2);
#line 59
undef($memory_1);
#line 60
$memory_1 = "<";
#line 60
$memory_2 = 940;
#line 60
$memory_3 = c_rt_lib::ov_mk_none('none');
#line 60
nast_priv::op_def($memory_0, $memory_1, $memory_2, $memory_3);
#line 60
undef($memory_3);
#line 60
undef($memory_2);
#line 60
undef($memory_1);
#line 61
$memory_1 = ">";
#line 61
$memory_2 = 940;
#line 61
$memory_3 = c_rt_lib::ov_mk_none('none');
#line 61
nast_priv::op_def($memory_0, $memory_1, $memory_2, $memory_3);
#line 61
undef($memory_3);
#line 61
undef($memory_2);
#line 61
undef($memory_1);
#line 62
$memory_1 = "==";
#line 62
$memory_2 = 930;
#line 62
$memory_3 = c_rt_lib::ov_mk_none('none');
#line 62
nast_priv::op_def($memory_0, $memory_1, $memory_2, $memory_3);
#line 62
undef($memory_3);
#line 62
undef($memory_2);
#line 62
undef($memory_1);
#line 63
$memory_1 = "!=";
#line 63
$memory_2 = 930;
#line 63
$memory_3 = c_rt_lib::ov_mk_none('none');
#line 63
nast_priv::op_def($memory_0, $memory_1, $memory_2, $memory_3);
#line 63
undef($memory_3);
#line 63
undef($memory_2);
#line 63
undef($memory_1);
#line 64
$memory_1 = "eq";
#line 64
$memory_2 = 930;
#line 64
$memory_3 = c_rt_lib::ov_mk_none('none');
#line 64
nast_priv::op_def($memory_0, $memory_1, $memory_2, $memory_3);
#line 64
undef($memory_3);
#line 64
undef($memory_2);
#line 64
undef($memory_1);
#line 65
$memory_1 = "ne";
#line 65
$memory_2 = 930;
#line 65
$memory_3 = c_rt_lib::ov_mk_none('none');
#line 65
nast_priv::op_def($memory_0, $memory_1, $memory_2, $memory_3);
#line 65
undef($memory_3);
#line 65
undef($memory_2);
#line 65
undef($memory_1);
#line 66
$memory_1 = "&&";
#line 66
$memory_2 = 900;
#line 66
$memory_3 = c_rt_lib::ov_mk_none('left');
#line 66
nast_priv::op_def($memory_0, $memory_1, $memory_2, $memory_3);
#line 66
undef($memory_3);
#line 66
undef($memory_2);
#line 66
undef($memory_1);
#line 67
$memory_1 = "||";
#line 67
$memory_2 = 890;
#line 67
$memory_3 = c_rt_lib::ov_mk_none('left');
#line 67
nast_priv::op_def($memory_0, $memory_1, $memory_2, $memory_3);
#line 67
undef($memory_3);
#line 67
undef($memory_2);
#line 67
undef($memory_1);
#line 68
$memory_1 = "=";
#line 68
$memory_2 = 870;
#line 68
$memory_3 = c_rt_lib::ov_mk_none('right');
#line 68
nast_priv::op_def($memory_0, $memory_1, $memory_2, $memory_3);
#line 68
undef($memory_3);
#line 68
undef($memory_2);
#line 68
undef($memory_1);
#line 69
$memory_1 = "+=";
#line 69
$memory_2 = 870;
#line 69
$memory_3 = c_rt_lib::ov_mk_none('right');
#line 69
nast_priv::op_def($memory_0, $memory_1, $memory_2, $memory_3);
#line 69
undef($memory_3);
#line 69
undef($memory_2);
#line 69
undef($memory_1);
#line 70
$memory_1 = "/=";
#line 70
$memory_2 = 870;
#line 70
$memory_3 = c_rt_lib::ov_mk_none('right');
#line 70
nast_priv::op_def($memory_0, $memory_1, $memory_2, $memory_3);
#line 70
undef($memory_3);
#line 70
undef($memory_2);
#line 70
undef($memory_1);
#line 71
$memory_1 = "*=";
#line 71
$memory_2 = 870;
#line 71
$memory_3 = c_rt_lib::ov_mk_none('right');
#line 71
nast_priv::op_def($memory_0, $memory_1, $memory_2, $memory_3);
#line 71
undef($memory_3);
#line 71
undef($memory_2);
#line 71
undef($memory_1);
#line 72
$memory_1 = ".=";
#line 72
$memory_2 = 870;
#line 72
$memory_3 = c_rt_lib::ov_mk_none('right');
#line 72
nast_priv::op_def($memory_0, $memory_1, $memory_2, $memory_3);
#line 72
undef($memory_3);
#line 72
undef($memory_2);
#line 72
undef($memory_1);
#line 73
$memory_1 = "-=";
#line 73
$memory_2 = 870;
#line 73
$memory_3 = c_rt_lib::ov_mk_none('right');
#line 73
nast_priv::op_def($memory_0, $memory_1, $memory_2, $memory_3);
#line 73
undef($memory_3);
#line 73
undef($memory_2);
#line 73
undef($memory_1);
#line 74
$memory_1 = singleton::sigleton_do_not_use_without_approval($memory_0);
#line 74
undef($memory_0);
#line 74
return $memory_1;
#line 74
undef($memory_1);
#line 74
undef($memory_0);
#line 74
return;
}

my $_get_bin_ops;
sub nast::get_bin_ops() {
	$_get_bin_ops = nast::__get_bin_ops() unless defined $_get_bin_ops;
	return $_get_bin_ops;
}

sub nast::__get_max_precedence() {
my $memory_0;
#line 79
$memory_0 = 2000;
#line 79
return $memory_0;
#line 79
undef($memory_0);
#line 79
return;
}

my $_get_max_precedence;
sub nast::get_max_precedence() {
	$_get_max_precedence = nast::__get_max_precedence() unless defined $_get_max_precedence;
	return $_get_max_precedence;
}

sub nast::__variant_t() {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;
#line 83
$memory_2 = ptd::sim();
#line 83
$memory_3 = {
	module => "nast",
	name => "value_t",
};
#line 83
$memory_3 = c_rt_lib::ov_mk_arg('ref', $memory_3);
#line 83
$memory_1 = {name => $memory_2,var => $memory_3,};
#line 83
undef($memory_2);
#line 83
undef($memory_3);
#line 83
$memory_0 = ptd::rec($memory_1);
#line 83
undef($memory_1);
#line 83
return $memory_0;
#line 83
undef($memory_0);
#line 83
return;
}

my $_variant_t;
sub nast::variant_t() {
	$_variant_t = nast::__variant_t() unless defined $_variant_t;
	return $_variant_t;
}

sub nast::__fun_def_t() {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;
#line 87
$memory_2 = {
	module => "nast",
	name => "variable_type_t",
};
#line 87
$memory_2 = c_rt_lib::ov_mk_arg('ref', $memory_2);
#line 87
$memory_3 = ptd::sim();
#line 87
$memory_4 = ptd::sim();
#line 87
$memory_5 = {
	module => "nast",
	name => "cmd_t",
};
#line 87
$memory_5 = c_rt_lib::ov_mk_arg('ref', $memory_5);
#line 87
$memory_8 = ptd::none();
#line 87
$memory_9 = ptd::none();
#line 87
$memory_7 = {priv => $memory_8,pub => $memory_9,};
#line 87
undef($memory_8);
#line 87
undef($memory_9);
#line 87
$memory_6 = ptd::var($memory_7);
#line 87
undef($memory_7);
#line 87
$memory_8 = {
	module => "nast",
	name => "fun_def_arg_t",
};
#line 87
$memory_8 = c_rt_lib::ov_mk_arg('ref', $memory_8);
#line 87
$memory_7 = ptd::arr($memory_8);
#line 87
undef($memory_8);
#line 87
$memory_1 = {ret_type => $memory_2,line => $memory_3,name => $memory_4,cmd => $memory_5,access => $memory_6,args => $memory_7,};
#line 87
undef($memory_2);
#line 87
undef($memory_3);
#line 87
undef($memory_4);
#line 87
undef($memory_5);
#line 87
undef($memory_6);
#line 87
undef($memory_7);
#line 87
$memory_0 = ptd::rec($memory_1);
#line 87
undef($memory_1);
#line 87
return $memory_0;
#line 87
undef($memory_0);
#line 87
return;
}

my $_fun_def_t;
sub nast::fun_def_t() {
	$_fun_def_t = nast::__fun_def_t() unless defined $_fun_def_t;
	return $_fun_def_t;
}

sub nast::__fun_def_arg_t() {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;
#line 98
$memory_2 = {
	module => "nast",
	name => "variable_type_t",
};
#line 98
$memory_2 = c_rt_lib::ov_mk_arg('ref', $memory_2);
#line 98
$memory_3 = ptd::sim();
#line 98
$memory_6 = ptd::none();
#line 98
$memory_7 = ptd::none();
#line 98
$memory_5 = {none => $memory_6,ref => $memory_7,};
#line 98
undef($memory_6);
#line 98
undef($memory_7);
#line 98
$memory_4 = ptd::var($memory_5);
#line 98
undef($memory_5);
#line 98
$memory_1 = {type => $memory_2,name => $memory_3,mod => $memory_4,};
#line 98
undef($memory_2);
#line 98
undef($memory_3);
#line 98
undef($memory_4);
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

my $_fun_def_arg_t;
sub nast::fun_def_arg_t() {
	$_fun_def_arg_t = nast::__fun_def_arg_t() unless defined $_fun_def_arg_t;
	return $_fun_def_arg_t;
}

sub nast::__module_t() {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;
#line 106
$memory_2 = ptd::sim();
#line 106
$memory_6 = ptd::sim();
#line 106
$memory_7 = ptd::sim();
#line 106
$memory_5 = {name => $memory_6,line => $memory_7,};
#line 106
undef($memory_6);
#line 106
undef($memory_7);
#line 106
$memory_4 = ptd::rec($memory_5);
#line 106
undef($memory_5);
#line 106
$memory_3 = ptd::arr($memory_4);
#line 106
undef($memory_4);
#line 106
$memory_5 = {
	module => "nast",
	name => "fun_def_t",
};
#line 106
$memory_5 = c_rt_lib::ov_mk_arg('ref', $memory_5);
#line 106
$memory_4 = ptd::arr($memory_5);
#line 106
undef($memory_5);
#line 106
$memory_1 = {name => $memory_2,import => $memory_3,fun_def => $memory_4,};
#line 106
undef($memory_2);
#line 106
undef($memory_3);
#line 106
undef($memory_4);
#line 106
$memory_0 = ptd::rec($memory_1);
#line 106
undef($memory_1);
#line 106
return $memory_0;
#line 106
undef($memory_0);
#line 106
return;
}

my $_module_t;
sub nast::module_t() {
	$_module_t = nast::__module_t() unless defined $_module_t;
	return $_module_t;
}

sub nast::__variable_type_t() {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;
#line 114
$memory_2 = {
	module => "nast",
	name => "value_t",
};
#line 114
$memory_2 = c_rt_lib::ov_mk_arg('ref', $memory_2);
#line 114
$memory_3 = ptd::none();
#line 114
$memory_1 = {type => $memory_2,none => $memory_3,};
#line 114
undef($memory_2);
#line 114
undef($memory_3);
#line 114
$memory_0 = ptd::var($memory_1);
#line 114
undef($memory_1);
#line 114
return $memory_0;
#line 114
undef($memory_0);
#line 114
return;
}

my $_variable_type_t;
sub nast::variable_type_t() {
	$_variable_type_t = nast::__variable_type_t() unless defined $_variable_type_t;
	return $_variable_type_t;
}

sub nast::__variable_declaration_t() {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;
#line 118
$memory_2 = ptd::sim();
#line 118
$memory_3 = {
	module => "nast",
	name => "variable_type_t",
};
#line 118
$memory_3 = c_rt_lib::ov_mk_arg('ref', $memory_3);
#line 118
$memory_6 = {
	module => "nast",
	name => "value_t",
};
#line 118
$memory_6 = c_rt_lib::ov_mk_arg('ref', $memory_6);
#line 118
$memory_7 = ptd::none();
#line 118
$memory_5 = {value => $memory_6,none => $memory_7,};
#line 118
undef($memory_6);
#line 118
undef($memory_7);
#line 118
$memory_4 = ptd::var($memory_5);
#line 118
undef($memory_5);
#line 118
$memory_1 = {name => $memory_2,type => $memory_3,value => $memory_4,};
#line 118
undef($memory_2);
#line 118
undef($memory_3);
#line 118
undef($memory_4);
#line 118
$memory_0 = ptd::rec($memory_1);
#line 118
undef($memory_1);
#line 118
return $memory_0;
#line 118
undef($memory_0);
#line 118
return;
}

my $_variable_declaration_t;
sub nast::variable_declaration_t() {
	$_variable_declaration_t = nast::__variable_declaration_t() unless defined $_variable_declaration_t;
	return $_variable_declaration_t;
}

sub nast::__fun_val_arg_t() {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;
#line 126
$memory_2 = {
	module => "nast",
	name => "value_t",
};
#line 126
$memory_2 = c_rt_lib::ov_mk_arg('ref', $memory_2);
#line 126
$memory_5 = ptd::none();
#line 126
$memory_6 = ptd::none();
#line 126
$memory_4 = {none => $memory_5,ref => $memory_6,};
#line 126
undef($memory_5);
#line 126
undef($memory_6);
#line 126
$memory_3 = ptd::var($memory_4);
#line 126
undef($memory_4);
#line 126
$memory_1 = {val => $memory_2,mod => $memory_3,};
#line 126
undef($memory_2);
#line 126
undef($memory_3);
#line 126
$memory_0 = ptd::rec($memory_1);
#line 126
undef($memory_1);
#line 126
return $memory_0;
#line 126
undef($memory_0);
#line 126
return;
}

my $_fun_val_arg_t;
sub nast::fun_val_arg_t() {
	$_fun_val_arg_t = nast::__fun_val_arg_t() unless defined $_fun_val_arg_t;
	return $_fun_val_arg_t;
}

sub nast::__fun_val_t() {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;
#line 130
$memory_2 = ptd::sim();
#line 130
$memory_3 = ptd::sim();
#line 130
$memory_5 = {
	module => "nast",
	name => "fun_val_arg_t",
};
#line 130
$memory_5 = c_rt_lib::ov_mk_arg('ref', $memory_5);
#line 130
$memory_4 = ptd::arr($memory_5);
#line 130
undef($memory_5);
#line 130
$memory_1 = {name => $memory_2,module => $memory_3,args => $memory_4,};
#line 130
undef($memory_2);
#line 130
undef($memory_3);
#line 130
undef($memory_4);
#line 130
$memory_0 = ptd::rec($memory_1);
#line 130
undef($memory_1);
#line 130
return $memory_0;
#line 130
undef($memory_0);
#line 130
return;
}

my $_fun_val_t;
sub nast::fun_val_t() {
	$_fun_val_t = nast::__fun_val_t() unless defined $_fun_val_t;
	return $_fun_val_t;
}

sub nast::__hash_elem_t() {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;
#line 134
$memory_2 = {
	module => "nast",
	name => "value_t",
};
#line 134
$memory_2 = c_rt_lib::ov_mk_arg('ref', $memory_2);
#line 134
$memory_3 = {
	module => "nast",
	name => "value_t",
};
#line 134
$memory_3 = c_rt_lib::ov_mk_arg('ref', $memory_3);
#line 134
$memory_1 = {key => $memory_2,val => $memory_3,};
#line 134
undef($memory_2);
#line 134
undef($memory_3);
#line 134
$memory_0 = ptd::rec($memory_1);
#line 134
undef($memory_1);
#line 134
return $memory_0;
#line 134
undef($memory_0);
#line 134
return;
}

my $_hash_elem_t;
sub nast::hash_elem_t() {
	$_hash_elem_t = nast::__hash_elem_t() unless defined $_hash_elem_t;
	return $_hash_elem_t;
}

sub nast::__hash_decl_t() {
my $memory_0;my $memory_1;
#line 138
$memory_1 = {
	module => "nast",
	name => "hash_elem_t",
};
#line 138
$memory_1 = c_rt_lib::ov_mk_arg('ref', $memory_1);
#line 138
$memory_0 = ptd::arr($memory_1);
#line 138
undef($memory_1);
#line 138
return $memory_0;
#line 138
undef($memory_0);
#line 138
return;
}

my $_hash_decl_t;
sub nast::hash_decl_t() {
	$_hash_decl_t = nast::__hash_decl_t() unless defined $_hash_decl_t;
	return $_hash_decl_t;
}

sub nast::__bin_op_t() {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;
#line 142
$memory_2 = {
	module => "nast",
	name => "value_t",
};
#line 142
$memory_2 = c_rt_lib::ov_mk_arg('ref', $memory_2);
#line 142
$memory_3 = {
	module => "nast",
	name => "value_t",
};
#line 142
$memory_3 = c_rt_lib::ov_mk_arg('ref', $memory_3);
#line 142
$memory_4 = ptd::sim();
#line 142
$memory_1 = {left => $memory_2,right => $memory_3,op => $memory_4,};
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

my $_bin_op_t;
sub nast::bin_op_t() {
	$_bin_op_t = nast::__bin_op_t() unless defined $_bin_op_t;
	return $_bin_op_t;
}

sub nast::__var_op_t() {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;
#line 145
$memory_2 = {
	module => "nast",
	name => "value_t",
};
#line 145
$memory_2 = c_rt_lib::ov_mk_arg('ref', $memory_2);
#line 145
$memory_5 = ptd::none();
#line 145
$memory_6 = ptd::none();
#line 145
$memory_4 = {ov_is => $memory_5,ov_as => $memory_6,};
#line 145
undef($memory_5);
#line 145
undef($memory_6);
#line 145
$memory_3 = ptd::var($memory_4);
#line 145
undef($memory_4);
#line 145
$memory_4 = ptd::sim();
#line 145
$memory_1 = {left => $memory_2,op => $memory_3,case => $memory_4,};
#line 145
undef($memory_2);
#line 145
undef($memory_3);
#line 145
undef($memory_4);
#line 145
$memory_0 = ptd::rec($memory_1);
#line 145
undef($memory_1);
#line 145
return $memory_0;
#line 145
undef($memory_0);
#line 145
return;
}

my $_var_op_t;
sub nast::var_op_t() {
	$_var_op_t = nast::__var_op_t() unless defined $_var_op_t;
	return $_var_op_t;
}

sub nast::__fun_label_t() {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;
#line 149
$memory_2 = ptd::sim();
#line 149
$memory_3 = ptd::sim();
#line 149
$memory_1 = {module => $memory_2,name => $memory_3,};
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

my $_fun_label_t;
sub nast::fun_label_t() {
	$_fun_label_t = nast::__fun_label_t() unless defined $_fun_label_t;
	return $_fun_label_t;
}

sub nast::__unary_op_t() {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;
#line 153
$memory_2 = {
	module => "nast",
	name => "value_t",
};
#line 153
$memory_2 = c_rt_lib::ov_mk_arg('ref', $memory_2);
#line 153
$memory_3 = ptd::sim();
#line 153
$memory_1 = {val => $memory_2,op => $memory_3,};
#line 153
undef($memory_2);
#line 153
undef($memory_3);
#line 153
$memory_0 = ptd::rec($memory_1);
#line 153
undef($memory_1);
#line 153
return $memory_0;
#line 153
undef($memory_0);
#line 153
return;
}

my $_unary_op_t;
sub nast::unary_op_t() {
	$_unary_op_t = nast::__unary_op_t() unless defined $_unary_op_t;
	return $_unary_op_t;
}

sub nast::__ternary_op_t() {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;
#line 156
$memory_2 = {
	module => "nast",
	name => "value_t",
};
#line 156
$memory_2 = c_rt_lib::ov_mk_arg('ref', $memory_2);
#line 156
$memory_3 = {
	module => "nast",
	name => "value_t",
};
#line 156
$memory_3 = c_rt_lib::ov_mk_arg('ref', $memory_3);
#line 156
$memory_4 = {
	module => "nast",
	name => "value_t",
};
#line 156
$memory_4 = c_rt_lib::ov_mk_arg('ref', $memory_4);
#line 156
$memory_5 = ptd::sim();
#line 156
$memory_1 = {fst => $memory_2,snd => $memory_3,thrd => $memory_4,op => $memory_5,};
#line 156
undef($memory_2);
#line 156
undef($memory_3);
#line 156
undef($memory_4);
#line 156
undef($memory_5);
#line 156
$memory_0 = ptd::rec($memory_1);
#line 156
undef($memory_1);
#line 156
return $memory_0;
#line 156
undef($memory_0);
#line 156
return;
}

my $_ternary_op_t;
sub nast::ternary_op_t() {
	$_ternary_op_t = nast::__ternary_op_t() unless defined $_ternary_op_t;
	return $_ternary_op_t;
}

sub nast::__value_t() {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;my $memory_13;my $memory_14;my $memory_15;my $memory_16;my $memory_17;my $memory_18;
#line 165
$memory_2 = {
	module => "nast",
	name => "ternary_op_t",
};
#line 165
$memory_2 = c_rt_lib::ov_mk_arg('ref', $memory_2);
#line 165
$memory_3 = ptd::sim();
#line 165
$memory_4 = ptd::none();
#line 165
$memory_5 = {
	module => "nast",
	name => "value_t",
};
#line 165
$memory_5 = c_rt_lib::ov_mk_arg('ref', $memory_5);
#line 165
$memory_6 = {
	module => "nast",
	name => "variant_t",
};
#line 165
$memory_6 = c_rt_lib::ov_mk_arg('ref', $memory_6);
#line 165
$memory_7 = ptd::sim();
#line 165
$memory_11 = ptd::sim();
#line 165
$memory_10 = ptd::arr($memory_11);
#line 165
undef($memory_11);
#line 165
$memory_13 = ptd::none();
#line 165
$memory_14 = ptd::none();
#line 165
$memory_12 = {end => $memory_13,new_line => $memory_14,};
#line 165
undef($memory_13);
#line 165
undef($memory_14);
#line 165
$memory_11 = ptd::var($memory_12);
#line 165
undef($memory_12);
#line 165
$memory_9 = {arr => $memory_10,last => $memory_11,};
#line 165
undef($memory_10);
#line 165
undef($memory_11);
#line 165
$memory_8 = ptd::rec($memory_9);
#line 165
undef($memory_9);
#line 165
$memory_10 = {
	module => "nast",
	name => "value_t",
};
#line 165
$memory_10 = c_rt_lib::ov_mk_arg('ref', $memory_10);
#line 165
$memory_9 = ptd::arr($memory_10);
#line 165
undef($memory_10);
#line 165
$memory_10 = {
	module => "nast",
	name => "hash_decl_t",
};
#line 165
$memory_10 = c_rt_lib::ov_mk_arg('ref', $memory_10);
#line 165
$memory_11 = ptd::sim();
#line 165
$memory_12 = {
	module => "nast",
	name => "bin_op_t",
};
#line 165
$memory_12 = c_rt_lib::ov_mk_arg('ref', $memory_12);
#line 165
$memory_13 = {
	module => "nast",
	name => "var_op_t",
};
#line 165
$memory_13 = c_rt_lib::ov_mk_arg('ref', $memory_13);
#line 165
$memory_14 = {
	module => "nast",
	name => "unary_op_t",
};
#line 165
$memory_14 = c_rt_lib::ov_mk_arg('ref', $memory_14);
#line 165
$memory_15 = {
	module => "nast",
	name => "fun_label_t",
};
#line 165
$memory_15 = c_rt_lib::ov_mk_arg('ref', $memory_15);
#line 165
$memory_16 = {
	module => "nast",
	name => "fun_val_t",
};
#line 165
$memory_16 = c_rt_lib::ov_mk_arg('ref', $memory_16);
#line 165
$memory_17 = {
	module => "nast",
	name => "value_t",
};
#line 165
$memory_17 = c_rt_lib::ov_mk_arg('ref', $memory_17);
#line 165
$memory_18 = {
	module => "nast",
	name => "value_t",
};
#line 165
$memory_18 = c_rt_lib::ov_mk_arg('ref', $memory_18);
#line 165
$memory_1 = {ternary_op => $memory_2,hash_key => $memory_3,nop => $memory_4,parenthesis => $memory_5,variant => $memory_6,const => $memory_7,string => $memory_8,arr_decl => $memory_9,hash_decl => $memory_10,var => $memory_11,bin_op => $memory_12,var_op => $memory_13,unary_op => $memory_14,fun_label => $memory_15,fun_val => $memory_16,post_inc => $memory_17,post_dec => $memory_18,};
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
#line 165
undef($memory_7);
#line 165
undef($memory_8);
#line 165
undef($memory_9);
#line 165
undef($memory_10);
#line 165
undef($memory_11);
#line 165
undef($memory_12);
#line 165
undef($memory_13);
#line 165
undef($memory_14);
#line 165
undef($memory_15);
#line 165
undef($memory_16);
#line 165
undef($memory_17);
#line 165
undef($memory_18);
#line 165
$memory_0 = ptd::var($memory_1);
#line 165
undef($memory_1);
#line 165
return $memory_0;
#line 165
undef($memory_0);
#line 165
return;
}

my $_value_t;
sub nast::value_t() {
	$_value_t = nast::__value_t() unless defined $_value_t;
	return $_value_t;
}

sub nast::__match_t() {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;
#line 190
$memory_2 = {
	module => "nast",
	name => "value_t",
};
#line 190
$memory_2 = c_rt_lib::ov_mk_arg('ref', $memory_2);
#line 190
$memory_4 = {
	module => "nast",
	name => "match_branch_t",
};
#line 190
$memory_4 = c_rt_lib::ov_mk_arg('ref', $memory_4);
#line 190
$memory_3 = ptd::arr($memory_4);
#line 190
undef($memory_4);
#line 190
$memory_1 = {val => $memory_2,branch_list => $memory_3,};
#line 190
undef($memory_2);
#line 190
undef($memory_3);
#line 190
$memory_0 = ptd::rec($memory_1);
#line 190
undef($memory_1);
#line 190
return $memory_0;
#line 190
undef($memory_0);
#line 190
return;
}

my $_match_t;
sub nast::match_t() {
	$_match_t = nast::__match_t() unless defined $_match_t;
	return $_match_t;
}

sub nast::__variant_decl_t() {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;
#line 194
$memory_2 = ptd::sim();
#line 194
$memory_5 = {
	module => "nast",
	name => "variable_declaration_t",
};
#line 194
$memory_5 = c_rt_lib::ov_mk_arg('ref', $memory_5);
#line 194
$memory_6 = ptd::none();
#line 194
$memory_4 = {value => $memory_5,none => $memory_6,};
#line 194
undef($memory_5);
#line 194
undef($memory_6);
#line 194
$memory_3 = ptd::var($memory_4);
#line 194
undef($memory_4);
#line 194
$memory_1 = {name => $memory_2,value => $memory_3,};
#line 194
undef($memory_2);
#line 194
undef($memory_3);
#line 194
$memory_0 = ptd::rec($memory_1);
#line 194
undef($memory_1);
#line 194
return $memory_0;
#line 194
undef($memory_0);
#line 194
return;
}

my $_variant_decl_t;
sub nast::variant_decl_t() {
	$_variant_decl_t = nast::__variant_decl_t() unless defined $_variant_decl_t;
	return $_variant_decl_t;
}

sub nast::__match_branch_t() {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;
#line 201
$memory_2 = {
	module => "nast",
	name => "variant_decl_t",
};
#line 201
$memory_2 = c_rt_lib::ov_mk_arg('ref', $memory_2);
#line 201
$memory_3 = {
	module => "nast",
	name => "cmd_t",
};
#line 201
$memory_3 = c_rt_lib::ov_mk_arg('ref', $memory_3);
#line 201
$memory_4 = {
	module => "nast",
	name => "debug_t",
};
#line 201
$memory_4 = c_rt_lib::ov_mk_arg('ref', $memory_4);
#line 201
$memory_1 = {variant => $memory_2,cmd => $memory_3,debug => $memory_4,};
#line 201
undef($memory_2);
#line 201
undef($memory_3);
#line 201
undef($memory_4);
#line 201
$memory_0 = ptd::rec($memory_1);
#line 201
undef($memory_1);
#line 201
return $memory_0;
#line 201
undef($memory_0);
#line 201
return;
}

my $_match_branch_t;
sub nast::match_branch_t() {
	$_match_branch_t = nast::__match_branch_t() unless defined $_match_branch_t;
	return $_match_branch_t;
}

sub nast::__fora_t() {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;
#line 205
$memory_2 = {
	module => "nast",
	name => "variable_declaration_t",
};
#line 205
$memory_2 = c_rt_lib::ov_mk_arg('ref', $memory_2);
#line 205
$memory_3 = {
	module => "nast",
	name => "cmd_t",
};
#line 205
$memory_3 = c_rt_lib::ov_mk_arg('ref', $memory_3);
#line 205
$memory_4 = {
	module => "nast",
	name => "value_t",
};
#line 205
$memory_4 = c_rt_lib::ov_mk_arg('ref', $memory_4);
#line 205
$memory_5 = {
	module => "nast",
	name => "bool_t",
};
#line 205
$memory_5 = c_rt_lib::ov_mk_arg('ref', $memory_5);
#line 205
$memory_1 = {iter => $memory_2,cmd => $memory_3,array => $memory_4,short => $memory_5,};
#line 205
undef($memory_2);
#line 205
undef($memory_3);
#line 205
undef($memory_4);
#line 205
undef($memory_5);
#line 205
$memory_0 = ptd::rec($memory_1);
#line 205
undef($memory_1);
#line 205
return $memory_0;
#line 205
undef($memory_0);
#line 205
return;
}

my $_fora_t;
sub nast::fora_t() {
	$_fora_t = nast::__fora_t() unless defined $_fora_t;
	return $_fora_t;
}

sub nast::__forh_t() {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;
#line 214
$memory_2 = {
	module => "nast",
	name => "variable_declaration_t",
};
#line 214
$memory_2 = c_rt_lib::ov_mk_arg('ref', $memory_2);
#line 214
$memory_3 = {
	module => "nast",
	name => "variable_declaration_t",
};
#line 214
$memory_3 = c_rt_lib::ov_mk_arg('ref', $memory_3);
#line 214
$memory_4 = {
	module => "nast",
	name => "value_t",
};
#line 214
$memory_4 = c_rt_lib::ov_mk_arg('ref', $memory_4);
#line 214
$memory_5 = {
	module => "nast",
	name => "cmd_t",
};
#line 214
$memory_5 = c_rt_lib::ov_mk_arg('ref', $memory_5);
#line 214
$memory_6 = {
	module => "nast",
	name => "bool_t",
};
#line 214
$memory_6 = c_rt_lib::ov_mk_arg('ref', $memory_6);
#line 214
$memory_1 = {key => $memory_2,val => $memory_3,hash => $memory_4,cmd => $memory_5,short => $memory_6,};
#line 214
undef($memory_2);
#line 214
undef($memory_3);
#line 214
undef($memory_4);
#line 214
undef($memory_5);
#line 214
undef($memory_6);
#line 214
$memory_0 = ptd::rec($memory_1);
#line 214
undef($memory_1);
#line 214
return $memory_0;
#line 214
undef($memory_0);
#line 214
return;
}

my $_forh_t;
sub nast::forh_t() {
	$_forh_t = nast::__forh_t() unless defined $_forh_t;
	return $_forh_t;
}

sub nast::__rep_t() {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;
#line 224
$memory_2 = {
	module => "nast",
	name => "variable_declaration_t",
};
#line 224
$memory_2 = c_rt_lib::ov_mk_arg('ref', $memory_2);
#line 224
$memory_3 = {
	module => "nast",
	name => "cmd_t",
};
#line 224
$memory_3 = c_rt_lib::ov_mk_arg('ref', $memory_3);
#line 224
$memory_4 = {
	module => "nast",
	name => "value_t",
};
#line 224
$memory_4 = c_rt_lib::ov_mk_arg('ref', $memory_4);
#line 224
$memory_5 = {
	module => "nast",
	name => "bool_t",
};
#line 224
$memory_5 = c_rt_lib::ov_mk_arg('ref', $memory_5);
#line 224
$memory_1 = {iter => $memory_2,cmd => $memory_3,count => $memory_4,short => $memory_5,};
#line 224
undef($memory_2);
#line 224
undef($memory_3);
#line 224
undef($memory_4);
#line 224
undef($memory_5);
#line 224
$memory_0 = ptd::rec($memory_1);
#line 224
undef($memory_1);
#line 224
return $memory_0;
#line 224
undef($memory_0);
#line 224
return;
}

my $_rep_t;
sub nast::rep_t() {
	$_rep_t = nast::__rep_t() unless defined $_rep_t;
	return $_rep_t;
}

sub nast::__while_t() {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;
#line 233
$memory_2 = {
	module => "nast",
	name => "value_t",
};
#line 233
$memory_2 = c_rt_lib::ov_mk_arg('ref', $memory_2);
#line 233
$memory_3 = {
	module => "nast",
	name => "cmd_t",
};
#line 233
$memory_3 = c_rt_lib::ov_mk_arg('ref', $memory_3);
#line 233
$memory_4 = {
	module => "nast",
	name => "bool_t",
};
#line 233
$memory_4 = c_rt_lib::ov_mk_arg('ref', $memory_4);
#line 233
$memory_1 = {cond => $memory_2,cmd => $memory_3,short => $memory_4,};
#line 233
undef($memory_2);
#line 233
undef($memory_3);
#line 233
undef($memory_4);
#line 233
$memory_0 = ptd::rec($memory_1);
#line 233
undef($memory_1);
#line 233
return $memory_0;
#line 233
undef($memory_0);
#line 233
return;
}

my $_while_t;
sub nast::while_t() {
	$_while_t = nast::__while_t() unless defined $_while_t;
	return $_while_t;
}

sub nast::__try_ensure_t() {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;
#line 237
$memory_2 = {
	module => "nast",
	name => "variable_declaration_t",
};
#line 237
$memory_2 = c_rt_lib::ov_mk_arg('ref', $memory_2);
#line 237
$memory_3 = {
	module => "nast",
	name => "bin_op_t",
};
#line 237
$memory_3 = c_rt_lib::ov_mk_arg('ref', $memory_3);
#line 237
$memory_4 = {
	module => "nast",
	name => "value_t",
};
#line 237
$memory_4 = c_rt_lib::ov_mk_arg('ref', $memory_4);
#line 237
$memory_1 = {decl => $memory_2,lval => $memory_3,expr => $memory_4,};
#line 237
undef($memory_2);
#line 237
undef($memory_3);
#line 237
undef($memory_4);
#line 237
$memory_0 = ptd::var($memory_1);
#line 237
undef($memory_1);
#line 237
return $memory_0;
#line 237
undef($memory_0);
#line 237
return;
}

my $_try_ensure_t;
sub nast::try_ensure_t() {
	$_try_ensure_t = nast::__try_ensure_t() unless defined $_try_ensure_t;
	return $_try_ensure_t;
}

sub nast::__if_t() {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;
#line 240
$memory_2 = {
	module => "nast",
	name => "value_t",
};
#line 240
$memory_2 = c_rt_lib::ov_mk_arg('ref', $memory_2);
#line 240
$memory_3 = {
	module => "nast",
	name => "cmd_t",
};
#line 240
$memory_3 = c_rt_lib::ov_mk_arg('ref', $memory_3);
#line 240
$memory_7 = {
	module => "nast",
	name => "value_t",
};
#line 240
$memory_7 = c_rt_lib::ov_mk_arg('ref', $memory_7);
#line 240
$memory_8 = {
	module => "nast",
	name => "cmd_t",
};
#line 240
$memory_8 = c_rt_lib::ov_mk_arg('ref', $memory_8);
#line 240
$memory_9 = {
	module => "nast",
	name => "debug_t",
};
#line 240
$memory_9 = c_rt_lib::ov_mk_arg('ref', $memory_9);
#line 240
$memory_6 = {cond => $memory_7,cmd => $memory_8,debug => $memory_9,};
#line 240
undef($memory_7);
#line 240
undef($memory_8);
#line 240
undef($memory_9);
#line 240
$memory_5 = ptd::rec($memory_6);
#line 240
undef($memory_6);
#line 240
$memory_4 = ptd::arr($memory_5);
#line 240
undef($memory_5);
#line 240
$memory_5 = {
	module => "nast",
	name => "cmd_t",
};
#line 240
$memory_5 = c_rt_lib::ov_mk_arg('ref', $memory_5);
#line 240
$memory_1 = {cond => $memory_2,if => $memory_3,elsif => $memory_4,else => $memory_5,};
#line 240
undef($memory_2);
#line 240
undef($memory_3);
#line 240
undef($memory_4);
#line 240
undef($memory_5);
#line 240
$memory_0 = ptd::rec($memory_1);
#line 240
undef($memory_1);
#line 240
return $memory_0;
#line 240
undef($memory_0);
#line 240
return;
}

my $_if_t;
sub nast::if_t() {
	$_if_t = nast::__if_t() unless defined $_if_t;
	return $_if_t;
}

sub nast::__for_t() {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;
#line 249
$memory_4 = {
	module => "nast",
	name => "variable_declaration_t",
};
#line 249
$memory_4 = c_rt_lib::ov_mk_arg('ref', $memory_4);
#line 249
$memory_5 = {
	module => "nast",
	name => "value_t",
};
#line 249
$memory_5 = c_rt_lib::ov_mk_arg('ref', $memory_5);
#line 249
$memory_3 = {var_decl => $memory_4,value => $memory_5,};
#line 249
undef($memory_4);
#line 249
undef($memory_5);
#line 249
$memory_2 = ptd::var($memory_3);
#line 249
undef($memory_3);
#line 249
$memory_3 = {
	module => "nast",
	name => "value_t",
};
#line 249
$memory_3 = c_rt_lib::ov_mk_arg('ref', $memory_3);
#line 249
$memory_4 = {
	module => "nast",
	name => "value_t",
};
#line 249
$memory_4 = c_rt_lib::ov_mk_arg('ref', $memory_4);
#line 249
$memory_5 = {
	module => "nast",
	name => "cmd_t",
};
#line 249
$memory_5 = c_rt_lib::ov_mk_arg('ref', $memory_5);
#line 249
$memory_1 = {start => $memory_2,iter => $memory_3,cond => $memory_4,cmd => $memory_5,};
#line 249
undef($memory_2);
#line 249
undef($memory_3);
#line 249
undef($memory_4);
#line 249
undef($memory_5);
#line 249
$memory_0 = ptd::rec($memory_1);
#line 249
undef($memory_1);
#line 249
return $memory_0;
#line 249
undef($memory_0);
#line 249
return;
}

my $_for_t;
sub nast::for_t() {
	$_for_t = nast::__for_t() unless defined $_for_t;
	return $_for_t;
}

sub nast::__place_t() {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;
#line 258
$memory_2 = ptd::sim();
#line 258
$memory_3 = ptd::sim();
#line 258
$memory_1 = {line => $memory_2,position => $memory_3,};
#line 258
undef($memory_2);
#line 258
undef($memory_3);
#line 258
$memory_0 = ptd::rec($memory_1);
#line 258
undef($memory_1);
#line 258
return $memory_0;
#line 258
undef($memory_0);
#line 258
return;
}

my $_place_t;
sub nast::place_t() {
	$_place_t = nast::__place_t() unless defined $_place_t;
	return $_place_t;
}

sub nast::__debug_t() {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;
#line 265
$memory_2 = {
	module => "nast",
	name => "place_t",
};
#line 265
$memory_2 = c_rt_lib::ov_mk_arg('ref', $memory_2);
#line 265
$memory_3 = {
	module => "nast",
	name => "place_t",
};
#line 265
$memory_3 = c_rt_lib::ov_mk_arg('ref', $memory_3);
#line 265
$memory_1 = {begin => $memory_2,end => $memory_3,};
#line 265
undef($memory_2);
#line 265
undef($memory_3);
#line 265
$memory_0 = ptd::rec($memory_1);
#line 265
undef($memory_1);
#line 265
return $memory_0;
#line 265
undef($memory_0);
#line 265
return;
}

my $_debug_t;
sub nast::debug_t() {
	$_debug_t = nast::__debug_t() unless defined $_debug_t;
	return $_debug_t;
}

sub nast::__empty_debug() {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;
#line 272
$memory_2 = 1;
#line 272
$memory_3 = 1;
#line 272
$memory_1 = {line => $memory_2,position => $memory_3,};
#line 272
undef($memory_2);
#line 272
undef($memory_3);
#line 272
$memory_3 = 1;
#line 272
$memory_4 = 1;
#line 272
$memory_2 = {line => $memory_3,position => $memory_4,};
#line 272
undef($memory_3);
#line 272
undef($memory_4);
#line 272
$memory_0 = {begin => $memory_1,end => $memory_2,};
#line 272
undef($memory_1);
#line 272
undef($memory_2);
#line 272
return $memory_0;
#line 272
undef($memory_0);
#line 272
return;
}

my $_empty_debug;
sub nast::empty_debug() {
	$_empty_debug = nast::__empty_debug() unless defined $_empty_debug;
	return $_empty_debug;
}

sub nast::__cmd_t() {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;my $memory_13;my $memory_14;my $memory_15;my $memory_16;my $memory_17;my $memory_18;my $memory_19;my $memory_20;my $memory_21;my $memory_22;my $memory_23;my $memory_24;
#line 276
$memory_2 = {
	module => "nast",
	name => "debug_t",
};
#line 276
$memory_2 = c_rt_lib::ov_mk_arg('ref', $memory_2);
#line 276
$memory_5 = {
	module => "nast",
	name => "if_t",
};
#line 276
$memory_5 = c_rt_lib::ov_mk_arg('ref', $memory_5);
#line 276
$memory_6 = {
	module => "nast",
	name => "for_t",
};
#line 276
$memory_6 = c_rt_lib::ov_mk_arg('ref', $memory_6);
#line 276
$memory_7 = {
	module => "nast",
	name => "fora_t",
};
#line 276
$memory_7 = c_rt_lib::ov_mk_arg('ref', $memory_7);
#line 276
$memory_8 = {
	module => "nast",
	name => "forh_t",
};
#line 276
$memory_8 = c_rt_lib::ov_mk_arg('ref', $memory_8);
#line 276
$memory_9 = {
	module => "nast",
	name => "cmd_t",
};
#line 276
$memory_9 = c_rt_lib::ov_mk_arg('ref', $memory_9);
#line 276
$memory_10 = {
	module => "nast",
	name => "rep_t",
};
#line 276
$memory_10 = c_rt_lib::ov_mk_arg('ref', $memory_10);
#line 276
$memory_11 = {
	module => "nast",
	name => "while_t",
};
#line 276
$memory_11 = c_rt_lib::ov_mk_arg('ref', $memory_11);
#line 276
$memory_14 = {
	module => "nast",
	name => "value_t",
};
#line 276
$memory_14 = c_rt_lib::ov_mk_arg('ref', $memory_14);
#line 276
$memory_15 = {
	module => "nast",
	name => "cmd_t",
};
#line 276
$memory_15 = c_rt_lib::ov_mk_arg('ref', $memory_15);
#line 276
$memory_13 = {cond => $memory_14,cmd => $memory_15,};
#line 276
undef($memory_14);
#line 276
undef($memory_15);
#line 276
$memory_12 = ptd::rec($memory_13);
#line 276
undef($memory_13);
#line 276
$memory_15 = {
	module => "nast",
	name => "value_t",
};
#line 276
$memory_15 = c_rt_lib::ov_mk_arg('ref', $memory_15);
#line 276
$memory_16 = {
	module => "nast",
	name => "cmd_t",
};
#line 276
$memory_16 = c_rt_lib::ov_mk_arg('ref', $memory_16);
#line 276
$memory_14 = {cond => $memory_15,cmd => $memory_16,};
#line 276
undef($memory_15);
#line 276
undef($memory_16);
#line 276
$memory_13 = ptd::rec($memory_14);
#line 276
undef($memory_14);
#line 276
$memory_14 = ptd::none();
#line 276
$memory_15 = ptd::none();
#line 276
$memory_16 = {
	module => "nast",
	name => "match_t",
};
#line 276
$memory_16 = c_rt_lib::ov_mk_arg('ref', $memory_16);
#line 276
$memory_17 = {
	module => "nast",
	name => "value_t",
};
#line 276
$memory_17 = c_rt_lib::ov_mk_arg('ref', $memory_17);
#line 276
$memory_18 = {
	module => "nast",
	name => "try_ensure_t",
};
#line 276
$memory_18 = c_rt_lib::ov_mk_arg('ref', $memory_18);
#line 276
$memory_19 = {
	module => "nast",
	name => "try_ensure_t",
};
#line 276
$memory_19 = c_rt_lib::ov_mk_arg('ref', $memory_19);
#line 276
$memory_20 = {
	module => "nast",
	name => "variable_declaration_t",
};
#line 276
$memory_20 = c_rt_lib::ov_mk_arg('ref', $memory_20);
#line 276
$memory_21 = {
	module => "nast",
	name => "value_t",
};
#line 276
$memory_21 = c_rt_lib::ov_mk_arg('ref', $memory_21);
#line 276
$memory_23 = {
	module => "nast",
	name => "cmd_t",
};
#line 276
$memory_23 = c_rt_lib::ov_mk_arg('ref', $memory_23);
#line 276
$memory_22 = ptd::arr($memory_23);
#line 276
undef($memory_23);
#line 276
$memory_24 = {
	module => "nast",
	name => "value_t",
};
#line 276
$memory_24 = c_rt_lib::ov_mk_arg('ref', $memory_24);
#line 276
$memory_23 = ptd::arr($memory_24);
#line 276
undef($memory_24);
#line 276
$memory_24 = ptd::none();
#line 276
$memory_4 = {if => $memory_5,for => $memory_6,fora => $memory_7,forh => $memory_8,loop => $memory_9,rep => $memory_10,while => $memory_11,if_mod => $memory_12,unless_mod => $memory_13,break => $memory_14,continue => $memory_15,match => $memory_16,value => $memory_17,try => $memory_18,ensure => $memory_19,var_decl => $memory_20,return => $memory_21,block => $memory_22,die => $memory_23,nop => $memory_24,};
#line 276
undef($memory_5);
#line 276
undef($memory_6);
#line 276
undef($memory_7);
#line 276
undef($memory_8);
#line 276
undef($memory_9);
#line 276
undef($memory_10);
#line 276
undef($memory_11);
#line 276
undef($memory_12);
#line 276
undef($memory_13);
#line 276
undef($memory_14);
#line 276
undef($memory_15);
#line 276
undef($memory_16);
#line 276
undef($memory_17);
#line 276
undef($memory_18);
#line 276
undef($memory_19);
#line 276
undef($memory_20);
#line 276
undef($memory_21);
#line 276
undef($memory_22);
#line 276
undef($memory_23);
#line 276
undef($memory_24);
#line 276
$memory_3 = ptd::var($memory_4);
#line 276
undef($memory_4);
#line 276
$memory_1 = {debug => $memory_2,cmd => $memory_3,};
#line 276
undef($memory_2);
#line 276
undef($memory_3);
#line 276
$memory_0 = ptd::rec($memory_1);
#line 276
undef($memory_1);
#line 276
return $memory_0;
#line 276
undef($memory_0);
#line 276
return;
}

my $_cmd_t;
sub nast::cmd_t() {
	$_cmd_t = nast::__cmd_t() unless defined $_cmd_t;
	return $_cmd_t;
}
