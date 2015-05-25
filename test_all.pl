#!/usr/bin/perl

###
# (c) Atinea Sp. z o.o.
# Stamp: PLE 2012-09-13
###



use strict;
use warnings FATAL => 'all';
no warnings 'recursion';


BEGIN {
	push @INC, "./native_lib_pm/";
	push @INC, "./cache_nl/";
	push @INC, "./test";
}


use trace trace => 1;
use test_nl;
test_nl::test();
print "ALL TESTS OK";
