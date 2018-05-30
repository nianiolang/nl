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
sub ntokenizer::get_last_comment;
sub ntokenizer_priv::get_char;
sub ntokenizer_priv::get_next_char;
sub ntokenizer_priv::eat_ws;
sub ntokenizer_priv::is_token;
sub ntokenizer::eat_token;
sub ntokenizer::get_line;
sub ntokenizer::get_column;
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
#line 19
$memory_2 = "";
#line 20
$memory_3 = "";
#line 21
$memory_4 = "";
#line 22
$memory_5 = "";
#line 23
$memory_6 = "";
#line 24
$memory_7 = "";
#line 25
$memory_8 = "";
#line 26
$memory_9 = "";
#line 27
$memory_10 = "";
#line 28
$memory_11 = "";
#line 29
$memory_12 = "";
#line 30
$memory_13 = "";
#line 31
$memory_14 = "";
#line 32
$memory_15 = "";
#line 33
$memory_16 = "";
#line 34
$memory_17 = "";
#line 35
$memory_18 = "";
#line 36
$memory_19 = "";
#line 37
$memory_20 = "";
#line 38
$memory_21 = "";
#line 39
$memory_22 = "";
#line 40
$memory_23 = "";
#line 41
$memory_24 = "";
#line 42
$memory_25 = "";
#line 42
$memory_1 = {use => $memory_2,fora => $memory_3,forh => $memory_4,for => $memory_5,rep => $memory_6,loop => $memory_7,while => $memory_8,if => $memory_9,elsif => $memory_10,else => $memory_11,var => $memory_12,def => $memory_13,ref => $memory_14,match => $memory_15,case => $memory_16,unless => $memory_17,true => $memory_18,false => $memory_19,continue => $memory_20,break => $memory_21,return => $memory_22,try => $memory_23,ensure => $memory_24,die => $memory_25,};
#line 42
undef($memory_2);
#line 42
undef($memory_3);
#line 42
undef($memory_4);
#line 42
undef($memory_5);
#line 42
undef($memory_6);
#line 42
undef($memory_7);
#line 42
undef($memory_8);
#line 42
undef($memory_9);
#line 42
undef($memory_10);
#line 42
undef($memory_11);
#line 42
undef($memory_12);
#line 42
undef($memory_13);
#line 42
undef($memory_14);
#line 42
undef($memory_15);
#line 42
undef($memory_16);
#line 42
undef($memory_17);
#line 42
undef($memory_18);
#line 42
undef($memory_19);
#line 42
undef($memory_20);
#line 42
undef($memory_21);
#line 42
undef($memory_22);
#line 42
undef($memory_23);
#line 42
undef($memory_24);
#line 42
undef($memory_25);
#line 42
$memory_0 = singleton::sigleton_do_not_use_without_approval($memory_1);
#line 42
undef($memory_1);
#line 42
return $memory_0;
#line 42
undef($memory_0);
#line 42
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
label_17:
#line 48
$memory_6 = c_rt_lib::to_nl($memory_3 >= $memory_5);
#line 48
if (c_rt_lib::check_true($memory_6)) {goto label_57;}
#line 48
$memory_2 = $memory_1->[$memory_3];
#line 49
$memory_9 = c_rt_lib::init_iter($memory_2);
#line 49
label_22:
#line 49
$memory_7 = c_rt_lib::is_end_hash($memory_9);
#line 49
if (c_rt_lib::check_true($memory_7)) {goto label_51;}
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
if (c_rt_lib::check_true($memory_10)) {goto label_47;}
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
goto label_47;
#line 50
label_47:
#line 50
undef($memory_10);
#line 51
$memory_9 = c_rt_lib::next_iter($memory_9);
#line 51
goto label_22;
#line 51
label_51:
#line 51
undef($memory_7);
#line 51
undef($memory_8);
#line 51
undef($memory_9);
#line 52
$memory_3 = $memory_3 + $memory_4;
#line 52
goto label_17;
#line 52
label_57:
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
#line 59
$memory_0 = {};
#line 60
$memory_2 = nast::get_unary_ops();
#line 60
$memory_3 = nast::get_bin_ops();
#line 60
$memory_4 = nast::get_ternary_ops();
#line 60
$memory_1 = [$memory_2,$memory_3,$memory_4];
#line 60
undef($memory_2);
#line 60
undef($memory_3);
#line 60
undef($memory_4);
#line 60
$memory_3 = 0;
#line 60
$memory_4 = 1;
#line 60
$memory_5 = c_rt_lib::array_len($memory_1);
#line 60
label_11:
#line 60
$memory_6 = c_rt_lib::to_nl($memory_3 >= $memory_5);
#line 60
if (c_rt_lib::check_true($memory_6)) {goto label_44;}
#line 60
$memory_2 = $memory_1->[$memory_3];
#line 61
$memory_9 = c_rt_lib::init_iter($memory_2);
#line 61
label_16:
#line 61
$memory_7 = c_rt_lib::is_end_hash($memory_9);
#line 61
if (c_rt_lib::check_true($memory_7)) {goto label_38;}
#line 61
$memory_7 = c_rt_lib::get_key_iter($memory_9);
#line 61
$memory_8 = c_rt_lib::hash_get_value($memory_2, $memory_7);
#line 62
$memory_12 = 0;
#line 62
$memory_13 = 1;
#line 62
$memory_11 = string::substr($memory_7, $memory_12, $memory_13);
#line 62
undef($memory_13);
#line 62
undef($memory_12);
#line 62
$memory_10 = string::is_letter($memory_11);
#line 62
undef($memory_11);
#line 62
$memory_10 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_10));
#line 62
if (c_rt_lib::check_true($memory_10)) {goto label_34;}
#line 62
$memory_11 = "";
#line 62
hash::set_value($memory_0, $memory_7, $memory_11);
#line 62
undef($memory_11);
#line 62
goto label_34;
#line 62
label_34:
#line 62
undef($memory_10);
#line 63
$memory_9 = c_rt_lib::next_iter($memory_9);
#line 63
goto label_16;
#line 63
label_38:
#line 63
undef($memory_7);
#line 63
undef($memory_8);
#line 63
undef($memory_9);
#line 64
$memory_3 = $memory_3 + $memory_4;
#line 64
goto label_11;
#line 64
label_44:
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
undef($memory_6);
#line 65
$memory_1 = singleton::sigleton_do_not_use_without_approval($memory_0);
#line 65
undef($memory_0);
#line 65
return $memory_1;
#line 65
undef($memory_1);
#line 65
undef($memory_0);
#line 65
return;
}

my $_get_lett_oper;
sub ntokenizer_priv::get_lett_oper() {
	$_get_lett_oper = ntokenizer_priv::__get_lett_oper() unless defined $_get_lett_oper;
	return $_get_lett_oper;
}

sub ntokenizer::__state_t() {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;my $memory_13;
#line 70
$memory_3 = ptd::sim();
#line 70
$memory_2 = ptd::arr($memory_3);
#line 70
undef($memory_3);
#line 71
$memory_3 = ptd::sim();
#line 72
$memory_4 = ptd::sim();
#line 73
$memory_5 = {
	module => "ntokenizer",
	name => "token_t",
};
#line 73
$memory_5 = c_rt_lib::ov_mk_arg('ref', $memory_5);
#line 74
$memory_6 = ptd::sim();
#line 75
$memory_7 = ptd::sim();
#line 76
$memory_8 = ptd::sim();
#line 77
$memory_11 = ptd::sim();
#line 77
$memory_12 = ptd::sim();
#line 77
$memory_10 = {line => $memory_11,position => $memory_12,};
#line 77
undef($memory_11);
#line 77
undef($memory_12);
#line 77
$memory_9 = ptd::rec($memory_10);
#line 77
undef($memory_10);
#line 78
$memory_12 = ptd::sim();
#line 78
$memory_13 = ptd::sim();
#line 78
$memory_11 = {line => $memory_12,position => $memory_13,};
#line 78
undef($memory_12);
#line 78
undef($memory_13);
#line 78
$memory_10 = ptd::rec($memory_11);
#line 78
undef($memory_11);
#line 79
$memory_11 = ptd::sim();
#line 79
$memory_1 = {text => $memory_2,pos => $memory_3,len => $memory_4,type => $memory_5,next_token => $memory_6,ln_nr => $memory_7,ln_pos => $memory_8,place => $memory_9,place_ws => $memory_10,last_comment => $memory_11,};
#line 79
undef($memory_2);
#line 79
undef($memory_3);
#line 79
undef($memory_4);
#line 79
undef($memory_5);
#line 79
undef($memory_6);
#line 79
undef($memory_7);
#line 79
undef($memory_8);
#line 79
undef($memory_9);
#line 79
undef($memory_10);
#line 79
undef($memory_11);
#line 79
$memory_0 = ptd::rec($memory_1);
#line 79
undef($memory_1);
#line 79
return $memory_0;
#line 79
undef($memory_0);
#line 79
return;
}

my $_state_t;
sub ntokenizer::state_t() {
	$_state_t = ntokenizer::__state_t() unless defined $_state_t;
	return $_state_t;
}

