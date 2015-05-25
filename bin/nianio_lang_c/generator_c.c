
/* (c) Atinea Sp z o. o.
 *  Stamp: nianio lang
 */
#include "c_rt_lib.h"
#include "c_global_const.h"
#include "generator_c.h"
#include "ptd.h"
#include "nlasm.h"
#include "string.h"
#include "array.h"
#include "hash.h"
#include "ov.h"
#include "singleton.h"
#include "nl.h"
#include "boolean_t.h"
#include "string_utils.h"
#line 1 "generator_c.nl"

static ImmT *__const__f = NULL;
void generator_c_priv0__const__init();
ImmT generator_c_priv0__const__sim(int __nr);
ImmT generator_c_priv0__const__sing(int __nr);

ImmT generator_c_priv0get_bin_ops();
ImmT generator_c_priv0get_bin_ops_mod();
ImmT generator_c_priv0get_unary_ops();
ImmT generator_c_priv0gen_unary_ops();
ImmT generator_c_priv0gen_bin_ops();
ImmT generator_c_priv0gen_bin_ops_mod();
ImmT generator_c_priv0print(ImmT * ___ref___0,ImmT ___nl__1);
ImmT generator_c_priv0print_to_header(ImmT * ___ref___0,ImmT ___nl__1);
ImmT generator_c_priv0println_to_header(ImmT * ___ref___0,ImmT ___nl__1);
ImmT generator_c_priv0arg_t();
ImmT generator_c_priv0println(ImmT * ___ref___0,ImmT ___nl__1);
ImmT generator_c_priv0get_reg(ImmT * ___ref___0,ImmT ___nl__1);
ImmT generator_c_priv0get_reg_ref(ImmT * ___ref___0,ImmT ___nl__1);
ImmT generator_c_priv0get_string(ImmT ___nl__0);
ImmT generator_c_priv0generate_global_const_files(ImmT * ___ref___0);
ImmT generator_c_priv0get_include(ImmT ___nl__0);
ImmT generator_c_priv0get_cr();
ImmT generator_c_priv0get_function_name(ImmT ___nl__0,ImmT ___nl__1);
ImmT generator_c_priv0get_function_header(ImmT ___nl__0,ImmT ___nl__1);
ImmT generator_c_priv0get_const(ImmT * ___ref___0,ImmT ___nl__1);
ImmT generator_c_priv0insert_const_to_modules_hash(ImmT * ___ref___0,ImmT ___nl__1,ImmT ___nl__2);
ImmT generator_c_priv0get_global_const(ImmT * ___ref___0,ImmT ___nl__1,ImmT ___nl__2);
ImmT generator_c_priv0get_const_sim(ImmT * ___ref___0,ImmT ___nl__1);
ImmT generator_c_priv0get_const_singleton(ImmT * ___ref___0,ImmT ___nl__1);
ImmT generator_c_priv0get_func_ptr_header(ImmT ___nl__0,ImmT ___nl__1);
ImmT generator_c_priv0print_mod(ImmT * ___ref___0,ImmT ___nl__1);
ImmT generator_c_priv0print_init_const(ImmT * ___ref___0);
ImmT generator_c_priv0print_function_block(ImmT * ___ref___0,ImmT ___nl__1);
ImmT generator_c_priv0is_singleton_use_function(ImmT ___nl__0);
ImmT generator_c_priv0move_args_to_register(ImmT * ___ref___0);
ImmT generator_c_priv0move_register_to_ref_args(ImmT * ___ref___0);
ImmT generator_c_priv0get_fun_lib(ImmT ___nl__0,ImmT ___nl__1);
ImmT generator_c_priv0get_module_name(ImmT ___nl__0);
ImmT generator_c_priv0get_fun_name(ImmT ___nl__0,ImmT ___nl__1,ImmT ___nl__2);
ImmT generator_c_priv0get_lib_fun(ImmT ___nl__0);
ImmT generator_c_priv0generate_imm(ImmT * ___ref___0,ImmT ___nl__1);
ImmT generator_c_priv0print_cmd(ImmT * ___ref___0,ImmT ___nl__1);
ImmT generator_c_priv0get_assign(ImmT * ___ref___0,ImmT ___nl__1,ImmT ___nl__2);
ImmT generator_c_priv0generate_call(ImmT * ___ref___0,ImmT ___nl__1);
ImmT generator_c_priv0create_sim(ImmT ___nl__0);
ImmT generator_c_priv0create_sim_to_memory(ImmT ___nl__0,ImmT ___nl__1);


ImmT generator_c_priv0get_bin_ops(){
generator_c_priv0__const__init();
return generator_c_priv0__const__sing(0);}
ImmT generator_c_priv0get_bin_ops0cal() {
generator_c_priv0__const__init();
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
#line 17
c_rt_lib0move(&___nl__1, generator_c_priv0gen_bin_ops());
#line 17
c_rt_lib0move(&___nl__0, singleton0sigleton_do_not_use_without_approval(___nl__1));
#line 17
c_rt_lib0clear(&___nl__1);
#line 17
return ___nl__0;
#line 17
c_rt_lib0clear(&___nl__0);
#line 17
return NULL;
}

ImmT generator_c_priv0get_bin_ops_mod(){
generator_c_priv0__const__init();
return generator_c_priv0__const__sing(1);}
ImmT generator_c_priv0get_bin_ops_mod0cal() {
generator_c_priv0__const__init();
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
#line 20
c_rt_lib0move(&___nl__1, generator_c_priv0gen_bin_ops_mod());
#line 20
c_rt_lib0move(&___nl__0, singleton0sigleton_do_not_use_without_approval(___nl__1));
#line 20
c_rt_lib0clear(&___nl__1);
#line 20
return ___nl__0;
#line 20
c_rt_lib0clear(&___nl__0);
#line 20
return NULL;
}

ImmT generator_c_priv0get_unary_ops(){
generator_c_priv0__const__init();
return generator_c_priv0__const__sing(2);}
ImmT generator_c_priv0get_unary_ops0cal() {
generator_c_priv0__const__init();
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
#line 24
c_rt_lib0move(&___nl__1, generator_c_priv0gen_unary_ops());
#line 24
c_rt_lib0move(&___nl__0, singleton0sigleton_do_not_use_without_approval(___nl__1));
#line 24
c_rt_lib0clear(&___nl__1);
#line 24
return ___nl__0;
#line 24
c_rt_lib0clear(&___nl__0);
#line 24
return NULL;
}

ImmT generator_c_priv0gen_unary_ops(){
generator_c_priv0__const__init();
return generator_c_priv0__const__sing(3);}
ImmT generator_c_priv0gen_unary_ops0cal() {
generator_c_priv0__const__init();
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
#line 28
c_rt_lib0move(&___nl__0, c_rt_lib0hash_mk(0));
#line 29
c_rt_lib0move(&___nl__1,___get_global_const(243));
#line 29
c_rt_lib0move(&___nl__2,___get_global_const(244));
#line 29
c_rt_lib0delete(hash0set_value(&___nl__0, ___nl__1, ___nl__2));
#line 29
c_rt_lib0clear(&___nl__2);
#line 29
c_rt_lib0clear(&___nl__1);
#line 30
c_rt_lib0move(&___nl__1,___get_global_const(245));
#line 30
c_rt_lib0move(&___nl__2,___get_global_const(246));
#line 30
c_rt_lib0delete(hash0set_value(&___nl__0, ___nl__1, ___nl__2));
#line 30
c_rt_lib0clear(&___nl__2);
#line 30
c_rt_lib0clear(&___nl__1);
#line 31
c_rt_lib0move(&___nl__1,___get_global_const(247));
#line 31
c_rt_lib0move(&___nl__2,___get_global_const(248));
#line 31
c_rt_lib0delete(hash0set_value(&___nl__0, ___nl__1, ___nl__2));
#line 31
c_rt_lib0clear(&___nl__2);
#line 31
c_rt_lib0clear(&___nl__1);
#line 32
return ___nl__0;
#line 32
c_rt_lib0clear(&___nl__0);
#line 32
return NULL;
}

ImmT generator_c_priv0gen_bin_ops(){
generator_c_priv0__const__init();
return generator_c_priv0__const__sing(4);}
ImmT generator_c_priv0gen_bin_ops0cal() {
generator_c_priv0__const__init();
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
#line 36
c_rt_lib0move(&___nl__0, c_rt_lib0hash_mk(0));
#line 37
c_rt_lib0move(&___nl__1,___get_global_const(249));
#line 37
c_rt_lib0move(&___nl__2,___get_global_const(249));
#line 37
c_rt_lib0delete(hash0set_value(&___nl__0, ___nl__1, ___nl__2));
#line 37
c_rt_lib0clear(&___nl__2);
#line 37
c_rt_lib0clear(&___nl__1);
#line 38
c_rt_lib0move(&___nl__1,___get_global_const(250));
#line 38
c_rt_lib0move(&___nl__2,___get_global_const(250));
#line 38
c_rt_lib0delete(hash0set_value(&___nl__0, ___nl__1, ___nl__2));
#line 38
c_rt_lib0clear(&___nl__2);
#line 38
c_rt_lib0clear(&___nl__1);
#line 39
c_rt_lib0move(&___nl__1,___get_global_const(247));
#line 39
c_rt_lib0move(&___nl__2,___get_global_const(251));
#line 39
c_rt_lib0delete(hash0set_value(&___nl__0, ___nl__1, ___nl__2));
#line 39
c_rt_lib0clear(&___nl__2);
#line 39
c_rt_lib0clear(&___nl__1);
#line 40
c_rt_lib0move(&___nl__1,___get_global_const(245));
#line 40
c_rt_lib0move(&___nl__2,___get_global_const(252));
#line 40
c_rt_lib0delete(hash0set_value(&___nl__0, ___nl__1, ___nl__2));
#line 40
c_rt_lib0clear(&___nl__2);
#line 40
c_rt_lib0clear(&___nl__1);
#line 41
c_rt_lib0move(&___nl__1,___get_global_const(253));
#line 41
c_rt_lib0move(&___nl__2,___get_global_const(254));
#line 41
c_rt_lib0delete(hash0set_value(&___nl__0, ___nl__1, ___nl__2));
#line 41
c_rt_lib0clear(&___nl__2);
#line 41
c_rt_lib0clear(&___nl__1);
#line 42
c_rt_lib0move(&___nl__1,___get_global_const(79));
#line 42
c_rt_lib0move(&___nl__2,___get_global_const(255));
#line 42
c_rt_lib0delete(hash0set_value(&___nl__0, ___nl__1, ___nl__2));
#line 42
c_rt_lib0clear(&___nl__2);
#line 42
c_rt_lib0clear(&___nl__1);
#line 43
c_rt_lib0move(&___nl__1,___get_global_const(256));
#line 43
c_rt_lib0move(&___nl__2,___get_global_const(257));
#line 43
c_rt_lib0delete(hash0set_value(&___nl__0, ___nl__1, ___nl__2));
#line 43
c_rt_lib0clear(&___nl__2);
#line 43
c_rt_lib0clear(&___nl__1);
#line 44
c_rt_lib0move(&___nl__1,___get_global_const(258));
#line 44
c_rt_lib0move(&___nl__2,___get_global_const(259));
#line 44
c_rt_lib0delete(hash0set_value(&___nl__0, ___nl__1, ___nl__2));
#line 44
c_rt_lib0clear(&___nl__2);
#line 44
c_rt_lib0clear(&___nl__1);
#line 45
c_rt_lib0move(&___nl__1,___get_global_const(260));
#line 45
c_rt_lib0move(&___nl__2,___get_global_const(261));
#line 45
c_rt_lib0delete(hash0set_value(&___nl__0, ___nl__1, ___nl__2));
#line 45
c_rt_lib0clear(&___nl__2);
#line 45
c_rt_lib0clear(&___nl__1);
#line 46
c_rt_lib0move(&___nl__1,___get_global_const(262));
#line 46
c_rt_lib0move(&___nl__2,___get_global_const(263));
#line 46
c_rt_lib0delete(hash0set_value(&___nl__0, ___nl__1, ___nl__2));
#line 46
c_rt_lib0clear(&___nl__2);
#line 46
c_rt_lib0clear(&___nl__1);
#line 47
c_rt_lib0move(&___nl__1,___get_global_const(264));
#line 47
c_rt_lib0move(&___nl__2,___get_global_const(265));
#line 47
c_rt_lib0delete(hash0set_value(&___nl__0, ___nl__1, ___nl__2));
#line 47
c_rt_lib0clear(&___nl__2);
#line 47
c_rt_lib0clear(&___nl__1);
#line 48
c_rt_lib0move(&___nl__1,___get_global_const(266));
#line 48
c_rt_lib0move(&___nl__2,___get_global_const(267));
#line 48
c_rt_lib0delete(hash0set_value(&___nl__0, ___nl__1, ___nl__2));
#line 48
c_rt_lib0clear(&___nl__2);
#line 48
c_rt_lib0clear(&___nl__1);
#line 49
c_rt_lib0move(&___nl__1,___get_global_const(268));
#line 49
c_rt_lib0move(&___nl__2,___get_global_const(269));
#line 49
c_rt_lib0delete(hash0set_value(&___nl__0, ___nl__1, ___nl__2));
#line 49
c_rt_lib0clear(&___nl__2);
#line 49
c_rt_lib0clear(&___nl__1);
#line 50
c_rt_lib0move(&___nl__1,___get_global_const(81));
#line 50
c_rt_lib0move(&___nl__2,___get_global_const(270));
#line 50
c_rt_lib0delete(hash0set_value(&___nl__0, ___nl__1, ___nl__2));
#line 50
c_rt_lib0clear(&___nl__2);
#line 50
c_rt_lib0clear(&___nl__1);
#line 51
return ___nl__0;
#line 51
c_rt_lib0clear(&___nl__0);
#line 51
return NULL;
}

ImmT generator_c_priv0gen_bin_ops_mod(){
generator_c_priv0__const__init();
return generator_c_priv0__const__sing(5);}
ImmT generator_c_priv0gen_bin_ops_mod0cal() {
generator_c_priv0__const__init();
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
#line 54
c_rt_lib0move(&___nl__0, c_rt_lib0hash_mk(0));
#line 55
c_rt_lib0move(&___nl__1,___get_global_const(247));
#line 55
c_rt_lib0move(&___nl__2,___get_global_const(271));
#line 55
c_rt_lib0delete(hash0set_value(&___nl__0, ___nl__1, ___nl__2));
#line 55
c_rt_lib0clear(&___nl__2);
#line 55
c_rt_lib0clear(&___nl__1);
#line 56
c_rt_lib0move(&___nl__1,___get_global_const(245));
#line 56
c_rt_lib0move(&___nl__2,___get_global_const(272));
#line 56
c_rt_lib0delete(hash0set_value(&___nl__0, ___nl__1, ___nl__2));
#line 56
c_rt_lib0clear(&___nl__2);
#line 56
c_rt_lib0clear(&___nl__1);
#line 57
c_rt_lib0move(&___nl__1,___get_global_const(253));
#line 57
c_rt_lib0move(&___nl__2,___get_global_const(273));
#line 57
c_rt_lib0delete(hash0set_value(&___nl__0, ___nl__1, ___nl__2));
#line 57
c_rt_lib0clear(&___nl__2);
#line 57
c_rt_lib0clear(&___nl__1);
#line 58
c_rt_lib0move(&___nl__1,___get_global_const(79));
#line 58
c_rt_lib0move(&___nl__2,___get_global_const(274));
#line 58
c_rt_lib0delete(hash0set_value(&___nl__0, ___nl__1, ___nl__2));
#line 58
c_rt_lib0clear(&___nl__2);
#line 58
c_rt_lib0clear(&___nl__1);
#line 59
c_rt_lib0move(&___nl__1,___get_global_const(256));
#line 59
c_rt_lib0move(&___nl__2,___get_global_const(275));
#line 59
c_rt_lib0delete(hash0set_value(&___nl__0, ___nl__1, ___nl__2));
#line 59
c_rt_lib0clear(&___nl__2);
#line 59
c_rt_lib0clear(&___nl__1);
#line 60
c_rt_lib0move(&___nl__1,___get_global_const(81));
#line 60
c_rt_lib0move(&___nl__2,___get_global_const(276));
#line 60
c_rt_lib0delete(hash0set_value(&___nl__0, ___nl__1, ___nl__2));
#line 60
c_rt_lib0clear(&___nl__2);
#line 60
c_rt_lib0clear(&___nl__1);
#line 61
return ___nl__0;
#line 61
c_rt_lib0clear(&___nl__0);
#line 61
return NULL;
}

ImmT generator_c0const_dict0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "generator_c0const_dict");
return generator_c0const_dict();}
ImmT generator_c0const_dict(){
generator_c_priv0__const__init();
return generator_c_priv0__const__sing(6);}
ImmT generator_c0const_dict0cal() {
generator_c_priv0__const__init();
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
#line 65
c_rt_lib0move(&___nl__3, ptd0sim());
#line 65
c_rt_lib0move(&___nl__2, ptd0arr(___nl__3));
#line 65
c_rt_lib0clear(&___nl__3);
#line 65
c_rt_lib0move(&___nl__4, ptd0sim());
#line 65
c_rt_lib0move(&___nl__3, ptd0hash(___nl__4));
#line 65
c_rt_lib0clear(&___nl__4);
#line 65
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(2, ___get_global_const(277), ___nl__2, ___get_global_const(278), ___nl__3));
#line 65
c_rt_lib0clear(&___nl__2);
#line 65
c_rt_lib0clear(&___nl__3);
#line 65
c_rt_lib0move(&___nl__0, ptd0rec(___nl__1));
#line 65
c_rt_lib0clear(&___nl__1);
#line 65
return ___nl__0;
#line 65
c_rt_lib0clear(&___nl__0);
#line 65
return NULL;
}

ImmT generator_c0fun_args_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "generator_c0fun_args_t");
return generator_c0fun_args_t();}
ImmT generator_c0fun_args_t(){
generator_c_priv0__const__init();
return generator_c_priv0__const__sing(7);}
ImmT generator_c0fun_args_t0cal() {
generator_c_priv0__const__init();
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
#line 71
c_rt_lib0move(&___nl__3, ptd0none());
#line 71
c_rt_lib0move(&___nl__4, ptd0none());
#line 71
c_rt_lib0move(&___nl__2, c_rt_lib0hash_mk(2, ___get_global_const(234), ___nl__3, ___get_global_const(5), ___nl__4));
#line 71
c_rt_lib0clear(&___nl__3);
#line 71
c_rt_lib0clear(&___nl__4);
#line 71
c_rt_lib0move(&___nl__1, ptd0var(___nl__2));
#line 71
c_rt_lib0clear(&___nl__2);
#line 71
c_rt_lib0move(&___nl__0, ptd0arr(___nl__1));
#line 71
c_rt_lib0clear(&___nl__1);
#line 71
return ___nl__0;
#line 71
c_rt_lib0clear(&___nl__0);
#line 71
return NULL;
}

ImmT generator_c0const_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "generator_c0const_t");
return generator_c0const_t();}
ImmT generator_c0const_t(){
generator_c_priv0__const__init();
return generator_c_priv0__const__sing(8);}
ImmT generator_c0const_t0cal() {
generator_c_priv0__const__init();
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
#line 74
c_rt_lib0move(&___nl__3, ptd0sim());
#line 74
c_rt_lib0move(&___nl__2, ptd0arr(___nl__3));
#line 74
c_rt_lib0clear(&___nl__3);
#line 74
c_rt_lib0move(&___nl__4, ptd0sim());
#line 74
c_rt_lib0move(&___nl__3, ptd0hash(___nl__4));
#line 74
c_rt_lib0clear(&___nl__4);
#line 74
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(2, ___get_global_const(277), ___nl__2, ___get_global_const(278), ___nl__3));
#line 74
c_rt_lib0clear(&___nl__2);
#line 74
c_rt_lib0clear(&___nl__3);
#line 74
c_rt_lib0move(&___nl__0, ptd0rec(___nl__1));
#line 74
c_rt_lib0clear(&___nl__1);
#line 74
return ___nl__0;
#line 74
c_rt_lib0clear(&___nl__0);
#line 74
return NULL;
}

ImmT generator_c0global_const_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "generator_c0global_const_t");
return generator_c0global_const_t();}
ImmT generator_c0global_const_t(){
generator_c_priv0__const__init();
return generator_c_priv0__const__sing(9);}
ImmT generator_c0global_const_t0cal() {
generator_c_priv0__const__init();
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
#line 80
c_rt_lib0move(&___nl__5, ptd0sim());
#line 80
c_rt_lib0move(&___nl__6, ptd0sim());
#line 80
c_rt_lib0move(&___nl__4, c_rt_lib0hash_mk(2, ___get_global_const(279), ___nl__5, ___get_global_const(280), ___nl__6));
#line 80
c_rt_lib0clear(&___nl__5);
#line 80
c_rt_lib0clear(&___nl__6);
#line 80
c_rt_lib0move(&___nl__3, ptd0rec(___nl__4));
#line 80
c_rt_lib0clear(&___nl__4);
#line 80
c_rt_lib0move(&___nl__2, ptd0arr(___nl__3));
#line 80
c_rt_lib0clear(&___nl__3);
#line 80
c_rt_lib0move(&___nl__4, ptd0sim());
#line 80
c_rt_lib0move(&___nl__3, ptd0hash(___nl__4));
#line 80
c_rt_lib0clear(&___nl__4);
#line 80
c_rt_lib0move(&___nl__5, ptd0sim());
#line 80
c_rt_lib0move(&___nl__4, ptd0arr(___nl__5));
#line 80
c_rt_lib0clear(&___nl__5);
#line 80
c_rt_lib0move(&___nl__7, ptd0sim());
#line 80
c_rt_lib0move(&___nl__6, ptd0hash(___nl__7));
#line 80
c_rt_lib0clear(&___nl__7);
#line 80
c_rt_lib0move(&___nl__5, ptd0hash(___nl__6));
#line 80
c_rt_lib0clear(&___nl__6);
#line 80
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(4, ___get_global_const(277), ___nl__2, ___get_global_const(278), ___nl__3, ___get_global_const(281), ___nl__4, ___get_global_const(282), ___nl__5));
#line 80
c_rt_lib0clear(&___nl__2);
#line 80
c_rt_lib0clear(&___nl__3);
#line 80
c_rt_lib0clear(&___nl__4);
#line 80
c_rt_lib0clear(&___nl__5);
#line 80
c_rt_lib0move(&___nl__0, ptd0rec(___nl__1));
#line 80
c_rt_lib0clear(&___nl__1);
#line 80
return ___nl__0;
#line 80
c_rt_lib0clear(&___nl__0);
#line 80
return NULL;
}

ImmT generator_c0state_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "generator_c0state_t");
return generator_c0state_t();}
ImmT generator_c0state_t(){
generator_c_priv0__const__init();
return generator_c_priv0__const__sing(10);}
ImmT generator_c0state_t0cal() {
generator_c_priv0__const__init();
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
#line 90
c_rt_lib0move(&___nl__2, c_rt_lib0func_new(generator_c0global_const_t0ptr, ___get_global_const(283), ___get_global_const(284)));
#line 90
c_rt_lib0move(&___nl__2, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__2));
#line 90
c_rt_lib0move(&___nl__3, ptd0sim());
#line 90
c_rt_lib0move(&___nl__4, ptd0sim());
#line 90
c_rt_lib0move(&___nl__5, ptd0sim());
#line 90
c_rt_lib0move(&___nl__6, c_rt_lib0func_new(generator_c0fun_args_t0ptr, ___get_global_const(283), ___get_global_const(285)));
#line 90
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__6));
#line 90
c_rt_lib0move(&___nl__9, c_rt_lib0func_new(generator_c0const_t0ptr, ___get_global_const(283), ___get_global_const(286)));
#line 90
c_rt_lib0move(&___nl__9, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__9));
#line 90
c_rt_lib0move(&___nl__10, c_rt_lib0func_new(generator_c0const_t0ptr, ___get_global_const(283), ___get_global_const(286)));
#line 90
c_rt_lib0move(&___nl__10, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__10));
#line 90
c_rt_lib0move(&___nl__11, ptd0sim());
#line 90
c_rt_lib0move(&___nl__8, c_rt_lib0hash_mk(3, ___get_global_const(287), ___nl__9, ___get_global_const(288), ___nl__10, ___get_global_const(289), ___nl__11));
#line 90
c_rt_lib0clear(&___nl__9);
#line 90
c_rt_lib0clear(&___nl__10);
#line 90
c_rt_lib0clear(&___nl__11);
#line 90
c_rt_lib0move(&___nl__7, ptd0rec(___nl__8));
#line 90
c_rt_lib0clear(&___nl__8);
#line 90
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(6, ___get_global_const(133), ___nl__2, ___get_global_const(290), ___nl__3, ___get_global_const(291), ___nl__4, ___get_global_const(292), ___nl__5, ___get_global_const(293), ___nl__6, ___get_global_const(294), ___nl__7));
#line 90
c_rt_lib0clear(&___nl__2);
#line 90
c_rt_lib0clear(&___nl__3);
#line 90
c_rt_lib0clear(&___nl__4);
#line 90
c_rt_lib0clear(&___nl__5);
#line 90
c_rt_lib0clear(&___nl__6);
#line 90
c_rt_lib0clear(&___nl__7);
#line 90
c_rt_lib0move(&___nl__0, ptd0rec(___nl__1));
#line 90
c_rt_lib0clear(&___nl__1);
#line 90
return ___nl__0;
#line 90
c_rt_lib0clear(&___nl__0);
#line 90
return NULL;
}

ImmT generator_c0get_empty_state0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "generator_c0get_empty_state");
return generator_c0get_empty_state();}
ImmT generator_c0get_empty_state(){
generator_c_priv0__const__init();
return generator_c_priv0__const__sing(11);}
ImmT generator_c0get_empty_state0cal() {
generator_c_priv0__const__init();
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
#line 105
c_rt_lib0move(&___nl__2, c_rt_lib0array_mk(0));
#line 105
c_rt_lib0move(&___nl__3, c_rt_lib0hash_mk(0));
#line 105
c_rt_lib0move(&___nl__4, c_rt_lib0array_mk(0));
#line 105
c_rt_lib0move(&___nl__5, c_rt_lib0hash_mk(0));
#line 105
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(4, ___get_global_const(277), ___nl__2, ___get_global_const(278), ___nl__3, ___get_global_const(281), ___nl__4, ___get_global_const(282), ___nl__5));
#line 105
c_rt_lib0clear(&___nl__2);
#line 105
c_rt_lib0clear(&___nl__3);
#line 105
c_rt_lib0clear(&___nl__4);
#line 105
c_rt_lib0clear(&___nl__5);
#line 105
c_rt_lib0move(&___nl__2,___get_global_const(0));
#line 105
c_rt_lib0move(&___nl__3,___get_global_const(0));
#line 105
c_rt_lib0move(&___nl__4, c_rt_lib0array_mk(0));
#line 105
c_rt_lib0move(&___nl__6,___get_global_const(1));
#line 105
c_rt_lib0move(&___nl__8, c_rt_lib0array_mk(0));
#line 105
c_rt_lib0move(&___nl__9, c_rt_lib0hash_mk(0));
#line 105
c_rt_lib0move(&___nl__7, c_rt_lib0hash_mk(2, ___get_global_const(277), ___nl__8, ___get_global_const(278), ___nl__9));
#line 105
c_rt_lib0clear(&___nl__8);
#line 105
c_rt_lib0clear(&___nl__9);
#line 105
c_rt_lib0move(&___nl__9, c_rt_lib0array_mk(0));
#line 105
c_rt_lib0move(&___nl__10, c_rt_lib0hash_mk(0));
#line 105
c_rt_lib0move(&___nl__8, c_rt_lib0hash_mk(2, ___get_global_const(277), ___nl__9, ___get_global_const(278), ___nl__10));
#line 105
c_rt_lib0clear(&___nl__9);
#line 105
c_rt_lib0clear(&___nl__10);
#line 105
c_rt_lib0move(&___nl__5, c_rt_lib0hash_mk(3, ___get_global_const(289), ___nl__6, ___get_global_const(287), ___nl__7, ___get_global_const(288), ___nl__8));
#line 105
c_rt_lib0clear(&___nl__6);
#line 105
c_rt_lib0clear(&___nl__7);
#line 105
c_rt_lib0clear(&___nl__8);
#line 105
c_rt_lib0move(&___nl__6,___get_global_const(0));
#line 105
c_rt_lib0move(&___nl__0, c_rt_lib0hash_mk(6, ___get_global_const(133), ___nl__1, ___get_global_const(291), ___nl__2, ___get_global_const(290), ___nl__3, ___get_global_const(293), ___nl__4, ___get_global_const(294), ___nl__5, ___get_global_const(292), ___nl__6));
#line 105
c_rt_lib0clear(&___nl__1);
#line 105
c_rt_lib0clear(&___nl__2);
#line 105
c_rt_lib0clear(&___nl__3);
#line 105
c_rt_lib0clear(&___nl__4);
#line 105
c_rt_lib0clear(&___nl__5);
#line 105
c_rt_lib0clear(&___nl__6);
#line 105
return ___nl__0;
#line 105
c_rt_lib0clear(&___nl__0);
#line 105
return NULL;
}

ImmT generator_c_priv0print(ImmT * ___ref___0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__1);
generator_c_priv0__const__init();
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
#line 120
c_rt_lib0move(&___nl__2,___get_global_const(291));
#line 120
c_rt_lib0move(&___nl__2, c_rt_lib0get_ref_hash(*___ref___0, ___nl__2));
#line 120
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__1));
#line 120
c_rt_lib0move(&___nl__3,___get_global_const(291));
#line 120
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__3, ___nl__2));
#line 120
c_rt_lib0clear(&___nl__3);
#line 120
c_rt_lib0clear(&___nl__2);
#line 120
c_rt_lib0clear(&___nl__1);
#line 120
return NULL;
}

ImmT generator_c_priv0print_to_header(ImmT * ___ref___0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__1);
generator_c_priv0__const__init();
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
#line 124
c_rt_lib0move(&___nl__2,___get_global_const(290));
#line 124
c_rt_lib0move(&___nl__2, c_rt_lib0get_ref_hash(*___ref___0, ___nl__2));
#line 124
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__1));
#line 124
c_rt_lib0move(&___nl__3,___get_global_const(290));
#line 124
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__3, ___nl__2));
#line 124
c_rt_lib0clear(&___nl__3);
#line 124
c_rt_lib0clear(&___nl__2);
#line 124
c_rt_lib0clear(&___nl__1);
#line 124
return NULL;
}

ImmT generator_c_priv0println_to_header(ImmT * ___ref___0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__1);
generator_c_priv0__const__init();
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
#line 128
c_rt_lib0move(&___nl__2, string0lf());
#line 128
c_rt_lib0move(&___nl__2, c_rt_lib0concat_new(___nl__1, ___nl__2));
#line 128
c_rt_lib0move(&___nl__3,___get_global_const(290));
#line 128
c_rt_lib0move(&___nl__3, c_rt_lib0get_ref_hash(*___ref___0, ___nl__3));
#line 128
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__2));
#line 128
c_rt_lib0move(&___nl__4,___get_global_const(290));
#line 128
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__4, ___nl__3));
#line 128
c_rt_lib0clear(&___nl__4);
#line 128
c_rt_lib0clear(&___nl__2);
#line 128
c_rt_lib0clear(&___nl__3);
#line 128
c_rt_lib0clear(&___nl__1);
#line 128
return NULL;
}

ImmT generator_c_priv0arg_t(){
generator_c_priv0__const__init();
return generator_c_priv0__const__sing(12);}
ImmT generator_c_priv0arg_t0cal() {
generator_c_priv0__const__init();
ImmT ___nl__0 = NULL;
#line 132
c_rt_lib0move(&___nl__0,___get_global_const(295));
#line 132
return ___nl__0;
#line 132
c_rt_lib0clear(&___nl__0);
#line 132
return NULL;
}

ImmT generator_c_priv0println(ImmT * ___ref___0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__1);
generator_c_priv0__const__init();
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
#line 136
c_rt_lib0move(&___nl__2,___get_global_const(291));
#line 136
c_rt_lib0move(&___nl__2, c_rt_lib0get_ref_hash(*___ref___0, ___nl__2));
#line 136
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__1));
#line 136
c_rt_lib0move(&___nl__3,___get_global_const(291));
#line 136
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__3, ___nl__2));
#line 136
c_rt_lib0clear(&___nl__3);
#line 136
c_rt_lib0clear(&___nl__2);
#line 137
c_rt_lib0move(&___nl__2, string0lf());
#line 137
c_rt_lib0move(&___nl__3,___get_global_const(291));
#line 137
c_rt_lib0move(&___nl__3, c_rt_lib0get_ref_hash(*___ref___0, ___nl__3));
#line 137
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__2));
#line 137
c_rt_lib0move(&___nl__4,___get_global_const(291));
#line 137
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__4, ___nl__3));
#line 137
c_rt_lib0clear(&___nl__4);
#line 137
c_rt_lib0clear(&___nl__2);
#line 137
c_rt_lib0clear(&___nl__3);
#line 137
c_rt_lib0clear(&___nl__1);
#line 137
return NULL;
}

