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
#line 13
$memory_1 = {
	module => "unnecessary_commands",
	name => "block_state_t",
};
#line 13
$memory_1 = c_rt_lib::ov_mk_arg('ref', $memory_1);
#line 13
$memory_0 = ptd::arr($memory_1);
#line 13
undef($memory_1);
#line 13
return $memory_0;
#line 13
undef($memory_0);
#line 13
return;
}

my $_state_t;
sub unnecessary_commands::state_t() {
	$_state_t = unnecessary_commands::__state_t() unless defined $_state_t;
	return $_state_t;
}

sub unnecessary_commands::__block_state_t() {
my $memory_0;my $memory_1;my $memory_2;
#line 17
$memory_2 = ptd::sim();
#line 17
$memory_1 = ptd::hash($memory_2);
#line 17
undef($memory_2);
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

my $_block_state_t;
sub unnecessary_commands::block_state_t() {
	$_block_state_t = unnecessary_commands::__block_state_t() unless defined $_block_state_t;
	return $_block_state_t;
}

sub unnecessary_commands::__graph_t() {
my $memory_0;my $memory_1;my $memory_2;
#line 21
$memory_2 = ptd::sim();
#line 21
$memory_1 = ptd::arr($memory_2);
#line 21
undef($memory_2);
#line 21
$memory_0 = ptd::arr($memory_1);
#line 21
undef($memory_1);
#line 21
return $memory_0;
#line 21
undef($memory_0);
#line 21
return;
}

my $_graph_t;
sub unnecessary_commands::graph_t() {
	$_graph_t = unnecessary_commands::__graph_t() unless defined $_graph_t;
	return $_graph_t;
}

sub unnecessary_commands::delete_unnecessary_commands($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);
#line 25
$memory_2 = $memory_0->{'commands'};
#line 25
$memory_3 = $memory_0->{'args_type'};
#line 25
$memory_1 = flow_graph::make_blocks($memory_2, $memory_3);
#line 25
undef($memory_3);
#line 25
undef($memory_2);
#line 26
$memory_2 = $memory_0->{'reg_size'};
#line 26
unnecessary_commands_priv::delete_unnecessary_commands_in_blocks($memory_1, $memory_2);
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
#line 28
$memory_3 = $memory_0->{'commands'};
#line 28
$memory_4 = $memory_0->{'args_type'};
#line 28
$memory_2 = flow_graph::make_blocks($memory_3, $memory_4);
#line 28
undef($memory_4);
#line 28
undef($memory_3);
#line 28
$memory_1 = $memory_2;
#line 28
undef($memory_2);
#line 29
$memory_2 = $memory_0->{'reg_size'};
#line 29
$memory_4 = $memory_0->{'args_type'};
#line 29
$memory_3 = array::len($memory_4);
#line 29
undef($memory_4);
#line 29
unnecessary_commands_priv::delete_unnecessary_clears_in_blocks($memory_1, $memory_2, $memory_3);
#line 29
undef($memory_3);
#line 29
undef($memory_2);
#line 30
$memory_2 = flow_graph::combine_blocks($memory_1);
#line 30
$memory_3 = $memory_2;
#line 30
 if (c_rt_lib::get_hashcount($memory_0) > 1) {$memory_0 = {%{$memory_0}};}$memory_0->{'commands'} = $memory_3;
#line 30
undef($memory_2);
#line 30
undef($memory_3);
#line 30
undef($memory_1);
#line 30
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub unnecessary_commands_priv::build_empty_state($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;$memory_0 = $_[0];
#line 34
$memory_1 = [];
#line 35
$memory_2 = 0;
#line 35
$memory_3 = 1;
#line 35
label_3:
#line 35
$memory_4 = c_rt_lib::to_nl($memory_2 >= $memory_0);
#line 35
if (c_rt_lib::check_true($memory_4)) {goto label_11;}
#line 35
$memory_5 = {};
#line 35
array::push($memory_1, $memory_5);
#line 35
undef($memory_5);
#line 35
$memory_2 = $memory_2 + $memory_3;
#line 35
goto label_3;
#line 35
label_11:
#line 35
undef($memory_2);
#line 35
undef($memory_3);
#line 35
undef($memory_4);
#line 36
undef($memory_0);
#line 36
return $memory_1;
#line 36
undef($memory_1);
#line 36
undef($memory_0);
#line 36
return;
}

sub unnecessary_commands_priv::has_side_effects($) {
my $memory_0;my $memory_1;my $memory_2;$memory_0 = $_[0];
#line 40
$memory_1 = $memory_0->{'cmd'};
#line 41
$memory_2 = $memory_1;
#line 41
$memory_2 = c_rt_lib::ov_is($memory_2, 'call');
#line 41
if (c_rt_lib::check_true($memory_2)) {goto label_6;}
#line 41
$memory_2 = $memory_1;
#line 41
$memory_2 = c_rt_lib::ov_is($memory_2, 'return');
#line 41
label_6:
#line 41
if (c_rt_lib::check_true($memory_2)) {goto label_10;}
#line 41
$memory_2 = $memory_1;
#line 41
$memory_2 = c_rt_lib::ov_is($memory_2, 'die');
#line 41
label_10:
#line 41
if (c_rt_lib::check_true($memory_2)) {goto label_14;}
#line 41
$memory_2 = $memory_1;
#line 41
$memory_2 = c_rt_lib::ov_is($memory_2, 'prt_lbl');
#line 41
label_14:
#line 41
if (c_rt_lib::check_true($memory_2)) {goto label_18;}
#line 41
$memory_2 = $memory_1;
#line 41
$memory_2 = c_rt_lib::ov_is($memory_2, 'if_goto');
#line 41
label_18:
#line 41
if (c_rt_lib::check_true($memory_2)) {goto label_22;}
#line 41
$memory_2 = $memory_1;
#line 41
$memory_2 = c_rt_lib::ov_is($memory_2, 'goto');
#line 41
label_22:
#line 41
undef($memory_0);
#line 41
undef($memory_1);
#line 41
return $memory_2;
#line 41
undef($memory_2);
#line 41
undef($memory_1);
#line 41
undef($memory_0);
#line 41
return;
}

sub unnecessary_commands_priv::build_blocks_states($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;$memory_0 = $_[0];$memory_1 = $_[1];
#line 45
$memory_2 = [];
#line 46
$memory_3 = unnecessary_commands_priv::build_empty_state($memory_1);
#line 47
$memory_4 = {};
#line 48
$memory_5 = array::len($memory_0);
#line 48
$memory_6 = 0;
#line 48
$memory_7 = 1;
#line 48
label_6:
#line 48
$memory_8 = c_rt_lib::to_nl($memory_6 >= $memory_5);
#line 48
if (c_rt_lib::check_true($memory_8)) {goto label_12;}
#line 49
array::push($memory_2, $memory_3);
#line 50
$memory_6 = $memory_6 + $memory_7;
#line 50
goto label_6;
#line 50
label_12:
#line 50
undef($memory_5);
#line 50
undef($memory_6);
#line 50
undef($memory_7);
#line 50
undef($memory_8);
#line 51
$memory_5 = array::len($memory_0);
#line 51
$memory_6 = 0;
#line 51
$memory_5 = c_rt_lib::to_nl($memory_5 == $memory_6);
#line 51
undef($memory_6);
#line 51
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 51
if (c_rt_lib::check_true($memory_5)) {goto label_26;}
#line 51
$memory_6 = [];
#line 51
die(dfile::ssave($memory_6));
#line 51
goto label_26;
#line 51
label_26:
#line 51
undef($memory_5);
#line 51
undef($memory_6);
#line 52
$memory_5 = 0;
#line 52
unnecessary_commands_priv::build_block_state($memory_2, $memory_0, $memory_5, $memory_3, $memory_4);
#line 52
undef($memory_5);
#line 53
undef($memory_0);
#line 53
undef($memory_1);
#line 53
undef($memory_3);
#line 53
undef($memory_4);
#line 53
return $memory_2;
#line 53
undef($memory_2);
#line 53
undef($memory_3);
#line 53
undef($memory_4);
#line 53
undef($memory_0);
#line 53
undef($memory_1);
#line 53
return;
}

sub unnecessary_commands_priv::delete_unnecessary_commands_in_blocks($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;my $memory_13;my $memory_14;my $memory_15;my $memory_16;my $memory_17;my $memory_18;my $memory_19;my $memory_20;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];
#line 57
$memory_2 = unnecessary_commands_priv::build_blocks_states($memory_0, $memory_1);
#line 58
$memory_3 = 0;
#line 59
$memory_5 = 0;
#line 59
$memory_6 = 1;
#line 59
$memory_7 = c_rt_lib::array_len($memory_0);
#line 59
label_5:
#line 59
$memory_8 = c_rt_lib::to_nl($memory_5 >= $memory_7);
#line 59
if (c_rt_lib::check_true($memory_8)) {goto label_16;}
#line 59
$memory_4 = $memory_0->[$memory_5];
#line 60
$memory_10 = $memory_4->{'cmds'};
#line 60
$memory_9 = array::len($memory_10);
#line 60
undef($memory_10);
#line 60
$memory_3 = $memory_3 + $memory_9;
#line 60
undef($memory_9);
#line 61
$memory_5 = $memory_5 + $memory_6;
#line 61
goto label_5;
#line 61
label_16:
#line 61
undef($memory_4);
#line 61
undef($memory_5);
#line 61
undef($memory_6);
#line 61
undef($memory_7);
#line 61
undef($memory_8);
#line 62
$memory_4 = unnecessary_commands_priv::build_commands_graph($memory_2, $memory_0, $memory_3);
#line 63
$memory_5 = {};
#line 64
$memory_7 = 0;
#line 64
$memory_8 = 1;
#line 64
$memory_9 = c_rt_lib::array_len($memory_0);
#line 64
label_27:
#line 64
$memory_10 = c_rt_lib::to_nl($memory_7 >= $memory_9);
#line 64
if (c_rt_lib::check_true($memory_10)) {goto label_61;}
#line 64
$memory_6 = $memory_0->[$memory_7];
#line 65
$memory_12 = $memory_6->{'cmds'};
#line 65
$memory_11 = array::len($memory_12);
#line 65
undef($memory_12);
#line 65
$memory_12 = 0;
#line 65
$memory_13 = 1;
#line 65
label_36:
#line 65
$memory_14 = c_rt_lib::to_nl($memory_12 >= $memory_11);
#line 65
if (c_rt_lib::check_true($memory_14)) {goto label_54;}
#line 66
$memory_16 = $memory_6->{'cmds'};
#line 66
$memory_16 = $memory_16->[$memory_12];
#line 66
$memory_15 = unnecessary_commands_priv::has_side_effects($memory_16);
#line 66
undef($memory_16);
#line 66
$memory_15 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_15));
#line 66
if (c_rt_lib::check_true($memory_15)) {goto label_50;}
#line 67
$memory_16 = $memory_6->{'from'};
#line 67
$memory_16 = $memory_16 + $memory_12;
#line 67
unnecessary_commands_priv::visit_node($memory_4, $memory_16, $memory_5);
#line 67
undef($memory_16);
#line 68
goto label_50;
#line 68
label_50:
#line 68
undef($memory_15);
#line 69
$memory_12 = $memory_12 + $memory_13;
#line 69
goto label_36;
#line 69
label_54:
#line 69
undef($memory_11);
#line 69
undef($memory_12);
#line 69
undef($memory_13);
#line 69
undef($memory_14);
#line 70
$memory_7 = $memory_7 + $memory_8;
#line 70
goto label_27;
#line 70
label_61:
#line 70
undef($memory_6);
#line 70
undef($memory_7);
#line 70
undef($memory_8);
#line 70
undef($memory_9);
#line 70
undef($memory_10);
#line 71
$memory_6 = array::len($memory_0);
#line 71
$memory_7 = 0;
#line 71
$memory_8 = 1;
#line 71
label_70:
#line 71
$memory_9 = c_rt_lib::to_nl($memory_7 >= $memory_6);
#line 71
if (c_rt_lib::check_true($memory_9)) {goto label_135;}
#line 72
$memory_10 = [];
#line 73
$memory_12 = $memory_0->[$memory_7];
#line 73
$memory_12 = $memory_12->{'cmds'};
#line 73
$memory_11 = array::len($memory_12);
#line 73
undef($memory_12);
#line 73
$memory_12 = 0;
#line 73
$memory_13 = 1;
#line 73
label_80:
#line 73
$memory_14 = c_rt_lib::to_nl($memory_12 >= $memory_11);
#line 73
if (c_rt_lib::check_true($memory_14)) {goto label_121;}
#line 74
$memory_15 = $memory_0->[$memory_7];
#line 74
$memory_15 = $memory_15->{'cmds'};
#line 74
$memory_15 = $memory_15->[$memory_12];
#line 75
$memory_16 = c_rt_lib::to_nl(0);
#line 76
$memory_17 = $memory_0->[$memory_7];
#line 76
$memory_17 = $memory_17->{'from'};
#line 76
$memory_17 = $memory_17 + $memory_12;
#line 77
$memory_18 = $memory_15->{'cmd'};
#line 77
$memory_18 = c_rt_lib::ov_is($memory_18, 'clear');
#line 77
$memory_18 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_18));
#line 77
$memory_18 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_18));
#line 77
if (c_rt_lib::check_true($memory_18)) {goto label_106;}
#line 78
$memory_19 = hash::has_key($memory_5, $memory_17);
#line 78
$memory_19 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_19));
#line 78
$memory_19 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_19));
#line 78
if (c_rt_lib::check_true($memory_19)) {goto label_103;}
#line 79
$memory_20 = c_rt_lib::to_nl(1);
#line 79
$memory_16 = $memory_20;
#line 79
undef($memory_20);
#line 80
goto label_103;
#line 80
label_103:
#line 80
undef($memory_19);
#line 81
goto label_106;
#line 81
label_106:
#line 81
undef($memory_18);
#line 82
$memory_18 = $memory_16;
#line 82
$memory_18 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_18));
#line 82
$memory_18 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_18));
#line 82
if (c_rt_lib::check_true($memory_18)) {goto label_114;}
#line 83
array::push($memory_10, $memory_15);
#line 84
goto label_114;
#line 84
label_114:
#line 84
undef($memory_18);
#line 84
undef($memory_15);
#line 84
undef($memory_16);
#line 84
undef($memory_17);
#line 85
$memory_12 = $memory_12 + $memory_13;
#line 85
goto label_80;
#line 85
label_121:
#line 85
undef($memory_11);
#line 85
undef($memory_12);
#line 85
undef($memory_13);
#line 85
undef($memory_14);
#line 86
$memory_11 = c_rt_lib::get_ref_arr($memory_0, $memory_7);
#line 86
$memory_12 = $memory_10;
#line 86
 if (c_rt_lib::get_hashcount($memory_11) > 1) {$memory_11 = {%{$memory_11}};}$memory_11->{'cmds'} = $memory_12;
