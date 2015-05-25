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
sub interpreter::stack_element_t;
sub interpreter::module_labels_t;
sub interpreter::known_exec_func_t;
sub interpreter::state_t;
sub interpreter::rstate_t;
sub interpreter::stack_element_debug_t;
sub interpreter_priv::build_state;
sub interpreter::init;
sub interpreter::start;
sub interpreter::exec_all_code;
sub interpreter::evaluate_const;
sub interpreter::get_none_variant;
sub interpreter_priv::build_registers;
sub interpreter_priv::build_labels;
sub interpreter_priv::build_functions;
sub interpreter_priv::get_stack_element_debug;
sub interpreter::get_whole_stack_debug;
sub interpreter::has_next_instruction;
sub interpreter_priv::get_variables;
sub interpreter_priv::get_instruction_nr;
sub interpreter_priv::is_hidden;
sub interpreter::execute_full_instruction;
sub interpreter_priv::handle_new_declarations;
sub interpreter_priv::step;
sub interpreter_priv::check_command;
sub interpreter::finish_callback;
sub interpreter::finish_read;
sub interpreter_priv::handle_normal_call;
sub interpreter_priv::handle_extern_call;
sub interpreter_priv::get_compiler_functions;
sub interpreter_priv::handle_array_call;
sub interpreter_priv::handle_hash_call;
sub interpreter_priv::handle_string_call;
sub interpreter_priv::handle_ov_call;
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
#line 20
$memory_2 = ptd::sim();
#line 20
$memory_3 = ptd::sim();
#line 20
$memory_4 = ptd::sim();
#line 20
$memory_6 = ptd::ptd_im();
#line 20
$memory_5 = ptd::arr($memory_6);
#line 20
undef($memory_6);
#line 20
$memory_6 = ptd::sim();
#line 20
$memory_8 = ptd::sim();
#line 20
$memory_7 = ptd::hash($memory_8);
#line 20
undef($memory_8);
#line 20
$memory_9 = ptd::sim();
#line 20
$memory_8 = ptd::hash($memory_9);
#line 20
undef($memory_9);
#line 20
$memory_1 = {func_key => $memory_2,module_name => $memory_3,next => $memory_4,vars => $memory_5,ret => $memory_6,code_vars => $memory_7,ref_arguments => $memory_8,};
#line 20
undef($memory_2);
#line 20
undef($memory_3);
#line 20
undef($memory_4);
#line 20
undef($memory_5);
#line 20
undef($memory_6);
#line 20
undef($memory_7);
#line 20
undef($memory_8);
#line 20
$memory_0 = ptd::rec($memory_1);
#line 20
undef($memory_1);
#line 20
return $memory_0;
#line 20
undef($memory_0);
#line 20
return;
}

my $_stack_element_t;
sub interpreter::stack_element_t() {
	$_stack_element_t = interpreter::__stack_element_t() unless defined $_stack_element_t;
	return $_stack_element_t;
}

sub interpreter::__module_labels_t() {
my $memory_0;my $memory_1;my $memory_2;
#line 32
$memory_2 = ptd::sim();
#line 32
$memory_1 = ptd::hash($memory_2);
#line 32
undef($memory_2);
#line 32
$memory_0 = ptd::hash($memory_1);
#line 32
undef($memory_1);
#line 32
return $memory_0;
#line 32
undef($memory_0);
#line 32
return;
}

my $_module_labels_t;
sub interpreter::module_labels_t() {
	$_module_labels_t = interpreter::__module_labels_t() unless defined $_module_labels_t;
	return $_module_labels_t;
}

sub interpreter::__known_exec_func_t() {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;
#line 36
$memory_2 = ptd::ptd_im();
#line 36
$memory_4 = {
	module => "ptd",
	name => "meta_type",
};
#line 36
$memory_4 = c_rt_lib::ov_mk_arg('ref', $memory_4);
#line 36
$memory_3 = ptd::arr($memory_4);
#line 36
undef($memory_4);
#line 36
$memory_6 = ptd::none();
#line 36
$memory_7 = ptd::none();
#line 36
$memory_5 = {callback => $memory_6,sequential => $memory_7,};
#line 36
undef($memory_6);
#line 36
undef($memory_7);
#line 36
$memory_4 = ptd::var($memory_5);
#line 36
undef($memory_5);
#line 36
$memory_1 = {func => $memory_2,args => $memory_3,type => $memory_4,};
#line 36
undef($memory_2);
#line 36
undef($memory_3);
#line 36
undef($memory_4);
#line 36
$memory_0 = ptd::rec($memory_1);
#line 36
undef($memory_1);
#line 36
return $memory_0;
#line 36
undef($memory_0);
#line 36
return;
}

my $_known_exec_func_t;
sub interpreter::known_exec_func_t() {
	$_known_exec_func_t = interpreter::__known_exec_func_t() unless defined $_known_exec_func_t;
	return $_known_exec_func_t;
}

sub interpreter::__state_t() {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;my $memory_13;
#line 46
$memory_2 = {
	module => "interpreter",
	name => "rstate_t",
};
#line 46
$memory_2 = c_rt_lib::ov_mk_arg('ref', $memory_2);
#line 46
$memory_3 = {
	module => "nlasm",
	name => "function_t",
};
#line 46
$memory_3 = c_rt_lib::ov_mk_arg('ref', $memory_3);
#line 46
$memory_5 = {
	module => "interpreter",
	name => "module_labels_t",
};
#line 46
$memory_5 = c_rt_lib::ov_mk_arg('ref', $memory_5);
#line 46
$memory_4 = ptd::hash($memory_5);
#line 46
undef($memory_5);
#line 46
$memory_6 = {
	module => "nlasm",
	name => "function_t",
};
#line 46
$memory_6 = c_rt_lib::ov_mk_arg('ref', $memory_6);
#line 46
$memory_5 = ptd::hash($memory_6);
#line 46
undef($memory_6);
#line 46
$memory_7 = {
	module => "interpreter",
	name => "stack_element_t",
};
#line 46
$memory_7 = c_rt_lib::ov_mk_arg('ref', $memory_7);
#line 46
$memory_6 = ptd::arr($memory_7);
#line 46
undef($memory_7);
#line 46
$memory_7 = {
	module => "interpreter",
	name => "stack_element_t",
};
#line 46
$memory_7 = c_rt_lib::ov_mk_arg('ref', $memory_7);
#line 46
$memory_8 = ptd::sim();
#line 46
$memory_9 = ptd::sim();
#line 46
$memory_10 = {
	module => "boolean_t",
	name => "type",
};
#line 46
$memory_10 = c_rt_lib::ov_mk_arg('ref', $memory_10);
#line 46
$memory_12 = {
	module => "interpreter",
	name => "known_exec_func_t",
};
#line 46
$memory_12 = c_rt_lib::ov_mk_arg('ref', $memory_12);
#line 46
$memory_11 = ptd::hash($memory_12);
#line 46
undef($memory_12);
#line 46
$memory_13 = ptd::sim();
#line 46
$memory_12 = ptd::hash($memory_13);
#line 46
undef($memory_13);
#line 46
$memory_1 = {rstate => $memory_2,func => $memory_3,labels => $memory_4,functions => $memory_5,stack => $memory_6,top => $memory_7,instruction_nr => $memory_8,read_dest => $memory_9,check_all_instructions => $memory_10,known_exec_func => $memory_11,compiler_functions => $memory_12,};
#line 46
undef($memory_2);
#line 46
undef($memory_3);
#line 46
undef($memory_4);
#line 46
undef($memory_5);
#line 46
undef($memory_6);
#line 46
undef($memory_7);
#line 46
undef($memory_8);
#line 46
undef($memory_9);
#line 46
undef($memory_10);
#line 46
undef($memory_11);
#line 46
undef($memory_12);
#line 46
$memory_0 = ptd::rec($memory_1);
#line 46
undef($memory_1);
#line 46
return $memory_0;
#line 46
undef($memory_0);
#line 46
return;
}

my $_state_t;
sub interpreter::state_t() {
	$_state_t = interpreter::__state_t() unless defined $_state_t;
	return $_state_t;
}

sub interpreter::__rstate_t() {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;
#line 62
$memory_2 = ptd::none();
#line 62
$memory_3 = ptd::sim();
#line 62
$memory_4 = ptd::sim();
#line 62
$memory_5 = ptd::ptd_im();
#line 62
$memory_1 = {running => $memory_2,error => $memory_3,callback => $memory_4,finished => $memory_5,};
#line 62
undef($memory_2);
#line 62
undef($memory_3);
#line 62
undef($memory_4);
#line 62
undef($memory_5);
#line 62
$memory_0 = ptd::var($memory_1);
#line 62
undef($memory_1);
#line 62
return $memory_0;
#line 62
undef($memory_0);
#line 62
return;
}

my $_rstate_t;
sub interpreter::rstate_t() {
	$_rstate_t = interpreter::__rstate_t() unless defined $_rstate_t;
	return $_rstate_t;
}

sub interpreter::__stack_element_debug_t() {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;
#line 71
$memory_5 = ptd::sim();
#line 71
$memory_6 = ptd::ptd_im();
#line 71
$memory_4 = {name => $memory_5,value => $memory_6,};
#line 71
undef($memory_5);
#line 71
undef($memory_6);
#line 71
$memory_3 = ptd::rec($memory_4);
#line 71
undef($memory_4);
#line 71
$memory_2 = ptd::arr($memory_3);
#line 71
undef($memory_3);
#line 71
$memory_3 = {
	module => "nast",
	name => "debug_t",
};
#line 71
$memory_3 = c_rt_lib::ov_mk_arg('ref', $memory_3);
#line 71
$memory_4 = ptd::sim();
#line 71
$memory_1 = {variables => $memory_2,command_debug => $memory_3,func_name => $memory_4,};
#line 71
undef($memory_2);
#line 71
undef($memory_3);
#line 71
undef($memory_4);
#line 71
$memory_0 = ptd::rec($memory_1);
#line 71
undef($memory_1);
#line 71
return $memory_0;
#line 71
undef($memory_0);
#line 71
return;
}

my $_stack_element_debug_t;
sub interpreter::stack_element_debug_t() {
	$_stack_element_debug_t = interpreter::__stack_element_debug_t() unless defined $_stack_element_debug_t;
	return $_stack_element_debug_t;
}

sub interpreter_priv::build_state($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;my $memory_13;my $memory_14;my $memory_15;$memory_0 = $_[0];$memory_1 = $_[1];
#line 84
$memory_3 = "";
#line 84
$memory_3 = c_rt_lib::ov_mk_arg('finished', $memory_3);
#line 84
$memory_5 = c_rt_lib::ov_mk_none('none');
#line 84
$memory_6 = c_rt_lib::ov_mk_none('priv');
#line 84
$memory_7 = 0;
#line 84
$memory_8 = [];
#line 84
$memory_9 = [];
#line 84
$memory_10 = "";
#line 84
$memory_4 = {annotation => $memory_5,access => $memory_6,reg_size => $memory_7,args_type => $memory_8,commands => $memory_9,name => $memory_10,};
#line 84
undef($memory_5);
#line 84
undef($memory_6);
#line 84
undef($memory_7);
#line 84
undef($memory_8);
#line 84
undef($memory_9);
#line 84
undef($memory_10);
#line 84
$memory_5 = interpreter_priv::build_labels($memory_0);
#line 84
$memory_6 = interpreter_priv::build_functions($memory_0);
#line 84
$memory_7 = [];
#line 84
$memory_9 = "";
#line 84
$memory_10 = "";
#line 84
$memory_11 = 0;
#line 84
$memory_12 = [];
#line 84
$memory_13 = "";
#line 84
$memory_14 = {};
#line 84
$memory_15 = {};
#line 84
$memory_8 = {func_key => $memory_9,module_name => $memory_10,next => $memory_11,vars => $memory_12,ret => $memory_13,code_vars => $memory_14,ref_arguments => $memory_15,};
#line 84
undef($memory_9);
#line 84
undef($memory_10);
#line 84
undef($memory_11);
#line 84
undef($memory_12);
#line 84
undef($memory_13);
#line 84
undef($memory_14);
#line 84
undef($memory_15);
#line 84
$memory_9 = 1;
#line 84
$memory_9 = -$memory_9;
#line 84
$memory_10 = "";
#line 84
$memory_11 = c_rt_lib::to_nl(1);
#line 84
$memory_12 = interpreter_priv::get_compiler_functions();
#line 84
$memory_2 = {rstate => $memory_3,func => $memory_4,labels => $memory_5,functions => $memory_6,stack => $memory_7,top => $memory_8,instruction_nr => $memory_9,read_dest => $memory_10,check_all_instructions => $memory_11,known_exec_func => $memory_1,compiler_functions => $memory_12,};
#line 84
undef($memory_3);
#line 84
undef($memory_4);
#line 84
undef($memory_5);
#line 84
undef($memory_6);
#line 84
undef($memory_7);
#line 84
undef($memory_8);
#line 84
undef($memory_9);
#line 84
undef($memory_10);
#line 84
undef($memory_11);
#line 84
undef($memory_12);
#line 84
undef($memory_0);
#line 84
undef($memory_1);
#line 84
return $memory_2;
#line 84
undef($memory_2);
#line 84
undef($memory_0);
#line 84
undef($memory_1);
#line 84
return;
}

sub interpreter::init($$) {
my $memory_0;my $memory_1;my $memory_2;$memory_0 = $_[0];$memory_1 = $_[1];
#line 108
$memory_2 = interpreter_priv::build_state($memory_0, $memory_1);
#line 108
undef($memory_0);
#line 108
undef($memory_1);
#line 108
return $memory_2;
#line 108
undef($memory_2);
#line 108
undef($memory_0);
#line 108
undef($memory_1);
#line 108
return;
}

sub interpreter::start($$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];$memory_2 = $_[2];
#line 113
$memory_3 = "::";
#line 113
$memory_3 = $memory_2 . $memory_3;
#line 113
$memory_3 = $memory_3 . $memory_1;
#line 114
$memory_5 = $memory_0->{'functions'};
#line 114
$memory_4 = hash::has_key($memory_5, $memory_3);
#line 114
undef($memory_5);
#line 114
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 114
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 114
if (c_rt_lib::check_true($memory_4)) {goto label_2;}
#line 115
$memory_5 = "brak funkcji ";
#line 115
$memory_5 = $memory_5 . $memory_3;
#line 115
$memory_5 = c_rt_lib::ov_mk_arg('err', $memory_5);
#line 115
undef($memory_1);
#line 115
undef($memory_2);
#line 115
undef($memory_3);
#line 115
undef($memory_4);
#line 115
$_[0] = $memory_0;return $memory_5;
#line 115
undef($memory_5);
#line 116
goto label_2;
#line 116
label_2:
#line 116
undef($memory_4);
#line 117
$memory_4 = c_rt_lib::ov_mk_none('running');
#line 117
$memory_5 = $memory_4;
#line 117
 if (c_rt_lib::get_hashcount($memory_0) > 1) {$memory_0 = {%{$memory_0}};}$memory_0->{'rstate'} = $memory_5;
#line 117
undef($memory_4);
#line 117
undef($memory_5);
#line 118
$memory_5 = $memory_0->{'functions'};
#line 118
$memory_4 = hash::get_value($memory_5, $memory_3);
#line 118
undef($memory_5);
#line 119
$memory_5 = $memory_4;
#line 119
 if (c_rt_lib::get_hashcount($memory_0) > 1) {$memory_0 = {%{$memory_0}};}$memory_0->{'func'} = $memory_5;
#line 119
undef($memory_5);
#line 120
$memory_5 = [];
#line 120
$memory_6 = $memory_5;
#line 120
 if (c_rt_lib::get_hashcount($memory_0) > 1) {$memory_0 = {%{$memory_0}};}$memory_0->{'stack'} = $memory_6;
#line 120
undef($memory_5);
#line 120
undef($memory_6);
#line 121
$memory_6 = 0;
#line 121
$memory_8 = $memory_4->{'reg_size'};
#line 121
$memory_7 = interpreter_priv::build_registers($memory_8);
#line 121
undef($memory_8);
#line 121
$memory_8 = "";
#line 121
$memory_9 = {};
#line 121
$memory_10 = {};
#line 121
$memory_5 = {func_key => $memory_3,module_name => $memory_2,next => $memory_6,vars => $memory_7,ret => $memory_8,code_vars => $memory_9,ref_arguments => $memory_10,};
#line 121
undef($memory_6);
#line 121
undef($memory_7);
#line 121
undef($memory_8);
#line 121
undef($memory_9);
#line 121
undef($memory_10);
#line 121
$memory_6 = $memory_5;
#line 121
 if (c_rt_lib::get_hashcount($memory_0) > 1) {$memory_0 = {%{$memory_0}};}$memory_0->{'top'} = $memory_6;
#line 121
undef($memory_5);
#line 121
undef($memory_6);
#line 130
$memory_5 = 1;
#line 130
$memory_5 = -$memory_5;
#line 130
$memory_6 = $memory_5;
#line 130
 if (c_rt_lib::get_hashcount($memory_0) > 1) {$memory_0 = {%{$memory_0}};}$memory_0->{'instruction_nr'} = $memory_6;
#line 130
undef($memory_5);
#line 130
undef($memory_6);
#line 131
$memory_5 = "";
#line 131
$memory_6 = $memory_5;
#line 131
 if (c_rt_lib::get_hashcount($memory_0) > 1) {$memory_0 = {%{$memory_0}};}$memory_0->{'read_dest'} = $memory_6;
#line 131
undef($memory_5);
#line 131
undef($memory_6);
#line 132
interpreter_priv::handle_new_declarations($memory_0);
#line 133
$memory_5 = "";
#line 133
$memory_5 = c_rt_lib::ov_mk_arg('ok', $memory_5);
#line 133
undef($memory_1);
#line 133
undef($memory_2);
#line 133
undef($memory_3);
#line 133
undef($memory_4);
#line 133
$_[0] = $memory_0;return $memory_5;
#line 133
undef($memory_5);
#line 133
undef($memory_3);
#line 133
undef($memory_4);
#line 133
undef($memory_1);
#line 133
undef($memory_2);
#line 133
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub interpreter::exec_all_code($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;$memory_0 = $_[0];
#line 136
interpreter_priv::step($memory_0);
#line 137
label_2:
#line 138
$memory_1 = $memory_0->{'rstate'};
#line 138
$memory_2 = c_rt_lib::ov_is($memory_1, 'error');
#line 138
if (c_rt_lib::check_true($memory_2)) {goto label_4;}
#line 140
$memory_2 = c_rt_lib::ov_is($memory_1, 'running');
#line 140
if (c_rt_lib::check_true($memory_2)) {goto label_5;}
#line 142
$memory_2 = c_rt_lib::ov_is($memory_1, 'callback');
#line 142
if (c_rt_lib::check_true($memory_2)) {goto label_6;}
#line 145
$memory_2 = c_rt_lib::ov_is($memory_1, 'finished');
#line 145
if (c_rt_lib::check_true($memory_2)) {goto label_7;}
#line 145
$memory_2 = "NOMATCHALERT";
#line 145
$memory_2 = [$memory_2,$memory_1];
#line 145
die(dfile::ssave($memory_2));
#line 138
label_4:
#line 138
$memory_3 = c_rt_lib::ov_as($memory_1, 'error');
#line 139
$memory_4 = c_rt_lib::ov_mk_arg('err', $memory_3);
#line 139
undef($memory_0);
#line 139
undef($memory_1);
#line 139
undef($memory_2);
#line 139
undef($memory_3);
#line 139
return $memory_4;
#line 139
undef($memory_4);
#line 139
undef($memory_3);
#line 140
goto label_3;
#line 140
label_5:
#line 141
interpreter_priv::step($memory_0);
#line 142
goto label_3;
#line 142
label_6:
#line 142
$memory_3 = c_rt_lib::ov_as($memory_1, 'callback');
#line 142
undef($memory_3);
#line 145
goto label_3;
#line 145
label_7:
#line 145
$memory_3 = c_rt_lib::ov_as($memory_1, 'finished');
#line 146
$memory_4 = c_rt_lib::ov_mk_arg('ok', $memory_3);
#line 146
undef($memory_0);
#line 146
undef($memory_1);
#line 146
undef($memory_2);
#line 146
undef($memory_3);
#line 146
return $memory_4;
#line 146
undef($memory_4);
#line 146
undef($memory_3);
#line 147
goto label_3;
#line 147
label_3:
#line 147
undef($memory_1);
#line 147
undef($memory_2);
#line 137
goto label_2;
#line 149
$memory_1 = c_rt_lib::ov_mk_none('err');
#line 149
undef($memory_0);
#line 149
return $memory_1;
#line 149
undef($memory_1);
#line 149
undef($memory_0);
#line 149
return;
}

sub interpreter::evaluate_const($$$$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;$memory_0 = $_[0];$memory_1 = $_[1];$memory_2 = $_[2];$memory_3 = $_[3];$memory_4 = $_[4];
#line 155
$memory_5 = interpreter_priv::get_func_key($memory_1, $memory_2);
#line 156
$memory_7 = $memory_0->{'functions'};
#line 156
$memory_6 = hash::has_key($memory_7, $memory_5);
#line 156
undef($memory_7);
#line 156
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 156
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 156
if (c_rt_lib::check_true($memory_6)) {goto label_2;}
#line 156
$memory_7 = [];
#line 156
die(dfile::ssave($memory_7));
#line 156
goto label_2;
#line 156
label_2:
#line 156
undef($memory_6);
#line 156
undef($memory_7);
#line 157
$memory_6 = c_rt_lib::ov_mk_none('running');
#line 157
$memory_7 = $memory_6;
#line 157
 if (c_rt_lib::get_hashcount($memory_0) > 1) {$memory_0 = {%{$memory_0}};}$memory_0->{'rstate'} = $memory_7;
#line 157
undef($memory_6);
#line 157
undef($memory_7);
#line 158
$memory_7 = $memory_0->{'functions'};
#line 158
$memory_6 = hash::get_value($memory_7, $memory_5);
#line 158
undef($memory_7);
#line 158
$memory_1 = $memory_6;
#line 158
undef($memory_6);
#line 159
$memory_6 = $memory_1;
#line 159
 if (c_rt_lib::get_hashcount($memory_0) > 1) {$memory_0 = {%{$memory_0}};}$memory_0->{'func'} = $memory_6;
#line 159
undef($memory_6);
#line 160
$memory_6 = [];
#line 160
$memory_7 = $memory_6;
#line 160
 if (c_rt_lib::get_hashcount($memory_0) > 1) {$memory_0 = {%{$memory_0}};}$memory_0->{'stack'} = $memory_7;
#line 160
undef($memory_6);
#line 160
undef($memory_7);
#line 161
$memory_7 = "";
#line 161
$memory_8 = {};
#line 161
$memory_9 = {};
#line 161
$memory_6 = {func_key => $memory_5,module_name => $memory_2,next => $memory_4,vars => $memory_3,ret => $memory_7,code_vars => $memory_8,ref_arguments => $memory_9,};
#line 161
undef($memory_7);
#line 161
undef($memory_8);
#line 161
undef($memory_9);
#line 161
$memory_7 = $memory_6;
#line 161
 if (c_rt_lib::get_hashcount($memory_0) > 1) {$memory_0 = {%{$memory_0}};}$memory_0->{'top'} = $memory_7;
#line 161
undef($memory_6);
#line 161
undef($memory_7);
#line 170
$memory_6 = 1;
#line 170
$memory_6 = -$memory_6;
#line 170
$memory_7 = $memory_6;
#line 170
 if (c_rt_lib::get_hashcount($memory_0) > 1) {$memory_0 = {%{$memory_0}};}$memory_0->{'instruction_nr'} = $memory_7;
#line 170
undef($memory_6);
#line 170
undef($memory_7);
#line 171
$memory_6 = "";
#line 171
$memory_7 = $memory_6;
#line 171
 if (c_rt_lib::get_hashcount($memory_0) > 1) {$memory_0 = {%{$memory_0}};}$memory_0->{'read_dest'} = $memory_7;
#line 171
undef($memory_6);
#line 171
undef($memory_7);
#line 172
interpreter_priv::handle_new_declarations($memory_0);
#line 173
interpreter_priv::step($memory_0);
#line 174
$memory_6 = 1;
#line 175
label_4:
#line 175
$memory_9 = $memory_0->{'stack'};
#line 175
$memory_7 = array::len($memory_9);
#line 175
undef($memory_9);
#line 175
$memory_9 = 0;
#line 175
$memory_7 = c_rt_lib::to_nl($memory_7 != $memory_9);
#line 175
undef($memory_9);
#line 175
$memory_8 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 175
if (c_rt_lib::check_true($memory_8)) {goto label_5;}
#line 175
$memory_7 = $memory_0->{'rstate'};
#line 175
$memory_7 = c_rt_lib::ov_is($memory_7, 'running');
#line 175
label_5:
#line 175
undef($memory_8);
#line 175
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 175
if (c_rt_lib::check_true($memory_7)) {goto label_3;}
#line 176
$memory_8 = 5000;
#line 176
$memory_8 = c_rt_lib::to_nl($memory_6 > $memory_8);
#line 176
$memory_8 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 176
if (c_rt_lib::check_true($memory_8)) {goto label_7;}
#line 177
$memory_9 = "steps limit exceeded";
#line 177
$memory_9 = c_rt_lib::ov_mk_arg('err', $memory_9);
#line 177
undef($memory_0);
#line 177
undef($memory_1);
#line 177
undef($memory_2);
#line 177
undef($memory_3);
#line 177
undef($memory_4);
#line 177
undef($memory_5);
#line 177
undef($memory_6);
#line 177
undef($memory_7);
#line 177
undef($memory_8);
#line 177
return $memory_9;
#line 177
undef($memory_9);
#line 178
goto label_7;
#line 178
label_7:
#line 178
undef($memory_8);
#line 179
interpreter_priv::step($memory_0);
#line 180
$memory_8 = 1;
#line 180
$memory_6 = $memory_6 + $memory_8;
#line 180
undef($memory_8);
#line 181
goto label_4;
#line 181
label_3:
#line 181
undef($memory_7);
#line 182
$memory_7 = $memory_0->{'rstate'};
#line 182
$memory_7 = c_rt_lib::ov_is($memory_7, 'error');
#line 182
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 182
if (c_rt_lib::check_true($memory_7)) {goto label_9;}
#line 183
$memory_8 = $memory_0->{'rstate'};
#line 183
$memory_8 = c_rt_lib::ov_as($memory_8, 'error');
#line 183
$memory_8 = c_rt_lib::ov_mk_arg('err', $memory_8);
#line 183
undef($memory_0);
#line 183
undef($memory_1);
#line 183
undef($memory_2);
#line 183
undef($memory_3);
#line 183
undef($memory_4);
#line 183
undef($memory_5);
#line 183
undef($memory_6);
#line 183
undef($memory_7);
#line 183
return $memory_8;
#line 183
undef($memory_8);
#line 184
goto label_8;
#line 184
label_9:
#line 185
$memory_8 = $memory_0->{'top'};
#line 185
$memory_8 = $memory_8->{'vars'};
#line 185
$memory_8 = c_rt_lib::ov_mk_arg('ok', $memory_8);
#line 185
undef($memory_0);
#line 185
undef($memory_1);
#line 185
undef($memory_2);
#line 185
undef($memory_3);
#line 185
undef($memory_4);
#line 185
undef($memory_5);
#line 185
undef($memory_6);
#line 185
undef($memory_7);
#line 185
return $memory_8;
#line 185
undef($memory_8);
#line 186
goto label_8;
#line 186
label_8:
#line 186
undef($memory_7);
#line 186
undef($memory_5);
#line 186
undef($memory_6);
#line 186
undef($memory_0);
#line 186
undef($memory_1);
#line 186
undef($memory_2);
#line 186
undef($memory_3);
#line 186
undef($memory_4);
#line 186
return;
}

sub interpreter::__get_none_variant() {
my $memory_0;
#line 190
$memory_0 = c_rt_lib::ov_mk_none('none_variant_do_not_use');
#line 190
return $memory_0;
#line 190
undef($memory_0);
#line 190
return;
}

my $_get_none_variant;
sub interpreter::get_none_variant() {
	$_get_none_variant = interpreter::__get_none_variant() unless defined $_get_none_variant;
	return $_get_none_variant;
}

sub interpreter_priv::build_registers($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;$memory_0 = $_[0];
#line 194
$memory_1 = [];
#line 195
$memory_2 = 0;
#line 195
$memory_3 = 1;
#line 195
label_3:
#line 195
$memory_4 = c_rt_lib::to_nl($memory_2 >= $memory_0);
#line 195
if (c_rt_lib::check_true($memory_4)) {goto label_1;}
#line 195
$memory_5 = interpreter::get_none_variant();
#line 195
array::push($memory_1, $memory_5);
#line 195
undef($memory_5);
#line 195
$memory_2 = $memory_2 + $memory_3;
#line 195
goto label_3;
#line 195
label_1:
#line 195
undef($memory_2);
#line 195
undef($memory_3);
#line 195
undef($memory_4);
#line 196
undef($memory_0);
#line 196
return $memory_1;
#line 196
undef($memory_1);
#line 196
undef($memory_0);
#line 196
return;
}

sub interpreter_priv::build_labels($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;my $memory_13;my $memory_14;my $memory_15;my $memory_16;my $memory_17;my $memory_18;my $memory_19;my $memory_20;my $memory_21;my $memory_22;my $memory_23;$memory_0 = $_[0];
#line 200
$memory_1 = {};
#line 201
$memory_3 = 0;
#line 201
$memory_4 = 1;
#line 201
$memory_5 = c_rt_lib::array_len($memory_0);
#line 201
label_3:
#line 201
$memory_6 = c_rt_lib::to_nl($memory_3 >= $memory_5);
#line 201
if (c_rt_lib::check_true($memory_6)) {goto label_1;}
#line 201
$memory_2 = $memory_0->[$memory_3];
#line 202
$memory_7 = $memory_2->{'module_name'};
#line 203
$memory_8 = {};
#line 204
$memory_9 = $memory_2->{'functions'};
#line 204
$memory_11 = 0;
#line 204
$memory_12 = 1;
#line 204
$memory_13 = c_rt_lib::array_len($memory_9);
#line 204
label_6:
#line 204
$memory_14 = c_rt_lib::to_nl($memory_11 >= $memory_13);
#line 204
if (c_rt_lib::check_true($memory_14)) {goto label_4;}
#line 204
$memory_10 = $memory_9->[$memory_11];
#line 205
$memory_15 = interpreter_priv::get_func_key($memory_10, $memory_7);
#line 206
$memory_16 = {};
#line 207
$memory_18 = $memory_10->{'commands'};
#line 207
$memory_17 = array::len($memory_18);
#line 207
undef($memory_18);
#line 207
$memory_18 = 0;
#line 207
$memory_19 = 1;
#line 207
label_9:
#line 207
$memory_20 = c_rt_lib::to_nl($memory_18 >= $memory_17);
#line 207
if (c_rt_lib::check_true($memory_20)) {goto label_7;}
#line 208
$memory_21 = $memory_10->{'commands'};
#line 208
$memory_21 = $memory_21->[$memory_18];
#line 208
$memory_21 = $memory_21->{'cmd'};
#line 209
$memory_22 = $memory_21;
#line 209
$memory_22 = c_rt_lib::ov_is($memory_22, 'prt_lbl');
#line 209
$memory_22 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_22));
#line 209
if (c_rt_lib::check_true($memory_22)) {goto label_11;}
#line 210
$memory_23 = $memory_21;
#line 210
$memory_23 = c_rt_lib::ov_as($memory_23, 'prt_lbl');
#line 211
hash::set_value($memory_16, $memory_23, $memory_18);
#line 211
undef($memory_23);
#line 212
goto label_11;
#line 212
label_11:
#line 212
undef($memory_22);
#line 212
undef($memory_21);
#line 213
$memory_18 = $memory_18 + $memory_19;
#line 213
goto label_9;
#line 213
label_7:
#line 213
undef($memory_17);
#line 213
undef($memory_18);
#line 213
undef($memory_19);
#line 213
undef($memory_20);
#line 214
hash::set_value($memory_8, $memory_15, $memory_16);
#line 214
undef($memory_15);
#line 214
undef($memory_16);
#line 215
$memory_11 = $memory_11 + $memory_12;
#line 215
goto label_6;
#line 215
label_4:
#line 215
undef($memory_9);
#line 215
undef($memory_10);
#line 215
undef($memory_11);
#line 215
undef($memory_12);
#line 215
undef($memory_13);
#line 215
undef($memory_14);
#line 216
$memory_9 = $memory_2->{'module_name'};
#line 216
hash::set_value($memory_1, $memory_9, $memory_8);
#line 216
undef($memory_9);
#line 216
undef($memory_7);
#line 216
undef($memory_8);
#line 217
$memory_3 = $memory_3 + $memory_4;
#line 217
goto label_3;
#line 217
label_1:
#line 217
undef($memory_2);
#line 217
undef($memory_3);
#line 217
undef($memory_4);
#line 217
undef($memory_5);
#line 217
undef($memory_6);
#line 218
undef($memory_0);
#line 218
return $memory_1;
#line 218
undef($memory_1);
#line 218
undef($memory_0);
#line 218
return;
}

