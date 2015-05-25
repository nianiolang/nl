use c_rt_lib;
use nlasm;
use translator;
use nparser;
use module_checker;
use type_checker;
use array;
use hash;
use generator_js;
use post_processing;
use ptd;
sub string_compiler::compile;
sub string_compiler::compile_to_nlasm;
sub string_compiler::compile_to_js;

return 1;

sub string_compiler::compile($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;$memory_0 = $_[0];$memory_1 = $_[1];
#line 19
$memory_2 = nparser::sparse($memory_0, $memory_1);
#line 20
$memory_3 = [];
#line 21
$memory_4 = c_rt_lib::ov_is($memory_2, 'ok');
#line 21
if (c_rt_lib::check_true($memory_4)) {goto label_2;}
#line 31
$memory_4 = c_rt_lib::ov_is($memory_2, 'error');
#line 31
if (c_rt_lib::check_true($memory_4)) {goto label_3;}
#line 31
$memory_4 = "NOMATCHALERT";
#line 31
$memory_4 = [$memory_4,$memory_2];
#line 31
die(dfile::ssave($memory_4));
#line 21
label_2:
#line 21
$memory_5 = c_rt_lib::ov_as($memory_2, 'ok');
#line 22
$memory_6 = module_checker::check_module($memory_5);
#line 23
$memory_7 = $memory_6->{'errors'};
#line 23
$memory_3 = $memory_7;
#line 23
undef($memory_7);
#line 24
$memory_7 = array::len($memory_3);
#line 24
$memory_8 = 0;
#line 24
$memory_7 = c_rt_lib::to_nl($memory_7 == $memory_8);
#line 24
undef($memory_8);
#line 24
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 24
if (c_rt_lib::check_true($memory_7)) {goto label_5;}
#line 25
$memory_8 = {};
#line 26
$memory_9 = $memory_5->{'name'};
#line 26
hash::set_value($memory_8, $memory_9, $memory_5);
#line 26
undef($memory_9);
#line 27
$memory_9 = type_checker::check_modules($memory_8, $memory_8);
#line 28
$memory_10 = $memory_9->{'errors'};
#line 28
$memory_3 = $memory_10;
#line 28
undef($memory_10);
#line 28
undef($memory_8);
#line 28
undef($memory_9);
#line 29
goto label_5;
#line 29
label_5:
#line 29
undef($memory_7);
#line 30
$memory_7 = array::len($memory_3);
#line 30
$memory_8 = 0;
#line 30
$memory_7 = c_rt_lib::to_nl($memory_7 == $memory_8);
#line 30
undef($memory_8);
#line 30
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 30
if (c_rt_lib::check_true($memory_7)) {goto label_7;}
#line 30
$memory_8 = translator::translate($memory_5);
#line 30
$memory_8 = c_rt_lib::ov_mk_arg('ok', $memory_8);
#line 30
undef($memory_0);
#line 30
undef($memory_1);
#line 30
undef($memory_2);
#line 30
undef($memory_3);
#line 30
undef($memory_4);
#line 30
undef($memory_5);
#line 30
undef($memory_6);
#line 30
undef($memory_7);
#line 30
return $memory_8;
#line 30
undef($memory_8);
#line 30
goto label_7;
#line 30
label_7:
#line 30
undef($memory_7);
#line 30
undef($memory_6);
#line 30
undef($memory_5);
#line 31
goto label_1;
#line 31
label_3:
#line 31
$memory_5 = c_rt_lib::ov_as($memory_2, 'error');
#line 32
$memory_3 = $memory_5;
#line 32
undef($memory_5);
#line 33
goto label_1;
#line 33
label_1:
#line 33
undef($memory_4);
#line 34
$memory_6 = 0;
#line 34
$memory_5 = $memory_3->[$memory_6];
#line 34
undef($memory_6);
#line 34
$memory_5 = $memory_5->{'line'};
#line 34
$memory_7 = 0;
#line 34
$memory_6 = $memory_3->[$memory_7];
#line 34
undef($memory_7);
#line 34
$memory_6 = $memory_6->{'msg'};
#line 34
$memory_4 = {line => $memory_5,message => $memory_6,};
#line 34
undef($memory_5);
#line 34
undef($memory_6);
#line 34
$memory_4 = c_rt_lib::ov_mk_arg('err', $memory_4);
#line 34
undef($memory_0);
#line 34
undef($memory_1);
#line 34
undef($memory_2);
#line 34
undef($memory_3);
#line 34
return $memory_4;
#line 34
undef($memory_4);
#line 34
undef($memory_2);
#line 34
undef($memory_3);
#line 34
undef($memory_0);
#line 34
undef($memory_1);
#line 34
return;
}

