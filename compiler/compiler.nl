###
# (c) Atinea Sp. z o.o.
# Stamp: MZU 2012-12-20
###

use c_fe_lib;
use string;
use hash;
use array;
use dfile;
use ptd;
use nast;
use nparser;
use boolean_t;
use pretty_printer;
use generator_c;
use generator_pm;
use generator_js;
use generator_java;
use translator;
use nlasm;
use post_processing;
use tc_types;
use type_checker;
use module_checker;
use interpreter;
use nl;

def get_dir_cache_name() : ptd::sim() {
	return 'cache_nl';
}
def get_dir_pretty_name() : ptd::sim() {
	return 'pretty_nl';
}
def get_default_deref_file() : ptd::sim() {
	return 'deref.gr';
}
def get_default_math_file() : ptd::sim() {
	return 'math_fun.gr';
}

def compiler::parse_check_t(){
	return ptd::rec({asts => ptd::hash(@nast::module_t), errors => ptd::arr(ptd::sim()), deref_type=> @tc_types::deref_types});
}
def compiler::errors_hash_t() {
	return ptd::hash(ptd::arr(@tc_types::check_error_t));
}
def compiler::errors_group_t() {
	return ptd::rec({
		module_errors => @compiler::errors_hash_t,
		module_warnings => @compiler::errors_hash_t,
		type_errors => @compiler::errors_hash_t,
		type_warnings => @compiler::errors_hash_t,
		loop_error => @module_checker::ret_t
	});
}
def compiler::language_t(){
	return ptd::var({pm=>ptd::none(), nla=>ptd::none(), c=>ptd::none(), nl=>ptd::none(), ast=>ptd::none(), js=>ptd::none(), java=>ptd::none()});
}
def compiler::destination_t(){
	return ptd::var({pm=>ptd::sim(), nla=>ptd::sim(), c=>ptd::rec({c=>ptd::sim(), h=>ptd::sim()}), nl=>ptd::sim(), ast=>ptd::sim(), js=>ptd::sim(), java=>ptd::sim(), none=>ptd::none()});
}
def compiler::module_t(){
	return ptd::hash(ptd::rec({src=>ptd::sim(), dst=>@compiler::destination_t}));
}
def compiler::deref_t() {
	return ptd::var({yes=>ptd::sim(), no=>ptd::none()});
}
def compiler::try_t() {
	return ptd::var({err=>ptd::sim(), ok=>ptd::sim()});
}
def compiler::input_type() {
	return ptd::rec({
		input_path => ptd::arr(ptd::sim()),
		cache_path => ptd::sim(),
		deref => @compiler::deref_t,
		optimization => ptd::var({o0=>ptd::none(), o1=>ptd::none(), o2=>ptd::none(), o3=>ptd::none(), o4=>ptd::none()}),
		math_fun => ptd::sim(),
		mode => ptd::var({strict=>ptd::none(), exec=>ptd::none(), ide=>ptd::none(), idex=>ptd::sim()}),
		language => @compiler::language_t,
		alarm => ptd::var({norm=>ptd::none(), wall=>ptd::none()})
	});
}
def compiler::file_t() {
	return ptd::var({ok=>ptd::sim(), err=>ptd::sim()});
}
def compiler::compile(cmd_args : ptd::arr(ptd::sim())) : ptd::void() {
	var opt_cli = parse_command_line_args(cmd_args);
	c_fe_lib::mk_path(opt_cli->cache_path);
	if(opt_cli->mode is :strict){
		c_fe_lib::print('strict mode processing...');
		compile_strict_file(opt_cli);
	} elsif(opt_cli->mode is :ide || opt_cli->mode is :idex){
		c_fe_lib::print('ide mode processing...');
		compile_ide(opt_cli);
	} elsif(opt_cli->mode is :exec){
		exec_interpreter(opt_cli);
	} else {
		die;
	}
}
def get_known_func() : ptd::hash(@interpreter::known_exec_func_t){
	var ret = {};
	hash::set_value(ref ret, 'nl::print', {func => @nl::print, type => :sequential, args => [ptd::sim()]});
	return ret;
}
def exec_interpreter(input : @compiler::input_type){
	var asts = {};
	var errors : @compiler::errors_group_t = {module_errors=>{}, module_warnings=>{}, type_errors=>{}, type_warnings=>{}, loop_error=>:ok};
	var error_file = 0;
	var nianio_files = get_files_to_parse(input);
	forh var module, var paths (nianio_files){
		match (parse_module(module, paths->src, ref errors)) case :ok(var ast){
			hash::set_value(ref asts, module, ast);
		} case :err(var m){
			++error_file;
		}
	}
	if (error_file != 0) {
		show_and_count_errors(errors, input);
		return;
	}
	check_modules(asts, ref errors, input->deref);
	if (show_and_count_errors(errors, input) > 0) {
		return;
	}
	
	var const_state = post_processing::init({}, input->optimization);
	var modules = translate(asts, ref const_state);
	var modules_arr = [];
	var main_mod = '';
	forh var key, var val (modules){
		fora var fun (val->functions){
			if(fun->name eq 'main'){
				main_mod = key;
			}
		}
		array::push(ref modules_arr, val);
	}
	var interpreter_state = interpreter::init(modules_arr, get_known_func());
	ensure interpreter::start(ref interpreter_state, 'main', main_mod);
	ensure interpreter::exec_all_code(interpreter_state);
}
def get_module_name(path : ptd::sim()) : ptd::sim(){
	var pos = string::length(path)-1;
	while (pos>=0 && string::substr(path,pos,1) ne '/' && string::substr(path,pos,1) ne '\'){
		if(string::substr(path,pos,1) eq '.'){
			--pos;
			break;
		}
		--pos;
	}
	var ret = '';
	while (pos>=0 && string::substr(path,pos,1) ne '/' && string::substr(path,pos,1) ne '\'){
		ret = string::substr(path,pos,1).ret;
		--pos;
	}
	return ret;
}
def has_extension(path : ptd::sim(),exten : ptd::sim()) : @boolean_t::type {
	var len = string::length(exten);
	return false if string::length(path)<=len;
	len = string::substr(path,string::length(path)-len,len);
	return len eq exten;
}
def get_generator_state(language : @compiler::language_t) : @generator_c::state_t {
	match (language) case :pm {
		return generator_c::get_empty_state();
	} case :nla {
		return generator_c::get_empty_state();
	} case :c {
		return generator_c::get_empty_state();
	} case :ast {
		die;
	} case :nl {
		die;
	} case :js {
		return generator_c::get_empty_state();
	} case :java {
		return generator_c::get_empty_state();
	}
}
def get_out_ext(language : @compiler::language_t) : ptd::sim() {
	match (language) case :pm{
		return '.pm';
	} case :nla{
		return '.nla';
	} case :c{
		return '.c';
	} case :ast{
		return '.ast';
	} case :nl{
		return '.nl';
	} case :js{
		return '.js';
	} case :java{
		return '.java';
	}
}
def mk_path(cache_path : ptd::sim(), path : ptd::sim()){
	return if(path eq '.');
	mk_path(cache_path, get_dir(path));
	c_fe_lib::mk_path(cache_path . path);
}
def mk_path_module(file : ptd::rec({dir => ptd::sim(), file => ptd::sim()}), module : ptd::sim(), input : @compiler::input_type) : ptd::rec({src=>ptd::sim(), dst=>@compiler::destination_t}) {
	var dst = input->cache_path . module;
	var src = file->file;
	match (input->language) case :pm{
		return {src=>src,dst=>:pm(dst.'.pm')};
	} case :nla{
		return {src=>src,dst=>:nla(dst.'.nla')};
	} case :c{
		return {src=>src,dst=>:c({c=>dst.'.c',h=>dst.'.h'})};
	} case :nl{
		var len = string::length(file->dir);
		var dir = get_dir(src);
		dst = input->cache_path . dir .'/'. module;
		if(len < string::length(dir)){
			mk_path(input->cache_path,  string::substr2(dir, len+1));
		}
		return {src=>src,dst=>:nl(dst.'.nl')};
	} case :ast{
		return {src=>src,dst=>:ast(dst.'.ast')};
	} case :js{
		return {src=>src,dst=>:js(dst.'.js')};
	} case :java{
		return {src=>src,dst=>:java(dst.'_NL.java')};
	}
}

