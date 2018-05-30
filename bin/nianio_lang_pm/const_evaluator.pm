use c_rt_lib;
use ptd;
use nlasm;
use array;
use interpreter;
use hash;
use flow_graph;
use post_processing_t;
sub const_evaluator::evaluate_const_in_modules;
sub const_evaluator_priv::evaluate_const_in_function;
sub const_evaluator_priv::evaluate_const_in_blocks;
sub const_evaluator_priv::check_sub_val;
sub const_evaluator_priv::evaluate_const;
sub const_evaluator_priv::push_load_const;
sub const_evaluator_priv::set_const_block_val;

return 1;

sub const_evaluator::evaluate_const_in_modules($$$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;my $memory_13;my $memory_14;my $memory_15;my $memory_16;my $memory_17;my $memory_18;my $memory_19;my $memory_20;my $memory_21;my $memory_22;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];$memory_2 = $_[2];Scalar::Util::weaken($_[2]) if ref($_[2]);$memory_3 = $_[3];
#line 18
$memory_4 = [];
#line 19
$memory_5 = $memory_0->{'nl_asm'};
#line 19
$memory_8 = c_rt_lib::init_iter($memory_5);
#line 19
label_3:
#line 19
$memory_6 = c_rt_lib::is_end_hash($memory_8);
#line 19
if (c_rt_lib::check_true($memory_6)) {goto label_11;}
#line 19
$memory_6 = c_rt_lib::get_key_iter($memory_8);
#line 19
$memory_7 = c_rt_lib::hash_get_value($memory_5, $memory_6);
#line 20
array::push($memory_4, $memory_7);
#line 21
$memory_8 = c_rt_lib::next_iter($memory_8);
#line 21
goto label_3;
#line 21
label_11:
#line 21
undef($memory_5);
#line 21
undef($memory_6);
#line 21
undef($memory_7);
#line 21
undef($memory_8);
#line 22
$memory_6 = {};
#line 22
$memory_5 = interpreter::init($memory_4, $memory_6);
#line 22
undef($memory_6);
#line 22
$memory_6 = $memory_5;
#line 22
 if (c_rt_lib::get_hashcount($memory_0) > 1) {$memory_0 = {%{$memory_0}};}$memory_0->{'interpreter_state'} = $memory_6;
#line 22
undef($memory_5);
#line 22
undef($memory_6);
#line 23
$memory_6 = $memory_0->{'nl_asm'};
#line 23
$memory_5 = hash::keys($memory_6);
#line 23
undef($memory_6);
#line 23
$memory_7 = 0;
#line 23
$memory_8 = 1;
#line 23
$memory_9 = c_rt_lib::array_len($memory_5);
#line 23
label_29:
#line 23
$memory_10 = c_rt_lib::to_nl($memory_7 >= $memory_9);
#line 23
if (c_rt_lib::check_true($memory_10)) {goto label_119;}
#line 23
$memory_6 = $memory_5->[$memory_7];
#line 24
$memory_12 = $memory_0->{'nl_asm'};
#line 24
$memory_11 = hash::get_value($memory_12, $memory_6);
#line 24
undef($memory_12);
#line 25
$memory_12 = c_rt_lib::to_nl(0);
#line 26
$memory_14 = $memory_11->{'functions'};
#line 26
$memory_13 = array::len($memory_14);
#line 26
undef($memory_14);
#line 26
$memory_14 = 0;
#line 26
$memory_15 = 1;
#line 26
label_42:
#line 26
$memory_16 = c_rt_lib::to_nl($memory_14 >= $memory_13);
#line 26
if (c_rt_lib::check_true($memory_16)) {goto label_90;}
#line 27
$memory_17 = $memory_11->{'functions'};
#line 27
$memory_17 = $memory_17->[$memory_14];
#line 28
$memory_18 = $memory_17->{'access'};
#line 28
$memory_18 = c_rt_lib::ov_is($memory_18, 'pub');
#line 28
if (c_rt_lib::check_true($memory_18)) {goto label_52;}
#line 28
$memory_18 = "_priv::";
#line 28
goto label_54;
#line 28
label_52:
#line 28
$memory_18 = "::";
#line 28
label_54:
#line 28
$memory_18 = $memory_6 . $memory_18;
#line 28
$memory_19 = $memory_17->{'name'};
#line 28
$memory_18 = $memory_18 . $memory_19;
#line 28
undef($memory_19);
#line 29
$memory_19 = hash::has_key($memory_1, $memory_18);
#line 29
$memory_19 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_19));
#line 29
if (c_rt_lib::check_true($memory_19)) {goto label_84;}
#line 30
$memory_20 = c_rt_lib::to_nl(1);
#line 30
$memory_12 = $memory_20;
#line 30
undef($memory_20);
#line 31
$memory_21 = $memory_11->{'module_name'};
#line 31
$memory_22 = $memory_0->{'interpreter_state'};
#line 31
$memory_20 = const_evaluator_priv::evaluate_const_in_function($memory_17, $memory_21, $memory_3, $memory_22);
#line 31
undef($memory_22);
#line 31
undef($memory_21);
#line 31
$memory_21 = $memory_20;
#line 31
 if (c_rt_lib::get_hashcount($memory_17) > 1) {$memory_17 = {%{$memory_17}};}$memory_17->{'commands'} = $memory_21;
#line 31
undef($memory_20);
#line 31
undef($memory_21);
#line 32
$memory_20 = "functions";
#line 32
$memory_20 = c_rt_lib::get_ref_hash($memory_11, $memory_20);
#line 32
$memory_21 = $memory_17;
#line 32
 if (c_rt_lib::get_arrcount($memory_20) > 1) {$memory_20 = [@{$memory_20}];}$memory_20->[$memory_14] = $memory_21;
#line 32
$memory_22 = "functions";
#line 32
c_rt_lib::set_ref_hash($memory_11, $memory_22, $memory_20);
#line 32
undef($memory_22);
#line 32
undef($memory_20);
#line 32
undef($memory_21);
#line 33
goto label_84;
#line 33
label_84:
#line 33
undef($memory_19);
#line 33
undef($memory_17);
#line 33
undef($memory_18);
#line 34
$memory_14 = $memory_14 + $memory_15;
#line 34
goto label_42;
#line 34
label_90:
#line 34
undef($memory_13);
#line 34
undef($memory_14);
#line 34
undef($memory_15);
#line 34
undef($memory_16);
#line 35
$memory_13 = $memory_12;
#line 35
$memory_13 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_13));
#line 35
$memory_13 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_13));
#line 35
if (c_rt_lib::check_true($memory_13)) {goto label_104;}
#line 35
undef($memory_11);
#line 35
undef($memory_12);
#line 35
undef($memory_13);
#line 35
goto label_116;
#line 35
goto label_104;
#line 35
label_104:
#line 35
undef($memory_13);
#line 36
$memory_13 = "nl_asm";
#line 36
$memory_13 = c_rt_lib::get_ref_hash($memory_0, $memory_13);
#line 36
hash::set_value($memory_13, $memory_6, $memory_11);
#line 36
$memory_14 = "nl_asm";
#line 36
c_rt_lib::set_ref_hash($memory_0, $memory_14, $memory_13);
#line 36
undef($memory_14);
#line 36
undef($memory_13);
#line 37
hash::set_value($memory_2, $memory_6, $memory_11);
#line 37
undef($memory_11);
#line 37
undef($memory_12);
#line 37
label_116:
#line 38
$memory_7 = $memory_7 + $memory_8;
#line 38
goto label_29;
#line 38
label_119:
#line 38
undef($memory_5);
#line 38
undef($memory_6);
#line 38
undef($memory_7);
#line 38
undef($memory_8);
#line 38
undef($memory_9);
#line 38
undef($memory_10);
#line 38
undef($memory_4);
#line 38
undef($memory_1);
#line 38
undef($memory_3);
#line 38
$_[0] = $memory_0;$_[2] = $memory_2;return;
$_[0] = $memory_0;$_[2] = $memory_2;}