sub string_compiler::compile_to_nlasm($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;my $memory_13;my $memory_14;my $memory_15;my $memory_16;my $memory_17;my $memory_18;$memory_0 = $_[0];
#line 38
$memory_1 = [];
#line 39
$memory_2 = {};
#line 40
$memory_5 = c_rt_lib::init_iter($memory_0);
#line 40
label_3:
#line 40
$memory_3 = c_rt_lib::is_end_hash($memory_5);
#line 40
if (c_rt_lib::check_true($memory_3)) {goto label_1;}
#line 40
$memory_3 = c_rt_lib::get_key_iter($memory_5);
#line 40
$memory_4 = c_rt_lib::hash_get_value($memory_0, $memory_3);
#line 41
$memory_6 = nparser::sparse($memory_4, $memory_3);
#line 41
$memory_7 = c_rt_lib::ov_is($memory_6, 'ok');
#line 41
if (c_rt_lib::check_true($memory_7)) {goto label_5;}
#line 47
$memory_7 = c_rt_lib::ov_is($memory_6, 'error');
#line 47
if (c_rt_lib::check_true($memory_7)) {goto label_6;}
#line 47
$memory_7 = "NOMATCHALERT";
#line 47
$memory_7 = [$memory_7,$memory_6];
#line 47
die(dfile::ssave($memory_7));
#line 41
label_5:
#line 41
$memory_8 = c_rt_lib::ov_as($memory_6, 'ok');
#line 42
$memory_9 = module_checker::check_module($memory_8);
#line 43
$memory_10 = $memory_9->{'errors'};
#line 43
$memory_12 = 0;
#line 43
$memory_13 = 1;
#line 43
$memory_14 = c_rt_lib::array_len($memory_10);
#line 43
label_9:
#line 43
$memory_15 = c_rt_lib::to_nl($memory_12 >= $memory_14);
#line 43
if (c_rt_lib::check_true($memory_15)) {goto label_7;}
#line 43
$memory_11 = $memory_10->[$memory_12];
#line 44
$memory_17 = $memory_11->{'msg'};
#line 44
$memory_18 = $memory_11->{'line'};
#line 44
$memory_16 = {msg => $memory_17,line => $memory_18,module => $memory_3,};
#line 44
undef($memory_17);
#line 44
undef($memory_18);
#line 44
array::push($memory_1, $memory_16);
#line 44
undef($memory_16);
#line 45
$memory_12 = $memory_12 + $memory_13;
#line 45
goto label_9;
#line 45
label_7:
#line 45
undef($memory_10);
#line 45
undef($memory_11);
#line 45
undef($memory_12);
#line 45
undef($memory_13);
#line 45
undef($memory_14);
#line 45
undef($memory_15);
#line 46
hash::set_value($memory_2, $memory_3, $memory_8);
#line 46
undef($memory_9);
#line 46
undef($memory_8);
#line 47
goto label_4;
#line 47
label_6:
#line 47
$memory_8 = c_rt_lib::ov_as($memory_6, 'error');
#line 48
$memory_10 = 0;
#line 48
$memory_11 = 1;
#line 48
$memory_12 = c_rt_lib::array_len($memory_8);
#line 48
label_12:
#line 48
$memory_13 = c_rt_lib::to_nl($memory_10 >= $memory_12);
#line 48
if (c_rt_lib::check_true($memory_13)) {goto label_10;}
#line 48
$memory_9 = $memory_8->[$memory_10];
#line 49
$memory_15 = $memory_9->{'msg'};
#line 49
$memory_16 = $memory_9->{'line'};
#line 49
$memory_14 = {msg => $memory_15,line => $memory_16,module => $memory_3,};
#line 49
undef($memory_15);
#line 49
undef($memory_16);
#line 49
array::push($memory_1, $memory_14);
#line 49
undef($memory_14);
#line 50
$memory_10 = $memory_10 + $memory_11;
#line 50
goto label_12;
#line 50
label_10:
#line 50
undef($memory_9);
#line 50
undef($memory_10);
#line 50
undef($memory_11);
#line 50
undef($memory_12);
#line 50
undef($memory_13);
#line 50
undef($memory_8);
#line 51
goto label_4;
#line 51
label_4:
#line 51
undef($memory_6);
#line 51
undef($memory_7);
#line 52
$memory_5 = c_rt_lib::next_iter($memory_5);
#line 52
goto label_3;
#line 52
label_1:
#line 52
undef($memory_3);
#line 52
undef($memory_4);
#line 52
undef($memory_5);
#line 53
$memory_3 = array::len($memory_1);
#line 53
$memory_4 = 0;
#line 53
$memory_3 = c_rt_lib::to_nl($memory_3 > $memory_4);
#line 53
undef($memory_4);
#line 53
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 53
if (c_rt_lib::check_true($memory_3)) {goto label_14;}
#line 53
$memory_4 = c_rt_lib::ov_mk_arg('err', $memory_1);
#line 53
undef($memory_0);
#line 53
undef($memory_1);
#line 53
undef($memory_2);
#line 53
undef($memory_3);
#line 53
return $memory_4;
#line 53
undef($memory_4);
#line 53
goto label_14;
#line 53
label_14:
#line 53
undef($memory_3);
#line 55
$memory_3 = type_checker::check_modules($memory_2, $memory_2);
#line 56
$memory_5 = $memory_3->{'errors'};
#line 56
$memory_4 = array::len($memory_5);
#line 56
undef($memory_5);
#line 56
$memory_5 = 0;
#line 56
$memory_4 = c_rt_lib::to_nl($memory_4 > $memory_5);
#line 56
undef($memory_5);
#line 56
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 56
if (c_rt_lib::check_true($memory_4)) {goto label_16;}
#line 56
$memory_5 = $memory_3->{'errors'};
#line 56
$memory_5 = c_rt_lib::ov_mk_arg('err', $memory_5);
#line 56
undef($memory_0);
#line 56
undef($memory_1);
#line 56
undef($memory_2);
#line 56
undef($memory_3);
#line 56
undef($memory_4);
#line 56
return $memory_5;
#line 56
undef($memory_5);
#line 56
goto label_16;
#line 56
label_16:
#line 56
undef($memory_4);
#line 58
$memory_4 = {};
#line 59
$memory_7 = c_rt_lib::init_iter($memory_2);
#line 59
label_19:
#line 59
$memory_5 = c_rt_lib::is_end_hash($memory_7);
#line 59
if (c_rt_lib::check_true($memory_5)) {goto label_17;}
#line 59
$memory_5 = c_rt_lib::get_key_iter($memory_7);
#line 59
$memory_6 = c_rt_lib::hash_get_value($memory_2, $memory_5);
#line 60
$memory_8 = translator::translate($memory_6);
#line 60
hash::set_value($memory_4, $memory_5, $memory_8);
#line 60
undef($memory_8);
#line 61
$memory_7 = c_rt_lib::next_iter($memory_7);
#line 61
goto label_19;
#line 61
label_17:
#line 61
undef($memory_5);
#line 61
undef($memory_6);
#line 61
undef($memory_7);
#line 62
$memory_6 = {};
#line 62
$memory_7 = c_rt_lib::ov_mk_none('o0');
#line 62
$memory_5 = post_processing::init($memory_6, $memory_7);
#line 62
undef($memory_7);
#line 62
undef($memory_6);
#line 63
post_processing::find($memory_5, $memory_4);
#line 64
$memory_6 = c_rt_lib::ov_mk_arg('ok', $memory_4);
#line 64
undef($memory_0);
#line 64
undef($memory_1);
#line 64
undef($memory_2);
#line 64
undef($memory_3);
#line 64
undef($memory_4);
#line 64
undef($memory_5);
#line 64
return $memory_6;
#line 64
undef($memory_6);
#line 64
undef($memory_1);
#line 64
undef($memory_2);
#line 64
undef($memory_3);
#line 64
undef($memory_4);
#line 64
undef($memory_5);
#line 64
undef($memory_0);
#line 64
return;
}

