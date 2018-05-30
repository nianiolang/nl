use c_rt_lib;
use ptd;
use nast;
sub reference_generator::fun_ref;
sub reference_generator::module;
sub reference_generator::refs;
sub reference_generator::deref_type;
sub reference_generator::ref_type;
sub reference_generator::generate;
sub reference_generator_priv::process_module;
sub reference_generator_priv::process_fun_def;
sub reference_generator_priv::add_ref;
sub reference_generator_priv::process_cmd;
sub reference_generator_priv::process_try;
sub reference_generator_priv::process_return;
sub reference_generator_priv::process_block;
sub reference_generator_priv::process_die;
sub reference_generator_priv::process_if;
sub reference_generator_priv::process_for;
sub reference_generator_priv::process_fora;
sub reference_generator_priv::process_forh;
sub reference_generator_priv::process_var_decl;
sub reference_generator_priv::process_type;
sub reference_generator_priv::process_rep;
sub reference_generator_priv::process_while;
sub reference_generator_priv::process_if_mod;
sub reference_generator_priv::process_match;
sub reference_generator_priv::process_value;
sub reference_generator_priv::process_bin_op;

return 1;

sub reference_generator::__fun_ref() {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;
#line 11
$memory_2 = {
	module => "reference_generator",
	name => "module",
};
#line 11
$memory_2 = c_rt_lib::ov_mk_arg('ref', $memory_2);
#line 12
$memory_3 = ptd::sim();
#line 12
$memory_1 = {module => $memory_2,name => $memory_3,};
#line 12
undef($memory_2);
#line 12
undef($memory_3);
#line 12
$memory_0 = ptd::rec($memory_1);
#line 12
undef($memory_1);
#line 12
return $memory_0;
#line 12
undef($memory_0);
#line 12
return;
}

my $_fun_ref;
sub reference_generator::fun_ref() {
	$_fun_ref = reference_generator::__fun_ref() unless defined $_fun_ref;
	return $_fun_ref;
}

sub reference_generator::__module() {
my $memory_0;
#line 17
$memory_0 = ptd::sim();
#line 17
return $memory_0;
#line 17
undef($memory_0);
#line 17
return;
}

my $_module;
sub reference_generator::module() {
	$_module = reference_generator::__module() unless defined $_module;
	return $_module;
}

sub reference_generator::__refs() {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;
#line 24
$memory_5 = {
	module => "reference_generator",
	name => "module",
};
#line 24
$memory_5 = c_rt_lib::ov_mk_arg('ref', $memory_5);
#line 25
$memory_6 = ptd::sim();
#line 26
$memory_7 = ptd::sim();
#line 27
$memory_8 = {
	module => "reference_generator",
	name => "ref_type",
};
#line 27
$memory_8 = c_rt_lib::ov_mk_arg('ref', $memory_8);
#line 27
$memory_4 = {module => $memory_5,line => $memory_6,position => $memory_7,type => $memory_8,};
#line 27
undef($memory_5);
#line 27
undef($memory_6);
#line 27
undef($memory_7);
#line 27
undef($memory_8);
#line 27
$memory_3 = ptd::rec($memory_4);
#line 27
undef($memory_4);
#line 30
$memory_6 = {
	module => "reference_generator",
	name => "deref_type",
};
#line 30
$memory_6 = c_rt_lib::ov_mk_arg('ref', $memory_6);
#line 31
$memory_7 = {
	module => "reference_generator",
	name => "deref_type",
};
#line 31
$memory_7 = c_rt_lib::ov_mk_arg('ref', $memory_7);
#line 31
$memory_5 = {create => $memory_6,delete => $memory_7,};
#line 31
undef($memory_6);
#line 31
undef($memory_7);
#line 31
$memory_4 = ptd::var($memory_5);
#line 31
undef($memory_5);
#line 31
$memory_2 = {ref => $memory_3,deref => $memory_4,};
#line 31
undef($memory_3);
#line 31
undef($memory_4);
#line 31
$memory_1 = ptd::var($memory_2);
#line 31
undef($memory_2);
#line 31
$memory_0 = ptd::arr($memory_1);
#line 31
undef($memory_1);
#line 31
return $memory_0;
#line 31
undef($memory_0);
#line 31
return;
}

my $_refs;
sub reference_generator::refs() {
	$_refs = reference_generator::__refs() unless defined $_refs;
	return $_refs;
}

sub reference_generator::__deref_type() {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;
#line 38
$memory_2 = ptd::sim();
#line 38
$memory_3 = ptd::sim();
#line 38
$memory_4 = ptd::sim();
#line 38
$memory_1 = {line => $memory_2,module => $memory_3,type_name => $memory_4,};
#line 38
undef($memory_2);
#line 38
undef($memory_3);
#line 38
undef($memory_4);
#line 38
$memory_0 = ptd::rec($memory_1);
#line 38
undef($memory_1);
#line 38
return $memory_0;
#line 38
undef($memory_0);
#line 38
return;
}

my $_deref_type;
sub reference_generator::deref_type() {
	$_deref_type = reference_generator::__deref_type() unless defined $_deref_type;
	return $_deref_type;
}

sub reference_generator::__ref_type() {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;
#line 43
$memory_2 = {
	module => "reference_generator",
	name => "module",
};
#line 43
$memory_2 = c_rt_lib::ov_mk_arg('ref', $memory_2);
#line 44
$memory_3 = {
	module => "reference_generator",
	name => "fun_ref",
};
#line 44
$memory_3 = c_rt_lib::ov_mk_arg('ref', $memory_3);
#line 45
$memory_4 = {
	module => "reference_generator",
	name => "fun_ref",
};
#line 45
$memory_4 = c_rt_lib::ov_mk_arg('ref', $memory_4);
#line 45
$memory_1 = {import => $memory_2,function_definition => $memory_3,function_reference => $memory_4,};
#line 45
undef($memory_2);
#line 45
undef($memory_3);
#line 45
undef($memory_4);
#line 45
$memory_0 = ptd::var($memory_1);
#line 45
undef($memory_1);
#line 45
return $memory_0;
#line 45
undef($memory_0);
#line 45
return;
}

my $_ref_type;
sub reference_generator::ref_type() {
	$_ref_type = reference_generator::__ref_type() unless defined $_ref_type;
	return $_ref_type;
}

