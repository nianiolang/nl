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
sub ptd_system::try_get_ensure_sub_types;
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
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];
#line 17
$memory_2 = "errors";
#line 17
$memory_2 = c_rt_lib::get_ref_hash($memory_0, $memory_2);
#line 17
$memory_4 = $memory_0->{'current_line'};
#line 17
$memory_5 = $memory_0->{'module'};
#line 17
$memory_6 = 1;
#line 17
$memory_6 = -$memory_6;
#line 17
$memory_7 = c_rt_lib::ov_mk_none('error');
#line 17
$memory_3 = {message => $memory_1,line => $memory_4,module => $memory_5,column => $memory_6,type => $memory_7,};
#line 17
undef($memory_4);
#line 17
undef($memory_5);
#line 17
undef($memory_6);
#line 17
undef($memory_7);
#line 17
array::push($memory_2, $memory_3);
#line 17
undef($memory_3);
#line 17
$memory_3 = "errors";
#line 17
c_rt_lib::set_ref_hash($memory_0, $memory_3, $memory_2);
#line 17
undef($memory_3);
#line 17
undef($memory_2);
#line 17
undef($memory_1);
#line 17
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub ptd_system::is_known($) {
my $memory_0;my $memory_1;$memory_0 = $_[0];
#line 21
$memory_1 = $memory_0;
#line 21
$memory_1 = c_rt_lib::ov_is($memory_1, 'known');
#line 21
if (c_rt_lib::check_true($memory_1)) {goto label_5;}
#line 21
$memory_1 = $memory_0;
#line 21
$memory_1 = c_rt_lib::ov_is($memory_1, 'knownhash');
#line 21
label_5:
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

sub ptd_system::is_equal($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;$memory_0 = $_[0];$memory_1 = $_[1];
#line 25
$memory_2 = ov::get_element($memory_0);
#line 25
$memory_3 = ov::get_element($memory_1);
#line 25
$memory_2 = c_rt_lib::to_nl($memory_2 eq $memory_3);
#line 25
undef($memory_3);
#line 25
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 25
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 25
if (c_rt_lib::check_true($memory_2)) {goto label_14;}
#line 25
$memory_3 = c_rt_lib::to_nl(0);
#line 25
undef($memory_0);
#line 25
undef($memory_1);
#line 25
undef($memory_2);
#line 25
return $memory_3;
#line 25
undef($memory_3);
#line 25
goto label_14;
#line 25
label_14:
#line 25
undef($memory_2);
#line 26
$memory_2 = c_rt_lib::ov_is($memory_0, 'tct_im');
#line 26
if (c_rt_lib::check_true($memory_2)) {goto label_37;}
#line 27
$memory_2 = c_rt_lib::ov_is($memory_0, 'tct_arr');
#line 27
if (c_rt_lib::check_true($memory_2)) {goto label_39;}
#line 29
$memory_2 = c_rt_lib::ov_is($memory_0, 'tct_hash');
#line 29
if (c_rt_lib::check_true($memory_2)) {goto label_53;}
#line 31
$memory_2 = c_rt_lib::ov_is($memory_0, 'tct_rec');
#line 31
if (c_rt_lib::check_true($memory_2)) {goto label_67;}
#line 37
$memory_2 = c_rt_lib::ov_is($memory_0, 'tct_ref');
#line 37
if (c_rt_lib::check_true($memory_2)) {goto label_147;}
#line 39
$memory_2 = c_rt_lib::ov_is($memory_0, 'tct_sim');
#line 39
if (c_rt_lib::check_true($memory_2)) {goto label_168;}
#line 40
$memory_2 = c_rt_lib::ov_is($memory_0, 'tct_var');
#line 40
if (c_rt_lib::check_true($memory_2)) {goto label_170;}
#line 49
$memory_2 = c_rt_lib::ov_is($memory_0, 'tct_empty');
#line 49
if (c_rt_lib::check_true($memory_2)) {goto label_300;}
#line 50
$memory_2 = c_rt_lib::ov_is($memory_0, 'tct_void');
#line 50
if (c_rt_lib::check_true($memory_2)) {goto label_302;}
#line 50
$memory_2 = "NOMATCHALERT";
#line 50
$memory_2 = [$memory_2,$memory_0];
#line 50
die(dfile::ssave($memory_2));
#line 26
label_37:
#line 27
goto label_304;
#line 27
label_39:
#line 27
$memory_3 = c_rt_lib::ov_as($memory_0, 'tct_arr');
#line 28
$memory_5 = $memory_1;
#line 28
$memory_5 = c_rt_lib::ov_as($memory_5, 'tct_arr');
#line 28
$memory_4 = ptd_system::is_equal($memory_3, $memory_5);
#line 28
undef($memory_5);
#line 28
undef($memory_0);
#line 28
undef($memory_1);
#line 28
undef($memory_2);
#line 28
undef($memory_3);
#line 28
return $memory_4;
#line 28
undef($memory_4);
#line 28
undef($memory_3);
#line 29
goto label_304;
#line 29
label_53:
#line 29
$memory_3 = c_rt_lib::ov_as($memory_0, 'tct_hash');
#line 30
$memory_5 = $memory_1;
#line 30
$memory_5 = c_rt_lib::ov_as($memory_5, 'tct_hash');
#line 30
$memory_4 = ptd_system::is_equal($memory_3, $memory_5);
#line 30
undef($memory_5);
#line 30
undef($memory_0);
#line 30
undef($memory_1);
#line 30
undef($memory_2);
#line 30
undef($memory_3);
#line 30
return $memory_4;
#line 30
undef($memory_4);
#line 30
undef($memory_3);
#line 31
goto label_304;
#line 31
label_67:
#line 31
$memory_3 = c_rt_lib::ov_as($memory_0, 'tct_rec');
#line 32
$memory_5 = $memory_1;
#line 32
$memory_5 = c_rt_lib::ov_as($memory_5, 'tct_rec');
#line 32
$memory_4 = hash::size($memory_5);
#line 32
undef($memory_5);
#line 32
$memory_5 = hash::size($memory_3);
#line 32
$memory_4 = c_rt_lib::to_nl($memory_4 != $memory_5);
#line 32
undef($memory_5);
#line 32
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 32
if (c_rt_lib::check_true($memory_4)) {goto label_87;}
#line 32
$memory_5 = c_rt_lib::to_nl(0);
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
return $memory_5;
#line 32
undef($memory_5);
#line 32
goto label_87;
#line 32
label_87:
#line 32
undef($memory_4);
#line 33
$memory_6 = c_rt_lib::init_iter($memory_3);
#line 33
label_90:
#line 33
$memory_4 = c_rt_lib::is_end_hash($memory_6);
#line 33
if (c_rt_lib::check_true($memory_4)) {goto label_141;}
#line 33
$memory_4 = c_rt_lib::get_key_iter($memory_6);
#line 33
$memory_5 = c_rt_lib::hash_get_value($memory_3, $memory_4);
#line 34
$memory_8 = $memory_1;
#line 34
$memory_8 = c_rt_lib::ov_as($memory_8, 'tct_rec');
#line 34
$memory_7 = hash::has_key($memory_8, $memory_4);
#line 34
undef($memory_8);
#line 34
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 34
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 34
if (c_rt_lib::check_true($memory_7)) {goto label_114;}
#line 34
$memory_8 = c_rt_lib::to_nl(0);
#line 34
undef($memory_0);
#line 34
undef($memory_1);
#line 34
undef($memory_2);
#line 34
undef($memory_3);
#line 34
undef($memory_4);
#line 34
undef($memory_5);
#line 34
undef($memory_6);
#line 34
undef($memory_7);
#line 34
return $memory_8;
#line 34
undef($memory_8);
#line 34
goto label_114;
#line 34
label_114:
#line 34
undef($memory_7);
#line 35
$memory_9 = $memory_1;
#line 35
$memory_9 = c_rt_lib::ov_as($memory_9, 'tct_rec');
#line 35
$memory_8 = hash::get_value($memory_9, $memory_4);
#line 35
undef($memory_9);
#line 35
$memory_7 = ptd_system::is_equal($memory_5, $memory_8);
#line 35
undef($memory_8);
#line 35
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 35
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 35
if (c_rt_lib::check_true($memory_7)) {goto label_137;}
#line 35
$memory_8 = c_rt_lib::to_nl(0);
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
undef($memory_5);
#line 35
undef($memory_6);
#line 35
undef($memory_7);
#line 35
return $memory_8;
#line 35
undef($memory_8);
#line 35
goto label_137;
#line 35
label_137:
#line 35
undef($memory_7);
#line 36
$memory_6 = c_rt_lib::next_iter($memory_6);
#line 36
goto label_90;
#line 36
label_141:
#line 36
undef($memory_4);
#line 36
undef($memory_5);
#line 36
undef($memory_6);
#line 36
undef($memory_3);
#line 37
goto label_304;
#line 37
label_147:
#line 37
$memory_3 = c_rt_lib::ov_as($memory_0, 'tct_ref');
#line 38
$memory_4 = $memory_1;
#line 38
$memory_4 = c_rt_lib::ov_as($memory_4, 'tct_ref');
#line 38
$memory_4 = c_rt_lib::to_nl($memory_3 eq $memory_4);
#line 38
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 38
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 38
if (c_rt_lib::check_true($memory_4)) {goto label_164;}
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
goto label_164;
#line 38
label_164:
#line 38
undef($memory_4);
#line 38
undef($memory_3);
#line 39
goto label_304;
#line 39
label_168:
#line 40
goto label_304;
#line 40
label_170:
#line 40
$memory_3 = c_rt_lib::ov_as($memory_0, 'tct_var');
#line 41
$memory_5 = $memory_1;
#line 41
$memory_5 = c_rt_lib::ov_as($memory_5, 'tct_var');
#line 41
$memory_4 = hash::size($memory_5);
#line 41
undef($memory_5);
#line 41
$memory_5 = hash::size($memory_3);
#line 41
$memory_4 = c_rt_lib::to_nl($memory_4 != $memory_5);
#line 41
undef($memory_5);
#line 41
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 41
if (c_rt_lib::check_true($memory_4)) {goto label_190;}
#line 41
$memory_5 = c_rt_lib::to_nl(0);
#line 41
undef($memory_0);
#line 41
undef($memory_1);
#line 41
undef($memory_2);
#line 41
undef($memory_3);
#line 41
undef($memory_4);
#line 41
return $memory_5;
#line 41
undef($memory_5);
#line 41
goto label_190;
#line 41
label_190:
#line 41
undef($memory_4);
#line 42
$memory_6 = c_rt_lib::init_iter($memory_3);
#line 42
label_193:
#line 42
$memory_4 = c_rt_lib::is_end_hash($memory_6);
#line 42
if (c_rt_lib::check_true($memory_4)) {goto label_294;}
#line 42
$memory_4 = c_rt_lib::get_key_iter($memory_6);
#line 42
$memory_5 = c_rt_lib::hash_get_value($memory_3, $memory_4);
#line 43
$memory_8 = $memory_1;
#line 43
$memory_8 = c_rt_lib::ov_as($memory_8, 'tct_var');
#line 43
$memory_7 = hash::has_key($memory_8, $memory_4);
#line 43
undef($memory_8);
#line 43
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 43
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 43
if (c_rt_lib::check_true($memory_7)) {goto label_217;}
#line 43
$memory_8 = c_rt_lib::to_nl(0);
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
return $memory_8;
#line 43
undef($memory_8);
#line 43
goto label_217;
#line 43
label_217:
#line 43
undef($memory_7);
#line 44
$memory_8 = $memory_1;
#line 44
$memory_8 = c_rt_lib::ov_as($memory_8, 'tct_var');
#line 44
$memory_7 = hash::get_value($memory_8, $memory_4);
#line 44
undef($memory_8);
#line 45
$memory_8 = $memory_5;
#line 45
$memory_8 = c_rt_lib::ov_is($memory_8, 'no_param');
#line 45
$memory_9 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 45
if (c_rt_lib::check_true($memory_9)) {goto label_229;}
#line 45
$memory_8 = $memory_7;
#line 45
$memory_8 = c_rt_lib::ov_is($memory_8, 'no_param');
#line 45
label_229:
#line 45
undef($memory_9);
#line 45
$memory_8 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 45
if (c_rt_lib::check_true($memory_8)) {goto label_237;}
#line 45
undef($memory_7);
#line 45
undef($memory_8);
#line 45
goto label_291;
#line 45
goto label_237;
#line 45
label_237:
#line 45
undef($memory_8);
#line 46
$memory_8 = $memory_5;
#line 46
$memory_8 = c_rt_lib::ov_is($memory_8, 'with_param');
#line 46
$memory_9 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 46
if (c_rt_lib::check_true($memory_9)) {goto label_245;}
#line 46
$memory_8 = $memory_7;
#line 46
$memory_8 = c_rt_lib::ov_is($memory_8, 'with_param');
#line 46
label_245:
#line 46
undef($memory_9);
#line 46
$memory_8 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 46
$memory_8 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 46
if (c_rt_lib::check_true($memory_8)) {goto label_263;}
#line 46
$memory_9 = c_rt_lib::to_nl(0);
#line 46
undef($memory_0);
#line 46
undef($memory_1);
#line 46
undef($memory_2);
#line 46
undef($memory_3);
#line 46
undef($memory_4);
#line 46
undef($memory_5);
#line 46
undef($memory_6);
#line 46
undef($memory_7);
#line 46
undef($memory_8);
#line 46
return $memory_9;
#line 46
undef($memory_9);
#line 46
goto label_263;
#line 46
label_263:
#line 46
undef($memory_8);
#line 47
$memory_9 = $memory_7;
#line 47
$memory_9 = c_rt_lib::ov_as($memory_9, 'with_param');
#line 47
$memory_10 = $memory_5;
#line 47
$memory_10 = c_rt_lib::ov_as($memory_10, 'with_param');
#line 47
$memory_8 = ptd_system::is_equal($memory_9, $memory_10);
#line 47
undef($memory_10);
#line 47
undef($memory_9);
#line 47
$memory_8 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 47
$memory_8 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 47
if (c_rt_lib::check_true($memory_8)) {goto label_288;}
#line 47
$memory_9 = c_rt_lib::to_nl(0);
#line 47
undef($memory_0);
#line 47
undef($memory_1);
#line 47
undef($memory_2);
#line 47
undef($memory_3);
#line 47
undef($memory_4);
#line 47
undef($memory_5);
#line 47
undef($memory_6);
#line 47
undef($memory_7);
#line 47
undef($memory_8);
#line 47
return $memory_9;
#line 47
undef($memory_9);
#line 47
goto label_288;
#line 47
label_288:
#line 47
undef($memory_8);
#line 47
undef($memory_7);
#line 47
label_291:
#line 48
$memory_6 = c_rt_lib::next_iter($memory_6);
#line 48
goto label_193;
#line 48
label_294:
#line 48
undef($memory_4);
#line 48
undef($memory_5);
#line 48
undef($memory_6);
#line 48
undef($memory_3);
#line 49
goto label_304;
#line 49
label_300:
#line 50
goto label_304;
#line 50
label_302:
#line 51
goto label_304;
#line 51
label_304:
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
#line 57
$memory_6 = tct::tct_im();
#line 57
$memory_7 = tct::tct_im();
#line 57
$memory_5 = {ok => $memory_6,err => $memory_7,};
#line 57
undef($memory_6);
#line 57
undef($memory_7);
#line 57
$memory_4 = tct::var($memory_5);
#line 57
undef($memory_5);
#line 57
$memory_3 = ptd_system::is_accepted($memory_0, $memory_4, $memory_1, $memory_2);
#line 57
undef($memory_4);
#line 57
undef($memory_0);
#line 57
$_[1] = $memory_1;$_[2] = $memory_2;return $memory_3;
#line 57
undef($memory_3);
#line 57
undef($memory_0);
#line 57
$_[1] = $memory_1;$_[2] = $memory_2;return;
$_[1] = $memory_1;$_[2] = $memory_2;}

sub ptd_system::try_get_ensure_sub_types($$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;$memory_0 = $_[0];$memory_1 = $_[1];Scalar::Util::weaken($_[1]) if ref($_[1]);$memory_2 = $_[2];Scalar::Util::weaken($_[2]) if ref($_[2]);
#line 62
$memory_4 = tct::tct_im();
#line 62
$memory_5 = tct::tct_im();
#line 62
$memory_3 = {ok => $memory_4,err => $memory_5,};
#line 62
undef($memory_4);
#line 62
undef($memory_5);
#line 63
$memory_4 = ptd_system::can_delete($memory_0, $memory_1, $memory_2);
#line 63
$memory_0 = $memory_4;
#line 63
undef($memory_4);
#line 64
$memory_4 = ptd_system::is_try_ensure_type($memory_0, $memory_1, $memory_2);
#line 64
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 64
if (c_rt_lib::check_true($memory_4)) {goto label_105;}
#line 65
$memory_5 = $memory_0->{'type'};
#line 65
$memory_5 = c_rt_lib::ov_is($memory_5, 'tct_im');
#line 65
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 65
if (c_rt_lib::check_true($memory_5)) {goto label_20;}
#line 65
undef($memory_0);
#line 65
undef($memory_4);
#line 65
undef($memory_5);
#line 65
$_[1] = $memory_1;$_[2] = $memory_2;return $memory_3;
#line 65
goto label_20;
#line 65
label_20:
#line 65
undef($memory_5);
#line 66
$memory_6 = tct::empty();
#line 66
$memory_7 = tct::empty();
#line 66
$memory_5 = {ok => $memory_6,err => $memory_7,};
#line 66
undef($memory_6);
#line 66
undef($memory_7);
#line 66
$memory_3 = $memory_5;
#line 66
undef($memory_5);
#line 67
$memory_5 = $memory_0->{'type'};
#line 67
$memory_5 = c_rt_lib::ov_is($memory_5, 'tct_var');
#line 67
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 67
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 67
if (c_rt_lib::check_true($memory_5)) {goto label_39;}
#line 67
undef($memory_0);
#line 67
undef($memory_4);
#line 67
undef($memory_5);
#line 67
$_[1] = $memory_1;$_[2] = $memory_2;return $memory_3;
#line 67
goto label_39;
#line 67
label_39:
#line 67
undef($memory_5);
#line 68
$memory_5 = $memory_0->{'type'};
#line 68
$memory_5 = c_rt_lib::ov_as($memory_5, 'tct_var');
#line 69
$memory_7 = "ok";
#line 69
$memory_6 = hash::has_key($memory_5, $memory_7);
#line 69
undef($memory_7);
#line 69
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 69
if (c_rt_lib::check_true($memory_6)) {goto label_71;}
#line 70
$memory_8 = "ok";
#line 70
$memory_7 = hash::get_value($memory_5, $memory_8);
#line 70
undef($memory_8);
#line 71
$memory_8 = c_rt_lib::ov_is($memory_7, 'no_param');
#line 71
if (c_rt_lib::check_true($memory_8)) {goto label_58;}
#line 72
$memory_8 = c_rt_lib::ov_is($memory_7, 'with_param');
#line 72
if (c_rt_lib::check_true($memory_8)) {goto label_60;}
#line 72
$memory_8 = "NOMATCHALERT";
#line 72
$memory_8 = [$memory_8,$memory_7];
#line 72
die(dfile::ssave($memory_8));
#line 71
label_58:
#line 72
goto label_67;
#line 72
label_60:
#line 72
$memory_9 = c_rt_lib::ov_as($memory_7, 'with_param');
#line 73
$memory_10 = $memory_9;
#line 73
 if (c_rt_lib::get_hashcount($memory_3) > 1) {$memory_3 = {%{$memory_3}};}$memory_3->{'ok'} = $memory_10;
#line 73
undef($memory_10);
#line 73
undef($memory_9);
#line 74
goto label_67;
#line 74
label_67:
#line 74
undef($memory_8);
#line 74
undef($memory_7);
#line 75
goto label_71;
#line 75
label_71:
#line 75
undef($memory_6);
#line 76
$memory_7 = "err";
#line 76
$memory_6 = hash::has_key($memory_5, $memory_7);
#line 76
undef($memory_7);
#line 76
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 76
if (c_rt_lib::check_true($memory_6)) {goto label_101;}
#line 77
$memory_8 = "err";
#line 77
$memory_7 = hash::get_value($memory_5, $memory_8);
#line 77
undef($memory_8);
#line 78
$memory_8 = c_rt_lib::ov_is($memory_7, 'no_param');
#line 78
if (c_rt_lib::check_true($memory_8)) {goto label_88;}
#line 79
$memory_8 = c_rt_lib::ov_is($memory_7, 'with_param');
#line 79
if (c_rt_lib::check_true($memory_8)) {goto label_90;}
#line 79
$memory_8 = "NOMATCHALERT";
#line 79
$memory_8 = [$memory_8,$memory_7];
#line 79
die(dfile::ssave($memory_8));
#line 78
label_88:
#line 79
goto label_97;
#line 79
label_90:
#line 79
$memory_9 = c_rt_lib::ov_as($memory_7, 'with_param');
#line 80
$memory_10 = $memory_9;
#line 80
 if (c_rt_lib::get_hashcount($memory_3) > 1) {$memory_3 = {%{$memory_3}};}$memory_3->{'err'} = $memory_10;
#line 80
undef($memory_10);
#line 80
undef($memory_9);
#line 81
goto label_97;
#line 81
label_97:
#line 81
undef($memory_8);
#line 81
undef($memory_7);
#line 82
goto label_101;
#line 82
label_101:
#line 82
undef($memory_6);
#line 82
undef($memory_5);
#line 83
goto label_110;
#line 83
label_105:
#line 84
$memory_5 = "in try|ensure expr; expr must be variant: ok|err";
#line 84
ptd_system_priv::add_error($memory_2, $memory_5);
#line 84
undef($memory_5);
#line 85
goto label_110;
#line 85
label_110:
#line 85
undef($memory_4);
#line 86
undef($memory_0);
#line 86
$_[1] = $memory_1;$_[2] = $memory_2;return $memory_3;
#line 86
undef($memory_3);
#line 86
undef($memory_0);
#line 86
$_[1] = $memory_1;$_[2] = $memory_2;return;
$_[1] = $memory_1;$_[2] = $memory_2;}

sub ptd_system::is_condition_type($$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;$memory_0 = $_[0];$memory_1 = $_[1];Scalar::Util::weaken($_[1]) if ref($_[1]);$memory_2 = $_[2];Scalar::Util::weaken($_[2]) if ref($_[2]);
#line 91
$memory_4 = tct::bool();
#line 91
$memory_3 = ptd_system::is_accepted($memory_0, $memory_4, $memory_1, $memory_2);
#line 91
undef($memory_4);
#line 91
undef($memory_0);
#line 91
$_[1] = $memory_1;$_[2] = $memory_2;return $memory_3;
#line 91
undef($memory_3);
#line 91
undef($memory_0);
#line 91
$_[1] = $memory_1;$_[2] = $memory_2;return;
$_[1] = $memory_1;$_[2] = $memory_2;}

sub ptd_system::is_accepted($$$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;$memory_0 = $_[0];$memory_1 = $_[1];$memory_2 = $_[2];Scalar::Util::weaken($_[2]) if ref($_[2]);$memory_3 = $_[3];Scalar::Util::weaken($_[3]) if ref($_[3]);
#line 96
$memory_4 = ptd_system::is_accepted_info($memory_0, $memory_1, $memory_2, $memory_3);
#line 97
$memory_5 = $memory_4;
#line 97
$memory_5 = c_rt_lib::ov_is($memory_5, 'ok');
#line 97
undef($memory_0);
#line 97
undef($memory_1);
#line 97
undef($memory_4);
#line 97
$_[2] = $memory_2;$_[3] = $memory_3;return $memory_5;
#line 97
undef($memory_5);
#line 97
undef($memory_4);
#line 97
undef($memory_0);
#line 97
undef($memory_1);
#line 97
$_[2] = $memory_2;$_[3] = $memory_3;return;
$_[2] = $memory_2;$_[3] = $memory_3;}

sub ptd_system::is_accepted_info($$$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;$memory_0 = $_[0];$memory_1 = $_[1];$memory_2 = $_[2];Scalar::Util::weaken($_[2]) if ref($_[2]);$memory_3 = $_[3];Scalar::Util::weaken($_[3]) if ref($_[3]);
#line 102
$memory_4 = ptd_system::can_delete($memory_0, $memory_2, $memory_3);
#line 102
$memory_0 = $memory_4;
#line 102
undef($memory_4);
#line 103
$memory_4 = $memory_0->{'type'};
#line 103
$memory_4 = c_rt_lib::ov_is($memory_4, 'tct_im');
#line 103
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 103
if (c_rt_lib::check_true($memory_4)) {goto label_14;}
#line 103
$memory_5 = c_rt_lib::ov_mk_none('ok');
#line 103
undef($memory_0);
#line 103
undef($memory_1);
#line 103
undef($memory_4);
#line 103
$_[2] = $memory_2;$_[3] = $memory_3;return $memory_5;
#line 103
undef($memory_5);
#line 103
goto label_14;
#line 103
label_14:
#line 103
undef($memory_4);
#line 104
$memory_4 = $memory_1;
#line 104
$memory_4 = c_rt_lib::ov_is($memory_4, 'tct_rec');
#line 104
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 104
if (c_rt_lib::check_true($memory_4)) {goto label_46;}
#line 105
$memory_7 = $memory_1;
#line 105
$memory_7 = c_rt_lib::ov_as($memory_7, 'tct_rec');
#line 105
$memory_5 = hash::size($memory_7);
#line 105
undef($memory_7);
#line 105
$memory_7 = 0;
#line 105
$memory_5 = c_rt_lib::to_nl($memory_5 == $memory_7);
#line 105
undef($memory_7);
#line 105
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 105
if (c_rt_lib::check_true($memory_6)) {goto label_31;}
#line 105
$memory_5 = $memory_0->{'type'};
#line 105
$memory_5 = c_rt_lib::ov_is($memory_5, 'tct_rec');
#line 105
label_31:
#line 105
undef($memory_6);
#line 105
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 105
if (c_rt_lib::check_true($memory_5)) {goto label_43;}
#line 105
$memory_6 = c_rt_lib::ov_mk_none('ok');
#line 105
undef($memory_0);
#line 105
undef($memory_1);
#line 105
undef($memory_4);
#line 105
undef($memory_5);
#line 105
$_[2] = $memory_2;$_[3] = $memory_3;return $memory_6;
#line 105
undef($memory_6);
#line 105
goto label_43;
#line 105
label_43:
#line 105
undef($memory_5);
#line 106
goto label_77;
#line 106
label_46:
#line 106
$memory_4 = $memory_1;
#line 106
$memory_4 = c_rt_lib::ov_is($memory_4, 'tct_var');
#line 106
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 106
if (c_rt_lib::check_true($memory_4)) {goto label_77;}
#line 107
$memory_7 = $memory_1;
#line 107
$memory_7 = c_rt_lib::ov_as($memory_7, 'tct_var');
#line 107
$memory_5 = hash::size($memory_7);
#line 107
undef($memory_7);
#line 107
$memory_7 = 0;
#line 107
$memory_5 = c_rt_lib::to_nl($memory_5 == $memory_7);
#line 107
undef($memory_7);
#line 107
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 107
if (c_rt_lib::check_true($memory_6)) {goto label_62;}
#line 107
$memory_5 = $memory_0->{'type'};
#line 107
$memory_5 = c_rt_lib::ov_is($memory_5, 'tct_var');
#line 107
label_62:
#line 107
undef($memory_6);
#line 107
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 107
if (c_rt_lib::check_true($memory_5)) {goto label_74;}
#line 107
$memory_6 = c_rt_lib::ov_mk_none('ok');
#line 107
undef($memory_0);
#line 107
undef($memory_1);
#line 107
undef($memory_4);
#line 107
undef($memory_5);
#line 107
$_[2] = $memory_2;$_[3] = $memory_3;return $memory_6;
#line 107
undef($memory_6);
#line 107
goto label_74;
#line 107
label_74:
#line 107
undef($memory_5);
#line 108
goto label_77;
#line 108
label_77:
#line 108
undef($memory_4);
#line 109
$memory_5 = 1;
#line 109
$memory_6 = {};
#line 109
$memory_7 = {};
#line 109
$memory_8 = c_rt_lib::to_nl(0);
#line 109
$memory_9 = c_rt_lib::to_nl(0);
#line 109
$memory_4 = {level => $memory_5,from => $memory_6,to => $memory_7,check => $memory_8,cast => $memory_9,};
#line 109
undef($memory_5);
#line 109
undef($memory_6);
#line 109
undef($memory_7);
#line 109
undef($memory_8);
#line 109
undef($memory_9);
#line 110
$memory_6 = $memory_0->{'type'};
#line 110
$memory_7 = $memory_0->{'src'};
#line 110
$memory_5 = ptd_system_priv::check_assignment_info($memory_1, $memory_6, $memory_4, $memory_7, $memory_2, $memory_3);
#line 110
undef($memory_7);
#line 110
undef($memory_6);
#line 110
undef($memory_0);
#line 110
undef($memory_1);
#line 110
undef($memory_4);
#line 110
$_[2] = $memory_2;$_[3] = $memory_3;return $memory_5;
#line 110
undef($memory_5);
#line 110
undef($memory_4);
#line 110
undef($memory_0);
#line 110
undef($memory_1);
#line 110
$_[2] = $memory_2;$_[3] = $memory_3;return;
$_[2] = $memory_2;$_[3] = $memory_3;}

sub ptd_system_priv::add_ref_name($$$$$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];Scalar::Util::weaken($_[1]) if ref($_[1]);$memory_2 = $_[2];Scalar::Util::weaken($_[2]) if ref($_[2]);$memory_3 = $_[3];$memory_4 = $_[4];Scalar::Util::weaken($_[4]) if ref($_[4]);$memory_5 = $_[5];Scalar::Util::weaken($_[5]) if ref($_[5]);
#line 115
$memory_6 = $memory_0;
#line 115
$memory_6 = c_rt_lib::ov_as($memory_6, 'tct_ref');
#line 116
$memory_7 = hash::has_key($memory_1, $memory_6);
#line 116
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 116
if (c_rt_lib::check_true($memory_7)) {goto label_9;}
#line 116
$memory_8 = hash::get_value($memory_1, $memory_6);
#line 116
$memory_2 = $memory_8;
#line 116
undef($memory_8);
#line 116
goto label_9;
#line 116
label_9:
#line 116
undef($memory_7);
#line 117
array::push($memory_2, $memory_3);
#line 118
hash::set_value($memory_1, $memory_6, $memory_2);
#line 119
$memory_7 = ptd_system::get_ref_type($memory_6, $memory_4, $memory_5);
#line 119
$memory_0 = $memory_7;
#line 119
undef($memory_7);
#line 120
undef($memory_3);
#line 120
$_[0] = $memory_0;$_[1] = $memory_1;$_[2] = $memory_2;$_[4] = $memory_4;$_[5] = $memory_5;return $memory_6;
#line 120
undef($memory_6);
#line 120
undef($memory_3);
#line 120
$_[0] = $memory_0;$_[1] = $memory_1;$_[2] = $memory_2;$_[4] = $memory_4;$_[5] = $memory_5;return;
$_[0] = $memory_0;$_[1] = $memory_1;$_[2] = $memory_2;$_[4] = $memory_4;$_[5] = $memory_5;}

