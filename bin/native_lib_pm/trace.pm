package trace;

use strict;

use vars qw(%CONF $OLD_HANDLER);

use Data::Dumper;
use File::Path "mkpath";
use Time::HiRes qw(gettimeofday);

use csv;

my $first = 1;

sub import {
	return unless $first;
	$first = 0;
	shift @_;

	%CONF = (%CONF, @_);
	$OLD_HANDLER = $SIG{__DIE__}
		if defined $SIG{__DIE__}
			and $SIG{__DIE__} ne 'IGNORE'
			and $SIG{__DIE__} ne 'DEFAULT';
	$SIG{__DIE__} = \&trace;
}

sub trace {
	local ($_);

	my $i;
	my ($filename_from_stack, $number_from_stack);
	while (1) {
		my @caller = caller($i++);
		if (defined $caller[3]) {
			$filename_from_stack ||= $caller[1];
			$number_from_stack ||= $caller[2];
			return if $caller[3] eq '(eval)';
		} else {
			last;
		}
	}

	return unless $CONF{trace};

	my $filehandle;
	my ($seconds, $micros) = gettimeofday();
	my ($sec, $min, $hour, $mday, $mon, $year, $rest) = localtime($seconds);
	my $filename = sprintf "stacktrace_%04d%02d%02d_%02d%02d%02d%03d_%d.csv", $year + 1900,
		$mon + 1,
		$mday, $hour, $min, $sec, $micros / 1000, $$;
	my $LOGS_PATH = "./" . "nl_logs/";
	mkpath $LOGS_PATH;
	open($filehandle, ">", $LOGS_PATH . $filename);
	my $i;

	print $filehandle csv::save([[@_]]);
	while (1) {
		my (@c, $args);
		{

			package DB;
			@c = caller($i);
			$args = [@DB::args];
		}
		my ($pack, $file, $number, $sub) = @c or last;
		my $args_csv = [];
		for my $i (0 .. $#$args) {
			my $x = $args->[$i];
			
			my $txt;
			eval {
			  my $debug_txt;
			  if (ref($x) eq 'REF') {
				  $debug_txt = 'ref -> ' . dfile::debug(${$x});
			  } elsif (ref($x) eq 'imref_priv') {
				  for my $key (%{ $x }) {
					  $debug_txt = 'ref -> ' . dfile::debug(${ $x->{$key}->[0] });
					  last;
				  }
			   } else {
				   $debug_txt = dfile::debug($x);
			   }
			  $txt = " p" . ($i + 1) . ": " . $debug_txt . "\n";
			};
			if ($@) {
			  my $d = Data::Dumper->new([$x], ["p" . ($i + 1)]);
			  $d->Indent(1);
			  $txt = $d->Dump();
			}
		  
			push @{$args_csv}, $txt;
		}
		$a = "$i";
		$a = '0' if !$a;
		my $line = csv::save([[$a, "\&$sub", "$file", "$number", @{$args_csv}]]);
		print $filehandle $line;
		++$i;
	}
	close($filehandle);

	if ($OLD_HANDLER) {
		$SIG{__DIE__} = $OLD_HANDLER;
		goto &$OLD_HANDLER;
	}
}

