use c_rt_lib;
use ov;
use string;
use array;
use ptd;
use nast;
use wprinter;
use boolean_t;
sub pretty_printer_priv::state_print;
sub pretty_printer::print_module_to_str;
sub pretty_printer_priv::print_fun_def;
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
#line 16
$memory_2 = "out";
#line 16
$memory_2 = c_rt_lib::get_ref_hash($memory_0, $memory_2);
#line 16
$memory_2 = $memory_2 . $memory_1;
#line 16
$memory_3 = "out";
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

sub pretty_printer::print_module_to_str($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;$memory_0 = $_[0];
#line 20
$memory_2 = "";
#line 20
$memory_1 = {out => $memory_2,};
#line 20
undef($memory_2);
#line 21
$memory_2 = "###";
#line 21
$memory_3 = string::lf();
#line 21
$memory_2 = $memory_2 . $memory_3;
#line 21
undef($memory_3);
#line 21
$memory_3 = "# (c) Atinea Sp. z o.o.";
#line 21
$memory_2 = $memory_2 . $memory_3;
#line 21
undef($memory_3);
#line 21
$memory_3 = string::lf();
#line 21
$memory_2 = $memory_2 . $memory_3;
#line 21
undef($memory_3);
#line 21
$memory_3 = "###";
#line 21
$memory_2 = $memory_2 . $memory_3;
#line 21
undef($memory_3);
#line 21
$memory_3 = string::lf();
#line 21
$memory_2 = $memory_2 . $memory_3;
#line 21
undef($memory_3);
#line 21
$memory_3 = string::lf();
#line 21
$memory_2 = $memory_2 . $memory_3;
#line 21
undef($memory_3);
#line 21
$memory_3 = string::lf();
#line 21
$memory_2 = $memory_2 . $memory_3;
#line 21
undef($memory_3);
#line 21
pretty_printer_priv::state_print($memory_1, $memory_2);
#line 21
undef($memory_2);
#line 23
$memory_2 = [];
#line 24
$memory_3 = $memory_0->{'import'};
#line 24
$memory_5 = 0;
#line 24
$memory_6 = 1;
#line 24
$memory_7 = c_rt_lib::array_len($memory_3);
#line 24
label_3:
#line 24
$memory_8 = c_rt_lib::to_nl($memory_5 >= $memory_7);
#line 24
if (c_rt_lib::check_true($memory_8)) {goto label_1;}
#line 24
$memory_4 = $memory_3->[$memory_5];
#line 25
$memory_9 = "use ";
#line 25
$memory_10 = $memory_4->{'name'};
#line 25
$memory_9 = $memory_9 . $memory_10;
#line 25
undef($memory_10);
#line 25
$memory_10 = ";";
#line 25
$memory_9 = $memory_9 . $memory_10;
#line 25
undef($memory_10);
#line 25
array::push($memory_2, $memory_9);
#line 25
undef($memory_9);
#line 26
$memory_5 = $memory_5 + $memory_6;
#line 26
goto label_3;
#line 26
label_1:
#line 26
undef($memory_3);
#line 26
undef($memory_4);
#line 26
undef($memory_5);
#line 26
undef($memory_6);
#line 26
undef($memory_7);
#line 26
undef($memory_8);
#line 27
$memory_4 = string::lf();
#line 27
$memory_3 = array::join($memory_4, $memory_2);
#line 27
undef($memory_4);
#line 27
pretty_printer_priv::state_print($memory_1, $memory_3);
#line 27
undef($memory_3);
#line 28
$memory_3 = string::lf();
#line 28
$memory_4 = string::lf();
#line 28
$memory_3 = $memory_3 . $memory_4;
#line 28
undef($memory_4);
#line 28
pretty_printer_priv::state_print($memory_1, $memory_3);
#line 28
undef($memory_3);
#line 29
$memory_3 = $memory_0->{'fun_def'};
#line 29
$memory_5 = 0;
#line 29
$memory_6 = 1;
#line 29
$memory_7 = c_rt_lib::array_len($memory_3);
#line 29
label_6:
#line 29
$memory_8 = c_rt_lib::to_nl($memory_5 >= $memory_7);
#line 29
if (c_rt_lib::check_true($memory_8)) {goto label_4;}
#line 29
$memory_4 = $memory_3->[$memory_5];
#line 30
$memory_9 = $memory_0->{'name'};
#line 30
pretty_printer_priv::print_fun_def($memory_1, $memory_4, $memory_9);
#line 30
undef($memory_9);
#line 31
$memory_9 = string::lf();
#line 31
$memory_10 = string::lf();
#line 31
$memory_9 = $memory_9 . $memory_10;
#line 31
undef($memory_10);
#line 31
pretty_printer_priv::state_print($memory_1, $memory_9);
#line 31
undef($memory_9);
#line 32
$memory_5 = $memory_5 + $memory_6;
#line 32
goto label_6;
#line 32
label_4:
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
undef($memory_8);
#line 33
$memory_3 = $memory_1->{'out'};
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
undef($memory_1);
#line 33
undef($memory_2);
#line 33
undef($memory_0);
#line 33
return;
}

sub pretty_printer_priv::print_fun_def($$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;my $memory_13;my $memory_14;my $memory_15;my $memory_16;my $memory_17;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];$memory_2 = $_[2];
#line 37
$memory_3 = "";
#line 38
$memory_4 = $memory_1->{'access'};
#line 38
$memory_5 = c_rt_lib::ov_is($memory_4, 'pub');
#line 38
if (c_rt_lib::check_true($memory_5)) {goto label_2;}
#line 40
$memory_5 = c_rt_lib::ov_is($memory_4, 'priv');
#line 40
if (c_rt_lib::check_true($memory_5)) {goto label_3;}
#line 40
$memory_5 = "NOMATCHALERT";
#line 40
$memory_5 = [$memory_5,$memory_4];
#line 40
die(dfile::ssave($memory_5));
#line 38
label_2:
#line 39
$memory_6 = "::";
#line 39
$memory_6 = $memory_2 . $memory_6;
#line 39
$memory_3 = $memory_3 . $memory_6;
#line 39
undef($memory_6);
#line 40
goto label_1;
#line 40
label_3:
#line 41
goto label_1;
#line 41
label_1:
#line 41
undef($memory_4);
#line 41
undef($memory_5);
#line 42
$memory_4 = $memory_1->{'name'};
#line 42
$memory_3 = $memory_3 . $memory_4;
#line 42
undef($memory_4);
#line 43
$memory_6 = "def";
#line 43
$memory_5 = wprinter::build_sim($memory_6);
#line 43
undef($memory_6);
#line 43
$memory_6 = wprinter::get_sep();
#line 43
$memory_7 = wprinter::build_sim($memory_3);
#line 43
$memory_9 = "(";
#line 43
$memory_8 = wprinter::build_sim($memory_9);
#line 43
undef($memory_9);
#line 43
$memory_4 = [$memory_5,$memory_6,$memory_7,$memory_8];
#line 43
undef($memory_5);
#line 43
undef($memory_6);
#line 43
undef($memory_7);
#line 43
undef($memory_8);
#line 49
$memory_6 = $memory_1->{'args'};
#line 49
$memory_5 = array::len($memory_6);
#line 49
undef($memory_6);
#line 49
$memory_6 = 0;
#line 49
$memory_7 = 1;
#line 49
label_6:
#line 49
$memory_8 = c_rt_lib::to_nl($memory_6 >= $memory_5);
#line 49
if (c_rt_lib::check_true($memory_8)) {goto label_4;}
#line 50
$memory_9 = $memory_1->{'args'};
#line 50
$memory_9 = $memory_9->[$memory_6];
#line 51
$memory_10 = $memory_9->{'mod'};
#line 51
$memory_11 = c_rt_lib::ov_is($memory_10, 'ref');
#line 51
if (c_rt_lib::check_true($memory_11)) {goto label_8;}
#line 53
$memory_11 = c_rt_lib::ov_is($memory_10, 'none');
#line 53
if (c_rt_lib::check_true($memory_11)) {goto label_9;}
#line 53
$memory_11 = "NOMATCHALERT";
#line 53
$memory_11 = [$memory_11,$memory_10];
#line 53
die(dfile::ssave($memory_11));
#line 51
label_8:
#line 52
$memory_14 = "ref";
#line 52
$memory_13 = wprinter::build_sim($memory_14);
#line 52
undef($memory_14);
#line 52
$memory_14 = wprinter::get_sep();
#line 52
$memory_12 = [$memory_13,$memory_14];
#line 52
undef($memory_13);
#line 52
undef($memory_14);
#line 52
array::append($memory_4, $memory_12);
#line 52
undef($memory_12);
#line 53
goto label_7;
#line 53
label_9:
#line 54
goto label_7;
#line 54
label_7:
#line 54
undef($memory_10);
#line 54
undef($memory_11);
#line 55
$memory_11 = $memory_9->{'name'};
#line 55
$memory_10 = wprinter::build_sim($memory_11);
#line 55
undef($memory_11);
#line 55
array::push($memory_4, $memory_10);
#line 55
undef($memory_10);
#line 56
$memory_10 = $memory_9->{'type'};
#line 56
$memory_11 = c_rt_lib::ov_is($memory_10, 'type');
#line 56
if (c_rt_lib::check_true($memory_11)) {goto label_11;}
#line 63
$memory_11 = c_rt_lib::ov_is($memory_10, 'none');
#line 63
if (c_rt_lib::check_true($memory_11)) {goto label_12;}
#line 63
$memory_11 = "NOMATCHALERT";
#line 63
$memory_11 = [$memory_11,$memory_10];
#line 63
die(dfile::ssave($memory_11));
#line 56
label_11:
#line 56
$memory_12 = c_rt_lib::ov_as($memory_10, 'type');
#line 57
$memory_14 = wprinter::get_sep();
#line 57
$memory_16 = ":";
#line 57
$memory_15 = wprinter::build_sim($memory_16);
#line 57
undef($memory_16);
#line 57
$memory_16 = wprinter::get_sep();
#line 57
$memory_17 = pretty_printer_priv::print_val($memory_12);
#line 57
$memory_13 = [$memory_14,$memory_15,$memory_16,$memory_17];
#line 57
undef($memory_14);
#line 57
undef($memory_15);
#line 57
undef($memory_16);
#line 57
undef($memory_17);
#line 57
array::append($memory_4, $memory_13);
#line 57
undef($memory_13);
#line 57
undef($memory_12);
#line 63
goto label_10;
#line 63
label_12:
#line 64
goto label_10;
#line 64
label_10:
#line 64
undef($memory_10);
#line 64
undef($memory_11);
#line 65
$memory_11 = $memory_1->{'args'};
#line 65
$memory_10 = array::len($memory_11);
#line 65
undef($memory_11);
#line 65
$memory_11 = 1;
#line 65
$memory_10 = $memory_10 - $memory_11;
#line 65
undef($memory_11);
#line 65
$memory_10 = c_rt_lib::to_nl($memory_6 != $memory_10);
#line 65
$memory_10 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_10));
#line 65
if (c_rt_lib::check_true($memory_10)) {goto label_14;}
#line 65
$memory_13 = ",";
#line 65
$memory_12 = wprinter::build_sim($memory_13);
#line 65
undef($memory_13);
#line 65
$memory_13 = wprinter::get_sep();
#line 65
$memory_11 = [$memory_12,$memory_13];
#line 65
undef($memory_12);
#line 65
undef($memory_13);
#line 65
array::append($memory_4, $memory_11);
#line 65
undef($memory_11);
#line 65
goto label_14;
#line 65
label_14:
#line 65
undef($memory_10);
#line 65
undef($memory_9);
#line 68
$memory_6 = $memory_6 + $memory_7;
#line 68
goto label_6;
#line 68
label_4:
#line 68
undef($memory_5);
#line 68
undef($memory_6);
#line 68
undef($memory_7);
#line 68
undef($memory_8);
#line 69
$memory_6 = ")";
#line 69
$memory_5 = wprinter::build_sim($memory_6);
#line 69
undef($memory_6);
#line 69
array::push($memory_4, $memory_5);
#line 69
undef($memory_5);
#line 70
$memory_5 = $memory_1->{'ret_type'};
#line 70
$memory_6 = c_rt_lib::ov_is($memory_5, 'type');
#line 70
if (c_rt_lib::check_true($memory_6)) {goto label_16;}
#line 77
$memory_6 = c_rt_lib::ov_is($memory_5, 'none');
#line 77
if (c_rt_lib::check_true($memory_6)) {goto label_17;}
#line 77
$memory_6 = "NOMATCHALERT";
#line 77
$memory_6 = [$memory_6,$memory_5];
#line 77
die(dfile::ssave($memory_6));
#line 70
label_16:
#line 70
$memory_7 = c_rt_lib::ov_as($memory_5, 'type');
#line 71
$memory_9 = wprinter::get_sep();
#line 71
$memory_11 = ":";
#line 71
$memory_10 = wprinter::build_sim($memory_11);
#line 71
undef($memory_11);
#line 71
$memory_11 = wprinter::get_sep();
#line 71
$memory_12 = pretty_printer_priv::print_sim_value($memory_7);
#line 71
$memory_8 = [$memory_9,$memory_10,$memory_11,$memory_12];
#line 71
undef($memory_9);
#line 71
undef($memory_10);
#line 71
undef($memory_11);
#line 71
undef($memory_12);
#line 71
array::append($memory_4, $memory_8);
#line 71
undef($memory_8);
#line 71
undef($memory_7);
#line 77
goto label_15;
#line 77
label_17:
#line 78
goto label_15;
#line 78
label_15:
#line 78
undef($memory_5);
#line 78
undef($memory_6);
#line 79
$memory_5 = wprinter::build_pretty_l($memory_4);
#line 79
$memory_6 = 0;
#line 79
wprinter::print_t($memory_0, $memory_5, $memory_6);
#line 79
undef($memory_6);
#line 79
undef($memory_5);
#line 80
$memory_5 = $memory_1->{'cmd'};
#line 80
$memory_6 = 0;
#line 80
pretty_printer_priv::print_st($memory_0, $memory_5, $memory_6);
#line 80
undef($memory_6);
#line 80
undef($memory_5);
#line 80
undef($memory_3);
#line 80
undef($memory_4);
#line 80
undef($memory_1);
#line 80
undef($memory_2);
#line 80
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub pretty_printer_priv::join_print_var_decl($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;$memory_0 = $_[0];
#line 83
$memory_1 = [];
#line 84
$memory_2 = array::len($memory_0);
#line 84
$memory_3 = 0;
#line 84
$memory_4 = 1;
#line 84
label_3:
#line 84
$memory_5 = c_rt_lib::to_nl($memory_3 >= $memory_2);
#line 84
if (c_rt_lib::check_true($memory_5)) {goto label_1;}
#line 85
$memory_7 = $memory_0->[$memory_3];
#line 85
$memory_6 = pretty_printer_priv::print_var_decl($memory_7);
#line 85
undef($memory_7);
#line 85
array::push($memory_1, $memory_6);
#line 85
undef($memory_6);
#line 86
$memory_6 = array::len($memory_0);
#line 86
$memory_7 = 1;
#line 86
$memory_6 = $memory_6 - $memory_7;
#line 86
undef($memory_7);
#line 86
$memory_6 = c_rt_lib::to_nl($memory_3 != $memory_6);
#line 86
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 86
if (c_rt_lib::check_true($memory_6)) {goto label_5;}
#line 86
$memory_9 = ",";
#line 86
$memory_8 = wprinter::build_sim($memory_9);
#line 86
undef($memory_9);
#line 86
$memory_9 = wprinter::get_sep();
#line 86
$memory_7 = [$memory_8,$memory_9];
#line 86
undef($memory_8);
#line 86
undef($memory_9);
#line 86
array::append($memory_1, $memory_7);
#line 86
undef($memory_7);
#line 86
goto label_5;
#line 86
label_5:
#line 86
undef($memory_6);
#line 87
$memory_3 = $memory_3 + $memory_4;
#line 87
goto label_3;
#line 87
label_1:
#line 87
undef($memory_2);
#line 87
undef($memory_3);
#line 87
undef($memory_4);
#line 87
undef($memory_5);
#line 88
undef($memory_0);
#line 88
return $memory_1;
#line 88
undef($memory_1);
#line 88
undef($memory_0);
#line 88
return;
}

