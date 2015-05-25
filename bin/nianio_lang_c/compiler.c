
/* (c) Atinea Sp z o. o.
 *  Stamp: nianio lang
 */
#include "c_rt_lib.h"
#include "c_global_const.h"
#include "compiler.h"
#include "c_fe_lib.h"
#include "string.h"
#include "hash.h"
#include "array.h"
#include "dfile.h"
#include "ptd.h"
#include "nast.h"
#include "nparser.h"
#include "boolean_t.h"
#include "pretty_printer.h"
#include "generator_c.h"
#include "generator_pm.h"
#include "generator_js.h"
#include "generator_java.h"
#include "translator.h"
#include "nlasm.h"
#include "post_processing.h"
#include "tc_types.h"
#include "type_checker.h"
#include "module_checker.h"
#include "interpreter.h"
#include "nl.h"
#line 1 "compiler.nl"

static ImmT *__const__f = NULL;
void compiler_priv0__const__init();
ImmT compiler_priv0__const__sim(int __nr);
ImmT compiler_priv0__const__sing(int __nr);

ImmT compiler_priv0get_dir_cache_name();
ImmT compiler_priv0get_dir_pretty_name();
ImmT compiler_priv0get_default_deref_file();
ImmT compiler_priv0get_default_math_file();
ImmT compiler_priv0get_known_func();
ImmT compiler_priv0exec_interpreter(ImmT ___nl__0);
ImmT compiler_priv0get_module_name(ImmT ___nl__0);
ImmT compiler_priv0has_extension(ImmT ___nl__0,ImmT ___nl__1);
ImmT compiler_priv0get_generator_state(ImmT ___nl__0);
ImmT compiler_priv0get_out_ext(ImmT ___nl__0);
ImmT compiler_priv0mk_path(ImmT ___nl__0,ImmT ___nl__1);
ImmT compiler_priv0mk_path_module(ImmT ___nl__0,ImmT ___nl__1,ImmT ___nl__2);
ImmT compiler_priv0get_all_nianio_file(ImmT ___nl__0);
ImmT compiler_priv0get_files_to_parse(ImmT ___nl__0);
ImmT compiler_priv0parse_module(ImmT ___nl__0,ImmT ___nl__1,ImmT * ___ref___2);
ImmT compiler_priv0get_mathematical_func(ImmT ___nl__0);
ImmT compiler_priv0compile_ide(ImmT ___nl__0);
ImmT compiler_priv0compile_strict_file(ImmT ___nl__0);
ImmT compiler_priv0construct_error_message(ImmT ___nl__0);
ImmT compiler_priv0show_and_count_errors(ImmT ___nl__0,ImmT ___nl__1);
ImmT compiler_priv0translate(ImmT ___nl__0,ImmT * ___ref___1);
ImmT compiler_priv0check_modules(ImmT ___nl__0,ImmT * ___ref___1,ImmT ___nl__2);
ImmT compiler_priv0try_save_file(ImmT ___nl__0,ImmT ___nl__1,ImmT * ___ref___2);
ImmT compiler_priv0generate_modules_to_files(ImmT ___nl__0,ImmT ___nl__1,ImmT ___nl__2,ImmT * ___ref___3,ImmT ___nl__4);
ImmT compiler_priv0save_module_to_file(ImmT ___nl__0,ImmT ___nl__1);
ImmT compiler_priv0get_dir(ImmT ___nl__0);
ImmT compiler_priv0parse_command_line_args(ImmT ___nl__0);


ImmT compiler_priv0get_dir_cache_name(){
compiler_priv0__const__init();
return compiler_priv0__const__sing(0);}
ImmT compiler_priv0get_dir_cache_name0cal() {
compiler_priv0__const__init();
ImmT ___nl__0 = NULL;
#line 30
c_rt_lib0move(&___nl__0,___get_global_const(8));
#line 30
return ___nl__0;
#line 30
c_rt_lib0clear(&___nl__0);
#line 30
return NULL;
}

ImmT compiler_priv0get_dir_pretty_name(){
compiler_priv0__const__init();
return compiler_priv0__const__sing(1);}
ImmT compiler_priv0get_dir_pretty_name0cal() {
compiler_priv0__const__init();
ImmT ___nl__0 = NULL;
#line 33
c_rt_lib0move(&___nl__0,___get_global_const(9));
#line 33
return ___nl__0;
#line 33
c_rt_lib0clear(&___nl__0);
#line 33
return NULL;
}

ImmT compiler_priv0get_default_deref_file(){
compiler_priv0__const__init();
return compiler_priv0__const__sing(2);}
ImmT compiler_priv0get_default_deref_file0cal() {
compiler_priv0__const__init();
ImmT ___nl__0 = NULL;
#line 36
c_rt_lib0move(&___nl__0,___get_global_const(10));
#line 36
return ___nl__0;
#line 36
c_rt_lib0clear(&___nl__0);
#line 36
return NULL;
}

ImmT compiler_priv0get_default_math_file(){
compiler_priv0__const__init();
return compiler_priv0__const__sing(3);}
ImmT compiler_priv0get_default_math_file0cal() {
compiler_priv0__const__init();
ImmT ___nl__0 = NULL;
#line 39
c_rt_lib0move(&___nl__0,___get_global_const(11));
#line 39
return ___nl__0;
#line 39
c_rt_lib0clear(&___nl__0);
#line 39
return NULL;
}

ImmT compiler0parse_check_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "compiler0parse_check_t");
return compiler0parse_check_t();}
ImmT compiler0parse_check_t(){
compiler_priv0__const__init();
return compiler_priv0__const__sing(4);}
ImmT compiler0parse_check_t0cal() {
compiler_priv0__const__init();
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
#line 43
c_rt_lib0move(&___nl__3, c_rt_lib0func_new(nast0module_t0ptr, ___get_global_const(12), ___get_global_const(13)));
#line 43
c_rt_lib0move(&___nl__3, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__3));
#line 43
c_rt_lib0move(&___nl__2, ptd0hash(___nl__3));
#line 43
c_rt_lib0clear(&___nl__3);
#line 43
c_rt_lib0move(&___nl__4, ptd0sim());
#line 43
c_rt_lib0move(&___nl__3, ptd0arr(___nl__4));
#line 43
c_rt_lib0clear(&___nl__4);
#line 43
c_rt_lib0move(&___nl__4, c_rt_lib0func_new(tc_types0deref_types0ptr, ___get_global_const(14), ___get_global_const(15)));
#line 43
c_rt_lib0move(&___nl__4, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__4));
#line 43
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(3, ___get_global_const(16), ___nl__2, ___get_global_const(17), ___nl__3, ___get_global_const(18), ___nl__4));
#line 43
c_rt_lib0clear(&___nl__2);
#line 43
c_rt_lib0clear(&___nl__3);
#line 43
c_rt_lib0clear(&___nl__4);
#line 43
c_rt_lib0move(&___nl__0, ptd0rec(___nl__1));
#line 43
c_rt_lib0clear(&___nl__1);
#line 43
return ___nl__0;
#line 43
c_rt_lib0clear(&___nl__0);
#line 43
return NULL;
}

ImmT compiler0errors_hash_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "compiler0errors_hash_t");
return compiler0errors_hash_t();}
ImmT compiler0errors_hash_t(){
compiler_priv0__const__init();
return compiler_priv0__const__sing(5);}
ImmT compiler0errors_hash_t0cal() {
compiler_priv0__const__init();
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
#line 46
c_rt_lib0move(&___nl__2, c_rt_lib0func_new(tc_types0check_error_t0ptr, ___get_global_const(14), ___get_global_const(19)));
#line 46
c_rt_lib0move(&___nl__2, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__2));
#line 46
c_rt_lib0move(&___nl__1, ptd0arr(___nl__2));
#line 46
c_rt_lib0clear(&___nl__2);
#line 46
c_rt_lib0move(&___nl__0, ptd0hash(___nl__1));
#line 46
c_rt_lib0clear(&___nl__1);
#line 46
return ___nl__0;
#line 46
c_rt_lib0clear(&___nl__0);
#line 46
return NULL;
}

ImmT compiler0errors_group_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "compiler0errors_group_t");
return compiler0errors_group_t();}
ImmT compiler0errors_group_t(){
compiler_priv0__const__init();
return compiler_priv0__const__sing(6);}
ImmT compiler0errors_group_t0cal() {
compiler_priv0__const__init();
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
#line 49
c_rt_lib0move(&___nl__2, c_rt_lib0func_new(compiler0errors_hash_t0ptr, ___get_global_const(20), ___get_global_const(21)));
#line 49
c_rt_lib0move(&___nl__2, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__2));
#line 49
c_rt_lib0move(&___nl__3, c_rt_lib0func_new(compiler0errors_hash_t0ptr, ___get_global_const(20), ___get_global_const(21)));
#line 49
c_rt_lib0move(&___nl__3, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__3));
#line 49
c_rt_lib0move(&___nl__4, c_rt_lib0func_new(compiler0errors_hash_t0ptr, ___get_global_const(20), ___get_global_const(21)));
#line 49
c_rt_lib0move(&___nl__4, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__4));
#line 49
c_rt_lib0move(&___nl__5, c_rt_lib0func_new(compiler0errors_hash_t0ptr, ___get_global_const(20), ___get_global_const(21)));
#line 49
c_rt_lib0move(&___nl__5, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__5));
#line 49
c_rt_lib0move(&___nl__6, c_rt_lib0func_new(module_checker0ret_t0ptr, ___get_global_const(22), ___get_global_const(23)));
#line 49
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__6));
#line 49
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(5, ___get_global_const(24), ___nl__2, ___get_global_const(25), ___nl__3, ___get_global_const(26), ___nl__4, ___get_global_const(27), ___nl__5, ___get_global_const(28), ___nl__6));
#line 49
c_rt_lib0clear(&___nl__2);
#line 49
c_rt_lib0clear(&___nl__3);
#line 49
c_rt_lib0clear(&___nl__4);
#line 49
c_rt_lib0clear(&___nl__5);
#line 49
c_rt_lib0clear(&___nl__6);
#line 49
c_rt_lib0move(&___nl__0, ptd0rec(___nl__1));
#line 49
c_rt_lib0clear(&___nl__1);
#line 49
return ___nl__0;
#line 49
c_rt_lib0clear(&___nl__0);
#line 49
return NULL;
}

ImmT compiler0language_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "compiler0language_t");
return compiler0language_t();}
ImmT compiler0language_t(){
compiler_priv0__const__init();
return compiler_priv0__const__sing(7);}
ImmT compiler0language_t0cal() {
compiler_priv0__const__init();
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
#line 58
c_rt_lib0move(&___nl__2, ptd0none());
#line 58
c_rt_lib0move(&___nl__3, ptd0none());
#line 58
c_rt_lib0move(&___nl__4, ptd0none());
#line 58
c_rt_lib0move(&___nl__5, ptd0none());
#line 58
c_rt_lib0move(&___nl__6, ptd0none());
#line 58
c_rt_lib0move(&___nl__7, ptd0none());
#line 58
c_rt_lib0move(&___nl__8, ptd0none());
#line 58
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(7, ___get_global_const(29), ___nl__2, ___get_global_const(30), ___nl__3, ___get_global_const(31), ___nl__4, ___get_global_const(32), ___nl__5, ___get_global_const(33), ___nl__6, ___get_global_const(34), ___nl__7, ___get_global_const(35), ___nl__8));
#line 58
c_rt_lib0clear(&___nl__2);
#line 58
c_rt_lib0clear(&___nl__3);
#line 58
c_rt_lib0clear(&___nl__4);
#line 58
c_rt_lib0clear(&___nl__5);
#line 58
c_rt_lib0clear(&___nl__6);
#line 58
c_rt_lib0clear(&___nl__7);
#line 58
c_rt_lib0clear(&___nl__8);
#line 58
c_rt_lib0move(&___nl__0, ptd0var(___nl__1));
#line 58
c_rt_lib0clear(&___nl__1);
#line 58
return ___nl__0;
#line 58
c_rt_lib0clear(&___nl__0);
#line 58
return NULL;
}

ImmT compiler0destination_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "compiler0destination_t");
return compiler0destination_t();}
ImmT compiler0destination_t(){
compiler_priv0__const__init();
return compiler_priv0__const__sing(8);}
ImmT compiler0destination_t0cal() {
compiler_priv0__const__init();
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
ImmT ___nl__9 = NULL;
#line 61
c_rt_lib0move(&___nl__2, ptd0sim());
#line 61
c_rt_lib0move(&___nl__3, ptd0sim());
#line 61
c_rt_lib0move(&___nl__6, ptd0sim());
#line 61
c_rt_lib0move(&___nl__7, ptd0sim());
#line 61
c_rt_lib0move(&___nl__5, c_rt_lib0hash_mk(2, ___get_global_const(31), ___nl__6, ___get_global_const(36), ___nl__7));
#line 61
c_rt_lib0clear(&___nl__6);
#line 61
c_rt_lib0clear(&___nl__7);
#line 61
c_rt_lib0move(&___nl__4, ptd0rec(___nl__5));
#line 61
c_rt_lib0clear(&___nl__5);
#line 61
c_rt_lib0move(&___nl__5, ptd0sim());
#line 61
c_rt_lib0move(&___nl__6, ptd0sim());
#line 61
c_rt_lib0move(&___nl__7, ptd0sim());
#line 61
c_rt_lib0move(&___nl__8, ptd0sim());
#line 61
c_rt_lib0move(&___nl__9, ptd0none());
#line 61
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(8, ___get_global_const(29), ___nl__2, ___get_global_const(30), ___nl__3, ___get_global_const(31), ___nl__4, ___get_global_const(32), ___nl__5, ___get_global_const(33), ___nl__6, ___get_global_const(34), ___nl__7, ___get_global_const(35), ___nl__8, ___get_global_const(37), ___nl__9));
#line 61
c_rt_lib0clear(&___nl__2);
#line 61
c_rt_lib0clear(&___nl__3);
#line 61
c_rt_lib0clear(&___nl__4);
#line 61
c_rt_lib0clear(&___nl__5);
#line 61
c_rt_lib0clear(&___nl__6);
#line 61
c_rt_lib0clear(&___nl__7);
#line 61
c_rt_lib0clear(&___nl__8);
#line 61
c_rt_lib0clear(&___nl__9);
#line 61
c_rt_lib0move(&___nl__0, ptd0var(___nl__1));
#line 61
c_rt_lib0clear(&___nl__1);
#line 61
return ___nl__0;
#line 61
c_rt_lib0clear(&___nl__0);
#line 61
return NULL;
}

ImmT compiler0module_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "compiler0module_t");
return compiler0module_t();}
ImmT compiler0module_t(){
compiler_priv0__const__init();
return compiler_priv0__const__sing(9);}
ImmT compiler0module_t0cal() {
compiler_priv0__const__init();
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
#line 64
c_rt_lib0move(&___nl__3, ptd0sim());
#line 64
c_rt_lib0move(&___nl__4, c_rt_lib0func_new(compiler0destination_t0ptr, ___get_global_const(20), ___get_global_const(38)));
#line 64
c_rt_lib0move(&___nl__4, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__4));
#line 64
c_rt_lib0move(&___nl__2, c_rt_lib0hash_mk(2, ___get_global_const(39), ___nl__3, ___get_global_const(40), ___nl__4));
#line 64
c_rt_lib0clear(&___nl__3);
#line 64
c_rt_lib0clear(&___nl__4);
#line 64
c_rt_lib0move(&___nl__1, ptd0rec(___nl__2));
#line 64
c_rt_lib0clear(&___nl__2);
#line 64
c_rt_lib0move(&___nl__0, ptd0hash(___nl__1));
#line 64
c_rt_lib0clear(&___nl__1);
#line 64
return ___nl__0;
#line 64
c_rt_lib0clear(&___nl__0);
#line 64
return NULL;
}

ImmT compiler0deref_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "compiler0deref_t");
return compiler0deref_t();}
ImmT compiler0deref_t(){
compiler_priv0__const__init();
return compiler_priv0__const__sing(10);}
ImmT compiler0deref_t0cal() {
compiler_priv0__const__init();
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
#line 67
c_rt_lib0move(&___nl__2, ptd0sim());
#line 67
c_rt_lib0move(&___nl__3, ptd0none());
#line 67
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(2, ___get_global_const(41), ___nl__2, ___get_global_const(42), ___nl__3));
#line 67
c_rt_lib0clear(&___nl__2);
#line 67
c_rt_lib0clear(&___nl__3);
#line 67
c_rt_lib0move(&___nl__0, ptd0var(___nl__1));
#line 67
c_rt_lib0clear(&___nl__1);
#line 67
return ___nl__0;
#line 67
c_rt_lib0clear(&___nl__0);
#line 67
return NULL;
}

ImmT compiler0try_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "compiler0try_t");
return compiler0try_t();}
ImmT compiler0try_t(){
compiler_priv0__const__init();
return compiler_priv0__const__sing(11);}
ImmT compiler0try_t0cal() {
compiler_priv0__const__init();
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
#line 70
c_rt_lib0move(&___nl__2, ptd0sim());
#line 70
c_rt_lib0move(&___nl__3, ptd0sim());
#line 70
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(2, ___get_global_const(43), ___nl__2, ___get_global_const(44), ___nl__3));
#line 70
c_rt_lib0clear(&___nl__2);
#line 70
c_rt_lib0clear(&___nl__3);
#line 70
c_rt_lib0move(&___nl__0, ptd0var(___nl__1));
#line 70
c_rt_lib0clear(&___nl__1);
#line 70
return ___nl__0;
#line 70
c_rt_lib0clear(&___nl__0);
#line 70
return NULL;
}

ImmT compiler0input_type0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "compiler0input_type");
return compiler0input_type();}
ImmT compiler0input_type(){
compiler_priv0__const__init();
return compiler_priv0__const__sing(12);}
ImmT compiler0input_type0cal() {
compiler_priv0__const__init();
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
ImmT ___nl__9 = NULL;
ImmT ___nl__10 = NULL;
ImmT ___nl__11 = NULL;
ImmT ___nl__12 = NULL;
#line 73
c_rt_lib0move(&___nl__3, ptd0sim());
#line 73
c_rt_lib0move(&___nl__2, ptd0arr(___nl__3));
#line 73
c_rt_lib0clear(&___nl__3);
#line 73
c_rt_lib0move(&___nl__3, ptd0sim());
#line 73
c_rt_lib0move(&___nl__4, c_rt_lib0func_new(compiler0deref_t0ptr, ___get_global_const(20), ___get_global_const(45)));
#line 73
c_rt_lib0move(&___nl__4, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__4));
#line 73
c_rt_lib0move(&___nl__7, ptd0none());
#line 73
c_rt_lib0move(&___nl__8, ptd0none());
#line 73
c_rt_lib0move(&___nl__9, ptd0none());
#line 73
c_rt_lib0move(&___nl__10, ptd0none());
#line 73
c_rt_lib0move(&___nl__11, ptd0none());
#line 73
c_rt_lib0move(&___nl__6, c_rt_lib0hash_mk(5, ___get_global_const(46), ___nl__7, ___get_global_const(47), ___nl__8, ___get_global_const(48), ___nl__9, ___get_global_const(49), ___nl__10, ___get_global_const(50), ___nl__11));
#line 73
c_rt_lib0clear(&___nl__7);
#line 73
c_rt_lib0clear(&___nl__8);
#line 73
c_rt_lib0clear(&___nl__9);
#line 73
c_rt_lib0clear(&___nl__10);
#line 73
c_rt_lib0clear(&___nl__11);
#line 73
c_rt_lib0move(&___nl__5, ptd0var(___nl__6));
#line 73
c_rt_lib0clear(&___nl__6);
#line 73
c_rt_lib0move(&___nl__6, ptd0sim());
#line 73
c_rt_lib0move(&___nl__9, ptd0none());
#line 73
c_rt_lib0move(&___nl__10, ptd0none());
#line 73
c_rt_lib0move(&___nl__11, ptd0none());
#line 73
c_rt_lib0move(&___nl__12, ptd0sim());
#line 73
c_rt_lib0move(&___nl__8, c_rt_lib0hash_mk(4, ___get_global_const(51), ___nl__9, ___get_global_const(52), ___nl__10, ___get_global_const(53), ___nl__11, ___get_global_const(54), ___nl__12));
#line 73
c_rt_lib0clear(&___nl__9);
#line 73
c_rt_lib0clear(&___nl__10);
#line 73
c_rt_lib0clear(&___nl__11);
#line 73
c_rt_lib0clear(&___nl__12);
#line 73
c_rt_lib0move(&___nl__7, ptd0var(___nl__8));
#line 73
c_rt_lib0clear(&___nl__8);
#line 73
c_rt_lib0move(&___nl__8, c_rt_lib0func_new(compiler0language_t0ptr, ___get_global_const(20), ___get_global_const(55)));
#line 73
c_rt_lib0move(&___nl__8, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__8));
#line 73
c_rt_lib0move(&___nl__11, ptd0none());
#line 73
c_rt_lib0move(&___nl__12, ptd0none());
#line 73
c_rt_lib0move(&___nl__10, c_rt_lib0hash_mk(2, ___get_global_const(56), ___nl__11, ___get_global_const(57), ___nl__12));
#line 73
c_rt_lib0clear(&___nl__11);
#line 73
c_rt_lib0clear(&___nl__12);
#line 73
c_rt_lib0move(&___nl__9, ptd0var(___nl__10));
#line 73
c_rt_lib0clear(&___nl__10);
#line 73
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(8, ___get_global_const(58), ___nl__2, ___get_global_const(59), ___nl__3, ___get_global_const(60), ___nl__4, ___get_global_const(61), ___nl__5, ___get_global_const(62), ___nl__6, ___get_global_const(63), ___nl__7, ___get_global_const(64), ___nl__8, ___get_global_const(65), ___nl__9));
#line 73
c_rt_lib0clear(&___nl__2);
#line 73
c_rt_lib0clear(&___nl__3);
#line 73
c_rt_lib0clear(&___nl__4);
#line 73
c_rt_lib0clear(&___nl__5);
#line 73
c_rt_lib0clear(&___nl__6);
#line 73
c_rt_lib0clear(&___nl__7);
#line 73
c_rt_lib0clear(&___nl__8);
#line 73
c_rt_lib0clear(&___nl__9);
#line 73
c_rt_lib0move(&___nl__0, ptd0rec(___nl__1));
#line 73
c_rt_lib0clear(&___nl__1);
#line 73
return ___nl__0;
#line 73
c_rt_lib0clear(&___nl__0);
#line 73
return NULL;
}

ImmT compiler0file_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "compiler0file_t");
return compiler0file_t();}
ImmT compiler0file_t(){
compiler_priv0__const__init();
return compiler_priv0__const__sing(13);}
ImmT compiler0file_t0cal() {
compiler_priv0__const__init();
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
#line 85
c_rt_lib0move(&___nl__2, ptd0sim());
#line 85
c_rt_lib0move(&___nl__3, ptd0sim());
#line 85
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(2, ___get_global_const(44), ___nl__2, ___get_global_const(43), ___nl__3));
#line 85
c_rt_lib0clear(&___nl__2);
#line 85
c_rt_lib0clear(&___nl__3);
#line 85
c_rt_lib0move(&___nl__0, ptd0var(___nl__1));
#line 85
c_rt_lib0clear(&___nl__1);
#line 85
return ___nl__0;
#line 85
c_rt_lib0clear(&___nl__0);
#line 85
return NULL;
}

ImmT compiler0compile0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "compiler0compile");
return compiler0compile(_tab[0]);}
ImmT compiler0compile(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
compiler_priv0__const__init();
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
#line 88
c_rt_lib0move(&___nl__1, compiler_priv0parse_command_line_args(___nl__0));
#line 89
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(59)));
#line 89
c_rt_lib0delete(c_fe_lib0mk_path(___nl__2));
#line 89
c_rt_lib0clear(&___nl__2);
#line 90
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(63)));
#line 90
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__2, ___get_global_const(51)));
#line 90
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 90
if(c_rt_lib0check_true_native(___nl__2)){ goto label_2;}
#line 91
c_rt_lib0move(&___nl__3,___get_global_const(66));
#line 91
c_rt_lib0delete(c_fe_lib0print(___nl__3));
#line 91
c_rt_lib0clear(&___nl__3);
#line 92
c_rt_lib0delete(compiler_priv0compile_strict_file(___nl__1));
#line 93
goto label_1;
#line 93
label_2:
#line 93
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(63)));
#line 93
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__2, ___get_global_const(53)));
#line 93
if(c_rt_lib0check_true_native(___nl__2)){ goto label_4;}
#line 93
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(63)));
#line 93
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__2, ___get_global_const(54)));
#line 93
label_4:
#line 93
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 93
if(c_rt_lib0check_true_native(___nl__2)){ goto label_3;}
#line 94
c_rt_lib0move(&___nl__3,___get_global_const(67));
#line 94
c_rt_lib0delete(c_fe_lib0print(___nl__3));
#line 94
c_rt_lib0clear(&___nl__3);
#line 95
c_rt_lib0delete(compiler_priv0compile_ide(___nl__1));
#line 96
goto label_1;
#line 96
label_3:
#line 96
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(63)));
#line 96
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__2, ___get_global_const(52)));
#line 96
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 96
if(c_rt_lib0check_true_native(___nl__2)){ goto label_5;}
#line 97
c_rt_lib0delete(compiler_priv0exec_interpreter(___nl__1));
#line 98
goto label_1;
#line 98
label_5:
#line 99
c_rt_lib0move(&___nl__3, c_rt_lib0array_mk(0));
#line 99
nl_die_arg(___nl__3);
#line 99
c_rt_lib0clear(&___nl__3);
#line 100
goto label_1;
#line 100
label_1:
#line 100
c_rt_lib0clear(&___nl__2);
#line 100
c_rt_lib0clear(&___nl__1);
#line 100
c_rt_lib0clear(&___nl__0);
#line 100
return NULL;
}

ImmT compiler_priv0get_known_func(){
compiler_priv0__const__init();
return compiler_priv0__const__sing(14);}
ImmT compiler_priv0get_known_func0cal() {
compiler_priv0__const__init();
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
#line 103
c_rt_lib0move(&___nl__0, c_rt_lib0hash_mk(0));
#line 104
c_rt_lib0move(&___nl__1,___get_global_const(68));
#line 104
c_rt_lib0move(&___nl__3, c_rt_lib0func_new(nl0print0ptr, ___get_global_const(32), ___get_global_const(69)));
#line 104
c_rt_lib0move(&___nl__3, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__3));
#line 104
c_rt_lib0move(&___nl__4, c_rt_lib0ov_mk_none(___get_global_const(70)));
#line 104
c_rt_lib0move(&___nl__6, ptd0sim());
#line 104
c_rt_lib0move(&___nl__5, c_rt_lib0array_mk(1, ___nl__6));
#line 104
c_rt_lib0clear(&___nl__6);
#line 104
c_rt_lib0move(&___nl__2, c_rt_lib0hash_mk(3, ___get_global_const(71), ___nl__3, ___get_global_const(72), ___nl__4, ___get_global_const(73), ___nl__5));
#line 104
c_rt_lib0clear(&___nl__3);
#line 104
c_rt_lib0clear(&___nl__4);
#line 104
c_rt_lib0clear(&___nl__5);
#line 104
c_rt_lib0delete(hash0set_value(&___nl__0, ___nl__1, ___nl__2));
#line 104
c_rt_lib0clear(&___nl__2);
#line 104
c_rt_lib0clear(&___nl__1);
#line 105
return ___nl__0;
#line 105
c_rt_lib0clear(&___nl__0);
#line 105
return NULL;
}

