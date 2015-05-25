use c_rt_lib;
use ov;
use string;
use ptd;
use array;
use boolean_t;
sub wprinter_priv::get_tab_size;
sub wprinter_priv::get_line_width;
sub wprinter_priv::get_sep;
sub wprinter::state_t;
sub wprinter_priv::is_to_long;
sub wprinter_priv::state_print;
sub wprinter_priv::pind;
sub wprinter::arr_kind_t;
sub wprinter::pretty_t;
sub wprinter::str_arr_t;
sub wprinter::pretty_arr_t;
sub wprinter::get_sep;
sub wprinter_priv::count_len;
sub wprinter::build_pretty_a;
sub wprinter::build_pretty_l;
sub wprinter::build_pretty_op_l;
sub wprinter::build_pretty_bind;
sub wprinter::build_pretty_arr_decl;
sub wprinter::build_sim;
sub wprinter::build_str_arr;
sub wprinter_priv::print_sim_arr;
sub wprinter_priv::print_str_arr;
sub wprinter_priv::print_sim_rec;
sub wprinter::print_t;
sub wprinter_priv::flush_list;
sub wprinter_priv::print_arr_in_lines;
sub wprinter_priv::process_list;
sub wprinter_priv::print_t_rec;

return 1;

sub wprinter_priv::__get_tab_size() {
my $memory_0;
#line 13
$memory_0 = 4;
#line 13
return $memory_0;
#line 13
undef($memory_0);
#line 13
return;
}

my $_get_tab_size;
sub wprinter_priv::get_tab_size() {
	$_get_tab_size = wprinter_priv::__get_tab_size() unless defined $_get_tab_size;
	return $_get_tab_size;
}

sub wprinter_priv::__get_line_width() {
my $memory_0;
#line 17
$memory_0 = 120;
#line 17
return $memory_0;
#line 17
undef($memory_0);
#line 17
return;
}

my $_get_line_width;
sub wprinter_priv::get_line_width() {
	$_get_line_width = wprinter_priv::__get_line_width() unless defined $_get_line_width;
	return $_get_line_width;
}

sub wprinter_priv::__get_sep() {
my $memory_0;my $memory_1;my $memory_2;
#line 21
$memory_1 = 1;
#line 21
$memory_2 = c_rt_lib::ov_mk_none('sep');
#line 21
$memory_0 = {len => $memory_1,el => $memory_2,};
#line 21
undef($memory_1);
#line 21
undef($memory_2);
#line 21
return $memory_0;
#line 21
undef($memory_0);
#line 21
return;
}

my $_get_sep;
sub wprinter_priv::get_sep() {
	$_get_sep = wprinter_priv::__get_sep() unless defined $_get_sep;
	return $_get_sep;
}

sub wprinter::__state_t() {
my $memory_0;my $memory_1;my $memory_2;
#line 25
$memory_2 = ptd::sim();
#line 25
$memory_1 = {out => $memory_2,};
#line 25
undef($memory_2);
#line 25
$memory_0 = ptd::rec($memory_1);
#line 25
undef($memory_1);
#line 25
return $memory_0;
#line 25
undef($memory_0);
#line 25
return;
}

my $_state_t;
sub wprinter::state_t() {
	$_state_t = wprinter::__state_t() unless defined $_state_t;
	return $_state_t;
}

sub wprinter_priv::is_to_long($) {
my $memory_0;my $memory_1;$memory_0 = $_[0];
#line 29
$memory_1 = wprinter_priv::get_line_width();
#line 29
$memory_1 = c_rt_lib::to_nl($memory_0 > $memory_1);
#line 29
undef($memory_0);
#line 29
return $memory_1;
#line 29
undef($memory_1);
#line 29
undef($memory_0);
#line 29
return;
}

sub wprinter_priv::state_print($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];
#line 33
$memory_2 = "out";
#line 33
$memory_2 = c_rt_lib::get_ref_hash($memory_0, $memory_2);
#line 33
$memory_2 = $memory_2 . $memory_1;
#line 33
$memory_3 = "out";
#line 33
c_rt_lib::set_ref_hash($memory_0, $memory_3, $memory_2);
#line 33
undef($memory_3);
#line 33
undef($memory_2);
#line 33
undef($memory_1);
#line 33
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub wprinter_priv::pind($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;$memory_0 = $_[0];
#line 37
$memory_1 = "";
#line 38
$memory_2 = 0;
#line 38
$memory_3 = 1;
#line 38
label_3:
#line 38
$memory_4 = c_rt_lib::to_nl($memory_2 >= $memory_0);
#line 38
if (c_rt_lib::check_true($memory_4)) {goto label_1;}
#line 38
$memory_6 = 9;
#line 38
$memory_5 = string::chr($memory_6);
#line 38
undef($memory_6);
#line 38
$memory_1 = $memory_1 . $memory_5;
#line 38
undef($memory_5);
#line 38
$memory_2 = $memory_2 + $memory_3;
#line 38
goto label_3;
#line 38
label_1:
#line 38
undef($memory_2);
#line 38
undef($memory_3);
#line 38
undef($memory_4);
#line 39
undef($memory_0);
#line 39
return $memory_1;
#line 39
undef($memory_1);
#line 39
undef($memory_0);
#line 39
return;
}

sub wprinter::__arr_kind_t() {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;
#line 43
$memory_2 = ptd::none();
#line 43
$memory_3 = ptd::none();
#line 43
$memory_4 = ptd::none();
#line 43
$memory_1 = {array => $memory_2,list => $memory_3,op_list => $memory_4,};
#line 43
undef($memory_2);
#line 43
undef($memory_3);
#line 43
undef($memory_4);
#line 43
$memory_0 = ptd::var($memory_1);
#line 43
undef($memory_1);
#line 43
return $memory_0;
#line 43
undef($memory_0);
#line 43
return;
}

my $_arr_kind_t;
sub wprinter::arr_kind_t() {
	$_arr_kind_t = wprinter::__arr_kind_t() unless defined $_arr_kind_t;
	return $_arr_kind_t;
}

