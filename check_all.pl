#!/usr/bin/perl
###
# (c) Atinea Sp. z o.o.
# Stamp: MZU 2013-10-11
###

use strict;
use warnings FATAL => 'all';

BEGIN {
    $SIG{__WARN__} = sub {
        CORE::warn(@_);
        exit(1);
    };
}

sub get_path() {
	$0 =~ m{^(.*/)[^/]*$}s;
	$1 or './';
}
sub get_dirs(){
	return ( ".",
	"ast",
	"checker",
	"compiler",
	"nianio_lib",
	"parser",
	"pretty_printer",
	"test",
	"translator");
}
sub get_files(;@){
	foreach my $dir (get_dirs()){
		push @_, <$dir/*>;
	}
	return @_;
}
BEGIN {
	my $path = get_path();
	foreach my $dir (get_dirs()){
		push @INC, $path . $dir;
	}
	push @INC, $path . "cache_nl";
	push @INC, $path . "nl_lib_compiler";
}

use Data::Dumper;

my @errors;

sub find_cycles($;$){
	my ($mov,$req) = @_;
	my (%was,%instack,@stack,@cycles);
	foreach my $node (keys %{$mov}){
		next if defined $was{$node};
		push @stack, $node;
		$instack{$node} = 0;
		$was{$node} = 1;
		while(scalar @stack){
			my @keys = keys %{$mov->{$stack[-1]}};
			if((scalar @keys) == $instack{$stack[-1]}){
				delete $instack{$stack[-1]};
				pop @stack;
				next;
			}
			my $next = $keys[$instack{$stack[-1]}++];
			next if $next eq $stack[-1] && !defined $req;
			if(defined $was{$next}){
				push @cycles, [@stack[$was{$next}-1 .. scalar @stack-1]] if defined $instack{$next};
			}else{
				$instack{$next} = 0;
				push @stack, $next;
				$was{$next} = scalar @stack;
			}
		}
	}
	return @cycles;
}
sub cyclecheck(){
	my (%cals,%funs,%dmod,%dfil,%dfun);
	foreach my $file (get_files()) {
		next unless $file =~ m{([^/]+)/([^/]+/)*([^/]+)\.(nl)$}s;
		my $modul = $1;
		my $nianio = $4 eq "nl";
		my ($pack, $afun, $amod) = ("","","");
		open FILE, $file or die;
		foreach my $line (<FILE>){
			$pack = $1 if $line =~ /^package\s*(\w+)\s*;/g;
			if(($line =~ /(sub|def)\s+(\w+)::(\w+)\s*\(/g)
			or ($line =~ /(sub|def)\s+()(\w+)\s*\(/g && !$nianio)){
				$afun = $3;
				$amod = ($2 or $pack);
				$funs{$amod}{$afun} = $file;
				next;
			}
			my @matches = $line =~ /(\w+)::(\w+)/g;
			push @matches,$line =~ /[^:\$\w>]()(\w+)\s*\(/g if !$nianio;
			while (defined (my $mod = shift @matches)){
				my $fun = shift @matches;
				$mod = $pack unless $mod;
				$cals{$file}{$mod}{$fun} = 1;
				$dfun{"$amod\::$afun"}{"$mod\::$fun"} = 1;
			}
		}
		close(FILE);
	}
	foreach my $file (keys %cals) {
		die unless $file =~ m{([^/]+)/([^/]+/)*([^/]+)\.(nl)}s;
		my $modul = $1;
		foreach my $mod (keys %{$cals{$file}}) {
			foreach my $fun (keys %{$cals{$file}{$mod}}) {
				next unless defined $funs{$mod}{$fun};
				$funs{$mod}{$fun} =~ m{([^/]+)/([^/]+/)*([^/]+)\.(nl)}s;
				$dmod{$modul}{$1} = $file . ' => ' . $funs{$mod}{$fun};
				$dfil{$file}{$funs{$mod}{$fun}} = 1;
			}
		}
	}
	use module_dep;
	for my $cyc (find_cycles(\%dmod)){
		push @errors, "cykl zaleznosci folderow: [".join(",",@$cyc)."]\n";
	}
	my $mod_dep = module_dep::get_dep();
	for my $fol (keys %dmod){
		if(!$mod_dep->{$fol}){
			push @errors, "brak folderu: '$fol' w module_dep\n";
			next;
		}
		my %has = map { $_ => 1 } @{$mod_dep->{$fol}};
		for my $dep(keys %{$dmod{$fol}}){
			push @errors, "niedozwolona zaleznosc: $dmod{$fol}{$dep} '$fol' => '$dep'\n" if(!$has{$dep} && $fol ne $dep);
		}
	}
	for my $cyc (find_cycles(\%dfil)){
		push @errors, "cykl zaleznosci modulow: [".join(",",@$cyc)."]\n";
	}
}


$| = 1;
print "Working .";

cyclecheck();

if(@errors){
	print "\n".@errors." ERRORS\n @errors\n".@errors." ERRORS\n";
	exit 1;
}
print "\nOK\n";
exit 0;