sub ntokenizer::__token_t() {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;
#line 85
$memory_2 = ptd::none();
#line 86
$memory_3 = ptd::none();
#line 87
$memory_4 = ptd::none();
#line 88
$memory_5 = ptd::none();
#line 89
$memory_6 = ptd::none();
#line 90
$memory_7 = ptd::none();
#line 91
$memory_8 = ptd::none();
#line 92
$memory_9 = ptd::none();
#line 93
$memory_10 = ptd::none();
#line 93
$memory_1 = {end => $memory_2,delimiter => $memory_3,operator => $memory_4,number => $memory_5,keyword => $memory_6,word => $memory_7,multi_string => $memory_8,string => $memory_9,error => $memory_10,};
#line 93
undef($memory_2);
#line 93
undef($memory_3);
#line 93
undef($memory_4);
#line 93
undef($memory_5);
#line 93
undef($memory_6);
#line 93
undef($memory_7);
#line 93
undef($memory_8);
#line 93
undef($memory_9);
#line 93
undef($memory_10);
#line 93
$memory_0 = ptd::var($memory_1);
#line 93
undef($memory_1);
#line 93
return $memory_0;
#line 93
undef($memory_0);
#line 93
return;
}

my $_token_t;
sub ntokenizer::token_t() {
	$_token_t = ntokenizer::__token_t() unless defined $_token_t;
	return $_token_t;
}

sub ntokenizer::init($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;$memory_0 = $_[0];
#line 99
$memory_2 = [$memory_0];
#line 100
$memory_3 = string::length($memory_0);
#line 101
$memory_4 = 0;
#line 102
$memory_5 = c_rt_lib::ov_mk_none('end');
#line 103
$memory_6 = "";
#line 104
$memory_7 = 1;
#line 105
$memory_8 = 1;
#line 106
$memory_10 = 1;
#line 106
$memory_11 = 0;
#line 106
$memory_9 = {line => $memory_10,position => $memory_11,};
#line 106
undef($memory_10);
#line 106
undef($memory_11);
#line 107
$memory_11 = 1;
#line 107
$memory_12 = 0;
#line 107
$memory_10 = {line => $memory_11,position => $memory_12,};
#line 107
undef($memory_11);
#line 107
undef($memory_12);
#line 108
$memory_11 = "";
#line 108
$memory_1 = {text => $memory_2,len => $memory_3,pos => $memory_4,type => $memory_5,next_token => $memory_6,ln_nr => $memory_7,ln_pos => $memory_8,place => $memory_9,place_ws => $memory_10,last_comment => $memory_11,};
#line 108
undef($memory_2);
#line 108
undef($memory_3);
#line 108
undef($memory_4);
#line 108
undef($memory_5);
#line 108
undef($memory_6);
#line 108
undef($memory_7);
#line 108
undef($memory_8);
#line 108
undef($memory_9);
#line 108
undef($memory_10);
#line 108
undef($memory_11);
#line 110
ntokenizer_priv::get_next_token($memory_1);
#line 111
undef($memory_0);
#line 111
return $memory_1;
#line 111
undef($memory_1);
#line 111
undef($memory_0);
#line 111
return;
}

sub ntokenizer::get_last_comment($) {
my $memory_0;my $memory_1;$memory_0 = $_[0];
#line 115
$memory_1 = $memory_0->{'last_comment'};
#line 115
undef($memory_0);
#line 115
return $memory_1;
#line 115
undef($memory_1);
#line 115
undef($memory_0);
#line 115
return;
}

sub ntokenizer_priv::get_char($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);
#line 119
$memory_2 = $memory_0->{'text'};
#line 119
$memory_3 = $memory_0->{'pos'};
#line 119
$memory_4 = 1;
#line 119
$memory_1 = c_std_lib::fast_substr($memory_2, $memory_3, $memory_4);
#line 119
undef($memory_4);
#line 119
undef($memory_3);
#line 119
undef($memory_2);
#line 119
$memory_2 = "";
#line 119
$memory_1 = $memory_1 . $memory_2;
#line 119
undef($memory_2);
#line 119
$_[0] = $memory_0;return $memory_1;
#line 119
undef($memory_1);
#line 119
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub ntokenizer_priv::get_next_char($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);
#line 123
$memory_1 = $memory_0->{'len'};
#line 123
$memory_2 = $memory_0->{'pos'};
#line 123
$memory_3 = 1;
#line 123
$memory_2 = $memory_2 + $memory_3;
#line 123
undef($memory_3);
#line 123
$memory_1 = c_rt_lib::to_nl($memory_1 <= $memory_2);
#line 123
undef($memory_2);
#line 123
$memory_1 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_1));
#line 123
if (c_rt_lib::check_true($memory_1)) {goto label_14;}
#line 123
$memory_2 = "";
#line 123
undef($memory_1);
#line 123
$_[0] = $memory_0;return $memory_2;
#line 123
undef($memory_2);
#line 123
goto label_14;
#line 123
label_14:
#line 123
undef($memory_1);
#line 124
$memory_2 = $memory_0->{'text'};
#line 124
$memory_3 = $memory_0->{'pos'};
#line 124
$memory_4 = 1;
#line 124
$memory_3 = $memory_3 + $memory_4;
#line 124
undef($memory_4);
#line 124
$memory_4 = 1;
#line 124
$memory_1 = c_std_lib::fast_substr($memory_2, $memory_3, $memory_4);
#line 124
undef($memory_4);
#line 124
undef($memory_3);
#line 124
undef($memory_2);
#line 124
$_[0] = $memory_0;return $memory_1;
#line 124
undef($memory_1);
#line 124
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub ntokenizer_priv::eat_ws($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);
#line 128
$memory_1 = "";
#line 128
$memory_2 = $memory_1;
#line 128
 if (c_rt_lib::get_hashcount($memory_0) > 1) {$memory_0 = {%{$memory_0}};}$memory_0->{'last_comment'} = $memory_2;
#line 128
undef($memory_1);
#line 128
undef($memory_2);
#line 129
$memory_1 = c_rt_lib::to_nl(1);
#line 130
label_6:
#line 131
$memory_2 = $memory_0->{'pos'};
#line 131
$memory_3 = $memory_0->{'len'};
#line 131
$memory_2 = c_rt_lib::to_nl($memory_2 == $memory_3);
#line 131
undef($memory_3);
#line 131
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 131
if (c_rt_lib::check_true($memory_2)) {goto label_17;}
#line 131
undef($memory_1);
#line 131
undef($memory_2);
#line 131
$_[0] = $memory_0;return;
#line 131
goto label_17;
#line 131
label_17:
#line 131
undef($memory_2);
#line 132
$memory_2 = ntokenizer_priv::get_char($memory_0);
#line 133
$memory_3 = string::ord($memory_2);
#line 134
$memory_4 = 9;
#line 134
$memory_4 = c_rt_lib::to_nl($memory_3 == $memory_4);
#line 134
if (c_rt_lib::check_true($memory_4)) {goto label_26;}
#line 134
$memory_4 = 13;
#line 134
$memory_4 = c_rt_lib::to_nl($memory_3 == $memory_4);
#line 134
label_26:
#line 134
if (c_rt_lib::check_true($memory_4)) {goto label_30;}
#line 134
$memory_4 = 32;
#line 134
$memory_4 = c_rt_lib::to_nl($memory_3 == $memory_4);
#line 134
label_30:
#line 134
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 134
if (c_rt_lib::check_true($memory_4)) {goto label_46;}
#line 135
$memory_5 = "pos";
#line 135
$memory_5 = c_rt_lib::get_ref_hash($memory_0, $memory_5);
#line 135
$memory_6 = 1;
#line 135
$memory_5 = $memory_5 + $memory_6;
#line 135
$memory_7 = "pos";
#line 135
c_rt_lib::set_ref_hash($memory_0, $memory_7, $memory_5);
#line 135
undef($memory_7);
#line 135
undef($memory_5);
#line 135
undef($memory_6);
#line 136
$memory_5 = c_rt_lib::to_nl(0);
#line 136
$memory_1 = $memory_5;
#line 136
undef($memory_5);
#line 137
goto label_176;
#line 137
label_46:
#line 137
$memory_4 = 10;
#line 137
$memory_4 = c_rt_lib::to_nl($memory_3 == $memory_4);
#line 137
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 137
if (c_rt_lib::check_true($memory_4)) {goto label_78;}
#line 138
$memory_5 = "pos";
#line 138
$memory_5 = c_rt_lib::get_ref_hash($memory_0, $memory_5);
#line 138
$memory_6 = 1;
#line 138
$memory_5 = $memory_5 + $memory_6;
#line 138
$memory_7 = "pos";
#line 138
c_rt_lib::set_ref_hash($memory_0, $memory_7, $memory_5);
#line 138
undef($memory_7);
#line 138
undef($memory_5);
#line 138
undef($memory_6);
#line 139
$memory_5 = $memory_0->{'pos'};
#line 139
$memory_6 = $memory_5;
#line 139
 if (c_rt_lib::get_hashcount($memory_0) > 1) {$memory_0 = {%{$memory_0}};}$memory_0->{'ln_pos'} = $memory_6;