sub wprinter::__pretty_t() {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;
#line 47
$memory_2 = ptd::sim();
#line 47
$memory_7 = {
	module => "wprinter",
	name => "pretty_arr_t",
};
#line 47
$memory_7 = c_rt_lib::ov_mk_arg('ref', $memory_7);
#line 47
$memory_8 = {
	module => "wprinter",
	name => "arr_kind_t",
};
#line 47
$memory_8 = c_rt_lib::ov_mk_arg('ref', $memory_8);
#line 47
$memory_6 = {arr => $memory_7,type => $memory_8,};
#line 47
undef($memory_7);
#line 47
undef($memory_8);
#line 47
$memory_5 = ptd::rec($memory_6);
#line 47
undef($memory_6);
#line 47
$memory_8 = {
	module => "wprinter",
	name => "pretty_arr_t",
};
#line 47
$memory_8 = c_rt_lib::ov_mk_arg('ref', $memory_8);
#line 47
$memory_9 = ptd::sim();
#line 47
$memory_10 = ptd::sim();
#line 47
$memory_7 = {arr => $memory_8,start => $memory_9,end => $memory_10,};
#line 47
undef($memory_8);
#line 47
undef($memory_9);
#line 47
undef($memory_10);
#line 47
$memory_6 = ptd::rec($memory_7);
#line 47
undef($memory_7);
#line 47
$memory_9 = {
	module => "wprinter",
	name => "pretty_t",
};
#line 47
$memory_9 = c_rt_lib::ov_mk_arg('ref', $memory_9);
#line 47
$memory_10 = {
	module => "wprinter",
	name => "pretty_t",
};
#line 47
$memory_10 = c_rt_lib::ov_mk_arg('ref', $memory_10);
#line 47
$memory_8 = {first => $memory_9,second => $memory_10,};
#line 47
undef($memory_9);
#line 47
undef($memory_10);
#line 47
$memory_7 = ptd::rec($memory_8);
#line 47
undef($memory_8);
#line 47
$memory_8 = ptd::sim();
#line 47
$memory_9 = ptd::none();
#line 47
$memory_10 = {
	module => "wprinter",
	name => "str_arr_t",
};
#line 47
$memory_10 = c_rt_lib::ov_mk_arg('ref', $memory_10);
#line 47
$memory_4 = {arr => $memory_5,arr_decl => $memory_6,bind => $memory_7,sim => $memory_8,sep => $memory_9,str_arr => $memory_10,};
#line 47
undef($memory_5);
#line 47
undef($memory_6);
#line 47
undef($memory_7);
#line 47
undef($memory_8);
#line 47
undef($memory_9);
#line 47
undef($memory_10);
#line 47
$memory_3 = ptd::var($memory_4);
#line 47
undef($memory_4);
#line 47
$memory_1 = {len => $memory_2,el => $memory_3,};
#line 47
undef($memory_2);
#line 47
undef($memory_3);
#line 47
$memory_0 = ptd::rec($memory_1);
#line 47
undef($memory_1);
#line 47
return $memory_0;
#line 47
undef($memory_0);
#line 47
return;
}

my $_pretty_t;
sub wprinter::pretty_t() {
	$_pretty_t = wprinter::__pretty_t() unless defined $_pretty_t;
	return $_pretty_t;
}

sub wprinter::__str_arr_t() {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;
#line 60
$memory_3 = ptd::sim();
#line 60
$memory_2 = ptd::arr($memory_3);
#line 60
undef($memory_3);
#line 60
$memory_5 = ptd::none();
#line 60
$memory_6 = ptd::none();
#line 60
$memory_4 = {end => $memory_5,new_line => $memory_6,};
#line 60
undef($memory_5);
#line 60
undef($memory_6);
#line 60
$memory_3 = ptd::var($memory_4);
#line 60
undef($memory_4);
#line 60
$memory_1 = {arr => $memory_2,last => $memory_3,};
#line 60
undef($memory_2);
#line 60
undef($memory_3);
#line 60
$memory_0 = ptd::rec($memory_1);
#line 60
undef($memory_1);
#line 60
return $memory_0;
#line 60
undef($memory_0);
#line 60
return;
}

my $_str_arr_t;
sub wprinter::str_arr_t() {
	$_str_arr_t = wprinter::__str_arr_t() unless defined $_str_arr_t;
	return $_str_arr_t;
}

sub wprinter::__pretty_arr_t() {
my $memory_0;my $memory_1;
#line 67
$memory_1 = {
	module => "wprinter",
	name => "pretty_t",
};
#line 67
$memory_1 = c_rt_lib::ov_mk_arg('ref', $memory_1);
#line 67
$memory_0 = ptd::arr($memory_1);
#line 67
undef($memory_1);
#line 67
return $memory_0;
#line 67
undef($memory_0);
#line 67
return;
}

my $_pretty_arr_t;
sub wprinter::pretty_arr_t() {
	$_pretty_arr_t = wprinter::__pretty_arr_t() unless defined $_pretty_arr_t;
	return $_pretty_arr_t;
}

sub wprinter::__get_sep() {
my $memory_0;
#line 71
$memory_0 = wprinter_priv::get_sep();
#line 71
return $memory_0;
#line 71
undef($memory_0);
#line 71
return;
}

my $_get_sep;
sub wprinter::get_sep() {
	$_get_sep = wprinter::__get_sep() unless defined $_get_sep;
	return $_get_sep;
}

sub wprinter_priv::count_len($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;$memory_0 = $_[0];
#line 75
$memory_1 = 0;
#line 76
$memory_3 = 0;
#line 76
$memory_4 = 1;
#line 76
$memory_5 = c_rt_lib::array_len($memory_0);
#line 76
label_3:
#line 76
$memory_6 = c_rt_lib::to_nl($memory_3 >= $memory_5);
#line 76
if (c_rt_lib::check_true($memory_6)) {goto label_1;}
#line 76
$memory_2 = $memory_0->[$memory_3];
#line 77
$memory_7 = $memory_2->{'len'};
#line 77
$memory_1 = $memory_1 + $memory_7;
#line 77
undef($memory_7);
#line 78
$memory_3 = $memory_3 + $memory_4;
#line 78
goto label_3;
#line 78
label_1:
#line 78
undef($memory_2);
#line 78
undef($memory_3);
#line 78
undef($memory_4);
#line 78
undef($memory_5);
#line 78
undef($memory_6);
#line 79
undef($memory_0);
#line 79
return $memory_1;
#line 79
undef($memory_1);
#line 79
undef($memory_0);
#line 79
return;
}

sub wprinter::build_pretty_a($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;$memory_0 = $_[0];
#line 83
$memory_2 = wprinter_priv::count_len($memory_0);
#line 83
$memory_4 = c_rt_lib::ov_mk_none('array');
#line 83
$memory_3 = {arr => $memory_0,type => $memory_4,};
#line 83
undef($memory_4);
#line 83
$memory_3 = c_rt_lib::ov_mk_arg('arr', $memory_3);
#line 83
$memory_1 = {len => $memory_2,el => $memory_3,};
#line 83
undef($memory_2);
#line 83
undef($memory_3);
#line 83
undef($memory_0);
#line 83
return $memory_1;
#line 83
undef($memory_1);
#line 83
undef($memory_0);
#line 83
return;
}

sub wprinter::build_pretty_l($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;$memory_0 = $_[0];
#line 87
$memory_2 = wprinter_priv::count_len($memory_0);
#line 87
$memory_4 = c_rt_lib::ov_mk_none('list');
#line 87
$memory_3 = {arr => $memory_0,type => $memory_4,};
#line 87
undef($memory_4);
#line 87
$memory_3 = c_rt_lib::ov_mk_arg('arr', $memory_3);
#line 87
$memory_1 = {len => $memory_2,el => $memory_3,};
#line 87
undef($memory_2);
#line 87
undef($memory_3);
#line 87
undef($memory_0);
#line 87
return $memory_1;
#line 87
undef($memory_1);
#line 87
undef($memory_0);
#line 87
return;
}