sub interpreter_priv::build_functions($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;my $memory_13;my $memory_14;$memory_0 = $_[0];
#line 222
$memory_1 = {};
#line 223
$memory_3 = 0;
#line 223
$memory_4 = 1;
#line 223
$memory_5 = c_rt_lib::array_len($memory_0);
#line 223
label_3:
#line 223
$memory_6 = c_rt_lib::to_nl($memory_3 >= $memory_5);
#line 223
if (c_rt_lib::check_true($memory_6)) {goto label_1;}
#line 223
$memory_2 = $memory_0->[$memory_3];
#line 224
$memory_7 = $memory_2->{'module_name'};
#line 225
$memory_8 = $memory_2->{'functions'};
#line 225
$memory_10 = 0;
#line 225
$memory_11 = 1;
#line 225
$memory_12 = c_rt_lib::array_len($memory_8);
#line 225
label_6:
#line 225
$memory_13 = c_rt_lib::to_nl($memory_10 >= $memory_12);
#line 225
if (c_rt_lib::check_true($memory_13)) {goto label_4;}
#line 225
$memory_9 = $memory_8->[$memory_10];
#line 226
$memory_14 = interpreter_priv::get_func_key($memory_9, $memory_7);
#line 227
hash::set_value($memory_1, $memory_14, $memory_9);
#line 227
undef($memory_14);
#line 228
$memory_10 = $memory_10 + $memory_11;
#line 228
goto label_6;
#line 228
label_4:
#line 228
undef($memory_8);
#line 228
undef($memory_9);
#line 228
undef($memory_10);
#line 228
undef($memory_11);
#line 228
undef($memory_12);
#line 228
undef($memory_13);
#line 228
undef($memory_7);
#line 229
$memory_3 = $memory_3 + $memory_4;
#line 229
goto label_3;
#line 229
label_1:
#line 229
undef($memory_2);
#line 229
undef($memory_3);
#line 229
undef($memory_4);
#line 229
undef($memory_5);
#line 229
undef($memory_6);
#line 230
undef($memory_0);
#line 230
return $memory_1;
#line 230
undef($memory_1);
#line 230
undef($memory_0);
#line 230
return;
}

sub interpreter_priv::get_stack_element_debug($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;$memory_0 = $_[0];$memory_1 = $_[1];
#line 234
$memory_3 = $memory_1->{'functions'};
#line 234
$memory_4 = $memory_0->{'func_key'};
#line 234
$memory_2 = hash::get_value($memory_3, $memory_4);
#line 234
undef($memory_4);
#line 234
undef($memory_3);
#line 235
$memory_4 = interpreter_priv::get_variables($memory_0);
#line 235
$memory_5 = $memory_2->{'commands'};
#line 235
$memory_6 = $memory_0->{'next'};
#line 235
$memory_5 = $memory_5->[$memory_6];
#line 235
undef($memory_6);
#line 235
$memory_5 = $memory_5->{'debug'};
#line 235
$memory_5 = $memory_5->{'nast_debug'};
#line 235
$memory_6 = $memory_2->{'name'};
#line 235
$memory_3 = {variables => $memory_4,command_debug => $memory_5,func_name => $memory_6,};
#line 235
undef($memory_4);
#line 235
undef($memory_5);
#line 235
undef($memory_6);
#line 235
undef($memory_0);
#line 235
undef($memory_1);
#line 235
undef($memory_2);
#line 235
return $memory_3;
#line 235
undef($memory_3);
#line 235
undef($memory_2);
#line 235
undef($memory_0);
#line 235
undef($memory_1);
#line 235
return;
}

sub interpreter::get_whole_stack_debug($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;$memory_0 = $_[0];
#line 243
$memory_1 = [];
#line 244
$memory_2 = $memory_0->{'rstate'};
#line 244
$memory_2 = c_rt_lib::ov_is($memory_2, 'finished');
#line 244
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 244
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 244
if (c_rt_lib::check_true($memory_2)) {goto label_2;}
#line 244
$memory_4 = $memory_0->{'top'};
#line 244
$memory_3 = interpreter_priv::get_stack_element_debug($memory_4, $memory_0);
#line 244
undef($memory_4);
#line 244
array::push($memory_1, $memory_3);
#line 244
undef($memory_3);
#line 244
goto label_2;
#line 244
label_2:
#line 244
undef($memory_2);
#line 245
$memory_3 = $memory_0->{'stack'};
#line 245
$memory_2 = array::len($memory_3);
#line 245
undef($memory_3);
#line 246
$memory_3 = 0;
#line 246
$memory_4 = 1;
#line 246
label_5:
#line 246
$memory_5 = c_rt_lib::to_nl($memory_3 >= $memory_2);
#line 246
if (c_rt_lib::check_true($memory_5)) {goto label_3;}
#line 247
$memory_7 = $memory_0->{'stack'};
#line 247
$memory_8 = $memory_2 - $memory_3;
#line 247
$memory_9 = 1;
#line 247
$memory_8 = $memory_8 - $memory_9;
#line 247
undef($memory_9);
#line 247
$memory_7 = $memory_7->[$memory_8];
#line 247
undef($memory_8);
#line 247
$memory_6 = interpreter_priv::get_stack_element_debug($memory_7, $memory_0);
#line 247
undef($memory_7);
#line 247
array::push($memory_1, $memory_6);
#line 247
undef($memory_6);
#line 248
$memory_3 = $memory_3 + $memory_4;
#line 248
goto label_5;
#line 248
label_3:
#line 248
undef($memory_3);
#line 248
undef($memory_4);
#line 248
undef($memory_5);
#line 249
undef($memory_0);
#line 249
undef($memory_2);
#line 249
return $memory_1;
#line 249
undef($memory_1);
#line 249
undef($memory_2);
#line 249
undef($memory_0);
#line 249
return;
}

sub interpreter::has_next_instruction($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;$memory_0 = $_[0];
#line 253
$memory_1 = $memory_0->{'top'};
#line 253
$memory_1 = $memory_1->{'next'};
#line 253
$memory_3 = $memory_0->{'func'};
#line 253
$memory_3 = $memory_3->{'commands'};
#line 253
$memory_2 = array::len($memory_3);
#line 253
undef($memory_3);
#line 253
$memory_1 = c_rt_lib::to_nl($memory_1 < $memory_2);
#line 253
undef($memory_2);
#line 253
undef($memory_0);
#line 253
return $memory_1;
#line 253
undef($memory_1);
#line 253
undef($memory_0);
#line 253
return;
}

sub interpreter_priv::get_variables($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;$memory_0 = $_[0];
#line 258
$memory_1 = [];
#line 259
$memory_2 = $memory_0->{'code_vars'};
#line 259
$memory_5 = c_rt_lib::init_iter($memory_2);
#line 259
label_3:
#line 259
$memory_3 = c_rt_lib::is_end_hash($memory_5);
#line 259
if (c_rt_lib::check_true($memory_3)) {goto label_1;}
#line 259
$memory_3 = c_rt_lib::get_key_iter($memory_5);
#line 259
$memory_4 = c_rt_lib::hash_get_value($memory_2, $memory_3);
#line 260
$memory_6 = $memory_0->{'vars'};
#line 260
$memory_6 = $memory_6->[$memory_4];
#line 261
$memory_7 = {name => $memory_3,value => $memory_6,};
#line 261
array::push($memory_1, $memory_7);
#line 261
undef($memory_7);
#line 261
undef($memory_6);
#line 262
$memory_5 = c_rt_lib::next_iter($memory_5);
#line 262
goto label_3;
#line 262
label_1:
#line 262
undef($memory_2);
#line 262
undef($memory_3);
#line 262
undef($memory_4);
#line 262
undef($memory_5);
#line 263
undef($memory_0);
#line 263
return $memory_1;
#line 263
undef($memory_1);
#line 263
undef($memory_0);
#line 263
return;
}

sub interpreter_priv::get_instruction_nr($) {
my $memory_0;my $memory_1;$memory_0 = $_[0];
#line 267
$memory_1 = interpreter_priv::get_command($memory_0);
#line 267
$memory_1 = $memory_1->{'debug'};
#line 267
$memory_1 = $memory_1->{'instruction_nr'};
#line 267
undef($memory_0);
#line 267
return $memory_1;
#line 267
undef($memory_1);
#line 267
undef($memory_0);
#line 267
return;
}

sub interpreter_priv::is_hidden($) {
my $memory_0;my $memory_1;$memory_0 = $_[0];
#line 271
$memory_1 = $memory_0->{'cmd'};
#line 271
$memory_1 = c_rt_lib::ov_is($memory_1, 'prt_lbl');
#line 271
if (c_rt_lib::check_true($memory_1)) {goto label_1;}
#line 271
$memory_1 = $memory_0->{'cmd'};
#line 271
$memory_1 = c_rt_lib::ov_is($memory_1, 'clear');
#line 271
label_1:
#line 271
undef($memory_0);
#line 271
return $memory_1;
#line 271
undef($memory_1);
#line 271
undef($memory_0);
#line 271
return;
}

sub interpreter::execute_full_instruction($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);
#line 275
$memory_1 = $memory_0->{'rstate'};
#line 275
$memory_1 = c_rt_lib::ov_is($memory_1, 'running');
#line 275
$memory_1 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_1));
#line 275
$memory_1 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_1));
#line 275
if (c_rt_lib::check_true($memory_1)) {goto label_2;}
#line 275
undef($memory_1);
#line 275
$_[0] = $memory_0;return;
#line 275
goto label_2;
#line 275
label_2:
#line 275
undef($memory_1);
#line 276
$memory_1 = interpreter_priv::get_instruction_nr($memory_0);
#line 276
$memory_2 = $memory_1;
#line 276
 if (c_rt_lib::get_hashcount($memory_0) > 1) {$memory_0 = {%{$memory_0}};}$memory_0->{'instruction_nr'} = $memory_2;
#line 276
undef($memory_1);
#line 276
undef($memory_2);
#line 277
label_4:
#line 278
$memory_1 = interpreter_priv::get_command($memory_0);
#line 279
$memory_2 = interpreter_priv::is_hidden($memory_1);
#line 279
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 279
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 279
if (c_rt_lib::check_true($memory_2)) {goto label_6;}
#line 280
$memory_3 = $memory_0->{'instruction_nr'};
#line 280
$memory_4 = $memory_1->{'debug'};
#line 280
$memory_4 = $memory_4->{'instruction_nr'};
#line 280
$memory_3 = c_rt_lib::to_nl($memory_3 == $memory_4);
#line 280
undef($memory_4);
#line 280
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 280
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 280
if (c_rt_lib::check_true($memory_3)) {goto label_8;}
#line 280
undef($memory_1);
#line 280
undef($memory_2);
#line 280
undef($memory_3);
#line 280
goto label_3;
#line 280
goto label_8;
#line 280
label_8:
#line 280
undef($memory_3);
#line 281
goto label_6;
#line 281
label_6:
#line 281
undef($memory_2);
#line 282
interpreter_priv::step($memory_0);
#line 283
$memory_2 = $memory_0->{'rstate'};
#line 283
$memory_2 = c_rt_lib::ov_is($memory_2, 'error');
#line 283
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 283
if (c_rt_lib::check_true($memory_2)) {goto label_10;}
#line 283
undef($memory_1);
#line 283
undef($memory_2);
#line 283
goto label_3;
#line 283
goto label_10;
#line 283
label_10:
#line 283
undef($memory_2);
#line 284
$memory_2 = interpreter::has_next_instruction($memory_0);
#line 284
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 284
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 284
if (c_rt_lib::check_true($memory_2)) {goto label_12;}
#line 284
undef($memory_1);
#line 284
undef($memory_2);
#line 284
goto label_3;
#line 284
goto label_12;
#line 284
label_12:
#line 284
undef($memory_2);
#line 284
undef($memory_1);
#line 277
goto label_4;
#line 277
label_3:
#line 277
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub interpreter_priv::handle_new_declarations($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);
#line 289
$memory_1 = interpreter::has_next_instruction($memory_0);
#line 289
$memory_1 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_1));
#line 289
$memory_1 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_1));
#line 289
if (c_rt_lib::check_true($memory_1)) {goto label_2;}
#line 289
undef($memory_1);
#line 289
$_[0] = $memory_0;return;
#line 289
goto label_2;
#line 289
label_2:
#line 289
undef($memory_1);
#line 290
$memory_1 = interpreter_priv::get_command($memory_0);
#line 291
$memory_2 = $memory_1->{'debug'};
#line 291
$memory_2 = $memory_2->{'declarations'};
#line 291
$memory_5 = c_rt_lib::init_iter($memory_2);
#line 291
label_5:
#line 291
$memory_3 = c_rt_lib::is_end_hash($memory_5);
#line 291
if (c_rt_lib::check_true($memory_3)) {goto label_3;}
#line 291
$memory_3 = c_rt_lib::get_key_iter($memory_5);
#line 291
$memory_4 = c_rt_lib::hash_get_value($memory_2, $memory_3);
#line 292
$memory_6 = "top";
#line 292
$memory_6 = c_rt_lib::get_ref_hash($memory_0, $memory_6);
#line 292
$memory_7 = "code_vars";
#line 292
$memory_7 = c_rt_lib::get_ref_hash($memory_6, $memory_7);
#line 292
hash::set_value($memory_7, $memory_3, $memory_4);
#line 292
$memory_8 = "code_vars";
#line 292
c_rt_lib::set_ref_hash($memory_6, $memory_8, $memory_7);
#line 292
$memory_8 = "top";
#line 292
c_rt_lib::set_ref_hash($memory_0, $memory_8, $memory_6);
#line 292
undef($memory_8);
#line 292
undef($memory_6);
#line 292
undef($memory_7);
#line 293
$memory_5 = c_rt_lib::next_iter($memory_5);
#line 293
goto label_5;
#line 293
label_3:
#line 293
undef($memory_2);
#line 293
undef($memory_3);
#line 293
undef($memory_4);
#line 293
undef($memory_5);
#line 293
undef($memory_1);
#line 293
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub interpreter_priv::step($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;my $memory_13;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);
#line 297
$memory_1 = interpreter::has_next_instruction($memory_0);
#line 297
$memory_1 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_1));
#line 297
$memory_1 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_1));
#line 297
if (c_rt_lib::check_true($memory_1)) {goto label_2;}
#line 297
$memory_2 = [];
#line 297
die(dfile::ssave($memory_2));
#line 297
goto label_2;
#line 297
label_2:
#line 297
undef($memory_1);
#line 297
undef($memory_2);
#line 298
$memory_1 = interpreter_priv::get_command($memory_0);
#line 299
$memory_2 = $memory_1->{'cmd'};
#line 300
$memory_3 = "top";
#line 300
$memory_3 = c_rt_lib::get_ref_hash($memory_0, $memory_3);
#line 300
$memory_4 = "next";
#line 300
$memory_4 = c_rt_lib::get_ref_hash($memory_3, $memory_4);
#line 300
$memory_5 = 1;
#line 300
$memory_4 = $memory_4 + $memory_5;
#line 300
$memory_6 = "next";
#line 300
c_rt_lib::set_ref_hash($memory_3, $memory_6, $memory_4);
#line 300
$memory_6 = "top";
#line 300
c_rt_lib::set_ref_hash($memory_0, $memory_6, $memory_3);
#line 300
undef($memory_6);
#line 300
undef($memory_3);
#line 300
undef($memory_4);
#line 300
undef($memory_5);
#line 301
$memory_3 = interpreter_priv::check_command($memory_0, $memory_2);
#line 301
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 301
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 301
if (c_rt_lib::check_true($memory_3)) {goto label_4;}
#line 302
$memory_4 = "incorrect command";
#line 302
$memory_4 = c_rt_lib::ov_mk_arg('error', $memory_4);
#line 302
$memory_5 = $memory_4;
#line 302
 if (c_rt_lib::get_hashcount($memory_0) > 1) {$memory_0 = {%{$memory_0}};}$memory_0->{'rstate'} = $memory_5;
#line 302
undef($memory_4);
#line 302
undef($memory_5);
#line 303
undef($memory_1);
#line 303
undef($memory_2);
#line 303
undef($memory_3);
#line 303
$_[0] = $memory_0;return;
#line 304
goto label_4;
#line 304
label_4:
#line 304
undef($memory_3);
#line 305
$memory_3 = c_rt_lib::ov_is($memory_2, 'arr_decl');
#line 305
if (c_rt_lib::check_true($memory_3)) {goto label_6;}
#line 310
$memory_3 = c_rt_lib::ov_is($memory_2, 'hash_decl');
#line 310
if (c_rt_lib::check_true($memory_3)) {goto label_7;}
#line 317
$memory_3 = c_rt_lib::ov_is($memory_2, 'call');
#line 317
if (c_rt_lib::check_true($memory_3)) {goto label_8;}
#line 334
$memory_3 = c_rt_lib::ov_is($memory_2, 'func');
#line 334
if (c_rt_lib::check_true($memory_3)) {goto label_9;}
#line 336
$memory_3 = c_rt_lib::ov_is($memory_2, 'una_op');
#line 336
if (c_rt_lib::check_true($memory_3)) {goto label_10;}
#line 340
$memory_3 = c_rt_lib::ov_is($memory_2, 'bin_op');
#line 340
if (c_rt_lib::check_true($memory_3)) {goto label_11;}
#line 345
$memory_3 = c_rt_lib::ov_is($memory_2, 'ov_is');
#line 345
if (c_rt_lib::check_true($memory_3)) {goto label_12;}
#line 347
$memory_3 = c_rt_lib::ov_is($memory_2, 'ov_as');
#line 347
if (c_rt_lib::check_true($memory_3)) {goto label_13;}
#line 349
$memory_3 = c_rt_lib::ov_is($memory_2, 'return');
#line 349
if (c_rt_lib::check_true($memory_3)) {goto label_14;}
#line 351
$memory_3 = c_rt_lib::ov_is($memory_2, 'die');
#line 351
if (c_rt_lib::check_true($memory_3)) {goto label_15;}
#line 353
$memory_3 = c_rt_lib::ov_is($memory_2, 'move');
#line 353
if (c_rt_lib::check_true($memory_3)) {goto label_16;}
#line 355
$memory_3 = c_rt_lib::ov_is($memory_2, 'load_const');
#line 355
if (c_rt_lib::check_true($memory_3)) {goto label_17;}
#line 357
$memory_3 = c_rt_lib::ov_is($memory_2, 'get_frm_idx');
#line 357
if (c_rt_lib::check_true($memory_3)) {goto label_18;}
#line 361
$memory_3 = c_rt_lib::ov_is($memory_2, 'set_at_idx');
#line 361
if (c_rt_lib::check_true($memory_3)) {goto label_19;}
#line 367
$memory_3 = c_rt_lib::ov_is($memory_2, 'get_val');
#line 367
if (c_rt_lib::check_true($memory_3)) {goto label_20;}
#line 370
$memory_3 = c_rt_lib::ov_is($memory_2, 'set_val');
#line 370
if (c_rt_lib::check_true($memory_3)) {goto label_21;}
#line 375
$memory_3 = c_rt_lib::ov_is($memory_2, 'ov_mk');
#line 375
if (c_rt_lib::check_true($memory_3)) {goto label_22;}
#line 383
$memory_3 = c_rt_lib::ov_is($memory_2, 'prt_lbl');
#line 383
if (c_rt_lib::check_true($memory_3)) {goto label_23;}
#line 384
$memory_3 = c_rt_lib::ov_is($memory_2, 'if_goto');
#line 384
if (c_rt_lib::check_true($memory_3)) {goto label_24;}
#line 386
$memory_3 = c_rt_lib::ov_is($memory_2, 'goto');
#line 386
if (c_rt_lib::check_true($memory_3)) {goto label_25;}
#line 388
$memory_3 = c_rt_lib::ov_is($memory_2, 'clear');
#line 388
if (c_rt_lib::check_true($memory_3)) {goto label_26;}
#line 388
$memory_3 = "NOMATCHALERT";
#line 388
$memory_3 = [$memory_3,$memory_2];
#line 388
die(dfile::ssave($memory_3));
#line 305
label_6:
#line 305
$memory_4 = c_rt_lib::ov_as($memory_2, 'arr_decl');
#line 306
$memory_5 = [];
#line 307
$memory_6 = $memory_4->{'src'};
#line 307
$memory_8 = 0;
#line 307
$memory_9 = 1;
#line 307
$memory_10 = c_rt_lib::array_len($memory_6);
#line 307
label_29:
#line 307
$memory_11 = c_rt_lib::to_nl($memory_8 >= $memory_10);
#line 307
if (c_rt_lib::check_true($memory_11)) {goto label_27;}
#line 307
$memory_7 = $memory_6->[$memory_8];
#line 307
$memory_12 = $memory_0->{'top'};
#line 307
$memory_12 = $memory_12->{'vars'};
#line 307
$memory_12 = $memory_12->[$memory_7];
#line 307
array::push($memory_5, $memory_12);
#line 307
undef($memory_12);
#line 307
$memory_8 = $memory_8 + $memory_9;
#line 307
goto label_29;
#line 307
label_27:
#line 307
undef($memory_6);
#line 307
undef($memory_7);
#line 307
undef($memory_8);
#line 307
undef($memory_9);
#line 307
undef($memory_10);
#line 307
undef($memory_11);
#line 308
$memory_6 = $memory_4->{'dest'};
#line 308
$memory_7 = "";
#line 308
$memory_6 = c_rt_lib::to_nl($memory_6 eq $memory_7);
#line 308
undef($memory_7);
#line 308
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 308
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 308
if (c_rt_lib::check_true($memory_6)) {goto label_31;}
#line 308
$memory_7 = "top";
#line 308
$memory_7 = c_rt_lib::get_ref_hash($memory_0, $memory_7);
#line 308
$memory_8 = "vars";
#line 308
$memory_8 = c_rt_lib::get_ref_hash($memory_7, $memory_8);
#line 308
$memory_10 = $memory_4->{'dest'};
#line 308
$memory_9 = $memory_5;
#line 308
 if (c_rt_lib::get_arrcount($memory_8) > 1) {$memory_8 = [@{$memory_8}];}$memory_8->[$memory_10] = $memory_9;
#line 308
$memory_11 = "vars";
#line 308
c_rt_lib::set_ref_hash($memory_7, $memory_11, $memory_8);
#line 308
$memory_11 = "top";
#line 308
c_rt_lib::set_ref_hash($memory_0, $memory_11, $memory_7);
#line 308
undef($memory_11);
#line 308
undef($memory_7);
#line 308
undef($memory_8);
#line 308
undef($memory_9);
#line 308
undef($memory_10);
#line 308
goto label_31;
#line 308
label_31:
#line 308
undef($memory_6);
#line 308
undef($memory_5);
#line 308
undef($memory_4);
#line 310
goto label_5;
#line 310
label_7:
#line 310
$memory_4 = c_rt_lib::ov_as($memory_2, 'hash_decl');
#line 311
$memory_5 = {};
#line 312
$memory_6 = $memory_4->{'src'};
#line 312
$memory_8 = 0;
#line 312
$memory_9 = 1;
#line 312
$memory_10 = c_rt_lib::array_len($memory_6);
#line 312
label_34:
#line 312
$memory_11 = c_rt_lib::to_nl($memory_8 >= $memory_10);
#line 312
if (c_rt_lib::check_true($memory_11)) {goto label_32;}
#line 312
$memory_7 = $memory_6->[$memory_8];
#line 313
$memory_12 = $memory_0->{'top'};
#line 313
$memory_12 = $memory_12->{'vars'};
#line 313
$memory_13 = $memory_7->{'val'};
#line 313
$memory_12 = $memory_12->[$memory_13];
#line 313
undef($memory_13);
#line 314
$memory_13 = $memory_7->{'key'};
#line 314
hash::set_value($memory_5, $memory_13, $memory_12);
#line 314
undef($memory_13);
#line 314
undef($memory_12);
#line 315
$memory_8 = $memory_8 + $memory_9;
#line 315
goto label_34;
#line 315
label_32:
#line 315
undef($memory_6);
#line 315
undef($memory_7);
#line 315
undef($memory_8);
#line 315
undef($memory_9);
#line 315
undef($memory_10);
#line 315
undef($memory_11);
#line 316
$memory_6 = $memory_4->{'dest'};
#line 316
$memory_7 = "";
#line 316
$memory_6 = c_rt_lib::to_nl($memory_6 eq $memory_7);
#line 316
undef($memory_7);
#line 316
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 316
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 316
if (c_rt_lib::check_true($memory_6)) {goto label_36;}
#line 316
$memory_7 = "top";
#line 316
$memory_7 = c_rt_lib::get_ref_hash($memory_0, $memory_7);
#line 316
$memory_8 = "vars";
#line 316
$memory_8 = c_rt_lib::get_ref_hash($memory_7, $memory_8);
#line 316
$memory_10 = $memory_4->{'dest'};
#line 316
$memory_9 = $memory_5;
#line 316
 if (c_rt_lib::get_arrcount($memory_8) > 1) {$memory_8 = [@{$memory_8}];}$memory_8->[$memory_10] = $memory_9;
#line 316
$memory_11 = "vars";
#line 316
c_rt_lib::set_ref_hash($memory_7, $memory_11, $memory_8);
#line 316
$memory_11 = "top";
#line 316
c_rt_lib::set_ref_hash($memory_0, $memory_11, $memory_7);
#line 316
undef($memory_11);
#line 316
undef($memory_7);
#line 316
undef($memory_8);
#line 316
undef($memory_9);
#line 316
undef($memory_10);
#line 316
goto label_36;
#line 316
label_36:
#line 316
undef($memory_6);
#line 316
undef($memory_5);
#line 316
undef($memory_4);
#line 317
goto label_5;
#line 317
label_8:
#line 317
$memory_4 = c_rt_lib::ov_as($memory_2, 'call');
#line 319
$memory_6 = $memory_4->{'mod'};
#line 319
$memory_7 = "";
#line 319
$memory_6 = c_rt_lib::to_nl($memory_6 eq $memory_7);
#line 319
undef($memory_7);
#line 319
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 319
if (c_rt_lib::check_true($memory_6)) {goto label_38;}
#line 320
$memory_7 = $memory_0->{'top'};
#line 320
$memory_7 = $memory_7->{'module_name'};
#line 320
$memory_8 = "::priv::";
#line 320
$memory_7 = $memory_7 . $memory_8;
#line 320
undef($memory_8);
#line 320
$memory_8 = $memory_4->{'fun_name'};
#line 320
$memory_7 = $memory_7 . $memory_8;
#line 320
undef($memory_8);
#line 320
$memory_5 = $memory_7;
#line 320
undef($memory_7);
#line 321
goto label_37;
#line 321
label_38:
#line 322
$memory_7 = $memory_4->{'mod'};
#line 322
$memory_8 = "::";
#line 322
$memory_7 = $memory_7 . $memory_8;
#line 322
undef($memory_8);
#line 322
$memory_8 = $memory_4->{'fun_name'};
#line 322
$memory_7 = $memory_7 . $memory_8;
#line 322
undef($memory_8);
#line 322
$memory_5 = $memory_7;
#line 322
undef($memory_7);
#line 323
goto label_37;
#line 323
label_37:
#line 323
undef($memory_6);
#line 324
$memory_7 = $memory_0->{'compiler_functions'};
#line 324
$memory_6 = hash::has_key($memory_7, $memory_5);
#line 324
undef($memory_7);
#line 324
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 324
if (c_rt_lib::check_true($memory_6)) {goto label_40;}
#line 325
interpreter_priv::handle_compiler_call($memory_4, $memory_5, $memory_0);
#line 326
goto label_39;
#line 326
label_40:
#line 326
$memory_7 = $memory_0->{'known_exec_func'};
#line 326
$memory_6 = hash::has_key($memory_7, $memory_5);
#line 326
undef($memory_7);
#line 326
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 326
if (c_rt_lib::check_true($memory_6)) {goto label_41;}
#line 327
interpreter_priv::handle_extern_call($memory_4, $memory_0);
#line 328
goto label_39;
#line 328
label_41:
#line 328
$memory_7 = $memory_0->{'functions'};
#line 328
$memory_6 = hash::has_key($memory_7, $memory_5);
#line 328
undef($memory_7);
#line 328
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 328
if (c_rt_lib::check_true($memory_6)) {goto label_42;}
#line 329
interpreter_priv::handle_normal_call($memory_4, $memory_5, $memory_0);
#line 330
goto label_39;
#line 330
label_42:
#line 331
$memory_7 = "unknown function call: ";
#line 331
$memory_7 = $memory_7 . $memory_5;
#line 331
$memory_7 = c_rt_lib::ov_mk_arg('error', $memory_7);
#line 331
$memory_8 = $memory_7;
#line 331
 if (c_rt_lib::get_hashcount($memory_0) > 1) {$memory_0 = {%{$memory_0}};}$memory_0->{'rstate'} = $memory_8;
#line 331
undef($memory_7);
#line 331
undef($memory_8);
#line 332
goto label_39;
#line 332
label_39:
#line 332
undef($memory_6);
#line 332
undef($memory_5);
#line 332
undef($memory_4);
#line 334
goto label_5;
#line 334
label_9:
#line 334
$memory_4 = c_rt_lib::ov_as($memory_2, 'func');
#line 335
$memory_5 = $memory_4->{'dest'};
#line 335
$memory_6 = "";
#line 335
$memory_5 = c_rt_lib::to_nl($memory_5 eq $memory_6);
#line 335
undef($memory_6);
#line 335
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 335
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 335
if (c_rt_lib::check_true($memory_5)) {goto label_44;}
#line 335
$memory_7 = $memory_4->{'module'};
#line 335
$memory_8 = $memory_4->{'name'};
#line 335
$memory_6 = {module => $memory_7,name => $memory_8,};
#line 335
undef($memory_7);
#line 335
undef($memory_8);
#line 335
$memory_7 = "top";
#line 335
$memory_7 = c_rt_lib::get_ref_hash($memory_0, $memory_7);
#line 335
$memory_8 = "vars";
#line 335
$memory_8 = c_rt_lib::get_ref_hash($memory_7, $memory_8);
#line 335
$memory_10 = $memory_4->{'dest'};
#line 335
$memory_9 = $memory_6;
#line 335
 if (c_rt_lib::get_arrcount($memory_8) > 1) {$memory_8 = [@{$memory_8}];}$memory_8->[$memory_10] = $memory_9;
#line 335
$memory_11 = "vars";
#line 335
c_rt_lib::set_ref_hash($memory_7, $memory_11, $memory_8);
#line 335
$memory_11 = "top";
#line 335
c_rt_lib::set_ref_hash($memory_0, $memory_11, $memory_7);
#line 335
undef($memory_11);
#line 335
undef($memory_6);
#line 335
undef($memory_7);
#line 335
undef($memory_8);
#line 335
undef($memory_9);
#line 335
undef($memory_10);
#line 335
goto label_44;
#line 335
label_44:
#line 335
undef($memory_5);
#line 335
undef($memory_4);
#line 336
goto label_5;
#line 336
label_10:
#line 336
$memory_4 = c_rt_lib::ov_as($memory_2, 'una_op');
#line 337
$memory_5 = $memory_0->{'top'};
#line 337
$memory_5 = $memory_5->{'vars'};
#line 337
$memory_6 = $memory_4->{'src'};
#line 337
$memory_5 = $memory_5->[$memory_6];
#line 337
undef($memory_6);
#line 338
$memory_7 = $memory_4->{'op'};
#line 338
$memory_6 = interpreter_priv::execute_una_op($memory_5, $memory_7);
#line 338
undef($memory_7);
#line 339
$memory_7 = $memory_4->{'dest'};
#line 339
$memory_8 = "";
#line 339
$memory_7 = c_rt_lib::to_nl($memory_7 eq $memory_8);
#line 339
undef($memory_8);
#line 339
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 339
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 339
if (c_rt_lib::check_true($memory_7)) {goto label_46;}
#line 339
$memory_8 = "top";
#line 339
$memory_8 = c_rt_lib::get_ref_hash($memory_0, $memory_8);
#line 339
$memory_9 = "vars";
#line 339
$memory_9 = c_rt_lib::get_ref_hash($memory_8, $memory_9);
#line 339
$memory_11 = $memory_4->{'dest'};
#line 339
$memory_10 = $memory_6;
#line 339
 if (c_rt_lib::get_arrcount($memory_9) > 1) {$memory_9 = [@{$memory_9}];}$memory_9->[$memory_11] = $memory_10;
#line 339
$memory_12 = "vars";
#line 339
c_rt_lib::set_ref_hash($memory_8, $memory_12, $memory_9);
#line 339
$memory_12 = "top";
#line 339
c_rt_lib::set_ref_hash($memory_0, $memory_12, $memory_8);
#line 339
undef($memory_12);
#line 339
undef($memory_8);
#line 339
undef($memory_9);
#line 339
undef($memory_10);
#line 339
undef($memory_11);
#line 339
goto label_46;
#line 339
label_46:
#line 339
undef($memory_7);
#line 339
undef($memory_5);
#line 339
undef($memory_6);
#line 339
undef($memory_4);
#line 340
goto label_5;
#line 340
label_11:
#line 340
$memory_4 = c_rt_lib::ov_as($memory_2, 'bin_op');
#line 341
$memory_5 = $memory_0->{'top'};
#line 341
$memory_5 = $memory_5->{'vars'};
#line 341
$memory_6 = $memory_4->{'left'};
#line 341
$memory_5 = $memory_5->[$memory_6];
#line 341
undef($memory_6);
#line 342
$memory_6 = $memory_0->{'top'};
#line 342
$memory_6 = $memory_6->{'vars'};
#line 342
$memory_7 = $memory_4->{'right'};
#line 342
$memory_6 = $memory_6->[$memory_7];
#line 342
undef($memory_7);
#line 343
$memory_8 = $memory_4->{'op'};
#line 343
$memory_7 = interpreter_priv::execute_bin_op($memory_5, $memory_6, $memory_8);
#line 343
undef($memory_8);
#line 344
$memory_8 = $memory_4->{'dest'};
#line 344
$memory_9 = "";
#line 344
$memory_8 = c_rt_lib::to_nl($memory_8 eq $memory_9);
#line 344
undef($memory_9);
#line 344
$memory_8 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 344
$memory_8 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 344
if (c_rt_lib::check_true($memory_8)) {goto label_48;}
#line 344
$memory_9 = "top";
#line 344
$memory_9 = c_rt_lib::get_ref_hash($memory_0, $memory_9);
#line 344
$memory_10 = "vars";
#line 344
$memory_10 = c_rt_lib::get_ref_hash($memory_9, $memory_10);
#line 344
$memory_12 = $memory_4->{'dest'};
#line 344
$memory_11 = $memory_7;
#line 344
 if (c_rt_lib::get_arrcount($memory_10) > 1) {$memory_10 = [@{$memory_10}];}$memory_10->[$memory_12] = $memory_11;
