use c_rt_lib;
use ov;
use c_fe_lib;
use c_std_lib;
use string;
use hash;
use array;
use nl;
use boolean_t;
use ptd;
sub dfile::fsave;
sub dfile::fload;
sub dfile::ssave;
sub dfile::debug;
sub dfile::ssave_net_format;
sub dfile_priv::eat_ws;
sub dfile_priv::get_char;
sub dfile_priv::is_ov;
sub dfile_priv::eat_non_ws;
sub dfile_priv::parse_scalar;
sub dfile_priv::match_s;
sub dfile::state_t;
sub dfile_priv::parse;
sub dfile::sload;
sub dfile::try_sload;
sub dfile::state_out;
sub dfile_priv::sp;
sub dfile_priv::sprintstr;
sub dfile_priv::is_simple_string;
sub dfile_priv::sprint_hash_key;
sub dfile_priv::get_ind;
sub dfile_priv::sprint_hash;
sub dfile_priv::handle_debug;
sub dfile_priv::sprint;
sub dfile_priv::print_net_formatstr;
sub dfile_priv::print_net_format;

return 1;

sub dfile::fsave($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;$memory_0 = $_[0];$memory_1 = $_[1];
#line 17
$memory_4 = dfile::ssave($memory_1);
#line 17
$memory_3 = c_fe_lib::string_to_file($memory_0, $memory_4);
#line 17
undef($memory_4);
#line 17
$memory_2 = c_rt_lib::ov_is($memory_3, 'ok');
#line 17
if (c_rt_lib::check_true($memory_2)) {goto label_1;}
#line 17
$memory_3 = c_rt_lib::ov_mk_arg('ensure', $memory_3);
#line 17
die(dfile::ssave($memory_3));
#line 17
label_1:
#line 17
undef($memory_2);
#line 17
undef($memory_3);
#line 17
undef($memory_0);
#line 17
undef($memory_1);
#line 17
return;
}

sub dfile::fload($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;$memory_0 = $_[0];
#line 21
$memory_3 = c_fe_lib::file_to_string($memory_0);
#line 21
$memory_2 = c_rt_lib::ov_is($memory_3, 'ok');
#line 21
if (c_rt_lib::check_true($memory_2)) {goto label_1;}
#line 21
$memory_3 = c_rt_lib::ov_mk_arg('ensure', $memory_3);
#line 21
die(dfile::ssave($memory_3));
#line 21
label_1:
#line 21
$memory_1 = c_rt_lib::ov_as($memory_3, 'ok');
#line 21
undef($memory_2);
#line 21
undef($memory_3);
#line 22
$memory_2 = dfile::sload($memory_1);
#line 22
undef($memory_0);
#line 22
undef($memory_1);
#line 22
return $memory_2;
#line 22
undef($memory_2);
#line 22
undef($memory_1);
#line 22
undef($memory_0);
#line 22
return;
}

sub dfile::ssave($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;$memory_0 = $_[0];
#line 26
$memory_2 = "";
#line 26
$memory_3 = {};
#line 26
$memory_1 = {str => $memory_2,objects => $memory_3,};
#line 26
undef($memory_2);
#line 26
undef($memory_3);
#line 27
$memory_2 = 0;
#line 27
$memory_3 = c_rt_lib::to_nl(0);
#line 27
dfile_priv::sprint($memory_1, $memory_0, $memory_2, $memory_3);
#line 27
undef($memory_3);
#line 27
undef($memory_2);
#line 28
$memory_2 = $memory_1->{'str'};
#line 28
undef($memory_0);
#line 28
undef($memory_1);
#line 28
return $memory_2;
#line 28
undef($memory_2);
#line 28
undef($memory_1);
#line 28
undef($memory_0);
#line 28
return;
}

sub dfile::debug($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;$memory_0 = $_[0];
#line 32
$memory_2 = "";
#line 32
$memory_3 = {};
#line 32
$memory_1 = {str => $memory_2,objects => $memory_3,};
#line 32
undef($memory_2);
#line 32
undef($memory_3);
#line 33
$memory_2 = 0;
#line 33
$memory_3 = c_rt_lib::to_nl(1);
#line 33
dfile_priv::sprint($memory_1, $memory_0, $memory_2, $memory_3);
#line 33
undef($memory_3);
#line 33
undef($memory_2);
#line 34
$memory_2 = $memory_1->{'str'};
#line 34
undef($memory_0);
#line 34
undef($memory_1);
#line 34
return $memory_2;
#line 34
undef($memory_2);
#line 34
undef($memory_1);
#line 34
undef($memory_0);
#line 34
return;
}

sub dfile::ssave_net_format($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;$memory_0 = $_[0];
#line 38
$memory_2 = "";
#line 38
$memory_3 = {};
#line 38
$memory_1 = {str => $memory_2,objects => $memory_3,};
#line 38
undef($memory_2);
#line 38
undef($memory_3);
#line 39
dfile_priv::print_net_format($memory_1, $memory_0);
#line 40
$memory_2 = $memory_1->{'str'};
#line 40
undef($memory_0);
#line 40
undef($memory_1);
#line 40
return $memory_2;
#line 40
undef($memory_2);
#line 40
undef($memory_1);
#line 40
undef($memory_0);
#line 40
return;
}

