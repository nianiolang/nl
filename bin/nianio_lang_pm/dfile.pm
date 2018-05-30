use c_rt_lib;
use ov;
use c_std_lib;
use string;
use hash;
use array;
use nl;
use boolean_t;
use ptd;
sub dfile::deep_eq;
sub dfile::rs;
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

sub dfile::deep_eq($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;$memory_0 = $_[0];$memory_1 = $_[1];
#line 16
$memory_2 = dfile::ssave($memory_0);
#line 16
$memory_3 = dfile::ssave($memory_1);
#line 16
$memory_2 = c_rt_lib::to_nl($memory_2 eq $memory_3);
#line 16
undef($memory_3);
#line 16
undef($memory_0);
#line 16
undef($memory_1);
#line 16
return $memory_2;
#line 16
undef($memory_2);
#line 16
undef($memory_0);
#line 16
undef($memory_1);
#line 16
return;
}

sub dfile::rs($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;$memory_0 = $_[0];$memory_1 = $_[1];
#line 20
$memory_3 = "";
#line 20
$memory_4 = {};
#line 20
$memory_2 = {str => $memory_3,objects => $memory_4,};
#line 20
undef($memory_3);
#line 20
undef($memory_4);
#line 21
$memory_3 = 0;
#line 21
$memory_3 = c_rt_lib::to_nl($memory_1 != $memory_3);
#line 21
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 21
if (c_rt_lib::check_true($memory_4)) {goto label_10;}
#line 21
$memory_3 = dfile_priv::is_simple_string($memory_0);
#line 21
label_10:
#line 21
undef($memory_4);
#line 21
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 21
if (c_rt_lib::check_true($memory_3)) {goto label_16;}
#line 22
dfile_priv::sp($memory_2, $memory_0);
#line 23
goto label_19;
#line 23
label_16:
#line 24
dfile_priv::sprintstr($memory_2, $memory_0);
#line 25
goto label_19;
#line 25
label_19:
#line 25
undef($memory_3);
#line 26
$memory_3 = $memory_2->{'str'};
#line 26
undef($memory_0);
#line 26
undef($memory_1);
#line 26
undef($memory_2);
#line 26
return $memory_3;
#line 26
undef($memory_3);
#line 26
undef($memory_2);
#line 26
undef($memory_0);
#line 26
undef($memory_1);
#line 26
return;
}

sub dfile::ssave($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;$memory_0 = $_[0];
#line 30
$memory_2 = "";
#line 30
$memory_3 = {};
#line 30
$memory_1 = {str => $memory_2,objects => $memory_3,};
#line 30
undef($memory_2);
#line 30
undef($memory_3);
#line 31
$memory_2 = 0;
#line 31
$memory_3 = c_rt_lib::to_nl(0);
#line 31
dfile_priv::sprint($memory_1, $memory_0, $memory_2, $memory_3);
#line 31
undef($memory_3);
#line 31
undef($memory_2);
#line 32
$memory_2 = $memory_1->{'str'};
#line 32
undef($memory_0);
#line 32
undef($memory_1);
#line 32
return $memory_2;
#line 32
undef($memory_2);
#line 32
undef($memory_1);
#line 32
undef($memory_0);
#line 32
return;
}

sub dfile::debug($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;$memory_0 = $_[0];
#line 36
$memory_2 = "";
#line 36
$memory_3 = {};
#line 36
$memory_1 = {str => $memory_2,objects => $memory_3,};
#line 36
undef($memory_2);
#line 36
undef($memory_3);
#line 37
$memory_2 = 0;
#line 37
$memory_3 = c_rt_lib::to_nl(1);
#line 37
dfile_priv::sprint($memory_1, $memory_0, $memory_2, $memory_3);
#line 37
undef($memory_3);
#line 37
undef($memory_2);
#line 38
$memory_2 = $memory_1->{'str'};
#line 38
undef($memory_0);
#line 38
undef($memory_1);
#line 38
return $memory_2;
#line 38
undef($memory_2);
#line 38
undef($memory_1);
#line 38
undef($memory_0);
#line 38
return;
}

sub dfile::ssave_net_format($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;$memory_0 = $_[0];
#line 42
$memory_2 = "";
#line 42
$memory_3 = {};
#line 42
$memory_1 = {str => $memory_2,objects => $memory_3,};
#line 42
undef($memory_2);
#line 42
undef($memory_3);
#line 43
dfile_priv::print_net_format($memory_1, $memory_0);
#line 44
$memory_2 = $memory_1->{'str'};
#line 44
undef($memory_0);
#line 44
undef($memory_1);
#line 44
return $memory_2;
#line 44
undef($memory_2);
#line 44
undef($memory_1);
#line 44
undef($memory_0);
#line 44
return;
}

