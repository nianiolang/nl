use c_rt_lib;
use string;
use array;
use hash;
use boolean_t;
use ptd;
use nast;
use ntokenizer;
use singleton;
use compiler_lib;
sub nparser_priv::get_end_list;
sub nparser::parse_ret_t;
sub nparser::state_t;
sub nparser::try_value_t;
sub nparser::try_cmd_t;
sub nparser::sparse;
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
sub nparser_priv::get_value_nop;
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
sub nparser_priv::get_debug_from_begin;
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
	module => "compiler_lib",
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
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;
#line 25
$memory_2 = {
	module => "ntokenizer",
	name => "state_t",
};
#line 25
$memory_2 = c_rt_lib::ov_mk_arg('ref', $memory_2);
#line 25
$memory_3 = {
	module => "compiler_lib",
	name => "errors_t",
};
#line 25
$memory_3 = c_rt_lib::ov_mk_arg('ref', $memory_3);
#line 25
$memory_4 = ptd::sim();
#line 25
$memory_1 = {state => $memory_2,errors => $memory_3,module_name => $memory_4,};
#line 25
undef($memory_2);
#line 25
undef($memory_3);
#line 25
undef($memory_4);
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
#line 29
$memory_2 = {
	module => "nast",
	name => "value_t",
};
#line 29
$memory_2 = c_rt_lib::ov_mk_arg('ref', $memory_2);
#line 29
$memory_3 = ptd::sim();
#line 29
$memory_1 = {ok => $memory_2,err => $memory_3,};
#line 29
undef($memory_2);
#line 29
undef($memory_3);
#line 29
$memory_0 = ptd::var($memory_1);
#line 29
undef($memory_1);
#line 29
return $memory_0;
#line 29
undef($memory_0);
#line 29
return;
}

my $_try_value_t;
sub nparser::try_value_t() {
	$_try_value_t = nparser::__try_value_t() unless defined $_try_value_t;
	return $_try_value_t;
}

sub nparser::__try_cmd_t() {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;
#line 33
$memory_2 = {
	module => "nast",
	name => "cmd_t",
};
#line 33
$memory_2 = c_rt_lib::ov_mk_arg('ref', $memory_2);
#line 33
$memory_3 = ptd::sim();
#line 33
$memory_1 = {ok => $memory_2,err => $memory_3,};
#line 33
undef($memory_2);
#line 33
undef($memory_3);
#line 33
$memory_0 = ptd::var($memory_1);
#line 33
undef($memory_1);
#line 33
return $memory_0;
#line 33
undef($memory_0);
#line 33
return;
}

my $_try_cmd_t;
sub nparser::try_cmd_t() {
	$_try_cmd_t = nparser::__try_cmd_t() unless defined $_try_cmd_t;
	return $_try_cmd_t;
}

sub nparser::sparse($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;$memory_0 = $_[0];$memory_1 = $_[1];
#line 40
$memory_3 = [];
#line 40
$memory_4 = ntokenizer::init($memory_0);
#line 40
$memory_2 = {errors => $memory_3,state => $memory_4,module_name => $memory_1,};
#line 40
undef($memory_3);
#line 40
undef($memory_4);
#line 41
$memory_3 = nparser_priv::parse_module($memory_2, $memory_1);
#line 42
$memory_5 = $memory_2->{'errors'};
#line 42
$memory_4 = array::len($memory_5);
#line 42
undef($memory_5);
#line 42
$memory_5 = 0;
#line 42
$memory_4 = c_rt_lib::to_nl($memory_4 > $memory_5);
#line 42
undef($memory_5);
#line 42
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 42
if (c_rt_lib::check_true($memory_4)) {goto label_24;}
#line 42
$memory_5 = $memory_2->{'errors'};
#line 42
$memory_5 = c_rt_lib::ov_mk_arg('error', $memory_5);
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
return $memory_5;
#line 42
undef($memory_5);
#line 42
goto label_24;
#line 42
label_24:
#line 42
undef($memory_4);
#line 43
$memory_4 = c_rt_lib::ov_mk_arg('ok', $memory_3);
#line 43
undef($memory_0);
#line 43
undef($memory_1);
#line 43
undef($memory_2);
#line 43
undef($memory_3);
#line 43
return $memory_4;
#line 43
undef($memory_4);
#line 43
undef($memory_2);
#line 43
undef($memory_3);
#line 43
undef($memory_0);
#line 43
undef($memory_1);
#line 43
return;
}

sub nparser_priv::add_error($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];
#line 47
$memory_3 = $memory_0->{'state'};
#line 47
$memory_2 = ntokenizer::get_line($memory_3);
#line 47
undef($memory_3);
#line 48
$memory_4 = $memory_0->{'state'};
#line 48
$memory_3 = ntokenizer::get_column($memory_4);
#line 48
undef($memory_4);
#line 49
$memory_4 = "errors";
#line 49
$memory_4 = c_rt_lib::get_ref_hash($memory_0, $memory_4);
#line 49
$memory_6 = $memory_0->{'module_name'};
#line 49
$memory_7 = c_rt_lib::ov_mk_none('error');
#line 49
$memory_5 = {line => $memory_2,module => $memory_6,column => $memory_3,message => $memory_1,type => $memory_7,};
#line 49
undef($memory_6);
#line 49
undef($memory_7);
#line 49
array::push($memory_4, $memory_5);
#line 49
undef($memory_5);
#line 49
$memory_5 = "errors";
#line 49
c_rt_lib::set_ref_hash($memory_0, $memory_5, $memory_4);
#line 49
undef($memory_5);
#line 49
undef($memory_4);
#line 49
undef($memory_2);
#line 49
undef($memory_3);
#line 49
undef($memory_1);
#line 49
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub nparser_priv::eat($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];
#line 53
$memory_3 = "state";
#line 53
$memory_3 = c_rt_lib::get_ref_hash($memory_0, $memory_3);
#line 53
$memory_2 = ntokenizer::eat_token($memory_3, $memory_1);
#line 53
$memory_4 = "state";
#line 53
c_rt_lib::set_ref_hash($memory_0, $memory_4, $memory_3);
#line 53
undef($memory_4);
#line 53
undef($memory_3);
#line 53
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 53
if (c_rt_lib::check_true($memory_2)) {goto label_15;}
#line 53
$memory_3 = c_rt_lib::to_nl(1);
#line 53
undef($memory_1);
#line 53
undef($memory_2);
#line 53
$_[0] = $memory_0;return $memory_3;
#line 53
undef($memory_3);
#line 53
goto label_15;
#line 53
label_15:
#line 53
undef($memory_2);
#line 54
$memory_2 = "expected: ";
#line 54
$memory_2 = $memory_2 . $memory_1;
#line 54
$memory_3 = string::lf();
#line 54
$memory_2 = $memory_2 . $memory_3;
#line 54
undef($memory_3);
#line 54
$memory_4 = $memory_0->{'state'};
#line 54
$memory_3 = ntokenizer::info($memory_4);
#line 54
undef($memory_4);
#line 54
$memory_2 = $memory_2 . $memory_3;
#line 54
undef($memory_3);
#line 54
nparser_priv::add_error($memory_0, $memory_2);
#line 54
undef($memory_2);
#line 55
$memory_2 = c_rt_lib::to_nl(0);
#line 55
undef($memory_1);
#line 55
$_[0] = $memory_0;return $memory_2;
#line 55
undef($memory_2);
#line 55
undef($memory_1);
#line 55
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub nparser_priv::try_eat($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];
#line 59
$memory_3 = "state";
#line 59
$memory_3 = c_rt_lib::get_ref_hash($memory_0, $memory_3);
#line 59
$memory_2 = ntokenizer::eat_token($memory_3, $memory_1);
#line 59
$memory_4 = "state";
#line 59
c_rt_lib::set_ref_hash($memory_0, $memory_4, $memory_3);
#line 59
undef($memory_4);
#line 59
undef($memory_3);
#line 59
undef($memory_1);
#line 59
$_[0] = $memory_0;return $memory_2;
#line 59
undef($memory_2);
#line 59
undef($memory_1);
#line 59
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub nparser_priv::parse_module($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];
#line 63
$memory_3 = [];
#line 63
$memory_4 = [];
#line 63
$memory_5 = "";
#line 63
$memory_2 = {name => $memory_1,import => $memory_3,fun_def => $memory_4,stamp => $memory_5,};
#line 63
undef($memory_3);
#line 63
undef($memory_4);
#line 63
undef($memory_5);
#line 64
$memory_4 = $memory_0->{'state'};
#line 64
$memory_3 = ntokenizer::get_last_comment($memory_4);
#line 64
undef($memory_4);
#line 64
$memory_4 = $memory_3;
#line 64
 if (c_rt_lib::get_hashcount($memory_2) > 1) {$memory_2 = {%{$memory_2}};}$memory_2->{'stamp'} = $memory_4;
#line 64
undef($memory_3);
#line 64
undef($memory_4);
#line 65
label_14:
#line 65
$memory_4 = "use";
#line 65
$memory_3 = nparser_priv::try_eat($memory_0, $memory_4);
#line 65
undef($memory_4);
#line 65
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 65
if (c_rt_lib::check_true($memory_3)) {goto label_66;}
#line 66
$memory_5 = $memory_0->{'state'};
#line 66
$memory_4 = ntokenizer::get_line($memory_5);
#line 66
undef($memory_5);
#line 67
$memory_6 = "state";
#line 67
$memory_6 = c_rt_lib::get_ref_hash($memory_0, $memory_6);
#line 67
$memory_7 = c_rt_lib::ov_mk_none('word');
#line 67
$memory_5 = ntokenizer::is_type($memory_6, $memory_7);
#line 67
undef($memory_7);
#line 67
$memory_7 = "state";
#line 67
c_rt_lib::set_ref_hash($memory_0, $memory_7, $memory_6);
#line 67
undef($memory_7);
#line 67
undef($memory_6);
#line 67
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 67
if (c_rt_lib::check_true($memory_5)) {goto label_54;}
#line 68
$memory_6 = "import";
#line 68
$memory_6 = c_rt_lib::get_ref_hash($memory_2, $memory_6);
#line 68
$memory_9 = "state";
#line 68
$memory_9 = c_rt_lib::get_ref_hash($memory_0, $memory_9);
#line 68
$memory_10 = c_rt_lib::ov_mk_none('word');
#line 68
$memory_8 = ntokenizer::eat_type($memory_9, $memory_10);
#line 68
undef($memory_10);
#line 68
$memory_10 = "state";
#line 68
c_rt_lib::set_ref_hash($memory_0, $memory_10, $memory_9);
#line 68
undef($memory_10);
#line 68
undef($memory_9);
#line 68
$memory_7 = {name => $memory_8,line => $memory_4,};
#line 68
undef($memory_8);
#line 68
array::push($memory_6, $memory_7);
#line 68
undef($memory_7);
#line 68
$memory_7 = "import";
#line 68
c_rt_lib::set_ref_hash($memory_2, $memory_7, $memory_6);
#line 68
undef($memory_7);
#line 68
undef($memory_6);
#line 69
goto label_59;
#line 69
label_54:
#line 70
$memory_6 = "expected word as name of module";
#line 70
nparser_priv::add_error($memory_0, $memory_6);
#line 70
undef($memory_6);
#line 71
goto label_59;
#line 71
label_59:
#line 71
undef($memory_5);
#line 72
$memory_5 = ";";
#line 72
nparser_priv::eat($memory_0, $memory_5);
#line 72
undef($memory_5);
#line 72
undef($memory_4);
#line 73
goto label_14;
#line 73
label_66:
#line 73
undef($memory_3);
#line 74
label_68:
#line 74
$memory_4 = "state";
#line 74
$memory_4 = c_rt_lib::get_ref_hash($memory_0, $memory_4);
#line 74
$memory_5 = "def";
#line 74
$memory_3 = ntokenizer::next_is($memory_4, $memory_5);
#line 74
undef($memory_5);
#line 74
$memory_5 = "state";
#line 74
c_rt_lib::set_ref_hash($memory_0, $memory_5, $memory_4);
#line 74
undef($memory_5);
#line 74
undef($memory_4);
#line 74
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 74
if (c_rt_lib::check_true($memory_3)) {goto label_114;}
#line 75
$memory_4 = nparser_priv::parse_fun_def($memory_0, $memory_1);
#line 75
$memory_5 = c_rt_lib::ov_is($memory_4, 'ok');
#line 75
if (c_rt_lib::check_true($memory_5)) {goto label_88;}
#line 77
$memory_5 = c_rt_lib::ov_is($memory_4, 'err');
#line 77
if (c_rt_lib::check_true($memory_5)) {goto label_99;}
#line 77
$memory_5 = "NOMATCHALERT";
#line 77
$memory_5 = [$memory_5,$memory_4];
#line 77
die(dfile::ssave($memory_5));
#line 75
label_88:
#line 75
$memory_6 = c_rt_lib::ov_as($memory_4, 'ok');
#line 76
$memory_7 = "fun_def";
#line 76
$memory_7 = c_rt_lib::get_ref_hash($memory_2, $memory_7);
#line 76
array::push($memory_7, $memory_6);
#line 76
$memory_8 = "fun_def";
#line 76
c_rt_lib::set_ref_hash($memory_2, $memory_8, $memory_7);
#line 76
undef($memory_8);
#line 76
undef($memory_7);
#line 76
undef($memory_6);
#line 77
goto label_110;
#line 77
label_99:
#line 77
$memory_6 = c_rt_lib::ov_as($memory_4, 'err');
#line 78
nparser_priv::add_error($memory_0, $memory_6);
#line 79
undef($memory_1);
#line 79
undef($memory_3);
#line 79
undef($memory_4);
#line 79
undef($memory_5);
#line 79
undef($memory_6);
#line 79
$_[0] = $memory_0;return $memory_2;
#line 79
undef($memory_6);
#line 80
goto label_110;
#line 80
label_110:
#line 80
undef($memory_4);
#line 80
undef($memory_5);
#line 81
goto label_68;
#line 81
label_114:
#line 81
undef($memory_3);
#line 82
$memory_4 = "state";
#line 82
$memory_4 = c_rt_lib::get_ref_hash($memory_0, $memory_4);
#line 82
$memory_5 = c_rt_lib::ov_mk_none('end');
#line 82
$memory_3 = ntokenizer::is_type($memory_4, $memory_5);
#line 82
undef($memory_5);
#line 82
$memory_5 = "state";
#line 82
c_rt_lib::set_ref_hash($memory_0, $memory_5, $memory_4);
#line 82
undef($memory_5);
#line 82
undef($memory_4);
#line 82
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 82
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 82
if (c_rt_lib::check_true($memory_3)) {goto label_132;}
#line 82
$memory_4 = "expected function definition";
#line 82
nparser_priv::add_error($memory_0, $memory_4);
#line 82
undef($memory_4);
#line 82
goto label_132;
#line 82
label_132:
#line 82
undef($memory_3);
#line 83
undef($memory_1);
#line 83
$_[0] = $memory_0;return $memory_2;
#line 83
undef($memory_2);
#line 83
undef($memory_1);
#line 83
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
label_4:
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
if (c_rt_lib::check_true($memory_2)) {goto label_112;}
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
if (c_rt_lib::check_true($memory_4)) {goto label_35;}
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
goto label_35;
#line 94
label_35:
#line 94
undef($memory_4);
#line 95
$memory_5 = "state";
#line 95
$memory_5 = c_rt_lib::get_ref_hash($memory_0, $memory_5);
#line 95
$memory_6 = c_rt_lib::ov_mk_none('word');
#line 95
$memory_4 = ntokenizer::is_type($memory_5, $memory_6);
#line 95
undef($memory_6);
#line 95
$memory_6 = "state";
#line 95
c_rt_lib::set_ref_hash($memory_0, $memory_6, $memory_5);
#line 95
undef($memory_6);
#line 95
undef($memory_5);
#line 95
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 95
if (c_rt_lib::check_true($memory_4)) {goto label_62;}
#line 96
$memory_6 = "state";
#line 96
$memory_6 = c_rt_lib::get_ref_hash($memory_0, $memory_6);
#line 96
$memory_7 = c_rt_lib::ov_mk_none('word');
#line 96
$memory_5 = ntokenizer::eat_type($memory_6, $memory_7);
#line 96
undef($memory_7);
#line 96
$memory_7 = "state";
#line 96
c_rt_lib::set_ref_hash($memory_0, $memory_7, $memory_6);
#line 96
undef($memory_7);
#line 96
undef($memory_6);
#line 96
$memory_6 = $memory_5;
#line 96
 if (c_rt_lib::get_hashcount($memory_3) > 1) {$memory_3 = {%{$memory_3}};}$memory_3->{'name'} = $memory_6;
#line 96
undef($memory_5);
#line 96
undef($memory_6);
#line 97
goto label_67;
#line 97
label_62:
#line 98
$memory_5 = "word expected as fun arg name";
#line 98
nparser_priv::add_error($memory_0, $memory_5);
#line 98
undef($memory_5);
#line 99
goto label_67;
#line 99
label_67:
#line 99
undef($memory_4);
#line 100
$memory_5 = ":";
#line 100
$memory_4 = nparser_priv::try_eat($memory_0, $memory_5);
#line 100
undef($memory_5);
#line 100
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 100
if (c_rt_lib::check_true($memory_4)) {goto label_95;}
#line 101
$memory_7 = nparser_priv::parse_type($memory_0);
#line 101
$memory_6 = c_rt_lib::ov_is($memory_7, 'ok');
#line 101
if (c_rt_lib::check_true($memory_6)) {goto label_84;}
#line 101
undef($memory_1);
#line 101
undef($memory_2);
#line 101
undef($memory_3);
#line 101
undef($memory_4);
#line 101
undef($memory_5);
#line 101
undef($memory_6);
#line 101
$_[0] = $memory_0;return $memory_7;
#line 101
label_84:
#line 101
$memory_5 = c_rt_lib::ov_as($memory_7, 'ok');
#line 101
undef($memory_6);
#line 101
undef($memory_7);
#line 102
$memory_6 = c_rt_lib::ov_mk_arg('type', $memory_5);
#line 102
$memory_7 = $memory_6;
#line 102
 if (c_rt_lib::get_hashcount($memory_3) > 1) {$memory_3 = {%{$memory_3}};}$memory_3->{'type'} = $memory_7;
#line 102
undef($memory_6);
#line 102
undef($memory_7);
#line 102
undef($memory_5);
#line 103
goto label_95;
#line 103
label_95:
#line 103
undef($memory_4);
#line 104
array::push($memory_1, $memory_3);
#line 105
$memory_5 = ",";
#line 105
$memory_4 = nparser_priv::try_eat($memory_0, $memory_5);
#line 105
undef($memory_5);
#line 105
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 105
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 105
if (c_rt_lib::check_true($memory_4)) {goto label_108;}
#line 105
undef($memory_3);
#line 105
undef($memory_4);
#line 105
goto label_112;
#line 105
goto label_108;
#line 105
label_108:
#line 105
undef($memory_4);
#line 105
undef($memory_3);
#line 106
goto label_4;
#line 106
label_112:
#line 106
undef($memory_2);
#line 107
$memory_2 = ")";
#line 107
nparser_priv::eat($memory_0, $memory_2);
#line 107
undef($memory_2);
#line 108
$memory_2 = c_rt_lib::ov_mk_arg('ok', $memory_1);
#line 108
undef($memory_1);
#line 108
$_[0] = $memory_0;return $memory_2;
#line 108
undef($memory_2);
#line 108
undef($memory_1);
#line 108
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub nparser_priv::parse_fun_def($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];
#line 116
$memory_3 = c_rt_lib::ov_mk_none('none');
#line 117
$memory_5 = $memory_0->{'state'};
#line 117
$memory_4 = ntokenizer::get_line($memory_5);
#line 117
undef($memory_5);
#line 118
$memory_5 = [];
#line 119
$memory_6 = "";
#line 120
$memory_8 = nparser_priv::get_debug_from_begin($memory_0);
#line 120
$memory_9 = c_rt_lib::ov_mk_none('nop');
#line 120
$memory_7 = {debug => $memory_8,cmd => $memory_9,};
#line 120
undef($memory_8);
#line 120
undef($memory_9);
#line 121
$memory_8 = c_rt_lib::ov_mk_none('priv');
#line 121
$memory_2 = {ret_type => $memory_3,line => $memory_4,args => $memory_5,name => $memory_6,cmd => $memory_7,access => $memory_8,};
#line 121
undef($memory_3);
#line 121
undef($memory_4);
#line 121
undef($memory_5);
#line 121
undef($memory_6);
#line 121
undef($memory_7);
#line 121
undef($memory_8);
#line 123
$memory_3 = "def";
#line 123
nparser_priv::eat($memory_0, $memory_3);
#line 123
undef($memory_3);
#line 124
$memory_4 = nparser_priv::eat_text($memory_0);
#line 124
$memory_3 = c_rt_lib::ov_is($memory_4, 'ok');
#line 124
if (c_rt_lib::check_true($memory_3)) {goto label_29;}
#line 124
undef($memory_1);
#line 124
undef($memory_2);
#line 124
undef($memory_3);
#line 124
$_[0] = $memory_0;return $memory_4;
#line 124
label_29:
#line 124
$memory_5 = c_rt_lib::ov_as($memory_4, 'ok');
#line 124
 if (c_rt_lib::get_hashcount($memory_2) > 1) {$memory_2 = {%{$memory_2}};}$memory_2->{'name'} = $memory_5;
#line 124
undef($memory_3);
#line 124
undef($memory_4);
#line 124
undef($memory_5);
#line 125
$memory_4 = "::";
#line 125
$memory_3 = nparser_priv::try_eat($memory_0, $memory_4);
#line 125
undef($memory_4);
#line 125
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 125
if (c_rt_lib::check_true($memory_3)) {goto label_77;}
#line 126
$memory_4 = $memory_2->{'name'};
#line 126
$memory_4 = c_rt_lib::to_nl($memory_4 ne $memory_1);
#line 126
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 126
if (c_rt_lib::check_true($memory_4)) {goto label_55;}
#line 127
$memory_5 = "incorrect module name: ";
#line 127
$memory_6 = $memory_2->{'name'};
#line 127
$memory_5 = $memory_5 . $memory_6;
#line 127
undef($memory_6);
#line 127
$memory_6 = " of function, expected: ";
#line 127
$memory_5 = $memory_5 . $memory_6;
#line 127
undef($memory_6);
#line 127
$memory_5 = $memory_5 . $memory_1;
#line 127
nparser_priv::add_error($memory_0, $memory_5);
#line 127
undef($memory_5);
#line 128
goto label_55;
#line 128
label_55:
#line 128
undef($memory_4);
#line 129
$memory_5 = nparser_priv::eat_text($memory_0);
#line 129
$memory_4 = c_rt_lib::ov_is($memory_5, 'ok');
#line 129
if (c_rt_lib::check_true($memory_4)) {goto label_65;}
#line 129
undef($memory_1);
#line 129
undef($memory_2);
#line 129
undef($memory_3);
#line 129
undef($memory_4);
#line 129
$_[0] = $memory_0;return $memory_5;
#line 129
label_65:
#line 129
$memory_6 = c_rt_lib::ov_as($memory_5, 'ok');
#line 129
 if (c_rt_lib::get_hashcount($memory_2) > 1) {$memory_2 = {%{$memory_2}};}$memory_2->{'name'} = $memory_6;
#line 129
undef($memory_4);
#line 129
undef($memory_5);
#line 129
undef($memory_6);
#line 130
$memory_4 = c_rt_lib::ov_mk_none('pub');
#line 130
$memory_5 = $memory_4;
#line 130
 if (c_rt_lib::get_hashcount($memory_2) > 1) {$memory_2 = {%{$memory_2}};}$memory_2->{'access'} = $memory_5;
#line 130
undef($memory_4);
#line 130
undef($memory_5);
#line 131
goto label_77;
#line 131
label_77:
#line 131
undef($memory_3);
#line 132
$memory_4 = nparser_priv::parse_fun_arg_list($memory_0);
#line 132
$memory_3 = c_rt_lib::ov_is($memory_4, 'ok');
#line 132
if (c_rt_lib::check_true($memory_3)) {goto label_86;}
#line 132
undef($memory_1);
#line 132
undef($memory_2);
#line 132
undef($memory_3);
#line 132
$_[0] = $memory_0;return $memory_4;
#line 132
label_86:
#line 132
$memory_5 = c_rt_lib::ov_as($memory_4, 'ok');
#line 132
 if (c_rt_lib::get_hashcount($memory_2) > 1) {$memory_2 = {%{$memory_2}};}$memory_2->{'args'} = $memory_5;
