use c_rt_lib;
use string;
use array;
sub csv::save;
sub csv_priv::get_char;
sub csv_priv::end;
sub csv::load;

return 1;

sub csv::save($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;my $memory_13;my $memory_14;my $memory_15;my $memory_16;my $memory_17;my $memory_18;my $memory_19;my $memory_20;my $memory_21;my $memory_22;$memory_0 = $_[0];
#line 10
$memory_1 = "\"";
#line 11
$memory_2 = string::tab();
#line 12
$memory_3 = $memory_1 . $memory_1;
#line 13
$memory_4 = "";
#line 14
$memory_6 = 0;
#line 14
$memory_7 = 1;
#line 14
$memory_8 = c_rt_lib::array_len($memory_0);
#line 14
label_7:
#line 14
$memory_9 = c_rt_lib::to_nl($memory_6 >= $memory_8);
#line 14
if (c_rt_lib::check_true($memory_9)) {goto label_87;}
#line 14
$memory_5 = $memory_0->[$memory_6];
#line 15
$memory_10 = array::len($memory_5);
#line 16
$memory_11 = 0;
#line 16
$memory_12 = 1;
#line 16
label_14:
#line 16
$memory_13 = c_rt_lib::to_nl($memory_11 >= $memory_10);
#line 16
if (c_rt_lib::check_true($memory_13)) {goto label_77;}
#line 17
$memory_14 = $memory_5->[$memory_11];
#line 18
$memory_15 = string::length($memory_14);
#line 19
$memory_16 = c_rt_lib::to_nl(0);
#line 20
$memory_17 = 0;
#line 20
$memory_18 = 1;
#line 20
label_22:
#line 20
$memory_19 = c_rt_lib::to_nl($memory_17 >= $memory_15);
#line 20
if (c_rt_lib::check_true($memory_19)) {goto label_46;}
#line 21
$memory_21 = 1;
#line 21
$memory_20 = string::substr($memory_14, $memory_17, $memory_21);
#line 21
undef($memory_21);
#line 22
$memory_21 = string::ord($memory_20);
#line 22
$memory_22 = 32;
#line 22
$memory_21 = c_rt_lib::to_nl($memory_21 < $memory_22);
#line 22
undef($memory_22);
#line 22
if (c_rt_lib::check_true($memory_21)) {goto label_34;}
#line 22
$memory_21 = c_rt_lib::to_nl($memory_20 eq $memory_1);
#line 22
label_34:
#line 22
$memory_21 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_21));
#line 22
if (c_rt_lib::check_true($memory_21)) {goto label_41;}
#line 22
$memory_22 = c_rt_lib::to_nl(1);
#line 22
$memory_16 = $memory_22;
#line 22
undef($memory_22);
#line 22
goto label_41;
#line 22
label_41:
#line 22
undef($memory_21);
#line 22
undef($memory_20);
#line 23
$memory_17 = $memory_17 + $memory_18;
#line 23
goto label_22;
#line 23
label_46:
#line 23
undef($memory_17);
#line 23
undef($memory_18);
#line 23
undef($memory_19);
#line 24
$memory_17 = $memory_16;
#line 24
$memory_17 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_17));
#line 24
if (c_rt_lib::check_true($memory_17)) {goto label_59;}
#line 24
$memory_18 = string::replace($memory_14, $memory_1, $memory_3);
#line 24
$memory_18 = $memory_1 . $memory_18;
#line 24
$memory_18 = $memory_18 . $memory_1;
#line 24
$memory_14 = $memory_18;
#line 24
undef($memory_18);
#line 24
goto label_59;
#line 24
label_59:
#line 24
undef($memory_17);
#line 25
$memory_4 = $memory_4 . $memory_14;
#line 26
$memory_17 = 1;
#line 26
$memory_17 = $memory_10 - $memory_17;
#line 26
$memory_17 = c_rt_lib::to_nl($memory_11 == $memory_17);
#line 26
$memory_17 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_17));
#line 26
$memory_17 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_17));
#line 26
if (c_rt_lib::check_true($memory_17)) {goto label_70;}
#line 26
$memory_4 = $memory_4 . $memory_2;
#line 26
goto label_70;
#line 26
label_70:
#line 26
undef($memory_17);
#line 26
undef($memory_14);
#line 26
undef($memory_15);
#line 26
undef($memory_16);
#line 27
$memory_11 = $memory_11 + $memory_12;
#line 27
goto label_14;
#line 27
label_77:
#line 27
undef($memory_11);
#line 27
undef($memory_12);
#line 27
undef($memory_13);
#line 28
$memory_11 = string::lf();
#line 28
$memory_4 = $memory_4 . $memory_11;
#line 28
undef($memory_11);
#line 28
undef($memory_10);
#line 29
$memory_6 = $memory_6 + $memory_7;
#line 29
goto label_7;
#line 29
label_87:
#line 29
undef($memory_5);
#line 29
undef($memory_6);
#line 29
undef($memory_7);
#line 29
undef($memory_8);
#line 29
undef($memory_9);
#line 30
undef($memory_0);
#line 30
undef($memory_1);
#line 30
undef($memory_2);
#line 30
undef($memory_3);
#line 30
return $memory_4;
#line 30
undef($memory_1);
#line 30
undef($memory_2);
#line 30
undef($memory_3);
#line 30
undef($memory_4);
#line 30
undef($memory_0);
#line 30
return;
}