#line 344
$memory_13 = "vars";
#line 344
c_rt_lib::set_ref_hash($memory_9, $memory_13, $memory_10);
#line 344
$memory_13 = "top";
#line 344
c_rt_lib::set_ref_hash($memory_0, $memory_13, $memory_9);
#line 344
undef($memory_13);
#line 344
undef($memory_9);
#line 344
undef($memory_10);
#line 344
undef($memory_11);
#line 344
undef($memory_12);
#line 344
goto label_48;
#line 344
label_48:
#line 344
undef($memory_8);
#line 344
undef($memory_5);
#line 344
undef($memory_6);
#line 344
undef($memory_7);
#line 344
undef($memory_4);
#line 345
goto label_5;
#line 345
label_12:
#line 345
$memory_4 = c_rt_lib::ov_as($memory_2, 'ov_is');
#line 346
$memory_5 = $memory_4->{'dest'};
#line 346
$memory_6 = "";
#line 346
$memory_5 = c_rt_lib::to_nl($memory_5 eq $memory_6);
#line 346
undef($memory_6);
#line 346
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 346
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 346
if (c_rt_lib::check_true($memory_5)) {goto label_50;}
#line 346
$memory_7 = $memory_0->{'top'};
#line 346
$memory_7 = $memory_7->{'vars'};
#line 346
$memory_8 = $memory_4->{'src'};
#line 346
$memory_7 = $memory_7->[$memory_8];
#line 346
undef($memory_8);
#line 346
$memory_8 = $memory_4->{'type'};
#line 346
$memory_6 = ov::is($memory_7, $memory_8);
#line 346
undef($memory_8);
#line 346
undef($memory_7);
#line 346
$memory_7 = "top";
#line 346
$memory_7 = c_rt_lib::get_ref_hash($memory_0, $memory_7);
#line 346
$memory_8 = "vars";
#line 346
$memory_8 = c_rt_lib::get_ref_hash($memory_7, $memory_8);
#line 346
$memory_10 = $memory_4->{'dest'};
#line 346
$memory_9 = $memory_6;
#line 346
 if (c_rt_lib::get_arrcount($memory_8) > 1) {$memory_8 = [@{$memory_8}];}$memory_8->[$memory_10] = $memory_9;
#line 346
$memory_11 = "vars";
#line 346
c_rt_lib::set_ref_hash($memory_7, $memory_11, $memory_8);
#line 346
$memory_11 = "top";
#line 346
c_rt_lib::set_ref_hash($memory_0, $memory_11, $memory_7);
#line 346
undef($memory_11);
#line 346
undef($memory_6);
#line 346
undef($memory_7);
#line 346
undef($memory_8);
#line 346
undef($memory_9);
#line 346
undef($memory_10);
#line 346
goto label_50;
#line 346
label_50:
#line 346
undef($memory_5);
#line 346
undef($memory_4);
#line 347
goto label_5;
#line 347
label_13:
#line 347
$memory_4 = c_rt_lib::ov_as($memory_2, 'ov_as');
#line 348
$memory_5 = $memory_4->{'dest'};
#line 348
$memory_6 = "";
#line 348
$memory_5 = c_rt_lib::to_nl($memory_5 eq $memory_6);
#line 348
undef($memory_6);
#line 348
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 348
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 348
if (c_rt_lib::check_true($memory_5)) {goto label_52;}
#line 348
$memory_7 = $memory_0->{'top'};
#line 348
$memory_7 = $memory_7->{'vars'};
#line 348
$memory_8 = $memory_4->{'src'};
#line 348
$memory_7 = $memory_7->[$memory_8];
#line 348
undef($memory_8);
#line 348
$memory_8 = $memory_4->{'type'};
#line 348
$memory_6 = ov::as($memory_7, $memory_8);
#line 348
undef($memory_8);
#line 348
undef($memory_7);
#line 348
$memory_7 = "top";
#line 348
$memory_7 = c_rt_lib::get_ref_hash($memory_0, $memory_7);
#line 348
$memory_8 = "vars";
#line 348
$memory_8 = c_rt_lib::get_ref_hash($memory_7, $memory_8);
#line 348
$memory_10 = $memory_4->{'dest'};
#line 348
$memory_9 = $memory_6;
#line 348
 if (c_rt_lib::get_arrcount($memory_8) > 1) {$memory_8 = [@{$memory_8}];}$memory_8->[$memory_10] = $memory_9;
#line 348
$memory_11 = "vars";
#line 348
c_rt_lib::set_ref_hash($memory_7, $memory_11, $memory_8);
#line 348
$memory_11 = "top";
#line 348
c_rt_lib::set_ref_hash($memory_0, $memory_11, $memory_7);
#line 348
undef($memory_11);
#line 348
undef($memory_6);
#line 348
undef($memory_7);
#line 348
undef($memory_8);
#line 348
undef($memory_9);
#line 348
undef($memory_10);
#line 348
goto label_52;
#line 348
label_52:
#line 348
undef($memory_5);
#line 348
undef($memory_4);
#line 349
goto label_5;
#line 349
label_14:
#line 349
$memory_4 = c_rt_lib::ov_as($memory_2, 'return');
#line 350
interpreter_priv::handle_return($memory_4, $memory_0);
#line 350
undef($memory_4);
#line 351
goto label_5;
#line 351
label_15:
#line 351
$memory_4 = c_rt_lib::ov_as($memory_2, 'die');
#line 352
$memory_5 = "die";
#line 352
$memory_7 = $memory_0->{'top'};
#line 352
$memory_7 = $memory_7->{'vars'};
#line 352
$memory_7 = $memory_7->[$memory_4];
#line 352
$memory_6 = dfile::ssave($memory_7);
#line 352
undef($memory_7);
#line 352
$memory_5 = $memory_5 . $memory_6;
#line 352
undef($memory_6);
#line 352
$memory_5 = c_rt_lib::ov_mk_arg('error', $memory_5);
#line 352
$memory_6 = $memory_5;
#line 352
 if (c_rt_lib::get_hashcount($memory_0) > 1) {$memory_0 = {%{$memory_0}};}$memory_0->{'rstate'} = $memory_6;
#line 352
undef($memory_5);
#line 352
undef($memory_6);
#line 352
undef($memory_4);
#line 353
goto label_5;
#line 353
label_16:
#line 353
$memory_4 = c_rt_lib::ov_as($memory_2, 'move');
#line 354
$memory_5 = $memory_4->{'dest'};
#line 354
$memory_6 = "";
#line 354
$memory_5 = c_rt_lib::to_nl($memory_5 eq $memory_6);
#line 354
undef($memory_6);
#line 354
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 354
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 354
if (c_rt_lib::check_true($memory_5)) {goto label_54;}
#line 354
$memory_6 = $memory_0->{'top'};
#line 354
$memory_6 = $memory_6->{'vars'};
#line 354
$memory_7 = $memory_4->{'src'};
#line 354
$memory_6 = $memory_6->[$memory_7];
#line 354
undef($memory_7);
#line 354
$memory_7 = "top";
#line 354
$memory_7 = c_rt_lib::get_ref_hash($memory_0, $memory_7);
#line 354
$memory_8 = "vars";
#line 354
$memory_8 = c_rt_lib::get_ref_hash($memory_7, $memory_8);
#line 354
$memory_10 = $memory_4->{'dest'};
#line 354
$memory_9 = $memory_6;
#line 354
 if (c_rt_lib::get_arrcount($memory_8) > 1) {$memory_8 = [@{$memory_8}];}$memory_8->[$memory_10] = $memory_9;
#line 354
$memory_11 = "vars";
#line 354
c_rt_lib::set_ref_hash($memory_7, $memory_11, $memory_8);
#line 354
$memory_11 = "top";
#line 354
c_rt_lib::set_ref_hash($memory_0, $memory_11, $memory_7);
#line 354
undef($memory_11);
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
goto label_54;
#line 354
label_54:
#line 354
undef($memory_5);
#line 354
undef($memory_4);
#line 355
goto label_5;
#line 355
label_17:
#line 355
$memory_4 = c_rt_lib::ov_as($memory_2, 'load_const');
#line 356
$memory_5 = $memory_4->{'dest'};
#line 356
$memory_6 = "";
#line 356
$memory_5 = c_rt_lib::to_nl($memory_5 eq $memory_6);
#line 356
undef($memory_6);
#line 356
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 356
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 356
if (c_rt_lib::check_true($memory_5)) {goto label_56;}
#line 356
$memory_6 = $memory_4->{'val'};
#line 356
$memory_7 = "top";
#line 356
$memory_7 = c_rt_lib::get_ref_hash($memory_0, $memory_7);
#line 356
$memory_8 = "vars";
#line 356
$memory_8 = c_rt_lib::get_ref_hash($memory_7, $memory_8);
#line 356
$memory_10 = $memory_4->{'dest'};
#line 356
$memory_9 = $memory_6;
#line 356
 if (c_rt_lib::get_arrcount($memory_8) > 1) {$memory_8 = [@{$memory_8}];}$memory_8->[$memory_10] = $memory_9;
#line 356
$memory_11 = "vars";
#line 356
c_rt_lib::set_ref_hash($memory_7, $memory_11, $memory_8);
#line 356
$memory_11 = "top";
#line 356
c_rt_lib::set_ref_hash($memory_0, $memory_11, $memory_7);
#line 356
undef($memory_11);
#line 356
undef($memory_6);
#line 356
undef($memory_7);
#line 356
undef($memory_8);
#line 356
undef($memory_9);
#line 356
undef($memory_10);
#line 356
goto label_56;
#line 356
label_56:
#line 356
undef($memory_5);
#line 356
undef($memory_4);
#line 357
goto label_5;
#line 357
label_18:
#line 357
$memory_4 = c_rt_lib::ov_as($memory_2, 'get_frm_idx');
#line 358
$memory_5 = $memory_0->{'top'};
#line 358
$memory_5 = $memory_5->{'vars'};
#line 358
$memory_6 = $memory_4->{'src'};
#line 358
$memory_5 = $memory_5->[$memory_6];
#line 358
undef($memory_6);
#line 359
$memory_6 = $memory_0->{'top'};
#line 359
$memory_6 = $memory_6->{'vars'};
#line 359
$memory_7 = $memory_4->{'idx'};
#line 359
$memory_6 = $memory_6->[$memory_7];
#line 359
undef($memory_7);
#line 360
$memory_7 = $memory_4->{'dest'};
#line 360
$memory_8 = "";
#line 360
$memory_7 = c_rt_lib::to_nl($memory_7 eq $memory_8);
#line 360
undef($memory_8);
#line 360
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 360
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 360
if (c_rt_lib::check_true($memory_7)) {goto label_58;}
#line 360
$memory_8 = $memory_5->[$memory_6];
#line 360
$memory_9 = "top";
#line 360
$memory_9 = c_rt_lib::get_ref_hash($memory_0, $memory_9);
#line 360
$memory_10 = "vars";
#line 360
$memory_10 = c_rt_lib::get_ref_hash($memory_9, $memory_10);
#line 360
$memory_12 = $memory_4->{'dest'};
#line 360
$memory_11 = $memory_8;
#line 360
 if (c_rt_lib::get_arrcount($memory_10) > 1) {$memory_10 = [@{$memory_10}];}$memory_10->[$memory_12] = $memory_11;
#line 360
$memory_13 = "vars";
#line 360
c_rt_lib::set_ref_hash($memory_9, $memory_13, $memory_10);
#line 360
$memory_13 = "top";
#line 360
c_rt_lib::set_ref_hash($memory_0, $memory_13, $memory_9);
#line 360
undef($memory_13);
#line 360
undef($memory_8);
#line 360
undef($memory_9);
#line 360
undef($memory_10);
#line 360
undef($memory_11);
#line 360
undef($memory_12);
#line 360
goto label_58;
#line 360
label_58:
#line 360
undef($memory_7);
#line 360
undef($memory_5);
#line 360
undef($memory_6);
#line 360
undef($memory_4);
#line 361
goto label_5;
#line 361
label_19:
#line 361
$memory_4 = c_rt_lib::ov_as($memory_2, 'set_at_idx');
#line 362
$memory_5 = $memory_0->{'top'};
#line 362
$memory_5 = $memory_5->{'vars'};
#line 362
$memory_6 = $memory_4->{'src'};
#line 362
$memory_5 = $memory_5->[$memory_6];
#line 362
undef($memory_6);
#line 363
$memory_6 = $memory_0->{'top'};
#line 363
$memory_6 = $memory_6->{'vars'};
#line 363
$memory_7 = $memory_4->{'idx'};
#line 363
$memory_6 = $memory_6->[$memory_7];
#line 363
undef($memory_7);
#line 364
$memory_7 = $memory_0->{'top'};
#line 364
$memory_7 = $memory_7->{'vars'};
#line 364
$memory_8 = $memory_4->{'val'};
#line 364
$memory_7 = $memory_7->[$memory_8];
#line 364
undef($memory_8);
#line 365
$memory_8 = $memory_7;
#line 365
 if (c_rt_lib::get_arrcount($memory_5) > 1) {$memory_5 = [@{$memory_5}];}$memory_5->[$memory_6] = $memory_8;
#line 365
undef($memory_8);
#line 366
$memory_8 = "top";
#line 366
$memory_8 = c_rt_lib::get_ref_hash($memory_0, $memory_8);
#line 366
$memory_9 = "vars";
#line 366
$memory_9 = c_rt_lib::get_ref_hash($memory_8, $memory_9);
#line 366
$memory_11 = $memory_4->{'src'};
#line 366
$memory_10 = $memory_5;
#line 366
 if (c_rt_lib::get_arrcount($memory_9) > 1) {$memory_9 = [@{$memory_9}];}$memory_9->[$memory_11] = $memory_10;
#line 366
$memory_12 = "vars";
#line 366
c_rt_lib::set_ref_hash($memory_8, $memory_12, $memory_9);
#line 366
$memory_12 = "top";
#line 366
c_rt_lib::set_ref_hash($memory_0, $memory_12, $memory_8);
#line 366
undef($memory_12);
#line 366
undef($memory_8);
#line 366
undef($memory_9);
#line 366
undef($memory_10);
#line 366
undef($memory_11);
#line 366
undef($memory_5);
#line 366
undef($memory_6);
#line 366
undef($memory_7);
#line 366
undef($memory_4);
#line 367
goto label_5;
#line 367
label_20:
#line 367
$memory_4 = c_rt_lib::ov_as($memory_2, 'get_val');
#line 368
$memory_6 = $memory_0->{'top'};
#line 368
$memory_6 = $memory_6->{'vars'};
#line 368
$memory_7 = $memory_4->{'src'};
#line 368
$memory_6 = $memory_6->[$memory_7];
#line 368
undef($memory_7);
#line 368
$memory_7 = $memory_4->{'key'};
#line 368
$memory_5 = hash::get_value($memory_6, $memory_7);
#line 368
undef($memory_7);
#line 368
undef($memory_6);
#line 369
$memory_6 = $memory_4->{'dest'};
#line 369
$memory_7 = "";
#line 369
$memory_6 = c_rt_lib::to_nl($memory_6 eq $memory_7);
#line 369
undef($memory_7);
#line 369
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 369
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 369
if (c_rt_lib::check_true($memory_6)) {goto label_60;}
#line 369
$memory_7 = "top";
#line 369
$memory_7 = c_rt_lib::get_ref_hash($memory_0, $memory_7);
#line 369
$memory_8 = "vars";
#line 369
$memory_8 = c_rt_lib::get_ref_hash($memory_7, $memory_8);
#line 369
$memory_10 = $memory_4->{'dest'};
#line 369
$memory_9 = $memory_5;
#line 369
 if (c_rt_lib::get_arrcount($memory_8) > 1) {$memory_8 = [@{$memory_8}];}$memory_8->[$memory_10] = $memory_9;
#line 369
$memory_11 = "vars";
#line 369
c_rt_lib::set_ref_hash($memory_7, $memory_11, $memory_8);
#line 369
$memory_11 = "top";
#line 369
c_rt_lib::set_ref_hash($memory_0, $memory_11, $memory_7);
#line 369
undef($memory_11);
#line 369
undef($memory_7);
#line 369
undef($memory_8);
#line 369
undef($memory_9);
#line 369
undef($memory_10);
#line 369
goto label_60;
#line 369
label_60:
#line 369
undef($memory_6);
#line 369
undef($memory_5);
#line 369
undef($memory_4);
#line 370
goto label_5;
#line 370
label_21:
#line 370
$memory_4 = c_rt_lib::ov_as($memory_2, 'set_val');
#line 371
$memory_5 = $memory_0->{'top'};
#line 371
$memory_5 = $memory_5->{'vars'};
#line 371
$memory_6 = $memory_4->{'src'};
#line 371
$memory_5 = $memory_5->[$memory_6];
#line 371
undef($memory_6);
#line 372
$memory_6 = $memory_0->{'top'};
#line 372
$memory_6 = $memory_6->{'vars'};
#line 372
$memory_7 = $memory_4->{'val'};
#line 372
$memory_6 = $memory_6->[$memory_7];
#line 372
undef($memory_7);
#line 373
$memory_7 = $memory_4->{'key'};
#line 373
hash::set_value($memory_5, $memory_7, $memory_6);
#line 373
undef($memory_7);
#line 374
$memory_7 = "top";
#line 374
$memory_7 = c_rt_lib::get_ref_hash($memory_0, $memory_7);
#line 374
$memory_8 = "vars";
#line 374
$memory_8 = c_rt_lib::get_ref_hash($memory_7, $memory_8);
#line 374
$memory_10 = $memory_4->{'src'};
#line 374
$memory_9 = $memory_5;
#line 374
 if (c_rt_lib::get_arrcount($memory_8) > 1) {$memory_8 = [@{$memory_8}];}$memory_8->[$memory_10] = $memory_9;
#line 374
$memory_11 = "vars";
#line 374
c_rt_lib::set_ref_hash($memory_7, $memory_11, $memory_8);
#line 374
$memory_11 = "top";
#line 374
c_rt_lib::set_ref_hash($memory_0, $memory_11, $memory_7);
#line 374
undef($memory_11);
#line 374
undef($memory_7);
#line 374
undef($memory_8);
#line 374
undef($memory_9);
#line 374
undef($memory_10);
#line 374
undef($memory_5);
#line 374
undef($memory_6);
#line 374
undef($memory_4);
#line 375
goto label_5;
#line 375
label_22:
#line 375
$memory_4 = c_rt_lib::ov_as($memory_2, 'ov_mk');
#line 377
$memory_6 = $memory_4->{'src'};
#line 377
$memory_7 = c_rt_lib::ov_is($memory_6, 'arg');
#line 377
if (c_rt_lib::check_true($memory_7)) {goto label_62;}
#line 379
$memory_7 = c_rt_lib::ov_is($memory_6, 'emp');
#line 379
if (c_rt_lib::check_true($memory_7)) {goto label_63;}
#line 379
$memory_7 = "NOMATCHALERT";
#line 379
$memory_7 = [$memory_7,$memory_6];
#line 379
die(dfile::ssave($memory_7));
#line 377
label_62:
#line 377
$memory_8 = c_rt_lib::ov_as($memory_6, 'arg');
#line 378
$memory_10 = $memory_4->{'name'};
#line 378
$memory_11 = $memory_0->{'top'};
#line 378
$memory_11 = $memory_11->{'vars'};
#line 378
$memory_11 = $memory_11->[$memory_8];
#line 378
$memory_9 = ov::mk_val($memory_10, $memory_11);
#line 378
undef($memory_11);
#line 378
undef($memory_10);
#line 378
$memory_5 = $memory_9;
#line 378
undef($memory_9);
#line 378
undef($memory_8);
#line 379
goto label_61;
#line 379
label_63:
#line 380
$memory_9 = $memory_4->{'name'};
#line 380
$memory_8 = ov::mk($memory_9);
#line 380
undef($memory_9);
#line 380
$memory_5 = $memory_8;
#line 380
undef($memory_8);
#line 381
goto label_61;
#line 381
label_61:
#line 381
undef($memory_6);
#line 381
undef($memory_7);
#line 382
$memory_6 = $memory_4->{'dest'};
#line 382
$memory_7 = "";
#line 382
$memory_6 = c_rt_lib::to_nl($memory_6 eq $memory_7);
#line 382
undef($memory_7);
#line 382
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 382
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 382
if (c_rt_lib::check_true($memory_6)) {goto label_65;}
#line 382
$memory_7 = "top";
#line 382
$memory_7 = c_rt_lib::get_ref_hash($memory_0, $memory_7);
#line 382
$memory_8 = "vars";
#line 382
$memory_8 = c_rt_lib::get_ref_hash($memory_7, $memory_8);
#line 382
$memory_10 = $memory_4->{'dest'};
#line 382
$memory_9 = $memory_5;
#line 382
 if (c_rt_lib::get_arrcount($memory_8) > 1) {$memory_8 = [@{$memory_8}];}$memory_8->[$memory_10] = $memory_9;
#line 382
$memory_11 = "vars";
#line 382
c_rt_lib::set_ref_hash($memory_7, $memory_11, $memory_8);
#line 382
$memory_11 = "top";
#line 382
c_rt_lib::set_ref_hash($memory_0, $memory_11, $memory_7);
#line 382
undef($memory_11);
#line 382
undef($memory_7);
#line 382
undef($memory_8);
#line 382
undef($memory_9);
#line 382
undef($memory_10);
#line 382
goto label_65;
#line 382
label_65:
#line 382
undef($memory_6);
#line 382
undef($memory_5);
#line 382
undef($memory_4);
#line 383
goto label_5;
#line 383
label_23:
#line 383
$memory_4 = c_rt_lib::ov_as($memory_2, 'prt_lbl');
#line 383
undef($memory_4);
#line 384
goto label_5;
#line 384
label_24:
#line 384
$memory_4 = c_rt_lib::ov_as($memory_2, 'if_goto');
#line 385
$memory_5 = $memory_0->{'top'};
#line 385
$memory_5 = $memory_5->{'vars'};
#line 385
$memory_6 = $memory_4->{'src'};
#line 385
$memory_5 = $memory_5->[$memory_6];
#line 385
undef($memory_6);
#line 385
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 385
if (c_rt_lib::check_true($memory_5)) {goto label_67;}
#line 385
$memory_6 = $memory_4->{'dest'};
#line 385
interpreter_priv::goto($memory_0, $memory_6);
#line 385
undef($memory_6);
#line 385
goto label_67;
#line 385
label_67:
#line 385
undef($memory_5);
#line 385
undef($memory_4);
#line 386
goto label_5;
#line 386
label_25:
#line 386
$memory_4 = c_rt_lib::ov_as($memory_2, 'goto');
#line 387
interpreter_priv::goto($memory_0, $memory_4);
#line 387
undef($memory_4);
#line 388
goto label_5;
#line 388
label_26:
#line 388
$memory_4 = c_rt_lib::ov_as($memory_2, 'clear');
#line 389
$memory_5 = "";
#line 389
$memory_5 = c_rt_lib::to_nl($memory_4 ne $memory_5);
#line 389
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 389
if (c_rt_lib::check_true($memory_5)) {goto label_69;}
#line 390
$memory_6 = interpreter::get_none_variant();
#line 390
$memory_7 = "top";
#line 390
$memory_7 = c_rt_lib::get_ref_hash($memory_0, $memory_7);
#line 390
$memory_8 = "vars";
#line 390
$memory_8 = c_rt_lib::get_ref_hash($memory_7, $memory_8);
#line 390
$memory_9 = $memory_6;
#line 390
 if (c_rt_lib::get_arrcount($memory_8) > 1) {$memory_8 = [@{$memory_8}];}$memory_8->[$memory_4] = $memory_9;