#line 132
undef($memory_3);
#line 132
undef($memory_4);
#line 132
undef($memory_5);
#line 133
$memory_4 = "state";
#line 133
$memory_4 = c_rt_lib::get_ref_hash($memory_0, $memory_4);
#line 133
$memory_5 = ":";
#line 133
$memory_3 = ntokenizer::next_is($memory_4, $memory_5);
#line 133
undef($memory_5);
#line 133
$memory_5 = "state";
#line 133
c_rt_lib::set_ref_hash($memory_0, $memory_5, $memory_4);
#line 133
undef($memory_5);
#line 133
undef($memory_4);
#line 133
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 133
if (c_rt_lib::check_true($memory_3)) {goto label_126;}
#line 134
$memory_4 = ":";
#line 134
nparser_priv::eat($memory_0, $memory_4);
#line 134
undef($memory_4);
#line 135
$memory_6 = nparser_priv::parse_type($memory_0);
#line 135
$memory_5 = c_rt_lib::ov_is($memory_6, 'ok');
#line 135
if (c_rt_lib::check_true($memory_5)) {goto label_115;}
#line 135
undef($memory_1);
#line 135
undef($memory_2);
#line 135
undef($memory_3);
#line 135
undef($memory_4);
#line 135
undef($memory_5);
#line 135
$_[0] = $memory_0;return $memory_6;
#line 135
label_115:
#line 135
$memory_4 = c_rt_lib::ov_as($memory_6, 'ok');
#line 135
undef($memory_5);
#line 135
undef($memory_6);
#line 136
$memory_5 = c_rt_lib::ov_mk_arg('type', $memory_4);
#line 136
$memory_6 = $memory_5;
#line 136
 if (c_rt_lib::get_hashcount($memory_2) > 1) {$memory_2 = {%{$memory_2}};}$memory_2->{'ret_type'} = $memory_6;
#line 136
undef($memory_5);
#line 136
undef($memory_6);
#line 136
undef($memory_4);
#line 137
goto label_126;
#line 137
label_126:
#line 137
undef($memory_3);
#line 138
$memory_4 = nparser_priv::parse_block($memory_0);
#line 138
$memory_3 = c_rt_lib::ov_is($memory_4, 'ok');
#line 138
if (c_rt_lib::check_true($memory_3)) {goto label_135;}
#line 138
undef($memory_1);
#line 138
undef($memory_2);
#line 138
undef($memory_3);
#line 138
$_[0] = $memory_0;return $memory_4;
#line 138
label_135:
#line 138
$memory_5 = c_rt_lib::ov_as($memory_4, 'ok');
#line 138
 if (c_rt_lib::get_hashcount($memory_2) > 1) {$memory_2 = {%{$memory_2}};}$memory_2->{'cmd'} = $memory_5;
#line 138
undef($memory_3);
#line 138
undef($memory_4);
#line 138
undef($memory_5);
#line 139
$memory_3 = c_rt_lib::ov_mk_arg('ok', $memory_2);
#line 139
undef($memory_1);
#line 139
undef($memory_2);
#line 139
$_[0] = $memory_0;return $memory_3;
#line 139
undef($memory_3);
#line 139
undef($memory_2);
#line 139
undef($memory_1);
#line 139
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub nparser_priv::parse_fun_val_arg_list($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);
#line 146
$memory_1 = [];
#line 147
label_1:
#line 147
$memory_3 = "state";
#line 147
$memory_3 = c_rt_lib::get_ref_hash($memory_0, $memory_3);
#line 147
$memory_4 = ")";
#line 147
$memory_2 = ntokenizer::next_is($memory_3, $memory_4);
#line 147
undef($memory_4);
#line 147
$memory_4 = "state";
#line 147
c_rt_lib::set_ref_hash($memory_0, $memory_4, $memory_3);
#line 147
undef($memory_4);
#line 147
undef($memory_3);
#line 147
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 147
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 147
if (c_rt_lib::check_true($memory_2)) {goto label_41;}
#line 148
$memory_5 = nparser_priv::parse_fun_val_arg($memory_0);
#line 148
$memory_4 = c_rt_lib::ov_is($memory_5, 'ok');
#line 148
if (c_rt_lib::check_true($memory_4)) {goto label_22;}
#line 148
undef($memory_1);
#line 148
undef($memory_2);
#line 148
undef($memory_3);
#line 148
undef($memory_4);
#line 148
$_[0] = $memory_0;return $memory_5;
#line 148
label_22:
#line 148
$memory_3 = c_rt_lib::ov_as($memory_5, 'ok');
#line 148
undef($memory_4);
#line 148
undef($memory_5);
#line 149
array::push($memory_1, $memory_3);
#line 150
$memory_5 = ",";
#line 150
$memory_4 = nparser_priv::try_eat($memory_0, $memory_5);
#line 150
undef($memory_5);
#line 150
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 150
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 150
if (c_rt_lib::check_true($memory_4)) {goto label_37;}
#line 150
undef($memory_3);
#line 150
undef($memory_4);
#line 150
goto label_41;
#line 150
goto label_37;
#line 150
label_37:
#line 150
undef($memory_4);
#line 150
undef($memory_3);
#line 151
goto label_1;
#line 151
label_41:
#line 151
undef($memory_2);
#line 152
$memory_2 = ")";
#line 152
nparser_priv::eat($memory_0, $memory_2);
#line 152
undef($memory_2);
#line 153
$memory_2 = c_rt_lib::ov_mk_arg('ok', $memory_1);
#line 153
undef($memory_1);
#line 153
$_[0] = $memory_0;return $memory_2;
#line 153
undef($memory_2);
#line 153
undef($memory_1);
#line 153
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub nparser_priv::parse_expr_list($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);
#line 157
$memory_1 = [];
#line 158
label_1:
#line 158
$memory_3 = "state";
#line 158
$memory_3 = c_rt_lib::get_ref_hash($memory_0, $memory_3);
#line 158
$memory_4 = ")";
#line 158
$memory_2 = ntokenizer::next_is($memory_3, $memory_4);
#line 158
undef($memory_4);
#line 158
$memory_4 = "state";
#line 158
c_rt_lib::set_ref_hash($memory_0, $memory_4, $memory_3);
#line 158
undef($memory_4);
#line 158
undef($memory_3);
#line 158
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 158
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 158
if (c_rt_lib::check_true($memory_2)) {goto label_41;}
#line 159
$memory_5 = nparser_priv::parse_expr($memory_0);
#line 159
$memory_4 = c_rt_lib::ov_is($memory_5, 'ok');
#line 159
if (c_rt_lib::check_true($memory_4)) {goto label_22;}
#line 159
undef($memory_1);
#line 159
undef($memory_2);
#line 159
undef($memory_3);
#line 159
undef($memory_4);
#line 159
$_[0] = $memory_0;return $memory_5;
#line 159
label_22:
#line 159
$memory_3 = c_rt_lib::ov_as($memory_5, 'ok');
#line 159
undef($memory_4);
#line 159
undef($memory_5);
#line 160
array::push($memory_1, $memory_3);
#line 161
$memory_5 = ",";
#line 161
$memory_4 = nparser_priv::try_eat($memory_0, $memory_5);
#line 161
undef($memory_5);
#line 161
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 161
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 161
if (c_rt_lib::check_true($memory_4)) {goto label_37;}
#line 161
undef($memory_3);
#line 161
undef($memory_4);
#line 161
goto label_41;
#line 161
goto label_37;
#line 161
label_37:
#line 161
undef($memory_4);
#line 161
undef($memory_3);
#line 162
goto label_1;
#line 162
label_41:
#line 162
undef($memory_2);
#line 163
$memory_2 = ")";
#line 163
nparser_priv::eat($memory_0, $memory_2);
#line 163
undef($memory_2);
#line 164
$memory_2 = c_rt_lib::ov_mk_arg('ok', $memory_1);
#line 164
undef($memory_1);
#line 164
$_[0] = $memory_0;return $memory_2;
#line 164
undef($memory_2);
#line 164
undef($memory_1);
#line 164
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub nparser_priv::parse_fun_val_arg($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);
#line 168
$memory_1 = {};
#line 169
$memory_3 = "ref";
#line 169
$memory_2 = nparser_priv::try_eat($memory_0, $memory_3);
#line 169
undef($memory_3);
#line 169
if (c_rt_lib::check_true($memory_2)) {goto label_7;}
#line 169
$memory_2 = c_rt_lib::ov_mk_none('none');
#line 169
goto label_9;
#line 169
label_7:
#line 169
$memory_2 = c_rt_lib::ov_mk_none('ref');
#line 169
label_9:
#line 169
$memory_3 = $memory_2;
#line 169
 if (c_rt_lib::get_hashcount($memory_1) > 1) {$memory_1 = {%{$memory_1}};}$memory_1->{'mod'} = $memory_3;
#line 169
undef($memory_2);
#line 169
undef($memory_3);
#line 170
$memory_3 = nparser_priv::parse_expr($memory_0);
#line 170
$memory_2 = c_rt_lib::ov_is($memory_3, 'ok');
#line 170
if (c_rt_lib::check_true($memory_2)) {goto label_20;}
#line 170
undef($memory_1);
#line 170
undef($memory_2);
#line 170
$_[0] = $memory_0;return $memory_3;
#line 170
label_20:
#line 170
$memory_4 = c_rt_lib::ov_as($memory_3, 'ok');
#line 170
 if (c_rt_lib::get_hashcount($memory_1) > 1) {$memory_1 = {%{$memory_1}};}$memory_1->{'val'} = $memory_4;
#line 170
undef($memory_2);
#line 170
undef($memory_3);
#line 170
undef($memory_4);
#line 171
$memory_2 = c_rt_lib::ov_mk_arg('ok', $memory_1);
#line 171
undef($memory_1);
#line 171
$_[0] = $memory_0;return $memory_2;
#line 171
undef($memory_2);
#line 171
undef($memory_1);
#line 171
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub nparser_priv::parse_fun_label($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);
#line 175
$memory_2 = "";
#line 175
$memory_3 = "";
#line 175
$memory_1 = {name => $memory_2,module => $memory_3,};
#line 175
undef($memory_2);
#line 175
undef($memory_3);
#line 176
$memory_3 = "state";
#line 176
$memory_3 = c_rt_lib::get_ref_hash($memory_0, $memory_3);
#line 176
$memory_4 = c_rt_lib::ov_mk_none('word');
#line 176
$memory_2 = ntokenizer::is_type($memory_3, $memory_4);
#line 176
undef($memory_4);
#line 176
$memory_4 = "state";
#line 176
c_rt_lib::set_ref_hash($memory_0, $memory_4, $memory_3);
#line 176
undef($memory_4);
#line 176
undef($memory_3);
#line 176
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 176
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 176
if (c_rt_lib::check_true($memory_2)) {goto label_23;}
#line 177
$memory_3 = "after '\@' module name of function expacted";
#line 177
nparser_priv::add_error($memory_0, $memory_3);
#line 177
undef($memory_3);
#line 178
undef($memory_2);
#line 178
$_[0] = $memory_0;return $memory_1;
#line 179
goto label_23;
#line 179
label_23:
#line 179
undef($memory_2);
#line 180
$memory_3 = "state";
#line 180
$memory_3 = c_rt_lib::get_ref_hash($memory_0, $memory_3);
#line 180
$memory_4 = c_rt_lib::ov_mk_none('word');
#line 180
$memory_2 = ntokenizer::eat_type($memory_3, $memory_4);
#line 180
undef($memory_4);
#line 180
$memory_4 = "state";
#line 180
c_rt_lib::set_ref_hash($memory_0, $memory_4, $memory_3);
#line 180
undef($memory_4);
#line 180
undef($memory_3);
#line 180
$memory_3 = $memory_2;
#line 180
 if (c_rt_lib::get_hashcount($memory_1) > 1) {$memory_1 = {%{$memory_1}};}$memory_1->{'module'} = $memory_3;
#line 180
undef($memory_2);
#line 180
undef($memory_3);
#line 181
$memory_4 = "::";
#line 181
$memory_2 = nparser_priv::try_eat($memory_0, $memory_4);
#line 181
undef($memory_4);
#line 181
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 181
if (c_rt_lib::check_true($memory_3)) {goto label_50;}
#line 181
$memory_4 = "state";
#line 181
$memory_4 = c_rt_lib::get_ref_hash($memory_0, $memory_4);
#line 181
$memory_2 = ntokenizer::is_text($memory_4);
#line 181
$memory_5 = "state";
#line 181
c_rt_lib::set_ref_hash($memory_0, $memory_5, $memory_4);
#line 181
undef($memory_5);
#line 181
undef($memory_4);
#line 181
label_50:
#line 181
undef($memory_3);
#line 181
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 181
if (c_rt_lib::check_true($memory_2)) {goto label_66;}
#line 182
$memory_4 = "state";
#line 182
$memory_4 = c_rt_lib::get_ref_hash($memory_0, $memory_4);
#line 182
$memory_3 = ntokenizer::eat_text($memory_4);
#line 182
$memory_5 = "state";
#line 182
c_rt_lib::set_ref_hash($memory_0, $memory_5, $memory_4);
#line 182
undef($memory_5);
#line 182
undef($memory_4);
#line 182
$memory_4 = $memory_3;
#line 182
 if (c_rt_lib::get_hashcount($memory_1) > 1) {$memory_1 = {%{$memory_1}};}$memory_1->{'name'} = $memory_4;
#line 182
undef($memory_3);
#line 182
undef($memory_4);
#line 183
goto label_71;
#line 183
label_66:
#line 184
$memory_3 = "reference of function can be taken only to public function";
#line 184
nparser_priv::add_error($memory_0, $memory_3);
#line 184
undef($memory_3);
#line 185
goto label_71;
#line 185
label_71:
#line 185
undef($memory_2);
#line 186
$_[0] = $memory_0;return $memory_1;
#line 186
undef($memory_1);
#line 186
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub nparser_priv::parse_label($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);
#line 193
$memory_2 = "state";
#line 193
$memory_2 = c_rt_lib::get_ref_hash($memory_0, $memory_2);
#line 193
$memory_3 = c_rt_lib::ov_mk_none('word');
#line 193
$memory_1 = ntokenizer::eat_type($memory_2, $memory_3);
#line 193
undef($memory_3);
#line 193
$memory_3 = "state";
#line 193
c_rt_lib::set_ref_hash($memory_0, $memory_3, $memory_2);
#line 193
undef($memory_3);
#line 193
undef($memory_2);
#line 195
$memory_4 = "state";
#line 195
$memory_4 = c_rt_lib::get_ref_hash($memory_0, $memory_4);
#line 195
$memory_5 = "(";
#line 195
$memory_2 = ntokenizer::next_is($memory_4, $memory_5);
#line 195
undef($memory_5);
#line 195
$memory_5 = "state";
#line 195
c_rt_lib::set_ref_hash($memory_0, $memory_5, $memory_4);
#line 195
undef($memory_5);
#line 195
undef($memory_4);
#line 195
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 195
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 195
if (c_rt_lib::check_true($memory_3)) {goto label_31;}
#line 195
$memory_4 = "state";
#line 195
$memory_4 = c_rt_lib::get_ref_hash($memory_0, $memory_4);
#line 195
$memory_5 = "::";
#line 195
$memory_2 = ntokenizer::next_is($memory_4, $memory_5);
#line 195
undef($memory_5);
#line 195
$memory_5 = "state";
#line 195
c_rt_lib::set_ref_hash($memory_0, $memory_5, $memory_4);
#line 195
undef($memory_5);
#line 195
undef($memory_4);
#line 195
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 195
label_31:
#line 195
undef($memory_3);
#line 195
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 195
if (c_rt_lib::check_true($memory_2)) {goto label_42;}
#line 194
$memory_3 = c_rt_lib::ov_mk_arg('var', $memory_1);
#line 194
$memory_3 = c_rt_lib::ov_mk_arg('ok', $memory_3);
#line 194
undef($memory_1);
#line 194
undef($memory_2);
#line 194
$_[0] = $memory_0;return $memory_3;
#line 194
undef($memory_3);
#line 194
goto label_42;
#line 194
label_42:
#line 194
undef($memory_2);
#line 196
$memory_3 = "";
#line 196
$memory_4 = "";
#line 196
$memory_5 = [];
#line 196
$memory_2 = {module => $memory_3,name => $memory_4,args => $memory_5,};
#line 196
undef($memory_3);
#line 196
undef($memory_4);
#line 196
undef($memory_5);
#line 197
$memory_4 = "::";
#line 197
$memory_3 = nparser_priv::try_eat($memory_0, $memory_4);
#line 197
undef($memory_4);
#line 197
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 197
if (c_rt_lib::check_true($memory_3)) {goto label_74;}
#line 198
$memory_4 = $memory_1;
#line 198
 if (c_rt_lib::get_hashcount($memory_2) > 1) {$memory_2 = {%{$memory_2}};}$memory_2->{'module'} = $memory_4;
#line 198
undef($memory_4);
#line 199
$memory_5 = nparser_priv::eat_text($memory_0);
#line 199
$memory_4 = c_rt_lib::ov_is($memory_5, 'ok');
#line 199
if (c_rt_lib::check_true($memory_4)) {goto label_67;}
#line 199
undef($memory_1);
#line 199
undef($memory_2);
#line 199
undef($memory_3);
#line 199
undef($memory_4);
#line 199
$_[0] = $memory_0;return $memory_5;
#line 199
label_67:
#line 199
$memory_6 = c_rt_lib::ov_as($memory_5, 'ok');
#line 199
 if (c_rt_lib::get_hashcount($memory_2) > 1) {$memory_2 = {%{$memory_2}};}$memory_2->{'name'} = $memory_6;
#line 199
undef($memory_4);
#line 199
undef($memory_5);
#line 199
undef($memory_6);
#line 200
goto label_79;
#line 200
label_74:
#line 201
$memory_4 = $memory_1;
#line 201
 if (c_rt_lib::get_hashcount($memory_2) > 1) {$memory_2 = {%{$memory_2}};}$memory_2->{'name'} = $memory_4;
#line 201
undef($memory_4);
#line 202
goto label_79;
#line 202
label_79:
#line 202
undef($memory_3);
#line 203
$memory_3 = "(";
#line 203
nparser_priv::eat($memory_0, $memory_3);
#line 203
undef($memory_3);
#line 204
$memory_4 = nparser_priv::parse_fun_val_arg_list($memory_0);
#line 204
$memory_3 = c_rt_lib::ov_is($memory_4, 'ok');
#line 204
if (c_rt_lib::check_true($memory_3)) {goto label_91;}
#line 204
undef($memory_1);
#line 204
undef($memory_2);
#line 204
undef($memory_3);
#line 204
$_[0] = $memory_0;return $memory_4;
#line 204
label_91:
#line 204
$memory_5 = c_rt_lib::ov_as($memory_4, 'ok');
#line 204
 if (c_rt_lib::get_hashcount($memory_2) > 1) {$memory_2 = {%{$memory_2}};}$memory_2->{'args'} = $memory_5;
