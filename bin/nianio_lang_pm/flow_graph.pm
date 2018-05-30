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
#line 13
$memory_3 = {
	module => "nlasm",
	name => "cmd_t",
};
#line 13
$memory_3 = c_rt_lib::ov_mk_arg('ref', $memory_3);
#line 13
$memory_2 = ptd::arr($memory_3);
#line 13
undef($memory_3);
#line 14
$memory_3 = ptd::sim();
#line 15
$memory_4 = ptd::sim();
#line 16
$memory_6 = {
	module => "flow_graph",
	name => "reg_use_t",
};
#line 16
$memory_6 = c_rt_lib::ov_mk_arg('ref', $memory_6);
#line 16
$memory_5 = ptd::arr($memory_6);
#line 16
undef($memory_6);
#line 17
$memory_9 = ptd::sim();
#line 17
$memory_10 = ptd::none();
#line 17
$memory_8 = {write => $memory_9,clear => $memory_10,};
#line 17
undef($memory_9);
#line 17
undef($memory_10);
#line 17
$memory_7 = ptd::var($memory_8);
#line 17
undef($memory_8);
#line 17
$memory_6 = ptd::hash($memory_7);
#line 17
undef($memory_7);
#line 18
$memory_8 = ptd::sim();
#line 18
$memory_7 = ptd::arr($memory_8);
#line 18
undef($memory_8);
#line 19
$memory_9 = ptd::sim();
#line 19
$memory_8 = ptd::arr($memory_9);
#line 19
undef($memory_9);
#line 19
$memory_1 = {cmds => $memory_2,from => $memory_3,to => $memory_4,reg_uses => $memory_5,last_modif => $memory_6,prev => $memory_7,next => $memory_8,};
#line 19
undef($memory_2);
#line 19
undef($memory_3);
#line 19
undef($memory_4);
#line 19
undef($memory_5);
#line 19
undef($memory_6);
#line 19
undef($memory_7);
#line 19
undef($memory_8);
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

my $_block_t;
sub flow_graph::block_t() {
	$_block_t = flow_graph::__block_t() unless defined $_block_t;
	return $_block_t;
}

sub flow_graph::__reg_use_t() {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;
#line 25
$memory_2 = ptd::sim();
#line 26
$memory_3 = ptd::sim();
#line 27
$memory_6 = ptd::none();
#line 27
$memory_7 = ptd::none();
#line 27
$memory_8 = ptd::none();
#line 27
$memory_5 = {write => $memory_6,read => $memory_7,clear => $memory_8,};
#line 27
undef($memory_6);
#line 27
undef($memory_7);
#line 27
undef($memory_8);
#line 27
$memory_4 = ptd::var($memory_5);
#line 27
undef($memory_5);
#line 27
$memory_1 = {reg => $memory_2,cmd_nr => $memory_3,type => $memory_4,};
#line 27
undef($memory_2);
#line 27
undef($memory_3);
#line 27
undef($memory_4);
#line 27
$memory_0 = ptd::rec($memory_1);
#line 27
undef($memory_1);
#line 27
return $memory_0;
#line 27
undef($memory_0);
#line 27
return;
}

my $_reg_use_t;
sub flow_graph::reg_use_t() {
	$_reg_use_t = flow_graph::__reg_use_t() unless defined $_reg_use_t;
	return $_reg_use_t;
}

