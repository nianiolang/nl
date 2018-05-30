use c_rt_lib;
use hash;
use array;
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
sub ptd::try_ensure;
sub ptd::ensure_only_dynamic;
sub ptd::ensure_only_static_do_not_touch_without_permission;
sub ptd::ensure_dyn;
sub ptd::is_ref_type;
sub ptd_priv::exec;
sub ptd::cast_t;
sub ptd::try_cast;
sub ptd::try_dynamic_cast;
sub ptd::imm_kind_t;
sub ptd::cast_error_t;
sub ptd::get_imm_kind;
sub ptd_priv::try_dynamic_cast;
sub ptd::reconstruct_nl_with_args;
sub ptd::ptd_reconstruct_nl_with_args;
sub ptd_priv::reconstruct;

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
label_2:
#line 41
$memory_2 = c_rt_lib::is_end_hash($memory_4);
#line 41
if (c_rt_lib::check_true($memory_2)) {goto label_26;}
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
if (c_rt_lib::check_true($memory_6)) {goto label_15;}
#line 44
$memory_7 = c_rt_lib::ov_mk_none('no_param');
#line 44
$memory_5 = $memory_7;
#line 44
undef($memory_7);
#line 45
goto label_20;
#line 45
label_15:
#line 46
$memory_7 = c_rt_lib::ov_mk_arg('with_param', $memory_3);
#line 46
$memory_5 = $memory_7;
#line 46
undef($memory_7);
#line 47
goto label_20;
#line 47
label_20:
#line 47
undef($memory_6);
#line 48
hash::set_value($memory_1, $memory_2, $memory_5);
#line 48
undef($memory_5);
#line 49
$memory_4 = c_rt_lib::next_iter($memory_4);
#line 49
goto label_2;
#line 49
label_26:
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
#line 55
$memory_3 = {
	module => "ptd",
	name => "meta_type",
};
#line 55
$memory_3 = c_rt_lib::ov_mk_arg('ref', $memory_3);
#line 55
$memory_2 = ptd::hash($memory_3);
#line 55
undef($memory_3);
#line 56
$memory_3 = {
	module => "ptd",
	name => "meta_type",
};
#line 56
$memory_3 = c_rt_lib::ov_mk_arg('ref', $memory_3);
#line 57
$memory_4 = {
	module => "ptd",
	name => "meta_type",
};
#line 57
$memory_4 = c_rt_lib::ov_mk_arg('ref', $memory_4);
#line 58
$memory_8 = {
	module => "ptd",
	name => "meta_type",
};
#line 58
$memory_8 = c_rt_lib::ov_mk_arg('ref', $memory_8);
#line 58
$memory_9 = ptd::none();
#line 58
$memory_7 = {with_param => $memory_8,no_param => $memory_9,};
#line 58
undef($memory_8);
#line 58
undef($memory_9);
#line 58
$memory_6 = ptd::var($memory_7);
#line 58
undef($memory_7);
#line 58
$memory_5 = ptd::hash($memory_6);
#line 58
undef($memory_6);
#line 60
$memory_8 = ptd::sim();
#line 61
$memory_9 = ptd::sim();
#line 61
$memory_7 = {module => $memory_8,name => $memory_9,};
#line 61
undef($memory_8);
#line 61
undef($memory_9);
#line 61
$memory_6 = ptd::rec($memory_7);
#line 61
undef($memory_7);
#line 63
$memory_7 = ptd::none();
#line 64
$memory_8 = ptd::none();
#line 64
$memory_1 = {ptd_rec => $memory_2,ptd_hash => $memory_3,ptd_arr => $memory_4,ptd_var => $memory_5,ref => $memory_6,ptd_sim => $memory_7,ptd_im => $memory_8,};
#line 64
undef($memory_2);
#line 64
undef($memory_3);
#line 64
undef($memory_4);
#line 64
undef($memory_5);
#line 64
undef($memory_6);
#line 64
undef($memory_7);
#line 64
undef($memory_8);
#line 64
$memory_0 = ptd::var($memory_1);
#line 64
undef($memory_1);
#line 64
return $memory_0;
#line 64
undef($memory_0);
#line 64
return;
}

my $_meta_type;
sub ptd::meta_type() {
	$_meta_type = ptd::__meta_type() unless defined $_meta_type;
	return $_meta_type;
}

sub ptd::ensure($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;$memory_0 = $_[0];$memory_1 = $_[1];
#line 69
$memory_2 = [];
#line 70
$memory_4 = ptd::ensure_dyn($memory_0, $memory_1, $memory_2);
#line 70
$memory_3 = c_rt_lib::ov_is($memory_4, 'ok');
#line 70
if (c_rt_lib::check_true($memory_3)) {goto label_6;}
#line 70
$memory_4 = c_rt_lib::ov_mk_arg('ensure', $memory_4);
#line 70
die(dfile::ssave($memory_4));
#line 70
label_6:
#line 70
undef($memory_3);
#line 70
undef($memory_4);
#line 71
undef($memory_0);
#line 71
undef($memory_2);
#line 71
return $memory_1;
#line 71
undef($memory_2);
#line 71
undef($memory_0);
#line 71
undef($memory_1);
#line 71
return;
}

sub ptd::try_ensure($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;$memory_0 = $_[0];$memory_1 = $_[1];
#line 75
$memory_2 = [];
#line 76
$memory_4 = ptd::ensure_dyn($memory_0, $memory_1, $memory_2);
#line 76
$memory_3 = c_rt_lib::ov_is($memory_4, 'ok');
#line 76
if (c_rt_lib::check_true($memory_3)) {goto label_9;}
#line 76
undef($memory_0);
#line 76
undef($memory_1);
#line 76
undef($memory_2);
#line 76
undef($memory_3);
#line 76
return $memory_4;
#line 76
label_9:
#line 76
undef($memory_3);
#line 76
undef($memory_4);
#line 77
$memory_3 = c_rt_lib::ov_mk_arg('ok', $memory_1);
#line 77
undef($memory_0);
#line 77
undef($memory_1);
#line 77
undef($memory_2);
#line 77
return $memory_3;
#line 77
undef($memory_3);
#line 77
undef($memory_2);
#line 77
undef($memory_0);
#line 77
undef($memory_1);
#line 77
return;
}

sub ptd::ensure_only_dynamic($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;$memory_0 = $_[0];$memory_1 = $_[1];
#line 81
$memory_2 = [];
#line 82
$memory_4 = ptd::ensure_dyn($memory_0, $memory_1, $memory_2);
#line 82
$memory_3 = c_rt_lib::ov_is($memory_4, 'ok');
#line 82
if (c_rt_lib::check_true($memory_3)) {goto label_6;}
#line 82
$memory_4 = c_rt_lib::ov_mk_arg('ensure', $memory_4);
#line 82
die(dfile::ssave($memory_4));
#line 82
label_6:
#line 82
undef($memory_3);
#line 82
undef($memory_4);
#line 83
undef($memory_0);
#line 83
undef($memory_2);
#line 83
return $memory_1;
#line 83
undef($memory_2);
#line 83
undef($memory_0);
#line 83
undef($memory_1);
#line 83
return;
}

sub ptd::ensure_only_static_do_not_touch_without_permission($$) {
my $memory_0;my $memory_1;$memory_0 = $_[0];$memory_1 = $_[1];
#line 88
undef($memory_0);
#line 88
return $memory_1;
#line 88
undef($memory_0);
#line 88
undef($memory_1);
#line 88
return;
}