sub wprinter::build_pretty_op_l($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;$memory_0 = $_[0];
#line 91
$memory_2 = wprinter_priv::count_len($memory_0);
#line 91
$memory_4 = c_rt_lib::ov_mk_none('op_list');
#line 91
$memory_3 = {arr => $memory_0,type => $memory_4,};
#line 91
undef($memory_4);
#line 91
$memory_3 = c_rt_lib::ov_mk_arg('arr', $memory_3);
#line 91
$memory_1 = {len => $memory_2,el => $memory_3,};
#line 91
undef($memory_2);
#line 91
undef($memory_3);
#line 91
undef($memory_0);
#line 91
return $memory_1;
#line 91
undef($memory_1);
#line 91
undef($memory_0);
#line 91
return;
}

sub wprinter::build_pretty_bind($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;$memory_0 = $_[0];$memory_1 = $_[1];
#line 95
$memory_3 = $memory_0->{'len'};
#line 95
$memory_4 = $memory_1->{'len'};
#line 95
$memory_3 = $memory_3 + $memory_4;
#line 95
undef($memory_4);
#line 95
$memory_4 = {first => $memory_0,second => $memory_1,};
#line 95
$memory_4 = c_rt_lib::ov_mk_arg('bind', $memory_4);
#line 95
$memory_2 = {len => $memory_3,el => $memory_4,};
#line 95
undef($memory_3);
#line 95
undef($memory_4);
#line 95
undef($memory_0);
#line 95
undef($memory_1);
#line 95
return $memory_2;
#line 95
undef($memory_2);
#line 95
undef($memory_0);
#line 95
undef($memory_1);
#line 95
return;
}

sub wprinter::build_pretty_arr_decl($$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;$memory_0 = $_[0];$memory_1 = $_[1];$memory_2 = $_[2];
#line 100
$memory_4 = wprinter_priv::count_len($memory_0);
#line 100
$memory_5 = string::length($memory_1);
#line 100
$memory_4 = $memory_4 + $memory_5;
#line 100
undef($memory_5);
#line 100
$memory_5 = string::length($memory_2);
#line 100
$memory_4 = $memory_4 + $memory_5;
#line 100
undef($memory_5);
#line 100
$memory_5 = {arr => $memory_0,start => $memory_1,end => $memory_2,};
#line 100
$memory_5 = c_rt_lib::ov_mk_arg('arr_decl', $memory_5);
#line 100
$memory_3 = {len => $memory_4,el => $memory_5,};
#line 100
undef($memory_4);
#line 100
undef($memory_5);
#line 100
undef($memory_0);
#line 100
undef($memory_1);
#line 100
undef($memory_2);
#line 100
return $memory_3;
#line 100
undef($memory_3);
#line 100
undef($memory_0);
#line 100
undef($memory_1);
#line 100
undef($memory_2);
#line 100
return;
}

sub wprinter::build_sim($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;$memory_0 = $_[0];
#line 107
$memory_2 = string::length($memory_0);
#line 107
$memory_3 = c_rt_lib::ov_mk_arg('sim', $memory_0);
#line 107
$memory_1 = {len => $memory_2,el => $memory_3,};
#line 107
undef($memory_2);
#line 107
undef($memory_3);
#line 107
undef($memory_0);
#line 107
return $memory_1;
#line 107
undef($memory_1);
#line 107
undef($memory_0);
#line 107
return;
}

sub wprinter::build_str_arr($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;$memory_0 = $_[0];$memory_1 = $_[1];
#line 111
$memory_2 = c_rt_lib::ov_is($memory_1, 'end');
#line 111
if (c_rt_lib::check_true($memory_2)) {goto label_2;}
#line 113
$memory_2 = c_rt_lib::ov_is($memory_1, 'new_line');
#line 113
if (c_rt_lib::check_true($memory_2)) {goto label_3;}
#line 113
$memory_2 = "NOMATCHALERT";
#line 113
$memory_2 = [$memory_2,$memory_1];
#line 113
die(dfile::ssave($memory_2));
#line 111
label_2:
#line 112
$memory_3 = array::len($memory_0);
#line 112
$memory_4 = 1;
#line 112
$memory_3 = c_rt_lib::to_nl($memory_3 == $memory_4);
#line 112
undef($memory_4);
#line 112
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 112
if (c_rt_lib::check_true($memory_3)) {goto label_5;}
#line 112
$memory_6 = 0;
#line 112
$memory_5 = $memory_0->[$memory_6];
#line 112
undef($memory_6);
#line 112
$memory_4 = wprinter::build_sim($memory_5);
#line 112
undef($memory_5);
#line 112
undef($memory_0);
#line 112
undef($memory_1);
#line 112
undef($memory_2);
#line 112
undef($memory_3);
#line 112
return $memory_4;
#line 112
undef($memory_4);
#line 112
goto label_5;
#line 112
label_5:
#line 112
undef($memory_3);
#line 113
goto label_1;
#line 113
label_3:
#line 114
goto label_1;
#line 114
label_1:
#line 114
undef($memory_2);
#line 115
$memory_3 = 2;
#line 115
$memory_4 = wprinter_priv::get_line_width();
#line 115
$memory_3 = $memory_3 * $memory_4;
#line 115
undef($memory_4);
#line 115
$memory_4 = {arr => $memory_0,last => $memory_1,};
#line 115
$memory_4 = c_rt_lib::ov_mk_arg('str_arr', $memory_4);
#line 115
$memory_2 = {len => $memory_3,el => $memory_4,};
#line 115
undef($memory_3);
#line 115
undef($memory_4);
#line 115
undef($memory_0);
#line 115
undef($memory_1);
#line 115
return $memory_2;
#line 115
undef($memory_2);
#line 115
undef($memory_0);
#line 115
undef($memory_1);
#line 115
return;
}