#line 86
c_rt_lib::set_ref_arr($memory_0, $memory_7, $memory_11);
#line 86
undef($memory_11);
#line 86
undef($memory_12);
#line 86
undef($memory_10);
#line 87
$memory_7 = $memory_7 + $memory_8;
#line 87
goto label_70;
#line 87
label_135:
#line 87
undef($memory_6);
#line 87
undef($memory_7);
#line 87
undef($memory_8);
#line 87
undef($memory_9);
#line 87
undef($memory_2);
#line 87
undef($memory_3);
#line 87
undef($memory_4);
#line 87
undef($memory_5);
#line 87
undef($memory_1);
#line 87
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub unnecessary_commands_priv::delete_unnecessary_clears_in_blocks($$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;my $memory_13;my $memory_14;my $memory_15;my $memory_16;my $memory_17;my $memory_18;my $memory_19;my $memory_20;my $memory_21;my $memory_22;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];$memory_2 = $_[2];
#line 91
$memory_3 = unnecessary_commands_priv::build_blocks_states($memory_0, $memory_1);
#line 92
$memory_4 = 0;
#line 93
$memory_6 = 0;
#line 93
$memory_7 = 1;
#line 93
$memory_8 = c_rt_lib::array_len($memory_0);
#line 93
label_5:
#line 93
$memory_9 = c_rt_lib::to_nl($memory_6 >= $memory_8);
#line 93
if (c_rt_lib::check_true($memory_9)) {goto label_16;}
#line 93
$memory_5 = $memory_0->[$memory_6];
#line 94
$memory_11 = $memory_5->{'cmds'};
#line 94
$memory_10 = array::len($memory_11);
#line 94
undef($memory_11);
#line 94
$memory_4 = $memory_4 + $memory_10;
#line 94
undef($memory_10);
#line 95
$memory_6 = $memory_6 + $memory_7;
#line 95
goto label_5;
#line 95
label_16:
#line 95
undef($memory_5);
#line 95
undef($memory_6);
#line 95
undef($memory_7);
#line 95
undef($memory_8);
#line 95
undef($memory_9);
#line 96
$memory_5 = unnecessary_commands_priv::build_commands_graph($memory_3, $memory_0, $memory_4);
#line 97
$memory_6 = array::len($memory_0);
#line 97
$memory_7 = 0;
#line 97
$memory_8 = 1;
#line 97
label_26:
#line 97
$memory_9 = c_rt_lib::to_nl($memory_7 >= $memory_6);
#line 97
if (c_rt_lib::check_true($memory_9)) {goto label_102;}
#line 98
$memory_10 = [];
#line 99
$memory_12 = $memory_0->[$memory_7];
#line 99
$memory_12 = $memory_12->{'cmds'};
#line 99
$memory_11 = array::len($memory_12);
#line 99
undef($memory_12);
#line 99
$memory_12 = 0;
#line 99
$memory_13 = 1;
#line 99
label_36:
#line 99
$memory_14 = c_rt_lib::to_nl($memory_12 >= $memory_11);
#line 99
if (c_rt_lib::check_true($memory_14)) {goto label_88;}
#line 100
$memory_15 = $memory_0->[$memory_7];
#line 100
$memory_15 = $memory_15->{'cmds'};
#line 100
$memory_15 = $memory_15->[$memory_12];
#line 101
$memory_16 = c_rt_lib::to_nl(0);
#line 102
$memory_17 = $memory_0->[$memory_7];
#line 102
$memory_17 = $memory_17->{'from'};
#line 102
$memory_17 = $memory_17 + $memory_12;
#line 103
$memory_18 = $memory_15->{'cmd'};
#line 103
$memory_18 = c_rt_lib::ov_is($memory_18, 'clear');
#line 103
$memory_18 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_18));
#line 103
if (c_rt_lib::check_true($memory_18)) {goto label_73;}
#line 104
$memory_19 = $memory_15->{'cmd'};
#line 104
$memory_19 = c_rt_lib::ov_as($memory_19, 'clear');
#line 105
$memory_22 = $memory_5->[$memory_17];
#line 105
$memory_20 = array::len($memory_22);
#line 105
undef($memory_22);
#line 105
$memory_22 = 0;
#line 105
$memory_20 = c_rt_lib::to_nl($memory_20 == $memory_22);
#line 105
undef($memory_22);
#line 105
$memory_21 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_20));
#line 105
if (c_rt_lib::check_true($memory_21)) {goto label_61;}
#line 105
$memory_20 = c_rt_lib::to_nl($memory_19 >= $memory_2);
#line 105
label_61:
#line 105
undef($memory_21);
#line 105
$memory_20 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_20));
#line 105
if (c_rt_lib::check_true($memory_20)) {goto label_69;}
#line 106
$memory_21 = c_rt_lib::to_nl(1);
#line 106
$memory_16 = $memory_21;
#line 106
undef($memory_21);
#line 107
goto label_69;
#line 107
label_69:
#line 107
undef($memory_20);
#line 107
undef($memory_19);
#line 108
goto label_73;
#line 108
label_73:
#line 108
undef($memory_18);
#line 109
$memory_18 = $memory_16;
#line 109
$memory_18 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_18));
#line 109
$memory_18 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_18));
#line 109
if (c_rt_lib::check_true($memory_18)) {goto label_81;}
#line 110
array::push($memory_10, $memory_15);
#line 111
goto label_81;
#line 111
label_81:
#line 111
undef($memory_18);
#line 111
undef($memory_15);
#line 111
undef($memory_16);
#line 111
undef($memory_17);
#line 112
$memory_12 = $memory_12 + $memory_13;
#line 112
goto label_36;
#line 112
label_88:
#line 112
undef($memory_11);
#line 112
undef($memory_12);
#line 112
undef($memory_13);
#line 112
undef($memory_14);
#line 113
$memory_11 = c_rt_lib::get_ref_arr($memory_0, $memory_7);
#line 113
$memory_12 = $memory_10;
#line 113
 if (c_rt_lib::get_hashcount($memory_11) > 1) {$memory_11 = {%{$memory_11}};}$memory_11->{'cmds'} = $memory_12;
