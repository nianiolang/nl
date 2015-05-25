use c_rt_lib;
use ov;
use hash;
use ptd;
use tct;
use tc_types;
use boolean_t;
use string;
use array;
use ptd_parser;
sub ptd_system_priv::add_error;
sub ptd_system::is_known;
sub ptd_system::is_equal;
sub ptd_system::is_try_ensure_type;
sub ptd_system::get_try_ensure_ok_type;
sub ptd_system::is_condition_type;
sub ptd_system::is_accepted;
sub ptd_system::is_accepted_info;
sub ptd_system_priv::add_ref_name;
sub ptd_system_priv::is_cycle_ref;
sub ptd_system::cross_type;
sub ptd_system_priv::cross_type;
sub ptd_system::rec_to_hash;
sub ptd_system::cast_type;
sub ptd_system::check_assignment;
sub ptd_system_priv::mk_err;
sub ptd_system_priv::check_assignment_info;
sub ptd_system_priv::add_delete;
sub ptd_system_priv::add_create;
sub ptd_system::can_delete;
sub ptd_system::can_create;
sub ptd_system_priv::walk_on_type;
sub ptd_system_priv::get_all_ref_in_type;
sub ptd_system_priv::get_ref_in_type;
sub ptd_system_priv::get_function_def;
sub ptd_system::get_ref_type;

return 1;

sub ptd_system_priv::add_error($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];
#line 16
$memory_2 = "errors";
#line 16
$memory_2 = c_rt_lib::get_ref_hash($memory_0, $memory_2);
#line 16
$memory_4 = $memory_0->{'current_line'};
#line 16
$memory_5 = $memory_0->{'module'};
#line 16
$memory_3 = {msg => $memory_1,line => $memory_4,module => $memory_5,};
#line 16
undef($memory_4);
#line 16
undef($memory_5);
#line 16
array::push($memory_2, $memory_3);
#line 16
undef($memory_3);
#line 16
$memory_3 = "errors";
#line 16
c_rt_lib::set_ref_hash($memory_0, $memory_3, $memory_2);
#line 16
undef($memory_3);
#line 16
undef($memory_2);
#line 16
undef($memory_1);
#line 16
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub ptd_system::is_known($) {
my $memory_0;my $memory_1;my $memory_2;$memory_0 = $_[0];
#line 19
$memory_2 = "known";
#line 19
$memory_1 = ov::is($memory_0, $memory_2);
#line 19
undef($memory_2);
#line 19
if (c_rt_lib::check_true($memory_1)) {goto label_1;}
#line 19
$memory_2 = "knownhash";
#line 19
$memory_1 = ov::is($memory_0, $memory_2);
#line 19
undef($memory_2);
#line 19
label_1:
#line 19
undef($memory_0);
#line 19
return $memory_1;
#line 19
undef($memory_1);
#line 19
undef($memory_0);
#line 19
return;
}

sub ptd_system::is_equal($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;$memory_0 = $_[0];$memory_1 = $_[1];
#line 22
$memory_2 = ov::get_element($memory_0);
#line 22
$memory_3 = ov::get_element($memory_1);
#line 22
$memory_2 = c_rt_lib::to_nl($memory_2 eq $memory_3);
#line 22
undef($memory_3);
#line 22
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 22
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 22
if (c_rt_lib::check_true($memory_2)) {goto label_2;}
#line 22
$memory_3 = c_rt_lib::to_nl(0);
#line 22
undef($memory_0);
#line 22
undef($memory_1);
#line 22
undef($memory_2);
#line 22
return $memory_3;
#line 22
undef($memory_3);
#line 22
goto label_2;
#line 22
label_2:
#line 22
undef($memory_2);
#line 23
$memory_2 = c_rt_lib::ov_is($memory_0, 'tct_im');
#line 23
if (c_rt_lib::check_true($memory_2)) {goto label_4;}
#line 24
$memory_2 = c_rt_lib::ov_is($memory_0, 'tct_arr');
#line 24
if (c_rt_lib::check_true($memory_2)) {goto label_5;}
#line 26
$memory_2 = c_rt_lib::ov_is($memory_0, 'tct_hash');
#line 26
if (c_rt_lib::check_true($memory_2)) {goto label_6;}
#line 28
$memory_2 = c_rt_lib::ov_is($memory_0, 'tct_rec');
#line 28
if (c_rt_lib::check_true($memory_2)) {goto label_7;}
#line 34
$memory_2 = c_rt_lib::ov_is($memory_0, 'tct_ref');
#line 34
if (c_rt_lib::check_true($memory_2)) {goto label_8;}
#line 36
$memory_2 = c_rt_lib::ov_is($memory_0, 'tct_sim');
#line 36
if (c_rt_lib::check_true($memory_2)) {goto label_9;}
#line 37
$memory_2 = c_rt_lib::ov_is($memory_0, 'tct_var');
#line 37
if (c_rt_lib::check_true($memory_2)) {goto label_10;}
#line 49
$memory_2 = c_rt_lib::ov_is($memory_0, 'tct_empty');
#line 49
if (c_rt_lib::check_true($memory_2)) {goto label_11;}
#line 50
$memory_2 = c_rt_lib::ov_is($memory_0, 'tct_void');
#line 50
if (c_rt_lib::check_true($memory_2)) {goto label_12;}
#line 50
$memory_2 = "NOMATCHALERT";
#line 50
$memory_2 = [$memory_2,$memory_0];
#line 50
die(dfile::ssave($memory_2));
#line 23
label_4:
#line 24
goto label_3;
#line 24
label_5:
#line 24
$memory_3 = c_rt_lib::ov_as($memory_0, 'tct_arr');
#line 25
$memory_5 = $memory_1;
#line 25
$memory_5 = c_rt_lib::ov_as($memory_5, 'tct_arr');
#line 25
$memory_4 = ptd_system::is_equal($memory_3, $memory_5);
#line 25
undef($memory_5);
#line 25
undef($memory_0);
#line 25
undef($memory_1);
#line 25
undef($memory_2);
#line 25
undef($memory_3);
#line 25
return $memory_4;
#line 25
undef($memory_4);
#line 25
undef($memory_3);
#line 26
goto label_3;
#line 26
label_6:
#line 26
$memory_3 = c_rt_lib::ov_as($memory_0, 'tct_hash');
#line 27
$memory_5 = $memory_1;
#line 27
$memory_5 = c_rt_lib::ov_as($memory_5, 'tct_hash');
#line 27
$memory_4 = ptd_system::is_equal($memory_3, $memory_5);
#line 27
undef($memory_5);
#line 27
undef($memory_0);
#line 27
undef($memory_1);
#line 27
undef($memory_2);
#line 27
undef($memory_3);
#line 27
return $memory_4;
#line 27
undef($memory_4);
#line 27
undef($memory_3);
#line 28
goto label_3;
#line 28
label_7:
#line 28
$memory_3 = c_rt_lib::ov_as($memory_0, 'tct_rec');
#line 29
$memory_5 = $memory_1;
#line 29
$memory_5 = c_rt_lib::ov_as($memory_5, 'tct_rec');
#line 29
$memory_4 = hash::size($memory_5);
#line 29
undef($memory_5);
#line 29
$memory_5 = hash::size($memory_3);
#line 29
$memory_4 = c_rt_lib::to_nl($memory_4 != $memory_5);
#line 29
undef($memory_5);
#line 29
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 29
if (c_rt_lib::check_true($memory_4)) {goto label_14;}
#line 29
$memory_5 = c_rt_lib::to_nl(0);
#line 29
undef($memory_0);
#line 29
undef($memory_1);
#line 29
undef($memory_2);
#line 29
undef($memory_3);
#line 29
undef($memory_4);
#line 29
return $memory_5;
#line 29
undef($memory_5);
#line 29
goto label_14;
#line 29
label_14:
#line 29
undef($memory_4);
#line 30
$memory_6 = c_rt_lib::init_iter($memory_3);
#line 30
label_17:
#line 30
$memory_4 = c_rt_lib::is_end_hash($memory_6);
#line 30
if (c_rt_lib::check_true($memory_4)) {goto label_15;}
#line 30
$memory_4 = c_rt_lib::get_key_iter($memory_6);
#line 30
$memory_5 = c_rt_lib::hash_get_value($memory_3, $memory_4);
#line 31
$memory_8 = $memory_1;
#line 31
$memory_8 = c_rt_lib::ov_as($memory_8, 'tct_rec');
#line 31
$memory_7 = hash::has_key($memory_8, $memory_4);
#line 31
undef($memory_8);
#line 31
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 31
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 31
if (c_rt_lib::check_true($memory_7)) {goto label_19;}
#line 31
$memory_8 = c_rt_lib::to_nl(0);
#line 31
undef($memory_0);
#line 31
undef($memory_1);
#line 31
undef($memory_2);
#line 31
undef($memory_3);
#line 31
undef($memory_4);
#line 31
undef($memory_5);
#line 31
undef($memory_6);
#line 31
undef($memory_7);
#line 31
return $memory_8;
#line 31
undef($memory_8);
#line 31
goto label_19;
#line 31
label_19:
#line 31
undef($memory_7);
#line 32
$memory_9 = $memory_1;
#line 32
$memory_9 = c_rt_lib::ov_as($memory_9, 'tct_rec');
#line 32
$memory_8 = hash::get_value($memory_9, $memory_4);
#line 32
undef($memory_9);
#line 32
$memory_7 = ptd_system::is_equal($memory_5, $memory_8);
#line 32
undef($memory_8);
#line 32
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 32
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 32
if (c_rt_lib::check_true($memory_7)) {goto label_21;}
#line 32
$memory_8 = c_rt_lib::to_nl(0);
#line 32
undef($memory_0);
#line 32
undef($memory_1);
#line 32
undef($memory_2);
#line 32
undef($memory_3);
#line 32
undef($memory_4);
#line 32
undef($memory_5);
#line 32
undef($memory_6);
#line 32
undef($memory_7);
#line 32
return $memory_8;
#line 32
undef($memory_8);
#line 32
goto label_21;
#line 32
label_21:
#line 32
undef($memory_7);
#line 33
$memory_6 = c_rt_lib::next_iter($memory_6);
#line 33
goto label_17;
#line 33
label_15:
#line 33
undef($memory_4);
#line 33
undef($memory_5);
#line 33
undef($memory_6);
#line 33
undef($memory_3);
#line 34
goto label_3;
#line 34
label_8:
#line 34
$memory_3 = c_rt_lib::ov_as($memory_0, 'tct_ref');
#line 35
$memory_4 = $memory_1;
#line 35
$memory_4 = c_rt_lib::ov_as($memory_4, 'tct_ref');
#line 35
$memory_4 = c_rt_lib::to_nl($memory_3 eq $memory_4);
#line 35
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 35
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 35
if (c_rt_lib::check_true($memory_4)) {goto label_23;}
#line 35
$memory_5 = c_rt_lib::to_nl(0);
#line 35
undef($memory_0);
#line 35
undef($memory_1);
#line 35
undef($memory_2);
#line 35
undef($memory_3);
#line 35
undef($memory_4);
#line 35
return $memory_5;
#line 35
undef($memory_5);
#line 35
goto label_23;
#line 35
label_23:
#line 35
undef($memory_4);
#line 35
undef($memory_3);
#line 36
goto label_3;
#line 36
label_9:
#line 37
goto label_3;
#line 37
label_10:
#line 37
$memory_3 = c_rt_lib::ov_as($memory_0, 'tct_var');
#line 38
$memory_5 = $memory_1;
#line 38
$memory_5 = c_rt_lib::ov_as($memory_5, 'tct_var');
#line 38
$memory_4 = hash::size($memory_5);
#line 38
undef($memory_5);
#line 38
$memory_5 = hash::size($memory_3);
#line 38
$memory_4 = c_rt_lib::to_nl($memory_4 != $memory_5);
#line 38
undef($memory_5);
#line 38
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 38
if (c_rt_lib::check_true($memory_4)) {goto label_25;}
#line 38
$memory_5 = c_rt_lib::to_nl(0);
#line 38
undef($memory_0);
#line 38
undef($memory_1);
#line 38
undef($memory_2);
#line 38
undef($memory_3);
#line 38
undef($memory_4);
#line 38
return $memory_5;
#line 38
undef($memory_5);
#line 38
goto label_25;
#line 38
label_25:
#line 38
undef($memory_4);
#line 39
$memory_6 = c_rt_lib::init_iter($memory_3);
#line 39
label_28:
#line 39
$memory_4 = c_rt_lib::is_end_hash($memory_6);
#line 39
if (c_rt_lib::check_true($memory_4)) {goto label_26;}
#line 39
$memory_4 = c_rt_lib::get_key_iter($memory_6);
#line 39
$memory_5 = c_rt_lib::hash_get_value($memory_3, $memory_4);
#line 40
$memory_8 = $memory_1;
#line 40
$memory_8 = c_rt_lib::ov_as($memory_8, 'tct_var');
#line 40
$memory_7 = hash::has_key($memory_8, $memory_4);
#line 40
undef($memory_8);
#line 40
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 40
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 40
if (c_rt_lib::check_true($memory_7)) {goto label_30;}
#line 40
$memory_8 = c_rt_lib::to_nl(0);
#line 40
undef($memory_0);
#line 40
undef($memory_1);
#line 40
undef($memory_2);
#line 40
undef($memory_3);
#line 40
undef($memory_4);
#line 40
undef($memory_5);
#line 40
undef($memory_6);
#line 40
undef($memory_7);
#line 40
return $memory_8;
#line 40
undef($memory_8);
#line 40
goto label_30;
#line 40
label_30:
#line 40
undef($memory_7);
#line 41
$memory_8 = $memory_1;
#line 41
$memory_8 = c_rt_lib::ov_as($memory_8, 'tct_var');
#line 41
$memory_7 = hash::get_value($memory_8, $memory_4);
#line 41
undef($memory_8);
#line 42
$memory_10 = "no_param";
#line 42
$memory_8 = ov::is($memory_5, $memory_10);
#line 42
undef($memory_10);
#line 42
$memory_9 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 42
if (c_rt_lib::check_true($memory_9)) {goto label_33;}
#line 42
$memory_10 = "no_param";
#line 42
$memory_8 = ov::is($memory_7, $memory_10);
#line 42
undef($memory_10);
#line 42
label_33:
#line 42
undef($memory_9);
#line 42
$memory_8 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 42
if (c_rt_lib::check_true($memory_8)) {goto label_32;}
#line 42
undef($memory_7);
#line 42
undef($memory_8);
#line 42
goto label_27;
#line 42
goto label_32;
#line 42
label_32:
#line 42
undef($memory_8);
#line 43
$memory_10 = "with_param";
#line 43
$memory_8 = ov::is($memory_5, $memory_10);
#line 43
undef($memory_10);
#line 43
$memory_9 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 43
if (c_rt_lib::check_true($memory_9)) {goto label_36;}
#line 43
$memory_10 = "with_param";
#line 43
$memory_8 = ov::is($memory_7, $memory_10);
#line 43
undef($memory_10);
#line 43
label_36:
#line 43
undef($memory_9);
#line 43
$memory_8 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 43
$memory_8 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 43
if (c_rt_lib::check_true($memory_8)) {goto label_35;}
#line 43
$memory_9 = c_rt_lib::to_nl(0);
#line 43
undef($memory_0);
#line 43
undef($memory_1);
#line 43
undef($memory_2);
#line 43
undef($memory_3);
#line 43
undef($memory_4);
#line 43
undef($memory_5);
#line 43
undef($memory_6);
#line 43
undef($memory_7);
#line 43
undef($memory_8);
#line 43
return $memory_9;
#line 43
undef($memory_9);
#line 43
goto label_35;
#line 43
label_35:
#line 43
undef($memory_8);
#line 44
$memory_9 = $memory_7;
#line 44
$memory_9 = c_rt_lib::ov_as($memory_9, 'with_param');
#line 44
$memory_10 = $memory_5;
#line 44
$memory_10 = c_rt_lib::ov_as($memory_10, 'with_param');
#line 44
$memory_8 = ptd_system::is_equal($memory_9, $memory_10);
#line 44
undef($memory_10);
#line 44
undef($memory_9);
#line 44
$memory_8 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 44
$memory_8 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 44
if (c_rt_lib::check_true($memory_8)) {goto label_38;}
#line 44
$memory_9 = c_rt_lib::to_nl(0);
#line 44
undef($memory_0);
#line 44
undef($memory_1);
#line 44
undef($memory_2);
#line 44
undef($memory_3);
#line 44
undef($memory_4);
#line 44
undef($memory_5);
#line 44
undef($memory_6);
#line 44
undef($memory_7);
#line 44
undef($memory_8);
#line 44
return $memory_9;
#line 44
undef($memory_9);
#line 44
goto label_38;
#line 44
label_38:
#line 44
undef($memory_8);
#line 44
undef($memory_7);
#line 44
label_27:
#line 48
$memory_6 = c_rt_lib::next_iter($memory_6);
#line 48
goto label_28;
#line 48
label_26:
#line 48
undef($memory_4);
#line 48
undef($memory_5);
#line 48
undef($memory_6);
#line 48
undef($memory_3);
#line 49
goto label_3;
#line 49
label_11:
#line 50
goto label_3;
#line 50
label_12:
#line 51
goto label_3;
#line 51
label_3:
#line 51
undef($memory_2);
#line 52
$memory_2 = c_rt_lib::to_nl(1);
#line 52
undef($memory_0);
#line 52
undef($memory_1);
#line 52
return $memory_2;
#line 52
undef($memory_2);
#line 52
undef($memory_0);
#line 52
undef($memory_1);
#line 52
return;
}

sub ptd_system::is_try_ensure_type($$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;$memory_0 = $_[0];$memory_1 = $_[1];Scalar::Util::weaken($_[1]) if ref($_[1]);$memory_2 = $_[2];Scalar::Util::weaken($_[2]) if ref($_[2]);
#line 56
$memory_6 = tct::tct_im();
#line 56
$memory_7 = tct::tct_im();
#line 56
$memory_5 = {ok => $memory_6,err => $memory_7,};
#line 56
undef($memory_6);
#line 56
undef($memory_7);
#line 56
$memory_4 = tct::var($memory_5);
#line 56
undef($memory_5);
#line 56
$memory_3 = ptd_system::is_accepted($memory_0, $memory_4, $memory_1, $memory_2);
#line 56
undef($memory_4);
#line 56
undef($memory_0);
#line 56
$_[1] = $memory_1;$_[2] = $memory_2;return $memory_3;
#line 56
undef($memory_3);
#line 56
undef($memory_0);
#line 56
$_[1] = $memory_1;$_[2] = $memory_2;return;
$_[1] = $memory_1;$_[2] = $memory_2;}