sub pretty_printer_priv::print_var_decl($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;$memory_0 = $_[0];
#line 92
$memory_3 = "var";
#line 92
$memory_2 = wprinter::build_sim($memory_3);
#line 92
undef($memory_3);
#line 92
$memory_3 = wprinter::get_sep();
#line 92
$memory_1 = [$memory_2,$memory_3];
#line 92
undef($memory_2);
#line 92
undef($memory_3);
#line 93
$memory_2 = $memory_0->{'type'};
#line 93
$memory_3 = c_rt_lib::ov_is($memory_2, 'type');
#line 93
if (c_rt_lib::check_true($memory_3)) {goto label_2;}
#line 101
$memory_3 = c_rt_lib::ov_is($memory_2, 'none');
#line 101
if (c_rt_lib::check_true($memory_3)) {goto label_3;}
#line 101
$memory_3 = "NOMATCHALERT";
#line 101
$memory_3 = [$memory_3,$memory_2];
#line 101
die(dfile::ssave($memory_3));
#line 93
label_2:
#line 93
$memory_4 = c_rt_lib::ov_as($memory_2, 'type');
#line 94
$memory_7 = $memory_0->{'name'};
#line 94
$memory_6 = wprinter::build_sim($memory_7);
#line 94
undef($memory_7);
#line 94
$memory_7 = wprinter::get_sep();
#line 94
$memory_9 = ":";
#line 94
$memory_8 = wprinter::build_sim($memory_9);
#line 94
undef($memory_9);
#line 94
$memory_9 = wprinter::get_sep();
#line 94
$memory_10 = pretty_printer_priv::print_val($memory_4);
#line 94
$memory_5 = [$memory_6,$memory_7,$memory_8,$memory_9,$memory_10];
#line 94
undef($memory_6);
#line 94
undef($memory_7);
#line 94
undef($memory_8);
#line 94
undef($memory_9);
#line 94
undef($memory_10);
#line 94
array::append($memory_1, $memory_5);
#line 94
undef($memory_5);
#line 94
undef($memory_4);
#line 101
goto label_1;
#line 101
label_3:
#line 102
$memory_5 = $memory_0->{'name'};
#line 102
$memory_4 = wprinter::build_sim($memory_5);
#line 102
undef($memory_5);
#line 102
array::push($memory_1, $memory_4);
#line 102
undef($memory_4);
#line 103
goto label_1;
#line 103
label_1:
#line 103
undef($memory_2);
#line 103
undef($memory_3);
#line 104
$memory_2 = $memory_0->{'value'};
#line 104
$memory_3 = c_rt_lib::ov_is($memory_2, 'value');
#line 104
if (c_rt_lib::check_true($memory_3)) {goto label_5;}
#line 111
$memory_3 = c_rt_lib::ov_is($memory_2, 'none');
#line 111
if (c_rt_lib::check_true($memory_3)) {goto label_6;}
#line 111
$memory_3 = "NOMATCHALERT";
#line 111
$memory_3 = [$memory_3,$memory_2];
#line 111
die(dfile::ssave($memory_3));
#line 104
label_5:
#line 104
$memory_4 = c_rt_lib::ov_as($memory_2, 'value');
#line 105
$memory_6 = wprinter::get_sep();
#line 105
$memory_8 = "=";
#line 105
$memory_7 = wprinter::build_sim($memory_8);
#line 105
undef($memory_8);
#line 105
$memory_8 = wprinter::get_sep();
#line 105
$memory_9 = pretty_printer_priv::print_val($memory_4);
#line 105
$memory_5 = [$memory_6,$memory_7,$memory_8,$memory_9];
#line 105
undef($memory_6);
#line 105
undef($memory_7);
#line 105
undef($memory_8);
#line 105
undef($memory_9);
#line 105
array::append($memory_1, $memory_5);
#line 105
undef($memory_5);
#line 105
undef($memory_4);
#line 111
goto label_4;
#line 111
label_6:
#line 112
goto label_4;
#line 112
label_4:
#line 112
undef($memory_2);
#line 112
undef($memory_3);
#line 113
$memory_2 = wprinter::build_pretty_l($memory_1);
#line 113
undef($memory_0);
#line 113
undef($memory_1);
#line 113
return $memory_2;
#line 113
undef($memory_2);
#line 113
undef($memory_1);
#line 113
undef($memory_0);
#line 113
return;
}

sub pretty_printer_priv::pind($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;$memory_0 = $_[0];
#line 117
$memory_1 = "";
#line 118
$memory_2 = 0;
#line 118
$memory_3 = 1;
#line 118
label_3:
#line 118
$memory_4 = c_rt_lib::to_nl($memory_2 >= $memory_0);
#line 118
if (c_rt_lib::check_true($memory_4)) {goto label_1;}
#line 118
$memory_6 = 9;
#line 118
$memory_5 = string::chr($memory_6);
#line 118
undef($memory_6);
#line 118
$memory_1 = $memory_1 . $memory_5;
#line 118
undef($memory_5);
#line 118
$memory_2 = $memory_2 + $memory_3;
#line 118
goto label_3;
#line 118
label_1:
#line 118
undef($memory_2);
#line 118
undef($memory_3);
#line 118
undef($memory_4);
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

sub pretty_printer_priv::join_print_hash_elem($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;$memory_0 = $_[0];
#line 122
$memory_1 = [];
#line 123
$memory_2 = array::len($memory_0);
#line 123
$memory_3 = 0;
#line 123
$memory_4 = 1;
#line 123
label_3:
#line 123
$memory_5 = c_rt_lib::to_nl($memory_3 >= $memory_2);
#line 123
if (c_rt_lib::check_true($memory_5)) {goto label_1;}
#line 124
$memory_7 = $memory_0->[$memory_3];
#line 124
$memory_6 = pretty_printer_priv::print_hash_elem($memory_7);
#line 124
undef($memory_7);
#line 124
array::push($memory_1, $memory_6);
#line 124
undef($memory_6);
#line 125
$memory_6 = array::len($memory_0);
#line 125
$memory_7 = 1;
#line 125
$memory_6 = $memory_6 - $memory_7;
#line 125
undef($memory_7);
#line 125
$memory_6 = c_rt_lib::to_nl($memory_3 != $memory_6);
#line 125
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 125
if (c_rt_lib::check_true($memory_6)) {goto label_5;}
#line 125
$memory_9 = ",";
#line 125
$memory_8 = wprinter::build_sim($memory_9);
#line 125
undef($memory_9);
#line 125
$memory_9 = wprinter::get_sep();
#line 125
$memory_7 = [$memory_8,$memory_9];
#line 125
undef($memory_8);
#line 125
undef($memory_9);
#line 125
array::append($memory_1, $memory_7);
#line 125
undef($memory_7);
#line 125
goto label_5;
#line 125
label_5:
#line 125
undef($memory_6);
#line 126
$memory_3 = $memory_3 + $memory_4;
#line 126
goto label_3;
#line 126
label_1:
#line 126
undef($memory_2);
#line 126
undef($memory_3);
#line 126
undef($memory_4);
#line 126
undef($memory_5);
#line 127
undef($memory_0);
#line 127
return $memory_1;
#line 127
undef($memory_1);
#line 127
undef($memory_0);
#line 127
return;
}

sub pretty_printer_priv::print_hash_elem($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;$memory_0 = $_[0];
#line 131
$memory_2 = $memory_0->{'val'};
#line 131
$memory_3 = "hash_decl";
#line 131
$memory_1 = ov::is($memory_2, $memory_3);
#line 131
undef($memory_3);
#line 131
undef($memory_2);
#line 131
if (c_rt_lib::check_true($memory_1)) {goto label_3;}
#line 131
$memory_2 = $memory_0->{'val'};
#line 131
$memory_3 = "arr_decl";
#line 131
$memory_1 = ov::is($memory_2, $memory_3);
#line 131
undef($memory_3);
#line 131
undef($memory_2);
#line 131
label_3:
#line 131
$memory_1 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_1));
#line 131
if (c_rt_lib::check_true($memory_1)) {goto label_2;}
#line 132
$memory_2 = $memory_0->{'key'};
#line 132
$memory_2 = c_rt_lib::ov_as($memory_2, 'hash_key');
#line 133
$memory_4 = $memory_0->{'val'};
#line 133
$memory_5 = " => ";
#line 133
$memory_5 = $memory_2 . $memory_5;
#line 133
$memory_6 = "";
#line 133
$memory_3 = pretty_printer_priv::get_compressed_fun_val($memory_4, $memory_5, $memory_6);
#line 133
undef($memory_6);
#line 133
undef($memory_5);
#line 133
undef($memory_4);
#line 133
undef($memory_0);
#line 133
undef($memory_1);
#line 133
undef($memory_2);
#line 133
return $memory_3;
#line 133
undef($memory_3);
#line 133
undef($memory_2);
#line 134
goto label_2;
#line 134
label_2:
#line 134
undef($memory_1);
#line 136
$memory_4 = $memory_0->{'key'};
#line 136
$memory_3 = pretty_printer_priv::print_val($memory_4);
#line 136
undef($memory_4);
#line 136
$memory_4 = wprinter::get_sep();
#line 136
$memory_6 = "=>";
#line 136
$memory_5 = wprinter::build_sim($memory_6);
#line 136
undef($memory_6);
#line 136
$memory_6 = wprinter::get_sep();
#line 136
$memory_8 = $memory_0->{'val'};
#line 136
$memory_7 = pretty_printer_priv::print_val($memory_8);
#line 136
undef($memory_8);
#line 136
$memory_2 = [$memory_3,$memory_4,$memory_5,$memory_6,$memory_7];
#line 136
undef($memory_3);
#line 136
undef($memory_4);
#line 136
undef($memory_5);
#line 136
undef($memory_6);
#line 136
undef($memory_7);
#line 136
$memory_1 = wprinter::build_pretty_l($memory_2);
#line 136
undef($memory_2);
#line 136
undef($memory_0);
#line 136
return $memory_1;
#line 136
undef($memory_1);
#line 136
undef($memory_0);
#line 136
return;
}

sub pretty_printer_priv::print_variant($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;$memory_0 = $_[0];
#line 146
$memory_1 = $memory_0->{'name'};
#line 146
$memory_3 = "TRUE";
#line 146
$memory_1 = c_rt_lib::to_nl($memory_1 eq $memory_3);
#line 146
undef($memory_3);
#line 146
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_1));
#line 146
if (c_rt_lib::check_true($memory_2)) {goto label_3;}
#line 146
$memory_3 = $memory_0->{'var'};
#line 146
$memory_4 = "nop";
#line 146
$memory_1 = ov::is($memory_3, $memory_4);
#line 146
undef($memory_4);
#line 146
undef($memory_3);
#line 146
label_3:
#line 146
undef($memory_2);
#line 146
$memory_1 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_1));
#line 146
if (c_rt_lib::check_true($memory_1)) {goto label_2;}
#line 147
$memory_3 = "true";
#line 147
$memory_2 = wprinter::build_sim($memory_3);
#line 147
undef($memory_3);
#line 147
undef($memory_0);
#line 147
undef($memory_1);
#line 147
return $memory_2;
#line 147
undef($memory_2);
#line 148
goto label_4;
#line 148
label_2:
#line 148
$memory_1 = $memory_0->{'name'};
#line 148
$memory_3 = "FALSE";
#line 148
$memory_1 = c_rt_lib::to_nl($memory_1 eq $memory_3);
#line 148
undef($memory_3);
#line 148
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_1));
#line 148
if (c_rt_lib::check_true($memory_2)) {goto label_5;}
#line 148
$memory_3 = $memory_0->{'var'};
#line 148
$memory_4 = "nop";
#line 148
$memory_1 = ov::is($memory_3, $memory_4);
#line 148
undef($memory_4);
#line 148
undef($memory_3);
#line 148
label_5:
#line 148
undef($memory_2);
#line 148
$memory_1 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_1));
#line 148
if (c_rt_lib::check_true($memory_1)) {goto label_4;}
#line 149
$memory_3 = "false";
#line 149
$memory_2 = wprinter::build_sim($memory_3);
#line 149
undef($memory_3);
#line 149
undef($memory_0);
#line 149
undef($memory_1);
#line 149
return $memory_2;
#line 149
undef($memory_2);
#line 150
goto label_4;
#line 150
label_4:
#line 150
undef($memory_1);
#line 152
$memory_2 = $memory_0->{'var'};
#line 152
$memory_3 = "arr_decl";
#line 152
$memory_1 = ov::is($memory_2, $memory_3);
#line 152
undef($memory_3);
#line 152
undef($memory_2);
#line 152
if (c_rt_lib::check_true($memory_1)) {goto label_8;}
#line 152
$memory_2 = $memory_0->{'var'};
#line 152
$memory_3 = "hash_decl";
#line 152
$memory_1 = ov::is($memory_2, $memory_3);
#line 152
undef($memory_3);
#line 152
undef($memory_2);
#line 152
label_8:
#line 152
$memory_1 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_1));
#line 152
if (c_rt_lib::check_true($memory_1)) {goto label_7;}
#line 153
$memory_3 = $memory_0->{'var'};
#line 153
$memory_4 = ":";
#line 153
$memory_5 = $memory_0->{'name'};
#line 153
$memory_4 = $memory_4 . $memory_5;
#line 153
undef($memory_5);
#line 153
$memory_5 = "(";
#line 153
$memory_4 = $memory_4 . $memory_5;
#line 153
undef($memory_5);
#line 153
$memory_5 = ")";
#line 153
$memory_2 = pretty_printer_priv::get_compressed_fun_val($memory_3, $memory_4, $memory_5);
#line 153
undef($memory_5);
#line 153
undef($memory_4);
#line 153
undef($memory_3);
#line 153
undef($memory_0);
#line 153
undef($memory_1);
#line 153
return $memory_2;
#line 153
undef($memory_2);
#line 154
goto label_7;
#line 154
label_7:
#line 154
undef($memory_1);
#line 156
$memory_1 = [];
#line 157
$memory_3 = ":";
#line 157
$memory_4 = $memory_0->{'name'};
#line 157
$memory_3 = $memory_3 . $memory_4;
#line 157
undef($memory_4);
#line 157
$memory_2 = wprinter::build_sim($memory_3);
#line 157
undef($memory_3);
#line 157
array::push($memory_1, $memory_2);
#line 157
undef($memory_2);
#line 158
$memory_3 = $memory_0->{'var'};
#line 158
$memory_4 = "nop";
#line 158
$memory_2 = ov::is($memory_3, $memory_4);
#line 158
undef($memory_4);
#line 158
undef($memory_3);
#line 158
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 158
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 158
if (c_rt_lib::check_true($memory_2)) {goto label_10;}
#line 158
$memory_5 = "(";
#line 158
$memory_4 = wprinter::build_sim($memory_5);
#line 158
undef($memory_5);
#line 158
$memory_6 = $memory_0->{'var'};
#line 158
$memory_5 = pretty_printer_priv::print_val($memory_6);
#line 158
undef($memory_6);
#line 158
$memory_7 = ")";
#line 158
$memory_6 = wprinter::build_sim($memory_7);
#line 158
undef($memory_7);
#line 158
$memory_3 = [$memory_4,$memory_5,$memory_6];
#line 158
undef($memory_4);
#line 158
undef($memory_5);
#line 158
undef($memory_6);
#line 158
array::append($memory_1, $memory_3);
#line 158
undef($memory_3);
#line 158
goto label_10;
#line 158
label_10:
#line 158
undef($memory_2);
#line 161
$memory_2 = wprinter::build_pretty_op_l($memory_1);
#line 161
undef($memory_0);
#line 161
undef($memory_1);
#line 161
return $memory_2;
#line 161
undef($memory_2);
#line 161
undef($memory_1);
#line 161
undef($memory_0);
#line 161
return;
}

sub pretty_printer_priv::print_variant_case_decl($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;$memory_0 = $_[0];
#line 165
$memory_3 = ":";
#line 165
$memory_4 = $memory_0->{'name'};
#line 165
$memory_3 = $memory_3 . $memory_4;
#line 165
undef($memory_4);
#line 165
$memory_2 = wprinter::build_sim($memory_3);
#line 165
undef($memory_3);
#line 165
$memory_1 = [$memory_2];
#line 165
undef($memory_2);
#line 166
$memory_2 = $memory_0->{'value'};
#line 166
$memory_3 = c_rt_lib::ov_is($memory_2, 'value');
#line 166
if (c_rt_lib::check_true($memory_3)) {goto label_2;}
#line 168
$memory_3 = c_rt_lib::ov_is($memory_2, 'none');
#line 168
if (c_rt_lib::check_true($memory_3)) {goto label_3;}
#line 168
$memory_3 = "NOMATCHALERT";
#line 168
$memory_3 = [$memory_3,$memory_2];
#line 168
die(dfile::ssave($memory_3));
#line 166
label_2:
#line 166
$memory_4 = c_rt_lib::ov_as($memory_2, 'value');
#line 167
$memory_7 = "(";
#line 167
$memory_6 = wprinter::build_sim($memory_7);
#line 167
undef($memory_7);
#line 167
$memory_7 = pretty_printer_priv::print_var_decl($memory_4);
#line 167
$memory_9 = ")";
#line 167
$memory_8 = wprinter::build_sim($memory_9);
#line 167
undef($memory_9);
#line 167
$memory_5 = [$memory_6,$memory_7,$memory_8];
#line 167
undef($memory_6);
#line 167
undef($memory_7);
#line 167
undef($memory_8);
#line 167
array::append($memory_1, $memory_5);
#line 167
undef($memory_5);
#line 167
undef($memory_4);
#line 168
goto label_1;
#line 168
label_3:
#line 169
goto label_1;
#line 169
label_1:
#line 169
undef($memory_2);
#line 169
undef($memory_3);
#line 170
$memory_2 = wprinter::build_pretty_op_l($memory_1);
#line 170
undef($memory_0);
#line 170
undef($memory_1);
#line 170
return $memory_2;
#line 170
undef($memory_2);
#line 170
undef($memory_1);
#line 170
undef($memory_0);
#line 170
return;
}