sub dfile_priv::eat_ws($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);
#line 44
label_2:
#line 45
$memory_1 = $memory_0->{'pos'};
#line 45
$memory_2 = $memory_0->{'len'};
#line 45
$memory_1 = c_rt_lib::to_nl($memory_1 == $memory_2);
#line 45
undef($memory_2);
#line 45
$memory_1 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_1));
#line 45
if (c_rt_lib::check_true($memory_1)) {goto label_4;}
#line 45
undef($memory_1);
#line 45
$_[0] = $memory_0;return;
#line 45
goto label_4;
#line 45
label_4:
#line 45
undef($memory_1);
#line 46
$memory_2 = dfile_priv::get_char($memory_0);
#line 46
$memory_1 = string::ord($memory_2);
#line 46
undef($memory_2);
#line 47
$memory_2 = 9;
#line 47
$memory_2 = c_rt_lib::to_nl($memory_1 == $memory_2);
#line 47
if (c_rt_lib::check_true($memory_2)) {goto label_9;}
#line 47
$memory_2 = 10;
#line 47
$memory_2 = c_rt_lib::to_nl($memory_1 == $memory_2);
#line 47
label_9:
#line 47
if (c_rt_lib::check_true($memory_2)) {goto label_8;}
#line 47
$memory_2 = 13;
#line 47
$memory_2 = c_rt_lib::to_nl($memory_1 == $memory_2);
#line 47
label_8:
#line 47
if (c_rt_lib::check_true($memory_2)) {goto label_7;}
#line 47
$memory_2 = 32;
#line 47
$memory_2 = c_rt_lib::to_nl($memory_1 == $memory_2);
#line 47
label_7:
#line 47
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 47
if (c_rt_lib::check_true($memory_2)) {goto label_6;}
#line 48
$memory_3 = "pos";
#line 48
$memory_3 = c_rt_lib::get_ref_hash($memory_0, $memory_3);
#line 48
$memory_4 = 1;
#line 48
$memory_3 = $memory_3 + $memory_4;
#line 48
$memory_5 = "pos";
#line 48
c_rt_lib::set_ref_hash($memory_0, $memory_5, $memory_3);
#line 48
undef($memory_5);
#line 48
undef($memory_3);
#line 48
undef($memory_4);
#line 49
goto label_5;
#line 49
label_6:
#line 50
undef($memory_1);
#line 50
undef($memory_2);
#line 50
$_[0] = $memory_0;return;
#line 51
goto label_5;
#line 51
label_5:
#line 51
undef($memory_2);
#line 51
undef($memory_1);
#line 44
goto label_2;
#line 44
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub dfile_priv::get_char($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);
#line 55
$memory_2 = ptd::sim();
#line 55
$memory_4 = $memory_0->{'str'};
#line 55
$memory_5 = $memory_0->{'pos'};
#line 55
$memory_6 = 1;
#line 55
$memory_3 = c_std_lib::fast_substr($memory_4, $memory_5, $memory_6);
#line 55
undef($memory_6);
#line 55
undef($memory_5);
#line 55
undef($memory_4);
#line 55
$memory_1 = ptd::ensure($memory_2, $memory_3);
#line 55
undef($memory_3);
#line 55
undef($memory_2);
#line 55
$_[0] = $memory_0;return $memory_1;
#line 55
undef($memory_1);
#line 55
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub dfile_priv::is_ov($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);
#line 58
$memory_2 = $memory_0->{'str'};
#line 58
$memory_3 = $memory_0->{'pos'};
#line 58
$memory_4 = 7;
#line 58
$memory_1 = c_std_lib::fast_substr($memory_2, $memory_3, $memory_4);
#line 58
undef($memory_4);
#line 58
undef($memory_3);
#line 58
undef($memory_2);
#line 58
$memory_2 = "ov::mk(";
#line 58
$memory_1 = c_rt_lib::to_nl($memory_1 eq $memory_2);
#line 58
undef($memory_2);
#line 58
$_[0] = $memory_0;return $memory_1;
#line 58
undef($memory_1);
#line 58
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub dfile_priv::eat_non_ws($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];Scalar::Util::weaken($_[1]) if ref($_[1]);
#line 62
$memory_2 = "";
#line 63
$memory_3 = $memory_0->{'len'};
#line 64
$memory_4 = $memory_0->{'pos'};
#line 64
$memory_4 = c_rt_lib::to_nl($memory_4 >= $memory_3);
#line 64
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 64
if (c_rt_lib::check_true($memory_4)) {goto label_2;}
#line 65
$memory_5 = c_rt_lib::to_nl(1);
#line 65
$memory_1 = $memory_5;
#line 65
undef($memory_5);
#line 66
$memory_5 = "pos ";
#line 66
$memory_6 = $memory_0->{'pos'};
#line 66
$memory_5 = $memory_5 . $memory_6;
#line 66
undef($memory_6);
#line 66
$memory_6 = ": expected scalar";
#line 66
$memory_5 = $memory_5 . $memory_6;
#line 66
undef($memory_6);
#line 66
undef($memory_2);
#line 66
undef($memory_3);
#line 66
undef($memory_4);
#line 66
$_[0] = $memory_0;$_[1] = $memory_1;return $memory_5;
#line 66
undef($memory_5);
#line 67
goto label_2;
#line 67
label_2:
#line 67
undef($memory_4);
#line 68
label_4:
#line 69
$memory_4 = dfile_priv::get_char($memory_0);
#line 70
$memory_5 = string::is_letter($memory_4);
#line 70
if (c_rt_lib::check_true($memory_5)) {goto label_8;}
#line 70
$memory_5 = string::is_digit($memory_4);
#line 70
label_8:
#line 70
if (c_rt_lib::check_true($memory_5)) {goto label_7;}
#line 70
$memory_5 = "_";
#line 70
$memory_5 = c_rt_lib::to_nl($memory_4 eq $memory_5);
#line 70
label_7:
#line 70
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 70
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 70
if (c_rt_lib::check_true($memory_5)) {goto label_6;}
#line 70
undef($memory_4);
#line 70
undef($memory_5);
#line 70
goto label_3;
#line 70
goto label_6;
#line 70
label_6:
#line 70
undef($memory_5);
#line 71
$memory_5 = "pos";
#line 71
$memory_5 = c_rt_lib::get_ref_hash($memory_0, $memory_5);
#line 71
$memory_6 = 1;
#line 71
$memory_5 = $memory_5 + $memory_6;
#line 71
$memory_7 = "pos";
#line 71
c_rt_lib::set_ref_hash($memory_0, $memory_7, $memory_5);
#line 71
undef($memory_7);
#line 71
undef($memory_5);
#line 71
undef($memory_6);
#line 72
$memory_2 = $memory_2 . $memory_4;
#line 73
$memory_5 = $memory_0->{'pos'};
#line 73
$memory_5 = c_rt_lib::to_nl($memory_5 >= $memory_3);
#line 73
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 73
if (c_rt_lib::check_true($memory_5)) {goto label_10;}
#line 73
undef($memory_4);
#line 73
undef($memory_5);
#line 73
goto label_3;
#line 73
goto label_10;
#line 73
label_10:
#line 73
undef($memory_5);
#line 73
undef($memory_4);
#line 68
goto label_4;
#line 68
label_3:
#line 75
$memory_4 = "";
#line 75
$memory_4 = c_rt_lib::to_nl($memory_2 eq $memory_4);
#line 75
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 75
if (c_rt_lib::check_true($memory_4)) {goto label_12;}
#line 76
$memory_5 = c_rt_lib::to_nl(1);
#line 76
$memory_1 = $memory_5;
#line 76
undef($memory_5);
#line 77
$memory_5 = "pos ";
#line 77
$memory_6 = $memory_0->{'pos'};
#line 77
$memory_5 = $memory_5 . $memory_6;
#line 77
undef($memory_6);
#line 77
$memory_6 = ": expected scalar";
#line 77
$memory_5 = $memory_5 . $memory_6;
#line 77
undef($memory_6);
#line 77
undef($memory_2);
#line 77
undef($memory_3);
#line 77
undef($memory_4);
#line 77
$_[0] = $memory_0;$_[1] = $memory_1;return $memory_5;
#line 77
undef($memory_5);
#line 78
goto label_12;
#line 78
label_12:
#line 78
undef($memory_4);
#line 79
undef($memory_3);
#line 79
$_[0] = $memory_0;$_[1] = $memory_1;return $memory_2;
#line 79
undef($memory_2);
#line 79
undef($memory_3);
#line 79
$_[0] = $memory_0;$_[1] = $memory_1;return;
$_[0] = $memory_0;$_[1] = $memory_1;}

sub dfile_priv::parse_scalar($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];Scalar::Util::weaken($_[1]) if ref($_[1]);
#line 83
dfile_priv::eat_ws($memory_0);
#line 84
$memory_2 = dfile_priv::get_char($memory_0);
#line 84
$memory_3 = "\"";
#line 84
$memory_2 = c_rt_lib::to_nl($memory_2 eq $memory_3);
#line 84
undef($memory_3);
#line 84
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 84
if (c_rt_lib::check_true($memory_2)) {goto label_2;}
#line 85
$memory_3 = "pos";
#line 85
$memory_3 = c_rt_lib::get_ref_hash($memory_0, $memory_3);
#line 85
$memory_4 = 1;
#line 85
$memory_3 = $memory_3 + $memory_4;
#line 85
$memory_5 = "pos";
#line 85
c_rt_lib::set_ref_hash($memory_0, $memory_5, $memory_3);
#line 85
undef($memory_5);
#line 85
undef($memory_3);
#line 85
undef($memory_4);
#line 86
$memory_3 = "";
#line 87
label_4:
#line 88
$memory_4 = $memory_0->{'pos'};
#line 88
$memory_5 = $memory_0->{'len'};
#line 88
$memory_4 = c_rt_lib::to_nl($memory_4 >= $memory_5);
#line 88
undef($memory_5);
#line 88
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 88
if (c_rt_lib::check_true($memory_4)) {goto label_6;}
#line 89
$memory_5 = c_rt_lib::to_nl(1);
#line 89
$memory_1 = $memory_5;
#line 89
undef($memory_5);
#line 90
$memory_5 = "pos ";
#line 90
$memory_6 = $memory_0->{'pos'};
#line 90
$memory_5 = $memory_5 . $memory_6;
#line 90
undef($memory_6);
#line 90
$memory_6 = ": expected \"";
#line 90
$memory_5 = $memory_5 . $memory_6;
#line 90
undef($memory_6);
#line 90
undef($memory_2);
#line 90
undef($memory_3);
#line 90
undef($memory_4);
#line 90
$_[0] = $memory_0;$_[1] = $memory_1;return $memory_5;
#line 90
undef($memory_5);
#line 91
goto label_6;
#line 91
label_6:
#line 91
undef($memory_4);
#line 92
$memory_4 = dfile_priv::get_char($memory_0);
#line 93
$memory_5 = "pos";
#line 93
$memory_5 = c_rt_lib::get_ref_hash($memory_0, $memory_5);
#line 93
$memory_6 = 1;
#line 93
$memory_5 = $memory_5 + $memory_6;
#line 93
$memory_7 = "pos";
#line 93
c_rt_lib::set_ref_hash($memory_0, $memory_7, $memory_5);
#line 93
undef($memory_7);
#line 93
undef($memory_5);
#line 93
undef($memory_6);
#line 94
$memory_5 = "\"";
#line 94
$memory_5 = c_rt_lib::to_nl($memory_4 eq $memory_5);
#line 94
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 94
if (c_rt_lib::check_true($memory_5)) {goto label_8;}
#line 94
undef($memory_4);
#line 94
undef($memory_5);
#line 94
goto label_3;
#line 94
goto label_8;
#line 94
label_8:
#line 94
undef($memory_5);
#line 95
$memory_5 = "\\";
#line 95
$memory_5 = c_rt_lib::to_nl($memory_4 eq $memory_5);
#line 95
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 95
if (c_rt_lib::check_true($memory_5)) {goto label_10;}
#line 96
$memory_6 = dfile_priv::get_char($memory_0);
#line 97
$memory_7 = "n";
#line 97
$memory_7 = c_rt_lib::to_nl($memory_6 eq $memory_7);
#line 97
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 97
if (c_rt_lib::check_true($memory_7)) {goto label_12;}
#line 98
$memory_8 = string::lf();
#line 98
$memory_3 = $memory_3 . $memory_8;
#line 98
undef($memory_8);
#line 99
goto label_11;
#line 99
label_12:
#line 99
$memory_7 = "r";
#line 99
$memory_7 = c_rt_lib::to_nl($memory_6 eq $memory_7);
#line 99
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 99
if (c_rt_lib::check_true($memory_7)) {goto label_13;}
#line 100
$memory_8 = string::r();
#line 100
$memory_3 = $memory_3 . $memory_8;
#line 100
undef($memory_8);
#line 101
goto label_11;
#line 101
label_13:
#line 101
$memory_7 = "t";
#line 101
$memory_7 = c_rt_lib::to_nl($memory_6 eq $memory_7);
#line 101
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 101
if (c_rt_lib::check_true($memory_7)) {goto label_14;}
#line 102
$memory_8 = string::tab();
#line 102
$memory_3 = $memory_3 . $memory_8;
#line 102
undef($memory_8);
#line 103
goto label_11;
#line 103
label_14:
#line 104
$memory_3 = $memory_3 . $memory_6;
#line 105
goto label_11;
#line 105
label_11:
#line 105
undef($memory_7);
#line 106
$memory_7 = "pos";
#line 106
$memory_7 = c_rt_lib::get_ref_hash($memory_0, $memory_7);
#line 106
$memory_8 = 1;
#line 106
$memory_7 = $memory_7 + $memory_8;
#line 106
$memory_9 = "pos";
#line 106
c_rt_lib::set_ref_hash($memory_0, $memory_9, $memory_7);
#line 106
undef($memory_9);
#line 106
undef($memory_7);
#line 106
undef($memory_8);
#line 106
undef($memory_6);
#line 107
goto label_9;
#line 107
label_10:
#line 108
$memory_3 = $memory_3 . $memory_4;
#line 109
goto label_9;
#line 109
label_9:
#line 109
undef($memory_5);
#line 109
undef($memory_4);
#line 87
goto label_4;
#line 87
label_3:
#line 111
undef($memory_2);
#line 111
$_[0] = $memory_0;$_[1] = $memory_1;return $memory_3;
#line 111
undef($memory_3);
#line 112
goto label_1;
#line 112
label_2:
#line 113
$memory_3 = dfile_priv::eat_non_ws($memory_0, $memory_1);
#line 113
undef($memory_2);
#line 113
$_[0] = $memory_0;$_[1] = $memory_1;return $memory_3;
#line 113
undef($memory_3);
#line 114
goto label_1;
#line 114
label_1:
#line 114
undef($memory_2);
#line 114
$_[0] = $memory_0;$_[1] = $memory_1;return;
$_[0] = $memory_0;$_[1] = $memory_1;}