#line 390
$memory_10 = "vars";
#line 390
c_rt_lib::set_ref_hash($memory_7, $memory_10, $memory_8);
#line 390
$memory_10 = "top";
#line 390
c_rt_lib::set_ref_hash($memory_0, $memory_10, $memory_7);
#line 390
undef($memory_10);
#line 390
undef($memory_6);
#line 390
undef($memory_7);
#line 390
undef($memory_8);
#line 390
undef($memory_9);
#line 391
$memory_6 = $memory_0->{'top'};
#line 391
$memory_6 = $memory_6->{'code_vars'};
#line 391
$memory_9 = c_rt_lib::init_iter($memory_6);
#line 391
label_72:
#line 391
$memory_7 = c_rt_lib::is_end_hash($memory_9);
#line 391
if (c_rt_lib::check_true($memory_7)) {goto label_70;}
#line 391
$memory_7 = c_rt_lib::get_key_iter($memory_9);
#line 391
$memory_8 = c_rt_lib::hash_get_value($memory_6, $memory_7);
#line 392
$memory_10 = c_rt_lib::to_nl($memory_4 == $memory_8);
#line 392
$memory_10 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_10));
#line 392
if (c_rt_lib::check_true($memory_10)) {goto label_74;}
#line 393
$memory_11 = "top";
#line 393
$memory_11 = c_rt_lib::get_ref_hash($memory_0, $memory_11);
#line 393
$memory_12 = "code_vars";
#line 393
$memory_12 = c_rt_lib::get_ref_hash($memory_11, $memory_12);
#line 393
hash::delete($memory_12, $memory_7);
#line 393
$memory_13 = "code_vars";
#line 393
c_rt_lib::set_ref_hash($memory_11, $memory_13, $memory_12);
#line 393
$memory_13 = "top";
#line 393
c_rt_lib::set_ref_hash($memory_0, $memory_13, $memory_11);
#line 393
undef($memory_13);
#line 393
undef($memory_11);
#line 393
undef($memory_12);
#line 394
undef($memory_10);
#line 394
goto label_70;
#line 395
goto label_74;
#line 395
label_74:
#line 395
undef($memory_10);
#line 396
$memory_9 = c_rt_lib::next_iter($memory_9);
#line 396
goto label_72;
#line 396
label_70:
#line 396
undef($memory_6);
#line 396
undef($memory_7);
#line 396
undef($memory_8);
#line 396
undef($memory_9);
#line 397
goto label_69;
#line 397
label_69:
#line 397
undef($memory_5);
#line 397
undef($memory_4);
#line 398
goto label_5;
#line 398
label_5:
#line 398
undef($memory_3);
#line 399
interpreter_priv::handle_new_declarations($memory_0);
#line 399
undef($memory_1);
#line 399
undef($memory_2);
#line 399
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub interpreter_priv::check_command($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;$memory_0 = $_[0];$memory_1 = $_[1];
#line 403
$memory_2 = $memory_0->{'check_all_instructions'};
#line 403
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 403
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 403
if (c_rt_lib::check_true($memory_2)) {goto label_2;}
#line 403
$memory_3 = c_rt_lib::to_nl(1);
#line 403
undef($memory_0);
#line 403
undef($memory_1);
#line 403
undef($memory_2);
#line 403
return $memory_3;
#line 403
undef($memory_3);
#line 403
goto label_2;
#line 403
label_2:
#line 403
undef($memory_2);
#line 404
$memory_2 = c_rt_lib::ov_is($memory_1, 'arr_decl');
#line 404
if (c_rt_lib::check_true($memory_2)) {goto label_4;}
#line 405
$memory_2 = c_rt_lib::ov_is($memory_1, 'hash_decl');
#line 405
if (c_rt_lib::check_true($memory_2)) {goto label_5;}
#line 406
$memory_2 = c_rt_lib::ov_is($memory_1, 'call');
#line 406
if (c_rt_lib::check_true($memory_2)) {goto label_6;}
#line 407
$memory_2 = c_rt_lib::ov_is($memory_1, 'func');
#line 407
if (c_rt_lib::check_true($memory_2)) {goto label_7;}
#line 408
$memory_2 = c_rt_lib::ov_is($memory_1, 'una_op');
#line 408
if (c_rt_lib::check_true($memory_2)) {goto label_8;}
#line 416
$memory_2 = c_rt_lib::ov_is($memory_1, 'bin_op');
#line 416
if (c_rt_lib::check_true($memory_2)) {goto label_9;}
#line 421
$memory_2 = c_rt_lib::ov_is($memory_1, 'ov_is');
#line 421
if (c_rt_lib::check_true($memory_2)) {goto label_10;}
#line 424
$memory_2 = c_rt_lib::ov_is($memory_1, 'ov_as');
#line 424
if (c_rt_lib::check_true($memory_2)) {goto label_11;}
#line 429
$memory_2 = c_rt_lib::ov_is($memory_1, 'return');
#line 429
if (c_rt_lib::check_true($memory_2)) {goto label_12;}
#line 430
$memory_2 = c_rt_lib::ov_is($memory_1, 'die');
#line 430
if (c_rt_lib::check_true($memory_2)) {goto label_13;}
#line 431
$memory_2 = c_rt_lib::ov_is($memory_1, 'move');
#line 431
if (c_rt_lib::check_true($memory_2)) {goto label_14;}
#line 432
$memory_2 = c_rt_lib::ov_is($memory_1, 'load_const');
#line 432
if (c_rt_lib::check_true($memory_2)) {goto label_15;}
#line 433
$memory_2 = c_rt_lib::ov_is($memory_1, 'get_frm_idx');
#line 433
if (c_rt_lib::check_true($memory_2)) {goto label_16;}
#line 440
$memory_2 = c_rt_lib::ov_is($memory_1, 'set_at_idx');
#line 440
if (c_rt_lib::check_true($memory_2)) {goto label_17;}
#line 446
$memory_2 = c_rt_lib::ov_is($memory_1, 'get_val');
#line 446
if (c_rt_lib::check_true($memory_2)) {goto label_18;}
#line 451
$memory_2 = c_rt_lib::ov_is($memory_1, 'set_val');
#line 451
if (c_rt_lib::check_true($memory_2)) {goto label_19;}
#line 455
$memory_2 = c_rt_lib::ov_is($memory_1, 'ov_mk');
#line 455
if (c_rt_lib::check_true($memory_2)) {goto label_20;}
#line 457
$memory_2 = c_rt_lib::ov_is($memory_1, 'prt_lbl');
#line 457
if (c_rt_lib::check_true($memory_2)) {goto label_21;}
#line 458
$memory_2 = c_rt_lib::ov_is($memory_1, 'if_goto');
#line 458
if (c_rt_lib::check_true($memory_2)) {goto label_22;}
#line 462
$memory_2 = c_rt_lib::ov_is($memory_1, 'goto');
#line 462
if (c_rt_lib::check_true($memory_2)) {goto label_23;}
#line 463
$memory_2 = c_rt_lib::ov_is($memory_1, 'clear');
#line 463
if (c_rt_lib::check_true($memory_2)) {goto label_24;}
#line 463
$memory_2 = "NOMATCHALERT";
#line 463
$memory_2 = [$memory_2,$memory_1];
#line 463
die(dfile::ssave($memory_2));
#line 404
label_4:
#line 404
$memory_3 = c_rt_lib::ov_as($memory_1, 'arr_decl');
#line 404
undef($memory_3);
#line 405
goto label_3;
#line 405
label_5:
#line 405
$memory_3 = c_rt_lib::ov_as($memory_1, 'hash_decl');
#line 405
undef($memory_3);
#line 406
goto label_3;
#line 406
label_6:
#line 406
$memory_3 = c_rt_lib::ov_as($memory_1, 'call');
#line 406
undef($memory_3);
#line 407
goto label_3;
#line 407
label_7:
#line 407
$memory_3 = c_rt_lib::ov_as($memory_1, 'func');
#line 407
undef($memory_3);
#line 408
goto label_3;
#line 408
label_8:
#line 408
$memory_3 = c_rt_lib::ov_as($memory_1, 'una_op');
#line 409
$memory_4 = $memory_0->{'top'};
#line 409
$memory_4 = $memory_4->{'vars'};
#line 409
$memory_5 = $memory_3->{'src'};
#line 409
$memory_4 = $memory_4->[$memory_5];
#line 409
undef($memory_5);
#line 410
$memory_5 = $memory_3->{'op'};
#line 410
$memory_6 = "!";
#line 410
$memory_5 = c_rt_lib::to_nl($memory_5 eq $memory_6);
#line 410
undef($memory_6);
#line 410
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 410
if (c_rt_lib::check_true($memory_5)) {goto label_26;}
#line 411
$memory_6 = nl::is_variant($memory_4);
#line 411
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 411
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 411
if (c_rt_lib::check_true($memory_6)) {goto label_28;}
#line 411
$memory_7 = c_rt_lib::to_nl(0);
#line 411
undef($memory_0);
#line 411
undef($memory_1);
#line 411
undef($memory_2);
#line 411
undef($memory_3);
#line 411
undef($memory_4);
#line 411
undef($memory_5);
#line 411
undef($memory_6);
#line 411
return $memory_7;
#line 411
undef($memory_7);
#line 411
goto label_28;
#line 411
label_28:
#line 411
undef($memory_6);
#line 412
$memory_6 = $memory_4;
#line 412
$memory_6 = c_rt_lib::ov_is($memory_6, 'TRUE');
#line 412
if (c_rt_lib::check_true($memory_6)) {goto label_31;}
#line 412
$memory_6 = $memory_4;
#line 412
$memory_6 = c_rt_lib::ov_is($memory_6, 'FALSE');
#line 412
label_31:
#line 412
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 412
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 412
if (c_rt_lib::check_true($memory_6)) {goto label_30;}
#line 412
$memory_7 = c_rt_lib::to_nl(0);
#line 412
undef($memory_0);
#line 412
undef($memory_1);
#line 412
undef($memory_2);
#line 412
undef($memory_3);
#line 412
undef($memory_4);
#line 412
undef($memory_5);
#line 412
undef($memory_6);
#line 412
return $memory_7;
#line 412
undef($memory_7);
#line 412
goto label_30;
#line 412
label_30:
#line 412
undef($memory_6);
#line 413
goto label_25;
#line 413
label_26:
#line 414
$memory_6 = nl::is_sim($memory_4);
#line 414
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 414
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 414
if (c_rt_lib::check_true($memory_6)) {goto label_33;}
#line 414
$memory_7 = c_rt_lib::to_nl(0);
#line 414
undef($memory_0);
#line 414
undef($memory_1);
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
return $memory_7;
#line 414
undef($memory_7);
#line 414
goto label_33;
#line 414
label_33:
#line 414
undef($memory_6);
#line 415
goto label_25;
#line 415
label_25:
#line 415
undef($memory_5);
#line 415
undef($memory_4);
#line 415
undef($memory_3);
#line 416
goto label_3;
#line 416
label_9:
#line 416
$memory_3 = c_rt_lib::ov_as($memory_1, 'bin_op');
#line 417
$memory_4 = $memory_0->{'top'};
#line 417
$memory_4 = $memory_4->{'vars'};
#line 417
$memory_5 = $memory_3->{'left'};
#line 417
$memory_4 = $memory_4->[$memory_5];
#line 417
undef($memory_5);
#line 418
$memory_5 = $memory_0->{'top'};
#line 418
$memory_5 = $memory_5->{'vars'};
#line 418
$memory_6 = $memory_3->{'right'};
#line 418
$memory_5 = $memory_5->[$memory_6];
#line 418
undef($memory_6);
#line 419
$memory_6 = nl::is_sim($memory_4);
#line 419
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 419
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 419
if (c_rt_lib::check_true($memory_6)) {goto label_35;}
#line 419
$memory_7 = c_rt_lib::to_nl(0);
#line 419
undef($memory_0);
#line 419
undef($memory_1);
#line 419
undef($memory_2);
#line 419
undef($memory_3);
#line 419
undef($memory_4);
#line 419
undef($memory_5);
#line 419
undef($memory_6);
#line 419
return $memory_7;
#line 419
undef($memory_7);
#line 419
goto label_35;
#line 419
label_35:
#line 419
undef($memory_6);
#line 420
$memory_6 = nl::is_sim($memory_5);
#line 420
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 420
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 420
if (c_rt_lib::check_true($memory_6)) {goto label_37;}
#line 420
$memory_7 = c_rt_lib::to_nl(0);
#line 420
undef($memory_0);
#line 420
undef($memory_1);
#line 420
undef($memory_2);
#line 420
undef($memory_3);
#line 420
undef($memory_4);
#line 420
undef($memory_5);
#line 420
undef($memory_6);
#line 420
return $memory_7;
#line 420
undef($memory_7);
#line 420
goto label_37;
#line 420
label_37:
#line 420
undef($memory_6);
#line 420
undef($memory_4);
#line 420
undef($memory_5);
#line 420
undef($memory_3);
#line 421
goto label_3;
#line 421
label_10:
#line 421
$memory_3 = c_rt_lib::ov_as($memory_1, 'ov_is');
#line 422
$memory_5 = $memory_0->{'top'};
#line 422
$memory_5 = $memory_5->{'vars'};
#line 422
$memory_6 = $memory_3->{'src'};
#line 422
$memory_5 = $memory_5->[$memory_6];
#line 422
undef($memory_6);
#line 422
$memory_4 = nl::is_variant($memory_5);
#line 422
undef($memory_5);
#line 422
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 422
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 422
if (c_rt_lib::check_true($memory_4)) {goto label_39;}
#line 422
$memory_5 = c_rt_lib::to_nl(0);
#line 422
undef($memory_0);
#line 422
undef($memory_1);
#line 422
undef($memory_2);
#line 422
undef($memory_3);
#line 422
undef($memory_4);
#line 422
return $memory_5;
#line 422
undef($memory_5);
#line 422
goto label_39;
#line 422
label_39:
#line 422
undef($memory_4);
#line 423
$memory_5 = $memory_3->{'type'};
#line 423
$memory_4 = nl::is_sim($memory_5);
#line 423
undef($memory_5);
#line 423
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 423
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 423
if (c_rt_lib::check_true($memory_4)) {goto label_41;}
#line 423
$memory_5 = c_rt_lib::to_nl(0);
#line 423
undef($memory_0);
#line 423
undef($memory_1);
#line 423
undef($memory_2);
#line 423
undef($memory_3);
#line 423
undef($memory_4);
#line 423
return $memory_5;
#line 423
undef($memory_5);
#line 423
goto label_41;
#line 423
label_41:
#line 423
undef($memory_4);
#line 423
undef($memory_3);
#line 424
goto label_3;
#line 424
label_11:
#line 424
$memory_3 = c_rt_lib::ov_as($memory_1, 'ov_as');
#line 425
$memory_4 = $memory_0->{'top'};
#line 425
$memory_4 = $memory_4->{'vars'};
#line 425
$memory_5 = $memory_3->{'src'};
#line 425
$memory_4 = $memory_4->[$memory_5];
#line 425
undef($memory_5);
#line 426
$memory_5 = nl::is_variant($memory_4);
#line 426
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 426
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 426
if (c_rt_lib::check_true($memory_5)) {goto label_43;}
#line 426
$memory_6 = c_rt_lib::to_nl(0);
#line 426
undef($memory_0);
#line 426
undef($memory_1);
#line 426
undef($memory_2);
#line 426
undef($memory_3);
#line 426
undef($memory_4);
#line 426
undef($memory_5);
#line 426
return $memory_6;
#line 426
undef($memory_6);
#line 426
goto label_43;
#line 426
label_43:
#line 426
undef($memory_5);
#line 427
$memory_6 = $memory_3->{'type'};
#line 427
$memory_5 = nl::is_sim($memory_6);
#line 427
undef($memory_6);
#line 427
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 427
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 427
if (c_rt_lib::check_true($memory_5)) {goto label_45;}
#line 427
$memory_6 = c_rt_lib::to_nl(0);
#line 427
undef($memory_0);
#line 427
undef($memory_1);
#line 427
undef($memory_2);
#line 427
undef($memory_3);
#line 427
undef($memory_4);
#line 427
undef($memory_5);
#line 427
return $memory_6;
#line 427
undef($memory_6);
#line 427
goto label_45;
#line 427
label_45:
#line 427
undef($memory_5);
#line 428
$memory_6 = $memory_3->{'type'};
#line 428
$memory_5 = ov::is($memory_4, $memory_6);
#line 428
undef($memory_6);
#line 428
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 428
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 428
if (c_rt_lib::check_true($memory_5)) {goto label_47;}
#line 428
$memory_6 = c_rt_lib::to_nl(0);
#line 428
undef($memory_0);
#line 428
undef($memory_1);
#line 428
undef($memory_2);
#line 428
undef($memory_3);
#line 428
undef($memory_4);
#line 428
undef($memory_5);
#line 428
return $memory_6;
#line 428
undef($memory_6);
#line 428
goto label_47;
#line 428
label_47:
#line 428
undef($memory_5);
#line 428
undef($memory_4);
#line 428
undef($memory_3);
#line 429
goto label_3;
#line 429
label_12:
#line 429
$memory_3 = c_rt_lib::ov_as($memory_1, 'return');
#line 429
undef($memory_3);
#line 430
goto label_3;
#line 430
label_13:
#line 430
$memory_3 = c_rt_lib::ov_as($memory_1, 'die');
#line 430
undef($memory_3);
#line 431
goto label_3;
#line 431
label_14:
#line 431
$memory_3 = c_rt_lib::ov_as($memory_1, 'move');
#line 431
undef($memory_3);
#line 432
goto label_3;
#line 432
label_15:
#line 432
$memory_3 = c_rt_lib::ov_as($memory_1, 'load_const');
#line 432
undef($memory_3);
#line 433
goto label_3;
#line 433
label_16:
#line 433
$memory_3 = c_rt_lib::ov_as($memory_1, 'get_frm_idx');
#line 434
$memory_4 = $memory_0->{'top'};
#line 434
$memory_4 = $memory_4->{'vars'};
#line 434
$memory_5 = $memory_3->{'src'};
#line 434
$memory_4 = $memory_4->[$memory_5];
#line 434
undef($memory_5);
#line 435
$memory_5 = nl::is_array($memory_4);
#line 435
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 435
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 435
if (c_rt_lib::check_true($memory_5)) {goto label_49;}
#line 435
$memory_6 = c_rt_lib::to_nl(0);
#line 435
undef($memory_0);
#line 435
undef($memory_1);
#line 435
undef($memory_2);
#line 435
undef($memory_3);
#line 435
undef($memory_4);
#line 435
undef($memory_5);
#line 435
return $memory_6;
#line 435
undef($memory_6);
#line 435
goto label_49;
#line 435
label_49:
#line 435
undef($memory_5);
#line 436
$memory_5 = $memory_0->{'top'};
#line 436
$memory_5 = $memory_5->{'vars'};
#line 436
$memory_6 = $memory_3->{'idx'};
#line 436
$memory_5 = $memory_5->[$memory_6];
#line 436
undef($memory_6);
#line 437
$memory_6 = nl::is_sim($memory_5);
#line 437
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 437
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 437
if (c_rt_lib::check_true($memory_6)) {goto label_51;}
#line 437
$memory_7 = c_rt_lib::to_nl(0);
#line 437
undef($memory_0);
#line 437
undef($memory_1);
#line 437
undef($memory_2);
#line 437
undef($memory_3);
#line 437
undef($memory_4);
#line 437
undef($memory_5);
#line 437
undef($memory_6);
#line 437
return $memory_7;
#line 437
undef($memory_7);
#line 437
goto label_51;
#line 437
label_51:
#line 437
undef($memory_6);
#line 438
$memory_6 = array::len($memory_4);
#line 438
$memory_6 = c_rt_lib::to_nl($memory_5 < $memory_6);
#line 438
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 438
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 438
if (c_rt_lib::check_true($memory_6)) {goto label_53;}
#line 438
$memory_7 = c_rt_lib::to_nl(0);
#line 438
undef($memory_0);
#line 438
undef($memory_1);
#line 438
undef($memory_2);
#line 438
undef($memory_3);
#line 438
undef($memory_4);
#line 438
undef($memory_5);
#line 438
undef($memory_6);
#line 438
return $memory_7;
#line 438
undef($memory_7);
#line 438
goto label_53;
#line 438
label_53:
#line 438
undef($memory_6);
#line 439
$memory_6 = 0;
#line 439
$memory_6 = c_rt_lib::to_nl($memory_5 >= $memory_6);
#line 439
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 439
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 439
if (c_rt_lib::check_true($memory_6)) {goto label_55;}
#line 439
$memory_7 = c_rt_lib::to_nl(0);
#line 439
undef($memory_0);
#line 439
undef($memory_1);
#line 439
undef($memory_2);
#line 439
undef($memory_3);
#line 439
undef($memory_4);
#line 439
undef($memory_5);
#line 439
undef($memory_6);
#line 439
return $memory_7;
#line 439
undef($memory_7);
#line 439
goto label_55;
#line 439
label_55:
#line 439
undef($memory_6);
#line 439
undef($memory_4);
#line 439
undef($memory_5);
#line 439
undef($memory_3);
#line 440
goto label_3;
#line 440
label_17:
#line 440
$memory_3 = c_rt_lib::ov_as($memory_1, 'set_at_idx');
#line 441
$memory_4 = $memory_0->{'top'};
#line 441
$memory_4 = $memory_4->{'vars'};
#line 441
$memory_5 = $memory_3->{'src'};
#line 441
$memory_4 = $memory_4->[$memory_5];
#line 441
undef($memory_5);
#line 442
$memory_5 = nl::is_array($memory_4);
#line 442
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 442
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 442
if (c_rt_lib::check_true($memory_5)) {goto label_57;}
#line 442
$memory_6 = c_rt_lib::to_nl(0);
#line 442
undef($memory_0);
#line 442
undef($memory_1);
#line 442
undef($memory_2);
#line 442
undef($memory_3);
#line 442
undef($memory_4);
#line 442
undef($memory_5);
#line 442
return $memory_6;
#line 442
undef($memory_6);
#line 442
goto label_57;
#line 442
label_57:
#line 442
undef($memory_5);
#line 443
$memory_5 = $memory_0->{'top'};
#line 443
$memory_5 = $memory_5->{'vars'};
#line 443
$memory_6 = $memory_3->{'idx'};
#line 443
$memory_5 = $memory_5->[$memory_6];
#line 443
undef($memory_6);
#line 444
$memory_6 = nl::is_sim($memory_5);
#line 444
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 444
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 444
if (c_rt_lib::check_true($memory_6)) {goto label_59;}
#line 444
$memory_7 = c_rt_lib::to_nl(0);
#line 444
undef($memory_0);
#line 444
undef($memory_1);
#line 444
undef($memory_2);
#line 444
undef($memory_3);
#line 444
undef($memory_4);
#line 444
undef($memory_5);
#line 444
undef($memory_6);
#line 444
return $memory_7;
#line 444
undef($memory_7);
#line 444
goto label_59;
#line 444
label_59:
#line 444
undef($memory_6);
#line 445
$memory_6 = array::len($memory_4);
#line 445
$memory_6 = c_rt_lib::to_nl($memory_5 < $memory_6);
#line 445
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 445
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 445
if (c_rt_lib::check_true($memory_6)) {goto label_61;}
#line 445
$memory_7 = c_rt_lib::to_nl(0);
#line 445
undef($memory_0);
#line 445
undef($memory_1);
#line 445
undef($memory_2);
#line 445
undef($memory_3);
#line 445
undef($memory_4);
#line 445
undef($memory_5);
#line 445
undef($memory_6);
#line 445
return $memory_7;
#line 445
undef($memory_7);
#line 445
goto label_61;
#line 445
label_61:
#line 445
undef($memory_6);
#line 445
undef($memory_4);
#line 445
undef($memory_5);
#line 445
undef($memory_3);
#line 446
goto label_3;
#line 446
label_18:
#line 446
$memory_3 = c_rt_lib::ov_as($memory_1, 'get_val');
#line 447
$memory_4 = $memory_0->{'top'};
#line 447
$memory_4 = $memory_4->{'vars'};
#line 447
$memory_5 = $memory_3->{'src'};
#line 447
$memory_4 = $memory_4->[$memory_5];
#line 447
undef($memory_5);
#line 448
$memory_5 = nl::is_hash($memory_4);
#line 448
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 448
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 448
if (c_rt_lib::check_true($memory_5)) {goto label_63;}
#line 448
$memory_6 = c_rt_lib::to_nl(0);
#line 448
undef($memory_0);
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
return $memory_6;
#line 448
undef($memory_6);
#line 448
goto label_63;
#line 448
label_63:
#line 448
undef($memory_5);
#line 449
$memory_6 = $memory_3->{'key'};
#line 449
$memory_5 = nl::is_sim($memory_6);
#line 449
undef($memory_6);
#line 449
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 449
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 449
if (c_rt_lib::check_true($memory_5)) {goto label_65;}
#line 449
$memory_6 = c_rt_lib::to_nl(0);
#line 449
undef($memory_0);
#line 449
undef($memory_1);
#line 449
undef($memory_2);
#line 449
undef($memory_3);
#line 449
undef($memory_4);
#line 449
undef($memory_5);
#line 449
return $memory_6;
#line 449
undef($memory_6);
#line 449
goto label_65;
#line 449
label_65:
#line 449
undef($memory_5);
#line 450
$memory_6 = $memory_3->{'key'};
#line 450
$memory_5 = hash::has_key($memory_4, $memory_6);
#line 450
undef($memory_6);
#line 450
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 450
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 450
if (c_rt_lib::check_true($memory_5)) {goto label_67;}
#line 450
$memory_6 = c_rt_lib::to_nl(0);
#line 450
undef($memory_0);
#line 450
undef($memory_1);
#line 450
undef($memory_2);
#line 450
undef($memory_3);
#line 450
undef($memory_4);
#line 450
undef($memory_5);
#line 450
return $memory_6;
#line 450
undef($memory_6);
#line 450
goto label_67;
#line 450
label_67:
#line 450
undef($memory_5);
#line 450
undef($memory_4);
#line 450
undef($memory_3);
#line 451
goto label_3;
#line 451
label_19:
#line 451
$memory_3 = c_rt_lib::ov_as($memory_1, 'set_val');
#line 452
$memory_4 = $memory_0->{'top'};
#line 452
$memory_4 = $memory_4->{'vars'};
#line 452
$memory_5 = $memory_3->{'src'};
#line 452
$memory_4 = $memory_4->[$memory_5];
#line 452
undef($memory_5);
#line 453
$memory_5 = nl::is_hash($memory_4);
#line 453
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 453
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 453
if (c_rt_lib::check_true($memory_5)) {goto label_69;}
#line 453
$memory_6 = c_rt_lib::to_nl(0);
#line 453
undef($memory_0);
#line 453
undef($memory_1);
#line 453
undef($memory_2);
#line 453
undef($memory_3);
#line 453
undef($memory_4);
#line 453
undef($memory_5);
#line 453
return $memory_6;
#line 453
undef($memory_6);
#line 453
goto label_69;
#line 453
label_69:
#line 453
undef($memory_5);
#line 454
$memory_6 = $memory_3->{'key'};
#line 454
$memory_5 = nl::is_sim($memory_6);
#line 454
undef($memory_6);
#line 454
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 454
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 454
if (c_rt_lib::check_true($memory_5)) {goto label_71;}
#line 454
$memory_6 = c_rt_lib::to_nl(0);
#line 454
undef($memory_0);
#line 454
undef($memory_1);
#line 454
undef($memory_2);
#line 454
undef($memory_3);
#line 454
undef($memory_4);
#line 454
undef($memory_5);
#line 454
return $memory_6;
#line 454
undef($memory_6);
#line 454
goto label_71;
#line 454
label_71:
#line 454
undef($memory_5);
#line 454
undef($memory_4);
#line 454
undef($memory_3);
#line 455
goto label_3;
#line 455
label_20:
#line 455
$memory_3 = c_rt_lib::ov_as($memory_1, 'ov_mk');
#line 456
$memory_5 = $memory_3->{'name'};
#line 456
$memory_4 = nl::is_sim($memory_5);
#line 456
undef($memory_5);
#line 456
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 456
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 456
if (c_rt_lib::check_true($memory_4)) {goto label_73;}
#line 456
$memory_5 = c_rt_lib::to_nl(0);
#line 456
undef($memory_0);
#line 456
undef($memory_1);
#line 456
undef($memory_2);
#line 456
undef($memory_3);
#line 456
undef($memory_4);
#line 456
return $memory_5;
#line 456
undef($memory_5);
#line 456
goto label_73;
#line 456
label_73:
#line 456
undef($memory_4);
#line 456
undef($memory_3);
#line 457
goto label_3;
#line 457
label_21:
#line 457
$memory_3 = c_rt_lib::ov_as($memory_1, 'prt_lbl');
#line 457
undef($memory_3);
#line 458
goto label_3;
#line 458
label_22:
#line 458
$memory_3 = c_rt_lib::ov_as($memory_1, 'if_goto');
#line 459
$memory_4 = $memory_0->{'top'};
#line 459
$memory_4 = $memory_4->{'vars'};
#line 459
$memory_5 = $memory_3->{'src'};
#line 459
$memory_4 = $memory_4->[$memory_5];
#line 459
undef($memory_5);
#line 460
$memory_5 = nl::is_variant($memory_4);
#line 460
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 460
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 460
if (c_rt_lib::check_true($memory_5)) {goto label_75;}
#line 460
$memory_6 = c_rt_lib::to_nl(0);
#line 460
undef($memory_0);
#line 460
undef($memory_1);
#line 460
undef($memory_2);
#line 460
undef($memory_3);
#line 460
undef($memory_4);
#line 460
undef($memory_5);
#line 460
return $memory_6;
#line 460
undef($memory_6);
#line 460
goto label_75;
#line 460
label_75:
#line 460
undef($memory_5);
#line 461
$memory_5 = $memory_4;
#line 461
$memory_5 = c_rt_lib::ov_is($memory_5, 'TRUE');
#line 461
if (c_rt_lib::check_true($memory_5)) {goto label_78;}
#line 461
$memory_5 = $memory_4;
#line 461
$memory_5 = c_rt_lib::ov_is($memory_5, 'FALSE');
#line 461
label_78:
#line 461
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 461
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 461
if (c_rt_lib::check_true($memory_5)) {goto label_77;}
#line 461
$memory_6 = c_rt_lib::to_nl(0);
#line 461
undef($memory_0);
#line 461
undef($memory_1);
#line 461
undef($memory_2);
#line 461
undef($memory_3);
#line 461
undef($memory_4);
#line 461
undef($memory_5);
#line 461
return $memory_6;
#line 461
undef($memory_6);
#line 461
goto label_77;
#line 461
label_77:
#line 461
undef($memory_5);
#line 461
undef($memory_4);
#line 461
undef($memory_3);
#line 462
goto label_3;
#line 462
label_23:
#line 462
$memory_3 = c_rt_lib::ov_as($memory_1, 'goto');
#line 462
undef($memory_3);
#line 463
goto label_3;
#line 463
label_24:
#line 463
$memory_3 = c_rt_lib::ov_as($memory_1, 'clear');
#line 463
undef($memory_3);
#line 464
goto label_3;
#line 464
label_3:
#line 464
undef($memory_2);
#line 465
$memory_2 = c_rt_lib::to_nl(1);
#line 465
undef($memory_0);
#line 465
undef($memory_1);
#line 465
return $memory_2;
#line 465
undef($memory_2);
#line 465
undef($memory_0);
#line 465
undef($memory_1);
#line 465
return;
}

sub interpreter::finish_callback($$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;$memory_0 = $_[0];$memory_1 = $_[1];$memory_2 = $_[2];Scalar::Util::weaken($_[2]) if ref($_[2]);
#line 469
$memory_3 = $memory_2->{'rstate'};
#line 469
$memory_3 = c_rt_lib::ov_is($memory_3, 'callback');
#line 469
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 469
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 469
if (c_rt_lib::check_true($memory_3)) {goto label_2;}
#line 469
$memory_4 = [];
#line 469
die(dfile::ssave($memory_4));
#line 469
goto label_2;
#line 469
label_2:
#line 469
undef($memory_3);
#line 469
undef($memory_4);
#line 470
$memory_3 = $memory_2->{'rstate'};
#line 470
$memory_3 = c_rt_lib::ov_as($memory_3, 'callback');
#line 470
$memory_3 = c_rt_lib::to_nl($memory_3 eq $memory_0);
#line 470
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 470
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 470
if (c_rt_lib::check_true($memory_3)) {goto label_4;}
#line 470
$memory_4 = [];
#line 470
die(dfile::ssave($memory_4));
#line 470
goto label_4;
#line 470
label_4:
#line 470
undef($memory_3);
#line 470
undef($memory_4);
#line 471
$memory_3 = c_rt_lib::ov_is($memory_1, 'ok');
#line 471
if (c_rt_lib::check_true($memory_3)) {goto label_6;}
#line 477
$memory_3 = c_rt_lib::ov_is($memory_1, 'err');
#line 477
if (c_rt_lib::check_true($memory_3)) {goto label_7;}
#line 477
$memory_3 = "NOMATCHALERT";
#line 477
$memory_3 = [$memory_3,$memory_1];
#line 477
die(dfile::ssave($memory_3));
#line 471
label_6:
#line 471
$memory_4 = c_rt_lib::ov_as($memory_1, 'ok');
#line 472
$memory_5 = "top";
#line 472
$memory_5 = c_rt_lib::get_ref_hash($memory_2, $memory_5);
#line 472
$memory_6 = "next";
#line 472
$memory_6 = c_rt_lib::get_ref_hash($memory_5, $memory_6);
#line 472
$memory_7 = 1;
#line 472
$memory_6 = $memory_6 + $memory_7;
#line 472
$memory_8 = "next";
#line 472
c_rt_lib::set_ref_hash($memory_5, $memory_8, $memory_6);
#line 472
$memory_8 = "top";
#line 472
c_rt_lib::set_ref_hash($memory_2, $memory_8, $memory_5);
#line 472
undef($memory_8);
#line 472
undef($memory_5);
#line 472
undef($memory_6);
#line 472
undef($memory_7);
#line 473
$memory_5 = $memory_2->{'read_dest'};
#line 473
$memory_6 = "";
#line 473
$memory_5 = c_rt_lib::to_nl($memory_5 eq $memory_6);
#line 473
undef($memory_6);
#line 473
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 473
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 473
if (c_rt_lib::check_true($memory_5)) {goto label_9;}
#line 473
$memory_6 = "top";
#line 473
$memory_6 = c_rt_lib::get_ref_hash($memory_2, $memory_6);
#line 473
$memory_7 = "vars";
#line 473
$memory_7 = c_rt_lib::get_ref_hash($memory_6, $memory_7);
#line 473
$memory_9 = $memory_2->{'read_dest'};
#line 473
$memory_8 = $memory_4;
#line 473
 if (c_rt_lib::get_arrcount($memory_7) > 1) {$memory_7 = [@{$memory_7}];}$memory_7->[$memory_9] = $memory_8;
#line 473
$memory_10 = "vars";
#line 473
c_rt_lib::set_ref_hash($memory_6, $memory_10, $memory_7);
#line 473
$memory_10 = "top";
#line 473
c_rt_lib::set_ref_hash($memory_2, $memory_10, $memory_6);
#line 473
undef($memory_10);
#line 473
undef($memory_6);
#line 473
undef($memory_7);
#line 473
undef($memory_8);
#line 473
undef($memory_9);
#line 473
goto label_9;
#line 473
label_9:
#line 473
undef($memory_5);
#line 474
$memory_5 = "";
#line 474
$memory_6 = $memory_5;
#line 474
 if (c_rt_lib::get_hashcount($memory_2) > 1) {$memory_2 = {%{$memory_2}};}$memory_2->{'read_dest'} = $memory_6;
#line 474
undef($memory_5);
#line 474
undef($memory_6);
#line 475
$memory_5 = c_rt_lib::ov_mk_none('running');
#line 475
$memory_6 = $memory_5;
#line 475
 if (c_rt_lib::get_hashcount($memory_2) > 1) {$memory_2 = {%{$memory_2}};}$memory_2->{'rstate'} = $memory_6;
#line 475
undef($memory_5);
#line 475
undef($memory_6);
#line 476
interpreter_priv::handle_new_declarations($memory_2);
#line 476
undef($memory_4);
#line 477
goto label_5;
#line 477
label_7:
#line 477
$memory_4 = c_rt_lib::ov_as($memory_1, 'err');
#line 478
$memory_5 = c_rt_lib::ov_mk_arg('error', $memory_4);
#line 478
$memory_6 = $memory_5;
#line 478
 if (c_rt_lib::get_hashcount($memory_2) > 1) {$memory_2 = {%{$memory_2}};}$memory_2->{'rstate'} = $memory_6;
#line 478
undef($memory_5);
#line 478
undef($memory_6);
#line 478
undef($memory_4);
#line 479
goto label_5;
#line 479
label_5:
#line 479
undef($memory_3);
#line 479
undef($memory_0);
#line 479
undef($memory_1);
#line 479
$_[2] = $memory_2;return;
$_[2] = $memory_2;}

sub interpreter::finish_read($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;$memory_0 = $_[0];$memory_1 = $_[1];Scalar::Util::weaken($_[1]) if ref($_[1]);
#line 483
$memory_2 = c_rt_lib::ov_is($memory_0, 'ok');
#line 483
if (c_rt_lib::check_true($memory_2)) {goto label_2;}
#line 489
$memory_2 = c_rt_lib::ov_is($memory_0, 'err');
#line 489
if (c_rt_lib::check_true($memory_2)) {goto label_3;}
#line 489
$memory_2 = "NOMATCHALERT";
#line 489
$memory_2 = [$memory_2,$memory_0];
#line 489
die(dfile::ssave($memory_2));
#line 483
label_2:
#line 483
$memory_3 = c_rt_lib::ov_as($memory_0, 'ok');
#line 484
$memory_4 = "top";
#line 484
$memory_4 = c_rt_lib::get_ref_hash($memory_1, $memory_4);
#line 484
$memory_5 = "next";
#line 484
$memory_5 = c_rt_lib::get_ref_hash($memory_4, $memory_5);
#line 484
$memory_6 = 1;
#line 484
$memory_5 = $memory_5 + $memory_6;
#line 484
$memory_7 = "next";
#line 484
c_rt_lib::set_ref_hash($memory_4, $memory_7, $memory_5);
#line 484
$memory_7 = "top";
#line 484
c_rt_lib::set_ref_hash($memory_1, $memory_7, $memory_4);
#line 484
undef($memory_7);
#line 484
undef($memory_4);
#line 484
undef($memory_5);
#line 484
undef($memory_6);
#line 485
$memory_4 = $memory_1->{'read_dest'};
#line 485
$memory_5 = "";
#line 485
$memory_4 = c_rt_lib::to_nl($memory_4 eq $memory_5);
#line 485
undef($memory_5);
#line 485
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 485
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 485
if (c_rt_lib::check_true($memory_4)) {goto label_5;}
#line 485
$memory_5 = "top";
#line 485
$memory_5 = c_rt_lib::get_ref_hash($memory_1, $memory_5);
#line 485
$memory_6 = "vars";
#line 485
$memory_6 = c_rt_lib::get_ref_hash($memory_5, $memory_6);
#line 485
$memory_8 = $memory_1->{'read_dest'};
#line 485
$memory_7 = $memory_3;
#line 485
 if (c_rt_lib::get_arrcount($memory_6) > 1) {$memory_6 = [@{$memory_6}];}$memory_6->[$memory_8] = $memory_7;
#line 485
$memory_9 = "vars";
#line 485
c_rt_lib::set_ref_hash($memory_5, $memory_9, $memory_6);
#line 485
$memory_9 = "top";
#line 485
c_rt_lib::set_ref_hash($memory_1, $memory_9, $memory_5);
#line 485
undef($memory_9);
#line 485
undef($memory_5);
#line 485
undef($memory_6);
#line 485
undef($memory_7);
#line 485
undef($memory_8);
#line 485
goto label_5;
#line 485
label_5:
#line 485
undef($memory_4);
#line 486
$memory_4 = "";
#line 486
$memory_5 = $memory_4;
#line 486
 if (c_rt_lib::get_hashcount($memory_1) > 1) {$memory_1 = {%{$memory_1}};}$memory_1->{'read_dest'} = $memory_5;
#line 486
undef($memory_4);
#line 486
undef($memory_5);
#line 487
$memory_4 = c_rt_lib::ov_mk_none('running');
#line 487
$memory_5 = $memory_4;
#line 487
 if (c_rt_lib::get_hashcount($memory_1) > 1) {$memory_1 = {%{$memory_1}};}$memory_1->{'rstate'} = $memory_5;
#line 487
undef($memory_4);
#line 487
undef($memory_5);
#line 488
interpreter_priv::handle_new_declarations($memory_1);
#line 488
undef($memory_3);
#line 489
goto label_1;
#line 489
label_3:
#line 489
$memory_3 = c_rt_lib::ov_as($memory_0, 'err');
#line 490
$memory_4 = c_rt_lib::ov_mk_arg('error', $memory_3);
#line 490
$memory_5 = $memory_4;
#line 490
 if (c_rt_lib::get_hashcount($memory_1) > 1) {$memory_1 = {%{$memory_1}};}$memory_1->{'rstate'} = $memory_5;
#line 490
undef($memory_4);
#line 490
undef($memory_5);
#line 490
undef($memory_3);
#line 491
goto label_1;
#line 491
label_1:
#line 491
undef($memory_2);
#line 491
undef($memory_0);
#line 491
$_[1] = $memory_1;return;
$_[1] = $memory_1;}