sub ptd::ensure_dyn($$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;$memory_0 = $_[0];$memory_1 = $_[1];$memory_2 = $_[2];Scalar::Util::weaken($_[2]) if ref($_[2]);
#line 92
$memory_3 = c_std_lib::is_variant($memory_0);
#line 92
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 92
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 92
if (c_rt_lib::check_true($memory_3)) {goto label_14;}
#line 92
$memory_5 = "1 Not ov reference in ensure";
#line 92
$memory_4 = {err => $memory_5,path => $memory_2,};
#line 92
undef($memory_5);
#line 92
$memory_4 = c_rt_lib::ov_mk_arg('err', $memory_4);
#line 92
undef($memory_0);
#line 92
undef($memory_1);
#line 92
undef($memory_3);
#line 92
$_[2] = $memory_2;return $memory_4;
#line 92
undef($memory_4);
#line 92
goto label_14;
#line 92
label_14:
#line 92
undef($memory_3);
#line 93
$memory_3 = c_rt_lib::ov_is($memory_0, 'ptd_hash');
#line 93
if (c_rt_lib::check_true($memory_3)) {goto label_33;}
#line 100
$memory_3 = c_rt_lib::ov_is($memory_0, 'ptd_arr');
#line 100
if (c_rt_lib::check_true($memory_3)) {goto label_84;}
#line 107
$memory_3 = c_rt_lib::ov_is($memory_0, 'ptd_rec');
#line 107
if (c_rt_lib::check_true($memory_3)) {goto label_142;}
#line 118
$memory_3 = c_rt_lib::ov_is($memory_0, 'ptd_sim');
#line 118
if (c_rt_lib::check_true($memory_3)) {goto label_245;}
#line 120
$memory_3 = c_rt_lib::ov_is($memory_0, 'ptd_var');
#line 120
if (c_rt_lib::check_true($memory_3)) {goto label_264;}
#line 133
$memory_3 = c_rt_lib::ov_is($memory_0, 'ptd_im');
#line 133
if (c_rt_lib::check_true($memory_3)) {goto label_385;}
#line 134
$memory_3 = c_rt_lib::ov_is($memory_0, 'ref');
#line 134
if (c_rt_lib::check_true($memory_3)) {goto label_387;}
#line 134
$memory_3 = "NOMATCHALERT";
#line 134
$memory_3 = [$memory_3,$memory_0];
#line 134
die(dfile::ssave($memory_3));
#line 93
label_33:
#line 93
$memory_4 = c_rt_lib::ov_as($memory_0, 'ptd_hash');
#line 94
$memory_5 = c_std_lib::is_hash($memory_1);
#line 94
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 94
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 94
if (c_rt_lib::check_true($memory_5)) {goto label_51;}
#line 94
$memory_7 = "2 HASH ref expected ";
#line 94
$memory_6 = {err => $memory_7,path => $memory_2,};
#line 94
undef($memory_7);
#line 94
$memory_6 = c_rt_lib::ov_mk_arg('err', $memory_6);
#line 94
undef($memory_0);
#line 94
undef($memory_1);
#line 94
undef($memory_3);
#line 94
undef($memory_4);
#line 94
undef($memory_5);
#line 94
$_[2] = $memory_2;return $memory_6;
#line 94
undef($memory_6);
#line 94
goto label_51;
#line 94
label_51:
#line 94
undef($memory_5);
#line 95
$memory_7 = c_rt_lib::init_iter($memory_1);
#line 95
label_54:
#line 95
$memory_5 = c_rt_lib::is_end_hash($memory_7);
#line 95
if (c_rt_lib::check_true($memory_5)) {goto label_78;}
#line 95
$memory_5 = c_rt_lib::get_key_iter($memory_7);
#line 95
$memory_6 = c_rt_lib::hash_get_value($memory_1, $memory_5);
#line 96
c_rt_lib::array_push($memory_2, $memory_5);
#line 97
$memory_9 = ptd::ensure_dyn($memory_4, $memory_6, $memory_2);
#line 97
$memory_8 = c_rt_lib::ov_is($memory_9, 'ok');
#line 97
if (c_rt_lib::check_true($memory_8)) {goto label_72;}
#line 97
undef($memory_0);
#line 97
undef($memory_1);
#line 97
undef($memory_3);
#line 97
undef($memory_4);
#line 97
undef($memory_5);
#line 97
undef($memory_6);
#line 97
undef($memory_7);
#line 97
undef($memory_8);
#line 97
$_[2] = $memory_2;return $memory_9;
#line 97
label_72:
#line 97
undef($memory_8);
#line 97
undef($memory_9);
#line 98
array::pop($memory_2);
#line 99
$memory_7 = c_rt_lib::next_iter($memory_7);
#line 99
goto label_54;
#line 99
label_78:
#line 99
undef($memory_5);
#line 99
undef($memory_6);
#line 99
undef($memory_7);
#line 99
undef($memory_4);
#line 100
goto label_404;
#line 100
label_84:
#line 100
$memory_4 = c_rt_lib::ov_as($memory_0, 'ptd_arr');
#line 101
$memory_5 = c_std_lib::is_array($memory_1);
#line 101
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 101
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 101
if (c_rt_lib::check_true($memory_5)) {goto label_102;}
#line 101
$memory_7 = "3 ARRAY ref expected ";
#line 101
$memory_6 = {err => $memory_7,path => $memory_2,};
#line 101
undef($memory_7);
#line 101
$memory_6 = c_rt_lib::ov_mk_arg('err', $memory_6);
#line 101
undef($memory_0);
#line 101
undef($memory_1);
#line 101
undef($memory_3);
#line 101
undef($memory_4);
#line 101
undef($memory_5);
#line 101
$_[2] = $memory_2;return $memory_6;
#line 101
undef($memory_6);
#line 101
goto label_102;
#line 101
label_102:
#line 101
undef($memory_5);
#line 102
$memory_6 = 0;
#line 102
$memory_7 = 1;
#line 102
$memory_8 = c_rt_lib::array_len($memory_1);
#line 102
label_107:
#line 102
$memory_9 = c_rt_lib::to_nl($memory_6 >= $memory_8);
#line 102
if (c_rt_lib::check_true($memory_9)) {goto label_134;}
#line 102
$memory_5 = $memory_1->[$memory_6];
#line 103
$memory_10 = ":arr";
#line 103
c_rt_lib::array_push($memory_2, $memory_10);
#line 103
undef($memory_10);
#line 104
$memory_11 = ptd::ensure_dyn($memory_4, $memory_5, $memory_2);
#line 104
$memory_10 = c_rt_lib::ov_is($memory_11, 'ok');
#line 104
if (c_rt_lib::check_true($memory_10)) {goto label_128;}
#line 104
undef($memory_0);
#line 104
undef($memory_1);
#line 104
undef($memory_3);
#line 104
undef($memory_4);
#line 104
undef($memory_5);
#line 104
undef($memory_6);
#line 104
undef($memory_7);
#line 104
undef($memory_8);
#line 104
undef($memory_9);
#line 104
undef($memory_10);
#line 104
$_[2] = $memory_2;return $memory_11;
#line 104
label_128:
#line 104
undef($memory_10);
#line 104
undef($memory_11);
#line 105
array::pop($memory_2);
#line 106
$memory_6 = $memory_6 + $memory_7;
#line 106
goto label_107;
#line 106
label_134:
#line 106
undef($memory_5);
#line 106
undef($memory_6);
#line 106
undef($memory_7);
#line 106
undef($memory_8);
#line 106
undef($memory_9);
#line 106
undef($memory_4);
#line 107
goto label_404;
#line 107
label_142:
#line 107
$memory_4 = c_rt_lib::ov_as($memory_0, 'ptd_rec');
#line 108
$memory_5 = c_std_lib::is_hash($memory_1);
#line 108
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 108
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 108
if (c_rt_lib::check_true($memory_5)) {goto label_160;}
#line 108
$memory_7 = "4 HASH ref expected ";
#line 108
$memory_6 = {err => $memory_7,path => $memory_2,};
#line 108
undef($memory_7);
#line 108
$memory_6 = c_rt_lib::ov_mk_arg('err', $memory_6);
#line 108
undef($memory_0);
#line 108
undef($memory_1);
#line 108
undef($memory_3);
#line 108
undef($memory_4);
#line 108
undef($memory_5);
#line 108
$_[2] = $memory_2;return $memory_6;
#line 108
undef($memory_6);
#line 108
goto label_160;
#line 108
label_160:
#line 108
undef($memory_5);
#line 109
$memory_5 = hash::size($memory_4);
#line 109
$memory_6 = hash::size($memory_1);
#line 109
$memory_5 = c_rt_lib::to_nl($memory_5 == $memory_6);
#line 109
undef($memory_6);
#line 109
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 109
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 109
if (c_rt_lib::check_true($memory_5)) {goto label_181;}
#line 109
$memory_7 = "5 keys amount mismatch in ptd_rec";
#line 109
$memory_6 = {err => $memory_7,path => $memory_2,};
#line 109
undef($memory_7);
#line 109
$memory_6 = c_rt_lib::ov_mk_arg('err', $memory_6);
#line 109
undef($memory_0);
#line 109
undef($memory_1);
#line 109
undef($memory_3);
#line 109
undef($memory_4);
#line 109
undef($memory_5);
#line 109
$_[2] = $memory_2;return $memory_6;
#line 109
undef($memory_6);
#line 109
goto label_181;
#line 109
label_181:
#line 109
undef($memory_5);
#line 110
$memory_5 = ":hash";
#line 110
c_rt_lib::array_push($memory_2, $memory_5);
#line 110
undef($memory_5);
#line 111
$memory_7 = c_rt_lib::init_iter($memory_4);
#line 111
label_187:
#line 111
$memory_5 = c_rt_lib::is_end_hash($memory_7);
#line 111
if (c_rt_lib::check_true($memory_5)) {goto label_238;}
#line 111
$memory_5 = c_rt_lib::get_key_iter($memory_7);
#line 111
$memory_6 = c_rt_lib::hash_get_value($memory_4, $memory_5);
#line 112
c_rt_lib::array_push($memory_2, $memory_5);
#line 113
$memory_8 = hash::has_key($memory_1, $memory_5);
#line 113
$memory_8 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 113
$memory_8 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 113
if (c_rt_lib::check_true($memory_8)) {goto label_216;}
#line 113
$memory_10 = "6 key ";
#line 113
$memory_10 = $memory_10 . $memory_5;
#line 113
$memory_11 = " not exists in hash";
#line 113
$memory_10 = $memory_10 . $memory_11;
#line 113
undef($memory_11);
#line 113
$memory_9 = {err => $memory_10,path => $memory_2,};
#line 113
undef($memory_10);
#line 113
$memory_9 = c_rt_lib::ov_mk_arg('err', $memory_9);
#line 113
undef($memory_0);
#line 113
undef($memory_1);
#line 113
undef($memory_3);
#line 113
undef($memory_4);
#line 113
undef($memory_5);
#line 113
undef($memory_6);
#line 113
undef($memory_7);
#line 113
undef($memory_8);
#line 113
$_[2] = $memory_2;return $memory_9;
#line 113
undef($memory_9);
#line 113
goto label_216;
#line 113
label_216:
#line 113
undef($memory_8);
#line 114
$memory_10 = hash::get_value($memory_1, $memory_5);
#line 114
$memory_9 = ptd::ensure_dyn($memory_6, $memory_10, $memory_2);
#line 114
undef($memory_10);
#line 114
$memory_8 = c_rt_lib::ov_is($memory_9, 'ok');
#line 114
if (c_rt_lib::check_true($memory_8)) {goto label_232;}
#line 114
undef($memory_0);
#line 114
undef($memory_1);
#line 114
undef($memory_3);
#line 114
undef($memory_4);
#line 114
undef($memory_5);
#line 114
undef($memory_6);
#line 114
undef($memory_7);
#line 114
undef($memory_8);
#line 114
$_[2] = $memory_2;return $memory_9;
#line 114
label_232:
#line 114
undef($memory_8);
#line 114
undef($memory_9);
#line 115
array::pop($memory_2);
#line 116
$memory_7 = c_rt_lib::next_iter($memory_7);
#line 116
goto label_187;
#line 116
label_238:
#line 116
undef($memory_5);
#line 116
undef($memory_6);
#line 116
undef($memory_7);
#line 117
array::pop($memory_2);
#line 117
undef($memory_4);
#line 118
goto label_404;
#line 118
label_245:
#line 119
$memory_4 = c_std_lib::is_sim($memory_1);
#line 119
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 119
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 119
if (c_rt_lib::check_true($memory_4)) {goto label_261;}
#line 119
$memory_6 = "8 wrong sim ref ";
#line 119
$memory_5 = {err => $memory_6,path => $memory_2,};
#line 119
undef($memory_6);
#line 119
$memory_5 = c_rt_lib::ov_mk_arg('err', $memory_5);
#line 119
undef($memory_0);
#line 119
undef($memory_1);
#line 119
undef($memory_3);
#line 119
undef($memory_4);
#line 119
$_[2] = $memory_2;return $memory_5;
#line 119
undef($memory_5);
#line 119
goto label_261;
#line 119
label_261:
#line 119
undef($memory_4);
#line 120
goto label_404;
#line 120
label_264:
#line 120
$memory_4 = c_rt_lib::ov_as($memory_0, 'ptd_var');
#line 121
$memory_5 = c_std_lib::is_variant($memory_1);
#line 121
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 121
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 121
if (c_rt_lib::check_true($memory_5)) {goto label_282;}
#line 121
$memory_7 = "9 not ov ref";
#line 121
$memory_6 = {err => $memory_7,path => $memory_2,};
#line 121
undef($memory_7);
#line 121
$memory_6 = c_rt_lib::ov_mk_arg('err', $memory_6);
#line 121
undef($memory_0);
#line 121
undef($memory_1);
#line 121
undef($memory_3);
#line 121
undef($memory_4);
#line 121
undef($memory_5);
#line 121
$_[2] = $memory_2;return $memory_6;
#line 121
undef($memory_6);
#line 121
goto label_282;
#line 121
label_282:
#line 121
undef($memory_5);
#line 122
$memory_5 = ov::get_element($memory_1);
#line 123
$memory_6 = hash::has_key($memory_4, $memory_5);
#line 123
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 123
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 123
if (c_rt_lib::check_true($memory_6)) {goto label_306;}
#line 123
$memory_8 = "10 Case ";
#line 123
$memory_8 = $memory_8 . $memory_5;
#line 123
$memory_9 = " not allowed in variant. ";
#line 123
$memory_8 = $memory_8 . $memory_9;
#line 123
undef($memory_9);
#line 123
$memory_7 = {err => $memory_8,path => $memory_2,};
#line 123
undef($memory_8);
#line 123
$memory_7 = c_rt_lib::ov_mk_arg('err', $memory_7);
#line 123
undef($memory_0);
#line 123
undef($memory_1);
#line 123
undef($memory_3);
#line 123
undef($memory_4);
#line 123
undef($memory_5);
#line 123
undef($memory_6);
#line 123
$_[2] = $memory_2;return $memory_7;
#line 123
undef($memory_7);
#line 123
goto label_306;
#line 123
label_306:
#line 123
undef($memory_6);
#line 124
c_rt_lib::array_push($memory_2, $memory_5);
#line 125
$memory_6 = hash::get_value($memory_4, $memory_5);
#line 126
$memory_7 = c_rt_lib::ov_is($memory_6, 'with_param');
#line 126
if (c_rt_lib::check_true($memory_7)) {goto label_317;}
#line 129
$memory_7 = c_rt_lib::ov_is($memory_6, 'no_param');
#line 129
if (c_rt_lib::check_true($memory_7)) {goto label_356;}
#line 129
$memory_7 = "NOMATCHALERT";
#line 129
$memory_7 = [$memory_7,$memory_6];
#line 129
die(dfile::ssave($memory_7));
#line 126
label_317:
#line 126
$memory_8 = c_rt_lib::ov_as($memory_6, 'with_param');
#line 127
$memory_9 = ov::has_value($memory_1);
#line 127
$memory_9 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_9));
#line 127
$memory_9 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_9));
#line 127
if (c_rt_lib::check_true($memory_9)) {goto label_339;}
#line 127
$memory_11 = "12 with_param ov has no value";
#line 127
$memory_10 = {err => $memory_11,path => $memory_2,};
#line 127
undef($memory_11);
#line 127
$memory_10 = c_rt_lib::ov_mk_arg('err', $memory_10);
#line 127
undef($memory_0);
#line 127
undef($memory_1);
#line 127
undef($memory_3);
#line 127
undef($memory_4);
#line 127
undef($memory_5);
#line 127
undef($memory_6);
#line 127
undef($memory_7);
#line 127
undef($memory_8);
#line 127
undef($memory_9);
#line 127
$_[2] = $memory_2;return $memory_10;
#line 127
undef($memory_10);
#line 127
goto label_339;
#line 127
label_339:
#line 127
undef($memory_9);
#line 128
$memory_10 = ov::get_value($memory_1);
#line 128
$memory_9 = ptd::ensure_dyn($memory_8, $memory_10, $memory_2);
#line 128
undef($memory_10);
#line 128
undef($memory_0);
#line 128
undef($memory_1);
#line 128
undef($memory_3);
#line 128
undef($memory_4);
#line 128
undef($memory_5);
#line 128
undef($memory_6);
#line 128
undef($memory_7);
#line 128
undef($memory_8);
#line 128
$_[2] = $memory_2;return $memory_9;
#line 128
undef($memory_9);
#line 128
undef($memory_8);
#line 129
goto label_378;
#line 129
label_356:
#line 130
$memory_8 = ov::has_value($memory_1);
#line 130
$memory_8 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 130
if (c_rt_lib::check_true($memory_8)) {goto label_375;}
#line 130
$memory_10 = "11 no_param ov has value";
#line 130
$memory_9 = {err => $memory_10,path => $memory_2,};
#line 130
undef($memory_10);
#line 130
$memory_9 = c_rt_lib::ov_mk_arg('err', $memory_9);
#line 130
undef($memory_0);
#line 130
undef($memory_1);
#line 130
undef($memory_3);
#line 130
undef($memory_4);
#line 130
undef($memory_5);
#line 130
undef($memory_6);
#line 130
undef($memory_7);
#line 130
undef($memory_8);
#line 130
$_[2] = $memory_2;return $memory_9;
#line 130
undef($memory_9);
#line 130
goto label_375;
#line 130
label_375:
#line 130
undef($memory_8);
#line 131
goto label_378;
#line 131
label_378:
#line 131
undef($memory_7);
#line 132
array::pop($memory_2);
#line 132
undef($memory_5);
#line 132
undef($memory_6);
#line 132
undef($memory_4);
#line 133
goto label_404;
#line 133
label_385:
#line 134
goto label_404;
#line 134
label_387:
#line 134
$memory_4 = c_rt_lib::ov_as($memory_0, 'ref');
#line 135
c_rt_lib::array_push($memory_2, $memory_4);
#line 136
$memory_7 = [];
#line 136
$memory_6 = ptd_priv::exec($memory_0, $memory_7);
#line 136
undef($memory_7);
#line 136
$memory_5 = ptd::ensure_dyn($memory_6, $memory_1, $memory_2);
#line 136
undef($memory_6);
#line 137
array::pop($memory_2);
#line 138
undef($memory_0);
#line 138
undef($memory_1);
#line 138
undef($memory_3);
#line 138
undef($memory_4);
#line 138
$_[2] = $memory_2;return $memory_5;
#line 138
undef($memory_5);
#line 138
undef($memory_4);
#line 139
goto label_404;
#line 139
label_404:
#line 139
undef($memory_3);
#line 140
$memory_3 = "";
#line 140
$memory_3 = c_rt_lib::ov_mk_arg('ok', $memory_3);
#line 140
undef($memory_0);
#line 140
undef($memory_1);
#line 140
$_[2] = $memory_2;return $memory_3;
#line 140
undef($memory_3);
#line 140
undef($memory_0);
#line 140
undef($memory_1);
#line 140
$_[2] = $memory_2;return;
$_[2] = $memory_2;}

