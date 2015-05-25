/*  
 *  (c) Atinea Sp. z o. o.
 *  Stamp: MZU 2013-06-27
*/

#include <stdio.h>
#include "compiler.h"
#include "c_rt_lib.h"

int main(int argc, char **argv) {
	c_rt_lib0init();
	ImmT args = c_rt_lib0array_new();
	for (int i = 0; i < argc; ++i) {
		ImmT el = c_rt_lib0string_new(argv[i]);
		c_rt_lib0array_push(&args, el);
		c_rt_lib0clear(&el);
	}
	compiler0compile(args);
	c_rt_lib0clear(&args);
	c_rt_lib0finish();
	return 0;
}
