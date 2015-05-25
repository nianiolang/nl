use c_rt_lib;
use c_fe_lib;
use c_std_lib;
use string;
use hash;
use func;
use array;
use ptd;
sub profile_priv::diff_time;
sub profile_priv::print_row;
sub profile_priv::get_profile_global;
sub profile::sub;
sub profile::sub_ref;
sub profile::save;

return 1;

sub profile_priv::diff_time($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;$memory_0 = $_[0];$memory_1 = $_[1];
#line 15
$memory_3 = 0;
#line 15
$memory_2 = $memory_0->[$memory_3];
#line 15
undef($memory_3);
#line 15
$memory_4 = 0;
#line 15
$memory_3 = $memory_1->[$memory_4];
#line 15
undef($memory_4);
#line 15
$memory_2 = $memory_2 - $memory_3;
#line 15
undef($memory_3);
#line 16
$memory_4 = 1;
#line 16
$memory_3 = $memory_0->[$memory_4];
#line 16
undef($memory_4);
#line 16
$memory_5 = 1;
#line 16
$memory_4 = $memory_1->[$memory_5];
#line 16
undef($memory_5);
#line 16
$memory_3 = $memory_3 - $memory_4;
#line 16
undef($memory_4);
#line 17
$memory_4 = 0;
#line 17
$memory_4 = c_rt_lib::to_nl($memory_3 < $memory_4);
#line 17
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 17
if (c_rt_lib::check_true($memory_4)) {goto label_2;}
#line 18
$memory_5 = 1;
#line 18
$memory_2 = $memory_2 - $memory_5;
#line 18
undef($memory_5);
#line 19
$memory_5 = 1000000;
#line 19
$memory_3 = $memory_3 + $memory_5;
#line 19
undef($memory_5);
#line 20
goto label_2;
#line 20
label_2:
#line 20
undef($memory_4);
#line 21
$memory_4 = "1000.0";
#line 21
$memory_4 = $memory_2 * $memory_4;
#line 21
$memory_5 = "1000.0";
#line 21
$memory_5 = $memory_3 / $memory_5;
#line 21
$memory_4 = $memory_4 + $memory_5;
#line 21
undef($memory_5);
#line 21
undef($memory_0);
#line 21
undef($memory_1);
#line 21
undef($memory_2);
#line 21
undef($memory_3);
#line 21
return $memory_4;
#line 21
undef($memory_4);
#line 21
undef($memory_2);
#line 21
undef($memory_3);
#line 21
undef($memory_0);
#line 21
undef($memory_1);
#line 21
return;
}

