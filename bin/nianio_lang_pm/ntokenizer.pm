use c_rt_lib;
use ov;
use nast;
use ptd;
use array;
use hash;
use string;
use enum;
use c_std_lib;
use boolean_t;
use singleton;
sub ntokenizer_priv::get_keywords;
sub ntokenizer_priv::get_char_oper;
sub ntokenizer_priv::get_lett_oper;
sub ntokenizer::state_t;
sub ntokenizer::token_t;
sub ntokenizer::init;
sub ntokenizer_priv::get_char;
sub ntokenizer_priv::get_next_char;
sub ntokenizer_priv::eat_ws;
sub ntokenizer_priv::is_token;
sub ntokenizer::eat_token;
sub ntokenizer::get_line;
sub ntokenizer::get_place;
sub ntokenizer::get_place_ws;
sub ntokenizer::get_token;
sub ntokenizer::is_type;
sub ntokenizer::next_is;
sub ntokenizer::eat_type;
sub ntokenizer::is_text;
sub ntokenizer::eat_text;
sub ntokenizer::info;
sub ntokenizer_priv::is_hex_number;
sub ntokenizer_priv::try_get_operator;
sub ntokenizer_priv::get_next_token;

return 1;

sub ntokenizer_priv::__get_keywords() {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;my $memory_13;my $memory_14;my $memory_15;my $memory_16;my $memory_17;my $memory_18;my $memory_19;my $memory_20;my $memory_21;my $memory_22;my $memory_23;my $memory_24;my $memory_25;
#line 18
$memory_2 = "";
#line 18
$memory_3 = "";
#line 18
$memory_4 = "";
#line 18
$memory_5 = "";
#line 18
$memory_6 = "";
#line 18
$memory_7 = "";
#line 18
$memory_8 = "";
#line 18
$memory_9 = "";
#line 18
$memory_10 = "";
#line 18
$memory_11 = "";
#line 18
$memory_12 = "";
#line 18
$memory_13 = "";
#line 18
$memory_14 = "";
#line 18
$memory_15 = "";
#line 18
$memory_16 = "";
#line 18
$memory_17 = "";
#line 18
$memory_18 = "";
#line 18
$memory_19 = "";
#line 18
$memory_20 = "";
#line 18
$memory_21 = "";
#line 18
$memory_22 = "";
#line 18
$memory_23 = "";
#line 18
$memory_24 = "";
#line 18
$memory_25 = "";
#line 18
$memory_1 = {use => $memory_2,fora => $memory_3,forh => $memory_4,for => $memory_5,rep => $memory_6,loop => $memory_7,while => $memory_8,if => $memory_9,elsif => $memory_10,else => $memory_11,var => $memory_12,def => $memory_13,ref => $memory_14,match => $memory_15,case => $memory_16,unless => $memory_17,true => $memory_18,false => $memory_19,continue => $memory_20,break => $memory_21,return => $memory_22,try => $memory_23,ensure => $memory_24,die => $memory_25,};
#line 18
undef($memory_2);
#line 18
undef($memory_3);
#line 18
undef($memory_4);
#line 18
undef($memory_5);
#line 18
undef($memory_6);
#line 18
undef($memory_7);
#line 18
undef($memory_8);
#line 18
undef($memory_9);
#line 18
undef($memory_10);
#line 18
undef($memory_11);
#line 18
undef($memory_12);
#line 18
undef($memory_13);
#line 18
undef($memory_14);
#line 18
undef($memory_15);
#line 18
undef($memory_16);
#line 18
undef($memory_17);
#line 18
undef($memory_18);
#line 18
undef($memory_19);
#line 18
undef($memory_20);
#line 18
undef($memory_21);
#line 18
undef($memory_22);
#line 18
undef($memory_23);
#line 18
undef($memory_24);
#line 18
undef($memory_25);
#line 18
$memory_0 = singleton::sigleton_do_not_use_without_approval($memory_1);
#line 18
undef($memory_1);
#line 18
return $memory_0;
#line 18
undef($memory_0);
#line 18
return;
}

my $_get_keywords;
sub ntokenizer_priv::get_keywords() {
	$_get_keywords = ntokenizer_priv::__get_keywords() unless defined $_get_keywords;
	return $_get_keywords;
}

sub ntokenizer_priv::__get_char_oper() {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;my $memory_13;
#line 47
$memory_1 = [];
#line 47
$memory_2 = [];
#line 47
$memory_3 = [];
#line 47
$memory_0 = [$memory_1,$memory_2,$memory_3];
#line 47
undef($memory_1);
#line 47
undef($memory_2);
#line 47
undef($memory_3);
#line 48
$memory_2 = nast::get_unary_ops();
#line 48
$memory_3 = nast::get_bin_ops();
#line 48
$memory_4 = nast::get_ternary_ops();
#line 48
$memory_1 = [$memory_2,$memory_3,$memory_4];
#line 48
undef($memory_2);
#line 48
undef($memory_3);
#line 48
undef($memory_4);
#line 48
$memory_3 = 0;
#line 48
$memory_4 = 1;
#line 48
$memory_5 = c_rt_lib::array_len($memory_1);
#line 48
label_3:
#line 48
$memory_6 = c_rt_lib::to_nl($memory_3 >= $memory_5);
#line 48
if (c_rt_lib::check_true($memory_6)) {goto label_1;}
#line 48
$memory_2 = $memory_1->[$memory_3];
#line 49
$memory_9 = c_rt_lib::init_iter($memory_2);
#line 49
label_6:
#line 49
$memory_7 = c_rt_lib::is_end_hash($memory_9);
#line 49
if (c_rt_lib::check_true($memory_7)) {goto label_4;}
#line 49
$memory_7 = c_rt_lib::get_key_iter($memory_9);
#line 49
$memory_8 = c_rt_lib::hash_get_value($memory_2, $memory_7);
#line 50
$memory_12 = 0;
#line 50
$memory_13 = 1;
#line 50
$memory_11 = string::substr($memory_7, $memory_12, $memory_13);
#line 50
undef($memory_13);
#line 50
undef($memory_12);
#line 50
$memory_10 = string::is_letter($memory_11);
#line 50
undef($memory_11);
#line 50
$memory_10 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_10));
#line 50
$memory_10 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_10));
#line 50
if (c_rt_lib::check_true($memory_10)) {goto label_8;}
#line 50
$memory_12 = string::length($memory_7);
#line 50
$memory_13 = 1;
#line 50
$memory_12 = $memory_12 - $memory_13;
#line 50
undef($memory_13);
#line 50
$memory_11 = c_rt_lib::get_ref_arr($memory_0, $memory_12);
#line 50
array::push($memory_11, $memory_7);
#line 50
c_rt_lib::set_ref_arr($memory_0, $memory_12, $memory_11);
#line 50
undef($memory_11);
#line 50
undef($memory_12);
#line 50
goto label_8;
#line 50
label_8:
#line 50
undef($memory_10);
#line 51
$memory_9 = c_rt_lib::next_iter($memory_9);
#line 51
goto label_6;
#line 51
label_4:
#line 51
undef($memory_7);
#line 51
undef($memory_8);
#line 51
undef($memory_9);
#line 52
$memory_3 = $memory_3 + $memory_4;
#line 52
goto label_3;
#line 52
label_1:
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
#line 53
$memory_2 = 2;
#line 53
$memory_1 = c_rt_lib::get_ref_arr($memory_0, $memory_2);
#line 53
$memory_4 = 1;
#line 53
$memory_3 = $memory_0->[$memory_4];
#line 53
undef($memory_4);
#line 53
array::append($memory_1, $memory_3);
#line 53
undef($memory_3);
#line 53
c_rt_lib::set_ref_arr($memory_0, $memory_2, $memory_1);
#line 53
undef($memory_1);
#line 53
undef($memory_2);
#line 54
$memory_2 = 2;
#line 54
$memory_1 = c_rt_lib::get_ref_arr($memory_0, $memory_2);
#line 54
$memory_4 = 0;
#line 54
$memory_3 = $memory_0->[$memory_4];
#line 54
undef($memory_4);
#line 54
array::append($memory_1, $memory_3);
#line 54
undef($memory_3);
#line 54
c_rt_lib::set_ref_arr($memory_0, $memory_2, $memory_1);
#line 54
undef($memory_1);
#line 54
undef($memory_2);
#line 55
$memory_3 = 2;
#line 55
$memory_2 = $memory_0->[$memory_3];
#line 55
undef($memory_3);
#line 55
$memory_1 = singleton::sigleton_do_not_use_without_approval($memory_2);
#line 55
undef($memory_2);
#line 55
undef($memory_0);
#line 55
return $memory_1;
#line 55
undef($memory_1);
#line 55
undef($memory_0);
#line 55
return;
}

my $_get_char_oper;
sub ntokenizer_priv::get_char_oper() {
	$_get_char_oper = ntokenizer_priv::__get_char_oper() unless defined $_get_char_oper;
	return $_get_char_oper;
}

