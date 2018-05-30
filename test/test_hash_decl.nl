###
# (c) Atinea Sp. z o.o.
###


use hash;
use nassert;
use array;

def test_hash_decl::test() {
	var h = {
		foo => 'bar',
		'foo bar' => 'bar baz',
	};
	nassert::a(h->foo, 'bar');
	nassert::a(h{'foo'}, 'bar');
	nassert::a(h->'foo bar', 'bar baz');
	nassert::a(h{'foo bar'}, 'bar baz');
}
