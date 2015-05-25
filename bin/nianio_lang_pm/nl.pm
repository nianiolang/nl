use c_rt_lib;
use c_std_lib;
use boolean_t;
sub nl::is_array;
sub nl::is_hash;
sub nl::is_sim;
sub nl::is_variant;
sub nl::print;

return 1;

sub nl::is_array($) {
my $memory_0;my $memory_1;$memory_0 = $_[0];
#line 9
$memory_1 = c_std_lib::is_array($memory_0);
#line 9
if (c_rt_lib::check_true($memory_1)) {goto label_2;}
#line 9
$memory_1 = c_rt_lib::to_nl(0);
#line 9
goto label_1;
#line 9
label_2:
#line 9
$memory_1 = c_rt_lib::to_nl(1);
#line 9
label_1:
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

sub nl::is_hash($) {
my $memory_0;my $memory_1;$memory_0 = $_[0];
#line 13
$memory_1 = c_std_lib::is_hash($memory_0);
#line 13
if (c_rt_lib::check_true($memory_1)) {goto label_2;}
#line 13
$memory_1 = c_rt_lib::to_nl(0);
#line 13
goto label_1;
#line 13
label_2:
#line 13
$memory_1 = c_rt_lib::to_nl(1);
#line 13
label_1:
#line 13
undef($memory_0);
#line 13
return $memory_1;
#line 13
undef($memory_1);
#line 13
undef($memory_0);
#line 13
return;
}

sub nl::is_sim($) {
my $memory_0;my $memory_1;$memory_0 = $_[0];
#line 17
$memory_1 = c_std_lib::is_sim($memory_0);
#line 17
if (c_rt_lib::check_true($memory_1)) {goto label_2;}
#line 17
$memory_1 = c_rt_lib::to_nl(0);
#line 17
goto label_1;
#line 17
label_2:
#line 17
$memory_1 = c_rt_lib::to_nl(1);
#line 17
label_1:
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

sub nl::is_variant($) {
my $memory_0;my $memory_1;$memory_0 = $_[0];
#line 21
$memory_1 = c_std_lib::is_variant($memory_0);
#line 21
if (c_rt_lib::check_true($memory_1)) {goto label_2;}
#line 21
$memory_1 = c_rt_lib::to_nl(0);
#line 21
goto label_1;
#line 21
label_2:
#line 21
$memory_1 = c_rt_lib::to_nl(1);
#line 21
label_1:
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

sub nl::print($) {
my $memory_0;$memory_0 = $_[0];
#line 25
c_std_lib::print($memory_0);
#line 25
undef($memory_0);
#line 25
return;
}
