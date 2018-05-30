use c_rt_lib;
use tct;
use array;
use hash;
use ov;
use nast;
use ptd;
sub ptd_parser::fun_def_to_ptd;
sub ptd_parser::try_value_to_ptd;
sub ptd_parser_priv::parse_hash;

return 1;

sub ptd_parser::fun_def_to_ptd($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;$memory_0 = $_[0];
#line 14
$memory_1 = $memory_0->{'cmd'};
#line 15
$memory_2 = $memory_1;
#line 15
$memory_2 = c_rt_lib::ov_as($memory_2, 'block');
#line 15
$memory_1 = $memory_2;
#line 15
undef($memory_2);
#line 16
$memory_2 = array::len($memory_1);
#line 16
$memory_4 = 1;
#line 16
$memory_2 = c_rt_lib::to_nl($memory_2 == $memory_4);
#line 16
undef($memory_4);
#line 16
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 16
if (c_rt_lib::check_true($memory_3)) {goto label_16;}
#line 16
$memory_4 = 0;
#line 16
$memory_2 = $memory_1->[$memory_4];
#line 16
undef($memory_4);
#line 16
$memory_2 = $memory_2->{'cmd'};
#line 16
$memory_2 = c_rt_lib::ov_is($memory_2, 'return');
#line 16
label_16:
#line 16
undef($memory_3);
#line 16
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 16
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 16
if (c_rt_lib::check_true($memory_2)) {goto label_29;}
#line 16
$memory_3 = "type function should have only a return command";
#line 16
$memory_3 = c_rt_lib::ov_mk_arg('err', $memory_3);
#line 16
undef($memory_0);
#line 16
undef($memory_1);
#line 16
undef($memory_2);
#line 16
return $memory_3;
#line 16
undef($memory_3);
#line 16
goto label_29;
#line 16
label_29:
#line 16
undef($memory_2);
#line 17
$memory_4 = 0;
#line 17
$memory_3 = $memory_1->[$memory_4];
#line 17
undef($memory_4);
#line 17
$memory_3 = $memory_3->{'cmd'};
#line 17
$memory_3 = c_rt_lib::ov_as($memory_3, 'return');
#line 17
$memory_2 = ptd_parser::try_value_to_ptd($memory_3);
#line 17
undef($memory_3);
#line 17
undef($memory_0);
#line 17
undef($memory_1);
#line 17
return $memory_2;
#line 17
undef($memory_2);
#line 17
undef($memory_1);
#line 17
undef($memory_0);
#line 17
return;
}

