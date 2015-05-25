###
# (c) Atinea Sp. z o.o.
###


use nlasm;
use translator;
use nparser;
use module_checker;
use type_checker;
use array;
use hash;
use generator_js;
use post_processing;
use ptd;

def string_compiler::compile(program : ptd::sim(), module_name : ptd::sim())
	: ptd::var({ok=>@nlasm::result_t, err=>ptd::rec({line => ptd::sim(), message => ptd::sim()})}) {
	var retpar = nparser::sparse(program, module_name);
	var errors = [];
	match (retpar) case :ok(var ast) {
		var module_ret = module_checker::check_module(ast);
		errors = module_ret->errors;
		if (array::len(errors) == 0) {
			var asts = {};
			hash::set_value(ref asts, ast->name, ast);
			var types_ret = type_checker::check_modules(asts, asts);
			errors = types_ret->errors;
		}
		return :ok(translator::translate(ast)) if array::len(errors) == 0;
	} case :error(var err) {
		errors = err;
	}	
	return :err({line => errors[0]->line, message => errors[0]->msg});
}
def string_compiler::compile_to_nlasm(modules : ptd::hash(ptd::sim()))
	: ptd::var({ok=>ptd::hash(@nlasm::result_t), err=>ptd::arr(ptd::rec({line => ptd::sim(), msg => ptd::sim(), module => ptd::sim()}))}) {
	var errors = [];
	var asts = {};
	forh var module_name, var code(modules){
		match (nparser::sparse(code, module_name)) case :ok(var ast) {
			var ret = module_checker::check_module(ast);
			fora var error (ret->errors){
				array::push(ref errors, {msg=>error->msg, line=>error->line, module=>module_name});
			}
			hash::set_value(ref asts, module_name, ast);
		} case :error(var err) {
			fora var error (err){
				array::push(ref errors, {msg=>error->msg, line=>error->line, module=>module_name});
			}
		}
	}
	return :err(errors) if array::len(errors) > 0;
	
	var types_ret = type_checker::check_modules(asts, asts);
	return :err(types_ret->errors) if array::len(types_ret->errors) > 0;
	
	var nlasms = {};
	forh var module_name, var ast (asts){
		hash::set_value(ref nlasms, module_name, translator::translate(ast));
	}
	var state = post_processing::init({}, :o0);
	post_processing::find(ref state, ref nlasms);
	return :ok(nlasms);
}

def string_compiler::compile_to_js(modules : ptd::hash(ptd::sim()))
	: ptd::var({ok=>ptd::hash(ptd::sim()), err=>ptd::arr(ptd::rec({line => ptd::sim(), msg => ptd::sim(), module => ptd::sim()}))}) {
	try var nlasms = string_compiler::compile_to_nlasm(modules);
	var ret = {};
	forh var module_name, var nlasm (nlasms){
		hash::set_value(ref ret, module_name, generator_js::generate(nlasm));
	}
	return :ok(ret);
}

