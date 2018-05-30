use c_rt_lib;
use c_fe_lib;
use c_std_lib;
use nsystem;
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
sub profile_priv::start;
sub profile_priv::stop;
sub profile::begin;
sub profile::end;

return 1;

sub profile_priv::diff_time($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;$memory_0 = $_[0];$memory_1 = $_[1];
#line 16
$memory_3 = 0;
#line 16
$memory_2 = $memory_0->[$memory_3];
#line 16
undef($memory_3);
#line 16
$memory_4 = 0;
#line 16
$memory_3 = $memory_1->[$memory_4];
#line 16
undef($memory_4);
#line 16
$memory_2 = $memory_2 - $memory_3;
#line 16
undef($memory_3);
#line 17
$memory_4 = 1;
#line 17
$memory_3 = $memory_0->[$memory_4];
#line 17
undef($memory_4);
#line 17
$memory_5 = 1;
#line 17
$memory_4 = $memory_1->[$memory_5];
#line 17
undef($memory_5);
#line 17
$memory_3 = $memory_3 - $memory_4;
#line 17
undef($memory_4);
#line 18
$memory_4 = 0;
#line 18
$memory_4 = c_rt_lib::to_nl($memory_3 < $memory_4);
#line 18
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 18
if (c_rt_lib::check_true($memory_4)) {goto label_27;}
#line 19
$memory_5 = 1;
#line 19
$memory_2 = $memory_2 - $memory_5;
#line 19
undef($memory_5);
#line 20
$memory_5 = 1000000;
#line 20
$memory_3 = $memory_3 + $memory_5;
#line 20
undef($memory_5);
#line 21
goto label_27;
#line 21
label_27:
#line 21
undef($memory_4);
#line 22
$memory_4 = "1000.0";
#line 22
$memory_4 = $memory_2 * $memory_4;
#line 22
$memory_5 = "1000.0";
#line 22
$memory_5 = $memory_3 / $memory_5;
#line 22
$memory_4 = $memory_4 + $memory_5;
#line 22
undef($memory_5);
#line 22
undef($memory_0);
#line 22
undef($memory_1);
#line 22
undef($memory_2);
#line 22
undef($memory_3);
#line 22
return $memory_4;
#line 22
undef($memory_4);
#line 22
undef($memory_2);
#line 22
undef($memory_3);
#line 22
undef($memory_0);
#line 22
undef($memory_1);
#line 22
return;
}

