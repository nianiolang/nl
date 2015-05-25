use c_rt_lib;
use array;
use ptd;
use hash;
use nlasm;
use flow_graph;
sub unnecessary_commands::state_t;
sub unnecessary_commands::block_state_t;
sub unnecessary_commands::graph_t;
sub unnecessary_commands::delete_unnecessary_commands;
sub unnecessary_commands_priv::build_empty_state;
sub unnecessary_commands_priv::has_side_effects;
sub unnecessary_commands_priv::build_blocks_states;
sub unnecessary_commands_priv::delete_unnecessary_commands_in_blocks;
sub unnecessary_commands_priv::delete_unnecessary_clears_in_blocks;
sub unnecessary_commands_priv::build_commands_graph;
sub unnecessary_commands_priv::visit_node;
sub unnecessary_commands_priv::build_block_state;

return 1;

sub unnecessary_commands::__state_t() {
my $memory_0;my $memory_1;
#line 12
$memory_1 = {
	module => "unnecessary_commands",
	name => "block_state_t",
};
#line 12
$memory_1 = c_rt_lib::ov_mk_arg('ref', $memory_1);
#line 12
$memory_0 = ptd::arr($memory_1);
#line 12
undef($memory_1);
#line 12
return $memory_0;
#line 12
undef($memory_0);
#line 12
return;
}

my $_state_t;
sub unnecessary_commands::state_t() {
	$_state_t = unnecessary_commands::__state_t() unless defined $_state_t;
	return $_state_t;
}

sub unnecessary_commands::__block_state_t() {
my $memory_0;my $memory_1;my $memory_2;
#line 15
$memory_2 = ptd::sim();
#line 15
$memory_1 = ptd::hash($memory_2);
#line 15
undef($memory_2);
#line 15
$memory_0 = ptd::arr($memory_1);
#line 15
undef($memory_1);
#line 15
return $memory_0;
#line 15
undef($memory_0);
#line 15
return;
}

my $_block_state_t;
sub unnecessary_commands::block_state_t() {
	$_block_state_t = unnecessary_commands::__block_state_t() unless defined $_block_state_t;
	return $_block_state_t;
}

sub unnecessary_commands::__graph_t() {
my $memory_0;my $memory_1;my $memory_2;
#line 18
$memory_2 = ptd::sim();
#line 18
$memory_1 = ptd::arr($memory_2);
#line 18
undef($memory_2);
#line 18
$memory_0 = ptd::arr($memory_1);
#line 18
undef($memory_1);
#line 18
return $memory_0;
#line 18
undef($memory_0);
#line 18
return;
}

my $_graph_t;
sub unnecessary_commands::graph_t() {
	$_graph_t = unnecessary_commands::__graph_t() unless defined $_graph_t;
	return $_graph_t;
}

sub unnecessary_commands::delete_unnecessary_commands($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);
#line 21
$memory_2 = $memory_0->{'commands'};
#line 21
$memory_3 = $memory_0->{'args_type'};
#line 21
$memory_1 = flow_graph::make_blocks($memory_2, $memory_3);
#line 21
undef($memory_3);
#line 21
undef($memory_2);
#line 22
$memory_2 = $memory_0->{'reg_size'};
#line 22
unnecessary_commands_priv::delete_unnecessary_commands_in_blocks($memory_1, $memory_2);
#line 22
undef($memory_2);
#line 23
$memory_2 = flow_graph::combine_blocks($memory_1);
#line 23
$memory_3 = $memory_2;
#line 23
 if (c_rt_lib::get_hashcount($memory_0) > 1) {$memory_0 = {%{$memory_0}};}$memory_0->{'commands'} = $memory_3;
#line 23
undef($memory_2);
#line 23
undef($memory_3);
#line 25
$memory_3 = $memory_0->{'commands'};
#line 25
$memory_4 = $memory_0->{'args_type'};
#line 25
$memory_2 = flow_graph::make_blocks($memory_3, $memory_4);
#line 25
undef($memory_4);
#line 25
undef($memory_3);
#line 25
$memory_1 = $memory_2;
#line 25
undef($memory_2);
#line 26
$memory_2 = $memory_0->{'reg_size'};
#line 26
$memory_4 = $memory_0->{'args_type'};
#line 26
$memory_3 = array::len($memory_4);
#line 26
undef($memory_4);
#line 26
unnecessary_commands_priv::delete_unnecessary_clears_in_blocks($memory_1, $memory_2, $memory_3);
#line 26
undef($memory_3);
#line 26
undef($memory_2);
#line 27
$memory_2 = flow_graph::combine_blocks($memory_1);
#line 27
$memory_3 = $memory_2;
#line 27
 if (c_rt_lib::get_hashcount($memory_0) > 1) {$memory_0 = {%{$memory_0}};}$memory_0->{'commands'} = $memory_3;
