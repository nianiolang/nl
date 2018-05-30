use c_rt_lib;
sub boolean::to_nl;
sub boolean::check_true;

return 1;

sub boolean::to_nl($) {
my $memory_0;my $memory_1;$memory_0 = $_[0];
#line 7
$memory_1 = 1;
#line 7
$memory_1 = c_rt_lib::to_nl($memory_0 eq $memory_1);
#line 7
undef($memory_0);
#line 7
return $memory_1;
#line 7
undef($memory_1);
#line 7
undef($memory_0);
#line 7
return;
}

sub boolean::check_true($) {
my $memory_0;my $memory_1;$memory_0 = $_[0];
#line 11
if (c_rt_lib::check_true($memory_0)) {goto label_3;}
#line 11
$memory_1 = 0;
#line 11
goto label_5;
#line 11
label_3:
#line 11
$memory_1 = 1;
#line 11
label_5:
#line 11
undef($memory_0);
#line 11
return $memory_1;
#line 11
undef($memory_1);
#line 11
undef($memory_0);
#line 11
return;
}
