use c_rt_lib;
use string;
use boolean_t;
use ptd;
use array;
use c_rt_lib;
sub string_utils::is_int;
sub string_utils::is_whitespace;
sub string_utils::is_alpha;
sub string_utils::get_integer;
sub string_utils::is_integer;
sub string_utils::is_integer_possibly_leading_zeros;
sub string_utils::is_float;
sub string_utils::is_number;
sub string_utils::get_number;
sub string_utils_priv::eat_ws;
sub string_utils_priv::get_number;
sub string_utils_priv::cal_expr;
sub string_utils::eval_number;
sub string_utils::get_date;
sub string_utils::change;
sub string_utils::erase_tail_whitespace;
sub string_utils::erase_tail_zeroes;
sub string_utils::erase_leading_zeroes;
sub string_utils::char2hex;
sub string_utils::hex2char;
sub string_utils::float2str;
sub string_utils::int2str_leading_digits;
sub string_utils_priv::max;
sub string_utils::int2str;
sub string_utils::starts_with;

return 1;

sub string_utils::is_int($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;$memory_0 = $_[0];
#line 12
$memory_1 = string::ord($memory_0);
#line 12
$memory_3 = 47;
#line 12
$memory_1 = c_rt_lib::to_nl($memory_1 > $memory_3);
#line 12
undef($memory_3);
#line 12
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_1));
#line 12
if (c_rt_lib::check_true($memory_2)) {goto label_10;}
#line 12
$memory_1 = string::ord($memory_0);
#line 12
$memory_3 = 58;
#line 12
$memory_1 = c_rt_lib::to_nl($memory_1 < $memory_3);
#line 12
undef($memory_3);
#line 12
label_10:
#line 12
undef($memory_2);
#line 12
undef($memory_0);
#line 12
return $memory_1;
#line 12
undef($memory_1);
#line 12
undef($memory_0);
#line 12
return;
}

sub string_utils::is_whitespace($) {
my $memory_0;my $memory_1;$memory_0 = $_[0];
#line 16
$memory_1 = " ";
#line 16
$memory_1 = c_rt_lib::to_nl($memory_0 eq $memory_1);
#line 16
if (c_rt_lib::check_true($memory_1)) {goto label_5;}
#line 16
$memory_1 = string::lf();
#line 16
$memory_1 = c_rt_lib::to_nl($memory_0 eq $memory_1);
#line 16
label_5:
#line 16
if (c_rt_lib::check_true($memory_1)) {goto label_9;}
#line 16
$memory_1 = string::tab();
#line 16
$memory_1 = c_rt_lib::to_nl($memory_0 eq $memory_1);
#line 16
label_9:
#line 16
if (c_rt_lib::check_true($memory_1)) {goto label_13;}
#line 16
$memory_1 = string::r();
#line 16
$memory_1 = c_rt_lib::to_nl($memory_0 eq $memory_1);
#line 16
label_13:
#line 16
if (c_rt_lib::check_true($memory_1)) {goto label_17;}
#line 16
$memory_1 = string::f();
#line 16
$memory_1 = c_rt_lib::to_nl($memory_0 eq $memory_1);
#line 16
label_17:
#line 16
undef($memory_0);
#line 16
return $memory_1;
#line 16
undef($memory_1);
#line 16
undef($memory_0);
#line 16
return;
}

sub string_utils::is_alpha($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;$memory_0 = $_[0];
#line 20
$memory_1 = string::ord($memory_0);
#line 21
$memory_2 = 64;
#line 21
$memory_2 = c_rt_lib::to_nl($memory_1 > $memory_2);
#line 21
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 21
if (c_rt_lib::check_true($memory_3)) {goto label_7;}
#line 21
$memory_2 = 91;
#line 21
$memory_2 = c_rt_lib::to_nl($memory_1 < $memory_2);
#line 21
label_7:
#line 21
undef($memory_3);
#line 21
if (c_rt_lib::check_true($memory_2)) {goto label_18;}
#line 21
$memory_2 = 96;
#line 21
$memory_2 = c_rt_lib::to_nl($memory_1 > $memory_2);
#line 21
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 21
if (c_rt_lib::check_true($memory_3)) {goto label_16;}
#line 21
$memory_2 = 123;
#line 21
$memory_2 = c_rt_lib::to_nl($memory_1 < $memory_2);
#line 21
label_16:
#line 21
undef($memory_3);
#line 21
label_18:
#line 21
undef($memory_0);
#line 21
undef($memory_1);
#line 21
return $memory_2;
#line 21
undef($memory_2);
#line 21
undef($memory_1);
#line 21
undef($memory_0);
#line 21
return;
}

sub string_utils::get_integer($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;$memory_0 = $_[0];
#line 25
$memory_1 = "";
#line 25
$memory_1 = c_rt_lib::to_nl($memory_0 eq $memory_1);
#line 25
if (c_rt_lib::check_true($memory_1)) {goto label_5;}
#line 25
$memory_1 = "-";
#line 25
$memory_1 = c_rt_lib::to_nl($memory_0 eq $memory_1);
#line 25
label_5:
#line 25
$memory_1 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_1));
#line 25
if (c_rt_lib::check_true($memory_1)) {goto label_15;}
#line 25
$memory_2 = "";
#line 25
$memory_2 = c_rt_lib::ov_mk_arg('err', $memory_2);
#line 25
undef($memory_0);
#line 25
undef($memory_1);
#line 25
return $memory_2;
#line 25
undef($memory_2);
#line 25
goto label_15;
#line 25
label_15:
#line 25
undef($memory_1);
#line 26
$memory_2 = "";
#line 26
$memory_1 = string::split($memory_2, $memory_0);
#line 26
undef($memory_2);
#line 27
$memory_2 = "";
#line 28
$memory_4 = 0;
#line 28
$memory_3 = $memory_1->[$memory_4];
#line 28
undef($memory_4);
#line 28
$memory_4 = "-";
#line 28
$memory_3 = c_rt_lib::to_nl($memory_3 eq $memory_4);
#line 28
undef($memory_4);
#line 28
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 28
if (c_rt_lib::check_true($memory_3)) {goto label_43;}
#line 29
$memory_5 = 1;
#line 29
$memory_6 = array::len($memory_1);
#line 29
$memory_7 = 1;
#line 29
$memory_6 = $memory_6 - $memory_7;
#line 29
undef($memory_7);
#line 29
$memory_4 = array::subarray($memory_1, $memory_5, $memory_6);
#line 29
undef($memory_6);
#line 29
undef($memory_5);
#line 29
$memory_1 = $memory_4;
#line 29
undef($memory_4);
#line 30
$memory_4 = "-";
#line 30
$memory_2 = $memory_4;
#line 30
undef($memory_4);
#line 31
goto label_43;
#line 31
label_43:
#line 31
undef($memory_3);
#line 32
$memory_4 = 0;
#line 32
$memory_5 = 1;
#line 32
$memory_6 = c_rt_lib::array_len($memory_1);
#line 32
label_48:
#line 32
$memory_7 = c_rt_lib::to_nl($memory_4 >= $memory_6);
#line 32
if (c_rt_lib::check_true($memory_7)) {goto label_75;}
#line 32
$memory_3 = $memory_1->[$memory_4];
#line 33
$memory_8 = string_utils::is_int($memory_3);
#line 33
$memory_8 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 33
$memory_8 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 33
if (c_rt_lib::check_true($memory_8)) {goto label_70;}
#line 33
$memory_9 = "";
#line 33
$memory_9 = c_rt_lib::ov_mk_arg('err', $memory_9);
#line 33
undef($memory_0);
#line 33
undef($memory_1);
#line 33
undef($memory_2);
#line 33
undef($memory_3);
#line 33
undef($memory_4);
#line 33
undef($memory_5);
#line 33
undef($memory_6);
#line 33
undef($memory_7);
#line 33
undef($memory_8);
#line 33
return $memory_9;
#line 33
undef($memory_9);
#line 33
goto label_70;
#line 33
label_70:
#line 33
undef($memory_8);
#line 34
$memory_2 = $memory_2 . $memory_3;
#line 35
$memory_4 = $memory_4 + $memory_5;
#line 35
goto label_48;
#line 35
label_75:
#line 35
undef($memory_3);
#line 35
undef($memory_4);
#line 35
undef($memory_5);
#line 35
undef($memory_6);
#line 35
undef($memory_7);
#line 36
$memory_3 = c_rt_lib::ov_mk_arg('ok', $memory_2);
#line 36
undef($memory_0);
#line 36
undef($memory_1);
#line 36
undef($memory_2);
#line 36
return $memory_3;
#line 36
undef($memory_3);
#line 36
undef($memory_1);
#line 36
undef($memory_2);
#line 36
undef($memory_0);
#line 36
return;
}

sub string_utils::is_integer($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;$memory_0 = $_[0];
#line 40
$memory_1 = "";
#line 40
$memory_1 = $memory_0 . $memory_1;
#line 40
$memory_0 = $memory_1;
#line 40
undef($memory_1);
#line 41
$memory_1 = string_utils::is_integer_possibly_leading_zeros($memory_0);
#line 41
$memory_1 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_1));
#line 41
$memory_1 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_1));
#line 41
if (c_rt_lib::check_true($memory_1)) {goto label_14;}
#line 41
$memory_2 = c_rt_lib::to_nl(0);
#line 41
undef($memory_0);
#line 41
undef($memory_1);
#line 41
return $memory_2;
#line 41
undef($memory_2);
#line 41
goto label_14;
#line 41
label_14:
#line 41
undef($memory_1);
#line 42
$memory_1 = 0;
#line 42
$memory_1 = c_rt_lib::to_nl($memory_0 eq $memory_1);
#line 42
$memory_1 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_1));
#line 42
if (c_rt_lib::check_true($memory_1)) {goto label_26;}
#line 42
$memory_2 = c_rt_lib::to_nl(1);
#line 42
undef($memory_0);
#line 42
undef($memory_1);
#line 42
return $memory_2;
#line 42
undef($memory_2);
#line 42
goto label_26;
#line 42
label_26:
#line 42
undef($memory_1);
#line 43
$memory_1 = 0;
#line 44
$memory_3 = 1;
#line 44
$memory_2 = string::substr($memory_0, $memory_1, $memory_3);
#line 44
undef($memory_3);
#line 44
$memory_3 = "-";
#line 44
$memory_2 = c_rt_lib::to_nl($memory_2 eq $memory_3);
#line 44
undef($memory_3);
#line 44
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 44
if (c_rt_lib::check_true($memory_2)) {goto label_41;}
#line 44
$memory_3 = 1;
#line 44
$memory_1 = $memory_1 + $memory_3;
#line 44
undef($memory_3);
#line 44
goto label_41;
#line 44
label_41:
#line 44
undef($memory_2);
#line 45
$memory_3 = 1;
#line 45
$memory_2 = string::substr($memory_0, $memory_1, $memory_3);
#line 45
undef($memory_3);
#line 45
$memory_3 = 0;
#line 45
$memory_2 = c_rt_lib::to_nl($memory_2 eq $memory_3);
#line 45
undef($memory_3);
#line 45
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 45
if (c_rt_lib::check_true($memory_2)) {goto label_58;}
#line 45
$memory_3 = c_rt_lib::to_nl(0);
#line 45
undef($memory_0);
#line 45
undef($memory_1);
#line 45
undef($memory_2);
#line 45
return $memory_3;
#line 45
undef($memory_3);
#line 45
goto label_58;
#line 45
label_58:
#line 45
undef($memory_2);
#line 46
$memory_2 = c_rt_lib::to_nl(1);
#line 46
undef($memory_0);
#line 46
undef($memory_1);
#line 46
return $memory_2;
#line 46
undef($memory_2);
#line 46
undef($memory_1);
#line 46
undef($memory_0);
#line 46
return;
}