sub profile_priv::print_row($$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;my $memory_13;my $memory_14;my $memory_15;my $memory_16;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];$memory_2 = $_[2];
#line 26
$memory_3 = "";
#line 27
$memory_4 = $memory_0->{'stack'};
#line 27
$memory_6 = 0;
#line 27
$memory_7 = 1;
#line 27
$memory_8 = c_rt_lib::array_len($memory_4);
#line 27
label_5:
#line 27
$memory_9 = c_rt_lib::to_nl($memory_6 >= $memory_8);
#line 27
if (c_rt_lib::check_true($memory_9)) {goto label_70;}
#line 27
$memory_5 = $memory_4->[$memory_6];
#line 28
$memory_10 = "           ";
#line 28
$memory_11 = profile_priv::diff_time($memory_1, $memory_5);
#line 28
$memory_10 = $memory_10 . $memory_11;
#line 28
undef($memory_11);
#line 29
$memory_12 = ".";
#line 29
$memory_11 = string::index2($memory_10, $memory_12);
#line 29
undef($memory_12);
#line 30
$memory_12 = string::length($memory_10);
#line 31
$memory_13 = 1;
#line 31
$memory_13 = -$memory_13;
#line 31
$memory_13 = c_rt_lib::to_nl($memory_11 == $memory_13);
#line 31
$memory_13 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_13));
#line 31
if (c_rt_lib::check_true($memory_13)) {goto label_26;}
#line 32
$memory_14 = ".000";
#line 32
$memory_10 = $memory_10 . $memory_14;
#line 32
undef($memory_14);
#line 33
goto label_40;
#line 33
label_26:
#line 34
$memory_14 = "000";
#line 34
$memory_10 = $memory_10 . $memory_14;
#line 34
undef($memory_14);
#line 35
$memory_15 = 0;
#line 35
$memory_16 = 4;
#line 35
$memory_16 = $memory_11 + $memory_16;
#line 35
$memory_14 = string::substr($memory_10, $memory_15, $memory_16);
#line 35
undef($memory_16);
#line 35
undef($memory_15);
#line 35
$memory_10 = $memory_14;
#line 35
undef($memory_14);
#line 36
$memory_12 = $memory_11;
#line 37
goto label_40;
#line 37
label_40:
#line 37
undef($memory_13);
#line 38
$memory_14 = 7;
#line 38
$memory_14 = $memory_12 - $memory_14;
#line 38
$memory_15 = 4;
#line 38
$memory_13 = string::substr($memory_10, $memory_14, $memory_15);
#line 38
undef($memory_15);
#line 38
undef($memory_14);
#line 38
$memory_14 = " ";
#line 38
$memory_13 = $memory_13 . $memory_14;
#line 38
undef($memory_14);
#line 38
$memory_15 = 3;
#line 38
$memory_15 = $memory_12 - $memory_15;
#line 38
$memory_16 = 7;
#line 38
$memory_14 = string::substr($memory_10, $memory_15, $memory_16);
#line 38
undef($memory_16);
#line 38
undef($memory_15);
#line 38
$memory_13 = $memory_13 . $memory_14;
#line 38
undef($memory_14);
#line 38
$memory_14 = string::tab();
#line 38
$memory_13 = $memory_13 . $memory_14;
#line 38
undef($memory_14);
#line 38
$memory_10 = $memory_13;
#line 38
undef($memory_13);
#line 39
$memory_3 = $memory_3 . $memory_10;
#line 39
undef($memory_10);
#line 39
undef($memory_11);
#line 39
undef($memory_12);
#line 40
$memory_6 = $memory_6 + $memory_7;
#line 40
goto label_5;
#line 40
label_70:
#line 40
undef($memory_4);
#line 40
undef($memory_5);
#line 40
undef($memory_6);
#line 40
undef($memory_7);
#line 40
undef($memory_8);
#line 40
undef($memory_9);
#line 41
$memory_4 = string::tab();
#line 41
$memory_3 = $memory_3 . $memory_4;
#line 41
undef($memory_4);
#line 42
$memory_3 = $memory_3 . $memory_2;
#line 43
$memory_4 = string::lf();
#line 43
$memory_3 = $memory_3 . $memory_4;
#line 43
undef($memory_4);
#line 44
$memory_4 = "out";
#line 44
$memory_4 = c_rt_lib::get_ref_hash($memory_0, $memory_4);
#line 44
$memory_4 = $memory_4 . $memory_3;
#line 44
$memory_5 = "out";
#line 44
c_rt_lib::set_ref_hash($memory_0, $memory_5, $memory_4);
#line 44
undef($memory_5);
#line 44
undef($memory_4);
#line 44
undef($memory_3);
#line 44
undef($memory_1);
#line 44
undef($memory_2);
#line 44
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub profile_priv::get_profile_global() {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;
#line 48
$memory_0 = c_std_lib::get_profile_global();
#line 49
$memory_1 = hash::size($memory_0);
#line 49
$memory_2 = 0;
#line 49
$memory_1 = c_rt_lib::to_nl($memory_1 == $memory_2);
#line 49
undef($memory_2);
#line 49
$memory_1 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_1));
#line 49
if (c_rt_lib::check_true($memory_1)) {goto label_15;}
#line 49
$memory_3 = "";
#line 49
$memory_4 = [];
#line 49
$memory_2 = {out => $memory_3,stack => $memory_4,};
#line 49
undef($memory_3);
#line 49
undef($memory_4);
#line 49
$memory_0 = $memory_2;
#line 49
undef($memory_2);
#line 49
goto label_15;
#line 49
label_15:
#line 49
undef($memory_1);
#line 50
return $memory_0;
#line 50
undef($memory_0);
#line 50
return;
}