sub ntokenizer_priv::__get_lett_oper() {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;my $memory_13;
#line 58
$memory_0 = {};
#line 59
$memory_2 = nast::get_unary_ops();
#line 59
$memory_3 = nast::get_bin_ops();
#line 59
$memory_4 = nast::get_ternary_ops();
#line 59
$memory_1 = [$memory_2,$memory_3,$memory_4];
#line 59
undef($memory_2);
#line 59
undef($memory_3);
#line 59
undef($memory_4);
#line 59
$memory_3 = 0;
#line 59
$memory_4 = 1;
#line 59
$memory_5 = c_rt_lib::array_len($memory_1);
#line 59
label_3:
#line 59
$memory_6 = c_rt_lib::to_nl($memory_3 >= $memory_5);
#line 59
if (c_rt_lib::check_true($memory_6)) {goto label_1;}
#line 59
$memory_2 = $memory_1->[$memory_3];
#line 60
$memory_9 = c_rt_lib::init_iter($memory_2);
#line 60
label_6:
#line 60
$memory_7 = c_rt_lib::is_end_hash($memory_9);
#line 60
if (c_rt_lib::check_true($memory_7)) {goto label_4;}
#line 60
$memory_7 = c_rt_lib::get_key_iter($memory_9);
#line 60
$memory_8 = c_rt_lib::hash_get_value($memory_2, $memory_7);
#line 61
$memory_12 = 0;
#line 61
$memory_13 = 1;
#line 61
$memory_11 = string::substr($memory_7, $memory_12, $memory_13);
#line 61
undef($memory_13);
#line 61
undef($memory_12);
#line 61
$memory_10 = string::is_letter($memory_11);
#line 61
undef($memory_11);
#line 61
$memory_10 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_10));
#line 61
if (c_rt_lib::check_true($memory_10)) {goto label_8;}
#line 61
$memory_11 = "";
#line 61
hash::set_value($memory_0, $memory_7, $memory_11);
#line 61
undef($memory_11);
#line 61
goto label_8;
#line 61
label_8:
#line 61
undef($memory_10);
#line 62
$memory_9 = c_rt_lib::next_iter($memory_9);
#line 62
goto label_6;
#line 62
label_4:
#line 62
undef($memory_7);
#line 62
undef($memory_8);
#line 62
undef($memory_9);
#line 63
$memory_3 = $memory_3 + $memory_4;
#line 63
goto label_3;
#line 63
label_1:
#line 63
undef($memory_1);
#line 63
undef($memory_2);
#line 63
undef($memory_3);
#line 63
undef($memory_4);
#line 63
undef($memory_5);
#line 63
undef($memory_6);
#line 64
$memory_1 = singleton::sigleton_do_not_use_without_approval($memory_0);
#line 64
undef($memory_0);
#line 64
return $memory_1;
#line 64
undef($memory_1);
#line 64
undef($memory_0);
#line 64
return;
}

my $_get_lett_oper;
sub ntokenizer_priv::get_lett_oper() {
	$_get_lett_oper = ntokenizer_priv::__get_lett_oper() unless defined $_get_lett_oper;
	return $_get_lett_oper;
}

sub ntokenizer::__state_t() {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;my $memory_13;
#line 68
$memory_3 = ptd::sim();
#line 68
$memory_2 = ptd::arr($memory_3);
#line 68
undef($memory_3);
#line 68
$memory_3 = ptd::sim();
#line 68
$memory_4 = ptd::sim();
#line 68
$memory_5 = {
	module => "ntokenizer",
	name => "token_t",
};
#line 68
$memory_5 = c_rt_lib::ov_mk_arg('ref', $memory_5);
#line 68
$memory_6 = ptd::sim();
#line 68
$memory_7 = ptd::sim();
#line 68
$memory_8 = ptd::sim();
#line 68
$memory_11 = ptd::sim();
#line 68
$memory_12 = ptd::sim();
#line 68
$memory_10 = {line => $memory_11,position => $memory_12,};
#line 68
undef($memory_11);
#line 68
undef($memory_12);
#line 68
$memory_9 = ptd::rec($memory_10);
#line 68
undef($memory_10);
#line 68
$memory_12 = ptd::sim();
#line 68
$memory_13 = ptd::sim();
#line 68
$memory_11 = {line => $memory_12,position => $memory_13,};
#line 68
undef($memory_12);
#line 68
undef($memory_13);
#line 68
$memory_10 = ptd::rec($memory_11);
#line 68
undef($memory_11);
#line 68
$memory_1 = {text => $memory_2,pos => $memory_3,len => $memory_4,type => $memory_5,next_token => $memory_6,ln_nr => $memory_7,ln_pos => $memory_8,place => $memory_9,place_ws => $memory_10,};
#line 68
undef($memory_2);
#line 68
undef($memory_3);
#line 68
undef($memory_4);
#line 68
undef($memory_5);
#line 68
undef($memory_6);
#line 68
undef($memory_7);
#line 68
undef($memory_8);
#line 68
undef($memory_9);
#line 68
undef($memory_10);
#line 68
$memory_0 = ptd::rec($memory_1);
#line 68
undef($memory_1);
#line 68
return $memory_0;
#line 68
undef($memory_0);
#line 68
return;
}

my $_state_t;
sub ntokenizer::state_t() {
	$_state_t = ntokenizer::__state_t() unless defined $_state_t;
	return $_state_t;
}

sub ntokenizer::__token_t() {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;
#line 81
$memory_2 = ptd::none();
#line 81
$memory_3 = ptd::none();
#line 81
$memory_4 = ptd::none();
#line 81
$memory_5 = ptd::none();
#line 81
$memory_6 = ptd::none();
#line 81
$memory_7 = ptd::none();
#line 81
$memory_8 = ptd::none();
#line 81
$memory_9 = ptd::none();
#line 81
$memory_10 = ptd::none();
#line 81
$memory_1 = {end => $memory_2,delimiter => $memory_3,operator => $memory_4,number => $memory_5,keyword => $memory_6,word => $memory_7,multi_string => $memory_8,string => $memory_9,error => $memory_10,};
#line 81
undef($memory_2);
#line 81
undef($memory_3);
#line 81
undef($memory_4);
#line 81
undef($memory_5);
#line 81
undef($memory_6);
#line 81
undef($memory_7);
#line 81
undef($memory_8);
#line 81
undef($memory_9);
#line 81
undef($memory_10);
#line 81
$memory_0 = ptd::var($memory_1);
#line 81
undef($memory_1);
#line 81
return $memory_0;
#line 81
undef($memory_0);
#line 81
return;
}

my $_token_t;
sub ntokenizer::token_t() {
	$_token_t = ntokenizer::__token_t() unless defined $_token_t;
	return $_token_t;
}

