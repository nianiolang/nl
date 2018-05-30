use c_rt_lib;
use c_std_lib;
use array;
use boolean_t;
use ptd;
sub string::lf;
sub string::tab;
sub string::r;
sub string::f;
sub string::non_breaking_space;
sub string::char_times;
sub string::split;
sub string::split_limit;
sub string::to_array;
sub string::length;
sub string::get_char_code;
sub string::substr;
sub string::substr2;
sub string::lc;
sub string::uc;
sub string::index2;
sub string::index;
sub string::contain_lc;
sub string::replace;
sub string::replace_arr;
sub string::ord;
sub string::is_digit;
sub string::is_letter;
sub string::encode_utf16;
sub string::decode_utf16;
sub string::is_empty;
sub string::chr;
sub string::lt;
sub string::gt;
sub string::compare;
sub string::le;
sub string::ge;

return 1;

sub string::__lf() {
my $memory_0;my $memory_1;
#line 12
$memory_1 = 10;
#line 12
$memory_0 = string::chr($memory_1);
#line 12
undef($memory_1);
#line 12
return $memory_0;
#line 12
undef($memory_0);
#line 12
return;
}

my $_lf;
sub string::lf() {
	$_lf = string::__lf() unless defined $_lf;
	return $_lf;
}

sub string::__tab() {
my $memory_0;my $memory_1;
#line 16
$memory_1 = 9;
#line 16
$memory_0 = string::chr($memory_1);
#line 16
undef($memory_1);
#line 16
return $memory_0;
#line 16
undef($memory_0);
#line 16
return;
}

my $_tab;
sub string::tab() {
	$_tab = string::__tab() unless defined $_tab;
	return $_tab;
}

sub string::__r() {
my $memory_0;my $memory_1;
#line 20
$memory_1 = 13;
#line 20
$memory_0 = string::chr($memory_1);
#line 20
undef($memory_1);
#line 20
return $memory_0;
#line 20
undef($memory_0);
#line 20
return;
}

my $_r;
sub string::r() {
	$_r = string::__r() unless defined $_r;
	return $_r;
}

sub string::__f() {
my $memory_0;my $memory_1;
#line 24
$memory_1 = 12;
#line 24
$memory_0 = string::chr($memory_1);
#line 24
undef($memory_1);
#line 24
return $memory_0;
#line 24
undef($memory_0);
#line 24
return;
}

my $_f;
sub string::f() {
	$_f = string::__f() unless defined $_f;
	return $_f;
}

sub string::__non_breaking_space() {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;
#line 28
$memory_2 = 194;
#line 28
$memory_1 = string::chr($memory_2);
#line 28
undef($memory_2);
#line 28
$memory_3 = 160;
#line 28
$memory_2 = string::chr($memory_3);
#line 28
undef($memory_3);
#line 28
$memory_0 = [$memory_1,$memory_2];
#line 28
undef($memory_1);
#line 28
undef($memory_2);
#line 28
return $memory_0;
#line 28
undef($memory_0);
#line 28
return;
}

my $_non_breaking_space;
sub string::non_breaking_space() {
	$_non_breaking_space = string::__non_breaking_space() unless defined $_non_breaking_space;
	return $_non_breaking_space;
}

sub string::char_times($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;$memory_0 = $_[0];$memory_1 = $_[1];
#line 32
$memory_2 = "";
#line 33
$memory_3 = 0;
#line 33
$memory_4 = 1;
#line 33
label_3:
#line 33
$memory_5 = c_rt_lib::to_nl($memory_3 >= $memory_1);
#line 33
if (c_rt_lib::check_true($memory_5)) {goto label_9;}
#line 33
$memory_2 = $memory_2 . $memory_0;
#line 33
$memory_3 = $memory_3 + $memory_4;
#line 33
goto label_3;
#line 33
label_9:
#line 33
undef($memory_3);
#line 33
undef($memory_4);
#line 33
undef($memory_5);
#line 34
undef($memory_0);
#line 34
undef($memory_1);
#line 34
return $memory_2;
#line 34
undef($memory_2);
#line 34
undef($memory_0);
#line 34
undef($memory_1);
#line 34
return;
}

