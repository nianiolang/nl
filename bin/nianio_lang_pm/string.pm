use c_rt_lib;
use c_std_lib;
use boolean_t;
use ptd;
sub string::lf;
sub string::tab;
sub string::r;
sub string::f;
sub string::char_times;
sub string::length;
sub string::get_char_code;
sub string::substr;
sub string::substr2;
sub string::index2;
sub string::index;
sub string::replace;
sub string::ord;
sub string::is_digit;
sub string::is_letter;
sub string::chr;
sub string::lt;
sub string::gt;
sub string::compare;
sub string::le;
sub string::ge;

return 1;

sub string::__lf() {
my $memory_0;my $memory_1;
#line 10
$memory_1 = 10;
#line 10
$memory_0 = string::chr($memory_1);
#line 10
undef($memory_1);
#line 10
return $memory_0;
#line 10
undef($memory_0);
#line 10
return;
}

my $_lf;
sub string::lf() {
	$_lf = string::__lf() unless defined $_lf;
	return $_lf;
}

sub string::__tab() {
my $memory_0;my $memory_1;
#line 14
$memory_1 = 9;
#line 14
$memory_0 = string::chr($memory_1);
#line 14
undef($memory_1);
#line 14
return $memory_0;
#line 14
undef($memory_0);
#line 14
return;
}

my $_tab;
sub string::tab() {
	$_tab = string::__tab() unless defined $_tab;
	return $_tab;
}

sub string::__r() {
my $memory_0;my $memory_1;
#line 18
$memory_1 = 13;
#line 18
$memory_0 = string::chr($memory_1);
#line 18
undef($memory_1);
#line 18
return $memory_0;
#line 18
undef($memory_0);
#line 18
return;
}

my $_r;
sub string::r() {
	$_r = string::__r() unless defined $_r;
	return $_r;
}

sub string::__f() {
my $memory_0;my $memory_1;
#line 22
$memory_1 = 12;
#line 22
$memory_0 = string::chr($memory_1);
#line 22
undef($memory_1);
#line 22
return $memory_0;
#line 22
undef($memory_0);
#line 22
return;
}

my $_f;
sub string::f() {
	$_f = string::__f() unless defined $_f;
	return $_f;
}

sub string::char_times($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;$memory_0 = $_[0];$memory_1 = $_[1];
#line 26
$memory_2 = "";
#line 27
$memory_3 = 0;
#line 27
$memory_4 = 1;
#line 27
label_3:
#line 27
$memory_5 = c_rt_lib::to_nl($memory_3 >= $memory_1);
#line 27
if (c_rt_lib::check_true($memory_5)) {goto label_1;}
#line 27
$memory_2 = $memory_2 . $memory_0;
#line 27
$memory_3 = $memory_3 + $memory_4;
#line 27
goto label_3;
#line 27
label_1:
#line 27
undef($memory_3);
#line 27
undef($memory_4);
#line 27
undef($memory_5);
#line 28
undef($memory_0);
#line 28
undef($memory_1);
#line 28
return $memory_2;
#line 28
undef($memory_2);
#line 28
undef($memory_0);
#line 28
undef($memory_1);
#line 28
return;
}

sub string::length($) {
my $memory_0;my $memory_1;$memory_0 = $_[0];
#line 32
$memory_1 = c_std_lib::string_length($memory_0);
#line 32
undef($memory_0);
#line 32
return $memory_1;
#line 32
undef($memory_1);
#line 32
undef($memory_0);
#line 32
return;
}

sub string::get_char_code($$) {
my $memory_0;my $memory_1;my $memory_2;$memory_0 = $_[0];$memory_1 = $_[1];
#line 36
$memory_2 = c_std_lib::string_get_char_code($memory_0, $memory_1);
#line 36
undef($memory_0);
#line 36
undef($memory_1);
#line 36
return $memory_2;
#line 36
undef($memory_2);
#line 36
undef($memory_0);
#line 36
undef($memory_1);
#line 36
return;
}

sub string::substr($$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;$memory_0 = $_[0];$memory_1 = $_[1];$memory_2 = $_[2];
#line 40
$memory_3 = c_std_lib::string_sub($memory_0, $memory_1, $memory_2);
#line 40
$memory_4 = "";
#line 40
$memory_3 = $memory_3 . $memory_4;
#line 40
undef($memory_4);
#line 40
undef($memory_0);
#line 40
undef($memory_1);
#line 40
undef($memory_2);
#line 40
return $memory_3;
#line 40
undef($memory_3);
#line 40
undef($memory_0);
#line 40
undef($memory_1);
#line 40
undef($memory_2);
#line 40
return;
}

sub string::substr2($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;$memory_0 = $_[0];$memory_1 = $_[1];
#line 44
$memory_3 = string::length($memory_0);
#line 44
$memory_3 = $memory_3 - $memory_1;
#line 44
$memory_2 = c_std_lib::string_sub($memory_0, $memory_1, $memory_3);
#line 44
undef($memory_3);
#line 44
$memory_3 = "";
#line 44
$memory_2 = $memory_2 . $memory_3;
#line 44
undef($memory_3);
#line 44
undef($memory_0);
#line 44
undef($memory_1);
#line 44
return $memory_2;
#line 44
undef($memory_2);
#line 44
undef($memory_0);
#line 44
undef($memory_1);
#line 44
return;
}

sub string::index2($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;$memory_0 = $_[0];$memory_1 = $_[1];
#line 48
$memory_3 = 0;
#line 48
$memory_2 = c_std_lib::string_index($memory_0, $memory_1, $memory_3);
#line 48
undef($memory_3);
#line 48
undef($memory_0);
#line 48
undef($memory_1);
#line 48
return $memory_2;
#line 48
undef($memory_2);
#line 48
undef($memory_0);
#line 48
undef($memory_1);
#line 48
return;
}

