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
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;$memory_0 = $_[0];
#line 15
$memory_1 = $memory_0->{'cmd'};
#line 16
$memory_2 = $memory_1;
#line 16
$memory_2 = c_rt_lib::ov_as($memory_2, 'block');
#line 16
$memory_1 = $memory_2;
#line 16
undef($memory_2);
#line 17
$memory_2 = array::len($memory_1);
#line 17
$memory_4 = 1;
#line 17
$memory_2 = c_rt_lib::to_nl($memory_2 == $memory_4);
#line 17
undef($memory_4);
#line 17
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 17
if (c_rt_lib::check_true($memory_3)) {goto label_3;}
#line 17
$memory_5 = 0;
#line 17
$memory_4 = $memory_1->[$memory_5];
#line 17
undef($memory_5);
#line 17
$memory_4 = $memory_4->{'cmd'};
#line 17
$memory_5 = "return";
#line 17
$memory_2 = ov::is($memory_4, $memory_5);
#line 17
undef($memory_5);
#line 17
undef($memory_4);
#line 17
label_3:
#line 17
undef($memory_3);
#line 17
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 17
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 17
if (c_rt_lib::check_true($memory_2)) {goto label_2;}
#line 17
$memory_3 = "type function should have only a return command";
#line 17
$memory_3 = c_rt_lib::ov_mk_arg('err', $memory_3);
#line 17
undef($memory_0);
#line 17
undef($memory_1);
#line 17
undef($memory_2);
#line 17
return $memory_3;
#line 17
undef($memory_3);
#line 17
goto label_2;
#line 17
label_2:
#line 17
undef($memory_2);
#line 18
$memory_4 = 0;
#line 18
$memory_3 = $memory_1->[$memory_4];
#line 18
undef($memory_4);
#line 18
$memory_3 = $memory_3->{'cmd'};
#line 18
$memory_3 = c_rt_lib::ov_as($memory_3, 'return');
#line 18
$memory_2 = ptd_parser::try_value_to_ptd($memory_3);
#line 18
undef($memory_3);
#line 18
undef($memory_0);
#line 18
undef($memory_1);
#line 18
return $memory_2;
#line 18
undef($memory_2);
#line 18
undef($memory_1);
#line 18
undef($memory_0);
#line 18
return;
}

