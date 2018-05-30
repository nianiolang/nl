use c_rt_lib;
use ptd;
use nast;
sub nlasm::result_t;
sub nlasm::access_t;
sub nlasm::arg_type_t;
sub nlasm::function_t;
sub nlasm::cmds_t;
sub nlasm::args_type;
sub nlasm::reg_t;
sub nlasm::debug_t;
sub nlasm::empty_debug;
sub nlasm::cmd_t;
sub nlasm::annotation_t;
sub nlasm::order_t;
sub nlasm::label_t;
sub nlasm::una_op_t;
sub nlasm::bin_op;
sub nlasm::return;
sub nlasm::ov_mk_t;
sub nlasm::call_t;

return 1;

sub nlasm::__result_t() {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;
#line 11
$memory_2 = ptd::sim();
#line 12
$memory_4 = {
	module => "nlasm",
	name => "function_t",
};
#line 12
$memory_4 = c_rt_lib::ov_mk_arg('ref', $memory_4);
#line 12
$memory_3 = ptd::arr($memory_4);
#line 12
undef($memory_4);
#line 13
$memory_5 = ptd::sim();
#line 13
$memory_4 = ptd::arr($memory_5);
#line 13
undef($memory_5);
#line 13
$memory_1 = {module_name => $memory_2,functions => $memory_3,imports => $memory_4,};
#line 13
undef($memory_2);
#line 13
undef($memory_3);
#line 13
undef($memory_4);
#line 13
$memory_0 = ptd::rec($memory_1);
#line 13
undef($memory_1);
#line 13
return $memory_0;
#line 13
undef($memory_0);
#line 13
return;
}

my $_result_t;
sub nlasm::result_t() {
	$_result_t = nlasm::__result_t() unless defined $_result_t;
	return $_result_t;
}

sub nlasm::__access_t() {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;
#line 18
$memory_2 = ptd::none();
#line 18
$memory_3 = ptd::none();
#line 18
$memory_1 = {pub => $memory_2,priv => $memory_3,};
#line 18
undef($memory_2);
#line 18
undef($memory_3);
#line 18
$memory_0 = ptd::var($memory_1);
#line 18
undef($memory_1);
#line 18
return $memory_0;
#line 18
undef($memory_0);
#line 18
return;
}

my $_access_t;
sub nlasm::access_t() {
	$_access_t = nlasm::__access_t() unless defined $_access_t;
	return $_access_t;
}

sub nlasm::__arg_type_t() {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;
#line 22
$memory_2 = ptd::none();
#line 22
$memory_3 = ptd::none();
#line 22
$memory_1 = {val => $memory_2,ref => $memory_3,};
#line 22
undef($memory_2);
#line 22
undef($memory_3);
#line 22
$memory_0 = ptd::var($memory_1);
#line 22
undef($memory_1);
#line 22
return $memory_0;
#line 22
undef($memory_0);
#line 22
return;
}

my $_arg_type_t;
sub nlasm::arg_type_t() {
	$_arg_type_t = nlasm::__arg_type_t() unless defined $_arg_type_t;
	return $_arg_type_t;
}

sub nlasm::__function_t() {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;
#line 27
$memory_4 = ptd::none();
#line 27
$memory_5 = ptd::none();
#line 27
$memory_6 = ptd::none();
#line 27
$memory_3 = {none => $memory_4,math => $memory_5,state => $memory_6,};
#line 27
undef($memory_4);
#line 27
undef($memory_5);
#line 27
undef($memory_6);
#line 27
$memory_2 = ptd::var($memory_3);
#line 27
undef($memory_3);
#line 28
$memory_3 = {
	module => "nlasm",
	name => "access_t",
};
#line 28
$memory_3 = c_rt_lib::ov_mk_arg('ref', $memory_3);
#line 29
$memory_4 = ptd::sim();
#line 30
$memory_5 = {
	module => "nlasm",
	name => "args_type",
};
#line 30
$memory_5 = c_rt_lib::ov_mk_arg('ref', $memory_5);
#line 31
$memory_6 = {
	module => "nlasm",
	name => "cmds_t",
};
#line 31
$memory_6 = c_rt_lib::ov_mk_arg('ref', $memory_6);
#line 32
$memory_7 = ptd::sim();
#line 32
$memory_1 = {annotation => $memory_2,access => $memory_3,reg_size => $memory_4,args_type => $memory_5,commands => $memory_6,name => $memory_7,};
#line 32
undef($memory_2);
#line 32
undef($memory_3);
#line 32
undef($memory_4);
#line 32
undef($memory_5);
#line 32
undef($memory_6);
#line 32
undef($memory_7);
#line 32
$memory_0 = ptd::rec($memory_1);
#line 32
undef($memory_1);
#line 32
return $memory_0;
#line 32
undef($memory_0);
#line 32
return;
}