sub profile::sub($$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;$memory_0 = $_[0];$memory_1 = $_[1];$memory_2 = $_[2];
#line 54
$memory_3 = profile::sub_ref($memory_0, $memory_1, $memory_2);
#line 54
undef($memory_0);
#line 54
undef($memory_1);
#line 54
undef($memory_2);
#line 54
return $memory_3;
#line 54
undef($memory_3);
#line 54
undef($memory_0);
#line 54
undef($memory_1);
#line 54
undef($memory_2);
#line 54
return;
}

sub profile::sub_ref($$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;$memory_0 = $_[0];$memory_1 = $_[1];$memory_2 = $_[2];Scalar::Util::weaken($_[2]) if ref($_[2]);
#line 58
$memory_3 = profile_priv::get_profile_global();
#line 59
$memory_4 = nsystem::time_microsec();
#line 60
$memory_5 = $memory_3->{'stack'};
#line 61
$memory_6 = "stack";
#line 61
$memory_6 = c_rt_lib::get_ref_hash($memory_3, $memory_6);
#line 61
array::push($memory_6, $memory_4);
#line 61
$memory_7 = "stack";
#line 61
c_rt_lib::set_ref_hash($memory_3, $memory_7, $memory_6);
#line 61
undef($memory_7);
#line 61
undef($memory_6);
#line 62
profile_priv::print_row($memory_3, $memory_4, $memory_0);
#line 63
c_std_lib::set_profile_global($memory_3);
#line 64
$memory_6 = func::exec_ref($memory_1, $memory_2);
#line 65
$memory_7 = profile_priv::get_profile_global();
#line 65
$memory_3 = $memory_7;
#line 65
undef($memory_7);
#line 66
$memory_7 = nsystem::time_microsec();
#line 66
$memory_4 = $memory_7;
#line 66
undef($memory_7);
#line 67
$memory_7 = "TOTAL: ";
#line 67
$memory_7 = $memory_7 . $memory_0;
#line 67
profile_priv::print_row($memory_3, $memory_4, $memory_7);
#line 67
undef($memory_7);
#line 68
$memory_7 = $memory_5;
#line 68
 if (c_rt_lib::get_hashcount($memory_3) > 1) {$memory_3 = {%{$memory_3}};}$memory_3->{'stack'} = $memory_7;
#line 68
undef($memory_7);
#line 69
c_std_lib::set_profile_global($memory_3);
#line 70
undef($memory_0);
#line 70
undef($memory_1);
#line 70
undef($memory_3);
#line 70
undef($memory_4);
#line 70
undef($memory_5);
#line 70
$_[2] = $memory_2;return $memory_6;
#line 70
undef($memory_3);
#line 70
undef($memory_4);
#line 70
undef($memory_5);
#line 70
undef($memory_6);
#line 70
undef($memory_0);
#line 70
undef($memory_1);
#line 70
$_[2] = $memory_2;return;
$_[2] = $memory_2;}

sub profile::save($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;$memory_0 = $_[0];
#line 74
$memory_1 = profile_priv::get_profile_global();
#line 75
$memory_3 = $memory_1->{'stack'};
#line 75
$memory_2 = array::len($memory_3);
#line 75
undef($memory_3);
#line 75
$memory_3 = 0;
#line 75
$memory_2 = c_rt_lib::to_nl($memory_2 != $memory_3);
#line 75
undef($memory_3);
#line 75
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 75
if (c_rt_lib::check_true($memory_2)) {goto label_12;}
#line 75
$memory_3 = [];
#line 75
die(dfile::ssave($memory_3));
#line 75
goto label_12;
#line 75
label_12:
#line 75
undef($memory_2);
#line 75
undef($memory_3);
#line 76
$memory_2 = $memory_1->{'out'};
#line 76
c_fe_lib::string_to_file($memory_0, $memory_2);
#line 76
undef($memory_2);
#line 77
$memory_2 = "";
#line 77
$memory_3 = $memory_2;
#line 77
 if (c_rt_lib::get_hashcount($memory_1) > 1) {$memory_1 = {%{$memory_1}};}$memory_1->{'out'} = $memory_3;
#line 77
undef($memory_2);
#line 77
undef($memory_3);
#line 78
c_std_lib::set_profile_global($memory_1);
#line 78
undef($memory_1);
#line 78
undef($memory_0);
#line 78
return;
}