sub string_utils::is_integer_possibly_leading_zeros($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;$memory_0 = $_[0];
#line 50
$memory_1 = "";
#line 50
$memory_1 = $memory_0 . $memory_1;
#line 51
$memory_2 = string::length($memory_1);
#line 52
$memory_3 = 0;
#line 53
$memory_5 = 1;
#line 53
$memory_4 = string::substr($memory_1, $memory_3, $memory_5);
#line 53
undef($memory_5);
#line 53
$memory_5 = "-";
#line 53
$memory_4 = c_rt_lib::to_nl($memory_4 eq $memory_5);
#line 53
undef($memory_5);
#line 53
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 53
if (c_rt_lib::check_true($memory_4)) {goto label_16;}
#line 53
$memory_5 = 1;
#line 53
$memory_3 = $memory_3 + $memory_5;
#line 53
undef($memory_5);
#line 53
goto label_16;
#line 53
label_16:
#line 53
undef($memory_4);
#line 54
$memory_4 = c_rt_lib::to_nl($memory_3 == $memory_2);
#line 54
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 54
if (c_rt_lib::check_true($memory_4)) {goto label_30;}
#line 54
$memory_5 = c_rt_lib::to_nl(0);
#line 54
undef($memory_0);
#line 54
undef($memory_1);
#line 54
undef($memory_2);
#line 54
undef($memory_3);
#line 54
undef($memory_4);
#line 54
return $memory_5;
#line 54
undef($memory_5);
#line 54
goto label_30;
#line 54
label_30:
#line 54
undef($memory_4);
#line 55
label_32:
#line 55
$memory_4 = c_rt_lib::to_nl($memory_3 < $memory_2);
#line 55
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 55
if (c_rt_lib::check_true($memory_4)) {goto label_60;}
#line 56
$memory_7 = 1;
#line 56
$memory_6 = string::substr($memory_1, $memory_3, $memory_7);
#line 56
undef($memory_7);
#line 56
$memory_5 = string::is_digit($memory_6);
#line 56
undef($memory_6);
#line 56
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 56
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 56
if (c_rt_lib::check_true($memory_5)) {goto label_54;}
#line 56
$memory_6 = c_rt_lib::to_nl(0);
#line 56
undef($memory_0);
#line 56
undef($memory_1);
#line 56
undef($memory_2);
#line 56
undef($memory_3);
#line 56
undef($memory_4);
#line 56
undef($memory_5);
#line 56
return $memory_6;
#line 56
undef($memory_6);
#line 56
goto label_54;
#line 56
label_54:
#line 56
undef($memory_5);
#line 55
$memory_5 = 1;
#line 55
$memory_3 = $memory_3 + $memory_5;
#line 55
undef($memory_5);
#line 57
goto label_32;
#line 57
label_60:
#line 57
undef($memory_4);
#line 58
$memory_4 = c_rt_lib::to_nl(1);
#line 58
undef($memory_0);
#line 58
undef($memory_1);
#line 58
undef($memory_2);
#line 58
undef($memory_3);
#line 58
return $memory_4;
#line 58
undef($memory_4);
#line 58
undef($memory_1);
#line 58
undef($memory_2);
#line 58
undef($memory_3);
#line 58
undef($memory_0);
#line 58
return;
}

sub string_utils::is_float($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;$memory_0 = $_[0];
#line 62
$memory_1 = "";
#line 62
$memory_1 = $memory_0 . $memory_1;
#line 63
$memory_2 = string::length($memory_1);
#line 64
$memory_3 = 3;
#line 64
$memory_3 = c_rt_lib::to_nl($memory_2 < $memory_3);
#line 64
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 64
if (c_rt_lib::check_true($memory_3)) {goto label_15;}
#line 64
$memory_4 = c_rt_lib::to_nl(0);
#line 64
undef($memory_0);
#line 64
undef($memory_1);
#line 64
undef($memory_2);
#line 64
undef($memory_3);
#line 64
return $memory_4;
#line 64
undef($memory_4);
#line 64
goto label_15;
#line 64
label_15:
#line 64
undef($memory_3);
#line 65
$memory_3 = 0;
#line 66
$memory_5 = 1;
#line 66
$memory_4 = string::substr($memory_1, $memory_3, $memory_5);
#line 66
undef($memory_5);
#line 66
$memory_5 = "-";
#line 66
$memory_4 = c_rt_lib::to_nl($memory_4 eq $memory_5);
#line 66
undef($memory_5);
#line 66
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 66
if (c_rt_lib::check_true($memory_4)) {goto label_30;}
#line 66
$memory_5 = 1;
#line 66
$memory_3 = $memory_3 + $memory_5;
#line 66
undef($memory_5);
#line 66
goto label_30;
#line 66
label_30:
#line 66
undef($memory_4);
#line 67
$memory_3 = $memory_3;
#line 67
label_33:
#line 67
$memory_4 = c_rt_lib::to_nl($memory_3 < $memory_2);
#line 67
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 67
if (c_rt_lib::check_true($memory_4)) {goto label_54;}
#line 68
$memory_7 = 1;
#line 68
$memory_6 = string::substr($memory_1, $memory_3, $memory_7);
#line 68
undef($memory_7);
#line 68
$memory_5 = string::is_digit($memory_6);
#line 68
undef($memory_6);
#line 68
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 68
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 68
if (c_rt_lib::check_true($memory_5)) {goto label_48;}
#line 68
undef($memory_5);
#line 68
goto label_54;
#line 68
goto label_48;
#line 68
label_48:
#line 68
undef($memory_5);
#line 67
$memory_5 = 1;
#line 67
$memory_3 = $memory_3 + $memory_5;
#line 67
undef($memory_5);
#line 69
goto label_33;
#line 69
label_54:
#line 69
undef($memory_4);
#line 70
$memory_4 = 1;
#line 70
$memory_4 = c_rt_lib::to_nl($memory_3 < $memory_4);
#line 70
if (c_rt_lib::check_true($memory_4)) {goto label_62;}
#line 70
$memory_4 = 2;
#line 70
$memory_4 = $memory_3 + $memory_4;
#line 70
$memory_4 = c_rt_lib::to_nl($memory_4 > $memory_2);
#line 70
label_62:
#line 70
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 70
if (c_rt_lib::check_true($memory_4)) {goto label_74;}
#line 70
$memory_5 = c_rt_lib::to_nl(0);
#line 70
undef($memory_0);
#line 70
undef($memory_1);
#line 70
undef($memory_2);
#line 70
undef($memory_3);
#line 70
undef($memory_4);
#line 70
return $memory_5;
#line 70
undef($memory_5);
#line 70
goto label_74;
#line 70
label_74:
#line 70
undef($memory_4);
#line 71
$memory_5 = 1;
#line 71
$memory_4 = string::substr($memory_1, $memory_3, $memory_5);
#line 71
undef($memory_5);
#line 71
$memory_5 = ".";
#line 71
$memory_4 = c_rt_lib::to_nl($memory_4 eq $memory_5);
#line 71
undef($memory_5);
#line 71
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 71
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 71
if (c_rt_lib::check_true($memory_4)) {goto label_94;}
#line 71
$memory_5 = c_rt_lib::to_nl(0);
#line 71
undef($memory_0);
#line 71
undef($memory_1);
#line 71
undef($memory_2);
#line 71
undef($memory_3);
#line 71
undef($memory_4);
#line 71
return $memory_5;
#line 71
undef($memory_5);
#line 71
goto label_94;
#line 71
label_94:
#line 71
undef($memory_4);
#line 72
$memory_4 = 1;
#line 72
$memory_3 = $memory_3 + $memory_4;
#line 72
undef($memory_4);
#line 72
label_99:
#line 72
$memory_4 = c_rt_lib::to_nl($memory_3 < $memory_2);
#line 72
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 72
if (c_rt_lib::check_true($memory_4)) {goto label_127;}
#line 73
$memory_7 = 1;
#line 73
$memory_6 = string::substr($memory_1, $memory_3, $memory_7);
#line 73
undef($memory_7);
#line 73
$memory_5 = string::is_digit($memory_6);
#line 73
undef($memory_6);
#line 73
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 73
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 73
if (c_rt_lib::check_true($memory_5)) {goto label_121;}
#line 73
$memory_6 = c_rt_lib::to_nl(0);
#line 73
undef($memory_0);
#line 73
undef($memory_1);
#line 73
undef($memory_2);
#line 73
undef($memory_3);
#line 73
undef($memory_4);
#line 73
undef($memory_5);
#line 73
return $memory_6;
#line 73
undef($memory_6);
#line 73
goto label_121;
#line 73
label_121:
#line 73
undef($memory_5);
#line 72
$memory_5 = 1;
#line 72
$memory_3 = $memory_3 + $memory_5;
#line 72
undef($memory_5);
#line 74
goto label_99;
#line 74
label_127:
#line 74
undef($memory_4);
#line 75
$memory_4 = c_rt_lib::to_nl(1);
#line 75
undef($memory_0);
#line 75
undef($memory_1);
#line 75
undef($memory_2);
#line 75
undef($memory_3);
#line 75
return $memory_4;
#line 75
undef($memory_4);
#line 75
undef($memory_1);
#line 75
undef($memory_2);
#line 75
undef($memory_3);
#line 75
undef($memory_0);
#line 75
return;
}