sub reference_generator::generate($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;$memory_0 = $_[0];
#line 50
$memory_1 = [];
#line 51
$memory_4 = c_rt_lib::init_iter($memory_0);
#line 51
label_2:
#line 51
$memory_2 = c_rt_lib::is_end_hash($memory_4);
#line 51
if (c_rt_lib::check_true($memory_2)) {goto label_10;}
#line 51
$memory_2 = c_rt_lib::get_key_iter($memory_4);
#line 51
$memory_3 = c_rt_lib::hash_get_value($memory_0, $memory_2);
#line 52
reference_generator_priv::process_module($memory_1, $memory_3);
#line 53
$memory_4 = c_rt_lib::next_iter($memory_4);
#line 53
goto label_2;
#line 53
label_10:
#line 53
undef($memory_2);
#line 53
undef($memory_3);
#line 53
undef($memory_4);
#line 54
undef($memory_0);
#line 54
return $memory_1;
#line 54
undef($memory_1);
#line 54
undef($memory_0);
#line 54
return;
}

sub reference_generator_priv::process_module($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];
#line 59
$memory_2 = $memory_1->{'import'};
#line 59
$memory_4 = 0;
#line 59
$memory_5 = 1;
#line 59
$memory_6 = c_rt_lib::array_len($memory_2);
#line 59
label_4:
#line 59
$memory_7 = c_rt_lib::to_nl($memory_4 >= $memory_6);
#line 59
if (c_rt_lib::check_true($memory_7)) {goto label_23;}
#line 59
$memory_3 = $memory_2->[$memory_4];
#line 61
$memory_9 = $memory_1->{'name'};
#line 62
$memory_10 = $memory_3->{'line'};
#line 63
$memory_11 = 1;
#line 64
$memory_12 = $memory_3->{'name'};
#line 64
$memory_12 = c_rt_lib::ov_mk_arg('import', $memory_12);
#line 64
$memory_8 = {module => $memory_9,line => $memory_10,position => $memory_11,type => $memory_12,};
#line 64
undef($memory_9);
#line 64
undef($memory_10);
#line 64
undef($memory_11);
#line 64
undef($memory_12);
#line 64
$memory_8 = c_rt_lib::ov_mk_arg('ref', $memory_8);
#line 64
c_rt_lib::array_push($memory_0, $memory_8);
#line 64
undef($memory_8);
#line 66
$memory_4 = $memory_4 + $memory_5;
#line 66
goto label_4;
#line 66
label_23:
#line 66
undef($memory_2);
#line 66
undef($memory_3);
#line 66
undef($memory_4);
#line 66
undef($memory_5);
#line 66
undef($memory_6);
#line 66
undef($memory_7);
#line 68
$memory_2 = $memory_1->{'fun_def'};
#line 68
$memory_4 = 0;
#line 68
$memory_5 = 1;
#line 68
$memory_6 = c_rt_lib::array_len($memory_2);
#line 68
label_34:
#line 68
$memory_7 = c_rt_lib::to_nl($memory_4 >= $memory_6);
#line 68
if (c_rt_lib::check_true($memory_7)) {goto label_43;}
#line 68
$memory_3 = $memory_2->[$memory_4];
#line 69
$memory_8 = $memory_1->{'name'};
#line 69
reference_generator_priv::process_fun_def($memory_0, $memory_8, $memory_3);
#line 69
undef($memory_8);
#line 70
$memory_4 = $memory_4 + $memory_5;
#line 70
goto label_34;
#line 70
label_43:
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
undef($memory_1);
#line 70
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub reference_generator_priv::process_fun_def($$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];$memory_2 = $_[2];
#line 76
$memory_4 = $memory_2->{'line'};
#line 77
$memory_5 = 1;
#line 79
$memory_7 = $memory_2->{'access'};
#line 79
$memory_7 = c_rt_lib::ov_is($memory_7, 'pub');
#line 79
if (c_rt_lib::check_true($memory_7)) {goto label_7;}
#line 79
$memory_7 = "";
#line 79
goto label_9;
#line 79
label_7:
#line 79
$memory_7 = $memory_1;
#line 79
label_9:
#line 80
$memory_8 = $memory_2->{'name'};
#line 80
$memory_6 = {module => $memory_7,name => $memory_8,};
#line 80
undef($memory_7);
#line 80
undef($memory_8);
#line 80
$memory_6 = c_rt_lib::ov_mk_arg('function_definition', $memory_6);
#line 80
$memory_3 = {module => $memory_1,line => $memory_4,position => $memory_5,type => $memory_6,};
#line 80
undef($memory_4);
#line 80
undef($memory_5);
#line 80
undef($memory_6);
#line 80
$memory_3 = c_rt_lib::ov_mk_arg('ref', $memory_3);
#line 80
c_rt_lib::array_push($memory_0, $memory_3);
#line 80
undef($memory_3);
#line 84
$memory_3 = $memory_2->{'cmd'};
#line 84
reference_generator_priv::process_cmd($memory_0, $memory_1, $memory_3);
#line 84
undef($memory_3);
#line 85
$memory_3 = $memory_2->{'ret_type'};
#line 85
reference_generator_priv::process_type($memory_0, $memory_1, $memory_3);
#line 85
undef($memory_3);
#line 86
$memory_3 = $memory_2->{'args'};
#line 86
$memory_5 = 0;
#line 86
$memory_6 = 1;
#line 86
$memory_7 = c_rt_lib::array_len($memory_3);
#line 86
label_32:
#line 86
$memory_8 = c_rt_lib::to_nl($memory_5 >= $memory_7);
#line 86
if (c_rt_lib::check_true($memory_8)) {goto label_41;}
#line 86
$memory_4 = $memory_3->[$memory_5];
#line 87
$memory_9 = $memory_4->{'type'};
#line 87
reference_generator_priv::process_type($memory_0, $memory_1, $memory_9);
#line 87
undef($memory_9);
#line 88
$memory_5 = $memory_5 + $memory_6;
#line 88
goto label_32;
#line 88
label_41:
#line 88
undef($memory_3);
#line 88
undef($memory_4);
#line 88
undef($memory_5);
#line 88
undef($memory_6);
#line 88
undef($memory_7);
#line 88
undef($memory_8);
#line 88
undef($memory_1);
#line 88
undef($memory_2);
#line 88
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub reference_generator_priv::add_ref($$$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];$memory_2 = $_[2];$memory_3 = $_[3];
#line 94
$memory_5 = $memory_2->{'line'};
#line 95
$memory_6 = $memory_2->{'position'};
#line 95
$memory_4 = {module => $memory_1,line => $memory_5,position => $memory_6,type => $memory_3,};
#line 95
undef($memory_5);
#line 95
undef($memory_6);
#line 95
$memory_4 = c_rt_lib::ov_mk_arg('ref', $memory_4);
#line 95
c_rt_lib::array_push($memory_0, $memory_4);
#line 95
undef($memory_4);
#line 95
undef($memory_1);
#line 95
undef($memory_2);
#line 95
undef($memory_3);
#line 95
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub reference_generator_priv::process_cmd($$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];$memory_2 = $_[2];
#line 101
$memory_3 = $memory_2->{'cmd'};
#line 101
$memory_4 = c_rt_lib::ov_is($memory_3, 'if');
#line 101
if (c_rt_lib::check_true($memory_4)) {goto label_44;}
#line 103
$memory_4 = c_rt_lib::ov_is($memory_3, 'for');
#line 103
if (c_rt_lib::check_true($memory_4)) {goto label_49;}
#line 105
$memory_4 = c_rt_lib::ov_is($memory_3, 'fora');
#line 105
if (c_rt_lib::check_true($memory_4)) {goto label_54;}
#line 107
$memory_4 = c_rt_lib::ov_is($memory_3, 'forh');
#line 107
if (c_rt_lib::check_true($memory_4)) {goto label_59;}
#line 109
$memory_4 = c_rt_lib::ov_is($memory_3, 'loop');
#line 109
if (c_rt_lib::check_true($memory_4)) {goto label_64;}
#line 111
$memory_4 = c_rt_lib::ov_is($memory_3, 'rep');
#line 111
if (c_rt_lib::check_true($memory_4)) {goto label_69;}
#line 113
$memory_4 = c_rt_lib::ov_is($memory_3, 'while');
#line 113
if (c_rt_lib::check_true($memory_4)) {goto label_74;}
#line 115
$memory_4 = c_rt_lib::ov_is($memory_3, 'if_mod');
#line 115
if (c_rt_lib::check_true($memory_4)) {goto label_79;}
#line 117
$memory_4 = c_rt_lib::ov_is($memory_3, 'unless_mod');
#line 117
if (c_rt_lib::check_true($memory_4)) {goto label_84;}
#line 119
$memory_4 = c_rt_lib::ov_is($memory_3, 'break');
#line 119
if (c_rt_lib::check_true($memory_4)) {goto label_89;}
#line 120
$memory_4 = c_rt_lib::ov_is($memory_3, 'continue');
#line 120
if (c_rt_lib::check_true($memory_4)) {goto label_91;}
#line 121
$memory_4 = c_rt_lib::ov_is($memory_3, 'match');
#line 121
if (c_rt_lib::check_true($memory_4)) {goto label_93;}
#line 123
$memory_4 = c_rt_lib::ov_is($memory_3, 'value');
#line 123
if (c_rt_lib::check_true($memory_4)) {goto label_98;}
#line 125
$memory_4 = c_rt_lib::ov_is($memory_3, 'try');
#line 125
if (c_rt_lib::check_true($memory_4)) {goto label_103;}
#line 127
$memory_4 = c_rt_lib::ov_is($memory_3, 'ensure');
#line 127
if (c_rt_lib::check_true($memory_4)) {goto label_108;}
#line 129
$memory_4 = c_rt_lib::ov_is($memory_3, 'var_decl');
#line 129
if (c_rt_lib::check_true($memory_4)) {goto label_113;}
#line 131
$memory_4 = c_rt_lib::ov_is($memory_3, 'return');
#line 131
if (c_rt_lib::check_true($memory_4)) {goto label_118;}
#line 133
$memory_4 = c_rt_lib::ov_is($memory_3, 'block');
#line 133
if (c_rt_lib::check_true($memory_4)) {goto label_123;}
#line 135
$memory_4 = c_rt_lib::ov_is($memory_3, 'die');
#line 135
if (c_rt_lib::check_true($memory_4)) {goto label_128;}
#line 137
$memory_4 = c_rt_lib::ov_is($memory_3, 'nop');
#line 137
if (c_rt_lib::check_true($memory_4)) {goto label_133;}
#line 137
$memory_4 = "NOMATCHALERT";
#line 137
$memory_4 = [$memory_4,$memory_3];
#line 137
die(dfile::ssave($memory_4));
#line 101
label_44:
#line 101
$memory_5 = c_rt_lib::ov_as($memory_3, 'if');
#line 102
reference_generator_priv::process_if($memory_0, $memory_1, $memory_5);
#line 102
undef($memory_5);
#line 103
goto label_135;
#line 103
label_49:
#line 103
$memory_5 = c_rt_lib::ov_as($memory_3, 'for');
#line 104
reference_generator_priv::process_for($memory_0, $memory_1, $memory_5);
#line 104
undef($memory_5);
#line 105
goto label_135;
#line 105
label_54:
#line 105
$memory_5 = c_rt_lib::ov_as($memory_3, 'fora');
#line 106
reference_generator_priv::process_fora($memory_0, $memory_1, $memory_5);
#line 106
undef($memory_5);
#line 107
goto label_135;
#line 107
label_59:
#line 107
$memory_5 = c_rt_lib::ov_as($memory_3, 'forh');
#line 108
reference_generator_priv::process_forh($memory_0, $memory_1, $memory_5);
#line 108
undef($memory_5);
#line 109
goto label_135;
#line 109
label_64:
#line 109
$memory_5 = c_rt_lib::ov_as($memory_3, 'loop');
#line 110
reference_generator_priv::process_cmd($memory_0, $memory_1, $memory_5);
#line 110
undef($memory_5);
#line 111
goto label_135;
#line 111
label_69:
#line 111
$memory_5 = c_rt_lib::ov_as($memory_3, 'rep');
#line 112
reference_generator_priv::process_rep($memory_0, $memory_1, $memory_5);
#line 112
undef($memory_5);
#line 113
goto label_135;
#line 113
label_74:
#line 113
$memory_5 = c_rt_lib::ov_as($memory_3, 'while');
#line 114
reference_generator_priv::process_while($memory_0, $memory_1, $memory_5);
#line 114
undef($memory_5);
#line 115
goto label_135;
#line 115
label_79:
#line 115
$memory_5 = c_rt_lib::ov_as($memory_3, 'if_mod');
#line 116
reference_generator_priv::process_if_mod($memory_0, $memory_1, $memory_5);
#line 116
undef($memory_5);
#line 117
goto label_135;
#line 117
label_84:
#line 117
$memory_5 = c_rt_lib::ov_as($memory_3, 'unless_mod');
#line 118
reference_generator_priv::process_if_mod($memory_0, $memory_1, $memory_5);
#line 118
undef($memory_5);
#line 119
goto label_135;
#line 119
label_89:
#line 120
goto label_135;
#line 120
label_91:
#line 121
goto label_135;
#line 121
label_93:
#line 121
$memory_5 = c_rt_lib::ov_as($memory_3, 'match');
#line 122
reference_generator_priv::process_match($memory_0, $memory_1, $memory_5);
#line 122
undef($memory_5);
#line 123
goto label_135;
#line 123
label_98:
#line 123
$memory_5 = c_rt_lib::ov_as($memory_3, 'value');
#line 124
reference_generator_priv::process_value($memory_0, $memory_1, $memory_5);
#line 124
undef($memory_5);
#line 125
goto label_135;
#line 125
label_103:
#line 125
$memory_5 = c_rt_lib::ov_as($memory_3, 'try');
#line 126
reference_generator_priv::process_try($memory_0, $memory_1, $memory_5);
#line 126
undef($memory_5);
#line 127
goto label_135;
#line 127
label_108:
#line 127
$memory_5 = c_rt_lib::ov_as($memory_3, 'ensure');
#line 128
reference_generator_priv::process_try($memory_0, $memory_1, $memory_5);
#line 128
undef($memory_5);
#line 129
goto label_135;
#line 129
label_113:
#line 129
$memory_5 = c_rt_lib::ov_as($memory_3, 'var_decl');
#line 130
reference_generator_priv::process_var_decl($memory_0, $memory_1, $memory_5);
#line 130
undef($memory_5);
#line 131
goto label_135;
#line 131
label_118:
#line 131
$memory_5 = c_rt_lib::ov_as($memory_3, 'return');
#line 132
reference_generator_priv::process_return($memory_0, $memory_1, $memory_5);
#line 132
undef($memory_5);
#line 133
goto label_135;
#line 133
label_123:
#line 133
$memory_5 = c_rt_lib::ov_as($memory_3, 'block');
#line 134
reference_generator_priv::process_block($memory_0, $memory_1, $memory_5);
#line 134
undef($memory_5);
#line 135
goto label_135;
#line 135
label_128:
#line 135
$memory_5 = c_rt_lib::ov_as($memory_3, 'die');
#line 136
reference_generator_priv::process_die($memory_0, $memory_1, $memory_5);
#line 136
undef($memory_5);
#line 137
goto label_135;
#line 137
label_133:
#line 138
goto label_135;
#line 138
label_135:
#line 138
undef($memory_3);
#line 138
undef($memory_4);
#line 138
undef($memory_1);
#line 138
undef($memory_2);
#line 138
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub reference_generator_priv::process_try($$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];$memory_2 = $_[2];
#line 142
$memory_3 = c_rt_lib::ov_is($memory_2, 'lval');
#line 142
if (c_rt_lib::check_true($memory_3)) {goto label_9;}
#line 144
$memory_3 = c_rt_lib::ov_is($memory_2, 'decl');
#line 144
if (c_rt_lib::check_true($memory_3)) {goto label_14;}
#line 146
$memory_3 = c_rt_lib::ov_is($memory_2, 'expr');
#line 146
if (c_rt_lib::check_true($memory_3)) {goto label_19;}
#line 146
$memory_3 = "NOMATCHALERT";
#line 146
$memory_3 = [$memory_3,$memory_2];
#line 146
die(dfile::ssave($memory_3));
#line 142
label_9:
#line 142
$memory_4 = c_rt_lib::ov_as($memory_2, 'lval');
#line 143
reference_generator_priv::process_bin_op($memory_0, $memory_1, $memory_4);
#line 143
undef($memory_4);
#line 144
goto label_24;
#line 144
label_14:
#line 144
$memory_4 = c_rt_lib::ov_as($memory_2, 'decl');
#line 145
reference_generator_priv::process_var_decl($memory_0, $memory_1, $memory_4);
#line 145
undef($memory_4);
#line 146
goto label_24;
#line 146
label_19:
#line 146
$memory_4 = c_rt_lib::ov_as($memory_2, 'expr');
#line 147
reference_generator_priv::process_value($memory_0, $memory_1, $memory_4);
#line 147
undef($memory_4);
#line 148
goto label_24;
#line 148
label_24:
#line 148
undef($memory_3);
#line 148
undef($memory_1);
#line 148
undef($memory_2);
#line 148
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub reference_generator_priv::process_return($$$) {
my $memory_0;my $memory_1;my $memory_2;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];$memory_2 = $_[2];
#line 152
reference_generator_priv::process_value($memory_0, $memory_1, $memory_2);
#line 152
undef($memory_1);
#line 152
undef($memory_2);
#line 152
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub reference_generator_priv::process_block($$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];$memory_2 = $_[2];
#line 156
$memory_4 = 0;
#line 156
$memory_5 = 1;
#line 156
$memory_6 = c_rt_lib::array_len($memory_2);
#line 156
label_3:
#line 156
$memory_7 = c_rt_lib::to_nl($memory_4 >= $memory_6);
#line 156
if (c_rt_lib::check_true($memory_7)) {goto label_10;}
#line 156
$memory_3 = $memory_2->[$memory_4];
#line 157
reference_generator_priv::process_cmd($memory_0, $memory_1, $memory_3);
#line 158
$memory_4 = $memory_4 + $memory_5;
#line 158
goto label_3;
#line 158
label_10:
#line 158
undef($memory_3);
#line 158
undef($memory_4);
#line 158
undef($memory_5);
#line 158
undef($memory_6);
#line 158
undef($memory_7);
#line 158
undef($memory_1);
#line 158
undef($memory_2);
#line 158
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub reference_generator_priv::process_die($$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];$memory_2 = $_[2];
#line 162
$memory_4 = 0;
#line 162
$memory_5 = 1;
#line 162
$memory_6 = c_rt_lib::array_len($memory_2);
#line 162
label_3:
#line 162
$memory_7 = c_rt_lib::to_nl($memory_4 >= $memory_6);
#line 162
if (c_rt_lib::check_true($memory_7)) {goto label_10;}
#line 162
$memory_3 = $memory_2->[$memory_4];
#line 163
reference_generator_priv::process_value($memory_0, $memory_1, $memory_3);
#line 164
$memory_4 = $memory_4 + $memory_5;
#line 164
goto label_3;
#line 164
label_10:
#line 164
undef($memory_3);
#line 164
undef($memory_4);
#line 164
undef($memory_5);
#line 164
undef($memory_6);
#line 164
undef($memory_7);
#line 164
undef($memory_1);
#line 164
undef($memory_2);
#line 164
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub reference_generator_priv::process_if($$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];$memory_2 = $_[2];
#line 168
$memory_3 = $memory_2->{'cond'};
#line 168
reference_generator_priv::process_value($memory_0, $memory_1, $memory_3);
#line 168
undef($memory_3);
#line 169
$memory_3 = $memory_2->{'if'};
#line 169
reference_generator_priv::process_cmd($memory_0, $memory_1, $memory_3);
#line 169
undef($memory_3);
#line 170
$memory_3 = $memory_2->{'elsif'};
#line 170
$memory_5 = 0;
#line 170
$memory_6 = 1;
#line 170
$memory_7 = c_rt_lib::array_len($memory_3);
#line 170
label_10:
#line 170
$memory_8 = c_rt_lib::to_nl($memory_5 >= $memory_7);
#line 170
if (c_rt_lib::check_true($memory_8)) {goto label_22;}
#line 170
$memory_4 = $memory_3->[$memory_5];
#line 171
$memory_9 = $memory_4->{'cond'};
#line 171
reference_generator_priv::process_value($memory_0, $memory_1, $memory_9);
#line 171
undef($memory_9);
#line 172
$memory_9 = $memory_4->{'cmd'};
#line 172
reference_generator_priv::process_cmd($memory_0, $memory_1, $memory_9);
#line 172
undef($memory_9);
#line 173
$memory_5 = $memory_5 + $memory_6;
#line 173
goto label_10;
#line 173
label_22:
#line 173
undef($memory_3);
#line 173
undef($memory_4);
#line 173
undef($memory_5);
#line 173
undef($memory_6);
#line 173
undef($memory_7);
#line 173
undef($memory_8);
#line 174
$memory_3 = $memory_2->{'else'};
#line 174
reference_generator_priv::process_cmd($memory_0, $memory_1, $memory_3);
#line 174
undef($memory_3);
#line 174
undef($memory_1);
#line 174
undef($memory_2);
#line 174
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub reference_generator_priv::process_for($$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];$memory_2 = $_[2];
#line 178
$memory_3 = $memory_2->{'start'};
#line 178
$memory_4 = c_rt_lib::ov_is($memory_3, 'var_decl');
#line 178
if (c_rt_lib::check_true($memory_4)) {goto label_8;}
#line 180
$memory_4 = c_rt_lib::ov_is($memory_3, 'value');
#line 180
if (c_rt_lib::check_true($memory_4)) {goto label_13;}
#line 180
$memory_4 = "NOMATCHALERT";
#line 180
$memory_4 = [$memory_4,$memory_3];
#line 180
die(dfile::ssave($memory_4));
#line 178
label_8:
#line 178
$memory_5 = c_rt_lib::ov_as($memory_3, 'var_decl');
#line 179
reference_generator_priv::process_var_decl($memory_0, $memory_1, $memory_5);
#line 179
undef($memory_5);
#line 180
goto label_18;
#line 180
label_13:
#line 180
$memory_5 = c_rt_lib::ov_as($memory_3, 'value');
#line 181
reference_generator_priv::process_value($memory_0, $memory_1, $memory_5);
#line 181
undef($memory_5);
#line 182
goto label_18;
#line 182
label_18:
#line 182
undef($memory_3);
#line 182
undef($memory_4);
#line 184
$memory_3 = $memory_2->{'iter'};
#line 184
reference_generator_priv::process_value($memory_0, $memory_1, $memory_3);
#line 184
undef($memory_3);
#line 185
$memory_3 = $memory_2->{'cond'};
#line 185
reference_generator_priv::process_value($memory_0, $memory_1, $memory_3);
#line 185
undef($memory_3);
#line 186
$memory_3 = $memory_2->{'cmd'};
#line 186
reference_generator_priv::process_cmd($memory_0, $memory_1, $memory_3);
#line 186
undef($memory_3);
#line 186
undef($memory_1);
#line 186
undef($memory_2);
#line 186
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub reference_generator_priv::process_fora($$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];$memory_2 = $_[2];
#line 190
$memory_3 = $memory_2->{'iter'};
#line 190
reference_generator_priv::process_var_decl($memory_0, $memory_1, $memory_3);
#line 190
undef($memory_3);
#line 191
$memory_3 = $memory_2->{'cmd'};
#line 191
reference_generator_priv::process_cmd($memory_0, $memory_1, $memory_3);
#line 191
undef($memory_3);
#line 192
$memory_3 = $memory_2->{'array'};
#line 192
reference_generator_priv::process_value($memory_0, $memory_1, $memory_3);
#line 192
undef($memory_3);
#line 192
undef($memory_1);
#line 192
undef($memory_2);
#line 192
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub reference_generator_priv::process_forh($$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];$memory_2 = $_[2];
#line 196
$memory_3 = $memory_2->{'key'};
#line 196
reference_generator_priv::process_var_decl($memory_0, $memory_1, $memory_3);
#line 196
undef($memory_3);
#line 197
$memory_3 = $memory_2->{'val'};
#line 197
reference_generator_priv::process_var_decl($memory_0, $memory_1, $memory_3);
#line 197
undef($memory_3);
#line 198
$memory_3 = $memory_2->{'hash'};
#line 198
reference_generator_priv::process_value($memory_0, $memory_1, $memory_3);
#line 198
undef($memory_3);
#line 199
$memory_3 = $memory_2->{'cmd'};
#line 199
reference_generator_priv::process_cmd($memory_0, $memory_1, $memory_3);
#line 199
undef($memory_3);
#line 199
undef($memory_1);
#line 199
undef($memory_2);
#line 199
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub reference_generator_priv::process_var_decl($$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];$memory_2 = $_[2];
#line 203
$memory_3 = $memory_2->{'value'};
#line 203
$memory_4 = c_rt_lib::ov_is($memory_3, 'value');
#line 203
if (c_rt_lib::check_true($memory_4)) {goto label_8;}
#line 205
$memory_4 = c_rt_lib::ov_is($memory_3, 'none');
#line 205
if (c_rt_lib::check_true($memory_4)) {goto label_13;}
#line 205
$memory_4 = "NOMATCHALERT";
#line 205
$memory_4 = [$memory_4,$memory_3];
#line 205
die(dfile::ssave($memory_4));
#line 203
label_8:
#line 203
$memory_5 = c_rt_lib::ov_as($memory_3, 'value');
#line 204
reference_generator_priv::process_value($memory_0, $memory_1, $memory_5);
#line 204
undef($memory_5);
#line 205
goto label_15;
#line 205
label_13:
#line 206
goto label_15;
#line 206
label_15:
#line 206
undef($memory_3);
#line 206
undef($memory_4);
#line 207
$memory_3 = $memory_2->{'type'};
#line 207
reference_generator_priv::process_type($memory_0, $memory_1, $memory_3);
#line 207
undef($memory_3);
#line 207
undef($memory_1);
#line 207
undef($memory_2);
#line 207
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub reference_generator_priv::process_type($$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];$memory_2 = $_[2];
#line 211
$memory_3 = c_rt_lib::ov_is($memory_2, 'type');
#line 211
if (c_rt_lib::check_true($memory_3)) {goto label_7;}
#line 213
$memory_3 = c_rt_lib::ov_is($memory_2, 'none');
#line 213
if (c_rt_lib::check_true($memory_3)) {goto label_12;}
#line 213
$memory_3 = "NOMATCHALERT";
#line 213
$memory_3 = [$memory_3,$memory_2];
#line 213
die(dfile::ssave($memory_3));
#line 211
label_7:
#line 211
$memory_4 = c_rt_lib::ov_as($memory_2, 'type');
#line 212
reference_generator_priv::process_value($memory_0, $memory_1, $memory_4);
#line 212
undef($memory_4);
#line 213
goto label_14;
#line 213
label_12:
#line 214
goto label_14;
#line 214
label_14:
#line 214
undef($memory_3);
#line 214
undef($memory_1);
#line 214
undef($memory_2);
#line 214
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub reference_generator_priv::process_rep($$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];$memory_2 = $_[2];
#line 219
$memory_3 = $memory_2->{'iter'};
#line 219
reference_generator_priv::process_var_decl($memory_0, $memory_1, $memory_3);
#line 219
undef($memory_3);
#line 220
$memory_3 = $memory_2->{'cmd'};
#line 220
reference_generator_priv::process_cmd($memory_0, $memory_1, $memory_3);
#line 220
undef($memory_3);
#line 221
$memory_3 = $memory_2->{'count'};
#line 221
reference_generator_priv::process_value($memory_0, $memory_1, $memory_3);
#line 221
undef($memory_3);
#line 221
undef($memory_1);
#line 221
undef($memory_2);
#line 221
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub reference_generator_priv::process_while($$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];$memory_2 = $_[2];
#line 225
$memory_3 = $memory_2->{'cmd'};
#line 225
reference_generator_priv::process_cmd($memory_0, $memory_1, $memory_3);
#line 225
undef($memory_3);
#line 226
$memory_3 = $memory_2->{'cond'};
#line 226
reference_generator_priv::process_value($memory_0, $memory_1, $memory_3);
#line 226
undef($memory_3);
#line 226
undef($memory_1);
#line 226
undef($memory_2);
#line 226
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub reference_generator_priv::process_if_mod($$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];$memory_2 = $_[2];
#line 230
$memory_3 = $memory_2->{'cmd'};
#line 230
reference_generator_priv::process_cmd($memory_0, $memory_1, $memory_3);
#line 230
undef($memory_3);
#line 231
$memory_3 = $memory_2->{'cond'};
#line 231
reference_generator_priv::process_value($memory_0, $memory_1, $memory_3);
#line 231
undef($memory_3);
#line 231
undef($memory_1);
#line 231
undef($memory_2);
#line 231
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub reference_generator_priv::process_match($$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];$memory_2 = $_[2];
#line 235
$memory_3 = $memory_2->{'val'};
#line 235
reference_generator_priv::process_value($memory_0, $memory_1, $memory_3);
#line 235
undef($memory_3);
#line 236
$memory_3 = $memory_2->{'branch_list'};
#line 236
$memory_5 = 0;
#line 236
$memory_6 = 1;
#line 236
$memory_7 = c_rt_lib::array_len($memory_3);
#line 236
label_7:
#line 236
$memory_8 = c_rt_lib::to_nl($memory_5 >= $memory_7);
#line 236
if (c_rt_lib::check_true($memory_8)) {goto label_35;}
#line 236
$memory_4 = $memory_3->[$memory_5];
#line 237
$memory_9 = $memory_4->{'variant'};
#line 237
$memory_9 = $memory_9->{'value'};
#line 237
$memory_10 = c_rt_lib::ov_is($memory_9, 'value');
#line 237
if (c_rt_lib::check_true($memory_10)) {goto label_20;}
#line 239
$memory_10 = c_rt_lib::ov_is($memory_9, 'none');
#line 239
if (c_rt_lib::check_true($memory_10)) {goto label_25;}
#line 239
$memory_10 = "NOMATCHALERT";
#line 239
$memory_10 = [$memory_10,$memory_9];
#line 239
die(dfile::ssave($memory_10));
#line 237
label_20:
#line 237
$memory_11 = c_rt_lib::ov_as($memory_9, 'value');
#line 238
reference_generator_priv::process_var_decl($memory_0, $memory_1, $memory_11);
#line 238
undef($memory_11);
#line 239
goto label_27;
#line 239
label_25:
#line 240
goto label_27;
#line 240
label_27:
#line 240
undef($memory_9);
#line 240
undef($memory_10);
#line 241
$memory_9 = $memory_4->{'cmd'};
#line 241
reference_generator_priv::process_cmd($memory_0, $memory_1, $memory_9);
#line 241
undef($memory_9);
#line 242
$memory_5 = $memory_5 + $memory_6;
#line 242
goto label_7;
#line 242
label_35:
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
undef($memory_8);
#line 242
undef($memory_1);
#line 242
undef($memory_2);
#line 242
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub reference_generator_priv::process_value($$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];$memory_2 = $_[2];
#line 246
$memory_3 = $memory_2->{'value'};
#line 246
$memory_4 = c_rt_lib::ov_is($memory_3, 'ternary_op');
#line 246
if (c_rt_lib::check_true($memory_4)) {goto label_38;}
#line 247
$memory_4 = c_rt_lib::ov_is($memory_3, 'hash_key');
#line 247
if (c_rt_lib::check_true($memory_4)) {goto label_42;}
#line 248
$memory_4 = c_rt_lib::ov_is($memory_3, 'nop');
#line 248
if (c_rt_lib::check_true($memory_4)) {goto label_46;}
#line 249
$memory_4 = c_rt_lib::ov_is($memory_3, 'parenthesis');
#line 249
if (c_rt_lib::check_true($memory_4)) {goto label_48;}
#line 251
$memory_4 = c_rt_lib::ov_is($memory_3, 'variant');
#line 251
if (c_rt_lib::check_true($memory_4)) {goto label_53;}
#line 253
$memory_4 = c_rt_lib::ov_is($memory_3, 'const');
#line 253
if (c_rt_lib::check_true($memory_4)) {goto label_60;}
#line 254
$memory_4 = c_rt_lib::ov_is($memory_3, 'string');
#line 254
if (c_rt_lib::check_true($memory_4)) {goto label_64;}
#line 255
$memory_4 = c_rt_lib::ov_is($memory_3, 'arr_decl');
#line 255
if (c_rt_lib::check_true($memory_4)) {goto label_68;}
#line 259
$memory_4 = c_rt_lib::ov_is($memory_3, 'hash_decl');
#line 259
if (c_rt_lib::check_true($memory_4)) {goto label_88;}
#line 263
$memory_4 = c_rt_lib::ov_is($memory_3, 'var');
#line 263
if (c_rt_lib::check_true($memory_4)) {goto label_110;}
#line 264
$memory_4 = c_rt_lib::ov_is($memory_3, 'bin_op');
#line 264
if (c_rt_lib::check_true($memory_4)) {goto label_114;}
#line 266
$memory_4 = c_rt_lib::ov_is($memory_3, 'unary_op');
#line 266
if (c_rt_lib::check_true($memory_4)) {goto label_119;}
#line 268
$memory_4 = c_rt_lib::ov_is($memory_3, 'fun_label');
#line 268
if (c_rt_lib::check_true($memory_4)) {goto label_126;}
#line 273
$memory_4 = c_rt_lib::ov_is($memory_3, 'fun_val');
#line 273
if (c_rt_lib::check_true($memory_4)) {goto label_141;}
#line 281
$memory_4 = c_rt_lib::ov_is($memory_3, 'post_inc');
#line 281
if (c_rt_lib::check_true($memory_4)) {goto label_176;}
#line 283
$memory_4 = c_rt_lib::ov_is($memory_3, 'post_dec');
#line 283
if (c_rt_lib::check_true($memory_4)) {goto label_181;}
#line 285
$memory_4 = c_rt_lib::ov_is($memory_3, 'var_op');
#line 285
if (c_rt_lib::check_true($memory_4)) {goto label_186;}
#line 285
$memory_4 = "NOMATCHALERT";
#line 285
$memory_4 = [$memory_4,$memory_3];
#line 285
die(dfile::ssave($memory_4));
#line 246
label_38:
#line 246
$memory_5 = c_rt_lib::ov_as($memory_3, 'ternary_op');
#line 246
undef($memory_5);
#line 247
goto label_193;
#line 247
label_42:
#line 247
$memory_5 = c_rt_lib::ov_as($memory_3, 'hash_key');
#line 247
undef($memory_5);
#line 248
goto label_193;
#line 248
label_46:
#line 249
goto label_193;
#line 249
label_48:
#line 249
$memory_5 = c_rt_lib::ov_as($memory_3, 'parenthesis');
#line 250
reference_generator_priv::process_value($memory_0, $memory_1, $memory_5);
#line 250
undef($memory_5);
#line 251
goto label_193;
#line 251
label_53:
#line 251
$memory_5 = c_rt_lib::ov_as($memory_3, 'variant');
#line 252
$memory_6 = $memory_5->{'var'};
#line 252
reference_generator_priv::process_value($memory_0, $memory_1, $memory_6);
#line 252
undef($memory_6);
#line 252
undef($memory_5);
#line 253
goto label_193;
#line 253
label_60:
#line 253
$memory_5 = c_rt_lib::ov_as($memory_3, 'const');
#line 253
undef($memory_5);
#line 254
goto label_193;
#line 254
label_64:
#line 254
$memory_5 = c_rt_lib::ov_as($memory_3, 'string');
#line 254
undef($memory_5);
#line 255
goto label_193;
#line 255
label_68:
#line 255
$memory_5 = c_rt_lib::ov_as($memory_3, 'arr_decl');
#line 256
$memory_7 = 0;
#line 256
$memory_8 = 1;
#line 256
$memory_9 = c_rt_lib::array_len($memory_5);
#line 256
label_73:
#line 256
$memory_10 = c_rt_lib::to_nl($memory_7 >= $memory_9);
#line 256
if (c_rt_lib::check_true($memory_10)) {goto label_80;}
#line 256
$memory_6 = $memory_5->[$memory_7];
#line 257
reference_generator_priv::process_value($memory_0, $memory_1, $memory_6);
#line 258
$memory_7 = $memory_7 + $memory_8;
#line 258
goto label_73;
#line 258
label_80:
#line 258
undef($memory_6);
#line 258
undef($memory_7);
#line 258
undef($memory_8);
#line 258
undef($memory_9);
#line 258
undef($memory_10);
#line 258
undef($memory_5);
#line 259
goto label_193;
#line 259
label_88:
#line 259
$memory_5 = c_rt_lib::ov_as($memory_3, 'hash_decl');
#line 260
$memory_7 = 0;
#line 260
$memory_8 = 1;
#line 260
$memory_9 = c_rt_lib::array_len($memory_5);
#line 260
label_93:
#line 260
$memory_10 = c_rt_lib::to_nl($memory_7 >= $memory_9);
#line 260
if (c_rt_lib::check_true($memory_10)) {goto label_102;}
#line 260
$memory_6 = $memory_5->[$memory_7];
#line 261
$memory_11 = $memory_6->{'val'};
#line 261
reference_generator_priv::process_value($memory_0, $memory_1, $memory_11);
#line 261
undef($memory_11);
#line 262
$memory_7 = $memory_7 + $memory_8;
#line 262
goto label_93;
#line 262
label_102:
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
undef($memory_5);
#line 263
goto label_193;
#line 263
label_110:
#line 263
$memory_5 = c_rt_lib::ov_as($memory_3, 'var');
#line 263
undef($memory_5);
#line 264
goto label_193;
#line 264
label_114:
#line 264
$memory_5 = c_rt_lib::ov_as($memory_3, 'bin_op');
#line 265
reference_generator_priv::process_bin_op($memory_0, $memory_1, $memory_5);
#line 265
undef($memory_5);
#line 266
goto label_193;
#line 266
label_119:
#line 266
$memory_5 = c_rt_lib::ov_as($memory_3, 'unary_op');
#line 267
$memory_6 = $memory_5->{'val'};
#line 267
reference_generator_priv::process_value($memory_0, $memory_1, $memory_6);
#line 267
undef($memory_6);
#line 267
undef($memory_5);
#line 268
goto label_193;
#line 268
label_126:
#line 268
$memory_5 = c_rt_lib::ov_as($memory_3, 'fun_label');
#line 269
$memory_6 = $memory_2->{'debug'};
#line 269
$memory_6 = $memory_6->{'begin'};
#line 270
$memory_8 = $memory_5->{'module'};
#line 271
$memory_9 = $memory_5->{'name'};
#line 271
$memory_7 = {module => $memory_8,name => $memory_9,};
#line 271
undef($memory_8);
#line 271
undef($memory_9);
#line 271
$memory_7 = c_rt_lib::ov_mk_arg('function_reference', $memory_7);
#line 271
reference_generator_priv::add_ref($memory_0, $memory_1, $memory_6, $memory_7);
#line 271
undef($memory_7);
#line 271
undef($memory_6);
#line 271
undef($memory_5);
#line 273
goto label_193;
#line 273
label_141:
#line 273
$memory_5 = c_rt_lib::ov_as($memory_3, 'fun_val');
#line 274
$memory_6 = $memory_2->{'debug'};
#line 274
$memory_6 = $memory_6->{'begin'};
#line 275
$memory_8 = $memory_5->{'module'};
#line 276
$memory_9 = $memory_5->{'name'};
#line 276
$memory_7 = {module => $memory_8,name => $memory_9,};
#line 276
undef($memory_8);
#line 276
undef($memory_9);
#line 276
$memory_7 = c_rt_lib::ov_mk_arg('function_reference', $memory_7);
#line 276
reference_generator_priv::add_ref($memory_0, $memory_1, $memory_6, $memory_7);
#line 276
undef($memory_7);
#line 276
undef($memory_6);
#line 278
$memory_6 = $memory_5->{'args'};
#line 278
$memory_8 = 0;
#line 278
$memory_9 = 1;
#line 278
$memory_10 = c_rt_lib::array_len($memory_6);
#line 278
label_158:
#line 278
$memory_11 = c_rt_lib::to_nl($memory_8 >= $memory_10);
#line 278
if (c_rt_lib::check_true($memory_11)) {goto label_167;}
#line 278
$memory_7 = $memory_6->[$memory_8];
#line 279
$memory_12 = $memory_7->{'val'};
#line 279
reference_generator_priv::process_value($memory_0, $memory_1, $memory_12);
#line 279
undef($memory_12);
#line 280
$memory_8 = $memory_8 + $memory_9;
#line 280
goto label_158;
#line 280
label_167:
#line 280
undef($memory_6);
#line 280
undef($memory_7);
#line 280
undef($memory_8);
#line 280
undef($memory_9);
#line 280
undef($memory_10);
#line 280
undef($memory_11);
#line 280
undef($memory_5);
#line 281
goto label_193;
#line 281
label_176:
#line 281
$memory_5 = c_rt_lib::ov_as($memory_3, 'post_inc');
#line 282
reference_generator_priv::process_value($memory_0, $memory_1, $memory_5);
#line 282
undef($memory_5);
#line 283
goto label_193;
#line 283
label_181:
#line 283
$memory_5 = c_rt_lib::ov_as($memory_3, 'post_dec');
#line 284
reference_generator_priv::process_value($memory_0, $memory_1, $memory_5);
#line 284
undef($memory_5);
#line 285
goto label_193;
#line 285
label_186:
#line 285
$memory_5 = c_rt_lib::ov_as($memory_3, 'var_op');
#line 286
$memory_6 = $memory_5->{'left'};
#line 286
reference_generator_priv::process_value($memory_0, $memory_1, $memory_6);
#line 286
undef($memory_6);
#line 286
undef($memory_5);
#line 287
goto label_193;
#line 287
label_193:
#line 287
undef($memory_3);
#line 287
undef($memory_4);
#line 287
undef($memory_1);
#line 287
undef($memory_2);
#line 287
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub reference_generator_priv::process_bin_op($$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];$memory_2 = $_[2];
#line 291
$memory_3 = $memory_2->{'left'};
#line 291
reference_generator_priv::process_value($memory_0, $memory_1, $memory_3);
#line 291
undef($memory_3);
#line 292
$memory_3 = $memory_2->{'right'};
#line 292
reference_generator_priv::process_value($memory_0, $memory_1, $memory_3);
#line 292
undef($memory_3);
#line 292
undef($memory_1);
#line 292
undef($memory_2);
#line 292
$_[0] = $memory_0;return;
$_[0] = $memory_0;}