sub const_evaluator_priv::evaluate_const_in_function($$$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;$memory_0 = $_[0];$memory_1 = $_[1];$memory_2 = $_[2];$memory_3 = $_[3];
#line 43
$memory_5 = $memory_0->{'commands'};
#line 43
$memory_6 = $memory_0->{'args_type'};
#line 43
$memory_4 = flow_graph::make_blocks($memory_5, $memory_6);
#line 43
undef($memory_6);
#line 43
undef($memory_5);
#line 44
const_evaluator_priv::evaluate_const_in_blocks($memory_4, $memory_2, $memory_0, $memory_1, $memory_3);
#line 45
$memory_5 = flow_graph::combine_blocks($memory_4);
#line 45
undef($memory_0);
#line 45
undef($memory_1);
#line 45
undef($memory_2);
#line 45
undef($memory_3);
#line 45
undef($memory_4);
#line 45
return $memory_5;
#line 45
undef($memory_5);
#line 45
undef($memory_4);
#line 45
undef($memory_0);
#line 45
undef($memory_1);
#line 45
undef($memory_2);
#line 45
undef($memory_3);
#line 45
return;
}

sub const_evaluator_priv::evaluate_const_in_blocks($$$$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];$memory_2 = $_[2];$memory_3 = $_[3];$memory_4 = $_[4];
#line 50
$memory_5 = [];
#line 51
$memory_6 = $memory_2->{'reg_size'};
#line 51
$memory_7 = 0;
#line 51
$memory_8 = 1;
#line 51
label_4:
#line 51
$memory_9 = c_rt_lib::to_nl($memory_7 >= $memory_6);
#line 51
if (c_rt_lib::check_true($memory_9)) {goto label_12;}
#line 52
$memory_10 = c_rt_lib::ov_mk_none('no');
#line 52
array::push($memory_5, $memory_10);
#line 52
undef($memory_10);
#line 53
$memory_7 = $memory_7 + $memory_8;
#line 53
goto label_4;
#line 53
label_12:
#line 53
undef($memory_6);
#line 53
undef($memory_7);
#line 53
undef($memory_8);
#line 53
undef($memory_9);
#line 54
$memory_6 = [];
#line 55
$memory_8 = 0;
#line 55
$memory_9 = [];
#line 55
$memory_7 = {was => $memory_8,regs => $memory_9,};
#line 55
undef($memory_8);
#line 55
undef($memory_9);
#line 56
$memory_8 = array::len($memory_0);
#line 56
$memory_9 = 0;
#line 56
$memory_10 = 1;
#line 56
label_26:
#line 56
$memory_11 = c_rt_lib::to_nl($memory_9 >= $memory_8);
#line 56
if (c_rt_lib::check_true($memory_11)) {goto label_32;}
#line 57
array::push($memory_6, $memory_7);
#line 58
$memory_9 = $memory_9 + $memory_10;
#line 58
goto label_26;
#line 58
label_32:
#line 58
undef($memory_8);
#line 58
undef($memory_9);
#line 58
undef($memory_10);
#line 58
undef($memory_11);
#line 59
$memory_8 = array::len($memory_0);
#line 59
$memory_9 = 0;
#line 59
$memory_8 = c_rt_lib::to_nl($memory_8 == $memory_9);
#line 59
undef($memory_9);
#line 59
$memory_8 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 59
if (c_rt_lib::check_true($memory_8)) {goto label_46;}
#line 59
$memory_9 = [];
#line 59
die(dfile::ssave($memory_9));
#line 59
goto label_46;
#line 59
label_46:
#line 59
undef($memory_8);
#line 59
undef($memory_9);
#line 60
$memory_8 = $memory_0;
#line 61
$memory_9 = 0;
#line 61
const_evaluator_priv::set_const_block_val($memory_9, $memory_0, $memory_8, $memory_1, $memory_6, $memory_4, $memory_5, $memory_2, $memory_3);
#line 61
undef($memory_9);
#line 62
$memory_0 = $memory_8;
#line 62
undef($memory_5);
#line 62
undef($memory_6);
#line 62
undef($memory_7);
#line 62
undef($memory_8);
#line 62
undef($memory_1);
#line 62
undef($memory_2);
#line 62
undef($memory_3);
#line 62
undef($memory_4);
#line 62
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub const_evaluator_priv::check_sub_val($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];
#line 66
$memory_2 = $memory_1;
#line 66
$memory_2 = c_rt_lib::ov_is($memory_2, 'no');
#line 66
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 66
if (c_rt_lib::check_true($memory_2)) {goto label_8;}
#line 67
$memory_3 = c_rt_lib::ov_mk_none('no');
#line 67
$memory_0 = $memory_3;
#line 67
undef($memory_3);
#line 68
goto label_8;
#line 68
label_8:
#line 68
undef($memory_2);
#line 68
undef($memory_1);
#line 68
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub const_evaluator_priv::evaluate_const($$$$$$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;my $memory_13;my $memory_14;my $memory_15;my $memory_16;my $memory_17;my $memory_18;my $memory_19;my $memory_20;$memory_0 = $_[0];$memory_1 = $_[1];$memory_2 = $_[2];$memory_3 = $_[3];Scalar::Util::weaken($_[3]) if ref($_[3]);$memory_4 = $_[4];Scalar::Util::weaken($_[4]) if ref($_[4]);$memory_5 = $_[5];$memory_6 = $_[6];
#line 74
$memory_7 = $memory_3;
#line 74
$memory_7 = c_rt_lib::ov_is($memory_7, 'no');
#line 74
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 74
if (c_rt_lib::check_true($memory_7)) {goto label_40;}
#line 75
$memory_9 = 0;
#line 75
$memory_10 = 1;
#line 75
$memory_11 = c_rt_lib::array_len($memory_6);
#line 75
label_7:
#line 75
$memory_12 = c_rt_lib::to_nl($memory_9 >= $memory_11);
#line 75
if (c_rt_lib::check_true($memory_12)) {goto label_26;}
#line 75
$memory_8 = $memory_6->[$memory_9];
#line 76
$memory_13 = "";
#line 76
$memory_13 = c_rt_lib::to_nl($memory_8 eq $memory_13);
#line 76
$memory_13 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_13));
#line 76
$memory_13 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_13));
#line 76
if (c_rt_lib::check_true($memory_13)) {goto label_22;}
#line 76
$memory_14 = c_rt_lib::ov_mk_none('no');
#line 76
$memory_15 = $memory_14;
#line 76
 if (c_rt_lib::get_arrcount($memory_4) > 1) {$memory_4 = [@{$memory_4}];}$memory_4->[$memory_8] = $memory_15;
#line 76
undef($memory_14);
#line 76
undef($memory_15);
#line 76
goto label_22;
#line 76
label_22:
#line 76
undef($memory_13);
#line 77
$memory_9 = $memory_9 + $memory_10;
#line 77
goto label_7;
#line 77
label_26:
#line 77
undef($memory_8);
#line 77
undef($memory_9);
#line 77
undef($memory_10);
#line 77
undef($memory_11);
#line 77
undef($memory_12);
#line 78
undef($memory_0);
#line 78
undef($memory_1);
#line 78
undef($memory_2);
#line 78
undef($memory_5);
#line 78
undef($memory_6);
#line 78
undef($memory_7);
#line 78
$_[3] = $memory_3;$_[4] = $memory_4;return;
#line 79
goto label_40;
#line 79
label_40:
#line 79
undef($memory_7);
#line 80
$memory_7 = $memory_3;
#line 80
$memory_7 = c_rt_lib::ov_as($memory_7, 'yes');
#line 81
$memory_8 = [];
#line 82
$memory_10 = 0;
#line 82
$memory_11 = 1;
#line 82
$memory_12 = c_rt_lib::array_len($memory_4);
#line 82
label_48:
#line 82
$memory_13 = c_rt_lib::to_nl($memory_10 >= $memory_12);
#line 82
if (c_rt_lib::check_true($memory_13)) {goto label_70;}
#line 82
$memory_9 = $memory_4->[$memory_10];
#line 83
$memory_14 = interpreter::get_none_variant();
#line 84
$memory_15 = $memory_9;
#line 84
$memory_15 = c_rt_lib::ov_is($memory_15, 'yes');
#line 84
$memory_15 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_15));
#line 84
if (c_rt_lib::check_true($memory_15)) {goto label_64;}
#line 85
$memory_16 = $memory_9;
#line 85
$memory_16 = c_rt_lib::ov_as($memory_16, 'yes');
#line 86
$memory_17 = $memory_16->{'value'};
#line 86
$memory_14 = $memory_17;
#line 86
undef($memory_17);
#line 86
undef($memory_16);
#line 87
goto label_64;
#line 87
label_64:
#line 87
undef($memory_15);
#line 88
array::push($memory_8, $memory_14);
#line 88
undef($memory_14);
#line 89
$memory_10 = $memory_10 + $memory_11;
#line 89
goto label_48;
#line 89
label_70:
#line 89
undef($memory_9);
#line 89
undef($memory_10);
#line 89
undef($memory_11);
#line 89
undef($memory_12);
#line 89
undef($memory_13);
#line 90
$memory_9 = interpreter::evaluate_const($memory_5, $memory_0, $memory_1, $memory_8, $memory_2);
#line 91
$memory_10 = $memory_9;
#line 91
$memory_10 = c_rt_lib::ov_is($memory_10, 'err');
#line 91
$memory_10 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_10));
#line 91
if (c_rt_lib::check_true($memory_10)) {goto label_113;}
#line 92
$memory_11 = c_rt_lib::ov_mk_none('no');
#line 92
$memory_3 = $memory_11;
#line 92
undef($memory_11);
#line 93
$memory_12 = 0;
#line 93
$memory_13 = 1;
#line 93
$memory_14 = c_rt_lib::array_len($memory_6);
#line 93
label_87:
#line 93
$memory_15 = c_rt_lib::to_nl($memory_12 >= $memory_14);
#line 93
if (c_rt_lib::check_true($memory_15)) {goto label_106;}
#line 93
$memory_11 = $memory_6->[$memory_12];
#line 94
$memory_16 = "";
#line 94
$memory_16 = c_rt_lib::to_nl($memory_11 eq $memory_16);
#line 94
$memory_16 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_16));
#line 94
$memory_16 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_16));
#line 94
if (c_rt_lib::check_true($memory_16)) {goto label_102;}
#line 94
$memory_17 = c_rt_lib::ov_mk_none('no');
#line 94
$memory_18 = $memory_17;
#line 94
 if (c_rt_lib::get_arrcount($memory_4) > 1) {$memory_4 = [@{$memory_4}];}$memory_4->[$memory_11] = $memory_18;