def get_all_nianio_file(path : ptd::sim()) : ptd::arr(ptd::sim()){
	var ret = [];
	var module_files = ptd::ensure(ptd::arr(ptd::sim()), c_fe_lib::get_module_files_rec(path));
	fora var file (module_files){
		array::push(ref ret, file) if(has_extension(file,'.nl'));
	}
	return ret;
}
def get_files_to_parse(input : @compiler::input_type) : @compiler::module_t{
	var cache_path = input->cache_path;
	var files_to_parse : ptd::arr(ptd::rec({dir => ptd::sim(), file => ptd::sim()})) = [];
	fora var path (input->input_path){
		if (has_extension(path, '.nl')) {
			array::push(ref files_to_parse, {dir => get_dir(path), file => path});
		} else {
			fora var module (get_all_nianio_file(path)){
				array::push(ref files_to_parse, {dir => path, file => module});
			}
		}
	}
	var out_ext = get_out_ext(input->language);
	var file_in_cache = {};
	match (c_fe_lib::get_module_files(cache_path)) case :ok(var ok){
		fora var file (ptd::ensure(ptd::arr(ptd::sim()), ok)){
			continue unless(has_extension(file,out_ext));
			hash::set_value(ref file_in_cache, get_module_name(file), file);
		}
	} case :err(var err){
		return {};
	}
	var parse_file = {};
	fora var file (files_to_parse){
		var module = get_module_name(file->file);
		var path_module = mk_path_module(file, module, input);
		hash::set_value(ref parse_file, module, path_module);
	}
	return parse_file;
}
def parse_module(module : ptd::sim(), src : ptd::sim(), ref errors : @compiler::errors_group_t) 
	: ptd::var({err=>ptd::sim(), ok=>@nast::module_t}){
	c_fe_lib::print('processing '.module.'...');
	try var file = c_fe_lib::file_to_string(src);
	var retpar = nparser::sparse(ptd::ensure(ptd::sim(),file), module);
	match (retpar) case :ok(var ast){
		var ret = module_checker::check_module(ast);
		hash::set_value(ref errors->module_warnings, module, ret->warnings);
		hash::set_value(ref errors->module_errors, module, ret->errors);
		return :err('') unless array::len(ret->errors) == 0;
		return :ok(ast);
	} case :error(var err){
		hash::set_value(ref errors->module_warnings, module, []);
		var my_errors = [];
		fora var error (err) {
			array::push(ref my_errors, {msg=>error->msg, line=>error->line, module=>module});
		}
		hash::set_value(ref errors->module_errors, module, my_errors);
		return :err('');
	}
}
def get_mathematical_func(opt_cli : @compiler::input_type) : ptd::hash(ptd::sim()){
	var hash = {};
	match(c_fe_lib::file_to_string(opt_cli->math_fun)) case :ok(var file){
		c_fe_lib::print('list of mathematical functions loaded');
		var parsed_list = dfile::try_sload(file);
		var list = [];
		match (parsed_list) case :ok(var as_list) {
			list = as_list;
		} case :err(var as_err) {
			c_fe_lib::print('could not parse list of mathematical functions:');
			c_fe_lib::print(as_err);
		}
		fora var name (list){
			hash::set_value(ref hash, name, 1);
		}
	} case :err(var info) {
		c_fe_lib::print('NOT LOAD: list of mathematical functions');
	}
	return hash;
}
def compile_ide(opt_cli : @compiler::input_type) : ptd::void() {
	var cache_time = {};
	var asts = {};
	var to_save = {};
	var to_parse = {};
	var errors : @compiler::errors_group_t = {module_errors=>{}, module_warnings=>{}, type_errors=>{}, type_warnings=>{}, loop_error=>:ok};
	var const_state = post_processing::init(get_mathematical_func(opt_cli), opt_cli->optimization);
	var old_files = {};
	var generator_state = get_generator_state(opt_cli->language);
	loop{
		errors->type_errors = {};
		errors->type_warnings = {};
		errors->loop_error = :ok;
		var nianio_files = get_files_to_parse(opt_cli);
		var changes = 0;
		forh var module, var paths (nianio_files){
			var n_time = c_fe_lib::get_modif_time(paths->src);
			continue if(n_time is :err);
			n_time = n_time as :ok;
			if(hash::has_key(cache_time, module)){
				var time = hash::get_value(cache_time, module);
				continue unless (n_time>time);
			}
			hash::set_value(ref cache_time, module, n_time);
			hash::set_value(ref to_parse, module, paths);
			++changes;
		}
		forh var module, var none (old_files) {
			if (!hash::has_key(nianio_files, module)) {
				++changes;
				hash::delete(ref errors->module_errors, module);
				hash::delete(ref errors->module_warnings, module);
				hash::delete(ref asts, module);
				hash::delete(ref cache_time, module);
				hash::delete(ref to_parse, module);
				hash::delete(ref to_save, module);
				post_processing::clear_module_from_state(ref const_state, module);
				if (opt_cli->language is :c) {
					generator_c::clear_module_from_state(ref generator_state, module);
				}
			}
		}
		old_files = nianio_files;
		if (changes == 0){
			c_fe_lib::sleep(1);
			continue;
		}
		var new_to_parse = {};
		forh var module, var paths (to_parse){
			match (parse_module(module, paths->src, ref errors)) case :ok(var ast){
				hash::set_value(ref asts, module, ast);
				hash::set_value(ref to_save, module, ast);
			} case :err(var m){
				hash::set_value(ref new_to_parse, module, paths);
			}
		}
		to_parse = new_to_parse;
		if(hash::size(to_parse)>0){
			show_and_count_errors(errors, opt_cli);
			c_fe_lib::print(string::lf().'ERROR: while parsing '.hash::size(to_parse).' modules');
			c_fe_lib::print('############################################################');
			continue;
		}
		check_modules(asts, ref errors, opt_cli->deref);
		if (show_and_count_errors(errors, opt_cli) > 0) {
			c_fe_lib::print('############################################################');
			continue;
		}
		if(!(opt_cli->language is :ast || opt_cli->language is :nl)){
			c_fe_lib::print('search constants...');
			var new_to_save = {};
			var modules = translate(to_save, ref const_state);
			match (generate_modules_to_files(modules, nianio_files, opt_cli->cache_path, ref generator_state, opt_cli->language)) case :err(var err) {
				forh var module, var none(err) {
					hash::set_value(ref new_to_save, module, hash::get_value(asts, module));
				}
			} case :ok(var ok) {
			}
			to_save = new_to_save;
		} else {
			var new_to_save = {};
			forh var module, var ast (to_save){
				c_fe_lib::print('saving file: ' . module);
				match(save_module_to_file(ast, hash::get_value(nianio_files, module)->dst)) case :err(var err){
					c_fe_lib::print('ERROR: ' . err);
					hash::set_value(ref new_to_save, module, ast);
				} case :ok(var ok){
				}
			}
			to_save = new_to_save;
		}
		if(hash::size(to_save)>0){
			var msg = 'Can not save '.hash::size(to_save).' files. ';
			c_fe_lib::print(string::lf().'ERROR: ' . msg);
		} else {
			c_fe_lib::exec_cmd(opt_cli->mode as :idex) if opt_cli->mode is :idex;
			c_fe_lib::print(string::lf().'OK: compile, check types and save changes without errors');
		}
		c_fe_lib::print('############################################################');
	}
}
def compile_strict_file(opt_cli : @compiler::input_type) : ptd::void() {
	var asts = {};
	var errors : @compiler::errors_group_t = {module_errors=>{}, module_warnings=>{}, type_errors=>{}, type_warnings=>{}, loop_error=>:ok};
	var error_file = 0;
	var nianio_files = get_files_to_parse(opt_cli);
	forh var module, var paths (nianio_files){
		match (parse_module(module, paths->src, ref errors)) case :ok(var ast){
			hash::set_value(ref asts, module, ast);
		} case :err(var m){
			++error_file;
		}
	}
	if (error_file != 0) {
		show_and_count_errors(errors, opt_cli);
		return;
	}
	check_modules(asts, ref errors, opt_cli->deref);
	if (show_and_count_errors(errors, opt_cli) > 0) {
		return;
	}
	
	if(!(opt_cli->language is :ast || opt_cli->language is :nl)){
		var generator_state = get_generator_state(opt_cli->language);
		c_fe_lib::print('search constants...');
		var const_state = post_processing::init(get_mathematical_func(opt_cli), opt_cli->optimization);
		var modules = translate(asts, ref const_state);
		generate_modules_to_files(modules, nianio_files, opt_cli->cache_path, ref generator_state, opt_cli->language);
	} else {
		forh var module, var ast (asts){
			c_fe_lib::print('saving file: ' . module);
			match(save_module_to_file(ast, hash::get_value(nianio_files, module)->dst)) case :err(var err){
				c_fe_lib::print('ERROR: ' . err);
			} case :ok(var ok){
			}
		}
	}
}
def construct_error_message(error : @tc_types::check_error_t) : ptd::sim() {
	var msg = '';
	msg .= ' mod: '.error->module unless (string::length(error->module) == 0);
	msg .= ' line: '.error->line unless (string::length(error->line) == 0);
	msg .= string::lf().'     '.error->msg;
	return msg;
}
def show_and_count_errors(all_errors : @compiler::errors_group_t, opt_cli : @compiler::input_type) : ptd::sim() {
	var num_warnings = 0;
	var num_errors = 0;
	forh var module, var module_warnings(all_errors->module_warnings) {
		var prefix = 'WAR';
		prefix = 'ERR' if (opt_cli->alarm is :wall);
		fora var warning(module_warnings) {
			c_fe_lib::print(prefix . construct_error_message(warning));
		}
		num_warnings += array::len(module_warnings);
		if (hash::has_key(all_errors->type_warnings, module)) {
			var type_warnings = hash::get_value(all_errors->type_warnings, module);
			fora var warning(type_warnings) {
				c_fe_lib::print(prefix . construct_error_message(warning));
			}
			num_warnings += array::len(type_warnings);
		}
		prefix = 'ERR';
		var module_errors = hash::get_value(all_errors->module_errors, module);
		fora var error(module_errors) {
			c_fe_lib::print('ERR' . construct_error_message(error));
		}
		num_errors += array::len(module_errors);
		if (hash::has_key(all_errors->type_errors, module)) {
			var type_errors = hash::get_value(all_errors->type_errors, module);
			fora var error(type_errors) {
				c_fe_lib::print('ERR' . construct_error_message(error));
			}
			num_errors += array::len(type_errors);
		}
	}
	match (all_errors->loop_error) case :loop(var loops) {
		var loop_str = '';
		fora var el (loops) {
			loop_str .= el . ' -> ';
		}
		c_fe_lib::print('ERR Loop found in module imports: '.loop_str.'. ');
		++num_errors;
	} case :ok{
	}
	
	if (opt_cli->alarm is :wall) {
		num_errors += num_warnings;
		num_warnings = 0;
	}
	c_fe_lib::print('ERR: ' . num_errors . ' WAR: ' . num_warnings);
	return num_errors;
}
def translate(asts : ptd::hash(@nast::module_t), ref post_proc : @post_processing::state_t) : ptd::hash(@nlasm::result_t) {
	var nlasm = {};
	forh var module, var ast (asts){
		var nla_asm = translator::translate(ast);
		hash::set_value(ref nlasm, module, nla_asm);
	}
	post_processing::find(ref post_proc, ref nlasm);
	return nlasm;
}
def check_modules(asts : ptd::hash(@nast::module_t), ref errors : @compiler::errors_group_t, deref : @compiler::deref_t) : ptd::void() {
	c_fe_lib::print('type checking...');
	var ret = type_checker::check_modules(asts, asts);
	var type_errors = array::len(ret->errors);
	fora var err (ret->errors) {
		var old_errors = [];
		if (hash::has_key(errors->type_errors, err->module)) {
			old_errors = hash::get_value(errors->type_errors, err->module);
		}
		array::push(ref old_errors, err);
		hash::set_value(ref errors->type_errors, err->module, old_errors);
	}
	fora var warning (ret->warnings) {
		var old_warnings = [];
		if (hash::has_key(errors->type_warnings, warning->module)) {
			old_warnings = hash::get_value(errors->type_warnings, warning->module);
		}
		array::push(ref old_warnings, warning);
		hash::set_value(ref errors->type_warnings, warning->module, old_warnings);
	}
	c_fe_lib::print('Found '.type_errors.' errors of types. ') unless (type_errors == 0);
	var imports = {};
	forh var module, var ast (asts){
		var mod_import = [];
		fora var import (ast->import){
			array::push(ref mod_import, import->name);
		}
		hash::set_value(ref imports, module, mod_import);
	}
	errors->loop_error = module_checker::search_loops(imports);
	if(deref is :yes) {
		c_fe_lib::print('deleted types: '.array::len(ret->deref->delete));
		c_fe_lib::print('created types: '.array::len(ret->deref->create));
		c_fe_lib::string_to_file(deref as :yes, dfile::ssave(ret->deref));
	}
}
def try_save_file(file : ptd::sim(), path : ptd::sim(), ref error) {
	match (c_fe_lib::string_to_file(path, file)) case :ok(var ok) {
	} case :err (var as_error) {
		c_fe_lib::print('ERROR: ' . as_error);
		error = true;
	}
}
def generate_modules_to_files(modules : ptd::hash(@nlasm::result_t), nianio_files : @compiler::module_t, cache_path : ptd::sim(), 
		ref generator_state : @generator_c::state_t, language : @compiler::language_t) : ptd::var({ok => ptd::sim(), err => ptd::hash(ptd::sim())}) {
	var error_modules = {};
	match (language) case :nla {
		forh var module, var nlasm(modules) {
			var error = false;
			var path = hash::get_value(nianio_files, module)->dst as :nla;
			c_fe_lib::print('saving file: ' . module);
			try_save_file(dfile::ssave(nlasm), path, ref error);
			hash::set_value(ref error_modules, module, '') if (error);
		}
	} case :c {
		var ret = generator_c::generate(modules, ref generator_state);
		var error = false;
		forh var module, var files(ret->modules) {
			error = false;
			var paths = hash::get_value(nianio_files, module)->dst as :c;
			c_fe_lib::print('saving file: ' . module);
			try_save_file(files->c, paths->c, ref error);
			try_save_file(files->h, paths->h, ref error);
			hash::set_value(ref error_modules, module, '') if (error);
		}
		c_fe_lib::print('saving global const file');
		try_save_file(ret->global_const->c, cache_path . 'c_global_const.c', ref error);
		try_save_file(ret->global_const->h, cache_path . 'c_global_const.h', ref error);
	} case :pm {
		forh var module, var nlasm(modules) {
			var error = false;
			var ret = generator_pm::generate(nlasm);
			var path = hash::get_value(nianio_files, module)->dst as :pm;
			c_fe_lib::print('saving file: ' . module);
			try_save_file(ret, path, ref error);
			hash::set_value(ref error_modules, module, '') if (error);
		}
	} case :js {
		forh var module, var nlasm(modules) {
			var error = false;
			var ret = generator_js::generate(nlasm);
			var path = hash::get_value(nianio_files, module)->dst as :js;
			c_fe_lib::print('saving file: ' . module);
			try_save_file(ret, path, ref error);
			hash::set_value(ref error_modules, module, '') if (error);
		}
	} case :java {
		forh var module, var nlasm(modules) {
			var error = false;
			var ret = generator_java::generate(nlasm);
			var path = hash::get_value(nianio_files, module)->dst as :java;
			c_fe_lib::print('saving file: ' . module);
			try_save_file(ret, path, ref error);
			hash::set_value(ref error_modules, module, '') if (error);
		}
	} case :nl {
		die;
	} case :ast {
		die;
	}
	if (hash::size(error_modules) > 0) {
		return :err(error_modules);
	} else {
		return :ok('');
	}
}
def save_module_to_file(ast : @nast::module_t, mod_dst : @compiler::destination_t) : @compiler::file_t {
	match (mod_dst) case :nla(var path) {
		die;
	} case :c(var paths) {
		die;
	} case :pm(var path) {
		die;
	} case :js(var path) {
		die;
	} case :java(var path) {
		die;
	} case :nl(var path) {
		return ptd::ensure(@compiler::file_t, c_fe_lib::string_to_file(path, pretty_printer::print_module_to_str(ast)));
	} case :ast(var path) {
		return ptd::ensure(@compiler::file_t, c_fe_lib::string_to_file(path, dfile::ssave(ast)));
	} case :none {
		die;
	}
}