ImmT generator_c_priv0get_reg(ImmT * ___ref___0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__1);
generator_c_priv0__const__init();
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
#line 141
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(293)));
#line 142
c_rt_lib0move(&___nl__3, array0len(___nl__2));
#line 142
c_rt_lib0move(&___nl__3, c_rt_lib0gt(___nl__3, ___nl__1));
#line 142
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__3));
#line 142
if(c_rt_lib0check_true_native(___nl__4)){ goto label_3;}
#line 142
c_rt_lib0move(&___nl__3, c_rt_lib0array_get(___nl__2, ___nl__1));
#line 142
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__3, ___get_global_const(5)));
#line 142
label_3:
#line 142
c_rt_lib0clear(&___nl__4);
#line 142
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 142
if(c_rt_lib0check_true_native(___nl__3)){ goto label_2;}
#line 143
c_rt_lib0move(&___nl__4,___get_global_const(296));
#line 143
c_rt_lib0move(&___nl__4, c_rt_lib0concat_add(___nl__4, ___nl__1));
#line 143
c_rt_lib0clear(&___nl__1);
#line 143
c_rt_lib0clear(&___nl__2);
#line 143
c_rt_lib0clear(&___nl__3);
#line 143
return ___nl__4;
#line 143
c_rt_lib0clear(&___nl__4);
#line 144
goto label_2;
#line 144
label_2:
#line 144
c_rt_lib0clear(&___nl__3);
#line 145
c_rt_lib0move(&___nl__3,___get_global_const(297));
#line 145
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__1));
#line 145
c_rt_lib0clear(&___nl__1);
#line 145
c_rt_lib0clear(&___nl__2);
#line 145
return ___nl__3;
#line 145
c_rt_lib0clear(&___nl__3);
#line 145
c_rt_lib0clear(&___nl__2);
#line 145
c_rt_lib0clear(&___nl__1);
#line 145
return NULL;
}

ImmT generator_c_priv0get_reg_ref(ImmT * ___ref___0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__1);
generator_c_priv0__const__init();
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
#line 148
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(293)));
#line 149
c_rt_lib0move(&___nl__3, array0len(___nl__2));
#line 149
c_rt_lib0move(&___nl__3, c_rt_lib0gt(___nl__3, ___nl__1));
#line 149
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__3));
#line 149
if(c_rt_lib0check_true_native(___nl__4)){ goto label_3;}
#line 149
c_rt_lib0move(&___nl__3, c_rt_lib0array_get(___nl__2, ___nl__1));
#line 149
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__3, ___get_global_const(5)));
#line 149
label_3:
#line 149
c_rt_lib0clear(&___nl__4);
#line 149
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 149
if(c_rt_lib0check_true_native(___nl__3)){ goto label_2;}
#line 150
c_rt_lib0move(&___nl__4,___get_global_const(298));
#line 150
c_rt_lib0move(&___nl__4, c_rt_lib0concat_add(___nl__4, ___nl__1));
#line 150
c_rt_lib0clear(&___nl__1);
#line 150
c_rt_lib0clear(&___nl__2);
#line 150
c_rt_lib0clear(&___nl__3);
#line 150
return ___nl__4;
#line 150
c_rt_lib0clear(&___nl__4);
#line 151
goto label_2;
#line 151
label_2:
#line 151
c_rt_lib0clear(&___nl__3);
#line 152
c_rt_lib0move(&___nl__3,___get_global_const(299));
#line 152
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__1));
#line 152
c_rt_lib0clear(&___nl__1);
#line 152
c_rt_lib0clear(&___nl__2);
#line 152
return ___nl__3;
#line 152
c_rt_lib0clear(&___nl__3);
#line 152
c_rt_lib0clear(&___nl__2);
#line 152
c_rt_lib0clear(&___nl__1);
#line 152
return NULL;
}

ImmT generator_c_priv0get_string(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
generator_c_priv0__const__init();
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
#line 155
c_rt_lib0move(&___nl__1,___get_global_const(150));
#line 155
c_rt_lib0move(&___nl__1, c_rt_lib0concat_add(___nl__1, ___nl__0));
#line 155
c_rt_lib0move(&___nl__2,___get_global_const(150));
#line 155
c_rt_lib0move(&___nl__1, c_rt_lib0concat_add(___nl__1, ___nl__2));
#line 155
c_rt_lib0clear(&___nl__2);
#line 155
c_rt_lib0clear(&___nl__0);
#line 155
return ___nl__1;
#line 155
c_rt_lib0clear(&___nl__1);
#line 155
c_rt_lib0clear(&___nl__0);
#line 155
return NULL;
}

ImmT generator_c0module_out_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "generator_c0module_out_t");
return generator_c0module_out_t();}
ImmT generator_c0module_out_t(){
generator_c_priv0__const__init();
return generator_c_priv0__const__sing(13);}
ImmT generator_c0module_out_t0cal() {
generator_c_priv0__const__init();
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
#line 159
c_rt_lib0move(&___nl__2, ptd0sim());
#line 159
c_rt_lib0move(&___nl__3, ptd0sim());
#line 159
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(2, ___get_global_const(31), ___nl__2, ___get_global_const(36), ___nl__3));
#line 159
c_rt_lib0clear(&___nl__2);
#line 159
c_rt_lib0clear(&___nl__3);
#line 159
c_rt_lib0move(&___nl__0, ptd0rec(___nl__1));
#line 159
c_rt_lib0clear(&___nl__1);
#line 159
return ___nl__0;
#line 159
c_rt_lib0clear(&___nl__0);
#line 159
return NULL;
}

ImmT generator_c0out_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "generator_c0out_t");
return generator_c0out_t();}
ImmT generator_c0out_t(){
generator_c_priv0__const__init();
return generator_c_priv0__const__sing(14);}
ImmT generator_c0out_t0cal() {
generator_c_priv0__const__init();
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
#line 163
c_rt_lib0move(&___nl__3, c_rt_lib0func_new(generator_c0module_out_t0ptr, ___get_global_const(283), ___get_global_const(300)));
#line 163
c_rt_lib0move(&___nl__3, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__3));
#line 163
c_rt_lib0move(&___nl__2, ptd0hash(___nl__3));
#line 163
c_rt_lib0clear(&___nl__3);
#line 163
c_rt_lib0move(&___nl__3, c_rt_lib0func_new(generator_c0module_out_t0ptr, ___get_global_const(283), ___get_global_const(300)));
#line 163
c_rt_lib0move(&___nl__3, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__3));
#line 163
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(2, ___get_global_const(131), ___nl__2, ___get_global_const(133), ___nl__3));
#line 163
c_rt_lib0clear(&___nl__2);
#line 163
c_rt_lib0clear(&___nl__3);
#line 163
c_rt_lib0move(&___nl__0, ptd0rec(___nl__1));
#line 163
c_rt_lib0clear(&___nl__1);
#line 163
return ___nl__0;
#line 163
c_rt_lib0clear(&___nl__0);
#line 163
return NULL;
}

ImmT generator_c0generate0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 2, "generator_c0generate");
return generator_c0generate(_tab[0], &_tab[1]);}
ImmT generator_c0generate(ImmT ___nl__0,ImmT * ___ref___1) {
c_rt_lib0arg_val(___nl__0);
generator_c_priv0__const__init();
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
#line 170
c_rt_lib0move(&___nl__2, c_rt_lib0hash_mk(0));
#line 171
c_rt_lib0move(&___nl__3, c_rt_lib0array_mk(0));
#line 172
c_rt_lib0move(&___nl__6, c_rt_lib0init_iter(___nl__0));
#line 172
label_3:
#line 172
c_rt_lib0move(&___nl__4, c_rt_lib0is_end_hash(___nl__6));
#line 172
if(c_rt_lib0check_true_native(___nl__4)){ goto label_1;}
#line 172
c_rt_lib0move(&___nl__4, c_rt_lib0get_key_iter(___nl__6));
#line 172
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value(___nl__0, ___nl__4));
#line 173
c_rt_lib0delete(array0push(&___nl__3, ___nl__4));
#line 174
c_rt_lib0move(&___nl__6, c_rt_lib0next_iter(___nl__6));
#line 174
goto label_3;
#line 174
label_1:
#line 174
c_rt_lib0clear(&___nl__4);
#line 174
c_rt_lib0clear(&___nl__5);
#line 174
c_rt_lib0clear(&___nl__6);
#line 175
c_rt_lib0delete(array0sort(&___nl__3));
#line 176
c_rt_lib0move(&___nl__5,___get_global_const(1));
#line 176
c_rt_lib0move(&___nl__6,___get_global_const(2));
#line 176
c_rt_lib0move(&___nl__7, c_rt_lib0array_len(___nl__3));
#line 176
label_6:
#line 176
c_rt_lib0move(&___nl__8, c_rt_lib0ge(___nl__5, ___nl__7));
#line 176
if(c_rt_lib0check_true_native(___nl__8)){ goto label_4;}
#line 176
c_rt_lib0move(&___nl__4, c_rt_lib0array_get(___nl__3, ___nl__5));
#line 177
c_rt_lib0move(&___nl__9, hash0get_value(___nl__0, ___nl__4));
#line 178
c_rt_lib0delete(generator_c0clear_module_from_state(___ref___1, ___nl__4));
#line 179
c_rt_lib0move(&___nl__10,___get_global_const(133));
#line 179
c_rt_lib0move(&___nl__10, c_rt_lib0get_ref_hash(*___ref___1, ___nl__10));
#line 179
c_rt_lib0move(&___nl__11,___get_global_const(282));
#line 179
c_rt_lib0move(&___nl__11, c_rt_lib0get_ref_hash(___nl__10, ___nl__11));
#line 179
c_rt_lib0move(&___nl__12, c_rt_lib0hash_mk(0));
#line 179
c_rt_lib0delete(hash0set_value(&___nl__11, ___nl__4, ___nl__12));
#line 179
c_rt_lib0clear(&___nl__12);
#line 179
c_rt_lib0move(&___nl__12,___get_global_const(282));
#line 179
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__10, ___nl__12, ___nl__11));
#line 179
c_rt_lib0move(&___nl__12,___get_global_const(133));
#line 179
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___1, ___nl__12, ___nl__10));
#line 179
c_rt_lib0clear(&___nl__12);
#line 179
c_rt_lib0clear(&___nl__10);
#line 179
c_rt_lib0clear(&___nl__11);
#line 180
c_rt_lib0move(&___nl__10,___get_global_const(0));
#line 180
c_rt_lib0copy(&___nl__11, ___nl__10);
#line 180
c_rt_lib0hash_set_value_dec(___ref___1, ___get_global_const(291), ___nl__11);
#line 180
c_rt_lib0clear(&___nl__10);
#line 180
c_rt_lib0clear(&___nl__11);
#line 181
c_rt_lib0move(&___nl__10,___get_global_const(0));
#line 181
c_rt_lib0copy(&___nl__11, ___nl__10);
#line 181
c_rt_lib0hash_set_value_dec(___ref___1, ___get_global_const(290), ___nl__11);
#line 181
c_rt_lib0clear(&___nl__10);
#line 181
c_rt_lib0clear(&___nl__11);
#line 182
c_rt_lib0move(&___nl__10, c_rt_lib0array_mk(0));
#line 182
c_rt_lib0copy(&___nl__11, ___nl__10);
#line 182
c_rt_lib0hash_set_value_dec(___ref___1, ___get_global_const(293), ___nl__11);
#line 182
c_rt_lib0clear(&___nl__10);
#line 182
c_rt_lib0clear(&___nl__11);
#line 183
c_rt_lib0move(&___nl__11,___get_global_const(1));
#line 183
c_rt_lib0move(&___nl__13, c_rt_lib0array_mk(0));
#line 183
c_rt_lib0move(&___nl__14, c_rt_lib0hash_mk(0));
#line 183
c_rt_lib0move(&___nl__12, c_rt_lib0hash_mk(2, ___get_global_const(277), ___nl__13, ___get_global_const(278), ___nl__14));
#line 183
c_rt_lib0clear(&___nl__13);
#line 183
c_rt_lib0clear(&___nl__14);
#line 183
c_rt_lib0move(&___nl__14, c_rt_lib0array_mk(0));
#line 183
c_rt_lib0move(&___nl__15, c_rt_lib0hash_mk(0));
#line 183
c_rt_lib0move(&___nl__13, c_rt_lib0hash_mk(2, ___get_global_const(277), ___nl__14, ___get_global_const(278), ___nl__15));
#line 183
c_rt_lib0clear(&___nl__14);
#line 183
c_rt_lib0clear(&___nl__15);
#line 183
c_rt_lib0move(&___nl__10, c_rt_lib0hash_mk(3, ___get_global_const(289), ___nl__11, ___get_global_const(287), ___nl__12, ___get_global_const(288), ___nl__13));
#line 183
c_rt_lib0clear(&___nl__11);
#line 183
c_rt_lib0clear(&___nl__12);
#line 183
c_rt_lib0clear(&___nl__13);
#line 183
c_rt_lib0copy(&___nl__11, ___nl__10);
#line 183
c_rt_lib0hash_set_value_dec(___ref___1, ___get_global_const(294), ___nl__11);
#line 183
c_rt_lib0clear(&___nl__10);
#line 183
c_rt_lib0clear(&___nl__11);
#line 188
c_rt_lib0copy(&___nl__10, ___nl__4);
#line 188
c_rt_lib0hash_set_value_dec(___ref___1, ___get_global_const(292), ___nl__10);
#line 188
c_rt_lib0clear(&___nl__10);
#line 189
c_rt_lib0delete(generator_c_priv0print_mod(___ref___1, ___nl__9));
#line 190
c_rt_lib0move(&___nl__11, c_rt_lib0hash_get_value_dec(*___ref___1, ___get_global_const(291)));
#line 190
c_rt_lib0move(&___nl__12, c_rt_lib0hash_get_value_dec(*___ref___1, ___get_global_const(290)));
#line 190
c_rt_lib0move(&___nl__10, c_rt_lib0hash_mk(2, ___get_global_const(31), ___nl__11, ___get_global_const(36), ___nl__12));
#line 190
c_rt_lib0clear(&___nl__11);
#line 190
c_rt_lib0clear(&___nl__12);
#line 190
c_rt_lib0delete(hash0set_value(&___nl__2, ___nl__4, ___nl__10));
#line 190
c_rt_lib0clear(&___nl__10);
#line 190
c_rt_lib0clear(&___nl__9);
#line 191
c_rt_lib0move(&___nl__5, c_rt_lib0add_mod(___nl__5, ___nl__6));
#line 191
goto label_6;
#line 191
label_4:
#line 191
c_rt_lib0clear(&___nl__4);
#line 191
c_rt_lib0clear(&___nl__5);
#line 191
c_rt_lib0clear(&___nl__6);
#line 191
c_rt_lib0clear(&___nl__7);
#line 191
c_rt_lib0clear(&___nl__8);
#line 192
c_rt_lib0move(&___nl__5, generator_c_priv0generate_global_const_files(___ref___1));
#line 192
c_rt_lib0move(&___nl__4, c_rt_lib0hash_mk(2, ___get_global_const(131), ___nl__2, ___get_global_const(133), ___nl__5));
#line 192
c_rt_lib0clear(&___nl__5);
#line 192
c_rt_lib0clear(&___nl__0);
#line 192
c_rt_lib0clear(&___nl__2);
#line 192
c_rt_lib0clear(&___nl__3);
#line 192
return ___nl__4;
#line 192
c_rt_lib0clear(&___nl__4);
#line 192
c_rt_lib0clear(&___nl__2);
#line 192
c_rt_lib0clear(&___nl__3);
#line 192
c_rt_lib0clear(&___nl__0);
#line 192
return NULL;
}

ImmT generator_c_priv0generate_global_const_files(ImmT * ___ref___0) {
generator_c_priv0__const__init();
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
ImmT ___nl__9 = NULL;
#line 196
c_rt_lib0move(&___nl__1,___get_global_const(0));
#line 196
c_rt_lib0copy(&___nl__2, ___nl__1);
#line 196
c_rt_lib0hash_set_value_dec(___ref___0, ___get_global_const(291), ___nl__2);
#line 196
c_rt_lib0clear(&___nl__1);
#line 196
c_rt_lib0clear(&___nl__2);
#line 197
c_rt_lib0move(&___nl__1,___get_global_const(0));
#line 197
c_rt_lib0copy(&___nl__2, ___nl__1);
#line 197
c_rt_lib0hash_set_value_dec(___ref___0, ___get_global_const(290), ___nl__2);
#line 197
c_rt_lib0clear(&___nl__1);
#line 197
c_rt_lib0clear(&___nl__2);
#line 198
c_rt_lib0move(&___nl__1, c_rt_lib0array_mk(0));
#line 198
c_rt_lib0copy(&___nl__2, ___nl__1);
#line 198
c_rt_lib0hash_set_value_dec(___ref___0, ___get_global_const(293), ___nl__2);
#line 198
c_rt_lib0clear(&___nl__1);
#line 198
c_rt_lib0clear(&___nl__2);
#line 199
c_rt_lib0move(&___nl__2,___get_global_const(1));
#line 199
c_rt_lib0move(&___nl__4, c_rt_lib0array_mk(0));
#line 199
c_rt_lib0move(&___nl__5, c_rt_lib0hash_mk(0));
#line 199
c_rt_lib0move(&___nl__3, c_rt_lib0hash_mk(2, ___get_global_const(277), ___nl__4, ___get_global_const(278), ___nl__5));
#line 199
c_rt_lib0clear(&___nl__4);
#line 199
c_rt_lib0clear(&___nl__5);
#line 199
c_rt_lib0move(&___nl__5, c_rt_lib0array_mk(0));
#line 199
c_rt_lib0move(&___nl__6, c_rt_lib0hash_mk(0));
#line 199
c_rt_lib0move(&___nl__4, c_rt_lib0hash_mk(2, ___get_global_const(277), ___nl__5, ___get_global_const(278), ___nl__6));
#line 199
c_rt_lib0clear(&___nl__5);
#line 199
c_rt_lib0clear(&___nl__6);
#line 199
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(3, ___get_global_const(289), ___nl__2, ___get_global_const(287), ___nl__3, ___get_global_const(288), ___nl__4));
#line 199
c_rt_lib0clear(&___nl__2);
#line 199
c_rt_lib0clear(&___nl__3);
#line 199
c_rt_lib0clear(&___nl__4);
#line 199
c_rt_lib0copy(&___nl__2, ___nl__1);
#line 199
c_rt_lib0hash_set_value_dec(___ref___0, ___get_global_const(294), ___nl__2);
#line 199
c_rt_lib0clear(&___nl__1);
#line 199
c_rt_lib0clear(&___nl__2);
#line 204
c_rt_lib0move(&___nl__1,___get_global_const(0));
#line 204
c_rt_lib0copy(&___nl__2, ___nl__1);
#line 204
c_rt_lib0hash_set_value_dec(___ref___0, ___get_global_const(292), ___nl__2);
#line 204
c_rt_lib0clear(&___nl__1);
#line 204
c_rt_lib0clear(&___nl__2);
#line 206
c_rt_lib0move(&___nl__1, generator_c_priv0get_cr());
#line 206
c_rt_lib0delete(generator_c_priv0print_to_header(___ref___0, ___nl__1));
#line 206
c_rt_lib0clear(&___nl__1);
#line 207
c_rt_lib0move(&___nl__1,___get_global_const(301));
#line 207
c_rt_lib0delete(generator_c_priv0println_to_header(___ref___0, ___nl__1));
#line 207
c_rt_lib0clear(&___nl__1);
#line 208
c_rt_lib0move(&___nl__2,___get_global_const(302));
#line 208
c_rt_lib0move(&___nl__1, generator_c_priv0get_include(___nl__2));
#line 208
c_rt_lib0clear(&___nl__2);
#line 208
c_rt_lib0delete(generator_c_priv0println_to_header(___ref___0, ___nl__1));
#line 208
c_rt_lib0clear(&___nl__1);
#line 211
c_rt_lib0move(&___nl__1, generator_c_priv0get_cr());
#line 211
c_rt_lib0delete(generator_c_priv0print(___ref___0, ___nl__1));
#line 211
c_rt_lib0clear(&___nl__1);
#line 212
c_rt_lib0move(&___nl__2,___get_global_const(303));
#line 212
c_rt_lib0move(&___nl__1, generator_c_priv0get_include(___nl__2));
#line 212
c_rt_lib0clear(&___nl__2);
#line 212
c_rt_lib0delete(generator_c_priv0println(___ref___0, ___nl__1));
#line 212
c_rt_lib0clear(&___nl__1);
#line 214
c_rt_lib0move(&___nl__1, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(133)));
#line 214
c_rt_lib0move(&___nl__1, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(277)));
#line 215
c_rt_lib0move(&___nl__2, array0len(___nl__1));
#line 217
c_rt_lib0move(&___nl__3,___get_global_const(304));
#line 217
c_rt_lib0delete(generator_c_priv0println_to_header(___ref___0, ___nl__3));
#line 217
c_rt_lib0clear(&___nl__3);
#line 218
c_rt_lib0move(&___nl__3, generator_c_priv0arg_t());
#line 218
c_rt_lib0move(&___nl__4,___get_global_const(305));
#line 218
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 218
c_rt_lib0clear(&___nl__4);
#line 218
c_rt_lib0delete(generator_c_priv0println_to_header(___ref___0, ___nl__3));
#line 218
c_rt_lib0clear(&___nl__3);
#line 220
c_rt_lib0move(&___nl__3,___get_global_const(306));
#line 220
c_rt_lib0move(&___nl__4, generator_c_priv0arg_t());
#line 220
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 220
c_rt_lib0clear(&___nl__4);
#line 220
c_rt_lib0move(&___nl__4,___get_global_const(307));
#line 220
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 220
c_rt_lib0clear(&___nl__4);
#line 220
c_rt_lib0delete(generator_c_priv0println(___ref___0, ___nl__3));
#line 220
c_rt_lib0clear(&___nl__3);
#line 225
c_rt_lib0move(&___nl__3,___get_global_const(308));
#line 225
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__2));
#line 225
c_rt_lib0move(&___nl__4,___get_global_const(309));
#line 225
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 225
c_rt_lib0clear(&___nl__4);
#line 225
c_rt_lib0delete(generator_c_priv0println(___ref___0, ___nl__3));
#line 225
c_rt_lib0clear(&___nl__3);
#line 232
c_rt_lib0move(&___nl__3,___get_global_const(1));
#line 232
c_rt_lib0move(&___nl__4,___get_global_const(2));
#line 232
label_3:
#line 232
c_rt_lib0move(&___nl__5, c_rt_lib0ge(___nl__3, ___nl__2));
#line 232
if(c_rt_lib0check_true_native(___nl__5)){ goto label_1;}
#line 233
c_rt_lib0move(&___nl__7, c_rt_lib0array_get(___nl__1, ___nl__3));
#line 233
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__7, ___get_global_const(279)));
#line 233
c_rt_lib0move(&___nl__8,___get_global_const(310));
#line 233
c_rt_lib0move(&___nl__8, c_rt_lib0concat_add(___nl__8, ___nl__3));
#line 233
c_rt_lib0move(&___nl__6, generator_c_priv0create_sim_to_memory(___nl__7, ___nl__8));
#line 233
c_rt_lib0clear(&___nl__8);
#line 233
c_rt_lib0clear(&___nl__7);
#line 233
c_rt_lib0move(&___nl__7,___get_global_const(311));
#line 233
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__7));
#line 233
c_rt_lib0clear(&___nl__7);
#line 233
c_rt_lib0delete(generator_c_priv0println(___ref___0, ___nl__6));
#line 233
c_rt_lib0clear(&___nl__6);
#line 234
c_rt_lib0move(&___nl__3, c_rt_lib0add_mod(___nl__3, ___nl__4));
#line 234
goto label_3;
#line 234
label_1:
#line 234
c_rt_lib0clear(&___nl__3);
#line 234
c_rt_lib0clear(&___nl__4);
#line 234
c_rt_lib0clear(&___nl__5);
#line 236
c_rt_lib0move(&___nl__3,___get_global_const(312));
#line 236
c_rt_lib0move(&___nl__5,___get_global_const(313));
#line 236
c_rt_lib0move(&___nl__4, generator_c_priv0get_lib_fun(___nl__5));
#line 236
c_rt_lib0clear(&___nl__5);
#line 236
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 236
c_rt_lib0clear(&___nl__4);
#line 236
c_rt_lib0move(&___nl__4,___get_global_const(314));
#line 236
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 236
c_rt_lib0clear(&___nl__4);
#line 236
c_rt_lib0move(&___nl__4, generator_c_priv0arg_t());
#line 236
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 236
c_rt_lib0clear(&___nl__4);
#line 236
c_rt_lib0move(&___nl__4,___get_global_const(315));
#line 236
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 236
c_rt_lib0clear(&___nl__4);
#line 236
c_rt_lib0move(&___nl__4, generator_c_priv0arg_t());
#line 236
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 236
c_rt_lib0clear(&___nl__4);
#line 236
c_rt_lib0move(&___nl__4,___get_global_const(316));
#line 236
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 236
c_rt_lib0clear(&___nl__4);
#line 236
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__2));
#line 236
c_rt_lib0move(&___nl__4,___get_global_const(317));
#line 236
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 236
c_rt_lib0clear(&___nl__4);
#line 236
c_rt_lib0delete(generator_c_priv0println(___ref___0, ___nl__3));
#line 236
c_rt_lib0clear(&___nl__3);
#line 241
c_rt_lib0move(&___nl__3, generator_c_priv0arg_t());
#line 241
c_rt_lib0move(&___nl__4,___get_global_const(318));
#line 241
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 241
c_rt_lib0clear(&___nl__4);
#line 241
c_rt_lib0move(&___nl__4, generator_c_priv0arg_t());
#line 241
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 241
c_rt_lib0clear(&___nl__4);
#line 241
c_rt_lib0move(&___nl__4,___get_global_const(319));
#line 241
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 241
c_rt_lib0clear(&___nl__4);
#line 241
c_rt_lib0move(&___nl__5,___get_global_const(320));
#line 241
c_rt_lib0move(&___nl__7,___get_global_const(321));
#line 241
c_rt_lib0move(&___nl__8,___get_global_const(322));
#line 241
c_rt_lib0move(&___nl__9, generator_c_priv0arg_t());
#line 241
c_rt_lib0move(&___nl__8, c_rt_lib0concat_add(___nl__8, ___nl__9));
#line 241
c_rt_lib0clear(&___nl__9);
#line 241
c_rt_lib0move(&___nl__9,___get_global_const(323));
#line 241
c_rt_lib0move(&___nl__8, c_rt_lib0concat_add(___nl__8, ___nl__9));
#line 241
c_rt_lib0clear(&___nl__9);
#line 241
c_rt_lib0move(&___nl__6, c_rt_lib0array_mk(2, ___nl__7, ___nl__8));
#line 241
c_rt_lib0clear(&___nl__7);
#line 241
c_rt_lib0clear(&___nl__8);
#line 241
c_rt_lib0move(&___nl__4, generator_c_priv0get_fun_lib(___nl__5, ___nl__6));
#line 241
c_rt_lib0clear(&___nl__6);
#line 241
c_rt_lib0clear(&___nl__5);
#line 241
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 241
c_rt_lib0clear(&___nl__4);
#line 241
c_rt_lib0move(&___nl__4,___get_global_const(324));
#line 241
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 241
c_rt_lib0clear(&___nl__4);
#line 241
c_rt_lib0delete(generator_c_priv0println(___ref___0, ___nl__3));
#line 241
c_rt_lib0clear(&___nl__3);
#line 248
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(291)));
#line 248
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(290)));
#line 248
c_rt_lib0move(&___nl__3, c_rt_lib0hash_mk(2, ___get_global_const(31), ___nl__4, ___get_global_const(36), ___nl__5));
#line 248
c_rt_lib0clear(&___nl__4);
#line 248
c_rt_lib0clear(&___nl__5);
#line 248
c_rt_lib0clear(&___nl__1);
#line 248
c_rt_lib0clear(&___nl__2);
#line 248
return ___nl__3;
#line 248
c_rt_lib0clear(&___nl__3);
#line 248
c_rt_lib0clear(&___nl__1);
#line 248
c_rt_lib0clear(&___nl__2);
#line 248
return NULL;
}

ImmT generator_c_priv0get_include(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
generator_c_priv0__const__init();
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
#line 252
c_rt_lib0move(&___nl__1,___get_global_const(325));
#line 252
c_rt_lib0move(&___nl__1, c_rt_lib0concat_add(___nl__1, ___nl__0));
#line 252
c_rt_lib0move(&___nl__2,___get_global_const(326));
#line 252
c_rt_lib0move(&___nl__1, c_rt_lib0concat_add(___nl__1, ___nl__2));
#line 252
c_rt_lib0clear(&___nl__2);
#line 252
c_rt_lib0clear(&___nl__0);
#line 252
return ___nl__1;
#line 252
c_rt_lib0clear(&___nl__1);
#line 252
c_rt_lib0clear(&___nl__0);
#line 252
return NULL;
}

ImmT generator_c_priv0get_cr(){
generator_c_priv0__const__init();
return generator_c_priv0__const__sing(15);}
ImmT generator_c_priv0get_cr0cal() {
generator_c_priv0__const__init();
ImmT ___nl__0 = NULL;
#line 256
c_rt_lib0move(&___nl__0,___get_global_const(327));
#line 256
return ___nl__0;
#line 256
c_rt_lib0clear(&___nl__0);
#line 256
return NULL;
}

ImmT generator_c_priv0get_function_name(ImmT ___nl__0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
generator_c_priv0__const__init();
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
#line 264
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(328)));
#line 264
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__3, ___get_global_const(329)));
#line 264
if(c_rt_lib0check_true_native(___nl__4)){ goto label_2;}
#line 266
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__3, ___get_global_const(330)));
#line 266
if(c_rt_lib0check_true_native(___nl__4)){ goto label_3;}
#line 266
c_rt_lib0move(&___nl__4,___get_global_const(74));
#line 266
c_rt_lib0move(&___nl__4, c_rt_lib0array_mk(2, ___nl__4, ___nl__3));
#line 266
nl_die_arg(___nl__4);
#line 264
label_2:
#line 265
c_rt_lib0copy(&___nl__2, ___nl__1);
#line 266
goto label_1;
#line 266
label_3:
#line 267
c_rt_lib0move(&___nl__5,___get_global_const(0));
#line 267
c_rt_lib0copy(&___nl__2, ___nl__5);
#line 267
c_rt_lib0clear(&___nl__5);
#line 268
goto label_1;
#line 268
label_1:
#line 268
c_rt_lib0clear(&___nl__3);
#line 268
c_rt_lib0clear(&___nl__4);
#line 269
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(76)));
#line 269
c_rt_lib0move(&___nl__3, generator_c_priv0get_fun_name(___nl__2, ___nl__4, ___nl__1));
#line 269
c_rt_lib0clear(&___nl__4);
#line 269
c_rt_lib0clear(&___nl__0);
#line 269
c_rt_lib0clear(&___nl__1);
#line 269
c_rt_lib0clear(&___nl__2);
#line 269
return ___nl__3;
#line 269
c_rt_lib0clear(&___nl__3);
#line 269
c_rt_lib0clear(&___nl__2);
#line 269
c_rt_lib0clear(&___nl__0);
#line 269
c_rt_lib0clear(&___nl__1);
#line 269
return NULL;
}

