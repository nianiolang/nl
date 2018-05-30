
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
#include "post_processing_t.h"
#include "tc_types.h"
#include "type_checker.h"
#include "module_checker.h"
#include "interpreter.h"
#include "nl.h"
#include "compiler_lib.h"
#include "profile.h"
#include "nsystem.h"
#include "string_utils.h"
#include "reference_generator.h"
#include "nl.h"
#include "module_checker.h"
#include "boolean_t.h"
#include "compiler_lib.h"
#include "reference_generator.h"
#include "nast.h"
#include "tc_types.h"
#include "compiler.h"
#line 1 "compiler.nl"

static ImmT *__const__f = NULL;
ImmT compiler_priv0__const__sim(int __nr);
ImmT compiler_priv0__const__sing(int __nr);

ImmT compiler_priv0get_dir_cache_name();
ImmT compiler_priv0get_dir_pretty_name();
ImmT compiler_priv0get_default_deref_file();
ImmT compiler_priv0get_default_math_file();
ImmT compiler_priv0get_profile_file_name(ImmT ___nl__0);
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
ImmT compiler_priv0construct_error_message(ImmT ___nl__0,ImmT ___nl__1);
ImmT compiler_priv0show_and_count_errors(ImmT ___nl__0,ImmT ___nl__1,ImmT ___nl__2);
ImmT compiler_priv0translate(ImmT ___nl__0,ImmT * ___ref___1);
ImmT compiler_priv0check_modules(ImmT ___nl__0,ImmT * ___ref___1,ImmT ___nl__2,ImmT ___nl__3);
ImmT compiler_priv0serialize_deref(ImmT ___nl__0,ImmT ___nl__1);
ImmT compiler_priv0process_deref(ImmT ___nl__0);
ImmT compiler_priv0try_save_file(ImmT ___nl__0,ImmT ___nl__1,ImmT * ___ref___2);
ImmT compiler_priv0generate_modules_to_files(ImmT ___nl__0,ImmT ___nl__1,ImmT ___nl__2,ImmT * ___ref___3,ImmT ___nl__4);
ImmT compiler_priv0save_module_to_file(ImmT ___nl__0,ImmT ___nl__1);
ImmT compiler_priv0get_dir(ImmT ___nl__0);
ImmT compiler_priv0parse_command_line_args(ImmT ___nl__0);


ImmT compiler_priv0get_dir_cache_name(){
return compiler_priv0__const__sing(0);}
ImmT compiler_priv0get_dir_cache_name0cal() {
ImmT ___nl__0 = NULL;
#line 36
c_rt_lib0move(&___nl__0,___get_global_const(9));
#line 36
return ___nl__0;
#line 36
c_rt_lib0clear(&___nl__0);
#line 36
return NULL;
}

ImmT compiler_priv0get_dir_pretty_name(){
return compiler_priv0__const__sing(1);}
ImmT compiler_priv0get_dir_pretty_name0cal() {
ImmT ___nl__0 = NULL;
#line 40
c_rt_lib0move(&___nl__0,___get_global_const(10));
#line 40
return ___nl__0;
#line 40
c_rt_lib0clear(&___nl__0);
#line 40
return NULL;
}

ImmT compiler_priv0get_default_deref_file(){
return compiler_priv0__const__sing(2);}
ImmT compiler_priv0get_default_deref_file0cal() {
ImmT ___nl__0 = NULL;
#line 44
c_rt_lib0move(&___nl__0,___get_global_const(11));
#line 44
return ___nl__0;
#line 44
c_rt_lib0clear(&___nl__0);
#line 44
return NULL;
}

ImmT compiler_priv0get_default_math_file(){
return compiler_priv0__const__sing(3);}
ImmT compiler_priv0get_default_math_file0cal() {
ImmT ___nl__0 = NULL;
#line 48
c_rt_lib0move(&___nl__0,___get_global_const(12));
#line 48
return ___nl__0;
#line 48
c_rt_lib0clear(&___nl__0);
#line 48
return NULL;
}

ImmT compiler0parse_check_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "compiler0parse_check_t");
return compiler0parse_check_t();}
ImmT compiler0parse_check_t(){
return compiler_priv0__const__sing(4);}
ImmT compiler0parse_check_t0cal() {
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
#line 53
c_rt_lib0move(&___nl__3, c_rt_lib0func_new(nast0module_t0ptr, ___get_global_const(13), ___get_global_const(14)));
#line 53
c_rt_lib0move(&___nl__3, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__3));
#line 53
c_rt_lib0move(&___nl__2, ptd0hash(___nl__3));
#line 53
c_rt_lib0clear(&___nl__3);
#line 54
c_rt_lib0move(&___nl__4, ptd0sim());
#line 54
c_rt_lib0move(&___nl__3, ptd0arr(___nl__4));
#line 54
c_rt_lib0clear(&___nl__4);
#line 55
c_rt_lib0move(&___nl__4, c_rt_lib0func_new(tc_types0deref_types0ptr, ___get_global_const(15), ___get_global_const(16)));
#line 55
c_rt_lib0move(&___nl__4, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__4));
#line 55
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(3, ___get_global_const(17), ___nl__2, ___get_global_const(18), ___nl__3, ___get_global_const(19), ___nl__4));
#line 55
c_rt_lib0clear(&___nl__2);
#line 55
c_rt_lib0clear(&___nl__3);
#line 55
c_rt_lib0clear(&___nl__4);
#line 55
c_rt_lib0move(&___nl__0, ptd0rec(___nl__1));
#line 55
c_rt_lib0clear(&___nl__1);
#line 55
return ___nl__0;
#line 55
c_rt_lib0clear(&___nl__0);
#line 55
return NULL;
}

ImmT compiler0errors_hash_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "compiler0errors_hash_t");
return compiler0errors_hash_t();}
ImmT compiler0errors_hash_t(){
return compiler_priv0__const__sing(5);}
ImmT compiler0errors_hash_t0cal() {
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
#line 60
c_rt_lib0move(&___nl__2, c_rt_lib0func_new(compiler_lib0error_t0ptr, ___get_global_const(20), ___get_global_const(21)));
#line 60
c_rt_lib0move(&___nl__2, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__2));
#line 60
c_rt_lib0move(&___nl__1, ptd0arr(___nl__2));
#line 60
c_rt_lib0clear(&___nl__2);
#line 60
c_rt_lib0move(&___nl__0, ptd0hash(___nl__1));
#line 60
c_rt_lib0clear(&___nl__1);
#line 60
return ___nl__0;
#line 60
c_rt_lib0clear(&___nl__0);
#line 60
return NULL;
}

ImmT compiler0errors_group_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "compiler0errors_group_t");
return compiler0errors_group_t();}
ImmT compiler0errors_group_t(){
return compiler_priv0__const__sing(6);}
ImmT compiler0errors_group_t0cal() {
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
#line 65
c_rt_lib0move(&___nl__2, c_rt_lib0func_new(compiler0errors_hash_t0ptr, ___get_global_const(22), ___get_global_const(23)));
#line 65
c_rt_lib0move(&___nl__2, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__2));
#line 66
c_rt_lib0move(&___nl__3, c_rt_lib0func_new(compiler0errors_hash_t0ptr, ___get_global_const(22), ___get_global_const(23)));
#line 66
c_rt_lib0move(&___nl__3, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__3));
#line 67
c_rt_lib0move(&___nl__4, c_rt_lib0func_new(compiler0errors_hash_t0ptr, ___get_global_const(22), ___get_global_const(23)));
#line 67
c_rt_lib0move(&___nl__4, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__4));
#line 68
c_rt_lib0move(&___nl__5, c_rt_lib0func_new(compiler0errors_hash_t0ptr, ___get_global_const(22), ___get_global_const(23)));
#line 68
c_rt_lib0move(&___nl__5, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__5));
#line 69
c_rt_lib0move(&___nl__6, c_rt_lib0func_new(module_checker0ret_t0ptr, ___get_global_const(24), ___get_global_const(25)));
#line 69
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__6));
#line 69
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(5, ___get_global_const(26), ___nl__2, ___get_global_const(27), ___nl__3, ___get_global_const(28), ___nl__4, ___get_global_const(29), ___nl__5, ___get_global_const(30), ___nl__6));
#line 69
c_rt_lib0clear(&___nl__2);
#line 69
c_rt_lib0clear(&___nl__3);
#line 69
c_rt_lib0clear(&___nl__4);
#line 69
c_rt_lib0clear(&___nl__5);
#line 69
c_rt_lib0clear(&___nl__6);
#line 69
c_rt_lib0move(&___nl__0, ptd0rec(___nl__1));
#line 69
c_rt_lib0clear(&___nl__1);
#line 69
return ___nl__0;
#line 69
c_rt_lib0clear(&___nl__0);
#line 69
return NULL;
}

ImmT compiler0language_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "compiler0language_t");
return compiler0language_t();}
ImmT compiler0language_t(){
return compiler_priv0__const__sing(7);}
ImmT compiler0language_t0cal() {
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
#line 75
c_rt_lib0move(&___nl__2, ptd0none());
#line 76
c_rt_lib0move(&___nl__3, ptd0none());
#line 77
c_rt_lib0move(&___nl__4, ptd0none());
#line 78
c_rt_lib0move(&___nl__5, ptd0none());
#line 79
c_rt_lib0move(&___nl__6, ptd0none());
#line 80
c_rt_lib0move(&___nl__9, ptd0sim());
#line 80
c_rt_lib0move(&___nl__8, c_rt_lib0hash_mk(1, ___get_global_const(31), ___nl__9));
#line 80
c_rt_lib0clear(&___nl__9);
#line 80
c_rt_lib0move(&___nl__7, ptd0rec(___nl__8));
#line 80
c_rt_lib0clear(&___nl__8);
#line 81
c_rt_lib0move(&___nl__8, ptd0none());
#line 82
c_rt_lib0move(&___nl__9, ptd0none());
#line 82
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(8, ___get_global_const(32), ___nl__2, ___get_global_const(33), ___nl__3, ___get_global_const(34), ___nl__4, ___get_global_const(35), ___nl__5, ___get_global_const(36), ___nl__6, ___get_global_const(37), ___nl__7, ___get_global_const(38), ___nl__8, ___get_global_const(39), ___nl__9));
#line 82
c_rt_lib0clear(&___nl__2);
#line 82
c_rt_lib0clear(&___nl__3);
#line 82
c_rt_lib0clear(&___nl__4);
#line 82
c_rt_lib0clear(&___nl__5);
#line 82
c_rt_lib0clear(&___nl__6);
#line 82
c_rt_lib0clear(&___nl__7);
#line 82
c_rt_lib0clear(&___nl__8);
#line 82
c_rt_lib0clear(&___nl__9);
#line 82
c_rt_lib0move(&___nl__0, ptd0var(___nl__1));
#line 82
c_rt_lib0clear(&___nl__1);
#line 82
return ___nl__0;
#line 82
c_rt_lib0clear(&___nl__0);
#line 82
return NULL;
}

ImmT compiler0destination_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "compiler0destination_t");
return compiler0destination_t();}
ImmT compiler0destination_t(){
return compiler_priv0__const__sing(8);}
ImmT compiler0destination_t0cal() {
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
#line 88
c_rt_lib0move(&___nl__2, ptd0sim());
#line 89
c_rt_lib0move(&___nl__3, ptd0sim());
#line 90
c_rt_lib0move(&___nl__6, ptd0sim());
#line 90
c_rt_lib0move(&___nl__7, ptd0sim());
#line 90
c_rt_lib0move(&___nl__5, c_rt_lib0hash_mk(2, ___get_global_const(34), ___nl__6, ___get_global_const(40), ___nl__7));
#line 90
c_rt_lib0clear(&___nl__6);
#line 90
c_rt_lib0clear(&___nl__7);
#line 90
c_rt_lib0move(&___nl__4, ptd0rec(___nl__5));
#line 90
c_rt_lib0clear(&___nl__5);
#line 91
c_rt_lib0move(&___nl__5, ptd0sim());
#line 92
c_rt_lib0move(&___nl__6, ptd0sim());
#line 93
c_rt_lib0move(&___nl__7, ptd0sim());
#line 94
c_rt_lib0move(&___nl__8, ptd0sim());
#line 95
c_rt_lib0move(&___nl__9, ptd0none());
#line 96
c_rt_lib0move(&___nl__10, ptd0none());
#line 96
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(9, ___get_global_const(32), ___nl__2, ___get_global_const(33), ___nl__3, ___get_global_const(34), ___nl__4, ___get_global_const(35), ___nl__5, ___get_global_const(36), ___nl__6, ___get_global_const(37), ___nl__7, ___get_global_const(38), ___nl__8, ___get_global_const(41), ___nl__9, ___get_global_const(39), ___nl__10));
#line 96
c_rt_lib0clear(&___nl__2);
#line 96
c_rt_lib0clear(&___nl__3);
#line 96
c_rt_lib0clear(&___nl__4);
#line 96
c_rt_lib0clear(&___nl__5);
#line 96
c_rt_lib0clear(&___nl__6);
#line 96
c_rt_lib0clear(&___nl__7);
#line 96
c_rt_lib0clear(&___nl__8);
#line 96
c_rt_lib0clear(&___nl__9);
#line 96
c_rt_lib0clear(&___nl__10);
#line 96
c_rt_lib0move(&___nl__0, ptd0var(___nl__1));
#line 96
c_rt_lib0clear(&___nl__1);
#line 96
return ___nl__0;
#line 96
c_rt_lib0clear(&___nl__0);
#line 96
return NULL;
}

ImmT compiler0module_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "compiler0module_t");
return compiler0module_t();}
ImmT compiler0module_t(){
return compiler_priv0__const__sing(9);}
ImmT compiler0module_t0cal() {
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
#line 101
c_rt_lib0move(&___nl__3, ptd0sim());
#line 101
c_rt_lib0move(&___nl__4, c_rt_lib0func_new(compiler0destination_t0ptr, ___get_global_const(22), ___get_global_const(42)));
#line 101
c_rt_lib0move(&___nl__4, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__4));
#line 101
c_rt_lib0move(&___nl__2, c_rt_lib0hash_mk(2, ___get_global_const(43), ___nl__3, ___get_global_const(44), ___nl__4));
#line 101
c_rt_lib0clear(&___nl__3);
#line 101
c_rt_lib0clear(&___nl__4);
#line 101
c_rt_lib0move(&___nl__1, ptd0rec(___nl__2));
#line 101
c_rt_lib0clear(&___nl__2);
#line 101
c_rt_lib0move(&___nl__0, ptd0hash(___nl__1));
#line 101
c_rt_lib0clear(&___nl__1);
#line 101
return ___nl__0;
#line 101
c_rt_lib0clear(&___nl__0);
#line 101
return NULL;
}

ImmT compiler0deref_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "compiler0deref_t");
return compiler0deref_t();}
ImmT compiler0deref_t(){
return compiler_priv0__const__sing(10);}
ImmT compiler0deref_t0cal() {
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
#line 105
c_rt_lib0move(&___nl__2, ptd0sim());
#line 105
c_rt_lib0move(&___nl__3, ptd0none());
#line 105
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(2, ___get_global_const(45), ___nl__2, ___get_global_const(46), ___nl__3));
#line 105
c_rt_lib0clear(&___nl__2);
#line 105
c_rt_lib0clear(&___nl__3);
#line 105
c_rt_lib0move(&___nl__0, ptd0var(___nl__1));
#line 105
c_rt_lib0clear(&___nl__1);
#line 105
return ___nl__0;
#line 105
c_rt_lib0clear(&___nl__0);
#line 105
return NULL;
}

ImmT compiler0try_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "compiler0try_t");
return compiler0try_t();}
ImmT compiler0try_t(){
return compiler_priv0__const__sing(11);}
ImmT compiler0try_t0cal() {
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
#line 109
c_rt_lib0move(&___nl__2, ptd0sim());
#line 109
c_rt_lib0move(&___nl__3, ptd0sim());
#line 109
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(2, ___get_global_const(47), ___nl__2, ___get_global_const(48), ___nl__3));
#line 109
c_rt_lib0clear(&___nl__2);
#line 109
c_rt_lib0clear(&___nl__3);
#line 109
c_rt_lib0move(&___nl__0, ptd0var(___nl__1));
#line 109
c_rt_lib0clear(&___nl__1);
#line 109
return ___nl__0;
#line 109
c_rt_lib0clear(&___nl__0);
#line 109
return NULL;
}

ImmT compiler0input_type0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "compiler0input_type");
return compiler0input_type();}
ImmT compiler0input_type(){
return compiler_priv0__const__sing(12);}
ImmT compiler0input_type0cal() {
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
#line 114
c_rt_lib0move(&___nl__3, ptd0sim());
#line 114
c_rt_lib0move(&___nl__2, ptd0arr(___nl__3));
#line 114
c_rt_lib0clear(&___nl__3);
#line 115
c_rt_lib0move(&___nl__3, ptd0sim());
#line 116
c_rt_lib0move(&___nl__4, c_rt_lib0func_new(compiler0deref_t0ptr, ___get_global_const(22), ___get_global_const(49)));
#line 116
c_rt_lib0move(&___nl__4, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__4));
#line 118
c_rt_lib0move(&___nl__7, ptd0none());
#line 119
c_rt_lib0move(&___nl__8, ptd0none());
#line 120
c_rt_lib0move(&___nl__9, ptd0none());
#line 121
c_rt_lib0move(&___nl__10, ptd0none());
#line 122
c_rt_lib0move(&___nl__11, ptd0none());
#line 122
c_rt_lib0move(&___nl__6, c_rt_lib0hash_mk(5, ___get_global_const(50), ___nl__7, ___get_global_const(51), ___nl__8, ___get_global_const(52), ___nl__9, ___get_global_const(53), ___nl__10, ___get_global_const(54), ___nl__11));
#line 122
c_rt_lib0clear(&___nl__7);
#line 122
c_rt_lib0clear(&___nl__8);
#line 122
c_rt_lib0clear(&___nl__9);
#line 122
c_rt_lib0clear(&___nl__10);
#line 122
c_rt_lib0clear(&___nl__11);
#line 122
c_rt_lib0move(&___nl__5, ptd0var(___nl__6));
#line 122
c_rt_lib0clear(&___nl__6);
#line 124
c_rt_lib0move(&___nl__6, ptd0sim());
#line 125
c_rt_lib0move(&___nl__9, ptd0none());
#line 125
c_rt_lib0move(&___nl__10, ptd0none());
#line 125
c_rt_lib0move(&___nl__11, ptd0none());
#line 125
c_rt_lib0move(&___nl__12, ptd0sim());
#line 125
c_rt_lib0move(&___nl__8, c_rt_lib0hash_mk(4, ___get_global_const(55), ___nl__9, ___get_global_const(56), ___nl__10, ___get_global_const(57), ___nl__11, ___get_global_const(58), ___nl__12));
#line 125
c_rt_lib0clear(&___nl__9);
#line 125
c_rt_lib0clear(&___nl__10);
#line 125
c_rt_lib0clear(&___nl__11);
#line 125
c_rt_lib0clear(&___nl__12);
#line 125
c_rt_lib0move(&___nl__7, ptd0var(___nl__8));
#line 125
c_rt_lib0clear(&___nl__8);
#line 126
c_rt_lib0move(&___nl__8, c_rt_lib0func_new(compiler0language_t0ptr, ___get_global_const(22), ___get_global_const(59)));
#line 126
c_rt_lib0move(&___nl__8, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__8));
#line 127
c_rt_lib0move(&___nl__11, ptd0none());
#line 127
c_rt_lib0move(&___nl__12, ptd0none());
#line 127
c_rt_lib0move(&___nl__10, c_rt_lib0hash_mk(2, ___get_global_const(60), ___nl__11, ___get_global_const(61), ___nl__12));
#line 127
c_rt_lib0clear(&___nl__11);
#line 127
c_rt_lib0clear(&___nl__12);
#line 127
c_rt_lib0move(&___nl__9, ptd0var(___nl__10));
#line 127
c_rt_lib0clear(&___nl__10);
#line 128
c_rt_lib0move(&___nl__10, c_rt_lib0func_new(boolean_t0type0ptr, ___get_global_const(62), ___get_global_const(63)));
#line 128
c_rt_lib0move(&___nl__10, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__10));
#line 129
c_rt_lib0move(&___nl__11, c_rt_lib0func_new(boolean_t0type0ptr, ___get_global_const(62), ___get_global_const(63)));
#line 129
c_rt_lib0move(&___nl__11, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__11));
#line 129
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(10, ___get_global_const(64), ___nl__2, ___get_global_const(65), ___nl__3, ___get_global_const(66), ___nl__4, ___get_global_const(67), ___nl__5, ___get_global_const(68), ___nl__6, ___get_global_const(69), ___nl__7, ___get_global_const(70), ___nl__8, ___get_global_const(71), ___nl__9, ___get_global_const(72), ___nl__10, ___get_global_const(73), ___nl__11));
#line 129
c_rt_lib0clear(&___nl__2);
#line 129
c_rt_lib0clear(&___nl__3);
#line 129
c_rt_lib0clear(&___nl__4);
#line 129
c_rt_lib0clear(&___nl__5);
#line 129
c_rt_lib0clear(&___nl__6);
#line 129
c_rt_lib0clear(&___nl__7);
#line 129
c_rt_lib0clear(&___nl__8);
#line 129
c_rt_lib0clear(&___nl__9);
#line 129
c_rt_lib0clear(&___nl__10);
#line 129
c_rt_lib0clear(&___nl__11);
#line 129
c_rt_lib0move(&___nl__0, ptd0rec(___nl__1));
#line 129
c_rt_lib0clear(&___nl__1);
#line 129
return ___nl__0;
#line 129
c_rt_lib0clear(&___nl__0);
#line 129
return NULL;
}

ImmT compiler0file_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "compiler0file_t");
return compiler0file_t();}
ImmT compiler0file_t(){
return compiler_priv0__const__sing(13);}
ImmT compiler0file_t0cal() {
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
#line 134
c_rt_lib0move(&___nl__2, ptd0sim());
#line 134
c_rt_lib0move(&___nl__3, ptd0sim());
#line 134
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(2, ___get_global_const(48), ___nl__2, ___get_global_const(47), ___nl__3));
#line 134
c_rt_lib0clear(&___nl__2);
#line 134
c_rt_lib0clear(&___nl__3);
#line 134
c_rt_lib0move(&___nl__0, ptd0var(___nl__1));
#line 134
c_rt_lib0clear(&___nl__1);
#line 134
return ___nl__0;
#line 134
c_rt_lib0clear(&___nl__0);
#line 134
return NULL;
}

ImmT compiler0compile0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "compiler0compile");
return compiler0compile(_tab[0]);}
ImmT compiler0compile(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
#line 138
c_rt_lib0move(&___nl__1, compiler_priv0parse_command_line_args(___nl__0));
#line 139
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(65)));
#line 139
c_rt_lib0delete(c_fe_lib0mk_path(___nl__2));
#line 139
c_rt_lib0clear(&___nl__2);
#line 140
c_rt_lib0move(&___nl__2,___get_global_const(0));
#line 141
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(69)));
#line 141
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__3, ___get_global_const(55)));
#line 141
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 141
if(c_rt_lib0check_true_native(___nl__3)){ goto label_16;}
#line 142
c_rt_lib0move(&___nl__4,___get_global_const(74));
#line 142
c_rt_lib0delete(c_fe_lib0print(___nl__4));
#line 142
c_rt_lib0clear(&___nl__4);
#line 143
c_rt_lib0move(&___nl__4, compiler_priv0compile_strict_file(___nl__1));
#line 143
c_rt_lib0copy(&___nl__2, ___nl__4);
#line 143
c_rt_lib0clear(&___nl__4);
#line 144
goto label_47;
#line 144
label_16:
#line 144
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(69)));
#line 144
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__3, ___get_global_const(57)));
#line 144
if(c_rt_lib0check_true_native(___nl__3)){ goto label_22;}
#line 144
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(69)));
#line 144
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__3, ___get_global_const(58)));
#line 144
label_22:
#line 144
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 144
if(c_rt_lib0check_true_native(___nl__3)){ goto label_33;}
#line 145
c_rt_lib0move(&___nl__4,___get_global_const(75));
#line 145
c_rt_lib0delete(c_fe_lib0print(___nl__4));
#line 145
c_rt_lib0clear(&___nl__4);
#line 146
c_rt_lib0delete(compiler_priv0compile_ide(___nl__1));
#line 147
c_rt_lib0move(&___nl__4,___get_global_const(0));
#line 147
c_rt_lib0copy(&___nl__2, ___nl__4);
#line 147
c_rt_lib0clear(&___nl__4);
#line 148
goto label_47;
#line 148
label_33:
#line 148
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(69)));
#line 148
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__3, ___get_global_const(56)));
#line 148
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 148
if(c_rt_lib0check_true_native(___nl__3)){ goto label_42;}
#line 149
c_rt_lib0move(&___nl__4, compiler_priv0exec_interpreter(___nl__1));
#line 149
c_rt_lib0copy(&___nl__2, ___nl__4);
#line 149
c_rt_lib0clear(&___nl__4);
#line 150
goto label_47;
#line 150
label_42:
#line 151
c_rt_lib0move(&___nl__4, c_rt_lib0array_mk(0));
#line 151
nl_die_arg(___nl__4);
#line 151
c_rt_lib0clear(&___nl__4);
#line 152
goto label_47;
#line 152
label_47:
#line 152
c_rt_lib0clear(&___nl__3);
#line 153
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(73)));
#line 153
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 153
if(c_rt_lib0check_true_native(___nl__3)){ goto label_62;}
#line 154
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(65)));
#line 154
c_rt_lib0move(&___nl__5,___get_global_const(76));
#line 154
c_rt_lib0move(&___nl__4, c_rt_lib0concat_add(___nl__4, ___nl__5));
#line 154
c_rt_lib0clear(&___nl__5);
#line 155
c_rt_lib0delete(c_fe_lib0mk_path(___nl__4));
#line 156
c_rt_lib0move(&___nl__5, compiler_priv0get_profile_file_name(___nl__4));
#line 156
c_rt_lib0delete(profile0save(___nl__5));
#line 156
c_rt_lib0clear(&___nl__5);
#line 156
c_rt_lib0clear(&___nl__4);
#line 157
goto label_62;
#line 157
label_62:
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

ImmT compiler_priv0get_profile_file_name(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
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
#line 162
c_rt_lib0move(&___nl__1,___get_global_const(77));
#line 162
c_rt_lib0move(&___nl__1, c_rt_lib0concat_new(___nl__0, ___nl__1));
#line 163
c_rt_lib0move(&___nl__3, nsystem0time());
#line 163
c_rt_lib0move(&___nl__2, nsystem0localtime(___nl__3));
#line 163
c_rt_lib0clear(&___nl__3);
#line 164
c_rt_lib0move(&___nl__3, nsystem0get_pid());
#line 165
c_rt_lib0move(&___nl__4, nsystem0time_microsec());
#line 166
c_rt_lib0move(&___nl__5,___get_global_const(78));
#line 166
c_rt_lib0move(&___nl__6,___get_global_const(0));
#line 166
c_rt_lib0move(&___nl__7,___get_global_const(1));
#line 166
label_10:
#line 166
c_rt_lib0move(&___nl__8, c_rt_lib0ge(___nl__6, ___nl__5));
#line 166
if(c_rt_lib0check_true_native(___nl__8)){ goto label_24;}
#line 167
c_rt_lib0move(&___nl__10, c_rt_lib0array_get(___nl__2, ___nl__6));
#line 167
c_rt_lib0move(&___nl__11,___get_global_const(6));
#line 167
c_rt_lib0move(&___nl__9, string_utils0int2str(___nl__10, ___nl__11));
#line 167
c_rt_lib0clear(&___nl__11);
#line 167
c_rt_lib0clear(&___nl__10);
#line 167
c_rt_lib0copy(&___nl__10, ___nl__9);
#line 167
c_rt_lib0array_set(&___nl__2, ___nl__6, ___nl__10);
#line 167
c_rt_lib0clear(&___nl__9);
#line 167
c_rt_lib0clear(&___nl__10);
#line 168
c_rt_lib0move(&___nl__6, c_rt_lib0add_mod(___nl__6, ___nl__7));
#line 168
goto label_10;
#line 168
label_24:
#line 168
c_rt_lib0clear(&___nl__5);
#line 168
c_rt_lib0clear(&___nl__6);
#line 168
c_rt_lib0clear(&___nl__7);
#line 168
c_rt_lib0clear(&___nl__8);
#line 169
c_rt_lib0move(&___nl__7,___get_global_const(1));
#line 169
c_rt_lib0move(&___nl__6, c_rt_lib0array_get(___nl__4, ___nl__7));
#line 169
c_rt_lib0clear(&___nl__7);
#line 169
c_rt_lib0move(&___nl__7,___get_global_const(79));
#line 169
c_rt_lib0move(&___nl__6, c_rt_lib0div_mod(___nl__6, ___nl__7));
#line 169
c_rt_lib0clear(&___nl__7);
#line 169
c_rt_lib0move(&___nl__7,___get_global_const(80));
#line 169
c_rt_lib0move(&___nl__5, string_utils0int2str(___nl__6, ___nl__7));
#line 169
c_rt_lib0clear(&___nl__7);
#line 169
c_rt_lib0clear(&___nl__6);
#line 170
c_rt_lib0move(&___nl__6,___get_global_const(81));
#line 170
c_rt_lib0move(&___nl__6, c_rt_lib0concat_new(___nl__1, ___nl__6));
#line 170
c_rt_lib0move(&___nl__8,___get_global_const(78));
#line 170
c_rt_lib0move(&___nl__7, c_rt_lib0array_get(___nl__2, ___nl__8));
#line 170
c_rt_lib0clear(&___nl__8);
#line 170
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__7));
#line 170
c_rt_lib0clear(&___nl__7);
#line 170
c_rt_lib0move(&___nl__7,___get_global_const(2));
#line 170
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__7));
#line 170
c_rt_lib0clear(&___nl__7);
#line 170
c_rt_lib0move(&___nl__8,___get_global_const(82));
#line 170
c_rt_lib0move(&___nl__7, c_rt_lib0array_get(___nl__2, ___nl__8));
#line 170
c_rt_lib0clear(&___nl__8);
#line 170
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__7));
#line 170
c_rt_lib0clear(&___nl__7);
#line 170
c_rt_lib0move(&___nl__7,___get_global_const(2));
#line 170
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__7));
#line 170
c_rt_lib0clear(&___nl__7);
#line 170
c_rt_lib0move(&___nl__8,___get_global_const(80));
#line 170
c_rt_lib0move(&___nl__7, c_rt_lib0array_get(___nl__2, ___nl__8));
#line 170
c_rt_lib0clear(&___nl__8);
#line 170
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__7));
#line 170
c_rt_lib0clear(&___nl__7);
#line 170
c_rt_lib0move(&___nl__7,___get_global_const(83));
#line 170
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__7));
#line 170
c_rt_lib0clear(&___nl__7);
#line 170
c_rt_lib0move(&___nl__8,___get_global_const(6));
#line 170
c_rt_lib0move(&___nl__7, c_rt_lib0array_get(___nl__2, ___nl__8));
#line 170
c_rt_lib0clear(&___nl__8);
#line 170
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__7));
#line 170
c_rt_lib0clear(&___nl__7);
#line 170
c_rt_lib0move(&___nl__8,___get_global_const(1));
#line 170
c_rt_lib0move(&___nl__7, c_rt_lib0array_get(___nl__2, ___nl__8));
#line 170
c_rt_lib0clear(&___nl__8);
#line 170
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__7));
#line 170
c_rt_lib0clear(&___nl__7);
#line 170
c_rt_lib0move(&___nl__8,___get_global_const(0));
#line 170
c_rt_lib0move(&___nl__7, c_rt_lib0array_get(___nl__2, ___nl__8));
#line 170
c_rt_lib0clear(&___nl__8);
#line 170
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__7));
#line 170
c_rt_lib0clear(&___nl__7);
#line 170
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__5));
#line 170
c_rt_lib0move(&___nl__7,___get_global_const(83));
#line 170
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__7));
#line 170
c_rt_lib0clear(&___nl__7);
#line 170
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__3));
#line 171
c_rt_lib0move(&___nl__7,___get_global_const(84));
#line 171
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__7));
#line 171
c_rt_lib0clear(&___nl__7);
#line 171
c_rt_lib0clear(&___nl__0);
#line 171
c_rt_lib0clear(&___nl__1);
#line 171
c_rt_lib0clear(&___nl__2);
#line 171
c_rt_lib0clear(&___nl__3);
#line 171
c_rt_lib0clear(&___nl__4);
#line 171
c_rt_lib0clear(&___nl__5);
#line 171
return ___nl__6;
#line 171
c_rt_lib0clear(&___nl__6);
#line 171
c_rt_lib0clear(&___nl__1);
#line 171
c_rt_lib0clear(&___nl__2);
#line 171
c_rt_lib0clear(&___nl__3);
#line 171
c_rt_lib0clear(&___nl__4);
#line 171
c_rt_lib0clear(&___nl__5);
#line 171
c_rt_lib0clear(&___nl__0);
#line 171
return NULL;
}

ImmT compiler_priv0get_known_func(){
return compiler_priv0__const__sing(14);}
ImmT compiler_priv0get_known_func0cal() {
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
#line 175
c_rt_lib0move(&___nl__0, c_rt_lib0hash_mk(0));
#line 176
c_rt_lib0move(&___nl__1,___get_global_const(85));
#line 176
c_rt_lib0move(&___nl__3, c_rt_lib0func_new(nl0print0ptr, ___get_global_const(35), ___get_global_const(86)));
#line 176
c_rt_lib0move(&___nl__3, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__3));
#line 176
c_rt_lib0move(&___nl__4, c_rt_lib0ov_mk_none(___get_global_const(87)));
#line 176
c_rt_lib0move(&___nl__6, ptd0sim());
#line 176
c_rt_lib0move(&___nl__5, c_rt_lib0array_mk(1, ___nl__6));
#line 176
c_rt_lib0clear(&___nl__6);
#line 176
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_none(___get_global_const(46)));
#line 176
c_rt_lib0move(&___nl__2, c_rt_lib0hash_mk(4, ___get_global_const(88), ___nl__3, ___get_global_const(63), ___nl__4, ___get_global_const(89), ___nl__5, ___get_global_const(90), ___nl__6));
#line 176
c_rt_lib0clear(&___nl__3);
#line 176
c_rt_lib0clear(&___nl__4);
#line 176
c_rt_lib0clear(&___nl__5);
#line 176
c_rt_lib0clear(&___nl__6);
#line 176
c_rt_lib0delete(hash0set_value(&___nl__0, ___nl__1, ___nl__2));
#line 176
c_rt_lib0clear(&___nl__2);
#line 176
c_rt_lib0clear(&___nl__1);
#line 177
return ___nl__0;
#line 177
c_rt_lib0clear(&___nl__0);
#line 177
return NULL;
}