sub string::split($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;$memory_0 = $_[0];$memory_1 = $_[1];
#line 38
$memory_2 = [];
#line 39
$memory_3 = 0;
#line 40
$memory_4 = string::length($memory_0);
#line 41
$memory_5 = string::length($memory_1);
#line 42
label_4:
#line 43
$memory_6 = 1;
#line 43
$memory_6 = $memory_3 + $memory_6;
#line 44
$memory_7 = 0;
#line 44
$memory_7 = c_rt_lib::to_nl($memory_4 == $memory_7);
#line 44
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 44
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 44
if (c_rt_lib::check_true($memory_7)) {goto label_16;}
#line 44
$memory_8 = string::index($memory_1, $memory_0, $memory_3);
#line 44
$memory_6 = $memory_8;
#line 44
undef($memory_8);
#line 44
goto label_16;
#line 44
label_16:
#line 44
undef($memory_7);
#line 45
$memory_7 = c_rt_lib::to_nl($memory_6 > $memory_5);
#line 45
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 45
if (c_rt_lib::check_true($memory_7)) {goto label_25;}
#line 45
undef($memory_6);
#line 45
undef($memory_7);
#line 45
goto label_54;
#line 45
goto label_25;
#line 45
label_25:
#line 45
undef($memory_7);
#line 46
$memory_7 = 0;
#line 46
$memory_7 = c_rt_lib::to_nl($memory_6 < $memory_7);
#line 46
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 46
if (c_rt_lib::check_true($memory_7)) {goto label_40;}
#line 47
$memory_9 = $memory_5 - $memory_3;
#line 47
$memory_8 = string::substr($memory_1, $memory_3, $memory_9);
#line 47
undef($memory_9);
#line 47
array::push($memory_2, $memory_8);
#line 47
undef($memory_8);
#line 48
undef($memory_6);
#line 48
undef($memory_7);
#line 48
goto label_54;
#line 49
goto label_50;
#line 49
label_40:
#line 50
$memory_9 = $memory_6 - $memory_3;
#line 50
$memory_8 = string::substr($memory_1, $memory_3, $memory_9);
#line 50
undef($memory_9);
#line 50
array::push($memory_2, $memory_8);
#line 50
undef($memory_8);
#line 51
$memory_8 = $memory_6 + $memory_4;
#line 51
$memory_3 = $memory_8;
#line 51
undef($memory_8);
#line 52
goto label_50;
#line 52
label_50:
#line 52
undef($memory_7);
#line 52
undef($memory_6);
#line 42
goto label_4;
#line 42
label_54:
#line 54
undef($memory_0);
#line 54
undef($memory_1);
#line 54
undef($memory_3);
#line 54
undef($memory_4);
#line 54
undef($memory_5);
#line 54
return $memory_2;
#line 54
undef($memory_2);
#line 54
undef($memory_3);
#line 54
undef($memory_4);
#line 54
undef($memory_5);
#line 54
undef($memory_0);
#line 54
undef($memory_1);
#line 54
return;
}

