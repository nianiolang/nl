use c_rt_lib;
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
#line 12
$memory_0 = 4;
#line 12
return $memory_0;
#line 12
undef($memory_0);
#line 12
return;
}

my $_get_tab_size;
sub wprinter_priv::get_tab_size() {
	$_get_tab_size = wprinter_priv::__get_tab_size() unless defined $_get_tab_size;
	return $_get_tab_size;
}

sub wprinter_priv::__get_line_width() {
my $memory_0;
#line 16
$memory_0 = 120;
#line 16
return $memory_0;
#line 16
undef($memory_0);
#line 16
return;
}

my $_get_line_width;
sub wprinter_priv::get_line_width() {
	$_get_line_width = wprinter_priv::__get_line_width() unless defined $_get_line_width;
	return $_get_line_width;
}

sub wprinter_priv::__get_sep() {
my $memory_0;my $memory_1;my $memory_2;
#line 20
$memory_1 = 1;
#line 20
$memory_2 = c_rt_lib::ov_mk_none('sep');
#line 20
$memory_0 = {len => $memory_1,el => $memory_2,};
#line 20
undef($memory_1);
#line 20
undef($memory_2);
#line 20
return $memory_0;
#line 20
undef($memory_0);
#line 20
return;
}

my $_get_sep;
sub wprinter_priv::get_sep() {
	$_get_sep = wprinter_priv::__get_sep() unless defined $_get_sep;
	return $_get_sep;
}

sub wprinter::__state_t() {
my $memory_0;my $memory_1;my $memory_2;
#line 24
$memory_2 = ptd::sim();
#line 24
$memory_1 = {out => $memory_2,};
#line 24
undef($memory_2);
#line 24
$memory_0 = ptd::rec($memory_1);
#line 24
undef($memory_1);
#line 24
return $memory_0;
#line 24
undef($memory_0);
#line 24
return;
}

my $_state_t;
sub wprinter::state_t() {
	$_state_t = wprinter::__state_t() unless defined $_state_t;
	return $_state_t;
}

sub wprinter_priv::is_to_long($) {
my $memory_0;my $memory_1;$memory_0 = $_[0];
#line 28
$memory_1 = wprinter_priv::get_line_width();
#line 28
$memory_1 = c_rt_lib::to_nl($memory_0 > $memory_1);
#line 28
undef($memory_0);
#line 28
return $memory_1;
#line 28
undef($memory_1);
#line 28
undef($memory_0);
#line 28
return;
}

sub wprinter_priv::state_print($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];
#line 32
$memory_2 = "out";
#line 32
$memory_2 = c_rt_lib::get_ref_hash($memory_0, $memory_2);
#line 32
$memory_2 = $memory_2 . $memory_1;
#line 32
$memory_3 = "out";
#line 32
c_rt_lib::set_ref_hash($memory_0, $memory_3, $memory_2);
#line 32
undef($memory_3);
#line 32
undef($memory_2);
#line 32
undef($memory_1);
#line 32
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub wprinter_priv::pind($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;$memory_0 = $_[0];
#line 36
$memory_1 = "";
#line 37
$memory_2 = 0;
#line 37
$memory_3 = 1;
#line 37
label_3:
#line 37
$memory_4 = c_rt_lib::to_nl($memory_2 >= $memory_0);
#line 37
if (c_rt_lib::check_true($memory_4)) {goto label_13;}
#line 37
$memory_6 = 9;
#line 37
$memory_5 = string::chr($memory_6);
#line 37
undef($memory_6);
#line 37
$memory_1 = $memory_1 . $memory_5;
#line 37
undef($memory_5);
#line 37
$memory_2 = $memory_2 + $memory_3;
#line 37
goto label_3;
#line 37
label_13:
#line 37
undef($memory_2);
#line 37
undef($memory_3);
#line 37
undef($memory_4);
#line 38
undef($memory_0);
#line 38
return $memory_1;
#line 38
undef($memory_1);
#line 38
undef($memory_0);
#line 38
return;
}

sub wprinter::__arr_kind_t() {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;
#line 42
$memory_2 = ptd::none();
#line 42
$memory_3 = ptd::none();
#line 42
$memory_4 = ptd::none();
#line 42
$memory_1 = {array => $memory_2,list => $memory_3,op_list => $memory_4,};
#line 42
undef($memory_2);
#line 42
undef($memory_3);
#line 42
undef($memory_4);
#line 42
$memory_0 = ptd::var($memory_1);
#line 42
undef($memory_1);
#line 42
return $memory_0;
#line 42
undef($memory_0);
#line 42
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
#line 49
$memory_7 = {
	module => "wprinter",
	name => "pretty_arr_t",
};
#line 49
$memory_7 = c_rt_lib::ov_mk_arg('ref', $memory_7);
#line 49
$memory_8 = {
	module => "wprinter",
	name => "arr_kind_t",
};
#line 49
$memory_8 = c_rt_lib::ov_mk_arg('ref', $memory_8);
#line 49
$memory_6 = {arr => $memory_7,type => $memory_8,};
#line 49
undef($memory_7);
#line 49
undef($memory_8);
#line 49
$memory_5 = ptd::rec($memory_6);
#line 49
undef($memory_6);
#line 50
$memory_8 = {
	module => "wprinter",
	name => "pretty_arr_t",
};
#line 50
$memory_8 = c_rt_lib::ov_mk_arg('ref', $memory_8);
#line 50
$memory_9 = ptd::sim();
#line 50
$memory_10 = ptd::sim();
#line 50
$memory_7 = {arr => $memory_8,start => $memory_9,end => $memory_10,};
#line 50
undef($memory_8);
#line 50
undef($memory_9);
#line 50
undef($memory_10);
#line 50
$memory_6 = ptd::rec($memory_7);
#line 50
undef($memory_7);
#line 51
$memory_9 = {
	module => "wprinter",
	name => "pretty_t",
};
#line 51
$memory_9 = c_rt_lib::ov_mk_arg('ref', $memory_9);
#line 51
$memory_10 = {
	module => "wprinter",
	name => "pretty_t",
};
#line 51
$memory_10 = c_rt_lib::ov_mk_arg('ref', $memory_10);
#line 51
$memory_8 = {first => $memory_9,second => $memory_10,};
#line 51
undef($memory_9);
#line 51
undef($memory_10);
#line 51
$memory_7 = ptd::rec($memory_8);
#line 51
undef($memory_8);
#line 52
$memory_8 = ptd::sim();
#line 53
$memory_9 = ptd::none();
#line 54
$memory_10 = {
	module => "wprinter",
	name => "str_arr_t",
};
#line 54
$memory_10 = c_rt_lib::ov_mk_arg('ref', $memory_10);
#line 54
$memory_4 = {arr => $memory_5,arr_decl => $memory_6,bind => $memory_7,sim => $memory_8,sep => $memory_9,str_arr => $memory_10,};
#line 54
undef($memory_5);
#line 54
undef($memory_6);
#line 54
undef($memory_7);
#line 54
undef($memory_8);
#line 54
undef($memory_9);
#line 54
undef($memory_10);
#line 54
$memory_3 = ptd::var($memory_4);
#line 54
undef($memory_4);
#line 54
$memory_1 = {len => $memory_2,el => $memory_3,};
#line 54
undef($memory_2);
#line 54
undef($memory_3);
#line 54
$memory_0 = ptd::rec($memory_1);
#line 54
undef($memory_1);
#line 54
return $memory_0;
#line 54
undef($memory_0);
#line 54
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
#line 64
$memory_1 = {
	module => "wprinter",
	name => "pretty_t",
};
#line 64
$memory_1 = c_rt_lib::ov_mk_arg('ref', $memory_1);
#line 64
$memory_0 = ptd::arr($memory_1);
#line 64
undef($memory_1);
#line 64
return $memory_0;
#line 64
undef($memory_0);
#line 64
return;
}