sub ptd_system_priv::is_cycle_ref($$$$$$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;my $memory_13;my $memory_14;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];Scalar::Util::weaken($_[1]) if ref($_[1]);$memory_2 = $_[2];Scalar::Util::weaken($_[2]) if ref($_[2]);$memory_3 = $_[3];$memory_4 = $_[4];$memory_5 = $_[5];Scalar::Util::weaken($_[5]) if ref($_[5]);$memory_6 = $_[6];Scalar::Util::weaken($_[6]) if ref($_[6]);
#line 126
$memory_7 = $memory_0;
#line 126
$memory_7 = c_rt_lib::ov_is($memory_7, 'tct_ref');
#line 126
$memory_8 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 126
if (c_rt_lib::check_true($memory_8)) {goto label_6;}
#line 126
$memory_7 = $memory_1;
#line 126
$memory_7 = c_rt_lib::ov_is($memory_7, 'tct_ref');
#line 126
label_6:
#line 126
undef($memory_8);
#line 126
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 126
if (c_rt_lib::check_true($memory_7)) {goto label_50;}
#line 127
$memory_8 = $memory_0;
#line 127
$memory_8 = c_rt_lib::ov_as($memory_8, 'tct_ref');
#line 127
$memory_9 = $memory_1;
#line 127
$memory_9 = c_rt_lib::ov_as($memory_9, 'tct_ref');
#line 127
$memory_8 = c_rt_lib::to_nl($memory_8 eq $memory_9);
#line 127
undef($memory_9);
#line 127
$memory_8 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 127
if (c_rt_lib::check_true($memory_8)) {goto label_26;}
#line 127
$memory_9 = c_rt_lib::to_nl(1);
#line 127
undef($memory_3);
#line 127
undef($memory_4);
#line 127
undef($memory_7);
#line 127
undef($memory_8);
#line 127
$_[0] = $memory_0;$_[1] = $memory_1;$_[2] = $memory_2;$_[5] = $memory_5;$_[6] = $memory_6;return $memory_9;
#line 127
undef($memory_9);
#line 127
goto label_26;
#line 127
label_26:
#line 127
undef($memory_8);
#line 128
$memory_8 = $memory_3;
#line 128
$memory_9 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 128
if (c_rt_lib::check_true($memory_9)) {goto label_35;}
#line 128
$memory_10 = c_rt_lib::ov_mk_none('speculation');
#line 128
$memory_8 = ptd_system_priv::check_assignment_info($memory_0, $memory_1, $memory_2, $memory_10, $memory_5, $memory_6);
#line 128
undef($memory_10);
#line 128
$memory_8 = c_rt_lib::ov_is($memory_8, 'ok');
#line 128
label_35:
#line 128
undef($memory_9);
#line 128
$memory_8 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 128
if (c_rt_lib::check_true($memory_8)) {goto label_47;}
#line 128
$memory_9 = c_rt_lib::to_nl(1);
#line 128
undef($memory_3);
#line 128
undef($memory_4);
#line 128
undef($memory_7);
#line 128
undef($memory_8);
#line 128
$_[0] = $memory_0;$_[1] = $memory_1;$_[2] = $memory_2;$_[5] = $memory_5;$_[6] = $memory_6;return $memory_9;
#line 128
undef($memory_9);
#line 128
goto label_47;
#line 128
label_47:
#line 128
undef($memory_8);
#line 129
goto label_50;
#line 129
label_50:
#line 129
undef($memory_7);
#line 130
$memory_7 = [];
#line 131
$memory_8 = [];
#line 132
label_54:
#line 132
$memory_9 = $memory_1;
#line 132
$memory_9 = c_rt_lib::ov_is($memory_9, 'tct_ref');
#line 132
$memory_9 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_9));
#line 132
if (c_rt_lib::check_true($memory_9)) {goto label_90;}
#line 133
$memory_11 = "from";
#line 133
$memory_11 = c_rt_lib::get_ref_hash($memory_2, $memory_11);
#line 133
$memory_12 = $memory_2->{'level'};
#line 133
$memory_10 = ptd_system_priv::add_ref_name($memory_1, $memory_11, $memory_8, $memory_12, $memory_5, $memory_6);
#line 133
undef($memory_12);
#line 133
$memory_12 = "from";
#line 133
c_rt_lib::set_ref_hash($memory_2, $memory_12, $memory_11);
#line 133
undef($memory_12);
#line 133
undef($memory_11);
#line 134
$memory_11 = $memory_2->{'check'};
#line 134
$memory_13 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_11));
#line 134
if (c_rt_lib::check_true($memory_13)) {goto label_75;}
#line 134
$memory_11 = array::len($memory_8);
#line 134
$memory_14 = 1;
#line 134
$memory_11 = c_rt_lib::to_nl($memory_11 == $memory_14);
#line 134
undef($memory_14);
#line 134
label_75:
#line 134
undef($memory_13);
#line 134
$memory_12 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_11));
#line 134
if (c_rt_lib::check_true($memory_12)) {goto label_80;}
#line 134
$memory_11 = $memory_4;
#line 134
label_80:
#line 134
undef($memory_12);
#line 134
$memory_11 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_11));
#line 134
if (c_rt_lib::check_true($memory_11)) {goto label_86;}
#line 134
ptd_system_priv::add_delete($memory_10, $memory_5, $memory_6);
#line 134
goto label_86;
#line 134
label_86:
#line 134
undef($memory_11);
#line 134
undef($memory_10);
#line 135
goto label_54;
#line 135
label_90:
#line 135
undef($memory_9);
#line 136
$memory_9 = $memory_2->{'cast'};
#line 136
$memory_9 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_9));
#line 136
if (c_rt_lib::check_true($memory_9)) {goto label_123;}
#line 137
$memory_10 = $memory_1;
#line 137
$memory_10 = c_rt_lib::ov_is($memory_10, 'tct_im');
#line 137
$memory_10 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_10));
#line 137
if (c_rt_lib::check_true($memory_10)) {goto label_120;}
#line 138
$memory_11 = $memory_2->{'check'};
#line 138
$memory_11 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_11));
#line 138
if (c_rt_lib::check_true($memory_11)) {goto label_108;}
#line 138
$memory_12 = c_rt_lib::ov_mk_none('create');
#line 138
$memory_13 = $memory_2->{'to'};
#line 138
ptd_system_priv::walk_on_type($memory_0, $memory_12, $memory_13, $memory_5, $memory_6);
#line 138
undef($memory_13);
#line 138
undef($memory_12);
#line 138
goto label_108;
#line 138
label_108:
#line 138
undef($memory_11);
#line 139
$memory_11 = c_rt_lib::to_nl(1);
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
undef($memory_10);
#line 139
$_[0] = $memory_0;$_[1] = $memory_1;$_[2] = $memory_2;$_[5] = $memory_5;$_[6] = $memory_6;return $memory_11;
#line 139
undef($memory_11);
#line 140
goto label_120;
#line 140
label_120:
#line 140
undef($memory_10);
#line 141
goto label_123;
#line 141
label_123:
#line 141
undef($memory_9);
#line 142
label_125:
#line 142
$memory_9 = $memory_0;
#line 142
$memory_9 = c_rt_lib::ov_is($memory_9, 'tct_ref');
#line 142
$memory_9 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_9));
#line 142
if (c_rt_lib::check_true($memory_9)) {goto label_156;}
#line 143
$memory_11 = "to";
#line 143
$memory_11 = c_rt_lib::get_ref_hash($memory_2, $memory_11);
#line 143
$memory_12 = $memory_2->{'level'};
#line 143
$memory_10 = ptd_system_priv::add_ref_name($memory_0, $memory_11, $memory_7, $memory_12, $memory_5, $memory_6);
#line 143
undef($memory_12);
#line 143
$memory_12 = "to";
#line 143
c_rt_lib::set_ref_hash($memory_2, $memory_12, $memory_11);
#line 143
undef($memory_12);
#line 143
undef($memory_11);
#line 144
$memory_11 = $memory_2->{'check'};
#line 144
$memory_12 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_11));
#line 144
if (c_rt_lib::check_true($memory_12)) {goto label_146;}
#line 144
$memory_11 = array::len($memory_7);
#line 144
$memory_13 = 1;
#line 144
$memory_11 = c_rt_lib::to_nl($memory_11 == $memory_13);
#line 144
undef($memory_13);
#line 144
label_146:
#line 144
undef($memory_12);
#line 144
$memory_11 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_11));
#line 144
if (c_rt_lib::check_true($memory_11)) {goto label_152;}
#line 144
ptd_system_priv::add_create($memory_10, $memory_5, $memory_6);
#line 144
goto label_152;
#line 144
label_152:
#line 144
undef($memory_11);
#line 144
undef($memory_10);
#line 145
goto label_125;
#line 145
label_156:
#line 145
undef($memory_9);
#line 146
$memory_9 = 0;
#line 147
$memory_10 = 0;
#line 147
label_160:
#line 147
$memory_11 = array::len($memory_7);
#line 147
$memory_13 = 1;
#line 147
$memory_11 = $memory_11 - $memory_13;
#line 147
undef($memory_13);
#line 147
$memory_11 = c_rt_lib::to_nl($memory_10 < $memory_11);
#line 147
$memory_12 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_11));
#line 147
if (c_rt_lib::check_true($memory_12)) {goto label_172;}
#line 147
$memory_11 = array::len($memory_8);
#line 147
$memory_13 = 0;
#line 147
$memory_11 = c_rt_lib::to_nl($memory_11 > $memory_13);
#line 147
undef($memory_13);
#line 147
label_172:
#line 147
undef($memory_12);
#line 147
$memory_11 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_11));
#line 147
if (c_rt_lib::check_true($memory_11)) {goto label_213;}
#line 148
label_176:
#line 148
$memory_12 = $memory_8->[$memory_9];
#line 148
$memory_13 = $memory_7->[$memory_10];
#line 148
$memory_12 = c_rt_lib::to_nl($memory_12 < $memory_13);
#line 148
undef($memory_13);
#line 148
$memory_12 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_12));
#line 148
if (c_rt_lib::check_true($memory_12)) {goto label_187;}
#line 149
$memory_13 = 1;
#line 149
$memory_9 = $memory_9 + $memory_13;
#line 149
undef($memory_13);
#line 150
goto label_176;
#line 150
label_187:
#line 150
undef($memory_12);
#line 151
$memory_12 = $memory_8->[$memory_9];
#line 151
$memory_13 = $memory_7->[$memory_10];
#line 151
$memory_12 = c_rt_lib::to_nl($memory_12 == $memory_13);
#line 151
undef($memory_13);
#line 151
$memory_12 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_12));
#line 151
if (c_rt_lib::check_true($memory_12)) {goto label_207;}
#line 151
$memory_13 = c_rt_lib::to_nl(1);
#line 151
undef($memory_3);
#line 151
undef($memory_4);
#line 151
undef($memory_7);
#line 151
undef($memory_8);
#line 151
undef($memory_9);
#line 151
undef($memory_10);
#line 151
undef($memory_11);
#line 151
undef($memory_12);
#line 151
$_[0] = $memory_0;$_[1] = $memory_1;$_[2] = $memory_2;$_[5] = $memory_5;$_[6] = $memory_6;return $memory_13;
#line 151
undef($memory_13);
#line 151
goto label_207;
#line 151
label_207:
#line 151
undef($memory_12);
#line 147
$memory_12 = 1;
#line 147
$memory_10 = $memory_10 + $memory_12;
#line 147
undef($memory_12);
#line 152
goto label_160;
#line 152
label_213:
#line 152
undef($memory_10);
#line 152
undef($memory_11);
#line 153
$memory_10 = 1;
#line 153
$memory_11 = "level";
#line 153
$memory_11 = c_rt_lib::get_ref_hash($memory_2, $memory_11);
#line 153
$memory_11 = $memory_11 + $memory_10;
#line 153
$memory_12 = "level";
#line 153
c_rt_lib::set_ref_hash($memory_2, $memory_12, $memory_11);
#line 153
undef($memory_12);
#line 153
undef($memory_10);
#line 153
undef($memory_11);
#line 154
$memory_10 = c_rt_lib::to_nl(0);
#line 154
undef($memory_3);
#line 154
undef($memory_4);
#line 154
undef($memory_7);
#line 154
undef($memory_8);
#line 154
undef($memory_9);
#line 154
$_[0] = $memory_0;$_[1] = $memory_1;$_[2] = $memory_2;$_[5] = $memory_5;$_[6] = $memory_6;return $memory_10;
#line 154
undef($memory_10);
#line 154
undef($memory_7);
#line 154
undef($memory_8);
#line 154
undef($memory_9);
#line 154
undef($memory_3);
#line 154
undef($memory_4);
#line 154
$_[0] = $memory_0;$_[1] = $memory_1;$_[2] = $memory_2;$_[5] = $memory_5;$_[6] = $memory_6;return;
$_[0] = $memory_0;$_[1] = $memory_1;$_[2] = $memory_2;$_[5] = $memory_5;$_[6] = $memory_6;}