ImmT compiler_priv0exec_interpreter(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
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
#line 181
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(0));
#line 183
c_rt_lib0move(&___nl__3, c_rt_lib0hash_mk(0));
#line 184
c_rt_lib0move(&___nl__4, c_rt_lib0hash_mk(0));
#line 185
c_rt_lib0move(&___nl__5, c_rt_lib0hash_mk(0));
#line 186
c_rt_lib0move(&___nl__6, c_rt_lib0hash_mk(0));
#line 187
c_rt_lib0move(&___nl__7, c_rt_lib0ov_mk_none(___get_global_const(48)));
#line 187
c_rt_lib0move(&___nl__2, c_rt_lib0hash_mk(5, ___get_global_const(26), ___nl__3, ___get_global_const(27), ___nl__4, ___get_global_const(28), ___nl__5, ___get_global_const(29), ___nl__6, ___get_global_const(30), ___nl__7));
#line 187
c_rt_lib0clear(&___nl__3);
#line 187
c_rt_lib0clear(&___nl__4);
#line 187
c_rt_lib0clear(&___nl__5);
#line 187
c_rt_lib0clear(&___nl__6);
#line 187
c_rt_lib0clear(&___nl__7);
#line 189
c_rt_lib0move(&___nl__3,___get_global_const(0));
#line 190
c_rt_lib0move(&___nl__4, compiler_priv0get_files_to_parse(___nl__0));
#line 191
c_rt_lib0move(&___nl__7, c_rt_lib0init_iter(___nl__4));
#line 191
label_15:
#line 191
c_rt_lib0move(&___nl__5, c_rt_lib0is_end_hash(___nl__7));
#line 191
if(c_rt_lib0check_true_native(___nl__5)){ goto label_47;}
#line 191
c_rt_lib0move(&___nl__5, c_rt_lib0get_key_iter(___nl__7));
#line 191
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value(___nl__4, ___nl__5));
#line 192
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__6, ___get_global_const(43)));
#line 192
c_rt_lib0move(&___nl__8, compiler_priv0parse_module(___nl__5, ___nl__9, &___nl__2));
#line 192
c_rt_lib0clear(&___nl__9);
#line 192
c_rt_lib0move(&___nl__9, c_rt_lib0priv_is(___nl__8, ___get_global_const(48)));
#line 192
if(c_rt_lib0check_true_native(___nl__9)){ goto label_30;}
#line 194
c_rt_lib0move(&___nl__9, c_rt_lib0priv_is(___nl__8, ___get_global_const(47)));
#line 194
if(c_rt_lib0check_true_native(___nl__9)){ goto label_35;}
#line 194
c_rt_lib0move(&___nl__9,___get_global_const(91));
#line 194
c_rt_lib0move(&___nl__9, c_rt_lib0array_mk(2, ___nl__9, ___nl__8));
#line 194
nl_die_arg(___nl__9);
#line 192
label_30:
#line 192
c_rt_lib0move(&___nl__10, c_rt_lib0priv_as(___nl__8, ___get_global_const(48)));
#line 193
c_rt_lib0delete(hash0set_value(&___nl__1, ___nl__5, ___nl__10));
#line 193
c_rt_lib0clear(&___nl__10);
#line 194
goto label_42;
#line 194
label_35:
#line 194
c_rt_lib0move(&___nl__10, c_rt_lib0priv_as(___nl__8, ___get_global_const(47)));
#line 195
c_rt_lib0move(&___nl__11,___get_global_const(1));
#line 195
c_rt_lib0move(&___nl__3, c_rt_lib0add_mod(___nl__3, ___nl__11));
#line 195
c_rt_lib0clear(&___nl__11);
#line 195
c_rt_lib0clear(&___nl__10);
#line 196
goto label_42;
#line 196
label_42:
#line 196
c_rt_lib0clear(&___nl__8);
#line 196
c_rt_lib0clear(&___nl__9);
#line 197
c_rt_lib0move(&___nl__7, c_rt_lib0next_iter(___nl__7));
#line 197
goto label_15;
#line 197
label_47:
#line 197
c_rt_lib0clear(&___nl__5);
#line 197
c_rt_lib0clear(&___nl__6);
#line 197
c_rt_lib0clear(&___nl__7);
#line 198
c_rt_lib0move(&___nl__5,___get_global_const(0));
#line 198
c_rt_lib0move(&___nl__5, c_rt_lib0num_ne(___nl__3, ___nl__5));
#line 198
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 198
if(c_rt_lib0check_true_native(___nl__5)){ goto label_68;}
#line 199
c_rt_lib0move(&___nl__6, c_rt_lib0hash_mk(0));
#line 199
c_rt_lib0delete(compiler_priv0show_and_count_errors(___nl__2, ___nl__0, ___nl__6));
#line 199
c_rt_lib0clear(&___nl__6);
#line 200
c_rt_lib0move(&___nl__6,___get_global_const(1));
#line 200
c_rt_lib0clear(&___nl__0);
#line 200
c_rt_lib0clear(&___nl__1);
#line 200
c_rt_lib0clear(&___nl__2);
#line 200
c_rt_lib0clear(&___nl__3);
#line 200
c_rt_lib0clear(&___nl__4);
#line 200
c_rt_lib0clear(&___nl__5);
#line 200
return ___nl__6;
#line 200
c_rt_lib0clear(&___nl__6);
#line 201
goto label_68;
#line 201
label_68:
#line 201
c_rt_lib0clear(&___nl__5);
#line 202
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(66)));
#line 202
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(72)));
#line 202
c_rt_lib0delete(compiler_priv0check_modules(___nl__1, &___nl__2, ___nl__5, ___nl__6));
#line 202
c_rt_lib0clear(&___nl__6);
#line 202
c_rt_lib0clear(&___nl__5);
#line 203
c_rt_lib0move(&___nl__6, c_rt_lib0hash_mk(0));
#line 203
c_rt_lib0move(&___nl__5, compiler_priv0show_and_count_errors(___nl__2, ___nl__0, ___nl__6));
#line 203
c_rt_lib0clear(&___nl__6);
#line 203
c_rt_lib0move(&___nl__6,___get_global_const(0));
#line 203
c_rt_lib0move(&___nl__5, c_rt_lib0gt(___nl__5, ___nl__6));
#line 203
c_rt_lib0clear(&___nl__6);
#line 203
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 203
if(c_rt_lib0check_true_native(___nl__5)){ goto label_93;}
#line 204
c_rt_lib0move(&___nl__6,___get_global_const(1));
#line 204
c_rt_lib0clear(&___nl__0);
#line 204
c_rt_lib0clear(&___nl__1);
#line 204
c_rt_lib0clear(&___nl__2);
#line 204
c_rt_lib0clear(&___nl__3);
#line 204
c_rt_lib0clear(&___nl__4);
#line 204
c_rt_lib0clear(&___nl__5);
#line 204
return ___nl__6;
#line 204
c_rt_lib0clear(&___nl__6);
#line 205
goto label_93;
#line 205
label_93:
#line 205
c_rt_lib0clear(&___nl__5);
#line 206
c_rt_lib0move(&___nl__6, c_rt_lib0hash_mk(0));
#line 206
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(67)));
#line 206
c_rt_lib0move(&___nl__5, post_processing0init(___nl__6, ___nl__7));
#line 206
c_rt_lib0clear(&___nl__7);
#line 206
c_rt_lib0clear(&___nl__6);
#line 207
c_rt_lib0move(&___nl__6, compiler_priv0translate(___nl__1, &___nl__5));
#line 208
c_rt_lib0move(&___nl__7, c_rt_lib0array_mk(0));
#line 209
c_rt_lib0move(&___nl__8,___get_global_const(2));
#line 210
c_rt_lib0move(&___nl__11, c_rt_lib0init_iter(___nl__6));
#line 210
label_104:
#line 210
c_rt_lib0move(&___nl__9, c_rt_lib0is_end_hash(___nl__11));
#line 210
if(c_rt_lib0check_true_native(___nl__9)){ goto label_139;}
#line 210
c_rt_lib0move(&___nl__9, c_rt_lib0get_key_iter(___nl__11));
#line 210
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value(___nl__6, ___nl__9));
#line 211
c_rt_lib0move(&___nl__12, c_rt_lib0hash_get_value_dec(___nl__10, ___get_global_const(92)));
#line 211
c_rt_lib0move(&___nl__14,___get_global_const(0));
#line 211
c_rt_lib0move(&___nl__15,___get_global_const(1));
#line 211
c_rt_lib0move(&___nl__16, c_rt_lib0array_len(___nl__12));
#line 211
label_113:
#line 211
c_rt_lib0move(&___nl__17, c_rt_lib0ge(___nl__14, ___nl__16));
#line 211
if(c_rt_lib0check_true_native(___nl__17)){ goto label_129;}
#line 211
c_rt_lib0move(&___nl__13, c_rt_lib0array_get(___nl__12, ___nl__14));
#line 212
c_rt_lib0move(&___nl__18, c_rt_lib0hash_get_value_dec(___nl__13, ___get_global_const(93)));
#line 212
c_rt_lib0move(&___nl__19,___get_global_const(94));
#line 212
c_rt_lib0move(&___nl__18, c_rt_lib0eq(___nl__18, ___nl__19));
#line 212
c_rt_lib0clear(&___nl__19);
#line 212
c_rt_lib0move(&___nl__18, c_rt_lib0not(___nl__18));
#line 212
if(c_rt_lib0check_true_native(___nl__18)){ goto label_125;}
#line 213
c_rt_lib0copy(&___nl__8, ___nl__9);
#line 214
goto label_125;
#line 214
label_125:
#line 214
c_rt_lib0clear(&___nl__18);
#line 215
c_rt_lib0move(&___nl__14, c_rt_lib0add_mod(___nl__14, ___nl__15));
#line 215
goto label_113;
#line 215
label_129:
#line 215
c_rt_lib0clear(&___nl__12);
#line 215
c_rt_lib0clear(&___nl__13);
#line 215
c_rt_lib0clear(&___nl__14);
#line 215
c_rt_lib0clear(&___nl__15);
#line 215
c_rt_lib0clear(&___nl__16);
#line 215
c_rt_lib0clear(&___nl__17);
#line 216
c_rt_lib0delete(array0push(&___nl__7, ___nl__10));
#line 217
c_rt_lib0move(&___nl__11, c_rt_lib0next_iter(___nl__11));
#line 217
goto label_104;
#line 217
label_139:
#line 217
c_rt_lib0clear(&___nl__9);
#line 217
c_rt_lib0clear(&___nl__10);
#line 217
c_rt_lib0clear(&___nl__11);
#line 218
c_rt_lib0move(&___nl__10, compiler_priv0get_known_func());
#line 218
c_rt_lib0move(&___nl__9, interpreter0init(___nl__7, ___nl__10));
#line 218
c_rt_lib0clear(&___nl__10);
#line 219
c_rt_lib0move(&___nl__12,___get_global_const(94));
#line 219
c_rt_lib0move(&___nl__11, interpreter0start(&___nl__9, ___nl__12, ___nl__8));
#line 219
c_rt_lib0clear(&___nl__12);
#line 219
c_rt_lib0move(&___nl__10, c_rt_lib0priv_is(___nl__11, ___get_global_const(48)));
#line 219
if(c_rt_lib0check_true_native(___nl__10)){ goto label_153;}
#line 219
c_rt_lib0move(&___nl__11, c_rt_lib0ov_mk_arg(___get_global_const(95), ___nl__11));
#line 219
nl_die_arg(___nl__11);
#line 219
label_153:
#line 219
c_rt_lib0clear(&___nl__10);
#line 219
c_rt_lib0clear(&___nl__11);
#line 220
c_rt_lib0move(&___nl__11, interpreter0exec_all_code(___nl__9));
#line 220
c_rt_lib0move(&___nl__10, c_rt_lib0priv_is(___nl__11, ___get_global_const(48)));
#line 220
if(c_rt_lib0check_true_native(___nl__10)){ goto label_161;}
#line 220
c_rt_lib0move(&___nl__11, c_rt_lib0ov_mk_arg(___get_global_const(95), ___nl__11));
#line 220
nl_die_arg(___nl__11);
#line 220
label_161:
#line 220
c_rt_lib0clear(&___nl__10);
#line 220
c_rt_lib0clear(&___nl__11);
#line 221
c_rt_lib0move(&___nl__10,___get_global_const(0));
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
c_rt_lib0clear(&___nl__9);
#line 221
return ___nl__10;
#line 221
c_rt_lib0clear(&___nl__10);
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
c_rt_lib0clear(&___nl__9);
#line 221
c_rt_lib0clear(&___nl__0);
#line 221
return NULL;
}

ImmT compiler_priv0get_module_name(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
#line 225
c_rt_lib0move(&___nl__1, string0length(___nl__0));
#line 225
c_rt_lib0move(&___nl__2,___get_global_const(1));
#line 225
c_rt_lib0move(&___nl__1, c_rt_lib0sub_mod(___nl__1, ___nl__2));
#line 225
c_rt_lib0clear(&___nl__2);
#line 226
label_4:
#line 226
c_rt_lib0move(&___nl__2,___get_global_const(0));
#line 226
c_rt_lib0move(&___nl__2, c_rt_lib0ge(___nl__1, ___nl__2));
#line 226
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__2));
#line 226
if(c_rt_lib0check_true_native(___nl__4)){ goto label_15;}
#line 226
c_rt_lib0move(&___nl__5,___get_global_const(1));
#line 226
c_rt_lib0move(&___nl__2, string0substr(___nl__0, ___nl__1, ___nl__5));
#line 226
c_rt_lib0clear(&___nl__5);
#line 226
c_rt_lib0move(&___nl__5,___get_global_const(77));
#line 226
c_rt_lib0move(&___nl__2, c_rt_lib0ne(___nl__2, ___nl__5));
#line 226
c_rt_lib0clear(&___nl__5);
#line 226
label_15:
#line 226
c_rt_lib0clear(&___nl__4);
#line 226
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__2));
#line 226
if(c_rt_lib0check_true_native(___nl__3)){ goto label_25;}
#line 226
c_rt_lib0move(&___nl__4,___get_global_const(1));
#line 226
c_rt_lib0move(&___nl__2, string0substr(___nl__0, ___nl__1, ___nl__4));
#line 226
c_rt_lib0clear(&___nl__4);
#line 226
c_rt_lib0move(&___nl__4,___get_global_const(96));
#line 226
c_rt_lib0move(&___nl__2, c_rt_lib0ne(___nl__2, ___nl__4));
#line 226
c_rt_lib0clear(&___nl__4);
#line 226
label_25:
#line 226
c_rt_lib0clear(&___nl__3);
#line 226
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 226
if(c_rt_lib0check_true_native(___nl__2)){ goto label_49;}
#line 227
c_rt_lib0move(&___nl__4,___get_global_const(1));
#line 227
c_rt_lib0move(&___nl__3, string0substr(___nl__0, ___nl__1, ___nl__4));
#line 227
c_rt_lib0clear(&___nl__4);
#line 227
c_rt_lib0move(&___nl__4,___get_global_const(97));
#line 227
c_rt_lib0move(&___nl__3, c_rt_lib0eq(___nl__3, ___nl__4));
#line 227
c_rt_lib0clear(&___nl__4);
#line 227
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 227
if(c_rt_lib0check_true_native(___nl__3)){ goto label_43;}
#line 228
c_rt_lib0move(&___nl__4,___get_global_const(1));
#line 228
c_rt_lib0move(&___nl__1, c_rt_lib0sub_mod(___nl__1, ___nl__4));
#line 228
c_rt_lib0clear(&___nl__4);
#line 229
c_rt_lib0clear(&___nl__3);
#line 229
goto label_49;
#line 230
goto label_43;
#line 230
label_43:
#line 230
c_rt_lib0clear(&___nl__3);
#line 231
c_rt_lib0move(&___nl__3,___get_global_const(1));
#line 231
c_rt_lib0move(&___nl__1, c_rt_lib0sub_mod(___nl__1, ___nl__3));
#line 231
c_rt_lib0clear(&___nl__3);
#line 232
goto label_4;
#line 232
label_49:
#line 232
c_rt_lib0clear(&___nl__2);
#line 233
c_rt_lib0move(&___nl__2,___get_global_const(2));
#line 234
label_52:
#line 234
c_rt_lib0move(&___nl__3,___get_global_const(0));
#line 234
c_rt_lib0move(&___nl__3, c_rt_lib0ge(___nl__1, ___nl__3));
#line 234
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__3));
#line 234
if(c_rt_lib0check_true_native(___nl__5)){ goto label_63;}
#line 234
c_rt_lib0move(&___nl__6,___get_global_const(1));
#line 234
c_rt_lib0move(&___nl__3, string0substr(___nl__0, ___nl__1, ___nl__6));
#line 234
c_rt_lib0clear(&___nl__6);
#line 234
c_rt_lib0move(&___nl__6,___get_global_const(77));
#line 234
c_rt_lib0move(&___nl__3, c_rt_lib0ne(___nl__3, ___nl__6));
#line 234
c_rt_lib0clear(&___nl__6);
#line 234
label_63:
#line 234
c_rt_lib0clear(&___nl__5);
#line 234
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__3));
#line 234
if(c_rt_lib0check_true_native(___nl__4)){ goto label_73;}
#line 234
c_rt_lib0move(&___nl__5,___get_global_const(1));
#line 234
c_rt_lib0move(&___nl__3, string0substr(___nl__0, ___nl__1, ___nl__5));
#line 234
c_rt_lib0clear(&___nl__5);
#line 234
c_rt_lib0move(&___nl__5,___get_global_const(96));
#line 234
c_rt_lib0move(&___nl__3, c_rt_lib0ne(___nl__3, ___nl__5));
#line 234
c_rt_lib0clear(&___nl__5);
#line 234
label_73:
#line 234
c_rt_lib0clear(&___nl__4);
#line 234
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 234
if(c_rt_lib0check_true_native(___nl__3)){ goto label_87;}
#line 235
c_rt_lib0move(&___nl__5,___get_global_const(1));
#line 235
c_rt_lib0move(&___nl__4, string0substr(___nl__0, ___nl__1, ___nl__5));
#line 235
c_rt_lib0clear(&___nl__5);
#line 235
c_rt_lib0move(&___nl__4, c_rt_lib0concat_add(___nl__4, ___nl__2));
#line 235
c_rt_lib0copy(&___nl__2, ___nl__4);
#line 235
c_rt_lib0clear(&___nl__4);
#line 236
c_rt_lib0move(&___nl__4,___get_global_const(1));
#line 236
c_rt_lib0move(&___nl__1, c_rt_lib0sub_mod(___nl__1, ___nl__4));
#line 236
c_rt_lib0clear(&___nl__4);
#line 237
goto label_52;
#line 237
label_87:
#line 237
c_rt_lib0clear(&___nl__3);
#line 238
c_rt_lib0clear(&___nl__0);
#line 238
c_rt_lib0clear(&___nl__1);
#line 238
return ___nl__2;
#line 238
c_rt_lib0clear(&___nl__1);
#line 238
c_rt_lib0clear(&___nl__2);
#line 238
c_rt_lib0clear(&___nl__0);
#line 238
return NULL;
}

ImmT compiler_priv0has_extension(ImmT ___nl__0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
#line 242
c_rt_lib0move(&___nl__2, string0length(___nl__1));
#line 243
c_rt_lib0move(&___nl__3, string0length(___nl__0));
#line 243
c_rt_lib0move(&___nl__3, c_rt_lib0le(___nl__3, ___nl__2));
#line 243
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 243
if(c_rt_lib0check_true_native(___nl__3)){ goto label_13;}
#line 243
c_rt_lib0move(&___nl__4, c_rt_lib0get_false());
#line 243
c_rt_lib0clear(&___nl__0);
#line 243
c_rt_lib0clear(&___nl__1);
#line 243
c_rt_lib0clear(&___nl__2);
#line 243
c_rt_lib0clear(&___nl__3);
#line 243
return ___nl__4;
#line 243
c_rt_lib0clear(&___nl__4);
#line 243
goto label_13;
#line 243
label_13:
#line 243
c_rt_lib0clear(&___nl__3);
#line 244
c_rt_lib0move(&___nl__4, string0length(___nl__0));
#line 244
c_rt_lib0move(&___nl__4, c_rt_lib0sub_mod(___nl__4, ___nl__2));
#line 244
c_rt_lib0move(&___nl__3, string0substr(___nl__0, ___nl__4, ___nl__2));
#line 244
c_rt_lib0clear(&___nl__4);
#line 244
c_rt_lib0copy(&___nl__2, ___nl__3);
#line 244
c_rt_lib0clear(&___nl__3);
#line 245
c_rt_lib0move(&___nl__3, c_rt_lib0eq(___nl__2, ___nl__1));
#line 245
c_rt_lib0clear(&___nl__0);
#line 245
c_rt_lib0clear(&___nl__1);
#line 245
c_rt_lib0clear(&___nl__2);
#line 245
return ___nl__3;
#line 245
c_rt_lib0clear(&___nl__3);
#line 245
c_rt_lib0clear(&___nl__2);
#line 245
c_rt_lib0clear(&___nl__0);
#line 245
c_rt_lib0clear(&___nl__1);
#line 245
return NULL;
}

ImmT compiler_priv0get_generator_state(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
ImmT ___nl__1 = NULL;
#line 250
c_rt_lib0move(&___nl__1, generator_c0get_empty_state());
#line 250
c_rt_lib0clear(&___nl__0);
#line 250
return ___nl__1;
#line 250
c_rt_lib0clear(&___nl__1);
#line 250
c_rt_lib0clear(&___nl__0);
#line 250
return NULL;
}

ImmT compiler_priv0get_out_ext(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
#line 254
c_rt_lib0move(&___nl__1, c_rt_lib0priv_is(___nl__0, ___get_global_const(32)));
#line 254
if(c_rt_lib0check_true_native(___nl__1)){ goto label_19;}
#line 256
c_rt_lib0move(&___nl__1, c_rt_lib0priv_is(___nl__0, ___get_global_const(33)));
#line 256
if(c_rt_lib0check_true_native(___nl__1)){ goto label_26;}
#line 258
c_rt_lib0move(&___nl__1, c_rt_lib0priv_is(___nl__0, ___get_global_const(34)));
#line 258
if(c_rt_lib0check_true_native(___nl__1)){ goto label_33;}
#line 260
c_rt_lib0move(&___nl__1, c_rt_lib0priv_is(___nl__0, ___get_global_const(36)));
#line 260
if(c_rt_lib0check_true_native(___nl__1)){ goto label_40;}
#line 262
c_rt_lib0move(&___nl__1, c_rt_lib0priv_is(___nl__0, ___get_global_const(35)));
#line 262
if(c_rt_lib0check_true_native(___nl__1)){ goto label_47;}
#line 264
c_rt_lib0move(&___nl__1, c_rt_lib0priv_is(___nl__0, ___get_global_const(37)));
#line 264
if(c_rt_lib0check_true_native(___nl__1)){ goto label_54;}
#line 266
c_rt_lib0move(&___nl__1, c_rt_lib0priv_is(___nl__0, ___get_global_const(38)));
#line 266
if(c_rt_lib0check_true_native(___nl__1)){ goto label_64;}
#line 268
c_rt_lib0move(&___nl__1, c_rt_lib0priv_is(___nl__0, ___get_global_const(39)));
#line 268
if(c_rt_lib0check_true_native(___nl__1)){ goto label_71;}
#line 268
c_rt_lib0move(&___nl__1,___get_global_const(91));
#line 268
c_rt_lib0move(&___nl__1, c_rt_lib0array_mk(2, ___nl__1, ___nl__0));
#line 268
nl_die_arg(___nl__1);
#line 254
label_19:
#line 255
c_rt_lib0move(&___nl__2,___get_global_const(98));
#line 255
c_rt_lib0clear(&___nl__0);
#line 255
c_rt_lib0clear(&___nl__1);
#line 255
return ___nl__2;
#line 255
c_rt_lib0clear(&___nl__2);
#line 256
goto label_78;
#line 256
label_26:
#line 257
c_rt_lib0move(&___nl__2,___get_global_const(99));
#line 257
c_rt_lib0clear(&___nl__0);
#line 257
c_rt_lib0clear(&___nl__1);
#line 257
return ___nl__2;
#line 257
c_rt_lib0clear(&___nl__2);
#line 258
goto label_78;
#line 258
label_33:
#line 259
c_rt_lib0move(&___nl__2,___get_global_const(100));
#line 259
c_rt_lib0clear(&___nl__0);
#line 259
c_rt_lib0clear(&___nl__1);
#line 259
return ___nl__2;
#line 259
c_rt_lib0clear(&___nl__2);
#line 260
goto label_78;
#line 260
label_40:
#line 261
c_rt_lib0move(&___nl__2,___get_global_const(101));
#line 261
c_rt_lib0clear(&___nl__0);
#line 261
c_rt_lib0clear(&___nl__1);
#line 261
return ___nl__2;
#line 261
c_rt_lib0clear(&___nl__2);
#line 262
goto label_78;
#line 262
label_47:
#line 263
c_rt_lib0move(&___nl__2,___get_global_const(102));
#line 263
c_rt_lib0clear(&___nl__0);
#line 263
c_rt_lib0clear(&___nl__1);
#line 263
return ___nl__2;
#line 263
c_rt_lib0clear(&___nl__2);
#line 264
goto label_78;
#line 264
label_54:
#line 264
c_rt_lib0move(&___nl__2, c_rt_lib0priv_as(___nl__0, ___get_global_const(37)));
#line 265
c_rt_lib0move(&___nl__3,___get_global_const(103));
#line 265
c_rt_lib0clear(&___nl__0);
#line 265
c_rt_lib0clear(&___nl__1);
#line 265
c_rt_lib0clear(&___nl__2);
#line 265
return ___nl__3;
#line 265
c_rt_lib0clear(&___nl__3);
#line 265
c_rt_lib0clear(&___nl__2);
#line 266
goto label_78;
#line 266
label_64:
#line 267
c_rt_lib0move(&___nl__2,___get_global_const(104));
#line 267
c_rt_lib0clear(&___nl__0);
#line 267
c_rt_lib0clear(&___nl__1);
#line 267
return ___nl__2;
#line 267
c_rt_lib0clear(&___nl__2);
#line 268
goto label_78;
#line 268
label_71:
#line 269
c_rt_lib0move(&___nl__2,___get_global_const(105));
#line 269
c_rt_lib0clear(&___nl__0);
#line 269
c_rt_lib0clear(&___nl__1);
#line 269
return ___nl__2;
#line 269
c_rt_lib0clear(&___nl__2);
#line 270
goto label_78;
#line 270
label_78:
#line 270
c_rt_lib0clear(&___nl__1);
#line 270
c_rt_lib0clear(&___nl__0);
#line 270
return NULL;
}

ImmT compiler_priv0mk_path(ImmT ___nl__0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
ImmT ___nl__2 = NULL;
#line 274
c_rt_lib0move(&___nl__2,___get_global_const(97));
#line 274
c_rt_lib0move(&___nl__2, c_rt_lib0eq(___nl__1, ___nl__2));
#line 274
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 274
if(c_rt_lib0check_true_native(___nl__2)){ goto label_9;}
#line 274
c_rt_lib0clear(&___nl__0);
#line 274
c_rt_lib0clear(&___nl__1);
#line 274
c_rt_lib0clear(&___nl__2);
#line 274
return NULL;
#line 274
goto label_9;
#line 274
label_9:
#line 274
c_rt_lib0clear(&___nl__2);
#line 275
c_rt_lib0move(&___nl__2, compiler_priv0get_dir(___nl__1));
#line 275
c_rt_lib0delete(compiler_priv0mk_path(___nl__0, ___nl__2));
#line 275
c_rt_lib0clear(&___nl__2);
#line 276
c_rt_lib0move(&___nl__2, c_rt_lib0concat_new(___nl__0, ___nl__1));
#line 276
c_rt_lib0delete(c_fe_lib0mk_path(___nl__2));
#line 276
c_rt_lib0clear(&___nl__2);
#line 276
c_rt_lib0clear(&___nl__0);
#line 276
c_rt_lib0clear(&___nl__1);
#line 276
return NULL;
}