sub interpreter_priv::handle_normal_call($$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;my $memory_13;my $memory_14;my $memory_15;my $memory_16;my $memory_17;$memory_0 = $_[0];$memory_1 = $_[1];$memory_2 = $_[2];Scalar::Util::weaken($_[2]) if ref($_[2]);
#line 494
$memory_3 = "top";
#line 494
$memory_3 = c_rt_lib::get_ref_hash($memory_2, $memory_3);
#line 494
$memory_4 = "next";
#line 494
$memory_4 = c_rt_lib::get_ref_hash($memory_3, $memory_4);
#line 494
$memory_5 = 1;
#line 494
$memory_4 = $memory_4 - $memory_5;
#line 494
$memory_6 = "next";
#line 494
c_rt_lib::set_ref_hash($memory_3, $memory_6, $memory_4);
#line 494
$memory_6 = "top";
#line 494
c_rt_lib::set_ref_hash($memory_2, $memory_6, $memory_3);
#line 494
undef($memory_6);
#line 494
undef($memory_3);
#line 494
undef($memory_4);
#line 494
undef($memory_5);
#line 496
$memory_4 = $memory_0->{'mod'};
#line 496
$memory_5 = "";
#line 496
$memory_4 = c_rt_lib::to_nl($memory_4 eq $memory_5);
#line 496
undef($memory_5);
#line 496
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 496
if (c_rt_lib::check_true($memory_4)) {goto label_2;}
#line 497
$memory_5 = $memory_2->{'top'};
#line 497
$memory_5 = $memory_5->{'module_name'};
#line 497
$memory_3 = $memory_5;
#line 497
undef($memory_5);
#line 498
goto label_1;
#line 498
label_2:
#line 499
$memory_5 = $memory_0->{'mod'};
#line 499
$memory_3 = $memory_5;
#line 499
undef($memory_5);
#line 500
goto label_1;
#line 500
label_1:
#line 500
undef($memory_4);
#line 501
$memory_5 = $memory_2->{'functions'};
#line 501
$memory_4 = hash::get_value($memory_5, $memory_1);
#line 501
undef($memory_5);
#line 502
$memory_6 = $memory_4->{'reg_size'};
#line 502
$memory_5 = interpreter_priv::build_registers($memory_6);
#line 502
undef($memory_6);
#line 503
$memory_6 = {};
#line 504
$memory_7 = {};
#line 505
$memory_8 = 0;
#line 506
$memory_10 = $memory_0->{'args'};
#line 506
$memory_9 = array::len($memory_10);
#line 506
undef($memory_10);
#line 506
$memory_10 = 0;
#line 506
$memory_11 = 1;
#line 506
label_5:
#line 506
$memory_12 = c_rt_lib::to_nl($memory_10 >= $memory_9);
#line 506
if (c_rt_lib::check_true($memory_12)) {goto label_3;}
#line 507
$memory_13 = $memory_0->{'args'};
#line 507
$memory_13 = $memory_13->[$memory_10];
#line 509
$memory_15 = c_rt_lib::ov_is($memory_13, 'val');
#line 509
if (c_rt_lib::check_true($memory_15)) {goto label_7;}
#line 511
$memory_15 = c_rt_lib::ov_is($memory_13, 'ref');
#line 511
if (c_rt_lib::check_true($memory_15)) {goto label_8;}
#line 511
$memory_15 = "NOMATCHALERT";
#line 511
$memory_15 = [$memory_15,$memory_13];
#line 511
die(dfile::ssave($memory_15));
#line 509
label_7:
#line 509
$memory_16 = c_rt_lib::ov_as($memory_13, 'val');
#line 510
$memory_17 = $memory_2->{'top'};
#line 510
$memory_17 = $memory_17->{'vars'};
#line 510
$memory_17 = $memory_17->[$memory_16];
#line 510
$memory_14 = $memory_17;
#line 510
undef($memory_17);
#line 510
undef($memory_16);
#line 511
goto label_6;
#line 511
label_8:
#line 511
$memory_16 = c_rt_lib::ov_as($memory_13, 'ref');
#line 512
$memory_17 = $memory_2->{'top'};
#line 512
$memory_17 = $memory_17->{'vars'};
#line 512
$memory_17 = $memory_17->[$memory_16];
#line 512
$memory_14 = $memory_17;
#line 512
undef($memory_17);
#line 513
hash::set_value($memory_7, $memory_8, $memory_16);
#line 513
undef($memory_16);
#line 514
goto label_6;
#line 514
label_6:
#line 514
undef($memory_15);
#line 515
$memory_15 = $memory_14;
#line 515
 if (c_rt_lib::get_arrcount($memory_5) > 1) {$memory_5 = [@{$memory_5}];}$memory_5->[$memory_8] = $memory_15;
#line 515
undef($memory_15);
#line 516
$memory_15 = 1;
#line 516
$memory_8 = $memory_8 + $memory_15;
#line 516
undef($memory_15);
#line 516
undef($memory_13);
#line 516
undef($memory_14);
#line 517
$memory_10 = $memory_10 + $memory_11;
#line 517
goto label_5;
#line 517
label_3:
#line 517
undef($memory_9);
#line 517
undef($memory_10);
#line 517
undef($memory_11);
#line 517
undef($memory_12);
#line 518
$memory_9 = "stack";
#line 518
$memory_9 = c_rt_lib::get_ref_hash($memory_2, $memory_9);
#line 518
$memory_10 = $memory_2->{'top'};
#line 518
array::push($memory_9, $memory_10);
#line 518
undef($memory_10);
#line 518
$memory_10 = "stack";
#line 518
c_rt_lib::set_ref_hash($memory_2, $memory_10, $memory_9);
#line 518
undef($memory_10);
#line 518
undef($memory_9);
#line 519
$memory_9 = $memory_4;
#line 519
 if (c_rt_lib::get_hashcount($memory_2) > 1) {$memory_2 = {%{$memory_2}};}$memory_2->{'func'} = $memory_9;
#line 519
undef($memory_9);
#line 520
$memory_10 = 0;
#line 520
$memory_11 = $memory_0->{'dest'};
#line 520
$memory_9 = {func_key => $memory_1,module_name => $memory_3,next => $memory_10,vars => $memory_5,ret => $memory_11,code_vars => $memory_6,ref_arguments => $memory_7,};
#line 520
undef($memory_10);
#line 520
undef($memory_11);
#line 520
$memory_10 = $memory_9;
#line 520
 if (c_rt_lib::get_hashcount($memory_2) > 1) {$memory_2 = {%{$memory_2}};}$memory_2->{'top'} = $memory_10;
#line 520
undef($memory_9);
#line 520
undef($memory_10);
#line 529
$memory_9 = 1;
#line 529
$memory_9 = -$memory_9;
#line 529
$memory_10 = $memory_9;
#line 529
 if (c_rt_lib::get_hashcount($memory_2) > 1) {$memory_2 = {%{$memory_2}};}$memory_2->{'instruction_nr'} = $memory_10;
#line 529
undef($memory_9);
#line 529
undef($memory_10);
#line 529
undef($memory_3);
#line 529
undef($memory_4);
#line 529
undef($memory_5);
#line 529
undef($memory_6);
#line 529
undef($memory_7);
#line 529
undef($memory_8);
#line 529
undef($memory_0);
#line 529
undef($memory_1);
#line 529
$_[2] = $memory_2;return;
$_[2] = $memory_2;}

sub interpreter_priv::handle_extern_call($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;my $memory_13;my $memory_14;my $memory_15;my $memory_16;my $memory_17;my $memory_18;$memory_0 = $_[0];$memory_1 = $_[1];Scalar::Util::weaken($_[1]) if ref($_[1]);
#line 533
$memory_2 = [];
#line 534
$memory_3 = $memory_0->{'args'};
#line 534
$memory_5 = 0;
#line 534
$memory_6 = 1;
#line 534
$memory_7 = c_rt_lib::array_len($memory_3);
#line 534
label_3:
#line 534
$memory_8 = c_rt_lib::to_nl($memory_5 >= $memory_7);
#line 534
if (c_rt_lib::check_true($memory_8)) {goto label_1;}
#line 534
$memory_4 = $memory_3->[$memory_5];
#line 536
$memory_10 = c_rt_lib::ov_is($memory_4, 'val');
#line 536
if (c_rt_lib::check_true($memory_10)) {goto label_5;}
#line 538
$memory_10 = c_rt_lib::ov_is($memory_4, 'ref');
#line 538
if (c_rt_lib::check_true($memory_10)) {goto label_6;}
#line 538
$memory_10 = "NOMATCHALERT";
#line 538
$memory_10 = [$memory_10,$memory_4];
#line 538
die(dfile::ssave($memory_10));
#line 536
label_5:
#line 536
$memory_11 = c_rt_lib::ov_as($memory_4, 'val');
#line 537
$memory_12 = $memory_1->{'top'};
#line 537
$memory_12 = $memory_12->{'vars'};
#line 537
$memory_12 = $memory_12->[$memory_11];
#line 537
$memory_9 = $memory_12;
#line 537
undef($memory_12);
#line 537
undef($memory_11);
#line 538
goto label_4;
#line 538
label_6:
#line 538
$memory_11 = c_rt_lib::ov_as($memory_4, 'ref');
#line 539
$memory_12 = $memory_1->{'top'};
#line 539
$memory_12 = $memory_12->{'vars'};
#line 539
$memory_12 = $memory_12->[$memory_11];
#line 539
$memory_9 = $memory_12;
#line 539
undef($memory_12);
#line 539
undef($memory_11);
#line 540
goto label_4;
#line 540
label_4:
#line 540
undef($memory_10);
#line 541
array::push($memory_2, $memory_9);
#line 541
undef($memory_9);
#line 542
$memory_5 = $memory_5 + $memory_6;
#line 542
goto label_3;
#line 542
label_1:
#line 542
undef($memory_3);
#line 542
undef($memory_4);
#line 542
undef($memory_5);
#line 542
undef($memory_6);
#line 542
undef($memory_7);
#line 542
undef($memory_8);
#line 544
$memory_4 = $memory_1->{'known_exec_func'};
#line 544
$memory_5 = $memory_0->{'mod'};
#line 544
$memory_6 = "::";
#line 544
$memory_5 = $memory_5 . $memory_6;
#line 544
undef($memory_6);
#line 544
$memory_6 = $memory_0->{'fun_name'};
#line 544
$memory_5 = $memory_5 . $memory_6;
#line 544
undef($memory_6);
#line 544
$memory_3 = hash::get_value($memory_4, $memory_5);
#line 544
undef($memory_5);
#line 544
undef($memory_4);
#line 546
$memory_5 = $memory_3->{'args'};
#line 546
$memory_4 = array::len($memory_5);
#line 546
undef($memory_5);
#line 546
$memory_5 = array::len($memory_2);
#line 546
$memory_4 = c_rt_lib::to_nl($memory_4 != $memory_5);
#line 546
undef($memory_5);
#line 546
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 546
if (c_rt_lib::check_true($memory_4)) {goto label_8;}
#line 547
$memory_5 = "incorrect console call";
#line 547
$memory_5 = c_rt_lib::ov_mk_arg('error', $memory_5);
#line 547
$memory_6 = $memory_5;
#line 547
 if (c_rt_lib::get_hashcount($memory_1) > 1) {$memory_1 = {%{$memory_1}};}$memory_1->{'rstate'} = $memory_6;
#line 547
undef($memory_5);
#line 547
undef($memory_6);
#line 548
goto label_8;
#line 548
label_8:
#line 548
undef($memory_4);
#line 549
$memory_4 = array::len($memory_2);
#line 549
$memory_5 = 0;
#line 549
$memory_6 = 1;
#line 549
label_11:
#line 549
$memory_7 = c_rt_lib::to_nl($memory_5 >= $memory_4);
#line 549
if (c_rt_lib::check_true($memory_7)) {goto label_9;}
#line 550
$memory_8 = $memory_3->{'args'};
#line 550
$memory_8 = $memory_8->[$memory_5];
#line 550
$memory_9 = $memory_2->[$memory_5];
#line 550
ptd::ensure_only_dynamic($memory_8, $memory_9);
#line 550
undef($memory_9);
#line 550
undef($memory_8);
#line 551
$memory_5 = $memory_5 + $memory_6;
#line 551
goto label_11;
#line 551
label_9:
#line 551
undef($memory_4);
#line 551
undef($memory_5);
#line 551
undef($memory_6);
#line 551
undef($memory_7);
#line 552
$memory_5 = $memory_3->{'func'};
#line 552
$memory_4 = func::exec_ref($memory_5, $memory_2);
#line 552
undef($memory_5);
#line 553
$memory_5 = $memory_3->{'type'};
#line 553
$memory_6 = c_rt_lib::ov_is($memory_5, 'sequential');
#line 553
if (c_rt_lib::check_true($memory_6)) {goto label_13;}
#line 562
$memory_6 = c_rt_lib::ov_is($memory_5, 'callback');
#line 562
if (c_rt_lib::check_true($memory_6)) {goto label_14;}
#line 562
$memory_6 = "NOMATCHALERT";
#line 562
$memory_6 = [$memory_6,$memory_5];
#line 562
die(dfile::ssave($memory_6));
#line 553
label_13:
#line 554
$memory_8 = $memory_0->{'args'};
#line 554
$memory_7 = array::len($memory_8);
#line 554
undef($memory_8);
#line 554
$memory_8 = 0;
#line 554
$memory_9 = 1;
#line 554
label_17:
#line 554
$memory_10 = c_rt_lib::to_nl($memory_8 >= $memory_7);
#line 554
if (c_rt_lib::check_true($memory_10)) {goto label_15;}
#line 555
$memory_11 = $memory_0->{'args'};
#line 555
$memory_11 = $memory_11->[$memory_8];
#line 556
$memory_12 = c_rt_lib::ov_is($memory_11, 'val');
#line 556
if (c_rt_lib::check_true($memory_12)) {goto label_19;}
#line 557
$memory_12 = c_rt_lib::ov_is($memory_11, 'ref');
#line 557
if (c_rt_lib::check_true($memory_12)) {goto label_20;}
#line 557
$memory_12 = "NOMATCHALERT";
#line 557
$memory_12 = [$memory_12,$memory_11];
#line 557
die(dfile::ssave($memory_12));
#line 556
label_19:
#line 556
$memory_13 = c_rt_lib::ov_as($memory_11, 'val');
#line 556
undef($memory_13);
#line 557
goto label_18;
#line 557
label_20:
#line 557
$memory_13 = c_rt_lib::ov_as($memory_11, 'ref');
#line 558
$memory_14 = $memory_2->[$memory_8];
#line 558
$memory_15 = "top";
#line 558
$memory_15 = c_rt_lib::get_ref_hash($memory_1, $memory_15);
#line 558
$memory_16 = "vars";
#line 558
$memory_16 = c_rt_lib::get_ref_hash($memory_15, $memory_16);
#line 558
$memory_17 = $memory_14;
#line 558
 if (c_rt_lib::get_arrcount($memory_16) > 1) {$memory_16 = [@{$memory_16}];}$memory_16->[$memory_13] = $memory_17;
#line 558
$memory_18 = "vars";
#line 558
c_rt_lib::set_ref_hash($memory_15, $memory_18, $memory_16);
#line 558
$memory_18 = "top";
#line 558
c_rt_lib::set_ref_hash($memory_1, $memory_18, $memory_15);
#line 558
undef($memory_18);
#line 558
undef($memory_14);
#line 558
undef($memory_15);
#line 558
undef($memory_16);
#line 558
undef($memory_17);
#line 558
undef($memory_13);
#line 559
goto label_18;
#line 559
label_18:
#line 559
undef($memory_12);
#line 559
undef($memory_11);
#line 560
$memory_8 = $memory_8 + $memory_9;
#line 560
goto label_17;
#line 560
label_15:
#line 560
undef($memory_7);
#line 560
undef($memory_8);
#line 560
undef($memory_9);
#line 560
undef($memory_10);
#line 561
$memory_7 = $memory_0->{'dest'};
#line 561
$memory_8 = "";
#line 561
$memory_7 = c_rt_lib::to_nl($memory_7 eq $memory_8);
#line 561
undef($memory_8);
#line 561
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 561
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 561
if (c_rt_lib::check_true($memory_7)) {goto label_22;}
#line 561
$memory_8 = "top";
#line 561
$memory_8 = c_rt_lib::get_ref_hash($memory_1, $memory_8);
#line 561
$memory_9 = "vars";
#line 561
$memory_9 = c_rt_lib::get_ref_hash($memory_8, $memory_9);
#line 561
$memory_11 = $memory_0->{'dest'};
#line 561
$memory_10 = $memory_4;
#line 561
 if (c_rt_lib::get_arrcount($memory_9) > 1) {$memory_9 = [@{$memory_9}];}$memory_9->[$memory_11] = $memory_10;
#line 561
$memory_12 = "vars";
#line 561
c_rt_lib::set_ref_hash($memory_8, $memory_12, $memory_9);
#line 561
$memory_12 = "top";
#line 561
c_rt_lib::set_ref_hash($memory_1, $memory_12, $memory_8);
#line 561
undef($memory_12);
#line 561
undef($memory_8);
#line 561
undef($memory_9);
#line 561
undef($memory_10);
#line 561
undef($memory_11);
#line 561
goto label_22;
#line 561
label_22:
#line 561
undef($memory_7);
#line 562
goto label_12;
#line 562
label_14:
#line 563
$memory_7 = $memory_0->{'mod'};
#line 563
$memory_8 = "::";
#line 563
$memory_7 = $memory_7 . $memory_8;
#line 563
undef($memory_8);
#line 563
$memory_8 = $memory_0->{'fun_name'};
#line 563
$memory_7 = $memory_7 . $memory_8;
#line 563
undef($memory_8);
#line 563
$memory_7 = c_rt_lib::ov_mk_arg('callback', $memory_7);
#line 563
$memory_8 = $memory_7;
#line 563
 if (c_rt_lib::get_hashcount($memory_1) > 1) {$memory_1 = {%{$memory_1}};}$memory_1->{'rstate'} = $memory_8;
#line 563
undef($memory_7);
#line 563
undef($memory_8);
#line 564
$memory_7 = $memory_0->{'dest'};
#line 564
$memory_8 = $memory_7;
#line 564
 if (c_rt_lib::get_hashcount($memory_1) > 1) {$memory_1 = {%{$memory_1}};}$memory_1->{'read_dest'} = $memory_8;
#line 564
undef($memory_7);
#line 564
undef($memory_8);
#line 565
$memory_7 = 1;
#line 565
$memory_7 = -$memory_7;
#line 565
$memory_8 = $memory_7;
#line 565
 if (c_rt_lib::get_hashcount($memory_1) > 1) {$memory_1 = {%{$memory_1}};}$memory_1->{'instruction_nr'} = $memory_8;
#line 565
undef($memory_7);
#line 565
undef($memory_8);
#line 566
$memory_7 = "top";
#line 566
$memory_7 = c_rt_lib::get_ref_hash($memory_1, $memory_7);
#line 566
$memory_8 = "next";
#line 566
$memory_8 = c_rt_lib::get_ref_hash($memory_7, $memory_8);
#line 566
$memory_9 = 1;
#line 566
$memory_8 = $memory_8 - $memory_9;
#line 566
$memory_10 = "next";
#line 566
c_rt_lib::set_ref_hash($memory_7, $memory_10, $memory_8);
#line 566
$memory_10 = "top";
#line 566
c_rt_lib::set_ref_hash($memory_1, $memory_10, $memory_7);
#line 566
undef($memory_10);
#line 566
undef($memory_7);
#line 566
undef($memory_8);
#line 566
undef($memory_9);
#line 567
goto label_12;
#line 567
label_12:
#line 567
undef($memory_5);
#line 567
undef($memory_6);
#line 567
undef($memory_2);
#line 567
undef($memory_3);
#line 567
undef($memory_4);
#line 567
undef($memory_0);
#line 567
$_[1] = $memory_1;return;
$_[1] = $memory_1;}

sub interpreter_priv::__get_compiler_functions() {
my $memory_0;my $memory_1;my $memory_2;
#line 570
$memory_0 = {};
#line 571
$memory_1 = "array::push";
#line 571
$memory_2 = "";
#line 571
hash::set_value($memory_0, $memory_1, $memory_2);
#line 571
undef($memory_2);
#line 571
undef($memory_1);
#line 572
$memory_1 = "array::pop";
#line 572
$memory_2 = "";
#line 572
hash::set_value($memory_0, $memory_1, $memory_2);
#line 572
undef($memory_2);
#line 572
undef($memory_1);
#line 573
$memory_1 = "array::subarray";
#line 573
$memory_2 = "";
#line 573
hash::set_value($memory_0, $memory_1, $memory_2);
#line 573
undef($memory_2);
#line 573
undef($memory_1);
#line 574
$memory_1 = "array::append";
#line 574
$memory_2 = "";
#line 574
hash::set_value($memory_0, $memory_1, $memory_2);
#line 574
undef($memory_2);
#line 574
undef($memory_1);
#line 575
$memory_1 = "array::len";
#line 575
$memory_2 = "";
#line 575
hash::set_value($memory_0, $memory_1, $memory_2);
#line 575
undef($memory_2);
#line 575
undef($memory_1);
#line 576
$memory_1 = "array::cmp";
#line 576
$memory_2 = "";
#line 576
hash::set_value($memory_0, $memory_1, $memory_2);
#line 576
undef($memory_2);
#line 576
undef($memory_1);
#line 577
$memory_1 = "array::sort";
#line 577
$memory_2 = "";
#line 577
hash::set_value($memory_0, $memory_1, $memory_2);
#line 577
undef($memory_2);
#line 577
undef($memory_1);
#line 579
$memory_1 = "hash::get_value";
#line 579
$memory_2 = "";
#line 579
hash::set_value($memory_0, $memory_1, $memory_2);
#line 579
undef($memory_2);
#line 579
undef($memory_1);
#line 580
$memory_1 = "hash::has_key";
#line 580
$memory_2 = "";
#line 580
hash::set_value($memory_0, $memory_1, $memory_2);
#line 580
undef($memory_2);
#line 580
undef($memory_1);
#line 581
$memory_1 = "hash::set_value";
#line 581
$memory_2 = "";
#line 581
hash::set_value($memory_0, $memory_1, $memory_2);
#line 581
undef($memory_2);
#line 581
undef($memory_1);
#line 582
$memory_1 = "hash::delete";
#line 582
$memory_2 = "";
#line 582
hash::set_value($memory_0, $memory_1, $memory_2);
#line 582
undef($memory_2);
#line 582
undef($memory_1);
#line 583
$memory_1 = "hash::size";
#line 583
$memory_2 = "";
#line 583
hash::set_value($memory_0, $memory_1, $memory_2);
#line 583
undef($memory_2);
#line 583
undef($memory_1);
#line 584
$memory_1 = "hash::keys";
#line 584
$memory_2 = "";
#line 584
hash::set_value($memory_0, $memory_1, $memory_2);
#line 584
undef($memory_2);
#line 584
undef($memory_1);
#line 586
$memory_1 = "string::lf";
#line 586
$memory_2 = "";
#line 586
hash::set_value($memory_0, $memory_1, $memory_2);
#line 586
undef($memory_2);
#line 586
undef($memory_1);
#line 587
$memory_1 = "string::t";
#line 587
$memory_2 = "";
#line 587
hash::set_value($memory_0, $memory_1, $memory_2);
#line 587
undef($memory_2);
#line 587
undef($memory_1);
#line 588
$memory_1 = "string::length";
#line 588
$memory_2 = "";
#line 588
hash::set_value($memory_0, $memory_1, $memory_2);
#line 588
undef($memory_2);
#line 588
undef($memory_1);
#line 589
$memory_1 = "string::substr";
#line 589
$memory_2 = "";
#line 589
hash::set_value($memory_0, $memory_1, $memory_2);
#line 589
undef($memory_2);
#line 589
undef($memory_1);
#line 590
$memory_1 = "string::is_digit";
#line 590
$memory_2 = "";
#line 590
hash::set_value($memory_0, $memory_1, $memory_2);
#line 590
undef($memory_2);
#line 590
undef($memory_1);
#line 591
$memory_1 = "string::is_letter";
#line 591
$memory_2 = "";
#line 591
hash::set_value($memory_0, $memory_1, $memory_2);
#line 591
undef($memory_2);
#line 591
undef($memory_1);
#line 592
$memory_1 = "string::ord";
#line 592
$memory_2 = "";
#line 592
hash::set_value($memory_0, $memory_1, $memory_2);
#line 592
undef($memory_2);
#line 592
undef($memory_1);
#line 593
$memory_1 = "string::chr";
#line 593
$memory_2 = "";
#line 593
hash::set_value($memory_0, $memory_1, $memory_2);
#line 593
undef($memory_2);
#line 593
undef($memory_1);
#line 595
$memory_1 = "ov::mk";
#line 595
$memory_2 = "";
#line 595
hash::set_value($memory_0, $memory_1, $memory_2);
#line 595
undef($memory_2);
#line 595
undef($memory_1);
#line 596
$memory_1 = "ov::mk_val";
#line 596
$memory_2 = "";
#line 596
hash::set_value($memory_0, $memory_1, $memory_2);
#line 596
undef($memory_2);
#line 596
undef($memory_1);
#line 597
$memory_1 = "ov::has_value";
#line 597
$memory_2 = "";
#line 597
hash::set_value($memory_0, $memory_1, $memory_2);
#line 597
undef($memory_2);
#line 597
undef($memory_1);
#line 598
$memory_1 = "ov::get_element";
#line 598
$memory_2 = "";
#line 598
hash::set_value($memory_0, $memory_1, $memory_2);
#line 598
undef($memory_2);
#line 598
undef($memory_1);
#line 599
$memory_1 = "ov::get_value";
#line 599
$memory_2 = "";
#line 599
hash::set_value($memory_0, $memory_1, $memory_2);
#line 599
undef($memory_2);
#line 599
undef($memory_1);
#line 600
$memory_1 = "ov::is";
#line 600
$memory_2 = "";
#line 600
hash::set_value($memory_0, $memory_1, $memory_2);
#line 600
undef($memory_2);
#line 600
undef($memory_1);
#line 601
$memory_1 = "ov::as";
#line 601
$memory_2 = "";
#line 601
hash::set_value($memory_0, $memory_1, $memory_2);
#line 601
undef($memory_2);
#line 601
undef($memory_1);
#line 603
$memory_1 = "c_rt_lib::array_len";
#line 603
$memory_2 = "";
#line 603
hash::set_value($memory_0, $memory_1, $memory_2);
#line 603
undef($memory_2);
#line 603
undef($memory_1);
#line 604
$memory_1 = "c_rt_lib::set_ref_arr";
#line 604
$memory_2 = "";
#line 604
hash::set_value($memory_0, $memory_1, $memory_2);
#line 604
undef($memory_2);
#line 604
undef($memory_1);
#line 605
$memory_1 = "c_rt_lib::set_ref_hash";
#line 605
$memory_2 = "";
#line 605
hash::set_value($memory_0, $memory_1, $memory_2);
#line 605
undef($memory_2);
#line 605
undef($memory_1);
#line 606
$memory_1 = "c_rt_lib::get_ref_arr";
#line 606
$memory_2 = "";
#line 606
hash::set_value($memory_0, $memory_1, $memory_2);
#line 606
undef($memory_2);
#line 606
undef($memory_1);
#line 607
$memory_1 = "c_rt_lib::get_ref_hash";
#line 607
$memory_2 = "";
#line 607
hash::set_value($memory_0, $memory_1, $memory_2);
#line 607
undef($memory_2);
#line 607
undef($memory_1);
#line 608
$memory_1 = "c_rt_lib::init_iter";
#line 608
$memory_2 = "";
#line 608
hash::set_value($memory_0, $memory_1, $memory_2);
#line 608
undef($memory_2);
#line 608
undef($memory_1);
#line 609
$memory_1 = "c_rt_lib::is_end_hash";
#line 609
$memory_2 = "";
#line 609
hash::set_value($memory_0, $memory_1, $memory_2);
#line 609
undef($memory_2);
#line 609
undef($memory_1);
#line 610
$memory_1 = "c_rt_lib::get_key_iter";
#line 610
$memory_2 = "";
#line 610
hash::set_value($memory_0, $memory_1, $memory_2);
#line 610
undef($memory_2);
#line 610
undef($memory_1);
#line 611
$memory_1 = "c_rt_lib::hash_get_value";
#line 611
$memory_2 = "";
#line 611
hash::set_value($memory_0, $memory_1, $memory_2);
#line 611
undef($memory_2);
#line 611
undef($memory_1);
#line 612
$memory_1 = "c_rt_lib::next_iter";
#line 612
$memory_2 = "";
#line 612
hash::set_value($memory_0, $memory_1, $memory_2);
#line 612
undef($memory_2);
#line 612
undef($memory_1);
#line 614
return $memory_0;
#line 614
undef($memory_0);
#line 614
return;
}

my $_get_compiler_functions;
sub interpreter_priv::get_compiler_functions() {
	$_get_compiler_functions = interpreter_priv::__get_compiler_functions() unless defined $_get_compiler_functions;
	return $_get_compiler_functions;
}