sub ptd_system::cross_type($$$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;$memory_0 = $_[0];$memory_1 = $_[1];$memory_2 = $_[2];Scalar::Util::weaken($_[2]) if ref($_[2]);$memory_3 = $_[3];Scalar::Util::weaken($_[3]) if ref($_[3]);
#line 159
$memory_5 = 1;
#line 159
$memory_6 = {};
#line 159
$memory_7 = {};
#line 159
$memory_8 = c_rt_lib::to_nl(0);
#line 159
$memory_9 = c_rt_lib::to_nl(0);
#line 159
$memory_4 = {level => $memory_5,from => $memory_6,to => $memory_7,check => $memory_8,cast => $memory_9,};
#line 159
undef($memory_5);
#line 159
undef($memory_6);
#line 159
undef($memory_7);
#line 159
undef($memory_8);
#line 159
undef($memory_9);
#line 160
$memory_5 = ptd_system_priv::cross_type($memory_0, $memory_1, $memory_4, $memory_2, $memory_3);
#line 160
undef($memory_0);
#line 160
undef($memory_1);
#line 160
undef($memory_4);
#line 160
$_[2] = $memory_2;$_[3] = $memory_3;return $memory_5;
#line 160
undef($memory_5);
#line 160
undef($memory_4);
#line 160
undef($memory_0);
#line 160
undef($memory_1);
#line 160
$_[2] = $memory_2;$_[3] = $memory_3;return;
$_[2] = $memory_2;$_[3] = $memory_3;}