sub pretty_printer_priv::join_print_fun_arg($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;$memory_0 = $_[0];
#line 174
$memory_1 = [];
#line 175
$memory_2 = array::len($memory_0);
#line 175
$memory_3 = 0;
#line 175
$memory_4 = 1;
#line 175
label_3:
#line 175
$memory_5 = c_rt_lib::to_nl($memory_3 >= $memory_2);
#line 175
if (c_rt_lib::check_true($memory_5)) {goto label_1;}
#line 176
$memory_7 = $memory_0->[$memory_3];
#line 176
$memory_6 = pretty_printer_priv::print_fun_arg($memory_7);
#line 176
undef($memory_7);
#line 176
array::push($memory_1, $memory_6);
#line 176
undef($memory_6);
#line 177
$memory_6 = array::len($memory_0);
#line 177
$memory_7 = 1;
#line 177
$memory_6 = $memory_6 - $memory_7;
#line 177
undef($memory_7);
#line 177
$memory_6 = c_rt_lib::to_nl($memory_3 != $memory_6);
#line 177
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 177
if (c_rt_lib::check_true($memory_6)) {goto label_5;}
#line 177
$memory_9 = ",";
#line 177
$memory_8 = wprinter::build_sim($memory_9);
#line 177
undef($memory_9);
#line 177
$memory_9 = wprinter::get_sep();
#line 177
$memory_7 = [$memory_8,$memory_9];
#line 177
undef($memory_8);
#line 177
undef($memory_9);
#line 177
array::append($memory_1, $memory_7);
#line 177
undef($memory_7);
#line 177
goto label_5;
#line 177
label_5:
#line 177
undef($memory_6);
#line 178
$memory_3 = $memory_3 + $memory_4;
#line 178
goto label_3;
#line 178
label_1:
#line 178
undef($memory_2);
#line 178
undef($memory_3);
#line 178
undef($memory_4);
#line 178
undef($memory_5);
#line 179
undef($memory_0);
#line 179
return $memory_1;
#line 179
undef($memory_1);
#line 179
undef($memory_0);
#line 179
return;
}

sub pretty_printer_priv::print_fun_arg($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;$memory_0 = $_[0];
#line 183
$memory_1 = [];
#line 184
$memory_2 = $memory_0->{'mod'};
#line 184
$memory_3 = c_rt_lib::ov_is($memory_2, 'ref');
#line 184
if (c_rt_lib::check_true($memory_3)) {goto label_2;}
#line 186
$memory_3 = c_rt_lib::ov_is($memory_2, 'none');
#line 186
if (c_rt_lib::check_true($memory_3)) {goto label_3;}
#line 186
$memory_3 = "NOMATCHALERT";
#line 186
$memory_3 = [$memory_3,$memory_2];
#line 186
die(dfile::ssave($memory_3));
#line 184
label_2:
#line 185
$memory_6 = "ref";
#line 185
$memory_5 = wprinter::build_sim($memory_6);
#line 185
undef($memory_6);
#line 185
$memory_6 = wprinter::get_sep();
#line 185
$memory_4 = [$memory_5,$memory_6];
#line 185
undef($memory_5);
#line 185
undef($memory_6);
#line 185
array::append($memory_1, $memory_4);
#line 185
undef($memory_4);
#line 186
goto label_1;
#line 186
label_3:
#line 187
goto label_1;
#line 187
label_1:
#line 187
undef($memory_2);
#line 187
undef($memory_3);
#line 188
$memory_3 = $memory_0->{'val'};
#line 188
$memory_2 = pretty_printer_priv::print_val($memory_3);
#line 188
undef($memory_3);
#line 188
array::push($memory_1, $memory_2);
#line 188
undef($memory_2);
#line 189
$memory_2 = wprinter::build_pretty_op_l($memory_1);
#line 189
undef($memory_0);
#line 189
undef($memory_1);
#line 189
return $memory_2;
#line 189
undef($memory_2);
#line 189
undef($memory_1);
#line 189
undef($memory_0);
#line 189
return;
}

sub pretty_printer_priv::count_structs($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;$memory_0 = $_[0];
#line 193
$memory_1 = 0;
#line 194
$memory_3 = 0;
#line 194
$memory_4 = 1;
#line 194
$memory_5 = c_rt_lib::array_len($memory_0);
#line 194
label_3:
#line 194
$memory_6 = c_rt_lib::to_nl($memory_3 >= $memory_5);
#line 194
if (c_rt_lib::check_true($memory_6)) {goto label_1;}
#line 194
$memory_2 = $memory_0->[$memory_3];
#line 195
$memory_8 = $memory_2->{'val'};
#line 195
$memory_9 = "arr_decl";
#line 195
$memory_7 = ov::is($memory_8, $memory_9);
#line 195
undef($memory_9);
#line 195
undef($memory_8);
#line 195
if (c_rt_lib::check_true($memory_7)) {goto label_6;}
#line 195
$memory_8 = $memory_2->{'val'};
#line 195
$memory_9 = "hash_decl";
#line 195
$memory_7 = ov::is($memory_8, $memory_9);
#line 195
undef($memory_9);
#line 195
undef($memory_8);
#line 195
label_6:
#line 195
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 195
if (c_rt_lib::check_true($memory_7)) {goto label_5;}
#line 195
$memory_8 = 1;
#line 195
$memory_1 = $memory_1 + $memory_8;
#line 195
undef($memory_8);
#line 195
goto label_5;
#line 195
label_5:
#line 195
undef($memory_7);
#line 196
$memory_3 = $memory_3 + $memory_4;
#line 196
goto label_3;
#line 196
label_1:
#line 196
undef($memory_2);
#line 196
undef($memory_3);
#line 196
undef($memory_4);
#line 196
undef($memory_5);
#line 196
undef($memory_6);
#line 197
undef($memory_0);
#line 197
return $memory_1;
#line 197
undef($memory_1);
#line 197
undef($memory_0);
#line 197
return;
}

sub pretty_printer_priv::get_compressed_fun_val($$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;$memory_0 = $_[0];$memory_1 = $_[1];$memory_2 = $_[2];
#line 202
$memory_4 = $memory_1;
#line 203
$memory_5 = $memory_2;
#line 204
label_2:
#line 205
$memory_7 = "arr_decl";
#line 205
$memory_6 = ov::is($memory_0, $memory_7);
#line 205
undef($memory_7);
#line 205
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 205
if (c_rt_lib::check_true($memory_6)) {goto label_4;}
#line 206
$memory_7 = $memory_0;
#line 206
$memory_7 = c_rt_lib::ov_as($memory_7, 'arr_decl');
#line 207
$memory_8 = "[";
#line 207
$memory_4 = $memory_4 . $memory_8;
#line 207
undef($memory_8);
#line 208
$memory_8 = "]";
#line 208
$memory_8 = $memory_8 . $memory_5;
#line 208
$memory_5 = $memory_8;
#line 208
undef($memory_8);
#line 209
$memory_8 = array::len($memory_7);
#line 209
$memory_9 = 1;
#line 209
$memory_8 = c_rt_lib::to_nl($memory_8 != $memory_9);
#line 209
undef($memory_9);
#line 209
$memory_8 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 209
if (c_rt_lib::check_true($memory_8)) {goto label_6;}
#line 210
$memory_9 = pretty_printer_priv::join_print_val($memory_7);
#line 210
$memory_3 = $memory_9;
#line 210
undef($memory_9);
#line 211
undef($memory_6);
#line 211
undef($memory_7);
#line 211
undef($memory_8);
#line 211
goto label_1;
#line 212
goto label_6;
#line 212
label_6:
#line 212
undef($memory_8);
#line 214
$memory_9 = 0;
#line 214
$memory_8 = $memory_7->[$memory_9];
#line 214
undef($memory_9);
#line 214
$memory_0 = $memory_8;
#line 214
undef($memory_8);
#line 214
undef($memory_7);
#line 215
goto label_3;
#line 215
label_4:
#line 215
$memory_7 = "hash_decl";
#line 215
$memory_6 = ov::is($memory_0, $memory_7);
#line 215
undef($memory_7);
#line 215
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 215
if (c_rt_lib::check_true($memory_6)) {goto label_7;}
#line 216
$memory_7 = $memory_0;
#line 216
$memory_7 = c_rt_lib::ov_as($memory_7, 'hash_decl');
#line 217
$memory_8 = "{";
#line 217
$memory_4 = $memory_4 . $memory_8;
#line 217
undef($memory_8);
#line 218
$memory_8 = "}";
#line 218
$memory_8 = $memory_8 . $memory_5;
#line 218
$memory_5 = $memory_8;
#line 218
undef($memory_8);
#line 219
$memory_8 = pretty_printer_priv::join_print_hash_elem($memory_7);
#line 219
$memory_3 = $memory_8;
#line 219
undef($memory_8);
#line 220
undef($memory_6);
#line 220
undef($memory_7);
#line 220
goto label_1;
#line 220
undef($memory_7);
#line 221
goto label_3;
#line 221
label_7:
#line 222
$memory_8 = pretty_printer_priv::print_val($memory_0);
#line 222
$memory_7 = [$memory_8];
#line 222
undef($memory_8);
#line 222
$memory_3 = $memory_7;
#line 222
undef($memory_7);
#line 223
undef($memory_6);
#line 223
goto label_1;
#line 224
goto label_3;
#line 224
label_3:
#line 224
undef($memory_6);
#line 204
goto label_2;
#line 204
label_1:
#line 227
$memory_6 = wprinter::build_pretty_arr_decl($memory_3, $memory_4, $memory_5);
#line 227
undef($memory_0);
#line 227
undef($memory_1);
#line 227
undef($memory_2);
#line 227
undef($memory_3);
#line 227
undef($memory_4);
#line 227
undef($memory_5);
#line 227
return $memory_6;
#line 227
undef($memory_6);
#line 227
undef($memory_3);
#line 227
undef($memory_4);
#line 227
undef($memory_5);
#line 227
undef($memory_0);
#line 227
undef($memory_1);
#line 227
undef($memory_2);
#line 227
return;
}

sub pretty_printer_priv::print_st($$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];$memory_2 = $_[2];
#line 231
$memory_3 = " ";
#line 231
pretty_printer_priv::state_print($memory_0, $memory_3);
#line 231
undef($memory_3);
#line 232
pretty_printer_priv::print_cmd($memory_0, $memory_1, $memory_2);
#line 232
undef($memory_1);
#line 232
undef($memory_2);
#line 232
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub pretty_printer_priv::get_fun_label($$) {
my $memory_0;my $memory_1;my $memory_2;$memory_0 = $_[0];$memory_1 = $_[1];
#line 236
$memory_2 = "";
#line 236
$memory_2 = c_rt_lib::to_nl($memory_1 eq $memory_2);
#line 236
if (c_rt_lib::check_true($memory_2)) {goto label_2;}
#line 236
$memory_2 = "::";
#line 236
$memory_2 = $memory_1 . $memory_2;
#line 236
$memory_2 = $memory_2 . $memory_0;
#line 236
goto label_1;
#line 236
label_2:
#line 236
$memory_2 = $memory_0;
#line 236
label_1:
#line 236
undef($memory_0);
#line 236
undef($memory_1);
#line 236
return $memory_2;
#line 236
undef($memory_2);
#line 236
undef($memory_0);
#line 236
undef($memory_1);
#line 236
return;
}

sub pretty_printer_priv::string_to_nl($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;$memory_0 = $_[0];
#line 240
$memory_2 = "'";
#line 240
$memory_3 = "''";
#line 240
$memory_1 = string::replace($memory_0, $memory_2, $memory_3);
#line 240
undef($memory_3);
#line 240
undef($memory_2);
#line 240
undef($memory_0);
#line 240
return $memory_1;
#line 240
undef($memory_1);
#line 240
undef($memory_0);
#line 240
return;
}

sub pretty_printer_priv::join_print_val($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;$memory_0 = $_[0];
#line 243
$memory_1 = [];
#line 244
$memory_2 = array::len($memory_0);
#line 244
$memory_3 = 0;
#line 244
$memory_4 = 1;
#line 244
label_3:
#line 244
$memory_5 = c_rt_lib::to_nl($memory_3 >= $memory_2);
#line 244
if (c_rt_lib::check_true($memory_5)) {goto label_1;}
#line 245
$memory_7 = $memory_0->[$memory_3];
#line 245
$memory_6 = pretty_printer_priv::print_val($memory_7);
#line 245
undef($memory_7);
#line 245
array::push($memory_1, $memory_6);
#line 245
undef($memory_6);
#line 246
$memory_6 = array::len($memory_0);
#line 246
$memory_7 = 1;
#line 246
$memory_6 = $memory_6 - $memory_7;
#line 246
undef($memory_7);
#line 246
$memory_6 = c_rt_lib::to_nl($memory_3 != $memory_6);
#line 246
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 246
if (c_rt_lib::check_true($memory_6)) {goto label_5;}
#line 246
$memory_9 = ",";
#line 246
$memory_8 = wprinter::build_sim($memory_9);
#line 246
undef($memory_9);
#line 246
$memory_9 = wprinter::get_sep();
#line 246
$memory_7 = [$memory_8,$memory_9];
#line 246
undef($memory_8);
#line 246
undef($memory_9);
#line 246
array::append($memory_1, $memory_7);
#line 246
undef($memory_7);
#line 246
goto label_5;
#line 246
label_5:
#line 246
undef($memory_6);
#line 247
$memory_3 = $memory_3 + $memory_4;
#line 247
goto label_3;
#line 247
label_1:
#line 247
undef($memory_2);
#line 247
undef($memory_3);
#line 247
undef($memory_4);
#line 247
undef($memory_5);
#line 248
undef($memory_0);
#line 248
return $memory_1;
#line 248
undef($memory_1);
#line 248
undef($memory_0);
#line 248
return;
}