sub flow_graph::__state_t() {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;
#line 32
$memory_3 = {
	module => "flow_graph",
	name => "block_t",
};
#line 32
$memory_3 = c_rt_lib::ov_mk_arg('ref', $memory_3);
#line 32
$memory_2 = ptd::hash($memory_3);
#line 32
undef($memory_3);
#line 32
$memory_4 = ptd::sim();
#line 32
$memory_3 = ptd::arr($memory_4);
#line 32
undef($memory_4);
#line 32
$memory_1 = {map => $memory_2,tab => $memory_3,};
#line 32
undef($memory_2);
#line 32
undef($memory_3);
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

my $_state_t;
sub flow_graph::state_t() {
	$_state_t = flow_graph::__state_t() unless defined $_state_t;
	return $_state_t;
}

sub flow_graph::__blocks_t() {
my $memory_0;my $memory_1;
#line 36
$memory_1 = {
	module => "flow_graph",
	name => "block_t",
};
#line 36
$memory_1 = c_rt_lib::ov_mk_arg('ref', $memory_1);
#line 36
$memory_0 = ptd::arr($memory_1);
#line 36
undef($memory_1);
#line 36
return $memory_0;
#line 36
undef($memory_0);
#line 36
return;
}

my $_blocks_t;
sub flow_graph::blocks_t() {
	$_blocks_t = flow_graph::__blocks_t() unless defined $_blocks_t;
	return $_blocks_t;
}

sub flow_graph::make_blocks($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;$memory_0 = $_[0];$memory_1 = $_[1];
#line 41
$memory_2 = flow_graph_priv::mk_blocks($memory_0, $memory_1);
#line 42
$memory_3 = "map";
#line 42
$memory_3 = c_rt_lib::get_ref_hash($memory_2, $memory_3);
#line 42
$memory_4 = $memory_2->{'tab'};
#line 42
$memory_5 = 0;
#line 42
$memory_4 = $memory_4->[$memory_5];
#line 42
undef($memory_5);
#line 42
flow_graph_priv::set_prev_block($memory_3, $memory_4);
#line 42
undef($memory_4);
#line 42
$memory_4 = "map";
#line 42
c_rt_lib::set_ref_hash($memory_2, $memory_4, $memory_3);
#line 42
undef($memory_4);
#line 42
undef($memory_3);
#line 43
flow_graph_priv::remove_unused_block($memory_2);
#line 44
$memory_3 = flow_graph_priv::block_name_to_nr($memory_2);
#line 45
undef($memory_0);
#line 45
undef($memory_1);
#line 45
undef($memory_2);
#line 45
return $memory_3;
#line 45
undef($memory_2);
#line 45
undef($memory_3);
#line 45
undef($memory_0);
#line 45
undef($memory_1);
#line 45
return;
}

sub flow_graph_priv::block_name_to_nr($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;my $memory_13;my $memory_14;my $memory_15;my $memory_16;my $memory_17;$memory_0 = $_[0];
#line 49
$memory_1 = {};
#line 50
$memory_2 = $memory_0->{'tab'};
#line 51
$memory_3 = array::len($memory_2);
#line 51
$memory_4 = 0;
#line 51
$memory_5 = 1;
#line 51
label_5:
#line 51
$memory_6 = c_rt_lib::to_nl($memory_4 >= $memory_3);
#line 51
if (c_rt_lib::check_true($memory_6)) {goto label_13;}
#line 52
$memory_7 = $memory_2->[$memory_4];
#line 52
hash::set_value($memory_1, $memory_7, $memory_4);
#line 52
undef($memory_7);
#line 53
$memory_4 = $memory_4 + $memory_5;
#line 53
goto label_5;
#line 53
label_13:
#line 53
undef($memory_3);
#line 53
undef($memory_4);
#line 53
undef($memory_5);
#line 53
undef($memory_6);
#line 54
$memory_3 = [];
#line 55
$memory_5 = 0;
#line 55
$memory_6 = 1;
#line 55
$memory_7 = c_rt_lib::array_len($memory_2);
#line 55
label_22:
#line 55
$memory_8 = c_rt_lib::to_nl($memory_5 >= $memory_7);
#line 55
if (c_rt_lib::check_true($memory_8)) {goto label_83;}
#line 55
$memory_4 = $memory_2->[$memory_5];
#line 56
$memory_10 = $memory_0->{'map'};
#line 56
$memory_9 = hash::get_value($memory_10, $memory_4);
#line 56
undef($memory_10);
#line 57
$memory_10 = $memory_9->{'next'};
#line 58
$memory_11 = array::len($memory_10);
#line 58
$memory_12 = 0;
#line 58
$memory_13 = 1;
#line 58
label_33:
#line 58
$memory_14 = c_rt_lib::to_nl($memory_12 >= $memory_11);
#line 58
if (c_rt_lib::check_true($memory_14)) {goto label_45;}
#line 59
$memory_16 = $memory_10->[$memory_12];
#line 59
$memory_15 = hash::get_value($memory_1, $memory_16);
#line 59
undef($memory_16);
#line 59
$memory_16 = $memory_15;
#line 59
 if (c_rt_lib::get_arrcount($memory_10) > 1) {$memory_10 = [@{$memory_10}];}$memory_10->[$memory_12] = $memory_16;
#line 59
undef($memory_15);
#line 59
undef($memory_16);
#line 60
$memory_12 = $memory_12 + $memory_13;
#line 60
goto label_33;
#line 60
label_45:
#line 60
undef($memory_11);
#line 60
undef($memory_12);
#line 60
undef($memory_13);
#line 60
undef($memory_14);
#line 61
$memory_11 = $memory_10;
#line 61
 if (c_rt_lib::get_hashcount($memory_9) > 1) {$memory_9 = {%{$memory_9}};}$memory_9->{'next'} = $memory_11;
#line 61
undef($memory_11);
#line 62
$memory_11 = $memory_9->{'prev'};
#line 63
$memory_12 = array::len($memory_11);
#line 63
$memory_13 = 0;
#line 63
$memory_14 = 1;
#line 63
label_57:
#line 63
$memory_15 = c_rt_lib::to_nl($memory_13 >= $memory_12);
#line 63
if (c_rt_lib::check_true($memory_15)) {goto label_69;}
#line 64
$memory_17 = $memory_11->[$memory_13];
#line 64
$memory_16 = hash::get_value($memory_1, $memory_17);
#line 64
undef($memory_17);
#line 64
$memory_17 = $memory_16;
#line 64
 if (c_rt_lib::get_arrcount($memory_11) > 1) {$memory_11 = [@{$memory_11}];}$memory_11->[$memory_13] = $memory_17;
#line 64
undef($memory_16);
#line 64
undef($memory_17);
#line 65
$memory_13 = $memory_13 + $memory_14;
#line 65
goto label_57;
#line 65
label_69:
#line 65
undef($memory_12);
#line 65
undef($memory_13);
#line 65
undef($memory_14);
#line 65
undef($memory_15);
#line 66
$memory_12 = $memory_11;
#line 66
 if (c_rt_lib::get_hashcount($memory_9) > 1) {$memory_9 = {%{$memory_9}};}$memory_9->{'prev'} = $memory_12;
#line 66
undef($memory_12);
#line 67
array::push($memory_3, $memory_9);
#line 67
undef($memory_9);
#line 67
undef($memory_10);
#line 67
undef($memory_11);
#line 68
$memory_5 = $memory_5 + $memory_6;
#line 68
goto label_22;
#line 68
label_83:
#line 68
undef($memory_4);
#line 68
undef($memory_5);
#line 68
undef($memory_6);
#line 68
undef($memory_7);
#line 68
undef($memory_8);
#line 69
undef($memory_0);
#line 69
undef($memory_1);
#line 69
undef($memory_2);
#line 69
return $memory_3;
#line 69
undef($memory_1);
#line 69
undef($memory_2);
#line 69
undef($memory_3);
#line 69
undef($memory_0);
#line 69
return;
}

sub flow_graph::combine_blocks($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;$memory_0 = $_[0];
#line 73
$memory_1 = [];
#line 74
$memory_3 = 0;
#line 74
$memory_4 = 1;
#line 74
$memory_5 = c_rt_lib::array_len($memory_0);
#line 74
label_4:
#line 74
$memory_6 = c_rt_lib::to_nl($memory_3 >= $memory_5);
#line 74
if (c_rt_lib::check_true($memory_6)) {goto label_13;}
#line 74
$memory_2 = $memory_0->[$memory_3];
#line 75
$memory_7 = $memory_2->{'cmds'};
#line 75
array::append($memory_1, $memory_7);
#line 75
undef($memory_7);
#line 76
$memory_3 = $memory_3 + $memory_4;
#line 76
goto label_4;
#line 76
label_13:
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
#line 77
$memory_3 = array::len($memory_1);
#line 77
$memory_4 = 1;
#line 77
$memory_3 = $memory_3 - $memory_4;
#line 77
undef($memory_4);
#line 77
$memory_2 = $memory_1->[$memory_3];
#line 77
undef($memory_3);
#line 77
$memory_2 = $memory_2->{'cmd'};
#line 77
$memory_2 = c_rt_lib::ov_is($memory_2, 'return');
#line 77
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 77
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 77
if (c_rt_lib::check_true($memory_2)) {goto label_41;}
#line 78
$memory_4 = c_rt_lib::ov_mk_none('emp');
#line 78
$memory_4 = c_rt_lib::ov_mk_arg('return', $memory_4);
#line 78
$memory_5 = c_rt_lib::ov_mk_none('none');
#line 78
$memory_6 = nlasm::empty_debug();
#line 78
$memory_3 = {cmd => $memory_4,annotation => $memory_5,debug => $memory_6,};
#line 78
undef($memory_4);
#line 78
undef($memory_5);
#line 78
undef($memory_6);
#line 78
array::push($memory_1, $memory_3);
#line 78
undef($memory_3);
#line 79
goto label_41;
#line 79
label_41:
#line 79
undef($memory_2);
#line 80
undef($memory_0);
#line 80
return $memory_1;
#line 80
undef($memory_1);
#line 80
undef($memory_0);
#line 80
return;
}

sub flow_graph_priv::remove_unused_block($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;my $memory_13;my $memory_14;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);
#line 84
$memory_1 = [];
#line 85
$memory_2 = {};
#line 86
$memory_3 = c_rt_lib::to_nl(1);
#line 87
$memory_4 = $memory_0->{'map'};
#line 88
$memory_5 = $memory_0->{'tab'};
#line 88
$memory_7 = 0;
#line 88
$memory_8 = 1;
#line 88
$memory_9 = c_rt_lib::array_len($memory_5);
#line 88
label_8:
#line 88
$memory_10 = c_rt_lib::to_nl($memory_7 >= $memory_9);
#line 88
if (c_rt_lib::check_true($memory_10)) {goto label_45;}
#line 88
$memory_6 = $memory_5->[$memory_7];
#line 89
$memory_11 = hash::get_value($memory_4, $memory_6);
#line 90
$memory_13 = $memory_11->{'prev'};
#line 90
$memory_12 = array::len($memory_13);
#line 90
undef($memory_13);
#line 90
$memory_13 = 0;
#line 90
$memory_12 = c_rt_lib::to_nl($memory_12 == $memory_13);
#line 90
undef($memory_13);
#line 90
$memory_12 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_12));
#line 90
if (c_rt_lib::check_true($memory_12)) {goto label_37;}
#line 91
$memory_13 = $memory_3;
#line 91
$memory_13 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_13));
#line 91
if (c_rt_lib::check_true($memory_13)) {goto label_28;}
#line 92
$memory_14 = c_rt_lib::to_nl(0);
#line 92
$memory_3 = $memory_14;
#line 92
undef($memory_14);
#line 93
goto label_34;
#line 93
label_28:
#line 94
undef($memory_11);
#line 94
undef($memory_12);
#line 94
undef($memory_13);
#line 94
goto label_42;
#line 95
goto label_34;
#line 95
label_34:
#line 95
undef($memory_13);
#line 96
goto label_37;
#line 96
label_37:
#line 96
undef($memory_12);
#line 97
hash::set_value($memory_2, $memory_6, $memory_11);
#line 98
array::push($memory_1, $memory_6);
#line 98
undef($memory_11);
#line 98
label_42:
#line 99
$memory_7 = $memory_7 + $memory_8;
#line 99
goto label_8;
#line 99
label_45:
#line 99
undef($memory_5);
#line 99
undef($memory_6);
#line 99
undef($memory_7);
#line 99
undef($memory_8);
#line 99
undef($memory_9);
#line 99
undef($memory_10);
#line 100
$memory_5 = $memory_2;
#line 100
 if (c_rt_lib::get_hashcount($memory_0) > 1) {$memory_0 = {%{$memory_0}};}$memory_0->{'map'} = $memory_5;
