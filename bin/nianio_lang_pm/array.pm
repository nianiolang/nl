use c_rt_lib;
use c_std_lib;
sub array::subarray;
sub array::join;
sub array::push;
sub array::pop;
sub array::append;
sub array::len;
sub array::cmp;
sub array::sort;

return 1;

sub array::subarray($$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;$memory_0 = $_[0];$memory_1 = $_[1];$memory_2 = $_[2];
#line 8
$memory_3 = c_std_lib::array_sub($memory_0, $memory_1, $memory_2);
#line 8
undef($memory_0);
#line 8
undef($memory_1);
#line 8
undef($memory_2);
#line 8
return $memory_3;
#line 8
undef($memory_3);
#line 8
undef($memory_0);
#line 8
undef($memory_1);
#line 8
undef($memory_2);
#line 8
return;
}

sub array::join($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;$memory_0 = $_[0];$memory_1 = $_[1];
#line 12
$memory_2 = "";
#line 13
$memory_3 = c_rt_lib::to_nl(1);
#line 14
$memory_5 = 0;
#line 14
$memory_6 = 1;
#line 14
$memory_7 = c_rt_lib::array_len($memory_1);
#line 14
label_3:
#line 14
$memory_8 = c_rt_lib::to_nl($memory_5 >= $memory_7);
#line 14
if (c_rt_lib::check_true($memory_8)) {goto label_1;}
#line 14
$memory_4 = $memory_1->[$memory_5];
#line 15
$memory_9 = $memory_3;
#line 15
$memory_9 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_9));
#line 15
$memory_9 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_9));
#line 15
if (c_rt_lib::check_true($memory_9)) {goto label_5;}
#line 15
$memory_2 = $memory_2 . $memory_0;
#line 15
goto label_5;
#line 15
label_5:
#line 15
undef($memory_9);
#line 16
$memory_2 = $memory_2 . $memory_4;
#line 17
$memory_9 = c_rt_lib::to_nl(0);
#line 17
$memory_3 = $memory_9;
#line 17
undef($memory_9);
#line 18
$memory_5 = $memory_5 + $memory_6;
#line 18
goto label_3;
#line 18
label_1:
#line 18
undef($memory_4);
#line 18
undef($memory_5);
#line 18
undef($memory_6);
#line 18
undef($memory_7);
#line 18
undef($memory_8);
#line 19
undef($memory_0);
#line 19
undef($memory_1);
#line 19
undef($memory_3);
#line 19
return $memory_2;
#line 19
undef($memory_2);
#line 19
undef($memory_3);
#line 19
undef($memory_0);
#line 19
undef($memory_1);
#line 19
return;
}

sub array::push($$) {
my $memory_0;my $memory_1;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];
#line 23
c_std_lib::array_push($memory_0, $memory_1);
#line 23
undef($memory_1);
#line 23
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub array::pop($) {
my $memory_0;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);
#line 26
c_std_lib::array_pop($memory_0);
#line 26
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub array::append($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];
#line 30
$memory_3 = 0;
#line 30
$memory_4 = 1;
#line 30
$memory_5 = c_rt_lib::array_len($memory_1);
#line 30
label_3:
#line 30
$memory_6 = c_rt_lib::to_nl($memory_3 >= $memory_5);
#line 30
if (c_rt_lib::check_true($memory_6)) {goto label_1;}
#line 30
$memory_2 = $memory_1->[$memory_3];
#line 31
array::push($memory_0, $memory_2);
#line 32
$memory_3 = $memory_3 + $memory_4;
#line 32
goto label_3;
#line 32
label_1:
#line 32
undef($memory_2);
#line 32
undef($memory_3);
#line 32
undef($memory_4);
#line 32
undef($memory_5);
#line 32
undef($memory_6);
#line 32
undef($memory_1);
#line 32
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub array::len($) {
my $memory_0;my $memory_1;$memory_0 = $_[0];
#line 36
$memory_1 = c_std_lib::array_len($memory_0);
#line 36
undef($memory_0);
#line 36
return $memory_1;
#line 36
undef($memory_1);
#line 36
undef($memory_0);
#line 36
return;
}

sub array::cmp($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;$memory_0 = $_[0];$memory_1 = $_[1];
#line 40
$memory_2 = c_std_lib::string_compare($memory_0, $memory_1);
#line 40
$memory_3 = 0;
#line 40
$memory_2 = c_rt_lib::to_nl($memory_2 < $memory_3);
#line 40
undef($memory_3);
#line 40
undef($memory_0);
#line 40
undef($memory_1);
#line 40
return $memory_2;
#line 40
undef($memory_2);
#line 40
undef($memory_0);
#line 40
undef($memory_1);
#line 40
return;
}

sub array::sort($) {
my $memory_0;my $memory_1;my $memory_2;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);
#line 44
$memory_2 = {
	module => "array",
	name => "cmp",
};
#line 44
$memory_2 = c_rt_lib::ov_mk_arg('ref', $memory_2);
#line 44
$memory_1 = c_std_lib::array_sort($memory_0, $memory_2);
#line 44
undef($memory_2);
#line 44
$memory_0 = $memory_1;
#line 44
undef($memory_1);
#line 44
$_[0] = $memory_0;return;
$_[0] = $memory_0;}