sub pretty_printer_priv::is_to_change_ov($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;$memory_0 = $_[0];
#line 251
$memory_1 = $memory_0;
#line 251
$memory_1 = c_rt_lib::ov_is($memory_1, 'fun_val');
#line 251
$memory_1 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_1));
#line 251
$memory_1 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_1));
#line 251
if (c_rt_lib::check_true($memory_1)) {goto label_2;}
#line 251
$memory_2 = c_rt_lib::to_nl(0);
#line 251
undef($memory_0);
#line 251
undef($memory_1);
#line 251
return $memory_2;
#line 251
undef($memory_2);
#line 251
goto label_2;
#line 251
label_2:
#line 251
undef($memory_1);
#line 252
$memory_1 = $memory_0;
#line 252
$memory_1 = c_rt_lib::ov_as($memory_1, 'fun_val');
#line 253
$memory_4 = $memory_1->{'args'};
#line 253
$memory_2 = array::len($memory_4);
#line 253
undef($memory_4);
#line 253
$memory_4 = 2;
#line 253
$memory_2 = c_rt_lib::to_nl($memory_2 == $memory_4);
#line 253
undef($memory_4);
#line 253
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 253
if (c_rt_lib::check_true($memory_3)) {goto label_6;}
#line 253
$memory_2 = $memory_1->{'module'};
#line 253
$memory_4 = "ov";
#line 253
$memory_2 = c_rt_lib::to_nl($memory_2 eq $memory_4);
#line 253
undef($memory_4);
#line 253
if (c_rt_lib::check_true($memory_2)) {goto label_6;}
#line 253
$memory_2 = $memory_1->{'module'};
#line 253
$memory_4 = "c_ov";
#line 253
$memory_2 = c_rt_lib::to_nl($memory_2 eq $memory_4);
#line 253
undef($memory_4);
#line 253
label_6:
#line 253
undef($memory_3);
#line 253
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 253
if (c_rt_lib::check_true($memory_2)) {goto label_4;}
#line 254
$memory_3 = $memory_1->{'name'};
#line 254
$memory_5 = "as";
#line 254
$memory_3 = c_rt_lib::to_nl($memory_3 eq $memory_5);
#line 254
undef($memory_5);
#line 254
if (c_rt_lib::check_true($memory_3)) {goto label_10;}
#line 254
$memory_3 = $memory_1->{'name'};
#line 254
$memory_5 = "is";
#line 254
$memory_3 = c_rt_lib::to_nl($memory_3 eq $memory_5);
#line 254
undef($memory_5);
#line 254
label_10:
#line 254
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 254
if (c_rt_lib::check_true($memory_4)) {goto label_9;}
#line 254
$memory_3 = $memory_1->{'args'};
#line 254
$memory_5 = 1;
#line 254
$memory_3 = $memory_3->[$memory_5];
#line 254
undef($memory_5);
#line 254
$memory_3 = $memory_3->{'val'};
#line 254
$memory_3 = c_rt_lib::ov_is($memory_3, 'string');
#line 254
label_9:
#line 254
undef($memory_4);
#line 254
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 254
if (c_rt_lib::check_true($memory_3)) {goto label_8;}
#line 255
$memory_4 = $memory_1->{'args'};
#line 255
$memory_5 = 1;
#line 255
$memory_4 = $memory_4->[$memory_5];
#line 255
undef($memory_5);
#line 255
$memory_4 = $memory_4->{'val'};
#line 255
$memory_4 = c_rt_lib::ov_as($memory_4, 'string');
#line 256
$memory_7 = $memory_4->{'arr'};
#line 256
$memory_5 = array::len($memory_7);
#line 256
undef($memory_7);
#line 256
$memory_7 = 1;
#line 256
$memory_5 = c_rt_lib::to_nl($memory_5 == $memory_7);
#line 256
undef($memory_7);
#line 256
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 256
if (c_rt_lib::check_true($memory_6)) {goto label_13;}
#line 256
$memory_7 = $memory_4->{'arr'};
#line 256
$memory_8 = 0;
#line 256
$memory_7 = $memory_7->[$memory_8];
#line 256
undef($memory_8);
#line 256
$memory_8 = " ";
#line 256
$memory_5 = string::index2($memory_7, $memory_8);
#line 256
undef($memory_8);
#line 256
undef($memory_7);
#line 256
$memory_7 = 0;
#line 256
$memory_5 = c_rt_lib::to_nl($memory_5 < $memory_7);
#line 256
undef($memory_7);
#line 256
label_13:
#line 256
undef($memory_6);
#line 256
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 256
if (c_rt_lib::check_true($memory_5)) {goto label_12;}
#line 257
$memory_6 = c_rt_lib::to_nl(1);
#line 257
undef($memory_0);
#line 257
undef($memory_1);
#line 257
undef($memory_2);
#line 257
undef($memory_3);
#line 257
undef($memory_4);
#line 257
undef($memory_5);
#line 257
return $memory_6;
#line 257
undef($memory_6);
#line 258
goto label_12;
#line 258
label_12:
#line 258
undef($memory_5);
#line 258
undef($memory_4);
#line 259
goto label_8;
#line 259
label_8:
#line 259
undef($memory_3);
#line 260
goto label_4;
#line 260
label_4:
#line 260
undef($memory_2);
#line 261
$memory_2 = c_rt_lib::to_nl(0);
#line 261
undef($memory_0);
#line 261
undef($memory_1);
#line 261
return $memory_2;
#line 261
undef($memory_2);
#line 261
undef($memory_1);
#line 261
undef($memory_0);
#line 261
return;
}