ImmT compiler_priv0mk_path_module(ImmT ___nl__0,ImmT ___nl__1,ImmT ___nl__2) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
c_rt_lib0arg_val(___nl__2);
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
#line 281
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(65)));
#line 281
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__1));
#line 282
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(106)));
#line 283
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(70)));
#line 283
c_rt_lib0move(&___nl__6, c_rt_lib0priv_is(___nl__5, ___get_global_const(32)));
#line 283
if(c_rt_lib0check_true_native(___nl__6)){ goto label_23;}
#line 285
c_rt_lib0move(&___nl__6, c_rt_lib0priv_is(___nl__5, ___get_global_const(33)));
#line 285
if(c_rt_lib0check_true_native(___nl__6)){ goto label_39;}
#line 287
c_rt_lib0move(&___nl__6, c_rt_lib0priv_is(___nl__5, ___get_global_const(34)));
#line 287
if(c_rt_lib0check_true_native(___nl__6)){ goto label_55;}
#line 289
c_rt_lib0move(&___nl__6, c_rt_lib0priv_is(___nl__5, ___get_global_const(35)));
#line 289
if(c_rt_lib0check_true_native(___nl__6)){ goto label_76;}
#line 297
c_rt_lib0move(&___nl__6, c_rt_lib0priv_is(___nl__5, ___get_global_const(36)));
#line 297
if(c_rt_lib0check_true_native(___nl__6)){ goto label_123;}
#line 299
c_rt_lib0move(&___nl__6, c_rt_lib0priv_is(___nl__5, ___get_global_const(37)));
#line 299
if(c_rt_lib0check_true_native(___nl__6)){ goto label_139;}
#line 301
c_rt_lib0move(&___nl__6, c_rt_lib0priv_is(___nl__5, ___get_global_const(38)));
#line 301
if(c_rt_lib0check_true_native(___nl__6)){ goto label_158;}
#line 303
c_rt_lib0move(&___nl__6, c_rt_lib0priv_is(___nl__5, ___get_global_const(39)));
#line 303
if(c_rt_lib0check_true_native(___nl__6)){ goto label_174;}
#line 303
c_rt_lib0move(&___nl__6,___get_global_const(91));
#line 303
c_rt_lib0move(&___nl__6, c_rt_lib0array_mk(2, ___nl__6, ___nl__5));
#line 303
nl_die_arg(___nl__6);
#line 283
label_23:
#line 284
c_rt_lib0move(&___nl__8,___get_global_const(98));
#line 284
c_rt_lib0move(&___nl__8, c_rt_lib0concat_new(___nl__3, ___nl__8));
#line 284
c_rt_lib0move(&___nl__8, c_rt_lib0ov_mk_arg(___get_global_const(32), ___nl__8));
#line 284
c_rt_lib0move(&___nl__7, c_rt_lib0hash_mk(2, ___get_global_const(43), ___nl__4, ___get_global_const(44), ___nl__8));
#line 284
c_rt_lib0clear(&___nl__8);
#line 284
c_rt_lib0clear(&___nl__0);
#line 284
c_rt_lib0clear(&___nl__1);
#line 284
c_rt_lib0clear(&___nl__2);
#line 284
c_rt_lib0clear(&___nl__3);
#line 284
c_rt_lib0clear(&___nl__4);
#line 284
c_rt_lib0clear(&___nl__5);
#line 284
c_rt_lib0clear(&___nl__6);
#line 284
return ___nl__7;
#line 284
c_rt_lib0clear(&___nl__7);
#line 285
goto label_188;
#line 285
label_39:
#line 286
c_rt_lib0move(&___nl__8,___get_global_const(99));
#line 286
c_rt_lib0move(&___nl__8, c_rt_lib0concat_new(___nl__3, ___nl__8));
#line 286
c_rt_lib0move(&___nl__8, c_rt_lib0ov_mk_arg(___get_global_const(33), ___nl__8));
#line 286
c_rt_lib0move(&___nl__7, c_rt_lib0hash_mk(2, ___get_global_const(43), ___nl__4, ___get_global_const(44), ___nl__8));
#line 286
c_rt_lib0clear(&___nl__8);
#line 286
c_rt_lib0clear(&___nl__0);
#line 286
c_rt_lib0clear(&___nl__1);
#line 286
c_rt_lib0clear(&___nl__2);
#line 286
c_rt_lib0clear(&___nl__3);
#line 286
c_rt_lib0clear(&___nl__4);
#line 286
c_rt_lib0clear(&___nl__5);
#line 286
c_rt_lib0clear(&___nl__6);
#line 286
return ___nl__7;
#line 286
c_rt_lib0clear(&___nl__7);
#line 287
goto label_188;
#line 287
label_55:
#line 288
c_rt_lib0move(&___nl__9,___get_global_const(100));
#line 288
c_rt_lib0move(&___nl__9, c_rt_lib0concat_new(___nl__3, ___nl__9));
#line 288
c_rt_lib0move(&___nl__10,___get_global_const(107));
#line 288
c_rt_lib0move(&___nl__10, c_rt_lib0concat_new(___nl__3, ___nl__10));
#line 288
c_rt_lib0move(&___nl__8, c_rt_lib0hash_mk(2, ___get_global_const(34), ___nl__9, ___get_global_const(40), ___nl__10));
#line 288
c_rt_lib0clear(&___nl__9);
#line 288
c_rt_lib0clear(&___nl__10);
#line 288
c_rt_lib0move(&___nl__8, c_rt_lib0ov_mk_arg(___get_global_const(34), ___nl__8));
#line 288
c_rt_lib0move(&___nl__7, c_rt_lib0hash_mk(2, ___get_global_const(43), ___nl__4, ___get_global_const(44), ___nl__8));
#line 288
c_rt_lib0clear(&___nl__8);
#line 288
c_rt_lib0clear(&___nl__0);
#line 288
c_rt_lib0clear(&___nl__1);
#line 288
c_rt_lib0clear(&___nl__2);
#line 288
c_rt_lib0clear(&___nl__3);
#line 288
c_rt_lib0clear(&___nl__4);
#line 288
c_rt_lib0clear(&___nl__5);
#line 288
c_rt_lib0clear(&___nl__6);
#line 288
return ___nl__7;
#line 288
c_rt_lib0clear(&___nl__7);
#line 289
goto label_188;
#line 289
label_76:
#line 290
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(108)));
#line 290
c_rt_lib0move(&___nl__7, string0length(___nl__8));
#line 290
c_rt_lib0clear(&___nl__8);
#line 291
c_rt_lib0move(&___nl__8, compiler_priv0get_dir(___nl__4));
#line 292
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(65)));
#line 292
c_rt_lib0move(&___nl__9, c_rt_lib0concat_add(___nl__9, ___nl__8));
#line 292
c_rt_lib0move(&___nl__10,___get_global_const(77));
#line 292
c_rt_lib0move(&___nl__9, c_rt_lib0concat_add(___nl__9, ___nl__10));
#line 292
c_rt_lib0clear(&___nl__10);
#line 292
c_rt_lib0move(&___nl__9, c_rt_lib0concat_add(___nl__9, ___nl__1));
#line 292
c_rt_lib0copy(&___nl__3, ___nl__9);
#line 292
c_rt_lib0clear(&___nl__9);
#line 293
c_rt_lib0move(&___nl__9, string0length(___nl__8));
#line 293
c_rt_lib0move(&___nl__9, c_rt_lib0lt(___nl__7, ___nl__9));
#line 293
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__9));
#line 293
if(c_rt_lib0check_true_native(___nl__9)){ goto label_102;}
#line 294
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(65)));
#line 294
c_rt_lib0move(&___nl__12,___get_global_const(1));
#line 294
c_rt_lib0move(&___nl__12, c_rt_lib0add(___nl__7, ___nl__12));
#line 294
c_rt_lib0move(&___nl__11, string0substr2(___nl__8, ___nl__12));
#line 294
c_rt_lib0clear(&___nl__12);
#line 294
c_rt_lib0delete(compiler_priv0mk_path(___nl__10, ___nl__11));
#line 294
c_rt_lib0clear(&___nl__11);
#line 294
c_rt_lib0clear(&___nl__10);
#line 295
goto label_102;
#line 295
label_102:
#line 295
c_rt_lib0clear(&___nl__9);
#line 296
c_rt_lib0move(&___nl__10,___get_global_const(102));
#line 296
c_rt_lib0move(&___nl__10, c_rt_lib0concat_new(___nl__3, ___nl__10));
#line 296
c_rt_lib0move(&___nl__10, c_rt_lib0ov_mk_arg(___get_global_const(35), ___nl__10));
#line 296
c_rt_lib0move(&___nl__9, c_rt_lib0hash_mk(2, ___get_global_const(43), ___nl__4, ___get_global_const(44), ___nl__10));
#line 296
c_rt_lib0clear(&___nl__10);
#line 296
c_rt_lib0clear(&___nl__0);
#line 296
c_rt_lib0clear(&___nl__1);
#line 296
c_rt_lib0clear(&___nl__2);
#line 296
c_rt_lib0clear(&___nl__3);
#line 296
c_rt_lib0clear(&___nl__4);
#line 296
c_rt_lib0clear(&___nl__5);
#line 296
c_rt_lib0clear(&___nl__6);
#line 296
c_rt_lib0clear(&___nl__7);
#line 296
c_rt_lib0clear(&___nl__8);
#line 296
return ___nl__9;
#line 296
c_rt_lib0clear(&___nl__9);
#line 296
c_rt_lib0clear(&___nl__7);
#line 296
c_rt_lib0clear(&___nl__8);
#line 297
goto label_188;
#line 297
label_123:
#line 298
c_rt_lib0move(&___nl__8,___get_global_const(101));
#line 298
c_rt_lib0move(&___nl__8, c_rt_lib0concat_new(___nl__3, ___nl__8));
#line 298
c_rt_lib0move(&___nl__8, c_rt_lib0ov_mk_arg(___get_global_const(36), ___nl__8));
#line 298
c_rt_lib0move(&___nl__7, c_rt_lib0hash_mk(2, ___get_global_const(43), ___nl__4, ___get_global_const(44), ___nl__8));
#line 298
c_rt_lib0clear(&___nl__8);
#line 298
c_rt_lib0clear(&___nl__0);
#line 298
c_rt_lib0clear(&___nl__1);
#line 298
c_rt_lib0clear(&___nl__2);
#line 298
c_rt_lib0clear(&___nl__3);
#line 298
c_rt_lib0clear(&___nl__4);
#line 298
c_rt_lib0clear(&___nl__5);
#line 298
c_rt_lib0clear(&___nl__6);
#line 298
return ___nl__7;
#line 298
c_rt_lib0clear(&___nl__7);
#line 299
goto label_188;
#line 299
label_139:
#line 299
c_rt_lib0move(&___nl__7, c_rt_lib0priv_as(___nl__5, ___get_global_const(37)));
#line 300
c_rt_lib0move(&___nl__9,___get_global_const(103));
#line 300
c_rt_lib0move(&___nl__9, c_rt_lib0concat_new(___nl__3, ___nl__9));
#line 300
c_rt_lib0move(&___nl__9, c_rt_lib0ov_mk_arg(___get_global_const(37), ___nl__9));
#line 300
c_rt_lib0move(&___nl__8, c_rt_lib0hash_mk(2, ___get_global_const(43), ___nl__4, ___get_global_const(44), ___nl__9));
#line 300
c_rt_lib0clear(&___nl__9);
#line 300
c_rt_lib0clear(&___nl__0);
#line 300
c_rt_lib0clear(&___nl__1);
#line 300
c_rt_lib0clear(&___nl__2);
#line 300
c_rt_lib0clear(&___nl__3);
#line 300
c_rt_lib0clear(&___nl__4);
#line 300
c_rt_lib0clear(&___nl__5);
#line 300
c_rt_lib0clear(&___nl__6);
#line 300
c_rt_lib0clear(&___nl__7);
#line 300
return ___nl__8;
#line 300
c_rt_lib0clear(&___nl__8);
#line 300
c_rt_lib0clear(&___nl__7);
#line 301
goto label_188;
#line 301
label_158:
#line 302
c_rt_lib0move(&___nl__8,___get_global_const(109));
#line 302
c_rt_lib0move(&___nl__8, c_rt_lib0concat_new(___nl__3, ___nl__8));
#line 302
c_rt_lib0move(&___nl__8, c_rt_lib0ov_mk_arg(___get_global_const(38), ___nl__8));
#line 302
c_rt_lib0move(&___nl__7, c_rt_lib0hash_mk(2, ___get_global_const(43), ___nl__4, ___get_global_const(44), ___nl__8));
#line 302
c_rt_lib0clear(&___nl__8);
#line 302
c_rt_lib0clear(&___nl__0);
#line 302
c_rt_lib0clear(&___nl__1);
#line 302
c_rt_lib0clear(&___nl__2);
#line 302
c_rt_lib0clear(&___nl__3);
#line 302
c_rt_lib0clear(&___nl__4);
#line 302
c_rt_lib0clear(&___nl__5);
#line 302
c_rt_lib0clear(&___nl__6);
#line 302
return ___nl__7;
#line 302
c_rt_lib0clear(&___nl__7);
#line 303
goto label_188;
#line 303
label_174:
#line 304
c_rt_lib0move(&___nl__8, c_rt_lib0ov_mk_none(___get_global_const(39)));
#line 304
c_rt_lib0move(&___nl__7, c_rt_lib0hash_mk(2, ___get_global_const(43), ___nl__4, ___get_global_const(44), ___nl__8));
#line 304
c_rt_lib0clear(&___nl__8);
#line 304
c_rt_lib0clear(&___nl__0);
#line 304
c_rt_lib0clear(&___nl__1);
#line 304
c_rt_lib0clear(&___nl__2);
#line 304
c_rt_lib0clear(&___nl__3);
#line 304
c_rt_lib0clear(&___nl__4);
#line 304
c_rt_lib0clear(&___nl__5);
#line 304
c_rt_lib0clear(&___nl__6);
#line 304
return ___nl__7;
#line 304
c_rt_lib0clear(&___nl__7);
#line 305
goto label_188;
#line 305
label_188:
#line 305
c_rt_lib0clear(&___nl__5);
#line 305
c_rt_lib0clear(&___nl__6);
#line 305
c_rt_lib0clear(&___nl__3);
#line 305
c_rt_lib0clear(&___nl__4);
#line 305
c_rt_lib0clear(&___nl__0);
#line 305
c_rt_lib0clear(&___nl__1);
#line 305
c_rt_lib0clear(&___nl__2);
#line 305
return NULL;
}

ImmT compiler_priv0get_all_nianio_file(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
ImmT ___nl__9 = NULL;
#line 309
c_rt_lib0move(&___nl__1, c_rt_lib0array_mk(0));
#line 310
c_rt_lib0move(&___nl__4, ptd0sim());
#line 310
c_rt_lib0move(&___nl__3, ptd0arr(___nl__4));
#line 310
c_rt_lib0clear(&___nl__4);
#line 310
c_rt_lib0move(&___nl__4, c_fe_lib0get_module_files_rec(___nl__0));
#line 310
c_rt_lib0move(&___nl__2, ptd0ensure(___nl__3, ___nl__4));
#line 310
c_rt_lib0clear(&___nl__4);
#line 310
c_rt_lib0clear(&___nl__3);
#line 311
c_rt_lib0move(&___nl__4,___get_global_const(0));
#line 311
c_rt_lib0move(&___nl__5,___get_global_const(1));
#line 311
c_rt_lib0move(&___nl__6, c_rt_lib0array_len(___nl__2));
#line 311
label_11:
#line 311
c_rt_lib0move(&___nl__7, c_rt_lib0ge(___nl__4, ___nl__6));
#line 311
if(c_rt_lib0check_true_native(___nl__7)){ goto label_26;}
#line 311
c_rt_lib0move(&___nl__3, c_rt_lib0array_get(___nl__2, ___nl__4));
#line 312
c_rt_lib0move(&___nl__9,___get_global_const(102));
#line 312
c_rt_lib0move(&___nl__8, compiler_priv0has_extension(___nl__3, ___nl__9));
#line 312
c_rt_lib0clear(&___nl__9);
#line 312
c_rt_lib0move(&___nl__8, c_rt_lib0not(___nl__8));
#line 312
if(c_rt_lib0check_true_native(___nl__8)){ goto label_22;}
#line 312
c_rt_lib0delete(array0push(&___nl__1, ___nl__3));
#line 312
goto label_22;
#line 312
label_22:
#line 312
c_rt_lib0clear(&___nl__8);
#line 313
c_rt_lib0move(&___nl__4, c_rt_lib0add_mod(___nl__4, ___nl__5));
#line 313
goto label_11;
#line 313
label_26:
#line 313
c_rt_lib0clear(&___nl__3);
#line 313
c_rt_lib0clear(&___nl__4);
#line 313
c_rt_lib0clear(&___nl__5);
#line 313
c_rt_lib0clear(&___nl__6);
#line 313
c_rt_lib0clear(&___nl__7);
#line 314
c_rt_lib0clear(&___nl__0);
#line 314
c_rt_lib0clear(&___nl__2);
#line 314
return ___nl__1;
#line 314
c_rt_lib0clear(&___nl__1);
#line 314
c_rt_lib0clear(&___nl__2);
#line 314
c_rt_lib0clear(&___nl__0);
#line 314
return NULL;
}

ImmT compiler_priv0get_files_to_parse(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
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
#line 318
c_rt_lib0move(&___nl__1, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(65)));
#line 319
c_rt_lib0move(&___nl__2, c_rt_lib0array_mk(0));
#line 320
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(64)));
#line 320
c_rt_lib0move(&___nl__5,___get_global_const(0));
#line 320
c_rt_lib0move(&___nl__6,___get_global_const(1));
#line 320
c_rt_lib0move(&___nl__7, c_rt_lib0array_len(___nl__3));
#line 320
label_6:
#line 320
c_rt_lib0move(&___nl__8, c_rt_lib0ge(___nl__5, ___nl__7));
#line 320
if(c_rt_lib0check_true_native(___nl__8)){ goto label_47;}
#line 320
c_rt_lib0move(&___nl__4, c_rt_lib0array_get(___nl__3, ___nl__5));
#line 321
c_rt_lib0move(&___nl__10,___get_global_const(102));
#line 321
c_rt_lib0move(&___nl__9, compiler_priv0has_extension(___nl__4, ___nl__10));
#line 321
c_rt_lib0clear(&___nl__10);
#line 321
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__9));
#line 321
if(c_rt_lib0check_true_native(___nl__9)){ goto label_21;}
#line 322
c_rt_lib0move(&___nl__11, compiler_priv0get_dir(___nl__4));
#line 322
c_rt_lib0move(&___nl__10, c_rt_lib0hash_mk(2, ___get_global_const(108), ___nl__11, ___get_global_const(106), ___nl__4));
#line 322
c_rt_lib0clear(&___nl__11);
#line 322
c_rt_lib0delete(array0push(&___nl__2, ___nl__10));
#line 322
c_rt_lib0clear(&___nl__10);
#line 323
goto label_43;
#line 323
label_21:
#line 324
c_rt_lib0move(&___nl__10, compiler_priv0get_all_nianio_file(___nl__4));
#line 324
c_rt_lib0move(&___nl__12,___get_global_const(0));
#line 324
c_rt_lib0move(&___nl__13,___get_global_const(1));
#line 324
c_rt_lib0move(&___nl__14, c_rt_lib0array_len(___nl__10));
#line 324
label_26:
#line 324
c_rt_lib0move(&___nl__15, c_rt_lib0ge(___nl__12, ___nl__14));
#line 324
if(c_rt_lib0check_true_native(___nl__15)){ goto label_35;}
#line 324
c_rt_lib0move(&___nl__11, c_rt_lib0array_get(___nl__10, ___nl__12));
#line 325
c_rt_lib0move(&___nl__16, c_rt_lib0hash_mk(2, ___get_global_const(108), ___nl__4, ___get_global_const(106), ___nl__11));
#line 325
c_rt_lib0delete(array0push(&___nl__2, ___nl__16));
#line 325
c_rt_lib0clear(&___nl__16);
#line 326
c_rt_lib0move(&___nl__12, c_rt_lib0add_mod(___nl__12, ___nl__13));
#line 326
goto label_26;
#line 326
label_35:
#line 326
c_rt_lib0clear(&___nl__10);
#line 326
c_rt_lib0clear(&___nl__11);
#line 326
c_rt_lib0clear(&___nl__12);
#line 326
c_rt_lib0clear(&___nl__13);
#line 326
c_rt_lib0clear(&___nl__14);
#line 326
c_rt_lib0clear(&___nl__15);
#line 327
goto label_43;
#line 327
label_43:
#line 327
c_rt_lib0clear(&___nl__9);
#line 328
c_rt_lib0move(&___nl__5, c_rt_lib0add_mod(___nl__5, ___nl__6));
#line 328
goto label_6;
#line 328
label_47:
#line 328
c_rt_lib0clear(&___nl__3);
#line 328
c_rt_lib0clear(&___nl__4);
#line 328
c_rt_lib0clear(&___nl__5);
#line 328
c_rt_lib0clear(&___nl__6);
#line 328
c_rt_lib0clear(&___nl__7);
#line 328
c_rt_lib0clear(&___nl__8);
#line 329
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(70)));
#line 329
c_rt_lib0move(&___nl__3, compiler_priv0get_out_ext(___nl__4));
#line 329
c_rt_lib0clear(&___nl__4);
#line 330
c_rt_lib0move(&___nl__4, c_rt_lib0hash_mk(0));
#line 331
c_rt_lib0move(&___nl__5, c_fe_lib0get_module_files(___nl__1));
#line 331
c_rt_lib0move(&___nl__6, c_rt_lib0priv_is(___nl__5, ___get_global_const(48)));
#line 331
if(c_rt_lib0check_true_native(___nl__6)){ goto label_66;}
#line 336
c_rt_lib0move(&___nl__6, c_rt_lib0priv_is(___nl__5, ___get_global_const(47)));
#line 336
if(c_rt_lib0check_true_native(___nl__6)){ goto label_104;}
#line 336
c_rt_lib0move(&___nl__6,___get_global_const(91));
#line 336
c_rt_lib0move(&___nl__6, c_rt_lib0array_mk(2, ___nl__6, ___nl__5));
#line 336
nl_die_arg(___nl__6);
#line 331
label_66:
#line 331
c_rt_lib0move(&___nl__7, c_rt_lib0priv_as(___nl__5, ___get_global_const(48)));
#line 332
c_rt_lib0move(&___nl__10, ptd0sim());
#line 332
c_rt_lib0move(&___nl__9, ptd0arr(___nl__10));
#line 332
c_rt_lib0clear(&___nl__10);
#line 332
c_rt_lib0move(&___nl__8, ptd0ensure(___nl__9, ___nl__7));
#line 332
c_rt_lib0clear(&___nl__9);
#line 332
c_rt_lib0move(&___nl__10,___get_global_const(0));
#line 332
c_rt_lib0move(&___nl__11,___get_global_const(1));
#line 332
c_rt_lib0move(&___nl__12, c_rt_lib0array_len(___nl__8));
#line 332
label_76:
#line 332
c_rt_lib0move(&___nl__13, c_rt_lib0ge(___nl__10, ___nl__12));
#line 332
if(c_rt_lib0check_true_native(___nl__13)){ goto label_95;}
#line 332
c_rt_lib0move(&___nl__9, c_rt_lib0array_get(___nl__8, ___nl__10));
#line 333
c_rt_lib0move(&___nl__14, compiler_priv0has_extension(___nl__9, ___nl__3));
#line 333
c_rt_lib0move(&___nl__14, c_rt_lib0not(___nl__14));
#line 333
c_rt_lib0move(&___nl__14, c_rt_lib0not(___nl__14));
#line 333
if(c_rt_lib0check_true_native(___nl__14)){ goto label_87;}
#line 333
c_rt_lib0clear(&___nl__14);
#line 333
goto label_92;
#line 333
goto label_87;
#line 333
label_87:
#line 333
c_rt_lib0clear(&___nl__14);
#line 334
c_rt_lib0move(&___nl__14, compiler_priv0get_module_name(___nl__9));
#line 334
c_rt_lib0delete(hash0set_value(&___nl__4, ___nl__14, ___nl__9));
#line 334
c_rt_lib0clear(&___nl__14);
#line 334
label_92:
#line 335
c_rt_lib0move(&___nl__10, c_rt_lib0add_mod(___nl__10, ___nl__11));
#line 335
goto label_76;
#line 335
label_95:
#line 335
c_rt_lib0clear(&___nl__8);
#line 335
c_rt_lib0clear(&___nl__9);
#line 335
c_rt_lib0clear(&___nl__10);
#line 335
c_rt_lib0clear(&___nl__11);
#line 335
c_rt_lib0clear(&___nl__12);
#line 335
c_rt_lib0clear(&___nl__13);
#line 335
c_rt_lib0clear(&___nl__7);
#line 336
goto label_119;
#line 336
label_104:
#line 336
c_rt_lib0move(&___nl__7, c_rt_lib0priv_as(___nl__5, ___get_global_const(47)));
#line 337
c_rt_lib0move(&___nl__8, c_rt_lib0hash_mk(0));
#line 337
c_rt_lib0clear(&___nl__0);
#line 337
c_rt_lib0clear(&___nl__1);
#line 337
c_rt_lib0clear(&___nl__2);
#line 337
c_rt_lib0clear(&___nl__3);
#line 337
c_rt_lib0clear(&___nl__4);
#line 337
c_rt_lib0clear(&___nl__5);
#line 337
c_rt_lib0clear(&___nl__6);
#line 337
c_rt_lib0clear(&___nl__7);
#line 337
return ___nl__8;
#line 337
c_rt_lib0clear(&___nl__8);
#line 337
c_rt_lib0clear(&___nl__7);
#line 338
goto label_119;
#line 338
label_119:
#line 338
c_rt_lib0clear(&___nl__5);
#line 338
c_rt_lib0clear(&___nl__6);
#line 339
c_rt_lib0move(&___nl__5, c_rt_lib0hash_mk(0));
#line 340
c_rt_lib0move(&___nl__7,___get_global_const(0));
#line 340
c_rt_lib0move(&___nl__8,___get_global_const(1));
#line 340
c_rt_lib0move(&___nl__9, c_rt_lib0array_len(___nl__2));
#line 340
label_126:
#line 340
c_rt_lib0move(&___nl__10, c_rt_lib0ge(___nl__7, ___nl__9));
#line 340
if(c_rt_lib0check_true_native(___nl__10)){ goto label_139;}
#line 340
c_rt_lib0move(&___nl__6, c_rt_lib0array_get(___nl__2, ___nl__7));
#line 341
c_rt_lib0move(&___nl__12, c_rt_lib0hash_get_value_dec(___nl__6, ___get_global_const(106)));
#line 341
c_rt_lib0move(&___nl__11, compiler_priv0get_module_name(___nl__12));
#line 341
c_rt_lib0clear(&___nl__12);
#line 342
c_rt_lib0move(&___nl__12, compiler_priv0mk_path_module(___nl__6, ___nl__11, ___nl__0));
#line 343
c_rt_lib0delete(hash0set_value(&___nl__5, ___nl__11, ___nl__12));
#line 343
c_rt_lib0clear(&___nl__11);
#line 343
c_rt_lib0clear(&___nl__12);
#line 344
c_rt_lib0move(&___nl__7, c_rt_lib0add_mod(___nl__7, ___nl__8));
#line 344
goto label_126;
#line 344
label_139:
#line 344
c_rt_lib0clear(&___nl__6);
#line 344
c_rt_lib0clear(&___nl__7);
#line 344
c_rt_lib0clear(&___nl__8);
#line 344
c_rt_lib0clear(&___nl__9);
#line 344
c_rt_lib0clear(&___nl__10);
#line 345
c_rt_lib0clear(&___nl__0);
#line 345
c_rt_lib0clear(&___nl__1);
#line 345
c_rt_lib0clear(&___nl__2);
#line 345
c_rt_lib0clear(&___nl__3);
#line 345
c_rt_lib0clear(&___nl__4);
#line 345
return ___nl__5;
#line 345
c_rt_lib0clear(&___nl__1);
#line 345
c_rt_lib0clear(&___nl__2);
#line 345
c_rt_lib0clear(&___nl__3);
#line 345
c_rt_lib0clear(&___nl__4);
#line 345
c_rt_lib0clear(&___nl__5);
#line 345
c_rt_lib0clear(&___nl__0);
#line 345
return NULL;
}

ImmT compiler_priv0parse_module(ImmT ___nl__0,ImmT ___nl__1,ImmT * ___ref___2) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
ImmT ___nl__9 = NULL;
ImmT ___nl__10 = NULL;
#line 352
c_rt_lib0move(&___nl__3,___get_global_const(110));
#line 352
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__0));
#line 352
c_rt_lib0move(&___nl__4,___get_global_const(111));
#line 352
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 352
c_rt_lib0clear(&___nl__4);
#line 352
c_rt_lib0delete(c_fe_lib0print(___nl__3));
#line 352
c_rt_lib0clear(&___nl__3);
#line 353
c_rt_lib0move(&___nl__8, ptd0sim());
#line 353
c_rt_lib0move(&___nl__9, ptd0sim());
#line 353
c_rt_lib0move(&___nl__7, c_rt_lib0hash_mk(2, ___get_global_const(48), ___nl__8, ___get_global_const(47), ___nl__9));
#line 353
c_rt_lib0clear(&___nl__8);
#line 353
c_rt_lib0clear(&___nl__9);
#line 353
c_rt_lib0move(&___nl__6, ptd0var(___nl__7));
#line 353
c_rt_lib0clear(&___nl__7);
#line 353
c_rt_lib0move(&___nl__7, c_fe_lib0file_to_string(___nl__1));
#line 353
c_rt_lib0move(&___nl__5, ptd0ensure(___nl__6, ___nl__7));
#line 353
c_rt_lib0clear(&___nl__7);
#line 353
c_rt_lib0clear(&___nl__6);
#line 353
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__5, ___get_global_const(48)));
#line 353
if(c_rt_lib0check_true_native(___nl__4)){ goto label_25;}
#line 353
c_rt_lib0clear(&___nl__0);
#line 353
c_rt_lib0clear(&___nl__1);
#line 353
c_rt_lib0clear(&___nl__3);
#line 353
c_rt_lib0clear(&___nl__4);
#line 353
return ___nl__5;
#line 353
label_25:
#line 353
c_rt_lib0move(&___nl__3, c_rt_lib0priv_as(___nl__5, ___get_global_const(48)));
#line 353
c_rt_lib0clear(&___nl__4);
#line 353
c_rt_lib0clear(&___nl__5);
#line 354
c_rt_lib0move(&___nl__4, nparser0sparse(___nl__3, ___nl__0));
#line 355
c_rt_lib0move(&___nl__5, c_rt_lib0priv_is(___nl__4, ___get_global_const(48)));
#line 355
if(c_rt_lib0check_true_native(___nl__5)){ goto label_37;}
#line 362
c_rt_lib0move(&___nl__5, c_rt_lib0priv_is(___nl__4, ___get_global_const(112)));
#line 362
if(c_rt_lib0check_true_native(___nl__5)){ goto label_101;}
#line 362
c_rt_lib0move(&___nl__5,___get_global_const(91));
#line 362
c_rt_lib0move(&___nl__5, c_rt_lib0array_mk(2, ___nl__5, ___nl__4));
#line 362
nl_die_arg(___nl__5);
#line 355
label_37:
#line 355
c_rt_lib0move(&___nl__6, c_rt_lib0priv_as(___nl__4, ___get_global_const(48)));
#line 356
c_rt_lib0move(&___nl__7, c_rt_lib0hash_mk(0));
#line 357
c_rt_lib0move(&___nl__9, c_rt_lib0get_false());
#line 357
c_rt_lib0move(&___nl__8, module_checker0check_module(___nl__6, ___nl__9, &___nl__7));
#line 357
c_rt_lib0clear(&___nl__9);
#line 358
c_rt_lib0move(&___nl__9,___get_global_const(27));
#line 358
c_rt_lib0move(&___nl__9, c_rt_lib0get_ref_hash(*___ref___2, ___nl__9));
#line 358
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__8, ___get_global_const(113)));
#line 358
c_rt_lib0delete(hash0set_value(&___nl__9, ___nl__0, ___nl__10));
#line 358
c_rt_lib0clear(&___nl__10);
#line 358
c_rt_lib0move(&___nl__10,___get_global_const(27));
#line 358
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___2, ___nl__10, ___nl__9));
#line 358
c_rt_lib0clear(&___nl__10);
#line 358
c_rt_lib0clear(&___nl__9);
#line 359
c_rt_lib0move(&___nl__9,___get_global_const(26));
#line 359
c_rt_lib0move(&___nl__9, c_rt_lib0get_ref_hash(*___ref___2, ___nl__9));
#line 359
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__8, ___get_global_const(18)));
#line 359
c_rt_lib0delete(hash0set_value(&___nl__9, ___nl__0, ___nl__10));
#line 359
c_rt_lib0clear(&___nl__10);
#line 359
c_rt_lib0move(&___nl__10,___get_global_const(26));
#line 359
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___2, ___nl__10, ___nl__9));
#line 359
c_rt_lib0clear(&___nl__10);
#line 359
c_rt_lib0clear(&___nl__9);
#line 360
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__8, ___get_global_const(18)));
#line 360
c_rt_lib0move(&___nl__9, array0len(___nl__10));
#line 360
c_rt_lib0clear(&___nl__10);
#line 360
c_rt_lib0move(&___nl__10,___get_global_const(0));
#line 360
c_rt_lib0move(&___nl__9, c_rt_lib0num_eq(___nl__9, ___nl__10));
#line 360
c_rt_lib0clear(&___nl__10);
#line 360
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__9));
#line 360
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__9));
#line 360
if(c_rt_lib0check_true_native(___nl__9)){ goto label_84;}
#line 360
c_rt_lib0move(&___nl__10,___get_global_const(2));
#line 360
c_rt_lib0move(&___nl__10, c_rt_lib0ov_mk_arg(___get_global_const(47), ___nl__10));
#line 360
c_rt_lib0clear(&___nl__0);
#line 360
c_rt_lib0clear(&___nl__1);
#line 360
c_rt_lib0clear(&___nl__3);
#line 360
c_rt_lib0clear(&___nl__4);
#line 360
c_rt_lib0clear(&___nl__5);
#line 360
c_rt_lib0clear(&___nl__6);
#line 360
c_rt_lib0clear(&___nl__7);
#line 360
c_rt_lib0clear(&___nl__8);
#line 360
c_rt_lib0clear(&___nl__9);
#line 360
return ___nl__10;
#line 360
c_rt_lib0clear(&___nl__10);
#line 360
goto label_84;
#line 360
label_84:
#line 360
c_rt_lib0clear(&___nl__9);
#line 361
c_rt_lib0move(&___nl__9, c_rt_lib0ov_mk_arg(___get_global_const(48), ___nl__6));
#line 361
c_rt_lib0clear(&___nl__0);
#line 361
c_rt_lib0clear(&___nl__1);
#line 361
c_rt_lib0clear(&___nl__3);
#line 361
c_rt_lib0clear(&___nl__4);
#line 361
c_rt_lib0clear(&___nl__5);
#line 361
c_rt_lib0clear(&___nl__6);
#line 361
c_rt_lib0clear(&___nl__7);
#line 361
c_rt_lib0clear(&___nl__8);
#line 361
return ___nl__9;
#line 361
c_rt_lib0clear(&___nl__9);
#line 361
c_rt_lib0clear(&___nl__7);
#line 361
c_rt_lib0clear(&___nl__8);
#line 361
c_rt_lib0clear(&___nl__6);
#line 362
goto label_131;
#line 362
label_101:
#line 362
c_rt_lib0move(&___nl__6, c_rt_lib0priv_as(___nl__4, ___get_global_const(112)));
#line 363
c_rt_lib0move(&___nl__7,___get_global_const(27));
#line 363
c_rt_lib0move(&___nl__7, c_rt_lib0get_ref_hash(*___ref___2, ___nl__7));
#line 363
c_rt_lib0move(&___nl__8, c_rt_lib0array_mk(0));
#line 363
c_rt_lib0delete(hash0set_value(&___nl__7, ___nl__0, ___nl__8));
#line 363
c_rt_lib0clear(&___nl__8);
#line 363
c_rt_lib0move(&___nl__8,___get_global_const(27));
#line 363
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___2, ___nl__8, ___nl__7));
#line 363
c_rt_lib0clear(&___nl__8);
#line 363
c_rt_lib0clear(&___nl__7);
#line 364
c_rt_lib0move(&___nl__7,___get_global_const(26));
#line 364
c_rt_lib0move(&___nl__7, c_rt_lib0get_ref_hash(*___ref___2, ___nl__7));
#line 364
c_rt_lib0delete(hash0set_value(&___nl__7, ___nl__0, ___nl__6));
#line 364
c_rt_lib0move(&___nl__8,___get_global_const(26));
#line 364
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___2, ___nl__8, ___nl__7));
#line 364
c_rt_lib0clear(&___nl__8);
#line 364
c_rt_lib0clear(&___nl__7);
#line 365
c_rt_lib0move(&___nl__7,___get_global_const(2));
#line 365
c_rt_lib0move(&___nl__7, c_rt_lib0ov_mk_arg(___get_global_const(47), ___nl__7));
#line 365
c_rt_lib0clear(&___nl__0);
#line 365
c_rt_lib0clear(&___nl__1);
#line 365
c_rt_lib0clear(&___nl__3);
#line 365
c_rt_lib0clear(&___nl__4);
#line 365
c_rt_lib0clear(&___nl__5);
#line 365
c_rt_lib0clear(&___nl__6);
#line 365
return ___nl__7;
#line 365
c_rt_lib0clear(&___nl__7);
#line 365
c_rt_lib0clear(&___nl__6);
#line 366
goto label_131;
#line 366
label_131:
#line 366
c_rt_lib0clear(&___nl__5);
#line 366
c_rt_lib0clear(&___nl__3);
#line 366
c_rt_lib0clear(&___nl__4);
#line 366
c_rt_lib0clear(&___nl__0);
#line 366
c_rt_lib0clear(&___nl__1);
#line 366
return NULL;
}