sub ptd_system::get_try_ensure_ok_type($$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;$memory_0 = $_[0];$memory_1 = $_[1];Scalar::Util::weaken($_[1]) if ref($_[1]);$memory_2 = $_[2];Scalar::Util::weaken($_[2]) if ref($_[2]);
#line 60
$memory_3 = ptd_system::can_delete($memory_0, $memory_1, $memory_2);
#line 60
$memory_0 = $memory_3;
#line 60
undef($memory_3);
#line 61
$memory_3 = ptd_system::is_try_ensure_type($memory_0, $memory_1, $memory_2);
#line 61
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 61
if (c_rt_lib::check_true($memory_3)) {goto label_2;}
#line 62
$memory_5 = $memory_0->{'type'};
#line 62
$memory_6 = "tct_im";
#line 62
$memory_4 = ov::is($memory_5, $memory_6);
#line 62
undef($memory_6);
#line 62
undef($memory_5);
#line 62
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 62
if (c_rt_lib::check_true($memory_4)) {goto label_4;}
#line 62
$memory_5 = tct::tct_im();
#line 62
undef($memory_0);
#line 62
undef($memory_3);
#line 62
undef($memory_4);
#line 62
$_[1] = $memory_1;$_[2] = $memory_2;return $memory_5;
#line 62
undef($memory_5);
#line 62
goto label_4;
#line 62
label_4:
#line 62
undef($memory_4);
#line 63
$memory_5 = $memory_0->{'type'};
#line 63
$memory_5 = c_rt_lib::ov_as($memory_5, 'tct_var');
#line 63
$memory_6 = "ok";
#line 63
$memory_4 = hash::get_value($memory_5, $memory_6);
#line 63
undef($memory_6);
#line 63
undef($memory_5);
#line 64
$memory_6 = "no_param";
#line 64
$memory_5 = ov::is($memory_4, $memory_6);
#line 64
undef($memory_6);
#line 64
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 64
if (c_rt_lib::check_true($memory_5)) {goto label_6;}
#line 64
$memory_6 = tct::empty();
#line 64
undef($memory_0);
#line 64
undef($memory_3);
#line 64
undef($memory_4);
#line 64
undef($memory_5);
#line 64
$_[1] = $memory_1;$_[2] = $memory_2;return $memory_6;
#line 64
undef($memory_6);
#line 64
goto label_6;
#line 64
label_6:
#line 64
undef($memory_5);
#line 65
$memory_5 = $memory_4;
#line 65
$memory_5 = c_rt_lib::ov_as($memory_5, 'with_param');
#line 65
undef($memory_0);
#line 65
undef($memory_3);
#line 65
undef($memory_4);
#line 65
$_[1] = $memory_1;$_[2] = $memory_2;return $memory_5;
#line 65
undef($memory_5);
#line 65
undef($memory_4);
#line 66
goto label_1;
#line 66
label_2:
#line 67
$memory_4 = "in try|ensure expr; expr must be variant: ok|err";
#line 67
ptd_system_priv::add_error($memory_2, $memory_4);
#line 67
undef($memory_4);
#line 68
$memory_4 = tct::tct_im();
#line 68
undef($memory_0);
#line 68
undef($memory_3);
#line 68
$_[1] = $memory_1;$_[2] = $memory_2;return $memory_4;
#line 68
undef($memory_4);
#line 69
goto label_1;
#line 69
label_1:
#line 69
undef($memory_3);
#line 69
undef($memory_0);
#line 69
$_[1] = $memory_1;$_[2] = $memory_2;return;
$_[1] = $memory_1;$_[2] = $memory_2;}

sub ptd_system::is_condition_type($$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;$memory_0 = $_[0];$memory_1 = $_[1];Scalar::Util::weaken($_[1]) if ref($_[1]);$memory_2 = $_[2];Scalar::Util::weaken($_[2]) if ref($_[2]);
#line 74
$memory_4 = tct::bool();
#line 74
$memory_3 = ptd_system::is_accepted($memory_0, $memory_4, $memory_1, $memory_2);
#line 74
undef($memory_4);
#line 74
undef($memory_0);
#line 74
$_[1] = $memory_1;$_[2] = $memory_2;return $memory_3;
#line 74
undef($memory_3);
#line 74
undef($memory_0);
#line 74
$_[1] = $memory_1;$_[2] = $memory_2;return;
$_[1] = $memory_1;$_[2] = $memory_2;}

sub ptd_system::is_accepted($$$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;$memory_0 = $_[0];$memory_1 = $_[1];$memory_2 = $_[2];Scalar::Util::weaken($_[2]) if ref($_[2]);$memory_3 = $_[3];Scalar::Util::weaken($_[3]) if ref($_[3]);
#line 79
$memory_4 = ptd_system::is_accepted_info($memory_0, $memory_1, $memory_2, $memory_3);
#line 80
$memory_6 = "ok";
#line 80
$memory_5 = ov::is($memory_4, $memory_6);
#line 80
undef($memory_6);
#line 80
undef($memory_0);
#line 80
undef($memory_1);
#line 80
undef($memory_4);
#line 80
$_[2] = $memory_2;$_[3] = $memory_3;return $memory_5;
#line 80
undef($memory_5);
#line 80
undef($memory_4);
#line 80
undef($memory_0);
#line 80
undef($memory_1);
#line 80
$_[2] = $memory_2;$_[3] = $memory_3;return;
$_[2] = $memory_2;$_[3] = $memory_3;}

sub ptd_system::is_accepted_info($$$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;$memory_0 = $_[0];$memory_1 = $_[1];$memory_2 = $_[2];Scalar::Util::weaken($_[2]) if ref($_[2]);$memory_3 = $_[3];Scalar::Util::weaken($_[3]) if ref($_[3]);
#line 84
$memory_4 = ptd_system::can_delete($memory_0, $memory_2, $memory_3);
#line 84
$memory_0 = $memory_4;
#line 84
undef($memory_4);
#line 85
$memory_5 = $memory_0->{'type'};
#line 85
$memory_6 = "tct_im";
#line 85
$memory_4 = ov::is($memory_5, $memory_6);
#line 85
undef($memory_6);
#line 85
undef($memory_5);
#line 85
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 85
if (c_rt_lib::check_true($memory_4)) {goto label_2;}
#line 85
$memory_5 = c_rt_lib::ov_mk_none('ok');
#line 85
undef($memory_0);
#line 85
undef($memory_1);
#line 85
undef($memory_4);
#line 85
$_[2] = $memory_2;$_[3] = $memory_3;return $memory_5;
#line 85
undef($memory_5);
#line 85
goto label_2;
#line 85
label_2:
#line 85
undef($memory_4);
#line 86
$memory_5 = "tct_rec";
#line 86
$memory_4 = ov::is($memory_1, $memory_5);
#line 86
undef($memory_5);
#line 86
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 86
if (c_rt_lib::check_true($memory_4)) {goto label_4;}
#line 87
$memory_8 = "tct_rec";
#line 87
$memory_7 = ov::as($memory_1, $memory_8);
#line 87
undef($memory_8);
#line 87
$memory_5 = hash::size($memory_7);
#line 87
undef($memory_7);
#line 87
$memory_7 = 0;
#line 87
$memory_5 = c_rt_lib::to_nl($memory_5 == $memory_7);
#line 87
undef($memory_7);
#line 87
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 87
if (c_rt_lib::check_true($memory_6)) {goto label_7;}
#line 87
$memory_7 = $memory_0->{'type'};
#line 87
$memory_8 = "tct_rec";
#line 87
$memory_5 = ov::is($memory_7, $memory_8);
#line 87
undef($memory_8);
#line 87
undef($memory_7);
#line 87
label_7:
#line 87
undef($memory_6);
#line 87
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 87
if (c_rt_lib::check_true($memory_5)) {goto label_6;}
#line 87
$memory_6 = c_rt_lib::ov_mk_none('ok');
#line 87
undef($memory_0);
#line 87
undef($memory_1);
#line 87
undef($memory_4);
#line 87
undef($memory_5);
#line 87
$_[2] = $memory_2;$_[3] = $memory_3;return $memory_6;
#line 87
undef($memory_6);
#line 87
goto label_6;
#line 87
label_6:
#line 87
undef($memory_5);
#line 88
goto label_8;
#line 88
label_4:
#line 88
$memory_5 = "tct_var";
#line 88
$memory_4 = ov::is($memory_1, $memory_5);
#line 88
undef($memory_5);
#line 88
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 88
if (c_rt_lib::check_true($memory_4)) {goto label_8;}
#line 89
$memory_8 = "tct_var";
#line 89
$memory_7 = ov::as($memory_1, $memory_8);
#line 89
undef($memory_8);
#line 89
$memory_5 = hash::size($memory_7);
#line 89
undef($memory_7);
#line 89
$memory_7 = 0;
#line 89
$memory_5 = c_rt_lib::to_nl($memory_5 == $memory_7);
#line 89
undef($memory_7);
#line 89
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 89
if (c_rt_lib::check_true($memory_6)) {goto label_11;}
#line 89
$memory_7 = $memory_0->{'type'};
#line 89
$memory_8 = "tct_var";
#line 89
$memory_5 = ov::is($memory_7, $memory_8);
#line 89
undef($memory_8);
#line 89
undef($memory_7);
#line 89
label_11:
#line 89
undef($memory_6);
#line 89
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 89
if (c_rt_lib::check_true($memory_5)) {goto label_10;}
#line 89
$memory_6 = c_rt_lib::ov_mk_none('ok');
#line 89
undef($memory_0);
#line 89
undef($memory_1);
#line 89
undef($memory_4);
#line 89
undef($memory_5);
#line 89
$_[2] = $memory_2;$_[3] = $memory_3;return $memory_6;
#line 89
undef($memory_6);
#line 89
goto label_10;
#line 89
label_10:
#line 89
undef($memory_5);
#line 90
goto label_8;
#line 90
label_8:
#line 90
undef($memory_4);
#line 91
$memory_5 = 1;
#line 91
$memory_6 = {};
#line 91
$memory_7 = {};
#line 91
$memory_8 = c_rt_lib::to_nl(0);
#line 91
$memory_9 = c_rt_lib::to_nl(0);
#line 91
$memory_4 = {level => $memory_5,from => $memory_6,to => $memory_7,check => $memory_8,cast => $memory_9,};
#line 91
undef($memory_5);
#line 91
undef($memory_6);
#line 91
undef($memory_7);
#line 91
undef($memory_8);
#line 91
undef($memory_9);
#line 92
$memory_6 = $memory_0->{'type'};
#line 92
$memory_7 = $memory_0->{'src'};
#line 92
$memory_5 = ptd_system_priv::check_assignment_info($memory_1, $memory_6, $memory_4, $memory_7, $memory_2, $memory_3);
#line 92
undef($memory_7);
#line 92
undef($memory_6);
#line 92
undef($memory_0);
#line 92
undef($memory_1);
#line 92
undef($memory_4);
#line 92
$_[2] = $memory_2;$_[3] = $memory_3;return $memory_5;
#line 92
undef($memory_5);
#line 92
undef($memory_4);
#line 92
undef($memory_0);
#line 92
undef($memory_1);
#line 92
$_[2] = $memory_2;$_[3] = $memory_3;return;
$_[2] = $memory_2;$_[3] = $memory_3;}

sub ptd_system_priv::add_ref_name($$$$$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];Scalar::Util::weaken($_[1]) if ref($_[1]);$memory_2 = $_[2];Scalar::Util::weaken($_[2]) if ref($_[2]);$memory_3 = $_[3];$memory_4 = $_[4];Scalar::Util::weaken($_[4]) if ref($_[4]);$memory_5 = $_[5];Scalar::Util::weaken($_[5]) if ref($_[5]);
#line 98
$memory_6 = $memory_0;
#line 98
$memory_6 = c_rt_lib::ov_as($memory_6, 'tct_ref');
#line 99
$memory_7 = hash::has_key($memory_1, $memory_6);
#line 99
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 99
if (c_rt_lib::check_true($memory_7)) {goto label_2;}
#line 99
$memory_8 = hash::get_value($memory_1, $memory_6);
#line 99
$memory_2 = $memory_8;
#line 99
undef($memory_8);
#line 99
goto label_2;
#line 99
label_2:
#line 99
undef($memory_7);
#line 100
array::push($memory_2, $memory_3);
#line 101
hash::set_value($memory_1, $memory_6, $memory_2);
#line 102
$memory_7 = ptd_system::get_ref_type($memory_6, $memory_4, $memory_5);
#line 102
$memory_0 = $memory_7;
#line 102
undef($memory_7);
#line 103
undef($memory_3);
#line 103
$_[0] = $memory_0;$_[1] = $memory_1;$_[2] = $memory_2;$_[4] = $memory_4;$_[5] = $memory_5;return $memory_6;
#line 103
undef($memory_6);
#line 103
undef($memory_3);
#line 103
$_[0] = $memory_0;$_[1] = $memory_1;$_[2] = $memory_2;$_[4] = $memory_4;$_[5] = $memory_5;return;
$_[0] = $memory_0;$_[1] = $memory_1;$_[2] = $memory_2;$_[4] = $memory_4;$_[5] = $memory_5;}

sub ptd_system_priv::is_cycle_ref($$$$$$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;my $memory_13;my $memory_14;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];Scalar::Util::weaken($_[1]) if ref($_[1]);$memory_2 = $_[2];Scalar::Util::weaken($_[2]) if ref($_[2]);$memory_3 = $_[3];$memory_4 = $_[4];$memory_5 = $_[5];Scalar::Util::weaken($_[5]) if ref($_[5]);$memory_6 = $_[6];Scalar::Util::weaken($_[6]) if ref($_[6]);
#line 108
$memory_9 = "tct_ref";
#line 108
$memory_7 = ov::is($memory_0, $memory_9);
#line 108
undef($memory_9);
#line 108
$memory_8 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 108
if (c_rt_lib::check_true($memory_8)) {goto label_3;}
#line 108
$memory_9 = "tct_ref";
#line 108
$memory_7 = ov::is($memory_1, $memory_9);
#line 108
undef($memory_9);
#line 108
label_3:
#line 108
undef($memory_8);
#line 108
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 108
if (c_rt_lib::check_true($memory_7)) {goto label_2;}
#line 109
$memory_9 = "tct_ref";
#line 109
$memory_8 = ov::as($memory_0, $memory_9);
#line 109
undef($memory_9);
#line 109
$memory_10 = "tct_ref";
#line 109
$memory_9 = ov::as($memory_1, $memory_10);
#line 109
undef($memory_10);
#line 109
$memory_8 = c_rt_lib::to_nl($memory_8 eq $memory_9);
#line 109
undef($memory_9);
#line 109
$memory_8 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 109
if (c_rt_lib::check_true($memory_8)) {goto label_5;}
#line 109
$memory_9 = c_rt_lib::to_nl(1);
#line 109
undef($memory_3);
#line 109
undef($memory_4);
#line 109
undef($memory_7);
#line 109
undef($memory_8);
#line 109
$_[0] = $memory_0;$_[1] = $memory_1;$_[2] = $memory_2;$_[5] = $memory_5;$_[6] = $memory_6;return $memory_9;
#line 109
undef($memory_9);
#line 109
goto label_5;
#line 109
label_5:
#line 109
undef($memory_8);
#line 110
$memory_8 = $memory_3;
#line 110
$memory_9 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 110
if (c_rt_lib::check_true($memory_9)) {goto label_8;}
#line 110
$memory_11 = c_rt_lib::ov_mk_none('speculation');
#line 110
$memory_10 = ptd_system_priv::check_assignment_info($memory_0, $memory_1, $memory_2, $memory_11, $memory_5, $memory_6);
#line 110
undef($memory_11);
#line 110
$memory_11 = "ok";
#line 110
$memory_8 = ov::is($memory_10, $memory_11);
#line 110
undef($memory_11);
#line 110
undef($memory_10);
#line 110
label_8:
#line 110
undef($memory_9);
#line 110
$memory_8 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 110
if (c_rt_lib::check_true($memory_8)) {goto label_7;}
#line 110
$memory_9 = c_rt_lib::to_nl(1);
#line 110
undef($memory_3);
#line 110
undef($memory_4);
#line 110
undef($memory_7);
#line 110
undef($memory_8);
#line 110
$_[0] = $memory_0;$_[1] = $memory_1;$_[2] = $memory_2;$_[5] = $memory_5;$_[6] = $memory_6;return $memory_9;
#line 110
undef($memory_9);
#line 110
goto label_7;
#line 110
label_7:
#line 110
undef($memory_8);
#line 111
goto label_2;
#line 111
label_2:
#line 111
undef($memory_7);
#line 113
$memory_7 = [];
#line 114
$memory_8 = [];
#line 115
label_10:
#line 115
$memory_10 = "tct_ref";
#line 115
$memory_9 = ov::is($memory_1, $memory_10);
#line 115
undef($memory_10);
#line 115
$memory_9 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_9));
#line 115
if (c_rt_lib::check_true($memory_9)) {goto label_9;}
#line 116
$memory_11 = "from";
#line 116
$memory_11 = c_rt_lib::get_ref_hash($memory_2, $memory_11);
#line 116
$memory_12 = $memory_2->{'level'};
#line 116
$memory_10 = ptd_system_priv::add_ref_name($memory_1, $memory_11, $memory_8, $memory_12, $memory_5, $memory_6);
#line 116
undef($memory_12);
#line 116
$memory_12 = "from";
#line 116
c_rt_lib::set_ref_hash($memory_2, $memory_12, $memory_11);
#line 116
undef($memory_12);
#line 116
undef($memory_11);
#line 117
$memory_11 = $memory_2->{'check'};
#line 117
$memory_13 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_11));
#line 117
if (c_rt_lib::check_true($memory_13)) {goto label_14;}
#line 117
$memory_11 = array::len($memory_8);
#line 117
$memory_14 = 1;
#line 117
$memory_11 = c_rt_lib::to_nl($memory_11 == $memory_14);
#line 117
undef($memory_14);
#line 117
label_14:
#line 117
undef($memory_13);
#line 117
$memory_12 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_11));
#line 117
if (c_rt_lib::check_true($memory_12)) {goto label_13;}
#line 117
$memory_11 = $memory_4;
#line 117
label_13:
#line 117
undef($memory_12);
#line 117
$memory_11 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_11));
#line 117
if (c_rt_lib::check_true($memory_11)) {goto label_12;}
#line 117
ptd_system_priv::add_delete($memory_10, $memory_5, $memory_6);
#line 117
goto label_12;
#line 117
label_12:
#line 117
undef($memory_11);
#line 117
undef($memory_10);
#line 118
goto label_10;
#line 118
label_9:
#line 118
undef($memory_9);
#line 119
$memory_9 = $memory_2->{'cast'};
#line 119
$memory_9 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_9));
#line 119
if (c_rt_lib::check_true($memory_9)) {goto label_16;}
#line 120
$memory_11 = "tct_im";
#line 120
$memory_10 = ov::is($memory_1, $memory_11);
#line 120
undef($memory_11);
#line 120
$memory_10 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_10));
#line 120
if (c_rt_lib::check_true($memory_10)) {goto label_18;}
#line 121
$memory_11 = $memory_2->{'check'};
#line 121
$memory_11 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_11));
#line 121
if (c_rt_lib::check_true($memory_11)) {goto label_20;}
#line 121
$memory_12 = c_rt_lib::ov_mk_none('create');
#line 121
$memory_13 = $memory_2->{'to'};
#line 121
ptd_system_priv::walk_on_type($memory_0, $memory_12, $memory_13, $memory_5, $memory_6);
#line 121
undef($memory_13);
#line 121
undef($memory_12);
#line 121
goto label_20;
#line 121
label_20:
#line 121
undef($memory_11);
#line 122
$memory_11 = c_rt_lib::to_nl(1);
#line 122
undef($memory_3);
#line 122
undef($memory_4);
#line 122
undef($memory_7);
#line 122
undef($memory_8);
#line 122
undef($memory_9);
#line 122
undef($memory_10);
#line 122
$_[0] = $memory_0;$_[1] = $memory_1;$_[2] = $memory_2;$_[5] = $memory_5;$_[6] = $memory_6;return $memory_11;
#line 122
undef($memory_11);
#line 123
goto label_18;
#line 123
label_18:
#line 123
undef($memory_10);
#line 124
goto label_16;
#line 124
label_16:
#line 124
undef($memory_9);
#line 125
label_22:
#line 125
$memory_10 = "tct_ref";
#line 125
$memory_9 = ov::is($memory_0, $memory_10);
#line 125
undef($memory_10);
#line 125
$memory_9 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_9));
#line 125
if (c_rt_lib::check_true($memory_9)) {goto label_21;}
#line 126
$memory_11 = "to";
#line 126
$memory_11 = c_rt_lib::get_ref_hash($memory_2, $memory_11);
#line 126
$memory_12 = $memory_2->{'level'};
#line 126
$memory_10 = ptd_system_priv::add_ref_name($memory_0, $memory_11, $memory_7, $memory_12, $memory_5, $memory_6);
#line 126
undef($memory_12);
#line 126
$memory_12 = "to";
#line 126
c_rt_lib::set_ref_hash($memory_2, $memory_12, $memory_11);
#line 126
undef($memory_12);
#line 126
undef($memory_11);
#line 127
$memory_11 = $memory_2->{'check'};
#line 127
$memory_12 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_11));
#line 127
if (c_rt_lib::check_true($memory_12)) {goto label_25;}
#line 127
$memory_11 = array::len($memory_7);
#line 127
$memory_13 = 1;
#line 127
$memory_11 = c_rt_lib::to_nl($memory_11 == $memory_13);
#line 127
undef($memory_13);
#line 127
label_25:
#line 127
undef($memory_12);
#line 127
$memory_11 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_11));
#line 127
if (c_rt_lib::check_true($memory_11)) {goto label_24;}
#line 127
ptd_system_priv::add_create($memory_10, $memory_5, $memory_6);
#line 127
goto label_24;
#line 127
label_24:
#line 127
undef($memory_11);
#line 127
undef($memory_10);
#line 128
goto label_22;
#line 128
label_21:
#line 128
undef($memory_9);
#line 130
$memory_9 = 0;
#line 131
$memory_10 = 0;
#line 131
label_27:
#line 131
$memory_11 = array::len($memory_7);
#line 131
$memory_13 = 1;
#line 131
$memory_11 = $memory_11 - $memory_13;
#line 131
undef($memory_13);
#line 131
$memory_11 = c_rt_lib::to_nl($memory_10 < $memory_11);
#line 131
$memory_12 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_11));
#line 131
if (c_rt_lib::check_true($memory_12)) {goto label_29;}
#line 131
$memory_11 = array::len($memory_8);
#line 131
$memory_13 = 0;
#line 131
$memory_11 = c_rt_lib::to_nl($memory_11 > $memory_13);
#line 131
undef($memory_13);
#line 131
label_29:
#line 131
undef($memory_12);
#line 131
$memory_11 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_11));
#line 131
if (c_rt_lib::check_true($memory_11)) {goto label_26;}
#line 132
label_31:
#line 132
$memory_12 = $memory_8->[$memory_9];
#line 132
$memory_13 = $memory_7->[$memory_10];
#line 132
$memory_12 = c_rt_lib::to_nl($memory_12 < $memory_13);
#line 132
undef($memory_13);
#line 132
$memory_12 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_12));
#line 132
if (c_rt_lib::check_true($memory_12)) {goto label_30;}
#line 133
$memory_13 = 1;
#line 133
$memory_9 = $memory_9 + $memory_13;
#line 133
undef($memory_13);
#line 134
goto label_31;
#line 134
label_30:
#line 134
undef($memory_12);
#line 136
$memory_12 = $memory_8->[$memory_9];
#line 136
$memory_13 = $memory_7->[$memory_10];
#line 136
$memory_12 = c_rt_lib::to_nl($memory_12 == $memory_13);
#line 136
undef($memory_13);
#line 136
$memory_12 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_12));
#line 136
if (c_rt_lib::check_true($memory_12)) {goto label_33;}
#line 136
$memory_13 = c_rt_lib::to_nl(1);
#line 136
undef($memory_3);
#line 136
undef($memory_4);
#line 136
undef($memory_7);
#line 136
undef($memory_8);
#line 136
undef($memory_9);
#line 136
undef($memory_10);
#line 136
undef($memory_11);
#line 136
undef($memory_12);
#line 136
$_[0] = $memory_0;$_[1] = $memory_1;$_[2] = $memory_2;$_[5] = $memory_5;$_[6] = $memory_6;return $memory_13;
#line 136
undef($memory_13);
#line 136
goto label_33;
#line 136
label_33:
#line 136
undef($memory_12);
#line 136
$memory_12 = 1;
#line 136
$memory_10 = $memory_10 + $memory_12;
#line 136
undef($memory_12);
#line 137
goto label_27;
#line 137
label_26:
#line 137
undef($memory_10);
#line 137
undef($memory_11);
#line 138
$memory_10 = 1;
#line 138
$memory_11 = "level";
#line 138
$memory_11 = c_rt_lib::get_ref_hash($memory_2, $memory_11);
#line 138
$memory_11 = $memory_11 + $memory_10;
#line 138
$memory_12 = "level";
#line 138
c_rt_lib::set_ref_hash($memory_2, $memory_12, $memory_11);
#line 138
undef($memory_12);
#line 138
undef($memory_10);
#line 138
undef($memory_11);
#line 139
$memory_10 = c_rt_lib::to_nl(0);
#line 139
undef($memory_3);
#line 139
undef($memory_4);
#line 139
undef($memory_7);
#line 139
undef($memory_8);
#line 139
undef($memory_9);
#line 139
$_[0] = $memory_0;$_[1] = $memory_1;$_[2] = $memory_2;$_[5] = $memory_5;$_[6] = $memory_6;return $memory_10;
#line 139
undef($memory_10);
#line 139
undef($memory_7);
#line 139
undef($memory_8);
#line 139
undef($memory_9);
#line 139
undef($memory_3);
#line 139
undef($memory_4);
#line 139
$_[0] = $memory_0;$_[1] = $memory_1;$_[2] = $memory_2;$_[5] = $memory_5;$_[6] = $memory_6;return;
$_[0] = $memory_0;$_[1] = $memory_1;$_[2] = $memory_2;$_[5] = $memory_5;$_[6] = $memory_6;}