#line 94
undef($memory_17);
#line 94
undef($memory_18);
#line 94
goto label_102;
#line 94
label_102:
#line 94
undef($memory_16);
#line 95
$memory_12 = $memory_12 + $memory_13;
#line 95
goto label_87;
#line 95
label_106:
#line 95
undef($memory_11);
#line 95
undef($memory_12);
#line 95
undef($memory_13);
#line 95
undef($memory_14);
#line 95
undef($memory_15);
#line 96
goto label_155;
#line 96
label_113:
#line 97
$memory_11 = $memory_9;
#line 97
$memory_11 = c_rt_lib::ov_as($memory_11, 'ok');
#line 98
$memory_12 = array::len($memory_6);
#line 98
$memory_13 = 0;
#line 98
$memory_14 = 1;
#line 98
label_119:
#line 98
$memory_15 = c_rt_lib::to_nl($memory_13 >= $memory_12);
#line 98
if (c_rt_lib::check_true($memory_15)) {goto label_148;}
#line 99
$memory_16 = $memory_6->[$memory_13];
#line 100
$memory_17 = "";
#line 100
$memory_17 = c_rt_lib::to_nl($memory_16 eq $memory_17);
#line 100
$memory_17 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_17));
#line 100
$memory_17 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_17));
#line 100
if (c_rt_lib::check_true($memory_17)) {goto label_143;}
#line 100
$memory_19 = 10000;
#line 100
$memory_20 = $memory_7->{'nr'};
#line 100
$memory_19 = $memory_19 * $memory_20;
#line 100
undef($memory_20);
#line 100
$memory_19 = $memory_19 + $memory_13;
#line 100
$memory_20 = $memory_11->[$memory_16];
#line 100
$memory_18 = {nr => $memory_19,value => $memory_20,};
#line 100
undef($memory_19);
#line 100
undef($memory_20);
#line 100
$memory_18 = c_rt_lib::ov_mk_arg('yes', $memory_18);
#line 100
$memory_19 = $memory_18;
#line 100
 if (c_rt_lib::get_arrcount($memory_4) > 1) {$memory_4 = [@{$memory_4}];}$memory_4->[$memory_16] = $memory_19;
#line 100
undef($memory_18);
#line 100
undef($memory_19);
#line 100
goto label_143;
#line 100
label_143:
#line 100
undef($memory_17);
#line 100
undef($memory_16);
#line 101
$memory_13 = $memory_13 + $memory_14;
#line 101
goto label_119;
#line 101
label_148:
#line 101
undef($memory_12);
#line 101
undef($memory_13);
#line 101
undef($memory_14);
#line 101
undef($memory_15);
#line 101
undef($memory_11);
#line 102
goto label_155;
#line 102
label_155:
#line 102
undef($memory_10);
#line 102
undef($memory_7);
#line 102
undef($memory_8);
#line 102
undef($memory_9);
#line 102
undef($memory_0);
#line 102
undef($memory_1);
#line 102
undef($memory_2);
#line 102
undef($memory_5);
#line 102
undef($memory_6);
#line 102
$_[3] = $memory_3;$_[4] = $memory_4;return;
$_[3] = $memory_3;$_[4] = $memory_4;}

sub const_evaluator_priv::push_load_const($$$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];$memory_2 = $_[2];$memory_3 = $_[3];
#line 107
$memory_4 = $memory_1;
#line 107
$memory_4 = c_rt_lib::ov_is($memory_4, 'yes');
#line 107
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 107
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 107
if (c_rt_lib::check_true($memory_4)) {goto label_8;}
#line 107
$memory_5 = [];
#line 107
die(dfile::ssave($memory_5));
#line 107
goto label_8;
#line 107
label_8:
#line 107
undef($memory_4);
#line 107
undef($memory_5);
#line 108
$memory_4 = $memory_1;
#line 108
$memory_4 = c_rt_lib::ov_as($memory_4, 'yes');
#line 110
$memory_6 = $memory_3->{'debug'};
#line 111
$memory_7 = [$memory_2];
#line 111
$memory_7 = c_rt_lib::ov_mk_arg('const', $memory_7);
#line 112
$memory_9 = $memory_4->{'value'};
#line 112
$memory_8 = {dest => $memory_2,val => $memory_9,};
#line 112
undef($memory_9);
#line 112
$memory_8 = c_rt_lib::ov_mk_arg('load_const', $memory_8);
#line 112
$memory_5 = {debug => $memory_6,annotation => $memory_7,cmd => $memory_8,};
#line 112
undef($memory_6);
#line 112
undef($memory_7);
#line 112
undef($memory_8);
#line 112
array::push($memory_0, $memory_5);
#line 112
undef($memory_5);
#line 112
undef($memory_4);
#line 112
undef($memory_1);
#line 112
undef($memory_2);
#line 112
undef($memory_3);
#line 112
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub const_evaluator_priv::set_const_block_val($$$$$$$$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;my $memory_13;my $memory_14;my $memory_15;my $memory_16;my $memory_17;my $memory_18;my $memory_19;my $memory_20;my $memory_21;my $memory_22;my $memory_23;my $memory_24;my $memory_25;my $memory_26;my $memory_27;my $memory_28;my $memory_29;my $memory_30;my $memory_31;$memory_0 = $_[0];$memory_1 = $_[1];$memory_2 = $_[2];Scalar::Util::weaken($_[2]) if ref($_[2]);$memory_3 = $_[3];$memory_4 = $_[4];Scalar::Util::weaken($_[4]) if ref($_[4]);$memory_5 = $_[5];$memory_6 = $_[6];$memory_7 = $_[7];$memory_8 = $_[8];
#line 120
$memory_9 = $memory_1->[$memory_0];
#line 121
$memory_10 = $memory_4->[$memory_0];
#line 121
$memory_10 = $memory_10->{'was'};
#line 121
$memory_11 = 0;
#line 121
$memory_10 = c_rt_lib::to_nl($memory_10 > $memory_11);
#line 121
undef($memory_11);
#line 121
$memory_10 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_10));
#line 121
if (c_rt_lib::check_true($memory_10)) {goto label_100;}
#line 122
$memory_11 = c_rt_lib::to_nl(0);
#line 123
$memory_12 = $memory_4->[$memory_0];
#line 123
$memory_12 = $memory_12->{'regs'};
#line 124
$memory_13 = array::len($memory_6);
#line 124
$memory_14 = 0;
#line 124
$memory_15 = 1;
#line 124
label_14:
#line 124
$memory_16 = c_rt_lib::to_nl($memory_14 >= $memory_13);
#line 124
if (c_rt_lib::check_true($memory_16)) {goto label_72;}
#line 125
$memory_17 = $memory_12->[$memory_14];
#line 125
$memory_17 = c_rt_lib::ov_is($memory_17, 'no');
#line 125
$memory_17 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_17));
#line 125
if (c_rt_lib::check_true($memory_17)) {goto label_29;}
#line 126
$memory_18 = c_rt_lib::ov_mk_none('no');
#line 126
$memory_19 = $memory_18;
#line 126
 if (c_rt_lib::get_arrcount($memory_6) > 1) {$memory_6 = [@{$memory_6}];}$memory_6->[$memory_14] = $memory_19;