sub dfile_priv::match_s($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];
#line 118
$memory_2 = string::length($memory_1);
#line 119
$memory_4 = $memory_0->{'str'};
#line 119
$memory_5 = $memory_0->{'pos'};
#line 119
$memory_3 = c_std_lib::fast_substr($memory_4, $memory_5, $memory_2);
#line 119
undef($memory_5);
#line 119
undef($memory_4);
#line 119
$memory_3 = c_rt_lib::to_nl($memory_3 eq $memory_1);
#line 119
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 119
if (c_rt_lib::check_true($memory_3)) {goto label_2;}
#line 120
$memory_4 = "pos";
#line 120
$memory_4 = c_rt_lib::get_ref_hash($memory_0, $memory_4);
#line 120
$memory_4 = $memory_4 + $memory_2;
#line 120
$memory_5 = "pos";
#line 120
c_rt_lib::set_ref_hash($memory_0, $memory_5, $memory_4);
#line 120
undef($memory_5);
#line 120
undef($memory_4);
#line 121
$memory_4 = c_rt_lib::to_nl(1);
#line 121
undef($memory_1);
#line 121
undef($memory_2);
#line 121
undef($memory_3);
#line 121
$_[0] = $memory_0;return $memory_4;
#line 121
undef($memory_4);
#line 122
goto label_1;
#line 122
label_2:
#line 123
$memory_4 = c_rt_lib::to_nl(0);
#line 123
undef($memory_1);
#line 123
undef($memory_2);
#line 123
undef($memory_3);
#line 123
$_[0] = $memory_0;return $memory_4;
#line 123
undef($memory_4);
#line 124
goto label_1;
#line 124
label_1:
#line 124
undef($memory_3);
#line 124
undef($memory_2);
#line 124
undef($memory_1);
#line 124
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub dfile::__state_t() {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;
#line 128
$memory_3 = ptd::sim();
#line 128
$memory_2 = ptd::arr($memory_3);
#line 128
undef($memory_3);
#line 128
$memory_3 = ptd::sim();
#line 128
$memory_4 = ptd::sim();
#line 128
$memory_1 = {str => $memory_2,len => $memory_3,pos => $memory_4,};
#line 128
undef($memory_2);
#line 128
undef($memory_3);
#line 128
undef($memory_4);
#line 128
$memory_0 = ptd::rec($memory_1);
#line 128
undef($memory_1);
#line 128
return $memory_0;
#line 128
undef($memory_0);
#line 128
return;
}

my $_state_t;
sub dfile::state_t() {
	$_state_t = dfile::__state_t() unless defined $_state_t;
	return $_state_t;
}