ImmT compiler_priv0exec_interpreter(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
compiler_priv0__const__init();
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
ImmT ___nl__9 = NULL;
ImmT ___nl__10 = NULL;
ImmT ___nl__11 = NULL;
ImmT ___nl__12 = NULL;
ImmT ___nl__13 = NULL;
ImmT ___nl__14 = NULL;
ImmT ___nl__15 = NULL;
ImmT ___nl__16 = NULL;
ImmT ___nl__17 = NULL;
ImmT ___nl__18 = NULL;
ImmT ___nl__19 = NULL;
#line 108
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(0));
#line 109
c_rt_lib0move(&___nl__3, c_rt_lib0hash_mk(0));
#line 109
c_rt_lib0move(&___nl__4, c_rt_lib0hash_mk(0));
#line 109
c_rt_lib0move(&___nl__5, c_rt_lib0hash_mk(0));
#line 109
c_rt_lib0move(&___nl__6, c_rt_lib0hash_mk(0));
#line 109
c_rt_lib0move(&___nl__7, c_rt_lib0ov_mk_none(___get_global_const(44)));
#line 109
c_rt_lib0move(&___nl__2, c_rt_lib0hash_mk(5, ___get_global_const(24), ___nl__3, ___get_global_const(25), ___nl__4, ___get_global_const(26), ___nl__5, ___get_global_const(27), ___nl__6, ___get_global_const(28), ___nl__7));
#line 109
c_rt_lib0clear(&___nl__3);
#line 109
c_rt_lib0clear(&___nl__4);
#line 109
c_rt_lib0clear(&___nl__5);
#line 109
c_rt_lib0clear(&___nl__6);
#line 109
c_rt_lib0clear(&___nl__7);
#line 110
c_rt_lib0move(&___nl__3,___get_global_const(1));
#line 111
c_rt_lib0move(&___nl__4, compiler_priv0get_files_to_parse(___nl__0));
#line 112
c_rt_lib0move(&___nl__7, c_rt_lib0init_iter(___nl__4));
#line 112
label_3:
#line 112
c_rt_lib0move(&___nl__5, c_rt_lib0is_end_hash(___nl__7));
#line 112
if(c_rt_lib0check_true_native(___nl__5)){ goto label_1;}
#line 112
c_rt_lib0move(&___nl__5, c_rt_lib0get_key_iter(___nl__7));
#line 112
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value(___nl__4, ___nl__5));
#line 113
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__6, ___get_global_const(39)));
#line 113
c_rt_lib0move(&___nl__8, compiler_priv0parse_module(___nl__5, ___nl__9, &___nl__2));
#line 113
c_rt_lib0clear(&___nl__9);
#line 113
c_rt_lib0move(&___nl__9, c_rt_lib0priv_is(___nl__8, ___get_global_const(44)));
#line 113
if(c_rt_lib0check_true_native(___nl__9)){ goto label_5;}
#line 115
c_rt_lib0move(&___nl__9, c_rt_lib0priv_is(___nl__8, ___get_global_const(43)));
#line 115
if(c_rt_lib0check_true_native(___nl__9)){ goto label_6;}
#line 115
c_rt_lib0move(&___nl__9,___get_global_const(74));
#line 115
c_rt_lib0move(&___nl__9, c_rt_lib0array_mk(2, ___nl__9, ___nl__8));
#line 115
nl_die_arg(___nl__9);
#line 113
label_5:
#line 113
c_rt_lib0move(&___nl__10, c_rt_lib0priv_as(___nl__8, ___get_global_const(44)));
#line 114
c_rt_lib0delete(hash0set_value(&___nl__1, ___nl__5, ___nl__10));
#line 114
c_rt_lib0clear(&___nl__10);
#line 115
goto label_4;
#line 115
label_6:
#line 115
c_rt_lib0move(&___nl__10, c_rt_lib0priv_as(___nl__8, ___get_global_const(43)));
#line 116
c_rt_lib0move(&___nl__11,___get_global_const(2));
#line 116
c_rt_lib0move(&___nl__3, c_rt_lib0add_mod(___nl__3, ___nl__11));
#line 116
c_rt_lib0clear(&___nl__11);
#line 116
c_rt_lib0clear(&___nl__10);
#line 117
goto label_4;
#line 117
label_4:
#line 117
c_rt_lib0clear(&___nl__8);
#line 117
c_rt_lib0clear(&___nl__9);
#line 118
c_rt_lib0move(&___nl__7, c_rt_lib0next_iter(___nl__7));
#line 118
goto label_3;
#line 118
label_1:
#line 118
c_rt_lib0clear(&___nl__5);
#line 118
c_rt_lib0clear(&___nl__6);
#line 118
c_rt_lib0clear(&___nl__7);
#line 119
c_rt_lib0move(&___nl__5,___get_global_const(1));
#line 119
c_rt_lib0move(&___nl__5, c_rt_lib0num_ne(___nl__3, ___nl__5));
#line 119
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 119
if(c_rt_lib0check_true_native(___nl__5)){ goto label_8;}
#line 120
c_rt_lib0delete(compiler_priv0show_and_count_errors(___nl__2, ___nl__0));
#line 121
c_rt_lib0clear(&___nl__0);
#line 121
c_rt_lib0clear(&___nl__1);
#line 121
c_rt_lib0clear(&___nl__2);
#line 121
c_rt_lib0clear(&___nl__3);
#line 121
c_rt_lib0clear(&___nl__4);
#line 121
c_rt_lib0clear(&___nl__5);
#line 121
return NULL;
#line 122
goto label_8;
#line 122
label_8:
#line 122
c_rt_lib0clear(&___nl__5);
#line 123
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(60)));
#line 123
c_rt_lib0delete(compiler_priv0check_modules(___nl__1, &___nl__2, ___nl__5));
#line 123
c_rt_lib0clear(&___nl__5);
#line 124
c_rt_lib0move(&___nl__5, compiler_priv0show_and_count_errors(___nl__2, ___nl__0));
#line 124
c_rt_lib0move(&___nl__6,___get_global_const(1));
#line 124
c_rt_lib0move(&___nl__5, c_rt_lib0gt(___nl__5, ___nl__6));
#line 124
c_rt_lib0clear(&___nl__6);
#line 124
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 124
if(c_rt_lib0check_true_native(___nl__5)){ goto label_10;}
#line 125
c_rt_lib0clear(&___nl__0);
#line 125
c_rt_lib0clear(&___nl__1);
#line 125
c_rt_lib0clear(&___nl__2);
#line 125
c_rt_lib0clear(&___nl__3);
#line 125
c_rt_lib0clear(&___nl__4);
#line 125
c_rt_lib0clear(&___nl__5);
#line 125
return NULL;
#line 126
goto label_10;
#line 126
label_10:
#line 126
c_rt_lib0clear(&___nl__5);
#line 128
c_rt_lib0move(&___nl__6, c_rt_lib0hash_mk(0));
#line 128
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(61)));
#line 128
c_rt_lib0move(&___nl__5, post_processing0init(___nl__6, ___nl__7));
#line 128
c_rt_lib0clear(&___nl__7);
#line 128
c_rt_lib0clear(&___nl__6);
#line 129
c_rt_lib0move(&___nl__6, compiler_priv0translate(___nl__1, &___nl__5));
#line 130
c_rt_lib0move(&___nl__7, c_rt_lib0array_mk(0));
#line 131
c_rt_lib0move(&___nl__8,___get_global_const(0));
#line 132
c_rt_lib0move(&___nl__11, c_rt_lib0init_iter(___nl__6));
#line 132
label_13:
#line 132
c_rt_lib0move(&___nl__9, c_rt_lib0is_end_hash(___nl__11));
#line 132
if(c_rt_lib0check_true_native(___nl__9)){ goto label_11;}
#line 132
c_rt_lib0move(&___nl__9, c_rt_lib0get_key_iter(___nl__11));
#line 132
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value(___nl__6, ___nl__9));
#line 133
c_rt_lib0move(&___nl__12, c_rt_lib0hash_get_value_dec(___nl__10, ___get_global_const(75)));
#line 133
c_rt_lib0move(&___nl__14,___get_global_const(1));
#line 133
c_rt_lib0move(&___nl__15,___get_global_const(2));
#line 133
c_rt_lib0move(&___nl__16, c_rt_lib0array_len(___nl__12));
#line 133
label_16:
#line 133
c_rt_lib0move(&___nl__17, c_rt_lib0ge(___nl__14, ___nl__16));
#line 133
if(c_rt_lib0check_true_native(___nl__17)){ goto label_14;}
#line 133
c_rt_lib0move(&___nl__13, c_rt_lib0array_get(___nl__12, ___nl__14));
#line 134
c_rt_lib0move(&___nl__18, c_rt_lib0hash_get_value_dec(___nl__13, ___get_global_const(76)));
#line 134
c_rt_lib0move(&___nl__19,___get_global_const(77));
#line 134
c_rt_lib0move(&___nl__18, c_rt_lib0eq(___nl__18, ___nl__19));
#line 134
c_rt_lib0clear(&___nl__19);
#line 134
c_rt_lib0move(&___nl__18, c_rt_lib0not(___nl__18));
#line 134
if(c_rt_lib0check_true_native(___nl__18)){ goto label_18;}
#line 135
c_rt_lib0copy(&___nl__8, ___nl__9);
#line 136
goto label_18;
#line 136
label_18:
#line 136
c_rt_lib0clear(&___nl__18);
#line 137
c_rt_lib0move(&___nl__14, c_rt_lib0add_mod(___nl__14, ___nl__15));
#line 137
goto label_16;
#line 137
label_14:
#line 137
c_rt_lib0clear(&___nl__12);
#line 137
c_rt_lib0clear(&___nl__13);
#line 137
c_rt_lib0clear(&___nl__14);
#line 137
c_rt_lib0clear(&___nl__15);
#line 137
c_rt_lib0clear(&___nl__16);
#line 137
c_rt_lib0clear(&___nl__17);
#line 138
c_rt_lib0delete(array0push(&___nl__7, ___nl__10));
#line 139
c_rt_lib0move(&___nl__11, c_rt_lib0next_iter(___nl__11));
#line 139
goto label_13;
#line 139
label_11:
#line 139
c_rt_lib0clear(&___nl__9);
#line 139
c_rt_lib0clear(&___nl__10);
#line 139
c_rt_lib0clear(&___nl__11);
#line 140
c_rt_lib0move(&___nl__10, compiler_priv0get_known_func());
#line 140
c_rt_lib0move(&___nl__9, interpreter0init(___nl__7, ___nl__10));
#line 140
c_rt_lib0clear(&___nl__10);
#line 141
c_rt_lib0move(&___nl__12,___get_global_const(77));
#line 141
c_rt_lib0move(&___nl__11, interpreter0start(&___nl__9, ___nl__12, ___nl__8));
#line 141
c_rt_lib0clear(&___nl__12);
#line 141
c_rt_lib0move(&___nl__10, c_rt_lib0priv_is(___nl__11, ___get_global_const(44)));
#line 141
if(c_rt_lib0check_true_native(___nl__10)){ goto label_19;}
#line 141
c_rt_lib0move(&___nl__11, c_rt_lib0ov_mk_arg(___get_global_const(78), ___nl__11));
#line 141
nl_die_arg(___nl__11);
#line 141
label_19:
#line 141
c_rt_lib0clear(&___nl__10);
#line 141
c_rt_lib0clear(&___nl__11);
#line 142
c_rt_lib0move(&___nl__11, interpreter0exec_all_code(___nl__9));
#line 142
c_rt_lib0move(&___nl__10, c_rt_lib0priv_is(___nl__11, ___get_global_const(44)));
#line 142
if(c_rt_lib0check_true_native(___nl__10)){ goto label_20;}
#line 142
c_rt_lib0move(&___nl__11, c_rt_lib0ov_mk_arg(___get_global_const(78), ___nl__11));
#line 142
nl_die_arg(___nl__11);
#line 142
label_20:
#line 142
c_rt_lib0clear(&___nl__10);
#line 142
c_rt_lib0clear(&___nl__11);
#line 142
c_rt_lib0clear(&___nl__1);
#line 142
c_rt_lib0clear(&___nl__2);
#line 142
c_rt_lib0clear(&___nl__3);
#line 142
c_rt_lib0clear(&___nl__4);
#line 142
c_rt_lib0clear(&___nl__5);
#line 142
c_rt_lib0clear(&___nl__6);
#line 142
c_rt_lib0clear(&___nl__7);
#line 142
c_rt_lib0clear(&___nl__8);
#line 142
c_rt_lib0clear(&___nl__9);
#line 142
c_rt_lib0clear(&___nl__0);
#line 142
return NULL;
}

ImmT compiler_priv0get_module_name(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
compiler_priv0__const__init();
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
#line 145
c_rt_lib0move(&___nl__1, string0length(___nl__0));
#line 145
c_rt_lib0move(&___nl__2,___get_global_const(2));
#line 145
c_rt_lib0move(&___nl__1, c_rt_lib0sub_mod(___nl__1, ___nl__2));
#line 145
c_rt_lib0clear(&___nl__2);
#line 146
label_2:
#line 146
c_rt_lib0move(&___nl__2,___get_global_const(1));
#line 146
c_rt_lib0move(&___nl__2, c_rt_lib0ge(___nl__1, ___nl__2));
#line 146
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__2));
#line 146
if(c_rt_lib0check_true_native(___nl__4)){ goto label_4;}
#line 146
c_rt_lib0move(&___nl__5,___get_global_const(2));
#line 146
c_rt_lib0move(&___nl__2, string0substr(___nl__0, ___nl__1, ___nl__5));
#line 146
c_rt_lib0clear(&___nl__5);
#line 146
c_rt_lib0move(&___nl__5,___get_global_const(79));
#line 146
c_rt_lib0move(&___nl__2, c_rt_lib0ne(___nl__2, ___nl__5));
#line 146
c_rt_lib0clear(&___nl__5);
#line 146
label_4:
#line 146
c_rt_lib0clear(&___nl__4);
#line 146
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__2));
#line 146
if(c_rt_lib0check_true_native(___nl__3)){ goto label_3;}
#line 146
c_rt_lib0move(&___nl__4,___get_global_const(2));
#line 146
c_rt_lib0move(&___nl__2, string0substr(___nl__0, ___nl__1, ___nl__4));
#line 146
c_rt_lib0clear(&___nl__4);
#line 146
c_rt_lib0move(&___nl__4,___get_global_const(80));
#line 146
c_rt_lib0move(&___nl__2, c_rt_lib0ne(___nl__2, ___nl__4));
#line 146
c_rt_lib0clear(&___nl__4);
#line 146
label_3:
#line 146
c_rt_lib0clear(&___nl__3);
#line 146
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 146
if(c_rt_lib0check_true_native(___nl__2)){ goto label_1;}
#line 147
c_rt_lib0move(&___nl__4,___get_global_const(2));
#line 147
c_rt_lib0move(&___nl__3, string0substr(___nl__0, ___nl__1, ___nl__4));
#line 147
c_rt_lib0clear(&___nl__4);
#line 147
c_rt_lib0move(&___nl__4,___get_global_const(81));
#line 147
c_rt_lib0move(&___nl__3, c_rt_lib0eq(___nl__3, ___nl__4));
#line 147
c_rt_lib0clear(&___nl__4);
#line 147
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 147
if(c_rt_lib0check_true_native(___nl__3)){ goto label_6;}
#line 148
c_rt_lib0move(&___nl__4,___get_global_const(2));
#line 148
c_rt_lib0move(&___nl__1, c_rt_lib0sub_mod(___nl__1, ___nl__4));
#line 148
c_rt_lib0clear(&___nl__4);
#line 149
c_rt_lib0clear(&___nl__3);
#line 149
goto label_1;
#line 150
goto label_6;
#line 150
label_6:
#line 150
c_rt_lib0clear(&___nl__3);
#line 151
c_rt_lib0move(&___nl__3,___get_global_const(2));
#line 151
c_rt_lib0move(&___nl__1, c_rt_lib0sub_mod(___nl__1, ___nl__3));
#line 151
c_rt_lib0clear(&___nl__3);
#line 152
goto label_2;
#line 152
label_1:
#line 152
c_rt_lib0clear(&___nl__2);
#line 153
c_rt_lib0move(&___nl__2,___get_global_const(0));
#line 154
label_8:
#line 154
c_rt_lib0move(&___nl__3,___get_global_const(1));
#line 154
c_rt_lib0move(&___nl__3, c_rt_lib0ge(___nl__1, ___nl__3));
#line 154
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__3));
#line 154
if(c_rt_lib0check_true_native(___nl__5)){ goto label_10;}
#line 154
c_rt_lib0move(&___nl__6,___get_global_const(2));
#line 154
c_rt_lib0move(&___nl__3, string0substr(___nl__0, ___nl__1, ___nl__6));
#line 154
c_rt_lib0clear(&___nl__6);
#line 154
c_rt_lib0move(&___nl__6,___get_global_const(79));
#line 154
c_rt_lib0move(&___nl__3, c_rt_lib0ne(___nl__3, ___nl__6));
#line 154
c_rt_lib0clear(&___nl__6);
#line 154
label_10:
#line 154
c_rt_lib0clear(&___nl__5);
#line 154
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__3));
#line 154
if(c_rt_lib0check_true_native(___nl__4)){ goto label_9;}
#line 154
c_rt_lib0move(&___nl__5,___get_global_const(2));
#line 154
c_rt_lib0move(&___nl__3, string0substr(___nl__0, ___nl__1, ___nl__5));
#line 154
c_rt_lib0clear(&___nl__5);
#line 154
c_rt_lib0move(&___nl__5,___get_global_const(80));
#line 154
c_rt_lib0move(&___nl__3, c_rt_lib0ne(___nl__3, ___nl__5));
#line 154
c_rt_lib0clear(&___nl__5);
#line 154
label_9:
#line 154
c_rt_lib0clear(&___nl__4);
#line 154
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 154
if(c_rt_lib0check_true_native(___nl__3)){ goto label_7;}
#line 155
c_rt_lib0move(&___nl__5,___get_global_const(2));
#line 155
c_rt_lib0move(&___nl__4, string0substr(___nl__0, ___nl__1, ___nl__5));
#line 155
c_rt_lib0clear(&___nl__5);
#line 155
c_rt_lib0move(&___nl__4, c_rt_lib0concat_add(___nl__4, ___nl__2));
#line 155
c_rt_lib0copy(&___nl__2, ___nl__4);
#line 155
c_rt_lib0clear(&___nl__4);
#line 156
c_rt_lib0move(&___nl__4,___get_global_const(2));
#line 156
c_rt_lib0move(&___nl__1, c_rt_lib0sub_mod(___nl__1, ___nl__4));
#line 156
c_rt_lib0clear(&___nl__4);
#line 157
goto label_8;
#line 157
label_7:
#line 157
c_rt_lib0clear(&___nl__3);
#line 158
c_rt_lib0clear(&___nl__0);
#line 158
c_rt_lib0clear(&___nl__1);
#line 158
return ___nl__2;
#line 158
c_rt_lib0clear(&___nl__1);
#line 158
c_rt_lib0clear(&___nl__2);
#line 158
c_rt_lib0clear(&___nl__0);
#line 158
return NULL;
}

ImmT compiler_priv0has_extension(ImmT ___nl__0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
compiler_priv0__const__init();
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
#line 161
c_rt_lib0move(&___nl__2, string0length(___nl__1));
#line 162
c_rt_lib0move(&___nl__3, string0length(___nl__0));
#line 162
c_rt_lib0move(&___nl__3, c_rt_lib0le(___nl__3, ___nl__2));
#line 162
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 162
if(c_rt_lib0check_true_native(___nl__3)){ goto label_2;}
#line 162
c_rt_lib0move(&___nl__4, c_rt_lib0get_false());
#line 162
c_rt_lib0clear(&___nl__0);
#line 162
c_rt_lib0clear(&___nl__1);
#line 162
c_rt_lib0clear(&___nl__2);
#line 162
c_rt_lib0clear(&___nl__3);
#line 162
return ___nl__4;
#line 162
c_rt_lib0clear(&___nl__4);
#line 162
goto label_2;
#line 162
label_2:
#line 162
c_rt_lib0clear(&___nl__3);
#line 163
c_rt_lib0move(&___nl__4, string0length(___nl__0));
#line 163
c_rt_lib0move(&___nl__4, c_rt_lib0sub_mod(___nl__4, ___nl__2));
#line 163
c_rt_lib0move(&___nl__3, string0substr(___nl__0, ___nl__4, ___nl__2));
#line 163
c_rt_lib0clear(&___nl__4);
#line 163
c_rt_lib0copy(&___nl__2, ___nl__3);
#line 163
c_rt_lib0clear(&___nl__3);
#line 164
c_rt_lib0move(&___nl__3, c_rt_lib0eq(___nl__2, ___nl__1));
#line 164
c_rt_lib0clear(&___nl__0);
#line 164
c_rt_lib0clear(&___nl__1);
#line 164
c_rt_lib0clear(&___nl__2);
#line 164
return ___nl__3;
#line 164
c_rt_lib0clear(&___nl__3);
#line 164
c_rt_lib0clear(&___nl__2);
#line 164
c_rt_lib0clear(&___nl__0);
#line 164
c_rt_lib0clear(&___nl__1);
#line 164
return NULL;
}

ImmT compiler_priv0get_generator_state(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
compiler_priv0__const__init();
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
#line 167
c_rt_lib0move(&___nl__1, c_rt_lib0priv_is(___nl__0, ___get_global_const(29)));
#line 167
if(c_rt_lib0check_true_native(___nl__1)){ goto label_2;}
#line 169
c_rt_lib0move(&___nl__1, c_rt_lib0priv_is(___nl__0, ___get_global_const(30)));
#line 169
if(c_rt_lib0check_true_native(___nl__1)){ goto label_3;}
#line 171
c_rt_lib0move(&___nl__1, c_rt_lib0priv_is(___nl__0, ___get_global_const(31)));
#line 171
if(c_rt_lib0check_true_native(___nl__1)){ goto label_4;}
#line 173
c_rt_lib0move(&___nl__1, c_rt_lib0priv_is(___nl__0, ___get_global_const(33)));
#line 173
if(c_rt_lib0check_true_native(___nl__1)){ goto label_5;}
#line 175
c_rt_lib0move(&___nl__1, c_rt_lib0priv_is(___nl__0, ___get_global_const(32)));
#line 175
if(c_rt_lib0check_true_native(___nl__1)){ goto label_6;}
#line 177
c_rt_lib0move(&___nl__1, c_rt_lib0priv_is(___nl__0, ___get_global_const(34)));
#line 177
if(c_rt_lib0check_true_native(___nl__1)){ goto label_7;}
#line 179
c_rt_lib0move(&___nl__1, c_rt_lib0priv_is(___nl__0, ___get_global_const(35)));
#line 179
if(c_rt_lib0check_true_native(___nl__1)){ goto label_8;}
#line 179
c_rt_lib0move(&___nl__1,___get_global_const(74));
#line 179
c_rt_lib0move(&___nl__1, c_rt_lib0array_mk(2, ___nl__1, ___nl__0));
#line 179
nl_die_arg(___nl__1);
#line 167
label_2:
#line 168
c_rt_lib0move(&___nl__2, generator_c0get_empty_state());
#line 168
c_rt_lib0clear(&___nl__0);
#line 168
c_rt_lib0clear(&___nl__1);
#line 168
return ___nl__2;
#line 168
c_rt_lib0clear(&___nl__2);
#line 169
goto label_1;
#line 169
label_3:
#line 170
c_rt_lib0move(&___nl__2, generator_c0get_empty_state());
#line 170
c_rt_lib0clear(&___nl__0);
#line 170
c_rt_lib0clear(&___nl__1);
#line 170
return ___nl__2;
#line 170
c_rt_lib0clear(&___nl__2);
#line 171
goto label_1;
#line 171
label_4:
#line 172
c_rt_lib0move(&___nl__2, generator_c0get_empty_state());
#line 172
c_rt_lib0clear(&___nl__0);
#line 172
c_rt_lib0clear(&___nl__1);
#line 172
return ___nl__2;
#line 172
c_rt_lib0clear(&___nl__2);
#line 173
goto label_1;
#line 173
label_5:
#line 174
c_rt_lib0move(&___nl__2, c_rt_lib0array_mk(0));
#line 174
nl_die_arg(___nl__2);
#line 174
c_rt_lib0clear(&___nl__2);
#line 175
goto label_1;
#line 175
label_6:
#line 176
c_rt_lib0move(&___nl__2, c_rt_lib0array_mk(0));
#line 176
nl_die_arg(___nl__2);
#line 176
c_rt_lib0clear(&___nl__2);
#line 177
goto label_1;
#line 177
label_7:
#line 178
c_rt_lib0move(&___nl__2, generator_c0get_empty_state());
#line 178
c_rt_lib0clear(&___nl__0);
#line 178
c_rt_lib0clear(&___nl__1);
#line 178
return ___nl__2;
#line 178
c_rt_lib0clear(&___nl__2);
#line 179
goto label_1;
#line 179
label_8:
#line 180
c_rt_lib0move(&___nl__2, generator_c0get_empty_state());
#line 180
c_rt_lib0clear(&___nl__0);
#line 180
c_rt_lib0clear(&___nl__1);
#line 180
return ___nl__2;
#line 180
c_rt_lib0clear(&___nl__2);
#line 181
goto label_1;
#line 181
label_1:
#line 181
c_rt_lib0clear(&___nl__1);
#line 181
c_rt_lib0clear(&___nl__0);
#line 181
return NULL;
}

ImmT compiler_priv0get_out_ext(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
compiler_priv0__const__init();
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
#line 184
c_rt_lib0move(&___nl__1, c_rt_lib0priv_is(___nl__0, ___get_global_const(29)));
#line 184
if(c_rt_lib0check_true_native(___nl__1)){ goto label_2;}
#line 186
c_rt_lib0move(&___nl__1, c_rt_lib0priv_is(___nl__0, ___get_global_const(30)));
#line 186
if(c_rt_lib0check_true_native(___nl__1)){ goto label_3;}
#line 188
c_rt_lib0move(&___nl__1, c_rt_lib0priv_is(___nl__0, ___get_global_const(31)));
#line 188
if(c_rt_lib0check_true_native(___nl__1)){ goto label_4;}
#line 190
c_rt_lib0move(&___nl__1, c_rt_lib0priv_is(___nl__0, ___get_global_const(33)));
#line 190
if(c_rt_lib0check_true_native(___nl__1)){ goto label_5;}
#line 192
c_rt_lib0move(&___nl__1, c_rt_lib0priv_is(___nl__0, ___get_global_const(32)));
#line 192
if(c_rt_lib0check_true_native(___nl__1)){ goto label_6;}
#line 194
c_rt_lib0move(&___nl__1, c_rt_lib0priv_is(___nl__0, ___get_global_const(34)));
#line 194
if(c_rt_lib0check_true_native(___nl__1)){ goto label_7;}
#line 196
c_rt_lib0move(&___nl__1, c_rt_lib0priv_is(___nl__0, ___get_global_const(35)));
#line 196
if(c_rt_lib0check_true_native(___nl__1)){ goto label_8;}
#line 196
c_rt_lib0move(&___nl__1,___get_global_const(74));
#line 196
c_rt_lib0move(&___nl__1, c_rt_lib0array_mk(2, ___nl__1, ___nl__0));
#line 196
nl_die_arg(___nl__1);
#line 184
label_2:
#line 185
c_rt_lib0move(&___nl__2,___get_global_const(82));
#line 185
c_rt_lib0clear(&___nl__0);
#line 185
c_rt_lib0clear(&___nl__1);
#line 185
return ___nl__2;
#line 185
c_rt_lib0clear(&___nl__2);
#line 186
goto label_1;
#line 186
label_3:
#line 187
c_rt_lib0move(&___nl__2,___get_global_const(83));
#line 187
c_rt_lib0clear(&___nl__0);
#line 187
c_rt_lib0clear(&___nl__1);
#line 187
return ___nl__2;
#line 187
c_rt_lib0clear(&___nl__2);
#line 188
goto label_1;
#line 188
label_4:
#line 189
c_rt_lib0move(&___nl__2,___get_global_const(84));
#line 189
c_rt_lib0clear(&___nl__0);
#line 189
c_rt_lib0clear(&___nl__1);
#line 189
return ___nl__2;
#line 189
c_rt_lib0clear(&___nl__2);
#line 190
goto label_1;
#line 190
label_5:
#line 191
c_rt_lib0move(&___nl__2,___get_global_const(85));
#line 191
c_rt_lib0clear(&___nl__0);
#line 191
c_rt_lib0clear(&___nl__1);
#line 191
return ___nl__2;
#line 191
c_rt_lib0clear(&___nl__2);
#line 192
goto label_1;
#line 192
label_6:
#line 193
c_rt_lib0move(&___nl__2,___get_global_const(86));
#line 193
c_rt_lib0clear(&___nl__0);
#line 193
c_rt_lib0clear(&___nl__1);
#line 193
return ___nl__2;
#line 193
c_rt_lib0clear(&___nl__2);
#line 194
goto label_1;
#line 194
label_7:
#line 195
c_rt_lib0move(&___nl__2,___get_global_const(87));
#line 195
c_rt_lib0clear(&___nl__0);
#line 195
c_rt_lib0clear(&___nl__1);
#line 195
return ___nl__2;
#line 195
c_rt_lib0clear(&___nl__2);
#line 196
goto label_1;
#line 196
label_8:
#line 197
c_rt_lib0move(&___nl__2,___get_global_const(88));
#line 197
c_rt_lib0clear(&___nl__0);
#line 197
c_rt_lib0clear(&___nl__1);
#line 197
return ___nl__2;
#line 197
c_rt_lib0clear(&___nl__2);
#line 198
goto label_1;
#line 198
label_1:
#line 198
c_rt_lib0clear(&___nl__1);
#line 198
c_rt_lib0clear(&___nl__0);
#line 198
return NULL;
}

ImmT compiler_priv0mk_path(ImmT ___nl__0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
compiler_priv0__const__init();
ImmT ___nl__2 = NULL;
#line 201
c_rt_lib0move(&___nl__2,___get_global_const(81));
#line 201
c_rt_lib0move(&___nl__2, c_rt_lib0eq(___nl__1, ___nl__2));
#line 201
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 201
if(c_rt_lib0check_true_native(___nl__2)){ goto label_2;}
#line 201
c_rt_lib0clear(&___nl__0);
#line 201
c_rt_lib0clear(&___nl__1);
#line 201
c_rt_lib0clear(&___nl__2);
#line 201
return NULL;
#line 201
goto label_2;
#line 201
label_2:
#line 201
c_rt_lib0clear(&___nl__2);
#line 202
c_rt_lib0move(&___nl__2, compiler_priv0get_dir(___nl__1));
#line 202
c_rt_lib0delete(compiler_priv0mk_path(___nl__0, ___nl__2));
#line 202
c_rt_lib0clear(&___nl__2);
#line 203
c_rt_lib0move(&___nl__2, c_rt_lib0concat_new(___nl__0, ___nl__1));
#line 203
c_rt_lib0delete(c_fe_lib0mk_path(___nl__2));
#line 203
c_rt_lib0clear(&___nl__2);
#line 203
c_rt_lib0clear(&___nl__0);
#line 203
c_rt_lib0clear(&___nl__1);
#line 203
return NULL;
}