sub dfile_priv::eat_ws($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);
#line 48
label_0:
#line 49
$memory_1 = $memory_0->{'pos'};
#line 49
$memory_2 = $memory_0->{'len'};
#line 49
$memory_1 = c_rt_lib::to_nl($memory_1 == $memory_2);
#line 49
undef($memory_2);
#line 49
$memory_1 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_1));
#line 49
if (c_rt_lib::check_true($memory_1)) {goto label_10;}
#line 49
undef($memory_1);
#line 49
$_[0] = $memory_0;return;
#line 49
goto label_10;
#line 49
label_10:
#line 49
undef($memory_1);
#line 50
$memory_2 = dfile_priv::get_char($memory_0);
#line 50
$memory_1 = string::ord($memory_2);
#line 50
undef($memory_2);
#line 51
$memory_2 = 9;
#line 51
$memory_2 = c_rt_lib::to_nl($memory_1 == $memory_2);
#line 51
if (c_rt_lib::check_true($memory_2)) {goto label_20;}
#line 51
$memory_2 = 10;
#line 51
$memory_2 = c_rt_lib::to_nl($memory_1 == $memory_2);
#line 51
label_20:
#line 51
if (c_rt_lib::check_true($memory_2)) {goto label_24;}
#line 51
$memory_2 = 13;
#line 51
$memory_2 = c_rt_lib::to_nl($memory_1 == $memory_2);
#line 51
label_24:
#line 51
if (c_rt_lib::check_true($memory_2)) {goto label_28;}
#line 51
$memory_2 = 32;
#line 51
$memory_2 = c_rt_lib::to_nl($memory_1 == $memory_2);
#line 51
label_28:
#line 51
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 51
if (c_rt_lib::check_true($memory_2)) {goto label_41;}
#line 52
$memory_3 = "pos";
#line 52
$memory_3 = c_rt_lib::get_ref_hash($memory_0, $memory_3);
#line 52
$memory_4 = 1;
#line 52
$memory_3 = $memory_3 + $memory_4;
#line 52
$memory_5 = "pos";
#line 52
c_rt_lib::set_ref_hash($memory_0, $memory_5, $memory_3);
#line 52
undef($memory_5);
#line 52
undef($memory_3);
#line 52
undef($memory_4);
#line 53
goto label_46;
#line 53
label_41:
#line 54
undef($memory_1);
#line 54
undef($memory_2);
#line 54
$_[0] = $memory_0;return;
#line 55
goto label_46;
#line 55
label_46:
#line 55
undef($memory_2);
#line 55
undef($memory_1);
#line 48
goto label_0;
#line 48
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub dfile_priv::get_char($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);
#line 60
$memory_2 = $memory_0->{'str'};
#line 60
$memory_3 = $memory_0->{'pos'};
#line 60
$memory_4 = 1;
#line 60
$memory_1 = c_std_lib::fast_substr($memory_2, $memory_3, $memory_4);
#line 60
undef($memory_4);
#line 60
undef($memory_3);
#line 60
undef($memory_2);
#line 60
$_[0] = $memory_0;return $memory_1;
#line 60
undef($memory_1);
#line 60
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub dfile_priv::is_ov($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);
#line 64
$memory_2 = $memory_0->{'str'};
#line 64
$memory_3 = $memory_0->{'pos'};
#line 64
$memory_4 = 7;
#line 64
$memory_1 = c_std_lib::fast_substr($memory_2, $memory_3, $memory_4);
#line 64
undef($memory_4);
#line 64
undef($memory_3);
#line 64
undef($memory_2);
#line 64
$memory_2 = "ov::mk(";
#line 64
$memory_1 = c_rt_lib::to_nl($memory_1 eq $memory_2);
#line 64
undef($memory_2);
#line 64
$_[0] = $memory_0;return $memory_1;
#line 64
undef($memory_1);
#line 64
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub dfile_priv::eat_non_ws($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];Scalar::Util::weaken($_[1]) if ref($_[1]);
#line 68
$memory_2 = "";
#line 69
$memory_3 = $memory_0->{'len'};
#line 70
$memory_4 = $memory_0->{'pos'};
#line 70
$memory_4 = c_rt_lib::to_nl($memory_4 >= $memory_3);
#line 70
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 70
if (c_rt_lib::check_true($memory_4)) {goto label_22;}
#line 71
$memory_5 = c_rt_lib::to_nl(1);
#line 71
$memory_1 = $memory_5;
#line 71
undef($memory_5);
#line 72
$memory_5 = "pos ";
#line 72
$memory_6 = $memory_0->{'pos'};
#line 72
$memory_5 = $memory_5 . $memory_6;
#line 72
undef($memory_6);
#line 72
$memory_6 = ": expected scalar";
#line 72
$memory_5 = $memory_5 . $memory_6;
#line 72
undef($memory_6);
#line 72
undef($memory_2);
#line 72
undef($memory_3);
#line 72
undef($memory_4);
#line 72
$_[0] = $memory_0;$_[1] = $memory_1;return $memory_5;
#line 72
undef($memory_5);
#line 73
goto label_22;
#line 73
label_22:
#line 73
undef($memory_4);
#line 74
label_24:
#line 75
$memory_4 = dfile_priv::get_char($memory_0);
#line 76
$memory_5 = string::is_letter($memory_4);
#line 76
if (c_rt_lib::check_true($memory_5)) {goto label_29;}
#line 76
$memory_5 = string::is_digit($memory_4);
#line 76
label_29:
#line 76
if (c_rt_lib::check_true($memory_5)) {goto label_33;}
#line 76
$memory_5 = "_";
#line 76
$memory_5 = c_rt_lib::to_nl($memory_4 eq $memory_5);
#line 76
label_33:
#line 76
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 76
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 76
if (c_rt_lib::check_true($memory_5)) {goto label_41;}
#line 76
undef($memory_4);
#line 76
undef($memory_5);
#line 76
goto label_65;
#line 76
goto label_41;
#line 76
label_41:
#line 76
undef($memory_5);
#line 77
$memory_5 = "pos";
#line 77
$memory_5 = c_rt_lib::get_ref_hash($memory_0, $memory_5);
#line 77
$memory_6 = 1;
#line 77
$memory_5 = $memory_5 + $memory_6;
#line 77
$memory_7 = "pos";
#line 77
c_rt_lib::set_ref_hash($memory_0, $memory_7, $memory_5);
#line 77
undef($memory_7);
#line 77
undef($memory_5);
#line 77
undef($memory_6);
#line 78
$memory_2 = $memory_2 . $memory_4;
#line 79
$memory_5 = $memory_0->{'pos'};
#line 79
$memory_5 = c_rt_lib::to_nl($memory_5 >= $memory_3);
#line 79
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 79
if (c_rt_lib::check_true($memory_5)) {goto label_61;}
#line 79
undef($memory_4);
#line 79
undef($memory_5);
#line 79
goto label_65;
#line 79
goto label_61;
#line 79
label_61:
#line 79
undef($memory_5);
#line 79
undef($memory_4);
#line 74
goto label_24;
#line 74
label_65:
#line 81
$memory_4 = "";
#line 81
$memory_4 = c_rt_lib::to_nl($memory_2 eq $memory_4);
#line 81
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 81
if (c_rt_lib::check_true($memory_4)) {goto label_86;}
#line 82
$memory_5 = c_rt_lib::to_nl(1);
#line 82
$memory_1 = $memory_5;
#line 82
undef($memory_5);
#line 83
$memory_5 = "pos ";
#line 83
$memory_6 = $memory_0->{'pos'};
#line 83
$memory_5 = $memory_5 . $memory_6;
#line 83
undef($memory_6);
#line 83
$memory_6 = ": expected scalar";
#line 83
$memory_5 = $memory_5 . $memory_6;
#line 83
undef($memory_6);
#line 83
undef($memory_2);
#line 83
undef($memory_3);
#line 83
undef($memory_4);
#line 83
$_[0] = $memory_0;$_[1] = $memory_1;return $memory_5;
#line 83
undef($memory_5);
#line 84
goto label_86;
#line 84
label_86:
#line 84
undef($memory_4);
#line 85
undef($memory_3);
#line 85
$_[0] = $memory_0;$_[1] = $memory_1;return $memory_2;
#line 85
undef($memory_2);
#line 85
undef($memory_3);
#line 85
$_[0] = $memory_0;$_[1] = $memory_1;return;
$_[0] = $memory_0;$_[1] = $memory_1;}

