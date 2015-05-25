use c_rt_lib;
use hash;
use ptd;
use ov;
sub tct::arr;
sub tct::rec;
sub tct::ref;
sub tct::sim;
sub tct::none;
sub tct::void;
sub tct::empty;
sub tct::hash;
sub tct::tct_im;
sub tct::bool;
sub tct::var;
sub tct::meta_type;

return 1;

sub tct::arr($) {
my $memory_0;my $memory_1;$memory_0 = $_[0];
#line 12
$memory_1 = c_rt_lib::ov_mk_arg('tct_arr', $memory_0);
#line 12
undef($memory_0);
#line 12
return $memory_1;
#line 12
undef($memory_1);
#line 12
undef($memory_0);
#line 12
return;
}

sub tct::rec($) {
my $memory_0;my $memory_1;$memory_0 = $_[0];
#line 16
$memory_1 = c_rt_lib::ov_mk_arg('tct_rec', $memory_0);
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

sub tct::ref($) {
my $memory_0;my $memory_1;$memory_0 = $_[0];
#line 20
$memory_1 = c_rt_lib::ov_mk_arg('tct_ref', $memory_0);
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

sub tct::__sim() {
my $memory_0;
#line 24
$memory_0 = c_rt_lib::ov_mk_none('tct_sim');
#line 24
return $memory_0;
#line 24
undef($memory_0);
#line 24
return;
}

my $_sim;
sub tct::sim() {
	$_sim = tct::__sim() unless defined $_sim;
	return $_sim;
}

sub tct::__none() {
my $memory_0;
#line 28
$memory_0 = c_rt_lib::ov_mk_none('tct_var_none');
#line 28
return $memory_0;
#line 28
undef($memory_0);
#line 28
return;
}

my $_none;
sub tct::none() {
	$_none = tct::__none() unless defined $_none;
	return $_none;
}

sub tct::__void() {
my $memory_0;
#line 32
$memory_0 = c_rt_lib::ov_mk_none('tct_void');
#line 32
return $memory_0;
#line 32
undef($memory_0);
#line 32
return;
}

my $_void;
sub tct::void() {
	$_void = tct::__void() unless defined $_void;
	return $_void;
}

sub tct::__empty() {
my $memory_0;
#line 36
$memory_0 = c_rt_lib::ov_mk_none('tct_empty');
#line 36
return $memory_0;
#line 36
undef($memory_0);
#line 36
return;
}

my $_empty;
sub tct::empty() {
	$_empty = tct::__empty() unless defined $_empty;
	return $_empty;
}

sub tct::hash($) {
my $memory_0;my $memory_1;$memory_0 = $_[0];
#line 40
$memory_1 = c_rt_lib::ov_mk_arg('tct_hash', $memory_0);
#line 40
undef($memory_0);
#line 40
return $memory_1;
#line 40
undef($memory_1);
#line 40
undef($memory_0);
#line 40
return;
}

sub tct::__tct_im() {
my $memory_0;
#line 44
$memory_0 = c_rt_lib::ov_mk_none('tct_im');
#line 44
return $memory_0;
#line 44
undef($memory_0);
#line 44
return;
}

my $_tct_im;
sub tct::tct_im() {
	$_tct_im = tct::__tct_im() unless defined $_tct_im;
	return $_tct_im;
}

sub tct::bool() {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;
#line 48
$memory_2 = tct::none();
#line 48
$memory_3 = tct::none();
#line 48
$memory_1 = {FALSE => $memory_2,TRUE => $memory_3,};
#line 48
undef($memory_2);
#line 48
undef($memory_3);
#line 48
$memory_0 = tct::var($memory_1);
#line 48
undef($memory_1);
#line 48
return $memory_0;
#line 48
undef($memory_0);
#line 48
return;
}

sub tct::var($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;$memory_0 = $_[0];
#line 52
$memory_1 = {};
#line 53
$memory_4 = c_rt_lib::init_iter($memory_0);
#line 53
label_3:
#line 53
$memory_2 = c_rt_lib::is_end_hash($memory_4);
#line 53
if (c_rt_lib::check_true($memory_2)) {goto label_1;}
#line 53
$memory_2 = c_rt_lib::get_key_iter($memory_4);
#line 53
$memory_3 = c_rt_lib::hash_get_value($memory_0, $memory_2);
#line 55
$memory_7 = "tct_var_none";
#line 55
$memory_6 = ov::is($memory_3, $memory_7);
#line 55
undef($memory_7);
#line 55
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 55
if (c_rt_lib::check_true($memory_6)) {goto label_5;}
#line 56
$memory_7 = c_rt_lib::ov_mk_none('no_param');
#line 56
$memory_5 = $memory_7;
#line 56
undef($memory_7);
#line 57
goto label_4;
#line 57
label_5:
#line 58
$memory_8 = {
	module => "tct",
	name => "meta_type",
};
#line 58
$memory_8 = c_rt_lib::ov_mk_arg('ref', $memory_8);
#line 58
$memory_7 = ptd::ensure($memory_8, $memory_3);
#line 58
undef($memory_8);
#line 58
$memory_7 = c_rt_lib::ov_mk_arg('with_param', $memory_7);
#line 58
$memory_5 = $memory_7;
#line 58
undef($memory_7);
#line 59
goto label_4;
#line 59
label_4:
#line 59
undef($memory_6);
#line 61
hash::set_value($memory_1, $memory_2, $memory_5);
#line 61
undef($memory_5);
#line 62
$memory_4 = c_rt_lib::next_iter($memory_4);
#line 62
goto label_3;
#line 62
label_1:
#line 62
undef($memory_2);
#line 62
undef($memory_3);
#line 62
undef($memory_4);
#line 63
$memory_2 = c_rt_lib::ov_mk_arg('tct_var', $memory_1);
#line 63
undef($memory_0);
#line 63
undef($memory_1);
#line 63
return $memory_2;
#line 63
undef($memory_2);
#line 63
undef($memory_1);
#line 63
undef($memory_0);
#line 63
return;
}

sub tct::__meta_type() {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;
#line 67
$memory_3 = {
	module => "tct",
	name => "meta_type",
};
#line 67
$memory_3 = c_rt_lib::ov_mk_arg('ref', $memory_3);
#line 67
$memory_2 = ptd::hash($memory_3);
#line 67
undef($memory_3);
#line 67
$memory_3 = {
	module => "tct",
	name => "meta_type",
};
#line 67
$memory_3 = c_rt_lib::ov_mk_arg('ref', $memory_3);
#line 67
$memory_4 = {
	module => "tct",
	name => "meta_type",
};
#line 67
$memory_4 = c_rt_lib::ov_mk_arg('ref', $memory_4);
#line 67
$memory_8 = {
	module => "tct",
	name => "meta_type",
};
#line 67
$memory_8 = c_rt_lib::ov_mk_arg('ref', $memory_8);
#line 67
$memory_9 = ptd::none();
#line 67
$memory_7 = {with_param => $memory_8,no_param => $memory_9,};
#line 67
undef($memory_8);
#line 67
undef($memory_9);
#line 67
$memory_6 = ptd::var($memory_7);
#line 67
undef($memory_7);
#line 67
$memory_5 = ptd::hash($memory_6);
#line 67
undef($memory_6);
#line 67
$memory_6 = ptd::sim();
#line 67
$memory_7 = ptd::none();
#line 67
$memory_8 = ptd::none();
#line 67
$memory_9 = ptd::none();
#line 67
$memory_10 = ptd::none();
#line 67
$memory_1 = {tct_rec => $memory_2,tct_hash => $memory_3,tct_arr => $memory_4,tct_var => $memory_5,tct_ref => $memory_6,tct_sim => $memory_7,tct_empty => $memory_8,tct_void => $memory_9,tct_im => $memory_10,};
#line 67
undef($memory_2);
#line 67
undef($memory_3);
#line 67
undef($memory_4);
#line 67
undef($memory_5);
#line 67
undef($memory_6);
#line 67
undef($memory_7);
#line 67
undef($memory_8);
#line 67
undef($memory_9);
#line 67
undef($memory_10);
#line 67
$memory_0 = ptd::var($memory_1);
#line 67
undef($memory_1);
#line 67
return $memory_0;
#line 67
undef($memory_0);
#line 67
return;
}

my $_meta_type;
sub tct::meta_type() {
	$_meta_type = tct::__meta_type() unless defined $_meta_type;
	return $_meta_type;
}
