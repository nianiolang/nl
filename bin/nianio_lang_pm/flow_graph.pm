use c_rt_lib;
use array;
use ptd;
use hash;
use nlasm;
sub flow_graph::block_t;
sub flow_graph::reg_use_t;
sub flow_graph::state_t;
sub flow_graph::blocks_t;
sub flow_graph::make_blocks;
sub flow_graph_priv::block_name_to_nr;
sub flow_graph::combine_blocks;
sub flow_graph_priv::remove_unused_block;
sub flow_graph_priv::set_prev_block;
sub flow_graph_priv::mk_block;
sub flow_graph_priv::add_block;
sub flow_graph_priv::read_reg;
sub flow_graph_priv::write_reg;
sub flow_graph_priv::clear_reg;
sub flow_graph_priv::mk_blocks;

return 1;

sub flow_graph::__block_t() {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;
#line 12
$memory_3 = {
	module => "nlasm",
	name => "cmd_t",
};
#line 12
$memory_3 = c_rt_lib::ov_mk_arg('ref', $memory_3);
#line 12
$memory_2 = ptd::arr($memory_3);
#line 12
undef($memory_3);
#line 12
$memory_3 = ptd::sim();
#line 12
$memory_4 = ptd::sim();
#line 12
$memory_6 = {
	module => "flow_graph",
	name => "reg_use_t",
};
#line 12
$memory_6 = c_rt_lib::ov_mk_arg('ref', $memory_6);
#line 12
$memory_5 = ptd::arr($memory_6);
#line 12
undef($memory_6);
#line 12
$memory_9 = ptd::sim();
#line 12
$memory_10 = ptd::none();
#line 12
$memory_8 = {write => $memory_9,clear => $memory_10,};
#line 12
undef($memory_9);
#line 12
undef($memory_10);
#line 12
$memory_7 = ptd::var($memory_8);
#line 12
undef($memory_8);
#line 12
$memory_6 = ptd::hash($memory_7);
#line 12
undef($memory_7);
#line 12
$memory_8 = ptd::sim();
#line 12
$memory_7 = ptd::arr($memory_8);
#line 12
undef($memory_8);
#line 12
$memory_9 = ptd::sim();
#line 12
$memory_8 = ptd::arr($memory_9);
#line 12
undef($memory_9);
#line 12
$memory_1 = {cmds => $memory_2,from => $memory_3,to => $memory_4,reg_uses => $memory_5,last_modif => $memory_6,prev => $memory_7,next => $memory_8,};
#line 12
undef($memory_2);
#line 12
undef($memory_3);
#line 12
undef($memory_4);
#line 12
undef($memory_5);
#line 12
undef($memory_6);
#line 12
undef($memory_7);
#line 12
undef($memory_8);
#line 12
$memory_0 = ptd::rec($memory_1);
#line 12
undef($memory_1);
#line 12
return $memory_0;
#line 12
undef($memory_0);
#line 12
return;
}

my $_block_t;
sub flow_graph::block_t() {
	$_block_t = flow_graph::__block_t() unless defined $_block_t;
	return $_block_t;
}

sub flow_graph::__reg_use_t() {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;
#line 28
$memory_2 = ptd::sim();
#line 28
$memory_3 = ptd::sim();
#line 28
$memory_6 = ptd::none();
#line 28
$memory_7 = ptd::none();
#line 28
$memory_8 = ptd::none();
#line 28
$memory_5 = {write => $memory_6,read => $memory_7,clear => $memory_8,};
#line 28
undef($memory_6);
#line 28
undef($memory_7);
#line 28
undef($memory_8);
#line 28
$memory_4 = ptd::var($memory_5);
#line 28
undef($memory_5);
#line 28
$memory_1 = {reg => $memory_2,cmd_nr => $memory_3,type => $memory_4,};
#line 28
undef($memory_2);
#line 28
undef($memory_3);
#line 28
undef($memory_4);
#line 28
$memory_0 = ptd::rec($memory_1);
#line 28
undef($memory_1);
#line 28
return $memory_0;
#line 28
undef($memory_0);
#line 28
return;
}

my $_reg_use_t;
sub flow_graph::reg_use_t() {
	$_reg_use_t = flow_graph::__reg_use_t() unless defined $_reg_use_t;
	return $_reg_use_t;
}

sub flow_graph::__state_t() {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;
#line 40
$memory_3 = {
	module => "flow_graph",
	name => "block_t",
};
#line 40
$memory_3 = c_rt_lib::ov_mk_arg('ref', $memory_3);
#line 40
$memory_2 = ptd::hash($memory_3);
#line 40
undef($memory_3);
#line 40
$memory_4 = ptd::sim();
#line 40
$memory_3 = ptd::arr($memory_4);
#line 40
undef($memory_4);
#line 40
$memory_1 = {map => $memory_2,tab => $memory_3,};
#line 40
undef($memory_2);
#line 40
undef($memory_3);
#line 40
$memory_0 = ptd::rec($memory_1);
#line 40
undef($memory_1);
#line 40
return $memory_0;
#line 40
undef($memory_0);
#line 40
return;
}

my $_state_t;
sub flow_graph::state_t() {
	$_state_t = flow_graph::__state_t() unless defined $_state_t;
	return $_state_t;
}

sub flow_graph::__blocks_t() {
my $memory_0;my $memory_1;
#line 46
$memory_1 = {
	module => "flow_graph",
	name => "block_t",
};
#line 46
$memory_1 = c_rt_lib::ov_mk_arg('ref', $memory_1);
#line 46
$memory_0 = ptd::arr($memory_1);
#line 46
undef($memory_1);
#line 46
return $memory_0;
#line 46
undef($memory_0);
#line 46
return;
}

my $_blocks_t;
sub flow_graph::blocks_t() {
	$_blocks_t = flow_graph::__blocks_t() unless defined $_blocks_t;
	return $_blocks_t;
}

sub flow_graph::make_blocks($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;$memory_0 = $_[0];$memory_1 = $_[1];
#line 49
$memory_2 = flow_graph_priv::mk_blocks($memory_0, $memory_1);
#line 50
$memory_3 = "map";
#line 50
$memory_3 = c_rt_lib::get_ref_hash($memory_2, $memory_3);
#line 50
$memory_4 = $memory_2->{'tab'};
#line 50
$memory_5 = 0;
#line 50
$memory_4 = $memory_4->[$memory_5];
#line 50
undef($memory_5);
#line 50
flow_graph_priv::set_prev_block($memory_3, $memory_4);
#line 50
undef($memory_4);
#line 50
$memory_4 = "map";
#line 50
c_rt_lib::set_ref_hash($memory_2, $memory_4, $memory_3);
#line 50
undef($memory_4);
#line 50
undef($memory_3);
#line 51
flow_graph_priv::remove_unused_block($memory_2);
#line 52
$memory_3 = flow_graph_priv::block_name_to_nr($memory_2);
#line 53
undef($memory_0);
#line 53
undef($memory_1);
#line 53
undef($memory_2);
#line 53
return $memory_3;
#line 53
undef($memory_2);
#line 53
undef($memory_3);
#line 53
undef($memory_0);
#line 53
undef($memory_1);
#line 53
return;
}