sub ptd::is_ref_type($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;$memory_0 = $_[0];$memory_1 = $_[1];
#line 144
$memory_2 = c_rt_lib::ov_is($memory_0, 'ref');
#line 144
if (c_rt_lib::check_true($memory_2)) {goto label_17;}
#line 154
$memory_2 = c_rt_lib::ov_is($memory_0, 'ptd_im');
#line 154
if (c_rt_lib::check_true($memory_2)) {goto label_105;}
#line 155
$memory_2 = c_rt_lib::ov_is($memory_0, 'ptd_sim');
#line 155
if (c_rt_lib::check_true($memory_2)) {goto label_107;}
#line 156
$memory_2 = c_rt_lib::ov_is($memory_0, 'ptd_arr');
#line 156
if (c_rt_lib::check_true($memory_2)) {goto label_109;}
#line 157
$memory_2 = c_rt_lib::ov_is($memory_0, 'ptd_var');
#line 157
if (c_rt_lib::check_true($memory_2)) {goto label_113;}
#line 158
$memory_2 = c_rt_lib::ov_is($memory_0, 'ptd_rec');
#line 158
if (c_rt_lib::check_true($memory_2)) {goto label_117;}
#line 159
$memory_2 = c_rt_lib::ov_is($memory_0, 'ptd_hash');
#line 159
if (c_rt_lib::check_true($memory_2)) {goto label_121;}
#line 159
$memory_2 = "NOMATCHALERT";
#line 159
$memory_2 = [$memory_2,$memory_0];
#line 159
die(dfile::ssave($memory_2));
#line 144
label_17:
#line 144
$memory_3 = c_rt_lib::ov_as($memory_0, 'ref');
#line 145
$memory_4 = $memory_1;
#line 145
$memory_4 = c_rt_lib::ov_is($memory_4, 'ref');
#line 145
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 145
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 145
if (c_rt_lib::check_true($memory_4)) {goto label_33;}
#line 145
$memory_5 = c_rt_lib::to_nl(0);
#line 145
undef($memory_0);
#line 145
undef($memory_1);
#line 145
undef($memory_2);
#line 145
undef($memory_3);
#line 145
undef($memory_4);
#line 145
return $memory_5;
#line 145
undef($memory_5);
#line 145
goto label_33;
#line 145
label_33:
#line 145
undef($memory_4);
#line 146
$memory_4 = $memory_1;
#line 146
$memory_4 = c_rt_lib::ov_as($memory_4, 'ref');
#line 147
$memory_5 = c_std_lib::is_hash($memory_4);
#line 147
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 147
if (c_rt_lib::check_true($memory_5)) {goto label_81;}
#line 148
$memory_6 = $memory_4->{'module'};
#line 148
$memory_7 = $memory_3->{'module'};
#line 148
$memory_6 = c_rt_lib::to_nl($memory_6 eq $memory_7);
#line 148
undef($memory_7);
#line 148
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 148
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 148
if (c_rt_lib::check_true($memory_6)) {goto label_58;}
#line 148
$memory_7 = c_rt_lib::to_nl(0);
#line 148
undef($memory_0);
#line 148
undef($memory_1);
#line 148
undef($memory_2);
#line 148
undef($memory_3);
#line 148
undef($memory_4);
#line 148
undef($memory_5);
#line 148
undef($memory_6);
#line 148
return $memory_7;
#line 148
undef($memory_7);
#line 148
goto label_58;
#line 148
label_58:
#line 148
undef($memory_6);
#line 149
$memory_6 = $memory_4->{'name'};
#line 149
$memory_7 = $memory_3->{'name'};
#line 149
$memory_6 = c_rt_lib::to_nl($memory_6 eq $memory_7);
#line 149
undef($memory_7);
#line 149
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 149
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 149
if (c_rt_lib::check_true($memory_6)) {goto label_78;}
#line 149
$memory_7 = c_rt_lib::to_nl(0);
#line 149
undef($memory_0);
#line 149
undef($memory_1);
#line 149
undef($memory_2);
#line 149
undef($memory_3);
#line 149
undef($memory_4);
#line 149
undef($memory_5);
#line 149
undef($memory_6);
#line 149
return $memory_7;
#line 149
undef($memory_7);
#line 149
goto label_78;
#line 149
label_78:
#line 149
undef($memory_6);
#line 150
goto label_92;
#line 150
label_81:
#line 151
$memory_6 = c_rt_lib::to_nl($memory_4 eq $memory_3);
#line 151
undef($memory_0);
#line 151
undef($memory_1);
#line 151
undef($memory_2);
#line 151
undef($memory_3);
#line 151
undef($memory_4);
#line 151
undef($memory_5);
#line 151
return $memory_6;
#line 151
undef($memory_6);
#line 152
goto label_92;
#line 152
label_92:
#line 152
undef($memory_5);
#line 153
$memory_5 = c_rt_lib::to_nl(1);
#line 153
undef($memory_0);
#line 153
undef($memory_1);
#line 153
undef($memory_2);
#line 153
undef($memory_3);
#line 153
undef($memory_4);
#line 153
return $memory_5;
#line 153
undef($memory_5);
#line 153
undef($memory_4);
#line 153
undef($memory_3);
#line 154
goto label_125;
#line 154
label_105:
#line 155
goto label_125;
#line 155
label_107:
#line 156
goto label_125;
#line 156
label_109:
#line 156
$memory_3 = c_rt_lib::ov_as($memory_0, 'ptd_arr');
#line 156
undef($memory_3);
#line 157
goto label_125;
#line 157
label_113:
#line 157
$memory_3 = c_rt_lib::ov_as($memory_0, 'ptd_var');
#line 157
undef($memory_3);
#line 158
goto label_125;
#line 158
label_117:
#line 158
$memory_3 = c_rt_lib::ov_as($memory_0, 'ptd_rec');
#line 158
undef($memory_3);
#line 159
goto label_125;
#line 159
label_121:
#line 159
$memory_3 = c_rt_lib::ov_as($memory_0, 'ptd_hash');
#line 159
undef($memory_3);
#line 160
goto label_125;
#line 160
label_125:
#line 160
undef($memory_2);
#line 161
$memory_2 = c_rt_lib::to_nl(0);
#line 161
undef($memory_0);
#line 161
undef($memory_1);
#line 161
return $memory_2;
#line 161
undef($memory_2);
#line 161
undef($memory_0);
#line 161
undef($memory_1);
#line 161
return;
}