ImmT compiler_priv0mk_path_module(ImmT ___nl__0,ImmT ___nl__1,ImmT ___nl__2) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
c_rt_lib0arg_val(___nl__2);
compiler_priv0__const__init();
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
ImmT ___nl__9 = NULL;
ImmT ___nl__10 = NULL;
ImmT ___nl__11 = NULL;
ImmT ___nl__12 = NULL;
#line 206
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(59)));
#line 206
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__1));
#line 207
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(89)));
#line 208
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(64)));
#line 208
c_rt_lib0move(&___nl__6, c_rt_lib0priv_is(___nl__5, ___get_global_const(29)));
#line 208
if(c_rt_lib0check_true_native(___nl__6)){ goto label_2;}
#line 210
c_rt_lib0move(&___nl__6, c_rt_lib0priv_is(___nl__5, ___get_global_const(30)));
#line 210
if(c_rt_lib0check_true_native(___nl__6)){ goto label_3;}
#line 212
c_rt_lib0move(&___nl__6, c_rt_lib0priv_is(___nl__5, ___get_global_const(31)));
#line 212
if(c_rt_lib0check_true_native(___nl__6)){ goto label_4;}
#line 214
c_rt_lib0move(&___nl__6, c_rt_lib0priv_is(___nl__5, ___get_global_const(32)));
#line 214
if(c_rt_lib0check_true_native(___nl__6)){ goto label_5;}
#line 222
c_rt_lib0move(&___nl__6, c_rt_lib0priv_is(___nl__5, ___get_global_const(33)));
#line 222
if(c_rt_lib0check_true_native(___nl__6)){ goto label_6;}
#line 224
c_rt_lib0move(&___nl__6, c_rt_lib0priv_is(___nl__5, ___get_global_const(34)));
#line 224
if(c_rt_lib0check_true_native(___nl__6)){ goto label_7;}
#line 226
c_rt_lib0move(&___nl__6, c_rt_lib0priv_is(___nl__5, ___get_global_const(35)));
#line 226
if(c_rt_lib0check_true_native(___nl__6)){ goto label_8;}
#line 226
c_rt_lib0move(&___nl__6,___get_global_const(74));
#line 226
c_rt_lib0move(&___nl__6, c_rt_lib0array_mk(2, ___nl__6, ___nl__5));
#line 226
nl_die_arg(___nl__6);
#line 208
label_2:
#line 209
c_rt_lib0move(&___nl__8,___get_global_const(82));
#line 209
c_rt_lib0move(&___nl__8, c_rt_lib0concat_new(___nl__3, ___nl__8));
#line 209
c_rt_lib0move(&___nl__8, c_rt_lib0ov_mk_arg(___get_global_const(29), ___nl__8));
#line 209
c_rt_lib0move(&___nl__7, c_rt_lib0hash_mk(2, ___get_global_const(39), ___nl__4, ___get_global_const(40), ___nl__8));
#line 209
c_rt_lib0clear(&___nl__8);
#line 209
c_rt_lib0clear(&___nl__0);
#line 209
c_rt_lib0clear(&___nl__1);
#line 209
c_rt_lib0clear(&___nl__2);
#line 209
c_rt_lib0clear(&___nl__3);
#line 209
c_rt_lib0clear(&___nl__4);
#line 209
c_rt_lib0clear(&___nl__5);
#line 209
c_rt_lib0clear(&___nl__6);
#line 209
return ___nl__7;
#line 209
c_rt_lib0clear(&___nl__7);
#line 210
goto label_1;
#line 210
label_3:
#line 211
c_rt_lib0move(&___nl__8,___get_global_const(83));
#line 211
c_rt_lib0move(&___nl__8, c_rt_lib0concat_new(___nl__3, ___nl__8));
#line 211
c_rt_lib0move(&___nl__8, c_rt_lib0ov_mk_arg(___get_global_const(30), ___nl__8));
#line 211
c_rt_lib0move(&___nl__7, c_rt_lib0hash_mk(2, ___get_global_const(39), ___nl__4, ___get_global_const(40), ___nl__8));
#line 211
c_rt_lib0clear(&___nl__8);
#line 211
c_rt_lib0clear(&___nl__0);
#line 211
c_rt_lib0clear(&___nl__1);
#line 211
c_rt_lib0clear(&___nl__2);
#line 211
c_rt_lib0clear(&___nl__3);
#line 211
c_rt_lib0clear(&___nl__4);
#line 211
c_rt_lib0clear(&___nl__5);
#line 211
c_rt_lib0clear(&___nl__6);
#line 211
return ___nl__7;
#line 211
c_rt_lib0clear(&___nl__7);
#line 212
goto label_1;
#line 212
label_4:
#line 213
c_rt_lib0move(&___nl__9,___get_global_const(84));
#line 213
c_rt_lib0move(&___nl__9, c_rt_lib0concat_new(___nl__3, ___nl__9));
#line 213
c_rt_lib0move(&___nl__10,___get_global_const(90));
#line 213
c_rt_lib0move(&___nl__10, c_rt_lib0concat_new(___nl__3, ___nl__10));
#line 213
c_rt_lib0move(&___nl__8, c_rt_lib0hash_mk(2, ___get_global_const(31), ___nl__9, ___get_global_const(36), ___nl__10));
#line 213
c_rt_lib0clear(&___nl__9);
#line 213
c_rt_lib0clear(&___nl__10);
#line 213
c_rt_lib0move(&___nl__8, c_rt_lib0ov_mk_arg(___get_global_const(31), ___nl__8));
#line 213
c_rt_lib0move(&___nl__7, c_rt_lib0hash_mk(2, ___get_global_const(39), ___nl__4, ___get_global_const(40), ___nl__8));
#line 213
c_rt_lib0clear(&___nl__8);
#line 213
c_rt_lib0clear(&___nl__0);
#line 213
c_rt_lib0clear(&___nl__1);
#line 213
c_rt_lib0clear(&___nl__2);
#line 213
c_rt_lib0clear(&___nl__3);
#line 213
c_rt_lib0clear(&___nl__4);
#line 213
c_rt_lib0clear(&___nl__5);
#line 213
c_rt_lib0clear(&___nl__6);
#line 213
return ___nl__7;
#line 213
c_rt_lib0clear(&___nl__7);
#line 214
goto label_1;
#line 214
label_5:
#line 215
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(91)));
#line 215
c_rt_lib0move(&___nl__7, string0length(___nl__8));
#line 215
c_rt_lib0clear(&___nl__8);
#line 216
c_rt_lib0move(&___nl__8, compiler_priv0get_dir(___nl__4));
#line 217
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(59)));
#line 217
c_rt_lib0move(&___nl__9, c_rt_lib0concat_add(___nl__9, ___nl__8));
#line 217
c_rt_lib0move(&___nl__10,___get_global_const(79));
#line 217
c_rt_lib0move(&___nl__9, c_rt_lib0concat_add(___nl__9, ___nl__10));
#line 217
c_rt_lib0clear(&___nl__10);
#line 217
c_rt_lib0move(&___nl__9, c_rt_lib0concat_add(___nl__9, ___nl__1));
#line 217
c_rt_lib0copy(&___nl__3, ___nl__9);
#line 217
c_rt_lib0clear(&___nl__9);
#line 218
c_rt_lib0move(&___nl__9, string0length(___nl__8));
#line 218
c_rt_lib0move(&___nl__9, c_rt_lib0lt(___nl__7, ___nl__9));
#line 218
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__9));
#line 218
if(c_rt_lib0check_true_native(___nl__9)){ goto label_10;}
#line 219
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(59)));
#line 219
c_rt_lib0move(&___nl__12,___get_global_const(2));
#line 219
c_rt_lib0move(&___nl__12, c_rt_lib0add(___nl__7, ___nl__12));
#line 219
c_rt_lib0move(&___nl__11, string0substr2(___nl__8, ___nl__12));
#line 219
c_rt_lib0clear(&___nl__12);
#line 219
c_rt_lib0delete(compiler_priv0mk_path(___nl__10, ___nl__11));
#line 219
c_rt_lib0clear(&___nl__11);
#line 219
c_rt_lib0clear(&___nl__10);
#line 220
goto label_10;
#line 220
label_10:
#line 220
c_rt_lib0clear(&___nl__9);
#line 221
c_rt_lib0move(&___nl__10,___get_global_const(86));
#line 221
c_rt_lib0move(&___nl__10, c_rt_lib0concat_new(___nl__3, ___nl__10));
#line 221
c_rt_lib0move(&___nl__10, c_rt_lib0ov_mk_arg(___get_global_const(32), ___nl__10));
#line 221
c_rt_lib0move(&___nl__9, c_rt_lib0hash_mk(2, ___get_global_const(39), ___nl__4, ___get_global_const(40), ___nl__10));
#line 221
c_rt_lib0clear(&___nl__10);
#line 221
c_rt_lib0clear(&___nl__0);
#line 221
c_rt_lib0clear(&___nl__1);
#line 221
c_rt_lib0clear(&___nl__2);
#line 221
c_rt_lib0clear(&___nl__3);
#line 221
c_rt_lib0clear(&___nl__4);
#line 221
c_rt_lib0clear(&___nl__5);
#line 221
c_rt_lib0clear(&___nl__6);
#line 221
c_rt_lib0clear(&___nl__7);
#line 221
c_rt_lib0clear(&___nl__8);
#line 221
return ___nl__9;
#line 221
c_rt_lib0clear(&___nl__9);
#line 221
c_rt_lib0clear(&___nl__7);
#line 221
c_rt_lib0clear(&___nl__8);
#line 222
goto label_1;
#line 222
label_6:
#line 223
c_rt_lib0move(&___nl__8,___get_global_const(85));
#line 223
c_rt_lib0move(&___nl__8, c_rt_lib0concat_new(___nl__3, ___nl__8));
#line 223
c_rt_lib0move(&___nl__8, c_rt_lib0ov_mk_arg(___get_global_const(33), ___nl__8));
#line 223
c_rt_lib0move(&___nl__7, c_rt_lib0hash_mk(2, ___get_global_const(39), ___nl__4, ___get_global_const(40), ___nl__8));
#line 223
c_rt_lib0clear(&___nl__8);
#line 223
c_rt_lib0clear(&___nl__0);
#line 223
c_rt_lib0clear(&___nl__1);
#line 223
c_rt_lib0clear(&___nl__2);
#line 223
c_rt_lib0clear(&___nl__3);
#line 223
c_rt_lib0clear(&___nl__4);
#line 223
c_rt_lib0clear(&___nl__5);
#line 223
c_rt_lib0clear(&___nl__6);
#line 223
return ___nl__7;
#line 223
c_rt_lib0clear(&___nl__7);
#line 224
goto label_1;
#line 224
label_7:
#line 225
c_rt_lib0move(&___nl__8,___get_global_const(87));
#line 225
c_rt_lib0move(&___nl__8, c_rt_lib0concat_new(___nl__3, ___nl__8));
#line 225
c_rt_lib0move(&___nl__8, c_rt_lib0ov_mk_arg(___get_global_const(34), ___nl__8));
#line 225
c_rt_lib0move(&___nl__7, c_rt_lib0hash_mk(2, ___get_global_const(39), ___nl__4, ___get_global_const(40), ___nl__8));
#line 225
c_rt_lib0clear(&___nl__8);
#line 225
c_rt_lib0clear(&___nl__0);
#line 225
c_rt_lib0clear(&___nl__1);
#line 225
c_rt_lib0clear(&___nl__2);
#line 225
c_rt_lib0clear(&___nl__3);
#line 225
c_rt_lib0clear(&___nl__4);
#line 225
c_rt_lib0clear(&___nl__5);
#line 225
c_rt_lib0clear(&___nl__6);
#line 225
return ___nl__7;
#line 225
c_rt_lib0clear(&___nl__7);
#line 226
goto label_1;
#line 226
label_8:
#line 227
c_rt_lib0move(&___nl__8,___get_global_const(92));
#line 227
c_rt_lib0move(&___nl__8, c_rt_lib0concat_new(___nl__3, ___nl__8));
#line 227
c_rt_lib0move(&___nl__8, c_rt_lib0ov_mk_arg(___get_global_const(35), ___nl__8));
#line 227
c_rt_lib0move(&___nl__7, c_rt_lib0hash_mk(2, ___get_global_const(39), ___nl__4, ___get_global_const(40), ___nl__8));
#line 227
c_rt_lib0clear(&___nl__8);
#line 227
c_rt_lib0clear(&___nl__0);
#line 227
c_rt_lib0clear(&___nl__1);
#line 227
c_rt_lib0clear(&___nl__2);
#line 227
c_rt_lib0clear(&___nl__3);
#line 227
c_rt_lib0clear(&___nl__4);
#line 227
c_rt_lib0clear(&___nl__5);
#line 227
c_rt_lib0clear(&___nl__6);
#line 227
return ___nl__7;
#line 227
c_rt_lib0clear(&___nl__7);
#line 228
goto label_1;
#line 228
label_1:
#line 228
c_rt_lib0clear(&___nl__5);
#line 228
c_rt_lib0clear(&___nl__6);
#line 228
c_rt_lib0clear(&___nl__3);
#line 228
c_rt_lib0clear(&___nl__4);
#line 228
c_rt_lib0clear(&___nl__0);
#line 228
c_rt_lib0clear(&___nl__1);
#line 228
c_rt_lib0clear(&___nl__2);
#line 228
return NULL;
}

ImmT compiler_priv0get_all_nianio_file(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
compiler_priv0__const__init();
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
ImmT ___nl__9 = NULL;
#line 232
c_rt_lib0move(&___nl__1, c_rt_lib0array_mk(0));
#line 233
c_rt_lib0move(&___nl__4, ptd0sim());
#line 233
c_rt_lib0move(&___nl__3, ptd0arr(___nl__4));
#line 233
c_rt_lib0clear(&___nl__4);
#line 233
c_rt_lib0move(&___nl__4, c_fe_lib0get_module_files_rec(___nl__0));
#line 233
c_rt_lib0move(&___nl__2, ptd0ensure(___nl__3, ___nl__4));
#line 233
c_rt_lib0clear(&___nl__4);
#line 233
c_rt_lib0clear(&___nl__3);
#line 234
c_rt_lib0move(&___nl__4,___get_global_const(1));
#line 234
c_rt_lib0move(&___nl__5,___get_global_const(2));
#line 234
c_rt_lib0move(&___nl__6, c_rt_lib0array_len(___nl__2));
#line 234
label_3:
#line 234
c_rt_lib0move(&___nl__7, c_rt_lib0ge(___nl__4, ___nl__6));
#line 234
if(c_rt_lib0check_true_native(___nl__7)){ goto label_1;}
#line 234
c_rt_lib0move(&___nl__3, c_rt_lib0array_get(___nl__2, ___nl__4));
#line 235
c_rt_lib0move(&___nl__9,___get_global_const(86));
#line 235
c_rt_lib0move(&___nl__8, compiler_priv0has_extension(___nl__3, ___nl__9));
#line 235
c_rt_lib0clear(&___nl__9);
#line 235
c_rt_lib0move(&___nl__8, c_rt_lib0not(___nl__8));
#line 235
if(c_rt_lib0check_true_native(___nl__8)){ goto label_5;}
#line 235
c_rt_lib0delete(array0push(&___nl__1, ___nl__3));
#line 235
goto label_5;
#line 235
label_5:
#line 235
c_rt_lib0clear(&___nl__8);
#line 236
c_rt_lib0move(&___nl__4, c_rt_lib0add_mod(___nl__4, ___nl__5));
#line 236
goto label_3;
#line 236
label_1:
#line 236
c_rt_lib0clear(&___nl__3);
#line 236
c_rt_lib0clear(&___nl__4);
#line 236
c_rt_lib0clear(&___nl__5);
#line 236
c_rt_lib0clear(&___nl__6);
#line 236
c_rt_lib0clear(&___nl__7);
#line 237
c_rt_lib0clear(&___nl__0);
#line 237
c_rt_lib0clear(&___nl__2);
#line 237
return ___nl__1;
#line 237
c_rt_lib0clear(&___nl__1);
#line 237
c_rt_lib0clear(&___nl__2);
#line 237
c_rt_lib0clear(&___nl__0);
#line 237
return NULL;
}

ImmT compiler_priv0get_files_to_parse(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
compiler_priv0__const__init();
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
ImmT ___nl__9 = NULL;
ImmT ___nl__10 = NULL;
ImmT ___nl__11 = NULL;
ImmT ___nl__12 = NULL;
ImmT ___nl__13 = NULL;
ImmT ___nl__14 = NULL;
ImmT ___nl__15 = NULL;
ImmT ___nl__16 = NULL;
#line 240
c_rt_lib0move(&___nl__1, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(59)));
#line 241
c_rt_lib0move(&___nl__2, c_rt_lib0array_mk(0));
#line 242
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(58)));
#line 242
c_rt_lib0move(&___nl__5,___get_global_const(1));
#line 242
c_rt_lib0move(&___nl__6,___get_global_const(2));
#line 242
c_rt_lib0move(&___nl__7, c_rt_lib0array_len(___nl__3));
#line 242
label_3:
#line 242
c_rt_lib0move(&___nl__8, c_rt_lib0ge(___nl__5, ___nl__7));
#line 242
if(c_rt_lib0check_true_native(___nl__8)){ goto label_1;}
#line 242
c_rt_lib0move(&___nl__4, c_rt_lib0array_get(___nl__3, ___nl__5));
#line 243
c_rt_lib0move(&___nl__10,___get_global_const(86));
#line 243
c_rt_lib0move(&___nl__9, compiler_priv0has_extension(___nl__4, ___nl__10));
#line 243
c_rt_lib0clear(&___nl__10);
#line 243
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__9));
#line 243
if(c_rt_lib0check_true_native(___nl__9)){ goto label_5;}
#line 244
c_rt_lib0move(&___nl__11, compiler_priv0get_dir(___nl__4));
#line 244
c_rt_lib0move(&___nl__10, c_rt_lib0hash_mk(2, ___get_global_const(91), ___nl__11, ___get_global_const(89), ___nl__4));
#line 244
c_rt_lib0clear(&___nl__11);
#line 244
c_rt_lib0delete(array0push(&___nl__2, ___nl__10));
#line 244
c_rt_lib0clear(&___nl__10);
#line 245
goto label_4;
#line 245
label_5:
#line 246
c_rt_lib0move(&___nl__10, compiler_priv0get_all_nianio_file(___nl__4));
#line 246
c_rt_lib0move(&___nl__12,___get_global_const(1));
#line 246
c_rt_lib0move(&___nl__13,___get_global_const(2));
#line 246
c_rt_lib0move(&___nl__14, c_rt_lib0array_len(___nl__10));
#line 246
label_8:
#line 246
c_rt_lib0move(&___nl__15, c_rt_lib0ge(___nl__12, ___nl__14));
#line 246
if(c_rt_lib0check_true_native(___nl__15)){ goto label_6;}
#line 246
c_rt_lib0move(&___nl__11, c_rt_lib0array_get(___nl__10, ___nl__12));
#line 247
c_rt_lib0move(&___nl__16, c_rt_lib0hash_mk(2, ___get_global_const(91), ___nl__4, ___get_global_const(89), ___nl__11));
#line 247
c_rt_lib0delete(array0push(&___nl__2, ___nl__16));
#line 247
c_rt_lib0clear(&___nl__16);
#line 248
c_rt_lib0move(&___nl__12, c_rt_lib0add_mod(___nl__12, ___nl__13));
#line 248
goto label_8;
#line 248
label_6:
#line 248
c_rt_lib0clear(&___nl__10);
#line 248
c_rt_lib0clear(&___nl__11);
#line 248
c_rt_lib0clear(&___nl__12);
#line 248
c_rt_lib0clear(&___nl__13);
#line 248
c_rt_lib0clear(&___nl__14);
#line 248
c_rt_lib0clear(&___nl__15);
#line 249
goto label_4;
#line 249
label_4:
#line 249
c_rt_lib0clear(&___nl__9);
#line 250
c_rt_lib0move(&___nl__5, c_rt_lib0add_mod(___nl__5, ___nl__6));
#line 250
goto label_3;
#line 250
label_1:
#line 250
c_rt_lib0clear(&___nl__3);
#line 250
c_rt_lib0clear(&___nl__4);
#line 250
c_rt_lib0clear(&___nl__5);
#line 250
c_rt_lib0clear(&___nl__6);
#line 250
c_rt_lib0clear(&___nl__7);
#line 250
c_rt_lib0clear(&___nl__8);
#line 251
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(64)));
#line 251
c_rt_lib0move(&___nl__3, compiler_priv0get_out_ext(___nl__4));
#line 251
c_rt_lib0clear(&___nl__4);
#line 252
c_rt_lib0move(&___nl__4, c_rt_lib0hash_mk(0));
#line 253
c_rt_lib0move(&___nl__5, c_fe_lib0get_module_files(___nl__1));
#line 253
c_rt_lib0move(&___nl__6, c_rt_lib0priv_is(___nl__5, ___get_global_const(44)));
#line 253
if(c_rt_lib0check_true_native(___nl__6)){ goto label_10;}
#line 258
c_rt_lib0move(&___nl__6, c_rt_lib0priv_is(___nl__5, ___get_global_const(43)));
#line 258
if(c_rt_lib0check_true_native(___nl__6)){ goto label_11;}
#line 258
c_rt_lib0move(&___nl__6,___get_global_const(74));
#line 258
c_rt_lib0move(&___nl__6, c_rt_lib0array_mk(2, ___nl__6, ___nl__5));
#line 258
nl_die_arg(___nl__6);
#line 253
label_10:
#line 253
c_rt_lib0move(&___nl__7, c_rt_lib0priv_as(___nl__5, ___get_global_const(44)));
#line 254
c_rt_lib0move(&___nl__10, ptd0sim());
#line 254
c_rt_lib0move(&___nl__9, ptd0arr(___nl__10));
#line 254
c_rt_lib0clear(&___nl__10);
#line 254
c_rt_lib0move(&___nl__8, ptd0ensure(___nl__9, ___nl__7));
#line 254
c_rt_lib0clear(&___nl__9);
#line 254
c_rt_lib0move(&___nl__10,___get_global_const(1));
#line 254
c_rt_lib0move(&___nl__11,___get_global_const(2));
#line 254
c_rt_lib0move(&___nl__12, c_rt_lib0array_len(___nl__8));
#line 254
label_14:
#line 254
c_rt_lib0move(&___nl__13, c_rt_lib0ge(___nl__10, ___nl__12));
#line 254
if(c_rt_lib0check_true_native(___nl__13)){ goto label_12;}
#line 254
c_rt_lib0move(&___nl__9, c_rt_lib0array_get(___nl__8, ___nl__10));
#line 255
c_rt_lib0move(&___nl__14, compiler_priv0has_extension(___nl__9, ___nl__3));
#line 255
c_rt_lib0move(&___nl__14, c_rt_lib0not(___nl__14));
#line 255
c_rt_lib0move(&___nl__14, c_rt_lib0not(___nl__14));
#line 255
if(c_rt_lib0check_true_native(___nl__14)){ goto label_16;}
#line 255
c_rt_lib0clear(&___nl__14);
#line 255
goto label_13;
#line 255
goto label_16;
#line 255
label_16:
#line 255
c_rt_lib0clear(&___nl__14);
#line 256
c_rt_lib0move(&___nl__14, compiler_priv0get_module_name(___nl__9));
#line 256
c_rt_lib0delete(hash0set_value(&___nl__4, ___nl__14, ___nl__9));
#line 256
c_rt_lib0clear(&___nl__14);
#line 256
label_13:
#line 257
c_rt_lib0move(&___nl__10, c_rt_lib0add_mod(___nl__10, ___nl__11));
#line 257
goto label_14;
#line 257
label_12:
#line 257
c_rt_lib0clear(&___nl__8);
#line 257
c_rt_lib0clear(&___nl__9);
#line 257
c_rt_lib0clear(&___nl__10);
#line 257
c_rt_lib0clear(&___nl__11);
#line 257
c_rt_lib0clear(&___nl__12);
#line 257
c_rt_lib0clear(&___nl__13);
#line 257
c_rt_lib0clear(&___nl__7);
#line 258
goto label_9;
#line 258
label_11:
#line 258
c_rt_lib0move(&___nl__7, c_rt_lib0priv_as(___nl__5, ___get_global_const(43)));
#line 259
c_rt_lib0move(&___nl__8, c_rt_lib0hash_mk(0));
#line 259
c_rt_lib0clear(&___nl__0);
#line 259
c_rt_lib0clear(&___nl__1);
#line 259
c_rt_lib0clear(&___nl__2);
#line 259
c_rt_lib0clear(&___nl__3);
#line 259
c_rt_lib0clear(&___nl__4);
#line 259
c_rt_lib0clear(&___nl__5);
#line 259
c_rt_lib0clear(&___nl__6);
#line 259
c_rt_lib0clear(&___nl__7);
#line 259
return ___nl__8;
#line 259
c_rt_lib0clear(&___nl__8);
#line 259
c_rt_lib0clear(&___nl__7);
#line 260
goto label_9;
#line 260
label_9:
#line 260
c_rt_lib0clear(&___nl__5);
#line 260
c_rt_lib0clear(&___nl__6);
#line 261
c_rt_lib0move(&___nl__5, c_rt_lib0hash_mk(0));
#line 262
c_rt_lib0move(&___nl__7,___get_global_const(1));
#line 262
c_rt_lib0move(&___nl__8,___get_global_const(2));
#line 262
c_rt_lib0move(&___nl__9, c_rt_lib0array_len(___nl__2));
#line 262
label_19:
#line 262
c_rt_lib0move(&___nl__10, c_rt_lib0ge(___nl__7, ___nl__9));
#line 262
if(c_rt_lib0check_true_native(___nl__10)){ goto label_17;}
#line 262
c_rt_lib0move(&___nl__6, c_rt_lib0array_get(___nl__2, ___nl__7));
#line 263
c_rt_lib0move(&___nl__12, c_rt_lib0hash_get_value_dec(___nl__6, ___get_global_const(89)));
#line 263
c_rt_lib0move(&___nl__11, compiler_priv0get_module_name(___nl__12));
#line 263
c_rt_lib0clear(&___nl__12);
#line 264
c_rt_lib0move(&___nl__12, compiler_priv0mk_path_module(___nl__6, ___nl__11, ___nl__0));
#line 265
c_rt_lib0delete(hash0set_value(&___nl__5, ___nl__11, ___nl__12));
#line 265
c_rt_lib0clear(&___nl__11);
#line 265
c_rt_lib0clear(&___nl__12);
#line 266
c_rt_lib0move(&___nl__7, c_rt_lib0add_mod(___nl__7, ___nl__8));
#line 266
goto label_19;
#line 266
label_17:
#line 266
c_rt_lib0clear(&___nl__6);
#line 266
c_rt_lib0clear(&___nl__7);
#line 266
c_rt_lib0clear(&___nl__8);
#line 266
c_rt_lib0clear(&___nl__9);
#line 266
c_rt_lib0clear(&___nl__10);
#line 267
c_rt_lib0clear(&___nl__0);
#line 267
c_rt_lib0clear(&___nl__1);
#line 267
c_rt_lib0clear(&___nl__2);
#line 267
c_rt_lib0clear(&___nl__3);
#line 267
c_rt_lib0clear(&___nl__4);
#line 267
return ___nl__5;
#line 267
c_rt_lib0clear(&___nl__1);
#line 267
c_rt_lib0clear(&___nl__2);
#line 267
c_rt_lib0clear(&___nl__3);
#line 267
c_rt_lib0clear(&___nl__4);
#line 267
c_rt_lib0clear(&___nl__5);
#line 267
c_rt_lib0clear(&___nl__0);
#line 267
return NULL;
}

ImmT compiler_priv0parse_module(ImmT ___nl__0,ImmT ___nl__1,ImmT * ___ref___2) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
compiler_priv0__const__init();
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
ImmT ___nl__9 = NULL;
ImmT ___nl__10 = NULL;
ImmT ___nl__11 = NULL;
ImmT ___nl__12 = NULL;
ImmT ___nl__13 = NULL;
ImmT ___nl__14 = NULL;
ImmT ___nl__15 = NULL;
#line 271
c_rt_lib0move(&___nl__3,___get_global_const(93));
#line 271
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__0));
#line 271
c_rt_lib0move(&___nl__4,___get_global_const(94));
#line 271
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 271
c_rt_lib0clear(&___nl__4);
#line 271
c_rt_lib0delete(c_fe_lib0print(___nl__3));
#line 271
c_rt_lib0clear(&___nl__3);
#line 272
c_rt_lib0move(&___nl__5, c_fe_lib0file_to_string(___nl__1));
#line 272
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__5, ___get_global_const(44)));
#line 272
if(c_rt_lib0check_true_native(___nl__4)){ goto label_1;}
#line 272
c_rt_lib0clear(&___nl__0);
#line 272
c_rt_lib0clear(&___nl__1);
#line 272
c_rt_lib0clear(&___nl__3);
#line 272
c_rt_lib0clear(&___nl__4);
#line 272
return ___nl__5;
#line 272
label_1:
#line 272
c_rt_lib0move(&___nl__3, c_rt_lib0priv_as(___nl__5, ___get_global_const(44)));
#line 272
c_rt_lib0clear(&___nl__4);
#line 272
c_rt_lib0clear(&___nl__5);
#line 273
c_rt_lib0move(&___nl__6, ptd0sim());
#line 273
c_rt_lib0move(&___nl__5, ptd0ensure(___nl__6, ___nl__3));
#line 273
c_rt_lib0clear(&___nl__6);
#line 273
c_rt_lib0move(&___nl__4, nparser0sparse(___nl__5, ___nl__0));
#line 273
c_rt_lib0clear(&___nl__5);
#line 274
c_rt_lib0move(&___nl__5, c_rt_lib0priv_is(___nl__4, ___get_global_const(44)));
#line 274
if(c_rt_lib0check_true_native(___nl__5)){ goto label_3;}
#line 280
c_rt_lib0move(&___nl__5, c_rt_lib0priv_is(___nl__4, ___get_global_const(95)));
#line 280
if(c_rt_lib0check_true_native(___nl__5)){ goto label_4;}
#line 280
c_rt_lib0move(&___nl__5,___get_global_const(74));
#line 280
c_rt_lib0move(&___nl__5, c_rt_lib0array_mk(2, ___nl__5, ___nl__4));
#line 280
nl_die_arg(___nl__5);
#line 274
label_3:
#line 274
c_rt_lib0move(&___nl__6, c_rt_lib0priv_as(___nl__4, ___get_global_const(44)));
#line 275
c_rt_lib0move(&___nl__7, module_checker0check_module(___nl__6));
#line 276
c_rt_lib0move(&___nl__8,___get_global_const(25));
#line 276
c_rt_lib0move(&___nl__8, c_rt_lib0get_ref_hash(*___ref___2, ___nl__8));
#line 276
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__7, ___get_global_const(96)));
#line 276
c_rt_lib0delete(hash0set_value(&___nl__8, ___nl__0, ___nl__9));
#line 276
c_rt_lib0clear(&___nl__9);
#line 276
c_rt_lib0move(&___nl__9,___get_global_const(25));
#line 276
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___2, ___nl__9, ___nl__8));
#line 276
c_rt_lib0clear(&___nl__9);
#line 276
c_rt_lib0clear(&___nl__8);
#line 277
c_rt_lib0move(&___nl__8,___get_global_const(24));
#line 277
c_rt_lib0move(&___nl__8, c_rt_lib0get_ref_hash(*___ref___2, ___nl__8));
#line 277
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__7, ___get_global_const(17)));
#line 277
c_rt_lib0delete(hash0set_value(&___nl__8, ___nl__0, ___nl__9));
#line 277
c_rt_lib0clear(&___nl__9);
#line 277
c_rt_lib0move(&___nl__9,___get_global_const(24));
#line 277
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___2, ___nl__9, ___nl__8));
#line 277
c_rt_lib0clear(&___nl__9);
#line 277
c_rt_lib0clear(&___nl__8);
#line 278
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__7, ___get_global_const(17)));
#line 278
c_rt_lib0move(&___nl__8, array0len(___nl__9));
#line 278
c_rt_lib0clear(&___nl__9);
#line 278
c_rt_lib0move(&___nl__9,___get_global_const(1));
#line 278
c_rt_lib0move(&___nl__8, c_rt_lib0num_eq(___nl__8, ___nl__9));
#line 278
c_rt_lib0clear(&___nl__9);
#line 278
c_rt_lib0move(&___nl__8, c_rt_lib0not(___nl__8));
#line 278
c_rt_lib0move(&___nl__8, c_rt_lib0not(___nl__8));
#line 278
if(c_rt_lib0check_true_native(___nl__8)){ goto label_6;}
#line 278
c_rt_lib0move(&___nl__9,___get_global_const(0));
#line 278
c_rt_lib0move(&___nl__9, c_rt_lib0ov_mk_arg(___get_global_const(43), ___nl__9));
#line 278
c_rt_lib0clear(&___nl__0);
#line 278
c_rt_lib0clear(&___nl__1);
#line 278
c_rt_lib0clear(&___nl__3);
#line 278
c_rt_lib0clear(&___nl__4);
#line 278
c_rt_lib0clear(&___nl__5);
#line 278
c_rt_lib0clear(&___nl__6);
#line 278
c_rt_lib0clear(&___nl__7);
#line 278
c_rt_lib0clear(&___nl__8);
#line 278
return ___nl__9;
#line 278
c_rt_lib0clear(&___nl__9);
#line 278
goto label_6;
#line 278
label_6:
#line 278
c_rt_lib0clear(&___nl__8);
#line 279
c_rt_lib0move(&___nl__8, c_rt_lib0ov_mk_arg(___get_global_const(44), ___nl__6));
#line 279
c_rt_lib0clear(&___nl__0);
#line 279
c_rt_lib0clear(&___nl__1);
#line 279
c_rt_lib0clear(&___nl__3);
#line 279
c_rt_lib0clear(&___nl__4);
#line 279
c_rt_lib0clear(&___nl__5);
#line 279
c_rt_lib0clear(&___nl__6);
#line 279
c_rt_lib0clear(&___nl__7);
#line 279
return ___nl__8;
#line 279
c_rt_lib0clear(&___nl__8);
#line 279
c_rt_lib0clear(&___nl__7);
#line 279
c_rt_lib0clear(&___nl__6);
#line 280
goto label_2;
#line 280
label_4:
#line 280
c_rt_lib0move(&___nl__6, c_rt_lib0priv_as(___nl__4, ___get_global_const(95)));
#line 281
c_rt_lib0move(&___nl__7,___get_global_const(25));
#line 281
c_rt_lib0move(&___nl__7, c_rt_lib0get_ref_hash(*___ref___2, ___nl__7));
#line 281
c_rt_lib0move(&___nl__8, c_rt_lib0array_mk(0));
#line 281
c_rt_lib0delete(hash0set_value(&___nl__7, ___nl__0, ___nl__8));
#line 281
c_rt_lib0clear(&___nl__8);
#line 281
c_rt_lib0move(&___nl__8,___get_global_const(25));
#line 281
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___2, ___nl__8, ___nl__7));
#line 281
c_rt_lib0clear(&___nl__8);
#line 281
c_rt_lib0clear(&___nl__7);
#line 282
c_rt_lib0move(&___nl__7, c_rt_lib0array_mk(0));
#line 283
c_rt_lib0move(&___nl__9,___get_global_const(1));
#line 283
c_rt_lib0move(&___nl__10,___get_global_const(2));
#line 283
c_rt_lib0move(&___nl__11, c_rt_lib0array_len(___nl__6));
#line 283
label_9:
#line 283
c_rt_lib0move(&___nl__12, c_rt_lib0ge(___nl__9, ___nl__11));
#line 283
if(c_rt_lib0check_true_native(___nl__12)){ goto label_7;}
#line 283
c_rt_lib0move(&___nl__8, c_rt_lib0array_get(___nl__6, ___nl__9));
#line 284
c_rt_lib0move(&___nl__14, c_rt_lib0hash_get_value_dec(___nl__8, ___get_global_const(97)));
#line 284
c_rt_lib0move(&___nl__15, c_rt_lib0hash_get_value_dec(___nl__8, ___get_global_const(98)));
#line 284
c_rt_lib0move(&___nl__13, c_rt_lib0hash_mk(3, ___get_global_const(97), ___nl__14, ___get_global_const(98), ___nl__15, ___get_global_const(99), ___nl__0));
#line 284
c_rt_lib0clear(&___nl__14);
#line 284
c_rt_lib0clear(&___nl__15);
#line 284
c_rt_lib0delete(array0push(&___nl__7, ___nl__13));
#line 284
c_rt_lib0clear(&___nl__13);
#line 285
c_rt_lib0move(&___nl__9, c_rt_lib0add_mod(___nl__9, ___nl__10));
#line 285
goto label_9;
#line 285
label_7:
#line 285
c_rt_lib0clear(&___nl__8);
#line 285
c_rt_lib0clear(&___nl__9);
#line 285
c_rt_lib0clear(&___nl__10);
#line 285
c_rt_lib0clear(&___nl__11);
#line 285
c_rt_lib0clear(&___nl__12);
#line 286
c_rt_lib0move(&___nl__8,___get_global_const(24));
#line 286
c_rt_lib0move(&___nl__8, c_rt_lib0get_ref_hash(*___ref___2, ___nl__8));
#line 286
c_rt_lib0delete(hash0set_value(&___nl__8, ___nl__0, ___nl__7));
#line 286
c_rt_lib0move(&___nl__9,___get_global_const(24));
#line 286
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___2, ___nl__9, ___nl__8));
#line 286
c_rt_lib0clear(&___nl__9);
#line 286
c_rt_lib0clear(&___nl__8);
#line 287
c_rt_lib0move(&___nl__8,___get_global_const(0));
#line 287
c_rt_lib0move(&___nl__8, c_rt_lib0ov_mk_arg(___get_global_const(43), ___nl__8));
#line 287
c_rt_lib0clear(&___nl__0);
#line 287
c_rt_lib0clear(&___nl__1);
#line 287
c_rt_lib0clear(&___nl__3);
#line 287
c_rt_lib0clear(&___nl__4);
#line 287
c_rt_lib0clear(&___nl__5);
#line 287
c_rt_lib0clear(&___nl__6);
#line 287
c_rt_lib0clear(&___nl__7);
#line 287
return ___nl__8;
#line 287
c_rt_lib0clear(&___nl__8);
#line 287
c_rt_lib0clear(&___nl__7);
#line 287
c_rt_lib0clear(&___nl__6);
#line 288
goto label_2;
#line 288
label_2:
#line 288
c_rt_lib0clear(&___nl__5);
#line 288
c_rt_lib0clear(&___nl__3);
#line 288
c_rt_lib0clear(&___nl__4);
#line 288
c_rt_lib0clear(&___nl__0);
#line 288
c_rt_lib0clear(&___nl__1);
#line 288
return NULL;
}