my $_pretty_arr_t;
sub wprinter::pretty_arr_t() {
	$_pretty_arr_t = wprinter::__pretty_arr_t() unless defined $_pretty_arr_t;
	return $_pretty_arr_t;
}

sub wprinter::__get_sep() {
my $memory_0;
#line 68
$memory_0 = wprinter_priv::get_sep();
#line 68
return $memory_0;
#line 68
undef($memory_0);
#line 68
return;
}

my $_get_sep;
sub wprinter::get_sep() {
	$_get_sep = wprinter::__get_sep() unless defined $_get_sep;
	return $_get_sep;
}

sub wprinter_priv::count_len($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;$memory_0 = $_[0];
#line 72
$memory_1 = 0;
#line 73
$memory_3 = 0;
#line 73
$memory_4 = 1;
#line 73
$memory_5 = c_rt_lib::array_len($memory_0);
#line 73
label_4:
#line 73
$memory_6 = c_rt_lib::to_nl($memory_3 >= $memory_5);
#line 73
if (c_rt_lib::check_true($memory_6)) {goto label_13;}
#line 73
$memory_2 = $memory_0->[$memory_3];
#line 74
$memory_7 = $memory_2->{'len'};
#line 74
$memory_1 = $memory_1 + $memory_7;
#line 74
undef($memory_7);
#line 75
$memory_3 = $memory_3 + $memory_4;
#line 75
goto label_4;
#line 75
label_13:
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
#line 76
undef($memory_0);
#line 76
return $memory_1;
#line 76
undef($memory_1);
#line 76
undef($memory_0);
#line 76
return;
}

sub wprinter::build_pretty_a($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;$memory_0 = $_[0];
#line 80
$memory_2 = wprinter_priv::count_len($memory_0);
#line 80
$memory_4 = c_rt_lib::ov_mk_none('array');
#line 80
$memory_3 = {arr => $memory_0,type => $memory_4,};
#line 80
undef($memory_4);
#line 80
$memory_3 = c_rt_lib::ov_mk_arg('arr', $memory_3);
#line 80
$memory_1 = {len => $memory_2,el => $memory_3,};
#line 80
undef($memory_2);
#line 80
undef($memory_3);
#line 80
undef($memory_0);
#line 80
return $memory_1;
#line 80
undef($memory_1);
#line 80
undef($memory_0);
#line 80
return;
}

sub wprinter::build_pretty_l($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;$memory_0 = $_[0];
#line 84
$memory_2 = wprinter_priv::count_len($memory_0);
#line 84
$memory_4 = c_rt_lib::ov_mk_none('list');
#line 84
$memory_3 = {arr => $memory_0,type => $memory_4,};
#line 84
undef($memory_4);
#line 84
$memory_3 = c_rt_lib::ov_mk_arg('arr', $memory_3);
#line 84
$memory_1 = {len => $memory_2,el => $memory_3,};
#line 84
undef($memory_2);
#line 84
undef($memory_3);
#line 84
undef($memory_0);
#line 84
return $memory_1;
#line 84
undef($memory_1);
#line 84
undef($memory_0);
#line 84
return;
}