sub ptd_system::cross_type($$$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;$memory_0 = $_[0];$memory_1 = $_[1];$memory_2 = $_[2];Scalar::Util::weaken($_[2]) if ref($_[2]);$memory_3 = $_[3];Scalar::Util::weaken($_[3]) if ref($_[3]);
#line 144
$memory_5 = 1;
#line 144
$memory_6 = {};
#line 144
$memory_7 = {};
#line 144
$memory_8 = c_rt_lib::to_nl(0);
#line 144
$memory_9 = c_rt_lib::to_nl(0);
#line 144
$memory_4 = {level => $memory_5,from => $memory_6,to => $memory_7,check => $memory_8,cast => $memory_9,};
#line 144
undef($memory_5);
#line 144
undef($memory_6);
#line 144
undef($memory_7);
#line 144
undef($memory_8);
#line 144
undef($memory_9);
#line 145
$memory_5 = ptd_system_priv::cross_type($memory_0, $memory_1, $memory_4, $memory_2, $memory_3);
#line 145
undef($memory_0);
#line 145
undef($memory_1);
#line 145
undef($memory_4);
#line 145
$_[2] = $memory_2;$_[3] = $memory_3;return $memory_5;
#line 145
undef($memory_5);
#line 145
undef($memory_4);
#line 145
undef($memory_0);
#line 145
undef($memory_1);
#line 145
$_[2] = $memory_2;$_[3] = $memory_3;return;
$_[2] = $memory_2;$_[3] = $memory_3;}