sub dfile_priv::parse_scalar($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];Scalar::Util::weaken($_[1]) if ref($_[1]);
#line 89
dfile_priv::eat_ws($memory_0);
#line 90
$memory_2 = dfile_priv::get_char($memory_0);
#line 90
$memory_3 = "\"";
#line 90
$memory_2 = c_rt_lib::to_nl($memory_2 eq $memory_3);
#line 90
undef($memory_3);
#line 90
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 90
if (c_rt_lib::check_true($memory_2)) {goto label_121;}
#line 91
$memory_3 = "pos";
#line 91
$memory_3 = c_rt_lib::get_ref_hash($memory_0, $memory_3);
#line 91
$memory_4 = 1;
#line 91
$memory_3 = $memory_3 + $memory_4;
#line 91
$memory_5 = "pos";
#line 91
c_rt_lib::set_ref_hash($memory_0, $memory_5, $memory_3);
#line 91
undef($memory_5);
#line 91
undef($memory_3);
#line 91
undef($memory_4);
#line 92
$memory_3 = "";
#line 93
label_17:
#line 94
$memory_4 = $memory_0->{'pos'};
#line 94
$memory_5 = $memory_0->{'len'};
#line 94
$memory_4 = c_rt_lib::to_nl($memory_4 >= $memory_5);
#line 94
undef($memory_5);
#line 94
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 94
if (c_rt_lib::check_true($memory_4)) {goto label_40;}
#line 95
$memory_5 = c_rt_lib::to_nl(1);
#line 95
$memory_1 = $memory_5;
#line 95
undef($memory_5);
#line 96
$memory_5 = "pos ";
#line 96
$memory_6 = $memory_0->{'pos'};
#line 96
$memory_5 = $memory_5 . $memory_6;
#line 96
undef($memory_6);
#line 96
$memory_6 = ": expected \"";
#line 96
$memory_5 = $memory_5 . $memory_6;
#line 96
undef($memory_6);
#line 96
undef($memory_2);
#line 96
undef($memory_3);
#line 96
undef($memory_4);
#line 96
$_[0] = $memory_0;$_[1] = $memory_1;return $memory_5;
#line 96
undef($memory_5);
#line 97
goto label_40;
#line 97
label_40:
#line 97
undef($memory_4);
#line 98
$memory_4 = dfile_priv::get_char($memory_0);
#line 99
$memory_5 = "pos";
#line 99
$memory_5 = c_rt_lib::get_ref_hash($memory_0, $memory_5);
#line 99
$memory_6 = 1;
#line 99
$memory_5 = $memory_5 + $memory_6;
#line 99
$memory_7 = "pos";
#line 99
c_rt_lib::set_ref_hash($memory_0, $memory_7, $memory_5);
#line 99
undef($memory_7);
#line 99
undef($memory_5);
#line 99
undef($memory_6);
#line 100
$memory_5 = "\"";
#line 100
$memory_5 = c_rt_lib::to_nl($memory_4 eq $memory_5);
#line 100
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 100
if (c_rt_lib::check_true($memory_5)) {goto label_60;}
#line 100
undef($memory_4);
#line 100
undef($memory_5);
#line 100
goto label_116;
#line 100
goto label_60;
#line 100
label_60:
#line 100
undef($memory_5);
#line 101
$memory_5 = "\\";
#line 101
$memory_5 = c_rt_lib::to_nl($memory_4 eq $memory_5);
#line 101
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 101
if (c_rt_lib::check_true($memory_5)) {goto label_109;}
#line 102
$memory_6 = dfile_priv::get_char($memory_0);
#line 103
$memory_7 = "n";
#line 103
$memory_7 = c_rt_lib::to_nl($memory_6 eq $memory_7);
#line 103
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 103
if (c_rt_lib::check_true($memory_7)) {goto label_75;}
#line 104
$memory_8 = string::lf();
#line 104
$memory_3 = $memory_3 . $memory_8;
#line 104
undef($memory_8);
#line 105
goto label_96;
#line 105
label_75:
#line 105
$memory_7 = "r";
#line 105
$memory_7 = c_rt_lib::to_nl($memory_6 eq $memory_7);
#line 105
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 105
if (c_rt_lib::check_true($memory_7)) {goto label_84;}
#line 106
$memory_8 = string::r();
#line 106
$memory_3 = $memory_3 . $memory_8;
#line 106
undef($memory_8);
#line 107
goto label_96;
#line 107
label_84:
#line 107
$memory_7 = "t";
#line 107
$memory_7 = c_rt_lib::to_nl($memory_6 eq $memory_7);
#line 107
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 107
if (c_rt_lib::check_true($memory_7)) {goto label_93;}
#line 108
$memory_8 = string::tab();
#line 108
$memory_3 = $memory_3 . $memory_8;
#line 108
undef($memory_8);
#line 109
goto label_96;
#line 109
label_93:
#line 110
$memory_3 = $memory_3 . $memory_6;
#line 111
goto label_96;
#line 111
label_96:
#line 111
undef($memory_7);
#line 112
$memory_7 = "pos";
#line 112
$memory_7 = c_rt_lib::get_ref_hash($memory_0, $memory_7);
#line 112
$memory_8 = 1;
#line 112
$memory_7 = $memory_7 + $memory_8;
#line 112
$memory_9 = "pos";
#line 112
c_rt_lib::set_ref_hash($memory_0, $memory_9, $memory_7);
#line 112
undef($memory_9);
#line 112
undef($memory_7);
#line 112
undef($memory_8);
#line 112
undef($memory_6);
#line 113
goto label_112;
#line 113
label_109:
#line 114
$memory_3 = $memory_3 . $memory_4;
#line 115
goto label_112;
#line 115
label_112:
#line 115
undef($memory_5);
#line 115
undef($memory_4);
#line 93
goto label_17;
#line 93
label_116:
#line 117
undef($memory_2);
#line 117
$_[0] = $memory_0;$_[1] = $memory_1;return $memory_3;
#line 117
undef($memory_3);
#line 118
goto label_127;
#line 118
label_121:
#line 119
$memory_3 = dfile_priv::eat_non_ws($memory_0, $memory_1);
#line 119
undef($memory_2);
#line 119
$_[0] = $memory_0;$_[1] = $memory_1;return $memory_3;
#line 119
undef($memory_3);
#line 120
goto label_127;
#line 120
label_127:
#line 120
undef($memory_2);
#line 120
$_[0] = $memory_0;$_[1] = $memory_1;return;
$_[0] = $memory_0;$_[1] = $memory_1;}

sub dfile_priv::match_s($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];
#line 124
$memory_2 = string::length($memory_1);
#line 125
$memory_4 = $memory_0->{'str'};
#line 125
$memory_5 = $memory_0->{'pos'};
#line 125
$memory_3 = c_std_lib::fast_substr($memory_4, $memory_5, $memory_2);
#line 125
undef($memory_5);
#line 125
undef($memory_4);
#line 125
$memory_3 = c_rt_lib::to_nl($memory_3 eq $memory_1);
#line 125
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 125
if (c_rt_lib::check_true($memory_3)) {goto label_23;}
#line 126
$memory_4 = "pos";
#line 126
$memory_4 = c_rt_lib::get_ref_hash($memory_0, $memory_4);
#line 126
$memory_4 = $memory_4 + $memory_2;
#line 126
$memory_5 = "pos";
#line 126
c_rt_lib::set_ref_hash($memory_0, $memory_5, $memory_4);
#line 126
undef($memory_5);
#line 126
undef($memory_4);
#line 127
$memory_4 = c_rt_lib::to_nl(1);
#line 127
undef($memory_1);
#line 127
undef($memory_2);
#line 127
undef($memory_3);
#line 127
$_[0] = $memory_0;return $memory_4;
#line 127
undef($memory_4);
#line 128
goto label_31;
#line 128
label_23:
#line 129
$memory_4 = c_rt_lib::to_nl(0);
#line 129
undef($memory_1);
#line 129
undef($memory_2);
#line 129
undef($memory_3);
#line 129
$_[0] = $memory_0;return $memory_4;
#line 129
undef($memory_4);
#line 130
goto label_31;
#line 130
label_31:
#line 130
undef($memory_3);
#line 130
undef($memory_2);
#line 130
undef($memory_1);
#line 130
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub dfile::__state_t() {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;
#line 134
$memory_3 = ptd::sim();
#line 134
$memory_2 = ptd::arr($memory_3);
#line 134
undef($memory_3);
#line 134
$memory_3 = ptd::sim();
#line 134
$memory_4 = ptd::sim();
#line 134
$memory_1 = {str => $memory_2,len => $memory_3,pos => $memory_4,};
#line 134
undef($memory_2);
#line 134
undef($memory_3);
#line 134
undef($memory_4);
#line 134
$memory_0 = ptd::rec($memory_1);
#line 134
undef($memory_1);
#line 134
return $memory_0;
#line 134
undef($memory_0);
#line 134
return;
}

my $_state_t;
sub dfile::state_t() {
	$_state_t = dfile::__state_t() unless defined $_state_t;
	return $_state_t;
}