sub string_utils::is_number($) {
my $memory_0;my $memory_1;my $memory_2;$memory_0 = $_[0];
#line 79
$memory_1 = "";
#line 79
$memory_1 = $memory_0 . $memory_1;
#line 80
$memory_2 = string_utils::is_integer($memory_1);
#line 80
if (c_rt_lib::check_true($memory_2)) {goto label_5;}
#line 80
$memory_2 = string_utils::is_float($memory_1);
#line 80
label_5:
#line 80
undef($memory_0);
#line 80
undef($memory_1);
#line 80
return $memory_2;
#line 80
undef($memory_2);
#line 80
undef($memory_1);
#line 80
undef($memory_0);
#line 80
return;
}

sub string_utils::get_number($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;$memory_0 = $_[0];
#line 84
$memory_1 = "";
#line 84
$memory_1 = c_rt_lib::to_nl($memory_0 eq $memory_1);
#line 84
if (c_rt_lib::check_true($memory_1)) {goto label_5;}
#line 84
$memory_1 = "-";
#line 84
$memory_1 = c_rt_lib::to_nl($memory_0 eq $memory_1);
#line 84
label_5:
#line 84
$memory_1 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_1));
#line 84
if (c_rt_lib::check_true($memory_1)) {goto label_14;}
#line 84
$memory_2 = c_rt_lib::ov_mk_none('err');
#line 84
undef($memory_0);
#line 84
undef($memory_1);
#line 84
return $memory_2;
#line 84
undef($memory_2);
#line 84
goto label_14;
#line 84
label_14:
#line 84
undef($memory_1);
#line 85
$memory_2 = "";
#line 85
$memory_1 = string::split($memory_2, $memory_0);
#line 85
undef($memory_2);
#line 86
$memory_2 = "";
#line 87
$memory_4 = 0;
#line 87
$memory_3 = $memory_1->[$memory_4];
#line 87
undef($memory_4);
#line 87
$memory_4 = "-";
#line 87
$memory_3 = c_rt_lib::to_nl($memory_3 eq $memory_4);
#line 87
undef($memory_4);
#line 87
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 87
if (c_rt_lib::check_true($memory_3)) {goto label_61;}
#line 88
$memory_5 = 1;
#line 88
$memory_6 = array::len($memory_1);
#line 88
$memory_7 = 1;
#line 88
$memory_6 = $memory_6 - $memory_7;
#line 88
undef($memory_7);
#line 88
$memory_4 = array::subarray($memory_1, $memory_5, $memory_6);
#line 88
undef($memory_6);
#line 88
undef($memory_5);
#line 88
$memory_1 = $memory_4;
#line 88
undef($memory_4);
#line 89
$memory_6 = 0;
#line 89
$memory_5 = $memory_1->[$memory_6];
#line 89
undef($memory_6);
#line 89
$memory_4 = string_utils::is_int($memory_5);
#line 89
undef($memory_5);
#line 89
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 89
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 89
if (c_rt_lib::check_true($memory_4)) {goto label_55;}
#line 89
$memory_5 = c_rt_lib::ov_mk_none('err');
#line 89
undef($memory_0);
#line 89
undef($memory_1);
#line 89
undef($memory_2);
#line 89
undef($memory_3);
#line 89
undef($memory_4);
#line 89
return $memory_5;
#line 89
undef($memory_5);
#line 89
goto label_55;
#line 89
label_55:
#line 89
undef($memory_4);
#line 90
$memory_4 = "-";
#line 90
$memory_2 = $memory_4;
#line 90
undef($memory_4);
#line 91
goto label_61;
#line 91
label_61:
#line 91
undef($memory_3);
#line 92
$memory_3 = c_rt_lib::to_nl(0);
#line 93
$memory_5 = 0;
#line 93
$memory_6 = 1;
#line 93
$memory_7 = c_rt_lib::array_len($memory_1);
#line 93
label_67:
#line 93
$memory_8 = c_rt_lib::to_nl($memory_5 >= $memory_7);
#line 93
if (c_rt_lib::check_true($memory_8)) {goto label_113;}
#line 93
$memory_4 = $memory_1->[$memory_5];
#line 94
$memory_9 = string_utils::is_int($memory_4);
#line 94
$memory_9 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_9));
#line 94
$memory_9 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_9));
#line 94
if (c_rt_lib::check_true($memory_9)) {goto label_108;}
#line 95
$memory_10 = ".";
#line 95
$memory_10 = c_rt_lib::to_nl($memory_4 eq $memory_10);
#line 95
$memory_11 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_10));
#line 95
if (c_rt_lib::check_true($memory_11)) {goto label_81;}
#line 95
$memory_10 = $memory_3;
#line 95
$memory_10 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_10));
#line 95
label_81:
#line 95
undef($memory_11);
#line 95
$memory_10 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_10));
#line 95
if (c_rt_lib::check_true($memory_10)) {goto label_89;}
#line 96
$memory_11 = c_rt_lib::to_nl(1);
#line 96
$memory_3 = $memory_11;
#line 96
undef($memory_11);
#line 97
goto label_105;
#line 97
label_89:
#line 98
$memory_11 = c_rt_lib::ov_mk_none('err');
#line 98
undef($memory_0);
#line 98
undef($memory_1);
#line 98
undef($memory_2);
#line 98
undef($memory_3);
#line 98
undef($memory_4);
#line 98
undef($memory_5);
#line 98
undef($memory_6);
#line 98
undef($memory_7);
#line 98
undef($memory_8);
#line 98
undef($memory_9);
#line 98
undef($memory_10);
#line 98
return $memory_11;
#line 98
undef($memory_11);
#line 99
goto label_105;
#line 99
label_105:
#line 99
undef($memory_10);
#line 100
goto label_108;
#line 100
label_108:
#line 100
undef($memory_9);
#line 101
$memory_2 = $memory_2 . $memory_4;
#line 102
$memory_5 = $memory_5 + $memory_6;
#line 102
goto label_67;
#line 102
label_113:
#line 102
undef($memory_4);
#line 102
undef($memory_5);
#line 102
undef($memory_6);
#line 102
undef($memory_7);
#line 102
undef($memory_8);
#line 103
$memory_4 = ".";
#line 103
$memory_4 = c_rt_lib::to_nl($memory_2 eq $memory_4);
#line 103
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 103
if (c_rt_lib::check_true($memory_4)) {goto label_132;}
#line 103
$memory_5 = c_rt_lib::ov_mk_none('err');
#line 103
undef($memory_0);
#line 103
undef($memory_1);
#line 103
undef($memory_2);
#line 103
undef($memory_3);
#line 103
undef($memory_4);
#line 103
return $memory_5;
#line 103
undef($memory_5);
#line 103
goto label_132;
#line 103
label_132:
#line 103
undef($memory_4);
#line 104
$memory_4 = c_rt_lib::ov_mk_arg('ok', $memory_2);
#line 104
undef($memory_0);
#line 104
undef($memory_1);
#line 104
undef($memory_2);
#line 104
undef($memory_3);
#line 104
return $memory_4;
#line 104
undef($memory_4);
#line 104
undef($memory_1);
#line 104
undef($memory_2);
#line 104
undef($memory_3);
#line 104
undef($memory_0);
#line 104
return;
}

sub string_utils_priv::eat_ws($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;$memory_0 = $_[0];$memory_1 = $_[1];Scalar::Util::weaken($_[1]) if ref($_[1]);
#line 108
label_0:
#line 108
$memory_2 = array::len($memory_0);
#line 108
$memory_2 = c_rt_lib::to_nl($memory_1 < $memory_2);
#line 108
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 108
if (c_rt_lib::check_true($memory_3)) {goto label_8;}
#line 108
$memory_4 = $memory_0->[$memory_1];
#line 108
$memory_2 = string_utils::is_whitespace($memory_4);
#line 108
undef($memory_4);
#line 108
label_8:
#line 108
undef($memory_3);
#line 108
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 108
if (c_rt_lib::check_true($memory_2)) {goto label_16;}
#line 108
$memory_3 = 1;
#line 108
$memory_1 = $memory_1 + $memory_3;
#line 108
undef($memory_3);
#line 108
goto label_0;
#line 108
label_16:
#line 108
undef($memory_2);
#line 109
$memory_2 = array::len($memory_0);
#line 109
$memory_2 = c_rt_lib::to_nl($memory_1 == $memory_2);
#line 109
undef($memory_0);
#line 109
$_[1] = $memory_1;return $memory_2;
#line 109
undef($memory_2);
#line 109
undef($memory_0);
#line 109
$_[1] = $memory_1;return;
$_[1] = $memory_1;}

sub string_utils_priv::get_number($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;$memory_0 = $_[0];$memory_1 = $_[1];Scalar::Util::weaken($_[1]) if ref($_[1]);
#line 113
$memory_2 = "";
#line 114
$memory_3 = $memory_0->[$memory_1];
#line 114
$memory_4 = "-";
#line 114
$memory_3 = c_rt_lib::to_nl($memory_3 eq $memory_4);
#line 114
undef($memory_4);
#line 114
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 114
if (c_rt_lib::check_true($memory_3)) {goto label_14;}
#line 115
$memory_4 = 1;
#line 115
$memory_1 = $memory_1 + $memory_4;
#line 115
undef($memory_4);
#line 116
$memory_4 = "-";
#line 116
$memory_2 = $memory_4;
#line 116
undef($memory_4);
#line 117
goto label_14;
#line 117
label_14:
#line 117
undef($memory_3);
#line 118
$memory_3 = c_rt_lib::to_nl(0);
#line 119
label_17:
#line 119
$memory_4 = array::len($memory_0);
#line 119
$memory_4 = c_rt_lib::to_nl($memory_1 < $memory_4);
#line 119
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 119
if (c_rt_lib::check_true($memory_4)) {goto label_53;}
#line 120
$memory_5 = $memory_0->[$memory_1];
#line 121
$memory_6 = string_utils::is_int($memory_5);
#line 121
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 121
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 121
if (c_rt_lib::check_true($memory_6)) {goto label_45;}
#line 122
$memory_7 = ".";
#line 122
$memory_7 = c_rt_lib::to_nl($memory_5 ne $memory_7);
#line 122
if (c_rt_lib::check_true($memory_7)) {goto label_31;}
#line 122
$memory_7 = $memory_3;
#line 122
label_31:
#line 122
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 122
if (c_rt_lib::check_true($memory_7)) {goto label_39;}
#line 122
undef($memory_5);
#line 122
undef($memory_6);
#line 122
undef($memory_7);
#line 122
goto label_53;
#line 122
goto label_39;
#line 122
label_39:
#line 122
undef($memory_7);
#line 123
$memory_7 = c_rt_lib::to_nl(1);
#line 123
$memory_3 = $memory_7;
#line 123
undef($memory_7);
#line 124
goto label_45;
#line 124
label_45:
#line 124
undef($memory_6);
#line 125
$memory_2 = $memory_2 . $memory_5;
#line 126
$memory_6 = 1;
#line 126
$memory_1 = $memory_1 + $memory_6;
#line 126
undef($memory_6);
#line 126
undef($memory_5);
#line 127
goto label_17;
#line 127
label_53:
#line 127
undef($memory_4);
#line 128
$memory_4 = "";
#line 128
$memory_4 = c_rt_lib::to_nl($memory_2 eq $memory_4);
#line 128
if (c_rt_lib::check_true($memory_4)) {goto label_60;}
#line 128
$memory_4 = "-";
#line 128
$memory_4 = c_rt_lib::to_nl($memory_2 eq $memory_4);
#line 128
label_60:
#line 128
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 128
if (c_rt_lib::check_true($memory_4)) {goto label_71;}
#line 128
$memory_5 = c_rt_lib::ov_mk_none('err');
#line 128
undef($memory_0);
#line 128
undef($memory_2);
#line 128
undef($memory_3);
#line 128
undef($memory_4);
#line 128
$_[1] = $memory_1;return $memory_5;
#line 128
undef($memory_5);
#line 128
goto label_71;
#line 128
label_71:
#line 128
undef($memory_4);
#line 129
$memory_4 = c_rt_lib::ov_mk_arg('ok', $memory_2);
#line 129
undef($memory_0);
#line 129
undef($memory_2);
#line 129
undef($memory_3);
#line 129
$_[1] = $memory_1;return $memory_4;
#line 129
undef($memory_4);
#line 129
undef($memory_2);
#line 129
undef($memory_3);
#line 129
undef($memory_0);
#line 129
$_[1] = $memory_1;return;
$_[1] = $memory_1;}

