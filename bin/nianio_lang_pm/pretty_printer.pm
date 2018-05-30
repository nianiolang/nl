use c_rt_lib;
use string;
use array;
use ptd;
use nast;
use wprinter;
use boolean_t;
sub pretty_printer_priv::state_print;
sub pretty_printer::struct_t;
sub pretty_printer::print_module_to_struct;
sub pretty_printer::print_module_to_str;
sub pretty_printer_priv::print_fun_def;
sub pretty_printer_priv::print_fun_def_head;
sub pretty_printer_priv::join_print_var_decl;
sub pretty_printer_priv::print_var_decl;
sub pretty_printer_priv::pind;
sub pretty_printer_priv::join_print_hash_elem;
sub pretty_printer_priv::print_hash_elem;
sub pretty_printer_priv::print_variant;
sub pretty_printer_priv::print_variant_case_decl;
sub pretty_printer_priv::join_print_fun_arg;
sub pretty_printer_priv::print_fun_arg;
sub pretty_printer_priv::count_structs;
sub pretty_printer_priv::get_compressed_fun_val;
sub pretty_printer_priv::print_st;
sub pretty_printer_priv::get_fun_label;
sub pretty_printer_priv::string_to_nl;
sub pretty_printer_priv::join_print_val;
sub pretty_printer_priv::is_to_change_ov;
sub pretty_printer_priv::print_val;
sub pretty_printer_priv::print_cond_mod;
sub pretty_printer_priv::print_loop;
sub pretty_printer_priv::print_loop_or_mod;
sub pretty_printer_priv::print_try_ensure;
sub pretty_printer_priv::print_return;
sub pretty_printer_priv::print_sim_value;
sub pretty_printer_priv::print_break;
sub pretty_printer_priv::print_continue;
sub pretty_printer_priv::print_die;
sub pretty_printer_priv::print_simple_statement;
sub pretty_printer_priv::flush_sim_statement;
sub pretty_printer_priv::print_cmd;

return 1;

sub pretty_printer_priv::state_print($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];
#line 14
$memory_2 = "out";
#line 14
$memory_2 = c_rt_lib::get_ref_hash($memory_0, $memory_2);
#line 14
$memory_2 = $memory_2 . $memory_1;
#line 14
$memory_3 = "out";
#line 14
c_rt_lib::set_ref_hash($memory_0, $memory_3, $memory_2);
#line 14
undef($memory_3);
#line 14
undef($memory_2);
#line 14
undef($memory_1);
#line 14
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub pretty_printer::__struct_t() {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;
#line 19
$memory_3 = ptd::sim();
#line 19
$memory_2 = ptd::arr($memory_3);
#line 19
undef($memory_3);
#line 20
$memory_6 = ptd::sim();
#line 20
$memory_7 = ptd::sim();
#line 20
$memory_8 = ptd::sim();
#line 20
$memory_5 = {name => $memory_6,head => $memory_7,body => $memory_8,};
#line 20
undef($memory_6);
#line 20
undef($memory_7);
#line 20
undef($memory_8);
#line 20
$memory_4 = ptd::rec($memory_5);
#line 20
undef($memory_5);
#line 20
$memory_3 = ptd::arr($memory_4);
#line 20
undef($memory_4);
#line 20
$memory_1 = {imports => $memory_2,functions => $memory_3,};
#line 20
undef($memory_2);
#line 20
undef($memory_3);
#line 20
$memory_0 = ptd::rec($memory_1);
#line 20
undef($memory_1);
#line 20
return $memory_0;
#line 20
undef($memory_0);
#line 20
return;
}

my $_struct_t;
sub pretty_printer::struct_t() {
	$_struct_t = pretty_printer::__struct_t() unless defined $_struct_t;
	return $_struct_t;
}

sub pretty_printer::print_module_to_struct($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;my $memory_13;my $memory_14;my $memory_15;my $memory_16;my $memory_17;my $memory_18;$memory_0 = $_[0];
#line 25
$memory_2 = [];
#line 25
$memory_3 = [];
#line 25
$memory_1 = {imports => $memory_2,functions => $memory_3,};
#line 25
undef($memory_2);
#line 25
undef($memory_3);
#line 26
$memory_2 = $memory_0->{'import'};
#line 26
$memory_4 = 0;
#line 26
$memory_5 = 1;
#line 26
$memory_6 = c_rt_lib::array_len($memory_2);
#line 26
label_9:
#line 26
$memory_7 = c_rt_lib::to_nl($memory_4 >= $memory_6);
#line 26
if (c_rt_lib::check_true($memory_7)) {goto label_33;}
#line 26
$memory_3 = $memory_2->[$memory_4];
#line 27
$memory_8 = "imports";
#line 27
$memory_8 = c_rt_lib::get_ref_hash($memory_1, $memory_8);
#line 27
$memory_9 = "use ";
#line 27
$memory_10 = $memory_3->{'name'};
#line 27
$memory_9 = $memory_9 . $memory_10;
#line 27
undef($memory_10);
#line 27
$memory_10 = ";";
#line 27
$memory_9 = $memory_9 . $memory_10;
#line 27
undef($memory_10);
#line 27
$memory_10 = string::lf();
#line 27
$memory_9 = $memory_9 . $memory_10;
#line 27
undef($memory_10);
#line 27
array::push($memory_8, $memory_9);
#line 27
undef($memory_9);
#line 27
$memory_9 = "imports";
#line 27
c_rt_lib::set_ref_hash($memory_1, $memory_9, $memory_8);
#line 27
undef($memory_9);
#line 27
undef($memory_8);
#line 28
$memory_4 = $memory_4 + $memory_5;
#line 28
goto label_9;
#line 28
label_33:
#line 28
undef($memory_2);
#line 28
undef($memory_3);
#line 28
undef($memory_4);
#line 28
undef($memory_5);
#line 28
undef($memory_6);
#line 28
undef($memory_7);
#line 29
$memory_2 = $memory_0->{'fun_def'};
#line 29
$memory_4 = 0;
#line 29
$memory_5 = 1;
#line 29
$memory_6 = c_rt_lib::array_len($memory_2);
#line 29
label_44:
#line 29
$memory_7 = c_rt_lib::to_nl($memory_4 >= $memory_6);
#line 29
if (c_rt_lib::check_true($memory_7)) {goto label_120;}
#line 29
$memory_3 = $memory_2->[$memory_4];
#line 30
$memory_9 = "";
#line 30
$memory_8 = {out => $memory_9,};
#line 30
undef($memory_9);
#line 31
$memory_9 = string::lf();
#line 31
pretty_printer_priv::state_print($memory_8, $memory_9);
#line 31
undef($memory_9);
#line 32
$memory_9 = $memory_0->{'name'};
#line 32
pretty_printer_priv::print_fun_def_head($memory_8, $memory_3, $memory_9);
#line 32
undef($memory_9);
#line 33
$memory_9 = $memory_8->{'out'};
#line 34
$memory_10 = "";
#line 34
$memory_11 = $memory_10;
#line 34
 if (c_rt_lib::get_hashcount($memory_8) > 1) {$memory_8 = {%{$memory_8}};}$memory_8->{'out'} = $memory_11;
#line 34
undef($memory_10);
#line 34
undef($memory_11);
#line 35
$memory_10 = $memory_3->{'cmd'};
#line 35
$memory_10 = $memory_10->{'cmd'};
#line 35
$memory_10 = c_rt_lib::ov_as($memory_10, 'block');
#line 35
$memory_12 = 0;
#line 35
$memory_13 = 1;
#line 35
$memory_14 = c_rt_lib::array_len($memory_10);
#line 35
label_69:
#line 35
$memory_15 = c_rt_lib::to_nl($memory_12 >= $memory_14);
#line 35
if (c_rt_lib::check_true($memory_15)) {goto label_86;}
#line 35
$memory_11 = $memory_10->[$memory_12];
#line 36
$memory_16 = string::lf();
#line 36
$memory_18 = 1;
#line 36
$memory_17 = pretty_printer_priv::pind($memory_18);
#line 36
undef($memory_18);
#line 36
$memory_16 = $memory_16 . $memory_17;
#line 36
undef($memory_17);
#line 36
pretty_printer_priv::state_print($memory_8, $memory_16);
#line 36
undef($memory_16);
#line 37
$memory_16 = 1;
#line 37
pretty_printer_priv::print_cmd($memory_8, $memory_11, $memory_16);
#line 37
undef($memory_16);
#line 38
$memory_12 = $memory_12 + $memory_13;
#line 38
goto label_69;
#line 38
label_86:
#line 38
undef($memory_10);
#line 38
undef($memory_11);
#line 38
undef($memory_12);
#line 38
undef($memory_13);
#line 38
undef($memory_14);
#line 38
undef($memory_15);
#line 39
$memory_10 = "functions";
#line 39
$memory_10 = c_rt_lib::get_ref_hash($memory_1, $memory_10);
#line 40
$memory_12 = $memory_3->{'access'};
#line 40
$memory_12 = c_rt_lib::ov_is($memory_12, 'priv');
#line 40
if (c_rt_lib::check_true($memory_12)) {goto label_100;}
#line 40
$memory_12 = "";
#line 40
goto label_102;
#line 40
label_100:
#line 40
$memory_12 = "::";
#line 40
label_102:
#line 40
$memory_13 = $memory_3->{'name'};
#line 40
$memory_12 = $memory_12 . $memory_13;
#line 40
undef($memory_13);
#line 42
$memory_13 = $memory_8->{'out'};
#line 42
$memory_11 = {name => $memory_12,head => $memory_9,body => $memory_13,};
#line 42
undef($memory_12);
#line 42
undef($memory_13);
#line 42
array::push($memory_10, $memory_11);
#line 42
undef($memory_11);
#line 42
$memory_11 = "functions";
#line 42
c_rt_lib::set_ref_hash($memory_1, $memory_11, $memory_10);
#line 42
undef($memory_11);
#line 42
undef($memory_10);
#line 42
undef($memory_8);
#line 42
undef($memory_9);
#line 44
$memory_4 = $memory_4 + $memory_5;
#line 44
goto label_44;
#line 44
label_120:
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
#line 45
undef($memory_0);
#line 45
return $memory_1;
#line 45
undef($memory_1);
#line 45
undef($memory_0);
#line 45
return;
}

sub pretty_printer::print_module_to_str($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;$memory_0 = $_[0];
#line 49
$memory_2 = "";
#line 49
$memory_1 = {out => $memory_2,};
#line 49
undef($memory_2);
#line 50
$memory_2 = $memory_0->{'stamp'};
#line 50
$memory_3 = "";
#line 50
$memory_2 = c_rt_lib::to_nl($memory_2 ne $memory_3);
#line 50
undef($memory_3);
#line 50
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 50
if (c_rt_lib::check_true($memory_2)) {goto label_16;}
#line 51
$memory_3 = $memory_0->{'stamp'};
#line 51
$memory_4 = string::lf();
#line 51
$memory_3 = $memory_3 . $memory_4;
#line 51
undef($memory_4);
#line 51
pretty_printer_priv::state_print($memory_1, $memory_3);
#line 51
undef($memory_3);
#line 52
goto label_42;
#line 52
label_16:
#line 53
$memory_3 = "###";
#line 53
$memory_4 = string::lf();
#line 53
$memory_3 = $memory_3 . $memory_4;
#line 53
undef($memory_4);
#line 53
$memory_4 = "# (c) Atinea Sp. z o.o.";
#line 53
$memory_3 = $memory_3 . $memory_4;
#line 53
undef($memory_4);
#line 53
$memory_4 = string::lf();
#line 53
$memory_3 = $memory_3 . $memory_4;
#line 53
undef($memory_4);
#line 53
$memory_4 = "###";
#line 53
$memory_3 = $memory_3 . $memory_4;
#line 53
undef($memory_4);
#line 53
$memory_4 = string::lf();
#line 53
$memory_3 = $memory_3 . $memory_4;
#line 53
undef($memory_4);
#line 54
$memory_4 = string::lf();
#line 54
$memory_3 = $memory_3 . $memory_4;
#line 54
undef($memory_4);
#line 54
$memory_4 = string::lf();
#line 54
$memory_3 = $memory_3 . $memory_4;
#line 54
undef($memory_4);
#line 54
pretty_printer_priv::state_print($memory_1, $memory_3);
#line 54
undef($memory_3);
#line 55
goto label_42;
#line 55
label_42:
#line 55
undef($memory_2);
#line 56
$memory_2 = [];
#line 57
$memory_3 = $memory_0->{'import'};
#line 57
$memory_5 = 0;
#line 57
$memory_6 = 1;
#line 57
$memory_7 = c_rt_lib::array_len($memory_3);
#line 57
label_49:
#line 57
$memory_8 = c_rt_lib::to_nl($memory_5 >= $memory_7);
#line 57
if (c_rt_lib::check_true($memory_8)) {goto label_64;}
#line 57
$memory_4 = $memory_3->[$memory_5];
#line 58
$memory_9 = "use ";
#line 58
$memory_10 = $memory_4->{'name'};
#line 58
$memory_9 = $memory_9 . $memory_10;
#line 58
undef($memory_10);
#line 58
$memory_10 = ";";
#line 58
$memory_9 = $memory_9 . $memory_10;
#line 58
undef($memory_10);
#line 58
array::push($memory_2, $memory_9);
#line 58
undef($memory_9);
#line 59
$memory_5 = $memory_5 + $memory_6;
#line 59
goto label_49;
#line 59
label_64:
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
undef($memory_8);
#line 60
$memory_4 = string::lf();
#line 60
$memory_3 = array::join($memory_4, $memory_2);
#line 60
undef($memory_4);
#line 60
pretty_printer_priv::state_print($memory_1, $memory_3);
#line 60
undef($memory_3);
#line 61
$memory_3 = string::lf();
#line 61
$memory_4 = string::lf();
#line 61
$memory_3 = $memory_3 . $memory_4;
#line 61
undef($memory_4);
#line 61
pretty_printer_priv::state_print($memory_1, $memory_3);
#line 61
undef($memory_3);
#line 62
$memory_3 = $memory_0->{'fun_def'};
#line 62
$memory_5 = 0;
#line 62
$memory_6 = 1;
#line 62
$memory_7 = c_rt_lib::array_len($memory_3);
#line 62
label_86:
#line 62
$memory_8 = c_rt_lib::to_nl($memory_5 >= $memory_7);
#line 62
if (c_rt_lib::check_true($memory_8)) {goto label_101;}
#line 62
$memory_4 = $memory_3->[$memory_5];
#line 63
$memory_9 = $memory_0->{'name'};
#line 63
pretty_printer_priv::print_fun_def($memory_1, $memory_4, $memory_9);
#line 63
undef($memory_9);
#line 64
$memory_9 = string::lf();
#line 64
$memory_10 = string::lf();
#line 64
$memory_9 = $memory_9 . $memory_10;
#line 64
undef($memory_10);
#line 64
pretty_printer_priv::state_print($memory_1, $memory_9);
#line 64
undef($memory_9);
#line 65
$memory_5 = $memory_5 + $memory_6;
#line 65
goto label_86;
#line 65
label_101:
#line 65
undef($memory_3);
#line 65
undef($memory_4);
#line 65
undef($memory_5);
#line 65
undef($memory_6);
#line 65
undef($memory_7);
#line 65
undef($memory_8);
#line 66
$memory_3 = $memory_1->{'out'};
#line 66
undef($memory_0);
#line 66
undef($memory_1);
#line 66
undef($memory_2);
#line 66
return $memory_3;
#line 66
undef($memory_3);
#line 66
undef($memory_1);
#line 66
undef($memory_2);
#line 66
undef($memory_0);
#line 66
return;
}