ImmT compiler_priv0get_mathematical_func(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
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
#line 370
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(0));
#line 371
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(68)));
#line 371
c_rt_lib0move(&___nl__2, c_fe_lib0file_to_string(___nl__3));
#line 371
c_rt_lib0clear(&___nl__3);
#line 371
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(48)));
#line 371
if(c_rt_lib0check_true_native(___nl__3)){ goto label_11;}
#line 384
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(47)));
#line 384
if(c_rt_lib0check_true_native(___nl__3)){ goto label_62;}
#line 384
c_rt_lib0move(&___nl__3,___get_global_const(91));
#line 384
c_rt_lib0move(&___nl__3, c_rt_lib0array_mk(2, ___nl__3, ___nl__2));
#line 384
nl_die_arg(___nl__3);
#line 371
label_11:
#line 371
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(48)));
#line 372
c_rt_lib0move(&___nl__5,___get_global_const(114));
#line 372
c_rt_lib0delete(c_fe_lib0print(___nl__5));
#line 372
c_rt_lib0clear(&___nl__5);
#line 373
c_rt_lib0move(&___nl__5, dfile0try_sload(___nl__4));
#line 374
c_rt_lib0move(&___nl__6, c_rt_lib0array_mk(0));
#line 375
c_rt_lib0move(&___nl__7, c_rt_lib0priv_is(___nl__5, ___get_global_const(48)));
#line 375
if(c_rt_lib0check_true_native(___nl__7)){ goto label_25;}
#line 377
c_rt_lib0move(&___nl__7, c_rt_lib0priv_is(___nl__5, ___get_global_const(47)));
#line 377
if(c_rt_lib0check_true_native(___nl__7)){ goto label_30;}
#line 377
c_rt_lib0move(&___nl__7,___get_global_const(91));
#line 377
c_rt_lib0move(&___nl__7, c_rt_lib0array_mk(2, ___nl__7, ___nl__5));
#line 377
nl_die_arg(___nl__7);
#line 375
label_25:
#line 375
c_rt_lib0move(&___nl__8, c_rt_lib0priv_as(___nl__5, ___get_global_const(48)));
#line 376
c_rt_lib0copy(&___nl__6, ___nl__8);
#line 376
c_rt_lib0clear(&___nl__8);
#line 377
goto label_38;
#line 377
label_30:
#line 377
c_rt_lib0move(&___nl__8, c_rt_lib0priv_as(___nl__5, ___get_global_const(47)));
#line 378
c_rt_lib0move(&___nl__9,___get_global_const(115));
#line 378
c_rt_lib0delete(c_fe_lib0print(___nl__9));
#line 378
c_rt_lib0clear(&___nl__9);
#line 379
c_rt_lib0delete(c_fe_lib0print(___nl__8));
#line 379
c_rt_lib0clear(&___nl__8);
#line 380
goto label_38;
#line 380
label_38:
#line 380
c_rt_lib0clear(&___nl__7);
#line 381
c_rt_lib0move(&___nl__8,___get_global_const(0));
#line 381
c_rt_lib0move(&___nl__9,___get_global_const(1));
#line 381
c_rt_lib0move(&___nl__10, c_rt_lib0array_len(___nl__6));
#line 381
label_43:
#line 381
c_rt_lib0move(&___nl__11, c_rt_lib0ge(___nl__8, ___nl__10));
#line 381
if(c_rt_lib0check_true_native(___nl__11)){ goto label_52;}
#line 381
c_rt_lib0move(&___nl__7, c_rt_lib0array_get(___nl__6, ___nl__8));
#line 382
c_rt_lib0move(&___nl__12,___get_global_const(1));
#line 382
c_rt_lib0delete(hash0set_value(&___nl__1, ___nl__7, ___nl__12));
#line 382
c_rt_lib0clear(&___nl__12);
#line 383
c_rt_lib0move(&___nl__8, c_rt_lib0add_mod(___nl__8, ___nl__9));
#line 383
goto label_43;
#line 383
label_52:
#line 383
c_rt_lib0clear(&___nl__7);
#line 383
c_rt_lib0clear(&___nl__8);
#line 383
c_rt_lib0clear(&___nl__9);
#line 383
c_rt_lib0clear(&___nl__10);
#line 383
c_rt_lib0clear(&___nl__11);
#line 383
c_rt_lib0clear(&___nl__5);
#line 383
c_rt_lib0clear(&___nl__6);
#line 383
c_rt_lib0clear(&___nl__4);
#line 384
goto label_69;
#line 384
label_62:
#line 384
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(47)));
#line 385
c_rt_lib0move(&___nl__5,___get_global_const(116));
#line 385
c_rt_lib0delete(c_fe_lib0print(___nl__5));
#line 385
c_rt_lib0clear(&___nl__5);
#line 385
c_rt_lib0clear(&___nl__4);
#line 386
goto label_69;
#line 386
label_69:
#line 386
c_rt_lib0clear(&___nl__2);
#line 386
c_rt_lib0clear(&___nl__3);
#line 387
c_rt_lib0clear(&___nl__0);
#line 387
return ___nl__1;
#line 387
c_rt_lib0clear(&___nl__1);
#line 387
c_rt_lib0clear(&___nl__0);
#line 387
return NULL;
}

ImmT compiler_priv0compile_ide(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
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
#line 391
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(0));
#line 392
c_rt_lib0move(&___nl__2, c_rt_lib0hash_mk(0));
#line 393
c_rt_lib0move(&___nl__3, c_rt_lib0hash_mk(0));
#line 394
c_rt_lib0move(&___nl__4, c_rt_lib0hash_mk(0));
#line 396
c_rt_lib0move(&___nl__6, c_rt_lib0hash_mk(0));
#line 397
c_rt_lib0move(&___nl__7, c_rt_lib0hash_mk(0));
#line 398
c_rt_lib0move(&___nl__8, c_rt_lib0hash_mk(0));
#line 399
c_rt_lib0move(&___nl__9, c_rt_lib0hash_mk(0));
#line 400
c_rt_lib0move(&___nl__10, c_rt_lib0ov_mk_none(___get_global_const(48)));
#line 400
c_rt_lib0move(&___nl__5, c_rt_lib0hash_mk(5, ___get_global_const(26), ___nl__6, ___get_global_const(27), ___nl__7, ___get_global_const(28), ___nl__8, ___get_global_const(29), ___nl__9, ___get_global_const(30), ___nl__10));
#line 400
c_rt_lib0clear(&___nl__6);
#line 400
c_rt_lib0clear(&___nl__7);
#line 400
c_rt_lib0clear(&___nl__8);
#line 400
c_rt_lib0clear(&___nl__9);
#line 400
c_rt_lib0clear(&___nl__10);
#line 402
c_rt_lib0move(&___nl__7, compiler_priv0get_mathematical_func(___nl__0));
#line 402
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(67)));
#line 402
c_rt_lib0move(&___nl__6, post_processing0init(___nl__7, ___nl__8));
#line 402
c_rt_lib0clear(&___nl__8);
#line 402
c_rt_lib0clear(&___nl__7);
#line 403
c_rt_lib0move(&___nl__7, c_rt_lib0hash_mk(0));
#line 404
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(70)));
#line 404
c_rt_lib0move(&___nl__8, compiler_priv0get_generator_state(___nl__9));
#line 404
c_rt_lib0clear(&___nl__9);
#line 405
label_24:
#line 406
c_rt_lib0move(&___nl__9, c_rt_lib0hash_mk(0));
#line 406
c_rt_lib0copy(&___nl__10, ___nl__9);
#line 406
c_rt_lib0hash_set_value_dec(&___nl__5, ___get_global_const(28), ___nl__10);
#line 406
c_rt_lib0clear(&___nl__9);
#line 406
c_rt_lib0clear(&___nl__10);
#line 407
c_rt_lib0move(&___nl__9, c_rt_lib0hash_mk(0));
#line 407
c_rt_lib0copy(&___nl__10, ___nl__9);
#line 407
c_rt_lib0hash_set_value_dec(&___nl__5, ___get_global_const(29), ___nl__10);
#line 407
c_rt_lib0clear(&___nl__9);
#line 407
c_rt_lib0clear(&___nl__10);
#line 408
c_rt_lib0move(&___nl__9, c_rt_lib0ov_mk_none(___get_global_const(48)));
#line 408
c_rt_lib0copy(&___nl__10, ___nl__9);
#line 408
c_rt_lib0hash_set_value_dec(&___nl__5, ___get_global_const(30), ___nl__10);
#line 408
c_rt_lib0clear(&___nl__9);
#line 408
c_rt_lib0clear(&___nl__10);
#line 409
c_rt_lib0move(&___nl__9, compiler_priv0get_files_to_parse(___nl__0));
#line 410
c_rt_lib0move(&___nl__10,___get_global_const(0));
#line 411
c_rt_lib0move(&___nl__13, c_rt_lib0init_iter(___nl__9));
#line 411
label_43:
#line 411
c_rt_lib0move(&___nl__11, c_rt_lib0is_end_hash(___nl__13));
#line 411
if(c_rt_lib0check_true_native(___nl__11)){ goto label_94;}
#line 411
c_rt_lib0move(&___nl__11, c_rt_lib0get_key_iter(___nl__13));
#line 411
c_rt_lib0move(&___nl__12, c_rt_lib0hash_get_value(___nl__9, ___nl__11));
#line 412
c_rt_lib0move(&___nl__15, c_rt_lib0hash_get_value_dec(___nl__12, ___get_global_const(43)));
#line 412
c_rt_lib0move(&___nl__14, c_fe_lib0get_modif_time(___nl__15));
#line 412
c_rt_lib0clear(&___nl__15);
#line 413
c_rt_lib0copy(&___nl__15, ___nl__14);
#line 413
c_rt_lib0move(&___nl__15, c_rt_lib0priv_is(___nl__15, ___get_global_const(47)));
#line 413
c_rt_lib0move(&___nl__15, c_rt_lib0not(___nl__15));
#line 413
if(c_rt_lib0check_true_native(___nl__15)){ goto label_59;}
#line 413
c_rt_lib0clear(&___nl__14);
#line 413
c_rt_lib0clear(&___nl__15);
#line 413
goto label_91;
#line 413
goto label_59;
#line 413
label_59:
#line 413
c_rt_lib0clear(&___nl__15);
#line 414
c_rt_lib0copy(&___nl__15, ___nl__14);
#line 414
c_rt_lib0move(&___nl__15, c_rt_lib0priv_as(___nl__15, ___get_global_const(48)));
#line 414
c_rt_lib0copy(&___nl__14, ___nl__15);
#line 414
c_rt_lib0clear(&___nl__15);
#line 415
c_rt_lib0move(&___nl__15, hash0has_key(___nl__1, ___nl__11));
#line 415
c_rt_lib0move(&___nl__15, c_rt_lib0not(___nl__15));
#line 415
if(c_rt_lib0check_true_native(___nl__15)){ goto label_83;}
#line 416
c_rt_lib0move(&___nl__16, hash0get_value(___nl__1, ___nl__11));
#line 417
c_rt_lib0move(&___nl__17, c_rt_lib0gt(___nl__14, ___nl__16));
#line 417
c_rt_lib0move(&___nl__17, c_rt_lib0not(___nl__17));
#line 417
c_rt_lib0move(&___nl__17, c_rt_lib0not(___nl__17));
#line 417
if(c_rt_lib0check_true_native(___nl__17)){ goto label_79;}
#line 417
c_rt_lib0clear(&___nl__14);
#line 417
c_rt_lib0clear(&___nl__15);
#line 417
c_rt_lib0clear(&___nl__16);
#line 417
c_rt_lib0clear(&___nl__17);
#line 417
goto label_91;
#line 417
goto label_79;
#line 417
label_79:
#line 417
c_rt_lib0clear(&___nl__17);
#line 417
c_rt_lib0clear(&___nl__16);
#line 418
goto label_83;
#line 418
label_83:
#line 418
c_rt_lib0clear(&___nl__15);
#line 419
c_rt_lib0delete(hash0set_value(&___nl__1, ___nl__11, ___nl__14));
#line 420
c_rt_lib0delete(hash0set_value(&___nl__4, ___nl__11, ___nl__12));
#line 421
c_rt_lib0move(&___nl__15,___get_global_const(1));
#line 421
c_rt_lib0move(&___nl__10, c_rt_lib0add_mod(___nl__10, ___nl__15));
#line 421
c_rt_lib0clear(&___nl__15);
#line 421
c_rt_lib0clear(&___nl__14);
#line 421
label_91:
#line 422
c_rt_lib0move(&___nl__13, c_rt_lib0next_iter(___nl__13));
#line 422
goto label_43;
#line 422
label_94:
#line 422
c_rt_lib0clear(&___nl__11);
#line 422
c_rt_lib0clear(&___nl__12);
#line 422
c_rt_lib0clear(&___nl__13);
#line 423
c_rt_lib0move(&___nl__13, c_rt_lib0init_iter(___nl__7));
#line 423
label_99:
#line 423
c_rt_lib0move(&___nl__11, c_rt_lib0is_end_hash(___nl__13));
#line 423
if(c_rt_lib0check_true_native(___nl__11)){ goto label_143;}
#line 423
c_rt_lib0move(&___nl__11, c_rt_lib0get_key_iter(___nl__13));
#line 423
c_rt_lib0move(&___nl__12, c_rt_lib0hash_get_value(___nl__7, ___nl__11));
#line 424
c_rt_lib0move(&___nl__14, hash0has_key(___nl__9, ___nl__11));
#line 424
c_rt_lib0move(&___nl__14, c_rt_lib0not(___nl__14));
#line 424
c_rt_lib0move(&___nl__14, c_rt_lib0not(___nl__14));
#line 424
if(c_rt_lib0check_true_native(___nl__14)){ goto label_139;}
#line 425
c_rt_lib0move(&___nl__15,___get_global_const(1));
#line 425
c_rt_lib0move(&___nl__10, c_rt_lib0add_mod(___nl__10, ___nl__15));
#line 425
c_rt_lib0clear(&___nl__15);
#line 426
c_rt_lib0move(&___nl__15,___get_global_const(26));
#line 426
c_rt_lib0move(&___nl__15, c_rt_lib0get_ref_hash(___nl__5, ___nl__15));
#line 426
c_rt_lib0delete(hash0delete(&___nl__15, ___nl__11));
#line 426
c_rt_lib0move(&___nl__16,___get_global_const(26));
#line 426
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__5, ___nl__16, ___nl__15));
#line 426
c_rt_lib0clear(&___nl__16);
#line 426
c_rt_lib0clear(&___nl__15);
#line 427
c_rt_lib0move(&___nl__15,___get_global_const(27));
#line 427
c_rt_lib0move(&___nl__15, c_rt_lib0get_ref_hash(___nl__5, ___nl__15));
#line 427
c_rt_lib0delete(hash0delete(&___nl__15, ___nl__11));
#line 427
c_rt_lib0move(&___nl__16,___get_global_const(27));
#line 427
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__5, ___nl__16, ___nl__15));
#line 427
c_rt_lib0clear(&___nl__16);
#line 427
c_rt_lib0clear(&___nl__15);
#line 428
c_rt_lib0delete(hash0delete(&___nl__2, ___nl__11));
#line 429
c_rt_lib0delete(hash0delete(&___nl__1, ___nl__11));
#line 430
c_rt_lib0delete(hash0delete(&___nl__4, ___nl__11));
#line 431
c_rt_lib0delete(hash0delete(&___nl__3, ___nl__11));
#line 432
c_rt_lib0delete(post_processing0clear_module_from_state(&___nl__6, ___nl__11));
#line 433
c_rt_lib0move(&___nl__15, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(70)));
#line 433
c_rt_lib0move(&___nl__15, c_rt_lib0priv_is(___nl__15, ___get_global_const(34)));
#line 433
c_rt_lib0move(&___nl__15, c_rt_lib0not(___nl__15));
#line 433
if(c_rt_lib0check_true_native(___nl__15)){ goto label_136;}
#line 434
c_rt_lib0delete(generator_c0clear_module_from_state(&___nl__8, ___nl__11));
#line 435
goto label_136;
#line 435
label_136:
#line 435
c_rt_lib0clear(&___nl__15);
#line 436
goto label_139;
#line 436
label_139:
#line 436
c_rt_lib0clear(&___nl__14);
#line 437
c_rt_lib0move(&___nl__13, c_rt_lib0next_iter(___nl__13));
#line 437
goto label_99;
#line 437
label_143:
#line 437
c_rt_lib0clear(&___nl__11);
#line 437
c_rt_lib0clear(&___nl__12);
#line 437
c_rt_lib0clear(&___nl__13);
#line 438
c_rt_lib0copy(&___nl__7, ___nl__9);
#line 439
c_rt_lib0move(&___nl__11,___get_global_const(0));
#line 439
c_rt_lib0move(&___nl__11, c_rt_lib0num_eq(___nl__10, ___nl__11));
#line 439
c_rt_lib0move(&___nl__11, c_rt_lib0not(___nl__11));
#line 439
if(c_rt_lib0check_true_native(___nl__11)){ goto label_160;}
#line 440
c_rt_lib0move(&___nl__12,___get_global_const(1));
#line 440
c_rt_lib0delete(c_fe_lib0sleep(___nl__12));
#line 440
c_rt_lib0clear(&___nl__12);
#line 441
c_rt_lib0clear(&___nl__9);
#line 441
c_rt_lib0clear(&___nl__10);
#line 441
c_rt_lib0clear(&___nl__11);
#line 441
goto label_24;
#line 442
goto label_160;
#line 442
label_160:
#line 442
c_rt_lib0clear(&___nl__11);
#line 443
c_rt_lib0move(&___nl__11, c_rt_lib0hash_mk(0));
#line 444
c_rt_lib0move(&___nl__14, c_rt_lib0init_iter(___nl__4));
#line 444
label_164:
#line 444
c_rt_lib0move(&___nl__12, c_rt_lib0is_end_hash(___nl__14));
#line 444
if(c_rt_lib0check_true_native(___nl__12)){ goto label_195;}
#line 444
c_rt_lib0move(&___nl__12, c_rt_lib0get_key_iter(___nl__14));
#line 444
c_rt_lib0move(&___nl__13, c_rt_lib0hash_get_value(___nl__4, ___nl__12));
#line 445
c_rt_lib0move(&___nl__16, c_rt_lib0hash_get_value_dec(___nl__13, ___get_global_const(43)));
#line 445
c_rt_lib0move(&___nl__15, compiler_priv0parse_module(___nl__12, ___nl__16, &___nl__5));
#line 445
c_rt_lib0clear(&___nl__16);
#line 445
c_rt_lib0move(&___nl__16, c_rt_lib0priv_is(___nl__15, ___get_global_const(48)));
#line 445
if(c_rt_lib0check_true_native(___nl__16)){ goto label_179;}
#line 448
c_rt_lib0move(&___nl__16, c_rt_lib0priv_is(___nl__15, ___get_global_const(47)));
#line 448
if(c_rt_lib0check_true_native(___nl__16)){ goto label_185;}
#line 448
c_rt_lib0move(&___nl__16,___get_global_const(91));
#line 448
c_rt_lib0move(&___nl__16, c_rt_lib0array_mk(2, ___nl__16, ___nl__15));
#line 448
nl_die_arg(___nl__16);
#line 445
label_179:
#line 445
c_rt_lib0move(&___nl__17, c_rt_lib0priv_as(___nl__15, ___get_global_const(48)));
#line 446
c_rt_lib0delete(hash0set_value(&___nl__2, ___nl__12, ___nl__17));
#line 447
c_rt_lib0delete(hash0set_value(&___nl__3, ___nl__12, ___nl__17));
#line 447
c_rt_lib0clear(&___nl__17);
#line 448
goto label_190;
#line 448
label_185:
#line 448
c_rt_lib0move(&___nl__17, c_rt_lib0priv_as(___nl__15, ___get_global_const(47)));
#line 449
c_rt_lib0delete(hash0set_value(&___nl__11, ___nl__12, ___nl__13));
#line 449
c_rt_lib0clear(&___nl__17);
#line 450
goto label_190;
#line 450
label_190:
#line 450
c_rt_lib0clear(&___nl__15);
#line 450
c_rt_lib0clear(&___nl__16);
#line 451
c_rt_lib0move(&___nl__14, c_rt_lib0next_iter(___nl__14));
#line 451
goto label_164;
#line 451
label_195:
#line 451
c_rt_lib0clear(&___nl__12);
#line 451
c_rt_lib0clear(&___nl__13);
#line 451
c_rt_lib0clear(&___nl__14);
#line 452
c_rt_lib0copy(&___nl__4, ___nl__11);
#line 453
c_rt_lib0move(&___nl__12, hash0size(___nl__4));
#line 453
c_rt_lib0move(&___nl__13,___get_global_const(0));
#line 453
c_rt_lib0move(&___nl__12, c_rt_lib0gt(___nl__12, ___nl__13));
#line 453
c_rt_lib0clear(&___nl__13);
#line 453
c_rt_lib0move(&___nl__12, c_rt_lib0not(___nl__12));
#line 453
if(c_rt_lib0check_true_native(___nl__12)){ goto label_228;}
#line 454
c_rt_lib0delete(compiler_priv0show_and_count_errors(___nl__5, ___nl__0, ___nl__9));
#line 455
c_rt_lib0move(&___nl__13, string0lf());
#line 455
c_rt_lib0move(&___nl__14,___get_global_const(117));
#line 455
c_rt_lib0move(&___nl__13, c_rt_lib0concat_add(___nl__13, ___nl__14));
#line 455
c_rt_lib0clear(&___nl__14);
#line 455
c_rt_lib0move(&___nl__14, hash0size(___nl__4));
#line 455
c_rt_lib0move(&___nl__13, c_rt_lib0concat_add(___nl__13, ___nl__14));
#line 455
c_rt_lib0clear(&___nl__14);
#line 455
c_rt_lib0move(&___nl__14,___get_global_const(118));
#line 455
c_rt_lib0move(&___nl__13, c_rt_lib0concat_add(___nl__13, ___nl__14));
#line 455
c_rt_lib0clear(&___nl__14);
#line 455
c_rt_lib0delete(c_fe_lib0print(___nl__13));
#line 455
c_rt_lib0clear(&___nl__13);
#line 456
c_rt_lib0move(&___nl__13,___get_global_const(119));
#line 456
c_rt_lib0delete(c_fe_lib0print(___nl__13));
#line 456
c_rt_lib0clear(&___nl__13);
#line 457
c_rt_lib0clear(&___nl__9);
#line 457
c_rt_lib0clear(&___nl__10);
#line 457
c_rt_lib0clear(&___nl__11);
#line 457
c_rt_lib0clear(&___nl__12);
#line 457
goto label_24;
#line 458
goto label_228;
#line 458
label_228:
#line 458
c_rt_lib0clear(&___nl__12);
#line 459
c_rt_lib0move(&___nl__12, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(66)));
#line 459
c_rt_lib0move(&___nl__13, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(72)));
#line 459
c_rt_lib0delete(compiler_priv0check_modules(___nl__2, &___nl__5, ___nl__12, ___nl__13));
#line 459
c_rt_lib0clear(&___nl__13);
#line 459
c_rt_lib0clear(&___nl__12);
#line 460
c_rt_lib0move(&___nl__12, compiler_priv0show_and_count_errors(___nl__5, ___nl__0, ___nl__9));
#line 460
c_rt_lib0move(&___nl__13,___get_global_const(0));
#line 460
c_rt_lib0move(&___nl__12, c_rt_lib0gt(___nl__12, ___nl__13));
#line 460
c_rt_lib0clear(&___nl__13);
#line 460
c_rt_lib0move(&___nl__12, c_rt_lib0not(___nl__12));
#line 460
if(c_rt_lib0check_true_native(___nl__12)){ goto label_250;}
#line 461
c_rt_lib0move(&___nl__13,___get_global_const(119));
#line 461
c_rt_lib0delete(c_fe_lib0print(___nl__13));
#line 461
c_rt_lib0clear(&___nl__13);
#line 462
c_rt_lib0clear(&___nl__9);
#line 462
c_rt_lib0clear(&___nl__10);
#line 462
c_rt_lib0clear(&___nl__11);
#line 462
c_rt_lib0clear(&___nl__12);
#line 462
goto label_24;
#line 463
goto label_250;
#line 463
label_250:
#line 463
c_rt_lib0clear(&___nl__12);
#line 464
c_rt_lib0move(&___nl__12, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(70)));
#line 464
c_rt_lib0move(&___nl__12, c_rt_lib0priv_is(___nl__12, ___get_global_const(36)));
#line 464
if(c_rt_lib0check_true_native(___nl__12)){ goto label_257;}
#line 464
c_rt_lib0move(&___nl__12, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(70)));
#line 464
c_rt_lib0move(&___nl__12, c_rt_lib0priv_is(___nl__12, ___get_global_const(35)));
#line 464
label_257:
#line 464
c_rt_lib0move(&___nl__12, c_rt_lib0not(___nl__12));
#line 464
c_rt_lib0move(&___nl__12, c_rt_lib0not(___nl__12));
#line 464
if(c_rt_lib0check_true_native(___nl__12)){ goto label_308;}
#line 465
c_rt_lib0move(&___nl__13,___get_global_const(120));
#line 465
c_rt_lib0delete(c_fe_lib0print(___nl__13));
#line 465
c_rt_lib0clear(&___nl__13);
#line 466
c_rt_lib0move(&___nl__13, c_rt_lib0hash_mk(0));
#line 467
c_rt_lib0move(&___nl__14, compiler_priv0translate(___nl__3, &___nl__6));
#line 468
c_rt_lib0move(&___nl__16, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(65)));
#line 468
c_rt_lib0move(&___nl__17, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(70)));
#line 468
c_rt_lib0move(&___nl__15, compiler_priv0generate_modules_to_files(___nl__14, ___nl__9, ___nl__16, &___nl__8, ___nl__17));
#line 468
c_rt_lib0clear(&___nl__17);
#line 468
c_rt_lib0clear(&___nl__16);
#line 469
c_rt_lib0move(&___nl__16, c_rt_lib0priv_is(___nl__15, ___get_global_const(47)));
#line 469
if(c_rt_lib0check_true_native(___nl__16)){ goto label_278;}
#line 473
c_rt_lib0move(&___nl__16, c_rt_lib0priv_is(___nl__15, ___get_global_const(48)));
#line 473
if(c_rt_lib0check_true_native(___nl__16)){ goto label_297;}
#line 473
c_rt_lib0move(&___nl__16,___get_global_const(91));
#line 473
c_rt_lib0move(&___nl__16, c_rt_lib0array_mk(2, ___nl__16, ___nl__15));
#line 473
nl_die_arg(___nl__16);
#line 469
label_278:
#line 469
c_rt_lib0move(&___nl__17, c_rt_lib0priv_as(___nl__15, ___get_global_const(47)));
#line 470
c_rt_lib0move(&___nl__20, c_rt_lib0init_iter(___nl__17));
#line 470
label_281:
#line 470
c_rt_lib0move(&___nl__18, c_rt_lib0is_end_hash(___nl__20));
#line 470
if(c_rt_lib0check_true_native(___nl__18)){ goto label_291;}
#line 470
c_rt_lib0move(&___nl__18, c_rt_lib0get_key_iter(___nl__20));
#line 470
c_rt_lib0move(&___nl__19, c_rt_lib0hash_get_value(___nl__17, ___nl__18));
#line 471
c_rt_lib0move(&___nl__21, hash0get_value(___nl__2, ___nl__18));
#line 471
c_rt_lib0delete(hash0set_value(&___nl__13, ___nl__18, ___nl__21));
#line 471
c_rt_lib0clear(&___nl__21);
#line 472
c_rt_lib0move(&___nl__20, c_rt_lib0next_iter(___nl__20));
#line 472
goto label_281;
#line 472
label_291:
#line 472
c_rt_lib0clear(&___nl__18);
#line 472
c_rt_lib0clear(&___nl__19);
#line 472
c_rt_lib0clear(&___nl__20);
#line 472
c_rt_lib0clear(&___nl__17);
#line 473
goto label_301;
#line 473
label_297:
#line 473
c_rt_lib0move(&___nl__17, c_rt_lib0priv_as(___nl__15, ___get_global_const(48)));
#line 473
c_rt_lib0clear(&___nl__17);
#line 474
goto label_301;
#line 474
label_301:
#line 474
c_rt_lib0clear(&___nl__15);
#line 474
c_rt_lib0clear(&___nl__16);
#line 475
c_rt_lib0copy(&___nl__3, ___nl__13);
#line 475
c_rt_lib0clear(&___nl__13);
#line 475
c_rt_lib0clear(&___nl__14);
#line 476
goto label_356;
#line 476
label_308:
#line 477
c_rt_lib0move(&___nl__13, c_rt_lib0hash_mk(0));
#line 478
c_rt_lib0move(&___nl__16, c_rt_lib0init_iter(___nl__3));
#line 478
label_311:
#line 478
c_rt_lib0move(&___nl__14, c_rt_lib0is_end_hash(___nl__16));
#line 478
if(c_rt_lib0check_true_native(___nl__14)){ goto label_349;}
#line 478
c_rt_lib0move(&___nl__14, c_rt_lib0get_key_iter(___nl__16));
#line 478
c_rt_lib0move(&___nl__15, c_rt_lib0hash_get_value(___nl__3, ___nl__14));
#line 479
c_rt_lib0move(&___nl__17,___get_global_const(121));
#line 479
c_rt_lib0move(&___nl__17, c_rt_lib0concat_add(___nl__17, ___nl__14));
#line 479
c_rt_lib0delete(c_fe_lib0print(___nl__17));
#line 479
c_rt_lib0clear(&___nl__17);
#line 480
c_rt_lib0move(&___nl__18, hash0get_value(___nl__9, ___nl__14));
#line 480
c_rt_lib0move(&___nl__18, c_rt_lib0hash_get_value_dec(___nl__18, ___get_global_const(44)));
#line 480
c_rt_lib0move(&___nl__17, compiler_priv0save_module_to_file(___nl__15, ___nl__18));
#line 480
c_rt_lib0clear(&___nl__18);
#line 480
c_rt_lib0move(&___nl__18, c_rt_lib0priv_is(___nl__17, ___get_global_const(47)));
#line 480
if(c_rt_lib0check_true_native(___nl__18)){ goto label_331;}
#line 483
c_rt_lib0move(&___nl__18, c_rt_lib0priv_is(___nl__17, ___get_global_const(48)));
#line 483
if(c_rt_lib0check_true_native(___nl__18)){ goto label_340;}
#line 483
c_rt_lib0move(&___nl__18,___get_global_const(91));
#line 483
c_rt_lib0move(&___nl__18, c_rt_lib0array_mk(2, ___nl__18, ___nl__17));
#line 483
nl_die_arg(___nl__18);
#line 480
label_331:
#line 480
c_rt_lib0move(&___nl__19, c_rt_lib0priv_as(___nl__17, ___get_global_const(47)));
#line 481
c_rt_lib0move(&___nl__20,___get_global_const(122));
#line 481
c_rt_lib0move(&___nl__20, c_rt_lib0concat_add(___nl__20, ___nl__19));
#line 481
c_rt_lib0delete(c_fe_lib0print(___nl__20));
#line 481
c_rt_lib0clear(&___nl__20);
#line 482
c_rt_lib0delete(hash0set_value(&___nl__13, ___nl__14, ___nl__15));
#line 482
c_rt_lib0clear(&___nl__19);
#line 483
goto label_344;
#line 483
label_340:
#line 483
c_rt_lib0move(&___nl__19, c_rt_lib0priv_as(___nl__17, ___get_global_const(48)));
#line 483
c_rt_lib0clear(&___nl__19);
#line 484
goto label_344;
#line 484
label_344:
#line 484
c_rt_lib0clear(&___nl__17);
#line 484
c_rt_lib0clear(&___nl__18);
#line 485
c_rt_lib0move(&___nl__16, c_rt_lib0next_iter(___nl__16));
#line 485
goto label_311;
#line 485
label_349:
#line 485
c_rt_lib0clear(&___nl__14);
#line 485
c_rt_lib0clear(&___nl__15);
#line 485
c_rt_lib0clear(&___nl__16);
#line 486
c_rt_lib0copy(&___nl__3, ___nl__13);
#line 486
c_rt_lib0clear(&___nl__13);
#line 487
goto label_356;
#line 487
label_356:
#line 487
c_rt_lib0clear(&___nl__12);
#line 488
c_rt_lib0move(&___nl__12, hash0size(___nl__3));
#line 488
c_rt_lib0move(&___nl__13,___get_global_const(0));
#line 488
c_rt_lib0move(&___nl__12, c_rt_lib0gt(___nl__12, ___nl__13));
#line 488
c_rt_lib0clear(&___nl__13);
#line 488
c_rt_lib0move(&___nl__12, c_rt_lib0not(___nl__12));
#line 488
if(c_rt_lib0check_true_native(___nl__12)){ goto label_380;}
#line 489
c_rt_lib0move(&___nl__13,___get_global_const(123));
#line 489
c_rt_lib0move(&___nl__14, hash0size(___nl__3));
#line 489
c_rt_lib0move(&___nl__13, c_rt_lib0concat_add(___nl__13, ___nl__14));
#line 489
c_rt_lib0clear(&___nl__14);
#line 489
c_rt_lib0move(&___nl__14,___get_global_const(124));
#line 489
c_rt_lib0move(&___nl__13, c_rt_lib0concat_add(___nl__13, ___nl__14));
#line 489
c_rt_lib0clear(&___nl__14);
#line 490
c_rt_lib0move(&___nl__14, string0lf());
#line 490
c_rt_lib0move(&___nl__15,___get_global_const(122));
#line 490
c_rt_lib0move(&___nl__14, c_rt_lib0concat_add(___nl__14, ___nl__15));
#line 490
c_rt_lib0clear(&___nl__15);
#line 490
c_rt_lib0move(&___nl__14, c_rt_lib0concat_add(___nl__14, ___nl__13));
#line 490
c_rt_lib0delete(c_fe_lib0print(___nl__14));
#line 490
c_rt_lib0clear(&___nl__14);
#line 490
c_rt_lib0clear(&___nl__13);
#line 491
goto label_399;
#line 491
label_380:
#line 492
c_rt_lib0move(&___nl__13, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(69)));
#line 492
c_rt_lib0move(&___nl__13, c_rt_lib0priv_is(___nl__13, ___get_global_const(58)));
#line 492
c_rt_lib0move(&___nl__13, c_rt_lib0not(___nl__13));
#line 492
if(c_rt_lib0check_true_native(___nl__13)){ goto label_390;}
#line 492
c_rt_lib0move(&___nl__14, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(69)));
#line 492
c_rt_lib0move(&___nl__14, c_rt_lib0priv_as(___nl__14, ___get_global_const(58)));
#line 492
c_rt_lib0delete(c_fe_lib0exec_cmd(___nl__14));
#line 492
c_rt_lib0clear(&___nl__14);
#line 492
goto label_390;
#line 492
label_390:
#line 492
c_rt_lib0clear(&___nl__13);
#line 493
c_rt_lib0move(&___nl__13, string0lf());
#line 493
c_rt_lib0move(&___nl__14,___get_global_const(125));
#line 493
c_rt_lib0move(&___nl__13, c_rt_lib0concat_add(___nl__13, ___nl__14));
#line 493
c_rt_lib0clear(&___nl__14);
#line 493
c_rt_lib0delete(c_fe_lib0print(___nl__13));
#line 493
c_rt_lib0clear(&___nl__13);
#line 494
goto label_399;
#line 494
label_399:
#line 494
c_rt_lib0clear(&___nl__12);
#line 495
c_rt_lib0move(&___nl__12,___get_global_const(119));
#line 495
c_rt_lib0delete(c_fe_lib0print(___nl__12));
#line 495
c_rt_lib0clear(&___nl__12);
#line 495
c_rt_lib0clear(&___nl__9);
#line 495
c_rt_lib0clear(&___nl__10);
#line 495
c_rt_lib0clear(&___nl__11);
#line 405
goto label_24;
#line 405
c_rt_lib0clear(&___nl__1);
#line 405
c_rt_lib0clear(&___nl__2);
#line 405
c_rt_lib0clear(&___nl__3);
#line 405
c_rt_lib0clear(&___nl__4);
#line 405
c_rt_lib0clear(&___nl__5);
#line 405
c_rt_lib0clear(&___nl__6);
#line 405
c_rt_lib0clear(&___nl__7);
#line 405
c_rt_lib0clear(&___nl__8);
#line 405
c_rt_lib0clear(&___nl__0);
#line 405
return NULL;
}

