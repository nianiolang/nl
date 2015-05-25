use c_rt_lib;
use string;
use boolean_t;
use ptd;
sub string_utils::is_integer;
sub string_utils::is_float;
sub string_utils::is_number;

return 1;

sub string_utils::is_integer($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;$memory_0 = $_[0];
#line 10
$memory_1 = "";
#line 10
$memory_1 = $memory_0 . $memory_1;
#line 11
$memory_2 = string::length($memory_1);
#line 12
$memory_3 = 0;
#line 12
$memory_3 = c_rt_lib::to_nl($memory_1 eq $memory_3);
#line 12
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 12
if (c_rt_lib::check_true($memory_3)) {goto label_2;}
#line 12
$memory_4 = c_rt_lib::to_nl(1);
#line 12
undef($memory_0);
#line 12
undef($memory_1);
#line 12
undef($memory_2);
#line 12
undef($memory_3);
#line 12
return $memory_4;
#line 12
undef($memory_4);
#line 12
goto label_2;
#line 12
label_2:
#line 12
undef($memory_3);
#line 13
$memory_3 = 0;
#line 14
$memory_4 = 0;
#line 14
$memory_4 = c_rt_lib::to_nl($memory_2 == $memory_4);
#line 14
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 14
if (c_rt_lib::check_true($memory_4)) {goto label_4;}
#line 14
$memory_5 = c_rt_lib::to_nl(0);
#line 14
undef($memory_0);
#line 14
undef($memory_1);
#line 14
undef($memory_2);
#line 14
undef($memory_3);
#line 14
undef($memory_4);
#line 14
return $memory_5;
#line 14
undef($memory_5);
#line 14
goto label_4;
#line 14
label_4:
#line 14
undef($memory_4);
#line 15
$memory_5 = 1;
#line 15
$memory_4 = string::substr($memory_1, $memory_3, $memory_5);
#line 15
undef($memory_5);
#line 15
$memory_5 = "-";
#line 15
$memory_4 = c_rt_lib::to_nl($memory_4 eq $memory_5);
#line 15
undef($memory_5);
#line 15
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 15
if (c_rt_lib::check_true($memory_4)) {goto label_6;}
#line 15
$memory_5 = 1;
#line 15
$memory_3 = $memory_3 + $memory_5;
#line 15
undef($memory_5);
#line 15
goto label_6;
#line 15
label_6:
#line 15
undef($memory_4);
#line 16
$memory_4 = c_rt_lib::to_nl($memory_3 == $memory_2);
#line 16
if (c_rt_lib::check_true($memory_4)) {goto label_9;}
#line 16
$memory_5 = 1;
#line 16
$memory_4 = string::substr($memory_1, $memory_3, $memory_5);
#line 16
undef($memory_5);
#line 16
$memory_5 = 0;
#line 16
$memory_4 = c_rt_lib::to_nl($memory_4 eq $memory_5);
#line 16
undef($memory_5);
#line 16
label_9:
#line 16
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 16
if (c_rt_lib::check_true($memory_4)) {goto label_8;}
#line 16
$memory_5 = c_rt_lib::to_nl(0);
#line 16
undef($memory_0);
#line 16
undef($memory_1);
#line 16
undef($memory_2);
#line 16
undef($memory_3);
#line 16
undef($memory_4);
#line 16
return $memory_5;
#line 16
undef($memory_5);
#line 16
goto label_8;
#line 16
label_8:
#line 16
undef($memory_4);
#line 17
$memory_3 = $memory_3;
#line 17
label_11:
#line 17
$memory_4 = c_rt_lib::to_nl($memory_3 < $memory_2);
#line 17
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 17
if (c_rt_lib::check_true($memory_4)) {goto label_10;}
#line 18
$memory_7 = 1;
#line 18
$memory_6 = string::substr($memory_1, $memory_3, $memory_7);
#line 18
undef($memory_7);
#line 18
$memory_5 = string::is_digit($memory_6);
#line 18
undef($memory_6);
#line 18
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 18
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 18
if (c_rt_lib::check_true($memory_5)) {goto label_14;}
#line 18
$memory_6 = c_rt_lib::to_nl(0);
#line 18
undef($memory_0);
#line 18
undef($memory_1);
#line 18
undef($memory_2);
#line 18
undef($memory_3);
#line 18
undef($memory_4);
#line 18
undef($memory_5);
#line 18
return $memory_6;
#line 18
undef($memory_6);
#line 18
goto label_14;
#line 18
label_14:
#line 18
undef($memory_5);
#line 18
$memory_5 = 1;
#line 18
$memory_3 = $memory_3 + $memory_5;
#line 18
undef($memory_5);
#line 19
goto label_11;
#line 19
label_10:
#line 19
undef($memory_4);
#line 20
$memory_4 = c_rt_lib::to_nl(1);
#line 20
undef($memory_0);
#line 20
undef($memory_1);
#line 20
undef($memory_2);
#line 20
undef($memory_3);
#line 20
return $memory_4;
#line 20
undef($memory_4);
#line 20
undef($memory_1);
#line 20
undef($memory_2);
#line 20
undef($memory_3);
#line 20
undef($memory_0);
#line 20
return;
}