#line 27
undef($memory_2);
#line 27
undef($memory_3);
#line 27
undef($memory_1);
#line 27
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub unnecessary_commands_priv::build_empty_state($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;$memory_0 = $_[0];
#line 31
$memory_1 = [];
#line 32
$memory_2 = 0;
#line 32
$memory_3 = 1;
#line 32
label_3:
#line 32
$memory_4 = c_rt_lib::to_nl($memory_2 >= $memory_0);
#line 32
if (c_rt_lib::check_true($memory_4)) {goto label_1;}
#line 32
$memory_5 = {};
#line 32
array::push($memory_1, $memory_5);
#line 32
undef($memory_5);
#line 32
$memory_2 = $memory_2 + $memory_3;
#line 32
goto label_3;
#line 32
label_1:
#line 32
undef($memory_2);
#line 32
undef($memory_3);
#line 32
undef($memory_4);
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

sub unnecessary_commands_priv::has_side_effects($) {
my $memory_0;my $memory_1;my $memory_2;$memory_0 = $_[0];
#line 36
$memory_1 = $memory_0->{'cmd'};
#line 37
$memory_2 = $memory_1;
#line 37
$memory_2 = c_rt_lib::ov_is($memory_2, 'call');
#line 37
if (c_rt_lib::check_true($memory_2)) {goto label_5;}
#line 37
$memory_2 = $memory_1;
#line 37
$memory_2 = c_rt_lib::ov_is($memory_2, 'return');
#line 37
label_5:
#line 37
if (c_rt_lib::check_true($memory_2)) {goto label_4;}
#line 37
$memory_2 = $memory_1;
#line 37
$memory_2 = c_rt_lib::ov_is($memory_2, 'die');
#line 37
label_4:
#line 37
if (c_rt_lib::check_true($memory_2)) {goto label_3;}
#line 37
$memory_2 = $memory_1;
#line 37
$memory_2 = c_rt_lib::ov_is($memory_2, 'prt_lbl');
#line 37
label_3:
#line 37
if (c_rt_lib::check_true($memory_2)) {goto label_2;}
#line 37
$memory_2 = $memory_1;
#line 37
$memory_2 = c_rt_lib::ov_is($memory_2, 'if_goto');
#line 37
label_2:
#line 37
if (c_rt_lib::check_true($memory_2)) {goto label_1;}
#line 37
$memory_2 = $memory_1;
#line 37
$memory_2 = c_rt_lib::ov_is($memory_2, 'goto');
#line 37
label_1:
#line 37
undef($memory_0);
#line 37
undef($memory_1);
#line 37
return $memory_2;
#line 37
undef($memory_2);
#line 37
undef($memory_1);
#line 37
undef($memory_0);
#line 37
return;
}

sub unnecessary_commands_priv::build_blocks_states($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;$memory_0 = $_[0];$memory_1 = $_[1];
#line 40
$memory_2 = [];
#line 41
$memory_3 = unnecessary_commands_priv::build_empty_state($memory_1);
#line 42
$memory_4 = {};
#line 43
$memory_5 = array::len($memory_0);
#line 43
$memory_6 = 0;
#line 43
$memory_7 = 1;
#line 43
label_3:
#line 43
$memory_8 = c_rt_lib::to_nl($memory_6 >= $memory_5);
#line 43
if (c_rt_lib::check_true($memory_8)) {goto label_1;}
#line 44
array::push($memory_2, $memory_3);
#line 45
$memory_6 = $memory_6 + $memory_7;
#line 45
goto label_3;
#line 45
label_1:
#line 45
undef($memory_5);
#line 45
undef($memory_6);
#line 45
undef($memory_7);
#line 45
undef($memory_8);
#line 46
$memory_5 = array::len($memory_0);
#line 46
$memory_6 = 0;
#line 46
$memory_5 = c_rt_lib::to_nl($memory_5 == $memory_6);
#line 46
undef($memory_6);
#line 46
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 46
if (c_rt_lib::check_true($memory_5)) {goto label_5;}
#line 46
$memory_6 = [];
#line 46
die(dfile::ssave($memory_6));
#line 46
goto label_5;
#line 46
label_5:
#line 46
undef($memory_5);
#line 46
undef($memory_6);
#line 47
$memory_5 = 0;
#line 47
unnecessary_commands_priv::build_block_state($memory_2, $memory_0, $memory_5, $memory_3, $memory_4);
#line 47
undef($memory_5);
#line 48
undef($memory_0);
#line 48
undef($memory_1);
#line 48
undef($memory_3);
#line 48
undef($memory_4);
#line 48
return $memory_2;
#line 48
undef($memory_2);
#line 48
undef($memory_3);
#line 48
undef($memory_4);
#line 48
undef($memory_0);
#line 48
undef($memory_1);
#line 48
return;
}

sub unnecessary_commands_priv::delete_unnecessary_commands_in_blocks($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;my $memory_13;my $memory_14;my $memory_15;my $memory_16;my $memory_17;my $memory_18;my $memory_19;my $memory_20;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];
#line 51
$memory_2 = unnecessary_commands_priv::build_blocks_states($memory_0, $memory_1);
#line 52
$memory_3 = 0;
#line 53
$memory_5 = 0;
#line 53
$memory_6 = 1;
#line 53
$memory_7 = c_rt_lib::array_len($memory_0);
#line 53
label_3:
#line 53
$memory_8 = c_rt_lib::to_nl($memory_5 >= $memory_7);
#line 53
if (c_rt_lib::check_true($memory_8)) {goto label_1;}
#line 53
$memory_4 = $memory_0->[$memory_5];
#line 54
$memory_10 = $memory_4->{'cmds'};
#line 54
$memory_9 = array::len($memory_10);
#line 54
undef($memory_10);
#line 54
$memory_3 = $memory_3 + $memory_9;
#line 54
undef($memory_9);
#line 55
$memory_5 = $memory_5 + $memory_6;
#line 55
goto label_3;
#line 55
label_1:
#line 55
undef($memory_4);
#line 55
undef($memory_5);
#line 55
undef($memory_6);
#line 55
undef($memory_7);
#line 55
undef($memory_8);
#line 56
$memory_4 = unnecessary_commands_priv::build_commands_graph($memory_2, $memory_0, $memory_3);
#line 57
$memory_5 = {};
#line 58
$memory_7 = 0;
#line 58
$memory_8 = 1;
#line 58
$memory_9 = c_rt_lib::array_len($memory_0);
#line 58
label_6:
#line 58
$memory_10 = c_rt_lib::to_nl($memory_7 >= $memory_9);
#line 58
if (c_rt_lib::check_true($memory_10)) {goto label_4;}
#line 58
$memory_6 = $memory_0->[$memory_7];
#line 59
$memory_12 = $memory_6->{'cmds'};
#line 59
$memory_11 = array::len($memory_12);
#line 59
undef($memory_12);
#line 59
$memory_12 = 0;
#line 59
$memory_13 = 1;
#line 59
label_9:
#line 59
$memory_14 = c_rt_lib::to_nl($memory_12 >= $memory_11);
#line 59
if (c_rt_lib::check_true($memory_14)) {goto label_7;}
#line 60
$memory_16 = $memory_6->{'cmds'};
#line 60
$memory_16 = $memory_16->[$memory_12];
#line 60
$memory_15 = unnecessary_commands_priv::has_side_effects($memory_16);
#line 60
undef($memory_16);
#line 60
$memory_15 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_15));
#line 60
if (c_rt_lib::check_true($memory_15)) {goto label_11;}
#line 61
$memory_16 = $memory_6->{'from'};
#line 61
$memory_16 = $memory_16 + $memory_12;
#line 61
unnecessary_commands_priv::visit_node($memory_4, $memory_16, $memory_5);
#line 61
undef($memory_16);
#line 62
goto label_11;
#line 62
label_11:
#line 62
undef($memory_15);
#line 63
$memory_12 = $memory_12 + $memory_13;
#line 63
goto label_9;
#line 63
label_7:
#line 63
undef($memory_11);
#line 63
undef($memory_12);
#line 63
undef($memory_13);
#line 63
undef($memory_14);
#line 64
$memory_7 = $memory_7 + $memory_8;
#line 64
goto label_6;
#line 64
label_4:
#line 64
undef($memory_6);
#line 64
undef($memory_7);
#line 64
undef($memory_8);
#line 64
undef($memory_9);
#line 64
undef($memory_10);
#line 65
$memory_6 = array::len($memory_0);
#line 65
$memory_7 = 0;
#line 65
$memory_8 = 1;
#line 65
label_14:
#line 65
$memory_9 = c_rt_lib::to_nl($memory_7 >= $memory_6);
#line 65
if (c_rt_lib::check_true($memory_9)) {goto label_12;}
#line 66
$memory_10 = [];
#line 67
$memory_12 = $memory_0->[$memory_7];
#line 67
$memory_12 = $memory_12->{'cmds'};
#line 67
$memory_11 = array::len($memory_12);
#line 67
undef($memory_12);
#line 67
$memory_12 = 0;
#line 67
$memory_13 = 1;
#line 67
label_17:
#line 67
$memory_14 = c_rt_lib::to_nl($memory_12 >= $memory_11);
#line 67
if (c_rt_lib::check_true($memory_14)) {goto label_15;}
#line 68
$memory_15 = $memory_0->[$memory_7];
#line 68
$memory_15 = $memory_15->{'cmds'};
#line 68
$memory_15 = $memory_15->[$memory_12];
#line 69
$memory_16 = c_rt_lib::to_nl(0);
#line 70
$memory_17 = $memory_0->[$memory_7];
#line 70
$memory_17 = $memory_17->{'from'};
#line 70
$memory_17 = $memory_17 + $memory_12;
#line 71
$memory_18 = $memory_15->{'cmd'};
#line 71
$memory_18 = c_rt_lib::ov_is($memory_18, 'clear');
#line 71
$memory_18 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_18));
#line 71
$memory_18 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_18));
#line 71
if (c_rt_lib::check_true($memory_18)) {goto label_19;}
#line 72
$memory_19 = hash::has_key($memory_5, $memory_17);
#line 72
$memory_19 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_19));
#line 72
$memory_19 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_19));
#line 72
if (c_rt_lib::check_true($memory_19)) {goto label_21;}
#line 73
$memory_20 = c_rt_lib::to_nl(1);
#line 73
$memory_16 = $memory_20;
#line 73
undef($memory_20);
#line 74
goto label_21;
#line 74
label_21:
#line 74
undef($memory_19);
#line 75
goto label_19;
#line 75
label_19:
#line 75
undef($memory_18);
#line 76
$memory_18 = $memory_16;
#line 76
$memory_18 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_18));
#line 76
$memory_18 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_18));
#line 76
if (c_rt_lib::check_true($memory_18)) {goto label_23;}
#line 77
array::push($memory_10, $memory_15);
#line 78
goto label_23;
#line 78
label_23:
#line 78
undef($memory_18);
#line 78
undef($memory_15);
#line 78
undef($memory_16);
#line 78
undef($memory_17);
#line 79
$memory_12 = $memory_12 + $memory_13;
#line 79
goto label_17;
#line 79
label_15:
#line 79
undef($memory_11);
#line 79
undef($memory_12);
#line 79
undef($memory_13);
#line 79
undef($memory_14);
#line 80
$memory_11 = c_rt_lib::get_ref_arr($memory_0, $memory_7);
#line 80
$memory_12 = $memory_10;
#line 80
 if (c_rt_lib::get_hashcount($memory_11) > 1) {$memory_11 = {%{$memory_11}};}$memory_11->{'cmds'} = $memory_12;