sub flow_graph_priv::block_name_to_nr($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;my $memory_13;my $memory_14;my $memory_15;my $memory_16;my $memory_17;$memory_0 = $_[0];
#line 56
$memory_1 = {};
#line 57
$memory_2 = $memory_0->{'tab'};
#line 58
$memory_3 = array::len($memory_2);
#line 58
$memory_4 = 0;
#line 58
$memory_5 = 1;
#line 58
label_3:
#line 58
$memory_6 = c_rt_lib::to_nl($memory_4 >= $memory_3);
#line 58
if (c_rt_lib::check_true($memory_6)) {goto label_1;}
#line 59
$memory_7 = $memory_2->[$memory_4];
#line 59
hash::set_value($memory_1, $memory_7, $memory_4);
#line 59
undef($memory_7);
#line 60
$memory_4 = $memory_4 + $memory_5;
#line 60
goto label_3;
#line 60
label_1:
#line 60
undef($memory_3);
#line 60
undef($memory_4);
#line 60
undef($memory_5);
#line 60
undef($memory_6);
#line 61
$memory_3 = [];
#line 62
$memory_5 = 0;
#line 62
$memory_6 = 1;
#line 62
$memory_7 = c_rt_lib::array_len($memory_2);
#line 62
label_6:
#line 62
$memory_8 = c_rt_lib::to_nl($memory_5 >= $memory_7);
#line 62
if (c_rt_lib::check_true($memory_8)) {goto label_4;}
#line 62
$memory_4 = $memory_2->[$memory_5];
#line 63
$memory_10 = $memory_0->{'map'};
#line 63
$memory_9 = hash::get_value($memory_10, $memory_4);
#line 63
undef($memory_10);
#line 64
$memory_10 = $memory_9->{'next'};
#line 65
$memory_11 = array::len($memory_10);
#line 65
$memory_12 = 0;
#line 65
$memory_13 = 1;
#line 65
label_9:
#line 65
$memory_14 = c_rt_lib::to_nl($memory_12 >= $memory_11);
#line 65
if (c_rt_lib::check_true($memory_14)) {goto label_7;}
#line 66
$memory_16 = $memory_10->[$memory_12];
#line 66
$memory_15 = hash::get_value($memory_1, $memory_16);
#line 66
undef($memory_16);
#line 66
$memory_16 = $memory_15;
#line 66
 if (c_rt_lib::get_arrcount($memory_10) > 1) {$memory_10 = [@{$memory_10}];}$memory_10->[$memory_12] = $memory_16;
#line 66
undef($memory_15);
#line 66
undef($memory_16);
#line 67
$memory_12 = $memory_12 + $memory_13;
#line 67
goto label_9;
#line 67
label_7:
#line 67
undef($memory_11);
#line 67
undef($memory_12);
#line 67
undef($memory_13);
#line 67
undef($memory_14);
#line 68
$memory_11 = $memory_10;
#line 68
 if (c_rt_lib::get_hashcount($memory_9) > 1) {$memory_9 = {%{$memory_9}};}$memory_9->{'next'} = $memory_11;
#line 68
undef($memory_11);
#line 69
$memory_11 = $memory_9->{'prev'};
#line 70
$memory_12 = array::len($memory_11);
#line 70
$memory_13 = 0;
#line 70
$memory_14 = 1;
#line 70
label_12:
#line 70
$memory_15 = c_rt_lib::to_nl($memory_13 >= $memory_12);
#line 70
if (c_rt_lib::check_true($memory_15)) {goto label_10;}
#line 71
$memory_17 = $memory_11->[$memory_13];
#line 71
$memory_16 = hash::get_value($memory_1, $memory_17);
#line 71
undef($memory_17);
#line 71
$memory_17 = $memory_16;
#line 71
 if (c_rt_lib::get_arrcount($memory_11) > 1) {$memory_11 = [@{$memory_11}];}$memory_11->[$memory_13] = $memory_17;
#line 71
undef($memory_16);
#line 71
undef($memory_17);
#line 72
$memory_13 = $memory_13 + $memory_14;
#line 72
goto label_12;
#line 72
label_10:
#line 72
undef($memory_12);
#line 72
undef($memory_13);
#line 72
undef($memory_14);
#line 72
undef($memory_15);
#line 73
$memory_12 = $memory_11;
#line 73
 if (c_rt_lib::get_hashcount($memory_9) > 1) {$memory_9 = {%{$memory_9}};}$memory_9->{'prev'} = $memory_12;
#line 73
undef($memory_12);
#line 74
array::push($memory_3, $memory_9);
#line 74
undef($memory_9);
#line 74
undef($memory_10);
#line 74
undef($memory_11);
#line 75
$memory_5 = $memory_5 + $memory_6;
#line 75
goto label_6;
#line 75
label_4:
#line 75
undef($memory_4);
#line 75
undef($memory_5);
#line 75
undef($memory_6);
#line 75
undef($memory_7);
#line 75
undef($memory_8);
#line 76
undef($memory_0);
#line 76
undef($memory_1);
#line 76
undef($memory_2);
#line 76
return $memory_3;
#line 76
undef($memory_1);
#line 76
undef($memory_2);
#line 76
undef($memory_3);
#line 76
undef($memory_0);
#line 76
return;
}

sub flow_graph::combine_blocks($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;$memory_0 = $_[0];
#line 79
$memory_1 = [];
#line 80
$memory_3 = 0;
#line 80
$memory_4 = 1;
#line 80
$memory_5 = c_rt_lib::array_len($memory_0);
#line 80
label_3:
#line 80
$memory_6 = c_rt_lib::to_nl($memory_3 >= $memory_5);
#line 80
if (c_rt_lib::check_true($memory_6)) {goto label_1;}
#line 80
$memory_2 = $memory_0->[$memory_3];
#line 81
$memory_7 = $memory_2->{'cmds'};
#line 81
array::append($memory_1, $memory_7);
#line 81
undef($memory_7);
#line 82
$memory_3 = $memory_3 + $memory_4;
#line 82
goto label_3;
#line 82
label_1:
#line 82
undef($memory_2);
#line 82
undef($memory_3);
#line 82
undef($memory_4);
#line 82
undef($memory_5);
#line 82
undef($memory_6);
#line 83
$memory_3 = array::len($memory_1);
#line 83
$memory_4 = 1;
#line 83
$memory_3 = $memory_3 - $memory_4;
#line 83
undef($memory_4);
#line 83
$memory_2 = $memory_1->[$memory_3];
#line 83
undef($memory_3);
#line 83
$memory_2 = $memory_2->{'cmd'};
#line 83
$memory_2 = c_rt_lib::ov_is($memory_2, 'return');
#line 83
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 83
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 83
if (c_rt_lib::check_true($memory_2)) {goto label_5;}
#line 84
$memory_4 = c_rt_lib::ov_mk_none('emp');
#line 84
$memory_4 = c_rt_lib::ov_mk_arg('return', $memory_4);
#line 84
$memory_5 = c_rt_lib::ov_mk_none('none');
#line 84
$memory_6 = nlasm::empty_debug();
#line 84
$memory_3 = {cmd => $memory_4,annotation => $memory_5,debug => $memory_6,};
#line 84
undef($memory_4);
#line 84
undef($memory_5);
#line 84
undef($memory_6);
#line 84
array::push($memory_1, $memory_3);
#line 84
undef($memory_3);
#line 85
goto label_5;
#line 85
label_5:
#line 85
undef($memory_2);
#line 86
undef($memory_0);
#line 86
return $memory_1;
#line 86
undef($memory_1);
#line 86
undef($memory_0);
#line 86
return;
}