#line 139
undef($memory_5);
#line 139
undef($memory_6);
#line 140
$memory_5 = "ln_nr";
#line 140
$memory_5 = c_rt_lib::get_ref_hash($memory_0, $memory_5);
#line 140
$memory_6 = 1;
#line 140
$memory_5 = $memory_5 + $memory_6;
#line 140
$memory_7 = "ln_nr";
#line 140
c_rt_lib::set_ref_hash($memory_0, $memory_7, $memory_5);
#line 140
undef($memory_7);
#line 140
undef($memory_5);
#line 140
undef($memory_6);
#line 141
$memory_5 = c_rt_lib::to_nl(0);
#line 141
$memory_1 = $memory_5;
#line 141
undef($memory_5);
#line 142
goto label_176;
#line 142
label_78:
#line 142
$memory_4 = 35;
#line 142
$memory_4 = c_rt_lib::to_nl($memory_3 == $memory_4);
#line 142
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 142
if (c_rt_lib::check_true($memory_4)) {goto label_169;}
#line 143
$memory_5 = $memory_1;
#line 143
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 143
if (c_rt_lib::check_true($memory_5)) {goto label_94;}
#line 144
$memory_6 = "last_comment";
#line 144
$memory_6 = c_rt_lib::get_ref_hash($memory_0, $memory_6);
#line 144
$memory_6 = $memory_6 . $memory_2;
#line 144
$memory_7 = "last_comment";
#line 144
c_rt_lib::set_ref_hash($memory_0, $memory_7, $memory_6);
#line 144
undef($memory_7);
#line 144
undef($memory_6);
#line 145
goto label_94;
#line 145
label_94:
#line 145
undef($memory_5);
#line 146
$memory_5 = "pos";
#line 146
$memory_5 = c_rt_lib::get_ref_hash($memory_0, $memory_5);
#line 146
$memory_6 = 1;
#line 146
$memory_5 = $memory_5 + $memory_6;
#line 146
$memory_7 = "pos";
#line 146
c_rt_lib::set_ref_hash($memory_0, $memory_7, $memory_5);
#line 146
undef($memory_7);
#line 146
undef($memory_5);
#line 146
undef($memory_6);
#line 147
label_105:
#line 148
$memory_5 = $memory_0->{'pos'};
#line 148
$memory_6 = $memory_0->{'len'};
#line 148
$memory_5 = c_rt_lib::to_nl($memory_5 == $memory_6);
#line 148
undef($memory_6);
#line 148
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 148
if (c_rt_lib::check_true($memory_5)) {goto label_119;}
#line 148
undef($memory_1);
#line 148
undef($memory_2);
#line 148
undef($memory_3);
#line 148
undef($memory_4);
#line 148
undef($memory_5);
#line 148
$_[0] = $memory_0;return;
#line 148
goto label_119;
#line 148
label_119:
#line 148
undef($memory_5);
#line 149
$memory_5 = ntokenizer_priv::get_char($memory_0);
#line 150
$memory_6 = "pos";
#line 150
$memory_6 = c_rt_lib::get_ref_hash($memory_0, $memory_6);
#line 150
$memory_7 = 1;
#line 150
$memory_6 = $memory_6 + $memory_7;
#line 150
$memory_8 = "pos";
#line 150
c_rt_lib::set_ref_hash($memory_0, $memory_8, $memory_6);
#line 150
undef($memory_8);
#line 150
undef($memory_6);
#line 150
undef($memory_7);
#line 151
$memory_6 = $memory_1;
#line 151
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 151
if (c_rt_lib::check_true($memory_6)) {goto label_142;}
#line 152
$memory_7 = "last_comment";
#line 152
$memory_7 = c_rt_lib::get_ref_hash($memory_0, $memory_7);
#line 152
$memory_7 = $memory_7 . $memory_5;
#line 152
$memory_8 = "last_comment";
#line 152
c_rt_lib::set_ref_hash($memory_0, $memory_8, $memory_7);
#line 152
undef($memory_8);
#line 152
undef($memory_7);
#line 153
goto label_142;
#line 153
label_142:
#line 153
undef($memory_6);
#line 154
$memory_6 = string::ord($memory_5);
#line 154
$memory_7 = 10;
#line 154
$memory_6 = c_rt_lib::to_nl($memory_6 == $memory_7);
#line 154
undef($memory_7);
#line 154
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 154
if (c_rt_lib::check_true($memory_6)) {goto label_154;}
#line 154
undef($memory_5);
#line 154
undef($memory_6);
#line 154
goto label_158;
#line 154
goto label_154;
#line 154
label_154:
#line 154
undef($memory_6);
#line 154
undef($memory_5);
#line 147
goto label_105;
#line 147
label_158:
#line 156
$memory_5 = "ln_nr";
#line 156
$memory_5 = c_rt_lib::get_ref_hash($memory_0, $memory_5);
#line 156
$memory_6 = 1;
#line 156
$memory_5 = $memory_5 + $memory_6;
#line 156
$memory_7 = "ln_nr";
#line 156
c_rt_lib::set_ref_hash($memory_0, $memory_7, $memory_5);
#line 156
undef($memory_7);
#line 156
undef($memory_5);
#line 156
undef($memory_6);
#line 157
goto label_176;
#line 157
label_169:
#line 158
undef($memory_1);
#line 158
undef($memory_2);
#line 158
undef($memory_3);
#line 158
undef($memory_4);
#line 158
$_[0] = $memory_0;return;
#line 159
goto label_176;
#line 159
label_176:
#line 159
undef($memory_4);
#line 159
undef($memory_2);
#line 159
undef($memory_3);
#line 130
goto label_6;
#line 130
undef($memory_1);
#line 130
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub ntokenizer_priv::is_token($) {
my $memory_0;my $memory_1;my $memory_2;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);
#line 164
$memory_1 = $memory_0->{'type'};
#line 164
$memory_1 = c_rt_lib::ov_is($memory_1, 'delimiter');
#line 164
$memory_1 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_1));
#line 164
if (c_rt_lib::check_true($memory_1)) {goto label_9;}
#line 164
$memory_2 = c_rt_lib::to_nl(1);
#line 164
undef($memory_1);
#line 164
$_[0] = $memory_0;return $memory_2;
#line 164
undef($memory_2);
#line 164
goto label_9;
#line 164
label_9:
#line 164
undef($memory_1);
#line 165
$memory_1 = $memory_0->{'type'};
#line 165
$memory_1 = c_rt_lib::ov_is($memory_1, 'operator');
#line 165
$memory_1 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_1));
#line 165
if (c_rt_lib::check_true($memory_1)) {goto label_20;}
#line 165
$memory_2 = c_rt_lib::to_nl(1);
#line 165
undef($memory_1);
#line 165
$_[0] = $memory_0;return $memory_2;
#line 165
undef($memory_2);
#line 165
goto label_20;
#line 165
label_20:
#line 165
undef($memory_1);
#line 166
$memory_1 = $memory_0->{'type'};
#line 166
$memory_1 = c_rt_lib::ov_is($memory_1, 'keyword');
#line 166
$memory_1 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_1));
#line 166
if (c_rt_lib::check_true($memory_1)) {goto label_31;}
#line 166
$memory_2 = c_rt_lib::to_nl(1);
#line 166
undef($memory_1);
#line 166
$_[0] = $memory_0;return $memory_2;
#line 166
undef($memory_2);
#line 166
goto label_31;
#line 166
label_31:
#line 166
undef($memory_1);
#line 167
$memory_1 = c_rt_lib::to_nl(0);
#line 167
$_[0] = $memory_0;return $memory_1;
#line 167
undef($memory_1);
#line 167
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub ntokenizer::eat_token($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];
#line 171
$memory_2 = $memory_0->{'next_token'};
#line 171
$memory_2 = c_rt_lib::to_nl($memory_1 eq $memory_2);
#line 171
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 171
if (c_rt_lib::check_true($memory_3)) {goto label_5;}
#line 171
$memory_2 = ntokenizer_priv::is_token($memory_0);
#line 171
label_5:
#line 171
undef($memory_3);
#line 171
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 171
if (c_rt_lib::check_true($memory_2)) {goto label_16;}
#line 172
ntokenizer_priv::get_next_token($memory_0);
#line 173
$memory_3 = c_rt_lib::to_nl(1);
#line 173
undef($memory_1);
#line 173
undef($memory_2);
#line 173
$_[0] = $memory_0;return $memory_3;
#line 173
undef($memory_3);
#line 174
goto label_16;
#line 174
label_16:
#line 174
undef($memory_2);
#line 175
$memory_2 = c_rt_lib::to_nl(0);
#line 175
undef($memory_1);
#line 175
$_[0] = $memory_0;return $memory_2;
#line 175
undef($memory_2);
#line 175
undef($memory_1);
#line 175
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub ntokenizer::get_line($) {
my $memory_0;my $memory_1;$memory_0 = $_[0];
#line 179
$memory_1 = $memory_0->{'ln_nr'};
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

sub ntokenizer::get_column($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;$memory_0 = $_[0];
#line 182
$memory_1 = 1;
#line 182
$memory_2 = $memory_0->{'pos'};
#line 182
$memory_1 = $memory_1 + $memory_2;
#line 182
undef($memory_2);
#line 182
$memory_2 = $memory_0->{'ln_pos'};
#line 182
$memory_1 = $memory_1 - $memory_2;
#line 182
undef($memory_2);
#line 182
$memory_3 = $memory_0->{'next_token'};
#line 182
$memory_2 = string::length($memory_3);
#line 182
undef($memory_3);
#line 182
$memory_1 = $memory_1 - $memory_2;
#line 182
undef($memory_2);
#line 182
undef($memory_0);
#line 182
return $memory_1;
#line 182
undef($memory_1);
#line 182
undef($memory_0);
#line 182
return;
}

sub ntokenizer::get_place($) {
my $memory_0;my $memory_1;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);
#line 185
$memory_1 = $memory_0->{'place'};
#line 185
$_[0] = $memory_0;return $memory_1;
#line 185
undef($memory_1);
#line 185
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub ntokenizer::get_place_ws($) {
my $memory_0;my $memory_1;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);
#line 189
$memory_1 = $memory_0->{'place_ws'};
#line 189
$_[0] = $memory_0;return $memory_1;
#line 189
undef($memory_1);
#line 189
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub ntokenizer::get_token($) {
my $memory_0;my $memory_1;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);
#line 193
$memory_1 = $memory_0->{'next_token'};
#line 193
$_[0] = $memory_0;return $memory_1;
#line 193
undef($memory_1);
#line 193
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub ntokenizer::is_type($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];
#line 197
$memory_3 = $memory_0->{'type'};
#line 197
$memory_2 = enum::eq($memory_3, $memory_1);
#line 197
undef($memory_3);
#line 197
undef($memory_1);
#line 197
$_[0] = $memory_0;return $memory_2;
#line 197
undef($memory_2);
#line 197
undef($memory_1);
#line 197
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub ntokenizer::next_is($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];
#line 201
$memory_2 = $memory_0->{'next_token'};
#line 201
$memory_2 = c_rt_lib::to_nl($memory_1 eq $memory_2);
#line 201
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 201
if (c_rt_lib::check_true($memory_3)) {goto label_5;}
#line 201
$memory_2 = ntokenizer_priv::is_token($memory_0);
#line 201
label_5:
#line 201
undef($memory_3);
#line 201
undef($memory_1);
#line 201
$_[0] = $memory_0;return $memory_2;
#line 201
undef($memory_2);
#line 201
undef($memory_1);
#line 201
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub ntokenizer::eat_type($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];
#line 205
$memory_2 = ntokenizer::is_type($memory_0, $memory_1);
#line 205
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 205
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 205
if (c_rt_lib::check_true($memory_2)) {goto label_7;}
#line 205
$memory_3 = [];
#line 205
die(dfile::ssave($memory_3));
#line 205
goto label_7;
#line 205
label_7:
#line 205
undef($memory_2);
#line 205
undef($memory_3);
#line 206
$memory_2 = $memory_0->{'next_token'};
#line 207
ntokenizer_priv::get_next_token($memory_0);
#line 208
undef($memory_1);
#line 208
$_[0] = $memory_0;return $memory_2;
#line 208
undef($memory_2);
#line 208
undef($memory_1);
#line 208
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub ntokenizer::is_text($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);
#line 212
$memory_2 = c_rt_lib::ov_mk_none('word');
#line 212
$memory_1 = ntokenizer::is_type($memory_0, $memory_2);
#line 212
undef($memory_2);
#line 212
$memory_1 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_1));
#line 212
if (c_rt_lib::check_true($memory_1)) {goto label_10;}
#line 212
$memory_2 = c_rt_lib::to_nl(1);
#line 212
undef($memory_1);
#line 212
$_[0] = $memory_0;return $memory_2;
#line 212
undef($memory_2);
#line 212
goto label_10;
#line 212
label_10:
#line 212
undef($memory_1);
#line 213
$memory_2 = c_rt_lib::ov_mk_none('keyword');
#line 213
$memory_1 = ntokenizer::is_type($memory_0, $memory_2);
#line 213
undef($memory_2);
#line 213
$memory_1 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_1));
#line 213
if (c_rt_lib::check_true($memory_1)) {goto label_22;}
#line 213
$memory_2 = c_rt_lib::to_nl(1);
#line 213
undef($memory_1);
#line 213
$_[0] = $memory_0;return $memory_2;
#line 213
undef($memory_2);
#line 213
goto label_22;
#line 213
label_22:
#line 213
undef($memory_1);
#line 214
$memory_2 = c_rt_lib::ov_mk_none('operator');
#line 214
$memory_1 = ntokenizer::is_type($memory_0, $memory_2);
#line 214
undef($memory_2);
#line 214
$memory_1 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_1));
#line 214
if (c_rt_lib::check_true($memory_1)) {goto label_49;}
#line 215
$memory_4 = $memory_0->{'next_token'};
#line 215
$memory_5 = 0;
#line 215
$memory_6 = 1;
#line 215
$memory_3 = string::substr($memory_4, $memory_5, $memory_6);
#line 215
undef($memory_6);
#line 215
undef($memory_5);
#line 215
undef($memory_4);
#line 215
$memory_2 = string::is_letter($memory_3);
#line 215
undef($memory_3);
#line 215
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 215
if (c_rt_lib::check_true($memory_2)) {goto label_46;}
#line 215
$memory_3 = c_rt_lib::to_nl(1);
#line 215
undef($memory_1);
#line 215
undef($memory_2);
#line 215
$_[0] = $memory_0;return $memory_3;
#line 215
undef($memory_3);
#line 215
goto label_46;
#line 215
label_46:
#line 215
undef($memory_2);
#line 216
goto label_49;
#line 216
label_49:
#line 216
undef($memory_1);
#line 217
$memory_1 = c_rt_lib::to_nl(0);
#line 217
$_[0] = $memory_0;return $memory_1;
#line 217
undef($memory_1);
#line 217
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub ntokenizer::eat_text($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);
#line 221
$memory_2 = c_rt_lib::ov_mk_none('word');
#line 221
$memory_1 = ntokenizer::is_type($memory_0, $memory_2);
#line 221
undef($memory_2);
#line 221
$memory_1 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_1));
#line 221
if (c_rt_lib::check_true($memory_1)) {goto label_12;}
#line 221
$memory_3 = c_rt_lib::ov_mk_none('word');
#line 221
$memory_2 = ntokenizer::eat_type($memory_0, $memory_3);
#line 221
undef($memory_3);
#line 221
undef($memory_1);
#line 221
$_[0] = $memory_0;return $memory_2;
#line 221
undef($memory_2);
#line 221
goto label_12;
#line 221
label_12:
#line 221
undef($memory_1);
#line 222
$memory_2 = c_rt_lib::ov_mk_none('keyword');
#line 222
$memory_1 = ntokenizer::is_type($memory_0, $memory_2);
#line 222
undef($memory_2);
#line 222
$memory_1 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_1));
#line 222
if (c_rt_lib::check_true($memory_1)) {goto label_26;}
#line 222
$memory_3 = c_rt_lib::ov_mk_none('keyword');
#line 222
$memory_2 = ntokenizer::eat_type($memory_0, $memory_3);
#line 222
undef($memory_3);
#line 222
undef($memory_1);
#line 222
$_[0] = $memory_0;return $memory_2;
#line 222
undef($memory_2);
#line 222
goto label_26;
#line 222
label_26:
#line 222
undef($memory_1);
#line 223
$memory_2 = c_rt_lib::ov_mk_none('operator');
#line 223
$memory_1 = ntokenizer::is_type($memory_0, $memory_2);
#line 223
undef($memory_2);
#line 223
$memory_1 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_1));
#line 223
if (c_rt_lib::check_true($memory_1)) {goto label_55;}
#line 225
$memory_4 = $memory_0->{'next_token'};
#line 225
$memory_5 = 0;
#line 225
$memory_6 = 1;
#line 225
$memory_3 = string::substr($memory_4, $memory_5, $memory_6);
#line 225
undef($memory_6);
#line 225
undef($memory_5);
#line 225
undef($memory_4);
#line 225
$memory_2 = string::is_letter($memory_3);
#line 225
undef($memory_3);
#line 225
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 225
if (c_rt_lib::check_true($memory_2)) {goto label_52;}
#line 224
$memory_4 = c_rt_lib::ov_mk_none('operator');
#line 224
$memory_3 = ntokenizer::eat_type($memory_0, $memory_4);
#line 224
undef($memory_4);
#line 224
undef($memory_1);
#line 224
undef($memory_2);
#line 224
$_[0] = $memory_0;return $memory_3;
#line 224
undef($memory_3);
#line 224
goto label_52;
#line 224
label_52:
#line 224
undef($memory_2);
#line 226
goto label_55;
#line 226
label_55:
#line 226
undef($memory_1);
#line 227
$memory_1 = [];
#line 227
die(dfile::ssave($memory_1));
#line 227
undef($memory_1);
#line 227
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub ntokenizer::info($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;$memory_0 = $_[0];
#line 231
$memory_1 = "token: '";
#line 231
$memory_2 = $memory_0->{'next_token'};
#line 231
$memory_1 = $memory_1 . $memory_2;
#line 231
undef($memory_2);
#line 231
$memory_2 = "'
line:  ";
#line 231
$memory_1 = $memory_1 . $memory_2;
#line 231
undef($memory_2);
#line 232
$memory_2 = $memory_0->{'ln_nr'};
#line 232
$memory_1 = $memory_1 . $memory_2;
#line 232
undef($memory_2);
#line 232
$memory_2 = "
pos:   ";
#line 232
$memory_1 = $memory_1 . $memory_2;
#line 232
undef($memory_2);
#line 233
$memory_2 = 1;
#line 233
$memory_3 = $memory_0->{'pos'};
#line 233
$memory_2 = $memory_2 + $memory_3;
#line 233
undef($memory_3);
#line 233
$memory_3 = $memory_0->{'ln_pos'};
#line 233
$memory_2 = $memory_2 - $memory_3;
#line 233
undef($memory_3);
#line 233
$memory_4 = $memory_0->{'next_token'};
#line 233
$memory_3 = string::length($memory_4);
#line 233
undef($memory_4);
#line 233
$memory_2 = $memory_2 - $memory_3;
#line 233
undef($memory_3);
#line 233
$memory_1 = $memory_1 . $memory_2;
#line 233
undef($memory_2);
#line 233
$memory_2 = "
type: ";
#line 233
$memory_1 = $memory_1 . $memory_2;
#line 233
undef($memory_2);
#line 234
$memory_3 = $memory_0->{'type'};
#line 234
$memory_2 = ov::get_element($memory_3);
#line 234
undef($memory_3);
#line 234
$memory_1 = $memory_1 . $memory_2;
#line 234
undef($memory_2);
#line 234
$memory_2 = "
";
#line 234
$memory_1 = $memory_1 . $memory_2;
#line 234
undef($memory_2);
#line 234
undef($memory_0);
#line 234
return $memory_1;
#line 234
undef($memory_1);
#line 234
undef($memory_0);
#line 234
return;
}