#line 126
undef($memory_18);
#line 126
undef($memory_19);
#line 127
undef($memory_17);
#line 127
goto label_69;
#line 128
goto label_67;
#line 128
label_29:
#line 129
$memory_18 = $memory_6->[$memory_14];
#line 129
$memory_18 = c_rt_lib::ov_is($memory_18, 'yes');
#line 129
$memory_18 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_18));
#line 129
if (c_rt_lib::check_true($memory_18)) {goto label_56;}
#line 130
$memory_19 = $memory_6->[$memory_14];
#line 130
$memory_19 = c_rt_lib::ov_as($memory_19, 'yes');
#line 131
$memory_20 = $memory_12->[$memory_14];
#line 131
$memory_20 = c_rt_lib::ov_as($memory_20, 'yes');
#line 132
$memory_21 = $memory_19->{'nr'};
#line 132
$memory_22 = $memory_20->{'nr'};
#line 132
$memory_21 = c_rt_lib::to_nl($memory_21 == $memory_22);
#line 132
undef($memory_22);
#line 132
$memory_21 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_21));
#line 132
if (c_rt_lib::check_true($memory_21)) {goto label_51;}
#line 132
undef($memory_17);
#line 132
undef($memory_18);
#line 132
undef($memory_19);
#line 132
undef($memory_20);
#line 132
undef($memory_21);
#line 132
goto label_69;
#line 132
goto label_51;
#line 132
label_51:
#line 132
undef($memory_21);
#line 132
undef($memory_19);
#line 132
undef($memory_20);
#line 133
goto label_56;
#line 133
label_56:
#line 133
undef($memory_18);
#line 134
$memory_18 = c_rt_lib::ov_mk_none('no');
#line 134
$memory_19 = $memory_18;
#line 134
 if (c_rt_lib::get_arrcount($memory_6) > 1) {$memory_6 = [@{$memory_6}];}$memory_6->[$memory_14] = $memory_19;
#line 134
undef($memory_18);
#line 134
undef($memory_19);
#line 135
$memory_18 = c_rt_lib::to_nl(1);
#line 135
$memory_11 = $memory_18;
#line 135
undef($memory_18);
#line 136
goto label_67;
#line 136
label_67:
#line 136
undef($memory_17);
#line 136
label_69:
#line 137
$memory_14 = $memory_14 + $memory_15;
#line 137
goto label_14;
#line 137
label_72:
#line 137
undef($memory_13);
#line 137
undef($memory_14);
#line 137
undef($memory_15);
#line 137
undef($memory_16);
#line 138
$memory_13 = $memory_11;
#line 138
$memory_13 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_13));
#line 138
$memory_13 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_13));
#line 138
if (c_rt_lib::check_true($memory_13)) {goto label_95;}
#line 138
undef($memory_0);
#line 138
undef($memory_1);
#line 138
undef($memory_3);
#line 138
undef($memory_5);
#line 138
undef($memory_6);
#line 138
undef($memory_7);
#line 138
undef($memory_8);
#line 138
undef($memory_9);
#line 138
undef($memory_10);
#line 138
undef($memory_11);
#line 138
undef($memory_12);
#line 138
undef($memory_13);
#line 138
$_[2] = $memory_2;$_[4] = $memory_4;return;
#line 138
goto label_95;
#line 138
label_95:
#line 138
undef($memory_13);
#line 138
undef($memory_11);
#line 138
undef($memory_12);
#line 139
goto label_100;
#line 139
label_100:
#line 139
undef($memory_10);
#line 140
$memory_10 = c_rt_lib::get_ref_arr($memory_4, $memory_0);
#line 140
$memory_11 = $memory_6;
#line 140
 if (c_rt_lib::get_hashcount($memory_10) > 1) {$memory_10 = {%{$memory_10}};}$memory_10->{'regs'} = $memory_11;
