use c_rt_lib;
use string;
use array;
use hash;
use boolean_t;
use ptd;
use ov;
use nast;
use ntokenizer;
use singleton;
sub nparser_priv::get_end_list;
sub nparser::parse_ret_t;
sub nparser::state_t;
sub nparser::try_value_t;
sub nparser::try_cmd_t;
sub nparser::sparse;
sub nparser::errors_t;
sub nparser_priv::add_error;
sub nparser_priv::eat;
sub nparser_priv::try_eat;
sub nparser_priv::parse_module;
sub nparser_priv::parse_fun_arg_list;
sub nparser_priv::parse_fun_def;
sub nparser_priv::parse_fun_val_arg_list;
sub nparser_priv::parse_expr_list;
sub nparser_priv::parse_fun_val_arg;
sub nparser_priv::parse_fun_label;
sub nparser_priv::parse_label;
sub nparser_priv::parse_hash_key;
sub nparser_priv::parse_hash;
sub nparser_priv::parse_arr;
sub nparser_priv::parse_expr;
sub nparser_priv::parse_type;
sub nparser_priv::parse_expr_rec_left;
sub nparser_priv::parse_expr_rec;
sub nparser_priv::eat_text;
sub nparser_priv::parse_variant_label;
sub nparser_priv::parse_variant;
sub nparser_priv::check_lvalue;
sub nparser_priv::parse_variant_decl;
sub nparser_priv::parse_var_decl;
sub nparser_priv::parse_var_decl_sim;
sub nparser_priv::parse_cond;
sub nparser_priv::parse_block;
sub nparser_priv::parse_try_ensure;
sub nparser_priv::parse_cmd;

return 1;

sub nparser_priv::__get_end_list() {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;
#line 17
$memory_2 = ";";
#line 17
$memory_3 = "if";
#line 17
$memory_4 = "unless";
#line 17
$memory_5 = "fora";
#line 17
$memory_6 = "forh";
#line 17
$memory_7 = "rep";
#line 17
$memory_8 = "while";
#line 17
$memory_1 = [$memory_2,$memory_3,$memory_4,$memory_5,$memory_6,$memory_7,$memory_8];
#line 17
undef($memory_2);
#line 17
undef($memory_3);
#line 17
undef($memory_4);
#line 17
undef($memory_5);
#line 17
undef($memory_6);
#line 17
undef($memory_7);
#line 17
undef($memory_8);
#line 17
$memory_0 = singleton::sigleton_do_not_use_without_approval($memory_1);
#line 17
undef($memory_1);
#line 17
return $memory_0;
#line 17
undef($memory_0);
#line 17
return;
}

my $_get_end_list;
sub nparser_priv::get_end_list() {
	$_get_end_list = nparser_priv::__get_end_list() unless defined $_get_end_list;
	return $_get_end_list;
}

sub nparser::__parse_ret_t() {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;
#line 21
$memory_2 = {
	module => "nast",
	name => "module_t",
};
#line 21
$memory_2 = c_rt_lib::ov_mk_arg('ref', $memory_2);
#line 21
$memory_3 = {
	module => "nparser",
	name => "errors_t",
};
#line 21
$memory_3 = c_rt_lib::ov_mk_arg('ref', $memory_3);
#line 21
$memory_1 = {ok => $memory_2,error => $memory_3,};
#line 21
undef($memory_2);
#line 21
undef($memory_3);
#line 21
$memory_0 = ptd::var($memory_1);
#line 21
undef($memory_1);
#line 21
return $memory_0;
#line 21
undef($memory_0);
#line 21
return;
}

my $_parse_ret_t;
sub nparser::parse_ret_t() {
	$_parse_ret_t = nparser::__parse_ret_t() unless defined $_parse_ret_t;
	return $_parse_ret_t;
}

