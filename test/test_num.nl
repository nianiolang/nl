###
# (c) Atinea Sp. z o.o.
###


use nassert;

def test_num::test() {
	var a = 0x00;
	nassert::a(a, 0);
	var b = 0xffff;
	nassert::a(65535, b);
	var c = 0xFFFaF2;
	nassert::a(c, 16775922);
	var d = 2633;
	var e = 24.44;
	nassert::a(e, '24.44');
	var f = 0.15;
	var g = 0.35;
	nassert::a(g, '0.35');
	var h = +0;
	nassert::a(h, 0);
	var j = -254;
	var t = -254.35;
	nassert::a(t, '-254.35');
	h += t;
	t = h + e + c + '-16424242.2351145';
	a = t - 351449.8548855;
	if (a > 0.001 || a < -0.001) {
		nassert::a(a, '~0');
	}
}