sub pretty_printer_priv::print_fun_def($$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];$memory_2 = $_[2];
#line 70
pretty_printer_priv::print_fun_def_head($memory_0, $memory_1, $memory_2);
#line 71
$memory_3 = $memory_1->{'cmd'};
#line 71
$memory_4 = 0;
#line 71
pretty_printer_priv::print_st($memory_0, $memory_3, $memory_4);
#line 71
undef($memory_4);
#line 71
undef($memory_3);
#line 71
undef($memory_1);
#line 71
undef($memory_2);
#line 71
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub pretty_printer_priv::print_fun_def_head($$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;my $memory_13;my $memory_14;my $memory_15;my $memory_16;my $memory_17;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];$memory_2 = $_[2];
#line 75
$memory_3 = "";
#line 76
$memory_4 = $memory_1->{'access'};
#line 76
$memory_5 = c_rt_lib::ov_is($memory_4, 'pub');
#line 76
if (c_rt_lib::check_true($memory_5)) {goto label_9;}
#line 78
$memory_5 = c_rt_lib::ov_is($memory_4, 'priv');
#line 78
if (c_rt_lib::check_true($memory_5)) {goto label_15;}
#line 78
$memory_5 = "NOMATCHALERT";
#line 78
$memory_5 = [$memory_5,$memory_4];
#line 78
die(dfile::ssave($memory_5));
#line 76
label_9:
#line 77
$memory_6 = "::";
#line 77
$memory_6 = $memory_2 . $memory_6;
#line 77
$memory_3 = $memory_3 . $memory_6;
#line 77
undef($memory_6);
#line 78
goto label_17;
#line 78
label_15:
#line 79
goto label_17;
#line 79
label_17:
#line 79
undef($memory_4);
#line 79
undef($memory_5);
#line 80
$memory_4 = $memory_1->{'name'};
#line 80
$memory_3 = $memory_3 . $memory_4;
#line 80
undef($memory_4);
#line 82
$memory_6 = "def";
#line 82
$memory_5 = wprinter::build_sim($memory_6);
#line 82
undef($memory_6);
#line 83
$memory_6 = wprinter::get_sep();
#line 84
$memory_7 = wprinter::build_sim($memory_3);
#line 85
$memory_9 = "(";
#line 85
$memory_8 = wprinter::build_sim($memory_9);
#line 85
undef($memory_9);
#line 85
$memory_4 = [$memory_5,$memory_6,$memory_7,$memory_8];
#line 85
undef($memory_5);
#line 85
undef($memory_6);
#line 85
undef($memory_7);
#line 85
undef($memory_8);
#line 87
$memory_6 = $memory_1->{'args'};
#line 87
$memory_5 = array::len($memory_6);
#line 87
undef($memory_6);
#line 87
$memory_6 = 0;
#line 87
$memory_7 = 1;
#line 87
label_41:
#line 87
$memory_8 = c_rt_lib::to_nl($memory_6 >= $memory_5);
#line 87
if (c_rt_lib::check_true($memory_8)) {goto label_129;}
#line 88
$memory_9 = $memory_1->{'args'};
#line 88
$memory_9 = $memory_9->[$memory_6];
#line 89
$memory_10 = $memory_9->{'mod'};
#line 89
$memory_11 = c_rt_lib::ov_is($memory_10, 'ref');
#line 89
if (c_rt_lib::check_true($memory_11)) {goto label_54;}
#line 91
$memory_11 = c_rt_lib::ov_is($memory_10, 'none');
#line 91
if (c_rt_lib::check_true($memory_11)) {goto label_65;}
#line 91
$memory_11 = "NOMATCHALERT";
#line 91
$memory_11 = [$memory_11,$memory_10];
#line 91
die(dfile::ssave($memory_11));
#line 89
label_54:
#line 90
$memory_14 = "ref";
#line 90
$memory_13 = wprinter::build_sim($memory_14);
#line 90
undef($memory_14);
#line 90
$memory_14 = wprinter::get_sep();
#line 90
$memory_12 = [$memory_13,$memory_14];
#line 90
undef($memory_13);
#line 90
undef($memory_14);
#line 90
array::append($memory_4, $memory_12);
#line 90
undef($memory_12);
#line 91
goto label_67;
#line 91
label_65:
#line 92
goto label_67;
#line 92
label_67:
#line 92
undef($memory_10);
#line 92
undef($memory_11);
#line 93
$memory_11 = $memory_9->{'name'};
#line 93
$memory_10 = wprinter::build_sim($memory_11);
#line 93
undef($memory_11);
#line 93
array::push($memory_4, $memory_10);
#line 93
undef($memory_10);
#line 94
$memory_10 = $memory_9->{'type'};
#line 94
$memory_11 = c_rt_lib::ov_is($memory_10, 'type');
#line 94
if (c_rt_lib::check_true($memory_11)) {goto label_83;}
#line 96
$memory_11 = c_rt_lib::ov_is($memory_10, 'none');
#line 96
if (c_rt_lib::check_true($memory_11)) {goto label_100;}
#line 96
$memory_11 = "NOMATCHALERT";
#line 96
$memory_11 = [$memory_11,$memory_10];
#line 96
die(dfile::ssave($memory_11));
#line 94
label_83:
#line 94
$memory_12 = c_rt_lib::ov_as($memory_10, 'type');
#line 95
$memory_14 = wprinter::get_sep();
#line 95
$memory_16 = ":";
#line 95
$memory_15 = wprinter::build_sim($memory_16);
#line 95
undef($memory_16);
#line 95
$memory_16 = wprinter::get_sep();
#line 95
$memory_17 = pretty_printer_priv::print_val($memory_12);
#line 95
$memory_13 = [$memory_14,$memory_15,$memory_16,$memory_17];
#line 95
undef($memory_14);
#line 95
undef($memory_15);
#line 95
undef($memory_16);
#line 95
undef($memory_17);
#line 95
array::append($memory_4, $memory_13);
#line 95
undef($memory_13);
#line 95
undef($memory_12);
#line 96
goto label_102;
#line 96
label_100:
#line 97
goto label_102;
#line 97
label_102:
#line 97
undef($memory_10);
#line 97
undef($memory_11);
#line 98
$memory_11 = $memory_1->{'args'};
#line 98
$memory_10 = array::len($memory_11);
#line 98
undef($memory_11);
#line 98
$memory_11 = 1;
#line 98
$memory_10 = $memory_10 - $memory_11;
#line 98
undef($memory_11);
#line 98
$memory_10 = c_rt_lib::to_nl($memory_6 != $memory_10);
#line 98
$memory_10 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_10));
#line 98
if (c_rt_lib::check_true($memory_10)) {goto label_124;}
#line 98
$memory_13 = ",";
#line 98
$memory_12 = wprinter::build_sim($memory_13);
#line 98
undef($memory_13);
#line 98
$memory_13 = wprinter::get_sep();
#line 98
$memory_11 = [$memory_12,$memory_13];
#line 98
undef($memory_12);
#line 98
undef($memory_13);
#line 98
array::append($memory_4, $memory_11);
#line 98
undef($memory_11);
#line 98
goto label_124;
#line 98
label_124:
#line 98
undef($memory_10);
#line 98
undef($memory_9);
#line 99
$memory_6 = $memory_6 + $memory_7;
#line 99
goto label_41;
#line 99
label_129:
#line 99
undef($memory_5);
#line 99
undef($memory_6);
#line 99
undef($memory_7);
#line 99
undef($memory_8);
#line 100
$memory_6 = ")";
#line 100
$memory_5 = wprinter::build_sim($memory_6);
#line 100
undef($memory_6);
#line 100
array::push($memory_4, $memory_5);
#line 100
undef($memory_5);
#line 101
$memory_5 = $memory_1->{'ret_type'};
#line 101
$memory_6 = c_rt_lib::ov_is($memory_5, 'type');
#line 101
if (c_rt_lib::check_true($memory_6)) {goto label_147;}
#line 108
$memory_6 = c_rt_lib::ov_is($memory_5, 'none');
#line 108
if (c_rt_lib::check_true($memory_6)) {goto label_164;}
#line 108
$memory_6 = "NOMATCHALERT";
#line 108
$memory_6 = [$memory_6,$memory_5];
#line 108
die(dfile::ssave($memory_6));
#line 101
label_147:
#line 101
$memory_7 = c_rt_lib::ov_as($memory_5, 'type');
#line 103
$memory_9 = wprinter::get_sep();
#line 104
$memory_11 = ":";
#line 104
$memory_10 = wprinter::build_sim($memory_11);
#line 104
undef($memory_11);
#line 105
$memory_11 = wprinter::get_sep();
#line 106
$memory_12 = pretty_printer_priv::print_sim_value($memory_7);
#line 106
$memory_8 = [$memory_9,$memory_10,$memory_11,$memory_12];
#line 106
undef($memory_9);
#line 106
undef($memory_10);
#line 106
undef($memory_11);
#line 106
undef($memory_12);
#line 106
array::append($memory_4, $memory_8);
#line 106
undef($memory_8);
#line 106
undef($memory_7);
#line 108
goto label_166;
#line 108
label_164:
#line 109
goto label_166;
#line 109
label_166:
#line 109
undef($memory_5);
#line 109
undef($memory_6);
#line 110
$memory_5 = wprinter::build_pretty_l($memory_4);
#line 110
$memory_6 = 0;
#line 110
wprinter::print_t($memory_0, $memory_5, $memory_6);
#line 110
undef($memory_6);
#line 110
undef($memory_5);
#line 110
undef($memory_3);
#line 110
undef($memory_4);
#line 110
undef($memory_1);
#line 110
undef($memory_2);
#line 110
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub pretty_printer_priv::join_print_var_decl($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;$memory_0 = $_[0];
#line 114
$memory_1 = [];
#line 115
$memory_2 = array::len($memory_0);
#line 115
$memory_3 = 0;
#line 115
$memory_4 = 1;
#line 115
label_4:
#line 115
$memory_5 = c_rt_lib::to_nl($memory_3 >= $memory_2);
#line 115
if (c_rt_lib::check_true($memory_5)) {goto label_33;}
#line 116
$memory_7 = $memory_0->[$memory_3];
#line 116
$memory_6 = pretty_printer_priv::print_var_decl($memory_7);
#line 116
undef($memory_7);
#line 116
array::push($memory_1, $memory_6);
#line 116
undef($memory_6);
#line 117
$memory_6 = array::len($memory_0);
#line 117
$memory_7 = 1;
#line 117
$memory_6 = $memory_6 - $memory_7;
#line 117
undef($memory_7);
#line 117
$memory_6 = c_rt_lib::to_nl($memory_3 != $memory_6);
#line 117
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 117
if (c_rt_lib::check_true($memory_6)) {goto label_29;}
#line 117
$memory_9 = ",";
#line 117
$memory_8 = wprinter::build_sim($memory_9);
#line 117
undef($memory_9);
#line 117
$memory_9 = wprinter::get_sep();
#line 117
$memory_7 = [$memory_8,$memory_9];
#line 117
undef($memory_8);
#line 117
undef($memory_9);
#line 117
array::append($memory_1, $memory_7);
#line 117
undef($memory_7);
#line 117
goto label_29;
#line 117
label_29:
#line 117
undef($memory_6);
#line 118
$memory_3 = $memory_3 + $memory_4;
#line 118
goto label_4;
#line 118
label_33:
#line 118
undef($memory_2);
#line 118
undef($memory_3);
#line 118
undef($memory_4);
#line 118
undef($memory_5);
#line 119
undef($memory_0);
#line 119
return $memory_1;
#line 119
undef($memory_1);
#line 119
undef($memory_0);
#line 119
return;
}

sub pretty_printer_priv::print_var_decl($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;$memory_0 = $_[0];
#line 123
$memory_3 = "var";
#line 123
$memory_2 = wprinter::build_sim($memory_3);
#line 123
undef($memory_3);
#line 123
$memory_3 = wprinter::get_sep();
#line 123
$memory_1 = [$memory_2,$memory_3];
#line 123
undef($memory_2);
#line 123
undef($memory_3);
#line 124
$memory_2 = $memory_0->{'type'};
#line 124
$memory_3 = c_rt_lib::ov_is($memory_2, 'type');
#line 124
if (c_rt_lib::check_true($memory_3)) {goto label_15;}
#line 132
$memory_3 = c_rt_lib::ov_is($memory_2, 'none');
#line 132
if (c_rt_lib::check_true($memory_3)) {goto label_36;}
#line 132
$memory_3 = "NOMATCHALERT";
#line 132
$memory_3 = [$memory_3,$memory_2];
#line 132
die(dfile::ssave($memory_3));
#line 124
label_15:
#line 124
$memory_4 = c_rt_lib::ov_as($memory_2, 'type');
#line 126
$memory_7 = $memory_0->{'name'};
#line 126
$memory_6 = wprinter::build_sim($memory_7);
#line 126
undef($memory_7);
#line 127
$memory_7 = wprinter::get_sep();
#line 128
$memory_9 = ":";
#line 128
$memory_8 = wprinter::build_sim($memory_9);
#line 128
undef($memory_9);
#line 129
$memory_9 = wprinter::get_sep();
#line 130
$memory_10 = pretty_printer_priv::print_val($memory_4);
#line 130
$memory_5 = [$memory_6,$memory_7,$memory_8,$memory_9,$memory_10];
#line 130
undef($memory_6);
#line 130
undef($memory_7);
#line 130
undef($memory_8);
#line 130
undef($memory_9);
#line 130
undef($memory_10);
#line 130
array::append($memory_1, $memory_5);
#line 130
undef($memory_5);
#line 130
undef($memory_4);
#line 132
goto label_43;
#line 132
label_36:
#line 133
$memory_5 = $memory_0->{'name'};
#line 133
$memory_4 = wprinter::build_sim($memory_5);
#line 133
undef($memory_5);
#line 133
array::push($memory_1, $memory_4);
#line 133
undef($memory_4);
#line 134
goto label_43;
#line 134
label_43:
#line 134
undef($memory_2);
#line 134
undef($memory_3);
#line 135
$memory_2 = $memory_0->{'value'};
#line 135
$memory_3 = c_rt_lib::ov_is($memory_2, 'value');
#line 135
if (c_rt_lib::check_true($memory_3)) {goto label_54;}
#line 137
$memory_3 = c_rt_lib::ov_is($memory_2, 'none');
#line 137
if (c_rt_lib::check_true($memory_3)) {goto label_71;}
#line 137
$memory_3 = "NOMATCHALERT";
#line 137
$memory_3 = [$memory_3,$memory_2];
#line 137
die(dfile::ssave($memory_3));
#line 135
label_54:
#line 135
$memory_4 = c_rt_lib::ov_as($memory_2, 'value');
#line 136
$memory_6 = wprinter::get_sep();
#line 136
$memory_8 = "=";
#line 136
$memory_7 = wprinter::build_sim($memory_8);
#line 136
undef($memory_8);
#line 136
$memory_8 = wprinter::get_sep();
#line 136
$memory_9 = pretty_printer_priv::print_val($memory_4);
#line 136
$memory_5 = [$memory_6,$memory_7,$memory_8,$memory_9];
#line 136
undef($memory_6);
#line 136
undef($memory_7);
#line 136
undef($memory_8);
#line 136
undef($memory_9);
#line 136
array::append($memory_1, $memory_5);
#line 136
undef($memory_5);
#line 136
undef($memory_4);
#line 137
goto label_73;
#line 137
label_71:
#line 138
goto label_73;
#line 138
label_73:
#line 138
undef($memory_2);
#line 138
undef($memory_3);
#line 139
$memory_2 = wprinter::build_pretty_l($memory_1);
#line 139
undef($memory_0);
#line 139
undef($memory_1);
#line 139
return $memory_2;
#line 139
undef($memory_2);
#line 139
undef($memory_1);
#line 139
undef($memory_0);
#line 139
return;
}

sub pretty_printer_priv::pind($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;$memory_0 = $_[0];
#line 143
$memory_1 = "";
#line 144
$memory_2 = 0;
#line 144
$memory_3 = 1;
#line 144
label_3:
#line 144
$memory_4 = c_rt_lib::to_nl($memory_2 >= $memory_0);
#line 144
if (c_rt_lib::check_true($memory_4)) {goto label_13;}
#line 144
$memory_6 = 9;
#line 144
$memory_5 = string::chr($memory_6);
#line 144
undef($memory_6);
#line 144
$memory_1 = $memory_1 . $memory_5;
#line 144
undef($memory_5);
#line 144
$memory_2 = $memory_2 + $memory_3;
#line 144
goto label_3;
#line 144
label_13:
#line 144
undef($memory_2);
#line 144
undef($memory_3);
#line 144
undef($memory_4);
#line 145
undef($memory_0);
#line 145
return $memory_1;
#line 145
undef($memory_1);
#line 145
undef($memory_0);
#line 145
return;
}

sub pretty_printer_priv::join_print_hash_elem($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;$memory_0 = $_[0];
#line 149
$memory_1 = [];
#line 150
$memory_2 = array::len($memory_0);
#line 150
$memory_3 = 0;
#line 150
$memory_4 = 1;
#line 150
label_4:
#line 150
$memory_5 = c_rt_lib::to_nl($memory_3 >= $memory_2);
#line 150
if (c_rt_lib::check_true($memory_5)) {goto label_33;}
#line 151
$memory_7 = $memory_0->[$memory_3];
#line 151
$memory_6 = pretty_printer_priv::print_hash_elem($memory_7);
#line 151
undef($memory_7);
#line 151
array::push($memory_1, $memory_6);
#line 151
undef($memory_6);
#line 152
$memory_6 = array::len($memory_0);
#line 152
$memory_7 = 1;
#line 152
$memory_6 = $memory_6 - $memory_7;
#line 152
undef($memory_7);
#line 152
$memory_6 = c_rt_lib::to_nl($memory_3 != $memory_6);
#line 152
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 152
if (c_rt_lib::check_true($memory_6)) {goto label_29;}
#line 152
$memory_9 = ",";
#line 152
$memory_8 = wprinter::build_sim($memory_9);
#line 152
undef($memory_9);
#line 152
$memory_9 = wprinter::get_sep();
#line 152
$memory_7 = [$memory_8,$memory_9];
#line 152
undef($memory_8);
#line 152
undef($memory_9);
#line 152
array::append($memory_1, $memory_7);
#line 152
undef($memory_7);
#line 152
goto label_29;
#line 152
label_29:
#line 152
undef($memory_6);
#line 153
$memory_3 = $memory_3 + $memory_4;
#line 153
goto label_4;
#line 153
label_33:
#line 153
undef($memory_2);
#line 153
undef($memory_3);
#line 153
undef($memory_4);
#line 153
undef($memory_5);
#line 154
undef($memory_0);
#line 154
return $memory_1;
#line 154
undef($memory_1);
#line 154
undef($memory_0);
#line 154
return;
}

sub pretty_printer_priv::print_hash_elem($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;$memory_0 = $_[0];
#line 158
$memory_1 = $memory_0->{'val'};
#line 158
$memory_1 = $memory_1->{'value'};
#line 158
$memory_1 = c_rt_lib::ov_is($memory_1, 'hash_decl');
#line 158
if (c_rt_lib::check_true($memory_1)) {goto label_7;}
#line 158
$memory_1 = $memory_0->{'val'};
#line 158
$memory_1 = $memory_1->{'value'};
#line 158
$memory_1 = c_rt_lib::ov_is($memory_1, 'arr_decl');
#line 158
label_7:
#line 158
$memory_1 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_1));
#line 158
if (c_rt_lib::check_true($memory_1)) {goto label_46;}
#line 159
$memory_2 = $memory_0->{'key'};
#line 159
$memory_2 = $memory_2->{'value'};
#line 159
$memory_2 = c_rt_lib::ov_as($memory_2, 'hash_key');
#line 160
$memory_4 = " ";
#line 160
$memory_3 = string::index2($memory_2, $memory_4);
#line 160
undef($memory_4);
#line 160
$memory_4 = 0;
#line 160
$memory_3 = c_rt_lib::to_nl($memory_3 > $memory_4);
#line 160
undef($memory_4);
#line 160
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 160
if (c_rt_lib::check_true($memory_3)) {goto label_29;}
#line 161
$memory_4 = "'";
#line 161
$memory_4 = $memory_4 . $memory_2;
#line 161
$memory_5 = "'";
#line 161
$memory_4 = $memory_4 . $memory_5;
#line 161
undef($memory_5);
#line 161
$memory_2 = $memory_4;
#line 161
undef($memory_4);
#line 162
goto label_29;
#line 162
label_29:
#line 162
undef($memory_3);
#line 163
$memory_4 = $memory_0->{'val'};
#line 163
$memory_5 = " => ";
#line 163
$memory_5 = $memory_2 . $memory_5;
#line 163
$memory_6 = "";
#line 163
$memory_3 = pretty_printer_priv::get_compressed_fun_val($memory_4, $memory_5, $memory_6);
#line 163
undef($memory_6);
#line 163
undef($memory_5);
#line 163
undef($memory_4);
#line 163
undef($memory_0);
#line 163
undef($memory_1);
#line 163
undef($memory_2);
#line 163
return $memory_3;
#line 163
undef($memory_3);
#line 163
undef($memory_2);
#line 164
goto label_46;
#line 164
label_46:
#line 164
undef($memory_1);
#line 166
$memory_4 = $memory_0->{'key'};
#line 166
$memory_3 = pretty_printer_priv::print_val($memory_4);
#line 166
undef($memory_4);
#line 167
$memory_4 = wprinter::get_sep();
#line 168
$memory_6 = "=>";
#line 168
$memory_5 = wprinter::build_sim($memory_6);
#line 168
undef($memory_6);
#line 169
$memory_6 = wprinter::get_sep();
#line 170
$memory_8 = $memory_0->{'val'};
#line 170
$memory_7 = pretty_printer_priv::print_val($memory_8);
#line 170
undef($memory_8);
#line 170
$memory_2 = [$memory_3,$memory_4,$memory_5,$memory_6,$memory_7];
#line 170
undef($memory_3);
#line 170
undef($memory_4);
#line 170
undef($memory_5);
#line 170
undef($memory_6);
#line 170
undef($memory_7);
#line 170
$memory_1 = wprinter::build_pretty_l($memory_2);
#line 170
undef($memory_2);
#line 170
undef($memory_0);
#line 170
return $memory_1;
#line 170
undef($memory_1);
#line 170
undef($memory_0);
#line 170
return;
}