sub ptd_priv::exec($$) {
my $memory_0;my $memory_1;my $memory_2;$memory_0 = $_[0];$memory_1 = $_[1];
#line 165
$memory_2 = c_std_lib::exec($memory_0, $memory_1);
#line 165
undef($memory_0);
#line 165
undef($memory_1);
#line 165
return $memory_2;
#line 165
undef($memory_2);
#line 165
undef($memory_0);
#line 165
undef($memory_1);
#line 165
return;
}

sub ptd::__cast_t() {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;
#line 170
$memory_2 = ptd::ptd_im();
#line 171
$memory_3 = {
	module => "ptd",
	name => "cast_error_t",
};
#line 171
$memory_3 = c_rt_lib::ov_mk_arg('ref', $memory_3);
#line 171
$memory_1 = {ok => $memory_2,err => $memory_3,};
#line 171
undef($memory_2);
#line 171
undef($memory_3);
#line 171
$memory_0 = ptd::var($memory_1);
#line 171
undef($memory_1);
#line 171
return $memory_0;
#line 171
undef($memory_0);
#line 171
return;
}

my $_cast_t;
sub ptd::cast_t() {
	$_cast_t = ptd::__cast_t() unless defined $_cast_t;
	return $_cast_t;
}

sub ptd::try_cast($$) {
my $memory_0;my $memory_1;my $memory_2;$memory_0 = $_[0];$memory_1 = $_[1];
#line 176
$memory_2 = ptd::try_dynamic_cast($memory_0, $memory_1);
#line 176
undef($memory_0);
#line 176
undef($memory_1);
#line 176
return $memory_2;
#line 176
undef($memory_2);
#line 176
undef($memory_0);
#line 176
undef($memory_1);
#line 176
return;
}

sub ptd::try_dynamic_cast($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;$memory_0 = $_[0];$memory_1 = $_[1];
#line 179
$memory_2 = ptd_priv::try_dynamic_cast($memory_0, $memory_1);
#line 180
$memory_3 = array::len($memory_2);
#line 180
$memory_4 = 0;
#line 180
$memory_3 = c_rt_lib::to_nl($memory_3 == $memory_4);
#line 180
undef($memory_4);
#line 180
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 180
if (c_rt_lib::check_true($memory_3)) {goto label_15;}
#line 181
$memory_4 = c_rt_lib::ov_mk_arg('ok', $memory_1);
#line 181
undef($memory_0);
#line 181
undef($memory_1);
#line 181
undef($memory_2);
#line 181
undef($memory_3);
#line 181
return $memory_4;
#line 181
undef($memory_4);
#line 182
goto label_15;
#line 182
label_15:
#line 182
undef($memory_3);
#line 183
$memory_3 = c_rt_lib::ov_mk_arg('err', $memory_2);
#line 183
undef($memory_0);
#line 183
undef($memory_1);
#line 183
undef($memory_2);
#line 183
return $memory_3;
#line 183
undef($memory_3);
#line 183
undef($memory_2);
#line 183
undef($memory_0);
#line 183
undef($memory_1);
#line 183
return;
}

sub ptd::__imm_kind_t() {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;
#line 188
$memory_2 = ptd::none();
#line 189
$memory_3 = ptd::none();
#line 190
$memory_4 = ptd::none();
#line 191
$memory_5 = ptd::none();
#line 191
$memory_1 = {sim => $memory_2,hash => $memory_3,variant => $memory_4,array => $memory_5,};
#line 191
undef($memory_2);
#line 191
undef($memory_3);
#line 191
undef($memory_4);
#line 191
undef($memory_5);
#line 191
$memory_0 = ptd::var($memory_1);
#line 191
undef($memory_1);
#line 191
return $memory_0;
#line 191
undef($memory_0);
#line 191
return;
}

my $_imm_kind_t;
sub ptd::imm_kind_t() {
	$_imm_kind_t = ptd::__imm_kind_t() unless defined $_imm_kind_t;
	return $_imm_kind_t;
}

sub ptd::__cast_error_t() {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;my $memory_13;my $memory_14;my $memory_15;my $memory_16;
#line 198
$memory_5 = ptd::sim();
#line 199
$memory_6 = ptd::sim();
#line 200
$memory_7 = ptd::sim();
#line 201
$memory_8 = ptd::sim();
#line 202
$memory_9 = ptd::ptd_im();
#line 202
$memory_4 = {hash_key => $memory_5,array_index => $memory_6,rec_key => $memory_7,variant_value => $memory_8,type_ref => $memory_9,};
#line 202
undef($memory_5);
#line 202
undef($memory_6);
#line 202
undef($memory_7);
#line 202
undef($memory_8);
#line 202
undef($memory_9);
#line 202
$memory_3 = ptd::var($memory_4);
#line 202
undef($memory_4);
#line 205
$memory_6 = {
	module => "ptd",
	name => "imm_kind_t",
};
#line 205
$memory_6 = c_rt_lib::ov_mk_arg('ref', $memory_6);
#line 206
$memory_7 = {
	module => "ptd",
	name => "imm_kind_t",
};
#line 206
$memory_7 = c_rt_lib::ov_mk_arg('ref', $memory_7);
#line 207
$memory_8 = {
	module => "ptd",
	name => "imm_kind_t",
};
#line 207
$memory_8 = c_rt_lib::ov_mk_arg('ref', $memory_8);
#line 208
$memory_9 = {
	module => "ptd",
	name => "imm_kind_t",
};
#line 208
$memory_9 = c_rt_lib::ov_mk_arg('ref', $memory_9);
#line 209
$memory_10 = {
	module => "ptd",
	name => "imm_kind_t",
};
#line 209
$memory_10 = c_rt_lib::ov_mk_arg('ref', $memory_10);
#line 210
$memory_11 = {
	module => "ptd",
	name => "imm_kind_t",
};
#line 210
$memory_11 = c_rt_lib::ov_mk_arg('ref', $memory_11);
#line 211
$memory_12 = ptd::sim();
#line 212
$memory_13 = ptd::sim();
#line 213
$memory_14 = ptd::sim();
#line 214
$memory_15 = ptd::sim();
#line 215
$memory_16 = ptd::sim();
#line 215
$memory_5 = {is_not_type => $memory_6,hash_expected => $memory_7,array_expected => $memory_8,rec_expected => $memory_9,sim_expected => $memory_10,variant_expected => $memory_11,rec_size => $memory_12,no_key => $memory_13,unknown_case => $memory_14,has_value => $memory_15,no_value => $memory_16,};
#line 215
undef($memory_6);
#line 215
undef($memory_7);
#line 215
undef($memory_8);
#line 215
undef($memory_9);
#line 215
undef($memory_10);
#line 215
undef($memory_11);
#line 215
undef($memory_12);
#line 215
undef($memory_13);
#line 215
undef($memory_14);
#line 215
undef($memory_15);
#line 215
undef($memory_16);
#line 215
$memory_4 = ptd::var($memory_5);
#line 215
undef($memory_5);
#line 215
$memory_2 = {path => $memory_3,error => $memory_4,};
#line 215
undef($memory_3);
#line 215
undef($memory_4);
#line 215
$memory_1 = ptd::var($memory_2);
#line 215
undef($memory_2);
#line 215
$memory_0 = ptd::arr($memory_1);
#line 215
undef($memory_1);
#line 215
return $memory_0;
#line 215
undef($memory_0);
#line 215
return;
}

my $_cast_error_t;
sub ptd::cast_error_t() {
	$_cast_error_t = ptd::__cast_error_t() unless defined $_cast_error_t;
	return $_cast_error_t;
}