sub pretty_printer_priv::print_val($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;my $memory_13;my $memory_14;$memory_0 = $_[0];
#line 264
$memory_1 = c_rt_lib::ov_is($memory_0, 'const');
#line 264
if (c_rt_lib::check_true($memory_1)) {goto label_2;}
#line 266
$memory_1 = c_rt_lib::ov_is($memory_0, 'string');
#line 266
if (c_rt_lib::check_true($memory_1)) {goto label_3;}
#line 276
$memory_1 = c_rt_lib::ov_is($memory_0, 'hash_key');
#line 276
if (c_rt_lib::check_true($memory_1)) {goto label_4;}
#line 278
$memory_1 = c_rt_lib::ov_is($memory_0, 'variant');
#line 278
if (c_rt_lib::check_true($memory_1)) {goto label_5;}
#line 280
$memory_1 = c_rt_lib::ov_is($memory_0, 'var');
#line 280
if (c_rt_lib::check_true($memory_1)) {goto label_6;}
#line 282
$memory_1 = c_rt_lib::ov_is($memory_0, 'parenthesis');
#line 282
if (c_rt_lib::check_true($memory_1)) {goto label_7;}
#line 284
$memory_1 = c_rt_lib::ov_is($memory_0, 'ternary_op');
#line 284
if (c_rt_lib::check_true($memory_1)) {goto label_8;}
#line 292
$memory_1 = c_rt_lib::ov_is($memory_0, 'bin_op');
#line 292
if (c_rt_lib::check_true($memory_1)) {goto label_9;}
#line 323
$memory_1 = c_rt_lib::ov_is($memory_0, 'var_op');
#line 323
if (c_rt_lib::check_true($memory_1)) {goto label_10;}
#line 338
$memory_1 = c_rt_lib::ov_is($memory_0, 'post_dec');
#line 338
if (c_rt_lib::check_true($memory_1)) {goto label_11;}
#line 340
$memory_1 = c_rt_lib::ov_is($memory_0, 'post_inc');
#line 340
if (c_rt_lib::check_true($memory_1)) {goto label_12;}
#line 342
$memory_1 = c_rt_lib::ov_is($memory_0, 'unary_op');
#line 342
if (c_rt_lib::check_true($memory_1)) {goto label_13;}
#line 344
$memory_1 = c_rt_lib::ov_is($memory_0, 'fun_val');
#line 344
if (c_rt_lib::check_true($memory_1)) {goto label_14;}
#line 369
$memory_1 = c_rt_lib::ov_is($memory_0, 'nop');
#line 369
if (c_rt_lib::check_true($memory_1)) {goto label_15;}
#line 371
$memory_1 = c_rt_lib::ov_is($memory_0, 'arr_decl');
#line 371
if (c_rt_lib::check_true($memory_1)) {goto label_16;}
#line 373
$memory_1 = c_rt_lib::ov_is($memory_0, 'hash_decl');
#line 373
if (c_rt_lib::check_true($memory_1)) {goto label_17;}
#line 375
$memory_1 = c_rt_lib::ov_is($memory_0, 'fun_label');
#line 375
if (c_rt_lib::check_true($memory_1)) {goto label_18;}
#line 375
$memory_1 = "NOMATCHALERT";
#line 375
$memory_1 = [$memory_1,$memory_0];
#line 375
die(dfile::ssave($memory_1));
#line 264
label_2:
#line 264
$memory_2 = c_rt_lib::ov_as($memory_0, 'const');
#line 265
$memory_3 = wprinter::build_sim($memory_2);
#line 265
undef($memory_0);
#line 265
undef($memory_1);
#line 265
undef($memory_2);
#line 265
return $memory_3;
#line 265
undef($memory_3);
#line 265
undef($memory_2);
#line 266
goto label_1;
#line 266
label_3:
#line 266
$memory_2 = c_rt_lib::ov_as($memory_0, 'string');
#line 267
$memory_3 = [];
#line 268
$memory_4 = $memory_2->{'arr'};
#line 268
$memory_6 = 0;
#line 268
$memory_7 = 1;
#line 268
$memory_8 = c_rt_lib::array_len($memory_4);
#line 268
label_21:
#line 268
$memory_9 = c_rt_lib::to_nl($memory_6 >= $memory_8);
#line 268
if (c_rt_lib::check_true($memory_9)) {goto label_19;}
#line 268
$memory_5 = $memory_4->[$memory_6];
#line 269
$memory_10 = "'";
#line 269
$memory_11 = pretty_printer_priv::string_to_nl($memory_5);
#line 269
$memory_10 = $memory_10 . $memory_11;
#line 269
undef($memory_11);
#line 269
array::push($memory_3, $memory_10);
#line 269
undef($memory_10);
#line 270
$memory_6 = $memory_6 + $memory_7;
#line 270
goto label_21;
#line 270
label_19:
#line 270
undef($memory_4);
#line 270
undef($memory_5);
#line 270
undef($memory_6);
#line 270
undef($memory_7);
#line 270
undef($memory_8);
#line 270
undef($memory_9);
#line 271
$memory_4 = $memory_2->{'last'};
#line 271
$memory_5 = c_rt_lib::ov_is($memory_4, 'new_line');
#line 271
if (c_rt_lib::check_true($memory_5)) {goto label_23;}
#line 272
$memory_5 = c_rt_lib::ov_is($memory_4, 'end');
#line 272
if (c_rt_lib::check_true($memory_5)) {goto label_24;}
#line 272
$memory_5 = "NOMATCHALERT";
#line 272
$memory_5 = [$memory_5,$memory_4];
#line 272
die(dfile::ssave($memory_5));
#line 271
label_23:
#line 272
goto label_22;
#line 272
label_24:
#line 273
$memory_7 = array::len($memory_3);
#line 273
$memory_8 = 1;
#line 273
$memory_7 = $memory_7 - $memory_8;
#line 273
undef($memory_8);
#line 273
$memory_6 = $memory_3->[$memory_7];
#line 273
undef($memory_7);
#line 273
$memory_7 = "'";
#line 273
$memory_6 = $memory_6 . $memory_7;
#line 273
undef($memory_7);
#line 273
$memory_8 = array::len($memory_3);
#line 273
$memory_9 = 1;
#line 273
$memory_8 = $memory_8 - $memory_9;
#line 273
undef($memory_9);
#line 273
$memory_7 = $memory_6;
#line 273
 if (c_rt_lib::get_arrcount($memory_3) > 1) {$memory_3 = [@{$memory_3}];}$memory_3->[$memory_8] = $memory_7;
#line 273
undef($memory_6);
#line 273
undef($memory_7);
#line 273
undef($memory_8);
#line 274
goto label_22;
#line 274
label_22:
#line 274
undef($memory_4);
#line 274
undef($memory_5);
#line 275
$memory_5 = $memory_2->{'last'};
#line 275
$memory_4 = wprinter::build_str_arr($memory_3, $memory_5);
#line 275
undef($memory_5);
#line 275
undef($memory_0);
#line 275
undef($memory_1);
#line 275
undef($memory_2);
#line 275
undef($memory_3);
#line 275
return $memory_4;
#line 275
undef($memory_4);
#line 275
undef($memory_3);
#line 275
undef($memory_2);
#line 276
goto label_1;
#line 276
label_4:
#line 276
$memory_2 = c_rt_lib::ov_as($memory_0, 'hash_key');
#line 277
$memory_3 = wprinter::build_sim($memory_2);
#line 277
undef($memory_0);
#line 277
undef($memory_1);
#line 277
undef($memory_2);
#line 277
return $memory_3;
#line 277
undef($memory_3);
#line 277
undef($memory_2);
#line 278
goto label_1;
#line 278
label_5:
#line 278
$memory_2 = c_rt_lib::ov_as($memory_0, 'variant');
#line 279
$memory_3 = pretty_printer_priv::print_variant($memory_2);
#line 279
undef($memory_0);
#line 279
undef($memory_1);
#line 279
undef($memory_2);
#line 279
return $memory_3;
#line 279
undef($memory_3);
#line 279
undef($memory_2);
#line 280
goto label_1;
#line 280
label_6:
#line 280
$memory_2 = c_rt_lib::ov_as($memory_0, 'var');
#line 281
$memory_3 = wprinter::build_sim($memory_2);
#line 281
undef($memory_0);
#line 281
undef($memory_1);
#line 281
undef($memory_2);
#line 281
return $memory_3;
#line 281
undef($memory_3);
#line 281
undef($memory_2);
#line 282
goto label_1;
#line 282
label_7:
#line 282
$memory_2 = c_rt_lib::ov_as($memory_0, 'parenthesis');
#line 283
$memory_6 = "(";
#line 283
$memory_5 = wprinter::build_sim($memory_6);
#line 283
undef($memory_6);
#line 283
$memory_6 = pretty_printer_priv::print_val($memory_2);
#line 283
$memory_8 = ")";
#line 283
$memory_7 = wprinter::build_sim($memory_8);
#line 283
undef($memory_8);
#line 283
$memory_4 = [$memory_5,$memory_6,$memory_7];
#line 283
undef($memory_5);
#line 283
undef($memory_6);
#line 283
undef($memory_7);
#line 283
$memory_3 = wprinter::build_pretty_a($memory_4);
#line 283
undef($memory_4);
#line 283
undef($memory_0);
#line 283
undef($memory_1);
#line 283
undef($memory_2);
#line 283
return $memory_3;
#line 283
undef($memory_3);
#line 283
undef($memory_2);
#line 284
goto label_1;
#line 284
label_8:
#line 284
$memory_2 = c_rt_lib::ov_as($memory_0, 'ternary_op');
#line 285
$memory_6 = $memory_2->{'fst'};
#line 285
$memory_5 = pretty_printer_priv::print_val($memory_6);
#line 285
undef($memory_6);
#line 285
$memory_6 = wprinter::get_sep();
#line 285
$memory_10 = "? ";
#line 285
$memory_9 = wprinter::build_sim($memory_10);
#line 285
undef($memory_10);
#line 285
$memory_11 = $memory_2->{'snd'};
#line 285
$memory_10 = pretty_printer_priv::print_val($memory_11);
#line 285
undef($memory_11);
#line 285
$memory_8 = [$memory_9,$memory_10];
#line 285
undef($memory_9);
#line 285
undef($memory_10);
#line 285
$memory_7 = wprinter::build_pretty_op_l($memory_8);
#line 285
undef($memory_8);
#line 285
$memory_8 = wprinter::get_sep();
#line 285
$memory_12 = ": ";
#line 285
$memory_11 = wprinter::build_sim($memory_12);
#line 285
undef($memory_12);
#line 285
$memory_13 = $memory_2->{'thrd'};
#line 285
$memory_12 = pretty_printer_priv::print_val($memory_13);
#line 285
undef($memory_13);
#line 285
$memory_10 = [$memory_11,$memory_12];
#line 285
undef($memory_11);
#line 285
undef($memory_12);
#line 285
$memory_9 = wprinter::build_pretty_op_l($memory_10);
#line 285
undef($memory_10);
#line 285
$memory_4 = [$memory_5,$memory_6,$memory_7,$memory_8,$memory_9];
#line 285
undef($memory_5);
#line 285
undef($memory_6);
#line 285
undef($memory_7);
#line 285
undef($memory_8);
#line 285
undef($memory_9);
#line 285
$memory_3 = wprinter::build_pretty_a($memory_4);
#line 285
undef($memory_4);
#line 285
undef($memory_0);
#line 285
undef($memory_1);
#line 285
undef($memory_2);
#line 285
return $memory_3;
#line 285
undef($memory_3);
#line 285
undef($memory_2);
#line 292
goto label_1;
#line 292
label_9:
#line 292
$memory_2 = c_rt_lib::ov_as($memory_0, 'bin_op');
#line 293
$memory_3 = $memory_2->{'op'};
#line 294
$memory_4 = "ARRAY_INDEX";
#line 294
$memory_4 = c_rt_lib::to_nl($memory_3 eq $memory_4);
#line 294
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 294
if (c_rt_lib::check_true($memory_4)) {goto label_26;}
#line 295
$memory_10 = $memory_2->{'left'};
#line 295
$memory_9 = pretty_printer_priv::print_val($memory_10);
#line 295
undef($memory_10);
#line 295
$memory_11 = "[";
#line 295
$memory_10 = wprinter::build_sim($memory_11);
#line 295
undef($memory_11);
#line 295
$memory_8 = [$memory_9,$memory_10];
#line 295
undef($memory_9);
#line 295
undef($memory_10);
#line 295
$memory_7 = wprinter::build_pretty_l($memory_8);
#line 295
undef($memory_8);
#line 295
$memory_9 = $memory_2->{'right'};
#line 295
$memory_8 = pretty_printer_priv::print_val($memory_9);
#line 295
undef($memory_9);
#line 295
$memory_10 = "]";
#line 295
$memory_9 = wprinter::build_sim($memory_10);
#line 295
undef($memory_10);
#line 295
$memory_6 = [$memory_7,$memory_8,$memory_9];
#line 295
undef($memory_7);
#line 295
undef($memory_8);
#line 295
undef($memory_9);
#line 295
$memory_5 = wprinter::build_pretty_a($memory_6);
#line 295
undef($memory_6);
#line 295
undef($memory_0);
#line 295
undef($memory_1);
#line 295
undef($memory_2);
#line 295
undef($memory_3);
#line 295
undef($memory_4);
#line 295
return $memory_5;
#line 295
undef($memory_5);
#line 300
goto label_25;
#line 300
label_26:
#line 300
$memory_4 = "->";
#line 300
$memory_4 = c_rt_lib::to_nl($memory_3 eq $memory_4);
#line 300
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 300
if (c_rt_lib::check_true($memory_4)) {goto label_27;}
#line 302
$memory_7 = $memory_2->{'left'};
#line 302
$memory_6 = pretty_printer_priv::is_to_change_ov($memory_7);
#line 302
undef($memory_7);
#line 302
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 302
if (c_rt_lib::check_true($memory_6)) {goto label_29;}
#line 303
$memory_10 = "(";
#line 303
$memory_9 = wprinter::build_sim($memory_10);
#line 303
undef($memory_10);
#line 303
$memory_11 = $memory_2->{'left'};
#line 303
$memory_10 = pretty_printer_priv::print_val($memory_11);
#line 303
undef($memory_11);
#line 303
$memory_12 = ")";
#line 303
$memory_11 = wprinter::build_sim($memory_12);
#line 303
undef($memory_12);
#line 303
$memory_8 = [$memory_9,$memory_10,$memory_11];
#line 303
undef($memory_9);
#line 303
undef($memory_10);
#line 303
undef($memory_11);
#line 303
$memory_7 = wprinter::build_pretty_a($memory_8);
#line 303
undef($memory_8);
#line 303
$memory_5 = $memory_7;
#line 303
undef($memory_7);
#line 304
goto label_28;
#line 304
label_29:
#line 305
$memory_8 = $memory_2->{'left'};
#line 305
$memory_7 = pretty_printer_priv::print_val($memory_8);
#line 305
undef($memory_8);
#line 305
$memory_5 = $memory_7;
#line 305
undef($memory_7);
#line 306
goto label_28;
#line 306
label_28:
#line 306
undef($memory_6);
#line 307
$memory_8 = wprinter::build_sim($memory_3);
#line 307
$memory_10 = $memory_2->{'right'};
#line 307
$memory_9 = pretty_printer_priv::print_val($memory_10);
#line 307
undef($memory_10);
#line 307
$memory_7 = [$memory_5,$memory_8,$memory_9];
#line 307
undef($memory_8);
#line 307
undef($memory_9);
#line 307
$memory_6 = wprinter::build_pretty_op_l($memory_7);
#line 307
undef($memory_7);
#line 307
undef($memory_0);
#line 307
undef($memory_1);
#line 307
undef($memory_2);
#line 307
undef($memory_3);
#line 307
undef($memory_4);
#line 307
undef($memory_5);
#line 307
return $memory_6;
#line 307
undef($memory_6);
#line 307
undef($memory_5);
#line 312
goto label_25;
#line 312
label_27:
#line 313
$memory_10 = $memory_2->{'left'};
#line 313
$memory_9 = pretty_printer_priv::print_val($memory_10);
#line 313
undef($memory_10);
#line 313
$memory_10 = wprinter::get_sep();
#line 313
$memory_11 = wprinter::build_sim($memory_3);
#line 313
$memory_8 = [$memory_9,$memory_10,$memory_11];
#line 313
undef($memory_9);
#line 313
undef($memory_10);
#line 313
undef($memory_11);
#line 313
$memory_7 = wprinter::build_pretty_op_l($memory_8);
#line 313
undef($memory_8);
#line 313
$memory_8 = wprinter::get_sep();
#line 313
$memory_10 = $memory_2->{'right'};
#line 313
$memory_9 = pretty_printer_priv::print_val($memory_10);
#line 313
undef($memory_10);
#line 313
$memory_6 = [$memory_7,$memory_8,$memory_9];
#line 313
undef($memory_7);
#line 313
undef($memory_8);
#line 313
undef($memory_9);
#line 313
$memory_5 = wprinter::build_pretty_op_l($memory_6);
#line 313
undef($memory_6);
#line 313
undef($memory_0);
#line 313
undef($memory_1);
#line 313
undef($memory_2);
#line 313
undef($memory_3);
#line 313
undef($memory_4);
#line 313
return $memory_5;
#line 313
undef($memory_5);
#line 322
goto label_25;
#line 322
label_25:
#line 322
undef($memory_4);
#line 322
undef($memory_3);
#line 322
undef($memory_2);
#line 323
goto label_1;
#line 323
label_10:
#line 323
$memory_2 = c_rt_lib::ov_as($memory_0, 'var_op');
#line 325
$memory_4 = $memory_2->{'op'};
#line 325
$memory_5 = c_rt_lib::ov_is($memory_4, 'ov_as');
#line 325
if (c_rt_lib::check_true($memory_5)) {goto label_31;}
#line 327
$memory_5 = c_rt_lib::ov_is($memory_4, 'ov_is');
#line 327
if (c_rt_lib::check_true($memory_5)) {goto label_32;}
#line 327
$memory_5 = "NOMATCHALERT";
#line 327
$memory_5 = [$memory_5,$memory_4];
#line 327
die(dfile::ssave($memory_5));
#line 325
label_31:
#line 326
$memory_6 = "as";
#line 326
$memory_3 = $memory_6;
#line 326
undef($memory_6);
#line 327
goto label_30;
#line 327
label_32:
#line 328
$memory_6 = "is";
#line 328
$memory_3 = $memory_6;
#line 328
undef($memory_6);
#line 329
goto label_30;
#line 329
label_30:
#line 329
undef($memory_4);
#line 329
undef($memory_5);
#line 330
$memory_7 = $memory_2->{'left'};
#line 330
$memory_6 = pretty_printer_priv::print_val($memory_7);
#line 330
undef($memory_7);
#line 330
$memory_7 = wprinter::get_sep();
#line 330
$memory_8 = wprinter::build_sim($memory_3);
#line 330
$memory_9 = wprinter::get_sep();
#line 330
$memory_11 = ":";
#line 330
$memory_10 = wprinter::build_sim($memory_11);
#line 330
undef($memory_11);
#line 330
$memory_12 = $memory_2->{'case'};
#line 330
$memory_11 = wprinter::build_sim($memory_12);
#line 330
undef($memory_12);
#line 330
$memory_5 = [$memory_6,$memory_7,$memory_8,$memory_9,$memory_10,$memory_11];
#line 330
undef($memory_6);
#line 330
undef($memory_7);
#line 330
undef($memory_8);
#line 330
undef($memory_9);
#line 330
undef($memory_10);
#line 330
undef($memory_11);
#line 330
$memory_4 = wprinter::build_pretty_op_l($memory_5);
#line 330
undef($memory_5);
#line 330
undef($memory_0);
#line 330
undef($memory_1);
#line 330
undef($memory_2);
#line 330
undef($memory_3);
#line 330
return $memory_4;
#line 330
undef($memory_4);
#line 330
undef($memory_3);
#line 330
undef($memory_2);
#line 338
goto label_1;
#line 338
label_11:
#line 338
$memory_2 = c_rt_lib::ov_as($memory_0, 'post_dec');
#line 339
$memory_5 = pretty_printer_priv::print_val($memory_2);
#line 339
$memory_7 = "--";
#line 339
$memory_6 = wprinter::build_sim($memory_7);
#line 339
undef($memory_7);
#line 339
$memory_4 = [$memory_5,$memory_6];
#line 339
undef($memory_5);
#line 339
undef($memory_6);
#line 339
$memory_3 = wprinter::build_pretty_op_l($memory_4);
#line 339
undef($memory_4);
#line 339
undef($memory_0);
#line 339
undef($memory_1);
#line 339
undef($memory_2);
#line 339
return $memory_3;
#line 339
undef($memory_3);
#line 339
undef($memory_2);
#line 340
goto label_1;
#line 340
label_12:
#line 340
$memory_2 = c_rt_lib::ov_as($memory_0, 'post_inc');
#line 341
$memory_5 = pretty_printer_priv::print_val($memory_2);
#line 341
$memory_7 = "++";
#line 341
$memory_6 = wprinter::build_sim($memory_7);
#line 341
undef($memory_7);
#line 341
$memory_4 = [$memory_5,$memory_6];
#line 341
undef($memory_5);
#line 341
undef($memory_6);
#line 341
$memory_3 = wprinter::build_pretty_op_l($memory_4);
#line 341
undef($memory_4);
#line 341
undef($memory_0);
#line 341
undef($memory_1);
#line 341
undef($memory_2);
#line 341
return $memory_3;
#line 341
undef($memory_3);
#line 341
undef($memory_2);
#line 342
goto label_1;
#line 342
label_13:
#line 342
$memory_2 = c_rt_lib::ov_as($memory_0, 'unary_op');
#line 343
$memory_5 = $memory_2->{'op'};
#line 343
$memory_4 = wprinter::build_sim($memory_5);
#line 343
undef($memory_5);
#line 343
$memory_6 = $memory_2->{'val'};
#line 343
$memory_5 = pretty_printer_priv::print_val($memory_6);
#line 343
undef($memory_6);
#line 343
$memory_3 = wprinter::build_pretty_bind($memory_4, $memory_5);
#line 343
undef($memory_5);
#line 343
undef($memory_4);
#line 343
undef($memory_0);
#line 343
undef($memory_1);
#line 343
undef($memory_2);
#line 343
return $memory_3;
#line 343
undef($memory_3);
#line 343
undef($memory_2);
#line 344
goto label_1;
#line 344
label_14:
#line 344
$memory_2 = c_rt_lib::ov_as($memory_0, 'fun_val');
#line 345
$memory_4 = $memory_2->{'name'};
#line 345
$memory_5 = $memory_2->{'module'};
#line 345
$memory_3 = pretty_printer_priv::get_fun_label($memory_4, $memory_5);
#line 345
undef($memory_5);
#line 345
undef($memory_4);
#line 345
$memory_4 = "(";
#line 345
$memory_3 = $memory_3 . $memory_4;
#line 345
undef($memory_4);
#line 346
$memory_5 = $memory_2->{'args'};
#line 346
$memory_4 = array::len($memory_5);
#line 346
undef($memory_5);
#line 346
$memory_5 = 1;
#line 346
$memory_4 = c_rt_lib::to_nl($memory_4 == $memory_5);
#line 346
undef($memory_5);
#line 346
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 346
if (c_rt_lib::check_true($memory_4)) {goto label_34;}
#line 347
$memory_5 = $memory_2->{'args'};
#line 347
$memory_6 = 0;
#line 347
$memory_5 = $memory_5->[$memory_6];
#line 347
undef($memory_6);
#line 347
$memory_5 = $memory_5->{'val'};
#line 348
$memory_7 = "hash_decl";
#line 348
$memory_6 = ov::is($memory_5, $memory_7);
#line 348
undef($memory_7);
#line 348
if (c_rt_lib::check_true($memory_6)) {goto label_37;}
#line 348
$memory_7 = "arr_decl";
#line 348
$memory_6 = ov::is($memory_5, $memory_7);
#line 348
undef($memory_7);
#line 348
label_37:
#line 348
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 348
if (c_rt_lib::check_true($memory_6)) {goto label_36;}
#line 349
$memory_8 = ")";
#line 349
$memory_7 = pretty_printer_priv::get_compressed_fun_val($memory_5, $memory_3, $memory_8);
#line 349
undef($memory_8);
#line 349
undef($memory_0);
#line 349
undef($memory_1);
#line 349
undef($memory_2);
#line 349
undef($memory_3);
#line 349
undef($memory_4);
#line 349
undef($memory_5);
#line 349
undef($memory_6);
#line 349
return $memory_7;
#line 349
undef($memory_7);
#line 350
goto label_36;
#line 350
label_36:
#line 350
undef($memory_6);
#line 350
undef($memory_5);
#line 351
goto label_38;
#line 351
label_34:
#line 351
$memory_4 = pretty_printer_priv::is_to_change_ov($memory_0);
#line 351
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 351
if (c_rt_lib::check_true($memory_4)) {goto label_38;}
#line 352
$memory_8 = $memory_2->{'args'};
#line 352
$memory_9 = 0;
#line 352
$memory_8 = $memory_8->[$memory_9];
#line 352
undef($memory_9);
#line 352
$memory_8 = $memory_8->{'val'};
#line 352
$memory_7 = pretty_printer_priv::print_val($memory_8);
#line 352
undef($memory_8);
#line 352
$memory_8 = wprinter::get_sep();
#line 352
$memory_10 = $memory_2->{'name'};
#line 352
$memory_9 = wprinter::build_sim($memory_10);
#line 352
undef($memory_10);
#line 352
$memory_10 = wprinter::get_sep();
#line 352
$memory_12 = ":";
#line 352
$memory_13 = $memory_2->{'args'};
#line 352
$memory_14 = 1;
#line 352
$memory_13 = $memory_13->[$memory_14];
#line 352
undef($memory_14);
#line 352
$memory_13 = $memory_13->{'val'};
#line 352
$memory_13 = c_rt_lib::ov_as($memory_13, 'string');
#line 352
$memory_13 = $memory_13->{'arr'};
#line 352
$memory_14 = 0;
#line 352
$memory_13 = $memory_13->[$memory_14];
#line 352
undef($memory_14);
#line 352
$memory_12 = $memory_12 . $memory_13;
#line 352
undef($memory_13);
#line 352
$memory_11 = wprinter::build_sim($memory_12);
#line 352
undef($memory_12);
#line 352
$memory_6 = [$memory_7,$memory_8,$memory_9,$memory_10,$memory_11];
#line 352
undef($memory_7);
#line 352
undef($memory_8);
#line 352
undef($memory_9);
#line 352
undef($memory_10);
#line 352
undef($memory_11);
#line 352
$memory_5 = wprinter::build_pretty_op_l($memory_6);
#line 352
undef($memory_6);
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
return $memory_5;
#line 352
undef($memory_5);
#line 359
goto label_38;
#line 359
label_38:
#line 359
undef($memory_4);
#line 361
$memory_5 = wprinter::build_sim($memory_3);
#line 361
$memory_4 = [$memory_5];
#line 361
undef($memory_5);
#line 362
$memory_6 = $memory_2->{'args'};
#line 362
$memory_5 = pretty_printer_priv::join_print_fun_arg($memory_6);
#line 362
undef($memory_6);
#line 362
array::append($memory_4, $memory_5);
#line 362
undef($memory_5);
#line 363
$memory_6 = ")";
#line 363
$memory_5 = wprinter::build_sim($memory_6);
#line 363
undef($memory_6);
#line 363
array::push($memory_4, $memory_5);
#line 363
undef($memory_5);
#line 364
$memory_7 = $memory_2->{'args'};
#line 364
$memory_5 = pretty_printer_priv::count_structs($memory_7);
#line 364
undef($memory_7);
#line 364
$memory_8 = $memory_2->{'args'};
#line 364
$memory_7 = array::len($memory_8);
#line 364
undef($memory_8);
#line 364
$memory_5 = c_rt_lib::to_nl($memory_5 == $memory_7);
#line 364
undef($memory_7);
#line 364
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 364
if (c_rt_lib::check_true($memory_6)) {goto label_42;}
#line 364
$memory_7 = $memory_2->{'args'};
#line 364
$memory_5 = array::len($memory_7);
#line 364
undef($memory_7);
#line 364
$memory_7 = 0;
#line 364
$memory_5 = c_rt_lib::to_nl($memory_5 > $memory_7);
#line 364
undef($memory_7);
#line 364
label_42:
#line 364
undef($memory_6);
#line 364
if (c_rt_lib::check_true($memory_5)) {goto label_41;}
#line 364
$memory_7 = $memory_2->{'args'};
#line 364
$memory_5 = array::len($memory_7);
#line 364
undef($memory_7);
#line 364
$memory_7 = 1;
#line 364
$memory_5 = c_rt_lib::to_nl($memory_5 == $memory_7);
#line 364
undef($memory_7);
#line 364
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 364
if (c_rt_lib::check_true($memory_6)) {goto label_43;}
#line 364
$memory_7 = $memory_2->{'args'};
#line 364
$memory_8 = 0;
#line 364
$memory_7 = $memory_7->[$memory_8];
#line 364
undef($memory_8);
#line 364
$memory_7 = $memory_7->{'val'};
#line 364
$memory_8 = "fun_val";
#line 364
$memory_5 = ov::is($memory_7, $memory_8);
#line 364
undef($memory_8);
#line 364
undef($memory_7);
#line 364
label_43:
#line 364
undef($memory_6);
#line 364
label_41:
#line 364
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 364
if (c_rt_lib::check_true($memory_5)) {goto label_40;}
#line 364
$memory_6 = wprinter::build_pretty_op_l($memory_4);
#line 364
undef($memory_0);
#line 364
undef($memory_1);
#line 364
undef($memory_2);
#line 364
undef($memory_3);
#line 364
undef($memory_4);
#line 364
undef($memory_5);
#line 364
return $memory_6;
#line 364
undef($memory_6);
#line 364
goto label_40;
#line 364
label_40:
#line 364
undef($memory_5);
#line 368
$memory_5 = wprinter::build_pretty_l($memory_4);
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
undef($memory_3);
#line 368
undef($memory_4);
#line 368
undef($memory_2);
#line 369
goto label_1;
#line 369
label_15:
#line 370
$memory_3 = 0;
#line 370
$memory_4 = "";
#line 370
$memory_4 = c_rt_lib::ov_mk_arg('sim', $memory_4);
#line 370
$memory_2 = {len => $memory_3,el => $memory_4,};
#line 370
undef($memory_3);
#line 370
undef($memory_4);
#line 370
undef($memory_0);
#line 370
undef($memory_1);
#line 370
return $memory_2;
#line 370
undef($memory_2);
#line 371
goto label_1;
#line 371
label_16:
#line 371
$memory_2 = c_rt_lib::ov_as($memory_0, 'arr_decl');
#line 372
$memory_4 = c_rt_lib::ov_mk_arg('arr_decl', $memory_2);
#line 372
$memory_5 = "";
#line 372
$memory_6 = "";
#line 372
$memory_3 = pretty_printer_priv::get_compressed_fun_val($memory_4, $memory_5, $memory_6);
#line 372
undef($memory_6);
#line 372
undef($memory_5);
#line 372
undef($memory_4);
#line 372
undef($memory_0);
#line 372
undef($memory_1);
#line 372
undef($memory_2);
#line 372
return $memory_3;
#line 372
undef($memory_3);
#line 372
undef($memory_2);
#line 373
goto label_1;
#line 373
label_17:
#line 373
$memory_2 = c_rt_lib::ov_as($memory_0, 'hash_decl');
#line 374
$memory_4 = pretty_printer_priv::join_print_hash_elem($memory_2);
#line 374
$memory_5 = "{";
#line 374
$memory_6 = "}";
#line 374
$memory_3 = wprinter::build_pretty_arr_decl($memory_4, $memory_5, $memory_6);
#line 374
undef($memory_6);
#line 374
undef($memory_5);
#line 374
undef($memory_4);
#line 374
undef($memory_0);
#line 374
undef($memory_1);
#line 374
undef($memory_2);
#line 374
return $memory_3;
#line 374
undef($memory_3);
#line 374
undef($memory_2);
#line 375
goto label_1;
#line 375
label_18:
#line 375
$memory_2 = c_rt_lib::ov_as($memory_0, 'fun_label');
#line 376
$memory_5 = $memory_2->{'name'};
#line 376
$memory_6 = $memory_2->{'module'};
#line 376
$memory_4 = pretty_printer_priv::get_fun_label($memory_5, $memory_6);
#line 376
undef($memory_6);
#line 376
undef($memory_5);
#line 376
$memory_3 = wprinter::build_sim($memory_4);
#line 376
undef($memory_4);
#line 376
undef($memory_0);
#line 376
undef($memory_1);
#line 376
undef($memory_2);
#line 376
return $memory_3;
#line 376
undef($memory_3);
#line 376
undef($memory_2);
#line 377
goto label_1;
#line 377
label_1:
#line 377
undef($memory_1);
#line 377
undef($memory_0);
#line 377
return;
}