ImmT generator_c_priv0get_function_header(ImmT ___nl__0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
generator_c_priv0__const__init();
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
#line 272
c_rt_lib0move(&___nl__2,___get_global_const(0));
#line 273
c_rt_lib0move(&___nl__3, generator_c_priv0get_function_name(___nl__0, ___nl__1));
#line 274
c_rt_lib0move(&___nl__4, generator_c_priv0arg_t());
#line 274
c_rt_lib0move(&___nl__4, c_rt_lib0concat_add(___nl__4, ___nl__3));
#line 274
c_rt_lib0move(&___nl__5,___get_global_const(322));
#line 274
c_rt_lib0move(&___nl__4, c_rt_lib0concat_add(___nl__4, ___nl__5));
#line 274
c_rt_lib0clear(&___nl__5);
#line 274
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__4));
#line 274
c_rt_lib0clear(&___nl__4);
#line 275
c_rt_lib0move(&___nl__4,___get_global_const(1));
#line 276
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(331)));
#line 276
c_rt_lib0move(&___nl__7,___get_global_const(1));
#line 276
c_rt_lib0move(&___nl__8,___get_global_const(2));
#line 276
c_rt_lib0move(&___nl__9, c_rt_lib0array_len(___nl__5));
#line 276
label_3:
#line 276
c_rt_lib0move(&___nl__10, c_rt_lib0ge(___nl__7, ___nl__9));
#line 276
if(c_rt_lib0check_true_native(___nl__10)){ goto label_1;}
#line 276
c_rt_lib0move(&___nl__6, c_rt_lib0array_get(___nl__5, ___nl__7));
#line 277
c_rt_lib0move(&___nl__11,___get_global_const(1));
#line 277
c_rt_lib0move(&___nl__11, c_rt_lib0num_eq(___nl__11, ___nl__4));
#line 277
c_rt_lib0move(&___nl__11, c_rt_lib0not(___nl__11));
#line 277
c_rt_lib0move(&___nl__11, c_rt_lib0not(___nl__11));
#line 277
if(c_rt_lib0check_true_native(___nl__11)){ goto label_5;}
#line 277
c_rt_lib0move(&___nl__12,___get_global_const(172));
#line 277
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__12));
#line 277
c_rt_lib0clear(&___nl__12);
#line 277
goto label_5;
#line 277
label_5:
#line 277
c_rt_lib0clear(&___nl__11);
#line 278
c_rt_lib0move(&___nl__11, c_rt_lib0priv_is(___nl__6, ___get_global_const(234)));
#line 278
if(c_rt_lib0check_true_native(___nl__11)){ goto label_7;}
#line 280
c_rt_lib0move(&___nl__11, c_rt_lib0priv_is(___nl__6, ___get_global_const(5)));
#line 280
if(c_rt_lib0check_true_native(___nl__11)){ goto label_8;}
#line 280
c_rt_lib0move(&___nl__11,___get_global_const(74));
#line 280
c_rt_lib0move(&___nl__11, c_rt_lib0array_mk(2, ___nl__11, ___nl__6));
#line 280
nl_die_arg(___nl__11);
#line 278
label_7:
#line 279
c_rt_lib0move(&___nl__12, generator_c_priv0arg_t());
#line 279
c_rt_lib0move(&___nl__13,___get_global_const(297));
#line 279
c_rt_lib0move(&___nl__12, c_rt_lib0concat_add(___nl__12, ___nl__13));
#line 279
c_rt_lib0clear(&___nl__13);
#line 279
c_rt_lib0move(&___nl__12, c_rt_lib0concat_add(___nl__12, ___nl__4));
#line 279
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__12));
#line 279
c_rt_lib0clear(&___nl__12);
#line 280
goto label_6;
#line 280
label_8:
#line 281
c_rt_lib0move(&___nl__12, generator_c_priv0arg_t());
#line 281
c_rt_lib0move(&___nl__13,___get_global_const(332));
#line 281
c_rt_lib0move(&___nl__12, c_rt_lib0concat_add(___nl__12, ___nl__13));
#line 281
c_rt_lib0clear(&___nl__13);
#line 281
c_rt_lib0move(&___nl__12, c_rt_lib0concat_add(___nl__12, ___nl__4));
#line 281
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__12));
#line 281
c_rt_lib0clear(&___nl__12);
#line 282
goto label_6;
#line 282
label_6:
#line 282
c_rt_lib0clear(&___nl__11);
#line 283
c_rt_lib0move(&___nl__11,___get_global_const(2));
#line 283
c_rt_lib0move(&___nl__4, c_rt_lib0add_mod(___nl__4, ___nl__11));
#line 283
c_rt_lib0clear(&___nl__11);
#line 284
c_rt_lib0move(&___nl__7, c_rt_lib0add_mod(___nl__7, ___nl__8));
#line 284
goto label_3;
#line 284
label_1:
#line 284
c_rt_lib0clear(&___nl__5);
#line 284
c_rt_lib0clear(&___nl__6);
#line 284
c_rt_lib0clear(&___nl__7);
#line 284
c_rt_lib0clear(&___nl__8);
#line 284
c_rt_lib0clear(&___nl__9);
#line 284
c_rt_lib0clear(&___nl__10);
#line 286
c_rt_lib0move(&___nl__5,___get_global_const(176));
#line 286
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__5));
#line 286
c_rt_lib0clear(&___nl__5);
#line 288
c_rt_lib0clear(&___nl__0);
#line 288
c_rt_lib0clear(&___nl__1);
#line 288
c_rt_lib0clear(&___nl__3);
#line 288
c_rt_lib0clear(&___nl__4);
#line 288
return ___nl__2;
#line 288
c_rt_lib0clear(&___nl__2);
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

ImmT generator_c_priv0get_const(ImmT * ___ref___0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__1);
generator_c_priv0__const__init();
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
#line 291
c_rt_lib0move(&___nl__2,___get_global_const(2));
#line 291
c_rt_lib0move(&___nl__2, c_rt_lib0unary_minus(___nl__2));
#line 292
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(278)));
#line 292
c_rt_lib0move(&___nl__3, hash0has_key(___nl__4, ___nl__1));
#line 292
c_rt_lib0clear(&___nl__4);
#line 292
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 292
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 292
if(c_rt_lib0check_true_native(___nl__3)){ goto label_2;}
#line 293
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(277)));
#line 293
c_rt_lib0move(&___nl__4, array0len(___nl__5));
#line 293
c_rt_lib0clear(&___nl__5);
#line 293
c_rt_lib0copy(&___nl__2, ___nl__4);
#line 293
c_rt_lib0clear(&___nl__4);
#line 294
c_rt_lib0move(&___nl__4,___get_global_const(277));
#line 294
c_rt_lib0move(&___nl__4, c_rt_lib0get_ref_hash(*___ref___0, ___nl__4));
#line 294
c_rt_lib0delete(array0push(&___nl__4, ___nl__1));
#line 294
c_rt_lib0move(&___nl__5,___get_global_const(277));
#line 294
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__5, ___nl__4));
#line 294
c_rt_lib0clear(&___nl__5);
#line 294
c_rt_lib0clear(&___nl__4);
#line 295
c_rt_lib0move(&___nl__4,___get_global_const(278));
#line 295
c_rt_lib0move(&___nl__4, c_rt_lib0get_ref_hash(*___ref___0, ___nl__4));
#line 295
c_rt_lib0delete(hash0set_value(&___nl__4, ___nl__1, ___nl__2));
#line 295
c_rt_lib0move(&___nl__5,___get_global_const(278));
#line 295
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__5, ___nl__4));
#line 295
c_rt_lib0clear(&___nl__5);
#line 295
c_rt_lib0clear(&___nl__4);
#line 296
goto label_1;
#line 296
label_2:
#line 297
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(278)));
#line 297
c_rt_lib0move(&___nl__4, hash0get_value(___nl__5, ___nl__1));
#line 297
c_rt_lib0clear(&___nl__5);
#line 297
c_rt_lib0copy(&___nl__2, ___nl__4);
#line 297
c_rt_lib0clear(&___nl__4);
#line 298
goto label_1;
#line 298
label_1:
#line 298
c_rt_lib0clear(&___nl__3);
#line 299
c_rt_lib0clear(&___nl__1);
#line 299
return ___nl__2;
#line 299
c_rt_lib0clear(&___nl__2);
#line 299
c_rt_lib0clear(&___nl__1);
#line 299
return NULL;
}

ImmT generator_c_priv0insert_const_to_modules_hash(ImmT * ___ref___0,ImmT ___nl__1,ImmT ___nl__2) {
c_rt_lib0arg_val(___nl__1);
c_rt_lib0arg_val(___nl__2);
generator_c_priv0__const__init();
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
#line 302
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(282)));
#line 302
c_rt_lib0move(&___nl__3, hash0get_value(___nl__4, ___nl__2));
#line 302
c_rt_lib0clear(&___nl__4);
#line 303
c_rt_lib0move(&___nl__4,___get_global_const(0));
#line 303
c_rt_lib0delete(hash0set_value(&___nl__3, ___nl__1, ___nl__4));
#line 303
c_rt_lib0clear(&___nl__4);
#line 304
c_rt_lib0move(&___nl__4,___get_global_const(282));
#line 304
c_rt_lib0move(&___nl__4, c_rt_lib0get_ref_hash(*___ref___0, ___nl__4));
#line 304
c_rt_lib0delete(hash0set_value(&___nl__4, ___nl__2, ___nl__3));
#line 304
c_rt_lib0move(&___nl__5,___get_global_const(282));
#line 304
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__5, ___nl__4));
#line 304
c_rt_lib0clear(&___nl__5);
#line 304
c_rt_lib0clear(&___nl__4);
#line 304
c_rt_lib0clear(&___nl__3);
#line 304
c_rt_lib0clear(&___nl__1);
#line 304
c_rt_lib0clear(&___nl__2);
#line 304
return NULL;
}

ImmT generator_c_priv0get_global_const(ImmT * ___ref___0,ImmT ___nl__1,ImmT ___nl__2) {
c_rt_lib0arg_val(___nl__1);
c_rt_lib0arg_val(___nl__2);
generator_c_priv0__const__init();
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
ImmT ___nl__9 = NULL;
ImmT ___nl__10 = NULL;
ImmT ___nl__11 = NULL;
#line 307
c_rt_lib0move(&___nl__3,___get_global_const(2));
#line 307
c_rt_lib0move(&___nl__3, c_rt_lib0unary_minus(___nl__3));
#line 308
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(278)));
#line 308
c_rt_lib0move(&___nl__4, hash0has_key(___nl__5, ___nl__1));
#line 308
c_rt_lib0clear(&___nl__5);
#line 308
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 308
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 308
if(c_rt_lib0check_true_native(___nl__4)){ goto label_2;}
#line 309
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(281)));
#line 309
c_rt_lib0move(&___nl__5, array0len(___nl__6));
#line 309
c_rt_lib0clear(&___nl__6);
#line 309
c_rt_lib0move(&___nl__6,___get_global_const(1));
#line 309
c_rt_lib0move(&___nl__5, c_rt_lib0gt(___nl__5, ___nl__6));
#line 309
c_rt_lib0clear(&___nl__6);
#line 309
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 309
if(c_rt_lib0check_true_native(___nl__5)){ goto label_4;}
#line 310
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(281)));
#line 310
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(281)));
#line 310
c_rt_lib0move(&___nl__7, array0len(___nl__8));
#line 310
c_rt_lib0clear(&___nl__8);
#line 310
c_rt_lib0move(&___nl__8,___get_global_const(2));
#line 310
c_rt_lib0move(&___nl__7, c_rt_lib0sub_mod(___nl__7, ___nl__8));
#line 310
c_rt_lib0clear(&___nl__8);
#line 310
c_rt_lib0move(&___nl__6, c_rt_lib0array_get(___nl__6, ___nl__7));
#line 310
c_rt_lib0clear(&___nl__7);
#line 310
c_rt_lib0copy(&___nl__3, ___nl__6);
#line 310
c_rt_lib0clear(&___nl__6);
#line 311
c_rt_lib0move(&___nl__6,___get_global_const(281));
#line 311
c_rt_lib0move(&___nl__6, c_rt_lib0get_ref_hash(*___ref___0, ___nl__6));
#line 311
c_rt_lib0delete(array0pop(&___nl__6));
#line 311
c_rt_lib0move(&___nl__7,___get_global_const(281));
#line 311
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__7, ___nl__6));
#line 311
c_rt_lib0clear(&___nl__7);
#line 311
c_rt_lib0clear(&___nl__6);
#line 312
c_rt_lib0move(&___nl__7,___get_global_const(2));
#line 312
c_rt_lib0move(&___nl__6, c_rt_lib0hash_mk(2, ___get_global_const(279), ___nl__1, ___get_global_const(280), ___nl__7));
#line 312
c_rt_lib0clear(&___nl__7);
#line 312
c_rt_lib0move(&___nl__7,___get_global_const(277));
#line 312
c_rt_lib0move(&___nl__7, c_rt_lib0get_ref_hash(*___ref___0, ___nl__7));
#line 312
c_rt_lib0copy(&___nl__8, ___nl__6);
#line 312
c_rt_lib0array_set(&___nl__7, ___nl__3, ___nl__8);
#line 312
c_rt_lib0move(&___nl__9,___get_global_const(277));
#line 312
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__9, ___nl__7));
#line 312
c_rt_lib0clear(&___nl__9);
#line 312
c_rt_lib0clear(&___nl__6);
#line 312
c_rt_lib0clear(&___nl__7);
#line 312
c_rt_lib0clear(&___nl__8);
#line 313
goto label_3;
#line 313
label_4:
#line 314
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(277)));
#line 314
c_rt_lib0move(&___nl__6, array0len(___nl__7));
#line 314
c_rt_lib0clear(&___nl__7);
#line 314
c_rt_lib0copy(&___nl__3, ___nl__6);
#line 314
c_rt_lib0clear(&___nl__6);
#line 315
c_rt_lib0move(&___nl__6,___get_global_const(277));
#line 315
c_rt_lib0move(&___nl__6, c_rt_lib0get_ref_hash(*___ref___0, ___nl__6));
#line 315
c_rt_lib0move(&___nl__8,___get_global_const(2));
#line 315
c_rt_lib0move(&___nl__7, c_rt_lib0hash_mk(2, ___get_global_const(279), ___nl__1, ___get_global_const(280), ___nl__8));
#line 315
c_rt_lib0clear(&___nl__8);
#line 315
c_rt_lib0delete(array0push(&___nl__6, ___nl__7));
#line 315
c_rt_lib0clear(&___nl__7);
#line 315
c_rt_lib0move(&___nl__7,___get_global_const(277));
#line 315
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__7, ___nl__6));
#line 315
c_rt_lib0clear(&___nl__7);
#line 315
c_rt_lib0clear(&___nl__6);
#line 316
goto label_3;
#line 316
label_3:
#line 316
c_rt_lib0clear(&___nl__5);
#line 317
c_rt_lib0delete(generator_c_priv0insert_const_to_modules_hash(___ref___0, ___nl__1, ___nl__2));
#line 318
c_rt_lib0move(&___nl__5,___get_global_const(278));
#line 318
c_rt_lib0move(&___nl__5, c_rt_lib0get_ref_hash(*___ref___0, ___nl__5));
#line 318
c_rt_lib0delete(hash0set_value(&___nl__5, ___nl__1, ___nl__3));
#line 318
c_rt_lib0move(&___nl__6,___get_global_const(278));
#line 318
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__6, ___nl__5));
#line 318
c_rt_lib0clear(&___nl__6);
#line 318
c_rt_lib0clear(&___nl__5);
#line 319
goto label_1;
#line 319
label_2:
#line 320
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(278)));
#line 320
c_rt_lib0move(&___nl__5, hash0get_value(___nl__6, ___nl__1));
#line 320
c_rt_lib0clear(&___nl__6);
#line 320
c_rt_lib0copy(&___nl__3, ___nl__5);
#line 320
c_rt_lib0clear(&___nl__5);
#line 321
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(282)));
#line 321
c_rt_lib0move(&___nl__5, hash0get_value(___nl__6, ___nl__2));
#line 321
c_rt_lib0clear(&___nl__6);
#line 322
c_rt_lib0move(&___nl__6, hash0has_key(___nl__5, ___nl__1));
#line 322
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 322
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 322
if(c_rt_lib0check_true_native(___nl__6)){ goto label_6;}
#line 323
c_rt_lib0move(&___nl__7,___get_global_const(277));
#line 323
c_rt_lib0move(&___nl__7, c_rt_lib0get_ref_hash(*___ref___0, ___nl__7));
#line 323
c_rt_lib0move(&___nl__8, c_rt_lib0get_ref_arr(___nl__7, ___nl__3));
#line 323
c_rt_lib0move(&___nl__9,___get_global_const(280));
#line 323
c_rt_lib0move(&___nl__9, c_rt_lib0get_ref_hash(___nl__8, ___nl__9));
#line 323
c_rt_lib0move(&___nl__10,___get_global_const(2));
#line 323
c_rt_lib0move(&___nl__9, c_rt_lib0add_mod(___nl__9, ___nl__10));
#line 323
c_rt_lib0move(&___nl__11,___get_global_const(280));
#line 323
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__8, ___nl__11, ___nl__9));
#line 323
c_rt_lib0delete(c_rt_lib0set_ref_arr(&___nl__7, ___nl__3, ___nl__8));
#line 323
c_rt_lib0move(&___nl__11,___get_global_const(277));
#line 323
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__11, ___nl__7));
#line 323
c_rt_lib0clear(&___nl__11);
#line 323
c_rt_lib0clear(&___nl__7);
#line 323
c_rt_lib0clear(&___nl__8);
#line 323
c_rt_lib0clear(&___nl__9);
#line 323
c_rt_lib0clear(&___nl__10);
#line 324
c_rt_lib0delete(generator_c_priv0insert_const_to_modules_hash(___ref___0, ___nl__1, ___nl__2));
#line 325
goto label_6;
#line 325
label_6:
#line 325
c_rt_lib0clear(&___nl__6);
#line 325
c_rt_lib0clear(&___nl__5);
#line 326
goto label_1;
#line 326
label_1:
#line 326
c_rt_lib0clear(&___nl__4);
#line 327
c_rt_lib0clear(&___nl__1);
#line 327
c_rt_lib0clear(&___nl__2);
#line 327
return ___nl__3;
#line 327
c_rt_lib0clear(&___nl__3);
#line 327
c_rt_lib0clear(&___nl__1);
#line 327
c_rt_lib0clear(&___nl__2);
#line 327
return NULL;
}

ImmT generator_c0clear_module_from_state0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 2, "generator_c0clear_module_from_state");
return generator_c0clear_module_from_state(&_tab[0], _tab[1]);}
ImmT generator_c0clear_module_from_state(ImmT * ___ref___0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__1);
generator_c_priv0__const__init();
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
#line 330
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(133)));
#line 330
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(282)));
#line 330
c_rt_lib0move(&___nl__2, hash0has_key(___nl__3, ___nl__1));
#line 330
c_rt_lib0clear(&___nl__3);
#line 330
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 330
if(c_rt_lib0check_true_native(___nl__2)){ goto label_2;}
#line 331
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(133)));
#line 331
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(282)));
#line 331
c_rt_lib0move(&___nl__3, hash0get_value(___nl__4, ___nl__1));
#line 331
c_rt_lib0clear(&___nl__4);
#line 332
c_rt_lib0move(&___nl__6, c_rt_lib0init_iter(___nl__3));
#line 332
label_5:
#line 332
c_rt_lib0move(&___nl__4, c_rt_lib0is_end_hash(___nl__6));
#line 332
if(c_rt_lib0check_true_native(___nl__4)){ goto label_3;}
#line 332
c_rt_lib0move(&___nl__4, c_rt_lib0get_key_iter(___nl__6));
#line 332
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value(___nl__3, ___nl__4));
#line 333
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(133)));
#line 333
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__8, ___get_global_const(278)));
#line 333
c_rt_lib0move(&___nl__7, hash0get_value(___nl__8, ___nl__4));
#line 333
c_rt_lib0clear(&___nl__8);
#line 334
c_rt_lib0move(&___nl__8,___get_global_const(133));
#line 334
c_rt_lib0move(&___nl__8, c_rt_lib0get_ref_hash(*___ref___0, ___nl__8));
#line 334
c_rt_lib0move(&___nl__9,___get_global_const(277));
#line 334
c_rt_lib0move(&___nl__9, c_rt_lib0get_ref_hash(___nl__8, ___nl__9));
#line 334
c_rt_lib0move(&___nl__10, c_rt_lib0get_ref_arr(___nl__9, ___nl__7));
#line 334
c_rt_lib0move(&___nl__11,___get_global_const(280));
#line 334
c_rt_lib0move(&___nl__11, c_rt_lib0get_ref_hash(___nl__10, ___nl__11));
#line 334
c_rt_lib0move(&___nl__12,___get_global_const(2));
#line 334
c_rt_lib0move(&___nl__11, c_rt_lib0sub_mod(___nl__11, ___nl__12));
#line 334
c_rt_lib0move(&___nl__13,___get_global_const(280));
#line 334
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__10, ___nl__13, ___nl__11));
#line 334
c_rt_lib0delete(c_rt_lib0set_ref_arr(&___nl__9, ___nl__7, ___nl__10));
#line 334
c_rt_lib0move(&___nl__13,___get_global_const(277));
#line 334
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__8, ___nl__13, ___nl__9));
#line 334
c_rt_lib0move(&___nl__13,___get_global_const(133));
#line 334
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__13, ___nl__8));
#line 334
c_rt_lib0clear(&___nl__13);
#line 334
c_rt_lib0clear(&___nl__8);
#line 334
c_rt_lib0clear(&___nl__9);
#line 334
c_rt_lib0clear(&___nl__10);
#line 334
c_rt_lib0clear(&___nl__11);
#line 334
c_rt_lib0clear(&___nl__12);
#line 335
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(133)));
#line 335
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__8, ___get_global_const(277)));
#line 335
c_rt_lib0move(&___nl__8, c_rt_lib0array_get(___nl__8, ___nl__7));
#line 335
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__8, ___get_global_const(280)));
#line 335
c_rt_lib0move(&___nl__9,___get_global_const(1));
#line 335
c_rt_lib0move(&___nl__8, c_rt_lib0num_eq(___nl__8, ___nl__9));
#line 335
c_rt_lib0clear(&___nl__9);
#line 335
c_rt_lib0move(&___nl__8, c_rt_lib0not(___nl__8));
#line 335
if(c_rt_lib0check_true_native(___nl__8)){ goto label_7;}
#line 336
c_rt_lib0move(&___nl__9,___get_global_const(133));
#line 336
c_rt_lib0move(&___nl__9, c_rt_lib0get_ref_hash(*___ref___0, ___nl__9));
#line 336
c_rt_lib0move(&___nl__10,___get_global_const(278));
#line 336
c_rt_lib0move(&___nl__10, c_rt_lib0get_ref_hash(___nl__9, ___nl__10));
#line 336
c_rt_lib0delete(hash0delete(&___nl__10, ___nl__4));
#line 336
c_rt_lib0move(&___nl__11,___get_global_const(278));
#line 336
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__9, ___nl__11, ___nl__10));
#line 336
c_rt_lib0move(&___nl__11,___get_global_const(133));
#line 336
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__11, ___nl__9));
#line 336
c_rt_lib0clear(&___nl__11);
#line 336
c_rt_lib0clear(&___nl__9);
#line 336
c_rt_lib0clear(&___nl__10);
#line 337
c_rt_lib0move(&___nl__9,___get_global_const(133));
#line 337
c_rt_lib0move(&___nl__9, c_rt_lib0get_ref_hash(*___ref___0, ___nl__9));
#line 337
c_rt_lib0move(&___nl__10,___get_global_const(281));
#line 337
c_rt_lib0move(&___nl__10, c_rt_lib0get_ref_hash(___nl__9, ___nl__10));
#line 337
c_rt_lib0delete(array0push(&___nl__10, ___nl__7));
#line 337
c_rt_lib0move(&___nl__11,___get_global_const(281));
#line 337
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__9, ___nl__11, ___nl__10));
#line 337
c_rt_lib0move(&___nl__11,___get_global_const(133));
#line 337
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__11, ___nl__9));
#line 337
c_rt_lib0clear(&___nl__11);
#line 337
c_rt_lib0clear(&___nl__9);
#line 337
c_rt_lib0clear(&___nl__10);
#line 338
goto label_7;
#line 338
label_7:
#line 338
c_rt_lib0clear(&___nl__8);
#line 338
c_rt_lib0clear(&___nl__7);
#line 339
c_rt_lib0move(&___nl__6, c_rt_lib0next_iter(___nl__6));
#line 339
goto label_5;
#line 339
label_3:
#line 339
c_rt_lib0clear(&___nl__4);
#line 339
c_rt_lib0clear(&___nl__5);
#line 339
c_rt_lib0clear(&___nl__6);
#line 340
c_rt_lib0move(&___nl__4,___get_global_const(133));
#line 340
c_rt_lib0move(&___nl__4, c_rt_lib0get_ref_hash(*___ref___0, ___nl__4));
#line 340
c_rt_lib0move(&___nl__5,___get_global_const(282));
#line 340
c_rt_lib0move(&___nl__5, c_rt_lib0get_ref_hash(___nl__4, ___nl__5));
#line 340
c_rt_lib0delete(hash0delete(&___nl__5, ___nl__1));
#line 340
c_rt_lib0move(&___nl__6,___get_global_const(282));
#line 340
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__4, ___nl__6, ___nl__5));
#line 340
c_rt_lib0move(&___nl__6,___get_global_const(133));
#line 340
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__6, ___nl__4));
#line 340
c_rt_lib0clear(&___nl__6);
#line 340
c_rt_lib0clear(&___nl__4);
#line 340
c_rt_lib0clear(&___nl__5);
#line 340
c_rt_lib0clear(&___nl__3);
#line 341
goto label_2;
#line 341
label_2:
#line 341
c_rt_lib0clear(&___nl__2);
#line 341
c_rt_lib0clear(&___nl__1);
#line 341
return NULL;
}

ImmT generator_c_priv0get_const_sim(ImmT * ___ref___0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__1);
generator_c_priv0__const__init();
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
#line 344
c_rt_lib0move(&___nl__3,___get_global_const(133));
#line 344
c_rt_lib0move(&___nl__3, c_rt_lib0get_ref_hash(*___ref___0, ___nl__3));
#line 344
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(292)));
#line 344
c_rt_lib0move(&___nl__2, generator_c_priv0get_global_const(&___nl__3, ___nl__1, ___nl__4));
#line 344
c_rt_lib0clear(&___nl__4);
#line 344
c_rt_lib0move(&___nl__4,___get_global_const(133));
#line 344
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__4, ___nl__3));
#line 344
c_rt_lib0clear(&___nl__4);
#line 344
c_rt_lib0clear(&___nl__3);
#line 345
c_rt_lib0move(&___nl__3,___get_global_const(333));
#line 345
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__2));
#line 345
c_rt_lib0move(&___nl__4,___get_global_const(176));
#line 345
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 345
c_rt_lib0clear(&___nl__4);
#line 345
c_rt_lib0clear(&___nl__1);
#line 345
c_rt_lib0clear(&___nl__2);
#line 345
return ___nl__3;
#line 345
c_rt_lib0clear(&___nl__3);
#line 345
c_rt_lib0clear(&___nl__2);
#line 345
c_rt_lib0clear(&___nl__1);
#line 345
return NULL;
}

ImmT generator_c_priv0get_const_singleton(ImmT * ___ref___0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__1);
generator_c_priv0__const__init();
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
#line 348
c_rt_lib0move(&___nl__3,___get_global_const(294));
#line 348
c_rt_lib0move(&___nl__3, c_rt_lib0get_ref_hash(*___ref___0, ___nl__3));
#line 348
c_rt_lib0move(&___nl__4,___get_global_const(288));
#line 348
c_rt_lib0move(&___nl__4, c_rt_lib0get_ref_hash(___nl__3, ___nl__4));
#line 348
c_rt_lib0move(&___nl__2, generator_c_priv0get_const(&___nl__4, ___nl__1));
#line 348
c_rt_lib0move(&___nl__5,___get_global_const(288));
#line 348
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__3, ___nl__5, ___nl__4));
#line 348
c_rt_lib0move(&___nl__5,___get_global_const(294));
#line 348
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__5, ___nl__3));
#line 348
c_rt_lib0clear(&___nl__5);
#line 348
c_rt_lib0clear(&___nl__3);
#line 348
c_rt_lib0clear(&___nl__4);
#line 349
c_rt_lib0move(&___nl__4,___get_global_const(0));
#line 349
c_rt_lib0move(&___nl__5,___get_global_const(334));
#line 349
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(292)));
#line 349
c_rt_lib0move(&___nl__3, generator_c_priv0get_fun_name(___nl__4, ___nl__5, ___nl__6));
#line 349
c_rt_lib0clear(&___nl__6);
#line 349
c_rt_lib0clear(&___nl__5);
#line 349
c_rt_lib0clear(&___nl__4);
#line 349
c_rt_lib0move(&___nl__4,___get_global_const(322));
#line 349
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 349
c_rt_lib0clear(&___nl__4);
#line 349
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__2));
#line 349
c_rt_lib0move(&___nl__4,___get_global_const(176));
#line 349
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 349
c_rt_lib0clear(&___nl__4);
#line 349
c_rt_lib0clear(&___nl__1);
#line 349
c_rt_lib0clear(&___nl__2);
#line 349
return ___nl__3;
#line 349
c_rt_lib0clear(&___nl__3);
#line 349
c_rt_lib0clear(&___nl__2);
#line 349
c_rt_lib0clear(&___nl__1);
#line 349
return NULL;
}

ImmT generator_c_priv0get_func_ptr_header(ImmT ___nl__0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
generator_c_priv0__const__init();
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
#line 352
c_rt_lib0move(&___nl__2, generator_c_priv0arg_t());
#line 352
c_rt_lib0move(&___nl__3, generator_c_priv0get_function_name(___nl__0, ___nl__1));
#line 352
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__3));
#line 352
c_rt_lib0clear(&___nl__3);
#line 352
c_rt_lib0move(&___nl__3,___get_global_const(335));
#line 352
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__3));
#line 352
c_rt_lib0clear(&___nl__3);
#line 352
c_rt_lib0clear(&___nl__0);
#line 352
c_rt_lib0clear(&___nl__1);
#line 352
return ___nl__2;
#line 352
c_rt_lib0clear(&___nl__2);
#line 352
c_rt_lib0clear(&___nl__0);
#line 352
c_rt_lib0clear(&___nl__1);
#line 352
return NULL;
}

