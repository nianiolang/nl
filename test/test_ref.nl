###
# (c) Atinea Sp. z o.o.
###


use array;
use enum;
use nassert;

def test_ref::test() {
	test_ref::test2();
	test_ref::total_test();
}

def test_ref::test2() {
}

def test_ref::test3(ref a1, a2, ref a3, a4, ref a5, a6) {
	a1 = 1;
	a2 = 2;
	a3 = 3;
	a4 = 4;
	array::push(ref a5, 5);
	if (true) {
		return 1;
	} else {
		if (true) {
			return -1;
		}
		return 2;
	}
}

def test22(ref a, ref b) {
	loop {
		a = 10;
		b = 20;
		break;
	}
}

def test_ref::total_test() {
	var b1 = -1;
	var b3 = {a => [0, 1, 2, -3, 4], b => [1, 2, 3, 8]};
	var b4 = -4;
	var b5 = [];
	nassert::a(test_ref::test3(ref b1, -2, ref b3->a[4], b4, ref b5, @test_ref::test2), 1);
	nassert::a(b1, 1);
	nassert::a(b3->a[0], 0);
	nassert::a(b3->a[4], 3);
	nassert::a(b4, -4);
	nassert::a(b5, [5]);
	var aa = -1;
	test22(ref aa, ref aa);
	nassert::a(aa, 20);
	var aaa = :wariant;
	if (enum::eq(aaa, :wariant2)) {
		die;
	}
	loop {
		break;
	}
	if (enum::eq(aaa, :wariant1)) {
		die;
	}
}