#line 80
c_rt_lib::set_ref_arr($memory_0, $memory_7, $memory_11);
#line 80
undef($memory_11);
#line 80
undef($memory_12);
#line 80
undef($memory_10);
#line 81
$memory_7 = $memory_7 + $memory_8;
#line 81
goto label_14;
#line 81
label_12:
#line 81
undef($memory_6);
#line 81
undef($memory_7);
#line 81
undef($memory_8);
#line 81
undef($memory_9);
#line 81
undef($memory_2);
#line 81
undef($memory_3);
#line 81
undef($memory_4);
#line 81
undef($memory_5);
#line 81
undef($memory_1);
#line 81
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub unnecessary_commands_priv::delete_unnecessary_clears_in_blocks($$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;my $memory_13;my $memory_14;my $memory_15;my $memory_16;my $memory_17;my $memory_18;my $memory_19;my $memory_20;my $memory_21;my $memory_22;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];$memory_2 = $_[2];
#line 84
$memory_3 = unnecessary_commands_priv::build_blocks_states($memory_0, $memory_1);
#line 85
$memory_4 = 0;
#line 86
$memory_6 = 0;
#line 86
$memory_7 = 1;
#line 86
$memory_8 = c_rt_lib::array_len($memory_0);
#line 86
label_3:
#line 86
$memory_9 = c_rt_lib::to_nl($memory_6 >= $memory_8);
#line 86
if (c_rt_lib::check_true($memory_9)) {goto label_1;}
#line 86
$memory_5 = $memory_0->[$memory_6];
#line 87
$memory_11 = $memory_5->{'cmds'};
#line 87
$memory_10 = array::len($memory_11);
#line 87
undef($memory_11);
#line 87
$memory_4 = $memory_4 + $memory_10;
#line 87
undef($memory_10);
#line 88
$memory_6 = $memory_6 + $memory_7;
#line 88
goto label_3;
#line 88
label_1:
#line 88
undef($memory_5);
#line 88
undef($memory_6);
#line 88
undef($memory_7);
#line 88
undef($memory_8);
#line 88
undef($memory_9);
#line 89
$memory_5 = unnecessary_commands_priv::build_commands_graph($memory_3, $memory_0, $memory_4);
#line 90
$memory_6 = array::len($memory_0);
#line 90
$memory_7 = 0;
#line 90
$memory_8 = 1;
#line 90
label_6:
#line 90
$memory_9 = c_rt_lib::to_nl($memory_7 >= $memory_6);
#line 90
if (c_rt_lib::check_true($memory_9)) {goto label_4;}
#line 91
$memory_10 = [];
#line 92
$memory_12 = $memory_0->[$memory_7];
#line 92
$memory_12 = $memory_12->{'cmds'};
#line 92
$memory_11 = array::len($memory_12);
#line 92
undef($memory_12);
#line 92
$memory_12 = 0;
#line 92
$memory_13 = 1;
#line 92
label_9:
#line 92
$memory_14 = c_rt_lib::to_nl($memory_12 >= $memory_11);
#line 92
if (c_rt_lib::check_true($memory_14)) {goto label_7;}
#line 93
$memory_15 = $memory_0->[$memory_7];
#line 93
$memory_15 = $memory_15->{'cmds'};
#line 93
$memory_15 = $memory_15->[$memory_12];
#line 94
$memory_16 = c_rt_lib::to_nl(0);
#line 95
$memory_17 = $memory_0->[$memory_7];
#line 95
$memory_17 = $memory_17->{'from'};
#line 95
$memory_17 = $memory_17 + $memory_12;
#line 96
$memory_18 = $memory_15->{'cmd'};
#line 96
$memory_18 = c_rt_lib::ov_is($memory_18, 'clear');
#line 96
$memory_18 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_18));
#line 96
if (c_rt_lib::check_true($memory_18)) {goto label_11;}
#line 97
$memory_19 = $memory_15->{'cmd'};
#line 97
$memory_19 = c_rt_lib::ov_as($memory_19, 'clear');
#line 98
$memory_22 = $memory_5->[$memory_17];
#line 98
$memory_20 = array::len($memory_22);
#line 98
undef($memory_22);
#line 98
$memory_22 = 0;
#line 98
$memory_20 = c_rt_lib::to_nl($memory_20 == $memory_22);
#line 98
undef($memory_22);
#line 98
$memory_21 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_20));
#line 98
if (c_rt_lib::check_true($memory_21)) {goto label_14;}
#line 98
$memory_20 = c_rt_lib::to_nl($memory_19 >= $memory_2);
#line 98
label_14:
#line 98
undef($memory_21);
#line 98
$memory_20 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_20));
#line 98
if (c_rt_lib::check_true($memory_20)) {goto label_13;}
#line 99
$memory_21 = c_rt_lib::to_nl(1);
#line 99
$memory_16 = $memory_21;
#line 99
undef($memory_21);
#line 100
goto label_13;
#line 100
label_13:
#line 100
undef($memory_20);
#line 100
undef($memory_19);
#line 101
goto label_11;
#line 101
label_11:
#line 101
undef($memory_18);
#line 102
$memory_18 = $memory_16;
#line 102
$memory_18 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_18));
#line 102
$memory_18 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_18));
#line 102
if (c_rt_lib::check_true($memory_18)) {goto label_16;}
#line 103
array::push($memory_10, $memory_15);
#line 104
goto label_16;
#line 104
label_16:
#line 104
undef($memory_18);
#line 104
undef($memory_15);
#line 104
undef($memory_16);
#line 104
undef($memory_17);
#line 105
$memory_12 = $memory_12 + $memory_13;
#line 105
goto label_9;
#line 105
label_7:
#line 105
undef($memory_11);
#line 105
undef($memory_12);
#line 105
undef($memory_13);
#line 105
undef($memory_14);
#line 106
$memory_11 = c_rt_lib::get_ref_arr($memory_0, $memory_7);
#line 106
$memory_12 = $memory_10;
#line 106
 if (c_rt_lib::get_hashcount($memory_11) > 1) {$memory_11 = {%{$memory_11}};}$memory_11->{'cmds'} = $memory_12;