#line 140
c_rt_lib::set_ref_arr($memory_4, $memory_0, $memory_10);
#line 140
undef($memory_10);
#line 140
undef($memory_11);
#line 141
$memory_10 = [];
#line 142
$memory_11 = c_rt_lib::get_ref_arr($memory_4, $memory_0);
#line 142
$memory_12 = "was";
#line 142
$memory_12 = c_rt_lib::get_ref_hash($memory_11, $memory_12);
#line 142
$memory_13 = 1;
#line 142
$memory_12 = $memory_12 + $memory_13;
#line 142
$memory_14 = "was";
#line 142
c_rt_lib::set_ref_hash($memory_11, $memory_14, $memory_12);
#line 142
c_rt_lib::set_ref_arr($memory_4, $memory_0, $memory_11);
#line 142
undef($memory_14);
#line 142
undef($memory_11);
#line 142
undef($memory_12);
#line 142
undef($memory_13);
#line 143
$memory_11 = $memory_9->{'cmds'};
#line 144
$memory_12 = array::len($memory_11);
#line 144
$memory_13 = 0;
#line 144
$memory_14 = 1;
#line 144
label_125:
#line 144
$memory_15 = c_rt_lib::to_nl($memory_13 >= $memory_12);
#line 144
if (c_rt_lib::check_true($memory_15)) {goto label_726;}
#line 145
$memory_16 = $memory_9->{'from'};
#line 145
$memory_16 = $memory_16 + $memory_13;
#line 146
$memory_18 = $memory_9->{'from'};
#line 146
$memory_18 = $memory_13 + $memory_18;
#line 146
$memory_19 = "";
#line 146
$memory_17 = {nr => $memory_18,value => $memory_19,};
#line 146
undef($memory_18);
#line 146
undef($memory_19);
#line 146
$memory_17 = c_rt_lib::ov_mk_arg('yes', $memory_17);
#line 147
$memory_18 = $memory_11->[$memory_13];
#line 148
$memory_19 = [];
#line 149
$memory_20 = $memory_18->{'cmd'};
#line 149
$memory_21 = c_rt_lib::ov_is($memory_20, 'arr_decl');
#line 149
if (c_rt_lib::check_true($memory_21)) {goto label_185;}
#line 155
$memory_21 = c_rt_lib::ov_is($memory_20, 'hash_decl');
#line 155
if (c_rt_lib::check_true($memory_21)) {goto label_215;}
#line 161
$memory_21 = c_rt_lib::ov_is($memory_20, 'call');
#line 161
if (c_rt_lib::check_true($memory_21)) {goto label_247;}
#line 184
$memory_21 = c_rt_lib::ov_is($memory_20, 'una_op');
#line 184
if (c_rt_lib::check_true($memory_21)) {goto label_374;}
#line 188
$memory_21 = c_rt_lib::ov_is($memory_20, 'bin_op');
#line 188
if (c_rt_lib::check_true($memory_21)) {goto label_389;}
#line 193
$memory_21 = c_rt_lib::ov_is($memory_20, 'ov_is');
#line 193
if (c_rt_lib::check_true($memory_21)) {goto label_409;}
#line 197
$memory_21 = c_rt_lib::ov_is($memory_20, 'ov_as');
#line 197
if (c_rt_lib::check_true($memory_21)) {goto label_424;}
#line 201
$memory_21 = c_rt_lib::ov_is($memory_20, 'func');
#line 201
if (c_rt_lib::check_true($memory_21)) {goto label_439;}
#line 205
$memory_21 = c_rt_lib::ov_is($memory_20, 'move');
#line 205
if (c_rt_lib::check_true($memory_21)) {goto label_452;}
#line 209
$memory_21 = c_rt_lib::ov_is($memory_20, 'load_const');
#line 209
if (c_rt_lib::check_true($memory_21)) {goto label_467;}
#line 214
$memory_21 = c_rt_lib::ov_is($memory_20, 'get_frm_idx');
#line 214
if (c_rt_lib::check_true($memory_21)) {goto label_508;}
#line 219
$memory_21 = c_rt_lib::ov_is($memory_20, 'set_at_idx');
#line 219
if (c_rt_lib::check_true($memory_21)) {goto label_528;}
#line 225
$memory_21 = c_rt_lib::ov_is($memory_20, 'get_val');
#line 225
if (c_rt_lib::check_true($memory_21)) {goto label_553;}
#line 229
$memory_21 = c_rt_lib::ov_is($memory_20, 'set_val');
#line 229
if (c_rt_lib::check_true($memory_21)) {goto label_568;}
#line 234
$memory_21 = c_rt_lib::ov_is($memory_20, 'ov_mk');
#line 234
if (c_rt_lib::check_true($memory_21)) {goto label_588;}
#line 240
$memory_21 = c_rt_lib::ov_is($memory_20, 'return');
#line 240
if (c_rt_lib::check_true($memory_21)) {goto label_611;}
#line 245
$memory_21 = c_rt_lib::ov_is($memory_20, 'die');
#line 245
if (c_rt_lib::check_true($memory_21)) {goto label_631;}
#line 248
$memory_21 = c_rt_lib::ov_is($memory_20, 'prt_lbl');
#line 248
if (c_rt_lib::check_true($memory_21)) {goto label_641;}
#line 250
$memory_21 = c_rt_lib::ov_is($memory_20, 'if_goto');
#line 250
if (c_rt_lib::check_true($memory_21)) {goto label_648;}
#line 253
$memory_21 = c_rt_lib::ov_is($memory_20, 'goto');
#line 253
if (c_rt_lib::check_true($memory_21)) {goto label_660;}
#line 255
$memory_21 = c_rt_lib::ov_is($memory_20, 'clear');
#line 255
if (c_rt_lib::check_true($memory_21)) {goto label_667;}
#line 255
$memory_21 = "NOMATCHALERT";
#line 255
$memory_21 = [$memory_21,$memory_20];
#line 255
die(dfile::ssave($memory_21));
#line 149
label_185:
#line 149
$memory_22 = c_rt_lib::ov_as($memory_20, 'arr_decl');
#line 150
$memory_23 = $memory_22->{'src'};
#line 150
$memory_25 = 0;
#line 150
$memory_26 = 1;
#line 150
$memory_27 = c_rt_lib::array_len($memory_23);
#line 150
label_191:
#line 150
$memory_28 = c_rt_lib::to_nl($memory_25 >= $memory_27);
#line 150
if (c_rt_lib::check_true($memory_28)) {goto label_200;}
#line 150
$memory_24 = $memory_23->[$memory_25];
#line 151
$memory_29 = $memory_6->[$memory_24];
#line 151
const_evaluator_priv::check_sub_val($memory_17, $memory_29);
#line 151
undef($memory_29);
#line 152
$memory_25 = $memory_25 + $memory_26;
#line 152
goto label_191;
#line 152
label_200:
#line 152
undef($memory_23);
#line 152
undef($memory_24);
#line 152
undef($memory_25);
#line 152
undef($memory_26);
#line 152
undef($memory_27);
#line 152
undef($memory_28);
#line 153
$memory_24 = $memory_22->{'dest'};
#line 153
$memory_23 = [$memory_24];
#line 153
undef($memory_24);
#line 153
$memory_19 = $memory_23;
#line 153
undef($memory_23);
#line 154
const_evaluator_priv::evaluate_const($memory_7, $memory_8, $memory_16, $memory_17, $memory_6, $memory_5, $memory_19);
#line 154
undef($memory_22);
#line 155
goto label_679;
#line 155
label_215:
#line 155
$memory_22 = c_rt_lib::ov_as($memory_20, 'hash_decl');
#line 156
$memory_23 = $memory_22->{'src'};
#line 156
$memory_25 = 0;
#line 156
$memory_26 = 1;
#line 156
$memory_27 = c_rt_lib::array_len($memory_23);
#line 156
label_221:
#line 156
$memory_28 = c_rt_lib::to_nl($memory_25 >= $memory_27);
#line 156
if (c_rt_lib::check_true($memory_28)) {goto label_232;}
#line 156
$memory_24 = $memory_23->[$memory_25];
#line 157
$memory_30 = $memory_24->{'val'};
#line 157
$memory_29 = $memory_6->[$memory_30];
#line 157
undef($memory_30);
#line 157
const_evaluator_priv::check_sub_val($memory_17, $memory_29);
#line 157
undef($memory_29);
#line 158
$memory_25 = $memory_25 + $memory_26;
#line 158
goto label_221;
#line 158
label_232:
#line 158
undef($memory_23);
#line 158
undef($memory_24);
#line 158
undef($memory_25);
#line 158
undef($memory_26);
#line 158
undef($memory_27);
#line 158
undef($memory_28);
#line 159
$memory_24 = $memory_22->{'dest'};
#line 159
$memory_23 = [$memory_24];
#line 159
undef($memory_24);
#line 159
$memory_19 = $memory_23;
#line 159
undef($memory_23);
#line 160
const_evaluator_priv::evaluate_const($memory_7, $memory_8, $memory_16, $memory_17, $memory_6, $memory_5, $memory_19);
#line 160
undef($memory_22);
#line 161
goto label_679;
#line 161
label_247:
#line 161
$memory_22 = c_rt_lib::ov_as($memory_20, 'call');
#line 162
$memory_23 = $memory_22->{'args'};
#line 162
$memory_25 = 0;
#line 162
$memory_26 = 1;
#line 162
$memory_27 = c_rt_lib::array_len($memory_23);
#line 162
label_253:
#line 162
$memory_28 = c_rt_lib::to_nl($memory_25 >= $memory_27);
#line 162
if (c_rt_lib::check_true($memory_28)) {goto label_283;}
#line 162
$memory_24 = $memory_23->[$memory_25];
#line 163
$memory_29 = c_rt_lib::ov_is($memory_24, 'val');
#line 163
if (c_rt_lib::check_true($memory_29)) {goto label_264;}
#line 165
$memory_29 = c_rt_lib::ov_is($memory_24, 'ref');
#line 165
if (c_rt_lib::check_true($memory_29)) {goto label_271;}
#line 165
$memory_29 = "NOMATCHALERT";
#line 165
$memory_29 = [$memory_29,$memory_24];
#line 165
die(dfile::ssave($memory_29));
#line 163
label_264:
#line 163
$memory_30 = c_rt_lib::ov_as($memory_24, 'val');
#line 164
$memory_31 = $memory_6->[$memory_30];
#line 164
const_evaluator_priv::check_sub_val($memory_17, $memory_31);
#line 164
undef($memory_31);
#line 164
undef($memory_30);
#line 165
goto label_279;
#line 165
label_271:
#line 165
$memory_30 = c_rt_lib::ov_as($memory_24, 'ref');
#line 166
$memory_31 = $memory_6->[$memory_30];
#line 166
const_evaluator_priv::check_sub_val($memory_17, $memory_31);
#line 166
undef($memory_31);
#line 167
array::push($memory_19, $memory_30);
#line 167
undef($memory_30);
#line 168
goto label_279;
#line 168
label_279:
#line 168
undef($memory_29);
#line 169
$memory_25 = $memory_25 + $memory_26;
#line 169
goto label_253;
#line 169
label_283:
#line 169
undef($memory_23);
#line 169
undef($memory_24);
#line 169
undef($memory_25);
#line 169
undef($memory_26);
#line 169
undef($memory_27);
#line 169
undef($memory_28);
#line 170
$memory_23 = $memory_22->{'dest'};
#line 170
array::push($memory_19, $memory_23);
#line 170
undef($memory_23);
#line 171
$memory_23 = $memory_22->{'mod'};
#line 171
$memory_24 = "";
#line 171
$memory_23 = c_rt_lib::to_nl($memory_23 eq $memory_24);
#line 171
undef($memory_24);
#line 171
if (c_rt_lib::check_true($memory_23)) {goto label_300;}
#line 171
$memory_23 = $memory_22->{'mod'};
#line 171
goto label_303;
#line 171
label_300:
#line 171
$memory_23 = "_priv";
#line 171
$memory_23 = $memory_8 . $memory_23;
#line 171
label_303:
#line 171
$memory_24 = "::";
#line 171
$memory_23 = $memory_23 . $memory_24;
#line 171
undef($memory_24);
#line 171
$memory_24 = $memory_22->{'fun_name'};
#line 171
$memory_23 = $memory_23 . $memory_24;
#line 171
undef($memory_24);
#line 172
$memory_24 = hash::has_key($memory_3, $memory_23);
#line 172
$memory_24 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_24));
#line 172
if (c_rt_lib::check_true($memory_24)) {goto label_324;}
#line 173
$memory_25 = hash::get_value($memory_3, $memory_23);
#line 173
$memory_25 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_25));
#line 173
$memory_25 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_25));
#line 173
if (c_rt_lib::check_true($memory_25)) {goto label_321;}
#line 173
$memory_26 = c_rt_lib::ov_mk_none('no');
#line 173
$memory_17 = $memory_26;
#line 173
undef($memory_26);
#line 173
goto label_321;
#line 173
label_321:
#line 173
undef($memory_25);
#line 174
goto label_329;
#line 174
label_324:
#line 175
$memory_25 = c_rt_lib::ov_mk_none('no');
#line 175
$memory_17 = $memory_25;
#line 175
undef($memory_25);
#line 176
goto label_329;
#line 176
label_329:
#line 176
undef($memory_24);
#line 177
$memory_24 = $memory_22->{'mod'};
#line 177
$memory_25 = "c_rt_lib";
#line 177
$memory_24 = c_rt_lib::to_nl($memory_24 eq $memory_25);
#line 177
undef($memory_25);
#line 177
$memory_24 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_24));
#line 177
if (c_rt_lib::check_true($memory_24)) {goto label_368;}
#line 178
$memory_25 = $memory_22->{'fun_name'};
#line 178
$memory_26 = "init_iter";
#line 178
$memory_25 = c_rt_lib::to_nl($memory_25 eq $memory_26);
#line 178
undef($memory_26);
#line 178
if (c_rt_lib::check_true($memory_25)) {goto label_346;}
#line 178
$memory_25 = $memory_22->{'fun_name'};
#line 178
$memory_26 = "is_end_hash";
#line 178
$memory_25 = c_rt_lib::to_nl($memory_25 eq $memory_26);
#line 178
undef($memory_26);
#line 178
label_346:
#line 178
if (c_rt_lib::check_true($memory_25)) {goto label_352;}
#line 178
$memory_25 = $memory_22->{'fun_name'};
#line 178
$memory_26 = "get_key_iter";
#line 178
$memory_25 = c_rt_lib::to_nl($memory_25 eq $memory_26);
#line 178
undef($memory_26);
#line 178
label_352:
#line 178
if (c_rt_lib::check_true($memory_25)) {goto label_358;}
#line 179
$memory_25 = $memory_22->{'fun_name'};
#line 179
$memory_26 = "next_iter";
#line 179
$memory_25 = c_rt_lib::to_nl($memory_25 eq $memory_26);
#line 179
undef($memory_26);
#line 179
label_358:
#line 179
$memory_25 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_25));
#line 179
if (c_rt_lib::check_true($memory_25)) {goto label_365;}
#line 180
$memory_26 = c_rt_lib::ov_mk_none('no');
#line 180
$memory_17 = $memory_26;
#line 180
undef($memory_26);
#line 181
goto label_365;
#line 181
label_365:
#line 181
undef($memory_25);
#line 182
goto label_368;
#line 182
label_368:
#line 182
undef($memory_24);
#line 183
const_evaluator_priv::evaluate_const($memory_7, $memory_8, $memory_16, $memory_17, $memory_6, $memory_5, $memory_19);
#line 183
undef($memory_23);
#line 183
undef($memory_22);
#line 184
goto label_679;
#line 184
label_374:
#line 184
$memory_22 = c_rt_lib::ov_as($memory_20, 'una_op');
#line 185
$memory_24 = $memory_22->{'src'};
#line 185
$memory_23 = $memory_6->[$memory_24];
#line 185
undef($memory_24);
#line 185
const_evaluator_priv::check_sub_val($memory_17, $memory_23);
#line 185
undef($memory_23);
#line 186
$memory_24 = $memory_22->{'dest'};
#line 186
$memory_23 = [$memory_24];
#line 186
undef($memory_24);
#line 186
$memory_19 = $memory_23;
#line 186
undef($memory_23);
#line 187
const_evaluator_priv::evaluate_const($memory_7, $memory_8, $memory_16, $memory_17, $memory_6, $memory_5, $memory_19);
#line 187
undef($memory_22);
#line 188
goto label_679;
#line 188
label_389:
#line 188
$memory_22 = c_rt_lib::ov_as($memory_20, 'bin_op');
#line 189
$memory_24 = $memory_22->{'left'};
#line 189
$memory_23 = $memory_6->[$memory_24];
#line 189
undef($memory_24);
#line 189
const_evaluator_priv::check_sub_val($memory_17, $memory_23);
#line 189
undef($memory_23);
#line 190
$memory_24 = $memory_22->{'right'};
#line 190
$memory_23 = $memory_6->[$memory_24];
#line 190
undef($memory_24);
#line 190
const_evaluator_priv::check_sub_val($memory_17, $memory_23);
#line 190
undef($memory_23);
#line 191
$memory_24 = $memory_22->{'dest'};
#line 191
$memory_23 = [$memory_24];
#line 191
undef($memory_24);
#line 191
$memory_19 = $memory_23;
#line 191
undef($memory_23);
#line 192
const_evaluator_priv::evaluate_const($memory_7, $memory_8, $memory_16, $memory_17, $memory_6, $memory_5, $memory_19);
#line 192
undef($memory_22);
#line 193
goto label_679;
#line 193
label_409:
#line 193
$memory_22 = c_rt_lib::ov_as($memory_20, 'ov_is');
#line 194
$memory_24 = $memory_22->{'src'};
#line 194
$memory_23 = $memory_6->[$memory_24];
#line 194
undef($memory_24);
#line 194
const_evaluator_priv::check_sub_val($memory_17, $memory_23);
#line 194
undef($memory_23);
#line 195
$memory_24 = $memory_22->{'dest'};
#line 195
$memory_23 = [$memory_24];
#line 195
undef($memory_24);
#line 195
$memory_19 = $memory_23;
#line 195
undef($memory_23);
#line 196
const_evaluator_priv::evaluate_const($memory_7, $memory_8, $memory_16, $memory_17, $memory_6, $memory_5, $memory_19);
#line 196
undef($memory_22);
#line 197
goto label_679;
#line 197
label_424:
#line 197
$memory_22 = c_rt_lib::ov_as($memory_20, 'ov_as');
#line 198
$memory_24 = $memory_22->{'src'};
#line 198
$memory_23 = $memory_6->[$memory_24];
#line 198
undef($memory_24);
#line 198
const_evaluator_priv::check_sub_val($memory_17, $memory_23);
#line 198
undef($memory_23);
#line 199
$memory_24 = $memory_22->{'dest'};
#line 199
$memory_23 = [$memory_24];
#line 199
undef($memory_24);
#line 199
$memory_19 = $memory_23;
#line 199
undef($memory_23);
#line 200
const_evaluator_priv::evaluate_const($memory_7, $memory_8, $memory_16, $memory_17, $memory_6, $memory_5, $memory_19);
#line 200
undef($memory_22);
#line 201
goto label_679;
#line 201
label_439:
#line 201
$memory_22 = c_rt_lib::ov_as($memory_20, 'func');
#line 202
$memory_24 = $memory_22->{'dest'};
#line 202
$memory_23 = [$memory_24];
#line 202
undef($memory_24);
#line 202
$memory_19 = $memory_23;
#line 202
undef($memory_23);
#line 203
$memory_23 = c_rt_lib::ov_mk_none('no');
#line 203
$memory_17 = $memory_23;
#line 203
undef($memory_23);
#line 204
const_evaluator_priv::evaluate_const($memory_7, $memory_8, $memory_16, $memory_17, $memory_6, $memory_5, $memory_19);
#line 204
undef($memory_22);
#line 205
goto label_679;
#line 205
label_452:
#line 205
$memory_22 = c_rt_lib::ov_as($memory_20, 'move');
#line 206
$memory_24 = $memory_22->{'src'};
#line 206
$memory_23 = $memory_6->[$memory_24];
#line 206
undef($memory_24);
#line 206
const_evaluator_priv::check_sub_val($memory_17, $memory_23);
#line 206
undef($memory_23);
#line 207
$memory_24 = $memory_22->{'dest'};
#line 207
$memory_23 = [$memory_24];
#line 207
undef($memory_24);
#line 207
$memory_19 = $memory_23;
#line 207
undef($memory_23);
#line 208
const_evaluator_priv::evaluate_const($memory_7, $memory_8, $memory_16, $memory_17, $memory_6, $memory_5, $memory_19);
#line 208
undef($memory_22);
#line 209
goto label_679;
#line 209
label_467:
#line 209
$memory_22 = c_rt_lib::ov_as($memory_20, 'load_const');
#line 210
$memory_24 = $memory_22->{'dest'};
#line 210
$memory_23 = [$memory_24];
#line 210
undef($memory_24);
#line 210
$memory_19 = $memory_23;
#line 210
undef($memory_23);
#line 211
$memory_24 = $memory_9->{'from'};
#line 211
$memory_24 = $memory_13 + $memory_24;
#line 211
$memory_25 = $memory_22->{'val'};
#line 211
$memory_23 = {nr => $memory_24,value => $memory_25,};
#line 211
undef($memory_24);
#line 211
undef($memory_25);
#line 211
$memory_23 = c_rt_lib::ov_mk_arg('yes', $memory_23);
#line 211
$memory_17 = $memory_23;
#line 211
undef($memory_23);
#line 212
$memory_23 = $memory_22->{'dest'};
#line 212
$memory_24 = "";
#line 212
$memory_23 = c_rt_lib::to_nl($memory_23 eq $memory_24);
#line 212
undef($memory_24);
#line 212
$memory_23 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_23));
#line 212
$memory_23 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_23));
#line 212
if (c_rt_lib::check_true($memory_23)) {goto label_496;}
#line 212
$memory_25 = $memory_22->{'dest'};
#line 212
$memory_24 = $memory_17;
#line 212
 if (c_rt_lib::get_arrcount($memory_6) > 1) {$memory_6 = [@{$memory_6}];}$memory_6->[$memory_25] = $memory_24;