sub ntokenizer_priv::is_hex_number($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;$memory_0 = $_[0];
#line 239
$memory_1 = string::is_digit($memory_0);
#line 239
if (c_rt_lib::check_true($memory_1)) {goto label_14;}
#line 239
$memory_1 = string::ord($memory_0);
#line 239
$memory_3 = 65;
#line 239
$memory_1 = c_rt_lib::to_nl($memory_1 >= $memory_3);
#line 239
undef($memory_3);
#line 239
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_1));
#line 239
if (c_rt_lib::check_true($memory_2)) {goto label_12;}
#line 239
$memory_1 = string::ord($memory_0);
#line 239
$memory_3 = 70;
#line 239
$memory_1 = c_rt_lib::to_nl($memory_1 <= $memory_3);
#line 239
undef($memory_3);
#line 239
label_12:
#line 239
undef($memory_2);
#line 239
label_14:
#line 239
if (c_rt_lib::check_true($memory_1)) {goto label_28;}
#line 240
$memory_1 = string::ord($memory_0);
#line 240
$memory_3 = 97;
#line 240
$memory_1 = c_rt_lib::to_nl($memory_1 >= $memory_3);
#line 240
undef($memory_3);
#line 240
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_1));
#line 240
if (c_rt_lib::check_true($memory_2)) {goto label_26;}
#line 240
$memory_1 = string::ord($memory_0);
#line 240
$memory_3 = 102;
#line 240
$memory_1 = c_rt_lib::to_nl($memory_1 <= $memory_3);
#line 240
undef($memory_3);
#line 240
label_26:
#line 240
undef($memory_2);
#line 240
label_28:
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

