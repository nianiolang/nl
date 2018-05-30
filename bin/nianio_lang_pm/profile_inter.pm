use c_rt_lib;
use nsystem;
use ptd;
use array;
use string;
sub profile_inter::row_t;
sub profile_inter::begin;
sub profile_inter::end;
sub profile_inter::minus;
sub profile_inter::plus;
sub profile_inter::save_profile_js;
sub profile_inter_priv::print_row;
sub profile_inter_priv::diff_time;

return 1;

sub profile_inter::__row_t() {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;
#line 13
$memory_3 = ptd::sim();
#line 13
$memory_2 = ptd::arr($memory_3);
#line 13
undef($memory_3);
#line 14
$memory_3 = ptd::sim();
#line 15
$memory_6 = ptd::none();
#line 15
$memory_7 = ptd::none();
#line 15
$memory_5 = {begin => $memory_6,end => $memory_7,};
#line 15
undef($memory_6);
#line 15
undef($memory_7);
#line 15
$memory_4 = ptd::var($memory_5);
#line 15
undef($memory_5);
#line 15
$memory_1 = {time => $memory_2,key => $memory_3,type => $memory_4,};
#line 15
undef($memory_2);
#line 15
undef($memory_3);
#line 15
undef($memory_4);
#line 15
$memory_0 = ptd::rec($memory_1);
#line 15
undef($memory_1);
#line 15
return $memory_0;
#line 15
undef($memory_0);
#line 15
return;
}

my $_row_t;
sub profile_inter::row_t() {
	$_row_t = profile_inter::__row_t() unless defined $_row_t;
	return $_row_t;
}

sub profile_inter::begin($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];
#line 20
$memory_4 = ptd::sim();
#line 20
$memory_3 = ptd::arr($memory_4);
#line 20
undef($memory_4);
#line 20
$memory_4 = nsystem::time_microsec();
#line 20
$memory_2 = ptd::ensure($memory_3, $memory_4);
#line 20
undef($memory_4);
#line 20
undef($memory_3);
#line 21
$memory_4 = c_rt_lib::ov_mk_none('begin');
#line 21
$memory_3 = {key => $memory_1,time => $memory_2,type => $memory_4,};
#line 21
undef($memory_4);
#line 21
array::push($memory_0, $memory_3);
#line 21
undef($memory_3);
#line 21
undef($memory_2);
#line 21
undef($memory_1);
#line 21
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub profile_inter::end($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];
#line 25
$memory_4 = ptd::sim();
#line 25
$memory_3 = ptd::arr($memory_4);
#line 25
undef($memory_4);
#line 25
$memory_4 = nsystem::time_microsec();
#line 25
$memory_2 = ptd::ensure($memory_3, $memory_4);
#line 25
undef($memory_4);
#line 25
undef($memory_3);
#line 26
$memory_4 = c_rt_lib::ov_mk_none('end');
#line 26
$memory_3 = {key => $memory_1,time => $memory_2,type => $memory_4,};
#line 26
undef($memory_4);
#line 26
array::push($memory_0, $memory_3);
#line 26
undef($memory_3);
#line 26
undef($memory_2);
#line 26
undef($memory_1);
#line 26
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub profile_inter::minus($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;$memory_0 = $_[0];$memory_1 = $_[1];
#line 30
$memory_3 = 0;
#line 30
$memory_2 = $memory_1->[$memory_3];
#line 30
undef($memory_3);
#line 30
$memory_4 = 0;
#line 30
$memory_3 = c_rt_lib::get_ref_arr($memory_0, $memory_4);
#line 30
$memory_3 = $memory_3 - $memory_2;
#line 30
c_rt_lib::set_ref_arr($memory_0, $memory_4, $memory_3);
#line 30
undef($memory_2);
#line 30
undef($memory_3);
#line 30
undef($memory_4);
#line 31
$memory_3 = 1;
#line 31
$memory_2 = $memory_0->[$memory_3];
#line 31
undef($memory_3);
#line 31
$memory_4 = 1;
#line 31
$memory_3 = $memory_1->[$memory_4];
#line 31
undef($memory_4);
#line 31
$memory_2 = c_rt_lib::to_nl($memory_2 < $memory_3);
#line 31
undef($memory_3);
#line 31
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 31
if (c_rt_lib::check_true($memory_2)) {goto label_45;}
#line 32
$memory_4 = 0;
#line 32
$memory_3 = c_rt_lib::get_ref_arr($memory_0, $memory_4);
#line 32
$memory_5 = 1;
#line 32
$memory_3 = $memory_3 - $memory_5;
#line 32
c_rt_lib::set_ref_arr($memory_0, $memory_4, $memory_3);
#line 32
undef($memory_3);
#line 32
undef($memory_4);
#line 32
undef($memory_5);
#line 33
$memory_3 = 1000;
#line 33
$memory_4 = 1000;
#line 33
$memory_3 = $memory_3 * $memory_4;
#line 33
undef($memory_4);
#line 33
$memory_5 = 1;
#line 33
$memory_4 = $memory_1->[$memory_5];
#line 33
undef($memory_5);
#line 33
$memory_3 = $memory_3 - $memory_4;
#line 33
undef($memory_4);
#line 33
$memory_5 = 1;
#line 33
$memory_4 = c_rt_lib::get_ref_arr($memory_0, $memory_5);
#line 33
$memory_4 = $memory_4 + $memory_3;
#line 33
c_rt_lib::set_ref_arr($memory_0, $memory_5, $memory_4);
#line 33
undef($memory_3);
#line 33
undef($memory_4);
#line 33
undef($memory_5);
#line 34
goto label_57;
#line 34
label_45:
#line 35
$memory_4 = 1;
#line 35
$memory_3 = $memory_1->[$memory_4];
#line 35
undef($memory_4);
#line 35
$memory_5 = 1;
#line 35
$memory_4 = c_rt_lib::get_ref_arr($memory_0, $memory_5);
#line 35
$memory_4 = $memory_4 - $memory_3;
#line 35
c_rt_lib::set_ref_arr($memory_0, $memory_5, $memory_4);
#line 35
undef($memory_3);
#line 35
undef($memory_4);
#line 35
undef($memory_5);
#line 36
goto label_57;
#line 36
label_57:
#line 36
undef($memory_2);
#line 37
undef($memory_1);
#line 37
return $memory_0;
#line 37
undef($memory_0);
#line 37
undef($memory_1);
#line 37
return;
}