#line 106
c_rt_lib::set_ref_arr($memory_0, $memory_7, $memory_11);
#line 106
undef($memory_11);
#line 106
undef($memory_12);
#line 106
undef($memory_10);
#line 107
$memory_7 = $memory_7 + $memory_8;
#line 107
goto label_6;
#line 107
label_4:
#line 107
undef($memory_6);
#line 107
undef($memory_7);
#line 107
undef($memory_8);
#line 107
undef($memory_9);
#line 107
undef($memory_3);
#line 107
undef($memory_4);
#line 107
undef($memory_5);
#line 107
undef($memory_1);
#line 107
undef($memory_2);
#line 107
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub unnecessary_commands_priv::build_commands_graph($$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;my $memory_13;my $memory_14;my $memory_15;my $memory_16;my $memory_17;my $memory_18;my $memory_19;my $memory_20;my $memory_21;my $memory_22;my $memory_23;$memory_0 = $_[0];$memory_1 = $_[1];$memory_2 = $_[2];
#line 111
$memory_3 = [];
#line 112
$memory_4 = 0;
#line 112
$memory_5 = 1;
#line 112
label_3:
#line 112
$memory_6 = c_rt_lib::to_nl($memory_4 >= $memory_2);
#line 112
if (c_rt_lib::check_true($memory_6)) {goto label_1;}
#line 112
$memory_7 = [];
#line 112
array::push($memory_3, $memory_7);
#line 112
undef($memory_7);
#line 112
$memory_4 = $memory_4 + $memory_5;
#line 112
goto label_3;
#line 112
label_1:
#line 112
undef($memory_4);
#line 112
undef($memory_5);
#line 112
undef($memory_6);
#line 113
$memory_4 = array::len($memory_1);
#line 113
$memory_5 = 0;
#line 113
$memory_6 = 1;
#line 113
label_6:
#line 113
$memory_7 = c_rt_lib::to_nl($memory_5 >= $memory_4);
#line 113
if (c_rt_lib::check_true($memory_7)) {goto label_4;}
#line 114
$memory_8 = $memory_1->[$memory_5];
#line 115
$memory_9 = $memory_0->[$memory_5];
#line 116
$memory_10 = $memory_8->{'reg_uses'};
#line 116
$memory_12 = 0;
#line 116
$memory_13 = 1;
#line 116
$memory_14 = c_rt_lib::array_len($memory_10);
#line 116
label_9:
#line 116
$memory_15 = c_rt_lib::to_nl($memory_12 >= $memory_14);
#line 116
if (c_rt_lib::check_true($memory_15)) {goto label_7;}
#line 116
$memory_11 = $memory_10->[$memory_12];
#line 117
$memory_16 = $memory_11->{'type'};
#line 117
$memory_17 = c_rt_lib::ov_is($memory_16, 'write');
#line 117
if (c_rt_lib::check_true($memory_17)) {goto label_11;}
#line 120
$memory_17 = c_rt_lib::ov_is($memory_16, 'read');
#line 120
if (c_rt_lib::check_true($memory_17)) {goto label_12;}
#line 124
$memory_17 = c_rt_lib::ov_is($memory_16, 'clear');
#line 124
if (c_rt_lib::check_true($memory_17)) {goto label_13;}
#line 124
$memory_17 = "NOMATCHALERT";
#line 124
$memory_17 = [$memory_17,$memory_16];
#line 124
die(dfile::ssave($memory_17));
#line 117
label_11:
#line 118
$memory_18 = {};
#line 118
$memory_20 = $memory_11->{'reg'};
#line 118
$memory_19 = $memory_18;
#line 118
 if (c_rt_lib::get_arrcount($memory_9) > 1) {$memory_9 = [@{$memory_9}];}$memory_9->[$memory_20] = $memory_19;
#line 118
undef($memory_18);
#line 118
undef($memory_19);
#line 118
undef($memory_20);
#line 119
$memory_19 = $memory_11->{'reg'};
#line 119
$memory_18 = c_rt_lib::get_ref_arr($memory_9, $memory_19);
#line 119
$memory_20 = $memory_11->{'cmd_nr'};
#line 119
$memory_21 = "";
#line 119
hash::set_value($memory_18, $memory_20, $memory_21);
#line 119
undef($memory_21);
#line 119
undef($memory_20);
#line 119
c_rt_lib::set_ref_arr($memory_9, $memory_19, $memory_18);
#line 119
undef($memory_18);
#line 119
undef($memory_19);
#line 120
goto label_10;
#line 120
label_12:
#line 121
$memory_19 = $memory_11->{'reg'};
#line 121
$memory_18 = $memory_9->[$memory_19];
#line 121
undef($memory_19);
#line 121
$memory_21 = c_rt_lib::init_iter($memory_18);
#line 121
label_16:
#line 121
$memory_19 = c_rt_lib::is_end_hash($memory_21);
#line 121
if (c_rt_lib::check_true($memory_19)) {goto label_14;}
#line 121
$memory_19 = c_rt_lib::get_key_iter($memory_21);
#line 121
$memory_20 = c_rt_lib::hash_get_value($memory_18, $memory_19);
#line 122
$memory_23 = $memory_11->{'cmd_nr'};
#line 122
$memory_22 = c_rt_lib::get_ref_arr($memory_3, $memory_23);
#line 122
array::push($memory_22, $memory_19);
#line 122
c_rt_lib::set_ref_arr($memory_3, $memory_23, $memory_22);
#line 122
undef($memory_22);
#line 122
undef($memory_23);
#line 123
$memory_21 = c_rt_lib::next_iter($memory_21);
#line 123
goto label_16;
#line 123
label_14:
#line 123
undef($memory_18);
#line 123
undef($memory_19);
#line 123
undef($memory_20);
#line 123
undef($memory_21);
#line 124
goto label_10;
#line 124
label_13:
#line 125
$memory_19 = $memory_11->{'reg'};
#line 125
$memory_18 = $memory_9->[$memory_19];
#line 125
undef($memory_19);
#line 125
$memory_21 = c_rt_lib::init_iter($memory_18);
#line 125
label_19:
#line 125
$memory_19 = c_rt_lib::is_end_hash($memory_21);
#line 125
if (c_rt_lib::check_true($memory_19)) {goto label_17;}
#line 125
$memory_19 = c_rt_lib::get_key_iter($memory_21);
#line 125
$memory_20 = c_rt_lib::hash_get_value($memory_18, $memory_19);
#line 126
$memory_23 = $memory_11->{'cmd_nr'};
#line 126
$memory_22 = c_rt_lib::get_ref_arr($memory_3, $memory_23);
#line 126
array::push($memory_22, $memory_19);
#line 126
c_rt_lib::set_ref_arr($memory_3, $memory_23, $memory_22);
#line 126
undef($memory_22);
#line 126
undef($memory_23);
#line 127
$memory_21 = c_rt_lib::next_iter($memory_21);
#line 127
goto label_19;
#line 127
label_17:
#line 127
undef($memory_18);
#line 127
undef($memory_19);
#line 127
undef($memory_20);
#line 127
undef($memory_21);
#line 128
$memory_18 = {};
#line 128
$memory_20 = $memory_11->{'reg'};
#line 128
$memory_19 = $memory_18;
#line 128
 if (c_rt_lib::get_arrcount($memory_9) > 1) {$memory_9 = [@{$memory_9}];}$memory_9->[$memory_20] = $memory_19;
#line 128
undef($memory_18);
#line 128
undef($memory_19);
#line 128
undef($memory_20);
#line 129
goto label_10;
#line 129
label_10:
#line 129
undef($memory_16);
#line 129
undef($memory_17);
#line 130
$memory_12 = $memory_12 + $memory_13;
#line 130
goto label_9;
#line 130
label_7:
#line 130
undef($memory_10);
#line 130
undef($memory_11);
#line 130
undef($memory_12);
#line 130
undef($memory_13);
#line 130
undef($memory_14);
#line 130
undef($memory_15);
#line 130
undef($memory_8);
#line 130
undef($memory_9);
#line 131
$memory_5 = $memory_5 + $memory_6;
#line 131
goto label_6;
#line 131
label_4:
#line 131
undef($memory_4);
#line 131
undef($memory_5);
#line 131
undef($memory_6);
#line 131
undef($memory_7);
#line 132
undef($memory_0);
#line 132
undef($memory_1);
#line 132
undef($memory_2);
#line 132
return $memory_3;
#line 132
undef($memory_3);
#line 132
undef($memory_0);
#line 132
undef($memory_1);
#line 132
undef($memory_2);
#line 132
return;
}