#line 100
undef($memory_5);
#line 101
$memory_5 = $memory_1;
#line 101
 if (c_rt_lib::get_hashcount($memory_0) > 1) {$memory_0 = {%{$memory_0}};}$memory_0->{'tab'} = $memory_5;
#line 101
undef($memory_5);
#line 101
undef($memory_1);
#line 101
undef($memory_2);
#line 101
undef($memory_3);
#line 101
undef($memory_4);
#line 101
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub flow_graph_priv::set_prev_block($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];
#line 105
$memory_2 = hash::get_value($memory_0, $memory_1);
#line 106
$memory_4 = $memory_2->{'prev'};
#line 106
$memory_3 = array::len($memory_4);
#line 106
undef($memory_4);
#line 106
$memory_4 = 1;
#line 106
$memory_3 = c_rt_lib::to_nl($memory_3 <= $memory_4);
#line 106
undef($memory_4);
#line 106
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 106
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 106
if (c_rt_lib::check_true($memory_3)) {goto label_15;}
#line 106
undef($memory_1);
#line 106
undef($memory_2);
#line 106
undef($memory_3);
#line 106
$_[0] = $memory_0;return;
#line 106
goto label_15;
#line 106
label_15:
#line 106
undef($memory_3);
#line 107
$memory_3 = $memory_2->{'next'};
#line 107
$memory_5 = 0;
#line 107
$memory_6 = 1;
#line 107
$memory_7 = c_rt_lib::array_len($memory_3);
#line 107
label_21:
#line 107
$memory_8 = c_rt_lib::to_nl($memory_5 >= $memory_7);
#line 107
if (c_rt_lib::check_true($memory_8)) {goto label_38;}
#line 107
$memory_4 = $memory_3->[$memory_5];
#line 108
$memory_9 = hash::get_value($memory_0, $memory_4);
#line 109
$memory_10 = "prev";
#line 109
$memory_10 = c_rt_lib::get_ref_hash($memory_9, $memory_10);
#line 109
array::push($memory_10, $memory_1);
#line 109
$memory_11 = "prev";
#line 109
c_rt_lib::set_ref_hash($memory_9, $memory_11, $memory_10);
#line 109
undef($memory_11);
#line 109
undef($memory_10);
#line 110
hash::set_value($memory_0, $memory_4, $memory_9);
#line 111
flow_graph_priv::set_prev_block($memory_0, $memory_4);
#line 111
undef($memory_9);
#line 112
$memory_5 = $memory_5 + $memory_6;
#line 112
goto label_21;
#line 112
label_38:
#line 112
undef($memory_3);
#line 112
undef($memory_4);
#line 112
undef($memory_5);
#line 112
undef($memory_6);
#line 112
undef($memory_7);
#line 112
undef($memory_8);
#line 112
undef($memory_2);
#line 112
undef($memory_1);
#line 112
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub flow_graph_priv::mk_block($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;$memory_0 = $_[0];
#line 116
$memory_2 = [];
#line 116
$memory_3 = [];
#line 116
$memory_4 = 1;
#line 116
$memory_4 = -$memory_4;
#line 116
$memory_5 = [];
#line 116
$memory_6 = {};
#line 116
$memory_7 = [];
#line 116
$memory_1 = {cmds => $memory_2,prev => $memory_3,from => $memory_0,to => $memory_4,reg_uses => $memory_5,last_modif => $memory_6,next => $memory_7,};
#line 116
undef($memory_2);
#line 116
undef($memory_3);
#line 116
undef($memory_4);
#line 116
undef($memory_5);
#line 116
undef($memory_6);
#line 116
undef($memory_7);
#line 116
undef($memory_0);
#line 116
return $memory_1;
#line 116
undef($memory_1);
#line 116
undef($memory_0);
#line 116
return;
}

sub flow_graph_priv::add_block($$$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];Scalar::Util::weaken($_[1]) if ref($_[1]);$memory_2 = $_[2];$memory_3 = $_[3];
#line 121
$memory_4 = $memory_2;
#line 121
 if (c_rt_lib::get_hashcount($memory_1) > 1) {$memory_1 = {%{$memory_1}};}$memory_1->{'to'} = $memory_4;