#line 113
c_rt_lib::set_ref_arr($memory_0, $memory_7, $memory_11);
#line 113
undef($memory_11);
#line 113
undef($memory_12);
#line 113
undef($memory_10);
#line 114
$memory_7 = $memory_7 + $memory_8;
#line 114
goto label_26;
#line 114
label_102:
#line 114
undef($memory_6);
#line 114
undef($memory_7);
#line 114
undef($memory_8);
#line 114
undef($memory_9);
#line 114
undef($memory_3);
#line 114
undef($memory_4);
#line 114
undef($memory_5);
#line 114
undef($memory_1);
#line 114
undef($memory_2);
#line 114
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub unnecessary_commands_priv::build_commands_graph($$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;my $memory_13;my $memory_14;my $memory_15;my $memory_16;my $memory_17;my $memory_18;my $memory_19;my $memory_20;my $memory_21;my $memory_22;my $memory_23;$memory_0 = $_[0];$memory_1 = $_[1];$memory_2 = $_[2];
#line 119
$memory_3 = [];
#line 120
$memory_4 = 0;
#line 120
$memory_5 = 1;
#line 120
label_3:
#line 120
$memory_6 = c_rt_lib::to_nl($memory_4 >= $memory_2);
#line 120
if (c_rt_lib::check_true($memory_6)) {goto label_11;}
#line 120
$memory_7 = [];
#line 120
array::push($memory_3, $memory_7);
#line 120
undef($memory_7);
#line 120
$memory_4 = $memory_4 + $memory_5;
#line 120
goto label_3;
#line 120
label_11:
#line 120
undef($memory_4);
#line 120
undef($memory_5);
#line 120
undef($memory_6);
#line 121
$memory_4 = array::len($memory_1);
#line 121
$memory_5 = 0;
#line 121
$memory_6 = 1;
#line 121
label_18:
#line 121
$memory_7 = c_rt_lib::to_nl($memory_5 >= $memory_4);
#line 121
if (c_rt_lib::check_true($memory_7)) {goto label_131;}
#line 122
$memory_8 = $memory_1->[$memory_5];
#line 123
$memory_9 = $memory_0->[$memory_5];
#line 124
$memory_10 = $memory_8->{'reg_uses'};
#line 124
$memory_12 = 0;
#line 124
$memory_13 = 1;
#line 124
$memory_14 = c_rt_lib::array_len($memory_10);
#line 124
label_27:
#line 124
$memory_15 = c_rt_lib::to_nl($memory_12 >= $memory_14);
#line 124
if (c_rt_lib::check_true($memory_15)) {goto label_120;}
#line 124
$memory_11 = $memory_10->[$memory_12];
#line 125
$memory_16 = $memory_11->{'type'};
#line 125
$memory_17 = c_rt_lib::ov_is($memory_16, 'write');
#line 125
if (c_rt_lib::check_true($memory_17)) {goto label_41;}
#line 128
$memory_17 = c_rt_lib::ov_is($memory_16, 'read');
#line 128
if (c_rt_lib::check_true($memory_17)) {goto label_60;}
#line 132
$memory_17 = c_rt_lib::ov_is($memory_16, 'clear');
#line 132
if (c_rt_lib::check_true($memory_17)) {goto label_84;}
#line 132
$memory_17 = "NOMATCHALERT";
#line 132
$memory_17 = [$memory_17,$memory_16];
#line 132
die(dfile::ssave($memory_17));
#line 125
label_41:
#line 126
$memory_18 = {};
#line 126
$memory_20 = $memory_11->{'reg'};
#line 126
$memory_19 = $memory_18;
#line 126
 if (c_rt_lib::get_arrcount($memory_9) > 1) {$memory_9 = [@{$memory_9}];}$memory_9->[$memory_20] = $memory_19;
#line 126
undef($memory_18);
#line 126
undef($memory_19);
#line 126
undef($memory_20);
#line 127
$memory_19 = $memory_11->{'reg'};
#line 127
$memory_18 = c_rt_lib::get_ref_arr($memory_9, $memory_19);
#line 127
$memory_20 = $memory_11->{'cmd_nr'};
#line 127
$memory_21 = "";
#line 127
hash::set_value($memory_18, $memory_20, $memory_21);
#line 127
undef($memory_21);
#line 127
undef($memory_20);
#line 127
c_rt_lib::set_ref_arr($memory_9, $memory_19, $memory_18);
#line 127
undef($memory_18);
#line 127
undef($memory_19);
#line 128
goto label_115;
#line 128
label_60:
#line 129
$memory_19 = $memory_11->{'reg'};
#line 129
$memory_18 = $memory_9->[$memory_19];
#line 129
undef($memory_19);
#line 129
$memory_21 = c_rt_lib::init_iter($memory_18);
#line 129
label_65:
#line 129
$memory_19 = c_rt_lib::is_end_hash($memory_21);
#line 129
if (c_rt_lib::check_true($memory_19)) {goto label_78;}
#line 129
$memory_19 = c_rt_lib::get_key_iter($memory_21);
#line 129
$memory_20 = c_rt_lib::hash_get_value($memory_18, $memory_19);
#line 130
$memory_23 = $memory_11->{'cmd_nr'};
#line 130
$memory_22 = c_rt_lib::get_ref_arr($memory_3, $memory_23);
#line 130
array::push($memory_22, $memory_19);
#line 130
c_rt_lib::set_ref_arr($memory_3, $memory_23, $memory_22);
#line 130
undef($memory_22);
#line 130
undef($memory_23);
#line 131
$memory_21 = c_rt_lib::next_iter($memory_21);
#line 131
goto label_65;
#line 131
label_78:
#line 131
undef($memory_18);
#line 131
undef($memory_19);
#line 131
undef($memory_20);
#line 131
undef($memory_21);
#line 132
goto label_115;
#line 132
label_84:
#line 133
$memory_19 = $memory_11->{'reg'};
#line 133
$memory_18 = $memory_9->[$memory_19];
#line 133
undef($memory_19);
#line 133
$memory_21 = c_rt_lib::init_iter($memory_18);
#line 133
label_89:
#line 133
$memory_19 = c_rt_lib::is_end_hash($memory_21);
#line 133
if (c_rt_lib::check_true($memory_19)) {goto label_102;}
#line 133
$memory_19 = c_rt_lib::get_key_iter($memory_21);
#line 133
$memory_20 = c_rt_lib::hash_get_value($memory_18, $memory_19);
#line 134
$memory_23 = $memory_11->{'cmd_nr'};
#line 134
$memory_22 = c_rt_lib::get_ref_arr($memory_3, $memory_23);
#line 134
array::push($memory_22, $memory_19);
#line 134
c_rt_lib::set_ref_arr($memory_3, $memory_23, $memory_22);
#line 134
undef($memory_22);
#line 134
undef($memory_23);
#line 135
$memory_21 = c_rt_lib::next_iter($memory_21);
#line 135
goto label_89;
#line 135
label_102:
#line 135
undef($memory_18);
#line 135
undef($memory_19);
#line 135
undef($memory_20);
#line 135
undef($memory_21);
#line 136
$memory_18 = {};
#line 136
$memory_20 = $memory_11->{'reg'};
#line 136
$memory_19 = $memory_18;
#line 136
 if (c_rt_lib::get_arrcount($memory_9) > 1) {$memory_9 = [@{$memory_9}];}$memory_9->[$memory_20] = $memory_19;
#line 136
undef($memory_18);
#line 136
undef($memory_19);
#line 136
undef($memory_20);
#line 137
goto label_115;
#line 137
label_115:
#line 137
undef($memory_16);
#line 137
undef($memory_17);
#line 138
$memory_12 = $memory_12 + $memory_13;
#line 138
goto label_27;
#line 138
label_120:
#line 138
undef($memory_10);
#line 138
undef($memory_11);
#line 138
undef($memory_12);
#line 138
undef($memory_13);
#line 138
undef($memory_14);
#line 138
undef($memory_15);
#line 138
undef($memory_8);
#line 138
undef($memory_9);
#line 139
$memory_5 = $memory_5 + $memory_6;
#line 139
goto label_18;
#line 139
label_131:
#line 139
undef($memory_4);
#line 139
undef($memory_5);
#line 139
undef($memory_6);
#line 139
undef($memory_7);
#line 140
undef($memory_0);
#line 140
undef($memory_1);
#line 140
undef($memory_2);
#line 140
return $memory_3;
#line 140
undef($memory_3);
#line 140
undef($memory_0);
#line 140
undef($memory_1);
#line 140
undef($memory_2);
#line 140
return;
}