sub pretty_printer_priv::print_variant($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;$memory_0 = $_[0];
#line 175
$memory_1 = $memory_0->{'name'};
#line 175
$memory_3 = "TRUE";
#line 175
$memory_1 = c_rt_lib::to_nl($memory_1 eq $memory_3);
#line 175
undef($memory_3);
#line 175
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_1));
#line 175
if (c_rt_lib::check_true($memory_2)) {goto label_9;}
#line 175
$memory_1 = $memory_0->{'var'};
#line 175
$memory_1 = $memory_1->{'value'};
#line 175
$memory_1 = c_rt_lib::ov_is($memory_1, 'nop');
#line 175
label_9:
#line 175
undef($memory_2);
#line 175
$memory_1 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_1));
#line 175
if (c_rt_lib::check_true($memory_1)) {goto label_21;}
#line 176
$memory_3 = "true";
#line 176
$memory_2 = wprinter::build_sim($memory_3);
#line 176
undef($memory_3);
#line 176
undef($memory_0);
#line 176
undef($memory_1);
#line 176
return $memory_2;
#line 176
undef($memory_2);
#line 177
goto label_43;
#line 177
label_21:
#line 177
$memory_1 = $memory_0->{'name'};
#line 177
$memory_3 = "FALSE";
#line 177
$memory_1 = c_rt_lib::to_nl($memory_1 eq $memory_3);
#line 177
undef($memory_3);
#line 177
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_1));
#line 177
if (c_rt_lib::check_true($memory_2)) {goto label_31;}
#line 177
$memory_1 = $memory_0->{'var'};
#line 177
$memory_1 = $memory_1->{'value'};
#line 177
$memory_1 = c_rt_lib::ov_is($memory_1, 'nop');
#line 177
label_31:
#line 177
undef($memory_2);
#line 177
$memory_1 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_1));
#line 177
if (c_rt_lib::check_true($memory_1)) {goto label_43;}
#line 178
$memory_3 = "false";
#line 178
$memory_2 = wprinter::build_sim($memory_3);
#line 178
undef($memory_3);
#line 178
undef($memory_0);
#line 178
undef($memory_1);
#line 178
return $memory_2;
#line 178
undef($memory_2);
#line 179
goto label_43;
#line 179
label_43:
#line 179
undef($memory_1);
#line 180
$memory_1 = $memory_0->{'var'};
#line 180
$memory_1 = $memory_1->{'value'};
#line 180
$memory_1 = c_rt_lib::ov_is($memory_1, 'arr_decl');
#line 180
if (c_rt_lib::check_true($memory_1)) {goto label_52;}
#line 180
$memory_1 = $memory_0->{'var'};
#line 180
$memory_1 = $memory_1->{'value'};
#line 180
$memory_1 = c_rt_lib::ov_is($memory_1, 'hash_decl');
#line 180
label_52:
#line 180
$memory_1 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_1));
#line 180
if (c_rt_lib::check_true($memory_1)) {goto label_73;}
#line 181
$memory_3 = $memory_0->{'var'};
#line 181
$memory_4 = ":";
#line 181
$memory_5 = $memory_0->{'name'};
#line 181
$memory_4 = $memory_4 . $memory_5;
#line 181
undef($memory_5);
#line 181
$memory_5 = "(";
#line 181
$memory_4 = $memory_4 . $memory_5;
#line 181
undef($memory_5);
#line 181
$memory_5 = ")";
#line 181
$memory_2 = pretty_printer_priv::get_compressed_fun_val($memory_3, $memory_4, $memory_5);
#line 181
undef($memory_5);
#line 181
undef($memory_4);
#line 181
undef($memory_3);
#line 181
undef($memory_0);
#line 181
undef($memory_1);
#line 181
return $memory_2;
#line 181
undef($memory_2);
#line 182
goto label_73;
#line 182
label_73:
#line 182
undef($memory_1);
#line 183
$memory_1 = [];
#line 184
$memory_3 = ":";
#line 184
$memory_4 = $memory_0->{'name'};
#line 184
$memory_3 = $memory_3 . $memory_4;
#line 184
undef($memory_4);
#line 184
$memory_2 = wprinter::build_sim($memory_3);
#line 184
undef($memory_3);
#line 184
array::push($memory_1, $memory_2);
#line 184
undef($memory_2);
#line 186
$memory_2 = $memory_0->{'var'};
#line 186
$memory_2 = $memory_2->{'value'};
#line 186
$memory_2 = c_rt_lib::ov_is($memory_2, 'nop');
#line 186
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 186
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 186
if (c_rt_lib::check_true($memory_2)) {goto label_106;}
#line 185
$memory_5 = "(";
#line 185
$memory_4 = wprinter::build_sim($memory_5);
#line 185
undef($memory_5);
#line 185
$memory_6 = $memory_0->{'var'};
#line 185
$memory_5 = pretty_printer_priv::print_val($memory_6);
#line 185
undef($memory_6);
#line 185
$memory_7 = ")";
#line 185
$memory_6 = wprinter::build_sim($memory_7);
#line 185
undef($memory_7);
#line 185
$memory_3 = [$memory_4,$memory_5,$memory_6];
#line 185
undef($memory_4);
#line 185
undef($memory_5);
#line 185
undef($memory_6);
#line 185
array::append($memory_1, $memory_3);
#line 185
undef($memory_3);
#line 185
goto label_106;
#line 185
label_106:
#line 185
undef($memory_2);
#line 187
$memory_2 = wprinter::build_pretty_op_l($memory_1);
#line 187
undef($memory_0);
#line 187
undef($memory_1);
#line 187
return $memory_2;
#line 187
undef($memory_2);
#line 187
undef($memory_1);
#line 187
undef($memory_0);
#line 187
return;
}

sub pretty_printer_priv::print_variant_case_decl($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;$memory_0 = $_[0];
#line 191
$memory_3 = ":";
#line 191
$memory_4 = $memory_0->{'name'};
#line 191
$memory_3 = $memory_3 . $memory_4;
#line 191
undef($memory_4);
#line 191
$memory_2 = wprinter::build_sim($memory_3);
#line 191
undef($memory_3);
#line 191
$memory_1 = [$memory_2];
#line 191
undef($memory_2);
#line 192
$memory_2 = $memory_0->{'value'};
#line 192
$memory_3 = c_rt_lib::ov_is($memory_2, 'value');
#line 192
if (c_rt_lib::check_true($memory_3)) {goto label_16;}
#line 194
$memory_3 = c_rt_lib::ov_is($memory_2, 'none');
#line 194
if (c_rt_lib::check_true($memory_3)) {goto label_33;}
#line 194
$memory_3 = "NOMATCHALERT";
#line 194
$memory_3 = [$memory_3,$memory_2];
#line 194
die(dfile::ssave($memory_3));
#line 192
label_16:
#line 192
$memory_4 = c_rt_lib::ov_as($memory_2, 'value');
#line 193
$memory_7 = "(";
#line 193
$memory_6 = wprinter::build_sim($memory_7);
#line 193
undef($memory_7);
#line 193
$memory_7 = pretty_printer_priv::print_var_decl($memory_4);
#line 193
$memory_9 = ")";
#line 193
$memory_8 = wprinter::build_sim($memory_9);
#line 193
undef($memory_9);
#line 193
$memory_5 = [$memory_6,$memory_7,$memory_8];
#line 193
undef($memory_6);
#line 193
undef($memory_7);
#line 193
undef($memory_8);
#line 193
array::append($memory_1, $memory_5);
#line 193
undef($memory_5);
#line 193
undef($memory_4);
#line 194
goto label_35;
#line 194
label_33:
#line 195
goto label_35;
#line 195
label_35:
#line 195
undef($memory_2);
#line 195
undef($memory_3);
#line 196
$memory_2 = wprinter::build_pretty_op_l($memory_1);
#line 196
undef($memory_0);
#line 196
undef($memory_1);
#line 196
return $memory_2;
#line 196
undef($memory_2);
#line 196
undef($memory_1);
#line 196
undef($memory_0);
#line 196
return;
}

sub pretty_printer_priv::join_print_fun_arg($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;$memory_0 = $_[0];
#line 200
$memory_1 = [];
#line 201
$memory_2 = array::len($memory_0);
#line 201
$memory_3 = 0;
#line 201
$memory_4 = 1;
#line 201
label_4:
#line 201
$memory_5 = c_rt_lib::to_nl($memory_3 >= $memory_2);
#line 201
if (c_rt_lib::check_true($memory_5)) {goto label_33;}
#line 202
$memory_7 = $memory_0->[$memory_3];
#line 202
$memory_6 = pretty_printer_priv::print_fun_arg($memory_7);
#line 202
undef($memory_7);
#line 202
array::push($memory_1, $memory_6);
#line 202
undef($memory_6);
#line 203
$memory_6 = array::len($memory_0);
#line 203
$memory_7 = 1;
#line 203
$memory_6 = $memory_6 - $memory_7;
#line 203
undef($memory_7);
#line 203
$memory_6 = c_rt_lib::to_nl($memory_3 != $memory_6);
#line 203
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 203
if (c_rt_lib::check_true($memory_6)) {goto label_29;}
#line 203
$memory_9 = ",";
#line 203
$memory_8 = wprinter::build_sim($memory_9);
#line 203
undef($memory_9);
#line 203
$memory_9 = wprinter::get_sep();
#line 203
$memory_7 = [$memory_8,$memory_9];
#line 203
undef($memory_8);
#line 203
undef($memory_9);
#line 203
array::append($memory_1, $memory_7);
#line 203
undef($memory_7);
#line 203
goto label_29;
#line 203
label_29:
#line 203
undef($memory_6);
#line 204
$memory_3 = $memory_3 + $memory_4;
#line 204
goto label_4;
#line 204
label_33:
#line 204
undef($memory_2);
#line 204
undef($memory_3);
#line 204
undef($memory_4);
#line 204
undef($memory_5);
#line 205
undef($memory_0);
#line 205
return $memory_1;
#line 205
undef($memory_1);
#line 205
undef($memory_0);
#line 205
return;
}

sub pretty_printer_priv::print_fun_arg($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;$memory_0 = $_[0];
#line 209
$memory_1 = [];
#line 210
$memory_2 = $memory_0->{'mod'};
#line 210
$memory_3 = c_rt_lib::ov_is($memory_2, 'ref');
#line 210
if (c_rt_lib::check_true($memory_3)) {goto label_9;}
#line 212
$memory_3 = c_rt_lib::ov_is($memory_2, 'none');
#line 212
if (c_rt_lib::check_true($memory_3)) {goto label_20;}
#line 212
$memory_3 = "NOMATCHALERT";
#line 212
$memory_3 = [$memory_3,$memory_2];
#line 212
die(dfile::ssave($memory_3));
#line 210
label_9:
#line 211
$memory_6 = "ref";
#line 211
$memory_5 = wprinter::build_sim($memory_6);
#line 211
undef($memory_6);
#line 211
$memory_6 = wprinter::get_sep();
#line 211
$memory_4 = [$memory_5,$memory_6];
#line 211
undef($memory_5);
#line 211
undef($memory_6);
#line 211
array::append($memory_1, $memory_4);
#line 211
undef($memory_4);
#line 212
goto label_22;
#line 212
label_20:
#line 213
goto label_22;
#line 213
label_22:
#line 213
undef($memory_2);
#line 213
undef($memory_3);
#line 214
$memory_3 = $memory_0->{'val'};
#line 214
$memory_2 = pretty_printer_priv::print_val($memory_3);
#line 214
undef($memory_3);
#line 214
array::push($memory_1, $memory_2);
#line 214
undef($memory_2);
#line 215
$memory_2 = wprinter::build_pretty_op_l($memory_1);
#line 215
undef($memory_0);
#line 215
undef($memory_1);
#line 215
return $memory_2;
#line 215
undef($memory_2);
#line 215
undef($memory_1);
#line 215
undef($memory_0);
#line 215
return;
}

sub pretty_printer_priv::count_structs($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;$memory_0 = $_[0];
#line 219
$memory_1 = 0;
#line 220
$memory_3 = 0;
#line 220
$memory_4 = 1;
#line 220
$memory_5 = c_rt_lib::array_len($memory_0);
#line 220
label_4:
#line 220
$memory_6 = c_rt_lib::to_nl($memory_3 >= $memory_5);
#line 220
if (c_rt_lib::check_true($memory_6)) {goto label_26;}
#line 220
$memory_2 = $memory_0->[$memory_3];
#line 221
$memory_7 = $memory_2->{'val'};
#line 221
$memory_7 = $memory_7->{'value'};
#line 221
$memory_7 = c_rt_lib::ov_is($memory_7, 'arr_decl');
#line 221
if (c_rt_lib::check_true($memory_7)) {goto label_15;}
#line 221
$memory_7 = $memory_2->{'val'};
#line 221
$memory_7 = $memory_7->{'value'};
#line 221
$memory_7 = c_rt_lib::ov_is($memory_7, 'hash_decl');
#line 221
label_15:
#line 221
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 221
if (c_rt_lib::check_true($memory_7)) {goto label_22;}
#line 221
$memory_8 = 1;
#line 221
$memory_1 = $memory_1 + $memory_8;
#line 221
undef($memory_8);
#line 221
goto label_22;
#line 221
label_22:
#line 221
undef($memory_7);
#line 222
$memory_3 = $memory_3 + $memory_4;
#line 222
goto label_4;
#line 222
label_26:
#line 222
undef($memory_2);
#line 222
undef($memory_3);
#line 222
undef($memory_4);
#line 222
undef($memory_5);
#line 222
undef($memory_6);
#line 223
undef($memory_0);
#line 223
return $memory_1;
#line 223
undef($memory_1);
#line 223
undef($memory_0);
#line 223
return;
}

sub pretty_printer_priv::get_compressed_fun_val($$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;$memory_0 = $_[0];$memory_1 = $_[1];$memory_2 = $_[2];
#line 228
$memory_4 = $memory_1;
#line 229
$memory_5 = $memory_2;
#line 230
label_2:
#line 231
$memory_6 = $memory_0->{'value'};
#line 231
$memory_6 = c_rt_lib::ov_is($memory_6, 'arr_decl');
#line 231
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 231
if (c_rt_lib::check_true($memory_6)) {goto label_39;}
#line 232
$memory_7 = $memory_0->{'value'};
#line 232
$memory_7 = c_rt_lib::ov_as($memory_7, 'arr_decl');
#line 233
$memory_8 = "[";
#line 233
$memory_4 = $memory_4 . $memory_8;
#line 233
undef($memory_8);
#line 234
$memory_8 = "]";
#line 234
$memory_8 = $memory_8 . $memory_5;
#line 234
$memory_5 = $memory_8;
#line 234
undef($memory_8);
#line 235
$memory_8 = array::len($memory_7);
#line 235
$memory_9 = 1;
#line 235
$memory_8 = c_rt_lib::to_nl($memory_8 != $memory_9);
#line 235
undef($memory_9);
#line 235
$memory_8 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 235
if (c_rt_lib::check_true($memory_8)) {goto label_30;}
#line 236
$memory_9 = pretty_printer_priv::join_print_val($memory_7);
#line 236
$memory_3 = $memory_9;
#line 236
undef($memory_9);
#line 237
undef($memory_6);
#line 237
undef($memory_7);
#line 237
undef($memory_8);
#line 237
goto label_73;
#line 238
goto label_30;
#line 238
label_30:
#line 238
undef($memory_8);
#line 239
$memory_9 = 0;
#line 239
$memory_8 = $memory_7->[$memory_9];
#line 239
undef($memory_9);
#line 239
$memory_0 = $memory_8;
#line 239
undef($memory_8);
#line 239
undef($memory_7);
#line 240
goto label_70;
#line 240
label_39:
#line 240
$memory_6 = $memory_0->{'value'};
#line 240
$memory_6 = c_rt_lib::ov_is($memory_6, 'hash_decl');
#line 240
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 240
if (c_rt_lib::check_true($memory_6)) {goto label_61;}
#line 241
$memory_7 = $memory_0->{'value'};
#line 241
$memory_7 = c_rt_lib::ov_as($memory_7, 'hash_decl');
#line 242
$memory_8 = "{";
#line 242
$memory_4 = $memory_4 . $memory_8;
#line 242
undef($memory_8);
#line 243
$memory_8 = "}";
#line 243
$memory_8 = $memory_8 . $memory_5;
#line 243
$memory_5 = $memory_8;
#line 243
undef($memory_8);
#line 244
$memory_8 = pretty_printer_priv::join_print_hash_elem($memory_7);
#line 244
$memory_3 = $memory_8;
#line 244
undef($memory_8);
#line 245
undef($memory_6);
#line 245
undef($memory_7);
#line 245
goto label_73;
#line 245
undef($memory_7);
#line 246
goto label_70;
#line 246
label_61:
#line 247
$memory_8 = pretty_printer_priv::print_val($memory_0);
#line 247
$memory_7 = [$memory_8];
#line 247
undef($memory_8);
#line 247
$memory_3 = $memory_7;
#line 247
undef($memory_7);
#line 248
undef($memory_6);
#line 248
goto label_73;
#line 249
goto label_70;
#line 249
label_70:
#line 249
undef($memory_6);
#line 230
goto label_2;
#line 230
label_73:
#line 251
$memory_6 = wprinter::build_pretty_arr_decl($memory_3, $memory_4, $memory_5);
#line 251
undef($memory_0);
#line 251
undef($memory_1);
#line 251
undef($memory_2);
#line 251
undef($memory_3);
#line 251
undef($memory_4);
#line 251
undef($memory_5);
#line 251
return $memory_6;
#line 251
undef($memory_6);
#line 251
undef($memory_3);
#line 251
undef($memory_4);
#line 251
undef($memory_5);
#line 251
undef($memory_0);
#line 251
undef($memory_1);
#line 251
undef($memory_2);
#line 251
return;
}

