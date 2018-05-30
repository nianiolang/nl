use c_rt_lib;
use ptd;
use nlasm;
use boolean_t;
use array;
sub register_cleaner::clean_registers;
sub register_cleaner_priv::clean;
sub register_cleaner_priv::clean_f;
sub register_cleaner_priv::recalculate_registers;
sub register_cleaner_priv::recalculate_annotation;
sub register_cleaner_priv::find_unused_regs;

return 1;

sub register_cleaner::clean_registers($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);
#line 13
$memory_1 = {};
#line 14
$memory_4 = c_rt_lib::init_iter($memory_0);
#line 14
label_2:
#line 14
$memory_2 = c_rt_lib::is_end_hash($memory_4);
#line 14
if (c_rt_lib::check_true($memory_2)) {goto label_14;}
#line 14
$memory_2 = c_rt_lib::get_key_iter($memory_4);
#line 14
$memory_3 = c_rt_lib::hash_get_value($memory_0, $memory_2);
#line 15
$memory_5 = register_cleaner_priv::clean($memory_3);
#line 15
$memory_6 = $memory_5;
#line 15
c_rt_lib::hash_set_value($memory_1, $memory_2, $memory_6);
#line 15
undef($memory_5);
#line 15
undef($memory_6);
#line 16
$memory_4 = c_rt_lib::next_iter($memory_4);
#line 16
goto label_2;
#line 16
label_14:
#line 16
undef($memory_2);
#line 16
undef($memory_3);
#line 16
undef($memory_4);
#line 17
$memory_0 = $memory_1;
#line 17
undef($memory_1);
#line 17
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub register_cleaner_priv::clean($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;$memory_0 = $_[0];
#line 22
$memory_1 = [];
#line 23
$memory_2 = $memory_0->{'functions'};
#line 23
$memory_4 = 0;
#line 23
$memory_5 = 1;
#line 23
$memory_6 = c_rt_lib::array_len($memory_2);
#line 23
label_5:
#line 23
$memory_7 = c_rt_lib::to_nl($memory_4 >= $memory_6);
#line 23
if (c_rt_lib::check_true($memory_7)) {goto label_14;}
#line 23
$memory_3 = $memory_2->[$memory_4];
#line 24
$memory_8 = register_cleaner_priv::clean_f($memory_3);
#line 24
c_rt_lib::array_push($memory_1, $memory_8);
#line 24
undef($memory_8);
#line 25
$memory_4 = $memory_4 + $memory_5;
#line 25
goto label_5;
#line 25
label_14:
#line 25
undef($memory_2);
#line 25
undef($memory_3);
#line 25
undef($memory_4);
#line 25
undef($memory_5);
#line 25
undef($memory_6);
#line 25
undef($memory_7);
#line 26
$memory_2 = $memory_1;
#line 26
 if (c_rt_lib::get_hashcount($memory_0) > 1) {$memory_0 = {%{$memory_0}};}$memory_0->{'functions'} = $memory_2;
#line 26
undef($memory_2);
#line 27
undef($memory_1);
#line 27
return $memory_0;
#line 27
undef($memory_1);
#line 27
undef($memory_0);
#line 27
return;
}

sub register_cleaner_priv::clean_f($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;$memory_0 = $_[0];
#line 32
$memory_1 = register_cleaner_priv::find_unused_regs($memory_0);
#line 34
$memory_2 = 0;
#line 35
$memory_3 = {};
#line 36
$memory_4 = $memory_0->{'reg_size'};
#line 36
$memory_5 = 0;
#line 36
$memory_6 = 1;
#line 36
label_6:
#line 36
$memory_7 = c_rt_lib::to_nl($memory_5 >= $memory_4);
#line 36
if (c_rt_lib::check_true($memory_7)) {goto label_23;}
#line 37
$memory_8 = c_rt_lib::hash_get_value($memory_1, $memory_5);
#line 37
$memory_8 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 37
if (c_rt_lib::check_true($memory_8)) {goto label_19;}
#line 38
$memory_9 = $memory_2;
#line 38
c_rt_lib::hash_set_value($memory_3, $memory_5, $memory_9);
#line 38
undef($memory_9);
#line 39
$memory_9 = 1;
#line 39
$memory_2 = $memory_2 + $memory_9;
#line 39
undef($memory_9);
#line 40
goto label_19;
#line 40
label_19:
#line 40
undef($memory_8);
#line 41
$memory_5 = $memory_5 + $memory_6;
#line 41
goto label_6;
#line 41
label_23:
#line 41
undef($memory_4);
#line 41
undef($memory_5);
#line 41
undef($memory_6);
#line 41
undef($memory_7);
#line 42
$memory_4 = "";
#line 42
$memory_6 = "";
#line 42
$memory_5 = $memory_4;
#line 42
c_rt_lib::hash_set_value($memory_3, $memory_6, $memory_5);
#line 42
undef($memory_4);
#line 42
undef($memory_5);
#line 42
undef($memory_6);
#line 43
$memory_4 = $memory_0;
#line 44
$memory_5 = $memory_2;
#line 44
 if (c_rt_lib::get_hashcount($memory_4) > 1) {$memory_4 = {%{$memory_4}};}$memory_4->{'reg_size'} = $memory_5;
#line 44
undef($memory_5);
#line 45
$memory_6 = $memory_0->{'commands'};
#line 45
$memory_5 = register_cleaner_priv::recalculate_registers($memory_6, $memory_3);
#line 45
undef($memory_6);
#line 45
$memory_6 = $memory_5;
#line 45
 if (c_rt_lib::get_hashcount($memory_4) > 1) {$memory_4 = {%{$memory_4}};}$memory_4->{'commands'} = $memory_6;
#line 45
undef($memory_5);
#line 45
undef($memory_6);
#line 46
undef($memory_0);
#line 46
undef($memory_1);
#line 46
undef($memory_2);
#line 46
undef($memory_3);
#line 46
return $memory_4;
#line 46
undef($memory_1);
#line 46
undef($memory_2);
#line 46
undef($memory_3);
#line 46
undef($memory_4);
#line 46
undef($memory_0);
#line 46
return;
}

