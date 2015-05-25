#!/usr/bin/perl -Ibin/nianio_lib_pm -Ibin/nianio_lang_pm -Ibase

use strict;
use warnings FATAL => 'all';
use Time::HiRes qw(clock);

use nparser;
use dfile;
use translator_nla_to_perl;
use type_checker;
use c_rt_lib;
use trace trace => 1;

sub get_file_time($) {
	return (stat $_[0])[9];
}

my $out_dir = "cache_nl";

my $type_check_cache = "$out_dir/typecheck.txt";

# hash of { name, fn, time, new, ast? }
my $files = {};

sub get_timestamp() {
	my ($sec,$min,$hour,$mday,$mon,$year,$wday,$yday) = localtime();
	$year += 1900;
	$mon += 1;
	return sprintf("%04d-%02d-%02d %02d:%02d:%02d", $year, $mon, $mday, $hour, $min, $sec);
}

sub get_out_fn($) {
	my ($n) = @_;
	return "$out_dir/$n.pm";
}

sub get_ast_fn($) {
	return get_out_fn($_[0]) . ".ast";
}

sub read_file($) {
	my ($fn) = @_;
	local($/);
        open my $in, "<", $fn or die;
        return <$in>;
}

sub parse($) {
	my ($fd) = @_;
	my $n = $fd->{name};
	my $in_fn = $fd->{fn};
	my $out_fn = get_out_fn($n);
	my $ast_fn = get_ast_fn($n);
	print("compile: $in_fn\n");
	my $st = clock();
	my $in_str = read_file($in_fn);
	my $r;
	eval { $r = nparser::sparse($in_str, $n) };
	$r = c_rt_lib::ov_mk_arg('error', [{line => -1, msg=>$@}]) if $@;
	if (!$r->is('ok')) {
		my $err = $r->as('error');
		for my $e (@$err) {
			my $msg = $e->{msg};
			$msg =~ s/\n/ /gs;
			printf "%s:%d %s\n", $in_fn, $e->{line}, $msg;
		}
		return;
	}
	$fd->{ast} = $r->as('ok');
	dfile::fsave("$out_fn.ast", $fd->{ast});
	my $gen_st = clock();
	my $c = translator_nla_to_perl::generate_perl_file($fd->{ast});
	my $out_s = $c->as('ok');
	open my $out_f, ">$out_fn" or die;
	print $out_f $out_s;
}


sub parse_new() {
	for my $n (sort keys %$files) {
		my $fd = $files->{$n};
		if (!$fd->{parsed}) {
			parse($fd);
			$fd->{parsed} = 1;
		}
	}
}

sub load_parse_cache() {
	for my $n (sort keys %$files) {
		my $fd = $files->{$n};
		if (!$fd->{parsed}) {
			my $ast_fn = get_ast_fn($n);
			if (-f $ast_fn && get_file_time($ast_fn) >= $fd->{time}) {
				print("loading ".$fd->{fn}."\n");
				$fd->{ast} = dfile::fload($ast_fn);
				$fd->{parsed} = 1;
			}
		}
	}
}

sub update_file_list() {
	my $new_list = {};
	my $old_list = $files;
	undef $files;
	my $changed = 0;
	for my $f_nl (<*/*.nl>) {
		$f_nl =~ m{([^/]*)\.nl$}s;
		my $n = $1;
		my $f_nl_time = get_file_time($f_nl);
		if (exists $old_list->{$n} && $old_list->{$n}->{time} >= $f_nl_time) {
			$new_list->{$n} = $old_list->{$n};
			delete $old_list->{$n};
		} else {
			$new_list->{$n} = {
				name => $n,
				fn => $f_nl,
				time => get_file_time($f_nl),
				parsed => 0
			};
			delete $old_list->{$n};
			$changed = 1;
		}
	}
	if (keys(%$old_list) > 0) {
		$changed = 1;
	}
	$files = $new_list;
	return $changed;
}

sub all_files_prase_ok() {
	for my $n (sort keys %$files) {
		return 0 if !exists $files->{$n}->{ast};
	}
	return 1;
}

sub print_last_types_res() {
	print read_file($type_check_cache) if -f $type_check_cache;
}

sub check_types() {
	my $asts = {};
	for my $n (sort keys %$files) {
		$asts->{$n} = $files->{$n}->{ast};
	}
	my $st = clock();
	my $r = type_checker::check($asts, {});
	$st = clock() - $st;
	my $err = $r->{errors};
	my $str;
	for my $e (@$err) {
		my $msg = $e->{msg};
		$msg =~ s/\n/ /gs;
		$str .= sprintf "%s:%d %s\n", $files->{$e->{module}}->{fn}, $e->{line}, $msg;
	}
	$str .= sprintf "%d error(s)", scalar(@$err);
	open my $out, ">$type_check_cache.new";
	print $out "$str\n";
	close $out;
	rename "$type_check_cache.new", $type_check_cache;
	printf "\n%s, time: %.3fs\n", $str, $st;
}

$| = 1;
my $type_check_pid;

mkdir($out_dir);

update_file_list();
load_parse_cache();
while (1) {
	if ($type_check_pid) {
		kill 9, $type_check_pid;
		wait;
		undef $type_check_pid;
	}
	printf "\n\n***** %s\n", get_timestamp();
	parse_new();
	if (all_files_prase_ok()) {
		print "\ncompile finished, last type check:\n";
		print_last_types_res();
		print "checking types...\n";
		my $pid = fork();
		if (!$pid) {
			check_types();
			exit;
		}
		$type_check_pid = $pid;
	}
	while (!update_file_list()) {
		sleep 1;
	}
}