sub interpreter_priv::handle_array_call($$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;$memory_0 = $_[0];$memory_1 = $_[1];Scalar::Util::weaken($_[1]) if ref($_[1]);$memory_2 = $_[2];Scalar::Util::weaken($_[2]) if ref($_[2]);
#line 618
$memory_3 = "incorrect command";
#line 618
$memory_3 = c_rt_lib::ov_mk_arg('err', $memory_3);
#line 619
$memory_6 = 0;
#line 619
$memory_5 = $memory_2->[$memory_6];
#line 619
undef($memory_6);
#line 619
$memory_4 = nl::is_array($memory_5);
#line 619
undef($memory_5);
#line 619
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 619
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 619
if (c_rt_lib::check_true($memory_4)) {goto label_2;}
#line 619
undef($memory_0);
#line 619
undef($memory_4);
#line 619
$_[1] = $memory_1;$_[2] = $memory_2;return $memory_3;
#line 619
goto label_2;
#line 619
label_2:
#line 619
undef($memory_4);
#line 620
$memory_4 = "array::push";
#line 620
$memory_4 = c_rt_lib::to_nl($memory_0 eq $memory_4);
#line 620
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 620
if (c_rt_lib::check_true($memory_4)) {goto label_4;}
#line 621
$memory_6 = 0;
#line 621
$memory_5 = c_rt_lib::get_ref_arr($memory_2, $memory_6);
#line 621
$memory_8 = 1;
#line 621
$memory_7 = $memory_2->[$memory_8];
#line 621
undef($memory_8);
#line 621
array::push($memory_5, $memory_7);
#line 621
undef($memory_7);
#line 621
c_rt_lib::set_ref_arr($memory_2, $memory_6, $memory_5);
#line 621
undef($memory_5);
#line 621
undef($memory_6);
#line 622
goto label_3;
#line 622
label_4:
#line 622
$memory_4 = "array::pop";
#line 622
$memory_4 = c_rt_lib::to_nl($memory_0 eq $memory_4);
#line 622
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 622
if (c_rt_lib::check_true($memory_4)) {goto label_5;}
#line 623
$memory_7 = 0;
#line 623
$memory_6 = $memory_2->[$memory_7];
#line 623
undef($memory_7);
#line 623
$memory_5 = array::len($memory_6);
#line 623
undef($memory_6);
#line 623
$memory_6 = 0;
#line 623
$memory_5 = c_rt_lib::to_nl($memory_5 > $memory_6);
#line 623
undef($memory_6);
#line 623
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 623
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 623
if (c_rt_lib::check_true($memory_5)) {goto label_7;}
#line 623
undef($memory_0);
#line 623
undef($memory_4);
#line 623
undef($memory_5);
#line 623
$_[1] = $memory_1;$_[2] = $memory_2;return $memory_3;
#line 623
goto label_7;
#line 623
label_7:
#line 623
undef($memory_5);
#line 624
$memory_6 = 0;
#line 624
$memory_5 = c_rt_lib::get_ref_arr($memory_2, $memory_6);
#line 624
array::pop($memory_5);
#line 624
c_rt_lib::set_ref_arr($memory_2, $memory_6, $memory_5);
#line 624
undef($memory_5);
#line 624
undef($memory_6);
#line 625
goto label_3;
#line 625
label_5:
#line 625
$memory_4 = "array::subarray";
#line 625
$memory_4 = c_rt_lib::to_nl($memory_0 eq $memory_4);
#line 625
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 625
if (c_rt_lib::check_true($memory_4)) {goto label_8;}
#line 626
$memory_8 = 1;
#line 626
$memory_7 = $memory_2->[$memory_8];
#line 626
undef($memory_8);
#line 626
$memory_5 = nl::is_sim($memory_7);
#line 626
undef($memory_7);
#line 626
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 626
if (c_rt_lib::check_true($memory_6)) {goto label_11;}
#line 626
$memory_8 = 2;
#line 626
$memory_7 = $memory_2->[$memory_8];
#line 626
undef($memory_8);
#line 626
$memory_5 = nl::is_sim($memory_7);
#line 626
undef($memory_7);
#line 626
label_11:
#line 626
undef($memory_6);
#line 626
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 626
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 626
if (c_rt_lib::check_true($memory_5)) {goto label_10;}
#line 626
undef($memory_0);
#line 626
undef($memory_4);
#line 626
undef($memory_5);
#line 626
$_[1] = $memory_1;$_[2] = $memory_2;return $memory_3;
#line 626
goto label_10;
#line 626
label_10:
#line 626
undef($memory_5);
#line 627
$memory_8 = 1;
#line 627
$memory_7 = $memory_2->[$memory_8];
#line 627
undef($memory_8);
#line 627
$memory_5 = string_utils::is_number($memory_7);
#line 627
undef($memory_7);
#line 627
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 627
if (c_rt_lib::check_true($memory_6)) {goto label_14;}
#line 627
$memory_8 = 2;
#line 627
$memory_7 = $memory_2->[$memory_8];
#line 627
undef($memory_8);
#line 627
$memory_5 = string_utils::is_number($memory_7);
#line 627
undef($memory_7);
#line 627
label_14:
#line 627
undef($memory_6);
#line 627
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 627
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 627
if (c_rt_lib::check_true($memory_5)) {goto label_13;}
#line 627
undef($memory_0);
#line 627
undef($memory_4);
#line 627
undef($memory_5);
#line 627
$_[1] = $memory_1;$_[2] = $memory_2;return $memory_3;
#line 627
goto label_13;
#line 627
label_13:
#line 627
undef($memory_5);
#line 628
$memory_7 = 1;
#line 628
$memory_5 = $memory_2->[$memory_7];
#line 628
undef($memory_7);
#line 628
$memory_7 = 0;
#line 628
$memory_5 = c_rt_lib::to_nl($memory_5 >= $memory_7);
#line 628
undef($memory_7);
#line 628
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 628
if (c_rt_lib::check_true($memory_6)) {goto label_17;}
#line 628
$memory_7 = 1;
#line 628
$memory_5 = $memory_2->[$memory_7];
#line 628
undef($memory_7);
#line 628
$memory_9 = 0;
#line 628
$memory_8 = $memory_2->[$memory_9];
#line 628
undef($memory_9);
#line 628
$memory_7 = array::len($memory_8);
#line 628
undef($memory_8);
#line 628
$memory_5 = c_rt_lib::to_nl($memory_5 < $memory_7);
#line 628
undef($memory_7);
#line 628
label_17:
#line 628
undef($memory_6);
#line 628
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 628
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 628
if (c_rt_lib::check_true($memory_5)) {goto label_16;}
#line 628
undef($memory_0);
#line 628
undef($memory_4);
#line 628
undef($memory_5);
#line 628
$_[1] = $memory_1;$_[2] = $memory_2;return $memory_3;
#line 628
goto label_16;
#line 628
label_16:
#line 628
undef($memory_5);
#line 629
$memory_6 = 2;
#line 629
$memory_5 = $memory_2->[$memory_6];
#line 629
undef($memory_6);
#line 629
$memory_6 = 0;
#line 629
$memory_5 = c_rt_lib::to_nl($memory_5 >= $memory_6);
#line 629
undef($memory_6);
#line 629
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 629
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 629
if (c_rt_lib::check_true($memory_5)) {goto label_19;}
#line 629
undef($memory_0);
#line 629
undef($memory_4);
#line 629
undef($memory_5);
#line 629
$_[1] = $memory_1;$_[2] = $memory_2;return $memory_3;
#line 629
goto label_19;
#line 629
label_19:
#line 629
undef($memory_5);
#line 630
$memory_7 = 1;
#line 630
$memory_5 = $memory_2->[$memory_7];
#line 630
undef($memory_7);
#line 630
$memory_8 = 2;
#line 630
$memory_7 = $memory_2->[$memory_8];
#line 630
undef($memory_8);
#line 630
$memory_5 = $memory_5 + $memory_7;
#line 630
undef($memory_7);
#line 630
$memory_7 = 0;
#line 630
$memory_5 = c_rt_lib::to_nl($memory_5 >= $memory_7);
#line 630
undef($memory_7);
#line 630
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 630
if (c_rt_lib::check_true($memory_6)) {goto label_22;}
#line 630
$memory_7 = 1;
#line 630
$memory_5 = $memory_2->[$memory_7];
#line 630
undef($memory_7);
#line 630
$memory_8 = 2;
#line 630
$memory_7 = $memory_2->[$memory_8];
#line 630
undef($memory_8);
#line 630
$memory_5 = $memory_5 + $memory_7;
#line 630
undef($memory_7);
#line 630
$memory_7 = 1;
#line 630
$memory_5 = $memory_5 - $memory_7;
#line 630
undef($memory_7);
#line 630
$memory_9 = 0;
#line 630
$memory_8 = $memory_2->[$memory_9];
#line 630
undef($memory_9);
#line 630
$memory_7 = array::len($memory_8);
#line 630
undef($memory_8);
#line 630
$memory_5 = c_rt_lib::to_nl($memory_5 < $memory_7);
#line 630
undef($memory_7);
#line 630
label_22:
#line 630
undef($memory_6);
#line 630
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 630
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 630
if (c_rt_lib::check_true($memory_5)) {goto label_21;}
#line 630
undef($memory_0);
#line 630
undef($memory_4);
#line 630
undef($memory_5);
#line 630
$_[1] = $memory_1;$_[2] = $memory_2;return $memory_3;
#line 630
goto label_21;
#line 630
label_21:
#line 630
undef($memory_5);
#line 631
$memory_7 = 0;
#line 631
$memory_6 = $memory_2->[$memory_7];
#line 631
undef($memory_7);
#line 631
$memory_8 = 1;
#line 631
$memory_7 = $memory_2->[$memory_8];
#line 631
undef($memory_8);
#line 631
$memory_9 = 2;
#line 631
$memory_8 = $memory_2->[$memory_9];
#line 631
undef($memory_9);
#line 631
$memory_5 = array::subarray($memory_6, $memory_7, $memory_8);
#line 631
undef($memory_8);
#line 631
undef($memory_7);
#line 631
undef($memory_6);
#line 631
$memory_1 = $memory_5;
#line 631
undef($memory_5);
#line 632
goto label_3;
#line 632
label_8:
#line 632
$memory_4 = "array::append";
#line 632
$memory_4 = c_rt_lib::to_nl($memory_0 eq $memory_4);
#line 632
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 632
if (c_rt_lib::check_true($memory_4)) {goto label_23;}
#line 633
$memory_7 = 1;
#line 633
$memory_6 = $memory_2->[$memory_7];
#line 633
undef($memory_7);
#line 633
$memory_5 = nl::is_array($memory_6);
#line 633
undef($memory_6);
#line 633
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 633
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 633
if (c_rt_lib::check_true($memory_5)) {goto label_25;}
#line 633
undef($memory_0);
#line 633
undef($memory_4);
#line 633
undef($memory_5);
#line 633
$_[1] = $memory_1;$_[2] = $memory_2;return $memory_3;
#line 633
goto label_25;
#line 633
label_25:
#line 633
undef($memory_5);
#line 634
$memory_6 = 0;
#line 634
$memory_5 = c_rt_lib::get_ref_arr($memory_2, $memory_6);
#line 634
$memory_8 = 1;
#line 634
$memory_7 = $memory_2->[$memory_8];
#line 634
undef($memory_8);
#line 634
array::append($memory_5, $memory_7);
#line 634
undef($memory_7);
#line 634
c_rt_lib::set_ref_arr($memory_2, $memory_6, $memory_5);
#line 634
undef($memory_5);
#line 634
undef($memory_6);
#line 635
goto label_3;
#line 635
label_23:
#line 635
$memory_4 = "array::len";
#line 635
$memory_4 = c_rt_lib::to_nl($memory_0 eq $memory_4);
#line 635
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 635
if (c_rt_lib::check_true($memory_4)) {goto label_26;}
#line 636
$memory_7 = 0;
#line 636
$memory_6 = $memory_2->[$memory_7];
#line 636
undef($memory_7);
#line 636
$memory_5 = array::len($memory_6);
#line 636
undef($memory_6);
#line 636
$memory_1 = $memory_5;
#line 636
undef($memory_5);
#line 637
goto label_3;
#line 637
label_26:
#line 637
$memory_4 = "array::cmp";
#line 637
$memory_4 = c_rt_lib::to_nl($memory_0 eq $memory_4);
#line 637
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 637
if (c_rt_lib::check_true($memory_4)) {goto label_27;}
#line 638
$memory_7 = 1;
#line 638
$memory_6 = $memory_2->[$memory_7];
#line 638
undef($memory_7);
#line 638
$memory_5 = nl::is_array($memory_6);
#line 638
undef($memory_6);
#line 638
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 638
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 638
if (c_rt_lib::check_true($memory_5)) {goto label_29;}
#line 638
undef($memory_0);
#line 638
undef($memory_4);
#line 638
undef($memory_5);
#line 638
$_[1] = $memory_1;$_[2] = $memory_2;return $memory_3;
#line 638
goto label_29;
#line 638
label_29:
#line 638
undef($memory_5);
#line 639
$memory_7 = 0;
#line 639
$memory_6 = $memory_2->[$memory_7];
#line 639
undef($memory_7);
#line 639
$memory_8 = 1;
#line 639
$memory_7 = $memory_2->[$memory_8];
#line 639
undef($memory_8);
#line 639
$memory_5 = array::cmp($memory_6, $memory_7);
#line 639
undef($memory_7);
#line 639
undef($memory_6);
#line 639
$memory_1 = $memory_5;
#line 639
undef($memory_5);
#line 640
goto label_3;
#line 640
label_27:
#line 640
$memory_4 = "array::sort";
#line 640
$memory_4 = c_rt_lib::to_nl($memory_0 eq $memory_4);
#line 640
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 640
if (c_rt_lib::check_true($memory_4)) {goto label_30;}
#line 641
$memory_6 = 0;
#line 641
$memory_5 = $memory_2->[$memory_6];
#line 641
undef($memory_6);
#line 641
$memory_1 = $memory_5;
#line 641
undef($memory_5);
#line 642
array::sort($memory_1);
#line 643
goto label_3;
#line 643
label_30:
#line 644
$memory_5 = [];
#line 644
die(dfile::ssave($memory_5));
#line 644
undef($memory_5);
#line 645
goto label_3;
#line 645
label_3:
#line 645
undef($memory_4);
#line 646
$memory_4 = "";
#line 646
$memory_4 = c_rt_lib::ov_mk_arg('ok', $memory_4);
#line 646
undef($memory_0);
#line 646
undef($memory_3);
#line 646
$_[1] = $memory_1;$_[2] = $memory_2;return $memory_4;
#line 646
undef($memory_4);
#line 646
undef($memory_3);
#line 646
undef($memory_0);
#line 646
$_[1] = $memory_1;$_[2] = $memory_2;return;
$_[1] = $memory_1;$_[2] = $memory_2;}

sub interpreter_priv::handle_hash_call($$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;$memory_0 = $_[0];$memory_1 = $_[1];Scalar::Util::weaken($_[1]) if ref($_[1]);$memory_2 = $_[2];Scalar::Util::weaken($_[2]) if ref($_[2]);
#line 650
$memory_3 = "incorrect command";
#line 650
$memory_3 = c_rt_lib::ov_mk_arg('err', $memory_3);
#line 651
$memory_6 = 0;
#line 651
$memory_5 = $memory_2->[$memory_6];
#line 651
undef($memory_6);
#line 651
$memory_4 = nl::is_hash($memory_5);
#line 651
undef($memory_5);
#line 651
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 651
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 651
if (c_rt_lib::check_true($memory_4)) {goto label_2;}
#line 651
undef($memory_0);
#line 651
undef($memory_4);
#line 651
$_[1] = $memory_1;$_[2] = $memory_2;return $memory_3;
#line 651
goto label_2;
#line 651
label_2:
#line 651
undef($memory_4);
#line 652
$memory_4 = "hash::get_value";
#line 652
$memory_4 = c_rt_lib::to_nl($memory_0 eq $memory_4);
#line 652
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 652
if (c_rt_lib::check_true($memory_4)) {goto label_4;}
#line 653
$memory_7 = 1;
#line 653
$memory_6 = $memory_2->[$memory_7];
#line 653
undef($memory_7);
#line 653
$memory_5 = nl::is_sim($memory_6);
#line 653
undef($memory_6);
#line 653
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 653
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 653
if (c_rt_lib::check_true($memory_5)) {goto label_6;}
#line 653
undef($memory_0);
#line 653
undef($memory_4);
#line 653
undef($memory_5);
#line 653
$_[1] = $memory_1;$_[2] = $memory_2;return $memory_3;
#line 653
goto label_6;
#line 653
label_6:
#line 653
undef($memory_5);
#line 654
$memory_7 = 0;
#line 654
$memory_6 = $memory_2->[$memory_7];
#line 654
undef($memory_7);
#line 654
$memory_8 = 1;
#line 654
$memory_7 = $memory_2->[$memory_8];
#line 654
undef($memory_8);
#line 654
$memory_5 = hash::has_key($memory_6, $memory_7);
#line 654
undef($memory_7);
#line 654
undef($memory_6);
#line 654
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 654
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 654
if (c_rt_lib::check_true($memory_5)) {goto label_8;}
#line 654
undef($memory_0);
#line 654
undef($memory_4);
#line 654
undef($memory_5);
#line 654
$_[1] = $memory_1;$_[2] = $memory_2;return $memory_3;
#line 654
goto label_8;
#line 654
label_8:
#line 654
undef($memory_5);
#line 655
$memory_7 = 0;
#line 655
$memory_6 = $memory_2->[$memory_7];
#line 655
undef($memory_7);
#line 655
$memory_8 = 1;
#line 655
$memory_7 = $memory_2->[$memory_8];
#line 655
undef($memory_8);
#line 655
$memory_5 = hash::get_value($memory_6, $memory_7);
#line 655
undef($memory_7);
#line 655
undef($memory_6);
#line 655
$memory_1 = $memory_5;
#line 655
undef($memory_5);
#line 656
goto label_3;
#line 656
label_4:
#line 656
$memory_4 = "hash::has_key";
#line 656
$memory_4 = c_rt_lib::to_nl($memory_0 eq $memory_4);
#line 656
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 656
if (c_rt_lib::check_true($memory_4)) {goto label_9;}
#line 657
$memory_7 = 1;
#line 657
$memory_6 = $memory_2->[$memory_7];
#line 657
undef($memory_7);
#line 657
$memory_5 = nl::is_sim($memory_6);
#line 657
undef($memory_6);
#line 657
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 657
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 657
if (c_rt_lib::check_true($memory_5)) {goto label_11;}
#line 657
undef($memory_0);
#line 657
undef($memory_4);
#line 657
undef($memory_5);
#line 657
$_[1] = $memory_1;$_[2] = $memory_2;return $memory_3;
#line 657
goto label_11;
#line 657
label_11:
#line 657
undef($memory_5);
#line 658
$memory_7 = 0;
#line 658
$memory_6 = $memory_2->[$memory_7];
#line 658
undef($memory_7);
#line 658
$memory_8 = 1;
#line 658
$memory_7 = $memory_2->[$memory_8];
#line 658
undef($memory_8);
#line 658
$memory_5 = hash::has_key($memory_6, $memory_7);
#line 658
undef($memory_7);
#line 658
undef($memory_6);
#line 658
$memory_1 = $memory_5;
#line 658
undef($memory_5);
#line 659
goto label_3;
#line 659
label_9:
#line 659
$memory_4 = "hash::set_value";
#line 659
$memory_4 = c_rt_lib::to_nl($memory_0 eq $memory_4);
#line 659
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 659
if (c_rt_lib::check_true($memory_4)) {goto label_12;}
#line 660
$memory_7 = 1;
#line 660
$memory_6 = $memory_2->[$memory_7];
#line 660
undef($memory_7);
#line 660
$memory_5 = nl::is_sim($memory_6);
#line 660
undef($memory_6);
#line 660
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 660
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 660
if (c_rt_lib::check_true($memory_5)) {goto label_14;}
#line 660
undef($memory_0);
#line 660
undef($memory_4);
#line 660
undef($memory_5);
#line 660
$_[1] = $memory_1;$_[2] = $memory_2;return $memory_3;
#line 660
goto label_14;
#line 660
label_14:
#line 660
undef($memory_5);
#line 661
$memory_6 = 0;
#line 661
$memory_5 = c_rt_lib::get_ref_arr($memory_2, $memory_6);
#line 661
$memory_8 = 1;
#line 661
$memory_7 = $memory_2->[$memory_8];
#line 661
undef($memory_8);
#line 661
$memory_9 = 2;
#line 661
$memory_8 = $memory_2->[$memory_9];
#line 661
undef($memory_9);
#line 661
hash::set_value($memory_5, $memory_7, $memory_8);
#line 661
undef($memory_8);
#line 661
undef($memory_7);
#line 661
c_rt_lib::set_ref_arr($memory_2, $memory_6, $memory_5);
#line 661
undef($memory_5);
#line 661
undef($memory_6);
#line 662
goto label_3;
#line 662
label_12:
#line 662
$memory_4 = "hash::delete";
#line 662
$memory_4 = c_rt_lib::to_nl($memory_0 eq $memory_4);
#line 662
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 662
if (c_rt_lib::check_true($memory_4)) {goto label_15;}
#line 663
$memory_7 = 1;
#line 663
$memory_6 = $memory_2->[$memory_7];
#line 663
undef($memory_7);
#line 663
$memory_5 = nl::is_sim($memory_6);
#line 663
undef($memory_6);
#line 663
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 663
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 663
if (c_rt_lib::check_true($memory_5)) {goto label_17;}
#line 663
undef($memory_0);
#line 663
undef($memory_4);
#line 663
undef($memory_5);
#line 663
$_[1] = $memory_1;$_[2] = $memory_2;return $memory_3;
#line 663
goto label_17;
#line 663
label_17:
#line 663
undef($memory_5);
#line 664
$memory_6 = 0;
#line 664
$memory_5 = c_rt_lib::get_ref_arr($memory_2, $memory_6);
#line 664
$memory_8 = 1;
#line 664
$memory_7 = $memory_2->[$memory_8];
#line 664
undef($memory_8);
#line 664
hash::delete($memory_5, $memory_7);
#line 664
undef($memory_7);
#line 664
c_rt_lib::set_ref_arr($memory_2, $memory_6, $memory_5);
#line 664
undef($memory_5);
#line 664
undef($memory_6);
#line 665
goto label_3;
#line 665
label_15:
#line 665
$memory_4 = "hash::size";
#line 665
$memory_4 = c_rt_lib::to_nl($memory_0 eq $memory_4);
#line 665
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 665
if (c_rt_lib::check_true($memory_4)) {goto label_18;}
#line 666
$memory_7 = 0;
#line 666
$memory_6 = $memory_2->[$memory_7];
#line 666
undef($memory_7);
#line 666
$memory_5 = hash::size($memory_6);
#line 666
undef($memory_6);
#line 666
$memory_1 = $memory_5;
#line 666
undef($memory_5);
#line 667
goto label_3;
#line 667
label_18:
#line 667
$memory_4 = "hash::keys";
#line 667
$memory_4 = c_rt_lib::to_nl($memory_0 eq $memory_4);
#line 667
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 667
if (c_rt_lib::check_true($memory_4)) {goto label_19;}
#line 668
$memory_7 = 0;
#line 668
$memory_6 = $memory_2->[$memory_7];
#line 668
undef($memory_7);
#line 668
$memory_5 = hash::keys($memory_6);
#line 668
undef($memory_6);
#line 668
$memory_1 = $memory_5;
#line 668
undef($memory_5);
#line 669
goto label_3;
#line 669
label_19:
#line 670
$memory_5 = [];
#line 670
die(dfile::ssave($memory_5));
#line 670
undef($memory_5);
#line 671
goto label_3;
#line 671
label_3:
#line 671
undef($memory_4);
#line 672
$memory_4 = "";
#line 672
$memory_4 = c_rt_lib::ov_mk_arg('ok', $memory_4);
#line 672
undef($memory_0);
#line 672
undef($memory_3);
#line 672
$_[1] = $memory_1;$_[2] = $memory_2;return $memory_4;
#line 672
undef($memory_4);
#line 672
undef($memory_3);
#line 672
undef($memory_0);
#line 672
$_[1] = $memory_1;$_[2] = $memory_2;return;
$_[1] = $memory_1;$_[2] = $memory_2;}

sub interpreter_priv::handle_string_call($$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;$memory_0 = $_[0];$memory_1 = $_[1];Scalar::Util::weaken($_[1]) if ref($_[1]);$memory_2 = $_[2];Scalar::Util::weaken($_[2]) if ref($_[2]);
#line 676
$memory_3 = "incorrect command";
#line 676
$memory_3 = c_rt_lib::ov_mk_arg('err', $memory_3);
#line 677
$memory_4 = "string::lf";
#line 677
$memory_4 = c_rt_lib::to_nl($memory_0 eq $memory_4);
#line 677
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 677
if (c_rt_lib::check_true($memory_4)) {goto label_2;}
#line 678
$memory_5 = string::lf();
#line 678
$memory_1 = $memory_5;
#line 678
undef($memory_5);
#line 679
goto label_1;
#line 679
label_2:
#line 679
$memory_4 = "string::tab";
#line 679
$memory_4 = c_rt_lib::to_nl($memory_0 eq $memory_4);
#line 679
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 679
if (c_rt_lib::check_true($memory_4)) {goto label_3;}
#line 680
$memory_5 = string::tab();
#line 680
$memory_1 = $memory_5;
#line 680
undef($memory_5);
#line 681
goto label_1;
#line 681
label_3:
#line 681
$memory_4 = "string::ord";
#line 681
$memory_4 = c_rt_lib::to_nl($memory_0 eq $memory_4);
#line 681
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 681
if (c_rt_lib::check_true($memory_4)) {goto label_4;}
#line 682
$memory_7 = 0;
#line 682
$memory_6 = $memory_2->[$memory_7];
#line 682
undef($memory_7);
#line 682
$memory_5 = nl::is_sim($memory_6);
#line 682
undef($memory_6);
#line 682
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 682
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 682
if (c_rt_lib::check_true($memory_5)) {goto label_6;}
#line 682
undef($memory_0);
#line 682
undef($memory_4);
#line 682
undef($memory_5);
#line 682
$_[1] = $memory_1;$_[2] = $memory_2;return $memory_3;
#line 682
goto label_6;
#line 682
label_6:
#line 682
undef($memory_5);
#line 683
$memory_7 = 0;
#line 683
$memory_6 = $memory_2->[$memory_7];
#line 683
undef($memory_7);
#line 683
$memory_5 = string::length($memory_6);
#line 683
undef($memory_6);
#line 683
$memory_6 = 1;
#line 683
$memory_5 = c_rt_lib::to_nl($memory_5 == $memory_6);
#line 683
undef($memory_6);
#line 683
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 683
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 683
if (c_rt_lib::check_true($memory_5)) {goto label_8;}
#line 683
undef($memory_0);
#line 683
undef($memory_4);
#line 683
undef($memory_5);
#line 683
$_[1] = $memory_1;$_[2] = $memory_2;return $memory_3;
#line 683
goto label_8;
#line 683
label_8:
#line 683
undef($memory_5);
#line 684
$memory_7 = 0;
#line 684
$memory_6 = $memory_2->[$memory_7];
#line 684
undef($memory_7);
#line 684
$memory_5 = string::ord($memory_6);
#line 684
undef($memory_6);
#line 684
$memory_1 = $memory_5;
#line 684
undef($memory_5);
#line 685
goto label_1;
#line 685
label_4:
#line 685
$memory_4 = "string::chr";
#line 685
$memory_4 = c_rt_lib::to_nl($memory_0 eq $memory_4);
#line 685
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 685
if (c_rt_lib::check_true($memory_4)) {goto label_9;}
#line 686
$memory_7 = 0;
#line 686
$memory_6 = $memory_2->[$memory_7];
#line 686
undef($memory_7);
#line 686
$memory_5 = nl::is_sim($memory_6);
#line 686
undef($memory_6);
#line 686
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 686
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 686
if (c_rt_lib::check_true($memory_5)) {goto label_11;}
#line 686
undef($memory_0);
#line 686
undef($memory_4);
#line 686
undef($memory_5);
#line 686
$_[1] = $memory_1;$_[2] = $memory_2;return $memory_3;
#line 686
goto label_11;
#line 686
label_11:
#line 686
undef($memory_5);
#line 687
$memory_7 = 0;
#line 687
$memory_6 = $memory_2->[$memory_7];
#line 687
undef($memory_7);
#line 687
$memory_5 = string_utils::is_number($memory_6);
#line 687
undef($memory_6);
#line 687
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 687
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 687
if (c_rt_lib::check_true($memory_5)) {goto label_13;}
#line 687
undef($memory_0);
#line 687
undef($memory_4);
#line 687
undef($memory_5);
#line 687
$_[1] = $memory_1;$_[2] = $memory_2;return $memory_3;
#line 687
goto label_13;
#line 687
label_13:
#line 687
undef($memory_5);
#line 688
$memory_7 = 0;
#line 688
$memory_6 = $memory_2->[$memory_7];
#line 688
undef($memory_7);
#line 688
$memory_5 = string::chr($memory_6);
#line 688
undef($memory_6);
#line 688
$memory_1 = $memory_5;
#line 688
undef($memory_5);
#line 689
goto label_1;
#line 689
label_9:
#line 690
$memory_7 = 0;
#line 690
$memory_6 = $memory_2->[$memory_7];
#line 690
undef($memory_7);
#line 690
$memory_5 = nl::is_sim($memory_6);
#line 690
undef($memory_6);
#line 690
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 690
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 690
if (c_rt_lib::check_true($memory_5)) {goto label_15;}
#line 690
undef($memory_0);
#line 690
undef($memory_4);
#line 690
undef($memory_5);
#line 690
$_[1] = $memory_1;$_[2] = $memory_2;return $memory_3;
#line 690
goto label_15;
#line 690
label_15:
#line 690
undef($memory_5);
#line 691
$memory_5 = "string::length";
#line 691
$memory_5 = c_rt_lib::to_nl($memory_0 eq $memory_5);
#line 691
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 691
if (c_rt_lib::check_true($memory_5)) {goto label_17;}
#line 692
$memory_8 = 0;
#line 692
$memory_7 = $memory_2->[$memory_8];
#line 692
undef($memory_8);
#line 692
$memory_6 = string::length($memory_7);
#line 692
undef($memory_7);
#line 692
$memory_1 = $memory_6;
#line 692
undef($memory_6);
#line 693
goto label_16;
#line 693
label_17:
#line 693
$memory_5 = "string::substr";
#line 693
$memory_5 = c_rt_lib::to_nl($memory_0 eq $memory_5);
#line 693
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 693
if (c_rt_lib::check_true($memory_5)) {goto label_18;}
#line 694
$memory_9 = 1;
#line 694
$memory_8 = $memory_2->[$memory_9];
#line 694
undef($memory_9);
#line 694
$memory_6 = nl::is_sim($memory_8);
#line 694
undef($memory_8);
#line 694
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 694
if (c_rt_lib::check_true($memory_7)) {goto label_21;}
#line 694
$memory_9 = 2;
#line 694
$memory_8 = $memory_2->[$memory_9];
#line 694
undef($memory_9);
#line 694
$memory_6 = nl::is_sim($memory_8);
#line 694
undef($memory_8);
#line 694
label_21:
#line 694
undef($memory_7);
#line 694
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 694
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 694
if (c_rt_lib::check_true($memory_6)) {goto label_20;}
#line 694
undef($memory_0);
#line 694
undef($memory_4);
#line 694
undef($memory_5);
#line 694
undef($memory_6);
#line 694
$_[1] = $memory_1;$_[2] = $memory_2;return $memory_3;
#line 694
goto label_20;
#line 694
label_20:
#line 694
undef($memory_6);
#line 695
$memory_9 = 1;
#line 695
$memory_8 = $memory_2->[$memory_9];
#line 695
undef($memory_9);
#line 695
$memory_6 = string_utils::is_number($memory_8);
#line 695
undef($memory_8);
#line 695
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 695
if (c_rt_lib::check_true($memory_7)) {goto label_24;}
#line 695
$memory_9 = 2;
#line 695
$memory_8 = $memory_2->[$memory_9];
#line 695
undef($memory_9);
#line 695
$memory_6 = string_utils::is_number($memory_8);
#line 695
undef($memory_8);
#line 695
label_24:
#line 695
undef($memory_7);
#line 695
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 695
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 695
if (c_rt_lib::check_true($memory_6)) {goto label_23;}
#line 695
undef($memory_0);
#line 695
undef($memory_4);
#line 695
undef($memory_5);
#line 695
undef($memory_6);
#line 695
$_[1] = $memory_1;$_[2] = $memory_2;return $memory_3;
#line 695
goto label_23;
#line 695
label_23:
#line 695
undef($memory_6);
#line 696
$memory_8 = 1;
#line 696
$memory_6 = $memory_2->[$memory_8];
#line 696
undef($memory_8);
#line 696
$memory_8 = 0;
#line 696
$memory_6 = c_rt_lib::to_nl($memory_6 >= $memory_8);
#line 696
undef($memory_8);
#line 696
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 696
if (c_rt_lib::check_true($memory_7)) {goto label_27;}
#line 696
$memory_8 = 1;
#line 696
$memory_6 = $memory_2->[$memory_8];
#line 696
undef($memory_8);
#line 696
$memory_10 = 0;
#line 696
$memory_9 = $memory_2->[$memory_10];
#line 696
undef($memory_10);
#line 696
$memory_8 = string::length($memory_9);
#line 696
undef($memory_9);
#line 696
$memory_6 = c_rt_lib::to_nl($memory_6 < $memory_8);
#line 696
undef($memory_8);
#line 696
label_27:
#line 696
undef($memory_7);
#line 696
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 696
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 696
if (c_rt_lib::check_true($memory_6)) {goto label_26;}
#line 696
undef($memory_0);
#line 696
undef($memory_4);
#line 696
undef($memory_5);
#line 696
undef($memory_6);
#line 696
$_[1] = $memory_1;$_[2] = $memory_2;return $memory_3;
#line 696
goto label_26;
#line 696
label_26:
#line 696
undef($memory_6);
#line 697
$memory_7 = 2;
#line 697
$memory_6 = $memory_2->[$memory_7];
#line 697
undef($memory_7);
#line 697
$memory_7 = 0;
#line 697
$memory_6 = c_rt_lib::to_nl($memory_6 >= $memory_7);
#line 697
undef($memory_7);
#line 697
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 697
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 697
if (c_rt_lib::check_true($memory_6)) {goto label_29;}
#line 697
undef($memory_0);
#line 697
undef($memory_4);
#line 697
undef($memory_5);
#line 697
undef($memory_6);
#line 697
$_[1] = $memory_1;$_[2] = $memory_2;return $memory_3;
#line 697
goto label_29;
#line 697
label_29:
#line 697
undef($memory_6);
#line 698
$memory_8 = 1;
#line 698
$memory_6 = $memory_2->[$memory_8];
#line 698
undef($memory_8);
#line 698
$memory_9 = 2;
#line 698
$memory_8 = $memory_2->[$memory_9];
#line 698
undef($memory_9);
#line 698
$memory_6 = $memory_6 + $memory_8;
#line 698
undef($memory_8);
#line 698
$memory_8 = 0;
#line 698
$memory_6 = c_rt_lib::to_nl($memory_6 >= $memory_8);
#line 698
undef($memory_8);
#line 698
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 698
if (c_rt_lib::check_true($memory_7)) {goto label_32;}
#line 698
$memory_8 = 1;
#line 698
$memory_6 = $memory_2->[$memory_8];
#line 698
undef($memory_8);
#line 698
$memory_9 = 2;
#line 698
$memory_8 = $memory_2->[$memory_9];
#line 698
undef($memory_9);
#line 698
$memory_6 = $memory_6 + $memory_8;
#line 698
undef($memory_8);
#line 698
$memory_8 = 1;
#line 698
$memory_6 = $memory_6 - $memory_8;
#line 698
undef($memory_8);
#line 698
$memory_10 = 0;
#line 698
$memory_9 = $memory_2->[$memory_10];
#line 698
undef($memory_10);
#line 698
$memory_8 = string::length($memory_9);
#line 698
undef($memory_9);
#line 698
$memory_6 = c_rt_lib::to_nl($memory_6 < $memory_8);
#line 698
undef($memory_8);
#line 698
label_32:
#line 698
undef($memory_7);
#line 698
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 698
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 698
if (c_rt_lib::check_true($memory_6)) {goto label_31;}
#line 698
undef($memory_0);
#line 698
undef($memory_4);
#line 698
undef($memory_5);
#line 698
undef($memory_6);
#line 698
$_[1] = $memory_1;$_[2] = $memory_2;return $memory_3;
#line 698
goto label_31;
#line 698
label_31:
#line 698
undef($memory_6);
#line 699
$memory_8 = 0;
#line 699
$memory_7 = $memory_2->[$memory_8];
#line 699
undef($memory_8);
#line 699
$memory_9 = 1;
#line 699
$memory_8 = $memory_2->[$memory_9];
#line 699
undef($memory_9);
#line 699
$memory_10 = 2;
#line 699
$memory_9 = $memory_2->[$memory_10];
#line 699
undef($memory_10);
#line 699
$memory_6 = string::substr($memory_7, $memory_8, $memory_9);
#line 699
undef($memory_9);
#line 699
undef($memory_8);
#line 699
undef($memory_7);
#line 699
$memory_1 = $memory_6;
#line 699
undef($memory_6);
#line 700
goto label_16;
#line 700
label_18:
#line 700
$memory_5 = "string::is_digit";
#line 700
$memory_5 = c_rt_lib::to_nl($memory_0 eq $memory_5);
#line 700
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 700
if (c_rt_lib::check_true($memory_5)) {goto label_33;}
#line 701
$memory_8 = 0;
#line 701
$memory_7 = $memory_2->[$memory_8];
#line 701
undef($memory_8);
#line 701
$memory_6 = string::length($memory_7);
#line 701
undef($memory_7);
#line 701
$memory_7 = 1;
#line 701
$memory_6 = c_rt_lib::to_nl($memory_6 == $memory_7);
#line 701
undef($memory_7);
#line 701
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 701
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 701
if (c_rt_lib::check_true($memory_6)) {goto label_35;}
#line 701
undef($memory_0);
#line 701
undef($memory_4);
#line 701
undef($memory_5);
#line 701
undef($memory_6);
#line 701
$_[1] = $memory_1;$_[2] = $memory_2;return $memory_3;
#line 701
goto label_35;
#line 701
label_35:
#line 701
undef($memory_6);
#line 702
$memory_8 = 0;
#line 702
$memory_7 = $memory_2->[$memory_8];
#line 702
undef($memory_8);
#line 702
$memory_6 = string::is_digit($memory_7);
#line 702
undef($memory_7);
#line 702
$memory_1 = $memory_6;
#line 702
undef($memory_6);
#line 703
goto label_16;
#line 703
label_33:
#line 703
$memory_5 = "string::is_letter";
#line 703
$memory_5 = c_rt_lib::to_nl($memory_0 eq $memory_5);
#line 703
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 703
if (c_rt_lib::check_true($memory_5)) {goto label_36;}
#line 704
$memory_8 = 0;
#line 704
$memory_7 = $memory_2->[$memory_8];
#line 704
undef($memory_8);
#line 704
$memory_6 = string::length($memory_7);
#line 704
undef($memory_7);
#line 704
$memory_7 = 1;
#line 704
$memory_6 = c_rt_lib::to_nl($memory_6 == $memory_7);
#line 704
undef($memory_7);
#line 704
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 704
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 704
if (c_rt_lib::check_true($memory_6)) {goto label_38;}
#line 704
undef($memory_0);
#line 704
undef($memory_4);
#line 704
undef($memory_5);
#line 704
undef($memory_6);
#line 704
$_[1] = $memory_1;$_[2] = $memory_2;return $memory_3;
#line 704
goto label_38;
#line 704
label_38:
#line 704
undef($memory_6);
#line 705
$memory_8 = 0;
#line 705
$memory_7 = $memory_2->[$memory_8];
#line 705
undef($memory_8);
#line 705
$memory_6 = string::is_letter($memory_7);
#line 705
undef($memory_7);
#line 705
$memory_1 = $memory_6;
#line 705
undef($memory_6);
#line 706
goto label_16;
#line 706
label_36:
#line 707
$memory_6 = [];
#line 707
die(dfile::ssave($memory_6));
#line 707
undef($memory_6);
#line 708
goto label_16;
#line 708
label_16:
#line 708
undef($memory_5);
#line 709
goto label_1;
#line 709
label_1:
#line 709
undef($memory_4);
#line 710
$memory_4 = "";
#line 710
$memory_4 = c_rt_lib::ov_mk_arg('ok', $memory_4);
#line 710
undef($memory_0);
#line 710
undef($memory_3);
#line 710
$_[1] = $memory_1;$_[2] = $memory_2;return $memory_4;
#line 710
undef($memory_4);
#line 710
undef($memory_3);
#line 710
undef($memory_0);
#line 710
$_[1] = $memory_1;$_[2] = $memory_2;return;
$_[1] = $memory_1;$_[2] = $memory_2;}