sub register_cleaner_priv::recalculate_registers($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;my $memory_13;my $memory_14;my $memory_15;my $memory_16;my $memory_17;my $memory_18;my $memory_19;my $memory_20;my $memory_21;my $memory_22;$memory_0 = $_[0];$memory_1 = $_[1];
#line 51
$memory_2 = [];
#line 52
$memory_4 = 0;
#line 52
$memory_5 = 1;
#line 52
$memory_6 = c_rt_lib::array_len($memory_0);
#line 52
label_4:
#line 52
$memory_7 = c_rt_lib::to_nl($memory_4 >= $memory_6);
#line 52
if (c_rt_lib::check_true($memory_7)) {goto label_514;}
#line 52
$memory_3 = $memory_0->[$memory_4];
#line 54
$memory_9 = $memory_3->{'cmd'};
#line 54
$memory_10 = c_rt_lib::ov_is($memory_9, 'arr_decl');
#line 54
if (c_rt_lib::check_true($memory_10)) {goto label_54;}
#line 63
$memory_10 = c_rt_lib::ov_is($memory_9, 'hash_decl');
#line 63
if (c_rt_lib::check_true($memory_10)) {goto label_88;}
#line 74
$memory_10 = c_rt_lib::ov_is($memory_9, 'func');
#line 74
if (c_rt_lib::check_true($memory_10)) {goto label_128;}
#line 80
$memory_10 = c_rt_lib::ov_is($memory_9, 'call');
#line 80
if (c_rt_lib::check_true($memory_10)) {goto label_144;}
#line 97
$memory_10 = c_rt_lib::ov_is($memory_9, 'una_op');
#line 97
if (c_rt_lib::check_true($memory_10)) {goto label_206;}
#line 103
$memory_10 = c_rt_lib::ov_is($memory_9, 'bin_op');
#line 103
if (c_rt_lib::check_true($memory_10)) {goto label_224;}
#line 110
$memory_10 = c_rt_lib::ov_is($memory_9, 'ov_is');
#line 110
if (c_rt_lib::check_true($memory_10)) {goto label_246;}
#line 116
$memory_10 = c_rt_lib::ov_is($memory_9, 'ov_as');
#line 116
if (c_rt_lib::check_true($memory_10)) {goto label_264;}
#line 122
$memory_10 = c_rt_lib::ov_is($memory_9, 'return');
#line 122
if (c_rt_lib::check_true($memory_10)) {goto label_282;}
#line 128
$memory_10 = c_rt_lib::ov_is($memory_9, 'die');
#line 128
if (c_rt_lib::check_true($memory_10)) {goto label_310;}
#line 130
$memory_10 = c_rt_lib::ov_is($memory_9, 'move');
#line 130
if (c_rt_lib::check_true($memory_10)) {goto label_318;}
#line 135
$memory_10 = c_rt_lib::ov_is($memory_9, 'load_const');
#line 135
if (c_rt_lib::check_true($memory_10)) {goto label_334;}
#line 140
$memory_10 = c_rt_lib::ov_is($memory_9, 'get_frm_idx');
#line 140
if (c_rt_lib::check_true($memory_10)) {goto label_348;}
#line 146
$memory_10 = c_rt_lib::ov_is($memory_9, 'set_at_idx');
#line 146
if (c_rt_lib::check_true($memory_10)) {goto label_368;}
#line 152
$memory_10 = c_rt_lib::ov_is($memory_9, 'get_val');
#line 152
if (c_rt_lib::check_true($memory_10)) {goto label_388;}
#line 158
$memory_10 = c_rt_lib::ov_is($memory_9, 'set_val');
#line 158
if (c_rt_lib::check_true($memory_10)) {goto label_406;}
#line 164
$memory_10 = c_rt_lib::ov_is($memory_9, 'ov_mk');
#line 164
if (c_rt_lib::check_true($memory_10)) {goto label_424;}
#line 176
$memory_10 = c_rt_lib::ov_is($memory_9, 'prt_lbl');
#line 176
if (c_rt_lib::check_true($memory_10)) {goto label_463;}
#line 178
$memory_10 = c_rt_lib::ov_is($memory_9, 'if_goto');
#line 178
if (c_rt_lib::check_true($memory_10)) {goto label_470;}
#line 183
$memory_10 = c_rt_lib::ov_is($memory_9, 'goto');
#line 183
if (c_rt_lib::check_true($memory_10)) {goto label_484;}
#line 185
$memory_10 = c_rt_lib::ov_is($memory_9, 'clear');
#line 185
if (c_rt_lib::check_true($memory_10)) {goto label_491;}
#line 185
$memory_10 = "NOMATCHALERT";
#line 185
$memory_10 = [$memory_10,$memory_9];
#line 185
die(dfile::ssave($memory_10));
#line 54
label_54:
#line 54
$memory_11 = c_rt_lib::ov_as($memory_9, 'arr_decl');
#line 55
$memory_12 = [];
#line 56
$memory_13 = $memory_11->{'src'};
#line 56
$memory_15 = 0;
#line 56
$memory_16 = 1;
#line 56
$memory_17 = c_rt_lib::array_len($memory_13);
#line 56
label_61:
#line 56
$memory_18 = c_rt_lib::to_nl($memory_15 >= $memory_17);
#line 56
if (c_rt_lib::check_true($memory_18)) {goto label_70;}
#line 56
$memory_14 = $memory_13->[$memory_15];
#line 57
$memory_19 = c_rt_lib::hash_get_value($memory_1, $memory_14);
#line 57
c_rt_lib::array_push($memory_12, $memory_19);
#line 57
undef($memory_19);
#line 58
$memory_15 = $memory_15 + $memory_16;
#line 58
goto label_61;
#line 58
label_70:
#line 58
undef($memory_13);
#line 58
undef($memory_14);
#line 58
undef($memory_15);
#line 58
undef($memory_16);
#line 58
undef($memory_17);
#line 58
undef($memory_18);
#line 60
$memory_15 = $memory_11->{'dest'};
#line 60
$memory_14 = c_rt_lib::hash_get_value($memory_1, $memory_15);
#line 60
undef($memory_15);
#line 60
$memory_13 = {dest => $memory_14,src => $memory_12,};
#line 60
undef($memory_14);
#line 60
$memory_13 = c_rt_lib::ov_mk_arg('arr_decl', $memory_13);
#line 60
$memory_8 = $memory_13;
#line 60
undef($memory_13);
#line 60
undef($memory_12);
#line 60
undef($memory_11);
#line 63
goto label_499;
#line 63
label_88:
#line 63
$memory_11 = c_rt_lib::ov_as($memory_9, 'hash_decl');
#line 64
$memory_12 = [];
#line 65
$memory_13 = $memory_11->{'src'};
#line 65
$memory_15 = 0;
#line 65
$memory_16 = 1;
#line 65
$memory_17 = c_rt_lib::array_len($memory_13);
#line 65
label_95:
#line 65
$memory_18 = c_rt_lib::to_nl($memory_15 >= $memory_17);
#line 65
if (c_rt_lib::check_true($memory_18)) {goto label_110;}
#line 65
$memory_14 = $memory_13->[$memory_15];
#line 67
$memory_20 = $memory_14->{'key'};
#line 67
$memory_22 = $memory_14->{'val'};
#line 67
$memory_21 = c_rt_lib::hash_get_value($memory_1, $memory_22);
#line 67
undef($memory_22);
#line 67
$memory_19 = {key => $memory_20,val => $memory_21,};
#line 67
undef($memory_20);
#line 67
undef($memory_21);
#line 67
c_rt_lib::array_push($memory_12, $memory_19);
#line 67
undef($memory_19);
#line 69
$memory_15 = $memory_15 + $memory_16;
#line 69
goto label_95;
#line 69
label_110:
#line 69
undef($memory_13);
#line 69
undef($memory_14);
#line 69
undef($memory_15);
#line 69
undef($memory_16);
#line 69
undef($memory_17);
#line 69
undef($memory_18);
#line 71
$memory_15 = $memory_11->{'dest'};
#line 71
$memory_14 = c_rt_lib::hash_get_value($memory_1, $memory_15);
#line 71
undef($memory_15);
#line 71
$memory_13 = {dest => $memory_14,src => $memory_12,};
#line 71
undef($memory_14);
#line 71
$memory_13 = c_rt_lib::ov_mk_arg('hash_decl', $memory_13);
#line 71
$memory_8 = $memory_13;
#line 71
undef($memory_13);
#line 71
undef($memory_12);
#line 71
undef($memory_11);
#line 74
goto label_499;
#line 74
label_128:
#line 74
$memory_11 = c_rt_lib::ov_as($memory_9, 'func');
#line 76
$memory_14 = $memory_11->{'dest'};
#line 76
$memory_13 = c_rt_lib::hash_get_value($memory_1, $memory_14);
#line 76
undef($memory_14);
#line 77
$memory_14 = $memory_11->{'module'};
#line 78
$memory_15 = $memory_11->{'name'};
#line 78
$memory_12 = {dest => $memory_13,module => $memory_14,name => $memory_15,};
#line 78
undef($memory_13);
#line 78
undef($memory_14);
#line 78
undef($memory_15);
#line 78
$memory_12 = c_rt_lib::ov_mk_arg('func', $memory_12);
#line 78
$memory_8 = $memory_12;
#line 78
undef($memory_12);
#line 78
undef($memory_11);
#line 80
goto label_499;
#line 80
label_144:
#line 80
$memory_11 = c_rt_lib::ov_as($memory_9, 'call');
#line 81
$memory_12 = [];
#line 82
$memory_13 = $memory_11->{'args'};
#line 82
$memory_15 = 0;
#line 82
$memory_16 = 1;
#line 82
$memory_17 = c_rt_lib::array_len($memory_13);
#line 82
label_151:
#line 82
$memory_18 = c_rt_lib::to_nl($memory_15 >= $memory_17);
#line 82
if (c_rt_lib::check_true($memory_18)) {goto label_184;}
#line 82
$memory_14 = $memory_13->[$memory_15];
#line 84
$memory_20 = c_rt_lib::ov_is($memory_14, 'val');
#line 84
if (c_rt_lib::check_true($memory_20)) {goto label_162;}
#line 86
$memory_20 = c_rt_lib::ov_is($memory_14, 'ref');
#line 86
if (c_rt_lib::check_true($memory_20)) {goto label_170;}
#line 86
$memory_20 = "NOMATCHALERT";
#line 86
$memory_20 = [$memory_20,$memory_14];
#line 86
die(dfile::ssave($memory_20));
#line 84
label_162:
#line 84
$memory_21 = c_rt_lib::ov_as($memory_14, 'val');
#line 85
$memory_22 = c_rt_lib::hash_get_value($memory_1, $memory_21);
#line 85
$memory_22 = c_rt_lib::ov_mk_arg('val', $memory_22);
#line 85
$memory_19 = $memory_22;
#line 85
undef($memory_22);
#line 85
undef($memory_21);
#line 86
goto label_178;
#line 86
label_170:
#line 86
$memory_21 = c_rt_lib::ov_as($memory_14, 'ref');
#line 87
$memory_22 = c_rt_lib::hash_get_value($memory_1, $memory_21);
#line 87
$memory_22 = c_rt_lib::ov_mk_arg('ref', $memory_22);
#line 87
$memory_19 = $memory_22;
#line 87
undef($memory_22);
#line 87
undef($memory_21);
#line 88
goto label_178;
#line 88
label_178:
#line 88
undef($memory_20);
#line 89
c_rt_lib::array_push($memory_12, $memory_19);
#line 89
undef($memory_19);
#line 90
$memory_15 = $memory_15 + $memory_16;
#line 90
goto label_151;
#line 90
label_184:
#line 90
undef($memory_13);
#line 90
undef($memory_14);
#line 90
undef($memory_15);
#line 90
undef($memory_16);
#line 90
undef($memory_17);
#line 90
undef($memory_18);
#line 92
$memory_15 = $memory_11->{'dest'};
#line 92
$memory_14 = c_rt_lib::hash_get_value($memory_1, $memory_15);
#line 92
undef($memory_15);
#line 93
$memory_15 = $memory_11->{'mod'};
#line 94
$memory_16 = $memory_11->{'fun_name'};
#line 94
$memory_13 = {dest => $memory_14,mod => $memory_15,fun_name => $memory_16,args => $memory_12,};
#line 94
undef($memory_14);
#line 94
undef($memory_15);
#line 94
undef($memory_16);
#line 94
$memory_13 = c_rt_lib::ov_mk_arg('call', $memory_13);
#line 94
$memory_8 = $memory_13;
#line 94
undef($memory_13);
#line 94
undef($memory_12);
#line 94
undef($memory_11);
#line 97
goto label_499;
#line 97
label_206:
#line 97
$memory_11 = c_rt_lib::ov_as($memory_9, 'una_op');
#line 99
$memory_14 = $memory_11->{'dest'};
#line 99
$memory_13 = c_rt_lib::hash_get_value($memory_1, $memory_14);
#line 99
undef($memory_14);
#line 100
$memory_15 = $memory_11->{'src'};
#line 100
$memory_14 = c_rt_lib::hash_get_value($memory_1, $memory_15);
#line 100
undef($memory_15);
#line 101
$memory_15 = $memory_11->{'op'};
#line 101
$memory_12 = {dest => $memory_13,src => $memory_14,op => $memory_15,};
#line 101
undef($memory_13);
#line 101
undef($memory_14);
#line 101
undef($memory_15);
#line 101
$memory_12 = c_rt_lib::ov_mk_arg('una_op', $memory_12);
#line 101
$memory_8 = $memory_12;
#line 101
undef($memory_12);
#line 101
undef($memory_11);
#line 103
goto label_499;
#line 103
label_224:
#line 103
$memory_11 = c_rt_lib::ov_as($memory_9, 'bin_op');
#line 105
$memory_14 = $memory_11->{'dest'};
#line 105
$memory_13 = c_rt_lib::hash_get_value($memory_1, $memory_14);
#line 105
undef($memory_14);
#line 106
$memory_15 = $memory_11->{'left'};
#line 106
$memory_14 = c_rt_lib::hash_get_value($memory_1, $memory_15);
#line 106
undef($memory_15);
#line 107
$memory_16 = $memory_11->{'right'};
#line 107
$memory_15 = c_rt_lib::hash_get_value($memory_1, $memory_16);
#line 107
undef($memory_16);
#line 108
$memory_16 = $memory_11->{'op'};
#line 108
$memory_12 = {dest => $memory_13,left => $memory_14,right => $memory_15,op => $memory_16,};
#line 108
undef($memory_13);
#line 108
undef($memory_14);
#line 108
undef($memory_15);
#line 108
undef($memory_16);
#line 108
$memory_12 = c_rt_lib::ov_mk_arg('bin_op', $memory_12);
#line 108
$memory_8 = $memory_12;
#line 108
undef($memory_12);
#line 108
undef($memory_11);
#line 110
goto label_499;
#line 110
label_246:
#line 110
$memory_11 = c_rt_lib::ov_as($memory_9, 'ov_is');
#line 112
$memory_14 = $memory_11->{'dest'};
#line 112
$memory_13 = c_rt_lib::hash_get_value($memory_1, $memory_14);
#line 112
undef($memory_14);
#line 113
$memory_15 = $memory_11->{'src'};
#line 113
$memory_14 = c_rt_lib::hash_get_value($memory_1, $memory_15);
#line 113
undef($memory_15);
#line 114
$memory_15 = $memory_11->{'type'};
#line 114
$memory_12 = {dest => $memory_13,src => $memory_14,type => $memory_15,};
#line 114
undef($memory_13);
#line 114
undef($memory_14);
#line 114
undef($memory_15);
#line 114
$memory_12 = c_rt_lib::ov_mk_arg('ov_is', $memory_12);
#line 114
$memory_8 = $memory_12;
#line 114
undef($memory_12);
#line 114
undef($memory_11);
#line 116
goto label_499;
#line 116
label_264:
#line 116
$memory_11 = c_rt_lib::ov_as($memory_9, 'ov_as');
#line 118
$memory_14 = $memory_11->{'dest'};
#line 118
$memory_13 = c_rt_lib::hash_get_value($memory_1, $memory_14);
#line 118
undef($memory_14);
#line 119
$memory_15 = $memory_11->{'src'};
#line 119
$memory_14 = c_rt_lib::hash_get_value($memory_1, $memory_15);
#line 119
undef($memory_15);
#line 120
$memory_15 = $memory_11->{'type'};
#line 120
$memory_12 = {dest => $memory_13,src => $memory_14,type => $memory_15,};
#line 120
undef($memory_13);
#line 120
undef($memory_14);
#line 120
undef($memory_15);
#line 120
$memory_12 = c_rt_lib::ov_mk_arg('ov_as', $memory_12);
#line 120
$memory_8 = $memory_12;
#line 120
undef($memory_12);
#line 120
undef($memory_11);
#line 122
goto label_499;
#line 122
label_282:
#line 122
$memory_11 = c_rt_lib::ov_as($memory_9, 'return');
#line 123
$memory_12 = c_rt_lib::ov_is($memory_11, 'val');
#line 123
if (c_rt_lib::check_true($memory_12)) {goto label_291;}
#line 125
$memory_12 = c_rt_lib::ov_is($memory_11, 'emp');
#line 125
if (c_rt_lib::check_true($memory_12)) {goto label_300;}
#line 125
$memory_12 = "NOMATCHALERT";
#line 125
$memory_12 = [$memory_12,$memory_11];
#line 125
die(dfile::ssave($memory_12));
#line 123
label_291:
#line 123
$memory_13 = c_rt_lib::ov_as($memory_11, 'val');
#line 124
$memory_14 = c_rt_lib::hash_get_value($memory_1, $memory_13);
#line 124
$memory_14 = c_rt_lib::ov_mk_arg('val', $memory_14);
#line 124
$memory_14 = c_rt_lib::ov_mk_arg('return', $memory_14);
#line 124
$memory_8 = $memory_14;
#line 124
undef($memory_14);
#line 124
undef($memory_13);
#line 125
goto label_306;
#line 125
label_300:
#line 126
$memory_13 = c_rt_lib::ov_mk_none('emp');
#line 126
$memory_13 = c_rt_lib::ov_mk_arg('return', $memory_13);
#line 126
$memory_8 = $memory_13;
#line 126
undef($memory_13);
#line 127
goto label_306;
#line 127
label_306:
#line 127
undef($memory_12);
#line 127
undef($memory_11);
#line 128
goto label_499;
#line 128
label_310:
#line 128
$memory_11 = c_rt_lib::ov_as($memory_9, 'die');
#line 129
$memory_12 = c_rt_lib::hash_get_value($memory_1, $memory_11);
#line 129
$memory_12 = c_rt_lib::ov_mk_arg('die', $memory_12);
#line 129
$memory_8 = $memory_12;
#line 129
undef($memory_12);
#line 129
undef($memory_11);
#line 130
goto label_499;
#line 130
label_318:
#line 130
$memory_11 = c_rt_lib::ov_as($memory_9, 'move');
#line 132
$memory_14 = $memory_11->{'dest'};
#line 132
$memory_13 = c_rt_lib::hash_get_value($memory_1, $memory_14);
#line 132
undef($memory_14);
#line 133
$memory_15 = $memory_11->{'src'};
#line 133
$memory_14 = c_rt_lib::hash_get_value($memory_1, $memory_15);
#line 133
undef($memory_15);
#line 133
$memory_12 = {dest => $memory_13,src => $memory_14,};
#line 133
undef($memory_13);
#line 133
undef($memory_14);
#line 133
$memory_12 = c_rt_lib::ov_mk_arg('move', $memory_12);
#line 133
$memory_8 = $memory_12;
#line 133
undef($memory_12);
#line 133
undef($memory_11);
#line 135
goto label_499;
#line 135
label_334:
#line 135
$memory_11 = c_rt_lib::ov_as($memory_9, 'load_const');
#line 137
$memory_14 = $memory_11->{'dest'};
#line 137
$memory_13 = c_rt_lib::hash_get_value($memory_1, $memory_14);
#line 137
undef($memory_14);
#line 138
$memory_14 = $memory_11->{'val'};
#line 138
$memory_12 = {dest => $memory_13,val => $memory_14,};
#line 138
undef($memory_13);
#line 138
undef($memory_14);
#line 138
$memory_12 = c_rt_lib::ov_mk_arg('load_const', $memory_12);
#line 138
$memory_8 = $memory_12;
#line 138
undef($memory_12);
#line 138
undef($memory_11);
#line 140
goto label_499;
#line 140
label_348:
#line 140
$memory_11 = c_rt_lib::ov_as($memory_9, 'get_frm_idx');
#line 142
$memory_14 = $memory_11->{'dest'};
#line 142
$memory_13 = c_rt_lib::hash_get_value($memory_1, $memory_14);
#line 142
undef($memory_14);
#line 143
$memory_15 = $memory_11->{'src'};
#line 143
$memory_14 = c_rt_lib::hash_get_value($memory_1, $memory_15);
#line 143
undef($memory_15);
#line 144
$memory_16 = $memory_11->{'idx'};
#line 144
$memory_15 = c_rt_lib::hash_get_value($memory_1, $memory_16);
#line 144
undef($memory_16);
#line 144
$memory_12 = {dest => $memory_13,src => $memory_14,idx => $memory_15,};
#line 144
undef($memory_13);
#line 144
undef($memory_14);
#line 144
undef($memory_15);
#line 144
$memory_12 = c_rt_lib::ov_mk_arg('get_frm_idx', $memory_12);
#line 144
$memory_8 = $memory_12;
#line 144
undef($memory_12);
#line 144
undef($memory_11);
#line 146
goto label_499;
#line 146
label_368:
#line 146
$memory_11 = c_rt_lib::ov_as($memory_9, 'set_at_idx');
#line 148
$memory_14 = $memory_11->{'src'};
#line 148
$memory_13 = c_rt_lib::hash_get_value($memory_1, $memory_14);
#line 148
undef($memory_14);
#line 149
$memory_15 = $memory_11->{'idx'};
#line 149
$memory_14 = c_rt_lib::hash_get_value($memory_1, $memory_15);
#line 149
undef($memory_15);
#line 150
$memory_16 = $memory_11->{'val'};
#line 150
$memory_15 = c_rt_lib::hash_get_value($memory_1, $memory_16);
#line 150
undef($memory_16);
#line 150
$memory_12 = {src => $memory_13,idx => $memory_14,val => $memory_15,};
#line 150
undef($memory_13);
#line 150
undef($memory_14);
#line 150
undef($memory_15);
#line 150
$memory_12 = c_rt_lib::ov_mk_arg('set_at_idx', $memory_12);
#line 150
$memory_8 = $memory_12;
#line 150
undef($memory_12);
#line 150
undef($memory_11);
#line 152
goto label_499;
#line 152
label_388:
#line 152
$memory_11 = c_rt_lib::ov_as($memory_9, 'get_val');
#line 154
$memory_13 = $memory_11->{'key'};
#line 155
$memory_15 = $memory_11->{'dest'};
#line 155
$memory_14 = c_rt_lib::hash_get_value($memory_1, $memory_15);
#line 155
undef($memory_15);
#line 156
$memory_16 = $memory_11->{'src'};
#line 156
$memory_15 = c_rt_lib::hash_get_value($memory_1, $memory_16);
#line 156
undef($memory_16);
#line 156
$memory_12 = {key => $memory_13,dest => $memory_14,src => $memory_15,};
#line 156
undef($memory_13);
#line 156
undef($memory_14);
#line 156
undef($memory_15);
#line 156
$memory_12 = c_rt_lib::ov_mk_arg('get_val', $memory_12);
#line 156
$memory_8 = $memory_12;
#line 156
undef($memory_12);
#line 156
undef($memory_11);
#line 158
goto label_499;
#line 158
label_406:
#line 158
$memory_11 = c_rt_lib::ov_as($memory_9, 'set_val');
#line 160
$memory_14 = $memory_11->{'src'};
#line 160
$memory_13 = c_rt_lib::hash_get_value($memory_1, $memory_14);
#line 160
undef($memory_14);
#line 161
$memory_15 = $memory_11->{'val'};
#line 161
$memory_14 = c_rt_lib::hash_get_value($memory_1, $memory_15);
#line 161
undef($memory_15);
#line 162
$memory_15 = $memory_11->{'key'};
#line 162
$memory_12 = {src => $memory_13,val => $memory_14,key => $memory_15,};
#line 162
undef($memory_13);
#line 162
undef($memory_14);
#line 162
undef($memory_15);
#line 162
$memory_12 = c_rt_lib::ov_mk_arg('set_val', $memory_12);
#line 162
$memory_8 = $memory_12;
#line 162
undef($memory_12);
#line 162
undef($memory_11);
#line 164
goto label_499;
#line 164
label_424:
#line 164
$memory_11 = c_rt_lib::ov_as($memory_9, 'ov_mk');
#line 166
$memory_13 = $memory_11->{'src'};
#line 166
$memory_14 = c_rt_lib::ov_is($memory_13, 'arg');
#line 166
if (c_rt_lib::check_true($memory_14)) {goto label_434;}
#line 168
$memory_14 = c_rt_lib::ov_is($memory_13, 'emp');
#line 168
if (c_rt_lib::check_true($memory_14)) {goto label_442;}
#line 168
$memory_14 = "NOMATCHALERT";
#line 168
$memory_14 = [$memory_14,$memory_13];
#line 168
die(dfile::ssave($memory_14));
#line 166
label_434:
#line 166
$memory_15 = c_rt_lib::ov_as($memory_13, 'arg');
#line 167
$memory_16 = c_rt_lib::hash_get_value($memory_1, $memory_15);
#line 167
$memory_16 = c_rt_lib::ov_mk_arg('arg', $memory_16);
#line 167
$memory_12 = $memory_16;
#line 167
undef($memory_16);
#line 167
undef($memory_15);
#line 168
goto label_447;
#line 168
label_442:
#line 169
$memory_15 = c_rt_lib::ov_mk_none('emp');
#line 169
$memory_12 = $memory_15;
#line 169
undef($memory_15);
#line 170
goto label_447;
#line 170
label_447:
#line 170
undef($memory_13);
#line 170
undef($memory_14);
#line 172
$memory_15 = $memory_11->{'dest'};
#line 172
$memory_14 = c_rt_lib::hash_get_value($memory_1, $memory_15);
#line 172
undef($memory_15);
#line 174
$memory_15 = $memory_11->{'name'};
#line 174
$memory_13 = {dest => $memory_14,src => $memory_12,name => $memory_15,};
#line 174
undef($memory_14);
#line 174
undef($memory_15);
#line 174
$memory_13 = c_rt_lib::ov_mk_arg('ov_mk', $memory_13);
#line 174
$memory_8 = $memory_13;
#line 174
undef($memory_13);
#line 174
undef($memory_12);
#line 174
undef($memory_11);
#line 176
goto label_499;
#line 176
label_463:
#line 176
$memory_11 = c_rt_lib::ov_as($memory_9, 'prt_lbl');
#line 177
$memory_12 = c_rt_lib::ov_mk_arg('prt_lbl', $memory_11);
#line 177
$memory_8 = $memory_12;
#line 177
undef($memory_12);
#line 177
undef($memory_11);
#line 178
goto label_499;
#line 178
label_470:
#line 178
$memory_11 = c_rt_lib::ov_as($memory_9, 'if_goto');
#line 180
$memory_13 = $memory_11->{'dest'};
#line 181
$memory_15 = $memory_11->{'src'};
#line 181
$memory_14 = c_rt_lib::hash_get_value($memory_1, $memory_15);
#line 181
undef($memory_15);
#line 181
$memory_12 = {dest => $memory_13,src => $memory_14,};
#line 181
undef($memory_13);
#line 181
undef($memory_14);
#line 181
$memory_12 = c_rt_lib::ov_mk_arg('if_goto', $memory_12);
#line 181
$memory_8 = $memory_12;
#line 181
undef($memory_12);
#line 181
undef($memory_11);
#line 183
goto label_499;
#line 183
label_484:
#line 183
$memory_11 = c_rt_lib::ov_as($memory_9, 'goto');
#line 184
$memory_12 = c_rt_lib::ov_mk_arg('goto', $memory_11);
#line 184
$memory_8 = $memory_12;
#line 184
undef($memory_12);
#line 184
undef($memory_11);
#line 185
goto label_499;
#line 185
label_491:
#line 185
$memory_11 = c_rt_lib::ov_as($memory_9, 'clear');
#line 186
$memory_12 = c_rt_lib::hash_get_value($memory_1, $memory_11);
#line 186
$memory_12 = c_rt_lib::ov_mk_arg('clear', $memory_12);
#line 186
$memory_8 = $memory_12;
#line 186
undef($memory_12);
#line 186
undef($memory_11);
#line 187
goto label_499;
#line 187
label_499:
#line 187
undef($memory_9);
#line 187
undef($memory_10);
#line 189
$memory_11 = $memory_3->{'annotation'};
#line 189
$memory_10 = register_cleaner_priv::recalculate_annotation($memory_11, $memory_1);
#line 189
undef($memory_11);
#line 190
$memory_11 = $memory_3->{'debug'};
#line 190
$memory_9 = {annotation => $memory_10,debug => $memory_11,cmd => $memory_8,};
#line 190
undef($memory_10);
#line 190
undef($memory_11);
#line 190
c_rt_lib::array_push($memory_2, $memory_9);
#line 190
undef($memory_9);
#line 190
undef($memory_8);
#line 193
$memory_4 = $memory_4 + $memory_5;
#line 193
goto label_4;
#line 193
label_514:
#line 193
undef($memory_3);
#line 193
undef($memory_4);
#line 193
undef($memory_5);
#line 193
undef($memory_6);
#line 193
undef($memory_7);
#line 194
undef($memory_0);
#line 194
undef($memory_1);
#line 194
return $memory_2;
#line 194
undef($memory_2);
#line 194
undef($memory_0);
#line 194
undef($memory_1);
#line 194
return;
}