sub unnecessary_commands_priv::visit_node($$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;$memory_0 = $_[0];$memory_1 = $_[1];$memory_2 = $_[2];Scalar::Util::weaken($_[2]) if ref($_[2]);
#line 144
$memory_3 = hash::has_key($memory_2, $memory_1);
#line 144
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 144
if (c_rt_lib::check_true($memory_3)) {goto label_8;}
#line 144
undef($memory_0);
#line 144
undef($memory_1);
#line 144
undef($memory_3);
#line 144
$_[2] = $memory_2;return;
#line 144
goto label_8;
#line 144
label_8:
#line 144
undef($memory_3);
#line 145
$memory_3 = "";
#line 145
hash::set_value($memory_2, $memory_1, $memory_3);
#line 145
undef($memory_3);
#line 146
$memory_3 = $memory_0->[$memory_1];
#line 146
$memory_5 = 0;
#line 146
$memory_6 = 1;
#line 146
$memory_7 = c_rt_lib::array_len($memory_3);
#line 146
label_17:
#line 146
$memory_8 = c_rt_lib::to_nl($memory_5 >= $memory_7);
#line 146
if (c_rt_lib::check_true($memory_8)) {goto label_24;}
#line 146
$memory_4 = $memory_3->[$memory_5];
#line 147
unnecessary_commands_priv::visit_node($memory_0, $memory_4, $memory_2);
#line 148
$memory_5 = $memory_5 + $memory_6;
#line 148
goto label_17;
#line 148
label_24:
#line 148
undef($memory_3);
#line 148
undef($memory_4);
#line 148
undef($memory_5);
#line 148
undef($memory_6);
#line 148
undef($memory_7);
#line 148
undef($memory_8);
#line 148
undef($memory_0);
#line 148
undef($memory_1);
#line 148
$_[2] = $memory_2;return;
$_[2] = $memory_2;}

