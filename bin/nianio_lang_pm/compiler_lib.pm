use c_rt_lib;
use ptd;
sub compiler_lib::error_type_t;
sub compiler_lib::error_t;
sub compiler_lib::errors_t;

return 1;

sub compiler_lib::__error_type_t() {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;
#line 6
$memory_2 = ptd::none();
#line 7
$memory_3 = ptd::none();
#line 7
$memory_1 = {error => $memory_2,warning => $memory_3,};
#line 7
undef($memory_2);
#line 7
undef($memory_3);
#line 7
$memory_0 = ptd::var($memory_1);
#line 7
undef($memory_1);
#line 7
return $memory_0;
#line 7
undef($memory_0);
#line 7
return;
}

my $_error_type_t;
sub compiler_lib::error_type_t() {
	$_error_type_t = compiler_lib::__error_type_t() unless defined $_error_type_t;
	return $_error_type_t;
}

sub compiler_lib::__error_t() {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;
#line 13
$memory_2 = ptd::sim();
#line 14
$memory_3 = ptd::sim();
#line 15
$memory_4 = ptd::sim();
#line 16
$memory_5 = ptd::sim();
#line 17
$memory_6 = {
	module => "compiler_lib",
	name => "error_type_t",
};
#line 17
$memory_6 = c_rt_lib::ov_mk_arg('ref', $memory_6);
#line 17
$memory_1 = {line => $memory_2,column => $memory_3,message => $memory_4,module => $memory_5,type => $memory_6,};
#line 17
undef($memory_2);
#line 17
undef($memory_3);
#line 17
undef($memory_4);
#line 17
undef($memory_5);
#line 17
undef($memory_6);
#line 17
$memory_0 = ptd::rec($memory_1);
#line 17
undef($memory_1);
#line 17
return $memory_0;
#line 17
undef($memory_0);
#line 17
return;
}

my $_error_t;
sub compiler_lib::error_t() {
	$_error_t = compiler_lib::__error_t() unless defined $_error_t;
	return $_error_t;
}

sub compiler_lib::__errors_t() {
my $memory_0;my $memory_1;
#line 22
$memory_1 = {
	module => "compiler_lib",
	name => "error_t",
};
#line 22
$memory_1 = c_rt_lib::ov_mk_arg('ref', $memory_1);
#line 22
$memory_0 = ptd::arr($memory_1);
#line 22
undef($memory_1);
#line 22
return $memory_0;
#line 22
undef($memory_0);
#line 22
return;
}

my $_errors_t;
sub compiler_lib::errors_t() {
	$_errors_t = compiler_lib::__errors_t() unless defined $_errors_t;
	return $_errors_t;
}