#line 204
undef($memory_3);
#line 204
undef($memory_4);
#line 204
undef($memory_5);
#line 205
$memory_3 = c_rt_lib::ov_mk_arg('fun_val', $memory_2);
#line 205
$memory_3 = c_rt_lib::ov_mk_arg('ok', $memory_3);
#line 205
undef($memory_1);
#line 205
undef($memory_2);
#line 205
$_[0] = $memory_0;return $memory_3;
#line 205
undef($memory_3);
#line 205
undef($memory_1);
#line 205
undef($memory_2);
#line 205
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub nparser_priv::parse_hash_key($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);
#line 209
$memory_2 = "state";
#line 209
$memory_2 = c_rt_lib::get_ref_hash($memory_0, $memory_2);
#line 209
$memory_1 = ntokenizer::get_place($memory_2);
#line 209
$memory_3 = "state";
#line 209
c_rt_lib::set_ref_hash($memory_0, $memory_3, $memory_2);
#line 209
undef($memory_3);
#line 209
undef($memory_2);
#line 210
$memory_2 = "";
#line 210
$memory_2 = c_rt_lib::ov_mk_arg('hash_key', $memory_2);
#line 211
$memory_4 = "state";
#line 211
$memory_4 = c_rt_lib::get_ref_hash($memory_0, $memory_4);
#line 211
$memory_3 = ntokenizer::is_text($memory_4);
#line 211
$memory_5 = "state";
#line 211
c_rt_lib::set_ref_hash($memory_0, $memory_5, $memory_4);
#line 211
undef($memory_5);
#line 211
undef($memory_4);
#line 211
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 211
if (c_rt_lib::check_true($memory_3)) {goto label_29;}
#line 212
$memory_5 = "state";
#line 212
$memory_5 = c_rt_lib::get_ref_hash($memory_0, $memory_5);
#line 212
$memory_4 = ntokenizer::eat_text($memory_5);
#line 212
$memory_6 = "state";
#line 212
c_rt_lib::set_ref_hash($memory_0, $memory_6, $memory_5);
#line 212
undef($memory_6);
#line 212
undef($memory_5);
#line 212
$memory_4 = c_rt_lib::ov_mk_arg('hash_key', $memory_4);
#line 212
$memory_2 = $memory_4;
#line 212
undef($memory_4);
#line 213
goto label_54;
#line 213
label_29:
#line 213
$memory_4 = "state";
#line 213
$memory_4 = c_rt_lib::get_ref_hash($memory_0, $memory_4);
#line 213
$memory_5 = c_rt_lib::ov_mk_none('string');
#line 213
$memory_3 = ntokenizer::is_type($memory_4, $memory_5);
#line 213
undef($memory_5);
#line 213
$memory_5 = "state";
#line 213
c_rt_lib::set_ref_hash($memory_0, $memory_5, $memory_4);
#line 213
undef($memory_5);
#line 213
undef($memory_4);
#line 213
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 213
if (c_rt_lib::check_true($memory_3)) {goto label_54;}
#line 214
$memory_5 = "state";
#line 214
$memory_5 = c_rt_lib::get_ref_hash($memory_0, $memory_5);
#line 214
$memory_6 = c_rt_lib::ov_mk_none('string');
#line 214
$memory_4 = ntokenizer::eat_type($memory_5, $memory_6);
#line 214
undef($memory_6);
#line 214
$memory_6 = "state";
#line 214
c_rt_lib::set_ref_hash($memory_0, $memory_6, $memory_5);
#line 214
undef($memory_6);
#line 214
undef($memory_5);
#line 214
$memory_4 = c_rt_lib::ov_mk_arg('hash_key', $memory_4);
#line 214
$memory_2 = $memory_4;
#line 214
undef($memory_4);
#line 215
goto label_54;
#line 215
label_54:
#line 215
undef($memory_3);
#line 217
$memory_6 = "state";
#line 217
$memory_6 = c_rt_lib::get_ref_hash($memory_0, $memory_6);
#line 217
$memory_5 = ntokenizer::get_place($memory_6);
#line 217
$memory_7 = "state";
#line 217
c_rt_lib::set_ref_hash($memory_0, $memory_7, $memory_6);
#line 217
undef($memory_7);
#line 217
undef($memory_6);
#line 217
$memory_4 = {begin => $memory_1,end => $memory_5,};
#line 217
undef($memory_5);
#line 217
$memory_3 = {debug => $memory_4,value => $memory_2,};
#line 217
undef($memory_4);
#line 217
undef($memory_1);
#line 217
undef($memory_2);
#line 217
$_[0] = $memory_0;return $memory_3;
#line 217
undef($memory_3);
#line 217
undef($memory_1);
#line 217
undef($memory_2);
#line 217
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub nparser_priv::parse_hash($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);
#line 223
$memory_1 = [];
#line 224
$memory_2 = "{";
#line 224
nparser_priv::eat($memory_0, $memory_2);
#line 224
undef($memory_2);
#line 225
label_4:
#line 225
$memory_3 = "state";
#line 225
$memory_3 = c_rt_lib::get_ref_hash($memory_0, $memory_3);
#line 225
$memory_4 = "}";
#line 225
$memory_2 = ntokenizer::next_is($memory_3, $memory_4);
#line 225
undef($memory_4);
#line 225
$memory_4 = "state";
#line 225
c_rt_lib::set_ref_hash($memory_0, $memory_4, $memory_3);
#line 225
undef($memory_4);
#line 225
undef($memory_3);
#line 225
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 225
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 225
if (c_rt_lib::check_true($memory_2)) {goto label_53;}
#line 226
$memory_3 = nparser_priv::parse_hash_key($memory_0);
#line 227
$memory_4 = "=>";
#line 227
nparser_priv::eat($memory_0, $memory_4);
#line 227
undef($memory_4);
#line 228
$memory_6 = nparser_priv::parse_expr($memory_0);
#line 228
$memory_5 = c_rt_lib::ov_is($memory_6, 'ok');
#line 228
if (c_rt_lib::check_true($memory_5)) {goto label_30;}
#line 228
undef($memory_1);
#line 228
undef($memory_2);
#line 228
undef($memory_3);
#line 228
undef($memory_4);
#line 228
undef($memory_5);
#line 228
$_[0] = $memory_0;return $memory_6;
#line 228
label_30:
#line 228
$memory_4 = c_rt_lib::ov_as($memory_6, 'ok');
#line 228
undef($memory_5);
#line 228
undef($memory_6);
#line 229
$memory_5 = {key => $memory_3,val => $memory_4,};
#line 229
array::push($memory_1, $memory_5);
#line 229
undef($memory_5);
#line 230
$memory_6 = ",";
#line 230
$memory_5 = nparser_priv::try_eat($memory_0, $memory_6);
#line 230
undef($memory_6);
#line 230
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 230
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 230
if (c_rt_lib::check_true($memory_5)) {goto label_48;}
#line 230
undef($memory_3);
#line 230
undef($memory_4);
#line 230
undef($memory_5);
#line 230
goto label_53;
#line 230
goto label_48;
#line 230
label_48:
#line 230
undef($memory_5);
#line 230
undef($memory_3);
#line 230
undef($memory_4);
#line 231
goto label_4;
#line 231
label_53:
#line 231
undef($memory_2);
#line 232
$memory_2 = "}";
#line 232
nparser_priv::eat($memory_0, $memory_2);
#line 232
undef($memory_2);
#line 233
$memory_2 = c_rt_lib::ov_mk_arg('ok', $memory_1);
#line 233
undef($memory_1);
#line 233
$_[0] = $memory_0;return $memory_2;
#line 233
undef($memory_2);
#line 233
undef($memory_1);
#line 233
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub nparser_priv::parse_arr($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);
#line 237
$memory_1 = [];
#line 238
$memory_2 = "[";
#line 238
nparser_priv::eat($memory_0, $memory_2);
#line 238
undef($memory_2);
#line 239
label_4:
#line 239
$memory_3 = "state";
#line 239
$memory_3 = c_rt_lib::get_ref_hash($memory_0, $memory_3);
#line 239
$memory_4 = "]";
#line 239
$memory_2 = ntokenizer::next_is($memory_3, $memory_4);
#line 239
undef($memory_4);
#line 239
$memory_4 = "state";
#line 239
c_rt_lib::set_ref_hash($memory_0, $memory_4, $memory_3);
#line 239
undef($memory_4);
#line 239
undef($memory_3);
#line 239
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 239
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 239
if (c_rt_lib::check_true($memory_2)) {goto label_44;}
#line 240
$memory_5 = nparser_priv::parse_expr($memory_0);
#line 240
$memory_4 = c_rt_lib::ov_is($memory_5, 'ok');
#line 240
if (c_rt_lib::check_true($memory_4)) {goto label_25;}
#line 240
undef($memory_1);
#line 240
undef($memory_2);
#line 240
undef($memory_3);
#line 240
undef($memory_4);
#line 240
$_[0] = $memory_0;return $memory_5;
#line 240
label_25:
#line 240
$memory_3 = c_rt_lib::ov_as($memory_5, 'ok');
#line 240
undef($memory_4);
#line 240
undef($memory_5);
#line 241
array::push($memory_1, $memory_3);
#line 242
$memory_5 = ",";
#line 242
$memory_4 = nparser_priv::try_eat($memory_0, $memory_5);
#line 242
undef($memory_5);
#line 242
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 242
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 242
if (c_rt_lib::check_true($memory_4)) {goto label_40;}
#line 242
undef($memory_3);
#line 242
undef($memory_4);
#line 242
goto label_44;
#line 242
goto label_40;
#line 242
label_40:
#line 242
undef($memory_4);
#line 242
undef($memory_3);
#line 243
goto label_4;
#line 243
label_44:
#line 243
undef($memory_2);
#line 244
$memory_2 = "]";
#line 244
nparser_priv::eat($memory_0, $memory_2);
#line 244
undef($memory_2);
#line 245
$memory_2 = c_rt_lib::ov_mk_arg('ok', $memory_1);
#line 245
undef($memory_1);
#line 245
$_[0] = $memory_0;return $memory_2;
#line 245
undef($memory_2);
#line 245
undef($memory_1);
#line 245
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub nparser_priv::parse_expr($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);
#line 249
$memory_4 = 0;
#line 249
$memory_3 = nparser_priv::parse_expr_rec($memory_0, $memory_4);
#line 249
undef($memory_4);
#line 249
$memory_2 = c_rt_lib::ov_is($memory_3, 'ok');
#line 249
if (c_rt_lib::check_true($memory_2)) {goto label_8;}
#line 249
undef($memory_1);
#line 249
undef($memory_2);
#line 249
$_[0] = $memory_0;return $memory_3;
#line 249
label_8:
#line 249
$memory_1 = c_rt_lib::ov_as($memory_3, 'ok');
#line 249
undef($memory_2);
#line 249
undef($memory_3);
#line 250
$memory_3 = 0;
#line 250
$memory_2 = nparser_priv::parse_expr_rec_left($memory_0, $memory_1, $memory_3);
#line 250
undef($memory_3);
#line 250
undef($memory_1);
#line 250
$_[0] = $memory_0;return $memory_2;
#line 250
undef($memory_2);
#line 250
undef($memory_1);
#line 250
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub nparser_priv::parse_type($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);
#line 254
$memory_2 = "state";
#line 254
$memory_2 = c_rt_lib::get_ref_hash($memory_0, $memory_2);
#line 254
$memory_1 = ntokenizer::get_place($memory_2);
#line 254
$memory_3 = "state";
#line 254
c_rt_lib::set_ref_hash($memory_0, $memory_3, $memory_2);
#line 254
undef($memory_3);
#line 254
undef($memory_2);
#line 255
$memory_3 = "\@";
#line 255
$memory_2 = nparser_priv::try_eat($memory_0, $memory_3);
#line 255
undef($memory_3);
#line 255
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 255
if (c_rt_lib::check_true($memory_2)) {goto label_60;}
#line 256
$memory_4 = "state";
#line 256
$memory_4 = c_rt_lib::get_ref_hash($memory_0, $memory_4);
#line 256
$memory_3 = ntokenizer::get_place($memory_4);
#line 256
$memory_5 = "state";
#line 256
c_rt_lib::set_ref_hash($memory_0, $memory_5, $memory_4);
#line 256
undef($memory_5);
#line 256
undef($memory_4);
#line 257
$memory_4 = nparser_priv::parse_fun_label($memory_0);
#line 257
$memory_4 = c_rt_lib::ov_mk_arg('fun_label', $memory_4);
#line 258
$memory_6 = "state";
#line 258
$memory_6 = c_rt_lib::get_ref_hash($memory_0, $memory_6);
#line 258
$memory_5 = ntokenizer::get_place($memory_6);
#line 258
$memory_7 = "state";
#line 258
c_rt_lib::set_ref_hash($memory_0, $memory_7, $memory_6);
#line 258
undef($memory_7);
#line 258
undef($memory_6);
#line 262
$memory_9 = "state";
#line 262
$memory_9 = c_rt_lib::get_ref_hash($memory_0, $memory_9);
#line 262
$memory_8 = ntokenizer::get_place($memory_9);
#line 262
$memory_10 = "state";
#line 262
c_rt_lib::set_ref_hash($memory_0, $memory_10, $memory_9);
#line 262
undef($memory_10);
#line 262
undef($memory_9);
#line 262
$memory_7 = {begin => $memory_1,end => $memory_8,};
#line 262
undef($memory_8);
#line 264
$memory_9 = "\@";
#line 264
$memory_11 = {begin => $memory_3,end => $memory_5,};
#line 264
$memory_10 = {debug => $memory_11,value => $memory_4,};
#line 264
undef($memory_11);
#line 264
$memory_8 = {op => $memory_9,val => $memory_10,};
#line 264
undef($memory_9);
#line 264
undef($memory_10);
#line 264
$memory_8 = c_rt_lib::ov_mk_arg('unary_op', $memory_8);
#line 264
$memory_6 = {debug => $memory_7,value => $memory_8,};
#line 264
undef($memory_7);
#line 264
undef($memory_8);
#line 264
$memory_6 = c_rt_lib::ov_mk_arg('ok', $memory_6);
#line 264
undef($memory_1);
#line 264
undef($memory_2);
#line 264
undef($memory_3);
#line 264
undef($memory_4);
#line 264
undef($memory_5);
#line 264
$_[0] = $memory_0;return $memory_6;
#line 264
undef($memory_6);
#line 264
undef($memory_3);
#line 264
undef($memory_4);
#line 264
undef($memory_5);
#line 266
goto label_60;
#line 266
label_60:
#line 266
undef($memory_2);
#line 267
$memory_3 = "state";
#line 267
$memory_3 = c_rt_lib::get_ref_hash($memory_0, $memory_3);
#line 267
$memory_4 = c_rt_lib::ov_mk_none('word');
#line 267
$memory_2 = ntokenizer::is_type($memory_3, $memory_4);
#line 267
undef($memory_4);
#line 267
$memory_4 = "state";
#line 267
c_rt_lib::set_ref_hash($memory_0, $memory_4, $memory_3);
#line 267
undef($memory_4);
#line 267
undef($memory_3);
#line 267
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 267
if (c_rt_lib::check_true($memory_2)) {goto label_112;}
#line 268
$memory_5 = nparser_priv::parse_label($memory_0);
#line 268
$memory_4 = c_rt_lib::ov_is($memory_5, 'ok');
#line 268
if (c_rt_lib::check_true($memory_4)) {goto label_81;}
#line 268
undef($memory_1);
#line 268
undef($memory_2);
#line 268
undef($memory_3);
#line 268
undef($memory_4);
#line 268
$_[0] = $memory_0;return $memory_5;
#line 268
label_81:
#line 268
$memory_3 = c_rt_lib::ov_as($memory_5, 'ok');
#line 268
undef($memory_4);
#line 268
undef($memory_5);
#line 269
$memory_4 = $memory_3;
#line 269
$memory_4 = c_rt_lib::ov_is($memory_4, 'fun_val');
#line 269
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 269
if (c_rt_lib::check_true($memory_4)) {goto label_108;}
#line 269
$memory_8 = "state";
#line 269
$memory_8 = c_rt_lib::get_ref_hash($memory_0, $memory_8);
#line 269
$memory_7 = ntokenizer::get_place($memory_8);
#line 269
$memory_9 = "state";
#line 269
c_rt_lib::set_ref_hash($memory_0, $memory_9, $memory_8);
#line 269
undef($memory_9);
#line 269
undef($memory_8);
#line 269
$memory_6 = {begin => $memory_1,end => $memory_7,};
#line 269
undef($memory_7);
#line 269
$memory_5 = {debug => $memory_6,value => $memory_3,};
#line 269
undef($memory_6);
#line 269
$memory_5 = c_rt_lib::ov_mk_arg('ok', $memory_5);
#line 269
undef($memory_1);
#line 269
undef($memory_2);
#line 269
undef($memory_3);
#line 269
undef($memory_4);
#line 269
$_[0] = $memory_0;return $memory_5;
#line 269
undef($memory_5);
#line 269
goto label_108;
#line 269
label_108:
#line 269
undef($memory_4);
#line 269
undef($memory_3);
#line 270
goto label_112;
#line 270
label_112:
#line 270
undef($memory_2);
#line 271
$memory_2 = "wrong format of type, expected '\@' or function call";
#line 271
nparser_priv::add_error($memory_0, $memory_2);
#line 271
undef($memory_2);
#line 272
$memory_5 = "state";
#line 272
$memory_5 = c_rt_lib::get_ref_hash($memory_0, $memory_5);
#line 272
$memory_4 = ntokenizer::get_place($memory_5);
#line 272
$memory_6 = "state";
#line 272
c_rt_lib::set_ref_hash($memory_0, $memory_6, $memory_5);
#line 272
undef($memory_6);
#line 272
undef($memory_5);
#line 272
$memory_3 = {begin => $memory_1,end => $memory_4,};
#line 272
undef($memory_4);
#line 272
$memory_4 = c_rt_lib::ov_mk_none('nop');
#line 272
$memory_2 = {debug => $memory_3,value => $memory_4,};
#line 272
undef($memory_3);
#line 272
undef($memory_4);
#line 272
$memory_2 = c_rt_lib::ov_mk_arg('ok', $memory_2);
#line 272
undef($memory_1);
#line 272
$_[0] = $memory_0;return $memory_2;
#line 272
undef($memory_2);
#line 272
undef($memory_1);
#line 272
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub nparser_priv::parse_expr_rec_left($$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;my $memory_13;my $memory_14;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];$memory_2 = $_[2];
#line 276
label_0:
#line 278
$memory_5 = "state";
#line 278
$memory_5 = c_rt_lib::get_ref_hash($memory_0, $memory_5);
#line 278
$memory_4 = ntokenizer::get_place($memory_5);
#line 278
$memory_6 = "state";
#line 278
c_rt_lib::set_ref_hash($memory_0, $memory_6, $memory_5);
#line 278
undef($memory_6);
#line 278
undef($memory_5);
#line 279
$memory_6 = "state";
#line 279
$memory_6 = c_rt_lib::get_ref_hash($memory_0, $memory_6);
#line 279
$memory_5 = ntokenizer::get_token($memory_6);
#line 279
$memory_7 = "state";
#line 279
c_rt_lib::set_ref_hash($memory_0, $memory_7, $memory_6);
#line 279
undef($memory_7);
#line 279
undef($memory_6);
#line 281
$memory_8 = nast::get_ternary_ops();
#line 281
$memory_7 = hash::has_key($memory_8, $memory_5);
#line 281
undef($memory_8);
#line 281
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 281
if (c_rt_lib::check_true($memory_7)) {goto label_133;}
#line 282
$memory_6 = $memory_5;
#line 283
$memory_8 = "?";
#line 283
$memory_8 = c_rt_lib::to_nl($memory_6 eq $memory_8);
#line 283
$memory_8 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 283
if (c_rt_lib::check_true($memory_8)) {goto label_115;}
#line 284
$memory_10 = nast::get_ternary_ops();
#line 284
$memory_11 = "?";
#line 284
$memory_9 = hash::get_value($memory_10, $memory_11);
#line 284
undef($memory_11);
#line 284
undef($memory_10);
#line 285
$memory_10 = $memory_9->{'prec'};
#line 285
$memory_10 = c_rt_lib::to_nl($memory_10 < $memory_2);
#line 285
if (c_rt_lib::check_true($memory_10)) {goto label_41;}
#line 285
$memory_10 = $memory_9->{'prec'};
#line 285
$memory_10 = c_rt_lib::to_nl($memory_10 == $memory_2);
#line 285
$memory_11 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_10));
#line 285
if (c_rt_lib::check_true($memory_11)) {goto label_39;}
#line 285
$memory_10 = $memory_9->{'assoc'};
#line 285
$memory_10 = c_rt_lib::ov_is($memory_10, 'left');
#line 285
label_39:
#line 285
undef($memory_11);
#line 285
label_41:
#line 285
$memory_10 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_10));
#line 285
if (c_rt_lib::check_true($memory_10)) {goto label_58;}
#line 285
$memory_11 = c_rt_lib::ov_mk_arg('ok', $memory_1);
#line 285
undef($memory_1);
#line 285
undef($memory_2);
#line 285
undef($memory_3);
#line 285
undef($memory_4);
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
undef($memory_10);
#line 285
$_[0] = $memory_0;return $memory_11;
#line 285
undef($memory_11);
#line 285
goto label_58;
#line 285
label_58:
#line 285
undef($memory_10);
#line 286
nparser_priv::eat($memory_0, $memory_6);
#line 287
$memory_12 = nparser_priv::parse_expr($memory_0);
#line 287
$memory_11 = c_rt_lib::ov_is($memory_12, 'ok');
#line 287
if (c_rt_lib::check_true($memory_11)) {goto label_76;}
#line 287
undef($memory_1);
#line 287
undef($memory_2);
#line 287
undef($memory_3);
#line 287
undef($memory_4);
#line 287
undef($memory_5);
#line 287
undef($memory_6);
#line 287
undef($memory_7);
#line 287
undef($memory_8);
#line 287
undef($memory_9);
#line 287
undef($memory_10);
#line 287
undef($memory_11);
#line 287
$_[0] = $memory_0;return $memory_12;
#line 287
label_76:
#line 287
$memory_10 = c_rt_lib::ov_as($memory_12, 'ok');
#line 287
undef($memory_11);
#line 287
undef($memory_12);
#line 288
$memory_11 = ":";
#line 288
nparser_priv::eat($memory_0, $memory_11);
#line 288
undef($memory_11);
#line 289
$memory_14 = $memory_9->{'prec'};
#line 289
$memory_13 = nparser_priv::parse_expr_rec($memory_0, $memory_14);
#line 289
undef($memory_14);
#line 289
$memory_12 = c_rt_lib::ov_is($memory_13, 'ok');
#line 289
if (c_rt_lib::check_true($memory_12)) {goto label_101;}
#line 289
undef($memory_1);
#line 289
undef($memory_2);
#line 289
undef($memory_3);
#line 289
undef($memory_4);
#line 289
undef($memory_5);
#line 289
undef($memory_6);
#line 289
undef($memory_7);
#line 289
undef($memory_8);
#line 289
undef($memory_9);
#line 289
undef($memory_10);
#line 289
undef($memory_11);
#line 289
undef($memory_12);
#line 289
$_[0] = $memory_0;return $memory_13;
#line 289
label_101:
#line 289
$memory_11 = c_rt_lib::ov_as($memory_13, 'ok');
#line 289
undef($memory_12);
#line 289
undef($memory_13);
#line 290
$memory_13 = "?";
#line 290
$memory_12 = {fst => $memory_1,snd => $memory_10,thrd => $memory_11,op => $memory_13,};
#line 290
undef($memory_13);
#line 290
$memory_12 = c_rt_lib::ov_mk_arg('ternary_op', $memory_12);
#line 290
$memory_3 = $memory_12;
#line 290
undef($memory_12);
#line 290
undef($memory_9);
#line 290
undef($memory_10);
#line 290
undef($memory_11);
#line 291
goto label_130;
#line 291
label_115:
#line 292
$memory_9 = "ternary op: ";
#line 292
$memory_9 = $memory_9 . $memory_6;
#line 292
$memory_9 = c_rt_lib::ov_mk_arg('err', $memory_9);
#line 292
undef($memory_1);
#line 292
undef($memory_2);
#line 292
undef($memory_3);
#line 292
undef($memory_4);
#line 292
undef($memory_5);
#line 292
undef($memory_6);
#line 292
undef($memory_7);
#line 292
undef($memory_8);
#line 292
$_[0] = $memory_0;return $memory_9;
#line 292
undef($memory_9);
#line 293
goto label_130;
#line 293
label_130:
#line 293
undef($memory_8);
#line 294
goto label_363;
#line 294
label_133:
#line 294
$memory_8 = nast::get_bin_ops();
#line 294
$memory_7 = hash::has_key($memory_8, $memory_5);
#line 294
undef($memory_8);
#line 294
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 294
if (c_rt_lib::check_true($memory_7)) {goto label_261;}
#line 295
$memory_6 = $memory_5;
#line 296
$memory_9 = nast::get_bin_ops();
#line 296
$memory_8 = hash::get_value($memory_9, $memory_5);
#line 296
undef($memory_9);
#line 297
$memory_9 = $memory_8->{'prec'};
#line 297
$memory_9 = c_rt_lib::to_nl($memory_9 < $memory_2);
#line 297
if (c_rt_lib::check_true($memory_9)) {goto label_154;}
#line 297
$memory_9 = $memory_8->{'prec'};
#line 297
$memory_9 = c_rt_lib::to_nl($memory_9 == $memory_2);
#line 297
$memory_10 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_9));
#line 297
if (c_rt_lib::check_true($memory_10)) {goto label_152;}
#line 297
$memory_9 = $memory_8->{'assoc'};
#line 297
$memory_9 = c_rt_lib::ov_is($memory_9, 'left');
#line 297
label_152:
#line 297
undef($memory_10);
#line 297
label_154:
#line 297
$memory_9 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_9));
#line 297
if (c_rt_lib::check_true($memory_9)) {goto label_170;}
#line 297
$memory_10 = c_rt_lib::ov_mk_arg('ok', $memory_1);
#line 297
undef($memory_1);
#line 297
undef($memory_2);
#line 297
undef($memory_3);
#line 297
undef($memory_4);
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
$_[0] = $memory_0;return $memory_10;
#line 297
undef($memory_10);
#line 297
goto label_170;
#line 297
label_170:
#line 297
undef($memory_9);
#line 298
nparser_priv::eat($memory_0, $memory_5);
#line 299
$memory_9 = "->";
#line 299
$memory_9 = c_rt_lib::to_nl($memory_6 eq $memory_9);
#line 299
$memory_9 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_9));
#line 299
if (c_rt_lib::check_true($memory_9)) {goto label_184;}
#line 300
$memory_11 = nparser_priv::parse_hash_key($memory_0);
#line 300
$memory_10 = {op => $memory_6,left => $memory_1,right => $memory_11,};
#line 300
undef($memory_11);
#line 300
$memory_10 = c_rt_lib::ov_mk_arg('bin_op', $memory_10);
#line 300
$memory_3 = $memory_10;
#line 300
undef($memory_10);
#line 301
goto label_257;
#line 301
label_184:
#line 301
$memory_9 = "as";
#line 301
$memory_9 = c_rt_lib::to_nl($memory_6 eq $memory_9);
#line 301
$memory_9 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_9));
#line 301
if (c_rt_lib::check_true($memory_9)) {goto label_201;}
#line 302
$memory_10 = ":";
#line 302
nparser_priv::eat($memory_0, $memory_10);
#line 302
undef($memory_10);
#line 303
$memory_10 = nparser_priv::parse_variant_label($memory_0);
#line 304
$memory_12 = c_rt_lib::ov_mk_none('ov_as');
#line 304
$memory_11 = {op => $memory_12,left => $memory_1,case => $memory_10,};
#line 304
undef($memory_12);
#line 304
$memory_11 = c_rt_lib::ov_mk_arg('var_op', $memory_11);
#line 304
$memory_3 = $memory_11;
#line 304
undef($memory_11);
#line 304
undef($memory_10);
#line 305
goto label_257;
#line 305
label_201:
#line 305
$memory_9 = "is";
#line 305
$memory_9 = c_rt_lib::to_nl($memory_6 eq $memory_9);
#line 305
$memory_9 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_9));
#line 305
if (c_rt_lib::check_true($memory_9)) {goto label_218;}
#line 306
$memory_10 = ":";
#line 306
nparser_priv::eat($memory_0, $memory_10);
#line 306
undef($memory_10);
#line 307
$memory_10 = nparser_priv::parse_variant_label($memory_0);
#line 308
$memory_12 = c_rt_lib::ov_mk_none('ov_is');
#line 308
$memory_11 = {op => $memory_12,left => $memory_1,case => $memory_10,};
#line 308
undef($memory_12);
#line 308
$memory_11 = c_rt_lib::ov_mk_arg('var_op', $memory_11);
#line 308
$memory_3 = $memory_11;
#line 308
undef($memory_11);
#line 308
undef($memory_10);
#line 309
goto label_257;
#line 309
label_218:
#line 310
$memory_10 = "=";
#line 310
$memory_10 = c_rt_lib::to_nl($memory_6 eq $memory_10);
#line 310
$memory_10 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_10));
#line 310
if (c_rt_lib::check_true($memory_10)) {goto label_225;}
#line 310
nparser_priv::check_lvalue($memory_0, $memory_1);
#line 310
goto label_225;
#line 310
label_225:
#line 310
undef($memory_10);
#line 311
$memory_14 = nast::get_bin_ops();
#line 311
$memory_13 = hash::get_value($memory_14, $memory_6);
#line 311
undef($memory_14);
#line 311
$memory_13 = $memory_13->{'prec'};
#line 311
$memory_12 = nparser_priv::parse_expr_rec($memory_0, $memory_13);
#line 311
undef($memory_13);
#line 311
$memory_11 = c_rt_lib::ov_is($memory_12, 'ok');
#line 311
if (c_rt_lib::check_true($memory_11)) {goto label_247;}
#line 311
undef($memory_1);
#line 311
undef($memory_2);
#line 311
undef($memory_3);
#line 311
undef($memory_4);
#line 311
undef($memory_5);
#line 311
undef($memory_6);
#line 311
undef($memory_7);
#line 311
undef($memory_8);
#line 311
undef($memory_9);
#line 311
undef($memory_10);
#line 311
undef($memory_11);
#line 311
$_[0] = $memory_0;return $memory_12;
#line 311
label_247:
#line 311
$memory_10 = c_rt_lib::ov_as($memory_12, 'ok');
#line 311
undef($memory_11);
#line 311
undef($memory_12);
#line 312
$memory_11 = {left => $memory_1,op => $memory_6,right => $memory_10,};
#line 312
$memory_11 = c_rt_lib::ov_mk_arg('bin_op', $memory_11);
#line 312
$memory_3 = $memory_11;
#line 312
undef($memory_11);
#line 312
undef($memory_10);
#line 313
goto label_257;
#line 313
label_257:
#line 313
undef($memory_9);
#line 313
undef($memory_8);
#line 314
goto label_363;
#line 314
label_261:
#line 314
$memory_8 = "[";
#line 314
$memory_7 = nparser_priv::try_eat($memory_0, $memory_8);
#line 314
undef($memory_8);
#line 314
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 314
if (c_rt_lib::check_true($memory_7)) {goto label_296;}
#line 315
$memory_8 = "ARRAY_INDEX";
#line 315
$memory_6 = $memory_8;
#line 315
undef($memory_8);
#line 316
$memory_10 = nparser_priv::parse_expr($memory_0);
#line 316
$memory_9 = c_rt_lib::ov_is($memory_10, 'ok');
#line 316
if (c_rt_lib::check_true($memory_9)) {goto label_283;}
#line 316
undef($memory_1);
#line 316
undef($memory_2);
#line 316
undef($memory_3);
#line 316
undef($memory_4);
#line 316
undef($memory_5);
#line 316
undef($memory_6);
#line 316
undef($memory_7);
#line 316
undef($memory_8);
#line 316
undef($memory_9);
#line 316
$_[0] = $memory_0;return $memory_10;
#line 316
label_283:
#line 316
$memory_8 = c_rt_lib::ov_as($memory_10, 'ok');
#line 316
undef($memory_9);
#line 316
undef($memory_10);
#line 317
$memory_9 = "]";
#line 317
nparser_priv::eat($memory_0, $memory_9);
#line 317
undef($memory_9);
#line 318
$memory_9 = {op => $memory_6,left => $memory_1,right => $memory_8,};
#line 318
$memory_9 = c_rt_lib::ov_mk_arg('bin_op', $memory_9);
#line 318
$memory_3 = $memory_9;
#line 318
undef($memory_9);
#line 318
undef($memory_8);
#line 319
goto label_363;
#line 319
label_296:
#line 319
$memory_8 = "{";
#line 319
$memory_7 = nparser_priv::try_eat($memory_0, $memory_8);
#line 319
undef($memory_8);
#line 319
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 319
if (c_rt_lib::check_true($memory_7)) {goto label_331;}
#line 320
$memory_8 = "HASH_INDEX";
#line 320
$memory_6 = $memory_8;
#line 320
undef($memory_8);
#line 321
$memory_10 = nparser_priv::parse_expr($memory_0);
#line 321
$memory_9 = c_rt_lib::ov_is($memory_10, 'ok');
#line 321
if (c_rt_lib::check_true($memory_9)) {goto label_318;}
#line 321
undef($memory_1);
#line 321
undef($memory_2);
#line 321
undef($memory_3);
#line 321
undef($memory_4);
#line 321
undef($memory_5);
#line 321
undef($memory_6);
#line 321
undef($memory_7);
#line 321
undef($memory_8);
#line 321
undef($memory_9);
#line 321
$_[0] = $memory_0;return $memory_10;
#line 321
label_318:
#line 321
$memory_8 = c_rt_lib::ov_as($memory_10, 'ok');
#line 321
undef($memory_9);
#line 321
undef($memory_10);
#line 322
$memory_9 = "}";
#line 322
nparser_priv::eat($memory_0, $memory_9);
#line 322
undef($memory_9);
#line 323
$memory_9 = {op => $memory_6,left => $memory_1,right => $memory_8,};
#line 323
$memory_9 = c_rt_lib::ov_mk_arg('bin_op', $memory_9);
#line 323
$memory_3 = $memory_9;
#line 323
undef($memory_9);
#line 323
undef($memory_8);
#line 324
goto label_363;
#line 324
label_331:
#line 324
$memory_8 = "++";
#line 324
$memory_7 = nparser_priv::try_eat($memory_0, $memory_8);
#line 324
undef($memory_8);
#line 324
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 324
if (c_rt_lib::check_true($memory_7)) {goto label_341;}
#line 325
$memory_8 = c_rt_lib::ov_mk_arg('post_inc', $memory_1);
#line 325
$memory_3 = $memory_8;
#line 325
undef($memory_8);
#line 326
goto label_363;
#line 326
label_341:
#line 326
$memory_8 = "--";
#line 326
$memory_7 = nparser_priv::try_eat($memory_0, $memory_8);
#line 326
undef($memory_8);
#line 326
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 326
if (c_rt_lib::check_true($memory_7)) {goto label_351;}
#line 327
$memory_8 = c_rt_lib::ov_mk_arg('post_dec', $memory_1);
#line 327
$memory_3 = $memory_8;
#line 327
undef($memory_8);
#line 328
goto label_363;
#line 328
label_351:
#line 329
$memory_8 = c_rt_lib::ov_mk_arg('ok', $memory_1);
#line 329
undef($memory_1);
#line 329
undef($memory_2);
#line 329
undef($memory_3);
#line 329
undef($memory_4);
#line 329
undef($memory_5);
#line 329
undef($memory_6);
#line 329
undef($memory_7);
#line 329
$_[0] = $memory_0;return $memory_8;
#line 329
undef($memory_8);
#line 330
goto label_363;
#line 330
label_363:
#line 330
undef($memory_7);
#line 331
$memory_10 = "state";
#line 331
$memory_10 = c_rt_lib::get_ref_hash($memory_0, $memory_10);
#line 331
$memory_9 = ntokenizer::get_place($memory_10);
#line 331
$memory_11 = "state";
#line 331
c_rt_lib::set_ref_hash($memory_0, $memory_11, $memory_10);
#line 331
undef($memory_11);
#line 331
undef($memory_10);
#line 331
$memory_8 = {begin => $memory_4,end => $memory_9,};
#line 331
undef($memory_9);
#line 331
$memory_7 = {debug => $memory_8,value => $memory_3,};
#line 331
undef($memory_8);
#line 331
$memory_1 = $memory_7;
#line 331
undef($memory_7);
#line 331
undef($memory_3);
#line 331
undef($memory_4);
#line 331
undef($memory_5);
#line 331
undef($memory_6);
#line 276
goto label_0;
#line 333
$memory_3 = [];
#line 333
die(dfile::ssave($memory_3));
#line 333
undef($memory_3);
#line 333
undef($memory_1);
#line 333
undef($memory_2);
#line 333
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub nparser_priv::parse_expr_rec($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];
#line 338
$memory_4 = "state";
#line 338
$memory_4 = c_rt_lib::get_ref_hash($memory_0, $memory_4);
#line 338
$memory_3 = ntokenizer::get_place($memory_4);
#line 338
$memory_5 = "state";
#line 338
c_rt_lib::set_ref_hash($memory_0, $memory_5, $memory_4);
#line 338
undef($memory_5);
#line 338
undef($memory_4);
#line 339
$memory_5 = "(";
#line 339
$memory_4 = nparser_priv::try_eat($memory_0, $memory_5);
#line 339
undef($memory_5);
#line 339
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 339
if (c_rt_lib::check_true($memory_4)) {goto label_34;}
#line 340
$memory_7 = nparser_priv::parse_expr($memory_0);
#line 340
$memory_6 = c_rt_lib::ov_is($memory_7, 'ok');
#line 340
if (c_rt_lib::check_true($memory_6)) {goto label_22;}
#line 340
undef($memory_1);
#line 340
undef($memory_2);
#line 340
undef($memory_3);
#line 340
undef($memory_4);
#line 340
undef($memory_5);
#line 340
undef($memory_6);
#line 340
$_[0] = $memory_0;return $memory_7;
#line 340
label_22:
#line 340
$memory_5 = c_rt_lib::ov_as($memory_7, 'ok');
#line 340
undef($memory_6);
#line 340
undef($memory_7);
#line 341
$memory_6 = c_rt_lib::ov_mk_arg('parenthesis', $memory_5);
#line 341
$memory_2 = $memory_6;
#line 341
undef($memory_6);
#line 342
$memory_6 = ")";
#line 342
nparser_priv::eat($memory_0, $memory_6);
#line 342
undef($memory_6);
#line 342
undef($memory_5);
#line 343
goto label_478;
#line 343
label_34:
#line 343
$memory_5 = "state";
#line 343
$memory_5 = c_rt_lib::get_ref_hash($memory_0, $memory_5);
#line 343
$memory_6 = "{";
#line 343
$memory_4 = ntokenizer::next_is($memory_5, $memory_6);
#line 343
undef($memory_6);
#line 343
$memory_6 = "state";
#line 343
c_rt_lib::set_ref_hash($memory_0, $memory_6, $memory_5);
#line 343
undef($memory_6);
#line 343
undef($memory_5);
#line 343
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 343
if (c_rt_lib::check_true($memory_4)) {goto label_65;}
#line 344
$memory_7 = nparser_priv::parse_hash($memory_0);
#line 344
$memory_6 = c_rt_lib::ov_is($memory_7, 'ok');
#line 344
if (c_rt_lib::check_true($memory_6)) {goto label_56;}
#line 344
undef($memory_1);
#line 344
undef($memory_2);
#line 344
undef($memory_3);
#line 344
undef($memory_4);
#line 344
undef($memory_5);
#line 344
undef($memory_6);
#line 344
$_[0] = $memory_0;return $memory_7;
#line 344
label_56:
#line 344
$memory_5 = c_rt_lib::ov_as($memory_7, 'ok');
#line 344
undef($memory_6);
#line 344
undef($memory_7);
#line 345
$memory_6 = c_rt_lib::ov_mk_arg('hash_decl', $memory_5);
#line 345
$memory_2 = $memory_6;
#line 345
undef($memory_6);
#line 345
undef($memory_5);
#line 346
goto label_478;
#line 346
label_65:
#line 346
$memory_5 = "state";
#line 346
$memory_5 = c_rt_lib::get_ref_hash($memory_0, $memory_5);
#line 346
$memory_6 = "[";
#line 346
$memory_4 = ntokenizer::next_is($memory_5, $memory_6);
#line 346
undef($memory_6);
#line 346
$memory_6 = "state";
#line 346
c_rt_lib::set_ref_hash($memory_0, $memory_6, $memory_5);
#line 346
undef($memory_6);
#line 346
undef($memory_5);
#line 346
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 346
if (c_rt_lib::check_true($memory_4)) {goto label_96;}
#line 347
$memory_7 = nparser_priv::parse_arr($memory_0);
#line 347
$memory_6 = c_rt_lib::ov_is($memory_7, 'ok');
#line 347
if (c_rt_lib::check_true($memory_6)) {goto label_87;}
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
$_[0] = $memory_0;return $memory_7;
#line 347
label_87:
#line 347
$memory_5 = c_rt_lib::ov_as($memory_7, 'ok');
#line 347
undef($memory_6);
#line 347
undef($memory_7);
#line 348
$memory_6 = c_rt_lib::ov_mk_arg('arr_decl', $memory_5);
#line 348
$memory_2 = $memory_6;
#line 348
undef($memory_6);
#line 348
undef($memory_5);
#line 349
goto label_478;
#line 349
label_96:
#line 349
$memory_5 = "state";
#line 349
$memory_5 = c_rt_lib::get_ref_hash($memory_0, $memory_5);
#line 349
$memory_6 = ":";
#line 349
$memory_4 = ntokenizer::next_is($memory_5, $memory_6);
#line 349
undef($memory_6);
#line 349
$memory_6 = "state";
#line 349
c_rt_lib::set_ref_hash($memory_0, $memory_6, $memory_5);
#line 349
undef($memory_6);
#line 349
undef($memory_5);
#line 349
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 349
if (c_rt_lib::check_true($memory_4)) {goto label_127;}
#line 350
$memory_7 = nparser_priv::parse_variant($memory_0);
#line 350
$memory_6 = c_rt_lib::ov_is($memory_7, 'ok');
#line 350
if (c_rt_lib::check_true($memory_6)) {goto label_118;}
#line 350
undef($memory_1);
#line 350
undef($memory_2);
#line 350
undef($memory_3);
#line 350
undef($memory_4);
#line 350
undef($memory_5);
#line 350
undef($memory_6);
#line 350
$_[0] = $memory_0;return $memory_7;
#line 350
label_118:
#line 350
$memory_5 = c_rt_lib::ov_as($memory_7, 'ok');
#line 350
undef($memory_6);
#line 350
undef($memory_7);
#line 351
$memory_6 = c_rt_lib::ov_mk_arg('variant', $memory_5);
#line 351
$memory_2 = $memory_6;
#line 351
undef($memory_6);
#line 351
undef($memory_5);
#line 352
goto label_478;
#line 352
label_127:
#line 352
$memory_5 = "state";
#line 352
$memory_5 = c_rt_lib::get_ref_hash($memory_0, $memory_5);
#line 352
$memory_6 = c_rt_lib::ov_mk_none('number');
#line 352
$memory_4 = ntokenizer::is_type($memory_5, $memory_6);
#line 352
undef($memory_6);
#line 352
$memory_6 = "state";
#line 352
c_rt_lib::set_ref_hash($memory_0, $memory_6, $memory_5);
#line 352
undef($memory_6);
#line 352
undef($memory_5);
#line 352
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 352
if (c_rt_lib::check_true($memory_4)) {goto label_152;}
#line 353
$memory_6 = "state";
#line 353
$memory_6 = c_rt_lib::get_ref_hash($memory_0, $memory_6);
#line 353
$memory_7 = c_rt_lib::ov_mk_none('number');
#line 353
$memory_5 = ntokenizer::eat_type($memory_6, $memory_7);
#line 353
undef($memory_7);
#line 353
$memory_7 = "state";
#line 353
c_rt_lib::set_ref_hash($memory_0, $memory_7, $memory_6);
#line 353
undef($memory_7);
#line 353
undef($memory_6);
#line 353
$memory_5 = c_rt_lib::ov_mk_arg('const', $memory_5);
#line 353
$memory_2 = $memory_5;
#line 353
undef($memory_5);
#line 354
goto label_478;
#line 354
label_152:
#line 354
$memory_5 = "state";
#line 354
$memory_5 = c_rt_lib::get_ref_hash($memory_0, $memory_5);
#line 354
$memory_6 = c_rt_lib::ov_mk_none('multi_string');
#line 354
$memory_4 = ntokenizer::is_type($memory_5, $memory_6);
#line 354
undef($memory_6);
#line 354
$memory_6 = "state";
#line 354
c_rt_lib::set_ref_hash($memory_0, $memory_6, $memory_5);
#line 354
undef($memory_6);
#line 354
undef($memory_5);
#line 354
if (c_rt_lib::check_true($memory_4)) {goto label_172;}
#line 354
$memory_5 = "state";
#line 354
$memory_5 = c_rt_lib::get_ref_hash($memory_0, $memory_5);
#line 354
$memory_6 = c_rt_lib::ov_mk_none('string');
#line 354
$memory_4 = ntokenizer::is_type($memory_5, $memory_6);
#line 354
undef($memory_6);
#line 354
$memory_6 = "state";
#line 354
c_rt_lib::set_ref_hash($memory_0, $memory_6, $memory_5);
#line 354
undef($memory_6);
#line 354
undef($memory_5);
#line 354
label_172:
#line 354
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 354
if (c_rt_lib::check_true($memory_4)) {goto label_258;}
#line 355
$memory_6 = [];
#line 355
$memory_5 = {arr => $memory_6,};
#line 355
undef($memory_6);
#line 356
label_178:
#line 356
$memory_7 = "state";
#line 356
$memory_7 = c_rt_lib::get_ref_hash($memory_0, $memory_7);
#line 356
$memory_8 = c_rt_lib::ov_mk_none('multi_string');
#line 356
$memory_6 = ntokenizer::is_type($memory_7, $memory_8);
#line 356
undef($memory_8);
#line 356
$memory_8 = "state";
#line 356
c_rt_lib::set_ref_hash($memory_0, $memory_8, $memory_7);
#line 356
undef($memory_8);
#line 356
undef($memory_7);
#line 356
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 356
if (c_rt_lib::check_true($memory_6)) {goto label_208;}
#line 357
$memory_7 = "arr";
#line 357
$memory_7 = c_rt_lib::get_ref_hash($memory_5, $memory_7);
#line 357
$memory_9 = "state";
#line 357
$memory_9 = c_rt_lib::get_ref_hash($memory_0, $memory_9);
#line 357
$memory_10 = c_rt_lib::ov_mk_none('multi_string');
#line 357
$memory_8 = ntokenizer::eat_type($memory_9, $memory_10);
#line 357
undef($memory_10);
#line 357
$memory_10 = "state";
#line 357
c_rt_lib::set_ref_hash($memory_0, $memory_10, $memory_9);
#line 357
undef($memory_10);
#line 357
undef($memory_9);
#line 357
array::push($memory_7, $memory_8);
#line 357
undef($memory_8);
#line 357
$memory_8 = "arr";
#line 357
c_rt_lib::set_ref_hash($memory_5, $memory_8, $memory_7);
#line 357
undef($memory_8);
#line 357
undef($memory_7);
#line 358
goto label_178;
#line 358
label_208:
#line 358
undef($memory_6);
#line 359
$memory_7 = "state";
#line 359
$memory_7 = c_rt_lib::get_ref_hash($memory_0, $memory_7);
#line 359
$memory_8 = c_rt_lib::ov_mk_none('string');
#line 359
$memory_6 = ntokenizer::is_type($memory_7, $memory_8);
#line 359
undef($memory_8);
#line 359
$memory_8 = "state";
#line 359
c_rt_lib::set_ref_hash($memory_0, $memory_8, $memory_7);
#line 359
undef($memory_8);
#line 359
undef($memory_7);
#line 359
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 359
if (c_rt_lib::check_true($memory_6)) {goto label_244;}
#line 360
$memory_7 = "arr";
#line 360
$memory_7 = c_rt_lib::get_ref_hash($memory_5, $memory_7);
#line 360
$memory_9 = "state";
#line 360
$memory_9 = c_rt_lib::get_ref_hash($memory_0, $memory_9);
#line 360
$memory_10 = c_rt_lib::ov_mk_none('string');
#line 360
$memory_8 = ntokenizer::eat_type($memory_9, $memory_10);
#line 360
undef($memory_10);
#line 360
$memory_10 = "state";
#line 360
c_rt_lib::set_ref_hash($memory_0, $memory_10, $memory_9);
#line 360
undef($memory_10);
#line 360
undef($memory_9);
#line 360
array::push($memory_7, $memory_8);
#line 360
undef($memory_8);
#line 360
$memory_8 = "arr";
#line 360
c_rt_lib::set_ref_hash($memory_5, $memory_8, $memory_7);
#line 360
undef($memory_8);
#line 360
undef($memory_7);
#line 361
$memory_7 = c_rt_lib::ov_mk_none('end');
#line 361
$memory_8 = $memory_7;
#line 361
 if (c_rt_lib::get_hashcount($memory_5) > 1) {$memory_5 = {%{$memory_5}};}$memory_5->{'last'} = $memory_8;