sub profile_priv::print_row($$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;my $memory_13;my $memory_14;my $memory_15;my $memory_16;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];$memory_2 = $_[2];
#line 25
$memory_3 = "";
#line 26
$memory_4 = $memory_0->{'stack'};
#line 26
$memory_6 = 0;
#line 26
$memory_7 = 1;
#line 26
$memory_8 = c_rt_lib::array_len($memory_4);
#line 26
label_3:
#line 26
$memory_9 = c_rt_lib::to_nl($memory_6 >= $memory_8);
#line 26
if (c_rt_lib::check_true($memory_9)) {goto label_1;}
#line 26
$memory_5 = $memory_4->[$memory_6];
#line 27
$memory_10 = "           ";
#line 27
$memory_11 = profile_priv::diff_time($memory_1, $memory_5);
#line 27
$memory_10 = $memory_10 . $memory_11;
#line 27
undef($memory_11);
#line 28
$memory_12 = ".";
#line 28
$memory_11 = string::index2($memory_10, $memory_12);
#line 28
undef($memory_12);
#line 29
$memory_12 = string::length($memory_10);
#line 30
$memory_13 = 1;
#line 30
$memory_13 = -$memory_13;
#line 30
$memory_13 = c_rt_lib::to_nl($memory_11 == $memory_13);
#line 30
$memory_13 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_13));
#line 30
if (c_rt_lib::check_true($memory_13)) {goto label_5;}
#line 31
$memory_14 = ".000";
#line 31
$memory_10 = $memory_10 . $memory_14;
#line 31
undef($memory_14);
#line 32
goto label_4;
#line 32
label_5:
#line 33
$memory_14 = "000";
#line 33
$memory_10 = $memory_10 . $memory_14;
#line 33
undef($memory_14);
#line 34
$memory_15 = 0;
#line 34
$memory_16 = 4;
#line 34
$memory_16 = $memory_11 + $memory_16;
#line 34
$memory_14 = string::substr($memory_10, $memory_15, $memory_16);
#line 34
undef($memory_16);
#line 34
undef($memory_15);
#line 34
$memory_10 = $memory_14;
#line 34
undef($memory_14);
#line 35
$memory_12 = $memory_11;
#line 36
goto label_4;
#line 36
label_4:
#line 36
undef($memory_13);
#line 37
$memory_14 = 7;
#line 37
$memory_14 = $memory_12 - $memory_14;
#line 37
$memory_15 = 4;
#line 37
$memory_13 = string::substr($memory_10, $memory_14, $memory_15);
#line 37
undef($memory_15);
#line 37
undef($memory_14);
#line 37
$memory_14 = " ";
#line 37
$memory_13 = $memory_13 . $memory_14;
#line 37
undef($memory_14);
#line 37
$memory_15 = 3;
#line 37
$memory_15 = $memory_12 - $memory_15;
#line 37
$memory_16 = 7;
#line 37
$memory_14 = string::substr($memory_10, $memory_15, $memory_16);
#line 37
undef($memory_16);
#line 37
undef($memory_15);
#line 37
$memory_13 = $memory_13 . $memory_14;
#line 37
undef($memory_14);
#line 37
$memory_14 = string::tab();
#line 37
$memory_13 = $memory_13 . $memory_14;
#line 37
undef($memory_14);
#line 37
$memory_10 = $memory_13;
#line 37
undef($memory_13);
#line 38
$memory_3 = $memory_3 . $memory_10;
#line 38
undef($memory_10);
#line 38
undef($memory_11);
#line 38
undef($memory_12);
#line 39
$memory_6 = $memory_6 + $memory_7;
#line 39
goto label_3;
#line 39
label_1:
#line 39
undef($memory_4);
#line 39
undef($memory_5);
#line 39
undef($memory_6);
#line 39
undef($memory_7);
#line 39
undef($memory_8);
#line 39
undef($memory_9);
#line 40
$memory_4 = string::tab();
#line 40
$memory_3 = $memory_3 . $memory_4;
#line 40
undef($memory_4);
#line 41
$memory_3 = $memory_3 . $memory_2;
#line 42
$memory_4 = string::lf();
#line 42
$memory_3 = $memory_3 . $memory_4;
#line 42
undef($memory_4);
#line 43
$memory_4 = "out";
#line 43
$memory_4 = c_rt_lib::get_ref_hash($memory_0, $memory_4);
#line 43
$memory_4 = $memory_4 . $memory_3;
#line 43
$memory_5 = "out";
#line 43
c_rt_lib::set_ref_hash($memory_0, $memory_5, $memory_4);
#line 43
undef($memory_5);
#line 43
undef($memory_4);
#line 43
undef($memory_3);
#line 43
undef($memory_1);
#line 43
undef($memory_2);
#line 43
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub profile_priv::get_profile_global() {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;
#line 46
$memory_0 = c_std_lib::get_profile_global();
#line 47
$memory_1 = hash::size($memory_0);
#line 47
$memory_2 = 0;
#line 47
$memory_1 = c_rt_lib::to_nl($memory_1 == $memory_2);
#line 47
undef($memory_2);
#line 47
$memory_1 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_1));
#line 47
if (c_rt_lib::check_true($memory_1)) {goto label_2;}
#line 47
$memory_3 = "";
#line 47
$memory_4 = [];
#line 47
$memory_2 = {out => $memory_3,stack => $memory_4,};
#line 47
undef($memory_3);
#line 47
undef($memory_4);
#line 47
$memory_0 = $memory_2;
#line 47
undef($memory_2);
#line 47
goto label_2;
#line 47
label_2:
#line 47
undef($memory_1);
#line 48
return $memory_0;
#line 48
undef($memory_0);
#line 48
return;
}

