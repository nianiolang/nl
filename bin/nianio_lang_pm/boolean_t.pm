use c_rt_lib;
use ptd;
sub boolean_t::type;

return 1;

sub boolean_t::__type() {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;
#line 9
$memory_2 = ptd::none();
#line 9
$memory_3 = ptd::none();
#line 9
$memory_1 = {TRUE => $memory_2,FALSE => $memory_3,};
#line 9
undef($memory_2);
#line 9
undef($memory_3);
#line 9
$memory_0 = ptd::var($memory_1);
#line 9
undef($memory_1);
#line 9
return $memory_0;
#line 9
undef($memory_0);
#line 9
return;
}

my $_type;
sub boolean_t::type() {
	$_type = boolean_t::__type() unless defined $_type;
	return $_type;
}