sub ptd_system_priv::cross_type($$$$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;my $memory_13;my $memory_14;my $memory_15;my $memory_16;my $memory_17;my $memory_18;my $memory_19;$memory_0 = $_[0];$memory_1 = $_[1];$memory_2 = $_[2];$memory_3 = $_[3];Scalar::Util::weaken($_[3]) if ref($_[3]);$memory_4 = $_[4];Scalar::Util::weaken($_[4]) if ref($_[4]);
#line 149
$memory_6 = "tct_im";
#line 149
$memory_5 = ov::is($memory_1, $memory_6);
#line 149
undef($memory_6);
#line 149
if (c_rt_lib::check_true($memory_5)) {goto label_3;}
#line 149
$memory_6 = "tct_im";
#line 149
$memory_5 = ov::is($memory_0, $memory_6);
#line 149
undef($memory_6);
#line 149
label_3:
#line 149
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 149
if (c_rt_lib::check_true($memory_5)) {goto label_2;}
#line 149
$memory_6 = c_rt_lib::ov_mk_none('tct_im');
#line 149
undef($memory_0);
#line 149
undef($memory_1);
#line 149
undef($memory_2);
#line 149
undef($memory_5);
#line 149
$_[3] = $memory_3;$_[4] = $memory_4;return $memory_6;
#line 149
undef($memory_6);
#line 149
goto label_2;
#line 149
label_2:
#line 149
undef($memory_5);
#line 150
$memory_6 = c_rt_lib::to_nl(1);
#line 150
$memory_7 = c_rt_lib::to_nl(0);
#line 150
$memory_5 = ptd_system_priv::is_cycle_ref($memory_0, $memory_1, $memory_2, $memory_6, $memory_7, $memory_3, $memory_4);
#line 150
undef($memory_7);
#line 150
undef($memory_6);
#line 150
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 150
if (c_rt_lib::check_true($memory_5)) {goto label_5;}
#line 151
undef($memory_1);
#line 151
undef($memory_2);
#line 151
undef($memory_5);
#line 151
$_[3] = $memory_3;$_[4] = $memory_4;return $memory_0;
#line 152
goto label_5;
#line 152
label_5:
#line 152
undef($memory_5);
#line 153
$memory_5 = $memory_2->{'level'};
#line 153
$memory_6 = 200;
#line 153
$memory_5 = c_rt_lib::to_nl($memory_5 == $memory_6);
#line 153
undef($memory_6);
#line 153
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 153
if (c_rt_lib::check_true($memory_5)) {goto label_7;}
#line 154
$memory_6 = "can't assignment two that diffrent type to one var";
#line 154
ptd_system_priv::add_error($memory_4, $memory_6);
#line 154
undef($memory_6);
#line 155
$memory_6 = c_rt_lib::ov_mk_none('tct_im');
#line 155
undef($memory_0);
#line 155
undef($memory_1);
#line 155
undef($memory_2);
#line 155
undef($memory_5);
#line 155
$_[3] = $memory_3;$_[4] = $memory_4;return $memory_6;
#line 155
undef($memory_6);
#line 156
goto label_7;
#line 156
label_7:
#line 156
undef($memory_5);
#line 157
$memory_6 = "tct_empty";
#line 157
$memory_5 = ov::is($memory_1, $memory_6);
#line 157
undef($memory_6);
#line 157
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 157
if (c_rt_lib::check_true($memory_5)) {goto label_9;}
#line 157
undef($memory_1);
#line 157
undef($memory_2);
#line 157
undef($memory_5);
#line 157
$_[3] = $memory_3;$_[4] = $memory_4;return $memory_0;
#line 157
goto label_9;
#line 157
label_9:
#line 157
undef($memory_5);
#line 158
$memory_5 = c_rt_lib::ov_is($memory_0, 'tct_empty');
#line 158
if (c_rt_lib::check_true($memory_5)) {goto label_11;}
#line 160
$memory_5 = c_rt_lib::ov_is($memory_0, 'tct_im');
#line 160
if (c_rt_lib::check_true($memory_5)) {goto label_12;}
#line 162
$memory_5 = c_rt_lib::ov_is($memory_0, 'tct_sim');
#line 162
if (c_rt_lib::check_true($memory_5)) {goto label_13;}
#line 164
$memory_5 = c_rt_lib::ov_is($memory_0, 'tct_ref');
#line 164
if (c_rt_lib::check_true($memory_5)) {goto label_14;}
#line 166
$memory_5 = c_rt_lib::ov_is($memory_0, 'tct_void');
#line 166
if (c_rt_lib::check_true($memory_5)) {goto label_15;}
#line 168
$memory_5 = c_rt_lib::ov_is($memory_0, 'tct_arr');
#line 168
if (c_rt_lib::check_true($memory_5)) {goto label_16;}
#line 173
$memory_5 = c_rt_lib::ov_is($memory_0, 'tct_var');
#line 173
if (c_rt_lib::check_true($memory_5)) {goto label_17;}
#line 213
$memory_5 = c_rt_lib::ov_is($memory_0, 'tct_rec');
#line 213
if (c_rt_lib::check_true($memory_5)) {goto label_18;}
#line 239
$memory_5 = c_rt_lib::ov_is($memory_0, 'tct_hash');
#line 239
if (c_rt_lib::check_true($memory_5)) {goto label_19;}
#line 239
$memory_5 = "NOMATCHALERT";
#line 239
$memory_5 = [$memory_5,$memory_0];
#line 239
die(dfile::ssave($memory_5));
#line 158
label_11:
#line 159
undef($memory_0);
#line 159
undef($memory_2);
#line 159
undef($memory_5);
#line 159
$_[3] = $memory_3;$_[4] = $memory_4;return $memory_1;
#line 160
goto label_10;
#line 160
label_12:
#line 161
$memory_6 = c_rt_lib::ov_mk_none('tct_im');
#line 161
undef($memory_0);
#line 161
undef($memory_1);
#line 161
undef($memory_2);
#line 161
undef($memory_5);
#line 161
$_[3] = $memory_3;$_[4] = $memory_4;return $memory_6;
#line 161
undef($memory_6);
#line 162
goto label_10;
#line 162
label_13:
#line 163
$memory_7 = "tct_sim";
#line 163
$memory_6 = ov::is($memory_1, $memory_7);
#line 163
undef($memory_7);
#line 163
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 163
if (c_rt_lib::check_true($memory_6)) {goto label_21;}
#line 163
$memory_7 = c_rt_lib::ov_mk_none('tct_sim');
#line 163
undef($memory_0);
#line 163
undef($memory_1);
#line 163
undef($memory_2);
#line 163
undef($memory_5);
#line 163
undef($memory_6);
#line 163
$_[3] = $memory_3;$_[4] = $memory_4;return $memory_7;
#line 163
undef($memory_7);
#line 163
goto label_21;
#line 163
label_21:
#line 163
undef($memory_6);
#line 164
goto label_10;
#line 164
label_14:
#line 164
$memory_6 = c_rt_lib::ov_as($memory_0, 'tct_ref');
#line 165
$memory_7 = [];
#line 165
die(dfile::ssave($memory_7));
#line 165
undef($memory_7);
#line 165
undef($memory_6);
#line 166
goto label_10;
#line 166
label_15:
#line 167
$memory_6 = [];
#line 167
die(dfile::ssave($memory_6));
#line 167
undef($memory_6);
#line 168
goto label_10;
#line 168
label_16:
#line 168
$memory_6 = c_rt_lib::ov_as($memory_0, 'tct_arr');
#line 169
$memory_8 = "tct_arr";
#line 169
$memory_7 = ov::is($memory_1, $memory_8);
#line 169
undef($memory_8);
#line 169
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 169
if (c_rt_lib::check_true($memory_7)) {goto label_23;}
#line 170
$memory_10 = $memory_1;
#line 170
$memory_10 = c_rt_lib::ov_as($memory_10, 'tct_arr');
#line 170
$memory_9 = ptd_system_priv::cross_type($memory_6, $memory_10, $memory_2, $memory_3, $memory_4);
#line 170
undef($memory_10);
#line 170
$memory_8 = tct::arr($memory_9);
#line 170
undef($memory_9);
#line 170
undef($memory_0);
#line 170
undef($memory_1);
#line 170
undef($memory_2);
#line 170
undef($memory_5);
#line 170
undef($memory_6);
#line 170
undef($memory_7);
#line 170
$_[3] = $memory_3;$_[4] = $memory_4;return $memory_8;
#line 170
undef($memory_8);
#line 171
goto label_23;
#line 171
label_23:
#line 171
undef($memory_7);
#line 171
undef($memory_6);
#line 173
goto label_10;
#line 173
label_17:
#line 173
$memory_6 = c_rt_lib::ov_as($memory_0, 'tct_var');
#line 174
$memory_7 = $memory_6;
#line 175
$memory_9 = "tct_var";
#line 175
$memory_8 = ov::is($memory_1, $memory_9);
#line 175
undef($memory_9);
#line 175
$memory_8 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 175
if (c_rt_lib::check_true($memory_8)) {goto label_25;}
#line 176
$memory_9 = $memory_1;
#line 176
$memory_9 = c_rt_lib::ov_as($memory_9, 'tct_var');
#line 177
$memory_12 = c_rt_lib::init_iter($memory_6);
#line 177
label_28:
#line 177
$memory_10 = c_rt_lib::is_end_hash($memory_12);
#line 177
if (c_rt_lib::check_true($memory_10)) {goto label_26;}
#line 177
$memory_10 = c_rt_lib::get_key_iter($memory_12);
#line 177
$memory_11 = c_rt_lib::hash_get_value($memory_6, $memory_10);
#line 178
$memory_13 = hash::has_key($memory_9, $memory_10);
#line 178
$memory_13 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_13));
#line 178
if (c_rt_lib::check_true($memory_13)) {goto label_30;}
#line 179
$memory_14 = hash::get_value($memory_9, $memory_10);
#line 180
$memory_15 = c_rt_lib::ov_is($memory_14, 'with_param');
#line 180
if (c_rt_lib::check_true($memory_15)) {goto label_32;}
#line 186
$memory_15 = c_rt_lib::ov_is($memory_14, 'no_param');
#line 186
if (c_rt_lib::check_true($memory_15)) {goto label_33;}
#line 186
$memory_15 = "NOMATCHALERT";
#line 186
$memory_15 = [$memory_15,$memory_14];
#line 186
die(dfile::ssave($memory_15));
#line 180
label_32:
#line 180
$memory_16 = c_rt_lib::ov_as($memory_14, 'with_param');
#line 181
$memory_17 = c_rt_lib::ov_is($memory_11, 'with_param');
#line 181
if (c_rt_lib::check_true($memory_17)) {goto label_35;}
#line 183
$memory_17 = c_rt_lib::ov_is($memory_11, 'no_param');
#line 183
if (c_rt_lib::check_true($memory_17)) {goto label_36;}
#line 183
$memory_17 = "NOMATCHALERT";
#line 183
$memory_17 = [$memory_17,$memory_11];
#line 183
die(dfile::ssave($memory_17));
#line 181
label_35:
#line 181
$memory_18 = c_rt_lib::ov_as($memory_11, 'with_param');
#line 182
$memory_19 = ptd_system_priv::cross_type($memory_16, $memory_18, $memory_2, $memory_3, $memory_4);
#line 182
hash::set_value($memory_7, $memory_10, $memory_19);
#line 182
undef($memory_19);
#line 182
undef($memory_18);
#line 183
goto label_34;
#line 183
label_36:
#line 184
$memory_18 = c_rt_lib::ov_mk_none('tct_im');
#line 184
undef($memory_0);
#line 184
undef($memory_1);
#line 184
undef($memory_2);
#line 184
undef($memory_5);
#line 184
undef($memory_6);
#line 184
undef($memory_7);
#line 184
undef($memory_8);
#line 184
undef($memory_9);
#line 184
undef($memory_10);
#line 184
undef($memory_11);
#line 184
undef($memory_12);
#line 184
undef($memory_13);
#line 184
undef($memory_14);
#line 184
undef($memory_15);
#line 184
undef($memory_16);
#line 184
undef($memory_17);
#line 184
$_[3] = $memory_3;$_[4] = $memory_4;return $memory_18;
#line 184
undef($memory_18);
#line 185
goto label_34;
#line 185
label_34:
#line 185
undef($memory_17);
#line 185
undef($memory_16);
#line 186
goto label_31;
#line 186
label_33:
#line 187
$memory_16 = c_rt_lib::ov_is($memory_11, 'with_param');
#line 187
if (c_rt_lib::check_true($memory_16)) {goto label_38;}
#line 189
$memory_16 = c_rt_lib::ov_is($memory_11, 'no_param');
#line 189
if (c_rt_lib::check_true($memory_16)) {goto label_39;}
#line 189
$memory_16 = "NOMATCHALERT";
#line 189
$memory_16 = [$memory_16,$memory_11];
#line 189
die(dfile::ssave($memory_16));
#line 187
label_38:
#line 187
$memory_17 = c_rt_lib::ov_as($memory_11, 'with_param');
#line 188
$memory_18 = c_rt_lib::ov_mk_none('tct_im');
#line 188
undef($memory_0);
#line 188
undef($memory_1);
#line 188
undef($memory_2);
#line 188
undef($memory_5);
#line 188
undef($memory_6);
#line 188
undef($memory_7);
#line 188
undef($memory_8);
#line 188
undef($memory_9);
#line 188
undef($memory_10);
#line 188
undef($memory_11);
#line 188
undef($memory_12);
#line 188
undef($memory_13);
#line 188
undef($memory_14);
#line 188
undef($memory_15);
#line 188
undef($memory_16);
#line 188
undef($memory_17);
#line 188
$_[3] = $memory_3;$_[4] = $memory_4;return $memory_18;
#line 188
undef($memory_18);
#line 188
undef($memory_17);
#line 189
goto label_37;
#line 189
label_39:
#line 190
$memory_17 = tct::none();
#line 190
hash::set_value($memory_7, $memory_10, $memory_17);
#line 190
undef($memory_17);
#line 191
goto label_37;
#line 191
label_37:
#line 191
undef($memory_16);
#line 192
goto label_31;
#line 192
label_31:
#line 192
undef($memory_15);
#line 192
undef($memory_14);
#line 193
goto label_29;
#line 193
label_30:
#line 194
$memory_14 = c_rt_lib::ov_is($memory_11, 'with_param');
#line 194
if (c_rt_lib::check_true($memory_14)) {goto label_41;}
#line 196
$memory_14 = c_rt_lib::ov_is($memory_11, 'no_param');
#line 196
if (c_rt_lib::check_true($memory_14)) {goto label_42;}
#line 196
$memory_14 = "NOMATCHALERT";
#line 196
$memory_14 = [$memory_14,$memory_11];
#line 196
die(dfile::ssave($memory_14));
#line 194
label_41:
#line 194
$memory_15 = c_rt_lib::ov_as($memory_11, 'with_param');
#line 195
hash::set_value($memory_7, $memory_10, $memory_15);
#line 195
undef($memory_15);
#line 196
goto label_40;
#line 196
label_42:
#line 197
$memory_15 = tct::none();
#line 197
hash::set_value($memory_7, $memory_10, $memory_15);
#line 197
undef($memory_15);
#line 198
goto label_40;
#line 198
label_40:
#line 198
undef($memory_14);
#line 199
goto label_29;
#line 199
label_29:
#line 199
undef($memory_13);
#line 201
$memory_12 = c_rt_lib::next_iter($memory_12);
#line 201
goto label_28;
#line 201
label_26:
#line 201
undef($memory_10);
#line 201
undef($memory_11);
#line 201
undef($memory_12);
#line 202
$memory_12 = c_rt_lib::init_iter($memory_9);
#line 202
label_45:
#line 202
$memory_10 = c_rt_lib::is_end_hash($memory_12);
#line 202
if (c_rt_lib::check_true($memory_10)) {goto label_43;}
#line 202
$memory_10 = c_rt_lib::get_key_iter($memory_12);
#line 202
$memory_11 = c_rt_lib::hash_get_value($memory_9, $memory_10);
#line 203
$memory_13 = hash::has_key($memory_7, $memory_10);
#line 203
$memory_13 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_13));
#line 203
if (c_rt_lib::check_true($memory_13)) {goto label_47;}
#line 203
undef($memory_13);
#line 203
goto label_44;
#line 203
goto label_47;
#line 203
label_47:
#line 203
undef($memory_13);
#line 204
$memory_13 = c_rt_lib::ov_is($memory_11, 'with_param');
#line 204
if (c_rt_lib::check_true($memory_13)) {goto label_49;}
#line 206
$memory_13 = c_rt_lib::ov_is($memory_11, 'no_param');
#line 206
if (c_rt_lib::check_true($memory_13)) {goto label_50;}
#line 206
$memory_13 = "NOMATCHALERT";
#line 206
$memory_13 = [$memory_13,$memory_11];
#line 206
die(dfile::ssave($memory_13));
#line 204
label_49:
#line 204
$memory_14 = c_rt_lib::ov_as($memory_11, 'with_param');
#line 205
hash::set_value($memory_7, $memory_10, $memory_14);
#line 205
undef($memory_14);
#line 206
goto label_48;
#line 206
label_50:
#line 207
$memory_14 = tct::none();
#line 207
hash::set_value($memory_7, $memory_10, $memory_14);
#line 207
undef($memory_14);
#line 208
goto label_48;
#line 208
label_48:
#line 208
undef($memory_13);
#line 208
label_44:
#line 209
$memory_12 = c_rt_lib::next_iter($memory_12);
#line 209
goto label_45;
#line 209
label_43:
#line 209
undef($memory_10);
#line 209
undef($memory_11);
#line 209
undef($memory_12);
#line 210
$memory_10 = tct::var($memory_7);
#line 210
undef($memory_0);
#line 210
undef($memory_1);
#line 210
undef($memory_2);
#line 210
undef($memory_5);
#line 210
undef($memory_6);
#line 210
undef($memory_7);
#line 210
undef($memory_8);
#line 210
undef($memory_9);
#line 210
$_[3] = $memory_3;$_[4] = $memory_4;return $memory_10;
#line 210
undef($memory_10);
#line 210
undef($memory_9);
#line 211
goto label_25;
#line 211
label_25:
#line 211
undef($memory_8);
#line 211
undef($memory_7);
#line 211
undef($memory_6);
#line 213
goto label_10;
#line 213
label_18:
#line 213
$memory_6 = c_rt_lib::ov_as($memory_0, 'tct_rec');
#line 214
$memory_8 = "tct_rec";
#line 214
$memory_7 = ov::is($memory_1, $memory_8);
#line 214
undef($memory_8);
#line 214
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 214
if (c_rt_lib::check_true($memory_7)) {goto label_52;}
#line 215
$memory_8 = $memory_1;
#line 215
$memory_8 = c_rt_lib::ov_as($memory_8, 'tct_rec');
#line 216
$memory_9 = c_rt_lib::to_nl(0);
#line 217
$memory_12 = c_rt_lib::init_iter($memory_6);
#line 217
label_55:
#line 217
$memory_10 = c_rt_lib::is_end_hash($memory_12);
#line 217
if (c_rt_lib::check_true($memory_10)) {goto label_53;}
#line 217
$memory_10 = c_rt_lib::get_key_iter($memory_12);
#line 217
$memory_11 = c_rt_lib::hash_get_value($memory_6, $memory_10);
#line 218
$memory_13 = hash::has_key($memory_8, $memory_10);
#line 218
$memory_13 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_13));
#line 218
$memory_13 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_13));
#line 218
if (c_rt_lib::check_true($memory_13)) {goto label_57;}
#line 218
$memory_14 = c_rt_lib::to_nl(1);
#line 218
$memory_9 = $memory_14;
#line 218
undef($memory_14);
#line 218
goto label_57;
#line 218
label_57:
#line 218
undef($memory_13);
#line 219
$memory_12 = c_rt_lib::next_iter($memory_12);
#line 219
goto label_55;
#line 219
label_53:
#line 219
undef($memory_10);
#line 219
undef($memory_11);
#line 219
undef($memory_12);
#line 220
$memory_12 = c_rt_lib::init_iter($memory_8);
#line 220
label_60:
#line 220
$memory_10 = c_rt_lib::is_end_hash($memory_12);
#line 220
if (c_rt_lib::check_true($memory_10)) {goto label_58;}
#line 220
$memory_10 = c_rt_lib::get_key_iter($memory_12);
#line 220
$memory_11 = c_rt_lib::hash_get_value($memory_8, $memory_10);
#line 221
$memory_13 = hash::has_key($memory_6, $memory_10);
#line 221
$memory_13 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_13));
#line 221
$memory_13 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_13));
#line 221
if (c_rt_lib::check_true($memory_13)) {goto label_62;}
#line 221
$memory_14 = c_rt_lib::to_nl(1);
#line 221
$memory_9 = $memory_14;
#line 221
undef($memory_14);
#line 221
goto label_62;
#line 221
label_62:
#line 221
undef($memory_13);
#line 222
$memory_12 = c_rt_lib::next_iter($memory_12);
#line 222
goto label_60;
#line 222
label_58:
#line 222
undef($memory_10);
#line 222
undef($memory_11);
#line 222
undef($memory_12);
#line 223
$memory_10 = $memory_9;
#line 223
$memory_10 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_10));
#line 223
if (c_rt_lib::check_true($memory_10)) {goto label_64;}
#line 224
$memory_11 = ptd_system::rec_to_hash($memory_0, $memory_2, $memory_3, $memory_4);
#line 225
$memory_12 = ptd_system::rec_to_hash($memory_1, $memory_2, $memory_3, $memory_4);
#line 226
$memory_14 = ptd_system_priv::cross_type($memory_11, $memory_12, $memory_2, $memory_3, $memory_4);
#line 226
$memory_13 = tct::hash($memory_14);
#line 226
undef($memory_14);
#line 226
undef($memory_0);
#line 226
undef($memory_1);
#line 226
undef($memory_2);
#line 226
undef($memory_5);
#line 226
undef($memory_6);
#line 226
undef($memory_7);
#line 226
undef($memory_8);
#line 226
undef($memory_9);
#line 226
undef($memory_10);
#line 226
undef($memory_11);
#line 226
undef($memory_12);
#line 226
$_[3] = $memory_3;$_[4] = $memory_4;return $memory_13;
#line 226
undef($memory_13);
#line 226
undef($memory_11);
#line 226
undef($memory_12);
#line 227
goto label_63;
#line 227
label_64:
#line 228
$memory_11 = {};
#line 229
$memory_14 = c_rt_lib::init_iter($memory_6);
#line 229
label_67:
#line 229
$memory_12 = c_rt_lib::is_end_hash($memory_14);
#line 229
if (c_rt_lib::check_true($memory_12)) {goto label_65;}
#line 229
$memory_12 = c_rt_lib::get_key_iter($memory_14);
#line 229
$memory_13 = c_rt_lib::hash_get_value($memory_6, $memory_12);
#line 230
$memory_16 = hash::get_value($memory_8, $memory_12);
#line 230
$memory_15 = ptd_system_priv::cross_type($memory_13, $memory_16, $memory_2, $memory_3, $memory_4);
#line 230
undef($memory_16);
#line 230
hash::set_value($memory_11, $memory_12, $memory_15);
#line 230
undef($memory_15);
#line 231
$memory_14 = c_rt_lib::next_iter($memory_14);
#line 231
goto label_67;
#line 231
label_65:
#line 231
undef($memory_12);
#line 231
undef($memory_13);
#line 231
undef($memory_14);
#line 232
$memory_12 = tct::rec($memory_11);
#line 232
undef($memory_0);
#line 232
undef($memory_1);
#line 232
undef($memory_2);
#line 232
undef($memory_5);
#line 232
undef($memory_6);
#line 232
undef($memory_7);
#line 232
undef($memory_8);
#line 232
undef($memory_9);
#line 232
undef($memory_10);
#line 232
undef($memory_11);
#line 232
$_[3] = $memory_3;$_[4] = $memory_4;return $memory_12;
#line 232
undef($memory_12);
#line 232
undef($memory_11);
#line 233
goto label_63;
#line 233
label_63:
#line 233
undef($memory_10);
#line 233
undef($memory_8);
#line 233
undef($memory_9);
#line 234
goto label_52;
#line 234
label_52:
#line 234
undef($memory_7);
#line 235
$memory_8 = "tct_hash";
#line 235
$memory_7 = ov::is($memory_1, $memory_8);
#line 235
undef($memory_8);
#line 235
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 235
if (c_rt_lib::check_true($memory_7)) {goto label_69;}
#line 236
$memory_8 = ptd_system::rec_to_hash($memory_0, $memory_2, $memory_3, $memory_4);
#line 237
$memory_11 = $memory_1;
#line 237
$memory_11 = c_rt_lib::ov_as($memory_11, 'tct_hash');
#line 237
$memory_10 = ptd_system::cross_type($memory_11, $memory_8, $memory_3, $memory_4);
#line 237
undef($memory_11);
#line 237
$memory_9 = tct::hash($memory_10);
#line 237
undef($memory_10);
#line 237
undef($memory_0);
#line 237
undef($memory_1);
#line 237
undef($memory_2);
#line 237
undef($memory_5);
#line 237
undef($memory_6);
#line 237
undef($memory_7);
#line 237
undef($memory_8);
#line 237
$_[3] = $memory_3;$_[4] = $memory_4;return $memory_9;
#line 237
undef($memory_9);
#line 237
undef($memory_8);
#line 238
goto label_69;
#line 238
label_69:
#line 238
undef($memory_7);
#line 238
undef($memory_6);
#line 239
goto label_10;
#line 239
label_19:
#line 239
$memory_6 = c_rt_lib::ov_as($memory_0, 'tct_hash');
#line 240
$memory_8 = "tct_hash";
#line 240
$memory_7 = ov::is($memory_1, $memory_8);
#line 240
undef($memory_8);
#line 240
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 240
if (c_rt_lib::check_true($memory_7)) {goto label_71;}
#line 241
$memory_10 = $memory_1;
#line 241
$memory_10 = c_rt_lib::ov_as($memory_10, 'tct_hash');
#line 241
$memory_9 = ptd_system_priv::cross_type($memory_6, $memory_10, $memory_2, $memory_3, $memory_4);
#line 241
undef($memory_10);
#line 241
$memory_8 = tct::hash($memory_9);
#line 241
undef($memory_9);
#line 241
undef($memory_0);
#line 241
undef($memory_1);
#line 241
undef($memory_2);
#line 241
undef($memory_5);
#line 241
undef($memory_6);
#line 241
undef($memory_7);
#line 241
$_[3] = $memory_3;$_[4] = $memory_4;return $memory_8;
#line 241
undef($memory_8);
#line 242
goto label_71;
#line 242
label_71:
#line 242
undef($memory_7);
#line 243
$memory_8 = "tct_rec";
#line 243
$memory_7 = ov::is($memory_1, $memory_8);
#line 243
undef($memory_8);
#line 243
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 243
if (c_rt_lib::check_true($memory_7)) {goto label_73;}
#line 244
$memory_8 = ptd_system::rec_to_hash($memory_1, $memory_2, $memory_3, $memory_4);
#line 245
$memory_10 = ptd_system::cross_type($memory_6, $memory_8, $memory_3, $memory_4);
#line 245
$memory_9 = tct::hash($memory_10);
#line 245
undef($memory_10);
#line 245
undef($memory_0);
#line 245
undef($memory_1);
#line 245
undef($memory_2);
#line 245
undef($memory_5);
#line 245
undef($memory_6);
#line 245
undef($memory_7);
#line 245
undef($memory_8);
#line 245
$_[3] = $memory_3;$_[4] = $memory_4;return $memory_9;
#line 245
undef($memory_9);
#line 245
undef($memory_8);
#line 246
goto label_73;
#line 246
label_73:
#line 246
undef($memory_7);
#line 246
undef($memory_6);
#line 247
goto label_10;
#line 247
label_10:
#line 247
undef($memory_5);
#line 248
$memory_5 = c_rt_lib::ov_mk_none('tct_im');
#line 248
undef($memory_0);
#line 248
undef($memory_1);
#line 248
undef($memory_2);
#line 248
$_[3] = $memory_3;$_[4] = $memory_4;return $memory_5;
#line 248
undef($memory_5);
#line 248
undef($memory_0);
#line 248
undef($memory_1);
#line 248
undef($memory_2);
#line 248
$_[3] = $memory_3;$_[4] = $memory_4;return;
$_[3] = $memory_3;$_[4] = $memory_4;}

sub ptd_system::rec_to_hash($$$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;$memory_0 = $_[0];$memory_1 = $_[1];$memory_2 = $_[2];Scalar::Util::weaken($_[2]) if ref($_[2]);$memory_3 = $_[3];Scalar::Util::weaken($_[3]) if ref($_[3]);
#line 251
$memory_4 = tct::empty();
#line 252
$memory_5 = $memory_0;
#line 252
$memory_5 = c_rt_lib::ov_as($memory_5, 'tct_rec');
#line 252
$memory_8 = c_rt_lib::init_iter($memory_5);
#line 252
label_3:
#line 252
$memory_6 = c_rt_lib::is_end_hash($memory_8);
#line 252
if (c_rt_lib::check_true($memory_6)) {goto label_1;}
#line 252
$memory_6 = c_rt_lib::get_key_iter($memory_8);
#line 252
$memory_7 = c_rt_lib::hash_get_value($memory_5, $memory_6);
#line 253
$memory_9 = ptd_system_priv::cross_type($memory_7, $memory_4, $memory_1, $memory_2, $memory_3);
#line 253
$memory_4 = $memory_9;
#line 253
undef($memory_9);
#line 254
$memory_8 = c_rt_lib::next_iter($memory_8);
#line 254
goto label_3;
#line 254
label_1:
#line 254
undef($memory_5);
#line 254
undef($memory_6);
#line 254
undef($memory_7);
#line 254
undef($memory_8);
#line 255
undef($memory_0);
#line 255
undef($memory_1);
#line 255
$_[2] = $memory_2;$_[3] = $memory_3;return $memory_4;
#line 255
undef($memory_4);
#line 255
undef($memory_0);
#line 255
undef($memory_1);
#line 255
$_[2] = $memory_2;$_[3] = $memory_3;return;
$_[2] = $memory_2;$_[3] = $memory_3;}

sub ptd_system::cast_type($$$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;$memory_0 = $_[0];$memory_1 = $_[1];$memory_2 = $_[2];Scalar::Util::weaken($_[2]) if ref($_[2]);$memory_3 = $_[3];Scalar::Util::weaken($_[3]) if ref($_[3]);
#line 259
$memory_5 = 1;
#line 259
$memory_6 = {};
#line 259
$memory_7 = {};
#line 259
$memory_8 = c_rt_lib::to_nl(1);
#line 259
$memory_9 = c_rt_lib::to_nl(1);
#line 259
$memory_4 = {level => $memory_5,from => $memory_6,to => $memory_7,check => $memory_8,cast => $memory_9,};
#line 259
undef($memory_5);
#line 259
undef($memory_6);
#line 259
undef($memory_7);
#line 259
undef($memory_8);
#line 259
undef($memory_9);
#line 260
$memory_6 = $memory_1->{'type'};
#line 260
$memory_7 = $memory_1->{'src'};
#line 260
$memory_5 = ptd_system_priv::check_assignment_info($memory_0, $memory_6, $memory_4, $memory_7, $memory_2, $memory_3);
#line 260
undef($memory_7);
#line 260
undef($memory_6);
#line 260
undef($memory_0);
#line 260
undef($memory_1);
#line 260
undef($memory_4);
#line 260
$_[2] = $memory_2;$_[3] = $memory_3;return $memory_5;
#line 260
undef($memory_5);
#line 260
undef($memory_4);
#line 260
undef($memory_0);
#line 260
undef($memory_1);
#line 260
$_[2] = $memory_2;$_[3] = $memory_3;return;
$_[2] = $memory_2;$_[3] = $memory_3;}