sub csv_priv::get_char($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;$memory_0 = $_[0];$memory_1 = $_[1];Scalar::Util::weaken($_[1]) if ref($_[1]);
#line 34
$memory_3 = $memory_1;
#line 34
$memory_4 = 1;
#line 34
$memory_1 = $memory_1 + $memory_4;
#line 34
undef($memory_4);
#line 34
$memory_4 = 1;
#line 34
$memory_2 = string::substr($memory_0, $memory_3, $memory_4);
#line 34
undef($memory_4);
#line 34
undef($memory_3);
#line 34
undef($memory_0);
#line 34
$_[1] = $memory_1;return $memory_2;
#line 34
undef($memory_2);
#line 34
undef($memory_0);
#line 34
$_[1] = $memory_1;return;
$_[1] = $memory_1;}

sub csv_priv::end($$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];Scalar::Util::weaken($_[1]) if ref($_[1]);$memory_2 = $_[2];
#line 38
array::push($memory_1, $memory_2);
#line 39
array::push($memory_0, $memory_1);
#line 40
$memory_3 = $memory_0;
#line 40
undef($memory_2);
#line 40
$_[0] = $memory_0;$_[1] = $memory_1;return $memory_3;
#line 40
undef($memory_3);
#line 40
undef($memory_2);
#line 40
$_[0] = $memory_0;$_[1] = $memory_1;return;
$_[0] = $memory_0;$_[1] = $memory_1;}