sub interpreter_priv::handle_ov_call($$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;$memory_0 = $_[0];$memory_1 = $_[1];Scalar::Util::weaken($_[1]) if ref($_[1]);$memory_2 = $_[2];Scalar::Util::weaken($_[2]) if ref($_[2]);
#line 714
$memory_3 = "incorrect command";
#line 714
$memory_3 = c_rt_lib::ov_mk_arg('err', $memory_3);
#line 715
$memory_4 = "ov::mk";
#line 715
$memory_4 = c_rt_lib::to_nl($memory_0 eq $memory_4);
#line 715
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 715
if (c_rt_lib::check_true($memory_4)) {goto label_2;}
#line 716
$memory_7 = 0;
#line 716
$memory_6 = $memory_2->[$memory_7];
#line 716
undef($memory_7);
#line 716
$memory_5 = nl::is_sim($memory_6);
#line 716
undef($memory_6);
#line 716
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 716
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 716
if (c_rt_lib::check_true($memory_5)) {goto label_4;}
#line 716
undef($memory_0);
#line 716
undef($memory_4);
#line 716
undef($memory_5);
#line 716
$_[1] = $memory_1;$_[2] = $memory_2;return $memory_3;
#line 716
goto label_4;
#line 716
label_4:
#line 716
undef($memory_5);
#line 717
$memory_7 = 0;
#line 717
$memory_6 = $memory_2->[$memory_7];
#line 717
undef($memory_7);
#line 717
$memory_5 = ov::mk($memory_6);
#line 717
undef($memory_6);
#line 717
$memory_1 = $memory_5;
#line 717
undef($memory_5);
#line 718
goto label_1;
#line 718
label_2:
#line 718
$memory_4 = "ov::mk_val";
#line 718
$memory_4 = c_rt_lib::to_nl($memory_0 eq $memory_4);
#line 718
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 718
if (c_rt_lib::check_true($memory_4)) {goto label_5;}
#line 719
$memory_7 = 0;
#line 719
$memory_6 = $memory_2->[$memory_7];
#line 719
undef($memory_7);
#line 719
$memory_5 = nl::is_sim($memory_6);
#line 719
undef($memory_6);
#line 719
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 719
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 719
if (c_rt_lib::check_true($memory_5)) {goto label_7;}
#line 719
undef($memory_0);
#line 719
undef($memory_4);
#line 719
undef($memory_5);
#line 719
$_[1] = $memory_1;$_[2] = $memory_2;return $memory_3;
#line 719
goto label_7;
#line 719
label_7:
#line 719
undef($memory_5);
#line 720
$memory_7 = 0;
#line 720
$memory_6 = $memory_2->[$memory_7];
#line 720
undef($memory_7);
#line 720
$memory_8 = 1;
#line 720
$memory_7 = $memory_2->[$memory_8];
#line 720
undef($memory_8);
#line 720
$memory_5 = ov::mk_val($memory_6, $memory_7);
#line 720
undef($memory_7);
#line 720
undef($memory_6);
#line 720
$memory_1 = $memory_5;
#line 720
undef($memory_5);
#line 721
goto label_1;
#line 721
label_5:
#line 722
$memory_7 = 0;
#line 722
$memory_6 = $memory_2->[$memory_7];
#line 722
undef($memory_7);
#line 722
$memory_5 = nl::is_variant($memory_6);
#line 722
undef($memory_6);
#line 722
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 722
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 722
if (c_rt_lib::check_true($memory_5)) {goto label_9;}
#line 722
undef($memory_0);
#line 722
undef($memory_4);
#line 722
undef($memory_5);
#line 722
$_[1] = $memory_1;$_[2] = $memory_2;return $memory_3;
#line 722
goto label_9;
#line 722
label_9:
#line 722
undef($memory_5);
#line 723
$memory_5 = "ov::has_value";
#line 723
$memory_5 = c_rt_lib::to_nl($memory_0 eq $memory_5);
#line 723
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 723
if (c_rt_lib::check_true($memory_5)) {goto label_11;}
#line 724
$memory_8 = 0;
#line 724
$memory_7 = $memory_2->[$memory_8];
#line 724
undef($memory_8);
#line 724
$memory_6 = ov::has_value($memory_7);
#line 724
undef($memory_7);
#line 724
$memory_1 = $memory_6;
#line 724
undef($memory_6);
#line 725
goto label_17;
#line 725
label_11:
#line 725
$memory_5 = "ov::get_element";
#line 725
$memory_5 = c_rt_lib::to_nl($memory_0 eq $memory_5);
#line 725
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 725
if (c_rt_lib::check_true($memory_5)) {goto label_12;}
#line 726
$memory_8 = 0;
#line 726
$memory_7 = $memory_2->[$memory_8];
#line 726
undef($memory_8);
#line 726
$memory_6 = ov::get_element($memory_7);
#line 726
undef($memory_7);
#line 726
$memory_1 = $memory_6;
#line 726
undef($memory_6);
#line 727
goto label_17;
#line 727
label_12:
#line 727
$memory_5 = "ov::get_value";
#line 727
$memory_5 = c_rt_lib::to_nl($memory_0 eq $memory_5);
#line 727
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 727
if (c_rt_lib::check_true($memory_5)) {goto label_13;}
#line 728
$memory_8 = 0;
#line 728
$memory_7 = $memory_2->[$memory_8];
#line 728
undef($memory_8);
#line 728
$memory_6 = ov::get_value($memory_7);
#line 728
undef($memory_7);
#line 728
$memory_1 = $memory_6;
#line 728
undef($memory_6);
#line 729
goto label_17;
#line 729
label_13:
#line 729
$memory_5 = "ov::is";
#line 729
$memory_5 = c_rt_lib::to_nl($memory_0 eq $memory_5);
#line 729
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 729
if (c_rt_lib::check_true($memory_5)) {goto label_14;}
#line 730
$memory_8 = 1;
#line 730
$memory_7 = $memory_2->[$memory_8];
#line 730
undef($memory_8);
#line 730
$memory_6 = nl::is_sim($memory_7);
#line 730
undef($memory_7);
#line 730
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 730
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 730
if (c_rt_lib::check_true($memory_6)) {goto label_16;}
#line 730
undef($memory_0);
#line 730
undef($memory_4);
#line 730
undef($memory_5);
#line 730
undef($memory_6);
#line 730
$_[1] = $memory_1;$_[2] = $memory_2;return $memory_3;
#line 730
goto label_16;
#line 730
label_16:
#line 730
undef($memory_6);
#line 731
$memory_8 = 0;
#line 731
$memory_7 = $memory_2->[$memory_8];
#line 731
undef($memory_8);
#line 731
$memory_9 = 1;
#line 731
$memory_8 = $memory_2->[$memory_9];
#line 731
undef($memory_9);
#line 731
$memory_6 = ov::is($memory_7, $memory_8);
#line 731
undef($memory_8);
#line 731
undef($memory_7);
#line 731
$memory_1 = $memory_6;
#line 731
undef($memory_6);
#line 732
goto label_17;
#line 732
label_14:
#line 732
$memory_5 = "ov::as";
#line 732
$memory_5 = c_rt_lib::to_nl($memory_0 eq $memory_5);
#line 732
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 732
if (c_rt_lib::check_true($memory_5)) {goto label_17;}
#line 733
$memory_8 = 1;
#line 733
$memory_7 = $memory_2->[$memory_8];
#line 733
undef($memory_8);
#line 733
$memory_6 = nl::is_sim($memory_7);
#line 733
undef($memory_7);
#line 733
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 733
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 733
if (c_rt_lib::check_true($memory_6)) {goto label_19;}
#line 733
undef($memory_0);
#line 733
undef($memory_4);
#line 733
undef($memory_5);
#line 733
undef($memory_6);
#line 733
$_[1] = $memory_1;$_[2] = $memory_2;return $memory_3;
#line 733
goto label_19;
#line 733
label_19:
#line 733
undef($memory_6);
#line 734
$memory_8 = 0;
#line 734
$memory_7 = $memory_2->[$memory_8];
#line 734
undef($memory_8);
#line 734
$memory_9 = 1;
#line 734
$memory_8 = $memory_2->[$memory_9];
#line 734
undef($memory_9);
#line 734
$memory_6 = ov::is($memory_7, $memory_8);
#line 734
undef($memory_8);
#line 734
undef($memory_7);
#line 734
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 734
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 734
if (c_rt_lib::check_true($memory_6)) {goto label_21;}
#line 734
undef($memory_0);
#line 734
undef($memory_4);
#line 734
undef($memory_5);
#line 734
undef($memory_6);
#line 734
$_[1] = $memory_1;$_[2] = $memory_2;return $memory_3;
#line 734
goto label_21;
#line 734
label_21:
#line 734
undef($memory_6);
#line 735
$memory_8 = 0;
#line 735
$memory_7 = $memory_2->[$memory_8];
#line 735
undef($memory_8);
#line 735
$memory_9 = 1;
#line 735
$memory_8 = $memory_2->[$memory_9];
#line 735
undef($memory_9);
#line 735
$memory_6 = ov::as($memory_7, $memory_8);
#line 735
undef($memory_8);
#line 735
undef($memory_7);
#line 735
$memory_1 = $memory_6;
#line 735
undef($memory_6);
#line 736
goto label_17;
#line 736
label_17:
#line 736
undef($memory_5);
#line 737
goto label_1;
#line 737
label_1:
#line 737
undef($memory_4);
#line 738
$memory_4 = "";
#line 738
$memory_4 = c_rt_lib::ov_mk_arg('ok', $memory_4);
#line 738
undef($memory_0);
#line 738
undef($memory_3);
#line 738
$_[1] = $memory_1;$_[2] = $memory_2;return $memory_4;
#line 738
undef($memory_4);
#line 738
undef($memory_3);
#line 738
undef($memory_0);
#line 738
$_[1] = $memory_1;$_[2] = $memory_2;return;
$_[1] = $memory_1;$_[2] = $memory_2;}

sub interpreter_priv::handle_c_rt_lib_call($$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;$memory_0 = $_[0];$memory_1 = $_[1];Scalar::Util::weaken($_[1]) if ref($_[1]);$memory_2 = $_[2];Scalar::Util::weaken($_[2]) if ref($_[2]);
#line 742
$memory_3 = "incorrect command";
#line 742
$memory_3 = c_rt_lib::ov_mk_arg('err', $memory_3);
#line 743
$memory_4 = "c_rt_lib::array_len";
#line 743
$memory_4 = c_rt_lib::to_nl($memory_0 eq $memory_4);
#line 743
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 743
if (c_rt_lib::check_true($memory_4)) {goto label_2;}
#line 744
$memory_7 = 0;
#line 744
$memory_6 = $memory_2->[$memory_7];
#line 744
undef($memory_7);
#line 744
$memory_5 = nl::is_array($memory_6);
#line 744
undef($memory_6);
#line 744
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 744
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 744
if (c_rt_lib::check_true($memory_5)) {goto label_4;}
#line 744
undef($memory_0);
#line 744
undef($memory_4);
#line 744
undef($memory_5);
#line 744
$_[1] = $memory_1;$_[2] = $memory_2;return $memory_3;
#line 744
goto label_4;
#line 744
label_4:
#line 744
undef($memory_5);
#line 745
$memory_7 = 0;
#line 745
$memory_6 = $memory_2->[$memory_7];
#line 745
undef($memory_7);
#line 745
$memory_5 = c_rt_lib::array_len($memory_6);
#line 745
undef($memory_6);
#line 745
$memory_1 = $memory_5;
#line 745
undef($memory_5);
#line 746
goto label_49;
#line 746
label_2:
#line 746
$memory_4 = "c_rt_lib::set_ref_arr";
#line 746
$memory_4 = c_rt_lib::to_nl($memory_0 eq $memory_4);
#line 746
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 746
if (c_rt_lib::check_true($memory_4)) {goto label_5;}
#line 747
$memory_7 = 0;
#line 747
$memory_6 = $memory_2->[$memory_7];
#line 747
undef($memory_7);
#line 747
$memory_5 = nl::is_array($memory_6);
#line 747
undef($memory_6);
#line 747
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 747
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 747
if (c_rt_lib::check_true($memory_5)) {goto label_7;}
#line 747
undef($memory_0);
#line 747
undef($memory_4);
#line 747
undef($memory_5);
#line 747
$_[1] = $memory_1;$_[2] = $memory_2;return $memory_3;
#line 747
goto label_7;
#line 747
label_7:
#line 747
undef($memory_5);
#line 748
$memory_7 = 1;
#line 748
$memory_6 = $memory_2->[$memory_7];
#line 748
undef($memory_7);
#line 748
$memory_5 = nl::is_sim($memory_6);
#line 748
undef($memory_6);
#line 748
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 748
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 748
if (c_rt_lib::check_true($memory_5)) {goto label_9;}
#line 748
undef($memory_0);
#line 748
undef($memory_4);
#line 748
undef($memory_5);
#line 748
$_[1] = $memory_1;$_[2] = $memory_2;return $memory_3;
#line 748
goto label_9;
#line 748
label_9:
#line 748
undef($memory_5);
#line 749
$memory_7 = 1;
#line 749
$memory_6 = $memory_2->[$memory_7];
#line 749
undef($memory_7);
#line 749
$memory_5 = string_utils::is_number($memory_6);
#line 749
undef($memory_6);
#line 749
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 749
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 749
if (c_rt_lib::check_true($memory_5)) {goto label_11;}
#line 749
undef($memory_0);
#line 749
undef($memory_4);
#line 749
undef($memory_5);
#line 749
$_[1] = $memory_1;$_[2] = $memory_2;return $memory_3;
#line 749
goto label_11;
#line 749
label_11:
#line 749
undef($memory_5);
#line 750
$memory_7 = 1;
#line 750
$memory_5 = $memory_2->[$memory_7];
#line 750
undef($memory_7);
#line 750
$memory_7 = 0;
#line 750
$memory_5 = c_rt_lib::to_nl($memory_5 >= $memory_7);
#line 750
undef($memory_7);
#line 750
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 750
if (c_rt_lib::check_true($memory_6)) {goto label_14;}
#line 750
$memory_7 = 1;
#line 750
$memory_5 = $memory_2->[$memory_7];
#line 750
undef($memory_7);
#line 750
$memory_9 = 0;
#line 750
$memory_8 = $memory_2->[$memory_9];
#line 750
undef($memory_9);
#line 750
$memory_7 = array::len($memory_8);
#line 750
undef($memory_8);
#line 750
$memory_5 = c_rt_lib::to_nl($memory_5 < $memory_7);
#line 750
undef($memory_7);
#line 750
label_14:
#line 750
undef($memory_6);
#line 750
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 750
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 750
if (c_rt_lib::check_true($memory_5)) {goto label_13;}
#line 750
undef($memory_0);
#line 750
undef($memory_4);
#line 750
undef($memory_5);
#line 750
$_[1] = $memory_1;$_[2] = $memory_2;return $memory_3;
#line 750
goto label_13;
#line 750
label_13:
#line 750
undef($memory_5);
#line 751
$memory_6 = 0;
#line 751
$memory_5 = c_rt_lib::get_ref_arr($memory_2, $memory_6);
#line 751
$memory_8 = 1;
#line 751
$memory_7 = $memory_2->[$memory_8];
#line 751
undef($memory_8);
#line 751
$memory_9 = 2;
#line 751
$memory_8 = $memory_2->[$memory_9];
#line 751
undef($memory_9);
#line 751
c_rt_lib::set_ref_arr($memory_5, $memory_7, $memory_8);
#line 751
undef($memory_8);
#line 751
undef($memory_7);
#line 751
c_rt_lib::set_ref_arr($memory_2, $memory_6, $memory_5);
#line 751
undef($memory_5);
#line 751
undef($memory_6);
#line 752
goto label_49;
#line 752
label_5:
#line 752
$memory_4 = "c_rt_lib::set_ref_hash";
#line 752
$memory_4 = c_rt_lib::to_nl($memory_0 eq $memory_4);
#line 752
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 752
if (c_rt_lib::check_true($memory_4)) {goto label_15;}
#line 753
$memory_7 = 0;
#line 753
$memory_6 = $memory_2->[$memory_7];
#line 753
undef($memory_7);
#line 753
$memory_5 = nl::is_hash($memory_6);
#line 753
undef($memory_6);
#line 753
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 753
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 753
if (c_rt_lib::check_true($memory_5)) {goto label_17;}
#line 753
undef($memory_0);
#line 753
undef($memory_4);
#line 753
undef($memory_5);
#line 753
$_[1] = $memory_1;$_[2] = $memory_2;return $memory_3;
#line 753
goto label_17;
#line 753
label_17:
#line 753
undef($memory_5);
#line 754
$memory_7 = 1;
#line 754
$memory_6 = $memory_2->[$memory_7];
#line 754
undef($memory_7);
#line 754
$memory_5 = nl::is_sim($memory_6);
#line 754
undef($memory_6);
#line 754
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 754
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 754
if (c_rt_lib::check_true($memory_5)) {goto label_19;}
#line 754
undef($memory_0);
#line 754
undef($memory_4);
#line 754
undef($memory_5);
#line 754
$_[1] = $memory_1;$_[2] = $memory_2;return $memory_3;
#line 754
goto label_19;
#line 754
label_19:
#line 754
undef($memory_5);
#line 755
$memory_6 = 0;
#line 755
$memory_5 = c_rt_lib::get_ref_arr($memory_2, $memory_6);
#line 755
$memory_8 = 1;
#line 755
$memory_7 = $memory_2->[$memory_8];
#line 755
undef($memory_8);
#line 755
$memory_9 = 2;
#line 755
$memory_8 = $memory_2->[$memory_9];
#line 755
undef($memory_9);
#line 755
c_rt_lib::set_ref_hash($memory_5, $memory_7, $memory_8);
#line 755
undef($memory_8);
#line 755
undef($memory_7);
#line 755
c_rt_lib::set_ref_arr($memory_2, $memory_6, $memory_5);
#line 755
undef($memory_5);
#line 755
undef($memory_6);
#line 756
goto label_49;
#line 756
label_15:
#line 756
$memory_4 = "c_rt_lib::get_ref_arr";
#line 756
$memory_4 = c_rt_lib::to_nl($memory_0 eq $memory_4);
#line 756
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 756
if (c_rt_lib::check_true($memory_4)) {goto label_20;}
#line 757
$memory_7 = 0;
#line 757
$memory_6 = $memory_2->[$memory_7];
#line 757
undef($memory_7);
#line 757
$memory_5 = nl::is_array($memory_6);
#line 757
undef($memory_6);
#line 757
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 757
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 757
if (c_rt_lib::check_true($memory_5)) {goto label_22;}
#line 757
undef($memory_0);
#line 757
undef($memory_4);
#line 757
undef($memory_5);
#line 757
$_[1] = $memory_1;$_[2] = $memory_2;return $memory_3;
#line 757
goto label_22;
#line 757
label_22:
#line 757
undef($memory_5);
#line 758
$memory_7 = 1;
#line 758
$memory_6 = $memory_2->[$memory_7];
#line 758
undef($memory_7);
#line 758
$memory_5 = nl::is_sim($memory_6);
#line 758
undef($memory_6);
#line 758
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 758
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 758
if (c_rt_lib::check_true($memory_5)) {goto label_24;}
#line 758
undef($memory_0);
#line 758
undef($memory_4);
#line 758
undef($memory_5);
#line 758
$_[1] = $memory_1;$_[2] = $memory_2;return $memory_3;
#line 758
goto label_24;
#line 758
label_24:
#line 758
undef($memory_5);
#line 759
$memory_7 = 1;
#line 759
$memory_6 = $memory_2->[$memory_7];
#line 759
undef($memory_7);
#line 759
$memory_5 = string_utils::is_number($memory_6);
#line 759
undef($memory_6);
#line 759
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 759
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 759
if (c_rt_lib::check_true($memory_5)) {goto label_26;}
#line 759
undef($memory_0);
#line 759
undef($memory_4);
#line 759
undef($memory_5);
#line 759
$_[1] = $memory_1;$_[2] = $memory_2;return $memory_3;
#line 759
goto label_26;
#line 759
label_26:
#line 759
undef($memory_5);
#line 760
$memory_7 = 1;
#line 760
$memory_5 = $memory_2->[$memory_7];
#line 760
undef($memory_7);
#line 760
$memory_7 = 0;
#line 760
$memory_5 = c_rt_lib::to_nl($memory_5 >= $memory_7);
#line 760
undef($memory_7);
#line 760
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 760
if (c_rt_lib::check_true($memory_6)) {goto label_29;}
#line 760
$memory_7 = 1;
#line 760
$memory_5 = $memory_2->[$memory_7];
#line 760
undef($memory_7);
#line 760
$memory_9 = 0;
#line 760
$memory_8 = $memory_2->[$memory_9];
#line 760
undef($memory_9);
#line 760
$memory_7 = array::len($memory_8);
#line 760
undef($memory_8);
#line 760
$memory_5 = c_rt_lib::to_nl($memory_5 < $memory_7);
#line 760
undef($memory_7);
#line 760
label_29:
#line 760
undef($memory_6);
#line 760
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 760
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 760
if (c_rt_lib::check_true($memory_5)) {goto label_28;}
#line 760
undef($memory_0);
#line 760
undef($memory_4);
#line 760
undef($memory_5);
#line 760
$_[1] = $memory_1;$_[2] = $memory_2;return $memory_3;
#line 760
goto label_28;
#line 760
label_28:
#line 760
undef($memory_5);
#line 761
$memory_7 = 0;
#line 761
$memory_6 = $memory_2->[$memory_7];
#line 761
undef($memory_7);
#line 761
$memory_8 = 1;
#line 761
$memory_7 = $memory_2->[$memory_8];
#line 761
undef($memory_8);
#line 761
$memory_5 = c_rt_lib::get_ref_arr($memory_6, $memory_7);
#line 761
undef($memory_7);
#line 761
undef($memory_6);
#line 761
$memory_1 = $memory_5;
#line 761
undef($memory_5);
#line 762
goto label_49;
#line 762
label_20:
#line 762
$memory_4 = "c_rt_lib::get_ref_hash";
#line 762
$memory_4 = c_rt_lib::to_nl($memory_0 eq $memory_4);
#line 762
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 762
if (c_rt_lib::check_true($memory_4)) {goto label_30;}
#line 763
$memory_7 = 0;
#line 763
$memory_6 = $memory_2->[$memory_7];
#line 763
undef($memory_7);
#line 763
$memory_5 = nl::is_hash($memory_6);
#line 763
undef($memory_6);
#line 763
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 763
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 763
if (c_rt_lib::check_true($memory_5)) {goto label_32;}
#line 763
undef($memory_0);
#line 763
undef($memory_4);
#line 763
undef($memory_5);
#line 763
$_[1] = $memory_1;$_[2] = $memory_2;return $memory_3;
#line 763
goto label_32;
#line 763
label_32:
#line 763
undef($memory_5);
#line 764
$memory_7 = 1;
#line 764
$memory_6 = $memory_2->[$memory_7];
#line 764
undef($memory_7);
#line 764
$memory_5 = nl::is_sim($memory_6);
#line 764
undef($memory_6);
#line 764
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 764
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 764
if (c_rt_lib::check_true($memory_5)) {goto label_34;}
#line 764
undef($memory_0);
#line 764
undef($memory_4);
#line 764
undef($memory_5);
#line 764
$_[1] = $memory_1;$_[2] = $memory_2;return $memory_3;
#line 764
goto label_34;
#line 764
label_34:
#line 764
undef($memory_5);
#line 765
$memory_7 = 0;
#line 765
$memory_6 = $memory_2->[$memory_7];
#line 765
undef($memory_7);
#line 765
$memory_8 = 1;
#line 765
$memory_7 = $memory_2->[$memory_8];
#line 765
undef($memory_8);
#line 765
$memory_5 = hash::has_key($memory_6, $memory_7);
#line 765
undef($memory_7);
#line 765
undef($memory_6);
#line 765
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 765
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 765
if (c_rt_lib::check_true($memory_5)) {goto label_36;}
#line 765
undef($memory_0);
#line 765
undef($memory_4);
#line 765
undef($memory_5);
#line 765
$_[1] = $memory_1;$_[2] = $memory_2;return $memory_3;
#line 765
goto label_36;
#line 765
label_36:
#line 765
undef($memory_5);
#line 766
$memory_7 = 0;
#line 766
$memory_6 = $memory_2->[$memory_7];
#line 766
undef($memory_7);
#line 766
$memory_8 = 1;
#line 766
$memory_7 = $memory_2->[$memory_8];
#line 766
undef($memory_8);
#line 766
$memory_5 = c_rt_lib::get_ref_hash($memory_6, $memory_7);
#line 766
undef($memory_7);
#line 766
undef($memory_6);
#line 766
$memory_1 = $memory_5;
#line 766
undef($memory_5);
#line 767
goto label_49;
#line 767
label_30:
#line 767
$memory_4 = "c_rt_lib::init_iter";
#line 767
$memory_4 = c_rt_lib::to_nl($memory_0 eq $memory_4);
#line 767
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 767
if (c_rt_lib::check_true($memory_4)) {goto label_37;}
#line 768
$memory_7 = 0;
#line 768
$memory_6 = $memory_2->[$memory_7];
#line 768
undef($memory_7);
#line 768
$memory_5 = nl::is_hash($memory_6);
#line 768
undef($memory_6);
#line 768
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 768
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 768
if (c_rt_lib::check_true($memory_5)) {goto label_39;}
#line 768
undef($memory_0);
#line 768
undef($memory_4);
#line 768
undef($memory_5);
#line 768
$_[1] = $memory_1;$_[2] = $memory_2;return $memory_3;
#line 768
goto label_39;
#line 768
label_39:
#line 768
undef($memory_5);
#line 769
$memory_7 = 0;
#line 769
$memory_6 = $memory_2->[$memory_7];
#line 769
undef($memory_7);
#line 769
$memory_5 = c_rt_lib::init_iter($memory_6);
#line 769
undef($memory_6);
#line 769
$memory_1 = $memory_5;
#line 769
undef($memory_5);
#line 770
goto label_49;
#line 770
label_37:
#line 770
$memory_4 = "c_rt_lib::is_end_hash";
#line 770
$memory_4 = c_rt_lib::to_nl($memory_0 eq $memory_4);
#line 770
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 770
if (c_rt_lib::check_true($memory_4)) {goto label_40;}
#line 771
$memory_7 = 0;
#line 771
$memory_6 = $memory_2->[$memory_7];
#line 771
undef($memory_7);
#line 771
$memory_5 = c_rt_lib::is_end_hash($memory_6);
#line 771
undef($memory_6);
#line 771
$memory_1 = $memory_5;
#line 771
undef($memory_5);
#line 772
goto label_49;
#line 772
label_40:
#line 772
$memory_4 = "c_rt_lib::get_key_iter";
#line 772
$memory_4 = c_rt_lib::to_nl($memory_0 eq $memory_4);
#line 772
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 772
if (c_rt_lib::check_true($memory_4)) {goto label_41;}
#line 773
$memory_7 = 0;
#line 773
$memory_6 = $memory_2->[$memory_7];
#line 773
undef($memory_7);
#line 773
$memory_5 = c_rt_lib::get_key_iter($memory_6);
#line 773
undef($memory_6);
#line 773
$memory_1 = $memory_5;
#line 773
undef($memory_5);
#line 774
goto label_49;
#line 774
label_41:
#line 774
$memory_4 = "c_rt_lib::hash_get_value";
#line 774
$memory_4 = c_rt_lib::to_nl($memory_0 eq $memory_4);
#line 774
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 774
if (c_rt_lib::check_true($memory_4)) {goto label_42;}
#line 775
$memory_7 = 0;
#line 775
$memory_6 = $memory_2->[$memory_7];
#line 775
undef($memory_7);
#line 775
$memory_5 = nl::is_hash($memory_6);
#line 775
undef($memory_6);
#line 775
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 775
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 775
if (c_rt_lib::check_true($memory_5)) {goto label_44;}
#line 775
undef($memory_0);
#line 775
undef($memory_4);
#line 775
undef($memory_5);
#line 775
$_[1] = $memory_1;$_[2] = $memory_2;return $memory_3;
#line 775
goto label_44;
#line 775
label_44:
#line 775
undef($memory_5);
#line 776
$memory_7 = 1;
#line 776
$memory_6 = $memory_2->[$memory_7];
#line 776
undef($memory_7);
#line 776
$memory_5 = nl::is_sim($memory_6);
#line 776
undef($memory_6);
#line 776
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 776
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 776
if (c_rt_lib::check_true($memory_5)) {goto label_46;}
#line 776
undef($memory_0);
#line 776
undef($memory_4);
#line 776
undef($memory_5);
#line 776
$_[1] = $memory_1;$_[2] = $memory_2;return $memory_3;
#line 776
goto label_46;
#line 776
label_46:
#line 776
undef($memory_5);
#line 777
$memory_7 = 0;
#line 777
$memory_6 = $memory_2->[$memory_7];
#line 777
undef($memory_7);
#line 777
$memory_8 = 1;
#line 777
$memory_7 = $memory_2->[$memory_8];
#line 777
undef($memory_8);
#line 777
$memory_5 = hash::has_key($memory_6, $memory_7);
#line 777
undef($memory_7);
#line 777
undef($memory_6);
#line 777
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 777
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 777
if (c_rt_lib::check_true($memory_5)) {goto label_48;}
#line 777
undef($memory_0);
#line 777
undef($memory_4);
#line 777
undef($memory_5);
#line 777
$_[1] = $memory_1;$_[2] = $memory_2;return $memory_3;
#line 777
goto label_48;
#line 777
label_48:
#line 777
undef($memory_5);
#line 778
$memory_7 = 0;
#line 778
$memory_6 = $memory_2->[$memory_7];
#line 778
undef($memory_7);
#line 778
$memory_8 = 1;
#line 778
$memory_7 = $memory_2->[$memory_8];
#line 778
undef($memory_8);
#line 778
$memory_5 = c_rt_lib::hash_get_value($memory_6, $memory_7);
#line 778
undef($memory_7);
#line 778
undef($memory_6);
#line 778
$memory_1 = $memory_5;
#line 778
undef($memory_5);
#line 779
goto label_49;
#line 779
label_42:
#line 779
$memory_4 = "c_rt_lib::next_iter";
#line 779
$memory_4 = c_rt_lib::to_nl($memory_0 eq $memory_4);
#line 779
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 779
if (c_rt_lib::check_true($memory_4)) {goto label_49;}
#line 780
$memory_7 = 0;
#line 780
$memory_6 = $memory_2->[$memory_7];
#line 780
undef($memory_7);
#line 780
$memory_5 = c_rt_lib::next_iter($memory_6);
#line 780
undef($memory_6);
#line 780
$memory_1 = $memory_5;
#line 780
undef($memory_5);
#line 781
goto label_49;
#line 781
label_49:
#line 781
undef($memory_4);
#line 782
$memory_4 = "";
#line 782
$memory_4 = c_rt_lib::ov_mk_arg('ok', $memory_4);
#line 782
undef($memory_0);
#line 782
undef($memory_3);
#line 782
$_[1] = $memory_1;$_[2] = $memory_2;return $memory_4;
#line 782
undef($memory_4);
#line 782
undef($memory_3);
#line 782
undef($memory_0);
#line 782
$_[1] = $memory_1;$_[2] = $memory_2;return;
$_[1] = $memory_1;$_[2] = $memory_2;}