#line 361
undef($memory_7);
#line 361
undef($memory_8);
#line 362
goto label_251;
#line 362
label_244:
#line 363
$memory_7 = c_rt_lib::ov_mk_none('new_line');
#line 363
$memory_8 = $memory_7;
#line 363
 if (c_rt_lib::get_hashcount($memory_5) > 1) {$memory_5 = {%{$memory_5}};}$memory_5->{'last'} = $memory_8;
#line 363
undef($memory_7);
#line 363
undef($memory_8);
#line 364
goto label_251;
#line 364
label_251:
#line 364
undef($memory_6);
#line 365
$memory_6 = c_rt_lib::ov_mk_arg('string', $memory_5);
#line 365
$memory_2 = $memory_6;
#line 365
undef($memory_6);
#line 365
undef($memory_5);
#line 366
goto label_478;
#line 366
label_258:
#line 366
$memory_5 = "state";
#line 366
$memory_5 = c_rt_lib::get_ref_hash($memory_0, $memory_5);
#line 366
$memory_6 = c_rt_lib::ov_mk_none('word');
#line 366
$memory_4 = ntokenizer::is_type($memory_5, $memory_6);
#line 366
undef($memory_6);
#line 366
$memory_6 = "state";
#line 366
c_rt_lib::set_ref_hash($memory_0, $memory_6, $memory_5);
#line 366
undef($memory_6);
#line 366
undef($memory_5);
#line 366
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 366
if (c_rt_lib::check_true($memory_4)) {goto label_284;}
#line 367
$memory_6 = nparser_priv::parse_label($memory_0);
#line 367
$memory_5 = c_rt_lib::ov_is($memory_6, 'ok');
#line 367
if (c_rt_lib::check_true($memory_5)) {goto label_279;}
#line 367
undef($memory_1);
#line 367
undef($memory_2);
#line 367
undef($memory_3);
#line 367
undef($memory_4);
#line 367
undef($memory_5);
#line 367
$_[0] = $memory_0;return $memory_6;
#line 367
label_279:
#line 367
$memory_2 = c_rt_lib::ov_as($memory_6, 'ok');
#line 367
undef($memory_5);
#line 367
undef($memory_6);
#line 368
goto label_478;
#line 368
label_284:
#line 368
$memory_6 = "state";
#line 368
$memory_6 = c_rt_lib::get_ref_hash($memory_0, $memory_6);
#line 368
$memory_7 = c_rt_lib::ov_mk_none('operator');
#line 368
$memory_4 = ntokenizer::is_type($memory_6, $memory_7);
#line 368
undef($memory_7);
#line 368
$memory_7 = "state";
#line 368
c_rt_lib::set_ref_hash($memory_0, $memory_7, $memory_6);
#line 368
undef($memory_7);
#line 368
undef($memory_6);
#line 368
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 368
if (c_rt_lib::check_true($memory_5)) {goto label_307;}
#line 368
$memory_6 = nast::get_unary_ops();
#line 369
$memory_8 = "state";
#line 369
$memory_8 = c_rt_lib::get_ref_hash($memory_0, $memory_8);
#line 369
$memory_7 = ntokenizer::get_token($memory_8);
#line 369
$memory_9 = "state";
#line 369
c_rt_lib::set_ref_hash($memory_0, $memory_9, $memory_8);
#line 369
undef($memory_9);
#line 369
undef($memory_8);
#line 369
$memory_4 = hash::has_key($memory_6, $memory_7);
#line 369
undef($memory_7);
#line 369
undef($memory_6);
#line 369
label_307:
#line 369
undef($memory_5);
#line 369
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 369
if (c_rt_lib::check_true($memory_4)) {goto label_391;}
#line 370
$memory_6 = "state";
#line 370
$memory_6 = c_rt_lib::get_ref_hash($memory_0, $memory_6);
#line 370
$memory_7 = c_rt_lib::ov_mk_none('operator');
#line 370
$memory_5 = ntokenizer::eat_type($memory_6, $memory_7);
#line 370
undef($memory_7);
#line 370
$memory_7 = "state";
#line 370
c_rt_lib::set_ref_hash($memory_0, $memory_7, $memory_6);
#line 370
undef($memory_7);
#line 370
undef($memory_6);
#line 372
$memory_7 = "\@";
#line 372
$memory_7 = c_rt_lib::to_nl($memory_5 eq $memory_7);
#line 372
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 372
if (c_rt_lib::check_true($memory_7)) {goto label_349;}
#line 373
$memory_9 = "state";
#line 373
$memory_9 = c_rt_lib::get_ref_hash($memory_0, $memory_9);
#line 373
$memory_8 = ntokenizer::get_place($memory_9);
#line 373
$memory_10 = "state";
#line 373
c_rt_lib::set_ref_hash($memory_0, $memory_10, $memory_9);
#line 373
undef($memory_10);
#line 373
undef($memory_9);
#line 374
$memory_9 = nparser_priv::parse_fun_label($memory_0);
#line 374
$memory_9 = c_rt_lib::ov_mk_arg('fun_label', $memory_9);
#line 375
$memory_11 = "state";
#line 375
$memory_11 = c_rt_lib::get_ref_hash($memory_0, $memory_11);
#line 375
$memory_10 = ntokenizer::get_place($memory_11);
#line 375
$memory_12 = "state";
#line 375
c_rt_lib::set_ref_hash($memory_0, $memory_12, $memory_11);
#line 375
undef($memory_12);
#line 375
undef($memory_11);
#line 377
$memory_12 = {begin => $memory_8,end => $memory_10,};
#line 377
$memory_11 = {debug => $memory_12,value => $memory_9,};
#line 377
undef($memory_12);
#line 377
$memory_6 = $memory_11;
#line 377
undef($memory_11);
#line 377
undef($memory_8);
#line 377
undef($memory_9);
#line 377
undef($memory_10);
#line 383
goto label_382;
#line 383
label_349:
#line 384
$memory_11 = nast::get_unary_ops();
#line 384
$memory_10 = hash::get_value($memory_11, $memory_5);
#line 384
undef($memory_11);
#line 384
$memory_10 = $memory_10->{'prec'};
#line 384
$memory_9 = nparser_priv::parse_expr_rec($memory_0, $memory_10);
#line 384
undef($memory_10);
#line 384
$memory_8 = c_rt_lib::ov_is($memory_9, 'ok');
#line 384
if (c_rt_lib::check_true($memory_8)) {goto label_367;}
#line 384
undef($memory_1);
#line 384
undef($memory_2);
#line 384
undef($memory_3);
#line 384
undef($memory_4);
#line 384
undef($memory_5);
#line 384
undef($memory_6);
#line 384
undef($memory_7);
#line 384
undef($memory_8);
#line 384
$_[0] = $memory_0;return $memory_9;
#line 384
label_367:
#line 384
$memory_6 = c_rt_lib::ov_as($memory_9, 'ok');
#line 384
undef($memory_8);
#line 384
undef($memory_9);
#line 385
$memory_8 = $memory_6->{'value'};
#line 385
$memory_8 = c_rt_lib::ov_is($memory_8, 'unary_op');
#line 385
$memory_8 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 385
if (c_rt_lib::check_true($memory_8)) {goto label_379;}
#line 385
$memory_9 = "unary operator after unary operator";
#line 385
nparser_priv::add_error($memory_0, $memory_9);
#line 385
undef($memory_9);
#line 385
goto label_379;
#line 385
label_379:
#line 385
undef($memory_8);
#line 386
goto label_382;
#line 386
label_382:
#line 386
undef($memory_7);
#line 387
$memory_7 = {op => $memory_5,val => $memory_6,};
#line 387
$memory_7 = c_rt_lib::ov_mk_arg('unary_op', $memory_7);
#line 387
$memory_2 = $memory_7;
#line 387
undef($memory_7);
#line 387
undef($memory_5);
#line 387
undef($memory_6);
#line 388
goto label_478;
#line 388
label_391:
#line 388
$memory_5 = "state";
#line 388
$memory_5 = c_rt_lib::get_ref_hash($memory_0, $memory_5);
#line 388
$memory_6 = c_rt_lib::ov_mk_none('keyword');
#line 388
$memory_4 = ntokenizer::is_type($memory_5, $memory_6);
#line 388
undef($memory_6);
#line 388
$memory_6 = "state";
#line 388
c_rt_lib::set_ref_hash($memory_0, $memory_6, $memory_5);
#line 388
undef($memory_6);
#line 388
undef($memory_5);
#line 388
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 388
if (c_rt_lib::check_true($memory_4)) {goto label_457;}
#line 389
$memory_6 = "true";
#line 389
$memory_5 = nparser_priv::try_eat($memory_0, $memory_6);
#line 389
undef($memory_6);
#line 389
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 389
if (c_rt_lib::check_true($memory_5)) {goto label_417;}
#line 390
$memory_7 = "TRUE";
#line 390
$memory_8 = nparser_priv::get_value_nop($memory_0);
#line 390
$memory_6 = {name => $memory_7,var => $memory_8,};
#line 390
undef($memory_7);
#line 390
undef($memory_8);
#line 390
$memory_6 = c_rt_lib::ov_mk_arg('variant', $memory_6);
#line 390
$memory_2 = $memory_6;
#line 390
undef($memory_6);
#line 391
goto label_454;
#line 391
label_417:
#line 391
$memory_6 = "false";
#line 391
$memory_5 = nparser_priv::try_eat($memory_0, $memory_6);
#line 391
undef($memory_6);
#line 391
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 391
if (c_rt_lib::check_true($memory_5)) {goto label_432;}
#line 392
$memory_7 = "FALSE";
#line 392
$memory_8 = nparser_priv::get_value_nop($memory_0);
#line 392
$memory_6 = {name => $memory_7,var => $memory_8,};
#line 392
undef($memory_7);
#line 392
undef($memory_8);
#line 392
$memory_6 = c_rt_lib::ov_mk_arg('variant', $memory_6);
#line 392
$memory_2 = $memory_6;
#line 392
undef($memory_6);
#line 393
goto label_454;
#line 393
label_432:
#line 394
$memory_6 = "use keyword in wrong context:";
#line 394
$memory_7 = string::lf();
#line 394
$memory_6 = $memory_6 . $memory_7;
#line 394
undef($memory_7);
#line 394
$memory_8 = $memory_0->{'state'};
#line 394
$memory_7 = ntokenizer::info($memory_8);
#line 394
undef($memory_8);
#line 394
$memory_6 = $memory_6 . $memory_7;
#line 394
undef($memory_7);
#line 395
nparser_priv::add_error($memory_0, $memory_6);
#line 396
$memory_7 = c_rt_lib::ov_mk_arg('err', $memory_6);
#line 396
undef($memory_1);
#line 396
undef($memory_2);
#line 396
undef($memory_3);
#line 396
undef($memory_4);
#line 396
undef($memory_5);
#line 396
undef($memory_6);
#line 396
$_[0] = $memory_0;return $memory_7;
#line 396
undef($memory_7);
#line 396
undef($memory_6);
#line 397
goto label_454;
#line 397
label_454:
#line 397
undef($memory_5);
#line 398
goto label_478;
#line 398
label_457:
#line 399
$memory_5 = "error in parse_expr:";
#line 399
$memory_6 = string::lf();
#line 399
$memory_5 = $memory_5 . $memory_6;
#line 399
undef($memory_6);
#line 399
$memory_7 = $memory_0->{'state'};
#line 399
$memory_6 = ntokenizer::info($memory_7);
#line 399
undef($memory_7);
#line 399
$memory_5 = $memory_5 . $memory_6;
#line 399
undef($memory_6);
#line 400
nparser_priv::add_error($memory_0, $memory_5);
#line 401
$memory_6 = c_rt_lib::ov_mk_arg('err', $memory_5);
#line 401
undef($memory_1);
#line 401
undef($memory_2);
#line 401
undef($memory_3);
#line 401
undef($memory_4);
#line 401
undef($memory_5);
#line 401
$_[0] = $memory_0;return $memory_6;
#line 401
undef($memory_6);
#line 401
undef($memory_5);
#line 402
goto label_478;
#line 402
label_478:
#line 402
undef($memory_4);
#line 403
$memory_8 = "state";
#line 403
$memory_8 = c_rt_lib::get_ref_hash($memory_0, $memory_8);
#line 403
$memory_7 = ntokenizer::get_place($memory_8);
#line 403
$memory_9 = "state";
#line 403
c_rt_lib::set_ref_hash($memory_0, $memory_9, $memory_8);
#line 403
undef($memory_9);
#line 403
undef($memory_8);
#line 403
$memory_6 = {begin => $memory_3,end => $memory_7,};
#line 403
undef($memory_7);
#line 403
$memory_5 = {debug => $memory_6,value => $memory_2,};
#line 403
undef($memory_6);
#line 403
$memory_4 = nparser_priv::parse_expr_rec_left($memory_0, $memory_5, $memory_1);
#line 403
undef($memory_5);
#line 403
undef($memory_1);
#line 403
undef($memory_2);
#line 403
undef($memory_3);
#line 403
$_[0] = $memory_0;return $memory_4;
#line 403
undef($memory_4);
#line 403
undef($memory_2);
#line 403
undef($memory_3);
#line 403
undef($memory_1);
#line 403
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub nparser_priv::get_value_nop($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);
#line 410
$memory_4 = "state";
#line 410
$memory_4 = c_rt_lib::get_ref_hash($memory_0, $memory_4);
#line 410
$memory_3 = ntokenizer::get_place($memory_4);
#line 410
$memory_5 = "state";
#line 410
c_rt_lib::set_ref_hash($memory_0, $memory_5, $memory_4);
#line 410
undef($memory_5);
#line 410
undef($memory_4);
#line 411
$memory_5 = "state";
#line 411
$memory_5 = c_rt_lib::get_ref_hash($memory_0, $memory_5);
#line 411
$memory_4 = ntokenizer::get_place($memory_5);
#line 411
$memory_6 = "state";
#line 411
c_rt_lib::set_ref_hash($memory_0, $memory_6, $memory_5);
#line 411
undef($memory_6);
#line 411
undef($memory_5);
#line 411
$memory_2 = {begin => $memory_3,end => $memory_4,};
#line 411
undef($memory_3);
#line 411
undef($memory_4);
#line 413
$memory_3 = c_rt_lib::ov_mk_none('nop');
#line 413
$memory_1 = {debug => $memory_2,value => $memory_3,};
#line 413
undef($memory_2);
#line 413
undef($memory_3);
#line 413
$_[0] = $memory_0;return $memory_1;
#line 413
undef($memory_1);
#line 413
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub nparser_priv::eat_text($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);
#line 420
$memory_2 = "state";
#line 420
$memory_2 = c_rt_lib::get_ref_hash($memory_0, $memory_2);
#line 420
$memory_1 = ntokenizer::is_text($memory_2);
#line 420
$memory_3 = "state";
#line 420
c_rt_lib::set_ref_hash($memory_0, $memory_3, $memory_2);
#line 420
undef($memory_3);
#line 420
undef($memory_2);
#line 420
$memory_1 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_1));
#line 420
if (c_rt_lib::check_true($memory_1)) {goto label_21;}
#line 421
$memory_3 = "state";
#line 421
$memory_3 = c_rt_lib::get_ref_hash($memory_0, $memory_3);
#line 421
$memory_2 = ntokenizer::eat_text($memory_3);
#line 421
$memory_4 = "state";
#line 421
c_rt_lib::set_ref_hash($memory_0, $memory_4, $memory_3);
#line 421
undef($memory_4);
#line 421
undef($memory_3);
#line 421
$memory_2 = c_rt_lib::ov_mk_arg('ok', $memory_2);
#line 421
undef($memory_1);
#line 421
$_[0] = $memory_0;return $memory_2;
#line 421
undef($memory_2);
#line 422
goto label_31;
#line 422
label_21:
#line 423
$memory_2 = "word expected";
#line 423
nparser_priv::add_error($memory_0, $memory_2);
#line 423
undef($memory_2);
#line 424
$memory_2 = "word expected";
#line 424
$memory_2 = c_rt_lib::ov_mk_arg('err', $memory_2);
#line 424
undef($memory_1);
#line 424
$_[0] = $memory_0;return $memory_2;
#line 424
undef($memory_2);
#line 425
goto label_31;
#line 425
label_31:
#line 425
undef($memory_1);
#line 425
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub nparser_priv::parse_variant_label($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);
#line 429
$memory_2 = "state";
#line 429
$memory_2 = c_rt_lib::get_ref_hash($memory_0, $memory_2);
#line 429
$memory_1 = ntokenizer::is_text($memory_2);
#line 429
$memory_3 = "state";
#line 429
c_rt_lib::set_ref_hash($memory_0, $memory_3, $memory_2);
#line 429
undef($memory_3);
#line 429
undef($memory_2);
#line 429
$memory_1 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_1));
#line 429
if (c_rt_lib::check_true($memory_1)) {goto label_20;}
#line 430
$memory_3 = "state";
#line 430
$memory_3 = c_rt_lib::get_ref_hash($memory_0, $memory_3);
#line 430
$memory_2 = ntokenizer::eat_text($memory_3);
#line 430
$memory_4 = "state";
#line 430
c_rt_lib::set_ref_hash($memory_0, $memory_4, $memory_3);
#line 430
undef($memory_4);
#line 430
undef($memory_3);
#line 430
undef($memory_1);
#line 430
$_[0] = $memory_0;return $memory_2;
#line 430
undef($memory_2);
#line 431
goto label_29;
#line 431
label_20:
#line 432
$memory_2 = "word expected";
#line 432
nparser_priv::add_error($memory_0, $memory_2);
#line 432
undef($memory_2);
#line 433
$memory_2 = "";
#line 433
undef($memory_1);
#line 433
$_[0] = $memory_0;return $memory_2;
#line 433
undef($memory_2);
#line 434
goto label_29;
#line 434
label_29:
#line 434
undef($memory_1);
#line 434
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub nparser_priv::parse_variant($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);
#line 438
$memory_1 = ":";
#line 438
nparser_priv::eat($memory_0, $memory_1);
#line 438
undef($memory_1);
#line 439
$memory_1 = nparser_priv::parse_variant_label($memory_0);
#line 440
$memory_2 = nparser_priv::get_value_nop($memory_0);
#line 441
$memory_4 = "(";
#line 441
$memory_3 = nparser_priv::try_eat($memory_0, $memory_4);
#line 441
undef($memory_4);
#line 441
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 441
if (c_rt_lib::check_true($memory_3)) {goto label_26;}
#line 442
$memory_5 = nparser_priv::parse_expr($memory_0);
#line 442
$memory_4 = c_rt_lib::ov_is($memory_5, 'ok');
#line 442
if (c_rt_lib::check_true($memory_4)) {goto label_18;}
#line 442
undef($memory_1);
#line 442
undef($memory_2);
#line 442
undef($memory_3);
#line 442
undef($memory_4);
#line 442
$_[0] = $memory_0;return $memory_5;
#line 442
label_18:
#line 442
$memory_2 = c_rt_lib::ov_as($memory_5, 'ok');
#line 442
undef($memory_4);
#line 442
undef($memory_5);
#line 443
$memory_4 = ")";
#line 443
nparser_priv::eat($memory_0, $memory_4);
#line 443
undef($memory_4);
#line 444
goto label_31;
#line 444
label_26:
#line 445
$memory_4 = nparser_priv::get_value_nop($memory_0);
#line 445
$memory_2 = $memory_4;
#line 445
undef($memory_4);
#line 446
goto label_31;
#line 446
label_31:
#line 446
undef($memory_3);
#line 447
$memory_3 = {name => $memory_1,var => $memory_2,};
#line 447
$memory_3 = c_rt_lib::ov_mk_arg('ok', $memory_3);
#line 447
undef($memory_1);
#line 447
undef($memory_2);
#line 447
$_[0] = $memory_0;return $memory_3;
#line 447
undef($memory_3);
#line 447
undef($memory_1);
#line 447
undef($memory_2);
#line 447
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub nparser_priv::check_lvalue($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];
#line 451
$memory_2 = $memory_1->{'value'};
#line 451
$memory_2 = c_rt_lib::ov_is($memory_2, 'var');
#line 451
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 451
if (c_rt_lib::check_true($memory_2)) {goto label_8;}
#line 452
undef($memory_1);
#line 452
undef($memory_2);
#line 452
$_[0] = $memory_0;return;
#line 453
goto label_46;
#line 453
label_8:
#line 453
$memory_2 = $memory_1->{'value'};
#line 453
$memory_2 = c_rt_lib::ov_is($memory_2, 'bin_op');
#line 453
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 453
if (c_rt_lib::check_true($memory_2)) {goto label_46;}
#line 454
$memory_3 = $memory_1->{'value'};
#line 454
$memory_3 = c_rt_lib::ov_as($memory_3, 'bin_op');
#line 455
$memory_4 = $memory_3->{'op'};
#line 455
$memory_5 = "->";
#line 455
$memory_4 = c_rt_lib::to_nl($memory_4 eq $memory_5);
#line 455
undef($memory_5);
#line 455
if (c_rt_lib::check_true($memory_4)) {goto label_24;}
#line 455
$memory_4 = $memory_3->{'op'};
#line 455
$memory_5 = "ARRAY_INDEX";
#line 455
$memory_4 = c_rt_lib::to_nl($memory_4 eq $memory_5);
#line 455
undef($memory_5);
#line 455
label_24:
#line 455
if (c_rt_lib::check_true($memory_4)) {goto label_30;}
#line 455
$memory_4 = $memory_3->{'op'};
#line 455
$memory_5 = "HASH_INDEX";
#line 455
$memory_4 = c_rt_lib::to_nl($memory_4 eq $memory_5);
#line 455
undef($memory_5);
#line 455
label_30:
#line 455
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 455
if (c_rt_lib::check_true($memory_4)) {goto label_42;}
#line 456
$memory_5 = $memory_3->{'left'};
#line 456
nparser_priv::check_lvalue($memory_0, $memory_5);
#line 456
undef($memory_5);
#line 457
undef($memory_1);
#line 457
undef($memory_2);
#line 457
undef($memory_3);
#line 457
undef($memory_4);
#line 457
$_[0] = $memory_0;return;
#line 458
goto label_42;
#line 458
label_42:
#line 458
undef($memory_4);
#line 458
undef($memory_3);
#line 459
goto label_46;
#line 459
label_46:
#line 459
undef($memory_2);
#line 460
$memory_2 = "invalid expr for lvalue";
#line 460
nparser_priv::add_error($memory_0, $memory_2);
#line 460
undef($memory_2);
#line 460
undef($memory_1);
#line 460
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub nparser_priv::parse_variant_decl($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);
#line 464
$memory_1 = ":";
#line 464
nparser_priv::eat($memory_0, $memory_1);
#line 464
undef($memory_1);
#line 465
$memory_2 = nparser_priv::parse_variant_label($memory_0);
#line 465
$memory_3 = c_rt_lib::ov_mk_none('none');
#line 465
$memory_1 = {name => $memory_2,value => $memory_3,};
#line 465
undef($memory_2);
#line 465
undef($memory_3);
#line 466
$memory_3 = "(";
#line 466
$memory_2 = nparser_priv::try_eat($memory_0, $memory_3);
#line 466
undef($memory_3);
#line 466
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 466
if (c_rt_lib::check_true($memory_2)) {goto label_23;}
#line 467
$memory_3 = nparser_priv::parse_var_decl_sim($memory_0);
#line 467
$memory_3 = c_rt_lib::ov_mk_arg('value', $memory_3);
#line 467
$memory_4 = $memory_3;
#line 467
 if (c_rt_lib::get_hashcount($memory_1) > 1) {$memory_1 = {%{$memory_1}};}$memory_1->{'value'} = $memory_4;