sub ntokenizer::init($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;$memory_0 = $_[0];
#line 95
$memory_2 = [$memory_0];
#line 95
$memory_3 = string::length($memory_0);
#line 95
$memory_4 = 0;
#line 95
$memory_5 = c_rt_lib::ov_mk_none('end');
#line 95
$memory_6 = "";
#line 95
$memory_7 = 1;
#line 95
$memory_8 = 1;
#line 95
$memory_10 = 1;
#line 95
$memory_11 = 0;
#line 95
$memory_9 = {line => $memory_10,position => $memory_11,};
#line 95
undef($memory_10);
#line 95
undef($memory_11);
#line 95
$memory_11 = 1;
#line 95
$memory_12 = 0;
#line 95
$memory_10 = {line => $memory_11,position => $memory_12,};
#line 95
undef($memory_11);
#line 95
undef($memory_12);
#line 95
$memory_1 = {text => $memory_2,len => $memory_3,pos => $memory_4,type => $memory_5,next_token => $memory_6,ln_nr => $memory_7,ln_pos => $memory_8,place => $memory_9,place_ws => $memory_10,};
#line 95
undef($memory_2);
#line 95
undef($memory_3);
#line 95
undef($memory_4);
#line 95
undef($memory_5);
#line 95
undef($memory_6);
#line 95
undef($memory_7);
#line 95
undef($memory_8);
#line 95
undef($memory_9);
#line 95
undef($memory_10);
#line 106
ntokenizer_priv::get_next_token($memory_1);
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

sub ntokenizer_priv::get_char($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);
#line 110
$memory_2 = $memory_0->{'text'};
#line 110
$memory_3 = $memory_0->{'pos'};
#line 110
$memory_4 = 1;
#line 110
$memory_1 = c_std_lib::fast_substr($memory_2, $memory_3, $memory_4);
#line 110
undef($memory_4);
#line 110
undef($memory_3);
#line 110
undef($memory_2);
#line 110
$memory_2 = "";
#line 110
$memory_1 = $memory_1 . $memory_2;
#line 110
undef($memory_2);
#line 110
$_[0] = $memory_0;return $memory_1;
#line 110
undef($memory_1);
#line 110
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub ntokenizer_priv::get_next_char($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);
#line 113
$memory_1 = $memory_0->{'len'};
#line 113
$memory_2 = $memory_0->{'pos'};
#line 113
$memory_3 = 1;
#line 113
$memory_2 = $memory_2 + $memory_3;
#line 113
undef($memory_3);
#line 113
$memory_1 = c_rt_lib::to_nl($memory_1 <= $memory_2);
#line 113
undef($memory_2);
#line 113
$memory_1 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_1));
#line 113
if (c_rt_lib::check_true($memory_1)) {goto label_2;}
#line 113
$memory_2 = "";
#line 113
undef($memory_1);
#line 113
$_[0] = $memory_0;return $memory_2;
#line 113
undef($memory_2);
#line 113
goto label_2;
#line 113
label_2:
#line 113
undef($memory_1);
#line 114
$memory_2 = $memory_0->{'text'};
#line 114
$memory_3 = $memory_0->{'pos'};
#line 114
$memory_4 = 1;
#line 114
$memory_3 = $memory_3 + $memory_4;
#line 114
undef($memory_4);
#line 114
$memory_4 = 1;
#line 114
$memory_1 = c_std_lib::fast_substr($memory_2, $memory_3, $memory_4);
#line 114
undef($memory_4);
#line 114
undef($memory_3);
#line 114
undef($memory_2);
#line 114
$memory_2 = "";
#line 114
$memory_1 = $memory_1 . $memory_2;
#line 114
undef($memory_2);
#line 114
$_[0] = $memory_0;return $memory_1;
#line 114
undef($memory_1);
#line 114
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub ntokenizer_priv::eat_ws($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);
#line 117
label_2:
#line 118
$memory_1 = $memory_0->{'pos'};
#line 118
$memory_2 = $memory_0->{'len'};
#line 118
$memory_1 = c_rt_lib::to_nl($memory_1 == $memory_2);
#line 118
undef($memory_2);
#line 118
$memory_1 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_1));
#line 118
if (c_rt_lib::check_true($memory_1)) {goto label_4;}
#line 118
undef($memory_1);
#line 118
$_[0] = $memory_0;return;
#line 118
goto label_4;
#line 118
label_4:
#line 118
undef($memory_1);
#line 119
$memory_2 = ntokenizer_priv::get_char($memory_0);
#line 119
$memory_1 = string::ord($memory_2);
#line 119
undef($memory_2);
#line 120
$memory_2 = 9;
#line 120
$memory_2 = c_rt_lib::to_nl($memory_1 == $memory_2);
#line 120
if (c_rt_lib::check_true($memory_2)) {goto label_8;}
#line 120
$memory_2 = 13;
#line 120
$memory_2 = c_rt_lib::to_nl($memory_1 == $memory_2);
#line 120
label_8:
#line 120
if (c_rt_lib::check_true($memory_2)) {goto label_7;}
#line 120
$memory_2 = 32;
#line 120
$memory_2 = c_rt_lib::to_nl($memory_1 == $memory_2);
#line 120
label_7:
#line 120
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 120
if (c_rt_lib::check_true($memory_2)) {goto label_6;}
#line 121
$memory_3 = "pos";
#line 121
$memory_3 = c_rt_lib::get_ref_hash($memory_0, $memory_3);
#line 121
$memory_4 = 1;
#line 121
$memory_3 = $memory_3 + $memory_4;
#line 121
$memory_5 = "pos";
#line 121
c_rt_lib::set_ref_hash($memory_0, $memory_5, $memory_3);
#line 121
undef($memory_5);
#line 121
undef($memory_3);
#line 121
undef($memory_4);
#line 122
goto label_5;
#line 122
label_6:
#line 122
$memory_2 = 10;
#line 122
$memory_2 = c_rt_lib::to_nl($memory_1 == $memory_2);
#line 122
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 122
if (c_rt_lib::check_true($memory_2)) {goto label_9;}
#line 123
$memory_3 = "pos";
#line 123
$memory_3 = c_rt_lib::get_ref_hash($memory_0, $memory_3);
#line 123
$memory_4 = 1;
#line 123
$memory_3 = $memory_3 + $memory_4;
#line 123
$memory_5 = "pos";
#line 123
c_rt_lib::set_ref_hash($memory_0, $memory_5, $memory_3);
#line 123
undef($memory_5);
#line 123
undef($memory_3);
#line 123
undef($memory_4);
#line 124
$memory_3 = $memory_0->{'pos'};
#line 124
$memory_4 = $memory_3;
#line 124
 if (c_rt_lib::get_hashcount($memory_0) > 1) {$memory_0 = {%{$memory_0}};}$memory_0->{'ln_pos'} = $memory_4;