#line 121
undef($memory_4);
#line 122
$memory_4 = "map";
#line 122
$memory_4 = c_rt_lib::get_ref_hash($memory_0, $memory_4);
#line 122
hash::set_value($memory_4, $memory_3, $memory_1);
#line 122
$memory_5 = "map";
#line 122
c_rt_lib::set_ref_hash($memory_0, $memory_5, $memory_4);
#line 122
undef($memory_5);
#line 122
undef($memory_4);
#line 123
$memory_4 = "tab";
#line 123
$memory_4 = c_rt_lib::get_ref_hash($memory_0, $memory_4);
#line 123
array::push($memory_4, $memory_3);
#line 123
$memory_5 = "tab";
#line 123
c_rt_lib::set_ref_hash($memory_0, $memory_5, $memory_4);
#line 123
undef($memory_5);
#line 123
undef($memory_4);
#line 124
$memory_5 = 1;
#line 124
$memory_5 = $memory_2 + $memory_5;
#line 124
$memory_4 = flow_graph_priv::mk_block($memory_5);
#line 124
undef($memory_5);
#line 124
$memory_1 = $memory_4;
#line 124
undef($memory_4);
#line 124
undef($memory_2);
#line 124
undef($memory_3);
#line 124
$_[0] = $memory_0;$_[1] = $memory_1;return;
$_[0] = $memory_0;$_[1] = $memory_1;}