ImmT compiler_priv0get_mathematical_func(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
compiler_priv0__const__init();
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
ImmT ___nl__9 = NULL;
ImmT ___nl__10 = NULL;
ImmT ___nl__11 = NULL;
ImmT ___nl__12 = NULL;
#line 291
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(0));
#line 292
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(62)));
#line 292
c_rt_lib0move(&___nl__2, c_fe_lib0file_to_string(___nl__3));
#line 292
c_rt_lib0clear(&___nl__3);
#line 292
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(44)));
#line 292
if(c_rt_lib0check_true_native(___nl__3)){ goto label_2;}
#line 305
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(43)));
#line 305
if(c_rt_lib0check_true_native(___nl__3)){ goto label_3;}
#line 305
c_rt_lib0move(&___nl__3,___get_global_const(74));
#line 305
c_rt_lib0move(&___nl__3, c_rt_lib0array_mk(2, ___nl__3, ___nl__2));
#line 305
nl_die_arg(___nl__3);
#line 292
label_2:
#line 292
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(44)));
#line 293
c_rt_lib0move(&___nl__5,___get_global_const(100));
#line 293
c_rt_lib0delete(c_fe_lib0print(___nl__5));
#line 293
c_rt_lib0clear(&___nl__5);
#line 294
c_rt_lib0move(&___nl__5, dfile0try_sload(___nl__4));
#line 295
c_rt_lib0move(&___nl__6, c_rt_lib0array_mk(0));
#line 296
c_rt_lib0move(&___nl__7, c_rt_lib0priv_is(___nl__5, ___get_global_const(44)));
#line 296
if(c_rt_lib0check_true_native(___nl__7)){ goto label_5;}
#line 298
c_rt_lib0move(&___nl__7, c_rt_lib0priv_is(___nl__5, ___get_global_const(43)));
#line 298
if(c_rt_lib0check_true_native(___nl__7)){ goto label_6;}
#line 298
c_rt_lib0move(&___nl__7,___get_global_const(74));
#line 298
c_rt_lib0move(&___nl__7, c_rt_lib0array_mk(2, ___nl__7, ___nl__5));
#line 298
nl_die_arg(___nl__7);
#line 296
label_5:
#line 296
c_rt_lib0move(&___nl__8, c_rt_lib0priv_as(___nl__5, ___get_global_const(44)));
#line 297
c_rt_lib0copy(&___nl__6, ___nl__8);
#line 297
c_rt_lib0clear(&___nl__8);
#line 298
goto label_4;
#line 298
label_6:
#line 298
c_rt_lib0move(&___nl__8, c_rt_lib0priv_as(___nl__5, ___get_global_const(43)));
#line 299
c_rt_lib0move(&___nl__9,___get_global_const(101));
#line 299
c_rt_lib0delete(c_fe_lib0print(___nl__9));
#line 299
c_rt_lib0clear(&___nl__9);
#line 300
c_rt_lib0delete(c_fe_lib0print(___nl__8));
#line 300
c_rt_lib0clear(&___nl__8);
#line 301
goto label_4;
#line 301
label_4:
#line 301
c_rt_lib0clear(&___nl__7);
#line 302
c_rt_lib0move(&___nl__8,___get_global_const(1));
#line 302
c_rt_lib0move(&___nl__9,___get_global_const(2));
#line 302
c_rt_lib0move(&___nl__10, c_rt_lib0array_len(___nl__6));
#line 302
label_9:
#line 302
c_rt_lib0move(&___nl__11, c_rt_lib0ge(___nl__8, ___nl__10));
#line 302
if(c_rt_lib0check_true_native(___nl__11)){ goto label_7;}
#line 302
c_rt_lib0move(&___nl__7, c_rt_lib0array_get(___nl__6, ___nl__8));
#line 303
c_rt_lib0move(&___nl__12,___get_global_const(2));
#line 303
c_rt_lib0delete(hash0set_value(&___nl__1, ___nl__7, ___nl__12));
#line 303
c_rt_lib0clear(&___nl__12);
#line 304
c_rt_lib0move(&___nl__8, c_rt_lib0add_mod(___nl__8, ___nl__9));
#line 304
goto label_9;
#line 304
label_7:
#line 304
c_rt_lib0clear(&___nl__7);
#line 304
c_rt_lib0clear(&___nl__8);
#line 304
c_rt_lib0clear(&___nl__9);
#line 304
c_rt_lib0clear(&___nl__10);
#line 304
c_rt_lib0clear(&___nl__11);
#line 304
c_rt_lib0clear(&___nl__5);
#line 304
c_rt_lib0clear(&___nl__6);
#line 304
c_rt_lib0clear(&___nl__4);
#line 305
goto label_1;
#line 305
label_3:
#line 305
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(43)));
#line 306
c_rt_lib0move(&___nl__5,___get_global_const(102));
#line 306
c_rt_lib0delete(c_fe_lib0print(___nl__5));
#line 306
c_rt_lib0clear(&___nl__5);
#line 306
c_rt_lib0clear(&___nl__4);
#line 307
goto label_1;
#line 307
label_1:
#line 307
c_rt_lib0clear(&___nl__2);
#line 307
c_rt_lib0clear(&___nl__3);
#line 308
c_rt_lib0clear(&___nl__0);
#line 308
return ___nl__1;
#line 308
c_rt_lib0clear(&___nl__1);
#line 308
c_rt_lib0clear(&___nl__0);
#line 308
return NULL;
}

ImmT compiler_priv0compile_ide(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
compiler_priv0__const__init();
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
ImmT ___nl__9 = NULL;
ImmT ___nl__10 = NULL;
ImmT ___nl__11 = NULL;
ImmT ___nl__12 = NULL;
ImmT ___nl__13 = NULL;
ImmT ___nl__14 = NULL;
ImmT ___nl__15 = NULL;
ImmT ___nl__16 = NULL;
ImmT ___nl__17 = NULL;
ImmT ___nl__18 = NULL;
ImmT ___nl__19 = NULL;
ImmT ___nl__20 = NULL;
ImmT ___nl__21 = NULL;
#line 311
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(0));
#line 312
c_rt_lib0move(&___nl__2, c_rt_lib0hash_mk(0));
#line 313
c_rt_lib0move(&___nl__3, c_rt_lib0hash_mk(0));
#line 314
c_rt_lib0move(&___nl__4, c_rt_lib0hash_mk(0));
#line 315
c_rt_lib0move(&___nl__6, c_rt_lib0hash_mk(0));
#line 315
c_rt_lib0move(&___nl__7, c_rt_lib0hash_mk(0));
#line 315
c_rt_lib0move(&___nl__8, c_rt_lib0hash_mk(0));
#line 315
c_rt_lib0move(&___nl__9, c_rt_lib0hash_mk(0));
#line 315
c_rt_lib0move(&___nl__10, c_rt_lib0ov_mk_none(___get_global_const(44)));
#line 315
c_rt_lib0move(&___nl__5, c_rt_lib0hash_mk(5, ___get_global_const(24), ___nl__6, ___get_global_const(25), ___nl__7, ___get_global_const(26), ___nl__8, ___get_global_const(27), ___nl__9, ___get_global_const(28), ___nl__10));
#line 315
c_rt_lib0clear(&___nl__6);
#line 315
c_rt_lib0clear(&___nl__7);
#line 315
c_rt_lib0clear(&___nl__8);
#line 315
c_rt_lib0clear(&___nl__9);
#line 315
c_rt_lib0clear(&___nl__10);
#line 316
c_rt_lib0move(&___nl__7, compiler_priv0get_mathematical_func(___nl__0));
#line 316
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(61)));
#line 316
c_rt_lib0move(&___nl__6, post_processing0init(___nl__7, ___nl__8));
#line 316
c_rt_lib0clear(&___nl__8);
#line 316
c_rt_lib0clear(&___nl__7);
#line 317
c_rt_lib0move(&___nl__7, c_rt_lib0hash_mk(0));
#line 318
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(64)));
#line 318
c_rt_lib0move(&___nl__8, compiler_priv0get_generator_state(___nl__9));
#line 318
c_rt_lib0clear(&___nl__9);
#line 319
label_2:
#line 320
c_rt_lib0move(&___nl__9, c_rt_lib0hash_mk(0));
#line 320
c_rt_lib0copy(&___nl__10, ___nl__9);
#line 320
c_rt_lib0hash_set_value_dec(&___nl__5, ___get_global_const(26), ___nl__10);
#line 320
c_rt_lib0clear(&___nl__9);
#line 320
c_rt_lib0clear(&___nl__10);
#line 321
c_rt_lib0move(&___nl__9, c_rt_lib0hash_mk(0));
#line 321
c_rt_lib0copy(&___nl__10, ___nl__9);
#line 321
c_rt_lib0hash_set_value_dec(&___nl__5, ___get_global_const(27), ___nl__10);
#line 321
c_rt_lib0clear(&___nl__9);
#line 321
c_rt_lib0clear(&___nl__10);
#line 322
c_rt_lib0move(&___nl__9, c_rt_lib0ov_mk_none(___get_global_const(44)));
#line 322
c_rt_lib0copy(&___nl__10, ___nl__9);
#line 322
c_rt_lib0hash_set_value_dec(&___nl__5, ___get_global_const(28), ___nl__10);
#line 322
c_rt_lib0clear(&___nl__9);
#line 322
c_rt_lib0clear(&___nl__10);
#line 323
c_rt_lib0move(&___nl__9, compiler_priv0get_files_to_parse(___nl__0));
#line 324
c_rt_lib0move(&___nl__10,___get_global_const(1));
#line 325
c_rt_lib0move(&___nl__13, c_rt_lib0init_iter(___nl__9));
#line 325
label_5:
#line 325
c_rt_lib0move(&___nl__11, c_rt_lib0is_end_hash(___nl__13));
#line 325
if(c_rt_lib0check_true_native(___nl__11)){ goto label_3;}
#line 325
c_rt_lib0move(&___nl__11, c_rt_lib0get_key_iter(___nl__13));
#line 325
c_rt_lib0move(&___nl__12, c_rt_lib0hash_get_value(___nl__9, ___nl__11));
#line 326
c_rt_lib0move(&___nl__15, c_rt_lib0hash_get_value_dec(___nl__12, ___get_global_const(39)));
#line 326
c_rt_lib0move(&___nl__14, c_fe_lib0get_modif_time(___nl__15));
#line 326
c_rt_lib0clear(&___nl__15);
#line 327
c_rt_lib0copy(&___nl__15, ___nl__14);
#line 327
c_rt_lib0move(&___nl__15, c_rt_lib0priv_is(___nl__15, ___get_global_const(43)));
#line 327
c_rt_lib0move(&___nl__15, c_rt_lib0not(___nl__15));
#line 327
if(c_rt_lib0check_true_native(___nl__15)){ goto label_7;}
#line 327
c_rt_lib0clear(&___nl__14);
#line 327
c_rt_lib0clear(&___nl__15);
#line 327
goto label_4;
#line 327
goto label_7;
#line 327
label_7:
#line 327
c_rt_lib0clear(&___nl__15);
#line 328
c_rt_lib0copy(&___nl__15, ___nl__14);
#line 328
c_rt_lib0move(&___nl__15, c_rt_lib0priv_as(___nl__15, ___get_global_const(44)));
#line 328
c_rt_lib0copy(&___nl__14, ___nl__15);
#line 328
c_rt_lib0clear(&___nl__15);
#line 329
c_rt_lib0move(&___nl__15, hash0has_key(___nl__1, ___nl__11));
#line 329
c_rt_lib0move(&___nl__15, c_rt_lib0not(___nl__15));
#line 329
if(c_rt_lib0check_true_native(___nl__15)){ goto label_9;}
#line 330
c_rt_lib0move(&___nl__16, hash0get_value(___nl__1, ___nl__11));
#line 331
c_rt_lib0move(&___nl__17, c_rt_lib0gt(___nl__14, ___nl__16));
#line 331
c_rt_lib0move(&___nl__17, c_rt_lib0not(___nl__17));
#line 331
c_rt_lib0move(&___nl__17, c_rt_lib0not(___nl__17));
#line 331
if(c_rt_lib0check_true_native(___nl__17)){ goto label_11;}
#line 331
c_rt_lib0clear(&___nl__14);
#line 331
c_rt_lib0clear(&___nl__15);
#line 331
c_rt_lib0clear(&___nl__16);
#line 331
c_rt_lib0clear(&___nl__17);
#line 331
goto label_4;
#line 331
goto label_11;
#line 331
label_11:
#line 331
c_rt_lib0clear(&___nl__17);
#line 331
c_rt_lib0clear(&___nl__16);
#line 332
goto label_9;
#line 332
label_9:
#line 332
c_rt_lib0clear(&___nl__15);
#line 333
c_rt_lib0delete(hash0set_value(&___nl__1, ___nl__11, ___nl__14));
#line 334
c_rt_lib0delete(hash0set_value(&___nl__4, ___nl__11, ___nl__12));
#line 335
c_rt_lib0move(&___nl__15,___get_global_const(2));
#line 335
c_rt_lib0move(&___nl__10, c_rt_lib0add_mod(___nl__10, ___nl__15));
#line 335
c_rt_lib0clear(&___nl__15);
#line 335
c_rt_lib0clear(&___nl__14);
#line 335
label_4:
#line 336
c_rt_lib0move(&___nl__13, c_rt_lib0next_iter(___nl__13));
#line 336
goto label_5;
#line 336
label_3:
#line 336
c_rt_lib0clear(&___nl__11);
#line 336
c_rt_lib0clear(&___nl__12);
#line 336
c_rt_lib0clear(&___nl__13);
#line 337
c_rt_lib0move(&___nl__13, c_rt_lib0init_iter(___nl__7));
#line 337
label_14:
#line 337
c_rt_lib0move(&___nl__11, c_rt_lib0is_end_hash(___nl__13));
#line 337
if(c_rt_lib0check_true_native(___nl__11)){ goto label_12;}
#line 337
c_rt_lib0move(&___nl__11, c_rt_lib0get_key_iter(___nl__13));
#line 337
c_rt_lib0move(&___nl__12, c_rt_lib0hash_get_value(___nl__7, ___nl__11));
#line 338
c_rt_lib0move(&___nl__14, hash0has_key(___nl__9, ___nl__11));
#line 338
c_rt_lib0move(&___nl__14, c_rt_lib0not(___nl__14));
#line 338
c_rt_lib0move(&___nl__14, c_rt_lib0not(___nl__14));
#line 338
if(c_rt_lib0check_true_native(___nl__14)){ goto label_16;}
#line 339
c_rt_lib0move(&___nl__15,___get_global_const(2));
#line 339
c_rt_lib0move(&___nl__10, c_rt_lib0add_mod(___nl__10, ___nl__15));
#line 339
c_rt_lib0clear(&___nl__15);
#line 340
c_rt_lib0move(&___nl__15,___get_global_const(24));
#line 340
c_rt_lib0move(&___nl__15, c_rt_lib0get_ref_hash(___nl__5, ___nl__15));
#line 340
c_rt_lib0delete(hash0delete(&___nl__15, ___nl__11));
#line 340
c_rt_lib0move(&___nl__16,___get_global_const(24));
#line 340
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__5, ___nl__16, ___nl__15));
#line 340
c_rt_lib0clear(&___nl__16);
#line 340
c_rt_lib0clear(&___nl__15);
#line 341
c_rt_lib0move(&___nl__15,___get_global_const(25));
#line 341
c_rt_lib0move(&___nl__15, c_rt_lib0get_ref_hash(___nl__5, ___nl__15));
#line 341
c_rt_lib0delete(hash0delete(&___nl__15, ___nl__11));
#line 341
c_rt_lib0move(&___nl__16,___get_global_const(25));
#line 341
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__5, ___nl__16, ___nl__15));
#line 341
c_rt_lib0clear(&___nl__16);
#line 341
c_rt_lib0clear(&___nl__15);
#line 342
c_rt_lib0delete(hash0delete(&___nl__2, ___nl__11));
#line 343
c_rt_lib0delete(hash0delete(&___nl__1, ___nl__11));
#line 344
c_rt_lib0delete(hash0delete(&___nl__4, ___nl__11));
#line 345
c_rt_lib0delete(hash0delete(&___nl__3, ___nl__11));
#line 346
c_rt_lib0delete(post_processing0clear_module_from_state(&___nl__6, ___nl__11));
#line 347
c_rt_lib0move(&___nl__15, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(64)));
#line 347
c_rt_lib0move(&___nl__15, c_rt_lib0priv_is(___nl__15, ___get_global_const(31)));
#line 347
c_rt_lib0move(&___nl__15, c_rt_lib0not(___nl__15));
#line 347
if(c_rt_lib0check_true_native(___nl__15)){ goto label_18;}
#line 348
c_rt_lib0delete(generator_c0clear_module_from_state(&___nl__8, ___nl__11));
#line 349
goto label_18;
#line 349
label_18:
#line 349
c_rt_lib0clear(&___nl__15);
#line 350
goto label_16;
#line 350
label_16:
#line 350
c_rt_lib0clear(&___nl__14);
#line 351
c_rt_lib0move(&___nl__13, c_rt_lib0next_iter(___nl__13));
#line 351
goto label_14;
#line 351
label_12:
#line 351
c_rt_lib0clear(&___nl__11);
#line 351
c_rt_lib0clear(&___nl__12);
#line 351
c_rt_lib0clear(&___nl__13);
#line 352
c_rt_lib0copy(&___nl__7, ___nl__9);
#line 353
c_rt_lib0move(&___nl__11,___get_global_const(1));
#line 353
c_rt_lib0move(&___nl__11, c_rt_lib0num_eq(___nl__10, ___nl__11));
#line 353
c_rt_lib0move(&___nl__11, c_rt_lib0not(___nl__11));
#line 353
if(c_rt_lib0check_true_native(___nl__11)){ goto label_20;}
#line 354
c_rt_lib0move(&___nl__12,___get_global_const(2));
#line 354
c_rt_lib0delete(c_fe_lib0sleep(___nl__12));
#line 354
c_rt_lib0clear(&___nl__12);
#line 355
c_rt_lib0clear(&___nl__9);
#line 355
c_rt_lib0clear(&___nl__10);
#line 355
c_rt_lib0clear(&___nl__11);
#line 355
goto label_2;
#line 356
goto label_20;
#line 356
label_20:
#line 356
c_rt_lib0clear(&___nl__11);
#line 357
c_rt_lib0move(&___nl__11, c_rt_lib0hash_mk(0));
#line 358
c_rt_lib0move(&___nl__14, c_rt_lib0init_iter(___nl__4));
#line 358
label_23:
#line 358
c_rt_lib0move(&___nl__12, c_rt_lib0is_end_hash(___nl__14));
#line 358
if(c_rt_lib0check_true_native(___nl__12)){ goto label_21;}
#line 358
c_rt_lib0move(&___nl__12, c_rt_lib0get_key_iter(___nl__14));
#line 358
c_rt_lib0move(&___nl__13, c_rt_lib0hash_get_value(___nl__4, ___nl__12));
#line 359
c_rt_lib0move(&___nl__16, c_rt_lib0hash_get_value_dec(___nl__13, ___get_global_const(39)));
#line 359
c_rt_lib0move(&___nl__15, compiler_priv0parse_module(___nl__12, ___nl__16, &___nl__5));
#line 359
c_rt_lib0clear(&___nl__16);
#line 359
c_rt_lib0move(&___nl__16, c_rt_lib0priv_is(___nl__15, ___get_global_const(44)));
#line 359
if(c_rt_lib0check_true_native(___nl__16)){ goto label_25;}
#line 362
c_rt_lib0move(&___nl__16, c_rt_lib0priv_is(___nl__15, ___get_global_const(43)));
#line 362
if(c_rt_lib0check_true_native(___nl__16)){ goto label_26;}
#line 362
c_rt_lib0move(&___nl__16,___get_global_const(74));
#line 362
c_rt_lib0move(&___nl__16, c_rt_lib0array_mk(2, ___nl__16, ___nl__15));
#line 362
nl_die_arg(___nl__16);
#line 359
label_25:
#line 359
c_rt_lib0move(&___nl__17, c_rt_lib0priv_as(___nl__15, ___get_global_const(44)));
#line 360
c_rt_lib0delete(hash0set_value(&___nl__2, ___nl__12, ___nl__17));
#line 361
c_rt_lib0delete(hash0set_value(&___nl__3, ___nl__12, ___nl__17));
#line 361
c_rt_lib0clear(&___nl__17);
#line 362
goto label_24;
#line 362
label_26:
#line 362
c_rt_lib0move(&___nl__17, c_rt_lib0priv_as(___nl__15, ___get_global_const(43)));
#line 363
c_rt_lib0delete(hash0set_value(&___nl__11, ___nl__12, ___nl__13));
#line 363
c_rt_lib0clear(&___nl__17);
#line 364
goto label_24;
#line 364
label_24:
#line 364
c_rt_lib0clear(&___nl__15);
#line 364
c_rt_lib0clear(&___nl__16);
#line 365
c_rt_lib0move(&___nl__14, c_rt_lib0next_iter(___nl__14));
#line 365
goto label_23;
#line 365
label_21:
#line 365
c_rt_lib0clear(&___nl__12);
#line 365
c_rt_lib0clear(&___nl__13);
#line 365
c_rt_lib0clear(&___nl__14);
#line 366
c_rt_lib0copy(&___nl__4, ___nl__11);
#line 367
c_rt_lib0move(&___nl__12, hash0size(___nl__4));
#line 367
c_rt_lib0move(&___nl__13,___get_global_const(1));
#line 367
c_rt_lib0move(&___nl__12, c_rt_lib0gt(___nl__12, ___nl__13));
#line 367
c_rt_lib0clear(&___nl__13);
#line 367
c_rt_lib0move(&___nl__12, c_rt_lib0not(___nl__12));
#line 367
if(c_rt_lib0check_true_native(___nl__12)){ goto label_28;}
#line 368
c_rt_lib0delete(compiler_priv0show_and_count_errors(___nl__5, ___nl__0));
#line 369
c_rt_lib0move(&___nl__13, string0lf());
#line 369
c_rt_lib0move(&___nl__14,___get_global_const(103));
#line 369
c_rt_lib0move(&___nl__13, c_rt_lib0concat_add(___nl__13, ___nl__14));
#line 369
c_rt_lib0clear(&___nl__14);
#line 369
c_rt_lib0move(&___nl__14, hash0size(___nl__4));
#line 369
c_rt_lib0move(&___nl__13, c_rt_lib0concat_add(___nl__13, ___nl__14));
#line 369
c_rt_lib0clear(&___nl__14);
#line 369
c_rt_lib0move(&___nl__14,___get_global_const(104));
#line 369
c_rt_lib0move(&___nl__13, c_rt_lib0concat_add(___nl__13, ___nl__14));
#line 369
c_rt_lib0clear(&___nl__14);
#line 369
c_rt_lib0delete(c_fe_lib0print(___nl__13));
#line 369
c_rt_lib0clear(&___nl__13);
#line 370
c_rt_lib0move(&___nl__13,___get_global_const(105));
#line 370
c_rt_lib0delete(c_fe_lib0print(___nl__13));
#line 370
c_rt_lib0clear(&___nl__13);
#line 371
c_rt_lib0clear(&___nl__9);
#line 371
c_rt_lib0clear(&___nl__10);
#line 371
c_rt_lib0clear(&___nl__11);
#line 371
c_rt_lib0clear(&___nl__12);
#line 371
goto label_2;
#line 372
goto label_28;
#line 372
label_28:
#line 372
c_rt_lib0clear(&___nl__12);
#line 373
c_rt_lib0move(&___nl__12, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(60)));
#line 373
c_rt_lib0delete(compiler_priv0check_modules(___nl__2, &___nl__5, ___nl__12));
#line 373
c_rt_lib0clear(&___nl__12);
#line 374
c_rt_lib0move(&___nl__12, compiler_priv0show_and_count_errors(___nl__5, ___nl__0));
#line 374
c_rt_lib0move(&___nl__13,___get_global_const(1));
#line 374
c_rt_lib0move(&___nl__12, c_rt_lib0gt(___nl__12, ___nl__13));
#line 374
c_rt_lib0clear(&___nl__13);
#line 374
c_rt_lib0move(&___nl__12, c_rt_lib0not(___nl__12));
#line 374
if(c_rt_lib0check_true_native(___nl__12)){ goto label_30;}
#line 375
c_rt_lib0move(&___nl__13,___get_global_const(105));
#line 375
c_rt_lib0delete(c_fe_lib0print(___nl__13));
#line 375
c_rt_lib0clear(&___nl__13);
#line 376
c_rt_lib0clear(&___nl__9);
#line 376
c_rt_lib0clear(&___nl__10);
#line 376
c_rt_lib0clear(&___nl__11);
#line 376
c_rt_lib0clear(&___nl__12);
#line 376
goto label_2;
#line 377
goto label_30;
#line 377
label_30:
#line 377
c_rt_lib0clear(&___nl__12);
#line 378
c_rt_lib0move(&___nl__12, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(64)));
#line 378
c_rt_lib0move(&___nl__12, c_rt_lib0priv_is(___nl__12, ___get_global_const(33)));
#line 378
if(c_rt_lib0check_true_native(___nl__12)){ goto label_33;}
#line 378
c_rt_lib0move(&___nl__12, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(64)));
#line 378
c_rt_lib0move(&___nl__12, c_rt_lib0priv_is(___nl__12, ___get_global_const(32)));
#line 378
label_33:
#line 378
c_rt_lib0move(&___nl__12, c_rt_lib0not(___nl__12));
#line 378
c_rt_lib0move(&___nl__12, c_rt_lib0not(___nl__12));
#line 378
if(c_rt_lib0check_true_native(___nl__12)){ goto label_32;}
#line 379
c_rt_lib0move(&___nl__13,___get_global_const(106));
#line 379
c_rt_lib0delete(c_fe_lib0print(___nl__13));
#line 379
c_rt_lib0clear(&___nl__13);
#line 380
c_rt_lib0move(&___nl__13, c_rt_lib0hash_mk(0));
#line 381
c_rt_lib0move(&___nl__14, compiler_priv0translate(___nl__3, &___nl__6));
#line 382
c_rt_lib0move(&___nl__16, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(59)));
#line 382
c_rt_lib0move(&___nl__17, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(64)));
#line 382
c_rt_lib0move(&___nl__15, compiler_priv0generate_modules_to_files(___nl__14, ___nl__9, ___nl__16, &___nl__8, ___nl__17));
#line 382
c_rt_lib0clear(&___nl__17);
#line 382
c_rt_lib0clear(&___nl__16);
#line 382
c_rt_lib0move(&___nl__16, c_rt_lib0priv_is(___nl__15, ___get_global_const(43)));
#line 382
if(c_rt_lib0check_true_native(___nl__16)){ goto label_35;}
#line 386
c_rt_lib0move(&___nl__16, c_rt_lib0priv_is(___nl__15, ___get_global_const(44)));
#line 386
if(c_rt_lib0check_true_native(___nl__16)){ goto label_36;}
#line 386
c_rt_lib0move(&___nl__16,___get_global_const(74));
#line 386
c_rt_lib0move(&___nl__16, c_rt_lib0array_mk(2, ___nl__16, ___nl__15));
#line 386
nl_die_arg(___nl__16);
#line 382
label_35:
#line 382
c_rt_lib0move(&___nl__17, c_rt_lib0priv_as(___nl__15, ___get_global_const(43)));
#line 383
c_rt_lib0move(&___nl__20, c_rt_lib0init_iter(___nl__17));
#line 383
label_39:
#line 383
c_rt_lib0move(&___nl__18, c_rt_lib0is_end_hash(___nl__20));
#line 383
if(c_rt_lib0check_true_native(___nl__18)){ goto label_37;}
#line 383
c_rt_lib0move(&___nl__18, c_rt_lib0get_key_iter(___nl__20));
#line 383
c_rt_lib0move(&___nl__19, c_rt_lib0hash_get_value(___nl__17, ___nl__18));
#line 384
c_rt_lib0move(&___nl__21, hash0get_value(___nl__2, ___nl__18));
#line 384
c_rt_lib0delete(hash0set_value(&___nl__13, ___nl__18, ___nl__21));
#line 384
c_rt_lib0clear(&___nl__21);
#line 385
c_rt_lib0move(&___nl__20, c_rt_lib0next_iter(___nl__20));
#line 385
goto label_39;
#line 385
label_37:
#line 385
c_rt_lib0clear(&___nl__18);
#line 385
c_rt_lib0clear(&___nl__19);
#line 385
c_rt_lib0clear(&___nl__20);
#line 385
c_rt_lib0clear(&___nl__17);
#line 386
goto label_34;
#line 386
label_36:
#line 386
c_rt_lib0move(&___nl__17, c_rt_lib0priv_as(___nl__15, ___get_global_const(44)));
#line 386
c_rt_lib0clear(&___nl__17);
#line 387
goto label_34;
#line 387
label_34:
#line 387
c_rt_lib0clear(&___nl__15);
#line 387
c_rt_lib0clear(&___nl__16);
#line 388
c_rt_lib0copy(&___nl__3, ___nl__13);
#line 388
c_rt_lib0clear(&___nl__13);
#line 388
c_rt_lib0clear(&___nl__14);
#line 389
goto label_31;
#line 389
label_32:
#line 390
c_rt_lib0move(&___nl__13, c_rt_lib0hash_mk(0));
#line 391
c_rt_lib0move(&___nl__16, c_rt_lib0init_iter(___nl__3));
#line 391
label_42:
#line 391
c_rt_lib0move(&___nl__14, c_rt_lib0is_end_hash(___nl__16));
#line 391
if(c_rt_lib0check_true_native(___nl__14)){ goto label_40;}
#line 391
c_rt_lib0move(&___nl__14, c_rt_lib0get_key_iter(___nl__16));
#line 391
c_rt_lib0move(&___nl__15, c_rt_lib0hash_get_value(___nl__3, ___nl__14));
#line 392
c_rt_lib0move(&___nl__17,___get_global_const(107));
#line 392
c_rt_lib0move(&___nl__17, c_rt_lib0concat_add(___nl__17, ___nl__14));
#line 392
c_rt_lib0delete(c_fe_lib0print(___nl__17));
#line 392
c_rt_lib0clear(&___nl__17);
#line 393
c_rt_lib0move(&___nl__18, hash0get_value(___nl__9, ___nl__14));
#line 393
c_rt_lib0move(&___nl__18, c_rt_lib0hash_get_value_dec(___nl__18, ___get_global_const(40)));
#line 393
c_rt_lib0move(&___nl__17, compiler_priv0save_module_to_file(___nl__15, ___nl__18));
#line 393
c_rt_lib0clear(&___nl__18);
#line 393
c_rt_lib0move(&___nl__18, c_rt_lib0priv_is(___nl__17, ___get_global_const(43)));
#line 393
if(c_rt_lib0check_true_native(___nl__18)){ goto label_44;}
#line 396
c_rt_lib0move(&___nl__18, c_rt_lib0priv_is(___nl__17, ___get_global_const(44)));
#line 396
if(c_rt_lib0check_true_native(___nl__18)){ goto label_45;}
#line 396
c_rt_lib0move(&___nl__18,___get_global_const(74));
#line 396
c_rt_lib0move(&___nl__18, c_rt_lib0array_mk(2, ___nl__18, ___nl__17));
#line 396
nl_die_arg(___nl__18);
#line 393
label_44:
#line 393
c_rt_lib0move(&___nl__19, c_rt_lib0priv_as(___nl__17, ___get_global_const(43)));
#line 394
c_rt_lib0move(&___nl__20,___get_global_const(108));
#line 394
c_rt_lib0move(&___nl__20, c_rt_lib0concat_add(___nl__20, ___nl__19));
#line 394
c_rt_lib0delete(c_fe_lib0print(___nl__20));
#line 394
c_rt_lib0clear(&___nl__20);
#line 395
c_rt_lib0delete(hash0set_value(&___nl__13, ___nl__14, ___nl__15));
#line 395
c_rt_lib0clear(&___nl__19);
#line 396
goto label_43;
#line 396
label_45:
#line 396
c_rt_lib0move(&___nl__19, c_rt_lib0priv_as(___nl__17, ___get_global_const(44)));
#line 396
c_rt_lib0clear(&___nl__19);
#line 397
goto label_43;
#line 397
label_43:
#line 397
c_rt_lib0clear(&___nl__17);
#line 397
c_rt_lib0clear(&___nl__18);
#line 398
c_rt_lib0move(&___nl__16, c_rt_lib0next_iter(___nl__16));
#line 398
goto label_42;
#line 398
label_40:
#line 398
c_rt_lib0clear(&___nl__14);
#line 398
c_rt_lib0clear(&___nl__15);
#line 398
c_rt_lib0clear(&___nl__16);
#line 399
c_rt_lib0copy(&___nl__3, ___nl__13);
#line 399
c_rt_lib0clear(&___nl__13);
#line 400
goto label_31;
#line 400
label_31:
#line 400
c_rt_lib0clear(&___nl__12);
#line 401
c_rt_lib0move(&___nl__12, hash0size(___nl__3));
#line 401
c_rt_lib0move(&___nl__13,___get_global_const(1));
#line 401
c_rt_lib0move(&___nl__12, c_rt_lib0gt(___nl__12, ___nl__13));
#line 401
c_rt_lib0clear(&___nl__13);
#line 401
c_rt_lib0move(&___nl__12, c_rt_lib0not(___nl__12));
#line 401
if(c_rt_lib0check_true_native(___nl__12)){ goto label_47;}
#line 402
c_rt_lib0move(&___nl__13,___get_global_const(109));
#line 402
c_rt_lib0move(&___nl__14, hash0size(___nl__3));
#line 402
c_rt_lib0move(&___nl__13, c_rt_lib0concat_add(___nl__13, ___nl__14));
#line 402
c_rt_lib0clear(&___nl__14);
#line 402
c_rt_lib0move(&___nl__14,___get_global_const(110));
#line 402
c_rt_lib0move(&___nl__13, c_rt_lib0concat_add(___nl__13, ___nl__14));
#line 402
c_rt_lib0clear(&___nl__14);
#line 403
c_rt_lib0move(&___nl__14, string0lf());
#line 403
c_rt_lib0move(&___nl__15,___get_global_const(108));
#line 403
c_rt_lib0move(&___nl__14, c_rt_lib0concat_add(___nl__14, ___nl__15));
#line 403
c_rt_lib0clear(&___nl__15);
#line 403
c_rt_lib0move(&___nl__14, c_rt_lib0concat_add(___nl__14, ___nl__13));
#line 403
c_rt_lib0delete(c_fe_lib0print(___nl__14));
#line 403
c_rt_lib0clear(&___nl__14);
#line 403
c_rt_lib0clear(&___nl__13);
#line 404
goto label_46;
#line 404
label_47:
#line 405
c_rt_lib0move(&___nl__13, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(63)));
#line 405
c_rt_lib0move(&___nl__13, c_rt_lib0priv_is(___nl__13, ___get_global_const(54)));
#line 405
c_rt_lib0move(&___nl__13, c_rt_lib0not(___nl__13));
#line 405
if(c_rt_lib0check_true_native(___nl__13)){ goto label_49;}
#line 405
c_rt_lib0move(&___nl__14, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(63)));
#line 405
c_rt_lib0move(&___nl__14, c_rt_lib0priv_as(___nl__14, ___get_global_const(54)));
#line 405
c_rt_lib0delete(c_fe_lib0exec_cmd(___nl__14));
#line 405
c_rt_lib0clear(&___nl__14);
#line 405
goto label_49;
#line 405
label_49:
#line 405
c_rt_lib0clear(&___nl__13);
#line 406
c_rt_lib0move(&___nl__13, string0lf());
#line 406
c_rt_lib0move(&___nl__14,___get_global_const(111));
#line 406
c_rt_lib0move(&___nl__13, c_rt_lib0concat_add(___nl__13, ___nl__14));
#line 406
c_rt_lib0clear(&___nl__14);
#line 406
c_rt_lib0delete(c_fe_lib0print(___nl__13));
#line 406
c_rt_lib0clear(&___nl__13);
#line 407
goto label_46;
#line 407
label_46:
#line 407
c_rt_lib0clear(&___nl__12);
#line 408
c_rt_lib0move(&___nl__12,___get_global_const(105));
#line 408
c_rt_lib0delete(c_fe_lib0print(___nl__12));
#line 408
c_rt_lib0clear(&___nl__12);
#line 408
c_rt_lib0clear(&___nl__9);
#line 408
c_rt_lib0clear(&___nl__10);
#line 408
c_rt_lib0clear(&___nl__11);
#line 319
goto label_2;
#line 319
c_rt_lib0clear(&___nl__1);
#line 319
c_rt_lib0clear(&___nl__2);
#line 319
c_rt_lib0clear(&___nl__3);
#line 319
c_rt_lib0clear(&___nl__4);
#line 319
c_rt_lib0clear(&___nl__5);
#line 319
c_rt_lib0clear(&___nl__6);
#line 319
c_rt_lib0clear(&___nl__7);
#line 319
c_rt_lib0clear(&___nl__8);
#line 319
c_rt_lib0clear(&___nl__0);
#line 319
return NULL;
}