sub pretty_printer_priv::print_st($$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];$memory_2 = $_[2];
#line 255
$memory_3 = " ";
#line 255
pretty_printer_priv::state_print($memory_0, $memory_3);
#line 255
undef($memory_3);
#line 256
pretty_printer_priv::print_cmd($memory_0, $memory_1, $memory_2);
#line 256
undef($memory_1);
#line 256
undef($memory_2);
#line 256
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub pretty_printer_priv::get_fun_label($$) {
my $memory_0;my $memory_1;my $memory_2;$memory_0 = $_[0];$memory_1 = $_[1];
#line 260
$memory_2 = "";
#line 260
$memory_2 = c_rt_lib::to_nl($memory_1 eq $memory_2);
#line 260
if (c_rt_lib::check_true($memory_2)) {goto label_7;}
#line 260
$memory_2 = "::";
#line 260
$memory_2 = $memory_1 . $memory_2;
#line 260
$memory_2 = $memory_2 . $memory_0;
#line 260
goto label_9;
#line 260
label_7:
#line 260
$memory_2 = $memory_0;
#line 260
label_9:
#line 260
undef($memory_0);
#line 260
undef($memory_1);
#line 260
return $memory_2;
#line 260
undef($memory_2);
#line 260
undef($memory_0);
#line 260
undef($memory_1);
#line 260
return;
}

sub pretty_printer_priv::string_to_nl($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;$memory_0 = $_[0];
#line 264
$memory_2 = "'";
#line 264
$memory_3 = "''";
#line 264
$memory_1 = string::replace($memory_0, $memory_2, $memory_3);
#line 264
undef($memory_3);
#line 264
undef($memory_2);
#line 264
undef($memory_0);
#line 264
return $memory_1;
#line 264
undef($memory_1);
#line 264
undef($memory_0);
#line 264
return;
}

sub pretty_printer_priv::join_print_val($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;$memory_0 = $_[0];
#line 268
$memory_1 = [];
#line 269
$memory_2 = array::len($memory_0);
#line 269
$memory_3 = 0;
#line 269
$memory_4 = 1;
#line 269
label_4:
#line 269
$memory_5 = c_rt_lib::to_nl($memory_3 >= $memory_2);
#line 269
if (c_rt_lib::check_true($memory_5)) {goto label_33;}
#line 270
$memory_7 = $memory_0->[$memory_3];
#line 270
$memory_6 = pretty_printer_priv::print_val($memory_7);
#line 270
undef($memory_7);
#line 270
array::push($memory_1, $memory_6);
#line 270
undef($memory_6);
#line 271
$memory_6 = array::len($memory_0);
#line 271
$memory_7 = 1;
#line 271
$memory_6 = $memory_6 - $memory_7;
#line 271
undef($memory_7);
#line 271
$memory_6 = c_rt_lib::to_nl($memory_3 != $memory_6);
#line 271
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 271
if (c_rt_lib::check_true($memory_6)) {goto label_29;}
#line 271
$memory_9 = ",";
#line 271
$memory_8 = wprinter::build_sim($memory_9);
#line 271
undef($memory_9);
#line 271
$memory_9 = wprinter::get_sep();
#line 271
$memory_7 = [$memory_8,$memory_9];
#line 271
undef($memory_8);
#line 271
undef($memory_9);
#line 271
array::append($memory_1, $memory_7);
#line 271
undef($memory_7);
#line 271
goto label_29;
#line 271
label_29:
#line 271
undef($memory_6);
#line 272
$memory_3 = $memory_3 + $memory_4;
#line 272
goto label_4;
#line 272
label_33:
#line 272
undef($memory_2);
#line 272
undef($memory_3);
#line 272
undef($memory_4);
#line 272
undef($memory_5);
#line 273
undef($memory_0);
#line 273
return $memory_1;
#line 273
undef($memory_1);
#line 273
undef($memory_0);
#line 273
return;
}

sub pretty_printer_priv::is_to_change_ov($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;$memory_0 = $_[0];
#line 277
$memory_1 = $memory_0->{'value'};
#line 277
$memory_1 = c_rt_lib::ov_is($memory_1, 'fun_val');
#line 277
$memory_1 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_1));
#line 277
$memory_1 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_1));
#line 277
if (c_rt_lib::check_true($memory_1)) {goto label_11;}
#line 277
$memory_2 = c_rt_lib::to_nl(0);
#line 277
undef($memory_0);
#line 277
undef($memory_1);
#line 277
return $memory_2;
#line 277
undef($memory_2);
#line 277
goto label_11;
#line 277
label_11:
#line 277
undef($memory_1);
#line 278
$memory_1 = $memory_0->{'value'};
#line 278
$memory_1 = c_rt_lib::ov_as($memory_1, 'fun_val');
#line 279
$memory_4 = $memory_1->{'args'};
#line 279
$memory_2 = array::len($memory_4);
#line 279
undef($memory_4);
#line 279
$memory_4 = 2;
#line 279
$memory_2 = c_rt_lib::to_nl($memory_2 == $memory_4);
#line 279
undef($memory_4);
#line 279
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 279
if (c_rt_lib::check_true($memory_3)) {goto label_32;}
#line 279
$memory_2 = $memory_1->{'module'};
#line 279
$memory_4 = "ov";
#line 279
$memory_2 = c_rt_lib::to_nl($memory_2 eq $memory_4);
#line 279
undef($memory_4);
#line 279
if (c_rt_lib::check_true($memory_2)) {goto label_32;}
#line 279
$memory_2 = $memory_1->{'module'};
#line 279
$memory_4 = "c_ov";
#line 279
$memory_2 = c_rt_lib::to_nl($memory_2 eq $memory_4);
#line 279
undef($memory_4);
#line 279
label_32:
#line 279
undef($memory_3);
#line 279
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 279
if (c_rt_lib::check_true($memory_2)) {goto label_106;}
#line 280
$memory_3 = $memory_1->{'name'};
#line 280
$memory_5 = "as";
#line 280
$memory_3 = c_rt_lib::to_nl($memory_3 eq $memory_5);
#line 280
undef($memory_5);
#line 280
if (c_rt_lib::check_true($memory_3)) {goto label_45;}
#line 280
$memory_3 = $memory_1->{'name'};
#line 280
$memory_5 = "is";
#line 280
$memory_3 = c_rt_lib::to_nl($memory_3 eq $memory_5);
#line 280
undef($memory_5);
#line 280
label_45:
#line 280
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 280
if (c_rt_lib::check_true($memory_4)) {goto label_55;}
#line 280
$memory_3 = $memory_1->{'args'};
#line 280
$memory_5 = 1;
#line 280
$memory_3 = $memory_3->[$memory_5];
#line 280
undef($memory_5);
#line 280
$memory_3 = $memory_3->{'val'};
#line 280
$memory_3 = $memory_3->{'value'};
#line 280
$memory_3 = c_rt_lib::ov_is($memory_3, 'string');
#line 280
label_55:
#line 280
undef($memory_4);
#line 280
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 280
if (c_rt_lib::check_true($memory_3)) {goto label_103;}
#line 281
$memory_4 = $memory_1->{'args'};
#line 281
$memory_5 = 1;
#line 281
$memory_4 = $memory_4->[$memory_5];
#line 281
undef($memory_5);
#line 281
$memory_4 = $memory_4->{'val'};
#line 281
$memory_4 = $memory_4->{'value'};
#line 281
$memory_4 = c_rt_lib::ov_as($memory_4, 'string');
#line 282
$memory_7 = $memory_4->{'arr'};
#line 282
$memory_5 = array::len($memory_7);
#line 282
undef($memory_7);
#line 282
$memory_7 = 1;
#line 282
$memory_5 = c_rt_lib::to_nl($memory_5 == $memory_7);
#line 282
undef($memory_7);
#line 282
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 282
if (c_rt_lib::check_true($memory_6)) {goto label_85;}
#line 282
$memory_7 = $memory_4->{'arr'};
#line 282
$memory_8 = 0;
#line 282
$memory_7 = $memory_7->[$memory_8];
#line 282
undef($memory_8);
#line 282
$memory_8 = " ";
#line 282
$memory_5 = string::index2($memory_7, $memory_8);
#line 282
undef($memory_8);
#line 282
undef($memory_7);
#line 282
$memory_7 = 0;
#line 282
$memory_5 = c_rt_lib::to_nl($memory_5 < $memory_7);
#line 282
undef($memory_7);
#line 282
label_85:
#line 282
undef($memory_6);
#line 282
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 282
if (c_rt_lib::check_true($memory_5)) {goto label_99;}
#line 283
$memory_6 = c_rt_lib::to_nl(1);
#line 283
undef($memory_0);
#line 283
undef($memory_1);
#line 283
undef($memory_2);
#line 283
undef($memory_3);
#line 283
undef($memory_4);
#line 283
undef($memory_5);
#line 283
return $memory_6;
#line 283
undef($memory_6);
#line 284
goto label_99;
#line 284
label_99:
#line 284
undef($memory_5);
#line 284
undef($memory_4);
#line 285
goto label_103;
#line 285
label_103:
#line 285
undef($memory_3);
#line 286
goto label_106;
#line 286
label_106:
#line 286
undef($memory_2);
#line 287
$memory_2 = c_rt_lib::to_nl(0);
#line 287
undef($memory_0);
#line 287
undef($memory_1);
#line 287
return $memory_2;
#line 287
undef($memory_2);
#line 287
undef($memory_1);
#line 287
undef($memory_0);
#line 287
return;
}