#line 467
undef($memory_3);
#line 467
undef($memory_4);
#line 468
$memory_3 = ")";
#line 468
nparser_priv::eat($memory_0, $memory_3);
#line 468
undef($memory_3);
#line 469
goto label_23;
#line 469
label_23:
#line 469
undef($memory_2);
#line 470
$_[0] = $memory_0;return $memory_1;
#line 470
undef($memory_1);
#line 470
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub nparser_priv::parse_var_decl($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);
#line 474
$memory_1 = "var";
#line 474
nparser_priv::eat($memory_0, $memory_1);
#line 474
undef($memory_1);
#line 475
$memory_2 = "";
#line 475
$memory_3 = c_rt_lib::ov_mk_none('none');
#line 475
$memory_4 = c_rt_lib::ov_mk_none('none');
#line 475
$memory_1 = {name => $memory_2,type => $memory_3,value => $memory_4,};
#line 475
undef($memory_2);
#line 475
undef($memory_3);
#line 475
undef($memory_4);
#line 476
$memory_3 = "state";
#line 476
$memory_3 = c_rt_lib::get_ref_hash($memory_0, $memory_3);
#line 476
$memory_4 = c_rt_lib::ov_mk_none('word');
#line 476
$memory_2 = ntokenizer::is_type($memory_3, $memory_4);
#line 476
undef($memory_4);
#line 476
$memory_4 = "state";
#line 476
c_rt_lib::set_ref_hash($memory_0, $memory_4, $memory_3);
#line 476
undef($memory_4);
#line 476
undef($memory_3);
#line 476
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 476
if (c_rt_lib::check_true($memory_2)) {goto label_35;}
#line 477
$memory_4 = "state";
#line 477
$memory_4 = c_rt_lib::get_ref_hash($memory_0, $memory_4);
#line 477
$memory_5 = c_rt_lib::ov_mk_none('word');
#line 477
$memory_3 = ntokenizer::eat_type($memory_4, $memory_5);
#line 477
undef($memory_5);
#line 477
$memory_5 = "state";
#line 477
c_rt_lib::set_ref_hash($memory_0, $memory_5, $memory_4);
#line 477
undef($memory_5);
#line 477
undef($memory_4);
#line 477
$memory_4 = $memory_3;
#line 477
 if (c_rt_lib::get_hashcount($memory_1) > 1) {$memory_1 = {%{$memory_1}};}$memory_1->{'name'} = $memory_4;
#line 477
undef($memory_3);
#line 477
undef($memory_4);
#line 478
goto label_40;
#line 478
label_35:
#line 479
$memory_3 = "variable name expected";
#line 479
nparser_priv::add_error($memory_0, $memory_3);
#line 479
undef($memory_3);
#line 480
goto label_40;
#line 480
label_40:
#line 480
undef($memory_2);
#line 481
$memory_3 = ":";
#line 481
$memory_2 = nparser_priv::try_eat($memory_0, $memory_3);
#line 481
undef($memory_3);
#line 481
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 481
if (c_rt_lib::check_true($memory_2)) {goto label_66;}
#line 482
$memory_5 = nparser_priv::parse_type($memory_0);
#line 482
$memory_4 = c_rt_lib::ov_is($memory_5, 'ok');
#line 482
if (c_rt_lib::check_true($memory_4)) {goto label_55;}
#line 482
undef($memory_1);
#line 482
undef($memory_2);
#line 482
undef($memory_3);
#line 482
undef($memory_4);
#line 482
$_[0] = $memory_0;return $memory_5;
#line 482
label_55:
#line 482
$memory_3 = c_rt_lib::ov_as($memory_5, 'ok');
#line 482
undef($memory_4);
#line 482
undef($memory_5);
#line 483
$memory_4 = c_rt_lib::ov_mk_arg('type', $memory_3);
#line 483
$memory_5 = $memory_4;
#line 483
 if (c_rt_lib::get_hashcount($memory_1) > 1) {$memory_1 = {%{$memory_1}};}$memory_1->{'type'} = $memory_5;
#line 483
undef($memory_4);
#line 483
undef($memory_5);
#line 483
undef($memory_3);
#line 484
goto label_66;
#line 484
label_66:
#line 484
undef($memory_2);
#line 485
$memory_3 = "=";
#line 485
$memory_2 = nparser_priv::try_eat($memory_0, $memory_3);
#line 485
undef($memory_3);
#line 485
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 485
if (c_rt_lib::check_true($memory_2)) {goto label_92;}
#line 486
$memory_5 = nparser_priv::parse_expr($memory_0);
#line 486
$memory_4 = c_rt_lib::ov_is($memory_5, 'ok');
#line 486
if (c_rt_lib::check_true($memory_4)) {goto label_81;}
#line 486
undef($memory_1);
#line 486
undef($memory_2);
#line 486
undef($memory_3);
#line 486
undef($memory_4);
#line 486
$_[0] = $memory_0;return $memory_5;
#line 486
label_81:
#line 486
$memory_3 = c_rt_lib::ov_as($memory_5, 'ok');
#line 486
undef($memory_4);
#line 486
undef($memory_5);
#line 487
$memory_4 = c_rt_lib::ov_mk_arg('value', $memory_3);
#line 487
$memory_5 = $memory_4;
#line 487
 if (c_rt_lib::get_hashcount($memory_1) > 1) {$memory_1 = {%{$memory_1}};}$memory_1->{'value'} = $memory_5;
#line 487
undef($memory_4);
#line 487
undef($memory_5);
#line 487
undef($memory_3);
#line 488
goto label_92;
#line 488
label_92:
#line 488
undef($memory_2);
#line 489
$memory_2 = c_rt_lib::ov_mk_arg('ok', $memory_1);
#line 489
undef($memory_1);
#line 489
$_[0] = $memory_0;return $memory_2;
#line 489
undef($memory_2);
#line 489
undef($memory_1);
#line 489
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub nparser_priv::parse_var_decl_sim($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);
#line 493
$memory_1 = "var";
#line 493
nparser_priv::eat($memory_0, $memory_1);
#line 493
undef($memory_1);
#line 494
$memory_2 = "";
#line 494
$memory_3 = c_rt_lib::ov_mk_none('none');
#line 494
$memory_4 = c_rt_lib::ov_mk_none('none');
#line 494
$memory_1 = {name => $memory_2,type => $memory_3,value => $memory_4,};
#line 494
undef($memory_2);
#line 494
undef($memory_3);
#line 494
undef($memory_4);
#line 495
$memory_3 = "state";
#line 495
$memory_3 = c_rt_lib::get_ref_hash($memory_0, $memory_3);
#line 495
$memory_4 = c_rt_lib::ov_mk_none('word');
#line 495
$memory_2 = ntokenizer::is_type($memory_3, $memory_4);
#line 495
undef($memory_4);
#line 495
$memory_4 = "state";
#line 495
c_rt_lib::set_ref_hash($memory_0, $memory_4, $memory_3);
#line 495
undef($memory_4);
#line 495
undef($memory_3);
#line 495
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 495
if (c_rt_lib::check_true($memory_2)) {goto label_35;}
#line 496
$memory_4 = "state";
#line 496
$memory_4 = c_rt_lib::get_ref_hash($memory_0, $memory_4);
#line 496
$memory_5 = c_rt_lib::ov_mk_none('word');
#line 496
$memory_3 = ntokenizer::eat_type($memory_4, $memory_5);
#line 496
undef($memory_5);
#line 496
$memory_5 = "state";
#line 496
c_rt_lib::set_ref_hash($memory_0, $memory_5, $memory_4);
#line 496
undef($memory_5);
#line 496
undef($memory_4);
#line 496
$memory_4 = $memory_3;
#line 496
 if (c_rt_lib::get_hashcount($memory_1) > 1) {$memory_1 = {%{$memory_1}};}$memory_1->{'name'} = $memory_4;