sub wprinter::build_pretty_op_l($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;$memory_0 = $_[0];
#line 88
$memory_2 = wprinter_priv::count_len($memory_0);
#line 88
$memory_4 = c_rt_lib::ov_mk_none('op_list');
#line 88
$memory_3 = {arr => $memory_0,type => $memory_4,};
#line 88
undef($memory_4);
#line 88
$memory_3 = c_rt_lib::ov_mk_arg('arr', $memory_3);
#line 88
$memory_1 = {len => $memory_2,el => $memory_3,};
#line 88
undef($memory_2);
#line 88
undef($memory_3);
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

sub wprinter::build_pretty_bind($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;$memory_0 = $_[0];$memory_1 = $_[1];
#line 92
$memory_3 = $memory_0->{'len'};
#line 92
$memory_4 = $memory_1->{'len'};
#line 92
$memory_3 = $memory_3 + $memory_4;
#line 92
undef($memory_4);
#line 92
$memory_4 = {first => $memory_0,second => $memory_1,};
#line 92
$memory_4 = c_rt_lib::ov_mk_arg('bind', $memory_4);
#line 92
$memory_2 = {len => $memory_3,el => $memory_4,};
#line 92
undef($memory_3);
#line 92
undef($memory_4);
#line 92
undef($memory_0);
#line 92
undef($memory_1);
#line 92
return $memory_2;
#line 92
undef($memory_2);
#line 92
undef($memory_0);
#line 92
undef($memory_1);
#line 92
return;
}

sub wprinter::build_pretty_arr_decl($$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;$memory_0 = $_[0];$memory_1 = $_[1];$memory_2 = $_[2];
#line 98
$memory_4 = wprinter_priv::count_len($memory_0);
#line 98
$memory_5 = string::length($memory_1);
#line 98
$memory_4 = $memory_4 + $memory_5;
#line 98
undef($memory_5);
#line 98
$memory_5 = string::length($memory_2);
#line 98
$memory_4 = $memory_4 + $memory_5;
#line 98
undef($memory_5);
#line 99
$memory_5 = {arr => $memory_0,start => $memory_1,end => $memory_2,};
#line 99
$memory_5 = c_rt_lib::ov_mk_arg('arr_decl', $memory_5);
#line 99
$memory_3 = {len => $memory_4,el => $memory_5,};
#line 99
undef($memory_4);
#line 99
undef($memory_5);
#line 99
undef($memory_0);
#line 99
undef($memory_1);
#line 99
undef($memory_2);
#line 99
return $memory_3;
#line 99
undef($memory_3);
#line 99
undef($memory_0);
#line 99
undef($memory_1);
#line 99
undef($memory_2);
#line 99
return;
}

sub wprinter::build_sim($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;$memory_0 = $_[0];
#line 104
$memory_2 = string::length($memory_0);
#line 104
$memory_3 = c_rt_lib::ov_mk_arg('sim', $memory_0);
#line 104
$memory_1 = {len => $memory_2,el => $memory_3,};
#line 104
undef($memory_2);
#line 104
undef($memory_3);
#line 104
undef($memory_0);
#line 104
return $memory_1;
#line 104
undef($memory_1);
#line 104
undef($memory_0);
#line 104
return;
}

sub wprinter::build_str_arr($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;$memory_0 = $_[0];$memory_1 = $_[1];
#line 111
$memory_2 = c_rt_lib::ov_is($memory_1, 'end');
#line 111
if (c_rt_lib::check_true($memory_2)) {goto label_7;}
#line 113
$memory_2 = c_rt_lib::ov_is($memory_1, 'new_line');
#line 113
if (c_rt_lib::check_true($memory_2)) {goto label_29;}
#line 113
$memory_2 = "NOMATCHALERT";
#line 113
$memory_2 = [$memory_2,$memory_1];
#line 113
die(dfile::ssave($memory_2));
#line 111
label_7:
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
if (c_rt_lib::check_true($memory_3)) {goto label_26;}
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
goto label_26;
#line 112
label_26:
#line 112
undef($memory_3);
#line 113
goto label_31;
#line 113
label_29:
#line 114
goto label_31;
#line 114
label_31:
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
if (c_rt_lib::check_true($memory_6)) {goto label_10;}
#line 119
$memory_2 = $memory_1->[$memory_3];
#line 120
wprinter_priv::print_sim_rec($memory_0, $memory_2);
#line 121
$memory_3 = $memory_3 + $memory_4;
#line 121
goto label_3;
#line 121
label_10:
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
#line 126
$memory_4 = $memory_2;
#line 127
$memory_5 = $memory_1->{'arr'};
#line 128
$memory_9 = 0;
#line 128
$memory_8 = $memory_5->[$memory_9];
#line 128
undef($memory_9);
#line 128
$memory_7 = string::length($memory_8);
#line 128
undef($memory_8);
#line 128
$memory_7 = $memory_2 + $memory_7;
#line 128
$memory_6 = wprinter_priv::is_to_long($memory_7);
#line 128
undef($memory_7);
#line 128
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 128
if (c_rt_lib::check_true($memory_6)) {goto label_23;}
#line 129
$memory_7 = string::lf();
#line 129
wprinter_priv::state_print($memory_0, $memory_7);
#line 129
undef($memory_7);
#line 130
$memory_7 = wprinter_priv::pind($memory_3);
#line 130
wprinter_priv::state_print($memory_0, $memory_7);
#line 130
undef($memory_7);
#line 131
$memory_7 = wprinter_priv::get_tab_size();
#line 131
$memory_7 = $memory_7 * $memory_3;
#line 131
$memory_4 = $memory_7;
#line 131
undef($memory_7);
#line 132
goto label_23;
#line 132
label_23:
#line 132
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
label_29:
#line 134
$memory_11 = c_rt_lib::to_nl($memory_8 >= $memory_10);
#line 134
if (c_rt_lib::check_true($memory_11)) {goto label_62;}
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
if (c_rt_lib::check_true($memory_12)) {goto label_55;}
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
goto label_55;
#line 140
label_55:
#line 140
undef($memory_12);
#line 141
$memory_12 = 1;
#line 141
$memory_6 = $memory_6 + $memory_12;
#line 141
undef($memory_12);
#line 142
$memory_8 = $memory_8 + $memory_9;
#line 142
goto label_29;
#line 142
label_62:
#line 142
undef($memory_7);
#line 142
undef($memory_8);
#line 142
undef($memory_9);
#line 142
undef($memory_10);
#line 142
undef($memory_11);
#line 143
$memory_7 = $memory_1->{'last'};
#line 143
$memory_8 = c_rt_lib::ov_is($memory_7, 'new_line');
#line 143
if (c_rt_lib::check_true($memory_8)) {goto label_76;}
#line 146
$memory_8 = c_rt_lib::ov_is($memory_7, 'end');
#line 146
if (c_rt_lib::check_true($memory_8)) {goto label_88;}
#line 146
$memory_8 = "NOMATCHALERT";
#line 146
$memory_8 = [$memory_8,$memory_7];
#line 146
die(dfile::ssave($memory_8));
#line 143
label_76:
#line 144
$memory_9 = string::lf();
#line 144
$memory_10 = wprinter_priv::pind($memory_3);
#line 144
$memory_9 = $memory_9 . $memory_10;
#line 144
undef($memory_10);
#line 144
wprinter_priv::state_print($memory_0, $memory_9);
#line 144
undef($memory_9);
#line 145
$memory_9 = wprinter_priv::get_tab_size();
#line 145
$memory_9 = $memory_9 * $memory_3;
#line 145
$memory_4 = $memory_9;
#line 145
undef($memory_9);
#line 146
goto label_90;
#line 146
label_88:
#line 147
goto label_90;
#line 147
label_90:
#line 147
undef($memory_7);
#line 147
undef($memory_8);
#line 148
undef($memory_1);
#line 148
undef($memory_2);
#line 148
undef($memory_3);
#line 148
undef($memory_5);
#line 148
undef($memory_6);
#line 148
$_[0] = $memory_0;return $memory_4;
#line 148
undef($memory_4);
#line 148
undef($memory_5);
#line 148
undef($memory_6);
#line 148
undef($memory_1);
#line 148
undef($memory_2);
#line 148
undef($memory_3);
#line 148
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub wprinter_priv::print_sim_rec($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];
#line 152
$memory_2 = $memory_1->{'el'};
#line 152
$memory_3 = c_rt_lib::ov_is($memory_2, 'sim');
#line 152
if (c_rt_lib::check_true($memory_3)) {goto label_16;}
#line 154
$memory_3 = c_rt_lib::ov_is($memory_2, 'arr');
#line 154
if (c_rt_lib::check_true($memory_3)) {goto label_21;}
#line 156
$memory_3 = c_rt_lib::ov_is($memory_2, 'sep');
#line 156
if (c_rt_lib::check_true($memory_3)) {goto label_28;}
#line 158
$memory_3 = c_rt_lib::ov_is($memory_2, 'arr_decl');
#line 158
if (c_rt_lib::check_true($memory_3)) {goto label_33;}
#line 162
$memory_3 = c_rt_lib::ov_is($memory_2, 'bind');
#line 162
if (c_rt_lib::check_true($memory_3)) {goto label_46;}
#line 165
$memory_3 = c_rt_lib::ov_is($memory_2, 'str_arr');
#line 165
if (c_rt_lib::check_true($memory_3)) {goto label_56;}
#line 165
$memory_3 = "NOMATCHALERT";
#line 165
$memory_3 = [$memory_3,$memory_2];
#line 165
die(dfile::ssave($memory_3));
#line 152
label_16:
#line 152
$memory_4 = c_rt_lib::ov_as($memory_2, 'sim');
#line 153
wprinter_priv::state_print($memory_0, $memory_4);
#line 153
undef($memory_4);
#line 154
goto label_63;
#line 154
label_21:
#line 154
$memory_4 = c_rt_lib::ov_as($memory_2, 'arr');
#line 155
$memory_5 = $memory_4->{'arr'};
#line 155
wprinter_priv::print_sim_arr($memory_0, $memory_5);
#line 155
undef($memory_5);
#line 155
undef($memory_4);
#line 156
goto label_63;
#line 156
label_28:
#line 157
$memory_4 = " ";
#line 157
wprinter_priv::state_print($memory_0, $memory_4);
#line 157
undef($memory_4);
#line 158
goto label_63;
#line 158
label_33:
#line 158
$memory_4 = c_rt_lib::ov_as($memory_2, 'arr_decl');
#line 159
$memory_5 = $memory_4->{'start'};
#line 159
wprinter_priv::state_print($memory_0, $memory_5);
#line 159
undef($memory_5);
#line 160
$memory_5 = $memory_4->{'arr'};
#line 160
wprinter_priv::print_sim_arr($memory_0, $memory_5);
#line 160
undef($memory_5);
#line 161
$memory_5 = $memory_4->{'end'};
#line 161
wprinter_priv::state_print($memory_0, $memory_5);
#line 161
undef($memory_5);
#line 161
undef($memory_4);
#line 162
goto label_63;
#line 162
label_46:
#line 162
$memory_4 = c_rt_lib::ov_as($memory_2, 'bind');
#line 163
$memory_5 = $memory_4->{'first'};
#line 163
wprinter_priv::print_sim_rec($memory_0, $memory_5);
#line 163
undef($memory_5);
#line 164
$memory_5 = $memory_4->{'second'};
#line 164
wprinter_priv::print_sim_rec($memory_0, $memory_5);
#line 164
undef($memory_5);
#line 164
undef($memory_4);
#line 165
goto label_63;
#line 165
label_56:
#line 165
$memory_4 = c_rt_lib::ov_as($memory_2, 'str_arr');
#line 166
$memory_5 = [];
#line 166
die(dfile::ssave($memory_5));
#line 166
undef($memory_5);
#line 166
undef($memory_4);
#line 167
goto label_63;
#line 167
label_63:
#line 167
undef($memory_2);
#line 167
undef($memory_3);
#line 167
undef($memory_1);
#line 167
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub wprinter::print_t($$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];$memory_2 = $_[2];
#line 171
$memory_3 = wprinter_priv::get_tab_size();
#line 171
$memory_3 = $memory_2 * $memory_3;
#line 171
wprinter_priv::print_t_rec($memory_0, $memory_1, $memory_3, $memory_2);
#line 171
undef($memory_3);
#line 171
undef($memory_1);
#line 171
undef($memory_2);
#line 171
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub wprinter_priv::flush_list($$$$$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;my $memory_13;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];$memory_2 = $_[2];$memory_3 = $_[3];$memory_4 = $_[4];$memory_5 = $_[5];
#line 176
$memory_6 = wprinter_priv::is_to_long($memory_3);
#line 176
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 176
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 176
if (c_rt_lib::check_true($memory_6)) {goto label_27;}
#line 177
$memory_8 = 0;
#line 177
$memory_9 = 1;
#line 177
$memory_10 = c_rt_lib::array_len($memory_1);
#line 177
label_7:
#line 177
$memory_11 = c_rt_lib::to_nl($memory_8 >= $memory_10);
#line 177
if (c_rt_lib::check_true($memory_11)) {goto label_14;}
#line 177
$memory_7 = $memory_1->[$memory_8];
#line 178
wprinter_priv::print_sim_rec($memory_0, $memory_7);
#line 179
$memory_8 = $memory_8 + $memory_9;
#line 179
goto label_7;
#line 179
label_14:
#line 179
undef($memory_7);
#line 179
undef($memory_8);
#line 179
undef($memory_9);
#line 179
undef($memory_10);
#line 179
undef($memory_11);
#line 180
undef($memory_1);
#line 180
undef($memory_2);
#line 180
undef($memory_4);
#line 180
undef($memory_5);
#line 180
undef($memory_6);
#line 180
$_[0] = $memory_0;return $memory_3;
#line 181
goto label_103;
#line 181
label_27:
#line 182
$memory_8 = array::len($memory_1);
#line 182
$memory_9 = 1;
#line 182
$memory_8 = $memory_8 - $memory_9;
#line 182
undef($memory_9);
#line 182
$memory_7 = $memory_1->[$memory_8];
#line 182
undef($memory_8);
#line 182
$memory_7 = $memory_7->{'el'};
#line 182
$memory_7 = c_rt_lib::ov_is($memory_7, 'str_arr');
#line 182
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 182
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 182
if (c_rt_lib::check_true($memory_7)) {goto label_73;}
#line 183
$memory_8 = 1;
#line 183
$memory_8 = $memory_4 + $memory_8;
#line 183
$memory_10 = wprinter_priv::get_tab_size();
#line 183
$memory_8 = $memory_8 * $memory_10;
#line 183
undef($memory_10);
#line 183
$memory_8 = c_rt_lib::to_nl($memory_8 < $memory_2);
#line 183
$memory_9 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 183
if (c_rt_lib::check_true($memory_9)) {goto label_49;}
#line 183
$memory_8 = $memory_5;
#line 183
$memory_8 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 183
label_49:
#line 183
undef($memory_9);
#line 183
$memory_8 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 183
if (c_rt_lib::check_true($memory_8)) {goto label_70;}
#line 184
$memory_9 = string::lf();
#line 184
$memory_11 = 1;
#line 184
$memory_11 = $memory_4 + $memory_11;
#line 184
$memory_10 = wprinter_priv::pind($memory_11);
#line 184
undef($memory_11);
#line 184
$memory_9 = $memory_9 . $memory_10;
#line 184
undef($memory_10);
#line 184
wprinter_priv::state_print($memory_0, $memory_9);
#line 184
undef($memory_9);
#line 185
$memory_9 = 1;
#line 185
$memory_9 = $memory_4 + $memory_9;
#line 185
$memory_10 = wprinter_priv::get_tab_size();
#line 185
$memory_9 = $memory_9 * $memory_10;
#line 185
undef($memory_10);
#line 185
$memory_2 = $memory_9;
#line 185
undef($memory_9);
#line 186
goto label_70;
#line 186
label_70:
#line 186
undef($memory_8);
#line 187
goto label_73;
#line 187
label_73:
#line 187
undef($memory_7);
#line 188
$memory_8 = 0;
#line 188
$memory_9 = 1;
#line 188
$memory_10 = c_rt_lib::array_len($memory_1);
#line 188
label_78:
#line 188
$memory_11 = c_rt_lib::to_nl($memory_8 >= $memory_10);
#line 188
if (c_rt_lib::check_true($memory_11)) {goto label_90;}
#line 188
$memory_7 = $memory_1->[$memory_8];
#line 189
$memory_13 = 1;
#line 189
$memory_13 = $memory_4 + $memory_13;
#line 189
$memory_12 = wprinter_priv::print_t_rec($memory_0, $memory_7, $memory_2, $memory_13);
#line 189
undef($memory_13);
#line 189
$memory_2 = $memory_12;
#line 189
undef($memory_12);
#line 190
$memory_8 = $memory_8 + $memory_9;
#line 190
goto label_78;
#line 190
label_90:
#line 190
undef($memory_7);
#line 190
undef($memory_8);
#line 190
undef($memory_9);
#line 190
undef($memory_10);
#line 190
undef($memory_11);
#line 191
undef($memory_1);
#line 191
undef($memory_3);
#line 191
undef($memory_4);
#line 191
undef($memory_5);
#line 191
undef($memory_6);
#line 191
$_[0] = $memory_0;return $memory_2;
#line 192
goto label_103;
#line 192
label_103:
#line 192
undef($memory_6);
#line 192
undef($memory_1);
#line 192
undef($memory_2);
#line 192
undef($memory_3);
#line 192
undef($memory_4);
#line 192
undef($memory_5);
#line 192
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub wprinter_priv::print_arr_in_lines($$$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];$memory_2 = $_[2];$memory_3 = $_[3];
#line 197
$memory_5 = 0;
#line 197
$memory_6 = 1;
#line 197
$memory_7 = c_rt_lib::array_len($memory_1);
#line 197
label_3:
#line 197
$memory_8 = c_rt_lib::to_nl($memory_5 >= $memory_7);
#line 197
if (c_rt_lib::check_true($memory_8)) {goto label_32;}
#line 197
$memory_4 = $memory_1->[$memory_5];
#line 198
$memory_9 = $memory_4->{'el'};
#line 198
$memory_9 = c_rt_lib::ov_is($memory_9, 'sep');
#line 198
$memory_9 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_9));
#line 198
if (c_rt_lib::check_true($memory_9)) {goto label_24;}
#line 199
$memory_10 = string::lf();
#line 199
$memory_11 = wprinter_priv::pind($memory_2);
#line 199
$memory_10 = $memory_10 . $memory_11;
#line 199
undef($memory_11);
#line 199
wprinter_priv::state_print($memory_0, $memory_10);
#line 199
undef($memory_10);
#line 200
$memory_10 = wprinter_priv::get_tab_size();
#line 200
$memory_10 = $memory_2 * $memory_10;
#line 200
$memory_3 = $memory_10;
#line 200
undef($memory_10);
#line 201
undef($memory_9);
#line 201
goto label_29;
#line 202
goto label_24;
#line 202
label_24:
#line 202
undef($memory_9);
#line 203
$memory_9 = wprinter_priv::print_t_rec($memory_0, $memory_4, $memory_3, $memory_2);
#line 203
$memory_3 = $memory_9;
#line 203
undef($memory_9);
#line 203
label_29:
#line 204
$memory_5 = $memory_5 + $memory_6;
#line 204
goto label_3;
#line 204
label_32:
#line 204
undef($memory_4);
#line 204
undef($memory_5);
#line 204
undef($memory_6);
#line 204
undef($memory_7);
#line 204
undef($memory_8);
#line 205
undef($memory_1);
#line 205
undef($memory_2);
#line 205
$_[0] = $memory_0;return $memory_3;
#line 205
undef($memory_1);
#line 205
undef($memory_2);
#line 205
undef($memory_3);
#line 205
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub wprinter_priv::process_list($$$$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;my $memory_13;my $memory_14;my $memory_15;my $memory_16;my $memory_17;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];$memory_2 = $_[2];$memory_3 = $_[3];$memory_4 = $_[4];
#line 210
$memory_5 = [];
#line 211
$memory_6 = 0;
#line 212
$memory_7 = c_rt_lib::to_nl(1);
#line 213
$memory_8 = array::len($memory_1);
#line 213
$memory_9 = 0;
#line 213
$memory_10 = 1;
#line 213
label_6:
#line 213
$memory_11 = c_rt_lib::to_nl($memory_9 >= $memory_8);
#line 213
if (c_rt_lib::check_true($memory_11)) {goto label_60;}
#line 214
$memory_12 = $memory_1->[$memory_9];
#line 215
$memory_13 = $memory_12->{'el'};
#line 215
$memory_13 = c_rt_lib::ov_is($memory_13, 'sep');
#line 215
$memory_13 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_13));
#line 215
if (c_rt_lib::check_true($memory_13)) {goto label_49;}
#line 216
$memory_15 = $memory_6 + $memory_3;
#line 216
if (c_rt_lib::check_true($memory_2)) {goto label_18;}
#line 216
$memory_16 = 0;
#line 216
goto label_20;
#line 216
label_18:
#line 216
$memory_16 = 1;
#line 216
label_20:
#line 216
$memory_16 = $memory_4 - $memory_16;
#line 216
$memory_17 = $memory_7;
#line 216
if (c_rt_lib::check_true($memory_7)) {goto label_26;}
#line 216
$memory_17 = $memory_2;
#line 216
$memory_17 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_17));
#line 216
label_26:
#line 216
$memory_14 = wprinter_priv::flush_list($memory_0, $memory_5, $memory_3, $memory_15, $memory_16, $memory_17);
#line 216
undef($memory_17);
#line 216
undef($memory_16);
#line 216
undef($memory_15);
#line 216
$memory_3 = $memory_14;
#line 216
undef($memory_14);
#line 217
$memory_14 = c_rt_lib::to_nl(0);
#line 217
$memory_7 = $memory_14;
#line 217
undef($memory_14);
#line 218
$memory_14 = " ";
#line 218
wprinter_priv::state_print($memory_0, $memory_14);
#line 218
undef($memory_14);
#line 219
$memory_14 = 1;
#line 219
$memory_3 = $memory_3 + $memory_14;
#line 219
undef($memory_14);
#line 220
$memory_14 = [];
#line 220
$memory_5 = $memory_14;
#line 220
undef($memory_14);
#line 221
$memory_14 = 0;
#line 221
$memory_6 = $memory_14;
#line 221
undef($memory_14);
#line 222
goto label_55;
#line 222
label_49:
#line 223
array::push($memory_5, $memory_12);
#line 224
$memory_14 = $memory_12->{'len'};
#line 224
$memory_6 = $memory_6 + $memory_14;
#line 224
undef($memory_14);
#line 225
goto label_55;
#line 225
label_55:
#line 225
undef($memory_13);
#line 225
undef($memory_12);
#line 226
$memory_9 = $memory_9 + $memory_10;
#line 226
goto label_6;
#line 226
label_60:
#line 226
undef($memory_8);
#line 226
undef($memory_9);
#line 226
undef($memory_10);
#line 226
undef($memory_11);
#line 228
$memory_8 = array::len($memory_5);
#line 228
$memory_9 = 0;
#line 228
$memory_8 = c_rt_lib::to_nl($memory_8 > $memory_9);
#line 228
undef($memory_9);
#line 228
$memory_8 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 228
if (c_rt_lib::check_true($memory_8)) {goto label_91;}
#line 227
$memory_10 = $memory_6 + $memory_3;
#line 227
if (c_rt_lib::check_true($memory_2)) {goto label_75;}
#line 227
$memory_11 = 0;
#line 227
goto label_77;
#line 227
label_75:
#line 227
$memory_11 = 1;
#line 227
label_77:
#line 227
$memory_11 = $memory_4 - $memory_11;
#line 227
$memory_12 = $memory_7;
#line 227
if (c_rt_lib::check_true($memory_7)) {goto label_83;}
#line 227
$memory_12 = $memory_2;
#line 227
$memory_12 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_12));
#line 227
label_83:
#line 227
$memory_9 = wprinter_priv::flush_list($memory_0, $memory_5, $memory_3, $memory_10, $memory_11, $memory_12);
#line 227
undef($memory_12);
#line 227
undef($memory_11);
#line 227
undef($memory_10);
#line 227
$memory_3 = $memory_9;
#line 227
undef($memory_9);
#line 227
goto label_91;
#line 227
label_91:
#line 227
undef($memory_8);
#line 229
undef($memory_1);
#line 229
undef($memory_2);
#line 229
undef($memory_4);
#line 229
undef($memory_5);
#line 229
undef($memory_6);
#line 229
undef($memory_7);
#line 229
$_[0] = $memory_0;return $memory_3;
#line 229
undef($memory_5);
#line 229
undef($memory_6);
#line 229
undef($memory_7);
#line 229
undef($memory_1);
#line 229
undef($memory_2);
#line 229
undef($memory_3);
#line 229
undef($memory_4);
#line 229
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub wprinter_priv::print_t_rec($$$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];$memory_2 = $_[2];$memory_3 = $_[3];
#line 234
$memory_5 = $memory_1->{'len'};
#line 234
$memory_5 = $memory_5 + $memory_2;
#line 234
$memory_4 = wprinter_priv::is_to_long($memory_5);
#line 234
undef($memory_5);
#line 234
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 234
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 234
if (c_rt_lib::check_true($memory_4)) {goto label_16;}
#line 235
wprinter_priv::print_sim_rec($memory_0, $memory_1);
#line 236
$memory_5 = $memory_1->{'len'};
#line 236
$memory_2 = $memory_2 + $memory_5;
#line 236
undef($memory_5);
#line 237
undef($memory_1);
#line 237
undef($memory_3);
#line 237
undef($memory_4);
#line 237
$_[0] = $memory_0;return $memory_2;
#line 238
goto label_16;
#line 238
label_16:
#line 238
undef($memory_4);
#line 239
$memory_4 = $memory_1->{'el'};
#line 239
$memory_5 = c_rt_lib::ov_is($memory_4, 'sim');
#line 239
if (c_rt_lib::check_true($memory_5)) {goto label_34;}
#line 247
$memory_5 = c_rt_lib::ov_is($memory_4, 'arr_decl');
#line 247
if (c_rt_lib::check_true($memory_5)) {goto label_89;}
#line 254
$memory_5 = c_rt_lib::ov_is($memory_4, 'arr');
#line 254
if (c_rt_lib::check_true($memory_5)) {goto label_155;}
#line 263
$memory_5 = c_rt_lib::ov_is($memory_4, 'bind');
#line 263
if (c_rt_lib::check_true($memory_5)) {goto label_214;}
#line 268
$memory_5 = c_rt_lib::ov_is($memory_4, 'sep');
#line 268
if (c_rt_lib::check_true($memory_5)) {goto label_246;}
#line 271
$memory_5 = c_rt_lib::ov_is($memory_4, 'str_arr');
#line 271
if (c_rt_lib::check_true($memory_5)) {goto label_260;}
#line 271
$memory_5 = "NOMATCHALERT";
#line 271
$memory_5 = [$memory_5,$memory_4];
#line 271
die(dfile::ssave($memory_5));
#line 239
label_34:
#line 239
$memory_6 = c_rt_lib::ov_as($memory_4, 'sim');
#line 240
$memory_7 = ",";
#line 240
$memory_7 = c_rt_lib::to_nl($memory_6 eq $memory_7);
#line 240
if (c_rt_lib::check_true($memory_7)) {goto label_41;}
#line 240
$memory_7 = ")";
#line 240
$memory_7 = c_rt_lib::to_nl($memory_6 eq $memory_7);
#line 240
label_41:
#line 240
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 240
if (c_rt_lib::check_true($memory_7)) {goto label_57;}
#line 241
wprinter_priv::state_print($memory_0, $memory_6);
#line 242
$memory_8 = $memory_1->{'len'};
#line 242
$memory_8 = $memory_2 + $memory_8;
#line 242
undef($memory_1);
#line 242
undef($memory_2);
#line 242
undef($memory_3);
#line 242
undef($memory_4);
#line 242
undef($memory_5);
#line 242
undef($memory_6);
#line 242
undef($memory_7);
#line 242
$_[0] = $memory_0;return $memory_8;
#line 242
undef($memory_8);
#line 243
goto label_57;
#line 243
label_57:
#line 243
undef($memory_7);
#line 244
$memory_7 = wprinter_priv::get_tab_size();
#line 244
$memory_7 = $memory_3 * $memory_7;
#line 244
$memory_7 = c_rt_lib::to_nl($memory_2 != $memory_7);
#line 244
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 244
if (c_rt_lib::check_true($memory_7)) {goto label_71;}
#line 244
$memory_8 = string::lf();
#line 244
$memory_9 = wprinter_priv::pind($memory_3);
#line 244
$memory_8 = $memory_8 . $memory_9;
#line 244
undef($memory_9);
#line 244
wprinter_priv::state_print($memory_0, $memory_8);
#line 244
undef($memory_8);
#line 244
goto label_71;
#line 244
label_71:
#line 244
undef($memory_7);
#line 245
wprinter_priv::print_sim_rec($memory_0, $memory_1);
#line 246
$memory_7 = $memory_1->{'len'};
#line 246
$memory_8 = wprinter_priv::get_tab_size();
#line 246
$memory_8 = $memory_3 * $memory_8;
#line 246
$memory_7 = $memory_7 + $memory_8;
#line 246
undef($memory_8);
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
$_[0] = $memory_0;return $memory_7;
#line 246
undef($memory_7);
#line 246
undef($memory_6);
#line 247
goto label_273;
#line 247
label_89:
#line 247
$memory_6 = c_rt_lib::ov_as($memory_4, 'arr_decl');
#line 248
$memory_7 = $memory_6->{'start'};
#line 248
$memory_8 = string::lf();
#line 248
$memory_7 = $memory_7 . $memory_8;
#line 248
undef($memory_8);
#line 248
$memory_9 = 1;
#line 248
$memory_9 = $memory_3 + $memory_9;
#line 248
$memory_8 = wprinter_priv::pind($memory_9);
#line 248
undef($memory_9);
#line 248
$memory_7 = $memory_7 . $memory_8;
#line 248
undef($memory_8);
#line 248
wprinter_priv::state_print($memory_0, $memory_7);
#line 248
undef($memory_7);
#line 249
$memory_7 = 1;
#line 249
$memory_7 = $memory_3 + $memory_7;
#line 249
$memory_8 = wprinter_priv::get_tab_size();
#line 249
$memory_7 = $memory_7 * $memory_8;
#line 249
undef($memory_8);
#line 249
$memory_2 = $memory_7;
#line 249
undef($memory_7);
#line 250
$memory_8 = $memory_6->{'arr'};
#line 250
$memory_9 = 1;
#line 250
$memory_9 = $memory_3 + $memory_9;
#line 250
$memory_7 = wprinter_priv::print_arr_in_lines($memory_0, $memory_8, $memory_9, $memory_2);
#line 250
undef($memory_9);
#line 250
undef($memory_8);
#line 250
$memory_2 = $memory_7;
#line 250
undef($memory_7);
#line 251
$memory_8 = $memory_6->{'arr'};
#line 251
$memory_7 = array::len($memory_8);
#line 251
undef($memory_8);
#line 251
$memory_8 = 0;
#line 251
$memory_7 = c_rt_lib::to_nl($memory_7 > $memory_8);
#line 251
undef($memory_8);
#line 251
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 251
if (c_rt_lib::check_true($memory_7)) {goto label_133;}
#line 251
$memory_8 = string::lf();
#line 251
$memory_9 = wprinter_priv::pind($memory_3);
#line 251
$memory_8 = $memory_8 . $memory_9;
#line 251
undef($memory_9);
#line 251
wprinter_priv::state_print($memory_0, $memory_8);
#line 251
undef($memory_8);
#line 251
goto label_133;
#line 251
label_133:
#line 251
undef($memory_7);
#line 252
$memory_7 = $memory_6->{'end'};
#line 252
wprinter_priv::state_print($memory_0, $memory_7);
#line 252
undef($memory_7);
#line 253
$memory_7 = wprinter_priv::get_tab_size();
#line 253
$memory_7 = $memory_3 * $memory_7;
#line 253
$memory_9 = $memory_6->{'end'};
#line 253
$memory_8 = string::length($memory_9);
#line 253
undef($memory_9);
#line 253
$memory_7 = $memory_7 + $memory_8;
#line 253
undef($memory_8);
#line 253
undef($memory_1);
#line 253
undef($memory_2);
#line 253
undef($memory_3);
#line 253
undef($memory_4);
#line 253
undef($memory_5);
#line 253
undef($memory_6);
#line 253
$_[0] = $memory_0;return $memory_7;
#line 253
undef($memory_7);
#line 253
undef($memory_6);
#line 254
goto label_273;
#line 254
label_155:
#line 254
$memory_6 = c_rt_lib::ov_as($memory_4, 'arr');
#line 255
$memory_7 = $memory_6->{'arr'};
#line 256
$memory_8 = $memory_6->{'type'};
#line 256
$memory_9 = c_rt_lib::ov_is($memory_8, 'array');
#line 256
if (c_rt_lib::check_true($memory_9)) {goto label_168;}
#line 258
$memory_9 = c_rt_lib::ov_is($memory_8, 'list');
#line 258
if (c_rt_lib::check_true($memory_9)) {goto label_176;}
#line 260
$memory_9 = c_rt_lib::ov_is($memory_8, 'op_list');
#line 260
if (c_rt_lib::check_true($memory_9)) {goto label_192;}
#line 260
$memory_9 = "NOMATCHALERT";
#line 260
$memory_9 = [$memory_9,$memory_8];
#line 260
die(dfile::ssave($memory_9));
#line 256
label_168:
#line 257
$memory_11 = 1;
#line 257
$memory_11 = $memory_3 + $memory_11;
#line 257
$memory_10 = wprinter_priv::print_arr_in_lines($memory_0, $memory_7, $memory_11, $memory_2);
#line 257
undef($memory_11);
#line 257
$memory_2 = $memory_10;
#line 257
undef($memory_10);
#line 258
goto label_208;
#line 258
label_176:
#line 259
$memory_11 = c_rt_lib::to_nl(0);
#line 259
$memory_10 = wprinter_priv::process_list($memory_0, $memory_7, $memory_11, $memory_2, $memory_3);
#line 259
undef($memory_11);
#line 259
undef($memory_1);
#line 259
undef($memory_2);
#line 259
undef($memory_3);
#line 259
undef($memory_4);
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
#line 259
$_[0] = $memory_0;return $memory_10;
#line 259
undef($memory_10);
#line 260
goto label_208;
#line 260
label_192:
#line 261
$memory_11 = c_rt_lib::to_nl(1);
#line 261
$memory_10 = wprinter_priv::process_list($memory_0, $memory_7, $memory_11, $memory_2, $memory_3);
#line 261
undef($memory_11);
#line 261
undef($memory_1);
#line 261
undef($memory_2);
#line 261
undef($memory_3);
#line 261
undef($memory_4);
#line 261
undef($memory_5);
#line 261
undef($memory_6);
#line 261
undef($memory_7);
#line 261
undef($memory_8);
#line 261
undef($memory_9);
#line 261
$_[0] = $memory_0;return $memory_10;
#line 261
undef($memory_10);
#line 262
goto label_208;
#line 262
label_208:
#line 262
undef($memory_8);
#line 262
undef($memory_9);
#line 262
undef($memory_7);
#line 262
undef($memory_6);
#line 263
goto label_273;
#line 263
label_214:
#line 263
$memory_6 = c_rt_lib::ov_as($memory_4, 'bind');
#line 264
$memory_7 = string::lf();
#line 264
$memory_8 = wprinter_priv::pind($memory_3);
#line 264
$memory_7 = $memory_7 . $memory_8;
#line 264
undef($memory_8);
#line 264
wprinter_priv::state_print($memory_0, $memory_7);
#line 264
undef($memory_7);
#line 265
$memory_7 = $memory_6->{'first'};
#line 265
$memory_7 = $memory_7->{'len'};
#line 265
$memory_8 = wprinter_priv::get_tab_size();
#line 265
$memory_8 = $memory_3 * $memory_8;
#line 265
$memory_7 = $memory_7 + $memory_8;
#line 265
undef($memory_8);
#line 265
$memory_2 = $memory_7;
#line 265
undef($memory_7);
#line 266
$memory_7 = $memory_6->{'first'};
#line 266
wprinter_priv::print_sim_rec($memory_0, $memory_7);
#line 266
undef($memory_7);
#line 267
$memory_8 = $memory_6->{'second'};
#line 267
$memory_7 = wprinter_priv::print_t_rec($memory_0, $memory_8, $memory_2, $memory_3);
#line 267
undef($memory_8);
#line 267
undef($memory_1);
#line 267
undef($memory_2);
#line 267
undef($memory_3);
#line 267
undef($memory_4);
#line 267
undef($memory_5);
#line 267
undef($memory_6);
#line 267
$_[0] = $memory_0;return $memory_7;
#line 267
undef($memory_7);
#line 267
undef($memory_6);
#line 268
goto label_273;
#line 268
label_246:
#line 269
$memory_6 = " ";
#line 269
wprinter_priv::state_print($memory_0, $memory_6);
#line 269
undef($memory_6);
#line 270
$memory_6 = 1;
#line 270
$memory_6 = $memory_2 + $memory_6;
#line 270
undef($memory_1);
#line 270
undef($memory_2);
#line 270
undef($memory_3);
#line 270
undef($memory_4);
#line 270
undef($memory_5);
#line 270
$_[0] = $memory_0;return $memory_6;
#line 270
undef($memory_6);
#line 271
goto label_273;
#line 271
label_260:
#line 271
$memory_6 = c_rt_lib::ov_as($memory_4, 'str_arr');
#line 272
$memory_7 = wprinter_priv::print_str_arr($memory_0, $memory_6, $memory_2, $memory_3);
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
$_[0] = $memory_0;return $memory_7;
#line 272
undef($memory_7);
#line 272
undef($memory_6);
#line 273
goto label_273;
#line 273
label_273:
#line 273
undef($memory_4);
#line 273
undef($memory_5);
#line 274
undef($memory_1);
#line 274
undef($memory_3);
#line 274
$_[0] = $memory_0;return $memory_2;
#line 274
undef($memory_1);
#line 274
undef($memory_2);
#line 274
undef($memory_3);
#line 274
$_[0] = $memory_0;return;
$_[0] = $memory_0;}
