use c_rt_lib;
use c_std_lib;
sub hash::get_value;
sub hash::has_key;
sub hash::set_value;
sub hash::delete;
sub hash::size;
sub hash::keys;

return 1;

sub hash::get_value($$) {
my $memory_0;my $memory_1;my $memory_2;$memory_0 = $_[0];$memory_1 = $_[1];
#line 8
$memory_2 = c_std_lib::hash_get_value($memory_0, $memory_1);
#line 8
undef($memory_0);
#line 8
undef($memory_1);
#line 8
return $memory_2;
#line 8
undef($memory_2);
#line 8
undef($memory_0);
#line 8
undef($memory_1);
#line 8
return;
}

sub hash::has_key($$) {
my $memory_0;my $memory_1;my $memory_2;$memory_0 = $_[0];$memory_1 = $_[1];
#line 12
$memory_2 = c_std_lib::hash_has_key($memory_0, $memory_1);
#line 12
undef($memory_0);
#line 12
undef($memory_1);
#line 12
return $memory_2;
#line 12
undef($memory_2);
#line 12
undef($memory_0);
#line 12
undef($memory_1);
#line 12
return;
}

sub hash::set_value($$$) {
my $memory_0;my $memory_1;my $memory_2;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];$memory_2 = $_[2];
#line 16
c_std_lib::hash_set_value($memory_0, $memory_1, $memory_2);
#line 16
undef($memory_1);
#line 16
undef($memory_2);
#line 16
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub hash::delete($$) {
my $memory_0;my $memory_1;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];
#line 20
c_std_lib::hash_delete($memory_0, $memory_1);
#line 20
undef($memory_1);
#line 20
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub hash::size($) {
my $memory_0;my $memory_1;$memory_0 = $_[0];
#line 24
$memory_1 = c_std_lib::hash_size($memory_0);
#line 24
undef($memory_0);
#line 24
return $memory_1;
#line 24
undef($memory_1);
#line 24
undef($memory_0);
#line 24
return;
}

sub hash::keys($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;$memory_0 = $_[0];
#line 28
$memory_1 = [];
#line 29
$memory_4 = c_rt_lib::init_iter($memory_0);
#line 29
label_3:
#line 29
$memory_2 = c_rt_lib::is_end_hash($memory_4);
#line 29
if (c_rt_lib::check_true($memory_2)) {goto label_1;}
#line 29
$memory_2 = c_rt_lib::get_key_iter($memory_4);
#line 29
$memory_3 = c_rt_lib::hash_get_value($memory_0, $memory_2);
#line 30
c_std_lib::array_push($memory_1, $memory_2);
#line 31
$memory_4 = c_rt_lib::next_iter($memory_4);
#line 31
goto label_3;
#line 31
label_1:
#line 31
undef($memory_2);
#line 31
undef($memory_3);
#line 31
undef($memory_4);
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