sub nparser::__state_t() {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;
#line 25
$memory_2 = {
	module => "ntokenizer",
	name => "state_t",
};
#line 25
$memory_2 = c_rt_lib::ov_mk_arg('ref', $memory_2);
#line 25
$memory_3 = {
	module => "nparser",
	name => "errors_t",
};
#line 25
$memory_3 = c_rt_lib::ov_mk_arg('ref', $memory_3);
#line 25
$memory_1 = {state => $memory_2,errors => $memory_3,};
#line 25
undef($memory_2);
#line 25
undef($memory_3);
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
sub nparser::state_t() {
	$_state_t = nparser::__state_t() unless defined $_state_t;
	return $_state_t;
}

sub nparser::__try_value_t() {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;
#line 32
$memory_2 = {
	module => "nast",
	name => "value_t",
};
#line 32
$memory_2 = c_rt_lib::ov_mk_arg('ref', $memory_2);
#line 32
$memory_3 = ptd::sim();
#line 32
$memory_1 = {ok => $memory_2,err => $memory_3,};
#line 32
undef($memory_2);
#line 32
undef($memory_3);
#line 32
$memory_0 = ptd::var($memory_1);
#line 32
undef($memory_1);
#line 32
return $memory_0;
#line 32
undef($memory_0);
#line 32
return;
}

my $_try_value_t;
sub nparser::try_value_t() {
	$_try_value_t = nparser::__try_value_t() unless defined $_try_value_t;
	return $_try_value_t;
}

sub nparser::__try_cmd_t() {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;
#line 35
$memory_2 = {
	module => "nast",
	name => "cmd_t",
};
#line 35
$memory_2 = c_rt_lib::ov_mk_arg('ref', $memory_2);
#line 35
$memory_3 = ptd::sim();
#line 35
$memory_1 = {ok => $memory_2,err => $memory_3,};
#line 35
undef($memory_2);
#line 35
undef($memory_3);
#line 35
$memory_0 = ptd::var($memory_1);
#line 35
undef($memory_1);
#line 35
return $memory_0;
#line 35
undef($memory_0);
#line 35
return;
}

my $_try_cmd_t;
sub nparser::try_cmd_t() {
	$_try_cmd_t = nparser::__try_cmd_t() unless defined $_try_cmd_t;
	return $_try_cmd_t;
}

sub nparser::sparse($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;$memory_0 = $_[0];$memory_1 = $_[1];
#line 39
$memory_3 = [];
#line 39
$memory_4 = ntokenizer::init($memory_0);
#line 39
$memory_2 = {errors => $memory_3,state => $memory_4,};
#line 39
undef($memory_3);
#line 39
undef($memory_4);
#line 40
$memory_3 = nparser_priv::parse_module($memory_2, $memory_1);
#line 41
$memory_5 = $memory_2->{'errors'};
#line 41
$memory_4 = array::len($memory_5);
#line 41
undef($memory_5);
#line 41
$memory_5 = 0;
#line 41
$memory_4 = c_rt_lib::to_nl($memory_4 > $memory_5);
#line 41
undef($memory_5);
#line 41
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 41
if (c_rt_lib::check_true($memory_4)) {goto label_2;}
#line 41
$memory_5 = $memory_2->{'errors'};
#line 41
$memory_5 = c_rt_lib::ov_mk_arg('error', $memory_5);
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
goto label_2;
#line 41
label_2:
#line 41
undef($memory_4);
#line 42
$memory_4 = c_rt_lib::ov_mk_arg('ok', $memory_3);
#line 42
undef($memory_0);
#line 42
undef($memory_1);
#line 42
undef($memory_2);
#line 42
undef($memory_3);
#line 42
return $memory_4;
#line 42
undef($memory_4);
#line 42
undef($memory_2);
#line 42
undef($memory_3);
#line 42
undef($memory_0);
#line 42
undef($memory_1);
#line 42
return;
}

sub nparser::__errors_t() {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;
#line 46
$memory_3 = ptd::sim();
#line 46
$memory_4 = ptd::sim();
#line 46
$memory_2 = {line => $memory_3,msg => $memory_4,};
#line 46
undef($memory_3);
#line 46
undef($memory_4);
#line 46
$memory_1 = ptd::rec($memory_2);
#line 46
undef($memory_2);
#line 46
$memory_0 = ptd::arr($memory_1);
#line 46
undef($memory_1);
#line 46
return $memory_0;
#line 46
undef($memory_0);
#line 46
return;
}

my $_errors_t;
sub nparser::errors_t() {
	$_errors_t = nparser::__errors_t() unless defined $_errors_t;
	return $_errors_t;
}

sub nparser_priv::add_error($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];
#line 50
$memory_3 = "state";
#line 50
$memory_3 = c_rt_lib::get_ref_hash($memory_0, $memory_3);
#line 50
$memory_2 = ntokenizer::get_line($memory_3);
#line 50
$memory_4 = "state";
#line 50
c_rt_lib::set_ref_hash($memory_0, $memory_4, $memory_3);
#line 50
undef($memory_4);
#line 50
undef($memory_3);
#line 51
$memory_3 = "errors";
#line 51
$memory_3 = c_rt_lib::get_ref_hash($memory_0, $memory_3);
#line 51
$memory_4 = {line => $memory_2,msg => $memory_1,};
#line 51
array::push($memory_3, $memory_4);
#line 51
undef($memory_4);
#line 51
$memory_4 = "errors";
#line 51
c_rt_lib::set_ref_hash($memory_0, $memory_4, $memory_3);
#line 51
undef($memory_4);
#line 51
undef($memory_3);
#line 51
undef($memory_2);
#line 51
undef($memory_1);
#line 51
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub nparser_priv::eat($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];
#line 55
$memory_3 = "state";
#line 55
$memory_3 = c_rt_lib::get_ref_hash($memory_0, $memory_3);
#line 55
$memory_2 = ntokenizer::eat_token($memory_3, $memory_1);
#line 55
$memory_4 = "state";
#line 55
c_rt_lib::set_ref_hash($memory_0, $memory_4, $memory_3);
#line 55
undef($memory_4);
#line 55
undef($memory_3);
#line 55
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 55
if (c_rt_lib::check_true($memory_2)) {goto label_2;}
#line 55
$memory_3 = c_rt_lib::to_nl(1);
#line 55
undef($memory_1);
#line 55
undef($memory_2);
#line 55
$_[0] = $memory_0;return $memory_3;
#line 55
undef($memory_3);
#line 55
goto label_2;
#line 55
label_2:
#line 55
undef($memory_2);
#line 56
$memory_2 = "expected: ";
#line 56
$memory_2 = $memory_2 . $memory_1;
#line 56
$memory_3 = string::lf();
#line 56
$memory_2 = $memory_2 . $memory_3;
#line 56
undef($memory_3);
#line 56
$memory_4 = "state";
#line 56
$memory_4 = c_rt_lib::get_ref_hash($memory_0, $memory_4);
#line 56
$memory_3 = ntokenizer::info($memory_4);
#line 56
$memory_5 = "state";
#line 56
c_rt_lib::set_ref_hash($memory_0, $memory_5, $memory_4);
#line 56
undef($memory_5);
#line 56
undef($memory_4);
#line 56
$memory_2 = $memory_2 . $memory_3;
#line 56
undef($memory_3);
#line 56
nparser_priv::add_error($memory_0, $memory_2);
#line 56
undef($memory_2);
#line 57
$memory_2 = c_rt_lib::to_nl(0);
#line 57
undef($memory_1);
#line 57
$_[0] = $memory_0;return $memory_2;
#line 57
undef($memory_2);
#line 57
undef($memory_1);
#line 57
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub nparser_priv::try_eat($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];
#line 61
$memory_3 = "state";
#line 61
$memory_3 = c_rt_lib::get_ref_hash($memory_0, $memory_3);
#line 61
$memory_2 = ntokenizer::eat_token($memory_3, $memory_1);
#line 61
$memory_4 = "state";
#line 61
c_rt_lib::set_ref_hash($memory_0, $memory_4, $memory_3);
#line 61
undef($memory_4);
#line 61
undef($memory_3);
#line 61
undef($memory_1);
#line 61
$_[0] = $memory_0;return $memory_2;
#line 61
undef($memory_2);
#line 61
undef($memory_1);
#line 61
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub nparser_priv::parse_module($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];
#line 65
$memory_3 = [];
#line 65
$memory_4 = [];
#line 65
$memory_2 = {name => $memory_1,import => $memory_3,fun_def => $memory_4,};
#line 65
undef($memory_3);
#line 65
undef($memory_4);
#line 66
label_2:
#line 66
$memory_4 = "use";
#line 66
$memory_3 = nparser_priv::try_eat($memory_0, $memory_4);
#line 66
undef($memory_4);
#line 66
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 66
if (c_rt_lib::check_true($memory_3)) {goto label_1;}
#line 67
$memory_5 = "state";
#line 67
$memory_5 = c_rt_lib::get_ref_hash($memory_0, $memory_5);
#line 67
$memory_4 = ntokenizer::get_line($memory_5);
#line 67
$memory_6 = "state";
#line 67
c_rt_lib::set_ref_hash($memory_0, $memory_6, $memory_5);
#line 67
undef($memory_6);
#line 67
undef($memory_5);
#line 68
$memory_6 = "state";
#line 68
$memory_6 = c_rt_lib::get_ref_hash($memory_0, $memory_6);
#line 68
$memory_7 = c_rt_lib::ov_mk_none('word');
#line 68
$memory_5 = ntokenizer::is_type($memory_6, $memory_7);
#line 68
undef($memory_7);
#line 68
$memory_7 = "state";
#line 68
c_rt_lib::set_ref_hash($memory_0, $memory_7, $memory_6);
#line 68
undef($memory_7);
#line 68
undef($memory_6);
#line 68
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 68
if (c_rt_lib::check_true($memory_5)) {goto label_4;}
#line 69
$memory_6 = "import";
#line 69
$memory_6 = c_rt_lib::get_ref_hash($memory_2, $memory_6);
#line 69
$memory_9 = "state";
#line 69
$memory_9 = c_rt_lib::get_ref_hash($memory_0, $memory_9);
#line 69
$memory_10 = c_rt_lib::ov_mk_none('word');
#line 69
$memory_8 = ntokenizer::eat_type($memory_9, $memory_10);
#line 69
undef($memory_10);
#line 69
$memory_10 = "state";
#line 69
c_rt_lib::set_ref_hash($memory_0, $memory_10, $memory_9);
#line 69
undef($memory_10);
#line 69
undef($memory_9);
#line 69
$memory_7 = {name => $memory_8,line => $memory_4,};
#line 69
undef($memory_8);
#line 69
array::push($memory_6, $memory_7);
#line 69
undef($memory_7);
#line 69
$memory_7 = "import";
#line 69
c_rt_lib::set_ref_hash($memory_2, $memory_7, $memory_6);
#line 69
undef($memory_7);
#line 69
undef($memory_6);
#line 70
goto label_3;
#line 70
label_4:
#line 71
$memory_6 = "expected word as name of module";
#line 71
nparser_priv::add_error($memory_0, $memory_6);
#line 71
undef($memory_6);
#line 72
goto label_3;
#line 72
label_3:
#line 72
undef($memory_5);
#line 73
$memory_5 = ";";
#line 73
nparser_priv::eat($memory_0, $memory_5);
#line 73
undef($memory_5);
#line 73
undef($memory_4);
#line 74
goto label_2;
#line 74
label_1:
#line 74
undef($memory_3);
#line 76
label_6:
#line 76
$memory_4 = "state";
#line 76
$memory_4 = c_rt_lib::get_ref_hash($memory_0, $memory_4);
#line 76
$memory_5 = "def";
#line 76
$memory_3 = ntokenizer::next_is($memory_4, $memory_5);
#line 76
undef($memory_5);
#line 76
$memory_5 = "state";
#line 76
c_rt_lib::set_ref_hash($memory_0, $memory_5, $memory_4);
#line 76
undef($memory_5);
#line 76
undef($memory_4);
#line 76
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 76
if (c_rt_lib::check_true($memory_3)) {goto label_5;}
#line 77
$memory_4 = nparser_priv::parse_fun_def($memory_0, $memory_1);
#line 77
$memory_5 = c_rt_lib::ov_is($memory_4, 'ok');
#line 77
if (c_rt_lib::check_true($memory_5)) {goto label_8;}
#line 79
$memory_5 = c_rt_lib::ov_is($memory_4, 'err');
#line 79
if (c_rt_lib::check_true($memory_5)) {goto label_9;}
#line 79
$memory_5 = "NOMATCHALERT";
#line 79
$memory_5 = [$memory_5,$memory_4];
#line 79
die(dfile::ssave($memory_5));
#line 77
label_8:
#line 77
$memory_6 = c_rt_lib::ov_as($memory_4, 'ok');
#line 78
$memory_7 = "fun_def";
#line 78
$memory_7 = c_rt_lib::get_ref_hash($memory_2, $memory_7);
#line 78
array::push($memory_7, $memory_6);
#line 78
$memory_8 = "fun_def";
#line 78
c_rt_lib::set_ref_hash($memory_2, $memory_8, $memory_7);
#line 78
undef($memory_8);
#line 78
undef($memory_7);
#line 78
undef($memory_6);
#line 79
goto label_7;
#line 79
label_9:
#line 79
$memory_6 = c_rt_lib::ov_as($memory_4, 'err');
#line 80
nparser_priv::add_error($memory_0, $memory_6);
#line 81
undef($memory_1);
#line 81
undef($memory_3);
#line 81
undef($memory_4);
#line 81
undef($memory_5);
#line 81
undef($memory_6);
#line 81
$_[0] = $memory_0;return $memory_2;
#line 81
undef($memory_6);
#line 82
goto label_7;
#line 82
label_7:
#line 82
undef($memory_4);
#line 82
undef($memory_5);
#line 83
goto label_6;
#line 83
label_5:
#line 83
undef($memory_3);
#line 85
$memory_4 = "state";
#line 85
$memory_4 = c_rt_lib::get_ref_hash($memory_0, $memory_4);
#line 85
$memory_5 = c_rt_lib::ov_mk_none('end');
#line 85
$memory_3 = ntokenizer::is_type($memory_4, $memory_5);
#line 85
undef($memory_5);
#line 85
$memory_5 = "state";
#line 85
c_rt_lib::set_ref_hash($memory_0, $memory_5, $memory_4);
#line 85
undef($memory_5);
#line 85
undef($memory_4);
#line 85
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 85
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 85
if (c_rt_lib::check_true($memory_3)) {goto label_11;}
#line 85
$memory_4 = "expected function definition";
#line 85
nparser_priv::add_error($memory_0, $memory_4);
#line 85
undef($memory_4);
#line 85
goto label_11;
#line 85
label_11:
#line 85
undef($memory_3);
#line 86
undef($memory_1);
#line 86
$_[0] = $memory_0;return $memory_2;
#line 86
undef($memory_2);
#line 86
undef($memory_1);
#line 86
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub nparser_priv::parse_fun_arg_list($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);
#line 90
$memory_1 = "(";
#line 90
nparser_priv::eat($memory_0, $memory_1);
#line 90
undef($memory_1);
#line 91
$memory_1 = [];
#line 92
label_2:
#line 92
$memory_3 = "state";
#line 92
$memory_3 = c_rt_lib::get_ref_hash($memory_0, $memory_3);
#line 92
$memory_4 = ")";
#line 92
$memory_2 = ntokenizer::next_is($memory_3, $memory_4);
#line 92
undef($memory_4);
#line 92
$memory_4 = "state";
#line 92
c_rt_lib::set_ref_hash($memory_0, $memory_4, $memory_3);
#line 92
undef($memory_4);
#line 92
undef($memory_3);
#line 92
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 92
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 92
if (c_rt_lib::check_true($memory_2)) {goto label_1;}
#line 93
$memory_4 = c_rt_lib::ov_mk_none('none');
#line 93
$memory_5 = c_rt_lib::ov_mk_none('none');
#line 93
$memory_6 = "";
#line 93
$memory_3 = {mod => $memory_4,type => $memory_5,name => $memory_6,};
#line 93
undef($memory_4);
#line 93
undef($memory_5);
#line 93
undef($memory_6);
#line 94
$memory_5 = "ref";
#line 94
$memory_4 = nparser_priv::try_eat($memory_0, $memory_5);
#line 94
undef($memory_5);
#line 94
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 94
if (c_rt_lib::check_true($memory_4)) {goto label_4;}
#line 94
$memory_5 = c_rt_lib::ov_mk_none('ref');
#line 94
$memory_6 = $memory_5;
#line 94
 if (c_rt_lib::get_hashcount($memory_3) > 1) {$memory_3 = {%{$memory_3}};}$memory_3->{'mod'} = $memory_6;
#line 94
undef($memory_5);
#line 94
undef($memory_6);
#line 94
goto label_4;
#line 94
label_4:
#line 94
undef($memory_4);
#line 96
$memory_5 = "state";
#line 96
$memory_5 = c_rt_lib::get_ref_hash($memory_0, $memory_5);
#line 96
$memory_6 = c_rt_lib::ov_mk_none('word');
#line 96
$memory_4 = ntokenizer::is_type($memory_5, $memory_6);
#line 96
undef($memory_6);
#line 96
$memory_6 = "state";
#line 96
c_rt_lib::set_ref_hash($memory_0, $memory_6, $memory_5);
#line 96
undef($memory_6);
#line 96
undef($memory_5);
#line 96
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 96
if (c_rt_lib::check_true($memory_4)) {goto label_6;}
#line 97
$memory_6 = "state";
#line 97
$memory_6 = c_rt_lib::get_ref_hash($memory_0, $memory_6);
#line 97
$memory_7 = c_rt_lib::ov_mk_none('word');
#line 97
$memory_5 = ntokenizer::eat_type($memory_6, $memory_7);
#line 97
undef($memory_7);
#line 97
$memory_7 = "state";
#line 97
c_rt_lib::set_ref_hash($memory_0, $memory_7, $memory_6);
#line 97
undef($memory_7);
#line 97
undef($memory_6);
#line 97
$memory_6 = $memory_5;
#line 97
 if (c_rt_lib::get_hashcount($memory_3) > 1) {$memory_3 = {%{$memory_3}};}$memory_3->{'name'} = $memory_6;
#line 97
undef($memory_5);
#line 97
undef($memory_6);
#line 98
goto label_5;
#line 98
label_6:
#line 99
$memory_5 = "word expected as fun arg name";
#line 99
nparser_priv::add_error($memory_0, $memory_5);
#line 99
undef($memory_5);
#line 100
goto label_5;
#line 100
label_5:
#line 100
undef($memory_4);
#line 101
$memory_5 = ":";
#line 101
$memory_4 = nparser_priv::try_eat($memory_0, $memory_5);
#line 101
undef($memory_5);
#line 101
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 101
if (c_rt_lib::check_true($memory_4)) {goto label_8;}
#line 102
$memory_7 = nparser_priv::parse_type($memory_0);
#line 102
$memory_6 = c_rt_lib::ov_is($memory_7, 'ok');
#line 102
if (c_rt_lib::check_true($memory_6)) {goto label_9;}
#line 102
undef($memory_1);
#line 102
undef($memory_2);
#line 102
undef($memory_3);
#line 102
undef($memory_4);
#line 102
undef($memory_5);
#line 102
undef($memory_6);
#line 102
$_[0] = $memory_0;return $memory_7;
#line 102
label_9:
#line 102
$memory_5 = c_rt_lib::ov_as($memory_7, 'ok');
#line 102
undef($memory_6);
#line 102
undef($memory_7);
#line 103
$memory_6 = c_rt_lib::ov_mk_arg('type', $memory_5);
#line 103
$memory_7 = $memory_6;
#line 103
 if (c_rt_lib::get_hashcount($memory_3) > 1) {$memory_3 = {%{$memory_3}};}$memory_3->{'type'} = $memory_7;
#line 103
undef($memory_6);
#line 103
undef($memory_7);
#line 103
undef($memory_5);
#line 104
goto label_8;
#line 104
label_8:
#line 104
undef($memory_4);
#line 105
array::push($memory_1, $memory_3);
#line 106
$memory_5 = ",";
#line 106
$memory_4 = nparser_priv::try_eat($memory_0, $memory_5);
#line 106
undef($memory_5);
#line 106
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 106
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 106
if (c_rt_lib::check_true($memory_4)) {goto label_11;}
#line 106
undef($memory_3);
#line 106
undef($memory_4);
#line 106
goto label_1;
#line 106
goto label_11;
#line 106
label_11:
#line 106
undef($memory_4);
#line 106
undef($memory_3);
#line 107
goto label_2;
#line 107
label_1:
#line 107
undef($memory_2);
#line 108
$memory_2 = ")";
#line 108
nparser_priv::eat($memory_0, $memory_2);
#line 108
undef($memory_2);
#line 109
$memory_2 = c_rt_lib::ov_mk_arg('ok', $memory_1);
#line 109
undef($memory_1);
#line 109
$_[0] = $memory_0;return $memory_2;
#line 109
undef($memory_2);
#line 109
undef($memory_1);
#line 109
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub nparser_priv::parse_fun_def($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];
#line 113
$memory_3 = c_rt_lib::ov_mk_none('none');
#line 113
$memory_5 = "state";
#line 113
$memory_5 = c_rt_lib::get_ref_hash($memory_0, $memory_5);
#line 113
$memory_4 = ntokenizer::get_line($memory_5);
#line 113
$memory_6 = "state";
#line 113
c_rt_lib::set_ref_hash($memory_0, $memory_6, $memory_5);
#line 113
undef($memory_6);
#line 113
undef($memory_5);
#line 113
$memory_5 = [];
#line 113
$memory_6 = "";
#line 113
$memory_8 = nast::empty_debug();
#line 113
$memory_9 = c_rt_lib::ov_mk_none('nop');
#line 113
$memory_7 = {debug => $memory_8,cmd => $memory_9,};
#line 113
undef($memory_8);
#line 113
undef($memory_9);
#line 113
$memory_8 = c_rt_lib::ov_mk_none('priv');
#line 113
$memory_2 = {ret_type => $memory_3,line => $memory_4,args => $memory_5,name => $memory_6,cmd => $memory_7,access => $memory_8,};
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
#line 121
$memory_3 = "def";
#line 121
nparser_priv::eat($memory_0, $memory_3);
#line 121
undef($memory_3);
#line 122
$memory_4 = nparser_priv::eat_text($memory_0);
#line 122
$memory_3 = c_rt_lib::ov_is($memory_4, 'ok');
#line 122
if (c_rt_lib::check_true($memory_3)) {goto label_1;}
#line 122
undef($memory_1);
#line 122
undef($memory_2);
#line 122
undef($memory_3);
#line 122
$_[0] = $memory_0;return $memory_4;
#line 122
label_1:
#line 122
$memory_5 = c_rt_lib::ov_as($memory_4, 'ok');
#line 122
 if (c_rt_lib::get_hashcount($memory_2) > 1) {$memory_2 = {%{$memory_2}};}$memory_2->{'name'} = $memory_5;
#line 122
undef($memory_3);
#line 122
undef($memory_4);
#line 122
undef($memory_5);
#line 123
$memory_4 = "::";
#line 123
$memory_3 = nparser_priv::try_eat($memory_0, $memory_4);
#line 123
undef($memory_4);
#line 123
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 123
if (c_rt_lib::check_true($memory_3)) {goto label_3;}
#line 124
$memory_4 = $memory_2->{'name'};
#line 124
$memory_4 = c_rt_lib::to_nl($memory_4 ne $memory_1);
#line 124
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 124
if (c_rt_lib::check_true($memory_4)) {goto label_5;}
#line 125
$memory_5 = "incorrect module name: ";
#line 125
$memory_6 = $memory_2->{'name'};
#line 125
$memory_5 = $memory_5 . $memory_6;
#line 125
undef($memory_6);
#line 125
$memory_6 = " of function, expected: ";
#line 125
$memory_5 = $memory_5 . $memory_6;
#line 125
undef($memory_6);
#line 125
$memory_5 = $memory_5 . $memory_1;
#line 125
nparser_priv::add_error($memory_0, $memory_5);
#line 125
undef($memory_5);
#line 126
goto label_5;
#line 126
label_5:
#line 126
undef($memory_4);
#line 127
$memory_5 = nparser_priv::eat_text($memory_0);
#line 127
$memory_4 = c_rt_lib::ov_is($memory_5, 'ok');
#line 127
if (c_rt_lib::check_true($memory_4)) {goto label_6;}
#line 127
undef($memory_1);
#line 127
undef($memory_2);
#line 127
undef($memory_3);
#line 127
undef($memory_4);
#line 127
$_[0] = $memory_0;return $memory_5;
#line 127
label_6:
#line 127
$memory_6 = c_rt_lib::ov_as($memory_5, 'ok');
#line 127
 if (c_rt_lib::get_hashcount($memory_2) > 1) {$memory_2 = {%{$memory_2}};}$memory_2->{'name'} = $memory_6;
#line 127
undef($memory_4);
#line 127
undef($memory_5);
#line 127
undef($memory_6);
#line 128
$memory_4 = c_rt_lib::ov_mk_none('pub');
#line 128
$memory_5 = $memory_4;
#line 128
 if (c_rt_lib::get_hashcount($memory_2) > 1) {$memory_2 = {%{$memory_2}};}$memory_2->{'access'} = $memory_5;
#line 128
undef($memory_4);
#line 128
undef($memory_5);
#line 129
goto label_3;
#line 129
label_3:
#line 129
undef($memory_3);
#line 130
$memory_4 = nparser_priv::parse_fun_arg_list($memory_0);
#line 130
$memory_3 = c_rt_lib::ov_is($memory_4, 'ok');
#line 130
if (c_rt_lib::check_true($memory_3)) {goto label_7;}
#line 130
undef($memory_1);
#line 130
undef($memory_2);
#line 130
undef($memory_3);
#line 130
$_[0] = $memory_0;return $memory_4;
#line 130
label_7:
#line 130
$memory_5 = c_rt_lib::ov_as($memory_4, 'ok');
#line 130
 if (c_rt_lib::get_hashcount($memory_2) > 1) {$memory_2 = {%{$memory_2}};}$memory_2->{'args'} = $memory_5;
#line 130
undef($memory_3);
#line 130
undef($memory_4);
#line 130
undef($memory_5);
#line 131
$memory_4 = "state";
#line 131
$memory_4 = c_rt_lib::get_ref_hash($memory_0, $memory_4);
#line 131
$memory_5 = ":";
#line 131
$memory_3 = ntokenizer::next_is($memory_4, $memory_5);
#line 131
undef($memory_5);
#line 131
$memory_5 = "state";
#line 131
c_rt_lib::set_ref_hash($memory_0, $memory_5, $memory_4);
#line 131
undef($memory_5);
#line 131
undef($memory_4);
#line 131
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 131
if (c_rt_lib::check_true($memory_3)) {goto label_9;}
#line 132
$memory_4 = ":";
#line 132
nparser_priv::eat($memory_0, $memory_4);
#line 132
undef($memory_4);
#line 133
$memory_6 = nparser_priv::parse_type($memory_0);
#line 133
$memory_5 = c_rt_lib::ov_is($memory_6, 'ok');
#line 133
if (c_rt_lib::check_true($memory_5)) {goto label_10;}
#line 133
undef($memory_1);
#line 133
undef($memory_2);
#line 133
undef($memory_3);
#line 133
undef($memory_4);
#line 133
undef($memory_5);
#line 133
$_[0] = $memory_0;return $memory_6;
#line 133
label_10:
#line 133
$memory_4 = c_rt_lib::ov_as($memory_6, 'ok');
#line 133
undef($memory_5);
#line 133
undef($memory_6);
#line 134
$memory_5 = c_rt_lib::ov_mk_arg('type', $memory_4);
#line 134
$memory_6 = $memory_5;
#line 134
 if (c_rt_lib::get_hashcount($memory_2) > 1) {$memory_2 = {%{$memory_2}};}$memory_2->{'ret_type'} = $memory_6;
#line 134
undef($memory_5);
#line 134
undef($memory_6);
#line 134
undef($memory_4);
#line 135
goto label_9;
#line 135
label_9:
#line 135
undef($memory_3);
#line 137
$memory_4 = nparser_priv::parse_block($memory_0);
#line 137
$memory_3 = c_rt_lib::ov_is($memory_4, 'ok');
#line 137
if (c_rt_lib::check_true($memory_3)) {goto label_11;}
#line 137
undef($memory_1);
#line 137
undef($memory_2);
#line 137
undef($memory_3);
#line 137
$_[0] = $memory_0;return $memory_4;
#line 137
label_11:
#line 137
$memory_5 = c_rt_lib::ov_as($memory_4, 'ok');
#line 137
 if (c_rt_lib::get_hashcount($memory_2) > 1) {$memory_2 = {%{$memory_2}};}$memory_2->{'cmd'} = $memory_5;
#line 137
undef($memory_3);
#line 137
undef($memory_4);
#line 137
undef($memory_5);
#line 138
$memory_3 = c_rt_lib::ov_mk_arg('ok', $memory_2);
#line 138
undef($memory_1);
#line 138
undef($memory_2);
#line 138
$_[0] = $memory_0;return $memory_3;
#line 138
undef($memory_3);
#line 138
undef($memory_2);
#line 138
undef($memory_1);
#line 138
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub nparser_priv::parse_fun_val_arg_list($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);
#line 142
$memory_1 = [];
#line 143
label_2:
#line 143
$memory_3 = "state";
#line 143
$memory_3 = c_rt_lib::get_ref_hash($memory_0, $memory_3);
#line 143
$memory_4 = ")";
#line 143
$memory_2 = ntokenizer::next_is($memory_3, $memory_4);
#line 143
undef($memory_4);
#line 143
$memory_4 = "state";
#line 143
c_rt_lib::set_ref_hash($memory_0, $memory_4, $memory_3);
#line 143
undef($memory_4);
#line 143
undef($memory_3);
#line 143
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 143
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 143
if (c_rt_lib::check_true($memory_2)) {goto label_1;}
#line 144
$memory_5 = nparser_priv::parse_fun_val_arg($memory_0);
#line 144
$memory_4 = c_rt_lib::ov_is($memory_5, 'ok');
#line 144
if (c_rt_lib::check_true($memory_4)) {goto label_3;}
#line 144
undef($memory_1);
#line 144
undef($memory_2);
#line 144
undef($memory_3);
#line 144
undef($memory_4);
#line 144
$_[0] = $memory_0;return $memory_5;
#line 144
label_3:
#line 144
$memory_3 = c_rt_lib::ov_as($memory_5, 'ok');
#line 144
undef($memory_4);
#line 144
undef($memory_5);
#line 145
array::push($memory_1, $memory_3);
#line 146
$memory_5 = ",";
#line 146
$memory_4 = nparser_priv::try_eat($memory_0, $memory_5);
#line 146
undef($memory_5);
#line 146
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 146
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 146
if (c_rt_lib::check_true($memory_4)) {goto label_5;}
#line 146
undef($memory_3);
#line 146
undef($memory_4);
#line 146
goto label_1;
#line 146
goto label_5;
#line 146
label_5:
#line 146
undef($memory_4);
#line 146
undef($memory_3);
#line 147
goto label_2;
#line 147
label_1:
#line 147
undef($memory_2);
#line 148
$memory_2 = ")";
#line 148
nparser_priv::eat($memory_0, $memory_2);
#line 148
undef($memory_2);
#line 150
$memory_2 = c_rt_lib::ov_mk_arg('ok', $memory_1);
#line 150
undef($memory_1);
#line 150
$_[0] = $memory_0;return $memory_2;
#line 150
undef($memory_2);
#line 150
undef($memory_1);
#line 150
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub nparser_priv::parse_expr_list($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);
#line 154
$memory_1 = [];
#line 155
label_2:
#line 155
$memory_3 = "state";
#line 155
$memory_3 = c_rt_lib::get_ref_hash($memory_0, $memory_3);
#line 155
$memory_4 = ")";
#line 155
$memory_2 = ntokenizer::next_is($memory_3, $memory_4);
#line 155
undef($memory_4);
#line 155
$memory_4 = "state";
#line 155
c_rt_lib::set_ref_hash($memory_0, $memory_4, $memory_3);
#line 155
undef($memory_4);
#line 155
undef($memory_3);
#line 155
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 155
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 155
if (c_rt_lib::check_true($memory_2)) {goto label_1;}
#line 156
$memory_5 = nparser_priv::parse_expr($memory_0);
#line 156
$memory_4 = c_rt_lib::ov_is($memory_5, 'ok');
#line 156
if (c_rt_lib::check_true($memory_4)) {goto label_3;}
#line 156
undef($memory_1);
#line 156
undef($memory_2);
#line 156
undef($memory_3);
#line 156
undef($memory_4);
#line 156
$_[0] = $memory_0;return $memory_5;
#line 156
label_3:
#line 156
$memory_3 = c_rt_lib::ov_as($memory_5, 'ok');
#line 156
undef($memory_4);
#line 156
undef($memory_5);
#line 157
array::push($memory_1, $memory_3);
#line 158
$memory_5 = ",";
#line 158
$memory_4 = nparser_priv::try_eat($memory_0, $memory_5);
#line 158
undef($memory_5);
#line 158
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 158
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 158
if (c_rt_lib::check_true($memory_4)) {goto label_5;}
#line 158
undef($memory_3);
#line 158
undef($memory_4);
#line 158
goto label_1;
#line 158
goto label_5;
#line 158
label_5:
#line 158
undef($memory_4);
#line 158
undef($memory_3);
#line 159
goto label_2;
#line 159
label_1:
#line 159
undef($memory_2);
#line 160
$memory_2 = ")";
#line 160
nparser_priv::eat($memory_0, $memory_2);
#line 160
undef($memory_2);
#line 161
$memory_2 = c_rt_lib::ov_mk_arg('ok', $memory_1);
#line 161
undef($memory_1);
#line 161
$_[0] = $memory_0;return $memory_2;
#line 161
undef($memory_2);
#line 161
undef($memory_1);
#line 161
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub nparser_priv::parse_fun_val_arg($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);
#line 165
$memory_1 = {};
#line 166
$memory_3 = "ref";
#line 166
$memory_2 = nparser_priv::try_eat($memory_0, $memory_3);
#line 166
undef($memory_3);
#line 166
if (c_rt_lib::check_true($memory_2)) {goto label_2;}
#line 166
$memory_2 = c_rt_lib::ov_mk_none('none');
#line 166
goto label_1;
#line 166
label_2:
#line 166
$memory_2 = c_rt_lib::ov_mk_none('ref');
#line 166
label_1:
#line 166
$memory_3 = $memory_2;
#line 166
 if (c_rt_lib::get_hashcount($memory_1) > 1) {$memory_1 = {%{$memory_1}};}$memory_1->{'mod'} = $memory_3;
#line 166
undef($memory_2);
#line 166
undef($memory_3);
#line 167
$memory_3 = nparser_priv::parse_expr($memory_0);
#line 167
$memory_2 = c_rt_lib::ov_is($memory_3, 'ok');
#line 167
if (c_rt_lib::check_true($memory_2)) {goto label_3;}
#line 167
undef($memory_1);
#line 167
undef($memory_2);
#line 167
$_[0] = $memory_0;return $memory_3;
#line 167
label_3:
#line 167
$memory_4 = c_rt_lib::ov_as($memory_3, 'ok');
#line 167
 if (c_rt_lib::get_hashcount($memory_1) > 1) {$memory_1 = {%{$memory_1}};}$memory_1->{'val'} = $memory_4;
#line 167
undef($memory_2);
#line 167
undef($memory_3);
#line 167
undef($memory_4);
#line 168
$memory_2 = c_rt_lib::ov_mk_arg('ok', $memory_1);
#line 168
undef($memory_1);
#line 168
$_[0] = $memory_0;return $memory_2;
#line 168
undef($memory_2);
#line 168
undef($memory_1);
#line 168
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub nparser_priv::parse_fun_label($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);
#line 172
$memory_2 = "";
#line 172
$memory_3 = "";
#line 172
$memory_1 = {name => $memory_2,module => $memory_3,};
#line 172
undef($memory_2);
#line 172
undef($memory_3);
#line 173
$memory_3 = "state";
#line 173
$memory_3 = c_rt_lib::get_ref_hash($memory_0, $memory_3);
#line 173
$memory_4 = c_rt_lib::ov_mk_none('word');
#line 173
$memory_2 = ntokenizer::is_type($memory_3, $memory_4);
#line 173
undef($memory_4);
#line 173
$memory_4 = "state";
#line 173
c_rt_lib::set_ref_hash($memory_0, $memory_4, $memory_3);
#line 173
undef($memory_4);
#line 173
undef($memory_3);
#line 173
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 173
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 173
if (c_rt_lib::check_true($memory_2)) {goto label_2;}
#line 174
$memory_3 = "after '\@' module name of function expacted";
#line 174
nparser_priv::add_error($memory_0, $memory_3);
#line 174
undef($memory_3);
#line 175
undef($memory_2);
#line 175
$_[0] = $memory_0;return $memory_1;
#line 176
goto label_2;
#line 176
label_2:
#line 176
undef($memory_2);
#line 177
$memory_3 = "state";
#line 177
$memory_3 = c_rt_lib::get_ref_hash($memory_0, $memory_3);
#line 177
$memory_4 = c_rt_lib::ov_mk_none('word');
#line 177
$memory_2 = ntokenizer::eat_type($memory_3, $memory_4);
#line 177
undef($memory_4);
#line 177
$memory_4 = "state";
#line 177
c_rt_lib::set_ref_hash($memory_0, $memory_4, $memory_3);
#line 177
undef($memory_4);
#line 177
undef($memory_3);
#line 177
$memory_3 = $memory_2;
#line 177
 if (c_rt_lib::get_hashcount($memory_1) > 1) {$memory_1 = {%{$memory_1}};}$memory_1->{'module'} = $memory_3;
#line 177
undef($memory_2);
#line 177
undef($memory_3);
#line 178
$memory_4 = "::";
#line 178
$memory_2 = nparser_priv::try_eat($memory_0, $memory_4);
#line 178
undef($memory_4);
#line 178
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 178
if (c_rt_lib::check_true($memory_3)) {goto label_5;}
#line 178
$memory_4 = "state";
#line 178
$memory_4 = c_rt_lib::get_ref_hash($memory_0, $memory_4);
#line 178
$memory_2 = ntokenizer::is_text($memory_4);
#line 178
$memory_5 = "state";
#line 178
c_rt_lib::set_ref_hash($memory_0, $memory_5, $memory_4);
#line 178
undef($memory_5);
#line 178
undef($memory_4);
#line 178
label_5:
#line 178
undef($memory_3);
#line 178
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 178
if (c_rt_lib::check_true($memory_2)) {goto label_4;}
#line 179
$memory_4 = "state";
#line 179
$memory_4 = c_rt_lib::get_ref_hash($memory_0, $memory_4);
#line 179
$memory_3 = ntokenizer::eat_text($memory_4);
#line 179
$memory_5 = "state";
#line 179
c_rt_lib::set_ref_hash($memory_0, $memory_5, $memory_4);
#line 179
undef($memory_5);
#line 179
undef($memory_4);
#line 179
$memory_4 = $memory_3;
#line 179
 if (c_rt_lib::get_hashcount($memory_1) > 1) {$memory_1 = {%{$memory_1}};}$memory_1->{'name'} = $memory_4;
#line 179
undef($memory_3);
#line 179
undef($memory_4);
#line 180
goto label_3;
#line 180
label_4:
#line 181
$memory_3 = "reference of function can be taken only to public function";
#line 181
nparser_priv::add_error($memory_0, $memory_3);
#line 181
undef($memory_3);
#line 182
goto label_3;
#line 182
label_3:
#line 182
undef($memory_2);
#line 183
$_[0] = $memory_0;return $memory_1;
#line 183
undef($memory_1);
#line 183
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub nparser_priv::parse_label($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);
#line 187
$memory_2 = "state";
#line 187
$memory_2 = c_rt_lib::get_ref_hash($memory_0, $memory_2);
#line 187
$memory_3 = c_rt_lib::ov_mk_none('word');
#line 187
$memory_1 = ntokenizer::eat_type($memory_2, $memory_3);
#line 187
undef($memory_3);
#line 187
$memory_3 = "state";
#line 187
c_rt_lib::set_ref_hash($memory_0, $memory_3, $memory_2);
#line 187
undef($memory_3);
#line 187
undef($memory_2);
#line 188
$memory_4 = "state";
#line 188
$memory_4 = c_rt_lib::get_ref_hash($memory_0, $memory_4);
#line 188
$memory_5 = "(";
#line 188
$memory_2 = ntokenizer::next_is($memory_4, $memory_5);
#line 188
undef($memory_5);
#line 188
$memory_5 = "state";
#line 188
c_rt_lib::set_ref_hash($memory_0, $memory_5, $memory_4);
#line 188
undef($memory_5);
#line 188
undef($memory_4);
#line 188
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 188
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 188
if (c_rt_lib::check_true($memory_3)) {goto label_3;}
#line 188
$memory_4 = "state";
#line 188
$memory_4 = c_rt_lib::get_ref_hash($memory_0, $memory_4);
#line 188
$memory_5 = "::";
#line 188
$memory_2 = ntokenizer::next_is($memory_4, $memory_5);
#line 188
undef($memory_5);
#line 188
$memory_5 = "state";
#line 188
c_rt_lib::set_ref_hash($memory_0, $memory_5, $memory_4);
#line 188
undef($memory_5);
#line 188
undef($memory_4);
#line 188
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 188
label_3:
#line 188
undef($memory_3);
#line 188
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 188
if (c_rt_lib::check_true($memory_2)) {goto label_2;}
#line 188
$memory_3 = c_rt_lib::ov_mk_arg('var', $memory_1);
#line 188
$memory_3 = c_rt_lib::ov_mk_arg('ok', $memory_3);
#line 188
undef($memory_1);
#line 188
undef($memory_2);
#line 188
$_[0] = $memory_0;return $memory_3;
#line 188
undef($memory_3);
#line 188
goto label_2;
#line 188
label_2:
#line 188
undef($memory_2);
#line 189
$memory_3 = "";
#line 189
$memory_4 = "";
#line 189
$memory_5 = [];
#line 189
$memory_2 = {module => $memory_3,name => $memory_4,args => $memory_5,};
#line 189
undef($memory_3);
#line 189
undef($memory_4);
#line 189
undef($memory_5);
#line 190
$memory_4 = "::";
#line 190
$memory_3 = nparser_priv::try_eat($memory_0, $memory_4);
#line 190
undef($memory_4);
#line 190
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 190
if (c_rt_lib::check_true($memory_3)) {goto label_5;}
#line 191
$memory_4 = $memory_1;
#line 191
 if (c_rt_lib::get_hashcount($memory_2) > 1) {$memory_2 = {%{$memory_2}};}$memory_2->{'module'} = $memory_4;
#line 191
undef($memory_4);
#line 192
$memory_5 = nparser_priv::eat_text($memory_0);
#line 192
$memory_4 = c_rt_lib::ov_is($memory_5, 'ok');
#line 192
if (c_rt_lib::check_true($memory_4)) {goto label_6;}
#line 192
undef($memory_1);
#line 192
undef($memory_2);
#line 192
undef($memory_3);
#line 192
undef($memory_4);
#line 192
$_[0] = $memory_0;return $memory_5;
#line 192
label_6:
#line 192
$memory_6 = c_rt_lib::ov_as($memory_5, 'ok');
#line 192
 if (c_rt_lib::get_hashcount($memory_2) > 1) {$memory_2 = {%{$memory_2}};}$memory_2->{'name'} = $memory_6;
#line 192
undef($memory_4);
#line 192
undef($memory_5);
#line 192
undef($memory_6);
#line 193
goto label_4;
#line 193
label_5:
#line 194
$memory_4 = $memory_1;
#line 194
 if (c_rt_lib::get_hashcount($memory_2) > 1) {$memory_2 = {%{$memory_2}};}$memory_2->{'name'} = $memory_4;
#line 194
undef($memory_4);
#line 195
goto label_4;
#line 195
label_4:
#line 195
undef($memory_3);
#line 197
$memory_3 = "(";
#line 197
nparser_priv::eat($memory_0, $memory_3);
#line 197
undef($memory_3);
#line 198
$memory_4 = nparser_priv::parse_fun_val_arg_list($memory_0);
#line 198
$memory_3 = c_rt_lib::ov_is($memory_4, 'ok');
#line 198
if (c_rt_lib::check_true($memory_3)) {goto label_7;}
#line 198
undef($memory_1);
#line 198
undef($memory_2);
#line 198
undef($memory_3);
#line 198
$_[0] = $memory_0;return $memory_4;
#line 198
label_7:
#line 198
$memory_5 = c_rt_lib::ov_as($memory_4, 'ok');
#line 198
 if (c_rt_lib::get_hashcount($memory_2) > 1) {$memory_2 = {%{$memory_2}};}$memory_2->{'args'} = $memory_5;
#line 198
undef($memory_3);
#line 198
undef($memory_4);
#line 198
undef($memory_5);
#line 199
$memory_3 = c_rt_lib::ov_mk_arg('fun_val', $memory_2);
#line 199
$memory_3 = c_rt_lib::ov_mk_arg('ok', $memory_3);
#line 199
undef($memory_1);
#line 199
undef($memory_2);
#line 199
$_[0] = $memory_0;return $memory_3;
#line 199
undef($memory_3);
#line 199
undef($memory_1);
#line 199
undef($memory_2);
#line 199
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub nparser_priv::parse_hash_key($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);
#line 203
$memory_2 = "state";
#line 203
$memory_2 = c_rt_lib::get_ref_hash($memory_0, $memory_2);
#line 203
$memory_1 = ntokenizer::is_text($memory_2);
#line 203
$memory_3 = "state";
#line 203
c_rt_lib::set_ref_hash($memory_0, $memory_3, $memory_2);
#line 203
undef($memory_3);
#line 203
undef($memory_2);
#line 203
$memory_1 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_1));
#line 203
$memory_1 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_1));
#line 203
if (c_rt_lib::check_true($memory_1)) {goto label_2;}
#line 203
$memory_2 = "";
#line 203
$memory_2 = c_rt_lib::ov_mk_arg('hash_key', $memory_2);
#line 203
undef($memory_1);
#line 203
$_[0] = $memory_0;return $memory_2;
#line 203
undef($memory_2);
#line 203
goto label_2;
#line 203
label_2:
#line 203
undef($memory_1);
#line 204
$memory_2 = "state";
#line 204
$memory_2 = c_rt_lib::get_ref_hash($memory_0, $memory_2);
#line 204
$memory_1 = ntokenizer::eat_text($memory_2);
#line 204
$memory_3 = "state";
#line 204
c_rt_lib::set_ref_hash($memory_0, $memory_3, $memory_2);
#line 204
undef($memory_3);
#line 204
undef($memory_2);
#line 205
$memory_2 = c_rt_lib::ov_mk_arg('hash_key', $memory_1);
#line 205
undef($memory_1);
#line 205
$_[0] = $memory_0;return $memory_2;
#line 205
undef($memory_2);
#line 205
undef($memory_1);
#line 205
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub nparser_priv::parse_hash($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);
#line 209
$memory_1 = [];
#line 210
$memory_2 = "{";
#line 210
nparser_priv::eat($memory_0, $memory_2);
#line 210
undef($memory_2);
#line 211
label_2:
#line 211
$memory_3 = "state";
#line 211
$memory_3 = c_rt_lib::get_ref_hash($memory_0, $memory_3);
#line 211
$memory_4 = "}";
#line 211
$memory_2 = ntokenizer::next_is($memory_3, $memory_4);
#line 211
undef($memory_4);
#line 211
$memory_4 = "state";
#line 211
c_rt_lib::set_ref_hash($memory_0, $memory_4, $memory_3);
#line 211
undef($memory_4);
#line 211
undef($memory_3);
#line 211
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 211
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 211
if (c_rt_lib::check_true($memory_2)) {goto label_1;}
#line 212
$memory_4 = c_rt_lib::ov_mk_none('nop');
#line 212
$memory_5 = c_rt_lib::ov_mk_none('nop');
#line 212
$memory_3 = {key => $memory_4,val => $memory_5,};
#line 212
undef($memory_4);
#line 212
undef($memory_5);
#line 213
$memory_4 = nparser_priv::parse_hash_key($memory_0);
#line 213
$memory_5 = $memory_4;
#line 213
 if (c_rt_lib::get_hashcount($memory_3) > 1) {$memory_3 = {%{$memory_3}};}$memory_3->{'key'} = $memory_5;
