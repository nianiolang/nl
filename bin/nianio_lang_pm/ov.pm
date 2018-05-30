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
#line 9
$memory_1 = c_rt_lib::ov_none_new($memory_0);
#line 9
undef($memory_0);
#line 9
return $memory_1;
#line 9
undef($memory_1);
#line 9
undef($memory_0);
#line 9
return;
}

sub ov::mk_val($$) {
my $memory_0;my $memory_1;my $memory_2;$memory_0 = $_[0];$memory_1 = $_[1];
#line 13
$memory_2 = c_rt_lib::ov_arg_new($memory_0, $memory_1);
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

sub ov::has_value($) {
my $memory_0;my $memory_1;$memory_0 = $_[0];
#line 17
$memory_1 = c_rt_lib::ov_has_value($memory_0);
#line 17
undef($memory_0);
#line 17
return $memory_1;
#line 17
undef($memory_1);
#line 17
undef($memory_0);
#line 17
return;
}

sub ov::get_element($) {
my $memory_0;my $memory_1;$memory_0 = $_[0];
#line 21
$memory_1 = c_rt_lib::ov_get_element($memory_0);
#line 21
undef($memory_0);
#line 21
return $memory_1;
#line 21
undef($memory_1);
#line 21
undef($memory_0);
#line 21
return;
}

sub ov::get_value($) {
my $memory_0;my $memory_1;$memory_0 = $_[0];
#line 25
$memory_1 = c_rt_lib::ov_get_value($memory_0);
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

sub ov::is($$) {
my $memory_0;my $memory_1;my $memory_2;$memory_0 = $_[0];$memory_1 = $_[1];
#line 29
$memory_2 = c_rt_lib::ov_is($memory_0, $memory_1);
#line 29
undef($memory_0);
#line 29
undef($memory_1);
#line 29
return $memory_2;
#line 29
undef($memory_2);
#line 29
undef($memory_0);
#line 29
undef($memory_1);
#line 29
return;
}

sub ov::as($$) {
my $memory_0;my $memory_1;my $memory_2;$memory_0 = $_[0];$memory_1 = $_[1];
#line 33
$memory_2 = c_rt_lib::ov_as($memory_0, $memory_1);
#line 33
undef($memory_0);
#line 33
undef($memory_1);
#line 33
return $memory_2;
#line 33
undef($memory_2);
#line 33
undef($memory_0);
#line 33
undef($memory_1);
#line 33
return;
}