sub ptd_system::check_assignment($$$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;$memory_0 = $_[0];$memory_1 = $_[1];$memory_2 = $_[2];Scalar::Util::weaken($_[2]) if ref($_[2]);$memory_3 = $_[3];Scalar::Util::weaken($_[3]) if ref($_[3]);
#line 265
$memory_5 = 1;
#line 265
$memory_6 = {};
#line 265
$memory_7 = {};
#line 265
$memory_8 = c_rt_lib::to_nl(1);
#line 265
$memory_9 = c_rt_lib::to_nl(0);
#line 265
$memory_4 = {level => $memory_5,from => $memory_6,to => $memory_7,check => $memory_8,cast => $memory_9,};
#line 265
undef($memory_5);
#line 265
undef($memory_6);
#line 265
undef($memory_7);
#line 265
undef($memory_8);
#line 265
undef($memory_9);
#line 266
$memory_6 = $memory_1->{'type'};
#line 266
$memory_7 = $memory_1->{'src'};
#line 266
$memory_5 = ptd_system_priv::check_assignment_info($memory_0, $memory_6, $memory_4, $memory_7, $memory_2, $memory_3);
#line 266
undef($memory_7);
#line 266
undef($memory_6);
#line 266
undef($memory_0);
#line 266
undef($memory_1);
#line 266
undef($memory_4);
#line 266
$_[2] = $memory_2;$_[3] = $memory_3;return $memory_5;
#line 266
undef($memory_5);
#line 266
undef($memory_4);
#line 266
undef($memory_0);
#line 266
undef($memory_1);
#line 266
$_[2] = $memory_2;$_[3] = $memory_3;return;
$_[2] = $memory_2;$_[3] = $memory_3;}

sub ptd_system_priv::mk_err($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;$memory_0 = $_[0];$memory_1 = $_[1];
#line 270
$memory_3 = [];
#line 270
$memory_2 = {to => $memory_0,from => $memory_1,stack => $memory_3,};
#line 270
undef($memory_3);
#line 270
$memory_2 = c_rt_lib::ov_mk_arg('err', $memory_2);
#line 270
undef($memory_0);
#line 270
undef($memory_1);
#line 270
return $memory_2;
#line 270
undef($memory_2);
#line 270
undef($memory_0);
#line 270
undef($memory_1);
#line 270
return;
}