sub pretty_printer_priv::print_cond_mod($$$$$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];$memory_2 = $_[2];$memory_3 = $_[3];$memory_4 = $_[4];$memory_5 = $_[5];
#line 382
$memory_7 = wprinter::build_sim($memory_1);
#line 382
$memory_8 = wprinter::get_sep();
#line 382
$memory_10 = pretty_printer_priv::join_print_var_decl($memory_3);
#line 382
$memory_9 = wprinter::build_pretty_l($memory_10);
#line 382
undef($memory_10);
#line 382
$memory_6 = [$memory_7,$memory_8,$memory_9];
#line 382
undef($memory_7);
#line 382
undef($memory_8);
#line 382
undef($memory_9);
#line 387
$memory_7 = array::len($memory_3);
#line 387
$memory_8 = 0;
#line 387
$memory_7 = c_rt_lib::to_nl($memory_7 > $memory_8);
#line 387
undef($memory_8);
#line 387
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 387
if (c_rt_lib::check_true($memory_7)) {goto label_2;}
#line 387
$memory_9 = " ";
#line 387
$memory_8 = wprinter::build_sim($memory_9);
#line 387
undef($memory_9);
#line 387
array::push($memory_6, $memory_8);
#line 387
undef($memory_8);
#line 387
goto label_2;
#line 387
label_2:
#line 387
undef($memory_7);
#line 388
$memory_7 = array::len($memory_3);
#line 388
$memory_8 = 0;
#line 388
$memory_7 = c_rt_lib::to_nl($memory_7 > $memory_8);
#line 388
undef($memory_8);
#line 388
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 388
if (c_rt_lib::check_true($memory_7)) {goto label_4;}
#line 388
$memory_9 = "(";
#line 388
$memory_8 = wprinter::build_sim($memory_9);
#line 388
undef($memory_9);
#line 388
array::push($memory_6, $memory_8);
#line 388
undef($memory_8);
#line 388
goto label_4;
#line 388
label_4:
#line 388
undef($memory_7);
#line 389
$memory_7 = pretty_printer_priv::print_val($memory_4);
#line 389
array::push($memory_6, $memory_7);
#line 389
undef($memory_7);
#line 390
$memory_7 = array::len($memory_3);
#line 390
$memory_8 = 0;
#line 390
$memory_7 = c_rt_lib::to_nl($memory_7 > $memory_8);
#line 390
undef($memory_8);
#line 390
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 390
if (c_rt_lib::check_true($memory_7)) {goto label_6;}
#line 390
$memory_9 = ")";
#line 390
$memory_8 = wprinter::build_sim($memory_9);
#line 390
undef($memory_9);
#line 390
array::push($memory_6, $memory_8);
#line 390
undef($memory_8);
#line 390
goto label_6;
#line 390
label_6:
#line 390
undef($memory_7);
#line 391
$memory_9 = pretty_printer_priv::print_simple_statement($memory_2);
#line 391
$memory_10 = wprinter::get_sep();
#line 391
$memory_11 = wprinter::build_pretty_op_l($memory_6);
#line 391
$memory_8 = [$memory_9,$memory_10,$memory_11];
#line 391
undef($memory_9);
#line 391
undef($memory_10);
#line 391
undef($memory_11);
#line 391
$memory_7 = wprinter::build_pretty_a($memory_8);
#line 391
undef($memory_8);
#line 391
wprinter::print_t($memory_0, $memory_7, $memory_5);
#line 391
undef($memory_7);
#line 393
$memory_7 = ";";
#line 393
pretty_printer_priv::state_print($memory_0, $memory_7);
#line 393
undef($memory_7);
#line 393
undef($memory_6);
#line 393
undef($memory_1);
#line 393
undef($memory_2);
#line 393
undef($memory_3);
#line 393
undef($memory_4);
#line 393
undef($memory_5);
#line 393
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub pretty_printer_priv::print_loop($$$$$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];$memory_2 = $_[2];$memory_3 = $_[3];$memory_4 = $_[4];$memory_5 = $_[5];
#line 398
$memory_7 = wprinter::build_sim($memory_1);
#line 398
$memory_8 = wprinter::get_sep();
#line 398
$memory_6 = [$memory_7,$memory_8];
#line 398
undef($memory_7);
#line 398
undef($memory_8);
#line 399
$memory_7 = pretty_printer_priv::join_print_var_decl($memory_3);
#line 399
array::append($memory_6, $memory_7);
#line 399
undef($memory_7);
#line 400
$memory_7 = array::len($memory_3);
#line 400
$memory_8 = 0;
#line 400
$memory_7 = c_rt_lib::to_nl($memory_7 > $memory_8);
#line 400
undef($memory_8);
#line 400
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 400
if (c_rt_lib::check_true($memory_7)) {goto label_2;}
#line 400
$memory_9 = " ";
#line 400
$memory_8 = wprinter::build_sim($memory_9);
#line 400
undef($memory_9);
#line 400
array::push($memory_6, $memory_8);
#line 400
undef($memory_8);
#line 400
goto label_2;
#line 400
label_2:
#line 400
undef($memory_7);
#line 401
$memory_8 = "(";
#line 401
$memory_7 = wprinter::build_sim($memory_8);
#line 401
undef($memory_8);
#line 401
array::push($memory_6, $memory_7);
#line 401
undef($memory_7);
#line 402
$memory_7 = pretty_printer_priv::print_val($memory_4);
#line 403
$memory_9 = $memory_7->{'el'};
#line 403
$memory_10 = "arr";
#line 403
$memory_8 = ov::is($memory_9, $memory_10);
#line 403
undef($memory_10);
#line 403
undef($memory_9);
#line 403
$memory_8 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 403
if (c_rt_lib::check_true($memory_8)) {goto label_4;}
#line 404
$memory_9 = $memory_7->{'el'};
#line 404
$memory_9 = c_rt_lib::ov_as($memory_9, 'arr');
#line 404
$memory_9 = $memory_9->{'arr'};
#line 404
array::append($memory_6, $memory_9);
#line 404
undef($memory_9);
#line 405
goto label_3;
#line 405
label_4:
#line 406
array::push($memory_6, $memory_7);
#line 407
goto label_3;
#line 407
label_3:
#line 407
undef($memory_8);
#line 409
$memory_9 = ")";
#line 409
$memory_8 = wprinter::build_sim($memory_9);
#line 409
undef($memory_9);
#line 409
array::push($memory_6, $memory_8);
#line 409
undef($memory_8);
#line 410
$memory_8 = wprinter::build_pretty_l($memory_6);
#line 410
wprinter::print_t($memory_0, $memory_8, $memory_5);
#line 410
undef($memory_8);
#line 411
pretty_printer_priv::print_st($memory_0, $memory_2, $memory_5);
#line 411
undef($memory_6);
#line 411
undef($memory_7);
#line 411
undef($memory_1);
#line 411
undef($memory_2);
#line 411
undef($memory_3);
#line 411
undef($memory_4);
#line 411
undef($memory_5);
#line 411
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub pretty_printer_priv::print_loop_or_mod($$$$$$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];$memory_2 = $_[2];$memory_3 = $_[3];$memory_4 = $_[4];$memory_5 = $_[5];$memory_6 = $_[6];
#line 416
$memory_7 = $memory_1;
#line 416
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 416
if (c_rt_lib::check_true($memory_7)) {goto label_2;}
#line 417
pretty_printer_priv::print_cond_mod($memory_0, $memory_2, $memory_3, $memory_4, $memory_5, $memory_6);
#line 418
goto label_1;
#line 418
label_2:
#line 419
pretty_printer_priv::print_loop($memory_0, $memory_2, $memory_3, $memory_4, $memory_5, $memory_6);
#line 420
goto label_1;
#line 420
label_1:
#line 420
undef($memory_7);
#line 420
undef($memory_1);
#line 420
undef($memory_2);
#line 420
undef($memory_3);
#line 420
undef($memory_4);
#line 420
undef($memory_5);
#line 420
undef($memory_6);
#line 420
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub pretty_printer_priv::print_try_ensure($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;$memory_0 = $_[0];$memory_1 = $_[1];
#line 425
$memory_3 = wprinter::build_sim($memory_1);
#line 425
$memory_2 = [$memory_3];
#line 425
undef($memory_3);
#line 426
$memory_3 = c_rt_lib::ov_is($memory_0, 'decl');
#line 426
if (c_rt_lib::check_true($memory_3)) {goto label_2;}
#line 428
$memory_3 = c_rt_lib::ov_is($memory_0, 'expr');
#line 428
if (c_rt_lib::check_true($memory_3)) {goto label_3;}
#line 430
$memory_3 = c_rt_lib::ov_is($memory_0, 'lval');
#line 430
if (c_rt_lib::check_true($memory_3)) {goto label_4;}
#line 430
$memory_3 = "NOMATCHALERT";
#line 430
$memory_3 = [$memory_3,$memory_0];
#line 430
die(dfile::ssave($memory_3));
#line 426
label_2:
#line 426
$memory_4 = c_rt_lib::ov_as($memory_0, 'decl');
#line 427
$memory_6 = wprinter::get_sep();
#line 427
$memory_7 = pretty_printer_priv::print_var_decl($memory_4);
#line 427
$memory_5 = [$memory_6,$memory_7];
#line 427
undef($memory_6);
#line 427
undef($memory_7);
#line 427
array::append($memory_2, $memory_5);
#line 427
undef($memory_5);
#line 427
undef($memory_4);
#line 428
goto label_1;
#line 428
label_3:
#line 428
$memory_4 = c_rt_lib::ov_as($memory_0, 'expr');
#line 429
$memory_6 = wprinter::get_sep();
#line 429
$memory_7 = pretty_printer_priv::print_val($memory_4);
#line 429
$memory_5 = [$memory_6,$memory_7];
#line 429
undef($memory_6);
#line 429
undef($memory_7);
#line 429
array::append($memory_2, $memory_5);
#line 429
undef($memory_5);
#line 429
undef($memory_4);
#line 430
goto label_1;
#line 430
label_4:
#line 430
$memory_4 = c_rt_lib::ov_as($memory_0, 'lval');
#line 431
$memory_6 = wprinter::get_sep();
#line 431
$memory_8 = $memory_4->{'left'};
#line 431
$memory_7 = pretty_printer_priv::print_val($memory_8);
#line 431
undef($memory_8);
#line 431
$memory_8 = wprinter::get_sep();
#line 431
$memory_10 = $memory_4->{'op'};
#line 431
$memory_9 = wprinter::build_sim($memory_10);
#line 431
undef($memory_10);
#line 431
$memory_10 = wprinter::get_sep();
#line 431
$memory_12 = $memory_4->{'right'};
#line 431
$memory_11 = pretty_printer_priv::print_val($memory_12);
#line 431
undef($memory_12);
#line 431
$memory_5 = [$memory_6,$memory_7,$memory_8,$memory_9,$memory_10,$memory_11];
#line 431
undef($memory_6);
#line 431
undef($memory_7);
#line 431
undef($memory_8);
#line 431
undef($memory_9);
#line 431
undef($memory_10);
#line 431
undef($memory_11);
#line 431
array::append($memory_2, $memory_5);
#line 431
undef($memory_5);
#line 431
undef($memory_4);
#line 433
goto label_1;
#line 433
label_1:
#line 433
undef($memory_3);
#line 434
$memory_3 = wprinter::build_pretty_l($memory_2);
#line 434
undef($memory_0);
#line 434
undef($memory_1);
#line 434
undef($memory_2);
#line 434
return $memory_3;
#line 434
undef($memory_3);
#line 434
undef($memory_2);
#line 434
undef($memory_0);
#line 434
undef($memory_1);
#line 434
return;
}

sub pretty_printer_priv::print_return($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;$memory_0 = $_[0];
#line 438
$memory_3 = "return";
#line 438
$memory_2 = wprinter::build_sim($memory_3);
#line 438
undef($memory_3);
#line 438
$memory_1 = [$memory_2];
#line 438
undef($memory_2);
#line 439
$memory_3 = "nop";
#line 439
$memory_2 = ov::is($memory_0, $memory_3);
#line 439
undef($memory_3);
#line 439
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 439
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 439
if (c_rt_lib::check_true($memory_2)) {goto label_2;}
#line 440
$memory_4 = wprinter::get_sep();
#line 440
$memory_5 = pretty_printer_priv::print_val($memory_0);
#line 440
$memory_3 = [$memory_4,$memory_5];
#line 440
undef($memory_4);
#line 440
undef($memory_5);
#line 440
array::append($memory_1, $memory_3);
#line 440
undef($memory_3);
#line 441
goto label_2;
#line 441
label_2:
#line 441
undef($memory_2);
#line 443
$memory_2 = wprinter::build_pretty_l($memory_1);
#line 443
undef($memory_0);
#line 443
undef($memory_1);
#line 443
return $memory_2;
#line 443
undef($memory_2);
#line 443
undef($memory_1);
#line 443
undef($memory_0);
#line 443
return;
}