sub ptd::get_imm_kind($) {
my $memory_0;my $memory_1;my $memory_2;$memory_0 = $_[0];
#line 220
$memory_1 = c_std_lib::is_sim($memory_0);
#line 220
$memory_1 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_1));
#line 220
if (c_rt_lib::check_true($memory_1)) {goto label_9;}
#line 220
$memory_2 = c_rt_lib::ov_mk_none('sim');
#line 220
undef($memory_0);
#line 220
undef($memory_1);
#line 220
return $memory_2;
#line 220
undef($memory_2);
#line 220
goto label_9;
#line 220
label_9:
#line 220
undef($memory_1);
#line 221
$memory_1 = c_std_lib::is_variant($memory_0);
#line 221
$memory_1 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_1));
#line 221
if (c_rt_lib::check_true($memory_1)) {goto label_20;}
#line 221
$memory_2 = c_rt_lib::ov_mk_none('variant');
#line 221
undef($memory_0);
#line 221
undef($memory_1);
#line 221
return $memory_2;
#line 221
undef($memory_2);
#line 221
goto label_20;
#line 221
label_20:
#line 221
undef($memory_1);
#line 222
$memory_1 = c_std_lib::is_hash($memory_0);
#line 222
$memory_1 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_1));
#line 222
if (c_rt_lib::check_true($memory_1)) {goto label_31;}
#line 222
$memory_2 = c_rt_lib::ov_mk_none('hash');
#line 222
undef($memory_0);
#line 222
undef($memory_1);
#line 222
return $memory_2;
#line 222
undef($memory_2);
#line 222
goto label_31;
#line 222
label_31:
#line 222
undef($memory_1);
#line 223
$memory_1 = c_std_lib::is_array($memory_0);
#line 223
$memory_1 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_1));
#line 223
if (c_rt_lib::check_true($memory_1)) {goto label_42;}
#line 223
$memory_2 = c_rt_lib::ov_mk_none('array');
#line 223
undef($memory_0);
#line 223
undef($memory_1);
#line 223
return $memory_2;
#line 223
undef($memory_2);
#line 223
goto label_42;
#line 223
label_42:
#line 223
undef($memory_1);
#line 224
$memory_1 = [];
#line 224
die(dfile::ssave($memory_1));
#line 224
undef($memory_1);
#line 224
undef($memory_0);
#line 224
return;
}