sub string_utils_priv::cal_expr($$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;$memory_0 = $_[0];$memory_1 = $_[1];Scalar::Util::weaken($_[1]) if ref($_[1]);$memory_2 = $_[2];
#line 133
$memory_3 = string_utils_priv::eat_ws($memory_0, $memory_1);
#line 133
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 133
if (c_rt_lib::check_true($memory_3)) {goto label_10;}
#line 133
$memory_4 = c_rt_lib::ov_mk_none('err');
#line 133
undef($memory_0);
#line 133
undef($memory_2);
#line 133
undef($memory_3);
#line 133
$_[1] = $memory_1;return $memory_4;
#line 133
undef($memory_4);
#line 133
goto label_10;
#line 133
label_10:
#line 133
undef($memory_3);
#line 135
$memory_4 = $memory_0->[$memory_1];
#line 135
$memory_5 = "(";
#line 135
$memory_4 = c_rt_lib::to_nl($memory_4 eq $memory_5);
#line 135
undef($memory_5);
#line 135
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 135
if (c_rt_lib::check_true($memory_4)) {goto label_72;}
#line 136
$memory_5 = 1;
#line 136
$memory_1 = $memory_1 + $memory_5;
#line 136
undef($memory_5);
#line 137
$memory_7 = 0;
#line 137
$memory_6 = string_utils_priv::cal_expr($memory_0, $memory_1, $memory_7);
#line 137
undef($memory_7);
#line 137
$memory_5 = c_rt_lib::ov_is($memory_6, 'ok');
#line 137
if (c_rt_lib::check_true($memory_5)) {goto label_32;}
#line 137
undef($memory_0);
#line 137
undef($memory_2);
#line 137
undef($memory_3);
#line 137
undef($memory_4);
#line 137
undef($memory_5);
#line 137
$_[1] = $memory_1;return $memory_6;
#line 137
label_32:
#line 137
$memory_3 = c_rt_lib::ov_as($memory_6, 'ok');
#line 137
undef($memory_5);
#line 137
undef($memory_6);
#line 138
$memory_5 = string_utils_priv::eat_ws($memory_0, $memory_1);
#line 138
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 138
if (c_rt_lib::check_true($memory_5)) {goto label_48;}
#line 138
$memory_6 = c_rt_lib::ov_mk_none('err');
#line 138
undef($memory_0);
#line 138
undef($memory_2);
#line 138
undef($memory_3);
#line 138
undef($memory_4);
#line 138
undef($memory_5);
#line 138
$_[1] = $memory_1;return $memory_6;
#line 138
undef($memory_6);
#line 138
goto label_48;
#line 138
label_48:
#line 138
undef($memory_5);
#line 139
$memory_5 = $memory_0->[$memory_1];
#line 139
$memory_6 = ")";
#line 139
$memory_5 = c_rt_lib::to_nl($memory_5 eq $memory_6);
#line 139
undef($memory_6);
#line 139
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 139
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 139
if (c_rt_lib::check_true($memory_5)) {goto label_66;}
#line 139
$memory_6 = c_rt_lib::ov_mk_none('err');
#line 139
undef($memory_0);
#line 139
undef($memory_2);
#line 139
undef($memory_3);
#line 139
undef($memory_4);
#line 139
undef($memory_5);
#line 139
$_[1] = $memory_1;return $memory_6;
#line 139
undef($memory_6);
#line 139
goto label_66;
#line 139
label_66:
#line 139
undef($memory_5);
#line 140
$memory_5 = 1;
#line 140
$memory_1 = $memory_1 + $memory_5;
#line 140
undef($memory_5);
#line 141
goto label_87;
#line 141
label_72:
#line 142
$memory_6 = string_utils_priv::get_number($memory_0, $memory_1);
#line 142
$memory_5 = c_rt_lib::ov_is($memory_6, 'ok');
#line 142
if (c_rt_lib::check_true($memory_5)) {goto label_82;}
#line 142
undef($memory_0);
#line 142
undef($memory_2);
#line 142
undef($memory_3);
#line 142
undef($memory_4);
#line 142
undef($memory_5);
#line 142
$_[1] = $memory_1;return $memory_6;
#line 142
label_82:
#line 142
$memory_3 = c_rt_lib::ov_as($memory_6, 'ok');
#line 142
undef($memory_5);
#line 142
undef($memory_6);
#line 143
goto label_87;
#line 143
label_87:
#line 143
undef($memory_4);
#line 144
label_89:
#line 145
$memory_4 = string_utils_priv::eat_ws($memory_0, $memory_1);
#line 145
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 145
if (c_rt_lib::check_true($memory_4)) {goto label_101;}
#line 145
$memory_5 = c_rt_lib::ov_mk_arg('ok', $memory_3);
#line 145
undef($memory_0);
#line 145
undef($memory_2);
#line 145
undef($memory_3);
#line 145
undef($memory_4);
#line 145
$_[1] = $memory_1;return $memory_5;
#line 145
undef($memory_5);
#line 145
goto label_101;
#line 145
label_101:
#line 145
undef($memory_4);
#line 146
$memory_4 = $memory_0->[$memory_1];
#line 147
$memory_5 = "*";
#line 147
$memory_5 = c_rt_lib::to_nl($memory_4 eq $memory_5);
#line 147
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 147
if (c_rt_lib::check_true($memory_5)) {goto label_147;}
#line 148
$memory_6 = 5;
#line 148
$memory_6 = c_rt_lib::to_nl($memory_2 >= $memory_6);
#line 148
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 148
if (c_rt_lib::check_true($memory_6)) {goto label_122;}
#line 148
$memory_7 = c_rt_lib::ov_mk_arg('ok', $memory_3);
#line 148
undef($memory_0);
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
$_[1] = $memory_1;return $memory_7;
#line 148
undef($memory_7);
#line 148
goto label_122;
#line 148
label_122:
#line 148
undef($memory_6);
#line 149
$memory_6 = 1;
#line 149
$memory_1 = $memory_1 + $memory_6;
#line 149
undef($memory_6);
#line 150
$memory_9 = 5;
#line 150
$memory_8 = string_utils_priv::cal_expr($memory_0, $memory_1, $memory_9);
#line 150
undef($memory_9);
#line 150
$memory_7 = c_rt_lib::ov_is($memory_8, 'ok');
#line 150
if (c_rt_lib::check_true($memory_7)) {goto label_140;}
#line 150
undef($memory_0);
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
$_[1] = $memory_1;return $memory_8;
#line 150
label_140:
#line 150
$memory_6 = c_rt_lib::ov_as($memory_8, 'ok');
#line 150
undef($memory_7);
#line 150
undef($memory_8);
#line 151
$memory_3 = $memory_3 * $memory_6;
#line 151
undef($memory_6);
#line 152
goto label_367;
#line 152
label_147:
#line 152
$memory_5 = "/";
#line 152
$memory_5 = c_rt_lib::to_nl($memory_4 eq $memory_5);
#line 152
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 152
if (c_rt_lib::check_true($memory_5)) {goto label_193;}
#line 153
$memory_6 = 5;
#line 153
$memory_6 = c_rt_lib::to_nl($memory_2 >= $memory_6);
#line 153
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 153
if (c_rt_lib::check_true($memory_6)) {goto label_166;}
#line 153
$memory_7 = c_rt_lib::ov_mk_arg('ok', $memory_3);
#line 153
undef($memory_0);
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
$_[1] = $memory_1;return $memory_7;
#line 153
undef($memory_7);
#line 153
goto label_166;
#line 153
label_166:
#line 153
undef($memory_6);
#line 154
$memory_6 = 1;
#line 154
$memory_1 = $memory_1 + $memory_6;
#line 154
undef($memory_6);
#line 155
$memory_9 = 5;
#line 155
$memory_8 = string_utils_priv::cal_expr($memory_0, $memory_1, $memory_9);
#line 155
undef($memory_9);
#line 155
$memory_7 = c_rt_lib::ov_is($memory_8, 'ok');
#line 155
if (c_rt_lib::check_true($memory_7)) {goto label_184;}
#line 155
undef($memory_0);
#line 155
undef($memory_2);
#line 155
undef($memory_3);
#line 155
undef($memory_4);
#line 155
undef($memory_5);
#line 155
undef($memory_6);
#line 155
undef($memory_7);
#line 155
$_[1] = $memory_1;return $memory_8;
#line 155
label_184:
#line 155
$memory_6 = c_rt_lib::ov_as($memory_8, 'ok');
#line 155
undef($memory_7);
#line 155
undef($memory_8);
#line 156
$memory_7 = $memory_3 / $memory_6;
#line 156
$memory_3 = $memory_7;
#line 156
undef($memory_7);
#line 156
undef($memory_6);
#line 157
goto label_367;
#line 157
label_193:
#line 157
$memory_5 = "%";
#line 157
$memory_5 = c_rt_lib::to_nl($memory_4 eq $memory_5);
#line 157
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 157
if (c_rt_lib::check_true($memory_5)) {goto label_239;}
#line 158
$memory_6 = 5;
#line 158
$memory_6 = c_rt_lib::to_nl($memory_2 >= $memory_6);
#line 158
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 158
if (c_rt_lib::check_true($memory_6)) {goto label_212;}
#line 158
$memory_7 = c_rt_lib::ov_mk_arg('ok', $memory_3);
#line 158
undef($memory_0);
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
$_[1] = $memory_1;return $memory_7;
#line 158
undef($memory_7);
#line 158
goto label_212;
#line 158
label_212:
#line 158
undef($memory_6);
#line 159
$memory_6 = 1;
#line 159
$memory_1 = $memory_1 + $memory_6;
#line 159
undef($memory_6);
#line 160
$memory_9 = 5;
#line 160
$memory_8 = string_utils_priv::cal_expr($memory_0, $memory_1, $memory_9);
#line 160
undef($memory_9);
#line 160
$memory_7 = c_rt_lib::ov_is($memory_8, 'ok');
#line 160
if (c_rt_lib::check_true($memory_7)) {goto label_230;}
#line 160
undef($memory_0);
#line 160
undef($memory_2);
#line 160
undef($memory_3);
#line 160
undef($memory_4);
#line 160
undef($memory_5);
#line 160
undef($memory_6);
#line 160
undef($memory_7);
#line 160
$_[1] = $memory_1;return $memory_8;
#line 160
label_230:
#line 160
$memory_6 = c_rt_lib::ov_as($memory_8, 'ok');
#line 160
undef($memory_7);
#line 160
undef($memory_8);
#line 161
$memory_7 = $memory_3 % $memory_6;
#line 161
$memory_3 = $memory_7;
#line 161
undef($memory_7);
#line 161
undef($memory_6);
#line 162
goto label_367;
#line 162
label_239:
#line 162
$memory_5 = "+";
#line 162
$memory_5 = c_rt_lib::to_nl($memory_4 eq $memory_5);
#line 162
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 162
if (c_rt_lib::check_true($memory_5)) {goto label_283;}
#line 163
$memory_6 = 2;
#line 163
$memory_6 = c_rt_lib::to_nl($memory_2 >= $memory_6);
#line 163
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 163
if (c_rt_lib::check_true($memory_6)) {goto label_258;}
#line 163
$memory_7 = c_rt_lib::ov_mk_arg('ok', $memory_3);
#line 163
undef($memory_0);
#line 163
undef($memory_2);
#line 163
undef($memory_3);
#line 163
undef($memory_4);
#line 163
undef($memory_5);
#line 163
undef($memory_6);
#line 163
$_[1] = $memory_1;return $memory_7;
#line 163
undef($memory_7);
#line 163
goto label_258;
#line 163
label_258:
#line 163
undef($memory_6);
#line 164
$memory_6 = 1;
#line 164
$memory_1 = $memory_1 + $memory_6;
#line 164
undef($memory_6);
#line 165
$memory_9 = 2;
#line 165
$memory_8 = string_utils_priv::cal_expr($memory_0, $memory_1, $memory_9);
#line 165
undef($memory_9);
#line 165
$memory_7 = c_rt_lib::ov_is($memory_8, 'ok');
#line 165
if (c_rt_lib::check_true($memory_7)) {goto label_276;}
#line 165
undef($memory_0);
#line 165
undef($memory_2);
#line 165
undef($memory_3);
#line 165
undef($memory_4);
#line 165
undef($memory_5);
#line 165
undef($memory_6);
#line 165
undef($memory_7);
#line 165
$_[1] = $memory_1;return $memory_8;
#line 165
label_276:
#line 165
$memory_6 = c_rt_lib::ov_as($memory_8, 'ok');
#line 165
undef($memory_7);
#line 165
undef($memory_8);
#line 166
$memory_3 = $memory_3 + $memory_6;
#line 166
undef($memory_6);
#line 167
goto label_367;
#line 167
label_283:
#line 167
$memory_5 = "-";
#line 167
$memory_5 = c_rt_lib::to_nl($memory_4 eq $memory_5);
#line 167
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 167
if (c_rt_lib::check_true($memory_5)) {goto label_327;}
#line 168
$memory_6 = 2;
#line 168
$memory_6 = c_rt_lib::to_nl($memory_2 >= $memory_6);
#line 168
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 168
if (c_rt_lib::check_true($memory_6)) {goto label_302;}
#line 168
$memory_7 = c_rt_lib::ov_mk_arg('ok', $memory_3);
#line 168
undef($memory_0);
#line 168
undef($memory_2);
#line 168
undef($memory_3);
#line 168
undef($memory_4);
#line 168
undef($memory_5);
#line 168
undef($memory_6);
#line 168
$_[1] = $memory_1;return $memory_7;
#line 168
undef($memory_7);
#line 168
goto label_302;
#line 168
label_302:
#line 168
undef($memory_6);
#line 169
$memory_6 = 1;
#line 169
$memory_1 = $memory_1 + $memory_6;
#line 169
undef($memory_6);
#line 170
$memory_9 = 2;
#line 170
$memory_8 = string_utils_priv::cal_expr($memory_0, $memory_1, $memory_9);
#line 170
undef($memory_9);
#line 170
$memory_7 = c_rt_lib::ov_is($memory_8, 'ok');
#line 170
if (c_rt_lib::check_true($memory_7)) {goto label_320;}
#line 170
undef($memory_0);
#line 170
undef($memory_2);
#line 170
undef($memory_3);
#line 170
undef($memory_4);
#line 170
undef($memory_5);
#line 170
undef($memory_6);
#line 170
undef($memory_7);
#line 170
$_[1] = $memory_1;return $memory_8;
#line 170
label_320:
#line 170
$memory_6 = c_rt_lib::ov_as($memory_8, 'ok');
#line 170
undef($memory_7);
#line 170
undef($memory_8);
#line 171
$memory_3 = $memory_3 - $memory_6;
#line 171
undef($memory_6);
#line 172
goto label_367;
#line 172
label_327:
#line 172
$memory_5 = ")";
#line 172
$memory_5 = c_rt_lib::to_nl($memory_4 eq $memory_5);
#line 172
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 172
if (c_rt_lib::check_true($memory_5)) {goto label_357;}
#line 173
$memory_6 = 0;
#line 173
$memory_6 = c_rt_lib::to_nl($memory_2 < $memory_6);
#line 173
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 173
if (c_rt_lib::check_true($memory_6)) {goto label_346;}
#line 173
$memory_7 = c_rt_lib::ov_mk_none('err');
#line 173
undef($memory_0);
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
$_[1] = $memory_1;return $memory_7;
#line 173
undef($memory_7);
#line 173
goto label_346;
#line 173
label_346:
#line 173
undef($memory_6);
#line 174
$memory_6 = c_rt_lib::ov_mk_arg('ok', $memory_3);
#line 174
undef($memory_0);
#line 174
undef($memory_2);
#line 174
undef($memory_3);
#line 174
undef($memory_4);
#line 174
undef($memory_5);
#line 174
$_[1] = $memory_1;return $memory_6;
#line 174
undef($memory_6);
#line 175
goto label_367;
#line 175
label_357:
#line 176
$memory_6 = c_rt_lib::ov_mk_none('err');
#line 176
undef($memory_0);
#line 176
undef($memory_2);
#line 176
undef($memory_3);
#line 176
undef($memory_4);
#line 176
undef($memory_5);
#line 176
$_[1] = $memory_1;return $memory_6;
#line 176
undef($memory_6);
#line 177
goto label_367;
#line 177
label_367:
#line 177
undef($memory_5);
#line 177
undef($memory_4);
#line 144
goto label_89;
#line 179
$memory_4 = [];
#line 179
die(dfile::ssave($memory_4));
#line 179
undef($memory_3);
#line 179
undef($memory_4);
#line 179
undef($memory_0);
#line 179
undef($memory_2);
#line 179
$_[1] = $memory_1;return;
$_[1] = $memory_1;}

