###
# (c) Atinea Sp. z o.o.
###


use nassert;

def test_op::test() {
	test_op::test_one();
	test_op::test_post_operators();
}

def test_op::test_one() {
	var i = 0;
	++i;
	nassert::a(i, 1);
	var a = [{b => 55}];
	--a[0]->b;
	nassert::a(a[0]->b, 54);
	var c = {d => 3};
	++c->d;
	nassert::a(c->d, 4);
	c->d += 4;
	nassert::a(c, {d => 8});
	c->d -= 7;
	nassert::a(c, {d => 1});
	c->d += 14;
	c->d /= 3;
	nassert::a(c, {d => 5});
	var g = ['cos ciekawego'];
	var h = g[0];
	g[0] .= '...';
	nassert::a(g, ['cos ciekawego...']);
	nassert::a(h, 'cos ciekawego');
	return 'OK';
}

def test_op::test_post_operators() {
	var i = 10;
	var j = i++;
	nassert::a(i, 11);
	nassert::a(j, 10);
	var a = [{b => {c => 10}}];
	var copy = a;
	var c = a[0]->b->c++;
	++copy[0]->b->c;
	nassert::a(a[0]->b->c, 11);
	nassert::a(copy, a);
	nassert::a(c, 10);
}