ImmT compiler_priv0compile_strict_file(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
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
#line 500
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(0));
#line 502
c_rt_lib0move(&___nl__3, c_rt_lib0hash_mk(0));
#line 503
c_rt_lib0move(&___nl__4, c_rt_lib0hash_mk(0));
#line 504
c_rt_lib0move(&___nl__5, c_rt_lib0hash_mk(0));
#line 505
c_rt_lib0move(&___nl__6, c_rt_lib0hash_mk(0));
#line 506
c_rt_lib0move(&___nl__7, c_rt_lib0ov_mk_none(___get_global_const(48)));
#line 506
c_rt_lib0move(&___nl__2, c_rt_lib0hash_mk(5, ___get_global_const(26), ___nl__3, ___get_global_const(27), ___nl__4, ___get_global_const(28), ___nl__5, ___get_global_const(29), ___nl__6, ___get_global_const(30), ___nl__7));
#line 506
c_rt_lib0clear(&___nl__3);
#line 506
c_rt_lib0clear(&___nl__4);
#line 506
c_rt_lib0clear(&___nl__5);
#line 506
c_rt_lib0clear(&___nl__6);
#line 506
c_rt_lib0clear(&___nl__7);
#line 509
c_rt_lib0move(&___nl__3,___get_global_const(126));
#line 509
c_rt_lib0delete(profile0begin(___nl__3));
#line 509
c_rt_lib0clear(&___nl__3);
#line 510
c_rt_lib0move(&___nl__3,___get_global_const(0));
#line 511
c_rt_lib0move(&___nl__4, compiler_priv0get_files_to_parse(___nl__0));
#line 512
c_rt_lib0move(&___nl__7, c_rt_lib0init_iter(___nl__4));
#line 512
label_18:
#line 512
c_rt_lib0move(&___nl__5, c_rt_lib0is_end_hash(___nl__7));
#line 512
if(c_rt_lib0check_true_native(___nl__5)){ goto label_50;}
#line 512
c_rt_lib0move(&___nl__5, c_rt_lib0get_key_iter(___nl__7));
#line 512
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value(___nl__4, ___nl__5));
#line 513
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__6, ___get_global_const(43)));
#line 513
c_rt_lib0move(&___nl__8, compiler_priv0parse_module(___nl__5, ___nl__9, &___nl__2));
#line 513
c_rt_lib0clear(&___nl__9);
#line 513
c_rt_lib0move(&___nl__9, c_rt_lib0priv_is(___nl__8, ___get_global_const(48)));
#line 513
if(c_rt_lib0check_true_native(___nl__9)){ goto label_33;}
#line 515
c_rt_lib0move(&___nl__9, c_rt_lib0priv_is(___nl__8, ___get_global_const(47)));
#line 515
if(c_rt_lib0check_true_native(___nl__9)){ goto label_38;}
#line 515
c_rt_lib0move(&___nl__9,___get_global_const(91));
#line 515
c_rt_lib0move(&___nl__9, c_rt_lib0array_mk(2, ___nl__9, ___nl__8));
#line 515
nl_die_arg(___nl__9);
#line 513
label_33:
#line 513
c_rt_lib0move(&___nl__10, c_rt_lib0priv_as(___nl__8, ___get_global_const(48)));
#line 514
c_rt_lib0delete(hash0set_value(&___nl__1, ___nl__5, ___nl__10));
#line 514
c_rt_lib0clear(&___nl__10);
#line 515
goto label_45;
#line 515
label_38:
#line 515
c_rt_lib0move(&___nl__10, c_rt_lib0priv_as(___nl__8, ___get_global_const(47)));
#line 516
c_rt_lib0move(&___nl__11,___get_global_const(1));
#line 516
c_rt_lib0move(&___nl__3, c_rt_lib0add_mod(___nl__3, ___nl__11));
#line 516
c_rt_lib0clear(&___nl__11);
#line 516
c_rt_lib0clear(&___nl__10);
#line 517
goto label_45;
#line 517
label_45:
#line 517
c_rt_lib0clear(&___nl__8);
#line 517
c_rt_lib0clear(&___nl__9);
#line 518
c_rt_lib0move(&___nl__7, c_rt_lib0next_iter(___nl__7));
#line 518
goto label_18;
#line 518
label_50:
#line 518
c_rt_lib0clear(&___nl__5);
#line 518
c_rt_lib0clear(&___nl__6);
#line 518
c_rt_lib0clear(&___nl__7);
#line 519
c_rt_lib0move(&___nl__5,___get_global_const(126));
#line 519
c_rt_lib0delete(profile0end(___nl__5));
#line 519
c_rt_lib0clear(&___nl__5);
#line 520
c_rt_lib0move(&___nl__5,___get_global_const(0));
#line 520
c_rt_lib0move(&___nl__5, c_rt_lib0num_ne(___nl__3, ___nl__5));
#line 520
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 520
if(c_rt_lib0check_true_native(___nl__5)){ goto label_72;}
#line 521
c_rt_lib0delete(compiler_priv0show_and_count_errors(___nl__2, ___nl__0, ___nl__4));
#line 522
c_rt_lib0move(&___nl__6,___get_global_const(1));
#line 522
c_rt_lib0clear(&___nl__0);
#line 522
c_rt_lib0clear(&___nl__1);
#line 522
c_rt_lib0clear(&___nl__2);
#line 522
c_rt_lib0clear(&___nl__3);
#line 522
c_rt_lib0clear(&___nl__4);
#line 522
c_rt_lib0clear(&___nl__5);
#line 522
return ___nl__6;
#line 522
c_rt_lib0clear(&___nl__6);
#line 523
goto label_72;
#line 523
label_72:
#line 523
c_rt_lib0clear(&___nl__5);
#line 525
c_rt_lib0move(&___nl__5,___get_global_const(127));
#line 525
c_rt_lib0delete(profile0begin(___nl__5));
#line 525
c_rt_lib0clear(&___nl__5);
#line 526
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(66)));
#line 526
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(72)));
#line 526
c_rt_lib0delete(compiler_priv0check_modules(___nl__1, &___nl__2, ___nl__5, ___nl__6));
#line 526
c_rt_lib0clear(&___nl__6);
#line 526
c_rt_lib0clear(&___nl__5);
#line 527
c_rt_lib0move(&___nl__5,___get_global_const(128));
#line 527
c_rt_lib0delete(profile0end(___nl__5));
#line 527
c_rt_lib0clear(&___nl__5);
#line 528
c_rt_lib0move(&___nl__5, compiler_priv0show_and_count_errors(___nl__2, ___nl__0, ___nl__4));
#line 528
c_rt_lib0move(&___nl__6,___get_global_const(0));
#line 528
c_rt_lib0move(&___nl__5, c_rt_lib0gt(___nl__5, ___nl__6));
#line 528
c_rt_lib0clear(&___nl__6);
#line 528
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 528
if(c_rt_lib0check_true_native(___nl__5)){ goto label_101;}
#line 529
c_rt_lib0move(&___nl__6,___get_global_const(1));
#line 529
c_rt_lib0clear(&___nl__0);
#line 529
c_rt_lib0clear(&___nl__1);
#line 529
c_rt_lib0clear(&___nl__2);
#line 529
c_rt_lib0clear(&___nl__3);
#line 529
c_rt_lib0clear(&___nl__4);
#line 529
c_rt_lib0clear(&___nl__5);
#line 529
return ___nl__6;
#line 529
c_rt_lib0clear(&___nl__6);
#line 530
goto label_101;
#line 530
label_101:
#line 530
c_rt_lib0clear(&___nl__5);
#line 531
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(70)));
#line 531
c_rt_lib0move(&___nl__5, c_rt_lib0priv_is(___nl__5, ___get_global_const(36)));
#line 531
if(c_rt_lib0check_true_native(___nl__5)){ goto label_108;}
#line 531
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(70)));
#line 531
c_rt_lib0move(&___nl__5, c_rt_lib0priv_is(___nl__5, ___get_global_const(35)));
#line 531
label_108:
#line 531
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 531
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 531
if(c_rt_lib0check_true_native(___nl__5)){ goto label_151;}
#line 532
c_rt_lib0move(&___nl__6,___get_global_const(129));
#line 532
c_rt_lib0delete(profile0begin(___nl__6));
#line 532
c_rt_lib0clear(&___nl__6);
#line 533
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(70)));
#line 533
c_rt_lib0move(&___nl__6, compiler_priv0get_generator_state(___nl__7));
#line 533
c_rt_lib0clear(&___nl__7);
#line 534
c_rt_lib0move(&___nl__7,___get_global_const(120));
#line 534
c_rt_lib0delete(c_fe_lib0print(___nl__7));
#line 534
c_rt_lib0clear(&___nl__7);
#line 535
c_rt_lib0move(&___nl__8, compiler_priv0get_mathematical_func(___nl__0));
#line 535
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(67)));
#line 535
c_rt_lib0move(&___nl__7, post_processing0init(___nl__8, ___nl__9));
#line 535
c_rt_lib0clear(&___nl__9);
#line 535
c_rt_lib0clear(&___nl__8);
#line 536
c_rt_lib0move(&___nl__8,___get_global_const(129));
#line 536
c_rt_lib0delete(profile0end(___nl__8));
#line 536
c_rt_lib0clear(&___nl__8);
#line 538
c_rt_lib0move(&___nl__8,___get_global_const(130));
#line 538
c_rt_lib0delete(profile0begin(___nl__8));
#line 538
c_rt_lib0clear(&___nl__8);
#line 539
c_rt_lib0move(&___nl__8, compiler_priv0translate(___nl__1, &___nl__7));
#line 540
c_rt_lib0move(&___nl__9,___get_global_const(130));
#line 540
c_rt_lib0delete(profile0end(___nl__9));
#line 540
c_rt_lib0clear(&___nl__9);
#line 542
c_rt_lib0move(&___nl__9,___get_global_const(131));
#line 542
c_rt_lib0delete(profile0begin(___nl__9));
#line 542
c_rt_lib0clear(&___nl__9);
#line 543
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(65)));
#line 543
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(70)));
#line 543
c_rt_lib0delete(compiler_priv0generate_modules_to_files(___nl__8, ___nl__4, ___nl__9, &___nl__6, ___nl__10));
#line 543
c_rt_lib0clear(&___nl__10);
#line 543
c_rt_lib0clear(&___nl__9);
#line 544
c_rt_lib0move(&___nl__9,___get_global_const(131));
#line 544
c_rt_lib0delete(profile0end(___nl__9));
#line 544
c_rt_lib0clear(&___nl__9);
#line 544
c_rt_lib0clear(&___nl__6);
#line 544
c_rt_lib0clear(&___nl__7);
#line 544
c_rt_lib0clear(&___nl__8);
#line 545
goto label_210;
#line 545
label_151:
#line 546
c_rt_lib0move(&___nl__8, c_rt_lib0init_iter(___nl__1));
#line 546
label_153:
#line 546
c_rt_lib0move(&___nl__6, c_rt_lib0is_end_hash(___nl__8));
#line 546
if(c_rt_lib0check_true_native(___nl__6)){ goto label_205;}
#line 546
c_rt_lib0move(&___nl__6, c_rt_lib0get_key_iter(___nl__8));
#line 546
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value(___nl__1, ___nl__6));
#line 547
c_rt_lib0move(&___nl__9,___get_global_const(121));
#line 547
c_rt_lib0move(&___nl__9, c_rt_lib0concat_add(___nl__9, ___nl__6));
#line 547
c_rt_lib0delete(c_fe_lib0print(___nl__9));
#line 547
c_rt_lib0clear(&___nl__9);
#line 548
c_rt_lib0move(&___nl__10, hash0get_value(___nl__4, ___nl__6));
#line 548
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__10, ___get_global_const(44)));
#line 548
c_rt_lib0move(&___nl__9, compiler_priv0save_module_to_file(___nl__7, ___nl__10));
#line 548
c_rt_lib0clear(&___nl__10);
#line 548
c_rt_lib0move(&___nl__10, c_rt_lib0priv_is(___nl__9, ___get_global_const(47)));
#line 548
if(c_rt_lib0check_true_native(___nl__10)){ goto label_173;}
#line 551
c_rt_lib0move(&___nl__10, c_rt_lib0priv_is(___nl__9, ___get_global_const(48)));
#line 551
if(c_rt_lib0check_true_native(___nl__10)){ goto label_196;}
#line 551
c_rt_lib0move(&___nl__10,___get_global_const(91));
#line 551
c_rt_lib0move(&___nl__10, c_rt_lib0array_mk(2, ___nl__10, ___nl__9));
#line 551
nl_die_arg(___nl__10);
#line 548
label_173:
#line 548
c_rt_lib0move(&___nl__11, c_rt_lib0priv_as(___nl__9, ___get_global_const(47)));
#line 549
c_rt_lib0move(&___nl__12,___get_global_const(122));
#line 549
c_rt_lib0move(&___nl__12, c_rt_lib0concat_add(___nl__12, ___nl__11));
#line 549
c_rt_lib0delete(c_fe_lib0print(___nl__12));
#line 549
c_rt_lib0clear(&___nl__12);
#line 550
c_rt_lib0move(&___nl__12,___get_global_const(1));
#line 550
c_rt_lib0clear(&___nl__0);
#line 550
c_rt_lib0clear(&___nl__1);
#line 550
c_rt_lib0clear(&___nl__2);
#line 550
c_rt_lib0clear(&___nl__3);
#line 550
c_rt_lib0clear(&___nl__4);
#line 550
c_rt_lib0clear(&___nl__5);
#line 550
c_rt_lib0clear(&___nl__6);
#line 550
c_rt_lib0clear(&___nl__7);
#line 550
c_rt_lib0clear(&___nl__8);
#line 550
c_rt_lib0clear(&___nl__9);
#line 550
c_rt_lib0clear(&___nl__10);
#line 550
c_rt_lib0clear(&___nl__11);
#line 550
return ___nl__12;
#line 550
c_rt_lib0clear(&___nl__12);
#line 550
c_rt_lib0clear(&___nl__11);
#line 551
goto label_200;
#line 551
label_196:
#line 551
c_rt_lib0move(&___nl__11, c_rt_lib0priv_as(___nl__9, ___get_global_const(48)));
#line 551
c_rt_lib0clear(&___nl__11);
#line 552
goto label_200;
#line 552
label_200:
#line 552
c_rt_lib0clear(&___nl__9);
#line 552
c_rt_lib0clear(&___nl__10);
#line 553
c_rt_lib0move(&___nl__8, c_rt_lib0next_iter(___nl__8));
#line 553
goto label_153;
#line 553
label_205:
#line 553
c_rt_lib0clear(&___nl__6);
#line 553
c_rt_lib0clear(&___nl__7);
#line 553
c_rt_lib0clear(&___nl__8);
#line 554
goto label_210;
#line 554
label_210:
#line 554
c_rt_lib0clear(&___nl__5);
#line 555
c_rt_lib0move(&___nl__5,___get_global_const(0));
#line 555
c_rt_lib0clear(&___nl__0);
#line 555
c_rt_lib0clear(&___nl__1);
#line 555
c_rt_lib0clear(&___nl__2);
#line 555
c_rt_lib0clear(&___nl__3);
#line 555
c_rt_lib0clear(&___nl__4);
#line 555
return ___nl__5;
#line 555
c_rt_lib0clear(&___nl__5);
#line 555
c_rt_lib0clear(&___nl__1);
#line 555
c_rt_lib0clear(&___nl__2);
#line 555
c_rt_lib0clear(&___nl__3);
#line 555
c_rt_lib0clear(&___nl__4);
#line 555
c_rt_lib0clear(&___nl__0);
#line 555
return NULL;
}

ImmT compiler_priv0construct_error_message(ImmT ___nl__0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
#line 559
c_rt_lib0move(&___nl__2,___get_global_const(2));
#line 563
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(132)));
#line 563
c_rt_lib0move(&___nl__3, string0length(___nl__4));
#line 563
c_rt_lib0clear(&___nl__4);
#line 563
c_rt_lib0move(&___nl__4,___get_global_const(0));
#line 563
c_rt_lib0move(&___nl__3, c_rt_lib0num_eq(___nl__3, ___nl__4));
#line 563
c_rt_lib0clear(&___nl__4);
#line 563
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 563
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 563
if(c_rt_lib0check_true_native(___nl__3)){ goto label_28;}
#line 560
c_rt_lib0move(&___nl__4,___get_global_const(133));
#line 560
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(132)));
#line 560
c_rt_lib0move(&___nl__5, hash0has_key(___nl__1, ___nl__6));
#line 560
c_rt_lib0clear(&___nl__6);
#line 560
if(c_rt_lib0check_true_native(___nl__5)){ goto label_17;}
#line 562
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(132)));
#line 562
goto label_22;
#line 562
label_17:
#line 561
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(132)));
#line 561
c_rt_lib0move(&___nl__5, hash0get_value(___nl__1, ___nl__6));
#line 561
c_rt_lib0clear(&___nl__6);
#line 561
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(43)));
#line 561
label_22:
#line 561
c_rt_lib0move(&___nl__4, c_rt_lib0concat_add(___nl__4, ___nl__5));
#line 561
c_rt_lib0clear(&___nl__5);
#line 561
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__4));
#line 561
c_rt_lib0clear(&___nl__4);
#line 561
goto label_28;
#line 561
label_28:
#line 561
c_rt_lib0clear(&___nl__3);
#line 564
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(134)));
#line 564
c_rt_lib0move(&___nl__3, string0length(___nl__4));
#line 564
c_rt_lib0clear(&___nl__4);
#line 564
c_rt_lib0move(&___nl__4,___get_global_const(0));
#line 564
c_rt_lib0move(&___nl__3, c_rt_lib0num_eq(___nl__3, ___nl__4));
#line 564
c_rt_lib0clear(&___nl__4);
#line 564
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 564
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 564
if(c_rt_lib0check_true_native(___nl__3)){ goto label_46;}
#line 564
c_rt_lib0move(&___nl__4,___get_global_const(135));
#line 564
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(134)));
#line 564
c_rt_lib0move(&___nl__4, c_rt_lib0concat_add(___nl__4, ___nl__5));
#line 564
c_rt_lib0clear(&___nl__5);
#line 564
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__4));
#line 564
c_rt_lib0clear(&___nl__4);
#line 564
goto label_46;
#line 564
label_46:
#line 564
c_rt_lib0clear(&___nl__3);
#line 565
c_rt_lib0move(&___nl__3, string0lf());
#line 565
c_rt_lib0move(&___nl__4,___get_global_const(136));
#line 565
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 565
c_rt_lib0clear(&___nl__4);
#line 565
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(137)));
#line 565
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 565
c_rt_lib0clear(&___nl__4);
#line 565
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__3));
#line 565
c_rt_lib0clear(&___nl__3);
#line 566
c_rt_lib0clear(&___nl__0);
#line 566
c_rt_lib0clear(&___nl__1);
#line 566
return ___nl__2;
#line 566
c_rt_lib0clear(&___nl__2);
#line 566
c_rt_lib0clear(&___nl__0);
#line 566
c_rt_lib0clear(&___nl__1);
#line 566
return NULL;
}

ImmT compiler_priv0show_and_count_errors(ImmT ___nl__0,ImmT ___nl__1,ImmT ___nl__2) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
c_rt_lib0arg_val(___nl__2);
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
#line 570
c_rt_lib0move(&___nl__3,___get_global_const(0));
#line 571
c_rt_lib0move(&___nl__4,___get_global_const(0));
#line 572
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(27)));
#line 572
c_rt_lib0move(&___nl__8, c_rt_lib0init_iter(___nl__5));
#line 572
label_4:
#line 572
c_rt_lib0move(&___nl__6, c_rt_lib0is_end_hash(___nl__8));
#line 572
if(c_rt_lib0check_true_native(___nl__6)){ goto label_146;}
#line 572
c_rt_lib0move(&___nl__6, c_rt_lib0get_key_iter(___nl__8));
#line 572
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value(___nl__5, ___nl__6));
#line 573
c_rt_lib0move(&___nl__9,___get_global_const(138));
#line 574
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(71)));
#line 574
c_rt_lib0move(&___nl__10, c_rt_lib0priv_is(___nl__10, ___get_global_const(61)));
#line 574
c_rt_lib0move(&___nl__10, c_rt_lib0not(___nl__10));
#line 574
if(c_rt_lib0check_true_native(___nl__10)){ goto label_18;}
#line 574
c_rt_lib0move(&___nl__11,___get_global_const(139));
#line 574
c_rt_lib0copy(&___nl__9, ___nl__11);
#line 574
c_rt_lib0clear(&___nl__11);
#line 574
goto label_18;
#line 574
label_18:
#line 574
c_rt_lib0clear(&___nl__10);
#line 575
c_rt_lib0move(&___nl__11,___get_global_const(0));
#line 575
c_rt_lib0move(&___nl__12,___get_global_const(1));
#line 575
c_rt_lib0move(&___nl__13, c_rt_lib0array_len(___nl__7));
#line 575
label_23:
#line 575
c_rt_lib0move(&___nl__14, c_rt_lib0ge(___nl__11, ___nl__13));
#line 575
if(c_rt_lib0check_true_native(___nl__14)){ goto label_33;}
#line 575
c_rt_lib0move(&___nl__10, c_rt_lib0array_get(___nl__7, ___nl__11));
#line 576
c_rt_lib0move(&___nl__15, compiler_priv0construct_error_message(___nl__10, ___nl__2));
#line 576
c_rt_lib0move(&___nl__15, c_rt_lib0concat_new(___nl__9, ___nl__15));
#line 576
c_rt_lib0delete(c_fe_lib0print(___nl__15));
#line 576
c_rt_lib0clear(&___nl__15);
#line 577
c_rt_lib0move(&___nl__11, c_rt_lib0add_mod(___nl__11, ___nl__12));
#line 577
goto label_23;
#line 577
label_33:
#line 577
c_rt_lib0clear(&___nl__10);
#line 577
c_rt_lib0clear(&___nl__11);
#line 577
c_rt_lib0clear(&___nl__12);
#line 577
c_rt_lib0clear(&___nl__13);
#line 577
c_rt_lib0clear(&___nl__14);
#line 578
c_rt_lib0move(&___nl__10, array0len(___nl__7));
#line 578
c_rt_lib0move(&___nl__3, c_rt_lib0add_mod(___nl__3, ___nl__10));
#line 578
c_rt_lib0clear(&___nl__10);
#line 579
c_rt_lib0move(&___nl__11, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(29)));
#line 579
c_rt_lib0move(&___nl__10, hash0has_key(___nl__11, ___nl__6));
#line 579
c_rt_lib0clear(&___nl__11);
#line 579
c_rt_lib0move(&___nl__10, c_rt_lib0not(___nl__10));
#line 579
if(c_rt_lib0check_true_native(___nl__10)){ goto label_74;}
#line 580
c_rt_lib0move(&___nl__12, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(29)));
#line 580
c_rt_lib0move(&___nl__11, hash0get_value(___nl__12, ___nl__6));
#line 580
c_rt_lib0clear(&___nl__12);
#line 581
c_rt_lib0move(&___nl__13,___get_global_const(0));
#line 581
c_rt_lib0move(&___nl__14,___get_global_const(1));
#line 581
c_rt_lib0move(&___nl__15, c_rt_lib0array_len(___nl__11));
#line 581
label_53:
#line 581
c_rt_lib0move(&___nl__16, c_rt_lib0ge(___nl__13, ___nl__15));
#line 581
if(c_rt_lib0check_true_native(___nl__16)){ goto label_63;}
#line 581
c_rt_lib0move(&___nl__12, c_rt_lib0array_get(___nl__11, ___nl__13));
#line 582
c_rt_lib0move(&___nl__17, compiler_priv0construct_error_message(___nl__12, ___nl__2));
#line 582
c_rt_lib0move(&___nl__17, c_rt_lib0concat_new(___nl__9, ___nl__17));
#line 582
c_rt_lib0delete(c_fe_lib0print(___nl__17));
#line 582
c_rt_lib0clear(&___nl__17);
#line 583
c_rt_lib0move(&___nl__13, c_rt_lib0add_mod(___nl__13, ___nl__14));
#line 583
goto label_53;
#line 583
label_63:
#line 583
c_rt_lib0clear(&___nl__12);
#line 583
c_rt_lib0clear(&___nl__13);
#line 583
c_rt_lib0clear(&___nl__14);
#line 583
c_rt_lib0clear(&___nl__15);
#line 583
c_rt_lib0clear(&___nl__16);
#line 584
c_rt_lib0move(&___nl__12, array0len(___nl__11));
#line 584
c_rt_lib0move(&___nl__3, c_rt_lib0add_mod(___nl__3, ___nl__12));
#line 584
c_rt_lib0clear(&___nl__12);
#line 584
c_rt_lib0clear(&___nl__11);
#line 585
goto label_74;
#line 585
label_74:
#line 585
c_rt_lib0clear(&___nl__10);
#line 586
c_rt_lib0move(&___nl__10,___get_global_const(139));
#line 586
c_rt_lib0copy(&___nl__9, ___nl__10);
#line 586
c_rt_lib0clear(&___nl__10);
#line 587
c_rt_lib0move(&___nl__11, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(26)));
#line 587
c_rt_lib0move(&___nl__10, hash0get_value(___nl__11, ___nl__6));
#line 587
c_rt_lib0clear(&___nl__11);
#line 588
c_rt_lib0move(&___nl__12,___get_global_const(0));
#line 588
c_rt_lib0move(&___nl__13,___get_global_const(1));
#line 588
c_rt_lib0move(&___nl__14, c_rt_lib0array_len(___nl__10));
#line 588
label_85:
#line 588
c_rt_lib0move(&___nl__15, c_rt_lib0ge(___nl__12, ___nl__14));
#line 588
if(c_rt_lib0check_true_native(___nl__15)){ goto label_97;}
#line 588
c_rt_lib0move(&___nl__11, c_rt_lib0array_get(___nl__10, ___nl__12));
#line 589
c_rt_lib0move(&___nl__16,___get_global_const(139));
#line 589
c_rt_lib0move(&___nl__17, compiler_priv0construct_error_message(___nl__11, ___nl__2));
#line 589
c_rt_lib0move(&___nl__16, c_rt_lib0concat_add(___nl__16, ___nl__17));
#line 589
c_rt_lib0clear(&___nl__17);
#line 589
c_rt_lib0delete(c_fe_lib0print(___nl__16));
#line 589
c_rt_lib0clear(&___nl__16);
#line 590
c_rt_lib0move(&___nl__12, c_rt_lib0add_mod(___nl__12, ___nl__13));
#line 590
goto label_85;
#line 590
label_97:
#line 590
c_rt_lib0clear(&___nl__11);
#line 590
c_rt_lib0clear(&___nl__12);
#line 590
c_rt_lib0clear(&___nl__13);
#line 590
c_rt_lib0clear(&___nl__14);
#line 590
c_rt_lib0clear(&___nl__15);
#line 591
c_rt_lib0move(&___nl__11, array0len(___nl__10));
#line 591
c_rt_lib0move(&___nl__4, c_rt_lib0add_mod(___nl__4, ___nl__11));
#line 591
c_rt_lib0clear(&___nl__11);
#line 592
c_rt_lib0move(&___nl__12, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(28)));
#line 592
c_rt_lib0move(&___nl__11, hash0has_key(___nl__12, ___nl__6));
#line 592
c_rt_lib0clear(&___nl__12);
#line 592
c_rt_lib0move(&___nl__11, c_rt_lib0not(___nl__11));
#line 592
if(c_rt_lib0check_true_native(___nl__11)){ goto label_140;}
#line 593
c_rt_lib0move(&___nl__13, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(28)));
#line 593
c_rt_lib0move(&___nl__12, hash0get_value(___nl__13, ___nl__6));
#line 593
c_rt_lib0clear(&___nl__13);
#line 594
c_rt_lib0move(&___nl__14,___get_global_const(0));
#line 594
c_rt_lib0move(&___nl__15,___get_global_const(1));
#line 594
c_rt_lib0move(&___nl__16, c_rt_lib0array_len(___nl__12));
#line 594
label_117:
#line 594
c_rt_lib0move(&___nl__17, c_rt_lib0ge(___nl__14, ___nl__16));
#line 594
if(c_rt_lib0check_true_native(___nl__17)){ goto label_129;}
#line 594
c_rt_lib0move(&___nl__13, c_rt_lib0array_get(___nl__12, ___nl__14));
#line 595
c_rt_lib0move(&___nl__18,___get_global_const(139));
#line 595
c_rt_lib0move(&___nl__19, compiler_priv0construct_error_message(___nl__13, ___nl__2));
#line 595
c_rt_lib0move(&___nl__18, c_rt_lib0concat_add(___nl__18, ___nl__19));
#line 595
c_rt_lib0clear(&___nl__19);
#line 595
c_rt_lib0delete(c_fe_lib0print(___nl__18));
#line 595
c_rt_lib0clear(&___nl__18);
#line 596
c_rt_lib0move(&___nl__14, c_rt_lib0add_mod(___nl__14, ___nl__15));
#line 596
goto label_117;
#line 596
label_129:
#line 596
c_rt_lib0clear(&___nl__13);
#line 596
c_rt_lib0clear(&___nl__14);
#line 596
c_rt_lib0clear(&___nl__15);
#line 596
c_rt_lib0clear(&___nl__16);
#line 596
c_rt_lib0clear(&___nl__17);
#line 597
c_rt_lib0move(&___nl__13, array0len(___nl__12));
#line 597
c_rt_lib0move(&___nl__4, c_rt_lib0add_mod(___nl__4, ___nl__13));
#line 597
c_rt_lib0clear(&___nl__13);
#line 597
c_rt_lib0clear(&___nl__12);
#line 598
goto label_140;
#line 598
label_140:
#line 598
c_rt_lib0clear(&___nl__11);
#line 598
c_rt_lib0clear(&___nl__9);
#line 598
c_rt_lib0clear(&___nl__10);
#line 599
c_rt_lib0move(&___nl__8, c_rt_lib0next_iter(___nl__8));
#line 599
goto label_4;
#line 599
label_146:
#line 599
c_rt_lib0clear(&___nl__5);
#line 599
c_rt_lib0clear(&___nl__6);
#line 599
c_rt_lib0clear(&___nl__7);
#line 599
c_rt_lib0clear(&___nl__8);
#line 600
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(30)));
#line 600
c_rt_lib0move(&___nl__6, c_rt_lib0priv_is(___nl__5, ___get_global_const(140)));
#line 600
if(c_rt_lib0check_true_native(___nl__6)){ goto label_159;}
#line 607
c_rt_lib0move(&___nl__6, c_rt_lib0priv_is(___nl__5, ___get_global_const(48)));
#line 607
if(c_rt_lib0check_true_native(___nl__6)){ goto label_194;}
#line 607
c_rt_lib0move(&___nl__6,___get_global_const(91));
#line 607
c_rt_lib0move(&___nl__6, c_rt_lib0array_mk(2, ___nl__6, ___nl__5));
#line 607
nl_die_arg(___nl__6);
#line 600
label_159:
#line 600
c_rt_lib0move(&___nl__7, c_rt_lib0priv_as(___nl__5, ___get_global_const(140)));
#line 601
c_rt_lib0move(&___nl__8,___get_global_const(2));
#line 602
c_rt_lib0move(&___nl__10,___get_global_const(0));
#line 602
c_rt_lib0move(&___nl__11,___get_global_const(1));
#line 602
c_rt_lib0move(&___nl__12, c_rt_lib0array_len(___nl__7));
#line 602
label_165:
#line 602
c_rt_lib0move(&___nl__13, c_rt_lib0ge(___nl__10, ___nl__12));
#line 602
if(c_rt_lib0check_true_native(___nl__13)){ goto label_175;}
#line 602
c_rt_lib0move(&___nl__9, c_rt_lib0array_get(___nl__7, ___nl__10));
#line 603
c_rt_lib0move(&___nl__14,___get_global_const(141));
#line 603
c_rt_lib0move(&___nl__14, c_rt_lib0concat_new(___nl__9, ___nl__14));
#line 603
c_rt_lib0move(&___nl__8, c_rt_lib0concat_add(___nl__8, ___nl__14));
#line 603
c_rt_lib0clear(&___nl__14);
#line 604
c_rt_lib0move(&___nl__10, c_rt_lib0add_mod(___nl__10, ___nl__11));
#line 604
goto label_165;
#line 604
label_175:
#line 604
c_rt_lib0clear(&___nl__9);
#line 604
c_rt_lib0clear(&___nl__10);
#line 604
c_rt_lib0clear(&___nl__11);
#line 604
c_rt_lib0clear(&___nl__12);
#line 604
c_rt_lib0clear(&___nl__13);
#line 605
c_rt_lib0move(&___nl__9,___get_global_const(142));
#line 605
c_rt_lib0move(&___nl__9, c_rt_lib0concat_add(___nl__9, ___nl__8));
#line 605
c_rt_lib0move(&___nl__10,___get_global_const(143));
#line 605
c_rt_lib0move(&___nl__9, c_rt_lib0concat_add(___nl__9, ___nl__10));
#line 605
c_rt_lib0clear(&___nl__10);
#line 605
c_rt_lib0delete(c_fe_lib0print(___nl__9));
#line 605
c_rt_lib0clear(&___nl__9);
#line 606
c_rt_lib0move(&___nl__9,___get_global_const(1));
#line 606
c_rt_lib0move(&___nl__4, c_rt_lib0add_mod(___nl__4, ___nl__9));
#line 606
c_rt_lib0clear(&___nl__9);
#line 606
c_rt_lib0clear(&___nl__8);
#line 606
c_rt_lib0clear(&___nl__7);
#line 607
goto label_196;
#line 607
label_194:
#line 608
goto label_196;
#line 608
label_196:
#line 608
c_rt_lib0clear(&___nl__5);
#line 608
c_rt_lib0clear(&___nl__6);
#line 609
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(71)));
#line 609
c_rt_lib0move(&___nl__5, c_rt_lib0priv_is(___nl__5, ___get_global_const(61)));
#line 609
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 609
if(c_rt_lib0check_true_native(___nl__5)){ goto label_208;}
#line 610
c_rt_lib0move(&___nl__4, c_rt_lib0add_mod(___nl__4, ___nl__3));
#line 611
c_rt_lib0move(&___nl__6,___get_global_const(0));
#line 611
c_rt_lib0copy(&___nl__3, ___nl__6);
#line 611
c_rt_lib0clear(&___nl__6);
#line 612
goto label_208;
#line 612
label_208:
#line 612
c_rt_lib0clear(&___nl__5);
#line 613
c_rt_lib0move(&___nl__5,___get_global_const(144));
#line 613
c_rt_lib0move(&___nl__5, c_rt_lib0concat_add(___nl__5, ___nl__4));
#line 613
c_rt_lib0move(&___nl__6,___get_global_const(145));
#line 613
c_rt_lib0move(&___nl__5, c_rt_lib0concat_add(___nl__5, ___nl__6));
#line 613
c_rt_lib0clear(&___nl__6);
#line 613
c_rt_lib0move(&___nl__5, c_rt_lib0concat_add(___nl__5, ___nl__3));
#line 613
c_rt_lib0delete(c_fe_lib0print(___nl__5));
#line 613
c_rt_lib0clear(&___nl__5);
#line 614
c_rt_lib0clear(&___nl__0);
#line 614
c_rt_lib0clear(&___nl__1);
#line 614
c_rt_lib0clear(&___nl__2);
#line 614
c_rt_lib0clear(&___nl__3);
#line 614
return ___nl__4;
#line 614
c_rt_lib0clear(&___nl__3);
#line 614
c_rt_lib0clear(&___nl__4);
#line 614
c_rt_lib0clear(&___nl__0);
#line 614
c_rt_lib0clear(&___nl__1);
#line 614
c_rt_lib0clear(&___nl__2);
#line 614
return NULL;
}