sub string_utils::eval_number($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;$memory_0 = $_[0];
#line 183
$memory_1 = "";
#line 183
$memory_1 = c_rt_lib::to_nl($memory_0 eq $memory_1);
#line 183
$memory_1 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_1));
#line 183
if (c_rt_lib::check_true($memory_1)) {goto label_7;}
#line 183
undef($memory_1);
#line 183
return $memory_0;
#line 183
goto label_7;
#line 183
label_7:
#line 183
undef($memory_1);
#line 184
$memory_2 = "";
#line 184
$memory_1 = string::split($memory_2, $memory_0);
#line 184
undef($memory_2);
#line 185
$memory_3 = 0;
#line 185
$memory_2 = $memory_1->[$memory_3];
#line 185
undef($memory_3);
#line 185
$memory_3 = "=";
#line 185
$memory_2 = c_rt_lib::to_nl($memory_2 ne $memory_3);
#line 185
undef($memory_3);
#line 185
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 185
if (c_rt_lib::check_true($memory_2)) {goto label_24;}
#line 185
undef($memory_1);
#line 185
undef($memory_2);
#line 185
return $memory_0;
#line 185
goto label_24;
#line 185
label_24:
#line 185
undef($memory_2);
#line 186
$memory_3 = 1;
#line 186
$memory_4 = array::len($memory_1);
#line 186
$memory_5 = 1;
#line 186
$memory_4 = $memory_4 - $memory_5;
#line 186
undef($memory_5);
#line 186
$memory_2 = array::subarray($memory_1, $memory_3, $memory_4);
#line 186
undef($memory_4);
#line 186
undef($memory_3);
#line 186
$memory_1 = $memory_2;
#line 186
undef($memory_2);
#line 187
$memory_2 = "";
#line 188
$memory_4 = 0;
#line 188
$memory_5 = 1;
#line 188
$memory_6 = c_rt_lib::array_len($memory_1);
#line 188
label_40:
#line 188
$memory_7 = c_rt_lib::to_nl($memory_4 >= $memory_6);
#line 188
if (c_rt_lib::check_true($memory_7)) {goto label_91;}
#line 188
$memory_3 = $memory_1->[$memory_4];
#line 191
$memory_8 = string_utils::is_int($memory_3);
#line 191
if (c_rt_lib::check_true($memory_8)) {goto label_48;}
#line 191
$memory_8 = "-";
#line 191
$memory_8 = c_rt_lib::to_nl($memory_3 eq $memory_8);
#line 191
label_48:
#line 191
if (c_rt_lib::check_true($memory_8)) {goto label_52;}
#line 191
$memory_8 = ".";
#line 191
$memory_8 = c_rt_lib::to_nl($memory_3 eq $memory_8);
#line 191
label_52:
#line 191
if (c_rt_lib::check_true($memory_8)) {goto label_56;}
#line 191
$memory_8 = "+";
#line 191
$memory_8 = c_rt_lib::to_nl($memory_3 eq $memory_8);
#line 191
label_56:
#line 191
if (c_rt_lib::check_true($memory_8)) {goto label_60;}
#line 191
$memory_8 = "/";
#line 191
$memory_8 = c_rt_lib::to_nl($memory_3 eq $memory_8);
#line 191
label_60:
#line 191
if (c_rt_lib::check_true($memory_8)) {goto label_64;}
#line 191
$memory_8 = "(";
#line 191
$memory_8 = c_rt_lib::to_nl($memory_3 eq $memory_8);
#line 191
label_64:
#line 191
if (c_rt_lib::check_true($memory_8)) {goto label_68;}
#line 192
$memory_8 = ")";
#line 192
$memory_8 = c_rt_lib::to_nl($memory_3 eq $memory_8);
#line 192
label_68:
#line 192
if (c_rt_lib::check_true($memory_8)) {goto label_72;}
#line 192
$memory_8 = "*";
#line 192
$memory_8 = c_rt_lib::to_nl($memory_3 eq $memory_8);
#line 192
label_72:
#line 192
$memory_8 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 192
$memory_8 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 192
if (c_rt_lib::check_true($memory_8)) {goto label_86;}
#line 189
undef($memory_1);
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
undef($memory_8);
#line 189
return $memory_0;
#line 189
goto label_86;
#line 189
label_86:
#line 189
undef($memory_8);
#line 193
$memory_2 = $memory_2 . $memory_3;
#line 194
$memory_4 = $memory_4 + $memory_5;
#line 194
goto label_40;
#line 194
label_91:
#line 194
undef($memory_3);
#line 194
undef($memory_4);
#line 194
undef($memory_5);
#line 194
undef($memory_6);
#line 194
undef($memory_7);
#line 195
$memory_4 = "";
#line 195
$memory_3 = string::split($memory_4, $memory_2);
#line 195
undef($memory_4);
#line 196
$memory_4 = 0;
#line 197
$memory_6 = 1;
#line 197
$memory_6 = -$memory_6;
#line 197
$memory_5 = string_utils_priv::cal_expr($memory_3, $memory_4, $memory_6);
#line 197
undef($memory_6);
#line 197
$memory_6 = c_rt_lib::ov_is($memory_5, 'err');
#line 197
if (c_rt_lib::check_true($memory_6)) {goto label_112;}
#line 199
$memory_6 = c_rt_lib::ov_is($memory_5, 'ok');
#line 199
if (c_rt_lib::check_true($memory_6)) {goto label_124;}
#line 199
$memory_6 = "NOMATCHALERT";
#line 199
$memory_6 = [$memory_6,$memory_5];
#line 199
die(dfile::ssave($memory_6));
#line 197
label_112:
#line 198
$memory_7 = "";
#line 198
undef($memory_0);
#line 198
undef($memory_1);
#line 198
undef($memory_2);
#line 198
undef($memory_3);
#line 198
undef($memory_4);
#line 198
undef($memory_5);
#line 198
undef($memory_6);
#line 198
return $memory_7;
#line 198
undef($memory_7);
#line 199
goto label_136;
#line 199
label_124:
#line 199
$memory_7 = c_rt_lib::ov_as($memory_5, 'ok');
#line 200
undef($memory_0);
#line 200
undef($memory_1);
#line 200
undef($memory_2);
#line 200
undef($memory_3);
#line 200
undef($memory_4);
#line 200
undef($memory_5);
#line 200
undef($memory_6);
#line 200
return $memory_7;
#line 200
undef($memory_7);
#line 201
goto label_136;
#line 201
label_136:
#line 201
undef($memory_5);
#line 201
undef($memory_6);
#line 201
undef($memory_1);
#line 201
undef($memory_2);
#line 201
undef($memory_3);
#line 201
undef($memory_4);
#line 201
undef($memory_0);
#line 201
return;
}

