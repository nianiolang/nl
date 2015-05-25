use c_rt_lib;
use ptd;
use nast;
sub nlasm::result_t;
sub nlasm::access_t;
sub nlasm::arg_type_t;
sub nlasm::function_t;
sub nlasm::reg_t;
sub nlasm::debug_t;
sub nlasm::empty_debug;
sub nlasm::cmd_t;
sub nlasm::order_t;
sub nlasm::ov_mk_t;
sub nlasm::call_t;

return 1;

sub nlasm::__result_t() {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;
#line 9
$memory_2 = ptd::sim();
#line 9
$memory_4 = {
	module => "nlasm",
	name => "function_t",
};
#line 9
$memory_4 = c_rt_lib::ov_mk_arg('ref', $memory_4);
#line 9
$memory_3 = ptd::arr($memory_4);
#line 9
undef($memory_4);
#line 9
$memory_5 = ptd::sim();
#line 9
$memory_4 = ptd::arr($memory_5);
#line 9
undef($memory_5);
#line 9
$memory_1 = {module_name => $memory_2,functions => $memory_3,imports => $memory_4,};
#line 9
undef($memory_2);
#line 9
undef($memory_3);
#line 9
undef($memory_4);
#line 9
$memory_0 = ptd::rec($memory_1);
#line 9
undef($memory_1);
#line 9
return $memory_0;
#line 9
undef($memory_0);
#line 9
return;
}

my $_result_t;
sub nlasm::result_t() {
	$_result_t = nlasm::__result_t() unless defined $_result_t;
	return $_result_t;
}

sub nlasm::__access_t() {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;
#line 17
$memory_2 = ptd::none();
#line 17
$memory_3 = ptd::none();
#line 17
$memory_1 = {pub => $memory_2,priv => $memory_3,};
#line 17
undef($memory_2);
#line 17
undef($memory_3);
#line 17
$memory_0 = ptd::var($memory_1);
#line 17
undef($memory_1);
#line 17
return $memory_0;
#line 17
undef($memory_0);
#line 17
return;
}

my $_access_t;
sub nlasm::access_t() {
	$_access_t = nlasm::__access_t() unless defined $_access_t;
	return $_access_t;
}

sub nlasm::__arg_type_t() {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;
#line 24
$memory_2 = ptd::none();
#line 24
$memory_3 = ptd::none();
#line 24
$memory_1 = {val => $memory_2,ref => $memory_3,};
#line 24
undef($memory_2);
#line 24
undef($memory_3);
#line 24
$memory_0 = ptd::var($memory_1);
#line 24
undef($memory_1);
#line 24
return $memory_0;
#line 24
undef($memory_0);
#line 24
return;
}

my $_arg_type_t;
sub nlasm::arg_type_t() {
	$_arg_type_t = nlasm::__arg_type_t() unless defined $_arg_type_t;
	return $_arg_type_t;
}

sub nlasm::__function_t() {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;
#line 31
$memory_4 = ptd::none();
#line 31
$memory_5 = ptd::none();
#line 31
$memory_6 = ptd::none();
#line 31
$memory_3 = {none => $memory_4,math => $memory_5,state => $memory_6,};
#line 31
undef($memory_4);
#line 31
undef($memory_5);
#line 31
undef($memory_6);
#line 31
$memory_2 = ptd::var($memory_3);
#line 31
undef($memory_3);
#line 31
$memory_3 = {
	module => "nlasm",
	name => "access_t",
};
#line 31
$memory_3 = c_rt_lib::ov_mk_arg('ref', $memory_3);
#line 31
$memory_4 = ptd::sim();
#line 31
$memory_6 = {
	module => "nlasm",
	name => "arg_type_t",
};
#line 31
$memory_6 = c_rt_lib::ov_mk_arg('ref', $memory_6);
#line 31
$memory_5 = ptd::arr($memory_6);
#line 31
undef($memory_6);
#line 31
$memory_7 = {
	module => "nlasm",
	name => "cmd_t",
};
#line 31
$memory_7 = c_rt_lib::ov_mk_arg('ref', $memory_7);
#line 31
$memory_6 = ptd::arr($memory_7);
#line 31
undef($memory_7);
#line 31
$memory_7 = ptd::sim();
#line 31
$memory_1 = {annotation => $memory_2,access => $memory_3,reg_size => $memory_4,args_type => $memory_5,commands => $memory_6,name => $memory_7,};
#line 31
undef($memory_2);
#line 31
undef($memory_3);
#line 31
undef($memory_4);
#line 31
undef($memory_5);
#line 31
undef($memory_6);
#line 31
undef($memory_7);
#line 31
$memory_0 = ptd::rec($memory_1);
#line 31
undef($memory_1);
#line 31
return $memory_0;
#line 31
undef($memory_0);
#line 31
return;
}