#line 496
undef($memory_3);
#line 496
undef($memory_4);
#line 497
goto label_40;
#line 497
label_35:
#line 498
$memory_3 = "variable name expected";
#line 498
nparser_priv::add_error($memory_0, $memory_3);
#line 498
undef($memory_3);
#line 499
goto label_40;
#line 499
label_40:
#line 499
undef($memory_2);
#line 500
$_[0] = $memory_0;return $memory_1;
#line 500
undef($memory_1);
#line 500
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub nparser_priv::parse_cond($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);
#line 504
$memory_1 = "(";
#line 504
nparser_priv::eat($memory_0, $memory_1);
#line 504
undef($memory_1);
#line 505
$memory_3 = nparser_priv::parse_expr($memory_0);
#line 505
$memory_2 = c_rt_lib::ov_is($memory_3, 'ok');
#line 505
if (c_rt_lib::check_true($memory_2)) {goto label_9;}
#line 505
undef($memory_1);
#line 505
undef($memory_2);
#line 505
$_[0] = $memory_0;return $memory_3;
#line 505
label_9:
#line 505
$memory_1 = c_rt_lib::ov_as($memory_3, 'ok');
#line 505
undef($memory_2);
#line 505
undef($memory_3);
#line 506
$memory_2 = ")";
#line 506
nparser_priv::eat($memory_0, $memory_2);
#line 506
undef($memory_2);
#line 507
$memory_2 = c_rt_lib::ov_mk_arg('ok', $memory_1);
#line 507
undef($memory_1);
#line 507
$_[0] = $memory_0;return $memory_2;
#line 507
undef($memory_2);
#line 507
undef($memory_1);
#line 507
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub nparser_priv::parse_block($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);
#line 511
$memory_2 = "state";
#line 511
$memory_2 = c_rt_lib::get_ref_hash($memory_0, $memory_2);
#line 511
$memory_1 = ntokenizer::get_place($memory_2);
#line 511
$memory_3 = "state";
#line 511
c_rt_lib::set_ref_hash($memory_0, $memory_3, $memory_2);
#line 511
undef($memory_3);
#line 511
undef($memory_2);
#line 512
$memory_2 = "{";
#line 512
nparser_priv::eat($memory_0, $memory_2);
#line 512
undef($memory_2);
#line 513
$memory_2 = [];
#line 514
label_11:
#line 514
$memory_4 = "}";
#line 514
$memory_3 = nparser_priv::try_eat($memory_0, $memory_4);
#line 514
undef($memory_4);
#line 514
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 514
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 514
if (c_rt_lib::check_true($memory_3)) {goto label_44;}
#line 515
$memory_5 = ";";
#line 515
$memory_4 = nparser_priv::try_eat($memory_0, $memory_5);
#line 515
undef($memory_5);
#line 515
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 515
if (c_rt_lib::check_true($memory_4)) {goto label_26;}
#line 515
undef($memory_4);
#line 515
goto label_11;
#line 515
goto label_26;
#line 515
label_26:
#line 515
undef($memory_4);
#line 516
$memory_6 = nparser_priv::parse_cmd($memory_0);
#line 516
$memory_5 = c_rt_lib::ov_is($memory_6, 'ok');
#line 516
if (c_rt_lib::check_true($memory_5)) {goto label_37;}
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
label_37:
#line 516
$memory_4 = c_rt_lib::ov_as($memory_6, 'ok');
#line 516
undef($memory_5);
#line 516
undef($memory_6);
#line 517
array::push($memory_2, $memory_4);
#line 517
undef($memory_4);
#line 518
goto label_11;
#line 518
label_44:
#line 518
undef($memory_3);
#line 519
$memory_4 = "state";
#line 519
$memory_4 = c_rt_lib::get_ref_hash($memory_0, $memory_4);
#line 519
$memory_3 = ntokenizer::get_place_ws($memory_4);
#line 519
$memory_5 = "state";
#line 519
c_rt_lib::set_ref_hash($memory_0, $memory_5, $memory_4);
#line 519
undef($memory_5);
#line 519
undef($memory_4);
#line 520
$memory_4 = {begin => $memory_1,end => $memory_3,};
#line 521
$memory_6 = c_rt_lib::ov_mk_arg('block', $memory_2);
#line 521
$memory_5 = {debug => $memory_4,cmd => $memory_6,};
#line 521
undef($memory_6);
#line 521
$memory_5 = c_rt_lib::ov_mk_arg('ok', $memory_5);
#line 521
undef($memory_1);
#line 521
undef($memory_2);
#line 521
undef($memory_3);
#line 521
undef($memory_4);
#line 521
$_[0] = $memory_0;return $memory_5;
#line 521
undef($memory_5);
#line 521
undef($memory_1);
#line 521
undef($memory_2);
#line 521
undef($memory_3);
#line 521
undef($memory_4);
#line 521
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub nparser_priv::parse_try_ensure($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);
#line 525
$memory_2 = "state";
#line 525
$memory_2 = c_rt_lib::get_ref_hash($memory_0, $memory_2);
#line 525
$memory_3 = "var";
#line 525
$memory_1 = ntokenizer::next_is($memory_2, $memory_3);
#line 525
undef($memory_3);
#line 525
$memory_3 = "state";
#line 525
c_rt_lib::set_ref_hash($memory_0, $memory_3, $memory_2);
#line 525
undef($memory_3);
#line 525
undef($memory_2);
#line 525
$memory_1 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_1));
#line 525
if (c_rt_lib::check_true($memory_1)) {goto label_30;}
#line 526
$memory_4 = nparser_priv::parse_var_decl($memory_0);
#line 526
$memory_3 = c_rt_lib::ov_is($memory_4, 'ok');
#line 526
if (c_rt_lib::check_true($memory_3)) {goto label_18;}
#line 526
undef($memory_1);
#line 526
undef($memory_2);
#line 526
undef($memory_3);
#line 526
$_[0] = $memory_0;return $memory_4;
#line 526
label_18:
#line 526
$memory_2 = c_rt_lib::ov_as($memory_4, 'ok');
#line 526
undef($memory_3);
#line 526
undef($memory_4);
#line 527
$memory_3 = c_rt_lib::ov_mk_arg('decl', $memory_2);
#line 527
$memory_3 = c_rt_lib::ov_mk_arg('ok', $memory_3);
#line 527
undef($memory_1);
#line 527
undef($memory_2);
#line 527
$_[0] = $memory_0;return $memory_3;
#line 527
undef($memory_3);
#line 527
undef($memory_2);
#line 528
goto label_79;
#line 528
label_30:
#line 529
$memory_4 = nparser_priv::parse_expr($memory_0);
#line 529
$memory_3 = c_rt_lib::ov_is($memory_4, 'ok');
#line 529
if (c_rt_lib::check_true($memory_3)) {goto label_38;}
#line 529
undef($memory_1);
#line 529
undef($memory_2);
#line 529
undef($memory_3);
#line 529
$_[0] = $memory_0;return $memory_4;
#line 529
label_38:
#line 529
$memory_2 = c_rt_lib::ov_as($memory_4, 'ok');
#line 529
undef($memory_3);
#line 529
undef($memory_4);
#line 530
$memory_3 = $memory_2->{'value'};
#line 530
$memory_3 = c_rt_lib::ov_is($memory_3, 'bin_op');
#line 530
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 530
if (c_rt_lib::check_true($memory_4)) {goto label_52;}
#line 530
$memory_3 = $memory_2->{'value'};
#line 530
$memory_3 = c_rt_lib::ov_as($memory_3, 'bin_op');
#line 530
$memory_3 = $memory_3->{'op'};
#line 530
$memory_5 = "=";
#line 530
$memory_3 = c_rt_lib::to_nl($memory_3 eq $memory_5);
#line 530
undef($memory_5);
#line 530
label_52:
#line 530
undef($memory_4);
#line 530
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 530
if (c_rt_lib::check_true($memory_3)) {goto label_66;}
#line 531
$memory_4 = $memory_2->{'value'};
#line 531
$memory_4 = c_rt_lib::ov_as($memory_4, 'bin_op');
#line 531
$memory_4 = c_rt_lib::ov_mk_arg('lval', $memory_4);
#line 531
$memory_4 = c_rt_lib::ov_mk_arg('ok', $memory_4);
#line 531
undef($memory_1);
#line 531
undef($memory_2);
#line 531
undef($memory_3);
#line 531
$_[0] = $memory_0;return $memory_4;
#line 531
undef($memory_4);
#line 532
goto label_75;
#line 532
label_66:
#line 533
$memory_4 = c_rt_lib::ov_mk_arg('expr', $memory_2);
#line 533
$memory_4 = c_rt_lib::ov_mk_arg('ok', $memory_4);
#line 533
undef($memory_1);
#line 533
undef($memory_2);
#line 533
undef($memory_3);
#line 533
$_[0] = $memory_0;return $memory_4;
#line 533
undef($memory_4);
#line 534
goto label_75;
#line 534
label_75:
#line 534
undef($memory_3);
#line 534
undef($memory_2);
#line 535
goto label_79;
#line 535
label_79:
#line 535
undef($memory_1);
#line 535
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub nparser_priv::get_debug_from_begin($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;$memory_0 = $_[0];
#line 539
$memory_3 = "state";
#line 539
$memory_3 = c_rt_lib::get_ref_hash($memory_0, $memory_3);
#line 539
$memory_2 = ntokenizer::get_place($memory_3);
#line 539
$memory_4 = "state";
#line 539
c_rt_lib::set_ref_hash($memory_0, $memory_4, $memory_3);
#line 539
undef($memory_4);
#line 539
undef($memory_3);
#line 539
$memory_4 = "state";
#line 539
$memory_4 = c_rt_lib::get_ref_hash($memory_0, $memory_4);
#line 539
$memory_3 = ntokenizer::get_place($memory_4);
#line 539
$memory_5 = "state";
#line 539
c_rt_lib::set_ref_hash($memory_0, $memory_5, $memory_4);
#line 539
undef($memory_5);
#line 539
undef($memory_4);
#line 539
$memory_1 = {begin => $memory_2,end => $memory_3,};
#line 539
undef($memory_2);
#line 539
undef($memory_3);
#line 539
undef($memory_0);
#line 539
return $memory_1;
#line 539
undef($memory_1);
#line 539
undef($memory_0);
#line 539
return;
}

sub nparser_priv::parse_cmd($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;my $memory_13;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);
#line 543
$memory_2 = "state";
#line 543
$memory_2 = c_rt_lib::get_ref_hash($memory_0, $memory_2);
#line 543
$memory_1 = ntokenizer::get_place($memory_2);
#line 543
$memory_3 = "state";
#line 543
c_rt_lib::set_ref_hash($memory_0, $memory_3, $memory_2);
#line 543
undef($memory_3);
#line 543
undef($memory_2);
#line 545
$memory_4 = "if";
#line 545
$memory_3 = nparser_priv::try_eat($memory_0, $memory_4);
#line 545
undef($memory_4);
#line 545
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 545
if (c_rt_lib::check_true($memory_3)) {goto label_166;}
#line 546
$memory_4 = {};
#line 547
$memory_6 = nparser_priv::parse_cond($memory_0);
#line 547
$memory_5 = c_rt_lib::ov_is($memory_6, 'ok');
#line 547
if (c_rt_lib::check_true($memory_5)) {goto label_22;}
#line 547
undef($memory_1);
#line 547
undef($memory_2);
#line 547
undef($memory_3);
#line 547
undef($memory_4);
#line 547
undef($memory_5);
#line 547
$_[0] = $memory_0;return $memory_6;
#line 547
label_22:
#line 547
$memory_7 = c_rt_lib::ov_as($memory_6, 'ok');
#line 547
 if (c_rt_lib::get_hashcount($memory_4) > 1) {$memory_4 = {%{$memory_4}};}$memory_4->{'cond'} = $memory_7;
#line 547
undef($memory_5);
#line 547
undef($memory_6);
#line 547
undef($memory_7);
#line 548
$memory_6 = nparser_priv::parse_block($memory_0);
#line 548
$memory_5 = c_rt_lib::ov_is($memory_6, 'ok');
#line 548
if (c_rt_lib::check_true($memory_5)) {goto label_37;}
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
$_[0] = $memory_0;return $memory_6;
#line 548
label_37:
#line 548
$memory_7 = c_rt_lib::ov_as($memory_6, 'ok');
#line 548
 if (c_rt_lib::get_hashcount($memory_4) > 1) {$memory_4 = {%{$memory_4}};}$memory_4->{'if'} = $memory_7;
#line 548
undef($memory_5);
#line 548
undef($memory_6);
#line 548
undef($memory_7);
#line 549
$memory_5 = [];
#line 550
$memory_6 = [];
#line 550
$memory_7 = $memory_6;
#line 550
 if (c_rt_lib::get_hashcount($memory_4) > 1) {$memory_4 = {%{$memory_4}};}$memory_4->{'elsif'} = $memory_7;
#line 550
undef($memory_6);
#line 550
undef($memory_7);
#line 551
label_49:
#line 551
$memory_7 = "elsif";
#line 551
$memory_6 = nparser_priv::try_eat($memory_0, $memory_7);
#line 551
undef($memory_7);
#line 551
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 551
if (c_rt_lib::check_true($memory_6)) {goto label_119;}
#line 552
$memory_7 = {};
#line 553
$memory_9 = "state";
#line 553
$memory_9 = c_rt_lib::get_ref_hash($memory_0, $memory_9);
#line 553
$memory_8 = ntokenizer::get_place($memory_9);
#line 553
$memory_10 = "state";
#line 553
c_rt_lib::set_ref_hash($memory_0, $memory_10, $memory_9);
#line 553
undef($memory_10);
#line 553
undef($memory_9);
#line 554
$memory_10 = nparser_priv::parse_cond($memory_0);
#line 554
$memory_9 = c_rt_lib::ov_is($memory_10, 'ok');
#line 554
if (c_rt_lib::check_true($memory_9)) {goto label_76;}
#line 554
undef($memory_1);
#line 554
undef($memory_2);
#line 554
undef($memory_3);
#line 554
undef($memory_4);
#line 554
undef($memory_5);
#line 554
undef($memory_6);
#line 554
undef($memory_7);
#line 554
undef($memory_8);
#line 554
undef($memory_9);
#line 554
$_[0] = $memory_0;return $memory_10;
#line 554
label_76:
#line 554
$memory_11 = c_rt_lib::ov_as($memory_10, 'ok');
#line 554
 if (c_rt_lib::get_hashcount($memory_7) > 1) {$memory_7 = {%{$memory_7}};}$memory_7->{'cond'} = $memory_11;
#line 554
undef($memory_9);
#line 554
undef($memory_10);
#line 554
undef($memory_11);
#line 555
$memory_10 = "state";
#line 555
$memory_10 = c_rt_lib::get_ref_hash($memory_0, $memory_10);
#line 555
$memory_9 = ntokenizer::get_place_ws($memory_10);
#line 555
$memory_11 = "state";
#line 555
c_rt_lib::set_ref_hash($memory_0, $memory_11, $memory_10);
#line 555
undef($memory_11);
#line 555
undef($memory_10);
#line 556
$memory_10 = {begin => $memory_8,end => $memory_9,};
#line 556
$memory_11 = $memory_10;
#line 556
 if (c_rt_lib::get_hashcount($memory_7) > 1) {$memory_7 = {%{$memory_7}};}$memory_7->{'debug'} = $memory_11;
#line 556
undef($memory_10);
#line 556
undef($memory_11);
#line 557
$memory_11 = nparser_priv::parse_block($memory_0);
#line 557
$memory_10 = c_rt_lib::ov_is($memory_11, 'ok');
#line 557
if (c_rt_lib::check_true($memory_10)) {goto label_108;}
#line 557
undef($memory_1);
#line 557
undef($memory_2);
#line 557
undef($memory_3);
#line 557
undef($memory_4);
#line 557
undef($memory_5);
#line 557
undef($memory_6);
#line 557
undef($memory_7);
#line 557
undef($memory_8);
#line 557
undef($memory_9);
#line 557
undef($memory_10);
#line 557
$_[0] = $memory_0;return $memory_11;
#line 557
label_108:
#line 557
$memory_12 = c_rt_lib::ov_as($memory_11, 'ok');
#line 557
 if (c_rt_lib::get_hashcount($memory_7) > 1) {$memory_7 = {%{$memory_7}};}$memory_7->{'cmd'} = $memory_12;
#line 557
undef($memory_10);
#line 557
undef($memory_11);
#line 557
undef($memory_12);
#line 558
array::push($memory_5, $memory_7);
#line 558
undef($memory_7);
#line 558
undef($memory_8);
#line 558
undef($memory_9);
#line 559
goto label_49;
#line 559
label_119:
#line 559
undef($memory_6);
#line 560
$memory_6 = $memory_5;
#line 560
 if (c_rt_lib::get_hashcount($memory_4) > 1) {$memory_4 = {%{$memory_4}};}$memory_4->{'elsif'} = $memory_6;
#line 560
undef($memory_6);
#line 561
$memory_7 = "else";
#line 561
$memory_6 = nparser_priv::try_eat($memory_0, $memory_7);
#line 561
undef($memory_7);
#line 561
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 561
if (c_rt_lib::check_true($memory_6)) {goto label_147;}
#line 562
$memory_8 = nparser_priv::parse_block($memory_0);
#line 562
$memory_7 = c_rt_lib::ov_is($memory_8, 'ok');
#line 562
if (c_rt_lib::check_true($memory_7)) {goto label_140;}
#line 562
undef($memory_1);
#line 562
undef($memory_2);
#line 562
undef($memory_3);
#line 562
undef($memory_4);
#line 562
undef($memory_5);
#line 562
undef($memory_6);
#line 562
undef($memory_7);
#line 562
$_[0] = $memory_0;return $memory_8;
#line 562
label_140:
#line 562
$memory_9 = c_rt_lib::ov_as($memory_8, 'ok');
#line 562
 if (c_rt_lib::get_hashcount($memory_4) > 1) {$memory_4 = {%{$memory_4}};}$memory_4->{'else'} = $memory_9;
#line 562
undef($memory_7);
#line 562
undef($memory_8);
#line 562
undef($memory_9);
#line 563
goto label_158;
#line 563
label_147:
#line 564
$memory_8 = nparser_priv::get_debug_from_begin($memory_0);
#line 564
$memory_9 = c_rt_lib::ov_mk_none('nop');
#line 564
$memory_7 = {debug => $memory_8,cmd => $memory_9,};
#line 564
undef($memory_8);
#line 564
undef($memory_9);
#line 564
$memory_8 = $memory_7;
#line 564
 if (c_rt_lib::get_hashcount($memory_4) > 1) {$memory_4 = {%{$memory_4}};}$memory_4->{'else'} = $memory_8;
#line 564
undef($memory_7);
#line 564
undef($memory_8);
#line 565
goto label_158;
#line 565
label_158:
#line 565
undef($memory_6);
#line 566
$memory_6 = c_rt_lib::ov_mk_arg('if', $memory_4);
#line 566
$memory_2 = $memory_6;
#line 566
undef($memory_6);
#line 566
undef($memory_4);
#line 566
undef($memory_5);
#line 567
goto label_971;
#line 567
label_166:
#line 567
$memory_4 = "fora";
#line 567
$memory_3 = nparser_priv::try_eat($memory_0, $memory_4);
#line 567
undef($memory_4);
#line 567
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 567
if (c_rt_lib::check_true($memory_3)) {goto label_218;}
#line 568
$memory_4 = {};
#line 569
$memory_5 = c_rt_lib::to_nl(0);
#line 569
$memory_6 = $memory_5;
#line 569
 if (c_rt_lib::get_hashcount($memory_4) > 1) {$memory_4 = {%{$memory_4}};}$memory_4->{'short'} = $memory_6;
#line 569
undef($memory_5);
#line 569
undef($memory_6);
#line 570
$memory_5 = nparser_priv::parse_var_decl_sim($memory_0);
#line 570
$memory_6 = $memory_5;
#line 570
 if (c_rt_lib::get_hashcount($memory_4) > 1) {$memory_4 = {%{$memory_4}};}$memory_4->{'iter'} = $memory_6;
#line 570
undef($memory_5);
#line 570
undef($memory_6);
#line 571
$memory_6 = nparser_priv::parse_cond($memory_0);
#line 571
$memory_5 = c_rt_lib::ov_is($memory_6, 'ok');
#line 571
if (c_rt_lib::check_true($memory_5)) {goto label_192;}
#line 571
undef($memory_1);
#line 571
undef($memory_2);
#line 571
undef($memory_3);
#line 571
undef($memory_4);
#line 571
undef($memory_5);
#line 571
$_[0] = $memory_0;return $memory_6;
#line 571
label_192:
#line 571
$memory_7 = c_rt_lib::ov_as($memory_6, 'ok');
#line 571
 if (c_rt_lib::get_hashcount($memory_4) > 1) {$memory_4 = {%{$memory_4}};}$memory_4->{'array'} = $memory_7;
#line 571
undef($memory_5);
#line 571
undef($memory_6);
#line 571
undef($memory_7);
#line 572
$memory_6 = nparser_priv::parse_block($memory_0);
#line 572
$memory_5 = c_rt_lib::ov_is($memory_6, 'ok');
#line 572
if (c_rt_lib::check_true($memory_5)) {goto label_207;}
#line 572
undef($memory_1);
#line 572
undef($memory_2);
#line 572
undef($memory_3);
#line 572
undef($memory_4);
#line 572
undef($memory_5);
#line 572
$_[0] = $memory_0;return $memory_6;
#line 572
label_207:
#line 572
$memory_7 = c_rt_lib::ov_as($memory_6, 'ok');
#line 572
 if (c_rt_lib::get_hashcount($memory_4) > 1) {$memory_4 = {%{$memory_4}};}$memory_4->{'cmd'} = $memory_7;
#line 572
undef($memory_5);
#line 572
undef($memory_6);
#line 572
undef($memory_7);
#line 573
$memory_5 = c_rt_lib::ov_mk_arg('fora', $memory_4);
#line 573
$memory_2 = $memory_5;
#line 573
undef($memory_5);
#line 573
undef($memory_4);
#line 574
goto label_971;
#line 574
label_218:
#line 574
$memory_4 = "rep";
#line 574
$memory_3 = nparser_priv::try_eat($memory_0, $memory_4);
#line 574
undef($memory_4);
#line 574
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 574
if (c_rt_lib::check_true($memory_3)) {goto label_270;}
#line 575
$memory_4 = {};
#line 576
$memory_5 = c_rt_lib::to_nl(0);
#line 576
$memory_6 = $memory_5;
#line 576
 if (c_rt_lib::get_hashcount($memory_4) > 1) {$memory_4 = {%{$memory_4}};}$memory_4->{'short'} = $memory_6;
#line 576
undef($memory_5);
#line 576
undef($memory_6);
#line 577
$memory_5 = nparser_priv::parse_var_decl_sim($memory_0);
#line 577
$memory_6 = $memory_5;
#line 577
 if (c_rt_lib::get_hashcount($memory_4) > 1) {$memory_4 = {%{$memory_4}};}$memory_4->{'iter'} = $memory_6;
#line 577
undef($memory_5);
#line 577
undef($memory_6);
#line 578
$memory_6 = nparser_priv::parse_cond($memory_0);
#line 578
$memory_5 = c_rt_lib::ov_is($memory_6, 'ok');
#line 578
if (c_rt_lib::check_true($memory_5)) {goto label_244;}
#line 578
undef($memory_1);
#line 578
undef($memory_2);
#line 578
undef($memory_3);
#line 578
undef($memory_4);
#line 578
undef($memory_5);
#line 578
$_[0] = $memory_0;return $memory_6;
#line 578
label_244:
#line 578
$memory_7 = c_rt_lib::ov_as($memory_6, 'ok');
#line 578
 if (c_rt_lib::get_hashcount($memory_4) > 1) {$memory_4 = {%{$memory_4}};}$memory_4->{'count'} = $memory_7;
#line 578
undef($memory_5);
#line 578
undef($memory_6);
#line 578
undef($memory_7);
#line 579
$memory_6 = nparser_priv::parse_block($memory_0);
#line 579
$memory_5 = c_rt_lib::ov_is($memory_6, 'ok');
#line 579
if (c_rt_lib::check_true($memory_5)) {goto label_259;}
#line 579
undef($memory_1);
#line 579
undef($memory_2);
#line 579
undef($memory_3);
#line 579
undef($memory_4);
#line 579
undef($memory_5);
#line 579
$_[0] = $memory_0;return $memory_6;
#line 579
label_259:
#line 579
$memory_7 = c_rt_lib::ov_as($memory_6, 'ok');
#line 579
 if (c_rt_lib::get_hashcount($memory_4) > 1) {$memory_4 = {%{$memory_4}};}$memory_4->{'cmd'} = $memory_7;
#line 579
undef($memory_5);
#line 579
undef($memory_6);
#line 579
undef($memory_7);
#line 580
$memory_5 = c_rt_lib::ov_mk_arg('rep', $memory_4);
#line 580
$memory_2 = $memory_5;
#line 580
undef($memory_5);
#line 580
undef($memory_4);
#line 581
goto label_971;
#line 581
label_270:
#line 581
$memory_4 = "loop";
#line 581
$memory_3 = nparser_priv::try_eat($memory_0, $memory_4);
#line 581
undef($memory_4);
#line 581
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 581
if (c_rt_lib::check_true($memory_3)) {goto label_294;}
#line 582
$memory_6 = nparser_priv::parse_block($memory_0);
#line 582
$memory_5 = c_rt_lib::ov_is($memory_6, 'ok');
#line 582
if (c_rt_lib::check_true($memory_5)) {goto label_285;}
#line 582
undef($memory_1);
#line 582
undef($memory_2);
#line 582
undef($memory_3);
#line 582
undef($memory_4);
#line 582
undef($memory_5);
#line 582
$_[0] = $memory_0;return $memory_6;
#line 582
label_285:
#line 582
$memory_4 = c_rt_lib::ov_as($memory_6, 'ok');
#line 582
undef($memory_5);
#line 582
undef($memory_6);
#line 583
$memory_5 = c_rt_lib::ov_mk_arg('loop', $memory_4);
#line 583
$memory_2 = $memory_5;
#line 583
undef($memory_5);
#line 583
undef($memory_4);
#line 584
goto label_971;
#line 584
label_294:
#line 584
$memory_4 = "forh";
#line 584
$memory_3 = nparser_priv::try_eat($memory_0, $memory_4);
#line 584
undef($memory_4);
#line 584
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 584
if (c_rt_lib::check_true($memory_3)) {goto label_354;}
#line 585
$memory_4 = {};
#line 586
$memory_5 = c_rt_lib::to_nl(0);
#line 586
$memory_6 = $memory_5;
#line 586
 if (c_rt_lib::get_hashcount($memory_4) > 1) {$memory_4 = {%{$memory_4}};}$memory_4->{'short'} = $memory_6;
