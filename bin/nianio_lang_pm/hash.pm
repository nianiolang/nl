use c_rt_lib;
use c_std_lib;
sub hash::get_value;
sub hash::has_key;
sub hash::set_value;
sub hash::delete;
sub hash::size;
sub hash::keys;
sub hash::values;
sub hash::merge;
sub hash::add_all;
sub hash::set2keys;
sub hash::has2keys;
sub hash::get2keys;
sub hash::set3keys;

return 1;

sub hash::get_value($$) {
my $memory_0;my $memory_1;my $memory_2;$memory_0 = $_[0];$memory_1 = $_[1];
#line 9
$memory_2 = c_std_lib::hash_get_value($memory_0, $memory_1);
#line 9
undef($memory_0);
#line 9
undef($memory_1);
#line 9
return $memory_2;
#line 9
undef($memory_2);
#line 9
undef($memory_0);
#line 9
undef($memory_1);
#line 9
return;
}

sub hash::has_key($$) {
my $memory_0;my $memory_1;my $memory_2;$memory_0 = $_[0];$memory_1 = $_[1];
#line 13
$memory_2 = c_std_lib::hash_has_key($memory_0, $memory_1);
#line 13
undef($memory_0);
#line 13
undef($memory_1);
#line 13
return $memory_2;
#line 13
undef($memory_2);
#line 13
undef($memory_0);
#line 13
undef($memory_1);
#line 13
return;
}

sub hash::set_value($$$) {
my $memory_0;my $memory_1;my $memory_2;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];$memory_2 = $_[2];
#line 17
c_std_lib::hash_set_value($memory_0, $memory_1, $memory_2);
#line 17
undef($memory_1);
#line 17
undef($memory_2);
#line 17
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub hash::delete($$) {
my $memory_0;my $memory_1;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];
#line 21
c_std_lib::hash_delete($memory_0, $memory_1);
#line 21
undef($memory_1);
#line 21
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub hash::size($) {
my $memory_0;my $memory_1;$memory_0 = $_[0];
#line 25
$memory_1 = c_std_lib::hash_size($memory_0);
#line 25
undef($memory_0);
#line 25
return $memory_1;
#line 25
undef($memory_1);
#line 25
undef($memory_0);
#line 25
return;
}

sub hash::keys($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;$memory_0 = $_[0];
#line 29
$memory_1 = [];
#line 30
$memory_4 = c_rt_lib::init_iter($memory_0);
#line 30
label_2:
#line 30
$memory_2 = c_rt_lib::is_end_hash($memory_4);
#line 30
if (c_rt_lib::check_true($memory_2)) {goto label_10;}
#line 30
$memory_2 = c_rt_lib::get_key_iter($memory_4);
#line 30
$memory_3 = c_rt_lib::hash_get_value($memory_0, $memory_2);
#line 31
c_std_lib::array_push($memory_1, $memory_2);
#line 32
$memory_4 = c_rt_lib::next_iter($memory_4);
#line 32
goto label_2;
#line 32
label_10:
#line 32
undef($memory_2);
#line 32
undef($memory_3);
#line 32
undef($memory_4);
#line 33
undef($memory_0);
#line 33
return $memory_1;
#line 33
undef($memory_1);
#line 33
undef($memory_0);
#line 33
return;
}

sub hash::values($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;$memory_0 = $_[0];
#line 37
$memory_1 = [];
#line 38
$memory_4 = c_rt_lib::init_iter($memory_0);
#line 38
label_2:
#line 38
$memory_2 = c_rt_lib::is_end_hash($memory_4);
#line 38
if (c_rt_lib::check_true($memory_2)) {goto label_10;}
#line 38
$memory_2 = c_rt_lib::get_key_iter($memory_4);
#line 38
$memory_3 = c_rt_lib::hash_get_value($memory_0, $memory_2);
#line 39
c_std_lib::array_push($memory_1, $memory_3);
#line 40
$memory_4 = c_rt_lib::next_iter($memory_4);
#line 40
goto label_2;
#line 40
label_10:
#line 40
undef($memory_2);
#line 40
undef($memory_3);
#line 40
undef($memory_4);
#line 41
undef($memory_0);
#line 41
return $memory_1;
#line 41
undef($memory_1);
#line 41
undef($memory_0);
#line 41
return;
}