sub dfile_priv::parse($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];Scalar::Util::weaken($_[1]) if ref($_[1]);
#line 136
dfile_priv::eat_ws($memory_0);
#line 137
$memory_2 = dfile_priv::get_char($memory_0);
#line 138
$memory_3 = "{";
#line 138
$memory_3 = c_rt_lib::to_nl($memory_2 eq $memory_3);
#line 138
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 138
if (c_rt_lib::check_true($memory_3)) {goto label_2;}
#line 139
$memory_4 = 1;
#line 139
$memory_5 = "pos";
#line 139
$memory_5 = c_rt_lib::get_ref_hash($memory_0, $memory_5);
#line 139
$memory_5 = $memory_5 + $memory_4;
#line 139
$memory_6 = "pos";
#line 139
c_rt_lib::set_ref_hash($memory_0, $memory_6, $memory_5);
#line 139
undef($memory_6);
#line 139
undef($memory_4);
#line 139
undef($memory_5);
#line 140
$memory_4 = {};
#line 141
dfile_priv::eat_ws($memory_0);
#line 142
label_4:
#line 142
$memory_6 = "}";
#line 142
$memory_5 = dfile_priv::match_s($memory_0, $memory_6);
#line 142
undef($memory_6);
#line 142
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 142
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 142
if (c_rt_lib::check_true($memory_5)) {goto label_3;}
#line 143
$memory_6 = dfile_priv::parse_scalar($memory_0, $memory_1);
#line 144
$memory_7 = $memory_1;
#line 144
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 144
if (c_rt_lib::check_true($memory_7)) {goto label_6;}
#line 144
undef($memory_2);
#line 144
undef($memory_3);
#line 144
undef($memory_4);
#line 144
undef($memory_5);
#line 144
undef($memory_7);
#line 144
$_[0] = $memory_0;$_[1] = $memory_1;return $memory_6;
#line 144
goto label_6;
#line 144
label_6:
#line 144
undef($memory_7);
#line 145
dfile_priv::eat_ws($memory_0);
#line 146
$memory_8 = "=>";
#line 146
$memory_7 = dfile_priv::match_s($memory_0, $memory_8);
#line 146
undef($memory_8);
#line 146
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 146
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 146
if (c_rt_lib::check_true($memory_7)) {goto label_8;}
#line 147
$memory_8 = c_rt_lib::to_nl(1);
#line 147
$memory_1 = $memory_8;
#line 147
undef($memory_8);
#line 148
$memory_8 = "pos ";
#line 148
$memory_9 = $memory_0->{'pos'};
#line 148
$memory_8 = $memory_8 . $memory_9;
#line 148
undef($memory_9);
#line 148
$memory_9 = ": expected =>";
#line 148
$memory_8 = $memory_8 . $memory_9;
#line 148
undef($memory_9);
#line 148
undef($memory_2);
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
$_[0] = $memory_0;$_[1] = $memory_1;return $memory_8;
#line 148
undef($memory_8);
#line 149
goto label_8;
#line 149
label_8:
#line 149
undef($memory_7);
#line 150
$memory_7 = dfile_priv::parse($memory_0, $memory_1);
#line 151
$memory_8 = $memory_1;
#line 151
$memory_8 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 151
if (c_rt_lib::check_true($memory_8)) {goto label_10;}
#line 151
undef($memory_2);
#line 151
undef($memory_3);
#line 151
undef($memory_4);
#line 151
undef($memory_5);
#line 151
undef($memory_6);
#line 151
undef($memory_8);
#line 151
$_[0] = $memory_0;$_[1] = $memory_1;return $memory_7;
#line 151
goto label_10;
#line 151
label_10:
#line 151
undef($memory_8);
#line 152
hash::set_value($memory_4, $memory_6, $memory_7);
#line 153
dfile_priv::eat_ws($memory_0);
#line 154
$memory_9 = ",";
#line 154
$memory_8 = dfile_priv::match_s($memory_0, $memory_9);
#line 154
undef($memory_9);
#line 154
$memory_8 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 154
$memory_8 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 154
if (c_rt_lib::check_true($memory_8)) {goto label_12;}
#line 155
$memory_9 = c_rt_lib::to_nl(1);
#line 155
$memory_1 = $memory_9;
#line 155
undef($memory_9);
#line 156
$memory_9 = "pos ";
#line 156
$memory_10 = $memory_0->{'pos'};
#line 156
$memory_9 = $memory_9 . $memory_10;
#line 156
undef($memory_10);
#line 156
$memory_10 = ": expected ,";
#line 156
$memory_9 = $memory_9 . $memory_10;
#line 156
undef($memory_10);
#line 156
undef($memory_2);
#line 156
undef($memory_3);
#line 156
undef($memory_4);
#line 156
undef($memory_5);
#line 156
undef($memory_6);
#line 156
undef($memory_7);
#line 156
undef($memory_8);
#line 156
$_[0] = $memory_0;$_[1] = $memory_1;return $memory_9;
#line 156
undef($memory_9);
#line 157
goto label_12;
#line 157
label_12:
#line 157
undef($memory_8);
#line 158
dfile_priv::eat_ws($memory_0);
#line 158
undef($memory_6);
#line 158
undef($memory_7);
#line 159
goto label_4;
#line 159
label_3:
#line 159
undef($memory_5);
#line 160
undef($memory_2);
#line 160
undef($memory_3);
#line 160
$_[0] = $memory_0;$_[1] = $memory_1;return $memory_4;
#line 160
undef($memory_4);
#line 161
goto label_1;
#line 161
label_2:
#line 161
$memory_3 = "[";
#line 161
$memory_3 = c_rt_lib::to_nl($memory_2 eq $memory_3);
#line 161
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 161
if (c_rt_lib::check_true($memory_3)) {goto label_13;}
#line 162
$memory_4 = 1;
#line 162
$memory_5 = "pos";
#line 162
$memory_5 = c_rt_lib::get_ref_hash($memory_0, $memory_5);
#line 162
$memory_5 = $memory_5 + $memory_4;
#line 162
$memory_6 = "pos";
#line 162
c_rt_lib::set_ref_hash($memory_0, $memory_6, $memory_5);
#line 162
undef($memory_6);
#line 162
undef($memory_4);
#line 162
undef($memory_5);
#line 163
$memory_4 = [];
#line 164
dfile_priv::eat_ws($memory_0);
#line 165
label_15:
#line 165
$memory_6 = "]";
#line 165
$memory_5 = dfile_priv::match_s($memory_0, $memory_6);
#line 165
undef($memory_6);
#line 165
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 165
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 165
if (c_rt_lib::check_true($memory_5)) {goto label_14;}
#line 166
$memory_6 = dfile_priv::parse($memory_0, $memory_1);
#line 167
$memory_7 = $memory_1;
#line 167
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 167
if (c_rt_lib::check_true($memory_7)) {goto label_17;}
#line 167
undef($memory_2);
#line 167
undef($memory_3);
#line 167
undef($memory_4);
#line 167
undef($memory_5);
#line 167
undef($memory_7);
#line 167
$_[0] = $memory_0;$_[1] = $memory_1;return $memory_6;
#line 167
goto label_17;
#line 167
label_17:
#line 167
undef($memory_7);
#line 168
array::push($memory_4, $memory_6);
#line 169
$memory_8 = ",";
#line 169
$memory_7 = dfile_priv::match_s($memory_0, $memory_8);
#line 169
undef($memory_8);
#line 169
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 169
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 169
if (c_rt_lib::check_true($memory_7)) {goto label_19;}
#line 170
$memory_8 = c_rt_lib::to_nl(1);
#line 170
$memory_1 = $memory_8;
#line 170
undef($memory_8);
#line 171
$memory_8 = "pos ";
#line 171
$memory_9 = $memory_0->{'pos'};
#line 171
$memory_8 = $memory_8 . $memory_9;
#line 171
undef($memory_9);
#line 171
$memory_9 = ": expected ,";
#line 171
$memory_8 = $memory_8 . $memory_9;
#line 171
undef($memory_9);
#line 171
undef($memory_2);
#line 171
undef($memory_3);
#line 171
undef($memory_4);
#line 171
undef($memory_5);
#line 171
undef($memory_6);
#line 171
undef($memory_7);
#line 171
$_[0] = $memory_0;$_[1] = $memory_1;return $memory_8;
#line 171
undef($memory_8);
#line 172
goto label_19;
#line 172
label_19:
#line 172
undef($memory_7);
#line 173
dfile_priv::eat_ws($memory_0);
#line 173
undef($memory_6);
#line 174
goto label_15;
#line 174
label_14:
#line 174
undef($memory_5);
#line 175
undef($memory_2);
#line 175
undef($memory_3);
#line 175
$_[0] = $memory_0;$_[1] = $memory_1;return $memory_4;
#line 175
undef($memory_4);
#line 176
goto label_1;
#line 176
label_13:
#line 176
$memory_3 = "o";
#line 176
$memory_3 = c_rt_lib::to_nl($memory_2 eq $memory_3);
#line 176
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 176
if (c_rt_lib::check_true($memory_4)) {goto label_21;}
#line 176
$memory_3 = dfile_priv::is_ov($memory_0);
#line 176
label_21:
#line 176
undef($memory_4);
#line 176
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 176
if (c_rt_lib::check_true($memory_3)) {goto label_20;}
#line 177
$memory_4 = 7;
#line 177
$memory_5 = "pos";
#line 177
$memory_5 = c_rt_lib::get_ref_hash($memory_0, $memory_5);
#line 177
$memory_5 = $memory_5 + $memory_4;
#line 177
$memory_6 = "pos";
#line 177
c_rt_lib::set_ref_hash($memory_0, $memory_6, $memory_5);
#line 177
undef($memory_6);
#line 177
undef($memory_4);
#line 177
undef($memory_5);
#line 178
$memory_4 = dfile_priv::parse_scalar($memory_0, $memory_1);
#line 179
$memory_5 = $memory_1;
#line 179
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 179
if (c_rt_lib::check_true($memory_5)) {goto label_23;}
#line 179
undef($memory_2);
#line 179
undef($memory_3);
#line 179
undef($memory_5);
#line 179
$_[0] = $memory_0;$_[1] = $memory_1;return $memory_4;
#line 179
goto label_23;
#line 179
label_23:
#line 179
undef($memory_5);
#line 180
dfile_priv::eat_ws($memory_0);
#line 181
$memory_6 = ",";
#line 181
$memory_5 = dfile_priv::match_s($memory_0, $memory_6);
#line 181
undef($memory_6);
#line 181
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 181
if (c_rt_lib::check_true($memory_5)) {goto label_25;}
#line 182
$memory_6 = dfile_priv::parse($memory_0, $memory_1);
#line 183
$memory_7 = $memory_1;
#line 183
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 183
if (c_rt_lib::check_true($memory_7)) {goto label_27;}
#line 183
undef($memory_2);
#line 183
undef($memory_3);
#line 183
undef($memory_4);
#line 183
undef($memory_5);
#line 183
undef($memory_7);
#line 183
$_[0] = $memory_0;$_[1] = $memory_1;return $memory_6;
#line 183
goto label_27;
#line 183
label_27:
#line 183
undef($memory_7);
#line 184
dfile_priv::eat_ws($memory_0);
#line 185
$memory_8 = ")";
#line 185
$memory_7 = dfile_priv::match_s($memory_0, $memory_8);
#line 185
undef($memory_8);
#line 185
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 185
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 185
if (c_rt_lib::check_true($memory_7)) {goto label_29;}
#line 186
$memory_8 = c_rt_lib::to_nl(1);
#line 186
$memory_1 = $memory_8;
#line 186
undef($memory_8);
#line 187
$memory_8 = "pos ";
#line 187
$memory_9 = $memory_0->{'pos'};
#line 187
$memory_8 = $memory_8 . $memory_9;
#line 187
undef($memory_9);
#line 187
$memory_9 = ": expected )";
#line 187
$memory_8 = $memory_8 . $memory_9;
#line 187
undef($memory_9);
#line 187
undef($memory_2);
#line 187
undef($memory_3);
#line 187
undef($memory_4);
#line 187
undef($memory_5);
#line 187
undef($memory_6);
#line 187
undef($memory_7);
#line 187
$_[0] = $memory_0;$_[1] = $memory_1;return $memory_8;
#line 187
undef($memory_8);
#line 188
goto label_29;
#line 188
label_29:
#line 188
undef($memory_7);
#line 189
$memory_7 = ov::mk_val($memory_4, $memory_6);
#line 189
undef($memory_2);
#line 189
undef($memory_3);
#line 189
undef($memory_4);
#line 189
undef($memory_5);
#line 189
undef($memory_6);
#line 189
$_[0] = $memory_0;$_[1] = $memory_1;return $memory_7;
#line 189
undef($memory_7);
#line 189
undef($memory_6);
#line 190
goto label_25;
#line 190
label_25:
#line 190
undef($memory_5);
#line 191
dfile_priv::eat_ws($memory_0);
#line 192
$memory_6 = ")";
#line 192
$memory_5 = dfile_priv::match_s($memory_0, $memory_6);
#line 192
undef($memory_6);
#line 192
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 192
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 192
if (c_rt_lib::check_true($memory_5)) {goto label_31;}
#line 193
$memory_6 = c_rt_lib::to_nl(1);
#line 193
$memory_1 = $memory_6;
#line 193
undef($memory_6);
#line 194
$memory_6 = "pos ";
#line 194
$memory_7 = $memory_0->{'pos'};
#line 194
$memory_6 = $memory_6 . $memory_7;
#line 194
undef($memory_7);
#line 194
$memory_7 = ": expected )";
#line 194
$memory_6 = $memory_6 . $memory_7;
#line 194
undef($memory_7);
#line 194
undef($memory_2);
#line 194
undef($memory_3);
#line 194
undef($memory_4);
#line 194
undef($memory_5);
#line 194
$_[0] = $memory_0;$_[1] = $memory_1;return $memory_6;
#line 194
undef($memory_6);
#line 195
goto label_31;
#line 195
label_31:
#line 195
undef($memory_5);
#line 196
dfile_priv::eat_ws($memory_0);
#line 197
$memory_5 = ov::mk($memory_4);
#line 197
undef($memory_2);
#line 197
undef($memory_3);
#line 197
undef($memory_4);
#line 197
$_[0] = $memory_0;$_[1] = $memory_1;return $memory_5;
#line 197
undef($memory_5);
#line 197
undef($memory_4);
#line 198
goto label_1;
#line 198
label_20:
#line 199
$memory_4 = dfile_priv::parse_scalar($memory_0, $memory_1);
#line 199
undef($memory_2);
#line 199
undef($memory_3);
#line 199
$_[0] = $memory_0;$_[1] = $memory_1;return $memory_4;
#line 199
undef($memory_4);
#line 200
goto label_1;
#line 200
label_1:
#line 200
undef($memory_3);
#line 200
undef($memory_2);
#line 200
$_[0] = $memory_0;$_[1] = $memory_1;return;
$_[0] = $memory_0;$_[1] = $memory_1;}