sub flow_graph_priv::remove_unused_block($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;my $memory_13;my $memory_14;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);
#line 90
$memory_1 = [];
#line 91
$memory_2 = {};
#line 92
$memory_3 = c_rt_lib::to_nl(1);
#line 93
$memory_4 = $memory_0->{'map'};
#line 94
$memory_5 = $memory_0->{'tab'};
#line 94
$memory_7 = 0;
#line 94
$memory_8 = 1;
#line 94
$memory_9 = c_rt_lib::array_len($memory_5);
#line 94
label_3:
#line 94
$memory_10 = c_rt_lib::to_nl($memory_7 >= $memory_9);
#line 94
if (c_rt_lib::check_true($memory_10)) {goto label_1;}
#line 94
$memory_6 = $memory_5->[$memory_7];
#line 95
$memory_11 = hash::get_value($memory_4, $memory_6);
#line 96
$memory_13 = $memory_11->{'prev'};
#line 96
$memory_12 = array::len($memory_13);
#line 96
undef($memory_13);
#line 96
$memory_13 = 0;
#line 96
$memory_12 = c_rt_lib::to_nl($memory_12 == $memory_13);
#line 96
undef($memory_13);
#line 96
$memory_12 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_12));
#line 96
if (c_rt_lib::check_true($memory_12)) {goto label_5;}
#line 97
$memory_13 = $memory_3;
#line 97
$memory_13 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_13));
#line 97
if (c_rt_lib::check_true($memory_13)) {goto label_7;}
#line 98
$memory_14 = c_rt_lib::to_nl(0);
#line 98
$memory_3 = $memory_14;
#line 98
undef($memory_14);
#line 99
goto label_6;
#line 99
label_7:
#line 100
undef($memory_11);
#line 100
undef($memory_12);
#line 100
undef($memory_13);
#line 100
goto label_2;
#line 101
goto label_6;
#line 101
label_6:
#line 101
undef($memory_13);
#line 102
goto label_5;
#line 102
label_5:
#line 102
undef($memory_12);
#line 103
hash::set_value($memory_2, $memory_6, $memory_11);
#line 104
array::push($memory_1, $memory_6);
#line 104
undef($memory_11);
#line 104
label_2:
#line 105
$memory_7 = $memory_7 + $memory_8;
#line 105
goto label_3;
#line 105
label_1:
#line 105
undef($memory_5);
#line 105
undef($memory_6);
#line 105
undef($memory_7);
#line 105
undef($memory_8);
#line 105
undef($memory_9);
#line 105
undef($memory_10);
#line 106
$memory_5 = $memory_2;
#line 106
 if (c_rt_lib::get_hashcount($memory_0) > 1) {$memory_0 = {%{$memory_0}};}$memory_0->{'map'} = $memory_5;
#line 106
undef($memory_5);
#line 107
$memory_5 = $memory_1;
#line 107
 if (c_rt_lib::get_hashcount($memory_0) > 1) {$memory_0 = {%{$memory_0}};}$memory_0->{'tab'} = $memory_5;
#line 107
undef($memory_5);
#line 107
undef($memory_1);
#line 107
undef($memory_2);
#line 107
undef($memory_3);
#line 107
undef($memory_4);
#line 107
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub flow_graph_priv::set_prev_block($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];
#line 110
$memory_2 = hash::get_value($memory_0, $memory_1);
#line 111
$memory_4 = $memory_2->{'prev'};
#line 111
$memory_3 = array::len($memory_4);
#line 111
undef($memory_4);
#line 111
$memory_4 = 1;
#line 111
$memory_3 = c_rt_lib::to_nl($memory_3 <= $memory_4);
#line 111
undef($memory_4);
#line 111
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 111
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 111
if (c_rt_lib::check_true($memory_3)) {goto label_2;}
#line 111
undef($memory_1);
#line 111
undef($memory_2);
#line 111
undef($memory_3);
#line 111
$_[0] = $memory_0;return;
#line 111
goto label_2;
#line 111
label_2:
#line 111
undef($memory_3);
#line 112
$memory_3 = $memory_2->{'next'};
#line 112
$memory_5 = 0;
#line 112
$memory_6 = 1;
#line 112
$memory_7 = c_rt_lib::array_len($memory_3);
#line 112
label_5:
#line 112
$memory_8 = c_rt_lib::to_nl($memory_5 >= $memory_7);
#line 112
if (c_rt_lib::check_true($memory_8)) {goto label_3;}
#line 112
$memory_4 = $memory_3->[$memory_5];
#line 113
$memory_9 = hash::get_value($memory_0, $memory_4);
#line 114
$memory_10 = "prev";
#line 114
$memory_10 = c_rt_lib::get_ref_hash($memory_9, $memory_10);
#line 114
array::push($memory_10, $memory_1);
#line 114
$memory_11 = "prev";
#line 114
c_rt_lib::set_ref_hash($memory_9, $memory_11, $memory_10);
#line 114
undef($memory_11);
#line 114
undef($memory_10);
#line 115
hash::set_value($memory_0, $memory_4, $memory_9);
#line 116
flow_graph_priv::set_prev_block($memory_0, $memory_4);
#line 116
undef($memory_9);
#line 117
$memory_5 = $memory_5 + $memory_6;
#line 117
goto label_5;
#line 117
label_3:
#line 117
undef($memory_3);
#line 117
undef($memory_4);
#line 117
undef($memory_5);
#line 117
undef($memory_6);
#line 117
undef($memory_7);
#line 117
undef($memory_8);
#line 117
undef($memory_2);
#line 117
undef($memory_1);
#line 117
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub flow_graph_priv::mk_block($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;$memory_0 = $_[0];
#line 121
$memory_2 = [];
#line 121
$memory_3 = [];
#line 121
$memory_4 = 1;
#line 121
$memory_4 = -$memory_4;
#line 121
$memory_5 = [];
#line 121
$memory_6 = {};
#line 121
$memory_7 = [];
#line 121
$memory_1 = {cmds => $memory_2,prev => $memory_3,from => $memory_0,to => $memory_4,reg_uses => $memory_5,last_modif => $memory_6,next => $memory_7,};
#line 121
undef($memory_2);
#line 121
undef($memory_3);
#line 121
undef($memory_4);
#line 121
undef($memory_5);
#line 121
undef($memory_6);
#line 121
undef($memory_7);
#line 121
undef($memory_0);
#line 121
return $memory_1;
#line 121
undef($memory_1);
#line 121
undef($memory_0);
#line 121
return;
}

sub flow_graph_priv::add_block($$$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];Scalar::Util::weaken($_[1]) if ref($_[1]);$memory_2 = $_[2];$memory_3 = $_[3];
#line 124
$memory_4 = $memory_2;
#line 124
 if (c_rt_lib::get_hashcount($memory_1) > 1) {$memory_1 = {%{$memory_1}};}$memory_1->{'to'} = $memory_4;