sub ptd_parser::try_value_to_ptd($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;my $memory_13;my $memory_14;my $memory_15;my $memory_16;my $memory_17;$memory_0 = $_[0];
#line 22
$memory_2 = "unary_op";
#line 22
$memory_1 = ov::is($memory_0, $memory_2);
#line 22
undef($memory_2);
#line 22
$memory_1 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_1));
#line 22
if (c_rt_lib::check_true($memory_1)) {goto label_2;}
#line 23
$memory_3 = "unary_op";
#line 23
$memory_2 = ov::as($memory_0, $memory_3);
#line 23
undef($memory_3);
#line 24
$memory_3 = $memory_2->{'op'};
#line 24
$memory_4 = "\@";
#line 24
$memory_3 = c_rt_lib::to_nl($memory_3 eq $memory_4);
#line 24
undef($memory_4);
#line 24
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 24
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 24
if (c_rt_lib::check_true($memory_3)) {goto label_4;}
#line 24
$memory_4 = "ptd function argument can be other ptd function or reference type start witch \@: ";
#line 24
$memory_5 = $memory_2->{'op'};
#line 24
$memory_4 = $memory_4 . $memory_5;
#line 24
undef($memory_5);
#line 24
$memory_4 = c_rt_lib::ov_mk_arg('err', $memory_4);
#line 24
undef($memory_0);
#line 24
undef($memory_1);
#line 24
undef($memory_2);
#line 24
undef($memory_3);
#line 24
return $memory_4;
#line 24
undef($memory_4);
#line 24
goto label_4;
#line 24
label_4:
#line 24
undef($memory_3);
#line 27
$memory_4 = $memory_2->{'val'};
#line 27
$memory_5 = "fun_label";
#line 27
$memory_3 = ov::as($memory_4, $memory_5);
#line 27
undef($memory_5);
#line 27
undef($memory_4);
#line 28
$memory_5 = $memory_3->{'module'};
#line 28
$memory_6 = "::";
#line 28
$memory_5 = $memory_5 . $memory_6;
#line 28
undef($memory_6);
#line 28
$memory_6 = $memory_3->{'name'};
#line 28
$memory_5 = $memory_5 . $memory_6;
#line 28
undef($memory_6);
#line 28
$memory_4 = tct::ref($memory_5);
#line 28
undef($memory_5);
#line 28
$memory_4 = c_rt_lib::ov_mk_arg('ok', $memory_4);
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
undef($memory_2);
#line 28
undef($memory_3);
#line 29
goto label_2;
#line 29
label_2:
#line 29
undef($memory_1);
#line 31
$memory_2 = "fun_val";
#line 31
$memory_1 = ov::is($memory_0, $memory_2);
#line 31
undef($memory_2);
#line 31
$memory_1 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_1));
#line 31
$memory_1 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_1));
#line 31
if (c_rt_lib::check_true($memory_1)) {goto label_6;}
#line 31
$memory_2 = "can parse only function: ";
#line 31
$memory_3 = ov::get_element($memory_0);
#line 31
$memory_2 = $memory_2 . $memory_3;
#line 31
undef($memory_3);
#line 31
$memory_2 = c_rt_lib::ov_mk_arg('err', $memory_2);
#line 31
undef($memory_0);
#line 31
undef($memory_1);
#line 31
return $memory_2;
#line 31
undef($memory_2);
#line 31
goto label_6;
#line 31
label_6:
#line 31
undef($memory_1);
#line 32
$memory_1 = $memory_0;
#line 32
$memory_1 = c_rt_lib::ov_as($memory_1, 'fun_val');
#line 33
$memory_2 = $memory_1->{'module'};
#line 33
$memory_3 = "ptd";
#line 33
$memory_2 = c_rt_lib::to_nl($memory_2 eq $memory_3);
#line 33
undef($memory_3);
#line 33
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 33
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 33
if (c_rt_lib::check_true($memory_2)) {goto label_8;}
#line 33
$memory_3 = "can parse only ptd function: ";
#line 33
$memory_4 = $memory_1->{'module'};
#line 33
$memory_3 = $memory_3 . $memory_4;
#line 33
undef($memory_4);
#line 33
$memory_4 = "::";
#line 33
$memory_3 = $memory_3 . $memory_4;
#line 33
undef($memory_4);
#line 33
$memory_4 = $memory_1->{'name'};
#line 33
$memory_3 = $memory_3 . $memory_4;
#line 33
undef($memory_4);
#line 33
$memory_3 = c_rt_lib::ov_mk_arg('err', $memory_3);
#line 33
undef($memory_0);
#line 33
undef($memory_1);
#line 33
undef($memory_2);
#line 33
return $memory_3;
#line 33
undef($memory_3);
#line 33
goto label_8;
#line 33
label_8:
#line 33
undef($memory_2);
#line 36
$memory_3 = $memory_1->{'args'};
#line 36
$memory_2 = array::len($memory_3);
#line 36
undef($memory_3);
#line 37
$memory_3 = $memory_1->{'name'};
#line 38
$memory_4 = "sim";
#line 38
$memory_4 = c_rt_lib::to_nl($memory_3 eq $memory_4);
#line 38
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 38
if (c_rt_lib::check_true($memory_4)) {goto label_10;}
#line 39
$memory_5 = 0;
#line 39
$memory_5 = c_rt_lib::to_nl($memory_2 == $memory_5);
#line 39
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 39
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 39
if (c_rt_lib::check_true($memory_5)) {goto label_12;}
#line 39
$memory_6 = "sim can't have arguments: ";
#line 39
$memory_6 = $memory_6 . $memory_2;
#line 39
$memory_6 = c_rt_lib::ov_mk_arg('err', $memory_6);
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
return $memory_6;
#line 39
undef($memory_6);
#line 39
goto label_12;
#line 39
label_12:
#line 39
undef($memory_5);
#line 40
$memory_5 = tct::sim();
#line 40
$memory_5 = c_rt_lib::ov_mk_arg('ok', $memory_5);
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
return $memory_5;
#line 40
undef($memory_5);
#line 41
goto label_16;
#line 41
label_10:
#line 41
$memory_4 = "ptd_im";
#line 41
$memory_4 = c_rt_lib::to_nl($memory_3 eq $memory_4);
#line 41
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 41
if (c_rt_lib::check_true($memory_4)) {goto label_13;}
#line 42
$memory_5 = 0;
#line 42
$memory_5 = c_rt_lib::to_nl($memory_2 == $memory_5);
#line 42
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 42
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 42
if (c_rt_lib::check_true($memory_5)) {goto label_15;}
#line 42
$memory_6 = "im can't have arguments: ";
#line 42
$memory_6 = $memory_6 . $memory_2;
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
#line 42
goto label_15;
#line 42
label_15:
#line 42
undef($memory_5);
#line 43
$memory_5 = tct::tct_im();
#line 43
$memory_5 = c_rt_lib::ov_mk_arg('ok', $memory_5);
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
return $memory_5;
#line 43
undef($memory_5);
#line 44
goto label_16;
#line 44
label_13:
#line 44
$memory_4 = "void";
#line 44
$memory_4 = c_rt_lib::to_nl($memory_3 eq $memory_4);
#line 44
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 44
if (c_rt_lib::check_true($memory_4)) {goto label_16;}
#line 45
$memory_5 = "Void type can be used only as a return type of function";
#line 45
$memory_5 = c_rt_lib::ov_mk_arg('err', $memory_5);
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
return $memory_5;
#line 45
undef($memory_5);
#line 46
goto label_16;
#line 46
label_16:
#line 46
undef($memory_4);
#line 47
$memory_4 = "none";
#line 47
$memory_4 = c_rt_lib::to_nl($memory_3 eq $memory_4);
#line 47
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 47
if (c_rt_lib::check_true($memory_4)) {goto label_18;}
#line 47
$memory_5 = "'none' type can be used only in 'var' type";
#line 47
$memory_5 = c_rt_lib::ov_mk_arg('err', $memory_5);
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
return $memory_5;
#line 47
undef($memory_5);
#line 47
goto label_18;
#line 47
label_18:
#line 47
undef($memory_4);
#line 48
$memory_5 = $memory_1->{'args'};
#line 48
$memory_4 = array::len($memory_5);
#line 48
undef($memory_5);
#line 48
$memory_5 = 1;
#line 48
$memory_4 = c_rt_lib::to_nl($memory_4 == $memory_5);
#line 48
undef($memory_5);
#line 48
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 48
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 48
if (c_rt_lib::check_true($memory_4)) {goto label_20;}
#line 48
$memory_5 = "expected one argument in ";
#line 48
$memory_5 = $memory_5 . $memory_3;
#line 48
$memory_6 = " function call";
#line 48
$memory_5 = $memory_5 . $memory_6;
#line 48
undef($memory_6);
#line 48
$memory_5 = c_rt_lib::ov_mk_arg('err', $memory_5);
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
return $memory_5;
#line 48
undef($memory_5);
#line 48
goto label_20;
#line 48
label_20:
#line 48
undef($memory_4);
#line 49
$memory_4 = $memory_1->{'args'};
#line 49
$memory_5 = 0;
#line 49
$memory_4 = $memory_4->[$memory_5];
#line 49
undef($memory_5);
#line 49
$memory_4 = $memory_4->{'val'};
#line 50
$memory_5 = "rec";
#line 50
$memory_5 = c_rt_lib::to_nl($memory_3 eq $memory_5);
#line 50
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 50
if (c_rt_lib::check_true($memory_5)) {goto label_22;}
#line 51
$memory_7 = "hash_decl";
#line 51
$memory_6 = ov::is($memory_4, $memory_7);
#line 51
undef($memory_7);
#line 51
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 51
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 51
if (c_rt_lib::check_true($memory_6)) {goto label_24;}
#line 51
$memory_7 = "rec must have hash: ";
#line 51
$memory_8 = ov::get_element($memory_4);
#line 51
$memory_7 = $memory_7 . $memory_8;
#line 51
undef($memory_8);
#line 51
$memory_7 = c_rt_lib::ov_mk_arg('err', $memory_7);
#line 51
undef($memory_0);
#line 51
undef($memory_1);
#line 51
undef($memory_2);
#line 51
undef($memory_3);
#line 51
undef($memory_4);
#line 51
undef($memory_5);
#line 51
undef($memory_6);
#line 51
return $memory_7;
#line 51
undef($memory_7);
#line 51
goto label_24;
#line 51
label_24:
#line 51
undef($memory_6);
#line 52
$memory_8 = ptd_parser_priv::parse_hash($memory_4);
#line 52
$memory_7 = c_rt_lib::ov_is($memory_8, 'ok');
#line 52
if (c_rt_lib::check_true($memory_7)) {goto label_25;}
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
return $memory_8;
#line 52
label_25:
#line 52
$memory_6 = c_rt_lib::ov_as($memory_8, 'ok');
#line 52
undef($memory_7);
#line 52
undef($memory_8);
#line 53
$memory_7 = tct::rec($memory_6);
#line 53
$memory_7 = c_rt_lib::ov_mk_arg('ok', $memory_7);
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
return $memory_7;
#line 53
undef($memory_7);
#line 53
undef($memory_6);
#line 54
goto label_21;
#line 54
label_22:
#line 54
$memory_5 = "hash";
#line 54
$memory_5 = c_rt_lib::to_nl($memory_3 eq $memory_5);
#line 54
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 54
if (c_rt_lib::check_true($memory_5)) {goto label_26;}
#line 55
$memory_8 = ptd_parser::try_value_to_ptd($memory_4);
#line 55
$memory_7 = c_rt_lib::ov_is($memory_8, 'ok');
#line 55
if (c_rt_lib::check_true($memory_7)) {goto label_27;}
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
return $memory_8;
#line 55
label_27:
#line 55
$memory_6 = c_rt_lib::ov_as($memory_8, 'ok');
#line 55
undef($memory_7);
#line 55
undef($memory_8);
#line 56
$memory_7 = tct::hash($memory_6);
#line 56
$memory_7 = c_rt_lib::ov_mk_arg('ok', $memory_7);
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
return $memory_7;
#line 56
undef($memory_7);
#line 56
undef($memory_6);
#line 57
goto label_21;
#line 57
label_26:
#line 57
$memory_5 = "arr";
#line 57
$memory_5 = c_rt_lib::to_nl($memory_3 eq $memory_5);
#line 57
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 57
if (c_rt_lib::check_true($memory_5)) {goto label_28;}
#line 58
$memory_8 = ptd_parser::try_value_to_ptd($memory_4);
#line 58
$memory_7 = c_rt_lib::ov_is($memory_8, 'ok');
#line 58
if (c_rt_lib::check_true($memory_7)) {goto label_29;}
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
label_29:
#line 58
$memory_6 = c_rt_lib::ov_as($memory_8, 'ok');
#line 58
undef($memory_7);
#line 58
undef($memory_8);
#line 59
$memory_7 = tct::arr($memory_6);
#line 59
$memory_7 = c_rt_lib::ov_mk_arg('ok', $memory_7);
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
return $memory_7;
#line 59
undef($memory_7);
#line 59
undef($memory_6);
#line 60
goto label_21;
#line 60
label_28:
#line 60
$memory_5 = "var";
#line 60
$memory_5 = c_rt_lib::to_nl($memory_3 eq $memory_5);
#line 60
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 60
if (c_rt_lib::check_true($memory_5)) {goto label_30;}
#line 61
$memory_6 = 1;
#line 61
$memory_6 = c_rt_lib::to_nl($memory_2 == $memory_6);
#line 61
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 61
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 61
if (c_rt_lib::check_true($memory_6)) {goto label_32;}
#line 61
$memory_7 = "var must have hash";
#line 61
$memory_7 = $memory_7 . $memory_2;
#line 61
$memory_7 = c_rt_lib::ov_mk_arg('err', $memory_7);
#line 61
undef($memory_0);
#line 61
undef($memory_1);
#line 61
undef($memory_2);
#line 61
undef($memory_3);
#line 61
undef($memory_4);
#line 61
undef($memory_5);
#line 61
undef($memory_6);
#line 61
return $memory_7;
#line 61
undef($memory_7);
#line 61
goto label_32;
#line 61
label_32:
#line 61
undef($memory_6);
#line 62
$memory_7 = "hash_decl";
#line 62
$memory_6 = ov::is($memory_4, $memory_7);
#line 62
undef($memory_7);
#line 62
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 62
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 62
if (c_rt_lib::check_true($memory_6)) {goto label_34;}
#line 62
$memory_7 = "var must have hash: ";
#line 62
$memory_8 = ov::get_element($memory_4);
#line 62
$memory_7 = $memory_7 . $memory_8;
#line 62
undef($memory_8);
#line 62
$memory_7 = c_rt_lib::ov_mk_arg('err', $memory_7);
#line 62
undef($memory_0);
#line 62
undef($memory_1);
#line 62
undef($memory_2);
#line 62
undef($memory_3);
#line 62
undef($memory_4);
#line 62
undef($memory_5);
#line 62
undef($memory_6);
#line 62
return $memory_7;
#line 62
undef($memory_7);
#line 62
goto label_34;
#line 62
label_34:
#line 62
undef($memory_6);
#line 63
$memory_6 = $memory_4;
#line 63
$memory_6 = c_rt_lib::ov_as($memory_6, 'hash_decl');
#line 64
$memory_7 = {};
#line 65
$memory_9 = 0;
#line 65
$memory_10 = 1;
#line 65
$memory_11 = c_rt_lib::array_len($memory_6);
#line 65
label_37:
#line 65
$memory_12 = c_rt_lib::to_nl($memory_9 >= $memory_11);
#line 65
if (c_rt_lib::check_true($memory_12)) {goto label_35;}
#line 65
$memory_8 = $memory_6->[$memory_9];
#line 66
$memory_14 = $memory_8->{'val'};
#line 66
$memory_15 = "fun_val";
#line 66
$memory_13 = ov::is($memory_14, $memory_15);
#line 66
undef($memory_15);
#line 66
undef($memory_14);
#line 66
$memory_13 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_13));
#line 66
if (c_rt_lib::check_true($memory_13)) {goto label_39;}
#line 67
$memory_14 = $memory_8->{'val'};
#line 67
$memory_14 = c_rt_lib::ov_as($memory_14, 'fun_val');
#line 67
$memory_1 = $memory_14;
#line 67
undef($memory_14);
#line 68
$memory_14 = $memory_1->{'module'};
#line 68
$memory_16 = "ptd";
#line 68
$memory_14 = c_rt_lib::to_nl($memory_14 eq $memory_16);
#line 68
undef($memory_16);
#line 68
$memory_15 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_14));
#line 68
if (c_rt_lib::check_true($memory_15)) {goto label_42;}
#line 68
$memory_14 = $memory_1->{'name'};
#line 68
$memory_16 = "none";
#line 68
$memory_14 = c_rt_lib::to_nl($memory_14 eq $memory_16);
#line 68
undef($memory_16);
#line 68
label_42:
#line 68
undef($memory_15);
#line 68
$memory_14 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_14));
#line 68
if (c_rt_lib::check_true($memory_14)) {goto label_41;}
#line 69
$memory_16 = $memory_8->{'key'};
#line 69
$memory_17 = "hash_key";
#line 69
$memory_15 = ov::as($memory_16, $memory_17);
#line 69
undef($memory_17);
#line 69
undef($memory_16);
#line 69
$memory_16 = tct::none();
#line 69
hash::set_value($memory_7, $memory_15, $memory_16);
#line 69
undef($memory_16);
#line 69
undef($memory_15);
#line 70
undef($memory_13);
#line 70
undef($memory_14);
#line 70
goto label_36;
#line 71
goto label_41;
#line 71
label_41:
#line 71
undef($memory_14);
#line 72
goto label_39;
#line 72
label_39:
#line 72
undef($memory_13);
#line 73
$memory_16 = $memory_8->{'val'};
#line 73
$memory_15 = ptd_parser::try_value_to_ptd($memory_16);
#line 73
undef($memory_16);
#line 73
$memory_14 = c_rt_lib::ov_is($memory_15, 'ok');
#line 73
if (c_rt_lib::check_true($memory_14)) {goto label_43;}
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
undef($memory_9);
#line 73
undef($memory_10);
#line 73
undef($memory_11);
#line 73
undef($memory_12);
#line 73
undef($memory_13);
#line 73
undef($memory_14);
#line 73
return $memory_15;
#line 73
label_43:
#line 73
$memory_13 = c_rt_lib::ov_as($memory_15, 'ok');
#line 73
undef($memory_14);
#line 73
undef($memory_15);
#line 74
$memory_15 = $memory_8->{'key'};
#line 74
$memory_16 = "hash_key";
#line 74
$memory_14 = ov::as($memory_15, $memory_16);
#line 74
undef($memory_16);
#line 74
undef($memory_15);
#line 74
hash::set_value($memory_7, $memory_14, $memory_13);
#line 74
undef($memory_14);
#line 74
undef($memory_13);
#line 74
label_36:
#line 75
$memory_9 = $memory_9 + $memory_10;
#line 75
goto label_37;
#line 75
label_35:
#line 75
undef($memory_8);
#line 75
undef($memory_9);
#line 75
undef($memory_10);
#line 75
undef($memory_11);
#line 75
undef($memory_12);
#line 76
$memory_8 = tct::var($memory_7);
#line 76
$memory_8 = c_rt_lib::ov_mk_arg('ok', $memory_8);
#line 76
undef($memory_0);
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
undef($memory_6);
#line 76
undef($memory_7);
#line 76
return $memory_8;
#line 76
undef($memory_8);
#line 76
undef($memory_6);
#line 76
undef($memory_7);
#line 77
goto label_21;
#line 77
label_30:
#line 78
$memory_6 = "it is not type function : ";
#line 78
$memory_6 = $memory_6 . $memory_3;
#line 78
$memory_6 = c_rt_lib::ov_mk_arg('err', $memory_6);
#line 78
undef($memory_0);
#line 78
undef($memory_1);
#line 78
undef($memory_2);
#line 78
undef($memory_3);
#line 78
undef($memory_4);
#line 78
undef($memory_5);
#line 78
return $memory_6;
#line 78
undef($memory_6);
#line 79
goto label_21;
#line 79
label_21:
#line 79
undef($memory_5);
#line 79
undef($memory_1);
#line 79
undef($memory_2);
#line 79
undef($memory_3);
#line 79
undef($memory_4);
#line 79
undef($memory_0);
#line 79
return;
}