#line 586
undef($memory_5);
#line 586
undef($memory_6);
#line 587
$memory_5 = nparser_priv::parse_var_decl_sim($memory_0);
#line 587
$memory_6 = $memory_5;
#line 587
 if (c_rt_lib::get_hashcount($memory_4) > 1) {$memory_4 = {%{$memory_4}};}$memory_4->{'key'} = $memory_6;
#line 587
undef($memory_5);
#line 587
undef($memory_6);
#line 588
$memory_5 = ",";
#line 588
nparser_priv::eat($memory_0, $memory_5);
#line 588
undef($memory_5);
#line 589
$memory_5 = nparser_priv::parse_var_decl_sim($memory_0);
#line 589
$memory_6 = $memory_5;
#line 589
 if (c_rt_lib::get_hashcount($memory_4) > 1) {$memory_4 = {%{$memory_4}};}$memory_4->{'val'} = $memory_6;
#line 589
undef($memory_5);
#line 589
undef($memory_6);
#line 590
$memory_6 = nparser_priv::parse_cond($memory_0);
#line 590
$memory_5 = c_rt_lib::ov_is($memory_6, 'ok');
#line 590
if (c_rt_lib::check_true($memory_5)) {goto label_328;}
#line 590
undef($memory_1);
#line 590
undef($memory_2);
#line 590
undef($memory_3);
#line 590
undef($memory_4);
#line 590
undef($memory_5);
#line 590
$_[0] = $memory_0;return $memory_6;
#line 590
label_328:
#line 590
$memory_7 = c_rt_lib::ov_as($memory_6, 'ok');
#line 590
 if (c_rt_lib::get_hashcount($memory_4) > 1) {$memory_4 = {%{$memory_4}};}$memory_4->{'hash'} = $memory_7;
#line 590
undef($memory_5);
#line 590
undef($memory_6);
#line 590
undef($memory_7);
#line 591
$memory_6 = nparser_priv::parse_block($memory_0);
#line 591
$memory_5 = c_rt_lib::ov_is($memory_6, 'ok');
#line 591
if (c_rt_lib::check_true($memory_5)) {goto label_343;}
#line 591
undef($memory_1);
#line 591
undef($memory_2);
#line 591
undef($memory_3);
#line 591
undef($memory_4);
#line 591
undef($memory_5);
#line 591
$_[0] = $memory_0;return $memory_6;
#line 591
label_343:
#line 591
$memory_7 = c_rt_lib::ov_as($memory_6, 'ok');
#line 591
 if (c_rt_lib::get_hashcount($memory_4) > 1) {$memory_4 = {%{$memory_4}};}$memory_4->{'cmd'} = $memory_7;
#line 591
undef($memory_5);
#line 591
undef($memory_6);
#line 591
undef($memory_7);
#line 592
$memory_5 = c_rt_lib::ov_mk_arg('forh', $memory_4);
#line 592
$memory_2 = $memory_5;
#line 592
undef($memory_5);
#line 592
undef($memory_4);
#line 593
goto label_971;
#line 593
label_354:
#line 593
$memory_4 = "while";
#line 593
$memory_3 = nparser_priv::try_eat($memory_0, $memory_4);
#line 593
undef($memory_4);
#line 593
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 593
if (c_rt_lib::check_true($memory_3)) {goto label_401;}
#line 594
$memory_4 = {};
#line 595
$memory_5 = c_rt_lib::to_nl(0);
#line 595
$memory_6 = $memory_5;
#line 595
 if (c_rt_lib::get_hashcount($memory_4) > 1) {$memory_4 = {%{$memory_4}};}$memory_4->{'short'} = $memory_6;
#line 595
undef($memory_5);
#line 595
undef($memory_6);
#line 596
$memory_6 = nparser_priv::parse_cond($memory_0);
#line 596
$memory_5 = c_rt_lib::ov_is($memory_6, 'ok');
#line 596
if (c_rt_lib::check_true($memory_5)) {goto label_375;}
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
$_[0] = $memory_0;return $memory_6;
#line 596
label_375:
#line 596
$memory_7 = c_rt_lib::ov_as($memory_6, 'ok');
#line 596
 if (c_rt_lib::get_hashcount($memory_4) > 1) {$memory_4 = {%{$memory_4}};}$memory_4->{'cond'} = $memory_7;
#line 596
undef($memory_5);
#line 596
undef($memory_6);
#line 596
undef($memory_7);
#line 597
$memory_6 = nparser_priv::parse_block($memory_0);
#line 597
$memory_5 = c_rt_lib::ov_is($memory_6, 'ok');
#line 597
if (c_rt_lib::check_true($memory_5)) {goto label_390;}
#line 597
undef($memory_1);
#line 597
undef($memory_2);
#line 597
undef($memory_3);
#line 597
undef($memory_4);
#line 597
undef($memory_5);
#line 597
$_[0] = $memory_0;return $memory_6;
#line 597
label_390:
#line 597
$memory_7 = c_rt_lib::ov_as($memory_6, 'ok');
#line 597
 if (c_rt_lib::get_hashcount($memory_4) > 1) {$memory_4 = {%{$memory_4}};}$memory_4->{'cmd'} = $memory_7;
#line 597
undef($memory_5);
#line 597
undef($memory_6);
#line 597
undef($memory_7);
#line 598
$memory_5 = c_rt_lib::ov_mk_arg('while', $memory_4);
#line 598
$memory_2 = $memory_5;
#line 598
undef($memory_5);
#line 598
undef($memory_4);
#line 599
goto label_971;
#line 599
label_401:
#line 599
$memory_4 = "for";
#line 599
$memory_3 = nparser_priv::try_eat($memory_0, $memory_4);
#line 599
undef($memory_4);
#line 599
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 599
if (c_rt_lib::check_true($memory_3)) {goto label_589;}
#line 600
$memory_4 = {};
#line 601
$memory_5 = "(";
#line 601
nparser_priv::eat($memory_0, $memory_5);
#line 601
undef($memory_5);
#line 602
$memory_6 = "state";
#line 602
$memory_6 = c_rt_lib::get_ref_hash($memory_0, $memory_6);
#line 602
$memory_7 = "var";
#line 602
$memory_5 = ntokenizer::next_is($memory_6, $memory_7);
#line 602
undef($memory_7);
#line 602
$memory_7 = "state";
#line 602
c_rt_lib::set_ref_hash($memory_0, $memory_7, $memory_6);
#line 602
undef($memory_7);
#line 602
undef($memory_6);
#line 602
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 602
if (c_rt_lib::check_true($memory_5)) {goto label_444;}
#line 603
$memory_8 = nparser_priv::parse_var_decl($memory_0);
#line 603
$memory_7 = c_rt_lib::ov_is($memory_8, 'ok');
#line 603
if (c_rt_lib::check_true($memory_7)) {goto label_433;}
#line 603
undef($memory_1);
#line 603
undef($memory_2);
#line 603
undef($memory_3);
#line 603
undef($memory_4);
#line 603
undef($memory_5);
#line 603
undef($memory_6);
#line 603
undef($memory_7);
#line 603
$_[0] = $memory_0;return $memory_8;
#line 603
label_433:
#line 603
$memory_6 = c_rt_lib::ov_as($memory_8, 'ok');
#line 603
undef($memory_7);
#line 603
undef($memory_8);
#line 604
$memory_7 = c_rt_lib::ov_mk_arg('var_decl', $memory_6);
#line 604
$memory_8 = $memory_7;
#line 604
 if (c_rt_lib::get_hashcount($memory_4) > 1) {$memory_4 = {%{$memory_4}};}$memory_4->{'start'} = $memory_8;
#line 604
undef($memory_7);
#line 604
undef($memory_8);
#line 604
undef($memory_6);
#line 605
goto label_486;
#line 605
label_444:
#line 605
$memory_6 = "state";
#line 605
$memory_6 = c_rt_lib::get_ref_hash($memory_0, $memory_6);
#line 605
$memory_7 = ";";
#line 605
$memory_5 = ntokenizer::next_is($memory_6, $memory_7);
#line 605
undef($memory_7);
#line 605
$memory_7 = "state";
#line 605
c_rt_lib::set_ref_hash($memory_0, $memory_7, $memory_6);
#line 605
undef($memory_7);
#line 605
undef($memory_6);
#line 605
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 605
if (c_rt_lib::check_true($memory_5)) {goto label_463;}
#line 606
$memory_6 = nparser_priv::get_value_nop($memory_0);
#line 606
$memory_6 = c_rt_lib::ov_mk_arg('value', $memory_6);
#line 606
$memory_7 = $memory_6;
#line 606
 if (c_rt_lib::get_hashcount($memory_4) > 1) {$memory_4 = {%{$memory_4}};}$memory_4->{'start'} = $memory_7;
#line 606
undef($memory_6);
#line 606
undef($memory_7);
#line 607
goto label_486;
#line 607
label_463:
#line 608
$memory_8 = nparser_priv::parse_expr($memory_0);
#line 608
$memory_7 = c_rt_lib::ov_is($memory_8, 'ok');
#line 608
if (c_rt_lib::check_true($memory_7)) {goto label_475;}
#line 608
undef($memory_1);
#line 608
undef($memory_2);
#line 608
undef($memory_3);
#line 608
undef($memory_4);
#line 608
undef($memory_5);
#line 608
undef($memory_6);
#line 608
undef($memory_7);
#line 608
$_[0] = $memory_0;return $memory_8;
#line 608
label_475:
#line 608
$memory_6 = c_rt_lib::ov_as($memory_8, 'ok');
#line 608
undef($memory_7);
#line 608
undef($memory_8);
#line 609
$memory_7 = c_rt_lib::ov_mk_arg('value', $memory_6);
#line 609
$memory_8 = $memory_7;
#line 609
 if (c_rt_lib::get_hashcount($memory_4) > 1) {$memory_4 = {%{$memory_4}};}$memory_4->{'start'} = $memory_8;
#line 609
undef($memory_7);
#line 609
undef($memory_8);
#line 609
undef($memory_6);
#line 610
goto label_486;
#line 610
label_486:
#line 610
undef($memory_5);
#line 611
$memory_5 = ";";
#line 611
nparser_priv::eat($memory_0, $memory_5);
#line 611
undef($memory_5);
#line 612
$memory_5 = nparser_priv::get_value_nop($memory_0);
#line 612
$memory_6 = $memory_5;
#line 612
 if (c_rt_lib::get_hashcount($memory_4) > 1) {$memory_4 = {%{$memory_4}};}$memory_4->{'cond'} = $memory_6;
#line 612
undef($memory_5);
#line 612
undef($memory_6);
#line 613
$memory_6 = "state";
#line 613
$memory_6 = c_rt_lib::get_ref_hash($memory_0, $memory_6);
#line 613
$memory_7 = ";";
#line 613
$memory_5 = ntokenizer::next_is($memory_6, $memory_7);
#line 613
undef($memory_7);
#line 613
$memory_7 = "state";
#line 613
c_rt_lib::set_ref_hash($memory_0, $memory_7, $memory_6);
#line 613
undef($memory_7);
#line 613
undef($memory_6);
#line 613
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 613
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 613
if (c_rt_lib::check_true($memory_5)) {goto label_525;}
#line 613
$memory_7 = nparser_priv::parse_expr($memory_0);
#line 613
$memory_6 = c_rt_lib::ov_is($memory_7, 'ok');
#line 613
if (c_rt_lib::check_true($memory_6)) {goto label_518;}
#line 613
undef($memory_1);
#line 613
undef($memory_2);
#line 613
undef($memory_3);
#line 613
undef($memory_4);
#line 613
undef($memory_5);
#line 613
undef($memory_6);
#line 613
$_[0] = $memory_0;return $memory_7;
#line 613
label_518:
#line 613
$memory_8 = c_rt_lib::ov_as($memory_7, 'ok');
#line 613
 if (c_rt_lib::get_hashcount($memory_4) > 1) {$memory_4 = {%{$memory_4}};}$memory_4->{'cond'} = $memory_8;
#line 613
undef($memory_6);
#line 613
undef($memory_7);
#line 613
undef($memory_8);
#line 613
goto label_525;
#line 613
label_525:
#line 613
undef($memory_5);
#line 614
$memory_5 = ";";
#line 614
nparser_priv::eat($memory_0, $memory_5);
#line 614
undef($memory_5);
#line 615
$memory_5 = nparser_priv::get_value_nop($memory_0);
#line 615
$memory_6 = $memory_5;
#line 615
 if (c_rt_lib::get_hashcount($memory_4) > 1) {$memory_4 = {%{$memory_4}};}$memory_4->{'iter'} = $memory_6;
#line 615
undef($memory_5);
#line 615
undef($memory_6);
#line 616
$memory_6 = "state";
#line 616
$memory_6 = c_rt_lib::get_ref_hash($memory_0, $memory_6);
#line 616
$memory_7 = ")";
#line 616
$memory_5 = ntokenizer::next_is($memory_6, $memory_7);
#line 616
undef($memory_7);
#line 616
$memory_7 = "state";
#line 616
c_rt_lib::set_ref_hash($memory_0, $memory_7, $memory_6);
#line 616
undef($memory_7);
#line 616
undef($memory_6);
#line 616
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 616
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 616
if (c_rt_lib::check_true($memory_5)) {goto label_564;}
#line 616
$memory_7 = nparser_priv::parse_expr($memory_0);
#line 616
$memory_6 = c_rt_lib::ov_is($memory_7, 'ok');
#line 616
if (c_rt_lib::check_true($memory_6)) {goto label_557;}
#line 616
undef($memory_1);
#line 616
undef($memory_2);
#line 616
undef($memory_3);
#line 616
undef($memory_4);
#line 616
undef($memory_5);
#line 616
undef($memory_6);
#line 616
$_[0] = $memory_0;return $memory_7;
#line 616
label_557:
#line 616
$memory_8 = c_rt_lib::ov_as($memory_7, 'ok');
#line 616
 if (c_rt_lib::get_hashcount($memory_4) > 1) {$memory_4 = {%{$memory_4}};}$memory_4->{'iter'} = $memory_8;
#line 616
undef($memory_6);
#line 616
undef($memory_7);
#line 616
undef($memory_8);
#line 616
goto label_564;
#line 616
label_564:
#line 616
undef($memory_5);
#line 617
$memory_5 = ")";
#line 617
nparser_priv::eat($memory_0, $memory_5);
#line 617
undef($memory_5);
#line 618
$memory_6 = nparser_priv::parse_block($memory_0);
#line 618
$memory_5 = c_rt_lib::ov_is($memory_6, 'ok');
#line 618
if (c_rt_lib::check_true($memory_5)) {goto label_578;}
#line 618
undef($memory_1);
#line 618
undef($memory_2);
#line 618
undef($memory_3);
#line 618
undef($memory_4);
#line 618
undef($memory_5);
#line 618
$_[0] = $memory_0;return $memory_6;
#line 618
label_578:
#line 618
$memory_7 = c_rt_lib::ov_as($memory_6, 'ok');
#line 618
 if (c_rt_lib::get_hashcount($memory_4) > 1) {$memory_4 = {%{$memory_4}};}$memory_4->{'cmd'} = $memory_7;
#line 618
undef($memory_5);
#line 618
undef($memory_6);
#line 618
undef($memory_7);
#line 619
$memory_5 = c_rt_lib::ov_mk_arg('for', $memory_4);
#line 619
$memory_2 = $memory_5;
#line 619
undef($memory_5);
#line 619
undef($memory_4);
#line 620
goto label_971;
#line 620
label_589:
#line 620
$memory_4 = "state";
#line 620
$memory_4 = c_rt_lib::get_ref_hash($memory_0, $memory_4);
#line 620
$memory_5 = "{";
#line 620
$memory_3 = ntokenizer::next_is($memory_4, $memory_5);
#line 620
undef($memory_5);
#line 620
$memory_5 = "state";
#line 620
c_rt_lib::set_ref_hash($memory_0, $memory_5, $memory_4);
#line 620
undef($memory_5);
#line 620
undef($memory_4);
#line 620
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 620
if (c_rt_lib::check_true($memory_3)) {goto label_619;}
#line 621
$memory_6 = nparser_priv::parse_block($memory_0);
#line 621
$memory_5 = c_rt_lib::ov_is($memory_6, 'ok');
#line 621
if (c_rt_lib::check_true($memory_5)) {goto label_610;}
#line 621
undef($memory_1);
#line 621
undef($memory_2);
#line 621
undef($memory_3);
#line 621
undef($memory_4);
#line 621
undef($memory_5);
#line 621
$_[0] = $memory_0;return $memory_6;
#line 621
label_610:
#line 621
$memory_4 = c_rt_lib::ov_as($memory_6, 'ok');
#line 621
undef($memory_5);
#line 621
undef($memory_6);
#line 622
$memory_5 = $memory_4->{'cmd'};
#line 622
$memory_2 = $memory_5;
#line 622
undef($memory_5);
#line 622
undef($memory_4);
#line 623
goto label_971;
#line 623
label_619:
#line 623
$memory_4 = "break";
#line 623
$memory_3 = nparser_priv::try_eat($memory_0, $memory_4);
#line 623
undef($memory_4);
#line 623
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 623
if (c_rt_lib::check_true($memory_3)) {goto label_629;}
#line 624
$memory_4 = c_rt_lib::ov_mk_none('break');
#line 624
$memory_2 = $memory_4;
#line 624
undef($memory_4);
#line 625
goto label_971;
#line 625
label_629:
#line 625
$memory_4 = "continue";
#line 625
$memory_3 = nparser_priv::try_eat($memory_0, $memory_4);
#line 625
undef($memory_4);
#line 625
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 625
if (c_rt_lib::check_true($memory_3)) {goto label_639;}
#line 626
$memory_4 = c_rt_lib::ov_mk_none('continue');
#line 626
$memory_2 = $memory_4;
#line 626
undef($memory_4);
#line 627
goto label_971;
#line 627
label_639:
#line 627
$memory_4 = "return";
#line 627
$memory_3 = nparser_priv::try_eat($memory_0, $memory_4);
#line 627
undef($memory_4);
#line 627
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 627
if (c_rt_lib::check_true($memory_3)) {goto label_716;}
#line 628
$memory_5 = "state";
#line 628
$memory_5 = c_rt_lib::get_ref_hash($memory_0, $memory_5);
#line 628
$memory_4 = ntokenizer::get_token($memory_5);
#line 628
$memory_6 = "state";
#line 628
c_rt_lib::set_ref_hash($memory_0, $memory_6, $memory_5);
#line 628
undef($memory_6);
#line 628
undef($memory_5);
#line 629
$memory_5 = c_rt_lib::to_nl(0);
#line 630
$memory_6 = nparser_priv::get_end_list();
#line 630
$memory_8 = 0;
#line 630
$memory_9 = 1;
#line 630
$memory_10 = c_rt_lib::array_len($memory_6);
#line 630
label_657:
#line 630
$memory_11 = c_rt_lib::to_nl($memory_8 >= $memory_10);
#line 630
if (c_rt_lib::check_true($memory_11)) {goto label_674;}
#line 630
$memory_7 = $memory_6->[$memory_8];
#line 631
$memory_12 = c_rt_lib::to_nl($memory_4 eq $memory_7);
#line 631
$memory_12 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_12));
#line 631
if (c_rt_lib::check_true($memory_12)) {goto label_670;}
#line 632
$memory_13 = c_rt_lib::to_nl(1);
#line 632
$memory_5 = $memory_13;
#line 632
undef($memory_13);
#line 633
undef($memory_12);
#line 633
goto label_674;
#line 634
goto label_670;
#line 634
label_670:
#line 634
undef($memory_12);
#line 635
$memory_8 = $memory_8 + $memory_9;
#line 635
goto label_657;
#line 635
label_674:
#line 635
undef($memory_6);
#line 635
undef($memory_7);
#line 635
undef($memory_8);
#line 635
undef($memory_9);
#line 635
undef($memory_10);
#line 635
undef($memory_11);
#line 636
$memory_6 = $memory_5;
#line 636
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 636
if (c_rt_lib::check_true($memory_6)) {goto label_689;}
#line 637
$memory_7 = nparser_priv::get_value_nop($memory_0);
#line 637
$memory_7 = c_rt_lib::ov_mk_arg('return', $memory_7);
#line 637
$memory_2 = $memory_7;
#line 637
undef($memory_7);
#line 638
goto label_711;
#line 638
label_689:
#line 639
$memory_9 = nparser_priv::parse_expr($memory_0);
#line 639
$memory_8 = c_rt_lib::ov_is($memory_9, 'ok');
#line 639
if (c_rt_lib::check_true($memory_8)) {goto label_702;}
#line 639
undef($memory_1);
#line 639
undef($memory_2);
#line 639
undef($memory_3);
#line 639
undef($memory_4);
#line 639
undef($memory_5);
#line 639
undef($memory_6);
#line 639
undef($memory_7);
#line 639
undef($memory_8);
#line 639
$_[0] = $memory_0;return $memory_9;
#line 639
label_702:
#line 639
$memory_7 = c_rt_lib::ov_as($memory_9, 'ok');
#line 639
undef($memory_8);
#line 639
undef($memory_9);
#line 640
$memory_8 = c_rt_lib::ov_mk_arg('return', $memory_7);
#line 640
$memory_2 = $memory_8;
#line 640
undef($memory_8);
#line 640
undef($memory_7);
#line 641
goto label_711;
#line 641
label_711:
#line 641
undef($memory_6);
#line 641
undef($memory_4);
#line 641
undef($memory_5);
#line 642
goto label_971;
#line 642
label_716:
#line 642
$memory_4 = "match";
#line 642
$memory_3 = nparser_priv::try_eat($memory_0, $memory_4);
#line 642
undef($memory_4);
#line 642
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 642
if (c_rt_lib::check_true($memory_3)) {goto label_819;}
#line 643
$memory_4 = "(";
#line 643
nparser_priv::eat($memory_0, $memory_4);
#line 643
undef($memory_4);
#line 644
$memory_6 = nparser_priv::parse_expr($memory_0);
#line 644
$memory_5 = c_rt_lib::ov_is($memory_6, 'ok');
#line 644
if (c_rt_lib::check_true($memory_5)) {goto label_734;}
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
$_[0] = $memory_0;return $memory_6;
#line 644
label_734:
#line 644
$memory_4 = c_rt_lib::ov_as($memory_6, 'ok');
#line 644
undef($memory_5);
#line 644
undef($memory_6);
#line 645
$memory_6 = [];
#line 645
$memory_5 = {val => $memory_4,branch_list => $memory_6,};
#line 645
undef($memory_6);
#line 646
$memory_6 = ")";
#line 646
nparser_priv::eat($memory_0, $memory_6);
#line 646
undef($memory_6);
#line 647
$memory_7 = "state";
#line 647
$memory_7 = c_rt_lib::get_ref_hash($memory_0, $memory_7);
#line 647
$memory_6 = ntokenizer::get_place($memory_7);
#line 647
$memory_8 = "state";
#line 647
c_rt_lib::set_ref_hash($memory_0, $memory_8, $memory_7);
#line 647
undef($memory_8);
#line 647
undef($memory_7);
#line 648
label_751:
#line 648
$memory_8 = "case";
#line 648
$memory_7 = nparser_priv::try_eat($memory_0, $memory_8);
#line 648
undef($memory_8);
#line 648
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 648
if (c_rt_lib::check_true($memory_7)) {goto label_810;}
#line 649
$memory_9 = nparser_priv::parse_variant_decl($memory_0);
#line 649
$memory_8 = {variant => $memory_9,};
#line 649
undef($memory_9);
#line 650
$memory_11 = "state";
#line 650
$memory_11 = c_rt_lib::get_ref_hash($memory_0, $memory_11);
#line 650
$memory_10 = ntokenizer::get_place_ws($memory_11);
#line 650
$memory_12 = "state";
#line 650
c_rt_lib::set_ref_hash($memory_0, $memory_12, $memory_11);
#line 650
undef($memory_12);
#line 650
undef($memory_11);
#line 650
$memory_9 = {begin => $memory_6,end => $memory_10,};
#line 650
undef($memory_10);
#line 650
$memory_10 = $memory_9;
#line 650
 if (c_rt_lib::get_hashcount($memory_8) > 1) {$memory_8 = {%{$memory_8}};}$memory_8->{'debug'} = $memory_10;
#line 650
undef($memory_9);
#line 650
undef($memory_10);
#line 651
$memory_10 = nparser_priv::parse_block($memory_0);
#line 651
$memory_9 = c_rt_lib::ov_is($memory_10, 'ok');
#line 651
if (c_rt_lib::check_true($memory_9)) {goto label_786;}
#line 651
undef($memory_1);
#line 651
undef($memory_2);
#line 651
undef($memory_3);
#line 651
undef($memory_4);
#line 651
undef($memory_5);
#line 651
undef($memory_6);
#line 651
undef($memory_7);
#line 651
undef($memory_8);
#line 651
undef($memory_9);
#line 651
$_[0] = $memory_0;return $memory_10;
#line 651
label_786:
#line 651
$memory_11 = c_rt_lib::ov_as($memory_10, 'ok');
#line 651
 if (c_rt_lib::get_hashcount($memory_8) > 1) {$memory_8 = {%{$memory_8}};}$memory_8->{'cmd'} = $memory_11;