sub ptd_priv::try_dynamic_cast($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;$memory_0 = $_[0];$memory_1 = $_[1];
#line 227
$memory_2 = c_std_lib::is_variant($memory_0);
#line 227
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 227
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 227
if (c_rt_lib::check_true($memory_2)) {goto label_15;}
#line 227
$memory_4 = ptd::get_imm_kind($memory_0);
#line 227
$memory_4 = c_rt_lib::ov_mk_arg('is_not_type', $memory_4);
#line 227
$memory_4 = c_rt_lib::ov_mk_arg('error', $memory_4);
#line 227
$memory_3 = [$memory_4];
#line 227
undef($memory_4);
#line 227
undef($memory_0);
#line 227
undef($memory_1);
#line 227
undef($memory_2);
#line 227
return $memory_3;
#line 227
undef($memory_3);
#line 227
goto label_15;
#line 227
label_15:
#line 227
undef($memory_2);
#line 228
$memory_2 = c_rt_lib::ov_is($memory_0, 'ptd_hash');
#line 228
if (c_rt_lib::check_true($memory_2)) {goto label_34;}
#line 237
$memory_2 = c_rt_lib::ov_is($memory_0, 'ptd_arr');
#line 237
if (c_rt_lib::check_true($memory_2)) {goto label_93;}
#line 246
$memory_2 = c_rt_lib::ov_is($memory_0, 'ptd_rec');
#line 246
if (c_rt_lib::check_true($memory_2)) {goto label_156;}
#line 257
$memory_2 = c_rt_lib::ov_is($memory_0, 'ptd_sim');
#line 257
if (c_rt_lib::check_true($memory_2)) {goto label_260;}
#line 259
$memory_2 = c_rt_lib::ov_is($memory_0, 'ptd_var');
#line 259
if (c_rt_lib::check_true($memory_2)) {goto label_280;}
#line 274
$memory_2 = c_rt_lib::ov_is($memory_0, 'ptd_im');
#line 274
if (c_rt_lib::check_true($memory_2)) {goto label_418;}
#line 275
$memory_2 = c_rt_lib::ov_is($memory_0, 'ref');
#line 275
if (c_rt_lib::check_true($memory_2)) {goto label_420;}
#line 275
$memory_2 = "NOMATCHALERT";
#line 275
$memory_2 = [$memory_2,$memory_0];
#line 275
die(dfile::ssave($memory_2));
#line 228
label_34:
#line 228
$memory_3 = c_rt_lib::ov_as($memory_0, 'ptd_hash');
#line 229
$memory_4 = c_std_lib::is_hash($memory_1);
#line 229
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 229
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 229
if (c_rt_lib::check_true($memory_4)) {goto label_53;}
#line 229
$memory_6 = ptd::get_imm_kind($memory_0);
#line 229
$memory_6 = c_rt_lib::ov_mk_arg('hash_expected', $memory_6);
#line 229
$memory_6 = c_rt_lib::ov_mk_arg('error', $memory_6);
#line 229
$memory_5 = [$memory_6];
#line 229
undef($memory_6);
#line 229
undef($memory_0);
#line 229
undef($memory_1);
#line 229
undef($memory_2);
#line 229
undef($memory_3);
#line 229
undef($memory_4);
#line 229
return $memory_5;
#line 229
undef($memory_5);
#line 229
goto label_53;
#line 229
label_53:
#line 229
undef($memory_4);
#line 230
$memory_6 = c_rt_lib::init_iter($memory_1);
#line 230
label_56:
#line 230
$memory_4 = c_rt_lib::is_end_hash($memory_6);
#line 230
if (c_rt_lib::check_true($memory_4)) {goto label_87;}
#line 230
$memory_4 = c_rt_lib::get_key_iter($memory_6);
#line 230
$memory_5 = c_rt_lib::hash_get_value($memory_1, $memory_4);
#line 231
$memory_7 = ptd_priv::try_dynamic_cast($memory_3, $memory_5);
#line 232
$memory_8 = array::len($memory_7);
#line 232
$memory_9 = 0;
#line 232
$memory_8 = c_rt_lib::to_nl($memory_8 > $memory_9);
#line 232
undef($memory_9);
#line 232
$memory_8 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 232
if (c_rt_lib::check_true($memory_8)) {goto label_82;}
#line 233
$memory_9 = c_rt_lib::ov_mk_arg('hash_key', $memory_4);
#line 233
$memory_9 = c_rt_lib::ov_mk_arg('path', $memory_9);
#line 233
array::push($memory_7, $memory_9);
#line 233
undef($memory_9);
#line 234
undef($memory_0);
#line 234
undef($memory_1);
#line 234
undef($memory_2);
#line 234
undef($memory_3);
#line 234
undef($memory_4);
#line 234
undef($memory_5);
#line 234
undef($memory_6);
#line 234
undef($memory_8);
#line 234
return $memory_7;
#line 235
goto label_82;
#line 235
label_82:
#line 235
undef($memory_8);
#line 235
undef($memory_7);
#line 236
$memory_6 = c_rt_lib::next_iter($memory_6);
#line 236
goto label_56;
#line 236
label_87:
#line 236
undef($memory_4);
#line 236
undef($memory_5);
#line 236
undef($memory_6);
#line 236
undef($memory_3);
#line 237
goto label_449;
#line 237
label_93:
#line 237
$memory_3 = c_rt_lib::ov_as($memory_0, 'ptd_arr');
#line 238
$memory_4 = c_std_lib::is_array($memory_1);
#line 238
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 238
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 238
if (c_rt_lib::check_true($memory_4)) {goto label_112;}
#line 238
$memory_6 = ptd::get_imm_kind($memory_0);
#line 238
$memory_6 = c_rt_lib::ov_mk_arg('array_expected', $memory_6);
#line 238
$memory_6 = c_rt_lib::ov_mk_arg('error', $memory_6);
#line 238
$memory_5 = [$memory_6];
#line 238
undef($memory_6);
#line 238
undef($memory_0);
#line 238
undef($memory_1);
#line 238
undef($memory_2);
#line 238
undef($memory_3);
#line 238
undef($memory_4);
#line 238
return $memory_5;
#line 238
undef($memory_5);
#line 238
goto label_112;
#line 238
label_112:
#line 238
undef($memory_4);
#line 239
$memory_4 = array::len($memory_1);
#line 239
$memory_5 = 0;
#line 239
$memory_6 = 1;
#line 239
label_117:
#line 239
$memory_7 = c_rt_lib::to_nl($memory_5 >= $memory_4);
#line 239
if (c_rt_lib::check_true($memory_7)) {goto label_149;}
#line 240
$memory_9 = $memory_1->[$memory_5];
#line 240
$memory_8 = ptd_priv::try_dynamic_cast($memory_3, $memory_9);
#line 240
undef($memory_9);
#line 241
$memory_9 = array::len($memory_8);
#line 241
$memory_10 = 0;
#line 241
$memory_9 = c_rt_lib::to_nl($memory_9 > $memory_10);
#line 241
undef($memory_10);
#line 241
$memory_9 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_9));
#line 241
if (c_rt_lib::check_true($memory_9)) {goto label_144;}
#line 242
$memory_10 = c_rt_lib::ov_mk_arg('array_index', $memory_5);
#line 242
$memory_10 = c_rt_lib::ov_mk_arg('path', $memory_10);
#line 242
array::push($memory_8, $memory_10);
#line 242
undef($memory_10);
#line 243
undef($memory_0);
#line 243
undef($memory_1);
#line 243
undef($memory_2);
#line 243
undef($memory_3);
#line 243
undef($memory_4);
#line 243
undef($memory_5);
#line 243
undef($memory_6);
#line 243
undef($memory_7);
#line 243
undef($memory_9);
#line 243
return $memory_8;
#line 244
goto label_144;
#line 244
label_144:
#line 244
undef($memory_9);
#line 244
undef($memory_8);
#line 245
$memory_5 = $memory_5 + $memory_6;
#line 245
goto label_117;
#line 245
label_149:
#line 245
undef($memory_4);
#line 245
undef($memory_5);
#line 245
undef($memory_6);
#line 245
undef($memory_7);
#line 245
undef($memory_3);
#line 246
goto label_449;
#line 246
label_156:
#line 246
$memory_3 = c_rt_lib::ov_as($memory_0, 'ptd_rec');
#line 247
$memory_4 = c_std_lib::is_hash($memory_1);
#line 247
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 247
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 247
if (c_rt_lib::check_true($memory_4)) {goto label_175;}
#line 247
$memory_6 = ptd::get_imm_kind($memory_0);
#line 247
$memory_6 = c_rt_lib::ov_mk_arg('rec_expected', $memory_6);
#line 247
$memory_6 = c_rt_lib::ov_mk_arg('error', $memory_6);
#line 247
$memory_5 = [$memory_6];
#line 247
undef($memory_6);
#line 247
undef($memory_0);
#line 247
undef($memory_1);
#line 247
undef($memory_2);
#line 247
undef($memory_3);
#line 247
undef($memory_4);
#line 247
return $memory_5;
#line 247
undef($memory_5);
#line 247
goto label_175;
#line 247
label_175:
#line 247
undef($memory_4);
#line 248
$memory_4 = hash::size($memory_3);
#line 248
$memory_5 = hash::size($memory_1);
#line 248
$memory_4 = c_rt_lib::to_nl($memory_4 == $memory_5);
#line 248
undef($memory_5);
#line 248
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 248
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 248
if (c_rt_lib::check_true($memory_4)) {goto label_197;}
#line 248
$memory_6 = hash::size($memory_1);
#line 248
$memory_6 = c_rt_lib::ov_mk_arg('rec_size', $memory_6);
#line 248
$memory_6 = c_rt_lib::ov_mk_arg('error', $memory_6);
#line 248
$memory_5 = [$memory_6];
#line 248
undef($memory_6);
#line 248
undef($memory_0);
#line 248
undef($memory_1);
#line 248
undef($memory_2);
#line 248
undef($memory_3);
#line 248
undef($memory_4);
#line 248
return $memory_5;
#line 248
undef($memory_5);
#line 248
goto label_197;
#line 248
label_197:
#line 248
undef($memory_4);
#line 249
$memory_6 = c_rt_lib::init_iter($memory_3);
#line 249
label_200:
#line 249
$memory_4 = c_rt_lib::is_end_hash($memory_6);
#line 249
if (c_rt_lib::check_true($memory_4)) {goto label_254;}
#line 249
$memory_4 = c_rt_lib::get_key_iter($memory_6);
#line 249
$memory_5 = c_rt_lib::hash_get_value($memory_3, $memory_4);
#line 250
$memory_7 = hash::has_key($memory_1, $memory_4);
#line 250
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 250
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 250
if (c_rt_lib::check_true($memory_7)) {goto label_224;}
#line 250
$memory_9 = c_rt_lib::ov_mk_arg('no_key', $memory_4);
#line 250
$memory_9 = c_rt_lib::ov_mk_arg('error', $memory_9);
#line 250
$memory_8 = [$memory_9];
#line 250
undef($memory_9);
#line 250
undef($memory_0);
#line 250
undef($memory_1);
#line 250
undef($memory_2);
#line 250
undef($memory_3);
#line 250
undef($memory_4);
#line 250
undef($memory_5);
#line 250
undef($memory_6);
#line 250
undef($memory_7);
#line 250
return $memory_8;
#line 250
undef($memory_8);
#line 250
goto label_224;
#line 250
label_224:
#line 250
undef($memory_7);
#line 251
$memory_8 = hash::get_value($memory_1, $memory_4);
#line 251
$memory_7 = ptd_priv::try_dynamic_cast($memory_5, $memory_8);
#line 251
undef($memory_8);
#line 252
$memory_8 = array::len($memory_7);
#line 252
$memory_9 = 0;
#line 252
$memory_8 = c_rt_lib::to_nl($memory_8 > $memory_9);
#line 252
undef($memory_9);
#line 252
$memory_8 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 252
if (c_rt_lib::check_true($memory_8)) {goto label_249;}
#line 253
$memory_9 = c_rt_lib::ov_mk_arg('rec_key', $memory_4);
#line 253
$memory_9 = c_rt_lib::ov_mk_arg('path', $memory_9);
#line 253
array::push($memory_7, $memory_9);
#line 253
undef($memory_9);
#line 254
undef($memory_0);
#line 254
undef($memory_1);
#line 254
undef($memory_2);
#line 254
undef($memory_3);
#line 254
undef($memory_4);
#line 254
undef($memory_5);
#line 254
undef($memory_6);
#line 254
undef($memory_8);
#line 254
return $memory_7;
#line 255
goto label_249;
#line 255
label_249:
#line 255
undef($memory_8);
#line 255
undef($memory_7);
#line 256
$memory_6 = c_rt_lib::next_iter($memory_6);
#line 256
goto label_200;
#line 256
label_254:
#line 256
undef($memory_4);
#line 256
undef($memory_5);
#line 256
undef($memory_6);
#line 256
undef($memory_3);
#line 257
goto label_449;
#line 257
label_260:
#line 258
$memory_3 = c_std_lib::is_sim($memory_1);
#line 258
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 258
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 258
if (c_rt_lib::check_true($memory_3)) {goto label_277;}
#line 258
$memory_5 = ptd::get_imm_kind($memory_0);
#line 258
$memory_5 = c_rt_lib::ov_mk_arg('sim_expected', $memory_5);
#line 258
$memory_5 = c_rt_lib::ov_mk_arg('error', $memory_5);
#line 258
$memory_4 = [$memory_5];
#line 258
undef($memory_5);
#line 258
undef($memory_0);
#line 258
undef($memory_1);
#line 258
undef($memory_2);
#line 258
undef($memory_3);
#line 258
return $memory_4;
#line 258
undef($memory_4);
#line 258
goto label_277;
#line 258
label_277:
#line 258
undef($memory_3);
#line 259
goto label_449;
#line 259
label_280:
#line 259
$memory_3 = c_rt_lib::ov_as($memory_0, 'ptd_var');
#line 260
$memory_4 = c_std_lib::is_variant($memory_1);
#line 260
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 260
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 260
if (c_rt_lib::check_true($memory_4)) {goto label_299;}
#line 260
$memory_6 = ptd::get_imm_kind($memory_0);
#line 260
$memory_6 = c_rt_lib::ov_mk_arg('variant_expected', $memory_6);
#line 260
$memory_6 = c_rt_lib::ov_mk_arg('error', $memory_6);
#line 260
$memory_5 = [$memory_6];
#line 260
undef($memory_6);
#line 260
undef($memory_0);
#line 260
undef($memory_1);
#line 260
undef($memory_2);
#line 260
undef($memory_3);
#line 260
undef($memory_4);
#line 260
return $memory_5;
#line 260
undef($memory_5);
#line 260
goto label_299;
#line 260
label_299:
#line 260
undef($memory_4);
#line 261
$memory_4 = ov::get_element($memory_1);
#line 262
$memory_5 = hash::has_key($memory_3, $memory_4);
#line 262
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 262
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 262
if (c_rt_lib::check_true($memory_5)) {goto label_321;}
#line 262
$memory_7 = "";
#line 262
$memory_7 = $memory_4 . $memory_7;
#line 262
$memory_7 = c_rt_lib::ov_mk_arg('unknown_case', $memory_7);
#line 262
$memory_7 = c_rt_lib::ov_mk_arg('error', $memory_7);
#line 262
$memory_6 = [$memory_7];
#line 262
undef($memory_7);
#line 262
undef($memory_0);
#line 262
undef($memory_1);
#line 262
undef($memory_2);
#line 262
undef($memory_3);
#line 262
undef($memory_4);
#line 262
undef($memory_5);
#line 262
return $memory_6;
#line 262
undef($memory_6);
#line 262
goto label_321;
#line 262
label_321:
#line 262
undef($memory_5);
#line 263
$memory_5 = hash::get_value($memory_3, $memory_4);
#line 264
$memory_6 = c_rt_lib::ov_is($memory_5, 'with_param');
#line 264
if (c_rt_lib::check_true($memory_6)) {goto label_331;}
#line 271
$memory_6 = c_rt_lib::ov_is($memory_5, 'no_param');
#line 271
if (c_rt_lib::check_true($memory_6)) {goto label_388;}
#line 271
$memory_6 = "NOMATCHALERT";
#line 271
$memory_6 = [$memory_6,$memory_5];
#line 271
die(dfile::ssave($memory_6));
#line 264
label_331:
#line 264
$memory_7 = c_rt_lib::ov_as($memory_5, 'with_param');
#line 265
$memory_8 = ov::has_value($memory_1);
#line 265
$memory_8 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 265
$memory_8 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 265
if (c_rt_lib::check_true($memory_8)) {goto label_355;}
#line 265
$memory_10 = "";
#line 265
$memory_10 = $memory_4 . $memory_10;
#line 265
$memory_10 = c_rt_lib::ov_mk_arg('no_value', $memory_10);
#line 265
$memory_10 = c_rt_lib::ov_mk_arg('error', $memory_10);
#line 265
$memory_9 = [$memory_10];
#line 265
undef($memory_10);
#line 265
undef($memory_0);
#line 265
undef($memory_1);
#line 265
undef($memory_2);
#line 265
undef($memory_3);
#line 265
undef($memory_4);
#line 265
undef($memory_5);
#line 265
undef($memory_6);
#line 265
undef($memory_7);
#line 265
undef($memory_8);
#line 265
return $memory_9;
#line 265
undef($memory_9);
#line 265
goto label_355;
#line 265
label_355:
#line 265
undef($memory_8);
#line 266
$memory_9 = ov::get_value($memory_1);
#line 266
$memory_8 = ptd_priv::try_dynamic_cast($memory_7, $memory_9);
#line 266
undef($memory_9);
#line 267
$memory_9 = array::len($memory_8);
#line 267
$memory_10 = 0;
#line 267
$memory_9 = c_rt_lib::to_nl($memory_9 > $memory_10);
#line 267
undef($memory_10);
#line 267
$memory_9 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_9));
#line 267
if (c_rt_lib::check_true($memory_9)) {goto label_383;}
#line 268
$memory_10 = "";
#line 268
$memory_10 = $memory_4 . $memory_10;
#line 268
$memory_10 = c_rt_lib::ov_mk_arg('variant_value', $memory_10);
#line 268
$memory_10 = c_rt_lib::ov_mk_arg('path', $memory_10);
#line 268
array::push($memory_8, $memory_10);
#line 268
undef($memory_10);
#line 269
undef($memory_0);
#line 269
undef($memory_1);
#line 269
undef($memory_2);
#line 269
undef($memory_3);
#line 269
undef($memory_4);
#line 269
undef($memory_5);
#line 269
undef($memory_6);
#line 269
undef($memory_7);
#line 269
undef($memory_9);
#line 269
return $memory_8;
#line 270
goto label_383;
#line 270
label_383:
#line 270
undef($memory_9);
#line 270
undef($memory_8);
#line 270
undef($memory_7);
#line 271
goto label_412;
#line 271
label_388:
#line 272
$memory_7 = ov::has_value($memory_1);
#line 272
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 272
if (c_rt_lib::check_true($memory_7)) {goto label_409;}
#line 272
$memory_9 = "";
#line 272
$memory_9 = $memory_4 . $memory_9;
#line 272
$memory_9 = c_rt_lib::ov_mk_arg('has_value', $memory_9);
#line 272
$memory_9 = c_rt_lib::ov_mk_arg('error', $memory_9);
#line 272
$memory_8 = [$memory_9];
#line 272
undef($memory_9);
#line 272
undef($memory_0);
#line 272
undef($memory_1);
#line 272
undef($memory_2);
#line 272
undef($memory_3);
#line 272
undef($memory_4);
#line 272
undef($memory_5);
#line 272
undef($memory_6);
#line 272
undef($memory_7);
#line 272
return $memory_8;
#line 272
undef($memory_8);
#line 272
goto label_409;
#line 272
label_409:
#line 272
undef($memory_7);
#line 273
goto label_412;
#line 273
label_412:
#line 273
undef($memory_6);
#line 273
undef($memory_4);
#line 273
undef($memory_5);
#line 273
undef($memory_3);
#line 274
goto label_449;
#line 274
label_418:
#line 275
goto label_449;
#line 275
label_420:
#line 275
$memory_3 = c_rt_lib::ov_as($memory_0, 'ref');
#line 276
$memory_6 = [];
#line 276
$memory_5 = ptd_priv::exec($memory_0, $memory_6);
#line 276
undef($memory_6);
#line 276
$memory_4 = ptd_priv::try_dynamic_cast($memory_5, $memory_1);
#line 276
undef($memory_5);
#line 277
$memory_5 = array::len($memory_4);
#line 277
$memory_6 = 0;
#line 277
$memory_5 = c_rt_lib::to_nl($memory_5 > $memory_6);
#line 277
undef($memory_6);
#line 277
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 277
if (c_rt_lib::check_true($memory_5)) {goto label_444;}
#line 278
$memory_6 = c_rt_lib::ov_mk_arg('type_ref', $memory_3);
#line 278
$memory_6 = c_rt_lib::ov_mk_arg('path', $memory_6);
#line 278
array::push($memory_4, $memory_6);
#line 278
undef($memory_6);
#line 279
undef($memory_0);
#line 279
undef($memory_1);
#line 279
undef($memory_2);
#line 279
undef($memory_3);
#line 279
undef($memory_5);
#line 279
return $memory_4;
#line 280
goto label_444;
#line 280
label_444:
#line 280
undef($memory_5);
#line 280
undef($memory_4);
#line 280
undef($memory_3);
#line 281
goto label_449;
#line 281
label_449:
#line 281
undef($memory_2);
#line 282
$memory_2 = [];
#line 282
undef($memory_0);
#line 282
undef($memory_1);
#line 282
return $memory_2;
#line 282
undef($memory_2);
#line 282
undef($memory_0);
#line 282
undef($memory_1);
#line 282
return;
}

