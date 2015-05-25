/*  
 *  (c) Atinea Sp. z o. o.
 *  Stamp: MZU 2013-06-27
*/

#include <stdio.h>
#include "c_rt_lib.h"
#include "test_nl.h"

int main(int argc, char **argv) {
	c_rt_lib0init();
	test_nl0test();
	c_rt_lib0finish();
	return 0;
}