ImmT generator_c_priv0print_mod(ImmT * ___ref___0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__1);
generator_c_priv0__const__init();
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
#line 356
c_rt_lib0move(&___nl__2, generator_c_priv0get_cr());
#line 356
c_rt_lib0delete(generator_c_priv0print_to_header(___ref___0, ___nl__2));
#line 356
c_rt_lib0clear(&___nl__2);
#line 357
c_rt_lib0move(&___nl__2,___get_global_const(301));
#line 357
c_rt_lib0move(&___nl__3, string0lf());
#line 357
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__3));
#line 357
c_rt_lib0clear(&___nl__3);
#line 357
c_rt_lib0delete(generator_c_priv0print_to_header(___ref___0, ___nl__2));
#line 357
c_rt_lib0clear(&___nl__2);
#line 358
c_rt_lib0move(&___nl__3,___get_global_const(302));
#line 358
c_rt_lib0move(&___nl__2, generator_c_priv0get_include(___nl__3));
#line 358
c_rt_lib0clear(&___nl__3);
#line 358
c_rt_lib0move(&___nl__3, string0lf());
#line 358
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__3));
#line 358
c_rt_lib0clear(&___nl__3);
#line 358
c_rt_lib0delete(generator_c_priv0print_to_header(___ref___0, ___nl__2));
#line 358
c_rt_lib0clear(&___nl__2);
#line 360
c_rt_lib0move(&___nl__2, generator_c_priv0get_cr());
#line 360
c_rt_lib0delete(generator_c_priv0print(___ref___0, ___nl__2));
#line 360
c_rt_lib0clear(&___nl__2);
#line 361
c_rt_lib0move(&___nl__3,___get_global_const(302));
#line 361
c_rt_lib0move(&___nl__2, generator_c_priv0get_include(___nl__3));
#line 361
c_rt_lib0clear(&___nl__3);
#line 361
c_rt_lib0delete(generator_c_priv0println(___ref___0, ___nl__2));
#line 361
c_rt_lib0clear(&___nl__2);
#line 362
c_rt_lib0move(&___nl__3,___get_global_const(303));
#line 362
c_rt_lib0move(&___nl__2, generator_c_priv0get_include(___nl__3));
#line 362
c_rt_lib0clear(&___nl__3);
#line 362
c_rt_lib0delete(generator_c_priv0println(___ref___0, ___nl__2));
#line 362
c_rt_lib0clear(&___nl__2);
#line 363
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(292)));
#line 363
c_rt_lib0move(&___nl__2, generator_c_priv0get_include(___nl__3));
#line 363
c_rt_lib0clear(&___nl__3);
#line 363
c_rt_lib0delete(generator_c_priv0println(___ref___0, ___nl__2));
#line 363
c_rt_lib0clear(&___nl__2);
#line 365
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(336)));
#line 365
c_rt_lib0move(&___nl__4,___get_global_const(1));
#line 365
c_rt_lib0move(&___nl__5,___get_global_const(2));
#line 365
c_rt_lib0move(&___nl__6, c_rt_lib0array_len(___nl__2));
#line 365
label_3:
#line 365
c_rt_lib0move(&___nl__7, c_rt_lib0ge(___nl__4, ___nl__6));
#line 365
if(c_rt_lib0check_true_native(___nl__7)){ goto label_1;}
#line 365
c_rt_lib0move(&___nl__3, c_rt_lib0array_get(___nl__2, ___nl__4));
#line 366
c_rt_lib0move(&___nl__8, generator_c_priv0get_include(___nl__3));
#line 366
c_rt_lib0delete(generator_c_priv0println(___ref___0, ___nl__8));
#line 366
c_rt_lib0clear(&___nl__8);
#line 367
c_rt_lib0move(&___nl__4, c_rt_lib0add_mod(___nl__4, ___nl__5));
#line 367
goto label_3;
#line 367
label_1:
#line 367
c_rt_lib0clear(&___nl__2);
#line 367
c_rt_lib0clear(&___nl__3);
#line 367
c_rt_lib0clear(&___nl__4);
#line 367
c_rt_lib0clear(&___nl__5);
#line 367
c_rt_lib0clear(&___nl__6);
#line 367
c_rt_lib0clear(&___nl__7);
#line 368
c_rt_lib0move(&___nl__2,___get_global_const(337));
#line 368
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(292)));
#line 368
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__3));
#line 368
c_rt_lib0clear(&___nl__3);
#line 368
c_rt_lib0move(&___nl__3,___get_global_const(338));
#line 368
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__3));
#line 368
c_rt_lib0clear(&___nl__3);
#line 368
c_rt_lib0move(&___nl__3, string0lf());
#line 368
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__3));
#line 368
c_rt_lib0clear(&___nl__3);
#line 368
c_rt_lib0delete(generator_c_priv0println(___ref___0, ___nl__2));
#line 368
c_rt_lib0clear(&___nl__2);
#line 371
c_rt_lib0move(&___nl__2,___get_global_const(339));
#line 371
c_rt_lib0move(&___nl__3, generator_c_priv0arg_t());
#line 371
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__3));
#line 371
c_rt_lib0clear(&___nl__3);
#line 371
c_rt_lib0move(&___nl__3,___get_global_const(340));
#line 371
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__3));
#line 371
c_rt_lib0clear(&___nl__3);
#line 371
c_rt_lib0delete(generator_c_priv0println(___ref___0, ___nl__2));
#line 371
c_rt_lib0clear(&___nl__2);
#line 372
c_rt_lib0move(&___nl__2,___get_global_const(341));
#line 372
c_rt_lib0move(&___nl__4,___get_global_const(0));
#line 372
c_rt_lib0move(&___nl__5,___get_global_const(342));
#line 372
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(292)));
#line 372
c_rt_lib0move(&___nl__3, generator_c_priv0get_fun_name(___nl__4, ___nl__5, ___nl__6));
#line 372
c_rt_lib0clear(&___nl__6);
#line 372
c_rt_lib0clear(&___nl__5);
#line 372
c_rt_lib0clear(&___nl__4);
#line 372
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__3));
#line 372
c_rt_lib0clear(&___nl__3);
#line 372
c_rt_lib0move(&___nl__3,___get_global_const(343));
#line 372
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__3));
#line 372
c_rt_lib0clear(&___nl__3);
#line 372
c_rt_lib0delete(generator_c_priv0println(___ref___0, ___nl__2));
#line 372
c_rt_lib0clear(&___nl__2);
#line 373
c_rt_lib0move(&___nl__2, generator_c_priv0arg_t());
#line 373
c_rt_lib0move(&___nl__4,___get_global_const(0));
#line 373
c_rt_lib0move(&___nl__5,___get_global_const(344));
#line 373
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(292)));
#line 373
c_rt_lib0move(&___nl__3, generator_c_priv0get_fun_name(___nl__4, ___nl__5, ___nl__6));
#line 373
c_rt_lib0clear(&___nl__6);
#line 373
c_rt_lib0clear(&___nl__5);
#line 373
c_rt_lib0clear(&___nl__4);
#line 373
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__3));
#line 373
c_rt_lib0clear(&___nl__3);
#line 373
c_rt_lib0move(&___nl__3,___get_global_const(345));
#line 373
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__3));
#line 373
c_rt_lib0clear(&___nl__3);
#line 373
c_rt_lib0delete(generator_c_priv0println(___ref___0, ___nl__2));
#line 373
c_rt_lib0clear(&___nl__2);
#line 374
c_rt_lib0move(&___nl__2, generator_c_priv0arg_t());
#line 374
c_rt_lib0move(&___nl__4,___get_global_const(0));
#line 374
c_rt_lib0move(&___nl__5,___get_global_const(334));
#line 374
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(292)));
#line 374
c_rt_lib0move(&___nl__3, generator_c_priv0get_fun_name(___nl__4, ___nl__5, ___nl__6));
#line 374
c_rt_lib0clear(&___nl__6);
#line 374
c_rt_lib0clear(&___nl__5);
#line 374
c_rt_lib0clear(&___nl__4);
#line 374
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__3));
#line 374
c_rt_lib0clear(&___nl__3);
#line 374
c_rt_lib0move(&___nl__3,___get_global_const(345));
#line 374
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__3));
#line 374
c_rt_lib0clear(&___nl__3);
#line 374
c_rt_lib0move(&___nl__3, string0lf());
#line 374
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__3));
#line 374
c_rt_lib0clear(&___nl__3);
#line 374
c_rt_lib0delete(generator_c_priv0println(___ref___0, ___nl__2));
#line 374
c_rt_lib0clear(&___nl__2);
#line 376
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(75)));
#line 376
c_rt_lib0move(&___nl__4,___get_global_const(1));
#line 376
c_rt_lib0move(&___nl__5,___get_global_const(2));
#line 376
c_rt_lib0move(&___nl__6, c_rt_lib0array_len(___nl__2));
#line 376
label_6:
#line 376
c_rt_lib0move(&___nl__7, c_rt_lib0ge(___nl__4, ___nl__6));
#line 376
if(c_rt_lib0check_true_native(___nl__7)){ goto label_4;}
#line 376
c_rt_lib0move(&___nl__3, c_rt_lib0array_get(___nl__2, ___nl__4));
#line 377
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(292)));
#line 377
c_rt_lib0move(&___nl__8, generator_c_priv0get_function_header(___nl__3, ___nl__9));
#line 377
c_rt_lib0clear(&___nl__9);
#line 378
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(328)));
#line 378
c_rt_lib0move(&___nl__10, c_rt_lib0priv_is(___nl__9, ___get_global_const(329)));
#line 378
if(c_rt_lib0check_true_native(___nl__10)){ goto label_8;}
#line 381
c_rt_lib0move(&___nl__10, c_rt_lib0priv_is(___nl__9, ___get_global_const(330)));
#line 381
if(c_rt_lib0check_true_native(___nl__10)){ goto label_9;}
#line 381
c_rt_lib0move(&___nl__10,___get_global_const(74));
#line 381
c_rt_lib0move(&___nl__10, c_rt_lib0array_mk(2, ___nl__10, ___nl__9));
#line 381
nl_die_arg(___nl__10);
#line 378
label_8:
#line 379
c_rt_lib0move(&___nl__11,___get_global_const(311));
#line 379
c_rt_lib0move(&___nl__11, c_rt_lib0concat_new(___nl__8, ___nl__11));
#line 379
c_rt_lib0move(&___nl__12, string0lf());
#line 379
c_rt_lib0move(&___nl__11, c_rt_lib0concat_add(___nl__11, ___nl__12));
#line 379
c_rt_lib0clear(&___nl__12);
#line 379
c_rt_lib0delete(generator_c_priv0print_to_header(___ref___0, ___nl__11));
#line 379
c_rt_lib0clear(&___nl__11);
#line 380
c_rt_lib0move(&___nl__12, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(292)));
#line 380
c_rt_lib0move(&___nl__11, generator_c_priv0get_func_ptr_header(___nl__3, ___nl__12));
#line 380
c_rt_lib0clear(&___nl__12);
#line 380
c_rt_lib0move(&___nl__12,___get_global_const(311));
#line 380
c_rt_lib0move(&___nl__11, c_rt_lib0concat_add(___nl__11, ___nl__12));
#line 380
c_rt_lib0clear(&___nl__12);
#line 380
c_rt_lib0move(&___nl__12, string0lf());
#line 380
c_rt_lib0move(&___nl__11, c_rt_lib0concat_add(___nl__11, ___nl__12));
#line 380
c_rt_lib0clear(&___nl__12);
#line 380
c_rt_lib0delete(generator_c_priv0print_to_header(___ref___0, ___nl__11));
#line 380
c_rt_lib0clear(&___nl__11);
#line 381
goto label_7;
#line 381
label_9:
#line 382
c_rt_lib0move(&___nl__11,___get_global_const(311));
#line 382
c_rt_lib0move(&___nl__11, c_rt_lib0concat_new(___nl__8, ___nl__11));
#line 382
c_rt_lib0delete(generator_c_priv0println(___ref___0, ___nl__11));
#line 382
c_rt_lib0clear(&___nl__11);
#line 383
goto label_7;
#line 383
label_7:
#line 383
c_rt_lib0clear(&___nl__9);
#line 383
c_rt_lib0clear(&___nl__10);
#line 383
c_rt_lib0clear(&___nl__8);
#line 384
c_rt_lib0move(&___nl__4, c_rt_lib0add_mod(___nl__4, ___nl__5));
#line 384
goto label_6;
#line 384
label_4:
#line 384
c_rt_lib0clear(&___nl__2);
#line 384
c_rt_lib0clear(&___nl__3);
#line 384
c_rt_lib0clear(&___nl__4);
#line 384
c_rt_lib0clear(&___nl__5);
#line 384
c_rt_lib0clear(&___nl__6);
#line 384
c_rt_lib0clear(&___nl__7);
#line 385
c_rt_lib0move(&___nl__2, string0lf());
#line 385
c_rt_lib0delete(generator_c_priv0println(___ref___0, ___nl__2));
#line 385
c_rt_lib0clear(&___nl__2);
#line 387
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(75)));
#line 387
c_rt_lib0move(&___nl__4,___get_global_const(1));
#line 387
c_rt_lib0move(&___nl__5,___get_global_const(2));
#line 387
c_rt_lib0move(&___nl__6, c_rt_lib0array_len(___nl__2));
#line 387
label_12:
#line 387
c_rt_lib0move(&___nl__7, c_rt_lib0ge(___nl__4, ___nl__6));
#line 387
if(c_rt_lib0check_true_native(___nl__7)){ goto label_10;}
#line 387
c_rt_lib0move(&___nl__3, c_rt_lib0array_get(___nl__2, ___nl__4));
#line 388
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(328)));
#line 388
c_rt_lib0move(&___nl__8, c_rt_lib0priv_is(___nl__8, ___get_global_const(329)));
#line 388
c_rt_lib0move(&___nl__8, c_rt_lib0not(___nl__8));
#line 388
if(c_rt_lib0check_true_native(___nl__8)){ goto label_14;}
#line 389
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(292)));
#line 389
c_rt_lib0move(&___nl__9, generator_c_priv0get_function_name(___nl__3, ___nl__10));
#line 389
c_rt_lib0clear(&___nl__10);
#line 390
c_rt_lib0move(&___nl__11, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(292)));
#line 390
c_rt_lib0move(&___nl__10, generator_c_priv0get_func_ptr_header(___nl__3, ___nl__11));
#line 390
c_rt_lib0clear(&___nl__11);
#line 390
c_rt_lib0move(&___nl__11,___get_global_const(168));
#line 390
c_rt_lib0move(&___nl__10, c_rt_lib0concat_add(___nl__10, ___nl__11));
#line 390
c_rt_lib0clear(&___nl__11);
#line 390
c_rt_lib0delete(generator_c_priv0println(___ref___0, ___nl__10));
#line 390
c_rt_lib0clear(&___nl__10);
#line 391
c_rt_lib0move(&___nl__11, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(331)));
#line 391
c_rt_lib0move(&___nl__10, array0len(___nl__11));
#line 391
c_rt_lib0clear(&___nl__11);
#line 392
c_rt_lib0move(&___nl__12,___get_global_const(346));
#line 392
c_rt_lib0move(&___nl__14,___get_global_const(347));
#line 392
c_rt_lib0move(&___nl__15, generator_c_priv0get_string(___nl__9));
#line 392
c_rt_lib0move(&___nl__13, c_rt_lib0array_mk(3, ___nl__14, ___nl__10, ___nl__15));
#line 392
c_rt_lib0clear(&___nl__14);
#line 392
c_rt_lib0clear(&___nl__15);
#line 392
c_rt_lib0move(&___nl__11, generator_c_priv0get_fun_lib(___nl__12, ___nl__13));
#line 392
c_rt_lib0clear(&___nl__13);
#line 392
c_rt_lib0clear(&___nl__12);
#line 392
c_rt_lib0move(&___nl__12,___get_global_const(311));
#line 392
c_rt_lib0move(&___nl__11, c_rt_lib0concat_add(___nl__11, ___nl__12));
#line 392
c_rt_lib0clear(&___nl__12);
#line 392
c_rt_lib0delete(generator_c_priv0println(___ref___0, ___nl__11));
#line 392
c_rt_lib0clear(&___nl__11);
#line 393
c_rt_lib0move(&___nl__11,___get_global_const(348));
#line 393
c_rt_lib0move(&___nl__11, c_rt_lib0concat_add(___nl__11, ___nl__9));
#line 393
c_rt_lib0move(&___nl__12,___get_global_const(322));
#line 393
c_rt_lib0move(&___nl__11, c_rt_lib0concat_add(___nl__11, ___nl__12));
#line 393
c_rt_lib0clear(&___nl__12);
#line 393
c_rt_lib0delete(generator_c_priv0print(___ref___0, ___nl__11));
#line 393
c_rt_lib0clear(&___nl__11);
#line 394
c_rt_lib0move(&___nl__11,___get_global_const(1));
#line 394
c_rt_lib0move(&___nl__12,___get_global_const(2));
#line 394
label_17:
#line 394
c_rt_lib0move(&___nl__13, c_rt_lib0ge(___nl__11, ___nl__10));
#line 394
if(c_rt_lib0check_true_native(___nl__13)){ goto label_15;}
#line 395
c_rt_lib0move(&___nl__14,___get_global_const(1));
#line 395
c_rt_lib0move(&___nl__14, c_rt_lib0gt(___nl__11, ___nl__14));
#line 395
c_rt_lib0move(&___nl__14, c_rt_lib0not(___nl__14));
#line 395
if(c_rt_lib0check_true_native(___nl__14)){ goto label_19;}
#line 395
c_rt_lib0move(&___nl__15,___get_global_const(188));
#line 395
c_rt_lib0delete(generator_c_priv0print(___ref___0, ___nl__15));
#line 395
c_rt_lib0clear(&___nl__15);
#line 395
goto label_19;
#line 395
label_19:
#line 395
c_rt_lib0clear(&___nl__14);
#line 396
c_rt_lib0move(&___nl__14, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(331)));
#line 396
c_rt_lib0move(&___nl__14, c_rt_lib0array_get(___nl__14, ___nl__11));
#line 396
c_rt_lib0move(&___nl__15, c_rt_lib0priv_is(___nl__14, ___get_global_const(234)));
#line 396
if(c_rt_lib0check_true_native(___nl__15)){ goto label_21;}
#line 398
c_rt_lib0move(&___nl__15, c_rt_lib0priv_is(___nl__14, ___get_global_const(5)));
#line 398
if(c_rt_lib0check_true_native(___nl__15)){ goto label_22;}
#line 398
c_rt_lib0move(&___nl__15,___get_global_const(74));
#line 398
c_rt_lib0move(&___nl__15, c_rt_lib0array_mk(2, ___nl__15, ___nl__14));
#line 398
nl_die_arg(___nl__15);
#line 396
label_21:
#line 397
c_rt_lib0move(&___nl__16,___get_global_const(349));
#line 397
c_rt_lib0move(&___nl__16, c_rt_lib0concat_add(___nl__16, ___nl__11));
#line 397
c_rt_lib0move(&___nl__17,___get_global_const(175));
#line 397
c_rt_lib0move(&___nl__16, c_rt_lib0concat_add(___nl__16, ___nl__17));
#line 397
c_rt_lib0clear(&___nl__17);
#line 397
c_rt_lib0delete(generator_c_priv0print(___ref___0, ___nl__16));
#line 397
c_rt_lib0clear(&___nl__16);
#line 398
goto label_20;
#line 398
label_22:
#line 399
c_rt_lib0move(&___nl__16,___get_global_const(350));
#line 399
c_rt_lib0move(&___nl__16, c_rt_lib0concat_add(___nl__16, ___nl__11));
#line 399
c_rt_lib0move(&___nl__17,___get_global_const(175));
#line 399
c_rt_lib0move(&___nl__16, c_rt_lib0concat_add(___nl__16, ___nl__17));
#line 399
c_rt_lib0clear(&___nl__17);
#line 399
c_rt_lib0delete(generator_c_priv0print(___ref___0, ___nl__16));
#line 399
c_rt_lib0clear(&___nl__16);
#line 400
goto label_20;
#line 400
label_20:
#line 400
c_rt_lib0clear(&___nl__14);
#line 400
c_rt_lib0clear(&___nl__15);
#line 401
c_rt_lib0move(&___nl__11, c_rt_lib0add_mod(___nl__11, ___nl__12));
#line 401
goto label_17;
#line 401
label_15:
#line 401
c_rt_lib0clear(&___nl__11);
#line 401
c_rt_lib0clear(&___nl__12);
#line 401
c_rt_lib0clear(&___nl__13);
#line 402
c_rt_lib0move(&___nl__11,___get_global_const(351));
#line 402
c_rt_lib0delete(generator_c_priv0println(___ref___0, ___nl__11));
#line 402
c_rt_lib0clear(&___nl__11);
#line 402
c_rt_lib0clear(&___nl__9);
#line 402
c_rt_lib0clear(&___nl__10);
#line 403
goto label_14;
#line 403
label_14:
#line 403
c_rt_lib0clear(&___nl__8);
#line 404
c_rt_lib0move(&___nl__8, generator_c_priv0is_singleton_use_function(___nl__3));
#line 404
c_rt_lib0move(&___nl__8, c_rt_lib0not(___nl__8));
#line 404
if(c_rt_lib0check_true_native(___nl__8)){ goto label_24;}
#line 405
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(292)));
#line 405
c_rt_lib0move(&___nl__9, generator_c_priv0get_function_name(___nl__3, ___nl__10));
#line 405
c_rt_lib0clear(&___nl__10);
#line 406
c_rt_lib0move(&___nl__10, generator_c_priv0arg_t());
#line 406
c_rt_lib0move(&___nl__10, c_rt_lib0concat_add(___nl__10, ___nl__9));
#line 406
c_rt_lib0move(&___nl__11,___get_global_const(352));
#line 406
c_rt_lib0move(&___nl__10, c_rt_lib0concat_add(___nl__10, ___nl__11));
#line 406
c_rt_lib0clear(&___nl__11);
#line 406
c_rt_lib0delete(generator_c_priv0println(___ref___0, ___nl__10));
#line 406
c_rt_lib0clear(&___nl__10);
#line 407
c_rt_lib0move(&___nl__11,___get_global_const(0));
#line 407
c_rt_lib0move(&___nl__12,___get_global_const(342));
#line 407
c_rt_lib0move(&___nl__13, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(292)));
#line 407
c_rt_lib0move(&___nl__10, generator_c_priv0get_fun_name(___nl__11, ___nl__12, ___nl__13));
#line 407
c_rt_lib0clear(&___nl__13);
#line 407
c_rt_lib0clear(&___nl__12);
#line 407
c_rt_lib0clear(&___nl__11);
#line 407
c_rt_lib0move(&___nl__11,___get_global_const(343));
#line 407
c_rt_lib0move(&___nl__10, c_rt_lib0concat_add(___nl__10, ___nl__11));
#line 407
c_rt_lib0clear(&___nl__11);
#line 407
c_rt_lib0delete(generator_c_priv0println(___ref___0, ___nl__10));
#line 407
c_rt_lib0clear(&___nl__10);
#line 408
c_rt_lib0move(&___nl__10,___get_global_const(348));
#line 408
c_rt_lib0move(&___nl__11, generator_c_priv0get_const_singleton(___ref___0, ___nl__9));
#line 408
c_rt_lib0move(&___nl__10, c_rt_lib0concat_add(___nl__10, ___nl__11));
#line 408
c_rt_lib0clear(&___nl__11);
#line 408
c_rt_lib0move(&___nl__11,___get_global_const(353));
#line 408
c_rt_lib0move(&___nl__10, c_rt_lib0concat_add(___nl__10, ___nl__11));
#line 408
c_rt_lib0clear(&___nl__11);
#line 408
c_rt_lib0delete(generator_c_priv0println(___ref___0, ___nl__10));
#line 408
c_rt_lib0clear(&___nl__10);
#line 409
c_rt_lib0move(&___nl__10, generator_c_priv0arg_t());
#line 409
c_rt_lib0move(&___nl__10, c_rt_lib0concat_add(___nl__10, ___nl__9));
#line 409
c_rt_lib0move(&___nl__11,___get_global_const(354));
#line 409
c_rt_lib0move(&___nl__10, c_rt_lib0concat_add(___nl__10, ___nl__11));
#line 409
c_rt_lib0clear(&___nl__11);
#line 409
c_rt_lib0delete(generator_c_priv0print(___ref___0, ___nl__10));
#line 409
c_rt_lib0clear(&___nl__10);
#line 409
c_rt_lib0clear(&___nl__9);
#line 410
goto label_23;
#line 410
label_24:
#line 411
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(292)));
#line 411
c_rt_lib0move(&___nl__9, generator_c_priv0get_function_header(___nl__3, ___nl__10));
#line 411
c_rt_lib0clear(&___nl__10);
#line 411
c_rt_lib0delete(generator_c_priv0print(___ref___0, ___nl__9));
#line 411
c_rt_lib0clear(&___nl__9);
#line 412
goto label_23;
#line 412
label_23:
#line 412
c_rt_lib0clear(&___nl__8);
#line 413
c_rt_lib0delete(generator_c_priv0print_function_block(___ref___0, ___nl__3));
#line 414
c_rt_lib0move(&___nl__4, c_rt_lib0add_mod(___nl__4, ___nl__5));
#line 414
goto label_12;
#line 414
label_10:
#line 414
c_rt_lib0clear(&___nl__2);
#line 414
c_rt_lib0clear(&___nl__3);
#line 414
c_rt_lib0clear(&___nl__4);
#line 414
c_rt_lib0clear(&___nl__5);
#line 414
c_rt_lib0clear(&___nl__6);
#line 414
c_rt_lib0clear(&___nl__7);
#line 415
c_rt_lib0delete(generator_c_priv0print_init_const(___ref___0));
#line 415
c_rt_lib0clear(&___nl__1);
#line 415
return NULL;
}

ImmT generator_c_priv0print_init_const(ImmT * ___ref___0) {
generator_c_priv0__const__init();
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
#line 418
c_rt_lib0move(&___nl__1, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(294)));
#line 418
c_rt_lib0move(&___nl__1, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(287)));
#line 418
c_rt_lib0move(&___nl__1, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(277)));
#line 419
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(294)));
#line 419
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(288)));
#line 419
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(277)));
#line 420
c_rt_lib0move(&___nl__3, array0len(___nl__1));
#line 421
c_rt_lib0move(&___nl__4, array0len(___nl__2));
#line 422
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(294)));
#line 422
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(289)));
#line 423
c_rt_lib0move(&___nl__6, c_rt_lib0add(___nl__3, ___nl__4));
#line 423
c_rt_lib0move(&___nl__6, c_rt_lib0add_mod(___nl__6, ___nl__5));
#line 424
c_rt_lib0move(&___nl__7,___get_global_const(306));
#line 424
c_rt_lib0move(&___nl__8, generator_c_priv0arg_t());
#line 424
c_rt_lib0move(&___nl__7, c_rt_lib0concat_add(___nl__7, ___nl__8));
#line 424
c_rt_lib0clear(&___nl__8);
#line 424
c_rt_lib0move(&___nl__8,___get_global_const(355));
#line 424
c_rt_lib0move(&___nl__7, c_rt_lib0concat_add(___nl__7, ___nl__8));
#line 424
c_rt_lib0clear(&___nl__8);
#line 424
c_rt_lib0move(&___nl__8,___get_global_const(2));
#line 424
c_rt_lib0move(&___nl__8, c_rt_lib0add_mod(___nl__8, ___nl__6));
#line 424
c_rt_lib0move(&___nl__7, c_rt_lib0concat_add(___nl__7, ___nl__8));
#line 424
c_rt_lib0clear(&___nl__8);
#line 424
c_rt_lib0move(&___nl__8,___get_global_const(356));
#line 424
c_rt_lib0move(&___nl__7, c_rt_lib0concat_add(___nl__7, ___nl__8));
#line 424
c_rt_lib0clear(&___nl__8);
#line 424
c_rt_lib0delete(generator_c_priv0println(___ref___0, ___nl__7));
#line 424
c_rt_lib0clear(&___nl__7);
#line 427
c_rt_lib0move(&___nl__7,___get_global_const(341));
#line 427
c_rt_lib0move(&___nl__9,___get_global_const(0));
#line 427
c_rt_lib0move(&___nl__10,___get_global_const(342));
#line 427
c_rt_lib0move(&___nl__11, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(292)));
#line 427
c_rt_lib0move(&___nl__8, generator_c_priv0get_fun_name(___nl__9, ___nl__10, ___nl__11));
#line 427
c_rt_lib0clear(&___nl__11);
#line 427
c_rt_lib0clear(&___nl__10);
#line 427
c_rt_lib0clear(&___nl__9);
#line 427
c_rt_lib0move(&___nl__7, c_rt_lib0concat_add(___nl__7, ___nl__8));
#line 427
c_rt_lib0clear(&___nl__8);
#line 427
c_rt_lib0move(&___nl__8,___get_global_const(357));
#line 427
c_rt_lib0move(&___nl__7, c_rt_lib0concat_add(___nl__7, ___nl__8));
#line 427
c_rt_lib0clear(&___nl__8);
#line 427
c_rt_lib0move(&___nl__8, c_rt_lib0add(___nl__3, ___nl__4));
#line 427
c_rt_lib0move(&___nl__7, c_rt_lib0concat_add(___nl__7, ___nl__8));
#line 427
c_rt_lib0clear(&___nl__8);
#line 427
c_rt_lib0move(&___nl__8,___get_global_const(358));
#line 427
c_rt_lib0move(&___nl__7, c_rt_lib0concat_add(___nl__7, ___nl__8));
#line 427
c_rt_lib0clear(&___nl__8);
#line 427
c_rt_lib0delete(generator_c_priv0println(___ref___0, ___nl__7));
#line 427
c_rt_lib0clear(&___nl__7);
#line 432
c_rt_lib0move(&___nl__7,___get_global_const(1));
#line 432
c_rt_lib0move(&___nl__8,___get_global_const(2));
#line 432
label_3:
#line 432
c_rt_lib0move(&___nl__9, c_rt_lib0ge(___nl__7, ___nl__3));
#line 432
if(c_rt_lib0check_true_native(___nl__9)){ goto label_1;}
#line 433
c_rt_lib0move(&___nl__10,___get_global_const(355));
#line 433
c_rt_lib0move(&___nl__10, c_rt_lib0concat_add(___nl__10, ___nl__7));
#line 433
c_rt_lib0move(&___nl__11,___get_global_const(359));
#line 433
c_rt_lib0move(&___nl__10, c_rt_lib0concat_add(___nl__10, ___nl__11));
#line 433
c_rt_lib0clear(&___nl__11);
#line 433
c_rt_lib0move(&___nl__12, c_rt_lib0array_get(___nl__1, ___nl__7));
#line 433
c_rt_lib0move(&___nl__11, generator_c_priv0create_sim(___nl__12));
#line 433
c_rt_lib0clear(&___nl__12);
#line 433
c_rt_lib0move(&___nl__10, c_rt_lib0concat_add(___nl__10, ___nl__11));
#line 433
c_rt_lib0clear(&___nl__11);
#line 433
c_rt_lib0move(&___nl__11,___get_global_const(311));
#line 433
c_rt_lib0move(&___nl__10, c_rt_lib0concat_add(___nl__10, ___nl__11));
#line 433
c_rt_lib0clear(&___nl__11);
#line 433
c_rt_lib0delete(generator_c_priv0println(___ref___0, ___nl__10));
#line 433
c_rt_lib0clear(&___nl__10);
#line 434
c_rt_lib0move(&___nl__7, c_rt_lib0add_mod(___nl__7, ___nl__8));
#line 434
goto label_3;
#line 434
label_1:
#line 434
c_rt_lib0clear(&___nl__7);
#line 434
c_rt_lib0clear(&___nl__8);
#line 434
c_rt_lib0clear(&___nl__9);
#line 435
c_rt_lib0move(&___nl__7,___get_global_const(360));
#line 435
c_rt_lib0move(&___nl__7, c_rt_lib0concat_add(___nl__7, ___nl__3));
#line 435
c_rt_lib0move(&___nl__8,___get_global_const(361));
#line 435
c_rt_lib0move(&___nl__7, c_rt_lib0concat_add(___nl__7, ___nl__8));
#line 435
c_rt_lib0clear(&___nl__8);
#line 435
c_rt_lib0move(&___nl__7, c_rt_lib0concat_add(___nl__7, ___nl__6));
#line 435
c_rt_lib0move(&___nl__8,___get_global_const(362));
#line 435
c_rt_lib0move(&___nl__7, c_rt_lib0concat_add(___nl__7, ___nl__8));
#line 435
c_rt_lib0clear(&___nl__8);
#line 435
c_rt_lib0move(&___nl__9,___get_global_const(363));
#line 435
c_rt_lib0move(&___nl__8, generator_c_priv0get_lib_fun(___nl__9));
#line 435
c_rt_lib0clear(&___nl__9);
#line 435
c_rt_lib0move(&___nl__7, c_rt_lib0concat_add(___nl__7, ___nl__8));
#line 435
c_rt_lib0clear(&___nl__8);
#line 435
c_rt_lib0move(&___nl__8,___get_global_const(364));
#line 435
c_rt_lib0move(&___nl__7, c_rt_lib0concat_add(___nl__7, ___nl__8));
#line 435
c_rt_lib0clear(&___nl__8);
#line 435
c_rt_lib0move(&___nl__7, c_rt_lib0concat_add(___nl__7, ___nl__6));
#line 435
c_rt_lib0move(&___nl__8,___get_global_const(365));
#line 435
c_rt_lib0move(&___nl__7, c_rt_lib0concat_add(___nl__7, ___nl__8));
#line 435
c_rt_lib0clear(&___nl__8);
#line 435
c_rt_lib0delete(generator_c_priv0println(___ref___0, ___nl__7));
#line 435
c_rt_lib0clear(&___nl__7);
#line 439
c_rt_lib0move(&___nl__7, generator_c_priv0arg_t());
#line 439
c_rt_lib0move(&___nl__9,___get_global_const(0));
#line 439
c_rt_lib0move(&___nl__10,___get_global_const(344));
#line 439
c_rt_lib0move(&___nl__11, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(292)));
#line 439
c_rt_lib0move(&___nl__8, generator_c_priv0get_fun_name(___nl__9, ___nl__10, ___nl__11));
#line 439
c_rt_lib0clear(&___nl__11);
#line 439
c_rt_lib0clear(&___nl__10);
#line 439
c_rt_lib0clear(&___nl__9);
#line 439
c_rt_lib0move(&___nl__7, c_rt_lib0concat_add(___nl__7, ___nl__8));
#line 439
c_rt_lib0clear(&___nl__8);
#line 439
c_rt_lib0move(&___nl__8,___get_global_const(366));
#line 439
c_rt_lib0move(&___nl__7, c_rt_lib0concat_add(___nl__7, ___nl__8));
#line 439
c_rt_lib0clear(&___nl__8);
#line 439
c_rt_lib0move(&___nl__8, generator_c_priv0arg_t());
#line 439
c_rt_lib0move(&___nl__7, c_rt_lib0concat_add(___nl__7, ___nl__8));
#line 439
c_rt_lib0clear(&___nl__8);
#line 439
c_rt_lib0move(&___nl__8,___get_global_const(319));
#line 439
c_rt_lib0move(&___nl__7, c_rt_lib0concat_add(___nl__7, ___nl__8));
#line 439
c_rt_lib0clear(&___nl__8);
#line 439
c_rt_lib0move(&___nl__9,___get_global_const(320));
#line 439
c_rt_lib0move(&___nl__11,___get_global_const(321));
#line 439
c_rt_lib0move(&___nl__12,___get_global_const(367));
#line 439
c_rt_lib0move(&___nl__10, c_rt_lib0array_mk(2, ___nl__11, ___nl__12));
#line 439
c_rt_lib0clear(&___nl__11);
#line 439
c_rt_lib0clear(&___nl__12);
#line 439
c_rt_lib0move(&___nl__8, generator_c_priv0get_fun_lib(___nl__9, ___nl__10));
#line 439
c_rt_lib0clear(&___nl__10);
#line 439
c_rt_lib0clear(&___nl__9);
#line 439
c_rt_lib0move(&___nl__7, c_rt_lib0concat_add(___nl__7, ___nl__8));
#line 439
c_rt_lib0clear(&___nl__8);
#line 439
c_rt_lib0move(&___nl__8,___get_global_const(324));
#line 439
c_rt_lib0move(&___nl__7, c_rt_lib0concat_add(___nl__7, ___nl__8));
#line 439
c_rt_lib0clear(&___nl__8);
#line 439
c_rt_lib0delete(generator_c_priv0println(___ref___0, ___nl__7));
#line 439
c_rt_lib0clear(&___nl__7);
#line 444
c_rt_lib0move(&___nl__7, generator_c_priv0arg_t());
#line 444
c_rt_lib0move(&___nl__9,___get_global_const(0));
#line 444
c_rt_lib0move(&___nl__10,___get_global_const(334));
#line 444
c_rt_lib0move(&___nl__11, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(292)));
#line 444
c_rt_lib0move(&___nl__8, generator_c_priv0get_fun_name(___nl__9, ___nl__10, ___nl__11));
#line 444
c_rt_lib0clear(&___nl__11);
#line 444
c_rt_lib0clear(&___nl__10);
#line 444
c_rt_lib0clear(&___nl__9);
#line 444
c_rt_lib0move(&___nl__7, c_rt_lib0concat_add(___nl__7, ___nl__8));
#line 444
c_rt_lib0clear(&___nl__8);
#line 444
c_rt_lib0move(&___nl__8,___get_global_const(368));
#line 444
c_rt_lib0move(&___nl__7, c_rt_lib0concat_add(___nl__7, ___nl__8));
#line 444
c_rt_lib0clear(&___nl__8);
#line 444
c_rt_lib0move(&___nl__7, c_rt_lib0concat_add(___nl__7, ___nl__3));
#line 444
c_rt_lib0move(&___nl__8,___get_global_const(369));
#line 444
c_rt_lib0move(&___nl__7, c_rt_lib0concat_add(___nl__7, ___nl__8));
#line 444
c_rt_lib0clear(&___nl__8);
#line 444
c_rt_lib0delete(generator_c_priv0println(___ref___0, ___nl__7));
#line 444
c_rt_lib0clear(&___nl__7);
#line 447
c_rt_lib0move(&___nl__7, array0len(___nl__2));
#line 447
c_rt_lib0move(&___nl__8,___get_global_const(1));
#line 447
c_rt_lib0move(&___nl__9,___get_global_const(2));
#line 447
label_6:
#line 447
c_rt_lib0move(&___nl__10, c_rt_lib0ge(___nl__8, ___nl__7));
#line 447
if(c_rt_lib0check_true_native(___nl__10)){ goto label_4;}
#line 448
c_rt_lib0move(&___nl__11,___get_global_const(370));
#line 448
c_rt_lib0move(&___nl__11, c_rt_lib0concat_add(___nl__11, ___nl__8));
#line 448
c_rt_lib0move(&___nl__12,___get_global_const(371));
#line 448
c_rt_lib0move(&___nl__11, c_rt_lib0concat_add(___nl__11, ___nl__12));
#line 448
c_rt_lib0clear(&___nl__12);
#line 448
c_rt_lib0delete(generator_c_priv0println(___ref___0, ___nl__11));
#line 448
c_rt_lib0clear(&___nl__11);
#line 449
c_rt_lib0move(&___nl__11,___get_global_const(372));
#line 449
c_rt_lib0move(&___nl__12, c_rt_lib0add(___nl__8, ___nl__3));
#line 449
c_rt_lib0move(&___nl__11, c_rt_lib0concat_add(___nl__11, ___nl__12));
#line 449
c_rt_lib0clear(&___nl__12);
#line 449
c_rt_lib0move(&___nl__12,___get_global_const(359));
#line 449
c_rt_lib0move(&___nl__11, c_rt_lib0concat_add(___nl__11, ___nl__12));
#line 449
c_rt_lib0clear(&___nl__12);
#line 449
c_rt_lib0move(&___nl__12, c_rt_lib0array_get(___nl__2, ___nl__8));
#line 449
c_rt_lib0move(&___nl__11, c_rt_lib0concat_add(___nl__11, ___nl__12));
#line 449
c_rt_lib0clear(&___nl__12);
#line 449
c_rt_lib0move(&___nl__12,___get_global_const(373));
#line 449
c_rt_lib0move(&___nl__11, c_rt_lib0concat_add(___nl__11, ___nl__12));
#line 449
c_rt_lib0clear(&___nl__12);
#line 449
c_rt_lib0delete(generator_c_priv0println(___ref___0, ___nl__11));
#line 449
c_rt_lib0clear(&___nl__11);
#line 450
c_rt_lib0move(&___nl__11,___get_global_const(374));
#line 450
c_rt_lib0delete(generator_c_priv0println(___ref___0, ___nl__11));
#line 450
c_rt_lib0clear(&___nl__11);
#line 451
c_rt_lib0move(&___nl__8, c_rt_lib0add_mod(___nl__8, ___nl__9));
#line 451
goto label_6;
#line 451
label_4:
#line 451
c_rt_lib0clear(&___nl__7);
#line 451
c_rt_lib0clear(&___nl__8);
#line 451
c_rt_lib0clear(&___nl__9);
#line 451
c_rt_lib0clear(&___nl__10);
#line 452
c_rt_lib0move(&___nl__7,___get_global_const(375));
#line 452
c_rt_lib0move(&___nl__8, generator_c_priv0arg_t());
#line 452
c_rt_lib0move(&___nl__7, c_rt_lib0concat_add(___nl__7, ___nl__8));
#line 452
c_rt_lib0clear(&___nl__8);
#line 452
c_rt_lib0move(&___nl__8,___get_global_const(319));
#line 452
c_rt_lib0move(&___nl__7, c_rt_lib0concat_add(___nl__7, ___nl__8));
#line 452
c_rt_lib0clear(&___nl__8);
#line 452
c_rt_lib0move(&___nl__9,___get_global_const(320));
#line 452
c_rt_lib0move(&___nl__11,___get_global_const(321));
#line 452
c_rt_lib0move(&___nl__12,___get_global_const(376));
#line 452
c_rt_lib0move(&___nl__12, c_rt_lib0concat_add(___nl__12, ___nl__3));
#line 452
c_rt_lib0move(&___nl__13,___get_global_const(175));
#line 452
c_rt_lib0move(&___nl__12, c_rt_lib0concat_add(___nl__12, ___nl__13));
#line 452
c_rt_lib0clear(&___nl__13);
#line 452
c_rt_lib0move(&___nl__10, c_rt_lib0array_mk(2, ___nl__11, ___nl__12));
#line 452
c_rt_lib0clear(&___nl__11);
#line 452
c_rt_lib0clear(&___nl__12);
#line 452
c_rt_lib0move(&___nl__8, generator_c_priv0get_fun_lib(___nl__9, ___nl__10));
#line 452
c_rt_lib0clear(&___nl__10);
#line 452
c_rt_lib0clear(&___nl__9);
#line 452
c_rt_lib0move(&___nl__7, c_rt_lib0concat_add(___nl__7, ___nl__8));
#line 452
c_rt_lib0clear(&___nl__8);
#line 452
c_rt_lib0move(&___nl__8,___get_global_const(324));
#line 452
c_rt_lib0move(&___nl__7, c_rt_lib0concat_add(___nl__7, ___nl__8));
#line 452
c_rt_lib0clear(&___nl__8);
#line 452
c_rt_lib0delete(generator_c_priv0println(___ref___0, ___nl__7));
#line 452
c_rt_lib0clear(&___nl__7);
#line 452
c_rt_lib0clear(&___nl__1);
#line 452
c_rt_lib0clear(&___nl__2);
#line 452
c_rt_lib0clear(&___nl__3);
#line 452
c_rt_lib0clear(&___nl__4);
#line 452
c_rt_lib0clear(&___nl__5);
#line 452
c_rt_lib0clear(&___nl__6);
#line 452
return NULL;
}