sub ptd_parser::try_value_to_ptd($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;my $memory_13;my $memory_14;my $memory_15;my $memory_16;my $memory_17;$memory_0 = $_[0];
#line 21
$memory_1 = $memory_0->{'value'};
#line 22
$memory_2 = $memory_1;
#line 22
$memory_2 = c_rt_lib::ov_is($memory_2, 'unary_op');
#line 22
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 22
if (c_rt_lib::check_true($memory_2)) {goto label_52;}
#line 23
$memory_3 = $memory_1;
#line 23
$memory_3 = c_rt_lib::ov_as($memory_3, 'unary_op');
#line 25
$memory_4 = $memory_3->{'op'};
#line 25
$memory_5 = "\@";
#line 25
$memory_4 = c_rt_lib::to_nl($memory_4 eq $memory_5);
#line 25
undef($memory_5);
#line 25
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 25
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 25
if (c_rt_lib::check_true($memory_4)) {goto label_27;}
#line 24
$memory_5 = "ptd function argument can be other ptd function or reference type start witch \@: ";
#line 24
$memory_6 = $memory_3->{'op'};
#line 24
$memory_5 = $memory_5 . $memory_6;
#line 24
undef($memory_6);
#line 24
$memory_5 = c_rt_lib::ov_mk_arg('err', $memory_5);
#line 24
undef($memory_0);
#line 24
undef($memory_1);
#line 24
undef($memory_2);
#line 24
undef($memory_3);
#line 24
undef($memory_4);
#line 24
return $memory_5;
#line 24
undef($memory_5);
#line 24
goto label_27;
#line 24
label_27:
#line 24
undef($memory_4);
#line 26
$memory_4 = $memory_3->{'val'};
#line 26
$memory_4 = $memory_4->{'value'};
#line 26
$memory_4 = c_rt_lib::ov_as($memory_4, 'fun_label');
#line 27
$memory_6 = $memory_4->{'module'};
#line 27
$memory_7 = "::";
#line 27
$memory_6 = $memory_6 . $memory_7;
#line 27
undef($memory_7);
#line 27
$memory_7 = $memory_4->{'name'};
#line 27
$memory_6 = $memory_6 . $memory_7;
#line 27
undef($memory_7);
#line 27
$memory_5 = tct::ref($memory_6);
#line 27
undef($memory_6);
#line 27
$memory_5 = c_rt_lib::ov_mk_arg('ok', $memory_5);
#line 27
undef($memory_0);
#line 27
undef($memory_1);
#line 27
undef($memory_2);
#line 27
undef($memory_3);
#line 27
undef($memory_4);
#line 27
return $memory_5;
#line 27
undef($memory_5);
#line 27
undef($memory_3);
#line 27
undef($memory_4);
#line 28
goto label_52;
#line 28
label_52:
#line 28
undef($memory_2);
#line 29
$memory_2 = $memory_1;
#line 29
$memory_2 = c_rt_lib::ov_is($memory_2, 'fun_val');
#line 29
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 29
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 29
if (c_rt_lib::check_true($memory_2)) {goto label_70;}
#line 29
$memory_3 = "can parse only function: ";
#line 29
$memory_4 = ov::get_element($memory_1);
#line 29
$memory_3 = $memory_3 . $memory_4;
#line 29
undef($memory_4);
#line 29
$memory_3 = c_rt_lib::ov_mk_arg('err', $memory_3);
#line 29
undef($memory_0);
#line 29
undef($memory_1);
#line 29
undef($memory_2);
#line 29
return $memory_3;
#line 29
undef($memory_3);
#line 29
goto label_70;
#line 29
label_70:
#line 29
undef($memory_2);
#line 30
$memory_2 = $memory_1;
#line 30
$memory_2 = c_rt_lib::ov_as($memory_2, 'fun_val');
#line 32
$memory_3 = $memory_2->{'module'};
#line 32
$memory_4 = "ptd";
#line 32
$memory_3 = c_rt_lib::to_nl($memory_3 eq $memory_4);
#line 32
undef($memory_4);
#line 32
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 32
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 32
if (c_rt_lib::check_true($memory_3)) {goto label_99;}
#line 31
$memory_4 = "can parse only ptd function: ";
#line 31
$memory_5 = $memory_2->{'module'};
#line 31
$memory_4 = $memory_4 . $memory_5;
#line 31
undef($memory_5);
#line 31
$memory_5 = "::";
#line 31
$memory_4 = $memory_4 . $memory_5;
#line 31
undef($memory_5);
#line 31
$memory_5 = $memory_2->{'name'};
#line 31
$memory_4 = $memory_4 . $memory_5;
#line 31
undef($memory_5);
#line 31
$memory_4 = c_rt_lib::ov_mk_arg('err', $memory_4);
#line 31
undef($memory_0);
#line 31
undef($memory_1);
#line 31
undef($memory_2);
#line 31
undef($memory_3);
#line 31
return $memory_4;
#line 31
undef($memory_4);
#line 31
goto label_99;
#line 31
label_99:
#line 31
undef($memory_3);
#line 33
$memory_4 = $memory_2->{'args'};
#line 33
$memory_3 = array::len($memory_4);
#line 33
undef($memory_4);
#line 34
$memory_4 = $memory_2->{'name'};
#line 35
$memory_5 = "sim";
#line 35
$memory_5 = c_rt_lib::to_nl($memory_4 eq $memory_5);
#line 35
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 35
if (c_rt_lib::check_true($memory_5)) {goto label_140;}
#line 36
$memory_6 = 0;
#line 36
$memory_6 = c_rt_lib::to_nl($memory_3 == $memory_6);
#line 36
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 36
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 36
if (c_rt_lib::check_true($memory_6)) {goto label_127;}
#line 36
$memory_7 = "sim can't have arguments: ";
#line 36
$memory_7 = $memory_7 . $memory_3;
#line 36
$memory_7 = c_rt_lib::ov_mk_arg('err', $memory_7);
#line 36
undef($memory_0);
#line 36
undef($memory_1);
#line 36
undef($memory_2);
#line 36
undef($memory_3);
#line 36
undef($memory_4);
#line 36
undef($memory_5);
#line 36
undef($memory_6);
#line 36
return $memory_7;
#line 36
undef($memory_7);
#line 36
goto label_127;
#line 36
label_127:
#line 36
undef($memory_6);
#line 37
$memory_6 = tct::sim();
#line 37
$memory_6 = c_rt_lib::ov_mk_arg('ok', $memory_6);
#line 37
undef($memory_0);
#line 37
undef($memory_1);
#line 37
undef($memory_2);
#line 37
undef($memory_3);
#line 37
undef($memory_4);
#line 37
undef($memory_5);
#line 37
return $memory_6;
#line 37
undef($memory_6);
#line 38
goto label_192;
#line 38
label_140:
#line 38
$memory_5 = "ptd_im";
#line 38
$memory_5 = c_rt_lib::to_nl($memory_4 eq $memory_5);
#line 38
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 38
if (c_rt_lib::check_true($memory_5)) {goto label_176;}
#line 39
$memory_6 = 0;
#line 39
$memory_6 = c_rt_lib::to_nl($memory_3 == $memory_6);
#line 39
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 39
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 39
if (c_rt_lib::check_true($memory_6)) {goto label_163;}
#line 39
$memory_7 = "im can't have arguments: ";
#line 39
$memory_7 = $memory_7 . $memory_3;
#line 39
$memory_7 = c_rt_lib::ov_mk_arg('err', $memory_7);
#line 39
undef($memory_0);
#line 39
undef($memory_1);
#line 39
undef($memory_2);
#line 39
undef($memory_3);
#line 39
undef($memory_4);
#line 39
undef($memory_5);
#line 39
undef($memory_6);
#line 39
return $memory_7;
#line 39
undef($memory_7);
#line 39
goto label_163;
#line 39
label_163:
#line 39
undef($memory_6);
#line 40
$memory_6 = tct::tct_im();
#line 40
$memory_6 = c_rt_lib::ov_mk_arg('ok', $memory_6);
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
return $memory_6;
#line 40
undef($memory_6);
#line 41
goto label_192;
#line 41
label_176:
#line 41
$memory_5 = "void";
#line 41
$memory_5 = c_rt_lib::to_nl($memory_4 eq $memory_5);
#line 41
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 41
if (c_rt_lib::check_true($memory_5)) {goto label_192;}
#line 42
$memory_6 = "Void type can be used only as a return type of function";
#line 42
$memory_6 = c_rt_lib::ov_mk_arg('err', $memory_6);
#line 42
undef($memory_0);
#line 42
undef($memory_1);
#line 42
undef($memory_2);
#line 42
undef($memory_3);
#line 42
undef($memory_4);
#line 42
undef($memory_5);
#line 42
return $memory_6;
#line 42
undef($memory_6);
#line 43
goto label_192;
#line 43
label_192:
#line 43
undef($memory_5);
#line 44
$memory_5 = "none";
#line 44
$memory_5 = c_rt_lib::to_nl($memory_4 eq $memory_5);
#line 44
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 44
if (c_rt_lib::check_true($memory_5)) {goto label_209;}
#line 44
$memory_6 = "'none' type can be used only in 'var' type";
#line 44
$memory_6 = c_rt_lib::ov_mk_arg('err', $memory_6);
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
return $memory_6;
#line 44
undef($memory_6);
#line 44
goto label_209;
#line 44
label_209:
#line 44
undef($memory_5);
#line 45
$memory_6 = $memory_2->{'args'};
#line 45
$memory_5 = array::len($memory_6);
#line 45
undef($memory_6);
#line 45
$memory_6 = 1;
#line 45
$memory_5 = c_rt_lib::to_nl($memory_5 == $memory_6);
#line 45
undef($memory_6);
#line 45
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 45
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 45
if (c_rt_lib::check_true($memory_5)) {goto label_235;}
#line 45
$memory_6 = "expected one argument in ";
#line 45
$memory_6 = $memory_6 . $memory_4;
#line 45
$memory_7 = " function call";
#line 45
$memory_6 = $memory_6 . $memory_7;
#line 45
undef($memory_7);
#line 45
$memory_6 = c_rt_lib::ov_mk_arg('err', $memory_6);
#line 45
undef($memory_0);
#line 45
undef($memory_1);
#line 45
undef($memory_2);
#line 45
undef($memory_3);
#line 45
undef($memory_4);
#line 45
undef($memory_5);
#line 45
return $memory_6;
#line 45
undef($memory_6);
#line 45
goto label_235;
#line 45
label_235:
#line 45
undef($memory_5);
#line 46
$memory_5 = $memory_2->{'args'};
#line 46
$memory_6 = 0;
#line 46
$memory_5 = $memory_5->[$memory_6];
#line 46
undef($memory_6);
#line 46
$memory_5 = $memory_5->{'val'};
#line 47
$memory_6 = "rec";
#line 47
$memory_6 = c_rt_lib::to_nl($memory_4 eq $memory_6);
#line 47
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 47
if (c_rt_lib::check_true($memory_6)) {goto label_300;}
#line 48
$memory_7 = $memory_5->{'value'};
#line 48
$memory_7 = c_rt_lib::ov_is($memory_7, 'hash_decl');
#line 48
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 48
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 48
if (c_rt_lib::check_true($memory_7)) {goto label_267;}
#line 48
$memory_8 = "rec must have hash: ";
#line 48
$memory_9 = ov::get_element($memory_5);
#line 48
$memory_8 = $memory_8 . $memory_9;
#line 48
undef($memory_9);
#line 48
$memory_8 = c_rt_lib::ov_mk_arg('err', $memory_8);
#line 48
undef($memory_0);
#line 48
undef($memory_1);
#line 48
undef($memory_2);
#line 48
undef($memory_3);
#line 48
undef($memory_4);
#line 48
undef($memory_5);
#line 48
undef($memory_6);
#line 48
undef($memory_7);
#line 48
return $memory_8;
#line 48
undef($memory_8);
#line 48
goto label_267;
#line 48
label_267:
#line 48
undef($memory_7);
#line 49
$memory_9 = ptd_parser_priv::parse_hash($memory_5);
#line 49
$memory_8 = c_rt_lib::ov_is($memory_9, 'ok');
#line 49
if (c_rt_lib::check_true($memory_8)) {goto label_282;}
#line 49
undef($memory_0);
#line 49
undef($memory_1);
#line 49
undef($memory_2);
#line 49
undef($memory_3);
#line 49
undef($memory_4);
#line 49
undef($memory_5);
#line 49
undef($memory_6);
#line 49
undef($memory_7);
#line 49
undef($memory_8);
#line 49
return $memory_9;
#line 49
label_282:
#line 49
$memory_7 = c_rt_lib::ov_as($memory_9, 'ok');
#line 49
undef($memory_8);
#line 49
undef($memory_9);
#line 50
$memory_8 = tct::rec($memory_7);
#line 50
$memory_8 = c_rt_lib::ov_mk_arg('ok', $memory_8);
#line 50
undef($memory_0);
#line 50
undef($memory_1);
#line 50
undef($memory_2);
#line 50
undef($memory_3);
#line 50
undef($memory_4);
#line 50
undef($memory_5);
#line 50
undef($memory_6);
#line 50
undef($memory_7);
#line 50
return $memory_8;
#line 50
undef($memory_8);
#line 50
undef($memory_7);
#line 51
goto label_542;
#line 51
label_300:
#line 51
$memory_6 = "hash";
#line 51
$memory_6 = c_rt_lib::to_nl($memory_4 eq $memory_6);
#line 51
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 51
if (c_rt_lib::check_true($memory_6)) {goto label_336;}
#line 52
$memory_9 = ptd_parser::try_value_to_ptd($memory_5);
#line 52
$memory_8 = c_rt_lib::ov_is($memory_9, 'ok');
#line 52
if (c_rt_lib::check_true($memory_8)) {goto label_318;}
#line 52
undef($memory_0);
#line 52
undef($memory_1);
#line 52
undef($memory_2);
#line 52
undef($memory_3);
#line 52
undef($memory_4);
#line 52
undef($memory_5);
#line 52
undef($memory_6);
#line 52
undef($memory_7);
#line 52
undef($memory_8);
#line 52
return $memory_9;
#line 52
label_318:
#line 52
$memory_7 = c_rt_lib::ov_as($memory_9, 'ok');
#line 52
undef($memory_8);
#line 52
undef($memory_9);
#line 53
$memory_8 = tct::hash($memory_7);
#line 53
$memory_8 = c_rt_lib::ov_mk_arg('ok', $memory_8);
#line 53
undef($memory_0);
#line 53
undef($memory_1);
#line 53
undef($memory_2);
#line 53
undef($memory_3);
#line 53
undef($memory_4);
#line 53
undef($memory_5);
#line 53
undef($memory_6);
#line 53
undef($memory_7);
#line 53
return $memory_8;
#line 53
undef($memory_8);
#line 53
undef($memory_7);
#line 54
goto label_542;
#line 54
label_336:
#line 54
$memory_6 = "arr";
#line 54
$memory_6 = c_rt_lib::to_nl($memory_4 eq $memory_6);
#line 54
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 54
if (c_rt_lib::check_true($memory_6)) {goto label_372;}
#line 55
$memory_9 = ptd_parser::try_value_to_ptd($memory_5);
#line 55
$memory_8 = c_rt_lib::ov_is($memory_9, 'ok');
#line 55
if (c_rt_lib::check_true($memory_8)) {goto label_354;}
#line 55
undef($memory_0);
#line 55
undef($memory_1);
#line 55
undef($memory_2);
#line 55
undef($memory_3);
#line 55
undef($memory_4);
#line 55
undef($memory_5);
#line 55
undef($memory_6);
#line 55
undef($memory_7);
#line 55
undef($memory_8);
#line 55
return $memory_9;
#line 55
label_354:
#line 55
$memory_7 = c_rt_lib::ov_as($memory_9, 'ok');
#line 55
undef($memory_8);
#line 55
undef($memory_9);
#line 56
$memory_8 = tct::arr($memory_7);
#line 56
$memory_8 = c_rt_lib::ov_mk_arg('ok', $memory_8);
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
undef($memory_5);
#line 56
undef($memory_6);
#line 56
undef($memory_7);
#line 56
return $memory_8;
#line 56
undef($memory_8);
#line 56
undef($memory_7);
#line 57
goto label_542;
#line 57
label_372:
#line 57
$memory_6 = "var";
#line 57
$memory_6 = c_rt_lib::to_nl($memory_4 eq $memory_6);
#line 57
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 57
if (c_rt_lib::check_true($memory_6)) {goto label_528;}
#line 58
$memory_7 = 1;
#line 58
$memory_7 = c_rt_lib::to_nl($memory_3 == $memory_7);
#line 58
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 58
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 58
if (c_rt_lib::check_true($memory_7)) {goto label_396;}
#line 58
$memory_8 = "var must have hash";
#line 58
$memory_8 = $memory_8 . $memory_3;
#line 58
$memory_8 = c_rt_lib::ov_mk_arg('err', $memory_8);
#line 58
undef($memory_0);
#line 58
undef($memory_1);
#line 58
undef($memory_2);
#line 58
undef($memory_3);
#line 58
undef($memory_4);
#line 58
undef($memory_5);
#line 58
undef($memory_6);
#line 58
undef($memory_7);
#line 58
return $memory_8;
#line 58
undef($memory_8);
#line 58
goto label_396;
#line 58
label_396:
#line 58
undef($memory_7);
#line 59
$memory_7 = $memory_5->{'value'};
#line 59
$memory_7 = c_rt_lib::ov_is($memory_7, 'hash_decl');
#line 59
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 59
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 59
if (c_rt_lib::check_true($memory_7)) {goto label_419;}
#line 59
$memory_8 = "var must have hash: ";
#line 59
$memory_9 = ov::get_element($memory_5);
#line 59
$memory_8 = $memory_8 . $memory_9;
#line 59
undef($memory_9);
#line 59
$memory_8 = c_rt_lib::ov_mk_arg('err', $memory_8);
#line 59
undef($memory_0);
#line 59
undef($memory_1);
#line 59
undef($memory_2);
#line 59
undef($memory_3);
#line 59
undef($memory_4);
#line 59
undef($memory_5);
#line 59
undef($memory_6);
#line 59
undef($memory_7);
#line 59
return $memory_8;
#line 59
undef($memory_8);
#line 59
goto label_419;
#line 59
label_419:
#line 59
undef($memory_7);
#line 60
$memory_7 = $memory_5->{'value'};
#line 60
$memory_7 = c_rt_lib::ov_as($memory_7, 'hash_decl');
#line 61
$memory_8 = {};
#line 62
$memory_10 = 0;
#line 62
$memory_11 = 1;
#line 62
$memory_12 = c_rt_lib::array_len($memory_7);
#line 62
label_427:
#line 62
$memory_13 = c_rt_lib::to_nl($memory_10 >= $memory_12);
#line 62
if (c_rt_lib::check_true($memory_13)) {goto label_506;}
#line 62
$memory_9 = $memory_7->[$memory_10];
#line 63
$memory_14 = $memory_9->{'val'};
#line 63
$memory_14 = $memory_14->{'value'};
#line 63
$memory_14 = c_rt_lib::ov_is($memory_14, 'fun_val');
#line 63
$memory_14 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_14));
#line 63
if (c_rt_lib::check_true($memory_14)) {goto label_469;}
#line 64
$memory_15 = $memory_9->{'val'};
#line 64
$memory_15 = $memory_15->{'value'};
#line 64
$memory_15 = c_rt_lib::ov_as($memory_15, 'fun_val');
#line 64
$memory_2 = $memory_15;
#line 64
undef($memory_15);
#line 65
$memory_15 = $memory_2->{'module'};
#line 65
$memory_17 = "ptd";
#line 65
$memory_15 = c_rt_lib::to_nl($memory_15 eq $memory_17);
#line 65
undef($memory_17);
#line 65
$memory_16 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_15));
#line 65
if (c_rt_lib::check_true($memory_16)) {goto label_451;}
#line 65
$memory_15 = $memory_2->{'name'};
#line 65
$memory_17 = "none";
#line 65
$memory_15 = c_rt_lib::to_nl($memory_15 eq $memory_17);
#line 65
undef($memory_17);
#line 65
label_451:
#line 65
undef($memory_16);
#line 65
$memory_15 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_15));
#line 65
if (c_rt_lib::check_true($memory_15)) {goto label_466;}
#line 66
$memory_16 = $memory_9->{'key'};
#line 66
$memory_16 = $memory_16->{'value'};
#line 66
$memory_16 = c_rt_lib::ov_as($memory_16, 'hash_key');
#line 66
$memory_17 = tct::none();
#line 66
hash::set_value($memory_8, $memory_16, $memory_17);
#line 66
undef($memory_17);
#line 66
undef($memory_16);
#line 67
undef($memory_14);
#line 67
undef($memory_15);
#line 67
goto label_503;
#line 68
goto label_466;
#line 68
label_466:
#line 68
undef($memory_15);
#line 69
goto label_469;
#line 69
label_469:
#line 69
undef($memory_14);
#line 70
$memory_17 = $memory_9->{'val'};
#line 70
$memory_16 = ptd_parser::try_value_to_ptd($memory_17);
#line 70
undef($memory_17);
#line 70
$memory_15 = c_rt_lib::ov_is($memory_16, 'ok');
#line 70
if (c_rt_lib::check_true($memory_15)) {goto label_493;}
#line 70
undef($memory_0);
#line 70
undef($memory_1);
#line 70
undef($memory_2);
#line 70
undef($memory_3);
#line 70
undef($memory_4);
#line 70
undef($memory_5);
#line 70
undef($memory_6);
#line 70
undef($memory_7);
#line 70
undef($memory_8);
#line 70
undef($memory_9);
#line 70
undef($memory_10);
#line 70
undef($memory_11);
#line 70
undef($memory_12);
#line 70
undef($memory_13);
#line 70
undef($memory_14);
#line 70
undef($memory_15);
#line 70
return $memory_16;
#line 70
label_493:
#line 70
$memory_14 = c_rt_lib::ov_as($memory_16, 'ok');
#line 70
undef($memory_15);
#line 70
undef($memory_16);
#line 71
$memory_15 = $memory_9->{'key'};
#line 71
$memory_15 = $memory_15->{'value'};
#line 71
$memory_15 = c_rt_lib::ov_as($memory_15, 'hash_key');
#line 71
hash::set_value($memory_8, $memory_15, $memory_14);
#line 71
undef($memory_15);
#line 71
undef($memory_14);
#line 71
label_503:
#line 72
$memory_10 = $memory_10 + $memory_11;
#line 72
goto label_427;
#line 72
label_506:
#line 72
undef($memory_9);
#line 72
undef($memory_10);
#line 72
undef($memory_11);
#line 72
undef($memory_12);
#line 72
undef($memory_13);
#line 73
$memory_9 = tct::var($memory_8);
#line 73
$memory_9 = c_rt_lib::ov_mk_arg('ok', $memory_9);
#line 73
undef($memory_0);
#line 73
undef($memory_1);
#line 73
undef($memory_2);
#line 73
undef($memory_3);
#line 73
undef($memory_4);
#line 73
undef($memory_5);
#line 73
undef($memory_6);
#line 73
undef($memory_7);
#line 73
undef($memory_8);
#line 73
return $memory_9;
#line 73
undef($memory_9);
#line 73
undef($memory_7);
#line 73
undef($memory_8);
#line 74
goto label_542;
#line 74
label_528:
#line 75
$memory_7 = "it is not type function : ";
#line 75
$memory_7 = $memory_7 . $memory_4;
#line 75
$memory_7 = c_rt_lib::ov_mk_arg('err', $memory_7);
#line 75
undef($memory_0);
#line 75
undef($memory_1);
#line 75
undef($memory_2);
#line 75
undef($memory_3);
#line 75
undef($memory_4);
#line 75
undef($memory_5);
#line 75
undef($memory_6);
#line 75
return $memory_7;
#line 75
undef($memory_7);
#line 76
goto label_542;
#line 76
label_542:
#line 76
undef($memory_6);
#line 76
undef($memory_1);
#line 76
undef($memory_2);
#line 76
undef($memory_3);
#line 76
undef($memory_4);
#line 76
undef($memory_5);
#line 76
undef($memory_0);
#line 76
return;
}