sub ntokenizer_priv::try_get_operator($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;my $memory_13;my $memory_14;$memory_0 = $_[0];$memory_1 = $_[1];Scalar::Util::weaken($_[1]) if ref($_[1]);
#line 244
$memory_2 = ntokenizer_priv::get_char_oper();
#line 244
$memory_4 = 0;
#line 244
$memory_5 = 1;
#line 244
$memory_6 = c_rt_lib::array_len($memory_2);
#line 244
label_4:
#line 244
$memory_7 = c_rt_lib::to_nl($memory_4 >= $memory_6);
#line 244
if (c_rt_lib::check_true($memory_7)) {goto label_80;}
#line 244
$memory_3 = $memory_2->[$memory_4];
#line 245
$memory_8 = $memory_0->{'len'};
#line 245
$memory_9 = 1;
#line 245
$memory_10 = $memory_0->{'pos'};
#line 245
$memory_9 = $memory_9 + $memory_10;
#line 245
undef($memory_10);
#line 245
$memory_10 = string::length($memory_3);
#line 245
$memory_9 = $memory_9 + $memory_10;
#line 245
undef($memory_10);
#line 245
$memory_8 = c_rt_lib::to_nl($memory_8 < $memory_9);
#line 245
undef($memory_9);
#line 245
$memory_8 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 245
if (c_rt_lib::check_true($memory_8)) {goto label_23;}
#line 245
undef($memory_8);
#line 245
goto label_77;
#line 245
goto label_23;
#line 245
label_23:
#line 245
undef($memory_8);
#line 246
$memory_9 = $memory_0->{'text'};
#line 246
$memory_10 = $memory_0->{'pos'};
#line 246
$memory_11 = string::length($memory_3);
#line 246
$memory_8 = c_std_lib::fast_substr($memory_9, $memory_10, $memory_11);
#line 246
undef($memory_11);
#line 246
undef($memory_10);
#line 246
undef($memory_9);
#line 246
$memory_8 = c_rt_lib::to_nl($memory_8 eq $memory_3);
#line 246
$memory_8 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 246
if (c_rt_lib::check_true($memory_8)) {goto label_75;}
#line 249
$memory_11 = ntokenizer_priv::get_char($memory_0);
#line 249
$memory_9 = string::is_letter($memory_11);
#line 249
undef($memory_11);
#line 249
$memory_10 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_9));
#line 249
if (c_rt_lib::check_true($memory_10)) {goto label_52;}
#line 250
$memory_12 = $memory_0->{'text'};
#line 250
$memory_13 = $memory_0->{'pos'};
#line 250
$memory_14 = string::length($memory_3);
#line 250
$memory_13 = $memory_13 + $memory_14;
#line 250
undef($memory_14);
#line 250
$memory_14 = 1;
#line 250
$memory_11 = c_std_lib::fast_substr($memory_12, $memory_13, $memory_14);
#line 250
undef($memory_14);
#line 250
undef($memory_13);
#line 250
undef($memory_12);
#line 250
$memory_9 = string::is_letter($memory_11);
#line 250
undef($memory_11);
#line 250
label_52:
#line 250
undef($memory_10);
#line 250
$memory_9 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_9));
#line 250
if (c_rt_lib::check_true($memory_9)) {goto label_60;}
#line 247
undef($memory_8);
#line 247
undef($memory_9);
#line 247
goto label_77;
#line 247
goto label_60;
#line 247
label_60:
#line 247
undef($memory_9);
#line 251
$memory_1 = $memory_3;
#line 252
$memory_9 = c_rt_lib::to_nl(1);
#line 252
undef($memory_0);
#line 252
undef($memory_2);
#line 252
undef($memory_3);
#line 252
undef($memory_4);
#line 252
undef($memory_5);
#line 252
undef($memory_6);
#line 252
undef($memory_7);
#line 252
undef($memory_8);
#line 252
$_[1] = $memory_1;return $memory_9;
#line 252
undef($memory_9);
#line 253
goto label_75;
#line 253
label_75:
#line 253
undef($memory_8);
#line 253
label_77:
#line 254
$memory_4 = $memory_4 + $memory_5;
#line 254
goto label_4;
#line 254
label_80:
#line 254
undef($memory_2);
#line 254
undef($memory_3);
#line 254
undef($memory_4);
#line 254
undef($memory_5);
#line 254
undef($memory_6);
#line 254
undef($memory_7);
#line 255
$memory_2 = c_rt_lib::to_nl(0);
#line 255
undef($memory_0);
#line 255
$_[1] = $memory_1;return $memory_2;
#line 255
undef($memory_2);
#line 255
undef($memory_0);
#line 255
$_[1] = $memory_1;return;
$_[1] = $memory_1;}

sub ntokenizer_priv::get_next_token($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);
#line 259
$memory_2 = $memory_0->{'ln_nr'};
#line 259
$memory_3 = $memory_0->{'pos'};
#line 259
$memory_4 = $memory_0->{'ln_pos'};
#line 259
$memory_3 = $memory_3 - $memory_4;
#line 259
undef($memory_4);
#line 259
$memory_4 = 1;
#line 259
$memory_3 = $memory_3 + $memory_4;
#line 259
undef($memory_4);
#line 259
$memory_1 = {line => $memory_2,position => $memory_3,};
#line 259
undef($memory_2);
#line 259
undef($memory_3);
#line 259
$memory_2 = $memory_1;
#line 259
 if (c_rt_lib::get_hashcount($memory_0) > 1) {$memory_0 = {%{$memory_0}};}$memory_0->{'place_ws'} = $memory_2;
#line 259
undef($memory_1);
#line 259
undef($memory_2);
#line 260
ntokenizer_priv::eat_ws($memory_0);
#line 261
$memory_2 = $memory_0->{'ln_nr'};
#line 261
$memory_3 = $memory_0->{'pos'};
#line 261
$memory_4 = $memory_0->{'ln_pos'};
#line 261
$memory_3 = $memory_3 - $memory_4;
#line 261
undef($memory_4);
#line 261
$memory_4 = 1;
#line 261
$memory_3 = $memory_3 + $memory_4;
#line 261
undef($memory_4);
#line 261
$memory_1 = {line => $memory_2,position => $memory_3,};
#line 261
undef($memory_2);
#line 261
undef($memory_3);
#line 261
$memory_2 = $memory_1;
#line 261
 if (c_rt_lib::get_hashcount($memory_0) > 1) {$memory_0 = {%{$memory_0}};}$memory_0->{'place'} = $memory_2;
