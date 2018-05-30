use c_rt_lib;
use hash;
use ptd;
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
sub tct::func;
sub tct::var;
sub tct::try_var_as_case;
sub tct::meta_type;

return 1;

sub tct::arr($) {
my $memory_0;my $memory_1;$memory_0 = $_[0];
#line 10
$memory_1 = c_rt_lib::ov_mk_arg('tct_arr', $memory_0);
#line 10
undef($memory_0);
#line 10
return $memory_1;
#line 10
undef($memory_1);
#line 10
undef($memory_0);
#line 10
return;
}

sub tct::rec($) {
my $memory_0;my $memory_1;$memory_0 = $_[0];
#line 14
$memory_1 = c_rt_lib::ov_mk_arg('tct_rec', $memory_0);
#line 14
undef($memory_0);
#line 14
return $memory_1;
#line 14
undef($memory_1);
#line 14
undef($memory_0);
#line 14
return;
}

sub tct::ref($) {
my $memory_0;my $memory_1;$memory_0 = $_[0];
#line 18
$memory_1 = c_rt_lib::ov_mk_arg('tct_ref', $memory_0);
#line 18
undef($memory_0);
#line 18
return $memory_1;
#line 18
undef($memory_1);
#line 18
undef($memory_0);
#line 18
return;
}

sub tct::__sim() {
my $memory_0;
#line 22
$memory_0 = c_rt_lib::ov_mk_none('tct_sim');
#line 22
return $memory_0;
#line 22
undef($memory_0);
#line 22
return;
}

my $_sim;
sub tct::sim() {
	$_sim = tct::__sim() unless defined $_sim;
	return $_sim;
}

sub tct::__none() {
my $memory_0;
#line 26
$memory_0 = c_rt_lib::ov_mk_none('tct_var_none');
#line 26
return $memory_0;
#line 26
undef($memory_0);
#line 26
return;
}

my $_none;
sub tct::none() {
	$_none = tct::__none() unless defined $_none;
	return $_none;
}

sub tct::__void() {
my $memory_0;
#line 30
$memory_0 = c_rt_lib::ov_mk_none('tct_void');
#line 30
return $memory_0;
#line 30
undef($memory_0);
#line 30
return;
}

my $_void;
sub tct::void() {
	$_void = tct::__void() unless defined $_void;
	return $_void;
}

sub tct::__empty() {
my $memory_0;
#line 34
$memory_0 = c_rt_lib::ov_mk_none('tct_empty');
#line 34
return $memory_0;
#line 34
undef($memory_0);
#line 34
return;
}

my $_empty;
sub tct::empty() {
	$_empty = tct::__empty() unless defined $_empty;
	return $_empty;
}

sub tct::hash($) {
my $memory_0;my $memory_1;$memory_0 = $_[0];
#line 38
$memory_1 = c_rt_lib::ov_mk_arg('tct_hash', $memory_0);
#line 38
undef($memory_0);
#line 38
return $memory_1;
#line 38
undef($memory_1);
#line 38
undef($memory_0);
#line 38
return;
}

sub tct::__tct_im() {
my $memory_0;
#line 42
$memory_0 = c_rt_lib::ov_mk_none('tct_im');
#line 42
return $memory_0;
#line 42
undef($memory_0);
#line 42
return;
}

my $_tct_im;
sub tct::tct_im() {
	$_tct_im = tct::__tct_im() unless defined $_tct_im;
	return $_tct_im;
}

sub tct::bool() {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;
#line 46
$memory_2 = tct::none();
#line 46
$memory_3 = tct::none();
#line 46
$memory_1 = {FALSE => $memory_2,TRUE => $memory_3,};
#line 46
undef($memory_2);
#line 46
undef($memory_3);
#line 46
$memory_0 = tct::var($memory_1);
#line 46
undef($memory_1);
#line 46
return $memory_0;
#line 46
undef($memory_0);
#line 46
return;
}