sub ptd_system_priv::cross_type($$$$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;my $memory_13;my $memory_14;my $memory_15;my $memory_16;my $memory_17;my $memory_18;my $memory_19;$memory_0 = $_[0];$memory_1 = $_[1];$memory_2 = $_[2];$memory_3 = $_[3];Scalar::Util::weaken($_[3]) if ref($_[3]);$memory_4 = $_[4];Scalar::Util::weaken($_[4]) if ref($_[4]);
#line 165
$memory_5 = $memory_1;
#line 165
$memory_5 = c_rt_lib::ov_is($memory_5, 'tct_im');
#line 165
if (c_rt_lib::check_true($memory_5)) {goto label_5;}
#line 165
$memory_5 = $memory_0;
#line 165
$memory_5 = c_rt_lib::ov_is($memory_5, 'tct_im');
#line 165
label_5:
#line 165
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 165
if (c_rt_lib::check_true($memory_5)) {goto label_16;}
#line 165
$memory_6 = c_rt_lib::ov_mk_none('tct_im');
#line 165
undef($memory_0);
#line 165
undef($memory_1);
#line 165
undef($memory_2);
#line 165
undef($memory_5);
#line 165
$_[3] = $memory_3;$_[4] = $memory_4;return $memory_6;
#line 165
undef($memory_6);
#line 165
goto label_16;
#line 165
label_16:
#line 165
undef($memory_5);
#line 166
$memory_6 = c_rt_lib::to_nl(1);
#line 166
$memory_7 = c_rt_lib::to_nl(0);
#line 166
$memory_5 = ptd_system_priv::is_cycle_ref($memory_0, $memory_1, $memory_2, $memory_6, $memory_7, $memory_3, $memory_4);
#line 166
undef($memory_7);
#line 166
undef($memory_6);
#line 166
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 166
if (c_rt_lib::check_true($memory_5)) {goto label_30;}
#line 167
undef($memory_1);
#line 167
undef($memory_2);
#line 167
undef($memory_5);
#line 167
$_[3] = $memory_3;$_[4] = $memory_4;return $memory_0;
#line 168
goto label_30;
#line 168
label_30:
#line 168
undef($memory_5);
#line 169
$memory_5 = $memory_2->{'level'};
#line 169
$memory_6 = 200;
#line 169
$memory_5 = c_rt_lib::to_nl($memory_5 == $memory_6);
#line 169
undef($memory_6);
#line 169
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 169
if (c_rt_lib::check_true($memory_5)) {goto label_49;}
#line 170
$memory_6 = "cannnot assign these two types to one variable - types merge failed.";
#line 170
ptd_system_priv::add_error($memory_4, $memory_6);
#line 170
undef($memory_6);
#line 171
$memory_6 = c_rt_lib::ov_mk_none('tct_im');
#line 171
undef($memory_0);
#line 171
undef($memory_1);
#line 171
undef($memory_2);
#line 171
undef($memory_5);
#line 171
$_[3] = $memory_3;$_[4] = $memory_4;return $memory_6;
#line 171
undef($memory_6);
#line 172
goto label_49;
#line 172
label_49:
#line 172
undef($memory_5);
#line 173
$memory_5 = $memory_1;
#line 173
$memory_5 = c_rt_lib::ov_is($memory_5, 'tct_empty');
#line 173
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 173
if (c_rt_lib::check_true($memory_5)) {goto label_60;}
#line 173
undef($memory_1);
#line 173
undef($memory_2);
#line 173
undef($memory_5);
#line 173
$_[3] = $memory_3;$_[4] = $memory_4;return $memory_0;
#line 173
goto label_60;
#line 173
label_60:
#line 173
undef($memory_5);
#line 174
$memory_5 = c_rt_lib::ov_is($memory_0, 'tct_empty');
#line 174
if (c_rt_lib::check_true($memory_5)) {goto label_83;}
#line 176
$memory_5 = c_rt_lib::ov_is($memory_0, 'tct_im');
#line 176
if (c_rt_lib::check_true($memory_5)) {goto label_89;}
#line 178
$memory_5 = c_rt_lib::ov_is($memory_0, 'tct_sim');
#line 178
if (c_rt_lib::check_true($memory_5)) {goto label_98;}
#line 180
$memory_5 = c_rt_lib::ov_is($memory_0, 'tct_ref');
#line 180
if (c_rt_lib::check_true($memory_5)) {goto label_115;}
#line 182
$memory_5 = c_rt_lib::ov_is($memory_0, 'tct_void');
#line 182
if (c_rt_lib::check_true($memory_5)) {goto label_122;}
#line 184
$memory_5 = c_rt_lib::ov_is($memory_0, 'tct_arr');
#line 184
if (c_rt_lib::check_true($memory_5)) {goto label_127;}
#line 188
$memory_5 = c_rt_lib::ov_is($memory_0, 'tct_var');
#line 188
if (c_rt_lib::check_true($memory_5)) {goto label_152;}
#line 226
$memory_5 = c_rt_lib::ov_is($memory_0, 'tct_rec');
#line 226
if (c_rt_lib::check_true($memory_5)) {goto label_349;}
#line 253
$memory_5 = c_rt_lib::ov_is($memory_0, 'tct_hash');
#line 253
if (c_rt_lib::check_true($memory_5)) {goto label_493;}
#line 253
$memory_5 = "NOMATCHALERT";
#line 253
$memory_5 = [$memory_5,$memory_0];
#line 253
die(dfile::ssave($memory_5));
#line 174
label_83:
#line 175
undef($memory_0);
#line 175
undef($memory_2);
#line 175
undef($memory_5);
#line 175
$_[3] = $memory_3;$_[4] = $memory_4;return $memory_1;
#line 176
goto label_539;
#line 176
label_89:
#line 177
$memory_6 = c_rt_lib::ov_mk_none('tct_im');
#line 177
undef($memory_0);
#line 177
undef($memory_1);
#line 177
undef($memory_2);
#line 177
undef($memory_5);
#line 177
$_[3] = $memory_3;$_[4] = $memory_4;return $memory_6;
#line 177
undef($memory_6);
#line 178
goto label_539;
#line 178
label_98:
#line 179
$memory_6 = $memory_1;
#line 179
$memory_6 = c_rt_lib::ov_is($memory_6, 'tct_sim');
#line 179
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 179
if (c_rt_lib::check_true($memory_6)) {goto label_112;}
#line 179
$memory_7 = c_rt_lib::ov_mk_none('tct_sim');
#line 179
undef($memory_0);
#line 179
undef($memory_1);
#line 179
undef($memory_2);
#line 179
undef($memory_5);
#line 179
undef($memory_6);
#line 179
$_[3] = $memory_3;$_[4] = $memory_4;return $memory_7;
#line 179
undef($memory_7);
#line 179
goto label_112;
#line 179
label_112:
#line 179
undef($memory_6);
#line 180
goto label_539;
#line 180
label_115:
#line 180
$memory_6 = c_rt_lib::ov_as($memory_0, 'tct_ref');
#line 181
$memory_7 = [];
#line 181
die(dfile::ssave($memory_7));
#line 181
undef($memory_7);
#line 181
undef($memory_6);
#line 182
goto label_539;
#line 182
label_122:
#line 183
$memory_6 = [];
#line 183
die(dfile::ssave($memory_6));
#line 183
undef($memory_6);
#line 184
goto label_539;
#line 184
label_127:
#line 184
$memory_6 = c_rt_lib::ov_as($memory_0, 'tct_arr');
#line 185
$memory_7 = $memory_1;
#line 185
$memory_7 = c_rt_lib::ov_is($memory_7, 'tct_arr');
#line 185
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 185
if (c_rt_lib::check_true($memory_7)) {goto label_148;}
#line 186
$memory_10 = $memory_1;
#line 186
$memory_10 = c_rt_lib::ov_as($memory_10, 'tct_arr');
#line 186
$memory_9 = ptd_system_priv::cross_type($memory_6, $memory_10, $memory_2, $memory_3, $memory_4);
#line 186
undef($memory_10);
#line 186
$memory_8 = tct::arr($memory_9);
#line 186
undef($memory_9);
#line 186
undef($memory_0);
#line 186
undef($memory_1);
#line 186
undef($memory_2);
#line 186
undef($memory_5);
#line 186
undef($memory_6);
#line 186
undef($memory_7);
#line 186
$_[3] = $memory_3;$_[4] = $memory_4;return $memory_8;
#line 186
undef($memory_8);
#line 187
goto label_148;
#line 187
label_148:
#line 187
undef($memory_7);
#line 187
undef($memory_6);
#line 188
goto label_539;
#line 188
label_152:
#line 188
$memory_6 = c_rt_lib::ov_as($memory_0, 'tct_var');
#line 189
$memory_7 = $memory_6;
#line 190
$memory_8 = $memory_1;
#line 190
$memory_8 = c_rt_lib::ov_is($memory_8, 'tct_var');
#line 190
$memory_8 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 190
if (c_rt_lib::check_true($memory_8)) {goto label_344;}
#line 191
$memory_9 = $memory_1;
#line 191
$memory_9 = c_rt_lib::ov_as($memory_9, 'tct_var');
#line 192
$memory_12 = c_rt_lib::init_iter($memory_6);
#line 192
label_162:
#line 192
$memory_10 = c_rt_lib::is_end_hash($memory_12);
#line 192
if (c_rt_lib::check_true($memory_10)) {goto label_287;}
#line 192
$memory_10 = c_rt_lib::get_key_iter($memory_12);
#line 192
$memory_11 = c_rt_lib::hash_get_value($memory_6, $memory_10);
#line 193
$memory_13 = hash::has_key($memory_9, $memory_10);
#line 193
$memory_13 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_13));
#line 193
if (c_rt_lib::check_true($memory_13)) {goto label_262;}
#line 194
$memory_14 = hash::get_value($memory_9, $memory_10);
#line 195
$memory_15 = c_rt_lib::ov_is($memory_14, 'with_param');
#line 195
if (c_rt_lib::check_true($memory_15)) {goto label_178;}
#line 201
$memory_15 = c_rt_lib::ov_is($memory_14, 'no_param');
#line 201
if (c_rt_lib::check_true($memory_15)) {goto label_219;}
#line 201
$memory_15 = "NOMATCHALERT";
#line 201
$memory_15 = [$memory_15,$memory_14];
#line 201
die(dfile::ssave($memory_15));
#line 195
label_178:
#line 195
$memory_16 = c_rt_lib::ov_as($memory_14, 'with_param');
#line 196
$memory_17 = c_rt_lib::ov_is($memory_11, 'with_param');
#line 196
if (c_rt_lib::check_true($memory_17)) {goto label_187;}
#line 198
$memory_17 = c_rt_lib::ov_is($memory_11, 'no_param');
#line 198
if (c_rt_lib::check_true($memory_17)) {goto label_194;}
#line 198
$memory_17 = "NOMATCHALERT";
#line 198
$memory_17 = [$memory_17,$memory_11];
#line 198
die(dfile::ssave($memory_17));
#line 196
label_187:
#line 196
$memory_18 = c_rt_lib::ov_as($memory_11, 'with_param');
#line 197
$memory_19 = ptd_system_priv::cross_type($memory_16, $memory_18, $memory_2, $memory_3, $memory_4);
#line 197
hash::set_value($memory_7, $memory_10, $memory_19);
#line 197
undef($memory_19);
#line 197
undef($memory_18);
#line 198
goto label_215;
#line 198
label_194:
#line 199
$memory_18 = c_rt_lib::ov_mk_none('tct_im');
#line 199
undef($memory_0);
#line 199
undef($memory_1);
#line 199
undef($memory_2);
#line 199
undef($memory_5);
#line 199
undef($memory_6);
#line 199
undef($memory_7);
#line 199
undef($memory_8);
#line 199
undef($memory_9);
#line 199
undef($memory_10);
#line 199
undef($memory_11);
#line 199
undef($memory_12);
#line 199
undef($memory_13);
#line 199
undef($memory_14);
#line 199
undef($memory_15);
#line 199
undef($memory_16);
#line 199
undef($memory_17);
#line 199
$_[3] = $memory_3;$_[4] = $memory_4;return $memory_18;
#line 199
undef($memory_18);
#line 200
goto label_215;
#line 200
label_215:
#line 200
undef($memory_17);
#line 200
undef($memory_16);
#line 201
goto label_258;
#line 201
label_219:
#line 202
$memory_16 = c_rt_lib::ov_is($memory_11, 'with_param');
#line 202
if (c_rt_lib::check_true($memory_16)) {goto label_227;}
#line 204
$memory_16 = c_rt_lib::ov_is($memory_11, 'no_param');
#line 204
if (c_rt_lib::check_true($memory_16)) {goto label_250;}
#line 204
$memory_16 = "NOMATCHALERT";
#line 204
$memory_16 = [$memory_16,$memory_11];
#line 204
die(dfile::ssave($memory_16));
#line 202
label_227:
#line 202
$memory_17 = c_rt_lib::ov_as($memory_11, 'with_param');
#line 203
$memory_18 = c_rt_lib::ov_mk_none('tct_im');
#line 203
undef($memory_0);
#line 203
undef($memory_1);
#line 203
undef($memory_2);
#line 203
undef($memory_5);
#line 203
undef($memory_6);
#line 203
undef($memory_7);
#line 203
undef($memory_8);
#line 203
undef($memory_9);
#line 203
undef($memory_10);
#line 203
undef($memory_11);
#line 203
undef($memory_12);
#line 203
undef($memory_13);
#line 203
undef($memory_14);
#line 203
undef($memory_15);
#line 203
undef($memory_16);
#line 203
undef($memory_17);
#line 203
$_[3] = $memory_3;$_[4] = $memory_4;return $memory_18;
#line 203
undef($memory_18);
#line 203
undef($memory_17);
#line 204
goto label_255;
#line 204
label_250:
#line 205
$memory_17 = tct::none();
#line 205
hash::set_value($memory_7, $memory_10, $memory_17);
#line 205
undef($memory_17);
#line 206
goto label_255;
#line 206
label_255:
#line 206
undef($memory_16);
#line 207
goto label_258;
#line 207
label_258:
#line 207
undef($memory_15);
#line 207
undef($memory_14);
#line 208
goto label_283;
#line 208
label_262:
#line 209
$memory_14 = c_rt_lib::ov_is($memory_11, 'with_param');
#line 209
if (c_rt_lib::check_true($memory_14)) {goto label_270;}
#line 211
$memory_14 = c_rt_lib::ov_is($memory_11, 'no_param');
#line 211
if (c_rt_lib::check_true($memory_14)) {goto label_275;}
#line 211
$memory_14 = "NOMATCHALERT";
#line 211
$memory_14 = [$memory_14,$memory_11];
#line 211
die(dfile::ssave($memory_14));
#line 209
label_270:
#line 209
$memory_15 = c_rt_lib::ov_as($memory_11, 'with_param');
#line 210
hash::set_value($memory_7, $memory_10, $memory_15);
#line 210
undef($memory_15);
#line 211
goto label_280;
#line 211
label_275:
#line 212
$memory_15 = tct::none();
#line 212
hash::set_value($memory_7, $memory_10, $memory_15);
#line 212
undef($memory_15);
#line 213
goto label_280;
#line 213
label_280:
#line 213
undef($memory_14);
#line 214
goto label_283;
#line 214
label_283:
#line 214
undef($memory_13);
#line 215
$memory_12 = c_rt_lib::next_iter($memory_12);
#line 215
goto label_162;
#line 215
label_287:
#line 215
undef($memory_10);
#line 215
undef($memory_11);
#line 215
undef($memory_12);
#line 216
$memory_12 = c_rt_lib::init_iter($memory_9);
#line 216
label_292:
#line 216
$memory_10 = c_rt_lib::is_end_hash($memory_12);
#line 216
if (c_rt_lib::check_true($memory_10)) {goto label_327;}
#line 216
$memory_10 = c_rt_lib::get_key_iter($memory_12);
#line 216
$memory_11 = c_rt_lib::hash_get_value($memory_9, $memory_10);
#line 217
$memory_13 = hash::has_key($memory_7, $memory_10);
#line 217
$memory_13 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_13));
#line 217
if (c_rt_lib::check_true($memory_13)) {goto label_303;}
#line 217
undef($memory_13);
#line 217
goto label_324;
#line 217
goto label_303;
#line 217
label_303:
#line 217
undef($memory_13);
#line 218
$memory_13 = c_rt_lib::ov_is($memory_11, 'with_param');
#line 218
if (c_rt_lib::check_true($memory_13)) {goto label_312;}
#line 220
$memory_13 = c_rt_lib::ov_is($memory_11, 'no_param');
#line 220
if (c_rt_lib::check_true($memory_13)) {goto label_317;}
#line 220
$memory_13 = "NOMATCHALERT";
#line 220
$memory_13 = [$memory_13,$memory_11];
#line 220
die(dfile::ssave($memory_13));
#line 218
label_312:
#line 218
$memory_14 = c_rt_lib::ov_as($memory_11, 'with_param');
#line 219
hash::set_value($memory_7, $memory_10, $memory_14);
#line 219
undef($memory_14);
#line 220
goto label_322;
#line 220
label_317:
#line 221
$memory_14 = tct::none();
#line 221
hash::set_value($memory_7, $memory_10, $memory_14);
#line 221
undef($memory_14);
#line 222
goto label_322;
#line 222
label_322:
#line 222
undef($memory_13);
#line 222
label_324:
#line 223
$memory_12 = c_rt_lib::next_iter($memory_12);
#line 223
goto label_292;
#line 223
label_327:
#line 223
undef($memory_10);
#line 223
undef($memory_11);
#line 223
undef($memory_12);
#line 224
$memory_10 = tct::var($memory_7);
#line 224
undef($memory_0);
#line 224
undef($memory_1);
#line 224
undef($memory_2);
#line 224
undef($memory_5);
#line 224
undef($memory_6);
#line 224
undef($memory_7);
#line 224
undef($memory_8);
#line 224
undef($memory_9);
#line 224
$_[3] = $memory_3;$_[4] = $memory_4;return $memory_10;
#line 224
undef($memory_10);
#line 224
undef($memory_9);
#line 225
goto label_344;
#line 225
label_344:
#line 225
undef($memory_8);
#line 225
undef($memory_7);
#line 225
undef($memory_6);
#line 226
goto label_539;
#line 226
label_349:
#line 226
$memory_6 = c_rt_lib::ov_as($memory_0, 'tct_rec');
#line 227
$memory_7 = $memory_1;
#line 227
$memory_7 = c_rt_lib::ov_is($memory_7, 'tct_rec');
#line 227
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 227
if (c_rt_lib::check_true($memory_7)) {goto label_465;}
#line 228
$memory_8 = $memory_1;
#line 228
$memory_8 = c_rt_lib::ov_as($memory_8, 'tct_rec');
#line 229
$memory_9 = c_rt_lib::to_nl(0);
#line 230
$memory_12 = c_rt_lib::init_iter($memory_6);
#line 230
label_359:
#line 230
$memory_10 = c_rt_lib::is_end_hash($memory_12);
#line 230
if (c_rt_lib::check_true($memory_10)) {goto label_376;}
#line 230
$memory_10 = c_rt_lib::get_key_iter($memory_12);
#line 230
$memory_11 = c_rt_lib::hash_get_value($memory_6, $memory_10);
#line 231
$memory_13 = hash::has_key($memory_8, $memory_10);
#line 231
$memory_13 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_13));
#line 231
$memory_13 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_13));
#line 231
if (c_rt_lib::check_true($memory_13)) {goto label_372;}
#line 231
$memory_14 = c_rt_lib::to_nl(1);
#line 231
$memory_9 = $memory_14;
#line 231
undef($memory_14);
#line 231
goto label_372;
#line 231
label_372:
#line 231
undef($memory_13);
#line 232
$memory_12 = c_rt_lib::next_iter($memory_12);
#line 232
goto label_359;
#line 232
label_376:
#line 232
undef($memory_10);
#line 232
undef($memory_11);
#line 232
undef($memory_12);
#line 233
$memory_12 = c_rt_lib::init_iter($memory_8);
#line 233
label_381:
#line 233
$memory_10 = c_rt_lib::is_end_hash($memory_12);
#line 233
if (c_rt_lib::check_true($memory_10)) {goto label_398;}
#line 233
$memory_10 = c_rt_lib::get_key_iter($memory_12);
#line 233
$memory_11 = c_rt_lib::hash_get_value($memory_8, $memory_10);
#line 234
$memory_13 = hash::has_key($memory_6, $memory_10);
#line 234
$memory_13 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_13));
#line 234
$memory_13 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_13));
#line 234
if (c_rt_lib::check_true($memory_13)) {goto label_394;}
#line 234
$memory_14 = c_rt_lib::to_nl(1);
#line 234
$memory_9 = $memory_14;
#line 234
undef($memory_14);
#line 234
goto label_394;
#line 234
label_394:
#line 234
undef($memory_13);
#line 235
$memory_12 = c_rt_lib::next_iter($memory_12);
#line 235
goto label_381;
#line 235
label_398:
#line 235
undef($memory_10);
#line 235
undef($memory_11);
#line 235
undef($memory_12);
#line 236
$memory_10 = $memory_9;
#line 236
$memory_10 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_10));
#line 236
if (c_rt_lib::check_true($memory_10)) {goto label_426;}
#line 237
$memory_11 = ptd_system::rec_to_hash($memory_0, $memory_2, $memory_3, $memory_4);
#line 238
$memory_12 = ptd_system::rec_to_hash($memory_1, $memory_2, $memory_3, $memory_4);
#line 239
$memory_14 = ptd_system_priv::cross_type($memory_11, $memory_12, $memory_2, $memory_3, $memory_4);
#line 239
$memory_13 = tct::hash($memory_14);
#line 239
undef($memory_14);
#line 239
undef($memory_0);
#line 239
undef($memory_1);
#line 239
undef($memory_2);
#line 239
undef($memory_5);
#line 239
undef($memory_6);
#line 239
undef($memory_7);
#line 239
undef($memory_8);
#line 239
undef($memory_9);
#line 239
undef($memory_10);
#line 239
undef($memory_11);
#line 239
undef($memory_12);
#line 239
$_[3] = $memory_3;$_[4] = $memory_4;return $memory_13;
#line 239
undef($memory_13);
#line 239
undef($memory_11);
#line 239
undef($memory_12);
#line 240
goto label_460;
#line 240
label_426:
#line 241
$memory_11 = {};
#line 242
$memory_14 = c_rt_lib::init_iter($memory_6);
#line 242
label_429:
#line 242
$memory_12 = c_rt_lib::is_end_hash($memory_14);
#line 242
if (c_rt_lib::check_true($memory_12)) {goto label_441;}
#line 242
$memory_12 = c_rt_lib::get_key_iter($memory_14);
#line 242
$memory_13 = c_rt_lib::hash_get_value($memory_6, $memory_12);
#line 243
$memory_16 = hash::get_value($memory_8, $memory_12);
#line 243
$memory_15 = ptd_system_priv::cross_type($memory_13, $memory_16, $memory_2, $memory_3, $memory_4);
#line 243
undef($memory_16);
#line 243
hash::set_value($memory_11, $memory_12, $memory_15);
#line 243
undef($memory_15);
#line 245
$memory_14 = c_rt_lib::next_iter($memory_14);
#line 245
goto label_429;
#line 245
label_441:
#line 245
undef($memory_12);
#line 245
undef($memory_13);
#line 245
undef($memory_14);
#line 246
$memory_12 = tct::rec($memory_11);
#line 246
undef($memory_0);
#line 246
undef($memory_1);
#line 246
undef($memory_2);
#line 246
undef($memory_5);
#line 246
undef($memory_6);
#line 246
undef($memory_7);
#line 246
undef($memory_8);
#line 246
undef($memory_9);
#line 246
undef($memory_10);
#line 246
undef($memory_11);
#line 246
$_[3] = $memory_3;$_[4] = $memory_4;return $memory_12;
#line 246
undef($memory_12);
#line 246
undef($memory_11);
#line 247
goto label_460;
#line 247
label_460:
#line 247
undef($memory_10);
#line 247
undef($memory_8);
#line 247
undef($memory_9);
#line 248
goto label_465;
#line 248
label_465:
#line 248
undef($memory_7);
#line 249
$memory_7 = $memory_1;
#line 249
$memory_7 = c_rt_lib::ov_is($memory_7, 'tct_hash');
#line 249
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 249
if (c_rt_lib::check_true($memory_7)) {goto label_489;}
#line 250
$memory_8 = ptd_system::rec_to_hash($memory_0, $memory_2, $memory_3, $memory_4);
#line 251
$memory_11 = $memory_1;
#line 251
$memory_11 = c_rt_lib::ov_as($memory_11, 'tct_hash');
#line 251
$memory_10 = ptd_system::cross_type($memory_11, $memory_8, $memory_3, $memory_4);
#line 251
undef($memory_11);
#line 251
$memory_9 = tct::hash($memory_10);
#line 251
undef($memory_10);
#line 251
undef($memory_0);
#line 251
undef($memory_1);
#line 251
undef($memory_2);
#line 251
undef($memory_5);
#line 251
undef($memory_6);
#line 251
undef($memory_7);
#line 251
undef($memory_8);
#line 251
$_[3] = $memory_3;$_[4] = $memory_4;return $memory_9;
#line 251
undef($memory_9);
#line 251
undef($memory_8);
#line 252
goto label_489;
#line 252
label_489:
#line 252
undef($memory_7);
#line 252
undef($memory_6);
#line 253
goto label_539;
#line 253
label_493:
#line 253
$memory_6 = c_rt_lib::ov_as($memory_0, 'tct_hash');
#line 254
$memory_7 = $memory_1;
#line 254
$memory_7 = c_rt_lib::ov_is($memory_7, 'tct_hash');
#line 254
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 254
if (c_rt_lib::check_true($memory_7)) {goto label_514;}
#line 255
$memory_10 = $memory_1;
#line 255
$memory_10 = c_rt_lib::ov_as($memory_10, 'tct_hash');
#line 255
$memory_9 = ptd_system_priv::cross_type($memory_6, $memory_10, $memory_2, $memory_3, $memory_4);
#line 255
undef($memory_10);
#line 255
$memory_8 = tct::hash($memory_9);
#line 255
undef($memory_9);
#line 255
undef($memory_0);
#line 255
undef($memory_1);
#line 255
undef($memory_2);
#line 255
undef($memory_5);
#line 255
undef($memory_6);
#line 255
undef($memory_7);
#line 255
$_[3] = $memory_3;$_[4] = $memory_4;return $memory_8;
#line 255
undef($memory_8);
#line 256
goto label_514;
#line 256
label_514:
#line 256
undef($memory_7);
#line 257
$memory_7 = $memory_1;
#line 257
$memory_7 = c_rt_lib::ov_is($memory_7, 'tct_rec');
#line 257
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 257
if (c_rt_lib::check_true($memory_7)) {goto label_535;}
#line 258
$memory_8 = ptd_system::rec_to_hash($memory_1, $memory_2, $memory_3, $memory_4);
#line 259
$memory_10 = ptd_system::cross_type($memory_6, $memory_8, $memory_3, $memory_4);
#line 259
$memory_9 = tct::hash($memory_10);
#line 259
undef($memory_10);
#line 259
undef($memory_0);
#line 259
undef($memory_1);
#line 259
undef($memory_2);
#line 259
undef($memory_5);
#line 259
undef($memory_6);
#line 259
undef($memory_7);
#line 259
undef($memory_8);
#line 259
$_[3] = $memory_3;$_[4] = $memory_4;return $memory_9;
#line 259
undef($memory_9);
#line 259
undef($memory_8);
#line 260
goto label_535;
#line 260
label_535:
#line 260
undef($memory_7);
#line 260
undef($memory_6);
#line 261
goto label_539;
#line 261
label_539:
#line 261
undef($memory_5);
#line 262
$memory_5 = c_rt_lib::ov_mk_none('tct_im');
#line 262
undef($memory_0);
#line 262
undef($memory_1);
#line 262
undef($memory_2);
#line 262
$_[3] = $memory_3;$_[4] = $memory_4;return $memory_5;
#line 262
undef($memory_5);
#line 262
undef($memory_0);
#line 262
undef($memory_1);
#line 262
undef($memory_2);
#line 262
$_[3] = $memory_3;$_[4] = $memory_4;return;
$_[3] = $memory_3;$_[4] = $memory_4;}

sub ptd_system::rec_to_hash($$$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;$memory_0 = $_[0];$memory_1 = $_[1];$memory_2 = $_[2];Scalar::Util::weaken($_[2]) if ref($_[2]);$memory_3 = $_[3];Scalar::Util::weaken($_[3]) if ref($_[3]);
#line 267
$memory_4 = tct::empty();
#line 268
$memory_5 = $memory_0;
#line 268
$memory_5 = c_rt_lib::ov_as($memory_5, 'tct_rec');
#line 268
$memory_8 = c_rt_lib::init_iter($memory_5);
#line 268
label_4:
#line 268
$memory_6 = c_rt_lib::is_end_hash($memory_8);
#line 268
if (c_rt_lib::check_true($memory_6)) {goto label_14;}
#line 268
$memory_6 = c_rt_lib::get_key_iter($memory_8);
#line 268
$memory_7 = c_rt_lib::hash_get_value($memory_5, $memory_6);
#line 269
$memory_9 = ptd_system_priv::cross_type($memory_7, $memory_4, $memory_1, $memory_2, $memory_3);
#line 269
$memory_4 = $memory_9;
#line 269
undef($memory_9);
#line 270
$memory_8 = c_rt_lib::next_iter($memory_8);
#line 270
goto label_4;
#line 270
label_14:
#line 270
undef($memory_5);
#line 270
undef($memory_6);
#line 270
undef($memory_7);
#line 270
undef($memory_8);
#line 271
undef($memory_0);
#line 271
undef($memory_1);
#line 271
$_[2] = $memory_2;$_[3] = $memory_3;return $memory_4;
#line 271
undef($memory_4);
#line 271
undef($memory_0);
#line 271
undef($memory_1);
#line 271
$_[2] = $memory_2;$_[3] = $memory_3;return;
$_[2] = $memory_2;$_[3] = $memory_3;}

sub ptd_system::cast_type($$$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;$memory_0 = $_[0];$memory_1 = $_[1];$memory_2 = $_[2];Scalar::Util::weaken($_[2]) if ref($_[2]);$memory_3 = $_[3];Scalar::Util::weaken($_[3]) if ref($_[3]);
#line 276
$memory_5 = 1;
#line 276
$memory_6 = {};
#line 276
$memory_7 = {};
#line 276
$memory_8 = c_rt_lib::to_nl(1);
#line 276
$memory_9 = c_rt_lib::to_nl(1);
#line 276
$memory_4 = {level => $memory_5,from => $memory_6,to => $memory_7,check => $memory_8,cast => $memory_9,};
#line 276
undef($memory_5);
#line 276
undef($memory_6);
#line 276
undef($memory_7);
#line 276
undef($memory_8);
#line 276
undef($memory_9);
#line 277
$memory_6 = $memory_1->{'type'};
#line 277
$memory_7 = $memory_1->{'src'};
#line 277
$memory_5 = ptd_system_priv::check_assignment_info($memory_0, $memory_6, $memory_4, $memory_7, $memory_2, $memory_3);
#line 277
undef($memory_7);
#line 277
undef($memory_6);
#line 277
undef($memory_0);
#line 277
undef($memory_1);
#line 277
undef($memory_4);
#line 277
$_[2] = $memory_2;$_[3] = $memory_3;return $memory_5;
#line 277
undef($memory_5);
#line 277
undef($memory_4);
#line 277
undef($memory_0);
#line 277
undef($memory_1);
#line 277
$_[2] = $memory_2;$_[3] = $memory_3;return;
$_[2] = $memory_2;$_[3] = $memory_3;}