#line 124
undef($memory_4);
#line 125
$memory_4 = "map";
#line 125
$memory_4 = c_rt_lib::get_ref_hash($memory_0, $memory_4);
#line 125
hash::set_value($memory_4, $memory_3, $memory_1);
#line 125
$memory_5 = "map";
#line 125
c_rt_lib::set_ref_hash($memory_0, $memory_5, $memory_4);
#line 125
undef($memory_5);
#line 125
undef($memory_4);
#line 126
$memory_4 = "tab";
#line 126
$memory_4 = c_rt_lib::get_ref_hash($memory_0, $memory_4);
#line 126
array::push($memory_4, $memory_3);
#line 126
$memory_5 = "tab";
#line 126
c_rt_lib::set_ref_hash($memory_0, $memory_5, $memory_4);
#line 126
undef($memory_5);
#line 126
undef($memory_4);
#line 127
$memory_5 = 1;
#line 127
$memory_5 = $memory_2 + $memory_5;
#line 127
$memory_4 = flow_graph_priv::mk_block($memory_5);
#line 127
undef($memory_5);
#line 127
$memory_1 = $memory_4;
#line 127
undef($memory_4);
#line 127
undef($memory_2);
#line 127
undef($memory_3);
#line 127
$_[0] = $memory_0;$_[1] = $memory_1;return;
$_[0] = $memory_0;$_[1] = $memory_1;}