#line 213
undef($memory_4);
#line 213
undef($memory_5);
#line 214
$memory_4 = "=>";
#line 214
nparser_priv::eat($memory_0, $memory_4);
#line 214
undef($memory_4);
#line 215
$memory_5 = nparser_priv::parse_expr($memory_0);
#line 215
$memory_4 = c_rt_lib::ov_is($memory_5, 'ok');
#line 215
if (c_rt_lib::check_true($memory_4)) {goto label_3;}
#line 215
undef($memory_1);
#line 215
undef($memory_2);
#line 215
undef($memory_3);
#line 215
undef($memory_4);
#line 215
$_[0] = $memory_0;return $memory_5;
#line 215
label_3:
#line 215
$memory_6 = c_rt_lib::ov_as($memory_5, 'ok');
#line 215
 if (c_rt_lib::get_hashcount($memory_3) > 1) {$memory_3 = {%{$memory_3}};}$memory_3->{'val'} = $memory_6;
#line 215
undef($memory_4);
#line 215
undef($memory_5);
#line 215
undef($memory_6);
#line 216
array::push($memory_1, $memory_3);
#line 217
$memory_5 = ",";
#line 217
$memory_4 = nparser_priv::try_eat($memory_0, $memory_5);
#line 217
undef($memory_5);
#line 217
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 217
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 217
if (c_rt_lib::check_true($memory_4)) {goto label_5;}
#line 217
undef($memory_3);
#line 217
undef($memory_4);
#line 217
goto label_1;
#line 217
goto label_5;
#line 217
label_5:
#line 217
undef($memory_4);
#line 217
undef($memory_3);
#line 218
goto label_2;
#line 218
label_1:
#line 218
undef($memory_2);
#line 219
$memory_2 = "}";
#line 219
nparser_priv::eat($memory_0, $memory_2);
#line 219
undef($memory_2);
#line 220
$memory_2 = c_rt_lib::ov_mk_arg('ok', $memory_1);
#line 220
undef($memory_1);
#line 220
$_[0] = $memory_0;return $memory_2;
#line 220
undef($memory_2);
#line 220
undef($memory_1);
#line 220
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub nparser_priv::parse_arr($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);
#line 224
$memory_1 = [];
#line 225
$memory_2 = "[";
#line 225
nparser_priv::eat($memory_0, $memory_2);
#line 225
undef($memory_2);
#line 226
label_2:
#line 226
$memory_3 = "state";
#line 226
$memory_3 = c_rt_lib::get_ref_hash($memory_0, $memory_3);
#line 226
$memory_4 = "]";
#line 226
$memory_2 = ntokenizer::next_is($memory_3, $memory_4);
#line 226
undef($memory_4);
#line 226
$memory_4 = "state";
#line 226
c_rt_lib::set_ref_hash($memory_0, $memory_4, $memory_3);
#line 226
undef($memory_4);
#line 226
undef($memory_3);
#line 226
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 226
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 226
if (c_rt_lib::check_true($memory_2)) {goto label_1;}
#line 227
$memory_5 = nparser_priv::parse_expr($memory_0);
#line 227
$memory_4 = c_rt_lib::ov_is($memory_5, 'ok');
#line 227
if (c_rt_lib::check_true($memory_4)) {goto label_3;}
#line 227
undef($memory_1);
#line 227
undef($memory_2);
#line 227
undef($memory_3);
#line 227
undef($memory_4);
#line 227
$_[0] = $memory_0;return $memory_5;
#line 227
label_3:
#line 227
$memory_3 = c_rt_lib::ov_as($memory_5, 'ok');
#line 227
undef($memory_4);
#line 227
undef($memory_5);
#line 228
array::push($memory_1, $memory_3);
#line 229
$memory_5 = ",";
#line 229
$memory_4 = nparser_priv::try_eat($memory_0, $memory_5);
#line 229
undef($memory_5);
#line 229
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 229
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 229
if (c_rt_lib::check_true($memory_4)) {goto label_5;}
#line 229
undef($memory_3);
#line 229
undef($memory_4);
#line 229
goto label_1;
#line 229
goto label_5;
#line 229
label_5:
#line 229
undef($memory_4);
#line 229
undef($memory_3);
#line 230
goto label_2;
#line 230
label_1:
#line 230
undef($memory_2);
#line 231
$memory_2 = "]";
#line 231
nparser_priv::eat($memory_0, $memory_2);
#line 231
undef($memory_2);
#line 232
$memory_2 = c_rt_lib::ov_mk_arg('ok', $memory_1);
#line 232
undef($memory_1);
#line 232
$_[0] = $memory_0;return $memory_2;
#line 232
undef($memory_2);
#line 232
undef($memory_1);
#line 232
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub nparser_priv::parse_expr($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);
#line 236
$memory_4 = 0;
#line 236
$memory_3 = nparser_priv::parse_expr_rec($memory_0, $memory_4);
#line 236
undef($memory_4);
#line 236
$memory_2 = c_rt_lib::ov_is($memory_3, 'ok');
#line 236
if (c_rt_lib::check_true($memory_2)) {goto label_1;}
#line 236
undef($memory_1);
#line 236
undef($memory_2);
#line 236
$_[0] = $memory_0;return $memory_3;
#line 236
label_1:
#line 236
$memory_1 = c_rt_lib::ov_as($memory_3, 'ok');
#line 236
undef($memory_2);
#line 236
undef($memory_3);
#line 237
$memory_3 = 0;
#line 237
$memory_2 = nparser_priv::parse_expr_rec_left($memory_0, $memory_1, $memory_3);
#line 237
undef($memory_3);
#line 237
undef($memory_1);
#line 237
$_[0] = $memory_0;return $memory_2;
#line 237
undef($memory_2);
#line 237
undef($memory_1);
#line 237
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub nparser_priv::parse_type($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);
#line 240
$memory_2 = "\@";
#line 240
$memory_1 = nparser_priv::try_eat($memory_0, $memory_2);
#line 240
undef($memory_2);
#line 240
$memory_1 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_1));
#line 240
if (c_rt_lib::check_true($memory_1)) {goto label_2;}
#line 241
$memory_3 = "\@";
#line 241
$memory_4 = nparser_priv::parse_fun_label($memory_0);
#line 241
$memory_4 = c_rt_lib::ov_mk_arg('fun_label', $memory_4);
#line 241
$memory_2 = {op => $memory_3,val => $memory_4,};
#line 241
undef($memory_3);
#line 241
undef($memory_4);
#line 241
$memory_2 = c_rt_lib::ov_mk_arg('unary_op', $memory_2);
#line 241
$memory_2 = c_rt_lib::ov_mk_arg('ok', $memory_2);
#line 241
undef($memory_1);
#line 241
$_[0] = $memory_0;return $memory_2;
#line 241
undef($memory_2);
#line 242
goto label_2;
#line 242
label_2:
#line 242
undef($memory_1);
#line 243
$memory_2 = "state";
#line 243
$memory_2 = c_rt_lib::get_ref_hash($memory_0, $memory_2);
#line 243
$memory_3 = c_rt_lib::ov_mk_none('word');
#line 243
$memory_1 = ntokenizer::is_type($memory_2, $memory_3);
#line 243
undef($memory_3);
#line 243
$memory_3 = "state";
#line 243
c_rt_lib::set_ref_hash($memory_0, $memory_3, $memory_2);
#line 243
undef($memory_3);
#line 243
undef($memory_2);
#line 243
$memory_1 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_1));
#line 243
if (c_rt_lib::check_true($memory_1)) {goto label_4;}
#line 244
$memory_4 = nparser_priv::parse_label($memory_0);
#line 244
$memory_3 = c_rt_lib::ov_is($memory_4, 'ok');
#line 244
if (c_rt_lib::check_true($memory_3)) {goto label_5;}
#line 244
undef($memory_1);
#line 244
undef($memory_2);
#line 244
undef($memory_3);
#line 244
$_[0] = $memory_0;return $memory_4;
#line 244
label_5:
#line 244
$memory_2 = c_rt_lib::ov_as($memory_4, 'ok');
#line 244
undef($memory_3);
#line 244
undef($memory_4);
#line 245
$memory_3 = $memory_2;
#line 245
$memory_3 = c_rt_lib::ov_is($memory_3, 'fun_val');
#line 245
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 245
if (c_rt_lib::check_true($memory_3)) {goto label_7;}
#line 245
$memory_4 = c_rt_lib::ov_mk_arg('ok', $memory_2);
#line 245
undef($memory_1);
#line 245
undef($memory_2);
#line 245
undef($memory_3);
#line 245
$_[0] = $memory_0;return $memory_4;
#line 245
undef($memory_4);
#line 245
goto label_7;
#line 245
label_7:
#line 245
undef($memory_3);
#line 245
undef($memory_2);
#line 246
goto label_4;
#line 246
label_4:
#line 246
undef($memory_1);
#line 247
$memory_1 = "wrong format of type, expected '\@' or function call";
#line 247
nparser_priv::add_error($memory_0, $memory_1);
#line 247
undef($memory_1);
#line 248
$memory_1 = c_rt_lib::ov_mk_none('nop');
#line 248
$memory_1 = c_rt_lib::ov_mk_arg('ok', $memory_1);
#line 248
$_[0] = $memory_0;return $memory_1;
#line 248
undef($memory_1);
#line 248
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub nparser_priv::parse_expr_rec_left($$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];$memory_2 = $_[2];
#line 251
label_2:
#line 252
$memory_4 = "state";
#line 252
$memory_4 = c_rt_lib::get_ref_hash($memory_0, $memory_4);
#line 252
$memory_3 = ntokenizer::get_token($memory_4);
#line 252
$memory_5 = "state";
#line 252
c_rt_lib::set_ref_hash($memory_0, $memory_5, $memory_4);
#line 252
undef($memory_5);
#line 252
undef($memory_4);
#line 254
$memory_6 = nast::get_ternary_ops();
#line 254
$memory_5 = hash::has_key($memory_6, $memory_3);
#line 254
undef($memory_6);
#line 254
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 254
if (c_rt_lib::check_true($memory_5)) {goto label_4;}
#line 255
$memory_4 = $memory_3;
#line 256
$memory_6 = "?";
#line 256
$memory_6 = c_rt_lib::to_nl($memory_4 eq $memory_6);
#line 256
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 256
if (c_rt_lib::check_true($memory_6)) {goto label_6;}
#line 257
$memory_8 = nast::get_ternary_ops();
#line 257
$memory_9 = "?";
#line 257
$memory_7 = hash::get_value($memory_8, $memory_9);
#line 257
undef($memory_9);
#line 257
undef($memory_8);
#line 258
$memory_8 = $memory_7->{'prec'};
#line 258
$memory_8 = c_rt_lib::to_nl($memory_8 < $memory_2);
#line 258
if (c_rt_lib::check_true($memory_8)) {goto label_9;}
#line 258
$memory_8 = $memory_7->{'prec'};
#line 258
$memory_8 = c_rt_lib::to_nl($memory_8 == $memory_2);
#line 258
$memory_9 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 258
if (c_rt_lib::check_true($memory_9)) {goto label_10;}
#line 258
$memory_10 = $memory_7->{'assoc'};
#line 258
$memory_11 = "left";
#line 258
$memory_8 = ov::is($memory_10, $memory_11);
#line 258
undef($memory_11);
#line 258
undef($memory_10);
#line 258
label_10:
#line 258
undef($memory_9);
#line 258
label_9:
#line 258
$memory_8 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 258
if (c_rt_lib::check_true($memory_8)) {goto label_8;}
#line 258
$memory_9 = c_rt_lib::ov_mk_arg('ok', $memory_1);
#line 258
undef($memory_1);
#line 258
undef($memory_2);
#line 258
undef($memory_3);
#line 258
undef($memory_4);
#line 258
undef($memory_5);
#line 258
undef($memory_6);
#line 258
undef($memory_7);
#line 258
undef($memory_8);
#line 258
$_[0] = $memory_0;return $memory_9;
#line 258
undef($memory_9);
#line 258
goto label_8;
#line 258
label_8:
#line 258
undef($memory_8);
#line 259
nparser_priv::eat($memory_0, $memory_4);
#line 260
$memory_10 = nparser_priv::parse_expr($memory_0);
#line 260
$memory_9 = c_rt_lib::ov_is($memory_10, 'ok');
#line 260
if (c_rt_lib::check_true($memory_9)) {goto label_11;}
#line 260
undef($memory_1);
#line 260
undef($memory_2);
#line 260
undef($memory_3);
#line 260
undef($memory_4);
#line 260
undef($memory_5);
#line 260
undef($memory_6);
#line 260
undef($memory_7);
#line 260
undef($memory_8);
#line 260
undef($memory_9);
#line 260
$_[0] = $memory_0;return $memory_10;
#line 260
label_11:
#line 260
$memory_8 = c_rt_lib::ov_as($memory_10, 'ok');
#line 260
undef($memory_9);
#line 260
undef($memory_10);
#line 261
$memory_9 = ":";
#line 261
nparser_priv::eat($memory_0, $memory_9);
#line 261
undef($memory_9);
#line 262
$memory_12 = $memory_7->{'prec'};
#line 262
$memory_11 = nparser_priv::parse_expr_rec($memory_0, $memory_12);
#line 262
undef($memory_12);
#line 262
$memory_10 = c_rt_lib::ov_is($memory_11, 'ok');
#line 262
if (c_rt_lib::check_true($memory_10)) {goto label_12;}
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
undef($memory_6);
#line 262
undef($memory_7);
#line 262
undef($memory_8);
#line 262
undef($memory_9);
#line 262
undef($memory_10);
#line 262
$_[0] = $memory_0;return $memory_11;
#line 262
label_12:
#line 262
$memory_9 = c_rt_lib::ov_as($memory_11, 'ok');
#line 262
undef($memory_10);
#line 262
undef($memory_11);
#line 263
$memory_11 = "?";
#line 263
$memory_10 = {fst => $memory_1,snd => $memory_8,thrd => $memory_9,op => $memory_11,};
#line 263
undef($memory_11);
#line 263
$memory_10 = c_rt_lib::ov_mk_arg('ternary_op', $memory_10);
#line 263
$memory_1 = $memory_10;
#line 263
undef($memory_10);
#line 263
undef($memory_7);
#line 263
undef($memory_8);
#line 263
undef($memory_9);
#line 264
goto label_5;
#line 264
label_6:
#line 265
$memory_7 = "ternary op: ";
#line 265
$memory_7 = $memory_7 . $memory_4;
#line 265
$memory_7 = c_rt_lib::ov_mk_arg('err', $memory_7);
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
$_[0] = $memory_0;return $memory_7;
#line 265
undef($memory_7);
#line 266
goto label_5;
#line 266
label_5:
#line 266
undef($memory_6);
#line 267
goto label_3;
#line 267
label_4:
#line 267
$memory_6 = nast::get_bin_ops();
#line 267
$memory_5 = hash::has_key($memory_6, $memory_3);
#line 267
undef($memory_6);
#line 267
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 267
if (c_rt_lib::check_true($memory_5)) {goto label_13;}
#line 268
$memory_4 = $memory_3;
#line 269
$memory_7 = nast::get_bin_ops();
#line 269
$memory_6 = hash::get_value($memory_7, $memory_3);
#line 269
undef($memory_7);
#line 270
$memory_7 = $memory_6->{'prec'};
#line 270
$memory_7 = c_rt_lib::to_nl($memory_7 < $memory_2);
#line 270
if (c_rt_lib::check_true($memory_7)) {goto label_16;}
#line 270
$memory_7 = $memory_6->{'prec'};
#line 270
$memory_7 = c_rt_lib::to_nl($memory_7 == $memory_2);
#line 270
$memory_8 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 270
if (c_rt_lib::check_true($memory_8)) {goto label_17;}
#line 270
$memory_9 = $memory_6->{'assoc'};
#line 270
$memory_10 = "left";
#line 270
$memory_7 = ov::is($memory_9, $memory_10);
#line 270
undef($memory_10);
#line 270
undef($memory_9);
#line 270
label_17:
#line 270
undef($memory_8);
#line 270
label_16:
#line 270
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 270
if (c_rt_lib::check_true($memory_7)) {goto label_15;}
#line 270
$memory_8 = c_rt_lib::ov_mk_arg('ok', $memory_1);
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
undef($memory_6);
#line 270
undef($memory_7);
#line 270
$_[0] = $memory_0;return $memory_8;
#line 270
undef($memory_8);
#line 270
goto label_15;
#line 270
label_15:
#line 270
undef($memory_7);
#line 271
nparser_priv::eat($memory_0, $memory_3);
#line 272
$memory_7 = "->";
#line 272
$memory_7 = c_rt_lib::to_nl($memory_4 eq $memory_7);
#line 272
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 272
if (c_rt_lib::check_true($memory_7)) {goto label_19;}
#line 273
$memory_9 = nparser_priv::parse_hash_key($memory_0);
#line 273
$memory_8 = {op => $memory_4,left => $memory_1,right => $memory_9,};
#line 273
undef($memory_9);
#line 273
$memory_8 = c_rt_lib::ov_mk_arg('bin_op', $memory_8);
#line 273
$memory_1 = $memory_8;
#line 273
undef($memory_8);
#line 274
goto label_18;
#line 274
label_19:
#line 274
$memory_7 = "as";
#line 274
$memory_7 = c_rt_lib::to_nl($memory_4 eq $memory_7);
#line 274
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 274
if (c_rt_lib::check_true($memory_7)) {goto label_20;}
#line 275
$memory_8 = ":";
#line 275
nparser_priv::eat($memory_0, $memory_8);
#line 275
undef($memory_8);
#line 276
$memory_8 = nparser_priv::parse_variant_label($memory_0);
#line 277
$memory_10 = c_rt_lib::ov_mk_none('ov_as');
#line 277
$memory_9 = {op => $memory_10,left => $memory_1,case => $memory_8,};
#line 277
undef($memory_10);
#line 277
$memory_9 = c_rt_lib::ov_mk_arg('var_op', $memory_9);
#line 277
$memory_1 = $memory_9;
#line 277
undef($memory_9);
#line 277
undef($memory_8);
#line 278
goto label_18;
#line 278
label_20:
#line 278
$memory_7 = "is";
#line 278
$memory_7 = c_rt_lib::to_nl($memory_4 eq $memory_7);
#line 278
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 278
if (c_rt_lib::check_true($memory_7)) {goto label_21;}
#line 279
$memory_8 = ":";
#line 279
nparser_priv::eat($memory_0, $memory_8);
#line 279
undef($memory_8);
#line 280
$memory_8 = nparser_priv::parse_variant_label($memory_0);
#line 281
$memory_10 = c_rt_lib::ov_mk_none('ov_is');
#line 281
$memory_9 = {op => $memory_10,left => $memory_1,case => $memory_8,};
#line 281
undef($memory_10);
#line 281
$memory_9 = c_rt_lib::ov_mk_arg('var_op', $memory_9);
#line 281
$memory_1 = $memory_9;
#line 281
undef($memory_9);
#line 281
undef($memory_8);
#line 282
goto label_18;
#line 282
label_21:
#line 283
$memory_8 = "=";
#line 283
$memory_8 = c_rt_lib::to_nl($memory_4 eq $memory_8);
#line 283
$memory_8 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 283
if (c_rt_lib::check_true($memory_8)) {goto label_23;}
#line 283
nparser_priv::check_lvalue($memory_0, $memory_1);
#line 283
goto label_23;
#line 283
label_23:
#line 283
undef($memory_8);
#line 284
$memory_12 = nast::get_bin_ops();
#line 284
$memory_11 = hash::get_value($memory_12, $memory_4);
#line 284
undef($memory_12);
#line 284
$memory_11 = $memory_11->{'prec'};
#line 284
$memory_10 = nparser_priv::parse_expr_rec($memory_0, $memory_11);
#line 284
undef($memory_11);
#line 284
$memory_9 = c_rt_lib::ov_is($memory_10, 'ok');
#line 284
if (c_rt_lib::check_true($memory_9)) {goto label_24;}
#line 284
undef($memory_1);
#line 284
undef($memory_2);
#line 284
undef($memory_3);
#line 284
undef($memory_4);
#line 284
undef($memory_5);
#line 284
undef($memory_6);
#line 284
undef($memory_7);
#line 284
undef($memory_8);
#line 284
undef($memory_9);
#line 284
$_[0] = $memory_0;return $memory_10;
#line 284
label_24:
#line 284
$memory_8 = c_rt_lib::ov_as($memory_10, 'ok');
#line 284
undef($memory_9);
#line 284
undef($memory_10);
#line 285
$memory_9 = {left => $memory_1,op => $memory_4,right => $memory_8,};
#line 285
$memory_9 = c_rt_lib::ov_mk_arg('bin_op', $memory_9);
#line 285
$memory_1 = $memory_9;
#line 285
undef($memory_9);
#line 285
undef($memory_8);
#line 290
goto label_18;
#line 290
label_18:
#line 290
undef($memory_7);
#line 290
undef($memory_6);
#line 291
goto label_3;
#line 291
label_13:
#line 291
$memory_6 = "[";
#line 291
$memory_5 = nparser_priv::try_eat($memory_0, $memory_6);
#line 291
undef($memory_6);
#line 291
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 291
if (c_rt_lib::check_true($memory_5)) {goto label_25;}
#line 292
$memory_6 = "ARRAY_INDEX";
#line 292
$memory_4 = $memory_6;
#line 292
undef($memory_6);
#line 293
$memory_8 = nparser_priv::parse_expr($memory_0);
#line 293
$memory_7 = c_rt_lib::ov_is($memory_8, 'ok');
#line 293
if (c_rt_lib::check_true($memory_7)) {goto label_26;}
#line 293
undef($memory_1);
#line 293
undef($memory_2);
#line 293
undef($memory_3);
#line 293
undef($memory_4);
#line 293
undef($memory_5);
#line 293
undef($memory_6);
#line 293
undef($memory_7);
#line 293
$_[0] = $memory_0;return $memory_8;
#line 293
label_26:
#line 293
$memory_6 = c_rt_lib::ov_as($memory_8, 'ok');
#line 293
undef($memory_7);
#line 293
undef($memory_8);
#line 294
$memory_7 = "]";
#line 294
nparser_priv::eat($memory_0, $memory_7);
#line 294
undef($memory_7);
#line 295
$memory_7 = {op => $memory_4,left => $memory_1,right => $memory_6,};
#line 295
$memory_7 = c_rt_lib::ov_mk_arg('bin_op', $memory_7);
#line 295
$memory_1 = $memory_7;
#line 295
undef($memory_7);
#line 295
undef($memory_6);
#line 296
goto label_3;
#line 296
label_25:
#line 296
$memory_6 = "++";
#line 296
$memory_5 = nparser_priv::try_eat($memory_0, $memory_6);
#line 296
undef($memory_6);
#line 296
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 296
if (c_rt_lib::check_true($memory_5)) {goto label_27;}
#line 297
$memory_6 = c_rt_lib::ov_mk_arg('post_inc', $memory_1);
#line 297
$memory_1 = $memory_6;
#line 297
undef($memory_6);
#line 298
goto label_3;
#line 298
label_27:
#line 298
$memory_6 = "--";
#line 298
$memory_5 = nparser_priv::try_eat($memory_0, $memory_6);
#line 298
undef($memory_6);
#line 298
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 298
if (c_rt_lib::check_true($memory_5)) {goto label_28;}
#line 299
$memory_6 = c_rt_lib::ov_mk_arg('post_dec', $memory_1);
#line 299
$memory_1 = $memory_6;
#line 299
undef($memory_6);
#line 300
goto label_3;
#line 300
label_28:
#line 301
$memory_6 = c_rt_lib::ov_mk_arg('ok', $memory_1);
#line 301
undef($memory_1);
#line 301
undef($memory_2);
#line 301
undef($memory_3);
#line 301
undef($memory_4);
#line 301
undef($memory_5);
#line 301
$_[0] = $memory_0;return $memory_6;
#line 301
undef($memory_6);
#line 302
goto label_3;
#line 302
label_3:
#line 302
undef($memory_5);
#line 302
undef($memory_3);
#line 302
undef($memory_4);
#line 251
goto label_2;
#line 304
$memory_3 = [];
#line 304
die(dfile::ssave($memory_3));
#line 304
undef($memory_3);
#line 304
undef($memory_1);
#line 304
undef($memory_2);
#line 304
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub nparser_priv::parse_expr_rec($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];
#line 309
$memory_4 = "(";
#line 309
$memory_3 = nparser_priv::try_eat($memory_0, $memory_4);
#line 309
undef($memory_4);
#line 309
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 309
if (c_rt_lib::check_true($memory_3)) {goto label_2;}
#line 310
$memory_6 = nparser_priv::parse_expr($memory_0);
#line 310
$memory_5 = c_rt_lib::ov_is($memory_6, 'ok');
#line 310
if (c_rt_lib::check_true($memory_5)) {goto label_3;}
#line 310
undef($memory_1);
#line 310
undef($memory_2);
#line 310
undef($memory_3);
#line 310
undef($memory_4);
#line 310
undef($memory_5);
#line 310
$_[0] = $memory_0;return $memory_6;
#line 310
label_3:
#line 310
$memory_4 = c_rt_lib::ov_as($memory_6, 'ok');
#line 310
undef($memory_5);
#line 310
undef($memory_6);
#line 311
$memory_5 = c_rt_lib::ov_mk_arg('parenthesis', $memory_4);
#line 311
$memory_2 = $memory_5;
#line 311
undef($memory_5);
#line 312
$memory_5 = ")";
#line 312
nparser_priv::eat($memory_0, $memory_5);
#line 312
undef($memory_5);
#line 312
undef($memory_4);
#line 313
goto label_1;
#line 313
label_2:
#line 313
$memory_4 = "state";
#line 313
$memory_4 = c_rt_lib::get_ref_hash($memory_0, $memory_4);
#line 313
$memory_5 = "{";
#line 313
$memory_3 = ntokenizer::next_is($memory_4, $memory_5);
#line 313
undef($memory_5);
#line 313
$memory_5 = "state";
#line 313
c_rt_lib::set_ref_hash($memory_0, $memory_5, $memory_4);
#line 313
undef($memory_5);
#line 313
undef($memory_4);
#line 313
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 313
if (c_rt_lib::check_true($memory_3)) {goto label_4;}
#line 314
$memory_6 = nparser_priv::parse_hash($memory_0);
#line 314
$memory_5 = c_rt_lib::ov_is($memory_6, 'ok');
#line 314
if (c_rt_lib::check_true($memory_5)) {goto label_5;}
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
$_[0] = $memory_0;return $memory_6;
#line 314
label_5:
#line 314
$memory_4 = c_rt_lib::ov_as($memory_6, 'ok');
#line 314
undef($memory_5);
#line 314
undef($memory_6);
#line 315
$memory_5 = c_rt_lib::ov_mk_arg('hash_decl', $memory_4);
#line 315
$memory_2 = $memory_5;
#line 315
undef($memory_5);
#line 315
undef($memory_4);
#line 316
goto label_1;
#line 316
label_4:
#line 316
$memory_4 = "state";
#line 316
$memory_4 = c_rt_lib::get_ref_hash($memory_0, $memory_4);
#line 316
$memory_5 = "[";
#line 316
$memory_3 = ntokenizer::next_is($memory_4, $memory_5);
#line 316
undef($memory_5);
#line 316
$memory_5 = "state";
#line 316
c_rt_lib::set_ref_hash($memory_0, $memory_5, $memory_4);
#line 316
undef($memory_5);
#line 316
undef($memory_4);
#line 316
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 316
if (c_rt_lib::check_true($memory_3)) {goto label_6;}
#line 317
$memory_6 = nparser_priv::parse_arr($memory_0);
#line 317
$memory_5 = c_rt_lib::ov_is($memory_6, 'ok');
#line 317
if (c_rt_lib::check_true($memory_5)) {goto label_7;}
#line 317
undef($memory_1);
#line 317
undef($memory_2);
#line 317
undef($memory_3);
#line 317
undef($memory_4);
#line 317
undef($memory_5);
#line 317
$_[0] = $memory_0;return $memory_6;
#line 317
label_7:
#line 317
$memory_4 = c_rt_lib::ov_as($memory_6, 'ok');
#line 317
undef($memory_5);
#line 317
undef($memory_6);
#line 318
$memory_5 = c_rt_lib::ov_mk_arg('arr_decl', $memory_4);
#line 318
$memory_2 = $memory_5;
#line 318
undef($memory_5);
#line 318
undef($memory_4);
#line 319
goto label_1;
#line 319
label_6:
#line 319
$memory_4 = "state";
#line 319
$memory_4 = c_rt_lib::get_ref_hash($memory_0, $memory_4);
#line 319
$memory_5 = ":";
#line 319
$memory_3 = ntokenizer::next_is($memory_4, $memory_5);
#line 319
undef($memory_5);
#line 319
$memory_5 = "state";
#line 319
c_rt_lib::set_ref_hash($memory_0, $memory_5, $memory_4);
#line 319
undef($memory_5);
#line 319
undef($memory_4);
#line 319
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 319
if (c_rt_lib::check_true($memory_3)) {goto label_8;}
#line 320
$memory_6 = nparser_priv::parse_variant($memory_0);
#line 320
$memory_5 = c_rt_lib::ov_is($memory_6, 'ok');
#line 320
if (c_rt_lib::check_true($memory_5)) {goto label_9;}
#line 320
undef($memory_1);
#line 320
undef($memory_2);
#line 320
undef($memory_3);
#line 320
undef($memory_4);
#line 320
undef($memory_5);
#line 320
$_[0] = $memory_0;return $memory_6;
#line 320
label_9:
#line 320
$memory_4 = c_rt_lib::ov_as($memory_6, 'ok');
#line 320
undef($memory_5);
#line 320
undef($memory_6);
#line 321
$memory_5 = c_rt_lib::ov_mk_arg('variant', $memory_4);
#line 321
$memory_2 = $memory_5;
#line 321
undef($memory_5);
#line 321
undef($memory_4);
#line 322
goto label_1;
#line 322
label_8:
#line 322
$memory_4 = "state";
#line 322
$memory_4 = c_rt_lib::get_ref_hash($memory_0, $memory_4);
#line 322
$memory_5 = c_rt_lib::ov_mk_none('number');
#line 322
$memory_3 = ntokenizer::is_type($memory_4, $memory_5);
#line 322
undef($memory_5);
#line 322
$memory_5 = "state";
#line 322
c_rt_lib::set_ref_hash($memory_0, $memory_5, $memory_4);
#line 322
undef($memory_5);
#line 322
undef($memory_4);
#line 322
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 322
if (c_rt_lib::check_true($memory_3)) {goto label_10;}
#line 323
$memory_5 = "state";
#line 323
$memory_5 = c_rt_lib::get_ref_hash($memory_0, $memory_5);
#line 323
$memory_6 = c_rt_lib::ov_mk_none('number');
#line 323
$memory_4 = ntokenizer::eat_type($memory_5, $memory_6);
#line 323
undef($memory_6);
#line 323
$memory_6 = "state";
#line 323
c_rt_lib::set_ref_hash($memory_0, $memory_6, $memory_5);
#line 323
undef($memory_6);
#line 323
undef($memory_5);
#line 323
$memory_4 = c_rt_lib::ov_mk_arg('const', $memory_4);
#line 323
$memory_2 = $memory_4;
#line 323
undef($memory_4);
#line 324
goto label_1;
#line 324
label_10:
#line 324
$memory_4 = "state";
#line 324
$memory_4 = c_rt_lib::get_ref_hash($memory_0, $memory_4);
#line 324
$memory_5 = c_rt_lib::ov_mk_none('multi_string');
#line 324
$memory_3 = ntokenizer::is_type($memory_4, $memory_5);
#line 324
undef($memory_5);
#line 324
$memory_5 = "state";
#line 324
c_rt_lib::set_ref_hash($memory_0, $memory_5, $memory_4);
#line 324
undef($memory_5);
#line 324
undef($memory_4);
#line 324
if (c_rt_lib::check_true($memory_3)) {goto label_12;}
#line 324
$memory_4 = "state";
#line 324
$memory_4 = c_rt_lib::get_ref_hash($memory_0, $memory_4);
#line 324
$memory_5 = c_rt_lib::ov_mk_none('string');
#line 324
$memory_3 = ntokenizer::is_type($memory_4, $memory_5);
#line 324
undef($memory_5);
#line 324
$memory_5 = "state";
#line 324
c_rt_lib::set_ref_hash($memory_0, $memory_5, $memory_4);
#line 324
undef($memory_5);
#line 324
undef($memory_4);
#line 324
label_12:
#line 324
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 324
if (c_rt_lib::check_true($memory_3)) {goto label_11;}
#line 325
$memory_5 = [];
#line 325
$memory_4 = {arr => $memory_5,};
#line 325
undef($memory_5);
#line 326
label_14:
#line 326
$memory_6 = "state";
#line 326
$memory_6 = c_rt_lib::get_ref_hash($memory_0, $memory_6);
#line 326
$memory_7 = c_rt_lib::ov_mk_none('multi_string');
#line 326
$memory_5 = ntokenizer::is_type($memory_6, $memory_7);
#line 326
undef($memory_7);
#line 326
$memory_7 = "state";
#line 326
c_rt_lib::set_ref_hash($memory_0, $memory_7, $memory_6);
#line 326
undef($memory_7);
#line 326
undef($memory_6);
#line 326
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 326
if (c_rt_lib::check_true($memory_5)) {goto label_13;}
#line 327
$memory_6 = "arr";
#line 327
$memory_6 = c_rt_lib::get_ref_hash($memory_4, $memory_6);
#line 327
$memory_8 = "state";
#line 327
$memory_8 = c_rt_lib::get_ref_hash($memory_0, $memory_8);
#line 327
$memory_9 = c_rt_lib::ov_mk_none('multi_string');
#line 327
$memory_7 = ntokenizer::eat_type($memory_8, $memory_9);
#line 327
undef($memory_9);
#line 327
$memory_9 = "state";
#line 327
c_rt_lib::set_ref_hash($memory_0, $memory_9, $memory_8);
#line 327
undef($memory_9);
#line 327
undef($memory_8);
#line 327
array::push($memory_6, $memory_7);
#line 327
undef($memory_7);
#line 327
$memory_7 = "arr";
#line 327
c_rt_lib::set_ref_hash($memory_4, $memory_7, $memory_6);
#line 327
undef($memory_7);
#line 327
undef($memory_6);
#line 328
goto label_14;
#line 328
label_13:
#line 328
undef($memory_5);
#line 330
$memory_6 = "state";
#line 330
$memory_6 = c_rt_lib::get_ref_hash($memory_0, $memory_6);
#line 330
$memory_7 = c_rt_lib::ov_mk_none('string');
#line 330
$memory_5 = ntokenizer::is_type($memory_6, $memory_7);
#line 330
undef($memory_7);
#line 330
$memory_7 = "state";
#line 330
c_rt_lib::set_ref_hash($memory_0, $memory_7, $memory_6);
#line 330
undef($memory_7);
#line 330
undef($memory_6);
#line 330
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 330
if (c_rt_lib::check_true($memory_5)) {goto label_16;}
#line 331
$memory_6 = "arr";
#line 331
$memory_6 = c_rt_lib::get_ref_hash($memory_4, $memory_6);
#line 331
$memory_8 = "state";
#line 331
$memory_8 = c_rt_lib::get_ref_hash($memory_0, $memory_8);
#line 331
$memory_9 = c_rt_lib::ov_mk_none('string');
#line 331
$memory_7 = ntokenizer::eat_type($memory_8, $memory_9);
#line 331
undef($memory_9);
#line 331
$memory_9 = "state";
#line 331
c_rt_lib::set_ref_hash($memory_0, $memory_9, $memory_8);
#line 331
undef($memory_9);
#line 331
undef($memory_8);
#line 331
array::push($memory_6, $memory_7);
#line 331
undef($memory_7);
#line 331
$memory_7 = "arr";
#line 331
c_rt_lib::set_ref_hash($memory_4, $memory_7, $memory_6);
#line 331
undef($memory_7);
#line 331
undef($memory_6);
#line 332
$memory_6 = c_rt_lib::ov_mk_none('end');
#line 332
$memory_7 = $memory_6;
#line 332
 if (c_rt_lib::get_hashcount($memory_4) > 1) {$memory_4 = {%{$memory_4}};}$memory_4->{'last'} = $memory_7;