sub unnecessary_commands_priv::visit_node($$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;$memory_0 = $_[0];$memory_1 = $_[1];$memory_2 = $_[2];Scalar::Util::weaken($_[2]) if ref($_[2]);
#line 135
$memory_3 = hash::has_key($memory_2, $memory_1);
#line 135
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 135
if (c_rt_lib::check_true($memory_3)) {goto label_2;}
#line 135
undef($memory_0);
#line 135
undef($memory_1);
#line 135
undef($memory_3);
#line 135
$_[2] = $memory_2;return;
#line 135
goto label_2;
#line 135
label_2:
#line 135
undef($memory_3);
#line 136
$memory_3 = "";
#line 136
hash::set_value($memory_2, $memory_1, $memory_3);
#line 136
undef($memory_3);
#line 137
$memory_3 = $memory_0->[$memory_1];
#line 137
$memory_5 = 0;
#line 137
$memory_6 = 1;
#line 137
$memory_7 = c_rt_lib::array_len($memory_3);
#line 137
label_5:
#line 137
$memory_8 = c_rt_lib::to_nl($memory_5 >= $memory_7);
#line 137
if (c_rt_lib::check_true($memory_8)) {goto label_3;}
#line 137
$memory_4 = $memory_3->[$memory_5];
#line 138
unnecessary_commands_priv::visit_node($memory_0, $memory_4, $memory_2);
#line 139
$memory_5 = $memory_5 + $memory_6;
#line 139
goto label_5;
#line 139
label_3:
#line 139
undef($memory_3);
#line 139
undef($memory_4);
#line 139
undef($memory_5);
#line 139
undef($memory_6);
#line 139
undef($memory_7);
#line 139
undef($memory_8);
#line 139
undef($memory_0);
#line 139
undef($memory_1);
#line 139
$_[2] = $memory_2;return;
$_[2] = $memory_2;}

