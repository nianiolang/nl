###
# (c) Atinea Sp. z o.o.
###


use nassert;

def test_pub::test() {
	nassert::a(test_pub::funkcja(), -1);
	nassert::a(funkcja(1), -1);
	nassert::a(funkcja(0), 0);
}

def test_pub::funkcja() {
	funkcja(0);
	return -1;
}

def funkcja(arg) {
	if (arg >= 1) {
		return test_pub::funkcja();
	}
	return 0;
}