sub profile_inter::plus($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;$memory_0 = $_[0];$memory_1 = $_[1];
#line 41
$memory_3 = 0;
#line 41
$memory_2 = $memory_1->[$memory_3];
#line 41
undef($memory_3);
#line 41
$memory_4 = 0;
#line 41
$memory_3 = c_rt_lib::get_ref_arr($memory_0, $memory_4);
#line 41
$memory_3 = $memory_3 + $memory_2;
#line 41
c_rt_lib::set_ref_arr($memory_0, $memory_4, $memory_3);
#line 41
undef($memory_2);
#line 41
undef($memory_3);
#line 41
undef($memory_4);
#line 42
$memory_3 = 1;
#line 42
$memory_2 = $memory_1->[$memory_3];
#line 42
undef($memory_3);
#line 42
$memory_4 = 1;
#line 42
$memory_3 = c_rt_lib::get_ref_arr($memory_0, $memory_4);
#line 42
$memory_3 = $memory_3 + $memory_2;
#line 42
c_rt_lib::set_ref_arr($memory_0, $memory_4, $memory_3);
#line 42
undef($memory_2);
#line 42
undef($memory_3);
#line 42
undef($memory_4);
#line 43
$memory_3 = 1;
#line 43
$memory_2 = $memory_0->[$memory_3];
#line 43
undef($memory_3);
#line 43
$memory_3 = 1000;
#line 43
$memory_4 = 1000;
#line 43
$memory_3 = $memory_3 * $memory_4;
#line 43
undef($memory_4);
#line 43
$memory_2 = c_rt_lib::to_nl($memory_2 > $memory_3);
#line 43
undef($memory_3);
#line 43
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 43
if (c_rt_lib::check_true($memory_2)) {goto label_51;}
#line 44
$memory_4 = 0;
#line 44
$memory_3 = c_rt_lib::get_ref_arr($memory_0, $memory_4);
#line 44
$memory_5 = 1;
#line 44
$memory_3 = $memory_3 + $memory_5;
#line 44
c_rt_lib::set_ref_arr($memory_0, $memory_4, $memory_3);
#line 44
undef($memory_3);
#line 44
undef($memory_4);
#line 44
undef($memory_5);
#line 45
$memory_3 = 1000;
#line 45
$memory_4 = 1000;
#line 45
$memory_3 = $memory_3 * $memory_4;
#line 45
undef($memory_4);
#line 45
$memory_5 = 1;
#line 45
$memory_4 = c_rt_lib::get_ref_arr($memory_0, $memory_5);
#line 45
$memory_4 = $memory_4 - $memory_3;
#line 45
c_rt_lib::set_ref_arr($memory_0, $memory_5, $memory_4);
#line 45
undef($memory_3);
#line 45
undef($memory_4);
#line 45
undef($memory_5);
#line 46
goto label_51;
#line 46
label_51:
#line 46
undef($memory_2);
#line 47
undef($memory_1);
#line 47
return $memory_0;
#line 47
undef($memory_0);
#line 47
undef($memory_1);
#line 47
return;
}