#line 212
undef($memory_24);
#line 212
undef($memory_25);
#line 212
goto label_496;
#line 212
label_496:
#line 212
undef($memory_23);
#line 213
$memory_24 = $memory_22->{'dest'};
#line 213
$memory_23 = [$memory_24];
#line 213
undef($memory_24);
#line 213
$memory_23 = c_rt_lib::ov_mk_arg('const', $memory_23);
#line 213
$memory_24 = $memory_23;
#line 213
 if (c_rt_lib::get_hashcount($memory_18) > 1) {$memory_18 = {%{$memory_18}};}$memory_18->{'annotation'} = $memory_24;
#line 213
undef($memory_23);
#line 213
undef($memory_24);
#line 213
undef($memory_22);
#line 214
goto label_679;
#line 214
label_508:
#line 214
$memory_22 = c_rt_lib::ov_as($memory_20, 'get_frm_idx');
#line 215
$memory_24 = $memory_22->{'src'};
#line 215
$memory_23 = $memory_6->[$memory_24];
#line 215
undef($memory_24);
#line 215
const_evaluator_priv::check_sub_val($memory_17, $memory_23);
#line 215
undef($memory_23);
#line 216
$memory_24 = $memory_22->{'idx'};
#line 216
$memory_23 = $memory_6->[$memory_24];
#line 216
undef($memory_24);
#line 216
const_evaluator_priv::check_sub_val($memory_17, $memory_23);
#line 216
undef($memory_23);
#line 217
$memory_24 = $memory_22->{'dest'};
#line 217
$memory_23 = [$memory_24];
#line 217
undef($memory_24);
#line 217
$memory_19 = $memory_23;
#line 217
undef($memory_23);
#line 218
const_evaluator_priv::evaluate_const($memory_7, $memory_8, $memory_16, $memory_17, $memory_6, $memory_5, $memory_19);
#line 218
undef($memory_22);
#line 219
goto label_679;
#line 219
label_528:
#line 219
$memory_22 = c_rt_lib::ov_as($memory_20, 'set_at_idx');
#line 220
$memory_24 = $memory_22->{'src'};
#line 220
$memory_23 = $memory_6->[$memory_24];
#line 220
undef($memory_24);
#line 220
const_evaluator_priv::check_sub_val($memory_17, $memory_23);
#line 220
undef($memory_23);
#line 221
$memory_24 = $memory_22->{'idx'};
#line 221
$memory_23 = $memory_6->[$memory_24];
#line 221
undef($memory_24);
#line 221
const_evaluator_priv::check_sub_val($memory_17, $memory_23);
#line 221
undef($memory_23);
#line 222
$memory_24 = $memory_22->{'val'};
#line 222
$memory_23 = $memory_6->[$memory_24];
#line 222
undef($memory_24);
#line 222
const_evaluator_priv::check_sub_val($memory_17, $memory_23);
#line 222
undef($memory_23);
#line 223
$memory_24 = $memory_22->{'src'};
#line 223
$memory_23 = [$memory_24];
#line 223
undef($memory_24);
#line 223
$memory_19 = $memory_23;
#line 223
undef($memory_23);
#line 224
const_evaluator_priv::evaluate_const($memory_7, $memory_8, $memory_16, $memory_17, $memory_6, $memory_5, $memory_19);
#line 224
undef($memory_22);
#line 225
goto label_679;
#line 225
label_553:
#line 225
$memory_22 = c_rt_lib::ov_as($memory_20, 'get_val');
#line 226
$memory_24 = $memory_22->{'src'};
#line 226
$memory_23 = $memory_6->[$memory_24];
#line 226
undef($memory_24);
#line 226
const_evaluator_priv::check_sub_val($memory_17, $memory_23);
#line 226
undef($memory_23);
#line 227
$memory_24 = $memory_22->{'dest'};
#line 227
$memory_23 = [$memory_24];
#line 227
undef($memory_24);
#line 227
$memory_19 = $memory_23;
#line 227
undef($memory_23);
#line 228
const_evaluator_priv::evaluate_const($memory_7, $memory_8, $memory_16, $memory_17, $memory_6, $memory_5, $memory_19);
#line 228
undef($memory_22);
#line 229
goto label_679;
#line 229
label_568:
#line 229
$memory_22 = c_rt_lib::ov_as($memory_20, 'set_val');
#line 230
$memory_24 = $memory_22->{'src'};
#line 230
$memory_23 = $memory_6->[$memory_24];
#line 230
undef($memory_24);
#line 230
const_evaluator_priv::check_sub_val($memory_17, $memory_23);
#line 230
undef($memory_23);
#line 231
$memory_24 = $memory_22->{'val'};
#line 231
$memory_23 = $memory_6->[$memory_24];
#line 231
undef($memory_24);
#line 231
const_evaluator_priv::check_sub_val($memory_17, $memory_23);
#line 231
undef($memory_23);
#line 232
$memory_24 = $memory_22->{'src'};
#line 232
$memory_23 = [$memory_24];
#line 232
undef($memory_24);
#line 232
$memory_19 = $memory_23;
#line 232
undef($memory_23);
#line 233
const_evaluator_priv::evaluate_const($memory_7, $memory_8, $memory_16, $memory_17, $memory_6, $memory_5, $memory_19);
#line 233
undef($memory_22);
#line 234
goto label_679;
#line 234
label_588:
#line 234
$memory_22 = c_rt_lib::ov_as($memory_20, 'ov_mk');
#line 235
$memory_23 = $memory_22->{'src'};
#line 235
$memory_23 = c_rt_lib::ov_is($memory_23, 'arg');
#line 235
$memory_23 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_23));
#line 235
if (c_rt_lib::check_true($memory_23)) {goto label_601;}
#line 236
$memory_25 = $memory_22->{'src'};
#line 236
$memory_25 = c_rt_lib::ov_as($memory_25, 'arg');
#line 236
$memory_24 = $memory_6->[$memory_25];
#line 236
undef($memory_25);
#line 236
const_evaluator_priv::check_sub_val($memory_17, $memory_24);
#line 236
undef($memory_24);
#line 237
goto label_601;
#line 237
label_601:
#line 237
undef($memory_23);
#line 238
$memory_24 = $memory_22->{'dest'};
#line 238
$memory_23 = [$memory_24];
#line 238
undef($memory_24);
#line 238
$memory_19 = $memory_23;
#line 238
undef($memory_23);
#line 239
const_evaluator_priv::evaluate_const($memory_7, $memory_8, $memory_16, $memory_17, $memory_6, $memory_5, $memory_19);
#line 239
undef($memory_22);
#line 240
goto label_679;
#line 240
label_611:
#line 240
$memory_22 = c_rt_lib::ov_as($memory_20, 'return');
#line 241
$memory_23 = c_rt_lib::ov_mk_none('no');
#line 241
$memory_17 = $memory_23;
#line 241
undef($memory_23);
#line 242
$memory_23 = $memory_22;
#line 242
$memory_23 = c_rt_lib::ov_is($memory_23, 'val');
#line 242
$memory_23 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_23));
#line 242
if (c_rt_lib::check_true($memory_23)) {goto label_627;}
#line 243
$memory_25 = $memory_22;
#line 243
$memory_25 = c_rt_lib::ov_as($memory_25, 'val');
#line 243
$memory_24 = $memory_6->[$memory_25];
#line 243
undef($memory_25);
#line 243
const_evaluator_priv::check_sub_val($memory_17, $memory_24);
#line 243
undef($memory_24);
#line 244
goto label_627;
#line 244
label_627:
#line 244
undef($memory_23);
#line 244
undef($memory_22);
#line 245
goto label_679;
#line 245
label_631:
#line 245
$memory_22 = c_rt_lib::ov_as($memory_20, 'die');
#line 246
$memory_23 = c_rt_lib::ov_mk_none('no');
#line 246
$memory_17 = $memory_23;
#line 246
undef($memory_23);
#line 247
$memory_23 = $memory_6->[$memory_22];
#line 247
const_evaluator_priv::check_sub_val($memory_17, $memory_23);
#line 247
undef($memory_23);
#line 247
undef($memory_22);
#line 248
goto label_679;
#line 248
label_641:
#line 248
$memory_22 = c_rt_lib::ov_as($memory_20, 'prt_lbl');
#line 249
$memory_23 = c_rt_lib::ov_mk_none('no');
#line 249
$memory_17 = $memory_23;
#line 249
undef($memory_23);
#line 249
undef($memory_22);
#line 250
goto label_679;
#line 250
label_648:
#line 250
$memory_22 = c_rt_lib::ov_as($memory_20, 'if_goto');
#line 251
$memory_23 = c_rt_lib::ov_mk_none('no');
#line 251
$memory_17 = $memory_23;
#line 251
undef($memory_23);
#line 252
$memory_24 = $memory_22->{'src'};
#line 252
$memory_23 = $memory_6->[$memory_24];
#line 252
undef($memory_24);
#line 252
const_evaluator_priv::check_sub_val($memory_17, $memory_23);
#line 252
undef($memory_23);
#line 252
undef($memory_22);
#line 253
goto label_679;
#line 253
label_660:
#line 253
$memory_22 = c_rt_lib::ov_as($memory_20, 'goto');
#line 254
$memory_23 = c_rt_lib::ov_mk_none('no');
#line 254
$memory_17 = $memory_23;
#line 254
undef($memory_23);
#line 254
undef($memory_22);
#line 255
goto label_679;
#line 255
label_667:
#line 255
$memory_22 = c_rt_lib::ov_as($memory_20, 'clear');
#line 256
$memory_23 = c_rt_lib::ov_mk_none('no');
#line 256
$memory_17 = $memory_23;
#line 256
undef($memory_23);
#line 257
$memory_23 = c_rt_lib::ov_mk_none('no');
#line 257
$memory_24 = $memory_23;
#line 257
 if (c_rt_lib::get_arrcount($memory_6) > 1) {$memory_6 = [@{$memory_6}];}$memory_6->[$memory_22] = $memory_24;