#line 124
undef($memory_3);
#line 124
undef($memory_4);
#line 125
$memory_3 = "ln_nr";
#line 125
$memory_3 = c_rt_lib::get_ref_hash($memory_0, $memory_3);
#line 125
$memory_4 = 1;
#line 125
$memory_3 = $memory_3 + $memory_4;
#line 125
$memory_5 = "ln_nr";
#line 125
c_rt_lib::set_ref_hash($memory_0, $memory_5, $memory_3);
#line 125
undef($memory_5);
#line 125
undef($memory_3);
#line 125
undef($memory_4);
#line 126
goto label_5;
#line 126
label_9:
#line 126
$memory_2 = 35;
#line 126
$memory_2 = c_rt_lib::to_nl($memory_1 == $memory_2);
#line 126
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 126
if (c_rt_lib::check_true($memory_2)) {goto label_10;}
#line 127
label_12:
#line 127
$memory_4 = ntokenizer_priv::get_char($memory_0);
#line 127
$memory_3 = string::ord($memory_4);
#line 127
undef($memory_4);
#line 127
$memory_4 = 10;
#line 127
$memory_3 = c_rt_lib::to_nl($memory_3 != $memory_4);
#line 127
undef($memory_4);
#line 127
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 127
if (c_rt_lib::check_true($memory_3)) {goto label_11;}
#line 128
$memory_4 = "pos";
#line 128
$memory_4 = c_rt_lib::get_ref_hash($memory_0, $memory_4);
#line 128
$memory_5 = 1;
#line 128
$memory_4 = $memory_4 + $memory_5;
#line 128
$memory_6 = "pos";
#line 128
c_rt_lib::set_ref_hash($memory_0, $memory_6, $memory_4);
#line 128
undef($memory_6);
#line 128
undef($memory_4);
#line 128
undef($memory_5);
#line 129
$memory_4 = $memory_0->{'pos'};
#line 129
$memory_5 = $memory_0->{'len'};
#line 129
$memory_4 = c_rt_lib::to_nl($memory_4 == $memory_5);
#line 129
undef($memory_5);
#line 129
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 129
if (c_rt_lib::check_true($memory_4)) {goto label_14;}
#line 129
undef($memory_1);
#line 129
undef($memory_2);
#line 129
undef($memory_3);
#line 129
undef($memory_4);
#line 129
$_[0] = $memory_0;return;
#line 129
goto label_14;
#line 129
label_14:
#line 129
undef($memory_4);
#line 130
goto label_12;
#line 130
label_11:
#line 130
undef($memory_3);
#line 131
goto label_5;
#line 131
label_10:
#line 132
undef($memory_1);
#line 132
undef($memory_2);
#line 132
$_[0] = $memory_0;return;
#line 133
goto label_5;
#line 133
label_5:
#line 133
undef($memory_2);
#line 133
undef($memory_1);
#line 117
goto label_2;
#line 117
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub ntokenizer_priv::is_token($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);
#line 138
$memory_2 = $memory_0->{'type'};
#line 138
$memory_3 = "delimiter";
#line 138
$memory_1 = ov::is($memory_2, $memory_3);
#line 138
undef($memory_3);
#line 138
undef($memory_2);
#line 138
$memory_1 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_1));
#line 138
if (c_rt_lib::check_true($memory_1)) {goto label_2;}
#line 138
$memory_2 = c_rt_lib::to_nl(1);
#line 138
undef($memory_1);
#line 138
$_[0] = $memory_0;return $memory_2;
#line 138
undef($memory_2);
#line 138
goto label_2;
#line 138
label_2:
#line 138
undef($memory_1);
#line 139
$memory_2 = $memory_0->{'type'};
#line 139
$memory_3 = "operator";
#line 139
$memory_1 = ov::is($memory_2, $memory_3);
#line 139
undef($memory_3);
#line 139
undef($memory_2);
#line 139
$memory_1 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_1));
#line 139
if (c_rt_lib::check_true($memory_1)) {goto label_4;}
#line 139
$memory_2 = c_rt_lib::to_nl(1);
#line 139
undef($memory_1);
#line 139
$_[0] = $memory_0;return $memory_2;
#line 139
undef($memory_2);
#line 139
goto label_4;
#line 139
label_4:
#line 139
undef($memory_1);
#line 140
$memory_2 = $memory_0->{'type'};
#line 140
$memory_3 = "keyword";
#line 140
$memory_1 = ov::is($memory_2, $memory_3);
#line 140
undef($memory_3);
#line 140
undef($memory_2);
#line 140
$memory_1 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_1));
#line 140
if (c_rt_lib::check_true($memory_1)) {goto label_6;}
#line 140
$memory_2 = c_rt_lib::to_nl(1);
#line 140
undef($memory_1);
#line 140
$_[0] = $memory_0;return $memory_2;
#line 140
undef($memory_2);
#line 140
goto label_6;
#line 140
label_6:
#line 140
undef($memory_1);
#line 141
$memory_1 = c_rt_lib::to_nl(0);
#line 141
$_[0] = $memory_0;return $memory_1;
#line 141
undef($memory_1);
#line 141
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub ntokenizer::eat_token($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];
#line 145
$memory_2 = $memory_0->{'next_token'};
#line 145
$memory_2 = c_rt_lib::to_nl($memory_1 eq $memory_2);
#line 145
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 145
if (c_rt_lib::check_true($memory_3)) {goto label_3;}
#line 145
$memory_2 = ntokenizer_priv::is_token($memory_0);
#line 145
label_3:
#line 145
undef($memory_3);
#line 145
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 145
if (c_rt_lib::check_true($memory_2)) {goto label_2;}
#line 146
ntokenizer_priv::get_next_token($memory_0);
#line 147
$memory_3 = c_rt_lib::to_nl(1);
#line 147
undef($memory_1);
#line 147
undef($memory_2);
#line 147
$_[0] = $memory_0;return $memory_3;
#line 147
undef($memory_3);
#line 148
goto label_2;
#line 148
label_2:
#line 148
undef($memory_2);
#line 149
$memory_2 = c_rt_lib::to_nl(0);
#line 149
undef($memory_1);
#line 149
$_[0] = $memory_0;return $memory_2;
#line 149
undef($memory_2);
#line 149
undef($memory_1);
#line 149
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub ntokenizer::get_line($) {
my $memory_0;my $memory_1;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);
#line 153
$memory_1 = $memory_0->{'ln_nr'};
#line 153
$_[0] = $memory_0;return $memory_1;
#line 153
undef($memory_1);
#line 153
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub ntokenizer::get_place($) {
my $memory_0;my $memory_1;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);
#line 157
$memory_1 = $memory_0->{'place'};
#line 157
$_[0] = $memory_0;return $memory_1;
#line 157
undef($memory_1);
#line 157
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub ntokenizer::get_place_ws($) {
my $memory_0;my $memory_1;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);
#line 161
$memory_1 = $memory_0->{'place_ws'};
#line 161
$_[0] = $memory_0;return $memory_1;
#line 161
undef($memory_1);
#line 161
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub ntokenizer::get_token($) {
my $memory_0;my $memory_1;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);
#line 165
$memory_1 = $memory_0->{'next_token'};
#line 165
$_[0] = $memory_0;return $memory_1;
#line 165
undef($memory_1);
#line 165
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub ntokenizer::is_type($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];
#line 169
$memory_3 = $memory_0->{'type'};
#line 169
$memory_2 = enum::eq($memory_3, $memory_1);
#line 169
undef($memory_3);
#line 169
undef($memory_1);
#line 169
$_[0] = $memory_0;return $memory_2;
#line 169
undef($memory_2);
#line 169
undef($memory_1);
#line 169
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub ntokenizer::next_is($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];
#line 173
$memory_2 = $memory_0->{'next_token'};
#line 173
$memory_2 = c_rt_lib::to_nl($memory_1 eq $memory_2);
#line 173
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 173
if (c_rt_lib::check_true($memory_3)) {goto label_1;}
#line 173
$memory_2 = ntokenizer_priv::is_token($memory_0);
#line 173
label_1:
#line 173
undef($memory_3);
#line 173
undef($memory_1);
#line 173
$_[0] = $memory_0;return $memory_2;
#line 173
undef($memory_2);
#line 173
undef($memory_1);
#line 173
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub ntokenizer::eat_type($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];
#line 177
$memory_2 = ntokenizer::is_type($memory_0, $memory_1);
#line 177
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 177
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 177
if (c_rt_lib::check_true($memory_2)) {goto label_2;}
#line 177
$memory_3 = [];
#line 177
die(dfile::ssave($memory_3));
#line 177
goto label_2;
#line 177
label_2:
#line 177
undef($memory_2);
#line 177
undef($memory_3);
#line 178
$memory_2 = $memory_0->{'next_token'};
#line 179
ntokenizer_priv::get_next_token($memory_0);
#line 180
undef($memory_1);
#line 180
$_[0] = $memory_0;return $memory_2;
#line 180
undef($memory_2);
#line 180
undef($memory_1);
#line 180
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub ntokenizer::is_text($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);
#line 183
$memory_2 = c_rt_lib::ov_mk_none('word');
#line 183
$memory_1 = ntokenizer::is_type($memory_0, $memory_2);
#line 183
undef($memory_2);
#line 183
$memory_1 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_1));
#line 183
if (c_rt_lib::check_true($memory_1)) {goto label_2;}
#line 183
$memory_2 = c_rt_lib::to_nl(1);
#line 183
undef($memory_1);
#line 183
$_[0] = $memory_0;return $memory_2;
#line 183
undef($memory_2);
#line 183
goto label_2;
#line 183
label_2:
#line 183
undef($memory_1);
#line 184
$memory_2 = c_rt_lib::ov_mk_none('keyword');
#line 184
$memory_1 = ntokenizer::is_type($memory_0, $memory_2);
#line 184
undef($memory_2);
#line 184
$memory_1 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_1));
#line 184
if (c_rt_lib::check_true($memory_1)) {goto label_4;}
#line 184
$memory_2 = c_rt_lib::to_nl(1);
#line 184
undef($memory_1);
#line 184
$_[0] = $memory_0;return $memory_2;
#line 184
undef($memory_2);
#line 184
goto label_4;
#line 184
label_4:
#line 184
undef($memory_1);
#line 185
$memory_2 = c_rt_lib::ov_mk_none('operator');
#line 185
$memory_1 = ntokenizer::is_type($memory_0, $memory_2);
#line 185
undef($memory_2);
#line 185
$memory_1 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_1));
#line 185
if (c_rt_lib::check_true($memory_1)) {goto label_6;}
#line 186
$memory_4 = $memory_0->{'next_token'};
#line 186
$memory_5 = 0;
#line 186
$memory_6 = 1;
#line 186
$memory_3 = string::substr($memory_4, $memory_5, $memory_6);
#line 186
undef($memory_6);
#line 186
undef($memory_5);
#line 186
undef($memory_4);
#line 186
$memory_2 = string::is_letter($memory_3);
#line 186
undef($memory_3);
#line 186
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 186
if (c_rt_lib::check_true($memory_2)) {goto label_8;}
#line 186
$memory_3 = c_rt_lib::to_nl(1);
#line 186
undef($memory_1);
#line 186
undef($memory_2);
#line 186
$_[0] = $memory_0;return $memory_3;
#line 186
undef($memory_3);
#line 186
goto label_8;
#line 186
label_8:
#line 186
undef($memory_2);
#line 188
goto label_6;
#line 188
label_6:
#line 188
undef($memory_1);
#line 189
$memory_1 = c_rt_lib::to_nl(0);
#line 189
$_[0] = $memory_0;return $memory_1;
#line 189
undef($memory_1);
#line 189
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub ntokenizer::eat_text($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);
#line 192
$memory_2 = c_rt_lib::ov_mk_none('word');
#line 192
$memory_1 = ntokenizer::is_type($memory_0, $memory_2);
#line 192
undef($memory_2);
#line 192
$memory_1 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_1));
#line 192
if (c_rt_lib::check_true($memory_1)) {goto label_2;}
#line 192
$memory_3 = c_rt_lib::ov_mk_none('word');
#line 192
$memory_2 = ntokenizer::eat_type($memory_0, $memory_3);
#line 192
undef($memory_3);
#line 192
undef($memory_1);
#line 192
$_[0] = $memory_0;return $memory_2;
#line 192
undef($memory_2);
#line 192
goto label_2;
#line 192
label_2:
#line 192
undef($memory_1);
#line 193
$memory_2 = c_rt_lib::ov_mk_none('keyword');
#line 193
$memory_1 = ntokenizer::is_type($memory_0, $memory_2);
#line 193
undef($memory_2);
#line 193
$memory_1 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_1));
#line 193
if (c_rt_lib::check_true($memory_1)) {goto label_4;}
#line 193
$memory_3 = c_rt_lib::ov_mk_none('keyword');
#line 193
$memory_2 = ntokenizer::eat_type($memory_0, $memory_3);
#line 193
undef($memory_3);
#line 193
undef($memory_1);
#line 193
$_[0] = $memory_0;return $memory_2;
#line 193
undef($memory_2);
#line 193
goto label_4;
#line 193
label_4:
#line 193
undef($memory_1);
#line 194
$memory_2 = c_rt_lib::ov_mk_none('operator');
#line 194
$memory_1 = ntokenizer::is_type($memory_0, $memory_2);
#line 194
undef($memory_2);
#line 194
$memory_1 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_1));
#line 194
if (c_rt_lib::check_true($memory_1)) {goto label_6;}
#line 195
$memory_4 = $memory_0->{'next_token'};
#line 195
$memory_5 = 0;
#line 195
$memory_6 = 1;
#line 195
$memory_3 = string::substr($memory_4, $memory_5, $memory_6);
#line 195
undef($memory_6);
#line 195
undef($memory_5);
#line 195
undef($memory_4);
#line 195
$memory_2 = string::is_letter($memory_3);
#line 195
undef($memory_3);
#line 195
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 195
if (c_rt_lib::check_true($memory_2)) {goto label_8;}
#line 195
$memory_4 = c_rt_lib::ov_mk_none('operator');
#line 195
$memory_3 = ntokenizer::eat_type($memory_0, $memory_4);
#line 195
undef($memory_4);
#line 195
undef($memory_1);
#line 195
undef($memory_2);
#line 195
$_[0] = $memory_0;return $memory_3;
#line 195
undef($memory_3);
#line 195
goto label_8;
#line 195
label_8:
#line 195
undef($memory_2);
#line 197
goto label_6;
#line 197
label_6:
#line 197
undef($memory_1);
#line 198
$memory_1 = [];
#line 198
die(dfile::ssave($memory_1));
#line 198
undef($memory_1);
#line 198
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub ntokenizer::info($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);
#line 202
$memory_1 = "token: '";
#line 202
$memory_2 = $memory_0->{'next_token'};
#line 202
$memory_1 = $memory_1 . $memory_2;
#line 202
undef($memory_2);
#line 202
$memory_2 = "'
line:  ";
#line 202
$memory_1 = $memory_1 . $memory_2;
#line 202
undef($memory_2);
#line 202
$memory_2 = $memory_0->{'ln_nr'};
#line 202
$memory_1 = $memory_1 . $memory_2;
#line 202
undef($memory_2);
#line 202
$memory_2 = "
pos:   ";
#line 202
$memory_1 = $memory_1 . $memory_2;
#line 202
undef($memory_2);
#line 202
$memory_2 = 1;
#line 202
$memory_3 = $memory_0->{'pos'};
#line 202
$memory_2 = $memory_2 + $memory_3;
#line 202
undef($memory_3);
#line 202
$memory_3 = $memory_0->{'ln_pos'};
#line 202
$memory_2 = $memory_2 - $memory_3;
#line 202
undef($memory_3);
#line 202
$memory_4 = $memory_0->{'next_token'};
#line 202
$memory_3 = string::length($memory_4);
#line 202
undef($memory_4);
#line 202
$memory_2 = $memory_2 - $memory_3;
#line 202
undef($memory_3);
#line 202
$memory_1 = $memory_1 . $memory_2;
#line 202
undef($memory_2);
#line 202
$memory_2 = "
type: ";
#line 202
$memory_1 = $memory_1 . $memory_2;
#line 202
undef($memory_2);
#line 202
$memory_3 = $memory_0->{'type'};
#line 202
$memory_2 = ov::get_element($memory_3);
#line 202
undef($memory_3);
#line 202
$memory_1 = $memory_1 . $memory_2;
#line 202
undef($memory_2);
#line 202
$memory_2 = "
";
#line 202
$memory_1 = $memory_1 . $memory_2;
#line 202
undef($memory_2);
#line 202
$_[0] = $memory_0;return $memory_1;
#line 202
undef($memory_1);
#line 202
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub ntokenizer_priv::is_hex_number($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;$memory_0 = $_[0];
#line 210
$memory_1 = string::is_digit($memory_0);
#line 210
if (c_rt_lib::check_true($memory_1)) {goto label_2;}
#line 210
$memory_1 = string::ord($memory_0);
#line 210
$memory_3 = 65;
#line 210
$memory_1 = c_rt_lib::to_nl($memory_1 >= $memory_3);
#line 210
undef($memory_3);
#line 210
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_1));
#line 210
if (c_rt_lib::check_true($memory_2)) {goto label_3;}
#line 210
$memory_1 = string::ord($memory_0);
#line 210
$memory_3 = 70;
#line 210
$memory_1 = c_rt_lib::to_nl($memory_1 <= $memory_3);
#line 210
undef($memory_3);
#line 210
label_3:
#line 210
undef($memory_2);
#line 210
label_2:
#line 210
if (c_rt_lib::check_true($memory_1)) {goto label_1;}
#line 210
$memory_1 = string::ord($memory_0);
#line 210
$memory_3 = 97;
#line 210
$memory_1 = c_rt_lib::to_nl($memory_1 >= $memory_3);
#line 210
undef($memory_3);
#line 210
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_1));
#line 210
if (c_rt_lib::check_true($memory_2)) {goto label_4;}
#line 210
$memory_1 = string::ord($memory_0);
#line 210
$memory_3 = 102;
#line 210
$memory_1 = c_rt_lib::to_nl($memory_1 <= $memory_3);
#line 210
undef($memory_3);
#line 210
label_4:
#line 210
undef($memory_2);
#line 210
label_1:
#line 210
undef($memory_0);
#line 210
return $memory_1;
#line 210
undef($memory_1);
#line 210
undef($memory_0);
#line 210
return;
}