ImmT compiler_priv0translate(ImmT ___nl__0,ImmT * ___ref___1) {
c_rt_lib0arg_val(___nl__0);
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
#line 618
c_rt_lib0move(&___nl__2, c_rt_lib0hash_mk(0));
#line 619
c_rt_lib0move(&___nl__5, c_rt_lib0init_iter(___nl__0));
#line 619
label_2:
#line 619
c_rt_lib0move(&___nl__3, c_rt_lib0is_end_hash(___nl__5));
#line 619
if(c_rt_lib0check_true_native(___nl__3)){ goto label_12;}
#line 619
c_rt_lib0move(&___nl__3, c_rt_lib0get_key_iter(___nl__5));
#line 619
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value(___nl__0, ___nl__3));
#line 620
c_rt_lib0move(&___nl__6, translator0translate(___nl__4));
#line 621
c_rt_lib0delete(hash0set_value(&___nl__2, ___nl__3, ___nl__6));
#line 621
c_rt_lib0clear(&___nl__6);
#line 622
c_rt_lib0move(&___nl__5, c_rt_lib0next_iter(___nl__5));
#line 622
goto label_2;
#line 622
label_12:
#line 622
c_rt_lib0clear(&___nl__3);
#line 622
c_rt_lib0clear(&___nl__4);
#line 622
c_rt_lib0clear(&___nl__5);
#line 623
c_rt_lib0delete(post_processing0find(___ref___1, &___nl__2));
#line 624
c_rt_lib0clear(&___nl__0);
#line 624
return ___nl__2;
#line 624
c_rt_lib0clear(&___nl__2);
#line 624
c_rt_lib0clear(&___nl__0);
#line 624
return NULL;
}

ImmT compiler_priv0check_modules(ImmT ___nl__0,ImmT * ___ref___1,ImmT ___nl__2,ImmT ___nl__3) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__2);
c_rt_lib0arg_val(___nl__3);
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
#line 629
c_rt_lib0move(&___nl__4,___get_global_const(146));
#line 629
c_rt_lib0delete(c_fe_lib0print(___nl__4));
#line 629
c_rt_lib0clear(&___nl__4);
#line 630
c_rt_lib0move(&___nl__4, type_checker0check_modules(___nl__0, ___nl__0));
#line 631
c_rt_lib0copy(&___nl__5, ___nl__3);
#line 631
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 631
if(c_rt_lib0check_true_native(___nl__5)){ goto label_62;}
#line 632
c_rt_lib0move(&___nl__6, c_rt_lib0hash_mk(0));
#line 633
c_rt_lib0move(&___nl__8,___get_global_const(147));
#line 633
c_rt_lib0move(&___nl__7, c_fe_lib0file_to_string(___nl__8));
#line 633
c_rt_lib0clear(&___nl__8);
#line 633
c_rt_lib0move(&___nl__8, c_rt_lib0priv_is(___nl__7, ___get_global_const(48)));
#line 633
if(c_rt_lib0check_true_native(___nl__8)){ goto label_18;}
#line 636
c_rt_lib0move(&___nl__8, c_rt_lib0priv_is(___nl__7, ___get_global_const(47)));
#line 636
if(c_rt_lib0check_true_native(___nl__8)){ goto label_32;}
#line 636
c_rt_lib0move(&___nl__8,___get_global_const(91));
#line 636
c_rt_lib0move(&___nl__8, c_rt_lib0array_mk(2, ___nl__8, ___nl__7));
#line 636
nl_die_arg(___nl__8);
#line 633
label_18:
#line 633
c_rt_lib0move(&___nl__9, c_rt_lib0priv_as(___nl__7, ___get_global_const(48)));
#line 634
c_rt_lib0move(&___nl__10, dfile0sload(___nl__9));
#line 634
c_rt_lib0copy(&___nl__6, ___nl__10);
#line 634
c_rt_lib0clear(&___nl__10);
#line 635
c_rt_lib0move(&___nl__12, ptd0sim());
#line 635
c_rt_lib0move(&___nl__11, ptd0hash(___nl__12));
#line 635
c_rt_lib0clear(&___nl__12);
#line 635
c_rt_lib0move(&___nl__10, ptd0ensure(___nl__11, ___nl__6));
#line 635
c_rt_lib0clear(&___nl__11);
#line 635
c_rt_lib0copy(&___nl__6, ___nl__10);
#line 635
c_rt_lib0clear(&___nl__10);
#line 635
c_rt_lib0clear(&___nl__9);
#line 636
goto label_36;
#line 636
label_32:
#line 636
c_rt_lib0move(&___nl__9, c_rt_lib0priv_as(___nl__7, ___get_global_const(47)));
#line 636
c_rt_lib0clear(&___nl__9);
#line 637
goto label_36;
#line 637
label_36:
#line 637
c_rt_lib0clear(&___nl__7);
#line 637
c_rt_lib0clear(&___nl__8);
#line 638
c_rt_lib0move(&___nl__7, c_rt_lib0hash_mk(0));
#line 639
c_rt_lib0move(&___nl__8, c_rt_lib0array_mk(0));
#line 640
c_rt_lib0move(&___nl__11, c_rt_lib0init_iter(___nl__0));
#line 640
label_42:
#line 640
c_rt_lib0move(&___nl__9, c_rt_lib0is_end_hash(___nl__11));
#line 640
if(c_rt_lib0check_true_native(___nl__9)){ goto label_53;}
#line 640
c_rt_lib0move(&___nl__9, c_rt_lib0get_key_iter(___nl__11));
#line 640
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value(___nl__0, ___nl__9));
#line 641
c_rt_lib0move(&___nl__12, c_rt_lib0get_true());
#line 641
c_rt_lib0delete(module_checker0check_module(___nl__10, ___nl__12, &___nl__7));
#line 641
c_rt_lib0clear(&___nl__12);
#line 642
c_rt_lib0delete(array0push(&___nl__8, ___nl__10));
#line 643
c_rt_lib0move(&___nl__11, c_rt_lib0next_iter(___nl__11));
#line 643
goto label_42;
#line 643
label_53:
#line 643
c_rt_lib0clear(&___nl__9);
#line 643
c_rt_lib0clear(&___nl__10);
#line 643
c_rt_lib0clear(&___nl__11);
#line 645
c_rt_lib0delete(module_checker0check_used_functions(___nl__6, ___nl__7, ___nl__8, &___nl__4));
#line 645
c_rt_lib0clear(&___nl__6);
#line 645
c_rt_lib0clear(&___nl__7);
#line 645
c_rt_lib0clear(&___nl__8);
#line 646
goto label_62;
#line 646
label_62:
#line 646
c_rt_lib0clear(&___nl__5);
#line 647
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(18)));
#line 647
c_rt_lib0move(&___nl__5, array0len(___nl__6));
#line 647
c_rt_lib0clear(&___nl__6);
#line 648
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(18)));
#line 648
c_rt_lib0move(&___nl__8,___get_global_const(0));
#line 648
c_rt_lib0move(&___nl__9,___get_global_const(1));
#line 648
c_rt_lib0move(&___nl__10, c_rt_lib0array_len(___nl__6));
#line 648
label_71:
#line 648
c_rt_lib0move(&___nl__11, c_rt_lib0ge(___nl__8, ___nl__10));
#line 648
if(c_rt_lib0check_true_native(___nl__11)){ goto label_106;}
#line 648
c_rt_lib0move(&___nl__7, c_rt_lib0array_get(___nl__6, ___nl__8));
#line 649
c_rt_lib0move(&___nl__12, c_rt_lib0array_mk(0));
#line 650
c_rt_lib0move(&___nl__14, c_rt_lib0hash_get_value_dec(*___ref___1, ___get_global_const(28)));
#line 650
c_rt_lib0move(&___nl__15, c_rt_lib0hash_get_value_dec(___nl__7, ___get_global_const(132)));
#line 650
c_rt_lib0move(&___nl__13, hash0has_key(___nl__14, ___nl__15));
#line 650
c_rt_lib0clear(&___nl__15);
#line 650
c_rt_lib0clear(&___nl__14);
#line 650
c_rt_lib0move(&___nl__13, c_rt_lib0not(___nl__13));
#line 650
if(c_rt_lib0check_true_native(___nl__13)){ goto label_91;}
#line 651
c_rt_lib0move(&___nl__15, c_rt_lib0hash_get_value_dec(*___ref___1, ___get_global_const(28)));
#line 651
c_rt_lib0move(&___nl__16, c_rt_lib0hash_get_value_dec(___nl__7, ___get_global_const(132)));
#line 651
c_rt_lib0move(&___nl__14, hash0get_value(___nl__15, ___nl__16));
#line 651
c_rt_lib0clear(&___nl__16);
#line 651
c_rt_lib0clear(&___nl__15);
#line 651
c_rt_lib0copy(&___nl__12, ___nl__14);
#line 651
c_rt_lib0clear(&___nl__14);
#line 652
goto label_91;
#line 652
label_91:
#line 652
c_rt_lib0clear(&___nl__13);
#line 653
c_rt_lib0delete(array0push(&___nl__12, ___nl__7));
#line 654
c_rt_lib0move(&___nl__13,___get_global_const(28));
#line 654
c_rt_lib0move(&___nl__13, c_rt_lib0get_ref_hash(*___ref___1, ___nl__13));
#line 654
c_rt_lib0move(&___nl__14, c_rt_lib0hash_get_value_dec(___nl__7, ___get_global_const(132)));
#line 654
c_rt_lib0delete(hash0set_value(&___nl__13, ___nl__14, ___nl__12));
#line 654
c_rt_lib0clear(&___nl__14);
#line 654
c_rt_lib0move(&___nl__14,___get_global_const(28));
#line 654
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___1, ___nl__14, ___nl__13));
#line 654
c_rt_lib0clear(&___nl__14);
#line 654
c_rt_lib0clear(&___nl__13);
#line 654
c_rt_lib0clear(&___nl__12);
#line 655
c_rt_lib0move(&___nl__8, c_rt_lib0add_mod(___nl__8, ___nl__9));
#line 655
goto label_71;
#line 655
label_106:
#line 655
c_rt_lib0clear(&___nl__6);
#line 655
c_rt_lib0clear(&___nl__7);
#line 655
c_rt_lib0clear(&___nl__8);
#line 655
c_rt_lib0clear(&___nl__9);
#line 655
c_rt_lib0clear(&___nl__10);
#line 655
c_rt_lib0clear(&___nl__11);
#line 656
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(113)));
#line 656
c_rt_lib0move(&___nl__8,___get_global_const(0));
#line 656
c_rt_lib0move(&___nl__9,___get_global_const(1));
#line 656
c_rt_lib0move(&___nl__10, c_rt_lib0array_len(___nl__6));
#line 656
label_117:
#line 656
c_rt_lib0move(&___nl__11, c_rt_lib0ge(___nl__8, ___nl__10));
#line 656
if(c_rt_lib0check_true_native(___nl__11)){ goto label_152;}
#line 656
c_rt_lib0move(&___nl__7, c_rt_lib0array_get(___nl__6, ___nl__8));
#line 657
c_rt_lib0move(&___nl__12, c_rt_lib0array_mk(0));
#line 658
c_rt_lib0move(&___nl__14, c_rt_lib0hash_get_value_dec(*___ref___1, ___get_global_const(29)));
#line 658
c_rt_lib0move(&___nl__15, c_rt_lib0hash_get_value_dec(___nl__7, ___get_global_const(132)));
#line 658
c_rt_lib0move(&___nl__13, hash0has_key(___nl__14, ___nl__15));
#line 658
c_rt_lib0clear(&___nl__15);
#line 658
c_rt_lib0clear(&___nl__14);
#line 658
c_rt_lib0move(&___nl__13, c_rt_lib0not(___nl__13));
#line 658
if(c_rt_lib0check_true_native(___nl__13)){ goto label_137;}
#line 659
c_rt_lib0move(&___nl__15, c_rt_lib0hash_get_value_dec(*___ref___1, ___get_global_const(29)));
#line 659
c_rt_lib0move(&___nl__16, c_rt_lib0hash_get_value_dec(___nl__7, ___get_global_const(132)));
#line 659
c_rt_lib0move(&___nl__14, hash0get_value(___nl__15, ___nl__16));
#line 659
c_rt_lib0clear(&___nl__16);
#line 659
c_rt_lib0clear(&___nl__15);
#line 659
c_rt_lib0copy(&___nl__12, ___nl__14);
#line 659
c_rt_lib0clear(&___nl__14);
#line 660
goto label_137;
#line 660
label_137:
#line 660
c_rt_lib0clear(&___nl__13);
#line 661
c_rt_lib0delete(array0push(&___nl__12, ___nl__7));
#line 662
c_rt_lib0move(&___nl__13,___get_global_const(29));
#line 662
c_rt_lib0move(&___nl__13, c_rt_lib0get_ref_hash(*___ref___1, ___nl__13));
#line 662
c_rt_lib0move(&___nl__14, c_rt_lib0hash_get_value_dec(___nl__7, ___get_global_const(132)));
#line 662
c_rt_lib0delete(hash0set_value(&___nl__13, ___nl__14, ___nl__12));
#line 662
c_rt_lib0clear(&___nl__14);
#line 662
c_rt_lib0move(&___nl__14,___get_global_const(29));
#line 662
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___1, ___nl__14, ___nl__13));
#line 662
c_rt_lib0clear(&___nl__14);
#line 662
c_rt_lib0clear(&___nl__13);
#line 662
c_rt_lib0clear(&___nl__12);
#line 663
c_rt_lib0move(&___nl__8, c_rt_lib0add_mod(___nl__8, ___nl__9));
#line 663
goto label_117;
#line 663
label_152:
#line 663
c_rt_lib0clear(&___nl__6);
#line 663
c_rt_lib0clear(&___nl__7);
#line 663
c_rt_lib0clear(&___nl__8);
#line 663
c_rt_lib0clear(&___nl__9);
#line 663
c_rt_lib0clear(&___nl__10);
#line 663
c_rt_lib0clear(&___nl__11);
#line 664
c_rt_lib0move(&___nl__6,___get_global_const(0));
#line 664
c_rt_lib0move(&___nl__6, c_rt_lib0num_eq(___nl__5, ___nl__6));
#line 664
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 664
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 664
if(c_rt_lib0check_true_native(___nl__6)){ goto label_172;}
#line 664
c_rt_lib0move(&___nl__7,___get_global_const(148));
#line 664
c_rt_lib0move(&___nl__7, c_rt_lib0concat_add(___nl__7, ___nl__5));
#line 664
c_rt_lib0move(&___nl__8,___get_global_const(149));
#line 664
c_rt_lib0move(&___nl__7, c_rt_lib0concat_add(___nl__7, ___nl__8));
#line 664
c_rt_lib0clear(&___nl__8);
#line 664
c_rt_lib0delete(c_fe_lib0print(___nl__7));
#line 664
c_rt_lib0clear(&___nl__7);
#line 664
goto label_172;
#line 664
label_172:
#line 664
c_rt_lib0clear(&___nl__6);
#line 665
c_rt_lib0move(&___nl__6, c_rt_lib0hash_mk(0));
#line 666
c_rt_lib0move(&___nl__9, c_rt_lib0init_iter(___nl__0));
#line 666
label_176:
#line 666
c_rt_lib0move(&___nl__7, c_rt_lib0is_end_hash(___nl__9));
#line 666
if(c_rt_lib0check_true_native(___nl__7)){ goto label_206;}
#line 666
c_rt_lib0move(&___nl__7, c_rt_lib0get_key_iter(___nl__9));
#line 666
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value(___nl__0, ___nl__7));
#line 667
c_rt_lib0move(&___nl__10, c_rt_lib0array_mk(0));
#line 668
c_rt_lib0move(&___nl__11, c_rt_lib0hash_get_value_dec(___nl__8, ___get_global_const(150)));
#line 668
c_rt_lib0move(&___nl__13,___get_global_const(0));
#line 668
c_rt_lib0move(&___nl__14,___get_global_const(1));
#line 668
c_rt_lib0move(&___nl__15, c_rt_lib0array_len(___nl__11));
#line 668
label_186:
#line 668
c_rt_lib0move(&___nl__16, c_rt_lib0ge(___nl__13, ___nl__15));
#line 668
if(c_rt_lib0check_true_native(___nl__16)){ goto label_195;}
#line 668
c_rt_lib0move(&___nl__12, c_rt_lib0array_get(___nl__11, ___nl__13));
#line 669
c_rt_lib0move(&___nl__17, c_rt_lib0hash_get_value_dec(___nl__12, ___get_global_const(93)));
#line 669
c_rt_lib0delete(array0push(&___nl__10, ___nl__17));
#line 669
c_rt_lib0clear(&___nl__17);
#line 670
c_rt_lib0move(&___nl__13, c_rt_lib0add_mod(___nl__13, ___nl__14));
#line 670
goto label_186;
#line 670
label_195:
#line 670
c_rt_lib0clear(&___nl__11);
#line 670
c_rt_lib0clear(&___nl__12);
#line 670
c_rt_lib0clear(&___nl__13);
#line 670
c_rt_lib0clear(&___nl__14);
#line 670
c_rt_lib0clear(&___nl__15);
#line 670
c_rt_lib0clear(&___nl__16);
#line 671
c_rt_lib0delete(hash0set_value(&___nl__6, ___nl__7, ___nl__10));
#line 671
c_rt_lib0clear(&___nl__10);
#line 672
c_rt_lib0move(&___nl__9, c_rt_lib0next_iter(___nl__9));
#line 672
goto label_176;
#line 672
label_206:
#line 672
c_rt_lib0clear(&___nl__7);
#line 672
c_rt_lib0clear(&___nl__8);
#line 672
c_rt_lib0clear(&___nl__9);
#line 673
c_rt_lib0move(&___nl__7, module_checker0search_loops(___nl__6));
#line 673
c_rt_lib0copy(&___nl__8, ___nl__7);
#line 673
c_rt_lib0hash_set_value_dec(___ref___1, ___get_global_const(30), ___nl__8);
#line 673
c_rt_lib0clear(&___nl__7);
#line 673
c_rt_lib0clear(&___nl__8);
#line 674
c_rt_lib0copy(&___nl__7, ___nl__2);
#line 674
c_rt_lib0move(&___nl__7, c_rt_lib0priv_is(___nl__7, ___get_global_const(45)));
#line 674
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 674
if(c_rt_lib0check_true_native(___nl__7)){ goto label_255;}
#line 675
c_rt_lib0move(&___nl__8,___get_global_const(151));
#line 675
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(66)));
#line 675
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__10, ___get_global_const(152)));
#line 675
c_rt_lib0move(&___nl__9, array0len(___nl__10));
#line 675
c_rt_lib0clear(&___nl__10);
#line 675
c_rt_lib0move(&___nl__8, c_rt_lib0concat_add(___nl__8, ___nl__9));
#line 675
c_rt_lib0clear(&___nl__9);
#line 675
c_rt_lib0delete(c_fe_lib0print(___nl__8));
#line 675
c_rt_lib0clear(&___nl__8);
#line 676
c_rt_lib0move(&___nl__8,___get_global_const(153));
#line 676
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(66)));
#line 676
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__10, ___get_global_const(154)));
#line 676
c_rt_lib0move(&___nl__9, array0len(___nl__10));
#line 676
c_rt_lib0clear(&___nl__10);
#line 676
c_rt_lib0move(&___nl__8, c_rt_lib0concat_add(___nl__8, ___nl__9));
#line 676
c_rt_lib0clear(&___nl__9);
#line 676
c_rt_lib0delete(c_fe_lib0print(___nl__8));
#line 676
c_rt_lib0clear(&___nl__8);
#line 677
c_rt_lib0move(&___nl__8, reference_generator0generate(___nl__0));
#line 678
c_rt_lib0copy(&___nl__11, ___nl__2);
#line 678
c_rt_lib0move(&___nl__11, c_rt_lib0priv_as(___nl__11, ___get_global_const(45)));
#line 678
c_rt_lib0move(&___nl__13, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(66)));
#line 678
c_rt_lib0move(&___nl__12, compiler_priv0serialize_deref(___nl__13, ___nl__8));
#line 678
c_rt_lib0clear(&___nl__13);
#line 678
c_rt_lib0move(&___nl__10, c_fe_lib0string_to_file(___nl__11, ___nl__12));
#line 678
c_rt_lib0clear(&___nl__12);
#line 678
c_rt_lib0clear(&___nl__11);
#line 678
c_rt_lib0move(&___nl__9, c_rt_lib0priv_is(___nl__10, ___get_global_const(48)));
#line 678
if(c_rt_lib0check_true_native(___nl__9)){ goto label_250;}
#line 678
c_rt_lib0move(&___nl__10, c_rt_lib0ov_mk_arg(___get_global_const(95), ___nl__10));
#line 678
nl_die_arg(___nl__10);
#line 678
label_250:
#line 678
c_rt_lib0clear(&___nl__9);
#line 678
c_rt_lib0clear(&___nl__10);
#line 678
c_rt_lib0clear(&___nl__8);
#line 679
goto label_255;
#line 679
label_255:
#line 679
c_rt_lib0clear(&___nl__7);
#line 679
c_rt_lib0clear(&___nl__4);
#line 679
c_rt_lib0clear(&___nl__5);
#line 679
c_rt_lib0clear(&___nl__6);
#line 679
c_rt_lib0clear(&___nl__0);
#line 679
c_rt_lib0clear(&___nl__2);
#line 679
c_rt_lib0clear(&___nl__3);
#line 679
return NULL;
}

ImmT compiler_priv0serialize_deref(ImmT ___nl__0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
#line 683
c_rt_lib0move(&___nl__2, c_rt_lib0array_mk(0));
#line 684
c_rt_lib0move(&___nl__3, compiler_priv0process_deref(___nl__0));
#line 684
c_rt_lib0delete(array0append(&___nl__2, ___nl__3));
#line 684
c_rt_lib0clear(&___nl__3);
#line 685
c_rt_lib0delete(array0append(&___nl__2, ___nl__1));
#line 686
c_rt_lib0move(&___nl__5, c_rt_lib0func_new(reference_generator0refs0ptr, ___get_global_const(155), ___get_global_const(156)));
#line 686
c_rt_lib0move(&___nl__5, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__5));
#line 686
c_rt_lib0move(&___nl__4, ptd0ensure(___nl__5, ___nl__2));
#line 686
c_rt_lib0clear(&___nl__5);
#line 686
c_rt_lib0move(&___nl__3, dfile0ssave_net_format(___nl__4));
#line 686
c_rt_lib0clear(&___nl__4);
#line 686
c_rt_lib0clear(&___nl__0);
#line 686
c_rt_lib0clear(&___nl__1);
#line 686
c_rt_lib0clear(&___nl__2);
#line 686
return ___nl__3;
#line 686
c_rt_lib0clear(&___nl__3);
#line 686
c_rt_lib0clear(&___nl__2);
#line 686
c_rt_lib0clear(&___nl__0);
#line 686
c_rt_lib0clear(&___nl__1);
#line 686
return NULL;
}

ImmT compiler_priv0process_deref(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
#line 691
c_rt_lib0move(&___nl__1, c_rt_lib0array_mk(0));
#line 692
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(154)));
#line 692
c_rt_lib0move(&___nl__4,___get_global_const(0));
#line 692
c_rt_lib0move(&___nl__5,___get_global_const(1));
#line 692
c_rt_lib0move(&___nl__6, c_rt_lib0array_len(___nl__2));
#line 692
label_5:
#line 692
c_rt_lib0move(&___nl__7, c_rt_lib0ge(___nl__4, ___nl__6));
#line 692
if(c_rt_lib0check_true_native(___nl__7)){ goto label_15;}
#line 692
c_rt_lib0move(&___nl__3, c_rt_lib0array_get(___nl__2, ___nl__4));
#line 693
c_rt_lib0move(&___nl__8, c_rt_lib0ov_mk_arg(___get_global_const(152), ___nl__3));
#line 693
c_rt_lib0move(&___nl__8, c_rt_lib0ov_mk_arg(___get_global_const(66), ___nl__8));
#line 693
c_rt_lib0delete(c_rt_lib0array_push(&___nl__1, ___nl__8));
#line 693
c_rt_lib0clear(&___nl__8);
#line 694
c_rt_lib0move(&___nl__4, c_rt_lib0add_mod(___nl__4, ___nl__5));
#line 694
goto label_5;
#line 694
label_15:
#line 694
c_rt_lib0clear(&___nl__2);
#line 694
c_rt_lib0clear(&___nl__3);
#line 694
c_rt_lib0clear(&___nl__4);
#line 694
c_rt_lib0clear(&___nl__5);
#line 694
c_rt_lib0clear(&___nl__6);
#line 694
c_rt_lib0clear(&___nl__7);
#line 696
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(152)));
#line 696
c_rt_lib0move(&___nl__4,___get_global_const(0));
#line 696
c_rt_lib0move(&___nl__5,___get_global_const(1));
#line 696
c_rt_lib0move(&___nl__6, c_rt_lib0array_len(___nl__2));
#line 696
label_26:
#line 696
c_rt_lib0move(&___nl__7, c_rt_lib0ge(___nl__4, ___nl__6));
#line 696
if(c_rt_lib0check_true_native(___nl__7)){ goto label_36;}
#line 696
c_rt_lib0move(&___nl__3, c_rt_lib0array_get(___nl__2, ___nl__4));
#line 697
c_rt_lib0move(&___nl__8, c_rt_lib0ov_mk_arg(___get_global_const(154), ___nl__3));
#line 697
c_rt_lib0move(&___nl__8, c_rt_lib0ov_mk_arg(___get_global_const(66), ___nl__8));
#line 697
c_rt_lib0delete(c_rt_lib0array_push(&___nl__1, ___nl__8));
#line 697
c_rt_lib0clear(&___nl__8);
#line 698
c_rt_lib0move(&___nl__4, c_rt_lib0add_mod(___nl__4, ___nl__5));
#line 698
goto label_26;
#line 698
label_36:
#line 698
c_rt_lib0clear(&___nl__2);
#line 698
c_rt_lib0clear(&___nl__3);
#line 698
c_rt_lib0clear(&___nl__4);
#line 698
c_rt_lib0clear(&___nl__5);
#line 698
c_rt_lib0clear(&___nl__6);
#line 698
c_rt_lib0clear(&___nl__7);
#line 699
c_rt_lib0clear(&___nl__0);
#line 699
return ___nl__1;
#line 699
c_rt_lib0clear(&___nl__1);
#line 699
c_rt_lib0clear(&___nl__0);
#line 699
return NULL;
}

ImmT compiler_priv0try_save_file(ImmT ___nl__0,ImmT ___nl__1,ImmT * ___ref___2) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
#line 703
c_rt_lib0move(&___nl__3, c_fe_lib0string_to_file(___nl__1, ___nl__0));
#line 703
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__3, ___get_global_const(48)));
#line 703
if(c_rt_lib0check_true_native(___nl__4)){ goto label_8;}
#line 704
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__3, ___get_global_const(47)));
#line 704
if(c_rt_lib0check_true_native(___nl__4)){ goto label_12;}
#line 704
c_rt_lib0move(&___nl__4,___get_global_const(91));
#line 704
c_rt_lib0move(&___nl__4, c_rt_lib0array_mk(2, ___nl__4, ___nl__3));
#line 704
nl_die_arg(___nl__4);
#line 703
label_8:
#line 703
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__3, ___get_global_const(48)));
#line 703
c_rt_lib0clear(&___nl__5);
#line 704
goto label_23;
#line 704
label_12:
#line 704
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__3, ___get_global_const(47)));
#line 705
c_rt_lib0move(&___nl__6,___get_global_const(122));
#line 705
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__5));
#line 705
c_rt_lib0delete(c_fe_lib0print(___nl__6));
#line 705
c_rt_lib0clear(&___nl__6);
#line 706
c_rt_lib0move(&___nl__6, c_rt_lib0get_true());
#line 706
c_rt_lib0copy(___ref___2, ___nl__6);
#line 706
c_rt_lib0clear(&___nl__6);
#line 706
c_rt_lib0clear(&___nl__5);
#line 707
goto label_23;
#line 707
label_23:
#line 707
c_rt_lib0clear(&___nl__3);
#line 707
c_rt_lib0clear(&___nl__4);
#line 707
c_rt_lib0clear(&___nl__0);
#line 707
c_rt_lib0clear(&___nl__1);
#line 707
return NULL;
}