#line 651
undef($memory_9);
#line 651
undef($memory_10);
#line 651
undef($memory_11);
#line 652
$memory_9 = "branch_list";
#line 652
$memory_9 = c_rt_lib::get_ref_hash($memory_5, $memory_9);
#line 652
array::push($memory_9, $memory_8);
#line 652
$memory_10 = "branch_list";
#line 652
c_rt_lib::set_ref_hash($memory_5, $memory_10, $memory_9);
#line 652
undef($memory_10);
#line 652
undef($memory_9);
#line 653
$memory_10 = "state";
#line 653
$memory_10 = c_rt_lib::get_ref_hash($memory_0, $memory_10);
#line 653
$memory_9 = ntokenizer::get_place($memory_10);
#line 653
$memory_11 = "state";
#line 653
c_rt_lib::set_ref_hash($memory_0, $memory_11, $memory_10);
#line 653
undef($memory_11);
#line 653
undef($memory_10);
#line 653
$memory_6 = $memory_9;
#line 653
undef($memory_9);
#line 653
undef($memory_8);
#line 654
goto label_751;
#line 654
label_810:
#line 654
undef($memory_7);
#line 655
$memory_7 = c_rt_lib::ov_mk_arg('match', $memory_5);
#line 655
$memory_2 = $memory_7;
#line 655
undef($memory_7);
#line 655
undef($memory_4);
#line 655
undef($memory_5);
#line 655
undef($memory_6);
#line 656
goto label_971;
#line 656
label_819:
#line 656
$memory_4 = "die";
#line 656
$memory_3 = nparser_priv::try_eat($memory_0, $memory_4);
#line 656
undef($memory_4);
#line 656
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 656
if (c_rt_lib::check_true($memory_3)) {goto label_853;}
#line 657
$memory_4 = [];
#line 658
$memory_6 = "(";
#line 658
$memory_5 = nparser_priv::try_eat($memory_0, $memory_6);
#line 658
undef($memory_6);
#line 658
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 658
if (c_rt_lib::check_true($memory_5)) {goto label_846;}
#line 659
$memory_7 = nparser_priv::parse_expr_list($memory_0);
#line 659
$memory_6 = c_rt_lib::ov_is($memory_7, 'ok');
#line 659
if (c_rt_lib::check_true($memory_6)) {goto label_841;}
#line 659
undef($memory_1);
#line 659
undef($memory_2);
#line 659
undef($memory_3);
#line 659
undef($memory_4);
#line 659
undef($memory_5);
#line 659
undef($memory_6);
#line 659
$_[0] = $memory_0;return $memory_7;
#line 659
label_841:
#line 659
$memory_4 = c_rt_lib::ov_as($memory_7, 'ok');
#line 659
undef($memory_6);
#line 659
undef($memory_7);
#line 660
goto label_846;
#line 660
label_846:
#line 660
undef($memory_5);
#line 661
$memory_5 = c_rt_lib::ov_mk_arg('die', $memory_4);
#line 661
$memory_2 = $memory_5;
#line 661
undef($memory_5);
#line 661
undef($memory_4);
#line 662
goto label_971;
#line 662
label_853:
#line 662
$memory_4 = "state";
#line 662
$memory_4 = c_rt_lib::get_ref_hash($memory_0, $memory_4);
#line 662
$memory_5 = "var";
#line 662
$memory_3 = ntokenizer::next_is($memory_4, $memory_5);
#line 662
undef($memory_5);
#line 662
$memory_5 = "state";
#line 662
c_rt_lib::set_ref_hash($memory_0, $memory_5, $memory_4);
#line 662
undef($memory_5);
#line 662
undef($memory_4);
#line 662
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 662
if (c_rt_lib::check_true($memory_3)) {goto label_886;}
#line 663
$memory_6 = nparser_priv::parse_var_decl($memory_0);
#line 663
$memory_5 = c_rt_lib::ov_is($memory_6, 'ok');
#line 663
if (c_rt_lib::check_true($memory_5)) {goto label_874;}
#line 663
undef($memory_1);
#line 663
undef($memory_2);
#line 663
undef($memory_3);
#line 663
undef($memory_4);
#line 663
undef($memory_5);
#line 663
$_[0] = $memory_0;return $memory_6;
#line 663
label_874:
#line 663
$memory_4 = c_rt_lib::ov_as($memory_6, 'ok');
#line 663
undef($memory_5);
#line 663
undef($memory_6);
#line 664
$memory_5 = c_rt_lib::ov_mk_arg('var_decl', $memory_4);
#line 664
$memory_2 = $memory_5;
#line 664
undef($memory_5);
#line 665
$memory_5 = ";";
#line 665
nparser_priv::eat($memory_0, $memory_5);
#line 665
undef($memory_5);
#line 665
undef($memory_4);
#line 666
goto label_971;
#line 666
label_886:
#line 666
$memory_4 = "state";
#line 666
$memory_4 = c_rt_lib::get_ref_hash($memory_0, $memory_4);
#line 666
$memory_5 = "try";
#line 666
$memory_3 = ntokenizer::next_is($memory_4, $memory_5);
#line 666
undef($memory_5);
#line 666
$memory_5 = "state";
#line 666
c_rt_lib::set_ref_hash($memory_0, $memory_5, $memory_4);
#line 666
undef($memory_5);
#line 666
undef($memory_4);
#line 666
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 666
if (c_rt_lib::check_true($memory_3)) {goto label_919;}
#line 667
$memory_4 = "try";
#line 667
nparser_priv::eat($memory_0, $memory_4);
#line 667
undef($memory_4);
#line 668
$memory_6 = nparser_priv::parse_try_ensure($memory_0);
#line 668
$memory_5 = c_rt_lib::ov_is($memory_6, 'ok');
#line 668
if (c_rt_lib::check_true($memory_5)) {goto label_910;}
#line 668
undef($memory_1);
#line 668
undef($memory_2);
#line 668
undef($memory_3);
#line 668
undef($memory_4);
#line 668
undef($memory_5);
#line 668
$_[0] = $memory_0;return $memory_6;
#line 668
label_910:
#line 668
$memory_4 = c_rt_lib::ov_as($memory_6, 'ok');
#line 668
undef($memory_5);
#line 668
undef($memory_6);
#line 669
$memory_5 = c_rt_lib::ov_mk_arg('try', $memory_4);
#line 669
$memory_2 = $memory_5;
#line 669
undef($memory_5);
#line 669
undef($memory_4);
#line 670
goto label_971;
#line 670
label_919:
#line 670
$memory_4 = "state";
#line 670
$memory_4 = c_rt_lib::get_ref_hash($memory_0, $memory_4);
#line 670
$memory_5 = "ensure";
#line 670
$memory_3 = ntokenizer::next_is($memory_4, $memory_5);
#line 670
undef($memory_5);
#line 670
$memory_5 = "state";
#line 670
c_rt_lib::set_ref_hash($memory_0, $memory_5, $memory_4);
#line 670
undef($memory_5);
#line 670
undef($memory_4);
#line 670
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 670
if (c_rt_lib::check_true($memory_3)) {goto label_952;}
#line 671
$memory_4 = "ensure";
#line 671
nparser_priv::eat($memory_0, $memory_4);
#line 671
undef($memory_4);
#line 672
$memory_6 = nparser_priv::parse_try_ensure($memory_0);
#line 672
$memory_5 = c_rt_lib::ov_is($memory_6, 'ok');
#line 672
if (c_rt_lib::check_true($memory_5)) {goto label_943;}
#line 672
undef($memory_1);
#line 672
undef($memory_2);
#line 672
undef($memory_3);
#line 672
undef($memory_4);
#line 672
undef($memory_5);
#line 672
$_[0] = $memory_0;return $memory_6;
#line 672
label_943:
#line 672
$memory_4 = c_rt_lib::ov_as($memory_6, 'ok');
#line 672
undef($memory_5);
#line 672
undef($memory_6);
#line 673
$memory_5 = c_rt_lib::ov_mk_arg('ensure', $memory_4);
#line 673
$memory_2 = $memory_5;
#line 673
undef($memory_5);
#line 673
undef($memory_4);
#line 674
goto label_971;
#line 674
label_952:
#line 675
$memory_6 = nparser_priv::parse_expr($memory_0);
#line 675
$memory_5 = c_rt_lib::ov_is($memory_6, 'ok');
#line 675
if (c_rt_lib::check_true($memory_5)) {goto label_962;}
#line 675
undef($memory_1);
#line 675
undef($memory_2);
#line 675
undef($memory_3);
#line 675
undef($memory_4);
#line 675
undef($memory_5);
#line 675
$_[0] = $memory_0;return $memory_6;
#line 675
label_962:
#line 675
$memory_4 = c_rt_lib::ov_as($memory_6, 'ok');
#line 675
undef($memory_5);
#line 675
undef($memory_6);
#line 676
$memory_5 = c_rt_lib::ov_mk_arg('value', $memory_4);
#line 676
$memory_2 = $memory_5;
#line 676
undef($memory_5);
#line 676
undef($memory_4);
#line 677
goto label_971;
#line 677
label_971:
#line 677
undef($memory_3);
#line 678
$memory_3 = $memory_2;
#line 678
$memory_3 = c_rt_lib::ov_is($memory_3, 'break');
#line 678
if (c_rt_lib::check_true($memory_3)) {goto label_978;}
#line 678
$memory_3 = $memory_2;
#line 678
$memory_3 = c_rt_lib::ov_is($memory_3, 'continue');
#line 678
label_978:
#line 678
if (c_rt_lib::check_true($memory_3)) {goto label_982;}
#line 678
$memory_3 = $memory_2;
#line 678
$memory_3 = c_rt_lib::ov_is($memory_3, 'value');
#line 678
label_982:
#line 678
if (c_rt_lib::check_true($memory_3)) {goto label_986;}
#line 678
$memory_3 = $memory_2;
#line 678
$memory_3 = c_rt_lib::ov_is($memory_3, 'return');
#line 678
label_986:
#line 678
if (c_rt_lib::check_true($memory_3)) {goto label_990;}
#line 678
$memory_3 = $memory_2;
#line 678
$memory_3 = c_rt_lib::ov_is($memory_3, 'die');
#line 678
label_990:
#line 678
if (c_rt_lib::check_true($memory_3)) {goto label_994;}
#line 678
$memory_3 = $memory_2;
#line 678
$memory_3 = c_rt_lib::ov_is($memory_3, 'ensure');
#line 678
label_994:
#line 678
if (c_rt_lib::check_true($memory_3)) {goto label_998;}
#line 678
$memory_3 = $memory_2;
#line 678
$memory_3 = c_rt_lib::ov_is($memory_3, 'try');
#line 678
label_998:
#line 678
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 678
if (c_rt_lib::check_true($memory_3)) {goto label_1243;}
#line 680
$memory_6 = "state";
#line 680
$memory_6 = c_rt_lib::get_ref_hash($memory_0, $memory_6);
#line 680
$memory_5 = ntokenizer::get_place_ws($memory_6);
#line 680
$memory_7 = "state";
#line 680
c_rt_lib::set_ref_hash($memory_0, $memory_7, $memory_6);
#line 680
undef($memory_7);
#line 680
undef($memory_6);
#line 680
$memory_4 = {begin => $memory_1,end => $memory_5,};
#line 680
undef($memory_5);
#line 681
$memory_6 = {debug => $memory_4,cmd => $memory_2,};
#line 681
$memory_5 = {cmd => $memory_6,};
#line 681
undef($memory_6);
#line 682
$memory_7 = "fora";
#line 682
$memory_6 = nparser_priv::try_eat($memory_0, $memory_7);
#line 682
undef($memory_7);
#line 682
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 682
if (c_rt_lib::check_true($memory_6)) {goto label_1055;}
#line 683
$memory_7 = c_rt_lib::to_nl(1);
#line 683
$memory_8 = $memory_7;
#line 683
 if (c_rt_lib::get_hashcount($memory_5) > 1) {$memory_5 = {%{$memory_5}};}$memory_5->{'short'} = $memory_8;
#line 683
undef($memory_7);
#line 683
undef($memory_8);
#line 684
$memory_7 = nparser_priv::parse_var_decl_sim($memory_0);
#line 684
$memory_8 = $memory_7;
#line 684
 if (c_rt_lib::get_hashcount($memory_5) > 1) {$memory_5 = {%{$memory_5}};}$memory_5->{'iter'} = $memory_8;
#line 684
undef($memory_7);
#line 684
undef($memory_8);
#line 685
$memory_7 = "(";
#line 685
nparser_priv::eat($memory_0, $memory_7);
#line 685
undef($memory_7);
#line 686
$memory_8 = nparser_priv::parse_expr($memory_0);
#line 686
$memory_7 = c_rt_lib::ov_is($memory_8, 'ok');
#line 686
if (c_rt_lib::check_true($memory_7)) {goto label_1042;}
#line 686
undef($memory_1);
#line 686
undef($memory_2);
#line 686
undef($memory_3);
#line 686
undef($memory_4);
#line 686
undef($memory_5);
#line 686
undef($memory_6);
#line 686
undef($memory_7);
#line 686
$_[0] = $memory_0;return $memory_8;
#line 686
label_1042:
#line 686
$memory_9 = c_rt_lib::ov_as($memory_8, 'ok');
#line 686
 if (c_rt_lib::get_hashcount($memory_5) > 1) {$memory_5 = {%{$memory_5}};}$memory_5->{'array'} = $memory_9;
#line 686
undef($memory_7);
#line 686
undef($memory_8);
#line 686
undef($memory_9);
#line 687
$memory_7 = ")";
#line 687
nparser_priv::eat($memory_0, $memory_7);
#line 687
undef($memory_7);
#line 688
$memory_7 = c_rt_lib::ov_mk_arg('fora', $memory_5);
#line 688
$memory_2 = $memory_7;
#line 688
undef($memory_7);
#line 689
goto label_1235;
#line 689
label_1055:
#line 689
$memory_7 = "rep";
#line 689
$memory_6 = nparser_priv::try_eat($memory_0, $memory_7);
#line 689
undef($memory_7);
#line 689
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 689
if (c_rt_lib::check_true($memory_6)) {goto label_1098;}
#line 690
$memory_7 = c_rt_lib::to_nl(1);
#line 690
$memory_8 = $memory_7;
#line 690
 if (c_rt_lib::get_hashcount($memory_5) > 1) {$memory_5 = {%{$memory_5}};}$memory_5->{'short'} = $memory_8;
#line 690
undef($memory_7);
#line 690
undef($memory_8);
#line 691
$memory_7 = nparser_priv::parse_var_decl_sim($memory_0);
#line 691
$memory_8 = $memory_7;
#line 691
 if (c_rt_lib::get_hashcount($memory_5) > 1) {$memory_5 = {%{$memory_5}};}$memory_5->{'iter'} = $memory_8;
#line 691
undef($memory_7);
#line 691
undef($memory_8);
#line 692
$memory_7 = "(";
#line 692
nparser_priv::eat($memory_0, $memory_7);
#line 692
undef($memory_7);
#line 693
$memory_8 = nparser_priv::parse_expr($memory_0);
#line 693
$memory_7 = c_rt_lib::ov_is($memory_8, 'ok');
#line 693
if (c_rt_lib::check_true($memory_7)) {goto label_1085;}
#line 693
undef($memory_1);
#line 693
undef($memory_2);
#line 693
undef($memory_3);
#line 693
undef($memory_4);
#line 693
undef($memory_5);
#line 693
undef($memory_6);
#line 693
undef($memory_7);
#line 693
$_[0] = $memory_0;return $memory_8;
#line 693
label_1085:
#line 693
$memory_9 = c_rt_lib::ov_as($memory_8, 'ok');
#line 693
 if (c_rt_lib::get_hashcount($memory_5) > 1) {$memory_5 = {%{$memory_5}};}$memory_5->{'count'} = $memory_9;
#line 693
undef($memory_7);
#line 693
undef($memory_8);
#line 693
undef($memory_9);
#line 694
$memory_7 = ")";
#line 694
nparser_priv::eat($memory_0, $memory_7);
#line 694
undef($memory_7);
#line 695
$memory_7 = c_rt_lib::ov_mk_arg('rep', $memory_5);
#line 695
$memory_2 = $memory_7;
#line 695
undef($memory_7);
#line 696
goto label_1235;
#line 696
label_1098:
#line 696
$memory_7 = "forh";
#line 696
$memory_6 = nparser_priv::try_eat($memory_0, $memory_7);
#line 696
undef($memory_7);
#line 696
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 696
if (c_rt_lib::check_true($memory_6)) {goto label_1149;}
#line 697
$memory_7 = c_rt_lib::to_nl(1);
#line 697
$memory_8 = $memory_7;
#line 697
 if (c_rt_lib::get_hashcount($memory_5) > 1) {$memory_5 = {%{$memory_5}};}$memory_5->{'short'} = $memory_8;
#line 697
undef($memory_7);
#line 697
undef($memory_8);
#line 698
$memory_7 = nparser_priv::parse_var_decl_sim($memory_0);
#line 698
$memory_8 = $memory_7;
#line 698
 if (c_rt_lib::get_hashcount($memory_5) > 1) {$memory_5 = {%{$memory_5}};}$memory_5->{'key'} = $memory_8;
#line 698
undef($memory_7);
#line 698
undef($memory_8);
#line 699
$memory_7 = ",";
#line 699
nparser_priv::eat($memory_0, $memory_7);
#line 699
undef($memory_7);
#line 700
$memory_7 = nparser_priv::parse_var_decl_sim($memory_0);
#line 700
$memory_8 = $memory_7;
#line 700
 if (c_rt_lib::get_hashcount($memory_5) > 1) {$memory_5 = {%{$memory_5}};}$memory_5->{'val'} = $memory_8;
#line 700
undef($memory_7);
#line 700
undef($memory_8);
#line 701
$memory_7 = "(";
#line 701
nparser_priv::eat($memory_0, $memory_7);
#line 701
undef($memory_7);
#line 702
$memory_8 = nparser_priv::parse_expr($memory_0);
#line 702
$memory_7 = c_rt_lib::ov_is($memory_8, 'ok');
#line 702
if (c_rt_lib::check_true($memory_7)) {goto label_1136;}
#line 702
undef($memory_1);
#line 702
undef($memory_2);
#line 702
undef($memory_3);
#line 702
undef($memory_4);
#line 702
undef($memory_5);
#line 702
undef($memory_6);
#line 702
undef($memory_7);
#line 702
$_[0] = $memory_0;return $memory_8;
#line 702
label_1136:
#line 702
$memory_9 = c_rt_lib::ov_as($memory_8, 'ok');
#line 702
 if (c_rt_lib::get_hashcount($memory_5) > 1) {$memory_5 = {%{$memory_5}};}$memory_5->{'hash'} = $memory_9;
#line 702
undef($memory_7);
#line 702
undef($memory_8);
#line 702
undef($memory_9);
#line 703
$memory_7 = ")";
#line 703
nparser_priv::eat($memory_0, $memory_7);
#line 703
undef($memory_7);
#line 704
$memory_7 = c_rt_lib::ov_mk_arg('forh', $memory_5);
#line 704
$memory_2 = $memory_7;
#line 704
undef($memory_7);
#line 705
goto label_1235;
#line 705
label_1149:
#line 705
$memory_7 = "if";
#line 705
$memory_6 = nparser_priv::try_eat($memory_0, $memory_7);
#line 705
undef($memory_7);
#line 705
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 705
if (c_rt_lib::check_true($memory_6)) {goto label_1176;}
#line 706
$memory_8 = nparser_priv::parse_expr($memory_0);
#line 706
$memory_7 = c_rt_lib::ov_is($memory_8, 'ok');
#line 706
if (c_rt_lib::check_true($memory_7)) {goto label_1166;}
#line 706
undef($memory_1);
#line 706
undef($memory_2);
#line 706
undef($memory_3);
#line 706
undef($memory_4);
#line 706
undef($memory_5);
#line 706
undef($memory_6);
#line 706
undef($memory_7);
#line 706
$_[0] = $memory_0;return $memory_8;
#line 706
label_1166:
#line 706
$memory_9 = c_rt_lib::ov_as($memory_8, 'ok');
#line 706
 if (c_rt_lib::get_hashcount($memory_5) > 1) {$memory_5 = {%{$memory_5}};}$memory_5->{'cond'} = $memory_9;
#line 706
undef($memory_7);
#line 706
undef($memory_8);
#line 706
undef($memory_9);
#line 707
$memory_7 = c_rt_lib::ov_mk_arg('if_mod', $memory_5);
#line 707
$memory_2 = $memory_7;
#line 707
undef($memory_7);
#line 708
goto label_1235;
#line 708
label_1176:
#line 708
$memory_7 = "unless";
#line 708
$memory_6 = nparser_priv::try_eat($memory_0, $memory_7);
#line 708
undef($memory_7);
#line 708
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 708
if (c_rt_lib::check_true($memory_6)) {goto label_1203;}
#line 709
$memory_8 = nparser_priv::parse_expr($memory_0);
#line 709
$memory_7 = c_rt_lib::ov_is($memory_8, 'ok');
#line 709
if (c_rt_lib::check_true($memory_7)) {goto label_1193;}
#line 709
undef($memory_1);
#line 709
undef($memory_2);
#line 709
undef($memory_3);
#line 709
undef($memory_4);
#line 709
undef($memory_5);
#line 709
undef($memory_6);
#line 709
undef($memory_7);
#line 709
$_[0] = $memory_0;return $memory_8;
#line 709
label_1193:
#line 709
$memory_9 = c_rt_lib::ov_as($memory_8, 'ok');
#line 709
 if (c_rt_lib::get_hashcount($memory_5) > 1) {$memory_5 = {%{$memory_5}};}$memory_5->{'cond'} = $memory_9;
#line 709
undef($memory_7);
#line 709
undef($memory_8);
#line 709
undef($memory_9);
#line 710
$memory_7 = c_rt_lib::ov_mk_arg('unless_mod', $memory_5);
#line 710
$memory_2 = $memory_7;
#line 710
undef($memory_7);
#line 711
goto label_1235;
#line 711
label_1203:
#line 711
$memory_7 = "while";
#line 711
$memory_6 = nparser_priv::try_eat($memory_0, $memory_7);
#line 711
undef($memory_7);
#line 711
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 711
if (c_rt_lib::check_true($memory_6)) {goto label_1235;}
#line 712
$memory_7 = c_rt_lib::to_nl(1);
#line 712
$memory_8 = $memory_7;
#line 712
 if (c_rt_lib::get_hashcount($memory_5) > 1) {$memory_5 = {%{$memory_5}};}$memory_5->{'short'} = $memory_8;
#line 712
undef($memory_7);
#line 712
undef($memory_8);
#line 713
$memory_8 = nparser_priv::parse_expr($memory_0);
#line 713
$memory_7 = c_rt_lib::ov_is($memory_8, 'ok');
#line 713
if (c_rt_lib::check_true($memory_7)) {goto label_1225;}
#line 713
undef($memory_1);
#line 713
undef($memory_2);
#line 713
undef($memory_3);
#line 713
undef($memory_4);
#line 713
undef($memory_5);
#line 713
undef($memory_6);
#line 713
undef($memory_7);
#line 713
$_[0] = $memory_0;return $memory_8;
#line 713
label_1225:
#line 713
$memory_9 = c_rt_lib::ov_as($memory_8, 'ok');
#line 713
 if (c_rt_lib::get_hashcount($memory_5) > 1) {$memory_5 = {%{$memory_5}};}$memory_5->{'cond'} = $memory_9;
#line 713
undef($memory_7);
#line 713
undef($memory_8);
#line 713
undef($memory_9);
#line 714
$memory_7 = c_rt_lib::ov_mk_arg('while', $memory_5);
#line 714
$memory_2 = $memory_7;
#line 714
undef($memory_7);
#line 715
goto label_1235;
#line 715
label_1235:
#line 715
undef($memory_6);
#line 716
$memory_6 = ";";
#line 716
nparser_priv::eat($memory_0, $memory_6);
#line 716
undef($memory_6);
#line 716
undef($memory_4);
#line 716
undef($memory_5);
#line 717
goto label_1243;
#line 717
label_1243:
#line 717
undef($memory_3);
#line 718
$memory_4 = "state";
#line 718
$memory_4 = c_rt_lib::get_ref_hash($memory_0, $memory_4);
#line 718
$memory_3 = ntokenizer::get_place_ws($memory_4);
#line 718
$memory_5 = "state";
#line 718
c_rt_lib::set_ref_hash($memory_0, $memory_5, $memory_4);
#line 718
undef($memory_5);
#line 718
undef($memory_4);
#line 719
$memory_4 = {begin => $memory_1,end => $memory_3,};
#line 720
$memory_5 = {cmd => $memory_2,debug => $memory_4,};
#line 720
$memory_5 = c_rt_lib::ov_mk_arg('ok', $memory_5);
#line 720
undef($memory_1);
#line 720
undef($memory_2);
#line 720
undef($memory_3);
#line 720
undef($memory_4);
#line 720
$_[0] = $memory_0;return $memory_5;
#line 720
undef($memory_5);
#line 720
undef($memory_1);
#line 720
undef($memory_2);
#line 720
undef($memory_3);
#line 720
undef($memory_4);
#line 720
$_[0] = $memory_0;return;
$_[0] = $memory_0;}