#line 261
undef($memory_1);
#line 261
undef($memory_2);
#line 262
$memory_1 = $memory_0->{'type'};
#line 262
$memory_1 = c_rt_lib::ov_is($memory_1, 'error');
#line 262
$memory_1 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_1));
#line 262
if (c_rt_lib::check_true($memory_1)) {goto label_38;}
#line 262
undef($memory_1);
#line 262
$_[0] = $memory_0;return;
#line 262
goto label_38;
#line 262
label_38:
#line 262
undef($memory_1);
#line 263
$memory_1 = $memory_0->{'pos'};
#line 263
$memory_2 = $memory_0->{'len'};
#line 263
$memory_1 = c_rt_lib::to_nl($memory_1 == $memory_2);
#line 263
undef($memory_2);
#line 263
$memory_1 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_1));
#line 263
if (c_rt_lib::check_true($memory_1)) {goto label_59;}
#line 264
$memory_2 = c_rt_lib::ov_mk_none('end');
#line 264
$memory_3 = $memory_2;
#line 264
 if (c_rt_lib::get_hashcount($memory_0) > 1) {$memory_0 = {%{$memory_0}};}$memory_0->{'type'} = $memory_3;
#line 264
undef($memory_2);
#line 264
undef($memory_3);
#line 265
$memory_2 = "";
#line 265
$memory_3 = $memory_2;
#line 265
 if (c_rt_lib::get_hashcount($memory_0) > 1) {$memory_0 = {%{$memory_0}};}$memory_0->{'next_token'} = $memory_3;
#line 265
undef($memory_2);
#line 265
undef($memory_3);
#line 266
undef($memory_1);
#line 266
$_[0] = $memory_0;return;
#line 267
goto label_59;
#line 267
label_59:
#line 267
undef($memory_1);
#line 268
$memory_1 = ntokenizer_priv::get_char($memory_0);
#line 269
$memory_2 = "'";
#line 269
$memory_2 = c_rt_lib::to_nl($memory_1 eq $memory_2);
#line 269
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 269
if (c_rt_lib::check_true($memory_2)) {goto label_146;}
#line 270
$memory_3 = "";
#line 270
$memory_4 = $memory_3;
#line 270
 if (c_rt_lib::get_hashcount($memory_0) > 1) {$memory_0 = {%{$memory_0}};}$memory_0->{'next_token'} = $memory_4;
#line 270
undef($memory_3);
#line 270
undef($memory_4);
#line 271
$memory_3 = c_rt_lib::ov_mk_none('string');
#line 271
$memory_4 = $memory_3;
#line 271
 if (c_rt_lib::get_hashcount($memory_0) > 1) {$memory_0 = {%{$memory_0}};}$memory_0->{'type'} = $memory_4;
#line 271
undef($memory_3);
#line 271
undef($memory_4);
#line 272
label_76:
#line 273
$memory_3 = 1;
#line 273
$memory_4 = "pos";
#line 273
$memory_4 = c_rt_lib::get_ref_hash($memory_0, $memory_4);
#line 273
$memory_4 = $memory_4 + $memory_3;
#line 273
$memory_5 = "pos";
#line 273
c_rt_lib::set_ref_hash($memory_0, $memory_5, $memory_4);
#line 273
undef($memory_5);
#line 273
undef($memory_3);
#line 273
undef($memory_4);
#line 274
$memory_3 = ntokenizer_priv::get_char($memory_0);
#line 274
$memory_1 = $memory_3;
#line 274
undef($memory_3);
#line 275
$memory_3 = "'";
#line 275
$memory_3 = c_rt_lib::to_nl($memory_1 eq $memory_3);
#line 275
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 275
if (c_rt_lib::check_true($memory_3)) {goto label_118;}
#line 276
$memory_4 = 1;
#line 276
$memory_5 = "pos";
#line 276
$memory_5 = c_rt_lib::get_ref_hash($memory_0, $memory_5);
#line 276
$memory_5 = $memory_5 + $memory_4;
#line 276
$memory_6 = "pos";
#line 276
c_rt_lib::set_ref_hash($memory_0, $memory_6, $memory_5);
#line 276
undef($memory_6);
#line 276
undef($memory_4);
#line 276
undef($memory_5);
#line 277
$memory_4 = ntokenizer_priv::get_char($memory_0);
#line 277
$memory_5 = "'";
#line 277
$memory_4 = c_rt_lib::to_nl($memory_4 eq $memory_5);
#line 277
undef($memory_5);
#line 277
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 277
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 277
if (c_rt_lib::check_true($memory_4)) {goto label_115;}
#line 277
undef($memory_1);
#line 277
undef($memory_2);
#line 277
undef($memory_3);
#line 277
undef($memory_4);
#line 277
$_[0] = $memory_0;return;
#line 277
goto label_115;
#line 277
label_115:
#line 277
undef($memory_4);
#line 278
goto label_135;
#line 278
label_118:
#line 278
$memory_3 = string::ord($memory_1);
#line 278
$memory_4 = 10;
#line 278
$memory_3 = c_rt_lib::to_nl($memory_3 == $memory_4);
#line 278
undef($memory_4);
#line 278
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 278
if (c_rt_lib::check_true($memory_3)) {goto label_135;}
#line 279
$memory_4 = c_rt_lib::ov_mk_none('multi_string');
#line 279
$memory_5 = $memory_4;
#line 279
 if (c_rt_lib::get_hashcount($memory_0) > 1) {$memory_0 = {%{$memory_0}};}$memory_0->{'type'} = $memory_5;
#line 279
undef($memory_4);
#line 279
undef($memory_5);
#line 280
undef($memory_1);
#line 280
undef($memory_2);
#line 280
undef($memory_3);
#line 280
$_[0] = $memory_0;return;
#line 281
goto label_135;
#line 281
label_135:
#line 281
undef($memory_3);
#line 282
$memory_3 = "next_token";
#line 282
$memory_3 = c_rt_lib::get_ref_hash($memory_0, $memory_3);
#line 282
$memory_3 = $memory_3 . $memory_1;
#line 282
$memory_4 = "next_token";
#line 282
c_rt_lib::set_ref_hash($memory_0, $memory_4, $memory_3);
#line 282
undef($memory_4);
#line 282
undef($memory_3);
#line 272
goto label_76;
#line 284
goto label_543;
#line 284
label_146:
#line 284
$memory_2 = ntokenizer_priv::get_next_char($memory_0);
#line 284
$memory_2 = $memory_1 . $memory_2;
#line 284
$memory_3 = "=>";
#line 284
$memory_2 = c_rt_lib::to_nl($memory_2 eq $memory_3);
#line 284
undef($memory_3);
#line 284
if (c_rt_lib::check_true($memory_2)) {goto label_158;}
#line 284
$memory_2 = ntokenizer_priv::get_next_char($memory_0);
#line 284
$memory_2 = $memory_1 . $memory_2;
#line 284
$memory_3 = "::";
#line 284
$memory_2 = c_rt_lib::to_nl($memory_2 eq $memory_3);
#line 284
undef($memory_3);
#line 284
label_158:
#line 284
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 284
if (c_rt_lib::check_true($memory_2)) {goto label_182;}
#line 285
$memory_3 = c_rt_lib::ov_mk_none('delimiter');
#line 285
$memory_4 = $memory_3;
#line 285
 if (c_rt_lib::get_hashcount($memory_0) > 1) {$memory_0 = {%{$memory_0}};}$memory_0->{'type'} = $memory_4;
#line 285
undef($memory_3);
#line 285
undef($memory_4);
#line 286
$memory_3 = ntokenizer_priv::get_next_char($memory_0);
#line 286
$memory_3 = $memory_1 . $memory_3;
#line 286
$memory_4 = $memory_3;
#line 286
 if (c_rt_lib::get_hashcount($memory_0) > 1) {$memory_0 = {%{$memory_0}};}$memory_0->{'next_token'} = $memory_4;
#line 286
undef($memory_3);
#line 286
undef($memory_4);
#line 287
$memory_3 = 2;
#line 287
$memory_4 = "pos";
#line 287
$memory_4 = c_rt_lib::get_ref_hash($memory_0, $memory_4);
#line 287
$memory_4 = $memory_4 + $memory_3;
#line 287
$memory_5 = "pos";
#line 287
c_rt_lib::set_ref_hash($memory_0, $memory_5, $memory_4);
#line 287
undef($memory_5);
#line 287
undef($memory_3);
#line 287
undef($memory_4);
#line 288
goto label_543;
#line 288
label_182:
#line 288
$memory_2 = string::is_letter($memory_1);
#line 288
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 288
if (c_rt_lib::check_true($memory_2)) {goto label_272;}
#line 289
$memory_3 = $memory_1;
#line 289
 if (c_rt_lib::get_hashcount($memory_0) > 1) {$memory_0 = {%{$memory_0}};}$memory_0->{'next_token'} = $memory_3;