sub dfile_priv::parse($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];Scalar::Util::weaken($_[1]) if ref($_[1]);
#line 138
dfile_priv::eat_ws($memory_0);
#line 139
$memory_2 = dfile_priv::get_char($memory_0);
#line 140
$memory_3 = "{";
#line 140
$memory_3 = c_rt_lib::to_nl($memory_2 eq $memory_3);
#line 140
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 140
if (c_rt_lib::check_true($memory_3)) {goto label_120;}
#line 141
$memory_4 = 1;
#line 141
$memory_5 = "pos";
#line 141
$memory_5 = c_rt_lib::get_ref_hash($memory_0, $memory_5);
#line 141
$memory_5 = $memory_5 + $memory_4;
#line 141
$memory_6 = "pos";
#line 141
c_rt_lib::set_ref_hash($memory_0, $memory_6, $memory_5);
#line 141
undef($memory_6);
#line 141
undef($memory_4);
#line 141
undef($memory_5);
#line 142
$memory_4 = {};
#line 143
dfile_priv::eat_ws($memory_0);
#line 144
label_17:
#line 144
$memory_6 = "}";
#line 144
$memory_5 = dfile_priv::match_s($memory_0, $memory_6);
#line 144
undef($memory_6);
#line 144
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 144
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 144
if (c_rt_lib::check_true($memory_5)) {goto label_113;}
#line 145
$memory_6 = dfile_priv::parse_scalar($memory_0, $memory_1);
#line 146
$memory_7 = $memory_1;
#line 146
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 146
if (c_rt_lib::check_true($memory_7)) {goto label_35;}
#line 146
undef($memory_2);
#line 146
undef($memory_3);
#line 146
undef($memory_4);
#line 146
undef($memory_5);
#line 146
undef($memory_7);
#line 146
$_[0] = $memory_0;$_[1] = $memory_1;return $memory_6;
#line 146
goto label_35;
#line 146
label_35:
#line 146
undef($memory_7);
#line 147
dfile_priv::eat_ws($memory_0);
#line 148
$memory_8 = "=>";
#line 148
$memory_7 = dfile_priv::match_s($memory_0, $memory_8);
#line 148
undef($memory_8);
#line 148
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 148
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 148
if (c_rt_lib::check_true($memory_7)) {goto label_63;}
#line 149
$memory_8 = c_rt_lib::to_nl(1);
#line 149
$memory_1 = $memory_8;
#line 149
undef($memory_8);
#line 150
$memory_8 = "pos ";
#line 150
$memory_9 = $memory_0->{'pos'};
#line 150
$memory_8 = $memory_8 . $memory_9;
#line 150
undef($memory_9);
#line 150
$memory_9 = ": expected =>";
#line 150
$memory_8 = $memory_8 . $memory_9;
#line 150
undef($memory_9);
#line 150
undef($memory_2);
#line 150
undef($memory_3);
#line 150
undef($memory_4);
#line 150
undef($memory_5);
#line 150
undef($memory_6);
#line 150
undef($memory_7);
#line 150
$_[0] = $memory_0;$_[1] = $memory_1;return $memory_8;
#line 150
undef($memory_8);
#line 151
goto label_63;
#line 151
label_63:
#line 151
undef($memory_7);
#line 152
$memory_7 = dfile_priv::parse($memory_0, $memory_1);
#line 153
$memory_8 = $memory_1;
#line 153
$memory_8 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 153
if (c_rt_lib::check_true($memory_8)) {goto label_77;}
#line 153
undef($memory_2);
#line 153
undef($memory_3);
#line 153
undef($memory_4);
#line 153
undef($memory_5);
#line 153
undef($memory_6);
#line 153
undef($memory_8);
#line 153
$_[0] = $memory_0;$_[1] = $memory_1;return $memory_7;
#line 153
goto label_77;
#line 153
label_77:
#line 153
undef($memory_8);
#line 154
hash::set_value($memory_4, $memory_6, $memory_7);
#line 155
dfile_priv::eat_ws($memory_0);
#line 156
$memory_9 = ",";
#line 156
$memory_8 = dfile_priv::match_s($memory_0, $memory_9);
#line 156
undef($memory_9);
#line 156
$memory_8 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 156
$memory_8 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 156
if (c_rt_lib::check_true($memory_8)) {goto label_107;}
#line 157
$memory_9 = c_rt_lib::to_nl(1);
#line 157
$memory_1 = $memory_9;
#line 157
undef($memory_9);
#line 158
$memory_9 = "pos ";
#line 158
$memory_10 = $memory_0->{'pos'};
#line 158
$memory_9 = $memory_9 . $memory_10;
#line 158
undef($memory_10);
#line 158
$memory_10 = ": expected ,";
#line 158
$memory_9 = $memory_9 . $memory_10;
#line 158
undef($memory_10);
#line 158
undef($memory_2);
#line 158
undef($memory_3);
#line 158
undef($memory_4);
#line 158
undef($memory_5);
#line 158
undef($memory_6);
#line 158
undef($memory_7);
#line 158
undef($memory_8);
#line 158
$_[0] = $memory_0;$_[1] = $memory_1;return $memory_9;
#line 158
undef($memory_9);
#line 159
goto label_107;
#line 159
label_107:
#line 159
undef($memory_8);
#line 160
dfile_priv::eat_ws($memory_0);
#line 160
undef($memory_6);
#line 160
undef($memory_7);
#line 161
goto label_17;
#line 161
label_113:
#line 161
undef($memory_5);
#line 162
undef($memory_2);
#line 162
undef($memory_3);
#line 162
$_[0] = $memory_0;$_[1] = $memory_1;return $memory_4;
#line 162
undef($memory_4);
#line 163
goto label_325;
#line 163
label_120:
#line 163
$memory_3 = "[";
#line 163
$memory_3 = c_rt_lib::to_nl($memory_2 eq $memory_3);
#line 163
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 163
if (c_rt_lib::check_true($memory_3)) {goto label_194;}
#line 164
$memory_4 = 1;
#line 164
$memory_5 = "pos";
#line 164
$memory_5 = c_rt_lib::get_ref_hash($memory_0, $memory_5);
#line 164
$memory_5 = $memory_5 + $memory_4;
#line 164
$memory_6 = "pos";
#line 164
c_rt_lib::set_ref_hash($memory_0, $memory_6, $memory_5);
#line 164
undef($memory_6);
#line 164
undef($memory_4);
#line 164
undef($memory_5);
#line 165
$memory_4 = [];
#line 166
dfile_priv::eat_ws($memory_0);
#line 167
label_136:
#line 167
$memory_6 = "]";
#line 167
$memory_5 = dfile_priv::match_s($memory_0, $memory_6);
#line 167
undef($memory_6);
#line 167
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 167
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 167
if (c_rt_lib::check_true($memory_5)) {goto label_187;}
#line 168
$memory_6 = dfile_priv::parse($memory_0, $memory_1);
#line 169
$memory_7 = $memory_1;
#line 169
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 169
if (c_rt_lib::check_true($memory_7)) {goto label_154;}
#line 169
undef($memory_2);
#line 169
undef($memory_3);
#line 169
undef($memory_4);
#line 169
undef($memory_5);
#line 169
undef($memory_7);
#line 169
$_[0] = $memory_0;$_[1] = $memory_1;return $memory_6;
#line 169
goto label_154;
#line 169
label_154:
#line 169
undef($memory_7);
#line 170
array::push($memory_4, $memory_6);
#line 171
$memory_8 = ",";
#line 171
$memory_7 = dfile_priv::match_s($memory_0, $memory_8);
#line 171
undef($memory_8);
#line 171
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 171
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 171
if (c_rt_lib::check_true($memory_7)) {goto label_182;}
#line 172
$memory_8 = c_rt_lib::to_nl(1);
#line 172
$memory_1 = $memory_8;
#line 172
undef($memory_8);
#line 173
$memory_8 = "pos ";
#line 173
$memory_9 = $memory_0->{'pos'};
#line 173
$memory_8 = $memory_8 . $memory_9;
#line 173
undef($memory_9);
#line 173
$memory_9 = ": expected ,";
#line 173
$memory_8 = $memory_8 . $memory_9;
#line 173
undef($memory_9);
#line 173
undef($memory_2);
#line 173
undef($memory_3);
#line 173
undef($memory_4);
#line 173
undef($memory_5);
#line 173
undef($memory_6);
#line 173
undef($memory_7);
#line 173
$_[0] = $memory_0;$_[1] = $memory_1;return $memory_8;
#line 173
undef($memory_8);
#line 174
goto label_182;
#line 174
label_182:
#line 174
undef($memory_7);
#line 175
dfile_priv::eat_ws($memory_0);
#line 175
undef($memory_6);
#line 176
goto label_136;
#line 176
label_187:
#line 176
undef($memory_5);
#line 177
undef($memory_2);
#line 177
undef($memory_3);
#line 177
$_[0] = $memory_0;$_[1] = $memory_1;return $memory_4;
#line 177
undef($memory_4);
#line 178
goto label_325;
#line 178
label_194:
#line 178
$memory_3 = "o";
#line 178
$memory_3 = c_rt_lib::to_nl($memory_2 eq $memory_3);
#line 178
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 178
if (c_rt_lib::check_true($memory_4)) {goto label_200;}
#line 178
$memory_3 = dfile_priv::is_ov($memory_0);
#line 178
label_200:
#line 178
undef($memory_4);
#line 178
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 178
if (c_rt_lib::check_true($memory_3)) {goto label_318;}
#line 179
$memory_4 = 7;
#line 179
$memory_5 = "pos";
#line 179
$memory_5 = c_rt_lib::get_ref_hash($memory_0, $memory_5);
#line 179
$memory_5 = $memory_5 + $memory_4;
#line 179
$memory_6 = "pos";
#line 179
c_rt_lib::set_ref_hash($memory_0, $memory_6, $memory_5);
#line 179
undef($memory_6);
#line 179
undef($memory_4);
#line 179
undef($memory_5);
#line 180
$memory_4 = dfile_priv::parse_scalar($memory_0, $memory_1);
#line 181
$memory_5 = $memory_1;
#line 181
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 181
if (c_rt_lib::check_true($memory_5)) {goto label_222;}
#line 181
undef($memory_2);
#line 181
undef($memory_3);
#line 181
undef($memory_5);
#line 181
$_[0] = $memory_0;$_[1] = $memory_1;return $memory_4;
#line 181
goto label_222;
#line 181
label_222:
#line 181
undef($memory_5);
#line 182
dfile_priv::eat_ws($memory_0);
#line 183
$memory_6 = ",";
#line 183
$memory_5 = dfile_priv::match_s($memory_0, $memory_6);
#line 183
undef($memory_6);
#line 183
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 183
if (c_rt_lib::check_true($memory_5)) {goto label_281;}
#line 184
$memory_6 = dfile_priv::parse($memory_0, $memory_1);
#line 185
$memory_7 = $memory_1;
#line 185
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 185
if (c_rt_lib::check_true($memory_7)) {goto label_241;}
#line 185
undef($memory_2);
#line 185
undef($memory_3);
#line 185
undef($memory_4);
#line 185
undef($memory_5);
#line 185
undef($memory_7);
#line 185
$_[0] = $memory_0;$_[1] = $memory_1;return $memory_6;
#line 185
goto label_241;
#line 185
label_241:
#line 185
undef($memory_7);
#line 186
dfile_priv::eat_ws($memory_0);
#line 187
$memory_8 = ")";
#line 187
$memory_7 = dfile_priv::match_s($memory_0, $memory_8);
#line 187
undef($memory_8);
#line 187
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 187
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 187
if (c_rt_lib::check_true($memory_7)) {goto label_269;}
#line 188
$memory_8 = c_rt_lib::to_nl(1);
#line 188
$memory_1 = $memory_8;
#line 188
undef($memory_8);
#line 189
$memory_8 = "pos ";
#line 189
$memory_9 = $memory_0->{'pos'};
#line 189
$memory_8 = $memory_8 . $memory_9;
#line 189
undef($memory_9);
#line 189
$memory_9 = ": expected )";
#line 189
$memory_8 = $memory_8 . $memory_9;
#line 189
undef($memory_9);
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
undef($memory_7);
#line 189
$_[0] = $memory_0;$_[1] = $memory_1;return $memory_8;
#line 189
undef($memory_8);
#line 190
goto label_269;
#line 190
label_269:
#line 190
undef($memory_7);
#line 191
$memory_7 = ov::mk_val($memory_4, $memory_6);
#line 191
undef($memory_2);
#line 191
undef($memory_3);
#line 191
undef($memory_4);
#line 191
undef($memory_5);
#line 191
undef($memory_6);
#line 191
$_[0] = $memory_0;$_[1] = $memory_1;return $memory_7;
#line 191
undef($memory_7);
#line 191
undef($memory_6);
#line 192
goto label_281;
#line 192
label_281:
#line 192
undef($memory_5);
#line 193
dfile_priv::eat_ws($memory_0);
#line 194
$memory_6 = ")";
#line 194
$memory_5 = dfile_priv::match_s($memory_0, $memory_6);
#line 194
undef($memory_6);
#line 194
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 194
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 194
if (c_rt_lib::check_true($memory_5)) {goto label_307;}
#line 195
$memory_6 = c_rt_lib::to_nl(1);
#line 195
$memory_1 = $memory_6;
#line 195
undef($memory_6);
#line 196
$memory_6 = "pos ";
#line 196
$memory_7 = $memory_0->{'pos'};
#line 196
$memory_6 = $memory_6 . $memory_7;
#line 196
undef($memory_7);
#line 196
$memory_7 = ": expected )";
#line 196
$memory_6 = $memory_6 . $memory_7;
#line 196
undef($memory_7);
#line 196
undef($memory_2);
#line 196
undef($memory_3);
#line 196
undef($memory_4);
#line 196
undef($memory_5);
#line 196
$_[0] = $memory_0;$_[1] = $memory_1;return $memory_6;
#line 196
undef($memory_6);
#line 197
goto label_307;
#line 197
label_307:
#line 197
undef($memory_5);
#line 198
dfile_priv::eat_ws($memory_0);
#line 199
$memory_5 = ov::mk($memory_4);
#line 199
undef($memory_2);
#line 199
undef($memory_3);
#line 199
undef($memory_4);
#line 199
$_[0] = $memory_0;$_[1] = $memory_1;return $memory_5;
#line 199
undef($memory_5);
#line 199
undef($memory_4);
#line 200
goto label_325;
#line 200
label_318:
#line 201
$memory_4 = dfile_priv::parse_scalar($memory_0, $memory_1);
#line 201
undef($memory_2);
#line 201
undef($memory_3);
#line 201
$_[0] = $memory_0;$_[1] = $memory_1;return $memory_4;
#line 201
undef($memory_4);
#line 202
goto label_325;
#line 202
label_325:
#line 202
undef($memory_3);
#line 202
undef($memory_2);
#line 202
$_[0] = $memory_0;$_[1] = $memory_1;return;
$_[0] = $memory_0;$_[1] = $memory_1;}

