###
# (c) Atinea Sp. z o.o.
# Stamp: MZU 2013-10-11
###

package module_dep_priv;

use strict;
use warnings FATAL => 'all';

return 1;

sub module_dep::get_dep(){
	return {
		'test' => [
			'nianio_lib',
		],
		'compiler' => [
			 'parser',
			 'checker',
			 'translator',
			 'pretty_printer',
			 'ast',
			 'nianio_lib'
		 ],
		'parser' => [
			'ast',
			'nianio_lib'
		],
		'translator' => [
			'ast',
			'nianio_lib'
		],
		'checker' => [
			'ast',
			'nianio_lib'
		],
		'pretty_printer' => [
			'ast',
			'nianio_lib'
		],
		'ast' => [
			'nianio_lib'
		],
		'nianio_lib' => []
	};
}