sub string::split_limit($$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;$memory_0 = $_[0];$memory_1 = $_[1];$memory_2 = $_[2];
#line 58
$memory_3 = string::split($memory_0, $memory_1);
#line 59
$memory_4 = array::len($memory_3);
#line 59
$memory_4 = c_rt_lib::to_nl($memory_4 > $memory_2);
#line 59
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 59
if (c_rt_lib::check_true($memory_4)) {goto label_34;}
#line 60
$memory_7 = 1;
#line 60
$memory_7 = $memory_2 - $memory_7;
#line 60
$memory_8 = array::len($memory_3);
#line 60
$memory_8 = $memory_8 - $memory_2;
#line 60
$memory_9 = 1;
#line 60
$memory_8 = $memory_8 + $memory_9;
#line 60
undef($memory_9);
#line 60
$memory_6 = array::subarray($memory_3, $memory_7, $memory_8);
#line 60
undef($memory_8);
#line 60
undef($memory_7);
#line 60
$memory_5 = array::join($memory_0, $memory_6);
#line 60
undef($memory_6);
#line 61
$memory_7 = 0;
#line 61
$memory_8 = 1;
#line 61
$memory_8 = $memory_2 - $memory_8;
#line 61
$memory_6 = array::subarray($memory_3, $memory_7, $memory_8);
#line 61
undef($memory_8);
#line 61
undef($memory_7);
#line 62
array::push($memory_6, $memory_5);
#line 63
undef($memory_0);
#line 63
undef($memory_1);
#line 63
undef($memory_2);
#line 63
undef($memory_3);
#line 63
undef($memory_4);
#line 63
undef($memory_5);
#line 63
return $memory_6;
#line 63
undef($memory_5);
#line 63
undef($memory_6);
#line 64
goto label_41;
#line 64
label_34:
#line 65
undef($memory_0);
#line 65
undef($memory_1);
#line 65
undef($memory_2);
#line 65
undef($memory_4);
#line 65
return $memory_3;
#line 66
goto label_41;
#line 66
label_41:
#line 66
undef($memory_4);
#line 66
undef($memory_3);
#line 66
undef($memory_0);
#line 66
undef($memory_1);
#line 66
undef($memory_2);
#line 66
return;
}

sub string::to_array($) {
my $memory_0;my $memory_1;my $memory_2;$memory_0 = $_[0];
#line 70
$memory_2 = "";
#line 70
$memory_1 = string::split($memory_2, $memory_0);
#line 70
undef($memory_2);
#line 70
undef($memory_0);
#line 70
return $memory_1;
#line 70
undef($memory_1);
#line 70
undef($memory_0);
#line 70
return;
}

sub string::length($) {
my $memory_0;my $memory_1;$memory_0 = $_[0];
#line 74
$memory_1 = c_std_lib::string_length($memory_0);
#line 74
undef($memory_0);
#line 74
return $memory_1;
#line 74
undef($memory_1);
#line 74
undef($memory_0);
#line 74
return;
}

sub string::get_char_code($$) {
my $memory_0;my $memory_1;my $memory_2;$memory_0 = $_[0];$memory_1 = $_[1];
#line 78
$memory_2 = c_std_lib::string_get_char_code($memory_0, $memory_1);
#line 78
undef($memory_0);
#line 78
undef($memory_1);
#line 78
return $memory_2;
#line 78
undef($memory_2);
#line 78
undef($memory_0);
#line 78
undef($memory_1);
#line 78
return;
}

sub string::substr($$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;$memory_0 = $_[0];$memory_1 = $_[1];$memory_2 = $_[2];
#line 82
$memory_3 = c_std_lib::string_sub($memory_0, $memory_1, $memory_2);
#line 82
$memory_4 = "";
#line 82
$memory_3 = $memory_3 . $memory_4;
#line 82
undef($memory_4);
#line 82
undef($memory_0);
#line 82
undef($memory_1);
#line 82
undef($memory_2);
#line 82
return $memory_3;
#line 82
undef($memory_3);
#line 82
undef($memory_0);
#line 82
undef($memory_1);
#line 82
undef($memory_2);
#line 82
return;
}

sub string::substr2($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;$memory_0 = $_[0];$memory_1 = $_[1];
#line 86
$memory_3 = string::length($memory_0);
#line 86
$memory_3 = $memory_3 - $memory_1;
#line 86
$memory_2 = c_std_lib::string_sub($memory_0, $memory_1, $memory_3);
#line 86
undef($memory_3);
#line 86
$memory_3 = "";
#line 86
$memory_2 = $memory_2 . $memory_3;
#line 86
undef($memory_3);
#line 86
undef($memory_0);
#line 86
undef($memory_1);
#line 86
return $memory_2;
#line 86
undef($memory_2);
#line 86
undef($memory_0);
#line 86
undef($memory_1);
#line 86
return;
}