sub register_cleaner_priv::recalculate_annotation($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;$memory_0 = $_[0];$memory_1 = $_[1];
#line 198
$memory_2 = c_rt_lib::ov_is($memory_0, 'none');
#line 198
if (c_rt_lib::check_true($memory_2)) {goto label_7;}
#line 200
$memory_2 = c_rt_lib::ov_is($memory_0, 'const');
#line 200
if (c_rt_lib::check_true($memory_2)) {goto label_15;}
#line 200
$memory_2 = "NOMATCHALERT";
#line 200
$memory_2 = [$memory_2,$memory_0];
#line 200
die(dfile::ssave($memory_2));
#line 198
label_7:
#line 199
$memory_3 = c_rt_lib::ov_mk_none('none');
#line 199
undef($memory_0);
#line 199
undef($memory_1);
#line 199
undef($memory_2);
#line 199
return $memory_3;
#line 199
undef($memory_3);
#line 200
goto label_47;
#line 200
label_15:
#line 200
$memory_3 = c_rt_lib::ov_as($memory_0, 'const');
#line 201
$memory_4 = [];
#line 202
$memory_6 = 0;
#line 202
$memory_7 = 1;
#line 202
$memory_8 = c_rt_lib::array_len($memory_3);
#line 202
label_21:
#line 202
$memory_9 = c_rt_lib::to_nl($memory_6 >= $memory_8);
#line 202
if (c_rt_lib::check_true($memory_9)) {goto label_30;}
#line 202
$memory_5 = $memory_3->[$memory_6];
#line 203
$memory_10 = c_rt_lib::hash_get_value($memory_1, $memory_5);
#line 203
c_rt_lib::array_push($memory_4, $memory_10);
#line 203
undef($memory_10);
#line 204
$memory_6 = $memory_6 + $memory_7;
#line 204
goto label_21;
#line 204
label_30:
#line 204
undef($memory_5);
#line 204
undef($memory_6);
#line 204
undef($memory_7);
#line 204
undef($memory_8);
#line 204
undef($memory_9);
#line 205
$memory_5 = c_rt_lib::ov_mk_arg('const', $memory_4);
#line 205
undef($memory_0);
#line 205
undef($memory_1);
#line 205
undef($memory_2);
#line 205
undef($memory_3);
#line 205
undef($memory_4);
#line 205
return $memory_5;
#line 205
undef($memory_5);
#line 205
undef($memory_4);
#line 205
undef($memory_3);
#line 206
goto label_47;
#line 206
label_47:
#line 206
undef($memory_2);
#line 206
undef($memory_0);
#line 206
undef($memory_1);
#line 206
return;
}

