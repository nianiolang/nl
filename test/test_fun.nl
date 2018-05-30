###
# (c) Atinea Sp. z o.o.
###


use func;
use nassert;

def test_fun::change(ref a, b, ref c) {
	a += 10;
	b += 20;
	c = 20;
	return a if (a < 10);
	return c;
}

def test_fun::test() {
	var arg = [1, 3, -4];
	func::exec(@test_fun::change, arg);
	nassert::a(arg[0], 1);
	nassert::a(arg[1], 3);
	nassert::a(arg[2], -4);
	func::exec_ref(@test_fun::change, ref arg);
	nassert::a(arg[0], 11);
	nassert::a(arg[1], 3);
	nassert::a(arg[2], 20);
}