sub string_utils::is_float($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;$memory_0 = $_[0];
#line 24
$memory_1 = "";
#line 24
$memory_1 = $memory_0 . $memory_1;
#line 25
$memory_2 = string::length($memory_1);
#line 26
$memory_3 = 3;
#line 26
$memory_3 = c_rt_lib::to_nl($memory_2 < $memory_3);
#line 26
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 26
if (c_rt_lib::check_true($memory_3)) {goto label_2;}
#line 26
$memory_4 = c_rt_lib::to_nl(0);
#line 26
undef($memory_0);
#line 26
undef($memory_1);
#line 26
undef($memory_2);
#line 26
undef($memory_3);
#line 26
return $memory_4;
#line 26
undef($memory_4);
#line 26
goto label_2;
#line 26
label_2:
#line 26
undef($memory_3);
#line 27
$memory_3 = 0;
#line 28
$memory_5 = 1;
#line 28
$memory_4 = string::substr($memory_1, $memory_3, $memory_5);
#line 28
undef($memory_5);
#line 28
$memory_5 = "-";
#line 28
$memory_4 = c_rt_lib::to_nl($memory_4 eq $memory_5);
#line 28
undef($memory_5);
#line 28
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 28
if (c_rt_lib::check_true($memory_4)) {goto label_4;}
#line 28
$memory_5 = 1;
#line 28
$memory_3 = $memory_3 + $memory_5;
#line 28
undef($memory_5);
#line 28
goto label_4;
#line 28
label_4:
#line 28
undef($memory_4);
#line 29
$memory_3 = $memory_3;
#line 29
label_6:
#line 29
$memory_4 = c_rt_lib::to_nl($memory_3 < $memory_2);
#line 29
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 29
if (c_rt_lib::check_true($memory_4)) {goto label_5;}
#line 30
$memory_7 = 1;
#line 30
$memory_6 = string::substr($memory_1, $memory_3, $memory_7);
#line 30
undef($memory_7);
#line 30
$memory_5 = string::is_digit($memory_6);
#line 30
undef($memory_6);
#line 30
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 30
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 30
if (c_rt_lib::check_true($memory_5)) {goto label_9;}
#line 30
undef($memory_5);
#line 30
goto label_5;
#line 30
goto label_9;
#line 30
label_9:
#line 30
undef($memory_5);
#line 30
$memory_5 = 1;
#line 30
$memory_3 = $memory_3 + $memory_5;
#line 30
undef($memory_5);
#line 31
goto label_6;
#line 31
label_5:
#line 31
undef($memory_4);
#line 32
$memory_4 = 1;
#line 32
$memory_4 = c_rt_lib::to_nl($memory_3 < $memory_4);
#line 32
if (c_rt_lib::check_true($memory_4)) {goto label_12;}
#line 32
$memory_4 = 2;
#line 32
$memory_4 = $memory_3 + $memory_4;
#line 32
$memory_4 = c_rt_lib::to_nl($memory_4 > $memory_2);
#line 32
label_12:
#line 32
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 32
if (c_rt_lib::check_true($memory_4)) {goto label_11;}
#line 32
$memory_5 = c_rt_lib::to_nl(0);
#line 32
undef($memory_0);
#line 32
undef($memory_1);
#line 32
undef($memory_2);
#line 32
undef($memory_3);
#line 32
undef($memory_4);
#line 32
return $memory_5;
#line 32
undef($memory_5);
#line 32
goto label_11;
#line 32
label_11:
#line 32
undef($memory_4);
#line 33
$memory_5 = 1;
#line 33
$memory_4 = string::substr($memory_1, $memory_3, $memory_5);
#line 33
undef($memory_5);
#line 33
$memory_5 = ".";
#line 33
$memory_4 = c_rt_lib::to_nl($memory_4 eq $memory_5);
#line 33
undef($memory_5);
#line 33
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 33
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 33
if (c_rt_lib::check_true($memory_4)) {goto label_14;}
#line 33
$memory_5 = c_rt_lib::to_nl(0);
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
return $memory_5;
#line 33
undef($memory_5);
#line 33
goto label_14;
#line 33
label_14:
#line 33
undef($memory_4);
#line 34
$memory_4 = 1;
#line 34
$memory_3 = $memory_3 + $memory_4;
#line 34
undef($memory_4);
#line 34
label_16:
#line 34
$memory_4 = c_rt_lib::to_nl($memory_3 < $memory_2);
#line 34
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 34
if (c_rt_lib::check_true($memory_4)) {goto label_15;}
#line 35
$memory_7 = 1;
#line 35
$memory_6 = string::substr($memory_1, $memory_3, $memory_7);
#line 35
undef($memory_7);
#line 35
$memory_5 = string::is_digit($memory_6);
#line 35
undef($memory_6);
#line 35
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 35
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 35
if (c_rt_lib::check_true($memory_5)) {goto label_19;}
#line 35
$memory_6 = c_rt_lib::to_nl(0);
#line 35
undef($memory_0);
#line 35
undef($memory_1);
#line 35
undef($memory_2);
#line 35
undef($memory_3);
#line 35
undef($memory_4);
#line 35
undef($memory_5);
#line 35
return $memory_6;
#line 35
undef($memory_6);
#line 35
goto label_19;
#line 35
label_19:
#line 35
undef($memory_5);
#line 35
$memory_5 = 1;
#line 35
$memory_3 = $memory_3 + $memory_5;
#line 35
undef($memory_5);
#line 36
goto label_16;
#line 36
label_15:
#line 36
undef($memory_4);
#line 37
$memory_4 = c_rt_lib::to_nl(1);
#line 37
undef($memory_0);
#line 37
undef($memory_1);
#line 37
undef($memory_2);
#line 37
undef($memory_3);
#line 37
return $memory_4;
#line 37
undef($memory_4);
#line 37
undef($memory_1);
#line 37
undef($memory_2);
#line 37
undef($memory_3);
#line 37
undef($memory_0);
#line 37
return;
}

sub string_utils::is_number($) {
my $memory_0;my $memory_1;my $memory_2;$memory_0 = $_[0];
#line 41
$memory_1 = "";
#line 41
$memory_1 = $memory_0 . $memory_1;
#line 42
$memory_2 = string_utils::is_integer($memory_1);
#line 42
if (c_rt_lib::check_true($memory_2)) {goto label_1;}
#line 42
$memory_2 = string_utils::is_float($memory_1);
#line 42
label_1:
#line 42
undef($memory_0);
#line 42
undef($memory_1);
#line 42
return $memory_2;
#line 42
undef($memory_2);
#line 42
undef($memory_1);
#line 42
undef($memory_0);
#line 42
return;
}