my $_function_t;
sub nlasm::function_t() {
	$_function_t = nlasm::__function_t() unless defined $_function_t;
	return $_function_t;
}

sub nlasm::__cmds_t() {
my $memory_0;my $memory_1;
#line 37
$memory_1 = {
	module => "nlasm",
	name => "cmd_t",
};
#line 37
$memory_1 = c_rt_lib::ov_mk_arg('ref', $memory_1);
#line 37
$memory_0 = ptd::arr($memory_1);
#line 37
undef($memory_1);
#line 37
return $memory_0;
#line 37
undef($memory_0);
#line 37
return;
}

my $_cmds_t;
sub nlasm::cmds_t() {
	$_cmds_t = nlasm::__cmds_t() unless defined $_cmds_t;
	return $_cmds_t;
}

sub nlasm::__args_type() {
my $memory_0;my $memory_1;
#line 41
$memory_1 = {
	module => "nlasm",
	name => "arg_type_t",
};
#line 41
$memory_1 = c_rt_lib::ov_mk_arg('ref', $memory_1);
#line 41
$memory_0 = ptd::arr($memory_1);
#line 41
undef($memory_1);
#line 41
return $memory_0;
#line 41
undef($memory_0);
#line 41
return;
}

my $_args_type;
sub nlasm::args_type() {
	$_args_type = nlasm::__args_type() unless defined $_args_type;
	return $_args_type;
}

sub nlasm::__reg_t() {
my $memory_0;
#line 45
$memory_0 = ptd::sim();
#line 45
return $memory_0;
#line 45
undef($memory_0);
#line 45
return;
}

my $_reg_t;
sub nlasm::reg_t() {
	$_reg_t = nlasm::__reg_t() unless defined $_reg_t;
	return $_reg_t;
}