#line 332
undef($memory_6);
#line 332
undef($memory_7);
#line 333
goto label_15;
#line 333
label_16:
#line 334
$memory_6 = c_rt_lib::ov_mk_none('new_line');
#line 334
$memory_7 = $memory_6;
#line 334
 if (c_rt_lib::get_hashcount($memory_4) > 1) {$memory_4 = {%{$memory_4}};}$memory_4->{'last'} = $memory_7;
#line 334
undef($memory_6);
#line 334
undef($memory_7);
#line 335
goto label_15;
#line 335
label_15:
#line 335
undef($memory_5);
#line 336
$memory_5 = c_rt_lib::ov_mk_arg('string', $memory_4);
#line 336
$memory_2 = $memory_5;
#line 336
undef($memory_5);
#line 336
undef($memory_4);
#line 337
goto label_1;
#line 337
label_11:
#line 337
$memory_4 = "state";
#line 337
$memory_4 = c_rt_lib::get_ref_hash($memory_0, $memory_4);
#line 337
$memory_5 = c_rt_lib::ov_mk_none('word');
#line 337
$memory_3 = ntokenizer::is_type($memory_4, $memory_5);
#line 337
undef($memory_5);
#line 337
$memory_5 = "state";
#line 337
c_rt_lib::set_ref_hash($memory_0, $memory_5, $memory_4);
#line 337
undef($memory_5);
#line 337
undef($memory_4);
#line 337
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 337
if (c_rt_lib::check_true($memory_3)) {goto label_17;}
#line 338
$memory_5 = nparser_priv::parse_label($memory_0);
#line 338
$memory_4 = c_rt_lib::ov_is($memory_5, 'ok');
#line 338
if (c_rt_lib::check_true($memory_4)) {goto label_18;}
#line 338
undef($memory_1);
#line 338
undef($memory_2);
#line 338
undef($memory_3);
#line 338
undef($memory_4);
#line 338
$_[0] = $memory_0;return $memory_5;
#line 338
label_18:
#line 338
$memory_2 = c_rt_lib::ov_as($memory_5, 'ok');
#line 338
undef($memory_4);
#line 338
undef($memory_5);
#line 339
goto label_1;
#line 339
label_17:
#line 339
$memory_5 = "state";
#line 339
$memory_5 = c_rt_lib::get_ref_hash($memory_0, $memory_5);
#line 339
$memory_6 = c_rt_lib::ov_mk_none('operator');
#line 339
$memory_3 = ntokenizer::is_type($memory_5, $memory_6);
#line 339
undef($memory_6);
#line 339
$memory_6 = "state";
#line 339
c_rt_lib::set_ref_hash($memory_0, $memory_6, $memory_5);
#line 339
undef($memory_6);
#line 339
undef($memory_5);
#line 339
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 339
if (c_rt_lib::check_true($memory_4)) {goto label_20;}
#line 339
$memory_5 = nast::get_unary_ops();
#line 339
$memory_7 = "state";
#line 339
$memory_7 = c_rt_lib::get_ref_hash($memory_0, $memory_7);
#line 339
$memory_6 = ntokenizer::get_token($memory_7);
#line 339
$memory_8 = "state";
#line 339
c_rt_lib::set_ref_hash($memory_0, $memory_8, $memory_7);
#line 339
undef($memory_8);
#line 339
undef($memory_7);
#line 339
$memory_3 = hash::has_key($memory_5, $memory_6);
#line 339
undef($memory_6);
#line 339
undef($memory_5);
#line 339
label_20:
#line 339
undef($memory_4);
#line 339
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 339
if (c_rt_lib::check_true($memory_3)) {goto label_19;}
#line 340
$memory_5 = "state";
#line 340
$memory_5 = c_rt_lib::get_ref_hash($memory_0, $memory_5);
#line 340
$memory_6 = c_rt_lib::ov_mk_none('operator');
#line 340
$memory_4 = ntokenizer::eat_type($memory_5, $memory_6);
#line 340
undef($memory_6);
#line 340
$memory_6 = "state";
#line 340
c_rt_lib::set_ref_hash($memory_0, $memory_6, $memory_5);
#line 340
undef($memory_6);
#line 340
undef($memory_5);
#line 342
$memory_6 = "\@";
#line 342
$memory_6 = c_rt_lib::to_nl($memory_4 eq $memory_6);
#line 342
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 342
if (c_rt_lib::check_true($memory_6)) {goto label_22;}
#line 343
$memory_7 = nparser_priv::parse_fun_label($memory_0);
#line 343
$memory_7 = c_rt_lib::ov_mk_arg('fun_label', $memory_7);
#line 343
$memory_5 = $memory_7;
#line 343
undef($memory_7);
#line 344
goto label_21;
#line 344
label_22:
#line 345
$memory_10 = nast::get_unary_ops();
#line 345
$memory_9 = hash::get_value($memory_10, $memory_4);
#line 345
undef($memory_10);
#line 345
$memory_9 = $memory_9->{'prec'};
#line 345
$memory_8 = nparser_priv::parse_expr_rec($memory_0, $memory_9);
#line 345
undef($memory_9);
#line 345
$memory_7 = c_rt_lib::ov_is($memory_8, 'ok');
#line 345
if (c_rt_lib::check_true($memory_7)) {goto label_23;}
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
$_[0] = $memory_0;return $memory_8;
#line 345
label_23:
#line 345
$memory_5 = c_rt_lib::ov_as($memory_8, 'ok');
#line 345
undef($memory_7);
#line 345
undef($memory_8);
#line 346
$memory_7 = $memory_5;
#line 346
$memory_7 = c_rt_lib::ov_is($memory_7, 'unary_op');
#line 346
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 346
if (c_rt_lib::check_true($memory_7)) {goto label_25;}
#line 346
$memory_8 = "unary operator after unary operator";
#line 346
nparser_priv::add_error($memory_0, $memory_8);
#line 346
undef($memory_8);
#line 346
goto label_25;
#line 346
label_25:
#line 346
undef($memory_7);
#line 347
goto label_21;
#line 347
label_21:
#line 347
undef($memory_6);
#line 348
$memory_6 = {op => $memory_4,val => $memory_5,};
#line 348
$memory_6 = c_rt_lib::ov_mk_arg('unary_op', $memory_6);
#line 348
$memory_2 = $memory_6;
#line 348
undef($memory_6);
#line 348
undef($memory_4);
#line 348
undef($memory_5);
#line 349
goto label_1;
#line 349
label_19:
#line 349
$memory_4 = "state";
#line 349
$memory_4 = c_rt_lib::get_ref_hash($memory_0, $memory_4);
#line 349
$memory_5 = c_rt_lib::ov_mk_none('keyword');
#line 349
$memory_3 = ntokenizer::is_type($memory_4, $memory_5);
#line 349
undef($memory_5);
#line 349
$memory_5 = "state";
#line 349
c_rt_lib::set_ref_hash($memory_0, $memory_5, $memory_4);
#line 349
undef($memory_5);
#line 349
undef($memory_4);
#line 349
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 349
if (c_rt_lib::check_true($memory_3)) {goto label_26;}
#line 350
$memory_5 = "true";
#line 350
$memory_4 = nparser_priv::try_eat($memory_0, $memory_5);
#line 350
undef($memory_5);
#line 350
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 350
if (c_rt_lib::check_true($memory_4)) {goto label_28;}
#line 351
$memory_6 = "TRUE";
#line 351
$memory_7 = c_rt_lib::ov_mk_none('nop');
#line 351
$memory_5 = {name => $memory_6,var => $memory_7,};
#line 351
undef($memory_6);
#line 351
undef($memory_7);
#line 351
$memory_5 = c_rt_lib::ov_mk_arg('variant', $memory_5);
#line 351
$memory_2 = $memory_5;
#line 351
undef($memory_5);
#line 352
goto label_27;
#line 352
label_28:
#line 352
$memory_5 = "false";
#line 352
$memory_4 = nparser_priv::try_eat($memory_0, $memory_5);
#line 352
undef($memory_5);
#line 352
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 352
if (c_rt_lib::check_true($memory_4)) {goto label_29;}
#line 353
$memory_6 = "FALSE";
#line 353
$memory_7 = c_rt_lib::ov_mk_none('nop');
#line 353
$memory_5 = {name => $memory_6,var => $memory_7,};
#line 353
undef($memory_6);
#line 353
undef($memory_7);
#line 353
$memory_5 = c_rt_lib::ov_mk_arg('variant', $memory_5);
#line 353
$memory_2 = $memory_5;
#line 353
undef($memory_5);
#line 354
goto label_27;
#line 354
label_29:
#line 355
$memory_5 = "use keyword in wrong context:";
#line 355
$memory_6 = string::lf();
#line 355
$memory_5 = $memory_5 . $memory_6;
#line 355
undef($memory_6);
#line 355
$memory_7 = "state";
#line 355
$memory_7 = c_rt_lib::get_ref_hash($memory_0, $memory_7);
#line 355
$memory_6 = ntokenizer::info($memory_7);
#line 355
$memory_8 = "state";
#line 355
c_rt_lib::set_ref_hash($memory_0, $memory_8, $memory_7);
#line 355
undef($memory_8);
#line 355
undef($memory_7);
#line 355
$memory_5 = $memory_5 . $memory_6;
#line 355
undef($memory_6);
#line 356
nparser_priv::add_error($memory_0, $memory_5);
#line 357
$memory_6 = c_rt_lib::ov_mk_arg('err', $memory_5);
#line 357
undef($memory_1);
#line 357
undef($memory_2);
#line 357
undef($memory_3);
#line 357
undef($memory_4);
#line 357
undef($memory_5);
#line 357
$_[0] = $memory_0;return $memory_6;
#line 357
undef($memory_6);
#line 357
undef($memory_5);
#line 358
goto label_27;
#line 358
label_27:
#line 358
undef($memory_4);
#line 359
goto label_1;
#line 359
label_26:
#line 360
$memory_4 = "error in parse_expr:";
#line 360
$memory_5 = string::lf();
#line 360
$memory_4 = $memory_4 . $memory_5;
#line 360
undef($memory_5);
#line 360
$memory_6 = "state";
#line 360
$memory_6 = c_rt_lib::get_ref_hash($memory_0, $memory_6);
#line 360
$memory_5 = ntokenizer::info($memory_6);
#line 360
$memory_7 = "state";
#line 360
c_rt_lib::set_ref_hash($memory_0, $memory_7, $memory_6);
#line 360
undef($memory_7);
#line 360
undef($memory_6);
#line 360
$memory_4 = $memory_4 . $memory_5;
#line 360
undef($memory_5);
#line 361
nparser_priv::add_error($memory_0, $memory_4);
#line 362
$memory_5 = c_rt_lib::ov_mk_arg('err', $memory_4);
#line 362
undef($memory_1);
#line 362
undef($memory_2);
#line 362
undef($memory_3);
#line 362
undef($memory_4);
#line 362
$_[0] = $memory_0;return $memory_5;
#line 362
undef($memory_5);
#line 362
undef($memory_4);
#line 363
goto label_1;
#line 363
label_1:
#line 363
undef($memory_3);
#line 365
$memory_3 = nparser_priv::parse_expr_rec_left($memory_0, $memory_2, $memory_1);
#line 365
undef($memory_1);
#line 365
undef($memory_2);
#line 365
$_[0] = $memory_0;return $memory_3;
#line 365
undef($memory_3);
#line 365
undef($memory_2);
#line 365
undef($memory_1);
#line 365
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub nparser_priv::eat_text($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);
#line 368
$memory_2 = "state";
#line 368
$memory_2 = c_rt_lib::get_ref_hash($memory_0, $memory_2);
#line 368
$memory_1 = ntokenizer::is_text($memory_2);
#line 368
$memory_3 = "state";
#line 368
c_rt_lib::set_ref_hash($memory_0, $memory_3, $memory_2);
#line 368
undef($memory_3);
#line 368
undef($memory_2);
#line 368
$memory_1 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_1));
#line 368
if (c_rt_lib::check_true($memory_1)) {goto label_2;}
#line 369
$memory_3 = "state";
#line 369
$memory_3 = c_rt_lib::get_ref_hash($memory_0, $memory_3);
#line 369
$memory_2 = ntokenizer::eat_text($memory_3);
#line 369
$memory_4 = "state";
#line 369
c_rt_lib::set_ref_hash($memory_0, $memory_4, $memory_3);
#line 369
undef($memory_4);
#line 369
undef($memory_3);
#line 369
$memory_2 = c_rt_lib::ov_mk_arg('ok', $memory_2);
#line 369
undef($memory_1);
#line 369
$_[0] = $memory_0;return $memory_2;
#line 369
undef($memory_2);
#line 370
goto label_1;
#line 370
label_2:
#line 371
$memory_2 = "word expected";
#line 371
nparser_priv::add_error($memory_0, $memory_2);
#line 371
undef($memory_2);
#line 372
$memory_2 = "word expected";
#line 372
$memory_2 = c_rt_lib::ov_mk_arg('err', $memory_2);
#line 372
undef($memory_1);
#line 372
$_[0] = $memory_0;return $memory_2;
#line 372
undef($memory_2);
#line 373
goto label_1;
#line 373
label_1:
#line 373
undef($memory_1);
#line 373
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub nparser_priv::parse_variant_label($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);
#line 377
$memory_2 = "state";
#line 377
$memory_2 = c_rt_lib::get_ref_hash($memory_0, $memory_2);
#line 377
$memory_1 = ntokenizer::is_text($memory_2);
#line 377
$memory_3 = "state";
#line 377
c_rt_lib::set_ref_hash($memory_0, $memory_3, $memory_2);
#line 377
undef($memory_3);
#line 377
undef($memory_2);
#line 377
$memory_1 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_1));
#line 377
if (c_rt_lib::check_true($memory_1)) {goto label_2;}
#line 378
$memory_3 = "state";
#line 378
$memory_3 = c_rt_lib::get_ref_hash($memory_0, $memory_3);
#line 378
$memory_2 = ntokenizer::eat_text($memory_3);
#line 378
$memory_4 = "state";
#line 378
c_rt_lib::set_ref_hash($memory_0, $memory_4, $memory_3);
#line 378
undef($memory_4);
#line 378
undef($memory_3);
#line 378
undef($memory_1);
#line 378
$_[0] = $memory_0;return $memory_2;
#line 378
undef($memory_2);
#line 379
goto label_1;
#line 379
label_2:
#line 380
$memory_2 = "word expected";
#line 380
nparser_priv::add_error($memory_0, $memory_2);
#line 380
undef($memory_2);
#line 381
$memory_2 = "";
#line 381
undef($memory_1);
#line 381
$_[0] = $memory_0;return $memory_2;
#line 381
undef($memory_2);
#line 382
goto label_1;
#line 382
label_1:
#line 382
undef($memory_1);
#line 382
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub nparser_priv::parse_variant($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);
#line 386
$memory_1 = ":";
#line 386
nparser_priv::eat($memory_0, $memory_1);
#line 386
undef($memory_1);
#line 387
$memory_1 = nparser_priv::parse_variant_label($memory_0);
#line 388
$memory_2 = c_rt_lib::ov_mk_none('nop');
#line 389
$memory_4 = "(";
#line 389
$memory_3 = nparser_priv::try_eat($memory_0, $memory_4);
#line 389
undef($memory_4);
#line 389
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 389
if (c_rt_lib::check_true($memory_3)) {goto label_2;}
#line 390
$memory_5 = nparser_priv::parse_expr($memory_0);
#line 390
$memory_4 = c_rt_lib::ov_is($memory_5, 'ok');
#line 390
if (c_rt_lib::check_true($memory_4)) {goto label_3;}
#line 390
undef($memory_1);
#line 390
undef($memory_2);
#line 390
undef($memory_3);
#line 390
undef($memory_4);
#line 390
$_[0] = $memory_0;return $memory_5;
#line 390
label_3:
#line 390
$memory_2 = c_rt_lib::ov_as($memory_5, 'ok');
#line 390
undef($memory_4);
#line 390
undef($memory_5);
#line 391
$memory_4 = ")";
#line 391
nparser_priv::eat($memory_0, $memory_4);
#line 391
undef($memory_4);
#line 392
goto label_1;
#line 392
label_2:
#line 393
$memory_4 = c_rt_lib::ov_mk_none('nop');
#line 393
$memory_2 = $memory_4;
#line 393
undef($memory_4);
#line 394
goto label_1;
#line 394
label_1:
#line 394
undef($memory_3);
#line 395
$memory_3 = {name => $memory_1,var => $memory_2,};
#line 395
$memory_3 = c_rt_lib::ov_mk_arg('ok', $memory_3);
#line 395
undef($memory_1);
#line 395
undef($memory_2);
#line 395
$_[0] = $memory_0;return $memory_3;
#line 395
undef($memory_3);
#line 395
undef($memory_1);
#line 395
undef($memory_2);
#line 395
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub nparser_priv::check_lvalue($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];
#line 398
$memory_2 = $memory_1;
#line 398
$memory_2 = c_rt_lib::ov_is($memory_2, 'var');
#line 398
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 398
if (c_rt_lib::check_true($memory_2)) {goto label_2;}
#line 399
undef($memory_1);
#line 399
undef($memory_2);
#line 399
$_[0] = $memory_0;return;
#line 400
goto label_3;
#line 400
label_2:
#line 400
$memory_2 = $memory_1;
#line 400
$memory_2 = c_rt_lib::ov_is($memory_2, 'bin_op');
#line 400
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 400
if (c_rt_lib::check_true($memory_2)) {goto label_3;}
#line 401
$memory_3 = $memory_1;
#line 401
$memory_3 = c_rt_lib::ov_as($memory_3, 'bin_op');
#line 402
$memory_4 = $memory_3->{'op'};
#line 402
$memory_5 = "->";
#line 402
$memory_4 = c_rt_lib::to_nl($memory_4 eq $memory_5);
#line 402
undef($memory_5);
#line 402
if (c_rt_lib::check_true($memory_4)) {goto label_6;}
#line 402
$memory_4 = $memory_3->{'op'};
#line 402
$memory_5 = "ARRAY_INDEX";
#line 402
$memory_4 = c_rt_lib::to_nl($memory_4 eq $memory_5);
#line 402
undef($memory_5);
#line 402
label_6:
#line 402
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 402
if (c_rt_lib::check_true($memory_4)) {goto label_5;}
#line 403
$memory_5 = $memory_3->{'left'};
#line 403
nparser_priv::check_lvalue($memory_0, $memory_5);
#line 403
undef($memory_5);
#line 404
undef($memory_1);
#line 404
undef($memory_2);
#line 404
undef($memory_3);
#line 404
undef($memory_4);
#line 404
$_[0] = $memory_0;return;
#line 405
goto label_5;
#line 405
label_5:
#line 405
undef($memory_4);
#line 405
undef($memory_3);
#line 406
goto label_3;
#line 406
label_3:
#line 406
undef($memory_2);
#line 407
$memory_2 = "invalid expr for lvalue";
#line 407
nparser_priv::add_error($memory_0, $memory_2);
#line 407
undef($memory_2);
#line 407
undef($memory_1);
#line 407
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub nparser_priv::parse_variant_decl($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);
#line 410
$memory_1 = ":";
#line 410
nparser_priv::eat($memory_0, $memory_1);
#line 410
undef($memory_1);
#line 411
$memory_2 = nparser_priv::parse_variant_label($memory_0);
#line 411
$memory_3 = c_rt_lib::ov_mk_none('none');
#line 411
$memory_1 = {name => $memory_2,value => $memory_3,};
#line 411
undef($memory_2);
#line 411
undef($memory_3);
#line 412
$memory_3 = "(";
#line 412
$memory_2 = nparser_priv::try_eat($memory_0, $memory_3);
#line 412
undef($memory_3);
#line 412
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 412
if (c_rt_lib::check_true($memory_2)) {goto label_2;}
#line 413
$memory_3 = nparser_priv::parse_var_decl_sim($memory_0);
#line 413
$memory_3 = c_rt_lib::ov_mk_arg('value', $memory_3);
#line 413
$memory_4 = $memory_3;
#line 413
 if (c_rt_lib::get_hashcount($memory_1) > 1) {$memory_1 = {%{$memory_1}};}$memory_1->{'value'} = $memory_4;