ImmT generator_c_priv0print_function_block(ImmT * ___ref___0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__1);
generator_c_priv0__const__init();
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
ImmT ___nl__22 = NULL;
ImmT ___nl__23 = NULL;
ImmT ___nl__24 = NULL;
#line 461
c_rt_lib0move(&___nl__2,___get_global_const(377));
#line 461
c_rt_lib0delete(generator_c_priv0println(___ref___0, ___nl__2));
#line 461
c_rt_lib0clear(&___nl__2);
#line 462
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(331)));
#line 462
c_rt_lib0copy(&___nl__3, ___nl__2);
#line 462
c_rt_lib0hash_set_value_dec(___ref___0, ___get_global_const(293), ___nl__3);
#line 462
c_rt_lib0clear(&___nl__2);
#line 462
c_rt_lib0clear(&___nl__3);
#line 463
c_rt_lib0delete(generator_c_priv0move_args_to_register(___ref___0));
#line 464
c_rt_lib0move(&___nl__3,___get_global_const(0));
#line 464
c_rt_lib0move(&___nl__4,___get_global_const(342));
#line 464
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(292)));
#line 464
c_rt_lib0move(&___nl__2, generator_c_priv0get_fun_name(___nl__3, ___nl__4, ___nl__5));
#line 464
c_rt_lib0clear(&___nl__5);
#line 464
c_rt_lib0clear(&___nl__4);
#line 464
c_rt_lib0clear(&___nl__3);
#line 464
c_rt_lib0move(&___nl__3,___get_global_const(343));
#line 464
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__3));
#line 464
c_rt_lib0clear(&___nl__3);
#line 464
c_rt_lib0delete(generator_c_priv0println(___ref___0, ___nl__2));
#line 464
c_rt_lib0clear(&___nl__2);
#line 465
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(331)));
#line 465
c_rt_lib0move(&___nl__2, array0len(___nl__3));
#line 465
c_rt_lib0clear(&___nl__3);
#line 465
label_2:
#line 465
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(378)));
#line 465
c_rt_lib0move(&___nl__3, c_rt_lib0lt(___nl__2, ___nl__3));
#line 465
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 465
if(c_rt_lib0check_true_native(___nl__3)){ goto label_1;}
#line 466
c_rt_lib0move(&___nl__4, generator_c_priv0arg_t());
#line 466
c_rt_lib0move(&___nl__5, generator_c_priv0get_reg(___ref___0, ___nl__2));
#line 466
c_rt_lib0move(&___nl__4, c_rt_lib0concat_add(___nl__4, ___nl__5));
#line 466
c_rt_lib0clear(&___nl__5);
#line 466
c_rt_lib0move(&___nl__5,___get_global_const(379));
#line 466
c_rt_lib0move(&___nl__4, c_rt_lib0concat_add(___nl__4, ___nl__5));
#line 466
c_rt_lib0clear(&___nl__5);
#line 466
c_rt_lib0delete(generator_c_priv0println(___ref___0, ___nl__4));
#line 466
c_rt_lib0clear(&___nl__4);
#line 466
c_rt_lib0move(&___nl__4,___get_global_const(2));
#line 466
c_rt_lib0move(&___nl__2, c_rt_lib0add_mod(___nl__2, ___nl__4));
#line 466
c_rt_lib0clear(&___nl__4);
#line 467
goto label_2;
#line 467
label_1:
#line 467
c_rt_lib0clear(&___nl__2);
#line 467
c_rt_lib0clear(&___nl__3);
#line 468
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(380)));
#line 468
c_rt_lib0move(&___nl__4,___get_global_const(1));
#line 468
c_rt_lib0move(&___nl__5,___get_global_const(2));
#line 468
c_rt_lib0move(&___nl__6, c_rt_lib0array_len(___nl__2));
#line 468
label_6:
#line 468
c_rt_lib0move(&___nl__7, c_rt_lib0ge(___nl__4, ___nl__6));
#line 468
if(c_rt_lib0check_true_native(___nl__7)){ goto label_4;}
#line 468
c_rt_lib0move(&___nl__3, c_rt_lib0array_get(___nl__2, ___nl__4));
#line 469
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(212)));
#line 469
c_rt_lib0move(&___nl__9, c_rt_lib0priv_is(___nl__8, ___get_global_const(37)));
#line 469
if(c_rt_lib0check_true_native(___nl__9)){ goto label_8;}
#line 471
c_rt_lib0move(&___nl__9, c_rt_lib0priv_is(___nl__8, ___get_global_const(294)));
#line 471
if(c_rt_lib0check_true_native(___nl__9)){ goto label_9;}
#line 471
c_rt_lib0move(&___nl__9,___get_global_const(74));
#line 471
c_rt_lib0move(&___nl__9, c_rt_lib0array_mk(2, ___nl__9, ___nl__8));
#line 471
nl_die_arg(___nl__9);
#line 469
label_8:
#line 470
c_rt_lib0delete(generator_c_priv0print_cmd(___ref___0, ___nl__3));
#line 471
goto label_7;
#line 471
label_9:
#line 471
c_rt_lib0move(&___nl__10, c_rt_lib0priv_as(___nl__8, ___get_global_const(294)));
#line 472
c_rt_lib0move(&___nl__11, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(209)));
#line 472
c_rt_lib0move(&___nl__11, c_rt_lib0priv_is(___nl__11, ___get_global_const(223)));
#line 472
c_rt_lib0move(&___nl__11, c_rt_lib0not(___nl__11));
#line 472
if(c_rt_lib0check_true_native(___nl__11)){ goto label_11;}
#line 473
c_rt_lib0move(&___nl__12, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(209)));
#line 473
c_rt_lib0move(&___nl__12, c_rt_lib0priv_as(___nl__12, ___get_global_const(223)));
#line 473
c_rt_lib0move(&___nl__12, c_rt_lib0hash_get_value_dec(___nl__12, ___get_global_const(234)));
#line 474
c_rt_lib0move(&___nl__13, nl0is_sim(___nl__12));
#line 474
c_rt_lib0move(&___nl__13, c_rt_lib0not(___nl__13));
#line 474
if(c_rt_lib0check_true_native(___nl__13)){ goto label_13;}
#line 475
c_rt_lib0delete(generator_c_priv0print_cmd(___ref___0, ___nl__3));
#line 476
c_rt_lib0clear(&___nl__8);
#line 476
c_rt_lib0clear(&___nl__9);
#line 476
c_rt_lib0clear(&___nl__10);
#line 476
c_rt_lib0clear(&___nl__11);
#line 476
c_rt_lib0clear(&___nl__12);
#line 476
c_rt_lib0clear(&___nl__13);
#line 476
goto label_5;
#line 477
goto label_13;
#line 477
label_13:
#line 477
c_rt_lib0clear(&___nl__13);
#line 477
c_rt_lib0clear(&___nl__12);
#line 478
goto label_11;
#line 478
label_11:
#line 478
c_rt_lib0clear(&___nl__11);
#line 479
c_rt_lib0move(&___nl__11, array0len(___nl__10));
#line 480
c_rt_lib0move(&___nl__12,___get_global_const(1));
#line 480
c_rt_lib0move(&___nl__12, c_rt_lib0num_eq(___nl__11, ___nl__12));
#line 480
c_rt_lib0move(&___nl__12, c_rt_lib0not(___nl__12));
#line 480
if(c_rt_lib0check_true_native(___nl__12)){ goto label_15;}
#line 481
c_rt_lib0delete(generator_c_priv0print_cmd(___ref___0, ___nl__3));
#line 482
c_rt_lib0clear(&___nl__8);
#line 482
c_rt_lib0clear(&___nl__9);
#line 482
c_rt_lib0clear(&___nl__10);
#line 482
c_rt_lib0clear(&___nl__11);
#line 482
c_rt_lib0clear(&___nl__12);
#line 482
goto label_5;
#line 483
goto label_14;
#line 483
label_15:
#line 484
c_rt_lib0move(&___nl__13, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(294)));
#line 484
c_rt_lib0move(&___nl__13, c_rt_lib0hash_get_value_dec(___nl__13, ___get_global_const(289)));
#line 485
c_rt_lib0move(&___nl__14,___get_global_const(381));
#line 485
c_rt_lib0move(&___nl__14, c_rt_lib0concat_add(___nl__14, ___nl__13));
#line 485
c_rt_lib0move(&___nl__15,___get_global_const(382));
#line 485
c_rt_lib0move(&___nl__14, c_rt_lib0concat_add(___nl__14, ___nl__15));
#line 485
c_rt_lib0clear(&___nl__15);
#line 485
c_rt_lib0delete(generator_c_priv0println(___ref___0, ___nl__14));
#line 485
c_rt_lib0clear(&___nl__14);
#line 486
c_rt_lib0delete(generator_c_priv0print_cmd(___ref___0, ___nl__3));
#line 487
c_rt_lib0move(&___nl__15,___get_global_const(1));
#line 487
c_rt_lib0move(&___nl__16,___get_global_const(2));
#line 487
c_rt_lib0move(&___nl__17, c_rt_lib0array_len(___nl__10));
#line 487
label_18:
#line 487
c_rt_lib0move(&___nl__18, c_rt_lib0ge(___nl__15, ___nl__17));
#line 487
if(c_rt_lib0check_true_native(___nl__18)){ goto label_16;}
#line 487
c_rt_lib0move(&___nl__14, c_rt_lib0array_get(___nl__10, ___nl__15));
#line 488
c_rt_lib0move(&___nl__20,___get_global_const(320));
#line 488
c_rt_lib0move(&___nl__22,___get_global_const(383));
#line 488
c_rt_lib0move(&___nl__22, c_rt_lib0concat_add(___nl__22, ___nl__13));
#line 488
c_rt_lib0move(&___nl__23,___get_global_const(175));
#line 488
c_rt_lib0move(&___nl__22, c_rt_lib0concat_add(___nl__22, ___nl__23));
#line 488
c_rt_lib0clear(&___nl__23);
#line 488
c_rt_lib0move(&___nl__23, generator_c_priv0get_reg(___ref___0, ___nl__14));
#line 488
c_rt_lib0move(&___nl__21, c_rt_lib0array_mk(2, ___nl__22, ___nl__23));
#line 488
c_rt_lib0clear(&___nl__22);
#line 488
c_rt_lib0clear(&___nl__23);
#line 488
c_rt_lib0move(&___nl__19, generator_c_priv0get_fun_lib(___nl__20, ___nl__21));
#line 488
c_rt_lib0clear(&___nl__21);
#line 488
c_rt_lib0clear(&___nl__20);
#line 488
c_rt_lib0move(&___nl__20,___get_global_const(311));
#line 488
c_rt_lib0move(&___nl__19, c_rt_lib0concat_add(___nl__19, ___nl__20));
#line 488
c_rt_lib0clear(&___nl__20);
#line 488
c_rt_lib0delete(generator_c_priv0println(___ref___0, ___nl__19));
#line 488
c_rt_lib0clear(&___nl__19);
#line 489
c_rt_lib0move(&___nl__19,___get_global_const(2));
#line 489
c_rt_lib0move(&___nl__13, c_rt_lib0add_mod(___nl__13, ___nl__19));
#line 489
c_rt_lib0clear(&___nl__19);
#line 490
c_rt_lib0move(&___nl__15, c_rt_lib0add_mod(___nl__15, ___nl__16));
#line 490
goto label_18;
#line 490
label_16:
#line 490
c_rt_lib0clear(&___nl__14);
#line 490
c_rt_lib0clear(&___nl__15);
#line 490
c_rt_lib0clear(&___nl__16);
#line 490
c_rt_lib0clear(&___nl__17);
#line 490
c_rt_lib0clear(&___nl__18);
#line 491
c_rt_lib0move(&___nl__14,___get_global_const(169));
#line 491
c_rt_lib0delete(generator_c_priv0println(___ref___0, ___nl__14));
#line 491
c_rt_lib0clear(&___nl__14);
#line 492
c_rt_lib0move(&___nl__13, c_rt_lib0sub_mod(___nl__13, ___nl__11));
#line 493
c_rt_lib0move(&___nl__15,___get_global_const(1));
#line 493
c_rt_lib0move(&___nl__16,___get_global_const(2));
#line 493
c_rt_lib0move(&___nl__17, c_rt_lib0array_len(___nl__10));
#line 493
label_21:
#line 493
c_rt_lib0move(&___nl__18, c_rt_lib0ge(___nl__15, ___nl__17));
#line 493
if(c_rt_lib0check_true_native(___nl__18)){ goto label_19;}
#line 493
c_rt_lib0move(&___nl__14, c_rt_lib0array_get(___nl__10, ___nl__15));
#line 494
c_rt_lib0move(&___nl__20,___get_global_const(320));
#line 494
c_rt_lib0move(&___nl__22, generator_c_priv0get_reg_ref(___ref___0, ___nl__14));
#line 494
c_rt_lib0move(&___nl__23,___get_global_const(384));
#line 494
c_rt_lib0move(&___nl__23, c_rt_lib0concat_add(___nl__23, ___nl__13));
#line 494
c_rt_lib0move(&___nl__24,___get_global_const(175));
#line 494
c_rt_lib0move(&___nl__23, c_rt_lib0concat_add(___nl__23, ___nl__24));
#line 494
c_rt_lib0clear(&___nl__24);
#line 494
c_rt_lib0move(&___nl__21, c_rt_lib0array_mk(2, ___nl__22, ___nl__23));
#line 494
c_rt_lib0clear(&___nl__22);
#line 494
c_rt_lib0clear(&___nl__23);
#line 494
c_rt_lib0move(&___nl__19, generator_c_priv0get_fun_lib(___nl__20, ___nl__21));
#line 494
c_rt_lib0clear(&___nl__21);
#line 494
c_rt_lib0clear(&___nl__20);
#line 494
c_rt_lib0move(&___nl__20,___get_global_const(311));
#line 494
c_rt_lib0move(&___nl__19, c_rt_lib0concat_add(___nl__19, ___nl__20));
#line 494
c_rt_lib0clear(&___nl__20);
#line 494
c_rt_lib0delete(generator_c_priv0println(___ref___0, ___nl__19));
#line 494
c_rt_lib0clear(&___nl__19);
#line 495
c_rt_lib0move(&___nl__19,___get_global_const(2));
#line 495
c_rt_lib0move(&___nl__13, c_rt_lib0add_mod(___nl__13, ___nl__19));
#line 495
c_rt_lib0clear(&___nl__19);
#line 496
c_rt_lib0move(&___nl__15, c_rt_lib0add_mod(___nl__15, ___nl__16));
#line 496
goto label_21;
#line 496
label_19:
#line 496
c_rt_lib0clear(&___nl__14);
#line 496
c_rt_lib0clear(&___nl__15);
#line 496
c_rt_lib0clear(&___nl__16);
#line 496
c_rt_lib0clear(&___nl__17);
#line 496
c_rt_lib0clear(&___nl__18);
#line 497
c_rt_lib0move(&___nl__14,___get_global_const(294));
#line 497
c_rt_lib0move(&___nl__14, c_rt_lib0get_ref_hash(*___ref___0, ___nl__14));
#line 497
c_rt_lib0copy(&___nl__15, ___nl__13);
#line 497
c_rt_lib0hash_set_value_dec(&___nl__14, ___get_global_const(289), ___nl__15);
#line 497
c_rt_lib0move(&___nl__16,___get_global_const(294));
#line 497
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__16, ___nl__14));
#line 497
c_rt_lib0clear(&___nl__16);
#line 497
c_rt_lib0clear(&___nl__14);
#line 497
c_rt_lib0clear(&___nl__15);
#line 497
c_rt_lib0clear(&___nl__13);
#line 498
goto label_14;
#line 498
label_14:
#line 498
c_rt_lib0clear(&___nl__12);
#line 498
c_rt_lib0clear(&___nl__11);
#line 498
c_rt_lib0clear(&___nl__10);
#line 499
goto label_7;
#line 499
label_7:
#line 499
c_rt_lib0clear(&___nl__8);
#line 499
c_rt_lib0clear(&___nl__9);
#line 499
label_5:
#line 500
c_rt_lib0move(&___nl__4, c_rt_lib0add_mod(___nl__4, ___nl__5));
#line 500
goto label_6;
#line 500
label_4:
#line 500
c_rt_lib0clear(&___nl__2);
#line 500
c_rt_lib0clear(&___nl__3);
#line 500
c_rt_lib0clear(&___nl__4);
#line 500
c_rt_lib0clear(&___nl__5);
#line 500
c_rt_lib0clear(&___nl__6);
#line 500
c_rt_lib0clear(&___nl__7);
#line 501
c_rt_lib0move(&___nl__2,___get_global_const(169));
#line 501
c_rt_lib0move(&___nl__3, string0lf());
#line 501
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__3));
#line 501
c_rt_lib0clear(&___nl__3);
#line 501
c_rt_lib0delete(generator_c_priv0println(___ref___0, ___nl__2));
#line 501
c_rt_lib0clear(&___nl__2);
#line 501
c_rt_lib0clear(&___nl__1);
#line 501
return NULL;
}

ImmT generator_c_priv0is_singleton_use_function(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
generator_c_priv0__const__init();
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
#line 504
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(331)));
#line 504
c_rt_lib0move(&___nl__1, array0len(___nl__2));
#line 504
c_rt_lib0clear(&___nl__2);
#line 504
c_rt_lib0move(&___nl__2,___get_global_const(1));
#line 504
c_rt_lib0move(&___nl__1, c_rt_lib0gt(___nl__1, ___nl__2));
#line 504
c_rt_lib0clear(&___nl__2);
#line 504
c_rt_lib0move(&___nl__1, c_rt_lib0not(___nl__1));
#line 504
if(c_rt_lib0check_true_native(___nl__1)){ goto label_2;}
#line 504
c_rt_lib0move(&___nl__2, c_rt_lib0get_false());
#line 504
c_rt_lib0clear(&___nl__0);
#line 504
c_rt_lib0clear(&___nl__1);
#line 504
return ___nl__2;
#line 504
c_rt_lib0clear(&___nl__2);
#line 504
goto label_2;
#line 504
label_2:
#line 504
c_rt_lib0clear(&___nl__1);
#line 505
c_rt_lib0move(&___nl__1, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(212)));
#line 505
c_rt_lib0move(&___nl__1, c_rt_lib0priv_is(___nl__1, ___get_global_const(141)));
#line 506
c_rt_lib0move(&___nl__2, c_rt_lib0get_false());
#line 508
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(380)));
#line 508
c_rt_lib0move(&___nl__6,___get_global_const(1));
#line 508
c_rt_lib0move(&___nl__7,___get_global_const(2));
#line 508
c_rt_lib0move(&___nl__8, c_rt_lib0array_len(___nl__4));
#line 508
label_5:
#line 508
c_rt_lib0move(&___nl__9, c_rt_lib0ge(___nl__6, ___nl__8));
#line 508
if(c_rt_lib0check_true_native(___nl__9)){ goto label_3;}
#line 508
c_rt_lib0move(&___nl__5, c_rt_lib0array_get(___nl__4, ___nl__6));
#line 509
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(209)));
#line 510
c_rt_lib0copy(&___nl__11, ___nl__10);
#line 510
c_rt_lib0move(&___nl__11, c_rt_lib0priv_is(___nl__11, ___get_global_const(217)));
#line 510
c_rt_lib0move(&___nl__11, c_rt_lib0not(___nl__11));
#line 510
if(c_rt_lib0check_true_native(___nl__11)){ goto label_7;}
#line 511
c_rt_lib0copy(&___nl__12, ___nl__10);
#line 511
c_rt_lib0move(&___nl__12, c_rt_lib0priv_as(___nl__12, ___get_global_const(217)));
#line 512
c_rt_lib0move(&___nl__13, c_rt_lib0hash_get_value_dec(___nl__12, ___get_global_const(385)));
#line 512
c_rt_lib0move(&___nl__14,___get_global_const(386));
#line 512
c_rt_lib0move(&___nl__13, c_rt_lib0eq(___nl__13, ___nl__14));
#line 512
c_rt_lib0clear(&___nl__14);
#line 512
c_rt_lib0move(&___nl__13, c_rt_lib0not(___nl__13));
#line 512
c_rt_lib0move(&___nl__13, c_rt_lib0not(___nl__13));
#line 512
if(c_rt_lib0check_true_native(___nl__13)){ goto label_9;}
#line 512
c_rt_lib0clear(&___nl__10);
#line 512
c_rt_lib0clear(&___nl__11);
#line 512
c_rt_lib0clear(&___nl__12);
#line 512
c_rt_lib0clear(&___nl__13);
#line 512
goto label_4;
#line 512
goto label_9;
#line 512
label_9:
#line 512
c_rt_lib0clear(&___nl__13);
#line 513
c_rt_lib0move(&___nl__13, c_rt_lib0hash_get_value_dec(___nl__12, ___get_global_const(257)));
#line 513
c_rt_lib0move(&___nl__14,___get_global_const(288));
#line 513
c_rt_lib0move(&___nl__13, c_rt_lib0eq(___nl__13, ___nl__14));
#line 513
c_rt_lib0clear(&___nl__14);
#line 513
c_rt_lib0move(&___nl__13, c_rt_lib0not(___nl__13));
#line 513
c_rt_lib0move(&___nl__13, c_rt_lib0not(___nl__13));
#line 513
if(c_rt_lib0check_true_native(___nl__13)){ goto label_11;}
#line 513
c_rt_lib0clear(&___nl__10);
#line 513
c_rt_lib0clear(&___nl__11);
#line 513
c_rt_lib0clear(&___nl__12);
#line 513
c_rt_lib0clear(&___nl__13);
#line 513
goto label_4;
#line 513
goto label_11;
#line 513
label_11:
#line 513
c_rt_lib0clear(&___nl__13);
#line 514
c_rt_lib0move(&___nl__13, c_rt_lib0get_true());
#line 514
c_rt_lib0copy(&___nl__2, ___nl__13);
#line 514
c_rt_lib0clear(&___nl__13);
#line 515
c_rt_lib0move(&___nl__13, c_rt_lib0hash_get_value_dec(___nl__12, ___get_global_const(233)));
#line 515
c_rt_lib0copy(&___nl__3, ___nl__13);
#line 515
c_rt_lib0clear(&___nl__13);
#line 515
c_rt_lib0clear(&___nl__12);
#line 516
goto label_6;
#line 516
label_7:
#line 516
c_rt_lib0copy(&___nl__11, ___nl__10);
#line 516
c_rt_lib0move(&___nl__11, c_rt_lib0priv_is(___nl__11, ___get_global_const(210)));
#line 516
c_rt_lib0move(&___nl__11, c_rt_lib0not(___nl__11));
#line 516
if(c_rt_lib0check_true_native(___nl__11)){ goto label_12;}
#line 517
c_rt_lib0copy(&___nl__12, ___nl__10);
#line 517
c_rt_lib0move(&___nl__12, c_rt_lib0priv_as(___nl__12, ___get_global_const(210)));
#line 518
c_rt_lib0copy(&___nl__13, ___nl__12);
#line 518
c_rt_lib0move(&___nl__13, c_rt_lib0priv_is(___nl__13, ___get_global_const(234)));
#line 518
c_rt_lib0move(&___nl__13, c_rt_lib0not(___nl__13));
#line 518
c_rt_lib0move(&___nl__13, c_rt_lib0not(___nl__13));
#line 518
if(c_rt_lib0check_true_native(___nl__13)){ goto label_14;}
#line 518
c_rt_lib0move(&___nl__14, c_rt_lib0get_false());
#line 518
c_rt_lib0clear(&___nl__0);
#line 518
c_rt_lib0clear(&___nl__1);
#line 518
c_rt_lib0clear(&___nl__2);
#line 518
c_rt_lib0clear(&___nl__3);
#line 518
c_rt_lib0clear(&___nl__4);
#line 518
c_rt_lib0clear(&___nl__5);
#line 518
c_rt_lib0clear(&___nl__6);
#line 518
c_rt_lib0clear(&___nl__7);
#line 518
c_rt_lib0clear(&___nl__8);
#line 518
c_rt_lib0clear(&___nl__9);
#line 518
c_rt_lib0clear(&___nl__10);
#line 518
c_rt_lib0clear(&___nl__11);
#line 518
c_rt_lib0clear(&___nl__12);
#line 518
c_rt_lib0clear(&___nl__13);
#line 518
return ___nl__14;
#line 518
c_rt_lib0clear(&___nl__14);
#line 518
goto label_14;
#line 518
label_14:
#line 518
c_rt_lib0clear(&___nl__13);
#line 519
c_rt_lib0copy(&___nl__13, ___nl__1);
#line 519
c_rt_lib0move(&___nl__13, c_rt_lib0not(___nl__13));
#line 519
if(c_rt_lib0check_true_native(___nl__13)){ goto label_16;}
#line 519
c_rt_lib0move(&___nl__14, c_rt_lib0get_true());
#line 519
c_rt_lib0clear(&___nl__0);
#line 519
c_rt_lib0clear(&___nl__1);
#line 519
c_rt_lib0clear(&___nl__2);
#line 519
c_rt_lib0clear(&___nl__3);
#line 519
c_rt_lib0clear(&___nl__4);
#line 519
c_rt_lib0clear(&___nl__5);
#line 519
c_rt_lib0clear(&___nl__6);
#line 519
c_rt_lib0clear(&___nl__7);
#line 519
c_rt_lib0clear(&___nl__8);
#line 519
c_rt_lib0clear(&___nl__9);
#line 519
c_rt_lib0clear(&___nl__10);
#line 519
c_rt_lib0clear(&___nl__11);
#line 519
c_rt_lib0clear(&___nl__12);
#line 519
c_rt_lib0clear(&___nl__13);
#line 519
return ___nl__14;
#line 519
c_rt_lib0clear(&___nl__14);
#line 519
goto label_16;
#line 519
label_16:
#line 519
c_rt_lib0clear(&___nl__13);
#line 520
c_rt_lib0copy(&___nl__13, ___nl__2);
#line 520
c_rt_lib0move(&___nl__13, c_rt_lib0not(___nl__13));
#line 520
c_rt_lib0move(&___nl__13, c_rt_lib0not(___nl__13));
#line 520
if(c_rt_lib0check_true_native(___nl__13)){ goto label_18;}
#line 520
c_rt_lib0move(&___nl__14, c_rt_lib0get_false());
#line 520
c_rt_lib0clear(&___nl__0);
#line 520
c_rt_lib0clear(&___nl__1);
#line 520
c_rt_lib0clear(&___nl__2);
#line 520
c_rt_lib0clear(&___nl__3);
#line 520
c_rt_lib0clear(&___nl__4);
#line 520
c_rt_lib0clear(&___nl__5);
#line 520
c_rt_lib0clear(&___nl__6);
#line 520
c_rt_lib0clear(&___nl__7);
#line 520
c_rt_lib0clear(&___nl__8);
#line 520
c_rt_lib0clear(&___nl__9);
#line 520
c_rt_lib0clear(&___nl__10);
#line 520
c_rt_lib0clear(&___nl__11);
#line 520
c_rt_lib0clear(&___nl__12);
#line 520
c_rt_lib0clear(&___nl__13);
#line 520
return ___nl__14;
#line 520
c_rt_lib0clear(&___nl__14);
#line 520
goto label_18;
#line 520
label_18:
#line 520
c_rt_lib0clear(&___nl__13);
#line 521
c_rt_lib0copy(&___nl__13, ___nl__12);
#line 521
c_rt_lib0move(&___nl__13, c_rt_lib0priv_as(___nl__13, ___get_global_const(234)));
#line 521
c_rt_lib0move(&___nl__13, c_rt_lib0eq(___nl__13, ___nl__3));
#line 521
c_rt_lib0clear(&___nl__0);
#line 521
c_rt_lib0clear(&___nl__1);
#line 521
c_rt_lib0clear(&___nl__2);
#line 521
c_rt_lib0clear(&___nl__3);
#line 521
c_rt_lib0clear(&___nl__4);
#line 521
c_rt_lib0clear(&___nl__5);
#line 521
c_rt_lib0clear(&___nl__6);
#line 521
c_rt_lib0clear(&___nl__7);
#line 521
c_rt_lib0clear(&___nl__8);
#line 521
c_rt_lib0clear(&___nl__9);
#line 521
c_rt_lib0clear(&___nl__10);
#line 521
c_rt_lib0clear(&___nl__11);
#line 521
c_rt_lib0clear(&___nl__12);
#line 521
return ___nl__13;
#line 521
c_rt_lib0clear(&___nl__13);
#line 521
c_rt_lib0clear(&___nl__12);
#line 522
goto label_6;
#line 522
label_12:
#line 522
c_rt_lib0copy(&___nl__11, ___nl__10);
#line 522
c_rt_lib0move(&___nl__11, c_rt_lib0priv_is(___nl__11, ___get_global_const(230)));
#line 522
c_rt_lib0move(&___nl__11, c_rt_lib0not(___nl__11));
#line 522
if(c_rt_lib0check_true_native(___nl__11)){ goto label_19;}
#line 523
goto label_6;
#line 523
label_19:
#line 523
c_rt_lib0copy(&___nl__11, ___nl__10);
#line 523
c_rt_lib0move(&___nl__11, c_rt_lib0priv_is(___nl__11, ___get_global_const(195)));
#line 523
c_rt_lib0move(&___nl__11, c_rt_lib0not(___nl__11));
#line 523
if(c_rt_lib0check_true_native(___nl__11)){ goto label_20;}
#line 524
goto label_6;
#line 524
label_20:
#line 525
c_rt_lib0copy(&___nl__12, ___nl__2);
#line 525
c_rt_lib0move(&___nl__12, c_rt_lib0not(___nl__12));
#line 525
if(c_rt_lib0check_true_native(___nl__12)){ goto label_22;}
#line 525
c_rt_lib0move(&___nl__13, c_rt_lib0get_false());
#line 525
c_rt_lib0clear(&___nl__0);
#line 525
c_rt_lib0clear(&___nl__1);
#line 525
c_rt_lib0clear(&___nl__2);
#line 525
c_rt_lib0clear(&___nl__3);
#line 525
c_rt_lib0clear(&___nl__4);
#line 525
c_rt_lib0clear(&___nl__5);
#line 525
c_rt_lib0clear(&___nl__6);
#line 525
c_rt_lib0clear(&___nl__7);
#line 525
c_rt_lib0clear(&___nl__8);
#line 525
c_rt_lib0clear(&___nl__9);
#line 525
c_rt_lib0clear(&___nl__10);
#line 525
c_rt_lib0clear(&___nl__11);
#line 525
c_rt_lib0clear(&___nl__12);
#line 525
return ___nl__13;
#line 525
c_rt_lib0clear(&___nl__13);
#line 525
goto label_22;
#line 525
label_22:
#line 525
c_rt_lib0clear(&___nl__12);
#line 526
goto label_6;
#line 526
label_6:
#line 526
c_rt_lib0clear(&___nl__11);
#line 526
c_rt_lib0clear(&___nl__10);
#line 526
label_4:
#line 527
c_rt_lib0move(&___nl__6, c_rt_lib0add_mod(___nl__6, ___nl__7));
#line 527
goto label_5;
#line 527
label_3:
#line 527
c_rt_lib0clear(&___nl__4);
#line 527
c_rt_lib0clear(&___nl__5);
#line 527
c_rt_lib0clear(&___nl__6);
#line 527
c_rt_lib0clear(&___nl__7);
#line 527
c_rt_lib0clear(&___nl__8);
#line 527
c_rt_lib0clear(&___nl__9);
#line 528
c_rt_lib0move(&___nl__4, c_rt_lib0get_false());
#line 528
c_rt_lib0clear(&___nl__0);
#line 528
c_rt_lib0clear(&___nl__1);
#line 528
c_rt_lib0clear(&___nl__2);
#line 528
c_rt_lib0clear(&___nl__3);
#line 528
return ___nl__4;
#line 528
c_rt_lib0clear(&___nl__4);
#line 528
c_rt_lib0clear(&___nl__1);
#line 528
c_rt_lib0clear(&___nl__2);
#line 528
c_rt_lib0clear(&___nl__3);
#line 528
c_rt_lib0clear(&___nl__0);
#line 528
return NULL;
}