sub pretty_printer_priv::print_val($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;my $memory_13;my $memory_14;my $memory_15;$memory_0 = $_[0];
#line 291
$memory_1 = $memory_0->{'value'};
#line 291
$memory_2 = c_rt_lib::ov_is($memory_1, 'const');
#line 291
if (c_rt_lib::check_true($memory_2)) {goto label_38;}
#line 293
$memory_2 = c_rt_lib::ov_is($memory_1, 'string');
#line 293
if (c_rt_lib::check_true($memory_2)) {goto label_49;}
#line 303
$memory_2 = c_rt_lib::ov_is($memory_1, 'hash_key');
#line 303
if (c_rt_lib::check_true($memory_2)) {goto label_121;}
#line 308
$memory_2 = c_rt_lib::ov_is($memory_1, 'variant');
#line 308
if (c_rt_lib::check_true($memory_2)) {goto label_150;}
#line 310
$memory_2 = c_rt_lib::ov_is($memory_1, 'var');
#line 310
if (c_rt_lib::check_true($memory_2)) {goto label_161;}
#line 312
$memory_2 = c_rt_lib::ov_is($memory_1, 'parenthesis');
#line 312
if (c_rt_lib::check_true($memory_2)) {goto label_172;}
#line 314
$memory_2 = c_rt_lib::ov_is($memory_1, 'ternary_op');
#line 314
if (c_rt_lib::check_true($memory_2)) {goto label_195;}
#line 322
$memory_2 = c_rt_lib::ov_is($memory_1, 'bin_op');
#line 322
if (c_rt_lib::check_true($memory_2)) {goto label_240;}
#line 355
$memory_2 = c_rt_lib::ov_is($memory_1, 'var_op');
#line 355
if (c_rt_lib::check_true($memory_2)) {goto label_409;}
#line 370
$memory_2 = c_rt_lib::ov_is($memory_1, 'post_dec');
#line 370
if (c_rt_lib::check_true($memory_2)) {goto label_463;}
#line 372
$memory_2 = c_rt_lib::ov_is($memory_1, 'post_inc');
#line 372
if (c_rt_lib::check_true($memory_2)) {goto label_482;}
#line 374
$memory_2 = c_rt_lib::ov_is($memory_1, 'unary_op');
#line 374
if (c_rt_lib::check_true($memory_2)) {goto label_501;}
#line 376
$memory_2 = c_rt_lib::ov_is($memory_1, 'fun_val');
#line 376
if (c_rt_lib::check_true($memory_2)) {goto label_520;}
#line 400
$memory_2 = c_rt_lib::ov_is($memory_1, 'nop');
#line 400
if (c_rt_lib::check_true($memory_2)) {goto label_698;}
#line 402
$memory_2 = c_rt_lib::ov_is($memory_1, 'arr_decl');
#line 402
if (c_rt_lib::check_true($memory_2)) {goto label_711;}
#line 404
$memory_2 = c_rt_lib::ov_is($memory_1, 'hash_decl');
#line 404
if (c_rt_lib::check_true($memory_2)) {goto label_726;}
#line 406
$memory_2 = c_rt_lib::ov_is($memory_1, 'fun_label');
#line 406
if (c_rt_lib::check_true($memory_2)) {goto label_743;}
#line 406
$memory_2 = "NOMATCHALERT";
#line 406
$memory_2 = [$memory_2,$memory_1];
#line 406
die(dfile::ssave($memory_2));
#line 291
label_38:
#line 291
$memory_3 = c_rt_lib::ov_as($memory_1, 'const');
#line 292
$memory_4 = wprinter::build_sim($memory_3);
#line 292
undef($memory_0);
#line 292
undef($memory_1);
#line 292
undef($memory_2);
#line 292
undef($memory_3);
#line 292
return $memory_4;
#line 292
undef($memory_4);
#line 292
undef($memory_3);
#line 293
goto label_760;
#line 293
label_49:
#line 293
$memory_3 = c_rt_lib::ov_as($memory_1, 'string');
#line 294
$memory_4 = [];
#line 295
$memory_5 = $memory_3->{'arr'};
#line 295
$memory_7 = 0;
#line 295
$memory_8 = 1;
#line 295
$memory_9 = c_rt_lib::array_len($memory_5);
#line 295
label_56:
#line 295
$memory_10 = c_rt_lib::to_nl($memory_7 >= $memory_9);
#line 295
if (c_rt_lib::check_true($memory_10)) {goto label_68;}
#line 295
$memory_6 = $memory_5->[$memory_7];
#line 296
$memory_11 = "'";
#line 296
$memory_12 = pretty_printer_priv::string_to_nl($memory_6);
#line 296
$memory_11 = $memory_11 . $memory_12;
#line 296
undef($memory_12);
#line 296
array::push($memory_4, $memory_11);
#line 296
undef($memory_11);
#line 297
$memory_7 = $memory_7 + $memory_8;
#line 297
goto label_56;
#line 297
label_68:
#line 297
undef($memory_5);
#line 297
undef($memory_6);
#line 297
undef($memory_7);
#line 297
undef($memory_8);
#line 297
undef($memory_9);
#line 297
undef($memory_10);
#line 298
$memory_5 = $memory_3->{'last'};
#line 298
$memory_6 = c_rt_lib::ov_is($memory_5, 'new_line');
#line 298
if (c_rt_lib::check_true($memory_6)) {goto label_83;}
#line 299
$memory_6 = c_rt_lib::ov_is($memory_5, 'end');
#line 299
if (c_rt_lib::check_true($memory_6)) {goto label_85;}
#line 299
$memory_6 = "NOMATCHALERT";
#line 299
$memory_6 = [$memory_6,$memory_5];
#line 299
die(dfile::ssave($memory_6));
#line 298
label_83:
#line 299
goto label_105;
#line 299
label_85:
#line 300
$memory_8 = array::len($memory_4);
#line 300
$memory_9 = 1;
#line 300
$memory_8 = $memory_8 - $memory_9;
#line 300
undef($memory_9);
#line 300
$memory_7 = $memory_4->[$memory_8];
#line 300
undef($memory_8);
#line 300
$memory_8 = "'";
#line 300
$memory_7 = $memory_7 . $memory_8;
#line 300
undef($memory_8);
#line 300
$memory_9 = array::len($memory_4);
#line 300
$memory_10 = 1;
#line 300
$memory_9 = $memory_9 - $memory_10;
#line 300
undef($memory_10);
#line 300
$memory_8 = $memory_7;
#line 300
 if (c_rt_lib::get_arrcount($memory_4) > 1) {$memory_4 = [@{$memory_4}];}$memory_4->[$memory_9] = $memory_8;
#line 300
undef($memory_7);
#line 300
undef($memory_8);
#line 300
undef($memory_9);
#line 301
goto label_105;
#line 301
label_105:
#line 301
undef($memory_5);
#line 301
undef($memory_6);
#line 302
$memory_6 = $memory_3->{'last'};
#line 302
$memory_5 = wprinter::build_str_arr($memory_4, $memory_6);
#line 302
undef($memory_6);
#line 302
undef($memory_0);
#line 302
undef($memory_1);
#line 302
undef($memory_2);
#line 302
undef($memory_3);
#line 302
undef($memory_4);
#line 302
return $memory_5;
#line 302
undef($memory_5);
#line 302
undef($memory_4);
#line 302
undef($memory_3);
#line 303
goto label_760;
#line 303
label_121:
#line 303
$memory_3 = c_rt_lib::ov_as($memory_1, 'hash_key');
#line 304
$memory_5 = " ";
#line 304
$memory_4 = string::index2($memory_3, $memory_5);
#line 304
undef($memory_5);
#line 304
$memory_5 = 0;
#line 304
$memory_4 = c_rt_lib::to_nl($memory_4 >= $memory_5);
#line 304
undef($memory_5);
#line 304
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 304
if (c_rt_lib::check_true($memory_4)) {goto label_139;}
#line 305
$memory_5 = "'";
#line 305
$memory_5 = $memory_5 . $memory_3;
#line 305
$memory_6 = "'";
#line 305
$memory_5 = $memory_5 . $memory_6;
#line 305
undef($memory_6);
#line 305
$memory_3 = $memory_5;
#line 305
undef($memory_5);
#line 306
goto label_139;
#line 306
label_139:
#line 306
undef($memory_4);
#line 307
$memory_4 = wprinter::build_sim($memory_3);
#line 307
undef($memory_0);
#line 307
undef($memory_1);
#line 307
undef($memory_2);
#line 307
undef($memory_3);
#line 307
return $memory_4;
#line 307
undef($memory_4);
#line 307
undef($memory_3);
#line 308
goto label_760;
#line 308
label_150:
#line 308
$memory_3 = c_rt_lib::ov_as($memory_1, 'variant');
#line 309
$memory_4 = pretty_printer_priv::print_variant($memory_3);
#line 309
undef($memory_0);
#line 309
undef($memory_1);
#line 309
undef($memory_2);
#line 309
undef($memory_3);
#line 309
return $memory_4;
#line 309
undef($memory_4);
#line 309
undef($memory_3);
#line 310
goto label_760;
#line 310
label_161:
#line 310
$memory_3 = c_rt_lib::ov_as($memory_1, 'var');
#line 311
$memory_4 = wprinter::build_sim($memory_3);
#line 311
undef($memory_0);
#line 311
undef($memory_1);
#line 311
undef($memory_2);
#line 311
undef($memory_3);
#line 311
return $memory_4;
#line 311
undef($memory_4);
#line 311
undef($memory_3);
#line 312
goto label_760;
#line 312
label_172:
#line 312
$memory_3 = c_rt_lib::ov_as($memory_1, 'parenthesis');
#line 313
$memory_7 = "(";
#line 313
$memory_6 = wprinter::build_sim($memory_7);
#line 313
undef($memory_7);
#line 313
$memory_7 = pretty_printer_priv::print_val($memory_3);
#line 313
$memory_9 = ")";
#line 313
$memory_8 = wprinter::build_sim($memory_9);
#line 313
undef($memory_9);
#line 313
$memory_5 = [$memory_6,$memory_7,$memory_8];
#line 313
undef($memory_6);
#line 313
undef($memory_7);
#line 313
undef($memory_8);
#line 313
$memory_4 = wprinter::build_pretty_a($memory_5);
#line 313
undef($memory_5);
#line 313
undef($memory_0);
#line 313
undef($memory_1);
#line 313
undef($memory_2);
#line 313
undef($memory_3);
#line 313
return $memory_4;
#line 313
undef($memory_4);
#line 313
undef($memory_3);
#line 314
goto label_760;
#line 314
label_195:
#line 314
$memory_3 = c_rt_lib::ov_as($memory_1, 'ternary_op');
#line 316
$memory_7 = $memory_3->{'fst'};
#line 316
$memory_6 = pretty_printer_priv::print_val($memory_7);
#line 316
undef($memory_7);
#line 317
$memory_7 = wprinter::get_sep();
#line 318
$memory_11 = "? ";
#line 318
$memory_10 = wprinter::build_sim($memory_11);
#line 318
undef($memory_11);
#line 318
$memory_12 = $memory_3->{'snd'};
#line 318
$memory_11 = pretty_printer_priv::print_val($memory_12);
#line 318
undef($memory_12);
#line 318
$memory_9 = [$memory_10,$memory_11];
#line 318
undef($memory_10);
#line 318
undef($memory_11);
#line 318
$memory_8 = wprinter::build_pretty_op_l($memory_9);
#line 318
undef($memory_9);
#line 319
$memory_9 = wprinter::get_sep();
#line 320
$memory_13 = ": ";
#line 320
$memory_12 = wprinter::build_sim($memory_13);
#line 320
undef($memory_13);
#line 320
$memory_14 = $memory_3->{'thrd'};
#line 320
$memory_13 = pretty_printer_priv::print_val($memory_14);
#line 320
undef($memory_14);
#line 320
$memory_11 = [$memory_12,$memory_13];
#line 320
undef($memory_12);
#line 320
undef($memory_13);
#line 320
$memory_10 = wprinter::build_pretty_op_l($memory_11);
#line 320
undef($memory_11);
#line 320
$memory_5 = [$memory_6,$memory_7,$memory_8,$memory_9,$memory_10];
#line 320
undef($memory_6);
#line 320
undef($memory_7);
#line 320
undef($memory_8);
#line 320
undef($memory_9);
#line 320
undef($memory_10);
#line 320
$memory_4 = wprinter::build_pretty_a($memory_5);
#line 320
undef($memory_5);
#line 320
undef($memory_0);
#line 320
undef($memory_1);
#line 320
undef($memory_2);
#line 320
undef($memory_3);
#line 320
return $memory_4;
#line 320
undef($memory_4);
#line 320
undef($memory_3);
#line 322
goto label_760;
#line 322
label_240:
#line 322
$memory_3 = c_rt_lib::ov_as($memory_1, 'bin_op');
#line 323
$memory_4 = $memory_3->{'op'};
#line 324
$memory_5 = "ARRAY_INDEX";
#line 324
$memory_5 = c_rt_lib::to_nl($memory_4 eq $memory_5);
#line 324
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 324
if (c_rt_lib::check_true($memory_5)) {goto label_279;}
#line 326
$memory_11 = $memory_3->{'left'};
#line 326
$memory_10 = pretty_printer_priv::print_val($memory_11);
#line 326
undef($memory_11);
#line 326
$memory_12 = "[";
#line 326
$memory_11 = wprinter::build_sim($memory_12);
#line 326
undef($memory_12);
#line 326
$memory_9 = [$memory_10,$memory_11];
#line 326
undef($memory_10);
#line 326
undef($memory_11);
#line 326
$memory_8 = wprinter::build_pretty_l($memory_9);
#line 326
undef($memory_9);
#line 327
$memory_10 = $memory_3->{'right'};
#line 327
$memory_9 = pretty_printer_priv::print_val($memory_10);
#line 327
undef($memory_10);
#line 328
$memory_11 = "]";
#line 328
$memory_10 = wprinter::build_sim($memory_11);
#line 328
undef($memory_11);
#line 328
$memory_7 = [$memory_8,$memory_9,$memory_10];
#line 328
undef($memory_8);
#line 328
undef($memory_9);
#line 328
undef($memory_10);
#line 328
$memory_6 = wprinter::build_pretty_a($memory_7);
#line 328
undef($memory_7);
#line 328
undef($memory_0);
#line 328
undef($memory_1);
#line 328
undef($memory_2);
#line 328
undef($memory_3);
#line 328
undef($memory_4);
#line 328
undef($memory_5);
#line 328
return $memory_6;
#line 328
undef($memory_6);
#line 330
goto label_404;
#line 330
label_279:
#line 330
$memory_5 = "HASH_INDEX";
#line 330
$memory_5 = c_rt_lib::to_nl($memory_4 eq $memory_5);
#line 330
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 330
if (c_rt_lib::check_true($memory_5)) {goto label_316;}
#line 332
$memory_11 = $memory_3->{'left'};
#line 332
$memory_10 = pretty_printer_priv::print_val($memory_11);
#line 332
undef($memory_11);
#line 332
$memory_12 = "{";
#line 332
$memory_11 = wprinter::build_sim($memory_12);
#line 332
undef($memory_12);
#line 332
$memory_9 = [$memory_10,$memory_11];
#line 332
undef($memory_10);
#line 332
undef($memory_11);
#line 332
$memory_8 = wprinter::build_pretty_l($memory_9);
#line 332
undef($memory_9);
#line 333
$memory_10 = $memory_3->{'right'};
#line 333
$memory_9 = pretty_printer_priv::print_val($memory_10);
#line 333
undef($memory_10);
#line 334
$memory_11 = "}";
#line 334
$memory_10 = wprinter::build_sim($memory_11);
#line 334
undef($memory_11);
#line 334
$memory_7 = [$memory_8,$memory_9,$memory_10];
#line 334
undef($memory_8);
#line 334
undef($memory_9);
#line 334
undef($memory_10);
#line 334
$memory_6 = wprinter::build_pretty_a($memory_7);
#line 334
undef($memory_7);
#line 334
undef($memory_0);
#line 334
undef($memory_1);
#line 334
undef($memory_2);
#line 334
undef($memory_3);
#line 334
undef($memory_4);
#line 334
undef($memory_5);
#line 334
return $memory_6;
#line 334
undef($memory_6);
#line 336
goto label_404;
#line 336
label_316:
#line 336
$memory_5 = "->";
#line 336
$memory_5 = c_rt_lib::to_nl($memory_4 eq $memory_5);
#line 336
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 336
if (c_rt_lib::check_true($memory_5)) {goto label_373;}
#line 338
$memory_8 = $memory_3->{'left'};
#line 338
$memory_7 = pretty_printer_priv::is_to_change_ov($memory_8);
#line 338
undef($memory_8);
#line 338
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 338
if (c_rt_lib::check_true($memory_7)) {goto label_344;}
#line 340
$memory_11 = "(";
#line 340
$memory_10 = wprinter::build_sim($memory_11);
#line 340
undef($memory_11);
#line 341
$memory_12 = $memory_3->{'left'};
#line 341
$memory_11 = pretty_printer_priv::print_val($memory_12);
#line 341
undef($memory_12);
#line 342
$memory_13 = ")";
#line 342
$memory_12 = wprinter::build_sim($memory_13);
#line 342
undef($memory_13);
#line 342
$memory_9 = [$memory_10,$memory_11,$memory_12];
#line 342
undef($memory_10);
#line 342
undef($memory_11);
#line 342
undef($memory_12);
#line 342
$memory_8 = wprinter::build_pretty_a($memory_9);
#line 342
undef($memory_9);
#line 342
$memory_6 = $memory_8;
#line 342
undef($memory_8);
#line 344
goto label_351;
#line 344
label_344:
#line 345
$memory_9 = $memory_3->{'left'};
#line 345
$memory_8 = pretty_printer_priv::print_val($memory_9);
#line 345
undef($memory_9);
#line 345
$memory_6 = $memory_8;
#line 345
undef($memory_8);
#line 346
goto label_351;
#line 346
label_351:
#line 346
undef($memory_7);
#line 347
$memory_9 = wprinter::build_sim($memory_4);
#line 347
$memory_11 = $memory_3->{'right'};
#line 347
$memory_10 = pretty_printer_priv::print_val($memory_11);
#line 347
undef($memory_11);
#line 347
$memory_8 = [$memory_6,$memory_9,$memory_10];
#line 347
undef($memory_9);
#line 347
undef($memory_10);
#line 347
$memory_7 = wprinter::build_pretty_op_l($memory_8);
#line 347
undef($memory_8);
#line 347
undef($memory_0);
#line 347
undef($memory_1);
#line 347
undef($memory_2);
#line 347
undef($memory_3);
#line 347
undef($memory_4);
#line 347
undef($memory_5);
#line 347
undef($memory_6);
#line 347
return $memory_7;
#line 347
undef($memory_7);
#line 347
undef($memory_6);
#line 348
goto label_404;
#line 348
label_373:
#line 350
$memory_11 = $memory_3->{'left'};
#line 350
$memory_10 = pretty_printer_priv::print_val($memory_11);
#line 350
undef($memory_11);
#line 350
$memory_11 = wprinter::get_sep();
#line 350
$memory_12 = wprinter::build_sim($memory_4);
#line 350
$memory_9 = [$memory_10,$memory_11,$memory_12];
#line 350
undef($memory_10);
#line 350
undef($memory_11);
#line 350
undef($memory_12);
#line 350
$memory_8 = wprinter::build_pretty_op_l($memory_9);
#line 350
undef($memory_9);
#line 351
$memory_9 = wprinter::get_sep();
#line 352
$memory_11 = $memory_3->{'right'};
#line 352
$memory_10 = pretty_printer_priv::print_val($memory_11);
#line 352
undef($memory_11);
#line 352
$memory_7 = [$memory_8,$memory_9,$memory_10];
#line 352
undef($memory_8);
#line 352
undef($memory_9);
#line 352
undef($memory_10);
#line 352
$memory_6 = wprinter::build_pretty_op_l($memory_7);
#line 352
undef($memory_7);
#line 352
undef($memory_0);
#line 352
undef($memory_1);
#line 352
undef($memory_2);
#line 352
undef($memory_3);
#line 352
undef($memory_4);
#line 352
undef($memory_5);
#line 352
return $memory_6;
#line 352
undef($memory_6);
#line 354
goto label_404;
#line 354
label_404:
#line 354
undef($memory_5);
#line 354
undef($memory_4);
#line 354
undef($memory_3);
#line 355
goto label_760;
#line 355
label_409:
#line 355
$memory_3 = c_rt_lib::ov_as($memory_1, 'var_op');
#line 357
$memory_5 = $memory_3->{'op'};
#line 357
$memory_6 = c_rt_lib::ov_is($memory_5, 'ov_as');
#line 357
if (c_rt_lib::check_true($memory_6)) {goto label_419;}
#line 359
$memory_6 = c_rt_lib::ov_is($memory_5, 'ov_is');
#line 359
if (c_rt_lib::check_true($memory_6)) {goto label_424;}
#line 359
$memory_6 = "NOMATCHALERT";
#line 359
$memory_6 = [$memory_6,$memory_5];
#line 359
die(dfile::ssave($memory_6));
#line 357
label_419:
#line 358
$memory_7 = "as";
#line 358
$memory_4 = $memory_7;
#line 358
undef($memory_7);
#line 359
goto label_429;
#line 359
label_424:
#line 360
$memory_7 = "is";
#line 360
$memory_4 = $memory_7;
#line 360
undef($memory_7);
#line 361
goto label_429;
#line 361
label_429:
#line 361
undef($memory_5);
#line 361
undef($memory_6);
#line 363
$memory_8 = $memory_3->{'left'};
#line 363
$memory_7 = pretty_printer_priv::print_val($memory_8);
#line 363
undef($memory_8);
#line 364
$memory_8 = wprinter::get_sep();
#line 365
$memory_9 = wprinter::build_sim($memory_4);
#line 366
$memory_10 = wprinter::get_sep();
#line 367
$memory_12 = ":";
#line 367
$memory_11 = wprinter::build_sim($memory_12);
#line 367
undef($memory_12);
#line 368
$memory_13 = $memory_3->{'case'};
#line 368
$memory_12 = wprinter::build_sim($memory_13);
#line 368
undef($memory_13);
#line 368
$memory_6 = [$memory_7,$memory_8,$memory_9,$memory_10,$memory_11,$memory_12];
#line 368
undef($memory_7);
#line 368
undef($memory_8);
#line 368
undef($memory_9);
#line 368
undef($memory_10);
#line 368
undef($memory_11);
#line 368
undef($memory_12);
#line 368
$memory_5 = wprinter::build_pretty_op_l($memory_6);
#line 368
undef($memory_6);
#line 368
undef($memory_0);
#line 368
undef($memory_1);
#line 368
undef($memory_2);
#line 368
undef($memory_3);
#line 368
undef($memory_4);
#line 368
return $memory_5;
#line 368
undef($memory_5);
#line 368
undef($memory_4);
#line 368
undef($memory_3);
#line 370
goto label_760;
#line 370
label_463:
#line 370
$memory_3 = c_rt_lib::ov_as($memory_1, 'post_dec');
#line 371
$memory_6 = pretty_printer_priv::print_val($memory_3);
#line 371
$memory_8 = "--";
#line 371
$memory_7 = wprinter::build_sim($memory_8);
#line 371
undef($memory_8);
#line 371
$memory_5 = [$memory_6,$memory_7];
#line 371
undef($memory_6);
#line 371
undef($memory_7);
#line 371
$memory_4 = wprinter::build_pretty_op_l($memory_5);
#line 371
undef($memory_5);
#line 371
undef($memory_0);
#line 371
undef($memory_1);
#line 371
undef($memory_2);
#line 371
undef($memory_3);
#line 371
return $memory_4;
#line 371
undef($memory_4);
#line 371
undef($memory_3);
#line 372
goto label_760;
#line 372
label_482:
#line 372
$memory_3 = c_rt_lib::ov_as($memory_1, 'post_inc');
#line 373
$memory_6 = pretty_printer_priv::print_val($memory_3);
#line 373
$memory_8 = "++";
#line 373
$memory_7 = wprinter::build_sim($memory_8);
#line 373
undef($memory_8);
#line 373
$memory_5 = [$memory_6,$memory_7];
#line 373
undef($memory_6);
#line 373
undef($memory_7);
#line 373
$memory_4 = wprinter::build_pretty_op_l($memory_5);
#line 373
undef($memory_5);
#line 373
undef($memory_0);
#line 373
undef($memory_1);
#line 373
undef($memory_2);
#line 373
undef($memory_3);
#line 373
return $memory_4;
#line 373
undef($memory_4);
#line 373
undef($memory_3);
#line 374
goto label_760;
#line 374
label_501:
#line 374
$memory_3 = c_rt_lib::ov_as($memory_1, 'unary_op');
#line 375
$memory_6 = $memory_3->{'op'};
#line 375
$memory_5 = wprinter::build_sim($memory_6);
#line 375
undef($memory_6);
#line 375
$memory_7 = $memory_3->{'val'};
#line 375
$memory_6 = pretty_printer_priv::print_val($memory_7);
#line 375
undef($memory_7);
#line 375
$memory_4 = wprinter::build_pretty_bind($memory_5, $memory_6);
#line 375
undef($memory_6);
#line 375
undef($memory_5);
#line 375
undef($memory_0);
#line 375
undef($memory_1);
#line 375
undef($memory_2);
#line 375
undef($memory_3);
#line 375
return $memory_4;
#line 375
undef($memory_4);
#line 375
undef($memory_3);
#line 376
goto label_760;
#line 376
label_520:
#line 376
$memory_3 = c_rt_lib::ov_as($memory_1, 'fun_val');
#line 377
$memory_5 = $memory_3->{'name'};
#line 377
$memory_6 = $memory_3->{'module'};
#line 377
$memory_4 = pretty_printer_priv::get_fun_label($memory_5, $memory_6);
#line 377
undef($memory_6);
#line 377
undef($memory_5);
#line 377
$memory_5 = "(";
#line 377
$memory_4 = $memory_4 . $memory_5;
#line 377
undef($memory_5);
#line 378
$memory_6 = $memory_3->{'args'};
#line 378
$memory_5 = array::len($memory_6);
#line 378
undef($memory_6);
#line 378
$memory_6 = 1;
#line 378
$memory_5 = c_rt_lib::to_nl($memory_5 == $memory_6);
#line 378
undef($memory_6);
#line 378
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 378
if (c_rt_lib::check_true($memory_5)) {goto label_569;}
#line 379
$memory_6 = $memory_3->{'args'};
#line 379
$memory_7 = 0;
#line 379
$memory_6 = $memory_6->[$memory_7];
#line 379
undef($memory_7);
#line 379
$memory_6 = $memory_6->{'val'};
#line 380
$memory_7 = $memory_6->{'value'};
#line 380
$memory_7 = c_rt_lib::ov_is($memory_7, 'hash_decl');
#line 380
if (c_rt_lib::check_true($memory_7)) {goto label_548;}
#line 380
$memory_7 = $memory_6->{'value'};
#line 380
$memory_7 = c_rt_lib::ov_is($memory_7, 'arr_decl');
#line 380
label_548:
#line 380
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 380
if (c_rt_lib::check_true($memory_7)) {goto label_565;}
#line 381
$memory_9 = ")";
#line 381
$memory_8 = pretty_printer_priv::get_compressed_fun_val($memory_6, $memory_4, $memory_9);
#line 381
undef($memory_9);
#line 381
undef($memory_0);
#line 381
undef($memory_1);
#line 381
undef($memory_2);
#line 381
undef($memory_3);
#line 381
undef($memory_4);
#line 381
undef($memory_5);
#line 381
undef($memory_6);
#line 381
undef($memory_7);
#line 381
return $memory_8;
#line 381
undef($memory_8);
#line 382
goto label_565;
#line 382
label_565:
#line 382
undef($memory_7);
#line 382
undef($memory_6);
#line 383
goto label_618;
#line 383
label_569:
#line 383
$memory_5 = pretty_printer_priv::is_to_change_ov($memory_0);
#line 383
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 383
if (c_rt_lib::check_true($memory_5)) {goto label_618;}
#line 385
$memory_9 = $memory_3->{'args'};
#line 385
$memory_10 = 0;
#line 385
$memory_9 = $memory_9->[$memory_10];
#line 385
undef($memory_10);
#line 385
$memory_9 = $memory_9->{'val'};
#line 385
$memory_8 = pretty_printer_priv::print_val($memory_9);
#line 385
undef($memory_9);
#line 386
$memory_9 = wprinter::get_sep();
#line 387
$memory_11 = $memory_3->{'name'};
#line 387
$memory_10 = wprinter::build_sim($memory_11);
#line 387
undef($memory_11);
#line 388
$memory_11 = wprinter::get_sep();
#line 389
$memory_13 = ":";
#line 389
$memory_14 = $memory_3->{'args'};
#line 389
$memory_15 = 1;
#line 389
$memory_14 = $memory_14->[$memory_15];
#line 389
undef($memory_15);
#line 389
$memory_14 = $memory_14->{'val'};
#line 389
$memory_14 = $memory_14->{'value'};
#line 389
$memory_14 = c_rt_lib::ov_as($memory_14, 'string');
#line 389
$memory_14 = $memory_14->{'arr'};
#line 389
$memory_15 = 0;
#line 389
$memory_14 = $memory_14->[$memory_15];
#line 389
undef($memory_15);
#line 389
$memory_13 = $memory_13 . $memory_14;
#line 389
undef($memory_14);
#line 389
$memory_12 = wprinter::build_sim($memory_13);
#line 389
undef($memory_13);
#line 389
$memory_7 = [$memory_8,$memory_9,$memory_10,$memory_11,$memory_12];
#line 389
undef($memory_8);
#line 389
undef($memory_9);
#line 389
undef($memory_10);
#line 389
undef($memory_11);
#line 389
undef($memory_12);
#line 389
$memory_6 = wprinter::build_pretty_op_l($memory_7);
#line 389
undef($memory_7);
#line 389
undef($memory_0);
#line 389
undef($memory_1);
#line 389
undef($memory_2);
#line 389
undef($memory_3);
#line 389
undef($memory_4);
#line 389
undef($memory_5);
#line 389
return $memory_6;
#line 389
undef($memory_6);
#line 391
goto label_618;
#line 391
label_618:
#line 391
undef($memory_5);
#line 392
$memory_6 = wprinter::build_sim($memory_4);
#line 392
$memory_5 = [$memory_6];
#line 392
undef($memory_6);
#line 393
$memory_7 = $memory_3->{'args'};
#line 393
$memory_6 = pretty_printer_priv::join_print_fun_arg($memory_7);
#line 393
undef($memory_7);
#line 393
array::append($memory_5, $memory_6);
#line 393
undef($memory_6);
#line 394
$memory_7 = ")";
#line 394
$memory_6 = wprinter::build_sim($memory_7);
#line 394
undef($memory_7);
#line 394
array::push($memory_5, $memory_6);
#line 394
undef($memory_6);
#line 397
$memory_8 = $memory_3->{'args'};
#line 397
$memory_6 = pretty_printer_priv::count_structs($memory_8);
#line 397
undef($memory_8);
#line 397
$memory_9 = $memory_3->{'args'};
#line 397
$memory_8 = array::len($memory_9);
#line 397
undef($memory_9);
#line 397
$memory_6 = c_rt_lib::to_nl($memory_6 == $memory_8);
#line 397
undef($memory_8);
#line 397
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 397
if (c_rt_lib::check_true($memory_7)) {goto label_649;}
#line 397
$memory_8 = $memory_3->{'args'};
#line 397
$memory_6 = array::len($memory_8);
#line 397
undef($memory_8);
#line 397
$memory_8 = 0;
#line 397
$memory_6 = c_rt_lib::to_nl($memory_6 > $memory_8);
#line 397
undef($memory_8);
#line 397
label_649:
#line 397
undef($memory_7);
#line 397
if (c_rt_lib::check_true($memory_6)) {goto label_669;}
#line 398
$memory_8 = $memory_3->{'args'};
#line 398
$memory_6 = array::len($memory_8);
#line 398
undef($memory_8);
#line 398
$memory_8 = 1;
#line 398
$memory_6 = c_rt_lib::to_nl($memory_6 == $memory_8);
#line 398
undef($memory_8);
#line 398
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 398
if (c_rt_lib::check_true($memory_7)) {goto label_667;}
#line 398
$memory_6 = $memory_3->{'args'};
#line 398
$memory_8 = 0;
#line 398
$memory_6 = $memory_6->[$memory_8];
#line 398
undef($memory_8);
#line 398
$memory_6 = $memory_6->{'val'};
#line 398
$memory_6 = $memory_6->{'value'};
#line 398
$memory_6 = c_rt_lib::ov_is($memory_6, 'fun_val');
#line 398
label_667:
#line 398
undef($memory_7);
#line 398
label_669:
#line 398
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 398
if (c_rt_lib::check_true($memory_6)) {goto label_683;}
#line 395
$memory_7 = wprinter::build_pretty_op_l($memory_5);
#line 395
undef($memory_0);
#line 395
undef($memory_1);
#line 395
undef($memory_2);
#line 395
undef($memory_3);
#line 395
undef($memory_4);
#line 395
undef($memory_5);
#line 395
undef($memory_6);
#line 395
return $memory_7;
#line 395
undef($memory_7);
#line 395
goto label_683;
#line 395
label_683:
#line 395
undef($memory_6);
#line 399
$memory_6 = wprinter::build_pretty_l($memory_5);
#line 399
undef($memory_0);
#line 399
undef($memory_1);
#line 399
undef($memory_2);
#line 399
undef($memory_3);
#line 399
undef($memory_4);
#line 399
undef($memory_5);
#line 399
return $memory_6;
#line 399
undef($memory_6);
#line 399
undef($memory_4);
#line 399
undef($memory_5);
#line 399
undef($memory_3);
#line 400
goto label_760;
#line 400
label_698:
#line 401
$memory_4 = 0;
#line 401
$memory_5 = "";
#line 401
$memory_5 = c_rt_lib::ov_mk_arg('sim', $memory_5);
#line 401
$memory_3 = {len => $memory_4,el => $memory_5,};
#line 401
undef($memory_4);
#line 401
undef($memory_5);
#line 401
undef($memory_0);
#line 401
undef($memory_1);
#line 401
undef($memory_2);
#line 401
return $memory_3;
#line 401
undef($memory_3);
#line 402
goto label_760;
#line 402
label_711:
#line 402
$memory_3 = c_rt_lib::ov_as($memory_1, 'arr_decl');
#line 403
$memory_5 = "";
#line 403
$memory_6 = "";
#line 403
$memory_4 = pretty_printer_priv::get_compressed_fun_val($memory_0, $memory_5, $memory_6);
#line 403
undef($memory_6);
#line 403
undef($memory_5);
#line 403
undef($memory_0);
#line 403
undef($memory_1);
#line 403
undef($memory_2);
#line 403
undef($memory_3);
#line 403
return $memory_4;
#line 403
undef($memory_4);
#line 403
undef($memory_3);
#line 404
goto label_760;
#line 404
label_726:
#line 404
$memory_3 = c_rt_lib::ov_as($memory_1, 'hash_decl');
#line 405
$memory_5 = pretty_printer_priv::join_print_hash_elem($memory_3);
#line 405
$memory_6 = "{";
#line 405
$memory_7 = "}";
#line 405
$memory_4 = wprinter::build_pretty_arr_decl($memory_5, $memory_6, $memory_7);
#line 405
undef($memory_7);
#line 405
undef($memory_6);
#line 405
undef($memory_5);
#line 405
undef($memory_0);
#line 405
undef($memory_1);
#line 405
undef($memory_2);
#line 405
undef($memory_3);
#line 405
return $memory_4;
#line 405
undef($memory_4);
#line 405
undef($memory_3);
#line 406
goto label_760;
#line 406
label_743:
#line 406
$memory_3 = c_rt_lib::ov_as($memory_1, 'fun_label');
#line 407
$memory_6 = $memory_3->{'name'};
#line 407
$memory_7 = $memory_3->{'module'};
#line 407
$memory_5 = pretty_printer_priv::get_fun_label($memory_6, $memory_7);
#line 407
undef($memory_7);
#line 407
undef($memory_6);
#line 407
$memory_4 = wprinter::build_sim($memory_5);
#line 407
undef($memory_5);
#line 407
undef($memory_0);
#line 407
undef($memory_1);
#line 407
undef($memory_2);
#line 407
undef($memory_3);
#line 407
return $memory_4;
#line 407
undef($memory_4);
#line 407
undef($memory_3);
#line 408
goto label_760;
#line 408
label_760:
#line 408
undef($memory_1);
#line 408
undef($memory_2);
#line 408
undef($memory_0);
#line 408
return;
}