sub ptd_system_priv::check_assignment_info($$$$$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;my $memory_13;my $memory_14;my $memory_15;my $memory_16;my $memory_17;my $memory_18;my $memory_19;my $memory_20;my $memory_21;$memory_0 = $_[0];$memory_1 = $_[1];$memory_2 = $_[2];$memory_3 = $_[3];$memory_4 = $_[4];Scalar::Util::weaken($_[4]) if ref($_[4]);$memory_5 = $_[5];Scalar::Util::weaken($_[5]) if ref($_[5]);
#line 274
$memory_7 = "tct_empty";
#line 274
$memory_6 = ov::is($memory_1, $memory_7);
#line 274
undef($memory_7);
#line 274
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 274
if (c_rt_lib::check_true($memory_6)) {goto label_2;}
#line 274
$memory_7 = c_rt_lib::ov_mk_none('ok');
#line 274
undef($memory_0);
#line 274
undef($memory_1);
#line 274
undef($memory_2);
#line 274
undef($memory_3);
#line 274
undef($memory_6);
#line 274
$_[4] = $memory_4;$_[5] = $memory_5;return $memory_7;
#line 274
undef($memory_7);
#line 274
goto label_2;
#line 274
label_2:
#line 274
undef($memory_6);
#line 275
$memory_7 = "tct_void";
#line 275
$memory_6 = ov::is($memory_1, $memory_7);
#line 275
undef($memory_7);
#line 275
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 275
if (c_rt_lib::check_true($memory_6)) {goto label_4;}
#line 275
$memory_7 = ptd_system_priv::mk_err($memory_0, $memory_1);
#line 275
undef($memory_0);
#line 275
undef($memory_1);
#line 275
undef($memory_2);
#line 275
undef($memory_3);
#line 275
undef($memory_6);
#line 275
$_[4] = $memory_4;$_[5] = $memory_5;return $memory_7;
#line 275
undef($memory_7);
#line 275
goto label_4;
#line 275
label_4:
#line 275
undef($memory_6);
#line 276
$memory_7 = "tct_im";
#line 276
$memory_6 = ov::is($memory_0, $memory_7);
#line 276
undef($memory_7);
#line 276
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 276
if (c_rt_lib::check_true($memory_6)) {goto label_6;}
#line 277
$memory_7 = $memory_2->{'check'};
#line 277
$memory_8 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 277
if (c_rt_lib::check_true($memory_8)) {goto label_9;}
#line 277
$memory_7 = ptd_system::is_known($memory_3);
#line 277
label_9:
#line 277
undef($memory_8);
#line 277
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 277
if (c_rt_lib::check_true($memory_7)) {goto label_8;}
#line 277
$memory_8 = c_rt_lib::ov_mk_none('delete');
#line 277
$memory_9 = $memory_2->{'from'};
#line 277
ptd_system_priv::walk_on_type($memory_1, $memory_8, $memory_9, $memory_4, $memory_5);
#line 277
undef($memory_9);
#line 277
undef($memory_8);
#line 277
goto label_8;
#line 277
label_8:
#line 277
undef($memory_7);
#line 278
$memory_7 = c_rt_lib::ov_mk_none('ok');
#line 278
undef($memory_0);
#line 278
undef($memory_1);
#line 278
undef($memory_2);
#line 278
undef($memory_3);
#line 278
undef($memory_6);
#line 278
$_[4] = $memory_4;$_[5] = $memory_5;return $memory_7;
#line 278
undef($memory_7);
#line 279
goto label_6;
#line 279
label_6:
#line 279
undef($memory_6);
#line 280
$memory_7 = c_rt_lib::to_nl(0);
#line 280
$memory_8 = ptd_system::is_known($memory_3);
#line 280
$memory_6 = ptd_system_priv::is_cycle_ref($memory_0, $memory_1, $memory_2, $memory_7, $memory_8, $memory_4, $memory_5);
#line 280
undef($memory_8);
#line 280
undef($memory_7);
#line 280
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 280
if (c_rt_lib::check_true($memory_6)) {goto label_11;}
#line 281
$memory_7 = c_rt_lib::ov_mk_none('ok');
#line 281
undef($memory_0);
#line 281
undef($memory_1);
#line 281
undef($memory_2);
#line 281
undef($memory_3);
#line 281
undef($memory_6);
#line 281
$_[4] = $memory_4;$_[5] = $memory_5;return $memory_7;
#line 281
undef($memory_7);
#line 282
goto label_11;
#line 282
label_11:
#line 282
undef($memory_6);
#line 284
$memory_6 = $memory_2->{'level'};
#line 284
$memory_7 = 200;
#line 284
$memory_6 = c_rt_lib::to_nl($memory_6 == $memory_7);
#line 284
undef($memory_7);
#line 284
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 284
if (c_rt_lib::check_true($memory_6)) {goto label_13;}
#line 285
$memory_7 = "can't assignment this two type";
#line 285
ptd_system_priv::add_error($memory_5, $memory_7);
#line 285
undef($memory_7);
#line 286
$memory_7 = ptd_system_priv::mk_err($memory_0, $memory_1);
#line 286
undef($memory_0);
#line 286
undef($memory_1);
#line 286
undef($memory_2);
#line 286
undef($memory_3);
#line 286
undef($memory_6);
#line 286
$_[4] = $memory_4;$_[5] = $memory_5;return $memory_7;
#line 286
undef($memory_7);
#line 287
goto label_13;
#line 287
label_13:
#line 287
undef($memory_6);
#line 289
$memory_6 = c_rt_lib::ov_is($memory_0, 'tct_im');
#line 289
if (c_rt_lib::check_true($memory_6)) {goto label_15;}
#line 291
$memory_6 = c_rt_lib::ov_is($memory_0, 'tct_arr');
#line 291
if (c_rt_lib::check_true($memory_6)) {goto label_16;}
#line 300
$memory_6 = c_rt_lib::ov_is($memory_0, 'tct_hash');
#line 300
if (c_rt_lib::check_true($memory_6)) {goto label_17;}
#line 321
$memory_6 = c_rt_lib::ov_is($memory_0, 'tct_rec');
#line 321
if (c_rt_lib::check_true($memory_6)) {goto label_18;}
#line 348
$memory_6 = c_rt_lib::ov_is($memory_0, 'tct_ref');
#line 348
if (c_rt_lib::check_true($memory_6)) {goto label_19;}
#line 350
$memory_6 = c_rt_lib::ov_is($memory_0, 'tct_void');
#line 350
if (c_rt_lib::check_true($memory_6)) {goto label_20;}
#line 352
$memory_6 = c_rt_lib::ov_is($memory_0, 'tct_sim');
#line 352
if (c_rt_lib::check_true($memory_6)) {goto label_21;}
#line 355
$memory_6 = c_rt_lib::ov_is($memory_0, 'tct_var');
#line 355
if (c_rt_lib::check_true($memory_6)) {goto label_22;}
#line 382
$memory_6 = c_rt_lib::ov_is($memory_0, 'tct_empty');
#line 382
if (c_rt_lib::check_true($memory_6)) {goto label_23;}
#line 382
$memory_6 = "NOMATCHALERT";
#line 382
$memory_6 = [$memory_6,$memory_0];
#line 382
die(dfile::ssave($memory_6));
#line 289
label_15:
#line 290
$memory_7 = c_rt_lib::ov_mk_none('ok');
#line 290
undef($memory_0);
#line 290
undef($memory_1);
#line 290
undef($memory_2);
#line 290
undef($memory_3);
#line 290
undef($memory_6);
#line 290
$_[4] = $memory_4;$_[5] = $memory_5;return $memory_7;
#line 290
undef($memory_7);
#line 291
goto label_14;
#line 291
label_16:
#line 291
$memory_7 = c_rt_lib::ov_as($memory_0, 'tct_arr');
#line 292
$memory_9 = "tct_arr";
#line 292
$memory_8 = ov::is($memory_1, $memory_9);
#line 292
undef($memory_9);
#line 292
$memory_8 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 292
$memory_8 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 292
if (c_rt_lib::check_true($memory_8)) {goto label_25;}
#line 292
$memory_9 = ptd_system_priv::mk_err($memory_0, $memory_1);
#line 292
undef($memory_0);
#line 292
undef($memory_1);
#line 292
undef($memory_2);
#line 292
undef($memory_3);
#line 292
undef($memory_6);
#line 292
undef($memory_7);
#line 292
undef($memory_8);
#line 292
$_[4] = $memory_4;$_[5] = $memory_5;return $memory_9;
#line 292
undef($memory_9);
#line 292
goto label_25;
#line 292
label_25:
#line 292
undef($memory_8);
#line 293
$memory_9 = $memory_1;
#line 293
$memory_9 = c_rt_lib::ov_as($memory_9, 'tct_arr');
#line 293
$memory_8 = ptd_system_priv::check_assignment_info($memory_7, $memory_9, $memory_2, $memory_3, $memory_4, $memory_5);
#line 293
undef($memory_9);
#line 294
$memory_9 = c_rt_lib::ov_is($memory_8, 'ok');
#line 294
if (c_rt_lib::check_true($memory_9)) {goto label_27;}
#line 296
$memory_9 = c_rt_lib::ov_is($memory_8, 'err');
#line 296
if (c_rt_lib::check_true($memory_9)) {goto label_28;}
#line 296
$memory_9 = "NOMATCHALERT";
#line 296
$memory_9 = [$memory_9,$memory_8];
#line 296
die(dfile::ssave($memory_9));
#line 294
label_27:
#line 295
$memory_10 = c_rt_lib::ov_mk_none('ok');
#line 295
undef($memory_0);
#line 295
undef($memory_1);
#line 295
undef($memory_2);
#line 295
undef($memory_3);
#line 295
undef($memory_6);
#line 295
undef($memory_7);
#line 295
undef($memory_8);
#line 295
undef($memory_9);
#line 295
$_[4] = $memory_4;$_[5] = $memory_5;return $memory_10;
#line 295
undef($memory_10);
#line 296
goto label_26;
#line 296
label_28:
#line 296
$memory_10 = c_rt_lib::ov_as($memory_8, 'err');
#line 297
$memory_11 = "stack";
#line 297
$memory_11 = c_rt_lib::get_ref_hash($memory_10, $memory_11);
#line 297
$memory_12 = c_rt_lib::ov_mk_none('ptd_arr');
#line 297
array::push($memory_11, $memory_12);
#line 297
undef($memory_12);
#line 297
$memory_12 = "stack";
#line 297
c_rt_lib::set_ref_hash($memory_10, $memory_12, $memory_11);
#line 297
undef($memory_12);
#line 297
undef($memory_11);
#line 298
$memory_11 = c_rt_lib::ov_mk_arg('err', $memory_10);
#line 298
undef($memory_0);
#line 298
undef($memory_1);
#line 298
undef($memory_2);
#line 298
undef($memory_3);
#line 298
undef($memory_6);
#line 298
undef($memory_7);
#line 298
undef($memory_8);
#line 298
undef($memory_9);
#line 298
undef($memory_10);
#line 298
$_[4] = $memory_4;$_[5] = $memory_5;return $memory_11;
#line 298
undef($memory_11);
#line 298
undef($memory_10);
#line 299
goto label_26;
#line 299
label_26:
#line 299
undef($memory_9);
#line 299
undef($memory_8);
#line 299
undef($memory_7);
#line 300
goto label_14;
#line 300
label_17:
#line 300
$memory_7 = c_rt_lib::ov_as($memory_0, 'tct_hash');
#line 301
$memory_10 = "tct_rec";
#line 301
$memory_8 = ov::is($memory_1, $memory_10);
#line 301
undef($memory_10);
#line 301
$memory_9 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 301
if (c_rt_lib::check_true($memory_9)) {goto label_31;}
#line 301
$memory_10 = "known";
#line 301
$memory_8 = ov::is($memory_3, $memory_10);
#line 301
undef($memory_10);
#line 301
$memory_8 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 301
label_31:
#line 301
undef($memory_9);
#line 301
$memory_8 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 301
if (c_rt_lib::check_true($memory_8)) {goto label_30;}
#line 302
$memory_9 = $memory_1;
#line 302
$memory_9 = c_rt_lib::ov_as($memory_9, 'tct_rec');
#line 302
$memory_12 = c_rt_lib::init_iter($memory_9);
#line 302
label_34:
#line 302
$memory_10 = c_rt_lib::is_end_hash($memory_12);
#line 302
if (c_rt_lib::check_true($memory_10)) {goto label_32;}
#line 302
$memory_10 = c_rt_lib::get_key_iter($memory_12);
#line 302
$memory_11 = c_rt_lib::hash_get_value($memory_9, $memory_10);
#line 303
$memory_13 = ptd_system_priv::check_assignment_info($memory_7, $memory_11, $memory_2, $memory_3, $memory_4, $memory_5);
#line 304
$memory_14 = c_rt_lib::ov_is($memory_13, 'ok');
#line 304
if (c_rt_lib::check_true($memory_14)) {goto label_36;}
#line 305
$memory_14 = c_rt_lib::ov_is($memory_13, 'err');
#line 305
if (c_rt_lib::check_true($memory_14)) {goto label_37;}
#line 305
$memory_14 = "NOMATCHALERT";
#line 305
$memory_14 = [$memory_14,$memory_13];
#line 305
die(dfile::ssave($memory_14));
#line 304
label_36:
#line 305
goto label_35;
#line 305
label_37:
#line 305
$memory_15 = c_rt_lib::ov_as($memory_13, 'err');
#line 306
$memory_16 = "stack";
#line 306
$memory_16 = c_rt_lib::get_ref_hash($memory_15, $memory_16);
#line 306
$memory_17 = c_rt_lib::ov_mk_arg('ptd_rec', $memory_10);
#line 306
array::push($memory_16, $memory_17);
#line 306
undef($memory_17);
#line 306
$memory_17 = "stack";
#line 306
c_rt_lib::set_ref_hash($memory_15, $memory_17, $memory_16);
#line 306
undef($memory_17);
#line 306
undef($memory_16);
#line 307
$memory_16 = c_rt_lib::ov_mk_arg('err', $memory_15);
#line 307
undef($memory_0);
#line 307
undef($memory_1);
#line 307
undef($memory_2);
#line 307
undef($memory_3);
#line 307
undef($memory_6);
#line 307
undef($memory_7);
#line 307
undef($memory_8);
#line 307
undef($memory_9);
#line 307
undef($memory_10);
#line 307
undef($memory_11);
#line 307
undef($memory_12);
#line 307
undef($memory_13);
#line 307
undef($memory_14);
#line 307
undef($memory_15);
#line 307
$_[4] = $memory_4;$_[5] = $memory_5;return $memory_16;
#line 307
undef($memory_16);
#line 307
undef($memory_15);
#line 308
goto label_35;
#line 308
label_35:
#line 308
undef($memory_14);
#line 308
undef($memory_13);
#line 309
$memory_12 = c_rt_lib::next_iter($memory_12);
#line 309
goto label_34;
#line 309
label_32:
#line 309
undef($memory_9);
#line 309
undef($memory_10);
#line 309
undef($memory_11);
#line 309
undef($memory_12);
#line 310
$memory_9 = c_rt_lib::ov_mk_none('ok');
#line 310
undef($memory_0);
#line 310
undef($memory_1);
#line 310
undef($memory_2);
#line 310
undef($memory_3);
#line 310
undef($memory_6);
#line 310
undef($memory_7);
#line 310
undef($memory_8);
#line 310
$_[4] = $memory_4;$_[5] = $memory_5;return $memory_9;
#line 310
undef($memory_9);
#line 311
goto label_30;
#line 311
label_30:
#line 311
undef($memory_8);
#line 313
$memory_9 = "tct_hash";
#line 313
$memory_8 = ov::is($memory_1, $memory_9);
#line 313
undef($memory_9);
#line 313
$memory_8 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 313
$memory_8 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 313
if (c_rt_lib::check_true($memory_8)) {goto label_39;}
#line 313
$memory_9 = ptd_system_priv::mk_err($memory_0, $memory_1);
#line 313
undef($memory_0);
#line 313
undef($memory_1);
#line 313
undef($memory_2);
#line 313
undef($memory_3);
#line 313
undef($memory_6);
#line 313
undef($memory_7);
#line 313
undef($memory_8);
#line 313
$_[4] = $memory_4;$_[5] = $memory_5;return $memory_9;
#line 313
undef($memory_9);
#line 313
goto label_39;
#line 313
label_39:
#line 313
undef($memory_8);
#line 314
$memory_9 = $memory_1;
#line 314
$memory_9 = c_rt_lib::ov_as($memory_9, 'tct_hash');
#line 314
$memory_8 = ptd_system_priv::check_assignment_info($memory_7, $memory_9, $memory_2, $memory_3, $memory_4, $memory_5);
#line 314
undef($memory_9);
#line 315
$memory_9 = c_rt_lib::ov_is($memory_8, 'ok');
#line 315
if (c_rt_lib::check_true($memory_9)) {goto label_41;}
#line 317
$memory_9 = c_rt_lib::ov_is($memory_8, 'err');
#line 317
if (c_rt_lib::check_true($memory_9)) {goto label_42;}
#line 317
$memory_9 = "NOMATCHALERT";
#line 317
$memory_9 = [$memory_9,$memory_8];
#line 317
die(dfile::ssave($memory_9));
#line 315
label_41:
#line 316
$memory_10 = c_rt_lib::ov_mk_none('ok');
#line 316
undef($memory_0);
#line 316
undef($memory_1);
#line 316
undef($memory_2);
#line 316
undef($memory_3);
#line 316
undef($memory_6);
#line 316
undef($memory_7);
#line 316
undef($memory_8);
#line 316
undef($memory_9);
#line 316
$_[4] = $memory_4;$_[5] = $memory_5;return $memory_10;
#line 316
undef($memory_10);
#line 317
goto label_40;
#line 317
label_42:
#line 317
$memory_10 = c_rt_lib::ov_as($memory_8, 'err');
#line 318
$memory_11 = "stack";
#line 318
$memory_11 = c_rt_lib::get_ref_hash($memory_10, $memory_11);
#line 318
$memory_12 = c_rt_lib::ov_mk_none('ptd_hash');
#line 318
array::push($memory_11, $memory_12);
#line 318
undef($memory_12);
#line 318
$memory_12 = "stack";
#line 318
c_rt_lib::set_ref_hash($memory_10, $memory_12, $memory_11);
#line 318
undef($memory_12);
#line 318
undef($memory_11);
#line 319
$memory_11 = c_rt_lib::ov_mk_arg('err', $memory_10);
#line 319
undef($memory_0);
#line 319
undef($memory_1);
#line 319
undef($memory_2);
#line 319
undef($memory_3);
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
$_[4] = $memory_4;$_[5] = $memory_5;return $memory_11;
#line 319
undef($memory_11);
#line 319
undef($memory_10);
#line 320
goto label_40;
#line 320
label_40:
#line 320
undef($memory_9);
#line 320
undef($memory_8);
#line 320
undef($memory_7);
#line 321
goto label_14;
#line 321
label_18:
#line 321
$memory_7 = c_rt_lib::ov_as($memory_0, 'tct_rec');
#line 322
$memory_8 = $memory_2->{'cast'};
#line 322
$memory_9 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 322
if (c_rt_lib::check_true($memory_9)) {goto label_45;}
#line 322
$memory_8 = $memory_1;
#line 322
$memory_8 = c_rt_lib::ov_is($memory_8, 'tct_hash');
#line 322
label_45:
#line 322
undef($memory_9);
#line 322
$memory_8 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 322
if (c_rt_lib::check_true($memory_8)) {goto label_44;}
#line 323
$memory_9 = $memory_1;
#line 323
$memory_9 = c_rt_lib::ov_as($memory_9, 'tct_hash');
#line 324
$memory_12 = c_rt_lib::init_iter($memory_7);
#line 324
label_48:
#line 324
$memory_10 = c_rt_lib::is_end_hash($memory_12);
#line 324
if (c_rt_lib::check_true($memory_10)) {goto label_46;}
#line 324
$memory_10 = c_rt_lib::get_key_iter($memory_12);
#line 324
$memory_11 = c_rt_lib::hash_get_value($memory_7, $memory_10);
#line 325
$memory_13 = ptd_system_priv::check_assignment_info($memory_11, $memory_9, $memory_2, $memory_3, $memory_4, $memory_5);
#line 326
$memory_14 = c_rt_lib::ov_is($memory_13, 'ok');
#line 326
if (c_rt_lib::check_true($memory_14)) {goto label_50;}
#line 327
$memory_14 = c_rt_lib::ov_is($memory_13, 'err');
#line 327
if (c_rt_lib::check_true($memory_14)) {goto label_51;}
#line 327
$memory_14 = "NOMATCHALERT";
#line 327
$memory_14 = [$memory_14,$memory_13];
#line 327
die(dfile::ssave($memory_14));
#line 326
label_50:
#line 327
goto label_49;
#line 327
label_51:
#line 327
$memory_15 = c_rt_lib::ov_as($memory_13, 'err');
#line 328
$memory_16 = "stack";
#line 328
$memory_16 = c_rt_lib::get_ref_hash($memory_15, $memory_16);
#line 328
$memory_17 = c_rt_lib::ov_mk_arg('ptd_rec', $memory_10);
#line 328
array::push($memory_16, $memory_17);
#line 328
undef($memory_17);
#line 328
$memory_17 = "stack";
#line 328
c_rt_lib::set_ref_hash($memory_15, $memory_17, $memory_16);
#line 328
undef($memory_17);
#line 328
undef($memory_16);
#line 329
$memory_16 = c_rt_lib::ov_mk_arg('err', $memory_15);
#line 329
undef($memory_0);
#line 329
undef($memory_1);
#line 329
undef($memory_2);
#line 329
undef($memory_3);
#line 329
undef($memory_6);
#line 329
undef($memory_7);
#line 329
undef($memory_8);
#line 329
undef($memory_9);
#line 329
undef($memory_10);
#line 329
undef($memory_11);
#line 329
undef($memory_12);
#line 329
undef($memory_13);
#line 329
undef($memory_14);
#line 329
undef($memory_15);
#line 329
$_[4] = $memory_4;$_[5] = $memory_5;return $memory_16;
#line 329
undef($memory_16);
#line 329
undef($memory_15);
#line 330
goto label_49;
#line 330
label_49:
#line 330
undef($memory_14);
#line 330
undef($memory_13);
#line 331
$memory_12 = c_rt_lib::next_iter($memory_12);
#line 331
goto label_48;
#line 331
label_46:
#line 331
undef($memory_10);
#line 331
undef($memory_11);
#line 331
undef($memory_12);
#line 332
$memory_10 = c_rt_lib::ov_mk_none('ok');
#line 332
undef($memory_0);
#line 332
undef($memory_1);
#line 332
undef($memory_2);
#line 332
undef($memory_3);
#line 332
undef($memory_6);
#line 332
undef($memory_7);
#line 332
undef($memory_8);
#line 332
undef($memory_9);
#line 332
$_[4] = $memory_4;$_[5] = $memory_5;return $memory_10;
#line 332
undef($memory_10);
#line 332
undef($memory_9);
#line 333
goto label_44;
#line 333
label_44:
#line 333
undef($memory_8);
#line 334
$memory_9 = "tct_rec";
#line 334
$memory_8 = ov::is($memory_1, $memory_9);
#line 334
undef($memory_9);
#line 334
$memory_8 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 334
$memory_8 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 334
if (c_rt_lib::check_true($memory_8)) {goto label_53;}
#line 334
$memory_9 = ptd_system_priv::mk_err($memory_0, $memory_1);
#line 334
undef($memory_0);
#line 334
undef($memory_1);
#line 334
undef($memory_2);
#line 334
undef($memory_3);
#line 334
undef($memory_6);
#line 334
undef($memory_7);
#line 334
undef($memory_8);
#line 334
$_[4] = $memory_4;$_[5] = $memory_5;return $memory_9;
#line 334
undef($memory_9);
#line 334
goto label_53;
#line 334
label_53:
#line 334
undef($memory_8);
#line 335
$memory_8 = $memory_1;
#line 335
$memory_8 = c_rt_lib::ov_as($memory_8, 'tct_rec');
#line 336
$memory_9 = hash::size($memory_8);
#line 336
$memory_10 = hash::size($memory_7);
#line 336
$memory_9 = c_rt_lib::to_nl($memory_9 != $memory_10);
#line 336
undef($memory_10);
#line 336
$memory_9 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_9));
#line 336
if (c_rt_lib::check_true($memory_9)) {goto label_55;}
#line 336
$memory_10 = ptd_system_priv::mk_err($memory_0, $memory_1);
#line 336
undef($memory_0);
#line 336
undef($memory_1);
#line 336
undef($memory_2);
#line 336
undef($memory_3);
#line 336
undef($memory_6);
#line 336
undef($memory_7);
#line 336
undef($memory_8);
#line 336
undef($memory_9);
#line 336
$_[4] = $memory_4;$_[5] = $memory_5;return $memory_10;
#line 336
undef($memory_10);
#line 336
goto label_55;
#line 336
label_55:
#line 336
undef($memory_9);
#line 337
$memory_11 = c_rt_lib::init_iter($memory_7);
#line 337
label_58:
#line 337
$memory_9 = c_rt_lib::is_end_hash($memory_11);
#line 337
if (c_rt_lib::check_true($memory_9)) {goto label_56;}
#line 337
$memory_9 = c_rt_lib::get_key_iter($memory_11);
#line 337
$memory_10 = c_rt_lib::hash_get_value($memory_7, $memory_9);
#line 338
$memory_12 = hash::has_key($memory_8, $memory_9);
#line 338
$memory_12 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_12));
#line 338
$memory_12 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_12));
#line 338
if (c_rt_lib::check_true($memory_12)) {goto label_60;}
#line 338
$memory_13 = ptd_system_priv::mk_err($memory_0, $memory_1);
#line 338
undef($memory_0);
#line 338
undef($memory_1);
#line 338
undef($memory_2);
#line 338
undef($memory_3);
#line 338
undef($memory_6);
#line 338
undef($memory_7);
#line 338
undef($memory_8);
#line 338
undef($memory_9);
#line 338
undef($memory_10);
#line 338
undef($memory_11);
#line 338
undef($memory_12);
#line 338
$_[4] = $memory_4;$_[5] = $memory_5;return $memory_13;
#line 338
undef($memory_13);
#line 338
goto label_60;
#line 338
label_60:
#line 338
undef($memory_12);
#line 339
$memory_12 = hash::get_value($memory_8, $memory_9);
#line 340
$memory_13 = ptd_system_priv::check_assignment_info($memory_10, $memory_12, $memory_2, $memory_3, $memory_4, $memory_5);
#line 341
$memory_14 = c_rt_lib::ov_is($memory_13, 'ok');
#line 341
if (c_rt_lib::check_true($memory_14)) {goto label_62;}
#line 342
$memory_14 = c_rt_lib::ov_is($memory_13, 'err');
#line 342
if (c_rt_lib::check_true($memory_14)) {goto label_63;}
#line 342
$memory_14 = "NOMATCHALERT";
#line 342
$memory_14 = [$memory_14,$memory_13];
#line 342
die(dfile::ssave($memory_14));
#line 341
label_62:
#line 342
goto label_61;
#line 342
label_63:
#line 342
$memory_15 = c_rt_lib::ov_as($memory_13, 'err');
#line 343
$memory_16 = "stack";
#line 343
$memory_16 = c_rt_lib::get_ref_hash($memory_15, $memory_16);
#line 343
$memory_17 = c_rt_lib::ov_mk_arg('ptd_rec', $memory_9);
#line 343
array::push($memory_16, $memory_17);
#line 343
undef($memory_17);
#line 343
$memory_17 = "stack";
#line 343
c_rt_lib::set_ref_hash($memory_15, $memory_17, $memory_16);
#line 343
undef($memory_17);
#line 343
undef($memory_16);
#line 344
$memory_16 = c_rt_lib::ov_mk_arg('err', $memory_15);
#line 344
undef($memory_0);
#line 344
undef($memory_1);
#line 344
undef($memory_2);
#line 344
undef($memory_3);
#line 344
undef($memory_6);
#line 344
undef($memory_7);
#line 344
undef($memory_8);
#line 344
undef($memory_9);
#line 344
undef($memory_10);
#line 344
undef($memory_11);
#line 344
undef($memory_12);
#line 344
undef($memory_13);
#line 344
undef($memory_14);
#line 344
undef($memory_15);
#line 344
$_[4] = $memory_4;$_[5] = $memory_5;return $memory_16;
#line 344
undef($memory_16);
#line 344
undef($memory_15);
#line 345
goto label_61;
#line 345
label_61:
#line 345
undef($memory_14);
#line 345
undef($memory_12);
#line 345
undef($memory_13);
#line 346
$memory_11 = c_rt_lib::next_iter($memory_11);
#line 346
goto label_58;
#line 346
label_56:
#line 346
undef($memory_9);
#line 346
undef($memory_10);
#line 346
undef($memory_11);
#line 347
$memory_9 = c_rt_lib::ov_mk_none('ok');
#line 347
undef($memory_0);
#line 347
undef($memory_1);
#line 347
undef($memory_2);
#line 347
undef($memory_3);
#line 347
undef($memory_6);
#line 347
undef($memory_7);
#line 347
undef($memory_8);
#line 347
$_[4] = $memory_4;$_[5] = $memory_5;return $memory_9;
#line 347
undef($memory_9);
#line 347
undef($memory_8);
#line 347
undef($memory_7);
#line 348
goto label_14;
#line 348
label_19:
#line 348
$memory_7 = c_rt_lib::ov_as($memory_0, 'tct_ref');
#line 349
$memory_8 = [];
#line 349
die(dfile::ssave($memory_8));
#line 349
undef($memory_8);
#line 349
undef($memory_7);
#line 350
goto label_14;
#line 350
label_20:
#line 351
$memory_7 = [];
#line 351
die(dfile::ssave($memory_7));
#line 351
undef($memory_7);
#line 352
goto label_14;
#line 352
label_21:
#line 353
$memory_8 = "tct_sim";
#line 353
$memory_7 = ov::is($memory_1, $memory_8);
#line 353
undef($memory_8);
#line 353
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 353
if (c_rt_lib::check_true($memory_7)) {goto label_65;}
#line 353
$memory_8 = c_rt_lib::ov_mk_none('ok');
#line 353
undef($memory_0);
#line 353
undef($memory_1);
#line 353
undef($memory_2);
#line 353
undef($memory_3);
#line 353
undef($memory_6);
#line 353
undef($memory_7);
#line 353
$_[4] = $memory_4;$_[5] = $memory_5;return $memory_8;
#line 353
undef($memory_8);
#line 353
goto label_65;
#line 353
label_65:
#line 353
undef($memory_7);
#line 354
$memory_7 = ptd_system_priv::mk_err($memory_0, $memory_1);
#line 354
undef($memory_0);
#line 354
undef($memory_1);
#line 354
undef($memory_2);
#line 354
undef($memory_3);
#line 354
undef($memory_6);
#line 354
$_[4] = $memory_4;$_[5] = $memory_5;return $memory_7;
#line 354
undef($memory_7);
#line 355
goto label_14;
#line 355
label_22:
#line 355
$memory_7 = c_rt_lib::ov_as($memory_0, 'tct_var');
#line 356
$memory_9 = "tct_var";
#line 356
$memory_8 = ov::is($memory_1, $memory_9);
#line 356
undef($memory_9);
#line 356
$memory_8 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 356
$memory_8 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 356
if (c_rt_lib::check_true($memory_8)) {goto label_67;}
#line 356
$memory_9 = ptd_system_priv::mk_err($memory_0, $memory_1);
#line 356
undef($memory_0);
#line 356
undef($memory_1);
#line 356
undef($memory_2);
#line 356
undef($memory_3);
#line 356
undef($memory_6);
#line 356
undef($memory_7);
#line 356
undef($memory_8);
#line 356
$_[4] = $memory_4;$_[5] = $memory_5;return $memory_9;
#line 356
undef($memory_9);
#line 356
goto label_67;
#line 356
label_67:
#line 356
undef($memory_8);
#line 357
$memory_8 = $memory_1;
#line 357
$memory_8 = c_rt_lib::ov_as($memory_8, 'tct_var');
#line 359
$memory_11 = c_rt_lib::init_iter($memory_8);
#line 359
label_70:
#line 359
$memory_9 = c_rt_lib::is_end_hash($memory_11);
#line 359
if (c_rt_lib::check_true($memory_9)) {goto label_68;}
#line 359
$memory_9 = c_rt_lib::get_key_iter($memory_11);
#line 359
$memory_10 = c_rt_lib::hash_get_value($memory_8, $memory_9);
#line 360
$memory_12 = hash::has_key($memory_7, $memory_9);
#line 360
$memory_12 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_12));
#line 360
$memory_12 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_12));
#line 360
if (c_rt_lib::check_true($memory_12)) {goto label_72;}
#line 360
$memory_13 = ptd_system_priv::mk_err($memory_0, $memory_1);
#line 360
undef($memory_0);
#line 360
undef($memory_1);
#line 360
undef($memory_2);
#line 360
undef($memory_3);
#line 360
undef($memory_6);
#line 360
undef($memory_7);
#line 360
undef($memory_8);
#line 360
undef($memory_9);
#line 360
undef($memory_10);
#line 360
undef($memory_11);
#line 360
undef($memory_12);
#line 360
$_[4] = $memory_4;$_[5] = $memory_5;return $memory_13;
#line 360
undef($memory_13);
#line 360
goto label_72;
#line 360
label_72:
#line 360
undef($memory_12);
#line 361
$memory_12 = hash::get_value($memory_7, $memory_9);
#line 362
$memory_13 = c_rt_lib::ov_is($memory_10, 'no_param');
#line 362
if (c_rt_lib::check_true($memory_13)) {goto label_74;}
#line 368
$memory_13 = c_rt_lib::ov_is($memory_10, 'with_param');
#line 368
if (c_rt_lib::check_true($memory_13)) {goto label_75;}
#line 368
$memory_13 = "NOMATCHALERT";
#line 368
$memory_13 = [$memory_13,$memory_10];
#line 368
die(dfile::ssave($memory_13));
#line 362
label_74:
#line 363
$memory_14 = c_rt_lib::ov_is($memory_12, 'no_param');
#line 363
if (c_rt_lib::check_true($memory_14)) {goto label_77;}
#line 365
$memory_14 = c_rt_lib::ov_is($memory_12, 'with_param');
#line 365
if (c_rt_lib::check_true($memory_14)) {goto label_78;}
#line 365
$memory_14 = "NOMATCHALERT";
#line 365
$memory_14 = [$memory_14,$memory_12];
#line 365
die(dfile::ssave($memory_14));
#line 363
label_77:
#line 364
undef($memory_12);
#line 364
undef($memory_13);
#line 364
undef($memory_14);
#line 364
goto label_69;
#line 365
goto label_76;
#line 365
label_78:
#line 365
$memory_15 = c_rt_lib::ov_as($memory_12, 'with_param');
#line 366
$memory_16 = ptd_system_priv::mk_err($memory_0, $memory_1);
#line 366
undef($memory_0);
#line 366
undef($memory_1);
#line 366
undef($memory_2);
#line 366
undef($memory_3);
#line 366
undef($memory_6);
#line 366
undef($memory_7);
#line 366
undef($memory_8);
#line 366
undef($memory_9);
#line 366
undef($memory_10);
#line 366
undef($memory_11);
#line 366
undef($memory_12);
#line 366
undef($memory_13);
#line 366
undef($memory_14);
#line 366
undef($memory_15);
#line 366
$_[4] = $memory_4;$_[5] = $memory_5;return $memory_16;
#line 366
undef($memory_16);
#line 366
undef($memory_15);
#line 367
goto label_76;
#line 367
label_76:
#line 367
undef($memory_14);
#line 368
goto label_73;
#line 368
label_75:
#line 368
$memory_14 = c_rt_lib::ov_as($memory_10, 'with_param');
#line 369
$memory_15 = c_rt_lib::ov_is($memory_12, 'no_param');
#line 369
if (c_rt_lib::check_true($memory_15)) {goto label_80;}
#line 371
$memory_15 = c_rt_lib::ov_is($memory_12, 'with_param');
#line 371
if (c_rt_lib::check_true($memory_15)) {goto label_81;}
#line 371
$memory_15 = "NOMATCHALERT";
#line 371
$memory_15 = [$memory_15,$memory_12];
#line 371
die(dfile::ssave($memory_15));
#line 369
label_80:
#line 370
$memory_16 = ptd_system_priv::mk_err($memory_0, $memory_1);
#line 370
undef($memory_0);
#line 370
undef($memory_1);
#line 370
undef($memory_2);
#line 370
undef($memory_3);
#line 370
undef($memory_6);
#line 370
undef($memory_7);
#line 370
undef($memory_8);
#line 370
undef($memory_9);
#line 370
undef($memory_10);
#line 370
undef($memory_11);
#line 370
undef($memory_12);
#line 370
undef($memory_13);
#line 370
undef($memory_14);
#line 370
undef($memory_15);
#line 370
$_[4] = $memory_4;$_[5] = $memory_5;return $memory_16;
#line 370
undef($memory_16);
#line 371
goto label_79;
#line 371
label_81:
#line 371
$memory_16 = c_rt_lib::ov_as($memory_12, 'with_param');
#line 372
$memory_17 = ptd_system_priv::check_assignment_info($memory_16, $memory_14, $memory_2, $memory_3, $memory_4, $memory_5);
#line 373
$memory_18 = c_rt_lib::ov_is($memory_17, 'ok');
#line 373
if (c_rt_lib::check_true($memory_18)) {goto label_83;}
#line 374
$memory_18 = c_rt_lib::ov_is($memory_17, 'err');
#line 374
if (c_rt_lib::check_true($memory_18)) {goto label_84;}
#line 374
$memory_18 = "NOMATCHALERT";
#line 374
$memory_18 = [$memory_18,$memory_17];
#line 374
die(dfile::ssave($memory_18));
#line 373
label_83:
#line 374
goto label_82;
#line 374
label_84:
#line 374
$memory_19 = c_rt_lib::ov_as($memory_17, 'err');
#line 375
$memory_20 = "stack";
#line 375
$memory_20 = c_rt_lib::get_ref_hash($memory_19, $memory_20);
#line 375
$memory_21 = c_rt_lib::ov_mk_arg('ptd_var', $memory_9);
#line 375
array::push($memory_20, $memory_21);
#line 375
undef($memory_21);
#line 375
$memory_21 = "stack";
#line 375
c_rt_lib::set_ref_hash($memory_19, $memory_21, $memory_20);
#line 375
undef($memory_21);
#line 375
undef($memory_20);
#line 376
$memory_20 = c_rt_lib::ov_mk_arg('err', $memory_19);
#line 376
undef($memory_0);
#line 376
undef($memory_1);
#line 376
undef($memory_2);
#line 376
undef($memory_3);
#line 376
undef($memory_6);
#line 376
undef($memory_7);
#line 376
undef($memory_8);
#line 376
undef($memory_9);
#line 376
undef($memory_10);
#line 376
undef($memory_11);
#line 376
undef($memory_12);
#line 376
undef($memory_13);
#line 376
undef($memory_14);
#line 376
undef($memory_15);
#line 376
undef($memory_16);
#line 376
undef($memory_17);
#line 376
undef($memory_18);
#line 376
undef($memory_19);
#line 376
$_[4] = $memory_4;$_[5] = $memory_5;return $memory_20;
#line 376
undef($memory_20);
#line 376
undef($memory_19);
#line 377
goto label_82;
#line 377
label_82:
#line 377
undef($memory_18);
#line 377
undef($memory_17);
#line 377
undef($memory_16);
#line 378
goto label_79;
#line 378
label_79:
#line 378
undef($memory_15);
#line 378
undef($memory_14);
#line 379
goto label_73;
#line 379
label_73:
#line 379
undef($memory_13);
#line 379
undef($memory_12);
#line 379
label_69:
#line 380
$memory_11 = c_rt_lib::next_iter($memory_11);
#line 380
goto label_70;
#line 380
label_68:
#line 380
undef($memory_9);
#line 380
undef($memory_10);
#line 380
undef($memory_11);
#line 381
$memory_9 = c_rt_lib::ov_mk_none('ok');
#line 381
undef($memory_0);
#line 381
undef($memory_1);
#line 381
undef($memory_2);
#line 381
undef($memory_3);
#line 381
undef($memory_6);
#line 381
undef($memory_7);
#line 381
undef($memory_8);
#line 381
$_[4] = $memory_4;$_[5] = $memory_5;return $memory_9;
#line 381
undef($memory_9);
#line 381
undef($memory_8);
#line 381
undef($memory_7);
#line 382
goto label_14;
#line 382
label_23:
#line 383
$memory_7 = [];
#line 383
die(dfile::ssave($memory_7));
#line 383
undef($memory_7);
#line 384
goto label_14;
#line 384
label_14:
#line 384
undef($memory_6);
#line 384
undef($memory_0);
#line 384
undef($memory_1);
#line 384
undef($memory_2);
#line 384
undef($memory_3);
#line 384
$_[4] = $memory_4;$_[5] = $memory_5;return;
$_[4] = $memory_4;$_[5] = $memory_5;}