sub string::lc($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;$memory_0 = $_[0];
#line 90
$memory_1 = string::to_array($memory_0);
#line 91
$memory_2 = array::len($memory_1);
#line 91
$memory_3 = 0;
#line 91
$memory_4 = 1;
#line 91
label_4:
#line 91
$memory_5 = c_rt_lib::to_nl($memory_3 >= $memory_2);
#line 91
if (c_rt_lib::check_true($memory_5)) {goto label_34;}
#line 92
$memory_7 = $memory_1->[$memory_3];
#line 92
$memory_6 = string::ord($memory_7);
#line 92
undef($memory_7);
#line 93
$memory_7 = 65;
#line 93
$memory_7 = c_rt_lib::to_nl($memory_6 >= $memory_7);
#line 93
$memory_8 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 93
if (c_rt_lib::check_true($memory_8)) {goto label_16;}
#line 93
$memory_7 = 90;
#line 93
$memory_7 = c_rt_lib::to_nl($memory_6 <= $memory_7);
#line 93
label_16:
#line 93
undef($memory_8);
#line 93
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 93
if (c_rt_lib::check_true($memory_7)) {goto label_29;}
#line 94
$memory_8 = 32;
#line 94
$memory_6 = $memory_6 + $memory_8;
#line 94
undef($memory_8);
#line 95
$memory_8 = string::chr($memory_6);
#line 95
$memory_9 = $memory_8;
#line 95
 if (c_rt_lib::get_arrcount($memory_1) > 1) {$memory_1 = [@{$memory_1}];}$memory_1->[$memory_3] = $memory_9;
#line 95
undef($memory_8);
#line 95
undef($memory_9);
#line 96
goto label_29;
#line 96
label_29:
#line 96
undef($memory_7);
#line 96
undef($memory_6);
#line 97
$memory_3 = $memory_3 + $memory_4;
#line 97
goto label_4;
#line 97
label_34:
#line 97
undef($memory_2);
#line 97
undef($memory_3);
#line 97
undef($memory_4);
#line 97
undef($memory_5);
#line 98
$memory_3 = "";
#line 98
$memory_2 = array::join($memory_3, $memory_1);
#line 98
undef($memory_3);
#line 98
undef($memory_0);
#line 98
undef($memory_1);
#line 98
return $memory_2;
#line 98
undef($memory_2);
#line 98
undef($memory_1);
#line 98
undef($memory_0);
#line 98
return;
}

sub string::uc($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;$memory_0 = $_[0];
#line 102
$memory_1 = string::to_array($memory_0);
#line 103
$memory_2 = array::len($memory_1);
#line 103
$memory_3 = 0;
#line 103
$memory_4 = 1;
#line 103
label_4:
#line 103
$memory_5 = c_rt_lib::to_nl($memory_3 >= $memory_2);
#line 103
if (c_rt_lib::check_true($memory_5)) {goto label_34;}
#line 104
$memory_7 = $memory_1->[$memory_3];
#line 104
$memory_6 = string::ord($memory_7);
#line 104
undef($memory_7);
#line 105
$memory_7 = 97;
#line 105
$memory_7 = c_rt_lib::to_nl($memory_6 >= $memory_7);
#line 105
$memory_8 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 105
if (c_rt_lib::check_true($memory_8)) {goto label_16;}
#line 105
$memory_7 = 122;
#line 105
$memory_7 = c_rt_lib::to_nl($memory_6 <= $memory_7);
#line 105
label_16:
#line 105
undef($memory_8);
#line 105
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 105
if (c_rt_lib::check_true($memory_7)) {goto label_29;}
#line 106
$memory_8 = 32;
#line 106
$memory_6 = $memory_6 - $memory_8;
#line 106
undef($memory_8);
#line 107
$memory_8 = string::chr($memory_6);
#line 107
$memory_9 = $memory_8;
#line 107
 if (c_rt_lib::get_arrcount($memory_1) > 1) {$memory_1 = [@{$memory_1}];}$memory_1->[$memory_3] = $memory_9;
#line 107
undef($memory_8);
#line 107
undef($memory_9);
#line 108
goto label_29;
#line 108
label_29:
#line 108
undef($memory_7);
#line 108
undef($memory_6);
#line 109
$memory_3 = $memory_3 + $memory_4;
#line 109
goto label_4;
#line 109
label_34:
#line 109
undef($memory_2);
#line 109
undef($memory_3);
#line 109
undef($memory_4);
#line 109
undef($memory_5);
#line 110
$memory_3 = "";
#line 110
$memory_2 = array::join($memory_3, $memory_1);
#line 110
undef($memory_3);
#line 110
undef($memory_0);
#line 110
undef($memory_1);
#line 110
return $memory_2;
#line 110
undef($memory_2);
#line 110
undef($memory_1);
#line 110
undef($memory_0);
#line 110
return;
}