sub pretty_printer_priv::print_cond_mod($$$$$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];$memory_2 = $_[2];$memory_3 = $_[3];$memory_4 = $_[4];$memory_5 = $_[5];
#line 414
$memory_7 = wprinter::build_sim($memory_1);
#line 415
$memory_8 = wprinter::get_sep();
#line 416
$memory_10 = pretty_printer_priv::join_print_var_decl($memory_3);
#line 416
$memory_9 = wprinter::build_pretty_l($memory_10);
#line 416
undef($memory_10);
#line 416
$memory_6 = [$memory_7,$memory_8,$memory_9];
#line 416
undef($memory_7);
#line 416
undef($memory_8);
#line 416
undef($memory_9);
#line 418
$memory_7 = array::len($memory_3);
#line 418
$memory_8 = 0;
#line 418
$memory_7 = c_rt_lib::to_nl($memory_7 > $memory_8);
#line 418
undef($memory_8);
#line 418
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 418
if (c_rt_lib::check_true($memory_7)) {goto label_21;}
#line 418
$memory_9 = " ";
#line 418
$memory_8 = wprinter::build_sim($memory_9);
#line 418
undef($memory_9);
#line 418
array::push($memory_6, $memory_8);
#line 418
undef($memory_8);
#line 418
goto label_21;
#line 418
label_21:
#line 418
undef($memory_7);
#line 419
$memory_7 = array::len($memory_3);
#line 419
$memory_8 = 0;
#line 419
$memory_7 = c_rt_lib::to_nl($memory_7 > $memory_8);
#line 419
undef($memory_8);
#line 419
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 419
if (c_rt_lib::check_true($memory_7)) {goto label_35;}
#line 419
$memory_9 = "(";
#line 419
$memory_8 = wprinter::build_sim($memory_9);
#line 419
undef($memory_9);
#line 419
array::push($memory_6, $memory_8);
#line 419
undef($memory_8);
#line 419
goto label_35;
#line 419
label_35:
#line 419
undef($memory_7);
#line 420
$memory_7 = pretty_printer_priv::print_val($memory_4);
#line 420
array::push($memory_6, $memory_7);
#line 420
undef($memory_7);
#line 421
$memory_7 = array::len($memory_3);
#line 421
$memory_8 = 0;
#line 421
$memory_7 = c_rt_lib::to_nl($memory_7 > $memory_8);
#line 421
undef($memory_8);
#line 421
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 421
if (c_rt_lib::check_true($memory_7)) {goto label_52;}
#line 421
$memory_9 = ")";
#line 421
$memory_8 = wprinter::build_sim($memory_9);
#line 421
undef($memory_9);
#line 421
array::push($memory_6, $memory_8);
#line 421
undef($memory_8);
#line 421
goto label_52;
#line 421
label_52:
#line 421
undef($memory_7);
#line 423
$memory_9 = pretty_printer_priv::print_simple_statement($memory_2);
#line 424
$memory_10 = wprinter::get_sep();
#line 425
$memory_11 = wprinter::build_pretty_op_l($memory_6);
#line 425
$memory_8 = [$memory_9,$memory_10,$memory_11];
#line 425
undef($memory_9);
#line 425
undef($memory_10);
#line 425
undef($memory_11);
#line 425
$memory_7 = wprinter::build_pretty_a($memory_8);
#line 425
undef($memory_8);
#line 425
wprinter::print_t($memory_0, $memory_7, $memory_5);
#line 425
undef($memory_7);
#line 427
$memory_7 = ";";
#line 427
pretty_printer_priv::state_print($memory_0, $memory_7);
#line 427
undef($memory_7);
#line 427
undef($memory_6);
#line 427
undef($memory_1);
#line 427
undef($memory_2);
#line 427
undef($memory_3);
#line 427
undef($memory_4);
#line 427
undef($memory_5);
#line 427
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub pretty_printer_priv::print_loop($$$$$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];$memory_2 = $_[2];$memory_3 = $_[3];$memory_4 = $_[4];$memory_5 = $_[5];
#line 432
$memory_7 = wprinter::build_sim($memory_1);
#line 432
$memory_8 = wprinter::get_sep();
#line 432
$memory_6 = [$memory_7,$memory_8];
#line 432
undef($memory_7);
#line 432
undef($memory_8);
#line 433
$memory_7 = pretty_printer_priv::join_print_var_decl($memory_3);
#line 433
array::append($memory_6, $memory_7);
#line 433
undef($memory_7);
#line 434
$memory_7 = array::len($memory_3);
#line 434
$memory_8 = 0;
#line 434
$memory_7 = c_rt_lib::to_nl($memory_7 > $memory_8);
#line 434
undef($memory_8);
#line 434
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 434
if (c_rt_lib::check_true($memory_7)) {goto label_20;}
#line 434
$memory_9 = " ";
#line 434
$memory_8 = wprinter::build_sim($memory_9);
#line 434
undef($memory_9);
#line 434
array::push($memory_6, $memory_8);
#line 434
undef($memory_8);
#line 434
goto label_20;
#line 434
label_20:
#line 434
undef($memory_7);
#line 435
$memory_8 = "(";
#line 435
$memory_7 = wprinter::build_sim($memory_8);
#line 435
undef($memory_8);
#line 435
array::push($memory_6, $memory_7);
#line 435
undef($memory_7);
#line 436
$memory_7 = pretty_printer_priv::print_val($memory_4);
#line 437
$memory_8 = $memory_7->{'el'};
#line 437
$memory_8 = c_rt_lib::ov_is($memory_8, 'arr');
#line 437
$memory_8 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 437
if (c_rt_lib::check_true($memory_8)) {goto label_38;}
#line 438
$memory_9 = $memory_7->{'el'};
#line 438
$memory_9 = c_rt_lib::ov_as($memory_9, 'arr');
#line 438
$memory_9 = $memory_9->{'arr'};
#line 438
array::append($memory_6, $memory_9);
#line 438
undef($memory_9);
#line 439
goto label_41;
#line 439
label_38:
#line 440
array::push($memory_6, $memory_7);
#line 441
goto label_41;
#line 441
label_41:
#line 441
undef($memory_8);
#line 442
$memory_9 = ")";
#line 442
$memory_8 = wprinter::build_sim($memory_9);
#line 442
undef($memory_9);
#line 442
array::push($memory_6, $memory_8);
#line 442
undef($memory_8);
#line 443
$memory_8 = wprinter::build_pretty_l($memory_6);
#line 443
wprinter::print_t($memory_0, $memory_8, $memory_5);
#line 443
undef($memory_8);
#line 444
pretty_printer_priv::print_st($memory_0, $memory_2, $memory_5);
#line 444
undef($memory_6);
#line 444
undef($memory_7);
#line 444
undef($memory_1);
#line 444
undef($memory_2);
#line 444
undef($memory_3);
#line 444
undef($memory_4);
#line 444
undef($memory_5);
#line 444
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub pretty_printer_priv::print_loop_or_mod($$$$$$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];$memory_2 = $_[2];$memory_3 = $_[3];$memory_4 = $_[4];$memory_5 = $_[5];$memory_6 = $_[6];
#line 449
$memory_7 = $memory_1;
#line 449
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 449
if (c_rt_lib::check_true($memory_7)) {goto label_5;}
#line 450
pretty_printer_priv::print_cond_mod($memory_0, $memory_2, $memory_3, $memory_4, $memory_5, $memory_6);
#line 451
goto label_8;
#line 451
label_5:
#line 452
pretty_printer_priv::print_loop($memory_0, $memory_2, $memory_3, $memory_4, $memory_5, $memory_6);
#line 453
goto label_8;
#line 453
label_8:
#line 453
undef($memory_7);
#line 453
undef($memory_1);
#line 453
undef($memory_2);
#line 453
undef($memory_3);
#line 453
undef($memory_4);
#line 453
undef($memory_5);
#line 453
undef($memory_6);
#line 453
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub pretty_printer_priv::print_try_ensure($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;$memory_0 = $_[0];$memory_1 = $_[1];
#line 457
$memory_3 = wprinter::build_sim($memory_1);
#line 457
$memory_2 = [$memory_3];
#line 457
undef($memory_3);
#line 458
$memory_3 = c_rt_lib::ov_is($memory_0, 'decl');
#line 458
if (c_rt_lib::check_true($memory_3)) {goto label_12;}
#line 460
$memory_3 = c_rt_lib::ov_is($memory_0, 'expr');
#line 460
if (c_rt_lib::check_true($memory_3)) {goto label_23;}
#line 462
$memory_3 = c_rt_lib::ov_is($memory_0, 'lval');
#line 462
if (c_rt_lib::check_true($memory_3)) {goto label_34;}
#line 462
$memory_3 = "NOMATCHALERT";
#line 462
$memory_3 = [$memory_3,$memory_0];
#line 462
die(dfile::ssave($memory_3));
#line 458
label_12:
#line 458
$memory_4 = c_rt_lib::ov_as($memory_0, 'decl');
#line 459
$memory_6 = wprinter::get_sep();
#line 459
$memory_7 = pretty_printer_priv::print_var_decl($memory_4);
#line 459
$memory_5 = [$memory_6,$memory_7];
#line 459
undef($memory_6);
#line 459
undef($memory_7);
#line 459
array::append($memory_2, $memory_5);
#line 459
undef($memory_5);
#line 459
undef($memory_4);
#line 460
goto label_59;
#line 460
label_23:
#line 460
$memory_4 = c_rt_lib::ov_as($memory_0, 'expr');
#line 461
$memory_6 = wprinter::get_sep();
#line 461
$memory_7 = pretty_printer_priv::print_val($memory_4);
#line 461
$memory_5 = [$memory_6,$memory_7];
#line 461
undef($memory_6);
#line 461
undef($memory_7);
#line 461
array::append($memory_2, $memory_5);
#line 461
undef($memory_5);
#line 461
undef($memory_4);
#line 462
goto label_59;
#line 462
label_34:
#line 462
$memory_4 = c_rt_lib::ov_as($memory_0, 'lval');
#line 464
$memory_6 = wprinter::get_sep();
#line 465
$memory_8 = $memory_4->{'left'};
#line 465
$memory_7 = pretty_printer_priv::print_val($memory_8);
#line 465
undef($memory_8);
#line 466
$memory_8 = wprinter::get_sep();
#line 467
$memory_10 = $memory_4->{'op'};
#line 467
$memory_9 = wprinter::build_sim($memory_10);
#line 467
undef($memory_10);
#line 468
$memory_10 = wprinter::get_sep();
#line 469
$memory_12 = $memory_4->{'right'};
#line 469
$memory_11 = pretty_printer_priv::print_val($memory_12);
#line 469
undef($memory_12);
#line 469
$memory_5 = [$memory_6,$memory_7,$memory_8,$memory_9,$memory_10,$memory_11];
#line 469
undef($memory_6);
#line 469
undef($memory_7);
#line 469
undef($memory_8);
#line 469
undef($memory_9);
#line 469
undef($memory_10);
#line 469
undef($memory_11);
#line 469
array::append($memory_2, $memory_5);
#line 469
undef($memory_5);
#line 469
undef($memory_4);
#line 471
goto label_59;
#line 471
label_59:
#line 471
undef($memory_3);
#line 472
$memory_3 = wprinter::build_pretty_l($memory_2);
#line 472
undef($memory_0);
#line 472
undef($memory_1);
#line 472
undef($memory_2);
#line 472
return $memory_3;
#line 472
undef($memory_3);
#line 472
undef($memory_2);
#line 472
undef($memory_0);
#line 472
undef($memory_1);
#line 472
return;
}