sub unnecessary_commands_priv::build_block_state($$$$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;my $memory_13;my $memory_14;my $memory_15;my $memory_16;my $memory_17;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];$memory_2 = $_[2];$memory_3 = $_[3];$memory_4 = $_[4];Scalar::Util::weaken($_[4]) if ref($_[4]);
#line 153
$memory_5 = c_rt_lib::to_nl(0);
#line 154
$memory_6 = hash::has_key($memory_4, $memory_2);
#line 154
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 154
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 154
if (c_rt_lib::check_true($memory_6)) {goto label_12;}
#line 155
$memory_7 = "";
#line 155
hash::set_value($memory_4, $memory_2, $memory_7);
#line 155
undef($memory_7);
#line 156
$memory_7 = c_rt_lib::to_nl(1);
#line 156
$memory_5 = $memory_7;
#line 156
undef($memory_7);
#line 157
goto label_12;
#line 157
label_12:
#line 157
undef($memory_6);
#line 158
$memory_6 = array::len($memory_3);
#line 159
$memory_7 = 0;
#line 159
$memory_8 = 1;
#line 159
label_17:
#line 159
$memory_9 = c_rt_lib::to_nl($memory_7 >= $memory_6);
#line 159
if (c_rt_lib::check_true($memory_9)) {goto label_58;}
#line 160
$memory_10 = $memory_3->[$memory_7];
#line 160
$memory_13 = c_rt_lib::init_iter($memory_10);
#line 160
label_22:
#line 160
$memory_11 = c_rt_lib::is_end_hash($memory_13);
#line 160
if (c_rt_lib::check_true($memory_11)) {goto label_51;}
#line 160
$memory_11 = c_rt_lib::get_key_iter($memory_13);
#line 160
$memory_12 = c_rt_lib::hash_get_value($memory_10, $memory_11);
#line 161
$memory_15 = $memory_0->[$memory_2];
#line 161
$memory_15 = $memory_15->[$memory_7];
#line 161
$memory_14 = hash::has_key($memory_15, $memory_11);
#line 161
undef($memory_15);
#line 161
$memory_14 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_14));
#line 161
$memory_14 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_14));
#line 161
if (c_rt_lib::check_true($memory_14)) {goto label_47;}
#line 162
$memory_15 = c_rt_lib::get_ref_arr($memory_0, $memory_2);
#line 162
$memory_16 = c_rt_lib::get_ref_arr($memory_15, $memory_7);
#line 162
$memory_17 = "";
#line 162
hash::set_value($memory_16, $memory_11, $memory_17);
#line 162
undef($memory_17);
#line 162
c_rt_lib::set_ref_arr($memory_15, $memory_7, $memory_16);
#line 162
c_rt_lib::set_ref_arr($memory_0, $memory_2, $memory_15);
#line 162
undef($memory_15);
#line 162
undef($memory_16);
#line 163
$memory_15 = c_rt_lib::to_nl(1);
#line 163
$memory_5 = $memory_15;
#line 163
undef($memory_15);
#line 164
goto label_47;
#line 164
label_47:
#line 164
undef($memory_14);
#line 165
$memory_13 = c_rt_lib::next_iter($memory_13);
#line 165
goto label_22;
#line 165
label_51:
#line 165
undef($memory_10);
#line 165
undef($memory_11);
#line 165
undef($memory_12);
#line 165
undef($memory_13);
#line 166
$memory_7 = $memory_7 + $memory_8;
#line 166
goto label_17;
#line 166
label_58:
#line 166
undef($memory_7);
#line 166
undef($memory_8);
#line 166
undef($memory_9);
#line 167
$memory_7 = $memory_5;
#line 167
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 167
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 167
if (c_rt_lib::check_true($memory_7)) {goto label_74;}
#line 167
undef($memory_1);
#line 167
undef($memory_2);
#line 167
undef($memory_3);
#line 167
undef($memory_5);
#line 167
undef($memory_6);
#line 167
undef($memory_7);
#line 167
$_[0] = $memory_0;$_[4] = $memory_4;return;
#line 167
goto label_74;
#line 167
label_74:
#line 167
undef($memory_7);
#line 168
$memory_7 = $memory_0->[$memory_2];
#line 169
$memory_8 = $memory_1->[$memory_2];
#line 169
$memory_8 = $memory_8->{'last_modif'};
#line 169
$memory_11 = c_rt_lib::init_iter($memory_8);
#line 169
label_80:
#line 169
$memory_9 = c_rt_lib::is_end_hash($memory_11);
#line 169
if (c_rt_lib::check_true($memory_9)) {goto label_118;}
#line 169
$memory_9 = c_rt_lib::get_key_iter($memory_11);
#line 169
$memory_10 = c_rt_lib::hash_get_value($memory_8, $memory_9);
#line 170
$memory_12 = c_rt_lib::ov_is($memory_10, 'write');
#line 170
if (c_rt_lib::check_true($memory_12)) {goto label_92;}
#line 173
$memory_12 = c_rt_lib::ov_is($memory_10, 'clear');
#line 173
if (c_rt_lib::check_true($memory_12)) {goto label_107;}
#line 173
$memory_12 = "NOMATCHALERT";
#line 173
$memory_12 = [$memory_12,$memory_10];
#line 173
die(dfile::ssave($memory_12));
#line 170
label_92:
#line 170
$memory_13 = c_rt_lib::ov_as($memory_10, 'write');
#line 171
$memory_14 = {};
#line 171
$memory_15 = $memory_14;
#line 171
 if (c_rt_lib::get_arrcount($memory_7) > 1) {$memory_7 = [@{$memory_7}];}$memory_7->[$memory_9] = $memory_15;