ImmT compiler_priv0generate_modules_to_files(ImmT ___nl__0,ImmT ___nl__1,ImmT ___nl__2,ImmT * ___ref___3,ImmT ___nl__4) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
c_rt_lib0arg_val(___nl__2);
c_rt_lib0arg_val(___nl__4);
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
#line 715
c_rt_lib0move(&___nl__5, c_rt_lib0hash_mk(0));
#line 716
c_rt_lib0move(&___nl__6, c_rt_lib0priv_is(___nl__4, ___get_global_const(33)));
#line 716
if(c_rt_lib0check_true_native(___nl__6)){ goto label_20;}
#line 724
c_rt_lib0move(&___nl__6, c_rt_lib0priv_is(___nl__4, ___get_global_const(34)));
#line 724
if(c_rt_lib0check_true_native(___nl__6)){ goto label_56;}
#line 738
c_rt_lib0move(&___nl__6, c_rt_lib0priv_is(___nl__4, ___get_global_const(32)));
#line 738
if(c_rt_lib0check_true_native(___nl__6)){ goto label_123;}
#line 747
c_rt_lib0move(&___nl__6, c_rt_lib0priv_is(___nl__4, ___get_global_const(37)));
#line 747
if(c_rt_lib0check_true_native(___nl__6)){ goto label_159;}
#line 756
c_rt_lib0move(&___nl__6, c_rt_lib0priv_is(___nl__4, ___get_global_const(38)));
#line 756
if(c_rt_lib0check_true_native(___nl__6)){ goto label_199;}
#line 765
c_rt_lib0move(&___nl__6, c_rt_lib0priv_is(___nl__4, ___get_global_const(35)));
#line 765
if(c_rt_lib0check_true_native(___nl__6)){ goto label_235;}
#line 767
c_rt_lib0move(&___nl__6, c_rt_lib0priv_is(___nl__4, ___get_global_const(36)));
#line 767
if(c_rt_lib0check_true_native(___nl__6)){ goto label_240;}
#line 769
c_rt_lib0move(&___nl__6, c_rt_lib0priv_is(___nl__4, ___get_global_const(39)));
#line 769
if(c_rt_lib0check_true_native(___nl__6)){ goto label_245;}
#line 769
c_rt_lib0move(&___nl__6,___get_global_const(91));
#line 769
c_rt_lib0move(&___nl__6, c_rt_lib0array_mk(2, ___nl__6, ___nl__4));
#line 769
nl_die_arg(___nl__6);
#line 716
label_20:
#line 717
c_rt_lib0move(&___nl__9, c_rt_lib0init_iter(___nl__0));
#line 717
label_22:
#line 717
c_rt_lib0move(&___nl__7, c_rt_lib0is_end_hash(___nl__9));
#line 717
if(c_rt_lib0check_true_native(___nl__7)){ goto label_51;}
#line 717
c_rt_lib0move(&___nl__7, c_rt_lib0get_key_iter(___nl__9));
#line 717
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value(___nl__0, ___nl__7));
#line 718
c_rt_lib0move(&___nl__10, c_rt_lib0get_false());
#line 719
c_rt_lib0move(&___nl__11, hash0get_value(___nl__1, ___nl__7));
#line 719
c_rt_lib0move(&___nl__11, c_rt_lib0hash_get_value_dec(___nl__11, ___get_global_const(44)));
#line 719
c_rt_lib0move(&___nl__11, c_rt_lib0priv_as(___nl__11, ___get_global_const(33)));
#line 720
c_rt_lib0move(&___nl__12,___get_global_const(121));
#line 720
c_rt_lib0move(&___nl__12, c_rt_lib0concat_add(___nl__12, ___nl__7));
#line 720
c_rt_lib0delete(c_fe_lib0print(___nl__12));
#line 720
c_rt_lib0clear(&___nl__12);
#line 721
c_rt_lib0move(&___nl__12, dfile0ssave(___nl__8));
#line 721
c_rt_lib0delete(compiler_priv0try_save_file(___nl__12, ___nl__11, &___nl__10));
#line 721
c_rt_lib0clear(&___nl__12);
#line 722
c_rt_lib0copy(&___nl__12, ___nl__10);
#line 722
c_rt_lib0move(&___nl__12, c_rt_lib0not(___nl__12));
#line 722
if(c_rt_lib0check_true_native(___nl__12)){ goto label_45;}
#line 722
c_rt_lib0move(&___nl__13,___get_global_const(2));
#line 722
c_rt_lib0delete(hash0set_value(&___nl__5, ___nl__7, ___nl__13));
#line 722
c_rt_lib0clear(&___nl__13);
#line 722
goto label_45;
#line 722
label_45:
#line 722
c_rt_lib0clear(&___nl__12);
#line 722
c_rt_lib0clear(&___nl__10);
#line 722
c_rt_lib0clear(&___nl__11);
#line 723
c_rt_lib0move(&___nl__9, c_rt_lib0next_iter(___nl__9));
#line 723
goto label_22;
#line 723
label_51:
#line 723
c_rt_lib0clear(&___nl__7);
#line 723
c_rt_lib0clear(&___nl__8);
#line 723
c_rt_lib0clear(&___nl__9);
#line 724
goto label_269;
#line 724
label_56:
#line 725
c_rt_lib0move(&___nl__7, generator_c0generate(___nl__0, ___ref___3));
#line 726
c_rt_lib0move(&___nl__8, c_rt_lib0get_false());
#line 727
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__7, ___get_global_const(157)));
#line 727
c_rt_lib0move(&___nl__12, c_rt_lib0init_iter(___nl__9));
#line 727
label_61:
#line 727
c_rt_lib0move(&___nl__10, c_rt_lib0is_end_hash(___nl__12));
#line 727
if(c_rt_lib0check_true_native(___nl__10)){ goto label_98;}
#line 727
c_rt_lib0move(&___nl__10, c_rt_lib0get_key_iter(___nl__12));
#line 727
c_rt_lib0move(&___nl__11, c_rt_lib0hash_get_value(___nl__9, ___nl__10));
#line 728
c_rt_lib0move(&___nl__13, c_rt_lib0get_false());
#line 728
c_rt_lib0copy(&___nl__8, ___nl__13);
#line 728
c_rt_lib0clear(&___nl__13);
#line 729
c_rt_lib0move(&___nl__13, hash0get_value(___nl__1, ___nl__10));
#line 729
c_rt_lib0move(&___nl__13, c_rt_lib0hash_get_value_dec(___nl__13, ___get_global_const(44)));
#line 729
c_rt_lib0move(&___nl__13, c_rt_lib0priv_as(___nl__13, ___get_global_const(34)));
#line 730
c_rt_lib0move(&___nl__14,___get_global_const(121));
#line 730
c_rt_lib0move(&___nl__14, c_rt_lib0concat_add(___nl__14, ___nl__10));
#line 730
c_rt_lib0delete(c_fe_lib0print(___nl__14));
#line 730
c_rt_lib0clear(&___nl__14);
#line 731
c_rt_lib0move(&___nl__14, c_rt_lib0hash_get_value_dec(___nl__11, ___get_global_const(34)));
#line 731
c_rt_lib0move(&___nl__15, c_rt_lib0hash_get_value_dec(___nl__13, ___get_global_const(34)));
#line 731
c_rt_lib0delete(compiler_priv0try_save_file(___nl__14, ___nl__15, &___nl__8));
#line 731
c_rt_lib0clear(&___nl__15);
#line 731
c_rt_lib0clear(&___nl__14);
#line 732
c_rt_lib0move(&___nl__14, c_rt_lib0hash_get_value_dec(___nl__11, ___get_global_const(40)));
#line 732
c_rt_lib0move(&___nl__15, c_rt_lib0hash_get_value_dec(___nl__13, ___get_global_const(40)));
#line 732
c_rt_lib0delete(compiler_priv0try_save_file(___nl__14, ___nl__15, &___nl__8));
#line 732
c_rt_lib0clear(&___nl__15);
#line 732
c_rt_lib0clear(&___nl__14);
#line 733
c_rt_lib0copy(&___nl__14, ___nl__8);
#line 733
c_rt_lib0move(&___nl__14, c_rt_lib0not(___nl__14));
#line 733
if(c_rt_lib0check_true_native(___nl__14)){ goto label_93;}
#line 733
c_rt_lib0move(&___nl__15,___get_global_const(2));
#line 733
c_rt_lib0delete(hash0set_value(&___nl__5, ___nl__10, ___nl__15));
#line 733
c_rt_lib0clear(&___nl__15);
#line 733
goto label_93;
#line 733
label_93:
#line 733
c_rt_lib0clear(&___nl__14);
#line 733
c_rt_lib0clear(&___nl__13);
#line 734
c_rt_lib0move(&___nl__12, c_rt_lib0next_iter(___nl__12));
#line 734
goto label_61;
#line 734
label_98:
#line 734
c_rt_lib0clear(&___nl__9);
#line 734
c_rt_lib0clear(&___nl__10);
#line 734
c_rt_lib0clear(&___nl__11);
#line 734
c_rt_lib0clear(&___nl__12);
#line 735
c_rt_lib0move(&___nl__9,___get_global_const(158));
#line 735
c_rt_lib0delete(c_fe_lib0print(___nl__9));
#line 735
c_rt_lib0clear(&___nl__9);
#line 736
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__7, ___get_global_const(159)));
#line 736
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__9, ___get_global_const(34)));
#line 736
c_rt_lib0move(&___nl__10,___get_global_const(160));
#line 736
c_rt_lib0move(&___nl__10, c_rt_lib0concat_new(___nl__2, ___nl__10));
#line 736
c_rt_lib0delete(compiler_priv0try_save_file(___nl__9, ___nl__10, &___nl__8));
#line 736
c_rt_lib0clear(&___nl__10);
#line 736
c_rt_lib0clear(&___nl__9);
#line 737
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__7, ___get_global_const(159)));
#line 737
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__9, ___get_global_const(40)));
#line 737
c_rt_lib0move(&___nl__10,___get_global_const(161));
#line 737
c_rt_lib0move(&___nl__10, c_rt_lib0concat_new(___nl__2, ___nl__10));
#line 737
c_rt_lib0delete(compiler_priv0try_save_file(___nl__9, ___nl__10, &___nl__8));
#line 737
c_rt_lib0clear(&___nl__10);
#line 737
c_rt_lib0clear(&___nl__9);
#line 737
c_rt_lib0clear(&___nl__7);
#line 737
c_rt_lib0clear(&___nl__8);
#line 738
goto label_269;
#line 738
label_123:
#line 739
c_rt_lib0move(&___nl__9, c_rt_lib0init_iter(___nl__0));
#line 739
label_125:
#line 739
c_rt_lib0move(&___nl__7, c_rt_lib0is_end_hash(___nl__9));
#line 739
if(c_rt_lib0check_true_native(___nl__7)){ goto label_154;}
#line 739
c_rt_lib0move(&___nl__7, c_rt_lib0get_key_iter(___nl__9));
#line 739
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value(___nl__0, ___nl__7));
#line 740
c_rt_lib0move(&___nl__10, c_rt_lib0get_false());
#line 741
c_rt_lib0move(&___nl__11, generator_pm0generate(___nl__8));
#line 742
c_rt_lib0move(&___nl__12, hash0get_value(___nl__1, ___nl__7));
#line 742
c_rt_lib0move(&___nl__12, c_rt_lib0hash_get_value_dec(___nl__12, ___get_global_const(44)));
#line 742
c_rt_lib0move(&___nl__12, c_rt_lib0priv_as(___nl__12, ___get_global_const(32)));
#line 743
c_rt_lib0move(&___nl__13,___get_global_const(121));
#line 743
c_rt_lib0move(&___nl__13, c_rt_lib0concat_add(___nl__13, ___nl__7));
#line 743
c_rt_lib0delete(c_fe_lib0print(___nl__13));
#line 743
c_rt_lib0clear(&___nl__13);
#line 744
c_rt_lib0delete(compiler_priv0try_save_file(___nl__11, ___nl__12, &___nl__10));
#line 745
c_rt_lib0copy(&___nl__13, ___nl__10);
#line 745
c_rt_lib0move(&___nl__13, c_rt_lib0not(___nl__13));
#line 745
if(c_rt_lib0check_true_native(___nl__13)){ goto label_147;}
#line 745
c_rt_lib0move(&___nl__14,___get_global_const(2));
#line 745
c_rt_lib0delete(hash0set_value(&___nl__5, ___nl__7, ___nl__14));
#line 745
c_rt_lib0clear(&___nl__14);
#line 745
goto label_147;
#line 745
label_147:
#line 745
c_rt_lib0clear(&___nl__13);
#line 745
c_rt_lib0clear(&___nl__10);
#line 745
c_rt_lib0clear(&___nl__11);
#line 745
c_rt_lib0clear(&___nl__12);
#line 746
c_rt_lib0move(&___nl__9, c_rt_lib0next_iter(___nl__9));
#line 746
goto label_125;
#line 746
label_154:
#line 746
c_rt_lib0clear(&___nl__7);
#line 746
c_rt_lib0clear(&___nl__8);
#line 746
c_rt_lib0clear(&___nl__9);
#line 747
goto label_269;
#line 747
label_159:
#line 747
c_rt_lib0move(&___nl__7, c_rt_lib0priv_as(___nl__4, ___get_global_const(37)));
#line 748
c_rt_lib0move(&___nl__10, c_rt_lib0init_iter(___nl__0));
#line 748
label_162:
#line 748
c_rt_lib0move(&___nl__8, c_rt_lib0is_end_hash(___nl__10));
#line 748
if(c_rt_lib0check_true_native(___nl__8)){ goto label_193;}
#line 748
c_rt_lib0move(&___nl__8, c_rt_lib0get_key_iter(___nl__10));
#line 748
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value(___nl__0, ___nl__8));
#line 749
c_rt_lib0move(&___nl__11, c_rt_lib0get_false());
#line 750
c_rt_lib0move(&___nl__13, c_rt_lib0hash_get_value_dec(___nl__7, ___get_global_const(31)));
#line 750
c_rt_lib0move(&___nl__12, generator_js0generate(___nl__9, ___nl__13));
#line 750
c_rt_lib0clear(&___nl__13);
#line 751
c_rt_lib0move(&___nl__13, hash0get_value(___nl__1, ___nl__8));
#line 751
c_rt_lib0move(&___nl__13, c_rt_lib0hash_get_value_dec(___nl__13, ___get_global_const(44)));
#line 751
c_rt_lib0move(&___nl__13, c_rt_lib0priv_as(___nl__13, ___get_global_const(37)));
#line 752
c_rt_lib0move(&___nl__14,___get_global_const(121));
#line 752
c_rt_lib0move(&___nl__14, c_rt_lib0concat_add(___nl__14, ___nl__8));
#line 752
c_rt_lib0delete(c_fe_lib0print(___nl__14));
#line 752
c_rt_lib0clear(&___nl__14);
#line 753
c_rt_lib0delete(compiler_priv0try_save_file(___nl__12, ___nl__13, &___nl__11));
#line 754
c_rt_lib0copy(&___nl__14, ___nl__11);
#line 754
c_rt_lib0move(&___nl__14, c_rt_lib0not(___nl__14));
#line 754
if(c_rt_lib0check_true_native(___nl__14)){ goto label_186;}
#line 754
c_rt_lib0move(&___nl__15,___get_global_const(2));
#line 754
c_rt_lib0delete(hash0set_value(&___nl__5, ___nl__8, ___nl__15));
#line 754
c_rt_lib0clear(&___nl__15);
#line 754
goto label_186;
#line 754
label_186:
#line 754
c_rt_lib0clear(&___nl__14);
#line 754
c_rt_lib0clear(&___nl__11);
#line 754
c_rt_lib0clear(&___nl__12);
#line 754
c_rt_lib0clear(&___nl__13);
#line 755
c_rt_lib0move(&___nl__10, c_rt_lib0next_iter(___nl__10));
#line 755
goto label_162;
#line 755
label_193:
#line 755
c_rt_lib0clear(&___nl__8);
#line 755
c_rt_lib0clear(&___nl__9);
#line 755
c_rt_lib0clear(&___nl__10);
#line 755
c_rt_lib0clear(&___nl__7);
#line 756
goto label_269;
#line 756
label_199:
#line 757
c_rt_lib0move(&___nl__9, c_rt_lib0init_iter(___nl__0));
#line 757
label_201:
#line 757
c_rt_lib0move(&___nl__7, c_rt_lib0is_end_hash(___nl__9));
#line 757
if(c_rt_lib0check_true_native(___nl__7)){ goto label_230;}
#line 757
c_rt_lib0move(&___nl__7, c_rt_lib0get_key_iter(___nl__9));
#line 757
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value(___nl__0, ___nl__7));
#line 758
c_rt_lib0move(&___nl__10, c_rt_lib0get_false());
#line 759
c_rt_lib0move(&___nl__11, generator_java0generate(___nl__8));
#line 760
c_rt_lib0move(&___nl__12, hash0get_value(___nl__1, ___nl__7));
#line 760
c_rt_lib0move(&___nl__12, c_rt_lib0hash_get_value_dec(___nl__12, ___get_global_const(44)));
#line 760
c_rt_lib0move(&___nl__12, c_rt_lib0priv_as(___nl__12, ___get_global_const(38)));
#line 761
c_rt_lib0move(&___nl__13,___get_global_const(121));
#line 761
c_rt_lib0move(&___nl__13, c_rt_lib0concat_add(___nl__13, ___nl__7));
#line 761
c_rt_lib0delete(c_fe_lib0print(___nl__13));
#line 761
c_rt_lib0clear(&___nl__13);
#line 762
c_rt_lib0delete(compiler_priv0try_save_file(___nl__11, ___nl__12, &___nl__10));
#line 763
c_rt_lib0copy(&___nl__13, ___nl__10);
#line 763
c_rt_lib0move(&___nl__13, c_rt_lib0not(___nl__13));
#line 763
if(c_rt_lib0check_true_native(___nl__13)){ goto label_223;}
#line 763
c_rt_lib0move(&___nl__14,___get_global_const(2));
#line 763
c_rt_lib0delete(hash0set_value(&___nl__5, ___nl__7, ___nl__14));
#line 763
c_rt_lib0clear(&___nl__14);
#line 763
goto label_223;
#line 763
label_223:
#line 763
c_rt_lib0clear(&___nl__13);
#line 763
c_rt_lib0clear(&___nl__10);
#line 763
c_rt_lib0clear(&___nl__11);
#line 763
c_rt_lib0clear(&___nl__12);
#line 764
c_rt_lib0move(&___nl__9, c_rt_lib0next_iter(___nl__9));
#line 764
goto label_201;
#line 764
label_230:
#line 764
c_rt_lib0clear(&___nl__7);
#line 764
c_rt_lib0clear(&___nl__8);
#line 764
c_rt_lib0clear(&___nl__9);
#line 765
goto label_269;
#line 765
label_235:
#line 766
c_rt_lib0move(&___nl__7, c_rt_lib0array_mk(0));
#line 766
nl_die_arg(___nl__7);
#line 766
c_rt_lib0clear(&___nl__7);
#line 767
goto label_269;
#line 767
label_240:
#line 768
c_rt_lib0move(&___nl__7, c_rt_lib0array_mk(0));
#line 768
nl_die_arg(___nl__7);
#line 768
c_rt_lib0clear(&___nl__7);
#line 769
goto label_269;
#line 769
label_245:
#line 770
c_rt_lib0move(&___nl__7, post_processing0get_call_graph(___nl__0));
#line 771
c_rt_lib0move(&___nl__8, c_rt_lib0get_false());
#line 772
c_rt_lib0move(&___nl__9,___get_global_const(162));
#line 772
c_rt_lib0delete(c_fe_lib0print(___nl__9));
#line 772
c_rt_lib0clear(&___nl__9);
#line 773
c_rt_lib0move(&___nl__9, dfile0ssave(___nl__7));
#line 773
c_rt_lib0move(&___nl__10,___get_global_const(105));
#line 773
c_rt_lib0move(&___nl__10, c_rt_lib0concat_new(___nl__2, ___nl__10));
#line 773
c_rt_lib0delete(compiler_priv0try_save_file(___nl__9, ___nl__10, &___nl__8));
#line 773
c_rt_lib0clear(&___nl__10);
#line 773
c_rt_lib0clear(&___nl__9);
#line 774
c_rt_lib0copy(&___nl__9, ___nl__8);
#line 774
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__9));
#line 774
if(c_rt_lib0check_true_native(___nl__9)){ goto label_264;}
#line 775
c_rt_lib0move(&___nl__10,___get_global_const(163));
#line 775
c_rt_lib0delete(c_fe_lib0print(___nl__10));
#line 775
c_rt_lib0clear(&___nl__10);
#line 776
goto label_264;
#line 776
label_264:
#line 776
c_rt_lib0clear(&___nl__9);
#line 776
c_rt_lib0clear(&___nl__7);
#line 776
c_rt_lib0clear(&___nl__8);
#line 777
goto label_269;
#line 777
label_269:
#line 777
c_rt_lib0clear(&___nl__6);
#line 778
c_rt_lib0move(&___nl__6, hash0size(___nl__5));
#line 778
c_rt_lib0move(&___nl__7,___get_global_const(0));
#line 778
c_rt_lib0move(&___nl__6, c_rt_lib0gt(___nl__6, ___nl__7));
#line 778
c_rt_lib0clear(&___nl__7);
#line 778
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 778
if(c_rt_lib0check_true_native(___nl__6)){ goto label_287;}
#line 779
c_rt_lib0move(&___nl__7, c_rt_lib0ov_mk_arg(___get_global_const(47), ___nl__5));
#line 779
c_rt_lib0clear(&___nl__0);
#line 779
c_rt_lib0clear(&___nl__1);
#line 779
c_rt_lib0clear(&___nl__2);
#line 779
c_rt_lib0clear(&___nl__4);
#line 779
c_rt_lib0clear(&___nl__5);
#line 779
c_rt_lib0clear(&___nl__6);
#line 779
return ___nl__7;
#line 779
c_rt_lib0clear(&___nl__7);
#line 780
goto label_299;
#line 780
label_287:
#line 781
c_rt_lib0move(&___nl__7,___get_global_const(2));
#line 781
c_rt_lib0move(&___nl__7, c_rt_lib0ov_mk_arg(___get_global_const(48), ___nl__7));
#line 781
c_rt_lib0clear(&___nl__0);
#line 781
c_rt_lib0clear(&___nl__1);
#line 781
c_rt_lib0clear(&___nl__2);
#line 781
c_rt_lib0clear(&___nl__4);
#line 781
c_rt_lib0clear(&___nl__5);
#line 781
c_rt_lib0clear(&___nl__6);
#line 781
return ___nl__7;
#line 781
c_rt_lib0clear(&___nl__7);
#line 782
goto label_299;
#line 782
label_299:
#line 782
c_rt_lib0clear(&___nl__6);
#line 782
c_rt_lib0clear(&___nl__5);
#line 782
c_rt_lib0clear(&___nl__0);
#line 782
c_rt_lib0clear(&___nl__1);
#line 782
c_rt_lib0clear(&___nl__2);
#line 782
c_rt_lib0clear(&___nl__4);
#line 782
return NULL;
}

ImmT compiler_priv0save_module_to_file(ImmT ___nl__0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
#line 786
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__1, ___get_global_const(33)));
#line 786
if(c_rt_lib0check_true_native(___nl__2)){ goto label_21;}
#line 788
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__1, ___get_global_const(34)));
#line 788
if(c_rt_lib0check_true_native(___nl__2)){ goto label_28;}
#line 790
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__1, ___get_global_const(32)));
#line 790
if(c_rt_lib0check_true_native(___nl__2)){ goto label_35;}
#line 792
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__1, ___get_global_const(37)));
#line 792
if(c_rt_lib0check_true_native(___nl__2)){ goto label_42;}
#line 794
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__1, ___get_global_const(38)));
#line 794
if(c_rt_lib0check_true_native(___nl__2)){ goto label_49;}
#line 796
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__1, ___get_global_const(35)));
#line 796
if(c_rt_lib0check_true_native(___nl__2)){ goto label_56;}
#line 798
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__1, ___get_global_const(36)));
#line 798
if(c_rt_lib0check_true_native(___nl__2)){ goto label_74;}
#line 800
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__1, ___get_global_const(41)));
#line 800
if(c_rt_lib0check_true_native(___nl__2)){ goto label_92;}
#line 802
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__1, ___get_global_const(39)));
#line 802
if(c_rt_lib0check_true_native(___nl__2)){ goto label_97;}
#line 802
c_rt_lib0move(&___nl__2,___get_global_const(91));
#line 802
c_rt_lib0move(&___nl__2, c_rt_lib0array_mk(2, ___nl__2, ___nl__1));
#line 802
nl_die_arg(___nl__2);
#line 786
label_21:
#line 786
c_rt_lib0move(&___nl__3, c_rt_lib0priv_as(___nl__1, ___get_global_const(33)));
#line 787
c_rt_lib0move(&___nl__4, c_rt_lib0array_mk(0));
#line 787
nl_die_arg(___nl__4);
#line 787
c_rt_lib0clear(&___nl__4);
#line 787
c_rt_lib0clear(&___nl__3);
#line 788
goto label_102;
#line 788
label_28:
#line 788
c_rt_lib0move(&___nl__3, c_rt_lib0priv_as(___nl__1, ___get_global_const(34)));
#line 789
c_rt_lib0move(&___nl__4, c_rt_lib0array_mk(0));
#line 789
nl_die_arg(___nl__4);
#line 789
c_rt_lib0clear(&___nl__4);
#line 789
c_rt_lib0clear(&___nl__3);
#line 790
goto label_102;
#line 790
label_35:
#line 790
c_rt_lib0move(&___nl__3, c_rt_lib0priv_as(___nl__1, ___get_global_const(32)));
#line 791
c_rt_lib0move(&___nl__4, c_rt_lib0array_mk(0));
#line 791
nl_die_arg(___nl__4);
#line 791
c_rt_lib0clear(&___nl__4);
#line 791
c_rt_lib0clear(&___nl__3);
#line 792
goto label_102;
#line 792
label_42:
#line 792
c_rt_lib0move(&___nl__3, c_rt_lib0priv_as(___nl__1, ___get_global_const(37)));
#line 793
c_rt_lib0move(&___nl__4, c_rt_lib0array_mk(0));
#line 793
nl_die_arg(___nl__4);
#line 793
c_rt_lib0clear(&___nl__4);
#line 793
c_rt_lib0clear(&___nl__3);
#line 794
goto label_102;
#line 794
label_49:
#line 794
c_rt_lib0move(&___nl__3, c_rt_lib0priv_as(___nl__1, ___get_global_const(38)));
#line 795
c_rt_lib0move(&___nl__4, c_rt_lib0array_mk(0));
#line 795
nl_die_arg(___nl__4);
#line 795
c_rt_lib0clear(&___nl__4);
#line 795
c_rt_lib0clear(&___nl__3);
#line 796
goto label_102;
#line 796
label_56:
#line 796
c_rt_lib0move(&___nl__3, c_rt_lib0priv_as(___nl__1, ___get_global_const(35)));
#line 797
c_rt_lib0move(&___nl__5, c_rt_lib0func_new(compiler0file_t0ptr, ___get_global_const(22), ___get_global_const(164)));
#line 797
c_rt_lib0move(&___nl__5, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__5));
#line 797
c_rt_lib0move(&___nl__7, pretty_printer0print_module_to_str(___nl__0));
#line 797
c_rt_lib0move(&___nl__6, c_fe_lib0string_to_file(___nl__3, ___nl__7));
#line 797
c_rt_lib0clear(&___nl__7);
#line 797
c_rt_lib0move(&___nl__4, ptd0ensure(___nl__5, ___nl__6));
#line 797
c_rt_lib0clear(&___nl__6);
#line 797
c_rt_lib0clear(&___nl__5);
#line 797
c_rt_lib0clear(&___nl__0);
#line 797
c_rt_lib0clear(&___nl__1);
#line 797
c_rt_lib0clear(&___nl__2);
#line 797
c_rt_lib0clear(&___nl__3);
#line 797
return ___nl__4;
#line 797
c_rt_lib0clear(&___nl__4);
#line 797
c_rt_lib0clear(&___nl__3);
#line 798
goto label_102;
#line 798
label_74:
#line 798
c_rt_lib0move(&___nl__3, c_rt_lib0priv_as(___nl__1, ___get_global_const(36)));
#line 799
c_rt_lib0move(&___nl__5, c_rt_lib0func_new(compiler0file_t0ptr, ___get_global_const(22), ___get_global_const(164)));
#line 799
c_rt_lib0move(&___nl__5, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__5));
#line 799
c_rt_lib0move(&___nl__7, dfile0ssave(___nl__0));
#line 799
c_rt_lib0move(&___nl__6, c_fe_lib0string_to_file(___nl__3, ___nl__7));
#line 799
c_rt_lib0clear(&___nl__7);
#line 799
c_rt_lib0move(&___nl__4, ptd0ensure(___nl__5, ___nl__6));
#line 799
c_rt_lib0clear(&___nl__6);
#line 799
c_rt_lib0clear(&___nl__5);
#line 799
c_rt_lib0clear(&___nl__0);
#line 799
c_rt_lib0clear(&___nl__1);
#line 799
c_rt_lib0clear(&___nl__2);
#line 799
c_rt_lib0clear(&___nl__3);
#line 799
return ___nl__4;
#line 799
c_rt_lib0clear(&___nl__4);
#line 799
c_rt_lib0clear(&___nl__3);
#line 800
goto label_102;
#line 800
label_92:
#line 801
c_rt_lib0move(&___nl__3, c_rt_lib0array_mk(0));
#line 801
nl_die_arg(___nl__3);
#line 801
c_rt_lib0clear(&___nl__3);
#line 802
goto label_102;
#line 802
label_97:
#line 803
c_rt_lib0move(&___nl__3, c_rt_lib0array_mk(0));
#line 803
nl_die_arg(___nl__3);
#line 803
c_rt_lib0clear(&___nl__3);
#line 804
goto label_102;
#line 804
label_102:
#line 804
c_rt_lib0clear(&___nl__2);
#line 804
c_rt_lib0clear(&___nl__0);
#line 804
c_rt_lib0clear(&___nl__1);
#line 804
return NULL;
}

ImmT compiler_priv0get_dir(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
#line 808
c_rt_lib0move(&___nl__1, string0length(___nl__0));
#line 808
c_rt_lib0move(&___nl__2,___get_global_const(1));
#line 808
c_rt_lib0move(&___nl__1, c_rt_lib0sub_mod(___nl__1, ___nl__2));
#line 808
c_rt_lib0clear(&___nl__2);
#line 809
c_rt_lib0move(&___nl__3,___get_global_const(1));
#line 809
c_rt_lib0move(&___nl__2, string0substr(___nl__0, ___nl__1, ___nl__3));
#line 809
c_rt_lib0clear(&___nl__3);
#line 809
c_rt_lib0move(&___nl__3,___get_global_const(77));
#line 809
c_rt_lib0move(&___nl__2, c_rt_lib0eq(___nl__2, ___nl__3));
#line 809
c_rt_lib0clear(&___nl__3);
#line 809
if(c_rt_lib0check_true_native(___nl__2)){ goto label_17;}
#line 809
c_rt_lib0move(&___nl__3,___get_global_const(1));
#line 809
c_rt_lib0move(&___nl__2, string0substr(___nl__0, ___nl__1, ___nl__3));
#line 809
c_rt_lib0clear(&___nl__3);
#line 809
c_rt_lib0move(&___nl__3,___get_global_const(96));
#line 809
c_rt_lib0move(&___nl__2, c_rt_lib0eq(___nl__2, ___nl__3));
#line 809
c_rt_lib0clear(&___nl__3);
#line 809
label_17:
#line 809
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 809
if(c_rt_lib0check_true_native(___nl__2)){ goto label_24;}
#line 809
c_rt_lib0move(&___nl__3,___get_global_const(1));
#line 809
c_rt_lib0move(&___nl__1, c_rt_lib0sub_mod(___nl__1, ___nl__3));
#line 809
c_rt_lib0clear(&___nl__3);
#line 809
goto label_24;
#line 809
label_24:
#line 809
c_rt_lib0clear(&___nl__2);
#line 810
label_26:
#line 810
c_rt_lib0move(&___nl__2,___get_global_const(0));
#line 810
c_rt_lib0move(&___nl__2, c_rt_lib0ge(___nl__1, ___nl__2));
#line 810
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__2));
#line 810
if(c_rt_lib0check_true_native(___nl__4)){ goto label_37;}
#line 810
c_rt_lib0move(&___nl__5,___get_global_const(1));
#line 810
c_rt_lib0move(&___nl__2, string0substr(___nl__0, ___nl__1, ___nl__5));
#line 810
c_rt_lib0clear(&___nl__5);
#line 810
c_rt_lib0move(&___nl__5,___get_global_const(77));
#line 810
c_rt_lib0move(&___nl__2, c_rt_lib0ne(___nl__2, ___nl__5));
#line 810
c_rt_lib0clear(&___nl__5);
#line 810
label_37:
#line 810
c_rt_lib0clear(&___nl__4);
#line 810
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__2));
#line 810
if(c_rt_lib0check_true_native(___nl__3)){ goto label_47;}
#line 810
c_rt_lib0move(&___nl__4,___get_global_const(1));
#line 810
c_rt_lib0move(&___nl__2, string0substr(___nl__0, ___nl__1, ___nl__4));
#line 810
c_rt_lib0clear(&___nl__4);
#line 810
c_rt_lib0move(&___nl__4,___get_global_const(96));
#line 810
c_rt_lib0move(&___nl__2, c_rt_lib0ne(___nl__2, ___nl__4));
#line 810
c_rt_lib0clear(&___nl__4);
#line 810
label_47:
#line 810
c_rt_lib0clear(&___nl__3);
#line 810
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 810
if(c_rt_lib0check_true_native(___nl__2)){ goto label_55;}
#line 810
c_rt_lib0move(&___nl__3,___get_global_const(1));
#line 810
c_rt_lib0move(&___nl__1, c_rt_lib0sub_mod(___nl__1, ___nl__3));
#line 810
c_rt_lib0clear(&___nl__3);
#line 810
goto label_26;
#line 810
label_55:
#line 810
c_rt_lib0clear(&___nl__2);
#line 811
c_rt_lib0move(&___nl__2,___get_global_const(0));
#line 811
c_rt_lib0move(&___nl__2, c_rt_lib0le(___nl__1, ___nl__2));
#line 811
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 811
if(c_rt_lib0check_true_native(___nl__2)){ goto label_68;}
#line 811
c_rt_lib0move(&___nl__3,___get_global_const(97));
#line 811
c_rt_lib0clear(&___nl__0);
#line 811
c_rt_lib0clear(&___nl__1);
#line 811
c_rt_lib0clear(&___nl__2);
#line 811
return ___nl__3;
#line 811
c_rt_lib0clear(&___nl__3);
#line 811
goto label_68;
#line 811
label_68:
#line 811
c_rt_lib0clear(&___nl__2);
#line 812
c_rt_lib0move(&___nl__3,___get_global_const(0));
#line 812
c_rt_lib0move(&___nl__2, string0substr(___nl__0, ___nl__3, ___nl__1));
#line 812
c_rt_lib0clear(&___nl__3);
#line 812
c_rt_lib0clear(&___nl__0);
#line 812
c_rt_lib0clear(&___nl__1);
#line 812
return ___nl__2;
#line 812
c_rt_lib0clear(&___nl__2);
#line 812
c_rt_lib0clear(&___nl__1);
#line 812
c_rt_lib0clear(&___nl__0);
#line 812
return NULL;
}