my $_function_t;
sub nlasm::function_t() {
	$_function_t = nlasm::__function_t() unless defined $_function_t;
	return $_function_t;
}

sub nlasm::__reg_t() {
my $memory_0;
#line 46
$memory_0 = ptd::sim();
#line 46
return $memory_0;
#line 46
undef($memory_0);
#line 46
return;
}

my $_reg_t;
sub nlasm::reg_t() {
	$_reg_t = nlasm::__reg_t() unless defined $_reg_t;
	return $_reg_t;
}

sub nlasm::__debug_t() {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;
#line 50
$memory_2 = {
	module => "nast",
	name => "debug_t",
};
#line 50
$memory_2 = c_rt_lib::ov_mk_arg('ref', $memory_2);
#line 50
$memory_3 = ptd::sim();
#line 50
$memory_5 = ptd::sim();
#line 50
$memory_4 = ptd::hash($memory_5);
#line 50
undef($memory_5);
#line 50
$memory_1 = {nast_debug => $memory_2,instruction_nr => $memory_3,declarations => $memory_4,};
#line 50
undef($memory_2);
#line 50
undef($memory_3);
#line 50
undef($memory_4);
#line 50
$memory_0 = ptd::rec($memory_1);
#line 50
undef($memory_1);
#line 50
return $memory_0;
#line 50
undef($memory_0);
#line 50
return;
}

my $_debug_t;
sub nlasm::debug_t() {
	$_debug_t = nlasm::__debug_t() unless defined $_debug_t;
	return $_debug_t;
}

sub nlasm::__empty_debug() {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;
#line 58
$memory_1 = nast::empty_debug();
#line 58
$memory_2 = 0;
#line 58
$memory_3 = {};
#line 58
$memory_0 = {nast_debug => $memory_1,instruction_nr => $memory_2,declarations => $memory_3,};
#line 58
undef($memory_1);
#line 58
undef($memory_2);
#line 58
undef($memory_3);
#line 58
return $memory_0;
#line 58
undef($memory_0);
#line 58
return;
}

my $_empty_debug;
sub nlasm::empty_debug() {
	$_empty_debug = nlasm::__empty_debug() unless defined $_empty_debug;
	return $_empty_debug;
}

sub nlasm::__cmd_t() {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;
#line 66
$memory_2 = {
	module => "nlasm",
	name => "debug_t",
};
#line 66
$memory_2 = c_rt_lib::ov_mk_arg('ref', $memory_2);
#line 66
$memory_5 = ptd::none();
#line 66
$memory_7 = ptd::sim();
#line 66
$memory_6 = ptd::arr($memory_7);
#line 66
undef($memory_7);
#line 66
$memory_4 = {none => $memory_5,const => $memory_6,};
#line 66
undef($memory_5);
#line 66
undef($memory_6);
#line 66
$memory_3 = ptd::var($memory_4);
#line 66
undef($memory_4);
#line 66
$memory_4 = {
	module => "nlasm",
	name => "order_t",
};
#line 66
$memory_4 = c_rt_lib::ov_mk_arg('ref', $memory_4);
#line 66
$memory_1 = {debug => $memory_2,annotation => $memory_3,cmd => $memory_4,};
#line 66
undef($memory_2);
#line 66
undef($memory_3);
#line 66
undef($memory_4);
#line 66
$memory_0 = ptd::rec($memory_1);
#line 66
undef($memory_1);
#line 66
return $memory_0;
#line 66
undef($memory_0);
#line 66
return;
}