sub dfile::sload($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;$memory_0 = $_[0];
#line 204
$memory_3 = dfile::try_sload($memory_0);
#line 204
$memory_2 = c_rt_lib::ov_is($memory_3, 'ok');
#line 204
if (c_rt_lib::check_true($memory_2)) {goto label_1;}
#line 204
$memory_3 = c_rt_lib::ov_mk_arg('ensure', $memory_3);
#line 204
die(dfile::ssave($memory_3));
#line 204
label_1:
#line 204
$memory_1 = c_rt_lib::ov_as($memory_3, 'ok');
#line 204
undef($memory_2);
#line 204
undef($memory_3);
#line 205
undef($memory_0);
#line 205
return $memory_1;
#line 205
undef($memory_1);
#line 205
undef($memory_0);
#line 205
return;
}

sub dfile::try_sload($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;$memory_0 = $_[0];
#line 209
$memory_2 = ptd::sim();
#line 209
$memory_1 = ptd::ensure($memory_2, $memory_0);
#line 209
undef($memory_2);
#line 210
$memory_3 = [$memory_1];
#line 210
$memory_4 = 0;
#line 210
$memory_5 = string::length($memory_1);
#line 210
$memory_2 = {str => $memory_3,pos => $memory_4,len => $memory_5,};
#line 210
undef($memory_3);
#line 210
undef($memory_4);
#line 210
undef($memory_5);
#line 211
$memory_3 = c_rt_lib::to_nl(0);
#line 212
$memory_4 = "use utf8;";
#line 212
dfile_priv::match_s($memory_2, $memory_4);
#line 212
undef($memory_4);
#line 213
dfile_priv::eat_ws($memory_2);
#line 214
$memory_4 = dfile_priv::parse($memory_2, $memory_3);
#line 215
dfile_priv::eat_ws($memory_2);
#line 216
$memory_5 = $memory_3;
#line 216
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 216
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 216
if (c_rt_lib::check_true($memory_6)) {goto label_3;}
#line 216
$memory_5 = $memory_2->{'pos'};
#line 216
$memory_7 = $memory_2->{'len'};
#line 216
$memory_5 = c_rt_lib::to_nl($memory_5 != $memory_7);
#line 216
undef($memory_7);
#line 216
label_3:
#line 216
undef($memory_6);
#line 216
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 216
if (c_rt_lib::check_true($memory_5)) {goto label_2;}
#line 217
$memory_6 = c_rt_lib::to_nl(1);
#line 217
$memory_3 = $memory_6;
#line 217
undef($memory_6);
#line 218
$memory_6 = "pos ";
#line 218
$memory_7 = $memory_2->{'pos'};
#line 218
$memory_6 = $memory_6 . $memory_7;
#line 218
undef($memory_7);
#line 218
$memory_7 = ": expected eof";
#line 218
$memory_6 = $memory_6 . $memory_7;
#line 218
undef($memory_7);
#line 218
$memory_4 = $memory_6;
#line 218
undef($memory_6);
#line 219
goto label_2;
#line 219
label_2:
#line 219
undef($memory_5);
#line 220
$memory_5 = $memory_3;
#line 220
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 220
if (c_rt_lib::check_true($memory_5)) {goto label_5;}
#line 221
$memory_7 = ptd::sim();
#line 221
$memory_6 = ptd::ensure($memory_7, $memory_4);
#line 221
undef($memory_7);
#line 221
$memory_4 = $memory_6;
#line 221
undef($memory_6);
#line 222
$memory_6 = c_rt_lib::ov_mk_arg('err', $memory_4);
#line 222
undef($memory_0);
#line 222
undef($memory_1);
#line 222
undef($memory_2);
#line 222
undef($memory_3);
#line 222
undef($memory_4);
#line 222
undef($memory_5);
#line 222
return $memory_6;
#line 222
undef($memory_6);
#line 223
goto label_4;
#line 223
label_5:
#line 224
$memory_6 = c_rt_lib::ov_mk_arg('ok', $memory_4);
#line 224
undef($memory_0);
#line 224
undef($memory_1);
#line 224
undef($memory_2);
#line 224
undef($memory_3);
#line 224
undef($memory_4);
#line 224
undef($memory_5);
#line 224
return $memory_6;
#line 224
undef($memory_6);
#line 225
goto label_4;
#line 225
label_4:
#line 225
undef($memory_5);
#line 225
undef($memory_1);
#line 225
undef($memory_2);
#line 225
undef($memory_3);
#line 225
undef($memory_4);
#line 225
undef($memory_0);
#line 225
return;
}

sub dfile::__state_out() {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;
#line 230
$memory_2 = ptd::sim();
#line 230
$memory_4 = {
	module => "boolean_t",
	name => "type",
};
#line 230
$memory_4 = c_rt_lib::ov_mk_arg('ref', $memory_4);
#line 230
$memory_3 = ptd::hash($memory_4);
#line 230
undef($memory_4);
#line 230
$memory_1 = {str => $memory_2,objects => $memory_3,};
#line 230
undef($memory_2);
#line 230
undef($memory_3);
#line 230
$memory_0 = ptd::rec($memory_1);
#line 230
undef($memory_1);
#line 230
return $memory_0;
#line 230
undef($memory_0);
#line 230
return;
}