sub ptd_system::check_assignment($$$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;$memory_0 = $_[0];$memory_1 = $_[1];$memory_2 = $_[2];Scalar::Util::weaken($_[2]) if ref($_[2]);$memory_3 = $_[3];Scalar::Util::weaken($_[3]) if ref($_[3]);
#line 282
$memory_5 = 1;
#line 282
$memory_6 = {};
#line 282
$memory_7 = {};
#line 282
$memory_8 = c_rt_lib::to_nl(1);
#line 282
$memory_9 = c_rt_lib::to_nl(0);
#line 282
$memory_4 = {level => $memory_5,from => $memory_6,to => $memory_7,check => $memory_8,cast => $memory_9,};
#line 282
undef($memory_5);
#line 282
undef($memory_6);
#line 282
undef($memory_7);
#line 282
undef($memory_8);
#line 282
undef($memory_9);
#line 283
$memory_6 = $memory_1->{'type'};
#line 283
$memory_7 = $memory_1->{'src'};
#line 283
$memory_5 = ptd_system_priv::check_assignment_info($memory_0, $memory_6, $memory_4, $memory_7, $memory_2, $memory_3);
#line 283
undef($memory_7);
#line 283
undef($memory_6);
#line 283
undef($memory_0);
#line 283
undef($memory_1);
#line 283
undef($memory_4);
#line 283
$_[2] = $memory_2;$_[3] = $memory_3;return $memory_5;
#line 283
undef($memory_5);
#line 283
undef($memory_4);
#line 283
undef($memory_0);
#line 283
undef($memory_1);
#line 283
$_[2] = $memory_2;$_[3] = $memory_3;return;
$_[2] = $memory_2;$_[3] = $memory_3;}

sub ptd_system_priv::mk_err($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;$memory_0 = $_[0];$memory_1 = $_[1];
#line 287
$memory_3 = [];
#line 287
$memory_2 = {to => $memory_0,from => $memory_1,stack => $memory_3,};
#line 287
undef($memory_3);
#line 287
$memory_2 = c_rt_lib::ov_mk_arg('err', $memory_2);
#line 287
undef($memory_0);
#line 287
undef($memory_1);
#line 287
return $memory_2;
#line 287
undef($memory_2);
#line 287
undef($memory_0);
#line 287
undef($memory_1);
#line 287
return;
}