sub tct::__func() {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;
#line 50
$memory_2 = tct::sim();
#line 50
$memory_3 = tct::sim();
#line 50
$memory_1 = {module => $memory_2,name => $memory_3,};
#line 50
undef($memory_2);
#line 50
undef($memory_3);
#line 50
$memory_0 = tct::rec($memory_1);
#line 50
undef($memory_1);
#line 50
return $memory_0;
#line 50
undef($memory_0);
#line 50
return;
}

my $_func;
sub tct::func() {
	$_func = tct::__func() unless defined $_func;
	return $_func;
}

sub tct::var($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;$memory_0 = $_[0];
#line 54
$memory_1 = {};
#line 55
$memory_4 = c_rt_lib::init_iter($memory_0);
#line 55
label_2:
#line 55
$memory_2 = c_rt_lib::is_end_hash($memory_4);
#line 55
if (c_rt_lib::check_true($memory_2)) {goto label_30;}
#line 55
$memory_2 = c_rt_lib::get_key_iter($memory_4);
#line 55
$memory_3 = c_rt_lib::hash_get_value($memory_0, $memory_2);
#line 57
$memory_6 = $memory_3;
#line 57
$memory_6 = c_rt_lib::ov_is($memory_6, 'tct_var_none');
#line 57
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 57
if (c_rt_lib::check_true($memory_6)) {goto label_15;}
#line 58
$memory_7 = c_rt_lib::ov_mk_none('no_param');
#line 58
$memory_5 = $memory_7;
#line 58
undef($memory_7);
#line 59
goto label_24;
#line 59
label_15:
#line 60
$memory_8 = {
	module => "tct",
	name => "meta_type",
};
#line 60
$memory_8 = c_rt_lib::ov_mk_arg('ref', $memory_8);
#line 60
$memory_7 = ptd::ensure($memory_8, $memory_3);
#line 60
undef($memory_8);
#line 60
$memory_7 = c_rt_lib::ov_mk_arg('with_param', $memory_7);
#line 60
$memory_5 = $memory_7;
#line 60
undef($memory_7);
#line 61
goto label_24;
#line 61
label_24:
#line 61
undef($memory_6);
#line 62
hash::set_value($memory_1, $memory_2, $memory_5);
#line 62
undef($memory_5);
#line 63
$memory_4 = c_rt_lib::next_iter($memory_4);
#line 63
goto label_2;
#line 63
label_30:
#line 63
undef($memory_2);
#line 63
undef($memory_3);
#line 63
undef($memory_4);
#line 64
$memory_2 = c_rt_lib::ov_mk_arg('tct_var', $memory_1);
#line 64
undef($memory_0);
#line 64
undef($memory_1);
#line 64
return $memory_2;
#line 64
undef($memory_2);
#line 64
undef($memory_1);
#line 64
undef($memory_0);
#line 64
return;
}