#line 413
undef($memory_3);
#line 413
undef($memory_4);
#line 414
$memory_3 = ")";
#line 414
nparser_priv::eat($memory_0, $memory_3);
#line 414
undef($memory_3);
#line 415
goto label_2;
#line 415
label_2:
#line 415
undef($memory_2);
#line 417
$_[0] = $memory_0;return $memory_1;
#line 417
undef($memory_1);
#line 417
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub nparser_priv::parse_var_decl($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);
#line 421
$memory_1 = "var";
#line 421
nparser_priv::eat($memory_0, $memory_1);
#line 421
undef($memory_1);
#line 422
$memory_2 = "";
#line 422
$memory_3 = c_rt_lib::ov_mk_none('none');
#line 422
$memory_4 = c_rt_lib::ov_mk_none('none');
#line 422
$memory_1 = {name => $memory_2,type => $memory_3,value => $memory_4,};
#line 422
undef($memory_2);
#line 422
undef($memory_3);
#line 422
undef($memory_4);
#line 423
$memory_3 = "state";
#line 423
$memory_3 = c_rt_lib::get_ref_hash($memory_0, $memory_3);
#line 423
$memory_4 = c_rt_lib::ov_mk_none('word');
#line 423
$memory_2 = ntokenizer::is_type($memory_3, $memory_4);
#line 423
undef($memory_4);
#line 423
$memory_4 = "state";
#line 423
c_rt_lib::set_ref_hash($memory_0, $memory_4, $memory_3);
#line 423
undef($memory_4);
#line 423
undef($memory_3);
#line 423
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 423
if (c_rt_lib::check_true($memory_2)) {goto label_2;}
#line 424
$memory_4 = "state";
#line 424
$memory_4 = c_rt_lib::get_ref_hash($memory_0, $memory_4);
#line 424
$memory_5 = c_rt_lib::ov_mk_none('word');
#line 424
$memory_3 = ntokenizer::eat_type($memory_4, $memory_5);
#line 424
undef($memory_5);
#line 424
$memory_5 = "state";
#line 424
c_rt_lib::set_ref_hash($memory_0, $memory_5, $memory_4);
#line 424
undef($memory_5);
#line 424
undef($memory_4);
#line 424
$memory_4 = $memory_3;
#line 424
 if (c_rt_lib::get_hashcount($memory_1) > 1) {$memory_1 = {%{$memory_1}};}$memory_1->{'name'} = $memory_4;
#line 424
undef($memory_3);
#line 424
undef($memory_4);
#line 425
goto label_1;
#line 425
label_2:
#line 426
$memory_3 = "variable name expected";
#line 426
nparser_priv::add_error($memory_0, $memory_3);
#line 426
undef($memory_3);
#line 427
goto label_1;
#line 427
label_1:
#line 427
undef($memory_2);
#line 428
$memory_3 = ":";
#line 428
$memory_2 = nparser_priv::try_eat($memory_0, $memory_3);
#line 428
undef($memory_3);
#line 428
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 428
if (c_rt_lib::check_true($memory_2)) {goto label_4;}
#line 429
$memory_5 = nparser_priv::parse_type($memory_0);
#line 429
$memory_4 = c_rt_lib::ov_is($memory_5, 'ok');
#line 429
if (c_rt_lib::check_true($memory_4)) {goto label_5;}
#line 429
undef($memory_1);
#line 429
undef($memory_2);
#line 429
undef($memory_3);
#line 429
undef($memory_4);
#line 429
$_[0] = $memory_0;return $memory_5;
#line 429
label_5:
#line 429
$memory_3 = c_rt_lib::ov_as($memory_5, 'ok');
#line 429
undef($memory_4);
#line 429
undef($memory_5);
#line 430
$memory_4 = c_rt_lib::ov_mk_arg('type', $memory_3);
#line 430
$memory_5 = $memory_4;
#line 430
 if (c_rt_lib::get_hashcount($memory_1) > 1) {$memory_1 = {%{$memory_1}};}$memory_1->{'type'} = $memory_5;
#line 430
undef($memory_4);
#line 430
undef($memory_5);
#line 430
undef($memory_3);
#line 431
goto label_4;
#line 431
label_4:
#line 431
undef($memory_2);
#line 432
$memory_3 = "=";
#line 432
$memory_2 = nparser_priv::try_eat($memory_0, $memory_3);
#line 432
undef($memory_3);
#line 432
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 432
if (c_rt_lib::check_true($memory_2)) {goto label_7;}
#line 433
$memory_5 = nparser_priv::parse_expr($memory_0);
#line 433
$memory_4 = c_rt_lib::ov_is($memory_5, 'ok');
#line 433
if (c_rt_lib::check_true($memory_4)) {goto label_8;}
#line 433
undef($memory_1);
#line 433
undef($memory_2);
#line 433
undef($memory_3);
#line 433
undef($memory_4);
#line 433
$_[0] = $memory_0;return $memory_5;
#line 433
label_8:
#line 433
$memory_3 = c_rt_lib::ov_as($memory_5, 'ok');
#line 433
undef($memory_4);
#line 433
undef($memory_5);
#line 434
$memory_4 = c_rt_lib::ov_mk_arg('value', $memory_3);
#line 434
$memory_5 = $memory_4;
#line 434
 if (c_rt_lib::get_hashcount($memory_1) > 1) {$memory_1 = {%{$memory_1}};}$memory_1->{'value'} = $memory_5;
#line 434
undef($memory_4);
#line 434
undef($memory_5);
#line 434
undef($memory_3);
#line 435
goto label_7;
#line 435
label_7:
#line 435
undef($memory_2);
#line 436
$memory_2 = c_rt_lib::ov_mk_arg('ok', $memory_1);
#line 436
undef($memory_1);
#line 436
$_[0] = $memory_0;return $memory_2;
#line 436
undef($memory_2);
#line 436
undef($memory_1);
#line 436
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub nparser_priv::parse_var_decl_sim($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);
#line 440
$memory_1 = "var";
#line 440
nparser_priv::eat($memory_0, $memory_1);
#line 440
undef($memory_1);
#line 441
$memory_2 = "";
#line 441
$memory_3 = c_rt_lib::ov_mk_none('none');
#line 441
$memory_4 = c_rt_lib::ov_mk_none('none');
#line 441
$memory_1 = {name => $memory_2,type => $memory_3,value => $memory_4,};
#line 441
undef($memory_2);
#line 441
undef($memory_3);
#line 441
undef($memory_4);
#line 442
$memory_3 = "state";
#line 442
$memory_3 = c_rt_lib::get_ref_hash($memory_0, $memory_3);
#line 442
$memory_4 = c_rt_lib::ov_mk_none('word');
#line 442
$memory_2 = ntokenizer::is_type($memory_3, $memory_4);
#line 442
undef($memory_4);
#line 442
$memory_4 = "state";
#line 442
c_rt_lib::set_ref_hash($memory_0, $memory_4, $memory_3);
#line 442
undef($memory_4);
#line 442
undef($memory_3);
#line 442
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 442
if (c_rt_lib::check_true($memory_2)) {goto label_2;}
#line 443
$memory_4 = "state";
#line 443
$memory_4 = c_rt_lib::get_ref_hash($memory_0, $memory_4);
#line 443
$memory_5 = c_rt_lib::ov_mk_none('word');
#line 443
$memory_3 = ntokenizer::eat_type($memory_4, $memory_5);
#line 443
undef($memory_5);
#line 443
$memory_5 = "state";
#line 443
c_rt_lib::set_ref_hash($memory_0, $memory_5, $memory_4);
#line 443
undef($memory_5);
#line 443
undef($memory_4);
#line 443
$memory_4 = $memory_3;
#line 443
 if (c_rt_lib::get_hashcount($memory_1) > 1) {$memory_1 = {%{$memory_1}};}$memory_1->{'name'} = $memory_4;