sub string::index2($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;$memory_0 = $_[0];$memory_1 = $_[1];
#line 114
$memory_3 = 0;
#line 114
$memory_2 = c_std_lib::string_index($memory_0, $memory_1, $memory_3);
#line 114
undef($memory_3);
#line 114
undef($memory_0);
#line 114
undef($memory_1);
#line 114
return $memory_2;
#line 114
undef($memory_2);
#line 114
undef($memory_0);
#line 114
undef($memory_1);
#line 114
return;
}

sub string::index($$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;$memory_0 = $_[0];$memory_1 = $_[1];$memory_2 = $_[2];
#line 118
$memory_3 = c_std_lib::string_index($memory_0, $memory_1, $memory_2);
#line 118
undef($memory_0);
#line 118
undef($memory_1);
#line 118
undef($memory_2);
#line 118
return $memory_3;
#line 118
undef($memory_3);
#line 118
undef($memory_0);
#line 118
undef($memory_1);
#line 118
undef($memory_2);
#line 118
return;
}

sub string::contain_lc($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;$memory_0 = $_[0];$memory_1 = $_[1];
#line 122
$memory_2 = string::lc($memory_0);
#line 122
$memory_0 = $memory_2;
#line 122
undef($memory_2);
#line 123
$memory_2 = string::index2($memory_0, $memory_1);
#line 123
$memory_3 = 0;
#line 123
$memory_2 = c_rt_lib::to_nl($memory_2 >= $memory_3);
#line 123
undef($memory_3);
#line 123
undef($memory_0);
#line 123
undef($memory_1);
#line 123
return $memory_2;
#line 123
undef($memory_2);
#line 123
undef($memory_0);
#line 123
undef($memory_1);
#line 123
return;
}

sub string::replace($$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;$memory_0 = $_[0];$memory_1 = $_[1];$memory_2 = $_[2];
#line 127
$memory_3 = c_std_lib::string_replace($memory_0, $memory_1, $memory_2);
#line 127
undef($memory_0);
#line 127
undef($memory_1);
#line 127
undef($memory_2);
#line 127
return $memory_3;
#line 127
undef($memory_3);
#line 127
undef($memory_0);
#line 127
undef($memory_1);
#line 127
undef($memory_2);
#line 127
return;
}