ImmT compiler_priv0compile_strict_file(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
compiler_priv0__const__init();
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
ImmT ___nl__9 = NULL;
ImmT ___nl__10 = NULL;
ImmT ___nl__11 = NULL;
ImmT ___nl__12 = NULL;
#line 412
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(0));
#line 413
c_rt_lib0move(&___nl__3, c_rt_lib0hash_mk(0));
#line 413
c_rt_lib0move(&___nl__4, c_rt_lib0hash_mk(0));
#line 413
c_rt_lib0move(&___nl__5, c_rt_lib0hash_mk(0));
#line 413
c_rt_lib0move(&___nl__6, c_rt_lib0hash_mk(0));
#line 413
c_rt_lib0move(&___nl__7, c_rt_lib0ov_mk_none(___get_global_const(44)));
#line 413
c_rt_lib0move(&___nl__2, c_rt_lib0hash_mk(5, ___get_global_const(24), ___nl__3, ___get_global_const(25), ___nl__4, ___get_global_const(26), ___nl__5, ___get_global_const(27), ___nl__6, ___get_global_const(28), ___nl__7));
#line 413
c_rt_lib0clear(&___nl__3);
#line 413
c_rt_lib0clear(&___nl__4);
#line 413
c_rt_lib0clear(&___nl__5);
#line 413
c_rt_lib0clear(&___nl__6);
#line 413
c_rt_lib0clear(&___nl__7);
#line 414
c_rt_lib0move(&___nl__3,___get_global_const(1));
#line 415
c_rt_lib0move(&___nl__4, compiler_priv0get_files_to_parse(___nl__0));
#line 416
c_rt_lib0move(&___nl__7, c_rt_lib0init_iter(___nl__4));
#line 416
label_3:
#line 416
c_rt_lib0move(&___nl__5, c_rt_lib0is_end_hash(___nl__7));
#line 416
if(c_rt_lib0check_true_native(___nl__5)){ goto label_1;}
#line 416
c_rt_lib0move(&___nl__5, c_rt_lib0get_key_iter(___nl__7));
#line 416
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value(___nl__4, ___nl__5));
#line 417
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__6, ___get_global_const(39)));
#line 417
c_rt_lib0move(&___nl__8, compiler_priv0parse_module(___nl__5, ___nl__9, &___nl__2));
#line 417
c_rt_lib0clear(&___nl__9);
#line 417
c_rt_lib0move(&___nl__9, c_rt_lib0priv_is(___nl__8, ___get_global_const(44)));
#line 417
if(c_rt_lib0check_true_native(___nl__9)){ goto label_5;}
#line 419
c_rt_lib0move(&___nl__9, c_rt_lib0priv_is(___nl__8, ___get_global_const(43)));
#line 419
if(c_rt_lib0check_true_native(___nl__9)){ goto label_6;}
#line 419
c_rt_lib0move(&___nl__9,___get_global_const(74));
#line 419
c_rt_lib0move(&___nl__9, c_rt_lib0array_mk(2, ___nl__9, ___nl__8));
#line 419
nl_die_arg(___nl__9);
#line 417
label_5:
#line 417
c_rt_lib0move(&___nl__10, c_rt_lib0priv_as(___nl__8, ___get_global_const(44)));
#line 418
c_rt_lib0delete(hash0set_value(&___nl__1, ___nl__5, ___nl__10));
#line 418
c_rt_lib0clear(&___nl__10);
#line 419
goto label_4;
#line 419
label_6:
#line 419
c_rt_lib0move(&___nl__10, c_rt_lib0priv_as(___nl__8, ___get_global_const(43)));
#line 420
c_rt_lib0move(&___nl__11,___get_global_const(2));
#line 420
c_rt_lib0move(&___nl__3, c_rt_lib0add_mod(___nl__3, ___nl__11));
#line 420
c_rt_lib0clear(&___nl__11);
#line 420
c_rt_lib0clear(&___nl__10);
#line 421
goto label_4;
#line 421
label_4:
#line 421
c_rt_lib0clear(&___nl__8);
#line 421
c_rt_lib0clear(&___nl__9);
#line 422
c_rt_lib0move(&___nl__7, c_rt_lib0next_iter(___nl__7));
#line 422
goto label_3;
#line 422
label_1:
#line 422
c_rt_lib0clear(&___nl__5);
#line 422
c_rt_lib0clear(&___nl__6);
#line 422
c_rt_lib0clear(&___nl__7);
#line 423
c_rt_lib0move(&___nl__5,___get_global_const(1));
#line 423
c_rt_lib0move(&___nl__5, c_rt_lib0num_ne(___nl__3, ___nl__5));
#line 423
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 423
if(c_rt_lib0check_true_native(___nl__5)){ goto label_8;}
#line 424
c_rt_lib0delete(compiler_priv0show_and_count_errors(___nl__2, ___nl__0));
#line 425
c_rt_lib0clear(&___nl__0);
#line 425
c_rt_lib0clear(&___nl__1);
#line 425
c_rt_lib0clear(&___nl__2);
#line 425
c_rt_lib0clear(&___nl__3);
#line 425
c_rt_lib0clear(&___nl__4);
#line 425
c_rt_lib0clear(&___nl__5);
#line 425
return NULL;
#line 426
goto label_8;
#line 426
label_8:
#line 426
c_rt_lib0clear(&___nl__5);
#line 427
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(60)));
#line 427
c_rt_lib0delete(compiler_priv0check_modules(___nl__1, &___nl__2, ___nl__5));
#line 427
c_rt_lib0clear(&___nl__5);
#line 428
c_rt_lib0move(&___nl__5, compiler_priv0show_and_count_errors(___nl__2, ___nl__0));
#line 428
c_rt_lib0move(&___nl__6,___get_global_const(1));
#line 428
c_rt_lib0move(&___nl__5, c_rt_lib0gt(___nl__5, ___nl__6));
#line 428
c_rt_lib0clear(&___nl__6);
#line 428
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 428
if(c_rt_lib0check_true_native(___nl__5)){ goto label_10;}
#line 429
c_rt_lib0clear(&___nl__0);
#line 429
c_rt_lib0clear(&___nl__1);
#line 429
c_rt_lib0clear(&___nl__2);
#line 429
c_rt_lib0clear(&___nl__3);
#line 429
c_rt_lib0clear(&___nl__4);
#line 429
c_rt_lib0clear(&___nl__5);
#line 429
return NULL;
#line 430
goto label_10;
#line 430
label_10:
#line 430
c_rt_lib0clear(&___nl__5);
#line 432
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(64)));
#line 432
c_rt_lib0move(&___nl__5, c_rt_lib0priv_is(___nl__5, ___get_global_const(33)));
#line 432
if(c_rt_lib0check_true_native(___nl__5)){ goto label_13;}
#line 432
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(64)));
#line 432
c_rt_lib0move(&___nl__5, c_rt_lib0priv_is(___nl__5, ___get_global_const(32)));
#line 432
label_13:
#line 432
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 432
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 432
if(c_rt_lib0check_true_native(___nl__5)){ goto label_12;}
#line 433
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(64)));
#line 433
c_rt_lib0move(&___nl__6, compiler_priv0get_generator_state(___nl__7));
#line 433
c_rt_lib0clear(&___nl__7);
#line 434
c_rt_lib0move(&___nl__7,___get_global_const(106));
#line 434
c_rt_lib0delete(c_fe_lib0print(___nl__7));
#line 434
c_rt_lib0clear(&___nl__7);
#line 435
c_rt_lib0move(&___nl__8, compiler_priv0get_mathematical_func(___nl__0));
#line 435
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(61)));
#line 435
c_rt_lib0move(&___nl__7, post_processing0init(___nl__8, ___nl__9));
#line 435
c_rt_lib0clear(&___nl__9);
#line 435
c_rt_lib0clear(&___nl__8);
#line 436
c_rt_lib0move(&___nl__8, compiler_priv0translate(___nl__1, &___nl__7));
#line 437
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(59)));
#line 437
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(64)));
#line 437
c_rt_lib0delete(compiler_priv0generate_modules_to_files(___nl__8, ___nl__4, ___nl__9, &___nl__6, ___nl__10));
#line 437
c_rt_lib0clear(&___nl__10);
#line 437
c_rt_lib0clear(&___nl__9);
#line 437
c_rt_lib0clear(&___nl__6);
#line 437
c_rt_lib0clear(&___nl__7);
#line 437
c_rt_lib0clear(&___nl__8);
#line 438
goto label_11;
#line 438
label_12:
#line 439
c_rt_lib0move(&___nl__8, c_rt_lib0init_iter(___nl__1));
#line 439
label_16:
#line 439
c_rt_lib0move(&___nl__6, c_rt_lib0is_end_hash(___nl__8));
#line 439
if(c_rt_lib0check_true_native(___nl__6)){ goto label_14;}
#line 439
c_rt_lib0move(&___nl__6, c_rt_lib0get_key_iter(___nl__8));
#line 439
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value(___nl__1, ___nl__6));
#line 440
c_rt_lib0move(&___nl__9,___get_global_const(107));
#line 440
c_rt_lib0move(&___nl__9, c_rt_lib0concat_add(___nl__9, ___nl__6));
#line 440
c_rt_lib0delete(c_fe_lib0print(___nl__9));
#line 440
c_rt_lib0clear(&___nl__9);
#line 441
c_rt_lib0move(&___nl__10, hash0get_value(___nl__4, ___nl__6));
#line 441
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__10, ___get_global_const(40)));
#line 441
c_rt_lib0move(&___nl__9, compiler_priv0save_module_to_file(___nl__7, ___nl__10));
#line 441
c_rt_lib0clear(&___nl__10);
#line 441
c_rt_lib0move(&___nl__10, c_rt_lib0priv_is(___nl__9, ___get_global_const(43)));
#line 441
if(c_rt_lib0check_true_native(___nl__10)){ goto label_18;}
#line 443
c_rt_lib0move(&___nl__10, c_rt_lib0priv_is(___nl__9, ___get_global_const(44)));
#line 443
if(c_rt_lib0check_true_native(___nl__10)){ goto label_19;}
#line 443
c_rt_lib0move(&___nl__10,___get_global_const(74));
#line 443
c_rt_lib0move(&___nl__10, c_rt_lib0array_mk(2, ___nl__10, ___nl__9));
#line 443
nl_die_arg(___nl__10);
#line 441
label_18:
#line 441
c_rt_lib0move(&___nl__11, c_rt_lib0priv_as(___nl__9, ___get_global_const(43)));
#line 442
c_rt_lib0move(&___nl__12,___get_global_const(108));
#line 442
c_rt_lib0move(&___nl__12, c_rt_lib0concat_add(___nl__12, ___nl__11));
#line 442
c_rt_lib0delete(c_fe_lib0print(___nl__12));
#line 442
c_rt_lib0clear(&___nl__12);
#line 442
c_rt_lib0clear(&___nl__11);
#line 443
goto label_17;
#line 443
label_19:
#line 443
c_rt_lib0move(&___nl__11, c_rt_lib0priv_as(___nl__9, ___get_global_const(44)));
#line 443
c_rt_lib0clear(&___nl__11);
#line 444
goto label_17;
#line 444
label_17:
#line 444
c_rt_lib0clear(&___nl__9);
#line 444
c_rt_lib0clear(&___nl__10);
#line 445
c_rt_lib0move(&___nl__8, c_rt_lib0next_iter(___nl__8));
#line 445
goto label_16;
#line 445
label_14:
#line 445
c_rt_lib0clear(&___nl__6);
#line 445
c_rt_lib0clear(&___nl__7);
#line 445
c_rt_lib0clear(&___nl__8);
#line 446
goto label_11;
#line 446
label_11:
#line 446
c_rt_lib0clear(&___nl__5);
#line 446
c_rt_lib0clear(&___nl__1);
#line 446
c_rt_lib0clear(&___nl__2);
#line 446
c_rt_lib0clear(&___nl__3);
#line 446
c_rt_lib0clear(&___nl__4);
#line 446
c_rt_lib0clear(&___nl__0);
#line 446
return NULL;
}

ImmT compiler_priv0construct_error_message(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
compiler_priv0__const__init();
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
#line 449
c_rt_lib0move(&___nl__1,___get_global_const(0));
#line 450
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(99)));
#line 450
c_rt_lib0move(&___nl__2, string0length(___nl__3));
#line 450
c_rt_lib0clear(&___nl__3);
#line 450
c_rt_lib0move(&___nl__3,___get_global_const(1));
#line 450
c_rt_lib0move(&___nl__2, c_rt_lib0num_eq(___nl__2, ___nl__3));
#line 450
c_rt_lib0clear(&___nl__3);
#line 450
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 450
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 450
if(c_rt_lib0check_true_native(___nl__2)){ goto label_2;}
#line 450
c_rt_lib0move(&___nl__3,___get_global_const(112));
#line 450
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(99)));
#line 450
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 450
c_rt_lib0clear(&___nl__4);
#line 450
c_rt_lib0move(&___nl__1, c_rt_lib0concat_add(___nl__1, ___nl__3));
#line 450
c_rt_lib0clear(&___nl__3);
#line 450
goto label_2;
#line 450
label_2:
#line 450
c_rt_lib0clear(&___nl__2);
#line 451
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(98)));
#line 451
c_rt_lib0move(&___nl__2, string0length(___nl__3));
#line 451
c_rt_lib0clear(&___nl__3);
#line 451
c_rt_lib0move(&___nl__3,___get_global_const(1));
#line 451
c_rt_lib0move(&___nl__2, c_rt_lib0num_eq(___nl__2, ___nl__3));
#line 451
c_rt_lib0clear(&___nl__3);
#line 451
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 451
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 451
if(c_rt_lib0check_true_native(___nl__2)){ goto label_4;}
#line 451
c_rt_lib0move(&___nl__3,___get_global_const(113));
#line 451
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(98)));
#line 451
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 451
c_rt_lib0clear(&___nl__4);
#line 451
c_rt_lib0move(&___nl__1, c_rt_lib0concat_add(___nl__1, ___nl__3));
#line 451
c_rt_lib0clear(&___nl__3);
#line 451
goto label_4;
#line 451
label_4:
#line 451
c_rt_lib0clear(&___nl__2);
#line 452
c_rt_lib0move(&___nl__2, string0lf());
#line 452
c_rt_lib0move(&___nl__3,___get_global_const(114));
#line 452
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__3));
#line 452
c_rt_lib0clear(&___nl__3);
#line 452
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(97)));
#line 452
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__3));
#line 452
c_rt_lib0clear(&___nl__3);
#line 452
c_rt_lib0move(&___nl__1, c_rt_lib0concat_add(___nl__1, ___nl__2));
#line 452
c_rt_lib0clear(&___nl__2);
#line 453
c_rt_lib0clear(&___nl__0);
#line 453
return ___nl__1;
#line 453
c_rt_lib0clear(&___nl__1);
#line 453
c_rt_lib0clear(&___nl__0);
#line 453
return NULL;
}

