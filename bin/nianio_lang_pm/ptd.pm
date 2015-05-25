use c_rt_lib;
use hash;
use ov;
use c_std_lib;
sub ptd::arr;
sub ptd::rec;
sub ptd::sim;
sub ptd::none;
sub ptd::void;
sub ptd::hash;
sub ptd::ptd_im;
sub ptd::var;
sub ptd::meta_type;
sub ptd::ensure;
sub ptd::ensure_only_dynamic;
sub ptd::ensure_only_static_do_not_touch_without_permission;
sub ptd::ensure_dyn;
sub ptd::is_ref_type;
sub ptd_priv::exec;

return 1;

sub ptd::arr($) {
my $memory_0;my $memory_1;$memory_0 = $_[0];
#line 12
$memory_1 = c_rt_lib::ov_mk_arg('ptd_arr', $memory_0);
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

sub ptd::rec($) {
my $memory_0;my $memory_1;$memory_0 = $_[0];
#line 16
$memory_1 = c_rt_lib::ov_mk_arg('ptd_rec', $memory_0);
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

sub ptd::__sim() {
my $memory_0;
#line 20
$memory_0 = c_rt_lib::ov_mk_none('ptd_sim');
#line 20
return $memory_0;
#line 20
undef($memory_0);
#line 20
return;
}

my $_sim;
sub ptd::sim() {
	$_sim = ptd::__sim() unless defined $_sim;
	return $_sim;
}

sub ptd::__none() {
my $memory_0;
#line 24
$memory_0 = c_rt_lib::ov_mk_none('ptd_var_none');
#line 24
return $memory_0;
#line 24
undef($memory_0);
#line 24
return;
}

my $_none;
sub ptd::none() {
	$_none = ptd::__none() unless defined $_none;
	return $_none;
}

sub ptd::__void() {
my $memory_0;
#line 28
$memory_0 = c_rt_lib::ov_mk_none('ptd_void');
#line 28
return $memory_0;
#line 28
undef($memory_0);
#line 28
return;
}

my $_void;
sub ptd::void() {
	$_void = ptd::__void() unless defined $_void;
	return $_void;
}

sub ptd::hash($) {
my $memory_0;my $memory_1;$memory_0 = $_[0];
#line 32
$memory_1 = c_rt_lib::ov_mk_arg('ptd_hash', $memory_0);
#line 32
undef($memory_0);
#line 32
return $memory_1;
#line 32
undef($memory_1);
#line 32
undef($memory_0);
#line 32
return;
}

sub ptd::__ptd_im() {
my $memory_0;
#line 36
$memory_0 = c_rt_lib::ov_mk_none('ptd_im');
#line 36
return $memory_0;
#line 36
undef($memory_0);
#line 36
return;
}

my $_ptd_im;
sub ptd::ptd_im() {
	$_ptd_im = ptd::__ptd_im() unless defined $_ptd_im;
	return $_ptd_im;
}

sub ptd::var($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;$memory_0 = $_[0];
#line 40
$memory_1 = {};
#line 41
$memory_4 = c_rt_lib::init_iter($memory_0);
#line 41
label_3:
#line 41
$memory_2 = c_rt_lib::is_end_hash($memory_4);
#line 41
if (c_rt_lib::check_true($memory_2)) {goto label_1;}
#line 41
$memory_2 = c_rt_lib::get_key_iter($memory_4);
#line 41
$memory_3 = c_rt_lib::hash_get_value($memory_0, $memory_2);
#line 43
$memory_6 = $memory_3;
#line 43
$memory_6 = c_rt_lib::ov_is($memory_6, 'ptd_var_none');
#line 43
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 43
if (c_rt_lib::check_true($memory_6)) {goto label_5;}
#line 44
$memory_7 = c_rt_lib::ov_mk_none('no_param');
#line 44
$memory_5 = $memory_7;
#line 44
undef($memory_7);
#line 45
goto label_4;
#line 45
label_5:
#line 46
$memory_7 = c_rt_lib::ov_mk_arg('with_param', $memory_3);
#line 46
$memory_5 = $memory_7;
#line 46
undef($memory_7);
#line 47
goto label_4;
#line 47
label_4:
#line 47
undef($memory_6);
#line 48
hash::set_value($memory_1, $memory_2, $memory_5);
#line 48
undef($memory_5);
#line 49
$memory_4 = c_rt_lib::next_iter($memory_4);
#line 49
goto label_3;
#line 49
label_1:
#line 49
undef($memory_2);
#line 49
undef($memory_3);
#line 49
undef($memory_4);
#line 50
$memory_3 = {
	module => "ptd",
	name => "meta_type",
};
#line 50
$memory_3 = c_rt_lib::ov_mk_arg('ref', $memory_3);
#line 50
$memory_4 = c_rt_lib::ov_mk_arg('ptd_var', $memory_1);
#line 50
$memory_2 = ptd::ensure_only_static_do_not_touch_without_permission($memory_3, $memory_4);
#line 50
undef($memory_4);
#line 50
undef($memory_3);
#line 50
undef($memory_0);
#line 50
undef($memory_1);
#line 50
return $memory_2;
#line 50
undef($memory_2);
#line 50
undef($memory_1);
#line 50
undef($memory_0);
#line 50
return;
}

sub ptd::__meta_type() {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;
#line 54
$memory_3 = {
	module => "ptd",
	name => "meta_type",
};
#line 54
$memory_3 = c_rt_lib::ov_mk_arg('ref', $memory_3);
#line 54
$memory_2 = ptd::hash($memory_3);
#line 54
undef($memory_3);
#line 54
$memory_3 = {
	module => "ptd",
	name => "meta_type",
};
#line 54
$memory_3 = c_rt_lib::ov_mk_arg('ref', $memory_3);
#line 54
$memory_4 = {
	module => "ptd",
	name => "meta_type",
};
#line 54
$memory_4 = c_rt_lib::ov_mk_arg('ref', $memory_4);
#line 54
$memory_8 = {
	module => "ptd",
	name => "meta_type",
};
#line 54
$memory_8 = c_rt_lib::ov_mk_arg('ref', $memory_8);
#line 54
$memory_9 = ptd::none();
#line 54
$memory_7 = {with_param => $memory_8,no_param => $memory_9,};
#line 54
undef($memory_8);
#line 54
undef($memory_9);
#line 54
$memory_6 = ptd::var($memory_7);
#line 54
undef($memory_7);
#line 54
$memory_5 = ptd::hash($memory_6);
#line 54
undef($memory_6);
#line 54
$memory_6 = ptd::sim();
#line 54
$memory_7 = ptd::none();
#line 54
$memory_8 = ptd::none();
#line 54
$memory_1 = {ptd_rec => $memory_2,ptd_hash => $memory_3,ptd_arr => $memory_4,ptd_var => $memory_5,ref => $memory_6,ptd_sim => $memory_7,ptd_im => $memory_8,};
#line 54
undef($memory_2);
#line 54
undef($memory_3);
#line 54
undef($memory_4);
#line 54
undef($memory_5);
#line 54
undef($memory_6);
#line 54
undef($memory_7);
#line 54
undef($memory_8);
#line 54
$memory_0 = ptd::var($memory_1);
#line 54
undef($memory_1);
#line 54
return $memory_0;
#line 54
undef($memory_0);
#line 54
return;
}

my $_meta_type;
sub ptd::meta_type() {
	$_meta_type = ptd::__meta_type() unless defined $_meta_type;
	return $_meta_type;
}

sub ptd::ensure($$) {
my $memory_0;my $memory_1;$memory_0 = $_[0];$memory_1 = $_[1];
#line 66
ptd::ensure_dyn($memory_0, $memory_1);
#line 67
undef($memory_0);
#line 67
return $memory_1;
#line 67
undef($memory_0);
#line 67
undef($memory_1);
#line 67
return;
}

sub ptd::ensure_only_dynamic($$) {
my $memory_0;my $memory_1;$memory_0 = $_[0];$memory_1 = $_[1];
#line 71
ptd::ensure_dyn($memory_0, $memory_1);
#line 72
undef($memory_0);
#line 72
return $memory_1;
#line 72
undef($memory_0);
#line 72
undef($memory_1);
#line 72
return;
}

sub ptd::ensure_only_static_do_not_touch_without_permission($$) {
my $memory_0;my $memory_1;$memory_0 = $_[0];$memory_1 = $_[1];
#line 77
undef($memory_0);
#line 77
return $memory_1;
#line 77
undef($memory_0);
#line 77
undef($memory_1);
#line 77
return;
}

sub ptd::ensure_dyn($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;$memory_0 = $_[0];$memory_1 = $_[1];
#line 80
$memory_2 = c_std_lib::is_variant($memory_0);
#line 80
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 80
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 80
if (c_rt_lib::check_true($memory_2)) {goto label_2;}
#line 80
$memory_4 = "1 Not ov reference in ensure";
#line 80
$memory_3 = [$memory_4];
#line 80
undef($memory_4);
#line 80
die(dfile::ssave($memory_3));
#line 80
goto label_2;
#line 80
label_2:
#line 80
undef($memory_2);
#line 80
undef($memory_3);
#line 81
$memory_2 = c_rt_lib::ov_is($memory_0, 'ptd_hash');
#line 81
if (c_rt_lib::check_true($memory_2)) {goto label_4;}
#line 86
$memory_2 = c_rt_lib::ov_is($memory_0, 'ptd_arr');
#line 86
if (c_rt_lib::check_true($memory_2)) {goto label_5;}
#line 91
$memory_2 = c_rt_lib::ov_is($memory_0, 'ptd_rec');
#line 91
if (c_rt_lib::check_true($memory_2)) {goto label_6;}
#line 98
$memory_2 = c_rt_lib::ov_is($memory_0, 'ptd_sim');
#line 98
if (c_rt_lib::check_true($memory_2)) {goto label_7;}
#line 100
$memory_2 = c_rt_lib::ov_is($memory_0, 'ptd_var');
#line 100
if (c_rt_lib::check_true($memory_2)) {goto label_8;}
#line 111
$memory_2 = c_rt_lib::ov_is($memory_0, 'ptd_im');
#line 111
if (c_rt_lib::check_true($memory_2)) {goto label_9;}
#line 112
$memory_2 = c_rt_lib::ov_is($memory_0, 'ref');
#line 112
if (c_rt_lib::check_true($memory_2)) {goto label_10;}
#line 112
$memory_2 = "NOMATCHALERT";
#line 112
$memory_2 = [$memory_2,$memory_0];
#line 112
die(dfile::ssave($memory_2));
#line 81
label_4:
#line 81
$memory_3 = c_rt_lib::ov_as($memory_0, 'ptd_hash');
#line 82
$memory_4 = c_std_lib::is_hash($memory_1);
#line 82
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 82
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 82
if (c_rt_lib::check_true($memory_4)) {goto label_12;}
#line 82
$memory_6 = "2 HASH ref expected ";
#line 82
$memory_5 = [$memory_6];
#line 82
undef($memory_6);
#line 82
die(dfile::ssave($memory_5));
#line 82
goto label_12;
#line 82
label_12:
#line 82
undef($memory_4);
#line 82
undef($memory_5);
#line 83
$memory_6 = c_rt_lib::init_iter($memory_1);
#line 83
label_15:
#line 83
$memory_4 = c_rt_lib::is_end_hash($memory_6);
#line 83
if (c_rt_lib::check_true($memory_4)) {goto label_13;}
#line 83
$memory_4 = c_rt_lib::get_key_iter($memory_6);
#line 83
$memory_5 = c_rt_lib::hash_get_value($memory_1, $memory_4);
#line 84
ptd::ensure_dyn($memory_3, $memory_5);
#line 85
$memory_6 = c_rt_lib::next_iter($memory_6);
#line 85
goto label_15;
#line 85
label_13:
#line 85
undef($memory_4);
#line 85
undef($memory_5);
#line 85
undef($memory_6);
#line 85
undef($memory_3);
#line 86
goto label_3;
#line 86
label_5:
#line 86
$memory_3 = c_rt_lib::ov_as($memory_0, 'ptd_arr');
#line 87
$memory_4 = c_std_lib::is_array($memory_1);
#line 87
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 87
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 87
if (c_rt_lib::check_true($memory_4)) {goto label_17;}
#line 87
$memory_6 = "3 ARRAY ref expected ";
#line 87
$memory_5 = [$memory_6];
#line 87
undef($memory_6);
#line 87
die(dfile::ssave($memory_5));
#line 87
goto label_17;
#line 87
label_17:
#line 87
undef($memory_4);
#line 87
undef($memory_5);
#line 88
$memory_5 = 0;
#line 88
$memory_6 = 1;
#line 88
$memory_7 = c_rt_lib::array_len($memory_1);
#line 88
label_20:
#line 88
$memory_8 = c_rt_lib::to_nl($memory_5 >= $memory_7);
#line 88
if (c_rt_lib::check_true($memory_8)) {goto label_18;}
#line 88
$memory_4 = $memory_1->[$memory_5];
#line 89
ptd::ensure_dyn($memory_3, $memory_4);
#line 90
$memory_5 = $memory_5 + $memory_6;
#line 90
goto label_20;
#line 90
label_18:
#line 90
undef($memory_4);
#line 90
undef($memory_5);
#line 90
undef($memory_6);
#line 90
undef($memory_7);
#line 90
undef($memory_8);
#line 90
undef($memory_3);
#line 91
goto label_3;
#line 91
label_6:
#line 91
$memory_3 = c_rt_lib::ov_as($memory_0, 'ptd_rec');
#line 92
$memory_4 = c_std_lib::is_hash($memory_1);
#line 92
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 92
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 92
if (c_rt_lib::check_true($memory_4)) {goto label_22;}
#line 92
$memory_6 = "4 HASH ref expected ";
#line 92
$memory_5 = [$memory_6];
#line 92
undef($memory_6);
#line 92
die(dfile::ssave($memory_5));
#line 92
goto label_22;
#line 92
label_22:
#line 92
undef($memory_4);
#line 92
undef($memory_5);
#line 93
$memory_4 = hash::size($memory_3);
#line 93
$memory_5 = hash::size($memory_1);
#line 93
$memory_4 = c_rt_lib::to_nl($memory_4 == $memory_5);
#line 93
undef($memory_5);
#line 93
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 93
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 93
if (c_rt_lib::check_true($memory_4)) {goto label_24;}
#line 93
$memory_6 = "5 keys amount mismatch in ptd_rec";
#line 93
$memory_5 = [$memory_6];
#line 93
undef($memory_6);
#line 93
die(dfile::ssave($memory_5));
#line 93
goto label_24;
#line 93
label_24:
#line 93
undef($memory_4);
#line 93
undef($memory_5);
#line 94
$memory_6 = c_rt_lib::init_iter($memory_3);
#line 94
label_27:
#line 94
$memory_4 = c_rt_lib::is_end_hash($memory_6);
#line 94
if (c_rt_lib::check_true($memory_4)) {goto label_25;}
#line 94
$memory_4 = c_rt_lib::get_key_iter($memory_6);
#line 94
$memory_5 = c_rt_lib::hash_get_value($memory_3, $memory_4);
#line 95
$memory_7 = hash::has_key($memory_1, $memory_4);
#line 95
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 95
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 95
if (c_rt_lib::check_true($memory_7)) {goto label_29;}
#line 95
$memory_9 = "6 key ";
#line 95
$memory_9 = $memory_9 . $memory_4;
#line 95
$memory_10 = " not exists in hash";
#line 95
$memory_9 = $memory_9 . $memory_10;
#line 95
undef($memory_10);
#line 95
$memory_8 = [$memory_9];
#line 95
undef($memory_9);
#line 95
die(dfile::ssave($memory_8));
#line 95
goto label_29;
#line 95
label_29:
#line 95
undef($memory_7);
#line 95
undef($memory_8);
#line 96
$memory_7 = hash::get_value($memory_1, $memory_4);
#line 96
ptd::ensure_dyn($memory_5, $memory_7);
#line 96
undef($memory_7);
#line 97
$memory_6 = c_rt_lib::next_iter($memory_6);
#line 97
goto label_27;
#line 97
label_25:
#line 97
undef($memory_4);
#line 97
undef($memory_5);
#line 97
undef($memory_6);
#line 97
undef($memory_3);
#line 98
goto label_3;
#line 98
label_7:
#line 99
$memory_3 = c_std_lib::is_sim($memory_1);
#line 99
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 99
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 99
if (c_rt_lib::check_true($memory_3)) {goto label_31;}
#line 99
$memory_5 = "8 wrong sim ref ";
#line 99
$memory_4 = [$memory_5];
#line 99
undef($memory_5);
#line 99
die(dfile::ssave($memory_4));
#line 99
goto label_31;
#line 99
label_31:
#line 99
undef($memory_3);
#line 99
undef($memory_4);
#line 100
goto label_3;
#line 100
label_8:
#line 100
$memory_3 = c_rt_lib::ov_as($memory_0, 'ptd_var');
#line 101
$memory_4 = c_std_lib::is_variant($memory_1);
#line 101
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 101
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 101
if (c_rt_lib::check_true($memory_4)) {goto label_33;}
#line 101
$memory_6 = "9 not ov ref";
#line 101
$memory_5 = [$memory_6];
#line 101
undef($memory_6);
#line 101
die(dfile::ssave($memory_5));
#line 101
goto label_33;
#line 101
label_33:
#line 101
undef($memory_4);
#line 101
undef($memory_5);
#line 102
$memory_4 = ov::get_element($memory_1);
#line 103
$memory_5 = hash::has_key($memory_3, $memory_4);
#line 103
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 103
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 103
if (c_rt_lib::check_true($memory_5)) {goto label_35;}
#line 103
$memory_7 = "10 Case ";
#line 103
$memory_7 = $memory_7 . $memory_4;
#line 103
$memory_8 = " not allowed in variant. ";
#line 103
$memory_7 = $memory_7 . $memory_8;
#line 103
undef($memory_8);
#line 103
$memory_6 = [$memory_7];
#line 103
undef($memory_7);
#line 103
die(dfile::ssave($memory_6));
#line 103
goto label_35;
#line 103
label_35:
#line 103
undef($memory_5);
#line 103
undef($memory_6);
#line 104
$memory_5 = hash::get_value($memory_3, $memory_4);
#line 105
$memory_6 = c_rt_lib::ov_is($memory_5, 'with_param');
#line 105
if (c_rt_lib::check_true($memory_6)) {goto label_37;}
#line 108
$memory_6 = c_rt_lib::ov_is($memory_5, 'no_param');
#line 108
if (c_rt_lib::check_true($memory_6)) {goto label_38;}
#line 108
$memory_6 = "NOMATCHALERT";
#line 108
$memory_6 = [$memory_6,$memory_5];
#line 108
die(dfile::ssave($memory_6));
#line 105
label_37:
#line 105
$memory_7 = c_rt_lib::ov_as($memory_5, 'with_param');
#line 106
$memory_8 = ov::has_value($memory_1);
#line 106
$memory_8 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 106
$memory_8 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 106
if (c_rt_lib::check_true($memory_8)) {goto label_40;}
#line 106
$memory_10 = "12 with_param ov has no value";
#line 106
$memory_9 = [$memory_10];
#line 106
undef($memory_10);
#line 106
die(dfile::ssave($memory_9));
#line 106
goto label_40;
#line 106
label_40:
#line 106
undef($memory_8);
#line 106
undef($memory_9);
#line 107
$memory_8 = ov::get_value($memory_1);
#line 107
ptd::ensure_dyn($memory_7, $memory_8);
#line 107
undef($memory_8);
#line 107
undef($memory_7);
#line 108
goto label_36;
#line 108
label_38:
#line 109
$memory_7 = ov::has_value($memory_1);
#line 109
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 109
if (c_rt_lib::check_true($memory_7)) {goto label_42;}
#line 109
$memory_9 = "11 no_param ov has value";
#line 109
$memory_8 = [$memory_9];
#line 109
undef($memory_9);
#line 109
die(dfile::ssave($memory_8));
#line 109
goto label_42;
#line 109
label_42:
#line 109
undef($memory_7);
#line 109
undef($memory_8);
#line 110
goto label_36;
#line 110
label_36:
#line 110
undef($memory_6);
#line 110
undef($memory_4);
#line 110
undef($memory_5);
#line 110
undef($memory_3);
#line 111
goto label_3;
#line 111
label_9:
#line 112
goto label_3;
#line 112
label_10:
#line 112
$memory_3 = c_rt_lib::ov_as($memory_0, 'ref');
#line 113
$memory_5 = [];
#line 113
$memory_4 = ptd_priv::exec($memory_0, $memory_5);
#line 113
undef($memory_5);
#line 113
ptd::ensure_dyn($memory_4, $memory_1);
#line 113
undef($memory_4);
#line 113
undef($memory_3);
#line 114
goto label_3;
#line 114
label_3:
#line 114
undef($memory_2);
#line 114
undef($memory_0);
#line 114
undef($memory_1);
#line 114
return;
}

sub ptd::is_ref_type($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;$memory_0 = $_[0];$memory_1 = $_[1];
#line 118
$memory_2 = c_rt_lib::ov_is($memory_0, 'ref');
#line 118
if (c_rt_lib::check_true($memory_2)) {goto label_2;}
#line 128
$memory_2 = c_rt_lib::ov_is($memory_0, 'ptd_im');
#line 128
if (c_rt_lib::check_true($memory_2)) {goto label_3;}
#line 129
$memory_2 = c_rt_lib::ov_is($memory_0, 'ptd_sim');
#line 129
if (c_rt_lib::check_true($memory_2)) {goto label_4;}
#line 130
$memory_2 = c_rt_lib::ov_is($memory_0, 'ptd_arr');
#line 130
if (c_rt_lib::check_true($memory_2)) {goto label_5;}
#line 131
$memory_2 = c_rt_lib::ov_is($memory_0, 'ptd_var');
#line 131
if (c_rt_lib::check_true($memory_2)) {goto label_6;}
#line 132
$memory_2 = c_rt_lib::ov_is($memory_0, 'ptd_rec');
#line 132
if (c_rt_lib::check_true($memory_2)) {goto label_7;}
#line 133
$memory_2 = c_rt_lib::ov_is($memory_0, 'ptd_hash');
#line 133
if (c_rt_lib::check_true($memory_2)) {goto label_8;}
#line 133
$memory_2 = "NOMATCHALERT";
#line 133
$memory_2 = [$memory_2,$memory_0];
#line 133
die(dfile::ssave($memory_2));
#line 118
label_2:
#line 118
$memory_3 = c_rt_lib::ov_as($memory_0, 'ref');
#line 119
$memory_4 = $memory_1;
#line 119
$memory_4 = c_rt_lib::ov_is($memory_4, 'ref');
#line 119
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 119
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 119
if (c_rt_lib::check_true($memory_4)) {goto label_10;}
#line 119
$memory_5 = c_rt_lib::to_nl(0);
#line 119
undef($memory_0);
#line 119
undef($memory_1);
#line 119
undef($memory_2);
#line 119
undef($memory_3);
#line 119
undef($memory_4);
#line 119
return $memory_5;
#line 119
undef($memory_5);
#line 119
goto label_10;
#line 119
label_10:
#line 119
undef($memory_4);
#line 120
$memory_4 = $memory_1;
#line 120
$memory_4 = c_rt_lib::ov_as($memory_4, 'ref');
#line 121
$memory_5 = c_std_lib::is_hash($memory_4);
#line 121
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 121
if (c_rt_lib::check_true($memory_5)) {goto label_12;}
#line 122
$memory_6 = $memory_4->{'module'};
#line 122
$memory_7 = $memory_3->{'module'};
#line 122
$memory_6 = c_rt_lib::to_nl($memory_6 eq $memory_7);
#line 122
undef($memory_7);
#line 122
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 122
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 122
if (c_rt_lib::check_true($memory_6)) {goto label_14;}
#line 122
$memory_7 = c_rt_lib::to_nl(0);
#line 122
undef($memory_0);
#line 122
undef($memory_1);
#line 122
undef($memory_2);
#line 122
undef($memory_3);
#line 122
undef($memory_4);
#line 122
undef($memory_5);
#line 122
undef($memory_6);
#line 122
return $memory_7;
#line 122
undef($memory_7);
#line 122
goto label_14;
#line 122
label_14:
#line 122
undef($memory_6);
#line 123
$memory_6 = $memory_4->{'name'};
#line 123
$memory_7 = $memory_3->{'name'};
#line 123
$memory_6 = c_rt_lib::to_nl($memory_6 eq $memory_7);
#line 123
undef($memory_7);
#line 123
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 123
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 123
if (c_rt_lib::check_true($memory_6)) {goto label_16;}
#line 123
$memory_7 = c_rt_lib::to_nl(0);
#line 123
undef($memory_0);
#line 123
undef($memory_1);
#line 123
undef($memory_2);
#line 123
undef($memory_3);
#line 123
undef($memory_4);
#line 123
undef($memory_5);
#line 123
undef($memory_6);
#line 123
return $memory_7;
#line 123
undef($memory_7);
#line 123
goto label_16;
#line 123
label_16:
#line 123
undef($memory_6);
#line 124
goto label_11;
#line 124
label_12:
#line 125
$memory_6 = c_rt_lib::to_nl($memory_4 eq $memory_3);
#line 125
undef($memory_0);
#line 125
undef($memory_1);
#line 125
undef($memory_2);
#line 125
undef($memory_3);
#line 125
undef($memory_4);
#line 125
undef($memory_5);
#line 125
return $memory_6;
#line 125
undef($memory_6);
#line 126
goto label_11;
#line 126
label_11:
#line 126
undef($memory_5);
#line 127
$memory_5 = c_rt_lib::to_nl(1);
#line 127
undef($memory_0);
#line 127
undef($memory_1);
#line 127
undef($memory_2);
#line 127
undef($memory_3);
#line 127
undef($memory_4);
#line 127
return $memory_5;
#line 127
undef($memory_5);
#line 127
undef($memory_4);
#line 127
undef($memory_3);
#line 128
goto label_1;
#line 128
label_3:
#line 129
goto label_1;
#line 129
label_4:
#line 130
goto label_1;
#line 130
label_5:
#line 130
$memory_3 = c_rt_lib::ov_as($memory_0, 'ptd_arr');
#line 130
undef($memory_3);
#line 131
goto label_1;
#line 131
label_6:
#line 131
$memory_3 = c_rt_lib::ov_as($memory_0, 'ptd_var');
#line 131
undef($memory_3);
#line 132
goto label_1;
#line 132
label_7:
#line 132
$memory_3 = c_rt_lib::ov_as($memory_0, 'ptd_rec');
#line 132
undef($memory_3);
#line 133
goto label_1;
#line 133
label_8:
#line 133
$memory_3 = c_rt_lib::ov_as($memory_0, 'ptd_hash');
#line 133
undef($memory_3);
#line 134
goto label_1;
#line 134
label_1:
#line 134
undef($memory_2);
#line 135
$memory_2 = c_rt_lib::to_nl(0);
#line 135
undef($memory_0);
#line 135
undef($memory_1);
#line 135
return $memory_2;
#line 135
undef($memory_2);
#line 135
undef($memory_0);
#line 135
undef($memory_1);
#line 135
return;
}

sub ptd_priv::exec($$) {
my $memory_0;my $memory_1;my $memory_2;$memory_0 = $_[0];$memory_1 = $_[1];
#line 139
$memory_2 = c_std_lib::exec($memory_0, $memory_1);
#line 139
undef($memory_0);
#line 139
undef($memory_1);
#line 139
return $memory_2;
#line 139
undef($memory_2);
#line 139
undef($memory_0);
#line 139
undef($memory_1);
#line 139
return;
}