sub string_utils::get_date($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;$memory_0 = $_[0];$memory_1 = $_[1];
#line 208
$memory_2 = string::split($memory_1, $memory_0);
#line 211
$memory_3 = array::len($memory_2);
#line 211
$memory_7 = 3;
#line 211
$memory_3 = c_rt_lib::to_nl($memory_3 == $memory_7);
#line 211
undef($memory_7);
#line 211
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 211
if (c_rt_lib::check_true($memory_6)) {goto label_12;}
#line 212
$memory_8 = 0;
#line 212
$memory_7 = $memory_2->[$memory_8];
#line 212
undef($memory_8);
#line 212
$memory_3 = string_utils::is_integer_possibly_leading_zeros($memory_7);
#line 212
undef($memory_7);
#line 212
label_12:
#line 212
undef($memory_6);
#line 212
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 212
if (c_rt_lib::check_true($memory_5)) {goto label_21;}
#line 213
$memory_7 = 1;
#line 213
$memory_6 = $memory_2->[$memory_7];
#line 213
undef($memory_7);
#line 213
$memory_3 = string_utils::is_integer_possibly_leading_zeros($memory_6);
#line 213
undef($memory_6);
#line 213
label_21:
#line 213
undef($memory_5);
#line 213
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 213
if (c_rt_lib::check_true($memory_4)) {goto label_30;}
#line 214
$memory_6 = 2;
#line 214
$memory_5 = $memory_2->[$memory_6];
#line 214
undef($memory_6);
#line 214
$memory_3 = string_utils::is_integer_possibly_leading_zeros($memory_5);
#line 214
undef($memory_5);
#line 214
label_30:
#line 214
undef($memory_4);
#line 214
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 214
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 214
if (c_rt_lib::check_true($memory_3)) {goto label_44;}
#line 209
$memory_4 = "";
#line 209
$memory_4 = c_rt_lib::ov_mk_arg('err', $memory_4);
#line 209
undef($memory_0);
#line 209
undef($memory_1);
#line 209
undef($memory_2);
#line 209
undef($memory_3);
#line 209
return $memory_4;
#line 209
undef($memory_4);
#line 209
goto label_44;
#line 209
label_44:
#line 209
undef($memory_3);
#line 215
$memory_5 = 0;
#line 215
$memory_4 = $memory_2->[$memory_5];
#line 215
undef($memory_5);
#line 215
$memory_6 = 1;
#line 215
$memory_5 = $memory_2->[$memory_6];
#line 215
undef($memory_6);
#line 215
$memory_7 = 2;
#line 215
$memory_6 = $memory_2->[$memory_7];
#line 215
undef($memory_7);
#line 215
$memory_3 = {first => $memory_4,second => $memory_5,third => $memory_6,};
#line 215
undef($memory_4);
#line 215
undef($memory_5);
#line 215
undef($memory_6);
#line 215
$memory_3 = c_rt_lib::ov_mk_arg('ok', $memory_3);
#line 215
undef($memory_0);
#line 215
undef($memory_1);
#line 215
undef($memory_2);
#line 215
return $memory_3;
#line 215
undef($memory_3);
#line 215
undef($memory_2);
#line 215
undef($memory_0);
#line 215
undef($memory_1);
#line 215
return;
}

sub string_utils::change($$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;$memory_0 = $_[0];$memory_1 = $_[1];$memory_2 = $_[2];
#line 219
$memory_3 = "";
#line 220
$memory_5 = "";
#line 220
$memory_4 = string::split($memory_5, $memory_0);
#line 220
undef($memory_5);
#line 220
$memory_6 = 0;
#line 220
$memory_7 = 1;
#line 220
$memory_8 = c_rt_lib::array_len($memory_4);
#line 220
label_7:
#line 220
$memory_9 = c_rt_lib::to_nl($memory_6 >= $memory_8);
#line 220
if (c_rt_lib::check_true($memory_9)) {goto label_22;}
#line 220
$memory_5 = $memory_4->[$memory_6];
#line 221
$memory_10 = c_rt_lib::to_nl($memory_5 eq $memory_1);
#line 221
if (c_rt_lib::check_true($memory_10)) {goto label_15;}
#line 221
$memory_10 = $memory_5;
#line 221
goto label_17;
#line 221
label_15:
#line 221
$memory_10 = $memory_2;
#line 221
label_17:
#line 221
$memory_3 = $memory_3 . $memory_10;
#line 221
undef($memory_10);
#line 222
$memory_6 = $memory_6 + $memory_7;
#line 222
goto label_7;
#line 222
label_22:
#line 222
undef($memory_4);
#line 222
undef($memory_5);
#line 222
undef($memory_6);
#line 222
undef($memory_7);
#line 222
undef($memory_8);
#line 222
undef($memory_9);
#line 223
undef($memory_0);
#line 223
undef($memory_1);
#line 223
undef($memory_2);
#line 223
return $memory_3;
#line 223
undef($memory_3);
#line 223
undef($memory_0);
#line 223
undef($memory_1);
#line 223
undef($memory_2);
#line 223
return;
}

sub string_utils::erase_tail_whitespace($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;$memory_0 = $_[0];
#line 227
$memory_1 = "";
#line 227
$memory_1 = c_rt_lib::to_nl($memory_0 eq $memory_1);
#line 227
$memory_1 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_1));
#line 227
if (c_rt_lib::check_true($memory_1)) {goto label_10;}
#line 227
$memory_2 = "";
#line 227
undef($memory_0);
#line 227
undef($memory_1);
#line 227
return $memory_2;
#line 227
undef($memory_2);
#line 227
goto label_10;
#line 227
label_10:
#line 227
undef($memory_1);
#line 228
$memory_1 = string::length($memory_0);
#line 228
$memory_2 = 1;
#line 228
$memory_1 = $memory_1 - $memory_2;
#line 228
undef($memory_2);
#line 229
label_16:
#line 229
$memory_2 = 0;
#line 229
$memory_2 = c_rt_lib::to_nl($memory_1 >= $memory_2);
#line 229
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 229
if (c_rt_lib::check_true($memory_3)) {goto label_26;}
#line 229
$memory_5 = 1;
#line 229
$memory_4 = string::substr($memory_0, $memory_1, $memory_5);
#line 229
undef($memory_5);
#line 229
$memory_2 = string_utils::is_whitespace($memory_4);
#line 229
undef($memory_4);
#line 229
label_26:
#line 229
undef($memory_3);
#line 229
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 229
if (c_rt_lib::check_true($memory_2)) {goto label_34;}
#line 230
$memory_3 = 1;
#line 230
$memory_1 = $memory_1 - $memory_3;
#line 230
undef($memory_3);
#line 231
goto label_16;
#line 231
label_34:
#line 231
undef($memory_2);
#line 232
$memory_3 = 0;
#line 232
$memory_4 = 1;
#line 232
$memory_4 = $memory_1 + $memory_4;
#line 232
$memory_2 = string::substr($memory_0, $memory_3, $memory_4);
#line 232
undef($memory_4);
#line 232
undef($memory_3);
#line 232
undef($memory_0);
#line 232
undef($memory_1);
#line 232
return $memory_2;
#line 232
undef($memory_2);
#line 232
undef($memory_1);
#line 232
undef($memory_0);
#line 232
return;
}