sub dfile::sload($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;$memory_0 = $_[0];
#line 206
$memory_3 = dfile::try_sload($memory_0);
#line 206
$memory_2 = c_rt_lib::ov_is($memory_3, 'ok');
#line 206
if (c_rt_lib::check_true($memory_2)) {goto label_5;}
#line 206
$memory_3 = c_rt_lib::ov_mk_arg('ensure', $memory_3);
#line 206
die(dfile::ssave($memory_3));
#line 206
label_5:
#line 206
$memory_1 = c_rt_lib::ov_as($memory_3, 'ok');
#line 206
undef($memory_2);
#line 206
undef($memory_3);
#line 207
undef($memory_0);
#line 207
return $memory_1;
#line 207
undef($memory_1);
#line 207
undef($memory_0);
#line 207
return;
}

sub dfile::try_sload($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;$memory_0 = $_[0];
#line 211
$memory_2 = ptd::sim();
#line 211
$memory_1 = ptd::ensure($memory_2, $memory_0);
#line 211
undef($memory_2);
#line 212
$memory_3 = [$memory_1];
#line 212
$memory_4 = 0;
#line 212
$memory_5 = string::length($memory_1);
#line 212
$memory_2 = {str => $memory_3,pos => $memory_4,len => $memory_5,};
#line 212
undef($memory_3);
#line 212
undef($memory_4);
#line 212
undef($memory_5);
#line 213
$memory_3 = c_rt_lib::to_nl(0);
#line 214
$memory_4 = "use utf8;";
#line 214
dfile_priv::match_s($memory_2, $memory_4);
#line 214
undef($memory_4);
#line 215
dfile_priv::eat_ws($memory_2);
#line 216
$memory_4 = dfile_priv::parse($memory_2, $memory_3);
#line 217
dfile_priv::eat_ws($memory_2);
#line 218
$memory_5 = $memory_3;
#line 218
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 218
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 218
if (c_rt_lib::check_true($memory_6)) {goto label_25;}
#line 218
$memory_5 = $memory_2->{'pos'};
#line 218
$memory_7 = $memory_2->{'len'};
#line 218
$memory_5 = c_rt_lib::to_nl($memory_5 != $memory_7);
#line 218
undef($memory_7);
#line 218
label_25:
#line 218
undef($memory_6);
#line 218
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 218
if (c_rt_lib::check_true($memory_5)) {goto label_42;}
#line 219
$memory_6 = c_rt_lib::to_nl(1);
#line 219
$memory_3 = $memory_6;
#line 219
undef($memory_6);
#line 220
$memory_6 = "pos ";
#line 220
$memory_7 = $memory_2->{'pos'};
#line 220
$memory_6 = $memory_6 . $memory_7;
#line 220
undef($memory_7);
#line 220
$memory_7 = ": expected eof";
#line 220
$memory_6 = $memory_6 . $memory_7;
#line 220
undef($memory_7);
#line 220
$memory_4 = $memory_6;
#line 220
undef($memory_6);
#line 221
goto label_42;
#line 221
label_42:
#line 221
undef($memory_5);
#line 222
$memory_5 = $memory_3;
#line 222
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 222
if (c_rt_lib::check_true($memory_5)) {goto label_62;}
#line 223
$memory_7 = ptd::sim();
#line 223
$memory_6 = ptd::ensure($memory_7, $memory_4);
#line 223
undef($memory_7);
#line 223
$memory_4 = $memory_6;
#line 223
undef($memory_6);
#line 224
$memory_6 = c_rt_lib::ov_mk_arg('err', $memory_4);
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
goto label_73;
#line 225
label_62:
#line 226
$memory_6 = c_rt_lib::ov_mk_arg('ok', $memory_4);
#line 226
undef($memory_0);
#line 226
undef($memory_1);
#line 226
undef($memory_2);
#line 226
undef($memory_3);
#line 226
undef($memory_4);
#line 226
undef($memory_5);
#line 226
return $memory_6;
#line 226
undef($memory_6);
#line 227
goto label_73;
#line 227
label_73:
#line 227
undef($memory_5);
#line 227
undef($memory_1);
#line 227
undef($memory_2);
#line 227
undef($memory_3);
#line 227
undef($memory_4);
#line 227
undef($memory_0);
#line 227
return;
}