sub interpreter_priv::handle_compiler_call($$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;my $memory_13;my $memory_14;my $memory_15;my $memory_16;my $memory_17;my $memory_18;$memory_0 = $_[0];$memory_1 = $_[1];$memory_2 = $_[2];Scalar::Util::weaken($_[2]) if ref($_[2]);
#line 785
$memory_3 = [];
#line 786
$memory_4 = $memory_0->{'args'};
#line 786
$memory_6 = 0;
#line 786
$memory_7 = 1;
#line 786
$memory_8 = c_rt_lib::array_len($memory_4);
#line 786
label_3:
#line 786
$memory_9 = c_rt_lib::to_nl($memory_6 >= $memory_8);
#line 786
if (c_rt_lib::check_true($memory_9)) {goto label_1;}
#line 786
$memory_5 = $memory_4->[$memory_6];
#line 788
$memory_11 = c_rt_lib::ov_is($memory_5, 'val');
#line 788
if (c_rt_lib::check_true($memory_11)) {goto label_5;}
#line 790
$memory_11 = c_rt_lib::ov_is($memory_5, 'ref');
#line 790
if (c_rt_lib::check_true($memory_11)) {goto label_6;}
#line 790
$memory_11 = "NOMATCHALERT";
#line 790
$memory_11 = [$memory_11,$memory_5];
#line 790
die(dfile::ssave($memory_11));
#line 788
label_5:
#line 788
$memory_12 = c_rt_lib::ov_as($memory_5, 'val');
#line 789
$memory_13 = $memory_2->{'top'};
#line 789
$memory_13 = $memory_13->{'vars'};
#line 789
$memory_13 = $memory_13->[$memory_12];
#line 789
$memory_10 = $memory_13;
#line 789
undef($memory_13);
#line 789
undef($memory_12);
#line 790
goto label_4;
#line 790
label_6:
#line 790
$memory_12 = c_rt_lib::ov_as($memory_5, 'ref');
#line 791
$memory_13 = $memory_2->{'top'};
#line 791
$memory_13 = $memory_13->{'vars'};
#line 791
$memory_13 = $memory_13->[$memory_12];
#line 791
$memory_10 = $memory_13;
#line 791
undef($memory_13);
#line 791
undef($memory_12);
#line 792
goto label_4;
#line 792
label_4:
#line 792
undef($memory_11);
#line 793
array::push($memory_3, $memory_10);
#line 793
undef($memory_10);
#line 794
$memory_6 = $memory_6 + $memory_7;
#line 794
goto label_3;
#line 794
label_1:
#line 794
undef($memory_4);
#line 794
undef($memory_5);
#line 794
undef($memory_6);
#line 794
undef($memory_7);
#line 794
undef($memory_8);
#line 794
undef($memory_9);
#line 795
$memory_4 = "";
#line 797
$memory_6 = $memory_0->{'mod'};
#line 797
$memory_7 = "array";
#line 797
$memory_6 = c_rt_lib::to_nl($memory_6 eq $memory_7);
#line 797
undef($memory_7);
#line 797
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 797
if (c_rt_lib::check_true($memory_6)) {goto label_8;}
#line 798
$memory_7 = interpreter_priv::handle_array_call($memory_1, $memory_4, $memory_3);
#line 798
$memory_5 = $memory_7;
#line 798
undef($memory_7);
#line 799
goto label_7;
#line 799
label_8:
#line 799
$memory_6 = $memory_0->{'mod'};
#line 799
$memory_7 = "hash";
#line 799
$memory_6 = c_rt_lib::to_nl($memory_6 eq $memory_7);
#line 799
undef($memory_7);
#line 799
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 799
if (c_rt_lib::check_true($memory_6)) {goto label_9;}
#line 800
$memory_7 = interpreter_priv::handle_hash_call($memory_1, $memory_4, $memory_3);
#line 800
$memory_5 = $memory_7;
#line 800
undef($memory_7);
#line 801
goto label_7;
#line 801
label_9:
#line 801
$memory_6 = $memory_0->{'mod'};
#line 801
$memory_7 = "string";
#line 801
$memory_6 = c_rt_lib::to_nl($memory_6 eq $memory_7);
#line 801
undef($memory_7);
#line 801
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 801
if (c_rt_lib::check_true($memory_6)) {goto label_10;}
#line 802
$memory_7 = interpreter_priv::handle_string_call($memory_1, $memory_4, $memory_3);
#line 802
$memory_5 = $memory_7;
#line 802
undef($memory_7);
#line 803
goto label_7;
#line 803
label_10:
#line 803
$memory_6 = $memory_0->{'mod'};
#line 803
$memory_7 = "ov";
#line 803
$memory_6 = c_rt_lib::to_nl($memory_6 eq $memory_7);
#line 803
undef($memory_7);
#line 803
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 803
if (c_rt_lib::check_true($memory_6)) {goto label_11;}
#line 804
$memory_7 = interpreter_priv::handle_ov_call($memory_1, $memory_4, $memory_3);
#line 804
$memory_5 = $memory_7;
#line 804
undef($memory_7);
#line 805
goto label_7;
#line 805
label_11:
#line 805
$memory_6 = $memory_0->{'mod'};
#line 805
$memory_7 = "c_rt_lib";
#line 805
$memory_6 = c_rt_lib::to_nl($memory_6 eq $memory_7);
#line 805
undef($memory_7);
#line 805
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 805
if (c_rt_lib::check_true($memory_6)) {goto label_12;}
#line 806
$memory_7 = interpreter_priv::handle_c_rt_lib_call($memory_1, $memory_4, $memory_3);
#line 806
$memory_5 = $memory_7;
#line 806
undef($memory_7);
#line 807
goto label_7;
#line 807
label_12:
#line 808
$memory_7 = [];
#line 808
die(dfile::ssave($memory_7));
#line 808
undef($memory_7);
#line 809
goto label_7;
#line 809
label_7:
#line 809
undef($memory_6);
#line 810
$memory_6 = $memory_5;
#line 810
$memory_6 = c_rt_lib::ov_is($memory_6, 'err');
#line 810
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 810
if (c_rt_lib::check_true($memory_6)) {goto label_14;}
#line 811
$memory_7 = $memory_5;
#line 811
$memory_7 = c_rt_lib::ov_as($memory_7, 'err');
#line 811
$memory_7 = $memory_7 . $memory_1;
#line 811
$memory_7 = c_rt_lib::ov_mk_arg('error', $memory_7);
#line 811
$memory_8 = $memory_7;
#line 811
 if (c_rt_lib::get_hashcount($memory_2) > 1) {$memory_2 = {%{$memory_2}};}$memory_2->{'rstate'} = $memory_8;
#line 811
undef($memory_7);
#line 811
undef($memory_8);
#line 812
goto label_13;
#line 812
label_14:
#line 813
$memory_8 = $memory_0->{'args'};
#line 813
$memory_7 = array::len($memory_8);
#line 813
undef($memory_8);
#line 813
$memory_8 = 0;
#line 813
$memory_9 = 1;
#line 813
label_17:
#line 813
$memory_10 = c_rt_lib::to_nl($memory_8 >= $memory_7);
#line 813
if (c_rt_lib::check_true($memory_10)) {goto label_15;}
#line 814
$memory_11 = $memory_0->{'args'};
#line 814
$memory_11 = $memory_11->[$memory_8];
#line 815
$memory_12 = c_rt_lib::ov_is($memory_11, 'val');
#line 815
if (c_rt_lib::check_true($memory_12)) {goto label_19;}
#line 816
$memory_12 = c_rt_lib::ov_is($memory_11, 'ref');
#line 816
if (c_rt_lib::check_true($memory_12)) {goto label_20;}
#line 816
$memory_12 = "NOMATCHALERT";
#line 816
$memory_12 = [$memory_12,$memory_11];
#line 816
die(dfile::ssave($memory_12));
#line 815
label_19:
#line 815
$memory_13 = c_rt_lib::ov_as($memory_11, 'val');
#line 815
undef($memory_13);
#line 816
goto label_18;
#line 816
label_20:
#line 816
$memory_13 = c_rt_lib::ov_as($memory_11, 'ref');
#line 817
$memory_14 = $memory_3->[$memory_8];
#line 817
$memory_15 = "top";
#line 817
$memory_15 = c_rt_lib::get_ref_hash($memory_2, $memory_15);
#line 817
$memory_16 = "vars";
#line 817
$memory_16 = c_rt_lib::get_ref_hash($memory_15, $memory_16);
#line 817
$memory_17 = $memory_14;
#line 817
 if (c_rt_lib::get_arrcount($memory_16) > 1) {$memory_16 = [@{$memory_16}];}$memory_16->[$memory_13] = $memory_17;
#line 817
$memory_18 = "vars";
#line 817
c_rt_lib::set_ref_hash($memory_15, $memory_18, $memory_16);
#line 817
$memory_18 = "top";
#line 817
c_rt_lib::set_ref_hash($memory_2, $memory_18, $memory_15);
#line 817
undef($memory_18);
#line 817
undef($memory_14);
#line 817
undef($memory_15);
#line 817
undef($memory_16);
#line 817
undef($memory_17);
#line 817
undef($memory_13);
#line 818
goto label_18;
#line 818
label_18:
#line 818
undef($memory_12);
#line 818
undef($memory_11);
#line 819
$memory_8 = $memory_8 + $memory_9;
#line 819
goto label_17;
#line 819
label_15:
#line 819
undef($memory_7);
#line 819
undef($memory_8);
#line 819
undef($memory_9);
#line 819
undef($memory_10);
#line 820
$memory_7 = $memory_0->{'dest'};
#line 820
$memory_8 = "";
#line 820
$memory_7 = c_rt_lib::to_nl($memory_7 eq $memory_8);
#line 820
undef($memory_8);
#line 820
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 820
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 820
if (c_rt_lib::check_true($memory_7)) {goto label_22;}
#line 820
$memory_8 = "top";
#line 820
$memory_8 = c_rt_lib::get_ref_hash($memory_2, $memory_8);
#line 820
$memory_9 = "vars";
#line 820
$memory_9 = c_rt_lib::get_ref_hash($memory_8, $memory_9);
#line 820
$memory_11 = $memory_0->{'dest'};
#line 820
$memory_10 = $memory_4;
#line 820
 if (c_rt_lib::get_arrcount($memory_9) > 1) {$memory_9 = [@{$memory_9}];}$memory_9->[$memory_11] = $memory_10;
#line 820
$memory_12 = "vars";
#line 820
c_rt_lib::set_ref_hash($memory_8, $memory_12, $memory_9);
#line 820
$memory_12 = "top";
#line 820
c_rt_lib::set_ref_hash($memory_2, $memory_12, $memory_8);
#line 820
undef($memory_12);
#line 820
undef($memory_8);
#line 820
undef($memory_9);
#line 820
undef($memory_10);
#line 820
undef($memory_11);
#line 820
goto label_22;
#line 820
label_22:
#line 820
undef($memory_7);
#line 821
goto label_13;
#line 821
label_13:
#line 821
undef($memory_6);
#line 821
undef($memory_3);
#line 821
undef($memory_4);
#line 821
undef($memory_5);
#line 821
undef($memory_0);
#line 821
undef($memory_1);
#line 821
$_[2] = $memory_2;return;
$_[2] = $memory_2;}

sub interpreter_priv::handle_return($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;my $memory_13;my $memory_14;my $memory_15;$memory_0 = $_[0];$memory_1 = $_[1];Scalar::Util::weaken($_[1]) if ref($_[1]);
#line 826
$memory_2 = interpreter::get_none_variant();
#line 827
$memory_3 = c_rt_lib::ov_is($memory_0, 'val');
#line 827
if (c_rt_lib::check_true($memory_3)) {goto label_2;}
#line 829
$memory_3 = c_rt_lib::ov_is($memory_0, 'emp');
#line 829
if (c_rt_lib::check_true($memory_3)) {goto label_3;}
#line 829
$memory_3 = "NOMATCHALERT";
#line 829
$memory_3 = [$memory_3,$memory_0];
#line 829
die(dfile::ssave($memory_3));
#line 827
label_2:
#line 827
$memory_4 = c_rt_lib::ov_as($memory_0, 'val');
#line 828
$memory_5 = $memory_1->{'top'};
#line 828
$memory_5 = $memory_5->{'vars'};
#line 828
$memory_5 = $memory_5->[$memory_4];
#line 828
$memory_2 = $memory_5;
#line 828
undef($memory_5);
#line 828
undef($memory_4);
#line 829
goto label_1;
#line 829
label_3:
#line 830
goto label_1;
#line 830
label_1:
#line 830
undef($memory_3);
#line 831
$memory_4 = $memory_1->{'stack'};
#line 831
$memory_3 = array::len($memory_4);
#line 831
undef($memory_4);
#line 831
$memory_4 = 0;
#line 831
$memory_3 = c_rt_lib::to_nl($memory_3 == $memory_4);
#line 831
undef($memory_4);
#line 831
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 831
if (c_rt_lib::check_true($memory_3)) {goto label_5;}
#line 832
$memory_5 = $memory_1->{'func'};
#line 832
$memory_5 = $memory_5->{'commands'};
#line 832
$memory_4 = array::len($memory_5);
#line 832
undef($memory_5);
#line 832
$memory_5 = "top";
#line 832
$memory_5 = c_rt_lib::get_ref_hash($memory_1, $memory_5);
#line 832
$memory_6 = $memory_4;
#line 832
 if (c_rt_lib::get_hashcount($memory_5) > 1) {$memory_5 = {%{$memory_5}};}$memory_5->{'next'} = $memory_6;
#line 832
$memory_7 = "top";
#line 832
c_rt_lib::set_ref_hash($memory_1, $memory_7, $memory_5);
#line 832
undef($memory_7);
#line 832
undef($memory_4);
#line 832
undef($memory_5);
#line 832
undef($memory_6);
#line 833
$memory_4 = c_rt_lib::ov_mk_arg('finished', $memory_2);
#line 833
$memory_5 = $memory_4;
#line 833
 if (c_rt_lib::get_hashcount($memory_1) > 1) {$memory_1 = {%{$memory_1}};}$memory_1->{'rstate'} = $memory_5;
#line 833
undef($memory_4);
#line 833
undef($memory_5);
#line 834
goto label_4;
#line 834
label_5:
#line 835
$memory_4 = $memory_1->{'top'};
#line 835
$memory_4 = $memory_4->{'ref_arguments'};
#line 836
$memory_5 = $memory_1->{'top'};
#line 836
$memory_5 = $memory_5->{'vars'};
#line 837
$memory_6 = $memory_1->{'top'};
#line 837
$memory_6 = $memory_6->{'ret'};
#line 838
$memory_7 = $memory_1->{'stack'};
#line 838
$memory_9 = $memory_1->{'stack'};
#line 838
$memory_8 = array::len($memory_9);
#line 838
undef($memory_9);
#line 838
$memory_9 = 1;
#line 838
$memory_8 = $memory_8 - $memory_9;
#line 838
undef($memory_9);
#line 838
$memory_7 = $memory_7->[$memory_8];
#line 838
undef($memory_8);
#line 839
$memory_8 = "stack";
#line 839
$memory_8 = c_rt_lib::get_ref_hash($memory_1, $memory_8);
#line 839
array::pop($memory_8);
#line 839
$memory_9 = "stack";
#line 839
c_rt_lib::set_ref_hash($memory_1, $memory_9, $memory_8);
#line 839
undef($memory_9);
#line 839
undef($memory_8);
#line 840
$memory_8 = $memory_7;
#line 840
 if (c_rt_lib::get_hashcount($memory_1) > 1) {$memory_1 = {%{$memory_1}};}$memory_1->{'top'} = $memory_8;
#line 840
undef($memory_8);
#line 841
$memory_9 = $memory_1->{'functions'};
#line 841
$memory_10 = $memory_1->{'top'};
#line 841
$memory_10 = $memory_10->{'func_key'};
#line 841
$memory_8 = hash::get_value($memory_9, $memory_10);
#line 841
undef($memory_10);
#line 841
undef($memory_9);
#line 841
$memory_9 = $memory_8;
#line 841
 if (c_rt_lib::get_hashcount($memory_1) > 1) {$memory_1 = {%{$memory_1}};}$memory_1->{'func'} = $memory_9;
#line 841
undef($memory_8);
#line 841
undef($memory_9);
#line 842
$memory_10 = c_rt_lib::init_iter($memory_4);
#line 842
label_8:
#line 842
$memory_8 = c_rt_lib::is_end_hash($memory_10);
#line 842
if (c_rt_lib::check_true($memory_8)) {goto label_6;}
#line 842
$memory_8 = c_rt_lib::get_key_iter($memory_10);
#line 842
$memory_9 = c_rt_lib::hash_get_value($memory_4, $memory_8);
#line 843
$memory_11 = $memory_5->[$memory_8];
#line 844
$memory_12 = "top";
#line 844
$memory_12 = c_rt_lib::get_ref_hash($memory_1, $memory_12);
#line 844
$memory_13 = "vars";
#line 844
$memory_13 = c_rt_lib::get_ref_hash($memory_12, $memory_13);
#line 844
$memory_14 = $memory_11;
#line 844
 if (c_rt_lib::get_arrcount($memory_13) > 1) {$memory_13 = [@{$memory_13}];}$memory_13->[$memory_9] = $memory_14;
#line 844
$memory_15 = "vars";
#line 844
c_rt_lib::set_ref_hash($memory_12, $memory_15, $memory_13);
#line 844
$memory_15 = "top";
#line 844
c_rt_lib::set_ref_hash($memory_1, $memory_15, $memory_12);
#line 844
undef($memory_15);
#line 844
undef($memory_12);
#line 844
undef($memory_13);
#line 844
undef($memory_14);
#line 844
undef($memory_11);
#line 845
$memory_10 = c_rt_lib::next_iter($memory_10);
#line 845
goto label_8;
#line 845
label_6:
#line 845
undef($memory_8);
#line 845
undef($memory_9);
#line 845
undef($memory_10);
#line 846
$memory_8 = "";
#line 846
$memory_8 = c_rt_lib::to_nl($memory_6 eq $memory_8);
#line 846
$memory_8 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 846
$memory_8 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 846
if (c_rt_lib::check_true($memory_8)) {goto label_10;}
#line 846
$memory_9 = "top";
#line 846
$memory_9 = c_rt_lib::get_ref_hash($memory_1, $memory_9);
#line 846
$memory_10 = "vars";
#line 846
$memory_10 = c_rt_lib::get_ref_hash($memory_9, $memory_10);
#line 846
$memory_11 = $memory_2;
#line 846
 if (c_rt_lib::get_arrcount($memory_10) > 1) {$memory_10 = [@{$memory_10}];}$memory_10->[$memory_6] = $memory_11;
#line 846
$memory_12 = "vars";
#line 846
c_rt_lib::set_ref_hash($memory_9, $memory_12, $memory_10);
#line 846
$memory_12 = "top";
#line 846
c_rt_lib::set_ref_hash($memory_1, $memory_12, $memory_9);
#line 846
undef($memory_12);
#line 846
undef($memory_9);
#line 846
undef($memory_10);
#line 846
undef($memory_11);
#line 846
goto label_10;
#line 846
label_10:
#line 846
undef($memory_8);
#line 846
undef($memory_4);
#line 846
undef($memory_5);
#line 846
undef($memory_6);
#line 846
undef($memory_7);
#line 847
goto label_4;
#line 847
label_4:
#line 847
undef($memory_3);
#line 848
$memory_3 = 1;
#line 848
$memory_3 = -$memory_3;
#line 848
$memory_4 = $memory_3;
#line 848
 if (c_rt_lib::get_hashcount($memory_1) > 1) {$memory_1 = {%{$memory_1}};}$memory_1->{'instruction_nr'} = $memory_4;
#line 848
undef($memory_3);
#line 848
undef($memory_4);
#line 849
$memory_3 = "top";
#line 849
$memory_3 = c_rt_lib::get_ref_hash($memory_1, $memory_3);
#line 849
$memory_4 = "next";
#line 849
$memory_4 = c_rt_lib::get_ref_hash($memory_3, $memory_4);
#line 849
$memory_5 = 1;
#line 849
$memory_4 = $memory_4 + $memory_5;
#line 849
$memory_6 = "next";
#line 849
c_rt_lib::set_ref_hash($memory_3, $memory_6, $memory_4);
#line 849
$memory_6 = "top";
#line 849
c_rt_lib::set_ref_hash($memory_1, $memory_6, $memory_3);
#line 849
undef($memory_6);
#line 849
undef($memory_3);
#line 849
undef($memory_4);
#line 849
undef($memory_5);
#line 849
undef($memory_2);
#line 849
undef($memory_0);
#line 849
$_[1] = $memory_1;return;
$_[1] = $memory_1;}

sub interpreter_priv::goto($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];
#line 853
$memory_3 = $memory_0->{'labels'};
#line 853
$memory_4 = $memory_0->{'top'};
#line 853
$memory_4 = $memory_4->{'module_name'};
#line 853
$memory_2 = hash::get_value($memory_3, $memory_4);
#line 853
undef($memory_4);
#line 853
undef($memory_3);
#line 854
$memory_4 = $memory_0->{'top'};
#line 854
$memory_4 = $memory_4->{'func_key'};
#line 854
$memory_3 = hash::get_value($memory_2, $memory_4);
#line 854
undef($memory_4);
#line 855
$memory_4 = hash::has_key($memory_3, $memory_1);
#line 855
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 855
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 855
if (c_rt_lib::check_true($memory_4)) {goto label_2;}
#line 856
$memory_5 = [];
#line 856
die(dfile::ssave($memory_5));
#line 856
undef($memory_5);
#line 857
goto label_2;
#line 857
label_2:
#line 857
undef($memory_4);
#line 858
$memory_4 = hash::get_value($memory_3, $memory_1);
#line 858
$memory_5 = 1;
#line 858
$memory_4 = $memory_4 + $memory_5;
#line 858
undef($memory_5);
#line 858
$memory_5 = "top";
#line 858
$memory_5 = c_rt_lib::get_ref_hash($memory_0, $memory_5);
#line 858
$memory_6 = $memory_4;
#line 858
 if (c_rt_lib::get_hashcount($memory_5) > 1) {$memory_5 = {%{$memory_5}};}$memory_5->{'next'} = $memory_6;
#line 858
$memory_7 = "top";
#line 858
c_rt_lib::set_ref_hash($memory_0, $memory_7, $memory_5);
#line 858
undef($memory_7);
#line 858
undef($memory_4);
#line 858
undef($memory_5);
#line 858
undef($memory_6);
#line 858
undef($memory_2);
#line 858
undef($memory_3);
#line 858
undef($memory_1);
#line 858
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub interpreter_priv::execute_bin_op($$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;$memory_0 = $_[0];$memory_1 = $_[1];$memory_2 = $_[2];
#line 862
$memory_3 = "+";
#line 862
$memory_3 = c_rt_lib::to_nl($memory_2 eq $memory_3);
#line 862
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 862
if (c_rt_lib::check_true($memory_3)) {goto label_2;}
#line 862
$memory_4 = $memory_0 + $memory_1;
#line 862
undef($memory_0);
#line 862
undef($memory_1);
#line 862
undef($memory_2);
#line 862
undef($memory_3);
#line 862
return $memory_4;
#line 862
undef($memory_4);
#line 862
goto label_2;
#line 862
label_2:
#line 862
undef($memory_3);
#line 863
$memory_3 = "-";
#line 863
$memory_3 = c_rt_lib::to_nl($memory_2 eq $memory_3);
#line 863
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 863
if (c_rt_lib::check_true($memory_3)) {goto label_4;}
#line 863
$memory_4 = $memory_0 - $memory_1;
#line 863
undef($memory_0);
#line 863
undef($memory_1);
#line 863
undef($memory_2);
#line 863
undef($memory_3);
#line 863
return $memory_4;
#line 863
undef($memory_4);
#line 863
goto label_4;
#line 863
label_4:
#line 863
undef($memory_3);
#line 864
$memory_3 = "*";
#line 864
$memory_3 = c_rt_lib::to_nl($memory_2 eq $memory_3);
#line 864
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 864
if (c_rt_lib::check_true($memory_3)) {goto label_6;}
#line 864
$memory_4 = $memory_0 * $memory_1;
#line 864
undef($memory_0);
#line 864
undef($memory_1);
#line 864
undef($memory_2);
#line 864
undef($memory_3);
#line 864
return $memory_4;
#line 864
undef($memory_4);
#line 864
goto label_6;
#line 864
label_6:
#line 864
undef($memory_3);
#line 865
$memory_3 = "/";
#line 865
$memory_3 = c_rt_lib::to_nl($memory_2 eq $memory_3);
#line 865
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 865
if (c_rt_lib::check_true($memory_3)) {goto label_8;}
#line 865
$memory_4 = $memory_0 / $memory_1;
#line 865
undef($memory_0);
#line 865
undef($memory_1);
#line 865
undef($memory_2);
#line 865
undef($memory_3);
#line 865
return $memory_4;
#line 865
undef($memory_4);
#line 865
goto label_8;
#line 865
label_8:
#line 865
undef($memory_3);
#line 866
$memory_3 = "%";
#line 866
$memory_3 = c_rt_lib::to_nl($memory_2 eq $memory_3);
#line 866
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 866
if (c_rt_lib::check_true($memory_3)) {goto label_10;}
#line 866
$memory_4 = $memory_0 % $memory_1;
#line 866
undef($memory_0);
#line 866
undef($memory_1);
#line 866
undef($memory_2);
#line 866
undef($memory_3);
#line 866
return $memory_4;
#line 866
undef($memory_4);
#line 866
goto label_10;
#line 866
label_10:
#line 866
undef($memory_3);
#line 867
$memory_3 = "==";
#line 867
$memory_3 = c_rt_lib::to_nl($memory_2 eq $memory_3);
#line 867
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 867
if (c_rt_lib::check_true($memory_3)) {goto label_12;}
#line 867
$memory_4 = c_rt_lib::to_nl($memory_0 == $memory_1);
#line 867
undef($memory_0);
#line 867
undef($memory_1);
#line 867
undef($memory_2);
#line 867
undef($memory_3);
#line 867
return $memory_4;
#line 867
undef($memory_4);
#line 867
goto label_12;
#line 867
label_12:
#line 867
undef($memory_3);
#line 868
$memory_3 = "!=";
#line 868
$memory_3 = c_rt_lib::to_nl($memory_2 eq $memory_3);
#line 868
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 868
if (c_rt_lib::check_true($memory_3)) {goto label_14;}
#line 868
$memory_4 = c_rt_lib::to_nl($memory_0 != $memory_1);
#line 868
undef($memory_0);
#line 868
undef($memory_1);
#line 868
undef($memory_2);
#line 868
undef($memory_3);
#line 868
return $memory_4;
#line 868
undef($memory_4);
#line 868
goto label_14;
#line 868
label_14:
#line 868
undef($memory_3);
#line 869
$memory_3 = "<";
#line 869
$memory_3 = c_rt_lib::to_nl($memory_2 eq $memory_3);
#line 869
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 869
if (c_rt_lib::check_true($memory_3)) {goto label_16;}
#line 869
$memory_4 = c_rt_lib::to_nl($memory_0 < $memory_1);
#line 869
undef($memory_0);
#line 869
undef($memory_1);
#line 869
undef($memory_2);
#line 869
undef($memory_3);
#line 869
return $memory_4;
#line 869
undef($memory_4);
#line 869
goto label_16;
#line 869
label_16:
#line 869
undef($memory_3);
#line 870
$memory_3 = "<=";
#line 870
$memory_3 = c_rt_lib::to_nl($memory_2 eq $memory_3);
#line 870
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 870
if (c_rt_lib::check_true($memory_3)) {goto label_18;}
#line 870
$memory_4 = c_rt_lib::to_nl($memory_0 <= $memory_1);
#line 870
undef($memory_0);
#line 870
undef($memory_1);
#line 870
undef($memory_2);
#line 870
undef($memory_3);
#line 870
return $memory_4;
#line 870
undef($memory_4);
#line 870
goto label_18;
#line 870
label_18:
#line 870
undef($memory_3);
#line 871
$memory_3 = ">";
#line 871
$memory_3 = c_rt_lib::to_nl($memory_2 eq $memory_3);
#line 871
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 871
if (c_rt_lib::check_true($memory_3)) {goto label_20;}
#line 871
$memory_4 = c_rt_lib::to_nl($memory_0 > $memory_1);
#line 871
undef($memory_0);
#line 871
undef($memory_1);
#line 871
undef($memory_2);
#line 871
undef($memory_3);
#line 871
return $memory_4;
#line 871
undef($memory_4);
#line 871
goto label_20;
#line 871
label_20:
#line 871
undef($memory_3);
#line 872
$memory_3 = ">=";
#line 872
$memory_3 = c_rt_lib::to_nl($memory_2 eq $memory_3);
#line 872
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 872
if (c_rt_lib::check_true($memory_3)) {goto label_22;}
#line 872
$memory_4 = c_rt_lib::to_nl($memory_0 >= $memory_1);
#line 872
undef($memory_0);
#line 872
undef($memory_1);
#line 872
undef($memory_2);
#line 872
undef($memory_3);
#line 872
return $memory_4;
#line 872
undef($memory_4);
#line 872
goto label_22;
#line 872
label_22:
#line 872
undef($memory_3);
#line 873
$memory_3 = ".";
#line 873
$memory_3 = c_rt_lib::to_nl($memory_2 eq $memory_3);
#line 873
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 873
if (c_rt_lib::check_true($memory_3)) {goto label_24;}
#line 873
$memory_4 = $memory_0 . $memory_1;
#line 873
undef($memory_0);
#line 873
undef($memory_1);
#line 873
undef($memory_2);
#line 873
undef($memory_3);
#line 873
return $memory_4;
#line 873
undef($memory_4);
#line 873
goto label_24;
#line 873
label_24:
#line 873
undef($memory_3);
#line 874
$memory_3 = "&&";
#line 874
$memory_3 = c_rt_lib::to_nl($memory_2 eq $memory_3);
#line 874
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 874
if (c_rt_lib::check_true($memory_3)) {goto label_26;}
#line 874
$memory_4 = $memory_0;
#line 874
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 874
if (c_rt_lib::check_true($memory_5)) {goto label_27;}
#line 874
$memory_4 = $memory_1;
#line 874
label_27:
#line 874
undef($memory_5);
#line 874
undef($memory_0);
#line 874
undef($memory_1);
#line 874
undef($memory_2);
#line 874
undef($memory_3);
#line 874
return $memory_4;
#line 874
undef($memory_4);
#line 874
goto label_26;
#line 874
label_26:
#line 874
undef($memory_3);
#line 875
$memory_3 = "||";
#line 875
$memory_3 = c_rt_lib::to_nl($memory_2 eq $memory_3);
#line 875
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 875
if (c_rt_lib::check_true($memory_3)) {goto label_29;}
#line 875
$memory_4 = $memory_0;
#line 875
if (c_rt_lib::check_true($memory_0)) {goto label_30;}
#line 875
$memory_4 = $memory_1;
#line 875
label_30:
#line 875
undef($memory_0);
#line 875
undef($memory_1);
#line 875
undef($memory_2);
#line 875
undef($memory_3);
#line 875
return $memory_4;
#line 875
undef($memory_4);
#line 875
goto label_29;
#line 875
label_29:
#line 875
undef($memory_3);
#line 876
$memory_3 = "eq";
#line 876
$memory_3 = c_rt_lib::to_nl($memory_2 eq $memory_3);
#line 876
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 876
if (c_rt_lib::check_true($memory_3)) {goto label_32;}
#line 876
$memory_4 = c_rt_lib::to_nl($memory_0 eq $memory_1);
#line 876
undef($memory_0);
#line 876
undef($memory_1);
#line 876
undef($memory_2);
#line 876
undef($memory_3);
#line 876
return $memory_4;
#line 876
undef($memory_4);
#line 876
goto label_32;
#line 876
label_32:
#line 876
undef($memory_3);
#line 877
$memory_3 = "ne";
#line 877
$memory_3 = c_rt_lib::to_nl($memory_2 eq $memory_3);
#line 877
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 877
if (c_rt_lib::check_true($memory_3)) {goto label_34;}
#line 877
$memory_4 = c_rt_lib::to_nl($memory_0 ne $memory_1);
#line 877
undef($memory_0);
#line 877
undef($memory_1);
#line 877
undef($memory_2);
#line 877
undef($memory_3);
#line 877
return $memory_4;
#line 877
undef($memory_4);
#line 877
goto label_34;
#line 877
label_34:
#line 877
undef($memory_3);
#line 878
$memory_3 = [];
#line 878
die(dfile::ssave($memory_3));
#line 878
undef($memory_3);
#line 878
undef($memory_0);
#line 878
undef($memory_1);
#line 878
undef($memory_2);
#line 878
return;
}

sub interpreter_priv::execute_una_op($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;$memory_0 = $_[0];$memory_1 = $_[1];
#line 882
$memory_2 = "!";
#line 882
$memory_2 = c_rt_lib::to_nl($memory_1 eq $memory_2);
#line 882
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 882
if (c_rt_lib::check_true($memory_2)) {goto label_2;}
#line 882
$memory_3 = $memory_0;
#line 882
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 882
undef($memory_0);
#line 882
undef($memory_1);
#line 882
undef($memory_2);
#line 882
return $memory_3;
#line 882
undef($memory_3);
#line 882
goto label_2;
#line 882
label_2:
#line 882
undef($memory_2);
#line 883
$memory_2 = "-";
#line 883
$memory_2 = c_rt_lib::to_nl($memory_1 eq $memory_2);
#line 883
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 883
if (c_rt_lib::check_true($memory_2)) {goto label_4;}
#line 883
$memory_3 = $memory_0;
#line 883
$memory_3 = -$memory_3;
#line 883
undef($memory_0);
#line 883
undef($memory_1);
#line 883
undef($memory_2);
#line 883
return $memory_3;
#line 883
undef($memory_3);
#line 883
goto label_4;
#line 883
label_4:
#line 883
undef($memory_2);
#line 884
$memory_2 = "+";
#line 884
$memory_2 = c_rt_lib::to_nl($memory_1 eq $memory_2);
#line 884
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 884
if (c_rt_lib::check_true($memory_2)) {goto label_6;}
#line 884
$memory_3 = $memory_0;
#line 884
$memory_3 = +$memory_3;
#line 884
undef($memory_0);
#line 884
undef($memory_1);
#line 884
undef($memory_2);
#line 884
return $memory_3;
#line 884
undef($memory_3);
#line 884
goto label_6;
#line 884
label_6:
#line 884
undef($memory_2);
#line 885
$memory_2 = [];
#line 885
die(dfile::ssave($memory_2));
#line 885
undef($memory_2);
#line 885
undef($memory_0);
#line 885
undef($memory_1);
#line 885
return;
}

sub interpreter_priv::get_command($) {
my $memory_0;my $memory_1;my $memory_2;$memory_0 = $_[0];
#line 889
$memory_1 = $memory_0->{'func'};
#line 889
$memory_1 = $memory_1->{'commands'};
#line 889
$memory_2 = $memory_0->{'top'};
#line 889
$memory_2 = $memory_2->{'next'};
#line 889
$memory_1 = $memory_1->[$memory_2];
#line 889
undef($memory_2);
#line 889
undef($memory_0);
#line 889
return $memory_1;
#line 889
undef($memory_1);
#line 889
undef($memory_0);
#line 889
return;
}

sub interpreter_priv::get_func_key($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;$memory_0 = $_[0];$memory_1 = $_[1];
#line 893
$memory_2 = "::";
#line 893
$memory_2 = $memory_1 . $memory_2;
#line 894
$memory_3 = $memory_0->{'access'};
#line 894
$memory_3 = c_rt_lib::ov_is($memory_3, 'priv');
#line 894
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 894
if (c_rt_lib::check_true($memory_3)) {goto label_2;}
#line 895
$memory_4 = "priv::";
#line 895
$memory_2 = $memory_2 . $memory_4;
#line 895
undef($memory_4);
#line 896
goto label_2;
#line 896
label_2:
#line 896
undef($memory_3);
#line 897
$memory_3 = $memory_0->{'name'};
#line 897
$memory_2 = $memory_2 . $memory_3;
#line 897
undef($memory_3);
#line 898
undef($memory_0);
#line 898
undef($memory_1);
#line 898
return $memory_2;
#line 898
undef($memory_2);
#line 898
undef($memory_0);
#line 898
undef($memory_1);
#line 898
return;
}