sub unnecessary_commands_priv::build_block_state($$$$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;my $memory_13;my $memory_14;my $memory_15;my $memory_16;my $memory_17;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];$memory_2 = $_[2];$memory_3 = $_[3];$memory_4 = $_[4];Scalar::Util::weaken($_[4]) if ref($_[4]);
#line 143
$memory_5 = c_rt_lib::to_nl(0);
#line 144
$memory_6 = hash::has_key($memory_4, $memory_2);
#line 144
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 144
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 144
if (c_rt_lib::check_true($memory_6)) {goto label_2;}
#line 145
$memory_7 = "";
#line 145
hash::set_value($memory_4, $memory_2, $memory_7);
#line 145
undef($memory_7);
#line 146
$memory_7 = c_rt_lib::to_nl(1);
#line 146
$memory_5 = $memory_7;
#line 146
undef($memory_7);
#line 147
goto label_2;
#line 147
label_2:
#line 147
undef($memory_6);
#line 148
$memory_6 = array::len($memory_3);
#line 149
$memory_7 = 0;
#line 149
$memory_8 = 1;
#line 149
label_5:
#line 149
$memory_9 = c_rt_lib::to_nl($memory_7 >= $memory_6);
#line 149
if (c_rt_lib::check_true($memory_9)) {goto label_3;}
#line 150
$memory_10 = $memory_3->[$memory_7];
#line 150
$memory_13 = c_rt_lib::init_iter($memory_10);
#line 150
label_8:
#line 150
$memory_11 = c_rt_lib::is_end_hash($memory_13);
#line 150
if (c_rt_lib::check_true($memory_11)) {goto label_6;}
#line 150
$memory_11 = c_rt_lib::get_key_iter($memory_13);
#line 150
$memory_12 = c_rt_lib::hash_get_value($memory_10, $memory_11);
#line 151
$memory_15 = $memory_0->[$memory_2];
#line 151
$memory_15 = $memory_15->[$memory_7];
#line 151
$memory_14 = hash::has_key($memory_15, $memory_11);
#line 151
undef($memory_15);
#line 151
$memory_14 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_14));
#line 151
$memory_14 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_14));
#line 151
if (c_rt_lib::check_true($memory_14)) {goto label_10;}
#line 152
$memory_15 = c_rt_lib::get_ref_arr($memory_0, $memory_2);
#line 152
$memory_16 = c_rt_lib::get_ref_arr($memory_15, $memory_7);
#line 152
$memory_17 = "";
#line 152
hash::set_value($memory_16, $memory_11, $memory_17);
#line 152
undef($memory_17);
#line 152
c_rt_lib::set_ref_arr($memory_15, $memory_7, $memory_16);
#line 152
c_rt_lib::set_ref_arr($memory_0, $memory_2, $memory_15);
#line 152
undef($memory_15);
#line 152
undef($memory_16);
#line 153
$memory_15 = c_rt_lib::to_nl(1);
#line 153
$memory_5 = $memory_15;
#line 153
undef($memory_15);
#line 154
goto label_10;
#line 154
label_10:
#line 154
undef($memory_14);
#line 155
$memory_13 = c_rt_lib::next_iter($memory_13);
#line 155
goto label_8;
#line 155
label_6:
#line 155
undef($memory_10);
#line 155
undef($memory_11);
#line 155
undef($memory_12);
#line 155
undef($memory_13);
#line 156
$memory_7 = $memory_7 + $memory_8;
#line 156
goto label_5;
#line 156
label_3:
#line 156
undef($memory_7);
#line 156
undef($memory_8);
#line 156
undef($memory_9);
#line 157
$memory_7 = $memory_5;
#line 157
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 157
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 157
if (c_rt_lib::check_true($memory_7)) {goto label_12;}
#line 157
undef($memory_1);
#line 157
undef($memory_2);
#line 157
undef($memory_3);
#line 157
undef($memory_5);
#line 157
undef($memory_6);
#line 157
undef($memory_7);
#line 157
$_[0] = $memory_0;$_[4] = $memory_4;return;
#line 157
goto label_12;
#line 157
label_12:
#line 157
undef($memory_7);
#line 158
$memory_7 = $memory_0->[$memory_2];
#line 159
$memory_8 = $memory_1->[$memory_2];
#line 159
$memory_8 = $memory_8->{'last_modif'};
#line 159
$memory_11 = c_rt_lib::init_iter($memory_8);
#line 159
label_15:
#line 159
$memory_9 = c_rt_lib::is_end_hash($memory_11);
#line 159
if (c_rt_lib::check_true($memory_9)) {goto label_13;}
#line 159
$memory_9 = c_rt_lib::get_key_iter($memory_11);
#line 159
$memory_10 = c_rt_lib::hash_get_value($memory_8, $memory_9);
#line 160
$memory_12 = c_rt_lib::ov_is($memory_10, 'write');
#line 160
if (c_rt_lib::check_true($memory_12)) {goto label_17;}
#line 163
$memory_12 = c_rt_lib::ov_is($memory_10, 'clear');
#line 163
if (c_rt_lib::check_true($memory_12)) {goto label_18;}
#line 163
$memory_12 = "NOMATCHALERT";
#line 163
$memory_12 = [$memory_12,$memory_10];
#line 163
die(dfile::ssave($memory_12));
#line 160
label_17:
#line 160
$memory_13 = c_rt_lib::ov_as($memory_10, 'write');
#line 161
$memory_14 = {};
#line 161
$memory_15 = $memory_14;
#line 161
 if (c_rt_lib::get_arrcount($memory_7) > 1) {$memory_7 = [@{$memory_7}];}$memory_7->[$memory_9] = $memory_15;