sub flow_graph_priv::read_reg($$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];$memory_2 = $_[2];
#line 130
$memory_3 = "";
#line 130
$memory_3 = c_rt_lib::to_nl($memory_1 eq $memory_3);
#line 130
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 130
if (c_rt_lib::check_true($memory_3)) {goto label_2;}
#line 130
undef($memory_1);
#line 130
undef($memory_2);
#line 130
undef($memory_3);
#line 130
$_[0] = $memory_0;return;
#line 130
goto label_2;
#line 130
label_2:
#line 130
undef($memory_3);
#line 131
$memory_3 = "reg_uses";
#line 131
$memory_3 = c_rt_lib::get_ref_hash($memory_0, $memory_3);
#line 131
$memory_5 = c_rt_lib::ov_mk_none('read');
#line 131
$memory_4 = {reg => $memory_1,cmd_nr => $memory_2,type => $memory_5,};
#line 131
undef($memory_5);
#line 131
array::push($memory_3, $memory_4);
#line 131
undef($memory_4);
#line 131
$memory_4 = "reg_uses";
#line 131
c_rt_lib::set_ref_hash($memory_0, $memory_4, $memory_3);
#line 131
undef($memory_4);
#line 131
undef($memory_3);
#line 131
undef($memory_1);
#line 131
undef($memory_2);
#line 131
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub flow_graph_priv::write_reg($$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];$memory_2 = $_[2];
#line 134
$memory_3 = "";
#line 134
$memory_3 = c_rt_lib::to_nl($memory_1 eq $memory_3);
#line 134
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 134
if (c_rt_lib::check_true($memory_3)) {goto label_2;}
#line 134
undef($memory_1);
#line 134
undef($memory_2);
#line 134
undef($memory_3);
#line 134
$_[0] = $memory_0;return;
#line 134
goto label_2;
#line 134
label_2:
#line 134
undef($memory_3);
#line 135
$memory_3 = "reg_uses";
#line 135
$memory_3 = c_rt_lib::get_ref_hash($memory_0, $memory_3);
#line 135
$memory_5 = c_rt_lib::ov_mk_none('write');
#line 135
$memory_4 = {reg => $memory_1,cmd_nr => $memory_2,type => $memory_5,};
#line 135
undef($memory_5);
#line 135
array::push($memory_3, $memory_4);
#line 135
undef($memory_4);
#line 135
$memory_4 = "reg_uses";
#line 135
c_rt_lib::set_ref_hash($memory_0, $memory_4, $memory_3);
#line 135
undef($memory_4);
#line 135
undef($memory_3);
#line 136
$memory_3 = "last_modif";
#line 136
$memory_3 = c_rt_lib::get_ref_hash($memory_0, $memory_3);
#line 136
$memory_4 = c_rt_lib::ov_mk_arg('write', $memory_2);
#line 136
hash::set_value($memory_3, $memory_1, $memory_4);
#line 136
undef($memory_4);
#line 136
$memory_4 = "last_modif";
#line 136
c_rt_lib::set_ref_hash($memory_0, $memory_4, $memory_3);
#line 136
undef($memory_4);
#line 136
undef($memory_3);
#line 136
undef($memory_1);
#line 136
undef($memory_2);
#line 136
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub flow_graph_priv::clear_reg($$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];$memory_2 = $_[2];
#line 139
$memory_3 = "";
#line 139
$memory_3 = c_rt_lib::to_nl($memory_1 eq $memory_3);
#line 139
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 139
if (c_rt_lib::check_true($memory_3)) {goto label_2;}
#line 139
undef($memory_1);
#line 139
undef($memory_2);
#line 139
undef($memory_3);
#line 139
$_[0] = $memory_0;return;
#line 139
goto label_2;
#line 139
label_2:
#line 139
undef($memory_3);
#line 140
$memory_3 = "reg_uses";
#line 140
$memory_3 = c_rt_lib::get_ref_hash($memory_0, $memory_3);
#line 140
$memory_5 = c_rt_lib::ov_mk_none('clear');
#line 140
$memory_4 = {reg => $memory_1,cmd_nr => $memory_2,type => $memory_5,};
#line 140
undef($memory_5);
#line 140
array::push($memory_3, $memory_4);
#line 140
undef($memory_4);
#line 140
$memory_4 = "reg_uses";
#line 140
c_rt_lib::set_ref_hash($memory_0, $memory_4, $memory_3);
#line 140
undef($memory_4);
#line 140
undef($memory_3);
#line 141
$memory_3 = "last_modif";
#line 141
$memory_3 = c_rt_lib::get_ref_hash($memory_0, $memory_3);
#line 141
$memory_4 = c_rt_lib::ov_mk_none('clear');
#line 141
hash::set_value($memory_3, $memory_1, $memory_4);
#line 141
undef($memory_4);
#line 141
$memory_4 = "last_modif";
#line 141
c_rt_lib::set_ref_hash($memory_0, $memory_4, $memory_3);
#line 141
undef($memory_4);
#line 141
undef($memory_3);
#line 141
undef($memory_1);
#line 141
undef($memory_2);
#line 141
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub flow_graph_priv::mk_blocks($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;my $memory_13;my $memory_14;my $memory_15;my $memory_16;my $memory_17;my $memory_18;my $memory_19;my $memory_20;my $memory_21;$memory_0 = $_[0];$memory_1 = $_[1];
#line 144
$memory_3 = {};
#line 144
$memory_4 = [];
#line 144
$memory_2 = {map => $memory_3,tab => $memory_4,};
#line 144
undef($memory_3);
#line 144
undef($memory_4);
#line 145
$memory_4 = 0;
#line 145
$memory_3 = flow_graph_priv::mk_block($memory_4);
#line 145
undef($memory_4);
#line 146
$memory_4 = "label_init";
#line 147
$memory_5 = 0;
#line 148
$memory_7 = 0;
#line 148
$memory_8 = 1;
#line 148
$memory_9 = c_rt_lib::array_len($memory_0);
#line 148
label_3:
#line 148
$memory_10 = c_rt_lib::to_nl($memory_7 >= $memory_9);
#line 148
if (c_rt_lib::check_true($memory_10)) {goto label_1;}
#line 148
$memory_6 = $memory_0->[$memory_7];
#line 149
$memory_11 = "cmds";
#line 149
$memory_11 = c_rt_lib::get_ref_hash($memory_3, $memory_11);
#line 149
array::push($memory_11, $memory_6);
#line 149
$memory_12 = "cmds";
#line 149
c_rt_lib::set_ref_hash($memory_3, $memory_12, $memory_11);
#line 149
undef($memory_12);
#line 149
undef($memory_11);
#line 150
$memory_11 = $memory_6->{'cmd'};
#line 150
$memory_12 = c_rt_lib::ov_is($memory_11, 'arr_decl');
#line 150
if (c_rt_lib::check_true($memory_12)) {goto label_5;}
#line 155
$memory_12 = c_rt_lib::ov_is($memory_11, 'hash_decl');
#line 155
if (c_rt_lib::check_true($memory_12)) {goto label_6;}
#line 160
$memory_12 = c_rt_lib::ov_is($memory_11, 'call');
#line 160
if (c_rt_lib::check_true($memory_12)) {goto label_7;}
#line 175
$memory_12 = c_rt_lib::ov_is($memory_11, 'una_op');
#line 175
if (c_rt_lib::check_true($memory_12)) {goto label_8;}
#line 178
$memory_12 = c_rt_lib::ov_is($memory_11, 'bin_op');
#line 178
if (c_rt_lib::check_true($memory_12)) {goto label_9;}
#line 182
$memory_12 = c_rt_lib::ov_is($memory_11, 'ov_is');
#line 182
if (c_rt_lib::check_true($memory_12)) {goto label_10;}
#line 185
$memory_12 = c_rt_lib::ov_is($memory_11, 'ov_as');
#line 185
if (c_rt_lib::check_true($memory_12)) {goto label_11;}
#line 188
$memory_12 = c_rt_lib::ov_is($memory_11, 'func');
#line 188
if (c_rt_lib::check_true($memory_12)) {goto label_12;}
#line 190
$memory_12 = c_rt_lib::ov_is($memory_11, 'move');
#line 190
if (c_rt_lib::check_true($memory_12)) {goto label_13;}
#line 193
$memory_12 = c_rt_lib::ov_is($memory_11, 'load_const');
#line 193
if (c_rt_lib::check_true($memory_12)) {goto label_14;}
#line 195
$memory_12 = c_rt_lib::ov_is($memory_11, 'get_frm_idx');
#line 195
if (c_rt_lib::check_true($memory_12)) {goto label_15;}
#line 199
$memory_12 = c_rt_lib::ov_is($memory_11, 'set_at_idx');
#line 199
if (c_rt_lib::check_true($memory_12)) {goto label_16;}
#line 204
$memory_12 = c_rt_lib::ov_is($memory_11, 'get_val');
#line 204
if (c_rt_lib::check_true($memory_12)) {goto label_17;}
#line 207
$memory_12 = c_rt_lib::ov_is($memory_11, 'set_val');
#line 207
if (c_rt_lib::check_true($memory_12)) {goto label_18;}
#line 211
$memory_12 = c_rt_lib::ov_is($memory_11, 'ov_mk');
#line 211
if (c_rt_lib::check_true($memory_12)) {goto label_19;}
#line 214
$memory_12 = c_rt_lib::ov_is($memory_11, 'return');
#line 214
if (c_rt_lib::check_true($memory_12)) {goto label_20;}
#line 223
$memory_12 = c_rt_lib::ov_is($memory_11, 'die');
#line 223
if (c_rt_lib::check_true($memory_12)) {goto label_21;}
#line 227
$memory_12 = c_rt_lib::ov_is($memory_11, 'prt_lbl');
#line 227
if (c_rt_lib::check_true($memory_12)) {goto label_22;}
#line 235
$memory_12 = c_rt_lib::ov_is($memory_11, 'if_goto');
#line 235
if (c_rt_lib::check_true($memory_12)) {goto label_23;}
#line 245
$memory_12 = c_rt_lib::ov_is($memory_11, 'goto');
#line 245
if (c_rt_lib::check_true($memory_12)) {goto label_24;}
#line 249
$memory_12 = c_rt_lib::ov_is($memory_11, 'clear');
#line 249
if (c_rt_lib::check_true($memory_12)) {goto label_25;}
#line 249
$memory_12 = "NOMATCHALERT";
#line 249
$memory_12 = [$memory_12,$memory_11];
#line 249
die(dfile::ssave($memory_12));
#line 150
label_5:
#line 150
$memory_13 = c_rt_lib::ov_as($memory_11, 'arr_decl');
#line 151
$memory_14 = $memory_13->{'src'};
#line 151
$memory_16 = 0;
#line 151
$memory_17 = 1;
#line 151
$memory_18 = c_rt_lib::array_len($memory_14);
#line 151
label_28:
#line 151
$memory_19 = c_rt_lib::to_nl($memory_16 >= $memory_18);
#line 151
if (c_rt_lib::check_true($memory_19)) {goto label_26;}
#line 151
$memory_15 = $memory_14->[$memory_16];
#line 152
flow_graph_priv::read_reg($memory_3, $memory_15, $memory_5);
#line 153
$memory_16 = $memory_16 + $memory_17;
#line 153
goto label_28;
#line 153
label_26:
#line 153
undef($memory_14);
#line 153
undef($memory_15);
#line 153
undef($memory_16);
#line 153
undef($memory_17);
#line 153
undef($memory_18);
#line 153
undef($memory_19);
#line 154
$memory_14 = $memory_13->{'dest'};
#line 154
flow_graph_priv::write_reg($memory_3, $memory_14, $memory_5);
#line 154
undef($memory_14);
#line 154
undef($memory_13);
#line 155
goto label_4;
#line 155
label_6:
#line 155
$memory_13 = c_rt_lib::ov_as($memory_11, 'hash_decl');
#line 156
$memory_14 = $memory_13->{'src'};
#line 156
$memory_16 = 0;
#line 156
$memory_17 = 1;
#line 156
$memory_18 = c_rt_lib::array_len($memory_14);
#line 156
label_31:
#line 156
$memory_19 = c_rt_lib::to_nl($memory_16 >= $memory_18);
#line 156
if (c_rt_lib::check_true($memory_19)) {goto label_29;}
#line 156
$memory_15 = $memory_14->[$memory_16];
#line 157
$memory_20 = $memory_15->{'val'};
#line 157
flow_graph_priv::read_reg($memory_3, $memory_20, $memory_5);
#line 157
undef($memory_20);
#line 158
$memory_16 = $memory_16 + $memory_17;
#line 158
goto label_31;
#line 158
label_29:
#line 158
undef($memory_14);
#line 158
undef($memory_15);
#line 158
undef($memory_16);
#line 158
undef($memory_17);
#line 158
undef($memory_18);
#line 158
undef($memory_19);
#line 159
$memory_14 = $memory_13->{'dest'};
#line 159
flow_graph_priv::write_reg($memory_3, $memory_14, $memory_5);
#line 159
undef($memory_14);
#line 159
undef($memory_13);
#line 160
goto label_4;
#line 160
label_7:
#line 160
$memory_13 = c_rt_lib::ov_as($memory_11, 'call');
#line 161
$memory_14 = $memory_13->{'args'};
#line 161
$memory_16 = 0;
#line 161
$memory_17 = 1;
#line 161
$memory_18 = c_rt_lib::array_len($memory_14);
#line 161
label_34:
#line 161
$memory_19 = c_rt_lib::to_nl($memory_16 >= $memory_18);
#line 161
if (c_rt_lib::check_true($memory_19)) {goto label_32;}
#line 161
$memory_15 = $memory_14->[$memory_16];
#line 162
$memory_20 = c_rt_lib::ov_is($memory_15, 'val');
#line 162
if (c_rt_lib::check_true($memory_20)) {goto label_36;}
#line 164
$memory_20 = c_rt_lib::ov_is($memory_15, 'ref');
#line 164
if (c_rt_lib::check_true($memory_20)) {goto label_37;}
#line 164
$memory_20 = "NOMATCHALERT";
#line 164
$memory_20 = [$memory_20,$memory_15];
#line 164
die(dfile::ssave($memory_20));
#line 162
label_36:
#line 162
$memory_21 = c_rt_lib::ov_as($memory_15, 'val');
#line 163
flow_graph_priv::read_reg($memory_3, $memory_21, $memory_5);
#line 163
undef($memory_21);
#line 164
goto label_35;
#line 164
label_37:
#line 164
$memory_21 = c_rt_lib::ov_as($memory_15, 'ref');
#line 165
flow_graph_priv::read_reg($memory_3, $memory_21, $memory_5);
#line 165
undef($memory_21);
#line 166
goto label_35;
#line 166
label_35:
#line 166
undef($memory_20);
#line 167
$memory_16 = $memory_16 + $memory_17;
#line 167
goto label_34;
#line 167
label_32:
#line 167
undef($memory_14);
#line 167
undef($memory_15);
#line 167
undef($memory_16);
#line 167
undef($memory_17);
#line 167
undef($memory_18);
#line 167
undef($memory_19);
#line 168
$memory_14 = $memory_13->{'args'};
#line 168
$memory_16 = 0;
#line 168
$memory_17 = 1;
#line 168
$memory_18 = c_rt_lib::array_len($memory_14);
#line 168
label_40:
#line 168
$memory_19 = c_rt_lib::to_nl($memory_16 >= $memory_18);
#line 168
if (c_rt_lib::check_true($memory_19)) {goto label_38;}
#line 168
$memory_15 = $memory_14->[$memory_16];
#line 169
$memory_20 = c_rt_lib::ov_is($memory_15, 'val');
#line 169
if (c_rt_lib::check_true($memory_20)) {goto label_42;}
#line 170
$memory_20 = c_rt_lib::ov_is($memory_15, 'ref');
#line 170
if (c_rt_lib::check_true($memory_20)) {goto label_43;}
#line 170
$memory_20 = "NOMATCHALERT";
#line 170
$memory_20 = [$memory_20,$memory_15];
#line 170
die(dfile::ssave($memory_20));
#line 169
label_42:
#line 169
$memory_21 = c_rt_lib::ov_as($memory_15, 'val');
#line 169
undef($memory_21);
#line 170
goto label_41;
#line 170
label_43:
#line 170
$memory_21 = c_rt_lib::ov_as($memory_15, 'ref');
#line 171
flow_graph_priv::write_reg($memory_3, $memory_21, $memory_5);
#line 171
undef($memory_21);
#line 172
goto label_41;
#line 172
label_41:
#line 172
undef($memory_20);
#line 173
$memory_16 = $memory_16 + $memory_17;
#line 173
goto label_40;
#line 173
label_38:
#line 173
undef($memory_14);
#line 173
undef($memory_15);
#line 173
undef($memory_16);
#line 173
undef($memory_17);
#line 173
undef($memory_18);
#line 173
undef($memory_19);
#line 174
$memory_14 = $memory_13->{'dest'};
#line 174
flow_graph_priv::write_reg($memory_3, $memory_14, $memory_5);
#line 174
undef($memory_14);
#line 174
undef($memory_13);
#line 175
goto label_4;
#line 175
label_8:
#line 175
$memory_13 = c_rt_lib::ov_as($memory_11, 'una_op');
#line 176
$memory_14 = $memory_13->{'src'};
#line 176
flow_graph_priv::read_reg($memory_3, $memory_14, $memory_5);
#line 176
undef($memory_14);
#line 177
$memory_14 = $memory_13->{'dest'};
#line 177
flow_graph_priv::write_reg($memory_3, $memory_14, $memory_5);
#line 177
undef($memory_14);
#line 177
undef($memory_13);
#line 178
goto label_4;
#line 178
label_9:
#line 178
$memory_13 = c_rt_lib::ov_as($memory_11, 'bin_op');
#line 179
$memory_14 = $memory_13->{'left'};
#line 179
flow_graph_priv::read_reg($memory_3, $memory_14, $memory_5);
#line 179
undef($memory_14);
#line 180
$memory_14 = $memory_13->{'right'};
#line 180
flow_graph_priv::read_reg($memory_3, $memory_14, $memory_5);
#line 180
undef($memory_14);
#line 181
$memory_14 = $memory_13->{'dest'};
#line 181
flow_graph_priv::write_reg($memory_3, $memory_14, $memory_5);
#line 181
undef($memory_14);
#line 181
undef($memory_13);
#line 182
goto label_4;
#line 182
label_10:
#line 182
$memory_13 = c_rt_lib::ov_as($memory_11, 'ov_is');
#line 183
$memory_14 = $memory_13->{'src'};
#line 183
flow_graph_priv::read_reg($memory_3, $memory_14, $memory_5);
#line 183
undef($memory_14);
#line 184
$memory_14 = $memory_13->{'dest'};
#line 184
flow_graph_priv::write_reg($memory_3, $memory_14, $memory_5);
#line 184
undef($memory_14);
#line 184
undef($memory_13);
#line 185
goto label_4;
#line 185
label_11:
#line 185
$memory_13 = c_rt_lib::ov_as($memory_11, 'ov_as');
#line 186
$memory_14 = $memory_13->{'src'};
#line 186
flow_graph_priv::read_reg($memory_3, $memory_14, $memory_5);
#line 186
undef($memory_14);
#line 187
$memory_14 = $memory_13->{'dest'};
#line 187
flow_graph_priv::write_reg($memory_3, $memory_14, $memory_5);
#line 187
undef($memory_14);
#line 187
undef($memory_13);
#line 188
goto label_4;
#line 188
label_12:
#line 188
$memory_13 = c_rt_lib::ov_as($memory_11, 'func');
#line 189
$memory_14 = $memory_13->{'dest'};
#line 189
flow_graph_priv::write_reg($memory_3, $memory_14, $memory_5);
#line 189
undef($memory_14);
#line 189
undef($memory_13);
#line 190
goto label_4;
#line 190
label_13:
#line 190
$memory_13 = c_rt_lib::ov_as($memory_11, 'move');
#line 191
$memory_14 = $memory_13->{'src'};
#line 191
flow_graph_priv::read_reg($memory_3, $memory_14, $memory_5);
#line 191
undef($memory_14);
#line 192
$memory_14 = $memory_13->{'dest'};
#line 192
flow_graph_priv::write_reg($memory_3, $memory_14, $memory_5);
#line 192
undef($memory_14);
#line 192
undef($memory_13);
#line 193
goto label_4;
#line 193
label_14:
#line 193
$memory_13 = c_rt_lib::ov_as($memory_11, 'load_const');
#line 194
$memory_14 = $memory_13->{'dest'};
#line 194
flow_graph_priv::write_reg($memory_3, $memory_14, $memory_5);
#line 194
undef($memory_14);
#line 194
undef($memory_13);
#line 195
goto label_4;
#line 195
label_15:
#line 195
$memory_13 = c_rt_lib::ov_as($memory_11, 'get_frm_idx');
#line 196
$memory_14 = $memory_13->{'src'};
#line 196
flow_graph_priv::read_reg($memory_3, $memory_14, $memory_5);
#line 196
undef($memory_14);
#line 197
$memory_14 = $memory_13->{'idx'};
#line 197
flow_graph_priv::read_reg($memory_3, $memory_14, $memory_5);
#line 197
undef($memory_14);
#line 198
$memory_14 = $memory_13->{'dest'};
#line 198
flow_graph_priv::write_reg($memory_3, $memory_14, $memory_5);
#line 198
undef($memory_14);
#line 198
undef($memory_13);
#line 199
goto label_4;
#line 199
label_16:
#line 199
$memory_13 = c_rt_lib::ov_as($memory_11, 'set_at_idx');
#line 200
$memory_14 = $memory_13->{'src'};
#line 200
flow_graph_priv::read_reg($memory_3, $memory_14, $memory_5);
#line 200
undef($memory_14);
#line 201
$memory_14 = $memory_13->{'idx'};
#line 201
flow_graph_priv::read_reg($memory_3, $memory_14, $memory_5);
#line 201
undef($memory_14);
#line 202
$memory_14 = $memory_13->{'val'};
#line 202
flow_graph_priv::read_reg($memory_3, $memory_14, $memory_5);
#line 202
undef($memory_14);
#line 203
$memory_14 = $memory_13->{'src'};
#line 203
flow_graph_priv::write_reg($memory_3, $memory_14, $memory_5);
#line 203
undef($memory_14);
#line 203
undef($memory_13);
#line 204
goto label_4;
#line 204
label_17:
#line 204
$memory_13 = c_rt_lib::ov_as($memory_11, 'get_val');
#line 205
$memory_14 = $memory_13->{'src'};
#line 205
flow_graph_priv::read_reg($memory_3, $memory_14, $memory_5);
#line 205
undef($memory_14);
#line 206
$memory_14 = $memory_13->{'dest'};
#line 206
flow_graph_priv::write_reg($memory_3, $memory_14, $memory_5);
#line 206
undef($memory_14);
#line 206
undef($memory_13);
#line 207
goto label_4;
#line 207
label_18:
#line 207
$memory_13 = c_rt_lib::ov_as($memory_11, 'set_val');
#line 208
$memory_14 = $memory_13->{'src'};
#line 208
flow_graph_priv::read_reg($memory_3, $memory_14, $memory_5);
#line 208
undef($memory_14);
#line 209
$memory_14 = $memory_13->{'val'};
#line 209
flow_graph_priv::read_reg($memory_3, $memory_14, $memory_5);
#line 209
undef($memory_14);
#line 210
$memory_14 = $memory_13->{'src'};
#line 210
flow_graph_priv::write_reg($memory_3, $memory_14, $memory_5);
#line 210
undef($memory_14);
#line 210
undef($memory_13);
#line 211
goto label_4;
#line 211
label_19:
#line 211
$memory_13 = c_rt_lib::ov_as($memory_11, 'ov_mk');
#line 212
$memory_14 = $memory_13->{'src'};
#line 212
$memory_14 = c_rt_lib::ov_is($memory_14, 'arg');
#line 212
$memory_14 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_14));
#line 212
if (c_rt_lib::check_true($memory_14)) {goto label_45;}
#line 212
$memory_15 = $memory_13->{'src'};
#line 212
$memory_15 = c_rt_lib::ov_as($memory_15, 'arg');
#line 212
flow_graph_priv::read_reg($memory_3, $memory_15, $memory_5);
#line 212
undef($memory_15);
#line 212
goto label_45;
#line 212
label_45:
#line 212
undef($memory_14);
#line 213
$memory_14 = $memory_13->{'dest'};
#line 213
flow_graph_priv::write_reg($memory_3, $memory_14, $memory_5);
#line 213
undef($memory_14);
#line 213
undef($memory_13);
#line 214
goto label_4;
#line 214
label_20:
#line 214
$memory_13 = c_rt_lib::ov_as($memory_11, 'return');
#line 215
$memory_14 = $memory_13;
#line 215
$memory_14 = c_rt_lib::ov_is($memory_14, 'val');
#line 215
$memory_14 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_14));
#line 215
if (c_rt_lib::check_true($memory_14)) {goto label_47;}
#line 215
$memory_15 = $memory_13;
#line 215
$memory_15 = c_rt_lib::ov_as($memory_15, 'val');
#line 215
flow_graph_priv::read_reg($memory_3, $memory_15, $memory_5);
#line 215
undef($memory_15);
#line 215
goto label_47;
#line 215
label_47:
#line 215
undef($memory_14);
#line 216
$memory_14 = array::len($memory_1);
#line 216
$memory_15 = 0;
#line 216
$memory_16 = 1;
#line 216
label_50:
#line 216
$memory_17 = c_rt_lib::to_nl($memory_15 >= $memory_14);
#line 216
if (c_rt_lib::check_true($memory_17)) {goto label_48;}
#line 217
$memory_18 = $memory_1->[$memory_15];
#line 217
$memory_18 = c_rt_lib::ov_is($memory_18, 'ref');
#line 217
$memory_18 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_18));
#line 217
if (c_rt_lib::check_true($memory_18)) {goto label_52;}
#line 218
flow_graph_priv::read_reg($memory_3, $memory_15, $memory_5);
#line 219
goto label_52;
#line 219
label_52:
#line 219
undef($memory_18);
#line 220
$memory_15 = $memory_15 + $memory_16;
#line 220
goto label_50;
#line 220
label_48:
#line 220
undef($memory_14);
#line 220
undef($memory_15);
#line 220
undef($memory_16);
#line 220
undef($memory_17);
#line 221
flow_graph_priv::add_block($memory_2, $memory_3, $memory_5, $memory_4);
#line 222
$memory_14 = "_R";
#line 222
$memory_4 = $memory_4 . $memory_14;
#line 222
undef($memory_14);
#line 222
undef($memory_13);
#line 223
goto label_4;
#line 223
label_21:
#line 223
$memory_13 = c_rt_lib::ov_as($memory_11, 'die');
#line 224
flow_graph_priv::read_reg($memory_3, $memory_13, $memory_5);
#line 225
flow_graph_priv::add_block($memory_2, $memory_3, $memory_5, $memory_4);
#line 226
$memory_14 = "_D";
#line 226
$memory_4 = $memory_4 . $memory_14;
#line 226
undef($memory_14);
#line 226
undef($memory_13);
#line 227
goto label_4;
#line 227
label_22:
#line 227
$memory_13 = c_rt_lib::ov_as($memory_11, 'prt_lbl');
#line 228
$memory_14 = c_rt_lib::to_nl($memory_13 ne $memory_4);
#line 228
$memory_14 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_14));
#line 228
if (c_rt_lib::check_true($memory_14)) {goto label_54;}
#line 229
$memory_15 = "next";
#line 229
$memory_15 = c_rt_lib::get_ref_hash($memory_3, $memory_15);
#line 229
array::push($memory_15, $memory_13);
#line 229
$memory_16 = "next";
#line 229
c_rt_lib::set_ref_hash($memory_3, $memory_16, $memory_15);
#line 229
undef($memory_16);
#line 229
undef($memory_15);
#line 230
$memory_15 = "cmds";
#line 230
$memory_15 = c_rt_lib::get_ref_hash($memory_3, $memory_15);
#line 230
array::pop($memory_15);
#line 230
$memory_16 = "cmds";
#line 230
c_rt_lib::set_ref_hash($memory_3, $memory_16, $memory_15);
#line 230
undef($memory_16);
#line 230
undef($memory_15);
#line 231
$memory_15 = 1;
#line 231
$memory_15 = $memory_5 - $memory_15;
#line 231
flow_graph_priv::add_block($memory_2, $memory_3, $memory_15, $memory_4);
#line 231
undef($memory_15);
#line 232
$memory_15 = "cmds";
#line 232
$memory_15 = c_rt_lib::get_ref_hash($memory_3, $memory_15);
#line 232
array::push($memory_15, $memory_6);
#line 232
$memory_16 = "cmds";
#line 232
c_rt_lib::set_ref_hash($memory_3, $memory_16, $memory_15);
#line 232
undef($memory_16);
#line 232
undef($memory_15);
#line 233
$memory_4 = $memory_13;
#line 234
goto label_54;
#line 234
label_54:
#line 234
undef($memory_14);
#line 234
undef($memory_13);
#line 235
goto label_4;
#line 235
label_23:
#line 235
$memory_13 = c_rt_lib::ov_as($memory_11, 'if_goto');
#line 236
$memory_14 = $memory_13->{'src'};
#line 236
flow_graph_priv::read_reg($memory_3, $memory_14, $memory_5);
#line 236
undef($memory_14);
#line 237
$memory_14 = "next";
#line 237
$memory_14 = c_rt_lib::get_ref_hash($memory_3, $memory_14);
#line 237
$memory_15 = $memory_13->{'dest'};
#line 237
array::push($memory_14, $memory_15);
#line 237
undef($memory_15);
#line 237
$memory_15 = "next";
#line 237
c_rt_lib::set_ref_hash($memory_3, $memory_15, $memory_14);
#line 237
undef($memory_15);
#line 237
undef($memory_14);
#line 238
$memory_14 = "_I";
#line 238
$memory_14 = $memory_4 . $memory_14;
#line 239
$memory_16 = 1;
#line 239
$memory_16 = $memory_5 + $memory_16;
#line 239
$memory_15 = $memory_0->[$memory_16];
#line 239
undef($memory_16);
#line 239
$memory_15 = $memory_15->{'cmd'};
#line 239
$memory_15 = c_rt_lib::ov_is($memory_15, 'prt_lbl');
#line 239
$memory_15 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_15));
#line 239
if (c_rt_lib::check_true($memory_15)) {goto label_56;}
#line 240
$memory_17 = 1;
#line 240
$memory_17 = $memory_5 + $memory_17;
#line 240
$memory_16 = $memory_0->[$memory_17];
#line 240
undef($memory_17);
#line 240
$memory_16 = $memory_16->{'cmd'};
#line 240
$memory_16 = c_rt_lib::ov_as($memory_16, 'prt_lbl');
#line 240
$memory_14 = $memory_16;
#line 240
undef($memory_16);
#line 241
goto label_56;
#line 241
label_56:
#line 241
undef($memory_15);
#line 242
$memory_15 = "next";
#line 242
$memory_15 = c_rt_lib::get_ref_hash($memory_3, $memory_15);
#line 242
array::push($memory_15, $memory_14);
#line 242
$memory_16 = "next";
#line 242
c_rt_lib::set_ref_hash($memory_3, $memory_16, $memory_15);
#line 242
undef($memory_16);
#line 242
undef($memory_15);
#line 243
flow_graph_priv::add_block($memory_2, $memory_3, $memory_5, $memory_4);
#line 244
$memory_4 = $memory_14;
#line 244
undef($memory_14);
#line 244
undef($memory_13);
#line 245
goto label_4;
#line 245
label_24:
#line 245
$memory_13 = c_rt_lib::ov_as($memory_11, 'goto');
#line 246
$memory_14 = "next";
#line 246
$memory_14 = c_rt_lib::get_ref_hash($memory_3, $memory_14);
#line 246
array::push($memory_14, $memory_13);
#line 246
$memory_15 = "next";
#line 246
c_rt_lib::set_ref_hash($memory_3, $memory_15, $memory_14);
#line 246
undef($memory_15);
#line 246
undef($memory_14);
#line 247
flow_graph_priv::add_block($memory_2, $memory_3, $memory_5, $memory_4);
#line 248
$memory_14 = "_G";
#line 248
$memory_4 = $memory_4 . $memory_14;
#line 248
undef($memory_14);
#line 248
undef($memory_13);
#line 249
goto label_4;
#line 249
label_25:
#line 249
$memory_13 = c_rt_lib::ov_as($memory_11, 'clear');
#line 250
flow_graph_priv::clear_reg($memory_3, $memory_13, $memory_5);
#line 250
undef($memory_13);
#line 251
goto label_4;
#line 251
label_4:
#line 251
undef($memory_11);
#line 251
undef($memory_12);
#line 252
$memory_11 = 1;
#line 252
$memory_5 = $memory_5 + $memory_11;
#line 252
undef($memory_11);
#line 253
$memory_7 = $memory_7 + $memory_8;
#line 253
goto label_3;
#line 253
label_1:
#line 253
undef($memory_6);
#line 253
undef($memory_7);
#line 253
undef($memory_8);
#line 253
undef($memory_9);
#line 253
undef($memory_10);
#line 254
$memory_6 = 1;
#line 254
$memory_6 = $memory_5 - $memory_6;
#line 254
flow_graph_priv::add_block($memory_2, $memory_3, $memory_6, $memory_4);
#line 254
undef($memory_6);
#line 255
undef($memory_0);
#line 255
undef($memory_1);
#line 255
undef($memory_3);
#line 255
undef($memory_4);
#line 255
undef($memory_5);
#line 255
return $memory_2;
#line 255
undef($memory_2);
#line 255
undef($memory_3);
#line 255
undef($memory_4);
#line 255
undef($memory_5);
#line 255
undef($memory_0);
#line 255
undef($memory_1);
#line 255
return;
}
