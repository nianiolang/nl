use c_rt_lib;
use c_std_lib;
use ptd;
use array;
sub func::func_t;
sub func::exec;
sub func::exec_ref;
sub func::exec_with_ref_arg;

return 1;

sub func::__func_t() {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;
#line 13
$memory_4 = ptd::sim();
#line 14
$memory_5 = ptd::sim();
#line 14
$memory_3 = {module => $memory_4,name => $memory_5,};
#line 14
undef($memory_4);
#line 14
undef($memory_5);
#line 14
$memory_2 = ptd::rec($memory_3);
#line 14
undef($memory_3);
#line 14
$memory_1 = {ref => $memory_2,};
#line 14
undef($memory_2);
#line 14
$memory_0 = ptd::var($memory_1);
#line 14
undef($memory_1);
#line 14
return $memory_0;
#line 14
undef($memory_0);
#line 14
return;
}

my $_func_t;
sub func::func_t() {
	$_func_t = func::__func_t() unless defined $_func_t;
	return $_func_t;
}

sub func::exec($$) {
my $memory_0;my $memory_1;my $memory_2;$memory_0 = $_[0];$memory_1 = $_[1];
#line 20
$memory_2 = c_std_lib::exec($memory_0, $memory_1);
#line 20
undef($memory_0);
#line 20
undef($memory_1);
#line 20
return $memory_2;
#line 20
undef($memory_2);
#line 20
undef($memory_0);
#line 20
undef($memory_1);
#line 20
return;
}

sub func::exec_ref($$) {
my $memory_0;my $memory_1;my $memory_2;$memory_0 = $_[0];$memory_1 = $_[1];Scalar::Util::weaken($_[1]) if ref($_[1]);
#line 24
$memory_2 = c_std_lib::exec($memory_0, $memory_1);
#line 24
undef($memory_0);
#line 24
$_[1] = $memory_1;return $memory_2;
#line 24
undef($memory_2);
#line 24
undef($memory_0);
#line 24
$_[1] = $memory_1;return;
$_[1] = $memory_1;}

sub func::exec_with_ref_arg($$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;$memory_0 = $_[0];$memory_1 = $_[1];$memory_2 = $_[2];Scalar::Util::weaken($_[2]) if ref($_[2]);
#line 28
array::push($memory_1, $memory_2);
#line 29
$memory_3 = 0;
#line 29
$memory_2 = $memory_3;
#line 29
undef($memory_3);
#line 30
$memory_3 = func::exec_ref($memory_0, $memory_1);
#line 31
$memory_5 = array::len($memory_1);
#line 31
$memory_6 = 1;
#line 31
$memory_5 = $memory_5 - $memory_6;
#line 31
undef($memory_6);
#line 31
$memory_4 = $memory_1->[$memory_5];
#line 31
undef($memory_5);
#line 31
$memory_2 = $memory_4;
#line 31
undef($memory_4);
#line 32
undef($memory_0);
#line 32
undef($memory_1);
#line 32
$_[2] = $memory_2;return $memory_3;
#line 32
undef($memory_3);
#line 32
undef($memory_0);
#line 32
undef($memory_1);
#line 32
$_[2] = $memory_2;return;
$_[2] = $memory_2;}