#line 443
undef($memory_3);
#line 443
undef($memory_4);
#line 444
goto label_1;
#line 444
label_2:
#line 445
$memory_3 = "variable name expected";
#line 445
nparser_priv::add_error($memory_0, $memory_3);
#line 445
undef($memory_3);
#line 446
goto label_1;
#line 446
label_1:
#line 446
undef($memory_2);
#line 447
$_[0] = $memory_0;return $memory_1;
#line 447
undef($memory_1);
#line 447
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub nparser_priv::parse_cond($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);
#line 450
$memory_1 = "(";
#line 450
nparser_priv::eat($memory_0, $memory_1);
#line 450
undef($memory_1);
#line 451
$memory_3 = nparser_priv::parse_expr($memory_0);
#line 451
$memory_2 = c_rt_lib::ov_is($memory_3, 'ok');
#line 451
if (c_rt_lib::check_true($memory_2)) {goto label_1;}
#line 451
undef($memory_1);
#line 451
undef($memory_2);
#line 451
$_[0] = $memory_0;return $memory_3;
#line 451
label_1:
#line 451
$memory_1 = c_rt_lib::ov_as($memory_3, 'ok');
#line 451
undef($memory_2);
#line 451
undef($memory_3);
#line 452
$memory_2 = ")";
#line 452
nparser_priv::eat($memory_0, $memory_2);
#line 452
undef($memory_2);
#line 453
$memory_2 = c_rt_lib::ov_mk_arg('ok', $memory_1);
#line 453
undef($memory_1);
#line 453
$_[0] = $memory_0;return $memory_2;
#line 453
undef($memory_2);
#line 453
undef($memory_1);
#line 453
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub nparser_priv::parse_block($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);
#line 457
$memory_2 = "state";
#line 457
$memory_2 = c_rt_lib::get_ref_hash($memory_0, $memory_2);
#line 457
$memory_1 = ntokenizer::get_place($memory_2);
#line 457
$memory_3 = "state";
#line 457
c_rt_lib::set_ref_hash($memory_0, $memory_3, $memory_2);
#line 457
undef($memory_3);
#line 457
undef($memory_2);
#line 458
$memory_2 = "{";
#line 458
nparser_priv::eat($memory_0, $memory_2);
#line 458
undef($memory_2);
#line 459
$memory_2 = [];
#line 460
label_2:
#line 460
$memory_4 = "}";
#line 460
$memory_3 = nparser_priv::try_eat($memory_0, $memory_4);
#line 460
undef($memory_4);
#line 460
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 460
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 460
if (c_rt_lib::check_true($memory_3)) {goto label_1;}
#line 461
$memory_5 = ";";
#line 461
$memory_4 = nparser_priv::try_eat($memory_0, $memory_5);
#line 461
undef($memory_5);
#line 461
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 461
if (c_rt_lib::check_true($memory_4)) {goto label_4;}
#line 461
undef($memory_4);
#line 461
goto label_2;
#line 461
goto label_4;
#line 461
label_4:
#line 461
undef($memory_4);
#line 462
$memory_6 = nparser_priv::parse_cmd($memory_0);
#line 462
$memory_5 = c_rt_lib::ov_is($memory_6, 'ok');
#line 462
if (c_rt_lib::check_true($memory_5)) {goto label_5;}
#line 462
undef($memory_1);
#line 462
undef($memory_2);
#line 462
undef($memory_3);
#line 462
undef($memory_4);
#line 462
undef($memory_5);
#line 462
$_[0] = $memory_0;return $memory_6;
#line 462
label_5:
#line 462
$memory_4 = c_rt_lib::ov_as($memory_6, 'ok');
#line 462
undef($memory_5);
#line 462
undef($memory_6);
#line 463
array::push($memory_2, $memory_4);
#line 463
undef($memory_4);
#line 464
goto label_2;
#line 464
label_1:
#line 464
undef($memory_3);
#line 465
$memory_4 = "state";
#line 465
$memory_4 = c_rt_lib::get_ref_hash($memory_0, $memory_4);
#line 465
$memory_3 = ntokenizer::get_place_ws($memory_4);
#line 465
$memory_5 = "state";
#line 465
c_rt_lib::set_ref_hash($memory_0, $memory_5, $memory_4);
#line 465
undef($memory_5);
#line 465
undef($memory_4);
#line 466
$memory_4 = {begin => $memory_1,end => $memory_3,};
#line 470
$memory_6 = c_rt_lib::ov_mk_arg('block', $memory_2);
#line 470
$memory_5 = {debug => $memory_4,cmd => $memory_6,};
#line 470
undef($memory_6);
#line 470
$memory_5 = c_rt_lib::ov_mk_arg('ok', $memory_5);
#line 470
undef($memory_1);
#line 470
undef($memory_2);
#line 470
undef($memory_3);
#line 470
undef($memory_4);
#line 470
$_[0] = $memory_0;return $memory_5;
#line 470
undef($memory_5);
#line 470
undef($memory_1);
#line 470
undef($memory_2);
#line 470
undef($memory_3);
#line 470
undef($memory_4);
#line 470
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub nparser_priv::parse_try_ensure($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);
#line 474
$memory_2 = "state";
#line 474
$memory_2 = c_rt_lib::get_ref_hash($memory_0, $memory_2);
#line 474
$memory_3 = "var";
#line 474
$memory_1 = ntokenizer::next_is($memory_2, $memory_3);
#line 474
undef($memory_3);
#line 474
$memory_3 = "state";
#line 474
c_rt_lib::set_ref_hash($memory_0, $memory_3, $memory_2);
#line 474
undef($memory_3);
#line 474
undef($memory_2);
#line 474
$memory_1 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_1));
#line 474
if (c_rt_lib::check_true($memory_1)) {goto label_2;}
#line 475
$memory_4 = nparser_priv::parse_var_decl($memory_0);
#line 475
$memory_3 = c_rt_lib::ov_is($memory_4, 'ok');
#line 475
if (c_rt_lib::check_true($memory_3)) {goto label_3;}
#line 475
undef($memory_1);
#line 475
undef($memory_2);
#line 475
undef($memory_3);
#line 475
$_[0] = $memory_0;return $memory_4;
#line 475
label_3:
#line 475
$memory_2 = c_rt_lib::ov_as($memory_4, 'ok');
#line 475
undef($memory_3);
#line 475
undef($memory_4);
#line 476
$memory_3 = c_rt_lib::ov_mk_arg('decl', $memory_2);
#line 476
$memory_3 = c_rt_lib::ov_mk_arg('ok', $memory_3);
#line 476
undef($memory_1);
#line 476
undef($memory_2);
#line 476
$_[0] = $memory_0;return $memory_3;
#line 476
undef($memory_3);
#line 476
undef($memory_2);
#line 477
goto label_1;
#line 477
label_2:
#line 478
$memory_4 = nparser_priv::parse_expr($memory_0);
#line 478
$memory_3 = c_rt_lib::ov_is($memory_4, 'ok');
#line 478
if (c_rt_lib::check_true($memory_3)) {goto label_4;}
#line 478
undef($memory_1);
#line 478
undef($memory_2);
#line 478
undef($memory_3);
#line 478
$_[0] = $memory_0;return $memory_4;
#line 478
label_4:
#line 478
$memory_2 = c_rt_lib::ov_as($memory_4, 'ok');
#line 478
undef($memory_3);
#line 478
undef($memory_4);
#line 479
$memory_3 = $memory_2;
#line 479
$memory_3 = c_rt_lib::ov_is($memory_3, 'bin_op');
#line 479
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 479
if (c_rt_lib::check_true($memory_4)) {goto label_7;}
#line 479
$memory_3 = $memory_2;
#line 479
$memory_3 = c_rt_lib::ov_as($memory_3, 'bin_op');
#line 479
$memory_3 = $memory_3->{'op'};
#line 479
$memory_5 = "=";
#line 479
$memory_3 = c_rt_lib::to_nl($memory_3 eq $memory_5);
#line 479
undef($memory_5);
#line 479
label_7:
#line 479
undef($memory_4);
#line 479
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 479
if (c_rt_lib::check_true($memory_3)) {goto label_6;}
#line 480
$memory_4 = $memory_2;
#line 480
$memory_4 = c_rt_lib::ov_as($memory_4, 'bin_op');
#line 480
$memory_4 = c_rt_lib::ov_mk_arg('lval', $memory_4);
#line 480
$memory_4 = c_rt_lib::ov_mk_arg('ok', $memory_4);
#line 480
undef($memory_1);
#line 480
undef($memory_2);
#line 480
undef($memory_3);
#line 480
$_[0] = $memory_0;return $memory_4;
#line 480
undef($memory_4);
#line 481
goto label_5;
#line 481
label_6:
#line 482
$memory_4 = c_rt_lib::ov_mk_arg('expr', $memory_2);
#line 482
$memory_4 = c_rt_lib::ov_mk_arg('ok', $memory_4);
#line 482
undef($memory_1);
#line 482
undef($memory_2);
#line 482
undef($memory_3);
#line 482
$_[0] = $memory_0;return $memory_4;
#line 482
undef($memory_4);
#line 483
goto label_5;
#line 483
label_5:
#line 483
undef($memory_3);
#line 483
undef($memory_2);
#line 484
goto label_1;
#line 484
label_1:
#line 484
undef($memory_1);
#line 484
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub nparser_priv::parse_cmd($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;my $memory_13;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);
#line 488
$memory_2 = "state";
#line 488
$memory_2 = c_rt_lib::get_ref_hash($memory_0, $memory_2);
#line 488
$memory_1 = ntokenizer::get_place($memory_2);
#line 488
$memory_3 = "state";
#line 488
c_rt_lib::set_ref_hash($memory_0, $memory_3, $memory_2);
#line 488
undef($memory_3);
#line 488
undef($memory_2);
#line 490
$memory_4 = "if";
#line 490
$memory_3 = nparser_priv::try_eat($memory_0, $memory_4);
#line 490
undef($memory_4);
#line 490
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 490
if (c_rt_lib::check_true($memory_3)) {goto label_2;}
#line 491
$memory_4 = {};
#line 492
$memory_6 = nparser_priv::parse_cond($memory_0);
#line 492
$memory_5 = c_rt_lib::ov_is($memory_6, 'ok');
#line 492
if (c_rt_lib::check_true($memory_5)) {goto label_3;}
#line 492
undef($memory_1);
#line 492
undef($memory_2);
#line 492
undef($memory_3);
#line 492
undef($memory_4);
#line 492
undef($memory_5);
#line 492
$_[0] = $memory_0;return $memory_6;
#line 492
label_3:
#line 492
$memory_7 = c_rt_lib::ov_as($memory_6, 'ok');
#line 492
 if (c_rt_lib::get_hashcount($memory_4) > 1) {$memory_4 = {%{$memory_4}};}$memory_4->{'cond'} = $memory_7;
#line 492
undef($memory_5);
#line 492
undef($memory_6);
#line 492
undef($memory_7);
#line 493
$memory_6 = nparser_priv::parse_block($memory_0);
#line 493
$memory_5 = c_rt_lib::ov_is($memory_6, 'ok');
#line 493
if (c_rt_lib::check_true($memory_5)) {goto label_4;}
#line 493
undef($memory_1);
#line 493
undef($memory_2);
#line 493
undef($memory_3);
#line 493
undef($memory_4);
#line 493
undef($memory_5);
#line 493
$_[0] = $memory_0;return $memory_6;
#line 493
label_4:
#line 493
$memory_7 = c_rt_lib::ov_as($memory_6, 'ok');
#line 493
 if (c_rt_lib::get_hashcount($memory_4) > 1) {$memory_4 = {%{$memory_4}};}$memory_4->{'if'} = $memory_7;
#line 493
undef($memory_5);
#line 493
undef($memory_6);
#line 493
undef($memory_7);
#line 494
$memory_5 = [];
#line 495
$memory_6 = [];
#line 495
$memory_7 = $memory_6;
#line 495
 if (c_rt_lib::get_hashcount($memory_4) > 1) {$memory_4 = {%{$memory_4}};}$memory_4->{'elsif'} = $memory_7;
#line 495
undef($memory_6);
#line 495
undef($memory_7);
#line 496
label_6:
#line 496
$memory_7 = "elsif";
#line 496
$memory_6 = nparser_priv::try_eat($memory_0, $memory_7);
#line 496
undef($memory_7);
#line 496
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 496
if (c_rt_lib::check_true($memory_6)) {goto label_5;}
#line 497
$memory_7 = {};
#line 498
$memory_9 = "state";
#line 498
$memory_9 = c_rt_lib::get_ref_hash($memory_0, $memory_9);
#line 498
$memory_8 = ntokenizer::get_place($memory_9);
#line 498
$memory_10 = "state";
#line 498
c_rt_lib::set_ref_hash($memory_0, $memory_10, $memory_9);
#line 498
undef($memory_10);
#line 498
undef($memory_9);
#line 499
$memory_10 = nparser_priv::parse_cond($memory_0);
#line 499
$memory_9 = c_rt_lib::ov_is($memory_10, 'ok');
#line 499
if (c_rt_lib::check_true($memory_9)) {goto label_7;}
#line 499
undef($memory_1);
#line 499
undef($memory_2);
#line 499
undef($memory_3);
#line 499
undef($memory_4);
#line 499
undef($memory_5);
#line 499
undef($memory_6);
#line 499
undef($memory_7);
#line 499
undef($memory_8);
#line 499
undef($memory_9);
#line 499
$_[0] = $memory_0;return $memory_10;
#line 499
label_7:
#line 499
$memory_11 = c_rt_lib::ov_as($memory_10, 'ok');
#line 499
 if (c_rt_lib::get_hashcount($memory_7) > 1) {$memory_7 = {%{$memory_7}};}$memory_7->{'cond'} = $memory_11;
#line 499
undef($memory_9);
#line 499
undef($memory_10);
#line 499
undef($memory_11);
#line 500
$memory_10 = "state";
#line 500
$memory_10 = c_rt_lib::get_ref_hash($memory_0, $memory_10);
#line 500
$memory_9 = ntokenizer::get_place_ws($memory_10);
#line 500
$memory_11 = "state";
#line 500
c_rt_lib::set_ref_hash($memory_0, $memory_11, $memory_10);
#line 500
undef($memory_11);
#line 500
undef($memory_10);
#line 501
$memory_10 = {begin => $memory_8,end => $memory_9,};
#line 501
$memory_11 = $memory_10;
#line 501
 if (c_rt_lib::get_hashcount($memory_7) > 1) {$memory_7 = {%{$memory_7}};}$memory_7->{'debug'} = $memory_11;
#line 501
undef($memory_10);
#line 501
undef($memory_11);
#line 502
$memory_11 = nparser_priv::parse_block($memory_0);
#line 502
$memory_10 = c_rt_lib::ov_is($memory_11, 'ok');
#line 502
if (c_rt_lib::check_true($memory_10)) {goto label_8;}
#line 502
undef($memory_1);
#line 502
undef($memory_2);
#line 502
undef($memory_3);
#line 502
undef($memory_4);
#line 502
undef($memory_5);
#line 502
undef($memory_6);
#line 502
undef($memory_7);
#line 502
undef($memory_8);
#line 502
undef($memory_9);
#line 502
undef($memory_10);
#line 502
$_[0] = $memory_0;return $memory_11;
#line 502
label_8:
#line 502
$memory_12 = c_rt_lib::ov_as($memory_11, 'ok');
#line 502
 if (c_rt_lib::get_hashcount($memory_7) > 1) {$memory_7 = {%{$memory_7}};}$memory_7->{'cmd'} = $memory_12;
#line 502
undef($memory_10);
#line 502
undef($memory_11);
#line 502
undef($memory_12);
#line 503
array::push($memory_5, $memory_7);
#line 503
undef($memory_7);
#line 503
undef($memory_8);
#line 503
undef($memory_9);
#line 504
goto label_6;
#line 504
label_5:
#line 504
undef($memory_6);
#line 505
$memory_6 = $memory_5;
#line 505
 if (c_rt_lib::get_hashcount($memory_4) > 1) {$memory_4 = {%{$memory_4}};}$memory_4->{'elsif'} = $memory_6;
#line 505
undef($memory_6);
#line 506
$memory_7 = "else";
#line 506
$memory_6 = nparser_priv::try_eat($memory_0, $memory_7);
#line 506
undef($memory_7);
#line 506
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 506
if (c_rt_lib::check_true($memory_6)) {goto label_10;}
#line 507
$memory_8 = nparser_priv::parse_block($memory_0);
#line 507
$memory_7 = c_rt_lib::ov_is($memory_8, 'ok');
#line 507
if (c_rt_lib::check_true($memory_7)) {goto label_11;}
#line 507
undef($memory_1);
#line 507
undef($memory_2);
#line 507
undef($memory_3);
#line 507
undef($memory_4);
#line 507
undef($memory_5);
#line 507
undef($memory_6);
#line 507
undef($memory_7);
#line 507
$_[0] = $memory_0;return $memory_8;
#line 507
label_11:
#line 507
$memory_9 = c_rt_lib::ov_as($memory_8, 'ok');
#line 507
 if (c_rt_lib::get_hashcount($memory_4) > 1) {$memory_4 = {%{$memory_4}};}$memory_4->{'else'} = $memory_9;
#line 507
undef($memory_7);
#line 507
undef($memory_8);
#line 507
undef($memory_9);
#line 508
goto label_9;
#line 508
label_10:
#line 509
$memory_8 = nast::empty_debug();
#line 509
$memory_9 = c_rt_lib::ov_mk_none('nop');
#line 509
$memory_7 = {debug => $memory_8,cmd => $memory_9,};
#line 509
undef($memory_8);
#line 509
undef($memory_9);
#line 509
$memory_8 = $memory_7;
#line 509
 if (c_rt_lib::get_hashcount($memory_4) > 1) {$memory_4 = {%{$memory_4}};}$memory_4->{'else'} = $memory_8;
#line 509
undef($memory_7);
#line 509
undef($memory_8);
#line 510
goto label_9;
#line 510
label_9:
#line 510
undef($memory_6);
#line 511
$memory_6 = c_rt_lib::ov_mk_arg('if', $memory_4);
#line 511
$memory_2 = $memory_6;
#line 511
undef($memory_6);
#line 511
undef($memory_4);
#line 511
undef($memory_5);
#line 512
goto label_1;
#line 512
label_2:
#line 512
$memory_4 = "fora";
#line 512
$memory_3 = nparser_priv::try_eat($memory_0, $memory_4);
#line 512
undef($memory_4);
#line 512
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 512
if (c_rt_lib::check_true($memory_3)) {goto label_12;}
#line 513
$memory_4 = {};
#line 514
$memory_5 = c_rt_lib::to_nl(0);
#line 514
$memory_6 = $memory_5;
#line 514
 if (c_rt_lib::get_hashcount($memory_4) > 1) {$memory_4 = {%{$memory_4}};}$memory_4->{'short'} = $memory_6;
#line 514
undef($memory_5);
#line 514
undef($memory_6);
#line 515
$memory_5 = nparser_priv::parse_var_decl_sim($memory_0);
#line 515
$memory_6 = $memory_5;
#line 515
 if (c_rt_lib::get_hashcount($memory_4) > 1) {$memory_4 = {%{$memory_4}};}$memory_4->{'iter'} = $memory_6;
#line 515
undef($memory_5);
#line 515
undef($memory_6);
#line 516
$memory_6 = nparser_priv::parse_cond($memory_0);
#line 516
$memory_5 = c_rt_lib::ov_is($memory_6, 'ok');
#line 516
if (c_rt_lib::check_true($memory_5)) {goto label_13;}
#line 516
undef($memory_1);
#line 516
undef($memory_2);
#line 516
undef($memory_3);
#line 516
undef($memory_4);
#line 516
undef($memory_5);
#line 516
$_[0] = $memory_0;return $memory_6;
#line 516
label_13:
#line 516
$memory_7 = c_rt_lib::ov_as($memory_6, 'ok');
#line 516
 if (c_rt_lib::get_hashcount($memory_4) > 1) {$memory_4 = {%{$memory_4}};}$memory_4->{'array'} = $memory_7;
#line 516
undef($memory_5);
#line 516
undef($memory_6);
#line 516
undef($memory_7);
#line 517
$memory_6 = nparser_priv::parse_block($memory_0);
#line 517
$memory_5 = c_rt_lib::ov_is($memory_6, 'ok');
#line 517
if (c_rt_lib::check_true($memory_5)) {goto label_14;}
#line 517
undef($memory_1);
#line 517
undef($memory_2);
#line 517
undef($memory_3);
#line 517
undef($memory_4);
#line 517
undef($memory_5);
#line 517
$_[0] = $memory_0;return $memory_6;
#line 517
label_14:
#line 517
$memory_7 = c_rt_lib::ov_as($memory_6, 'ok');
#line 517
 if (c_rt_lib::get_hashcount($memory_4) > 1) {$memory_4 = {%{$memory_4}};}$memory_4->{'cmd'} = $memory_7;
#line 517
undef($memory_5);
#line 517
undef($memory_6);
#line 517
undef($memory_7);
#line 518
$memory_5 = c_rt_lib::ov_mk_arg('fora', $memory_4);
#line 518
$memory_2 = $memory_5;
#line 518
undef($memory_5);
#line 518
undef($memory_4);
#line 519
goto label_1;
#line 519
label_12:
#line 519
$memory_4 = "rep";
#line 519
$memory_3 = nparser_priv::try_eat($memory_0, $memory_4);
#line 519
undef($memory_4);
#line 519
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 519
if (c_rt_lib::check_true($memory_3)) {goto label_15;}
#line 520
$memory_4 = {};
#line 521
$memory_5 = c_rt_lib::to_nl(0);
#line 521
$memory_6 = $memory_5;
#line 521
 if (c_rt_lib::get_hashcount($memory_4) > 1) {$memory_4 = {%{$memory_4}};}$memory_4->{'short'} = $memory_6;
#line 521
undef($memory_5);
#line 521
undef($memory_6);
#line 522
$memory_5 = nparser_priv::parse_var_decl_sim($memory_0);
#line 522
$memory_6 = $memory_5;
#line 522
 if (c_rt_lib::get_hashcount($memory_4) > 1) {$memory_4 = {%{$memory_4}};}$memory_4->{'iter'} = $memory_6;
#line 522
undef($memory_5);
#line 522
undef($memory_6);
#line 523
$memory_6 = nparser_priv::parse_cond($memory_0);
#line 523
$memory_5 = c_rt_lib::ov_is($memory_6, 'ok');
#line 523
if (c_rt_lib::check_true($memory_5)) {goto label_16;}
#line 523
undef($memory_1);
#line 523
undef($memory_2);
#line 523
undef($memory_3);
#line 523
undef($memory_4);
#line 523
undef($memory_5);
#line 523
$_[0] = $memory_0;return $memory_6;
#line 523
label_16:
#line 523
$memory_7 = c_rt_lib::ov_as($memory_6, 'ok');
#line 523
 if (c_rt_lib::get_hashcount($memory_4) > 1) {$memory_4 = {%{$memory_4}};}$memory_4->{'count'} = $memory_7;
#line 523
undef($memory_5);
#line 523
undef($memory_6);
#line 523
undef($memory_7);
#line 524
$memory_6 = nparser_priv::parse_block($memory_0);
#line 524
$memory_5 = c_rt_lib::ov_is($memory_6, 'ok');
#line 524
if (c_rt_lib::check_true($memory_5)) {goto label_17;}
#line 524
undef($memory_1);
#line 524
undef($memory_2);
#line 524
undef($memory_3);
#line 524
undef($memory_4);
#line 524
undef($memory_5);
#line 524
$_[0] = $memory_0;return $memory_6;
#line 524
label_17:
#line 524
$memory_7 = c_rt_lib::ov_as($memory_6, 'ok');
#line 524
 if (c_rt_lib::get_hashcount($memory_4) > 1) {$memory_4 = {%{$memory_4}};}$memory_4->{'cmd'} = $memory_7;
#line 524
undef($memory_5);
#line 524
undef($memory_6);
#line 524
undef($memory_7);
#line 525
$memory_5 = c_rt_lib::ov_mk_arg('rep', $memory_4);
#line 525
$memory_2 = $memory_5;
#line 525
undef($memory_5);
#line 525
undef($memory_4);
#line 526
goto label_1;
#line 526
label_15:
#line 526
$memory_4 = "loop";
#line 526
$memory_3 = nparser_priv::try_eat($memory_0, $memory_4);
#line 526
undef($memory_4);
#line 526
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 526
if (c_rt_lib::check_true($memory_3)) {goto label_18;}
#line 527
$memory_6 = nparser_priv::parse_block($memory_0);
#line 527
$memory_5 = c_rt_lib::ov_is($memory_6, 'ok');
#line 527
if (c_rt_lib::check_true($memory_5)) {goto label_19;}
#line 527
undef($memory_1);
#line 527
undef($memory_2);
#line 527
undef($memory_3);
#line 527
undef($memory_4);
#line 527
undef($memory_5);
#line 527
$_[0] = $memory_0;return $memory_6;
#line 527
label_19:
#line 527
$memory_4 = c_rt_lib::ov_as($memory_6, 'ok');
#line 527
undef($memory_5);
#line 527
undef($memory_6);
#line 528
$memory_5 = c_rt_lib::ov_mk_arg('loop', $memory_4);
#line 528
$memory_2 = $memory_5;
#line 528
undef($memory_5);
#line 528
undef($memory_4);
#line 529
goto label_1;
#line 529
label_18:
#line 529
$memory_4 = "forh";
#line 529
$memory_3 = nparser_priv::try_eat($memory_0, $memory_4);
#line 529
undef($memory_4);
#line 529
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 529
if (c_rt_lib::check_true($memory_3)) {goto label_20;}
#line 530
$memory_4 = {};
#line 531
$memory_5 = c_rt_lib::to_nl(0);
#line 531
$memory_6 = $memory_5;
#line 531
 if (c_rt_lib::get_hashcount($memory_4) > 1) {$memory_4 = {%{$memory_4}};}$memory_4->{'short'} = $memory_6;
#line 531
undef($memory_5);
#line 531
undef($memory_6);
#line 532
$memory_5 = nparser_priv::parse_var_decl_sim($memory_0);
#line 532
$memory_6 = $memory_5;
#line 532
 if (c_rt_lib::get_hashcount($memory_4) > 1) {$memory_4 = {%{$memory_4}};}$memory_4->{'key'} = $memory_6;
#line 532
undef($memory_5);
#line 532
undef($memory_6);
#line 533
$memory_5 = ",";
#line 533
nparser_priv::eat($memory_0, $memory_5);
#line 533
undef($memory_5);
#line 534
$memory_5 = nparser_priv::parse_var_decl_sim($memory_0);
#line 534
$memory_6 = $memory_5;
#line 534
 if (c_rt_lib::get_hashcount($memory_4) > 1) {$memory_4 = {%{$memory_4}};}$memory_4->{'val'} = $memory_6;
#line 534
undef($memory_5);
#line 534
undef($memory_6);
#line 535
$memory_6 = nparser_priv::parse_cond($memory_0);
#line 535
$memory_5 = c_rt_lib::ov_is($memory_6, 'ok');
#line 535
if (c_rt_lib::check_true($memory_5)) {goto label_21;}
#line 535
undef($memory_1);
#line 535
undef($memory_2);
#line 535
undef($memory_3);
#line 535
undef($memory_4);
#line 535
undef($memory_5);
#line 535
$_[0] = $memory_0;return $memory_6;
#line 535
label_21:
#line 535
$memory_7 = c_rt_lib::ov_as($memory_6, 'ok');
#line 535
 if (c_rt_lib::get_hashcount($memory_4) > 1) {$memory_4 = {%{$memory_4}};}$memory_4->{'hash'} = $memory_7;
#line 535
undef($memory_5);
#line 535
undef($memory_6);
#line 535
undef($memory_7);
#line 536
$memory_6 = nparser_priv::parse_block($memory_0);
#line 536
$memory_5 = c_rt_lib::ov_is($memory_6, 'ok');
#line 536
if (c_rt_lib::check_true($memory_5)) {goto label_22;}
#line 536
undef($memory_1);
#line 536
undef($memory_2);
#line 536
undef($memory_3);
#line 536
undef($memory_4);
#line 536
undef($memory_5);
#line 536
$_[0] = $memory_0;return $memory_6;
#line 536
label_22:
#line 536
$memory_7 = c_rt_lib::ov_as($memory_6, 'ok');
#line 536
 if (c_rt_lib::get_hashcount($memory_4) > 1) {$memory_4 = {%{$memory_4}};}$memory_4->{'cmd'} = $memory_7;