#line 161
undef($memory_14);
#line 161
undef($memory_15);
#line 162
$memory_14 = c_rt_lib::get_ref_arr($memory_7, $memory_9);
#line 162
$memory_15 = "";
#line 162
hash::set_value($memory_14, $memory_13, $memory_15);
#line 162
undef($memory_15);
#line 162
c_rt_lib::set_ref_arr($memory_7, $memory_9, $memory_14);
#line 162
undef($memory_14);
#line 162
undef($memory_13);
#line 163
goto label_16;
#line 163
label_18:
#line 164
$memory_13 = {};
#line 164
$memory_14 = $memory_13;
#line 164
 if (c_rt_lib::get_arrcount($memory_7) > 1) {$memory_7 = [@{$memory_7}];}$memory_7->[$memory_9] = $memory_14;
#line 164
undef($memory_13);
#line 164
undef($memory_14);
#line 165
goto label_16;
#line 165
label_16:
#line 165
undef($memory_12);
#line 166
$memory_11 = c_rt_lib::next_iter($memory_11);
#line 166
goto label_15;
#line 166
label_13:
#line 166
undef($memory_8);
#line 166
undef($memory_9);
#line 166
undef($memory_10);
#line 166
undef($memory_11);
#line 167
$memory_8 = $memory_1->[$memory_2];
#line 167
$memory_8 = $memory_8->{'next'};
#line 167
$memory_10 = 0;
#line 167
$memory_11 = 1;
#line 167
$memory_12 = c_rt_lib::array_len($memory_8);
#line 167
label_21:
#line 167
$memory_13 = c_rt_lib::to_nl($memory_10 >= $memory_12);
#line 167
if (c_rt_lib::check_true($memory_13)) {goto label_19;}
#line 167
$memory_9 = $memory_8->[$memory_10];
#line 168
unnecessary_commands_priv::build_block_state($memory_0, $memory_1, $memory_9, $memory_7, $memory_4);
#line 169
$memory_10 = $memory_10 + $memory_11;
#line 169
goto label_21;
#line 169
label_19:
#line 169
undef($memory_8);
#line 169
undef($memory_9);
#line 169
undef($memory_10);
#line 169
undef($memory_11);
#line 169
undef($memory_12);
#line 169
undef($memory_13);
#line 169
undef($memory_5);
#line 169
undef($memory_6);
#line 169
undef($memory_7);
#line 169
undef($memory_1);
#line 169
undef($memory_2);
#line 169
undef($memory_3);
#line 169
$_[0] = $memory_0;$_[4] = $memory_4;return;
$_[0] = $memory_0;$_[4] = $memory_4;}