sub ptd_parser_priv::parse_hash($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;$memory_0 = $_[0];
#line 84
$memory_1 = $memory_0;
#line 84
$memory_1 = c_rt_lib::ov_as($memory_1, 'hash_decl');
#line 85
$memory_2 = {};
#line 86
$memory_4 = 0;
#line 86
$memory_5 = 1;
#line 86
$memory_6 = c_rt_lib::array_len($memory_1);
#line 86
label_3:
#line 86
$memory_7 = c_rt_lib::to_nl($memory_4 >= $memory_6);
#line 86
if (c_rt_lib::check_true($memory_7)) {goto label_1;}
#line 86
$memory_3 = $memory_1->[$memory_4];
#line 87
$memory_11 = $memory_3->{'val'};
#line 87
$memory_10 = ptd_parser::try_value_to_ptd($memory_11);
#line 87
undef($memory_11);
#line 87
$memory_9 = c_rt_lib::ov_is($memory_10, 'ok');
#line 87
if (c_rt_lib::check_true($memory_9)) {goto label_4;}
#line 87
undef($memory_0);
#line 87
undef($memory_1);
#line 87
undef($memory_2);
#line 87
undef($memory_3);
#line 87
undef($memory_4);
#line 87
undef($memory_5);
#line 87
undef($memory_6);
#line 87
undef($memory_7);
#line 87
undef($memory_8);
#line 87
undef($memory_9);
#line 87
return $memory_10;
#line 87
label_4:
#line 87
$memory_8 = c_rt_lib::ov_as($memory_10, 'ok');
#line 87
undef($memory_9);
#line 87
undef($memory_10);
#line 88
$memory_10 = $memory_3->{'key'};
#line 88
$memory_11 = "hash_key";
#line 88
$memory_9 = ov::as($memory_10, $memory_11);
#line 88
undef($memory_11);
#line 88
undef($memory_10);
#line 88
hash::set_value($memory_2, $memory_9, $memory_8);
#line 88
undef($memory_9);
#line 88
undef($memory_8);
#line 89
$memory_4 = $memory_4 + $memory_5;
#line 89
goto label_3;
#line 89
label_1:
#line 89
undef($memory_3);
#line 89
undef($memory_4);
#line 89
undef($memory_5);
#line 89
undef($memory_6);
#line 89
undef($memory_7);
#line 90
$memory_3 = c_rt_lib::ov_mk_arg('ok', $memory_2);
#line 90
undef($memory_0);
#line 90
undef($memory_1);
#line 90
undef($memory_2);
#line 90
return $memory_3;
#line 90
undef($memory_3);
#line 90
undef($memory_1);
#line 90
undef($memory_2);
#line 90
undef($memory_0);
#line 90
return;
}