sub profile_inter::save_profile_js($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;my $memory_13;$memory_0 = $_[0];
#line 51
$memory_1 = "";
#line 52
$memory_2 = [];
#line 53
$memory_4 = 0;
#line 53
$memory_5 = 1;
#line 53
$memory_6 = c_rt_lib::array_len($memory_0);
#line 53
label_5:
#line 53
$memory_7 = c_rt_lib::to_nl($memory_4 >= $memory_6);
#line 53
if (c_rt_lib::check_true($memory_7)) {goto label_41;}
#line 53
$memory_3 = $memory_0->[$memory_4];
#line 54
$memory_8 = $memory_3->{'time'};
#line 55
$memory_9 = $memory_3->{'key'};
#line 56
$memory_10 = $memory_3->{'type'};
#line 56
$memory_11 = c_rt_lib::ov_is($memory_10, 'begin');
#line 56
if (c_rt_lib::check_true($memory_11)) {goto label_19;}
#line 59
$memory_11 = c_rt_lib::ov_is($memory_10, 'end');
#line 59
if (c_rt_lib::check_true($memory_11)) {goto label_25;}
#line 59
$memory_11 = "NOMATCHALERT";
#line 59
$memory_11 = [$memory_11,$memory_10];
#line 59
die(dfile::ssave($memory_11));
#line 56
label_19:
#line 57
array::push($memory_2, $memory_8);
#line 58
$memory_12 = profile_inter_priv::print_row($memory_2, $memory_8, $memory_9);
#line 58
$memory_1 = $memory_1 . $memory_12;
#line 58
undef($memory_12);
#line 59
goto label_34;
#line 59
label_25:
#line 60
$memory_13 = "TOTAL: ";
#line 60
$memory_13 = $memory_13 . $memory_9;
#line 60
$memory_12 = profile_inter_priv::print_row($memory_2, $memory_8, $memory_13);
#line 60
undef($memory_13);
#line 60
$memory_1 = $memory_1 . $memory_12;
#line 60
undef($memory_12);
#line 61
array::pop($memory_2);
#line 62
goto label_34;
#line 62
label_34:
#line 62
undef($memory_10);
#line 62
undef($memory_11);
#line 62
undef($memory_8);
#line 62
undef($memory_9);
#line 63
$memory_4 = $memory_4 + $memory_5;
#line 63
goto label_5;
#line 63
label_41:
#line 63
undef($memory_3);
#line 63
undef($memory_4);
#line 63
undef($memory_5);
#line 63
undef($memory_6);
#line 63
undef($memory_7);
#line 64
undef($memory_0);
#line 64
undef($memory_2);
#line 64
return $memory_1;
#line 64
undef($memory_1);
#line 64
undef($memory_2);
#line 64
undef($memory_0);
#line 64
return;
}