ImmT compiler_priv0show_and_count_errors(ImmT ___nl__0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
compiler_priv0__const__init();
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
ImmT ___nl__9 = NULL;
ImmT ___nl__10 = NULL;
ImmT ___nl__11 = NULL;
ImmT ___nl__12 = NULL;
ImmT ___nl__13 = NULL;
ImmT ___nl__14 = NULL;
ImmT ___nl__15 = NULL;
ImmT ___nl__16 = NULL;
ImmT ___nl__17 = NULL;
ImmT ___nl__18 = NULL;
#line 456
c_rt_lib0move(&___nl__2,___get_global_const(1));
#line 457
c_rt_lib0move(&___nl__3,___get_global_const(1));
#line 458
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(25)));
#line 458
c_rt_lib0move(&___nl__7, c_rt_lib0init_iter(___nl__4));
#line 458
label_3:
#line 458
c_rt_lib0move(&___nl__5, c_rt_lib0is_end_hash(___nl__7));
#line 458
if(c_rt_lib0check_true_native(___nl__5)){ goto label_1;}
#line 458
c_rt_lib0move(&___nl__5, c_rt_lib0get_key_iter(___nl__7));
#line 458
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value(___nl__4, ___nl__5));
#line 459
c_rt_lib0move(&___nl__8,___get_global_const(115));
#line 460
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(65)));
#line 460
c_rt_lib0move(&___nl__9, c_rt_lib0priv_is(___nl__9, ___get_global_const(57)));
#line 460
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__9));
#line 460
if(c_rt_lib0check_true_native(___nl__9)){ goto label_5;}
#line 460
c_rt_lib0move(&___nl__10,___get_global_const(116));
#line 460
c_rt_lib0copy(&___nl__8, ___nl__10);
#line 460
c_rt_lib0clear(&___nl__10);
#line 460
goto label_5;
#line 460
label_5:
#line 460
c_rt_lib0clear(&___nl__9);
#line 461
c_rt_lib0move(&___nl__10,___get_global_const(1));
#line 461
c_rt_lib0move(&___nl__11,___get_global_const(2));
#line 461
c_rt_lib0move(&___nl__12, c_rt_lib0array_len(___nl__6));
#line 461
label_8:
#line 461
c_rt_lib0move(&___nl__13, c_rt_lib0ge(___nl__10, ___nl__12));
#line 461
if(c_rt_lib0check_true_native(___nl__13)){ goto label_6;}
#line 461
c_rt_lib0move(&___nl__9, c_rt_lib0array_get(___nl__6, ___nl__10));
#line 462
c_rt_lib0move(&___nl__14, compiler_priv0construct_error_message(___nl__9));
#line 462
c_rt_lib0move(&___nl__14, c_rt_lib0concat_new(___nl__8, ___nl__14));
#line 462
c_rt_lib0delete(c_fe_lib0print(___nl__14));
#line 462
c_rt_lib0clear(&___nl__14);
#line 463
c_rt_lib0move(&___nl__10, c_rt_lib0add_mod(___nl__10, ___nl__11));
#line 463
goto label_8;
#line 463
label_6:
#line 463
c_rt_lib0clear(&___nl__9);
#line 463
c_rt_lib0clear(&___nl__10);
#line 463
c_rt_lib0clear(&___nl__11);
#line 463
c_rt_lib0clear(&___nl__12);
#line 463
c_rt_lib0clear(&___nl__13);
#line 464
c_rt_lib0move(&___nl__9, array0len(___nl__6));
#line 464
c_rt_lib0move(&___nl__2, c_rt_lib0add_mod(___nl__2, ___nl__9));
#line 464
c_rt_lib0clear(&___nl__9);
#line 465
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(27)));
#line 465
c_rt_lib0move(&___nl__9, hash0has_key(___nl__10, ___nl__5));
#line 465
c_rt_lib0clear(&___nl__10);
#line 465
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__9));
#line 465
if(c_rt_lib0check_true_native(___nl__9)){ goto label_10;}
#line 466
c_rt_lib0move(&___nl__11, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(27)));
#line 466
c_rt_lib0move(&___nl__10, hash0get_value(___nl__11, ___nl__5));
#line 466
c_rt_lib0clear(&___nl__11);
#line 467
c_rt_lib0move(&___nl__12,___get_global_const(1));
#line 467
c_rt_lib0move(&___nl__13,___get_global_const(2));
#line 467
c_rt_lib0move(&___nl__14, c_rt_lib0array_len(___nl__10));
#line 467
label_13:
#line 467
c_rt_lib0move(&___nl__15, c_rt_lib0ge(___nl__12, ___nl__14));
#line 467
if(c_rt_lib0check_true_native(___nl__15)){ goto label_11;}
#line 467
c_rt_lib0move(&___nl__11, c_rt_lib0array_get(___nl__10, ___nl__12));
#line 468
c_rt_lib0move(&___nl__16, compiler_priv0construct_error_message(___nl__11));
#line 468
c_rt_lib0move(&___nl__16, c_rt_lib0concat_new(___nl__8, ___nl__16));
#line 468
c_rt_lib0delete(c_fe_lib0print(___nl__16));
#line 468
c_rt_lib0clear(&___nl__16);
#line 469
c_rt_lib0move(&___nl__12, c_rt_lib0add_mod(___nl__12, ___nl__13));
#line 469
goto label_13;
#line 469
label_11:
#line 469
c_rt_lib0clear(&___nl__11);
#line 469
c_rt_lib0clear(&___nl__12);
#line 469
c_rt_lib0clear(&___nl__13);
#line 469
c_rt_lib0clear(&___nl__14);
#line 469
c_rt_lib0clear(&___nl__15);
#line 470
c_rt_lib0move(&___nl__11, array0len(___nl__10));
#line 470
c_rt_lib0move(&___nl__2, c_rt_lib0add_mod(___nl__2, ___nl__11));
#line 470
c_rt_lib0clear(&___nl__11);
#line 470
c_rt_lib0clear(&___nl__10);
#line 471
goto label_10;
#line 471
label_10:
#line 471
c_rt_lib0clear(&___nl__9);
#line 472
c_rt_lib0move(&___nl__9,___get_global_const(116));
#line 472
c_rt_lib0copy(&___nl__8, ___nl__9);
#line 472
c_rt_lib0clear(&___nl__9);
#line 473
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(24)));
#line 473
c_rt_lib0move(&___nl__9, hash0get_value(___nl__10, ___nl__5));
#line 473
c_rt_lib0clear(&___nl__10);
#line 474
c_rt_lib0move(&___nl__11,___get_global_const(1));
#line 474
c_rt_lib0move(&___nl__12,___get_global_const(2));
#line 474
c_rt_lib0move(&___nl__13, c_rt_lib0array_len(___nl__9));
#line 474
label_16:
#line 474
c_rt_lib0move(&___nl__14, c_rt_lib0ge(___nl__11, ___nl__13));
#line 474
if(c_rt_lib0check_true_native(___nl__14)){ goto label_14;}
#line 474
c_rt_lib0move(&___nl__10, c_rt_lib0array_get(___nl__9, ___nl__11));
#line 475
c_rt_lib0move(&___nl__15,___get_global_const(116));
#line 475
c_rt_lib0move(&___nl__16, compiler_priv0construct_error_message(___nl__10));
#line 475
c_rt_lib0move(&___nl__15, c_rt_lib0concat_add(___nl__15, ___nl__16));
#line 475
c_rt_lib0clear(&___nl__16);
#line 475
c_rt_lib0delete(c_fe_lib0print(___nl__15));
#line 475
c_rt_lib0clear(&___nl__15);
#line 476
c_rt_lib0move(&___nl__11, c_rt_lib0add_mod(___nl__11, ___nl__12));
#line 476
goto label_16;
#line 476
label_14:
#line 476
c_rt_lib0clear(&___nl__10);
#line 476
c_rt_lib0clear(&___nl__11);
#line 476
c_rt_lib0clear(&___nl__12);
#line 476
c_rt_lib0clear(&___nl__13);
#line 476
c_rt_lib0clear(&___nl__14);
#line 477
c_rt_lib0move(&___nl__10, array0len(___nl__9));
#line 477
c_rt_lib0move(&___nl__3, c_rt_lib0add_mod(___nl__3, ___nl__10));
#line 477
c_rt_lib0clear(&___nl__10);
#line 478
c_rt_lib0move(&___nl__11, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(26)));
#line 478
c_rt_lib0move(&___nl__10, hash0has_key(___nl__11, ___nl__5));
#line 478
c_rt_lib0clear(&___nl__11);
#line 478
c_rt_lib0move(&___nl__10, c_rt_lib0not(___nl__10));
#line 478
if(c_rt_lib0check_true_native(___nl__10)){ goto label_18;}
#line 479
c_rt_lib0move(&___nl__12, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(26)));
#line 479
c_rt_lib0move(&___nl__11, hash0get_value(___nl__12, ___nl__5));
#line 479
c_rt_lib0clear(&___nl__12);
#line 480
c_rt_lib0move(&___nl__13,___get_global_const(1));
#line 480
c_rt_lib0move(&___nl__14,___get_global_const(2));
#line 480
c_rt_lib0move(&___nl__15, c_rt_lib0array_len(___nl__11));
#line 480
label_21:
#line 480
c_rt_lib0move(&___nl__16, c_rt_lib0ge(___nl__13, ___nl__15));
#line 480
if(c_rt_lib0check_true_native(___nl__16)){ goto label_19;}
#line 480
c_rt_lib0move(&___nl__12, c_rt_lib0array_get(___nl__11, ___nl__13));
#line 481
c_rt_lib0move(&___nl__17,___get_global_const(116));
#line 481
c_rt_lib0move(&___nl__18, compiler_priv0construct_error_message(___nl__12));
#line 481
c_rt_lib0move(&___nl__17, c_rt_lib0concat_add(___nl__17, ___nl__18));
#line 481
c_rt_lib0clear(&___nl__18);
#line 481
c_rt_lib0delete(c_fe_lib0print(___nl__17));
#line 481
c_rt_lib0clear(&___nl__17);
#line 482
c_rt_lib0move(&___nl__13, c_rt_lib0add_mod(___nl__13, ___nl__14));
#line 482
goto label_21;
#line 482
label_19:
#line 482
c_rt_lib0clear(&___nl__12);
#line 482
c_rt_lib0clear(&___nl__13);
#line 482
c_rt_lib0clear(&___nl__14);
#line 482
c_rt_lib0clear(&___nl__15);
#line 482
c_rt_lib0clear(&___nl__16);
#line 483
c_rt_lib0move(&___nl__12, array0len(___nl__11));
#line 483
c_rt_lib0move(&___nl__3, c_rt_lib0add_mod(___nl__3, ___nl__12));
#line 483
c_rt_lib0clear(&___nl__12);
#line 483
c_rt_lib0clear(&___nl__11);
#line 484
goto label_18;
#line 484
label_18:
#line 484
c_rt_lib0clear(&___nl__10);
#line 484
c_rt_lib0clear(&___nl__8);
#line 484
c_rt_lib0clear(&___nl__9);
#line 485
c_rt_lib0move(&___nl__7, c_rt_lib0next_iter(___nl__7));
#line 485
goto label_3;
#line 485
label_1:
#line 485
c_rt_lib0clear(&___nl__4);
#line 485
c_rt_lib0clear(&___nl__5);
#line 485
c_rt_lib0clear(&___nl__6);
#line 485
c_rt_lib0clear(&___nl__7);
#line 486
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(28)));
#line 486
c_rt_lib0move(&___nl__5, c_rt_lib0priv_is(___nl__4, ___get_global_const(117)));
#line 486
if(c_rt_lib0check_true_native(___nl__5)){ goto label_23;}
#line 493
c_rt_lib0move(&___nl__5, c_rt_lib0priv_is(___nl__4, ___get_global_const(44)));
#line 493
if(c_rt_lib0check_true_native(___nl__5)){ goto label_24;}
#line 493
c_rt_lib0move(&___nl__5,___get_global_const(74));
#line 493
c_rt_lib0move(&___nl__5, c_rt_lib0array_mk(2, ___nl__5, ___nl__4));
#line 493
nl_die_arg(___nl__5);
#line 486
label_23:
#line 486
c_rt_lib0move(&___nl__6, c_rt_lib0priv_as(___nl__4, ___get_global_const(117)));
#line 487
c_rt_lib0move(&___nl__7,___get_global_const(0));
#line 488
c_rt_lib0move(&___nl__9,___get_global_const(1));
#line 488
c_rt_lib0move(&___nl__10,___get_global_const(2));
#line 488
c_rt_lib0move(&___nl__11, c_rt_lib0array_len(___nl__6));
#line 488
label_27:
#line 488
c_rt_lib0move(&___nl__12, c_rt_lib0ge(___nl__9, ___nl__11));
#line 488
if(c_rt_lib0check_true_native(___nl__12)){ goto label_25;}
#line 488
c_rt_lib0move(&___nl__8, c_rt_lib0array_get(___nl__6, ___nl__9));
#line 489
c_rt_lib0move(&___nl__13,___get_global_const(118));
#line 489
c_rt_lib0move(&___nl__13, c_rt_lib0concat_new(___nl__8, ___nl__13));
#line 489
c_rt_lib0move(&___nl__7, c_rt_lib0concat_add(___nl__7, ___nl__13));
#line 489
c_rt_lib0clear(&___nl__13);
#line 490
c_rt_lib0move(&___nl__9, c_rt_lib0add_mod(___nl__9, ___nl__10));
#line 490
goto label_27;
#line 490
label_25:
#line 490
c_rt_lib0clear(&___nl__8);
#line 490
c_rt_lib0clear(&___nl__9);
#line 490
c_rt_lib0clear(&___nl__10);
#line 490
c_rt_lib0clear(&___nl__11);
#line 490
c_rt_lib0clear(&___nl__12);
#line 491
c_rt_lib0move(&___nl__8,___get_global_const(119));
#line 491
c_rt_lib0move(&___nl__8, c_rt_lib0concat_add(___nl__8, ___nl__7));
#line 491
c_rt_lib0move(&___nl__9,___get_global_const(120));
#line 491
c_rt_lib0move(&___nl__8, c_rt_lib0concat_add(___nl__8, ___nl__9));
#line 491
c_rt_lib0clear(&___nl__9);
#line 491
c_rt_lib0delete(c_fe_lib0print(___nl__8));
#line 491
c_rt_lib0clear(&___nl__8);
#line 492
c_rt_lib0move(&___nl__8,___get_global_const(2));
#line 492
c_rt_lib0move(&___nl__3, c_rt_lib0add_mod(___nl__3, ___nl__8));
#line 492
c_rt_lib0clear(&___nl__8);
#line 492
c_rt_lib0clear(&___nl__7);
#line 492
c_rt_lib0clear(&___nl__6);
#line 493
goto label_22;
#line 493
label_24:
#line 494
goto label_22;
#line 494
label_22:
#line 494
c_rt_lib0clear(&___nl__4);
#line 494
c_rt_lib0clear(&___nl__5);
#line 496
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(65)));
#line 496
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__4, ___get_global_const(57)));
#line 496
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 496
if(c_rt_lib0check_true_native(___nl__4)){ goto label_29;}
#line 497
c_rt_lib0move(&___nl__3, c_rt_lib0add_mod(___nl__3, ___nl__2));
#line 498
c_rt_lib0move(&___nl__5,___get_global_const(1));
#line 498
c_rt_lib0copy(&___nl__2, ___nl__5);
#line 498
c_rt_lib0clear(&___nl__5);
#line 499
goto label_29;
#line 499
label_29:
#line 499
c_rt_lib0clear(&___nl__4);
#line 500
c_rt_lib0move(&___nl__4,___get_global_const(121));
#line 500
c_rt_lib0move(&___nl__4, c_rt_lib0concat_add(___nl__4, ___nl__3));
#line 500
c_rt_lib0move(&___nl__5,___get_global_const(122));
#line 500
c_rt_lib0move(&___nl__4, c_rt_lib0concat_add(___nl__4, ___nl__5));
#line 500
c_rt_lib0clear(&___nl__5);
#line 500
c_rt_lib0move(&___nl__4, c_rt_lib0concat_add(___nl__4, ___nl__2));
#line 500
c_rt_lib0delete(c_fe_lib0print(___nl__4));
#line 500
c_rt_lib0clear(&___nl__4);
#line 501
c_rt_lib0clear(&___nl__0);
#line 501
c_rt_lib0clear(&___nl__1);
#line 501
c_rt_lib0clear(&___nl__2);
#line 501
return ___nl__3;
#line 501
c_rt_lib0clear(&___nl__2);
#line 501
c_rt_lib0clear(&___nl__3);
#line 501
c_rt_lib0clear(&___nl__0);
#line 501
c_rt_lib0clear(&___nl__1);
#line 501
return NULL;
}

ImmT compiler_priv0translate(ImmT ___nl__0,ImmT * ___ref___1) {
c_rt_lib0arg_val(___nl__0);
compiler_priv0__const__init();
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
#line 504
c_rt_lib0move(&___nl__2, c_rt_lib0hash_mk(0));
#line 505
c_rt_lib0move(&___nl__5, c_rt_lib0init_iter(___nl__0));
#line 505
label_3:
#line 505
c_rt_lib0move(&___nl__3, c_rt_lib0is_end_hash(___nl__5));
#line 505
if(c_rt_lib0check_true_native(___nl__3)){ goto label_1;}
#line 505
c_rt_lib0move(&___nl__3, c_rt_lib0get_key_iter(___nl__5));
#line 505
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value(___nl__0, ___nl__3));
#line 506
c_rt_lib0move(&___nl__6, translator0translate(___nl__4));
#line 507
c_rt_lib0delete(hash0set_value(&___nl__2, ___nl__3, ___nl__6));
#line 507
c_rt_lib0clear(&___nl__6);
#line 508
c_rt_lib0move(&___nl__5, c_rt_lib0next_iter(___nl__5));
#line 508
goto label_3;
#line 508
label_1:
#line 508
c_rt_lib0clear(&___nl__3);
#line 508
c_rt_lib0clear(&___nl__4);
#line 508
c_rt_lib0clear(&___nl__5);
#line 509
c_rt_lib0delete(post_processing0find(___ref___1, &___nl__2));
#line 510
c_rt_lib0clear(&___nl__0);
#line 510
return ___nl__2;
#line 510
c_rt_lib0clear(&___nl__2);
#line 510
c_rt_lib0clear(&___nl__0);
#line 510
return NULL;
}

ImmT compiler_priv0check_modules(ImmT ___nl__0,ImmT * ___ref___1,ImmT ___nl__2) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__2);
compiler_priv0__const__init();
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
ImmT ___nl__9 = NULL;
ImmT ___nl__10 = NULL;
ImmT ___nl__11 = NULL;
ImmT ___nl__12 = NULL;
ImmT ___nl__13 = NULL;
ImmT ___nl__14 = NULL;
ImmT ___nl__15 = NULL;
ImmT ___nl__16 = NULL;
#line 513
c_rt_lib0move(&___nl__3,___get_global_const(123));
#line 513
c_rt_lib0delete(c_fe_lib0print(___nl__3));
#line 513
c_rt_lib0clear(&___nl__3);
#line 514
c_rt_lib0move(&___nl__3, type_checker0check_modules(___nl__0, ___nl__0));
#line 515
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(17)));
#line 515
c_rt_lib0move(&___nl__4, array0len(___nl__5));
#line 515
c_rt_lib0clear(&___nl__5);
#line 516
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(17)));
#line 516
c_rt_lib0move(&___nl__7,___get_global_const(1));
#line 516
c_rt_lib0move(&___nl__8,___get_global_const(2));
#line 516
c_rt_lib0move(&___nl__9, c_rt_lib0array_len(___nl__5));
#line 516
label_3:
#line 516
c_rt_lib0move(&___nl__10, c_rt_lib0ge(___nl__7, ___nl__9));
#line 516
if(c_rt_lib0check_true_native(___nl__10)){ goto label_1;}
#line 516
c_rt_lib0move(&___nl__6, c_rt_lib0array_get(___nl__5, ___nl__7));
#line 517
c_rt_lib0move(&___nl__11, c_rt_lib0array_mk(0));
#line 518
c_rt_lib0move(&___nl__13, c_rt_lib0hash_get_value_dec(*___ref___1, ___get_global_const(26)));
#line 518
c_rt_lib0move(&___nl__14, c_rt_lib0hash_get_value_dec(___nl__6, ___get_global_const(99)));
#line 518
c_rt_lib0move(&___nl__12, hash0has_key(___nl__13, ___nl__14));
#line 518
c_rt_lib0clear(&___nl__14);
#line 518
c_rt_lib0clear(&___nl__13);
#line 518
c_rt_lib0move(&___nl__12, c_rt_lib0not(___nl__12));
#line 518
if(c_rt_lib0check_true_native(___nl__12)){ goto label_5;}
#line 519
c_rt_lib0move(&___nl__14, c_rt_lib0hash_get_value_dec(*___ref___1, ___get_global_const(26)));
#line 519
c_rt_lib0move(&___nl__15, c_rt_lib0hash_get_value_dec(___nl__6, ___get_global_const(99)));
#line 519
c_rt_lib0move(&___nl__13, hash0get_value(___nl__14, ___nl__15));
#line 519
c_rt_lib0clear(&___nl__15);
#line 519
c_rt_lib0clear(&___nl__14);
#line 519
c_rt_lib0copy(&___nl__11, ___nl__13);
#line 519
c_rt_lib0clear(&___nl__13);
#line 520
goto label_5;
#line 520
label_5:
#line 520
c_rt_lib0clear(&___nl__12);
#line 521
c_rt_lib0delete(array0push(&___nl__11, ___nl__6));
#line 522
c_rt_lib0move(&___nl__12,___get_global_const(26));
#line 522
c_rt_lib0move(&___nl__12, c_rt_lib0get_ref_hash(*___ref___1, ___nl__12));
#line 522
c_rt_lib0move(&___nl__13, c_rt_lib0hash_get_value_dec(___nl__6, ___get_global_const(99)));
#line 522
c_rt_lib0delete(hash0set_value(&___nl__12, ___nl__13, ___nl__11));
#line 522
c_rt_lib0clear(&___nl__13);
#line 522
c_rt_lib0move(&___nl__13,___get_global_const(26));
#line 522
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___1, ___nl__13, ___nl__12));
#line 522
c_rt_lib0clear(&___nl__13);
#line 522
c_rt_lib0clear(&___nl__12);
#line 522
c_rt_lib0clear(&___nl__11);
#line 523
c_rt_lib0move(&___nl__7, c_rt_lib0add_mod(___nl__7, ___nl__8));
#line 523
goto label_3;
#line 523
label_1:
#line 523
c_rt_lib0clear(&___nl__5);
#line 523
c_rt_lib0clear(&___nl__6);
#line 523
c_rt_lib0clear(&___nl__7);
#line 523
c_rt_lib0clear(&___nl__8);
#line 523
c_rt_lib0clear(&___nl__9);
#line 523
c_rt_lib0clear(&___nl__10);
#line 524
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(96)));
#line 524
c_rt_lib0move(&___nl__7,___get_global_const(1));
#line 524
c_rt_lib0move(&___nl__8,___get_global_const(2));
#line 524
c_rt_lib0move(&___nl__9, c_rt_lib0array_len(___nl__5));
#line 524
label_8:
#line 524
c_rt_lib0move(&___nl__10, c_rt_lib0ge(___nl__7, ___nl__9));
#line 524
if(c_rt_lib0check_true_native(___nl__10)){ goto label_6;}
#line 524
c_rt_lib0move(&___nl__6, c_rt_lib0array_get(___nl__5, ___nl__7));
#line 525
c_rt_lib0move(&___nl__11, c_rt_lib0array_mk(0));
#line 526
c_rt_lib0move(&___nl__13, c_rt_lib0hash_get_value_dec(*___ref___1, ___get_global_const(27)));
#line 526
c_rt_lib0move(&___nl__14, c_rt_lib0hash_get_value_dec(___nl__6, ___get_global_const(99)));
#line 526
c_rt_lib0move(&___nl__12, hash0has_key(___nl__13, ___nl__14));
#line 526
c_rt_lib0clear(&___nl__14);
#line 526
c_rt_lib0clear(&___nl__13);
#line 526
c_rt_lib0move(&___nl__12, c_rt_lib0not(___nl__12));
#line 526
if(c_rt_lib0check_true_native(___nl__12)){ goto label_10;}
#line 527
c_rt_lib0move(&___nl__14, c_rt_lib0hash_get_value_dec(*___ref___1, ___get_global_const(27)));
#line 527
c_rt_lib0move(&___nl__15, c_rt_lib0hash_get_value_dec(___nl__6, ___get_global_const(99)));
#line 527
c_rt_lib0move(&___nl__13, hash0get_value(___nl__14, ___nl__15));
#line 527
c_rt_lib0clear(&___nl__15);
#line 527
c_rt_lib0clear(&___nl__14);
#line 527
c_rt_lib0copy(&___nl__11, ___nl__13);
#line 527
c_rt_lib0clear(&___nl__13);
#line 528
goto label_10;
#line 528
label_10:
#line 528
c_rt_lib0clear(&___nl__12);
#line 529
c_rt_lib0delete(array0push(&___nl__11, ___nl__6));
#line 530
c_rt_lib0move(&___nl__12,___get_global_const(27));
#line 530
c_rt_lib0move(&___nl__12, c_rt_lib0get_ref_hash(*___ref___1, ___nl__12));
#line 530
c_rt_lib0move(&___nl__13, c_rt_lib0hash_get_value_dec(___nl__6, ___get_global_const(99)));
#line 530
c_rt_lib0delete(hash0set_value(&___nl__12, ___nl__13, ___nl__11));
#line 530
c_rt_lib0clear(&___nl__13);
#line 530
c_rt_lib0move(&___nl__13,___get_global_const(27));
#line 530
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___1, ___nl__13, ___nl__12));
#line 530
c_rt_lib0clear(&___nl__13);
#line 530
c_rt_lib0clear(&___nl__12);
#line 530
c_rt_lib0clear(&___nl__11);
#line 531
c_rt_lib0move(&___nl__7, c_rt_lib0add_mod(___nl__7, ___nl__8));
#line 531
goto label_8;
#line 531
label_6:
#line 531
c_rt_lib0clear(&___nl__5);
#line 531
c_rt_lib0clear(&___nl__6);
#line 531
c_rt_lib0clear(&___nl__7);
#line 531
c_rt_lib0clear(&___nl__8);
#line 531
c_rt_lib0clear(&___nl__9);
#line 531
c_rt_lib0clear(&___nl__10);
#line 532
c_rt_lib0move(&___nl__5,___get_global_const(1));
#line 532
c_rt_lib0move(&___nl__5, c_rt_lib0num_eq(___nl__4, ___nl__5));
#line 532
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 532
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 532
if(c_rt_lib0check_true_native(___nl__5)){ goto label_12;}
#line 532
c_rt_lib0move(&___nl__6,___get_global_const(124));
#line 532
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__4));
#line 532
c_rt_lib0move(&___nl__7,___get_global_const(125));
#line 532
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__7));
#line 532
c_rt_lib0clear(&___nl__7);
#line 532
c_rt_lib0delete(c_fe_lib0print(___nl__6));
#line 532
c_rt_lib0clear(&___nl__6);
#line 532
goto label_12;
#line 532
label_12:
#line 532
c_rt_lib0clear(&___nl__5);
#line 533
c_rt_lib0move(&___nl__5, c_rt_lib0hash_mk(0));
#line 534
c_rt_lib0move(&___nl__8, c_rt_lib0init_iter(___nl__0));
#line 534
label_15:
#line 534
c_rt_lib0move(&___nl__6, c_rt_lib0is_end_hash(___nl__8));
#line 534
if(c_rt_lib0check_true_native(___nl__6)){ goto label_13;}
#line 534
c_rt_lib0move(&___nl__6, c_rt_lib0get_key_iter(___nl__8));
#line 534
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value(___nl__0, ___nl__6));
#line 535
c_rt_lib0move(&___nl__9, c_rt_lib0array_mk(0));
#line 536
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__7, ___get_global_const(126)));
#line 536
c_rt_lib0move(&___nl__12,___get_global_const(1));
#line 536
c_rt_lib0move(&___nl__13,___get_global_const(2));
#line 536
c_rt_lib0move(&___nl__14, c_rt_lib0array_len(___nl__10));
#line 536
label_18:
#line 536
c_rt_lib0move(&___nl__15, c_rt_lib0ge(___nl__12, ___nl__14));
#line 536
if(c_rt_lib0check_true_native(___nl__15)){ goto label_16;}
#line 536
c_rt_lib0move(&___nl__11, c_rt_lib0array_get(___nl__10, ___nl__12));
#line 537
c_rt_lib0move(&___nl__16, c_rt_lib0hash_get_value_dec(___nl__11, ___get_global_const(76)));
#line 537
c_rt_lib0delete(array0push(&___nl__9, ___nl__16));
#line 537
c_rt_lib0clear(&___nl__16);
#line 538
c_rt_lib0move(&___nl__12, c_rt_lib0add_mod(___nl__12, ___nl__13));
#line 538
goto label_18;
#line 538
label_16:
#line 538
c_rt_lib0clear(&___nl__10);
#line 538
c_rt_lib0clear(&___nl__11);
#line 538
c_rt_lib0clear(&___nl__12);
#line 538
c_rt_lib0clear(&___nl__13);
#line 538
c_rt_lib0clear(&___nl__14);
#line 538
c_rt_lib0clear(&___nl__15);
#line 539
c_rt_lib0delete(hash0set_value(&___nl__5, ___nl__6, ___nl__9));
#line 539
c_rt_lib0clear(&___nl__9);
#line 540
c_rt_lib0move(&___nl__8, c_rt_lib0next_iter(___nl__8));
#line 540
goto label_15;
#line 540
label_13:
#line 540
c_rt_lib0clear(&___nl__6);
#line 540
c_rt_lib0clear(&___nl__7);
#line 540
c_rt_lib0clear(&___nl__8);
#line 541
c_rt_lib0move(&___nl__6, module_checker0search_loops(___nl__5));
#line 541
c_rt_lib0copy(&___nl__7, ___nl__6);
#line 541
c_rt_lib0hash_set_value_dec(___ref___1, ___get_global_const(28), ___nl__7);
#line 541
c_rt_lib0clear(&___nl__6);
#line 541
c_rt_lib0clear(&___nl__7);
#line 542
c_rt_lib0copy(&___nl__6, ___nl__2);
#line 542
c_rt_lib0move(&___nl__6, c_rt_lib0priv_is(___nl__6, ___get_global_const(41)));
#line 542
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 542
if(c_rt_lib0check_true_native(___nl__6)){ goto label_20;}
#line 543
c_rt_lib0move(&___nl__7,___get_global_const(127));
#line 543
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(60)));
#line 543
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__9, ___get_global_const(128)));
#line 543
c_rt_lib0move(&___nl__8, array0len(___nl__9));
#line 543
c_rt_lib0clear(&___nl__9);
#line 543
c_rt_lib0move(&___nl__7, c_rt_lib0concat_add(___nl__7, ___nl__8));
#line 543
c_rt_lib0clear(&___nl__8);
#line 543
c_rt_lib0delete(c_fe_lib0print(___nl__7));
#line 543
c_rt_lib0clear(&___nl__7);
#line 544
c_rt_lib0move(&___nl__7,___get_global_const(129));
#line 544
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(60)));
#line 544
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__9, ___get_global_const(130)));
#line 544
c_rt_lib0move(&___nl__8, array0len(___nl__9));
#line 544
c_rt_lib0clear(&___nl__9);
#line 544
c_rt_lib0move(&___nl__7, c_rt_lib0concat_add(___nl__7, ___nl__8));
#line 544
c_rt_lib0clear(&___nl__8);
#line 544
c_rt_lib0delete(c_fe_lib0print(___nl__7));
#line 544
c_rt_lib0clear(&___nl__7);
#line 545
c_rt_lib0copy(&___nl__7, ___nl__2);
#line 545
c_rt_lib0move(&___nl__7, c_rt_lib0priv_as(___nl__7, ___get_global_const(41)));
#line 545
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(60)));
#line 545
c_rt_lib0move(&___nl__8, dfile0ssave(___nl__9));
#line 545
c_rt_lib0clear(&___nl__9);
#line 545
c_rt_lib0delete(c_fe_lib0string_to_file(___nl__7, ___nl__8));
#line 545
c_rt_lib0clear(&___nl__8);
#line 545
c_rt_lib0clear(&___nl__7);
#line 546
goto label_20;
#line 546
label_20:
#line 546
c_rt_lib0clear(&___nl__6);
#line 546
c_rt_lib0clear(&___nl__3);
#line 546
c_rt_lib0clear(&___nl__4);
#line 546
c_rt_lib0clear(&___nl__5);
#line 546
c_rt_lib0clear(&___nl__0);
#line 546
c_rt_lib0clear(&___nl__2);
#line 546
return NULL;
}

ImmT compiler_priv0try_save_file(ImmT ___nl__0,ImmT ___nl__1,ImmT * ___ref___2) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
compiler_priv0__const__init();
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
#line 549
c_rt_lib0move(&___nl__3, c_fe_lib0string_to_file(___nl__1, ___nl__0));
#line 549
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__3, ___get_global_const(44)));
#line 549
if(c_rt_lib0check_true_native(___nl__4)){ goto label_2;}
#line 550
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__3, ___get_global_const(43)));
#line 550
if(c_rt_lib0check_true_native(___nl__4)){ goto label_3;}
#line 550
c_rt_lib0move(&___nl__4,___get_global_const(74));
#line 550
c_rt_lib0move(&___nl__4, c_rt_lib0array_mk(2, ___nl__4, ___nl__3));
#line 550
nl_die_arg(___nl__4);
#line 549
label_2:
#line 549
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__3, ___get_global_const(44)));
#line 549
c_rt_lib0clear(&___nl__5);
#line 550
goto label_1;
#line 550
label_3:
#line 550
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__3, ___get_global_const(43)));
#line 551
c_rt_lib0move(&___nl__6,___get_global_const(108));
#line 551
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__5));
#line 551
c_rt_lib0delete(c_fe_lib0print(___nl__6));
#line 551
c_rt_lib0clear(&___nl__6);
#line 552
c_rt_lib0move(&___nl__6, c_rt_lib0get_true());
#line 552
c_rt_lib0copy(___ref___2, ___nl__6);
#line 552
c_rt_lib0clear(&___nl__6);
#line 552
c_rt_lib0clear(&___nl__5);
#line 553
goto label_1;
#line 553
label_1:
#line 553
c_rt_lib0clear(&___nl__3);
#line 553
c_rt_lib0clear(&___nl__4);
#line 553
c_rt_lib0clear(&___nl__0);
#line 553
c_rt_lib0clear(&___nl__1);
#line 553
return NULL;
}