my $_state_out;
sub dfile::state_out() {
	$_state_out = dfile::__state_out() unless defined $_state_out;
	return $_state_out;
}

sub dfile_priv::sp($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];
#line 236
$memory_2 = "str";
#line 236
$memory_2 = c_rt_lib::get_ref_hash($memory_0, $memory_2);
#line 236
$memory_2 = $memory_2 . $memory_1;
#line 236
$memory_3 = "str";
#line 236
c_rt_lib::set_ref_hash($memory_0, $memory_3, $memory_2);
#line 236
undef($memory_3);
#line 236
undef($memory_2);
#line 236
undef($memory_1);
#line 236
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub dfile_priv::sprintstr($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];
#line 240
$memory_2 = "";
#line 240
$memory_1 = $memory_1 . $memory_2;
#line 240
undef($memory_2);
#line 241
$memory_3 = "\\";
#line 241
$memory_4 = "\\\\";
#line 241
$memory_2 = string::replace($memory_1, $memory_3, $memory_4);
#line 241
undef($memory_4);
#line 241
undef($memory_3);
#line 241
$memory_1 = $memory_2;
#line 241
undef($memory_2);
#line 242
$memory_3 = "\$";
#line 242
$memory_4 = "\\\$";
#line 242
$memory_2 = string::replace($memory_1, $memory_3, $memory_4);
#line 242
undef($memory_4);
#line 242
undef($memory_3);
#line 242
$memory_1 = $memory_2;
#line 242
undef($memory_2);
#line 243
$memory_3 = "\@";
#line 243
$memory_4 = "\\\@";
#line 243
$memory_2 = string::replace($memory_1, $memory_3, $memory_4);
#line 243
undef($memory_4);
#line 243
undef($memory_3);
#line 243
$memory_1 = $memory_2;
#line 243
undef($memory_2);
#line 244
$memory_3 = "\"";
#line 244
$memory_4 = "\\\"";
#line 244
$memory_2 = string::replace($memory_1, $memory_3, $memory_4);
#line 244
undef($memory_4);
#line 244
undef($memory_3);
#line 244
$memory_1 = $memory_2;
#line 244
undef($memory_2);
#line 245
$memory_2 = "\"";
#line 245
$memory_2 = $memory_2 . $memory_1;
#line 245
$memory_3 = "\"";
#line 245
$memory_2 = $memory_2 . $memory_3;
#line 245
undef($memory_3);
#line 245
dfile_priv::sp($memory_0, $memory_2);
#line 245
undef($memory_2);
#line 245
undef($memory_1);
#line 245
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub dfile_priv::is_simple_string($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;$memory_0 = $_[0];
#line 249
$memory_1 = string::length($memory_0);
#line 250
$memory_2 = 0;
#line 250
$memory_2 = c_rt_lib::to_nl($memory_1 == $memory_2);
#line 250
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 250
if (c_rt_lib::check_true($memory_2)) {goto label_2;}
#line 250
$memory_3 = c_rt_lib::to_nl(0);
#line 250
undef($memory_0);
#line 250
undef($memory_1);
#line 250
undef($memory_2);
#line 250
return $memory_3;
#line 250
undef($memory_3);
#line 250
goto label_2;
#line 250
label_2:
#line 250
undef($memory_2);
#line 251
$memory_4 = 0;
#line 251
$memory_5 = 1;
#line 251
$memory_3 = string::substr($memory_0, $memory_4, $memory_5);
#line 251
undef($memory_5);
#line 251
undef($memory_4);
#line 251
$memory_2 = string::is_letter($memory_3);
#line 251
undef($memory_3);
#line 251
if (c_rt_lib::check_true($memory_2)) {goto label_5;}
#line 251
$memory_3 = 0;
#line 251
$memory_4 = 1;
#line 251
$memory_2 = string::substr($memory_0, $memory_3, $memory_4);
#line 251
undef($memory_4);
#line 251
undef($memory_3);
#line 251
$memory_3 = "_";
#line 251
$memory_2 = c_rt_lib::to_nl($memory_2 eq $memory_3);
#line 251
undef($memory_3);
#line 251
label_5:
#line 251
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 251
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 251
if (c_rt_lib::check_true($memory_2)) {goto label_4;}
#line 251
$memory_3 = c_rt_lib::to_nl(0);
#line 251
undef($memory_0);
#line 251
undef($memory_1);
#line 251
undef($memory_2);
#line 251
return $memory_3;
#line 251
undef($memory_3);
#line 251
goto label_4;
#line 251
label_4:
#line 251
undef($memory_2);
#line 252
$memory_2 = 0;
#line 252
$memory_3 = 1;
#line 252
label_8:
#line 252
$memory_4 = c_rt_lib::to_nl($memory_2 >= $memory_1);
#line 252
if (c_rt_lib::check_true($memory_4)) {goto label_6;}
#line 253
$memory_6 = 1;
#line 253
$memory_5 = string::substr($memory_0, $memory_2, $memory_6);
#line 253
undef($memory_6);
#line 254
$memory_6 = string::is_letter($memory_5);
#line 254
if (c_rt_lib::check_true($memory_6)) {goto label_12;}
#line 254
$memory_6 = string::is_digit($memory_5);
#line 254
label_12:
#line 254
if (c_rt_lib::check_true($memory_6)) {goto label_11;}
#line 254
$memory_6 = "_";
#line 254
$memory_6 = c_rt_lib::to_nl($memory_5 eq $memory_6);
#line 254
label_11:
#line 254
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 254
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 254
if (c_rt_lib::check_true($memory_6)) {goto label_10;}
#line 254
$memory_7 = c_rt_lib::to_nl(0);
#line 254
undef($memory_0);
#line 254
undef($memory_1);
#line 254
undef($memory_2);
#line 254
undef($memory_3);
#line 254
undef($memory_4);
#line 254
undef($memory_5);
#line 254
undef($memory_6);
#line 254
return $memory_7;
#line 254
undef($memory_7);
#line 254
goto label_10;
#line 254
label_10:
#line 254
undef($memory_6);
#line 254
undef($memory_5);
#line 255
$memory_2 = $memory_2 + $memory_3;
#line 255
goto label_8;
#line 255
label_6:
#line 255
undef($memory_2);
#line 255
undef($memory_3);
#line 255
undef($memory_4);
#line 256
$memory_2 = c_rt_lib::to_nl(1);
#line 256
undef($memory_0);
#line 256
undef($memory_1);
#line 256
return $memory_2;
#line 256
undef($memory_2);
#line 256
undef($memory_1);
#line 256
undef($memory_0);
#line 256
return;
}

sub dfile_priv::sprint_hash_key($$) {
my $memory_0;my $memory_1;my $memory_2;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];
#line 260
$memory_2 = dfile_priv::is_simple_string($memory_1);
#line 260
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 260
if (c_rt_lib::check_true($memory_2)) {goto label_2;}
#line 261
dfile_priv::sp($memory_0, $memory_1);
#line 262
goto label_1;
#line 262
label_2:
#line 263
dfile_priv::sprintstr($memory_0, $memory_1);
#line 264
goto label_1;
#line 264
label_1:
#line 264
undef($memory_2);
#line 264
undef($memory_1);
#line 264
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub dfile_priv::get_ind($) {
my $memory_0;my $memory_1;my $memory_2;$memory_0 = $_[0];
#line 268
$memory_2 = string::tab();
#line 268
$memory_1 = string::char_times($memory_2, $memory_0);
#line 268
undef($memory_2);
#line 268
undef($memory_0);
#line 268
return $memory_1;
#line 268
undef($memory_1);
#line 268
undef($memory_0);
#line 268
return;
}

