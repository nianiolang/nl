use c_rt_lib;
use array;
use hash;
use nlasm;
use ov;
use ptd;
use boolean_t;
use nast;
use func;
use nl;
use string;
use string_utils;
use dfile;
use c_rt_lib;
use profile_inter;
sub interpreter::stack_element_t;
sub interpreter::module_labels_t;
sub interpreter::known_exec_func_t;
sub interpreter::state_t;
sub interpreter::rstate_t;
sub interpreter::callback_t;
sub interpreter::stack_t;
sub interpreter::stack_element_debug_t;
sub interpreter::part_state_t;
sub interpreter::part_state;
sub interpreter_priv::build_state;
sub interpreter::init;
sub interpreter::get_short_state;
sub interpreter::init_from_part_and_short;
sub interpreter::init_from_short;
sub interpreter::init_from_part;
sub interpreter::start;
sub interpreter::start_args;
sub interpreter::exec_instruction;
sub interpreter::exec_all_code;
sub interpreter::evaluate_const;
sub interpreter::get_none_variant;
sub interpreter_priv::build_registers;
sub interpreter_priv::build_labels;
sub interpreter_priv::build_functions;
sub interpreter_priv::get_stack_element_debug;
sub interpreter::get_profile;
sub interpreter::get_whole_stack_debug;
sub interpreter::has_next_instruction;
sub interpreter_priv::get_variables;
sub interpreter::get_instruction_nr;
sub interpreter_priv::is_hidden;
sub interpreter::execute_full_instruction;
sub interpreter_priv::handle_new_declarations;
sub interpreter_priv::step;
sub interpreter_priv::check_command;
sub interpreter::callback_value_t;
sub interpreter::return_t;
sub interpreter_priv::append_profile;
sub interpreter::finish_callback;
sub interpreter_priv::handle_normal_call;
sub interpreter_priv::handle_unknown_call;
sub interpreter_priv::handle_extern_call;
sub interpreter_priv::get_compiler_functions;
sub interpreter_priv::handle_array_call;
sub interpreter_priv::handle_hash_call;
sub interpreter_priv::handle_string_call;
sub interpreter_priv::handle_ov_call;
sub interpreter_priv::handle_ptd_call;
sub interpreter_priv::handle_c_rt_lib_call;
sub interpreter_priv::handle_compiler_call;
sub interpreter_priv::handle_return;
sub interpreter_priv::goto;
sub interpreter_priv::execute_bin_op;
sub interpreter_priv::execute_una_op;
sub interpreter_priv::get_command;
sub interpreter_priv::get_func_key;

return 1;

sub interpreter::__stack_element_t() {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;
#line 23
$memory_2 = ptd::sim();
#line 24
$memory_3 = ptd::sim();
#line 25
$memory_4 = ptd::sim();
#line 26
$memory_6 = ptd::ptd_im();
#line 26
$memory_5 = ptd::arr($memory_6);
#line 26
undef($memory_6);
#line 27
$memory_6 = ptd::sim();
#line 28
$memory_8 = ptd::sim();
#line 28
$memory_7 = ptd::hash($memory_8);
#line 28
undef($memory_8);
#line 29
$memory_9 = ptd::sim();
#line 29
$memory_8 = ptd::hash($memory_9);
#line 29
undef($memory_9);
#line 29
$memory_1 = {func_key => $memory_2,module_name => $memory_3,next => $memory_4,vars => $memory_5,ret => $memory_6,code_vars => $memory_7,ref_arguments => $memory_8,};
#line 29
undef($memory_2);
#line 29
undef($memory_3);
#line 29
undef($memory_4);
#line 29
undef($memory_5);
#line 29
undef($memory_6);
#line 29
undef($memory_7);
#line 29
undef($memory_8);
#line 29
$memory_0 = ptd::rec($memory_1);
#line 29
undef($memory_1);
#line 29
return $memory_0;
#line 29
undef($memory_0);
#line 29
return;
}

my $_stack_element_t;
sub interpreter::stack_element_t() {
	$_stack_element_t = interpreter::__stack_element_t() unless defined $_stack_element_t;
	return $_stack_element_t;
}

sub interpreter::__module_labels_t() {
my $memory_0;my $memory_1;my $memory_2;
#line 34
$memory_2 = ptd::sim();
#line 34
$memory_1 = ptd::hash($memory_2);
#line 34
undef($memory_2);
#line 34
$memory_0 = ptd::hash($memory_1);
#line 34
undef($memory_1);
#line 34
return $memory_0;
#line 34
undef($memory_0);
#line 34
return;
}

my $_module_labels_t;
sub interpreter::module_labels_t() {
	$_module_labels_t = interpreter::__module_labels_t() unless defined $_module_labels_t;
	return $_module_labels_t;
}

sub interpreter::__known_exec_func_t() {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;
#line 39
$memory_2 = ptd::ptd_im();
#line 40
$memory_4 = {
	module => "ptd",
	name => "meta_type",
};
#line 40
$memory_4 = c_rt_lib::ov_mk_arg('ref', $memory_4);
#line 40
$memory_3 = ptd::arr($memory_4);
#line 40
undef($memory_4);
#line 41
$memory_6 = {
	module => "ptd",
	name => "meta_type",
};
#line 41
$memory_6 = c_rt_lib::ov_mk_arg('ref', $memory_6);
#line 41
$memory_7 = ptd::none();
#line 41
$memory_5 = {yes => $memory_6,no => $memory_7,};
#line 41
undef($memory_6);
#line 41
undef($memory_7);
#line 41
$memory_4 = ptd::var($memory_5);
#line 41
undef($memory_5);
#line 42
$memory_7 = ptd::none();
#line 42
$memory_8 = ptd::none();
#line 42
$memory_6 = {callback => $memory_7,sequential => $memory_8,};
#line 42
undef($memory_7);
#line 42
undef($memory_8);
#line 42
$memory_5 = ptd::var($memory_6);
#line 42
undef($memory_6);
#line 42
$memory_1 = {func => $memory_2,args => $memory_3,return => $memory_4,type => $memory_5,};
#line 42
undef($memory_2);
#line 42
undef($memory_3);
#line 42
undef($memory_4);
#line 42
undef($memory_5);
#line 42
$memory_0 = ptd::rec($memory_1);
#line 42
undef($memory_1);
#line 42
return $memory_0;
#line 42
undef($memory_0);
#line 42
return;
}

my $_known_exec_func_t;
sub interpreter::known_exec_func_t() {
	$_known_exec_func_t = interpreter::__known_exec_func_t() unless defined $_known_exec_func_t;
	return $_known_exec_func_t;
}

sub interpreter::__state_t() {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;my $memory_13;
#line 48
$memory_2 = {
	module => "interpreter",
	name => "rstate_t",
};
#line 48
$memory_2 = c_rt_lib::ov_mk_arg('ref', $memory_2);
#line 49
$memory_3 = {
	module => "nlasm",
	name => "function_t",
};
#line 49
$memory_3 = c_rt_lib::ov_mk_arg('ref', $memory_3);
#line 50
$memory_5 = {
	module => "interpreter",
	name => "module_labels_t",
};
#line 50
$memory_5 = c_rt_lib::ov_mk_arg('ref', $memory_5);
#line 50
$memory_4 = ptd::hash($memory_5);
#line 50
undef($memory_5);
#line 51
$memory_6 = {
	module => "nlasm",
	name => "function_t",
};
#line 51
$memory_6 = c_rt_lib::ov_mk_arg('ref', $memory_6);
#line 51
$memory_5 = ptd::hash($memory_6);
#line 51
undef($memory_6);
#line 52
$memory_7 = {
	module => "interpreter",
	name => "stack_element_t",
};
#line 52
$memory_7 = c_rt_lib::ov_mk_arg('ref', $memory_7);
#line 52
$memory_6 = ptd::arr($memory_7);
#line 52
undef($memory_7);
#line 53
$memory_7 = {
	module => "interpreter",
	name => "stack_element_t",
};
#line 53
$memory_7 = c_rt_lib::ov_mk_arg('ref', $memory_7);
#line 54
$memory_8 = ptd::sim();
#line 55
$memory_9 = {
	module => "boolean_t",
	name => "type",
};
#line 55
$memory_9 = c_rt_lib::ov_mk_arg('ref', $memory_9);
#line 56
$memory_11 = {
	module => "interpreter",
	name => "known_exec_func_t",
};
#line 56
$memory_11 = c_rt_lib::ov_mk_arg('ref', $memory_11);
#line 56
$memory_10 = ptd::hash($memory_11);
#line 56
undef($memory_11);
#line 57
$memory_12 = ptd::sim();
#line 57
$memory_11 = ptd::hash($memory_12);
#line 57
undef($memory_12);
#line 58
$memory_13 = {
	module => "profile_inter",
	name => "row_t",
};
#line 58
$memory_13 = c_rt_lib::ov_mk_arg('ref', $memory_13);
#line 58
$memory_12 = ptd::arr($memory_13);
#line 58
undef($memory_13);
#line 58
$memory_1 = {rstate => $memory_2,func => $memory_3,labels => $memory_4,functions => $memory_5,stack => $memory_6,top => $memory_7,instruction_nr => $memory_8,check_all_instructions => $memory_9,known_exec_func => $memory_10,compiler_functions => $memory_11,profile => $memory_12,};
#line 58
undef($memory_2);
#line 58
undef($memory_3);
#line 58
undef($memory_4);
#line 58
undef($memory_5);
#line 58
undef($memory_6);
#line 58
undef($memory_7);
#line 58
undef($memory_8);
#line 58
undef($memory_9);
#line 58
undef($memory_10);
#line 58
undef($memory_11);
#line 58
undef($memory_12);
#line 58
$memory_0 = ptd::rec($memory_1);
#line 58
undef($memory_1);
#line 58
return $memory_0;
#line 58
undef($memory_0);
#line 58
return;
}

my $_state_t;
sub interpreter::state_t() {
	$_state_t = interpreter::__state_t() unless defined $_state_t;
	return $_state_t;
}

sub interpreter::__rstate_t() {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;
#line 64
$memory_2 = ptd::none();
#line 65
$memory_3 = ptd::sim();
#line 66
$memory_4 = {
	module => "interpreter",
	name => "callback_t",
};
#line 66
$memory_4 = c_rt_lib::ov_mk_arg('ref', $memory_4);
#line 68
$memory_7 = ptd::ptd_im();
#line 69
$memory_9 = ptd::ptd_im();
#line 69
$memory_8 = ptd::hash($memory_9);
#line 69
undef($memory_9);
#line 70
$memory_9 = ptd::sim();
#line 71
$memory_10 = ptd::sim();
#line 71
$memory_6 = {return => $memory_7,ref_args => $memory_8,func => $memory_9,module => $memory_10,};
#line 71
undef($memory_7);
#line 71
undef($memory_8);
#line 71
undef($memory_9);
#line 71
undef($memory_10);
#line 71
$memory_5 = ptd::rec($memory_6);
#line 71
undef($memory_6);
#line 71
$memory_1 = {running => $memory_2,error => $memory_3,callback => $memory_4,finished => $memory_5,};
#line 71
undef($memory_2);
#line 71
undef($memory_3);
#line 71
undef($memory_4);
#line 71
undef($memory_5);
#line 71
$memory_0 = ptd::var($memory_1);
#line 71
undef($memory_1);
#line 71
return $memory_0;
#line 71
undef($memory_0);
#line 71
return;
}

my $_rstate_t;
sub interpreter::rstate_t() {
	$_rstate_t = interpreter::__rstate_t() unless defined $_rstate_t;
	return $_rstate_t;
}

sub interpreter::__callback_t() {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;
#line 77
$memory_2 = {
	module => "nlasm",
	name => "call_t",
};
#line 77
$memory_2 = c_rt_lib::ov_mk_arg('ref', $memory_2);
#line 77
$memory_4 = ptd::ptd_im();
#line 77
$memory_3 = ptd::arr($memory_4);
#line 77
undef($memory_4);
#line 77
$memory_1 = {call => $memory_2,args => $memory_3,};
#line 77
undef($memory_2);
#line 77
undef($memory_3);
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

my $_callback_t;
sub interpreter::callback_t() {
	$_callback_t = interpreter::__callback_t() unless defined $_callback_t;
	return $_callback_t;
}

sub interpreter::__stack_t() {
my $memory_0;my $memory_1;
#line 81
$memory_1 = {
	module => "interpreter",
	name => "stack_element_debug_t",
};
#line 81
$memory_1 = c_rt_lib::ov_mk_arg('ref', $memory_1);
#line 81
$memory_0 = ptd::arr($memory_1);
#line 81
undef($memory_1);
#line 81
return $memory_0;
#line 81
undef($memory_0);
#line 81
return;
}

my $_stack_t;
sub interpreter::stack_t() {
	$_stack_t = interpreter::__stack_t() unless defined $_stack_t;
	return $_stack_t;
}

sub interpreter::__stack_element_debug_t() {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;
#line 86
$memory_5 = ptd::sim();
#line 86
$memory_6 = ptd::ptd_im();
#line 86
$memory_4 = {name => $memory_5,value => $memory_6,};
#line 86
undef($memory_5);
#line 86
undef($memory_6);
#line 86
$memory_3 = ptd::rec($memory_4);
#line 86
undef($memory_4);
#line 86
$memory_2 = ptd::arr($memory_3);
#line 86
undef($memory_3);
#line 87
$memory_3 = {
	module => "nast",
	name => "debug_t",
};
#line 87
$memory_3 = c_rt_lib::ov_mk_arg('ref', $memory_3);
#line 88
$memory_4 = ptd::sim();
#line 89
$memory_5 = ptd::sim();
#line 90
$memory_6 = ptd::sim();
#line 90
$memory_1 = {variables => $memory_2,command_debug => $memory_3,func_name => $memory_4,module_name => $memory_5,instruction_nr => $memory_6,};
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

my $_stack_element_debug_t;
sub interpreter::stack_element_debug_t() {
	$_stack_element_debug_t = interpreter::__stack_element_debug_t() unless defined $_stack_element_debug_t;
	return $_stack_element_debug_t;
}

sub interpreter::__part_state_t() {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;
#line 96
$memory_3 = {
	module => "interpreter",
	name => "module_labels_t",
};
#line 96
$memory_3 = c_rt_lib::ov_mk_arg('ref', $memory_3);
#line 96
$memory_2 = ptd::hash($memory_3);
#line 96
undef($memory_3);
#line 97
$memory_4 = {
	module => "nlasm",
	name => "function_t",
};
#line 97
$memory_4 = c_rt_lib::ov_mk_arg('ref', $memory_4);
#line 97
$memory_3 = ptd::hash($memory_4);
#line 97
undef($memory_4);
#line 98
$memory_4 = ptd::sim();
#line 98
$memory_1 = {labels => $memory_2,functions => $memory_3,module_name => $memory_4,};
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

my $_part_state_t;
sub interpreter::part_state_t() {
	$_part_state_t = interpreter::__part_state_t() unless defined $_part_state_t;
	return $_part_state_t;
}

sub interpreter::part_state($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;$memory_0 = $_[0];
#line 103
$memory_3 = [$memory_0];
#line 103
$memory_2 = interpreter_priv::build_labels($memory_3);
#line 103
undef($memory_3);
#line 103
$memory_4 = [$memory_0];
#line 103
$memory_3 = interpreter_priv::build_functions($memory_4);
#line 103
undef($memory_4);
#line 103
$memory_4 = $memory_0->{'module_name'};
#line 103
$memory_1 = {labels => $memory_2,functions => $memory_3,module_name => $memory_4,};
#line 103
undef($memory_2);
#line 103
undef($memory_3);
#line 103
undef($memory_4);
#line 103
undef($memory_0);
#line 103
return $memory_1;
#line 103
undef($memory_1);
#line 103
undef($memory_0);
#line 103
return;
}

sub interpreter_priv::build_state($$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;my $memory_13;my $memory_14;$memory_0 = $_[0];$memory_1 = $_[1];$memory_2 = $_[2];
#line 109
$memory_4 = "nie wywolano funkcji";
#line 109
$memory_4 = c_rt_lib::ov_mk_arg('error', $memory_4);
#line 110
$memory_6 = c_rt_lib::ov_mk_none('none');
#line 110
$memory_7 = c_rt_lib::ov_mk_none('priv');
#line 110
$memory_8 = 0;
#line 110
$memory_9 = [];
#line 110
$memory_10 = [];
#line 110
$memory_11 = "";
#line 110
$memory_5 = {annotation => $memory_6,access => $memory_7,reg_size => $memory_8,args_type => $memory_9,commands => $memory_10,name => $memory_11,};
#line 110
undef($memory_6);
#line 110
undef($memory_7);
#line 110
undef($memory_8);
#line 110
undef($memory_9);
#line 110
undef($memory_10);
#line 110
undef($memory_11);
#line 113
$memory_6 = [];
#line 115
$memory_8 = "";
#line 116
$memory_9 = "";
#line 117
$memory_10 = 0;
#line 118
$memory_11 = [];
#line 119
$memory_12 = "";
#line 120
$memory_13 = {};
#line 121
$memory_14 = {};
#line 121
$memory_7 = {func_key => $memory_8,module_name => $memory_9,next => $memory_10,vars => $memory_11,ret => $memory_12,code_vars => $memory_13,ref_arguments => $memory_14,};
#line 121
undef($memory_8);
#line 121
undef($memory_9);
#line 121
undef($memory_10);
#line 121
undef($memory_11);
#line 121
undef($memory_12);
#line 121
undef($memory_13);
#line 121
undef($memory_14);
#line 123
$memory_8 = 1;
#line 123
$memory_8 = -$memory_8;
#line 124
$memory_9 = c_rt_lib::to_nl(1);
#line 126
$memory_10 = interpreter_priv::get_compiler_functions();
#line 127
$memory_11 = [];
#line 127
$memory_3 = {rstate => $memory_4,func => $memory_5,labels => $memory_0,functions => $memory_1,stack => $memory_6,top => $memory_7,instruction_nr => $memory_8,check_all_instructions => $memory_9,known_exec_func => $memory_2,compiler_functions => $memory_10,profile => $memory_11,};
#line 127
undef($memory_4);
#line 127
undef($memory_5);
#line 127
undef($memory_6);
#line 127
undef($memory_7);
#line 127
undef($memory_8);
#line 127
undef($memory_9);
#line 127
undef($memory_10);
#line 127
undef($memory_11);
#line 127
undef($memory_0);
#line 127
undef($memory_1);
#line 127
undef($memory_2);
#line 127
return $memory_3;
#line 127
undef($memory_3);
#line 127
undef($memory_0);
#line 127
undef($memory_1);
#line 127
undef($memory_2);
#line 127
return;
}

sub interpreter::init($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;$memory_0 = $_[0];$memory_1 = $_[1];
#line 133
$memory_3 = interpreter_priv::build_labels($memory_0);
#line 133
$memory_4 = interpreter_priv::build_functions($memory_0);
#line 133
$memory_2 = interpreter_priv::build_state($memory_3, $memory_4, $memory_1);
#line 133
undef($memory_4);
#line 133
undef($memory_3);
#line 133
undef($memory_0);
#line 133
undef($memory_1);
#line 133
return $memory_2;
#line 133
undef($memory_2);
#line 133
undef($memory_0);
#line 133
undef($memory_1);
#line 133
return;
}

sub interpreter::get_short_state($) {
my $memory_0;my $memory_1;my $memory_2;$memory_0 = $_[0];
#line 137
$memory_1 = {};
#line 137
$memory_2 = $memory_1;
#line 137
 if (c_rt_lib::get_hashcount($memory_0) > 1) {$memory_0 = {%{$memory_0}};}$memory_0->{'labels'} = $memory_2;
#line 137
undef($memory_1);
#line 137
undef($memory_2);
#line 138
$memory_1 = {};
#line 138
$memory_2 = $memory_1;
#line 138
 if (c_rt_lib::get_hashcount($memory_0) > 1) {$memory_0 = {%{$memory_0}};}$memory_0->{'functions'} = $memory_2;
#line 138
undef($memory_1);
#line 138
undef($memory_2);
#line 139
return $memory_0;
#line 139
undef($memory_0);
#line 139
return;
}

sub interpreter::init_from_part_and_short($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;$memory_0 = $_[0];$memory_1 = $_[1];
#line 144
$memory_3 = 0;
#line 144
$memory_4 = 1;
#line 144
$memory_5 = c_rt_lib::array_len($memory_1);
#line 144
label_3:
#line 144
$memory_6 = c_rt_lib::to_nl($memory_3 >= $memory_5);
#line 144
if (c_rt_lib::check_true($memory_6)) {goto label_27;}
#line 144
$memory_2 = $memory_1->[$memory_3];
#line 145
$memory_7 = "labels";
#line 145
$memory_7 = c_rt_lib::get_ref_hash($memory_0, $memory_7);
#line 145
$memory_8 = $memory_2->{'labels'};
#line 145
hash::add_all($memory_7, $memory_8);
#line 145
undef($memory_8);
#line 145
$memory_8 = "labels";
#line 145
c_rt_lib::set_ref_hash($memory_0, $memory_8, $memory_7);
#line 145
undef($memory_8);
#line 145
undef($memory_7);
#line 146
$memory_7 = "functions";
#line 146
$memory_7 = c_rt_lib::get_ref_hash($memory_0, $memory_7);
#line 146
$memory_8 = $memory_2->{'functions'};
#line 146
hash::add_all($memory_7, $memory_8);
#line 146
undef($memory_8);
#line 146
$memory_8 = "functions";
#line 146
c_rt_lib::set_ref_hash($memory_0, $memory_8, $memory_7);
#line 146
undef($memory_8);
#line 146
undef($memory_7);
#line 147
$memory_3 = $memory_3 + $memory_4;
#line 147
goto label_3;
#line 147
label_27:
#line 147
undef($memory_2);
#line 147
undef($memory_3);
#line 147
undef($memory_4);
#line 147
undef($memory_5);
#line 147
undef($memory_6);
#line 148
undef($memory_1);
#line 148
return $memory_0;
#line 148
undef($memory_0);
#line 148
undef($memory_1);
#line 148
return;
}

sub interpreter::init_from_short($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;$memory_0 = $_[0];$memory_1 = $_[1];
#line 153
$memory_2 = interpreter_priv::build_labels($memory_1);
#line 153
$memory_3 = $memory_2;
#line 153
 if (c_rt_lib::get_hashcount($memory_0) > 1) {$memory_0 = {%{$memory_0}};}$memory_0->{'labels'} = $memory_3;
#line 153
undef($memory_2);
#line 153
undef($memory_3);
#line 154
$memory_2 = interpreter_priv::build_functions($memory_1);
#line 154
$memory_3 = $memory_2;
#line 154
 if (c_rt_lib::get_hashcount($memory_0) > 1) {$memory_0 = {%{$memory_0}};}$memory_0->{'functions'} = $memory_3;
#line 154
undef($memory_2);
#line 154
undef($memory_3);
#line 155
$memory_2 = {};
#line 155
$memory_3 = $memory_2;
#line 155
 if (c_rt_lib::get_hashcount($memory_0) > 1) {$memory_0 = {%{$memory_0}};}$memory_0->{'known_exec_func'} = $memory_3;
#line 155
undef($memory_2);
#line 155
undef($memory_3);
#line 156
undef($memory_1);
#line 156
return $memory_0;
#line 156
undef($memory_0);
#line 156
undef($memory_1);
#line 156
return;
}

sub interpreter::init_from_part($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;$memory_0 = $_[0];$memory_1 = $_[1];
#line 161
$memory_2 = {};
#line 162
$memory_3 = {};
#line 163
$memory_5 = 0;
#line 163
$memory_6 = 1;
#line 163
$memory_7 = c_rt_lib::array_len($memory_0);
#line 163
label_5:
#line 163
$memory_8 = c_rt_lib::to_nl($memory_5 >= $memory_7);
#line 163
if (c_rt_lib::check_true($memory_8)) {goto label_17;}
#line 163
$memory_4 = $memory_0->[$memory_5];
#line 164
$memory_9 = $memory_4->{'labels'};
#line 164
hash::add_all($memory_2, $memory_9);
#line 164
undef($memory_9);
#line 165
$memory_9 = $memory_4->{'functions'};
#line 165
hash::add_all($memory_3, $memory_9);
#line 165
undef($memory_9);
#line 166
$memory_5 = $memory_5 + $memory_6;
#line 166
goto label_5;
#line 166
label_17:
#line 166
undef($memory_4);
#line 166
undef($memory_5);
#line 166
undef($memory_6);
#line 166
undef($memory_7);
#line 166
undef($memory_8);
#line 167
$memory_4 = interpreter_priv::build_state($memory_2, $memory_3, $memory_1);
#line 167
undef($memory_0);
#line 167
undef($memory_1);
#line 167
undef($memory_2);
#line 167
undef($memory_3);
#line 167
return $memory_4;
#line 167
undef($memory_4);
#line 167
undef($memory_2);
#line 167
undef($memory_3);
#line 167
undef($memory_0);
#line 167
undef($memory_1);
#line 167
return;
}

sub interpreter::start($$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];$memory_2 = $_[2];
#line 174
$memory_4 = [];
#line 174
$memory_3 = interpreter::start_args($memory_0, $memory_1, $memory_2, $memory_4);
#line 174
undef($memory_4);
#line 174
undef($memory_1);
#line 174
undef($memory_2);
#line 174
$_[0] = $memory_0;return $memory_3;
#line 174
undef($memory_3);
#line 174
undef($memory_1);
#line 174
undef($memory_2);
#line 174
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub interpreter::start_args($$$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;my $memory_13;my $memory_14;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];$memory_2 = $_[2];$memory_3 = $_[3];
#line 179
$memory_4 = "::";
#line 179
$memory_4 = $memory_2 . $memory_4;
#line 179
$memory_4 = $memory_4 . $memory_1;
#line 180
$memory_6 = $memory_0->{'functions'};
#line 180
$memory_5 = hash::has_key($memory_6, $memory_4);
#line 180
undef($memory_6);
#line 180
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 180
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 180
if (c_rt_lib::check_true($memory_5)) {goto label_20;}
#line 181
$memory_6 = "brak funkcji ";
#line 181
$memory_6 = $memory_6 . $memory_4;
#line 181
$memory_6 = c_rt_lib::ov_mk_arg('err', $memory_6);
#line 181
undef($memory_1);
#line 181
undef($memory_2);
#line 181
undef($memory_3);
#line 181
undef($memory_4);
#line 181
undef($memory_5);
#line 181
$_[0] = $memory_0;return $memory_6;
#line 181
undef($memory_6);
#line 182
goto label_20;
#line 182
label_20:
#line 182
undef($memory_5);
#line 183
$memory_6 = $memory_0->{'functions'};
#line 183
$memory_5 = hash::get_value($memory_6, $memory_4);
#line 183
undef($memory_6);
#line 184
$memory_7 = $memory_5->{'args_type'};
#line 184
$memory_6 = array::len($memory_7);
#line 184
undef($memory_7);
#line 184
$memory_7 = array::len($memory_3);
#line 184
$memory_6 = c_rt_lib::to_nl($memory_6 != $memory_7);
#line 184
undef($memory_7);
#line 184
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 184
if (c_rt_lib::check_true($memory_6)) {goto label_55;}
#line 185
$memory_7 = "niewlasciwa liczba argumentow: ";
#line 185
$memory_8 = array::len($memory_3);
#line 185
$memory_7 = $memory_7 . $memory_8;
#line 185
undef($memory_8);
#line 185
$memory_8 = " zamiast: ";
#line 185
$memory_7 = $memory_7 . $memory_8;
#line 185
undef($memory_8);
#line 186
$memory_9 = $memory_5->{'args_type'};
#line 186
$memory_8 = array::len($memory_9);
#line 186
undef($memory_9);
#line 186
$memory_7 = $memory_7 . $memory_8;
#line 186
undef($memory_8);
#line 186
$memory_7 = c_rt_lib::ov_mk_arg('err', $memory_7);
#line 186
undef($memory_1);
#line 186
undef($memory_2);
#line 186
undef($memory_3);
#line 186
undef($memory_4);
#line 186
undef($memory_5);
#line 186
undef($memory_6);
#line 186
$_[0] = $memory_0;return $memory_7;
#line 186
undef($memory_7);
#line 187
goto label_55;
#line 187
label_55:
#line 187
undef($memory_6);
#line 188
$memory_6 = [];
#line 188
$memory_7 = $memory_6;
#line 188
 if (c_rt_lib::get_hashcount($memory_0) > 1) {$memory_0 = {%{$memory_0}};}$memory_0->{'profile'} = $memory_7;
#line 188
undef($memory_6);
#line 188
undef($memory_7);
#line 189
$memory_6 = "profile";
#line 189
$memory_6 = c_rt_lib::get_ref_hash($memory_0, $memory_6);
#line 189
profile_inter::begin($memory_6, $memory_4);
#line 189
$memory_7 = "profile";
#line 189
c_rt_lib::set_ref_hash($memory_0, $memory_7, $memory_6);
#line 189
undef($memory_7);
#line 189
undef($memory_6);
#line 190
$memory_6 = c_rt_lib::ov_mk_none('running');
#line 190
$memory_7 = $memory_6;
#line 190
 if (c_rt_lib::get_hashcount($memory_0) > 1) {$memory_0 = {%{$memory_0}};}$memory_0->{'rstate'} = $memory_7;
#line 190
undef($memory_6);
#line 190
undef($memory_7);
#line 191
$memory_7 = $memory_5->{'reg_size'};
#line 191
$memory_6 = interpreter_priv::build_registers($memory_7);
#line 191
undef($memory_7);
#line 192
$memory_7 = {};
#line 193
$memory_9 = $memory_5->{'args_type'};
#line 193
$memory_8 = array::len($memory_9);
#line 193
undef($memory_9);
#line 193
$memory_9 = 0;
#line 193
$memory_10 = 1;
#line 193
label_83:
#line 193
$memory_11 = c_rt_lib::to_nl($memory_9 >= $memory_8);
#line 193
if (c_rt_lib::check_true($memory_11)) {goto label_110;}
#line 194
$memory_12 = $memory_5->{'args_type'};
#line 194
$memory_12 = $memory_12->[$memory_9];
#line 195
$memory_13 = c_rt_lib::ov_is($memory_12, 'val');
#line 195
if (c_rt_lib::check_true($memory_13)) {goto label_95;}
#line 196
$memory_13 = c_rt_lib::ov_is($memory_12, 'ref');
#line 196
if (c_rt_lib::check_true($memory_13)) {goto label_97;}
#line 196
$memory_13 = "NOMATCHALERT";
#line 196
$memory_13 = [$memory_13,$memory_12];
#line 196
die(dfile::ssave($memory_13));
#line 195
label_95:
#line 196
goto label_100;
#line 196
label_97:
#line 197
hash::set_value($memory_7, $memory_9, $memory_9);
#line 198
goto label_100;
#line 198
label_100:
#line 198
undef($memory_13);
#line 199
$memory_13 = $memory_3->[$memory_9];
#line 199
$memory_14 = $memory_13;
#line 199
 if (c_rt_lib::get_arrcount($memory_6) > 1) {$memory_6 = [@{$memory_6}];}$memory_6->[$memory_9] = $memory_14;
#line 199
undef($memory_13);
#line 199
undef($memory_14);
#line 199
undef($memory_12);
#line 200
$memory_9 = $memory_9 + $memory_10;
#line 200
goto label_83;
#line 200
label_110:
#line 200
undef($memory_8);
#line 200
undef($memory_9);
#line 200
undef($memory_10);
#line 200
undef($memory_11);
#line 201
$memory_8 = $memory_5;
#line 201
 if (c_rt_lib::get_hashcount($memory_0) > 1) {$memory_0 = {%{$memory_0}};}$memory_0->{'func'} = $memory_8;
#line 201
undef($memory_8);
#line 202
$memory_8 = [];
#line 202
$memory_9 = $memory_8;
#line 202
 if (c_rt_lib::get_hashcount($memory_0) > 1) {$memory_0 = {%{$memory_0}};}$memory_0->{'stack'} = $memory_9;
#line 202
undef($memory_8);
#line 202
undef($memory_9);
#line 206
$memory_9 = 0;
#line 208
$memory_10 = "";
#line 209
$memory_11 = {};
#line 209
$memory_8 = {func_key => $memory_4,module_name => $memory_2,next => $memory_9,vars => $memory_6,ret => $memory_10,code_vars => $memory_11,ref_arguments => $memory_7,};
#line 209
undef($memory_9);
#line 209
undef($memory_10);
#line 209
undef($memory_11);
#line 209
$memory_9 = $memory_8;
#line 209
 if (c_rt_lib::get_hashcount($memory_0) > 1) {$memory_0 = {%{$memory_0}};}$memory_0->{'top'} = $memory_9;
#line 209
undef($memory_8);
#line 209
undef($memory_9);
#line 212
$memory_8 = 1;
#line 212
$memory_8 = -$memory_8;
#line 212
$memory_9 = $memory_8;
#line 212
 if (c_rt_lib::get_hashcount($memory_0) > 1) {$memory_0 = {%{$memory_0}};}$memory_0->{'instruction_nr'} = $memory_9;
#line 212
undef($memory_8);
#line 212
undef($memory_9);
#line 213
interpreter_priv::handle_new_declarations($memory_0);
#line 214
$memory_8 = "";
#line 214
$memory_8 = c_rt_lib::ov_mk_arg('ok', $memory_8);
#line 214
undef($memory_1);
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
undef($memory_7);
#line 214
$_[0] = $memory_0;return $memory_8;
#line 214
undef($memory_8);
#line 214
undef($memory_4);
#line 214
undef($memory_5);
#line 214
undef($memory_6);
#line 214
undef($memory_7);
#line 214
undef($memory_1);
#line 214
undef($memory_2);
#line 214
undef($memory_3);
#line 214
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub interpreter::exec_instruction($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];
#line 218
$memory_2 = $memory_1;
#line 218
 if (c_rt_lib::get_hashcount($memory_0) > 1) {$memory_0 = {%{$memory_0}};}$memory_0->{'instruction_nr'} = $memory_2;
#line 218
undef($memory_2);
#line 219
label_3:
#line 220
$memory_2 = $memory_0->{'rstate'};
#line 220
$memory_3 = c_rt_lib::ov_is($memory_2, 'error');
#line 220
if (c_rt_lib::check_true($memory_3)) {goto label_16;}
#line 222
$memory_3 = c_rt_lib::ov_is($memory_2, 'running');
#line 222
if (c_rt_lib::check_true($memory_3)) {goto label_27;}
#line 228
$memory_3 = c_rt_lib::ov_is($memory_2, 'callback');
#line 228
if (c_rt_lib::check_true($memory_3)) {goto label_59;}
#line 230
$memory_3 = c_rt_lib::ov_is($memory_2, 'finished');
#line 230
if (c_rt_lib::check_true($memory_3)) {goto label_70;}
#line 230
$memory_3 = "NOMATCHALERT";
#line 230
$memory_3 = [$memory_3,$memory_2];
#line 230
die(dfile::ssave($memory_3));
#line 220
label_16:
#line 220
$memory_4 = c_rt_lib::ov_as($memory_2, 'error');
#line 221
$memory_5 = c_rt_lib::ov_mk_arg('error', $memory_4);
#line 221
undef($memory_1);
#line 221
undef($memory_2);
#line 221
undef($memory_3);
#line 221
undef($memory_4);
#line 221
$_[0] = $memory_0;return $memory_5;
#line 221
undef($memory_5);
#line 221
undef($memory_4);
#line 222
goto label_81;
#line 222
label_27:
#line 223
$memory_4 = interpreter_priv::get_command($memory_0);
#line 224
$memory_5 = interpreter_priv::is_hidden($memory_4);
#line 224
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 224
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 224
if (c_rt_lib::check_true($memory_5)) {goto label_54;}
#line 225
$memory_6 = $memory_0->{'instruction_nr'};
#line 225
$memory_7 = $memory_4->{'debug'};
#line 225
$memory_7 = $memory_7->{'instruction_nr'};
#line 225
$memory_6 = c_rt_lib::to_nl($memory_6 == $memory_7);
#line 225
undef($memory_7);
#line 225
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 225
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 225
if (c_rt_lib::check_true($memory_6)) {goto label_51;}
#line 225
$memory_7 = c_rt_lib::ov_mk_none('running');
#line 225
undef($memory_1);
#line 225
undef($memory_2);
#line 225
undef($memory_3);
#line 225
undef($memory_4);
#line 225
undef($memory_5);
#line 225
undef($memory_6);
#line 225
$_[0] = $memory_0;return $memory_7;
#line 225
undef($memory_7);
#line 225
goto label_51;
#line 225
label_51:
#line 225
undef($memory_6);
#line 226
goto label_54;
#line 226
label_54:
#line 226
undef($memory_5);
#line 227
interpreter_priv::step($memory_0);
#line 227
undef($memory_4);
#line 228
goto label_81;
#line 228
label_59:
#line 228
$memory_4 = c_rt_lib::ov_as($memory_2, 'callback');
#line 229
$memory_5 = $memory_0->{'rstate'};
#line 229
undef($memory_1);
#line 229
undef($memory_2);
#line 229
undef($memory_3);
#line 229
undef($memory_4);
#line 229
$_[0] = $memory_0;return $memory_5;
#line 229
undef($memory_5);
#line 229
undef($memory_4);
#line 230
goto label_81;
#line 230
label_70:
#line 230
$memory_4 = c_rt_lib::ov_as($memory_2, 'finished');
#line 231
$memory_5 = c_rt_lib::ov_mk_arg('finished', $memory_4);
#line 231
undef($memory_1);
#line 231
undef($memory_2);
#line 231
undef($memory_3);
#line 231
undef($memory_4);
#line 231
$_[0] = $memory_0;return $memory_5;
#line 231
undef($memory_5);
#line 231
undef($memory_4);
#line 232
goto label_81;
#line 232
label_81:
#line 232
undef($memory_2);
#line 232
undef($memory_3);
#line 219
goto label_3;
#line 234
$memory_2 = "";
#line 234
$memory_2 = c_rt_lib::ov_mk_arg('error', $memory_2);
#line 234
undef($memory_1);
#line 234
$_[0] = $memory_0;return $memory_2;
#line 234
undef($memory_2);
#line 234
undef($memory_1);
#line 234
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub interpreter::exec_all_code($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;$memory_0 = $_[0];
#line 237
interpreter_priv::step($memory_0);
#line 238
label_1:
#line 239
$memory_1 = $memory_0->{'rstate'};
#line 239
$memory_2 = c_rt_lib::ov_is($memory_1, 'error');
#line 239
if (c_rt_lib::check_true($memory_2)) {goto label_14;}
#line 241
$memory_2 = c_rt_lib::ov_is($memory_1, 'running');
#line 241
if (c_rt_lib::check_true($memory_2)) {goto label_25;}
#line 243
$memory_2 = c_rt_lib::ov_is($memory_1, 'callback');
#line 243
if (c_rt_lib::check_true($memory_2)) {goto label_28;}
#line 244
$memory_2 = c_rt_lib::ov_is($memory_1, 'finished');
#line 244
if (c_rt_lib::check_true($memory_2)) {goto label_32;}
#line 244
$memory_2 = "NOMATCHALERT";
#line 244
$memory_2 = [$memory_2,$memory_1];
#line 244
die(dfile::ssave($memory_2));
#line 239
label_14:
#line 239
$memory_3 = c_rt_lib::ov_as($memory_1, 'error');
#line 240
$memory_4 = c_rt_lib::ov_mk_arg('err', $memory_3);
#line 240
undef($memory_0);
#line 240
undef($memory_1);
#line 240
undef($memory_2);
#line 240
undef($memory_3);
#line 240
return $memory_4;
#line 240
undef($memory_4);
#line 240
undef($memory_3);
#line 241
goto label_43;
#line 241
label_25:
#line 242
interpreter_priv::step($memory_0);
#line 243
goto label_43;
#line 243
label_28:
#line 243
$memory_3 = c_rt_lib::ov_as($memory_1, 'callback');
#line 243
undef($memory_3);
#line 244
goto label_43;
#line 244
label_32:
#line 244
$memory_3 = c_rt_lib::ov_as($memory_1, 'finished');
#line 245
$memory_4 = c_rt_lib::ov_mk_arg('ok', $memory_3);
#line 245
undef($memory_0);
#line 245
undef($memory_1);
#line 245
undef($memory_2);
#line 245
undef($memory_3);
#line 245
return $memory_4;
#line 245
undef($memory_4);
#line 245
undef($memory_3);
#line 246
goto label_43;
#line 246
label_43:
#line 246
undef($memory_1);
#line 246
undef($memory_2);
#line 238
goto label_1;
#line 248
$memory_1 = c_rt_lib::ov_mk_none('err');
#line 248
undef($memory_0);
#line 248
return $memory_1;
#line 248
undef($memory_1);
#line 248
undef($memory_0);
#line 248
return;
}

sub interpreter::evaluate_const($$$$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;$memory_0 = $_[0];$memory_1 = $_[1];$memory_2 = $_[2];$memory_3 = $_[3];$memory_4 = $_[4];
#line 252
$memory_5 = interpreter_priv::get_func_key($memory_1, $memory_2);
#line 253
$memory_7 = $memory_0->{'functions'};
#line 253
$memory_6 = hash::has_key($memory_7, $memory_5);
#line 253
undef($memory_7);
#line 253
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 253
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 253
if (c_rt_lib::check_true($memory_6)) {goto label_10;}
#line 253
$memory_7 = [];
#line 253
die(dfile::ssave($memory_7));
#line 253
goto label_10;
#line 253
label_10:
#line 253
undef($memory_6);
#line 253
undef($memory_7);
#line 254
$memory_6 = c_rt_lib::ov_mk_none('running');
#line 254
$memory_7 = $memory_6;
#line 254
 if (c_rt_lib::get_hashcount($memory_0) > 1) {$memory_0 = {%{$memory_0}};}$memory_0->{'rstate'} = $memory_7;
#line 254
undef($memory_6);
#line 254
undef($memory_7);
#line 255
$memory_7 = $memory_0->{'functions'};
#line 255
$memory_6 = hash::get_value($memory_7, $memory_5);
#line 255
undef($memory_7);
#line 255
$memory_1 = $memory_6;
#line 255
undef($memory_6);
#line 256
$memory_6 = $memory_1;
#line 256
 if (c_rt_lib::get_hashcount($memory_0) > 1) {$memory_0 = {%{$memory_0}};}$memory_0->{'func'} = $memory_6;
#line 256
undef($memory_6);
#line 257
$memory_6 = [];
#line 257
$memory_7 = $memory_6;
#line 257
 if (c_rt_lib::get_hashcount($memory_0) > 1) {$memory_0 = {%{$memory_0}};}$memory_0->{'stack'} = $memory_7;
#line 257
undef($memory_6);
#line 257
undef($memory_7);
#line 263
$memory_7 = "";
#line 264
$memory_8 = {};
#line 265
$memory_9 = {};
#line 265
$memory_6 = {func_key => $memory_5,module_name => $memory_2,next => $memory_4,vars => $memory_3,ret => $memory_7,code_vars => $memory_8,ref_arguments => $memory_9,};
#line 265
undef($memory_7);
#line 265
undef($memory_8);
#line 265
undef($memory_9);
#line 265
$memory_7 = $memory_6;
#line 265
 if (c_rt_lib::get_hashcount($memory_0) > 1) {$memory_0 = {%{$memory_0}};}$memory_0->{'top'} = $memory_7;
#line 265
undef($memory_6);
#line 265
undef($memory_7);
#line 267
$memory_6 = 1;
#line 267
$memory_6 = -$memory_6;
#line 267
$memory_7 = $memory_6;
#line 267
 if (c_rt_lib::get_hashcount($memory_0) > 1) {$memory_0 = {%{$memory_0}};}$memory_0->{'instruction_nr'} = $memory_7;
#line 267
undef($memory_6);
#line 267
undef($memory_7);
#line 268
interpreter_priv::handle_new_declarations($memory_0);
#line 269
interpreter_priv::step($memory_0);
#line 270
$memory_6 = 1;
#line 271
label_51:
#line 271
$memory_9 = $memory_0->{'stack'};
#line 271
$memory_7 = array::len($memory_9);
#line 271
undef($memory_9);
#line 271
$memory_9 = 0;
#line 271
$memory_7 = c_rt_lib::to_nl($memory_7 != $memory_9);
#line 271
undef($memory_9);
#line 271
$memory_8 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 271
if (c_rt_lib::check_true($memory_8)) {goto label_62;}
#line 271
$memory_7 = $memory_0->{'rstate'};
#line 271
$memory_7 = c_rt_lib::ov_is($memory_7, 'running');
#line 271
label_62:
#line 271
undef($memory_8);
#line 271
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 271
if (c_rt_lib::check_true($memory_7)) {goto label_91;}
#line 272
$memory_8 = nast::intepreter_evaluate_max_steps();
#line 272
$memory_8 = c_rt_lib::to_nl($memory_6 > $memory_8);
#line 272
$memory_8 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 272
if (c_rt_lib::check_true($memory_8)) {goto label_84;}
#line 273
$memory_9 = "steps limit exceeded";
#line 273
$memory_9 = c_rt_lib::ov_mk_arg('err', $memory_9);
#line 273
undef($memory_0);
#line 273
undef($memory_1);
#line 273
undef($memory_2);
#line 273
undef($memory_3);
#line 273
undef($memory_4);
#line 273
undef($memory_5);
#line 273
undef($memory_6);
#line 273
undef($memory_7);
#line 273
undef($memory_8);
#line 273
return $memory_9;
#line 273
undef($memory_9);
#line 274
goto label_84;
#line 274
label_84:
#line 274
undef($memory_8);
#line 275
interpreter_priv::step($memory_0);
#line 276
$memory_8 = 1;
#line 276
$memory_6 = $memory_6 + $memory_8;
#line 276
undef($memory_8);
#line 277
goto label_51;
#line 277
label_91:
#line 277
undef($memory_7);
#line 278
$memory_7 = $memory_0->{'rstate'};
#line 278
$memory_7 = c_rt_lib::ov_is($memory_7, 'error');
#line 278
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 278
if (c_rt_lib::check_true($memory_7)) {goto label_111;}
#line 279
$memory_8 = $memory_0->{'rstate'};
#line 279
$memory_8 = c_rt_lib::ov_as($memory_8, 'error');
#line 279
$memory_8 = c_rt_lib::ov_mk_arg('err', $memory_8);
#line 279
undef($memory_0);
#line 279
undef($memory_1);
#line 279
undef($memory_2);
#line 279
undef($memory_3);
#line 279
undef($memory_4);
#line 279
undef($memory_5);
#line 279
undef($memory_6);
#line 279
undef($memory_7);
#line 279
return $memory_8;
#line 279
undef($memory_8);
#line 280
goto label_164;
#line 280
label_111:
#line 280
$memory_7 = $memory_0->{'rstate'};
#line 280
$memory_7 = c_rt_lib::ov_is($memory_7, 'callback');
#line 280
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 280
if (c_rt_lib::check_true($memory_7)) {goto label_129;}
#line 281
$memory_8 = "function not found";
#line 281
$memory_8 = c_rt_lib::ov_mk_arg('err', $memory_8);
#line 281
undef($memory_0);
#line 281
undef($memory_1);
#line 281
undef($memory_2);
#line 281
undef($memory_3);
#line 281
undef($memory_4);
#line 281
undef($memory_5);
#line 281
undef($memory_6);
#line 281
undef($memory_7);
#line 281
return $memory_8;
#line 281
undef($memory_8);
#line 282
goto label_164;
#line 282
label_129:
#line 283
$memory_9 = $memory_0->{'stack'};
#line 283
$memory_8 = array::len($memory_9);
#line 283
undef($memory_9);
#line 283
$memory_9 = 0;
#line 283
$memory_8 = c_rt_lib::to_nl($memory_8 != $memory_9);
#line 283
undef($memory_9);
#line 283
$memory_8 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 283
if (c_rt_lib::check_true($memory_8)) {goto label_148;}
#line 284
$memory_11 = $memory_0->{'rstate'};
#line 284
$memory_12 = $memory_0->{'stack'};
#line 284
$memory_10 = [$memory_11,$memory_12];
#line 284
undef($memory_11);
#line 284
undef($memory_12);
#line 284
$memory_9 = [$memory_10];
#line 284
undef($memory_10);
#line 284
die(dfile::ssave($memory_9));
#line 284
undef($memory_9);
#line 285
goto label_148;
#line 285
label_148:
#line 285
undef($memory_8);
#line 286
$memory_8 = $memory_0->{'top'};
#line 286
$memory_8 = $memory_8->{'vars'};
#line 286
$memory_8 = c_rt_lib::ov_mk_arg('ok', $memory_8);
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
undef($memory_7);
#line 286
return $memory_8;
#line 286
undef($memory_8);
#line 287
goto label_164;
#line 287
label_164:
#line 287
undef($memory_7);
#line 287
undef($memory_5);
#line 287
undef($memory_6);
#line 287
undef($memory_0);
#line 287
undef($memory_1);
#line 287
undef($memory_2);
#line 287
undef($memory_3);
#line 287
undef($memory_4);
#line 287
return;
}

sub interpreter::__get_none_variant() {
my $memory_0;
#line 291
$memory_0 = c_rt_lib::ov_mk_none('none_variant_do_not_use');
#line 291
return $memory_0;
#line 291
undef($memory_0);
#line 291
return;
}

my $_get_none_variant;
sub interpreter::get_none_variant() {
	$_get_none_variant = interpreter::__get_none_variant() unless defined $_get_none_variant;
	return $_get_none_variant;
}

sub interpreter_priv::build_registers($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;$memory_0 = $_[0];
#line 295
$memory_1 = [];
#line 296
$memory_2 = 0;
#line 296
$memory_3 = 1;
#line 296
label_3:
#line 296
$memory_4 = c_rt_lib::to_nl($memory_2 >= $memory_0);
#line 296
if (c_rt_lib::check_true($memory_4)) {goto label_11;}
#line 296
$memory_5 = interpreter::get_none_variant();
#line 296
array::push($memory_1, $memory_5);
#line 296
undef($memory_5);
#line 296
$memory_2 = $memory_2 + $memory_3;
#line 296
goto label_3;
#line 296
label_11:
#line 296
undef($memory_2);
#line 296
undef($memory_3);
#line 296
undef($memory_4);
#line 297
undef($memory_0);
#line 297
return $memory_1;
#line 297
undef($memory_1);
#line 297
undef($memory_0);
#line 297
return;
}

sub interpreter_priv::build_labels($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;my $memory_13;my $memory_14;my $memory_15;my $memory_16;my $memory_17;my $memory_18;my $memory_19;my $memory_20;my $memory_21;my $memory_22;my $memory_23;$memory_0 = $_[0];
#line 301
$memory_1 = {};
#line 302
$memory_3 = 0;
#line 302
$memory_4 = 1;
#line 302
$memory_5 = c_rt_lib::array_len($memory_0);
#line 302
label_4:
#line 302
$memory_6 = c_rt_lib::to_nl($memory_3 >= $memory_5);
#line 302
if (c_rt_lib::check_true($memory_6)) {goto label_69;}
#line 302
$memory_2 = $memory_0->[$memory_3];
#line 303
$memory_7 = $memory_2->{'module_name'};
#line 304
$memory_8 = {};
#line 305
$memory_9 = $memory_2->{'functions'};
#line 305
$memory_11 = 0;
#line 305
$memory_12 = 1;
#line 305
$memory_13 = c_rt_lib::array_len($memory_9);
#line 305
label_14:
#line 305
$memory_14 = c_rt_lib::to_nl($memory_11 >= $memory_13);
#line 305
if (c_rt_lib::check_true($memory_14)) {goto label_55;}
#line 305
$memory_10 = $memory_9->[$memory_11];
#line 306
$memory_15 = interpreter_priv::get_func_key($memory_10, $memory_7);
#line 307
$memory_16 = {};
#line 308
$memory_18 = $memory_10->{'commands'};
#line 308
$memory_17 = array::len($memory_18);
#line 308
undef($memory_18);
#line 308
$memory_18 = 0;
#line 308
$memory_19 = 1;
#line 308
label_25:
#line 308
$memory_20 = c_rt_lib::to_nl($memory_18 >= $memory_17);
#line 308
if (c_rt_lib::check_true($memory_20)) {goto label_45;}
#line 309
$memory_21 = $memory_10->{'commands'};
#line 309
$memory_21 = $memory_21->[$memory_18];
#line 309
$memory_21 = $memory_21->{'cmd'};
#line 310
$memory_22 = $memory_21;
#line 310
$memory_22 = c_rt_lib::ov_is($memory_22, 'prt_lbl');
#line 310
$memory_22 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_22));
#line 310
if (c_rt_lib::check_true($memory_22)) {goto label_40;}
#line 311
$memory_23 = $memory_21;
#line 311
$memory_23 = c_rt_lib::ov_as($memory_23, 'prt_lbl');
#line 312
hash::set_value($memory_16, $memory_23, $memory_18);
#line 312
undef($memory_23);
#line 313
goto label_40;
#line 313
label_40:
#line 313
undef($memory_22);
#line 313
undef($memory_21);
#line 314
$memory_18 = $memory_18 + $memory_19;
#line 314
goto label_25;
#line 314
label_45:
#line 314
undef($memory_17);
#line 314
undef($memory_18);
#line 314
undef($memory_19);
#line 314
undef($memory_20);
#line 315
hash::set_value($memory_8, $memory_15, $memory_16);
#line 315
undef($memory_15);
#line 315
undef($memory_16);
#line 316
$memory_11 = $memory_11 + $memory_12;
#line 316
goto label_14;
#line 316
label_55:
#line 316
undef($memory_9);
#line 316
undef($memory_10);
#line 316
undef($memory_11);
#line 316
undef($memory_12);
#line 316
undef($memory_13);
#line 316
undef($memory_14);
#line 317
$memory_9 = $memory_2->{'module_name'};
#line 317
hash::set_value($memory_1, $memory_9, $memory_8);
#line 317
undef($memory_9);
#line 317
undef($memory_7);
#line 317
undef($memory_8);
#line 318
$memory_3 = $memory_3 + $memory_4;
#line 318
goto label_4;
#line 318
label_69:
#line 318
undef($memory_2);
#line 318
undef($memory_3);
#line 318
undef($memory_4);
#line 318
undef($memory_5);
#line 318
undef($memory_6);
#line 319
undef($memory_0);
#line 319
return $memory_1;
#line 319
undef($memory_1);
#line 319
undef($memory_0);
#line 319
return;
}

sub interpreter_priv::build_functions($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;my $memory_13;my $memory_14;$memory_0 = $_[0];
#line 323
$memory_1 = {};
#line 324
$memory_3 = 0;
#line 324
$memory_4 = 1;
#line 324
$memory_5 = c_rt_lib::array_len($memory_0);
#line 324
label_4:
#line 324
$memory_6 = c_rt_lib::to_nl($memory_3 >= $memory_5);
#line 324
if (c_rt_lib::check_true($memory_6)) {goto label_32;}
#line 324
$memory_2 = $memory_0->[$memory_3];
#line 325
$memory_7 = $memory_2->{'module_name'};
#line 326
$memory_8 = $memory_2->{'functions'};
#line 326
$memory_10 = 0;
#line 326
$memory_11 = 1;
#line 326
$memory_12 = c_rt_lib::array_len($memory_8);
#line 326
label_13:
#line 326
$memory_13 = c_rt_lib::to_nl($memory_10 >= $memory_12);
#line 326
if (c_rt_lib::check_true($memory_13)) {goto label_22;}
#line 326
$memory_9 = $memory_8->[$memory_10];
#line 327
$memory_14 = interpreter_priv::get_func_key($memory_9, $memory_7);
#line 328
hash::set_value($memory_1, $memory_14, $memory_9);
#line 328
undef($memory_14);
#line 329
$memory_10 = $memory_10 + $memory_11;
#line 329
goto label_13;
#line 329
label_22:
#line 329
undef($memory_8);
#line 329
undef($memory_9);
#line 329
undef($memory_10);
#line 329
undef($memory_11);
#line 329
undef($memory_12);
#line 329
undef($memory_13);
#line 329
undef($memory_7);
#line 330
$memory_3 = $memory_3 + $memory_4;
#line 330
goto label_4;
#line 330
label_32:
#line 330
undef($memory_2);
#line 330
undef($memory_3);
#line 330
undef($memory_4);
#line 330
undef($memory_5);
#line 330
undef($memory_6);
#line 331
undef($memory_0);
#line 331
return $memory_1;
#line 331
undef($memory_1);
#line 331
undef($memory_0);
#line 331
return;
}

sub interpreter_priv::get_stack_element_debug($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;$memory_0 = $_[0];$memory_1 = $_[1];
#line 336
$memory_3 = $memory_1->{'functions'};
#line 336
$memory_4 = $memory_0->{'func_key'};
#line 336
$memory_2 = hash::get_value($memory_3, $memory_4);
#line 336
undef($memory_4);
#line 336
undef($memory_3);
#line 338
$memory_4 = interpreter_priv::get_variables($memory_0);
#line 339
$memory_5 = $memory_2->{'commands'};
#line 339
$memory_6 = $memory_0->{'next'};
#line 339
$memory_5 = $memory_5->[$memory_6];
#line 339
undef($memory_6);
#line 339
$memory_5 = $memory_5->{'debug'};
#line 339
$memory_5 = $memory_5->{'nast_debug'};
#line 340
$memory_6 = $memory_2->{'name'};
#line 341
$memory_7 = $memory_0->{'module_name'};
#line 342
$memory_8 = $memory_2->{'commands'};
#line 342
$memory_9 = $memory_0->{'next'};
#line 342
$memory_8 = $memory_8->[$memory_9];
#line 342
undef($memory_9);
#line 342
$memory_8 = $memory_8->{'debug'};
#line 342
$memory_8 = $memory_8->{'instruction_nr'};
#line 342
$memory_3 = {variables => $memory_4,command_debug => $memory_5,func_name => $memory_6,module_name => $memory_7,instruction_nr => $memory_8,};
#line 342
undef($memory_4);
#line 342
undef($memory_5);
#line 342
undef($memory_6);
#line 342
undef($memory_7);
#line 342
undef($memory_8);
#line 342
undef($memory_0);
#line 342
undef($memory_1);
#line 342
undef($memory_2);
#line 342
return $memory_3;
#line 342
undef($memory_3);
#line 342
undef($memory_2);
#line 342
undef($memory_0);
#line 342
undef($memory_1);
#line 342
return;
}

sub interpreter::get_profile($) {
my $memory_0;my $memory_1;$memory_0 = $_[0];
#line 347
$memory_1 = $memory_0->{'profile'};
#line 347
undef($memory_0);
#line 347
return $memory_1;
#line 347
undef($memory_1);
#line 347
undef($memory_0);
#line 347
return;
}

sub interpreter::get_whole_stack_debug($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;$memory_0 = $_[0];
#line 351
$memory_1 = [];
#line 352
$memory_2 = $memory_0->{'rstate'};
#line 352
$memory_2 = c_rt_lib::ov_is($memory_2, 'finished');
#line 352
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 352
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 352
if (c_rt_lib::check_true($memory_2)) {goto label_12;}
#line 352
$memory_4 = $memory_0->{'top'};
#line 352
$memory_3 = interpreter_priv::get_stack_element_debug($memory_4, $memory_0);
#line 352
undef($memory_4);
#line 352
array::push($memory_1, $memory_3);
#line 352
undef($memory_3);
#line 352
goto label_12;
#line 352
label_12:
#line 352
undef($memory_2);
#line 353
$memory_3 = $memory_0->{'stack'};
#line 353
$memory_2 = array::len($memory_3);
#line 353
undef($memory_3);
#line 354
$memory_3 = 0;
#line 354
$memory_4 = 1;
#line 354
label_19:
#line 354
$memory_5 = c_rt_lib::to_nl($memory_3 >= $memory_2);
#line 354
if (c_rt_lib::check_true($memory_5)) {goto label_35;}
#line 355
$memory_7 = $memory_0->{'stack'};
#line 355
$memory_8 = $memory_2 - $memory_3;
#line 355
$memory_9 = 1;
#line 355
$memory_8 = $memory_8 - $memory_9;
#line 355
undef($memory_9);
#line 355
$memory_7 = $memory_7->[$memory_8];
#line 355
undef($memory_8);
#line 355
$memory_6 = interpreter_priv::get_stack_element_debug($memory_7, $memory_0);
#line 355
undef($memory_7);
#line 355
array::push($memory_1, $memory_6);
#line 355
undef($memory_6);
#line 356
$memory_3 = $memory_3 + $memory_4;
#line 356
goto label_19;
#line 356
label_35:
#line 356
undef($memory_3);
#line 356
undef($memory_4);
#line 356
undef($memory_5);
#line 357
undef($memory_0);
#line 357
undef($memory_2);
#line 357
return $memory_1;
#line 357
undef($memory_1);
#line 357
undef($memory_2);
#line 357
undef($memory_0);
#line 357
return;
}

sub interpreter::has_next_instruction($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;$memory_0 = $_[0];
#line 361
$memory_1 = $memory_0->{'top'};
#line 361
$memory_1 = $memory_1->{'next'};
#line 361
$memory_3 = $memory_0->{'func'};
#line 361
$memory_3 = $memory_3->{'commands'};
#line 361
$memory_2 = array::len($memory_3);
#line 361
undef($memory_3);
#line 361
$memory_1 = c_rt_lib::to_nl($memory_1 < $memory_2);
#line 361
undef($memory_2);
#line 361
undef($memory_0);
#line 361
return $memory_1;
#line 361
undef($memory_1);
#line 361
undef($memory_0);
#line 361
return;
}

sub interpreter_priv::get_variables($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;$memory_0 = $_[0];
#line 368
$memory_1 = [];
#line 369
$memory_2 = $memory_0->{'code_vars'};
#line 369
$memory_5 = c_rt_lib::init_iter($memory_2);
#line 369
label_3:
#line 369
$memory_3 = c_rt_lib::is_end_hash($memory_5);
#line 369
if (c_rt_lib::check_true($memory_3)) {goto label_16;}
#line 369
$memory_3 = c_rt_lib::get_key_iter($memory_5);
#line 369
$memory_4 = c_rt_lib::hash_get_value($memory_2, $memory_3);
#line 370
$memory_6 = $memory_0->{'vars'};
#line 370
$memory_6 = $memory_6->[$memory_4];
#line 371
$memory_7 = {name => $memory_3,value => $memory_6,};
#line 371
array::push($memory_1, $memory_7);
#line 371
undef($memory_7);
#line 371
undef($memory_6);
#line 372
$memory_5 = c_rt_lib::next_iter($memory_5);
#line 372
goto label_3;
#line 372
label_16:
#line 372
undef($memory_2);
#line 372
undef($memory_3);
#line 372
undef($memory_4);
#line 372
undef($memory_5);
#line 373
undef($memory_0);
#line 373
return $memory_1;
#line 373
undef($memory_1);
#line 373
undef($memory_0);
#line 373
return;
}

sub interpreter::get_instruction_nr($) {
my $memory_0;my $memory_1;$memory_0 = $_[0];
#line 377
$memory_1 = interpreter_priv::get_command($memory_0);
#line 377
$memory_1 = $memory_1->{'debug'};
#line 377
$memory_1 = $memory_1->{'instruction_nr'};
#line 377
undef($memory_0);
#line 377
return $memory_1;
#line 377
undef($memory_1);
#line 377
undef($memory_0);
#line 377
return;
}

sub interpreter_priv::is_hidden($) {
my $memory_0;my $memory_1;$memory_0 = $_[0];
#line 381
$memory_1 = $memory_0->{'cmd'};
#line 381
$memory_1 = c_rt_lib::ov_is($memory_1, 'prt_lbl');
#line 381
if (c_rt_lib::check_true($memory_1)) {goto label_5;}
#line 381
$memory_1 = $memory_0->{'cmd'};
#line 381
$memory_1 = c_rt_lib::ov_is($memory_1, 'clear');
#line 381
label_5:
#line 381
undef($memory_0);
#line 381
return $memory_1;
#line 381
undef($memory_1);
#line 381
undef($memory_0);
#line 381
return;
}

sub interpreter::execute_full_instruction($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);
#line 385
$memory_1 = $memory_0->{'rstate'};
#line 385
$memory_1 = c_rt_lib::ov_is($memory_1, 'running');
#line 385
$memory_1 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_1));
#line 385
$memory_1 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_1));
#line 385
if (c_rt_lib::check_true($memory_1)) {goto label_8;}
#line 385
undef($memory_1);
#line 385
$_[0] = $memory_0;return;
#line 385
goto label_8;
#line 385
label_8:
#line 385
undef($memory_1);
#line 386
$memory_1 = interpreter::get_instruction_nr($memory_0);
#line 386
$memory_2 = $memory_1;
#line 386
 if (c_rt_lib::get_hashcount($memory_0) > 1) {$memory_0 = {%{$memory_0}};}$memory_0->{'instruction_nr'} = $memory_2;
#line 386
undef($memory_1);
#line 386
undef($memory_2);
#line 387
label_15:
#line 388
$memory_1 = interpreter_priv::get_command($memory_0);
#line 389
$memory_2 = interpreter_priv::is_hidden($memory_1);
#line 389
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 389
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 389
if (c_rt_lib::check_true($memory_2)) {goto label_37;}
#line 390
$memory_3 = $memory_0->{'instruction_nr'};
#line 390
$memory_4 = $memory_1->{'debug'};
#line 390
$memory_4 = $memory_4->{'instruction_nr'};
#line 390
$memory_3 = c_rt_lib::to_nl($memory_3 == $memory_4);
#line 390
undef($memory_4);
#line 390
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 390
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 390
if (c_rt_lib::check_true($memory_3)) {goto label_34;}
#line 390
undef($memory_1);
#line 390
undef($memory_2);
#line 390
undef($memory_3);
#line 390
goto label_62;
#line 390
goto label_34;
#line 390
label_34:
#line 390
undef($memory_3);
#line 391
goto label_37;
#line 391
label_37:
#line 391
undef($memory_2);
#line 392
interpreter_priv::step($memory_0);
#line 393
$memory_2 = $memory_0->{'rstate'};
#line 393
$memory_2 = c_rt_lib::ov_is($memory_2, 'error');
#line 393
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 393
if (c_rt_lib::check_true($memory_2)) {goto label_48;}
#line 393
undef($memory_1);
#line 393
undef($memory_2);
#line 393
goto label_62;
#line 393
goto label_48;
#line 393
label_48:
#line 393
undef($memory_2);
#line 394
$memory_2 = interpreter::has_next_instruction($memory_0);
#line 394
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 394
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 394
if (c_rt_lib::check_true($memory_2)) {goto label_58;}
#line 394
undef($memory_1);
#line 394
undef($memory_2);
#line 394
goto label_62;
#line 394
goto label_58;
#line 394
label_58:
#line 394
undef($memory_2);
#line 394
undef($memory_1);
#line 387
goto label_15;
#line 387
label_62:
#line 387
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub interpreter_priv::handle_new_declarations($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);
#line 399
$memory_1 = interpreter::has_next_instruction($memory_0);
#line 399
$memory_1 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_1));
#line 399
$memory_1 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_1));
#line 399
if (c_rt_lib::check_true($memory_1)) {goto label_7;}
#line 399
undef($memory_1);
#line 399
$_[0] = $memory_0;return;
#line 399
goto label_7;
#line 399
label_7:
#line 399
undef($memory_1);
#line 400
$memory_1 = interpreter_priv::get_command($memory_0);
#line 401
$memory_2 = $memory_1->{'debug'};
#line 401
$memory_2 = $memory_2->{'declarations'};
#line 401
$memory_5 = c_rt_lib::init_iter($memory_2);
#line 401
label_13:
#line 401
$memory_3 = c_rt_lib::is_end_hash($memory_5);
#line 401
if (c_rt_lib::check_true($memory_3)) {goto label_32;}
#line 401
$memory_3 = c_rt_lib::get_key_iter($memory_5);
#line 401
$memory_4 = c_rt_lib::hash_get_value($memory_2, $memory_3);
#line 402
$memory_6 = "top";
#line 402
$memory_6 = c_rt_lib::get_ref_hash($memory_0, $memory_6);
#line 402
$memory_7 = "code_vars";
#line 402
$memory_7 = c_rt_lib::get_ref_hash($memory_6, $memory_7);
#line 402
hash::set_value($memory_7, $memory_3, $memory_4);
#line 402
$memory_8 = "code_vars";
#line 402
c_rt_lib::set_ref_hash($memory_6, $memory_8, $memory_7);
#line 402
$memory_8 = "top";
#line 402
c_rt_lib::set_ref_hash($memory_0, $memory_8, $memory_6);
#line 402
undef($memory_8);
#line 402
undef($memory_6);
#line 402
undef($memory_7);
#line 403
$memory_5 = c_rt_lib::next_iter($memory_5);
#line 403
goto label_13;
#line 403
label_32:
#line 403
undef($memory_2);
#line 403
undef($memory_3);
#line 403
undef($memory_4);
#line 403
undef($memory_5);
#line 403
undef($memory_1);
#line 403
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub interpreter_priv::step($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;my $memory_13;my $memory_14;my $memory_15;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);
#line 407
$memory_1 = interpreter::has_next_instruction($memory_0);
#line 407
$memory_1 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_1));
#line 407
$memory_1 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_1));
#line 407
if (c_rt_lib::check_true($memory_1)) {goto label_7;}
#line 407
$memory_2 = [];
#line 407
die(dfile::ssave($memory_2));
#line 407
goto label_7;
#line 407
label_7:
#line 407
undef($memory_1);
#line 407
undef($memory_2);
#line 408
$memory_1 = interpreter_priv::get_command($memory_0);
#line 409
$memory_2 = $memory_1->{'cmd'};
#line 410
$memory_3 = "top";
#line 410
$memory_3 = c_rt_lib::get_ref_hash($memory_0, $memory_3);
#line 410
$memory_4 = "next";
#line 410
$memory_4 = c_rt_lib::get_ref_hash($memory_3, $memory_4);
#line 410
$memory_5 = 1;
#line 410
$memory_4 = $memory_4 + $memory_5;
#line 410
$memory_6 = "next";
#line 410
c_rt_lib::set_ref_hash($memory_3, $memory_6, $memory_4);
#line 410
$memory_6 = "top";
#line 410
c_rt_lib::set_ref_hash($memory_0, $memory_6, $memory_3);
#line 410
undef($memory_6);
#line 410
undef($memory_3);
#line 410
undef($memory_4);
#line 410
undef($memory_5);
#line 411
$memory_3 = interpreter_priv::check_command($memory_0, $memory_2);
#line 411
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 411
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 411
if (c_rt_lib::check_true($memory_3)) {goto label_41;}
#line 412
$memory_4 = "incorrect command";
#line 412
$memory_4 = c_rt_lib::ov_mk_arg('error', $memory_4);
#line 412
$memory_5 = $memory_4;
#line 412
 if (c_rt_lib::get_hashcount($memory_0) > 1) {$memory_0 = {%{$memory_0}};}$memory_0->{'rstate'} = $memory_5;
#line 412
undef($memory_4);
#line 412
undef($memory_5);
#line 413
undef($memory_1);
#line 413
undef($memory_2);
#line 413
undef($memory_3);
#line 413
$_[0] = $memory_0;return;
#line 414
goto label_41;
#line 414
label_41:
#line 414
undef($memory_3);
#line 415
$memory_3 = c_rt_lib::ov_is($memory_2, 'arr_decl');
#line 415
if (c_rt_lib::check_true($memory_3)) {goto label_88;}
#line 419
$memory_3 = c_rt_lib::ov_is($memory_2, 'hash_decl');
#line 419
if (c_rt_lib::check_true($memory_3)) {goto label_142;}
#line 426
$memory_3 = c_rt_lib::ov_is($memory_2, 'call');
#line 426
if (c_rt_lib::check_true($memory_3)) {goto label_200;}
#line 442
$memory_3 = c_rt_lib::ov_is($memory_2, 'func');
#line 442
if (c_rt_lib::check_true($memory_3)) {goto label_263;}
#line 444
$memory_3 = c_rt_lib::ov_is($memory_2, 'una_op');
#line 444
if (c_rt_lib::check_true($memory_3)) {goto label_299;}
#line 453
$memory_3 = c_rt_lib::ov_is($memory_2, 'bin_op');
#line 453
if (c_rt_lib::check_true($memory_3)) {goto label_382;}
#line 465
$memory_3 = c_rt_lib::ov_is($memory_2, 'ov_is');
#line 465
if (c_rt_lib::check_true($memory_3)) {goto label_508;}
#line 467
$memory_3 = c_rt_lib::ov_is($memory_2, 'ov_as');
#line 467
if (c_rt_lib::check_true($memory_3)) {goto label_548;}
#line 469
$memory_3 = c_rt_lib::ov_is($memory_2, 'return');
#line 469
if (c_rt_lib::check_true($memory_3)) {goto label_588;}
#line 471
$memory_3 = c_rt_lib::ov_is($memory_2, 'die');
#line 471
if (c_rt_lib::check_true($memory_3)) {goto label_593;}
#line 474
$memory_3 = c_rt_lib::ov_is($memory_2, 'move');
#line 474
if (c_rt_lib::check_true($memory_3)) {goto label_624;}
#line 476
$memory_3 = c_rt_lib::ov_is($memory_2, 'load_const');
#line 476
if (c_rt_lib::check_true($memory_3)) {goto label_660;}
#line 478
$memory_3 = c_rt_lib::ov_is($memory_2, 'get_frm_idx');
#line 478
if (c_rt_lib::check_true($memory_3)) {goto label_692;}
#line 482
$memory_3 = c_rt_lib::ov_is($memory_2, 'set_at_idx');
#line 482
if (c_rt_lib::check_true($memory_3)) {goto label_736;}
#line 488
$memory_3 = c_rt_lib::ov_is($memory_2, 'get_val');
#line 488
if (c_rt_lib::check_true($memory_3)) {goto label_777;}
#line 491
$memory_3 = c_rt_lib::ov_is($memory_2, 'set_val');
#line 491
if (c_rt_lib::check_true($memory_3)) {goto label_817;}
#line 496
$memory_3 = c_rt_lib::ov_is($memory_2, 'ov_mk');
#line 496
if (c_rt_lib::check_true($memory_3)) {goto label_852;}
#line 504
$memory_3 = c_rt_lib::ov_is($memory_2, 'prt_lbl');
#line 504
if (c_rt_lib::check_true($memory_3)) {goto label_914;}
#line 505
$memory_3 = c_rt_lib::ov_is($memory_2, 'if_goto');
#line 505
if (c_rt_lib::check_true($memory_3)) {goto label_918;}
#line 507
$memory_3 = c_rt_lib::ov_is($memory_2, 'goto');
#line 507
if (c_rt_lib::check_true($memory_3)) {goto label_935;}
#line 509
$memory_3 = c_rt_lib::ov_is($memory_2, 'clear');
#line 509
if (c_rt_lib::check_true($memory_3)) {goto label_940;}
#line 509
$memory_3 = "NOMATCHALERT";
#line 509
$memory_3 = [$memory_3,$memory_2];
#line 509
die(dfile::ssave($memory_3));
#line 415
label_88:
#line 415
$memory_4 = c_rt_lib::ov_as($memory_2, 'arr_decl');
#line 416
$memory_5 = [];
#line 417
$memory_6 = $memory_4->{'src'};
#line 417
$memory_8 = 0;
#line 417
$memory_9 = 1;
#line 417
$memory_10 = c_rt_lib::array_len($memory_6);
#line 417
label_95:
#line 417
$memory_11 = c_rt_lib::to_nl($memory_8 >= $memory_10);
#line 417
if (c_rt_lib::check_true($memory_11)) {goto label_106;}
#line 417
$memory_7 = $memory_6->[$memory_8];
#line 417
$memory_12 = $memory_0->{'top'};
#line 417
$memory_12 = $memory_12->{'vars'};
#line 417
$memory_12 = $memory_12->[$memory_7];
#line 417
array::push($memory_5, $memory_12);
#line 417
undef($memory_12);
#line 417
$memory_8 = $memory_8 + $memory_9;
#line 417
goto label_95;
#line 417
label_106:
#line 417
undef($memory_6);
#line 417
undef($memory_7);
#line 417
undef($memory_8);
#line 417
undef($memory_9);
#line 417
undef($memory_10);
#line 417
undef($memory_11);
#line 418
$memory_6 = $memory_4->{'dest'};
#line 418
$memory_7 = "";
#line 418
$memory_6 = c_rt_lib::to_nl($memory_6 eq $memory_7);
#line 418
undef($memory_7);
#line 418
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 418
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 418
if (c_rt_lib::check_true($memory_6)) {goto label_137;}
#line 418
$memory_7 = "top";
#line 418
$memory_7 = c_rt_lib::get_ref_hash($memory_0, $memory_7);
#line 418
$memory_8 = "vars";
#line 418
$memory_8 = c_rt_lib::get_ref_hash($memory_7, $memory_8);
#line 418
$memory_10 = $memory_4->{'dest'};
#line 418
$memory_9 = $memory_5;
#line 418
 if (c_rt_lib::get_arrcount($memory_8) > 1) {$memory_8 = [@{$memory_8}];}$memory_8->[$memory_10] = $memory_9;
#line 418
$memory_11 = "vars";
#line 418
c_rt_lib::set_ref_hash($memory_7, $memory_11, $memory_8);
#line 418
$memory_11 = "top";
#line 418
c_rt_lib::set_ref_hash($memory_0, $memory_11, $memory_7);
#line 418
undef($memory_11);
#line 418
undef($memory_7);
#line 418
undef($memory_8);
#line 418
undef($memory_9);
#line 418
undef($memory_10);
#line 418
goto label_137;
#line 418
label_137:
#line 418
undef($memory_6);
#line 418
undef($memory_5);
#line 418
undef($memory_4);
#line 419
goto label_1002;
#line 419
label_142:
#line 419
$memory_4 = c_rt_lib::ov_as($memory_2, 'hash_decl');
#line 420
$memory_5 = {};
#line 421
$memory_6 = $memory_4->{'src'};
#line 421
$memory_8 = 0;
#line 421
$memory_9 = 1;
#line 421
$memory_10 = c_rt_lib::array_len($memory_6);
#line 421
label_149:
#line 421
$memory_11 = c_rt_lib::to_nl($memory_8 >= $memory_10);
#line 421
if (c_rt_lib::check_true($memory_11)) {goto label_164;}
#line 421
$memory_7 = $memory_6->[$memory_8];
#line 422
$memory_12 = $memory_0->{'top'};
#line 422
$memory_12 = $memory_12->{'vars'};
#line 422
$memory_13 = $memory_7->{'val'};
#line 422
$memory_12 = $memory_12->[$memory_13];
#line 422
undef($memory_13);
#line 423
$memory_13 = $memory_7->{'key'};
#line 423
hash::set_value($memory_5, $memory_13, $memory_12);
#line 423
undef($memory_13);
#line 423
undef($memory_12);
#line 424
$memory_8 = $memory_8 + $memory_9;
#line 424
goto label_149;
#line 424
label_164:
#line 424
undef($memory_6);
#line 424
undef($memory_7);
#line 424
undef($memory_8);
#line 424
undef($memory_9);
#line 424
undef($memory_10);
#line 424
undef($memory_11);
#line 425
$memory_6 = $memory_4->{'dest'};
#line 425
$memory_7 = "";
#line 425
$memory_6 = c_rt_lib::to_nl($memory_6 eq $memory_7);
#line 425
undef($memory_7);
#line 425
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 425
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 425
if (c_rt_lib::check_true($memory_6)) {goto label_195;}
#line 425
$memory_7 = "top";
#line 425
$memory_7 = c_rt_lib::get_ref_hash($memory_0, $memory_7);
#line 425
$memory_8 = "vars";
#line 425
$memory_8 = c_rt_lib::get_ref_hash($memory_7, $memory_8);
#line 425
$memory_10 = $memory_4->{'dest'};
#line 425
$memory_9 = $memory_5;
#line 425
 if (c_rt_lib::get_arrcount($memory_8) > 1) {$memory_8 = [@{$memory_8}];}$memory_8->[$memory_10] = $memory_9;
#line 425
$memory_11 = "vars";
#line 425
c_rt_lib::set_ref_hash($memory_7, $memory_11, $memory_8);
#line 425
$memory_11 = "top";
#line 425
c_rt_lib::set_ref_hash($memory_0, $memory_11, $memory_7);
#line 425
undef($memory_11);
#line 425
undef($memory_7);
#line 425
undef($memory_8);
#line 425
undef($memory_9);
#line 425
undef($memory_10);
#line 425
goto label_195;
#line 425
label_195:
#line 425
undef($memory_6);
#line 425
undef($memory_5);
#line 425
undef($memory_4);
#line 426
goto label_1002;
#line 426
label_200:
#line 426
$memory_4 = c_rt_lib::ov_as($memory_2, 'call');
#line 428
$memory_6 = $memory_4->{'mod'};
#line 428
$memory_7 = "";
#line 428
$memory_6 = c_rt_lib::to_nl($memory_6 eq $memory_7);
#line 428
undef($memory_7);
#line 428
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 428
if (c_rt_lib::check_true($memory_6)) {goto label_219;}
#line 429
$memory_7 = $memory_0->{'top'};
#line 429
$memory_7 = $memory_7->{'module_name'};
#line 429
$memory_8 = "::priv::";
#line 429
$memory_7 = $memory_7 . $memory_8;
#line 429
undef($memory_8);
#line 429
$memory_8 = $memory_4->{'fun_name'};
#line 429
$memory_7 = $memory_7 . $memory_8;
#line 429
undef($memory_8);
#line 429
$memory_5 = $memory_7;
#line 429
undef($memory_7);
#line 430
goto label_230;
#line 430
label_219:
#line 431
$memory_7 = $memory_4->{'mod'};
#line 431
$memory_8 = "::";
#line 431
$memory_7 = $memory_7 . $memory_8;
#line 431
undef($memory_8);
#line 431
$memory_8 = $memory_4->{'fun_name'};
#line 431
$memory_7 = $memory_7 . $memory_8;
#line 431
undef($memory_8);
#line 431
$memory_5 = $memory_7;
#line 431
undef($memory_7);
#line 432
goto label_230;
#line 432
label_230:
#line 432
undef($memory_6);
#line 433
$memory_7 = $memory_0->{'compiler_functions'};
#line 433
$memory_6 = hash::has_key($memory_7, $memory_5);
#line 433
undef($memory_7);
#line 433
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 433
if (c_rt_lib::check_true($memory_6)) {goto label_239;}
#line 434
interpreter_priv::handle_compiler_call($memory_4, $memory_5, $memory_0);
#line 435
goto label_258;
#line 435
label_239:
#line 435
$memory_7 = $memory_0->{'known_exec_func'};
#line 435
$memory_6 = hash::has_key($memory_7, $memory_5);
#line 435
undef($memory_7);
#line 435
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 435
if (c_rt_lib::check_true($memory_6)) {goto label_247;}
#line 436
interpreter_priv::handle_extern_call($memory_4, $memory_0);
#line 437
goto label_258;
#line 437
label_247:
#line 437
$memory_7 = $memory_0->{'functions'};
#line 437
$memory_6 = hash::has_key($memory_7, $memory_5);
#line 437
undef($memory_7);
#line 437
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 437
if (c_rt_lib::check_true($memory_6)) {goto label_255;}
#line 438
interpreter_priv::handle_normal_call($memory_4, $memory_5, $memory_0);
#line 439
goto label_258;
#line 439
label_255:
#line 440
interpreter_priv::handle_unknown_call($memory_4, $memory_0);
#line 441
goto label_258;
#line 441
label_258:
#line 441
undef($memory_6);
#line 441
undef($memory_5);
#line 441
undef($memory_4);
#line 442
goto label_1002;
#line 442
label_263:
#line 442
$memory_4 = c_rt_lib::ov_as($memory_2, 'func');
#line 443
$memory_5 = $memory_4->{'dest'};
#line 443
$memory_6 = "";
#line 443
$memory_5 = c_rt_lib::to_nl($memory_5 eq $memory_6);
#line 443
undef($memory_6);
#line 443
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 443
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 443
if (c_rt_lib::check_true($memory_5)) {goto label_295;}
#line 443
$memory_7 = $memory_4->{'module'};
#line 443
$memory_8 = $memory_4->{'name'};
#line 443
$memory_6 = {module => $memory_7,name => $memory_8,};
#line 443
undef($memory_7);
#line 443
undef($memory_8);
#line 443
$memory_7 = "top";
#line 443
$memory_7 = c_rt_lib::get_ref_hash($memory_0, $memory_7);
#line 443
$memory_8 = "vars";
#line 443
$memory_8 = c_rt_lib::get_ref_hash($memory_7, $memory_8);
#line 443
$memory_10 = $memory_4->{'dest'};
#line 443
$memory_9 = $memory_6;
#line 443
 if (c_rt_lib::get_arrcount($memory_8) > 1) {$memory_8 = [@{$memory_8}];}$memory_8->[$memory_10] = $memory_9;
#line 443
$memory_11 = "vars";
#line 443
c_rt_lib::set_ref_hash($memory_7, $memory_11, $memory_8);
#line 443
$memory_11 = "top";
#line 443
c_rt_lib::set_ref_hash($memory_0, $memory_11, $memory_7);
#line 443
undef($memory_11);
#line 443
undef($memory_6);
#line 443
undef($memory_7);
#line 443
undef($memory_8);
#line 443
undef($memory_9);
#line 443
undef($memory_10);
#line 443
goto label_295;
#line 443
label_295:
#line 443
undef($memory_5);
#line 443
undef($memory_4);
#line 444
goto label_1002;
#line 444
label_299:
#line 444
$memory_4 = c_rt_lib::ov_as($memory_2, 'una_op');
#line 445
$memory_5 = $memory_0->{'top'};
#line 445
$memory_5 = $memory_5->{'vars'};
#line 445
$memory_6 = $memory_4->{'src'};
#line 445
$memory_5 = $memory_5->[$memory_6];
#line 445
undef($memory_6);
#line 446
$memory_6 = $memory_4->{'op'};
#line 446
$memory_8 = "+";
#line 446
$memory_6 = c_rt_lib::to_nl($memory_6 eq $memory_8);
#line 446
undef($memory_8);
#line 446
if (c_rt_lib::check_true($memory_6)) {goto label_315;}
#line 446
$memory_6 = $memory_4->{'op'};
#line 446
$memory_8 = "-";
#line 446
$memory_6 = c_rt_lib::to_nl($memory_6 eq $memory_8);
#line 446
undef($memory_8);
#line 446
label_315:
#line 446
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 446
if (c_rt_lib::check_true($memory_7)) {goto label_320;}
#line 446
$memory_6 = string_utils::is_number($memory_5);
#line 446
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 446
label_320:
#line 446
undef($memory_7);
#line 446
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 446
if (c_rt_lib::check_true($memory_6)) {goto label_345;}
#line 447
$memory_7 = "not an unary number";
#line 447
$memory_7 = c_rt_lib::ov_mk_arg('error', $memory_7);
#line 447
$memory_8 = $memory_7;
#line 447
 if (c_rt_lib::get_hashcount($memory_0) > 1) {$memory_0 = {%{$memory_0}};}$memory_0->{'rstate'} = $memory_8;
#line 447
undef($memory_7);
#line 447
undef($memory_8);
#line 448
$memory_7 = "top";
#line 448
$memory_7 = c_rt_lib::get_ref_hash($memory_0, $memory_7);
#line 448
$memory_8 = "next";
#line 448
$memory_8 = c_rt_lib::get_ref_hash($memory_7, $memory_8);
#line 448
$memory_9 = 1;
#line 448
$memory_8 = $memory_8 - $memory_9;
#line 448
$memory_10 = "next";
#line 448
c_rt_lib::set_ref_hash($memory_7, $memory_10, $memory_8);
#line 448
$memory_10 = "top";
#line 448
c_rt_lib::set_ref_hash($memory_0, $memory_10, $memory_7);
#line 448
undef($memory_10);
#line 448
undef($memory_7);
#line 448
undef($memory_8);
#line 448
undef($memory_9);
#line 449
goto label_377;
#line 449
label_345:
#line 450
$memory_8 = $memory_4->{'op'};
#line 450
$memory_7 = interpreter_priv::execute_una_op($memory_5, $memory_8);
#line 450
undef($memory_8);
#line 451
$memory_8 = $memory_4->{'dest'};
#line 451
$memory_9 = "";
#line 451
$memory_8 = c_rt_lib::to_nl($memory_8 eq $memory_9);
#line 451
undef($memory_9);
#line 451
$memory_8 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 451
$memory_8 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 451
if (c_rt_lib::check_true($memory_8)) {goto label_373;}
#line 451
$memory_9 = "top";
#line 451
$memory_9 = c_rt_lib::get_ref_hash($memory_0, $memory_9);
#line 451
$memory_10 = "vars";
#line 451
$memory_10 = c_rt_lib::get_ref_hash($memory_9, $memory_10);
#line 451
$memory_12 = $memory_4->{'dest'};
#line 451
$memory_11 = $memory_7;
#line 451
 if (c_rt_lib::get_arrcount($memory_10) > 1) {$memory_10 = [@{$memory_10}];}$memory_10->[$memory_12] = $memory_11;
#line 451
$memory_13 = "vars";
#line 451
c_rt_lib::set_ref_hash($memory_9, $memory_13, $memory_10);
#line 451
$memory_13 = "top";
#line 451
c_rt_lib::set_ref_hash($memory_0, $memory_13, $memory_9);
#line 451
undef($memory_13);
#line 451
undef($memory_9);
#line 451
undef($memory_10);
#line 451
undef($memory_11);
#line 451
undef($memory_12);
#line 451
goto label_373;
#line 451
label_373:
#line 451
undef($memory_8);
#line 451
undef($memory_7);
#line 452
goto label_377;
#line 452
label_377:
#line 452
undef($memory_6);
#line 452
undef($memory_5);
#line 452
undef($memory_4);
#line 453
goto label_1002;
#line 453
label_382:
#line 453
$memory_4 = c_rt_lib::ov_as($memory_2, 'bin_op');
#line 454
$memory_5 = $memory_0->{'top'};
#line 454
$memory_5 = $memory_5->{'vars'};
#line 454
$memory_6 = $memory_4->{'left'};
#line 454
$memory_5 = $memory_5->[$memory_6];
#line 454
undef($memory_6);
#line 455
$memory_6 = $memory_0->{'top'};
#line 455
$memory_6 = $memory_6->{'vars'};
#line 455
$memory_7 = $memory_4->{'right'};
#line 455
$memory_6 = $memory_6->[$memory_7];
#line 455
undef($memory_7);
#line 456
$memory_7 = $memory_4->{'op'};
#line 457
$memory_8 = "+";
#line 457
$memory_8 = c_rt_lib::to_nl($memory_7 eq $memory_8);
#line 457
if (c_rt_lib::check_true($memory_8)) {goto label_400;}
#line 457
$memory_8 = "-";
#line 457
$memory_8 = c_rt_lib::to_nl($memory_7 eq $memory_8);
#line 457
label_400:
#line 457
if (c_rt_lib::check_true($memory_8)) {goto label_404;}
#line 457
$memory_8 = "*";
#line 457
$memory_8 = c_rt_lib::to_nl($memory_7 eq $memory_8);
#line 457
label_404:
#line 457
if (c_rt_lib::check_true($memory_8)) {goto label_408;}
#line 457
$memory_8 = "/";
#line 457
$memory_8 = c_rt_lib::to_nl($memory_7 eq $memory_8);
#line 457
label_408:
#line 457
if (c_rt_lib::check_true($memory_8)) {goto label_412;}
#line 457
$memory_8 = "%";
#line 457
$memory_8 = c_rt_lib::to_nl($memory_7 eq $memory_8);
#line 457
label_412:
#line 457
if (c_rt_lib::check_true($memory_8)) {goto label_416;}
#line 457
$memory_8 = "<";
#line 457
$memory_8 = c_rt_lib::to_nl($memory_7 eq $memory_8);
#line 457
label_416:
#line 457
if (c_rt_lib::check_true($memory_8)) {goto label_420;}
#line 457
$memory_8 = "<=";
#line 457
$memory_8 = c_rt_lib::to_nl($memory_7 eq $memory_8);
#line 457
label_420:
#line 457
if (c_rt_lib::check_true($memory_8)) {goto label_424;}
#line 457
$memory_8 = "==";
#line 457
$memory_8 = c_rt_lib::to_nl($memory_7 eq $memory_8);
#line 457
label_424:
#line 457
if (c_rt_lib::check_true($memory_8)) {goto label_428;}
#line 457
$memory_8 = "!=";
#line 457
$memory_8 = c_rt_lib::to_nl($memory_7 eq $memory_8);
#line 457
label_428:
#line 457
if (c_rt_lib::check_true($memory_8)) {goto label_432;}
#line 457
$memory_8 = ">=";
#line 457
$memory_8 = c_rt_lib::to_nl($memory_7 eq $memory_8);
#line 457
label_432:
#line 457
if (c_rt_lib::check_true($memory_8)) {goto label_436;}
#line 457
$memory_8 = ">";
#line 457
$memory_8 = c_rt_lib::to_nl($memory_7 eq $memory_8);
#line 457
label_436:
#line 457
$memory_9 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 457
if (c_rt_lib::check_true($memory_9)) {goto label_444;}
#line 458
$memory_8 = string_utils::is_number($memory_5);
#line 458
$memory_8 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 458
if (c_rt_lib::check_true($memory_8)) {goto label_444;}
#line 458
$memory_8 = string_utils::is_number($memory_6);
#line 458
$memory_8 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 458
label_444:
#line 458
undef($memory_9);
#line 458
$memory_8 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 458
if (c_rt_lib::check_true($memory_8)) {goto label_469;}
#line 459
$memory_9 = "not a number";
#line 459
$memory_9 = c_rt_lib::ov_mk_arg('error', $memory_9);
#line 459
$memory_10 = $memory_9;
#line 459
 if (c_rt_lib::get_hashcount($memory_0) > 1) {$memory_0 = {%{$memory_0}};}$memory_0->{'rstate'} = $memory_10;
#line 459
undef($memory_9);
#line 459
undef($memory_10);
#line 460
$memory_9 = "top";
#line 460
$memory_9 = c_rt_lib::get_ref_hash($memory_0, $memory_9);
#line 460
$memory_10 = "next";
#line 460
$memory_10 = c_rt_lib::get_ref_hash($memory_9, $memory_10);
#line 460
$memory_11 = 1;
#line 460
$memory_10 = $memory_10 - $memory_11;
#line 460
$memory_12 = "next";
#line 460
c_rt_lib::set_ref_hash($memory_9, $memory_12, $memory_10);
#line 460
$memory_12 = "top";
#line 460
c_rt_lib::set_ref_hash($memory_0, $memory_12, $memory_9);
#line 460
undef($memory_12);
#line 460
undef($memory_9);
#line 460
undef($memory_10);
#line 460
undef($memory_11);
#line 461
goto label_501;
#line 461
label_469:
#line 462
$memory_10 = $memory_4->{'op'};
#line 462
$memory_9 = interpreter_priv::execute_bin_op($memory_5, $memory_6, $memory_10);
#line 462
undef($memory_10);
#line 463
$memory_10 = $memory_4->{'dest'};
#line 463
$memory_11 = "";
#line 463
$memory_10 = c_rt_lib::to_nl($memory_10 eq $memory_11);
#line 463
undef($memory_11);
#line 463
$memory_10 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_10));
#line 463
$memory_10 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_10));
#line 463
if (c_rt_lib::check_true($memory_10)) {goto label_497;}
#line 463
$memory_11 = "top";
#line 463
$memory_11 = c_rt_lib::get_ref_hash($memory_0, $memory_11);
#line 463
$memory_12 = "vars";
#line 463
$memory_12 = c_rt_lib::get_ref_hash($memory_11, $memory_12);
#line 463
$memory_14 = $memory_4->{'dest'};
#line 463
$memory_13 = $memory_9;
#line 463
 if (c_rt_lib::get_arrcount($memory_12) > 1) {$memory_12 = [@{$memory_12}];}$memory_12->[$memory_14] = $memory_13;
#line 463
$memory_15 = "vars";
#line 463
c_rt_lib::set_ref_hash($memory_11, $memory_15, $memory_12);
#line 463
$memory_15 = "top";
#line 463
c_rt_lib::set_ref_hash($memory_0, $memory_15, $memory_11);
#line 463
undef($memory_15);
#line 463
undef($memory_11);
#line 463
undef($memory_12);
#line 463
undef($memory_13);
#line 463
undef($memory_14);
#line 463
goto label_497;
#line 463
label_497:
#line 463
undef($memory_10);
#line 463
undef($memory_9);
#line 464
goto label_501;
#line 464
label_501:
#line 464
undef($memory_8);
#line 464
undef($memory_5);
#line 464
undef($memory_6);
#line 464
undef($memory_7);
#line 464
undef($memory_4);
#line 465
goto label_1002;
#line 465
label_508:
#line 465
$memory_4 = c_rt_lib::ov_as($memory_2, 'ov_is');
#line 466
$memory_5 = $memory_4->{'dest'};
#line 466
$memory_6 = "";
#line 466
$memory_5 = c_rt_lib::to_nl($memory_5 eq $memory_6);
#line 466
undef($memory_6);
#line 466
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 466
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 466
if (c_rt_lib::check_true($memory_5)) {goto label_544;}
#line 466
$memory_7 = $memory_0->{'top'};
#line 466
$memory_7 = $memory_7->{'vars'};
#line 466
$memory_8 = $memory_4->{'src'};
#line 466
$memory_7 = $memory_7->[$memory_8];
#line 466
undef($memory_8);
#line 466
$memory_8 = $memory_4->{'type'};
#line 466
$memory_6 = ov::is($memory_7, $memory_8);
#line 466
undef($memory_8);
#line 466
undef($memory_7);
#line 466
$memory_7 = "top";
#line 466
$memory_7 = c_rt_lib::get_ref_hash($memory_0, $memory_7);
#line 466
$memory_8 = "vars";
#line 466
$memory_8 = c_rt_lib::get_ref_hash($memory_7, $memory_8);
#line 466
$memory_10 = $memory_4->{'dest'};
#line 466
$memory_9 = $memory_6;
#line 466
 if (c_rt_lib::get_arrcount($memory_8) > 1) {$memory_8 = [@{$memory_8}];}$memory_8->[$memory_10] = $memory_9;
#line 466
$memory_11 = "vars";
#line 466
c_rt_lib::set_ref_hash($memory_7, $memory_11, $memory_8);
#line 466
$memory_11 = "top";
#line 466
c_rt_lib::set_ref_hash($memory_0, $memory_11, $memory_7);
#line 466
undef($memory_11);
#line 466
undef($memory_6);
#line 466
undef($memory_7);
#line 466
undef($memory_8);
#line 466
undef($memory_9);
#line 466
undef($memory_10);
#line 466
goto label_544;
#line 466
label_544:
#line 466
undef($memory_5);
#line 466
undef($memory_4);
#line 467
goto label_1002;
#line 467
label_548:
#line 467
$memory_4 = c_rt_lib::ov_as($memory_2, 'ov_as');
#line 468
$memory_5 = $memory_4->{'dest'};
#line 468
$memory_6 = "";
#line 468
$memory_5 = c_rt_lib::to_nl($memory_5 eq $memory_6);
#line 468
undef($memory_6);
#line 468
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 468
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 468
if (c_rt_lib::check_true($memory_5)) {goto label_584;}
#line 468
$memory_7 = $memory_0->{'top'};
#line 468
$memory_7 = $memory_7->{'vars'};
#line 468
$memory_8 = $memory_4->{'src'};
#line 468
$memory_7 = $memory_7->[$memory_8];
#line 468
undef($memory_8);
#line 468
$memory_8 = $memory_4->{'type'};
#line 468
$memory_6 = ov::as($memory_7, $memory_8);
#line 468
undef($memory_8);
#line 468
undef($memory_7);
#line 468
$memory_7 = "top";
#line 468
$memory_7 = c_rt_lib::get_ref_hash($memory_0, $memory_7);
#line 468
$memory_8 = "vars";
#line 468
$memory_8 = c_rt_lib::get_ref_hash($memory_7, $memory_8);
#line 468
$memory_10 = $memory_4->{'dest'};
#line 468
$memory_9 = $memory_6;
#line 468
 if (c_rt_lib::get_arrcount($memory_8) > 1) {$memory_8 = [@{$memory_8}];}$memory_8->[$memory_10] = $memory_9;
#line 468
$memory_11 = "vars";
#line 468
c_rt_lib::set_ref_hash($memory_7, $memory_11, $memory_8);
#line 468
$memory_11 = "top";
#line 468
c_rt_lib::set_ref_hash($memory_0, $memory_11, $memory_7);
#line 468
undef($memory_11);
#line 468
undef($memory_6);
#line 468
undef($memory_7);
#line 468
undef($memory_8);
#line 468
undef($memory_9);
#line 468
undef($memory_10);
#line 468
goto label_584;
#line 468
label_584:
#line 468
undef($memory_5);
#line 468
undef($memory_4);
#line 469
goto label_1002;
#line 469
label_588:
#line 469
$memory_4 = c_rt_lib::ov_as($memory_2, 'return');
#line 470
interpreter_priv::handle_return($memory_4, $memory_0);
#line 470
undef($memory_4);
#line 471
goto label_1002;
#line 471
label_593:
#line 471
$memory_4 = c_rt_lib::ov_as($memory_2, 'die');
#line 472
$memory_5 = "die";
#line 472
$memory_7 = $memory_0->{'top'};
#line 472
$memory_7 = $memory_7->{'vars'};
#line 472
$memory_7 = $memory_7->[$memory_4];
#line 472
$memory_6 = dfile::ssave($memory_7);
#line 472
undef($memory_7);
#line 472
$memory_5 = $memory_5 . $memory_6;
#line 472
undef($memory_6);
#line 472
$memory_5 = c_rt_lib::ov_mk_arg('error', $memory_5);
#line 472
$memory_6 = $memory_5;
#line 472
 if (c_rt_lib::get_hashcount($memory_0) > 1) {$memory_0 = {%{$memory_0}};}$memory_0->{'rstate'} = $memory_6;
#line 472
undef($memory_5);
#line 472
undef($memory_6);
#line 473
$memory_5 = "top";
#line 473
$memory_5 = c_rt_lib::get_ref_hash($memory_0, $memory_5);
#line 473
$memory_6 = "next";
#line 473
$memory_6 = c_rt_lib::get_ref_hash($memory_5, $memory_6);
#line 473
$memory_7 = 1;
#line 473
$memory_6 = $memory_6 - $memory_7;
#line 473
$memory_8 = "next";
#line 473
c_rt_lib::set_ref_hash($memory_5, $memory_8, $memory_6);
#line 473
$memory_8 = "top";
#line 473
c_rt_lib::set_ref_hash($memory_0, $memory_8, $memory_5);
#line 473
undef($memory_8);
#line 473
undef($memory_5);
#line 473
undef($memory_6);
#line 473
undef($memory_7);
#line 473
undef($memory_4);
#line 474
goto label_1002;
#line 474
label_624:
#line 474
$memory_4 = c_rt_lib::ov_as($memory_2, 'move');
#line 475
$memory_5 = $memory_4->{'dest'};
#line 475
$memory_6 = "";
#line 475
$memory_5 = c_rt_lib::to_nl($memory_5 eq $memory_6);
#line 475
undef($memory_6);
#line 475
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 475
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 475
if (c_rt_lib::check_true($memory_5)) {goto label_656;}
#line 475
$memory_6 = $memory_0->{'top'};
#line 475
$memory_6 = $memory_6->{'vars'};
#line 475
$memory_7 = $memory_4->{'src'};
#line 475
$memory_6 = $memory_6->[$memory_7];
#line 475
undef($memory_7);
#line 475
$memory_7 = "top";
#line 475
$memory_7 = c_rt_lib::get_ref_hash($memory_0, $memory_7);
#line 475
$memory_8 = "vars";
#line 475
$memory_8 = c_rt_lib::get_ref_hash($memory_7, $memory_8);
#line 475
$memory_10 = $memory_4->{'dest'};
#line 475
$memory_9 = $memory_6;
#line 475
 if (c_rt_lib::get_arrcount($memory_8) > 1) {$memory_8 = [@{$memory_8}];}$memory_8->[$memory_10] = $memory_9;
#line 475
$memory_11 = "vars";
#line 475
c_rt_lib::set_ref_hash($memory_7, $memory_11, $memory_8);
#line 475
$memory_11 = "top";
#line 475
c_rt_lib::set_ref_hash($memory_0, $memory_11, $memory_7);
#line 475
undef($memory_11);
#line 475
undef($memory_6);
#line 475
undef($memory_7);
#line 475
undef($memory_8);
#line 475
undef($memory_9);
#line 475
undef($memory_10);
#line 475
goto label_656;
#line 475
label_656:
#line 475
undef($memory_5);
#line 475
undef($memory_4);
#line 476
goto label_1002;
#line 476
label_660:
#line 476
$memory_4 = c_rt_lib::ov_as($memory_2, 'load_const');
#line 477
$memory_5 = $memory_4->{'dest'};
#line 477
$memory_6 = "";
#line 477
$memory_5 = c_rt_lib::to_nl($memory_5 eq $memory_6);
#line 477
undef($memory_6);
#line 477
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 477
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 477
if (c_rt_lib::check_true($memory_5)) {goto label_688;}
#line 477
$memory_6 = $memory_4->{'val'};
#line 477
$memory_7 = "top";
#line 477
$memory_7 = c_rt_lib::get_ref_hash($memory_0, $memory_7);
#line 477
$memory_8 = "vars";
#line 477
$memory_8 = c_rt_lib::get_ref_hash($memory_7, $memory_8);
#line 477
$memory_10 = $memory_4->{'dest'};
#line 477
$memory_9 = $memory_6;
#line 477
 if (c_rt_lib::get_arrcount($memory_8) > 1) {$memory_8 = [@{$memory_8}];}$memory_8->[$memory_10] = $memory_9;
#line 477
$memory_11 = "vars";
#line 477
c_rt_lib::set_ref_hash($memory_7, $memory_11, $memory_8);
#line 477
$memory_11 = "top";
#line 477
c_rt_lib::set_ref_hash($memory_0, $memory_11, $memory_7);
#line 477
undef($memory_11);
#line 477
undef($memory_6);
#line 477
undef($memory_7);
#line 477
undef($memory_8);
#line 477
undef($memory_9);
#line 477
undef($memory_10);
#line 477
goto label_688;
#line 477
label_688:
#line 477
undef($memory_5);
#line 477
undef($memory_4);
#line 478
goto label_1002;
#line 478
label_692:
#line 478
$memory_4 = c_rt_lib::ov_as($memory_2, 'get_frm_idx');
#line 479
$memory_5 = $memory_0->{'top'};
#line 479
$memory_5 = $memory_5->{'vars'};
#line 479
$memory_6 = $memory_4->{'src'};
#line 479
$memory_5 = $memory_5->[$memory_6];
#line 479
undef($memory_6);
#line 480
$memory_6 = $memory_0->{'top'};
#line 480
$memory_6 = $memory_6->{'vars'};
#line 480
$memory_7 = $memory_4->{'idx'};
#line 480
$memory_6 = $memory_6->[$memory_7];
#line 480
undef($memory_7);
#line 481
$memory_7 = $memory_4->{'dest'};
#line 481
$memory_8 = "";
#line 481
$memory_7 = c_rt_lib::to_nl($memory_7 eq $memory_8);
#line 481
undef($memory_8);
#line 481
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 481
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 481
if (c_rt_lib::check_true($memory_7)) {goto label_730;}
#line 481
$memory_8 = $memory_5->[$memory_6];
#line 481
$memory_9 = "top";
#line 481
$memory_9 = c_rt_lib::get_ref_hash($memory_0, $memory_9);
#line 481
$memory_10 = "vars";
#line 481
$memory_10 = c_rt_lib::get_ref_hash($memory_9, $memory_10);
#line 481
$memory_12 = $memory_4->{'dest'};
#line 481
$memory_11 = $memory_8;
#line 481
 if (c_rt_lib::get_arrcount($memory_10) > 1) {$memory_10 = [@{$memory_10}];}$memory_10->[$memory_12] = $memory_11;
#line 481
$memory_13 = "vars";
#line 481
c_rt_lib::set_ref_hash($memory_9, $memory_13, $memory_10);
#line 481
$memory_13 = "top";
#line 481
c_rt_lib::set_ref_hash($memory_0, $memory_13, $memory_9);
#line 481
undef($memory_13);
#line 481
undef($memory_8);
#line 481
undef($memory_9);
#line 481
undef($memory_10);
#line 481
undef($memory_11);
#line 481
undef($memory_12);
#line 481
goto label_730;
#line 481
label_730:
#line 481
undef($memory_7);
#line 481
undef($memory_5);
#line 481
undef($memory_6);
#line 481
undef($memory_4);
#line 482
goto label_1002;
#line 482
label_736:
#line 482
$memory_4 = c_rt_lib::ov_as($memory_2, 'set_at_idx');
#line 483
$memory_5 = $memory_0->{'top'};
#line 483
$memory_5 = $memory_5->{'vars'};
#line 483
$memory_6 = $memory_4->{'src'};
#line 483
$memory_5 = $memory_5->[$memory_6];
#line 483
undef($memory_6);
#line 484
$memory_6 = $memory_0->{'top'};
#line 484
$memory_6 = $memory_6->{'vars'};
#line 484
$memory_7 = $memory_4->{'idx'};
#line 484
$memory_6 = $memory_6->[$memory_7];
#line 484
undef($memory_7);
#line 485
$memory_7 = $memory_0->{'top'};
#line 485
$memory_7 = $memory_7->{'vars'};
#line 485
$memory_8 = $memory_4->{'val'};
#line 485
$memory_7 = $memory_7->[$memory_8];
#line 485
undef($memory_8);
#line 486
$memory_8 = $memory_7;
#line 486
 if (c_rt_lib::get_arrcount($memory_5) > 1) {$memory_5 = [@{$memory_5}];}$memory_5->[$memory_6] = $memory_8;
#line 486
undef($memory_8);
#line 487
$memory_8 = "top";
#line 487
$memory_8 = c_rt_lib::get_ref_hash($memory_0, $memory_8);
#line 487
$memory_9 = "vars";
#line 487
$memory_9 = c_rt_lib::get_ref_hash($memory_8, $memory_9);
#line 487
$memory_11 = $memory_4->{'src'};
#line 487
$memory_10 = $memory_5;
#line 487
 if (c_rt_lib::get_arrcount($memory_9) > 1) {$memory_9 = [@{$memory_9}];}$memory_9->[$memory_11] = $memory_10;
#line 487
$memory_12 = "vars";
#line 487
c_rt_lib::set_ref_hash($memory_8, $memory_12, $memory_9);
#line 487
$memory_12 = "top";
#line 487
c_rt_lib::set_ref_hash($memory_0, $memory_12, $memory_8);
#line 487
undef($memory_12);
#line 487
undef($memory_8);
#line 487
undef($memory_9);
#line 487
undef($memory_10);
#line 487
undef($memory_11);
#line 487
undef($memory_5);
#line 487
undef($memory_6);
#line 487
undef($memory_7);
#line 487
undef($memory_4);
#line 488
goto label_1002;
#line 488
label_777:
#line 488
$memory_4 = c_rt_lib::ov_as($memory_2, 'get_val');
#line 489
$memory_6 = $memory_0->{'top'};
#line 489
$memory_6 = $memory_6->{'vars'};
#line 489
$memory_7 = $memory_4->{'src'};
#line 489
$memory_6 = $memory_6->[$memory_7];
#line 489
undef($memory_7);
#line 489
$memory_7 = $memory_4->{'key'};
#line 489
$memory_5 = hash::get_value($memory_6, $memory_7);
#line 489
undef($memory_7);
#line 489
undef($memory_6);
#line 490
$memory_6 = $memory_4->{'dest'};
#line 490
$memory_7 = "";
#line 490
$memory_6 = c_rt_lib::to_nl($memory_6 eq $memory_7);
#line 490
undef($memory_7);
#line 490
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 490
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 490
if (c_rt_lib::check_true($memory_6)) {goto label_812;}
#line 490
$memory_7 = "top";
#line 490
$memory_7 = c_rt_lib::get_ref_hash($memory_0, $memory_7);
#line 490
$memory_8 = "vars";
#line 490
$memory_8 = c_rt_lib::get_ref_hash($memory_7, $memory_8);
#line 490
$memory_10 = $memory_4->{'dest'};
#line 490
$memory_9 = $memory_5;
#line 490
 if (c_rt_lib::get_arrcount($memory_8) > 1) {$memory_8 = [@{$memory_8}];}$memory_8->[$memory_10] = $memory_9;
#line 490
$memory_11 = "vars";
#line 490
c_rt_lib::set_ref_hash($memory_7, $memory_11, $memory_8);
#line 490
$memory_11 = "top";
#line 490
c_rt_lib::set_ref_hash($memory_0, $memory_11, $memory_7);
#line 490
undef($memory_11);
#line 490
undef($memory_7);
#line 490
undef($memory_8);
#line 490
undef($memory_9);
#line 490
undef($memory_10);
#line 490
goto label_812;
#line 490
label_812:
#line 490
undef($memory_6);
#line 490
undef($memory_5);
#line 490
undef($memory_4);
#line 491
goto label_1002;
#line 491
label_817:
#line 491
$memory_4 = c_rt_lib::ov_as($memory_2, 'set_val');
#line 492
$memory_5 = $memory_0->{'top'};
#line 492
$memory_5 = $memory_5->{'vars'};
#line 492
$memory_6 = $memory_4->{'src'};
#line 492
$memory_5 = $memory_5->[$memory_6];
#line 492
undef($memory_6);
#line 493
$memory_6 = $memory_0->{'top'};
#line 493
$memory_6 = $memory_6->{'vars'};
#line 493
$memory_7 = $memory_4->{'val'};
#line 493
$memory_6 = $memory_6->[$memory_7];
#line 493
undef($memory_7);
#line 494
$memory_7 = $memory_4->{'key'};
#line 494
hash::set_value($memory_5, $memory_7, $memory_6);
#line 494
undef($memory_7);
#line 495
$memory_7 = "top";
#line 495
$memory_7 = c_rt_lib::get_ref_hash($memory_0, $memory_7);
#line 495
$memory_8 = "vars";
#line 495
$memory_8 = c_rt_lib::get_ref_hash($memory_7, $memory_8);
#line 495
$memory_10 = $memory_4->{'src'};
#line 495
$memory_9 = $memory_5;
#line 495
 if (c_rt_lib::get_arrcount($memory_8) > 1) {$memory_8 = [@{$memory_8}];}$memory_8->[$memory_10] = $memory_9;
#line 495
$memory_11 = "vars";
#line 495
c_rt_lib::set_ref_hash($memory_7, $memory_11, $memory_8);
#line 495
$memory_11 = "top";
#line 495
c_rt_lib::set_ref_hash($memory_0, $memory_11, $memory_7);
#line 495
undef($memory_11);
#line 495
undef($memory_7);
#line 495
undef($memory_8);
#line 495
undef($memory_9);
#line 495
undef($memory_10);
#line 495
undef($memory_5);
#line 495
undef($memory_6);
#line 495
undef($memory_4);
#line 496
goto label_1002;
#line 496
label_852:
#line 496
$memory_4 = c_rt_lib::ov_as($memory_2, 'ov_mk');
#line 498
$memory_6 = $memory_4->{'src'};
#line 498
$memory_7 = c_rt_lib::ov_is($memory_6, 'arg');
#line 498
if (c_rt_lib::check_true($memory_7)) {goto label_862;}
#line 500
$memory_7 = c_rt_lib::ov_is($memory_6, 'emp');
#line 500
if (c_rt_lib::check_true($memory_7)) {goto label_875;}
#line 500
$memory_7 = "NOMATCHALERT";
#line 500
$memory_7 = [$memory_7,$memory_6];
#line 500
die(dfile::ssave($memory_7));
#line 498
label_862:
#line 498
$memory_8 = c_rt_lib::ov_as($memory_6, 'arg');
#line 499
$memory_10 = $memory_4->{'name'};
#line 499
$memory_11 = $memory_0->{'top'};
#line 499
$memory_11 = $memory_11->{'vars'};
#line 499
$memory_11 = $memory_11->[$memory_8];
#line 499
$memory_9 = ov::mk_val($memory_10, $memory_11);
#line 499
undef($memory_11);
#line 499
undef($memory_10);
#line 499
$memory_5 = $memory_9;
#line 499
undef($memory_9);
#line 499
undef($memory_8);
#line 500
goto label_882;
#line 500
label_875:
#line 501
$memory_9 = $memory_4->{'name'};
#line 501
$memory_8 = ov::mk($memory_9);
#line 501
undef($memory_9);
#line 501
$memory_5 = $memory_8;
#line 501
undef($memory_8);
#line 502
goto label_882;
#line 502
label_882:
#line 502
undef($memory_6);
#line 502
undef($memory_7);
#line 503
$memory_6 = $memory_4->{'dest'};
#line 503
$memory_7 = "";
#line 503
$memory_6 = c_rt_lib::to_nl($memory_6 eq $memory_7);
#line 503
undef($memory_7);
#line 503
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 503
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 503
if (c_rt_lib::check_true($memory_6)) {goto label_909;}
#line 503
$memory_7 = "top";
#line 503
$memory_7 = c_rt_lib::get_ref_hash($memory_0, $memory_7);
#line 503
$memory_8 = "vars";
#line 503
$memory_8 = c_rt_lib::get_ref_hash($memory_7, $memory_8);
#line 503
$memory_10 = $memory_4->{'dest'};
#line 503
$memory_9 = $memory_5;
#line 503
 if (c_rt_lib::get_arrcount($memory_8) > 1) {$memory_8 = [@{$memory_8}];}$memory_8->[$memory_10] = $memory_9;
#line 503
$memory_11 = "vars";
#line 503
c_rt_lib::set_ref_hash($memory_7, $memory_11, $memory_8);
#line 503
$memory_11 = "top";
#line 503
c_rt_lib::set_ref_hash($memory_0, $memory_11, $memory_7);
#line 503
undef($memory_11);
#line 503
undef($memory_7);
#line 503
undef($memory_8);
#line 503
undef($memory_9);
#line 503
undef($memory_10);
#line 503
goto label_909;
#line 503
label_909:
#line 503
undef($memory_6);
#line 503
undef($memory_5);
#line 503
undef($memory_4);
#line 504
goto label_1002;
#line 504
label_914:
#line 504
$memory_4 = c_rt_lib::ov_as($memory_2, 'prt_lbl');
#line 504
undef($memory_4);
#line 505
goto label_1002;
#line 505
label_918:
#line 505
$memory_4 = c_rt_lib::ov_as($memory_2, 'if_goto');
#line 506
$memory_5 = $memory_0->{'top'};
#line 506
$memory_5 = $memory_5->{'vars'};
#line 506
$memory_6 = $memory_4->{'src'};
#line 506
$memory_5 = $memory_5->[$memory_6];
#line 506
undef($memory_6);
#line 506
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 506
if (c_rt_lib::check_true($memory_5)) {goto label_931;}
#line 506
$memory_6 = $memory_4->{'dest'};
#line 506
interpreter_priv::goto($memory_0, $memory_6);
#line 506
undef($memory_6);
#line 506
goto label_931;
#line 506
label_931:
#line 506
undef($memory_5);
#line 506
undef($memory_4);
#line 507
goto label_1002;
#line 507
label_935:
#line 507
$memory_4 = c_rt_lib::ov_as($memory_2, 'goto');
#line 508
interpreter_priv::goto($memory_0, $memory_4);
#line 508
undef($memory_4);
#line 509
goto label_1002;
#line 509
label_940:
#line 509
$memory_4 = c_rt_lib::ov_as($memory_2, 'clear');
#line 510
$memory_5 = "";
#line 510
$memory_5 = c_rt_lib::to_nl($memory_4 ne $memory_5);
#line 510
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 510
if (c_rt_lib::check_true($memory_5)) {goto label_998;}
#line 511
$memory_6 = interpreter::get_none_variant();
#line 511
$memory_7 = "top";
#line 511
$memory_7 = c_rt_lib::get_ref_hash($memory_0, $memory_7);
#line 511
$memory_8 = "vars";
#line 511
$memory_8 = c_rt_lib::get_ref_hash($memory_7, $memory_8);
#line 511
$memory_9 = $memory_6;
#line 511
 if (c_rt_lib::get_arrcount($memory_8) > 1) {$memory_8 = [@{$memory_8}];}$memory_8->[$memory_4] = $memory_9;
#line 511
$memory_10 = "vars";
#line 511
c_rt_lib::set_ref_hash($memory_7, $memory_10, $memory_8);
#line 511
$memory_10 = "top";
#line 511
c_rt_lib::set_ref_hash($memory_0, $memory_10, $memory_7);
#line 511
undef($memory_10);
#line 511
undef($memory_6);
#line 511
undef($memory_7);
#line 511
undef($memory_8);
#line 511
undef($memory_9);
#line 512
$memory_6 = $memory_0->{'top'};
#line 512
$memory_6 = $memory_6->{'code_vars'};
#line 512
$memory_9 = c_rt_lib::init_iter($memory_6);
#line 512
label_965:
#line 512
$memory_7 = c_rt_lib::is_end_hash($memory_9);
#line 512
if (c_rt_lib::check_true($memory_7)) {goto label_992;}
#line 512
$memory_7 = c_rt_lib::get_key_iter($memory_9);
#line 512
$memory_8 = c_rt_lib::hash_get_value($memory_6, $memory_7);
#line 513
$memory_10 = c_rt_lib::to_nl($memory_4 == $memory_8);
#line 513
$memory_10 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_10));
#line 513
if (c_rt_lib::check_true($memory_10)) {goto label_988;}
#line 514
$memory_11 = "top";
#line 514
$memory_11 = c_rt_lib::get_ref_hash($memory_0, $memory_11);
#line 514
$memory_12 = "code_vars";
#line 514
$memory_12 = c_rt_lib::get_ref_hash($memory_11, $memory_12);
#line 514
hash::delete($memory_12, $memory_7);
#line 514
$memory_13 = "code_vars";
#line 514
c_rt_lib::set_ref_hash($memory_11, $memory_13, $memory_12);
#line 514
$memory_13 = "top";
#line 514
c_rt_lib::set_ref_hash($memory_0, $memory_13, $memory_11);
#line 514
undef($memory_13);
#line 514
undef($memory_11);
#line 514
undef($memory_12);
#line 515
undef($memory_10);
#line 515
goto label_992;
#line 516
goto label_988;
#line 516
label_988:
#line 516
undef($memory_10);
#line 517
$memory_9 = c_rt_lib::next_iter($memory_9);
#line 517
goto label_965;
#line 517
label_992:
#line 517
undef($memory_6);
#line 517
undef($memory_7);
#line 517
undef($memory_8);
#line 517
undef($memory_9);
#line 518
goto label_998;
#line 518
label_998:
#line 518
undef($memory_5);
#line 518
undef($memory_4);
#line 519
goto label_1002;
#line 519
label_1002:
#line 519
undef($memory_3);
#line 520
interpreter_priv::handle_new_declarations($memory_0);
#line 520
undef($memory_1);
#line 520
undef($memory_2);
#line 520
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub interpreter_priv::check_command($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;$memory_0 = $_[0];$memory_1 = $_[1];
#line 524
$memory_2 = $memory_0->{'check_all_instructions'};
#line 524
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 524
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 524
if (c_rt_lib::check_true($memory_2)) {goto label_11;}
#line 524
$memory_3 = c_rt_lib::to_nl(1);
#line 524
undef($memory_0);
#line 524
undef($memory_1);
#line 524
undef($memory_2);
#line 524
return $memory_3;
#line 524
undef($memory_3);
#line 524
goto label_11;
#line 524
label_11:
#line 524
undef($memory_2);
#line 525
$memory_2 = c_rt_lib::ov_is($memory_1, 'arr_decl');
#line 525
if (c_rt_lib::check_true($memory_2)) {goto label_58;}
#line 526
$memory_2 = c_rt_lib::ov_is($memory_1, 'hash_decl');
#line 526
if (c_rt_lib::check_true($memory_2)) {goto label_62;}
#line 527
$memory_2 = c_rt_lib::ov_is($memory_1, 'call');
#line 527
if (c_rt_lib::check_true($memory_2)) {goto label_66;}
#line 528
$memory_2 = c_rt_lib::ov_is($memory_1, 'func');
#line 528
if (c_rt_lib::check_true($memory_2)) {goto label_70;}
#line 529
$memory_2 = c_rt_lib::ov_is($memory_1, 'una_op');
#line 529
if (c_rt_lib::check_true($memory_2)) {goto label_74;}
#line 537
$memory_2 = c_rt_lib::ov_is($memory_1, 'bin_op');
#line 537
if (c_rt_lib::check_true($memory_2)) {goto label_151;}
#line 542
$memory_2 = c_rt_lib::ov_is($memory_1, 'ov_is');
#line 542
if (c_rt_lib::check_true($memory_2)) {goto label_201;}
#line 545
$memory_2 = c_rt_lib::ov_is($memory_1, 'ov_as');
#line 545
if (c_rt_lib::check_true($memory_2)) {goto label_243;}
#line 550
$memory_2 = c_rt_lib::ov_is($memory_1, 'return');
#line 550
if (c_rt_lib::check_true($memory_2)) {goto label_305;}
#line 551
$memory_2 = c_rt_lib::ov_is($memory_1, 'die');
#line 551
if (c_rt_lib::check_true($memory_2)) {goto label_309;}
#line 552
$memory_2 = c_rt_lib::ov_is($memory_1, 'move');
#line 552
if (c_rt_lib::check_true($memory_2)) {goto label_313;}
#line 553
$memory_2 = c_rt_lib::ov_is($memory_1, 'load_const');
#line 553
if (c_rt_lib::check_true($memory_2)) {goto label_317;}
#line 554
$memory_2 = c_rt_lib::ov_is($memory_1, 'get_frm_idx');
#line 554
if (c_rt_lib::check_true($memory_2)) {goto label_321;}
#line 561
$memory_2 = c_rt_lib::ov_is($memory_1, 'set_at_idx');
#line 561
if (c_rt_lib::check_true($memory_2)) {goto label_406;}
#line 567
$memory_2 = c_rt_lib::ov_is($memory_1, 'get_val');
#line 567
if (c_rt_lib::check_true($memory_2)) {goto label_473;}
#line 572
$memory_2 = c_rt_lib::ov_is($memory_1, 'set_val');
#line 572
if (c_rt_lib::check_true($memory_2)) {goto label_535;}
#line 576
$memory_2 = c_rt_lib::ov_is($memory_1, 'ov_mk');
#line 576
if (c_rt_lib::check_true($memory_2)) {goto label_579;}
#line 578
$memory_2 = c_rt_lib::ov_is($memory_1, 'prt_lbl');
#line 578
if (c_rt_lib::check_true($memory_2)) {goto label_600;}
#line 579
$memory_2 = c_rt_lib::ov_is($memory_1, 'if_goto');
#line 579
if (c_rt_lib::check_true($memory_2)) {goto label_604;}
#line 583
$memory_2 = c_rt_lib::ov_is($memory_1, 'goto');
#line 583
if (c_rt_lib::check_true($memory_2)) {goto label_651;}
#line 584
$memory_2 = c_rt_lib::ov_is($memory_1, 'clear');
#line 584
if (c_rt_lib::check_true($memory_2)) {goto label_655;}
#line 584
$memory_2 = "NOMATCHALERT";
#line 584
$memory_2 = [$memory_2,$memory_1];
#line 584
die(dfile::ssave($memory_2));
#line 525
label_58:
#line 525
$memory_3 = c_rt_lib::ov_as($memory_1, 'arr_decl');
#line 525
undef($memory_3);
#line 526
goto label_659;
#line 526
label_62:
#line 526
$memory_3 = c_rt_lib::ov_as($memory_1, 'hash_decl');
#line 526
undef($memory_3);
#line 527
goto label_659;
#line 527
label_66:
#line 527
$memory_3 = c_rt_lib::ov_as($memory_1, 'call');
#line 527
undef($memory_3);
#line 528
goto label_659;
#line 528
label_70:
#line 528
$memory_3 = c_rt_lib::ov_as($memory_1, 'func');
#line 528
undef($memory_3);
#line 529
goto label_659;
#line 529
label_74:
#line 529
$memory_3 = c_rt_lib::ov_as($memory_1, 'una_op');
#line 530
$memory_4 = $memory_0->{'top'};
#line 530
$memory_4 = $memory_4->{'vars'};
#line 530
$memory_5 = $memory_3->{'src'};
#line 530
$memory_4 = $memory_4->[$memory_5];
#line 530
undef($memory_5);
#line 531
$memory_5 = $memory_3->{'op'};
#line 531
$memory_6 = "!";
#line 531
$memory_5 = c_rt_lib::to_nl($memory_5 eq $memory_6);
#line 531
undef($memory_6);
#line 531
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 531
if (c_rt_lib::check_true($memory_5)) {goto label_127;}
#line 532
$memory_6 = nl::is_variant($memory_4);
#line 532
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 532
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 532
if (c_rt_lib::check_true($memory_6)) {goto label_102;}
#line 532
$memory_7 = c_rt_lib::to_nl(0);
#line 532
undef($memory_0);
#line 532
undef($memory_1);
#line 532
undef($memory_2);
#line 532
undef($memory_3);
#line 532
undef($memory_4);
#line 532
undef($memory_5);
#line 532
undef($memory_6);
#line 532
return $memory_7;
#line 532
undef($memory_7);
#line 532
goto label_102;
#line 532
label_102:
#line 532
undef($memory_6);
#line 533
$memory_6 = $memory_4;
#line 533
$memory_6 = c_rt_lib::ov_is($memory_6, 'TRUE');
#line 533
if (c_rt_lib::check_true($memory_6)) {goto label_109;}
#line 533
$memory_6 = $memory_4;
#line 533
$memory_6 = c_rt_lib::ov_is($memory_6, 'FALSE');
#line 533
label_109:
#line 533
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 533
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 533
if (c_rt_lib::check_true($memory_6)) {goto label_124;}
#line 533
$memory_7 = c_rt_lib::to_nl(0);
#line 533
undef($memory_0);
#line 533
undef($memory_1);
#line 533
undef($memory_2);
#line 533
undef($memory_3);
#line 533
undef($memory_4);
#line 533
undef($memory_5);
#line 533
undef($memory_6);
#line 533
return $memory_7;
#line 533
undef($memory_7);
#line 533
goto label_124;
#line 533
label_124:
#line 533
undef($memory_6);
#line 534
goto label_146;
#line 534
label_127:
#line 535
$memory_6 = nl::is_sim($memory_4);
#line 535
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 535
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 535
if (c_rt_lib::check_true($memory_6)) {goto label_143;}
#line 535
$memory_7 = c_rt_lib::to_nl(0);
#line 535
undef($memory_0);
#line 535
undef($memory_1);
#line 535
undef($memory_2);
#line 535
undef($memory_3);
#line 535
undef($memory_4);
#line 535
undef($memory_5);
#line 535
undef($memory_6);
#line 535
return $memory_7;
#line 535
undef($memory_7);
#line 535
goto label_143;
#line 535
label_143:
#line 535
undef($memory_6);
#line 536
goto label_146;
#line 536
label_146:
#line 536
undef($memory_5);
#line 536
undef($memory_4);
#line 536
undef($memory_3);
#line 537
goto label_659;
#line 537
label_151:
#line 537
$memory_3 = c_rt_lib::ov_as($memory_1, 'bin_op');
#line 538
$memory_4 = $memory_0->{'top'};
#line 538
$memory_4 = $memory_4->{'vars'};
#line 538
$memory_5 = $memory_3->{'left'};
#line 538
$memory_4 = $memory_4->[$memory_5];
#line 538
undef($memory_5);
#line 539
$memory_5 = $memory_0->{'top'};
#line 539
$memory_5 = $memory_5->{'vars'};
#line 539
$memory_6 = $memory_3->{'right'};
#line 539
$memory_5 = $memory_5->[$memory_6];
#line 539
undef($memory_6);
#line 540
$memory_6 = nl::is_sim($memory_4);
#line 540
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 540
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 540
if (c_rt_lib::check_true($memory_6)) {goto label_178;}
#line 540
$memory_7 = c_rt_lib::to_nl(0);
#line 540
undef($memory_0);
#line 540
undef($memory_1);
#line 540
undef($memory_2);
#line 540
undef($memory_3);
#line 540
undef($memory_4);
#line 540
undef($memory_5);
#line 540
undef($memory_6);
#line 540
return $memory_7;
#line 540
undef($memory_7);
#line 540
goto label_178;
#line 540
label_178:
#line 540
undef($memory_6);
#line 541
$memory_6 = nl::is_sim($memory_5);
#line 541
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 541
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 541
if (c_rt_lib::check_true($memory_6)) {goto label_195;}
#line 541
$memory_7 = c_rt_lib::to_nl(0);
#line 541
undef($memory_0);
#line 541
undef($memory_1);
#line 541
undef($memory_2);
#line 541
undef($memory_3);
#line 541
undef($memory_4);
#line 541
undef($memory_5);
#line 541
undef($memory_6);
#line 541
return $memory_7;
#line 541
undef($memory_7);
#line 541
goto label_195;
#line 541
label_195:
#line 541
undef($memory_6);
#line 541
undef($memory_4);
#line 541
undef($memory_5);
#line 541
undef($memory_3);
#line 542
goto label_659;
#line 542
label_201:
#line 542
$memory_3 = c_rt_lib::ov_as($memory_1, 'ov_is');
#line 543
$memory_5 = $memory_0->{'top'};
#line 543
$memory_5 = $memory_5->{'vars'};
#line 543
$memory_6 = $memory_3->{'src'};
#line 543
$memory_5 = $memory_5->[$memory_6];
#line 543
undef($memory_6);
#line 543
$memory_4 = nl::is_variant($memory_5);
#line 543
undef($memory_5);
#line 543
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 543
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 543
if (c_rt_lib::check_true($memory_4)) {goto label_222;}
#line 543
$memory_5 = c_rt_lib::to_nl(0);
#line 543
undef($memory_0);
#line 543
undef($memory_1);
#line 543
undef($memory_2);
#line 543
undef($memory_3);
#line 543
undef($memory_4);
#line 543
return $memory_5;
#line 543
undef($memory_5);
#line 543
goto label_222;
#line 543
label_222:
#line 543
undef($memory_4);
#line 544
$memory_5 = $memory_3->{'type'};
#line 544
$memory_4 = nl::is_sim($memory_5);
#line 544
undef($memory_5);
#line 544
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 544
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 544
if (c_rt_lib::check_true($memory_4)) {goto label_239;}
#line 544
$memory_5 = c_rt_lib::to_nl(0);
#line 544
undef($memory_0);
#line 544
undef($memory_1);
#line 544
undef($memory_2);
#line 544
undef($memory_3);
#line 544
undef($memory_4);
#line 544
return $memory_5;
#line 544
undef($memory_5);
#line 544
goto label_239;
#line 544
label_239:
#line 544
undef($memory_4);
#line 544
undef($memory_3);
#line 545
goto label_659;
#line 545
label_243:
#line 545
$memory_3 = c_rt_lib::ov_as($memory_1, 'ov_as');
#line 546
$memory_4 = $memory_0->{'top'};
#line 546
$memory_4 = $memory_4->{'vars'};
#line 546
$memory_5 = $memory_3->{'src'};
#line 546
$memory_4 = $memory_4->[$memory_5];
#line 546
undef($memory_5);
#line 547
$memory_5 = nl::is_variant($memory_4);
#line 547
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 547
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 547
if (c_rt_lib::check_true($memory_5)) {goto label_264;}
#line 547
$memory_6 = c_rt_lib::to_nl(0);
#line 547
undef($memory_0);
#line 547
undef($memory_1);
#line 547
undef($memory_2);
#line 547
undef($memory_3);
#line 547
undef($memory_4);
#line 547
undef($memory_5);
#line 547
return $memory_6;
#line 547
undef($memory_6);
#line 547
goto label_264;
#line 547
label_264:
#line 547
undef($memory_5);
#line 548
$memory_6 = $memory_3->{'type'};
#line 548
$memory_5 = nl::is_sim($memory_6);
#line 548
undef($memory_6);
#line 548
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 548
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 548
if (c_rt_lib::check_true($memory_5)) {goto label_282;}
#line 548
$memory_6 = c_rt_lib::to_nl(0);
#line 548
undef($memory_0);
#line 548
undef($memory_1);
#line 548
undef($memory_2);
#line 548
undef($memory_3);
#line 548
undef($memory_4);
#line 548
undef($memory_5);
#line 548
return $memory_6;
#line 548
undef($memory_6);
#line 548
goto label_282;
#line 548
label_282:
#line 548
undef($memory_5);
#line 549
$memory_6 = $memory_3->{'type'};
#line 549
$memory_5 = ov::is($memory_4, $memory_6);
#line 549
undef($memory_6);
#line 549
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 549
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 549
if (c_rt_lib::check_true($memory_5)) {goto label_300;}
#line 549
$memory_6 = c_rt_lib::to_nl(0);
#line 549
undef($memory_0);
#line 549
undef($memory_1);
#line 549
undef($memory_2);
#line 549
undef($memory_3);
#line 549
undef($memory_4);
#line 549
undef($memory_5);
#line 549
return $memory_6;
#line 549
undef($memory_6);
#line 549
goto label_300;
#line 549
label_300:
#line 549
undef($memory_5);
#line 549
undef($memory_4);
#line 549
undef($memory_3);
#line 550
goto label_659;
#line 550
label_305:
#line 550
$memory_3 = c_rt_lib::ov_as($memory_1, 'return');
#line 550
undef($memory_3);
#line 551
goto label_659;
#line 551
label_309:
#line 551
$memory_3 = c_rt_lib::ov_as($memory_1, 'die');
#line 551
undef($memory_3);
#line 552
goto label_659;
#line 552
label_313:
#line 552
$memory_3 = c_rt_lib::ov_as($memory_1, 'move');
#line 552
undef($memory_3);
#line 553
goto label_659;
#line 553
label_317:
#line 553
$memory_3 = c_rt_lib::ov_as($memory_1, 'load_const');
#line 553
undef($memory_3);
#line 554
goto label_659;
#line 554
label_321:
#line 554
$memory_3 = c_rt_lib::ov_as($memory_1, 'get_frm_idx');
#line 555
$memory_4 = $memory_0->{'top'};
#line 555
$memory_4 = $memory_4->{'vars'};
#line 555
$memory_5 = $memory_3->{'src'};
#line 555
$memory_4 = $memory_4->[$memory_5];
#line 555
undef($memory_5);
#line 556
$memory_5 = nl::is_array($memory_4);
#line 556
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 556
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 556
if (c_rt_lib::check_true($memory_5)) {goto label_342;}
#line 556
$memory_6 = c_rt_lib::to_nl(0);
#line 556
undef($memory_0);
#line 556
undef($memory_1);
#line 556
undef($memory_2);
#line 556
undef($memory_3);
#line 556
undef($memory_4);
#line 556
undef($memory_5);
#line 556
return $memory_6;
#line 556
undef($memory_6);
#line 556
goto label_342;
#line 556
label_342:
#line 556
undef($memory_5);
#line 557
$memory_5 = $memory_0->{'top'};
#line 557
$memory_5 = $memory_5->{'vars'};
#line 557
$memory_6 = $memory_3->{'idx'};
#line 557
$memory_5 = $memory_5->[$memory_6];
#line 557
undef($memory_6);
#line 558
$memory_6 = nl::is_sim($memory_5);
#line 558
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 558
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 558
if (c_rt_lib::check_true($memory_6)) {goto label_364;}
#line 558
$memory_7 = c_rt_lib::to_nl(0);
#line 558
undef($memory_0);
#line 558
undef($memory_1);
#line 558
undef($memory_2);
#line 558
undef($memory_3);
#line 558
undef($memory_4);
#line 558
undef($memory_5);
#line 558
undef($memory_6);
#line 558
return $memory_7;
#line 558
undef($memory_7);
#line 558
goto label_364;
#line 558
label_364:
#line 558
undef($memory_6);
#line 559
$memory_6 = array::len($memory_4);
#line 559
$memory_6 = c_rt_lib::to_nl($memory_5 < $memory_6);
#line 559
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 559
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 559
if (c_rt_lib::check_true($memory_6)) {goto label_382;}
#line 559
$memory_7 = c_rt_lib::to_nl(0);
#line 559
undef($memory_0);
#line 559
undef($memory_1);
#line 559
undef($memory_2);
#line 559
undef($memory_3);
#line 559
undef($memory_4);
#line 559
undef($memory_5);
#line 559
undef($memory_6);
#line 559
return $memory_7;
#line 559
undef($memory_7);
#line 559
goto label_382;
#line 559
label_382:
#line 559
undef($memory_6);
#line 560
$memory_6 = 0;
#line 560
$memory_6 = c_rt_lib::to_nl($memory_5 >= $memory_6);
#line 560
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 560
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 560
if (c_rt_lib::check_true($memory_6)) {goto label_400;}
#line 560
$memory_7 = c_rt_lib::to_nl(0);
#line 560
undef($memory_0);
#line 560
undef($memory_1);
#line 560
undef($memory_2);
#line 560
undef($memory_3);
#line 560
undef($memory_4);
#line 560
undef($memory_5);
#line 560
undef($memory_6);
#line 560
return $memory_7;
#line 560
undef($memory_7);
#line 560
goto label_400;
#line 560
label_400:
#line 560
undef($memory_6);
#line 560
undef($memory_4);
#line 560
undef($memory_5);
#line 560
undef($memory_3);
#line 561
goto label_659;
#line 561
label_406:
#line 561
$memory_3 = c_rt_lib::ov_as($memory_1, 'set_at_idx');
#line 562
$memory_4 = $memory_0->{'top'};
#line 562
$memory_4 = $memory_4->{'vars'};
#line 562
$memory_5 = $memory_3->{'src'};
#line 562
$memory_4 = $memory_4->[$memory_5];
#line 562
undef($memory_5);
#line 563
$memory_5 = nl::is_array($memory_4);
#line 563
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 563
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 563
if (c_rt_lib::check_true($memory_5)) {goto label_427;}
#line 563
$memory_6 = c_rt_lib::to_nl(0);
#line 563
undef($memory_0);
#line 563
undef($memory_1);
#line 563
undef($memory_2);
#line 563
undef($memory_3);
#line 563
undef($memory_4);
#line 563
undef($memory_5);
#line 563
return $memory_6;
#line 563
undef($memory_6);
#line 563
goto label_427;
#line 563
label_427:
#line 563
undef($memory_5);
#line 564
$memory_5 = $memory_0->{'top'};
#line 564
$memory_5 = $memory_5->{'vars'};
#line 564
$memory_6 = $memory_3->{'idx'};
#line 564
$memory_5 = $memory_5->[$memory_6];
#line 564
undef($memory_6);
#line 565
$memory_6 = nl::is_sim($memory_5);
#line 565
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 565
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 565
if (c_rt_lib::check_true($memory_6)) {goto label_449;}
#line 565
$memory_7 = c_rt_lib::to_nl(0);
#line 565
undef($memory_0);
#line 565
undef($memory_1);
#line 565
undef($memory_2);
#line 565
undef($memory_3);
#line 565
undef($memory_4);
#line 565
undef($memory_5);
#line 565
undef($memory_6);
#line 565
return $memory_7;
#line 565
undef($memory_7);
#line 565
goto label_449;
#line 565
label_449:
#line 565
undef($memory_6);
#line 566
$memory_6 = array::len($memory_4);
#line 566
$memory_6 = c_rt_lib::to_nl($memory_5 < $memory_6);
#line 566
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 566
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 566
if (c_rt_lib::check_true($memory_6)) {goto label_467;}
#line 566
$memory_7 = c_rt_lib::to_nl(0);
#line 566
undef($memory_0);
#line 566
undef($memory_1);
#line 566
undef($memory_2);
#line 566
undef($memory_3);
#line 566
undef($memory_4);
#line 566
undef($memory_5);
#line 566
undef($memory_6);
#line 566
return $memory_7;
#line 566
undef($memory_7);
#line 566
goto label_467;
#line 566
label_467:
#line 566
undef($memory_6);
#line 566
undef($memory_4);
#line 566
undef($memory_5);
#line 566
undef($memory_3);
#line 567
goto label_659;
#line 567
label_473:
#line 567
$memory_3 = c_rt_lib::ov_as($memory_1, 'get_val');
#line 568
$memory_4 = $memory_0->{'top'};
#line 568
$memory_4 = $memory_4->{'vars'};
#line 568
$memory_5 = $memory_3->{'src'};
#line 568
$memory_4 = $memory_4->[$memory_5];
#line 568
undef($memory_5);
#line 569
$memory_5 = nl::is_hash($memory_4);
#line 569
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 569
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 569
if (c_rt_lib::check_true($memory_5)) {goto label_494;}
#line 569
$memory_6 = c_rt_lib::to_nl(0);
#line 569
undef($memory_0);
#line 569
undef($memory_1);
#line 569
undef($memory_2);
#line 569
undef($memory_3);
#line 569
undef($memory_4);
#line 569
undef($memory_5);
#line 569
return $memory_6;
#line 569
undef($memory_6);
#line 569
goto label_494;
#line 569
label_494:
#line 569
undef($memory_5);
#line 570
$memory_6 = $memory_3->{'key'};
#line 570
$memory_5 = nl::is_sim($memory_6);
#line 570
undef($memory_6);
#line 570
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 570
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 570
if (c_rt_lib::check_true($memory_5)) {goto label_512;}
#line 570
$memory_6 = c_rt_lib::to_nl(0);
#line 570
undef($memory_0);
#line 570
undef($memory_1);
#line 570
undef($memory_2);
#line 570
undef($memory_3);
#line 570
undef($memory_4);
#line 570
undef($memory_5);
#line 570
return $memory_6;
#line 570
undef($memory_6);
#line 570
goto label_512;
#line 570
label_512:
#line 570
undef($memory_5);
#line 571
$memory_6 = $memory_3->{'key'};
#line 571
$memory_5 = hash::has_key($memory_4, $memory_6);
#line 571
undef($memory_6);
#line 571
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 571
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 571
if (c_rt_lib::check_true($memory_5)) {goto label_530;}
#line 571
$memory_6 = c_rt_lib::to_nl(0);
#line 571
undef($memory_0);
#line 571
undef($memory_1);
#line 571
undef($memory_2);
#line 571
undef($memory_3);
#line 571
undef($memory_4);
#line 571
undef($memory_5);
#line 571
return $memory_6;
#line 571
undef($memory_6);
#line 571
goto label_530;
#line 571
label_530:
#line 571
undef($memory_5);
#line 571
undef($memory_4);
#line 571
undef($memory_3);
#line 572
goto label_659;
#line 572
label_535:
#line 572
$memory_3 = c_rt_lib::ov_as($memory_1, 'set_val');
#line 573
$memory_4 = $memory_0->{'top'};
#line 573
$memory_4 = $memory_4->{'vars'};
#line 573
$memory_5 = $memory_3->{'src'};
#line 573
$memory_4 = $memory_4->[$memory_5];
#line 573
undef($memory_5);
#line 574
$memory_5 = nl::is_hash($memory_4);
#line 574
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 574
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 574
if (c_rt_lib::check_true($memory_5)) {goto label_556;}
#line 574
$memory_6 = c_rt_lib::to_nl(0);
#line 574
undef($memory_0);
#line 574
undef($memory_1);
#line 574
undef($memory_2);
#line 574
undef($memory_3);
#line 574
undef($memory_4);
#line 574
undef($memory_5);
#line 574
return $memory_6;
#line 574
undef($memory_6);
#line 574
goto label_556;
#line 574
label_556:
#line 574
undef($memory_5);
#line 575
$memory_6 = $memory_3->{'key'};
#line 575
$memory_5 = nl::is_sim($memory_6);
#line 575
undef($memory_6);
#line 575
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 575
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 575
if (c_rt_lib::check_true($memory_5)) {goto label_574;}
#line 575
$memory_6 = c_rt_lib::to_nl(0);
#line 575
undef($memory_0);
#line 575
undef($memory_1);
#line 575
undef($memory_2);
#line 575
undef($memory_3);
#line 575
undef($memory_4);
#line 575
undef($memory_5);
#line 575
return $memory_6;
#line 575
undef($memory_6);
#line 575
goto label_574;
#line 575
label_574:
#line 575
undef($memory_5);
#line 575
undef($memory_4);
#line 575
undef($memory_3);
#line 576
goto label_659;
#line 576
label_579:
#line 576
$memory_3 = c_rt_lib::ov_as($memory_1, 'ov_mk');
#line 577
$memory_5 = $memory_3->{'name'};
#line 577
$memory_4 = nl::is_sim($memory_5);
#line 577
undef($memory_5);
#line 577
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 577
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 577
if (c_rt_lib::check_true($memory_4)) {goto label_596;}
#line 577
$memory_5 = c_rt_lib::to_nl(0);
#line 577
undef($memory_0);
#line 577
undef($memory_1);
#line 577
undef($memory_2);
#line 577
undef($memory_3);
#line 577
undef($memory_4);
#line 577
return $memory_5;
#line 577
undef($memory_5);
#line 577
goto label_596;
#line 577
label_596:
#line 577
undef($memory_4);
#line 577
undef($memory_3);
#line 578
goto label_659;
#line 578
label_600:
#line 578
$memory_3 = c_rt_lib::ov_as($memory_1, 'prt_lbl');
#line 578
undef($memory_3);
#line 579
goto label_659;
#line 579
label_604:
#line 579
$memory_3 = c_rt_lib::ov_as($memory_1, 'if_goto');
#line 580
$memory_4 = $memory_0->{'top'};
#line 580
$memory_4 = $memory_4->{'vars'};
#line 580
$memory_5 = $memory_3->{'src'};
#line 580
$memory_4 = $memory_4->[$memory_5];
#line 580
undef($memory_5);
#line 581
$memory_5 = nl::is_variant($memory_4);
#line 581
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 581
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 581
if (c_rt_lib::check_true($memory_5)) {goto label_625;}
#line 581
$memory_6 = c_rt_lib::to_nl(0);
#line 581
undef($memory_0);
#line 581
undef($memory_1);
#line 581
undef($memory_2);
#line 581
undef($memory_3);
#line 581
undef($memory_4);
#line 581
undef($memory_5);
#line 581
return $memory_6;
#line 581
undef($memory_6);
#line 581
goto label_625;
#line 581
label_625:
#line 581
undef($memory_5);
#line 582
$memory_5 = $memory_4;
#line 582
$memory_5 = c_rt_lib::ov_is($memory_5, 'TRUE');
#line 582
if (c_rt_lib::check_true($memory_5)) {goto label_632;}
#line 582
$memory_5 = $memory_4;
#line 582
$memory_5 = c_rt_lib::ov_is($memory_5, 'FALSE');
#line 582
label_632:
#line 582
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 582
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 582
if (c_rt_lib::check_true($memory_5)) {goto label_646;}
#line 582
$memory_6 = c_rt_lib::to_nl(0);
#line 582
undef($memory_0);
#line 582
undef($memory_1);
#line 582
undef($memory_2);
#line 582
undef($memory_3);
#line 582
undef($memory_4);
#line 582
undef($memory_5);
#line 582
return $memory_6;
#line 582
undef($memory_6);
#line 582
goto label_646;
#line 582
label_646:
#line 582
undef($memory_5);
#line 582
undef($memory_4);
#line 582
undef($memory_3);
#line 583
goto label_659;
#line 583
label_651:
#line 583
$memory_3 = c_rt_lib::ov_as($memory_1, 'goto');
#line 583
undef($memory_3);
#line 584
goto label_659;
#line 584
label_655:
#line 584
$memory_3 = c_rt_lib::ov_as($memory_1, 'clear');
#line 584
undef($memory_3);
#line 585
goto label_659;
#line 585
label_659:
#line 585
undef($memory_2);
#line 586
$memory_2 = c_rt_lib::to_nl(1);
#line 586
undef($memory_0);
#line 586
undef($memory_1);
#line 586
return $memory_2;
#line 586
undef($memory_2);
#line 586
undef($memory_0);
#line 586
undef($memory_1);
#line 586
return;
}

sub interpreter::__callback_value_t() {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;
#line 592
$memory_4 = {
	module => "interpreter",
	name => "return_t",
};
#line 592
$memory_4 = c_rt_lib::ov_mk_arg('ref', $memory_4);
#line 593
$memory_6 = ptd::ptd_im();
#line 593
$memory_5 = ptd::arr($memory_6);
#line 593
undef($memory_6);
#line 594
$memory_7 = {
	module => "profile_inter",
	name => "row_t",
};
#line 594
$memory_7 = c_rt_lib::ov_mk_arg('ref', $memory_7);
#line 594
$memory_6 = ptd::arr($memory_7);
#line 594
undef($memory_7);
#line 594
$memory_3 = {return => $memory_4,args => $memory_5,profile => $memory_6,};
#line 594
undef($memory_4);
#line 594
undef($memory_5);
#line 594
undef($memory_6);
#line 594
$memory_2 = ptd::rec($memory_3);
#line 594
undef($memory_3);
#line 596
$memory_3 = ptd::sim();
#line 596
$memory_1 = {ok => $memory_2,err => $memory_3,};
#line 596
undef($memory_2);
#line 596
undef($memory_3);
#line 596
$memory_0 = ptd::var($memory_1);
#line 596
undef($memory_1);
#line 596
return $memory_0;
#line 596
undef($memory_0);
#line 596
return;
}

my $_callback_value_t;
sub interpreter::callback_value_t() {
	$_callback_value_t = interpreter::__callback_value_t() unless defined $_callback_value_t;
	return $_callback_value_t;
}

sub interpreter::__return_t() {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;
#line 601
$memory_2 = ptd::ptd_im();
#line 601
$memory_3 = ptd::none();
#line 601
$memory_1 = {yes => $memory_2,no => $memory_3,};
#line 601
undef($memory_2);
#line 601
undef($memory_3);
#line 601
$memory_0 = ptd::var($memory_1);
#line 601
undef($memory_1);
#line 601
return $memory_0;
#line 601
undef($memory_0);
#line 601
return;
}

my $_return_t;
sub interpreter::return_t() {
	$_return_t = interpreter::__return_t() unless defined $_return_t;
	return $_return_t;
}

sub interpreter_priv::append_profile($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];
#line 605
$memory_2 = array::len($memory_1);
#line 606
$memory_3 = 2;
#line 606
$memory_3 = c_rt_lib::to_nl($memory_2 < $memory_3);
#line 606
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 606
if (c_rt_lib::check_true($memory_3)) {goto label_10;}
#line 606
undef($memory_1);
#line 606
undef($memory_2);
#line 606
undef($memory_3);
#line 606
$_[0] = $memory_0;return;
#line 606
goto label_10;
#line 606
label_10:
#line 606
undef($memory_3);
#line 607
$memory_4 = 0;
#line 607
$memory_3 = $memory_1->[$memory_4];
#line 607
undef($memory_4);
#line 607
$memory_3 = $memory_3->{'time'};
#line 608
$memory_4 = $memory_0->{'profile'};
#line 608
$memory_6 = $memory_0->{'profile'};
#line 608
$memory_5 = array::len($memory_6);
#line 608
undef($memory_6);
#line 608
$memory_6 = 1;
#line 608
$memory_5 = $memory_5 - $memory_6;
#line 608
undef($memory_6);
#line 608
$memory_4 = $memory_4->[$memory_5];
#line 608
undef($memory_5);
#line 608
$memory_4 = $memory_4->{'time'};
#line 609
$memory_6 = 0;
#line 609
$memory_5 = c_rt_lib::get_ref_arr($memory_1, $memory_6);
#line 609
$memory_7 = $memory_4;
#line 609
 if (c_rt_lib::get_hashcount($memory_5) > 1) {$memory_5 = {%{$memory_5}};}$memory_5->{'time'} = $memory_7;
#line 609
c_rt_lib::set_ref_arr($memory_1, $memory_6, $memory_5);
#line 609
undef($memory_5);
#line 609
undef($memory_6);
#line 609
undef($memory_7);
#line 610
$memory_5 = 1;
#line 610
label_35:
#line 610
$memory_6 = c_rt_lib::to_nl($memory_5 < $memory_2);
#line 610
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 610
if (c_rt_lib::check_true($memory_6)) {goto label_56;}
#line 611
$memory_7 = $memory_1->[$memory_5];
#line 611
$memory_7 = $memory_7->{'time'};
#line 612
$memory_9 = profile_inter::minus($memory_7, $memory_3);
#line 612
$memory_8 = profile_inter::plus($memory_9, $memory_4);
#line 612
undef($memory_9);
#line 612
$memory_9 = c_rt_lib::get_ref_arr($memory_1, $memory_5);
#line 612
$memory_10 = $memory_8;
#line 612
 if (c_rt_lib::get_hashcount($memory_9) > 1) {$memory_9 = {%{$memory_9}};}$memory_9->{'time'} = $memory_10;
#line 612
c_rt_lib::set_ref_arr($memory_1, $memory_5, $memory_9);
#line 612
undef($memory_8);
#line 612
undef($memory_9);
#line 612
undef($memory_10);
#line 612
undef($memory_7);
#line 610
$memory_7 = 1;
#line 610
$memory_5 = $memory_5 + $memory_7;
#line 610
undef($memory_7);
#line 613
goto label_35;
#line 613
label_56:
#line 613
undef($memory_5);
#line 613
undef($memory_6);
#line 614
$memory_5 = "profile";
#line 614
$memory_5 = c_rt_lib::get_ref_hash($memory_0, $memory_5);
#line 614
array::append($memory_5, $memory_1);
#line 614
$memory_6 = "profile";
#line 614
c_rt_lib::set_ref_hash($memory_0, $memory_6, $memory_5);
#line 614
undef($memory_6);
#line 614
undef($memory_5);
#line 614
undef($memory_2);
#line 614
undef($memory_3);
#line 614
undef($memory_4);
#line 614
undef($memory_1);
#line 614
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub interpreter::finish_callback($$$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;my $memory_13;my $memory_14;my $memory_15;my $memory_16;my $memory_17;my $memory_18;my $memory_19;$memory_0 = $_[0];$memory_1 = $_[1];$memory_2 = $_[2];$memory_3 = $_[3];Scalar::Util::weaken($_[3]) if ref($_[3]);
#line 619
$memory_4 = $memory_3->{'rstate'};
#line 619
$memory_4 = c_rt_lib::ov_is($memory_4, 'callback');
#line 619
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 619
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 619
if (c_rt_lib::check_true($memory_4)) {goto label_17;}
#line 620
$memory_5 = "returned from another function compared to calling";
#line 620
$memory_5 = c_rt_lib::ov_mk_arg('error', $memory_5);
#line 620
$memory_6 = $memory_5;
#line 620
 if (c_rt_lib::get_hashcount($memory_3) > 1) {$memory_3 = {%{$memory_3}};}$memory_3->{'rstate'} = $memory_6;
#line 620
undef($memory_5);
#line 620
undef($memory_6);
#line 621
undef($memory_0);
#line 621
undef($memory_1);
#line 621
undef($memory_2);
#line 621
undef($memory_4);
#line 621
$_[3] = $memory_3;return;
#line 622
goto label_17;
#line 622
label_17:
#line 622
undef($memory_4);
#line 623
$memory_4 = $memory_3->{'rstate'};
#line 623
$memory_4 = c_rt_lib::ov_as($memory_4, 'callback');
#line 624
$memory_5 = $memory_4->{'call'};
#line 625
$memory_6 = $memory_5->{'fun_name'};
#line 625
$memory_6 = c_rt_lib::to_nl($memory_6 ne $memory_0);
#line 625
if (c_rt_lib::check_true($memory_6)) {goto label_27;}
#line 625
$memory_6 = $memory_5->{'mod'};
#line 625
$memory_6 = c_rt_lib::to_nl($memory_6 ne $memory_1);
#line 625
label_27:
#line 625
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 625
if (c_rt_lib::check_true($memory_6)) {goto label_49;}
#line 626
$memory_7 = "returned to interpreter from another function: ";
#line 626
$memory_7 = $memory_7 . $memory_1;
#line 626
$memory_8 = "::";
#line 626
$memory_7 = $memory_7 . $memory_8;
#line 626
undef($memory_8);
#line 626
$memory_7 = $memory_7 . $memory_0;
#line 626
$memory_7 = c_rt_lib::ov_mk_arg('error', $memory_7);
#line 626
$memory_8 = $memory_7;
#line 626
 if (c_rt_lib::get_hashcount($memory_3) > 1) {$memory_3 = {%{$memory_3}};}$memory_3->{'rstate'} = $memory_8;
#line 626
undef($memory_7);
#line 626
undef($memory_8);
#line 627
undef($memory_0);
#line 627
undef($memory_1);
#line 627
undef($memory_2);
#line 627
undef($memory_4);
#line 627
undef($memory_5);
#line 627
undef($memory_6);
#line 627
$_[3] = $memory_3;return;
#line 628
goto label_49;
#line 628
label_49:
#line 628
undef($memory_6);
#line 629
$memory_6 = c_rt_lib::ov_is($memory_2, 'ok');
#line 629
if (c_rt_lib::check_true($memory_6)) {goto label_58;}
#line 648
$memory_6 = c_rt_lib::ov_is($memory_2, 'err');
#line 648
if (c_rt_lib::check_true($memory_6)) {goto label_211;}
#line 648
$memory_6 = "NOMATCHALERT";
#line 648
$memory_6 = [$memory_6,$memory_2];
#line 648
die(dfile::ssave($memory_6));
#line 629
label_58:
#line 629
$memory_7 = c_rt_lib::ov_as($memory_2, 'ok');
#line 630
$memory_8 = "top";
#line 630
$memory_8 = c_rt_lib::get_ref_hash($memory_3, $memory_8);
#line 630
$memory_9 = "next";
#line 630
$memory_9 = c_rt_lib::get_ref_hash($memory_8, $memory_9);
#line 630
$memory_10 = 1;
#line 630
$memory_9 = $memory_9 + $memory_10;
#line 630
$memory_11 = "next";
#line 630
c_rt_lib::set_ref_hash($memory_8, $memory_11, $memory_9);
#line 630
$memory_11 = "top";
#line 630
c_rt_lib::set_ref_hash($memory_3, $memory_11, $memory_8);
#line 630
undef($memory_11);
#line 630
undef($memory_8);
#line 630
undef($memory_9);
#line 630
undef($memory_10);
#line 631
$memory_8 = $memory_7->{'return'};
#line 631
$memory_9 = c_rt_lib::ov_is($memory_8, 'yes');
#line 631
if (c_rt_lib::check_true($memory_9)) {goto label_82;}
#line 633
$memory_9 = c_rt_lib::ov_is($memory_8, 'no');
#line 633
if (c_rt_lib::check_true($memory_9)) {goto label_112;}
#line 633
$memory_9 = "NOMATCHALERT";
#line 633
$memory_9 = [$memory_9,$memory_8];
#line 633
die(dfile::ssave($memory_9));
#line 631
label_82:
#line 631
$memory_10 = c_rt_lib::ov_as($memory_8, 'yes');
#line 632
$memory_11 = $memory_5->{'dest'};
#line 632
$memory_12 = "";
#line 632
$memory_11 = c_rt_lib::to_nl($memory_11 eq $memory_12);
#line 632
undef($memory_12);
#line 632
$memory_11 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_11));
#line 632
$memory_11 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_11));
#line 632
if (c_rt_lib::check_true($memory_11)) {goto label_108;}
#line 632
$memory_12 = "top";
#line 632
$memory_12 = c_rt_lib::get_ref_hash($memory_3, $memory_12);
#line 632
$memory_13 = "vars";
#line 632
$memory_13 = c_rt_lib::get_ref_hash($memory_12, $memory_13);
#line 632
$memory_15 = $memory_5->{'dest'};
#line 632
$memory_14 = $memory_10;
#line 632
 if (c_rt_lib::get_arrcount($memory_13) > 1) {$memory_13 = [@{$memory_13}];}$memory_13->[$memory_15] = $memory_14;
#line 632
$memory_16 = "vars";
#line 632
c_rt_lib::set_ref_hash($memory_12, $memory_16, $memory_13);
#line 632
$memory_16 = "top";
#line 632
c_rt_lib::set_ref_hash($memory_3, $memory_16, $memory_12);
#line 632
undef($memory_16);
#line 632
undef($memory_12);
#line 632
undef($memory_13);
#line 632
undef($memory_14);
#line 632
undef($memory_15);
#line 632
goto label_108;
#line 632
label_108:
#line 632
undef($memory_11);
#line 632
undef($memory_10);
#line 633
goto label_145;
#line 633
label_112:
#line 634
$memory_10 = $memory_5->{'dest'};
#line 634
$memory_11 = "";
#line 634
$memory_10 = c_rt_lib::to_nl($memory_10 ne $memory_11);
#line 634
undef($memory_11);
#line 634
$memory_10 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_10));
#line 634
if (c_rt_lib::check_true($memory_10)) {goto label_142;}
#line 635
$memory_11 = "no value return from function: ";
#line 635
$memory_11 = $memory_11 . $memory_1;
#line 635
$memory_12 = "::";
#line 635
$memory_11 = $memory_11 . $memory_12;
#line 635
undef($memory_12);
#line 635
$memory_11 = $memory_11 . $memory_0;
#line 635
$memory_11 = c_rt_lib::ov_mk_arg('error', $memory_11);
#line 635
$memory_12 = $memory_11;
#line 635
 if (c_rt_lib::get_hashcount($memory_3) > 1) {$memory_3 = {%{$memory_3}};}$memory_3->{'rstate'} = $memory_12;
#line 635
undef($memory_11);
#line 635
undef($memory_12);
#line 636
undef($memory_0);
#line 636
undef($memory_1);
#line 636
undef($memory_2);
#line 636
undef($memory_4);
#line 636
undef($memory_5);
#line 636
undef($memory_6);
#line 636
undef($memory_7);
#line 636
undef($memory_8);
#line 636
undef($memory_9);
#line 636
undef($memory_10);
#line 636
$_[3] = $memory_3;return;
#line 637
goto label_142;
#line 637
label_142:
#line 637
undef($memory_10);
#line 638
goto label_145;
#line 638
label_145:
#line 638
undef($memory_8);
#line 638
undef($memory_9);
#line 639
$memory_8 = $memory_7->{'profile'};
#line 639
interpreter_priv::append_profile($memory_3, $memory_8);
#line 639
undef($memory_8);
#line 640
$memory_9 = $memory_5->{'args'};
#line 640
$memory_8 = array::len($memory_9);
#line 640
undef($memory_9);
#line 640
$memory_9 = 0;
#line 640
$memory_10 = 1;
#line 640
label_156:
#line 640
$memory_11 = c_rt_lib::to_nl($memory_9 >= $memory_8);
#line 640
if (c_rt_lib::check_true($memory_11)) {goto label_198;}
#line 641
$memory_12 = $memory_5->{'args'};
#line 641
$memory_12 = $memory_12->[$memory_9];
#line 641
$memory_13 = c_rt_lib::ov_is($memory_12, 'val');
#line 641
if (c_rt_lib::check_true($memory_13)) {goto label_168;}
#line 642
$memory_13 = c_rt_lib::ov_is($memory_12, 'ref');
#line 642
if (c_rt_lib::check_true($memory_13)) {goto label_172;}
#line 642
$memory_13 = "NOMATCHALERT";
#line 642
$memory_13 = [$memory_13,$memory_12];
#line 642
die(dfile::ssave($memory_13));
#line 641
label_168:
#line 641
$memory_14 = c_rt_lib::ov_as($memory_12, 'val');
#line 641
undef($memory_14);
#line 642
goto label_193;
#line 642
label_172:
#line 642
$memory_14 = c_rt_lib::ov_as($memory_12, 'ref');
#line 643
$memory_15 = $memory_7->{'args'};
#line 643
$memory_15 = $memory_15->[$memory_9];
#line 643
$memory_16 = "top";
#line 643
$memory_16 = c_rt_lib::get_ref_hash($memory_3, $memory_16);
#line 643
$memory_17 = "vars";
#line 643
$memory_17 = c_rt_lib::get_ref_hash($memory_16, $memory_17);
#line 643
$memory_18 = $memory_15;
#line 643
 if (c_rt_lib::get_arrcount($memory_17) > 1) {$memory_17 = [@{$memory_17}];}$memory_17->[$memory_14] = $memory_18;
#line 643
$memory_19 = "vars";
#line 643
c_rt_lib::set_ref_hash($memory_16, $memory_19, $memory_17);
#line 643
$memory_19 = "top";
#line 643
c_rt_lib::set_ref_hash($memory_3, $memory_19, $memory_16);
#line 643
undef($memory_19);
#line 643
undef($memory_15);
#line 643
undef($memory_16);
#line 643
undef($memory_17);
#line 643
undef($memory_18);
#line 643
undef($memory_14);
#line 644
goto label_193;
#line 644
label_193:
#line 644
undef($memory_12);
#line 644
undef($memory_13);
#line 645
$memory_9 = $memory_9 + $memory_10;
#line 645
goto label_156;
#line 645
label_198:
#line 645
undef($memory_8);
#line 645
undef($memory_9);
#line 645
undef($memory_10);
#line 645
undef($memory_11);
#line 646
$memory_8 = c_rt_lib::ov_mk_none('running');
#line 646
$memory_9 = $memory_8;
#line 646
 if (c_rt_lib::get_hashcount($memory_3) > 1) {$memory_3 = {%{$memory_3}};}$memory_3->{'rstate'} = $memory_9;
#line 646
undef($memory_8);
#line 646
undef($memory_9);
#line 647
interpreter_priv::handle_new_declarations($memory_3);
#line 647
undef($memory_7);
#line 648
goto label_220;
#line 648
label_211:
#line 648
$memory_7 = c_rt_lib::ov_as($memory_2, 'err');
#line 649
$memory_8 = c_rt_lib::ov_mk_arg('error', $memory_7);
#line 649
$memory_9 = $memory_8;
#line 649
 if (c_rt_lib::get_hashcount($memory_3) > 1) {$memory_3 = {%{$memory_3}};}$memory_3->{'rstate'} = $memory_9;
#line 649
undef($memory_8);
#line 649
undef($memory_9);
#line 649
undef($memory_7);
#line 650
goto label_220;
#line 650
label_220:
#line 650
undef($memory_6);
#line 650
undef($memory_4);
#line 650
undef($memory_5);
#line 650
undef($memory_0);
#line 650
undef($memory_1);
#line 650
undef($memory_2);
#line 650
$_[3] = $memory_3;return;
$_[3] = $memory_3;}

sub interpreter_priv::handle_normal_call($$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;my $memory_13;my $memory_14;my $memory_15;my $memory_16;my $memory_17;$memory_0 = $_[0];$memory_1 = $_[1];$memory_2 = $_[2];Scalar::Util::weaken($_[2]) if ref($_[2]);
#line 654
$memory_3 = "top";
#line 654
$memory_3 = c_rt_lib::get_ref_hash($memory_2, $memory_3);
#line 654
$memory_4 = "next";
#line 654
$memory_4 = c_rt_lib::get_ref_hash($memory_3, $memory_4);
#line 654
$memory_5 = 1;
#line 654
$memory_4 = $memory_4 - $memory_5;
#line 654
$memory_6 = "next";
#line 654
c_rt_lib::set_ref_hash($memory_3, $memory_6, $memory_4);
#line 654
$memory_6 = "top";
#line 654
c_rt_lib::set_ref_hash($memory_2, $memory_6, $memory_3);
#line 654
undef($memory_6);
#line 654
undef($memory_3);
#line 654
undef($memory_4);
#line 654
undef($memory_5);
#line 656
$memory_4 = $memory_0->{'mod'};
#line 656
$memory_5 = "";
#line 656
$memory_4 = c_rt_lib::to_nl($memory_4 eq $memory_5);
#line 656
undef($memory_5);
#line 656
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 656
if (c_rt_lib::check_true($memory_4)) {goto label_25;}
#line 657
$memory_5 = $memory_2->{'top'};
#line 657
$memory_5 = $memory_5->{'module_name'};
#line 657
$memory_3 = $memory_5;
#line 657
undef($memory_5);
#line 658
goto label_30;
#line 658
label_25:
#line 659
$memory_5 = $memory_0->{'mod'};
#line 659
$memory_3 = $memory_5;
#line 659
undef($memory_5);
#line 660
goto label_30;
#line 660
label_30:
#line 660
undef($memory_4);
#line 661
$memory_4 = "profile";
#line 661
$memory_4 = c_rt_lib::get_ref_hash($memory_2, $memory_4);
#line 661
profile_inter::begin($memory_4, $memory_1);
#line 661
$memory_5 = "profile";
#line 661
c_rt_lib::set_ref_hash($memory_2, $memory_5, $memory_4);
#line 661
undef($memory_5);
#line 661
undef($memory_4);
#line 662
$memory_5 = $memory_2->{'functions'};
#line 662
$memory_4 = hash::get_value($memory_5, $memory_1);
#line 662
undef($memory_5);
#line 663
$memory_6 = $memory_4->{'reg_size'};
#line 663
$memory_5 = interpreter_priv::build_registers($memory_6);
#line 663
undef($memory_6);
#line 664
$memory_6 = {};
#line 665
$memory_7 = {};
#line 666
$memory_8 = 0;
#line 667
$memory_10 = $memory_0->{'args'};
#line 667
$memory_9 = array::len($memory_10);
#line 667
undef($memory_10);
#line 667
$memory_10 = 0;
#line 667
$memory_11 = 1;
#line 667
label_53:
#line 667
$memory_12 = c_rt_lib::to_nl($memory_10 >= $memory_9);
#line 667
if (c_rt_lib::check_true($memory_12)) {goto label_96;}
#line 668
$memory_13 = $memory_0->{'args'};
#line 668
$memory_13 = $memory_13->[$memory_10];
#line 670
$memory_15 = c_rt_lib::ov_is($memory_13, 'val');
#line 670
if (c_rt_lib::check_true($memory_15)) {goto label_65;}
#line 672
$memory_15 = c_rt_lib::ov_is($memory_13, 'ref');
#line 672
if (c_rt_lib::check_true($memory_15)) {goto label_74;}
#line 672
$memory_15 = "NOMATCHALERT";
#line 672
$memory_15 = [$memory_15,$memory_13];
#line 672
die(dfile::ssave($memory_15));
#line 670
label_65:
#line 670
$memory_16 = c_rt_lib::ov_as($memory_13, 'val');
#line 671
$memory_17 = $memory_2->{'top'};
#line 671
$memory_17 = $memory_17->{'vars'};
#line 671
$memory_17 = $memory_17->[$memory_16];
#line 671
$memory_14 = $memory_17;
#line 671
undef($memory_17);
#line 671
undef($memory_16);
#line 672
goto label_84;
#line 672
label_74:
#line 672
$memory_16 = c_rt_lib::ov_as($memory_13, 'ref');
#line 673
$memory_17 = $memory_2->{'top'};
#line 673
$memory_17 = $memory_17->{'vars'};
#line 673
$memory_17 = $memory_17->[$memory_16];
#line 673
$memory_14 = $memory_17;
#line 673
undef($memory_17);
#line 674
hash::set_value($memory_7, $memory_8, $memory_16);
#line 674
undef($memory_16);
#line 675
goto label_84;
#line 675
label_84:
#line 675
undef($memory_15);
#line 676
$memory_15 = $memory_14;
#line 676
 if (c_rt_lib::get_arrcount($memory_5) > 1) {$memory_5 = [@{$memory_5}];}$memory_5->[$memory_8] = $memory_15;
#line 676
undef($memory_15);
#line 677
$memory_15 = 1;
#line 677
$memory_8 = $memory_8 + $memory_15;
#line 677
undef($memory_15);
#line 677
undef($memory_13);
#line 677
undef($memory_14);
#line 678
$memory_10 = $memory_10 + $memory_11;
#line 678
goto label_53;
#line 678
label_96:
#line 678
undef($memory_9);
#line 678
undef($memory_10);
#line 678
undef($memory_11);
#line 678
undef($memory_12);
#line 679
$memory_9 = "stack";
#line 679
$memory_9 = c_rt_lib::get_ref_hash($memory_2, $memory_9);
#line 679
$memory_10 = $memory_2->{'top'};
#line 679
array::push($memory_9, $memory_10);
#line 679
undef($memory_10);
#line 679
$memory_10 = "stack";
#line 679
c_rt_lib::set_ref_hash($memory_2, $memory_10, $memory_9);
#line 679
undef($memory_10);
#line 679
undef($memory_9);
#line 680
$memory_9 = $memory_4;
#line 680
 if (c_rt_lib::get_hashcount($memory_2) > 1) {$memory_2 = {%{$memory_2}};}$memory_2->{'func'} = $memory_9;
#line 680
undef($memory_9);
#line 684
$memory_10 = 0;
#line 686
$memory_11 = $memory_0->{'dest'};
#line 686
$memory_9 = {func_key => $memory_1,module_name => $memory_3,next => $memory_10,vars => $memory_5,ret => $memory_11,code_vars => $memory_6,ref_arguments => $memory_7,};
#line 686
undef($memory_10);
#line 686
undef($memory_11);
#line 686
$memory_10 = $memory_9;
#line 686
 if (c_rt_lib::get_hashcount($memory_2) > 1) {$memory_2 = {%{$memory_2}};}$memory_2->{'top'} = $memory_10;
#line 686
undef($memory_9);
#line 686
undef($memory_10);
#line 690
$memory_9 = 1;
#line 690
$memory_9 = -$memory_9;
#line 690
$memory_10 = $memory_9;
#line 690
 if (c_rt_lib::get_hashcount($memory_2) > 1) {$memory_2 = {%{$memory_2}};}$memory_2->{'instruction_nr'} = $memory_10;
#line 690
undef($memory_9);
#line 690
undef($memory_10);
#line 690
undef($memory_3);
#line 690
undef($memory_4);
#line 690
undef($memory_5);
#line 690
undef($memory_6);
#line 690
undef($memory_7);
#line 690
undef($memory_8);
#line 690
undef($memory_0);
#line 690
undef($memory_1);
#line 690
$_[2] = $memory_2;return;
$_[2] = $memory_2;}

sub interpreter_priv::handle_unknown_call($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;$memory_0 = $_[0];$memory_1 = $_[1];Scalar::Util::weaken($_[1]) if ref($_[1]);
#line 694
$memory_2 = [];
#line 695
$memory_3 = $memory_0->{'args'};
#line 695
$memory_5 = 0;
#line 695
$memory_6 = 1;
#line 695
$memory_7 = c_rt_lib::array_len($memory_3);
#line 695
label_5:
#line 695
$memory_8 = c_rt_lib::to_nl($memory_5 >= $memory_7);
#line 695
if (c_rt_lib::check_true($memory_8)) {goto label_40;}
#line 695
$memory_4 = $memory_3->[$memory_5];
#line 697
$memory_10 = c_rt_lib::ov_is($memory_4, 'val');
#line 697
if (c_rt_lib::check_true($memory_10)) {goto label_16;}
#line 699
$memory_10 = c_rt_lib::ov_is($memory_4, 'ref');
#line 699
if (c_rt_lib::check_true($memory_10)) {goto label_25;}
#line 699
$memory_10 = "NOMATCHALERT";
#line 699
$memory_10 = [$memory_10,$memory_4];
#line 699
die(dfile::ssave($memory_10));
#line 697
label_16:
#line 697
$memory_11 = c_rt_lib::ov_as($memory_4, 'val');
#line 698
$memory_12 = $memory_1->{'top'};
#line 698
$memory_12 = $memory_12->{'vars'};
#line 698
$memory_12 = $memory_12->[$memory_11];
#line 698
$memory_9 = $memory_12;
#line 698
undef($memory_12);
#line 698
undef($memory_11);
#line 699
goto label_34;
#line 699
label_25:
#line 699
$memory_11 = c_rt_lib::ov_as($memory_4, 'ref');
#line 700
$memory_12 = $memory_1->{'top'};
#line 700
$memory_12 = $memory_12->{'vars'};
#line 700
$memory_12 = $memory_12->[$memory_11];
#line 700
$memory_9 = $memory_12;
#line 700
undef($memory_12);
#line 700
undef($memory_11);
#line 701
goto label_34;
#line 701
label_34:
#line 701
undef($memory_10);
#line 702
array::push($memory_2, $memory_9);
#line 702
undef($memory_9);
#line 703
$memory_5 = $memory_5 + $memory_6;
#line 703
goto label_5;
#line 703
label_40:
#line 703
undef($memory_3);
#line 703
undef($memory_4);
#line 703
undef($memory_5);
#line 703
undef($memory_6);
#line 703
undef($memory_7);
#line 703
undef($memory_8);
#line 704
$memory_3 = {call => $memory_0,args => $memory_2,};
#line 704
$memory_3 = c_rt_lib::ov_mk_arg('callback', $memory_3);
#line 704
$memory_4 = $memory_3;
#line 704
 if (c_rt_lib::get_hashcount($memory_1) > 1) {$memory_1 = {%{$memory_1}};}$memory_1->{'rstate'} = $memory_4;
#line 704
undef($memory_3);
#line 704
undef($memory_4);
#line 705
$memory_3 = 1;
#line 705
$memory_3 = -$memory_3;
#line 705
$memory_4 = $memory_3;
#line 705
 if (c_rt_lib::get_hashcount($memory_1) > 1) {$memory_1 = {%{$memory_1}};}$memory_1->{'instruction_nr'} = $memory_4;
#line 705
undef($memory_3);
#line 705
undef($memory_4);
#line 706
$memory_3 = "top";
#line 706
$memory_3 = c_rt_lib::get_ref_hash($memory_1, $memory_3);
#line 706
$memory_4 = "next";
#line 706
$memory_4 = c_rt_lib::get_ref_hash($memory_3, $memory_4);
#line 706
$memory_5 = 1;
#line 706
$memory_4 = $memory_4 - $memory_5;
#line 706
$memory_6 = "next";
#line 706
c_rt_lib::set_ref_hash($memory_3, $memory_6, $memory_4);
#line 706
$memory_6 = "top";
#line 706
c_rt_lib::set_ref_hash($memory_1, $memory_6, $memory_3);
#line 706
undef($memory_6);
#line 706
undef($memory_3);
#line 706
undef($memory_4);
#line 706
undef($memory_5);
#line 706
undef($memory_2);
#line 706
undef($memory_0);
#line 706
$_[1] = $memory_1;return;
$_[1] = $memory_1;}

sub interpreter_priv::handle_extern_call($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;my $memory_13;my $memory_14;my $memory_15;my $memory_16;my $memory_17;$memory_0 = $_[0];$memory_1 = $_[1];Scalar::Util::weaken($_[1]) if ref($_[1]);
#line 710
$memory_2 = [];
#line 711
$memory_3 = $memory_0->{'args'};
#line 711
$memory_5 = 0;
#line 711
$memory_6 = 1;
#line 711
$memory_7 = c_rt_lib::array_len($memory_3);
#line 711
label_5:
#line 711
$memory_8 = c_rt_lib::to_nl($memory_5 >= $memory_7);
#line 711
if (c_rt_lib::check_true($memory_8)) {goto label_40;}
#line 711
$memory_4 = $memory_3->[$memory_5];
#line 713
$memory_10 = c_rt_lib::ov_is($memory_4, 'val');
#line 713
if (c_rt_lib::check_true($memory_10)) {goto label_16;}
#line 715
$memory_10 = c_rt_lib::ov_is($memory_4, 'ref');
#line 715
if (c_rt_lib::check_true($memory_10)) {goto label_25;}
#line 715
$memory_10 = "NOMATCHALERT";
#line 715
$memory_10 = [$memory_10,$memory_4];
#line 715
die(dfile::ssave($memory_10));
#line 713
label_16:
#line 713
$memory_11 = c_rt_lib::ov_as($memory_4, 'val');
#line 714
$memory_12 = $memory_1->{'top'};
#line 714
$memory_12 = $memory_12->{'vars'};
#line 714
$memory_12 = $memory_12->[$memory_11];
#line 714
$memory_9 = $memory_12;
#line 714
undef($memory_12);
#line 714
undef($memory_11);
#line 715
goto label_34;
#line 715
label_25:
#line 715
$memory_11 = c_rt_lib::ov_as($memory_4, 'ref');
#line 716
$memory_12 = $memory_1->{'top'};
#line 716
$memory_12 = $memory_12->{'vars'};
#line 716
$memory_12 = $memory_12->[$memory_11];
#line 716
$memory_9 = $memory_12;
#line 716
undef($memory_12);
#line 716
undef($memory_11);
#line 717
goto label_34;
#line 717
label_34:
#line 717
undef($memory_10);
#line 718
array::push($memory_2, $memory_9);
#line 718
undef($memory_9);
#line 719
$memory_5 = $memory_5 + $memory_6;
#line 719
goto label_5;
#line 719
label_40:
#line 719
undef($memory_3);
#line 719
undef($memory_4);
#line 719
undef($memory_5);
#line 719
undef($memory_6);
#line 719
undef($memory_7);
#line 719
undef($memory_8);
#line 720
$memory_4 = $memory_1->{'known_exec_func'};
#line 720
$memory_5 = $memory_0->{'mod'};
#line 720
$memory_6 = "::";
#line 720
$memory_5 = $memory_5 . $memory_6;
#line 720
undef($memory_6);
#line 720
$memory_6 = $memory_0->{'fun_name'};
#line 720
$memory_5 = $memory_5 . $memory_6;
#line 720
undef($memory_6);
#line 720
$memory_3 = hash::get_value($memory_4, $memory_5);
#line 720
undef($memory_5);
#line 720
undef($memory_4);
#line 721
$memory_5 = $memory_3->{'args'};
#line 721
$memory_4 = array::len($memory_5);
#line 721
undef($memory_5);
#line 721
$memory_5 = array::len($memory_2);
#line 721
$memory_4 = c_rt_lib::to_nl($memory_4 != $memory_5);
#line 721
undef($memory_5);
#line 721
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 721
if (c_rt_lib::check_true($memory_4)) {goto label_73;}
#line 722
$memory_5 = "incorrect console call";
#line 722
$memory_5 = c_rt_lib::ov_mk_arg('error', $memory_5);
#line 722
$memory_6 = $memory_5;
#line 722
 if (c_rt_lib::get_hashcount($memory_1) > 1) {$memory_1 = {%{$memory_1}};}$memory_1->{'rstate'} = $memory_6;
#line 722
undef($memory_5);
#line 722
undef($memory_6);
#line 723
goto label_73;
#line 723
label_73:
#line 723
undef($memory_4);
#line 724
$memory_4 = array::len($memory_2);
#line 724
$memory_5 = 0;
#line 724
$memory_6 = 1;
#line 724
label_78:
#line 724
$memory_7 = c_rt_lib::to_nl($memory_5 >= $memory_4);
#line 724
if (c_rt_lib::check_true($memory_7)) {goto label_113;}
#line 725
$memory_9 = $memory_3->{'args'};
#line 725
$memory_9 = $memory_9->[$memory_5];
#line 725
$memory_10 = $memory_2->[$memory_5];
#line 725
$memory_8 = ptd::try_dynamic_cast($memory_9, $memory_10);
#line 725
undef($memory_10);
#line 725
undef($memory_9);
#line 725
$memory_9 = c_rt_lib::ov_is($memory_8, 'ok');
#line 725
if (c_rt_lib::check_true($memory_9)) {goto label_94;}
#line 726
$memory_9 = c_rt_lib::ov_is($memory_8, 'err');
#line 726
if (c_rt_lib::check_true($memory_9)) {goto label_98;}
#line 726
$memory_9 = "NOMATCHALERT";
#line 726
$memory_9 = [$memory_9,$memory_8];
#line 726
die(dfile::ssave($memory_9));
#line 725
label_94:
#line 725
$memory_10 = c_rt_lib::ov_as($memory_8, 'ok');
#line 725
undef($memory_10);
#line 726
goto label_108;
#line 726
label_98:
#line 726
$memory_10 = c_rt_lib::ov_as($memory_8, 'err');
#line 727
$memory_11 = "incorrect type";
#line 727
$memory_11 = c_rt_lib::ov_mk_arg('error', $memory_11);
#line 727
$memory_12 = $memory_11;
#line 727
 if (c_rt_lib::get_hashcount($memory_1) > 1) {$memory_1 = {%{$memory_1}};}$memory_1->{'rstate'} = $memory_12;
#line 727
undef($memory_11);
#line 727
undef($memory_12);
#line 727
undef($memory_10);
#line 728
goto label_108;
#line 728
label_108:
#line 728
undef($memory_8);
#line 728
undef($memory_9);
#line 729
$memory_5 = $memory_5 + $memory_6;
#line 729
goto label_78;
#line 729
label_113:
#line 729
undef($memory_4);
#line 729
undef($memory_5);
#line 729
undef($memory_6);
#line 729
undef($memory_7);
#line 730
$memory_4 = $memory_3->{'type'};
#line 730
$memory_5 = c_rt_lib::ov_is($memory_4, 'sequential');
#line 730
if (c_rt_lib::check_true($memory_5)) {goto label_126;}
#line 743
$memory_5 = c_rt_lib::ov_is($memory_4, 'callback');
#line 743
if (c_rt_lib::check_true($memory_5)) {goto label_213;}
#line 743
$memory_5 = "NOMATCHALERT";
#line 743
$memory_5 = [$memory_5,$memory_4];
#line 743
die(dfile::ssave($memory_5));
#line 730
label_126:
#line 731
$memory_6 = $memory_0->{'dest'};
#line 731
$memory_7 = "";
#line 731
$memory_6 = c_rt_lib::to_nl($memory_6 eq $memory_7);
#line 731
undef($memory_7);
#line 731
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 731
if (c_rt_lib::check_true($memory_6)) {goto label_137;}
#line 732
$memory_7 = $memory_3->{'func'};
#line 732
func::exec_ref($memory_7, $memory_2);
#line 732
undef($memory_7);
#line 733
goto label_159;
#line 733
label_137:
#line 734
$memory_8 = $memory_3->{'func'};
#line 734
$memory_7 = func::exec_ref($memory_8, $memory_2);
#line 734
undef($memory_8);
#line 734
$memory_8 = "top";
#line 734
$memory_8 = c_rt_lib::get_ref_hash($memory_1, $memory_8);
#line 734
$memory_9 = "vars";
#line 734
$memory_9 = c_rt_lib::get_ref_hash($memory_8, $memory_9);
#line 734
$memory_11 = $memory_0->{'dest'};
#line 734
$memory_10 = $memory_7;
#line 734
 if (c_rt_lib::get_arrcount($memory_9) > 1) {$memory_9 = [@{$memory_9}];}$memory_9->[$memory_11] = $memory_10;
#line 734
$memory_12 = "vars";
#line 734
c_rt_lib::set_ref_hash($memory_8, $memory_12, $memory_9);
#line 734
$memory_12 = "top";
#line 734
c_rt_lib::set_ref_hash($memory_1, $memory_12, $memory_8);
#line 734
undef($memory_12);
#line 734
undef($memory_7);
#line 734
undef($memory_8);
#line 734
undef($memory_9);
#line 734
undef($memory_10);
#line 734
undef($memory_11);
#line 735
goto label_159;
#line 735
label_159:
#line 735
undef($memory_6);
#line 736
$memory_7 = $memory_0->{'args'};
#line 736
$memory_6 = array::len($memory_7);
#line 736
undef($memory_7);
#line 736
$memory_7 = 0;
#line 736
$memory_8 = 1;
#line 736
label_166:
#line 736
$memory_9 = c_rt_lib::to_nl($memory_7 >= $memory_6);
#line 736
if (c_rt_lib::check_true($memory_9)) {goto label_207;}
#line 737
$memory_10 = $memory_0->{'args'};
#line 737
$memory_10 = $memory_10->[$memory_7];
#line 738
$memory_11 = c_rt_lib::ov_is($memory_10, 'val');
#line 738
if (c_rt_lib::check_true($memory_11)) {goto label_178;}
#line 739
$memory_11 = c_rt_lib::ov_is($memory_10, 'ref');
#line 739
if (c_rt_lib::check_true($memory_11)) {goto label_182;}
#line 739
$memory_11 = "NOMATCHALERT";
#line 739
$memory_11 = [$memory_11,$memory_10];
#line 739
die(dfile::ssave($memory_11));
#line 738
label_178:
#line 738
$memory_12 = c_rt_lib::ov_as($memory_10, 'val');
#line 738
undef($memory_12);
#line 739
goto label_202;
#line 739
label_182:
#line 739
$memory_12 = c_rt_lib::ov_as($memory_10, 'ref');
#line 740
$memory_13 = $memory_2->[$memory_7];
#line 740
$memory_14 = "top";
#line 740
$memory_14 = c_rt_lib::get_ref_hash($memory_1, $memory_14);
#line 740
$memory_15 = "vars";
#line 740
$memory_15 = c_rt_lib::get_ref_hash($memory_14, $memory_15);
#line 740
$memory_16 = $memory_13;
#line 740
 if (c_rt_lib::get_arrcount($memory_15) > 1) {$memory_15 = [@{$memory_15}];}$memory_15->[$memory_12] = $memory_16;
#line 740
$memory_17 = "vars";
#line 740
c_rt_lib::set_ref_hash($memory_14, $memory_17, $memory_15);
#line 740
$memory_17 = "top";
#line 740
c_rt_lib::set_ref_hash($memory_1, $memory_17, $memory_14);
#line 740
undef($memory_17);
#line 740
undef($memory_13);
#line 740
undef($memory_14);
#line 740
undef($memory_15);
#line 740
undef($memory_16);
#line 740
undef($memory_12);
#line 741
goto label_202;
#line 741
label_202:
#line 741
undef($memory_11);
#line 741
undef($memory_10);
#line 742
$memory_7 = $memory_7 + $memory_8;
#line 742
goto label_166;
#line 742
label_207:
#line 742
undef($memory_6);
#line 742
undef($memory_7);
#line 742
undef($memory_8);
#line 742
undef($memory_9);
#line 743
goto label_241;
#line 743
label_213:
#line 744
$memory_6 = {call => $memory_0,args => $memory_2,};
#line 744
$memory_6 = c_rt_lib::ov_mk_arg('callback', $memory_6);
#line 744
$memory_7 = $memory_6;
#line 744
 if (c_rt_lib::get_hashcount($memory_1) > 1) {$memory_1 = {%{$memory_1}};}$memory_1->{'rstate'} = $memory_7;
#line 744
undef($memory_6);
#line 744
undef($memory_7);
#line 745
$memory_6 = 1;
#line 745
$memory_6 = -$memory_6;
#line 745
$memory_7 = $memory_6;
#line 745
 if (c_rt_lib::get_hashcount($memory_1) > 1) {$memory_1 = {%{$memory_1}};}$memory_1->{'instruction_nr'} = $memory_7;
#line 745
undef($memory_6);
#line 745
undef($memory_7);
#line 746
$memory_6 = "top";
#line 746
$memory_6 = c_rt_lib::get_ref_hash($memory_1, $memory_6);
#line 746
$memory_7 = "next";
#line 746
$memory_7 = c_rt_lib::get_ref_hash($memory_6, $memory_7);
#line 746
$memory_8 = 1;
#line 746
$memory_7 = $memory_7 - $memory_8;
#line 746
$memory_9 = "next";
#line 746
c_rt_lib::set_ref_hash($memory_6, $memory_9, $memory_7);
#line 746
$memory_9 = "top";
#line 746
c_rt_lib::set_ref_hash($memory_1, $memory_9, $memory_6);
#line 746
undef($memory_9);
#line 746
undef($memory_6);
#line 746
undef($memory_7);
#line 746
undef($memory_8);
#line 747
goto label_241;
#line 747
label_241:
#line 747
undef($memory_4);
#line 747
undef($memory_5);
#line 747
undef($memory_2);
#line 747
undef($memory_3);
#line 747
undef($memory_0);
#line 747
$_[1] = $memory_1;return;
$_[1] = $memory_1;}

sub interpreter_priv::__get_compiler_functions() {
my $memory_0;my $memory_1;my $memory_2;
#line 751
$memory_0 = {};
#line 752
$memory_1 = "array::push";
#line 752
$memory_2 = "";
#line 752
hash::set_value($memory_0, $memory_1, $memory_2);
#line 752
undef($memory_2);
#line 752
undef($memory_1);
#line 753
$memory_1 = "array::pop";
#line 753
$memory_2 = "";
#line 753
hash::set_value($memory_0, $memory_1, $memory_2);
#line 753
undef($memory_2);
#line 753
undef($memory_1);
#line 754
$memory_1 = "array::subarray";
#line 754
$memory_2 = "";
#line 754
hash::set_value($memory_0, $memory_1, $memory_2);
#line 754
undef($memory_2);
#line 754
undef($memory_1);
#line 755
$memory_1 = "array::append";
#line 755
$memory_2 = "";
#line 755
hash::set_value($memory_0, $memory_1, $memory_2);
#line 755
undef($memory_2);
#line 755
undef($memory_1);
#line 756
$memory_1 = "array::len";
#line 756
$memory_2 = "";
#line 756
hash::set_value($memory_0, $memory_1, $memory_2);
#line 756
undef($memory_2);
#line 756
undef($memory_1);
#line 757
$memory_1 = "array::sort";
#line 757
$memory_2 = "";
#line 757
hash::set_value($memory_0, $memory_1, $memory_2);
#line 757
undef($memory_2);
#line 757
undef($memory_1);
#line 758
$memory_1 = "hash::get_value";
#line 758
$memory_2 = "";
#line 758
hash::set_value($memory_0, $memory_1, $memory_2);
#line 758
undef($memory_2);
#line 758
undef($memory_1);
#line 759
$memory_1 = "hash::has_key";
#line 759
$memory_2 = "";
#line 759
hash::set_value($memory_0, $memory_1, $memory_2);
#line 759
undef($memory_2);
#line 759
undef($memory_1);
#line 760
$memory_1 = "hash::set_value";
#line 760
$memory_2 = "";
#line 760
hash::set_value($memory_0, $memory_1, $memory_2);
#line 760
undef($memory_2);
#line 760
undef($memory_1);
#line 761
$memory_1 = "hash::delete";
#line 761
$memory_2 = "";
#line 761
hash::set_value($memory_0, $memory_1, $memory_2);
#line 761
undef($memory_2);
#line 761
undef($memory_1);
#line 762
$memory_1 = "hash::size";
#line 762
$memory_2 = "";
#line 762
hash::set_value($memory_0, $memory_1, $memory_2);
#line 762
undef($memory_2);
#line 762
undef($memory_1);
#line 763
$memory_1 = "hash::keys";
#line 763
$memory_2 = "";
#line 763
hash::set_value($memory_0, $memory_1, $memory_2);
#line 763
undef($memory_2);
#line 763
undef($memory_1);
#line 764
$memory_1 = "string::lf";
#line 764
$memory_2 = "";
#line 764
hash::set_value($memory_0, $memory_1, $memory_2);
#line 764
undef($memory_2);
#line 764
undef($memory_1);
#line 765
$memory_1 = "string::tab";
#line 765
$memory_2 = "";
#line 765
hash::set_value($memory_0, $memory_1, $memory_2);
#line 765
undef($memory_2);
#line 765
undef($memory_1);
#line 766
$memory_1 = "string::length";
#line 766
$memory_2 = "";
#line 766
hash::set_value($memory_0, $memory_1, $memory_2);
#line 766
undef($memory_2);
#line 766
undef($memory_1);
#line 767
$memory_1 = "string::substr";
#line 767
$memory_2 = "";
#line 767
hash::set_value($memory_0, $memory_1, $memory_2);
#line 767
undef($memory_2);
#line 767
undef($memory_1);
#line 768
$memory_1 = "string::is_digit";
#line 768
$memory_2 = "";
#line 768
hash::set_value($memory_0, $memory_1, $memory_2);
#line 768
undef($memory_2);
#line 768
undef($memory_1);
#line 769
$memory_1 = "string::is_letter";
#line 769
$memory_2 = "";
#line 769
hash::set_value($memory_0, $memory_1, $memory_2);
#line 769
undef($memory_2);
#line 769
undef($memory_1);
#line 770
$memory_1 = "string::ord";
#line 770
$memory_2 = "";
#line 770
hash::set_value($memory_0, $memory_1, $memory_2);
#line 770
undef($memory_2);
#line 770
undef($memory_1);
#line 771
$memory_1 = "string::chr";
#line 771
$memory_2 = "";
#line 771
hash::set_value($memory_0, $memory_1, $memory_2);
#line 771
undef($memory_2);
#line 771
undef($memory_1);
#line 772
$memory_1 = "ov::mk";
#line 772
$memory_2 = "";
#line 772
hash::set_value($memory_0, $memory_1, $memory_2);
#line 772
undef($memory_2);
#line 772
undef($memory_1);
#line 773
$memory_1 = "ov::mk_val";
#line 773
$memory_2 = "";
#line 773
hash::set_value($memory_0, $memory_1, $memory_2);
#line 773
undef($memory_2);
#line 773
undef($memory_1);
#line 774
$memory_1 = "ov::has_value";
#line 774
$memory_2 = "";
#line 774
hash::set_value($memory_0, $memory_1, $memory_2);
#line 774
undef($memory_2);
#line 774
undef($memory_1);
#line 775
$memory_1 = "ov::get_element";
#line 775
$memory_2 = "";
#line 775
hash::set_value($memory_0, $memory_1, $memory_2);
#line 775
undef($memory_2);
#line 775
undef($memory_1);
#line 776
$memory_1 = "ov::get_value";
#line 776
$memory_2 = "";
#line 776
hash::set_value($memory_0, $memory_1, $memory_2);
#line 776
undef($memory_2);
#line 776
undef($memory_1);
#line 777
$memory_1 = "ov::is";
#line 777
$memory_2 = "";
#line 777
hash::set_value($memory_0, $memory_1, $memory_2);
#line 777
undef($memory_2);
#line 777
undef($memory_1);
#line 778
$memory_1 = "ov::as";
#line 778
$memory_2 = "";
#line 778
hash::set_value($memory_0, $memory_1, $memory_2);
#line 778
undef($memory_2);
#line 778
undef($memory_1);
#line 779
$memory_1 = "c_rt_lib::array_len";
#line 779
$memory_2 = "";
#line 779
hash::set_value($memory_0, $memory_1, $memory_2);
#line 779
undef($memory_2);
#line 779
undef($memory_1);
#line 780
$memory_1 = "c_rt_lib::array_push";
#line 780
$memory_2 = "";
#line 780
hash::set_value($memory_0, $memory_1, $memory_2);
#line 780
undef($memory_2);
#line 780
undef($memory_1);
#line 781
$memory_1 = "c_rt_lib::set_ref_arr";
#line 781
$memory_2 = "";
#line 781
hash::set_value($memory_0, $memory_1, $memory_2);
#line 781
undef($memory_2);
#line 781
undef($memory_1);
#line 782
$memory_1 = "c_rt_lib::set_ref_hash";
#line 782
$memory_2 = "";
#line 782
hash::set_value($memory_0, $memory_1, $memory_2);
#line 782
undef($memory_2);
#line 782
undef($memory_1);
#line 783
$memory_1 = "c_rt_lib::get_ref_arr";
#line 783
$memory_2 = "";
#line 783
hash::set_value($memory_0, $memory_1, $memory_2);
#line 783
undef($memory_2);
#line 783
undef($memory_1);
#line 784
$memory_1 = "c_rt_lib::get_ref_hash";
#line 784
$memory_2 = "";
#line 784
hash::set_value($memory_0, $memory_1, $memory_2);
#line 784
undef($memory_2);
#line 784
undef($memory_1);
#line 785
$memory_1 = "c_rt_lib::init_iter";
#line 785
$memory_2 = "";
#line 785
hash::set_value($memory_0, $memory_1, $memory_2);
#line 785
undef($memory_2);
#line 785
undef($memory_1);
#line 786
$memory_1 = "c_rt_lib::is_end_hash";
#line 786
$memory_2 = "";
#line 786
hash::set_value($memory_0, $memory_1, $memory_2);
#line 786
undef($memory_2);
#line 786
undef($memory_1);
#line 787
$memory_1 = "c_rt_lib::get_key_iter";
#line 787
$memory_2 = "";
#line 787
hash::set_value($memory_0, $memory_1, $memory_2);
#line 787
undef($memory_2);
#line 787
undef($memory_1);
#line 788
$memory_1 = "c_rt_lib::hash_get_value";
#line 788
$memory_2 = "";
#line 788
hash::set_value($memory_0, $memory_1, $memory_2);
#line 788
undef($memory_2);
#line 788
undef($memory_1);
#line 789
$memory_1 = "c_rt_lib::hash_set_value";
#line 789
$memory_2 = "";
#line 789
hash::set_value($memory_0, $memory_1, $memory_2);
#line 789
undef($memory_2);
#line 789
undef($memory_1);
#line 790
$memory_1 = "c_rt_lib::next_iter";
#line 790
$memory_2 = "";
#line 790
hash::set_value($memory_0, $memory_1, $memory_2);
#line 790
undef($memory_2);
#line 790
undef($memory_1);
#line 791
$memory_1 = "ptd::sim";
#line 791
$memory_2 = "";
#line 791
hash::set_value($memory_0, $memory_1, $memory_2);
#line 791
undef($memory_2);
#line 791
undef($memory_1);
#line 792
$memory_1 = "ptd::hash";
#line 792
$memory_2 = "";
#line 792
hash::set_value($memory_0, $memory_1, $memory_2);
#line 792
undef($memory_2);
#line 792
undef($memory_1);
#line 793
$memory_1 = "ptd::arr";
#line 793
$memory_2 = "";
#line 793
hash::set_value($memory_0, $memory_1, $memory_2);
#line 793
undef($memory_2);
#line 793
undef($memory_1);
#line 794
$memory_1 = "ptd::none";
#line 794
$memory_2 = "";
#line 794
hash::set_value($memory_0, $memory_1, $memory_2);
#line 794
undef($memory_2);
#line 794
undef($memory_1);
#line 795
$memory_1 = "ptd::var";
#line 795
$memory_2 = "";
#line 795
hash::set_value($memory_0, $memory_1, $memory_2);
#line 795
undef($memory_2);
#line 795
undef($memory_1);
#line 796
$memory_1 = "ptd::ptd_im";
#line 796
$memory_2 = "";
#line 796
hash::set_value($memory_0, $memory_1, $memory_2);
#line 796
undef($memory_2);
#line 796
undef($memory_1);
#line 797
$memory_1 = "ptd::ensure";
#line 797
$memory_2 = "";
#line 797
hash::set_value($memory_0, $memory_1, $memory_2);
#line 797
undef($memory_2);
#line 797
undef($memory_1);
#line 798
return $memory_0;
#line 798
undef($memory_0);
#line 798
return;
}

my $_get_compiler_functions;
sub interpreter_priv::get_compiler_functions() {
	$_get_compiler_functions = interpreter_priv::__get_compiler_functions() unless defined $_get_compiler_functions;
	return $_get_compiler_functions;
}

sub interpreter_priv::handle_array_call($$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;$memory_0 = $_[0];$memory_1 = $_[1];Scalar::Util::weaken($_[1]) if ref($_[1]);$memory_2 = $_[2];Scalar::Util::weaken($_[2]) if ref($_[2]);
#line 805
$memory_3 = "incorrect command";
#line 805
$memory_3 = c_rt_lib::ov_mk_arg('err', $memory_3);
#line 806
$memory_6 = 0;
#line 806
$memory_5 = $memory_2->[$memory_6];
#line 806
undef($memory_6);
#line 806
$memory_4 = nl::is_array($memory_5);
#line 806
undef($memory_5);
#line 806
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 806
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 806
if (c_rt_lib::check_true($memory_4)) {goto label_14;}
#line 806
undef($memory_0);
#line 806
undef($memory_4);
#line 806
$_[1] = $memory_1;$_[2] = $memory_2;return $memory_3;
#line 806
goto label_14;
#line 806
label_14:
#line 806
undef($memory_4);
#line 807
$memory_4 = "array::push";
#line 807
$memory_4 = c_rt_lib::to_nl($memory_0 eq $memory_4);
#line 807
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 807
if (c_rt_lib::check_true($memory_4)) {goto label_31;}
#line 808
$memory_6 = 0;
#line 808
$memory_5 = c_rt_lib::get_ref_arr($memory_2, $memory_6);
#line 808
$memory_8 = 1;
#line 808
$memory_7 = $memory_2->[$memory_8];
#line 808
undef($memory_8);
#line 808
array::push($memory_5, $memory_7);
#line 808
undef($memory_7);
#line 808
c_rt_lib::set_ref_arr($memory_2, $memory_6, $memory_5);
#line 808
undef($memory_5);
#line 808
undef($memory_6);
#line 809
goto label_312;
#line 809
label_31:
#line 809
$memory_4 = "array::pop";
#line 809
$memory_4 = c_rt_lib::to_nl($memory_0 eq $memory_4);
#line 809
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 809
if (c_rt_lib::check_true($memory_4)) {goto label_61;}
#line 810
$memory_7 = 0;
#line 810
$memory_6 = $memory_2->[$memory_7];
#line 810
undef($memory_7);
#line 810
$memory_5 = array::len($memory_6);
#line 810
undef($memory_6);
#line 810
$memory_6 = 0;
#line 810
$memory_5 = c_rt_lib::to_nl($memory_5 > $memory_6);
#line 810
undef($memory_6);
#line 810
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 810
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 810
if (c_rt_lib::check_true($memory_5)) {goto label_52;}
#line 810
undef($memory_0);
#line 810
undef($memory_4);
#line 810
undef($memory_5);
#line 810
$_[1] = $memory_1;$_[2] = $memory_2;return $memory_3;
#line 810
goto label_52;
#line 810
label_52:
#line 810
undef($memory_5);
#line 811
$memory_6 = 0;
#line 811
$memory_5 = c_rt_lib::get_ref_arr($memory_2, $memory_6);
#line 811
array::pop($memory_5);
#line 811
c_rt_lib::set_ref_arr($memory_2, $memory_6, $memory_5);
#line 811
undef($memory_5);
#line 811
undef($memory_6);
#line 812
goto label_312;
#line 812
label_61:
#line 812
$memory_4 = "array::subarray";
#line 812
$memory_4 = c_rt_lib::to_nl($memory_0 eq $memory_4);
#line 812
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 812
if (c_rt_lib::check_true($memory_4)) {goto label_219;}
#line 813
$memory_8 = 1;
#line 813
$memory_7 = $memory_2->[$memory_8];
#line 813
undef($memory_8);
#line 813
$memory_5 = nl::is_sim($memory_7);
#line 813
undef($memory_7);
#line 813
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 813
if (c_rt_lib::check_true($memory_6)) {goto label_78;}
#line 813
$memory_8 = 2;
#line 813
$memory_7 = $memory_2->[$memory_8];
#line 813
undef($memory_8);
#line 813
$memory_5 = nl::is_sim($memory_7);
#line 813
undef($memory_7);
#line 813
label_78:
#line 813
undef($memory_6);
#line 813
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 813
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 813
if (c_rt_lib::check_true($memory_5)) {goto label_88;}
#line 813
undef($memory_0);
#line 813
undef($memory_4);
#line 813
undef($memory_5);
#line 813
$_[1] = $memory_1;$_[2] = $memory_2;return $memory_3;
#line 813
goto label_88;
#line 813
label_88:
#line 813
undef($memory_5);
#line 814
$memory_8 = 1;
#line 814
$memory_7 = $memory_2->[$memory_8];
#line 814
undef($memory_8);
#line 814
$memory_5 = string_utils::is_number($memory_7);
#line 814
undef($memory_7);
#line 814
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 814
if (c_rt_lib::check_true($memory_6)) {goto label_102;}
#line 814
$memory_8 = 2;
#line 814
$memory_7 = $memory_2->[$memory_8];
#line 814
undef($memory_8);
#line 814
$memory_5 = string_utils::is_number($memory_7);
#line 814
undef($memory_7);
#line 814
label_102:
#line 814
undef($memory_6);
#line 814
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 814
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 814
if (c_rt_lib::check_true($memory_5)) {goto label_112;}
#line 814
undef($memory_0);
#line 814
undef($memory_4);
#line 814
undef($memory_5);
#line 814
$_[1] = $memory_1;$_[2] = $memory_2;return $memory_3;
#line 814
goto label_112;
#line 814
label_112:
#line 814
undef($memory_5);
#line 815
$memory_7 = 1;
#line 815
$memory_5 = $memory_2->[$memory_7];
#line 815
undef($memory_7);
#line 815
$memory_7 = 0;
#line 815
$memory_5 = c_rt_lib::to_nl($memory_5 >= $memory_7);
#line 815
undef($memory_7);
#line 815
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 815
if (c_rt_lib::check_true($memory_6)) {goto label_132;}
#line 815
$memory_7 = 1;
#line 815
$memory_5 = $memory_2->[$memory_7];
#line 815
undef($memory_7);
#line 815
$memory_9 = 0;
#line 815
$memory_8 = $memory_2->[$memory_9];
#line 815
undef($memory_9);
#line 815
$memory_7 = array::len($memory_8);
#line 815
undef($memory_8);
#line 815
$memory_5 = c_rt_lib::to_nl($memory_5 < $memory_7);
#line 815
undef($memory_7);
#line 815
label_132:
#line 815
undef($memory_6);
#line 815
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 815
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 815
if (c_rt_lib::check_true($memory_5)) {goto label_142;}
#line 815
undef($memory_0);
#line 815
undef($memory_4);
#line 815
undef($memory_5);
#line 815
$_[1] = $memory_1;$_[2] = $memory_2;return $memory_3;
#line 815
goto label_142;
#line 815
label_142:
#line 815
undef($memory_5);
#line 816
$memory_6 = 2;
#line 816
$memory_5 = $memory_2->[$memory_6];
#line 816
undef($memory_6);
#line 816
$memory_6 = 0;
#line 816
$memory_5 = c_rt_lib::to_nl($memory_5 >= $memory_6);
#line 816
undef($memory_6);
#line 816
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 816
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 816
if (c_rt_lib::check_true($memory_5)) {goto label_158;}
#line 816
undef($memory_0);
#line 816
undef($memory_4);
#line 816
undef($memory_5);
#line 816
$_[1] = $memory_1;$_[2] = $memory_2;return $memory_3;
#line 816
goto label_158;
#line 816
label_158:
#line 816
undef($memory_5);
#line 817
$memory_7 = 1;
#line 817
$memory_5 = $memory_2->[$memory_7];
#line 817
undef($memory_7);
#line 817
$memory_8 = 2;
#line 817
$memory_7 = $memory_2->[$memory_8];
#line 817
undef($memory_8);
#line 817
$memory_5 = $memory_5 + $memory_7;
#line 817
undef($memory_7);
#line 817
$memory_7 = 0;
#line 817
$memory_5 = c_rt_lib::to_nl($memory_5 >= $memory_7);
#line 817
undef($memory_7);
#line 817
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 817
if (c_rt_lib::check_true($memory_6)) {goto label_191;}
#line 817
$memory_7 = 1;
#line 817
$memory_5 = $memory_2->[$memory_7];
#line 817
undef($memory_7);
#line 817
$memory_8 = 2;
#line 817
$memory_7 = $memory_2->[$memory_8];
#line 817
undef($memory_8);
#line 817
$memory_5 = $memory_5 + $memory_7;
#line 817
undef($memory_7);
#line 817
$memory_7 = 1;
#line 817
$memory_5 = $memory_5 - $memory_7;
#line 817
undef($memory_7);
#line 817
$memory_9 = 0;
#line 817
$memory_8 = $memory_2->[$memory_9];
#line 817
undef($memory_9);
#line 817
$memory_7 = array::len($memory_8);
#line 817
undef($memory_8);
#line 817
$memory_5 = c_rt_lib::to_nl($memory_5 < $memory_7);
#line 817
undef($memory_7);
#line 817
label_191:
#line 817
undef($memory_6);
#line 817
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 817
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 817
if (c_rt_lib::check_true($memory_5)) {goto label_201;}
#line 817
undef($memory_0);
#line 817
undef($memory_4);
#line 817
undef($memory_5);
#line 817
$_[1] = $memory_1;$_[2] = $memory_2;return $memory_3;
#line 817
goto label_201;
#line 817
label_201:
#line 817
undef($memory_5);
#line 818
$memory_7 = 0;
#line 818
$memory_6 = $memory_2->[$memory_7];
#line 818
undef($memory_7);
#line 818
$memory_8 = 1;
#line 818
$memory_7 = $memory_2->[$memory_8];
#line 818
undef($memory_8);
#line 818
$memory_9 = 2;
#line 818
$memory_8 = $memory_2->[$memory_9];
#line 818
undef($memory_9);
#line 818
$memory_5 = array::subarray($memory_6, $memory_7, $memory_8);
#line 818
undef($memory_8);
#line 818
undef($memory_7);
#line 818
undef($memory_6);
#line 818
$memory_1 = $memory_5;
#line 818
undef($memory_5);
#line 819
goto label_312;
#line 819
label_219:
#line 819
$memory_4 = "array::append";
#line 819
$memory_4 = c_rt_lib::to_nl($memory_0 eq $memory_4);
#line 819
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 819
if (c_rt_lib::check_true($memory_4)) {goto label_250;}
#line 820
$memory_7 = 1;
#line 820
$memory_6 = $memory_2->[$memory_7];
#line 820
undef($memory_7);
#line 820
$memory_5 = nl::is_array($memory_6);
#line 820
undef($memory_6);
#line 820
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 820
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 820
if (c_rt_lib::check_true($memory_5)) {goto label_237;}
#line 820
undef($memory_0);
#line 820
undef($memory_4);
#line 820
undef($memory_5);
#line 820
$_[1] = $memory_1;$_[2] = $memory_2;return $memory_3;
#line 820
goto label_237;
#line 820
label_237:
#line 820
undef($memory_5);
#line 821
$memory_6 = 0;
#line 821
$memory_5 = c_rt_lib::get_ref_arr($memory_2, $memory_6);
#line 821
$memory_8 = 1;
#line 821
$memory_7 = $memory_2->[$memory_8];
#line 821
undef($memory_8);
#line 821
array::append($memory_5, $memory_7);
#line 821
undef($memory_7);
#line 821
c_rt_lib::set_ref_arr($memory_2, $memory_6, $memory_5);
#line 821
undef($memory_5);
#line 821
undef($memory_6);
#line 822
goto label_312;
#line 822
label_250:
#line 822
$memory_4 = "array::len";
#line 822
$memory_4 = c_rt_lib::to_nl($memory_0 eq $memory_4);
#line 822
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 822
if (c_rt_lib::check_true($memory_4)) {goto label_263;}
#line 823
$memory_7 = 0;
#line 823
$memory_6 = $memory_2->[$memory_7];
#line 823
undef($memory_7);
#line 823
$memory_5 = array::len($memory_6);
#line 823
undef($memory_6);
#line 823
$memory_1 = $memory_5;
#line 823
undef($memory_5);
#line 824
goto label_312;
#line 824
label_263:
#line 824
$memory_4 = "array::sort";
#line 824
$memory_4 = c_rt_lib::to_nl($memory_0 eq $memory_4);
#line 824
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 824
if (c_rt_lib::check_true($memory_4)) {goto label_307;}
#line 825
$memory_7 = ptd::sim();
#line 825
$memory_6 = ptd::arr($memory_7);
#line 825
undef($memory_7);
#line 825
$memory_8 = 0;
#line 825
$memory_7 = $memory_2->[$memory_8];
#line 825
undef($memory_8);
#line 825
$memory_5 = ptd::try_dynamic_cast($memory_6, $memory_7);
#line 825
undef($memory_7);
#line 825
undef($memory_6);
#line 825
$memory_6 = c_rt_lib::ov_is($memory_5, 'ok');
#line 825
if (c_rt_lib::check_true($memory_6)) {goto label_284;}
#line 826
$memory_6 = c_rt_lib::ov_is($memory_5, 'err');
#line 826
if (c_rt_lib::check_true($memory_6)) {goto label_288;}
#line 826
$memory_6 = "NOMATCHALERT";
#line 826
$memory_6 = [$memory_6,$memory_5];
#line 826
die(dfile::ssave($memory_6));
#line 825
label_284:
#line 825
$memory_7 = c_rt_lib::ov_as($memory_5, 'ok');
#line 825
undef($memory_7);
#line 826
goto label_302;
#line 826
label_288:
#line 826
$memory_7 = c_rt_lib::ov_as($memory_5, 'err');
#line 827
$memory_8 = "incorrect type";
#line 827
$memory_8 = c_rt_lib::ov_mk_arg('err', $memory_8);
#line 827
undef($memory_0);
#line 827
undef($memory_3);
#line 827
undef($memory_4);
#line 827
undef($memory_5);
#line 827
undef($memory_6);
#line 827
undef($memory_7);
#line 827
$_[1] = $memory_1;$_[2] = $memory_2;return $memory_8;
#line 827
undef($memory_8);
#line 827
undef($memory_7);
#line 828
goto label_302;
#line 828
label_302:
#line 828
undef($memory_5);
#line 828
undef($memory_6);
#line 829
array::sort($memory_1);
#line 830
goto label_312;
#line 830
label_307:
#line 831
$memory_5 = [];
#line 831
die(dfile::ssave($memory_5));
#line 831
undef($memory_5);
#line 832
goto label_312;
#line 832
label_312:
#line 832
undef($memory_4);
#line 833
$memory_4 = "";
#line 833
$memory_4 = c_rt_lib::ov_mk_arg('ok', $memory_4);
#line 833
undef($memory_0);
#line 833
undef($memory_3);
#line 833
$_[1] = $memory_1;$_[2] = $memory_2;return $memory_4;
#line 833
undef($memory_4);
#line 833
undef($memory_3);
#line 833
undef($memory_0);
#line 833
$_[1] = $memory_1;$_[2] = $memory_2;return;
$_[1] = $memory_1;$_[2] = $memory_2;}

sub interpreter_priv::handle_hash_call($$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;$memory_0 = $_[0];$memory_1 = $_[1];Scalar::Util::weaken($_[1]) if ref($_[1]);$memory_2 = $_[2];Scalar::Util::weaken($_[2]) if ref($_[2]);
#line 840
$memory_3 = "incorrect command";
#line 840
$memory_3 = c_rt_lib::ov_mk_arg('err', $memory_3);
#line 841
$memory_6 = 0;
#line 841
$memory_5 = $memory_2->[$memory_6];
#line 841
undef($memory_6);
#line 841
$memory_4 = nl::is_hash($memory_5);
#line 841
undef($memory_5);
#line 841
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 841
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 841
if (c_rt_lib::check_true($memory_4)) {goto label_14;}
#line 841
undef($memory_0);
#line 841
undef($memory_4);
#line 841
$_[1] = $memory_1;$_[2] = $memory_2;return $memory_3;
#line 841
goto label_14;
#line 841
label_14:
#line 841
undef($memory_4);
#line 842
$memory_4 = "hash::get_value";
#line 842
$memory_4 = c_rt_lib::to_nl($memory_0 eq $memory_4);
#line 842
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 842
if (c_rt_lib::check_true($memory_4)) {goto label_66;}
#line 843
$memory_7 = 1;
#line 843
$memory_6 = $memory_2->[$memory_7];
#line 843
undef($memory_7);
#line 843
$memory_5 = nl::is_sim($memory_6);
#line 843
undef($memory_6);
#line 843
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 843
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 843
if (c_rt_lib::check_true($memory_5)) {goto label_33;}
#line 843
undef($memory_0);
#line 843
undef($memory_4);
#line 843
undef($memory_5);
#line 843
$_[1] = $memory_1;$_[2] = $memory_2;return $memory_3;
#line 843
goto label_33;
#line 843
label_33:
#line 843
undef($memory_5);
#line 844
$memory_7 = 0;
#line 844
$memory_6 = $memory_2->[$memory_7];
#line 844
undef($memory_7);
#line 844
$memory_8 = 1;
#line 844
$memory_7 = $memory_2->[$memory_8];
#line 844
undef($memory_8);
#line 844
$memory_5 = hash::has_key($memory_6, $memory_7);
#line 844
undef($memory_7);
#line 844
undef($memory_6);
#line 844
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 844
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 844
if (c_rt_lib::check_true($memory_5)) {goto label_52;}
#line 844
undef($memory_0);
#line 844
undef($memory_4);
#line 844
undef($memory_5);
#line 844
$_[1] = $memory_1;$_[2] = $memory_2;return $memory_3;
#line 844
goto label_52;
#line 844
label_52:
#line 844
undef($memory_5);
#line 845
$memory_7 = 0;
#line 845
$memory_6 = $memory_2->[$memory_7];
#line 845
undef($memory_7);
#line 845
$memory_8 = 1;
#line 845
$memory_7 = $memory_2->[$memory_8];
#line 845
undef($memory_8);
#line 845
$memory_5 = hash::get_value($memory_6, $memory_7);
#line 845
undef($memory_7);
#line 845
undef($memory_6);
#line 845
$memory_1 = $memory_5;
#line 845
undef($memory_5);
#line 846
goto label_195;
#line 846
label_66:
#line 846
$memory_4 = "hash::has_key";
#line 846
$memory_4 = c_rt_lib::to_nl($memory_0 eq $memory_4);
#line 846
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 846
if (c_rt_lib::check_true($memory_4)) {goto label_98;}
#line 847
$memory_7 = 1;
#line 847
$memory_6 = $memory_2->[$memory_7];
#line 847
undef($memory_7);
#line 847
$memory_5 = nl::is_sim($memory_6);
#line 847
undef($memory_6);
#line 847
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 847
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 847
if (c_rt_lib::check_true($memory_5)) {goto label_84;}
#line 847
undef($memory_0);
#line 847
undef($memory_4);
#line 847
undef($memory_5);
#line 847
$_[1] = $memory_1;$_[2] = $memory_2;return $memory_3;
#line 847
goto label_84;
#line 847
label_84:
#line 847
undef($memory_5);
#line 848
$memory_7 = 0;
#line 848
$memory_6 = $memory_2->[$memory_7];
#line 848
undef($memory_7);
#line 848
$memory_8 = 1;
#line 848
$memory_7 = $memory_2->[$memory_8];
#line 848
undef($memory_8);
#line 848
$memory_5 = hash::has_key($memory_6, $memory_7);
#line 848
undef($memory_7);
#line 848
undef($memory_6);
#line 848
$memory_1 = $memory_5;
#line 848
undef($memory_5);
#line 849
goto label_195;
#line 849
label_98:
#line 849
$memory_4 = "hash::set_value";
#line 849
$memory_4 = c_rt_lib::to_nl($memory_0 eq $memory_4);
#line 849
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 849
if (c_rt_lib::check_true($memory_4)) {goto label_133;}
#line 850
$memory_7 = 1;
#line 850
$memory_6 = $memory_2->[$memory_7];
#line 850
undef($memory_7);
#line 850
$memory_5 = nl::is_sim($memory_6);
#line 850
undef($memory_6);
#line 850
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 850
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 850
if (c_rt_lib::check_true($memory_5)) {goto label_116;}
#line 850
undef($memory_0);
#line 850
undef($memory_4);
#line 850
undef($memory_5);
#line 850
$_[1] = $memory_1;$_[2] = $memory_2;return $memory_3;
#line 850
goto label_116;
#line 850
label_116:
#line 850
undef($memory_5);
#line 851
$memory_6 = 0;
#line 851
$memory_5 = c_rt_lib::get_ref_arr($memory_2, $memory_6);
#line 851
$memory_8 = 1;
#line 851
$memory_7 = $memory_2->[$memory_8];
#line 851
undef($memory_8);
#line 851
$memory_9 = 2;
#line 851
$memory_8 = $memory_2->[$memory_9];
#line 851
undef($memory_9);
#line 851
hash::set_value($memory_5, $memory_7, $memory_8);
#line 851
undef($memory_8);
#line 851
undef($memory_7);
#line 851
c_rt_lib::set_ref_arr($memory_2, $memory_6, $memory_5);
#line 851
undef($memory_5);
#line 851
undef($memory_6);
#line 852
goto label_195;
#line 852
label_133:
#line 852
$memory_4 = "hash::delete";
#line 852
$memory_4 = c_rt_lib::to_nl($memory_0 eq $memory_4);
#line 852
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 852
if (c_rt_lib::check_true($memory_4)) {goto label_164;}
#line 853
$memory_7 = 1;
#line 853
$memory_6 = $memory_2->[$memory_7];
#line 853
undef($memory_7);
#line 853
$memory_5 = nl::is_sim($memory_6);
#line 853
undef($memory_6);
#line 853
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 853
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 853
if (c_rt_lib::check_true($memory_5)) {goto label_151;}
#line 853
undef($memory_0);
#line 853
undef($memory_4);
#line 853
undef($memory_5);
#line 853
$_[1] = $memory_1;$_[2] = $memory_2;return $memory_3;
#line 853
goto label_151;
#line 853
label_151:
#line 853
undef($memory_5);
#line 854
$memory_6 = 0;
#line 854
$memory_5 = c_rt_lib::get_ref_arr($memory_2, $memory_6);
#line 854
$memory_8 = 1;
#line 854
$memory_7 = $memory_2->[$memory_8];
#line 854
undef($memory_8);
#line 854
hash::delete($memory_5, $memory_7);
#line 854
undef($memory_7);
#line 854
c_rt_lib::set_ref_arr($memory_2, $memory_6, $memory_5);
#line 854
undef($memory_5);
#line 854
undef($memory_6);
#line 855
goto label_195;
#line 855
label_164:
#line 855
$memory_4 = "hash::size";
#line 855
$memory_4 = c_rt_lib::to_nl($memory_0 eq $memory_4);
#line 855
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 855
if (c_rt_lib::check_true($memory_4)) {goto label_177;}
#line 856
$memory_7 = 0;
#line 856
$memory_6 = $memory_2->[$memory_7];
#line 856
undef($memory_7);
#line 856
$memory_5 = hash::size($memory_6);
#line 856
undef($memory_6);
#line 856
$memory_1 = $memory_5;
#line 856
undef($memory_5);
#line 857
goto label_195;
#line 857
label_177:
#line 857
$memory_4 = "hash::keys";
#line 857
$memory_4 = c_rt_lib::to_nl($memory_0 eq $memory_4);
#line 857
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 857
if (c_rt_lib::check_true($memory_4)) {goto label_190;}
#line 858
$memory_7 = 0;
#line 858
$memory_6 = $memory_2->[$memory_7];
#line 858
undef($memory_7);
#line 858
$memory_5 = hash::keys($memory_6);
#line 858
undef($memory_6);
#line 858
$memory_1 = $memory_5;
#line 858
undef($memory_5);
#line 859
goto label_195;
#line 859
label_190:
#line 860
$memory_5 = [];
#line 860
die(dfile::ssave($memory_5));
#line 860
undef($memory_5);
#line 861
goto label_195;
#line 861
label_195:
#line 861
undef($memory_4);
#line 862
$memory_4 = "";
#line 862
$memory_4 = c_rt_lib::ov_mk_arg('ok', $memory_4);
#line 862
undef($memory_0);
#line 862
undef($memory_3);
#line 862
$_[1] = $memory_1;$_[2] = $memory_2;return $memory_4;
#line 862
undef($memory_4);
#line 862
undef($memory_3);
#line 862
undef($memory_0);
#line 862
$_[1] = $memory_1;$_[2] = $memory_2;return;
$_[1] = $memory_1;$_[2] = $memory_2;}

sub interpreter_priv::handle_string_call($$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;$memory_0 = $_[0];$memory_1 = $_[1];Scalar::Util::weaken($_[1]) if ref($_[1]);$memory_2 = $_[2];Scalar::Util::weaken($_[2]) if ref($_[2]);
#line 869
$memory_3 = "incorrect command";
#line 869
$memory_3 = c_rt_lib::ov_mk_arg('err', $memory_3);
#line 870
$memory_4 = "string::lf";
#line 870
$memory_4 = c_rt_lib::to_nl($memory_0 eq $memory_4);
#line 870
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 870
if (c_rt_lib::check_true($memory_4)) {goto label_10;}
#line 871
$memory_5 = string::lf();
#line 871
$memory_1 = $memory_5;
#line 871
undef($memory_5);
#line 872
goto label_371;
#line 872
label_10:
#line 872
$memory_4 = "string::tab";
#line 872
$memory_4 = c_rt_lib::to_nl($memory_0 eq $memory_4);
#line 872
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 872
if (c_rt_lib::check_true($memory_4)) {goto label_19;}
#line 873
$memory_5 = string::tab();
#line 873
$memory_1 = $memory_5;
#line 873
undef($memory_5);
#line 874
goto label_371;
#line 874
label_19:
#line 874
$memory_4 = "string::ord";
#line 874
$memory_4 = c_rt_lib::to_nl($memory_0 eq $memory_4);
#line 874
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 874
if (c_rt_lib::check_true($memory_4)) {goto label_65;}
#line 875
$memory_7 = 0;
#line 875
$memory_6 = $memory_2->[$memory_7];
#line 875
undef($memory_7);
#line 875
$memory_5 = nl::is_sim($memory_6);
#line 875
undef($memory_6);
#line 875
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 875
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 875
if (c_rt_lib::check_true($memory_5)) {goto label_37;}
#line 875
undef($memory_0);
#line 875
undef($memory_4);
#line 875
undef($memory_5);
#line 875
$_[1] = $memory_1;$_[2] = $memory_2;return $memory_3;
#line 875
goto label_37;
#line 875
label_37:
#line 875
undef($memory_5);
#line 876
$memory_7 = 0;
#line 876
$memory_6 = $memory_2->[$memory_7];
#line 876
undef($memory_7);
#line 876
$memory_5 = string::length($memory_6);
#line 876
undef($memory_6);
#line 876
$memory_6 = 1;
#line 876
$memory_5 = c_rt_lib::to_nl($memory_5 == $memory_6);
#line 876
undef($memory_6);
#line 876
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 876
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 876
if (c_rt_lib::check_true($memory_5)) {goto label_55;}
#line 876
undef($memory_0);
#line 876
undef($memory_4);
#line 876
undef($memory_5);
#line 876
$_[1] = $memory_1;$_[2] = $memory_2;return $memory_3;
#line 876
goto label_55;
#line 876
label_55:
#line 876
undef($memory_5);
#line 877
$memory_7 = 0;
#line 877
$memory_6 = $memory_2->[$memory_7];
#line 877
undef($memory_7);
#line 877
$memory_5 = string::ord($memory_6);
#line 877
undef($memory_6);
#line 877
$memory_1 = $memory_5;
#line 877
undef($memory_5);
#line 878
goto label_371;
#line 878
label_65:
#line 878
$memory_4 = "string::chr";
#line 878
$memory_4 = c_rt_lib::to_nl($memory_0 eq $memory_4);
#line 878
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 878
if (c_rt_lib::check_true($memory_4)) {goto label_108;}
#line 879
$memory_7 = 0;
#line 879
$memory_6 = $memory_2->[$memory_7];
#line 879
undef($memory_7);
#line 879
$memory_5 = nl::is_sim($memory_6);
#line 879
undef($memory_6);
#line 879
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 879
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 879
if (c_rt_lib::check_true($memory_5)) {goto label_83;}
#line 879
undef($memory_0);
#line 879
undef($memory_4);
#line 879
undef($memory_5);
#line 879
$_[1] = $memory_1;$_[2] = $memory_2;return $memory_3;
#line 879
goto label_83;
#line 879
label_83:
#line 879
undef($memory_5);
#line 880
$memory_7 = 0;
#line 880
$memory_6 = $memory_2->[$memory_7];
#line 880
undef($memory_7);
#line 880
$memory_5 = string_utils::is_number($memory_6);
#line 880
undef($memory_6);
#line 880
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 880
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 880
if (c_rt_lib::check_true($memory_5)) {goto label_98;}
#line 880
undef($memory_0);
#line 880
undef($memory_4);
#line 880
undef($memory_5);
#line 880
$_[1] = $memory_1;$_[2] = $memory_2;return $memory_3;
#line 880
goto label_98;
#line 880
label_98:
#line 880
undef($memory_5);
#line 881
$memory_7 = 0;
#line 881
$memory_6 = $memory_2->[$memory_7];
#line 881
undef($memory_7);
#line 881
$memory_5 = string::chr($memory_6);
#line 881
undef($memory_6);
#line 881
$memory_1 = $memory_5;
#line 881
undef($memory_5);
#line 882
goto label_371;
#line 882
label_108:
#line 883
$memory_7 = 0;
#line 883
$memory_6 = $memory_2->[$memory_7];
#line 883
undef($memory_7);
#line 883
$memory_5 = nl::is_sim($memory_6);
#line 883
undef($memory_6);
#line 883
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 883
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 883
if (c_rt_lib::check_true($memory_5)) {goto label_122;}
#line 883
undef($memory_0);
#line 883
undef($memory_4);
#line 883
undef($memory_5);
#line 883
$_[1] = $memory_1;$_[2] = $memory_2;return $memory_3;
#line 883
goto label_122;
#line 883
label_122:
#line 883
undef($memory_5);
#line 884
$memory_5 = "string::length";
#line 884
$memory_5 = c_rt_lib::to_nl($memory_0 eq $memory_5);
#line 884
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 884
if (c_rt_lib::check_true($memory_5)) {goto label_136;}
#line 885
$memory_8 = 0;
#line 885
$memory_7 = $memory_2->[$memory_8];
#line 885
undef($memory_8);
#line 885
$memory_6 = string::length($memory_7);
#line 885
undef($memory_7);
#line 885
$memory_1 = $memory_6;
#line 885
undef($memory_6);
#line 886
goto label_368;
#line 886
label_136:
#line 886
$memory_5 = "string::substr";
#line 886
$memory_5 = c_rt_lib::to_nl($memory_0 eq $memory_5);
#line 886
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 886
if (c_rt_lib::check_true($memory_5)) {goto label_299;}
#line 887
$memory_9 = 1;
#line 887
$memory_8 = $memory_2->[$memory_9];
#line 887
undef($memory_9);
#line 887
$memory_6 = nl::is_sim($memory_8);
#line 887
undef($memory_8);
#line 887
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 887
if (c_rt_lib::check_true($memory_7)) {goto label_153;}
#line 887
$memory_9 = 2;
#line 887
$memory_8 = $memory_2->[$memory_9];
#line 887
undef($memory_9);
#line 887
$memory_6 = nl::is_sim($memory_8);
#line 887
undef($memory_8);
#line 887
label_153:
#line 887
undef($memory_7);
#line 887
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 887
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 887
if (c_rt_lib::check_true($memory_6)) {goto label_164;}
#line 887
undef($memory_0);
#line 887
undef($memory_4);
#line 887
undef($memory_5);
#line 887
undef($memory_6);
#line 887
$_[1] = $memory_1;$_[2] = $memory_2;return $memory_3;
#line 887
goto label_164;
#line 887
label_164:
#line 887
undef($memory_6);
#line 888
$memory_9 = 1;
#line 888
$memory_8 = $memory_2->[$memory_9];
#line 888
undef($memory_9);
#line 888
$memory_6 = string_utils::is_number($memory_8);
#line 888
undef($memory_8);
#line 888
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 888
if (c_rt_lib::check_true($memory_7)) {goto label_178;}
#line 888
$memory_9 = 2;
#line 888
$memory_8 = $memory_2->[$memory_9];
#line 888
undef($memory_9);
#line 888
$memory_6 = string_utils::is_number($memory_8);
#line 888
undef($memory_8);
#line 888
label_178:
#line 888
undef($memory_7);
#line 888
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 888
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 888
if (c_rt_lib::check_true($memory_6)) {goto label_189;}
#line 888
undef($memory_0);
#line 888
undef($memory_4);
#line 888
undef($memory_5);
#line 888
undef($memory_6);
#line 888
$_[1] = $memory_1;$_[2] = $memory_2;return $memory_3;
#line 888
goto label_189;
#line 888
label_189:
#line 888
undef($memory_6);
#line 889
$memory_8 = 1;
#line 889
$memory_6 = $memory_2->[$memory_8];
#line 889
undef($memory_8);
#line 889
$memory_8 = 0;
#line 889
$memory_6 = c_rt_lib::to_nl($memory_6 >= $memory_8);
#line 889
undef($memory_8);
#line 889
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 889
if (c_rt_lib::check_true($memory_7)) {goto label_209;}
#line 889
$memory_8 = 1;
#line 889
$memory_6 = $memory_2->[$memory_8];
#line 889
undef($memory_8);
#line 889
$memory_10 = 0;
#line 889
$memory_9 = $memory_2->[$memory_10];
#line 889
undef($memory_10);
#line 889
$memory_8 = string::length($memory_9);
#line 889
undef($memory_9);
#line 889
$memory_6 = c_rt_lib::to_nl($memory_6 < $memory_8);
#line 889
undef($memory_8);
#line 889
label_209:
#line 889
undef($memory_7);
#line 889
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 889
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 889
if (c_rt_lib::check_true($memory_6)) {goto label_220;}
#line 889
undef($memory_0);
#line 889
undef($memory_4);
#line 889
undef($memory_5);
#line 889
undef($memory_6);
#line 889
$_[1] = $memory_1;$_[2] = $memory_2;return $memory_3;
#line 889
goto label_220;
#line 889
label_220:
#line 889
undef($memory_6);
#line 890
$memory_7 = 2;
#line 890
$memory_6 = $memory_2->[$memory_7];
#line 890
undef($memory_7);
#line 890
$memory_7 = 0;
#line 890
$memory_6 = c_rt_lib::to_nl($memory_6 >= $memory_7);
#line 890
undef($memory_7);
#line 890
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 890
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 890
if (c_rt_lib::check_true($memory_6)) {goto label_237;}
#line 890
undef($memory_0);
#line 890
undef($memory_4);
#line 890
undef($memory_5);
#line 890
undef($memory_6);
#line 890
$_[1] = $memory_1;$_[2] = $memory_2;return $memory_3;
#line 890
goto label_237;
#line 890
label_237:
#line 890
undef($memory_6);
#line 891
$memory_8 = 1;
#line 891
$memory_6 = $memory_2->[$memory_8];
#line 891
undef($memory_8);
#line 891
$memory_9 = 2;
#line 891
$memory_8 = $memory_2->[$memory_9];
#line 891
undef($memory_9);
#line 891
$memory_6 = $memory_6 + $memory_8;
#line 891
undef($memory_8);
#line 891
$memory_8 = 0;
#line 891
$memory_6 = c_rt_lib::to_nl($memory_6 >= $memory_8);
#line 891
undef($memory_8);
#line 891
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 891
if (c_rt_lib::check_true($memory_7)) {goto label_270;}
#line 891
$memory_8 = 1;
#line 891
$memory_6 = $memory_2->[$memory_8];
#line 891
undef($memory_8);
#line 891
$memory_9 = 2;
#line 891
$memory_8 = $memory_2->[$memory_9];
#line 891
undef($memory_9);
#line 891
$memory_6 = $memory_6 + $memory_8;
#line 891
undef($memory_8);
#line 891
$memory_8 = 1;
#line 891
$memory_6 = $memory_6 - $memory_8;
#line 891
undef($memory_8);
#line 891
$memory_10 = 0;
#line 891
$memory_9 = $memory_2->[$memory_10];
#line 891
undef($memory_10);
#line 891
$memory_8 = string::length($memory_9);
#line 891
undef($memory_9);
#line 891
$memory_6 = c_rt_lib::to_nl($memory_6 < $memory_8);
#line 891
undef($memory_8);
#line 891
label_270:
#line 891
undef($memory_7);
#line 891
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 891
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 891
if (c_rt_lib::check_true($memory_6)) {goto label_281;}
#line 891
undef($memory_0);
#line 891
undef($memory_4);
#line 891
undef($memory_5);
#line 891
undef($memory_6);
#line 891
$_[1] = $memory_1;$_[2] = $memory_2;return $memory_3;
#line 891
goto label_281;
#line 891
label_281:
#line 891
undef($memory_6);
#line 892
$memory_8 = 0;
#line 892
$memory_7 = $memory_2->[$memory_8];
#line 892
undef($memory_8);
#line 892
$memory_9 = 1;
#line 892
$memory_8 = $memory_2->[$memory_9];
#line 892
undef($memory_9);
#line 892
$memory_10 = 2;
#line 892
$memory_9 = $memory_2->[$memory_10];
#line 892
undef($memory_10);
#line 892
$memory_6 = string::substr($memory_7, $memory_8, $memory_9);
#line 892
undef($memory_9);
#line 892
undef($memory_8);
#line 892
undef($memory_7);
#line 892
$memory_1 = $memory_6;
#line 892
undef($memory_6);
#line 893
goto label_368;
#line 893
label_299:
#line 893
$memory_5 = "string::is_digit";
#line 893
$memory_5 = c_rt_lib::to_nl($memory_0 eq $memory_5);
#line 893
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 893
if (c_rt_lib::check_true($memory_5)) {goto label_331;}
#line 894
$memory_8 = 0;
#line 894
$memory_7 = $memory_2->[$memory_8];
#line 894
undef($memory_8);
#line 894
$memory_6 = string::length($memory_7);
#line 894
undef($memory_7);
#line 894
$memory_7 = 1;
#line 894
$memory_6 = c_rt_lib::to_nl($memory_6 == $memory_7);
#line 894
undef($memory_7);
#line 894
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 894
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 894
if (c_rt_lib::check_true($memory_6)) {goto label_321;}
#line 894
undef($memory_0);
#line 894
undef($memory_4);
#line 894
undef($memory_5);
#line 894
undef($memory_6);
#line 894
$_[1] = $memory_1;$_[2] = $memory_2;return $memory_3;
#line 894
goto label_321;
#line 894
label_321:
#line 894
undef($memory_6);
#line 895
$memory_8 = 0;
#line 895
$memory_7 = $memory_2->[$memory_8];
#line 895
undef($memory_8);
#line 895
$memory_6 = string::is_digit($memory_7);
#line 895
undef($memory_7);
#line 895
$memory_1 = $memory_6;
#line 895
undef($memory_6);
#line 896
goto label_368;
#line 896
label_331:
#line 896
$memory_5 = "string::is_letter";
#line 896
$memory_5 = c_rt_lib::to_nl($memory_0 eq $memory_5);
#line 896
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 896
if (c_rt_lib::check_true($memory_5)) {goto label_363;}
#line 897
$memory_8 = 0;
#line 897
$memory_7 = $memory_2->[$memory_8];
#line 897
undef($memory_8);
#line 897
$memory_6 = string::length($memory_7);
#line 897
undef($memory_7);
#line 897
$memory_7 = 1;
#line 897
$memory_6 = c_rt_lib::to_nl($memory_6 == $memory_7);
#line 897
undef($memory_7);
#line 897
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 897
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 897
if (c_rt_lib::check_true($memory_6)) {goto label_353;}
#line 897
undef($memory_0);
#line 897
undef($memory_4);
#line 897
undef($memory_5);
#line 897
undef($memory_6);
#line 897
$_[1] = $memory_1;$_[2] = $memory_2;return $memory_3;
#line 897
goto label_353;
#line 897
label_353:
#line 897
undef($memory_6);
#line 898
$memory_8 = 0;
#line 898
$memory_7 = $memory_2->[$memory_8];
#line 898
undef($memory_8);
#line 898
$memory_6 = string::is_letter($memory_7);
#line 898
undef($memory_7);
#line 898
$memory_1 = $memory_6;
#line 898
undef($memory_6);
#line 899
goto label_368;
#line 899
label_363:
#line 900
$memory_6 = [];
#line 900
die(dfile::ssave($memory_6));
#line 900
undef($memory_6);
#line 901
goto label_368;
#line 901
label_368:
#line 901
undef($memory_5);
#line 902
goto label_371;
#line 902
label_371:
#line 902
undef($memory_4);
#line 903
$memory_4 = "";
#line 903
$memory_4 = c_rt_lib::ov_mk_arg('ok', $memory_4);
#line 903
undef($memory_0);
#line 903
undef($memory_3);
#line 903
$_[1] = $memory_1;$_[2] = $memory_2;return $memory_4;
#line 903
undef($memory_4);
#line 903
undef($memory_3);
#line 903
undef($memory_0);
#line 903
$_[1] = $memory_1;$_[2] = $memory_2;return;
$_[1] = $memory_1;$_[2] = $memory_2;}

sub interpreter_priv::handle_ov_call($$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;$memory_0 = $_[0];$memory_1 = $_[1];Scalar::Util::weaken($_[1]) if ref($_[1]);$memory_2 = $_[2];Scalar::Util::weaken($_[2]) if ref($_[2]);
#line 910
$memory_3 = "incorrect command";
#line 910
$memory_3 = c_rt_lib::ov_mk_arg('err', $memory_3);
#line 911
$memory_4 = "ov::mk";
#line 911
$memory_4 = c_rt_lib::to_nl($memory_0 eq $memory_4);
#line 911
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 911
if (c_rt_lib::check_true($memory_4)) {goto label_29;}
#line 912
$memory_7 = 0;
#line 912
$memory_6 = $memory_2->[$memory_7];
#line 912
undef($memory_7);
#line 912
$memory_5 = nl::is_sim($memory_6);
#line 912
undef($memory_6);
#line 912
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 912
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 912
if (c_rt_lib::check_true($memory_5)) {goto label_19;}
#line 912
undef($memory_0);
#line 912
undef($memory_4);
#line 912
undef($memory_5);
#line 912
$_[1] = $memory_1;$_[2] = $memory_2;return $memory_3;
#line 912
goto label_19;
#line 912
label_19:
#line 912
undef($memory_5);
#line 913
$memory_7 = 0;
#line 913
$memory_6 = $memory_2->[$memory_7];
#line 913
undef($memory_7);
#line 913
$memory_5 = ov::mk($memory_6);
#line 913
undef($memory_6);
#line 913
$memory_1 = $memory_5;
#line 913
undef($memory_5);
#line 914
goto label_204;
#line 914
label_29:
#line 914
$memory_4 = "ov::mk_val";
#line 914
$memory_4 = c_rt_lib::to_nl($memory_0 eq $memory_4);
#line 914
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 914
if (c_rt_lib::check_true($memory_4)) {goto label_61;}
#line 915
$memory_7 = 0;
#line 915
$memory_6 = $memory_2->[$memory_7];
#line 915
undef($memory_7);
#line 915
$memory_5 = nl::is_sim($memory_6);
#line 915
undef($memory_6);
#line 915
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 915
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 915
if (c_rt_lib::check_true($memory_5)) {goto label_47;}
#line 915
undef($memory_0);
#line 915
undef($memory_4);
#line 915
undef($memory_5);
#line 915
$_[1] = $memory_1;$_[2] = $memory_2;return $memory_3;
#line 915
goto label_47;
#line 915
label_47:
#line 915
undef($memory_5);
#line 916
$memory_7 = 0;
#line 916
$memory_6 = $memory_2->[$memory_7];
#line 916
undef($memory_7);
#line 916
$memory_8 = 1;
#line 916
$memory_7 = $memory_2->[$memory_8];
#line 916
undef($memory_8);
#line 916
$memory_5 = ov::mk_val($memory_6, $memory_7);
#line 916
undef($memory_7);
#line 916
undef($memory_6);
#line 916
$memory_1 = $memory_5;
#line 916
undef($memory_5);
#line 917
goto label_204;
#line 917
label_61:
#line 918
$memory_7 = 0;
#line 918
$memory_6 = $memory_2->[$memory_7];
#line 918
undef($memory_7);
#line 918
$memory_5 = nl::is_variant($memory_6);
#line 918
undef($memory_6);
#line 918
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 918
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 918
if (c_rt_lib::check_true($memory_5)) {goto label_75;}
#line 918
undef($memory_0);
#line 918
undef($memory_4);
#line 918
undef($memory_5);
#line 918
$_[1] = $memory_1;$_[2] = $memory_2;return $memory_3;
#line 918
goto label_75;
#line 918
label_75:
#line 918
undef($memory_5);
#line 919
$memory_5 = "ov::has_value";
#line 919
$memory_5 = c_rt_lib::to_nl($memory_0 eq $memory_5);
#line 919
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 919
if (c_rt_lib::check_true($memory_5)) {goto label_89;}
#line 920
$memory_8 = 0;
#line 920
$memory_7 = $memory_2->[$memory_8];
#line 920
undef($memory_8);
#line 920
$memory_6 = ov::has_value($memory_7);
#line 920
undef($memory_7);
#line 920
$memory_1 = $memory_6;
#line 920
undef($memory_6);
#line 921
goto label_201;
#line 921
label_89:
#line 921
$memory_5 = "ov::get_element";
#line 921
$memory_5 = c_rt_lib::to_nl($memory_0 eq $memory_5);
#line 921
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 921
if (c_rt_lib::check_true($memory_5)) {goto label_102;}
#line 922
$memory_8 = 0;
#line 922
$memory_7 = $memory_2->[$memory_8];
#line 922
undef($memory_8);
#line 922
$memory_6 = ov::get_element($memory_7);
#line 922
undef($memory_7);
#line 922
$memory_1 = $memory_6;
#line 922
undef($memory_6);
#line 923
goto label_201;
#line 923
label_102:
#line 923
$memory_5 = "ov::get_value";
#line 923
$memory_5 = c_rt_lib::to_nl($memory_0 eq $memory_5);
#line 923
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 923
if (c_rt_lib::check_true($memory_5)) {goto label_115;}
#line 924
$memory_8 = 0;
#line 924
$memory_7 = $memory_2->[$memory_8];
#line 924
undef($memory_8);
#line 924
$memory_6 = ov::get_value($memory_7);
#line 924
undef($memory_7);
#line 924
$memory_1 = $memory_6;
#line 924
undef($memory_6);
#line 925
goto label_201;
#line 925
label_115:
#line 925
$memory_5 = "ov::is";
#line 925
$memory_5 = c_rt_lib::to_nl($memory_0 eq $memory_5);
#line 925
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 925
if (c_rt_lib::check_true($memory_5)) {goto label_148;}
#line 926
$memory_8 = 1;
#line 926
$memory_7 = $memory_2->[$memory_8];
#line 926
undef($memory_8);
#line 926
$memory_6 = nl::is_sim($memory_7);
#line 926
undef($memory_7);
#line 926
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 926
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 926
if (c_rt_lib::check_true($memory_6)) {goto label_134;}
#line 926
undef($memory_0);
#line 926
undef($memory_4);
#line 926
undef($memory_5);
#line 926
undef($memory_6);
#line 926
$_[1] = $memory_1;$_[2] = $memory_2;return $memory_3;
#line 926
goto label_134;
#line 926
label_134:
#line 926
undef($memory_6);
#line 927
$memory_8 = 0;
#line 927
$memory_7 = $memory_2->[$memory_8];
#line 927
undef($memory_8);
#line 927
$memory_9 = 1;
#line 927
$memory_8 = $memory_2->[$memory_9];
#line 927
undef($memory_9);
#line 927
$memory_6 = ov::is($memory_7, $memory_8);
#line 927
undef($memory_8);
#line 927
undef($memory_7);
#line 927
$memory_1 = $memory_6;
#line 927
undef($memory_6);
#line 928
goto label_201;
#line 928
label_148:
#line 928
$memory_5 = "ov::as";
#line 928
$memory_5 = c_rt_lib::to_nl($memory_0 eq $memory_5);
#line 928
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 928
if (c_rt_lib::check_true($memory_5)) {goto label_201;}
#line 929
$memory_8 = 1;
#line 929
$memory_7 = $memory_2->[$memory_8];
#line 929
undef($memory_8);
#line 929
$memory_6 = nl::is_sim($memory_7);
#line 929
undef($memory_7);
#line 929
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 929
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 929
if (c_rt_lib::check_true($memory_6)) {goto label_167;}
#line 929
undef($memory_0);
#line 929
undef($memory_4);
#line 929
undef($memory_5);
#line 929
undef($memory_6);
#line 929
$_[1] = $memory_1;$_[2] = $memory_2;return $memory_3;
#line 929
goto label_167;
#line 929
label_167:
#line 929
undef($memory_6);
#line 930
$memory_8 = 0;
#line 930
$memory_7 = $memory_2->[$memory_8];
#line 930
undef($memory_8);
#line 930
$memory_9 = 1;
#line 930
$memory_8 = $memory_2->[$memory_9];
#line 930
undef($memory_9);
#line 930
$memory_6 = ov::is($memory_7, $memory_8);
#line 930
undef($memory_8);
#line 930
undef($memory_7);
#line 930
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 930
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 930
if (c_rt_lib::check_true($memory_6)) {goto label_187;}
#line 930
undef($memory_0);
#line 930
undef($memory_4);
#line 930
undef($memory_5);
#line 930
undef($memory_6);
#line 930
$_[1] = $memory_1;$_[2] = $memory_2;return $memory_3;
#line 930
goto label_187;
#line 930
label_187:
#line 930
undef($memory_6);
#line 931
$memory_8 = 0;
#line 931
$memory_7 = $memory_2->[$memory_8];
#line 931
undef($memory_8);
#line 931
$memory_9 = 1;
#line 931
$memory_8 = $memory_2->[$memory_9];
#line 931
undef($memory_9);
#line 931
$memory_6 = ov::as($memory_7, $memory_8);
#line 931
undef($memory_8);
#line 931
undef($memory_7);
#line 931
$memory_1 = $memory_6;
#line 931
undef($memory_6);
#line 932
goto label_201;
#line 932
label_201:
#line 932
undef($memory_5);
#line 933
goto label_204;
#line 933
label_204:
#line 933
undef($memory_4);
#line 934
$memory_4 = "";
#line 934
$memory_4 = c_rt_lib::ov_mk_arg('ok', $memory_4);
#line 934
undef($memory_0);
#line 934
undef($memory_3);
#line 934
$_[1] = $memory_1;$_[2] = $memory_2;return $memory_4;
#line 934
undef($memory_4);
#line 934
undef($memory_3);
#line 934
undef($memory_0);
#line 934
$_[1] = $memory_1;$_[2] = $memory_2;return;
$_[1] = $memory_1;$_[2] = $memory_2;}

sub interpreter_priv::handle_ptd_call($$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;$memory_0 = $_[0];$memory_1 = $_[1];Scalar::Util::weaken($_[1]) if ref($_[1]);$memory_2 = $_[2];Scalar::Util::weaken($_[2]) if ref($_[2]);
#line 941
$memory_3 = "incorrect command";
#line 941
$memory_3 = c_rt_lib::ov_mk_arg('err', $memory_3);
#line 942
$memory_4 = "ptd::sim";
#line 942
$memory_4 = c_rt_lib::to_nl($memory_0 eq $memory_4);
#line 942
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 942
if (c_rt_lib::check_true($memory_4)) {goto label_10;}
#line 943
$memory_5 = ptd::sim();
#line 943
$memory_1 = $memory_5;
#line 943
undef($memory_5);
#line 944
goto label_180;
#line 944
label_10:
#line 944
$memory_4 = "ptd::none";
#line 944
$memory_4 = c_rt_lib::to_nl($memory_0 eq $memory_4);
#line 944
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 944
if (c_rt_lib::check_true($memory_4)) {goto label_19;}
#line 945
$memory_5 = ptd::none();
#line 945
$memory_1 = $memory_5;
#line 945
undef($memory_5);
#line 946
goto label_180;
#line 946
label_19:
#line 946
$memory_4 = "ptd::ptd_im";
#line 946
$memory_4 = c_rt_lib::to_nl($memory_0 eq $memory_4);
#line 946
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 946
if (c_rt_lib::check_true($memory_4)) {goto label_28;}
#line 947
$memory_5 = ptd::ptd_im();
#line 947
$memory_1 = $memory_5;
#line 947
undef($memory_5);
#line 948
goto label_180;
#line 948
label_28:
#line 948
$memory_4 = "ptd::arr";
#line 948
$memory_4 = c_rt_lib::to_nl($memory_0 eq $memory_4);
#line 948
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 948
if (c_rt_lib::check_true($memory_4)) {goto label_73;}
#line 949
$memory_6 = {
	module => "ptd",
	name => "meta_type",
};
#line 949
$memory_6 = c_rt_lib::ov_mk_arg('ref', $memory_6);
#line 949
$memory_8 = 0;
#line 949
$memory_7 = $memory_2->[$memory_8];
#line 949
undef($memory_8);
#line 949
$memory_5 = ptd::try_cast($memory_6, $memory_7);
#line 949
undef($memory_7);
#line 949
undef($memory_6);
#line 949
$memory_6 = c_rt_lib::ov_is($memory_5, 'ok');
#line 949
if (c_rt_lib::check_true($memory_6)) {goto label_48;}
#line 951
$memory_6 = c_rt_lib::ov_is($memory_5, 'err');
#line 951
if (c_rt_lib::check_true($memory_6)) {goto label_55;}
#line 951
$memory_6 = "NOMATCHALERT";
#line 951
$memory_6 = [$memory_6,$memory_5];
#line 951
die(dfile::ssave($memory_6));
#line 949
label_48:
#line 949
$memory_7 = c_rt_lib::ov_as($memory_5, 'ok');
#line 950
$memory_8 = ptd::arr($memory_7);
#line 950
$memory_1 = $memory_8;
#line 950
undef($memory_8);
#line 950
undef($memory_7);
#line 951
goto label_69;
#line 951
label_55:
#line 951
$memory_7 = c_rt_lib::ov_as($memory_5, 'err');
#line 952
$memory_8 = "incorrect type";
#line 952
$memory_8 = c_rt_lib::ov_mk_arg('err', $memory_8);
#line 952
undef($memory_0);
#line 952
undef($memory_3);
#line 952
undef($memory_4);
#line 952
undef($memory_5);
#line 952
undef($memory_6);
#line 952
undef($memory_7);
#line 952
$_[1] = $memory_1;$_[2] = $memory_2;return $memory_8;
#line 952
undef($memory_8);
#line 952
undef($memory_7);
#line 953
goto label_69;
#line 953
label_69:
#line 953
undef($memory_5);
#line 953
undef($memory_6);
#line 954
goto label_180;
#line 954
label_73:
#line 954
$memory_4 = "ptd::hash";
#line 954
$memory_4 = c_rt_lib::to_nl($memory_0 eq $memory_4);
#line 954
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 954
if (c_rt_lib::check_true($memory_4)) {goto label_118;}
#line 955
$memory_6 = {
	module => "ptd",
	name => "meta_type",
};
#line 955
$memory_6 = c_rt_lib::ov_mk_arg('ref', $memory_6);
#line 955
$memory_8 = 0;
#line 955
$memory_7 = $memory_2->[$memory_8];
#line 955
undef($memory_8);
#line 955
$memory_5 = ptd::try_cast($memory_6, $memory_7);
#line 955
undef($memory_7);
#line 955
undef($memory_6);
#line 955
$memory_6 = c_rt_lib::ov_is($memory_5, 'ok');
#line 955
if (c_rt_lib::check_true($memory_6)) {goto label_93;}
#line 957
$memory_6 = c_rt_lib::ov_is($memory_5, 'err');
#line 957
if (c_rt_lib::check_true($memory_6)) {goto label_100;}
#line 957
$memory_6 = "NOMATCHALERT";
#line 957
$memory_6 = [$memory_6,$memory_5];
#line 957
die(dfile::ssave($memory_6));
#line 955
label_93:
#line 955
$memory_7 = c_rt_lib::ov_as($memory_5, 'ok');
#line 956
$memory_8 = ptd::hash($memory_7);
#line 956
$memory_1 = $memory_8;
#line 956
undef($memory_8);
#line 956
undef($memory_7);
#line 957
goto label_114;
#line 957
label_100:
#line 957
$memory_7 = c_rt_lib::ov_as($memory_5, 'err');
#line 958
$memory_8 = "incorrect type";
#line 958
$memory_8 = c_rt_lib::ov_mk_arg('err', $memory_8);
#line 958
undef($memory_0);
#line 958
undef($memory_3);
#line 958
undef($memory_4);
#line 958
undef($memory_5);
#line 958
undef($memory_6);
#line 958
undef($memory_7);
#line 958
$_[1] = $memory_1;$_[2] = $memory_2;return $memory_8;
#line 958
undef($memory_8);
#line 958
undef($memory_7);
#line 959
goto label_114;
#line 959
label_114:
#line 959
undef($memory_5);
#line 959
undef($memory_6);
#line 960
goto label_180;
#line 960
label_118:
#line 960
$memory_4 = "ptd::var";
#line 960
$memory_4 = c_rt_lib::to_nl($memory_0 eq $memory_4);
#line 960
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 960
if (c_rt_lib::check_true($memory_4)) {goto label_131;}
#line 961
$memory_7 = 0;
#line 961
$memory_6 = $memory_2->[$memory_7];
#line 961
undef($memory_7);
#line 961
$memory_5 = ptd::var($memory_6);
#line 961
undef($memory_6);
#line 961
$memory_1 = $memory_5;
#line 961
undef($memory_5);
#line 962
goto label_180;
#line 962
label_131:
#line 962
$memory_4 = "ptd::ensure";
#line 962
$memory_4 = c_rt_lib::to_nl($memory_0 eq $memory_4);
#line 962
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 962
if (c_rt_lib::check_true($memory_4)) {goto label_175;}
#line 963
$memory_7 = 0;
#line 963
$memory_6 = $memory_2->[$memory_7];
#line 963
undef($memory_7);
#line 963
$memory_8 = 1;
#line 963
$memory_7 = $memory_2->[$memory_8];
#line 963
undef($memory_8);
#line 963
$memory_5 = ptd::try_dynamic_cast($memory_6, $memory_7);
#line 963
undef($memory_7);
#line 963
undef($memory_6);
#line 963
$memory_6 = c_rt_lib::ov_is($memory_5, 'ok');
#line 963
if (c_rt_lib::check_true($memory_6)) {goto label_152;}
#line 965
$memory_6 = c_rt_lib::ov_is($memory_5, 'err');
#line 965
if (c_rt_lib::check_true($memory_6)) {goto label_157;}
#line 965
$memory_6 = "NOMATCHALERT";
#line 965
$memory_6 = [$memory_6,$memory_5];
#line 965
die(dfile::ssave($memory_6));
#line 963
label_152:
#line 963
$memory_7 = c_rt_lib::ov_as($memory_5, 'ok');
#line 964
$memory_1 = $memory_7;
#line 964
undef($memory_7);
#line 965
goto label_171;
#line 965
label_157:
#line 965
$memory_7 = c_rt_lib::ov_as($memory_5, 'err');
#line 966
$memory_8 = "incorrect type";
#line 966
$memory_8 = c_rt_lib::ov_mk_arg('err', $memory_8);
#line 966
undef($memory_0);
#line 966
undef($memory_3);
#line 966
undef($memory_4);
#line 966
undef($memory_5);
#line 966
undef($memory_6);
#line 966
undef($memory_7);
#line 966
$_[1] = $memory_1;$_[2] = $memory_2;return $memory_8;
#line 966
undef($memory_8);
#line 966
undef($memory_7);
#line 967
goto label_171;
#line 967
label_171:
#line 967
undef($memory_5);
#line 967
undef($memory_6);
#line 968
goto label_180;
#line 968
label_175:
#line 969
undef($memory_0);
#line 969
undef($memory_4);
#line 969
$_[1] = $memory_1;$_[2] = $memory_2;return $memory_3;
#line 970
goto label_180;
#line 970
label_180:
#line 970
undef($memory_4);
#line 971
$memory_4 = "";
#line 971
$memory_4 = c_rt_lib::ov_mk_arg('ok', $memory_4);
#line 971
undef($memory_0);
#line 971
undef($memory_3);
#line 971
$_[1] = $memory_1;$_[2] = $memory_2;return $memory_4;
#line 971
undef($memory_4);
#line 971
undef($memory_3);
#line 971
undef($memory_0);
#line 971
$_[1] = $memory_1;$_[2] = $memory_2;return;
$_[1] = $memory_1;$_[2] = $memory_2;}

sub interpreter_priv::handle_c_rt_lib_call($$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;$memory_0 = $_[0];$memory_1 = $_[1];Scalar::Util::weaken($_[1]) if ref($_[1]);$memory_2 = $_[2];Scalar::Util::weaken($_[2]) if ref($_[2]);
#line 978
$memory_3 = "incorrect command";
#line 978
$memory_3 = c_rt_lib::ov_mk_arg('err', $memory_3);
#line 979
$memory_4 = "c_rt_lib::array_len";
#line 979
$memory_4 = c_rt_lib::to_nl($memory_0 eq $memory_4);
#line 979
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 979
if (c_rt_lib::check_true($memory_4)) {goto label_29;}
#line 980
$memory_7 = 0;
#line 980
$memory_6 = $memory_2->[$memory_7];
#line 980
undef($memory_7);
#line 980
$memory_5 = nl::is_array($memory_6);
#line 980
undef($memory_6);
#line 980
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 980
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 980
if (c_rt_lib::check_true($memory_5)) {goto label_19;}
#line 980
undef($memory_0);
#line 980
undef($memory_4);
#line 980
undef($memory_5);
#line 980
$_[1] = $memory_1;$_[2] = $memory_2;return $memory_3;
#line 980
goto label_19;
#line 980
label_19:
#line 980
undef($memory_5);
#line 981
$memory_7 = 0;
#line 981
$memory_6 = $memory_2->[$memory_7];
#line 981
undef($memory_7);
#line 981
$memory_5 = c_rt_lib::array_len($memory_6);
#line 981
undef($memory_6);
#line 981
$memory_1 = $memory_5;
#line 981
undef($memory_5);
#line 982
goto label_546;
#line 982
label_29:
#line 982
$memory_4 = "c_rt_lib::array_push";
#line 982
$memory_4 = c_rt_lib::to_nl($memory_0 eq $memory_4);
#line 982
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 982
if (c_rt_lib::check_true($memory_4)) {goto label_60;}
#line 983
$memory_7 = 0;
#line 983
$memory_6 = $memory_2->[$memory_7];
#line 983
undef($memory_7);
#line 983
$memory_5 = nl::is_array($memory_6);
#line 983
undef($memory_6);
#line 983
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 983
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 983
if (c_rt_lib::check_true($memory_5)) {goto label_47;}
#line 983
undef($memory_0);
#line 983
undef($memory_4);
#line 983
undef($memory_5);
#line 983
$_[1] = $memory_1;$_[2] = $memory_2;return $memory_3;
#line 983
goto label_47;
#line 983
label_47:
#line 983
undef($memory_5);
#line 984
$memory_6 = 0;
#line 984
$memory_5 = c_rt_lib::get_ref_arr($memory_2, $memory_6);
#line 984
$memory_8 = 1;
#line 984
$memory_7 = $memory_2->[$memory_8];
#line 984
undef($memory_8);
#line 984
array::push($memory_5, $memory_7);
#line 984
undef($memory_7);
#line 984
c_rt_lib::set_ref_arr($memory_2, $memory_6, $memory_5);
#line 984
undef($memory_5);
#line 984
undef($memory_6);
#line 985
goto label_546;
#line 985
label_60:
#line 985
$memory_4 = "c_rt_lib::set_ref_arr";
#line 985
$memory_4 = c_rt_lib::to_nl($memory_0 eq $memory_4);
#line 985
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 985
if (c_rt_lib::check_true($memory_4)) {goto label_155;}
#line 986
$memory_7 = 0;
#line 986
$memory_6 = $memory_2->[$memory_7];
#line 986
undef($memory_7);
#line 986
$memory_5 = nl::is_array($memory_6);
#line 986
undef($memory_6);
#line 986
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 986
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 986
if (c_rt_lib::check_true($memory_5)) {goto label_78;}
#line 986
undef($memory_0);
#line 986
undef($memory_4);
#line 986
undef($memory_5);
#line 986
$_[1] = $memory_1;$_[2] = $memory_2;return $memory_3;
#line 986
goto label_78;
#line 986
label_78:
#line 986
undef($memory_5);
#line 987
$memory_7 = 1;
#line 987
$memory_6 = $memory_2->[$memory_7];
#line 987
undef($memory_7);
#line 987
$memory_5 = nl::is_sim($memory_6);
#line 987
undef($memory_6);
#line 987
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 987
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 987
if (c_rt_lib::check_true($memory_5)) {goto label_93;}
#line 987
undef($memory_0);
#line 987
undef($memory_4);
#line 987
undef($memory_5);
#line 987
$_[1] = $memory_1;$_[2] = $memory_2;return $memory_3;
#line 987
goto label_93;
#line 987
label_93:
#line 987
undef($memory_5);
#line 988
$memory_7 = 1;
#line 988
$memory_6 = $memory_2->[$memory_7];
#line 988
undef($memory_7);
#line 988
$memory_5 = string_utils::is_number($memory_6);
#line 988
undef($memory_6);
#line 988
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 988
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 988
if (c_rt_lib::check_true($memory_5)) {goto label_108;}
#line 988
undef($memory_0);
#line 988
undef($memory_4);
#line 988
undef($memory_5);
#line 988
$_[1] = $memory_1;$_[2] = $memory_2;return $memory_3;
#line 988
goto label_108;
#line 988
label_108:
#line 988
undef($memory_5);
#line 989
$memory_7 = 1;
#line 989
$memory_5 = $memory_2->[$memory_7];
#line 989
undef($memory_7);
#line 989
$memory_7 = 0;
#line 989
$memory_5 = c_rt_lib::to_nl($memory_5 >= $memory_7);
#line 989
undef($memory_7);
#line 989
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 989
if (c_rt_lib::check_true($memory_6)) {goto label_128;}
#line 989
$memory_7 = 1;
#line 989
$memory_5 = $memory_2->[$memory_7];
#line 989
undef($memory_7);
#line 989
$memory_9 = 0;
#line 989
$memory_8 = $memory_2->[$memory_9];
#line 989
undef($memory_9);
#line 989
$memory_7 = array::len($memory_8);
#line 989
undef($memory_8);
#line 989
$memory_5 = c_rt_lib::to_nl($memory_5 < $memory_7);
#line 989
undef($memory_7);
#line 989
label_128:
#line 989
undef($memory_6);
#line 989
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 989
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 989
if (c_rt_lib::check_true($memory_5)) {goto label_138;}
#line 989
undef($memory_0);
#line 989
undef($memory_4);
#line 989
undef($memory_5);
#line 989
$_[1] = $memory_1;$_[2] = $memory_2;return $memory_3;
#line 989
goto label_138;
#line 989
label_138:
#line 989
undef($memory_5);
#line 990
$memory_6 = 0;
#line 990
$memory_5 = c_rt_lib::get_ref_arr($memory_2, $memory_6);
#line 990
$memory_8 = 1;
#line 990
$memory_7 = $memory_2->[$memory_8];
#line 990
undef($memory_8);
#line 990
$memory_9 = 2;
#line 990
$memory_8 = $memory_2->[$memory_9];
#line 990
undef($memory_9);
#line 990
c_rt_lib::set_ref_arr($memory_5, $memory_7, $memory_8);
#line 990
undef($memory_8);
#line 990
undef($memory_7);
#line 990
c_rt_lib::set_ref_arr($memory_2, $memory_6, $memory_5);
#line 990
undef($memory_5);
#line 990
undef($memory_6);
#line 991
goto label_546;
#line 991
label_155:
#line 991
$memory_4 = "c_rt_lib::set_ref_hash";
#line 991
$memory_4 = c_rt_lib::to_nl($memory_0 eq $memory_4);
#line 991
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 991
if (c_rt_lib::check_true($memory_4)) {goto label_205;}
#line 992
$memory_7 = 0;
#line 992
$memory_6 = $memory_2->[$memory_7];
#line 992
undef($memory_7);
#line 992
$memory_5 = nl::is_hash($memory_6);
#line 992
undef($memory_6);
#line 992
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 992
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 992
if (c_rt_lib::check_true($memory_5)) {goto label_173;}
#line 992
undef($memory_0);
#line 992
undef($memory_4);
#line 992
undef($memory_5);
#line 992
$_[1] = $memory_1;$_[2] = $memory_2;return $memory_3;
#line 992
goto label_173;
#line 992
label_173:
#line 992
undef($memory_5);
#line 993
$memory_7 = 1;
#line 993
$memory_6 = $memory_2->[$memory_7];
#line 993
undef($memory_7);
#line 993
$memory_5 = nl::is_sim($memory_6);
#line 993
undef($memory_6);
#line 993
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 993
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 993
if (c_rt_lib::check_true($memory_5)) {goto label_188;}
#line 993
undef($memory_0);
#line 993
undef($memory_4);
#line 993
undef($memory_5);
#line 993
$_[1] = $memory_1;$_[2] = $memory_2;return $memory_3;
#line 993
goto label_188;
#line 993
label_188:
#line 993
undef($memory_5);
#line 994
$memory_6 = 0;
#line 994
$memory_5 = c_rt_lib::get_ref_arr($memory_2, $memory_6);
#line 994
$memory_8 = 1;
#line 994
$memory_7 = $memory_2->[$memory_8];
#line 994
undef($memory_8);
#line 994
$memory_9 = 2;
#line 994
$memory_8 = $memory_2->[$memory_9];
#line 994
undef($memory_9);
#line 994
c_rt_lib::set_ref_hash($memory_5, $memory_7, $memory_8);
#line 994
undef($memory_8);
#line 994
undef($memory_7);
#line 994
c_rt_lib::set_ref_arr($memory_2, $memory_6, $memory_5);
#line 994
undef($memory_5);
#line 994
undef($memory_6);
#line 995
goto label_546;
#line 995
label_205:
#line 995
$memory_4 = "c_rt_lib::get_ref_arr";
#line 995
$memory_4 = c_rt_lib::to_nl($memory_0 eq $memory_4);
#line 995
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 995
if (c_rt_lib::check_true($memory_4)) {goto label_297;}
#line 996
$memory_7 = 0;
#line 996
$memory_6 = $memory_2->[$memory_7];
#line 996
undef($memory_7);
#line 996
$memory_5 = nl::is_array($memory_6);
#line 996
undef($memory_6);
#line 996
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 996
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 996
if (c_rt_lib::check_true($memory_5)) {goto label_223;}
#line 996
undef($memory_0);
#line 996
undef($memory_4);
#line 996
undef($memory_5);
#line 996
$_[1] = $memory_1;$_[2] = $memory_2;return $memory_3;
#line 996
goto label_223;
#line 996
label_223:
#line 996
undef($memory_5);
#line 997
$memory_7 = 1;
#line 997
$memory_6 = $memory_2->[$memory_7];
#line 997
undef($memory_7);
#line 997
$memory_5 = nl::is_sim($memory_6);
#line 997
undef($memory_6);
#line 997
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 997
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 997
if (c_rt_lib::check_true($memory_5)) {goto label_238;}
#line 997
undef($memory_0);
#line 997
undef($memory_4);
#line 997
undef($memory_5);
#line 997
$_[1] = $memory_1;$_[2] = $memory_2;return $memory_3;
#line 997
goto label_238;
#line 997
label_238:
#line 997
undef($memory_5);
#line 998
$memory_7 = 1;
#line 998
$memory_6 = $memory_2->[$memory_7];
#line 998
undef($memory_7);
#line 998
$memory_5 = string_utils::is_number($memory_6);
#line 998
undef($memory_6);
#line 998
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 998
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 998
if (c_rt_lib::check_true($memory_5)) {goto label_253;}
#line 998
undef($memory_0);
#line 998
undef($memory_4);
#line 998
undef($memory_5);
#line 998
$_[1] = $memory_1;$_[2] = $memory_2;return $memory_3;
#line 998
goto label_253;
#line 998
label_253:
#line 998
undef($memory_5);
#line 999
$memory_7 = 1;
#line 999
$memory_5 = $memory_2->[$memory_7];
#line 999
undef($memory_7);
#line 999
$memory_7 = 0;
#line 999
$memory_5 = c_rt_lib::to_nl($memory_5 >= $memory_7);
#line 999
undef($memory_7);
#line 999
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 999
if (c_rt_lib::check_true($memory_6)) {goto label_273;}
#line 999
$memory_7 = 1;
#line 999
$memory_5 = $memory_2->[$memory_7];
#line 999
undef($memory_7);
#line 999
$memory_9 = 0;
#line 999
$memory_8 = $memory_2->[$memory_9];
#line 999
undef($memory_9);
#line 999
$memory_7 = array::len($memory_8);
#line 999
undef($memory_8);
#line 999
$memory_5 = c_rt_lib::to_nl($memory_5 < $memory_7);
#line 999
undef($memory_7);
#line 999
label_273:
#line 999
undef($memory_6);
#line 999
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 999
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 999
if (c_rt_lib::check_true($memory_5)) {goto label_283;}
#line 999
undef($memory_0);
#line 999
undef($memory_4);
#line 999
undef($memory_5);
#line 999
$_[1] = $memory_1;$_[2] = $memory_2;return $memory_3;
#line 999
goto label_283;
#line 999
label_283:
#line 999
undef($memory_5);
#line 1000
$memory_7 = 0;
#line 1000
$memory_6 = $memory_2->[$memory_7];
#line 1000
undef($memory_7);
#line 1000
$memory_8 = 1;
#line 1000
$memory_7 = $memory_2->[$memory_8];
#line 1000
undef($memory_8);
#line 1000
$memory_5 = c_rt_lib::get_ref_arr($memory_6, $memory_7);
#line 1000
undef($memory_7);
#line 1000
undef($memory_6);
#line 1000
$memory_1 = $memory_5;
#line 1000
undef($memory_5);
#line 1001
goto label_546;
#line 1001
label_297:
#line 1001
$memory_4 = "c_rt_lib::get_ref_hash";
#line 1001
$memory_4 = c_rt_lib::to_nl($memory_0 eq $memory_4);
#line 1001
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 1001
if (c_rt_lib::check_true($memory_4)) {goto label_363;}
#line 1002
$memory_7 = 0;
#line 1002
$memory_6 = $memory_2->[$memory_7];
#line 1002
undef($memory_7);
#line 1002
$memory_5 = nl::is_hash($memory_6);
#line 1002
undef($memory_6);
#line 1002
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 1002
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 1002
if (c_rt_lib::check_true($memory_5)) {goto label_315;}
#line 1002
undef($memory_0);
#line 1002
undef($memory_4);
#line 1002
undef($memory_5);
#line 1002
$_[1] = $memory_1;$_[2] = $memory_2;return $memory_3;
#line 1002
goto label_315;
#line 1002
label_315:
#line 1002
undef($memory_5);
#line 1003
$memory_7 = 1;
#line 1003
$memory_6 = $memory_2->[$memory_7];
#line 1003
undef($memory_7);
#line 1003
$memory_5 = nl::is_sim($memory_6);
#line 1003
undef($memory_6);
#line 1003
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 1003
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 1003
if (c_rt_lib::check_true($memory_5)) {goto label_330;}
#line 1003
undef($memory_0);
#line 1003
undef($memory_4);
#line 1003
undef($memory_5);
#line 1003
$_[1] = $memory_1;$_[2] = $memory_2;return $memory_3;
#line 1003
goto label_330;
#line 1003
label_330:
#line 1003
undef($memory_5);
#line 1004
$memory_7 = 0;
#line 1004
$memory_6 = $memory_2->[$memory_7];
#line 1004
undef($memory_7);
#line 1004
$memory_8 = 1;
#line 1004
$memory_7 = $memory_2->[$memory_8];
#line 1004
undef($memory_8);
#line 1004
$memory_5 = hash::has_key($memory_6, $memory_7);
#line 1004
undef($memory_7);
#line 1004
undef($memory_6);
#line 1004
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 1004
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 1004
if (c_rt_lib::check_true($memory_5)) {goto label_349;}
#line 1004
undef($memory_0);
#line 1004
undef($memory_4);
#line 1004
undef($memory_5);
#line 1004
$_[1] = $memory_1;$_[2] = $memory_2;return $memory_3;
#line 1004
goto label_349;
#line 1004
label_349:
#line 1004
undef($memory_5);
#line 1005
$memory_7 = 0;
#line 1005
$memory_6 = $memory_2->[$memory_7];
#line 1005
undef($memory_7);
#line 1005
$memory_8 = 1;
#line 1005
$memory_7 = $memory_2->[$memory_8];
#line 1005
undef($memory_8);
#line 1005
$memory_5 = c_rt_lib::get_ref_hash($memory_6, $memory_7);
#line 1005
undef($memory_7);
#line 1005
undef($memory_6);
#line 1005
$memory_1 = $memory_5;
#line 1005
undef($memory_5);
#line 1006
goto label_546;
#line 1006
label_363:
#line 1006
$memory_4 = "c_rt_lib::init_iter";
#line 1006
$memory_4 = c_rt_lib::to_nl($memory_0 eq $memory_4);
#line 1006
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 1006
if (c_rt_lib::check_true($memory_4)) {goto label_391;}
#line 1007
$memory_7 = 0;
#line 1007
$memory_6 = $memory_2->[$memory_7];
#line 1007
undef($memory_7);
#line 1007
$memory_5 = nl::is_hash($memory_6);
#line 1007
undef($memory_6);
#line 1007
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 1007
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 1007
if (c_rt_lib::check_true($memory_5)) {goto label_381;}
#line 1007
undef($memory_0);
#line 1007
undef($memory_4);
#line 1007
undef($memory_5);
#line 1007
$_[1] = $memory_1;$_[2] = $memory_2;return $memory_3;
#line 1007
goto label_381;
#line 1007
label_381:
#line 1007
undef($memory_5);
#line 1008
$memory_7 = 0;
#line 1008
$memory_6 = $memory_2->[$memory_7];
#line 1008
undef($memory_7);
#line 1008
$memory_5 = c_rt_lib::init_iter($memory_6);
#line 1008
undef($memory_6);
#line 1008
$memory_1 = $memory_5;
#line 1008
undef($memory_5);
#line 1009
goto label_546;
#line 1009
label_391:
#line 1009
$memory_4 = "c_rt_lib::is_end_hash";
#line 1009
$memory_4 = c_rt_lib::to_nl($memory_0 eq $memory_4);
#line 1009
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 1009
if (c_rt_lib::check_true($memory_4)) {goto label_404;}
#line 1010
$memory_7 = 0;
#line 1010
$memory_6 = $memory_2->[$memory_7];
#line 1010
undef($memory_7);
#line 1010
$memory_5 = c_rt_lib::is_end_hash($memory_6);
#line 1010
undef($memory_6);
#line 1010
$memory_1 = $memory_5;
#line 1010
undef($memory_5);
#line 1011
goto label_546;
#line 1011
label_404:
#line 1011
$memory_4 = "c_rt_lib::get_key_iter";
#line 1011
$memory_4 = c_rt_lib::to_nl($memory_0 eq $memory_4);
#line 1011
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 1011
if (c_rt_lib::check_true($memory_4)) {goto label_417;}
#line 1012
$memory_7 = 0;
#line 1012
$memory_6 = $memory_2->[$memory_7];
#line 1012
undef($memory_7);
#line 1012
$memory_5 = c_rt_lib::get_key_iter($memory_6);
#line 1012
undef($memory_6);
#line 1012
$memory_1 = $memory_5;
#line 1012
undef($memory_5);
#line 1013
goto label_546;
#line 1013
label_417:
#line 1013
$memory_4 = "c_rt_lib::hash_get_value";
#line 1013
$memory_4 = c_rt_lib::to_nl($memory_0 eq $memory_4);
#line 1013
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 1013
if (c_rt_lib::check_true($memory_4)) {goto label_483;}
#line 1014
$memory_7 = 0;
#line 1014
$memory_6 = $memory_2->[$memory_7];
#line 1014
undef($memory_7);
#line 1014
$memory_5 = nl::is_hash($memory_6);
#line 1014
undef($memory_6);
#line 1014
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 1014
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 1014
if (c_rt_lib::check_true($memory_5)) {goto label_435;}
#line 1014
undef($memory_0);
#line 1014
undef($memory_4);
#line 1014
undef($memory_5);
#line 1014
$_[1] = $memory_1;$_[2] = $memory_2;return $memory_3;
#line 1014
goto label_435;
#line 1014
label_435:
#line 1014
undef($memory_5);
#line 1015
$memory_7 = 1;
#line 1015
$memory_6 = $memory_2->[$memory_7];
#line 1015
undef($memory_7);
#line 1015
$memory_5 = nl::is_sim($memory_6);
#line 1015
undef($memory_6);
#line 1015
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 1015
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 1015
if (c_rt_lib::check_true($memory_5)) {goto label_450;}
#line 1015
undef($memory_0);
#line 1015
undef($memory_4);
#line 1015
undef($memory_5);
#line 1015
$_[1] = $memory_1;$_[2] = $memory_2;return $memory_3;
#line 1015
goto label_450;
#line 1015
label_450:
#line 1015
undef($memory_5);
#line 1016
$memory_7 = 0;
#line 1016
$memory_6 = $memory_2->[$memory_7];
#line 1016
undef($memory_7);
#line 1016
$memory_8 = 1;
#line 1016
$memory_7 = $memory_2->[$memory_8];
#line 1016
undef($memory_8);
#line 1016
$memory_5 = hash::has_key($memory_6, $memory_7);
#line 1016
undef($memory_7);
#line 1016
undef($memory_6);
#line 1016
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 1016
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 1016
if (c_rt_lib::check_true($memory_5)) {goto label_469;}
#line 1016
undef($memory_0);
#line 1016
undef($memory_4);
#line 1016
undef($memory_5);
#line 1016
$_[1] = $memory_1;$_[2] = $memory_2;return $memory_3;
#line 1016
goto label_469;
#line 1016
label_469:
#line 1016
undef($memory_5);
#line 1017
$memory_7 = 0;
#line 1017
$memory_6 = $memory_2->[$memory_7];
#line 1017
undef($memory_7);
#line 1017
$memory_8 = 1;
#line 1017
$memory_7 = $memory_2->[$memory_8];
#line 1017
undef($memory_8);
#line 1017
$memory_5 = c_rt_lib::hash_get_value($memory_6, $memory_7);
#line 1017
undef($memory_7);
#line 1017
undef($memory_6);
#line 1017
$memory_1 = $memory_5;
#line 1017
undef($memory_5);
#line 1018
goto label_546;
#line 1018
label_483:
#line 1018
$memory_4 = "c_rt_lib::hash_set_value";
#line 1018
$memory_4 = c_rt_lib::to_nl($memory_0 eq $memory_4);
#line 1018
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 1018
if (c_rt_lib::check_true($memory_4)) {goto label_533;}
#line 1019
$memory_7 = 0;
#line 1019
$memory_6 = $memory_2->[$memory_7];
#line 1019
undef($memory_7);
#line 1019
$memory_5 = nl::is_hash($memory_6);
#line 1019
undef($memory_6);
#line 1019
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 1019
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 1019
if (c_rt_lib::check_true($memory_5)) {goto label_501;}
#line 1019
undef($memory_0);
#line 1019
undef($memory_4);
#line 1019
undef($memory_5);
#line 1019
$_[1] = $memory_1;$_[2] = $memory_2;return $memory_3;
#line 1019
goto label_501;
#line 1019
label_501:
#line 1019
undef($memory_5);
#line 1020
$memory_7 = 1;
#line 1020
$memory_6 = $memory_2->[$memory_7];
#line 1020
undef($memory_7);
#line 1020
$memory_5 = nl::is_sim($memory_6);
#line 1020
undef($memory_6);
#line 1020
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 1020
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 1020
if (c_rt_lib::check_true($memory_5)) {goto label_516;}
#line 1020
undef($memory_0);
#line 1020
undef($memory_4);
#line 1020
undef($memory_5);
#line 1020
$_[1] = $memory_1;$_[2] = $memory_2;return $memory_3;
#line 1020
goto label_516;
#line 1020
label_516:
#line 1020
undef($memory_5);
#line 1021
$memory_6 = 0;
#line 1021
$memory_5 = c_rt_lib::get_ref_arr($memory_2, $memory_6);
#line 1021
$memory_8 = 1;
#line 1021
$memory_7 = $memory_2->[$memory_8];
#line 1021
undef($memory_8);
#line 1021
$memory_9 = 2;
#line 1021
$memory_8 = $memory_2->[$memory_9];
#line 1021
undef($memory_9);
#line 1021
c_rt_lib::hash_set_value($memory_5, $memory_7, $memory_8);
#line 1021
undef($memory_8);
#line 1021
undef($memory_7);
#line 1021
c_rt_lib::set_ref_arr($memory_2, $memory_6, $memory_5);
#line 1021
undef($memory_5);
#line 1021
undef($memory_6);
#line 1022
goto label_546;
#line 1022
label_533:
#line 1022
$memory_4 = "c_rt_lib::next_iter";
#line 1022
$memory_4 = c_rt_lib::to_nl($memory_0 eq $memory_4);
#line 1022
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 1022
if (c_rt_lib::check_true($memory_4)) {goto label_546;}
#line 1023
$memory_7 = 0;
#line 1023
$memory_6 = $memory_2->[$memory_7];
#line 1023
undef($memory_7);
#line 1023
$memory_5 = c_rt_lib::next_iter($memory_6);
#line 1023
undef($memory_6);
#line 1023
$memory_1 = $memory_5;
#line 1023
undef($memory_5);
#line 1024
goto label_546;
#line 1024
label_546:
#line 1024
undef($memory_4);
#line 1025
$memory_4 = "";
#line 1025
$memory_4 = c_rt_lib::ov_mk_arg('ok', $memory_4);
#line 1025
undef($memory_0);
#line 1025
undef($memory_3);
#line 1025
$_[1] = $memory_1;$_[2] = $memory_2;return $memory_4;
#line 1025
undef($memory_4);
#line 1025
undef($memory_3);
#line 1025
undef($memory_0);
#line 1025
$_[1] = $memory_1;$_[2] = $memory_2;return;
$_[1] = $memory_1;$_[2] = $memory_2;}

sub interpreter_priv::handle_compiler_call($$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;my $memory_13;my $memory_14;my $memory_15;my $memory_16;my $memory_17;my $memory_18;$memory_0 = $_[0];$memory_1 = $_[1];$memory_2 = $_[2];Scalar::Util::weaken($_[2]) if ref($_[2]);
#line 1029
$memory_3 = [];
#line 1030
$memory_4 = $memory_0->{'args'};
#line 1030
$memory_6 = 0;
#line 1030
$memory_7 = 1;
#line 1030
$memory_8 = c_rt_lib::array_len($memory_4);
#line 1030
label_5:
#line 1030
$memory_9 = c_rt_lib::to_nl($memory_6 >= $memory_8);
#line 1030
if (c_rt_lib::check_true($memory_9)) {goto label_40;}
#line 1030
$memory_5 = $memory_4->[$memory_6];
#line 1032
$memory_11 = c_rt_lib::ov_is($memory_5, 'val');
#line 1032
if (c_rt_lib::check_true($memory_11)) {goto label_16;}
#line 1034
$memory_11 = c_rt_lib::ov_is($memory_5, 'ref');
#line 1034
if (c_rt_lib::check_true($memory_11)) {goto label_25;}
#line 1034
$memory_11 = "NOMATCHALERT";
#line 1034
$memory_11 = [$memory_11,$memory_5];
#line 1034
die(dfile::ssave($memory_11));
#line 1032
label_16:
#line 1032
$memory_12 = c_rt_lib::ov_as($memory_5, 'val');
#line 1033
$memory_13 = $memory_2->{'top'};
#line 1033
$memory_13 = $memory_13->{'vars'};
#line 1033
$memory_13 = $memory_13->[$memory_12];
#line 1033
$memory_10 = $memory_13;
#line 1033
undef($memory_13);
#line 1033
undef($memory_12);
#line 1034
goto label_34;
#line 1034
label_25:
#line 1034
$memory_12 = c_rt_lib::ov_as($memory_5, 'ref');
#line 1035
$memory_13 = $memory_2->{'top'};
#line 1035
$memory_13 = $memory_13->{'vars'};
#line 1035
$memory_13 = $memory_13->[$memory_12];
#line 1035
$memory_10 = $memory_13;
#line 1035
undef($memory_13);
#line 1035
undef($memory_12);
#line 1036
goto label_34;
#line 1036
label_34:
#line 1036
undef($memory_11);
#line 1037
array::push($memory_3, $memory_10);
#line 1037
undef($memory_10);
#line 1038
$memory_6 = $memory_6 + $memory_7;
#line 1038
goto label_5;
#line 1038
label_40:
#line 1038
undef($memory_4);
#line 1038
undef($memory_5);
#line 1038
undef($memory_6);
#line 1038
undef($memory_7);
#line 1038
undef($memory_8);
#line 1038
undef($memory_9);
#line 1039
$memory_4 = "";
#line 1041
$memory_6 = $memory_0->{'mod'};
#line 1041
$memory_7 = "array";
#line 1041
$memory_6 = c_rt_lib::to_nl($memory_6 eq $memory_7);
#line 1041
undef($memory_7);
#line 1041
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 1041
if (c_rt_lib::check_true($memory_6)) {goto label_58;}
#line 1042
$memory_7 = interpreter_priv::handle_array_call($memory_1, $memory_4, $memory_3);
#line 1042
$memory_5 = $memory_7;
#line 1042
undef($memory_7);
#line 1043
goto label_118;
#line 1043
label_58:
#line 1043
$memory_6 = $memory_0->{'mod'};
#line 1043
$memory_7 = "hash";
#line 1043
$memory_6 = c_rt_lib::to_nl($memory_6 eq $memory_7);
#line 1043
undef($memory_7);
#line 1043
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 1043
if (c_rt_lib::check_true($memory_6)) {goto label_69;}
#line 1044
$memory_7 = interpreter_priv::handle_hash_call($memory_1, $memory_4, $memory_3);
#line 1044
$memory_5 = $memory_7;
#line 1044
undef($memory_7);
#line 1045
goto label_118;
#line 1045
label_69:
#line 1045
$memory_6 = $memory_0->{'mod'};
#line 1045
$memory_7 = "string";
#line 1045
$memory_6 = c_rt_lib::to_nl($memory_6 eq $memory_7);
#line 1045
undef($memory_7);
#line 1045
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 1045
if (c_rt_lib::check_true($memory_6)) {goto label_80;}
#line 1046
$memory_7 = interpreter_priv::handle_string_call($memory_1, $memory_4, $memory_3);
#line 1046
$memory_5 = $memory_7;
#line 1046
undef($memory_7);
#line 1047
goto label_118;
#line 1047
label_80:
#line 1047
$memory_6 = $memory_0->{'mod'};
#line 1047
$memory_7 = "ov";
#line 1047
$memory_6 = c_rt_lib::to_nl($memory_6 eq $memory_7);
#line 1047
undef($memory_7);
#line 1047
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 1047
if (c_rt_lib::check_true($memory_6)) {goto label_91;}
#line 1048
$memory_7 = interpreter_priv::handle_ov_call($memory_1, $memory_4, $memory_3);
#line 1048
$memory_5 = $memory_7;
#line 1048
undef($memory_7);
#line 1049
goto label_118;
#line 1049
label_91:
#line 1049
$memory_6 = $memory_0->{'mod'};
#line 1049
$memory_7 = "c_rt_lib";
#line 1049
$memory_6 = c_rt_lib::to_nl($memory_6 eq $memory_7);
#line 1049
undef($memory_7);
#line 1049
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 1049
if (c_rt_lib::check_true($memory_6)) {goto label_102;}
#line 1050
$memory_7 = interpreter_priv::handle_c_rt_lib_call($memory_1, $memory_4, $memory_3);
#line 1050
$memory_5 = $memory_7;
#line 1050
undef($memory_7);
#line 1051
goto label_118;
#line 1051
label_102:
#line 1051
$memory_6 = $memory_0->{'mod'};
#line 1051
$memory_7 = "ptd";
#line 1051
$memory_6 = c_rt_lib::to_nl($memory_6 eq $memory_7);
#line 1051
undef($memory_7);
#line 1051
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 1051
if (c_rt_lib::check_true($memory_6)) {goto label_113;}
#line 1052
$memory_7 = interpreter_priv::handle_ptd_call($memory_1, $memory_4, $memory_3);
#line 1052
$memory_5 = $memory_7;
#line 1052
undef($memory_7);
#line 1053
goto label_118;
#line 1053
label_113:
#line 1054
$memory_7 = [];
#line 1054
die(dfile::ssave($memory_7));
#line 1054
undef($memory_7);
#line 1055
goto label_118;
#line 1055
label_118:
#line 1055
undef($memory_6);
#line 1056
$memory_6 = $memory_5;
#line 1056
$memory_6 = c_rt_lib::ov_is($memory_6, 'err');
#line 1056
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 1056
if (c_rt_lib::check_true($memory_6)) {goto label_136;}
#line 1057
$memory_7 = $memory_5;
#line 1057
$memory_7 = c_rt_lib::ov_as($memory_7, 'err');
#line 1057
$memory_8 = " for call function: ";
#line 1057
$memory_7 = $memory_7 . $memory_8;
#line 1057
undef($memory_8);
#line 1057
$memory_7 = $memory_7 . $memory_1;
#line 1057
$memory_7 = c_rt_lib::ov_mk_arg('error', $memory_7);
#line 1057
$memory_8 = $memory_7;
#line 1057
 if (c_rt_lib::get_hashcount($memory_2) > 1) {$memory_2 = {%{$memory_2}};}$memory_2->{'rstate'} = $memory_8;
#line 1057
undef($memory_7);
#line 1057
undef($memory_8);
#line 1058
goto label_215;
#line 1058
label_136:
#line 1059
$memory_8 = $memory_0->{'args'};
#line 1059
$memory_7 = array::len($memory_8);
#line 1059
undef($memory_8);
#line 1059
$memory_8 = 0;
#line 1059
$memory_9 = 1;
#line 1059
label_142:
#line 1059
$memory_10 = c_rt_lib::to_nl($memory_8 >= $memory_7);
#line 1059
if (c_rt_lib::check_true($memory_10)) {goto label_183;}
#line 1060
$memory_11 = $memory_0->{'args'};
#line 1060
$memory_11 = $memory_11->[$memory_8];
#line 1061
$memory_12 = c_rt_lib::ov_is($memory_11, 'val');
#line 1061
if (c_rt_lib::check_true($memory_12)) {goto label_154;}
#line 1062
$memory_12 = c_rt_lib::ov_is($memory_11, 'ref');
#line 1062
if (c_rt_lib::check_true($memory_12)) {goto label_158;}
#line 1062
$memory_12 = "NOMATCHALERT";
#line 1062
$memory_12 = [$memory_12,$memory_11];
#line 1062
die(dfile::ssave($memory_12));
#line 1061
label_154:
#line 1061
$memory_13 = c_rt_lib::ov_as($memory_11, 'val');
#line 1061
undef($memory_13);
#line 1062
goto label_178;
#line 1062
label_158:
#line 1062
$memory_13 = c_rt_lib::ov_as($memory_11, 'ref');
#line 1063
$memory_14 = $memory_3->[$memory_8];
#line 1063
$memory_15 = "top";
#line 1063
$memory_15 = c_rt_lib::get_ref_hash($memory_2, $memory_15);
#line 1063
$memory_16 = "vars";
#line 1063
$memory_16 = c_rt_lib::get_ref_hash($memory_15, $memory_16);
#line 1063
$memory_17 = $memory_14;
#line 1063
 if (c_rt_lib::get_arrcount($memory_16) > 1) {$memory_16 = [@{$memory_16}];}$memory_16->[$memory_13] = $memory_17;
#line 1063
$memory_18 = "vars";
#line 1063
c_rt_lib::set_ref_hash($memory_15, $memory_18, $memory_16);
#line 1063
$memory_18 = "top";
#line 1063
c_rt_lib::set_ref_hash($memory_2, $memory_18, $memory_15);
#line 1063
undef($memory_18);
#line 1063
undef($memory_14);
#line 1063
undef($memory_15);
#line 1063
undef($memory_16);
#line 1063
undef($memory_17);
#line 1063
undef($memory_13);
#line 1064
goto label_178;
#line 1064
label_178:
#line 1064
undef($memory_12);
#line 1064
undef($memory_11);
#line 1065
$memory_8 = $memory_8 + $memory_9;
#line 1065
goto label_142;
#line 1065
label_183:
#line 1065
undef($memory_7);
#line 1065
undef($memory_8);
#line 1065
undef($memory_9);
#line 1065
undef($memory_10);
#line 1066
$memory_7 = $memory_0->{'dest'};
#line 1066
$memory_8 = "";
#line 1066
$memory_7 = c_rt_lib::to_nl($memory_7 eq $memory_8);
#line 1066
undef($memory_8);
#line 1066
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 1066
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 1066
if (c_rt_lib::check_true($memory_7)) {goto label_212;}
#line 1066
$memory_8 = "top";
#line 1066
$memory_8 = c_rt_lib::get_ref_hash($memory_2, $memory_8);
#line 1066
$memory_9 = "vars";
#line 1066
$memory_9 = c_rt_lib::get_ref_hash($memory_8, $memory_9);
#line 1066
$memory_11 = $memory_0->{'dest'};
#line 1066
$memory_10 = $memory_4;
#line 1066
 if (c_rt_lib::get_arrcount($memory_9) > 1) {$memory_9 = [@{$memory_9}];}$memory_9->[$memory_11] = $memory_10;
#line 1066
$memory_12 = "vars";
#line 1066
c_rt_lib::set_ref_hash($memory_8, $memory_12, $memory_9);
#line 1066
$memory_12 = "top";
#line 1066
c_rt_lib::set_ref_hash($memory_2, $memory_12, $memory_8);
#line 1066
undef($memory_12);
#line 1066
undef($memory_8);
#line 1066
undef($memory_9);
#line 1066
undef($memory_10);
#line 1066
undef($memory_11);
#line 1066
goto label_212;
#line 1066
label_212:
#line 1066
undef($memory_7);
#line 1067
goto label_215;
#line 1067
label_215:
#line 1067
undef($memory_6);
#line 1067
undef($memory_3);
#line 1067
undef($memory_4);
#line 1067
undef($memory_5);
#line 1067
undef($memory_0);
#line 1067
undef($memory_1);
#line 1067
$_[2] = $memory_2;return;
$_[2] = $memory_2;}

sub interpreter_priv::handle_return($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;my $memory_13;my $memory_14;my $memory_15;$memory_0 = $_[0];$memory_1 = $_[1];Scalar::Util::weaken($_[1]) if ref($_[1]);
#line 1072
$memory_2 = interpreter::get_none_variant();
#line 1073
$memory_3 = c_rt_lib::ov_is($memory_0, 'val');
#line 1073
if (c_rt_lib::check_true($memory_3)) {goto label_8;}
#line 1075
$memory_3 = c_rt_lib::ov_is($memory_0, 'emp');
#line 1075
if (c_rt_lib::check_true($memory_3)) {goto label_17;}
#line 1075
$memory_3 = "NOMATCHALERT";
#line 1075
$memory_3 = [$memory_3,$memory_0];
#line 1075
die(dfile::ssave($memory_3));
#line 1073
label_8:
#line 1073
$memory_4 = c_rt_lib::ov_as($memory_0, 'val');
#line 1074
$memory_5 = $memory_1->{'top'};
#line 1074
$memory_5 = $memory_5->{'vars'};
#line 1074
$memory_5 = $memory_5->[$memory_4];
#line 1074
$memory_2 = $memory_5;
#line 1074
undef($memory_5);
#line 1074
undef($memory_4);
#line 1075
goto label_19;
#line 1075
label_17:
#line 1076
goto label_19;
#line 1076
label_19:
#line 1076
undef($memory_3);
#line 1077
$memory_3 = "profile";
#line 1077
$memory_3 = c_rt_lib::get_ref_hash($memory_1, $memory_3);
#line 1077
$memory_4 = $memory_1->{'top'};
#line 1077
$memory_4 = $memory_4->{'func_key'};
#line 1077
profile_inter::end($memory_3, $memory_4);
#line 1077
undef($memory_4);
#line 1077
$memory_4 = "profile";
#line 1077
c_rt_lib::set_ref_hash($memory_1, $memory_4, $memory_3);
#line 1077
undef($memory_4);
#line 1077
undef($memory_3);
#line 1078
$memory_4 = $memory_1->{'stack'};
#line 1078
$memory_3 = array::len($memory_4);
#line 1078
undef($memory_4);
#line 1078
$memory_4 = 0;
#line 1078
$memory_3 = c_rt_lib::to_nl($memory_3 == $memory_4);
#line 1078
undef($memory_4);
#line 1078
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 1078
if (c_rt_lib::check_true($memory_3)) {goto label_88;}
#line 1079
$memory_5 = $memory_1->{'func'};
#line 1079
$memory_5 = $memory_5->{'commands'};
#line 1079
$memory_4 = array::len($memory_5);
#line 1079
undef($memory_5);
#line 1079
$memory_5 = "top";
#line 1079
$memory_5 = c_rt_lib::get_ref_hash($memory_1, $memory_5);
#line 1079
$memory_6 = $memory_4;
#line 1079
 if (c_rt_lib::get_hashcount($memory_5) > 1) {$memory_5 = {%{$memory_5}};}$memory_5->{'next'} = $memory_6;
#line 1079
$memory_7 = "top";
#line 1079
c_rt_lib::set_ref_hash($memory_1, $memory_7, $memory_5);
#line 1079
undef($memory_7);
#line 1079
undef($memory_4);
#line 1079
undef($memory_5);
#line 1079
undef($memory_6);
#line 1080
$memory_4 = {};
#line 1081
$memory_5 = $memory_1->{'top'};
#line 1081
$memory_5 = $memory_5->{'ref_arguments'};
#line 1081
$memory_8 = c_rt_lib::init_iter($memory_5);
#line 1081
label_57:
#line 1081
$memory_6 = c_rt_lib::is_end_hash($memory_8);
#line 1081
if (c_rt_lib::check_true($memory_6)) {goto label_69;}
#line 1081
$memory_6 = c_rt_lib::get_key_iter($memory_8);
#line 1081
$memory_7 = c_rt_lib::hash_get_value($memory_5, $memory_6);
#line 1082
$memory_9 = $memory_1->{'top'};
#line 1082
$memory_9 = $memory_9->{'vars'};
#line 1082
$memory_9 = $memory_9->[$memory_6];
#line 1082
hash::set_value($memory_4, $memory_6, $memory_9);
#line 1082
undef($memory_9);
#line 1083
$memory_8 = c_rt_lib::next_iter($memory_8);
#line 1083
goto label_57;
#line 1083
label_69:
#line 1083
undef($memory_5);
#line 1083
undef($memory_6);
#line 1083
undef($memory_7);
#line 1083
undef($memory_8);
#line 1087
$memory_6 = $memory_1->{'func'};
#line 1087
$memory_6 = $memory_6->{'name'};
#line 1088
$memory_7 = $memory_1->{'top'};
#line 1088
$memory_7 = $memory_7->{'module_name'};
#line 1088
$memory_5 = {return => $memory_2,ref_args => $memory_4,func => $memory_6,module => $memory_7,};
#line 1088
undef($memory_6);
#line 1088
undef($memory_7);
#line 1088
$memory_5 = c_rt_lib::ov_mk_arg('finished', $memory_5);
#line 1088
$memory_6 = $memory_5;
#line 1088
 if (c_rt_lib::get_hashcount($memory_1) > 1) {$memory_1 = {%{$memory_1}};}$memory_1->{'rstate'} = $memory_6;
#line 1088
undef($memory_5);
#line 1088
undef($memory_6);
#line 1088
undef($memory_4);
#line 1090
goto label_179;
#line 1090
label_88:
#line 1091
$memory_4 = $memory_1->{'top'};
#line 1091
$memory_4 = $memory_4->{'ref_arguments'};
#line 1092
$memory_5 = $memory_1->{'top'};
#line 1092
$memory_5 = $memory_5->{'vars'};
#line 1093
$memory_6 = $memory_1->{'top'};
#line 1093
$memory_6 = $memory_6->{'ret'};
#line 1094
$memory_7 = $memory_1->{'stack'};
#line 1094
$memory_9 = $memory_1->{'stack'};
#line 1094
$memory_8 = array::len($memory_9);
#line 1094
undef($memory_9);
#line 1094
$memory_9 = 1;
#line 1094
$memory_8 = $memory_8 - $memory_9;
#line 1094
undef($memory_9);
#line 1094
$memory_7 = $memory_7->[$memory_8];
#line 1094
undef($memory_8);
#line 1095
$memory_8 = "stack";
#line 1095
$memory_8 = c_rt_lib::get_ref_hash($memory_1, $memory_8);
#line 1095
array::pop($memory_8);
#line 1095
$memory_9 = "stack";
#line 1095
c_rt_lib::set_ref_hash($memory_1, $memory_9, $memory_8);
#line 1095
undef($memory_9);
#line 1095
undef($memory_8);
#line 1096
$memory_8 = $memory_7;
#line 1096
 if (c_rt_lib::get_hashcount($memory_1) > 1) {$memory_1 = {%{$memory_1}};}$memory_1->{'top'} = $memory_8;
#line 1096
undef($memory_8);
#line 1097
$memory_9 = $memory_1->{'functions'};
#line 1097
$memory_10 = $memory_1->{'top'};
#line 1097
$memory_10 = $memory_10->{'func_key'};
#line 1097
$memory_8 = hash::get_value($memory_9, $memory_10);
#line 1097
undef($memory_10);
#line 1097
undef($memory_9);
#line 1097
$memory_9 = $memory_8;
#line 1097
 if (c_rt_lib::get_hashcount($memory_1) > 1) {$memory_1 = {%{$memory_1}};}$memory_1->{'func'} = $memory_9;
#line 1097
undef($memory_8);
#line 1097
undef($memory_9);
#line 1098
$memory_10 = c_rt_lib::init_iter($memory_4);
#line 1098
label_125:
#line 1098
$memory_8 = c_rt_lib::is_end_hash($memory_10);
#line 1098
if (c_rt_lib::check_true($memory_8)) {goto label_148;}
#line 1098
$memory_8 = c_rt_lib::get_key_iter($memory_10);
#line 1098
$memory_9 = c_rt_lib::hash_get_value($memory_4, $memory_8);
#line 1099
$memory_11 = $memory_5->[$memory_8];
#line 1100
$memory_12 = "top";
#line 1100
$memory_12 = c_rt_lib::get_ref_hash($memory_1, $memory_12);
#line 1100
$memory_13 = "vars";
#line 1100
$memory_13 = c_rt_lib::get_ref_hash($memory_12, $memory_13);
#line 1100
$memory_14 = $memory_11;
#line 1100
 if (c_rt_lib::get_arrcount($memory_13) > 1) {$memory_13 = [@{$memory_13}];}$memory_13->[$memory_9] = $memory_14;
#line 1100
$memory_15 = "vars";
#line 1100
c_rt_lib::set_ref_hash($memory_12, $memory_15, $memory_13);
#line 1100
$memory_15 = "top";
#line 1100
c_rt_lib::set_ref_hash($memory_1, $memory_15, $memory_12);
#line 1100
undef($memory_15);
#line 1100
undef($memory_12);
#line 1100
undef($memory_13);
#line 1100
undef($memory_14);
#line 1100
undef($memory_11);
#line 1101
$memory_10 = c_rt_lib::next_iter($memory_10);
#line 1101
goto label_125;
#line 1101
label_148:
#line 1101
undef($memory_8);
#line 1101
undef($memory_9);
#line 1101
undef($memory_10);
#line 1102
$memory_8 = "";
#line 1102
$memory_8 = c_rt_lib::to_nl($memory_6 eq $memory_8);
#line 1102
$memory_8 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 1102
$memory_8 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 1102
if (c_rt_lib::check_true($memory_8)) {goto label_172;}
#line 1102
$memory_9 = "top";
#line 1102
$memory_9 = c_rt_lib::get_ref_hash($memory_1, $memory_9);
#line 1102
$memory_10 = "vars";
#line 1102
$memory_10 = c_rt_lib::get_ref_hash($memory_9, $memory_10);
#line 1102
$memory_11 = $memory_2;
#line 1102
 if (c_rt_lib::get_arrcount($memory_10) > 1) {$memory_10 = [@{$memory_10}];}$memory_10->[$memory_6] = $memory_11;
#line 1102
$memory_12 = "vars";
#line 1102
c_rt_lib::set_ref_hash($memory_9, $memory_12, $memory_10);
#line 1102
$memory_12 = "top";
#line 1102
c_rt_lib::set_ref_hash($memory_1, $memory_12, $memory_9);
#line 1102
undef($memory_12);
#line 1102
undef($memory_9);
#line 1102
undef($memory_10);
#line 1102
undef($memory_11);
#line 1102
goto label_172;
#line 1102
label_172:
#line 1102
undef($memory_8);
#line 1102
undef($memory_4);
#line 1102
undef($memory_5);
#line 1102
undef($memory_6);
#line 1102
undef($memory_7);
#line 1103
goto label_179;
#line 1103
label_179:
#line 1103
undef($memory_3);
#line 1104
$memory_3 = 1;
#line 1104
$memory_3 = -$memory_3;
#line 1104
$memory_4 = $memory_3;
#line 1104
 if (c_rt_lib::get_hashcount($memory_1) > 1) {$memory_1 = {%{$memory_1}};}$memory_1->{'instruction_nr'} = $memory_4;
#line 1104
undef($memory_3);
#line 1104
undef($memory_4);
#line 1105
$memory_3 = "top";
#line 1105
$memory_3 = c_rt_lib::get_ref_hash($memory_1, $memory_3);
#line 1105
$memory_4 = "next";
#line 1105
$memory_4 = c_rt_lib::get_ref_hash($memory_3, $memory_4);
#line 1105
$memory_5 = 1;
#line 1105
$memory_4 = $memory_4 + $memory_5;
#line 1105
$memory_6 = "next";
#line 1105
c_rt_lib::set_ref_hash($memory_3, $memory_6, $memory_4);
#line 1105
$memory_6 = "top";
#line 1105
c_rt_lib::set_ref_hash($memory_1, $memory_6, $memory_3);
#line 1105
undef($memory_6);
#line 1105
undef($memory_3);
#line 1105
undef($memory_4);
#line 1105
undef($memory_5);
#line 1105
undef($memory_2);
#line 1105
undef($memory_0);
#line 1105
$_[1] = $memory_1;return;
$_[1] = $memory_1;}

sub interpreter_priv::goto($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];
#line 1109
$memory_3 = $memory_0->{'labels'};
#line 1109
$memory_4 = $memory_0->{'top'};
#line 1109
$memory_4 = $memory_4->{'module_name'};
#line 1109
$memory_2 = hash::get_value($memory_3, $memory_4);
#line 1109
undef($memory_4);
#line 1109
undef($memory_3);
#line 1110
$memory_4 = $memory_0->{'top'};
#line 1110
$memory_4 = $memory_4->{'func_key'};
#line 1110
$memory_3 = hash::get_value($memory_2, $memory_4);
#line 1110
undef($memory_4);
#line 1111
$memory_4 = hash::has_key($memory_3, $memory_1);
#line 1111
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 1111
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 1111
if (c_rt_lib::check_true($memory_4)) {goto label_18;}
#line 1112
$memory_5 = [];
#line 1112
die(dfile::ssave($memory_5));
#line 1112
undef($memory_5);
#line 1113
goto label_18;
#line 1113
label_18:
#line 1113
undef($memory_4);
#line 1114
$memory_4 = hash::get_value($memory_3, $memory_1);
#line 1114
$memory_5 = 1;
#line 1114
$memory_4 = $memory_4 + $memory_5;
#line 1114
undef($memory_5);
#line 1114
$memory_5 = "top";
#line 1114
$memory_5 = c_rt_lib::get_ref_hash($memory_0, $memory_5);
#line 1114
$memory_6 = $memory_4;
#line 1114
 if (c_rt_lib::get_hashcount($memory_5) > 1) {$memory_5 = {%{$memory_5}};}$memory_5->{'next'} = $memory_6;
#line 1114
$memory_7 = "top";
#line 1114
c_rt_lib::set_ref_hash($memory_0, $memory_7, $memory_5);
#line 1114
undef($memory_7);
#line 1114
undef($memory_4);
#line 1114
undef($memory_5);
#line 1114
undef($memory_6);
#line 1114
undef($memory_2);
#line 1114
undef($memory_3);
#line 1114
undef($memory_1);
#line 1114
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub interpreter_priv::execute_bin_op($$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;$memory_0 = $_[0];$memory_1 = $_[1];$memory_2 = $_[2];
#line 1118
$memory_3 = "+";
#line 1118
$memory_3 = c_rt_lib::to_nl($memory_2 eq $memory_3);
#line 1118
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 1118
if (c_rt_lib::check_true($memory_3)) {goto label_12;}
#line 1118
$memory_4 = $memory_0 + $memory_1;
#line 1118
undef($memory_0);
#line 1118
undef($memory_1);
#line 1118
undef($memory_2);
#line 1118
undef($memory_3);
#line 1118
return $memory_4;
#line 1118
undef($memory_4);
#line 1118
goto label_12;
#line 1118
label_12:
#line 1118
undef($memory_3);
#line 1119
$memory_3 = "-";
#line 1119
$memory_3 = c_rt_lib::to_nl($memory_2 eq $memory_3);
#line 1119
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 1119
if (c_rt_lib::check_true($memory_3)) {goto label_26;}
#line 1119
$memory_4 = $memory_0 - $memory_1;
#line 1119
undef($memory_0);
#line 1119
undef($memory_1);
#line 1119
undef($memory_2);
#line 1119
undef($memory_3);
#line 1119
return $memory_4;
#line 1119
undef($memory_4);
#line 1119
goto label_26;
#line 1119
label_26:
#line 1119
undef($memory_3);
#line 1120
$memory_3 = "*";
#line 1120
$memory_3 = c_rt_lib::to_nl($memory_2 eq $memory_3);
#line 1120
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 1120
if (c_rt_lib::check_true($memory_3)) {goto label_40;}
#line 1120
$memory_4 = $memory_0 * $memory_1;
#line 1120
undef($memory_0);
#line 1120
undef($memory_1);
#line 1120
undef($memory_2);
#line 1120
undef($memory_3);
#line 1120
return $memory_4;
#line 1120
undef($memory_4);
#line 1120
goto label_40;
#line 1120
label_40:
#line 1120
undef($memory_3);
#line 1121
$memory_3 = "/";
#line 1121
$memory_3 = c_rt_lib::to_nl($memory_2 eq $memory_3);
#line 1121
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 1121
if (c_rt_lib::check_true($memory_3)) {goto label_54;}
#line 1121
$memory_4 = $memory_0 / $memory_1;
#line 1121
undef($memory_0);
#line 1121
undef($memory_1);
#line 1121
undef($memory_2);
#line 1121
undef($memory_3);
#line 1121
return $memory_4;
#line 1121
undef($memory_4);
#line 1121
goto label_54;
#line 1121
label_54:
#line 1121
undef($memory_3);
#line 1122
$memory_3 = "%";
#line 1122
$memory_3 = c_rt_lib::to_nl($memory_2 eq $memory_3);
#line 1122
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 1122
if (c_rt_lib::check_true($memory_3)) {goto label_68;}
#line 1122
$memory_4 = $memory_0 % $memory_1;
#line 1122
undef($memory_0);
#line 1122
undef($memory_1);
#line 1122
undef($memory_2);
#line 1122
undef($memory_3);
#line 1122
return $memory_4;
#line 1122
undef($memory_4);
#line 1122
goto label_68;
#line 1122
label_68:
#line 1122
undef($memory_3);
#line 1123
$memory_3 = "==";
#line 1123
$memory_3 = c_rt_lib::to_nl($memory_2 eq $memory_3);
#line 1123
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 1123
if (c_rt_lib::check_true($memory_3)) {goto label_82;}
#line 1123
$memory_4 = c_rt_lib::to_nl($memory_0 == $memory_1);
#line 1123
undef($memory_0);
#line 1123
undef($memory_1);
#line 1123
undef($memory_2);
#line 1123
undef($memory_3);
#line 1123
return $memory_4;
#line 1123
undef($memory_4);
#line 1123
goto label_82;
#line 1123
label_82:
#line 1123
undef($memory_3);
#line 1124
$memory_3 = "!=";
#line 1124
$memory_3 = c_rt_lib::to_nl($memory_2 eq $memory_3);
#line 1124
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 1124
if (c_rt_lib::check_true($memory_3)) {goto label_96;}
#line 1124
$memory_4 = c_rt_lib::to_nl($memory_0 != $memory_1);
#line 1124
undef($memory_0);
#line 1124
undef($memory_1);
#line 1124
undef($memory_2);
#line 1124
undef($memory_3);
#line 1124
return $memory_4;
#line 1124
undef($memory_4);
#line 1124
goto label_96;
#line 1124
label_96:
#line 1124
undef($memory_3);
#line 1125
$memory_3 = "<";
#line 1125
$memory_3 = c_rt_lib::to_nl($memory_2 eq $memory_3);
#line 1125
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 1125
if (c_rt_lib::check_true($memory_3)) {goto label_110;}
#line 1125
$memory_4 = c_rt_lib::to_nl($memory_0 < $memory_1);
#line 1125
undef($memory_0);
#line 1125
undef($memory_1);
#line 1125
undef($memory_2);
#line 1125
undef($memory_3);
#line 1125
return $memory_4;
#line 1125
undef($memory_4);
#line 1125
goto label_110;
#line 1125
label_110:
#line 1125
undef($memory_3);
#line 1126
$memory_3 = "<=";
#line 1126
$memory_3 = c_rt_lib::to_nl($memory_2 eq $memory_3);
#line 1126
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 1126
if (c_rt_lib::check_true($memory_3)) {goto label_124;}
#line 1126
$memory_4 = c_rt_lib::to_nl($memory_0 <= $memory_1);
#line 1126
undef($memory_0);
#line 1126
undef($memory_1);
#line 1126
undef($memory_2);
#line 1126
undef($memory_3);
#line 1126
return $memory_4;
#line 1126
undef($memory_4);
#line 1126
goto label_124;
#line 1126
label_124:
#line 1126
undef($memory_3);
#line 1127
$memory_3 = ">";
#line 1127
$memory_3 = c_rt_lib::to_nl($memory_2 eq $memory_3);
#line 1127
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 1127
if (c_rt_lib::check_true($memory_3)) {goto label_138;}
#line 1127
$memory_4 = c_rt_lib::to_nl($memory_0 > $memory_1);
#line 1127
undef($memory_0);
#line 1127
undef($memory_1);
#line 1127
undef($memory_2);
#line 1127
undef($memory_3);
#line 1127
return $memory_4;
#line 1127
undef($memory_4);
#line 1127
goto label_138;
#line 1127
label_138:
#line 1127
undef($memory_3);
#line 1128
$memory_3 = ">=";
#line 1128
$memory_3 = c_rt_lib::to_nl($memory_2 eq $memory_3);
#line 1128
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 1128
if (c_rt_lib::check_true($memory_3)) {goto label_152;}
#line 1128
$memory_4 = c_rt_lib::to_nl($memory_0 >= $memory_1);
#line 1128
undef($memory_0);
#line 1128
undef($memory_1);
#line 1128
undef($memory_2);
#line 1128
undef($memory_3);
#line 1128
return $memory_4;
#line 1128
undef($memory_4);
#line 1128
goto label_152;
#line 1128
label_152:
#line 1128
undef($memory_3);
#line 1129
$memory_3 = ".";
#line 1129
$memory_3 = c_rt_lib::to_nl($memory_2 eq $memory_3);
#line 1129
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 1129
if (c_rt_lib::check_true($memory_3)) {goto label_166;}
#line 1129
$memory_4 = $memory_0 . $memory_1;
#line 1129
undef($memory_0);
#line 1129
undef($memory_1);
#line 1129
undef($memory_2);
#line 1129
undef($memory_3);
#line 1129
return $memory_4;
#line 1129
undef($memory_4);
#line 1129
goto label_166;
#line 1129
label_166:
#line 1129
undef($memory_3);
#line 1130
$memory_3 = "&&";
#line 1130
$memory_3 = c_rt_lib::to_nl($memory_2 eq $memory_3);
#line 1130
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 1130
if (c_rt_lib::check_true($memory_3)) {goto label_185;}
#line 1130
$memory_4 = $memory_0;
#line 1130
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 1130
if (c_rt_lib::check_true($memory_5)) {goto label_176;}
#line 1130
$memory_4 = $memory_1;
#line 1130
label_176:
#line 1130
undef($memory_5);
#line 1130
undef($memory_0);
#line 1130
undef($memory_1);
#line 1130
undef($memory_2);
#line 1130
undef($memory_3);
#line 1130
return $memory_4;
#line 1130
undef($memory_4);
#line 1130
goto label_185;
#line 1130
label_185:
#line 1130
undef($memory_3);
#line 1131
$memory_3 = "||";
#line 1131
$memory_3 = c_rt_lib::to_nl($memory_2 eq $memory_3);
#line 1131
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 1131
if (c_rt_lib::check_true($memory_3)) {goto label_202;}
#line 1131
$memory_4 = $memory_0;
#line 1131
if (c_rt_lib::check_true($memory_0)) {goto label_194;}
#line 1131
$memory_4 = $memory_1;
#line 1131
label_194:
#line 1131
undef($memory_0);
#line 1131
undef($memory_1);
#line 1131
undef($memory_2);
#line 1131
undef($memory_3);
#line 1131
return $memory_4;
#line 1131
undef($memory_4);
#line 1131
goto label_202;
#line 1131
label_202:
#line 1131
undef($memory_3);
#line 1132
$memory_3 = "eq";
#line 1132
$memory_3 = c_rt_lib::to_nl($memory_2 eq $memory_3);
#line 1132
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 1132
if (c_rt_lib::check_true($memory_3)) {goto label_216;}
#line 1132
$memory_4 = c_rt_lib::to_nl($memory_0 eq $memory_1);
#line 1132
undef($memory_0);
#line 1132
undef($memory_1);
#line 1132
undef($memory_2);
#line 1132
undef($memory_3);
#line 1132
return $memory_4;
#line 1132
undef($memory_4);
#line 1132
goto label_216;
#line 1132
label_216:
#line 1132
undef($memory_3);
#line 1133
$memory_3 = "ne";
#line 1133
$memory_3 = c_rt_lib::to_nl($memory_2 eq $memory_3);
#line 1133
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 1133
if (c_rt_lib::check_true($memory_3)) {goto label_230;}
#line 1133
$memory_4 = c_rt_lib::to_nl($memory_0 ne $memory_1);
#line 1133
undef($memory_0);
#line 1133
undef($memory_1);
#line 1133
undef($memory_2);
#line 1133
undef($memory_3);
#line 1133
return $memory_4;
#line 1133
undef($memory_4);
#line 1133
goto label_230;
#line 1133
label_230:
#line 1133
undef($memory_3);
#line 1134
$memory_3 = [];
#line 1134
die(dfile::ssave($memory_3));
#line 1134
undef($memory_3);
#line 1134
undef($memory_0);
#line 1134
undef($memory_1);
#line 1134
undef($memory_2);
#line 1134
return;
}

sub interpreter_priv::execute_una_op($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;$memory_0 = $_[0];$memory_1 = $_[1];
#line 1138
$memory_2 = "!";
#line 1138
$memory_2 = c_rt_lib::to_nl($memory_1 eq $memory_2);
#line 1138
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 1138
if (c_rt_lib::check_true($memory_2)) {goto label_12;}
#line 1138
$memory_3 = $memory_0;
#line 1138
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 1138
undef($memory_0);
#line 1138
undef($memory_1);
#line 1138
undef($memory_2);
#line 1138
return $memory_3;
#line 1138
undef($memory_3);
#line 1138
goto label_12;
#line 1138
label_12:
#line 1138
undef($memory_2);
#line 1139
$memory_2 = "-";
#line 1139
$memory_2 = c_rt_lib::to_nl($memory_1 eq $memory_2);
#line 1139
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 1139
if (c_rt_lib::check_true($memory_2)) {goto label_26;}
#line 1139
$memory_3 = $memory_0;
#line 1139
$memory_3 = -$memory_3;
#line 1139
undef($memory_0);
#line 1139
undef($memory_1);
#line 1139
undef($memory_2);
#line 1139
return $memory_3;
#line 1139
undef($memory_3);
#line 1139
goto label_26;
#line 1139
label_26:
#line 1139
undef($memory_2);
#line 1140
$memory_2 = "+";
#line 1140
$memory_2 = c_rt_lib::to_nl($memory_1 eq $memory_2);
#line 1140
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 1140
if (c_rt_lib::check_true($memory_2)) {goto label_40;}
#line 1140
$memory_3 = $memory_0;
#line 1140
$memory_3 = +$memory_3;
#line 1140
undef($memory_0);
#line 1140
undef($memory_1);
#line 1140
undef($memory_2);
#line 1140
return $memory_3;
#line 1140
undef($memory_3);
#line 1140
goto label_40;
#line 1140
label_40:
#line 1140
undef($memory_2);
#line 1141
$memory_2 = [];
#line 1141
die(dfile::ssave($memory_2));
#line 1141
undef($memory_2);
#line 1141
undef($memory_0);
#line 1141
undef($memory_1);
#line 1141
return;
}

sub interpreter_priv::get_command($) {
my $memory_0;my $memory_1;my $memory_2;$memory_0 = $_[0];
#line 1145
$memory_1 = $memory_0->{'func'};
#line 1145
$memory_1 = $memory_1->{'commands'};
#line 1145
$memory_2 = $memory_0->{'top'};
#line 1145
$memory_2 = $memory_2->{'next'};
#line 1145
$memory_1 = $memory_1->[$memory_2];
#line 1145
undef($memory_2);
#line 1145
undef($memory_0);
#line 1145
return $memory_1;
#line 1145
undef($memory_1);
#line 1145
undef($memory_0);
#line 1145
return;
}

sub interpreter_priv::get_func_key($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;$memory_0 = $_[0];$memory_1 = $_[1];
#line 1149
$memory_2 = "::";
#line 1149
$memory_2 = $memory_1 . $memory_2;
#line 1150
$memory_3 = $memory_0->{'access'};
#line 1150
$memory_3 = c_rt_lib::ov_is($memory_3, 'priv');
#line 1150
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 1150
if (c_rt_lib::check_true($memory_3)) {goto label_10;}
#line 1151
$memory_4 = "priv::";
#line 1151
$memory_2 = $memory_2 . $memory_4;
#line 1151
undef($memory_4);
#line 1152
goto label_10;
#line 1152
label_10:
#line 1152
undef($memory_3);
#line 1153
$memory_3 = $memory_0->{'name'};
#line 1153
$memory_2 = $memory_2 . $memory_3;
#line 1153
undef($memory_3);
#line 1154
undef($memory_0);
#line 1154
undef($memory_1);
#line 1154
return $memory_2;
#line 1154
undef($memory_2);
#line 1154
undef($memory_0);
#line 1154
undef($memory_1);
#line 1154
return;
}
