###
# (c) Atinea Sp. z o.o.
# Stamp: PLE 2012-02-17
###

use strict;
use warnings FATAL => 'all';
no warnings 'recursion';

package c_std_lib_priv;

use c_rt_lib;

return 1;

my $global_profile = {};

sub c_std_lib::print($) {
	print($_[0]);
}
sub c_std_lib::set_profile_global($) {
	$global_profile = $_[0];
}
sub c_std_lib::get_profile_global() {
	return $global_profile;
}

sub c_std_lib::fast_substr($$$) {
	my ($text_arr, $begin, $len) = @_;
	return substr($text_arr->[0], $begin, $len);
}

sub c_std_lib::array_sub($$$) {
	my ($arr, $begin, $len) = @_;
 	return [@$arr[$begin..($begin + $len - 1)]];
}

sub c_std_lib::array_push($$) {
	if (c_rt_lib::get_arrcount($_[0]) == 1) {
		push(@{$_[0]}, $_[1]);
	} else {
		$_[0] = [@{$_[0]}, $_[1]];
	}
	return undef;
}
sub c_std_lib::array_pop($) {
	if (c_rt_lib::get_arrcount($_[0]) == 1) {
		pop(@{$_[0]});
	} else {
		$_[0] = [@{$_[0]}[0..(@{$_[0]} - 2)]];
	}
	return undef;
}

sub c_std_lib::array_append($$) {
	if (c_rt_lib::get_arrcount($_[0]) == 1) {
		push @{$_[0]}, @{$_[1]};
	} else {
		$_[0] = [@{$_[0]}, @{$_[1]}];
	}
	return undef;
}

sub c_std_lib::array_len($) {
	my ($arr) = @_;
	return scalar(@$arr);
}

sub c_std_lib::hash_get_value($$) {
	my ($hash, $key) = @_;
	return $hash->{$key};
}

sub c_std_lib::hash_has_key($$) {
	my ($hash, $key) = @_;
	return c_rt_lib::to_nl(exists $hash->{$key} ? 1 : 0);
}

sub c_std_lib::hash_set_value($$$) {
	if (c_rt_lib::get_hashcount($_[0]) == 1) {
		$_[0]->{$_[1]} = $_[2];
		return undef;
	}
	my $nh = {%{$_[0]}};
	$nh->{$_[1]} = $_[2];
	$_[0] = $nh;
	return undef;
}

sub c_std_lib::hash_delete($$) {
	if (c_rt_lib::get_hashcount($_[0]) == 1) {
		delete $_[0]->{$_[1]};
		return undef;
	}
	my $nh = {%{$_[0]}} ;
	delete $nh->{$_[1]};
	$_[0] = $nh;
	return undef;
}

sub c_std_lib::hash_size($) {
	my ($hash) = @_;
	return scalar(keys %$hash);
}
sub c_std_lib::string_compare($$) {
	return $_[0] cmp $_[1];
}
sub c_std_lib::string_chr($) {
	return chr($_[0]);
}

sub c_std_lib::string_ord($) {
	return ord($_[0]);
}

sub c_std_lib::string_length($) {
	return length($_[0]);
}

sub c_std_lib::string_index($$$) {
	return index($_[0], $_[1], $_[2]);
}

sub c_std_lib::string_sub($$$) {
	my ($str, $start, $len) = @_;
	die unless $start >= 0 && $len >= 0 && $start + $len <= length($str);
	return substr($str, $start, $len);
}

sub c_std_lib::string_replace($$$) {
	my ($str, $old, $new) = @_;
	my $q_old = quotemeta($old);
	$str =~ s/$q_old/$new/sg;
	return $str;
}

sub c_std_lib::is_hash($) {
	my ($el) = @_;
	return c_rt_lib::to_nl(ref($el) eq 'HASH');
}

sub c_std_lib::is_array($) {
	my ($el) = @_;
	return c_rt_lib::to_nl(ref($el) eq 'ARRAY');
}

sub c_std_lib::is_variant($) {
	my ($el) = @_;
	return c_rt_lib::to_nl(ref($el) eq 'c_ov_class' || ref($el) eq 'ov_class');
}

sub c_std_lib::is_sim($) {
	my ($el) = @_;
	return c_rt_lib::to_nl(ref($el) eq '');
}

sub c_std_lib::array_sort($$) {
	my $function = c_rt_lib::ov_as($_[1], 'ref');
	my $pckg = $function->{module};
	my $fun = $function->{name};
	my $code = ${pckg}->can($fun);
	return [sort {c_rt_lib::check_true(&$code($a,$b))==1?-1:1} @{$_[0]}];
}

sub c_std_lib::exec($$) {
	die 'Wrong number of function arguments' unless @_ == 2;
	my $function = c_rt_lib::ov_as($_[0], 'ref');
	my $pckg = $function->{module};
	my $fun = $function->{name};
	my $code = ${pckg}->can($fun);
	die "function: `$pckg :: $fun' not exist" unless defined $code;
	if (c_rt_lib::get_arrcount($_[1]) == 1) {
		return &$code(@{$_[1]});
	} else {
		$_[1] = [@{$_[1]}];
		return &$code(@{$_[1]});
	}
}