sub profile_priv::start($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;$memory_0 = $_[0];
#line 82
$memory_1 = profile_priv::get_profile_global();
#line 83
$memory_2 = hash::size($memory_1);
#line 83
$memory_3 = 0;
#line 83
$memory_2 = c_rt_lib::to_nl($memory_2 == $memory_3);
#line 83
undef($memory_3);
#line 83
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 83
if (c_rt_lib::check_true($memory_2)) {goto label_12;}
#line 83
undef($memory_0);
#line 83
undef($memory_1);
#line 83
undef($memory_2);
#line 83
return;
#line 83
goto label_12;
#line 83
label_12:
#line 83
undef($memory_2);
#line 84
$memory_2 = nsystem::time_microsec();
#line 85
$memory_3 = "stack";
#line 85
$memory_3 = c_rt_lib::get_ref_hash($memory_1, $memory_3);
#line 85
array::push($memory_3, $memory_2);
#line 85
$memory_4 = "stack";
#line 85
c_rt_lib::set_ref_hash($memory_1, $memory_4, $memory_3);
#line 85
undef($memory_4);
#line 85
undef($memory_3);
#line 86
profile_priv::print_row($memory_1, $memory_2, $memory_0);
#line 87
c_std_lib::set_profile_global($memory_1);
#line 87
undef($memory_1);
#line 87
undef($memory_2);
#line 87
undef($memory_0);
#line 87
return;
}

sub profile_priv::stop($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;$memory_0 = $_[0];
#line 91
$memory_1 = profile_priv::get_profile_global();
#line 92
$memory_2 = hash::size($memory_1);
#line 92
$memory_3 = 0;
#line 92
$memory_2 = c_rt_lib::to_nl($memory_2 == $memory_3);
#line 92
undef($memory_3);
#line 92
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 92
if (c_rt_lib::check_true($memory_2)) {goto label_12;}
#line 92
undef($memory_0);
#line 92
undef($memory_1);
#line 92
undef($memory_2);
#line 92
return;
#line 92
goto label_12;
#line 92
label_12:
#line 92
undef($memory_2);
#line 93
$memory_2 = nsystem::time_microsec();
#line 94
$memory_3 = "TOTAL: ";
#line 94
$memory_3 = $memory_3 . $memory_0;
#line 94
profile_priv::print_row($memory_1, $memory_2, $memory_3);
#line 94
undef($memory_3);
#line 95
$memory_3 = "stack";
#line 95
$memory_3 = c_rt_lib::get_ref_hash($memory_1, $memory_3);
#line 95
array::pop($memory_3);
#line 95
$memory_4 = "stack";
#line 95
c_rt_lib::set_ref_hash($memory_1, $memory_4, $memory_3);
#line 95
undef($memory_4);
#line 95
undef($memory_3);
#line 96
c_std_lib::set_profile_global($memory_1);
#line 96
undef($memory_1);
#line 96
undef($memory_2);
#line 96
undef($memory_0);
#line 96
return;
}

sub profile::begin($) {
my $memory_0;$memory_0 = $_[0];
#line 100
profile_priv::start($memory_0);
#line 100
undef($memory_0);
#line 100
return;
}

sub profile::end($) {
my $memory_0;$memory_0 = $_[0];
#line 104
profile_priv::stop($memory_0);
#line 104
undef($memory_0);
#line 104
return;
}