sub hash::merge($$) {
my $memory_0;my $memory_1;my $memory_2;$memory_0 = $_[0];$memory_1 = $_[1];
#line 45
$memory_2 = $memory_0;
#line 46
hash::add_all($memory_2, $memory_1);
#line 47
undef($memory_0);
#line 47
undef($memory_1);
#line 47
return $memory_2;
#line 47
undef($memory_2);
#line 47
undef($memory_0);
#line 47
undef($memory_1);
#line 47
return;
}

sub hash::add_all($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];
#line 51
$memory_4 = c_rt_lib::init_iter($memory_1);
#line 51
label_1:
#line 51
$memory_2 = c_rt_lib::is_end_hash($memory_4);
#line 51
if (c_rt_lib::check_true($memory_2)) {goto label_9;}
#line 51
$memory_2 = c_rt_lib::get_key_iter($memory_4);
#line 51
$memory_3 = c_rt_lib::hash_get_value($memory_1, $memory_2);
#line 51
hash::set_value($memory_0, $memory_2, $memory_3);
#line 51
$memory_4 = c_rt_lib::next_iter($memory_4);
#line 51
goto label_1;
#line 51
label_9:
#line 51
undef($memory_2);
#line 51
undef($memory_3);
#line 51
undef($memory_4);
#line 51
undef($memory_1);
#line 51
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub hash::set2keys($$$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];$memory_2 = $_[2];$memory_3 = $_[3];
#line 55
$memory_4 = hash::has_key($memory_0, $memory_1);
#line 55
if (c_rt_lib::check_true($memory_4)) {goto label_4;}
#line 55
$memory_4 = {};
#line 55
goto label_6;
#line 55
label_4:
#line 55
$memory_4 = hash::get_value($memory_0, $memory_1);
#line 55
label_6:
#line 56
$memory_5 = 0;
#line 56
hash::set_value($memory_0, $memory_1, $memory_5);
#line 56
undef($memory_5);
#line 57
hash::set_value($memory_4, $memory_2, $memory_3);
#line 58
hash::set_value($memory_0, $memory_1, $memory_4);
#line 58
undef($memory_4);
#line 58
undef($memory_1);
#line 58
undef($memory_2);
#line 58
undef($memory_3);
#line 58
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub hash::has2keys($$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;$memory_0 = $_[0];$memory_1 = $_[1];$memory_2 = $_[2];
#line 62
$memory_3 = hash::has_key($memory_0, $memory_1);
#line 62
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 62
if (c_rt_lib::check_true($memory_4)) {goto label_6;}
#line 62
$memory_5 = hash::get_value($memory_0, $memory_1);
#line 62
$memory_3 = hash::has_key($memory_5, $memory_2);
#line 62
undef($memory_5);
#line 62
label_6:
#line 62
undef($memory_4);
#line 62
undef($memory_0);
#line 62
undef($memory_1);
#line 62
undef($memory_2);
#line 62
return $memory_3;
#line 62
undef($memory_3);
#line 62
undef($memory_0);
#line 62
undef($memory_1);
#line 62
undef($memory_2);
#line 62
return;
}

sub hash::get2keys($$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;$memory_0 = $_[0];$memory_1 = $_[1];$memory_2 = $_[2];
#line 66
$memory_4 = hash::get_value($memory_0, $memory_1);
#line 66
$memory_3 = hash::get_value($memory_4, $memory_2);
#line 66
undef($memory_4);
#line 66
undef($memory_0);
#line 66
undef($memory_1);
#line 66
undef($memory_2);
#line 66
return $memory_3;
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

sub hash::set3keys($$$$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];$memory_2 = $_[2];$memory_3 = $_[3];$memory_4 = $_[4];
#line 70
$memory_5 = hash::has_key($memory_0, $memory_1);
#line 70
if (c_rt_lib::check_true($memory_5)) {goto label_4;}
#line 70
$memory_5 = {};
#line 70
goto label_6;
#line 70
label_4:
#line 70
$memory_5 = hash::get_value($memory_0, $memory_1);
#line 70
label_6:
#line 71
$memory_6 = 0;
#line 71
hash::set_value($memory_0, $memory_1, $memory_6);
#line 71
undef($memory_6);
#line 72
hash::set2keys($memory_5, $memory_2, $memory_3, $memory_4);
#line 73
hash::set_value($memory_0, $memory_1, $memory_5);
#line 73
undef($memory_5);
#line 73
undef($memory_1);
#line 73
undef($memory_2);
#line 73
undef($memory_3);
#line 73
undef($memory_4);
#line 73
$_[0] = $memory_0;return;
$_[0] = $memory_0;}