#line 257
undef($memory_23);
#line 257
undef($memory_24);
#line 257
undef($memory_22);
#line 258
goto label_679;
#line 258
label_679:
#line 258
undef($memory_20);
#line 258
undef($memory_21);
#line 259
$memory_20 = $memory_17;
#line 259
$memory_20 = c_rt_lib::ov_is($memory_20, 'yes');
#line 259
$memory_20 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_20));
#line 259
if (c_rt_lib::check_true($memory_20)) {goto label_715;}
#line 260
$memory_22 = 0;
#line 260
$memory_23 = 1;
#line 260
$memory_24 = c_rt_lib::array_len($memory_19);
#line 260
label_689:
#line 260
$memory_25 = c_rt_lib::to_nl($memory_22 >= $memory_24);
#line 260
if (c_rt_lib::check_true($memory_25)) {goto label_708;}
#line 260
$memory_21 = $memory_19->[$memory_22];
#line 261
$memory_26 = "";
#line 261
$memory_26 = c_rt_lib::to_nl($memory_21 eq $memory_26);
#line 261
$memory_26 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_26));
#line 261
$memory_26 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_26));
#line 261
if (c_rt_lib::check_true($memory_26)) {goto label_704;}
#line 261
$memory_27 = $memory_6->[$memory_21];
#line 261
$memory_28 = $memory_11->[$memory_13];
#line 261
const_evaluator_priv::push_load_const($memory_10, $memory_27, $memory_21, $memory_28);
#line 261
undef($memory_28);
#line 261
undef($memory_27);
#line 261
goto label_704;
#line 261
label_704:
#line 261
undef($memory_26);
#line 262
$memory_22 = $memory_22 + $memory_23;
#line 262
goto label_689;
#line 262
label_708:
#line 262
undef($memory_21);
#line 262
undef($memory_22);
#line 262
undef($memory_23);
#line 262
undef($memory_24);
#line 262
undef($memory_25);
#line 263
goto label_718;
#line 263
label_715:
#line 264
array::push($memory_10, $memory_18);
#line 265
goto label_718;
#line 265
label_718:
#line 265
undef($memory_20);
#line 265
undef($memory_16);
#line 265
undef($memory_17);
#line 265
undef($memory_18);
#line 265
undef($memory_19);
#line 266
$memory_13 = $memory_13 + $memory_14;
#line 266
goto label_125;
#line 266
label_726:
#line 266
undef($memory_12);
#line 266
undef($memory_13);
#line 266
undef($memory_14);
#line 266
undef($memory_15);
#line 267
$memory_12 = c_rt_lib::get_ref_arr($memory_2, $memory_0);
#line 267
$memory_13 = $memory_10;
#line 267
 if (c_rt_lib::get_hashcount($memory_12) > 1) {$memory_12 = {%{$memory_12}};}$memory_12->{'cmds'} = $memory_13;