sub pretty_printer_priv::print_return($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;$memory_0 = $_[0];
#line 476
$memory_3 = "return";
#line 476
$memory_2 = wprinter::build_sim($memory_3);
#line 476
undef($memory_3);
#line 476
$memory_1 = [$memory_2];
#line 476
undef($memory_2);
#line 477
$memory_2 = $memory_0->{'value'};
#line 477
$memory_2 = c_rt_lib::ov_is($memory_2, 'nop');
#line 477
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 477
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 477
if (c_rt_lib::check_true($memory_2)) {goto label_18;}
#line 478
$memory_4 = wprinter::get_sep();
#line 478
$memory_5 = pretty_printer_priv::print_val($memory_0);
#line 478
$memory_3 = [$memory_4,$memory_5];
#line 478
undef($memory_4);
#line 478
undef($memory_5);
#line 478
array::append($memory_1, $memory_3);
#line 478
undef($memory_3);
#line 479
goto label_18;
#line 479
label_18:
#line 479
undef($memory_2);
#line 480
$memory_2 = wprinter::build_pretty_l($memory_1);
#line 480
undef($memory_0);
#line 480
undef($memory_1);
#line 480
return $memory_2;
#line 480
undef($memory_2);
#line 480
undef($memory_1);
#line 480
undef($memory_0);
#line 480
return;
}

sub pretty_printer_priv::print_sim_value($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;$memory_0 = $_[0];
#line 484
$memory_1 = pretty_printer_priv::print_val($memory_0);
#line 485
$memory_2 = $memory_1->{'el'};
#line 485
$memory_2 = c_rt_lib::ov_is($memory_2, 'arr');
#line 485
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 485
if (c_rt_lib::check_true($memory_2)) {goto label_13;}
#line 486
$memory_4 = $memory_1->{'el'};
#line 486
$memory_4 = c_rt_lib::ov_as($memory_4, 'arr');
#line 486
$memory_4 = $memory_4->{'arr'};
#line 486
$memory_3 = wprinter::build_pretty_l($memory_4);
#line 486
undef($memory_4);
#line 486
$memory_1 = $memory_3;
#line 486
undef($memory_3);
#line 487
goto label_13;
#line 487
label_13:
#line 487
undef($memory_2);
#line 488
undef($memory_0);
#line 488
return $memory_1;
#line 488
undef($memory_1);
#line 488
undef($memory_0);
#line 488
return;
}

sub pretty_printer_priv::__print_break() {
my $memory_0;my $memory_1;
#line 492
$memory_1 = "break";
#line 492
$memory_0 = wprinter::build_sim($memory_1);
#line 492
undef($memory_1);
#line 492
return $memory_0;
#line 492
undef($memory_0);
#line 492
return;
}

my $_print_break;
sub pretty_printer_priv::print_break() {
	$_print_break = pretty_printer_priv::__print_break() unless defined $_print_break;
	return $_print_break;
}

sub pretty_printer_priv::__print_continue() {
my $memory_0;my $memory_1;
#line 496
$memory_1 = "continue";
#line 496
$memory_0 = wprinter::build_sim($memory_1);
#line 496
undef($memory_1);
#line 496
return $memory_0;
#line 496
undef($memory_0);
#line 496
return;
}

my $_print_continue;
sub pretty_printer_priv::print_continue() {
	$_print_continue = pretty_printer_priv::__print_continue() unless defined $_print_continue;
	return $_print_continue;
}

sub pretty_printer_priv::print_die($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;$memory_0 = $_[0];
#line 500
$memory_3 = "die";
#line 500
$memory_2 = wprinter::build_sim($memory_3);
#line 500
undef($memory_3);
#line 500
$memory_1 = [$memory_2];
#line 500
undef($memory_2);
#line 506
$memory_2 = array::len($memory_0);
#line 506
$memory_3 = 0;
#line 506
$memory_2 = c_rt_lib::to_nl($memory_2 > $memory_3);
#line 506
undef($memory_3);
#line 506
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 506
if (c_rt_lib::check_true($memory_2)) {goto label_27;}
#line 502
$memory_5 = "(";
#line 502
$memory_4 = wprinter::build_sim($memory_5);
#line 502
undef($memory_5);
#line 503
$memory_6 = pretty_printer_priv::join_print_val($memory_0);
#line 503
$memory_5 = wprinter::build_pretty_l($memory_6);
#line 503
undef($memory_6);
#line 504
$memory_7 = ")";
#line 504
$memory_6 = wprinter::build_sim($memory_7);
#line 504
undef($memory_7);
#line 504
$memory_3 = [$memory_4,$memory_5,$memory_6];
#line 504
undef($memory_4);
#line 504
undef($memory_5);
#line 504
undef($memory_6);
#line 504
array::append($memory_1, $memory_3);
#line 504
undef($memory_3);
#line 504
goto label_27;
#line 504
label_27:
#line 504
undef($memory_2);
#line 507
$memory_2 = wprinter::build_pretty_a($memory_1);
#line 507
undef($memory_0);
#line 507
undef($memory_1);
#line 507
return $memory_2;
#line 507
undef($memory_2);
#line 507
undef($memory_1);
#line 507
undef($memory_0);
#line 507
return;
}

sub pretty_printer_priv::print_simple_statement($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;$memory_0 = $_[0];
#line 511
$memory_1 = $memory_0->{'cmd'};
#line 511
$memory_1 = c_rt_lib::ov_is($memory_1, 'value');
#line 511
$memory_1 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_1));
#line 511
if (c_rt_lib::check_true($memory_1)) {goto label_13;}
#line 512
$memory_3 = $memory_0->{'cmd'};
#line 512
$memory_3 = c_rt_lib::ov_as($memory_3, 'value');
#line 512
$memory_2 = pretty_printer_priv::print_sim_value($memory_3);
#line 512
undef($memory_3);
#line 512
undef($memory_0);
#line 512
undef($memory_1);
#line 512
return $memory_2;
#line 512
undef($memory_2);
#line 513
goto label_100;
#line 513
label_13:
#line 513
$memory_1 = $memory_0->{'cmd'};
#line 513
$memory_1 = c_rt_lib::ov_is($memory_1, 'return');
#line 513
$memory_1 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_1));
#line 513
if (c_rt_lib::check_true($memory_1)) {goto label_27;}
#line 514
$memory_3 = $memory_0->{'cmd'};
#line 514
$memory_3 = c_rt_lib::ov_as($memory_3, 'return');
#line 514
$memory_2 = pretty_printer_priv::print_return($memory_3);
#line 514
undef($memory_3);
#line 514
undef($memory_0);
#line 514
undef($memory_1);
#line 514
return $memory_2;
#line 514
undef($memory_2);
#line 515
goto label_100;
#line 515
label_27:
#line 515
$memory_1 = $memory_0->{'cmd'};
#line 515
$memory_1 = c_rt_lib::ov_is($memory_1, 'break');
#line 515
$memory_1 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_1));
#line 515
if (c_rt_lib::check_true($memory_1)) {goto label_38;}
#line 516
$memory_2 = pretty_printer_priv::print_break();
#line 516
undef($memory_0);
#line 516
undef($memory_1);
#line 516
return $memory_2;
#line 516
undef($memory_2);
#line 517
goto label_100;
#line 517
label_38:
#line 517
$memory_1 = $memory_0->{'cmd'};
#line 517
$memory_1 = c_rt_lib::ov_is($memory_1, 'continue');
#line 517
$memory_1 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_1));
#line 517
if (c_rt_lib::check_true($memory_1)) {goto label_49;}
#line 518
$memory_2 = pretty_printer_priv::print_continue();
#line 518
undef($memory_0);
#line 518
undef($memory_1);
#line 518
return $memory_2;
#line 518
undef($memory_2);
#line 519
goto label_100;
#line 519
label_49:
#line 519
$memory_1 = $memory_0->{'cmd'};
#line 519
$memory_1 = c_rt_lib::ov_is($memory_1, 'die');
#line 519
$memory_1 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_1));
#line 519
if (c_rt_lib::check_true($memory_1)) {goto label_63;}
#line 520
$memory_3 = $memory_0->{'cmd'};
#line 520
$memory_3 = c_rt_lib::ov_as($memory_3, 'die');
#line 520
$memory_2 = pretty_printer_priv::print_die($memory_3);
#line 520
undef($memory_3);
#line 520
undef($memory_0);
#line 520
undef($memory_1);
#line 520
return $memory_2;
#line 520
undef($memory_2);
#line 521
goto label_100;
#line 521
label_63:
#line 521
$memory_1 = $memory_0->{'cmd'};
#line 521
$memory_1 = c_rt_lib::ov_is($memory_1, 'try');
#line 521
$memory_1 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_1));
#line 521
if (c_rt_lib::check_true($memory_1)) {goto label_79;}
#line 522
$memory_3 = $memory_0->{'cmd'};
#line 522
$memory_3 = c_rt_lib::ov_as($memory_3, 'try');
#line 522
$memory_4 = "try";
#line 522
$memory_2 = pretty_printer_priv::print_try_ensure($memory_3, $memory_4);
#line 522
undef($memory_4);
#line 522
undef($memory_3);
#line 522
undef($memory_0);
#line 522
undef($memory_1);
#line 522
return $memory_2;
#line 522
undef($memory_2);
#line 523
goto label_100;
#line 523
label_79:
#line 523
$memory_1 = $memory_0->{'cmd'};
#line 523
$memory_1 = c_rt_lib::ov_is($memory_1, 'ensure');
#line 523
$memory_1 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_1));
#line 523
if (c_rt_lib::check_true($memory_1)) {goto label_95;}
#line 524
$memory_3 = $memory_0->{'cmd'};
#line 524
$memory_3 = c_rt_lib::ov_as($memory_3, 'ensure');
#line 524
$memory_4 = "ensure";
#line 524
$memory_2 = pretty_printer_priv::print_try_ensure($memory_3, $memory_4);
#line 524
undef($memory_4);
#line 524
undef($memory_3);
#line 524
undef($memory_0);
#line 524
undef($memory_1);
#line 524
return $memory_2;
#line 524
undef($memory_2);
#line 525
goto label_100;
#line 525
label_95:
#line 526
$memory_2 = [$memory_0];
#line 526
die(dfile::ssave($memory_2));
#line 526
undef($memory_2);
#line 527
goto label_100;
#line 527
label_100:
#line 527
undef($memory_1);
#line 527
undef($memory_0);
#line 527
return;
}