sub string::index($$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;$memory_0 = $_[0];$memory_1 = $_[1];$memory_2 = $_[2];
#line 52
$memory_3 = c_std_lib::string_index($memory_0, $memory_1, $memory_2);
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

sub string::replace($$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;$memory_0 = $_[0];$memory_1 = $_[1];$memory_2 = $_[2];
#line 56
$memory_3 = c_std_lib::string_replace($memory_0, $memory_1, $memory_2);
#line 56
undef($memory_0);
#line 56
undef($memory_1);
#line 56
undef($memory_2);
#line 56
return $memory_3;
#line 56
undef($memory_3);
#line 56
undef($memory_0);
#line 56
undef($memory_1);
#line 56
undef($memory_2);
#line 56
return;
}

sub string::ord($) {
my $memory_0;my $memory_1;$memory_0 = $_[0];
#line 60
$memory_1 = c_std_lib::string_ord($memory_0);
#line 60
undef($memory_0);
#line 60
return $memory_1;
#line 60
undef($memory_1);
#line 60
undef($memory_0);
#line 60
return;
}

sub string::is_digit($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;$memory_0 = $_[0];
#line 64
$memory_1 = string::ord($memory_0);
#line 65
$memory_2 = 48;
#line 65
$memory_2 = c_rt_lib::to_nl($memory_1 >= $memory_2);
#line 65
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 65
if (c_rt_lib::check_true($memory_3)) {goto label_1;}
#line 65
$memory_2 = 57;
#line 65
$memory_2 = c_rt_lib::to_nl($memory_1 <= $memory_2);
#line 65
label_1:
#line 65
undef($memory_3);
#line 65
undef($memory_0);
#line 65
undef($memory_1);
#line 65
return $memory_2;
#line 65
undef($memory_2);
#line 65
undef($memory_1);
#line 65
undef($memory_0);
#line 65
return;
}

sub string::is_letter($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;$memory_0 = $_[0];
#line 69
$memory_1 = string::ord($memory_0);
#line 70
$memory_2 = 97;
#line 70
$memory_2 = c_rt_lib::to_nl($memory_1 >= $memory_2);
#line 70
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 70
if (c_rt_lib::check_true($memory_3)) {goto label_2;}
#line 70
$memory_2 = 122;
#line 70
$memory_2 = c_rt_lib::to_nl($memory_1 <= $memory_2);
#line 70
label_2:
#line 70
undef($memory_3);
#line 70
if (c_rt_lib::check_true($memory_2)) {goto label_1;}
#line 70
$memory_2 = 65;
#line 70
$memory_2 = c_rt_lib::to_nl($memory_1 >= $memory_2);
#line 70
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 70
if (c_rt_lib::check_true($memory_3)) {goto label_3;}
#line 70
$memory_2 = 90;
#line 70
$memory_2 = c_rt_lib::to_nl($memory_1 <= $memory_2);
#line 70
label_3:
#line 70
undef($memory_3);
#line 70
label_1:
#line 70
undef($memory_0);
#line 70
undef($memory_1);
#line 70
return $memory_2;
#line 70
undef($memory_2);
#line 70
undef($memory_1);
#line 70
undef($memory_0);
#line 70
return;
}

sub string::chr($) {
my $memory_0;my $memory_1;$memory_0 = $_[0];
#line 74
$memory_1 = c_std_lib::string_chr($memory_0);
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

sub string::lt($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;$memory_0 = $_[0];$memory_1 = $_[1];
#line 78
$memory_2 = string::compare($memory_0, $memory_1);
#line 78
$memory_3 = 0;
#line 78
$memory_2 = c_rt_lib::to_nl($memory_2 < $memory_3);
#line 78
undef($memory_3);
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

sub string::gt($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;$memory_0 = $_[0];$memory_1 = $_[1];
#line 82
$memory_2 = string::compare($memory_0, $memory_1);
#line 82
$memory_3 = 0;
#line 82
$memory_2 = c_rt_lib::to_nl($memory_2 > $memory_3);
#line 82
undef($memory_3);
#line 82
undef($memory_0);
#line 82
undef($memory_1);
#line 82
return $memory_2;
#line 82
undef($memory_2);
#line 82
undef($memory_0);
#line 82
undef($memory_1);
#line 82
return;
}

sub string::compare($$) {
my $memory_0;my $memory_1;my $memory_2;$memory_0 = $_[0];$memory_1 = $_[1];
#line 86
$memory_2 = c_std_lib::string_compare($memory_0, $memory_1);
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

sub string::le($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;$memory_0 = $_[0];$memory_1 = $_[1];
#line 90
$memory_2 = string::compare($memory_0, $memory_1);
#line 90
$memory_3 = 0;
#line 90
$memory_2 = c_rt_lib::to_nl($memory_2 <= $memory_3);
#line 90
undef($memory_3);
#line 90
undef($memory_0);
#line 90
undef($memory_1);
#line 90
return $memory_2;
#line 90
undef($memory_2);
#line 90
undef($memory_0);
#line 90
undef($memory_1);
#line 90
return;
}

sub string::ge($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;$memory_0 = $_[0];$memory_1 = $_[1];
#line 94
$memory_2 = string::compare($memory_0, $memory_1);
#line 94
$memory_3 = 0;
#line 94
$memory_2 = c_rt_lib::to_nl($memory_2 >= $memory_3);
#line 94
undef($memory_3);
#line 94
undef($memory_0);
#line 94
undef($memory_1);
#line 94
return $memory_2;
#line 94
undef($memory_2);
#line 94
undef($memory_0);
#line 94
undef($memory_1);
#line 94
return;
}