#line 536
undef($memory_5);
#line 536
undef($memory_6);
#line 536
undef($memory_7);
#line 537
$memory_5 = c_rt_lib::ov_mk_arg('forh', $memory_4);
#line 537
$memory_2 = $memory_5;
#line 537
undef($memory_5);
#line 537
undef($memory_4);
#line 538
goto label_1;
#line 538
label_20:
#line 538
$memory_4 = "while";
#line 538
$memory_3 = nparser_priv::try_eat($memory_0, $memory_4);
#line 538
undef($memory_4);
#line 538
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 538
if (c_rt_lib::check_true($memory_3)) {goto label_23;}
#line 539
$memory_4 = {};
#line 540
$memory_5 = c_rt_lib::to_nl(0);
#line 540
$memory_6 = $memory_5;
#line 540
 if (c_rt_lib::get_hashcount($memory_4) > 1) {$memory_4 = {%{$memory_4}};}$memory_4->{'short'} = $memory_6;
#line 540
undef($memory_5);
#line 540
undef($memory_6);
#line 541
$memory_6 = nparser_priv::parse_cond($memory_0);
#line 541
$memory_5 = c_rt_lib::ov_is($memory_6, 'ok');
#line 541
if (c_rt_lib::check_true($memory_5)) {goto label_24;}
#line 541
undef($memory_1);
#line 541
undef($memory_2);
#line 541
undef($memory_3);
#line 541
undef($memory_4);
#line 541
undef($memory_5);
#line 541
$_[0] = $memory_0;return $memory_6;
#line 541
label_24:
#line 541
$memory_7 = c_rt_lib::ov_as($memory_6, 'ok');
#line 541
 if (c_rt_lib::get_hashcount($memory_4) > 1) {$memory_4 = {%{$memory_4}};}$memory_4->{'cond'} = $memory_7;
#line 541
undef($memory_5);
#line 541
undef($memory_6);
#line 541
undef($memory_7);
#line 542
$memory_6 = nparser_priv::parse_block($memory_0);
#line 542
$memory_5 = c_rt_lib::ov_is($memory_6, 'ok');
#line 542
if (c_rt_lib::check_true($memory_5)) {goto label_25;}
#line 542
undef($memory_1);
#line 542
undef($memory_2);
#line 542
undef($memory_3);
#line 542
undef($memory_4);
#line 542
undef($memory_5);
#line 542
$_[0] = $memory_0;return $memory_6;
#line 542
label_25:
#line 542
$memory_7 = c_rt_lib::ov_as($memory_6, 'ok');
#line 542
 if (c_rt_lib::get_hashcount($memory_4) > 1) {$memory_4 = {%{$memory_4}};}$memory_4->{'cmd'} = $memory_7;
#line 542
undef($memory_5);
#line 542
undef($memory_6);
#line 542
undef($memory_7);
#line 543
$memory_5 = c_rt_lib::ov_mk_arg('while', $memory_4);
#line 543
$memory_2 = $memory_5;
#line 543
undef($memory_5);
#line 543
undef($memory_4);
#line 544
goto label_1;
#line 544
label_23:
#line 544
$memory_4 = "for";
#line 544
$memory_3 = nparser_priv::try_eat($memory_0, $memory_4);
#line 544
undef($memory_4);
#line 544
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 544
if (c_rt_lib::check_true($memory_3)) {goto label_26;}
#line 545
$memory_4 = {};
#line 546
$memory_5 = "(";
#line 546
nparser_priv::eat($memory_0, $memory_5);
#line 546
undef($memory_5);
#line 547
$memory_6 = "state";
#line 547
$memory_6 = c_rt_lib::get_ref_hash($memory_0, $memory_6);
#line 547
$memory_7 = "var";
#line 547
$memory_5 = ntokenizer::next_is($memory_6, $memory_7);
#line 547
undef($memory_7);
#line 547
$memory_7 = "state";
#line 547
c_rt_lib::set_ref_hash($memory_0, $memory_7, $memory_6);
#line 547
undef($memory_7);
#line 547
undef($memory_6);
#line 547
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 547
if (c_rt_lib::check_true($memory_5)) {goto label_28;}
#line 548
$memory_8 = nparser_priv::parse_var_decl($memory_0);
#line 548
$memory_7 = c_rt_lib::ov_is($memory_8, 'ok');
#line 548
if (c_rt_lib::check_true($memory_7)) {goto label_29;}
#line 548
undef($memory_1);
#line 548
undef($memory_2);
#line 548
undef($memory_3);
#line 548
undef($memory_4);
#line 548
undef($memory_5);
#line 548
undef($memory_6);
#line 548
undef($memory_7);
#line 548
$_[0] = $memory_0;return $memory_8;
#line 548
label_29:
#line 548
$memory_6 = c_rt_lib::ov_as($memory_8, 'ok');
#line 548
undef($memory_7);
#line 548
undef($memory_8);
#line 549
$memory_7 = c_rt_lib::ov_mk_arg('var_decl', $memory_6);
#line 549
$memory_8 = $memory_7;
#line 549
 if (c_rt_lib::get_hashcount($memory_4) > 1) {$memory_4 = {%{$memory_4}};}$memory_4->{'start'} = $memory_8;
#line 549
undef($memory_7);
#line 549
undef($memory_8);
#line 549
undef($memory_6);
#line 550
goto label_27;
#line 550
label_28:
#line 550
$memory_6 = "state";
#line 550
$memory_6 = c_rt_lib::get_ref_hash($memory_0, $memory_6);
#line 550
$memory_7 = ";";
#line 550
$memory_5 = ntokenizer::next_is($memory_6, $memory_7);
#line 550
undef($memory_7);
#line 550
$memory_7 = "state";
#line 550
c_rt_lib::set_ref_hash($memory_0, $memory_7, $memory_6);
#line 550
undef($memory_7);
#line 550
undef($memory_6);
#line 550
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 550
if (c_rt_lib::check_true($memory_5)) {goto label_30;}
#line 551
$memory_6 = c_rt_lib::ov_mk_none('nop');
#line 551
$memory_6 = c_rt_lib::ov_mk_arg('value', $memory_6);
#line 551
$memory_7 = $memory_6;
#line 551
 if (c_rt_lib::get_hashcount($memory_4) > 1) {$memory_4 = {%{$memory_4}};}$memory_4->{'start'} = $memory_7;
#line 551
undef($memory_6);
#line 551
undef($memory_7);
#line 552
goto label_27;
#line 552
label_30:
#line 553
$memory_8 = nparser_priv::parse_expr($memory_0);
#line 553
$memory_7 = c_rt_lib::ov_is($memory_8, 'ok');
#line 553
if (c_rt_lib::check_true($memory_7)) {goto label_31;}
#line 553
undef($memory_1);
#line 553
undef($memory_2);
#line 553
undef($memory_3);
#line 553
undef($memory_4);
#line 553
undef($memory_5);
#line 553
undef($memory_6);
#line 553
undef($memory_7);
#line 553
$_[0] = $memory_0;return $memory_8;
#line 553
label_31:
#line 553
$memory_6 = c_rt_lib::ov_as($memory_8, 'ok');
#line 553
undef($memory_7);
#line 553
undef($memory_8);
#line 554
$memory_7 = c_rt_lib::ov_mk_arg('value', $memory_6);
#line 554
$memory_8 = $memory_7;
#line 554
 if (c_rt_lib::get_hashcount($memory_4) > 1) {$memory_4 = {%{$memory_4}};}$memory_4->{'start'} = $memory_8;
#line 554
undef($memory_7);
#line 554
undef($memory_8);
#line 554
undef($memory_6);
#line 555
goto label_27;
#line 555
label_27:
#line 555
undef($memory_5);
#line 556
$memory_5 = ";";
#line 556
nparser_priv::eat($memory_0, $memory_5);
#line 556
undef($memory_5);
#line 557
$memory_5 = c_rt_lib::ov_mk_none('nop');
#line 557
$memory_6 = $memory_5;
#line 557
 if (c_rt_lib::get_hashcount($memory_4) > 1) {$memory_4 = {%{$memory_4}};}$memory_4->{'cond'} = $memory_6;
#line 557
undef($memory_5);
#line 557
undef($memory_6);
#line 558
$memory_6 = "state";
#line 558
$memory_6 = c_rt_lib::get_ref_hash($memory_0, $memory_6);
#line 558
$memory_7 = ";";
#line 558
$memory_5 = ntokenizer::next_is($memory_6, $memory_7);
#line 558
undef($memory_7);
#line 558
$memory_7 = "state";
#line 558
c_rt_lib::set_ref_hash($memory_0, $memory_7, $memory_6);
#line 558
undef($memory_7);
#line 558
undef($memory_6);
#line 558
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 558
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 558
if (c_rt_lib::check_true($memory_5)) {goto label_33;}
#line 558
$memory_7 = nparser_priv::parse_expr($memory_0);
#line 558
$memory_6 = c_rt_lib::ov_is($memory_7, 'ok');
#line 558
if (c_rt_lib::check_true($memory_6)) {goto label_34;}
#line 558
undef($memory_1);
#line 558
undef($memory_2);
#line 558
undef($memory_3);
#line 558
undef($memory_4);
#line 558
undef($memory_5);
#line 558
undef($memory_6);
#line 558
$_[0] = $memory_0;return $memory_7;
#line 558
label_34:
#line 558
$memory_8 = c_rt_lib::ov_as($memory_7, 'ok');
#line 558
 if (c_rt_lib::get_hashcount($memory_4) > 1) {$memory_4 = {%{$memory_4}};}$memory_4->{'cond'} = $memory_8;
#line 558
undef($memory_6);
#line 558
undef($memory_7);
#line 558
undef($memory_8);
#line 558
goto label_33;
#line 558
label_33:
#line 558
undef($memory_5);
#line 559
$memory_5 = ";";
#line 559
nparser_priv::eat($memory_0, $memory_5);
#line 559
undef($memory_5);
#line 560
$memory_5 = c_rt_lib::ov_mk_none('nop');
#line 560
$memory_6 = $memory_5;
#line 560
 if (c_rt_lib::get_hashcount($memory_4) > 1) {$memory_4 = {%{$memory_4}};}$memory_4->{'iter'} = $memory_6;
#line 560
undef($memory_5);
#line 560
undef($memory_6);
#line 561
$memory_6 = "state";
#line 561
$memory_6 = c_rt_lib::get_ref_hash($memory_0, $memory_6);
#line 561
$memory_7 = ")";
#line 561
$memory_5 = ntokenizer::next_is($memory_6, $memory_7);
#line 561
undef($memory_7);
#line 561
$memory_7 = "state";
#line 561
c_rt_lib::set_ref_hash($memory_0, $memory_7, $memory_6);
#line 561
undef($memory_7);
#line 561
undef($memory_6);
#line 561
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 561
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 561
if (c_rt_lib::check_true($memory_5)) {goto label_36;}
#line 561
$memory_7 = nparser_priv::parse_expr($memory_0);
#line 561
$memory_6 = c_rt_lib::ov_is($memory_7, 'ok');
#line 561
if (c_rt_lib::check_true($memory_6)) {goto label_37;}
#line 561
undef($memory_1);
#line 561
undef($memory_2);
#line 561
undef($memory_3);
#line 561
undef($memory_4);
#line 561
undef($memory_5);
#line 561
undef($memory_6);
#line 561
$_[0] = $memory_0;return $memory_7;
#line 561
label_37:
#line 561
$memory_8 = c_rt_lib::ov_as($memory_7, 'ok');
#line 561
 if (c_rt_lib::get_hashcount($memory_4) > 1) {$memory_4 = {%{$memory_4}};}$memory_4->{'iter'} = $memory_8;
#line 561
undef($memory_6);
#line 561
undef($memory_7);
#line 561
undef($memory_8);
#line 561
goto label_36;
#line 561
label_36:
#line 561
undef($memory_5);
#line 562
$memory_5 = ")";
#line 562
nparser_priv::eat($memory_0, $memory_5);
#line 562
undef($memory_5);
#line 563
$memory_6 = nparser_priv::parse_block($memory_0);
#line 563
$memory_5 = c_rt_lib::ov_is($memory_6, 'ok');
#line 563
if (c_rt_lib::check_true($memory_5)) {goto label_38;}
#line 563
undef($memory_1);
#line 563
undef($memory_2);
#line 563
undef($memory_3);
#line 563
undef($memory_4);
#line 563
undef($memory_5);
#line 563
$_[0] = $memory_0;return $memory_6;
#line 563
label_38:
#line 563
$memory_7 = c_rt_lib::ov_as($memory_6, 'ok');
#line 563
 if (c_rt_lib::get_hashcount($memory_4) > 1) {$memory_4 = {%{$memory_4}};}$memory_4->{'cmd'} = $memory_7;
#line 563
undef($memory_5);
#line 563
undef($memory_6);
#line 563
undef($memory_7);
#line 564
$memory_5 = c_rt_lib::ov_mk_arg('for', $memory_4);
#line 564
$memory_2 = $memory_5;
#line 564
undef($memory_5);
#line 564
undef($memory_4);
#line 565
goto label_1;
#line 565
label_26:
#line 565
$memory_4 = "state";
#line 565
$memory_4 = c_rt_lib::get_ref_hash($memory_0, $memory_4);
#line 565
$memory_5 = "{";
#line 565
$memory_3 = ntokenizer::next_is($memory_4, $memory_5);
#line 565
undef($memory_5);
#line 565
$memory_5 = "state";
#line 565
c_rt_lib::set_ref_hash($memory_0, $memory_5, $memory_4);
#line 565
undef($memory_5);
#line 565
undef($memory_4);
#line 565
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 565
if (c_rt_lib::check_true($memory_3)) {goto label_39;}
#line 566
$memory_6 = nparser_priv::parse_block($memory_0);
#line 566
$memory_5 = c_rt_lib::ov_is($memory_6, 'ok');
#line 566
if (c_rt_lib::check_true($memory_5)) {goto label_40;}
#line 566
undef($memory_1);
#line 566
undef($memory_2);
#line 566
undef($memory_3);
#line 566
undef($memory_4);
#line 566
undef($memory_5);
#line 566
$_[0] = $memory_0;return $memory_6;
#line 566
label_40:
#line 566
$memory_4 = c_rt_lib::ov_as($memory_6, 'ok');
#line 566
undef($memory_5);
#line 566
undef($memory_6);
#line 567
$memory_5 = $memory_4->{'cmd'};
#line 567
$memory_2 = $memory_5;
#line 567
undef($memory_5);
#line 567
undef($memory_4);
#line 568
goto label_1;
#line 568
label_39:
#line 568
$memory_4 = "break";
#line 568
$memory_3 = nparser_priv::try_eat($memory_0, $memory_4);
#line 568
undef($memory_4);
#line 568
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 568
if (c_rt_lib::check_true($memory_3)) {goto label_41;}
#line 569
$memory_4 = c_rt_lib::ov_mk_none('break');
#line 569
$memory_2 = $memory_4;
#line 569
undef($memory_4);
#line 570
goto label_1;
#line 570
label_41:
#line 570
$memory_4 = "continue";
#line 570
$memory_3 = nparser_priv::try_eat($memory_0, $memory_4);
#line 570
undef($memory_4);
#line 570
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 570
if (c_rt_lib::check_true($memory_3)) {goto label_42;}
#line 571
$memory_4 = c_rt_lib::ov_mk_none('continue');
#line 571
$memory_2 = $memory_4;
#line 571
undef($memory_4);
#line 572
goto label_1;
#line 572
label_42:
#line 572
$memory_4 = "return";
#line 572
$memory_3 = nparser_priv::try_eat($memory_0, $memory_4);
#line 572
undef($memory_4);
#line 572
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 572
if (c_rt_lib::check_true($memory_3)) {goto label_43;}
#line 573
$memory_5 = "state";
#line 573
$memory_5 = c_rt_lib::get_ref_hash($memory_0, $memory_5);
#line 573
$memory_4 = ntokenizer::get_token($memory_5);
#line 573
$memory_6 = "state";
#line 573
c_rt_lib::set_ref_hash($memory_0, $memory_6, $memory_5);
#line 573
undef($memory_6);
#line 573
undef($memory_5);
#line 574
$memory_5 = c_rt_lib::to_nl(0);
#line 575
$memory_6 = nparser_priv::get_end_list();
#line 575
$memory_8 = 0;
#line 575
$memory_9 = 1;
#line 575
$memory_10 = c_rt_lib::array_len($memory_6);
#line 575
label_46:
#line 575
$memory_11 = c_rt_lib::to_nl($memory_8 >= $memory_10);
#line 575
if (c_rt_lib::check_true($memory_11)) {goto label_44;}
#line 575
$memory_7 = $memory_6->[$memory_8];
#line 576
$memory_12 = c_rt_lib::to_nl($memory_4 eq $memory_7);
#line 576
$memory_12 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_12));
#line 576
if (c_rt_lib::check_true($memory_12)) {goto label_48;}
#line 577
$memory_13 = c_rt_lib::to_nl(1);
#line 577
$memory_5 = $memory_13;
#line 577
undef($memory_13);
#line 578
undef($memory_12);
#line 578
goto label_44;
#line 579
goto label_48;
#line 579
label_48:
#line 579
undef($memory_12);
#line 580
$memory_8 = $memory_8 + $memory_9;
#line 580
goto label_46;
#line 580
label_44:
#line 580
undef($memory_6);
#line 580
undef($memory_7);
#line 580
undef($memory_8);
#line 580
undef($memory_9);
#line 580
undef($memory_10);
#line 580
undef($memory_11);
#line 581
$memory_6 = $memory_5;
#line 581
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 581
if (c_rt_lib::check_true($memory_6)) {goto label_50;}
#line 582
$memory_7 = c_rt_lib::ov_mk_none('nop');
#line 582
$memory_7 = c_rt_lib::ov_mk_arg('return', $memory_7);
#line 582
$memory_2 = $memory_7;
#line 582
undef($memory_7);
#line 583
goto label_49;
#line 583
label_50:
#line 584
$memory_9 = nparser_priv::parse_expr($memory_0);
#line 584
$memory_8 = c_rt_lib::ov_is($memory_9, 'ok');
#line 584
if (c_rt_lib::check_true($memory_8)) {goto label_51;}
#line 584
undef($memory_1);
#line 584
undef($memory_2);
#line 584
undef($memory_3);
#line 584
undef($memory_4);
#line 584
undef($memory_5);
#line 584
undef($memory_6);
#line 584
undef($memory_7);
#line 584
undef($memory_8);
#line 584
$_[0] = $memory_0;return $memory_9;
#line 584
label_51:
#line 584
$memory_7 = c_rt_lib::ov_as($memory_9, 'ok');
#line 584
undef($memory_8);
#line 584
undef($memory_9);
#line 585
$memory_8 = c_rt_lib::ov_mk_arg('return', $memory_7);
#line 585
$memory_2 = $memory_8;
#line 585
undef($memory_8);
#line 585
undef($memory_7);
#line 586
goto label_49;
#line 586
label_49:
#line 586
undef($memory_6);
#line 586
undef($memory_4);
#line 586
undef($memory_5);
#line 587
goto label_1;
#line 587
label_43:
#line 587
$memory_4 = "match";
#line 587
$memory_3 = nparser_priv::try_eat($memory_0, $memory_4);
#line 587
undef($memory_4);
#line 587
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 587
if (c_rt_lib::check_true($memory_3)) {goto label_52;}
#line 588
$memory_4 = "(";
#line 588
nparser_priv::eat($memory_0, $memory_4);
#line 588
undef($memory_4);
#line 589
$memory_6 = nparser_priv::parse_expr($memory_0);
#line 589
$memory_5 = c_rt_lib::ov_is($memory_6, 'ok');
#line 589
if (c_rt_lib::check_true($memory_5)) {goto label_53;}
#line 589
undef($memory_1);
#line 589
undef($memory_2);
#line 589
undef($memory_3);
#line 589
undef($memory_4);
#line 589
undef($memory_5);
#line 589
$_[0] = $memory_0;return $memory_6;
#line 589
label_53:
#line 589
$memory_4 = c_rt_lib::ov_as($memory_6, 'ok');
#line 589
undef($memory_5);
#line 589
undef($memory_6);
#line 590
$memory_6 = [];
#line 590
$memory_5 = {val => $memory_4,branch_list => $memory_6,};
#line 590
undef($memory_6);
#line 591
$memory_6 = ")";
#line 591
nparser_priv::eat($memory_0, $memory_6);
#line 591
undef($memory_6);
#line 592
$memory_7 = "state";
#line 592
$memory_7 = c_rt_lib::get_ref_hash($memory_0, $memory_7);
#line 592
$memory_6 = ntokenizer::get_place($memory_7);
#line 592
$memory_8 = "state";
#line 592
c_rt_lib::set_ref_hash($memory_0, $memory_8, $memory_7);
#line 592
undef($memory_8);
#line 592
undef($memory_7);
#line 593
label_55:
#line 593
$memory_8 = "case";
#line 593
$memory_7 = nparser_priv::try_eat($memory_0, $memory_8);
#line 593
undef($memory_8);
#line 593
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 593
if (c_rt_lib::check_true($memory_7)) {goto label_54;}
#line 594
$memory_9 = nparser_priv::parse_variant_decl($memory_0);
#line 594
$memory_8 = {variant => $memory_9,};
#line 594
undef($memory_9);
#line 595
$memory_11 = "state";
#line 595
$memory_11 = c_rt_lib::get_ref_hash($memory_0, $memory_11);
#line 595
$memory_10 = ntokenizer::get_place_ws($memory_11);
#line 595
$memory_12 = "state";
#line 595
c_rt_lib::set_ref_hash($memory_0, $memory_12, $memory_11);
#line 595
undef($memory_12);
#line 595
undef($memory_11);
#line 595
$memory_9 = {begin => $memory_6,end => $memory_10,};
#line 595
undef($memory_10);
#line 595
$memory_10 = $memory_9;
#line 595
 if (c_rt_lib::get_hashcount($memory_8) > 1) {$memory_8 = {%{$memory_8}};}$memory_8->{'debug'} = $memory_10;
#line 595
undef($memory_9);
#line 595
undef($memory_10);
#line 596
$memory_10 = nparser_priv::parse_block($memory_0);
#line 596
$memory_9 = c_rt_lib::ov_is($memory_10, 'ok');
#line 596
if (c_rt_lib::check_true($memory_9)) {goto label_56;}
#line 596
undef($memory_1);
#line 596
undef($memory_2);
#line 596
undef($memory_3);
#line 596
undef($memory_4);
#line 596
undef($memory_5);
#line 596
undef($memory_6);
#line 596
undef($memory_7);
#line 596
undef($memory_8);
#line 596
undef($memory_9);
#line 596
$_[0] = $memory_0;return $memory_10;
#line 596
label_56:
#line 596
$memory_11 = c_rt_lib::ov_as($memory_10, 'ok');
#line 596
 if (c_rt_lib::get_hashcount($memory_8) > 1) {$memory_8 = {%{$memory_8}};}$memory_8->{'cmd'} = $memory_11;