ImmT compiler_priv0generate_modules_to_files(ImmT ___nl__0,ImmT ___nl__1,ImmT ___nl__2,ImmT * ___ref___3,ImmT ___nl__4) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
c_rt_lib0arg_val(___nl__2);
c_rt_lib0arg_val(___nl__4);
compiler_priv0__const__init();
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
ImmT ___nl__9 = NULL;
ImmT ___nl__10 = NULL;
ImmT ___nl__11 = NULL;
ImmT ___nl__12 = NULL;
ImmT ___nl__13 = NULL;
ImmT ___nl__14 = NULL;
ImmT ___nl__15 = NULL;
#line 557
c_rt_lib0move(&___nl__5, c_rt_lib0hash_mk(0));
#line 558
c_rt_lib0move(&___nl__6, c_rt_lib0priv_is(___nl__4, ___get_global_const(30)));
#line 558
if(c_rt_lib0check_true_native(___nl__6)){ goto label_2;}
#line 566
c_rt_lib0move(&___nl__6, c_rt_lib0priv_is(___nl__4, ___get_global_const(31)));
#line 566
if(c_rt_lib0check_true_native(___nl__6)){ goto label_3;}
#line 580
c_rt_lib0move(&___nl__6, c_rt_lib0priv_is(___nl__4, ___get_global_const(29)));
#line 580
if(c_rt_lib0check_true_native(___nl__6)){ goto label_4;}
#line 589
c_rt_lib0move(&___nl__6, c_rt_lib0priv_is(___nl__4, ___get_global_const(34)));
#line 589
if(c_rt_lib0check_true_native(___nl__6)){ goto label_5;}
#line 598
c_rt_lib0move(&___nl__6, c_rt_lib0priv_is(___nl__4, ___get_global_const(35)));
#line 598
if(c_rt_lib0check_true_native(___nl__6)){ goto label_6;}
#line 607
c_rt_lib0move(&___nl__6, c_rt_lib0priv_is(___nl__4, ___get_global_const(32)));
#line 607
if(c_rt_lib0check_true_native(___nl__6)){ goto label_7;}
#line 609
c_rt_lib0move(&___nl__6, c_rt_lib0priv_is(___nl__4, ___get_global_const(33)));
#line 609
if(c_rt_lib0check_true_native(___nl__6)){ goto label_8;}
#line 609
c_rt_lib0move(&___nl__6,___get_global_const(74));
#line 609
c_rt_lib0move(&___nl__6, c_rt_lib0array_mk(2, ___nl__6, ___nl__4));
#line 609
nl_die_arg(___nl__6);
#line 558
label_2:
#line 559
c_rt_lib0move(&___nl__9, c_rt_lib0init_iter(___nl__0));
#line 559
label_11:
#line 559
c_rt_lib0move(&___nl__7, c_rt_lib0is_end_hash(___nl__9));
#line 559
if(c_rt_lib0check_true_native(___nl__7)){ goto label_9;}
#line 559
c_rt_lib0move(&___nl__7, c_rt_lib0get_key_iter(___nl__9));
#line 559
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value(___nl__0, ___nl__7));
#line 560
c_rt_lib0move(&___nl__10, c_rt_lib0get_false());
#line 561
c_rt_lib0move(&___nl__11, hash0get_value(___nl__1, ___nl__7));
#line 561
c_rt_lib0move(&___nl__11, c_rt_lib0hash_get_value_dec(___nl__11, ___get_global_const(40)));
#line 561
c_rt_lib0move(&___nl__11, c_rt_lib0priv_as(___nl__11, ___get_global_const(30)));
#line 562
c_rt_lib0move(&___nl__12,___get_global_const(107));
#line 562
c_rt_lib0move(&___nl__12, c_rt_lib0concat_add(___nl__12, ___nl__7));
#line 562
c_rt_lib0delete(c_fe_lib0print(___nl__12));
#line 562
c_rt_lib0clear(&___nl__12);
#line 563
c_rt_lib0move(&___nl__12, dfile0ssave(___nl__8));
#line 563
c_rt_lib0delete(compiler_priv0try_save_file(___nl__12, ___nl__11, &___nl__10));
#line 563
c_rt_lib0clear(&___nl__12);
#line 564
c_rt_lib0copy(&___nl__12, ___nl__10);
#line 564
c_rt_lib0move(&___nl__12, c_rt_lib0not(___nl__12));
#line 564
if(c_rt_lib0check_true_native(___nl__12)){ goto label_13;}
#line 564
c_rt_lib0move(&___nl__13,___get_global_const(0));
#line 564
c_rt_lib0delete(hash0set_value(&___nl__5, ___nl__7, ___nl__13));
#line 564
c_rt_lib0clear(&___nl__13);
#line 564
goto label_13;
#line 564
label_13:
#line 564
c_rt_lib0clear(&___nl__12);
#line 564
c_rt_lib0clear(&___nl__10);
#line 564
c_rt_lib0clear(&___nl__11);
#line 565
c_rt_lib0move(&___nl__9, c_rt_lib0next_iter(___nl__9));
#line 565
goto label_11;
#line 565
label_9:
#line 565
c_rt_lib0clear(&___nl__7);
#line 565
c_rt_lib0clear(&___nl__8);
#line 565
c_rt_lib0clear(&___nl__9);
#line 566
goto label_1;
#line 566
label_3:
#line 567
c_rt_lib0move(&___nl__7, generator_c0generate(___nl__0, ___ref___3));
#line 568
c_rt_lib0move(&___nl__8, c_rt_lib0get_false());
#line 569
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__7, ___get_global_const(131)));
#line 569
c_rt_lib0move(&___nl__12, c_rt_lib0init_iter(___nl__9));
#line 569
label_16:
#line 569
c_rt_lib0move(&___nl__10, c_rt_lib0is_end_hash(___nl__12));
#line 569
if(c_rt_lib0check_true_native(___nl__10)){ goto label_14;}
#line 569
c_rt_lib0move(&___nl__10, c_rt_lib0get_key_iter(___nl__12));
#line 569
c_rt_lib0move(&___nl__11, c_rt_lib0hash_get_value(___nl__9, ___nl__10));
#line 570
c_rt_lib0move(&___nl__13, c_rt_lib0get_false());
#line 570
c_rt_lib0copy(&___nl__8, ___nl__13);
#line 570
c_rt_lib0clear(&___nl__13);
#line 571
c_rt_lib0move(&___nl__13, hash0get_value(___nl__1, ___nl__10));
#line 571
c_rt_lib0move(&___nl__13, c_rt_lib0hash_get_value_dec(___nl__13, ___get_global_const(40)));
#line 571
c_rt_lib0move(&___nl__13, c_rt_lib0priv_as(___nl__13, ___get_global_const(31)));
#line 572
c_rt_lib0move(&___nl__14,___get_global_const(107));
#line 572
c_rt_lib0move(&___nl__14, c_rt_lib0concat_add(___nl__14, ___nl__10));
#line 572
c_rt_lib0delete(c_fe_lib0print(___nl__14));
#line 572
c_rt_lib0clear(&___nl__14);
#line 573
c_rt_lib0move(&___nl__14, c_rt_lib0hash_get_value_dec(___nl__11, ___get_global_const(31)));
#line 573
c_rt_lib0move(&___nl__15, c_rt_lib0hash_get_value_dec(___nl__13, ___get_global_const(31)));
#line 573
c_rt_lib0delete(compiler_priv0try_save_file(___nl__14, ___nl__15, &___nl__8));
#line 573
c_rt_lib0clear(&___nl__15);
#line 573
c_rt_lib0clear(&___nl__14);
#line 574
c_rt_lib0move(&___nl__14, c_rt_lib0hash_get_value_dec(___nl__11, ___get_global_const(36)));
#line 574
c_rt_lib0move(&___nl__15, c_rt_lib0hash_get_value_dec(___nl__13, ___get_global_const(36)));
#line 574
c_rt_lib0delete(compiler_priv0try_save_file(___nl__14, ___nl__15, &___nl__8));
#line 574
c_rt_lib0clear(&___nl__15);
#line 574
c_rt_lib0clear(&___nl__14);
#line 575
c_rt_lib0copy(&___nl__14, ___nl__8);
#line 575
c_rt_lib0move(&___nl__14, c_rt_lib0not(___nl__14));
#line 575
if(c_rt_lib0check_true_native(___nl__14)){ goto label_18;}
#line 575
c_rt_lib0move(&___nl__15,___get_global_const(0));
#line 575
c_rt_lib0delete(hash0set_value(&___nl__5, ___nl__10, ___nl__15));
#line 575
c_rt_lib0clear(&___nl__15);
#line 575
goto label_18;
#line 575
label_18:
#line 575
c_rt_lib0clear(&___nl__14);
#line 575
c_rt_lib0clear(&___nl__13);
#line 576
c_rt_lib0move(&___nl__12, c_rt_lib0next_iter(___nl__12));
#line 576
goto label_16;
#line 576
label_14:
#line 576
c_rt_lib0clear(&___nl__9);
#line 576
c_rt_lib0clear(&___nl__10);
#line 576
c_rt_lib0clear(&___nl__11);
#line 576
c_rt_lib0clear(&___nl__12);
#line 577
c_rt_lib0move(&___nl__9,___get_global_const(132));
#line 577
c_rt_lib0delete(c_fe_lib0print(___nl__9));
#line 577
c_rt_lib0clear(&___nl__9);
#line 578
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__7, ___get_global_const(133)));
#line 578
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__9, ___get_global_const(31)));
#line 578
c_rt_lib0move(&___nl__10,___get_global_const(134));
#line 578
c_rt_lib0move(&___nl__10, c_rt_lib0concat_new(___nl__2, ___nl__10));
#line 578
c_rt_lib0delete(compiler_priv0try_save_file(___nl__9, ___nl__10, &___nl__8));
#line 578
c_rt_lib0clear(&___nl__10);
#line 578
c_rt_lib0clear(&___nl__9);
#line 579
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__7, ___get_global_const(133)));
#line 579
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__9, ___get_global_const(36)));
#line 579
c_rt_lib0move(&___nl__10,___get_global_const(135));
#line 579
c_rt_lib0move(&___nl__10, c_rt_lib0concat_new(___nl__2, ___nl__10));
#line 579
c_rt_lib0delete(compiler_priv0try_save_file(___nl__9, ___nl__10, &___nl__8));
#line 579
c_rt_lib0clear(&___nl__10);
#line 579
c_rt_lib0clear(&___nl__9);
#line 579
c_rt_lib0clear(&___nl__7);
#line 579
c_rt_lib0clear(&___nl__8);
#line 580
goto label_1;
#line 580
label_4:
#line 581
c_rt_lib0move(&___nl__9, c_rt_lib0init_iter(___nl__0));
#line 581
label_21:
#line 581
c_rt_lib0move(&___nl__7, c_rt_lib0is_end_hash(___nl__9));
#line 581
if(c_rt_lib0check_true_native(___nl__7)){ goto label_19;}
#line 581
c_rt_lib0move(&___nl__7, c_rt_lib0get_key_iter(___nl__9));
#line 581
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value(___nl__0, ___nl__7));
#line 582
c_rt_lib0move(&___nl__10, c_rt_lib0get_false());
#line 583
c_rt_lib0move(&___nl__11, generator_pm0generate(___nl__8));
#line 584
c_rt_lib0move(&___nl__12, hash0get_value(___nl__1, ___nl__7));
#line 584
c_rt_lib0move(&___nl__12, c_rt_lib0hash_get_value_dec(___nl__12, ___get_global_const(40)));
#line 584
c_rt_lib0move(&___nl__12, c_rt_lib0priv_as(___nl__12, ___get_global_const(29)));
#line 585
c_rt_lib0move(&___nl__13,___get_global_const(107));
#line 585
c_rt_lib0move(&___nl__13, c_rt_lib0concat_add(___nl__13, ___nl__7));
#line 585
c_rt_lib0delete(c_fe_lib0print(___nl__13));
#line 585
c_rt_lib0clear(&___nl__13);
#line 586
c_rt_lib0delete(compiler_priv0try_save_file(___nl__11, ___nl__12, &___nl__10));
#line 587
c_rt_lib0copy(&___nl__13, ___nl__10);
#line 587
c_rt_lib0move(&___nl__13, c_rt_lib0not(___nl__13));
#line 587
if(c_rt_lib0check_true_native(___nl__13)){ goto label_23;}
#line 587
c_rt_lib0move(&___nl__14,___get_global_const(0));
#line 587
c_rt_lib0delete(hash0set_value(&___nl__5, ___nl__7, ___nl__14));
#line 587
c_rt_lib0clear(&___nl__14);
#line 587
goto label_23;
#line 587
label_23:
#line 587
c_rt_lib0clear(&___nl__13);
#line 587
c_rt_lib0clear(&___nl__10);
#line 587
c_rt_lib0clear(&___nl__11);
#line 587
c_rt_lib0clear(&___nl__12);
#line 588
c_rt_lib0move(&___nl__9, c_rt_lib0next_iter(___nl__9));
#line 588
goto label_21;
#line 588
label_19:
#line 588
c_rt_lib0clear(&___nl__7);
#line 588
c_rt_lib0clear(&___nl__8);
#line 588
c_rt_lib0clear(&___nl__9);
#line 589
goto label_1;
#line 589
label_5:
#line 590
c_rt_lib0move(&___nl__9, c_rt_lib0init_iter(___nl__0));
#line 590
label_26:
#line 590
c_rt_lib0move(&___nl__7, c_rt_lib0is_end_hash(___nl__9));
#line 590
if(c_rt_lib0check_true_native(___nl__7)){ goto label_24;}
#line 590
c_rt_lib0move(&___nl__7, c_rt_lib0get_key_iter(___nl__9));
#line 590
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value(___nl__0, ___nl__7));
#line 591
c_rt_lib0move(&___nl__10, c_rt_lib0get_false());
#line 592
c_rt_lib0move(&___nl__11, generator_js0generate(___nl__8));
#line 593
c_rt_lib0move(&___nl__12, hash0get_value(___nl__1, ___nl__7));
#line 593
c_rt_lib0move(&___nl__12, c_rt_lib0hash_get_value_dec(___nl__12, ___get_global_const(40)));
#line 593
c_rt_lib0move(&___nl__12, c_rt_lib0priv_as(___nl__12, ___get_global_const(34)));
#line 594
c_rt_lib0move(&___nl__13,___get_global_const(107));
#line 594
c_rt_lib0move(&___nl__13, c_rt_lib0concat_add(___nl__13, ___nl__7));
#line 594
c_rt_lib0delete(c_fe_lib0print(___nl__13));
#line 594
c_rt_lib0clear(&___nl__13);
#line 595
c_rt_lib0delete(compiler_priv0try_save_file(___nl__11, ___nl__12, &___nl__10));
#line 596
c_rt_lib0copy(&___nl__13, ___nl__10);
#line 596
c_rt_lib0move(&___nl__13, c_rt_lib0not(___nl__13));
#line 596
if(c_rt_lib0check_true_native(___nl__13)){ goto label_28;}
#line 596
c_rt_lib0move(&___nl__14,___get_global_const(0));
#line 596
c_rt_lib0delete(hash0set_value(&___nl__5, ___nl__7, ___nl__14));
#line 596
c_rt_lib0clear(&___nl__14);
#line 596
goto label_28;
#line 596
label_28:
#line 596
c_rt_lib0clear(&___nl__13);
#line 596
c_rt_lib0clear(&___nl__10);
#line 596
c_rt_lib0clear(&___nl__11);
#line 596
c_rt_lib0clear(&___nl__12);
#line 597
c_rt_lib0move(&___nl__9, c_rt_lib0next_iter(___nl__9));
#line 597
goto label_26;
#line 597
label_24:
#line 597
c_rt_lib0clear(&___nl__7);
#line 597
c_rt_lib0clear(&___nl__8);
#line 597
c_rt_lib0clear(&___nl__9);
#line 598
goto label_1;
#line 598
label_6:
#line 599
c_rt_lib0move(&___nl__9, c_rt_lib0init_iter(___nl__0));
#line 599
label_31:
#line 599
c_rt_lib0move(&___nl__7, c_rt_lib0is_end_hash(___nl__9));
#line 599
if(c_rt_lib0check_true_native(___nl__7)){ goto label_29;}
#line 599
c_rt_lib0move(&___nl__7, c_rt_lib0get_key_iter(___nl__9));
#line 599
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value(___nl__0, ___nl__7));
#line 600
c_rt_lib0move(&___nl__10, c_rt_lib0get_false());
#line 601
c_rt_lib0move(&___nl__11, generator_java0generate(___nl__8));
#line 602
c_rt_lib0move(&___nl__12, hash0get_value(___nl__1, ___nl__7));
#line 602
c_rt_lib0move(&___nl__12, c_rt_lib0hash_get_value_dec(___nl__12, ___get_global_const(40)));
#line 602
c_rt_lib0move(&___nl__12, c_rt_lib0priv_as(___nl__12, ___get_global_const(35)));
#line 603
c_rt_lib0move(&___nl__13,___get_global_const(107));
#line 603
c_rt_lib0move(&___nl__13, c_rt_lib0concat_add(___nl__13, ___nl__7));
#line 603
c_rt_lib0delete(c_fe_lib0print(___nl__13));
#line 603
c_rt_lib0clear(&___nl__13);
#line 604
c_rt_lib0delete(compiler_priv0try_save_file(___nl__11, ___nl__12, &___nl__10));
#line 605
c_rt_lib0copy(&___nl__13, ___nl__10);
#line 605
c_rt_lib0move(&___nl__13, c_rt_lib0not(___nl__13));
#line 605
if(c_rt_lib0check_true_native(___nl__13)){ goto label_33;}
#line 605
c_rt_lib0move(&___nl__14,___get_global_const(0));
#line 605
c_rt_lib0delete(hash0set_value(&___nl__5, ___nl__7, ___nl__14));
#line 605
c_rt_lib0clear(&___nl__14);
#line 605
goto label_33;
#line 605
label_33:
#line 605
c_rt_lib0clear(&___nl__13);
#line 605
c_rt_lib0clear(&___nl__10);
#line 605
c_rt_lib0clear(&___nl__11);
#line 605
c_rt_lib0clear(&___nl__12);
#line 606
c_rt_lib0move(&___nl__9, c_rt_lib0next_iter(___nl__9));
#line 606
goto label_31;
#line 606
label_29:
#line 606
c_rt_lib0clear(&___nl__7);
#line 606
c_rt_lib0clear(&___nl__8);
#line 606
c_rt_lib0clear(&___nl__9);
#line 607
goto label_1;
#line 607
label_7:
#line 608
c_rt_lib0move(&___nl__7, c_rt_lib0array_mk(0));
#line 608
nl_die_arg(___nl__7);
#line 608
c_rt_lib0clear(&___nl__7);
#line 609
goto label_1;
#line 609
label_8:
#line 610
c_rt_lib0move(&___nl__7, c_rt_lib0array_mk(0));
#line 610
nl_die_arg(___nl__7);
#line 610
c_rt_lib0clear(&___nl__7);
#line 611
goto label_1;
#line 611
label_1:
#line 611
c_rt_lib0clear(&___nl__6);
#line 612
c_rt_lib0move(&___nl__6, hash0size(___nl__5));
#line 612
c_rt_lib0move(&___nl__7,___get_global_const(1));
#line 612
c_rt_lib0move(&___nl__6, c_rt_lib0gt(___nl__6, ___nl__7));
#line 612
c_rt_lib0clear(&___nl__7);
#line 612
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 612
if(c_rt_lib0check_true_native(___nl__6)){ goto label_35;}
#line 613
c_rt_lib0move(&___nl__7, c_rt_lib0ov_mk_arg(___get_global_const(43), ___nl__5));
#line 613
c_rt_lib0clear(&___nl__0);
#line 613
c_rt_lib0clear(&___nl__1);
#line 613
c_rt_lib0clear(&___nl__2);
#line 613
c_rt_lib0clear(&___nl__4);
#line 613
c_rt_lib0clear(&___nl__5);
#line 613
c_rt_lib0clear(&___nl__6);
#line 613
return ___nl__7;
#line 613
c_rt_lib0clear(&___nl__7);
#line 614
goto label_34;
#line 614
label_35:
#line 615
c_rt_lib0move(&___nl__7,___get_global_const(0));
#line 615
c_rt_lib0move(&___nl__7, c_rt_lib0ov_mk_arg(___get_global_const(44), ___nl__7));
#line 615
c_rt_lib0clear(&___nl__0);
#line 615
c_rt_lib0clear(&___nl__1);
#line 615
c_rt_lib0clear(&___nl__2);
#line 615
c_rt_lib0clear(&___nl__4);
#line 615
c_rt_lib0clear(&___nl__5);
#line 615
c_rt_lib0clear(&___nl__6);
#line 615
return ___nl__7;
#line 615
c_rt_lib0clear(&___nl__7);
#line 616
goto label_34;
#line 616
label_34:
#line 616
c_rt_lib0clear(&___nl__6);
#line 616
c_rt_lib0clear(&___nl__5);
#line 616
c_rt_lib0clear(&___nl__0);
#line 616
c_rt_lib0clear(&___nl__1);
#line 616
c_rt_lib0clear(&___nl__2);
#line 616
c_rt_lib0clear(&___nl__4);
#line 616
return NULL;
}

ImmT compiler_priv0save_module_to_file(ImmT ___nl__0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
compiler_priv0__const__init();
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
#line 619
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__1, ___get_global_const(30)));
#line 619
if(c_rt_lib0check_true_native(___nl__2)){ goto label_2;}
#line 621
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__1, ___get_global_const(31)));
#line 621
if(c_rt_lib0check_true_native(___nl__2)){ goto label_3;}
#line 623
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__1, ___get_global_const(29)));
#line 623
if(c_rt_lib0check_true_native(___nl__2)){ goto label_4;}
#line 625
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__1, ___get_global_const(34)));
#line 625
if(c_rt_lib0check_true_native(___nl__2)){ goto label_5;}
#line 627
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__1, ___get_global_const(35)));
#line 627
if(c_rt_lib0check_true_native(___nl__2)){ goto label_6;}
#line 629
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__1, ___get_global_const(32)));
#line 629
if(c_rt_lib0check_true_native(___nl__2)){ goto label_7;}
#line 631
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__1, ___get_global_const(33)));
#line 631
if(c_rt_lib0check_true_native(___nl__2)){ goto label_8;}
#line 633
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__1, ___get_global_const(37)));
#line 633
if(c_rt_lib0check_true_native(___nl__2)){ goto label_9;}
#line 633
c_rt_lib0move(&___nl__2,___get_global_const(74));
#line 633
c_rt_lib0move(&___nl__2, c_rt_lib0array_mk(2, ___nl__2, ___nl__1));
#line 633
nl_die_arg(___nl__2);
#line 619
label_2:
#line 619
c_rt_lib0move(&___nl__3, c_rt_lib0priv_as(___nl__1, ___get_global_const(30)));
#line 620
c_rt_lib0move(&___nl__4, c_rt_lib0array_mk(0));
#line 620
nl_die_arg(___nl__4);
#line 620
c_rt_lib0clear(&___nl__4);
#line 620
c_rt_lib0clear(&___nl__3);
#line 621
goto label_1;
#line 621
label_3:
#line 621
c_rt_lib0move(&___nl__3, c_rt_lib0priv_as(___nl__1, ___get_global_const(31)));
#line 622
c_rt_lib0move(&___nl__4, c_rt_lib0array_mk(0));
#line 622
nl_die_arg(___nl__4);
#line 622
c_rt_lib0clear(&___nl__4);
#line 622
c_rt_lib0clear(&___nl__3);
#line 623
goto label_1;
#line 623
label_4:
#line 623
c_rt_lib0move(&___nl__3, c_rt_lib0priv_as(___nl__1, ___get_global_const(29)));
#line 624
c_rt_lib0move(&___nl__4, c_rt_lib0array_mk(0));
#line 624
nl_die_arg(___nl__4);
#line 624
c_rt_lib0clear(&___nl__4);
#line 624
c_rt_lib0clear(&___nl__3);
#line 625
goto label_1;
#line 625
label_5:
#line 625
c_rt_lib0move(&___nl__3, c_rt_lib0priv_as(___nl__1, ___get_global_const(34)));
#line 626
c_rt_lib0move(&___nl__4, c_rt_lib0array_mk(0));
#line 626
nl_die_arg(___nl__4);
#line 626
c_rt_lib0clear(&___nl__4);
#line 626
c_rt_lib0clear(&___nl__3);
#line 627
goto label_1;
#line 627
label_6:
#line 627
c_rt_lib0move(&___nl__3, c_rt_lib0priv_as(___nl__1, ___get_global_const(35)));
#line 628
c_rt_lib0move(&___nl__4, c_rt_lib0array_mk(0));
#line 628
nl_die_arg(___nl__4);
#line 628
c_rt_lib0clear(&___nl__4);
#line 628
c_rt_lib0clear(&___nl__3);
#line 629
goto label_1;
#line 629
label_7:
#line 629
c_rt_lib0move(&___nl__3, c_rt_lib0priv_as(___nl__1, ___get_global_const(32)));
#line 630
c_rt_lib0move(&___nl__5, c_rt_lib0func_new(compiler0file_t0ptr, ___get_global_const(20), ___get_global_const(136)));
#line 630
c_rt_lib0move(&___nl__5, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__5));
#line 630
c_rt_lib0move(&___nl__7, pretty_printer0print_module_to_str(___nl__0));
#line 630
c_rt_lib0move(&___nl__6, c_fe_lib0string_to_file(___nl__3, ___nl__7));
#line 630
c_rt_lib0clear(&___nl__7);
#line 630
c_rt_lib0move(&___nl__4, ptd0ensure(___nl__5, ___nl__6));
#line 630
c_rt_lib0clear(&___nl__6);
#line 630
c_rt_lib0clear(&___nl__5);
#line 630
c_rt_lib0clear(&___nl__0);
#line 630
c_rt_lib0clear(&___nl__1);
#line 630
c_rt_lib0clear(&___nl__2);
#line 630
c_rt_lib0clear(&___nl__3);
#line 630
return ___nl__4;
#line 630
c_rt_lib0clear(&___nl__4);
#line 630
c_rt_lib0clear(&___nl__3);
#line 631
goto label_1;
#line 631
label_8:
#line 631
c_rt_lib0move(&___nl__3, c_rt_lib0priv_as(___nl__1, ___get_global_const(33)));
#line 632
c_rt_lib0move(&___nl__5, c_rt_lib0func_new(compiler0file_t0ptr, ___get_global_const(20), ___get_global_const(136)));
#line 632
c_rt_lib0move(&___nl__5, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__5));
#line 632
c_rt_lib0move(&___nl__7, dfile0ssave(___nl__0));
#line 632
c_rt_lib0move(&___nl__6, c_fe_lib0string_to_file(___nl__3, ___nl__7));
#line 632
c_rt_lib0clear(&___nl__7);
#line 632
c_rt_lib0move(&___nl__4, ptd0ensure(___nl__5, ___nl__6));
#line 632
c_rt_lib0clear(&___nl__6);
#line 632
c_rt_lib0clear(&___nl__5);
#line 632
c_rt_lib0clear(&___nl__0);
#line 632
c_rt_lib0clear(&___nl__1);
#line 632
c_rt_lib0clear(&___nl__2);
#line 632
c_rt_lib0clear(&___nl__3);
#line 632
return ___nl__4;
#line 632
c_rt_lib0clear(&___nl__4);
#line 632
c_rt_lib0clear(&___nl__3);
#line 633
goto label_1;
#line 633
label_9:
#line 634
c_rt_lib0move(&___nl__3, c_rt_lib0array_mk(0));
#line 634
nl_die_arg(___nl__3);
#line 634
c_rt_lib0clear(&___nl__3);
#line 635
goto label_1;
#line 635
label_1:
#line 635
c_rt_lib0clear(&___nl__2);
#line 635
c_rt_lib0clear(&___nl__0);
#line 635
c_rt_lib0clear(&___nl__1);
#line 635
return NULL;
}

ImmT compiler_priv0get_dir(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
compiler_priv0__const__init();
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
#line 639
c_rt_lib0move(&___nl__1, string0length(___nl__0));
#line 639
c_rt_lib0move(&___nl__2,___get_global_const(2));
#line 639
c_rt_lib0move(&___nl__1, c_rt_lib0sub_mod(___nl__1, ___nl__2));
#line 639
c_rt_lib0clear(&___nl__2);
#line 640
c_rt_lib0move(&___nl__3,___get_global_const(2));
#line 640
c_rt_lib0move(&___nl__2, string0substr(___nl__0, ___nl__1, ___nl__3));
#line 640
c_rt_lib0clear(&___nl__3);
#line 640
c_rt_lib0move(&___nl__3,___get_global_const(79));
#line 640
c_rt_lib0move(&___nl__2, c_rt_lib0eq(___nl__2, ___nl__3));
#line 640
c_rt_lib0clear(&___nl__3);
#line 640
if(c_rt_lib0check_true_native(___nl__2)){ goto label_3;}
#line 640
c_rt_lib0move(&___nl__3,___get_global_const(2));
#line 640
c_rt_lib0move(&___nl__2, string0substr(___nl__0, ___nl__1, ___nl__3));
#line 640
c_rt_lib0clear(&___nl__3);
#line 640
c_rt_lib0move(&___nl__3,___get_global_const(80));
#line 640
c_rt_lib0move(&___nl__2, c_rt_lib0eq(___nl__2, ___nl__3));
#line 640
c_rt_lib0clear(&___nl__3);
#line 640
label_3:
#line 640
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 640
if(c_rt_lib0check_true_native(___nl__2)){ goto label_2;}
#line 640
c_rt_lib0move(&___nl__3,___get_global_const(2));
#line 640
c_rt_lib0move(&___nl__1, c_rt_lib0sub_mod(___nl__1, ___nl__3));
#line 640
c_rt_lib0clear(&___nl__3);
#line 640
goto label_2;
#line 640
label_2:
#line 640
c_rt_lib0clear(&___nl__2);
#line 641
label_5:
#line 641
c_rt_lib0move(&___nl__2,___get_global_const(1));
#line 641
c_rt_lib0move(&___nl__2, c_rt_lib0ge(___nl__1, ___nl__2));
#line 641
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__2));
#line 641
if(c_rt_lib0check_true_native(___nl__4)){ goto label_7;}
#line 641
c_rt_lib0move(&___nl__5,___get_global_const(2));
#line 641
c_rt_lib0move(&___nl__2, string0substr(___nl__0, ___nl__1, ___nl__5));
#line 641
c_rt_lib0clear(&___nl__5);
#line 641
c_rt_lib0move(&___nl__5,___get_global_const(79));
#line 641
c_rt_lib0move(&___nl__2, c_rt_lib0ne(___nl__2, ___nl__5));
#line 641
c_rt_lib0clear(&___nl__5);
#line 641
label_7:
#line 641
c_rt_lib0clear(&___nl__4);
#line 641
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__2));
#line 641
if(c_rt_lib0check_true_native(___nl__3)){ goto label_6;}
#line 641
c_rt_lib0move(&___nl__4,___get_global_const(2));
#line 641
c_rt_lib0move(&___nl__2, string0substr(___nl__0, ___nl__1, ___nl__4));
#line 641
c_rt_lib0clear(&___nl__4);
#line 641
c_rt_lib0move(&___nl__4,___get_global_const(80));
#line 641
c_rt_lib0move(&___nl__2, c_rt_lib0ne(___nl__2, ___nl__4));
#line 641
c_rt_lib0clear(&___nl__4);
#line 641
label_6:
#line 641
c_rt_lib0clear(&___nl__3);
#line 641
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 641
if(c_rt_lib0check_true_native(___nl__2)){ goto label_4;}
#line 641
c_rt_lib0move(&___nl__3,___get_global_const(2));
#line 641
c_rt_lib0move(&___nl__1, c_rt_lib0sub_mod(___nl__1, ___nl__3));
#line 641
c_rt_lib0clear(&___nl__3);
#line 641
goto label_5;
#line 641
label_4:
#line 641
c_rt_lib0clear(&___nl__2);
#line 642
c_rt_lib0move(&___nl__2,___get_global_const(1));
#line 642
c_rt_lib0move(&___nl__2, c_rt_lib0le(___nl__1, ___nl__2));
#line 642
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 642
if(c_rt_lib0check_true_native(___nl__2)){ goto label_9;}
#line 642
c_rt_lib0move(&___nl__3,___get_global_const(81));
#line 642
c_rt_lib0clear(&___nl__0);
#line 642
c_rt_lib0clear(&___nl__1);
#line 642
c_rt_lib0clear(&___nl__2);
#line 642
return ___nl__3;
#line 642
c_rt_lib0clear(&___nl__3);
#line 642
goto label_9;
#line 642
label_9:
#line 642
c_rt_lib0clear(&___nl__2);
#line 643
c_rt_lib0move(&___nl__3,___get_global_const(1));
#line 643
c_rt_lib0move(&___nl__2, string0substr(___nl__0, ___nl__3, ___nl__1));
#line 643
c_rt_lib0clear(&___nl__3);
#line 643
c_rt_lib0clear(&___nl__0);
#line 643
c_rt_lib0clear(&___nl__1);
#line 643
return ___nl__2;
#line 643
c_rt_lib0clear(&___nl__2);
#line 643
c_rt_lib0clear(&___nl__1);
#line 643
c_rt_lib0clear(&___nl__0);
#line 643
return NULL;
}