sub ntokenizer_priv::try_get_operator($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;my $memory_13;my $memory_14;$memory_0 = $_[0];$memory_1 = $_[1];Scalar::Util::weaken($_[1]) if ref($_[1]);
#line 216
$memory_2 = ntokenizer_priv::get_char_oper();
#line 216
$memory_4 = 0;
#line 216
$memory_5 = 1;
#line 216
$memory_6 = c_rt_lib::array_len($memory_2);
#line 216
label_3:
#line 216
$memory_7 = c_rt_lib::to_nl($memory_4 >= $memory_6);
#line 216
if (c_rt_lib::check_true($memory_7)) {goto label_1;}
#line 216
$memory_3 = $memory_2->[$memory_4];
#line 217
$memory_8 = $memory_0->{'len'};
#line 217
$memory_9 = 1;
#line 217
$memory_10 = $memory_0->{'pos'};
#line 217
$memory_9 = $memory_9 + $memory_10;
#line 217
undef($memory_10);
#line 217
$memory_10 = string::length($memory_3);
#line 217
$memory_9 = $memory_9 + $memory_10;
#line 217
undef($memory_10);
#line 217
$memory_8 = c_rt_lib::to_nl($memory_8 < $memory_9);
#line 217
undef($memory_9);
#line 217
$memory_8 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 217
if (c_rt_lib::check_true($memory_8)) {goto label_5;}
#line 217
undef($memory_8);
#line 217
goto label_2;
#line 217
goto label_5;
#line 217
label_5:
#line 217
undef($memory_8);
#line 218
$memory_9 = $memory_0->{'text'};
#line 218
$memory_10 = $memory_0->{'pos'};
#line 218
$memory_11 = string::length($memory_3);
#line 218
$memory_8 = c_std_lib::fast_substr($memory_9, $memory_10, $memory_11);
#line 218
undef($memory_11);
#line 218
undef($memory_10);
#line 218
undef($memory_9);
#line 218
$memory_8 = c_rt_lib::to_nl($memory_8 eq $memory_3);
#line 218
$memory_8 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 218
if (c_rt_lib::check_true($memory_8)) {goto label_7;}
#line 219
$memory_11 = ntokenizer_priv::get_char($memory_0);
#line 219
$memory_9 = string::is_letter($memory_11);
#line 219
undef($memory_11);
#line 219
$memory_10 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_9));
#line 219
if (c_rt_lib::check_true($memory_10)) {goto label_10;}
#line 219
$memory_12 = $memory_0->{'text'};
#line 219
$memory_13 = $memory_0->{'pos'};
#line 219
$memory_14 = string::length($memory_3);
#line 219
$memory_13 = $memory_13 + $memory_14;
#line 219
undef($memory_14);
#line 219
$memory_14 = 1;
#line 219
$memory_11 = c_std_lib::fast_substr($memory_12, $memory_13, $memory_14);
#line 219
undef($memory_14);
#line 219
undef($memory_13);
#line 219
undef($memory_12);
#line 219
$memory_9 = string::is_letter($memory_11);
#line 219
undef($memory_11);
#line 219
label_10:
#line 219
undef($memory_10);
#line 219
$memory_9 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_9));
#line 219
if (c_rt_lib::check_true($memory_9)) {goto label_9;}
#line 219
undef($memory_8);
#line 219
undef($memory_9);
#line 219
goto label_2;
#line 219
goto label_9;
#line 219
label_9:
#line 219
undef($memory_9);
#line 221
$memory_1 = $memory_3;
#line 222
$memory_9 = c_rt_lib::to_nl(1);
#line 222
undef($memory_0);
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
#line 222
undef($memory_7);
#line 222
undef($memory_8);
#line 222
$_[1] = $memory_1;return $memory_9;
#line 222
undef($memory_9);
#line 223
goto label_7;
#line 223
label_7:
#line 223
undef($memory_8);
#line 223
label_2:
#line 224
$memory_4 = $memory_4 + $memory_5;
#line 224
goto label_3;
#line 224
label_1:
#line 224
undef($memory_2);
#line 224
undef($memory_3);
#line 224
undef($memory_4);
#line 224
undef($memory_5);
#line 224
undef($memory_6);
#line 224
undef($memory_7);
#line 225
$memory_2 = c_rt_lib::to_nl(0);
#line 225
undef($memory_0);
#line 225
$_[1] = $memory_1;return $memory_2;
#line 225
undef($memory_2);
#line 225
undef($memory_0);
#line 225
$_[1] = $memory_1;return;
$_[1] = $memory_1;}

sub ntokenizer_priv::get_next_token($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);
#line 228
$memory_2 = $memory_0->{'ln_nr'};
#line 228
$memory_3 = $memory_0->{'pos'};
#line 228
$memory_4 = $memory_0->{'ln_pos'};
#line 228
$memory_3 = $memory_3 - $memory_4;
#line 228
undef($memory_4);
#line 228
$memory_4 = 1;
#line 228
$memory_3 = $memory_3 + $memory_4;
#line 228
undef($memory_4);
#line 228
$memory_1 = {line => $memory_2,position => $memory_3,};
#line 228
undef($memory_2);
#line 228
undef($memory_3);
#line 228
$memory_2 = $memory_1;
#line 228
 if (c_rt_lib::get_hashcount($memory_0) > 1) {$memory_0 = {%{$memory_0}};}$memory_0->{'place_ws'} = $memory_2;
#line 228
undef($memory_1);
#line 228
undef($memory_2);
#line 229
ntokenizer_priv::eat_ws($memory_0);
#line 230
$memory_2 = $memory_0->{'ln_nr'};
#line 230
$memory_3 = $memory_0->{'pos'};
#line 230
$memory_4 = $memory_0->{'ln_pos'};
#line 230
$memory_3 = $memory_3 - $memory_4;
#line 230
undef($memory_4);
#line 230
$memory_4 = 1;
#line 230
$memory_3 = $memory_3 + $memory_4;
#line 230
undef($memory_4);
#line 230
$memory_1 = {line => $memory_2,position => $memory_3,};
#line 230
undef($memory_2);
#line 230
undef($memory_3);
#line 230
$memory_2 = $memory_1;
#line 230
 if (c_rt_lib::get_hashcount($memory_0) > 1) {$memory_0 = {%{$memory_0}};}$memory_0->{'place'} = $memory_2;