sub ptd_system_priv::add_delete($$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;$memory_0 = $_[0];$memory_1 = $_[1];Scalar::Util::weaken($_[1]) if ref($_[1]);$memory_2 = $_[2];Scalar::Util::weaken($_[2]) if ref($_[2]);
#line 388
$memory_3 = "env";
#line 388
$memory_3 = c_rt_lib::get_ref_hash($memory_1, $memory_3);
#line 388
$memory_4 = "deref";
#line 388
$memory_4 = c_rt_lib::get_ref_hash($memory_3, $memory_4);
#line 388
$memory_5 = "delete";
#line 388
$memory_5 = c_rt_lib::get_ref_hash($memory_4, $memory_5);
#line 388
$memory_7 = $memory_2->{'current_line'};
#line 388
$memory_8 = $memory_1->{'env'};
#line 388
$memory_8 = $memory_8->{'current_module'};
#line 388
$memory_6 = {line => $memory_7,module => $memory_8,type_name => $memory_0,};
#line 388
undef($memory_7);
#line 388
undef($memory_8);
#line 388
array::push($memory_5, $memory_6);
#line 388
undef($memory_6);
#line 388
$memory_6 = "delete";
#line 388
c_rt_lib::set_ref_hash($memory_4, $memory_6, $memory_5);
#line 388
$memory_6 = "deref";
#line 388
c_rt_lib::set_ref_hash($memory_3, $memory_6, $memory_4);
#line 388
$memory_6 = "env";
#line 388
c_rt_lib::set_ref_hash($memory_1, $memory_6, $memory_3);
#line 388
undef($memory_6);
#line 388
undef($memory_3);
#line 388
undef($memory_4);
#line 388
undef($memory_5);
#line 388
undef($memory_0);
#line 388
$_[1] = $memory_1;$_[2] = $memory_2;return;
$_[1] = $memory_1;$_[2] = $memory_2;}

sub ptd_system_priv::add_create($$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;$memory_0 = $_[0];$memory_1 = $_[1];Scalar::Util::weaken($_[1]) if ref($_[1]);$memory_2 = $_[2];Scalar::Util::weaken($_[2]) if ref($_[2]);
#line 392
$memory_3 = "env";
#line 392
$memory_3 = c_rt_lib::get_ref_hash($memory_1, $memory_3);
#line 392
$memory_4 = "deref";
#line 392
$memory_4 = c_rt_lib::get_ref_hash($memory_3, $memory_4);
#line 392
$memory_5 = "create";
#line 392
$memory_5 = c_rt_lib::get_ref_hash($memory_4, $memory_5);
#line 392
$memory_7 = $memory_2->{'current_line'};
#line 392
$memory_8 = $memory_1->{'env'};
#line 392
$memory_8 = $memory_8->{'current_module'};
#line 392
$memory_6 = {line => $memory_7,module => $memory_8,type_name => $memory_0,};
#line 392
undef($memory_7);
#line 392
undef($memory_8);
#line 392
array::push($memory_5, $memory_6);
#line 392
undef($memory_6);
#line 392
$memory_6 = "create";
#line 392
c_rt_lib::set_ref_hash($memory_4, $memory_6, $memory_5);
#line 392
$memory_6 = "deref";
#line 392
c_rt_lib::set_ref_hash($memory_3, $memory_6, $memory_4);
#line 392
$memory_6 = "env";
#line 392
c_rt_lib::set_ref_hash($memory_1, $memory_6, $memory_3);
#line 392
undef($memory_6);
#line 392
undef($memory_3);
#line 392
undef($memory_4);
#line 392
undef($memory_5);
#line 392
undef($memory_0);
#line 392
$_[1] = $memory_1;$_[2] = $memory_2;return;
$_[1] = $memory_1;$_[2] = $memory_2;}

sub ptd_system::can_delete($$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;$memory_0 = $_[0];$memory_1 = $_[1];Scalar::Util::weaken($_[1]) if ref($_[1]);$memory_2 = $_[2];Scalar::Util::weaken($_[2]) if ref($_[2]);
#line 396
label_2:
#line 396
$memory_4 = $memory_0->{'type'};
#line 396
$memory_5 = "tct_ref";
#line 396
$memory_3 = ov::is($memory_4, $memory_5);
#line 396
undef($memory_5);
#line 396
undef($memory_4);
#line 396
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 396
if (c_rt_lib::check_true($memory_3)) {goto label_1;}
#line 397
$memory_4 = $memory_0->{'type'};
#line 397
$memory_4 = c_rt_lib::ov_as($memory_4, 'tct_ref');
#line 398
$memory_6 = $memory_0->{'src'};
#line 398
$memory_5 = ptd_system::is_known($memory_6);
#line 398
undef($memory_6);
#line 398
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 398
if (c_rt_lib::check_true($memory_5)) {goto label_4;}
#line 398
ptd_system_priv::add_delete($memory_4, $memory_1, $memory_2);
#line 398
goto label_4;
#line 398
label_4:
#line 398
undef($memory_5);
#line 399
$memory_5 = ptd_system::get_ref_type($memory_4, $memory_1, $memory_2);
#line 399
$memory_6 = $memory_5;
#line 399
 if (c_rt_lib::get_hashcount($memory_0) > 1) {$memory_0 = {%{$memory_0}};}$memory_0->{'type'} = $memory_6;
#line 399
undef($memory_5);
#line 399
undef($memory_6);
#line 399
undef($memory_4);
#line 400
goto label_2;
#line 400
label_1:
#line 400
undef($memory_3);
#line 401
$_[1] = $memory_1;$_[2] = $memory_2;return $memory_0;
#line 401
undef($memory_0);
#line 401
$_[1] = $memory_1;$_[2] = $memory_2;return;
$_[1] = $memory_1;$_[2] = $memory_2;}

sub ptd_system::can_create($$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;$memory_0 = $_[0];$memory_1 = $_[1];Scalar::Util::weaken($_[1]) if ref($_[1]);$memory_2 = $_[2];Scalar::Util::weaken($_[2]) if ref($_[2]);
#line 405
label_2:
#line 405
$memory_4 = $memory_0->{'type'};
#line 405
$memory_5 = "tct_ref";
#line 405
$memory_3 = ov::is($memory_4, $memory_5);
#line 405
undef($memory_5);
#line 405
undef($memory_4);
#line 405
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 405
if (c_rt_lib::check_true($memory_3)) {goto label_1;}
#line 406
$memory_4 = $memory_0->{'type'};
#line 406
$memory_4 = c_rt_lib::ov_as($memory_4, 'tct_ref');
#line 407
$memory_6 = $memory_0->{'src'};
#line 407
$memory_5 = ptd_system::is_known($memory_6);
#line 407
undef($memory_6);
#line 407
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 407
if (c_rt_lib::check_true($memory_5)) {goto label_4;}
#line 407
ptd_system_priv::add_create($memory_4, $memory_1, $memory_2);
#line 407
goto label_4;
#line 407
label_4:
#line 407
undef($memory_5);
#line 408
$memory_5 = ptd_system::get_ref_type($memory_4, $memory_1, $memory_2);
#line 408
$memory_6 = $memory_5;
#line 408
 if (c_rt_lib::get_hashcount($memory_0) > 1) {$memory_0 = {%{$memory_0}};}$memory_0->{'type'} = $memory_6;
#line 408
undef($memory_5);
#line 408
undef($memory_6);
#line 408
undef($memory_4);
#line 409
goto label_2;
#line 409
label_1:
#line 409
undef($memory_3);
#line 410
$_[1] = $memory_1;$_[2] = $memory_2;return $memory_0;
#line 410
undef($memory_0);
#line 410
$_[1] = $memory_1;$_[2] = $memory_2;return;
$_[1] = $memory_1;$_[2] = $memory_2;}

sub ptd_system_priv::walk_on_type($$$$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;my $memory_13;my $memory_14;my $memory_15;my $memory_16;my $memory_17;my $memory_18;my $memory_19;$memory_0 = $_[0];$memory_1 = $_[1];$memory_2 = $_[2];$memory_3 = $_[3];Scalar::Util::weaken($_[3]) if ref($_[3]);$memory_4 = $_[4];Scalar::Util::weaken($_[4]) if ref($_[4]);
#line 414
$memory_5 = {};
#line 415
ptd_system_priv::get_ref_in_type($memory_0, $memory_5);
#line 416
$memory_6 = $memory_5;
#line 417
$memory_9 = c_rt_lib::init_iter($memory_6);
#line 417
label_3:
#line 417
$memory_7 = c_rt_lib::is_end_hash($memory_9);
#line 417
if (c_rt_lib::check_true($memory_7)) {goto label_1;}
#line 417
$memory_7 = c_rt_lib::get_key_iter($memory_9);
#line 417
$memory_8 = c_rt_lib::hash_get_value($memory_6, $memory_7);
#line 418
$memory_10 = ptd_system_priv::get_function_def($memory_7, $memory_3, $memory_4);
#line 419
$memory_11 = array::len($memory_10);
#line 419
$memory_12 = 0;
#line 419
$memory_11 = c_rt_lib::to_nl($memory_11 == $memory_12);
#line 419
undef($memory_12);
#line 419
$memory_11 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_11));
#line 419
if (c_rt_lib::check_true($memory_11)) {goto label_5;}
#line 419
undef($memory_0);
#line 419
undef($memory_1);
#line 419
undef($memory_2);
#line 419
undef($memory_5);
#line 419
undef($memory_6);
#line 419
undef($memory_7);
#line 419
undef($memory_8);
#line 419
undef($memory_9);
#line 419
undef($memory_10);
#line 419
undef($memory_11);
#line 419
$_[3] = $memory_3;$_[4] = $memory_4;return;
#line 419
goto label_5;
#line 419
label_5:
#line 419
undef($memory_11);
#line 420
$memory_12 = 0;
#line 420
$memory_11 = $memory_10->[$memory_12];
#line 420
undef($memory_12);
#line 420
$memory_10 = $memory_11;
#line 420
undef($memory_11);
#line 421
$memory_11 = $memory_10->{'ref_types'};
#line 421
$memory_12 = c_rt_lib::ov_is($memory_11, 'yes');
#line 421
if (c_rt_lib::check_true($memory_12)) {goto label_7;}
#line 425
$memory_12 = c_rt_lib::ov_is($memory_11, 'no');
#line 425
if (c_rt_lib::check_true($memory_12)) {goto label_8;}
#line 425
$memory_12 = "NOMATCHALERT";
#line 425
$memory_12 = [$memory_12,$memory_11];
#line 425
die(dfile::ssave($memory_12));
#line 421
label_7:
#line 421
$memory_13 = c_rt_lib::ov_as($memory_11, 'yes');
#line 422
$memory_15 = 0;
#line 422
$memory_16 = 1;
#line 422
$memory_17 = c_rt_lib::array_len($memory_13);
#line 422
label_11:
#line 422
$memory_18 = c_rt_lib::to_nl($memory_15 >= $memory_17);
#line 422
if (c_rt_lib::check_true($memory_18)) {goto label_9;}
#line 422
$memory_14 = $memory_13->[$memory_15];
#line 423
$memory_19 = "";
#line 423
hash::set_value($memory_5, $memory_14, $memory_19);
#line 423
undef($memory_19);
#line 424
$memory_15 = $memory_15 + $memory_16;
#line 424
goto label_11;
#line 424
label_9:
#line 424
undef($memory_14);
#line 424
undef($memory_15);
#line 424
undef($memory_16);
#line 424
undef($memory_17);
#line 424
undef($memory_18);
#line 424
undef($memory_13);
#line 425
goto label_6;
#line 425
label_8:
#line 426
$memory_13 = ptd_system::get_ref_type($memory_7, $memory_3, $memory_4);
#line 426
$memory_0 = $memory_13;
#line 426
undef($memory_13);
#line 427
$memory_13 = {};
#line 428
ptd_system_priv::get_all_ref_in_type($memory_0, $memory_13, $memory_3, $memory_4);
#line 429
$memory_14 = [];
#line 430
$memory_17 = c_rt_lib::init_iter($memory_13);
#line 430
label_14:
#line 430
$memory_15 = c_rt_lib::is_end_hash($memory_17);
#line 430
if (c_rt_lib::check_true($memory_15)) {goto label_12;}
#line 430
$memory_15 = c_rt_lib::get_key_iter($memory_17);
#line 430
$memory_16 = c_rt_lib::hash_get_value($memory_13, $memory_15);
#line 431
$memory_18 = "";
#line 431
hash::set_value($memory_5, $memory_15, $memory_18);
#line 431
undef($memory_18);
#line 432
array::push($memory_14, $memory_15);
#line 433
$memory_17 = c_rt_lib::next_iter($memory_17);
#line 433
goto label_14;
#line 433
label_12:
#line 433
undef($memory_15);
#line 433
undef($memory_16);
#line 433
undef($memory_17);
#line 434
$memory_15 = ptd_system_priv::get_function_def($memory_7, $memory_3, $memory_4);
#line 434
$memory_16 = 0;
#line 434
$memory_15 = $memory_15->[$memory_16];
#line 434
undef($memory_16);
#line 434
$memory_10 = $memory_15;
#line 434
undef($memory_15);
#line 435
$memory_15 = c_rt_lib::ov_mk_arg('yes', $memory_14);
#line 435
$memory_16 = $memory_15;
#line 435
 if (c_rt_lib::get_hashcount($memory_10) > 1) {$memory_10 = {%{$memory_10}};}$memory_10->{'ref_types'} = $memory_16;
#line 435
undef($memory_15);
#line 435
undef($memory_16);
#line 436
$memory_16 = $memory_3->{'funs'};
#line 436
$memory_17 = $memory_10->{'module'};
#line 436
$memory_15 = hash::get_value($memory_16, $memory_17);
#line 436
undef($memory_17);
#line 436
undef($memory_16);
#line 437
$memory_16 = $memory_10->{'name'};
#line 437
hash::set_value($memory_15, $memory_16, $memory_10);
#line 437
undef($memory_16);
#line 438
$memory_16 = "funs";
#line 438
$memory_16 = c_rt_lib::get_ref_hash($memory_3, $memory_16);
#line 438
$memory_17 = $memory_10->{'module'};
#line 438
hash::set_value($memory_16, $memory_17, $memory_15);
#line 438
undef($memory_17);
#line 438
$memory_17 = "funs";
#line 438
c_rt_lib::set_ref_hash($memory_3, $memory_17, $memory_16);
#line 438
undef($memory_17);
#line 438
undef($memory_16);
#line 438
undef($memory_13);
#line 438
undef($memory_14);
#line 438
undef($memory_15);
#line 439
goto label_6;
#line 439
label_6:
#line 439
undef($memory_11);
#line 439
undef($memory_12);
#line 439
undef($memory_10);
#line 440
$memory_9 = c_rt_lib::next_iter($memory_9);
#line 440
goto label_3;
#line 440
label_1:
#line 440
undef($memory_7);
#line 440
undef($memory_8);
#line 440
undef($memory_9);
#line 441
$memory_9 = c_rt_lib::init_iter($memory_5);
#line 441
label_17:
#line 441
$memory_7 = c_rt_lib::is_end_hash($memory_9);
#line 441
if (c_rt_lib::check_true($memory_7)) {goto label_15;}
#line 441
$memory_7 = c_rt_lib::get_key_iter($memory_9);
#line 441
$memory_8 = c_rt_lib::hash_get_value($memory_5, $memory_7);
#line 442
$memory_10 = hash::has_key($memory_2, $memory_7);
#line 442
$memory_10 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_10));
#line 442
if (c_rt_lib::check_true($memory_10)) {goto label_19;}
#line 442
undef($memory_10);
#line 442
goto label_16;
#line 442
goto label_19;
#line 442
label_19:
#line 442
undef($memory_10);
#line 443
$memory_10 = c_rt_lib::ov_is($memory_1, 'create');
#line 443
if (c_rt_lib::check_true($memory_10)) {goto label_21;}
#line 445
$memory_10 = c_rt_lib::ov_is($memory_1, 'delete');
#line 445
if (c_rt_lib::check_true($memory_10)) {goto label_22;}
#line 445
$memory_10 = "NOMATCHALERT";
#line 445
$memory_10 = [$memory_10,$memory_1];
#line 445
die(dfile::ssave($memory_10));
#line 443
label_21:
#line 444
ptd_system_priv::add_create($memory_7, $memory_3, $memory_4);
#line 445
goto label_20;
#line 445
label_22:
#line 446
ptd_system_priv::add_delete($memory_7, $memory_3, $memory_4);
#line 447
goto label_20;
#line 447
label_20:
#line 447
undef($memory_10);
#line 447
label_16:
#line 448
$memory_9 = c_rt_lib::next_iter($memory_9);
#line 448
goto label_17;
#line 448
label_15:
#line 448
undef($memory_7);
#line 448
undef($memory_8);
#line 448
undef($memory_9);
#line 448
undef($memory_5);
#line 448
undef($memory_6);
#line 448
undef($memory_0);
#line 448
undef($memory_1);
#line 448
undef($memory_2);
#line 448
$_[3] = $memory_3;$_[4] = $memory_4;return;
$_[3] = $memory_3;$_[4] = $memory_4;}

