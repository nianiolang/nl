###
# (c) Atinea Sp. z o.o.
# Stamp: MZU 2012-12-20
###

package c_fe_lib_priv;


use strict;
use warnings FATAL => 'all';
no warnings 'recursion';

use File::Basename;
use File::Spec;
use c_rt_lib;
use Time::HiRes qw(gettimeofday);

return 1;

sub c_fe_lib::print($) {
	print $_[0]."\n";
}

sub c_fe_lib::file_to_string($) {
	my ($nfile) = @_;
	my $source;
	if(!open($source, "<", $nfile)){
		print "$nfile does not exist";
		return c_rt_lib::ov_mk_arg("err", "$nfile does not exist");
	}
	my $string = do {
		local ($/);
		<$source>;
	};
	close($source);
	return c_rt_lib::ov_mk_arg("ok", $string);
}
sub c_fe_lib::string_to_file($$) {
	my ($nfile,$string) = @_;
	my $dest;
	if(!open($dest, ">", $nfile)){
		print "can't write to $nfile";
		return c_rt_lib::ov_mk_arg("err", "can't write to $nfile");
	}
	print $dest $string;
	close($dest);
	return c_rt_lib::ov_mk_arg("ok", "");
}
sub c_fe_lib::get_file_size($) {
	return c_rt_lib::ov_mk_arg("ok", -s $_[0]);
}
sub c_fe_lib::get_modif_time($) {
	return c_rt_lib::ov_mk_arg("ok", (stat($_[0]))[9]);
}

sub c_fe_lib::get_module_files($) {
	my $ret = [];
	while (my $file = <$_[0]/*>){
		push @$ret, $file if -f $file;
	}
	return c_rt_lib::ov_mk_arg("ok", $ret);
}

sub c_fe_lib::get_module_files_rec($) {
	my $paths = [ $_[0] ];
	my $ret = [];
	while (my $dir = shift @$paths){
		push @$ret, $dir if -f $dir;
		push @$paths, <$dir/*> if -d $dir;
	}
	return $ret;
}

sub c_fe_lib::mk_path($) {
	mkdir($_[0]);
}

sub c_fe_lib::get_path($) {
	my $path = $_[0];
	$path =~ m{^(.*)/[^/]*$}s;
	$path = $1;
	$path = '.' unless defined $path;
	return $path;
}

sub c_fe_lib::get_time(){
	my ($a, $b) = gettimeofday();
	return [$a, $b];
}
sub c_fe_lib::sleep($) {
	sleep($_[0]);
}
sub c_fe_lib::exec_cmd($) {
	my ($cmd) = @_;
	system($cmd) == 0 or die "system $cmd failed: $?"
}