sub string::replace_arr($$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;$memory_0 = $_[0];$memory_1 = $_[1];$memory_2 = $_[2];
#line 131
$memory_3 = array::len($memory_1);
#line 132
$memory_4 = array::len($memory_2);
#line 132
$memory_4 = c_rt_lib::to_nl($memory_3 == $memory_4);
#line 132
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 132
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 132
if (c_rt_lib::check_true($memory_4)) {goto label_9;}
#line 132
$memory_5 = [];
#line 132
die(dfile::ssave($memory_5));
#line 132
goto label_9;
#line 132
label_9:
#line 132
undef($memory_4);
#line 132
undef($memory_5);
#line 133
$memory_4 = 0;
#line 133
label_13:
#line 133
$memory_5 = c_rt_lib::to_nl($memory_4 < $memory_3);
#line 133
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 133
if (c_rt_lib::check_true($memory_5)) {goto label_28;}
#line 134
$memory_7 = $memory_1->[$memory_4];
#line 134
$memory_8 = $memory_2->[$memory_4];
#line 134
$memory_6 = string::replace($memory_0, $memory_7, $memory_8);
#line 134
undef($memory_8);
#line 134
undef($memory_7);
#line 134
$memory_0 = $memory_6;
#line 134
undef($memory_6);
#line 133
$memory_6 = 1;
#line 133
$memory_4 = $memory_4 + $memory_6;
#line 133
undef($memory_6);
#line 135
goto label_13;
#line 135
label_28:
#line 135
undef($memory_4);
#line 135
undef($memory_5);
#line 136
undef($memory_1);
#line 136
undef($memory_2);
#line 136
undef($memory_3);
#line 136
return $memory_0;
#line 136
undef($memory_3);
#line 136
undef($memory_0);
#line 136
undef($memory_1);
#line 136
undef($memory_2);
#line 136
return;
}

sub string::ord($) {
my $memory_0;my $memory_1;$memory_0 = $_[0];
#line 140
$memory_1 = c_std_lib::string_ord($memory_0);
#line 140
undef($memory_0);
#line 140
return $memory_1;
#line 140
undef($memory_1);
#line 140
undef($memory_0);
#line 140
return;
}

sub string::is_digit($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;$memory_0 = $_[0];
#line 144
$memory_1 = string::ord($memory_0);
#line 145
$memory_2 = 48;
#line 145
$memory_2 = c_rt_lib::to_nl($memory_1 >= $memory_2);
#line 145
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 145
if (c_rt_lib::check_true($memory_3)) {goto label_7;}
#line 145
$memory_2 = 57;
#line 145
$memory_2 = c_rt_lib::to_nl($memory_1 <= $memory_2);
#line 145
label_7:
#line 145
undef($memory_3);
#line 145
undef($memory_0);
#line 145
undef($memory_1);
#line 145
return $memory_2;
#line 145
undef($memory_2);
#line 145
undef($memory_1);
#line 145
undef($memory_0);
#line 145
return;
}

sub string::is_letter($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;$memory_0 = $_[0];
#line 149
$memory_1 = string::ord($memory_0);
#line 150
$memory_2 = 97;
#line 150
$memory_2 = c_rt_lib::to_nl($memory_1 >= $memory_2);
#line 150
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 150
if (c_rt_lib::check_true($memory_3)) {goto label_7;}
#line 150
$memory_2 = 122;
#line 150
$memory_2 = c_rt_lib::to_nl($memory_1 <= $memory_2);
#line 150
label_7:
#line 150
undef($memory_3);
#line 150
if (c_rt_lib::check_true($memory_2)) {goto label_18;}
#line 150
$memory_2 = 65;
#line 150
$memory_2 = c_rt_lib::to_nl($memory_1 >= $memory_2);
#line 150
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 150
if (c_rt_lib::check_true($memory_3)) {goto label_16;}
#line 150
$memory_2 = 90;
#line 150
$memory_2 = c_rt_lib::to_nl($memory_1 <= $memory_2);
#line 150
label_16:
#line 150
undef($memory_3);
#line 150
label_18:
#line 150
undef($memory_0);
#line 150
undef($memory_1);
#line 150
return $memory_2;
#line 150
undef($memory_2);
#line 150
undef($memory_1);
#line 150
undef($memory_0);
#line 150
return;
}

sub string::encode_utf16($) {
my $memory_0;my $memory_1;$memory_0 = $_[0];
#line 154
$memory_1 = c_std_lib::string_encode_utf16($memory_0);
#line 154
undef($memory_0);
#line 154
return $memory_1;
#line 154
undef($memory_1);
#line 154
undef($memory_0);
#line 154
return;
}

