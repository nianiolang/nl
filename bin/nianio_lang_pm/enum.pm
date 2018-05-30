use c_rt_lib;
use ov;
use boolean_t;
sub enum::eq;

return 1;

sub enum::eq($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;$memory_0 = $_[0];$memory_1 = $_[1];
#line 10
$memory_2 = ov::has_value($memory_0);
#line 10
if (c_rt_lib::check_true($memory_2)) {goto label_3;}
#line 10
$memory_2 = ov::has_value($memory_1);
#line 10
label_3:
#line 10
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 10
if (c_rt_lib::check_true($memory_2)) {goto label_9;}
#line 10
$memory_3 = [];
#line 10
die(dfile::ssave($memory_3));
#line 10
goto label_9;
#line 10
label_9:
#line 10
undef($memory_2);
#line 10
undef($memory_3);
#line 11
$memory_2 = ov::get_element($memory_0);
#line 11
$memory_3 = ov::get_element($memory_1);
#line 11
$memory_2 = c_rt_lib::to_nl($memory_2 eq $memory_3);
#line 11
undef($memory_3);
#line 11
undef($memory_0);
#line 11
undef($memory_1);
#line 11
return $memory_2;
#line 11
undef($memory_2);
#line 11
undef($memory_0);
#line 11
undef($memory_1);
#line 11
return;
}