#line 171
undef($memory_14);
#line 171
undef($memory_15);
#line 172
$memory_14 = c_rt_lib::get_ref_arr($memory_7, $memory_9);
#line 172
$memory_15 = "";
#line 172
hash::set_value($memory_14, $memory_13, $memory_15);
#line 172
undef($memory_15);
#line 172
c_rt_lib::set_ref_arr($memory_7, $memory_9, $memory_14);
#line 172
undef($memory_14);
#line 172
undef($memory_13);
#line 173
goto label_114;
#line 173
label_107:
#line 174
$memory_13 = {};
#line 174
$memory_14 = $memory_13;
#line 174
 if (c_rt_lib::get_arrcount($memory_7) > 1) {$memory_7 = [@{$memory_7}];}$memory_7->[$memory_9] = $memory_14;
#line 174
undef($memory_13);
#line 174
undef($memory_14);
#line 175
goto label_114;
#line 175
label_114:
#line 175
undef($memory_12);
#line 176
$memory_11 = c_rt_lib::next_iter($memory_11);
#line 176
goto label_80;
#line 176
label_118:
#line 176
undef($memory_8);
#line 176
undef($memory_9);
#line 176
undef($memory_10);
#line 176
undef($memory_11);
#line 177
$memory_8 = $memory_1->[$memory_2];
#line 177
$memory_8 = $memory_8->{'next'};
#line 177
$memory_10 = 0;
#line 177
$memory_11 = 1;
#line 177
$memory_12 = c_rt_lib::array_len($memory_8);
#line 177
label_128:
#line 177
$memory_13 = c_rt_lib::to_nl($memory_10 >= $memory_12);
#line 177
if (c_rt_lib::check_true($memory_13)) {goto label_135;}
#line 177
$memory_9 = $memory_8->[$memory_10];
#line 178
unnecessary_commands_priv::build_block_state($memory_0, $memory_1, $memory_9, $memory_7, $memory_4);
#line 179
$memory_10 = $memory_10 + $memory_11;
#line 179
goto label_128;
#line 179
label_135:
#line 179
undef($memory_8);
#line 179
undef($memory_9);
#line 179
undef($memory_10);
#line 179
undef($memory_11);
#line 179
undef($memory_12);
#line 179
undef($memory_13);
#line 179
undef($memory_5);
#line 179
undef($memory_6);
#line 179
undef($memory_7);
#line 179
undef($memory_1);
#line 179
undef($memory_2);
#line 179
undef($memory_3);
#line 179
$_[0] = $memory_0;$_[4] = $memory_4;return;
$_[0] = $memory_0;$_[4] = $memory_4;}