#line 267
c_rt_lib::set_ref_arr($memory_2, $memory_0, $memory_12);
#line 267
undef($memory_12);
#line 267
undef($memory_13);
#line 268
$memory_12 = $memory_9->{'next'};
#line 268
$memory_14 = 0;
#line 268
$memory_15 = 1;
#line 268
$memory_16 = c_rt_lib::array_len($memory_12);
#line 268
label_741:
#line 268
$memory_17 = c_rt_lib::to_nl($memory_14 >= $memory_16);
#line 268
if (c_rt_lib::check_true($memory_17)) {goto label_748;}
#line 268
$memory_13 = $memory_12->[$memory_14];
#line 269
const_evaluator_priv::set_const_block_val($memory_13, $memory_1, $memory_2, $memory_3, $memory_4, $memory_5, $memory_6, $memory_7, $memory_8);
#line 270
$memory_14 = $memory_14 + $memory_15;
#line 270
goto label_741;
#line 270
label_748:
#line 270
undef($memory_12);
#line 270
undef($memory_13);
#line 270
undef($memory_14);
#line 270
undef($memory_15);
#line 270
undef($memory_16);
#line 270
undef($memory_17);
#line 270
undef($memory_9);
#line 270
undef($memory_10);
#line 270
undef($memory_11);
#line 270
undef($memory_0);
#line 270
undef($memory_1);
#line 270
undef($memory_3);
#line 270
undef($memory_5);
#line 270
undef($memory_6);
#line 270
undef($memory_7);
#line 270
undef($memory_8);
#line 270
$_[2] = $memory_2;$_[4] = $memory_4;return;
$_[2] = $memory_2;$_[4] = $memory_4;}