sub string_utils::erase_tail_zeroes($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;$memory_0 = $_[0];
#line 236
$memory_1 = "";
#line 236
$memory_1 = c_rt_lib::to_nl($memory_0 eq $memory_1);
#line 236
$memory_1 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_1));
#line 236
if (c_rt_lib::check_true($memory_1)) {goto label_7;}
#line 236
undef($memory_1);
#line 236
return $memory_0;
#line 236
goto label_7;
#line 236
label_7:
#line 236
undef($memory_1);
#line 237
$memory_1 = string::to_array($memory_0);
#line 238
$memory_2 = array::len($memory_1);
#line 238
$memory_3 = 1;
#line 238
$memory_2 = $memory_2 - $memory_3;
#line 238
undef($memory_3);
#line 239
label_14:
#line 239
$memory_3 = 0;
#line 239
$memory_3 = c_rt_lib::to_nl($memory_2 >= $memory_3);
#line 239
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 239
if (c_rt_lib::check_true($memory_4)) {goto label_23;}
#line 239
$memory_3 = $memory_1->[$memory_2];
#line 239
$memory_5 = 0;
#line 239
$memory_3 = c_rt_lib::to_nl($memory_3 eq $memory_5);
#line 239
undef($memory_5);
#line 239
label_23:
#line 239
undef($memory_4);
#line 239
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 239
if (c_rt_lib::check_true($memory_3)) {goto label_31;}
#line 240
$memory_4 = 1;
#line 240
$memory_2 = $memory_2 - $memory_4;
#line 240
undef($memory_4);
#line 241
goto label_14;
#line 241
label_31:
#line 241
undef($memory_3);
#line 242
$memory_4 = 0;
#line 242
$memory_5 = 1;
#line 242
$memory_5 = $memory_2 + $memory_5;
#line 242
$memory_3 = string::substr($memory_0, $memory_4, $memory_5);
#line 242
undef($memory_5);
#line 242
undef($memory_4);
#line 242
undef($memory_0);
#line 242
undef($memory_1);
#line 242
undef($memory_2);
#line 242
return $memory_3;
#line 242
undef($memory_3);
#line 242
undef($memory_1);
#line 242
undef($memory_2);
#line 242
undef($memory_0);
#line 242
return;
}

sub string_utils::erase_leading_zeroes($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;$memory_0 = $_[0];
#line 246
$memory_1 = "";
#line 246
$memory_1 = c_rt_lib::to_nl($memory_0 eq $memory_1);
#line 246
$memory_1 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_1));
#line 246
if (c_rt_lib::check_true($memory_1)) {goto label_7;}
#line 246
undef($memory_1);
#line 246
return $memory_0;
#line 246
goto label_7;
#line 246
label_7:
#line 246
undef($memory_1);
#line 247
$memory_1 = string::to_array($memory_0);
#line 248
$memory_2 = 0;
#line 249
label_11:
#line 249
$memory_3 = array::len($memory_1);
#line 249
$memory_3 = c_rt_lib::to_nl($memory_2 < $memory_3);
#line 249
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 249
if (c_rt_lib::check_true($memory_4)) {goto label_20;}
#line 249
$memory_3 = $memory_1->[$memory_2];
#line 249
$memory_5 = 0;
#line 249
$memory_3 = c_rt_lib::to_nl($memory_3 eq $memory_5);
#line 249
undef($memory_5);
#line 249
label_20:
#line 249
undef($memory_4);
#line 249
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 249
if (c_rt_lib::check_true($memory_3)) {goto label_28;}
#line 250
$memory_4 = 1;
#line 250
$memory_2 = $memory_2 + $memory_4;
#line 250
undef($memory_4);
#line 251
goto label_11;
#line 251
label_28:
#line 251
undef($memory_3);
#line 252
$memory_3 = array::len($memory_1);
#line 252
$memory_3 = c_rt_lib::to_nl($memory_2 != $memory_3);
#line 252
if (c_rt_lib::check_true($memory_3)) {goto label_35;}
#line 254
$memory_3 = 0;
#line 254
goto label_37;
#line 254
label_35:
#line 253
$memory_3 = string::substr2($memory_0, $memory_2);
#line 253
label_37:
#line 253
undef($memory_0);
#line 253
undef($memory_1);
#line 253
undef($memory_2);
#line 253
return $memory_3;
#line 253
undef($memory_3);
#line 253
undef($memory_1);
#line 253
undef($memory_2);
#line 253
undef($memory_0);
#line 253
return;
}

sub string_utils::char2hex($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;my $memory_13;my $memory_14;my $memory_15;my $memory_16;my $memory_17;$memory_0 = $_[0];
#line 258
$memory_2 = 0;
#line 258
$memory_3 = 1;
#line 258
$memory_4 = 2;
#line 258
$memory_5 = 3;
#line 258
$memory_6 = 4;
#line 258
$memory_7 = 5;
#line 258
$memory_8 = 6;
#line 258
$memory_9 = 7;
#line 258
$memory_10 = 8;
#line 258
$memory_11 = 9;
#line 258
$memory_12 = "a";
#line 258
$memory_13 = "b";
#line 258
$memory_14 = "c";
#line 258
$memory_15 = "d";
#line 258
$memory_16 = "e";
#line 258
$memory_17 = "f";
#line 258
$memory_1 = [$memory_2,$memory_3,$memory_4,$memory_5,$memory_6,$memory_7,$memory_8,$memory_9,$memory_10,$memory_11,$memory_12,$memory_13,$memory_14,$memory_15,$memory_16,$memory_17];
#line 258
undef($memory_2);
#line 258
undef($memory_3);
#line 258
undef($memory_4);
#line 258
undef($memory_5);
#line 258
undef($memory_6);
#line 258
undef($memory_7);
#line 258
undef($memory_8);
#line 258
undef($memory_9);
#line 258
undef($memory_10);
#line 258
undef($memory_11);
#line 258
undef($memory_12);
#line 258
undef($memory_13);
#line 258
undef($memory_14);
#line 258
undef($memory_15);
#line 258
undef($memory_16);
#line 258
undef($memory_17);
#line 259
$memory_3 = 16;
#line 259
$memory_3 = $memory_0 / $memory_3;
#line 259
$memory_2 = $memory_1->[$memory_3];
#line 259
undef($memory_3);
#line 259
$memory_4 = 16;
#line 259
$memory_4 = $memory_0 % $memory_4;
#line 259
$memory_3 = $memory_1->[$memory_4];
#line 259
undef($memory_4);
#line 259
$memory_2 = $memory_2 . $memory_3;
#line 259
undef($memory_3);
#line 259
undef($memory_0);
#line 259
undef($memory_1);
#line 259
return $memory_2;
#line 259
undef($memory_2);
#line 259
undef($memory_1);
#line 259
undef($memory_0);
#line 259
return;
}

