use c_rt_lib;
use c_rt_lib;
sub ov::mk;
sub ov::mk_val;
sub ov::has_value;
sub ov::get_element;
sub ov::get_value;
sub ov::is;
sub ov::as;

return 1;

sub ov::mk($) {
my $memory_0;my $memory_1;$memory_0 = $_[0];
#line 8
$memory_1 = c_rt_lib::ov_none_new($memory_0);
#line 8
undef($memory_0);
#line 8
return $memory_1;
#line 8
undef($memory_1);
#line 8
undef($memory_0);
#line 8
return;
}

sub ov::mk_val($$) {
my $memory_0;my $memory_1;my $memory_2;$memory_0 = $_[0];$memory_1 = $_[1];
#line 12
$memory_2 = c_rt_lib::ov_arg_new($memory_0, $memory_1);
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

sub ov::has_value($) {
my $memory_0;my $memory_1;$memory_0 = $_[0];
#line 16
$memory_1 = c_rt_lib::ov_has_value($memory_0);
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

sub ov::get_element($) {
my $memory_0;my $memory_1;$memory_0 = $_[0];
#line 20
$memory_1 = c_rt_lib::ov_get_element($memory_0);
#line 20
undef($memory_0);
#line 20
return $memory_1;
#line 20
undef($memory_1);
#line 20
undef($memory_0);
#line 20
return;
}

sub ov::get_value($) {
my $memory_0;my $memory_1;$memory_0 = $_[0];
#line 24
$memory_1 = c_rt_lib::ov_get_value($memory_0);
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

sub ov::is($$) {
my $memory_0;my $memory_1;my $memory_2;$memory_0 = $_[0];$memory_1 = $_[1];
#line 28
$memory_2 = c_rt_lib::ov_is($memory_0, $memory_1);
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

sub ov::as($$) {
my $memory_0;my $memory_1;my $memory_2;$memory_0 = $_[0];$memory_1 = $_[1];
#line 32
$memory_2 = c_rt_lib::ov_as($memory_0, $memory_1);
#line 32
undef($memory_0);
#line 32
undef($memory_1);
#line 32
return $memory_2;
#line 32
undef($memory_2);
#line 32
undef($memory_0);
#line 32
undef($memory_1);
#line 32
return;
}