sub pretty_printer_priv::print_sim_value($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;$memory_0 = $_[0];
#line 447
$memory_1 = pretty_printer_priv::print_val($memory_0);
#line 448
$memory_3 = $memory_1->{'el'};
#line 448
$memory_4 = "arr";
#line 448
$memory_2 = ov::is($memory_3, $memory_4);
#line 448
undef($memory_4);
#line 448
undef($memory_3);
#line 448
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 448
if (c_rt_lib::check_true($memory_2)) {goto label_2;}
#line 449
$memory_4 = $memory_1->{'el'};
#line 449
$memory_4 = c_rt_lib::ov_as($memory_4, 'arr');
#line 449
$memory_4 = $memory_4->{'arr'};
#line 449
$memory_3 = wprinter::build_pretty_l($memory_4);
#line 449
undef($memory_4);
#line 449
$memory_1 = $memory_3;
#line 449
undef($memory_3);
#line 450
goto label_2;
#line 450
label_2:
#line 450
undef($memory_2);
#line 452
undef($memory_0);
#line 452
return $memory_1;
#line 452
undef($memory_1);
#line 452
undef($memory_0);
#line 452
return;
}

sub pretty_printer_priv::__print_break() {
my $memory_0;my $memory_1;
#line 456
$memory_1 = "break";
#line 456
$memory_0 = wprinter::build_sim($memory_1);
#line 456
undef($memory_1);
#line 456
return $memory_0;
#line 456
undef($memory_0);
#line 456
return;
}

my $_print_break;
sub pretty_printer_priv::print_break() {
	$_print_break = pretty_printer_priv::__print_break() unless defined $_print_break;
	return $_print_break;
}

sub pretty_printer_priv::__print_continue() {
my $memory_0;my $memory_1;
#line 460
$memory_1 = "continue";
#line 460
$memory_0 = wprinter::build_sim($memory_1);
#line 460
undef($memory_1);
#line 460
return $memory_0;
#line 460
undef($memory_0);
#line 460
return;
}

my $_print_continue;
sub pretty_printer_priv::print_continue() {
	$_print_continue = pretty_printer_priv::__print_continue() unless defined $_print_continue;
	return $_print_continue;
}

sub pretty_printer_priv::print_die($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;$memory_0 = $_[0];
#line 464
$memory_3 = "die";
#line 464
$memory_2 = wprinter::build_sim($memory_3);
#line 464
undef($memory_3);
#line 464
$memory_1 = [$memory_2];
#line 464
undef($memory_2);
#line 465
$memory_2 = array::len($memory_0);
#line 465
$memory_3 = 0;
#line 465
$memory_2 = c_rt_lib::to_nl($memory_2 > $memory_3);
#line 465
undef($memory_3);
#line 465
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 465
if (c_rt_lib::check_true($memory_2)) {goto label_2;}
#line 465
$memory_5 = "(";
#line 465
$memory_4 = wprinter::build_sim($memory_5);
#line 465
undef($memory_5);
#line 465
$memory_6 = pretty_printer_priv::join_print_val($memory_0);
#line 465
$memory_5 = wprinter::build_pretty_l($memory_6);
#line 465
undef($memory_6);
#line 465
$memory_7 = ")";
#line 465
$memory_6 = wprinter::build_sim($memory_7);
#line 465
undef($memory_7);
#line 465
$memory_3 = [$memory_4,$memory_5,$memory_6];
#line 465
undef($memory_4);
#line 465
undef($memory_5);
#line 465
undef($memory_6);
#line 465
array::append($memory_1, $memory_3);
#line 465
undef($memory_3);
#line 465
goto label_2;
#line 465
label_2:
#line 465
undef($memory_2);
#line 472
$memory_2 = wprinter::build_pretty_a($memory_1);
#line 472
undef($memory_0);
#line 472
undef($memory_1);
#line 472
return $memory_2;
#line 472
undef($memory_2);
#line 472
undef($memory_1);
#line 472
undef($memory_0);
#line 472
return;
}

sub pretty_printer_priv::print_simple_statement($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;$memory_0 = $_[0];
#line 476
$memory_1 = $memory_0->{'cmd'};
#line 476
$memory_1 = c_rt_lib::ov_is($memory_1, 'value');
#line 476
$memory_1 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_1));
#line 476
if (c_rt_lib::check_true($memory_1)) {goto label_2;}
#line 477
$memory_3 = $memory_0->{'cmd'};
#line 477
$memory_3 = c_rt_lib::ov_as($memory_3, 'value');
#line 477
$memory_2 = pretty_printer_priv::print_sim_value($memory_3);
#line 477
undef($memory_3);
#line 477
undef($memory_0);
#line 477
undef($memory_1);
#line 477
return $memory_2;
#line 477
undef($memory_2);
#line 478
goto label_1;
#line 478
label_2:
#line 478
$memory_1 = $memory_0->{'cmd'};
#line 478
$memory_1 = c_rt_lib::ov_is($memory_1, 'return');
#line 478
$memory_1 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_1));
#line 478
if (c_rt_lib::check_true($memory_1)) {goto label_3;}
#line 479
$memory_3 = $memory_0->{'cmd'};
#line 479
$memory_3 = c_rt_lib::ov_as($memory_3, 'return');
#line 479
$memory_2 = pretty_printer_priv::print_return($memory_3);
#line 479
undef($memory_3);
#line 479
undef($memory_0);
#line 479
undef($memory_1);
#line 479
return $memory_2;
#line 479
undef($memory_2);
#line 480
goto label_1;
#line 480
label_3:
#line 480
$memory_1 = $memory_0->{'cmd'};
#line 480
$memory_1 = c_rt_lib::ov_is($memory_1, 'break');
#line 480
$memory_1 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_1));
#line 480
if (c_rt_lib::check_true($memory_1)) {goto label_4;}
#line 481
$memory_2 = pretty_printer_priv::print_break();
#line 481
undef($memory_0);
#line 481
undef($memory_1);
#line 481
return $memory_2;
#line 481
undef($memory_2);
#line 482
goto label_1;
#line 482
label_4:
#line 482
$memory_1 = $memory_0->{'cmd'};
#line 482
$memory_1 = c_rt_lib::ov_is($memory_1, 'continue');
#line 482
$memory_1 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_1));
#line 482
if (c_rt_lib::check_true($memory_1)) {goto label_5;}
#line 483
$memory_2 = pretty_printer_priv::print_continue();
#line 483
undef($memory_0);
#line 483
undef($memory_1);
#line 483
return $memory_2;
#line 483
undef($memory_2);
#line 484
goto label_1;
#line 484
label_5:
#line 484
$memory_1 = $memory_0->{'cmd'};
#line 484
$memory_1 = c_rt_lib::ov_is($memory_1, 'die');
#line 484
$memory_1 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_1));
#line 484
if (c_rt_lib::check_true($memory_1)) {goto label_6;}
#line 485
$memory_3 = $memory_0->{'cmd'};
#line 485
$memory_3 = c_rt_lib::ov_as($memory_3, 'die');
#line 485
$memory_2 = pretty_printer_priv::print_die($memory_3);
#line 485
undef($memory_3);
#line 485
undef($memory_0);
#line 485
undef($memory_1);
#line 485
return $memory_2;
#line 485
undef($memory_2);
#line 486
goto label_1;
#line 486
label_6:
#line 486
$memory_1 = $memory_0->{'cmd'};
#line 486
$memory_1 = c_rt_lib::ov_is($memory_1, 'try');
#line 486
$memory_1 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_1));
#line 486
if (c_rt_lib::check_true($memory_1)) {goto label_7;}
#line 487
$memory_3 = $memory_0->{'cmd'};
#line 487
$memory_3 = c_rt_lib::ov_as($memory_3, 'try');
#line 487
$memory_4 = "try";
#line 487
$memory_2 = pretty_printer_priv::print_try_ensure($memory_3, $memory_4);
#line 487
undef($memory_4);
#line 487
undef($memory_3);
#line 487
undef($memory_0);
#line 487
undef($memory_1);
#line 487
return $memory_2;
#line 487
undef($memory_2);
#line 488
goto label_1;
#line 488
label_7:
#line 488
$memory_1 = $memory_0->{'cmd'};
#line 488
$memory_1 = c_rt_lib::ov_is($memory_1, 'ensure');
#line 488
$memory_1 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_1));
#line 488
if (c_rt_lib::check_true($memory_1)) {goto label_8;}
#line 489
$memory_3 = $memory_0->{'cmd'};
#line 489
$memory_3 = c_rt_lib::ov_as($memory_3, 'ensure');
#line 489
$memory_4 = "ensure";
#line 489
$memory_2 = pretty_printer_priv::print_try_ensure($memory_3, $memory_4);
#line 489
undef($memory_4);
#line 489
undef($memory_3);
#line 489
undef($memory_0);
#line 489
undef($memory_1);
#line 489
return $memory_2;
#line 489
undef($memory_2);
#line 490
goto label_1;
#line 490
label_8:
#line 491
$memory_2 = [$memory_0];
#line 491
die(dfile::ssave($memory_2));
#line 491
undef($memory_2);
#line 492
goto label_1;
#line 492
label_1:
#line 492
undef($memory_1);
#line 492
undef($memory_0);
#line 492
return;
}