sub dfile::__state_out() {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;
#line 231
$memory_2 = ptd::sim();
#line 231
$memory_4 = {
	module => "boolean_t",
	name => "type",
};
#line 231
$memory_4 = c_rt_lib::ov_mk_arg('ref', $memory_4);
#line 231
$memory_3 = ptd::hash($memory_4);
#line 231
undef($memory_4);
#line 231
$memory_1 = {str => $memory_2,objects => $memory_3,};
#line 231
undef($memory_2);
#line 231
undef($memory_3);
#line 231
$memory_0 = ptd::rec($memory_1);
#line 231
undef($memory_1);
#line 231
return $memory_0;
#line 231
undef($memory_0);
#line 231
return;
}

my $_state_out;
sub dfile::state_out() {
	$_state_out = dfile::__state_out() unless defined $_state_out;
	return $_state_out;
}

sub dfile_priv::sp($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];
#line 235
$memory_2 = "str";
#line 235
$memory_2 = c_rt_lib::get_ref_hash($memory_0, $memory_2);
#line 235
$memory_2 = $memory_2 . $memory_1;
#line 235
$memory_3 = "str";
#line 235
c_rt_lib::set_ref_hash($memory_0, $memory_3, $memory_2);
#line 235
undef($memory_3);
#line 235
undef($memory_2);
#line 235
undef($memory_1);
#line 235
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub dfile_priv::sprintstr($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];
#line 239
$memory_2 = "";
#line 239
$memory_1 = $memory_1 . $memory_2;
#line 239
undef($memory_2);
#line 240
$memory_3 = "\\";
#line 240
$memory_4 = "\\\\";
#line 240
$memory_2 = string::replace($memory_1, $memory_3, $memory_4);
#line 240
undef($memory_4);
#line 240
undef($memory_3);
#line 240
$memory_1 = $memory_2;
#line 240
undef($memory_2);
#line 241
$memory_3 = "\$";
#line 241
$memory_4 = "\\\$";
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
$memory_3 = "\@";
#line 242
$memory_4 = "\\\@";
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
$memory_3 = "\"";
#line 243
$memory_4 = "\\\"";
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
$memory_2 = "\"";
#line 244
$memory_2 = $memory_2 . $memory_1;
#line 244
$memory_3 = "\"";
#line 244
$memory_2 = $memory_2 . $memory_3;
#line 244
undef($memory_3);
#line 244
dfile_priv::sp($memory_0, $memory_2);
#line 244
undef($memory_2);
#line 244
undef($memory_1);
#line 244
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub dfile_priv::is_simple_string($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;$memory_0 = $_[0];
#line 248
$memory_1 = string::length($memory_0);
#line 249
$memory_2 = 0;
#line 249
$memory_2 = c_rt_lib::to_nl($memory_1 == $memory_2);
#line 249
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 249
if (c_rt_lib::check_true($memory_2)) {goto label_12;}
#line 249
$memory_3 = c_rt_lib::to_nl(0);
#line 249
undef($memory_0);
#line 249
undef($memory_1);
#line 249
undef($memory_2);
#line 249
return $memory_3;
#line 249
undef($memory_3);
#line 249
goto label_12;
#line 249
label_12:
#line 249
undef($memory_2);
#line 250
$memory_4 = 0;
#line 250
$memory_5 = 1;
#line 250
$memory_3 = string::substr($memory_0, $memory_4, $memory_5);
#line 250
undef($memory_5);
#line 250
undef($memory_4);
#line 250
$memory_2 = string::is_letter($memory_3);
#line 250
undef($memory_3);
#line 250
if (c_rt_lib::check_true($memory_2)) {goto label_30;}
#line 250
$memory_3 = 0;
#line 250
$memory_4 = 1;
#line 250
$memory_2 = string::substr($memory_0, $memory_3, $memory_4);
#line 250
undef($memory_4);
#line 250
undef($memory_3);
#line 250
$memory_3 = "_";
#line 250
$memory_2 = c_rt_lib::to_nl($memory_2 eq $memory_3);
#line 250
undef($memory_3);
#line 250
label_30:
#line 250
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 250
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 250
if (c_rt_lib::check_true($memory_2)) {goto label_41;}
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
goto label_41;
#line 250
label_41:
#line 250
undef($memory_2);
#line 251
$memory_2 = 0;
#line 251
$memory_3 = 1;
#line 251
label_45:
#line 251
$memory_4 = c_rt_lib::to_nl($memory_2 >= $memory_1);
#line 251
if (c_rt_lib::check_true($memory_4)) {goto label_78;}
#line 252
$memory_6 = 1;
#line 252
$memory_5 = string::substr($memory_0, $memory_2, $memory_6);
#line 252
undef($memory_6);
#line 253
$memory_6 = string::is_letter($memory_5);
#line 253
if (c_rt_lib::check_true($memory_6)) {goto label_54;}
#line 253
$memory_6 = string::is_digit($memory_5);
#line 253
label_54:
#line 253
if (c_rt_lib::check_true($memory_6)) {goto label_58;}
#line 253
$memory_6 = "_";
#line 253
$memory_6 = c_rt_lib::to_nl($memory_5 eq $memory_6);
#line 253
label_58:
#line 253
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 253
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 253
if (c_rt_lib::check_true($memory_6)) {goto label_73;}
#line 253
$memory_7 = c_rt_lib::to_nl(0);
#line 253
undef($memory_0);
#line 253
undef($memory_1);
#line 253
undef($memory_2);
#line 253
undef($memory_3);
#line 253
undef($memory_4);
#line 253
undef($memory_5);
#line 253
undef($memory_6);
#line 253
return $memory_7;
#line 253
undef($memory_7);
#line 253
goto label_73;
#line 253
label_73:
#line 253
undef($memory_6);
#line 253
undef($memory_5);
#line 254
$memory_2 = $memory_2 + $memory_3;
#line 254
goto label_45;
#line 254
label_78:
#line 254
undef($memory_2);
#line 254
undef($memory_3);
#line 254
undef($memory_4);
#line 255
$memory_2 = c_rt_lib::to_nl(1);
#line 255
undef($memory_0);
#line 255
undef($memory_1);
#line 255
return $memory_2;
#line 255
undef($memory_2);
#line 255
undef($memory_1);
#line 255
undef($memory_0);
#line 255
return;
}