my $_cmd_t;
sub nlasm::cmd_t() {
	$_cmd_t = nlasm::__cmd_t() unless defined $_cmd_t;
	return $_cmd_t;
}

sub nlasm::__order_t() {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;my $memory_13;my $memory_14;my $memory_15;my $memory_16;my $memory_17;my $memory_18;my $memory_19;my $memory_20;my $memory_21;my $memory_22;my $memory_23;
#line 76
$memory_4 = {
	module => "nlasm",
	name => "reg_t",
};
#line 76
$memory_4 = c_rt_lib::ov_mk_arg('ref', $memory_4);
#line 76
$memory_6 = {
	module => "nlasm",
	name => "reg_t",
};
#line 76
$memory_6 = c_rt_lib::ov_mk_arg('ref', $memory_6);
#line 76
$memory_5 = ptd::arr($memory_6);
#line 76
undef($memory_6);
#line 76
$memory_3 = {dest => $memory_4,src => $memory_5,};
#line 76
undef($memory_4);
#line 76
undef($memory_5);
#line 76
$memory_2 = ptd::rec($memory_3);
#line 76
undef($memory_3);
#line 76
$memory_5 = {
	module => "nlasm",
	name => "reg_t",
};
#line 76
$memory_5 = c_rt_lib::ov_mk_arg('ref', $memory_5);
#line 76
$memory_9 = ptd::sim();
#line 76
$memory_10 = {
	module => "nlasm",
	name => "reg_t",
};
#line 76
$memory_10 = c_rt_lib::ov_mk_arg('ref', $memory_10);
#line 76
$memory_8 = {key => $memory_9,val => $memory_10,};
#line 76
undef($memory_9);
#line 76
undef($memory_10);
#line 76
$memory_7 = ptd::rec($memory_8);
#line 76
undef($memory_8);
#line 76
$memory_6 = ptd::arr($memory_7);
#line 76
undef($memory_7);
#line 76
$memory_4 = {dest => $memory_5,src => $memory_6,};
#line 76
undef($memory_5);
#line 76
undef($memory_6);
#line 76
$memory_3 = ptd::rec($memory_4);
#line 76
undef($memory_4);
#line 76
$memory_6 = {
	module => "nlasm",
	name => "reg_t",
};
#line 76
$memory_6 = c_rt_lib::ov_mk_arg('ref', $memory_6);
#line 76
$memory_7 = ptd::sim();
#line 76
$memory_8 = ptd::sim();
#line 76
$memory_5 = {dest => $memory_6,module => $memory_7,name => $memory_8,};
#line 76
undef($memory_6);
#line 76
undef($memory_7);
#line 76
undef($memory_8);
#line 76
$memory_4 = ptd::rec($memory_5);
#line 76
undef($memory_5);
#line 76
$memory_5 = {
	module => "nlasm",
	name => "call_t",
};
#line 76
$memory_5 = c_rt_lib::ov_mk_arg('ref', $memory_5);
#line 76
$memory_8 = {
	module => "nlasm",
	name => "reg_t",
};
#line 76
$memory_8 = c_rt_lib::ov_mk_arg('ref', $memory_8);
#line 76
$memory_9 = {
	module => "nlasm",
	name => "reg_t",
};
#line 76
$memory_9 = c_rt_lib::ov_mk_arg('ref', $memory_9);
#line 76
$memory_10 = ptd::sim();
#line 76
$memory_7 = {dest => $memory_8,src => $memory_9,op => $memory_10,};
#line 76
undef($memory_8);
#line 76
undef($memory_9);
#line 76
undef($memory_10);
#line 76
$memory_6 = ptd::rec($memory_7);
#line 76
undef($memory_7);
#line 76
$memory_9 = {
	module => "nlasm",
	name => "reg_t",
};
#line 76
$memory_9 = c_rt_lib::ov_mk_arg('ref', $memory_9);
#line 76
$memory_10 = {
	module => "nlasm",
	name => "reg_t",
};
#line 76
$memory_10 = c_rt_lib::ov_mk_arg('ref', $memory_10);
#line 76
$memory_11 = {
	module => "nlasm",
	name => "reg_t",
};
#line 76
$memory_11 = c_rt_lib::ov_mk_arg('ref', $memory_11);
#line 76
$memory_12 = ptd::sim();
#line 76
$memory_8 = {dest => $memory_9,left => $memory_10,right => $memory_11,op => $memory_12,};
#line 76
undef($memory_9);
#line 76
undef($memory_10);
#line 76
undef($memory_11);
#line 76
undef($memory_12);
#line 76
$memory_7 = ptd::rec($memory_8);
#line 76
undef($memory_8);
#line 76
$memory_10 = {
	module => "nlasm",
	name => "reg_t",
};
#line 76
$memory_10 = c_rt_lib::ov_mk_arg('ref', $memory_10);
#line 76
$memory_11 = {
	module => "nlasm",
	name => "reg_t",
};
#line 76
$memory_11 = c_rt_lib::ov_mk_arg('ref', $memory_11);
#line 76
$memory_12 = ptd::sim();
#line 76
$memory_9 = {dest => $memory_10,src => $memory_11,type => $memory_12,};
#line 76
undef($memory_10);
#line 76
undef($memory_11);
#line 76
undef($memory_12);
#line 76
$memory_8 = ptd::rec($memory_9);
#line 76
undef($memory_9);
#line 76
$memory_11 = {
	module => "nlasm",
	name => "reg_t",
};
#line 76
$memory_11 = c_rt_lib::ov_mk_arg('ref', $memory_11);
#line 76
$memory_12 = {
	module => "nlasm",
	name => "reg_t",
};
#line 76
$memory_12 = c_rt_lib::ov_mk_arg('ref', $memory_12);
#line 76
$memory_13 = ptd::sim();
#line 76
$memory_10 = {dest => $memory_11,src => $memory_12,type => $memory_13,};
#line 76
undef($memory_11);
#line 76
undef($memory_12);
#line 76
undef($memory_13);
#line 76
$memory_9 = ptd::rec($memory_10);
#line 76
undef($memory_10);
#line 76
$memory_12 = {
	module => "nlasm",
	name => "reg_t",
};
#line 76
$memory_12 = c_rt_lib::ov_mk_arg('ref', $memory_12);
#line 76
$memory_13 = ptd::none();
#line 76
$memory_11 = {val => $memory_12,emp => $memory_13,};
#line 76
undef($memory_12);
#line 76
undef($memory_13);
#line 76
$memory_10 = ptd::var($memory_11);
#line 76
undef($memory_11);
#line 76
$memory_11 = {
	module => "nlasm",
	name => "reg_t",
};
#line 76
$memory_11 = c_rt_lib::ov_mk_arg('ref', $memory_11);
#line 76
$memory_14 = {
	module => "nlasm",
	name => "reg_t",
};
#line 76
$memory_14 = c_rt_lib::ov_mk_arg('ref', $memory_14);
#line 76
$memory_15 = {
	module => "nlasm",
	name => "reg_t",
};
#line 76
$memory_15 = c_rt_lib::ov_mk_arg('ref', $memory_15);
#line 76
$memory_13 = {dest => $memory_14,src => $memory_15,};
#line 76
undef($memory_14);
#line 76
undef($memory_15);
#line 76
$memory_12 = ptd::rec($memory_13);
#line 76
undef($memory_13);
#line 76
$memory_15 = {
	module => "nlasm",
	name => "reg_t",
};
#line 76
$memory_15 = c_rt_lib::ov_mk_arg('ref', $memory_15);
#line 76
$memory_16 = ptd::ptd_im();
#line 76
$memory_14 = {dest => $memory_15,val => $memory_16,};
#line 76
undef($memory_15);
#line 76
undef($memory_16);
#line 76
$memory_13 = ptd::rec($memory_14);
#line 76
undef($memory_14);
#line 76
$memory_16 = {
	module => "nlasm",
	name => "reg_t",
};
#line 76
$memory_16 = c_rt_lib::ov_mk_arg('ref', $memory_16);
#line 76
$memory_17 = {
	module => "nlasm",
	name => "reg_t",
};
#line 76
$memory_17 = c_rt_lib::ov_mk_arg('ref', $memory_17);
#line 76
$memory_18 = {
	module => "nlasm",
	name => "reg_t",
};
#line 76
$memory_18 = c_rt_lib::ov_mk_arg('ref', $memory_18);
#line 76
$memory_15 = {dest => $memory_16,src => $memory_17,idx => $memory_18,};
#line 76
undef($memory_16);
#line 76
undef($memory_17);
#line 76
undef($memory_18);
#line 76
$memory_14 = ptd::rec($memory_15);
#line 76
undef($memory_15);
#line 76
$memory_17 = {
	module => "nlasm",
	name => "reg_t",
};
#line 76
$memory_17 = c_rt_lib::ov_mk_arg('ref', $memory_17);
#line 76
$memory_18 = {
	module => "nlasm",
	name => "reg_t",
};
#line 76
$memory_18 = c_rt_lib::ov_mk_arg('ref', $memory_18);
#line 76
$memory_19 = {
	module => "nlasm",
	name => "reg_t",
};
#line 76
$memory_19 = c_rt_lib::ov_mk_arg('ref', $memory_19);
#line 76
$memory_16 = {src => $memory_17,idx => $memory_18,val => $memory_19,};
#line 76
undef($memory_17);
#line 76
undef($memory_18);
#line 76
undef($memory_19);
#line 76
$memory_15 = ptd::rec($memory_16);
#line 76
undef($memory_16);
#line 76
$memory_18 = {
	module => "nlasm",
	name => "reg_t",
};
#line 76
$memory_18 = c_rt_lib::ov_mk_arg('ref', $memory_18);
#line 76
$memory_19 = {
	module => "nlasm",
	name => "reg_t",
};
#line 76
$memory_19 = c_rt_lib::ov_mk_arg('ref', $memory_19);
#line 76
$memory_20 = ptd::sim();
#line 76
$memory_17 = {dest => $memory_18,src => $memory_19,key => $memory_20,};
#line 76
undef($memory_18);
#line 76
undef($memory_19);
#line 76
undef($memory_20);
#line 76
$memory_16 = ptd::rec($memory_17);
#line 76
undef($memory_17);
#line 76
$memory_19 = {
	module => "nlasm",
	name => "reg_t",
};
#line 76
$memory_19 = c_rt_lib::ov_mk_arg('ref', $memory_19);
#line 76
$memory_20 = ptd::sim();
#line 76
$memory_21 = {
	module => "nlasm",
	name => "reg_t",
};
#line 76
$memory_21 = c_rt_lib::ov_mk_arg('ref', $memory_21);
#line 76
$memory_18 = {src => $memory_19,key => $memory_20,val => $memory_21,};
#line 76
undef($memory_19);
#line 76
undef($memory_20);
#line 76
undef($memory_21);
#line 76
$memory_17 = ptd::rec($memory_18);
#line 76
undef($memory_18);
#line 76
$memory_18 = {
	module => "nlasm",
	name => "ov_mk_t",
};
#line 76
$memory_18 = c_rt_lib::ov_mk_arg('ref', $memory_18);
#line 76
$memory_19 = ptd::sim();
#line 76
$memory_22 = ptd::sim();
#line 76
$memory_23 = {
	module => "nlasm",
	name => "reg_t",
};
#line 76
$memory_23 = c_rt_lib::ov_mk_arg('ref', $memory_23);
#line 76
$memory_21 = {dest => $memory_22,src => $memory_23,};
#line 76
undef($memory_22);
#line 76
undef($memory_23);
#line 76
$memory_20 = ptd::rec($memory_21);
#line 76
undef($memory_21);
#line 76
$memory_21 = ptd::sim();
#line 76
$memory_22 = {
	module => "nlasm",
	name => "reg_t",
};
#line 76
$memory_22 = c_rt_lib::ov_mk_arg('ref', $memory_22);
#line 76
$memory_1 = {arr_decl => $memory_2,hash_decl => $memory_3,func => $memory_4,call => $memory_5,una_op => $memory_6,bin_op => $memory_7,ov_is => $memory_8,ov_as => $memory_9,return => $memory_10,die => $memory_11,move => $memory_12,load_const => $memory_13,get_frm_idx => $memory_14,set_at_idx => $memory_15,get_val => $memory_16,set_val => $memory_17,ov_mk => $memory_18,prt_lbl => $memory_19,if_goto => $memory_20,goto => $memory_21,clear => $memory_22,};
#line 76
undef($memory_2);
#line 76
undef($memory_3);
#line 76
undef($memory_4);
#line 76
undef($memory_5);
#line 76
undef($memory_6);
#line 76
undef($memory_7);
#line 76
undef($memory_8);
#line 76
undef($memory_9);
#line 76
undef($memory_10);
#line 76
undef($memory_11);
#line 76
undef($memory_12);
#line 76
undef($memory_13);
#line 76
undef($memory_14);
#line 76
undef($memory_15);
#line 76
undef($memory_16);
#line 76
undef($memory_17);
#line 76
undef($memory_18);
#line 76
undef($memory_19);
#line 76
undef($memory_20);
#line 76
undef($memory_21);
#line 76
undef($memory_22);
#line 76
$memory_0 = ptd::var($memory_1);
#line 76
undef($memory_1);
#line 76
return $memory_0;
#line 76
undef($memory_0);
#line 76
return;
}