sub profile_inter_priv::print_row($$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;my $memory_13;my $memory_14;my $memory_15;$memory_0 = $_[0];$memory_1 = $_[1];$memory_2 = $_[2];
#line 68
$memory_3 = "";
#line 69
$memory_5 = 0;
#line 69
$memory_6 = 1;
#line 69
$memory_7 = c_rt_lib::array_len($memory_0);
#line 69
label_4:
#line 69
$memory_8 = c_rt_lib::to_nl($memory_5 >= $memory_7);
#line 69
if (c_rt_lib::check_true($memory_8)) {goto label_69;}
#line 69
$memory_4 = $memory_0->[$memory_5];
#line 70
$memory_9 = "           ";
#line 70
$memory_10 = profile_inter_priv::diff_time($memory_1, $memory_4);
#line 70
$memory_9 = $memory_9 . $memory_10;
#line 70
undef($memory_10);
#line 71
$memory_11 = ".";
#line 71
$memory_10 = string::index2($memory_9, $memory_11);
#line 71
undef($memory_11);
#line 72
$memory_11 = string::length($memory_9);
#line 73
$memory_12 = 1;
#line 73
$memory_12 = -$memory_12;
#line 73
$memory_12 = c_rt_lib::to_nl($memory_10 == $memory_12);
#line 73
$memory_12 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_12));
#line 73
if (c_rt_lib::check_true($memory_12)) {goto label_25;}
#line 74
$memory_13 = ".000";
#line 74
$memory_9 = $memory_9 . $memory_13;
#line 74
undef($memory_13);
#line 75
goto label_39;
#line 75
label_25:
#line 76
$memory_13 = "000";
#line 76
$memory_9 = $memory_9 . $memory_13;
#line 76
undef($memory_13);
#line 77
$memory_14 = 0;
#line 77
$memory_15 = 4;
#line 77
$memory_15 = $memory_10 + $memory_15;
#line 77
$memory_13 = string::substr($memory_9, $memory_14, $memory_15);
#line 77
undef($memory_15);
#line 77
undef($memory_14);
#line 77
$memory_9 = $memory_13;
#line 77
undef($memory_13);
#line 78
$memory_11 = $memory_10;
#line 79
goto label_39;
#line 79
label_39:
#line 79
undef($memory_12);
#line 80
$memory_13 = 7;
#line 80
$memory_13 = $memory_11 - $memory_13;
#line 80
$memory_14 = 4;
#line 80
$memory_12 = string::substr($memory_9, $memory_13, $memory_14);
#line 80
undef($memory_14);
#line 80
undef($memory_13);
#line 80
$memory_13 = " ";
#line 80
$memory_12 = $memory_12 . $memory_13;
#line 80
undef($memory_13);
#line 80
$memory_14 = 3;
#line 80
$memory_14 = $memory_11 - $memory_14;
#line 80
$memory_15 = 7;
#line 80
$memory_13 = string::substr($memory_9, $memory_14, $memory_15);
#line 80
undef($memory_15);
#line 80
undef($memory_14);
#line 80
$memory_12 = $memory_12 . $memory_13;
#line 80
undef($memory_13);
#line 80
$memory_13 = string::tab();
#line 80
$memory_12 = $memory_12 . $memory_13;
#line 80
undef($memory_13);
#line 80
$memory_9 = $memory_12;
#line 80
undef($memory_12);
#line 81
$memory_3 = $memory_3 . $memory_9;
#line 81
undef($memory_9);
#line 81
undef($memory_10);
#line 81
undef($memory_11);
#line 82
$memory_5 = $memory_5 + $memory_6;
#line 82
goto label_4;
#line 82
label_69:
#line 82
undef($memory_4);
#line 82
undef($memory_5);
#line 82
undef($memory_6);
#line 82
undef($memory_7);
#line 82
undef($memory_8);
#line 83
$memory_4 = string::tab();
#line 83
$memory_3 = $memory_3 . $memory_4;
#line 83
undef($memory_4);
#line 84
$memory_3 = $memory_3 . $memory_2;
#line 85
$memory_4 = string::lf();
#line 85
$memory_3 = $memory_3 . $memory_4;
#line 85
undef($memory_4);
#line 86
undef($memory_0);
#line 86
undef($memory_1);
#line 86
undef($memory_2);
#line 86
return $memory_3;
#line 86
undef($memory_3);
#line 86
undef($memory_0);
#line 86
undef($memory_1);
#line 86
undef($memory_2);
#line 86
return;
}

sub profile_inter_priv::diff_time($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;$memory_0 = $_[0];$memory_1 = $_[1];
#line 90
$memory_3 = 0;
#line 90
$memory_2 = $memory_0->[$memory_3];
#line 90
undef($memory_3);
#line 90
$memory_4 = 0;
#line 90
$memory_3 = $memory_1->[$memory_4];
#line 90
undef($memory_4);
#line 90
$memory_2 = $memory_2 - $memory_3;
#line 90
undef($memory_3);
#line 91
$memory_4 = 1;
#line 91
$memory_3 = $memory_0->[$memory_4];
#line 91
undef($memory_4);
#line 91
$memory_5 = 1;
#line 91
$memory_4 = $memory_1->[$memory_5];
#line 91
undef($memory_5);
#line 91
$memory_3 = $memory_3 - $memory_4;
#line 91
undef($memory_4);
#line 92
$memory_4 = 0;
#line 92
$memory_4 = c_rt_lib::to_nl($memory_3 < $memory_4);
#line 92
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 92
if (c_rt_lib::check_true($memory_4)) {goto label_27;}
#line 93
$memory_5 = 1;
#line 93
$memory_2 = $memory_2 - $memory_5;
#line 93
undef($memory_5);
#line 94
$memory_5 = 1000000;
#line 94
$memory_3 = $memory_3 + $memory_5;
#line 94
undef($memory_5);
#line 95
goto label_27;
#line 95
label_27:
#line 95
undef($memory_4);
#line 96
$memory_4 = "1000.0";
#line 96
$memory_4 = $memory_2 * $memory_4;
#line 96
$memory_5 = "1000.0";
#line 96
$memory_5 = $memory_3 / $memory_5;
#line 96
$memory_4 = $memory_4 + $memory_5;
#line 96
undef($memory_5);
#line 96
undef($memory_0);
#line 96
undef($memory_1);
#line 96
undef($memory_2);
#line 96
undef($memory_3);
#line 96
return $memory_4;
#line 96
undef($memory_4);
#line 96
undef($memory_2);
#line 96
undef($memory_3);
#line 96
undef($memory_0);
#line 96
undef($memory_1);
#line 96
return;
}
