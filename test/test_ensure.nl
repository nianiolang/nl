###
# (c) Atinea Sp. z o.o.
###


use ptd;
use array;
use hash;
use boolean_t;

def test_ensure::test() {
	match(ptd::try_cast(@test_ensure::fun_arg_t, :b({a=>[], c=>''}))) case :err(var info){
		die unless array::len(info) == 4;
	} case :ok(var val){
		funkcja(val);
		die(val);
	}
	match(ptd::try_cast(@test_ensure::fun_arg_t, :b({a=>'', c=>''}))) case :err(var info){
		die(info);
	} case :ok(var val){
		funkcja(val);
	}
}
def test_ensure::rekord(){
	return ptd::rec({});
}
def test_ensure::fun_arg_t(){
	return ptd::var({
		a => ptd::sim(), 
		b => ptd::rec({a => ptd::sim(), c => ptd::sim()}), 
		d => @test_ensure::rekord
	});
}

def test_ensure::fun_ret_t(){
	return ptd::var({
		ok => ptd::hash(ptd::sim()),
		err => ptd::sim(),
	});
}
def ret_err_arr() : ptd::var({
		ok => ptd::sim(),
		err => ptd::arr(ptd::sim()),
	}) {
	return :err([]);
}

def funkcja(a : @test_ensure::fun_arg_t) 
	: @test_ensure::fun_ret_t {
	var value;
	var value4 = [];
	var ret;
	var emp : @test_ensure::rekord;
	match (a) case :a(var t) {
		ret = :dynia;
		return :ok({});
	} case :b(var b_param) {
		ret = :ok({});
	} case :d(var dd) {
		var cop = dd;
		emp = cop;
		emp = a as :d;
		cop->g = '';
		ret = :mysz;
		die;
	}
	ensure :ok({});
	try :ok({});
	try :err('') if true;
	ensure :err({});
	ensure ret_err_arr();
	return :err('');
}