sub ptd_system_priv::check_assignment_info($$$$$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;my $memory_13;my $memory_14;my $memory_15;my $memory_16;my $memory_17;my $memory_18;my $memory_19;my $memory_20;my $memory_21;$memory_0 = $_[0];$memory_1 = $_[1];$memory_2 = $_[2];$memory_3 = $_[3];$memory_4 = $_[4];Scalar::Util::weaken($_[4]) if ref($_[4]);$memory_5 = $_[5];Scalar::Util::weaken($_[5]) if ref($_[5]);
#line 292
$memory_6 = $memory_1;
#line 292
$memory_6 = c_rt_lib::ov_is($memory_6, 'tct_empty');
#line 292
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 292
if (c_rt_lib::check_true($memory_6)) {goto label_13;}
#line 292
$memory_7 = c_rt_lib::ov_mk_none('ok');
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
$_[4] = $memory_4;$_[5] = $memory_5;return $memory_7;
#line 292
undef($memory_7);
#line 292
goto label_13;
#line 292
label_13:
#line 292
undef($memory_6);
#line 293
$memory_6 = $memory_1;
#line 293
$memory_6 = c_rt_lib::ov_is($memory_6, 'tct_void');
#line 293
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 293
if (c_rt_lib::check_true($memory_6)) {goto label_28;}
#line 293
$memory_7 = ptd_system_priv::mk_err($memory_0, $memory_1);
#line 293
undef($memory_0);
#line 293
undef($memory_1);
#line 293
undef($memory_2);
#line 293
undef($memory_3);
#line 293
undef($memory_6);
#line 293
$_[4] = $memory_4;$_[5] = $memory_5;return $memory_7;
#line 293
undef($memory_7);
#line 293
goto label_28;
#line 293
label_28:
#line 293
undef($memory_6);
#line 294
$memory_6 = $memory_0;
#line 294
$memory_6 = c_rt_lib::ov_is($memory_6, 'tct_im');
#line 294
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 294
if (c_rt_lib::check_true($memory_6)) {goto label_59;}
#line 296
$memory_7 = $memory_2->{'check'};
#line 296
$memory_8 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 296
if (c_rt_lib::check_true($memory_8)) {goto label_38;}
#line 296
$memory_7 = ptd_system::is_known($memory_3);
#line 296
label_38:
#line 296
undef($memory_8);
#line 296
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 296
if (c_rt_lib::check_true($memory_7)) {goto label_48;}
#line 295
$memory_8 = c_rt_lib::ov_mk_none('delete');
#line 295
$memory_9 = $memory_2->{'from'};
#line 295
ptd_system_priv::walk_on_type($memory_1, $memory_8, $memory_9, $memory_4, $memory_5);
#line 295
undef($memory_9);
#line 295
undef($memory_8);
#line 295
goto label_48;
#line 295
label_48:
#line 295
undef($memory_7);
#line 297
$memory_7 = c_rt_lib::ov_mk_none('ok');
#line 297
undef($memory_0);
#line 297
undef($memory_1);
#line 297
undef($memory_2);
#line 297
undef($memory_3);
#line 297
undef($memory_6);
#line 297
$_[4] = $memory_4;$_[5] = $memory_5;return $memory_7;
#line 297
undef($memory_7);
#line 298
goto label_59;
#line 298
label_59:
#line 298
undef($memory_6);
#line 299
$memory_7 = c_rt_lib::to_nl(0);
#line 299
$memory_8 = ptd_system::is_known($memory_3);
#line 299
$memory_6 = ptd_system_priv::is_cycle_ref($memory_0, $memory_1, $memory_2, $memory_7, $memory_8, $memory_4, $memory_5);
#line 299
undef($memory_8);
#line 299
undef($memory_7);
#line 299
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 299
if (c_rt_lib::check_true($memory_6)) {goto label_77;}
#line 300
$memory_7 = c_rt_lib::ov_mk_none('ok');
#line 300
undef($memory_0);
#line 300
undef($memory_1);
#line 300
undef($memory_2);
#line 300
undef($memory_3);
#line 300
undef($memory_6);
#line 300
$_[4] = $memory_4;$_[5] = $memory_5;return $memory_7;
#line 300
undef($memory_7);
#line 301
goto label_77;
#line 301
label_77:
#line 301
undef($memory_6);
#line 302
$memory_6 = $memory_2->{'level'};
#line 302
$memory_7 = 200;
#line 302
$memory_6 = c_rt_lib::to_nl($memory_6 == $memory_7);
#line 302
undef($memory_7);
#line 302
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 302
if (c_rt_lib::check_true($memory_6)) {goto label_97;}
#line 303
$memory_7 = "can't assignment this two type";
#line 303
ptd_system_priv::add_error($memory_5, $memory_7);
#line 303
undef($memory_7);
#line 304
$memory_7 = ptd_system_priv::mk_err($memory_0, $memory_1);
#line 304
undef($memory_0);
#line 304
undef($memory_1);
#line 304
undef($memory_2);
#line 304
undef($memory_3);
#line 304
undef($memory_6);
#line 304
$_[4] = $memory_4;$_[5] = $memory_5;return $memory_7;
#line 304
undef($memory_7);
#line 305
goto label_97;
#line 305
label_97:
#line 305
undef($memory_6);
#line 306
$memory_6 = c_rt_lib::ov_is($memory_0, 'tct_im');
#line 306
if (c_rt_lib::check_true($memory_6)) {goto label_120;}
#line 308
$memory_6 = c_rt_lib::ov_is($memory_0, 'tct_arr');
#line 308
if (c_rt_lib::check_true($memory_6)) {goto label_130;}
#line 316
$memory_6 = c_rt_lib::ov_is($memory_0, 'tct_hash');
#line 316
if (c_rt_lib::check_true($memory_6)) {goto label_204;}
#line 334
$memory_6 = c_rt_lib::ov_is($memory_0, 'tct_rec');
#line 334
if (c_rt_lib::check_true($memory_6)) {goto label_360;}
#line 359
$memory_6 = c_rt_lib::ov_is($memory_0, 'tct_ref');
#line 359
if (c_rt_lib::check_true($memory_6)) {goto label_574;}
#line 361
$memory_6 = c_rt_lib::ov_is($memory_0, 'tct_void');
#line 361
if (c_rt_lib::check_true($memory_6)) {goto label_581;}
#line 363
$memory_6 = c_rt_lib::ov_is($memory_0, 'tct_sim');
#line 363
if (c_rt_lib::check_true($memory_6)) {goto label_586;}
#line 366
$memory_6 = c_rt_lib::ov_is($memory_0, 'tct_var');
#line 366
if (c_rt_lib::check_true($memory_6)) {goto label_612;}
#line 391
$memory_6 = c_rt_lib::ov_is($memory_0, 'tct_empty');
#line 391
if (c_rt_lib::check_true($memory_6)) {goto label_813;}
#line 391
$memory_6 = "NOMATCHALERT";
#line 391
$memory_6 = [$memory_6,$memory_0];
#line 391
die(dfile::ssave($memory_6));
#line 306
label_120:
#line 307
$memory_7 = c_rt_lib::ov_mk_none('ok');
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
$_[4] = $memory_4;$_[5] = $memory_5;return $memory_7;
#line 307
undef($memory_7);
#line 308
goto label_818;
#line 308
label_130:
#line 308
$memory_7 = c_rt_lib::ov_as($memory_0, 'tct_arr');
#line 309
$memory_8 = $memory_1;
#line 309
$memory_8 = c_rt_lib::ov_is($memory_8, 'tct_arr');
#line 309
$memory_8 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 309
$memory_8 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 309
if (c_rt_lib::check_true($memory_8)) {goto label_148;}
#line 309
$memory_9 = ptd_system_priv::mk_err($memory_0, $memory_1);
#line 309
undef($memory_0);
#line 309
undef($memory_1);
#line 309
undef($memory_2);
#line 309
undef($memory_3);
#line 309
undef($memory_6);
#line 309
undef($memory_7);
#line 309
undef($memory_8);
#line 309
$_[4] = $memory_4;$_[5] = $memory_5;return $memory_9;
#line 309
undef($memory_9);
#line 309
goto label_148;
#line 309
label_148:
#line 309
undef($memory_8);
#line 310
$memory_9 = $memory_1;
#line 310
$memory_9 = c_rt_lib::ov_as($memory_9, 'tct_arr');
#line 310
$memory_8 = ptd_system_priv::check_assignment_info($memory_7, $memory_9, $memory_2, $memory_3, $memory_4, $memory_5);
#line 310
undef($memory_9);
#line 310
$memory_9 = c_rt_lib::ov_is($memory_8, 'ok');
#line 310
if (c_rt_lib::check_true($memory_9)) {goto label_161;}
#line 312
$memory_9 = c_rt_lib::ov_is($memory_8, 'err');
#line 312
if (c_rt_lib::check_true($memory_9)) {goto label_174;}
#line 312
$memory_9 = "NOMATCHALERT";
#line 312
$memory_9 = [$memory_9,$memory_8];
#line 312
die(dfile::ssave($memory_9));
#line 310
label_161:
#line 311
$memory_10 = c_rt_lib::ov_mk_none('ok');
#line 311
undef($memory_0);
#line 311
undef($memory_1);
#line 311
undef($memory_2);
#line 311
undef($memory_3);
#line 311
undef($memory_6);
#line 311
undef($memory_7);
#line 311
undef($memory_8);
#line 311
undef($memory_9);
#line 311
$_[4] = $memory_4;$_[5] = $memory_5;return $memory_10;
#line 311
undef($memory_10);
#line 312
goto label_199;
#line 312
label_174:
#line 312
$memory_10 = c_rt_lib::ov_as($memory_8, 'err');
#line 313
$memory_11 = "stack";
#line 313
$memory_11 = c_rt_lib::get_ref_hash($memory_10, $memory_11);
#line 313
$memory_12 = c_rt_lib::ov_mk_none('ptd_arr');
#line 313
array::push($memory_11, $memory_12);
#line 313
undef($memory_12);
#line 313
$memory_12 = "stack";
#line 313
c_rt_lib::set_ref_hash($memory_10, $memory_12, $memory_11);
#line 313
undef($memory_12);
#line 313
undef($memory_11);
#line 314
$memory_11 = c_rt_lib::ov_mk_arg('err', $memory_10);
#line 314
undef($memory_0);
#line 314
undef($memory_1);
#line 314
undef($memory_2);
#line 314
undef($memory_3);
#line 314
undef($memory_6);
#line 314
undef($memory_7);
#line 314
undef($memory_8);
#line 314
undef($memory_9);
#line 314
undef($memory_10);
#line 314
$_[4] = $memory_4;$_[5] = $memory_5;return $memory_11;
#line 314
undef($memory_11);
#line 314
undef($memory_10);
#line 315
goto label_199;
#line 315
label_199:
#line 315
undef($memory_8);
#line 315
undef($memory_9);
#line 315
undef($memory_7);
#line 316
goto label_818;
#line 316
label_204:
#line 316
$memory_7 = c_rt_lib::ov_as($memory_0, 'tct_hash');
#line 317
$memory_8 = $memory_1;
#line 317
$memory_8 = c_rt_lib::ov_is($memory_8, 'tct_rec');
#line 317
$memory_9 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 317
if (c_rt_lib::check_true($memory_9)) {goto label_213;}
#line 317
$memory_8 = $memory_3;
#line 317
$memory_8 = c_rt_lib::ov_is($memory_8, 'known');
#line 317
$memory_8 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 317
label_213:
#line 317
undef($memory_9);
#line 317
$memory_8 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 317
if (c_rt_lib::check_true($memory_8)) {goto label_286;}
#line 318
$memory_9 = $memory_1;
#line 318
$memory_9 = c_rt_lib::ov_as($memory_9, 'tct_rec');
#line 318
$memory_12 = c_rt_lib::init_iter($memory_9);
#line 318
label_220:
#line 318
$memory_10 = c_rt_lib::is_end_hash($memory_12);
#line 318
if (c_rt_lib::check_true($memory_10)) {goto label_270;}
#line 318
$memory_10 = c_rt_lib::get_key_iter($memory_12);
#line 318
$memory_11 = c_rt_lib::hash_get_value($memory_9, $memory_10);
#line 319
$memory_13 = ptd_system_priv::check_assignment_info($memory_7, $memory_11, $memory_2, $memory_3, $memory_4, $memory_5);
#line 319
$memory_14 = c_rt_lib::ov_is($memory_13, 'ok');
#line 319
if (c_rt_lib::check_true($memory_14)) {goto label_233;}
#line 320
$memory_14 = c_rt_lib::ov_is($memory_13, 'err');
#line 320
if (c_rt_lib::check_true($memory_14)) {goto label_235;}
#line 320
$memory_14 = "NOMATCHALERT";
#line 320
$memory_14 = [$memory_14,$memory_13];
#line 320
die(dfile::ssave($memory_14));
#line 319
label_233:
#line 320
goto label_265;
#line 320
label_235:
#line 320
$memory_15 = c_rt_lib::ov_as($memory_13, 'err');
#line 321
$memory_16 = "stack";
#line 321
$memory_16 = c_rt_lib::get_ref_hash($memory_15, $memory_16);
#line 321
$memory_17 = c_rt_lib::ov_mk_arg('ptd_rec', $memory_10);
#line 321
array::push($memory_16, $memory_17);
#line 321
undef($memory_17);
#line 321
$memory_17 = "stack";
#line 321
c_rt_lib::set_ref_hash($memory_15, $memory_17, $memory_16);
#line 321
undef($memory_17);
#line 321
undef($memory_16);
#line 322
$memory_16 = c_rt_lib::ov_mk_arg('err', $memory_15);
#line 322
undef($memory_0);
#line 322
undef($memory_1);
#line 322
undef($memory_2);
#line 322
undef($memory_3);
#line 322
undef($memory_6);
#line 322
undef($memory_7);
#line 322
undef($memory_8);
#line 322
undef($memory_9);
#line 322
undef($memory_10);
#line 322
undef($memory_11);
#line 322
undef($memory_12);
#line 322
undef($memory_13);
#line 322
undef($memory_14);
#line 322
undef($memory_15);
#line 322
$_[4] = $memory_4;$_[5] = $memory_5;return $memory_16;
#line 322
undef($memory_16);
#line 322
undef($memory_15);
#line 323
goto label_265;
#line 323
label_265:
#line 323
undef($memory_13);
#line 323
undef($memory_14);
#line 324
$memory_12 = c_rt_lib::next_iter($memory_12);
#line 324
goto label_220;
#line 324
label_270:
#line 324
undef($memory_9);
#line 324
undef($memory_10);
#line 324
undef($memory_11);
#line 324
undef($memory_12);
#line 325
$memory_9 = c_rt_lib::ov_mk_none('ok');
#line 325
undef($memory_0);
#line 325
undef($memory_1);
#line 325
undef($memory_2);
#line 325
undef($memory_3);
#line 325
undef($memory_6);
#line 325
undef($memory_7);
#line 325
undef($memory_8);
#line 325
$_[4] = $memory_4;$_[5] = $memory_5;return $memory_9;
#line 325
undef($memory_9);
#line 326
goto label_286;
#line 326
label_286:
#line 326
undef($memory_8);
#line 327
$memory_8 = $memory_1;
#line 327
$memory_8 = c_rt_lib::ov_is($memory_8, 'tct_hash');
#line 327
$memory_8 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 327
$memory_8 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 327
if (c_rt_lib::check_true($memory_8)) {goto label_304;}
#line 327
$memory_9 = ptd_system_priv::mk_err($memory_0, $memory_1);
#line 327
undef($memory_0);
#line 327
undef($memory_1);
#line 327
undef($memory_2);
#line 327
undef($memory_3);
#line 327
undef($memory_6);
#line 327
undef($memory_7);
#line 327
undef($memory_8);
#line 327
$_[4] = $memory_4;$_[5] = $memory_5;return $memory_9;
#line 327
undef($memory_9);
#line 327
goto label_304;
#line 327
label_304:
#line 327
undef($memory_8);
#line 328
$memory_9 = $memory_1;
#line 328
$memory_9 = c_rt_lib::ov_as($memory_9, 'tct_hash');
#line 328
$memory_8 = ptd_system_priv::check_assignment_info($memory_7, $memory_9, $memory_2, $memory_3, $memory_4, $memory_5);
#line 328
undef($memory_9);
#line 328
$memory_9 = c_rt_lib::ov_is($memory_8, 'ok');
#line 328
if (c_rt_lib::check_true($memory_9)) {goto label_317;}
#line 330
$memory_9 = c_rt_lib::ov_is($memory_8, 'err');
#line 330
if (c_rt_lib::check_true($memory_9)) {goto label_330;}
#line 330
$memory_9 = "NOMATCHALERT";
#line 330
$memory_9 = [$memory_9,$memory_8];
#line 330
die(dfile::ssave($memory_9));
#line 328
label_317:
#line 329
$memory_10 = c_rt_lib::ov_mk_none('ok');
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
$_[4] = $memory_4;$_[5] = $memory_5;return $memory_10;
#line 329
undef($memory_10);
#line 330
goto label_355;
#line 330
label_330:
#line 330
$memory_10 = c_rt_lib::ov_as($memory_8, 'err');
#line 331
$memory_11 = "stack";
#line 331
$memory_11 = c_rt_lib::get_ref_hash($memory_10, $memory_11);
#line 331
$memory_12 = c_rt_lib::ov_mk_none('ptd_hash');
#line 331
array::push($memory_11, $memory_12);
#line 331
undef($memory_12);
#line 331
$memory_12 = "stack";
#line 331
c_rt_lib::set_ref_hash($memory_10, $memory_12, $memory_11);
#line 331
undef($memory_12);
#line 331
undef($memory_11);
#line 332
$memory_11 = c_rt_lib::ov_mk_arg('err', $memory_10);
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
undef($memory_10);
#line 332
$_[4] = $memory_4;$_[5] = $memory_5;return $memory_11;
#line 332
undef($memory_11);
#line 332
undef($memory_10);
#line 333
goto label_355;
#line 333
label_355:
#line 333
undef($memory_8);
#line 333
undef($memory_9);
#line 333
undef($memory_7);
#line 334
goto label_818;
#line 334
label_360:
#line 334
$memory_7 = c_rt_lib::ov_as($memory_0, 'tct_rec');
#line 335
$memory_8 = $memory_2->{'cast'};
#line 335
$memory_9 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 335
if (c_rt_lib::check_true($memory_9)) {goto label_367;}
#line 335
$memory_8 = $memory_1;
#line 335
$memory_8 = c_rt_lib::ov_is($memory_8, 'tct_hash');
#line 335
label_367:
#line 335
undef($memory_9);
#line 335
$memory_8 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 335
if (c_rt_lib::check_true($memory_8)) {goto label_441;}
#line 336
$memory_9 = $memory_1;
#line 336
$memory_9 = c_rt_lib::ov_as($memory_9, 'tct_hash');
#line 337
$memory_12 = c_rt_lib::init_iter($memory_7);
#line 337
label_374:
#line 337
$memory_10 = c_rt_lib::is_end_hash($memory_12);
#line 337
if (c_rt_lib::check_true($memory_10)) {goto label_424;}
#line 337
$memory_10 = c_rt_lib::get_key_iter($memory_12);
#line 337
$memory_11 = c_rt_lib::hash_get_value($memory_7, $memory_10);
#line 338
$memory_13 = ptd_system_priv::check_assignment_info($memory_11, $memory_9, $memory_2, $memory_3, $memory_4, $memory_5);
#line 338
$memory_14 = c_rt_lib::ov_is($memory_13, 'ok');
#line 338
if (c_rt_lib::check_true($memory_14)) {goto label_387;}
#line 339
$memory_14 = c_rt_lib::ov_is($memory_13, 'err');
#line 339
if (c_rt_lib::check_true($memory_14)) {goto label_389;}
#line 339
$memory_14 = "NOMATCHALERT";
#line 339
$memory_14 = [$memory_14,$memory_13];
#line 339
die(dfile::ssave($memory_14));
#line 338
label_387:
#line 339
goto label_419;
#line 339
label_389:
#line 339
$memory_15 = c_rt_lib::ov_as($memory_13, 'err');
#line 340
$memory_16 = "stack";
#line 340
$memory_16 = c_rt_lib::get_ref_hash($memory_15, $memory_16);
#line 340
$memory_17 = c_rt_lib::ov_mk_arg('ptd_rec', $memory_10);
#line 340
array::push($memory_16, $memory_17);
#line 340
undef($memory_17);
#line 340
$memory_17 = "stack";
#line 340
c_rt_lib::set_ref_hash($memory_15, $memory_17, $memory_16);
#line 340
undef($memory_17);
#line 340
undef($memory_16);
#line 341
$memory_16 = c_rt_lib::ov_mk_arg('err', $memory_15);
#line 341
undef($memory_0);
#line 341
undef($memory_1);
#line 341
undef($memory_2);
#line 341
undef($memory_3);
#line 341
undef($memory_6);
#line 341
undef($memory_7);
#line 341
undef($memory_8);
#line 341
undef($memory_9);
#line 341
undef($memory_10);
#line 341
undef($memory_11);
#line 341
undef($memory_12);
#line 341
undef($memory_13);
#line 341
undef($memory_14);
#line 341
undef($memory_15);
#line 341
$_[4] = $memory_4;$_[5] = $memory_5;return $memory_16;
#line 341
undef($memory_16);
#line 341
undef($memory_15);
#line 342
goto label_419;
#line 342
label_419:
#line 342
undef($memory_13);
#line 342
undef($memory_14);
#line 343
$memory_12 = c_rt_lib::next_iter($memory_12);
#line 343
goto label_374;
#line 343
label_424:
#line 343
undef($memory_10);
#line 343
undef($memory_11);
#line 343
undef($memory_12);
#line 344
$memory_10 = c_rt_lib::ov_mk_none('ok');
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
$_[4] = $memory_4;$_[5] = $memory_5;return $memory_10;
#line 344
undef($memory_10);
#line 344
undef($memory_9);
#line 345
goto label_441;
#line 345
label_441:
#line 345
undef($memory_8);
#line 346
$memory_8 = $memory_1;
#line 346
$memory_8 = c_rt_lib::ov_is($memory_8, 'tct_rec');
#line 346
$memory_8 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 346
$memory_8 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 346
if (c_rt_lib::check_true($memory_8)) {goto label_459;}
#line 346
$memory_9 = ptd_system_priv::mk_err($memory_0, $memory_1);
#line 346
undef($memory_0);
#line 346
undef($memory_1);
#line 346
undef($memory_2);
#line 346
undef($memory_3);
#line 346
undef($memory_6);
#line 346
undef($memory_7);
#line 346
undef($memory_8);
#line 346
$_[4] = $memory_4;$_[5] = $memory_5;return $memory_9;
#line 346
undef($memory_9);
#line 346
goto label_459;
#line 346
label_459:
#line 346
undef($memory_8);
#line 347
$memory_8 = $memory_1;
#line 347
$memory_8 = c_rt_lib::ov_as($memory_8, 'tct_rec');
#line 348
$memory_9 = hash::size($memory_8);
#line 348
$memory_10 = hash::size($memory_7);
#line 348
$memory_9 = c_rt_lib::to_nl($memory_9 != $memory_10);
#line 348
undef($memory_10);
#line 348
$memory_9 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_9));
#line 348
if (c_rt_lib::check_true($memory_9)) {goto label_481;}
#line 348
$memory_10 = ptd_system_priv::mk_err($memory_0, $memory_1);
#line 348
undef($memory_0);
#line 348
undef($memory_1);
#line 348
undef($memory_2);
#line 348
undef($memory_3);
#line 348
undef($memory_6);
#line 348
undef($memory_7);
#line 348
undef($memory_8);
#line 348
undef($memory_9);
#line 348
$_[4] = $memory_4;$_[5] = $memory_5;return $memory_10;
#line 348
undef($memory_10);
#line 348
goto label_481;
#line 348
label_481:
#line 348
undef($memory_9);
#line 349
$memory_11 = c_rt_lib::init_iter($memory_7);
#line 349
label_484:
#line 349
$memory_9 = c_rt_lib::is_end_hash($memory_11);
#line 349
if (c_rt_lib::check_true($memory_9)) {goto label_557;}
#line 349
$memory_9 = c_rt_lib::get_key_iter($memory_11);
#line 349
$memory_10 = c_rt_lib::hash_get_value($memory_7, $memory_9);
#line 350
$memory_12 = hash::has_key($memory_8, $memory_9);
#line 350
$memory_12 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_12));
#line 350
$memory_12 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_12));
#line 350
if (c_rt_lib::check_true($memory_12)) {goto label_508;}
#line 350
$memory_13 = ptd_system_priv::mk_err($memory_0, $memory_1);
#line 350
undef($memory_0);
#line 350
undef($memory_1);
#line 350
undef($memory_2);
#line 350
undef($memory_3);
#line 350
undef($memory_6);
#line 350
undef($memory_7);
#line 350
undef($memory_8);
#line 350
undef($memory_9);
#line 350
undef($memory_10);
#line 350
undef($memory_11);
#line 350
undef($memory_12);
#line 350
$_[4] = $memory_4;$_[5] = $memory_5;return $memory_13;
#line 350
undef($memory_13);
#line 350
goto label_508;
#line 350
label_508:
#line 350
undef($memory_12);
#line 351
$memory_12 = hash::get_value($memory_8, $memory_9);
#line 352
$memory_13 = ptd_system_priv::check_assignment_info($memory_10, $memory_12, $memory_2, $memory_3, $memory_4, $memory_5);
#line 352
$memory_14 = c_rt_lib::ov_is($memory_13, 'ok');
#line 352
if (c_rt_lib::check_true($memory_14)) {goto label_519;}
#line 353
$memory_14 = c_rt_lib::ov_is($memory_13, 'err');
#line 353
if (c_rt_lib::check_true($memory_14)) {goto label_521;}
#line 353
$memory_14 = "NOMATCHALERT";
#line 353
$memory_14 = [$memory_14,$memory_13];
#line 353
die(dfile::ssave($memory_14));
#line 352
label_519:
#line 353
goto label_551;
#line 353
label_521:
#line 353
$memory_15 = c_rt_lib::ov_as($memory_13, 'err');
#line 354
$memory_16 = "stack";
#line 354
$memory_16 = c_rt_lib::get_ref_hash($memory_15, $memory_16);
#line 354
$memory_17 = c_rt_lib::ov_mk_arg('ptd_rec', $memory_9);
#line 354
array::push($memory_16, $memory_17);
#line 354
undef($memory_17);
#line 354
$memory_17 = "stack";
#line 354
c_rt_lib::set_ref_hash($memory_15, $memory_17, $memory_16);
#line 354
undef($memory_17);
#line 354
undef($memory_16);
#line 355
$memory_16 = c_rt_lib::ov_mk_arg('err', $memory_15);
#line 355
undef($memory_0);
#line 355
undef($memory_1);
#line 355
undef($memory_2);
#line 355
undef($memory_3);
#line 355
undef($memory_6);
#line 355
undef($memory_7);
#line 355
undef($memory_8);
#line 355
undef($memory_9);
#line 355
undef($memory_10);
#line 355
undef($memory_11);
#line 355
undef($memory_12);
#line 355
undef($memory_13);
#line 355
undef($memory_14);
#line 355
undef($memory_15);
#line 355
$_[4] = $memory_4;$_[5] = $memory_5;return $memory_16;
#line 355
undef($memory_16);
#line 355
undef($memory_15);
#line 356
goto label_551;
#line 356
label_551:
#line 356
undef($memory_13);
#line 356
undef($memory_14);
#line 356
undef($memory_12);
#line 357
$memory_11 = c_rt_lib::next_iter($memory_11);
#line 357
goto label_484;
#line 357
label_557:
#line 357
undef($memory_9);
#line 357
undef($memory_10);
#line 357
undef($memory_11);
#line 358
$memory_9 = c_rt_lib::ov_mk_none('ok');
#line 358
undef($memory_0);
#line 358
undef($memory_1);
#line 358
undef($memory_2);
#line 358
undef($memory_3);
#line 358
undef($memory_6);
#line 358
undef($memory_7);
#line 358
undef($memory_8);
#line 358
$_[4] = $memory_4;$_[5] = $memory_5;return $memory_9;
#line 358
undef($memory_9);
#line 358
undef($memory_8);
#line 358
undef($memory_7);
#line 359
goto label_818;
#line 359
label_574:
#line 359
$memory_7 = c_rt_lib::ov_as($memory_0, 'tct_ref');
#line 360
$memory_8 = [];
#line 360
die(dfile::ssave($memory_8));
#line 360
undef($memory_8);
#line 360
undef($memory_7);
#line 361
goto label_818;
#line 361
label_581:
#line 362
$memory_7 = [];
#line 362
die(dfile::ssave($memory_7));
#line 362
undef($memory_7);
#line 363
goto label_818;
#line 363
label_586:
#line 364
$memory_7 = $memory_1;
#line 364
$memory_7 = c_rt_lib::ov_is($memory_7, 'tct_sim');
#line 364
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 364
if (c_rt_lib::check_true($memory_7)) {goto label_601;}
#line 364
$memory_8 = c_rt_lib::ov_mk_none('ok');
#line 364
undef($memory_0);
#line 364
undef($memory_1);
#line 364
undef($memory_2);
#line 364
undef($memory_3);
#line 364
undef($memory_6);
#line 364
undef($memory_7);
#line 364
$_[4] = $memory_4;$_[5] = $memory_5;return $memory_8;
#line 364
undef($memory_8);
#line 364
goto label_601;
#line 364
label_601:
#line 364
undef($memory_7);
#line 365
$memory_7 = ptd_system_priv::mk_err($memory_0, $memory_1);
#line 365
undef($memory_0);
#line 365
undef($memory_1);
#line 365
undef($memory_2);
#line 365
undef($memory_3);
#line 365
undef($memory_6);
#line 365
$_[4] = $memory_4;$_[5] = $memory_5;return $memory_7;
#line 365
undef($memory_7);
#line 366
goto label_818;
#line 366
label_612:
#line 366
$memory_7 = c_rt_lib::ov_as($memory_0, 'tct_var');
#line 367
$memory_8 = $memory_1;
#line 367
$memory_8 = c_rt_lib::ov_is($memory_8, 'tct_var');
#line 367
$memory_8 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 367
$memory_8 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 367
if (c_rt_lib::check_true($memory_8)) {goto label_630;}
#line 367
$memory_9 = ptd_system_priv::mk_err($memory_0, $memory_1);
#line 367
undef($memory_0);
#line 367
undef($memory_1);
#line 367
undef($memory_2);
#line 367
undef($memory_3);
#line 367
undef($memory_6);
#line 367
undef($memory_7);
#line 367
undef($memory_8);
#line 367
$_[4] = $memory_4;$_[5] = $memory_5;return $memory_9;
#line 367
undef($memory_9);
#line 367
goto label_630;
#line 367
label_630:
#line 367
undef($memory_8);
#line 368
$memory_8 = $memory_1;
#line 368
$memory_8 = c_rt_lib::ov_as($memory_8, 'tct_var');
#line 369
$memory_11 = c_rt_lib::init_iter($memory_8);
#line 369
label_635:
#line 369
$memory_9 = c_rt_lib::is_end_hash($memory_11);
#line 369
if (c_rt_lib::check_true($memory_9)) {goto label_796;}
#line 369
$memory_9 = c_rt_lib::get_key_iter($memory_11);
#line 369
$memory_10 = c_rt_lib::hash_get_value($memory_8, $memory_9);
#line 370
$memory_12 = hash::has_key($memory_7, $memory_9);
#line 370
$memory_12 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_12));
#line 370
$memory_12 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_12));
#line 370
if (c_rt_lib::check_true($memory_12)) {goto label_659;}
#line 370
$memory_13 = ptd_system_priv::mk_err($memory_0, $memory_1);
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
$_[4] = $memory_4;$_[5] = $memory_5;return $memory_13;
#line 370
undef($memory_13);
#line 370
goto label_659;
#line 370
label_659:
#line 370
undef($memory_12);
#line 371
$memory_12 = hash::get_value($memory_7, $memory_9);
#line 372
$memory_13 = c_rt_lib::ov_is($memory_10, 'no_param');
#line 372
if (c_rt_lib::check_true($memory_13)) {goto label_669;}
#line 378
$memory_13 = c_rt_lib::ov_is($memory_10, 'with_param');
#line 378
if (c_rt_lib::check_true($memory_13)) {goto label_707;}
#line 378
$memory_13 = "NOMATCHALERT";
#line 378
$memory_13 = [$memory_13,$memory_10];
#line 378
die(dfile::ssave($memory_13));
#line 372
label_669:
#line 373
$memory_14 = c_rt_lib::ov_is($memory_12, 'no_param');
#line 373
if (c_rt_lib::check_true($memory_14)) {goto label_677;}
#line 375
$memory_14 = c_rt_lib::ov_is($memory_12, 'with_param');
#line 375
if (c_rt_lib::check_true($memory_14)) {goto label_683;}
#line 375
$memory_14 = "NOMATCHALERT";
#line 375
$memory_14 = [$memory_14,$memory_12];
#line 375
die(dfile::ssave($memory_14));
#line 373
label_677:
#line 374
undef($memory_12);
#line 374
undef($memory_13);
#line 374
undef($memory_14);
#line 374
goto label_793;
#line 375
goto label_704;
#line 375
label_683:
#line 375
$memory_15 = c_rt_lib::ov_as($memory_12, 'with_param');
#line 376
$memory_16 = ptd_system_priv::mk_err($memory_0, $memory_1);
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
$_[4] = $memory_4;$_[5] = $memory_5;return $memory_16;
#line 376
undef($memory_16);
#line 376
undef($memory_15);
#line 377
goto label_704;
#line 377
label_704:
#line 377
undef($memory_14);
#line 378
goto label_790;
#line 378
label_707:
#line 378
$memory_14 = c_rt_lib::ov_as($memory_10, 'with_param');
#line 379
$memory_15 = c_rt_lib::ov_is($memory_12, 'no_param');
#line 379
if (c_rt_lib::check_true($memory_15)) {goto label_716;}
#line 381
$memory_15 = c_rt_lib::ov_is($memory_12, 'with_param');
#line 381
if (c_rt_lib::check_true($memory_15)) {goto label_735;}
#line 381
$memory_15 = "NOMATCHALERT";
#line 381
$memory_15 = [$memory_15,$memory_12];
#line 381
die(dfile::ssave($memory_15));
#line 379
label_716:
#line 380
$memory_16 = ptd_system_priv::mk_err($memory_0, $memory_1);
#line 380
undef($memory_0);
#line 380
undef($memory_1);
#line 380
undef($memory_2);
#line 380
undef($memory_3);
#line 380
undef($memory_6);
#line 380
undef($memory_7);
#line 380
undef($memory_8);
#line 380
undef($memory_9);
#line 380
undef($memory_10);
#line 380
undef($memory_11);
#line 380
undef($memory_12);
#line 380
undef($memory_13);
#line 380
undef($memory_14);
#line 380
undef($memory_15);
#line 380
$_[4] = $memory_4;$_[5] = $memory_5;return $memory_16;
#line 380
undef($memory_16);
#line 381
goto label_786;
#line 381
label_735:
#line 381
$memory_16 = c_rt_lib::ov_as($memory_12, 'with_param');
#line 382
$memory_17 = ptd_system_priv::check_assignment_info($memory_16, $memory_14, $memory_2, $memory_3, $memory_4, $memory_5);
#line 382
$memory_18 = c_rt_lib::ov_is($memory_17, 'ok');
#line 382
if (c_rt_lib::check_true($memory_18)) {goto label_745;}
#line 383
$memory_18 = c_rt_lib::ov_is($memory_17, 'err');
#line 383
if (c_rt_lib::check_true($memory_18)) {goto label_747;}
#line 383
$memory_18 = "NOMATCHALERT";
#line 383
$memory_18 = [$memory_18,$memory_17];
#line 383
die(dfile::ssave($memory_18));
#line 382
label_745:
#line 383
goto label_781;
#line 383
label_747:
#line 383
$memory_19 = c_rt_lib::ov_as($memory_17, 'err');
#line 384
$memory_20 = "stack";
#line 384
$memory_20 = c_rt_lib::get_ref_hash($memory_19, $memory_20);
#line 384
$memory_21 = c_rt_lib::ov_mk_arg('ptd_var', $memory_9);
#line 384
array::push($memory_20, $memory_21);
#line 384
undef($memory_21);
#line 384
$memory_21 = "stack";
#line 384
c_rt_lib::set_ref_hash($memory_19, $memory_21, $memory_20);
#line 384
undef($memory_21);
#line 384
undef($memory_20);
#line 385
$memory_20 = c_rt_lib::ov_mk_arg('err', $memory_19);
#line 385
undef($memory_0);
#line 385
undef($memory_1);
#line 385
undef($memory_2);
#line 385
undef($memory_3);
#line 385
undef($memory_6);
#line 385
undef($memory_7);
#line 385
undef($memory_8);
#line 385
undef($memory_9);
#line 385
undef($memory_10);
#line 385
undef($memory_11);
#line 385
undef($memory_12);
#line 385
undef($memory_13);
#line 385
undef($memory_14);
#line 385
undef($memory_15);
#line 385
undef($memory_16);
#line 385
undef($memory_17);
#line 385
undef($memory_18);
#line 385
undef($memory_19);
#line 385
$_[4] = $memory_4;$_[5] = $memory_5;return $memory_20;
#line 385
undef($memory_20);
#line 385
undef($memory_19);
#line 386
goto label_781;
#line 386
label_781:
#line 386
undef($memory_17);
#line 386
undef($memory_18);
#line 386
undef($memory_16);
#line 387
goto label_786;
#line 387
label_786:
#line 387
undef($memory_15);
#line 387
undef($memory_14);
#line 388
goto label_790;
#line 388
label_790:
#line 388
undef($memory_13);
#line 388
undef($memory_12);
#line 388
label_793:
#line 389
$memory_11 = c_rt_lib::next_iter($memory_11);
#line 389
goto label_635;
#line 389
label_796:
#line 389
undef($memory_9);
#line 389
undef($memory_10);
#line 389
undef($memory_11);
#line 390
$memory_9 = c_rt_lib::ov_mk_none('ok');
#line 390
undef($memory_0);
#line 390
undef($memory_1);
#line 390
undef($memory_2);
#line 390
undef($memory_3);
#line 390
undef($memory_6);
#line 390
undef($memory_7);
#line 390
undef($memory_8);
#line 390
$_[4] = $memory_4;$_[5] = $memory_5;return $memory_9;
#line 390
undef($memory_9);
#line 390
undef($memory_8);
#line 390
undef($memory_7);
#line 391
goto label_818;
#line 391
label_813:
#line 392
$memory_7 = [];
#line 392
die(dfile::ssave($memory_7));
#line 392
undef($memory_7);
#line 393
goto label_818;
#line 393
label_818:
#line 393
undef($memory_6);
#line 393
undef($memory_0);
#line 393
undef($memory_1);
#line 393
undef($memory_2);
#line 393
undef($memory_3);
#line 393
$_[4] = $memory_4;$_[5] = $memory_5;return;
$_[4] = $memory_4;$_[5] = $memory_5;}