ImmT generator_c_priv0move_args_to_register(ImmT * ___ref___0) {
generator_c_priv0__const__init();
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
#line 532
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(293)));
#line 532
c_rt_lib0move(&___nl__1, array0len(___nl__2));
#line 532
c_rt_lib0clear(&___nl__2);
#line 532
c_rt_lib0move(&___nl__2,___get_global_const(1));
#line 532
c_rt_lib0move(&___nl__3,___get_global_const(2));
#line 532
label_3:
#line 532
c_rt_lib0move(&___nl__4, c_rt_lib0ge(___nl__2, ___nl__1));
#line 532
if(c_rt_lib0check_true_native(___nl__4)){ goto label_1;}
#line 533
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(293)));
#line 533
c_rt_lib0move(&___nl__5, c_rt_lib0array_get(___nl__5, ___nl__2));
#line 533
c_rt_lib0move(&___nl__6, c_rt_lib0priv_is(___nl__5, ___get_global_const(234)));
#line 533
if(c_rt_lib0check_true_native(___nl__6)){ goto label_5;}
#line 536
c_rt_lib0move(&___nl__6, c_rt_lib0priv_is(___nl__5, ___get_global_const(5)));
#line 536
if(c_rt_lib0check_true_native(___nl__6)){ goto label_6;}
#line 536
c_rt_lib0move(&___nl__6,___get_global_const(74));
#line 536
c_rt_lib0move(&___nl__6, c_rt_lib0array_mk(2, ___nl__6, ___nl__5));
#line 536
nl_die_arg(___nl__6);
#line 533
label_5:
#line 534
c_rt_lib0move(&___nl__8,___get_global_const(387));
#line 534
c_rt_lib0move(&___nl__10, generator_c_priv0get_reg(___ref___0, ___nl__2));
#line 534
c_rt_lib0move(&___nl__9, c_rt_lib0array_mk(1, ___nl__10));
#line 534
c_rt_lib0clear(&___nl__10);
#line 534
c_rt_lib0move(&___nl__7, generator_c_priv0get_fun_lib(___nl__8, ___nl__9));
#line 534
c_rt_lib0clear(&___nl__9);
#line 534
c_rt_lib0clear(&___nl__8);
#line 534
c_rt_lib0delete(generator_c_priv0print(___ref___0, ___nl__7));
#line 534
c_rt_lib0clear(&___nl__7);
#line 535
c_rt_lib0move(&___nl__7,___get_global_const(311));
#line 535
c_rt_lib0delete(generator_c_priv0println(___ref___0, ___nl__7));
#line 535
c_rt_lib0clear(&___nl__7);
#line 536
goto label_4;
#line 536
label_6:
#line 537
goto label_4;
#line 537
label_4:
#line 537
c_rt_lib0clear(&___nl__5);
#line 537
c_rt_lib0clear(&___nl__6);
#line 538
c_rt_lib0move(&___nl__2, c_rt_lib0add_mod(___nl__2, ___nl__3));
#line 538
goto label_3;
#line 538
label_1:
#line 538
c_rt_lib0clear(&___nl__1);
#line 538
c_rt_lib0clear(&___nl__2);
#line 538
c_rt_lib0clear(&___nl__3);
#line 538
c_rt_lib0clear(&___nl__4);
#line 538
return NULL;
}

ImmT generator_c_priv0move_register_to_ref_args(ImmT * ___ref___0) {
generator_c_priv0__const__init();
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
#line 541
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(293)));
#line 541
c_rt_lib0move(&___nl__1, array0len(___nl__2));
#line 541
c_rt_lib0clear(&___nl__2);
#line 541
c_rt_lib0move(&___nl__2,___get_global_const(1));
#line 541
c_rt_lib0move(&___nl__3,___get_global_const(2));
#line 541
label_3:
#line 541
c_rt_lib0move(&___nl__4, c_rt_lib0ge(___nl__2, ___nl__1));
#line 541
if(c_rt_lib0check_true_native(___nl__4)){ goto label_1;}
#line 542
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(293)));
#line 542
c_rt_lib0move(&___nl__5, c_rt_lib0array_get(___nl__5, ___nl__2));
#line 542
c_rt_lib0move(&___nl__6, c_rt_lib0priv_is(___nl__5, ___get_global_const(234)));
#line 542
if(c_rt_lib0check_true_native(___nl__6)){ goto label_5;}
#line 543
c_rt_lib0move(&___nl__6, c_rt_lib0priv_is(___nl__5, ___get_global_const(5)));
#line 543
if(c_rt_lib0check_true_native(___nl__6)){ goto label_6;}
#line 543
c_rt_lib0move(&___nl__6,___get_global_const(74));
#line 543
c_rt_lib0move(&___nl__6, c_rt_lib0array_mk(2, ___nl__6, ___nl__5));
#line 543
nl_die_arg(___nl__6);
#line 542
label_5:
#line 543
goto label_4;
#line 543
label_6:
#line 544
goto label_4;
#line 544
label_4:
#line 544
c_rt_lib0clear(&___nl__5);
#line 544
c_rt_lib0clear(&___nl__6);
#line 545
c_rt_lib0move(&___nl__2, c_rt_lib0add_mod(___nl__2, ___nl__3));
#line 545
goto label_3;
#line 545
label_1:
#line 545
c_rt_lib0clear(&___nl__1);
#line 545
c_rt_lib0clear(&___nl__2);
#line 545
c_rt_lib0clear(&___nl__3);
#line 545
c_rt_lib0clear(&___nl__4);
#line 545
return NULL;
}

ImmT generator_c_priv0get_fun_lib(ImmT ___nl__0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
generator_c_priv0__const__init();
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
ImmT ___nl__9 = NULL;
ImmT ___nl__10 = NULL;
#line 549
c_rt_lib0move(&___nl__2, generator_c_priv0get_lib_fun(___nl__0));
#line 549
c_rt_lib0move(&___nl__3,___get_global_const(322));
#line 549
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__3));
#line 549
c_rt_lib0clear(&___nl__3);
#line 550
c_rt_lib0move(&___nl__3,___get_global_const(1));
#line 551
c_rt_lib0move(&___nl__5,___get_global_const(1));
#line 551
c_rt_lib0move(&___nl__6,___get_global_const(2));
#line 551
c_rt_lib0move(&___nl__7, c_rt_lib0array_len(___nl__1));
#line 551
label_3:
#line 551
c_rt_lib0move(&___nl__8, c_rt_lib0ge(___nl__5, ___nl__7));
#line 551
if(c_rt_lib0check_true_native(___nl__8)){ goto label_1;}
#line 551
c_rt_lib0move(&___nl__4, c_rt_lib0array_get(___nl__1, ___nl__5));
#line 552
c_rt_lib0move(&___nl__9,___get_global_const(1));
#line 552
c_rt_lib0move(&___nl__9, c_rt_lib0num_eq(___nl__9, ___nl__3));
#line 552
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__9));
#line 552
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__9));
#line 552
if(c_rt_lib0check_true_native(___nl__9)){ goto label_5;}
#line 552
c_rt_lib0move(&___nl__10,___get_global_const(188));
#line 552
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__10));
#line 552
c_rt_lib0clear(&___nl__10);
#line 552
goto label_5;
#line 552
label_5:
#line 552
c_rt_lib0clear(&___nl__9);
#line 553
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__4));
#line 554
c_rt_lib0move(&___nl__9,___get_global_const(2));
#line 554
c_rt_lib0move(&___nl__3, c_rt_lib0add_mod(___nl__3, ___nl__9));
#line 554
c_rt_lib0clear(&___nl__9);
#line 555
c_rt_lib0move(&___nl__5, c_rt_lib0add_mod(___nl__5, ___nl__6));
#line 555
goto label_3;
#line 555
label_1:
#line 555
c_rt_lib0clear(&___nl__4);
#line 555
c_rt_lib0clear(&___nl__5);
#line 555
c_rt_lib0clear(&___nl__6);
#line 555
c_rt_lib0clear(&___nl__7);
#line 555
c_rt_lib0clear(&___nl__8);
#line 556
c_rt_lib0move(&___nl__4,___get_global_const(176));
#line 556
c_rt_lib0move(&___nl__4, c_rt_lib0concat_new(___nl__2, ___nl__4));
#line 556
c_rt_lib0clear(&___nl__0);
#line 556
c_rt_lib0clear(&___nl__1);
#line 556
c_rt_lib0clear(&___nl__2);
#line 556
c_rt_lib0clear(&___nl__3);
#line 556
return ___nl__4;
#line 556
c_rt_lib0clear(&___nl__4);
#line 556
c_rt_lib0clear(&___nl__2);
#line 556
c_rt_lib0clear(&___nl__3);
#line 556
c_rt_lib0clear(&___nl__0);
#line 556
c_rt_lib0clear(&___nl__1);
#line 556
return NULL;
}

ImmT generator_c_priv0get_module_name(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
generator_c_priv0__const__init();
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
#line 560
c_rt_lib0move(&___nl__2,___get_global_const(1));
#line 560
c_rt_lib0move(&___nl__3,___get_global_const(388));
#line 560
c_rt_lib0move(&___nl__1, string0replace(___nl__0, ___nl__2, ___nl__3));
#line 560
c_rt_lib0clear(&___nl__3);
#line 560
c_rt_lib0clear(&___nl__2);
#line 560
c_rt_lib0clear(&___nl__0);
#line 560
return ___nl__1;
#line 560
c_rt_lib0clear(&___nl__1);
#line 560
c_rt_lib0clear(&___nl__0);
#line 560
return NULL;
}

ImmT generator_c_priv0get_fun_name(ImmT ___nl__0,ImmT ___nl__1,ImmT ___nl__2) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
c_rt_lib0arg_val(___nl__2);
generator_c_priv0__const__init();
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
#line 564
c_rt_lib0move(&___nl__3,___get_global_const(0));
#line 564
c_rt_lib0move(&___nl__3, c_rt_lib0eq(___nl__0, ___nl__3));
#line 564
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 564
if(c_rt_lib0check_true_native(___nl__3)){ goto label_2;}
#line 564
c_rt_lib0move(&___nl__4,___get_global_const(389));
#line 564
c_rt_lib0move(&___nl__4, c_rt_lib0concat_new(___nl__2, ___nl__4));
#line 564
c_rt_lib0copy(&___nl__0, ___nl__4);
#line 564
c_rt_lib0clear(&___nl__4);
#line 564
goto label_2;
#line 564
label_2:
#line 564
c_rt_lib0clear(&___nl__3);
#line 565
c_rt_lib0move(&___nl__3, generator_c_priv0get_module_name(___nl__0));
#line 565
c_rt_lib0move(&___nl__4,___get_global_const(1));
#line 565
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 565
c_rt_lib0clear(&___nl__4);
#line 565
c_rt_lib0move(&___nl__5,___get_global_const(1));
#line 565
c_rt_lib0move(&___nl__6,___get_global_const(388));
#line 565
c_rt_lib0move(&___nl__4, string0replace(___nl__1, ___nl__5, ___nl__6));
#line 565
c_rt_lib0clear(&___nl__6);
#line 565
c_rt_lib0clear(&___nl__5);
#line 565
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 565
c_rt_lib0clear(&___nl__4);
#line 565
c_rt_lib0clear(&___nl__0);
#line 565
c_rt_lib0clear(&___nl__1);
#line 565
c_rt_lib0clear(&___nl__2);
#line 565
return ___nl__3;
#line 565
c_rt_lib0clear(&___nl__3);
#line 565
c_rt_lib0clear(&___nl__0);
#line 565
c_rt_lib0clear(&___nl__1);
#line 565
c_rt_lib0clear(&___nl__2);
#line 565
return NULL;
}

ImmT generator_c_priv0get_lib_fun(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
generator_c_priv0__const__init();
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
#line 570
c_rt_lib0move(&___nl__2,___get_global_const(302));
#line 570
c_rt_lib0move(&___nl__3,___get_global_const(0));
#line 570
c_rt_lib0move(&___nl__1, generator_c_priv0get_fun_name(___nl__2, ___nl__0, ___nl__3));
#line 570
c_rt_lib0clear(&___nl__3);
#line 570
c_rt_lib0clear(&___nl__2);
#line 570
c_rt_lib0clear(&___nl__0);
#line 570
return ___nl__1;
#line 570
c_rt_lib0clear(&___nl__1);
#line 570
c_rt_lib0clear(&___nl__0);
#line 570
return NULL;
}

ImmT generator_c_priv0generate_imm(ImmT * ___ref___0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__1);
generator_c_priv0__const__init();
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
#line 574
c_rt_lib0move(&___nl__2, nl0is_hash(___nl__1));
#line 574
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 574
if(c_rt_lib0check_true_native(___nl__2)){ goto label_2;}
#line 575
c_rt_lib0move(&___nl__4,___get_global_const(390));
#line 575
c_rt_lib0move(&___nl__3, generator_c_priv0get_lib_fun(___nl__4));
#line 575
c_rt_lib0clear(&___nl__4);
#line 575
c_rt_lib0move(&___nl__4,___get_global_const(322));
#line 575
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 575
c_rt_lib0clear(&___nl__4);
#line 575
c_rt_lib0move(&___nl__4, hash0size(___nl__1));
#line 575
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 575
c_rt_lib0clear(&___nl__4);
#line 575
c_rt_lib0delete(generator_c_priv0print(___ref___0, ___nl__3));
#line 575
c_rt_lib0clear(&___nl__3);
#line 576
c_rt_lib0move(&___nl__5, c_rt_lib0init_iter(___nl__1));
#line 576
label_5:
#line 576
c_rt_lib0move(&___nl__3, c_rt_lib0is_end_hash(___nl__5));
#line 576
if(c_rt_lib0check_true_native(___nl__3)){ goto label_3;}
#line 576
c_rt_lib0move(&___nl__3, c_rt_lib0get_key_iter(___nl__5));
#line 576
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value(___nl__1, ___nl__3));
#line 577
c_rt_lib0move(&___nl__6,___get_global_const(188));
#line 577
c_rt_lib0delete(generator_c_priv0print(___ref___0, ___nl__6));
#line 577
c_rt_lib0clear(&___nl__6);
#line 578
c_rt_lib0move(&___nl__6, generator_c_priv0get_const_sim(___ref___0, ___nl__3));
#line 578
c_rt_lib0delete(generator_c_priv0print(___ref___0, ___nl__6));
#line 578
c_rt_lib0clear(&___nl__6);
#line 579
c_rt_lib0move(&___nl__6,___get_global_const(188));
#line 579
c_rt_lib0delete(generator_c_priv0print(___ref___0, ___nl__6));
#line 579
c_rt_lib0clear(&___nl__6);
#line 580
c_rt_lib0delete(generator_c_priv0generate_imm(___ref___0, ___nl__4));
#line 581
c_rt_lib0move(&___nl__5, c_rt_lib0next_iter(___nl__5));
#line 581
goto label_5;
#line 581
label_3:
#line 581
c_rt_lib0clear(&___nl__3);
#line 581
c_rt_lib0clear(&___nl__4);
#line 581
c_rt_lib0clear(&___nl__5);
#line 582
c_rt_lib0move(&___nl__3,___get_global_const(176));
#line 582
c_rt_lib0delete(generator_c_priv0print(___ref___0, ___nl__3));
#line 582
c_rt_lib0clear(&___nl__3);
#line 583
goto label_1;
#line 583
label_2:
#line 583
c_rt_lib0move(&___nl__2, nl0is_array(___nl__1));
#line 583
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 583
if(c_rt_lib0check_true_native(___nl__2)){ goto label_6;}
#line 584
c_rt_lib0move(&___nl__4,___get_global_const(391));
#line 584
c_rt_lib0move(&___nl__3, generator_c_priv0get_lib_fun(___nl__4));
#line 584
c_rt_lib0clear(&___nl__4);
#line 584
c_rt_lib0move(&___nl__4,___get_global_const(322));
#line 584
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 584
c_rt_lib0clear(&___nl__4);
#line 584
c_rt_lib0move(&___nl__4, array0len(___nl__1));
#line 584
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 584
c_rt_lib0clear(&___nl__4);
#line 584
c_rt_lib0delete(generator_c_priv0print(___ref___0, ___nl__3));
#line 584
c_rt_lib0clear(&___nl__3);
#line 585
c_rt_lib0move(&___nl__4,___get_global_const(1));
#line 585
c_rt_lib0move(&___nl__5,___get_global_const(2));
#line 585
c_rt_lib0move(&___nl__6, c_rt_lib0array_len(___nl__1));
#line 585
label_9:
#line 585
c_rt_lib0move(&___nl__7, c_rt_lib0ge(___nl__4, ___nl__6));
#line 585
if(c_rt_lib0check_true_native(___nl__7)){ goto label_7;}
#line 585
c_rt_lib0move(&___nl__3, c_rt_lib0array_get(___nl__1, ___nl__4));
#line 586
c_rt_lib0move(&___nl__8,___get_global_const(188));
#line 586
c_rt_lib0delete(generator_c_priv0print(___ref___0, ___nl__8));
#line 586
c_rt_lib0clear(&___nl__8);
#line 587
c_rt_lib0delete(generator_c_priv0generate_imm(___ref___0, ___nl__3));
#line 588
c_rt_lib0move(&___nl__4, c_rt_lib0add_mod(___nl__4, ___nl__5));
#line 588
goto label_9;
#line 588
label_7:
#line 588
c_rt_lib0clear(&___nl__3);
#line 588
c_rt_lib0clear(&___nl__4);
#line 588
c_rt_lib0clear(&___nl__5);
#line 588
c_rt_lib0clear(&___nl__6);
#line 588
c_rt_lib0clear(&___nl__7);
#line 589
c_rt_lib0move(&___nl__3,___get_global_const(176));
#line 589
c_rt_lib0delete(generator_c_priv0print(___ref___0, ___nl__3));
#line 589
c_rt_lib0clear(&___nl__3);
#line 590
goto label_1;
#line 590
label_6:
#line 590
c_rt_lib0move(&___nl__2, nl0is_variant(___nl__1));
#line 590
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 590
if(c_rt_lib0check_true_native(___nl__2)){ goto label_10;}
#line 591
c_rt_lib0move(&___nl__5, ptd0sim());
#line 591
c_rt_lib0move(&___nl__6, ov0get_element(___nl__1));
#line 591
c_rt_lib0move(&___nl__4, ptd0ensure(___nl__5, ___nl__6));
#line 591
c_rt_lib0clear(&___nl__6);
#line 591
c_rt_lib0clear(&___nl__5);
#line 591
c_rt_lib0move(&___nl__3, generator_c_priv0get_const_sim(___ref___0, ___nl__4));
#line 591
c_rt_lib0clear(&___nl__4);
#line 592
c_rt_lib0move(&___nl__4, ov0has_value(___nl__1));
#line 592
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 592
if(c_rt_lib0check_true_native(___nl__4)){ goto label_12;}
#line 593
c_rt_lib0move(&___nl__6,___get_global_const(392));
#line 593
c_rt_lib0move(&___nl__5, generator_c_priv0get_lib_fun(___nl__6));
#line 593
c_rt_lib0clear(&___nl__6);
#line 593
c_rt_lib0move(&___nl__6,___get_global_const(322));
#line 593
c_rt_lib0move(&___nl__5, c_rt_lib0concat_add(___nl__5, ___nl__6));
#line 593
c_rt_lib0clear(&___nl__6);
#line 593
c_rt_lib0move(&___nl__5, c_rt_lib0concat_add(___nl__5, ___nl__3));
#line 593
c_rt_lib0move(&___nl__6,___get_global_const(188));
#line 593
c_rt_lib0move(&___nl__5, c_rt_lib0concat_add(___nl__5, ___nl__6));
#line 593
c_rt_lib0clear(&___nl__6);
#line 593
c_rt_lib0delete(generator_c_priv0print(___ref___0, ___nl__5));
#line 593
c_rt_lib0clear(&___nl__5);
#line 594
c_rt_lib0move(&___nl__5, ov0get_value(___nl__1));
#line 594
c_rt_lib0delete(generator_c_priv0generate_imm(___ref___0, ___nl__5));
#line 594
c_rt_lib0clear(&___nl__5);
#line 595
c_rt_lib0move(&___nl__5,___get_global_const(176));
#line 595
c_rt_lib0delete(generator_c_priv0print(___ref___0, ___nl__5));
#line 595
c_rt_lib0clear(&___nl__5);
#line 596
goto label_11;
#line 596
label_12:
#line 597
c_rt_lib0move(&___nl__6,___get_global_const(393));
#line 597
c_rt_lib0move(&___nl__5, generator_c_priv0get_lib_fun(___nl__6));
#line 597
c_rt_lib0clear(&___nl__6);
#line 597
c_rt_lib0move(&___nl__6,___get_global_const(322));
#line 597
c_rt_lib0move(&___nl__5, c_rt_lib0concat_add(___nl__5, ___nl__6));
#line 597
c_rt_lib0clear(&___nl__6);
#line 597
c_rt_lib0move(&___nl__5, c_rt_lib0concat_add(___nl__5, ___nl__3));
#line 597
c_rt_lib0move(&___nl__6,___get_global_const(176));
#line 597
c_rt_lib0move(&___nl__5, c_rt_lib0concat_add(___nl__5, ___nl__6));
#line 597
c_rt_lib0clear(&___nl__6);
#line 597
c_rt_lib0delete(generator_c_priv0print(___ref___0, ___nl__5));
#line 597
c_rt_lib0clear(&___nl__5);
#line 598
goto label_11;
#line 598
label_11:
#line 598
c_rt_lib0clear(&___nl__4);
#line 598
c_rt_lib0clear(&___nl__3);
#line 599
goto label_1;
#line 599
label_10:
#line 599
c_rt_lib0move(&___nl__2, nl0is_sim(___nl__1));
#line 599
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 599
if(c_rt_lib0check_true_native(___nl__2)){ goto label_13;}
#line 600
c_rt_lib0move(&___nl__5, ptd0sim());
#line 600
c_rt_lib0move(&___nl__4, ptd0ensure(___nl__5, ___nl__1));
#line 600
c_rt_lib0clear(&___nl__5);
#line 600
c_rt_lib0move(&___nl__3, generator_c_priv0get_const_sim(___ref___0, ___nl__4));
#line 600
c_rt_lib0clear(&___nl__4);
#line 600
c_rt_lib0delete(generator_c_priv0print(___ref___0, ___nl__3));
#line 600
c_rt_lib0clear(&___nl__3);
#line 601
goto label_1;
#line 601
label_13:
#line 602
c_rt_lib0move(&___nl__3, c_rt_lib0array_mk(0));
#line 602
nl_die_arg(___nl__3);
#line 602
c_rt_lib0clear(&___nl__3);
#line 603
goto label_1;
#line 603
label_1:
#line 603
c_rt_lib0clear(&___nl__2);
#line 603
c_rt_lib0clear(&___nl__1);
#line 603
return NULL;
}

