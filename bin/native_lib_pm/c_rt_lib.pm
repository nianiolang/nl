# (c) Atinea Sp. z o.o.
# Stamp: nianio lang 
# Stamp: MZU 2012-11-30
###

package c_rt_lib_priv;


use strict;
use warnings FATAL => 'all';
no warnings 'recursion';
use Scalar::Util;
use B;

my $v_true = bless ['TRUE'], "c_ov_class";
my $v_false = bless ['FALSE'], "c_ov_class";
my $v_true_addr = Scalar::Util::refaddr($v_true);
my $v_false_addr = Scalar::Util::refaddr($v_false);
return 1;

sub c_rt_lib::get_refcount {
   B::svref_2object( shift )->REFCNT;
}
sub c_rt_lib::get_arrcount {
   return B::svref_2object( shift )->REFCNT;
}
sub c_rt_lib::get_hashcount {
   return B::svref_2object( shift )->REFCNT;
}
sub c_rt_lib::get_ref_hash($$) {
	my $ret = $_[0]->{$_[1]};
	return $ret unless ref($ret);
	Scalar::Util::weaken($_[0]->{$_[1]}) unless c_rt_lib::get_hashcount($_[0])>1;
	return $ret;
}
sub c_rt_lib::get_ref_arr($$) {
	my $ret = $_[0]->[$_[1]];
	return $ret unless ref($ret);
	Scalar::Util::weaken($_[0]->[$_[1]]) unless c_rt_lib::get_arrcount($_[0])>1;
	return $ret;
}
sub c_rt_lib::set_ref_hash($$$) {
	if (c_rt_lib::get_refcount($_[0]) == 1) {
		$_[0]->{$_[1]} = $_[2];
	}else{
		my $nh = {%{$_[0]}};
		$nh->{$_[1]} = $_[2];
		$_[0] = $nh;
	}
}
sub c_rt_lib::set_ref_arr($$$) {
	if (c_rt_lib::get_refcount($_[0]) == 1) {
		$_[0]->[$_[1]] = $_[2];
	}else{
		my $nh = [@{$_[0]}];
		$nh->[$_[1]] = $_[2];
		$_[0] = $nh;
	}
}

# ov
sub c_rt_lib::ov_mk_none($) {
	die unless ref $_[0] eq "";
	my $r = [$_[0]];
	bless $r, "c_ov_class";
	return $r;
}

sub c_rt_lib::ov_mk_arg($$) {
	die unless ref $_[0] eq "";
	my $r = [$_[0], $_[1]];
	bless $r, "c_ov_class";
	return $r;
}

sub c_rt_lib::ov_get_element($) {
	return $_[0]->[0];
}
sub c_rt_lib::ov_has_value($) {
	return @{ $_[0] } == 2 ? $v_true : $v_false;
}
sub c_rt_lib::ov_get_value($) {
	die unless @{ $_[0] } == 2;
	return $_[0]->[1];
}
sub c_rt_lib::ov_is($$) {
	return $_[0]->is($_[1]) ? $v_true : $v_false;
}
sub c_rt_lib::ov_as($$) {
	return $_[0]->as($_[1]);
}
sub c_ov_class::is($$) {
	return c_rt_lib::ov_get_element($_[0]) eq $_[1] ? 1 : 0;
}

sub c_ov_class::as($$) {
	die unless c_rt_lib::ov_get_element($_[0]) eq $_[1];
	return c_rt_lib::ov_get_value($_[0]);
}
# boolean
sub c_rt_lib::to_nl($) {
	return $_[0] ? $v_true : $v_false;
}

sub c_rt_lib::check_true($) {
	my $x = Scalar::Util::refaddr($_[0]);
	return 1 if $x == $v_true_addr;
	return 0 if $x == $v_false_addr;
	return 1 if $_[0]->is('TRUE');
	return 0 if $_[0]->is('FALSE');
	die;
}

#foreach iteration
sub c_rt_lib::array_len($) {
	my ($arr) = @_;
	return scalar(@$arr);
}

sub c_rt_lib::hash_get_value($$) {
	my ($hash, $key) = @_;
	my $ret = $hash->{$key};
	die unless defined $ret;
	return $ret;
}

sub c_rt_lib::init_iter($) {
	my ($hash) = @_;
	my $hash_keys = {k=>[keys %{ $hash }],p=>0};
	return $hash_keys;
}

sub c_rt_lib::get_key_iter($) {
	my ($hash_keys) = @_;
	die if($hash_keys->{p} >= @{$hash_keys->{k}});
	return $hash_keys->{k}->[$hash_keys->{p}];
}
sub c_rt_lib::is_end_hash($) {
	my ($hash_keys) = @_;
	if ($hash_keys->{p} >= @{$hash_keys->{k}}) {
		return $v_true;
	}
	return $v_false;
}

sub c_rt_lib::next_iter($) {
	my ($hash_keys) = @_;
	++$hash_keys->{p};
	return $hash_keys;
}
