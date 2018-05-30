###
# (c) Atinea Sp. z o.o.
###


use hash;
use nassert;
use array;
use ptd;

def test_forh::test() {
	var test = [];
	test []= 'xx';

	var h = {a => 'xx', b => 'yy', c => 'zz'};
	var was = {};
	forh var key, var value (h) {
		was{key . value} = 1;
	}
	die unless hash::has_key(was, 'axx');
	die unless hash::has_key(was, 'byy');
	die unless hash::has_key(was, 'czz');
	nassert::a(hash::size(was), 3);
	var iter = 0;
	for(; ; ) {
		break if (iter == 10);
		++iter;
	}
	nassert::a(iter, 10);
	var arr = [];
	exec2(ref arr);
	var hash = {arr => arr, inne => ''};
	exec(ref hash{'arr'}, i) rep var i (100000);
	hash{'arr'}[i] += i rep var i (100000);
	var long = {};
	rep var i (20000) {
		long{i} = true;
		nassert::a(long{i}, true);
	}
	rep var i (20000) {
		hash::delete(ref long, i);
	}
	nassert::a(hash::size(long), 0);

	var record = [{a => 'a'}];
	var r = record[0];
	var x = hash::get_value(r, 'a');
	ptd::ensure(ptd::sim(), x);

}

def exec(ref arr, i) {
	array::push(ref arr, i);
	arr[0] = i;
	if (false) {
		return;
	} else {
		loop {
			return;
		}
	}
}

def exec2(ref arr) {
	array::push(ref arr, i) rep var i (100000);
}

