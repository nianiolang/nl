###
# (c) Atinea Sp. z o.o.
###


use test_forh;
use test_hash_oper;
use test_hash_decl;
use test_mod;
use test_num;
use test_op;
use test_pub;
use test_ref;
use test_str;
use test_type;
use test_fun;
use test_ensure;
use nl;
use string;
use profile;

def p(arg) {
	nl::print('Test ' . arg . string::lf());
}

def test_nl::test() {
	profile::sub('test_nl', @test_nl::all, []);
}

def test_nl::all() {
	p('test_hash_oper');
	profile::sub('test_hash_oper', @test_hash_oper::test, []);
	p('test_hash_decl');
	profile::sub('test_hash_decl', @test_hash_decl::test, []);
	p('forh');
	profile::sub('test_forh', @test_forh::test, []);
	p('mod');
	profile::sub('test_mod', @test_mod::test, []);
	p('num');
	profile::sub('test_num', @test_num::test, []);
	p('op');
	profile::sub('test_op', @test_op::test, []);
	p('pub');
	profile::sub('test_pub', @test_pub::test, []);
	p('ref');
	profile::sub('test_ref', @test_ref::test, []);
	p('str');
	profile::sub('test_str', @test_str::test, []);
	p('type');
	profile::sub('test_type', @test_type::test, []);
	p('function');
	profile::sub('test_fun', @test_fun::test, []);
	p('ensure');
	profile::sub('test_ensure', @test_ensure::test, []);
}

