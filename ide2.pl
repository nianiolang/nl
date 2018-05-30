###
# (c) Atinea Sp. z o.o.
# Stamp: PLE 2016-03-15
###
#!/usr/bin/perl


use utf8;
use strict;
use warnings FATAL => 'all';
no warnings 'recursion';



my $arr = [];
my $before = [];
my $merge_next = 0;
while (<>) {
	chomp($_);
	if ($_ =~ /^#####.*/g) {
		$before = $arr;
		$arr = [];	
	} else {
		if ($merge_next) {
			@$arr[@{$arr} - 1] .= $_;
		} else {
			push @$arr, $_;
		}
	}
	if (($_ =~ /^ERR/) || ($_ =~ /^WAR/)) {
		$merge_next = 1;
	} else {
		$merge_next = 0;
	}
}

print join("\n", @$before);