#line 230
undef($memory_1);
#line 230
undef($memory_2);
#line 232
$memory_1 = $memory_0->{'type'};
#line 232
$memory_1 = c_rt_lib::ov_is($memory_1, 'error');
#line 232
$memory_1 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_1));
#line 232
if (c_rt_lib::check_true($memory_1)) {goto label_2;}
#line 232
undef($memory_1);
#line 232
$_[0] = $memory_0;return;
#line 232
goto label_2;
#line 232
label_2:
#line 232
undef($memory_1);
#line 233
$memory_1 = $memory_0->{'pos'};
#line 233
$memory_2 = $memory_0->{'len'};
#line 233
$memory_1 = c_rt_lib::to_nl($memory_1 == $memory_2);
#line 233
undef($memory_2);
#line 233
$memory_1 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_1));
#line 233
if (c_rt_lib::check_true($memory_1)) {goto label_4;}
#line 234
$memory_2 = c_rt_lib::ov_mk_none('end');
#line 234
$memory_3 = $memory_2;
#line 234
 if (c_rt_lib::get_hashcount($memory_0) > 1) {$memory_0 = {%{$memory_0}};}$memory_0->{'type'} = $memory_3;
#line 234
undef($memory_2);
#line 234
undef($memory_3);
#line 235
$memory_2 = "";
#line 235
$memory_3 = $memory_2;
#line 235
 if (c_rt_lib::get_hashcount($memory_0) > 1) {$memory_0 = {%{$memory_0}};}$memory_0->{'next_token'} = $memory_3;
#line 235
undef($memory_2);
#line 235
undef($memory_3);
#line 236
undef($memory_1);
#line 236
$_[0] = $memory_0;return;
#line 237
goto label_4;
#line 237
label_4:
#line 237
undef($memory_1);
#line 238
$memory_1 = ntokenizer_priv::get_char($memory_0);
#line 239
$memory_2 = "'";
#line 239
$memory_2 = c_rt_lib::to_nl($memory_1 eq $memory_2);
#line 239
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 239
if (c_rt_lib::check_true($memory_2)) {goto label_6;}
#line 240
$memory_3 = "";
#line 240
$memory_4 = $memory_3;
#line 240
 if (c_rt_lib::get_hashcount($memory_0) > 1) {$memory_0 = {%{$memory_0}};}$memory_0->{'next_token'} = $memory_4;
#line 240
undef($memory_3);
#line 240
undef($memory_4);
#line 241
$memory_3 = c_rt_lib::ov_mk_none('string');
#line 241
$memory_4 = $memory_3;
#line 241
 if (c_rt_lib::get_hashcount($memory_0) > 1) {$memory_0 = {%{$memory_0}};}$memory_0->{'type'} = $memory_4;
#line 241
undef($memory_3);
#line 241
undef($memory_4);
#line 242
label_8:
#line 243
$memory_3 = 1;
#line 243
$memory_4 = "pos";
#line 243
$memory_4 = c_rt_lib::get_ref_hash($memory_0, $memory_4);
#line 243
$memory_4 = $memory_4 + $memory_3;
#line 243
$memory_5 = "pos";
#line 243
c_rt_lib::set_ref_hash($memory_0, $memory_5, $memory_4);
#line 243
undef($memory_5);
#line 243
undef($memory_3);
#line 243
undef($memory_4);
#line 244
$memory_3 = ntokenizer_priv::get_char($memory_0);
#line 244
$memory_1 = $memory_3;
#line 244
undef($memory_3);
#line 245
$memory_3 = "'";
#line 245
$memory_3 = c_rt_lib::to_nl($memory_1 eq $memory_3);
#line 245
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 245
if (c_rt_lib::check_true($memory_3)) {goto label_10;}
#line 246
$memory_4 = 1;
#line 246
$memory_5 = "pos";
#line 246
$memory_5 = c_rt_lib::get_ref_hash($memory_0, $memory_5);
#line 246
$memory_5 = $memory_5 + $memory_4;
#line 246
$memory_6 = "pos";
#line 246
c_rt_lib::set_ref_hash($memory_0, $memory_6, $memory_5);
#line 246
undef($memory_6);
#line 246
undef($memory_4);
#line 246
undef($memory_5);
#line 247
$memory_4 = ntokenizer_priv::get_char($memory_0);
#line 247
$memory_5 = "'";
#line 247
$memory_4 = c_rt_lib::to_nl($memory_4 eq $memory_5);
#line 247
undef($memory_5);
#line 247
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 247
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 247
if (c_rt_lib::check_true($memory_4)) {goto label_12;}
#line 247
undef($memory_1);
#line 247
undef($memory_2);
#line 247
undef($memory_3);
#line 247
undef($memory_4);
#line 247
$_[0] = $memory_0;return;
#line 247
goto label_12;
#line 247
label_12:
#line 247
undef($memory_4);
#line 248
goto label_13;
#line 248
label_10:
#line 248
$memory_3 = string::ord($memory_1);
#line 248
$memory_4 = 10;
#line 248
$memory_3 = c_rt_lib::to_nl($memory_3 == $memory_4);
#line 248
undef($memory_4);
#line 248
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 248
if (c_rt_lib::check_true($memory_3)) {goto label_13;}
#line 249
$memory_4 = c_rt_lib::ov_mk_none('multi_string');
#line 249
$memory_5 = $memory_4;
#line 249
 if (c_rt_lib::get_hashcount($memory_0) > 1) {$memory_0 = {%{$memory_0}};}$memory_0->{'type'} = $memory_5;
#line 249
undef($memory_4);
#line 249
undef($memory_5);
#line 250
undef($memory_1);
#line 250
undef($memory_2);
#line 250
undef($memory_3);
#line 250
$_[0] = $memory_0;return;
#line 251
goto label_13;
#line 251
label_13:
#line 251
undef($memory_3);
#line 252
$memory_3 = "next_token";
#line 252
$memory_3 = c_rt_lib::get_ref_hash($memory_0, $memory_3);
#line 252
$memory_3 = $memory_3 . $memory_1;
#line 252
$memory_4 = "next_token";
#line 252
c_rt_lib::set_ref_hash($memory_0, $memory_4, $memory_3);
#line 252
undef($memory_4);
#line 252
undef($memory_3);
#line 242
goto label_8;
#line 254
goto label_5;
#line 254
label_6:
#line 254
$memory_2 = ntokenizer_priv::get_next_char($memory_0);
#line 254
$memory_2 = $memory_1 . $memory_2;
#line 254
$memory_3 = "=>";
#line 254
$memory_2 = c_rt_lib::to_nl($memory_2 eq $memory_3);
#line 254
undef($memory_3);
#line 254
if (c_rt_lib::check_true($memory_2)) {goto label_15;}
#line 254
$memory_2 = ntokenizer_priv::get_next_char($memory_0);
#line 254
$memory_2 = $memory_1 . $memory_2;
#line 254
$memory_3 = "::";
#line 254
$memory_2 = c_rt_lib::to_nl($memory_2 eq $memory_3);
#line 254
undef($memory_3);
#line 254
label_15:
#line 254
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 254
if (c_rt_lib::check_true($memory_2)) {goto label_14;}
#line 255
$memory_3 = c_rt_lib::ov_mk_none('delimiter');
#line 255
$memory_4 = $memory_3;
#line 255
 if (c_rt_lib::get_hashcount($memory_0) > 1) {$memory_0 = {%{$memory_0}};}$memory_0->{'type'} = $memory_4;
#line 255
undef($memory_3);
#line 255
undef($memory_4);
#line 256
$memory_3 = ntokenizer_priv::get_next_char($memory_0);
#line 256
$memory_3 = $memory_1 . $memory_3;
#line 256
$memory_4 = $memory_3;
#line 256
 if (c_rt_lib::get_hashcount($memory_0) > 1) {$memory_0 = {%{$memory_0}};}$memory_0->{'next_token'} = $memory_4;
#line 256
undef($memory_3);
#line 256
undef($memory_4);
#line 257
$memory_3 = 2;
#line 257
$memory_4 = "pos";
#line 257
$memory_4 = c_rt_lib::get_ref_hash($memory_0, $memory_4);
#line 257
$memory_4 = $memory_4 + $memory_3;
#line 257
$memory_5 = "pos";
#line 257
c_rt_lib::set_ref_hash($memory_0, $memory_5, $memory_4);
#line 257
undef($memory_5);
#line 257
undef($memory_3);
#line 257
undef($memory_4);
#line 258
goto label_5;
#line 258
label_14:
#line 258
$memory_3 = ";:,[]{}()";
#line 258
$memory_2 = string::index2($memory_3, $memory_1);
#line 258
undef($memory_3);
#line 258
$memory_3 = 0;
#line 258
$memory_2 = c_rt_lib::to_nl($memory_2 >= $memory_3);
#line 258
undef($memory_3);
#line 258
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 258
if (c_rt_lib::check_true($memory_2)) {goto label_16;}
#line 259
$memory_3 = c_rt_lib::ov_mk_none('delimiter');
#line 259
$memory_4 = $memory_3;
#line 259
 if (c_rt_lib::get_hashcount($memory_0) > 1) {$memory_0 = {%{$memory_0}};}$memory_0->{'type'} = $memory_4;