sub pretty_printer_priv::flush_sim_statement($$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];$memory_2 = $_[2];
#line 531
wprinter::print_t($memory_0, $memory_1, $memory_2);
#line 532
$memory_3 = ";";
#line 532
pretty_printer_priv::state_print($memory_0, $memory_3);
#line 532
undef($memory_3);
#line 532
undef($memory_1);
#line 532
undef($memory_2);
#line 532
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub pretty_printer_priv::print_cmd($$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;my $memory_13;my $memory_14;my $memory_15;my $memory_16;my $memory_17;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];$memory_2 = $_[2];
#line 536
$memory_3 = $memory_1->{'cmd'};
#line 536
$memory_4 = c_rt_lib::ov_is($memory_3, 'if');
#line 536
if (c_rt_lib::check_true($memory_4)) {goto label_44;}
#line 546
$memory_4 = c_rt_lib::ov_is($memory_3, 'while');
#line 546
if (c_rt_lib::check_true($memory_4)) {goto label_101;}
#line 548
$memory_4 = c_rt_lib::ov_is($memory_3, 'for');
#line 548
if (c_rt_lib::check_true($memory_4)) {goto label_116;}
#line 567
$memory_4 = c_rt_lib::ov_is($memory_3, 'block');
#line 567
if (c_rt_lib::check_true($memory_4)) {goto label_182;}
#line 574
$memory_4 = c_rt_lib::ov_is($memory_3, 'nop');
#line 574
if (c_rt_lib::check_true($memory_4)) {goto label_226;}
#line 576
$memory_4 = c_rt_lib::ov_is($memory_3, 'match');
#line 576
if (c_rt_lib::check_true($memory_4)) {goto label_231;}
#line 587
$memory_4 = c_rt_lib::ov_is($memory_3, 'fora');
#line 587
if (c_rt_lib::check_true($memory_4)) {goto label_283;}
#line 589
$memory_4 = c_rt_lib::ov_is($memory_3, 'forh');
#line 589
if (c_rt_lib::check_true($memory_4)) {goto label_300;}
#line 592
$memory_4 = c_rt_lib::ov_is($memory_3, 'rep');
#line 592
if (c_rt_lib::check_true($memory_4)) {goto label_319;}
#line 594
$memory_4 = c_rt_lib::ov_is($memory_3, 'loop');
#line 594
if (c_rt_lib::check_true($memory_4)) {goto label_336;}
#line 597
$memory_4 = c_rt_lib::ov_is($memory_3, 'if_mod');
#line 597
if (c_rt_lib::check_true($memory_4)) {goto label_344;}
#line 599
$memory_4 = c_rt_lib::ov_is($memory_3, 'unless_mod');
#line 599
if (c_rt_lib::check_true($memory_4)) {goto label_357;}
#line 601
$memory_4 = c_rt_lib::ov_is($memory_3, 'value');
#line 601
if (c_rt_lib::check_true($memory_4)) {goto label_370;}
#line 603
$memory_4 = c_rt_lib::ov_is($memory_3, 'try');
#line 603
if (c_rt_lib::check_true($memory_4)) {goto label_377;}
#line 605
$memory_4 = c_rt_lib::ov_is($memory_3, 'ensure');
#line 605
if (c_rt_lib::check_true($memory_4)) {goto label_386;}
#line 607
$memory_4 = c_rt_lib::ov_is($memory_3, 'return');
#line 607
if (c_rt_lib::check_true($memory_4)) {goto label_395;}
#line 609
$memory_4 = c_rt_lib::ov_is($memory_3, 'break');
#line 609
if (c_rt_lib::check_true($memory_4)) {goto label_402;}
#line 611
$memory_4 = c_rt_lib::ov_is($memory_3, 'continue');
#line 611
if (c_rt_lib::check_true($memory_4)) {goto label_407;}
#line 613
$memory_4 = c_rt_lib::ov_is($memory_3, 'die');
#line 613
if (c_rt_lib::check_true($memory_4)) {goto label_412;}
#line 615
$memory_4 = c_rt_lib::ov_is($memory_3, 'var_decl');
#line 615
if (c_rt_lib::check_true($memory_4)) {goto label_419;}
#line 615
$memory_4 = "NOMATCHALERT";
#line 615
$memory_4 = [$memory_4,$memory_3];
#line 615
die(dfile::ssave($memory_4));
#line 536
label_44:
#line 536
$memory_5 = c_rt_lib::ov_as($memory_3, 'if');
#line 537
$memory_6 = "if";
#line 537
$memory_7 = $memory_5->{'if'};
#line 537
$memory_8 = [];
#line 537
$memory_9 = $memory_5->{'cond'};
#line 537
pretty_printer_priv::print_loop($memory_0, $memory_6, $memory_7, $memory_8, $memory_9, $memory_2);
#line 537
undef($memory_9);
#line 537
undef($memory_8);
#line 537
undef($memory_7);
#line 537
undef($memory_6);
#line 538
$memory_6 = $memory_5->{'elsif'};
#line 538
$memory_8 = 0;
#line 538
$memory_9 = 1;
#line 538
$memory_10 = c_rt_lib::array_len($memory_6);
#line 538
label_59:
#line 538
$memory_11 = c_rt_lib::to_nl($memory_8 >= $memory_10);
#line 538
if (c_rt_lib::check_true($memory_11)) {goto label_77;}
#line 538
$memory_7 = $memory_6->[$memory_8];
#line 539
$memory_12 = " ";
#line 539
pretty_printer_priv::state_print($memory_0, $memory_12);
#line 539
undef($memory_12);
#line 540
$memory_12 = "elsif";
#line 540
$memory_13 = $memory_7->{'cmd'};
#line 540
$memory_14 = [];
#line 540
$memory_15 = $memory_7->{'cond'};
#line 540
pretty_printer_priv::print_loop($memory_0, $memory_12, $memory_13, $memory_14, $memory_15, $memory_2);
#line 540
undef($memory_15);
#line 540
undef($memory_14);
#line 540
undef($memory_13);
#line 540
undef($memory_12);
#line 541
$memory_8 = $memory_8 + $memory_9;
#line 541
goto label_59;
#line 541
label_77:
#line 541
undef($memory_6);
#line 541
undef($memory_7);
#line 541
undef($memory_8);
#line 541
undef($memory_9);
#line 541
undef($memory_10);
#line 541
undef($memory_11);
#line 542
$memory_6 = $memory_5->{'else'};
#line 542
$memory_6 = $memory_6->{'cmd'};
#line 542
$memory_6 = c_rt_lib::ov_is($memory_6, 'nop');
#line 542
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 542
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 542
if (c_rt_lib::check_true($memory_6)) {goto label_97;}
#line 543
$memory_7 = " else";
#line 543
pretty_printer_priv::state_print($memory_0, $memory_7);
#line 543
undef($memory_7);
#line 544
$memory_7 = $memory_5->{'else'};
#line 544
pretty_printer_priv::print_st($memory_0, $memory_7, $memory_2);
#line 544
undef($memory_7);
#line 545
goto label_97;
#line 545
label_97:
#line 545
undef($memory_6);
#line 545
undef($memory_5);
#line 546
goto label_426;
#line 546
label_101:
#line 546
$memory_5 = c_rt_lib::ov_as($memory_3, 'while');
#line 547
$memory_6 = $memory_5->{'short'};
#line 547
$memory_7 = "while";
#line 547
$memory_8 = $memory_5->{'cmd'};
#line 547
$memory_9 = [];
#line 547
$memory_10 = $memory_5->{'cond'};
#line 547
pretty_printer_priv::print_loop_or_mod($memory_0, $memory_6, $memory_7, $memory_8, $memory_9, $memory_10, $memory_2);
#line 547
undef($memory_10);
#line 547
undef($memory_9);
#line 547
undef($memory_8);
#line 547
undef($memory_7);
#line 547
undef($memory_6);
#line 547
undef($memory_5);
#line 548
goto label_426;
#line 548
label_116:
#line 548
$memory_5 = c_rt_lib::ov_as($memory_3, 'for');
#line 550
$memory_7 = $memory_5->{'start'};
#line 550
$memory_8 = c_rt_lib::ov_is($memory_7, 'value');
#line 550
if (c_rt_lib::check_true($memory_8)) {goto label_126;}
#line 552
$memory_8 = c_rt_lib::ov_is($memory_7, 'var_decl');
#line 552
if (c_rt_lib::check_true($memory_8)) {goto label_133;}
#line 552
$memory_8 = "NOMATCHALERT";
#line 552
$memory_8 = [$memory_8,$memory_7];
#line 552
die(dfile::ssave($memory_8));
#line 550
label_126:
#line 550
$memory_9 = c_rt_lib::ov_as($memory_7, 'value');
#line 551
$memory_10 = pretty_printer_priv::print_val($memory_9);
#line 551
$memory_6 = $memory_10;
#line 551
undef($memory_10);
#line 551
undef($memory_9);
#line 552
goto label_140;
#line 552
label_133:
#line 552
$memory_9 = c_rt_lib::ov_as($memory_7, 'var_decl');
#line 553
$memory_10 = pretty_printer_priv::print_var_decl($memory_9);
#line 553
$memory_6 = $memory_10;
#line 553
undef($memory_10);
#line 553
undef($memory_9);
#line 554
goto label_140;
#line 554
label_140:
#line 554
undef($memory_7);
#line 554
undef($memory_8);
#line 556
$memory_10 = "for(";
#line 556
$memory_9 = wprinter::build_sim($memory_10);
#line 556
undef($memory_10);
#line 558
$memory_11 = ";";
#line 558
$memory_10 = wprinter::build_sim($memory_11);
#line 558
undef($memory_11);
#line 559
$memory_11 = wprinter::get_sep();
#line 560
$memory_13 = $memory_5->{'cond'};
#line 560
$memory_12 = pretty_printer_priv::print_val($memory_13);
#line 560
undef($memory_13);
#line 561
$memory_14 = ";";
#line 561
$memory_13 = wprinter::build_sim($memory_14);
#line 561
undef($memory_14);
#line 562
$memory_14 = wprinter::get_sep();
#line 563
$memory_16 = $memory_5->{'iter'};
#line 563
$memory_15 = pretty_printer_priv::print_val($memory_16);
#line 563
undef($memory_16);
#line 564
$memory_17 = ") ";
#line 564
$memory_16 = wprinter::build_sim($memory_17);
#line 564
undef($memory_17);
#line 564
$memory_8 = [$memory_9,$memory_6,$memory_10,$memory_11,$memory_12,$memory_13,$memory_14,$memory_15,$memory_16];
#line 564
undef($memory_9);
#line 564
undef($memory_10);
#line 564
undef($memory_11);
#line 564
undef($memory_12);
#line 564
undef($memory_13);
#line 564
undef($memory_14);
#line 564
undef($memory_15);
#line 564
undef($memory_16);
#line 564
$memory_7 = wprinter::build_pretty_a($memory_8);
#line 564
undef($memory_8);
#line 564
wprinter::print_t($memory_0, $memory_7, $memory_2);
#line 564
undef($memory_7);
#line 566
$memory_7 = $memory_5->{'cmd'};
#line 566
pretty_printer_priv::print_cmd($memory_0, $memory_7, $memory_2);
#line 566
undef($memory_7);
#line 566
undef($memory_6);
#line 566
undef($memory_5);
#line 567
goto label_426;
#line 567
label_182:
#line 567
$memory_5 = c_rt_lib::ov_as($memory_3, 'block');
#line 568
$memory_6 = "{";
#line 568
pretty_printer_priv::state_print($memory_0, $memory_6);
#line 568
undef($memory_6);
#line 569
$memory_7 = 0;
#line 569
$memory_8 = 1;
#line 569
$memory_9 = c_rt_lib::array_len($memory_5);
#line 569
label_190:
#line 569
$memory_10 = c_rt_lib::to_nl($memory_7 >= $memory_9);
#line 569
if (c_rt_lib::check_true($memory_10)) {goto label_209;}
#line 569
$memory_6 = $memory_5->[$memory_7];
#line 570
$memory_11 = string::lf();
#line 570
$memory_13 = 1;
#line 570
$memory_13 = $memory_2 + $memory_13;
#line 570
$memory_12 = pretty_printer_priv::pind($memory_13);
#line 570
undef($memory_13);
#line 570
$memory_11 = $memory_11 . $memory_12;
#line 570
undef($memory_12);
#line 570
pretty_printer_priv::state_print($memory_0, $memory_11);
#line 570
undef($memory_11);
#line 571
$memory_11 = 1;
#line 571
$memory_11 = $memory_2 + $memory_11;
#line 571
pretty_printer_priv::print_cmd($memory_0, $memory_6, $memory_11);
#line 571
undef($memory_11);
#line 572
$memory_7 = $memory_7 + $memory_8;
#line 572
goto label_190;
#line 572
label_209:
#line 572
undef($memory_6);
#line 572
undef($memory_7);
#line 572
undef($memory_8);
#line 572
undef($memory_9);
#line 572
undef($memory_10);
#line 573
$memory_6 = string::lf();
#line 573
$memory_7 = pretty_printer_priv::pind($memory_2);
#line 573
$memory_6 = $memory_6 . $memory_7;
#line 573
undef($memory_7);
#line 573
$memory_7 = "}";
#line 573
$memory_6 = $memory_6 . $memory_7;
#line 573
undef($memory_7);
#line 573
pretty_printer_priv::state_print($memory_0, $memory_6);
#line 573
undef($memory_6);
#line 573
undef($memory_5);
#line 574
goto label_426;
#line 574
label_226:
#line 575
$memory_5 = ";";
#line 575
pretty_printer_priv::state_print($memory_0, $memory_5);
#line 575
undef($memory_5);
#line 576
goto label_426;
#line 576
label_231:
#line 576
$memory_5 = c_rt_lib::ov_as($memory_3, 'match');
#line 578
$memory_9 = "match (";
#line 578
$memory_8 = wprinter::build_sim($memory_9);
#line 578
undef($memory_9);
#line 579
$memory_10 = $memory_5->{'val'};
#line 579
$memory_9 = pretty_printer_priv::print_val($memory_10);
#line 579
undef($memory_10);
#line 580
$memory_11 = ")";
#line 580
$memory_10 = wprinter::build_sim($memory_11);
#line 580
undef($memory_11);
#line 580
$memory_7 = [$memory_8,$memory_9,$memory_10];
#line 580
undef($memory_8);
#line 580
undef($memory_9);
#line 580
undef($memory_10);
#line 580
$memory_6 = wprinter::build_pretty_a($memory_7);
#line 580
undef($memory_7);
#line 580
wprinter::print_t($memory_0, $memory_6, $memory_2);
#line 580
undef($memory_6);
#line 582
$memory_6 = $memory_5->{'branch_list'};
#line 582
$memory_8 = 0;
#line 582
$memory_9 = 1;
#line 582
$memory_10 = c_rt_lib::array_len($memory_6);
#line 582
label_254:
#line 582
$memory_11 = c_rt_lib::to_nl($memory_8 >= $memory_10);
#line 582
if (c_rt_lib::check_true($memory_11)) {goto label_274;}
#line 582
$memory_7 = $memory_6->[$memory_8];
#line 583
$memory_12 = " case ";
#line 583
pretty_printer_priv::state_print($memory_0, $memory_12);
#line 583
undef($memory_12);
#line 584
$memory_13 = $memory_7->{'variant'};
#line 584
$memory_12 = pretty_printer_priv::print_variant_case_decl($memory_13);
#line 584
undef($memory_13);
#line 584
$memory_13 = 1;
#line 584
$memory_13 = $memory_2 + $memory_13;
#line 584
wprinter::print_t($memory_0, $memory_12, $memory_13);
#line 584
undef($memory_13);
#line 584
undef($memory_12);
#line 585
$memory_12 = $memory_7->{'cmd'};
#line 585
pretty_printer_priv::print_st($memory_0, $memory_12, $memory_2);
#line 585
undef($memory_12);
#line 586
$memory_8 = $memory_8 + $memory_9;
#line 586
goto label_254;
#line 586
label_274:
#line 586
undef($memory_6);
#line 586
undef($memory_7);
#line 586
undef($memory_8);
#line 586
undef($memory_9);
#line 586
undef($memory_10);
#line 586
undef($memory_11);
#line 586
undef($memory_5);
#line 587
goto label_426;
#line 587
label_283:
#line 587
$memory_5 = c_rt_lib::ov_as($memory_3, 'fora');
#line 588
$memory_6 = $memory_5->{'short'};
#line 588
$memory_7 = "fora";
#line 588
$memory_8 = $memory_5->{'cmd'};
#line 588
$memory_10 = $memory_5->{'iter'};
#line 588
$memory_9 = [$memory_10];
#line 588
undef($memory_10);
#line 588
$memory_10 = $memory_5->{'array'};
#line 588
pretty_printer_priv::print_loop_or_mod($memory_0, $memory_6, $memory_7, $memory_8, $memory_9, $memory_10, $memory_2);
#line 588
undef($memory_10);
#line 588
undef($memory_9);
#line 588
undef($memory_8);
#line 588
undef($memory_7);
#line 588
undef($memory_6);
#line 588
undef($memory_5);
#line 589
goto label_426;
#line 589
label_300:
#line 589
$memory_5 = c_rt_lib::ov_as($memory_3, 'forh');
#line 590
$memory_6 = $memory_5->{'short'};
#line 590
$memory_7 = "forh";
#line 590
$memory_8 = $memory_5->{'cmd'};
#line 590
$memory_10 = $memory_5->{'key'};
#line 590
$memory_11 = $memory_5->{'val'};
#line 590
$memory_9 = [$memory_10,$memory_11];
#line 590
undef($memory_10);
#line 590
undef($memory_11);
#line 590
$memory_10 = $memory_5->{'hash'};
#line 590
pretty_printer_priv::print_loop_or_mod($memory_0, $memory_6, $memory_7, $memory_8, $memory_9, $memory_10, $memory_2);
#line 590
undef($memory_10);
#line 590
undef($memory_9);
#line 590
undef($memory_8);
#line 590
undef($memory_7);
#line 590
undef($memory_6);
#line 590
undef($memory_5);
#line 592
goto label_426;
#line 592
label_319:
#line 592
$memory_5 = c_rt_lib::ov_as($memory_3, 'rep');
#line 593
$memory_6 = $memory_5->{'short'};
#line 593
$memory_7 = "rep";
#line 593
$memory_8 = $memory_5->{'cmd'};
#line 593
$memory_10 = $memory_5->{'iter'};
#line 593
$memory_9 = [$memory_10];
#line 593
undef($memory_10);
#line 593
$memory_10 = $memory_5->{'count'};
#line 593
pretty_printer_priv::print_loop_or_mod($memory_0, $memory_6, $memory_7, $memory_8, $memory_9, $memory_10, $memory_2);
#line 593
undef($memory_10);
#line 593
undef($memory_9);
#line 593
undef($memory_8);
#line 593
undef($memory_7);
#line 593
undef($memory_6);
#line 593
undef($memory_5);
#line 594
goto label_426;
#line 594
label_336:
#line 594
$memory_5 = c_rt_lib::ov_as($memory_3, 'loop');
#line 595
$memory_6 = "loop";
#line 595
pretty_printer_priv::state_print($memory_0, $memory_6);
#line 595
undef($memory_6);
#line 596
pretty_printer_priv::print_st($memory_0, $memory_5, $memory_2);
#line 596
undef($memory_5);
#line 597
goto label_426;
#line 597
label_344:
#line 597
$memory_5 = c_rt_lib::ov_as($memory_3, 'if_mod');
#line 598
$memory_6 = "if";
#line 598
$memory_7 = $memory_5->{'cmd'};
#line 598
$memory_8 = [];
#line 598
$memory_9 = $memory_5->{'cond'};
#line 598
pretty_printer_priv::print_cond_mod($memory_0, $memory_6, $memory_7, $memory_8, $memory_9, $memory_2);
#line 598
undef($memory_9);
#line 598
undef($memory_8);
#line 598
undef($memory_7);
#line 598
undef($memory_6);
#line 598
undef($memory_5);
#line 599
goto label_426;
#line 599
label_357:
#line 599
$memory_5 = c_rt_lib::ov_as($memory_3, 'unless_mod');
#line 600
$memory_6 = "unless";
#line 600
$memory_7 = $memory_5->{'cmd'};
#line 600
$memory_8 = [];
#line 600
$memory_9 = $memory_5->{'cond'};
#line 600
pretty_printer_priv::print_cond_mod($memory_0, $memory_6, $memory_7, $memory_8, $memory_9, $memory_2);
#line 600
undef($memory_9);
#line 600
undef($memory_8);
#line 600
undef($memory_7);
#line 600
undef($memory_6);
#line 600
undef($memory_5);
#line 601
goto label_426;
#line 601
label_370:
#line 601
$memory_5 = c_rt_lib::ov_as($memory_3, 'value');
#line 602
$memory_6 = pretty_printer_priv::print_sim_value($memory_5);
#line 602
pretty_printer_priv::flush_sim_statement($memory_0, $memory_6, $memory_2);
#line 602
undef($memory_6);
#line 602
undef($memory_5);
#line 603
goto label_426;
#line 603
label_377:
#line 603
$memory_5 = c_rt_lib::ov_as($memory_3, 'try');
#line 604
$memory_7 = "try";
#line 604
$memory_6 = pretty_printer_priv::print_try_ensure($memory_5, $memory_7);
#line 604
undef($memory_7);
#line 604
pretty_printer_priv::flush_sim_statement($memory_0, $memory_6, $memory_2);
#line 604
undef($memory_6);
#line 604
undef($memory_5);
#line 605
goto label_426;
#line 605
label_386:
#line 605
$memory_5 = c_rt_lib::ov_as($memory_3, 'ensure');
#line 606
$memory_7 = "ensure";
#line 606
$memory_6 = pretty_printer_priv::print_try_ensure($memory_5, $memory_7);
#line 606
undef($memory_7);
#line 606
pretty_printer_priv::flush_sim_statement($memory_0, $memory_6, $memory_2);
#line 606
undef($memory_6);
#line 606
undef($memory_5);
#line 607
goto label_426;
#line 607
label_395:
#line 607
$memory_5 = c_rt_lib::ov_as($memory_3, 'return');
#line 608
$memory_6 = pretty_printer_priv::print_return($memory_5);
#line 608
pretty_printer_priv::flush_sim_statement($memory_0, $memory_6, $memory_2);
#line 608
undef($memory_6);
#line 608
undef($memory_5);
#line 609
goto label_426;
#line 609
label_402:
#line 610
$memory_5 = pretty_printer_priv::print_break();
#line 610
pretty_printer_priv::flush_sim_statement($memory_0, $memory_5, $memory_2);
#line 610
undef($memory_5);
#line 611
goto label_426;
#line 611
label_407:
#line 612
$memory_5 = pretty_printer_priv::print_continue();
#line 612
pretty_printer_priv::flush_sim_statement($memory_0, $memory_5, $memory_2);
#line 612
undef($memory_5);
#line 613
goto label_426;
#line 613
label_412:
#line 613
$memory_5 = c_rt_lib::ov_as($memory_3, 'die');
#line 614
$memory_6 = pretty_printer_priv::print_die($memory_5);
#line 614
pretty_printer_priv::flush_sim_statement($memory_0, $memory_6, $memory_2);
#line 614
undef($memory_6);
#line 614
undef($memory_5);
#line 615
goto label_426;
#line 615
label_419:
#line 615
$memory_5 = c_rt_lib::ov_as($memory_3, 'var_decl');
#line 616
$memory_6 = pretty_printer_priv::print_var_decl($memory_5);
#line 616
pretty_printer_priv::flush_sim_statement($memory_0, $memory_6, $memory_2);
#line 616
undef($memory_6);
#line 616
undef($memory_5);
#line 617
goto label_426;
#line 617
label_426:
#line 617
undef($memory_3);
#line 617
undef($memory_4);
#line 617
undef($memory_1);
#line 617
undef($memory_2);
#line 617
$_[0] = $memory_0;return;
$_[0] = $memory_0;}