sub string::decode_utf16($$) {
my $memory_0;my $memory_1;my $memory_2;$memory_0 = $_[0];$memory_1 = $_[1];
#line 158
$memory_2 = c_std_lib::string_decode_utf16($memory_0, $memory_1);
#line 158
undef($memory_0);
#line 158
undef($memory_1);
#line 158
return $memory_2;
#line 158
undef($memory_2);
#line 158
undef($memory_0);
#line 158
undef($memory_1);
#line 158
return;
}

sub string::is_empty($) {
my $memory_0;my $memory_1;my $memory_2;$memory_0 = $_[0];
#line 162
$memory_1 = string::length($memory_0);
#line 162
$memory_2 = 0;
#line 162
$memory_1 = c_rt_lib::to_nl($memory_1 == $memory_2);
#line 162
undef($memory_2);
#line 162
undef($memory_0);
#line 162
return $memory_1;
#line 162
undef($memory_1);
#line 162
undef($memory_0);
#line 162
return;
}

sub string::chr($) {
my $memory_0;my $memory_1;$memory_0 = $_[0];
#line 166
$memory_1 = c_std_lib::string_chr($memory_0);
#line 166
undef($memory_0);
#line 166
return $memory_1;
#line 166
undef($memory_1);
#line 166
undef($memory_0);
#line 166
return;
}

sub string::lt($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;$memory_0 = $_[0];$memory_1 = $_[1];
#line 170
$memory_2 = string::compare($memory_0, $memory_1);
#line 170
$memory_3 = 0;
#line 170
$memory_2 = c_rt_lib::to_nl($memory_2 < $memory_3);
#line 170
undef($memory_3);
#line 170
undef($memory_0);
#line 170
undef($memory_1);
#line 170
return $memory_2;
#line 170
undef($memory_2);
#line 170
undef($memory_0);
#line 170
undef($memory_1);
#line 170
return;
}

sub string::gt($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;$memory_0 = $_[0];$memory_1 = $_[1];
#line 174
$memory_2 = string::compare($memory_0, $memory_1);
#line 174
$memory_3 = 0;
#line 174
$memory_2 = c_rt_lib::to_nl($memory_2 > $memory_3);
#line 174
undef($memory_3);
#line 174
undef($memory_0);
#line 174
undef($memory_1);
#line 174
return $memory_2;
#line 174
undef($memory_2);
#line 174
undef($memory_0);
#line 174
undef($memory_1);
#line 174
return;
}

sub string::compare($$) {
my $memory_0;my $memory_1;my $memory_2;$memory_0 = $_[0];$memory_1 = $_[1];
#line 178
$memory_2 = c_std_lib::string_compare($memory_0, $memory_1);
#line 178
undef($memory_0);
#line 178
undef($memory_1);
#line 178
return $memory_2;
#line 178
undef($memory_2);
#line 178
undef($memory_0);
#line 178
undef($memory_1);
#line 178
return;
}

sub string::le($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;$memory_0 = $_[0];$memory_1 = $_[1];
#line 182
$memory_2 = string::compare($memory_0, $memory_1);
#line 182
$memory_3 = 0;
#line 182
$memory_2 = c_rt_lib::to_nl($memory_2 <= $memory_3);
#line 182
undef($memory_3);
#line 182
undef($memory_0);
#line 182
undef($memory_1);
#line 182
return $memory_2;
#line 182
undef($memory_2);
#line 182
undef($memory_0);
#line 182
undef($memory_1);
#line 182
return;
}

sub string::ge($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;$memory_0 = $_[0];$memory_1 = $_[1];
#line 186
$memory_2 = string::compare($memory_0, $memory_1);
#line 186
$memory_3 = 0;
#line 186
$memory_2 = c_rt_lib::to_nl($memory_2 >= $memory_3);
#line 186
undef($memory_3);
#line 186
undef($memory_0);
#line 186
undef($memory_1);
#line 186
return $memory_2;
#line 186
undef($memory_2);
#line 186
undef($memory_0);
#line 186
undef($memory_1);
#line 186
return;
}