ImmT compiler_priv0parse_command_line_args(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
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
#line 817
c_rt_lib0move(&___nl__2, c_rt_lib0ov_mk_none(___get_global_const(34)));
#line 818
c_rt_lib0move(&___nl__3, c_rt_lib0ov_mk_none(___get_global_const(55)));
#line 819
c_rt_lib0move(&___nl__5,___get_global_const(97));
#line 819
c_rt_lib0move(&___nl__4, c_rt_lib0array_mk(1, ___nl__5));
#line 819
c_rt_lib0clear(&___nl__5);
#line 820
c_rt_lib0move(&___nl__5, c_rt_lib0ov_mk_none(___get_global_const(51)));
#line 821
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_none(___get_global_const(46)));
#line 822
c_rt_lib0move(&___nl__7, compiler_priv0get_default_math_file());
#line 823
c_rt_lib0move(&___nl__8,___get_global_const(2));
#line 824
c_rt_lib0move(&___nl__9, c_rt_lib0ov_mk_none(___get_global_const(60)));
#line 825
c_rt_lib0move(&___nl__10, c_rt_lib0get_false());
#line 826
c_rt_lib0move(&___nl__11, c_rt_lib0get_false());
#line 826
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(10, ___get_global_const(70), ___nl__2, ___get_global_const(69), ___nl__3, ___get_global_const(64), ___nl__4, ___get_global_const(67), ___nl__5, ___get_global_const(66), ___nl__6, ___get_global_const(68), ___nl__7, ___get_global_const(65), ___nl__8, ___get_global_const(71), ___nl__9, ___get_global_const(72), ___nl__10, ___get_global_const(73), ___nl__11));
#line 826
c_rt_lib0clear(&___nl__2);
#line 826
c_rt_lib0clear(&___nl__3);
#line 826
c_rt_lib0clear(&___nl__4);
#line 826
c_rt_lib0clear(&___nl__5);
#line 826
c_rt_lib0clear(&___nl__6);
#line 826
c_rt_lib0clear(&___nl__7);
#line 826
c_rt_lib0clear(&___nl__8);
#line 826
c_rt_lib0clear(&___nl__9);
#line 826
c_rt_lib0clear(&___nl__10);
#line 826
c_rt_lib0clear(&___nl__11);
#line 828
c_rt_lib0move(&___nl__2, c_rt_lib0get_false());
#line 829
c_rt_lib0move(&___nl__3, compiler_priv0get_dir_cache_name());
#line 830
c_rt_lib0move(&___nl__4,___get_global_const(1));
#line 830
label_26:
#line 830
c_rt_lib0move(&___nl__5, array0len(___nl__0));
#line 830
c_rt_lib0move(&___nl__5, c_rt_lib0lt(___nl__4, ___nl__5));
#line 830
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 830
if(c_rt_lib0check_true_native(___nl__5)){ goto label_444;}
#line 831
c_rt_lib0move(&___nl__6, c_rt_lib0array_get(___nl__0, ___nl__4));
#line 832
c_rt_lib0move(&___nl__7, string0length(___nl__6));
#line 832
c_rt_lib0move(&___nl__9,___get_global_const(6));
#line 832
c_rt_lib0move(&___nl__7, c_rt_lib0ge(___nl__7, ___nl__9));
#line 832
c_rt_lib0clear(&___nl__9);
#line 832
c_rt_lib0move(&___nl__8, c_rt_lib0not(___nl__7));
#line 832
if(c_rt_lib0check_true_native(___nl__8)){ goto label_46;}
#line 832
c_rt_lib0move(&___nl__9,___get_global_const(0));
#line 832
c_rt_lib0move(&___nl__10,___get_global_const(6));
#line 832
c_rt_lib0move(&___nl__7, string0substr(___nl__6, ___nl__9, ___nl__10));
#line 832
c_rt_lib0clear(&___nl__10);
#line 832
c_rt_lib0clear(&___nl__9);
#line 832
c_rt_lib0move(&___nl__9,___get_global_const(165));
#line 832
c_rt_lib0move(&___nl__7, c_rt_lib0eq(___nl__7, ___nl__9));
#line 832
c_rt_lib0clear(&___nl__9);
#line 832
label_46:
#line 832
c_rt_lib0clear(&___nl__8);
#line 832
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 832
if(c_rt_lib0check_true_native(___nl__7)){ goto label_413;}
#line 833
c_rt_lib0move(&___nl__9,___get_global_const(6));
#line 833
c_rt_lib0move(&___nl__10, string0length(___nl__6));
#line 833
c_rt_lib0move(&___nl__11,___get_global_const(6));
#line 833
c_rt_lib0move(&___nl__10, c_rt_lib0sub_mod(___nl__10, ___nl__11));
#line 833
c_rt_lib0clear(&___nl__11);
#line 833
c_rt_lib0move(&___nl__8, string0substr(___nl__6, ___nl__9, ___nl__10));
#line 833
c_rt_lib0clear(&___nl__10);
#line 833
c_rt_lib0clear(&___nl__9);
#line 834
c_rt_lib0move(&___nl__9,___get_global_const(66));
#line 834
c_rt_lib0move(&___nl__9, c_rt_lib0eq(___nl__8, ___nl__9));
#line 834
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__9));
#line 834
if(c_rt_lib0check_true_native(___nl__9)){ goto label_69;}
#line 835
c_rt_lib0move(&___nl__10,___get_global_const(2));
#line 835
c_rt_lib0move(&___nl__10, c_rt_lib0ov_mk_arg(___get_global_const(45), ___nl__10));
#line 835
c_rt_lib0copy(&___nl__11, ___nl__10);
#line 835
c_rt_lib0hash_set_value_dec(&___nl__1, ___get_global_const(66), ___nl__11);
#line 835
c_rt_lib0clear(&___nl__10);
#line 835
c_rt_lib0clear(&___nl__11);
#line 836
goto label_409;
#line 836
label_69:
#line 836
c_rt_lib0move(&___nl__9,___get_global_const(33));
#line 836
c_rt_lib0move(&___nl__9, c_rt_lib0eq(___nl__8, ___nl__9));
#line 836
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__9));
#line 836
if(c_rt_lib0check_true_native(___nl__9)){ goto label_80;}
#line 837
c_rt_lib0move(&___nl__10, c_rt_lib0ov_mk_none(___get_global_const(33)));
#line 837
c_rt_lib0copy(&___nl__11, ___nl__10);
#line 837
c_rt_lib0hash_set_value_dec(&___nl__1, ___get_global_const(70), ___nl__11);
#line 837
c_rt_lib0clear(&___nl__10);
#line 837
c_rt_lib0clear(&___nl__11);
#line 838
goto label_409;
#line 838
label_80:
#line 838
c_rt_lib0move(&___nl__9,___get_global_const(36));
#line 838
c_rt_lib0move(&___nl__9, c_rt_lib0eq(___nl__8, ___nl__9));
#line 838
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__9));
#line 838
if(c_rt_lib0check_true_native(___nl__9)){ goto label_91;}
#line 839
c_rt_lib0move(&___nl__10, c_rt_lib0ov_mk_none(___get_global_const(36)));
#line 839
c_rt_lib0copy(&___nl__11, ___nl__10);
#line 839
c_rt_lib0hash_set_value_dec(&___nl__1, ___get_global_const(70), ___nl__11);
#line 839
c_rt_lib0clear(&___nl__10);
#line 839
c_rt_lib0clear(&___nl__11);
#line 840
goto label_409;
#line 840
label_91:
#line 840
c_rt_lib0move(&___nl__9,___get_global_const(32));
#line 840
c_rt_lib0move(&___nl__9, c_rt_lib0eq(___nl__8, ___nl__9));
#line 840
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__9));
#line 840
if(c_rt_lib0check_true_native(___nl__9)){ goto label_102;}
#line 841
c_rt_lib0move(&___nl__10, c_rt_lib0ov_mk_none(___get_global_const(32)));
#line 841
c_rt_lib0copy(&___nl__11, ___nl__10);
#line 841
c_rt_lib0hash_set_value_dec(&___nl__1, ___get_global_const(70), ___nl__11);
#line 841
c_rt_lib0clear(&___nl__10);
#line 841
c_rt_lib0clear(&___nl__11);
#line 842
goto label_409;
#line 842
label_102:
#line 842
c_rt_lib0move(&___nl__9,___get_global_const(34));
#line 842
c_rt_lib0move(&___nl__9, c_rt_lib0eq(___nl__8, ___nl__9));
#line 842
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__9));
#line 842
if(c_rt_lib0check_true_native(___nl__9)){ goto label_113;}
#line 843
c_rt_lib0move(&___nl__10, c_rt_lib0ov_mk_none(___get_global_const(34)));
#line 843
c_rt_lib0copy(&___nl__11, ___nl__10);
#line 843
c_rt_lib0hash_set_value_dec(&___nl__1, ___get_global_const(70), ___nl__11);
#line 843
c_rt_lib0clear(&___nl__10);
#line 843
c_rt_lib0clear(&___nl__11);
#line 844
goto label_409;
#line 844
label_113:
#line 844
c_rt_lib0move(&___nl__9,___get_global_const(37));
#line 844
c_rt_lib0move(&___nl__9, c_rt_lib0eq(___nl__8, ___nl__9));
#line 844
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__9));
#line 844
if(c_rt_lib0check_true_native(___nl__9)){ goto label_135;}
#line 845
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(70)));
#line 845
c_rt_lib0move(&___nl__10, c_rt_lib0priv_is(___nl__10, ___get_global_const(37)));
#line 845
c_rt_lib0move(&___nl__10, c_rt_lib0not(___nl__10));
#line 845
c_rt_lib0move(&___nl__10, c_rt_lib0not(___nl__10));
#line 845
if(c_rt_lib0check_true_native(___nl__10)){ goto label_132;}
#line 846
c_rt_lib0move(&___nl__12,___get_global_const(35));
#line 846
c_rt_lib0move(&___nl__11, c_rt_lib0hash_mk(1, ___get_global_const(31), ___nl__12));
#line 846
c_rt_lib0clear(&___nl__12);
#line 846
c_rt_lib0move(&___nl__11, c_rt_lib0ov_mk_arg(___get_global_const(37), ___nl__11));
#line 846
c_rt_lib0copy(&___nl__12, ___nl__11);
#line 846
c_rt_lib0hash_set_value_dec(&___nl__1, ___get_global_const(70), ___nl__12);
#line 846
c_rt_lib0clear(&___nl__11);
#line 846
c_rt_lib0clear(&___nl__12);
#line 847
goto label_132;
#line 847
label_132:
#line 847
c_rt_lib0clear(&___nl__10);
#line 848
goto label_409;
#line 848
label_135:
#line 848
c_rt_lib0move(&___nl__9,___get_global_const(39));
#line 848
c_rt_lib0move(&___nl__9, c_rt_lib0eq(___nl__8, ___nl__9));
#line 848
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__9));
#line 848
if(c_rt_lib0check_true_native(___nl__9)){ goto label_146;}
#line 849
c_rt_lib0move(&___nl__10, c_rt_lib0ov_mk_none(___get_global_const(39)));
#line 849
c_rt_lib0copy(&___nl__11, ___nl__10);
#line 849
c_rt_lib0hash_set_value_dec(&___nl__1, ___get_global_const(70), ___nl__11);
#line 849
c_rt_lib0clear(&___nl__10);
#line 849
c_rt_lib0clear(&___nl__11);
#line 850
goto label_409;
#line 850
label_146:
#line 850
c_rt_lib0move(&___nl__9,___get_global_const(38));
#line 850
c_rt_lib0move(&___nl__9, c_rt_lib0eq(___nl__8, ___nl__9));
#line 850
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__9));
#line 850
if(c_rt_lib0check_true_native(___nl__9)){ goto label_157;}
#line 851
c_rt_lib0move(&___nl__10, c_rt_lib0ov_mk_none(___get_global_const(38)));
#line 851
c_rt_lib0copy(&___nl__11, ___nl__10);
#line 851
c_rt_lib0hash_set_value_dec(&___nl__1, ___get_global_const(70), ___nl__11);
#line 851
c_rt_lib0clear(&___nl__10);
#line 851
c_rt_lib0clear(&___nl__11);
#line 852
goto label_409;
#line 852
label_157:
#line 852
c_rt_lib0move(&___nl__9,___get_global_const(35));
#line 852
c_rt_lib0move(&___nl__9, c_rt_lib0eq(___nl__8, ___nl__9));
#line 852
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__9));
#line 852
if(c_rt_lib0check_true_native(___nl__9)){ goto label_171;}
#line 853
c_rt_lib0move(&___nl__10, c_rt_lib0ov_mk_none(___get_global_const(35)));
#line 853
c_rt_lib0copy(&___nl__11, ___nl__10);
#line 853
c_rt_lib0hash_set_value_dec(&___nl__1, ___get_global_const(70), ___nl__11);
#line 853
c_rt_lib0clear(&___nl__10);
#line 853
c_rt_lib0clear(&___nl__11);
#line 854
c_rt_lib0move(&___nl__10, compiler_priv0get_dir_pretty_name());
#line 854
c_rt_lib0copy(&___nl__3, ___nl__10);
#line 854
c_rt_lib0clear(&___nl__10);
#line 855
goto label_409;
#line 855
label_171:
#line 855
c_rt_lib0move(&___nl__9,___get_global_const(57));
#line 855
c_rt_lib0move(&___nl__9, c_rt_lib0eq(___nl__8, ___nl__9));
#line 855
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__9));
#line 855
if(c_rt_lib0check_true_native(___nl__9)){ goto label_182;}
#line 856
c_rt_lib0move(&___nl__10, c_rt_lib0ov_mk_none(___get_global_const(57)));
#line 856
c_rt_lib0copy(&___nl__11, ___nl__10);
#line 856
c_rt_lib0hash_set_value_dec(&___nl__1, ___get_global_const(69), ___nl__11);
#line 856
c_rt_lib0clear(&___nl__10);
#line 856
c_rt_lib0clear(&___nl__11);
#line 857
goto label_409;
#line 857
label_182:
#line 857
c_rt_lib0move(&___nl__9,___get_global_const(58));
#line 857
c_rt_lib0move(&___nl__9, c_rt_lib0eq(___nl__8, ___nl__9));
#line 857
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__9));
#line 857
if(c_rt_lib0check_true_native(___nl__9)){ goto label_208;}
#line 858
c_rt_lib0move(&___nl__10,___get_global_const(1));
#line 858
c_rt_lib0move(&___nl__4, c_rt_lib0add_mod(___nl__4, ___nl__10));
#line 858
c_rt_lib0clear(&___nl__10);
#line 859
c_rt_lib0move(&___nl__10, array0len(___nl__0));
#line 859
c_rt_lib0move(&___nl__10, c_rt_lib0lt(___nl__4, ___nl__10));
#line 859
c_rt_lib0move(&___nl__10, c_rt_lib0not(___nl__10));
#line 859
c_rt_lib0move(&___nl__10, c_rt_lib0not(___nl__10));
#line 859
if(c_rt_lib0check_true_native(___nl__10)){ goto label_198;}
#line 859
c_rt_lib0move(&___nl__11, c_rt_lib0array_mk(0));
#line 859
nl_die_arg(___nl__11);
#line 859
goto label_198;
#line 859
label_198:
#line 859
c_rt_lib0clear(&___nl__10);
#line 859
c_rt_lib0clear(&___nl__11);
#line 860
c_rt_lib0move(&___nl__10, c_rt_lib0array_get(___nl__0, ___nl__4));
#line 860
c_rt_lib0move(&___nl__10, c_rt_lib0ov_mk_arg(___get_global_const(58), ___nl__10));
#line 860
c_rt_lib0copy(&___nl__11, ___nl__10);
#line 860
c_rt_lib0hash_set_value_dec(&___nl__1, ___get_global_const(69), ___nl__11);
#line 860
c_rt_lib0clear(&___nl__10);
#line 860
c_rt_lib0clear(&___nl__11);
#line 861
goto label_409;
#line 861
label_208:
#line 861
c_rt_lib0move(&___nl__9,___get_global_const(55));
#line 861
c_rt_lib0move(&___nl__9, c_rt_lib0eq(___nl__8, ___nl__9));
#line 861
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__9));
#line 861
if(c_rt_lib0check_true_native(___nl__9)){ goto label_219;}
#line 862
c_rt_lib0move(&___nl__10, c_rt_lib0ov_mk_none(___get_global_const(55)));
#line 862
c_rt_lib0copy(&___nl__11, ___nl__10);
#line 862
c_rt_lib0hash_set_value_dec(&___nl__1, ___get_global_const(69), ___nl__11);
#line 862
c_rt_lib0clear(&___nl__10);
#line 862
c_rt_lib0clear(&___nl__11);
#line 863
goto label_409;
#line 863
label_219:
#line 863
c_rt_lib0move(&___nl__9,___get_global_const(56));
#line 863
c_rt_lib0move(&___nl__9, c_rt_lib0eq(___nl__8, ___nl__9));
#line 863
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__9));
#line 863
if(c_rt_lib0check_true_native(___nl__9)){ goto label_230;}
#line 864
c_rt_lib0move(&___nl__10, c_rt_lib0ov_mk_none(___get_global_const(56)));
#line 864
c_rt_lib0copy(&___nl__11, ___nl__10);
#line 864
c_rt_lib0hash_set_value_dec(&___nl__1, ___get_global_const(69), ___nl__11);
#line 864
c_rt_lib0clear(&___nl__10);
#line 864
c_rt_lib0clear(&___nl__11);
#line 865
goto label_409;
#line 865
label_230:
#line 865
c_rt_lib0move(&___nl__9,___get_global_const(166));
#line 865
c_rt_lib0move(&___nl__9, c_rt_lib0eq(___nl__8, ___nl__9));
#line 865
if(c_rt_lib0check_true_native(___nl__9)){ goto label_236;}
#line 865
c_rt_lib0move(&___nl__9,___get_global_const(167));
#line 865
c_rt_lib0move(&___nl__9, c_rt_lib0eq(___nl__8, ___nl__9));
#line 865
label_236:
#line 865
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__9));
#line 865
if(c_rt_lib0check_true_native(___nl__9)){ goto label_262;}
#line 866
c_rt_lib0move(&___nl__10,___get_global_const(1));
#line 866
c_rt_lib0move(&___nl__4, c_rt_lib0add_mod(___nl__4, ___nl__10));
#line 866
c_rt_lib0clear(&___nl__10);
#line 867
c_rt_lib0move(&___nl__10, array0len(___nl__0));
#line 867
c_rt_lib0move(&___nl__10, c_rt_lib0lt(___nl__4, ___nl__10));
#line 867
c_rt_lib0move(&___nl__10, c_rt_lib0not(___nl__10));
#line 867
c_rt_lib0move(&___nl__10, c_rt_lib0not(___nl__10));
#line 867
if(c_rt_lib0check_true_native(___nl__10)){ goto label_250;}
#line 867
c_rt_lib0move(&___nl__11, c_rt_lib0array_mk(0));
#line 867
nl_die_arg(___nl__11);
#line 867
goto label_250;
#line 867
label_250:
#line 867
c_rt_lib0clear(&___nl__10);
#line 867
c_rt_lib0clear(&___nl__11);
#line 868
c_rt_lib0move(&___nl__10, c_rt_lib0array_get(___nl__0, ___nl__4));
#line 868
c_rt_lib0move(&___nl__11,___get_global_const(77));
#line 868
c_rt_lib0move(&___nl__10, c_rt_lib0concat_add(___nl__10, ___nl__11));
#line 868
c_rt_lib0clear(&___nl__11);
#line 868
c_rt_lib0copy(&___nl__11, ___nl__10);
#line 868
c_rt_lib0hash_set_value_dec(&___nl__1, ___get_global_const(65), ___nl__11);
#line 868
c_rt_lib0clear(&___nl__10);
#line 868
c_rt_lib0clear(&___nl__11);
#line 869
goto label_409;
#line 869
label_262:
#line 869
c_rt_lib0move(&___nl__9,___get_global_const(168));
#line 869
c_rt_lib0move(&___nl__9, c_rt_lib0eq(___nl__8, ___nl__9));
#line 869
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__9));
#line 869
if(c_rt_lib0check_true_native(___nl__9)){ goto label_287;}
#line 870
c_rt_lib0move(&___nl__10,___get_global_const(1));
#line 870
c_rt_lib0move(&___nl__4, c_rt_lib0add_mod(___nl__4, ___nl__10));
#line 870
c_rt_lib0clear(&___nl__10);
#line 871
c_rt_lib0move(&___nl__10, array0len(___nl__0));
#line 871
c_rt_lib0move(&___nl__10, c_rt_lib0lt(___nl__4, ___nl__10));
#line 871
c_rt_lib0move(&___nl__10, c_rt_lib0not(___nl__10));
#line 871
c_rt_lib0move(&___nl__10, c_rt_lib0not(___nl__10));
#line 871
if(c_rt_lib0check_true_native(___nl__10)){ goto label_278;}
#line 871
c_rt_lib0move(&___nl__11, c_rt_lib0array_mk(0));
#line 871
nl_die_arg(___nl__11);
#line 871
goto label_278;
#line 871
label_278:
#line 871
c_rt_lib0clear(&___nl__10);
#line 871
c_rt_lib0clear(&___nl__11);
#line 872
c_rt_lib0move(&___nl__10, c_rt_lib0array_get(___nl__0, ___nl__4));
#line 872
c_rt_lib0copy(&___nl__11, ___nl__10);
#line 872
c_rt_lib0hash_set_value_dec(&___nl__1, ___get_global_const(68), ___nl__11);
#line 872
c_rt_lib0clear(&___nl__10);
#line 872
c_rt_lib0clear(&___nl__11);
#line 873
goto label_409;
#line 873
label_287:
#line 873
c_rt_lib0move(&___nl__9,___get_global_const(169));
#line 873
c_rt_lib0move(&___nl__9, c_rt_lib0eq(___nl__8, ___nl__9));
#line 873
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__9));
#line 873
if(c_rt_lib0check_true_native(___nl__9)){ goto label_298;}
#line 874
c_rt_lib0move(&___nl__10, c_rt_lib0ov_mk_none(___get_global_const(50)));
#line 874
c_rt_lib0copy(&___nl__11, ___nl__10);
#line 874
c_rt_lib0hash_set_value_dec(&___nl__1, ___get_global_const(67), ___nl__11);
#line 874
c_rt_lib0clear(&___nl__10);
#line 874
c_rt_lib0clear(&___nl__11);
#line 875
goto label_409;
#line 875
label_298:
#line 875
c_rt_lib0move(&___nl__9,___get_global_const(170));
#line 875
c_rt_lib0move(&___nl__9, c_rt_lib0eq(___nl__8, ___nl__9));
#line 875
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__9));
#line 875
if(c_rt_lib0check_true_native(___nl__9)){ goto label_309;}
#line 876
c_rt_lib0move(&___nl__10, c_rt_lib0ov_mk_none(___get_global_const(51)));
#line 876
c_rt_lib0copy(&___nl__11, ___nl__10);
#line 876
c_rt_lib0hash_set_value_dec(&___nl__1, ___get_global_const(67), ___nl__11);
#line 876
c_rt_lib0clear(&___nl__10);
#line 876
c_rt_lib0clear(&___nl__11);
#line 877
goto label_409;
#line 877
label_309:
#line 877
c_rt_lib0move(&___nl__9,___get_global_const(171));
#line 877
c_rt_lib0move(&___nl__9, c_rt_lib0eq(___nl__8, ___nl__9));
#line 877
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__9));
#line 877
if(c_rt_lib0check_true_native(___nl__9)){ goto label_320;}
#line 878
c_rt_lib0move(&___nl__10, c_rt_lib0ov_mk_none(___get_global_const(52)));
#line 878
c_rt_lib0copy(&___nl__11, ___nl__10);
#line 878
c_rt_lib0hash_set_value_dec(&___nl__1, ___get_global_const(67), ___nl__11);
#line 878
c_rt_lib0clear(&___nl__10);
#line 878
c_rt_lib0clear(&___nl__11);
#line 879
goto label_409;
#line 879
label_320:
#line 879
c_rt_lib0move(&___nl__9,___get_global_const(172));
#line 879
c_rt_lib0move(&___nl__9, c_rt_lib0eq(___nl__8, ___nl__9));
#line 879
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__9));
#line 879
if(c_rt_lib0check_true_native(___nl__9)){ goto label_331;}
#line 880
c_rt_lib0move(&___nl__10, c_rt_lib0ov_mk_none(___get_global_const(53)));
#line 880
c_rt_lib0copy(&___nl__11, ___nl__10);
#line 880
c_rt_lib0hash_set_value_dec(&___nl__1, ___get_global_const(67), ___nl__11);
#line 880
c_rt_lib0clear(&___nl__10);
#line 880
c_rt_lib0clear(&___nl__11);
#line 881
goto label_409;
#line 881
label_331:
#line 881
c_rt_lib0move(&___nl__9,___get_global_const(173));
#line 881
c_rt_lib0move(&___nl__9, c_rt_lib0eq(___nl__8, ___nl__9));
#line 881
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__9));
#line 881
if(c_rt_lib0check_true_native(___nl__9)){ goto label_342;}
#line 882
c_rt_lib0move(&___nl__10, c_rt_lib0ov_mk_none(___get_global_const(54)));
#line 882
c_rt_lib0copy(&___nl__11, ___nl__10);
#line 882
c_rt_lib0hash_set_value_dec(&___nl__1, ___get_global_const(67), ___nl__11);
#line 882
c_rt_lib0clear(&___nl__10);
#line 882
c_rt_lib0clear(&___nl__11);
#line 883
goto label_409;
#line 883
label_342:
#line 883
c_rt_lib0move(&___nl__9,___get_global_const(174));
#line 883
c_rt_lib0move(&___nl__9, c_rt_lib0eq(___nl__8, ___nl__9));
#line 883
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__9));
#line 883
if(c_rt_lib0check_true_native(___nl__9)){ goto label_353;}
#line 884
c_rt_lib0move(&___nl__10, c_rt_lib0ov_mk_none(___get_global_const(61)));
#line 884
c_rt_lib0copy(&___nl__11, ___nl__10);
#line 884
c_rt_lib0hash_set_value_dec(&___nl__1, ___get_global_const(71), ___nl__11);
#line 884
c_rt_lib0clear(&___nl__10);
#line 884
c_rt_lib0clear(&___nl__11);
#line 885
goto label_409;
#line 885
label_353:
#line 885
c_rt_lib0move(&___nl__9,___get_global_const(72));
#line 885
c_rt_lib0move(&___nl__9, c_rt_lib0eq(___nl__8, ___nl__9));
#line 885
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__9));
#line 885
if(c_rt_lib0check_true_native(___nl__9)){ goto label_364;}
#line 886
c_rt_lib0move(&___nl__10, c_rt_lib0get_true());
#line 886
c_rt_lib0copy(&___nl__11, ___nl__10);
#line 886
c_rt_lib0hash_set_value_dec(&___nl__1, ___get_global_const(72), ___nl__11);
#line 886
c_rt_lib0clear(&___nl__10);
#line 886
c_rt_lib0clear(&___nl__11);
#line 887
goto label_409;
#line 887
label_364:
#line 887
c_rt_lib0move(&___nl__9,___get_global_const(73));
#line 887
c_rt_lib0move(&___nl__9, c_rt_lib0eq(___nl__8, ___nl__9));
#line 887
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__9));
#line 887
if(c_rt_lib0check_true_native(___nl__9)){ goto label_375;}
#line 888
c_rt_lib0move(&___nl__10, c_rt_lib0get_true());
#line 888
c_rt_lib0copy(&___nl__11, ___nl__10);
#line 888
c_rt_lib0hash_set_value_dec(&___nl__1, ___get_global_const(73), ___nl__11);
#line 888
c_rt_lib0clear(&___nl__10);
#line 888
c_rt_lib0clear(&___nl__11);
#line 889
goto label_409;
#line 889
label_375:
#line 889
c_rt_lib0move(&___nl__9,___get_global_const(31));
#line 889
c_rt_lib0move(&___nl__9, c_rt_lib0eq(___nl__8, ___nl__9));
#line 889
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__9));
#line 889
if(c_rt_lib0check_true_native(___nl__9)){ goto label_403;}
#line 890
c_rt_lib0move(&___nl__10,___get_global_const(1));
#line 890
c_rt_lib0move(&___nl__4, c_rt_lib0add_mod(___nl__4, ___nl__10));
#line 890
c_rt_lib0clear(&___nl__10);
#line 891
c_rt_lib0move(&___nl__10, array0len(___nl__0));
#line 891
c_rt_lib0move(&___nl__10, c_rt_lib0lt(___nl__4, ___nl__10));
#line 891
c_rt_lib0move(&___nl__10, c_rt_lib0not(___nl__10));
#line 891
c_rt_lib0move(&___nl__10, c_rt_lib0not(___nl__10));
#line 891
if(c_rt_lib0check_true_native(___nl__10)){ goto label_391;}
#line 891
c_rt_lib0move(&___nl__11, c_rt_lib0array_mk(0));
#line 891
nl_die_arg(___nl__11);
#line 891
goto label_391;
#line 891
label_391:
#line 891
c_rt_lib0clear(&___nl__10);
#line 891
c_rt_lib0clear(&___nl__11);
#line 892
c_rt_lib0move(&___nl__11, c_rt_lib0array_get(___nl__0, ___nl__4));
#line 892
c_rt_lib0move(&___nl__10, c_rt_lib0hash_mk(1, ___get_global_const(31), ___nl__11));
#line 892
c_rt_lib0clear(&___nl__11);
#line 892
c_rt_lib0move(&___nl__10, c_rt_lib0ov_mk_arg(___get_global_const(37), ___nl__10));
#line 892
c_rt_lib0copy(&___nl__11, ___nl__10);
#line 892
c_rt_lib0hash_set_value_dec(&___nl__1, ___get_global_const(70), ___nl__11);
#line 892
c_rt_lib0clear(&___nl__10);
#line 892
c_rt_lib0clear(&___nl__11);
#line 893
goto label_409;
#line 893
label_403:
#line 894
c_rt_lib0move(&___nl__10,___get_global_const(175));
#line 894
c_rt_lib0move(&___nl__10, c_rt_lib0concat_add(___nl__10, ___nl__6));
#line 894
c_rt_lib0delete(c_fe_lib0print(___nl__10));
#line 894
c_rt_lib0clear(&___nl__10);
#line 895
goto label_409;
#line 895
label_409:
#line 895
c_rt_lib0clear(&___nl__9);
#line 895
c_rt_lib0clear(&___nl__8);
#line 896
goto label_437;
#line 896
label_413:
#line 897
c_rt_lib0copy(&___nl__8, ___nl__2);
#line 897
c_rt_lib0move(&___nl__8, c_rt_lib0not(___nl__8));
#line 897
c_rt_lib0move(&___nl__8, c_rt_lib0not(___nl__8));
#line 897
if(c_rt_lib0check_true_native(___nl__8)){ goto label_424;}
#line 897
c_rt_lib0move(&___nl__9, c_rt_lib0array_mk(0));
#line 897
c_rt_lib0copy(&___nl__10, ___nl__9);
#line 897
c_rt_lib0hash_set_value_dec(&___nl__1, ___get_global_const(64), ___nl__10);
#line 897
c_rt_lib0clear(&___nl__9);
#line 897
c_rt_lib0clear(&___nl__10);
#line 897
goto label_424;
#line 897
label_424:
#line 897
c_rt_lib0clear(&___nl__8);
#line 898
c_rt_lib0move(&___nl__8,___get_global_const(64));
#line 898
c_rt_lib0move(&___nl__8, c_rt_lib0get_ref_hash(___nl__1, ___nl__8));
#line 898
c_rt_lib0delete(array0push(&___nl__8, ___nl__6));
#line 898
c_rt_lib0move(&___nl__9,___get_global_const(64));
#line 898
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__1, ___nl__9, ___nl__8));
#line 898
c_rt_lib0clear(&___nl__9);
#line 898
c_rt_lib0clear(&___nl__8);
#line 899
c_rt_lib0move(&___nl__8, c_rt_lib0get_true());
#line 899
c_rt_lib0copy(&___nl__2, ___nl__8);
#line 899
c_rt_lib0clear(&___nl__8);
#line 900
goto label_437;
#line 900
label_437:
#line 900
c_rt_lib0clear(&___nl__7);
#line 900
c_rt_lib0clear(&___nl__6);
#line 830
c_rt_lib0move(&___nl__6,___get_global_const(1));
#line 830
c_rt_lib0move(&___nl__4, c_rt_lib0add_mod(___nl__4, ___nl__6));
#line 830
c_rt_lib0clear(&___nl__6);
#line 901
goto label_26;
#line 901
label_444:
#line 901
c_rt_lib0clear(&___nl__4);
#line 901
c_rt_lib0clear(&___nl__5);
#line 902
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(65)));
#line 902
c_rt_lib0move(&___nl__5,___get_global_const(2));
#line 902
c_rt_lib0move(&___nl__4, c_rt_lib0eq(___nl__4, ___nl__5));
#line 902
c_rt_lib0clear(&___nl__5);
#line 902
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 902
if(c_rt_lib0check_true_native(___nl__4)){ goto label_463;}
#line 903
c_rt_lib0move(&___nl__5,___get_global_const(176));
#line 903
c_rt_lib0move(&___nl__5, c_rt_lib0concat_add(___nl__5, ___nl__3));
#line 903
c_rt_lib0move(&___nl__6,___get_global_const(77));
#line 903
c_rt_lib0move(&___nl__5, c_rt_lib0concat_add(___nl__5, ___nl__6));
#line 903
c_rt_lib0clear(&___nl__6);
#line 903
c_rt_lib0copy(&___nl__6, ___nl__5);
#line 903
c_rt_lib0hash_set_value_dec(&___nl__1, ___get_global_const(65), ___nl__6);
#line 903
c_rt_lib0clear(&___nl__5);
#line 903
c_rt_lib0clear(&___nl__6);
#line 904
goto label_463;
#line 904
label_463:
#line 904
c_rt_lib0clear(&___nl__4);
#line 905
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(66)));
#line 905
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__4, ___get_global_const(45)));
#line 905
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 905
if(c_rt_lib0check_true_native(___nl__4)){ goto label_479;}
#line 905
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(65)));
#line 905
c_rt_lib0move(&___nl__6, compiler_priv0get_default_deref_file());
#line 905
c_rt_lib0move(&___nl__5, c_rt_lib0concat_add(___nl__5, ___nl__6));
#line 905
c_rt_lib0clear(&___nl__6);
#line 905
c_rt_lib0move(&___nl__5, c_rt_lib0ov_mk_arg(___get_global_const(45), ___nl__5));
#line 905
c_rt_lib0copy(&___nl__6, ___nl__5);
#line 905
c_rt_lib0hash_set_value_dec(&___nl__1, ___get_global_const(66), ___nl__6);
#line 905
c_rt_lib0clear(&___nl__5);
#line 905
c_rt_lib0clear(&___nl__6);
#line 905
goto label_479;
#line 905
label_479:
#line 905
c_rt_lib0clear(&___nl__4);
#line 906
c_rt_lib0clear(&___nl__0);
#line 906
c_rt_lib0clear(&___nl__2);
#line 906
c_rt_lib0clear(&___nl__3);
#line 906
return ___nl__1;
#line 906
c_rt_lib0clear(&___nl__1);
#line 906
c_rt_lib0clear(&___nl__2);
#line 906
c_rt_lib0clear(&___nl__3);
#line 906
c_rt_lib0clear(&___nl__0);
#line 906
return NULL;
}


static ImmT ___const__[16];
static int ___const_init__ = 1;
void compiler0__const__init(){
if(!___const_init__) nl_die();
___const_init__ = 0;
__const__f = &___const__[15];


for(int i=0;i<15;++i) ___const__[i] = NULL;
c_rt_lib0register_const(___const__, 15);
}
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