ImmT generator_c_priv0print_cmd(ImmT * ___ref___0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__1);
generator_c_priv0__const__init();
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
#line 607
c_rt_lib0move(&___nl__2,___get_global_const(394));
#line 607
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(213)));
#line 607
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(395)));
#line 607
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(396)));
#line 607
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(98)));
#line 607
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__3));
#line 607
c_rt_lib0clear(&___nl__3);
#line 607
c_rt_lib0move(&___nl__3, string0lf());
#line 607
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__3));
#line 607
c_rt_lib0clear(&___nl__3);
#line 607
c_rt_lib0delete(generator_c_priv0print(___ref___0, ___nl__2));
#line 607
c_rt_lib0clear(&___nl__2);
#line 608
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(209)));
#line 608
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(215)));
#line 608
if(c_rt_lib0check_true_native(___nl__3)){ goto label_2;}
#line 613
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(216)));
#line 613
if(c_rt_lib0check_true_native(___nl__3)){ goto label_3;}
#line 621
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(71)));
#line 621
if(c_rt_lib0check_true_native(___nl__3)){ goto label_4;}
#line 628
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(217)));
#line 628
if(c_rt_lib0check_true_native(___nl__3)){ goto label_5;}
#line 630
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(218)));
#line 630
if(c_rt_lib0check_true_native(___nl__3)){ goto label_6;}
#line 634
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(219)));
#line 634
if(c_rt_lib0check_true_native(___nl__3)){ goto label_7;}
#line 641
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(220)));
#line 641
if(c_rt_lib0check_true_native(___nl__3)){ goto label_8;}
#line 644
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(221)));
#line 644
if(c_rt_lib0check_true_native(___nl__3)){ goto label_9;}
#line 647
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(210)));
#line 647
if(c_rt_lib0check_true_native(___nl__3)){ goto label_10;}
#line 655
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(229)));
#line 655
if(c_rt_lib0check_true_native(___nl__3)){ goto label_11;}
#line 657
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(222)));
#line 657
if(c_rt_lib0check_true_native(___nl__3)){ goto label_12;}
#line 661
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(223)));
#line 661
if(c_rt_lib0check_true_native(___nl__3)){ goto label_13;}
#line 666
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(224)));
#line 666
if(c_rt_lib0check_true_native(___nl__3)){ goto label_14;}
#line 669
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(225)));
#line 669
if(c_rt_lib0check_true_native(___nl__3)){ goto label_15;}
#line 672
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(226)));
#line 672
if(c_rt_lib0check_true_native(___nl__3)){ goto label_16;}
#line 676
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(227)));
#line 676
if(c_rt_lib0check_true_native(___nl__3)){ goto label_17;}
#line 679
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(228)));
#line 679
if(c_rt_lib0check_true_native(___nl__3)){ goto label_18;}
#line 693
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(230)));
#line 693
if(c_rt_lib0check_true_native(___nl__3)){ goto label_19;}
#line 696
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(231)));
#line 696
if(c_rt_lib0check_true_native(___nl__3)){ goto label_20;}
#line 701
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(232)));
#line 701
if(c_rt_lib0check_true_native(___nl__3)){ goto label_21;}
#line 703
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(195)));
#line 703
if(c_rt_lib0check_true_native(___nl__3)){ goto label_22;}
#line 703
c_rt_lib0move(&___nl__3,___get_global_const(74));
#line 703
c_rt_lib0move(&___nl__3, c_rt_lib0array_mk(2, ___nl__3, ___nl__2));
#line 703
nl_die_arg(___nl__3);
#line 608
label_2:
#line 608
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(215)));
#line 609
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(39)));
#line 609
c_rt_lib0move(&___nl__6, array0len(___nl__7));
#line 609
c_rt_lib0clear(&___nl__7);
#line 609
c_rt_lib0move(&___nl__5, c_rt_lib0array_mk(1, ___nl__6));
#line 609
c_rt_lib0clear(&___nl__6);
#line 610
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(39)));
#line 610
c_rt_lib0move(&___nl__8,___get_global_const(1));
#line 610
c_rt_lib0move(&___nl__9,___get_global_const(2));
#line 610
c_rt_lib0move(&___nl__10, c_rt_lib0array_len(___nl__6));
#line 610
label_25:
#line 610
c_rt_lib0move(&___nl__11, c_rt_lib0ge(___nl__8, ___nl__10));
#line 610
if(c_rt_lib0check_true_native(___nl__11)){ goto label_23;}
#line 610
c_rt_lib0move(&___nl__7, c_rt_lib0array_get(___nl__6, ___nl__8));
#line 610
c_rt_lib0move(&___nl__12, generator_c_priv0get_reg(___ref___0, ___nl__7));
#line 610
c_rt_lib0delete(array0push(&___nl__5, ___nl__12));
#line 610
c_rt_lib0clear(&___nl__12);
#line 610
c_rt_lib0move(&___nl__8, c_rt_lib0add_mod(___nl__8, ___nl__9));
#line 610
goto label_25;
#line 610
label_23:
#line 610
c_rt_lib0clear(&___nl__6);
#line 610
c_rt_lib0clear(&___nl__7);
#line 610
c_rt_lib0clear(&___nl__8);
#line 610
c_rt_lib0clear(&___nl__9);
#line 610
c_rt_lib0clear(&___nl__10);
#line 610
c_rt_lib0clear(&___nl__11);
#line 611
c_rt_lib0move(&___nl__7,___get_global_const(397));
#line 611
c_rt_lib0move(&___nl__6, generator_c_priv0get_fun_lib(___nl__7, ___nl__5));
#line 611
c_rt_lib0clear(&___nl__7);
#line 612
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(233)));
#line 612
c_rt_lib0move(&___nl__7, generator_c_priv0get_assign(___ref___0, ___nl__8, ___nl__6));
#line 612
c_rt_lib0clear(&___nl__8);
#line 612
c_rt_lib0delete(generator_c_priv0print(___ref___0, ___nl__7));
#line 612
c_rt_lib0clear(&___nl__7);
#line 612
c_rt_lib0clear(&___nl__5);
#line 612
c_rt_lib0clear(&___nl__6);
#line 612
c_rt_lib0clear(&___nl__4);
#line 613
goto label_1;
#line 613
label_3:
#line 613
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(216)));
#line 614
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(39)));
#line 614
c_rt_lib0move(&___nl__6, array0len(___nl__7));
#line 614
c_rt_lib0clear(&___nl__7);
#line 614
c_rt_lib0move(&___nl__5, c_rt_lib0array_mk(1, ___nl__6));
#line 614
c_rt_lib0clear(&___nl__6);
#line 615
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(39)));
#line 615
c_rt_lib0move(&___nl__8,___get_global_const(1));
#line 615
c_rt_lib0move(&___nl__9,___get_global_const(2));
#line 615
c_rt_lib0move(&___nl__10, c_rt_lib0array_len(___nl__6));
#line 615
label_28:
#line 615
c_rt_lib0move(&___nl__11, c_rt_lib0ge(___nl__8, ___nl__10));
#line 615
if(c_rt_lib0check_true_native(___nl__11)){ goto label_26;}
#line 615
c_rt_lib0move(&___nl__7, c_rt_lib0array_get(___nl__6, ___nl__8));
#line 616
c_rt_lib0move(&___nl__13, c_rt_lib0hash_get_value_dec(___nl__7, ___get_global_const(279)));
#line 616
c_rt_lib0move(&___nl__12, generator_c_priv0get_const_sim(___ref___0, ___nl__13));
#line 616
c_rt_lib0clear(&___nl__13);
#line 616
c_rt_lib0delete(array0push(&___nl__5, ___nl__12));
#line 616
c_rt_lib0clear(&___nl__12);
#line 617
c_rt_lib0move(&___nl__13, c_rt_lib0hash_get_value_dec(___nl__7, ___get_global_const(234)));
#line 617
c_rt_lib0move(&___nl__12, generator_c_priv0get_reg(___ref___0, ___nl__13));
#line 617
c_rt_lib0clear(&___nl__13);
#line 617
c_rt_lib0delete(array0push(&___nl__5, ___nl__12));
#line 617
c_rt_lib0clear(&___nl__12);
#line 618
c_rt_lib0move(&___nl__8, c_rt_lib0add_mod(___nl__8, ___nl__9));
#line 618
goto label_28;
#line 618
label_26:
#line 618
c_rt_lib0clear(&___nl__6);
#line 618
c_rt_lib0clear(&___nl__7);
#line 618
c_rt_lib0clear(&___nl__8);
#line 618
c_rt_lib0clear(&___nl__9);
#line 618
c_rt_lib0clear(&___nl__10);
#line 618
c_rt_lib0clear(&___nl__11);
#line 619
c_rt_lib0move(&___nl__7,___get_global_const(398));
#line 619
c_rt_lib0move(&___nl__6, generator_c_priv0get_fun_lib(___nl__7, ___nl__5));
#line 619
c_rt_lib0clear(&___nl__7);
#line 620
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(233)));
#line 620
c_rt_lib0move(&___nl__7, generator_c_priv0get_assign(___ref___0, ___nl__8, ___nl__6));
#line 620
c_rt_lib0clear(&___nl__8);
#line 620
c_rt_lib0delete(generator_c_priv0print(___ref___0, ___nl__7));
#line 620
c_rt_lib0clear(&___nl__7);
#line 620
c_rt_lib0clear(&___nl__5);
#line 620
c_rt_lib0clear(&___nl__6);
#line 620
c_rt_lib0clear(&___nl__4);
#line 621
goto label_1;
#line 621
label_4:
#line 621
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(71)));
#line 622
c_rt_lib0move(&___nl__6,___get_global_const(399));
#line 622
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(99)));
#line 622
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(76)));
#line 622
c_rt_lib0move(&___nl__11, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(292)));
#line 622
c_rt_lib0move(&___nl__8, generator_c_priv0get_fun_name(___nl__9, ___nl__10, ___nl__11));
#line 622
c_rt_lib0clear(&___nl__11);
#line 622
c_rt_lib0clear(&___nl__10);
#line 622
c_rt_lib0clear(&___nl__9);
#line 622
c_rt_lib0move(&___nl__9,___get_global_const(400));
#line 622
c_rt_lib0move(&___nl__8, c_rt_lib0concat_add(___nl__8, ___nl__9));
#line 622
c_rt_lib0clear(&___nl__9);
#line 622
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(99)));
#line 622
c_rt_lib0move(&___nl__9, generator_c_priv0get_const_sim(___ref___0, ___nl__10));
#line 622
c_rt_lib0clear(&___nl__10);
#line 622
c_rt_lib0move(&___nl__11, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(76)));
#line 622
c_rt_lib0move(&___nl__10, generator_c_priv0get_const_sim(___ref___0, ___nl__11));
#line 622
c_rt_lib0clear(&___nl__11);
#line 622
c_rt_lib0move(&___nl__7, c_rt_lib0array_mk(3, ___nl__8, ___nl__9, ___nl__10));
#line 622
c_rt_lib0clear(&___nl__8);
#line 622
c_rt_lib0clear(&___nl__9);
#line 622
c_rt_lib0clear(&___nl__10);
#line 622
c_rt_lib0move(&___nl__5, generator_c_priv0get_fun_lib(___nl__6, ___nl__7));
#line 622
c_rt_lib0clear(&___nl__7);
#line 622
c_rt_lib0clear(&___nl__6);
#line 627
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(233)));
#line 627
c_rt_lib0move(&___nl__6, generator_c_priv0get_assign(___ref___0, ___nl__7, ___nl__5));
#line 627
c_rt_lib0clear(&___nl__7);
#line 627
c_rt_lib0delete(generator_c_priv0print(___ref___0, ___nl__6));
#line 627
c_rt_lib0clear(&___nl__6);
#line 627
c_rt_lib0clear(&___nl__5);
#line 627
c_rt_lib0clear(&___nl__4);
#line 628
goto label_1;
#line 628
label_5:
#line 628
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(217)));
#line 629
c_rt_lib0delete(generator_c_priv0generate_call(___ref___0, ___nl__4));
#line 629
c_rt_lib0clear(&___nl__4);
#line 630
goto label_1;
#line 630
label_6:
#line 630
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(218)));
#line 631
c_rt_lib0move(&___nl__6, generator_c_priv0get_unary_ops());
#line 631
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(401)));
#line 631
c_rt_lib0move(&___nl__5, hash0get_value(___nl__6, ___nl__7));
#line 631
c_rt_lib0clear(&___nl__7);
#line 631
c_rt_lib0clear(&___nl__6);
#line 632
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(39)));
#line 632
c_rt_lib0move(&___nl__8, generator_c_priv0get_reg(___ref___0, ___nl__9));
#line 632
c_rt_lib0clear(&___nl__9);
#line 632
c_rt_lib0move(&___nl__7, c_rt_lib0array_mk(1, ___nl__8));
#line 632
c_rt_lib0clear(&___nl__8);
#line 632
c_rt_lib0move(&___nl__6, generator_c_priv0get_fun_lib(___nl__5, ___nl__7));
#line 632
c_rt_lib0clear(&___nl__7);
#line 633
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(233)));
#line 633
c_rt_lib0move(&___nl__7, generator_c_priv0get_assign(___ref___0, ___nl__8, ___nl__6));
#line 633
c_rt_lib0clear(&___nl__8);
#line 633
c_rt_lib0delete(generator_c_priv0print(___ref___0, ___nl__7));
#line 633
c_rt_lib0clear(&___nl__7);
#line 633
c_rt_lib0clear(&___nl__5);
#line 633
c_rt_lib0clear(&___nl__6);
#line 633
c_rt_lib0clear(&___nl__4);
#line 634
goto label_1;
#line 634
label_7:
#line 634
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(219)));
#line 635
c_rt_lib0move(&___nl__6, generator_c_priv0get_bin_ops());
#line 635
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(401)));
#line 635
c_rt_lib0move(&___nl__5, hash0get_value(___nl__6, ___nl__7));
#line 635
c_rt_lib0clear(&___nl__7);
#line 635
c_rt_lib0clear(&___nl__6);
#line 636
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(233)));
#line 636
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(235)));
#line 636
c_rt_lib0move(&___nl__6, c_rt_lib0eq(___nl__6, ___nl__8));
#line 636
c_rt_lib0clear(&___nl__8);
#line 636
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__6));
#line 636
if(c_rt_lib0check_true_native(___nl__7)){ goto label_31;}
#line 636
c_rt_lib0move(&___nl__8, generator_c_priv0get_bin_ops_mod());
#line 636
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(401)));
#line 636
c_rt_lib0move(&___nl__6, hash0has_key(___nl__8, ___nl__9));
#line 636
c_rt_lib0clear(&___nl__9);
#line 636
c_rt_lib0clear(&___nl__8);
#line 636
label_31:
#line 636
c_rt_lib0clear(&___nl__7);
#line 636
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 636
if(c_rt_lib0check_true_native(___nl__6)){ goto label_30;}
#line 637
c_rt_lib0move(&___nl__8, generator_c_priv0get_bin_ops_mod());
#line 637
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(401)));
#line 637
c_rt_lib0move(&___nl__7, hash0get_value(___nl__8, ___nl__9));
#line 637
c_rt_lib0clear(&___nl__9);
#line 637
c_rt_lib0clear(&___nl__8);
#line 637
c_rt_lib0copy(&___nl__5, ___nl__7);
#line 637
c_rt_lib0clear(&___nl__7);
#line 638
goto label_30;
#line 638
label_30:
#line 638
c_rt_lib0clear(&___nl__6);
#line 639
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(235)));
#line 639
c_rt_lib0move(&___nl__8, generator_c_priv0get_reg(___ref___0, ___nl__9));
#line 639
c_rt_lib0clear(&___nl__9);
#line 639
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(236)));
#line 639
c_rt_lib0move(&___nl__9, generator_c_priv0get_reg(___ref___0, ___nl__10));
#line 639
c_rt_lib0clear(&___nl__10);
#line 639
c_rt_lib0move(&___nl__7, c_rt_lib0array_mk(2, ___nl__8, ___nl__9));
#line 639
c_rt_lib0clear(&___nl__8);
#line 639
c_rt_lib0clear(&___nl__9);
#line 639
c_rt_lib0move(&___nl__6, generator_c_priv0get_fun_lib(___nl__5, ___nl__7));
#line 639
c_rt_lib0clear(&___nl__7);
#line 640
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(233)));
#line 640
c_rt_lib0move(&___nl__7, generator_c_priv0get_assign(___ref___0, ___nl__8, ___nl__6));
#line 640
c_rt_lib0clear(&___nl__8);
#line 640
c_rt_lib0delete(generator_c_priv0print(___ref___0, ___nl__7));
#line 640
c_rt_lib0clear(&___nl__7);
#line 640
c_rt_lib0clear(&___nl__5);
#line 640
c_rt_lib0clear(&___nl__6);
#line 640
c_rt_lib0clear(&___nl__4);
#line 641
goto label_1;
#line 641
label_8:
#line 641
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(220)));
#line 642
c_rt_lib0move(&___nl__6,___get_global_const(402));
#line 642
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(39)));
#line 642
c_rt_lib0move(&___nl__8, generator_c_priv0get_reg(___ref___0, ___nl__9));
#line 642
c_rt_lib0clear(&___nl__9);
#line 642
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(72)));
#line 642
c_rt_lib0move(&___nl__9, generator_c_priv0get_const_sim(___ref___0, ___nl__10));
#line 642
c_rt_lib0clear(&___nl__10);
#line 642
c_rt_lib0move(&___nl__7, c_rt_lib0array_mk(2, ___nl__8, ___nl__9));
#line 642
c_rt_lib0clear(&___nl__8);
#line 642
c_rt_lib0clear(&___nl__9);
#line 642
c_rt_lib0move(&___nl__5, generator_c_priv0get_fun_lib(___nl__6, ___nl__7));
#line 642
c_rt_lib0clear(&___nl__7);
#line 642
c_rt_lib0clear(&___nl__6);
#line 643
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(233)));
#line 643
c_rt_lib0move(&___nl__6, generator_c_priv0get_assign(___ref___0, ___nl__7, ___nl__5));
#line 643
c_rt_lib0clear(&___nl__7);
#line 643
c_rt_lib0delete(generator_c_priv0print(___ref___0, ___nl__6));
#line 643
c_rt_lib0clear(&___nl__6);
#line 643
c_rt_lib0clear(&___nl__5);
#line 643
c_rt_lib0clear(&___nl__4);
#line 644
goto label_1;
#line 644
label_9:
#line 644
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(221)));
#line 645
c_rt_lib0move(&___nl__6,___get_global_const(403));
#line 645
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(39)));
#line 645
c_rt_lib0move(&___nl__8, generator_c_priv0get_reg(___ref___0, ___nl__9));
#line 645
c_rt_lib0clear(&___nl__9);
#line 645
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(72)));
#line 645
c_rt_lib0move(&___nl__9, generator_c_priv0get_const_sim(___ref___0, ___nl__10));
#line 645
c_rt_lib0clear(&___nl__10);
#line 645
c_rt_lib0move(&___nl__7, c_rt_lib0array_mk(2, ___nl__8, ___nl__9));
#line 645
c_rt_lib0clear(&___nl__8);
#line 645
c_rt_lib0clear(&___nl__9);
#line 645
c_rt_lib0move(&___nl__5, generator_c_priv0get_fun_lib(___nl__6, ___nl__7));
#line 645
c_rt_lib0clear(&___nl__7);
#line 645
c_rt_lib0clear(&___nl__6);
#line 646
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(233)));
#line 646
c_rt_lib0move(&___nl__6, generator_c_priv0get_assign(___ref___0, ___nl__7, ___nl__5));
#line 646
c_rt_lib0clear(&___nl__7);
#line 646
c_rt_lib0delete(generator_c_priv0print(___ref___0, ___nl__6));
#line 646
c_rt_lib0clear(&___nl__6);
#line 646
c_rt_lib0clear(&___nl__5);
#line 646
c_rt_lib0clear(&___nl__4);
#line 647
goto label_1;
#line 647
label_10:
#line 647
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(210)));
#line 648
c_rt_lib0delete(generator_c_priv0move_register_to_ref_args(___ref___0));
#line 649
c_rt_lib0move(&___nl__5,___get_global_const(348));
#line 649
c_rt_lib0delete(generator_c_priv0print(___ref___0, ___nl__5));
#line 649
c_rt_lib0clear(&___nl__5);
#line 650
c_rt_lib0move(&___nl__5, c_rt_lib0priv_is(___nl__4, ___get_global_const(234)));
#line 650
if(c_rt_lib0check_true_native(___nl__5)){ goto label_33;}
#line 652
c_rt_lib0move(&___nl__5, c_rt_lib0priv_is(___nl__4, ___get_global_const(211)));
#line 652
if(c_rt_lib0check_true_native(___nl__5)){ goto label_34;}
#line 652
c_rt_lib0move(&___nl__5,___get_global_const(74));
#line 652
c_rt_lib0move(&___nl__5, c_rt_lib0array_mk(2, ___nl__5, ___nl__4));
#line 652
nl_die_arg(___nl__5);
#line 650
label_33:
#line 650
c_rt_lib0move(&___nl__6, c_rt_lib0priv_as(___nl__4, ___get_global_const(234)));
#line 651
c_rt_lib0move(&___nl__7, generator_c_priv0get_reg(___ref___0, ___nl__6));
#line 651
c_rt_lib0delete(generator_c_priv0print(___ref___0, ___nl__7));
#line 651
c_rt_lib0clear(&___nl__7);
#line 651
c_rt_lib0clear(&___nl__6);
#line 652
goto label_32;
#line 652
label_34:
#line 653
c_rt_lib0move(&___nl__6,___get_global_const(404));
#line 653
c_rt_lib0delete(generator_c_priv0print(___ref___0, ___nl__6));
#line 653
c_rt_lib0clear(&___nl__6);
#line 654
goto label_32;
#line 654
label_32:
#line 654
c_rt_lib0clear(&___nl__5);
#line 654
c_rt_lib0clear(&___nl__4);
#line 655
goto label_1;
#line 655
label_11:
#line 655
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(229)));
#line 656
c_rt_lib0move(&___nl__5,___get_global_const(405));
#line 656
c_rt_lib0move(&___nl__6, generator_c_priv0get_reg(___ref___0, ___nl__4));
#line 656
c_rt_lib0move(&___nl__5, c_rt_lib0concat_add(___nl__5, ___nl__6));
#line 656
c_rt_lib0clear(&___nl__6);
#line 656
c_rt_lib0move(&___nl__6,___get_global_const(176));
#line 656
c_rt_lib0move(&___nl__5, c_rt_lib0concat_add(___nl__5, ___nl__6));
#line 656
c_rt_lib0clear(&___nl__6);
#line 656
c_rt_lib0delete(generator_c_priv0print(___ref___0, ___nl__5));
#line 656
c_rt_lib0clear(&___nl__5);
#line 656
c_rt_lib0clear(&___nl__4);
#line 657
goto label_1;
#line 657
label_12:
#line 657
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(222)));
#line 658
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(233)));
#line 658
c_rt_lib0move(&___nl__6,___get_global_const(0));
#line 658
c_rt_lib0move(&___nl__5, c_rt_lib0eq(___nl__5, ___nl__6));
#line 658
c_rt_lib0clear(&___nl__6);
#line 658
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 658
if(c_rt_lib0check_true_native(___nl__5)){ goto label_36;}
#line 658
c_rt_lib0clear(&___nl__1);
#line 658
c_rt_lib0clear(&___nl__2);
#line 658
c_rt_lib0clear(&___nl__3);
#line 658
c_rt_lib0clear(&___nl__4);
#line 658
c_rt_lib0clear(&___nl__5);
#line 658
return NULL;
#line 658
goto label_36;
#line 658
label_36:
#line 658
c_rt_lib0clear(&___nl__5);
#line 659
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(233)));
#line 659
c_rt_lib0move(&___nl__6, generator_c_priv0get_reg_ref(___ref___0, ___nl__7));
#line 659
c_rt_lib0clear(&___nl__7);
#line 659
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(39)));
#line 659
c_rt_lib0move(&___nl__7, generator_c_priv0get_reg(___ref___0, ___nl__8));
#line 659
c_rt_lib0clear(&___nl__8);
#line 659
c_rt_lib0move(&___nl__5, c_rt_lib0array_mk(2, ___nl__6, ___nl__7));
#line 659
c_rt_lib0clear(&___nl__6);
#line 659
c_rt_lib0clear(&___nl__7);
#line 660
c_rt_lib0move(&___nl__7,___get_global_const(320));
#line 660
c_rt_lib0move(&___nl__6, generator_c_priv0get_fun_lib(___nl__7, ___nl__5));
#line 660
c_rt_lib0clear(&___nl__7);
#line 660
c_rt_lib0delete(generator_c_priv0print(___ref___0, ___nl__6));
#line 660
c_rt_lib0clear(&___nl__6);
#line 660
c_rt_lib0clear(&___nl__5);
#line 660
c_rt_lib0clear(&___nl__4);
#line 661
goto label_1;
#line 661
label_13:
#line 661
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(223)));
#line 662
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(233)));
#line 662
c_rt_lib0move(&___nl__6,___get_global_const(0));
#line 662
c_rt_lib0move(&___nl__5, c_rt_lib0eq(___nl__5, ___nl__6));
#line 662
c_rt_lib0clear(&___nl__6);
#line 662
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 662
if(c_rt_lib0check_true_native(___nl__5)){ goto label_38;}
#line 662
c_rt_lib0clear(&___nl__1);
#line 662
c_rt_lib0clear(&___nl__2);
#line 662
c_rt_lib0clear(&___nl__3);
#line 662
c_rt_lib0clear(&___nl__4);
#line 662
c_rt_lib0clear(&___nl__5);
#line 662
return NULL;
#line 662
goto label_38;
#line 662
label_38:
#line 662
c_rt_lib0clear(&___nl__5);
#line 663
c_rt_lib0move(&___nl__6,___get_global_const(222));
#line 663
c_rt_lib0move(&___nl__5, generator_c_priv0get_lib_fun(___nl__6));
#line 663
c_rt_lib0clear(&___nl__6);
#line 663
c_rt_lib0move(&___nl__6,___get_global_const(322));
#line 663
c_rt_lib0move(&___nl__5, c_rt_lib0concat_add(___nl__5, ___nl__6));
#line 663
c_rt_lib0clear(&___nl__6);
#line 663
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(233)));
#line 663
c_rt_lib0move(&___nl__6, generator_c_priv0get_reg_ref(___ref___0, ___nl__7));
#line 663
c_rt_lib0clear(&___nl__7);
#line 663
c_rt_lib0move(&___nl__5, c_rt_lib0concat_add(___nl__5, ___nl__6));
#line 663
c_rt_lib0clear(&___nl__6);
#line 663
c_rt_lib0move(&___nl__6,___get_global_const(172));
#line 663
c_rt_lib0move(&___nl__5, c_rt_lib0concat_add(___nl__5, ___nl__6));
#line 663
c_rt_lib0clear(&___nl__6);
#line 663
c_rt_lib0delete(generator_c_priv0print(___ref___0, ___nl__5));
#line 663
c_rt_lib0clear(&___nl__5);
#line 664
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(234)));
#line 664
c_rt_lib0delete(generator_c_priv0generate_imm(___ref___0, ___nl__5));
#line 664
c_rt_lib0clear(&___nl__5);
#line 665
c_rt_lib0move(&___nl__5,___get_global_const(176));
#line 665
c_rt_lib0delete(generator_c_priv0print(___ref___0, ___nl__5));
#line 665
c_rt_lib0clear(&___nl__5);
#line 665
c_rt_lib0clear(&___nl__4);
#line 666
goto label_1;
#line 666
label_14:
#line 666
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(224)));
#line 667
c_rt_lib0move(&___nl__6,___get_global_const(406));
#line 667
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(39)));
#line 667
c_rt_lib0move(&___nl__8, generator_c_priv0get_reg(___ref___0, ___nl__9));
#line 667
c_rt_lib0clear(&___nl__9);
#line 667
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(237)));
#line 667
c_rt_lib0move(&___nl__9, generator_c_priv0get_reg(___ref___0, ___nl__10));
#line 667
c_rt_lib0clear(&___nl__10);
#line 667
c_rt_lib0move(&___nl__7, c_rt_lib0array_mk(2, ___nl__8, ___nl__9));
#line 667
c_rt_lib0clear(&___nl__8);
#line 667
c_rt_lib0clear(&___nl__9);
#line 667
c_rt_lib0move(&___nl__5, generator_c_priv0get_fun_lib(___nl__6, ___nl__7));
#line 667
c_rt_lib0clear(&___nl__7);
#line 667
c_rt_lib0clear(&___nl__6);
#line 668
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(233)));
#line 668
c_rt_lib0move(&___nl__6, generator_c_priv0get_assign(___ref___0, ___nl__7, ___nl__5));
#line 668
c_rt_lib0clear(&___nl__7);
#line 668
c_rt_lib0delete(generator_c_priv0print(___ref___0, ___nl__6));
#line 668
c_rt_lib0clear(&___nl__6);
#line 668
c_rt_lib0clear(&___nl__5);
#line 668
c_rt_lib0clear(&___nl__4);
#line 669
goto label_1;
#line 669
label_15:
#line 669
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(225)));
#line 670
c_rt_lib0move(&___nl__6,___get_global_const(407));
#line 670
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(39)));
#line 670
c_rt_lib0move(&___nl__8, generator_c_priv0get_reg_ref(___ref___0, ___nl__9));
#line 670
c_rt_lib0clear(&___nl__9);
#line 670
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(237)));
#line 670
c_rt_lib0move(&___nl__9, generator_c_priv0get_reg(___ref___0, ___nl__10));
#line 670
c_rt_lib0clear(&___nl__10);
#line 670
c_rt_lib0move(&___nl__11, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(234)));
#line 670
c_rt_lib0move(&___nl__10, generator_c_priv0get_reg(___ref___0, ___nl__11));
#line 670
c_rt_lib0clear(&___nl__11);
#line 670
c_rt_lib0move(&___nl__7, c_rt_lib0array_mk(3, ___nl__8, ___nl__9, ___nl__10));
#line 670
c_rt_lib0clear(&___nl__8);
#line 670
c_rt_lib0clear(&___nl__9);
#line 670
c_rt_lib0clear(&___nl__10);
#line 670
c_rt_lib0move(&___nl__5, generator_c_priv0get_fun_lib(___nl__6, ___nl__7));
#line 670
c_rt_lib0clear(&___nl__7);
#line 670
c_rt_lib0clear(&___nl__6);
#line 670
c_rt_lib0delete(generator_c_priv0print(___ref___0, ___nl__5));
#line 670
c_rt_lib0clear(&___nl__5);
#line 670
c_rt_lib0clear(&___nl__4);
#line 672
goto label_1;
#line 672
label_16:
#line 672
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(226)));
#line 673
c_rt_lib0move(&___nl__6,___get_global_const(408));
#line 673
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(39)));
#line 673
c_rt_lib0move(&___nl__8, generator_c_priv0get_reg(___ref___0, ___nl__9));
#line 673
c_rt_lib0clear(&___nl__9);
#line 673
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(279)));
#line 673
c_rt_lib0move(&___nl__9, generator_c_priv0get_const_sim(___ref___0, ___nl__10));
#line 673
c_rt_lib0clear(&___nl__10);
#line 673
c_rt_lib0move(&___nl__7, c_rt_lib0array_mk(2, ___nl__8, ___nl__9));
#line 673
c_rt_lib0clear(&___nl__8);
#line 673
c_rt_lib0clear(&___nl__9);
#line 673
c_rt_lib0move(&___nl__5, generator_c_priv0get_fun_lib(___nl__6, ___nl__7));
#line 673
c_rt_lib0clear(&___nl__7);
#line 673
c_rt_lib0clear(&___nl__6);
#line 675
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(233)));
#line 675
c_rt_lib0move(&___nl__6, generator_c_priv0get_assign(___ref___0, ___nl__7, ___nl__5));
#line 675
c_rt_lib0clear(&___nl__7);
#line 675
c_rt_lib0delete(generator_c_priv0print(___ref___0, ___nl__6));
#line 675
c_rt_lib0clear(&___nl__6);
#line 675
c_rt_lib0clear(&___nl__5);
#line 675
c_rt_lib0clear(&___nl__4);
#line 676
goto label_1;
#line 676
label_17:
#line 676
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(227)));
#line 677
c_rt_lib0move(&___nl__6,___get_global_const(409));
#line 677
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(39)));
#line 677
c_rt_lib0move(&___nl__8, generator_c_priv0get_reg_ref(___ref___0, ___nl__9));
#line 677
c_rt_lib0clear(&___nl__9);
#line 677
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(279)));
#line 677
c_rt_lib0move(&___nl__9, generator_c_priv0get_const_sim(___ref___0, ___nl__10));
#line 677
c_rt_lib0clear(&___nl__10);
#line 677
c_rt_lib0move(&___nl__11, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(234)));
#line 677
c_rt_lib0move(&___nl__10, generator_c_priv0get_reg(___ref___0, ___nl__11));
#line 677
c_rt_lib0clear(&___nl__11);
#line 677
c_rt_lib0move(&___nl__7, c_rt_lib0array_mk(3, ___nl__8, ___nl__9, ___nl__10));
#line 677
c_rt_lib0clear(&___nl__8);
#line 677
c_rt_lib0clear(&___nl__9);
#line 677
c_rt_lib0clear(&___nl__10);
#line 677
c_rt_lib0move(&___nl__5, generator_c_priv0get_fun_lib(___nl__6, ___nl__7));
#line 677
c_rt_lib0clear(&___nl__7);
#line 677
c_rt_lib0clear(&___nl__6);
#line 677
c_rt_lib0delete(generator_c_priv0print(___ref___0, ___nl__5));
#line 677
c_rt_lib0clear(&___nl__5);
#line 677
c_rt_lib0clear(&___nl__4);
#line 679
goto label_1;
#line 679
label_18:
#line 679
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(228)));
#line 681
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(39)));
#line 681
c_rt_lib0move(&___nl__6, c_rt_lib0priv_is(___nl__6, ___get_global_const(211)));
#line 681
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__6));
#line 681
if(c_rt_lib0check_true_native(___nl__7)){ goto label_41;}
#line 681
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(76)));
#line 681
c_rt_lib0move(&___nl__8,___get_global_const(6));
#line 681
c_rt_lib0move(&___nl__6, c_rt_lib0eq(___nl__6, ___nl__8));
#line 681
c_rt_lib0clear(&___nl__8);
#line 681
label_41:
#line 681
c_rt_lib0clear(&___nl__7);
#line 681
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 681
if(c_rt_lib0check_true_native(___nl__6)){ goto label_40;}
#line 682
c_rt_lib0move(&___nl__8,___get_global_const(410));
#line 682
c_rt_lib0move(&___nl__9, c_rt_lib0array_mk(0));
#line 682
c_rt_lib0move(&___nl__7, generator_c_priv0get_fun_lib(___nl__8, ___nl__9));
#line 682
c_rt_lib0clear(&___nl__9);
#line 682
c_rt_lib0clear(&___nl__8);
#line 682
c_rt_lib0copy(&___nl__5, ___nl__7);
#line 682
c_rt_lib0clear(&___nl__7);
#line 683
goto label_39;
#line 683
label_40:
#line 683
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(39)));
#line 683
c_rt_lib0move(&___nl__6, c_rt_lib0priv_is(___nl__6, ___get_global_const(211)));
#line 683
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__6));
#line 683
if(c_rt_lib0check_true_native(___nl__7)){ goto label_43;}
#line 683
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(76)));
#line 683
c_rt_lib0move(&___nl__8,___get_global_const(7));
#line 683
c_rt_lib0move(&___nl__6, c_rt_lib0eq(___nl__6, ___nl__8));
#line 683
c_rt_lib0clear(&___nl__8);
#line 683
label_43:
#line 683
c_rt_lib0clear(&___nl__7);
#line 683
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 683
if(c_rt_lib0check_true_native(___nl__6)){ goto label_42;}
#line 684
c_rt_lib0move(&___nl__8,___get_global_const(411));
#line 684
c_rt_lib0move(&___nl__9, c_rt_lib0array_mk(0));
#line 684
c_rt_lib0move(&___nl__7, generator_c_priv0get_fun_lib(___nl__8, ___nl__9));
#line 684
c_rt_lib0clear(&___nl__9);
#line 684
c_rt_lib0clear(&___nl__8);
#line 684
c_rt_lib0copy(&___nl__5, ___nl__7);
#line 684
c_rt_lib0clear(&___nl__7);
#line 685
goto label_39;
#line 685
label_42:
#line 686
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(39)));
#line 686
c_rt_lib0move(&___nl__8, c_rt_lib0priv_is(___nl__7, ___get_global_const(238)));
#line 686
if(c_rt_lib0check_true_native(___nl__8)){ goto label_45;}
#line 688
c_rt_lib0move(&___nl__8, c_rt_lib0priv_is(___nl__7, ___get_global_const(211)));
#line 688
if(c_rt_lib0check_true_native(___nl__8)){ goto label_46;}
#line 688
c_rt_lib0move(&___nl__8,___get_global_const(74));
#line 688
c_rt_lib0move(&___nl__8, c_rt_lib0array_mk(2, ___nl__8, ___nl__7));
#line 688
nl_die_arg(___nl__8);
#line 686
label_45:
#line 686
c_rt_lib0move(&___nl__9, c_rt_lib0priv_as(___nl__7, ___get_global_const(238)));
#line 687
c_rt_lib0move(&___nl__11,___get_global_const(412));
#line 687
c_rt_lib0move(&___nl__14, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(76)));
#line 687
c_rt_lib0move(&___nl__13, generator_c_priv0get_const_sim(___ref___0, ___nl__14));
#line 687
c_rt_lib0clear(&___nl__14);
#line 687
c_rt_lib0move(&___nl__14, generator_c_priv0get_reg(___ref___0, ___nl__9));
#line 687
c_rt_lib0move(&___nl__12, c_rt_lib0array_mk(2, ___nl__13, ___nl__14));
#line 687
c_rt_lib0clear(&___nl__13);
#line 687
c_rt_lib0clear(&___nl__14);
#line 687
c_rt_lib0move(&___nl__10, generator_c_priv0get_fun_lib(___nl__11, ___nl__12));
#line 687
c_rt_lib0clear(&___nl__12);
#line 687
c_rt_lib0clear(&___nl__11);
#line 687
c_rt_lib0copy(&___nl__5, ___nl__10);
#line 687
c_rt_lib0clear(&___nl__10);
#line 687
c_rt_lib0clear(&___nl__9);
#line 688
goto label_44;
#line 688
label_46:
#line 689
c_rt_lib0move(&___nl__10,___get_global_const(393));
#line 689
c_rt_lib0move(&___nl__13, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(76)));
#line 689
c_rt_lib0move(&___nl__12, generator_c_priv0get_const_sim(___ref___0, ___nl__13));
#line 689
c_rt_lib0clear(&___nl__13);
#line 689
c_rt_lib0move(&___nl__11, c_rt_lib0array_mk(1, ___nl__12));
#line 689
c_rt_lib0clear(&___nl__12);
#line 689
c_rt_lib0move(&___nl__9, generator_c_priv0get_fun_lib(___nl__10, ___nl__11));
#line 689
c_rt_lib0clear(&___nl__11);
#line 689
c_rt_lib0clear(&___nl__10);
#line 689
c_rt_lib0copy(&___nl__5, ___nl__9);
#line 689
c_rt_lib0clear(&___nl__9);
#line 690
goto label_44;
#line 690
label_44:
#line 690
c_rt_lib0clear(&___nl__7);
#line 690
c_rt_lib0clear(&___nl__8);
#line 691
goto label_39;
#line 691
label_39:
#line 691
c_rt_lib0clear(&___nl__6);
#line 692
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(233)));
#line 692
c_rt_lib0move(&___nl__6, generator_c_priv0get_assign(___ref___0, ___nl__7, ___nl__5));
#line 692
c_rt_lib0clear(&___nl__7);
#line 692
c_rt_lib0delete(generator_c_priv0print(___ref___0, ___nl__6));
#line 692
c_rt_lib0clear(&___nl__6);
#line 692
c_rt_lib0clear(&___nl__5);
#line 692
c_rt_lib0clear(&___nl__4);
#line 693
goto label_1;
#line 693
label_19:
#line 693
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(230)));
#line 694
c_rt_lib0move(&___nl__5,___get_global_const(371));
#line 694
c_rt_lib0move(&___nl__5, c_rt_lib0concat_new(___nl__4, ___nl__5));
#line 694
c_rt_lib0move(&___nl__6, string0lf());
#line 694
c_rt_lib0move(&___nl__5, c_rt_lib0concat_add(___nl__5, ___nl__6));
#line 694
c_rt_lib0clear(&___nl__6);
#line 694
c_rt_lib0delete(generator_c_priv0print(___ref___0, ___nl__5));
#line 694
c_rt_lib0clear(&___nl__5);
#line 695
c_rt_lib0clear(&___nl__1);
#line 695
c_rt_lib0clear(&___nl__2);
#line 695
c_rt_lib0clear(&___nl__3);
#line 695
c_rt_lib0clear(&___nl__4);
#line 695
return NULL;
#line 695
c_rt_lib0clear(&___nl__4);
#line 696
goto label_1;
#line 696
label_20:
#line 696
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(231)));
#line 697
c_rt_lib0move(&___nl__5,___get_global_const(413));
#line 697
c_rt_lib0delete(generator_c_priv0print(___ref___0, ___nl__5));
#line 697
c_rt_lib0clear(&___nl__5);
#line 698
c_rt_lib0move(&___nl__6,___get_global_const(414));
#line 698
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(39)));
#line 698
c_rt_lib0move(&___nl__8, generator_c_priv0get_reg(___ref___0, ___nl__9));
#line 698
c_rt_lib0clear(&___nl__9);
#line 698
c_rt_lib0move(&___nl__7, c_rt_lib0array_mk(1, ___nl__8));
#line 698
c_rt_lib0clear(&___nl__8);
#line 698
c_rt_lib0move(&___nl__5, generator_c_priv0get_fun_lib(___nl__6, ___nl__7));
#line 698
c_rt_lib0clear(&___nl__7);
#line 698
c_rt_lib0clear(&___nl__6);
#line 698
c_rt_lib0delete(generator_c_priv0print(___ref___0, ___nl__5));
#line 698
c_rt_lib0clear(&___nl__5);
#line 699
c_rt_lib0move(&___nl__5,___get_global_const(415));
#line 699
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(233)));
#line 699
c_rt_lib0move(&___nl__5, c_rt_lib0concat_add(___nl__5, ___nl__6));
#line 699
c_rt_lib0clear(&___nl__6);
#line 699
c_rt_lib0move(&___nl__6,___get_global_const(353));
#line 699
c_rt_lib0move(&___nl__5, c_rt_lib0concat_add(___nl__5, ___nl__6));
#line 699
c_rt_lib0clear(&___nl__6);
#line 699
c_rt_lib0move(&___nl__6, string0lf());
#line 699
c_rt_lib0move(&___nl__5, c_rt_lib0concat_add(___nl__5, ___nl__6));
#line 699
c_rt_lib0clear(&___nl__6);
#line 699
c_rt_lib0delete(generator_c_priv0print(___ref___0, ___nl__5));
#line 699
c_rt_lib0clear(&___nl__5);
#line 700
c_rt_lib0clear(&___nl__1);
#line 700
c_rt_lib0clear(&___nl__2);
#line 700
c_rt_lib0clear(&___nl__3);
#line 700
c_rt_lib0clear(&___nl__4);
#line 700
return NULL;
#line 700
c_rt_lib0clear(&___nl__4);
#line 701
goto label_1;
#line 701
label_21:
#line 701
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(232)));
#line 702
c_rt_lib0move(&___nl__5,___get_global_const(416));
#line 702
c_rt_lib0move(&___nl__5, c_rt_lib0concat_add(___nl__5, ___nl__4));
#line 702
c_rt_lib0delete(generator_c_priv0print(___ref___0, ___nl__5));
#line 702
c_rt_lib0clear(&___nl__5);
#line 702
c_rt_lib0clear(&___nl__4);
#line 703
goto label_1;
#line 703
label_22:
#line 703
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(195)));
#line 704
c_rt_lib0move(&___nl__6,___get_global_const(195));
#line 704
c_rt_lib0move(&___nl__8, generator_c_priv0get_reg_ref(___ref___0, ___nl__4));
#line 704
c_rt_lib0move(&___nl__7, c_rt_lib0array_mk(1, ___nl__8));
#line 704
c_rt_lib0clear(&___nl__8);
#line 704
c_rt_lib0move(&___nl__5, generator_c_priv0get_fun_lib(___nl__6, ___nl__7));
#line 704
c_rt_lib0clear(&___nl__7);
#line 704
c_rt_lib0clear(&___nl__6);
#line 704
c_rt_lib0delete(generator_c_priv0print(___ref___0, ___nl__5));
#line 704
c_rt_lib0clear(&___nl__5);
#line 704
c_rt_lib0clear(&___nl__4);
#line 705
goto label_1;
#line 705
label_1:
#line 705
c_rt_lib0clear(&___nl__2);
#line 705
c_rt_lib0clear(&___nl__3);
#line 706
c_rt_lib0move(&___nl__2,___get_global_const(311));
#line 706
c_rt_lib0move(&___nl__3, string0lf());
#line 706
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__3));
#line 706
c_rt_lib0clear(&___nl__3);
#line 706
c_rt_lib0delete(generator_c_priv0print(___ref___0, ___nl__2));
#line 706
c_rt_lib0clear(&___nl__2);
#line 706
c_rt_lib0clear(&___nl__1);
#line 706
return NULL;
}