sub wprinter_priv::print_sim_arr($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];
#line 119
$memory_3 = 0;
#line 119
$memory_4 = 1;
#line 119
$memory_5 = c_rt_lib::array_len($memory_1);
#line 119
label_3:
#line 119
$memory_6 = c_rt_lib::to_nl($memory_3 >= $memory_5);
#line 119
if (c_rt_lib::check_true($memory_6)) {goto label_1;}
#line 119
$memory_2 = $memory_1->[$memory_3];
#line 120
wprinter_priv::print_sim_rec($memory_0, $memory_2);
#line 121
$memory_3 = $memory_3 + $memory_4;
#line 121
goto label_3;
#line 121
label_1:
#line 121
undef($memory_2);
#line 121
undef($memory_3);
#line 121
undef($memory_4);
#line 121
undef($memory_5);
#line 121
undef($memory_6);
#line 121
undef($memory_1);
#line 121
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub wprinter_priv::print_str_arr($$$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;my $memory_13;my $memory_14;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];$memory_2 = $_[2];$memory_3 = $_[3];
#line 125
$memory_4 = $memory_2;
#line 126
$memory_5 = $memory_1->{'arr'};
#line 127
$memory_9 = 0;
#line 127
$memory_8 = $memory_5->[$memory_9];
#line 127
undef($memory_9);
#line 127
$memory_7 = string::length($memory_8);
#line 127
undef($memory_8);
#line 127
$memory_7 = $memory_2 + $memory_7;
#line 127
$memory_6 = wprinter_priv::is_to_long($memory_7);
#line 127
undef($memory_7);
#line 127
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 127
if (c_rt_lib::check_true($memory_6)) {goto label_2;}
#line 128
$memory_7 = string::lf();
#line 128
wprinter_priv::state_print($memory_0, $memory_7);
#line 128
undef($memory_7);
#line 129
$memory_7 = wprinter_priv::pind($memory_3);
#line 129
wprinter_priv::state_print($memory_0, $memory_7);
#line 129
undef($memory_7);
#line 130
$memory_7 = wprinter_priv::get_tab_size();
#line 130
$memory_7 = $memory_7 * $memory_3;
#line 130
$memory_4 = $memory_7;
#line 130
undef($memory_7);
#line 131
goto label_2;
#line 131
label_2:
#line 131
undef($memory_6);
#line 133
$memory_6 = 0;
#line 134
$memory_8 = 0;
#line 134
$memory_9 = 1;
#line 134
$memory_10 = c_rt_lib::array_len($memory_5);
#line 134
label_5:
#line 134
$memory_11 = c_rt_lib::to_nl($memory_8 >= $memory_10);
#line 134
if (c_rt_lib::check_true($memory_11)) {goto label_3;}
#line 134
$memory_7 = $memory_5->[$memory_8];
#line 135
wprinter_priv::state_print($memory_0, $memory_7);
#line 136
$memory_12 = string::length($memory_7);
#line 136
$memory_4 = $memory_4 + $memory_12;
#line 136
undef($memory_12);
#line 137
$memory_12 = array::len($memory_5);
#line 137
$memory_13 = 1;
#line 137
$memory_12 = $memory_12 - $memory_13;
#line 137
undef($memory_13);
#line 137
$memory_12 = c_rt_lib::to_nl($memory_6 != $memory_12);
#line 137
$memory_12 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_12));
#line 137
if (c_rt_lib::check_true($memory_12)) {goto label_7;}
#line 138
$memory_13 = string::lf();
#line 138
$memory_14 = wprinter_priv::pind($memory_3);
#line 138
$memory_13 = $memory_13 . $memory_14;
#line 138
undef($memory_14);
#line 138
wprinter_priv::state_print($memory_0, $memory_13);
#line 138
undef($memory_13);
#line 139
$memory_13 = wprinter_priv::get_tab_size();
#line 139
$memory_13 = $memory_13 * $memory_3;
#line 139
$memory_4 = $memory_13;
#line 139
undef($memory_13);
#line 140
goto label_7;
#line 140
label_7:
#line 140
undef($memory_12);
#line 142
$memory_12 = 1;
#line 142
$memory_6 = $memory_6 + $memory_12;
#line 142
undef($memory_12);
#line 143
$memory_8 = $memory_8 + $memory_9;
#line 143
goto label_5;
#line 143
label_3:
#line 143
undef($memory_7);
#line 143
undef($memory_8);
#line 143
undef($memory_9);
#line 143
undef($memory_10);
#line 143
undef($memory_11);
#line 144
$memory_7 = $memory_1->{'last'};
#line 144
$memory_8 = c_rt_lib::ov_is($memory_7, 'new_line');
#line 144
if (c_rt_lib::check_true($memory_8)) {goto label_9;}
#line 147
$memory_8 = c_rt_lib::ov_is($memory_7, 'end');
#line 147
if (c_rt_lib::check_true($memory_8)) {goto label_10;}
#line 147
$memory_8 = "NOMATCHALERT";
#line 147
$memory_8 = [$memory_8,$memory_7];
#line 147
die(dfile::ssave($memory_8));
#line 144
label_9:
#line 145
$memory_9 = string::lf();
#line 145
$memory_10 = wprinter_priv::pind($memory_3);
#line 145
$memory_9 = $memory_9 . $memory_10;
#line 145
undef($memory_10);
#line 145
wprinter_priv::state_print($memory_0, $memory_9);
#line 145
undef($memory_9);
#line 146
$memory_9 = wprinter_priv::get_tab_size();
#line 146
$memory_9 = $memory_9 * $memory_3;
#line 146
$memory_4 = $memory_9;
#line 146
undef($memory_9);
#line 147
goto label_8;
#line 147
label_10:
#line 148
goto label_8;
#line 148
label_8:
#line 148
undef($memory_7);
#line 148
undef($memory_8);
#line 149
undef($memory_1);
#line 149
undef($memory_2);
#line 149
undef($memory_3);
#line 149
undef($memory_5);
#line 149
undef($memory_6);
#line 149
$_[0] = $memory_0;return $memory_4;
#line 149
undef($memory_4);
#line 149
undef($memory_5);
#line 149
undef($memory_6);
#line 149
undef($memory_1);
#line 149
undef($memory_2);
#line 149
undef($memory_3);
#line 149
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub wprinter_priv::print_sim_rec($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];
#line 153
$memory_2 = $memory_1->{'el'};
#line 153
$memory_3 = c_rt_lib::ov_is($memory_2, 'sim');
#line 153
if (c_rt_lib::check_true($memory_3)) {goto label_2;}
#line 155
$memory_3 = c_rt_lib::ov_is($memory_2, 'arr');
#line 155
if (c_rt_lib::check_true($memory_3)) {goto label_3;}
#line 157
$memory_3 = c_rt_lib::ov_is($memory_2, 'sep');
#line 157
if (c_rt_lib::check_true($memory_3)) {goto label_4;}
#line 159
$memory_3 = c_rt_lib::ov_is($memory_2, 'arr_decl');
#line 159
if (c_rt_lib::check_true($memory_3)) {goto label_5;}
#line 163
$memory_3 = c_rt_lib::ov_is($memory_2, 'bind');
#line 163
if (c_rt_lib::check_true($memory_3)) {goto label_6;}
#line 166
$memory_3 = c_rt_lib::ov_is($memory_2, 'str_arr');
#line 166
if (c_rt_lib::check_true($memory_3)) {goto label_7;}
#line 166
$memory_3 = "NOMATCHALERT";
#line 166
$memory_3 = [$memory_3,$memory_2];
#line 166
die(dfile::ssave($memory_3));
#line 153
label_2:
#line 153
$memory_4 = c_rt_lib::ov_as($memory_2, 'sim');
#line 154
wprinter_priv::state_print($memory_0, $memory_4);
#line 154
undef($memory_4);
#line 155
goto label_1;
#line 155
label_3:
#line 155
$memory_4 = c_rt_lib::ov_as($memory_2, 'arr');
#line 156
$memory_5 = $memory_4->{'arr'};
#line 156
wprinter_priv::print_sim_arr($memory_0, $memory_5);
#line 156
undef($memory_5);
#line 156
undef($memory_4);
#line 157
goto label_1;
#line 157
label_4:
#line 158
$memory_4 = " ";
#line 158
wprinter_priv::state_print($memory_0, $memory_4);
#line 158
undef($memory_4);
#line 159
goto label_1;
#line 159
label_5:
#line 159
$memory_4 = c_rt_lib::ov_as($memory_2, 'arr_decl');
#line 160
$memory_5 = $memory_4->{'start'};
#line 160
wprinter_priv::state_print($memory_0, $memory_5);
#line 160
undef($memory_5);
#line 161
$memory_5 = $memory_4->{'arr'};
#line 161
wprinter_priv::print_sim_arr($memory_0, $memory_5);
#line 161
undef($memory_5);
#line 162
$memory_5 = $memory_4->{'end'};
#line 162
wprinter_priv::state_print($memory_0, $memory_5);
#line 162
undef($memory_5);
#line 162
undef($memory_4);
#line 163
goto label_1;
#line 163
label_6:
#line 163
$memory_4 = c_rt_lib::ov_as($memory_2, 'bind');
#line 164
$memory_5 = $memory_4->{'first'};
#line 164
wprinter_priv::print_sim_rec($memory_0, $memory_5);
#line 164
undef($memory_5);
#line 165
$memory_5 = $memory_4->{'second'};
#line 165
wprinter_priv::print_sim_rec($memory_0, $memory_5);
#line 165
undef($memory_5);
#line 165
undef($memory_4);
#line 166
goto label_1;
#line 166
label_7:
#line 166
$memory_4 = c_rt_lib::ov_as($memory_2, 'str_arr');
#line 167
$memory_5 = [];
#line 167
die(dfile::ssave($memory_5));
#line 167
undef($memory_5);
#line 167
undef($memory_4);
#line 168
goto label_1;
#line 168
label_1:
#line 168
undef($memory_2);
#line 168
undef($memory_3);
#line 168
undef($memory_1);
#line 168
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub wprinter::print_t($$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];$memory_2 = $_[2];
#line 172
$memory_3 = wprinter_priv::get_tab_size();
#line 172
$memory_3 = $memory_2 * $memory_3;
#line 172
wprinter_priv::print_t_rec($memory_0, $memory_1, $memory_3, $memory_2);
#line 172
undef($memory_3);
#line 172
undef($memory_1);
#line 172
undef($memory_2);
#line 172
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub wprinter_priv::flush_list($$$$$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;my $memory_13;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];$memory_2 = $_[2];$memory_3 = $_[3];$memory_4 = $_[4];$memory_5 = $_[5];
#line 177
$memory_6 = wprinter_priv::is_to_long($memory_3);
#line 177
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 177
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 177
if (c_rt_lib::check_true($memory_6)) {goto label_2;}
#line 178
$memory_8 = 0;
#line 178
$memory_9 = 1;
#line 178
$memory_10 = c_rt_lib::array_len($memory_1);
#line 178
label_5:
#line 178
$memory_11 = c_rt_lib::to_nl($memory_8 >= $memory_10);
#line 178
if (c_rt_lib::check_true($memory_11)) {goto label_3;}
#line 178
$memory_7 = $memory_1->[$memory_8];
#line 179
wprinter_priv::print_sim_rec($memory_0, $memory_7);
#line 180
$memory_8 = $memory_8 + $memory_9;
#line 180
goto label_5;
#line 180
label_3:
#line 180
undef($memory_7);
#line 180
undef($memory_8);
#line 180
undef($memory_9);
#line 180
undef($memory_10);
#line 180
undef($memory_11);
#line 181
undef($memory_1);
#line 181
undef($memory_2);
#line 181
undef($memory_4);
#line 181
undef($memory_5);
#line 181
undef($memory_6);
#line 181
$_[0] = $memory_0;return $memory_3;
#line 182
goto label_1;
#line 182
label_2:
#line 183
$memory_8 = array::len($memory_1);
#line 183
$memory_9 = 1;
#line 183
$memory_8 = $memory_8 - $memory_9;
#line 183
undef($memory_9);
#line 183
$memory_7 = $memory_1->[$memory_8];
#line 183
undef($memory_8);
#line 183
$memory_7 = $memory_7->{'el'};
#line 183
$memory_7 = c_rt_lib::ov_is($memory_7, 'str_arr');
#line 183
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 183
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 183
if (c_rt_lib::check_true($memory_7)) {goto label_7;}
#line 184
$memory_8 = 1;
#line 184
$memory_8 = $memory_4 + $memory_8;
#line 184
$memory_10 = wprinter_priv::get_tab_size();
#line 184
$memory_8 = $memory_8 * $memory_10;
#line 184
undef($memory_10);
#line 184
$memory_8 = c_rt_lib::to_nl($memory_8 < $memory_2);
#line 184
$memory_9 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 184
if (c_rt_lib::check_true($memory_9)) {goto label_10;}
#line 184
$memory_8 = $memory_5;
#line 184
$memory_8 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 184
label_10:
#line 184
undef($memory_9);
#line 184
$memory_8 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 184
if (c_rt_lib::check_true($memory_8)) {goto label_9;}
#line 185
$memory_9 = string::lf();
#line 185
$memory_11 = 1;
#line 185
$memory_11 = $memory_4 + $memory_11;
#line 185
$memory_10 = wprinter_priv::pind($memory_11);
#line 185
undef($memory_11);
#line 185
$memory_9 = $memory_9 . $memory_10;
#line 185
undef($memory_10);
#line 185
wprinter_priv::state_print($memory_0, $memory_9);
#line 185
undef($memory_9);
#line 186
$memory_9 = 1;
#line 186
$memory_9 = $memory_4 + $memory_9;
#line 186
$memory_10 = wprinter_priv::get_tab_size();
#line 186
$memory_9 = $memory_9 * $memory_10;
#line 186
undef($memory_10);
#line 186
$memory_2 = $memory_9;
#line 186
undef($memory_9);
#line 187
goto label_9;
#line 187
label_9:
#line 187
undef($memory_8);
#line 188
goto label_7;
#line 188
label_7:
#line 188
undef($memory_7);
#line 189
$memory_8 = 0;
#line 189
$memory_9 = 1;
#line 189
$memory_10 = c_rt_lib::array_len($memory_1);
#line 189
label_13:
#line 189
$memory_11 = c_rt_lib::to_nl($memory_8 >= $memory_10);
#line 189
if (c_rt_lib::check_true($memory_11)) {goto label_11;}
#line 189
$memory_7 = $memory_1->[$memory_8];
#line 190
$memory_13 = 1;
#line 190
$memory_13 = $memory_4 + $memory_13;
#line 190
$memory_12 = wprinter_priv::print_t_rec($memory_0, $memory_7, $memory_2, $memory_13);
#line 190
undef($memory_13);
#line 190
$memory_2 = $memory_12;
#line 190
undef($memory_12);
#line 191
$memory_8 = $memory_8 + $memory_9;
#line 191
goto label_13;
#line 191
label_11:
#line 191
undef($memory_7);
#line 191
undef($memory_8);
#line 191
undef($memory_9);
#line 191
undef($memory_10);
#line 191
undef($memory_11);
#line 192
undef($memory_1);
#line 192
undef($memory_3);
#line 192
undef($memory_4);
#line 192
undef($memory_5);
#line 192
undef($memory_6);
#line 192
$_[0] = $memory_0;return $memory_2;
#line 193
goto label_1;
#line 193
label_1:
#line 193
undef($memory_6);
#line 193
undef($memory_1);
#line 193
undef($memory_2);
#line 193
undef($memory_3);
#line 193
undef($memory_4);
#line 193
undef($memory_5);
#line 193
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub wprinter_priv::print_arr_in_lines($$$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];$memory_2 = $_[2];$memory_3 = $_[3];
#line 198
$memory_5 = 0;
#line 198
$memory_6 = 1;
#line 198
$memory_7 = c_rt_lib::array_len($memory_1);
#line 198
label_3:
#line 198
$memory_8 = c_rt_lib::to_nl($memory_5 >= $memory_7);
#line 198
if (c_rt_lib::check_true($memory_8)) {goto label_1;}
#line 198
$memory_4 = $memory_1->[$memory_5];
#line 199
$memory_10 = $memory_4->{'el'};
#line 199
$memory_11 = "sep";
#line 199
$memory_9 = ov::is($memory_10, $memory_11);
#line 199
undef($memory_11);
#line 199
undef($memory_10);
#line 199
$memory_9 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_9));
#line 199
if (c_rt_lib::check_true($memory_9)) {goto label_5;}
#line 200
$memory_10 = string::lf();
#line 200
$memory_11 = wprinter_priv::pind($memory_2);
#line 200
$memory_10 = $memory_10 . $memory_11;
#line 200
undef($memory_11);
#line 200
wprinter_priv::state_print($memory_0, $memory_10);
#line 200
undef($memory_10);
#line 201
$memory_10 = wprinter_priv::get_tab_size();
#line 201
$memory_10 = $memory_2 * $memory_10;
#line 201
$memory_3 = $memory_10;
#line 201
undef($memory_10);
#line 202
undef($memory_9);
#line 202
goto label_2;
#line 203
goto label_5;
#line 203
label_5:
#line 203
undef($memory_9);
#line 205
$memory_9 = wprinter_priv::print_t_rec($memory_0, $memory_4, $memory_3, $memory_2);
#line 205
$memory_3 = $memory_9;
#line 205
undef($memory_9);
#line 205
label_2:
#line 206
$memory_5 = $memory_5 + $memory_6;
#line 206
goto label_3;
#line 206
label_1:
#line 206
undef($memory_4);
#line 206
undef($memory_5);
#line 206
undef($memory_6);
#line 206
undef($memory_7);
#line 206
undef($memory_8);
#line 207
undef($memory_1);
#line 207
undef($memory_2);
#line 207
$_[0] = $memory_0;return $memory_3;
#line 207
undef($memory_1);
#line 207
undef($memory_2);
#line 207
undef($memory_3);
#line 207
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub wprinter_priv::process_list($$$$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;my $memory_13;my $memory_14;my $memory_15;my $memory_16;my $memory_17;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];$memory_2 = $_[2];$memory_3 = $_[3];$memory_4 = $_[4];
#line 212
$memory_5 = [];
#line 213
$memory_6 = 0;
#line 214
$memory_7 = c_rt_lib::to_nl(1);
#line 215
$memory_8 = array::len($memory_1);
#line 215
$memory_9 = 0;
#line 215
$memory_10 = 1;
#line 215
label_3:
#line 215
$memory_11 = c_rt_lib::to_nl($memory_9 >= $memory_8);
#line 215
if (c_rt_lib::check_true($memory_11)) {goto label_1;}
#line 216
$memory_12 = $memory_1->[$memory_9];
#line 217
$memory_14 = $memory_12->{'el'};
#line 217
$memory_15 = "sep";
#line 217
$memory_13 = ov::is($memory_14, $memory_15);
#line 217
undef($memory_15);
#line 217
undef($memory_14);
#line 217
$memory_13 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_13));
#line 217
if (c_rt_lib::check_true($memory_13)) {goto label_5;}
#line 218
$memory_15 = $memory_6 + $memory_3;
#line 218
if (c_rt_lib::check_true($memory_2)) {goto label_7;}
#line 218
$memory_16 = 0;
#line 218
goto label_6;
#line 218
label_7:
#line 218
$memory_16 = 1;
#line 218
label_6:
#line 218
$memory_16 = $memory_4 - $memory_16;
#line 218
$memory_17 = $memory_7;
#line 218
if (c_rt_lib::check_true($memory_7)) {goto label_8;}
#line 218
$memory_17 = $memory_2;
#line 218
$memory_17 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_17));
#line 218
label_8:
#line 218
$memory_14 = wprinter_priv::flush_list($memory_0, $memory_5, $memory_3, $memory_15, $memory_16, $memory_17);
#line 218
undef($memory_17);
#line 218
undef($memory_16);
#line 218
undef($memory_15);
#line 218
$memory_3 = $memory_14;
#line 218
undef($memory_14);
#line 219
$memory_14 = c_rt_lib::to_nl(0);
#line 219
$memory_7 = $memory_14;
#line 219
undef($memory_14);
#line 220
$memory_14 = " ";
#line 220
wprinter_priv::state_print($memory_0, $memory_14);
#line 220
undef($memory_14);
#line 221
$memory_14 = 1;
#line 221
$memory_3 = $memory_3 + $memory_14;
#line 221
undef($memory_14);
#line 222
$memory_14 = [];
#line 222
$memory_5 = $memory_14;
#line 222
undef($memory_14);
#line 223
$memory_14 = 0;
#line 223
$memory_6 = $memory_14;
#line 223
undef($memory_14);
#line 224
goto label_4;
#line 224
label_5:
#line 225
array::push($memory_5, $memory_12);
#line 226
$memory_14 = $memory_12->{'len'};
#line 226
$memory_6 = $memory_6 + $memory_14;
#line 226
undef($memory_14);
#line 227
goto label_4;
#line 227
label_4:
#line 227
undef($memory_13);
#line 227
undef($memory_12);
#line 229
$memory_9 = $memory_9 + $memory_10;
#line 229
goto label_3;
#line 229
label_1:
#line 229
undef($memory_8);
#line 229
undef($memory_9);
#line 229
undef($memory_10);
#line 229
undef($memory_11);
#line 230
$memory_8 = array::len($memory_5);
#line 230
$memory_9 = 0;
#line 230
$memory_8 = c_rt_lib::to_nl($memory_8 > $memory_9);
#line 230
undef($memory_9);
#line 230
$memory_8 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 230
if (c_rt_lib::check_true($memory_8)) {goto label_10;}
#line 230
$memory_10 = $memory_6 + $memory_3;
#line 230
if (c_rt_lib::check_true($memory_2)) {goto label_12;}
#line 230
$memory_11 = 0;
#line 230
goto label_11;
#line 230
label_12:
#line 230
$memory_11 = 1;
#line 230
label_11:
#line 230
$memory_11 = $memory_4 - $memory_11;
#line 230
$memory_12 = $memory_7;
#line 230
if (c_rt_lib::check_true($memory_7)) {goto label_13;}
#line 230
$memory_12 = $memory_2;
#line 230
$memory_12 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_12));
#line 230
label_13:
#line 230
$memory_9 = wprinter_priv::flush_list($memory_0, $memory_5, $memory_3, $memory_10, $memory_11, $memory_12);
#line 230
undef($memory_12);
#line 230
undef($memory_11);
#line 230
undef($memory_10);
#line 230
$memory_3 = $memory_9;
#line 230
undef($memory_9);
#line 230
goto label_10;
#line 230
label_10:
#line 230
undef($memory_8);
#line 233
undef($memory_1);
#line 233
undef($memory_2);
#line 233
undef($memory_4);
#line 233
undef($memory_5);
#line 233
undef($memory_6);
#line 233
undef($memory_7);
#line 233
$_[0] = $memory_0;return $memory_3;
#line 233
undef($memory_5);
#line 233
undef($memory_6);
#line 233
undef($memory_7);
#line 233
undef($memory_1);
#line 233
undef($memory_2);
#line 233
undef($memory_3);
#line 233
undef($memory_4);
#line 233
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub wprinter_priv::print_t_rec($$$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];$memory_2 = $_[2];$memory_3 = $_[3];
#line 237
$memory_5 = $memory_1->{'len'};
#line 237
$memory_5 = $memory_5 + $memory_2;
#line 237
$memory_4 = wprinter_priv::is_to_long($memory_5);
#line 237
undef($memory_5);
#line 237
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 237
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 237
if (c_rt_lib::check_true($memory_4)) {goto label_2;}
#line 238
wprinter_priv::print_sim_rec($memory_0, $memory_1);
#line 239
$memory_5 = $memory_1->{'len'};
#line 239
$memory_2 = $memory_2 + $memory_5;
#line 239
undef($memory_5);
#line 240
undef($memory_1);
#line 240
undef($memory_3);
#line 240
undef($memory_4);
#line 240
$_[0] = $memory_0;return $memory_2;
#line 241
goto label_2;
#line 241
label_2:
#line 241
undef($memory_4);
#line 243
$memory_4 = $memory_1->{'el'};
#line 243
$memory_5 = c_rt_lib::ov_is($memory_4, 'sim');
#line 243
if (c_rt_lib::check_true($memory_5)) {goto label_4;}
#line 251
$memory_5 = c_rt_lib::ov_is($memory_4, 'arr_decl');
#line 251
if (c_rt_lib::check_true($memory_5)) {goto label_5;}
#line 258
$memory_5 = c_rt_lib::ov_is($memory_4, 'arr');
#line 258
if (c_rt_lib::check_true($memory_5)) {goto label_6;}
#line 267
$memory_5 = c_rt_lib::ov_is($memory_4, 'bind');
#line 267
if (c_rt_lib::check_true($memory_5)) {goto label_7;}
#line 272
$memory_5 = c_rt_lib::ov_is($memory_4, 'sep');
#line 272
if (c_rt_lib::check_true($memory_5)) {goto label_8;}
#line 275
$memory_5 = c_rt_lib::ov_is($memory_4, 'str_arr');
#line 275
if (c_rt_lib::check_true($memory_5)) {goto label_9;}
#line 275
$memory_5 = "NOMATCHALERT";
#line 275
$memory_5 = [$memory_5,$memory_4];
#line 275
die(dfile::ssave($memory_5));
#line 243
label_4:
#line 243
$memory_6 = c_rt_lib::ov_as($memory_4, 'sim');
#line 244
$memory_7 = ",";
#line 244
$memory_7 = c_rt_lib::to_nl($memory_6 eq $memory_7);
#line 244
if (c_rt_lib::check_true($memory_7)) {goto label_12;}
#line 244
$memory_7 = ")";
#line 244
$memory_7 = c_rt_lib::to_nl($memory_6 eq $memory_7);
#line 244
label_12:
#line 244
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 244
if (c_rt_lib::check_true($memory_7)) {goto label_11;}
#line 245
wprinter_priv::state_print($memory_0, $memory_6);
#line 246
$memory_8 = $memory_1->{'len'};
#line 246
$memory_8 = $memory_2 + $memory_8;
#line 246
undef($memory_1);
#line 246
undef($memory_2);
#line 246
undef($memory_3);
#line 246
undef($memory_4);
#line 246
undef($memory_5);
#line 246
undef($memory_6);
#line 246
undef($memory_7);
#line 246
$_[0] = $memory_0;return $memory_8;
#line 246
undef($memory_8);
#line 247
goto label_11;
#line 247
label_11:
#line 247
undef($memory_7);
#line 248
$memory_7 = wprinter_priv::get_tab_size();
#line 248
$memory_7 = $memory_3 * $memory_7;
#line 248
$memory_7 = c_rt_lib::to_nl($memory_2 != $memory_7);
#line 248
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 248
if (c_rt_lib::check_true($memory_7)) {goto label_14;}
#line 248
$memory_8 = string::lf();
#line 248
$memory_9 = wprinter_priv::pind($memory_3);
#line 248
$memory_8 = $memory_8 . $memory_9;
#line 248
undef($memory_9);
#line 248
wprinter_priv::state_print($memory_0, $memory_8);
#line 248
undef($memory_8);
#line 248
goto label_14;
#line 248
label_14:
#line 248
undef($memory_7);
#line 249
wprinter_priv::print_sim_rec($memory_0, $memory_1);
#line 250
$memory_7 = $memory_1->{'len'};
#line 250
$memory_8 = wprinter_priv::get_tab_size();
#line 250
$memory_8 = $memory_3 * $memory_8;
#line 250
$memory_7 = $memory_7 + $memory_8;
#line 250
undef($memory_8);
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
$_[0] = $memory_0;return $memory_7;
#line 250
undef($memory_7);
#line 250
undef($memory_6);
#line 251
goto label_3;
#line 251
label_5:
#line 251
$memory_6 = c_rt_lib::ov_as($memory_4, 'arr_decl');
#line 252
$memory_7 = $memory_6->{'start'};
#line 252
$memory_8 = string::lf();
#line 252
$memory_7 = $memory_7 . $memory_8;
#line 252
undef($memory_8);
#line 252
$memory_9 = 1;
#line 252
$memory_9 = $memory_3 + $memory_9;
#line 252
$memory_8 = wprinter_priv::pind($memory_9);
#line 252
undef($memory_9);
#line 252
$memory_7 = $memory_7 . $memory_8;
#line 252
undef($memory_8);
#line 252
wprinter_priv::state_print($memory_0, $memory_7);
#line 252
undef($memory_7);
#line 253
$memory_7 = 1;
#line 253
$memory_7 = $memory_3 + $memory_7;
#line 253
$memory_8 = wprinter_priv::get_tab_size();
#line 253
$memory_7 = $memory_7 * $memory_8;
#line 253
undef($memory_8);
#line 253
$memory_2 = $memory_7;
#line 253
undef($memory_7);
#line 254
$memory_8 = $memory_6->{'arr'};
#line 254
$memory_9 = 1;
#line 254
$memory_9 = $memory_3 + $memory_9;
#line 254
$memory_7 = wprinter_priv::print_arr_in_lines($memory_0, $memory_8, $memory_9, $memory_2);
#line 254
undef($memory_9);
#line 254
undef($memory_8);
#line 254
$memory_2 = $memory_7;
#line 254
undef($memory_7);
#line 255
$memory_8 = $memory_6->{'arr'};
#line 255
$memory_7 = array::len($memory_8);
#line 255
undef($memory_8);
#line 255
$memory_8 = 0;
#line 255
$memory_7 = c_rt_lib::to_nl($memory_7 > $memory_8);
#line 255
undef($memory_8);
#line 255
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 255
if (c_rt_lib::check_true($memory_7)) {goto label_16;}
#line 255
$memory_8 = string::lf();
#line 255
$memory_9 = wprinter_priv::pind($memory_3);
#line 255
$memory_8 = $memory_8 . $memory_9;
#line 255
undef($memory_9);
#line 255
wprinter_priv::state_print($memory_0, $memory_8);
#line 255
undef($memory_8);
#line 255
goto label_16;
#line 255
label_16:
#line 255
undef($memory_7);
#line 256
$memory_7 = $memory_6->{'end'};
#line 256
wprinter_priv::state_print($memory_0, $memory_7);
#line 256
undef($memory_7);
#line 257
$memory_7 = wprinter_priv::get_tab_size();
#line 257
$memory_7 = $memory_3 * $memory_7;
#line 257
$memory_9 = $memory_6->{'end'};
#line 257
$memory_8 = string::length($memory_9);
#line 257
undef($memory_9);
#line 257
$memory_7 = $memory_7 + $memory_8;
#line 257
undef($memory_8);
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
undef($memory_6);
#line 257
$_[0] = $memory_0;return $memory_7;
#line 257
undef($memory_7);
#line 257
undef($memory_6);
#line 258
goto label_3;
#line 258
label_6:
#line 258
$memory_6 = c_rt_lib::ov_as($memory_4, 'arr');
#line 259
$memory_7 = $memory_6->{'arr'};
#line 260
$memory_8 = $memory_6->{'type'};
#line 260
$memory_9 = c_rt_lib::ov_is($memory_8, 'array');
#line 260
if (c_rt_lib::check_true($memory_9)) {goto label_18;}
#line 262
$memory_9 = c_rt_lib::ov_is($memory_8, 'list');
#line 262
if (c_rt_lib::check_true($memory_9)) {goto label_19;}
#line 264
$memory_9 = c_rt_lib::ov_is($memory_8, 'op_list');
#line 264
if (c_rt_lib::check_true($memory_9)) {goto label_20;}
#line 264
$memory_9 = "NOMATCHALERT";
#line 264
$memory_9 = [$memory_9,$memory_8];
#line 264
die(dfile::ssave($memory_9));
#line 260
label_18:
#line 261
$memory_11 = 1;
#line 261
$memory_11 = $memory_3 + $memory_11;
#line 261
$memory_10 = wprinter_priv::print_arr_in_lines($memory_0, $memory_7, $memory_11, $memory_2);
#line 261
undef($memory_11);
#line 261
$memory_2 = $memory_10;
#line 261
undef($memory_10);
#line 262
goto label_17;
#line 262
label_19:
#line 263
$memory_11 = c_rt_lib::to_nl(0);
#line 263
$memory_10 = wprinter_priv::process_list($memory_0, $memory_7, $memory_11, $memory_2, $memory_3);
#line 263
undef($memory_11);
#line 263
undef($memory_1);
#line 263
undef($memory_2);
#line 263
undef($memory_3);
#line 263
undef($memory_4);
#line 263
undef($memory_5);
#line 263
undef($memory_6);
#line 263
undef($memory_7);
#line 263
undef($memory_8);
#line 263
undef($memory_9);
#line 263
$_[0] = $memory_0;return $memory_10;
#line 263
undef($memory_10);
#line 264
goto label_17;
#line 264
label_20:
#line 265
$memory_11 = c_rt_lib::to_nl(1);
#line 265
$memory_10 = wprinter_priv::process_list($memory_0, $memory_7, $memory_11, $memory_2, $memory_3);
#line 265
undef($memory_11);
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
undef($memory_9);
#line 265
$_[0] = $memory_0;return $memory_10;
#line 265
undef($memory_10);
#line 266
goto label_17;
#line 266
label_17:
#line 266
undef($memory_8);
#line 266
undef($memory_9);
#line 266
undef($memory_7);
#line 266
undef($memory_6);
#line 267
goto label_3;
#line 267
label_7:
#line 267
$memory_6 = c_rt_lib::ov_as($memory_4, 'bind');
#line 268
$memory_7 = string::lf();
#line 268
$memory_8 = wprinter_priv::pind($memory_3);
#line 268
$memory_7 = $memory_7 . $memory_8;
#line 268
undef($memory_8);
#line 268
wprinter_priv::state_print($memory_0, $memory_7);
#line 268
undef($memory_7);
#line 269
$memory_7 = $memory_6->{'first'};
#line 269
$memory_7 = $memory_7->{'len'};
#line 269
$memory_8 = wprinter_priv::get_tab_size();
#line 269
$memory_8 = $memory_3 * $memory_8;
#line 269
$memory_7 = $memory_7 + $memory_8;
#line 269
undef($memory_8);
#line 269
$memory_2 = $memory_7;
#line 269
undef($memory_7);
#line 270
$memory_7 = $memory_6->{'first'};
#line 270
wprinter_priv::print_sim_rec($memory_0, $memory_7);
#line 270
undef($memory_7);
#line 271
$memory_8 = $memory_6->{'second'};
#line 271
$memory_7 = wprinter_priv::print_t_rec($memory_0, $memory_8, $memory_2, $memory_3);
#line 271
undef($memory_8);
#line 271
undef($memory_1);
#line 271
undef($memory_2);
#line 271
undef($memory_3);
#line 271
undef($memory_4);
#line 271
undef($memory_5);
#line 271
undef($memory_6);
#line 271
$_[0] = $memory_0;return $memory_7;
#line 271
undef($memory_7);
#line 271
undef($memory_6);
#line 272
goto label_3;
#line 272
label_8:
#line 273
$memory_6 = " ";
#line 273
wprinter_priv::state_print($memory_0, $memory_6);
#line 273
undef($memory_6);
#line 274
$memory_6 = 1;
#line 274
$memory_6 = $memory_2 + $memory_6;
#line 274
undef($memory_1);
#line 274
undef($memory_2);
#line 274
undef($memory_3);
#line 274
undef($memory_4);
#line 274
undef($memory_5);
#line 274
$_[0] = $memory_0;return $memory_6;
#line 274
undef($memory_6);
#line 275
goto label_3;
#line 275
label_9:
#line 275
$memory_6 = c_rt_lib::ov_as($memory_4, 'str_arr');
#line 276
$memory_7 = wprinter_priv::print_str_arr($memory_0, $memory_6, $memory_2, $memory_3);
#line 276
undef($memory_1);
#line 276
undef($memory_2);
#line 276
undef($memory_3);
#line 276
undef($memory_4);
#line 276
undef($memory_5);
#line 276
undef($memory_6);
#line 276
$_[0] = $memory_0;return $memory_7;
#line 276
undef($memory_7);
#line 276
undef($memory_6);
#line 277
goto label_3;
#line 277
label_3:
#line 277
undef($memory_4);
#line 277
undef($memory_5);
#line 278
undef($memory_1);
#line 278
undef($memory_3);
#line 278
$_[0] = $memory_0;return $memory_2;
#line 278
undef($memory_1);
#line 278
undef($memory_2);
#line 278
undef($memory_3);
#line 278
$_[0] = $memory_0;return;
$_[0] = $memory_0;}