sub csv::load($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;my $memory_13;my $memory_14;my $memory_15;$memory_0 = $_[0];
#line 44
$memory_1 = "\"";
#line 45
$memory_2 = string::tab();
#line 46
$memory_3 = string::ord($memory_2);
#line 47
$memory_4 = [];
#line 48
$memory_5 = [];
#line 49
$memory_6 = string::length($memory_0);
#line 50
$memory_7 = 0;
#line 50
$memory_7 = c_rt_lib::to_nl($memory_6 == $memory_7);
#line 50
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 50
if (c_rt_lib::check_true($memory_7)) {goto label_19;}
#line 50
undef($memory_0);
#line 50
undef($memory_1);
#line 50
undef($memory_2);
#line 50
undef($memory_3);
#line 50
undef($memory_5);
#line 50
undef($memory_6);
#line 50
undef($memory_7);
#line 50
return $memory_4;
#line 50
goto label_19;
#line 50
label_19:
#line 50
undef($memory_7);
#line 51
$memory_9 = 1;
#line 51
$memory_9 = $memory_6 - $memory_9;
#line 51
$memory_10 = 1;
#line 51
$memory_8 = string::substr($memory_0, $memory_9, $memory_10);
#line 51
undef($memory_10);
#line 51
undef($memory_9);
#line 51
$memory_7 = string::ord($memory_8);
#line 51
undef($memory_8);
#line 51
$memory_8 = 10;
#line 51
$memory_7 = c_rt_lib::to_nl($memory_7 == $memory_8);
#line 51
undef($memory_8);
#line 51
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 51
if (c_rt_lib::check_true($memory_7)) {goto label_57;}
#line 52
$memory_8 = 1;
#line 52
$memory_6 = $memory_6 - $memory_8;
#line 52
undef($memory_8);
#line 53
$memory_10 = 1;
#line 53
$memory_10 = $memory_6 - $memory_10;
#line 53
$memory_11 = 1;
#line 53
$memory_9 = string::substr($memory_0, $memory_10, $memory_11);
#line 53
undef($memory_11);
#line 53
undef($memory_10);
#line 53
$memory_8 = string::ord($memory_9);
#line 53
undef($memory_9);
#line 53
$memory_9 = 13;
#line 53
$memory_8 = c_rt_lib::to_nl($memory_8 == $memory_9);
#line 53
undef($memory_9);
#line 53
$memory_8 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 53
if (c_rt_lib::check_true($memory_8)) {goto label_54;}
#line 53
$memory_9 = 1;
#line 53
$memory_6 = $memory_6 - $memory_9;
#line 53
undef($memory_9);
#line 53
goto label_54;
#line 53
label_54:
#line 53
undef($memory_8);
#line 54
goto label_57;
#line 54
label_57:
#line 54
undef($memory_7);
#line 55
$memory_7 = "";
#line 56
$memory_8 = 0;
#line 57
label_61:
#line 57
$memory_9 = c_rt_lib::to_nl($memory_8 < $memory_6);
#line 57
$memory_9 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_9));
#line 57
if (c_rt_lib::check_true($memory_9)) {goto label_242;}
#line 58
$memory_10 = csv_priv::get_char($memory_0, $memory_8);
#line 59
$memory_11 = c_rt_lib::to_nl($memory_10 eq $memory_1);
#line 59
$memory_11 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_11));
#line 59
if (c_rt_lib::check_true($memory_11)) {goto label_140;}
#line 60
label_69:
#line 61
$memory_12 = c_rt_lib::to_nl($memory_8 >= $memory_6);
#line 61
$memory_12 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_12));
#line 61
if (c_rt_lib::check_true($memory_12)) {goto label_90;}
#line 61
$memory_13 = csv_priv::end($memory_4, $memory_5, $memory_7);
#line 61
undef($memory_0);
#line 61
undef($memory_1);
#line 61
undef($memory_2);
#line 61
undef($memory_3);
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
#line 61
undef($memory_9);
#line 61
undef($memory_10);
#line 61
undef($memory_11);
#line 61
undef($memory_12);
#line 61
return $memory_13;
#line 61
undef($memory_13);
#line 61
goto label_90;
#line 61
label_90:
#line 61
undef($memory_12);
#line 62
$memory_12 = csv_priv::get_char($memory_0, $memory_8);
#line 62
$memory_10 = $memory_12;
#line 62
undef($memory_12);
#line 63
$memory_12 = c_rt_lib::to_nl($memory_10 eq $memory_1);
#line 63
$memory_12 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_12));
#line 63
if (c_rt_lib::check_true($memory_12)) {goto label_134;}
#line 64
$memory_13 = c_rt_lib::to_nl($memory_8 >= $memory_6);
#line 64
$memory_13 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_13));
#line 64
if (c_rt_lib::check_true($memory_13)) {goto label_119;}
#line 64
$memory_14 = csv_priv::end($memory_4, $memory_5, $memory_7);
#line 64
undef($memory_0);
#line 64
undef($memory_1);
#line 64
undef($memory_2);
#line 64
undef($memory_3);
#line 64
undef($memory_4);
#line 64
undef($memory_5);
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
#line 64
undef($memory_11);
#line 64
undef($memory_12);
#line 64
undef($memory_13);
#line 64
return $memory_14;
#line 64
undef($memory_14);
#line 64
goto label_119;
#line 64
label_119:
#line 64
undef($memory_13);
#line 65
$memory_13 = csv_priv::get_char($memory_0, $memory_8);
#line 65
$memory_10 = $memory_13;
#line 65
undef($memory_13);
#line 66
$memory_13 = c_rt_lib::to_nl($memory_10 ne $memory_1);
#line 66
$memory_13 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_13));
#line 66
if (c_rt_lib::check_true($memory_13)) {goto label_131;}
#line 66
undef($memory_12);
#line 66
undef($memory_13);
#line 66
goto label_138;
#line 66
goto label_131;
#line 66
label_131:
#line 66
undef($memory_13);
#line 67
goto label_134;
#line 67
label_134:
#line 67
undef($memory_12);
#line 68
$memory_7 = $memory_7 . $memory_10;
#line 60
goto label_69;
#line 60
label_138:
#line 70
goto label_194;
#line 70
label_140:
#line 71
$memory_12 = string::ord($memory_10);
#line 72
label_142:
#line 72
$memory_13 = c_rt_lib::to_nl($memory_12 != $memory_3);
#line 72
$memory_15 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_13));
#line 72
if (c_rt_lib::check_true($memory_15)) {goto label_148;}
#line 72
$memory_13 = 10;
#line 72
$memory_13 = c_rt_lib::to_nl($memory_12 != $memory_13);
#line 72
label_148:
#line 72
undef($memory_15);
#line 72
$memory_14 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_13));
#line 72
if (c_rt_lib::check_true($memory_14)) {goto label_154;}
#line 72
$memory_13 = 13;
#line 72
$memory_13 = c_rt_lib::to_nl($memory_12 != $memory_13);
#line 72
label_154:
#line 72
undef($memory_14);
#line 72
$memory_13 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_13));
#line 72
if (c_rt_lib::check_true($memory_13)) {goto label_190;}
#line 73
$memory_7 = $memory_7 . $memory_10;
#line 74
$memory_14 = c_rt_lib::to_nl($memory_8 >= $memory_6);
#line 74
$memory_14 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_14));
#line 74
if (c_rt_lib::check_true($memory_14)) {goto label_181;}
#line 74
$memory_15 = csv_priv::end($memory_4, $memory_5, $memory_7);
#line 74
undef($memory_0);
#line 74
undef($memory_1);
#line 74
undef($memory_2);
#line 74
undef($memory_3);
#line 74
undef($memory_4);
#line 74
undef($memory_5);
#line 74
undef($memory_6);
#line 74
undef($memory_7);
#line 74
undef($memory_8);
#line 74
undef($memory_9);
#line 74
undef($memory_10);
#line 74
undef($memory_11);
#line 74
undef($memory_12);
#line 74
undef($memory_13);
#line 74
undef($memory_14);
#line 74
return $memory_15;
#line 74
undef($memory_15);
#line 74
goto label_181;
#line 74
label_181:
#line 74
undef($memory_14);
#line 75
$memory_14 = csv_priv::get_char($memory_0, $memory_8);
#line 75
$memory_10 = $memory_14;
#line 75
undef($memory_14);
#line 76
$memory_14 = string::ord($memory_10);
#line 76
$memory_12 = $memory_14;
#line 76
undef($memory_14);
#line 77
goto label_142;
#line 77
label_190:
#line 77
undef($memory_13);
#line 77
undef($memory_12);
#line 78
goto label_194;
#line 78
label_194:
#line 78
undef($memory_11);
#line 79
array::push($memory_5, $memory_7);
#line 80
$memory_11 = "";
#line 80
$memory_7 = $memory_11;
#line 80
undef($memory_11);
#line 81
$memory_11 = string::ord($memory_10);
#line 82
$memory_12 = c_rt_lib::to_nl($memory_11 == $memory_3);
#line 82
$memory_12 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_12));
#line 82
if (c_rt_lib::check_true($memory_12)) {goto label_209;}
#line 82
undef($memory_10);
#line 82
undef($memory_11);
#line 82
undef($memory_12);
#line 82
goto label_61;
#line 82
goto label_209;
#line 82
label_209:
#line 82
undef($memory_12);
#line 83
$memory_12 = 13;
#line 83
$memory_12 = c_rt_lib::to_nl($memory_11 == $memory_12);
#line 83
$memory_12 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_12));
#line 83
if (c_rt_lib::check_true($memory_12)) {goto label_222;}
#line 84
$memory_13 = csv_priv::get_char($memory_0, $memory_8);
#line 84
$memory_10 = $memory_13;
#line 84
undef($memory_13);
#line 85
$memory_13 = string::ord($memory_10);
#line 85
$memory_11 = $memory_13;
#line 85
undef($memory_13);
#line 86
goto label_222;
#line 86
label_222:
#line 86
undef($memory_12);
#line 87
$memory_12 = 10;
#line 87
$memory_12 = c_rt_lib::to_nl($memory_11 == $memory_12);
#line 87
$memory_12 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_12));
#line 87
if (c_rt_lib::check_true($memory_12)) {goto label_237;}
#line 88
array::push($memory_4, $memory_5);
#line 89
$memory_13 = [];
#line 89
$memory_5 = $memory_13;
#line 89
undef($memory_13);
#line 90
undef($memory_10);
#line 90
undef($memory_11);
#line 90
undef($memory_12);
#line 90
goto label_61;
#line 91
goto label_237;
#line 91
label_237:
#line 91
undef($memory_12);
#line 91
undef($memory_10);
#line 91
undef($memory_11);
#line 92
goto label_61;
#line 92
label_242:
#line 92
undef($memory_9);
#line 93
$memory_9 = csv_priv::end($memory_4, $memory_5, $memory_7);
#line 93
undef($memory_0);
#line 93
undef($memory_1);
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
return $memory_9;
#line 93
undef($memory_9);
#line 93
undef($memory_1);
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
undef($memory_0);
#line 93
return;
}