sub profile::sub($$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;$memory_0 = $_[0];$memory_1 = $_[1];$memory_2 = $_[2];
#line 52
$memory_3 = profile::sub_ref($memory_0, $memory_1, $memory_2);
#line 52
undef($memory_0);
#line 52
undef($memory_1);
#line 52
undef($memory_2);
#line 52
return $memory_3;
#line 52
undef($memory_3);
#line 52
undef($memory_0);
#line 52
undef($memory_1);
#line 52
undef($memory_2);
#line 52
return;
}

sub profile::sub_ref($$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;$memory_0 = $_[0];$memory_1 = $_[1];$memory_2 = $_[2];Scalar::Util::weaken($_[2]) if ref($_[2]);
#line 55
$memory_3 = profile_priv::get_profile_global();
#line 56
$memory_4 = c_fe_lib::get_time();
#line 57
$memory_5 = $memory_3->{'stack'};
#line 58
$memory_6 = "stack";
#line 58
$memory_6 = c_rt_lib::get_ref_hash($memory_3, $memory_6);
#line 58
array::push($memory_6, $memory_4);
#line 58
$memory_7 = "stack";
#line 58
c_rt_lib::set_ref_hash($memory_3, $memory_7, $memory_6);
#line 58
undef($memory_7);
#line 58
undef($memory_6);
#line 59
profile_priv::print_row($memory_3, $memory_4, $memory_0);
#line 60
c_std_lib::set_profile_global($memory_3);
#line 61
$memory_6 = func::exec_ref($memory_1, $memory_2);
#line 62
$memory_7 = profile_priv::get_profile_global();
#line 62
$memory_3 = $memory_7;
#line 62
undef($memory_7);
#line 63
$memory_7 = c_fe_lib::get_time();
#line 63
$memory_4 = $memory_7;
#line 63
undef($memory_7);
#line 64
$memory_7 = "TOTAL: ";
#line 64
$memory_7 = $memory_7 . $memory_0;
#line 64
profile_priv::print_row($memory_3, $memory_4, $memory_7);
#line 64
undef($memory_7);
#line 65
$memory_7 = $memory_5;
#line 65
 if (c_rt_lib::get_hashcount($memory_3) > 1) {$memory_3 = {%{$memory_3}};}$memory_3->{'stack'} = $memory_7;
#line 65
undef($memory_7);
#line 66
c_std_lib::set_profile_global($memory_3);
#line 67
undef($memory_0);
#line 67
undef($memory_1);
#line 67
undef($memory_3);
#line 67
undef($memory_4);
#line 67
undef($memory_5);
#line 67
$_[2] = $memory_2;return $memory_6;
#line 67
undef($memory_3);
#line 67
undef($memory_4);
#line 67
undef($memory_5);
#line 67
undef($memory_6);
#line 67
undef($memory_0);
#line 67
undef($memory_1);
#line 67
$_[2] = $memory_2;return;
$_[2] = $memory_2;}

sub profile::save($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;$memory_0 = $_[0];
#line 71
$memory_1 = profile_priv::get_profile_global();
#line 72
$memory_3 = $memory_1->{'stack'};
#line 72
$memory_2 = array::len($memory_3);
#line 72
undef($memory_3);
#line 72
$memory_3 = 0;
#line 72
$memory_2 = c_rt_lib::to_nl($memory_2 != $memory_3);
#line 72
undef($memory_3);
#line 72
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 72
if (c_rt_lib::check_true($memory_2)) {goto label_2;}
#line 72
$memory_3 = [];
#line 72
die(dfile::ssave($memory_3));
#line 72
goto label_2;
#line 72
label_2:
#line 72
undef($memory_2);
#line 72
undef($memory_3);
#line 73
$memory_2 = $memory_1->{'out'};
#line 73
c_fe_lib::string_to_file($memory_0, $memory_2);
#line 73
undef($memory_2);
#line 74
$memory_2 = "";
#line 74
$memory_3 = $memory_2;
#line 74
 if (c_rt_lib::get_hashcount($memory_1) > 1) {$memory_1 = {%{$memory_1}};}$memory_1->{'out'} = $memory_3;
#line 74
undef($memory_2);
#line 74
undef($memory_3);
#line 75
c_std_lib::set_profile_global($memory_1);
#line 75
undef($memory_1);
#line 75
undef($memory_0);
#line 75
return;
}