sub ptd_parser_priv::parse_hash($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;$memory_0 = $_[0];
#line 80
$memory_1 = $memory_0->{'value'};
#line 80
$memory_1 = c_rt_lib::ov_as($memory_1, 'hash_decl');
#line 81
$memory_2 = {};
#line 82
$memory_4 = 0;
#line 82
$memory_5 = 1;
#line 82
$memory_6 = c_rt_lib::array_len($memory_1);
#line 82
label_6:
#line 82
$memory_7 = c_rt_lib::to_nl($memory_4 >= $memory_6);
#line 82
if (c_rt_lib::check_true($memory_7)) {goto label_38;}
#line 82
$memory_3 = $memory_1->[$memory_4];
#line 83
$memory_11 = $memory_3->{'val'};
#line 83
$memory_10 = ptd_parser::try_value_to_ptd($memory_11);
#line 83
undef($memory_11);
#line 83
$memory_9 = c_rt_lib::ov_is($memory_10, 'ok');
#line 83
if (c_rt_lib::check_true($memory_9)) {goto label_26;}
#line 83
undef($memory_0);
#line 83
undef($memory_1);
#line 83
undef($memory_2);
#line 83
undef($memory_3);
#line 83
undef($memory_4);
#line 83
undef($memory_5);
#line 83
undef($memory_6);
#line 83
undef($memory_7);
#line 83
undef($memory_8);
#line 83
undef($memory_9);
#line 83
return $memory_10;
#line 83
label_26:
#line 83
$memory_8 = c_rt_lib::ov_as($memory_10, 'ok');
#line 83
undef($memory_9);
#line 83
undef($memory_10);
#line 84
$memory_9 = $memory_3->{'key'};
#line 84
$memory_9 = $memory_9->{'value'};
#line 84
$memory_9 = c_rt_lib::ov_as($memory_9, 'hash_key');
#line 84
hash::set_value($memory_2, $memory_9, $memory_8);
#line 84
undef($memory_9);
#line 84
undef($memory_8);
#line 85
$memory_4 = $memory_4 + $memory_5;
#line 85
goto label_6;
#line 85
label_38:
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
#line 86
$memory_3 = c_rt_lib::ov_mk_arg('ok', $memory_2);
#line 86
undef($memory_0);
#line 86
undef($memory_1);
#line 86
undef($memory_2);
#line 86
return $memory_3;
#line 86
undef($memory_3);
#line 86
undef($memory_1);
#line 86
undef($memory_2);
#line 86
undef($memory_0);
#line 86
return;
}