sub flow_graph_priv::read_reg($$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];$memory_2 = $_[2];
#line 128
$memory_3 = "";
#line 128
$memory_3 = c_rt_lib::to_nl($memory_1 eq $memory_3);
#line 128
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 128
if (c_rt_lib::check_true($memory_3)) {goto label_9;}
#line 128
undef($memory_1);
#line 128
undef($memory_2);
#line 128
undef($memory_3);
#line 128
$_[0] = $memory_0;return;
#line 128
goto label_9;
#line 128
label_9:
#line 128
undef($memory_3);
#line 129
$memory_3 = "reg_uses";
#line 129
$memory_3 = c_rt_lib::get_ref_hash($memory_0, $memory_3);
#line 129
$memory_5 = c_rt_lib::ov_mk_none('read');
#line 129
$memory_4 = {reg => $memory_1,cmd_nr => $memory_2,type => $memory_5,};
#line 129
undef($memory_5);
#line 129
array::push($memory_3, $memory_4);
#line 129
undef($memory_4);
#line 129
$memory_4 = "reg_uses";
#line 129
c_rt_lib::set_ref_hash($memory_0, $memory_4, $memory_3);
#line 129
undef($memory_4);
#line 129
undef($memory_3);
#line 129
undef($memory_1);
#line 129
undef($memory_2);
#line 129
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub flow_graph_priv::write_reg($$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];$memory_2 = $_[2];
#line 133
$memory_3 = "";
#line 133
$memory_3 = c_rt_lib::to_nl($memory_1 eq $memory_3);
#line 133
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 133
if (c_rt_lib::check_true($memory_3)) {goto label_9;}
#line 133
undef($memory_1);
#line 133
undef($memory_2);
#line 133
undef($memory_3);
#line 133
$_[0] = $memory_0;return;
#line 133
goto label_9;
#line 133
label_9:
#line 133
undef($memory_3);
#line 134
$memory_3 = "reg_uses";
#line 134
$memory_3 = c_rt_lib::get_ref_hash($memory_0, $memory_3);
#line 134
$memory_5 = c_rt_lib::ov_mk_none('write');
#line 134
$memory_4 = {reg => $memory_1,cmd_nr => $memory_2,type => $memory_5,};
#line 134
undef($memory_5);
#line 134
array::push($memory_3, $memory_4);
#line 134
undef($memory_4);
#line 134
$memory_4 = "reg_uses";
#line 134
c_rt_lib::set_ref_hash($memory_0, $memory_4, $memory_3);
#line 134
undef($memory_4);
#line 134
undef($memory_3);
#line 135
$memory_3 = "last_modif";
#line 135
$memory_3 = c_rt_lib::get_ref_hash($memory_0, $memory_3);
#line 135
$memory_4 = c_rt_lib::ov_mk_arg('write', $memory_2);
#line 135
hash::set_value($memory_3, $memory_1, $memory_4);
#line 135
undef($memory_4);
#line 135
$memory_4 = "last_modif";
#line 135
c_rt_lib::set_ref_hash($memory_0, $memory_4, $memory_3);
#line 135
undef($memory_4);
#line 135
undef($memory_3);
#line 135
undef($memory_1);
#line 135
undef($memory_2);
#line 135
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
if (c_rt_lib::check_true($memory_3)) {goto label_9;}
#line 139
undef($memory_1);
#line 139
undef($memory_2);
#line 139
undef($memory_3);
#line 139
$_[0] = $memory_0;return;
#line 139
goto label_9;
#line 139
label_9:
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
#line 145
$memory_3 = {};
#line 145
$memory_4 = [];
#line 145
$memory_2 = {map => $memory_3,tab => $memory_4,};
#line 145
undef($memory_3);
#line 145
undef($memory_4);
#line 146
$memory_4 = 0;
#line 146
$memory_3 = flow_graph_priv::mk_block($memory_4);
#line 146
undef($memory_4);
#line 147
$memory_4 = "label_init";
#line 148
$memory_5 = 0;
#line 149
$memory_7 = 0;
#line 149
$memory_8 = 1;
#line 149
$memory_9 = c_rt_lib::array_len($memory_0);
#line 149
label_13:
#line 149
$memory_10 = c_rt_lib::to_nl($memory_7 >= $memory_9);
#line 149
if (c_rt_lib::check_true($memory_10)) {goto label_497;}
#line 149
$memory_6 = $memory_0->[$memory_7];
#line 150
$memory_11 = "cmds";
#line 150
$memory_11 = c_rt_lib::get_ref_hash($memory_3, $memory_11);
#line 150
array::push($memory_11, $memory_6);
#line 150
$memory_12 = "cmds";
#line 150
c_rt_lib::set_ref_hash($memory_3, $memory_12, $memory_11);
#line 150
undef($memory_12);
#line 150
undef($memory_11);
#line 151
$memory_11 = $memory_6->{'cmd'};
#line 151
$memory_12 = c_rt_lib::ov_is($memory_11, 'arr_decl');
#line 151
if (c_rt_lib::check_true($memory_12)) {goto label_70;}
#line 156
$memory_12 = c_rt_lib::ov_is($memory_11, 'hash_decl');
#line 156
if (c_rt_lib::check_true($memory_12)) {goto label_95;}
#line 161
$memory_12 = c_rt_lib::ov_is($memory_11, 'call');
#line 161
if (c_rt_lib::check_true($memory_12)) {goto label_122;}
#line 176
$memory_12 = c_rt_lib::ov_is($memory_11, 'una_op');
#line 176
if (c_rt_lib::check_true($memory_12)) {goto label_200;}
#line 179
$memory_12 = c_rt_lib::ov_is($memory_11, 'bin_op');
#line 179
if (c_rt_lib::check_true($memory_12)) {goto label_210;}
#line 183
$memory_12 = c_rt_lib::ov_is($memory_11, 'ov_is');
#line 183
if (c_rt_lib::check_true($memory_12)) {goto label_223;}
#line 186
$memory_12 = c_rt_lib::ov_is($memory_11, 'ov_as');
#line 186
if (c_rt_lib::check_true($memory_12)) {goto label_233;}
#line 189
$memory_12 = c_rt_lib::ov_is($memory_11, 'func');
#line 189
if (c_rt_lib::check_true($memory_12)) {goto label_243;}
#line 191
$memory_12 = c_rt_lib::ov_is($memory_11, 'move');
#line 191
if (c_rt_lib::check_true($memory_12)) {goto label_250;}
#line 194
$memory_12 = c_rt_lib::ov_is($memory_11, 'load_const');
#line 194
if (c_rt_lib::check_true($memory_12)) {goto label_260;}
#line 196
$memory_12 = c_rt_lib::ov_is($memory_11, 'get_frm_idx');
#line 196
if (c_rt_lib::check_true($memory_12)) {goto label_267;}
#line 200
$memory_12 = c_rt_lib::ov_is($memory_11, 'set_at_idx');
#line 200
if (c_rt_lib::check_true($memory_12)) {goto label_280;}
#line 205
$memory_12 = c_rt_lib::ov_is($memory_11, 'get_val');
#line 205
if (c_rt_lib::check_true($memory_12)) {goto label_296;}
#line 208
$memory_12 = c_rt_lib::ov_is($memory_11, 'set_val');
#line 208
if (c_rt_lib::check_true($memory_12)) {goto label_306;}
#line 212
$memory_12 = c_rt_lib::ov_is($memory_11, 'ov_mk');
#line 212
if (c_rt_lib::check_true($memory_12)) {goto label_319;}
#line 215
$memory_12 = c_rt_lib::ov_is($memory_11, 'return');
#line 215
if (c_rt_lib::check_true($memory_12)) {goto label_337;}
#line 224
$memory_12 = c_rt_lib::ov_is($memory_11, 'die');
#line 224
if (c_rt_lib::check_true($memory_12)) {goto label_377;}
#line 228
$memory_12 = c_rt_lib::ov_is($memory_11, 'prt_lbl');
#line 228
if (c_rt_lib::check_true($memory_12)) {goto label_386;}
#line 236
$memory_12 = c_rt_lib::ov_is($memory_11, 'if_goto');
#line 236
if (c_rt_lib::check_true($memory_12)) {goto label_422;}
#line 246
$memory_12 = c_rt_lib::ov_is($memory_11, 'goto');
#line 246
if (c_rt_lib::check_true($memory_12)) {goto label_469;}
#line 250
$memory_12 = c_rt_lib::ov_is($memory_11, 'clear');
#line 250
if (c_rt_lib::check_true($memory_12)) {goto label_484;}
#line 250
$memory_12 = "NOMATCHALERT";
#line 250
$memory_12 = [$memory_12,$memory_11];
#line 250
die(dfile::ssave($memory_12));
#line 151
label_70:
#line 151
$memory_13 = c_rt_lib::ov_as($memory_11, 'arr_decl');
#line 152
$memory_14 = $memory_13->{'src'};
#line 152
$memory_16 = 0;
#line 152
$memory_17 = 1;
#line 152
$memory_18 = c_rt_lib::array_len($memory_14);
#line 152
label_76:
#line 152
$memory_19 = c_rt_lib::to_nl($memory_16 >= $memory_18);
#line 152
if (c_rt_lib::check_true($memory_19)) {goto label_83;}
#line 152
$memory_15 = $memory_14->[$memory_16];
#line 153
flow_graph_priv::read_reg($memory_3, $memory_15, $memory_5);
#line 154
$memory_16 = $memory_16 + $memory_17;
#line 154
goto label_76;
#line 154
label_83:
#line 154
undef($memory_14);
#line 154
undef($memory_15);
#line 154
undef($memory_16);
#line 154
undef($memory_17);
#line 154
undef($memory_18);
#line 154
undef($memory_19);
#line 155
$memory_14 = $memory_13->{'dest'};
#line 155
flow_graph_priv::write_reg($memory_3, $memory_14, $memory_5);
#line 155
undef($memory_14);
#line 155
undef($memory_13);
#line 156
goto label_489;
#line 156
label_95:
#line 156
$memory_13 = c_rt_lib::ov_as($memory_11, 'hash_decl');
#line 157
$memory_14 = $memory_13->{'src'};
#line 157
$memory_16 = 0;
#line 157
$memory_17 = 1;
#line 157
$memory_18 = c_rt_lib::array_len($memory_14);
#line 157
label_101:
#line 157
$memory_19 = c_rt_lib::to_nl($memory_16 >= $memory_18);
#line 157
if (c_rt_lib::check_true($memory_19)) {goto label_110;}
#line 157
$memory_15 = $memory_14->[$memory_16];
#line 158
$memory_20 = $memory_15->{'val'};
#line 158
flow_graph_priv::read_reg($memory_3, $memory_20, $memory_5);
#line 158
undef($memory_20);
#line 159
$memory_16 = $memory_16 + $memory_17;
#line 159
goto label_101;
#line 159
label_110:
#line 159
undef($memory_14);
#line 159
undef($memory_15);
#line 159
undef($memory_16);
#line 159
undef($memory_17);
#line 159
undef($memory_18);
#line 159
undef($memory_19);
#line 160
$memory_14 = $memory_13->{'dest'};
#line 160
flow_graph_priv::write_reg($memory_3, $memory_14, $memory_5);
#line 160
undef($memory_14);
#line 160
undef($memory_13);
#line 161
goto label_489;
#line 161
label_122:
#line 161
$memory_13 = c_rt_lib::ov_as($memory_11, 'call');
#line 162
$memory_14 = $memory_13->{'args'};
#line 162
$memory_16 = 0;
#line 162
$memory_17 = 1;
#line 162
$memory_18 = c_rt_lib::array_len($memory_14);
#line 162
label_128:
#line 162
$memory_19 = c_rt_lib::to_nl($memory_16 >= $memory_18);
#line 162
if (c_rt_lib::check_true($memory_19)) {goto label_153;}
#line 162
$memory_15 = $memory_14->[$memory_16];
#line 163
$memory_20 = c_rt_lib::ov_is($memory_15, 'val');
#line 163
if (c_rt_lib::check_true($memory_20)) {goto label_139;}
#line 165
$memory_20 = c_rt_lib::ov_is($memory_15, 'ref');
#line 165
if (c_rt_lib::check_true($memory_20)) {goto label_144;}
#line 165
$memory_20 = "NOMATCHALERT";
#line 165
$memory_20 = [$memory_20,$memory_15];
#line 165
die(dfile::ssave($memory_20));
#line 163
label_139:
#line 163
$memory_21 = c_rt_lib::ov_as($memory_15, 'val');
#line 164
flow_graph_priv::read_reg($memory_3, $memory_21, $memory_5);
#line 164
undef($memory_21);
#line 165
goto label_149;
#line 165
label_144:
#line 165
$memory_21 = c_rt_lib::ov_as($memory_15, 'ref');
#line 166
flow_graph_priv::read_reg($memory_3, $memory_21, $memory_5);
#line 166
undef($memory_21);
#line 167
goto label_149;
#line 167
label_149:
#line 167
undef($memory_20);
#line 168
$memory_16 = $memory_16 + $memory_17;
#line 168
goto label_128;
#line 168
label_153:
#line 168
undef($memory_14);
#line 168
undef($memory_15);
#line 168
undef($memory_16);
#line 168
undef($memory_17);
#line 168
undef($memory_18);
#line 168
undef($memory_19);
#line 169
$memory_14 = $memory_13->{'args'};
#line 169
$memory_16 = 0;
#line 169
$memory_17 = 1;
#line 169
$memory_18 = c_rt_lib::array_len($memory_14);
#line 169
label_164:
#line 169
$memory_19 = c_rt_lib::to_nl($memory_16 >= $memory_18);
#line 169
if (c_rt_lib::check_true($memory_19)) {goto label_188;}
#line 169
$memory_15 = $memory_14->[$memory_16];
#line 170
$memory_20 = c_rt_lib::ov_is($memory_15, 'val');
#line 170
if (c_rt_lib::check_true($memory_20)) {goto label_175;}
#line 171
$memory_20 = c_rt_lib::ov_is($memory_15, 'ref');
#line 171
if (c_rt_lib::check_true($memory_20)) {goto label_179;}
#line 171
$memory_20 = "NOMATCHALERT";
#line 171
$memory_20 = [$memory_20,$memory_15];
#line 171
die(dfile::ssave($memory_20));
#line 170
label_175:
#line 170
$memory_21 = c_rt_lib::ov_as($memory_15, 'val');
#line 170
undef($memory_21);
#line 171
goto label_184;
#line 171
label_179:
#line 171
$memory_21 = c_rt_lib::ov_as($memory_15, 'ref');
#line 172
flow_graph_priv::write_reg($memory_3, $memory_21, $memory_5);
#line 172
undef($memory_21);
#line 173
goto label_184;
#line 173
label_184:
#line 173
undef($memory_20);
#line 174
$memory_16 = $memory_16 + $memory_17;
#line 174
goto label_164;
#line 174
label_188:
#line 174
undef($memory_14);
#line 174
undef($memory_15);
#line 174
undef($memory_16);
#line 174
undef($memory_17);
#line 174
undef($memory_18);
#line 174
undef($memory_19);
#line 175
$memory_14 = $memory_13->{'dest'};
#line 175
flow_graph_priv::write_reg($memory_3, $memory_14, $memory_5);
#line 175
undef($memory_14);
#line 175
undef($memory_13);
#line 176
goto label_489;
#line 176
label_200:
#line 176
$memory_13 = c_rt_lib::ov_as($memory_11, 'una_op');
#line 177
$memory_14 = $memory_13->{'src'};
#line 177
flow_graph_priv::read_reg($memory_3, $memory_14, $memory_5);
#line 177
undef($memory_14);
#line 178
$memory_14 = $memory_13->{'dest'};
#line 178
flow_graph_priv::write_reg($memory_3, $memory_14, $memory_5);
#line 178
undef($memory_14);
#line 178
undef($memory_13);
#line 179
goto label_489;
#line 179
label_210:
#line 179
$memory_13 = c_rt_lib::ov_as($memory_11, 'bin_op');
#line 180
$memory_14 = $memory_13->{'left'};
#line 180
flow_graph_priv::read_reg($memory_3, $memory_14, $memory_5);
#line 180
undef($memory_14);
#line 181
$memory_14 = $memory_13->{'right'};
#line 181
flow_graph_priv::read_reg($memory_3, $memory_14, $memory_5);
#line 181
undef($memory_14);
#line 182
$memory_14 = $memory_13->{'dest'};
#line 182
flow_graph_priv::write_reg($memory_3, $memory_14, $memory_5);
#line 182
undef($memory_14);
#line 182
undef($memory_13);
#line 183
goto label_489;
#line 183
label_223:
#line 183
$memory_13 = c_rt_lib::ov_as($memory_11, 'ov_is');
#line 184
$memory_14 = $memory_13->{'src'};
#line 184
flow_graph_priv::read_reg($memory_3, $memory_14, $memory_5);
#line 184
undef($memory_14);
#line 185
$memory_14 = $memory_13->{'dest'};
#line 185
flow_graph_priv::write_reg($memory_3, $memory_14, $memory_5);
#line 185
undef($memory_14);
#line 185
undef($memory_13);
#line 186
goto label_489;
#line 186
label_233:
#line 186
$memory_13 = c_rt_lib::ov_as($memory_11, 'ov_as');
#line 187
$memory_14 = $memory_13->{'src'};
#line 187
flow_graph_priv::read_reg($memory_3, $memory_14, $memory_5);
#line 187
undef($memory_14);
#line 188
$memory_14 = $memory_13->{'dest'};
#line 188
flow_graph_priv::write_reg($memory_3, $memory_14, $memory_5);
#line 188
undef($memory_14);
#line 188
undef($memory_13);
#line 189
goto label_489;
#line 189
label_243:
#line 189
$memory_13 = c_rt_lib::ov_as($memory_11, 'func');
#line 190
$memory_14 = $memory_13->{'dest'};
#line 190
flow_graph_priv::write_reg($memory_3, $memory_14, $memory_5);
#line 190
undef($memory_14);
#line 190
undef($memory_13);
#line 191
goto label_489;
#line 191
label_250:
#line 191
$memory_13 = c_rt_lib::ov_as($memory_11, 'move');
#line 192
$memory_14 = $memory_13->{'src'};
#line 192
flow_graph_priv::read_reg($memory_3, $memory_14, $memory_5);
#line 192
undef($memory_14);
#line 193
$memory_14 = $memory_13->{'dest'};
#line 193
flow_graph_priv::write_reg($memory_3, $memory_14, $memory_5);
#line 193
undef($memory_14);
#line 193
undef($memory_13);
#line 194
goto label_489;
#line 194
label_260:
#line 194
$memory_13 = c_rt_lib::ov_as($memory_11, 'load_const');
#line 195
$memory_14 = $memory_13->{'dest'};
#line 195
flow_graph_priv::write_reg($memory_3, $memory_14, $memory_5);
#line 195
undef($memory_14);
#line 195
undef($memory_13);
#line 196
goto label_489;
#line 196
label_267:
#line 196
$memory_13 = c_rt_lib::ov_as($memory_11, 'get_frm_idx');
#line 197
$memory_14 = $memory_13->{'src'};
#line 197
flow_graph_priv::read_reg($memory_3, $memory_14, $memory_5);
#line 197
undef($memory_14);
#line 198
$memory_14 = $memory_13->{'idx'};
#line 198
flow_graph_priv::read_reg($memory_3, $memory_14, $memory_5);
#line 198
undef($memory_14);
#line 199
$memory_14 = $memory_13->{'dest'};
#line 199
flow_graph_priv::write_reg($memory_3, $memory_14, $memory_5);
#line 199
undef($memory_14);
#line 199
undef($memory_13);
#line 200
goto label_489;
#line 200
label_280:
#line 200
$memory_13 = c_rt_lib::ov_as($memory_11, 'set_at_idx');
#line 201
$memory_14 = $memory_13->{'src'};
#line 201
flow_graph_priv::read_reg($memory_3, $memory_14, $memory_5);
#line 201
undef($memory_14);
#line 202
$memory_14 = $memory_13->{'idx'};
#line 202
flow_graph_priv::read_reg($memory_3, $memory_14, $memory_5);
#line 202
undef($memory_14);
#line 203
$memory_14 = $memory_13->{'val'};
#line 203
flow_graph_priv::read_reg($memory_3, $memory_14, $memory_5);
#line 203
undef($memory_14);
#line 204
$memory_14 = $memory_13->{'src'};
#line 204
flow_graph_priv::write_reg($memory_3, $memory_14, $memory_5);
#line 204
undef($memory_14);
#line 204
undef($memory_13);
#line 205
goto label_489;
#line 205
label_296:
#line 205
$memory_13 = c_rt_lib::ov_as($memory_11, 'get_val');
#line 206
$memory_14 = $memory_13->{'src'};
#line 206
flow_graph_priv::read_reg($memory_3, $memory_14, $memory_5);
#line 206
undef($memory_14);
#line 207
$memory_14 = $memory_13->{'dest'};
#line 207
flow_graph_priv::write_reg($memory_3, $memory_14, $memory_5);
#line 207
undef($memory_14);
#line 207
undef($memory_13);
#line 208
goto label_489;
#line 208
label_306:
#line 208
$memory_13 = c_rt_lib::ov_as($memory_11, 'set_val');
#line 209
$memory_14 = $memory_13->{'src'};
#line 209
flow_graph_priv::read_reg($memory_3, $memory_14, $memory_5);
#line 209
undef($memory_14);
#line 210
$memory_14 = $memory_13->{'val'};
#line 210
flow_graph_priv::read_reg($memory_3, $memory_14, $memory_5);
#line 210
undef($memory_14);
#line 211
$memory_14 = $memory_13->{'src'};
#line 211
flow_graph_priv::write_reg($memory_3, $memory_14, $memory_5);
#line 211
undef($memory_14);
#line 211
undef($memory_13);
#line 212
goto label_489;
#line 212
label_319:
#line 212
$memory_13 = c_rt_lib::ov_as($memory_11, 'ov_mk');
#line 213
$memory_14 = $memory_13->{'src'};
#line 213
$memory_14 = c_rt_lib::ov_is($memory_14, 'arg');
#line 213
$memory_14 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_14));
#line 213
if (c_rt_lib::check_true($memory_14)) {goto label_330;}
#line 213
$memory_15 = $memory_13->{'src'};
#line 213
$memory_15 = c_rt_lib::ov_as($memory_15, 'arg');
#line 213
flow_graph_priv::read_reg($memory_3, $memory_15, $memory_5);
#line 213
undef($memory_15);
#line 213
goto label_330;
#line 213
label_330:
#line 213
undef($memory_14);
#line 214
$memory_14 = $memory_13->{'dest'};
#line 214
flow_graph_priv::write_reg($memory_3, $memory_14, $memory_5);
#line 214
undef($memory_14);
#line 214
undef($memory_13);
#line 215
goto label_489;
#line 215
label_337:
#line 215
$memory_13 = c_rt_lib::ov_as($memory_11, 'return');
#line 216
$memory_14 = $memory_13;
#line 216
$memory_14 = c_rt_lib::ov_is($memory_14, 'val');
#line 216
$memory_14 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_14));
#line 216
if (c_rt_lib::check_true($memory_14)) {goto label_348;}
#line 216
$memory_15 = $memory_13;
#line 216
$memory_15 = c_rt_lib::ov_as($memory_15, 'val');
#line 216
flow_graph_priv::read_reg($memory_3, $memory_15, $memory_5);
#line 216
undef($memory_15);
#line 216
goto label_348;
#line 216
label_348:
#line 216
undef($memory_14);
#line 217
$memory_14 = array::len($memory_1);
#line 217
$memory_15 = 0;
#line 217
$memory_16 = 1;
#line 217
label_353:
#line 217
$memory_17 = c_rt_lib::to_nl($memory_15 >= $memory_14);
#line 217
if (c_rt_lib::check_true($memory_17)) {goto label_366;}
#line 218
$memory_18 = $memory_1->[$memory_15];
#line 218
$memory_18 = c_rt_lib::ov_is($memory_18, 'ref');
#line 218
$memory_18 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_18));
#line 218
if (c_rt_lib::check_true($memory_18)) {goto label_362;}
#line 219
flow_graph_priv::read_reg($memory_3, $memory_15, $memory_5);
#line 220
goto label_362;
#line 220
label_362:
#line 220
undef($memory_18);
#line 221
$memory_15 = $memory_15 + $memory_16;
#line 221
goto label_353;
#line 221
label_366:
#line 221
undef($memory_14);
#line 221
undef($memory_15);
#line 221
undef($memory_16);
#line 221
undef($memory_17);
#line 222
flow_graph_priv::add_block($memory_2, $memory_3, $memory_5, $memory_4);
#line 223
$memory_14 = "_R";
#line 223
$memory_4 = $memory_4 . $memory_14;
#line 223
undef($memory_14);
#line 223
undef($memory_13);
#line 224
goto label_489;
#line 224
label_377:
#line 224
$memory_13 = c_rt_lib::ov_as($memory_11, 'die');
#line 225
flow_graph_priv::read_reg($memory_3, $memory_13, $memory_5);
#line 226
flow_graph_priv::add_block($memory_2, $memory_3, $memory_5, $memory_4);
#line 227
$memory_14 = "_D";
#line 227
$memory_4 = $memory_4 . $memory_14;
#line 227
undef($memory_14);
#line 227
undef($memory_13);
#line 228
goto label_489;
#line 228
label_386:
#line 228
$memory_13 = c_rt_lib::ov_as($memory_11, 'prt_lbl');
#line 229
$memory_14 = c_rt_lib::to_nl($memory_13 ne $memory_4);
#line 229
$memory_14 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_14));
#line 229
if (c_rt_lib::check_true($memory_14)) {goto label_418;}
#line 230
$memory_15 = "next";
#line 230
$memory_15 = c_rt_lib::get_ref_hash($memory_3, $memory_15);
#line 230
array::push($memory_15, $memory_13);
#line 230
$memory_16 = "next";
#line 230
c_rt_lib::set_ref_hash($memory_3, $memory_16, $memory_15);
#line 230
undef($memory_16);
#line 230
undef($memory_15);
#line 231
$memory_15 = "cmds";
#line 231
$memory_15 = c_rt_lib::get_ref_hash($memory_3, $memory_15);
#line 231
array::pop($memory_15);
#line 231
$memory_16 = "cmds";
#line 231
c_rt_lib::set_ref_hash($memory_3, $memory_16, $memory_15);
#line 231
undef($memory_16);
#line 231
undef($memory_15);
#line 232
$memory_15 = 1;
#line 232
$memory_15 = $memory_5 - $memory_15;
#line 232
flow_graph_priv::add_block($memory_2, $memory_3, $memory_15, $memory_4);
#line 232
undef($memory_15);
#line 233
$memory_15 = "cmds";
#line 233
$memory_15 = c_rt_lib::get_ref_hash($memory_3, $memory_15);
#line 233
array::push($memory_15, $memory_6);
#line 233
$memory_16 = "cmds";
#line 233
c_rt_lib::set_ref_hash($memory_3, $memory_16, $memory_15);
#line 233
undef($memory_16);
#line 233
undef($memory_15);
#line 234
$memory_4 = $memory_13;
#line 235
goto label_418;
#line 235
label_418:
#line 235
undef($memory_14);
#line 235
undef($memory_13);
#line 236
goto label_489;
#line 236
label_422:
#line 236
$memory_13 = c_rt_lib::ov_as($memory_11, 'if_goto');
#line 237
$memory_14 = $memory_13->{'src'};
#line 237
flow_graph_priv::read_reg($memory_3, $memory_14, $memory_5);
#line 237
undef($memory_14);
#line 238
$memory_14 = "next";
#line 238
$memory_14 = c_rt_lib::get_ref_hash($memory_3, $memory_14);
#line 238
$memory_15 = $memory_13->{'dest'};
#line 238
array::push($memory_14, $memory_15);
#line 238
undef($memory_15);
#line 238
$memory_15 = "next";
#line 238
c_rt_lib::set_ref_hash($memory_3, $memory_15, $memory_14);
#line 238
undef($memory_15);
#line 238
undef($memory_14);
#line 239
$memory_14 = "_I";
#line 239
$memory_14 = $memory_4 . $memory_14;
#line 240
$memory_16 = 1;
#line 240
$memory_16 = $memory_5 + $memory_16;
#line 240
$memory_15 = $memory_0->[$memory_16];
#line 240
undef($memory_16);
#line 240
$memory_15 = $memory_15->{'cmd'};
#line 240
$memory_15 = c_rt_lib::ov_is($memory_15, 'prt_lbl');
#line 240
$memory_15 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_15));
#line 240
if (c_rt_lib::check_true($memory_15)) {goto label_455;}
#line 241
$memory_17 = 1;
#line 241
$memory_17 = $memory_5 + $memory_17;
#line 241
$memory_16 = $memory_0->[$memory_17];
#line 241
undef($memory_17);
#line 241
$memory_16 = $memory_16->{'cmd'};
#line 241
$memory_16 = c_rt_lib::ov_as($memory_16, 'prt_lbl');
#line 241
$memory_14 = $memory_16;
#line 241
undef($memory_16);
#line 242
goto label_455;
#line 242
label_455:
#line 242
undef($memory_15);
#line 243
$memory_15 = "next";
#line 243
$memory_15 = c_rt_lib::get_ref_hash($memory_3, $memory_15);
#line 243
array::push($memory_15, $memory_14);
#line 243
$memory_16 = "next";
#line 243
c_rt_lib::set_ref_hash($memory_3, $memory_16, $memory_15);
#line 243
undef($memory_16);
#line 243
undef($memory_15);
#line 244
flow_graph_priv::add_block($memory_2, $memory_3, $memory_5, $memory_4);
#line 245
$memory_4 = $memory_14;
#line 245
undef($memory_14);
#line 245
undef($memory_13);
#line 246
goto label_489;
#line 246
label_469:
#line 246
$memory_13 = c_rt_lib::ov_as($memory_11, 'goto');
#line 247
$memory_14 = "next";
#line 247
$memory_14 = c_rt_lib::get_ref_hash($memory_3, $memory_14);
#line 247
array::push($memory_14, $memory_13);
#line 247
$memory_15 = "next";
#line 247
c_rt_lib::set_ref_hash($memory_3, $memory_15, $memory_14);
#line 247
undef($memory_15);
#line 247
undef($memory_14);
#line 248
flow_graph_priv::add_block($memory_2, $memory_3, $memory_5, $memory_4);
#line 249
$memory_14 = "_G";
#line 249
$memory_4 = $memory_4 . $memory_14;
#line 249
undef($memory_14);
#line 249
undef($memory_13);
#line 250
goto label_489;
#line 250
label_484:
#line 250
$memory_13 = c_rt_lib::ov_as($memory_11, 'clear');
#line 251
flow_graph_priv::clear_reg($memory_3, $memory_13, $memory_5);
#line 251
undef($memory_13);
#line 252
goto label_489;
#line 252
label_489:
#line 252
undef($memory_11);
#line 252
undef($memory_12);
#line 253
$memory_11 = 1;
#line 253
$memory_5 = $memory_5 + $memory_11;
#line 253
undef($memory_11);
#line 254
$memory_7 = $memory_7 + $memory_8;
#line 254
goto label_13;
#line 254
label_497:
#line 254
undef($memory_6);
#line 254
undef($memory_7);
#line 254
undef($memory_8);
#line 254
undef($memory_9);
#line 254
undef($memory_10);
#line 255
$memory_6 = 1;
#line 255
$memory_6 = $memory_5 - $memory_6;
#line 255
flow_graph_priv::add_block($memory_2, $memory_3, $memory_6, $memory_4);
#line 255
undef($memory_6);
#line 256
undef($memory_0);
#line 256
undef($memory_1);
#line 256
undef($memory_3);
#line 256
undef($memory_4);
#line 256
undef($memory_5);
#line 256
return $memory_2;
#line 256
undef($memory_2);
#line 256
undef($memory_3);
#line 256
undef($memory_4);
#line 256
undef($memory_5);
#line 256
undef($memory_0);
#line 256
undef($memory_1);
#line 256
return;
}
