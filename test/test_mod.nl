###
# (c) Atinea Sp. z o.o.
###


use nassert;

def test_mod::test() {
	var a = 10;
	var b = 5;
	test_function(ref a, b);
}

def test_function(ref arg1, arg2) {
	var arr = [1, 2, 3];
	var h = {a => 1, b => 2, c => 3, d => 4};
	1 if true;
	die unless true;
	die while false;
	var tt = 0;
	++tt fora var el (arr);
	nassert::a(tt, 3);
	var dd = 0;
	(key ne '') ? ++dd : --dd forh var key, var val (h);
	nassert::a(dd, 4);
	var ii = 0;
	--ii rep var i (10);
	nassert::a(ii, -10);
	var counter = 1;
	for(var i = 0; i < 10; ++i) {
		i += 10;
		counter = i;
	}
	nassert::a(counter, 10);
}