sub nlasm::__debug_t() {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;
#line 49
$memory_2 = {
	module => "nast",
	name => "debug_t",
};
#line 49
$memory_2 = c_rt_lib::ov_mk_arg('ref', $memory_2);
#line 49
$memory_3 = ptd::sim();
#line 49
$memory_5 = ptd::sim();
#line 49
$memory_4 = ptd::hash($memory_5);
#line 49
undef($memory_5);
#line 49
$memory_1 = {nast_debug => $memory_2,instruction_nr => $memory_3,declarations => $memory_4,};
#line 49
undef($memory_2);
#line 49
undef($memory_3);
#line 49
undef($memory_4);
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

my $_debug_t;
sub nlasm::debug_t() {
	$_debug_t = nlasm::__debug_t() unless defined $_debug_t;
	return $_debug_t;
}

sub nlasm::__empty_debug() {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;
#line 53
$memory_1 = nast::empty_debug();
#line 53
$memory_2 = 0;
#line 53
$memory_3 = {};
#line 53
$memory_0 = {nast_debug => $memory_1,instruction_nr => $memory_2,declarations => $memory_3,};
#line 53
undef($memory_1);
#line 53
undef($memory_2);
#line 53
undef($memory_3);
#line 53
return $memory_0;
#line 53
undef($memory_0);
#line 53
return;
}

my $_empty_debug;
sub nlasm::empty_debug() {
	$_empty_debug = nlasm::__empty_debug() unless defined $_empty_debug;
	return $_empty_debug;
}

sub nlasm::__cmd_t() {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;
#line 58
$memory_2 = {
	module => "nlasm",
	name => "debug_t",
};
#line 58
$memory_2 = c_rt_lib::ov_mk_arg('ref', $memory_2);
#line 59
$memory_3 = {
	module => "nlasm",
	name => "annotation_t",
};
#line 59
$memory_3 = c_rt_lib::ov_mk_arg('ref', $memory_3);
#line 60
$memory_4 = {
	module => "nlasm",
	name => "order_t",
};
#line 60
$memory_4 = c_rt_lib::ov_mk_arg('ref', $memory_4);
#line 60
$memory_1 = {debug => $memory_2,annotation => $memory_3,cmd => $memory_4,};
#line 60
undef($memory_2);
#line 60
undef($memory_3);
#line 60
undef($memory_4);
#line 60
$memory_0 = ptd::rec($memory_1);
#line 60
undef($memory_1);
#line 60
return $memory_0;
#line 60
undef($memory_0);
#line 60
return;
}

my $_cmd_t;
sub nlasm::cmd_t() {
	$_cmd_t = nlasm::__cmd_t() unless defined $_cmd_t;
	return $_cmd_t;
}

sub nlasm::__annotation_t() {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;
#line 65
$memory_2 = ptd::none();
#line 65
$memory_4 = ptd::sim();
#line 65
$memory_3 = ptd::arr($memory_4);
#line 65
undef($memory_4);
#line 65
$memory_1 = {none => $memory_2,const => $memory_3,};
#line 65
undef($memory_2);
#line 65
undef($memory_3);
#line 65
$memory_0 = ptd::var($memory_1);
#line 65
undef($memory_1);
#line 65
return $memory_0;
#line 65
undef($memory_0);
#line 65
return;
}

my $_annotation_t;
sub nlasm::annotation_t() {
	$_annotation_t = nlasm::__annotation_t() unless defined $_annotation_t;
	return $_annotation_t;
}

sub nlasm::__order_t() {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;my $memory_13;my $memory_14;my $memory_15;my $memory_16;my $memory_17;my $memory_18;my $memory_19;my $memory_20;my $memory_21;my $memory_22;my $memory_23;
#line 70
$memory_4 = {
	module => "nlasm",
	name => "reg_t",
};
#line 70
$memory_4 = c_rt_lib::ov_mk_arg('ref', $memory_4);
#line 70
$memory_6 = {
	module => "nlasm",
	name => "reg_t",
};
#line 70
$memory_6 = c_rt_lib::ov_mk_arg('ref', $memory_6);
#line 70
$memory_5 = ptd::arr($memory_6);
#line 70
undef($memory_6);
#line 70
$memory_3 = {dest => $memory_4,src => $memory_5,};
#line 70
undef($memory_4);
#line 70
undef($memory_5);
#line 70
$memory_2 = ptd::rec($memory_3);
#line 70
undef($memory_3);
#line 72
$memory_5 = {
	module => "nlasm",
	name => "reg_t",
};
#line 72
$memory_5 = c_rt_lib::ov_mk_arg('ref', $memory_5);
#line 73
$memory_9 = ptd::sim();
#line 73
$memory_10 = {
	module => "nlasm",
	name => "reg_t",
};
#line 73
$memory_10 = c_rt_lib::ov_mk_arg('ref', $memory_10);
#line 73
$memory_8 = {key => $memory_9,val => $memory_10,};
#line 73
undef($memory_9);
#line 73
undef($memory_10);
#line 73
$memory_7 = ptd::rec($memory_8);
#line 73
undef($memory_8);
#line 73
$memory_6 = ptd::arr($memory_7);
#line 73
undef($memory_7);
#line 73
$memory_4 = {dest => $memory_5,src => $memory_6,};
#line 73
undef($memory_5);
#line 73
undef($memory_6);
#line 73
$memory_3 = ptd::rec($memory_4);
#line 73
undef($memory_4);
#line 75
$memory_6 = {
	module => "nlasm",
	name => "reg_t",
};
#line 75
$memory_6 = c_rt_lib::ov_mk_arg('ref', $memory_6);
#line 75
$memory_7 = ptd::sim();
#line 75
$memory_8 = ptd::sim();
#line 75
$memory_5 = {dest => $memory_6,module => $memory_7,name => $memory_8,};
#line 75
undef($memory_6);
#line 75
undef($memory_7);
#line 75
undef($memory_8);
#line 75
$memory_4 = ptd::rec($memory_5);
#line 75
undef($memory_5);
#line 76
$memory_5 = {
	module => "nlasm",
	name => "call_t",
};
#line 76
$memory_5 = c_rt_lib::ov_mk_arg('ref', $memory_5);
#line 77
$memory_6 = {
	module => "nlasm",
	name => "una_op_t",
};
#line 77
$memory_6 = c_rt_lib::ov_mk_arg('ref', $memory_6);
#line 78
$memory_7 = {
	module => "nlasm",
	name => "bin_op",
};
#line 78
$memory_7 = c_rt_lib::ov_mk_arg('ref', $memory_7);
#line 79
$memory_10 = {
	module => "nlasm",
	name => "reg_t",
};
#line 79
$memory_10 = c_rt_lib::ov_mk_arg('ref', $memory_10);
#line 79
$memory_11 = {
	module => "nlasm",
	name => "reg_t",
};
#line 79
$memory_11 = c_rt_lib::ov_mk_arg('ref', $memory_11);
#line 79
$memory_12 = ptd::sim();
#line 79
$memory_9 = {dest => $memory_10,src => $memory_11,type => $memory_12,};
#line 79
undef($memory_10);
#line 79
undef($memory_11);
#line 79
undef($memory_12);
#line 79
$memory_8 = ptd::rec($memory_9);
#line 79
undef($memory_9);
#line 80
$memory_11 = {
	module => "nlasm",
	name => "reg_t",
};
#line 80
$memory_11 = c_rt_lib::ov_mk_arg('ref', $memory_11);
#line 80
$memory_12 = {
	module => "nlasm",
	name => "reg_t",
};
#line 80
$memory_12 = c_rt_lib::ov_mk_arg('ref', $memory_12);
#line 80
$memory_13 = ptd::sim();
#line 80
$memory_10 = {dest => $memory_11,src => $memory_12,type => $memory_13,};
#line 80
undef($memory_11);
#line 80
undef($memory_12);
#line 80
undef($memory_13);
#line 80
$memory_9 = ptd::rec($memory_10);
#line 80
undef($memory_10);
#line 81
$memory_10 = {
	module => "nlasm",
	name => "return",
};
#line 81
$memory_10 = c_rt_lib::ov_mk_arg('ref', $memory_10);
#line 82
$memory_11 = {
	module => "nlasm",
	name => "reg_t",
};
#line 82
$memory_11 = c_rt_lib::ov_mk_arg('ref', $memory_11);
#line 83
$memory_14 = {
	module => "nlasm",
	name => "reg_t",
};
#line 83
$memory_14 = c_rt_lib::ov_mk_arg('ref', $memory_14);
#line 83
$memory_15 = {
	module => "nlasm",
	name => "reg_t",
};
#line 83
$memory_15 = c_rt_lib::ov_mk_arg('ref', $memory_15);
#line 83
$memory_13 = {dest => $memory_14,src => $memory_15,};
#line 83
undef($memory_14);
#line 83
undef($memory_15);
#line 83
$memory_12 = ptd::rec($memory_13);
#line 83
undef($memory_13);
#line 84
$memory_15 = {
	module => "nlasm",
	name => "reg_t",
};
#line 84
$memory_15 = c_rt_lib::ov_mk_arg('ref', $memory_15);
#line 84
$memory_16 = ptd::ptd_im();
#line 84
$memory_14 = {dest => $memory_15,val => $memory_16,};
#line 84
undef($memory_15);
#line 84
undef($memory_16);
#line 84
$memory_13 = ptd::rec($memory_14);
#line 84
undef($memory_14);
#line 85
$memory_16 = {
	module => "nlasm",
	name => "reg_t",
};
#line 85
$memory_16 = c_rt_lib::ov_mk_arg('ref', $memory_16);
#line 85
$memory_17 = {
	module => "nlasm",
	name => "reg_t",
};
#line 85
$memory_17 = c_rt_lib::ov_mk_arg('ref', $memory_17);
#line 85
$memory_18 = {
	module => "nlasm",
	name => "reg_t",
};
#line 85
$memory_18 = c_rt_lib::ov_mk_arg('ref', $memory_18);
#line 85
$memory_15 = {dest => $memory_16,src => $memory_17,idx => $memory_18,};
#line 85
undef($memory_16);
#line 85
undef($memory_17);
#line 85
undef($memory_18);
#line 85
$memory_14 = ptd::rec($memory_15);
#line 85
undef($memory_15);
#line 86
$memory_17 = {
	module => "nlasm",
	name => "reg_t",
};
#line 86
$memory_17 = c_rt_lib::ov_mk_arg('ref', $memory_17);
#line 86
$memory_18 = {
	module => "nlasm",
	name => "reg_t",
};
#line 86
$memory_18 = c_rt_lib::ov_mk_arg('ref', $memory_18);
#line 86
$memory_19 = {
	module => "nlasm",
	name => "reg_t",
};
#line 86
$memory_19 = c_rt_lib::ov_mk_arg('ref', $memory_19);
#line 86
$memory_16 = {src => $memory_17,idx => $memory_18,val => $memory_19,};
#line 86
undef($memory_17);
#line 86
undef($memory_18);
#line 86
undef($memory_19);
#line 86
$memory_15 = ptd::rec($memory_16);
#line 86
undef($memory_16);
#line 87
$memory_18 = {
	module => "nlasm",
	name => "reg_t",
};
#line 87
$memory_18 = c_rt_lib::ov_mk_arg('ref', $memory_18);
#line 87
$memory_19 = {
	module => "nlasm",
	name => "reg_t",
};
#line 87
$memory_19 = c_rt_lib::ov_mk_arg('ref', $memory_19);
#line 87
$memory_20 = ptd::sim();
#line 87
$memory_17 = {dest => $memory_18,src => $memory_19,key => $memory_20,};
#line 87
undef($memory_18);
#line 87
undef($memory_19);
#line 87
undef($memory_20);
#line 87
$memory_16 = ptd::rec($memory_17);
#line 87
undef($memory_17);
#line 88
$memory_19 = {
	module => "nlasm",
	name => "reg_t",
};
#line 88
$memory_19 = c_rt_lib::ov_mk_arg('ref', $memory_19);
#line 88
$memory_20 = ptd::sim();
#line 88
$memory_21 = {
	module => "nlasm",
	name => "reg_t",
};
#line 88
$memory_21 = c_rt_lib::ov_mk_arg('ref', $memory_21);
#line 88
$memory_18 = {src => $memory_19,key => $memory_20,val => $memory_21,};
#line 88
undef($memory_19);
#line 88
undef($memory_20);
#line 88
undef($memory_21);
#line 88
$memory_17 = ptd::rec($memory_18);
#line 88
undef($memory_18);
#line 89
$memory_18 = {
	module => "nlasm",
	name => "ov_mk_t",
};
#line 89
$memory_18 = c_rt_lib::ov_mk_arg('ref', $memory_18);
#line 90
$memory_19 = {
	module => "nlasm",
	name => "label_t",
};
#line 90
$memory_19 = c_rt_lib::ov_mk_arg('ref', $memory_19);
#line 91
$memory_22 = {
	module => "nlasm",
	name => "label_t",
};
#line 91
$memory_22 = c_rt_lib::ov_mk_arg('ref', $memory_22);
#line 91
$memory_23 = {
	module => "nlasm",
	name => "reg_t",
};
#line 91
$memory_23 = c_rt_lib::ov_mk_arg('ref', $memory_23);
#line 91
$memory_21 = {dest => $memory_22,src => $memory_23,};
#line 91
undef($memory_22);
#line 91
undef($memory_23);
#line 91
$memory_20 = ptd::rec($memory_21);
#line 91
undef($memory_21);
#line 92
$memory_21 = {
	module => "nlasm",
	name => "label_t",
};
#line 92
$memory_21 = c_rt_lib::ov_mk_arg('ref', $memory_21);
#line 93
$memory_22 = {
	module => "nlasm",
	name => "reg_t",
};
#line 93
$memory_22 = c_rt_lib::ov_mk_arg('ref', $memory_22);
#line 93
$memory_1 = {arr_decl => $memory_2,hash_decl => $memory_3,func => $memory_4,call => $memory_5,una_op => $memory_6,bin_op => $memory_7,ov_is => $memory_8,ov_as => $memory_9,return => $memory_10,die => $memory_11,move => $memory_12,load_const => $memory_13,get_frm_idx => $memory_14,set_at_idx => $memory_15,get_val => $memory_16,set_val => $memory_17,ov_mk => $memory_18,prt_lbl => $memory_19,if_goto => $memory_20,goto => $memory_21,clear => $memory_22,};
#line 93
undef($memory_2);
#line 93
undef($memory_3);
#line 93
undef($memory_4);
#line 93
undef($memory_5);
#line 93
undef($memory_6);
#line 93
undef($memory_7);
#line 93
undef($memory_8);
#line 93
undef($memory_9);
#line 93
undef($memory_10);
#line 93
undef($memory_11);
#line 93
undef($memory_12);
#line 93
undef($memory_13);
#line 93
undef($memory_14);
#line 93
undef($memory_15);
#line 93
undef($memory_16);
#line 93
undef($memory_17);
#line 93
undef($memory_18);
#line 93
undef($memory_19);
#line 93
undef($memory_20);
#line 93
undef($memory_21);
#line 93
undef($memory_22);
#line 93
$memory_0 = ptd::var($memory_1);
#line 93
undef($memory_1);
#line 93
return $memory_0;
#line 93
undef($memory_0);
#line 93
return;
}

my $_order_t;
sub nlasm::order_t() {
	$_order_t = nlasm::__order_t() unless defined $_order_t;
	return $_order_t;
}

sub nlasm::__label_t() {
my $memory_0;
#line 98
$memory_0 = ptd::sim();
#line 98
return $memory_0;
#line 98
undef($memory_0);
#line 98
return;
}

my $_label_t;
sub nlasm::label_t() {
	$_label_t = nlasm::__label_t() unless defined $_label_t;
	return $_label_t;
}

sub nlasm::__una_op_t() {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;
#line 102
$memory_2 = {
	module => "nlasm",
	name => "reg_t",
};
#line 102
$memory_2 = c_rt_lib::ov_mk_arg('ref', $memory_2);
#line 102
$memory_3 = {
	module => "nlasm",
	name => "reg_t",
};
#line 102
$memory_3 = c_rt_lib::ov_mk_arg('ref', $memory_3);
#line 102
$memory_4 = ptd::sim();
#line 102
$memory_1 = {dest => $memory_2,src => $memory_3,op => $memory_4,};
#line 102
undef($memory_2);
#line 102
undef($memory_3);
#line 102
undef($memory_4);
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

my $_una_op_t;
sub nlasm::una_op_t() {
	$_una_op_t = nlasm::__una_op_t() unless defined $_una_op_t;
	return $_una_op_t;
}

sub nlasm::__bin_op() {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;
#line 106
$memory_2 = {
	module => "nlasm",
	name => "reg_t",
};
#line 106
$memory_2 = c_rt_lib::ov_mk_arg('ref', $memory_2);
#line 106
$memory_3 = {
	module => "nlasm",
	name => "reg_t",
};
#line 106
$memory_3 = c_rt_lib::ov_mk_arg('ref', $memory_3);
#line 106
$memory_4 = {
	module => "nlasm",
	name => "reg_t",
};
#line 106
$memory_4 = c_rt_lib::ov_mk_arg('ref', $memory_4);
#line 106
$memory_5 = ptd::sim();
#line 106
$memory_1 = {dest => $memory_2,left => $memory_3,right => $memory_4,op => $memory_5,};
#line 106
undef($memory_2);
#line 106
undef($memory_3);
#line 106
undef($memory_4);
#line 106
undef($memory_5);
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

my $_bin_op;
sub nlasm::bin_op() {
	$_bin_op = nlasm::__bin_op() unless defined $_bin_op;
	return $_bin_op;
}

sub nlasm::__return() {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;
#line 110
$memory_2 = {
	module => "nlasm",
	name => "reg_t",
};
#line 110
$memory_2 = c_rt_lib::ov_mk_arg('ref', $memory_2);
#line 110
$memory_3 = ptd::none();
#line 110
$memory_1 = {val => $memory_2,emp => $memory_3,};
#line 110
undef($memory_2);
#line 110
undef($memory_3);
#line 110
$memory_0 = ptd::var($memory_1);
#line 110
undef($memory_1);
#line 110
return $memory_0;
#line 110
undef($memory_0);
#line 110
return;
}

my $_return;
sub nlasm::return() {
	$_return = nlasm::__return() unless defined $_return;
	return $_return;
}

sub nlasm::__ov_mk_t() {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;
#line 115
$memory_2 = {
	module => "nlasm",
	name => "reg_t",
};
#line 115
$memory_2 = c_rt_lib::ov_mk_arg('ref', $memory_2);
#line 116
$memory_5 = {
	module => "nlasm",
	name => "reg_t",
};
#line 116
$memory_5 = c_rt_lib::ov_mk_arg('ref', $memory_5);
#line 116
$memory_6 = ptd::none();
#line 116
$memory_4 = {arg => $memory_5,emp => $memory_6,};
#line 116
undef($memory_5);
#line 116
undef($memory_6);
#line 116
$memory_3 = ptd::var($memory_4);
#line 116
undef($memory_4);
#line 117
$memory_4 = ptd::sim();
#line 117
$memory_1 = {dest => $memory_2,src => $memory_3,name => $memory_4,};
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

my $_ov_mk_t;
sub nlasm::ov_mk_t() {
	$_ov_mk_t = nlasm::__ov_mk_t() unless defined $_ov_mk_t;
	return $_ov_mk_t;
}

sub nlasm::__call_t() {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;
#line 123
$memory_2 = {
	module => "nlasm",
	name => "reg_t",
};
#line 123
$memory_2 = c_rt_lib::ov_mk_arg('ref', $memory_2);
#line 124
$memory_3 = ptd::sim();
#line 125
$memory_4 = ptd::sim();
#line 126
$memory_8 = {
	module => "nlasm",
	name => "reg_t",
};
#line 126
$memory_8 = c_rt_lib::ov_mk_arg('ref', $memory_8);
#line 126
$memory_9 = {
	module => "nlasm",
	name => "reg_t",
};
#line 126
$memory_9 = c_rt_lib::ov_mk_arg('ref', $memory_9);
#line 126
$memory_7 = {val => $memory_8,ref => $memory_9,};
#line 126
undef($memory_8);
#line 126
undef($memory_9);
#line 126
$memory_6 = ptd::var($memory_7);
#line 126
undef($memory_7);
#line 126
$memory_5 = ptd::arr($memory_6);
#line 126
undef($memory_6);
#line 126
$memory_1 = {dest => $memory_2,mod => $memory_3,fun_name => $memory_4,args => $memory_5,};
#line 126
undef($memory_2);
#line 126
undef($memory_3);
#line 126
undef($memory_4);
#line 126
undef($memory_5);
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

my $_call_t;
sub nlasm::call_t() {
	$_call_t = nlasm::__call_t() unless defined $_call_t;
	return $_call_t;
}
