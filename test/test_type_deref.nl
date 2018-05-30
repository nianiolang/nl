###
# (c) Atinea Sp. z o.o.
# Stamp: PLE 2016-10-12
###

use ptd;
use array;

def test_type_deref::test() {	
	t1();
	t2();
}

def t1() {
	var a : @test_type_deref::t1 = {x => 2, y => 3};
	check(a);# -> dobrze
	check_typed(a);
	check_ref(ref a);# -> zle
	var x = a->x;
	check_ref2(ref a->x);
}


def test_type_deref::t2() {
	return ptd::arr(ptd::sim());
}

def t2() {
	var arr : @test_type_deref::t2 = [];
	array::push(ref arr, 'nic ciekawego');
	arr []= 'cos_ciekawego';
}

def test_type_deref::t1() {
	return ptd::rec({
		x => ptd::sim(),
		y => ptd::sim(),
	});
}

def check_typed(a : @test_type_deref::t1) {
	a = a;
}

def check_ref(ref x : @test_type_deref::t1) {
	x = x;# -> zle
	var b = x;
}

def check(a) {
	a = a;
}

def check_ref2(ref t : ptd::sim()) {
	var w = t;
	w;
}