#line 596
undef($memory_9);
#line 596
undef($memory_10);
#line 596
undef($memory_11);
#line 597
$memory_9 = "branch_list";
#line 597
$memory_9 = c_rt_lib::get_ref_hash($memory_5, $memory_9);
#line 597
array::push($memory_9, $memory_8);
#line 597
$memory_10 = "branch_list";
#line 597
c_rt_lib::set_ref_hash($memory_5, $memory_10, $memory_9);
#line 597
undef($memory_10);
#line 597
undef($memory_9);
#line 598
$memory_10 = "state";
#line 598
$memory_10 = c_rt_lib::get_ref_hash($memory_0, $memory_10);
#line 598
$memory_9 = ntokenizer::get_place($memory_10);
#line 598
$memory_11 = "state";
#line 598
c_rt_lib::set_ref_hash($memory_0, $memory_11, $memory_10);
#line 598
undef($memory_11);
#line 598
undef($memory_10);
#line 598
$memory_6 = $memory_9;
#line 598
undef($memory_9);
#line 598
undef($memory_8);
#line 599
goto label_55;
#line 599
label_54:
#line 599
undef($memory_7);
#line 601
$memory_7 = c_rt_lib::ov_mk_arg('match', $memory_5);
#line 601
$memory_2 = $memory_7;
#line 601
undef($memory_7);
#line 601
undef($memory_4);
#line 601
undef($memory_5);
#line 601
undef($memory_6);
#line 602
goto label_1;
#line 602
label_52:
#line 602
$memory_4 = "die";
#line 602
$memory_3 = nparser_priv::try_eat($memory_0, $memory_4);
#line 602
undef($memory_4);
#line 602
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 602
if (c_rt_lib::check_true($memory_3)) {goto label_57;}
#line 603
$memory_4 = [];
#line 604
$memory_6 = "(";
#line 604
$memory_5 = nparser_priv::try_eat($memory_0, $memory_6);
#line 604
undef($memory_6);
#line 604
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 604
if (c_rt_lib::check_true($memory_5)) {goto label_59;}
#line 605
$memory_7 = nparser_priv::parse_expr_list($memory_0);
#line 605
$memory_6 = c_rt_lib::ov_is($memory_7, 'ok');
#line 605
if (c_rt_lib::check_true($memory_6)) {goto label_60;}
#line 605
undef($memory_1);
#line 605
undef($memory_2);
#line 605
undef($memory_3);
#line 605
undef($memory_4);
#line 605
undef($memory_5);
#line 605
undef($memory_6);
#line 605
$_[0] = $memory_0;return $memory_7;
#line 605
label_60:
#line 605
$memory_4 = c_rt_lib::ov_as($memory_7, 'ok');
#line 605
undef($memory_6);
#line 605
undef($memory_7);
#line 606
goto label_59;
#line 606
label_59:
#line 606
undef($memory_5);
#line 608
$memory_5 = c_rt_lib::ov_mk_arg('die', $memory_4);
#line 608
$memory_2 = $memory_5;
#line 608
undef($memory_5);
#line 608
undef($memory_4);
#line 609
goto label_1;
#line 609
label_57:
#line 609
$memory_4 = "state";
#line 609
$memory_4 = c_rt_lib::get_ref_hash($memory_0, $memory_4);
#line 609
$memory_5 = "var";
#line 609
$memory_3 = ntokenizer::next_is($memory_4, $memory_5);
#line 609
undef($memory_5);
#line 609
$memory_5 = "state";
#line 609
c_rt_lib::set_ref_hash($memory_0, $memory_5, $memory_4);
#line 609
undef($memory_5);
#line 609
undef($memory_4);
#line 609
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 609
if (c_rt_lib::check_true($memory_3)) {goto label_61;}
#line 610
$memory_6 = nparser_priv::parse_var_decl($memory_0);
#line 610
$memory_5 = c_rt_lib::ov_is($memory_6, 'ok');
#line 610
if (c_rt_lib::check_true($memory_5)) {goto label_62;}
#line 610
undef($memory_1);
#line 610
undef($memory_2);
#line 610
undef($memory_3);
#line 610
undef($memory_4);
#line 610
undef($memory_5);
#line 610
$_[0] = $memory_0;return $memory_6;
#line 610
label_62:
#line 610
$memory_4 = c_rt_lib::ov_as($memory_6, 'ok');
#line 610
undef($memory_5);
#line 610
undef($memory_6);
#line 611
$memory_5 = c_rt_lib::ov_mk_arg('var_decl', $memory_4);
#line 611
$memory_2 = $memory_5;
#line 611
undef($memory_5);
#line 612
$memory_5 = ";";
#line 612
nparser_priv::eat($memory_0, $memory_5);
#line 612
undef($memory_5);
#line 612
undef($memory_4);
#line 613
goto label_1;
#line 613
label_61:
#line 613
$memory_4 = "state";
#line 613
$memory_4 = c_rt_lib::get_ref_hash($memory_0, $memory_4);
#line 613
$memory_5 = "try";
#line 613
$memory_3 = ntokenizer::next_is($memory_4, $memory_5);
#line 613
undef($memory_5);
#line 613
$memory_5 = "state";
#line 613
c_rt_lib::set_ref_hash($memory_0, $memory_5, $memory_4);
#line 613
undef($memory_5);
#line 613
undef($memory_4);
#line 613
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 613
if (c_rt_lib::check_true($memory_3)) {goto label_63;}
#line 614
$memory_4 = "try";
#line 614
nparser_priv::eat($memory_0, $memory_4);
#line 614
undef($memory_4);
#line 615
$memory_6 = nparser_priv::parse_try_ensure($memory_0);
#line 615
$memory_5 = c_rt_lib::ov_is($memory_6, 'ok');
#line 615
if (c_rt_lib::check_true($memory_5)) {goto label_64;}
#line 615
undef($memory_1);
#line 615
undef($memory_2);
#line 615
undef($memory_3);
#line 615
undef($memory_4);
#line 615
undef($memory_5);
#line 615
$_[0] = $memory_0;return $memory_6;
#line 615
label_64:
#line 615
$memory_4 = c_rt_lib::ov_as($memory_6, 'ok');
#line 615
undef($memory_5);
#line 615
undef($memory_6);
#line 616
$memory_5 = c_rt_lib::ov_mk_arg('try', $memory_4);
#line 616
$memory_2 = $memory_5;
#line 616
undef($memory_5);
#line 616
undef($memory_4);
#line 617
goto label_1;
#line 617
label_63:
#line 617
$memory_4 = "state";
#line 617
$memory_4 = c_rt_lib::get_ref_hash($memory_0, $memory_4);
#line 617
$memory_5 = "ensure";
#line 617
$memory_3 = ntokenizer::next_is($memory_4, $memory_5);
#line 617
undef($memory_5);
#line 617
$memory_5 = "state";
#line 617
c_rt_lib::set_ref_hash($memory_0, $memory_5, $memory_4);
#line 617
undef($memory_5);
#line 617
undef($memory_4);
#line 617
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 617
if (c_rt_lib::check_true($memory_3)) {goto label_65;}
#line 618
$memory_4 = "ensure";
#line 618
nparser_priv::eat($memory_0, $memory_4);
#line 618
undef($memory_4);
#line 619
$memory_6 = nparser_priv::parse_try_ensure($memory_0);
#line 619
$memory_5 = c_rt_lib::ov_is($memory_6, 'ok');
#line 619
if (c_rt_lib::check_true($memory_5)) {goto label_66;}
#line 619
undef($memory_1);
#line 619
undef($memory_2);
#line 619
undef($memory_3);
#line 619
undef($memory_4);
#line 619
undef($memory_5);
#line 619
$_[0] = $memory_0;return $memory_6;
#line 619
label_66:
#line 619
$memory_4 = c_rt_lib::ov_as($memory_6, 'ok');
#line 619
undef($memory_5);
#line 619
undef($memory_6);
#line 620
$memory_5 = c_rt_lib::ov_mk_arg('ensure', $memory_4);
#line 620
$memory_2 = $memory_5;
#line 620
undef($memory_5);
#line 620
undef($memory_4);
#line 621
goto label_1;
#line 621
label_65:
#line 622
$memory_6 = nparser_priv::parse_expr($memory_0);
#line 622
$memory_5 = c_rt_lib::ov_is($memory_6, 'ok');
#line 622
if (c_rt_lib::check_true($memory_5)) {goto label_67;}
#line 622
undef($memory_1);
#line 622
undef($memory_2);
#line 622
undef($memory_3);
#line 622
undef($memory_4);
#line 622
undef($memory_5);
#line 622
$_[0] = $memory_0;return $memory_6;
#line 622
label_67:
#line 622
$memory_4 = c_rt_lib::ov_as($memory_6, 'ok');
#line 622
undef($memory_5);
#line 622
undef($memory_6);
#line 623
$memory_5 = c_rt_lib::ov_mk_arg('value', $memory_4);
#line 623
$memory_2 = $memory_5;
#line 623
undef($memory_5);
#line 623
undef($memory_4);
#line 624
goto label_1;
#line 624
label_1:
#line 624
undef($memory_3);
#line 626
$memory_3 = $memory_2;
#line 626
$memory_3 = c_rt_lib::ov_is($memory_3, 'break');
#line 626
if (c_rt_lib::check_true($memory_3)) {goto label_75;}
#line 626
$memory_3 = $memory_2;
#line 626
$memory_3 = c_rt_lib::ov_is($memory_3, 'continue');
#line 626
label_75:
#line 626
if (c_rt_lib::check_true($memory_3)) {goto label_74;}
#line 626
$memory_3 = $memory_2;
#line 626
$memory_3 = c_rt_lib::ov_is($memory_3, 'value');
#line 626
label_74:
#line 626
if (c_rt_lib::check_true($memory_3)) {goto label_73;}
#line 626
$memory_3 = $memory_2;
#line 626
$memory_3 = c_rt_lib::ov_is($memory_3, 'return');
#line 626
label_73:
#line 626
if (c_rt_lib::check_true($memory_3)) {goto label_72;}
#line 626
$memory_3 = $memory_2;
#line 626
$memory_3 = c_rt_lib::ov_is($memory_3, 'die');
#line 626
label_72:
#line 626
if (c_rt_lib::check_true($memory_3)) {goto label_71;}
#line 626
$memory_3 = $memory_2;
#line 626
$memory_3 = c_rt_lib::ov_is($memory_3, 'ensure');
#line 626
label_71:
#line 626
if (c_rt_lib::check_true($memory_3)) {goto label_70;}
#line 626
$memory_3 = $memory_2;
#line 626
$memory_3 = c_rt_lib::ov_is($memory_3, 'try');
#line 626
label_70:
#line 626
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 626
if (c_rt_lib::check_true($memory_3)) {goto label_69;}
#line 628
$memory_6 = "state";
#line 628
$memory_6 = c_rt_lib::get_ref_hash($memory_0, $memory_6);
#line 628
$memory_5 = ntokenizer::get_place_ws($memory_6);
#line 628
$memory_7 = "state";
#line 628
c_rt_lib::set_ref_hash($memory_0, $memory_7, $memory_6);
#line 628
undef($memory_7);
#line 628
undef($memory_6);
#line 628
$memory_4 = {begin => $memory_1,end => $memory_5,};
#line 628
undef($memory_5);
#line 632
$memory_6 = {debug => $memory_4,cmd => $memory_2,};
#line 632
$memory_5 = {cmd => $memory_6,};
#line 632
undef($memory_6);
#line 633
$memory_7 = "fora";
#line 633
$memory_6 = nparser_priv::try_eat($memory_0, $memory_7);
#line 633
undef($memory_7);
#line 633
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 633
if (c_rt_lib::check_true($memory_6)) {goto label_77;}
#line 634
$memory_7 = c_rt_lib::to_nl(1);
#line 634
$memory_8 = $memory_7;
#line 634
 if (c_rt_lib::get_hashcount($memory_5) > 1) {$memory_5 = {%{$memory_5}};}$memory_5->{'short'} = $memory_8;
#line 634
undef($memory_7);
#line 634
undef($memory_8);
#line 635
$memory_7 = nparser_priv::parse_var_decl_sim($memory_0);
#line 635
$memory_8 = $memory_7;
#line 635
 if (c_rt_lib::get_hashcount($memory_5) > 1) {$memory_5 = {%{$memory_5}};}$memory_5->{'iter'} = $memory_8;
#line 635
undef($memory_7);
#line 635
undef($memory_8);
#line 636
$memory_7 = "(";
#line 636
nparser_priv::eat($memory_0, $memory_7);
#line 636
undef($memory_7);
#line 637
$memory_8 = nparser_priv::parse_expr($memory_0);
#line 637
$memory_7 = c_rt_lib::ov_is($memory_8, 'ok');
#line 637
if (c_rt_lib::check_true($memory_7)) {goto label_78;}
#line 637
undef($memory_1);
#line 637
undef($memory_2);
#line 637
undef($memory_3);
#line 637
undef($memory_4);
#line 637
undef($memory_5);
#line 637
undef($memory_6);
#line 637
undef($memory_7);
#line 637
$_[0] = $memory_0;return $memory_8;
#line 637
label_78:
#line 637
$memory_9 = c_rt_lib::ov_as($memory_8, 'ok');
#line 637
 if (c_rt_lib::get_hashcount($memory_5) > 1) {$memory_5 = {%{$memory_5}};}$memory_5->{'array'} = $memory_9;
#line 637
undef($memory_7);
#line 637
undef($memory_8);
#line 637
undef($memory_9);
#line 638
$memory_7 = ")";
#line 638
nparser_priv::eat($memory_0, $memory_7);
#line 638
undef($memory_7);
#line 639
$memory_7 = c_rt_lib::ov_mk_arg('fora', $memory_5);
#line 639
$memory_2 = $memory_7;
#line 639
undef($memory_7);
#line 640
goto label_87;
#line 640
label_77:
#line 640
$memory_7 = "rep";
#line 640
$memory_6 = nparser_priv::try_eat($memory_0, $memory_7);
#line 640
undef($memory_7);
#line 640
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 640
if (c_rt_lib::check_true($memory_6)) {goto label_79;}
#line 641
$memory_7 = c_rt_lib::to_nl(1);
#line 641
$memory_8 = $memory_7;
#line 641
 if (c_rt_lib::get_hashcount($memory_5) > 1) {$memory_5 = {%{$memory_5}};}$memory_5->{'short'} = $memory_8;
#line 641
undef($memory_7);
#line 641
undef($memory_8);
#line 642
$memory_7 = nparser_priv::parse_var_decl_sim($memory_0);
#line 642
$memory_8 = $memory_7;
#line 642
 if (c_rt_lib::get_hashcount($memory_5) > 1) {$memory_5 = {%{$memory_5}};}$memory_5->{'iter'} = $memory_8;
#line 642
undef($memory_7);
#line 642
undef($memory_8);
#line 643
$memory_7 = "(";
#line 643
nparser_priv::eat($memory_0, $memory_7);
#line 643
undef($memory_7);
#line 644
$memory_8 = nparser_priv::parse_expr($memory_0);
#line 644
$memory_7 = c_rt_lib::ov_is($memory_8, 'ok');
#line 644
if (c_rt_lib::check_true($memory_7)) {goto label_80;}
#line 644
undef($memory_1);
#line 644
undef($memory_2);
#line 644
undef($memory_3);
#line 644
undef($memory_4);
#line 644
undef($memory_5);
#line 644
undef($memory_6);
#line 644
undef($memory_7);
#line 644
$_[0] = $memory_0;return $memory_8;
#line 644
label_80:
#line 644
$memory_9 = c_rt_lib::ov_as($memory_8, 'ok');
#line 644
 if (c_rt_lib::get_hashcount($memory_5) > 1) {$memory_5 = {%{$memory_5}};}$memory_5->{'count'} = $memory_9;
#line 644
undef($memory_7);
#line 644
undef($memory_8);
#line 644
undef($memory_9);
#line 645
$memory_7 = ")";
#line 645
nparser_priv::eat($memory_0, $memory_7);
#line 645
undef($memory_7);
#line 646
$memory_7 = c_rt_lib::ov_mk_arg('rep', $memory_5);
#line 646
$memory_2 = $memory_7;
#line 646
undef($memory_7);
#line 647
goto label_87;
#line 647
label_79:
#line 647
$memory_7 = "forh";
#line 647
$memory_6 = nparser_priv::try_eat($memory_0, $memory_7);
#line 647
undef($memory_7);
#line 647
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 647
if (c_rt_lib::check_true($memory_6)) {goto label_81;}
#line 648
$memory_7 = c_rt_lib::to_nl(1);
#line 648
$memory_8 = $memory_7;
#line 648
 if (c_rt_lib::get_hashcount($memory_5) > 1) {$memory_5 = {%{$memory_5}};}$memory_5->{'short'} = $memory_8;
#line 648
undef($memory_7);
#line 648
undef($memory_8);
#line 649
$memory_7 = nparser_priv::parse_var_decl_sim($memory_0);
#line 649
$memory_8 = $memory_7;
#line 649
 if (c_rt_lib::get_hashcount($memory_5) > 1) {$memory_5 = {%{$memory_5}};}$memory_5->{'key'} = $memory_8;
#line 649
undef($memory_7);
#line 649
undef($memory_8);
#line 650
$memory_7 = ",";
#line 650
nparser_priv::eat($memory_0, $memory_7);
#line 650
undef($memory_7);
#line 651
$memory_7 = nparser_priv::parse_var_decl_sim($memory_0);
#line 651
$memory_8 = $memory_7;
#line 651
 if (c_rt_lib::get_hashcount($memory_5) > 1) {$memory_5 = {%{$memory_5}};}$memory_5->{'val'} = $memory_8;
#line 651
undef($memory_7);
#line 651
undef($memory_8);
#line 652
$memory_7 = "(";
#line 652
nparser_priv::eat($memory_0, $memory_7);
#line 652
undef($memory_7);
#line 653
$memory_8 = nparser_priv::parse_expr($memory_0);
#line 653
$memory_7 = c_rt_lib::ov_is($memory_8, 'ok');
#line 653
if (c_rt_lib::check_true($memory_7)) {goto label_82;}
#line 653
undef($memory_1);
#line 653
undef($memory_2);
#line 653
undef($memory_3);
#line 653
undef($memory_4);
#line 653
undef($memory_5);
#line 653
undef($memory_6);
#line 653
undef($memory_7);
#line 653
$_[0] = $memory_0;return $memory_8;
#line 653
label_82:
#line 653
$memory_9 = c_rt_lib::ov_as($memory_8, 'ok');
#line 653
 if (c_rt_lib::get_hashcount($memory_5) > 1) {$memory_5 = {%{$memory_5}};}$memory_5->{'hash'} = $memory_9;
#line 653
undef($memory_7);
#line 653
undef($memory_8);
#line 653
undef($memory_9);
#line 654
$memory_7 = ")";
#line 654
nparser_priv::eat($memory_0, $memory_7);
#line 654
undef($memory_7);
#line 655
$memory_7 = c_rt_lib::ov_mk_arg('forh', $memory_5);
#line 655
$memory_2 = $memory_7;
#line 655
undef($memory_7);
#line 656
goto label_87;
#line 656
label_81:
#line 656
$memory_7 = "if";
#line 656
$memory_6 = nparser_priv::try_eat($memory_0, $memory_7);
#line 656
undef($memory_7);
#line 656
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 656
if (c_rt_lib::check_true($memory_6)) {goto label_83;}
#line 657
$memory_8 = nparser_priv::parse_expr($memory_0);
#line 657
$memory_7 = c_rt_lib::ov_is($memory_8, 'ok');
#line 657
if (c_rt_lib::check_true($memory_7)) {goto label_84;}
#line 657
undef($memory_1);
#line 657
undef($memory_2);
#line 657
undef($memory_3);
#line 657
undef($memory_4);
#line 657
undef($memory_5);
#line 657
undef($memory_6);
#line 657
undef($memory_7);
#line 657
$_[0] = $memory_0;return $memory_8;
#line 657
label_84:
#line 657
$memory_9 = c_rt_lib::ov_as($memory_8, 'ok');
#line 657
 if (c_rt_lib::get_hashcount($memory_5) > 1) {$memory_5 = {%{$memory_5}};}$memory_5->{'cond'} = $memory_9;
#line 657
undef($memory_7);
#line 657
undef($memory_8);
#line 657
undef($memory_9);
#line 658
$memory_7 = c_rt_lib::ov_mk_arg('if_mod', $memory_5);
#line 658
$memory_2 = $memory_7;
#line 658
undef($memory_7);
#line 659
goto label_87;
#line 659
label_83:
#line 659
$memory_7 = "unless";
#line 659
$memory_6 = nparser_priv::try_eat($memory_0, $memory_7);
#line 659
undef($memory_7);
#line 659
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 659
if (c_rt_lib::check_true($memory_6)) {goto label_85;}
#line 660
$memory_8 = nparser_priv::parse_expr($memory_0);
#line 660
$memory_7 = c_rt_lib::ov_is($memory_8, 'ok');
#line 660
if (c_rt_lib::check_true($memory_7)) {goto label_86;}
#line 660
undef($memory_1);
#line 660
undef($memory_2);
#line 660
undef($memory_3);
#line 660
undef($memory_4);
#line 660
undef($memory_5);
#line 660
undef($memory_6);
#line 660
undef($memory_7);
#line 660
$_[0] = $memory_0;return $memory_8;
#line 660
label_86:
#line 660
$memory_9 = c_rt_lib::ov_as($memory_8, 'ok');
#line 660
 if (c_rt_lib::get_hashcount($memory_5) > 1) {$memory_5 = {%{$memory_5}};}$memory_5->{'cond'} = $memory_9;
#line 660
undef($memory_7);
#line 660
undef($memory_8);
#line 660
undef($memory_9);
#line 661
$memory_7 = c_rt_lib::ov_mk_arg('unless_mod', $memory_5);
#line 661
$memory_2 = $memory_7;
#line 661
undef($memory_7);
#line 662
goto label_87;
#line 662
label_85:
#line 662
$memory_7 = "while";
#line 662
$memory_6 = nparser_priv::try_eat($memory_0, $memory_7);
#line 662
undef($memory_7);
#line 662
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 662
if (c_rt_lib::check_true($memory_6)) {goto label_87;}
#line 663
$memory_7 = c_rt_lib::to_nl(1);
#line 663
$memory_8 = $memory_7;
#line 663
 if (c_rt_lib::get_hashcount($memory_5) > 1) {$memory_5 = {%{$memory_5}};}$memory_5->{'short'} = $memory_8;
#line 663
undef($memory_7);
#line 663
undef($memory_8);
#line 664
$memory_8 = nparser_priv::parse_expr($memory_0);
#line 664
$memory_7 = c_rt_lib::ov_is($memory_8, 'ok');
#line 664
if (c_rt_lib::check_true($memory_7)) {goto label_88;}
#line 664
undef($memory_1);
#line 664
undef($memory_2);
#line 664
undef($memory_3);
#line 664
undef($memory_4);
#line 664
undef($memory_5);
#line 664
undef($memory_6);
#line 664
undef($memory_7);
#line 664
$_[0] = $memory_0;return $memory_8;
#line 664
label_88:
#line 664
$memory_9 = c_rt_lib::ov_as($memory_8, 'ok');
#line 664
 if (c_rt_lib::get_hashcount($memory_5) > 1) {$memory_5 = {%{$memory_5}};}$memory_5->{'cond'} = $memory_9;
#line 664
undef($memory_7);
#line 664
undef($memory_8);
#line 664
undef($memory_9);
#line 665
$memory_7 = c_rt_lib::ov_mk_arg('while', $memory_5);
#line 665
$memory_2 = $memory_7;
#line 665
undef($memory_7);
#line 666
goto label_87;
#line 666
label_87:
#line 666
undef($memory_6);
#line 667
$memory_6 = ";";
#line 667
nparser_priv::eat($memory_0, $memory_6);
#line 667
undef($memory_6);
#line 667
undef($memory_4);
#line 667
undef($memory_5);
#line 668
goto label_69;
#line 668
label_69:
#line 668
undef($memory_3);
#line 669
$memory_4 = "state";
#line 669
$memory_4 = c_rt_lib::get_ref_hash($memory_0, $memory_4);
#line 669
$memory_3 = ntokenizer::get_place_ws($memory_4);
#line 669
$memory_5 = "state";
#line 669
c_rt_lib::set_ref_hash($memory_0, $memory_5, $memory_4);
#line 669
undef($memory_5);
#line 669
undef($memory_4);
#line 670
$memory_4 = {begin => $memory_1,end => $memory_3,};
#line 674
$memory_5 = {cmd => $memory_2,debug => $memory_4,};
#line 674
$memory_5 = c_rt_lib::ov_mk_arg('ok', $memory_5);
#line 674
undef($memory_1);
#line 674
undef($memory_2);
#line 674
undef($memory_3);
#line 674
undef($memory_4);
#line 674
$_[0] = $memory_0;return $memory_5;
#line 674
undef($memory_5);
#line 674
undef($memory_1);
#line 674
undef($memory_2);
#line 674
undef($memory_3);
#line 674
undef($memory_4);
#line 674
$_[0] = $memory_0;return;
$_[0] = $memory_0;}