sub ptd::reconstruct_nl_with_args($$$$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;$memory_0 = $_[0];$memory_1 = $_[1];$memory_2 = $_[2];$memory_3 = $_[3];$memory_4 = $_[4];
#line 286
$memory_5 = ptd::ptd_reconstruct_nl_with_args($memory_0, $memory_1, $memory_2, $memory_3, $memory_4);
#line 286
undef($memory_0);
#line 286
undef($memory_1);
#line 286
undef($memory_2);
#line 286
undef($memory_3);
#line 286
undef($memory_4);
#line 286
return $memory_5;
#line 286
undef($memory_5);
#line 286
undef($memory_0);
#line 286
undef($memory_1);
#line 286
undef($memory_2);
#line 286
undef($memory_3);
#line 286
undef($memory_4);
#line 286
return;
}

sub ptd::ptd_reconstruct_nl_with_args($$$$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;$memory_0 = $_[0];$memory_1 = $_[1];$memory_2 = $_[2];$memory_3 = $_[3];$memory_4 = $_[4];
#line 290
$memory_5 = [$memory_2];
#line 291
$memory_8 = ptd::ptd_im();
#line 291
$memory_7 = ptd::arr($memory_8);
#line 291
undef($memory_8);
#line 291
$memory_6 = ptd::ensure($memory_7, $memory_4);
#line 291
undef($memory_7);
#line 291
array::append($memory_5, $memory_6);
#line 291
undef($memory_6);
#line 292
$memory_6 = ptd_priv::reconstruct($memory_0, $memory_1, $memory_3, $memory_5);
#line 292
undef($memory_0);
#line 292
undef($memory_1);
#line 292
undef($memory_2);
#line 292
undef($memory_3);
#line 292
undef($memory_4);
#line 292
undef($memory_5);
#line 292
return $memory_6;
#line 292
undef($memory_6);
#line 292
undef($memory_5);
#line 292
undef($memory_0);
#line 292
undef($memory_1);
#line 292
undef($memory_2);
#line 292
undef($memory_3);
#line 292
undef($memory_4);
#line 292
return;
}