sub tct::try_var_as_case($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;$memory_0 = $_[0];$memory_1 = $_[1];
#line 68
$memory_2 = $memory_0;
#line 68
$memory_2 = c_rt_lib::ov_is($memory_2, 'tct_var');
#line 68
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 68
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 68
if (c_rt_lib::check_true($memory_2)) {goto label_13;}
#line 68
$memory_3 = "";
#line 68
$memory_3 = c_rt_lib::ov_mk_arg('err', $memory_3);
#line 68
undef($memory_0);
#line 68
undef($memory_1);
#line 68
undef($memory_2);
#line 68
return $memory_3;
#line 68
undef($memory_3);
#line 68
goto label_13;
#line 68
label_13:
#line 68
undef($memory_2);
#line 69
$memory_3 = $memory_0;
#line 69
$memory_3 = c_rt_lib::ov_as($memory_3, 'tct_var');
#line 69
$memory_2 = hash::has_key($memory_3, $memory_1);
#line 69
undef($memory_3);
#line 69
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 69
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 69
if (c_rt_lib::check_true($memory_2)) {goto label_30;}
#line 69
$memory_3 = "";
#line 69
$memory_3 = c_rt_lib::ov_mk_arg('err', $memory_3);
#line 69
undef($memory_0);
#line 69
undef($memory_1);
#line 69
undef($memory_2);
#line 69
return $memory_3;
#line 69
undef($memory_3);
#line 69
goto label_30;
#line 69
label_30:
#line 69
undef($memory_2);
#line 70
$memory_3 = $memory_0;
#line 70
$memory_3 = c_rt_lib::ov_as($memory_3, 'tct_var');
#line 70
$memory_2 = hash::get_value($memory_3, $memory_1);
#line 70
undef($memory_3);
#line 71
$memory_3 = $memory_2;
#line 71
$memory_3 = c_rt_lib::ov_is($memory_3, 'with_param');
#line 71
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 71
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 71
if (c_rt_lib::check_true($memory_3)) {goto label_50;}
#line 71
$memory_4 = "";
#line 71
$memory_4 = c_rt_lib::ov_mk_arg('err', $memory_4);
#line 71
undef($memory_0);
#line 71
undef($memory_1);
#line 71
undef($memory_2);
#line 71
undef($memory_3);
#line 71
return $memory_4;
#line 71
undef($memory_4);
#line 71
goto label_50;
#line 71
label_50:
#line 71
undef($memory_3);
#line 72
$memory_3 = $memory_2;
#line 72
$memory_3 = c_rt_lib::ov_as($memory_3, 'with_param');
#line 72
$memory_3 = c_rt_lib::ov_mk_arg('ok', $memory_3);
#line 72
undef($memory_0);
#line 72
undef($memory_1);
#line 72
undef($memory_2);
#line 72
return $memory_3;
#line 72
undef($memory_3);
#line 72
undef($memory_2);
#line 72
undef($memory_0);
#line 72
undef($memory_1);
#line 72
return;
}

sub tct::__meta_type() {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;
#line 77
$memory_3 = {
	module => "tct",
	name => "meta_type",
};
#line 77
$memory_3 = c_rt_lib::ov_mk_arg('ref', $memory_3);
#line 77
$memory_2 = ptd::hash($memory_3);
#line 77
undef($memory_3);
#line 78
$memory_3 = {
	module => "tct",
	name => "meta_type",
};
#line 78
$memory_3 = c_rt_lib::ov_mk_arg('ref', $memory_3);
#line 79
$memory_4 = {
	module => "tct",
	name => "meta_type",
};
#line 79
$memory_4 = c_rt_lib::ov_mk_arg('ref', $memory_4);
#line 80
$memory_8 = {
	module => "tct",
	name => "meta_type",
};
#line 80
$memory_8 = c_rt_lib::ov_mk_arg('ref', $memory_8);
#line 80
$memory_9 = ptd::none();
#line 80
$memory_7 = {with_param => $memory_8,no_param => $memory_9,};
#line 80
undef($memory_8);
#line 80
undef($memory_9);
#line 80
$memory_6 = ptd::var($memory_7);
#line 80
undef($memory_7);
#line 80
$memory_5 = ptd::hash($memory_6);
#line 80
undef($memory_6);
#line 81
$memory_6 = ptd::sim();
#line 82
$memory_7 = ptd::none();
#line 83
$memory_8 = ptd::none();
#line 84
$memory_9 = ptd::none();
#line 85
$memory_10 = ptd::none();
#line 85
$memory_1 = {tct_rec => $memory_2,tct_hash => $memory_3,tct_arr => $memory_4,tct_var => $memory_5,tct_ref => $memory_6,tct_sim => $memory_7,tct_empty => $memory_8,tct_void => $memory_9,tct_im => $memory_10,};
#line 85
undef($memory_2);
#line 85
undef($memory_3);
#line 85
undef($memory_4);
#line 85
undef($memory_5);
#line 85
undef($memory_6);
#line 85
undef($memory_7);
#line 85
undef($memory_8);
#line 85
undef($memory_9);
#line 85
undef($memory_10);
#line 85
$memory_0 = ptd::var($memory_1);
#line 85
undef($memory_1);
#line 85
return $memory_0;
#line 85
undef($memory_0);
#line 85
return;
}

my $_meta_type;
sub tct::meta_type() {
	$_meta_type = tct::__meta_type() unless defined $_meta_type;
	return $_meta_type;
}