sub pretty_printer_priv::flush_sim_statement($$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];$memory_2 = $_[2];
#line 497
wprinter::print_t($memory_0, $memory_1, $memory_2);
#line 498
$memory_3 = ";";
#line 498
pretty_printer_priv::state_print($memory_0, $memory_3);
#line 498
undef($memory_3);
#line 498
undef($memory_1);
#line 498
undef($memory_2);
#line 498
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub pretty_printer_priv::print_cmd($$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;my $memory_13;my $memory_14;my $memory_15;my $memory_16;my $memory_17;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];$memory_2 = $_[2];
#line 502
$memory_3 = $memory_1->{'cmd'};
#line 502
$memory_4 = c_rt_lib::ov_is($memory_3, 'if');
#line 502
if (c_rt_lib::check_true($memory_4)) {goto label_2;}
#line 512
$memory_4 = c_rt_lib::ov_is($memory_3, 'while');
#line 512
if (c_rt_lib::check_true($memory_4)) {goto label_3;}
#line 514
$memory_4 = c_rt_lib::ov_is($memory_3, 'for');
#line 514
if (c_rt_lib::check_true($memory_4)) {goto label_4;}
#line 533
$memory_4 = c_rt_lib::ov_is($memory_3, 'block');
#line 533
if (c_rt_lib::check_true($memory_4)) {goto label_5;}
#line 540
$memory_4 = c_rt_lib::ov_is($memory_3, 'nop');
#line 540
if (c_rt_lib::check_true($memory_4)) {goto label_6;}
#line 542
$memory_4 = c_rt_lib::ov_is($memory_3, 'match');
#line 542
if (c_rt_lib::check_true($memory_4)) {goto label_7;}
#line 553
$memory_4 = c_rt_lib::ov_is($memory_3, 'fora');
#line 553
if (c_rt_lib::check_true($memory_4)) {goto label_8;}
#line 555
$memory_4 = c_rt_lib::ov_is($memory_3, 'forh');
#line 555
if (c_rt_lib::check_true($memory_4)) {goto label_9;}
#line 558
$memory_4 = c_rt_lib::ov_is($memory_3, 'rep');
#line 558
if (c_rt_lib::check_true($memory_4)) {goto label_10;}
#line 560
$memory_4 = c_rt_lib::ov_is($memory_3, 'loop');
#line 560
if (c_rt_lib::check_true($memory_4)) {goto label_11;}
#line 563
$memory_4 = c_rt_lib::ov_is($memory_3, 'if_mod');
#line 563
if (c_rt_lib::check_true($memory_4)) {goto label_12;}
#line 565
$memory_4 = c_rt_lib::ov_is($memory_3, 'unless_mod');
#line 565
if (c_rt_lib::check_true($memory_4)) {goto label_13;}
#line 567
$memory_4 = c_rt_lib::ov_is($memory_3, 'value');
#line 567
if (c_rt_lib::check_true($memory_4)) {goto label_14;}
#line 569
$memory_4 = c_rt_lib::ov_is($memory_3, 'try');
#line 569
if (c_rt_lib::check_true($memory_4)) {goto label_15;}
#line 571
$memory_4 = c_rt_lib::ov_is($memory_3, 'ensure');
#line 571
if (c_rt_lib::check_true($memory_4)) {goto label_16;}
#line 573
$memory_4 = c_rt_lib::ov_is($memory_3, 'return');
#line 573
if (c_rt_lib::check_true($memory_4)) {goto label_17;}
#line 575
$memory_4 = c_rt_lib::ov_is($memory_3, 'break');
#line 575
if (c_rt_lib::check_true($memory_4)) {goto label_18;}
#line 577
$memory_4 = c_rt_lib::ov_is($memory_3, 'continue');
#line 577
if (c_rt_lib::check_true($memory_4)) {goto label_19;}
#line 579
$memory_4 = c_rt_lib::ov_is($memory_3, 'die');
#line 579
if (c_rt_lib::check_true($memory_4)) {goto label_20;}
#line 581
$memory_4 = c_rt_lib::ov_is($memory_3, 'var_decl');
#line 581
if (c_rt_lib::check_true($memory_4)) {goto label_21;}
#line 581
$memory_4 = "NOMATCHALERT";
#line 581
$memory_4 = [$memory_4,$memory_3];
#line 581
die(dfile::ssave($memory_4));
#line 502
label_2:
#line 502
$memory_5 = c_rt_lib::ov_as($memory_3, 'if');
#line 503
$memory_6 = "if";
#line 503
$memory_7 = $memory_5->{'if'};
#line 503
$memory_8 = [];
#line 503
$memory_9 = $memory_5->{'cond'};
#line 503
pretty_printer_priv::print_loop($memory_0, $memory_6, $memory_7, $memory_8, $memory_9, $memory_2);
#line 503
undef($memory_9);
#line 503
undef($memory_8);
#line 503
undef($memory_7);
#line 503
undef($memory_6);
#line 504
$memory_6 = $memory_5->{'elsif'};
#line 504
$memory_8 = 0;
#line 504
$memory_9 = 1;
#line 504
$memory_10 = c_rt_lib::array_len($memory_6);
#line 504
label_24:
#line 504
$memory_11 = c_rt_lib::to_nl($memory_8 >= $memory_10);
#line 504
if (c_rt_lib::check_true($memory_11)) {goto label_22;}
#line 504
$memory_7 = $memory_6->[$memory_8];
#line 505
$memory_12 = " ";
#line 505
pretty_printer_priv::state_print($memory_0, $memory_12);
#line 505
undef($memory_12);
#line 506
$memory_12 = "elsif";
#line 506
$memory_13 = $memory_7->{'cmd'};
#line 506
$memory_14 = [];
#line 506
$memory_15 = $memory_7->{'cond'};
#line 506
pretty_printer_priv::print_loop($memory_0, $memory_12, $memory_13, $memory_14, $memory_15, $memory_2);
#line 506
undef($memory_15);
#line 506
undef($memory_14);
#line 506
undef($memory_13);
#line 506
undef($memory_12);
#line 507
$memory_8 = $memory_8 + $memory_9;
#line 507
goto label_24;
#line 507
label_22:
#line 507
undef($memory_6);
#line 507
undef($memory_7);
#line 507
undef($memory_8);
#line 507
undef($memory_9);
#line 507
undef($memory_10);
#line 507
undef($memory_11);
#line 508
$memory_7 = $memory_5->{'else'};
#line 508
$memory_7 = $memory_7->{'cmd'};
#line 508
$memory_8 = "nop";
#line 508
$memory_6 = ov::is($memory_7, $memory_8);
#line 508
undef($memory_8);
#line 508
undef($memory_7);
#line 508
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 508
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 508
if (c_rt_lib::check_true($memory_6)) {goto label_26;}
#line 509
$memory_7 = " else";
#line 509
pretty_printer_priv::state_print($memory_0, $memory_7);
#line 509
undef($memory_7);
#line 510
$memory_7 = $memory_5->{'else'};
#line 510
pretty_printer_priv::print_st($memory_0, $memory_7, $memory_2);
#line 510
undef($memory_7);
#line 511
goto label_26;
#line 511
label_26:
#line 511
undef($memory_6);
#line 511
undef($memory_5);
#line 512
goto label_1;
#line 512
label_3:
#line 512
$memory_5 = c_rt_lib::ov_as($memory_3, 'while');
#line 513
$memory_6 = $memory_5->{'short'};
#line 513
$memory_7 = "while";
#line 513
$memory_8 = $memory_5->{'cmd'};
#line 513
$memory_9 = [];
#line 513
$memory_10 = $memory_5->{'cond'};
#line 513
pretty_printer_priv::print_loop_or_mod($memory_0, $memory_6, $memory_7, $memory_8, $memory_9, $memory_10, $memory_2);
#line 513
undef($memory_10);
#line 513
undef($memory_9);
#line 513
undef($memory_8);
#line 513
undef($memory_7);
#line 513
undef($memory_6);
#line 513
undef($memory_5);
#line 514
goto label_1;
#line 514
label_4:
#line 514
$memory_5 = c_rt_lib::ov_as($memory_3, 'for');
#line 516
$memory_7 = $memory_5->{'start'};
#line 516
$memory_8 = c_rt_lib::ov_is($memory_7, 'value');
#line 516
if (c_rt_lib::check_true($memory_8)) {goto label_28;}
#line 518
$memory_8 = c_rt_lib::ov_is($memory_7, 'var_decl');
#line 518
if (c_rt_lib::check_true($memory_8)) {goto label_29;}
#line 518
$memory_8 = "NOMATCHALERT";
#line 518
$memory_8 = [$memory_8,$memory_7];
#line 518
die(dfile::ssave($memory_8));
#line 516
label_28:
#line 516
$memory_9 = c_rt_lib::ov_as($memory_7, 'value');
#line 517
$memory_10 = pretty_printer_priv::print_val($memory_9);
#line 517
$memory_6 = $memory_10;
#line 517
undef($memory_10);
#line 517
undef($memory_9);
#line 518
goto label_27;
#line 518
label_29:
#line 518
$memory_9 = c_rt_lib::ov_as($memory_7, 'var_decl');
#line 519
$memory_10 = pretty_printer_priv::print_var_decl($memory_9);
#line 519
$memory_6 = $memory_10;
#line 519
undef($memory_10);
#line 519
undef($memory_9);
#line 520
goto label_27;
#line 520
label_27:
#line 520
undef($memory_7);
#line 520
undef($memory_8);
#line 521
$memory_10 = "for(";
#line 521
$memory_9 = wprinter::build_sim($memory_10);
#line 521
undef($memory_10);
#line 521
$memory_11 = ";";
#line 521
$memory_10 = wprinter::build_sim($memory_11);
#line 521
undef($memory_11);
#line 521
$memory_11 = wprinter::get_sep();
#line 521
$memory_13 = $memory_5->{'cond'};
#line 521
$memory_12 = pretty_printer_priv::print_val($memory_13);
#line 521
undef($memory_13);
#line 521
$memory_14 = ";";
#line 521
$memory_13 = wprinter::build_sim($memory_14);
#line 521
undef($memory_14);
#line 521
$memory_14 = wprinter::get_sep();
#line 521
$memory_16 = $memory_5->{'iter'};
#line 521
$memory_15 = pretty_printer_priv::print_val($memory_16);
#line 521
undef($memory_16);
#line 521
$memory_17 = ") ";
#line 521
$memory_16 = wprinter::build_sim($memory_17);
#line 521
undef($memory_17);
#line 521
$memory_8 = [$memory_9,$memory_6,$memory_10,$memory_11,$memory_12,$memory_13,$memory_14,$memory_15,$memory_16];
#line 521
undef($memory_9);
#line 521
undef($memory_10);
#line 521
undef($memory_11);
#line 521
undef($memory_12);
#line 521
undef($memory_13);
#line 521
undef($memory_14);
#line 521
undef($memory_15);
#line 521
undef($memory_16);
#line 521
$memory_7 = wprinter::build_pretty_a($memory_8);
#line 521
undef($memory_8);
#line 521
wprinter::print_t($memory_0, $memory_7, $memory_2);
#line 521
undef($memory_7);
#line 532
$memory_7 = $memory_5->{'cmd'};
#line 532
pretty_printer_priv::print_cmd($memory_0, $memory_7, $memory_2);
#line 532
undef($memory_7);
#line 532
undef($memory_6);
#line 532
undef($memory_5);
#line 533
goto label_1;
#line 533
label_5:
#line 533
$memory_5 = c_rt_lib::ov_as($memory_3, 'block');
#line 534
$memory_6 = "{";
#line 534
pretty_printer_priv::state_print($memory_0, $memory_6);
#line 534
undef($memory_6);
#line 535
$memory_7 = 0;
#line 535
$memory_8 = 1;
#line 535
$memory_9 = c_rt_lib::array_len($memory_5);
#line 535
label_32:
#line 535
$memory_10 = c_rt_lib::to_nl($memory_7 >= $memory_9);
#line 535
if (c_rt_lib::check_true($memory_10)) {goto label_30;}
#line 535
$memory_6 = $memory_5->[$memory_7];
#line 536
$memory_11 = string::lf();
#line 536
$memory_13 = 1;
#line 536
$memory_13 = $memory_2 + $memory_13;
#line 536
$memory_12 = pretty_printer_priv::pind($memory_13);
#line 536
undef($memory_13);
#line 536
$memory_11 = $memory_11 . $memory_12;
#line 536
undef($memory_12);
#line 536
pretty_printer_priv::state_print($memory_0, $memory_11);
#line 536
undef($memory_11);
#line 537
$memory_11 = 1;
#line 537
$memory_11 = $memory_2 + $memory_11;
#line 537
pretty_printer_priv::print_cmd($memory_0, $memory_6, $memory_11);
#line 537
undef($memory_11);
#line 538
$memory_7 = $memory_7 + $memory_8;
#line 538
goto label_32;
#line 538
label_30:
#line 538
undef($memory_6);
#line 538
undef($memory_7);
#line 538
undef($memory_8);
#line 538
undef($memory_9);
#line 538
undef($memory_10);
#line 539
$memory_6 = string::lf();
#line 539
$memory_7 = pretty_printer_priv::pind($memory_2);
#line 539
$memory_6 = $memory_6 . $memory_7;
#line 539
undef($memory_7);
#line 539
$memory_7 = "}";
#line 539
$memory_6 = $memory_6 . $memory_7;
#line 539
undef($memory_7);
#line 539
pretty_printer_priv::state_print($memory_0, $memory_6);
#line 539
undef($memory_6);
#line 539
undef($memory_5);
#line 540
goto label_1;
#line 540
label_6:
#line 541
$memory_5 = ";";
#line 541
pretty_printer_priv::state_print($memory_0, $memory_5);
#line 541
undef($memory_5);
#line 542
goto label_1;
#line 542
label_7:
#line 542
$memory_5 = c_rt_lib::ov_as($memory_3, 'match');
#line 543
$memory_9 = "match (";
#line 543
$memory_8 = wprinter::build_sim($memory_9);
#line 543
undef($memory_9);
#line 543
$memory_10 = $memory_5->{'val'};
#line 543
$memory_9 = pretty_printer_priv::print_val($memory_10);
#line 543
undef($memory_10);
#line 543
$memory_11 = ")";
#line 543
$memory_10 = wprinter::build_sim($memory_11);
#line 543
undef($memory_11);
#line 543
$memory_7 = [$memory_8,$memory_9,$memory_10];
#line 543
undef($memory_8);
#line 543
undef($memory_9);
#line 543
undef($memory_10);
#line 543
$memory_6 = wprinter::build_pretty_a($memory_7);
#line 543
undef($memory_7);
#line 543
wprinter::print_t($memory_0, $memory_6, $memory_2);
#line 543
undef($memory_6);
#line 548
$memory_6 = $memory_5->{'branch_list'};
#line 548
$memory_8 = 0;
#line 548
$memory_9 = 1;
#line 548
$memory_10 = c_rt_lib::array_len($memory_6);
#line 548
label_35:
#line 548
$memory_11 = c_rt_lib::to_nl($memory_8 >= $memory_10);
#line 548
if (c_rt_lib::check_true($memory_11)) {goto label_33;}
#line 548
$memory_7 = $memory_6->[$memory_8];
#line 549
$memory_12 = " case ";
#line 549
pretty_printer_priv::state_print($memory_0, $memory_12);
#line 549
undef($memory_12);
#line 550
$memory_13 = $memory_7->{'variant'};
#line 550
$memory_12 = pretty_printer_priv::print_variant_case_decl($memory_13);
#line 550
undef($memory_13);
#line 550
$memory_13 = 1;
#line 550
$memory_13 = $memory_2 + $memory_13;
#line 550
wprinter::print_t($memory_0, $memory_12, $memory_13);
#line 550
undef($memory_13);
#line 550
undef($memory_12);
#line 551
$memory_12 = $memory_7->{'cmd'};
#line 551
pretty_printer_priv::print_st($memory_0, $memory_12, $memory_2);
#line 551
undef($memory_12);
#line 552
$memory_8 = $memory_8 + $memory_9;
#line 552
goto label_35;
#line 552
label_33:
#line 552
undef($memory_6);
#line 552
undef($memory_7);
#line 552
undef($memory_8);
#line 552
undef($memory_9);
#line 552
undef($memory_10);
#line 552
undef($memory_11);
#line 552
undef($memory_5);
#line 553
goto label_1;
#line 553
label_8:
#line 553
$memory_5 = c_rt_lib::ov_as($memory_3, 'fora');
#line 554
$memory_6 = $memory_5->{'short'};
#line 554
$memory_7 = "fora";
#line 554
$memory_8 = $memory_5->{'cmd'};
#line 554
$memory_10 = $memory_5->{'iter'};
#line 554
$memory_9 = [$memory_10];
#line 554
undef($memory_10);
#line 554
$memory_10 = $memory_5->{'array'};
#line 554
pretty_printer_priv::print_loop_or_mod($memory_0, $memory_6, $memory_7, $memory_8, $memory_9, $memory_10, $memory_2);
#line 554
undef($memory_10);
#line 554
undef($memory_9);
#line 554
undef($memory_8);
#line 554
undef($memory_7);
#line 554
undef($memory_6);
#line 554
undef($memory_5);
#line 555
goto label_1;
#line 555
label_9:
#line 555
$memory_5 = c_rt_lib::ov_as($memory_3, 'forh');
#line 556
$memory_6 = $memory_5->{'short'};
#line 556
$memory_7 = "forh";
#line 556
$memory_8 = $memory_5->{'cmd'};
#line 556
$memory_10 = $memory_5->{'key'};
#line 556
$memory_11 = $memory_5->{'val'};
#line 556
$memory_9 = [$memory_10,$memory_11];
#line 556
undef($memory_10);
#line 556
undef($memory_11);
#line 556
$memory_10 = $memory_5->{'hash'};
#line 556
pretty_printer_priv::print_loop_or_mod($memory_0, $memory_6, $memory_7, $memory_8, $memory_9, $memory_10, $memory_2);
#line 556
undef($memory_10);
#line 556
undef($memory_9);
#line 556
undef($memory_8);
#line 556
undef($memory_7);
#line 556
undef($memory_6);
#line 556
undef($memory_5);
#line 558
goto label_1;
#line 558
label_10:
#line 558
$memory_5 = c_rt_lib::ov_as($memory_3, 'rep');
#line 559
$memory_6 = $memory_5->{'short'};
#line 559
$memory_7 = "rep";
#line 559
$memory_8 = $memory_5->{'cmd'};
#line 559
$memory_10 = $memory_5->{'iter'};
#line 559
$memory_9 = [$memory_10];
#line 559
undef($memory_10);
#line 559
$memory_10 = $memory_5->{'count'};
#line 559
pretty_printer_priv::print_loop_or_mod($memory_0, $memory_6, $memory_7, $memory_8, $memory_9, $memory_10, $memory_2);
#line 559
undef($memory_10);
#line 559
undef($memory_9);
#line 559
undef($memory_8);
#line 559
undef($memory_7);
#line 559
undef($memory_6);
#line 559
undef($memory_5);
#line 560
goto label_1;
#line 560
label_11:
#line 560
$memory_5 = c_rt_lib::ov_as($memory_3, 'loop');
#line 561
$memory_6 = "loop";
#line 561
pretty_printer_priv::state_print($memory_0, $memory_6);
#line 561
undef($memory_6);
#line 562
pretty_printer_priv::print_st($memory_0, $memory_5, $memory_2);
#line 562
undef($memory_5);
#line 563
goto label_1;
#line 563
label_12:
#line 563
$memory_5 = c_rt_lib::ov_as($memory_3, 'if_mod');
#line 564
$memory_6 = "if";
#line 564
$memory_7 = $memory_5->{'cmd'};
#line 564
$memory_8 = [];
#line 564
$memory_9 = $memory_5->{'cond'};
#line 564
pretty_printer_priv::print_cond_mod($memory_0, $memory_6, $memory_7, $memory_8, $memory_9, $memory_2);
#line 564
undef($memory_9);
#line 564
undef($memory_8);
#line 564
undef($memory_7);
#line 564
undef($memory_6);
#line 564
undef($memory_5);
#line 565
goto label_1;
#line 565
label_13:
#line 565
$memory_5 = c_rt_lib::ov_as($memory_3, 'unless_mod');
#line 566
$memory_6 = "unless";
#line 566
$memory_7 = $memory_5->{'cmd'};
#line 566
$memory_8 = [];
#line 566
$memory_9 = $memory_5->{'cond'};
#line 566
pretty_printer_priv::print_cond_mod($memory_0, $memory_6, $memory_7, $memory_8, $memory_9, $memory_2);
#line 566
undef($memory_9);
#line 566
undef($memory_8);
#line 566
undef($memory_7);
#line 566
undef($memory_6);
#line 566
undef($memory_5);
#line 567
goto label_1;
#line 567
label_14:
#line 567
$memory_5 = c_rt_lib::ov_as($memory_3, 'value');
#line 568
$memory_6 = pretty_printer_priv::print_sim_value($memory_5);
#line 568
pretty_printer_priv::flush_sim_statement($memory_0, $memory_6, $memory_2);
#line 568
undef($memory_6);
#line 568
undef($memory_5);
#line 569
goto label_1;
#line 569
label_15:
#line 569
$memory_5 = c_rt_lib::ov_as($memory_3, 'try');
#line 570
$memory_7 = "try";
#line 570
$memory_6 = pretty_printer_priv::print_try_ensure($memory_5, $memory_7);
#line 570
undef($memory_7);
#line 570
pretty_printer_priv::flush_sim_statement($memory_0, $memory_6, $memory_2);
#line 570
undef($memory_6);
#line 570
undef($memory_5);
#line 571
goto label_1;
#line 571
label_16:
#line 571
$memory_5 = c_rt_lib::ov_as($memory_3, 'ensure');
#line 572
$memory_7 = "ensure";
#line 572
$memory_6 = pretty_printer_priv::print_try_ensure($memory_5, $memory_7);
#line 572
undef($memory_7);
#line 572
pretty_printer_priv::flush_sim_statement($memory_0, $memory_6, $memory_2);
#line 572
undef($memory_6);
#line 572
undef($memory_5);
#line 573
goto label_1;
#line 573
label_17:
#line 573
$memory_5 = c_rt_lib::ov_as($memory_3, 'return');
#line 574
$memory_6 = pretty_printer_priv::print_return($memory_5);
#line 574
pretty_printer_priv::flush_sim_statement($memory_0, $memory_6, $memory_2);
#line 574
undef($memory_6);
#line 574
undef($memory_5);
#line 575
goto label_1;
#line 575
label_18:
#line 576
$memory_5 = pretty_printer_priv::print_break();
#line 576
pretty_printer_priv::flush_sim_statement($memory_0, $memory_5, $memory_2);
#line 576
undef($memory_5);
#line 577
goto label_1;
#line 577
label_19:
#line 578
$memory_5 = pretty_printer_priv::print_continue();
#line 578
pretty_printer_priv::flush_sim_statement($memory_0, $memory_5, $memory_2);
#line 578
undef($memory_5);
#line 579
goto label_1;
#line 579
label_20:
#line 579
$memory_5 = c_rt_lib::ov_as($memory_3, 'die');
#line 580
$memory_6 = pretty_printer_priv::print_die($memory_5);
#line 580
pretty_printer_priv::flush_sim_statement($memory_0, $memory_6, $memory_2);
#line 580
undef($memory_6);
#line 580
undef($memory_5);
#line 581
goto label_1;
#line 581
label_21:
#line 581
$memory_5 = c_rt_lib::ov_as($memory_3, 'var_decl');
#line 582
$memory_6 = pretty_printer_priv::print_var_decl($memory_5);
#line 582
pretty_printer_priv::flush_sim_statement($memory_0, $memory_6, $memory_2);
#line 582
undef($memory_6);
#line 582
undef($memory_5);
#line 583
goto label_1;
#line 583
label_1:
#line 583
undef($memory_3);
#line 583
undef($memory_4);
#line 583
undef($memory_1);
#line 583
undef($memory_2);
#line 583
$_[0] = $memory_0;return;
$_[0] = $memory_0;}
