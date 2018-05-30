use c_rt_lib;
use c_fe_lib;
sub nsystem::time_microsec;
sub nsystem::get_pid;
sub nsystem::time;
sub nsystem::localtime;

return 1;

sub nsystem::time_microsec() {
my $memory_0;
#line 9
$memory_0 = c_fe_lib::get_time();
#line 9
return $memory_0;
#line 9
undef($memory_0);
#line 9
return;
}

sub nsystem::get_pid() {
my $memory_0;
#line 13
$memory_0 = c_fe_lib::get_pid();
#line 13
return $memory_0;
#line 13
undef($memory_0);
#line 13
return;
}

sub nsystem::time() {
my $memory_0;
#line 17
$memory_0 = c_fe_lib::time();
#line 17
return $memory_0;
#line 17
undef($memory_0);
#line 17
return;
}

sub nsystem::localtime($) {
my $memory_0;my $memory_1;$memory_0 = $_[0];
#line 21
$memory_1 = c_fe_lib::localtime($memory_0);
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