ImmT generator_c_priv0get_assign(ImmT * ___ref___0,ImmT ___nl__1,ImmT ___nl__2) {
c_rt_lib0arg_val(___nl__1);
c_rt_lib0arg_val(___nl__2);
generator_c_priv0__const__init();
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
#line 710
c_rt_lib0move(&___nl__3,___get_global_const(0));
#line 710
c_rt_lib0move(&___nl__3, c_rt_lib0eq(___nl__1, ___nl__3));
#line 710
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 710
if(c_rt_lib0check_true_native(___nl__3)){ goto label_2;}
#line 711
c_rt_lib0move(&___nl__5,___get_global_const(128));
#line 711
c_rt_lib0move(&___nl__6, c_rt_lib0array_mk(1, ___nl__2));
#line 711
c_rt_lib0move(&___nl__4, generator_c_priv0get_fun_lib(___nl__5, ___nl__6));
#line 711
c_rt_lib0clear(&___nl__6);
#line 711
c_rt_lib0clear(&___nl__5);
#line 711
c_rt_lib0clear(&___nl__1);
#line 711
c_rt_lib0clear(&___nl__2);
#line 711
c_rt_lib0clear(&___nl__3);
#line 711
return ___nl__4;
#line 711
c_rt_lib0clear(&___nl__4);
#line 712
goto label_1;
#line 712
label_2:
#line 713
c_rt_lib0move(&___nl__5,___get_global_const(222));
#line 713
c_rt_lib0move(&___nl__7, generator_c_priv0get_reg_ref(___ref___0, ___nl__1));
#line 713
c_rt_lib0move(&___nl__6, c_rt_lib0array_mk(2, ___nl__7, ___nl__2));
#line 713
c_rt_lib0clear(&___nl__7);
#line 713
c_rt_lib0move(&___nl__4, generator_c_priv0get_fun_lib(___nl__5, ___nl__6));
#line 713
c_rt_lib0clear(&___nl__6);
#line 713
c_rt_lib0clear(&___nl__5);
#line 713
c_rt_lib0clear(&___nl__1);
#line 713
c_rt_lib0clear(&___nl__2);
#line 713
c_rt_lib0clear(&___nl__3);
#line 713
return ___nl__4;
#line 713
c_rt_lib0clear(&___nl__4);
#line 714
goto label_1;
#line 714
label_1:
#line 714
c_rt_lib0clear(&___nl__3);
#line 714
c_rt_lib0clear(&___nl__1);
#line 714
c_rt_lib0clear(&___nl__2);
#line 714
return NULL;
}

ImmT generator_c_priv0generate_call(ImmT * ___ref___0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__1);
generator_c_priv0__const__init();
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
ImmT ___nl__9 = NULL;
ImmT ___nl__10 = NULL;
#line 718
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(257)));
#line 718
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(385)));
#line 718
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(292)));
#line 718
c_rt_lib0move(&___nl__2, generator_c_priv0get_fun_name(___nl__3, ___nl__4, ___nl__5));
#line 718
c_rt_lib0clear(&___nl__5);
#line 718
c_rt_lib0clear(&___nl__4);
#line 718
c_rt_lib0clear(&___nl__3);
#line 718
c_rt_lib0move(&___nl__3,___get_global_const(322));
#line 718
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__3));
#line 718
c_rt_lib0clear(&___nl__3);
#line 719
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(73)));
#line 719
c_rt_lib0move(&___nl__3, array0len(___nl__4));
#line 719
c_rt_lib0clear(&___nl__4);
#line 719
c_rt_lib0move(&___nl__4,___get_global_const(1));
#line 719
c_rt_lib0move(&___nl__5,___get_global_const(2));
#line 719
label_3:
#line 719
c_rt_lib0move(&___nl__6, c_rt_lib0ge(___nl__4, ___nl__3));
#line 719
if(c_rt_lib0check_true_native(___nl__6)){ goto label_1;}
#line 720
c_rt_lib0move(&___nl__7,___get_global_const(1));
#line 720
c_rt_lib0move(&___nl__7, c_rt_lib0num_eq(___nl__7, ___nl__4));
#line 720
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 720
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 720
if(c_rt_lib0check_true_native(___nl__7)){ goto label_5;}
#line 720
c_rt_lib0move(&___nl__8,___get_global_const(188));
#line 720
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__8));
#line 720
c_rt_lib0clear(&___nl__8);
#line 720
goto label_5;
#line 720
label_5:
#line 720
c_rt_lib0clear(&___nl__7);
#line 721
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(73)));
#line 721
c_rt_lib0move(&___nl__7, c_rt_lib0array_get(___nl__7, ___nl__4));
#line 721
c_rt_lib0move(&___nl__8, c_rt_lib0priv_is(___nl__7, ___get_global_const(234)));
#line 721
if(c_rt_lib0check_true_native(___nl__8)){ goto label_7;}
#line 723
c_rt_lib0move(&___nl__8, c_rt_lib0priv_is(___nl__7, ___get_global_const(5)));
#line 723
if(c_rt_lib0check_true_native(___nl__8)){ goto label_8;}
#line 723
c_rt_lib0move(&___nl__8,___get_global_const(74));
#line 723
c_rt_lib0move(&___nl__8, c_rt_lib0array_mk(2, ___nl__8, ___nl__7));
#line 723
nl_die_arg(___nl__8);
#line 721
label_7:
#line 721
c_rt_lib0move(&___nl__9, c_rt_lib0priv_as(___nl__7, ___get_global_const(234)));
#line 722
c_rt_lib0move(&___nl__10, generator_c_priv0get_reg(___ref___0, ___nl__9));
#line 722
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__10));
#line 722
c_rt_lib0clear(&___nl__10);
#line 722
c_rt_lib0clear(&___nl__9);
#line 723
goto label_6;
#line 723
label_8:
#line 723
c_rt_lib0move(&___nl__9, c_rt_lib0priv_as(___nl__7, ___get_global_const(5)));
#line 724
c_rt_lib0move(&___nl__10, generator_c_priv0get_reg_ref(___ref___0, ___nl__9));
#line 724
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__10));
#line 724
c_rt_lib0clear(&___nl__10);
#line 724
c_rt_lib0clear(&___nl__9);
#line 725
goto label_6;
#line 725
label_6:
#line 725
c_rt_lib0clear(&___nl__7);
#line 725
c_rt_lib0clear(&___nl__8);
#line 726
c_rt_lib0move(&___nl__4, c_rt_lib0add_mod(___nl__4, ___nl__5));
#line 726
goto label_3;
#line 726
label_1:
#line 726
c_rt_lib0clear(&___nl__3);
#line 726
c_rt_lib0clear(&___nl__4);
#line 726
c_rt_lib0clear(&___nl__5);
#line 726
c_rt_lib0clear(&___nl__6);
#line 727
c_rt_lib0move(&___nl__3,___get_global_const(176));
#line 727
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__3));
#line 727
c_rt_lib0clear(&___nl__3);
#line 728
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(233)));
#line 728
c_rt_lib0move(&___nl__3, generator_c_priv0get_assign(___ref___0, ___nl__4, ___nl__2));
#line 728
c_rt_lib0clear(&___nl__4);
#line 728
c_rt_lib0delete(generator_c_priv0print(___ref___0, ___nl__3));
#line 728
c_rt_lib0clear(&___nl__3);
#line 728
c_rt_lib0clear(&___nl__2);
#line 728
c_rt_lib0clear(&___nl__1);
#line 728
return NULL;
}

ImmT generator_c_priv0create_sim(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
generator_c_priv0__const__init();
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
#line 732
c_rt_lib0move(&___nl__1, string_utils0is_integer(___nl__0));
#line 732
c_rt_lib0move(&___nl__1, c_rt_lib0not(___nl__1));
#line 732
if(c_rt_lib0check_true_native(___nl__1)){ goto label_2;}
#line 733
c_rt_lib0move(&___nl__3,___get_global_const(417));
#line 733
c_rt_lib0move(&___nl__2, generator_c_priv0get_lib_fun(___nl__3));
#line 733
c_rt_lib0clear(&___nl__3);
#line 733
c_rt_lib0move(&___nl__3,___get_global_const(322));
#line 733
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__3));
#line 733
c_rt_lib0clear(&___nl__3);
#line 733
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__0));
#line 733
c_rt_lib0move(&___nl__3,___get_global_const(176));
#line 733
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__3));
#line 733
c_rt_lib0clear(&___nl__3);
#line 733
c_rt_lib0clear(&___nl__0);
#line 733
c_rt_lib0clear(&___nl__1);
#line 733
return ___nl__2;
#line 733
c_rt_lib0clear(&___nl__2);
#line 734
goto label_1;
#line 734
label_2:
#line 734
c_rt_lib0move(&___nl__1, string_utils0is_float(___nl__0));
#line 734
c_rt_lib0move(&___nl__1, c_rt_lib0not(___nl__1));
#line 734
if(c_rt_lib0check_true_native(___nl__1)){ goto label_3;}
#line 735
c_rt_lib0move(&___nl__3,___get_global_const(418));
#line 735
c_rt_lib0move(&___nl__2, generator_c_priv0get_lib_fun(___nl__3));
#line 735
c_rt_lib0clear(&___nl__3);
#line 735
c_rt_lib0move(&___nl__3,___get_global_const(322));
#line 735
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__3));
#line 735
c_rt_lib0clear(&___nl__3);
#line 735
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__0));
#line 735
c_rt_lib0move(&___nl__3,___get_global_const(176));
#line 735
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__3));
#line 735
c_rt_lib0clear(&___nl__3);
#line 735
c_rt_lib0clear(&___nl__0);
#line 735
c_rt_lib0clear(&___nl__1);
#line 735
return ___nl__2;
#line 735
c_rt_lib0clear(&___nl__2);
#line 736
goto label_1;
#line 736
label_3:
#line 737
c_rt_lib0move(&___nl__2,___get_global_const(0));
#line 737
c_rt_lib0move(&___nl__2, c_rt_lib0concat_new(___nl__0, ___nl__2));
#line 738
c_rt_lib0move(&___nl__4,___get_global_const(80));
#line 738
c_rt_lib0move(&___nl__5,___get_global_const(181));
#line 738
c_rt_lib0move(&___nl__3, string0replace(___nl__2, ___nl__4, ___nl__5));
#line 738
c_rt_lib0clear(&___nl__5);
#line 738
c_rt_lib0clear(&___nl__4);
#line 738
c_rt_lib0copy(&___nl__2, ___nl__3);
#line 738
c_rt_lib0clear(&___nl__3);
#line 739
c_rt_lib0move(&___nl__4, string0lf());
#line 739
c_rt_lib0move(&___nl__5,___get_global_const(189));
#line 739
c_rt_lib0move(&___nl__3, string0replace(___nl__2, ___nl__4, ___nl__5));
#line 739
c_rt_lib0clear(&___nl__5);
#line 739
c_rt_lib0clear(&___nl__4);
#line 739
c_rt_lib0copy(&___nl__2, ___nl__3);
#line 739
c_rt_lib0clear(&___nl__3);
#line 740
c_rt_lib0move(&___nl__4, string0r());
#line 740
c_rt_lib0move(&___nl__5,___get_global_const(419));
#line 740
c_rt_lib0move(&___nl__3, string0replace(___nl__2, ___nl__4, ___nl__5));
#line 740
c_rt_lib0clear(&___nl__5);
#line 740
c_rt_lib0clear(&___nl__4);
#line 740
c_rt_lib0copy(&___nl__2, ___nl__3);
#line 740
c_rt_lib0clear(&___nl__3);
#line 741
c_rt_lib0move(&___nl__4, string0tab());
#line 741
c_rt_lib0move(&___nl__5,___get_global_const(420));
#line 741
c_rt_lib0move(&___nl__3, string0replace(___nl__2, ___nl__4, ___nl__5));
#line 741
c_rt_lib0clear(&___nl__5);
#line 741
c_rt_lib0clear(&___nl__4);
#line 741
c_rt_lib0copy(&___nl__2, ___nl__3);
#line 741
c_rt_lib0clear(&___nl__3);
#line 742
c_rt_lib0move(&___nl__4,___get_global_const(150));
#line 742
c_rt_lib0move(&___nl__5,___get_global_const(186));
#line 742
c_rt_lib0move(&___nl__3, string0replace(___nl__2, ___nl__4, ___nl__5));
#line 742
c_rt_lib0clear(&___nl__5);
#line 742
c_rt_lib0clear(&___nl__4);
#line 742
c_rt_lib0copy(&___nl__2, ___nl__3);
#line 742
c_rt_lib0clear(&___nl__3);
#line 743
c_rt_lib0move(&___nl__4,___get_global_const(421));
#line 743
c_rt_lib0move(&___nl__5,___get_global_const(422));
#line 743
c_rt_lib0move(&___nl__3, string0replace(___nl__2, ___nl__4, ___nl__5));
#line 743
c_rt_lib0clear(&___nl__5);
#line 743
c_rt_lib0clear(&___nl__4);
#line 743
c_rt_lib0copy(&___nl__2, ___nl__3);
#line 743
c_rt_lib0clear(&___nl__3);
#line 744
c_rt_lib0move(&___nl__4,___get_global_const(423));
#line 744
c_rt_lib0move(&___nl__3, generator_c_priv0get_lib_fun(___nl__4));
#line 744
c_rt_lib0clear(&___nl__4);
#line 744
c_rt_lib0move(&___nl__4,___get_global_const(424));
#line 744
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 744
c_rt_lib0clear(&___nl__4);
#line 744
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__2));
#line 744
c_rt_lib0move(&___nl__4,___get_global_const(425));
#line 744
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 744
c_rt_lib0clear(&___nl__4);
#line 744
c_rt_lib0clear(&___nl__0);
#line 744
c_rt_lib0clear(&___nl__1);
#line 744
c_rt_lib0clear(&___nl__2);
#line 744
return ___nl__3;
#line 744
c_rt_lib0clear(&___nl__3);
#line 744
c_rt_lib0clear(&___nl__2);
#line 745
goto label_1;
#line 745
label_1:
#line 745
c_rt_lib0clear(&___nl__1);
#line 745
c_rt_lib0clear(&___nl__0);
#line 745
return NULL;
}

ImmT generator_c_priv0create_sim_to_memory(ImmT ___nl__0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
generator_c_priv0__const__init();
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
#line 749
c_rt_lib0move(&___nl__2, string_utils0is_integer(___nl__0));
#line 749
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 749
if(c_rt_lib0check_true_native(___nl__2)){ goto label_2;}
#line 750
c_rt_lib0move(&___nl__4,___get_global_const(426));
#line 750
c_rt_lib0move(&___nl__3, generator_c_priv0get_lib_fun(___nl__4));
#line 750
c_rt_lib0clear(&___nl__4);
#line 750
c_rt_lib0move(&___nl__4,___get_global_const(322));
#line 750
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 750
c_rt_lib0clear(&___nl__4);
#line 750
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__0));
#line 750
c_rt_lib0move(&___nl__4,___get_global_const(172));
#line 750
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 750
c_rt_lib0clear(&___nl__4);
#line 750
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__1));
#line 750
c_rt_lib0move(&___nl__4,___get_global_const(176));
#line 750
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 750
c_rt_lib0clear(&___nl__4);
#line 750
c_rt_lib0clear(&___nl__0);
#line 750
c_rt_lib0clear(&___nl__1);
#line 750
c_rt_lib0clear(&___nl__2);
#line 750
return ___nl__3;
#line 750
c_rt_lib0clear(&___nl__3);
#line 751
goto label_1;
#line 751
label_2:
#line 751
c_rt_lib0move(&___nl__2, string_utils0is_float(___nl__0));
#line 751
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 751
if(c_rt_lib0check_true_native(___nl__2)){ goto label_3;}
#line 752
c_rt_lib0move(&___nl__4,___get_global_const(427));
#line 752
c_rt_lib0move(&___nl__3, generator_c_priv0get_lib_fun(___nl__4));
#line 752
c_rt_lib0clear(&___nl__4);
#line 752
c_rt_lib0move(&___nl__4,___get_global_const(322));
#line 752
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 752
c_rt_lib0clear(&___nl__4);
#line 752
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__0));
#line 752
c_rt_lib0move(&___nl__4,___get_global_const(172));
#line 752
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 752
c_rt_lib0clear(&___nl__4);
#line 752
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__1));
#line 752
c_rt_lib0move(&___nl__4,___get_global_const(176));
#line 752
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 752
c_rt_lib0clear(&___nl__4);
#line 752
c_rt_lib0clear(&___nl__0);
#line 752
c_rt_lib0clear(&___nl__1);
#line 752
c_rt_lib0clear(&___nl__2);
#line 752
return ___nl__3;
#line 752
c_rt_lib0clear(&___nl__3);
#line 753
goto label_1;
#line 753
label_3:
#line 754
c_rt_lib0move(&___nl__3,___get_global_const(0));
#line 754
c_rt_lib0move(&___nl__3, c_rt_lib0concat_new(___nl__0, ___nl__3));
#line 755
c_rt_lib0move(&___nl__5,___get_global_const(80));
#line 755
c_rt_lib0move(&___nl__6,___get_global_const(181));
#line 755
c_rt_lib0move(&___nl__4, string0replace(___nl__3, ___nl__5, ___nl__6));
#line 755
c_rt_lib0clear(&___nl__6);
#line 755
c_rt_lib0clear(&___nl__5);
#line 755
c_rt_lib0copy(&___nl__3, ___nl__4);
#line 755
c_rt_lib0clear(&___nl__4);
#line 756
c_rt_lib0move(&___nl__5, string0lf());
#line 756
c_rt_lib0move(&___nl__6,___get_global_const(189));
#line 756
c_rt_lib0move(&___nl__4, string0replace(___nl__3, ___nl__5, ___nl__6));
#line 756
c_rt_lib0clear(&___nl__6);
#line 756
c_rt_lib0clear(&___nl__5);
#line 756
c_rt_lib0copy(&___nl__3, ___nl__4);
#line 756
c_rt_lib0clear(&___nl__4);
#line 757
c_rt_lib0move(&___nl__5, string0r());
#line 757
c_rt_lib0move(&___nl__6,___get_global_const(419));
#line 757
c_rt_lib0move(&___nl__4, string0replace(___nl__3, ___nl__5, ___nl__6));
#line 757
c_rt_lib0clear(&___nl__6);
#line 757
c_rt_lib0clear(&___nl__5);
#line 757
c_rt_lib0copy(&___nl__3, ___nl__4);
#line 757
c_rt_lib0clear(&___nl__4);
#line 758
c_rt_lib0move(&___nl__5, string0tab());
#line 758
c_rt_lib0move(&___nl__6,___get_global_const(420));
#line 758
c_rt_lib0move(&___nl__4, string0replace(___nl__3, ___nl__5, ___nl__6));
#line 758
c_rt_lib0clear(&___nl__6);
#line 758
c_rt_lib0clear(&___nl__5);
#line 758
c_rt_lib0copy(&___nl__3, ___nl__4);
#line 758
c_rt_lib0clear(&___nl__4);
#line 759
c_rt_lib0move(&___nl__5,___get_global_const(150));
#line 759
c_rt_lib0move(&___nl__6,___get_global_const(186));
#line 759
c_rt_lib0move(&___nl__4, string0replace(___nl__3, ___nl__5, ___nl__6));
#line 759
c_rt_lib0clear(&___nl__6);
#line 759
c_rt_lib0clear(&___nl__5);
#line 759
c_rt_lib0copy(&___nl__3, ___nl__4);
#line 759
c_rt_lib0clear(&___nl__4);
#line 760
c_rt_lib0move(&___nl__5,___get_global_const(421));
#line 760
c_rt_lib0move(&___nl__6,___get_global_const(422));
#line 760
c_rt_lib0move(&___nl__4, string0replace(___nl__3, ___nl__5, ___nl__6));
#line 760
c_rt_lib0clear(&___nl__6);
#line 760
c_rt_lib0clear(&___nl__5);
#line 760
c_rt_lib0copy(&___nl__3, ___nl__4);
#line 760
c_rt_lib0clear(&___nl__4);
#line 761
c_rt_lib0move(&___nl__5,___get_global_const(428));
#line 761
c_rt_lib0move(&___nl__4, generator_c_priv0get_lib_fun(___nl__5));
#line 761
c_rt_lib0clear(&___nl__5);
#line 761
c_rt_lib0move(&___nl__5,___get_global_const(424));
#line 761
c_rt_lib0move(&___nl__4, c_rt_lib0concat_add(___nl__4, ___nl__5));
#line 761
c_rt_lib0clear(&___nl__5);
#line 761
c_rt_lib0move(&___nl__4, c_rt_lib0concat_add(___nl__4, ___nl__3));
#line 761
c_rt_lib0move(&___nl__5,___get_global_const(429));
#line 761
c_rt_lib0move(&___nl__4, c_rt_lib0concat_add(___nl__4, ___nl__5));
#line 761
c_rt_lib0clear(&___nl__5);
#line 761
c_rt_lib0move(&___nl__4, c_rt_lib0concat_add(___nl__4, ___nl__1));
#line 761
c_rt_lib0move(&___nl__5,___get_global_const(176));
#line 761
c_rt_lib0move(&___nl__4, c_rt_lib0concat_add(___nl__4, ___nl__5));
#line 761
c_rt_lib0clear(&___nl__5);
#line 761
c_rt_lib0clear(&___nl__0);
#line 761
c_rt_lib0clear(&___nl__1);
#line 761
c_rt_lib0clear(&___nl__2);
#line 761
c_rt_lib0clear(&___nl__3);
#line 761
return ___nl__4;
#line 761
c_rt_lib0clear(&___nl__4);
#line 761
c_rt_lib0clear(&___nl__3);
#line 762
goto label_1;
#line 762
label_1:
#line 762
c_rt_lib0clear(&___nl__2);
#line 762
c_rt_lib0clear(&___nl__0);
#line 762
c_rt_lib0clear(&___nl__1);
#line 762
return NULL;
}


static ImmT ___const__[17];
static int ___const_init__ = 1;
void generator_c_priv0__const__init(){
if(___const_init__) {
___const_init__ = 0;
__const__f = &___const__[16];


for(int i=0;i<16;++i) ___const__[i] = NULL;
c_rt_lib0register_const(___const__, 16);
}}
ImmT generator_c_priv0__const__sim(int __nr) {
ImmT ret = NULL;
c_rt_lib0copy(&ret, ___const__[__nr]);
return ret;
}
ImmT generator_c_priv0__const__sing(int __nr) {
if(___const__[__nr+0]==NULL) {
switch(__nr){
case 0:
	___const__[0] = generator_c_priv0get_bin_ops0cal();
	break;
case 1:
	___const__[1] = generator_c_priv0get_bin_ops_mod0cal();
	break;
case 2:
	___const__[2] = generator_c_priv0get_unary_ops0cal();
	break;
case 3:
	___const__[3] = generator_c_priv0gen_unary_ops0cal();
	break;
case 4:
	___const__[4] = generator_c_priv0gen_bin_ops0cal();
	break;
case 5:
	___const__[5] = generator_c_priv0gen_bin_ops_mod0cal();
	break;
case 6:
	___const__[6] = generator_c0const_dict0cal();
	break;
case 7:
	___const__[7] = generator_c0fun_args_t0cal();
	break;
case 8:
	___const__[8] = generator_c0const_t0cal();
	break;
case 9:
	___const__[9] = generator_c0global_const_t0cal();
	break;
case 10:
	___const__[10] = generator_c0state_t0cal();
	break;
case 11:
	___const__[11] = generator_c0get_empty_state0cal();
	break;
case 12:
	___const__[12] = generator_c_priv0arg_t0cal();
	break;
case 13:
	___const__[13] = generator_c0module_out_t0cal();
	break;
case 14:
	___const__[14] = generator_c0out_t0cal();
	break;
case 15:
	___const__[15] = generator_c_priv0get_cr0cal();
	break;
default:
	nl_die();
}}
ImmT ret = NULL;
c_rt_lib0copy(&ret, ___const__[__nr+0]);
return ret;
}