sub register_cleaner_priv::find_unused_regs($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;my $memory_13;my $memory_14;my $memory_15;my $memory_16;my $memory_17;my $memory_18;my $memory_19;my $memory_20;$memory_0 = $_[0];
#line 210
$memory_1 = {};
#line 211
$memory_2 = $memory_0->{'reg_size'};
#line 211
$memory_3 = 0;
#line 211
$memory_4 = 1;
#line 211
label_4:
#line 211
$memory_5 = c_rt_lib::to_nl($memory_3 >= $memory_2);
#line 211
if (c_rt_lib::check_true($memory_5)) {goto label_14;}
#line 212
$memory_6 = c_rt_lib::to_nl(0);
#line 212
$memory_7 = $memory_6;
#line 212
c_rt_lib::hash_set_value($memory_1, $memory_3, $memory_7);
#line 212
undef($memory_6);
#line 212
undef($memory_7);
#line 213
$memory_3 = $memory_3 + $memory_4;
#line 213
goto label_4;
#line 213
label_14:
#line 213
undef($memory_2);
#line 213
undef($memory_3);
#line 213
undef($memory_4);
#line 213
undef($memory_5);
#line 215
$memory_3 = $memory_0->{'args_type'};
#line 215
$memory_2 = array::len($memory_3);
#line 215
undef($memory_3);
#line 215
$memory_3 = 0;
#line 215
$memory_4 = 1;
#line 215
label_24:
#line 215
$memory_5 = c_rt_lib::to_nl($memory_3 >= $memory_2);
#line 215
if (c_rt_lib::check_true($memory_5)) {goto label_34;}
#line 216
$memory_6 = c_rt_lib::to_nl(1);
#line 216
$memory_7 = $memory_6;
#line 216
c_rt_lib::hash_set_value($memory_1, $memory_3, $memory_7);
#line 216
undef($memory_6);
#line 216
undef($memory_7);
#line 217
$memory_3 = $memory_3 + $memory_4;
#line 217
goto label_24;
#line 217
label_34:
#line 217
undef($memory_2);
#line 217
undef($memory_3);
#line 217
undef($memory_4);
#line 217
undef($memory_5);
#line 219
$memory_2 = $memory_0->{'commands'};
#line 219
$memory_4 = 0;
#line 219
$memory_5 = 1;
#line 219
$memory_6 = c_rt_lib::array_len($memory_2);
#line 219
label_43:
#line 219
$memory_7 = c_rt_lib::to_nl($memory_4 >= $memory_6);
#line 219
if (c_rt_lib::check_true($memory_7)) {goto label_520;}
#line 219
$memory_3 = $memory_2->[$memory_4];
#line 220
$memory_8 = $memory_3->{'cmd'};
#line 220
$memory_9 = c_rt_lib::ov_is($memory_8, 'arr_decl');
#line 220
if (c_rt_lib::check_true($memory_9)) {goto label_93;}
#line 225
$memory_9 = c_rt_lib::ov_is($memory_8, 'hash_decl');
#line 225
if (c_rt_lib::check_true($memory_9)) {goto label_126;}
#line 230
$memory_9 = c_rt_lib::ov_is($memory_8, 'func');
#line 230
if (c_rt_lib::check_true($memory_9)) {goto label_161;}
#line 232
$memory_9 = c_rt_lib::ov_is($memory_8, 'call');
#line 232
if (c_rt_lib::check_true($memory_9)) {goto label_172;}
#line 241
$memory_9 = c_rt_lib::ov_is($memory_8, 'una_op');
#line 241
if (c_rt_lib::check_true($memory_9)) {goto label_227;}
#line 244
$memory_9 = c_rt_lib::ov_is($memory_8, 'bin_op');
#line 244
if (c_rt_lib::check_true($memory_9)) {goto label_245;}
#line 248
$memory_9 = c_rt_lib::ov_is($memory_8, 'ov_is');
#line 248
if (c_rt_lib::check_true($memory_9)) {goto label_270;}
#line 251
$memory_9 = c_rt_lib::ov_is($memory_8, 'ov_as');
#line 251
if (c_rt_lib::check_true($memory_9)) {goto label_288;}
#line 254
$memory_9 = c_rt_lib::ov_is($memory_8, 'return');
#line 254
if (c_rt_lib::check_true($memory_9)) {goto label_306;}
#line 259
$memory_9 = c_rt_lib::ov_is($memory_8, 'die');
#line 259
if (c_rt_lib::check_true($memory_9)) {goto label_330;}
#line 261
$memory_9 = c_rt_lib::ov_is($memory_8, 'move');
#line 261
if (c_rt_lib::check_true($memory_9)) {goto label_339;}
#line 264
$memory_9 = c_rt_lib::ov_is($memory_8, 'load_const');
#line 264
if (c_rt_lib::check_true($memory_9)) {goto label_357;}
#line 266
$memory_9 = c_rt_lib::ov_is($memory_8, 'get_frm_idx');
#line 266
if (c_rt_lib::check_true($memory_9)) {goto label_368;}
#line 270
$memory_9 = c_rt_lib::ov_is($memory_8, 'set_at_idx');
#line 270
if (c_rt_lib::check_true($memory_9)) {goto label_393;}
#line 274
$memory_9 = c_rt_lib::ov_is($memory_8, 'get_val');
#line 274
if (c_rt_lib::check_true($memory_9)) {goto label_418;}
#line 277
$memory_9 = c_rt_lib::ov_is($memory_8, 'set_val');
#line 277
if (c_rt_lib::check_true($memory_9)) {goto label_436;}
#line 280
$memory_9 = c_rt_lib::ov_is($memory_8, 'ov_mk');
#line 280
if (c_rt_lib::check_true($memory_9)) {goto label_454;}
#line 286
$memory_9 = c_rt_lib::ov_is($memory_8, 'prt_lbl');
#line 286
if (c_rt_lib::check_true($memory_9)) {goto label_487;}
#line 287
$memory_9 = c_rt_lib::ov_is($memory_8, 'if_goto');
#line 287
if (c_rt_lib::check_true($memory_9)) {goto label_491;}
#line 289
$memory_9 = c_rt_lib::ov_is($memory_8, 'goto');
#line 289
if (c_rt_lib::check_true($memory_9)) {goto label_502;}
#line 290
$memory_9 = c_rt_lib::ov_is($memory_8, 'clear');
#line 290
if (c_rt_lib::check_true($memory_9)) {goto label_506;}
#line 290
$memory_9 = "NOMATCHALERT";
#line 290
$memory_9 = [$memory_9,$memory_8];
#line 290
die(dfile::ssave($memory_9));
#line 220
label_93:
#line 220
$memory_10 = c_rt_lib::ov_as($memory_8, 'arr_decl');
#line 221
$memory_11 = c_rt_lib::to_nl(1);
#line 221
$memory_13 = $memory_10->{'dest'};
#line 221
$memory_12 = $memory_11;
#line 221
c_rt_lib::hash_set_value($memory_1, $memory_13, $memory_12);
#line 221
undef($memory_11);
#line 221
undef($memory_12);
#line 221
undef($memory_13);
#line 222
$memory_11 = $memory_10->{'src'};
#line 222
$memory_13 = 0;
#line 222
$memory_14 = 1;
#line 222
$memory_15 = c_rt_lib::array_len($memory_11);
#line 222
label_106:
#line 222
$memory_16 = c_rt_lib::to_nl($memory_13 >= $memory_15);
#line 222
if (c_rt_lib::check_true($memory_16)) {goto label_117;}
#line 222
$memory_12 = $memory_11->[$memory_13];
#line 223
$memory_17 = c_rt_lib::to_nl(1);
#line 223
$memory_18 = $memory_17;
#line 223
c_rt_lib::hash_set_value($memory_1, $memory_12, $memory_18);
#line 223
undef($memory_17);
#line 223
undef($memory_18);
#line 224
$memory_13 = $memory_13 + $memory_14;
#line 224
goto label_106;
#line 224
label_117:
#line 224
undef($memory_11);
#line 224
undef($memory_12);
#line 224
undef($memory_13);
#line 224
undef($memory_14);
#line 224
undef($memory_15);
#line 224
undef($memory_16);
#line 224
undef($memory_10);
#line 225
goto label_515;
#line 225
label_126:
#line 225
$memory_10 = c_rt_lib::ov_as($memory_8, 'hash_decl');
#line 226
$memory_11 = c_rt_lib::to_nl(1);
#line 226
$memory_13 = $memory_10->{'dest'};
#line 226
$memory_12 = $memory_11;
#line 226
c_rt_lib::hash_set_value($memory_1, $memory_13, $memory_12);
#line 226
undef($memory_11);
#line 226
undef($memory_12);
#line 226
undef($memory_13);
#line 227
$memory_11 = $memory_10->{'src'};
#line 227
$memory_13 = 0;
#line 227
$memory_14 = 1;
#line 227
$memory_15 = c_rt_lib::array_len($memory_11);
#line 227
label_139:
#line 227
$memory_16 = c_rt_lib::to_nl($memory_13 >= $memory_15);
#line 227
if (c_rt_lib::check_true($memory_16)) {goto label_152;}
#line 227
$memory_12 = $memory_11->[$memory_13];
#line 228
$memory_17 = c_rt_lib::to_nl(1);
#line 228
$memory_19 = $memory_12->{'val'};
#line 228
$memory_18 = $memory_17;
#line 228
c_rt_lib::hash_set_value($memory_1, $memory_19, $memory_18);
#line 228
undef($memory_17);
#line 228
undef($memory_18);
#line 228
undef($memory_19);
#line 229
$memory_13 = $memory_13 + $memory_14;
#line 229
goto label_139;
#line 229
label_152:
#line 229
undef($memory_11);
#line 229
undef($memory_12);
#line 229
undef($memory_13);
#line 229
undef($memory_14);
#line 229
undef($memory_15);
#line 229
undef($memory_16);
#line 229
undef($memory_10);
#line 230
goto label_515;
#line 230
label_161:
#line 230
$memory_10 = c_rt_lib::ov_as($memory_8, 'func');
#line 231
$memory_11 = c_rt_lib::to_nl(1);
#line 231
$memory_13 = $memory_10->{'dest'};
#line 231
$memory_12 = $memory_11;
#line 231
c_rt_lib::hash_set_value($memory_1, $memory_13, $memory_12);
#line 231
undef($memory_11);
#line 231
undef($memory_12);
#line 231
undef($memory_13);
#line 231
undef($memory_10);
#line 232
goto label_515;
#line 232
label_172:
#line 232
$memory_10 = c_rt_lib::ov_as($memory_8, 'call');
#line 233
$memory_11 = c_rt_lib::to_nl(1);
#line 233
$memory_13 = $memory_10->{'dest'};
#line 233
$memory_12 = $memory_11;
#line 233
c_rt_lib::hash_set_value($memory_1, $memory_13, $memory_12);
#line 233
undef($memory_11);
#line 233
undef($memory_12);
#line 233
undef($memory_13);
#line 234
$memory_11 = $memory_10->{'args'};
#line 234
$memory_13 = 0;
#line 234
$memory_14 = 1;
#line 234
$memory_15 = c_rt_lib::array_len($memory_11);
#line 234
label_185:
#line 234
$memory_16 = c_rt_lib::to_nl($memory_13 >= $memory_15);
#line 234
if (c_rt_lib::check_true($memory_16)) {goto label_218;}
#line 234
$memory_12 = $memory_11->[$memory_13];
#line 235
$memory_17 = c_rt_lib::ov_is($memory_12, 'val');
#line 235
if (c_rt_lib::check_true($memory_17)) {goto label_196;}
#line 237
$memory_17 = c_rt_lib::ov_is($memory_12, 'ref');
#line 237
if (c_rt_lib::check_true($memory_17)) {goto label_205;}
#line 237
$memory_17 = "NOMATCHALERT";
#line 237
$memory_17 = [$memory_17,$memory_12];
#line 237
die(dfile::ssave($memory_17));
#line 235
label_196:
#line 235
$memory_18 = c_rt_lib::ov_as($memory_12, 'val');
#line 236
$memory_19 = c_rt_lib::to_nl(1);
#line 236
$memory_20 = $memory_19;
#line 236
c_rt_lib::hash_set_value($memory_1, $memory_18, $memory_20);
#line 236
undef($memory_19);
#line 236
undef($memory_20);
#line 236
undef($memory_18);
#line 237
goto label_214;
#line 237
label_205:
#line 237
$memory_18 = c_rt_lib::ov_as($memory_12, 'ref');
#line 238
$memory_19 = c_rt_lib::to_nl(1);
#line 238
$memory_20 = $memory_19;
#line 238
c_rt_lib::hash_set_value($memory_1, $memory_18, $memory_20);
#line 238
undef($memory_19);
#line 238
undef($memory_20);
#line 238
undef($memory_18);
#line 239
goto label_214;
#line 239
label_214:
#line 239
undef($memory_17);
#line 240
$memory_13 = $memory_13 + $memory_14;
#line 240
goto label_185;
#line 240
label_218:
#line 240
undef($memory_11);
#line 240
undef($memory_12);
#line 240
undef($memory_13);
#line 240
undef($memory_14);
#line 240
undef($memory_15);
#line 240
undef($memory_16);
#line 240
undef($memory_10);
#line 241
goto label_515;
#line 241
label_227:
#line 241
$memory_10 = c_rt_lib::ov_as($memory_8, 'una_op');
#line 242
$memory_11 = c_rt_lib::to_nl(1);
#line 242
$memory_13 = $memory_10->{'dest'};
#line 242
$memory_12 = $memory_11;
#line 242
c_rt_lib::hash_set_value($memory_1, $memory_13, $memory_12);
#line 242
undef($memory_11);
#line 242
undef($memory_12);
#line 242
undef($memory_13);
#line 243
$memory_11 = c_rt_lib::to_nl(1);
#line 243
$memory_13 = $memory_10->{'src'};
#line 243
$memory_12 = $memory_11;
#line 243
c_rt_lib::hash_set_value($memory_1, $memory_13, $memory_12);
#line 243
undef($memory_11);
#line 243
undef($memory_12);
#line 243
undef($memory_13);
#line 243
undef($memory_10);
#line 244
goto label_515;
#line 244
label_245:
#line 244
$memory_10 = c_rt_lib::ov_as($memory_8, 'bin_op');
#line 245
$memory_11 = c_rt_lib::to_nl(1);
#line 245
$memory_13 = $memory_10->{'dest'};
#line 245
$memory_12 = $memory_11;
#line 245
c_rt_lib::hash_set_value($memory_1, $memory_13, $memory_12);
#line 245
undef($memory_11);
#line 245
undef($memory_12);
#line 245
undef($memory_13);
#line 246
$memory_11 = c_rt_lib::to_nl(1);
#line 246
$memory_13 = $memory_10->{'left'};
#line 246
$memory_12 = $memory_11;
#line 246
c_rt_lib::hash_set_value($memory_1, $memory_13, $memory_12);
#line 246
undef($memory_11);
#line 246
undef($memory_12);
#line 246
undef($memory_13);
#line 247
$memory_11 = c_rt_lib::to_nl(1);
#line 247
$memory_13 = $memory_10->{'right'};
#line 247
$memory_12 = $memory_11;
#line 247
c_rt_lib::hash_set_value($memory_1, $memory_13, $memory_12);
#line 247
undef($memory_11);
#line 247
undef($memory_12);
#line 247
undef($memory_13);
#line 247
undef($memory_10);
#line 248
goto label_515;
#line 248
label_270:
#line 248
$memory_10 = c_rt_lib::ov_as($memory_8, 'ov_is');
#line 249
$memory_11 = c_rt_lib::to_nl(1);
#line 249
$memory_13 = $memory_10->{'dest'};
#line 249
$memory_12 = $memory_11;
#line 249
c_rt_lib::hash_set_value($memory_1, $memory_13, $memory_12);
#line 249
undef($memory_11);
#line 249
undef($memory_12);
#line 249
undef($memory_13);
#line 250
$memory_11 = c_rt_lib::to_nl(1);
#line 250
$memory_13 = $memory_10->{'src'};
#line 250
$memory_12 = $memory_11;
#line 250
c_rt_lib::hash_set_value($memory_1, $memory_13, $memory_12);
#line 250
undef($memory_11);
#line 250
undef($memory_12);
#line 250
undef($memory_13);
#line 250
undef($memory_10);
#line 251
goto label_515;
#line 251
label_288:
#line 251
$memory_10 = c_rt_lib::ov_as($memory_8, 'ov_as');
#line 252
$memory_11 = c_rt_lib::to_nl(1);
#line 252
$memory_13 = $memory_10->{'dest'};
#line 252
$memory_12 = $memory_11;
#line 252
c_rt_lib::hash_set_value($memory_1, $memory_13, $memory_12);
#line 252
undef($memory_11);
#line 252
undef($memory_12);
#line 252
undef($memory_13);
#line 253
$memory_11 = c_rt_lib::to_nl(1);
#line 253
$memory_13 = $memory_10->{'src'};
#line 253
$memory_12 = $memory_11;
#line 253
c_rt_lib::hash_set_value($memory_1, $memory_13, $memory_12);
#line 253
undef($memory_11);
#line 253
undef($memory_12);
#line 253
undef($memory_13);
#line 253
undef($memory_10);
#line 254
goto label_515;
#line 254
label_306:
#line 254
$memory_10 = c_rt_lib::ov_as($memory_8, 'return');
#line 255
$memory_11 = c_rt_lib::ov_is($memory_10, 'val');
#line 255
if (c_rt_lib::check_true($memory_11)) {goto label_315;}
#line 257
$memory_11 = c_rt_lib::ov_is($memory_10, 'emp');
#line 257
if (c_rt_lib::check_true($memory_11)) {goto label_324;}
#line 257
$memory_11 = "NOMATCHALERT";
#line 257
$memory_11 = [$memory_11,$memory_10];
#line 257
die(dfile::ssave($memory_11));
#line 255
label_315:
#line 255
$memory_12 = c_rt_lib::ov_as($memory_10, 'val');
#line 256
$memory_13 = c_rt_lib::to_nl(1);
#line 256
$memory_14 = $memory_13;
#line 256
c_rt_lib::hash_set_value($memory_1, $memory_12, $memory_14);
#line 256
undef($memory_13);
#line 256
undef($memory_14);
#line 256
undef($memory_12);
#line 257
goto label_326;
#line 257
label_324:
#line 258
goto label_326;
#line 258
label_326:
#line 258
undef($memory_11);
#line 258
undef($memory_10);
#line 259
goto label_515;
#line 259
label_330:
#line 259
$memory_10 = c_rt_lib::ov_as($memory_8, 'die');
#line 260
$memory_11 = c_rt_lib::to_nl(1);
#line 260
$memory_12 = $memory_11;
#line 260
c_rt_lib::hash_set_value($memory_1, $memory_10, $memory_12);
#line 260
undef($memory_11);
#line 260
undef($memory_12);
#line 260
undef($memory_10);
#line 261
goto label_515;
#line 261
label_339:
#line 261
$memory_10 = c_rt_lib::ov_as($memory_8, 'move');
#line 262
$memory_11 = c_rt_lib::to_nl(1);
#line 262
$memory_13 = $memory_10->{'dest'};
#line 262
$memory_12 = $memory_11;
#line 262
c_rt_lib::hash_set_value($memory_1, $memory_13, $memory_12);
#line 262
undef($memory_11);
#line 262
undef($memory_12);
#line 262
undef($memory_13);
#line 263
$memory_11 = c_rt_lib::to_nl(1);
#line 263
$memory_13 = $memory_10->{'src'};
#line 263
$memory_12 = $memory_11;
#line 263
c_rt_lib::hash_set_value($memory_1, $memory_13, $memory_12);
#line 263
undef($memory_11);
#line 263
undef($memory_12);
#line 263
undef($memory_13);
#line 263
undef($memory_10);
#line 264
goto label_515;
#line 264
label_357:
#line 264
$memory_10 = c_rt_lib::ov_as($memory_8, 'load_const');
#line 265
$memory_11 = c_rt_lib::to_nl(1);
#line 265
$memory_13 = $memory_10->{'dest'};
#line 265
$memory_12 = $memory_11;
#line 265
c_rt_lib::hash_set_value($memory_1, $memory_13, $memory_12);
#line 265
undef($memory_11);
#line 265
undef($memory_12);
#line 265
undef($memory_13);
#line 265
undef($memory_10);
#line 266
goto label_515;
#line 266
label_368:
#line 266
$memory_10 = c_rt_lib::ov_as($memory_8, 'get_frm_idx');
#line 267
$memory_11 = c_rt_lib::to_nl(1);
#line 267
$memory_13 = $memory_10->{'dest'};
#line 267
$memory_12 = $memory_11;
#line 267
c_rt_lib::hash_set_value($memory_1, $memory_13, $memory_12);
#line 267
undef($memory_11);
#line 267
undef($memory_12);
#line 267
undef($memory_13);
#line 268
$memory_11 = c_rt_lib::to_nl(1);
#line 268
$memory_13 = $memory_10->{'src'};
#line 268
$memory_12 = $memory_11;
#line 268
c_rt_lib::hash_set_value($memory_1, $memory_13, $memory_12);
#line 268
undef($memory_11);
#line 268
undef($memory_12);
#line 268
undef($memory_13);
#line 269
$memory_11 = c_rt_lib::to_nl(1);
#line 269
$memory_13 = $memory_10->{'idx'};
#line 269
$memory_12 = $memory_11;
#line 269
c_rt_lib::hash_set_value($memory_1, $memory_13, $memory_12);
#line 269
undef($memory_11);
#line 269
undef($memory_12);
#line 269
undef($memory_13);
#line 269
undef($memory_10);
#line 270
goto label_515;
#line 270
label_393:
#line 270
$memory_10 = c_rt_lib::ov_as($memory_8, 'set_at_idx');
#line 271
$memory_11 = c_rt_lib::to_nl(1);
#line 271
$memory_13 = $memory_10->{'val'};
#line 271
$memory_12 = $memory_11;
#line 271
c_rt_lib::hash_set_value($memory_1, $memory_13, $memory_12);
#line 271
undef($memory_11);
#line 271
undef($memory_12);
#line 271
undef($memory_13);
#line 272
$memory_11 = c_rt_lib::to_nl(1);
#line 272
$memory_13 = $memory_10->{'src'};
#line 272
$memory_12 = $memory_11;
#line 272
c_rt_lib::hash_set_value($memory_1, $memory_13, $memory_12);
#line 272
undef($memory_11);
#line 272
undef($memory_12);
#line 272
undef($memory_13);
#line 273
$memory_11 = c_rt_lib::to_nl(1);
#line 273
$memory_13 = $memory_10->{'idx'};
#line 273
$memory_12 = $memory_11;
#line 273
c_rt_lib::hash_set_value($memory_1, $memory_13, $memory_12);
#line 273
undef($memory_11);
#line 273
undef($memory_12);
#line 273
undef($memory_13);
#line 273
undef($memory_10);
#line 274
goto label_515;
#line 274
label_418:
#line 274
$memory_10 = c_rt_lib::ov_as($memory_8, 'get_val');
#line 275
$memory_11 = c_rt_lib::to_nl(1);
#line 275
$memory_13 = $memory_10->{'dest'};
#line 275
$memory_12 = $memory_11;
#line 275
c_rt_lib::hash_set_value($memory_1, $memory_13, $memory_12);
#line 275
undef($memory_11);
#line 275
undef($memory_12);
#line 275
undef($memory_13);
#line 276
$memory_11 = c_rt_lib::to_nl(1);
#line 276
$memory_13 = $memory_10->{'src'};
#line 276
$memory_12 = $memory_11;
#line 276
c_rt_lib::hash_set_value($memory_1, $memory_13, $memory_12);
#line 276
undef($memory_11);
#line 276
undef($memory_12);
#line 276
undef($memory_13);
#line 276
undef($memory_10);
#line 277
goto label_515;
#line 277
label_436:
#line 277
$memory_10 = c_rt_lib::ov_as($memory_8, 'set_val');
#line 278
$memory_11 = c_rt_lib::to_nl(1);
#line 278
$memory_13 = $memory_10->{'src'};
#line 278
$memory_12 = $memory_11;
#line 278
c_rt_lib::hash_set_value($memory_1, $memory_13, $memory_12);
#line 278
undef($memory_11);
#line 278
undef($memory_12);
#line 278
undef($memory_13);
#line 279
$memory_11 = c_rt_lib::to_nl(1);
#line 279
$memory_13 = $memory_10->{'val'};
#line 279
$memory_12 = $memory_11;
#line 279
c_rt_lib::hash_set_value($memory_1, $memory_13, $memory_12);
#line 279
undef($memory_11);
#line 279
undef($memory_12);
#line 279
undef($memory_13);
#line 279
undef($memory_10);
#line 280
goto label_515;
#line 280
label_454:
#line 280
$memory_10 = c_rt_lib::ov_as($memory_8, 'ov_mk');
#line 281
$memory_11 = c_rt_lib::to_nl(1);
#line 281
$memory_13 = $memory_10->{'dest'};
#line 281
$memory_12 = $memory_11;
#line 281
c_rt_lib::hash_set_value($memory_1, $memory_13, $memory_12);
#line 281
undef($memory_11);
#line 281
undef($memory_12);
#line 281
undef($memory_13);
#line 282
$memory_11 = $memory_10->{'src'};
#line 282
$memory_12 = c_rt_lib::ov_is($memory_11, 'arg');
#line 282
if (c_rt_lib::check_true($memory_12)) {goto label_471;}
#line 284
$memory_12 = c_rt_lib::ov_is($memory_11, 'emp');
#line 284
if (c_rt_lib::check_true($memory_12)) {goto label_480;}
#line 284
$memory_12 = "NOMATCHALERT";
#line 284
$memory_12 = [$memory_12,$memory_11];
#line 284
die(dfile::ssave($memory_12));
#line 282
label_471:
#line 282
$memory_13 = c_rt_lib::ov_as($memory_11, 'arg');
#line 283
$memory_14 = c_rt_lib::to_nl(1);
#line 283
$memory_15 = $memory_14;
#line 283
c_rt_lib::hash_set_value($memory_1, $memory_13, $memory_15);
#line 283
undef($memory_14);
#line 283
undef($memory_15);
#line 283
undef($memory_13);
#line 284
goto label_482;
#line 284
label_480:
#line 285
goto label_482;
#line 285
label_482:
#line 285
undef($memory_11);
#line 285
undef($memory_12);
#line 285
undef($memory_10);
#line 286
goto label_515;
#line 286
label_487:
#line 286
$memory_10 = c_rt_lib::ov_as($memory_8, 'prt_lbl');
#line 286
undef($memory_10);
#line 287
goto label_515;
#line 287
label_491:
#line 287
$memory_10 = c_rt_lib::ov_as($memory_8, 'if_goto');
#line 288
$memory_11 = c_rt_lib::to_nl(1);
#line 288
$memory_13 = $memory_10->{'src'};
#line 288
$memory_12 = $memory_11;
#line 288
c_rt_lib::hash_set_value($memory_1, $memory_13, $memory_12);
#line 288
undef($memory_11);
#line 288
undef($memory_12);
#line 288
undef($memory_13);
#line 288
undef($memory_10);
#line 289
goto label_515;
#line 289
label_502:
#line 289
$memory_10 = c_rt_lib::ov_as($memory_8, 'goto');
#line 289
undef($memory_10);
#line 290
goto label_515;
#line 290
label_506:
#line 290
$memory_10 = c_rt_lib::ov_as($memory_8, 'clear');
#line 291
$memory_11 = c_rt_lib::to_nl(1);
#line 291
$memory_12 = $memory_11;
#line 291
c_rt_lib::hash_set_value($memory_1, $memory_10, $memory_12);
#line 291
undef($memory_11);
#line 291
undef($memory_12);
#line 291
undef($memory_10);
#line 292
goto label_515;
#line 292
label_515:
#line 292
undef($memory_8);
#line 292
undef($memory_9);
#line 293
$memory_4 = $memory_4 + $memory_5;
#line 293
goto label_43;
#line 293
label_520:
#line 293
undef($memory_2);
#line 293
undef($memory_3);
#line 293
undef($memory_4);
#line 293
undef($memory_5);
#line 293
undef($memory_6);
#line 293
undef($memory_7);
#line 294
undef($memory_0);
#line 294
return $memory_1;
#line 294
undef($memory_1);
#line 294
undef($memory_0);
#line 294
return;
}