#line 259
undef($memory_3);
#line 259
undef($memory_4);
#line 260
$memory_3 = $memory_1;
#line 260
 if (c_rt_lib::get_hashcount($memory_0) > 1) {$memory_0 = {%{$memory_0}};}$memory_0->{'next_token'} = $memory_3;
#line 260
undef($memory_3);
#line 261
$memory_3 = "pos";
#line 261
$memory_3 = c_rt_lib::get_ref_hash($memory_0, $memory_3);
#line 261
$memory_4 = 1;
#line 261
$memory_3 = $memory_3 + $memory_4;
#line 261
$memory_5 = "pos";
#line 261
c_rt_lib::set_ref_hash($memory_0, $memory_5, $memory_3);
#line 261
undef($memory_5);
#line 261
undef($memory_3);
#line 261
undef($memory_4);
#line 262
goto label_5;
#line 262
label_16:
#line 262
$memory_2 = string::is_letter($memory_1);
#line 262
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 262
if (c_rt_lib::check_true($memory_2)) {goto label_17;}
#line 263
$memory_3 = $memory_1;
#line 263
 if (c_rt_lib::get_hashcount($memory_0) > 1) {$memory_0 = {%{$memory_0}};}$memory_0->{'next_token'} = $memory_3;
#line 263
undef($memory_3);
#line 264
$memory_3 = "pos";
#line 264
$memory_3 = c_rt_lib::get_ref_hash($memory_0, $memory_3);
#line 264
$memory_4 = 1;
#line 264
$memory_3 = $memory_3 + $memory_4;
#line 264
$memory_5 = "pos";
#line 264
c_rt_lib::set_ref_hash($memory_0, $memory_5, $memory_3);
#line 264
undef($memory_5);
#line 264
undef($memory_3);
#line 264
undef($memory_4);
#line 265
$memory_3 = ntokenizer_priv::get_char($memory_0);
#line 265
$memory_1 = $memory_3;
#line 265
undef($memory_3);
#line 266
label_19:
#line 266
$memory_3 = "";
#line 266
$memory_3 = c_rt_lib::to_nl($memory_1 ne $memory_3);
#line 266
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 266
if (c_rt_lib::check_true($memory_4)) {goto label_21;}
#line 266
$memory_3 = string::is_letter($memory_1);
#line 266
if (c_rt_lib::check_true($memory_3)) {goto label_22;}
#line 266
$memory_3 = string::is_digit($memory_1);
#line 266
label_22:
#line 266
if (c_rt_lib::check_true($memory_3)) {goto label_21;}
#line 266
$memory_3 = "_";
#line 266
$memory_3 = c_rt_lib::to_nl($memory_1 eq $memory_3);
#line 266
label_21:
#line 266
undef($memory_4);
#line 266
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 266
if (c_rt_lib::check_true($memory_3)) {goto label_18;}
#line 267
$memory_4 = "next_token";
#line 267
$memory_4 = c_rt_lib::get_ref_hash($memory_0, $memory_4);
#line 267
$memory_4 = $memory_4 . $memory_1;
#line 267
$memory_5 = "next_token";
#line 267
c_rt_lib::set_ref_hash($memory_0, $memory_5, $memory_4);
#line 267
undef($memory_5);
#line 267
undef($memory_4);
#line 268
$memory_4 = "pos";
#line 268
$memory_4 = c_rt_lib::get_ref_hash($memory_0, $memory_4);
#line 268
$memory_5 = 1;
#line 268
$memory_4 = $memory_4 + $memory_5;
#line 268
$memory_6 = "pos";
#line 268
c_rt_lib::set_ref_hash($memory_0, $memory_6, $memory_4);
#line 268
undef($memory_6);
#line 268
undef($memory_4);
#line 268
undef($memory_5);
#line 269
$memory_4 = ntokenizer_priv::get_char($memory_0);
#line 269
$memory_1 = $memory_4;
#line 269
undef($memory_4);
#line 270
goto label_19;
#line 270
label_18:
#line 270
undef($memory_3);
#line 271
$memory_4 = ntokenizer_priv::get_lett_oper();
#line 271
$memory_5 = $memory_0->{'next_token'};
#line 271
$memory_3 = hash::has_key($memory_4, $memory_5);
#line 271
undef($memory_5);
#line 271
undef($memory_4);
#line 271
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 271
if (c_rt_lib::check_true($memory_3)) {goto label_24;}
#line 272
$memory_4 = c_rt_lib::ov_mk_none('operator');
#line 272
$memory_5 = $memory_4;
#line 272
 if (c_rt_lib::get_hashcount($memory_0) > 1) {$memory_0 = {%{$memory_0}};}$memory_0->{'type'} = $memory_5;
#line 272
undef($memory_4);
#line 272
undef($memory_5);
#line 273
goto label_23;
#line 273
label_24:
#line 274
$memory_5 = ntokenizer_priv::get_keywords();
#line 274
$memory_6 = $memory_0->{'next_token'};
#line 274
$memory_4 = hash::has_key($memory_5, $memory_6);
#line 274
undef($memory_6);
#line 274
undef($memory_5);
#line 274
if (c_rt_lib::check_true($memory_4)) {goto label_26;}
#line 274
$memory_4 = c_rt_lib::ov_mk_none('word');
#line 274
goto label_25;
#line 274
label_26:
#line 274
$memory_4 = c_rt_lib::ov_mk_none('keyword');
#line 274
label_25:
#line 274
$memory_5 = $memory_4;
#line 274
 if (c_rt_lib::get_hashcount($memory_0) > 1) {$memory_0 = {%{$memory_0}};}$memory_0->{'type'} = $memory_5;
#line 274
undef($memory_4);
#line 274
undef($memory_5);
#line 275
goto label_23;
#line 275
label_23:
#line 275
undef($memory_3);
#line 276
goto label_5;
#line 276
label_17:
#line 276
$memory_2 = ntokenizer_priv::try_get_operator($memory_0, $memory_1);
#line 276
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 276
if (c_rt_lib::check_true($memory_2)) {goto label_27;}
#line 277
$memory_3 = c_rt_lib::ov_mk_none('operator');
#line 277
$memory_4 = $memory_3;
#line 277
 if (c_rt_lib::get_hashcount($memory_0) > 1) {$memory_0 = {%{$memory_0}};}$memory_0->{'type'} = $memory_4;
#line 277
undef($memory_3);
#line 277
undef($memory_4);
#line 278
$memory_3 = $memory_1;
#line 278
 if (c_rt_lib::get_hashcount($memory_0) > 1) {$memory_0 = {%{$memory_0}};}$memory_0->{'next_token'} = $memory_3;
#line 278
undef($memory_3);
#line 279
$memory_3 = string::length($memory_1);
#line 279
$memory_4 = "pos";
#line 279
$memory_4 = c_rt_lib::get_ref_hash($memory_0, $memory_4);
#line 279
$memory_4 = $memory_4 + $memory_3;
#line 279
$memory_5 = "pos";
#line 279
c_rt_lib::set_ref_hash($memory_0, $memory_5, $memory_4);
#line 279
undef($memory_5);
#line 279
undef($memory_3);
#line 279
undef($memory_4);
#line 280
goto label_5;
#line 280
label_27:
#line 280
$memory_2 = string::is_digit($memory_1);
#line 280
if (c_rt_lib::check_true($memory_2)) {goto label_29;}
#line 280
$memory_2 = "-";
#line 280
$memory_2 = c_rt_lib::to_nl($memory_1 eq $memory_2);
#line 280
if (c_rt_lib::check_true($memory_2)) {goto label_31;}
#line 280
$memory_2 = "+";
#line 280
$memory_2 = c_rt_lib::to_nl($memory_1 eq $memory_2);
#line 280
label_31:
#line 280
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 280
if (c_rt_lib::check_true($memory_3)) {goto label_30;}
#line 280
$memory_4 = ntokenizer_priv::get_next_char($memory_0);
#line 280
$memory_2 = string::is_digit($memory_4);
#line 280
undef($memory_4);
#line 280
label_30:
#line 280
undef($memory_3);
#line 280
label_29:
#line 280
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 280
if (c_rt_lib::check_true($memory_2)) {goto label_28;}
#line 281
$memory_3 = $memory_1;
#line 281
 if (c_rt_lib::get_hashcount($memory_0) > 1) {$memory_0 = {%{$memory_0}};}$memory_0->{'next_token'} = $memory_3;
#line 281
undef($memory_3);
#line 282
$memory_3 = c_rt_lib::ov_mk_none('number');
#line 282
$memory_4 = $memory_3;
#line 282
 if (c_rt_lib::get_hashcount($memory_0) > 1) {$memory_0 = {%{$memory_0}};}$memory_0->{'type'} = $memory_4;