sub string_utils::hex2char($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;$memory_0 = $_[0];$memory_1 = $_[1];
#line 263
$memory_2 = 0;
#line 264
$memory_3 = 48;
#line 264
$memory_3 = c_rt_lib::to_nl($memory_0 >= $memory_3);
#line 264
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 264
if (c_rt_lib::check_true($memory_4)) {goto label_7;}
#line 264
$memory_3 = 57;
#line 264
$memory_3 = c_rt_lib::to_nl($memory_0 <= $memory_3);
#line 264
label_7:
#line 264
undef($memory_4);
#line 264
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 264
if (c_rt_lib::check_true($memory_3)) {goto label_16;}
#line 265
$memory_2 = $memory_2 + $memory_0;
#line 266
$memory_4 = 48;
#line 266
$memory_2 = $memory_2 - $memory_4;
#line 266
undef($memory_4);
#line 267
goto label_53;
#line 267
label_16:
#line 267
$memory_3 = 65;
#line 267
$memory_3 = c_rt_lib::to_nl($memory_0 >= $memory_3);
#line 267
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 267
if (c_rt_lib::check_true($memory_4)) {goto label_23;}
#line 267
$memory_3 = 70;
#line 267
$memory_3 = c_rt_lib::to_nl($memory_0 <= $memory_3);
#line 267
label_23:
#line 267
undef($memory_4);
#line 267
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 267
if (c_rt_lib::check_true($memory_3)) {goto label_32;}
#line 268
$memory_2 = $memory_2 + $memory_0;
#line 269
$memory_4 = 55;
#line 269
$memory_2 = $memory_2 - $memory_4;
#line 269
undef($memory_4);
#line 270
goto label_53;
#line 270
label_32:
#line 270
$memory_3 = 97;
#line 270
$memory_3 = c_rt_lib::to_nl($memory_0 >= $memory_3);
#line 270
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 270
if (c_rt_lib::check_true($memory_4)) {goto label_39;}
#line 270
$memory_3 = 102;
#line 270
$memory_3 = c_rt_lib::to_nl($memory_0 <= $memory_3);
#line 270
label_39:
#line 270
undef($memory_4);
#line 270
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 270
if (c_rt_lib::check_true($memory_3)) {goto label_48;}
#line 271
$memory_2 = $memory_2 + $memory_0;
#line 272
$memory_4 = 87;
#line 272
$memory_2 = $memory_2 - $memory_4;
#line 272
undef($memory_4);
#line 273
goto label_53;
#line 273
label_48:
#line 274
$memory_4 = [];
#line 274
die(dfile::ssave($memory_4));
#line 274
undef($memory_4);
#line 275
goto label_53;
#line 275
label_53:
#line 275
undef($memory_3);
#line 276
$memory_3 = 16;
#line 276
$memory_2 = $memory_2 * $memory_3;
#line 276
undef($memory_3);
#line 277
$memory_3 = 48;
#line 277
$memory_3 = c_rt_lib::to_nl($memory_1 >= $memory_3);
#line 277
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 277
if (c_rt_lib::check_true($memory_4)) {goto label_64;}
#line 277
$memory_3 = 57;
#line 277
$memory_3 = c_rt_lib::to_nl($memory_1 <= $memory_3);
#line 277
label_64:
#line 277
undef($memory_4);
#line 277
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 277
if (c_rt_lib::check_true($memory_3)) {goto label_73;}
#line 278
$memory_2 = $memory_2 + $memory_1;
#line 279
$memory_4 = 48;
#line 279
$memory_2 = $memory_2 - $memory_4;
#line 279
undef($memory_4);
#line 280
goto label_110;
#line 280
label_73:
#line 280
$memory_3 = 65;
#line 280
$memory_3 = c_rt_lib::to_nl($memory_1 >= $memory_3);
#line 280
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 280
if (c_rt_lib::check_true($memory_4)) {goto label_80;}
#line 280
$memory_3 = 70;
#line 280
$memory_3 = c_rt_lib::to_nl($memory_1 <= $memory_3);
#line 280
label_80:
#line 280
undef($memory_4);
#line 280
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 280
if (c_rt_lib::check_true($memory_3)) {goto label_89;}
#line 281
$memory_2 = $memory_2 + $memory_1;
#line 282
$memory_4 = 55;
#line 282
$memory_2 = $memory_2 - $memory_4;
#line 282
undef($memory_4);
#line 283
goto label_110;
#line 283
label_89:
#line 283
$memory_3 = 97;
#line 283
$memory_3 = c_rt_lib::to_nl($memory_1 >= $memory_3);
#line 283
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 283
if (c_rt_lib::check_true($memory_4)) {goto label_96;}
#line 283
$memory_3 = 102;
#line 283
$memory_3 = c_rt_lib::to_nl($memory_1 <= $memory_3);
#line 283
label_96:
#line 283
undef($memory_4);
#line 283
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 283
if (c_rt_lib::check_true($memory_3)) {goto label_105;}
#line 284
$memory_2 = $memory_2 + $memory_1;
#line 285
$memory_4 = 87;
#line 285
$memory_2 = $memory_2 - $memory_4;
#line 285
undef($memory_4);
#line 286
goto label_110;
#line 286
label_105:
#line 287
$memory_4 = [];
#line 287
die(dfile::ssave($memory_4));
#line 287
undef($memory_4);
#line 288
goto label_110;
#line 288
label_110:
#line 288
undef($memory_3);
#line 289
$memory_3 = string::chr($memory_2);
#line 289
undef($memory_0);
#line 289
undef($memory_1);
#line 289
undef($memory_2);
#line 289
return $memory_3;
#line 289
undef($memory_3);
#line 289
undef($memory_2);
#line 289
undef($memory_0);
#line 289
undef($memory_1);
#line 289
return;
}

sub string_utils::float2str($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;$memory_0 = $_[0];$memory_1 = $_[1];
#line 293
$memory_2 = "1.0";
#line 294
$memory_3 = 0;
#line 294
$memory_4 = 1;
#line 294
label_3:
#line 294
$memory_5 = c_rt_lib::to_nl($memory_3 >= $memory_1);
#line 294
if (c_rt_lib::check_true($memory_5)) {goto label_11;}
#line 295
$memory_6 = "10.0";
#line 295
$memory_2 = $memory_2 * $memory_6;
#line 295
undef($memory_6);
#line 296
$memory_3 = $memory_3 + $memory_4;
#line 296
goto label_3;
#line 296
label_11:
#line 296
undef($memory_3);
#line 296
undef($memory_4);
#line 296
undef($memory_5);
#line 297
$memory_4 = $memory_0 * $memory_2;
#line 297
$memory_3 = c_rt_lib::float_round($memory_4);
#line 297
undef($memory_4);
#line 297
$memory_0 = $memory_3;
#line 297
undef($memory_3);
#line 298
$memory_3 = "";
#line 299
$memory_4 = 0;
#line 299
$memory_4 = c_rt_lib::to_nl($memory_0 < $memory_4);
#line 299
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 299
if (c_rt_lib::check_true($memory_4)) {goto label_33;}
#line 300
$memory_5 = "-";
#line 300
$memory_3 = $memory_5;
#line 300
undef($memory_5);
#line 301
$memory_5 = $memory_0;
#line 301
$memory_5 = -$memory_5;
#line 301
$memory_0 = $memory_5;
#line 301
undef($memory_5);
#line 302
goto label_33;
#line 302
label_33:
#line 302
undef($memory_4);
#line 303
$memory_5 = 1;
#line 303
$memory_5 = $memory_1 + $memory_5;
#line 303
$memory_4 = string_utils::int2str_leading_digits($memory_0, $memory_5);
#line 303
undef($memory_5);
#line 304
$memory_5 = string::length($memory_4);
#line 305
$memory_6 = 0;
#line 305
$memory_6 = c_rt_lib::to_nl($memory_1 == $memory_6);
#line 305
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 305
if (c_rt_lib::check_true($memory_6)) {goto label_58;}
#line 305
$memory_8 = 0;
#line 305
$memory_7 = string::substr($memory_4, $memory_8, $memory_5);
#line 305
undef($memory_8);
#line 305
$memory_7 = $memory_3 . $memory_7;
#line 305
undef($memory_0);
#line 305
undef($memory_1);
#line 305
undef($memory_2);
#line 305
undef($memory_3);
#line 305
undef($memory_4);
#line 305
undef($memory_5);
#line 305
undef($memory_6);
#line 305
return $memory_7;
#line 305
undef($memory_7);
#line 305
goto label_58;
#line 305
label_58:
#line 305
undef($memory_6);
#line 306
$memory_7 = 0;
#line 306
$memory_8 = $memory_5 - $memory_1;
#line 306
$memory_6 = string::substr($memory_4, $memory_7, $memory_8);
#line 306
undef($memory_8);
#line 306
undef($memory_7);
#line 306
$memory_6 = $memory_3 . $memory_6;
#line 306
$memory_7 = ".";
#line 306
$memory_6 = $memory_6 . $memory_7;
#line 306
undef($memory_7);
#line 306
$memory_8 = $memory_5 - $memory_1;
#line 306
$memory_7 = string::substr($memory_4, $memory_8, $memory_1);
#line 306
undef($memory_8);
#line 306
$memory_6 = $memory_6 . $memory_7;
#line 306
undef($memory_7);
#line 306
undef($memory_0);
#line 306
undef($memory_1);
#line 306
undef($memory_2);
#line 306
undef($memory_3);
#line 306
undef($memory_4);
#line 306
undef($memory_5);
#line 306
return $memory_6;
#line 306
undef($memory_6);
#line 306
undef($memory_2);
#line 306
undef($memory_3);
#line 306
undef($memory_4);
#line 306
undef($memory_5);
#line 306
undef($memory_0);
#line 306
undef($memory_1);
#line 306
return;
}

sub string_utils::int2str_leading_digits($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;$memory_0 = $_[0];$memory_1 = $_[1];
#line 310
$memory_2 = "000000000000000000000000";
#line 310
$memory_2 = $memory_2 . $memory_0;
#line 311
$memory_4 = string::length($memory_2);
#line 311
$memory_6 = string::length($memory_0);
#line 311
$memory_5 = string_utils_priv::max($memory_1, $memory_6);
#line 311
undef($memory_6);
#line 311
$memory_4 = $memory_4 - $memory_5;
#line 311
undef($memory_5);
#line 311
$memory_3 = string::substr2($memory_2, $memory_4);
#line 311
undef($memory_4);
#line 311
undef($memory_0);
#line 311
undef($memory_1);
#line 311
undef($memory_2);
#line 311
return $memory_3;
#line 311
undef($memory_3);
#line 311
undef($memory_2);
#line 311
undef($memory_0);
#line 311
undef($memory_1);
#line 311
return;
}

sub string_utils_priv::max($$) {
my $memory_0;my $memory_1;my $memory_2;$memory_0 = $_[0];$memory_1 = $_[1];
#line 315
$memory_2 = c_rt_lib::to_nl($memory_0 > $memory_1);
#line 315
if (c_rt_lib::check_true($memory_2)) {goto label_4;}
#line 315
$memory_2 = $memory_1;
#line 315
goto label_6;
#line 315
label_4:
#line 315
$memory_2 = $memory_0;
#line 315
label_6:
#line 315
undef($memory_0);
#line 315
undef($memory_1);
#line 315
return $memory_2;
#line 315
undef($memory_2);
#line 315
undef($memory_0);
#line 315
undef($memory_1);
#line 315
return;
}

sub string_utils::int2str($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;$memory_0 = $_[0];$memory_1 = $_[1];
#line 319
$memory_2 = "000000000000000000000000";
#line 319
$memory_2 = $memory_2 . $memory_0;
#line 320
$memory_4 = string::length($memory_2);
#line 320
$memory_4 = $memory_4 - $memory_1;
#line 320
$memory_3 = string::substr2($memory_2, $memory_4);
#line 320
undef($memory_4);
#line 320
undef($memory_0);
#line 320
undef($memory_1);
#line 320
undef($memory_2);
#line 320
return $memory_3;
#line 320
undef($memory_3);
#line 320
undef($memory_2);
#line 320
undef($memory_0);
#line 320
undef($memory_1);
#line 320
return;
}

sub string_utils::starts_with($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;$memory_0 = $_[0];$memory_1 = $_[1];
#line 324
$memory_2 = string::length($memory_0);
#line 324
$memory_4 = string::length($memory_1);
#line 324
$memory_2 = c_rt_lib::to_nl($memory_2 >= $memory_4);
#line 324
undef($memory_4);
#line 324
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 324
if (c_rt_lib::check_true($memory_3)) {goto label_12;}
#line 324
$memory_4 = 0;
#line 324
$memory_5 = string::length($memory_1);
#line 324
$memory_2 = string::substr($memory_0, $memory_4, $memory_5);
#line 324
undef($memory_5);
#line 324
undef($memory_4);
#line 324
$memory_2 = c_rt_lib::to_nl($memory_2 eq $memory_1);
#line 324
label_12:
#line 324
undef($memory_3);
#line 324
undef($memory_0);
#line 324
undef($memory_1);
#line 324
return $memory_2;
#line 324
undef($memory_2);
#line 324
undef($memory_0);
#line 324
undef($memory_1);
#line 324
return;
}