sub ptd_priv::reconstruct($$$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;my $memory_13;$memory_0 = $_[0];$memory_1 = $_[1];$memory_2 = $_[2];$memory_3 = $_[3];
#line 299
$memory_4 = c_rt_lib::ov_is($memory_1, 'ptd_hash');
#line 299
if (c_rt_lib::check_true($memory_4)) {goto label_17;}
#line 307
$memory_4 = c_rt_lib::ov_is($memory_1, 'ptd_rec');
#line 307
if (c_rt_lib::check_true($memory_4)) {goto label_72;}
#line 315
$memory_4 = c_rt_lib::ov_is($memory_1, 'ptd_arr');
#line 315
if (c_rt_lib::check_true($memory_4)) {goto label_127;}
#line 323
$memory_4 = c_rt_lib::ov_is($memory_1, 'ptd_var');
#line 323
if (c_rt_lib::check_true($memory_4)) {goto label_185;}
#line 332
$memory_4 = c_rt_lib::ov_is($memory_1, 'ptd_sim');
#line 332
if (c_rt_lib::check_true($memory_4)) {goto label_253;}
#line 334
$memory_4 = c_rt_lib::ov_is($memory_1, 'ptd_im');
#line 334
if (c_rt_lib::check_true($memory_4)) {goto label_263;}
#line 336
$memory_4 = c_rt_lib::ov_is($memory_1, 'ref');
#line 336
if (c_rt_lib::check_true($memory_4)) {goto label_273;}
#line 336
$memory_4 = "NOMATCHALERT";
#line 336
$memory_4 = [$memory_4,$memory_1];
#line 336
die(dfile::ssave($memory_4));
#line 299
label_17:
#line 299
$memory_5 = c_rt_lib::ov_as($memory_1, 'ptd_hash');
#line 300
$memory_6 = {};
#line 301
$memory_9 = c_rt_lib::init_iter($memory_0);
#line 301
label_21:
#line 301
$memory_7 = c_rt_lib::is_end_hash($memory_9);
#line 301
if (c_rt_lib::check_true($memory_7)) {goto label_55;}
#line 301
$memory_7 = c_rt_lib::get_key_iter($memory_9);
#line 301
$memory_8 = c_rt_lib::hash_get_value($memory_0, $memory_7);
#line 302
$memory_11 = hash::get_value($memory_5, $memory_7);
#line 302
$memory_10 = ptd_priv::reconstruct($memory_8, $memory_11, $memory_2, $memory_3);
#line 302
undef($memory_11);
#line 303
$memory_11 = $memory_10;
#line 303
$memory_11 = c_rt_lib::ov_is($memory_11, 'to_return');
#line 303
$memory_11 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_11));
#line 303
if (c_rt_lib::check_true($memory_11)) {goto label_46;}
#line 303
undef($memory_0);
#line 303
undef($memory_1);
#line 303
undef($memory_2);
#line 303
undef($memory_3);
#line 303
undef($memory_4);
#line 303
undef($memory_5);
#line 303
undef($memory_6);
#line 303
undef($memory_7);
#line 303
undef($memory_8);
#line 303
undef($memory_9);
#line 303
undef($memory_11);
#line 303
return $memory_10;
#line 303
goto label_46;
#line 303
label_46:
#line 303
undef($memory_11);
#line 304
$memory_11 = $memory_10;
#line 304
$memory_11 = c_rt_lib::ov_as($memory_11, 'new_value');
#line 304
hash::set_value($memory_6, $memory_7, $memory_11);
#line 304
undef($memory_11);
#line 304
undef($memory_10);
#line 305
$memory_9 = c_rt_lib::next_iter($memory_9);
#line 305
goto label_21;
#line 305
label_55:
#line 305
undef($memory_7);
#line 305
undef($memory_8);
#line 305
undef($memory_9);
#line 306
$memory_7 = c_rt_lib::ov_mk_arg('new_value', $memory_6);
#line 306
undef($memory_0);
#line 306
undef($memory_1);
#line 306
undef($memory_2);
#line 306
undef($memory_3);
#line 306
undef($memory_4);
#line 306
undef($memory_5);
#line 306
undef($memory_6);
#line 306
return $memory_7;
#line 306
undef($memory_7);
#line 306
undef($memory_6);
#line 306
undef($memory_5);
#line 307
goto label_345;
#line 307
label_72:
#line 307
$memory_5 = c_rt_lib::ov_as($memory_1, 'ptd_rec');
#line 308
$memory_6 = {};
#line 309
$memory_9 = c_rt_lib::init_iter($memory_0);
#line 309
label_76:
#line 309
$memory_7 = c_rt_lib::is_end_hash($memory_9);
#line 309
if (c_rt_lib::check_true($memory_7)) {goto label_110;}
#line 309
$memory_7 = c_rt_lib::get_key_iter($memory_9);
#line 309
$memory_8 = c_rt_lib::hash_get_value($memory_0, $memory_7);
#line 310
$memory_11 = hash::get_value($memory_5, $memory_7);
#line 310
$memory_10 = ptd_priv::reconstruct($memory_8, $memory_11, $memory_2, $memory_3);
#line 310
undef($memory_11);
#line 311
$memory_11 = $memory_10;
#line 311
$memory_11 = c_rt_lib::ov_is($memory_11, 'to_return');
#line 311
$memory_11 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_11));
#line 311
if (c_rt_lib::check_true($memory_11)) {goto label_101;}
#line 311
undef($memory_0);
#line 311
undef($memory_1);
#line 311
undef($memory_2);
#line 311
undef($memory_3);
#line 311
undef($memory_4);
#line 311
undef($memory_5);
#line 311
undef($memory_6);
#line 311
undef($memory_7);
#line 311
undef($memory_8);
#line 311
undef($memory_9);
#line 311
undef($memory_11);
#line 311
return $memory_10;
#line 311
goto label_101;
#line 311
label_101:
#line 311
undef($memory_11);
#line 312
$memory_11 = $memory_10;
#line 312
$memory_11 = c_rt_lib::ov_as($memory_11, 'new_value');
#line 312
hash::set_value($memory_6, $memory_7, $memory_11);
#line 312
undef($memory_11);
#line 312
undef($memory_10);
#line 313
$memory_9 = c_rt_lib::next_iter($memory_9);
#line 313
goto label_76;
#line 313
label_110:
#line 313
undef($memory_7);
#line 313
undef($memory_8);
#line 313
undef($memory_9);
#line 314
$memory_7 = c_rt_lib::ov_mk_arg('new_value', $memory_6);
#line 314
undef($memory_0);
#line 314
undef($memory_1);
#line 314
undef($memory_2);
#line 314
undef($memory_3);
#line 314
undef($memory_4);
#line 314
undef($memory_5);
#line 314
undef($memory_6);
#line 314
return $memory_7;
#line 314
undef($memory_7);
#line 314
undef($memory_6);
#line 314
undef($memory_5);
#line 315
goto label_345;
#line 315
label_127:
#line 315
$memory_5 = c_rt_lib::ov_as($memory_1, 'ptd_arr');
#line 316
$memory_6 = [];
#line 317
$memory_8 = 0;
#line 317
$memory_9 = 1;
#line 317
$memory_10 = c_rt_lib::array_len($memory_0);
#line 317
label_133:
#line 317
$memory_11 = c_rt_lib::to_nl($memory_8 >= $memory_10);
#line 317
if (c_rt_lib::check_true($memory_11)) {goto label_166;}
#line 317
$memory_7 = $memory_0->[$memory_8];
#line 318
$memory_12 = ptd_priv::reconstruct($memory_7, $memory_5, $memory_2, $memory_3);
#line 319
$memory_13 = $memory_12;
#line 319
$memory_13 = c_rt_lib::ov_is($memory_13, 'to_return');
#line 319
$memory_13 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_13));
#line 319
if (c_rt_lib::check_true($memory_13)) {goto label_157;}
#line 319
undef($memory_0);
#line 319
undef($memory_1);
#line 319
undef($memory_2);
#line 319
undef($memory_3);
#line 319
undef($memory_4);
#line 319
undef($memory_5);
#line 319
undef($memory_6);
#line 319
undef($memory_7);
#line 319
undef($memory_8);
#line 319
undef($memory_9);
#line 319
undef($memory_10);
#line 319
undef($memory_11);
#line 319
undef($memory_13);
#line 319
return $memory_12;
#line 319
goto label_157;
#line 319
label_157:
#line 319
undef($memory_13);
#line 320
$memory_13 = $memory_12;
#line 320
$memory_13 = c_rt_lib::ov_as($memory_13, 'new_value');
#line 320
array::push($memory_6, $memory_13);
#line 320
undef($memory_13);
#line 320
undef($memory_12);
#line 321
$memory_8 = $memory_8 + $memory_9;
#line 321
goto label_133;
#line 321
label_166:
#line 321
undef($memory_7);
#line 321
undef($memory_8);
#line 321
undef($memory_9);
#line 321
undef($memory_10);
#line 321
undef($memory_11);
#line 322
$memory_7 = c_rt_lib::ov_mk_arg('new_value', $memory_6);
#line 322
undef($memory_0);
#line 322
undef($memory_1);
#line 322
undef($memory_2);
#line 322
undef($memory_3);
#line 322
undef($memory_4);
#line 322
undef($memory_5);
#line 322
undef($memory_6);
#line 322
return $memory_7;
#line 322
undef($memory_7);
#line 322
undef($memory_6);
#line 322
undef($memory_5);
#line 323
goto label_345;
#line 323
label_185:
#line 323
$memory_5 = c_rt_lib::ov_as($memory_1, 'ptd_var');
#line 324
$memory_6 = ov::get_element($memory_0);
#line 325
$memory_7 = hash::get_value($memory_5, $memory_6);
#line 325
$memory_1 = $memory_7;
#line 325
undef($memory_7);
#line 326
$memory_7 = $memory_1;
#line 326
$memory_7 = c_rt_lib::ov_is($memory_7, 'no_param');
#line 326
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 326
if (c_rt_lib::check_true($memory_7)) {goto label_207;}
#line 326
$memory_8 = c_rt_lib::ov_mk_arg('new_value', $memory_0);
#line 326
undef($memory_0);
#line 326
undef($memory_1);
#line 326
undef($memory_2);
#line 326
undef($memory_3);
#line 326
undef($memory_4);
#line 326
undef($memory_5);
#line 326
undef($memory_6);
#line 326
undef($memory_7);
#line 326
return $memory_8;
#line 326
undef($memory_8);
#line 326
goto label_207;
#line 326
label_207:
#line 326
undef($memory_7);
#line 327
$memory_7 = ov::get_value($memory_0);
#line 327
$memory_0 = $memory_7;
#line 327
undef($memory_7);
#line 328
$memory_7 = $memory_1;
#line 328
$memory_7 = c_rt_lib::ov_as($memory_7, 'with_param');
#line 329
$memory_8 = ptd_priv::reconstruct($memory_0, $memory_7, $memory_2, $memory_3);
#line 330
$memory_9 = $memory_8;
#line 330
$memory_9 = c_rt_lib::ov_is($memory_9, 'to_return');
#line 330
$memory_9 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_9));
#line 330
if (c_rt_lib::check_true($memory_9)) {goto label_230;}
#line 330
undef($memory_0);
#line 330
undef($memory_1);
#line 330
undef($memory_2);
#line 330
undef($memory_3);
#line 330
undef($memory_4);
#line 330
undef($memory_5);
#line 330
undef($memory_6);
#line 330
undef($memory_7);
#line 330
undef($memory_9);
#line 330
return $memory_8;
#line 330
goto label_230;
#line 330
label_230:
#line 330
undef($memory_9);
#line 331
$memory_10 = $memory_8;
#line 331
$memory_10 = c_rt_lib::ov_as($memory_10, 'new_value');
#line 331
$memory_9 = ov::mk_val($memory_6, $memory_10);
#line 331
undef($memory_10);
#line 331
$memory_9 = c_rt_lib::ov_mk_arg('new_value', $memory_9);
#line 331
undef($memory_0);
#line 331
undef($memory_1);
#line 331
undef($memory_2);
#line 331
undef($memory_3);
#line 331
undef($memory_4);
#line 331
undef($memory_5);
#line 331
undef($memory_6);
#line 331
undef($memory_7);
#line 331
undef($memory_8);
#line 331
return $memory_9;
#line 331
undef($memory_9);
#line 331
undef($memory_6);
#line 331
undef($memory_7);
#line 331
undef($memory_8);
#line 331
undef($memory_5);
#line 332
goto label_345;
#line 332
label_253:
#line 333
$memory_5 = c_rt_lib::ov_mk_arg('new_value', $memory_0);
#line 333
undef($memory_0);
#line 333
undef($memory_1);
#line 333
undef($memory_2);
#line 333
undef($memory_3);
#line 333
undef($memory_4);
#line 333
return $memory_5;
#line 333
undef($memory_5);
#line 334
goto label_345;
#line 334
label_263:
#line 335
$memory_5 = c_rt_lib::ov_mk_arg('new_value', $memory_0);
#line 335
undef($memory_0);
#line 335
undef($memory_1);
#line 335
undef($memory_2);
#line 335
undef($memory_3);
#line 335
undef($memory_4);
#line 335
return $memory_5;
#line 335
undef($memory_5);
#line 336
goto label_345;
#line 336
label_273:
#line 336
$memory_5 = c_rt_lib::ov_as($memory_1, 'ref');
#line 337
$memory_6 = [$memory_0,$memory_1];
#line 338
array::append($memory_6, $memory_3);
#line 339
$memory_7 = ptd_priv::exec($memory_2, $memory_6);
#line 340
$memory_8 = c_rt_lib::ov_is($memory_7, 'new_value');
#line 340
if (c_rt_lib::check_true($memory_8)) {goto label_287;}
#line 342
$memory_8 = c_rt_lib::ov_is($memory_7, 'to_return');
#line 342
if (c_rt_lib::check_true($memory_8)) {goto label_304;}
#line 344
$memory_8 = c_rt_lib::ov_is($memory_7, 'none');
#line 344
if (c_rt_lib::check_true($memory_8)) {goto label_321;}
#line 344
$memory_8 = "NOMATCHALERT";
#line 344
$memory_8 = [$memory_8,$memory_7];
#line 344
die(dfile::ssave($memory_8));
#line 340
label_287:
#line 340
$memory_9 = c_rt_lib::ov_as($memory_7, 'new_value');
#line 341
$memory_10 = c_rt_lib::ov_mk_arg('new_value', $memory_9);
#line 341
undef($memory_0);
#line 341
undef($memory_1);
#line 341
undef($memory_2);
#line 341
undef($memory_3);
#line 341
undef($memory_4);
#line 341
undef($memory_5);
#line 341
undef($memory_6);
#line 341
undef($memory_7);
#line 341
undef($memory_8);
#line 341
undef($memory_9);
#line 341
return $memory_10;
#line 341
undef($memory_10);
#line 341
undef($memory_9);
#line 342
goto label_339;
#line 342
label_304:
#line 342
$memory_9 = c_rt_lib::ov_as($memory_7, 'to_return');
#line 343
$memory_10 = c_rt_lib::ov_mk_arg('to_return', $memory_9);
#line 343
undef($memory_0);
#line 343
undef($memory_1);
#line 343
undef($memory_2);
#line 343
undef($memory_3);
#line 343
undef($memory_4);
#line 343
undef($memory_5);
#line 343
undef($memory_6);
#line 343
undef($memory_7);
#line 343
undef($memory_8);
#line 343
undef($memory_9);
#line 343
return $memory_10;
#line 343
undef($memory_10);
#line 343
undef($memory_9);
#line 344
goto label_339;
#line 344
label_321:
#line 345
$memory_11 = [];
#line 345
$memory_10 = ptd_priv::exec($memory_1, $memory_11);
#line 345
undef($memory_11);
#line 345
$memory_9 = ptd_priv::reconstruct($memory_0, $memory_10, $memory_2, $memory_3);
#line 345
undef($memory_10);
#line 345
undef($memory_0);
#line 345
undef($memory_1);
#line 345
undef($memory_2);
#line 345
undef($memory_3);
#line 345
undef($memory_4);
#line 345
undef($memory_5);
#line 345
undef($memory_6);
#line 345
undef($memory_7);
#line 345
undef($memory_8);
#line 345
return $memory_9;
#line 345
undef($memory_9);
#line 346
goto label_339;
#line 346
label_339:
#line 346
undef($memory_8);
#line 346
undef($memory_6);
#line 346
undef($memory_7);
#line 346
undef($memory_5);
#line 347
goto label_345;
#line 347
label_345:
#line 347
undef($memory_4);
#line 347
undef($memory_0);
#line 347
undef($memory_1);
#line 347
undef($memory_2);
#line 347
undef($memory_3);
#line 347
return;
}