#line 282
undef($memory_3);
#line 282
undef($memory_4);
#line 283
$memory_3 = "pos";
#line 283
$memory_3 = c_rt_lib::get_ref_hash($memory_0, $memory_3);
#line 283
$memory_4 = 1;
#line 283
$memory_3 = $memory_3 + $memory_4;
#line 283
$memory_5 = "pos";
#line 283
c_rt_lib::set_ref_hash($memory_0, $memory_5, $memory_3);
#line 283
undef($memory_5);
#line 283
undef($memory_3);
#line 283
undef($memory_4);
#line 284
$memory_3 = "-";
#line 284
$memory_3 = c_rt_lib::to_nl($memory_1 eq $memory_3);
#line 284
if (c_rt_lib::check_true($memory_3)) {goto label_34;}
#line 284
$memory_3 = "+";
#line 284
$memory_3 = c_rt_lib::to_nl($memory_1 eq $memory_3);
#line 284
label_34:
#line 284
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 284
if (c_rt_lib::check_true($memory_3)) {goto label_33;}
#line 285
$memory_4 = ntokenizer_priv::get_char($memory_0);
#line 285
$memory_1 = $memory_4;
#line 285
undef($memory_4);
#line 286
$memory_4 = "next_token";
#line 286
$memory_4 = c_rt_lib::get_ref_hash($memory_0, $memory_4);
#line 286
$memory_4 = $memory_4 . $memory_1;
#line 286
$memory_5 = "next_token";
#line 286
c_rt_lib::set_ref_hash($memory_0, $memory_5, $memory_4);
#line 286
undef($memory_5);
#line 286
undef($memory_4);
#line 287
$memory_4 = "pos";
#line 287
$memory_4 = c_rt_lib::get_ref_hash($memory_0, $memory_4);
#line 287
$memory_5 = 1;
#line 287
$memory_4 = $memory_4 + $memory_5;
#line 287
$memory_6 = "pos";
#line 287
c_rt_lib::set_ref_hash($memory_0, $memory_6, $memory_4);
#line 287
undef($memory_6);
#line 287
undef($memory_4);
#line 287
undef($memory_5);
#line 288
goto label_33;
#line 288
label_33:
#line 288
undef($memory_3);
#line 289
$memory_3 = 0;
#line 289
$memory_3 = c_rt_lib::to_nl($memory_1 eq $memory_3);
#line 289
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 289
if (c_rt_lib::check_true($memory_5)) {goto label_38;}
#line 289
$memory_3 = ntokenizer_priv::get_char($memory_0);
#line 289
$memory_6 = "x";
#line 289
$memory_3 = c_rt_lib::to_nl($memory_3 eq $memory_6);
#line 289
undef($memory_6);
#line 289
label_38:
#line 289
undef($memory_5);
#line 289
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 289
if (c_rt_lib::check_true($memory_4)) {goto label_37;}
#line 289
$memory_5 = ntokenizer_priv::get_next_char($memory_0);
#line 289
$memory_3 = ntokenizer_priv::is_hex_number($memory_5);
#line 289
undef($memory_5);
#line 289
label_37:
#line 289
undef($memory_4);
#line 289
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 289
if (c_rt_lib::check_true($memory_3)) {goto label_36;}
#line 290
$memory_4 = ntokenizer_priv::get_char($memory_0);
#line 290
$memory_5 = "next_token";
#line 290
$memory_5 = c_rt_lib::get_ref_hash($memory_0, $memory_5);
#line 290
$memory_5 = $memory_5 . $memory_4;
#line 290
$memory_6 = "next_token";
#line 290
c_rt_lib::set_ref_hash($memory_0, $memory_6, $memory_5);
#line 290
undef($memory_6);
#line 290
undef($memory_4);
#line 290
undef($memory_5);
#line 291
$memory_4 = "pos";
#line 291
$memory_4 = c_rt_lib::get_ref_hash($memory_0, $memory_4);
#line 291
$memory_5 = 1;
#line 291
$memory_4 = $memory_4 + $memory_5;
#line 291
$memory_6 = "pos";
#line 291
c_rt_lib::set_ref_hash($memory_0, $memory_6, $memory_4);
#line 291
undef($memory_6);
#line 291
undef($memory_4);
#line 291
undef($memory_5);
#line 292
$memory_4 = ntokenizer_priv::get_char($memory_0);
#line 292
$memory_1 = $memory_4;
#line 292
undef($memory_4);
#line 293
label_40:
#line 293
$memory_4 = ntokenizer_priv::is_hex_number($memory_1);
#line 293
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 293
if (c_rt_lib::check_true($memory_4)) {goto label_39;}
#line 294
$memory_5 = "next_token";
#line 294
$memory_5 = c_rt_lib::get_ref_hash($memory_0, $memory_5);
#line 294
$memory_5 = $memory_5 . $memory_1;
#line 294
$memory_6 = "next_token";
#line 294
c_rt_lib::set_ref_hash($memory_0, $memory_6, $memory_5);
#line 294
undef($memory_6);
#line 294
undef($memory_5);
#line 295
$memory_5 = "pos";
#line 295
$memory_5 = c_rt_lib::get_ref_hash($memory_0, $memory_5);
#line 295
$memory_6 = 1;
#line 295
$memory_5 = $memory_5 + $memory_6;
#line 295
$memory_7 = "pos";
#line 295
c_rt_lib::set_ref_hash($memory_0, $memory_7, $memory_5);
#line 295
undef($memory_7);
#line 295
undef($memory_5);
#line 295
undef($memory_6);
#line 296
$memory_5 = ntokenizer_priv::get_char($memory_0);
#line 296
$memory_1 = $memory_5;
#line 296
undef($memory_5);
#line 297
goto label_40;
#line 297
label_39:
#line 297
undef($memory_4);
#line 298
goto label_35;
#line 298
label_36:
#line 299
$memory_4 = 0;
#line 300
label_42:
#line 301
$memory_5 = ntokenizer_priv::get_char($memory_0);
#line 301
$memory_1 = $memory_5;
#line 301
undef($memory_5);
#line 302
$memory_5 = 1;
#line 302
$memory_5 = c_rt_lib::to_nl($memory_4 == $memory_5);
#line 302
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 302
if (c_rt_lib::check_true($memory_5)) {goto label_44;}
#line 302
$memory_6 = 1;
#line 302
$memory_4 = $memory_4 + $memory_6;
#line 302
undef($memory_6);
#line 302
goto label_44;
#line 302
label_44:
#line 302
undef($memory_5);
#line 303
$memory_5 = ".";
#line 303
$memory_5 = c_rt_lib::to_nl($memory_1 eq $memory_5);
#line 303
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 303
if (c_rt_lib::check_true($memory_7)) {goto label_48;}
#line 303
$memory_8 = ntokenizer_priv::get_next_char($memory_0);
#line 303
$memory_5 = string::is_digit($memory_8);
#line 303
undef($memory_8);
#line 303
label_48:
#line 303
undef($memory_7);
#line 303
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 303
if (c_rt_lib::check_true($memory_6)) {goto label_47;}
#line 303
$memory_5 = 0;
#line 303
$memory_5 = c_rt_lib::to_nl($memory_4 == $memory_5);
#line 303
label_47:
#line 303
undef($memory_6);
#line 303
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 303
if (c_rt_lib::check_true($memory_5)) {goto label_46;}
#line 303
$memory_6 = 1;
#line 303
$memory_4 = $memory_6;
#line 303
undef($memory_6);
#line 303
goto label_46;
#line 303
label_46:
#line 303
undef($memory_5);
#line 304
$memory_5 = string::is_digit($memory_1);
#line 304
if (c_rt_lib::check_true($memory_5)) {goto label_51;}
#line 304
$memory_5 = 1;
#line 304
$memory_5 = c_rt_lib::to_nl($memory_4 == $memory_5);
#line 304
label_51:
#line 304
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 304
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 304
if (c_rt_lib::check_true($memory_5)) {goto label_50;}
#line 304
undef($memory_5);
#line 304
goto label_41;
#line 304
goto label_50;
#line 304
label_50:
#line 304
undef($memory_5);
#line 305
$memory_5 = "next_token";
#line 305
$memory_5 = c_rt_lib::get_ref_hash($memory_0, $memory_5);
#line 305
$memory_5 = $memory_5 . $memory_1;
#line 305
$memory_6 = "next_token";
#line 305
c_rt_lib::set_ref_hash($memory_0, $memory_6, $memory_5);
#line 305
undef($memory_6);
#line 305
undef($memory_5);
#line 306
$memory_5 = "pos";
#line 306
$memory_5 = c_rt_lib::get_ref_hash($memory_0, $memory_5);
#line 306
$memory_6 = 1;
#line 306
$memory_5 = $memory_5 + $memory_6;
#line 306
$memory_7 = "pos";
#line 306
c_rt_lib::set_ref_hash($memory_0, $memory_7, $memory_5);
#line 306
undef($memory_7);
#line 306
undef($memory_5);
#line 306
undef($memory_6);
#line 300
goto label_42;
#line 300
label_41:
#line 300
undef($memory_4);
#line 308
goto label_35;
#line 308
label_35:
#line 308
undef($memory_3);
#line 309
goto label_5;
#line 309
label_28:
#line 310
$memory_3 = c_rt_lib::ov_mk_none('error');
#line 310
$memory_4 = $memory_3;
#line 310
 if (c_rt_lib::get_hashcount($memory_0) > 1) {$memory_0 = {%{$memory_0}};}$memory_0->{'type'} = $memory_4;
#line 310
undef($memory_3);
#line 310
undef($memory_4);
#line 311
$memory_3 = $memory_1;
#line 311
 if (c_rt_lib::get_hashcount($memory_0) > 1) {$memory_0 = {%{$memory_0}};}$memory_0->{'next_token'} = $memory_3;
#line 311
undef($memory_3);
#line 312
goto label_5;
#line 312
label_5:
#line 312
undef($memory_2);
#line 312
undef($memory_1);
#line 312
$_[0] = $memory_0;return;
$_[0] = $memory_0;}