#line 289
undef($memory_3);
#line 290
$memory_3 = "pos";
#line 290
$memory_3 = c_rt_lib::get_ref_hash($memory_0, $memory_3);
#line 290
$memory_4 = 1;
#line 290
$memory_3 = $memory_3 + $memory_4;
#line 290
$memory_5 = "pos";
#line 290
c_rt_lib::set_ref_hash($memory_0, $memory_5, $memory_3);
#line 290
undef($memory_5);
#line 290
undef($memory_3);
#line 290
undef($memory_4);
#line 291
$memory_3 = ntokenizer_priv::get_char($memory_0);
#line 291
$memory_1 = $memory_3;
#line 291
undef($memory_3);
#line 292
label_201:
#line 292
$memory_3 = "";
#line 292
$memory_3 = c_rt_lib::to_nl($memory_1 ne $memory_3);
#line 292
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 292
if (c_rt_lib::check_true($memory_4)) {goto label_213;}
#line 292
$memory_3 = string::is_letter($memory_1);
#line 292
if (c_rt_lib::check_true($memory_3)) {goto label_209;}
#line 292
$memory_3 = string::is_digit($memory_1);
#line 292
label_209:
#line 292
if (c_rt_lib::check_true($memory_3)) {goto label_213;}
#line 292
$memory_3 = "_";
#line 292
$memory_3 = c_rt_lib::to_nl($memory_1 eq $memory_3);
#line 292
label_213:
#line 292
undef($memory_4);
#line 292
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 292
if (c_rt_lib::check_true($memory_3)) {goto label_237;}
#line 293
$memory_4 = "next_token";
#line 293
$memory_4 = c_rt_lib::get_ref_hash($memory_0, $memory_4);
#line 293
$memory_4 = $memory_4 . $memory_1;
#line 293
$memory_5 = "next_token";
#line 293
c_rt_lib::set_ref_hash($memory_0, $memory_5, $memory_4);
#line 293
undef($memory_5);
#line 293
undef($memory_4);
#line 294
$memory_4 = "pos";
#line 294
$memory_4 = c_rt_lib::get_ref_hash($memory_0, $memory_4);
#line 294
$memory_5 = 1;
#line 294
$memory_4 = $memory_4 + $memory_5;
#line 294
$memory_6 = "pos";
#line 294
c_rt_lib::set_ref_hash($memory_0, $memory_6, $memory_4);
#line 294
undef($memory_6);
#line 294
undef($memory_4);
#line 294
undef($memory_5);
#line 295
$memory_4 = ntokenizer_priv::get_char($memory_0);
#line 295
$memory_1 = $memory_4;
#line 295
undef($memory_4);
#line 296
goto label_201;
#line 296
label_237:
#line 296
undef($memory_3);
#line 297
$memory_4 = ntokenizer_priv::get_lett_oper();
#line 297
$memory_5 = $memory_0->{'next_token'};
#line 297
$memory_3 = hash::has_key($memory_4, $memory_5);
#line 297
undef($memory_5);
#line 297
undef($memory_4);
#line 297
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 297
if (c_rt_lib::check_true($memory_3)) {goto label_252;}
#line 298
$memory_4 = c_rt_lib::ov_mk_none('operator');
#line 298
$memory_5 = $memory_4;
#line 298
 if (c_rt_lib::get_hashcount($memory_0) > 1) {$memory_0 = {%{$memory_0}};}$memory_0->{'type'} = $memory_5;
#line 298
undef($memory_4);
#line 298
undef($memory_5);
#line 299
goto label_269;
#line 299
label_252:
#line 300
$memory_5 = ntokenizer_priv::get_keywords();
#line 300
$memory_6 = $memory_0->{'next_token'};
#line 300
$memory_4 = hash::has_key($memory_5, $memory_6);
#line 300
undef($memory_6);
#line 300
undef($memory_5);
#line 300
if (c_rt_lib::check_true($memory_4)) {goto label_261;}
#line 300
$memory_4 = c_rt_lib::ov_mk_none('word');
#line 300
goto label_263;
#line 300
label_261:
#line 300
$memory_4 = c_rt_lib::ov_mk_none('keyword');
#line 300
label_263:
#line 300
$memory_5 = $memory_4;
#line 300
 if (c_rt_lib::get_hashcount($memory_0) > 1) {$memory_0 = {%{$memory_0}};}$memory_0->{'type'} = $memory_5;
#line 300
undef($memory_4);
#line 300
undef($memory_5);
#line 301
goto label_269;
#line 301
label_269:
#line 301
undef($memory_3);
#line 302
goto label_543;
#line 302
label_272:
#line 302
$memory_2 = ntokenizer_priv::try_get_operator($memory_0, $memory_1);
#line 302
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 302
if (c_rt_lib::check_true($memory_2)) {goto label_294;}
#line 303
$memory_3 = c_rt_lib::ov_mk_none('operator');
#line 303
$memory_4 = $memory_3;
#line 303
 if (c_rt_lib::get_hashcount($memory_0) > 1) {$memory_0 = {%{$memory_0}};}$memory_0->{'type'} = $memory_4;
#line 303
undef($memory_3);
#line 303
undef($memory_4);
#line 304
$memory_3 = $memory_1;
#line 304
 if (c_rt_lib::get_hashcount($memory_0) > 1) {$memory_0 = {%{$memory_0}};}$memory_0->{'next_token'} = $memory_3;
#line 304
undef($memory_3);
#line 305
$memory_3 = string::length($memory_1);
#line 305
$memory_4 = "pos";
#line 305
$memory_4 = c_rt_lib::get_ref_hash($memory_0, $memory_4);
#line 305
$memory_4 = $memory_4 + $memory_3;
#line 305
$memory_5 = "pos";
#line 305
c_rt_lib::set_ref_hash($memory_0, $memory_5, $memory_4);
#line 305
undef($memory_5);
#line 305
undef($memory_3);
#line 305
undef($memory_4);
#line 306
goto label_543;
#line 306
label_294:
#line 306
$memory_3 = ";:,[]{}()";
#line 306
$memory_2 = string::index2($memory_3, $memory_1);
#line 306
undef($memory_3);
#line 306
$memory_3 = 0;
#line 306
$memory_2 = c_rt_lib::to_nl($memory_2 >= $memory_3);
#line 306
undef($memory_3);
#line 306
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 306
if (c_rt_lib::check_true($memory_2)) {goto label_321;}
#line 307
$memory_3 = c_rt_lib::ov_mk_none('delimiter');
#line 307
$memory_4 = $memory_3;
#line 307
 if (c_rt_lib::get_hashcount($memory_0) > 1) {$memory_0 = {%{$memory_0}};}$memory_0->{'type'} = $memory_4;
#line 307
undef($memory_3);
#line 307
undef($memory_4);
#line 308
$memory_3 = $memory_1;
#line 308
 if (c_rt_lib::get_hashcount($memory_0) > 1) {$memory_0 = {%{$memory_0}};}$memory_0->{'next_token'} = $memory_3;
#line 308
undef($memory_3);
#line 309
$memory_3 = "pos";
#line 309
$memory_3 = c_rt_lib::get_ref_hash($memory_0, $memory_3);
#line 309
$memory_4 = 1;
#line 309
$memory_3 = $memory_3 + $memory_4;
#line 309
$memory_5 = "pos";
#line 309
c_rt_lib::set_ref_hash($memory_0, $memory_5, $memory_3);
#line 309
undef($memory_5);
#line 309
undef($memory_3);
#line 309
undef($memory_4);
#line 310
goto label_543;
#line 310
label_321:
#line 310
$memory_2 = string::is_digit($memory_1);
#line 310
if (c_rt_lib::check_true($memory_2)) {goto label_337;}
#line 310
$memory_2 = "-";
#line 310
$memory_2 = c_rt_lib::to_nl($memory_1 eq $memory_2);
#line 310
if (c_rt_lib::check_true($memory_2)) {goto label_329;}
#line 310
$memory_2 = "+";
#line 310
$memory_2 = c_rt_lib::to_nl($memory_1 eq $memory_2);
#line 310
label_329:
#line 310
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 310
if (c_rt_lib::check_true($memory_3)) {goto label_335;}
#line 310
$memory_4 = ntokenizer_priv::get_next_char($memory_0);
#line 310
$memory_2 = string::is_digit($memory_4);
#line 310
undef($memory_4);
#line 310
label_335:
#line 310
undef($memory_3);
#line 310
label_337:
#line 310
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 310
if (c_rt_lib::check_true($memory_2)) {goto label_533;}
#line 311
$memory_3 = $memory_1;
#line 311
 if (c_rt_lib::get_hashcount($memory_0) > 1) {$memory_0 = {%{$memory_0}};}$memory_0->{'next_token'} = $memory_3;
#line 311
undef($memory_3);
#line 312
$memory_3 = c_rt_lib::ov_mk_none('number');
#line 312
$memory_4 = $memory_3;
#line 312
 if (c_rt_lib::get_hashcount($memory_0) > 1) {$memory_0 = {%{$memory_0}};}$memory_0->{'type'} = $memory_4;