sub dfile_priv::sprint_hash_key($$) {
my $memory_0;my $memory_1;my $memory_2;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];
#line 259
$memory_2 = dfile_priv::is_simple_string($memory_1);
#line 259
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 259
if (c_rt_lib::check_true($memory_2)) {goto label_5;}
#line 260
dfile_priv::sp($memory_0, $memory_1);
#line 261
goto label_8;
#line 261
label_5:
#line 262
dfile_priv::sprintstr($memory_0, $memory_1);
#line 263
goto label_8;
#line 263
label_8:
#line 263
undef($memory_2);
#line 263
undef($memory_1);
#line 263
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub dfile_priv::get_ind($) {
my $memory_0;my $memory_1;my $memory_2;$memory_0 = $_[0];
#line 267
$memory_2 = string::tab();
#line 267
$memory_1 = string::char_times($memory_2, $memory_0);
#line 267
undef($memory_2);
#line 267
undef($memory_0);
#line 267
return $memory_1;
#line 267
undef($memory_1);
#line 267
undef($memory_0);
#line 267
return;
}

sub dfile_priv::sprint_hash($$$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];$memory_2 = $_[2];$memory_3 = $_[3];
#line 272
$memory_4 = "{";
#line 272
$memory_5 = string::lf();
#line 272
$memory_4 = $memory_4 . $memory_5;
#line 272
undef($memory_5);
#line 272
dfile_priv::sp($memory_0, $memory_4);
#line 272
undef($memory_4);
#line 273
$memory_4 = hash::keys($memory_1);
#line 274
array::sort($memory_4);
#line 275
$memory_6 = 0;
#line 275
$memory_7 = 1;
#line 275
$memory_8 = c_rt_lib::array_len($memory_4);
#line 275
label_11:
#line 275
$memory_9 = c_rt_lib::to_nl($memory_6 >= $memory_8);
#line 275
if (c_rt_lib::check_true($memory_9)) {goto label_39;}
#line 275
$memory_5 = $memory_4->[$memory_6];
#line 276
$memory_10 = hash::get_value($memory_1, $memory_5);
#line 277
$memory_12 = 1;
#line 277
$memory_12 = $memory_2 + $memory_12;
#line 277
$memory_11 = dfile_priv::get_ind($memory_12);
#line 277
undef($memory_12);
#line 277
dfile_priv::sp($memory_0, $memory_11);
#line 277
undef($memory_11);
#line 278
dfile_priv::sprint_hash_key($memory_0, $memory_5);
#line 279
$memory_11 = " => ";
#line 279
dfile_priv::sp($memory_0, $memory_11);
#line 279
undef($memory_11);
#line 280
$memory_11 = 1;
#line 280
$memory_11 = $memory_2 + $memory_11;
#line 280
dfile_priv::sprint($memory_0, $memory_10, $memory_11, $memory_3);
#line 280
undef($memory_11);
#line 281
$memory_11 = ",";
#line 281
$memory_12 = string::lf();
#line 281
$memory_11 = $memory_11 . $memory_12;
#line 281
undef($memory_12);
#line 281
dfile_priv::sp($memory_0, $memory_11);
#line 281
undef($memory_11);
#line 281
undef($memory_10);
#line 282
$memory_6 = $memory_6 + $memory_7;
#line 282
goto label_11;
#line 282
label_39:
#line 282
undef($memory_5);
#line 282
undef($memory_6);
#line 282
undef($memory_7);
#line 282
undef($memory_8);
#line 282
undef($memory_9);
#line 283
$memory_5 = dfile_priv::get_ind($memory_2);
#line 283
$memory_6 = "}";
#line 283
$memory_5 = $memory_5 . $memory_6;
#line 283
undef($memory_6);
#line 283
dfile_priv::sp($memory_0, $memory_5);
#line 283
undef($memory_5);
#line 283
undef($memory_4);
#line 283
undef($memory_1);
#line 283
undef($memory_2);
#line 283
undef($memory_3);
#line 283
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub dfile_priv::handle_debug($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];
#line 287
$memory_2 = nl::is_hash($memory_1);
#line 287
if (c_rt_lib::check_true($memory_2)) {goto label_3;}
#line 287
$memory_2 = nl::is_array($memory_1);
#line 287
label_3:
#line 287
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 287
if (c_rt_lib::check_true($memory_3)) {goto label_9;}
#line 287
$memory_4 = $memory_0->{'objects'};
#line 287
$memory_2 = hash::has_key($memory_4, $memory_1);
#line 287
undef($memory_4);
#line 287
label_9:
#line 287
undef($memory_3);
#line 287
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 287
if (c_rt_lib::check_true($memory_2)) {goto label_20;}
#line 288
dfile_priv::sp($memory_0, $memory_1);
#line 289
$memory_3 = c_rt_lib::to_nl(1);
#line 289
undef($memory_1);
#line 289
undef($memory_2);
#line 289
$_[0] = $memory_0;return $memory_3;
#line 289
undef($memory_3);
#line 290
goto label_36;
#line 290
label_20:
#line 291
$memory_3 = "objects";
#line 291
$memory_3 = c_rt_lib::get_ref_hash($memory_0, $memory_3);
#line 291
$memory_4 = c_rt_lib::to_nl(1);
#line 291
hash::set_value($memory_3, $memory_1, $memory_4);
#line 291
undef($memory_4);
#line 291
$memory_4 = "objects";
#line 291
c_rt_lib::set_ref_hash($memory_0, $memory_4, $memory_3);
#line 291
undef($memory_4);
#line 291
undef($memory_3);
#line 292
$memory_3 = c_rt_lib::to_nl(0);
#line 292
undef($memory_1);
#line 292
undef($memory_2);
#line 292
$_[0] = $memory_0;return $memory_3;
#line 292
undef($memory_3);
#line 293
goto label_36;
#line 293
label_36:
#line 293
undef($memory_2);
#line 293
undef($memory_1);
#line 293
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub dfile_priv::sprint($$$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];$memory_2 = $_[2];$memory_3 = $_[3];
#line 298
$memory_4 = $memory_3;
#line 298
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 298
if (c_rt_lib::check_true($memory_5)) {goto label_4;}
#line 298
$memory_4 = dfile_priv::handle_debug($memory_0, $memory_1);
#line 298
label_4:
#line 298
undef($memory_5);
#line 298
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 298
if (c_rt_lib::check_true($memory_4)) {goto label_14;}
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
goto label_14;
#line 298
label_14:
#line 298
undef($memory_4);
#line 299
$memory_4 = nl::is_sim($memory_1);
#line 299
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 299
if (c_rt_lib::check_true($memory_4)) {goto label_21;}
#line 300
dfile_priv::sprintstr($memory_0, $memory_1);
#line 301
goto label_106;
#line 301
label_21:
#line 301
$memory_4 = nl::is_array($memory_1);
#line 301
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 301
if (c_rt_lib::check_true($memory_4)) {goto label_69;}
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
label_34:
#line 303
$memory_9 = c_rt_lib::to_nl($memory_6 >= $memory_8);
#line 303
if (c_rt_lib::check_true($memory_9)) {goto label_56;}
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
goto label_34;
#line 307
label_56:
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
goto label_106;
#line 309
label_69:
#line 309
$memory_4 = nl::is_hash($memory_1);
#line 309
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 309
if (c_rt_lib::check_true($memory_4)) {goto label_75;}
#line 310
dfile_priv::sprint_hash($memory_0, $memory_1, $memory_2, $memory_3);
#line 311
goto label_106;
#line 311
label_75:
#line 311
$memory_4 = nl::is_variant($memory_1);
#line 311
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 311
if (c_rt_lib::check_true($memory_4)) {goto label_101;}
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
if (c_rt_lib::check_true($memory_5)) {goto label_95;}
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
goto label_95;
#line 317
label_95:
#line 317
undef($memory_5);
#line 318
$memory_5 = ")";
#line 318
dfile_priv::sp($memory_0, $memory_5);
#line 318
undef($memory_5);
#line 319
goto label_106;
#line 319
label_101:
#line 320
$memory_5 = [];
#line 320
die(dfile::ssave($memory_5));
#line 320
undef($memory_5);
#line 321
goto label_106;
#line 321
label_106:
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
#line 335
$memory_2 = nl::is_sim($memory_1);
#line 335
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 335
if (c_rt_lib::check_true($memory_2)) {goto label_5;}
#line 336
dfile_priv::print_net_formatstr($memory_0, $memory_1);
#line 337
goto label_116;
#line 337
label_5:
#line 337
$memory_2 = nl::is_array($memory_1);
#line 337
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 337
if (c_rt_lib::check_true($memory_2)) {goto label_35;}
#line 338
$memory_3 = "[";
#line 338
dfile_priv::sp($memory_0, $memory_3);
#line 338
undef($memory_3);
#line 339
$memory_4 = 0;
#line 339
$memory_5 = 1;
#line 339
$memory_6 = c_rt_lib::array_len($memory_1);
#line 339
label_15:
#line 339
$memory_7 = c_rt_lib::to_nl($memory_4 >= $memory_6);
#line 339
if (c_rt_lib::check_true($memory_7)) {goto label_25;}
#line 339
$memory_3 = $memory_1->[$memory_4];
#line 340
dfile_priv::print_net_format($memory_0, $memory_3);
#line 341
$memory_8 = ",";
#line 341
dfile_priv::sp($memory_0, $memory_8);
#line 341
undef($memory_8);
#line 342
$memory_4 = $memory_4 + $memory_5;
#line 342
goto label_15;
#line 342
label_25:
#line 342
undef($memory_3);
#line 342
undef($memory_4);
#line 342
undef($memory_5);
#line 342
undef($memory_6);
#line 342
undef($memory_7);
#line 343
$memory_3 = "]";
#line 343
dfile_priv::sp($memory_0, $memory_3);
#line 343
undef($memory_3);
#line 344
goto label_116;
#line 344
label_35:
#line 344
$memory_2 = nl::is_hash($memory_1);
#line 344
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 344
if (c_rt_lib::check_true($memory_2)) {goto label_85;}
#line 345
$memory_3 = "{";
#line 345
dfile_priv::sp($memory_0, $memory_3);
#line 345
undef($memory_3);
#line 346
$memory_3 = hash::keys($memory_1);
#line 346
$memory_5 = 0;
#line 346
$memory_6 = 1;
#line 346
$memory_7 = c_rt_lib::array_len($memory_3);
#line 346
label_46:
#line 346
$memory_8 = c_rt_lib::to_nl($memory_5 >= $memory_7);
#line 346
if (c_rt_lib::check_true($memory_8)) {goto label_74;}
#line 346
$memory_4 = $memory_3->[$memory_5];
#line 347
$memory_9 = hash::get_value($memory_1, $memory_4);
#line 348
$memory_11 = "";
#line 348
$memory_11 = $memory_4 . $memory_11;
#line 348
$memory_10 = dfile_priv::is_simple_string($memory_11);
#line 348
undef($memory_11);
#line 348
$memory_10 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_10));
#line 348
if (c_rt_lib::check_true($memory_10)) {goto label_59;}
#line 349
dfile_priv::sp($memory_0, $memory_4);
#line 350
goto label_62;
#line 350
label_59:
#line 351
dfile_priv::print_net_formatstr($memory_0, $memory_4);
#line 352
goto label_62;
#line 352
label_62:
#line 352
undef($memory_10);
#line 353
$memory_10 = "=>";
#line 353
dfile_priv::sp($memory_0, $memory_10);
#line 353
undef($memory_10);
#line 354
dfile_priv::print_net_format($memory_0, $memory_9);
#line 355
$memory_10 = ",";
#line 355
dfile_priv::sp($memory_0, $memory_10);
#line 355
undef($memory_10);
#line 355
undef($memory_9);
#line 356
$memory_5 = $memory_5 + $memory_6;
#line 356
goto label_46;
#line 356
label_74:
#line 356
undef($memory_3);
#line 356
undef($memory_4);
#line 356
undef($memory_5);
#line 356
undef($memory_6);
#line 356
undef($memory_7);
#line 356
undef($memory_8);
#line 357
$memory_3 = "}";
#line 357
dfile_priv::sp($memory_0, $memory_3);
#line 357
undef($memory_3);
#line 358
goto label_116;
#line 358
label_85:
#line 358
$memory_2 = nl::is_variant($memory_1);
#line 358
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 358
if (c_rt_lib::check_true($memory_2)) {goto label_111;}
#line 359
$memory_3 = "ov::mk(";
#line 359
dfile_priv::sp($memory_0, $memory_3);
#line 359
undef($memory_3);
#line 360
$memory_3 = ov::get_element($memory_1);
#line 360
dfile_priv::print_net_formatstr($memory_0, $memory_3);
#line 360
undef($memory_3);
#line 361
$memory_3 = ov::has_value($memory_1);
#line 361
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 361
if (c_rt_lib::check_true($memory_3)) {goto label_105;}
#line 362
$memory_4 = ",";
#line 362
dfile_priv::sp($memory_0, $memory_4);
#line 362
undef($memory_4);
#line 363
$memory_4 = ov::get_value($memory_1);
#line 363
dfile_priv::print_net_format($memory_0, $memory_4);
#line 363
undef($memory_4);
#line 364
goto label_105;
#line 364
label_105:
#line 364
undef($memory_3);
#line 365
$memory_3 = ")";
#line 365
dfile_priv::sp($memory_0, $memory_3);
#line 365
undef($memory_3);
#line 366
goto label_116;
#line 366
label_111:
#line 367
$memory_3 = [$memory_1];
#line 367
die(dfile::ssave($memory_3));
#line 367
undef($memory_3);
#line 368
goto label_116;
#line 368
label_116:
#line 368
undef($memory_2);
#line 368
undef($memory_1);
#line 368
$_[0] = $memory_0;return;
$_[0] = $memory_0;}