sub string_compiler::compile_to_js($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;$memory_0 = $_[0];
#line 69
$memory_3 = string_compiler::compile_to_nlasm($memory_0);
#line 69
$memory_2 = c_rt_lib::ov_is($memory_3, 'ok');
#line 69
if (c_rt_lib::check_true($memory_2)) {goto label_1;}
#line 69
undef($memory_0);
#line 69
undef($memory_1);
#line 69
undef($memory_2);
#line 69
return $memory_3;
#line 69
label_1:
#line 69
$memory_1 = c_rt_lib::ov_as($memory_3, 'ok');
#line 69
undef($memory_2);
#line 69
undef($memory_3);
#line 70
$memory_2 = {};
#line 71
$memory_5 = c_rt_lib::init_iter($memory_1);
#line 71
label_4:
#line 71
$memory_3 = c_rt_lib::is_end_hash($memory_5);
#line 71
if (c_rt_lib::check_true($memory_3)) {goto label_2;}
#line 71
$memory_3 = c_rt_lib::get_key_iter($memory_5);
#line 71
$memory_4 = c_rt_lib::hash_get_value($memory_1, $memory_3);
#line 72
$memory_6 = generator_js::generate($memory_4);
#line 72
hash::set_value($memory_2, $memory_3, $memory_6);
#line 72
undef($memory_6);
#line 73
$memory_5 = c_rt_lib::next_iter($memory_5);
#line 73
goto label_4;
#line 73
label_2:
#line 73
undef($memory_3);
#line 73
undef($memory_4);
#line 73
undef($memory_5);
#line 74
$memory_3 = c_rt_lib::ov_mk_arg('ok', $memory_2);
#line 74
undef($memory_0);
#line 74
undef($memory_1);
#line 74
undef($memory_2);
#line 74
return $memory_3;
#line 74
undef($memory_3);
#line 74
undef($memory_1);
#line 74
undef($memory_2);
#line 74
undef($memory_0);
#line 74
return;
}