def get_dir(path : ptd::sim()) : ptd::sim(){
	var pos = string::length(path)-1;
	--pos if (string::substr(path,pos,1) eq '/' || string::substr(path,pos,1) eq '\');
	--pos while (pos>=0 && string::substr(path,pos,1) ne '/' && string::substr(path,pos,1) ne '\');
	return '.' if(pos<=0);
	return string::substr(path,0,pos);
}

def parse_command_line_args(args : ptd::arr(ptd::sim())) : @compiler::input_type {
	var ret = {
		language => :c,
		mode => :strict,
		input_path => ['.'],
		optimization => :o1,
		deref => :no,
		math_fun => get_default_math_file(),
		cache_path => '',
		alarm => :norm,
	};
	var was_input = false;
	var sub_patch_out = get_dir_cache_name();
	for (var i=1; i<array::len(args); ++i) {
		var el = args[i];
		if (string::length(el) >= 2 && (string::substr(el, 0, 2) eq '--')) {
			var opt = string::substr(el, 2, string::length(el) - 2);
			if(opt eq 'deref'){
				ret->deref = :yes('');
			} elsif(opt eq 'nla') {
				ret->language = :nla;
			} elsif(opt eq 'ast') {
				ret->language = :ast;
			} elsif(opt eq 'pm') {
				ret->language = :pm;
			} elsif(opt eq 'c') {
				ret->language = :c;
			} elsif(opt eq 'js') {
				ret->language = :js;
			} elsif(opt eq 'java') {
				ret->language = :java;
			} elsif(opt eq 'nl') {
				ret->language = :nl;
				sub_patch_out = get_dir_pretty_name();
			} elsif(opt eq 'ide') {
				ret->mode = :ide;
			} elsif(opt eq 'idex') {
				++i;
				die unless(i<array::len(args));
				ret->mode = :idex(args[i]);
			} elsif(opt eq 'strict') {
				ret->mode = :strict;
			} elsif(opt eq 'exec') {
				ret->mode = :exec;
			} elsif(opt eq 'o' || opt eq 'out') {
				++i;
				die unless(i<array::len(args));
				ret->cache_path = args[i].'/';
			} elsif(opt eq 'math') {
				++i;
				die unless(i<array::len(args));
				ret->math_fun = args[i];
			} elsif(opt eq 'O0') {
				ret->optimization = :o0;
			} elsif(opt eq 'O1') {
				ret->optimization = :o1;
			} elsif(opt eq 'O2') {
				ret->optimization = :o2;
			} elsif(opt eq 'O3') {
				ret->optimization = :o3;
			} elsif(opt eq 'O4') {
				ret->optimization = :o4;
			} elsif(opt eq 'Wall') {
				ret->alarm = :wall;
			} else {
				c_fe_lib::print('unknown compiler option: ' . el);
			}
		} else {
			ret->input_path = [] unless was_input;
			array::push(ref ret->input_path, el);
			was_input = true;
		}
	}
	if(ret->cache_path eq ''){
			ret->cache_path = './'.sub_patch_out.'/';
	}
	ret->deref = :yes(ret->cache_path.get_default_deref_file()) if ret->deref is :yes;
	return ret;
}
