#!/usr/bin/perl
###
# (c) Atinea Sp. z o.o.
# Stamp: PLE 2012-02-22
###


use strict;
use warnings FATAL => 'all';
no warnings 'recursion';



sub get_path($) {
	my $path = $_[0];
	$path =~ m{^(.*)/[^/]*$}s;
	$path = $1;
	$path = '.' unless defined $path;
	return $path;
}

BEGIN {
	my $path = get_path($0);
	push @INC, $path . "/";
	push @INC, $path . "/bin/native_lib_pm";
	push @INC, $path . "/bin/nianio_lang_pm";
	push @INC, $path . "/native_lib_pm";
	push @INC, $path . "/cache_nl";
}

use trace trace => 1;
use compiler;

$| = 1;
compiler::compile([$0, @ARGV]);