ImmT compiler_priv0parse_command_line_args(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
compiler_priv0__const__init();
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
ImmT ___nl__9 = NULL;
ImmT ___nl__10 = NULL;
ImmT ___nl__11 = NULL;
#line 647
c_rt_lib0move(&___nl__2, c_rt_lib0ov_mk_none(___get_global_const(31)));
#line 647
c_rt_lib0move(&___nl__3, c_rt_lib0ov_mk_none(___get_global_const(51)));
#line 647
c_rt_lib0move(&___nl__5,___get_global_const(81));
#line 647
c_rt_lib0move(&___nl__4, c_rt_lib0array_mk(1, ___nl__5));
#line 647
c_rt_lib0clear(&___nl__5);
#line 647
c_rt_lib0move(&___nl__5, c_rt_lib0ov_mk_none(___get_global_const(47)));
#line 647
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_none(___get_global_const(42)));
#line 647
c_rt_lib0move(&___nl__7, compiler_priv0get_default_math_file());
#line 647
c_rt_lib0move(&___nl__8,___get_global_const(0));
#line 647
c_rt_lib0move(&___nl__9, c_rt_lib0ov_mk_none(___get_global_const(56)));
#line 647
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(8, ___get_global_const(64), ___nl__2, ___get_global_const(63), ___nl__3, ___get_global_const(58), ___nl__4, ___get_global_const(61), ___nl__5, ___get_global_const(60), ___nl__6, ___get_global_const(62), ___nl__7, ___get_global_const(59), ___nl__8, ___get_global_const(65), ___nl__9));
#line 647
c_rt_lib0clear(&___nl__2);
#line 647
c_rt_lib0clear(&___nl__3);
#line 647
c_rt_lib0clear(&___nl__4);
#line 647
c_rt_lib0clear(&___nl__5);
#line 647
c_rt_lib0clear(&___nl__6);
#line 647
c_rt_lib0clear(&___nl__7);
#line 647
c_rt_lib0clear(&___nl__8);
#line 647
c_rt_lib0clear(&___nl__9);
#line 657
c_rt_lib0move(&___nl__2, c_rt_lib0get_false());
#line 658
c_rt_lib0move(&___nl__3, compiler_priv0get_dir_cache_name());
#line 659
c_rt_lib0move(&___nl__4,___get_global_const(2));
#line 659
label_2:
#line 659
c_rt_lib0move(&___nl__5, array0len(___nl__0));
#line 659
c_rt_lib0move(&___nl__5, c_rt_lib0lt(___nl__4, ___nl__5));
#line 659
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 659
if(c_rt_lib0check_true_native(___nl__5)){ goto label_1;}
#line 660
c_rt_lib0move(&___nl__6, c_rt_lib0array_get(___nl__0, ___nl__4));
#line 661
c_rt_lib0move(&___nl__7, string0length(___nl__6));
#line 661
c_rt_lib0move(&___nl__9,___get_global_const(137));
#line 661
c_rt_lib0move(&___nl__7, c_rt_lib0ge(___nl__7, ___nl__9));
#line 661
c_rt_lib0clear(&___nl__9);
#line 661
c_rt_lib0move(&___nl__8, c_rt_lib0not(___nl__7));
#line 661
if(c_rt_lib0check_true_native(___nl__8)){ goto label_6;}
#line 661
c_rt_lib0move(&___nl__9,___get_global_const(1));
#line 661
c_rt_lib0move(&___nl__10,___get_global_const(137));
#line 661
c_rt_lib0move(&___nl__7, string0substr(___nl__6, ___nl__9, ___nl__10));
#line 661
c_rt_lib0clear(&___nl__10);
#line 661
c_rt_lib0clear(&___nl__9);
#line 661
c_rt_lib0move(&___nl__9,___get_global_const(138));
#line 661
c_rt_lib0move(&___nl__7, c_rt_lib0eq(___nl__7, ___nl__9));
#line 661
c_rt_lib0clear(&___nl__9);
#line 661
label_6:
#line 661
c_rt_lib0clear(&___nl__8);
#line 661
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 661
if(c_rt_lib0check_true_native(___nl__7)){ goto label_5;}
#line 662
c_rt_lib0move(&___nl__9,___get_global_const(137));
#line 662
c_rt_lib0move(&___nl__10, string0length(___nl__6));
#line 662
c_rt_lib0move(&___nl__11,___get_global_const(137));
#line 662
c_rt_lib0move(&___nl__10, c_rt_lib0sub_mod(___nl__10, ___nl__11));
#line 662
c_rt_lib0clear(&___nl__11);
#line 662
c_rt_lib0move(&___nl__8, string0substr(___nl__6, ___nl__9, ___nl__10));
#line 662
c_rt_lib0clear(&___nl__10);
#line 662
c_rt_lib0clear(&___nl__9);
#line 663
c_rt_lib0move(&___nl__9,___get_global_const(60));
#line 663
c_rt_lib0move(&___nl__9, c_rt_lib0eq(___nl__8, ___nl__9));
#line 663
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__9));
#line 663
if(c_rt_lib0check_true_native(___nl__9)){ goto label_8;}
#line 664
c_rt_lib0move(&___nl__10,___get_global_const(0));
#line 664
c_rt_lib0move(&___nl__10, c_rt_lib0ov_mk_arg(___get_global_const(41), ___nl__10));
#line 664
c_rt_lib0copy(&___nl__11, ___nl__10);
#line 664
c_rt_lib0hash_set_value_dec(&___nl__1, ___get_global_const(60), ___nl__11);
#line 664
c_rt_lib0clear(&___nl__10);
#line 664
c_rt_lib0clear(&___nl__11);
#line 665
goto label_7;
#line 665
label_8:
#line 665
c_rt_lib0move(&___nl__9,___get_global_const(30));
#line 665
c_rt_lib0move(&___nl__9, c_rt_lib0eq(___nl__8, ___nl__9));
#line 665
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__9));
#line 665
if(c_rt_lib0check_true_native(___nl__9)){ goto label_9;}
#line 666
c_rt_lib0move(&___nl__10, c_rt_lib0ov_mk_none(___get_global_const(30)));
#line 666
c_rt_lib0copy(&___nl__11, ___nl__10);
#line 666
c_rt_lib0hash_set_value_dec(&___nl__1, ___get_global_const(64), ___nl__11);
#line 666
c_rt_lib0clear(&___nl__10);
#line 666
c_rt_lib0clear(&___nl__11);
#line 667
goto label_7;
#line 667
label_9:
#line 667
c_rt_lib0move(&___nl__9,___get_global_const(33));
#line 667
c_rt_lib0move(&___nl__9, c_rt_lib0eq(___nl__8, ___nl__9));
#line 667
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__9));
#line 667
if(c_rt_lib0check_true_native(___nl__9)){ goto label_10;}
#line 668
c_rt_lib0move(&___nl__10, c_rt_lib0ov_mk_none(___get_global_const(33)));
#line 668
c_rt_lib0copy(&___nl__11, ___nl__10);
#line 668
c_rt_lib0hash_set_value_dec(&___nl__1, ___get_global_const(64), ___nl__11);
#line 668
c_rt_lib0clear(&___nl__10);
#line 668
c_rt_lib0clear(&___nl__11);
#line 669
goto label_7;
#line 669
label_10:
#line 669
c_rt_lib0move(&___nl__9,___get_global_const(29));
#line 669
c_rt_lib0move(&___nl__9, c_rt_lib0eq(___nl__8, ___nl__9));
#line 669
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__9));
#line 669
if(c_rt_lib0check_true_native(___nl__9)){ goto label_11;}
#line 670
c_rt_lib0move(&___nl__10, c_rt_lib0ov_mk_none(___get_global_const(29)));
#line 670
c_rt_lib0copy(&___nl__11, ___nl__10);
#line 670
c_rt_lib0hash_set_value_dec(&___nl__1, ___get_global_const(64), ___nl__11);
#line 670
c_rt_lib0clear(&___nl__10);
#line 670
c_rt_lib0clear(&___nl__11);
#line 671
goto label_7;
#line 671
label_11:
#line 671
c_rt_lib0move(&___nl__9,___get_global_const(31));
#line 671
c_rt_lib0move(&___nl__9, c_rt_lib0eq(___nl__8, ___nl__9));
#line 671
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__9));
#line 671
if(c_rt_lib0check_true_native(___nl__9)){ goto label_12;}
#line 672
c_rt_lib0move(&___nl__10, c_rt_lib0ov_mk_none(___get_global_const(31)));
#line 672
c_rt_lib0copy(&___nl__11, ___nl__10);
#line 672
c_rt_lib0hash_set_value_dec(&___nl__1, ___get_global_const(64), ___nl__11);
#line 672
c_rt_lib0clear(&___nl__10);
#line 672
c_rt_lib0clear(&___nl__11);
#line 673
goto label_7;
#line 673
label_12:
#line 673
c_rt_lib0move(&___nl__9,___get_global_const(34));
#line 673
c_rt_lib0move(&___nl__9, c_rt_lib0eq(___nl__8, ___nl__9));
#line 673
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__9));
#line 673
if(c_rt_lib0check_true_native(___nl__9)){ goto label_13;}
#line 674
c_rt_lib0move(&___nl__10, c_rt_lib0ov_mk_none(___get_global_const(34)));
#line 674
c_rt_lib0copy(&___nl__11, ___nl__10);
#line 674
c_rt_lib0hash_set_value_dec(&___nl__1, ___get_global_const(64), ___nl__11);
#line 674
c_rt_lib0clear(&___nl__10);
#line 674
c_rt_lib0clear(&___nl__11);
#line 675
goto label_7;
#line 675
label_13:
#line 675
c_rt_lib0move(&___nl__9,___get_global_const(35));
#line 675
c_rt_lib0move(&___nl__9, c_rt_lib0eq(___nl__8, ___nl__9));
#line 675
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__9));
#line 675
if(c_rt_lib0check_true_native(___nl__9)){ goto label_14;}
#line 676
c_rt_lib0move(&___nl__10, c_rt_lib0ov_mk_none(___get_global_const(35)));
#line 676
c_rt_lib0copy(&___nl__11, ___nl__10);
#line 676
c_rt_lib0hash_set_value_dec(&___nl__1, ___get_global_const(64), ___nl__11);
#line 676
c_rt_lib0clear(&___nl__10);
#line 676
c_rt_lib0clear(&___nl__11);
#line 677
goto label_7;
#line 677
label_14:
#line 677
c_rt_lib0move(&___nl__9,___get_global_const(32));
#line 677
c_rt_lib0move(&___nl__9, c_rt_lib0eq(___nl__8, ___nl__9));
#line 677
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__9));
#line 677
if(c_rt_lib0check_true_native(___nl__9)){ goto label_15;}
#line 678
c_rt_lib0move(&___nl__10, c_rt_lib0ov_mk_none(___get_global_const(32)));
#line 678
c_rt_lib0copy(&___nl__11, ___nl__10);
#line 678
c_rt_lib0hash_set_value_dec(&___nl__1, ___get_global_const(64), ___nl__11);
#line 678
c_rt_lib0clear(&___nl__10);
#line 678
c_rt_lib0clear(&___nl__11);
#line 679
c_rt_lib0move(&___nl__10, compiler_priv0get_dir_pretty_name());
#line 679
c_rt_lib0copy(&___nl__3, ___nl__10);
#line 679
c_rt_lib0clear(&___nl__10);
#line 680
goto label_7;
#line 680
label_15:
#line 680
c_rt_lib0move(&___nl__9,___get_global_const(53));
#line 680
c_rt_lib0move(&___nl__9, c_rt_lib0eq(___nl__8, ___nl__9));
#line 680
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__9));
#line 680
if(c_rt_lib0check_true_native(___nl__9)){ goto label_16;}
#line 681
c_rt_lib0move(&___nl__10, c_rt_lib0ov_mk_none(___get_global_const(53)));
#line 681
c_rt_lib0copy(&___nl__11, ___nl__10);
#line 681
c_rt_lib0hash_set_value_dec(&___nl__1, ___get_global_const(63), ___nl__11);
#line 681
c_rt_lib0clear(&___nl__10);
#line 681
c_rt_lib0clear(&___nl__11);
#line 682
goto label_7;
#line 682
label_16:
#line 682
c_rt_lib0move(&___nl__9,___get_global_const(54));
#line 682
c_rt_lib0move(&___nl__9, c_rt_lib0eq(___nl__8, ___nl__9));
#line 682
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__9));
#line 682
if(c_rt_lib0check_true_native(___nl__9)){ goto label_17;}
#line 683
c_rt_lib0move(&___nl__10,___get_global_const(2));
#line 683
c_rt_lib0move(&___nl__4, c_rt_lib0add_mod(___nl__4, ___nl__10));
#line 683
c_rt_lib0clear(&___nl__10);
#line 684
c_rt_lib0move(&___nl__10, array0len(___nl__0));
#line 684
c_rt_lib0move(&___nl__10, c_rt_lib0lt(___nl__4, ___nl__10));
#line 684
c_rt_lib0move(&___nl__10, c_rt_lib0not(___nl__10));
#line 684
c_rt_lib0move(&___nl__10, c_rt_lib0not(___nl__10));
#line 684
if(c_rt_lib0check_true_native(___nl__10)){ goto label_19;}
#line 684
c_rt_lib0move(&___nl__11, c_rt_lib0array_mk(0));
#line 684
nl_die_arg(___nl__11);
#line 684
goto label_19;
#line 684
label_19:
#line 684
c_rt_lib0clear(&___nl__10);
#line 684
c_rt_lib0clear(&___nl__11);
#line 685
c_rt_lib0move(&___nl__10, c_rt_lib0array_get(___nl__0, ___nl__4));
#line 685
c_rt_lib0move(&___nl__10, c_rt_lib0ov_mk_arg(___get_global_const(54), ___nl__10));
#line 685
c_rt_lib0copy(&___nl__11, ___nl__10);
#line 685
c_rt_lib0hash_set_value_dec(&___nl__1, ___get_global_const(63), ___nl__11);
#line 685
c_rt_lib0clear(&___nl__10);
#line 685
c_rt_lib0clear(&___nl__11);
#line 686
goto label_7;
#line 686
label_17:
#line 686
c_rt_lib0move(&___nl__9,___get_global_const(51));
#line 686
c_rt_lib0move(&___nl__9, c_rt_lib0eq(___nl__8, ___nl__9));
#line 686
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__9));
#line 686
if(c_rt_lib0check_true_native(___nl__9)){ goto label_20;}
#line 687
c_rt_lib0move(&___nl__10, c_rt_lib0ov_mk_none(___get_global_const(51)));
#line 687
c_rt_lib0copy(&___nl__11, ___nl__10);
#line 687
c_rt_lib0hash_set_value_dec(&___nl__1, ___get_global_const(63), ___nl__11);
#line 687
c_rt_lib0clear(&___nl__10);
#line 687
c_rt_lib0clear(&___nl__11);
#line 688
goto label_7;
#line 688
label_20:
#line 688
c_rt_lib0move(&___nl__9,___get_global_const(52));
#line 688
c_rt_lib0move(&___nl__9, c_rt_lib0eq(___nl__8, ___nl__9));
#line 688
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__9));
#line 688
if(c_rt_lib0check_true_native(___nl__9)){ goto label_21;}
#line 689
c_rt_lib0move(&___nl__10, c_rt_lib0ov_mk_none(___get_global_const(52)));
#line 689
c_rt_lib0copy(&___nl__11, ___nl__10);
#line 689
c_rt_lib0hash_set_value_dec(&___nl__1, ___get_global_const(63), ___nl__11);
#line 689
c_rt_lib0clear(&___nl__10);
#line 689
c_rt_lib0clear(&___nl__11);
#line 690
goto label_7;
#line 690
label_21:
#line 690
c_rt_lib0move(&___nl__9,___get_global_const(139));
#line 690
c_rt_lib0move(&___nl__9, c_rt_lib0eq(___nl__8, ___nl__9));
#line 690
if(c_rt_lib0check_true_native(___nl__9)){ goto label_23;}
#line 690
c_rt_lib0move(&___nl__9,___get_global_const(140));
#line 690
c_rt_lib0move(&___nl__9, c_rt_lib0eq(___nl__8, ___nl__9));
#line 690
label_23:
#line 690
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__9));
#line 690
if(c_rt_lib0check_true_native(___nl__9)){ goto label_22;}
#line 691
c_rt_lib0move(&___nl__10,___get_global_const(2));
#line 691
c_rt_lib0move(&___nl__4, c_rt_lib0add_mod(___nl__4, ___nl__10));
#line 691
c_rt_lib0clear(&___nl__10);
#line 692
c_rt_lib0move(&___nl__10, array0len(___nl__0));
#line 692
c_rt_lib0move(&___nl__10, c_rt_lib0lt(___nl__4, ___nl__10));
#line 692
c_rt_lib0move(&___nl__10, c_rt_lib0not(___nl__10));
#line 692
c_rt_lib0move(&___nl__10, c_rt_lib0not(___nl__10));
#line 692
if(c_rt_lib0check_true_native(___nl__10)){ goto label_25;}
#line 692
c_rt_lib0move(&___nl__11, c_rt_lib0array_mk(0));
#line 692
nl_die_arg(___nl__11);
#line 692
goto label_25;
#line 692
label_25:
#line 692
c_rt_lib0clear(&___nl__10);
#line 692
c_rt_lib0clear(&___nl__11);
#line 693
c_rt_lib0move(&___nl__10, c_rt_lib0array_get(___nl__0, ___nl__4));
#line 693
c_rt_lib0move(&___nl__11,___get_global_const(79));
#line 693
c_rt_lib0move(&___nl__10, c_rt_lib0concat_add(___nl__10, ___nl__11));
#line 693
c_rt_lib0clear(&___nl__11);
#line 693
c_rt_lib0copy(&___nl__11, ___nl__10);
#line 693
c_rt_lib0hash_set_value_dec(&___nl__1, ___get_global_const(59), ___nl__11);
#line 693
c_rt_lib0clear(&___nl__10);
#line 693
c_rt_lib0clear(&___nl__11);
#line 694
goto label_7;
#line 694
label_22:
#line 694
c_rt_lib0move(&___nl__9,___get_global_const(141));
#line 694
c_rt_lib0move(&___nl__9, c_rt_lib0eq(___nl__8, ___nl__9));
#line 694
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__9));
#line 694
if(c_rt_lib0check_true_native(___nl__9)){ goto label_26;}
#line 695
c_rt_lib0move(&___nl__10,___get_global_const(2));
#line 695
c_rt_lib0move(&___nl__4, c_rt_lib0add_mod(___nl__4, ___nl__10));
#line 695
c_rt_lib0clear(&___nl__10);
#line 696
c_rt_lib0move(&___nl__10, array0len(___nl__0));
#line 696
c_rt_lib0move(&___nl__10, c_rt_lib0lt(___nl__4, ___nl__10));
#line 696
c_rt_lib0move(&___nl__10, c_rt_lib0not(___nl__10));
#line 696
c_rt_lib0move(&___nl__10, c_rt_lib0not(___nl__10));
#line 696
if(c_rt_lib0check_true_native(___nl__10)){ goto label_28;}
#line 696
c_rt_lib0move(&___nl__11, c_rt_lib0array_mk(0));
#line 696
nl_die_arg(___nl__11);
#line 696
goto label_28;
#line 696
label_28:
#line 696
c_rt_lib0clear(&___nl__10);
#line 696
c_rt_lib0clear(&___nl__11);
#line 697
c_rt_lib0move(&___nl__10, c_rt_lib0array_get(___nl__0, ___nl__4));
#line 697
c_rt_lib0copy(&___nl__11, ___nl__10);
#line 697
c_rt_lib0hash_set_value_dec(&___nl__1, ___get_global_const(62), ___nl__11);
#line 697
c_rt_lib0clear(&___nl__10);
#line 697
c_rt_lib0clear(&___nl__11);
#line 698
goto label_7;
#line 698
label_26:
#line 698
c_rt_lib0move(&___nl__9,___get_global_const(142));
#line 698
c_rt_lib0move(&___nl__9, c_rt_lib0eq(___nl__8, ___nl__9));
#line 698
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__9));
#line 698
if(c_rt_lib0check_true_native(___nl__9)){ goto label_29;}
#line 699
c_rt_lib0move(&___nl__10, c_rt_lib0ov_mk_none(___get_global_const(46)));
#line 699
c_rt_lib0copy(&___nl__11, ___nl__10);
#line 699
c_rt_lib0hash_set_value_dec(&___nl__1, ___get_global_const(61), ___nl__11);
#line 699
c_rt_lib0clear(&___nl__10);
#line 699
c_rt_lib0clear(&___nl__11);
#line 700
goto label_7;
#line 700
label_29:
#line 700
c_rt_lib0move(&___nl__9,___get_global_const(143));
#line 700
c_rt_lib0move(&___nl__9, c_rt_lib0eq(___nl__8, ___nl__9));
#line 700
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__9));
#line 700
if(c_rt_lib0check_true_native(___nl__9)){ goto label_30;}
#line 701
c_rt_lib0move(&___nl__10, c_rt_lib0ov_mk_none(___get_global_const(47)));
#line 701
c_rt_lib0copy(&___nl__11, ___nl__10);
#line 701
c_rt_lib0hash_set_value_dec(&___nl__1, ___get_global_const(61), ___nl__11);
#line 701
c_rt_lib0clear(&___nl__10);
#line 701
c_rt_lib0clear(&___nl__11);
#line 702
goto label_7;
#line 702
label_30:
#line 702
c_rt_lib0move(&___nl__9,___get_global_const(144));
#line 702
c_rt_lib0move(&___nl__9, c_rt_lib0eq(___nl__8, ___nl__9));
#line 702
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__9));
#line 702
if(c_rt_lib0check_true_native(___nl__9)){ goto label_31;}
#line 703
c_rt_lib0move(&___nl__10, c_rt_lib0ov_mk_none(___get_global_const(48)));
#line 703
c_rt_lib0copy(&___nl__11, ___nl__10);
#line 703
c_rt_lib0hash_set_value_dec(&___nl__1, ___get_global_const(61), ___nl__11);
#line 703
c_rt_lib0clear(&___nl__10);
#line 703
c_rt_lib0clear(&___nl__11);
#line 704
goto label_7;
#line 704
label_31:
#line 704
c_rt_lib0move(&___nl__9,___get_global_const(145));
#line 704
c_rt_lib0move(&___nl__9, c_rt_lib0eq(___nl__8, ___nl__9));
#line 704
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__9));
#line 704
if(c_rt_lib0check_true_native(___nl__9)){ goto label_32;}
#line 705
c_rt_lib0move(&___nl__10, c_rt_lib0ov_mk_none(___get_global_const(49)));
#line 705
c_rt_lib0copy(&___nl__11, ___nl__10);
#line 705
c_rt_lib0hash_set_value_dec(&___nl__1, ___get_global_const(61), ___nl__11);
#line 705
c_rt_lib0clear(&___nl__10);
#line 705
c_rt_lib0clear(&___nl__11);
#line 706
goto label_7;
#line 706
label_32:
#line 706
c_rt_lib0move(&___nl__9,___get_global_const(146));
#line 706
c_rt_lib0move(&___nl__9, c_rt_lib0eq(___nl__8, ___nl__9));
#line 706
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__9));
#line 706
if(c_rt_lib0check_true_native(___nl__9)){ goto label_33;}
#line 707
c_rt_lib0move(&___nl__10, c_rt_lib0ov_mk_none(___get_global_const(50)));
#line 707
c_rt_lib0copy(&___nl__11, ___nl__10);
#line 707
c_rt_lib0hash_set_value_dec(&___nl__1, ___get_global_const(61), ___nl__11);
#line 707
c_rt_lib0clear(&___nl__10);
#line 707
c_rt_lib0clear(&___nl__11);
#line 708
goto label_7;
#line 708
label_33:
#line 708
c_rt_lib0move(&___nl__9,___get_global_const(147));
#line 708
c_rt_lib0move(&___nl__9, c_rt_lib0eq(___nl__8, ___nl__9));
#line 708
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__9));
#line 708
if(c_rt_lib0check_true_native(___nl__9)){ goto label_34;}
#line 709
c_rt_lib0move(&___nl__10, c_rt_lib0ov_mk_none(___get_global_const(57)));
#line 709
c_rt_lib0copy(&___nl__11, ___nl__10);
#line 709
c_rt_lib0hash_set_value_dec(&___nl__1, ___get_global_const(65), ___nl__11);
#line 709
c_rt_lib0clear(&___nl__10);
#line 709
c_rt_lib0clear(&___nl__11);
#line 710
goto label_7;
#line 710
label_34:
#line 711
c_rt_lib0move(&___nl__10,___get_global_const(148));
#line 711
c_rt_lib0move(&___nl__10, c_rt_lib0concat_add(___nl__10, ___nl__6));
#line 711
c_rt_lib0delete(c_fe_lib0print(___nl__10));
#line 711
c_rt_lib0clear(&___nl__10);
#line 712
goto label_7;
#line 712
label_7:
#line 712
c_rt_lib0clear(&___nl__9);
#line 712
c_rt_lib0clear(&___nl__8);
#line 713
goto label_4;
#line 713
label_5:
#line 714
c_rt_lib0copy(&___nl__8, ___nl__2);
#line 714
c_rt_lib0move(&___nl__8, c_rt_lib0not(___nl__8));
#line 714
c_rt_lib0move(&___nl__8, c_rt_lib0not(___nl__8));
#line 714
if(c_rt_lib0check_true_native(___nl__8)){ goto label_36;}
#line 714
c_rt_lib0move(&___nl__9, c_rt_lib0array_mk(0));
#line 714
c_rt_lib0copy(&___nl__10, ___nl__9);
#line 714
c_rt_lib0hash_set_value_dec(&___nl__1, ___get_global_const(58), ___nl__10);
#line 714
c_rt_lib0clear(&___nl__9);
#line 714
c_rt_lib0clear(&___nl__10);
#line 714
goto label_36;
#line 714
label_36:
#line 714
c_rt_lib0clear(&___nl__8);
#line 715
c_rt_lib0move(&___nl__8,___get_global_const(58));
#line 715
c_rt_lib0move(&___nl__8, c_rt_lib0get_ref_hash(___nl__1, ___nl__8));
#line 715
c_rt_lib0delete(array0push(&___nl__8, ___nl__6));
#line 715
c_rt_lib0move(&___nl__9,___get_global_const(58));
#line 715
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__1, ___nl__9, ___nl__8));
#line 715
c_rt_lib0clear(&___nl__9);
#line 715
c_rt_lib0clear(&___nl__8);
#line 716
c_rt_lib0move(&___nl__8, c_rt_lib0get_true());
#line 716
c_rt_lib0copy(&___nl__2, ___nl__8);
#line 716
c_rt_lib0clear(&___nl__8);
#line 717
goto label_4;
#line 717
label_4:
#line 717
c_rt_lib0clear(&___nl__7);
#line 717
c_rt_lib0clear(&___nl__6);
#line 717
c_rt_lib0move(&___nl__6,___get_global_const(2));
#line 717
c_rt_lib0move(&___nl__4, c_rt_lib0add_mod(___nl__4, ___nl__6));
#line 717
c_rt_lib0clear(&___nl__6);
#line 718
goto label_2;
#line 718
label_1:
#line 718
c_rt_lib0clear(&___nl__4);
#line 718
c_rt_lib0clear(&___nl__5);
#line 719
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(59)));
#line 719
c_rt_lib0move(&___nl__5,___get_global_const(0));
#line 719
c_rt_lib0move(&___nl__4, c_rt_lib0eq(___nl__4, ___nl__5));
#line 719
c_rt_lib0clear(&___nl__5);
#line 719
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 719
if(c_rt_lib0check_true_native(___nl__4)){ goto label_38;}
#line 720
c_rt_lib0move(&___nl__5,___get_global_const(149));
#line 720
c_rt_lib0move(&___nl__5, c_rt_lib0concat_add(___nl__5, ___nl__3));
#line 720
c_rt_lib0move(&___nl__6,___get_global_const(79));
#line 720
c_rt_lib0move(&___nl__5, c_rt_lib0concat_add(___nl__5, ___nl__6));
#line 720
c_rt_lib0clear(&___nl__6);
#line 720
c_rt_lib0copy(&___nl__6, ___nl__5);
#line 720
c_rt_lib0hash_set_value_dec(&___nl__1, ___get_global_const(59), ___nl__6);
#line 720
c_rt_lib0clear(&___nl__5);
#line 720
c_rt_lib0clear(&___nl__6);
#line 721
goto label_38;
#line 721
label_38:
#line 721
c_rt_lib0clear(&___nl__4);
#line 722
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(60)));
#line 722
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__4, ___get_global_const(41)));
#line 722
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 722
if(c_rt_lib0check_true_native(___nl__4)){ goto label_40;}
#line 722
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(59)));
#line 722
c_rt_lib0move(&___nl__6, compiler_priv0get_default_deref_file());
#line 722
c_rt_lib0move(&___nl__5, c_rt_lib0concat_add(___nl__5, ___nl__6));
#line 722
c_rt_lib0clear(&___nl__6);
#line 722
c_rt_lib0move(&___nl__5, c_rt_lib0ov_mk_arg(___get_global_const(41), ___nl__5));
#line 722
c_rt_lib0copy(&___nl__6, ___nl__5);
#line 722
c_rt_lib0hash_set_value_dec(&___nl__1, ___get_global_const(60), ___nl__6);
#line 722
c_rt_lib0clear(&___nl__5);
#line 722
c_rt_lib0clear(&___nl__6);
#line 722
goto label_40;
#line 722
label_40:
#line 722
c_rt_lib0clear(&___nl__4);
#line 723
c_rt_lib0clear(&___nl__0);
#line 723
c_rt_lib0clear(&___nl__2);
#line 723
c_rt_lib0clear(&___nl__3);
#line 723
return ___nl__1;
#line 723
c_rt_lib0clear(&___nl__1);
#line 723
c_rt_lib0clear(&___nl__2);
#line 723
c_rt_lib0clear(&___nl__3);
#line 723
c_rt_lib0clear(&___nl__0);
#line 723
return NULL;
}


static ImmT ___const__[16];
static int ___const_init__ = 1;
void compiler_priv0__const__init(){
if(___const_init__) {
___const_init__ = 0;
__const__f = &___const__[15];


for(int i=0;i<15;++i) ___const__[i] = NULL;
c_rt_lib0register_const(___const__, 15);
}}
ImmT compiler_priv0__const__sim(int __nr) {
ImmT ret = NULL;
c_rt_lib0copy(&ret, ___const__[__nr]);
return ret;
}
ImmT compiler_priv0__const__sing(int __nr) {
if(___const__[__nr+0]==NULL) {
switch(__nr){
case 0:
	___const__[0] = compiler_priv0get_dir_cache_name0cal();
	break;
case 1:
	___const__[1] = compiler_priv0get_dir_pretty_name0cal();
	break;
case 2:
	___const__[2] = compiler_priv0get_default_deref_file0cal();
	break;
case 3:
	___const__[3] = compiler_priv0get_default_math_file0cal();
	break;
case 4:
	___const__[4] = compiler0parse_check_t0cal();
	break;
case 5:
	___const__[5] = compiler0errors_hash_t0cal();
	break;
case 6:
	___const__[6] = compiler0errors_group_t0cal();
	break;
case 7:
	___const__[7] = compiler0language_t0cal();
	break;
case 8:
	___const__[8] = compiler0destination_t0cal();
	break;
case 9:
	___const__[9] = compiler0module_t0cal();
	break;
case 10:
	___const__[10] = compiler0deref_t0cal();
	break;
case 11:
	___const__[11] = compiler0try_t0cal();
	break;
case 12:
	___const__[12] = compiler0input_type0cal();
	break;
case 13:
	___const__[13] = compiler0file_t0cal();
	break;
case 14:
	___const__[14] = compiler_priv0get_known_func0cal();
	break;
default:
	nl_die();
}}
ImmT ret = NULL;
c_rt_lib0copy(&ret, ___const__[__nr+0]);
return ret;
}
