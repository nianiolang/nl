use c_rt_lib;
use c_std_lib;
use ptd;
sub func::exec;
sub func::exec_ref;

return 1;

sub func::exec($$) {
my $memory_0;my $memory_1;my $memory_2;$memory_0 = $_[0];$memory_1 = $_[1];
#line 9
$memory_2 = c_std_lib::exec($memory_0, $memory_1);
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

sub func::exec_ref($$) {
my $memory_0;my $memory_1;my $memory_2;$memory_0 = $_[0];$memory_1 = $_[1];Scalar::Util::weaken($_[1]) if ref($_[1]);
#line 13
$memory_2 = c_std_lib::exec($memory_0, $memory_1);
#line 13
undef($memory_0);
#line 13
$_[1] = $memory_1;return $memory_2;
#line 13
undef($memory_2);
#line 13
undef($memory_0);
#line 13
$_[1] = $memory_1;return;
$_[1] = $memory_1;}