#line 312
undef($memory_3);
#line 312
undef($memory_4);
#line 313
$memory_3 = "pos";
#line 313
$memory_3 = c_rt_lib::get_ref_hash($memory_0, $memory_3);
#line 313
$memory_4 = 1;
#line 313
$memory_3 = $memory_3 + $memory_4;
#line 313
$memory_5 = "pos";
#line 313
c_rt_lib::set_ref_hash($memory_0, $memory_5, $memory_3);
#line 313
undef($memory_5);
#line 313
undef($memory_3);
#line 313
undef($memory_4);
#line 314
$memory_3 = "-";
#line 314
$memory_3 = c_rt_lib::to_nl($memory_1 eq $memory_3);
#line 314
if (c_rt_lib::check_true($memory_3)) {goto label_362;}
#line 314
$memory_3 = "+";
#line 314
$memory_3 = c_rt_lib::to_nl($memory_1 eq $memory_3);
#line 314
label_362:
#line 314
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 314
if (c_rt_lib::check_true($memory_3)) {goto label_385;}
#line 315
$memory_4 = ntokenizer_priv::get_char($memory_0);
#line 315
$memory_1 = $memory_4;
#line 315
undef($memory_4);
#line 316
$memory_4 = "next_token";
#line 316
$memory_4 = c_rt_lib::get_ref_hash($memory_0, $memory_4);
#line 316
$memory_4 = $memory_4 . $memory_1;
#line 316
$memory_5 = "next_token";
#line 316
c_rt_lib::set_ref_hash($memory_0, $memory_5, $memory_4);
#line 316
undef($memory_5);
#line 316
undef($memory_4);
#line 317
$memory_4 = "pos";
#line 317
$memory_4 = c_rt_lib::get_ref_hash($memory_0, $memory_4);
#line 317
$memory_5 = 1;
#line 317
$memory_4 = $memory_4 + $memory_5;
#line 317
$memory_6 = "pos";
#line 317
c_rt_lib::set_ref_hash($memory_0, $memory_6, $memory_4);
#line 317
undef($memory_6);
#line 317
undef($memory_4);
#line 317
undef($memory_5);
#line 318
goto label_385;
#line 318
label_385:
#line 318
undef($memory_3);
#line 319
$memory_3 = 0;
#line 319
$memory_3 = c_rt_lib::to_nl($memory_1 eq $memory_3);
#line 319
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 319
if (c_rt_lib::check_true($memory_5)) {goto label_395;}
#line 319
$memory_3 = ntokenizer_priv::get_char($memory_0);
#line 319
$memory_6 = "x";
#line 319
$memory_3 = c_rt_lib::to_nl($memory_3 eq $memory_6);
#line 319
undef($memory_6);
#line 319
label_395:
#line 319
undef($memory_5);
#line 319
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 319
if (c_rt_lib::check_true($memory_4)) {goto label_402;}
#line 319
$memory_5 = ntokenizer_priv::get_next_char($memory_0);
#line 319
$memory_3 = ntokenizer_priv::is_hex_number($memory_5);
#line 319
undef($memory_5);
#line 319
label_402:
#line 319
undef($memory_4);
#line 319
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 319
if (c_rt_lib::check_true($memory_3)) {goto label_454;}
#line 320
$memory_4 = ntokenizer_priv::get_char($memory_0);
#line 320
$memory_5 = "next_token";
#line 320
$memory_5 = c_rt_lib::get_ref_hash($memory_0, $memory_5);
#line 320
$memory_5 = $memory_5 . $memory_4;
#line 320
$memory_6 = "next_token";
#line 320
c_rt_lib::set_ref_hash($memory_0, $memory_6, $memory_5);
#line 320
undef($memory_6);
#line 320
undef($memory_4);
#line 320
undef($memory_5);
#line 321
$memory_4 = "pos";
#line 321
$memory_4 = c_rt_lib::get_ref_hash($memory_0, $memory_4);
#line 321
$memory_5 = 1;
#line 321
$memory_4 = $memory_4 + $memory_5;
#line 321
$memory_6 = "pos";
#line 321
c_rt_lib::set_ref_hash($memory_0, $memory_6, $memory_4);
#line 321
undef($memory_6);
#line 321
undef($memory_4);
#line 321
undef($memory_5);
#line 322
$memory_4 = ntokenizer_priv::get_char($memory_0);
#line 322
$memory_1 = $memory_4;
#line 322
undef($memory_4);
#line 323
label_427:
#line 323
$memory_4 = ntokenizer_priv::is_hex_number($memory_1);
#line 323
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 323
if (c_rt_lib::check_true($memory_4)) {goto label_451;}
#line 324
$memory_5 = "next_token";
#line 324
$memory_5 = c_rt_lib::get_ref_hash($memory_0, $memory_5);
#line 324
$memory_5 = $memory_5 . $memory_1;
#line 324
$memory_6 = "next_token";
#line 324
c_rt_lib::set_ref_hash($memory_0, $memory_6, $memory_5);
#line 324
undef($memory_6);
#line 324
undef($memory_5);
#line 325
$memory_5 = "pos";
#line 325
$memory_5 = c_rt_lib::get_ref_hash($memory_0, $memory_5);
#line 325
$memory_6 = 1;
#line 325
$memory_5 = $memory_5 + $memory_6;
#line 325
$memory_7 = "pos";
#line 325
c_rt_lib::set_ref_hash($memory_0, $memory_7, $memory_5);
#line 325
undef($memory_7);
#line 325
undef($memory_5);
#line 325
undef($memory_6);
#line 326
$memory_5 = ntokenizer_priv::get_char($memory_0);
#line 326
$memory_1 = $memory_5;
#line 326
undef($memory_5);
#line 327
goto label_427;
#line 327
label_451:
#line 327
undef($memory_4);
#line 328
goto label_530;
#line 328
label_454:
#line 329
$memory_4 = 0;
#line 330
label_456:
#line 331
$memory_5 = ntokenizer_priv::get_char($memory_0);
#line 331
$memory_1 = $memory_5;
#line 331
undef($memory_5);
#line 332
$memory_5 = 1;
#line 332
$memory_5 = c_rt_lib::to_nl($memory_4 == $memory_5);
#line 332
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 332
if (c_rt_lib::check_true($memory_5)) {goto label_468;}
#line 332
$memory_6 = 1;
#line 332
$memory_4 = $memory_4 + $memory_6;
#line 332
undef($memory_6);
#line 332
goto label_468;
#line 332
label_468:
#line 332
undef($memory_5);
#line 333
$memory_5 = ".";
#line 333
$memory_5 = c_rt_lib::to_nl($memory_1 eq $memory_5);
#line 333
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 333
if (c_rt_lib::check_true($memory_7)) {goto label_477;}
#line 333
$memory_8 = ntokenizer_priv::get_next_char($memory_0);
#line 333
$memory_5 = string::is_digit($memory_8);
#line 333
undef($memory_8);
#line 333
label_477:
#line 333
undef($memory_7);
#line 333
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 333
if (c_rt_lib::check_true($memory_6)) {goto label_483;}
#line 333
$memory_5 = 0;
#line 333
$memory_5 = c_rt_lib::to_nl($memory_4 == $memory_5);
#line 333
label_483:
#line 333
undef($memory_6);
#line 333
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 333
if (c_rt_lib::check_true($memory_5)) {goto label_491;}
#line 333
$memory_6 = 1;
#line 333
$memory_4 = $memory_6;
#line 333
undef($memory_6);
#line 333
goto label_491;
#line 333
label_491:
#line 333
undef($memory_5);
#line 334
$memory_5 = "";
#line 334
$memory_5 = c_rt_lib::to_nl($memory_1 eq $memory_5);
#line 334
if (c_rt_lib::check_true($memory_5)) {goto label_502;}
#line 334
$memory_5 = string::is_digit($memory_1);
#line 334
if (c_rt_lib::check_true($memory_5)) {goto label_500;}
#line 334
$memory_5 = 1;
#line 334
$memory_5 = c_rt_lib::to_nl($memory_4 == $memory_5);
#line 334
label_500:
#line 334
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 334
label_502:
#line 334
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 334
if (c_rt_lib::check_true($memory_5)) {goto label_508;}
#line 334
undef($memory_5);
#line 334
goto label_527;
#line 334
goto label_508;
#line 334
label_508:
#line 334
undef($memory_5);
#line 335
$memory_5 = "next_token";
#line 335
$memory_5 = c_rt_lib::get_ref_hash($memory_0, $memory_5);
#line 335
$memory_5 = $memory_5 . $memory_1;
#line 335
$memory_6 = "next_token";
#line 335
c_rt_lib::set_ref_hash($memory_0, $memory_6, $memory_5);
#line 335
undef($memory_6);
#line 335
undef($memory_5);
#line 336
$memory_5 = "pos";
#line 336
$memory_5 = c_rt_lib::get_ref_hash($memory_0, $memory_5);
#line 336
$memory_6 = 1;
#line 336
$memory_5 = $memory_5 + $memory_6;
#line 336
$memory_7 = "pos";
#line 336
c_rt_lib::set_ref_hash($memory_0, $memory_7, $memory_5);
#line 336
undef($memory_7);
#line 336
undef($memory_5);
#line 336
undef($memory_6);
#line 330
goto label_456;
#line 330
label_527:
#line 330
undef($memory_4);
#line 338
goto label_530;
#line 338
label_530:
#line 338
undef($memory_3);
#line 339
goto label_543;
#line 339
label_533:
#line 340
$memory_3 = c_rt_lib::ov_mk_none('error');
#line 340
$memory_4 = $memory_3;
#line 340
 if (c_rt_lib::get_hashcount($memory_0) > 1) {$memory_0 = {%{$memory_0}};}$memory_0->{'type'} = $memory_4;
#line 340
undef($memory_3);
#line 340
undef($memory_4);
#line 341
$memory_3 = $memory_1;
#line 341
 if (c_rt_lib::get_hashcount($memory_0) > 1) {$memory_0 = {%{$memory_0}};}$memory_0->{'next_token'} = $memory_3;
#line 341
undef($memory_3);
#line 342
goto label_543;
#line 342
label_543:
#line 342
undef($memory_2);
#line 342
undef($memory_1);
#line 342
$_[0] = $memory_0;return;
$_[0] = $memory_0;}