sub ptd_system_priv::get_all_ref_in_type($$$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;$memory_0 = $_[0];$memory_1 = $_[1];Scalar::Util::weaken($_[1]) if ref($_[1]);$memory_2 = $_[2];Scalar::Util::weaken($_[2]) if ref($_[2]);$memory_3 = $_[3];Scalar::Util::weaken($_[3]) if ref($_[3]);
#line 452
$memory_4 = {};
#line 453
ptd_system_priv::get_ref_in_type($memory_0, $memory_4);
#line 454
$memory_7 = c_rt_lib::init_iter($memory_4);
#line 454
label_3:
#line 454
$memory_5 = c_rt_lib::is_end_hash($memory_7);
#line 454
if (c_rt_lib::check_true($memory_5)) {goto label_1;}
#line 454
$memory_5 = c_rt_lib::get_key_iter($memory_7);
#line 454
$memory_6 = c_rt_lib::hash_get_value($memory_4, $memory_5);
#line 455
$memory_8 = hash::has_key($memory_1, $memory_5);
#line 455
$memory_8 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 455
if (c_rt_lib::check_true($memory_8)) {goto label_5;}
#line 455
undef($memory_8);
#line 455
goto label_2;
#line 455
goto label_5;
#line 455
label_5:
#line 455
undef($memory_8);
#line 456
$memory_8 = "";
#line 456
hash::set_value($memory_1, $memory_5, $memory_8);
#line 456
undef($memory_8);
#line 457
$memory_8 = ptd_system::get_ref_type($memory_5, $memory_2, $memory_3);
#line 457
$memory_0 = $memory_8;
#line 457
undef($memory_8);
#line 458
ptd_system_priv::get_all_ref_in_type($memory_0, $memory_1, $memory_2, $memory_3);
#line 458
label_2:
#line 459
$memory_7 = c_rt_lib::next_iter($memory_7);
#line 459
goto label_3;
#line 459
label_1:
#line 459
undef($memory_5);
#line 459
undef($memory_6);
#line 459
undef($memory_7);
#line 459
undef($memory_4);
#line 459
undef($memory_0);
#line 459
$_[1] = $memory_1;$_[2] = $memory_2;$_[3] = $memory_3;return;
$_[1] = $memory_1;$_[2] = $memory_2;$_[3] = $memory_3;}

sub ptd_system_priv::get_ref_in_type($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;$memory_0 = $_[0];$memory_1 = $_[1];Scalar::Util::weaken($_[1]) if ref($_[1]);
#line 462
$memory_2 = c_rt_lib::ov_is($memory_0, 'tct_im');
#line 462
if (c_rt_lib::check_true($memory_2)) {goto label_2;}
#line 463
$memory_2 = c_rt_lib::ov_is($memory_0, 'tct_arr');
#line 463
if (c_rt_lib::check_true($memory_2)) {goto label_3;}
#line 465
$memory_2 = c_rt_lib::ov_is($memory_0, 'tct_hash');
#line 465
if (c_rt_lib::check_true($memory_2)) {goto label_4;}
#line 467
$memory_2 = c_rt_lib::ov_is($memory_0, 'tct_rec');
#line 467
if (c_rt_lib::check_true($memory_2)) {goto label_5;}
#line 471
$memory_2 = c_rt_lib::ov_is($memory_0, 'tct_ref');
#line 471
if (c_rt_lib::check_true($memory_2)) {goto label_6;}
#line 473
$memory_2 = c_rt_lib::ov_is($memory_0, 'tct_void');
#line 473
if (c_rt_lib::check_true($memory_2)) {goto label_7;}
#line 474
$memory_2 = c_rt_lib::ov_is($memory_0, 'tct_sim');
#line 474
if (c_rt_lib::check_true($memory_2)) {goto label_8;}
#line 475
$memory_2 = c_rt_lib::ov_is($memory_0, 'tct_var');
#line 475
if (c_rt_lib::check_true($memory_2)) {goto label_9;}
#line 482
$memory_2 = c_rt_lib::ov_is($memory_0, 'tct_empty');
#line 482
if (c_rt_lib::check_true($memory_2)) {goto label_10;}
#line 482
$memory_2 = "NOMATCHALERT";
#line 482
$memory_2 = [$memory_2,$memory_0];
#line 482
die(dfile::ssave($memory_2));
#line 462
label_2:
#line 463
goto label_1;
#line 463
label_3:
#line 463
$memory_3 = c_rt_lib::ov_as($memory_0, 'tct_arr');
#line 464
ptd_system_priv::get_ref_in_type($memory_3, $memory_1);
#line 464
undef($memory_3);
#line 465
goto label_1;
#line 465
label_4:
#line 465
$memory_3 = c_rt_lib::ov_as($memory_0, 'tct_hash');
#line 466
ptd_system_priv::get_ref_in_type($memory_3, $memory_1);
#line 466
undef($memory_3);
#line 467
goto label_1;
#line 467
label_5:
#line 467
$memory_3 = c_rt_lib::ov_as($memory_0, 'tct_rec');
#line 468
$memory_6 = c_rt_lib::init_iter($memory_3);
#line 468
label_13:
#line 468
$memory_4 = c_rt_lib::is_end_hash($memory_6);
#line 468
if (c_rt_lib::check_true($memory_4)) {goto label_11;}
#line 468
$memory_4 = c_rt_lib::get_key_iter($memory_6);
#line 468
$memory_5 = c_rt_lib::hash_get_value($memory_3, $memory_4);
#line 469
ptd_system_priv::get_ref_in_type($memory_5, $memory_1);
#line 470
$memory_6 = c_rt_lib::next_iter($memory_6);
#line 470
goto label_13;
#line 470
label_11:
#line 470
undef($memory_4);
#line 470
undef($memory_5);
#line 470
undef($memory_6);
#line 470
undef($memory_3);
#line 471
goto label_1;
#line 471
label_6:
#line 471
$memory_3 = c_rt_lib::ov_as($memory_0, 'tct_ref');
#line 472
$memory_4 = "";
#line 472
hash::set_value($memory_1, $memory_3, $memory_4);
#line 472
undef($memory_4);
#line 472
undef($memory_3);
#line 473
goto label_1;
#line 473
label_7:
#line 474
goto label_1;
#line 474
label_8:
#line 475
goto label_1;
#line 475
label_9:
#line 475
$memory_3 = c_rt_lib::ov_as($memory_0, 'tct_var');
#line 476
$memory_6 = c_rt_lib::init_iter($memory_3);
#line 476
label_16:
#line 476
$memory_4 = c_rt_lib::is_end_hash($memory_6);
#line 476
if (c_rt_lib::check_true($memory_4)) {goto label_14;}
#line 476
$memory_4 = c_rt_lib::get_key_iter($memory_6);
#line 476
$memory_5 = c_rt_lib::hash_get_value($memory_3, $memory_4);
#line 477
$memory_7 = c_rt_lib::ov_is($memory_5, 'no_param');
#line 477
if (c_rt_lib::check_true($memory_7)) {goto label_18;}
#line 478
$memory_7 = c_rt_lib::ov_is($memory_5, 'with_param');
#line 478
if (c_rt_lib::check_true($memory_7)) {goto label_19;}
#line 478
$memory_7 = "NOMATCHALERT";
#line 478
$memory_7 = [$memory_7,$memory_5];
#line 478
die(dfile::ssave($memory_7));
#line 477
label_18:
#line 478
goto label_17;
#line 478
label_19:
#line 478
$memory_8 = c_rt_lib::ov_as($memory_5, 'with_param');
#line 479
ptd_system_priv::get_ref_in_type($memory_8, $memory_1);
#line 479
undef($memory_8);
#line 480
goto label_17;
#line 480
label_17:
#line 480
undef($memory_7);
#line 481
$memory_6 = c_rt_lib::next_iter($memory_6);
#line 481
goto label_16;
#line 481
label_14:
#line 481
undef($memory_4);
#line 481
undef($memory_5);
#line 481
undef($memory_6);
#line 481
undef($memory_3);
#line 482
goto label_1;
#line 482
label_10:
#line 483
goto label_1;
#line 483
label_1:
#line 483
undef($memory_2);
#line 483
undef($memory_0);
#line 483
$_[1] = $memory_1;return;
$_[1] = $memory_1;}

sub ptd_system_priv::get_function_def($$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;$memory_0 = $_[0];$memory_1 = $_[1];Scalar::Util::weaken($_[1]) if ref($_[1]);$memory_2 = $_[2];Scalar::Util::weaken($_[2]) if ref($_[2]);
#line 489
$memory_6 = "::";
#line 489
$memory_5 = string::index2($memory_0, $memory_6);
#line 489
undef($memory_6);
#line 490
$memory_6 = 0;
#line 490
$memory_6 = c_rt_lib::to_nl($memory_5 >= $memory_6);
#line 490
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 490
if (c_rt_lib::check_true($memory_6)) {goto label_2;}
#line 491
$memory_8 = 0;
#line 491
$memory_7 = string::substr($memory_0, $memory_8, $memory_5);
#line 491
undef($memory_8);
#line 491
$memory_3 = $memory_7;
#line 491
undef($memory_7);
#line 492
$memory_8 = 2;
#line 492
$memory_8 = $memory_5 + $memory_8;
#line 492
$memory_9 = string::length($memory_0);
#line 492
$memory_9 = $memory_9 - $memory_5;
#line 492
$memory_10 = 2;
#line 492
$memory_9 = $memory_9 - $memory_10;
#line 492
undef($memory_10);
#line 492
$memory_7 = string::substr($memory_0, $memory_8, $memory_9);
#line 492
undef($memory_9);
#line 492
undef($memory_8);
#line 492
$memory_4 = $memory_7;
#line 492
undef($memory_7);
#line 493
goto label_1;
#line 493
label_2:
#line 494
$memory_7 = "wrong type name `";
#line 494
$memory_7 = $memory_7 . $memory_0;
#line 494
$memory_8 = "' ";
#line 494
$memory_7 = $memory_7 . $memory_8;
#line 494
undef($memory_8);
#line 494
ptd_system_priv::add_error($memory_2, $memory_7);
#line 494
undef($memory_7);
#line 495
$memory_7 = [];
#line 495
undef($memory_0);
#line 495
undef($memory_3);
#line 495
undef($memory_4);
#line 495
undef($memory_5);
#line 495
undef($memory_6);
#line 495
$_[1] = $memory_1;$_[2] = $memory_2;return $memory_7;
#line 495
undef($memory_7);
#line 496
goto label_1;
#line 496
label_1:
#line 496
undef($memory_6);
#line 497
$memory_7 = $memory_1->{'funs'};
#line 497
$memory_6 = hash::has_key($memory_7, $memory_3);
#line 497
undef($memory_7);
#line 497
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 497
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 497
if (c_rt_lib::check_true($memory_6)) {goto label_4;}
#line 498
$memory_7 = [];
#line 498
undef($memory_0);
#line 498
undef($memory_3);
#line 498
undef($memory_4);
#line 498
undef($memory_5);
#line 498
undef($memory_6);
#line 498
$_[1] = $memory_1;$_[2] = $memory_2;return $memory_7;
#line 498
undef($memory_7);
#line 499
goto label_4;
#line 499
label_4:
#line 499
undef($memory_6);
#line 501
$memory_7 = $memory_1->{'funs'};
#line 501
$memory_6 = hash::get_value($memory_7, $memory_3);
#line 501
undef($memory_7);
#line 502
$memory_7 = hash::has_key($memory_6, $memory_4);
#line 502
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 502
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 502
if (c_rt_lib::check_true($memory_7)) {goto label_6;}
#line 503
$memory_8 = "function `";
#line 503
$memory_8 = $memory_8 . $memory_0;
#line 503
$memory_9 = "' does not exist";
#line 503
$memory_8 = $memory_8 . $memory_9;
#line 503
undef($memory_9);
#line 503
ptd_system_priv::add_error($memory_2, $memory_8);
#line 503
undef($memory_8);
#line 504
$memory_8 = [];
#line 504
undef($memory_0);
#line 504
undef($memory_3);
#line 504
undef($memory_4);
#line 504
undef($memory_5);
#line 504
undef($memory_6);
#line 504
undef($memory_7);
#line 504
$_[1] = $memory_1;$_[2] = $memory_2;return $memory_8;
#line 504
undef($memory_8);
#line 505
goto label_6;
#line 505
label_6:
#line 505
undef($memory_7);
#line 507
$memory_8 = hash::get_value($memory_6, $memory_4);
#line 507
$memory_7 = [$memory_8];
#line 507
undef($memory_8);
#line 507
undef($memory_0);
#line 507
undef($memory_3);
#line 507
undef($memory_4);
#line 507
undef($memory_5);
#line 507
undef($memory_6);
#line 507
$_[1] = $memory_1;$_[2] = $memory_2;return $memory_7;
#line 507
undef($memory_7);
#line 507
undef($memory_3);
#line 507
undef($memory_4);
#line 507
undef($memory_5);
#line 507
undef($memory_6);
#line 507
undef($memory_0);
#line 507
$_[1] = $memory_1;$_[2] = $memory_2;return;
$_[1] = $memory_1;$_[2] = $memory_2;}

sub ptd_system::get_ref_type($$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;$memory_0 = $_[0];$memory_1 = $_[1];Scalar::Util::weaken($_[1]) if ref($_[1]);$memory_2 = $_[2];Scalar::Util::weaken($_[2]) if ref($_[2]);
#line 511
$memory_3 = ptd_system_priv::get_function_def($memory_0, $memory_1, $memory_2);
#line 512
$memory_4 = array::len($memory_3);
#line 512
$memory_5 = 0;
#line 512
$memory_4 = c_rt_lib::to_nl($memory_4 == $memory_5);
#line 512
undef($memory_5);
#line 512
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 512
if (c_rt_lib::check_true($memory_4)) {goto label_2;}
#line 512
$memory_5 = tct::tct_im();
#line 512
undef($memory_0);
#line 512
undef($memory_3);
#line 512
undef($memory_4);
#line 512
$_[1] = $memory_1;$_[2] = $memory_2;return $memory_5;
#line 512
undef($memory_5);
#line 512
goto label_2;
#line 512
label_2:
#line 512
undef($memory_4);
#line 513
$memory_5 = 0;
#line 513
$memory_4 = $memory_3->[$memory_5];
#line 513
undef($memory_5);
#line 513
$memory_3 = $memory_4;
#line 513
undef($memory_4);
#line 514
$memory_5 = $memory_1->{'funs'};
#line 514
$memory_6 = $memory_3->{'module'};
#line 514
$memory_4 = hash::get_value($memory_5, $memory_6);
#line 514
undef($memory_6);
#line 514
undef($memory_5);
#line 515
$memory_5 = $memory_3->{'is_type'};
#line 515
$memory_6 = c_rt_lib::ov_is($memory_5, 'yes');
#line 515
if (c_rt_lib::check_true($memory_6)) {goto label_4;}
#line 517
$memory_6 = c_rt_lib::ov_is($memory_5, 'no');
#line 517
if (c_rt_lib::check_true($memory_6)) {goto label_5;}
#line 517
$memory_6 = "NOMATCHALERT";
#line 517
$memory_6 = [$memory_6,$memory_5];
#line 517
die(dfile::ssave($memory_6));
#line 515
label_4:
#line 515
$memory_7 = c_rt_lib::ov_as($memory_5, 'yes');
#line 516
undef($memory_0);
#line 516
undef($memory_3);
#line 516
undef($memory_4);
#line 516
undef($memory_5);
#line 516
undef($memory_6);
#line 516
$_[1] = $memory_1;$_[2] = $memory_2;return $memory_7;
#line 516
undef($memory_7);
#line 517
goto label_3;
#line 517
label_5:
#line 518
goto label_3;
#line 518
label_3:
#line 518
undef($memory_5);
#line 518
undef($memory_6);
#line 519
$memory_5 = tct::tct_im();
#line 520
$memory_7 = $memory_3->{'cmd'};
#line 520
$memory_6 = ptd_parser::fun_def_to_ptd($memory_7);
#line 520
undef($memory_7);
#line 520
$memory_7 = c_rt_lib::ov_is($memory_6, 'err');
#line 520
if (c_rt_lib::check_true($memory_7)) {goto label_7;}
#line 522
$memory_7 = c_rt_lib::ov_is($memory_6, 'ok');
#line 522
if (c_rt_lib::check_true($memory_7)) {goto label_8;}
#line 522
$memory_7 = "NOMATCHALERT";
#line 522
$memory_7 = [$memory_7,$memory_6];
#line 522
die(dfile::ssave($memory_7));
#line 520
label_7:
#line 520
$memory_8 = c_rt_lib::ov_as($memory_6, 'err');
#line 521
ptd_system_priv::add_error($memory_2, $memory_8);
#line 521
undef($memory_8);
#line 522
goto label_6;
#line 522
label_8:
#line 522
$memory_8 = c_rt_lib::ov_as($memory_6, 'ok');
#line 523
$memory_5 = $memory_8;
#line 523
undef($memory_8);
#line 524
goto label_6;
#line 524
label_6:
#line 524
undef($memory_6);
#line 524
undef($memory_7);
#line 525
$memory_6 = c_rt_lib::ov_mk_arg('yes', $memory_5);
#line 525
$memory_7 = $memory_6;
#line 525
 if (c_rt_lib::get_hashcount($memory_3) > 1) {$memory_3 = {%{$memory_3}};}$memory_3->{'is_type'} = $memory_7;
#line 525
undef($memory_6);
#line 525
undef($memory_7);
#line 526
$memory_6 = $memory_3->{'name'};
#line 526
hash::set_value($memory_4, $memory_6, $memory_3);
#line 526
undef($memory_6);
#line 527
$memory_6 = "funs";
#line 527
$memory_6 = c_rt_lib::get_ref_hash($memory_1, $memory_6);
#line 527
$memory_7 = $memory_3->{'module'};
#line 527
hash::set_value($memory_6, $memory_7, $memory_4);
#line 527
undef($memory_7);
#line 527
$memory_7 = "funs";
#line 527
c_rt_lib::set_ref_hash($memory_1, $memory_7, $memory_6);
#line 527
undef($memory_7);
#line 527
undef($memory_6);
#line 528
undef($memory_0);
#line 528
undef($memory_3);
#line 528
undef($memory_4);
#line 528
$_[1] = $memory_1;$_[2] = $memory_2;return $memory_5;
#line 528
undef($memory_3);
#line 528
undef($memory_4);
#line 528
undef($memory_5);
#line 528
undef($memory_0);
#line 528
$_[1] = $memory_1;$_[2] = $memory_2;return;
$_[1] = $memory_1;$_[2] = $memory_2;}