sub dfile_priv::sprint_hash($$$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];$memory_2 = $_[2];$memory_3 = $_[3];
#line 273
$memory_4 = "{";
#line 273
$memory_5 = string::lf();
#line 273
$memory_4 = $memory_4 . $memory_5;
#line 273
undef($memory_5);
#line 273
dfile_priv::sp($memory_0, $memory_4);
#line 273
undef($memory_4);
#line 274
$memory_4 = hash::keys($memory_1);
#line 275
array::sort($memory_4);
#line 276
$memory_6 = 0;
#line 276
$memory_7 = 1;
#line 276
$memory_8 = c_rt_lib::array_len($memory_4);
#line 276
label_3:
#line 276
$memory_9 = c_rt_lib::to_nl($memory_6 >= $memory_8);
#line 276
if (c_rt_lib::check_true($memory_9)) {goto label_1;}
#line 276
$memory_5 = $memory_4->[$memory_6];
#line 277
$memory_10 = hash::get_value($memory_1, $memory_5);
#line 278
$memory_12 = 1;
#line 278
$memory_12 = $memory_2 + $memory_12;
#line 278
$memory_11 = dfile_priv::get_ind($memory_12);
#line 278
undef($memory_12);
#line 278
dfile_priv::sp($memory_0, $memory_11);
#line 278
undef($memory_11);
#line 279
dfile_priv::sprint_hash_key($memory_0, $memory_5);
#line 280
$memory_11 = " => ";
#line 280
dfile_priv::sp($memory_0, $memory_11);
#line 280
undef($memory_11);
#line 281
$memory_11 = 1;
#line 281
$memory_11 = $memory_2 + $memory_11;
#line 281
dfile_priv::sprint($memory_0, $memory_10, $memory_11, $memory_3);
#line 281
undef($memory_11);
#line 282
$memory_11 = ",";
#line 282
$memory_12 = string::lf();
#line 282
$memory_11 = $memory_11 . $memory_12;
#line 282
undef($memory_12);
#line 282
dfile_priv::sp($memory_0, $memory_11);
#line 282
undef($memory_11);
#line 282
undef($memory_10);
#line 283
$memory_6 = $memory_6 + $memory_7;
#line 283
goto label_3;
#line 283
label_1:
#line 283
undef($memory_5);
#line 283
undef($memory_6);
#line 283
undef($memory_7);
#line 283
undef($memory_8);
#line 283
undef($memory_9);
#line 284
$memory_5 = dfile_priv::get_ind($memory_2);
#line 284
$memory_6 = "}";
#line 284
$memory_5 = $memory_5 . $memory_6;
#line 284
undef($memory_6);
#line 284
dfile_priv::sp($memory_0, $memory_5);
#line 284
undef($memory_5);
#line 284
undef($memory_4);
#line 284
undef($memory_1);
#line 284
undef($memory_2);
#line 284
undef($memory_3);
#line 284
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub dfile_priv::handle_debug($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];
#line 288
$memory_2 = nl::is_hash($memory_1);
#line 288
if (c_rt_lib::check_true($memory_2)) {goto label_4;}
#line 288
$memory_2 = nl::is_array($memory_1);
#line 288
label_4:
#line 288
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 288
if (c_rt_lib::check_true($memory_3)) {goto label_3;}
#line 288
$memory_4 = $memory_0->{'objects'};
#line 288
$memory_2 = hash::has_key($memory_4, $memory_1);
#line 288
undef($memory_4);
#line 288
label_3:
#line 288
undef($memory_3);
#line 288
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 288
if (c_rt_lib::check_true($memory_2)) {goto label_2;}
#line 289
dfile_priv::sp($memory_0, $memory_1);
#line 290
$memory_3 = c_rt_lib::to_nl(1);
#line 290
undef($memory_1);
#line 290
undef($memory_2);
#line 290
$_[0] = $memory_0;return $memory_3;
#line 290
undef($memory_3);
#line 291
goto label_1;
#line 291
label_2:
#line 292
$memory_3 = "objects";
#line 292
$memory_3 = c_rt_lib::get_ref_hash($memory_0, $memory_3);
#line 292
$memory_4 = c_rt_lib::to_nl(1);
#line 292
hash::set_value($memory_3, $memory_1, $memory_4);
#line 292
undef($memory_4);
#line 292
$memory_4 = "objects";
#line 292
c_rt_lib::set_ref_hash($memory_0, $memory_4, $memory_3);
#line 292
undef($memory_4);
#line 292
undef($memory_3);
#line 293
$memory_3 = c_rt_lib::to_nl(0);
#line 293
undef($memory_1);
#line 293
undef($memory_2);
#line 293
$_[0] = $memory_0;return $memory_3;
#line 293
undef($memory_3);
#line 294
goto label_1;
#line 294
label_1:
#line 294
undef($memory_2);
#line 294
undef($memory_1);
#line 294
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub dfile_priv::sprint($$$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];$memory_2 = $_[2];$memory_3 = $_[3];
#line 298
$memory_4 = $memory_3;
#line 298
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 298
if (c_rt_lib::check_true($memory_5)) {goto label_3;}
#line 298
$memory_4 = dfile_priv::handle_debug($memory_0, $memory_1);
#line 298
label_3:
#line 298
undef($memory_5);
#line 298
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 298
if (c_rt_lib::check_true($memory_4)) {goto label_2;}
#line 298
undef($memory_1);
#line 298
undef($memory_2);
#line 298
undef($memory_3);
#line 298
undef($memory_4);
#line 298
$_[0] = $memory_0;return;
#line 298
goto label_2;
#line 298
label_2:
#line 298
undef($memory_4);
#line 299
$memory_4 = nl::is_sim($memory_1);
#line 299
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 299
if (c_rt_lib::check_true($memory_4)) {goto label_5;}
#line 300
dfile_priv::sprintstr($memory_0, $memory_1);
#line 301
goto label_4;
#line 301
label_5:
#line 301
$memory_4 = nl::is_array($memory_1);
#line 301
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 301
if (c_rt_lib::check_true($memory_4)) {goto label_6;}
#line 302
$memory_5 = "[";
#line 302
$memory_6 = string::lf();
#line 302
$memory_5 = $memory_5 . $memory_6;
#line 302
undef($memory_6);
#line 302
dfile_priv::sp($memory_0, $memory_5);
#line 302
undef($memory_5);
#line 303
$memory_6 = 0;
#line 303
$memory_7 = 1;
#line 303
$memory_8 = c_rt_lib::array_len($memory_1);
#line 303
label_9:
#line 303
$memory_9 = c_rt_lib::to_nl($memory_6 >= $memory_8);
#line 303
if (c_rt_lib::check_true($memory_9)) {goto label_7;}
#line 303
$memory_5 = $memory_1->[$memory_6];
#line 304
$memory_11 = 1;
#line 304
$memory_11 = $memory_2 + $memory_11;
#line 304
$memory_10 = dfile_priv::get_ind($memory_11);
#line 304
undef($memory_11);
#line 304
dfile_priv::sp($memory_0, $memory_10);
#line 304
undef($memory_10);
#line 305
$memory_10 = 1;
#line 305
$memory_10 = $memory_2 + $memory_10;
#line 305
dfile_priv::sprint($memory_0, $memory_5, $memory_10, $memory_3);
#line 305
undef($memory_10);
#line 306
$memory_10 = ",";
#line 306
$memory_11 = string::lf();
#line 306
$memory_10 = $memory_10 . $memory_11;
#line 306
undef($memory_11);
#line 306
dfile_priv::sp($memory_0, $memory_10);
#line 306
undef($memory_10);
#line 307
$memory_6 = $memory_6 + $memory_7;
#line 307
goto label_9;
#line 307
label_7:
#line 307
undef($memory_5);
#line 307
undef($memory_6);
#line 307
undef($memory_7);
#line 307
undef($memory_8);
#line 307
undef($memory_9);
#line 308
$memory_5 = dfile_priv::get_ind($memory_2);
#line 308
$memory_6 = "]";
#line 308
$memory_5 = $memory_5 . $memory_6;
#line 308
undef($memory_6);
#line 308
dfile_priv::sp($memory_0, $memory_5);
#line 308
undef($memory_5);
#line 309
goto label_4;
#line 309
label_6:
#line 309
$memory_4 = nl::is_hash($memory_1);
#line 309
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 309
if (c_rt_lib::check_true($memory_4)) {goto label_10;}
#line 310
dfile_priv::sprint_hash($memory_0, $memory_1, $memory_2, $memory_3);
#line 311
goto label_4;
#line 311
label_10:
#line 311
$memory_4 = nl::is_variant($memory_1);
#line 311
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 311
if (c_rt_lib::check_true($memory_4)) {goto label_11;}
#line 312
$memory_5 = "ov::mk(";
#line 312
dfile_priv::sp($memory_0, $memory_5);
#line 312
undef($memory_5);
#line 313
$memory_5 = ov::get_element($memory_1);
#line 313
dfile_priv::sprintstr($memory_0, $memory_5);
#line 313
undef($memory_5);
#line 314
$memory_5 = ov::has_value($memory_1);
#line 314
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 314
if (c_rt_lib::check_true($memory_5)) {goto label_13;}
#line 315
$memory_6 = ", ";
#line 315
dfile_priv::sp($memory_0, $memory_6);
#line 315
undef($memory_6);
#line 316
$memory_6 = ov::get_value($memory_1);
#line 316
dfile_priv::sprint($memory_0, $memory_6, $memory_2, $memory_3);
#line 316
undef($memory_6);
#line 317
goto label_13;
#line 317
label_13:
#line 317
undef($memory_5);
#line 318
$memory_5 = ")";
#line 318
dfile_priv::sp($memory_0, $memory_5);
#line 318
undef($memory_5);
#line 319
goto label_4;
#line 319
label_11:
#line 320
$memory_5 = [];
#line 320
die(dfile::ssave($memory_5));
#line 320
undef($memory_5);
#line 321
goto label_4;
#line 321
label_4:
#line 321
undef($memory_4);
#line 321
undef($memory_1);
#line 321
undef($memory_2);
#line 321
undef($memory_3);
#line 321
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub dfile_priv::print_net_formatstr($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];
#line 325
$memory_2 = "";
#line 325
$memory_1 = $memory_1 . $memory_2;
#line 325
undef($memory_2);
#line 326
$memory_3 = "\\";
#line 326
$memory_4 = "\\\\";
#line 326
$memory_2 = string::replace($memory_1, $memory_3, $memory_4);
#line 326
undef($memory_4);
#line 326
undef($memory_3);
#line 326
$memory_1 = $memory_2;
#line 326
undef($memory_2);
#line 327
$memory_3 = string::lf();
#line 327
$memory_4 = "\\n";
#line 327
$memory_2 = string::replace($memory_1, $memory_3, $memory_4);
#line 327
undef($memory_4);
#line 327
undef($memory_3);
#line 327
$memory_1 = $memory_2;
#line 327
undef($memory_2);
#line 328
$memory_3 = "\$";
#line 328
$memory_4 = "\\\$";
#line 328
$memory_2 = string::replace($memory_1, $memory_3, $memory_4);
#line 328
undef($memory_4);
#line 328
undef($memory_3);
#line 328
$memory_1 = $memory_2;
#line 328
undef($memory_2);
#line 329
$memory_3 = "\@";
#line 329
$memory_4 = "\\\@";
#line 329
$memory_2 = string::replace($memory_1, $memory_3, $memory_4);
#line 329
undef($memory_4);
#line 329
undef($memory_3);
#line 329
$memory_1 = $memory_2;
#line 329
undef($memory_2);
#line 330
$memory_3 = "\"";
#line 330
$memory_4 = "\\\"";
#line 330
$memory_2 = string::replace($memory_1, $memory_3, $memory_4);
#line 330
undef($memory_4);
#line 330
undef($memory_3);
#line 330
$memory_1 = $memory_2;
#line 330
undef($memory_2);
#line 331
$memory_2 = "\"";
#line 331
$memory_2 = $memory_2 . $memory_1;
#line 331
$memory_3 = "\"";
#line 331
$memory_2 = $memory_2 . $memory_3;
#line 331
undef($memory_3);
#line 331
dfile_priv::sp($memory_0, $memory_2);
#line 331
undef($memory_2);
#line 331
undef($memory_1);
#line 331
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub dfile_priv::print_net_format($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];
#line 336
$memory_2 = nl::is_sim($memory_1);
#line 336
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 336
if (c_rt_lib::check_true($memory_2)) {goto label_2;}
#line 337
dfile_priv::print_net_formatstr($memory_0, $memory_1);
#line 338
goto label_1;
#line 338
label_2:
#line 338
$memory_2 = nl::is_array($memory_1);
#line 338
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 338
if (c_rt_lib::check_true($memory_2)) {goto label_3;}
#line 339
$memory_3 = "[";
#line 339
dfile_priv::sp($memory_0, $memory_3);
#line 339
undef($memory_3);
#line 340
$memory_4 = 0;
#line 340
$memory_5 = 1;
#line 340
$memory_6 = c_rt_lib::array_len($memory_1);
#line 340
label_6:
#line 340
$memory_7 = c_rt_lib::to_nl($memory_4 >= $memory_6);
#line 340
if (c_rt_lib::check_true($memory_7)) {goto label_4;}
#line 340
$memory_3 = $memory_1->[$memory_4];
#line 341
dfile_priv::print_net_format($memory_0, $memory_3);
#line 342
$memory_8 = ",";
#line 342
dfile_priv::sp($memory_0, $memory_8);
#line 342
undef($memory_8);
#line 343
$memory_4 = $memory_4 + $memory_5;
#line 343
goto label_6;
#line 343
label_4:
#line 343
undef($memory_3);
#line 343
undef($memory_4);
#line 343
undef($memory_5);
#line 343
undef($memory_6);
#line 343
undef($memory_7);
#line 344
$memory_3 = "]";
#line 344
dfile_priv::sp($memory_0, $memory_3);
#line 344
undef($memory_3);
#line 345
goto label_1;
#line 345
label_3:
#line 345
$memory_2 = nl::is_hash($memory_1);
#line 345
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 345
if (c_rt_lib::check_true($memory_2)) {goto label_7;}
#line 346
$memory_3 = "{";
#line 346
dfile_priv::sp($memory_0, $memory_3);
#line 346
undef($memory_3);
#line 347
$memory_3 = hash::keys($memory_1);
#line 347
$memory_5 = 0;
#line 347
$memory_6 = 1;
#line 347
$memory_7 = c_rt_lib::array_len($memory_3);
#line 347
label_10:
#line 347
$memory_8 = c_rt_lib::to_nl($memory_5 >= $memory_7);
#line 347
if (c_rt_lib::check_true($memory_8)) {goto label_8;}
#line 347
$memory_4 = $memory_3->[$memory_5];
#line 348
$memory_9 = hash::get_value($memory_1, $memory_4);
#line 349
$memory_11 = "";
#line 349
$memory_11 = $memory_4 . $memory_11;
#line 349
$memory_10 = dfile_priv::is_simple_string($memory_11);
#line 349
undef($memory_11);
#line 349
$memory_10 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_10));
#line 349
if (c_rt_lib::check_true($memory_10)) {goto label_12;}
#line 350
dfile_priv::sp($memory_0, $memory_4);
#line 351
goto label_11;
#line 351
label_12:
#line 352
dfile_priv::print_net_formatstr($memory_0, $memory_4);
#line 353
goto label_11;
#line 353
label_11:
#line 353
undef($memory_10);
#line 354
$memory_10 = "=>";
#line 354
dfile_priv::sp($memory_0, $memory_10);
#line 354
undef($memory_10);
#line 355
dfile_priv::print_net_format($memory_0, $memory_9);
#line 356
$memory_10 = ",";
#line 356
dfile_priv::sp($memory_0, $memory_10);
#line 356
undef($memory_10);
#line 356
undef($memory_9);
#line 357
$memory_5 = $memory_5 + $memory_6;
#line 357
goto label_10;
#line 357
label_8:
#line 357
undef($memory_3);
#line 357
undef($memory_4);
#line 357
undef($memory_5);
#line 357
undef($memory_6);
#line 357
undef($memory_7);
#line 357
undef($memory_8);
#line 358
$memory_3 = "}";
#line 358
dfile_priv::sp($memory_0, $memory_3);
#line 358
undef($memory_3);
#line 359
goto label_1;
#line 359
label_7:
#line 359
$memory_2 = nl::is_variant($memory_1);
#line 359
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 359
if (c_rt_lib::check_true($memory_2)) {goto label_13;}
#line 360
$memory_3 = "ov::mk(";
#line 360
dfile_priv::sp($memory_0, $memory_3);
#line 360
undef($memory_3);
#line 361
$memory_3 = ov::get_element($memory_1);
#line 361
dfile_priv::print_net_formatstr($memory_0, $memory_3);
#line 361
undef($memory_3);
#line 362
$memory_3 = ov::has_value($memory_1);
#line 362
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 362
if (c_rt_lib::check_true($memory_3)) {goto label_15;}
#line 363
$memory_4 = ",";
#line 363
dfile_priv::sp($memory_0, $memory_4);
#line 363
undef($memory_4);
#line 364
$memory_4 = ov::get_value($memory_1);
#line 364
dfile_priv::print_net_format($memory_0, $memory_4);
#line 364
undef($memory_4);
#line 365
goto label_15;
#line 365
label_15:
#line 365
undef($memory_3);
#line 366
$memory_3 = ")";
#line 366
dfile_priv::sp($memory_0, $memory_3);
#line 366
undef($memory_3);
#line 367
goto label_1;
#line 367
label_13:
#line 368
$memory_3 = [$memory_1];
#line 368
die(dfile::ssave($memory_3));
#line 368
undef($memory_3);
#line 369
goto label_1;
#line 369
label_1:
#line 369
undef($memory_2);
#line 369
undef($memory_1);
#line 369
$_[0] = $memory_0;return;
$_[0] = $memory_0;}