sub ptd_system_priv::add_delete($$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;$memory_0 = $_[0];$memory_1 = $_[1];Scalar::Util::weaken($_[1]) if ref($_[1]);$memory_2 = $_[2];Scalar::Util::weaken($_[2]) if ref($_[2]);
#line 398
$memory_3 = "env";
#line 398
$memory_3 = c_rt_lib::get_ref_hash($memory_1, $memory_3);
#line 398
$memory_4 = "deref";
#line 398
$memory_4 = c_rt_lib::get_ref_hash($memory_3, $memory_4);
#line 398
$memory_5 = "delete";
#line 398
$memory_5 = c_rt_lib::get_ref_hash($memory_4, $memory_5);
#line 399
$memory_7 = $memory_2->{'current_line'};
#line 400
$memory_8 = $memory_1->{'env'};
#line 400
$memory_8 = $memory_8->{'current_module'};
#line 400
$memory_6 = {line => $memory_7,module => $memory_8,type_name => $memory_0,};
#line 400
undef($memory_7);
#line 400
undef($memory_8);
#line 400
array::push($memory_5, $memory_6);
#line 400
undef($memory_6);
#line 400
$memory_6 = "delete";
#line 400
c_rt_lib::set_ref_hash($memory_4, $memory_6, $memory_5);
#line 400
$memory_6 = "deref";
#line 400
c_rt_lib::set_ref_hash($memory_3, $memory_6, $memory_4);
#line 400
$memory_6 = "env";
#line 400
c_rt_lib::set_ref_hash($memory_1, $memory_6, $memory_3);
#line 400
undef($memory_6);
#line 400
undef($memory_3);
#line 400
undef($memory_4);
#line 400
undef($memory_5);
#line 400
undef($memory_0);
#line 400
$_[1] = $memory_1;$_[2] = $memory_2;return;
$_[1] = $memory_1;$_[2] = $memory_2;}

sub ptd_system_priv::add_create($$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;$memory_0 = $_[0];$memory_1 = $_[1];Scalar::Util::weaken($_[1]) if ref($_[1]);$memory_2 = $_[2];Scalar::Util::weaken($_[2]) if ref($_[2]);
#line 407
$memory_3 = "env";
#line 407
$memory_3 = c_rt_lib::get_ref_hash($memory_1, $memory_3);
#line 407
$memory_4 = "deref";
#line 407
$memory_4 = c_rt_lib::get_ref_hash($memory_3, $memory_4);
#line 407
$memory_5 = "create";
#line 407
$memory_5 = c_rt_lib::get_ref_hash($memory_4, $memory_5);
#line 408
$memory_7 = $memory_2->{'current_line'};
#line 409
$memory_8 = $memory_1->{'env'};
#line 409
$memory_8 = $memory_8->{'current_module'};
#line 409
$memory_6 = {line => $memory_7,module => $memory_8,type_name => $memory_0,};
#line 409
undef($memory_7);
#line 409
undef($memory_8);
#line 409
array::push($memory_5, $memory_6);
#line 409
undef($memory_6);
#line 409
$memory_6 = "create";
#line 409
c_rt_lib::set_ref_hash($memory_4, $memory_6, $memory_5);
#line 409
$memory_6 = "deref";
#line 409
c_rt_lib::set_ref_hash($memory_3, $memory_6, $memory_4);
#line 409
$memory_6 = "env";
#line 409
c_rt_lib::set_ref_hash($memory_1, $memory_6, $memory_3);
#line 409
undef($memory_6);
#line 409
undef($memory_3);
#line 409
undef($memory_4);
#line 409
undef($memory_5);
#line 409
undef($memory_0);
#line 409
$_[1] = $memory_1;$_[2] = $memory_2;return;
$_[1] = $memory_1;$_[2] = $memory_2;}

sub ptd_system::can_delete($$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;$memory_0 = $_[0];$memory_1 = $_[1];Scalar::Util::weaken($_[1]) if ref($_[1]);$memory_2 = $_[2];Scalar::Util::weaken($_[2]) if ref($_[2]);
#line 416
label_0:
#line 416
$memory_3 = $memory_0->{'type'};
#line 416
$memory_3 = c_rt_lib::ov_is($memory_3, 'tct_ref');
#line 416
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 416
if (c_rt_lib::check_true($memory_3)) {goto label_23;}
#line 417
$memory_4 = $memory_0->{'type'};
#line 417
$memory_4 = c_rt_lib::ov_as($memory_4, 'tct_ref');
#line 418
$memory_6 = $memory_0->{'src'};
#line 418
$memory_5 = ptd_system::is_known($memory_6);
#line 418
undef($memory_6);
#line 418
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 418
if (c_rt_lib::check_true($memory_5)) {goto label_14;}
#line 418
ptd_system_priv::add_delete($memory_4, $memory_1, $memory_2);
#line 418
goto label_14;
#line 418
label_14:
#line 418
undef($memory_5);
#line 419
$memory_5 = ptd_system::get_ref_type($memory_4, $memory_1, $memory_2);
#line 419
$memory_6 = $memory_5;
#line 419
 if (c_rt_lib::get_hashcount($memory_0) > 1) {$memory_0 = {%{$memory_0}};}$memory_0->{'type'} = $memory_6;
#line 419
undef($memory_5);
#line 419
undef($memory_6);
#line 419
undef($memory_4);
#line 420
goto label_0;
#line 420
label_23:
#line 420
undef($memory_3);
#line 421
$_[1] = $memory_1;$_[2] = $memory_2;return $memory_0;
#line 421
undef($memory_0);
#line 421
$_[1] = $memory_1;$_[2] = $memory_2;return;
$_[1] = $memory_1;$_[2] = $memory_2;}

sub ptd_system::can_create($$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;$memory_0 = $_[0];$memory_1 = $_[1];Scalar::Util::weaken($_[1]) if ref($_[1]);$memory_2 = $_[2];Scalar::Util::weaken($_[2]) if ref($_[2]);
#line 426
label_0:
#line 426
$memory_3 = $memory_0->{'type'};
#line 426
$memory_3 = c_rt_lib::ov_is($memory_3, 'tct_ref');
#line 426
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 426
if (c_rt_lib::check_true($memory_3)) {goto label_23;}
#line 427
$memory_4 = $memory_0->{'type'};
#line 427
$memory_4 = c_rt_lib::ov_as($memory_4, 'tct_ref');
#line 428
$memory_6 = $memory_0->{'src'};
#line 428
$memory_5 = ptd_system::is_known($memory_6);
#line 428
undef($memory_6);
#line 428
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 428
if (c_rt_lib::check_true($memory_5)) {goto label_14;}
#line 428
ptd_system_priv::add_create($memory_4, $memory_1, $memory_2);
#line 428
goto label_14;
#line 428
label_14:
#line 428
undef($memory_5);
#line 429
$memory_5 = ptd_system::get_ref_type($memory_4, $memory_1, $memory_2);
#line 429
$memory_6 = $memory_5;
#line 429
 if (c_rt_lib::get_hashcount($memory_0) > 1) {$memory_0 = {%{$memory_0}};}$memory_0->{'type'} = $memory_6;
#line 429
undef($memory_5);
#line 429
undef($memory_6);
#line 429
undef($memory_4);
#line 430
goto label_0;
#line 430
label_23:
#line 430
undef($memory_3);
#line 431
$_[1] = $memory_1;$_[2] = $memory_2;return $memory_0;
#line 431
undef($memory_0);
#line 431
$_[1] = $memory_1;$_[2] = $memory_2;return;
$_[1] = $memory_1;$_[2] = $memory_2;}

sub ptd_system_priv::walk_on_type($$$$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;my $memory_13;my $memory_14;my $memory_15;my $memory_16;my $memory_17;my $memory_18;my $memory_19;$memory_0 = $_[0];$memory_1 = $_[1];$memory_2 = $_[2];$memory_3 = $_[3];Scalar::Util::weaken($_[3]) if ref($_[3]);$memory_4 = $_[4];Scalar::Util::weaken($_[4]) if ref($_[4]);
#line 436
$memory_5 = {};
#line 437
ptd_system_priv::get_ref_in_type($memory_0, $memory_5);
#line 438
$memory_6 = $memory_5;
#line 439
$memory_9 = c_rt_lib::init_iter($memory_6);
#line 439
label_4:
#line 439
$memory_7 = c_rt_lib::is_end_hash($memory_9);
#line 439
if (c_rt_lib::check_true($memory_7)) {goto label_126;}
#line 439
$memory_7 = c_rt_lib::get_key_iter($memory_9);
#line 439
$memory_8 = c_rt_lib::hash_get_value($memory_6, $memory_7);
#line 440
$memory_10 = ptd_system_priv::get_function_def($memory_7, $memory_3, $memory_4);
#line 441
$memory_11 = array::len($memory_10);
#line 441
$memory_12 = 0;
#line 441
$memory_11 = c_rt_lib::to_nl($memory_11 == $memory_12);
#line 441
undef($memory_12);
#line 441
$memory_11 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_11));
#line 441
if (c_rt_lib::check_true($memory_11)) {goto label_28;}
#line 441
undef($memory_0);
#line 441
undef($memory_1);
#line 441
undef($memory_2);
#line 441
undef($memory_5);
#line 441
undef($memory_6);
#line 441
undef($memory_7);
#line 441
undef($memory_8);
#line 441
undef($memory_9);
#line 441
undef($memory_10);
#line 441
undef($memory_11);
#line 441
$_[3] = $memory_3;$_[4] = $memory_4;return;
#line 441
goto label_28;
#line 441
label_28:
#line 441
undef($memory_11);
#line 442
$memory_12 = 0;
#line 442
$memory_11 = $memory_10->[$memory_12];
#line 442
undef($memory_12);
#line 442
$memory_10 = $memory_11;
#line 442
undef($memory_11);
#line 443
$memory_11 = $memory_10->{'ref_types'};
#line 443
$memory_12 = c_rt_lib::ov_is($memory_11, 'yes');
#line 443
if (c_rt_lib::check_true($memory_12)) {goto label_43;}
#line 447
$memory_12 = c_rt_lib::ov_is($memory_11, 'no');
#line 447
if (c_rt_lib::check_true($memory_12)) {goto label_65;}
#line 447
$memory_12 = "NOMATCHALERT";
#line 447
$memory_12 = [$memory_12,$memory_11];
#line 447
die(dfile::ssave($memory_12));
#line 443
label_43:
#line 443
$memory_13 = c_rt_lib::ov_as($memory_11, 'yes');
#line 444
$memory_15 = 0;
#line 444
$memory_16 = 1;
#line 444
$memory_17 = c_rt_lib::array_len($memory_13);
#line 444
label_48:
#line 444
$memory_18 = c_rt_lib::to_nl($memory_15 >= $memory_17);
#line 444
if (c_rt_lib::check_true($memory_18)) {goto label_57;}
#line 444
$memory_14 = $memory_13->[$memory_15];
#line 445
$memory_19 = "";
#line 445
hash::set_value($memory_5, $memory_14, $memory_19);
#line 445
undef($memory_19);
#line 446
$memory_15 = $memory_15 + $memory_16;
#line 446
goto label_48;
#line 446
label_57:
#line 446
undef($memory_14);
#line 446
undef($memory_15);
#line 446
undef($memory_16);
#line 446
undef($memory_17);
#line 446
undef($memory_18);
#line 446
undef($memory_13);
#line 447
goto label_120;
#line 447
label_65:
#line 448
$memory_13 = ptd_system::get_ref_type($memory_7, $memory_3, $memory_4);
#line 448
$memory_0 = $memory_13;
#line 448
undef($memory_13);
#line 449
$memory_13 = {};
#line 450
ptd_system_priv::get_all_ref_in_type($memory_0, $memory_13, $memory_3, $memory_4);
#line 451
$memory_14 = [];
#line 452
$memory_17 = c_rt_lib::init_iter($memory_13);
#line 452
label_73:
#line 452
$memory_15 = c_rt_lib::is_end_hash($memory_17);
#line 452
if (c_rt_lib::check_true($memory_15)) {goto label_84;}
#line 452
$memory_15 = c_rt_lib::get_key_iter($memory_17);
#line 452
$memory_16 = c_rt_lib::hash_get_value($memory_13, $memory_15);
#line 453
$memory_18 = "";
#line 453
hash::set_value($memory_5, $memory_15, $memory_18);
#line 453
undef($memory_18);
#line 454
array::push($memory_14, $memory_15);
#line 455
$memory_17 = c_rt_lib::next_iter($memory_17);
#line 455
goto label_73;
#line 455
label_84:
#line 455
undef($memory_15);
#line 455
undef($memory_16);
#line 455
undef($memory_17);
#line 456
$memory_15 = ptd_system_priv::get_function_def($memory_7, $memory_3, $memory_4);
#line 456
$memory_16 = 0;
#line 456
$memory_15 = $memory_15->[$memory_16];
#line 456
undef($memory_16);
#line 456
$memory_10 = $memory_15;
#line 456
undef($memory_15);
#line 457
$memory_15 = c_rt_lib::ov_mk_arg('yes', $memory_14);
#line 457
$memory_16 = $memory_15;
#line 457
 if (c_rt_lib::get_hashcount($memory_10) > 1) {$memory_10 = {%{$memory_10}};}$memory_10->{'ref_types'} = $memory_16;
#line 457
undef($memory_15);
#line 457
undef($memory_16);
#line 458
$memory_16 = $memory_3->{'funs'};
#line 458
$memory_17 = $memory_10->{'module'};
#line 458
$memory_15 = hash::get_value($memory_16, $memory_17);
#line 458
undef($memory_17);
#line 458
undef($memory_16);
#line 459
$memory_16 = $memory_10->{'name'};
#line 459
hash::set_value($memory_15, $memory_16, $memory_10);
#line 459
undef($memory_16);
#line 460
$memory_16 = "funs";
#line 460
$memory_16 = c_rt_lib::get_ref_hash($memory_3, $memory_16);
#line 460
$memory_17 = $memory_10->{'module'};
#line 460
hash::set_value($memory_16, $memory_17, $memory_15);
#line 460
undef($memory_17);
#line 460
$memory_17 = "funs";
#line 460
c_rt_lib::set_ref_hash($memory_3, $memory_17, $memory_16);
#line 460
undef($memory_17);
#line 460
undef($memory_16);
#line 460
undef($memory_13);
#line 460
undef($memory_14);
#line 460
undef($memory_15);
#line 461
goto label_120;
#line 461
label_120:
#line 461
undef($memory_11);
#line 461
undef($memory_12);
#line 461
undef($memory_10);
#line 462
$memory_9 = c_rt_lib::next_iter($memory_9);
#line 462
goto label_4;
#line 462
label_126:
#line 462
undef($memory_7);
#line 462
undef($memory_8);
#line 462
undef($memory_9);
#line 463
$memory_9 = c_rt_lib::init_iter($memory_5);
#line 463
label_131:
#line 463
$memory_7 = c_rt_lib::is_end_hash($memory_9);
#line 463
if (c_rt_lib::check_true($memory_7)) {goto label_162;}
#line 463
$memory_7 = c_rt_lib::get_key_iter($memory_9);
#line 463
$memory_8 = c_rt_lib::hash_get_value($memory_5, $memory_7);
#line 464
$memory_10 = hash::has_key($memory_2, $memory_7);
#line 464
$memory_10 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_10));
#line 464
if (c_rt_lib::check_true($memory_10)) {goto label_142;}
#line 464
undef($memory_10);
#line 464
goto label_159;
#line 464
goto label_142;
#line 464
label_142:
#line 464
undef($memory_10);
#line 465
$memory_10 = c_rt_lib::ov_is($memory_1, 'create');
#line 465
if (c_rt_lib::check_true($memory_10)) {goto label_151;}
#line 467
$memory_10 = c_rt_lib::ov_is($memory_1, 'delete');
#line 467
if (c_rt_lib::check_true($memory_10)) {goto label_154;}
#line 467
$memory_10 = "NOMATCHALERT";
#line 467
$memory_10 = [$memory_10,$memory_1];
#line 467
die(dfile::ssave($memory_10));
#line 465
label_151:
#line 466
ptd_system_priv::add_create($memory_7, $memory_3, $memory_4);
#line 467
goto label_157;
#line 467
label_154:
#line 468
ptd_system_priv::add_delete($memory_7, $memory_3, $memory_4);
#line 469
goto label_157;
#line 469
label_157:
#line 469
undef($memory_10);
#line 469
label_159:
#line 470
$memory_9 = c_rt_lib::next_iter($memory_9);
#line 470
goto label_131;
#line 470
label_162:
#line 470
undef($memory_7);
#line 470
undef($memory_8);
#line 470
undef($memory_9);
#line 470
undef($memory_5);
#line 470
undef($memory_6);
#line 470
undef($memory_0);
#line 470
undef($memory_1);
#line 470
undef($memory_2);
#line 470
$_[3] = $memory_3;$_[4] = $memory_4;return;
$_[3] = $memory_3;$_[4] = $memory_4;}