my $_order_t;
sub nlasm::order_t() {
	$_order_t = nlasm::__order_t() unless defined $_order_t;
	return $_order_t;
}

sub nlasm::__ov_mk_t() {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;
#line 162
$memory_2 = {
	module => "nlasm",
	name => "reg_t",
};
#line 162
$memory_2 = c_rt_lib::ov_mk_arg('ref', $memory_2);
#line 162
$memory_5 = {
	module => "nlasm",
	name => "reg_t",
};
#line 162
$memory_5 = c_rt_lib::ov_mk_arg('ref', $memory_5);
#line 162
$memory_6 = ptd::none();
#line 162
$memory_4 = {arg => $memory_5,emp => $memory_6,};
#line 162
undef($memory_5);
#line 162
undef($memory_6);
#line 162
$memory_3 = ptd::var($memory_4);
#line 162
undef($memory_4);
#line 162
$memory_4 = ptd::sim();
#line 162
$memory_1 = {dest => $memory_2,src => $memory_3,name => $memory_4,};
#line 162
undef($memory_2);
#line 162
undef($memory_3);
#line 162
undef($memory_4);
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

my $_ov_mk_t;
sub nlasm::ov_mk_t() {
	$_ov_mk_t = nlasm::__ov_mk_t() unless defined $_ov_mk_t;
	return $_ov_mk_t;
}

sub nlasm::__call_t() {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;
#line 173
$memory_2 = {
	module => "nlasm",
	name => "reg_t",
};
#line 173
$memory_2 = c_rt_lib::ov_mk_arg('ref', $memory_2);
#line 173
$memory_3 = ptd::sim();
#line 173
$memory_4 = ptd::sim();
#line 173
$memory_8 = {
	module => "nlasm",
	name => "reg_t",
};
#line 173
$memory_8 = c_rt_lib::ov_mk_arg('ref', $memory_8);
#line 173
$memory_9 = {
	module => "nlasm",
	name => "reg_t",
};
#line 173
$memory_9 = c_rt_lib::ov_mk_arg('ref', $memory_9);
#line 173
$memory_7 = {val => $memory_8,ref => $memory_9,};
#line 173
undef($memory_8);
#line 173
undef($memory_9);
#line 173
$memory_6 = ptd::var($memory_7);
#line 173
undef($memory_7);
#line 173
$memory_5 = ptd::arr($memory_6);
#line 173
undef($memory_6);
#line 173
$memory_1 = {dest => $memory_2,mod => $memory_3,fun_name => $memory_4,args => $memory_5,};
#line 173
undef($memory_2);
#line 173
undef($memory_3);
#line 173
undef($memory_4);
#line 173
undef($memory_5);
#line 173
$memory_0 = ptd::rec($memory_1);
#line 173
undef($memory_1);
#line 173
return $memory_0;
#line 173
undef($memory_0);
#line 173
return;
}

my $_call_t;
sub nlasm::call_t() {
	$_call_t = nlasm::__call_t() unless defined $_call_t;
	return $_call_t;
}