sub ptd_system_priv::get_all_ref_in_type($$$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;$memory_0 = $_[0];$memory_1 = $_[1];Scalar::Util::weaken($_[1]) if ref($_[1]);$memory_2 = $_[2];Scalar::Util::weaken($_[2]) if ref($_[2]);$memory_3 = $_[3];Scalar::Util::weaken($_[3]) if ref($_[3]);
#line 475
$memory_4 = {};
#line 476
ptd_system_priv::get_ref_in_type($memory_0, $memory_4);
#line 477
$memory_7 = c_rt_lib::init_iter($memory_4);
#line 477
label_3:
#line 477
$memory_5 = c_rt_lib::is_end_hash($memory_7);
#line 477
if (c_rt_lib::check_true($memory_5)) {goto label_26;}
#line 477
$memory_5 = c_rt_lib::get_key_iter($memory_7);
#line 477
$memory_6 = c_rt_lib::hash_get_value($memory_4, $memory_5);
#line 478
$memory_8 = hash::has_key($memory_1, $memory_5);
#line 478
$memory_8 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 478
if (c_rt_lib::check_true($memory_8)) {goto label_14;}
#line 478
undef($memory_8);
#line 478
goto label_23;
#line 478
goto label_14;
#line 478
label_14:
#line 478
undef($memory_8);
#line 479
$memory_8 = "";
#line 479
hash::set_value($memory_1, $memory_5, $memory_8);
#line 479
undef($memory_8);
#line 480
$memory_8 = ptd_system::get_ref_type($memory_5, $memory_2, $memory_3);
#line 480
$memory_0 = $memory_8;
#line 480
undef($memory_8);
#line 481
ptd_system_priv::get_all_ref_in_type($memory_0, $memory_1, $memory_2, $memory_3);
#line 481
label_23:
#line 482
$memory_7 = c_rt_lib::next_iter($memory_7);
#line 482
goto label_3;
#line 482
label_26:
#line 482
undef($memory_5);
#line 482
undef($memory_6);
#line 482
undef($memory_7);
#line 482
undef($memory_4);
#line 482
undef($memory_0);
#line 482
$_[1] = $memory_1;$_[2] = $memory_2;$_[3] = $memory_3;return;
$_[1] = $memory_1;$_[2] = $memory_2;$_[3] = $memory_3;}

sub ptd_system_priv::get_ref_in_type($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;$memory_0 = $_[0];$memory_1 = $_[1];Scalar::Util::weaken($_[1]) if ref($_[1]);
#line 486
$memory_2 = c_rt_lib::ov_is($memory_0, 'tct_im');
#line 486
if (c_rt_lib::check_true($memory_2)) {goto label_21;}
#line 487
$memory_2 = c_rt_lib::ov_is($memory_0, 'tct_arr');
#line 487
if (c_rt_lib::check_true($memory_2)) {goto label_23;}
#line 489
$memory_2 = c_rt_lib::ov_is($memory_0, 'tct_hash');
#line 489
if (c_rt_lib::check_true($memory_2)) {goto label_28;}
#line 491
$memory_2 = c_rt_lib::ov_is($memory_0, 'tct_rec');
#line 491
if (c_rt_lib::check_true($memory_2)) {goto label_33;}
#line 495
$memory_2 = c_rt_lib::ov_is($memory_0, 'tct_ref');
#line 495
if (c_rt_lib::check_true($memory_2)) {goto label_50;}
#line 497
$memory_2 = c_rt_lib::ov_is($memory_0, 'tct_void');
#line 497
if (c_rt_lib::check_true($memory_2)) {goto label_57;}
#line 498
$memory_2 = c_rt_lib::ov_is($memory_0, 'tct_sim');
#line 498
if (c_rt_lib::check_true($memory_2)) {goto label_59;}
#line 499
$memory_2 = c_rt_lib::ov_is($memory_0, 'tct_var');
#line 499
if (c_rt_lib::check_true($memory_2)) {goto label_61;}
#line 506
$memory_2 = c_rt_lib::ov_is($memory_0, 'tct_empty');
#line 506
if (c_rt_lib::check_true($memory_2)) {goto label_93;}
#line 506
$memory_2 = "NOMATCHALERT";
#line 506
$memory_2 = [$memory_2,$memory_0];
#line 506
die(dfile::ssave($memory_2));
#line 486
label_21:
#line 487
goto label_95;
#line 487
label_23:
#line 487
$memory_3 = c_rt_lib::ov_as($memory_0, 'tct_arr');
#line 488
ptd_system_priv::get_ref_in_type($memory_3, $memory_1);
#line 488
undef($memory_3);
#line 489
goto label_95;
#line 489
label_28:
#line 489
$memory_3 = c_rt_lib::ov_as($memory_0, 'tct_hash');
#line 490
ptd_system_priv::get_ref_in_type($memory_3, $memory_1);
#line 490
undef($memory_3);
#line 491
goto label_95;
#line 491
label_33:
#line 491
$memory_3 = c_rt_lib::ov_as($memory_0, 'tct_rec');
#line 492
$memory_6 = c_rt_lib::init_iter($memory_3);
#line 492
label_36:
#line 492
$memory_4 = c_rt_lib::is_end_hash($memory_6);
#line 492
if (c_rt_lib::check_true($memory_4)) {goto label_44;}
#line 492
$memory_4 = c_rt_lib::get_key_iter($memory_6);
#line 492
$memory_5 = c_rt_lib::hash_get_value($memory_3, $memory_4);
#line 493
ptd_system_priv::get_ref_in_type($memory_5, $memory_1);
#line 494
$memory_6 = c_rt_lib::next_iter($memory_6);
#line 494
goto label_36;
#line 494
label_44:
#line 494
undef($memory_4);
#line 494
undef($memory_5);
#line 494
undef($memory_6);
#line 494
undef($memory_3);
#line 495
goto label_95;
#line 495
label_50:
#line 495
$memory_3 = c_rt_lib::ov_as($memory_0, 'tct_ref');
#line 496
$memory_4 = "";
#line 496
hash::set_value($memory_1, $memory_3, $memory_4);
#line 496
undef($memory_4);
#line 496
undef($memory_3);
#line 497
goto label_95;
#line 497
label_57:
#line 498
goto label_95;
#line 498
label_59:
#line 499
goto label_95;
#line 499
label_61:
#line 499
$memory_3 = c_rt_lib::ov_as($memory_0, 'tct_var');
#line 500
$memory_6 = c_rt_lib::init_iter($memory_3);
#line 500
label_64:
#line 500
$memory_4 = c_rt_lib::is_end_hash($memory_6);
#line 500
if (c_rt_lib::check_true($memory_4)) {goto label_87;}
#line 500
$memory_4 = c_rt_lib::get_key_iter($memory_6);
#line 500
$memory_5 = c_rt_lib::hash_get_value($memory_3, $memory_4);
#line 501
$memory_7 = c_rt_lib::ov_is($memory_5, 'no_param');
#line 501
if (c_rt_lib::check_true($memory_7)) {goto label_76;}
#line 502
$memory_7 = c_rt_lib::ov_is($memory_5, 'with_param');
#line 502
if (c_rt_lib::check_true($memory_7)) {goto label_78;}
#line 502
$memory_7 = "NOMATCHALERT";
#line 502
$memory_7 = [$memory_7,$memory_5];
#line 502
die(dfile::ssave($memory_7));
#line 501
label_76:
#line 502
goto label_83;
#line 502
label_78:
#line 502
$memory_8 = c_rt_lib::ov_as($memory_5, 'with_param');
#line 503
ptd_system_priv::get_ref_in_type($memory_8, $memory_1);
#line 503
undef($memory_8);
#line 504
goto label_83;
#line 504
label_83:
#line 504
undef($memory_7);
#line 505
$memory_6 = c_rt_lib::next_iter($memory_6);
#line 505
goto label_64;
#line 505
label_87:
#line 505
undef($memory_4);
#line 505
undef($memory_5);
#line 505
undef($memory_6);
#line 505
undef($memory_3);
#line 506
goto label_95;
#line 506
label_93:
#line 507
goto label_95;
#line 507
label_95:
#line 507
undef($memory_2);
#line 507
undef($memory_0);
#line 507
$_[1] = $memory_1;return;
$_[1] = $memory_1;}

sub ptd_system_priv::get_function_def($$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;$memory_0 = $_[0];$memory_1 = $_[1];Scalar::Util::weaken($_[1]) if ref($_[1]);$memory_2 = $_[2];Scalar::Util::weaken($_[2]) if ref($_[2]);
#line 514
$memory_6 = "::";
#line 514
$memory_5 = string::index2($memory_0, $memory_6);
#line 514
undef($memory_6);
#line 515
$memory_6 = 0;
#line 515
$memory_6 = c_rt_lib::to_nl($memory_5 >= $memory_6);
#line 515
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 515
if (c_rt_lib::check_true($memory_6)) {goto label_25;}
#line 516
$memory_8 = 0;
#line 516
$memory_7 = string::substr($memory_0, $memory_8, $memory_5);
#line 516
undef($memory_8);
#line 516
$memory_3 = $memory_7;
#line 516
undef($memory_7);
#line 517
$memory_8 = 2;
#line 517
$memory_8 = $memory_5 + $memory_8;
#line 517
$memory_9 = string::length($memory_0);
#line 517
$memory_9 = $memory_9 - $memory_5;
#line 517
$memory_10 = 2;
#line 517
$memory_9 = $memory_9 - $memory_10;
#line 517
undef($memory_10);
#line 517
$memory_7 = string::substr($memory_0, $memory_8, $memory_9);
#line 517
undef($memory_9);
#line 517
undef($memory_8);
#line 517
$memory_4 = $memory_7;
#line 517
undef($memory_7);
#line 518
goto label_42;
#line 518
label_25:
#line 519
$memory_7 = "wrong type name `";
#line 519
$memory_7 = $memory_7 . $memory_0;
#line 519
$memory_8 = "' ";
#line 519
$memory_7 = $memory_7 . $memory_8;
#line 519
undef($memory_8);
#line 519
ptd_system_priv::add_error($memory_2, $memory_7);
#line 519
undef($memory_7);
#line 520
$memory_7 = [];
#line 520
undef($memory_0);
#line 520
undef($memory_3);
#line 520
undef($memory_4);
#line 520
undef($memory_5);
#line 520
undef($memory_6);
#line 520
$_[1] = $memory_1;$_[2] = $memory_2;return $memory_7;
#line 520
undef($memory_7);
#line 521
goto label_42;
#line 521
label_42:
#line 521
undef($memory_6);
#line 522
$memory_7 = $memory_1->{'funs'};
#line 522
$memory_6 = hash::has_key($memory_7, $memory_3);
#line 522
undef($memory_7);
#line 522
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 522
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 522
if (c_rt_lib::check_true($memory_6)) {goto label_59;}
#line 523
$memory_7 = [];
#line 523
undef($memory_0);
#line 523
undef($memory_3);
#line 523
undef($memory_4);
#line 523
undef($memory_5);
#line 523
undef($memory_6);
#line 523
$_[1] = $memory_1;$_[2] = $memory_2;return $memory_7;
#line 523
undef($memory_7);
#line 524
goto label_59;
#line 524
label_59:
#line 524
undef($memory_6);
#line 525
$memory_7 = $memory_1->{'funs'};
#line 525
$memory_6 = hash::get_value($memory_7, $memory_3);
#line 525
undef($memory_7);
#line 526
$memory_7 = hash::has_key($memory_6, $memory_4);
#line 526
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 526
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 526
if (c_rt_lib::check_true($memory_7)) {goto label_85;}
#line 527
$memory_8 = "function `";
#line 527
$memory_8 = $memory_8 . $memory_0;
#line 527
$memory_9 = "' does not exist";
#line 527
$memory_8 = $memory_8 . $memory_9;
#line 527
undef($memory_9);
#line 527
ptd_system_priv::add_error($memory_2, $memory_8);
#line 527
undef($memory_8);
#line 528
$memory_8 = [];
#line 528
undef($memory_0);
#line 528
undef($memory_3);
#line 528
undef($memory_4);
#line 528
undef($memory_5);
#line 528
undef($memory_6);
#line 528
undef($memory_7);
#line 528
$_[1] = $memory_1;$_[2] = $memory_2;return $memory_8;
#line 528
undef($memory_8);
#line 529
goto label_85;
#line 529
label_85:
#line 529
undef($memory_7);
#line 530
$memory_8 = hash::get_value($memory_6, $memory_4);
#line 530
$memory_7 = [$memory_8];
#line 530
undef($memory_8);
#line 530
undef($memory_0);
#line 530
undef($memory_3);
#line 530
undef($memory_4);
#line 530
undef($memory_5);
#line 530
undef($memory_6);
#line 530
$_[1] = $memory_1;$_[2] = $memory_2;return $memory_7;
#line 530
undef($memory_7);
#line 530
undef($memory_3);
#line 530
undef($memory_4);
#line 530
undef($memory_5);
#line 530
undef($memory_6);
#line 530
undef($memory_0);
#line 530
$_[1] = $memory_1;$_[2] = $memory_2;return;
$_[1] = $memory_1;$_[2] = $memory_2;}

sub ptd_system::get_ref_type($$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;$memory_0 = $_[0];$memory_1 = $_[1];Scalar::Util::weaken($_[1]) if ref($_[1]);$memory_2 = $_[2];Scalar::Util::weaken($_[2]) if ref($_[2]);
#line 535
$memory_3 = ptd_system_priv::get_function_def($memory_0, $memory_1, $memory_2);
#line 536
$memory_4 = array::len($memory_3);
#line 536
$memory_5 = 0;
#line 536
$memory_4 = c_rt_lib::to_nl($memory_4 == $memory_5);
#line 536
undef($memory_5);
#line 536
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 536
if (c_rt_lib::check_true($memory_4)) {goto label_14;}
#line 536
$memory_5 = tct::tct_im();
#line 536
undef($memory_0);
#line 536
undef($memory_3);
#line 536
undef($memory_4);
#line 536
$_[1] = $memory_1;$_[2] = $memory_2;return $memory_5;
#line 536
undef($memory_5);
#line 536
goto label_14;
#line 536
label_14:
#line 536
undef($memory_4);
#line 537
$memory_5 = 0;
#line 537
$memory_4 = $memory_3->[$memory_5];
#line 537
undef($memory_5);
#line 537
$memory_3 = $memory_4;
#line 537
undef($memory_4);
#line 538
$memory_5 = $memory_1->{'funs'};
#line 538
$memory_6 = $memory_3->{'module'};
#line 538
$memory_4 = hash::get_value($memory_5, $memory_6);
#line 538
undef($memory_6);
#line 538
undef($memory_5);
#line 539
$memory_5 = $memory_3->{'is_type'};
#line 539
$memory_6 = c_rt_lib::ov_is($memory_5, 'yes');
#line 539
if (c_rt_lib::check_true($memory_6)) {goto label_34;}
#line 541
$memory_6 = c_rt_lib::ov_is($memory_5, 'no');
#line 541
if (c_rt_lib::check_true($memory_6)) {goto label_44;}
#line 541
$memory_6 = "NOMATCHALERT";
#line 541
$memory_6 = [$memory_6,$memory_5];
#line 541
die(dfile::ssave($memory_6));
#line 539
label_34:
#line 539
$memory_7 = c_rt_lib::ov_as($memory_5, 'yes');
#line 540
undef($memory_0);
#line 540
undef($memory_3);
#line 540
undef($memory_4);
#line 540
undef($memory_5);
#line 540
undef($memory_6);
#line 540
$_[1] = $memory_1;$_[2] = $memory_2;return $memory_7;
#line 540
undef($memory_7);
#line 541
goto label_46;
#line 541
label_44:
#line 542
goto label_46;
#line 542
label_46:
#line 542
undef($memory_5);
#line 542
undef($memory_6);
#line 543
$memory_5 = tct::tct_im();
#line 544
$memory_7 = $memory_3->{'cmd'};
#line 544
$memory_6 = ptd_parser::fun_def_to_ptd($memory_7);
#line 544
undef($memory_7);
#line 544
$memory_7 = c_rt_lib::ov_is($memory_6, 'err');
#line 544
if (c_rt_lib::check_true($memory_7)) {goto label_60;}
#line 546
$memory_7 = c_rt_lib::ov_is($memory_6, 'ok');
#line 546
if (c_rt_lib::check_true($memory_7)) {goto label_65;}
#line 546
$memory_7 = "NOMATCHALERT";
#line 546
$memory_7 = [$memory_7,$memory_6];
#line 546
die(dfile::ssave($memory_7));
#line 544
label_60:
#line 544
$memory_8 = c_rt_lib::ov_as($memory_6, 'err');
#line 545
ptd_system_priv::add_error($memory_2, $memory_8);
#line 545
undef($memory_8);
#line 546
goto label_70;
#line 546
label_65:
#line 546
$memory_8 = c_rt_lib::ov_as($memory_6, 'ok');
#line 547
$memory_5 = $memory_8;
#line 547
undef($memory_8);
#line 548
goto label_70;
#line 548
label_70:
#line 548
undef($memory_6);
#line 548
undef($memory_7);
#line 549
$memory_6 = c_rt_lib::ov_mk_arg('yes', $memory_5);
#line 549
$memory_7 = $memory_6;
#line 549
 if (c_rt_lib::get_hashcount($memory_3) > 1) {$memory_3 = {%{$memory_3}};}$memory_3->{'is_type'} = $memory_7;
#line 549
undef($memory_6);
#line 549
undef($memory_7);
#line 550
$memory_6 = $memory_3->{'name'};
#line 550
hash::set_value($memory_4, $memory_6, $memory_3);
#line 550
undef($memory_6);
#line 551
$memory_6 = "funs";
#line 551
$memory_6 = c_rt_lib::get_ref_hash($memory_1, $memory_6);
#line 551
$memory_7 = $memory_3->{'module'};
#line 551
hash::set_value($memory_6, $memory_7, $memory_4);
#line 551
undef($memory_7);
#line 551
$memory_7 = "funs";
#line 551
c_rt_lib::set_ref_hash($memory_1, $memory_7, $memory_6);
#line 551
undef($memory_7);
#line 551
undef($memory_6);
#line 552
undef($memory_0);
#line 552
undef($memory_3);
#line 552
undef($memory_4);
#line 552
$_[1] = $memory_1;$_[2] = $memory_2;return $memory_5;
#line 552
undef($memory_3);
#line 552
undef($memory_4);
#line 552
undef($memory_5);
#line 552
undef($memory_0);
#line 552
$_[1] = $memory_1;$_[2] = $memory_2;return;
$_[1] = $memory_1;$_[2] = $memory_2;}
