
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
#include "generator_c.h"
#include "boolean_t.h"
#line 1 "generator_c.nl"

static ImmT *__const__f = NULL;
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
ImmT generator_c_priv0generate_global_const_files(ImmT * ___ref___0,ImmT ___nl__1);
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
ImmT generator_c_priv0get_func_pointer(ImmT * ___ref___0,ImmT ___nl__1,ImmT ___nl__2);
ImmT generator_c_priv0print_cmd(ImmT * ___ref___0,ImmT ___nl__1);
ImmT generator_c_priv0get_assign(ImmT * ___ref___0,ImmT ___nl__1,ImmT ___nl__2);
ImmT generator_c_priv0generate_call(ImmT * ___ref___0,ImmT ___nl__1);
ImmT generator_c_priv0create_sim(ImmT ___nl__0);
ImmT generator_c_priv0create_sim_to_memory(ImmT ___nl__0,ImmT ___nl__1);


ImmT generator_c_priv0get_bin_ops(){
return generator_c_priv0__const__sing(0);}
ImmT generator_c_priv0get_bin_ops0cal() {
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
#line 18
c_rt_lib0move(&___nl__1, generator_c_priv0gen_bin_ops());
#line 18
c_rt_lib0move(&___nl__0, singleton0sigleton_do_not_use_without_approval(___nl__1));
#line 18
c_rt_lib0clear(&___nl__1);
#line 18
return ___nl__0;
#line 18
c_rt_lib0clear(&___nl__0);
#line 18
return NULL;
}

ImmT generator_c_priv0get_bin_ops_mod(){
return generator_c_priv0__const__sing(1);}
ImmT generator_c_priv0get_bin_ops_mod0cal() {
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
#line 22
c_rt_lib0move(&___nl__1, generator_c_priv0gen_bin_ops_mod());
#line 22
c_rt_lib0move(&___nl__0, singleton0sigleton_do_not_use_without_approval(___nl__1));
#line 22
c_rt_lib0clear(&___nl__1);
#line 22
return ___nl__0;
#line 22
c_rt_lib0clear(&___nl__0);
#line 22
return NULL;
}

ImmT generator_c_priv0get_unary_ops(){
return generator_c_priv0__const__sing(2);}
ImmT generator_c_priv0get_unary_ops0cal() {
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
#line 26
c_rt_lib0move(&___nl__1, generator_c_priv0gen_unary_ops());
#line 26
c_rt_lib0move(&___nl__0, singleton0sigleton_do_not_use_without_approval(___nl__1));
#line 26
c_rt_lib0clear(&___nl__1);
#line 26
return ___nl__0;
#line 26
c_rt_lib0clear(&___nl__0);
#line 26
return NULL;
}

ImmT generator_c_priv0gen_unary_ops(){
return generator_c_priv0__const__sing(3);}
ImmT generator_c_priv0gen_unary_ops0cal() {
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
#line 30
c_rt_lib0move(&___nl__0, c_rt_lib0hash_mk(0));
#line 31
c_rt_lib0move(&___nl__1,___get_global_const(294));
#line 31
c_rt_lib0move(&___nl__2,___get_global_const(295));
#line 31
c_rt_lib0delete(hash0set_value(&___nl__0, ___nl__1, ___nl__2));
#line 31
c_rt_lib0clear(&___nl__2);
#line 31
c_rt_lib0clear(&___nl__1);
#line 32
c_rt_lib0move(&___nl__1,___get_global_const(296));
#line 32
c_rt_lib0move(&___nl__2,___get_global_const(297));
#line 32
c_rt_lib0delete(hash0set_value(&___nl__0, ___nl__1, ___nl__2));
#line 32
c_rt_lib0clear(&___nl__2);
#line 32
c_rt_lib0clear(&___nl__1);
#line 33
c_rt_lib0move(&___nl__1,___get_global_const(298));
#line 33
c_rt_lib0move(&___nl__2,___get_global_const(299));
#line 33
c_rt_lib0delete(hash0set_value(&___nl__0, ___nl__1, ___nl__2));
#line 33
c_rt_lib0clear(&___nl__2);
#line 33
c_rt_lib0clear(&___nl__1);
#line 34
return ___nl__0;
#line 34
c_rt_lib0clear(&___nl__0);
#line 34
return NULL;
}

ImmT generator_c_priv0gen_bin_ops(){
return generator_c_priv0__const__sing(4);}
ImmT generator_c_priv0gen_bin_ops0cal() {
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
#line 38
c_rt_lib0move(&___nl__0, c_rt_lib0hash_mk(0));
#line 39
c_rt_lib0move(&___nl__1,___get_global_const(300));
#line 39
c_rt_lib0move(&___nl__2,___get_global_const(300));
#line 39
c_rt_lib0delete(hash0set_value(&___nl__0, ___nl__1, ___nl__2));
#line 39
c_rt_lib0clear(&___nl__2);
#line 39
c_rt_lib0clear(&___nl__1);
#line 40
c_rt_lib0move(&___nl__1,___get_global_const(301));
#line 40
c_rt_lib0move(&___nl__2,___get_global_const(301));
#line 40
c_rt_lib0delete(hash0set_value(&___nl__0, ___nl__1, ___nl__2));
#line 40
c_rt_lib0clear(&___nl__2);
#line 40
c_rt_lib0clear(&___nl__1);
#line 41
c_rt_lib0move(&___nl__1,___get_global_const(298));
#line 41
c_rt_lib0move(&___nl__2,___get_global_const(302));
#line 41
c_rt_lib0delete(hash0set_value(&___nl__0, ___nl__1, ___nl__2));
#line 41
c_rt_lib0clear(&___nl__2);
#line 41
c_rt_lib0clear(&___nl__1);
#line 42
c_rt_lib0move(&___nl__1,___get_global_const(296));
#line 42
c_rt_lib0move(&___nl__2,___get_global_const(303));
#line 42
c_rt_lib0delete(hash0set_value(&___nl__0, ___nl__1, ___nl__2));
#line 42
c_rt_lib0clear(&___nl__2);
#line 42
c_rt_lib0clear(&___nl__1);
#line 43
c_rt_lib0move(&___nl__1,___get_global_const(304));
#line 43
c_rt_lib0move(&___nl__2,___get_global_const(305));
#line 43
c_rt_lib0delete(hash0set_value(&___nl__0, ___nl__1, ___nl__2));
#line 43
c_rt_lib0clear(&___nl__2);
#line 43
c_rt_lib0clear(&___nl__1);
#line 44
c_rt_lib0move(&___nl__1,___get_global_const(77));
#line 44
c_rt_lib0move(&___nl__2,___get_global_const(306));
#line 44
c_rt_lib0delete(hash0set_value(&___nl__0, ___nl__1, ___nl__2));
#line 44
c_rt_lib0clear(&___nl__2);
#line 44
c_rt_lib0clear(&___nl__1);
#line 45
c_rt_lib0move(&___nl__1,___get_global_const(307));
#line 45
c_rt_lib0move(&___nl__2,___get_global_const(222));
#line 45
c_rt_lib0delete(hash0set_value(&___nl__0, ___nl__1, ___nl__2));
#line 45
c_rt_lib0clear(&___nl__2);
#line 45
c_rt_lib0clear(&___nl__1);
#line 46
c_rt_lib0move(&___nl__1,___get_global_const(308));
#line 46
c_rt_lib0move(&___nl__2,___get_global_const(309));
#line 46
c_rt_lib0delete(hash0set_value(&___nl__0, ___nl__1, ___nl__2));
#line 46
c_rt_lib0clear(&___nl__2);
#line 46
c_rt_lib0clear(&___nl__1);
#line 47
c_rt_lib0move(&___nl__1,___get_global_const(310));
#line 47
c_rt_lib0move(&___nl__2,___get_global_const(311));
#line 47
c_rt_lib0delete(hash0set_value(&___nl__0, ___nl__1, ___nl__2));
#line 47
c_rt_lib0clear(&___nl__2);
#line 47
c_rt_lib0clear(&___nl__1);
#line 48
c_rt_lib0move(&___nl__1,___get_global_const(312));
#line 48
c_rt_lib0move(&___nl__2,___get_global_const(313));
#line 48
c_rt_lib0delete(hash0set_value(&___nl__0, ___nl__1, ___nl__2));
#line 48
c_rt_lib0clear(&___nl__2);
#line 48
c_rt_lib0clear(&___nl__1);
#line 49
c_rt_lib0move(&___nl__1,___get_global_const(314));
#line 49
c_rt_lib0move(&___nl__2,___get_global_const(315));
#line 49
c_rt_lib0delete(hash0set_value(&___nl__0, ___nl__1, ___nl__2));
#line 49
c_rt_lib0clear(&___nl__2);
#line 49
c_rt_lib0clear(&___nl__1);
#line 50
c_rt_lib0move(&___nl__1,___get_global_const(316));
#line 50
c_rt_lib0move(&___nl__2,___get_global_const(317));
#line 50
c_rt_lib0delete(hash0set_value(&___nl__0, ___nl__1, ___nl__2));
#line 50
c_rt_lib0clear(&___nl__2);
#line 50
c_rt_lib0clear(&___nl__1);
#line 51
c_rt_lib0move(&___nl__1,___get_global_const(318));
#line 51
c_rt_lib0move(&___nl__2,___get_global_const(319));
#line 51
c_rt_lib0delete(hash0set_value(&___nl__0, ___nl__1, ___nl__2));
#line 51
c_rt_lib0clear(&___nl__2);
#line 51
c_rt_lib0clear(&___nl__1);
#line 52
c_rt_lib0move(&___nl__1,___get_global_const(97));
#line 52
c_rt_lib0move(&___nl__2,___get_global_const(320));
#line 52
c_rt_lib0delete(hash0set_value(&___nl__0, ___nl__1, ___nl__2));
#line 52
c_rt_lib0clear(&___nl__2);
#line 52
c_rt_lib0clear(&___nl__1);
#line 53
return ___nl__0;
#line 53
c_rt_lib0clear(&___nl__0);
#line 53
return NULL;
}

ImmT generator_c_priv0gen_bin_ops_mod(){
return generator_c_priv0__const__sing(5);}
ImmT generator_c_priv0gen_bin_ops_mod0cal() {
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
#line 57
c_rt_lib0move(&___nl__0, c_rt_lib0hash_mk(0));
#line 58
c_rt_lib0move(&___nl__1,___get_global_const(298));
#line 58
c_rt_lib0move(&___nl__2,___get_global_const(321));
#line 58
c_rt_lib0delete(hash0set_value(&___nl__0, ___nl__1, ___nl__2));
#line 58
c_rt_lib0clear(&___nl__2);
#line 58
c_rt_lib0clear(&___nl__1);
#line 59
c_rt_lib0move(&___nl__1,___get_global_const(296));
#line 59
c_rt_lib0move(&___nl__2,___get_global_const(322));
#line 59
c_rt_lib0delete(hash0set_value(&___nl__0, ___nl__1, ___nl__2));
#line 59
c_rt_lib0clear(&___nl__2);
#line 59
c_rt_lib0clear(&___nl__1);
#line 60
c_rt_lib0move(&___nl__1,___get_global_const(304));
#line 60
c_rt_lib0move(&___nl__2,___get_global_const(323));
#line 60
c_rt_lib0delete(hash0set_value(&___nl__0, ___nl__1, ___nl__2));
#line 60
c_rt_lib0clear(&___nl__2);
#line 60
c_rt_lib0clear(&___nl__1);
#line 61
c_rt_lib0move(&___nl__1,___get_global_const(77));
#line 61
c_rt_lib0move(&___nl__2,___get_global_const(324));
#line 61
c_rt_lib0delete(hash0set_value(&___nl__0, ___nl__1, ___nl__2));
#line 61
c_rt_lib0clear(&___nl__2);
#line 61
c_rt_lib0clear(&___nl__1);
#line 62
c_rt_lib0move(&___nl__1,___get_global_const(307));
#line 62
c_rt_lib0move(&___nl__2,___get_global_const(325));
#line 62
c_rt_lib0delete(hash0set_value(&___nl__0, ___nl__1, ___nl__2));
#line 62
c_rt_lib0clear(&___nl__2);
#line 62
c_rt_lib0clear(&___nl__1);
#line 63
c_rt_lib0move(&___nl__1,___get_global_const(97));
#line 63
c_rt_lib0move(&___nl__2,___get_global_const(326));
#line 63
c_rt_lib0delete(hash0set_value(&___nl__0, ___nl__1, ___nl__2));
#line 63
c_rt_lib0clear(&___nl__2);
#line 63
c_rt_lib0clear(&___nl__1);
#line 64
return ___nl__0;
#line 64
c_rt_lib0clear(&___nl__0);
#line 64
return NULL;
}

ImmT generator_c0const_dict0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "generator_c0const_dict");
return generator_c0const_dict();}
ImmT generator_c0const_dict(){
return generator_c_priv0__const__sing(6);}
ImmT generator_c0const_dict0cal() {
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
#line 68
c_rt_lib0move(&___nl__3, ptd0sim());
#line 68
c_rt_lib0move(&___nl__2, ptd0arr(___nl__3));
#line 68
c_rt_lib0clear(&___nl__3);
#line 68
c_rt_lib0move(&___nl__4, ptd0sim());
#line 68
c_rt_lib0move(&___nl__3, ptd0hash(___nl__4));
#line 68
c_rt_lib0clear(&___nl__4);
#line 68
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(2, ___get_global_const(327), ___nl__2, ___get_global_const(328), ___nl__3));
#line 68
c_rt_lib0clear(&___nl__2);
#line 68
c_rt_lib0clear(&___nl__3);
#line 68
c_rt_lib0move(&___nl__0, ptd0rec(___nl__1));
#line 68
c_rt_lib0clear(&___nl__1);
#line 68
return ___nl__0;
#line 68
c_rt_lib0clear(&___nl__0);
#line 68
return NULL;
}

ImmT generator_c0fun_args_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "generator_c0fun_args_t");
return generator_c0fun_args_t();}
ImmT generator_c0fun_args_t(){
return generator_c_priv0__const__sing(7);}
ImmT generator_c0fun_args_t0cal() {
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
#line 72
c_rt_lib0move(&___nl__3, ptd0none());
#line 72
c_rt_lib0move(&___nl__4, ptd0none());
#line 72
c_rt_lib0move(&___nl__2, c_rt_lib0hash_mk(2, ___get_global_const(198), ___nl__3, ___get_global_const(5), ___nl__4));
#line 72
c_rt_lib0clear(&___nl__3);
#line 72
c_rt_lib0clear(&___nl__4);
#line 72
c_rt_lib0move(&___nl__1, ptd0var(___nl__2));
#line 72
c_rt_lib0clear(&___nl__2);
#line 72
c_rt_lib0move(&___nl__0, ptd0arr(___nl__1));
#line 72
c_rt_lib0clear(&___nl__1);
#line 72
return ___nl__0;
#line 72
c_rt_lib0clear(&___nl__0);
#line 72
return NULL;
}

ImmT generator_c0const_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "generator_c0const_t");
return generator_c0const_t();}
ImmT generator_c0const_t(){
return generator_c_priv0__const__sing(8);}
ImmT generator_c0const_t0cal() {
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
#line 76
c_rt_lib0move(&___nl__3, ptd0sim());
#line 76
c_rt_lib0move(&___nl__2, ptd0arr(___nl__3));
#line 76
c_rt_lib0clear(&___nl__3);
#line 76
c_rt_lib0move(&___nl__4, ptd0sim());
#line 76
c_rt_lib0move(&___nl__3, ptd0hash(___nl__4));
#line 76
c_rt_lib0clear(&___nl__4);
#line 76
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(2, ___get_global_const(327), ___nl__2, ___get_global_const(328), ___nl__3));
#line 76
c_rt_lib0clear(&___nl__2);
#line 76
c_rt_lib0clear(&___nl__3);
#line 76
c_rt_lib0move(&___nl__0, ptd0rec(___nl__1));
#line 76
c_rt_lib0clear(&___nl__1);
#line 76
return ___nl__0;
#line 76
c_rt_lib0clear(&___nl__0);
#line 76
return NULL;
}

ImmT generator_c0global_const_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "generator_c0global_const_t");
return generator_c0global_const_t();}
ImmT generator_c0global_const_t(){
return generator_c_priv0__const__sing(9);}
ImmT generator_c0global_const_t0cal() {
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
#line 81
c_rt_lib0move(&___nl__5, ptd0sim());
#line 81
c_rt_lib0move(&___nl__6, ptd0sim());
#line 81
c_rt_lib0move(&___nl__4, c_rt_lib0hash_mk(2, ___get_global_const(329), ___nl__5, ___get_global_const(330), ___nl__6));
#line 81
c_rt_lib0clear(&___nl__5);
#line 81
c_rt_lib0clear(&___nl__6);
#line 81
c_rt_lib0move(&___nl__3, ptd0rec(___nl__4));
#line 81
c_rt_lib0clear(&___nl__4);
#line 81
c_rt_lib0move(&___nl__2, ptd0arr(___nl__3));
#line 81
c_rt_lib0clear(&___nl__3);
#line 82
c_rt_lib0move(&___nl__4, ptd0sim());
#line 82
c_rt_lib0move(&___nl__3, ptd0hash(___nl__4));
#line 82
c_rt_lib0clear(&___nl__4);
#line 83
c_rt_lib0move(&___nl__5, ptd0sim());
#line 83
c_rt_lib0move(&___nl__4, ptd0arr(___nl__5));
#line 83
c_rt_lib0clear(&___nl__5);
#line 84
c_rt_lib0move(&___nl__7, ptd0sim());
#line 84
c_rt_lib0move(&___nl__6, ptd0hash(___nl__7));
#line 84
c_rt_lib0clear(&___nl__7);
#line 84
c_rt_lib0move(&___nl__5, ptd0hash(___nl__6));
#line 84
c_rt_lib0clear(&___nl__6);
#line 84
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(4, ___get_global_const(327), ___nl__2, ___get_global_const(328), ___nl__3, ___get_global_const(331), ___nl__4, ___get_global_const(332), ___nl__5));
#line 84
c_rt_lib0clear(&___nl__2);
#line 84
c_rt_lib0clear(&___nl__3);
#line 84
c_rt_lib0clear(&___nl__4);
#line 84
c_rt_lib0clear(&___nl__5);
#line 84
c_rt_lib0move(&___nl__0, ptd0rec(___nl__1));
#line 84
c_rt_lib0clear(&___nl__1);
#line 84
return ___nl__0;
#line 84
c_rt_lib0clear(&___nl__0);
#line 84
return NULL;
}

ImmT generator_c0state_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "generator_c0state_t");
return generator_c0state_t();}
ImmT generator_c0state_t(){
return generator_c_priv0__const__sing(10);}
ImmT generator_c0state_t0cal() {
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
#line 90
c_rt_lib0move(&___nl__2, c_rt_lib0func_new(generator_c0global_const_t0ptr, ___get_global_const(333), ___get_global_const(334)));
#line 90
c_rt_lib0move(&___nl__2, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__2));
#line 91
c_rt_lib0move(&___nl__3, ptd0sim());
#line 92
c_rt_lib0move(&___nl__4, ptd0sim());
#line 93
c_rt_lib0move(&___nl__6, c_rt_lib0func_new(boolean_t0type0ptr, ___get_global_const(62), ___get_global_const(63)));
#line 93
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__6));
#line 93
c_rt_lib0move(&___nl__5, ptd0hash(___nl__6));
#line 93
c_rt_lib0clear(&___nl__6);
#line 94
c_rt_lib0move(&___nl__6, ptd0sim());
#line 95
c_rt_lib0move(&___nl__7, c_rt_lib0func_new(generator_c0fun_args_t0ptr, ___get_global_const(333), ___get_global_const(335)));
#line 95
c_rt_lib0move(&___nl__7, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__7));
#line 97
c_rt_lib0move(&___nl__10, c_rt_lib0func_new(generator_c0const_t0ptr, ___get_global_const(333), ___get_global_const(336)));
#line 97
c_rt_lib0move(&___nl__10, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__10));
#line 98
c_rt_lib0move(&___nl__11, c_rt_lib0func_new(generator_c0const_t0ptr, ___get_global_const(333), ___get_global_const(336)));
#line 98
c_rt_lib0move(&___nl__11, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__11));
#line 99
c_rt_lib0move(&___nl__12, ptd0sim());
#line 99
c_rt_lib0move(&___nl__9, c_rt_lib0hash_mk(3, ___get_global_const(337), ___nl__10, ___get_global_const(338), ___nl__11, ___get_global_const(339), ___nl__12));
#line 99
c_rt_lib0clear(&___nl__10);
#line 99
c_rt_lib0clear(&___nl__11);
#line 99
c_rt_lib0clear(&___nl__12);
#line 99
c_rt_lib0move(&___nl__8, ptd0rec(___nl__9));
#line 99
c_rt_lib0clear(&___nl__9);
#line 99
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(7, ___get_global_const(159), ___nl__2, ___get_global_const(340), ___nl__3, ___get_global_const(341), ___nl__4, ___get_global_const(342), ___nl__5, ___get_global_const(343), ___nl__6, ___get_global_const(344), ___nl__7, ___get_global_const(196), ___nl__8));
#line 99
c_rt_lib0clear(&___nl__2);
#line 99
c_rt_lib0clear(&___nl__3);
#line 99
c_rt_lib0clear(&___nl__4);
#line 99
c_rt_lib0clear(&___nl__5);
#line 99
c_rt_lib0clear(&___nl__6);
#line 99
c_rt_lib0clear(&___nl__7);
#line 99
c_rt_lib0clear(&___nl__8);
#line 99
c_rt_lib0move(&___nl__0, ptd0rec(___nl__1));
#line 99
c_rt_lib0clear(&___nl__1);
#line 99
return ___nl__0;
#line 99
c_rt_lib0clear(&___nl__0);
#line 99
return NULL;
}

ImmT generator_c0get_empty_state0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "generator_c0get_empty_state");
return generator_c0get_empty_state();}
ImmT generator_c0get_empty_state(){
return generator_c_priv0__const__sing(11);}
ImmT generator_c0get_empty_state0cal() {
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
#line 106
c_rt_lib0move(&___nl__2, c_rt_lib0array_mk(0));
#line 106
c_rt_lib0move(&___nl__3, c_rt_lib0hash_mk(0));
#line 106
c_rt_lib0move(&___nl__4, c_rt_lib0array_mk(0));
#line 106
c_rt_lib0move(&___nl__5, c_rt_lib0hash_mk(0));
#line 106
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(4, ___get_global_const(327), ___nl__2, ___get_global_const(328), ___nl__3, ___get_global_const(331), ___nl__4, ___get_global_const(332), ___nl__5));
#line 106
c_rt_lib0clear(&___nl__2);
#line 106
c_rt_lib0clear(&___nl__3);
#line 106
c_rt_lib0clear(&___nl__4);
#line 106
c_rt_lib0clear(&___nl__5);
#line 107
c_rt_lib0move(&___nl__2,___get_global_const(2));
#line 108
c_rt_lib0move(&___nl__3,___get_global_const(2));
#line 109
c_rt_lib0move(&___nl__4, c_rt_lib0array_mk(0));
#line 110
c_rt_lib0move(&___nl__6,___get_global_const(0));
#line 110
c_rt_lib0move(&___nl__8, c_rt_lib0array_mk(0));
#line 110
c_rt_lib0move(&___nl__9, c_rt_lib0hash_mk(0));
#line 110
c_rt_lib0move(&___nl__7, c_rt_lib0hash_mk(2, ___get_global_const(327), ___nl__8, ___get_global_const(328), ___nl__9));
#line 110
c_rt_lib0clear(&___nl__8);
#line 110
c_rt_lib0clear(&___nl__9);
#line 110
c_rt_lib0move(&___nl__9, c_rt_lib0array_mk(0));
#line 110
c_rt_lib0move(&___nl__10, c_rt_lib0hash_mk(0));
#line 110
c_rt_lib0move(&___nl__8, c_rt_lib0hash_mk(2, ___get_global_const(327), ___nl__9, ___get_global_const(328), ___nl__10));
#line 110
c_rt_lib0clear(&___nl__9);
#line 110
c_rt_lib0clear(&___nl__10);
#line 110
c_rt_lib0move(&___nl__5, c_rt_lib0hash_mk(3, ___get_global_const(339), ___nl__6, ___get_global_const(337), ___nl__7, ___get_global_const(338), ___nl__8));
#line 110
c_rt_lib0clear(&___nl__6);
#line 110
c_rt_lib0clear(&___nl__7);
#line 110
c_rt_lib0clear(&___nl__8);
#line 111
c_rt_lib0move(&___nl__6,___get_global_const(2));
#line 112
c_rt_lib0move(&___nl__7, c_rt_lib0hash_mk(0));
#line 112
c_rt_lib0move(&___nl__0, c_rt_lib0hash_mk(7, ___get_global_const(159), ___nl__1, ___get_global_const(341), ___nl__2, ___get_global_const(340), ___nl__3, ___get_global_const(344), ___nl__4, ___get_global_const(196), ___nl__5, ___get_global_const(343), ___nl__6, ___get_global_const(342), ___nl__7));
#line 112
c_rt_lib0clear(&___nl__1);
#line 112
c_rt_lib0clear(&___nl__2);
#line 112
c_rt_lib0clear(&___nl__3);
#line 112
c_rt_lib0clear(&___nl__4);
#line 112
c_rt_lib0clear(&___nl__5);
#line 112
c_rt_lib0clear(&___nl__6);
#line 112
c_rt_lib0clear(&___nl__7);
#line 112
return ___nl__0;
#line 112
c_rt_lib0clear(&___nl__0);
#line 112
return NULL;
}

ImmT generator_c_priv0print(ImmT * ___ref___0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__1);
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
#line 117
c_rt_lib0move(&___nl__2,___get_global_const(341));
#line 117
c_rt_lib0move(&___nl__2, c_rt_lib0get_ref_hash(*___ref___0, ___nl__2));
#line 117
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__1));
#line 117
c_rt_lib0move(&___nl__3,___get_global_const(341));
#line 117
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__3, ___nl__2));
#line 117
c_rt_lib0clear(&___nl__3);
#line 117
c_rt_lib0clear(&___nl__2);
#line 117
c_rt_lib0clear(&___nl__1);
#line 117
return NULL;
}

ImmT generator_c_priv0print_to_header(ImmT * ___ref___0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__1);
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
#line 121
c_rt_lib0move(&___nl__2,___get_global_const(340));
#line 121
c_rt_lib0move(&___nl__2, c_rt_lib0get_ref_hash(*___ref___0, ___nl__2));
#line 121
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__1));
#line 121
c_rt_lib0move(&___nl__3,___get_global_const(340));
#line 121
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__3, ___nl__2));
#line 121
c_rt_lib0clear(&___nl__3);
#line 121
c_rt_lib0clear(&___nl__2);
#line 121
c_rt_lib0clear(&___nl__1);
#line 121
return NULL;
}

ImmT generator_c_priv0println_to_header(ImmT * ___ref___0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__1);
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
#line 125
c_rt_lib0move(&___nl__2, string0lf());
#line 125
c_rt_lib0move(&___nl__2, c_rt_lib0concat_new(___nl__1, ___nl__2));
#line 125
c_rt_lib0move(&___nl__3,___get_global_const(340));
#line 125
c_rt_lib0move(&___nl__3, c_rt_lib0get_ref_hash(*___ref___0, ___nl__3));
#line 125
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__2));
#line 125
c_rt_lib0move(&___nl__4,___get_global_const(340));
#line 125
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__4, ___nl__3));
#line 125
c_rt_lib0clear(&___nl__4);
#line 125
c_rt_lib0clear(&___nl__2);
#line 125
c_rt_lib0clear(&___nl__3);
#line 125
c_rt_lib0clear(&___nl__1);
#line 125
return NULL;
}

ImmT generator_c_priv0arg_t(){
return generator_c_priv0__const__sing(12);}
ImmT generator_c_priv0arg_t0cal() {
ImmT ___nl__0 = NULL;
#line 129
c_rt_lib0move(&___nl__0,___get_global_const(345));
#line 129
return ___nl__0;
#line 129
c_rt_lib0clear(&___nl__0);
#line 129
return NULL;
}

ImmT generator_c_priv0println(ImmT * ___ref___0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__1);
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
#line 133
c_rt_lib0move(&___nl__2,___get_global_const(341));
#line 133
c_rt_lib0move(&___nl__2, c_rt_lib0get_ref_hash(*___ref___0, ___nl__2));
#line 133
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__1));
#line 133
c_rt_lib0move(&___nl__3,___get_global_const(341));
#line 133
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__3, ___nl__2));
#line 133
c_rt_lib0clear(&___nl__3);
#line 133
c_rt_lib0clear(&___nl__2);
#line 134
c_rt_lib0move(&___nl__2, string0lf());
#line 134
c_rt_lib0move(&___nl__3,___get_global_const(341));
#line 134
c_rt_lib0move(&___nl__3, c_rt_lib0get_ref_hash(*___ref___0, ___nl__3));
#line 134
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__2));
#line 134
c_rt_lib0move(&___nl__4,___get_global_const(341));
#line 134
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__4, ___nl__3));
#line 134
c_rt_lib0clear(&___nl__4);
#line 134
c_rt_lib0clear(&___nl__2);
#line 134
c_rt_lib0clear(&___nl__3);
#line 134
c_rt_lib0clear(&___nl__1);
#line 134
return NULL;
}

ImmT generator_c_priv0get_reg(ImmT * ___ref___0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__1);
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
#line 138
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(344)));
#line 139
c_rt_lib0move(&___nl__3, array0len(___nl__2));
#line 139
c_rt_lib0move(&___nl__3, c_rt_lib0gt(___nl__3, ___nl__1));
#line 139
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__3));
#line 139
if(c_rt_lib0check_true_native(___nl__4)){ goto label_7;}
#line 139
c_rt_lib0move(&___nl__3, c_rt_lib0array_get(___nl__2, ___nl__1));
#line 139
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__3, ___get_global_const(5)));
#line 139
label_7:
#line 139
c_rt_lib0clear(&___nl__4);
#line 139
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 139
if(c_rt_lib0check_true_native(___nl__3)){ goto label_19;}
#line 140
c_rt_lib0move(&___nl__4,___get_global_const(346));
#line 140
c_rt_lib0move(&___nl__4, c_rt_lib0concat_add(___nl__4, ___nl__1));
#line 140
c_rt_lib0clear(&___nl__1);
#line 140
c_rt_lib0clear(&___nl__2);
#line 140
c_rt_lib0clear(&___nl__3);
#line 140
return ___nl__4;
#line 140
c_rt_lib0clear(&___nl__4);
#line 141
goto label_19;
#line 141
label_19:
#line 141
c_rt_lib0clear(&___nl__3);
#line 142
c_rt_lib0move(&___nl__3,___get_global_const(347));
#line 142
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__1));
#line 142
c_rt_lib0clear(&___nl__1);
#line 142
c_rt_lib0clear(&___nl__2);
#line 142
return ___nl__3;
#line 142
c_rt_lib0clear(&___nl__3);
#line 142
c_rt_lib0clear(&___nl__2);
#line 142
c_rt_lib0clear(&___nl__1);
#line 142
return NULL;
}

ImmT generator_c_priv0get_reg_ref(ImmT * ___ref___0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__1);
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
#line 146
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(344)));
#line 147
c_rt_lib0move(&___nl__3, array0len(___nl__2));
#line 147
c_rt_lib0move(&___nl__3, c_rt_lib0gt(___nl__3, ___nl__1));
#line 147
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__3));
#line 147
if(c_rt_lib0check_true_native(___nl__4)){ goto label_7;}
#line 147
c_rt_lib0move(&___nl__3, c_rt_lib0array_get(___nl__2, ___nl__1));
#line 147
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__3, ___get_global_const(5)));
#line 147
label_7:
#line 147
c_rt_lib0clear(&___nl__4);
#line 147
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 147
if(c_rt_lib0check_true_native(___nl__3)){ goto label_19;}
#line 148
c_rt_lib0move(&___nl__4,___get_global_const(348));
#line 148
c_rt_lib0move(&___nl__4, c_rt_lib0concat_add(___nl__4, ___nl__1));
#line 148
c_rt_lib0clear(&___nl__1);
#line 148
c_rt_lib0clear(&___nl__2);
#line 148
c_rt_lib0clear(&___nl__3);
#line 148
return ___nl__4;
#line 148
c_rt_lib0clear(&___nl__4);
#line 149
goto label_19;
#line 149
label_19:
#line 149
c_rt_lib0clear(&___nl__3);
#line 150
c_rt_lib0move(&___nl__3,___get_global_const(349));
#line 150
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__1));
#line 150
c_rt_lib0clear(&___nl__1);
#line 150
c_rt_lib0clear(&___nl__2);
#line 150
return ___nl__3;
#line 150
c_rt_lib0clear(&___nl__3);
#line 150
c_rt_lib0clear(&___nl__2);
#line 150
c_rt_lib0clear(&___nl__1);
#line 150
return NULL;
}

ImmT generator_c_priv0get_string(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
#line 154
c_rt_lib0move(&___nl__1,___get_global_const(235));
#line 154
c_rt_lib0move(&___nl__1, c_rt_lib0concat_add(___nl__1, ___nl__0));
#line 154
c_rt_lib0move(&___nl__2,___get_global_const(235));
#line 154
c_rt_lib0move(&___nl__1, c_rt_lib0concat_add(___nl__1, ___nl__2));
#line 154
c_rt_lib0clear(&___nl__2);
#line 154
c_rt_lib0clear(&___nl__0);
#line 154
return ___nl__1;
#line 154
c_rt_lib0clear(&___nl__1);
#line 154
c_rt_lib0clear(&___nl__0);
#line 154
return NULL;
}

ImmT generator_c0module_out_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "generator_c0module_out_t");
return generator_c0module_out_t();}
ImmT generator_c0module_out_t(){
return generator_c_priv0__const__sing(13);}
ImmT generator_c0module_out_t0cal() {
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
#line 158
c_rt_lib0move(&___nl__2, ptd0sim());
#line 158
c_rt_lib0move(&___nl__3, ptd0sim());
#line 158
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(2, ___get_global_const(34), ___nl__2, ___get_global_const(40), ___nl__3));
#line 158
c_rt_lib0clear(&___nl__2);
#line 158
c_rt_lib0clear(&___nl__3);
#line 158
c_rt_lib0move(&___nl__0, ptd0rec(___nl__1));
#line 158
c_rt_lib0clear(&___nl__1);
#line 158
return ___nl__0;
#line 158
c_rt_lib0clear(&___nl__0);
#line 158
return NULL;
}

ImmT generator_c0out_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "generator_c0out_t");
return generator_c0out_t();}
ImmT generator_c0out_t(){
return generator_c_priv0__const__sing(14);}
ImmT generator_c0out_t0cal() {
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
#line 162
c_rt_lib0move(&___nl__3, c_rt_lib0func_new(generator_c0module_out_t0ptr, ___get_global_const(333), ___get_global_const(350)));
#line 162
c_rt_lib0move(&___nl__3, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__3));
#line 162
c_rt_lib0move(&___nl__2, ptd0hash(___nl__3));
#line 162
c_rt_lib0clear(&___nl__3);
#line 162
c_rt_lib0move(&___nl__3, c_rt_lib0func_new(generator_c0module_out_t0ptr, ___get_global_const(333), ___get_global_const(350)));
#line 162
c_rt_lib0move(&___nl__3, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__3));
#line 162
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(2, ___get_global_const(157), ___nl__2, ___get_global_const(159), ___nl__3));
#line 162
c_rt_lib0clear(&___nl__2);
#line 162
c_rt_lib0clear(&___nl__3);
#line 162
c_rt_lib0move(&___nl__0, ptd0rec(___nl__1));
#line 162
c_rt_lib0clear(&___nl__1);
#line 162
return ___nl__0;
#line 162
c_rt_lib0clear(&___nl__0);
#line 162
return NULL;
}

ImmT generator_c0generate0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 2, "generator_c0generate");
return generator_c0generate(_tab[0], &_tab[1]);}
ImmT generator_c0generate(ImmT ___nl__0,ImmT * ___ref___1) {
c_rt_lib0arg_val(___nl__0);
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
#line 166
c_rt_lib0move(&___nl__2, c_rt_lib0hash_mk(0));
#line 167
c_rt_lib0move(&___nl__3, c_rt_lib0array_mk(0));
#line 168
c_rt_lib0move(&___nl__6, c_rt_lib0init_iter(___nl__0));
#line 168
label_3:
#line 168
c_rt_lib0move(&___nl__4, c_rt_lib0is_end_hash(___nl__6));
#line 168
if(c_rt_lib0check_true_native(___nl__4)){ goto label_11;}
#line 168
c_rt_lib0move(&___nl__4, c_rt_lib0get_key_iter(___nl__6));
#line 168
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value(___nl__0, ___nl__4));
#line 169
c_rt_lib0delete(array0push(&___nl__3, ___nl__4));
#line 170
c_rt_lib0move(&___nl__6, c_rt_lib0next_iter(___nl__6));
#line 170
goto label_3;
#line 170
label_11:
#line 170
c_rt_lib0clear(&___nl__4);
#line 170
c_rt_lib0clear(&___nl__5);
#line 170
c_rt_lib0clear(&___nl__6);
#line 171
c_rt_lib0delete(array0sort(&___nl__3));
#line 172
c_rt_lib0move(&___nl__5,___get_global_const(0));
#line 172
c_rt_lib0move(&___nl__6,___get_global_const(1));
#line 172
c_rt_lib0move(&___nl__7, c_rt_lib0array_len(___nl__3));
#line 172
label_19:
#line 172
c_rt_lib0move(&___nl__8, c_rt_lib0ge(___nl__5, ___nl__7));
#line 172
if(c_rt_lib0check_true_native(___nl__8)){ goto label_92;}
#line 172
c_rt_lib0move(&___nl__4, c_rt_lib0array_get(___nl__3, ___nl__5));
#line 173
c_rt_lib0move(&___nl__9, hash0get_value(___nl__0, ___nl__4));
#line 174
c_rt_lib0delete(generator_c0clear_module_from_state(___ref___1, ___nl__4));
#line 175
c_rt_lib0move(&___nl__10,___get_global_const(159));
#line 175
c_rt_lib0move(&___nl__10, c_rt_lib0get_ref_hash(*___ref___1, ___nl__10));
#line 175
c_rt_lib0move(&___nl__11,___get_global_const(332));
#line 175
c_rt_lib0move(&___nl__11, c_rt_lib0get_ref_hash(___nl__10, ___nl__11));
#line 175
c_rt_lib0move(&___nl__12, c_rt_lib0hash_mk(0));
#line 175
c_rt_lib0delete(hash0set_value(&___nl__11, ___nl__4, ___nl__12));
#line 175
c_rt_lib0clear(&___nl__12);
#line 175
c_rt_lib0move(&___nl__12,___get_global_const(332));
#line 175
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__10, ___nl__12, ___nl__11));
#line 175
c_rt_lib0move(&___nl__12,___get_global_const(159));
#line 175
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___1, ___nl__12, ___nl__10));
#line 175
c_rt_lib0clear(&___nl__12);
#line 175
c_rt_lib0clear(&___nl__10);
#line 175
c_rt_lib0clear(&___nl__11);
#line 176
c_rt_lib0move(&___nl__10,___get_global_const(2));
#line 176
c_rt_lib0copy(&___nl__11, ___nl__10);
#line 176
c_rt_lib0hash_set_value_dec(___ref___1, ___get_global_const(341), ___nl__11);
#line 176
c_rt_lib0clear(&___nl__10);
#line 176
c_rt_lib0clear(&___nl__11);
#line 177
c_rt_lib0move(&___nl__10,___get_global_const(2));
#line 177
c_rt_lib0copy(&___nl__11, ___nl__10);
#line 177
c_rt_lib0hash_set_value_dec(___ref___1, ___get_global_const(340), ___nl__11);
#line 177
c_rt_lib0clear(&___nl__10);
#line 177
c_rt_lib0clear(&___nl__11);
#line 178
c_rt_lib0move(&___nl__10, c_rt_lib0array_mk(0));
#line 178
c_rt_lib0copy(&___nl__11, ___nl__10);
#line 178
c_rt_lib0hash_set_value_dec(___ref___1, ___get_global_const(344), ___nl__11);
#line 178
c_rt_lib0clear(&___nl__10);
#line 178
c_rt_lib0clear(&___nl__11);
#line 179
c_rt_lib0move(&___nl__11,___get_global_const(0));
#line 179
c_rt_lib0move(&___nl__13, c_rt_lib0array_mk(0));
#line 179
c_rt_lib0move(&___nl__14, c_rt_lib0hash_mk(0));
#line 179
c_rt_lib0move(&___nl__12, c_rt_lib0hash_mk(2, ___get_global_const(327), ___nl__13, ___get_global_const(328), ___nl__14));
#line 179
c_rt_lib0clear(&___nl__13);
#line 179
c_rt_lib0clear(&___nl__14);
#line 179
c_rt_lib0move(&___nl__14, c_rt_lib0array_mk(0));
#line 179
c_rt_lib0move(&___nl__15, c_rt_lib0hash_mk(0));
#line 179
c_rt_lib0move(&___nl__13, c_rt_lib0hash_mk(2, ___get_global_const(327), ___nl__14, ___get_global_const(328), ___nl__15));
#line 179
c_rt_lib0clear(&___nl__14);
#line 179
c_rt_lib0clear(&___nl__15);
#line 179
c_rt_lib0move(&___nl__10, c_rt_lib0hash_mk(3, ___get_global_const(339), ___nl__11, ___get_global_const(337), ___nl__12, ___get_global_const(338), ___nl__13));
#line 179
c_rt_lib0clear(&___nl__11);
#line 179
c_rt_lib0clear(&___nl__12);
#line 179
c_rt_lib0clear(&___nl__13);
#line 179
c_rt_lib0copy(&___nl__11, ___nl__10);
#line 179
c_rt_lib0hash_set_value_dec(___ref___1, ___get_global_const(196), ___nl__11);
#line 179
c_rt_lib0clear(&___nl__10);
#line 179
c_rt_lib0clear(&___nl__11);
#line 180
c_rt_lib0copy(&___nl__10, ___nl__4);
#line 180
c_rt_lib0hash_set_value_dec(___ref___1, ___get_global_const(343), ___nl__10);
#line 180
c_rt_lib0clear(&___nl__10);
#line 181
c_rt_lib0move(&___nl__10, c_rt_lib0hash_mk(0));
#line 181
c_rt_lib0copy(&___nl__11, ___nl__10);
#line 181
c_rt_lib0hash_set_value_dec(___ref___1, ___get_global_const(342), ___nl__11);
#line 181
c_rt_lib0clear(&___nl__10);
#line 181
c_rt_lib0clear(&___nl__11);
#line 182
c_rt_lib0delete(generator_c_priv0print_mod(___ref___1, ___nl__9));
#line 183
c_rt_lib0move(&___nl__11, c_rt_lib0hash_get_value_dec(*___ref___1, ___get_global_const(341)));
#line 183
c_rt_lib0move(&___nl__12, c_rt_lib0hash_get_value_dec(*___ref___1, ___get_global_const(340)));
#line 183
c_rt_lib0move(&___nl__10, c_rt_lib0hash_mk(2, ___get_global_const(34), ___nl__11, ___get_global_const(40), ___nl__12));
#line 183
c_rt_lib0clear(&___nl__11);
#line 183
c_rt_lib0clear(&___nl__12);
#line 183
c_rt_lib0delete(hash0set_value(&___nl__2, ___nl__4, ___nl__10));
#line 183
c_rt_lib0clear(&___nl__10);
#line 183
c_rt_lib0clear(&___nl__9);
#line 184
c_rt_lib0move(&___nl__5, c_rt_lib0add_mod(___nl__5, ___nl__6));
#line 184
goto label_19;
#line 184
label_92:
#line 184
c_rt_lib0clear(&___nl__4);
#line 184
c_rt_lib0clear(&___nl__5);
#line 184
c_rt_lib0clear(&___nl__6);
#line 184
c_rt_lib0clear(&___nl__7);
#line 184
c_rt_lib0clear(&___nl__8);
#line 185
c_rt_lib0move(&___nl__5, generator_c_priv0generate_global_const_files(___ref___1, ___nl__3));
#line 185
c_rt_lib0move(&___nl__4, c_rt_lib0hash_mk(2, ___get_global_const(157), ___nl__2, ___get_global_const(159), ___nl__5));
#line 185
c_rt_lib0clear(&___nl__5);
#line 185
c_rt_lib0clear(&___nl__0);
#line 185
c_rt_lib0clear(&___nl__2);
#line 185
c_rt_lib0clear(&___nl__3);
#line 185
return ___nl__4;
#line 185
c_rt_lib0clear(&___nl__4);
#line 185
c_rt_lib0clear(&___nl__2);
#line 185
c_rt_lib0clear(&___nl__3);
#line 185
c_rt_lib0clear(&___nl__0);
#line 185
return NULL;
}

ImmT generator_c_priv0generate_global_const_files(ImmT * ___ref___0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__1);
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
#line 190
c_rt_lib0move(&___nl__2,___get_global_const(2));
#line 190
c_rt_lib0copy(&___nl__3, ___nl__2);
#line 190
c_rt_lib0hash_set_value_dec(___ref___0, ___get_global_const(341), ___nl__3);
#line 190
c_rt_lib0clear(&___nl__2);
#line 190
c_rt_lib0clear(&___nl__3);
#line 191
c_rt_lib0move(&___nl__2,___get_global_const(2));
#line 191
c_rt_lib0copy(&___nl__3, ___nl__2);
#line 191
c_rt_lib0hash_set_value_dec(___ref___0, ___get_global_const(340), ___nl__3);
#line 191
c_rt_lib0clear(&___nl__2);
#line 191
c_rt_lib0clear(&___nl__3);
#line 192
c_rt_lib0move(&___nl__2, c_rt_lib0array_mk(0));
#line 192
c_rt_lib0copy(&___nl__3, ___nl__2);
#line 192
c_rt_lib0hash_set_value_dec(___ref___0, ___get_global_const(344), ___nl__3);
#line 192
c_rt_lib0clear(&___nl__2);
#line 192
c_rt_lib0clear(&___nl__3);
#line 193
c_rt_lib0move(&___nl__3,___get_global_const(0));
#line 193
c_rt_lib0move(&___nl__5, c_rt_lib0array_mk(0));
#line 193
c_rt_lib0move(&___nl__6, c_rt_lib0hash_mk(0));
#line 193
c_rt_lib0move(&___nl__4, c_rt_lib0hash_mk(2, ___get_global_const(327), ___nl__5, ___get_global_const(328), ___nl__6));
#line 193
c_rt_lib0clear(&___nl__5);
#line 193
c_rt_lib0clear(&___nl__6);
#line 193
c_rt_lib0move(&___nl__6, c_rt_lib0array_mk(0));
#line 193
c_rt_lib0move(&___nl__7, c_rt_lib0hash_mk(0));
#line 193
c_rt_lib0move(&___nl__5, c_rt_lib0hash_mk(2, ___get_global_const(327), ___nl__6, ___get_global_const(328), ___nl__7));
#line 193
c_rt_lib0clear(&___nl__6);
#line 193
c_rt_lib0clear(&___nl__7);
#line 193
c_rt_lib0move(&___nl__2, c_rt_lib0hash_mk(3, ___get_global_const(339), ___nl__3, ___get_global_const(337), ___nl__4, ___get_global_const(338), ___nl__5));
#line 193
c_rt_lib0clear(&___nl__3);
#line 193
c_rt_lib0clear(&___nl__4);
#line 193
c_rt_lib0clear(&___nl__5);
#line 193
c_rt_lib0copy(&___nl__3, ___nl__2);
#line 193
c_rt_lib0hash_set_value_dec(___ref___0, ___get_global_const(196), ___nl__3);
#line 193
c_rt_lib0clear(&___nl__2);
#line 193
c_rt_lib0clear(&___nl__3);
#line 194
c_rt_lib0move(&___nl__2,___get_global_const(2));
#line 194
c_rt_lib0copy(&___nl__3, ___nl__2);
#line 194
c_rt_lib0hash_set_value_dec(___ref___0, ___get_global_const(343), ___nl__3);
#line 194
c_rt_lib0clear(&___nl__2);
#line 194
c_rt_lib0clear(&___nl__3);
#line 195
c_rt_lib0move(&___nl__2, generator_c_priv0get_cr());
#line 195
c_rt_lib0delete(generator_c_priv0print_to_header(___ref___0, ___nl__2));
#line 195
c_rt_lib0clear(&___nl__2);
#line 196
c_rt_lib0move(&___nl__2,___get_global_const(351));
#line 196
c_rt_lib0delete(generator_c_priv0println_to_header(___ref___0, ___nl__2));
#line 196
c_rt_lib0clear(&___nl__2);
#line 197
c_rt_lib0move(&___nl__3,___get_global_const(225));
#line 197
c_rt_lib0move(&___nl__2, generator_c_priv0get_include(___nl__3));
#line 197
c_rt_lib0clear(&___nl__3);
#line 197
c_rt_lib0delete(generator_c_priv0println_to_header(___ref___0, ___nl__2));
#line 197
c_rt_lib0clear(&___nl__2);
#line 198
c_rt_lib0move(&___nl__3,___get_global_const(0));
#line 198
c_rt_lib0move(&___nl__4,___get_global_const(1));
#line 198
c_rt_lib0move(&___nl__5, c_rt_lib0array_len(___nl__1));
#line 198
label_53:
#line 198
c_rt_lib0move(&___nl__6, c_rt_lib0ge(___nl__3, ___nl__5));
#line 198
if(c_rt_lib0check_true_native(___nl__6)){ goto label_62;}
#line 198
c_rt_lib0move(&___nl__2, c_rt_lib0array_get(___nl__1, ___nl__3));
#line 199
c_rt_lib0move(&___nl__7, generator_c_priv0get_include(___nl__2));
#line 199
c_rt_lib0delete(generator_c_priv0println_to_header(___ref___0, ___nl__7));
#line 199
c_rt_lib0clear(&___nl__7);
#line 200
c_rt_lib0move(&___nl__3, c_rt_lib0add_mod(___nl__3, ___nl__4));
#line 200
goto label_53;
#line 200
label_62:
#line 200
c_rt_lib0clear(&___nl__2);
#line 200
c_rt_lib0clear(&___nl__3);
#line 200
c_rt_lib0clear(&___nl__4);
#line 200
c_rt_lib0clear(&___nl__5);
#line 200
c_rt_lib0clear(&___nl__6);
#line 201
c_rt_lib0move(&___nl__2, generator_c_priv0get_cr());
#line 201
c_rt_lib0delete(generator_c_priv0print(___ref___0, ___nl__2));
#line 201
c_rt_lib0clear(&___nl__2);
#line 202
c_rt_lib0move(&___nl__3,___get_global_const(352));
#line 202
c_rt_lib0move(&___nl__2, generator_c_priv0get_include(___nl__3));
#line 202
c_rt_lib0clear(&___nl__3);
#line 202
c_rt_lib0delete(generator_c_priv0println(___ref___0, ___nl__2));
#line 202
c_rt_lib0clear(&___nl__2);
#line 203
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(159)));
#line 203
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(327)));
#line 204
c_rt_lib0move(&___nl__3, array0len(___nl__2));
#line 205
c_rt_lib0move(&___nl__4,___get_global_const(353));
#line 205
c_rt_lib0delete(generator_c_priv0println_to_header(___ref___0, ___nl__4));
#line 205
c_rt_lib0clear(&___nl__4);
#line 206
c_rt_lib0move(&___nl__4, generator_c_priv0arg_t());
#line 206
c_rt_lib0move(&___nl__5,___get_global_const(354));
#line 206
c_rt_lib0move(&___nl__4, c_rt_lib0concat_add(___nl__4, ___nl__5));
#line 206
c_rt_lib0clear(&___nl__5);
#line 206
c_rt_lib0delete(generator_c_priv0println_to_header(___ref___0, ___nl__4));
#line 206
c_rt_lib0clear(&___nl__4);
#line 207
c_rt_lib0move(&___nl__4,___get_global_const(355));
#line 208
c_rt_lib0move(&___nl__5, generator_c_priv0arg_t());
#line 208
c_rt_lib0move(&___nl__4, c_rt_lib0concat_add(___nl__4, ___nl__5));
#line 208
c_rt_lib0clear(&___nl__5);
#line 208
c_rt_lib0move(&___nl__5,___get_global_const(356));
#line 208
c_rt_lib0move(&___nl__4, c_rt_lib0concat_add(___nl__4, ___nl__5));
#line 208
c_rt_lib0clear(&___nl__5);
#line 208
c_rt_lib0delete(generator_c_priv0println(___ref___0, ___nl__4));
#line 208
c_rt_lib0clear(&___nl__4);
#line 211
c_rt_lib0move(&___nl__4,___get_global_const(357));
#line 211
c_rt_lib0move(&___nl__4, c_rt_lib0concat_add(___nl__4, ___nl__3));
#line 215
c_rt_lib0move(&___nl__5,___get_global_const(358));
#line 215
c_rt_lib0move(&___nl__4, c_rt_lib0concat_add(___nl__4, ___nl__5));
#line 215
c_rt_lib0clear(&___nl__5);
#line 215
c_rt_lib0delete(generator_c_priv0println(___ref___0, ___nl__4));
#line 215
c_rt_lib0clear(&___nl__4);
#line 217
c_rt_lib0move(&___nl__4,___get_global_const(0));
#line 217
c_rt_lib0move(&___nl__5,___get_global_const(1));
#line 217
label_106:
#line 217
c_rt_lib0move(&___nl__6, c_rt_lib0ge(___nl__4, ___nl__3));
#line 217
if(c_rt_lib0check_true_native(___nl__6)){ goto label_123;}
#line 218
c_rt_lib0move(&___nl__8, c_rt_lib0array_get(___nl__2, ___nl__4));
#line 218
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__8, ___get_global_const(329)));
#line 218
c_rt_lib0move(&___nl__9,___get_global_const(359));
#line 218
c_rt_lib0move(&___nl__9, c_rt_lib0concat_add(___nl__9, ___nl__4));
#line 218
c_rt_lib0move(&___nl__7, generator_c_priv0create_sim_to_memory(___nl__8, ___nl__9));
#line 218
c_rt_lib0clear(&___nl__9);
#line 218
c_rt_lib0clear(&___nl__8);
#line 218
c_rt_lib0move(&___nl__8,___get_global_const(360));
#line 218
c_rt_lib0move(&___nl__7, c_rt_lib0concat_add(___nl__7, ___nl__8));
#line 218
c_rt_lib0clear(&___nl__8);
#line 218
c_rt_lib0delete(generator_c_priv0println(___ref___0, ___nl__7));
#line 218
c_rt_lib0clear(&___nl__7);
#line 219
c_rt_lib0move(&___nl__4, c_rt_lib0add_mod(___nl__4, ___nl__5));
#line 219
goto label_106;
#line 219
label_123:
#line 219
c_rt_lib0clear(&___nl__4);
#line 219
c_rt_lib0clear(&___nl__5);
#line 219
c_rt_lib0clear(&___nl__6);
#line 220
c_rt_lib0move(&___nl__4,___get_global_const(361));
#line 221
c_rt_lib0move(&___nl__6,___get_global_const(362));
#line 221
c_rt_lib0move(&___nl__5, generator_c_priv0get_lib_fun(___nl__6));
#line 221
c_rt_lib0clear(&___nl__6);
#line 221
c_rt_lib0move(&___nl__4, c_rt_lib0concat_add(___nl__4, ___nl__5));
#line 221
c_rt_lib0clear(&___nl__5);
#line 221
c_rt_lib0move(&___nl__5,___get_global_const(363));
#line 221
c_rt_lib0move(&___nl__4, c_rt_lib0concat_add(___nl__4, ___nl__5));
#line 221
c_rt_lib0clear(&___nl__5);
#line 221
c_rt_lib0move(&___nl__5, generator_c_priv0arg_t());
#line 221
c_rt_lib0move(&___nl__4, c_rt_lib0concat_add(___nl__4, ___nl__5));
#line 221
c_rt_lib0clear(&___nl__5);
#line 221
c_rt_lib0move(&___nl__5,___get_global_const(364));
#line 221
c_rt_lib0move(&___nl__4, c_rt_lib0concat_add(___nl__4, ___nl__5));
#line 221
c_rt_lib0clear(&___nl__5);
#line 221
c_rt_lib0move(&___nl__5, generator_c_priv0arg_t());
#line 221
c_rt_lib0move(&___nl__4, c_rt_lib0concat_add(___nl__4, ___nl__5));
#line 221
c_rt_lib0clear(&___nl__5);
#line 222
c_rt_lib0move(&___nl__5,___get_global_const(365));
#line 222
c_rt_lib0move(&___nl__4, c_rt_lib0concat_add(___nl__4, ___nl__5));
#line 222
c_rt_lib0clear(&___nl__5);
#line 222
c_rt_lib0move(&___nl__4, c_rt_lib0concat_add(___nl__4, ___nl__3));
#line 222
c_rt_lib0move(&___nl__5,___get_global_const(366));
#line 222
c_rt_lib0move(&___nl__4, c_rt_lib0concat_add(___nl__4, ___nl__5));
#line 222
c_rt_lib0clear(&___nl__5);
#line 222
c_rt_lib0delete(generator_c_priv0println(___ref___0, ___nl__4));
#line 222
c_rt_lib0clear(&___nl__4);
#line 223
c_rt_lib0move(&___nl__5,___get_global_const(0));
#line 223
c_rt_lib0move(&___nl__6,___get_global_const(1));
#line 223
c_rt_lib0move(&___nl__7, c_rt_lib0array_len(___nl__1));
#line 223
label_157:
#line 223
c_rt_lib0move(&___nl__8, c_rt_lib0ge(___nl__5, ___nl__7));
#line 223
if(c_rt_lib0check_true_native(___nl__8)){ goto label_173;}
#line 223
c_rt_lib0move(&___nl__4, c_rt_lib0array_get(___nl__1, ___nl__5));
#line 224
c_rt_lib0move(&___nl__10,___get_global_const(367));
#line 224
c_rt_lib0move(&___nl__11, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(343)));
#line 224
c_rt_lib0move(&___nl__9, generator_c_priv0get_fun_name(___nl__4, ___nl__10, ___nl__11));
#line 224
c_rt_lib0clear(&___nl__11);
#line 224
c_rt_lib0clear(&___nl__10);
#line 224
c_rt_lib0move(&___nl__10,___get_global_const(368));
#line 224
c_rt_lib0move(&___nl__9, c_rt_lib0concat_add(___nl__9, ___nl__10));
#line 224
c_rt_lib0clear(&___nl__10);
#line 224
c_rt_lib0delete(generator_c_priv0println(___ref___0, ___nl__9));
#line 224
c_rt_lib0clear(&___nl__9);
#line 225
c_rt_lib0move(&___nl__5, c_rt_lib0add_mod(___nl__5, ___nl__6));
#line 225
goto label_157;
#line 225
label_173:
#line 225
c_rt_lib0clear(&___nl__4);
#line 225
c_rt_lib0clear(&___nl__5);
#line 225
c_rt_lib0clear(&___nl__6);
#line 225
c_rt_lib0clear(&___nl__7);
#line 225
c_rt_lib0clear(&___nl__8);
#line 226
c_rt_lib0move(&___nl__4,___get_global_const(253));
#line 226
c_rt_lib0delete(generator_c_priv0println(___ref___0, ___nl__4));
#line 226
c_rt_lib0clear(&___nl__4);
#line 227
c_rt_lib0move(&___nl__4, generator_c_priv0arg_t());
#line 227
c_rt_lib0move(&___nl__5,___get_global_const(369));
#line 227
c_rt_lib0move(&___nl__4, c_rt_lib0concat_add(___nl__4, ___nl__5));
#line 227
c_rt_lib0clear(&___nl__5);
#line 228
c_rt_lib0move(&___nl__5, generator_c_priv0arg_t());
#line 228
c_rt_lib0move(&___nl__4, c_rt_lib0concat_add(___nl__4, ___nl__5));
#line 228
c_rt_lib0clear(&___nl__5);
#line 228
c_rt_lib0move(&___nl__5,___get_global_const(370));
#line 228
c_rt_lib0move(&___nl__4, c_rt_lib0concat_add(___nl__4, ___nl__5));
#line 228
c_rt_lib0clear(&___nl__5);
#line 229
c_rt_lib0move(&___nl__6,___get_global_const(371));
#line 229
c_rt_lib0move(&___nl__8,___get_global_const(372));
#line 229
c_rt_lib0move(&___nl__9,___get_global_const(373));
#line 229
c_rt_lib0move(&___nl__10, generator_c_priv0arg_t());
#line 229
c_rt_lib0move(&___nl__9, c_rt_lib0concat_add(___nl__9, ___nl__10));
#line 229
c_rt_lib0clear(&___nl__10);
#line 229
c_rt_lib0move(&___nl__10,___get_global_const(374));
#line 229
c_rt_lib0move(&___nl__9, c_rt_lib0concat_add(___nl__9, ___nl__10));
#line 229
c_rt_lib0clear(&___nl__10);
#line 229
c_rt_lib0move(&___nl__7, c_rt_lib0array_mk(2, ___nl__8, ___nl__9));
#line 229
c_rt_lib0clear(&___nl__8);
#line 229
c_rt_lib0clear(&___nl__9);
#line 229
c_rt_lib0move(&___nl__5, generator_c_priv0get_fun_lib(___nl__6, ___nl__7));
#line 229
c_rt_lib0clear(&___nl__7);
#line 229
c_rt_lib0clear(&___nl__6);
#line 229
c_rt_lib0move(&___nl__4, c_rt_lib0concat_add(___nl__4, ___nl__5));
#line 229
c_rt_lib0clear(&___nl__5);
#line 229
c_rt_lib0move(&___nl__5,___get_global_const(375));
#line 229
c_rt_lib0move(&___nl__4, c_rt_lib0concat_add(___nl__4, ___nl__5));
#line 229
c_rt_lib0clear(&___nl__5);
#line 229
c_rt_lib0delete(generator_c_priv0println(___ref___0, ___nl__4));
#line 229
c_rt_lib0clear(&___nl__4);
#line 232
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(341)));
#line 232
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(340)));
#line 232
c_rt_lib0move(&___nl__4, c_rt_lib0hash_mk(2, ___get_global_const(34), ___nl__5, ___get_global_const(40), ___nl__6));
#line 232
c_rt_lib0clear(&___nl__5);
#line 232
c_rt_lib0clear(&___nl__6);
#line 232
c_rt_lib0clear(&___nl__1);
#line 232
c_rt_lib0clear(&___nl__2);
#line 232
c_rt_lib0clear(&___nl__3);
#line 232
return ___nl__4;
#line 232
c_rt_lib0clear(&___nl__4);
#line 232
c_rt_lib0clear(&___nl__2);
#line 232
c_rt_lib0clear(&___nl__3);
#line 232
c_rt_lib0clear(&___nl__1);
#line 232
return NULL;
}

ImmT generator_c_priv0get_include(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
#line 236
c_rt_lib0move(&___nl__1,___get_global_const(376));
#line 236
c_rt_lib0move(&___nl__1, c_rt_lib0concat_add(___nl__1, ___nl__0));
#line 236
c_rt_lib0move(&___nl__2,___get_global_const(377));
#line 236
c_rt_lib0move(&___nl__1, c_rt_lib0concat_add(___nl__1, ___nl__2));
#line 236
c_rt_lib0clear(&___nl__2);
#line 236
c_rt_lib0clear(&___nl__0);
#line 236
return ___nl__1;
#line 236
c_rt_lib0clear(&___nl__1);
#line 236
c_rt_lib0clear(&___nl__0);
#line 236
return NULL;
}

ImmT generator_c_priv0get_cr(){
return generator_c_priv0__const__sing(15);}
ImmT generator_c_priv0get_cr0cal() {
ImmT ___nl__0 = NULL;
#line 240
c_rt_lib0move(&___nl__0,___get_global_const(378));
#line 240
return ___nl__0;
#line 240
c_rt_lib0clear(&___nl__0);
#line 240
return NULL;
}

ImmT generator_c_priv0get_function_name(ImmT ___nl__0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
#line 249
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(182)));
#line 249
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__3, ___get_global_const(183)));
#line 249
if(c_rt_lib0check_true_native(___nl__4)){ goto label_8;}
#line 251
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__3, ___get_global_const(379)));
#line 251
if(c_rt_lib0check_true_native(___nl__4)){ goto label_11;}
#line 251
c_rt_lib0move(&___nl__4,___get_global_const(91));
#line 251
c_rt_lib0move(&___nl__4, c_rt_lib0array_mk(2, ___nl__4, ___nl__3));
#line 251
nl_die_arg(___nl__4);
#line 249
label_8:
#line 250
c_rt_lib0copy(&___nl__2, ___nl__1);
#line 251
goto label_16;
#line 251
label_11:
#line 252
c_rt_lib0move(&___nl__5,___get_global_const(2));
#line 252
c_rt_lib0copy(&___nl__2, ___nl__5);
#line 252
c_rt_lib0clear(&___nl__5);
#line 253
goto label_16;
#line 253
label_16:
#line 253
c_rt_lib0clear(&___nl__3);
#line 253
c_rt_lib0clear(&___nl__4);
#line 254
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(93)));
#line 254
c_rt_lib0move(&___nl__3, generator_c_priv0get_fun_name(___nl__2, ___nl__4, ___nl__1));
#line 254
c_rt_lib0clear(&___nl__4);
#line 254
c_rt_lib0clear(&___nl__0);
#line 254
c_rt_lib0clear(&___nl__1);
#line 254
c_rt_lib0clear(&___nl__2);
#line 254
return ___nl__3;
#line 254
c_rt_lib0clear(&___nl__3);
#line 254
c_rt_lib0clear(&___nl__2);
#line 254
c_rt_lib0clear(&___nl__0);
#line 254
c_rt_lib0clear(&___nl__1);
#line 254
return NULL;
}

ImmT generator_c_priv0get_function_header(ImmT ___nl__0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
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
#line 258
c_rt_lib0move(&___nl__2,___get_global_const(2));
#line 259
c_rt_lib0move(&___nl__3, generator_c_priv0get_function_name(___nl__0, ___nl__1));
#line 260
c_rt_lib0move(&___nl__4, generator_c_priv0arg_t());
#line 260
c_rt_lib0move(&___nl__4, c_rt_lib0concat_add(___nl__4, ___nl__3));
#line 260
c_rt_lib0move(&___nl__5,___get_global_const(373));
#line 260
c_rt_lib0move(&___nl__4, c_rt_lib0concat_add(___nl__4, ___nl__5));
#line 260
c_rt_lib0clear(&___nl__5);
#line 260
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__4));
#line 260
c_rt_lib0clear(&___nl__4);
#line 261
c_rt_lib0move(&___nl__4,___get_global_const(0));
#line 262
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(188)));
#line 262
c_rt_lib0move(&___nl__7,___get_global_const(0));
#line 262
c_rt_lib0move(&___nl__8,___get_global_const(1));
#line 262
c_rt_lib0move(&___nl__9, c_rt_lib0array_len(___nl__5));
#line 262
label_14:
#line 262
c_rt_lib0move(&___nl__10, c_rt_lib0ge(___nl__7, ___nl__9));
#line 262
if(c_rt_lib0check_true_native(___nl__10)){ goto label_61;}
#line 262
c_rt_lib0move(&___nl__6, c_rt_lib0array_get(___nl__5, ___nl__7));
#line 263
c_rt_lib0move(&___nl__11,___get_global_const(0));
#line 263
c_rt_lib0move(&___nl__11, c_rt_lib0num_eq(___nl__11, ___nl__4));
#line 263
c_rt_lib0move(&___nl__11, c_rt_lib0not(___nl__11));
#line 263
c_rt_lib0move(&___nl__11, c_rt_lib0not(___nl__11));
#line 263
if(c_rt_lib0check_true_native(___nl__11)){ goto label_27;}
#line 263
c_rt_lib0move(&___nl__12,___get_global_const(256));
#line 263
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__12));
#line 263
c_rt_lib0clear(&___nl__12);
#line 263
goto label_27;
#line 263
label_27:
#line 263
c_rt_lib0clear(&___nl__11);
#line 264
c_rt_lib0move(&___nl__11, c_rt_lib0priv_is(___nl__6, ___get_global_const(198)));
#line 264
if(c_rt_lib0check_true_native(___nl__11)){ goto label_36;}
#line 266
c_rt_lib0move(&___nl__11, c_rt_lib0priv_is(___nl__6, ___get_global_const(5)));
#line 266
if(c_rt_lib0check_true_native(___nl__11)){ goto label_45;}
#line 266
c_rt_lib0move(&___nl__11,___get_global_const(91));
#line 266
c_rt_lib0move(&___nl__11, c_rt_lib0array_mk(2, ___nl__11, ___nl__6));
#line 266
nl_die_arg(___nl__11);
#line 264
label_36:
#line 265
c_rt_lib0move(&___nl__12, generator_c_priv0arg_t());
#line 265
c_rt_lib0move(&___nl__13,___get_global_const(347));
#line 265
c_rt_lib0move(&___nl__12, c_rt_lib0concat_add(___nl__12, ___nl__13));
#line 265
c_rt_lib0clear(&___nl__13);
#line 265
c_rt_lib0move(&___nl__12, c_rt_lib0concat_add(___nl__12, ___nl__4));
#line 265
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__12));
#line 265
c_rt_lib0clear(&___nl__12);
#line 266
goto label_54;
#line 266
label_45:
#line 267
c_rt_lib0move(&___nl__12, generator_c_priv0arg_t());
#line 267
c_rt_lib0move(&___nl__13,___get_global_const(380));
#line 267
c_rt_lib0move(&___nl__12, c_rt_lib0concat_add(___nl__12, ___nl__13));
#line 267
c_rt_lib0clear(&___nl__13);
#line 267
c_rt_lib0move(&___nl__12, c_rt_lib0concat_add(___nl__12, ___nl__4));
#line 267
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__12));
#line 267
c_rt_lib0clear(&___nl__12);
#line 268
goto label_54;
#line 268
label_54:
#line 268
c_rt_lib0clear(&___nl__11);
#line 269
c_rt_lib0move(&___nl__11,___get_global_const(1));
#line 269
c_rt_lib0move(&___nl__4, c_rt_lib0add_mod(___nl__4, ___nl__11));
#line 269
c_rt_lib0clear(&___nl__11);
#line 270
c_rt_lib0move(&___nl__7, c_rt_lib0add_mod(___nl__7, ___nl__8));
#line 270
goto label_14;
#line 270
label_61:
#line 270
c_rt_lib0clear(&___nl__5);
#line 270
c_rt_lib0clear(&___nl__6);
#line 270
c_rt_lib0clear(&___nl__7);
#line 270
c_rt_lib0clear(&___nl__8);
#line 270
c_rt_lib0clear(&___nl__9);
#line 270
c_rt_lib0clear(&___nl__10);
#line 271
c_rt_lib0move(&___nl__5,___get_global_const(260));
#line 271
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__5));
#line 271
c_rt_lib0clear(&___nl__5);
#line 272
c_rt_lib0clear(&___nl__0);
#line 272
c_rt_lib0clear(&___nl__1);
#line 272
c_rt_lib0clear(&___nl__3);
#line 272
c_rt_lib0clear(&___nl__4);
#line 272
return ___nl__2;
#line 272
c_rt_lib0clear(&___nl__2);
#line 272
c_rt_lib0clear(&___nl__3);
#line 272
c_rt_lib0clear(&___nl__4);
#line 272
c_rt_lib0clear(&___nl__0);
#line 272
c_rt_lib0clear(&___nl__1);
#line 272
return NULL;
}

ImmT generator_c_priv0get_const(ImmT * ___ref___0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__1);
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
#line 276
c_rt_lib0move(&___nl__2,___get_global_const(1));
#line 276
c_rt_lib0move(&___nl__2, c_rt_lib0unary_minus(___nl__2));
#line 277
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(328)));
#line 277
c_rt_lib0move(&___nl__3, hash0has_key(___nl__4, ___nl__1));
#line 277
c_rt_lib0clear(&___nl__4);
#line 277
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 277
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 277
if(c_rt_lib0check_true_native(___nl__3)){ goto label_28;}
#line 278
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(327)));
#line 278
c_rt_lib0move(&___nl__4, array0len(___nl__5));
#line 278
c_rt_lib0clear(&___nl__5);
#line 278
c_rt_lib0copy(&___nl__2, ___nl__4);
#line 278
c_rt_lib0clear(&___nl__4);
#line 279
c_rt_lib0move(&___nl__4,___get_global_const(327));
#line 279
c_rt_lib0move(&___nl__4, c_rt_lib0get_ref_hash(*___ref___0, ___nl__4));
#line 279
c_rt_lib0delete(array0push(&___nl__4, ___nl__1));
#line 279
c_rt_lib0move(&___nl__5,___get_global_const(327));
#line 279
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__5, ___nl__4));
#line 279
c_rt_lib0clear(&___nl__5);
#line 279
c_rt_lib0clear(&___nl__4);
#line 280
c_rt_lib0move(&___nl__4,___get_global_const(328));
#line 280
c_rt_lib0move(&___nl__4, c_rt_lib0get_ref_hash(*___ref___0, ___nl__4));
#line 280
c_rt_lib0delete(hash0set_value(&___nl__4, ___nl__1, ___nl__2));
#line 280
c_rt_lib0move(&___nl__5,___get_global_const(328));
#line 280
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__5, ___nl__4));
#line 280
c_rt_lib0clear(&___nl__5);
#line 280
c_rt_lib0clear(&___nl__4);
#line 281
goto label_35;
#line 281
label_28:
#line 282
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(328)));
#line 282
c_rt_lib0move(&___nl__4, hash0get_value(___nl__5, ___nl__1));
#line 282
c_rt_lib0clear(&___nl__5);
#line 282
c_rt_lib0copy(&___nl__2, ___nl__4);
#line 282
c_rt_lib0clear(&___nl__4);
#line 283
goto label_35;
#line 283
label_35:
#line 283
c_rt_lib0clear(&___nl__3);
#line 284
c_rt_lib0clear(&___nl__1);
#line 284
return ___nl__2;
#line 284
c_rt_lib0clear(&___nl__2);
#line 284
c_rt_lib0clear(&___nl__1);
#line 284
return NULL;
}

ImmT generator_c_priv0insert_const_to_modules_hash(ImmT * ___ref___0,ImmT ___nl__1,ImmT ___nl__2) {
c_rt_lib0arg_val(___nl__1);
c_rt_lib0arg_val(___nl__2);
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
#line 288
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(332)));
#line 288
c_rt_lib0move(&___nl__3, hash0get_value(___nl__4, ___nl__2));
#line 288
c_rt_lib0clear(&___nl__4);
#line 289
c_rt_lib0move(&___nl__4,___get_global_const(2));
#line 289
c_rt_lib0delete(hash0set_value(&___nl__3, ___nl__1, ___nl__4));
#line 289
c_rt_lib0clear(&___nl__4);
#line 290
c_rt_lib0move(&___nl__4,___get_global_const(332));
#line 290
c_rt_lib0move(&___nl__4, c_rt_lib0get_ref_hash(*___ref___0, ___nl__4));
#line 290
c_rt_lib0delete(hash0set_value(&___nl__4, ___nl__2, ___nl__3));
#line 290
c_rt_lib0move(&___nl__5,___get_global_const(332));
#line 290
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__5, ___nl__4));
#line 290
c_rt_lib0clear(&___nl__5);
#line 290
c_rt_lib0clear(&___nl__4);
#line 290
c_rt_lib0clear(&___nl__3);
#line 290
c_rt_lib0clear(&___nl__1);
#line 290
c_rt_lib0clear(&___nl__2);
#line 290
return NULL;
}

ImmT generator_c_priv0get_global_const(ImmT * ___ref___0,ImmT ___nl__1,ImmT ___nl__2) {
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
#line 294
c_rt_lib0move(&___nl__3,___get_global_const(1));
#line 294
c_rt_lib0move(&___nl__3, c_rt_lib0unary_minus(___nl__3));
#line 295
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(328)));
#line 295
c_rt_lib0move(&___nl__4, hash0has_key(___nl__5, ___nl__1));
#line 295
c_rt_lib0clear(&___nl__5);
#line 295
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 295
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 295
if(c_rt_lib0check_true_native(___nl__4)){ goto label_77;}
#line 296
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(331)));
#line 296
c_rt_lib0move(&___nl__5, array0len(___nl__6));
#line 296
c_rt_lib0clear(&___nl__6);
#line 296
c_rt_lib0move(&___nl__6,___get_global_const(0));
#line 296
c_rt_lib0move(&___nl__5, c_rt_lib0gt(___nl__5, ___nl__6));
#line 296
c_rt_lib0clear(&___nl__6);
#line 296
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 296
if(c_rt_lib0check_true_native(___nl__5)){ goto label_48;}
#line 297
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(331)));
#line 297
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(331)));
#line 297
c_rt_lib0move(&___nl__7, array0len(___nl__8));
#line 297
c_rt_lib0clear(&___nl__8);
#line 297
c_rt_lib0move(&___nl__8,___get_global_const(1));
#line 297
c_rt_lib0move(&___nl__7, c_rt_lib0sub_mod(___nl__7, ___nl__8));
#line 297
c_rt_lib0clear(&___nl__8);
#line 297
c_rt_lib0move(&___nl__6, c_rt_lib0array_get(___nl__6, ___nl__7));
#line 297
c_rt_lib0clear(&___nl__7);
#line 297
c_rt_lib0copy(&___nl__3, ___nl__6);
#line 297
c_rt_lib0clear(&___nl__6);
#line 298
c_rt_lib0move(&___nl__6,___get_global_const(331));
#line 298
c_rt_lib0move(&___nl__6, c_rt_lib0get_ref_hash(*___ref___0, ___nl__6));
#line 298
c_rt_lib0delete(array0pop(&___nl__6));
#line 298
c_rt_lib0move(&___nl__7,___get_global_const(331));
#line 298
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__7, ___nl__6));
#line 298
c_rt_lib0clear(&___nl__7);
#line 298
c_rt_lib0clear(&___nl__6);
#line 299
c_rt_lib0move(&___nl__7,___get_global_const(1));
#line 299
c_rt_lib0move(&___nl__6, c_rt_lib0hash_mk(2, ___get_global_const(329), ___nl__1, ___get_global_const(330), ___nl__7));
#line 299
c_rt_lib0clear(&___nl__7);
#line 299
c_rt_lib0move(&___nl__7,___get_global_const(327));
#line 299
c_rt_lib0move(&___nl__7, c_rt_lib0get_ref_hash(*___ref___0, ___nl__7));
#line 299
c_rt_lib0copy(&___nl__8, ___nl__6);
#line 299
c_rt_lib0array_set(&___nl__7, ___nl__3, ___nl__8);
#line 299
c_rt_lib0move(&___nl__9,___get_global_const(327));
#line 299
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__9, ___nl__7));
#line 299
c_rt_lib0clear(&___nl__9);
#line 299
c_rt_lib0clear(&___nl__6);
#line 299
c_rt_lib0clear(&___nl__7);
#line 299
c_rt_lib0clear(&___nl__8);
#line 300
goto label_66;
#line 300
label_48:
#line 301
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(327)));
#line 301
c_rt_lib0move(&___nl__6, array0len(___nl__7));
#line 301
c_rt_lib0clear(&___nl__7);
#line 301
c_rt_lib0copy(&___nl__3, ___nl__6);
#line 301
c_rt_lib0clear(&___nl__6);
#line 302
c_rt_lib0move(&___nl__6,___get_global_const(327));
#line 302
c_rt_lib0move(&___nl__6, c_rt_lib0get_ref_hash(*___ref___0, ___nl__6));
#line 302
c_rt_lib0move(&___nl__8,___get_global_const(1));
#line 302
c_rt_lib0move(&___nl__7, c_rt_lib0hash_mk(2, ___get_global_const(329), ___nl__1, ___get_global_const(330), ___nl__8));
#line 302
c_rt_lib0clear(&___nl__8);
#line 302
c_rt_lib0delete(array0push(&___nl__6, ___nl__7));
#line 302
c_rt_lib0clear(&___nl__7);
#line 302
c_rt_lib0move(&___nl__7,___get_global_const(327));
#line 302
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__7, ___nl__6));
#line 302
c_rt_lib0clear(&___nl__7);
#line 302
c_rt_lib0clear(&___nl__6);
#line 303
goto label_66;
#line 303
label_66:
#line 303
c_rt_lib0clear(&___nl__5);
#line 304
c_rt_lib0delete(generator_c_priv0insert_const_to_modules_hash(___ref___0, ___nl__1, ___nl__2));
#line 305
c_rt_lib0move(&___nl__5,___get_global_const(328));
#line 305
c_rt_lib0move(&___nl__5, c_rt_lib0get_ref_hash(*___ref___0, ___nl__5));
#line 305
c_rt_lib0delete(hash0set_value(&___nl__5, ___nl__1, ___nl__3));
#line 305
c_rt_lib0move(&___nl__6,___get_global_const(328));
#line 305
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__6, ___nl__5));
#line 305
c_rt_lib0clear(&___nl__6);
#line 305
c_rt_lib0clear(&___nl__5);
#line 306
goto label_113;
#line 306
label_77:
#line 307
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(328)));
#line 307
c_rt_lib0move(&___nl__5, hash0get_value(___nl__6, ___nl__1));
#line 307
c_rt_lib0clear(&___nl__6);
#line 307
c_rt_lib0copy(&___nl__3, ___nl__5);
#line 307
c_rt_lib0clear(&___nl__5);
#line 308
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(332)));
#line 308
c_rt_lib0move(&___nl__5, hash0get_value(___nl__6, ___nl__2));
#line 308
c_rt_lib0clear(&___nl__6);
#line 309
c_rt_lib0move(&___nl__6, hash0has_key(___nl__5, ___nl__1));
#line 309
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 309
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 309
if(c_rt_lib0check_true_native(___nl__6)){ goto label_109;}
#line 310
c_rt_lib0move(&___nl__7,___get_global_const(327));
#line 310
c_rt_lib0move(&___nl__7, c_rt_lib0get_ref_hash(*___ref___0, ___nl__7));
#line 310
c_rt_lib0move(&___nl__8, c_rt_lib0get_ref_arr(___nl__7, ___nl__3));
#line 310
c_rt_lib0move(&___nl__9,___get_global_const(330));
#line 310
c_rt_lib0move(&___nl__9, c_rt_lib0get_ref_hash(___nl__8, ___nl__9));
#line 310
c_rt_lib0move(&___nl__10,___get_global_const(1));
#line 310
c_rt_lib0move(&___nl__9, c_rt_lib0add_mod(___nl__9, ___nl__10));
#line 310
c_rt_lib0move(&___nl__11,___get_global_const(330));
#line 310
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__8, ___nl__11, ___nl__9));
#line 310
c_rt_lib0delete(c_rt_lib0set_ref_arr(&___nl__7, ___nl__3, ___nl__8));
#line 310
c_rt_lib0move(&___nl__11,___get_global_const(327));
#line 310
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__11, ___nl__7));
#line 310
c_rt_lib0clear(&___nl__11);
#line 310
c_rt_lib0clear(&___nl__7);
#line 310
c_rt_lib0clear(&___nl__8);
#line 310
c_rt_lib0clear(&___nl__9);
#line 310
c_rt_lib0clear(&___nl__10);
#line 311
c_rt_lib0delete(generator_c_priv0insert_const_to_modules_hash(___ref___0, ___nl__1, ___nl__2));
#line 312
goto label_109;
#line 312
label_109:
#line 312
c_rt_lib0clear(&___nl__6);
#line 312
c_rt_lib0clear(&___nl__5);
#line 313
goto label_113;
#line 313
label_113:
#line 313
c_rt_lib0clear(&___nl__4);
#line 314
c_rt_lib0clear(&___nl__1);
#line 314
c_rt_lib0clear(&___nl__2);
#line 314
return ___nl__3;
#line 314
c_rt_lib0clear(&___nl__3);
#line 314
c_rt_lib0clear(&___nl__1);
#line 314
c_rt_lib0clear(&___nl__2);
#line 314
return NULL;
}

ImmT generator_c0clear_module_from_state0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 2, "generator_c0clear_module_from_state");
return generator_c0clear_module_from_state(&_tab[0], _tab[1]);}
ImmT generator_c0clear_module_from_state(ImmT * ___ref___0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__1);
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
#line 318
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(159)));
#line 318
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(332)));
#line 318
c_rt_lib0move(&___nl__2, hash0has_key(___nl__3, ___nl__1));
#line 318
c_rt_lib0clear(&___nl__3);
#line 318
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 318
if(c_rt_lib0check_true_native(___nl__2)){ goto label_99;}
#line 319
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(159)));
#line 319
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(332)));
#line 319
c_rt_lib0move(&___nl__3, hash0get_value(___nl__4, ___nl__1));
#line 319
c_rt_lib0clear(&___nl__4);
#line 320
c_rt_lib0move(&___nl__6, c_rt_lib0init_iter(___nl__3));
#line 320
label_11:
#line 320
c_rt_lib0move(&___nl__4, c_rt_lib0is_end_hash(___nl__6));
#line 320
if(c_rt_lib0check_true_native(___nl__4)){ goto label_81;}
#line 320
c_rt_lib0move(&___nl__4, c_rt_lib0get_key_iter(___nl__6));
#line 320
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value(___nl__3, ___nl__4));
#line 321
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(159)));
#line 321
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__8, ___get_global_const(328)));
#line 321
c_rt_lib0move(&___nl__7, hash0get_value(___nl__8, ___nl__4));
#line 321
c_rt_lib0clear(&___nl__8);
#line 322
c_rt_lib0move(&___nl__8,___get_global_const(159));
#line 322
c_rt_lib0move(&___nl__8, c_rt_lib0get_ref_hash(*___ref___0, ___nl__8));
#line 322
c_rt_lib0move(&___nl__9,___get_global_const(327));
#line 322
c_rt_lib0move(&___nl__9, c_rt_lib0get_ref_hash(___nl__8, ___nl__9));
#line 322
c_rt_lib0move(&___nl__10, c_rt_lib0get_ref_arr(___nl__9, ___nl__7));
#line 322
c_rt_lib0move(&___nl__11,___get_global_const(330));
#line 322
c_rt_lib0move(&___nl__11, c_rt_lib0get_ref_hash(___nl__10, ___nl__11));
#line 322
c_rt_lib0move(&___nl__12,___get_global_const(1));
#line 322
c_rt_lib0move(&___nl__11, c_rt_lib0sub_mod(___nl__11, ___nl__12));
#line 322
c_rt_lib0move(&___nl__13,___get_global_const(330));
#line 322
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__10, ___nl__13, ___nl__11));
#line 322
c_rt_lib0delete(c_rt_lib0set_ref_arr(&___nl__9, ___nl__7, ___nl__10));
#line 322
c_rt_lib0move(&___nl__13,___get_global_const(327));
#line 322
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__8, ___nl__13, ___nl__9));
#line 322
c_rt_lib0move(&___nl__13,___get_global_const(159));
#line 322
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__13, ___nl__8));
#line 322
c_rt_lib0clear(&___nl__13);
#line 322
c_rt_lib0clear(&___nl__8);
#line 322
c_rt_lib0clear(&___nl__9);
#line 322
c_rt_lib0clear(&___nl__10);
#line 322
c_rt_lib0clear(&___nl__11);
#line 322
c_rt_lib0clear(&___nl__12);
#line 323
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(159)));
#line 323
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__8, ___get_global_const(327)));
#line 323
c_rt_lib0move(&___nl__8, c_rt_lib0array_get(___nl__8, ___nl__7));
#line 323
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__8, ___get_global_const(330)));
#line 323
c_rt_lib0move(&___nl__9,___get_global_const(0));
#line 323
c_rt_lib0move(&___nl__8, c_rt_lib0num_eq(___nl__8, ___nl__9));
#line 323
c_rt_lib0clear(&___nl__9);
#line 323
c_rt_lib0move(&___nl__8, c_rt_lib0not(___nl__8));
#line 323
if(c_rt_lib0check_true_native(___nl__8)){ goto label_76;}
#line 324
c_rt_lib0move(&___nl__9,___get_global_const(159));
#line 324
c_rt_lib0move(&___nl__9, c_rt_lib0get_ref_hash(*___ref___0, ___nl__9));
#line 324
c_rt_lib0move(&___nl__10,___get_global_const(328));
#line 324
c_rt_lib0move(&___nl__10, c_rt_lib0get_ref_hash(___nl__9, ___nl__10));
#line 324
c_rt_lib0delete(hash0delete(&___nl__10, ___nl__4));
#line 324
c_rt_lib0move(&___nl__11,___get_global_const(328));
#line 324
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__9, ___nl__11, ___nl__10));
#line 324
c_rt_lib0move(&___nl__11,___get_global_const(159));
#line 324
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__11, ___nl__9));
#line 324
c_rt_lib0clear(&___nl__11);
#line 324
c_rt_lib0clear(&___nl__9);
#line 324
c_rt_lib0clear(&___nl__10);
#line 325
c_rt_lib0move(&___nl__9,___get_global_const(159));
#line 325
c_rt_lib0move(&___nl__9, c_rt_lib0get_ref_hash(*___ref___0, ___nl__9));
#line 325
c_rt_lib0move(&___nl__10,___get_global_const(331));
#line 325
c_rt_lib0move(&___nl__10, c_rt_lib0get_ref_hash(___nl__9, ___nl__10));
#line 325
c_rt_lib0delete(array0push(&___nl__10, ___nl__7));
#line 325
c_rt_lib0move(&___nl__11,___get_global_const(331));
#line 325
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__9, ___nl__11, ___nl__10));
#line 325
c_rt_lib0move(&___nl__11,___get_global_const(159));
#line 325
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__11, ___nl__9));
#line 325
c_rt_lib0clear(&___nl__11);
#line 325
c_rt_lib0clear(&___nl__9);
#line 325
c_rt_lib0clear(&___nl__10);
#line 326
goto label_76;
#line 326
label_76:
#line 326
c_rt_lib0clear(&___nl__8);
#line 326
c_rt_lib0clear(&___nl__7);
#line 327
c_rt_lib0move(&___nl__6, c_rt_lib0next_iter(___nl__6));
#line 327
goto label_11;
#line 327
label_81:
#line 327
c_rt_lib0clear(&___nl__4);
#line 327
c_rt_lib0clear(&___nl__5);
#line 327
c_rt_lib0clear(&___nl__6);
#line 328
c_rt_lib0move(&___nl__4,___get_global_const(159));
#line 328
c_rt_lib0move(&___nl__4, c_rt_lib0get_ref_hash(*___ref___0, ___nl__4));
#line 328
c_rt_lib0move(&___nl__5,___get_global_const(332));
#line 328
c_rt_lib0move(&___nl__5, c_rt_lib0get_ref_hash(___nl__4, ___nl__5));
#line 328
c_rt_lib0delete(hash0delete(&___nl__5, ___nl__1));
#line 328
c_rt_lib0move(&___nl__6,___get_global_const(332));
#line 328
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__4, ___nl__6, ___nl__5));
#line 328
c_rt_lib0move(&___nl__6,___get_global_const(159));
#line 328
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__6, ___nl__4));
#line 328
c_rt_lib0clear(&___nl__6);
#line 328
c_rt_lib0clear(&___nl__4);
#line 328
c_rt_lib0clear(&___nl__5);
#line 328
c_rt_lib0clear(&___nl__3);
#line 329
goto label_99;
#line 329
label_99:
#line 329
c_rt_lib0clear(&___nl__2);
#line 329
c_rt_lib0clear(&___nl__1);
#line 329
return NULL;
}

ImmT generator_c_priv0get_const_sim(ImmT * ___ref___0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__1);
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
#line 333
c_rt_lib0move(&___nl__3,___get_global_const(159));
#line 333
c_rt_lib0move(&___nl__3, c_rt_lib0get_ref_hash(*___ref___0, ___nl__3));
#line 333
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(343)));
#line 333
c_rt_lib0move(&___nl__2, generator_c_priv0get_global_const(&___nl__3, ___nl__1, ___nl__4));
#line 333
c_rt_lib0clear(&___nl__4);
#line 333
c_rt_lib0move(&___nl__4,___get_global_const(159));
#line 333
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__4, ___nl__3));
#line 333
c_rt_lib0clear(&___nl__4);
#line 333
c_rt_lib0clear(&___nl__3);
#line 334
c_rt_lib0move(&___nl__3,___get_global_const(381));
#line 334
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__2));
#line 334
c_rt_lib0move(&___nl__4,___get_global_const(260));
#line 334
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 334
c_rt_lib0clear(&___nl__4);
#line 334
c_rt_lib0clear(&___nl__1);
#line 334
c_rt_lib0clear(&___nl__2);
#line 334
return ___nl__3;
#line 334
c_rt_lib0clear(&___nl__3);
#line 334
c_rt_lib0clear(&___nl__2);
#line 334
c_rt_lib0clear(&___nl__1);
#line 334
return NULL;
}

ImmT generator_c_priv0get_const_singleton(ImmT * ___ref___0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__1);
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
#line 338
c_rt_lib0move(&___nl__3,___get_global_const(196));
#line 338
c_rt_lib0move(&___nl__3, c_rt_lib0get_ref_hash(*___ref___0, ___nl__3));
#line 338
c_rt_lib0move(&___nl__4,___get_global_const(338));
#line 338
c_rt_lib0move(&___nl__4, c_rt_lib0get_ref_hash(___nl__3, ___nl__4));
#line 338
c_rt_lib0move(&___nl__2, generator_c_priv0get_const(&___nl__4, ___nl__1));
#line 338
c_rt_lib0move(&___nl__5,___get_global_const(338));
#line 338
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__3, ___nl__5, ___nl__4));
#line 338
c_rt_lib0move(&___nl__5,___get_global_const(196));
#line 338
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__5, ___nl__3));
#line 338
c_rt_lib0clear(&___nl__5);
#line 338
c_rt_lib0clear(&___nl__3);
#line 338
c_rt_lib0clear(&___nl__4);
#line 339
c_rt_lib0move(&___nl__4,___get_global_const(2));
#line 339
c_rt_lib0move(&___nl__5,___get_global_const(382));
#line 339
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(343)));
#line 339
c_rt_lib0move(&___nl__3, generator_c_priv0get_fun_name(___nl__4, ___nl__5, ___nl__6));
#line 339
c_rt_lib0clear(&___nl__6);
#line 339
c_rt_lib0clear(&___nl__5);
#line 339
c_rt_lib0clear(&___nl__4);
#line 339
c_rt_lib0move(&___nl__4,___get_global_const(373));
#line 339
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 339
c_rt_lib0clear(&___nl__4);
#line 339
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__2));
#line 339
c_rt_lib0move(&___nl__4,___get_global_const(260));
#line 339
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 339
c_rt_lib0clear(&___nl__4);
#line 339
c_rt_lib0clear(&___nl__1);
#line 339
c_rt_lib0clear(&___nl__2);
#line 339
return ___nl__3;
#line 339
c_rt_lib0clear(&___nl__3);
#line 339
c_rt_lib0clear(&___nl__2);
#line 339
c_rt_lib0clear(&___nl__1);
#line 339
return NULL;
}

ImmT generator_c_priv0get_func_ptr_header(ImmT ___nl__0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
#line 343
c_rt_lib0move(&___nl__2, generator_c_priv0arg_t());
#line 343
c_rt_lib0move(&___nl__3, generator_c_priv0get_function_name(___nl__0, ___nl__1));
#line 343
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__3));
#line 343
c_rt_lib0clear(&___nl__3);
#line 343
c_rt_lib0move(&___nl__3,___get_global_const(383));
#line 343
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__3));
#line 343
c_rt_lib0clear(&___nl__3);
#line 343
c_rt_lib0clear(&___nl__0);
#line 343
c_rt_lib0clear(&___nl__1);
#line 343
return ___nl__2;
#line 343
c_rt_lib0clear(&___nl__2);
#line 343
c_rt_lib0clear(&___nl__0);
#line 343
c_rt_lib0clear(&___nl__1);
#line 343
return NULL;
}

ImmT generator_c_priv0print_mod(ImmT * ___ref___0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__1);
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
#line 347
c_rt_lib0move(&___nl__2, generator_c_priv0get_cr());
#line 347
c_rt_lib0delete(generator_c_priv0print_to_header(___ref___0, ___nl__2));
#line 347
c_rt_lib0clear(&___nl__2);
#line 348
c_rt_lib0move(&___nl__2,___get_global_const(351));
#line 348
c_rt_lib0move(&___nl__3, string0lf());
#line 348
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__3));
#line 348
c_rt_lib0clear(&___nl__3);
#line 348
c_rt_lib0delete(generator_c_priv0print_to_header(___ref___0, ___nl__2));
#line 348
c_rt_lib0clear(&___nl__2);
#line 349
c_rt_lib0move(&___nl__3,___get_global_const(225));
#line 349
c_rt_lib0move(&___nl__2, generator_c_priv0get_include(___nl__3));
#line 349
c_rt_lib0clear(&___nl__3);
#line 349
c_rt_lib0move(&___nl__3, string0lf());
#line 349
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__3));
#line 349
c_rt_lib0clear(&___nl__3);
#line 349
c_rt_lib0delete(generator_c_priv0print_to_header(___ref___0, ___nl__2));
#line 349
c_rt_lib0clear(&___nl__2);
#line 350
c_rt_lib0move(&___nl__2, generator_c_priv0get_cr());
#line 350
c_rt_lib0delete(generator_c_priv0print(___ref___0, ___nl__2));
#line 350
c_rt_lib0clear(&___nl__2);
#line 351
c_rt_lib0move(&___nl__3,___get_global_const(225));
#line 351
c_rt_lib0move(&___nl__2, generator_c_priv0get_include(___nl__3));
#line 351
c_rt_lib0clear(&___nl__3);
#line 351
c_rt_lib0delete(generator_c_priv0println(___ref___0, ___nl__2));
#line 351
c_rt_lib0clear(&___nl__2);
#line 352
c_rt_lib0move(&___nl__3,___get_global_const(352));
#line 352
c_rt_lib0move(&___nl__2, generator_c_priv0get_include(___nl__3));
#line 352
c_rt_lib0clear(&___nl__3);
#line 352
c_rt_lib0delete(generator_c_priv0println(___ref___0, ___nl__2));
#line 352
c_rt_lib0clear(&___nl__2);
#line 353
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(343)));
#line 353
c_rt_lib0move(&___nl__2, generator_c_priv0get_include(___nl__3));
#line 353
c_rt_lib0clear(&___nl__3);
#line 353
c_rt_lib0delete(generator_c_priv0println(___ref___0, ___nl__2));
#line 353
c_rt_lib0clear(&___nl__2);
#line 354
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(384)));
#line 354
c_rt_lib0move(&___nl__4,___get_global_const(0));
#line 354
c_rt_lib0move(&___nl__5,___get_global_const(1));
#line 354
c_rt_lib0move(&___nl__6, c_rt_lib0array_len(___nl__2));
#line 354
label_39:
#line 354
c_rt_lib0move(&___nl__7, c_rt_lib0ge(___nl__4, ___nl__6));
#line 354
if(c_rt_lib0check_true_native(___nl__7)){ goto label_48;}
#line 354
c_rt_lib0move(&___nl__3, c_rt_lib0array_get(___nl__2, ___nl__4));
#line 355
c_rt_lib0move(&___nl__8, generator_c_priv0get_include(___nl__3));
#line 355
c_rt_lib0delete(generator_c_priv0println(___ref___0, ___nl__8));
#line 355
c_rt_lib0clear(&___nl__8);
#line 356
c_rt_lib0move(&___nl__4, c_rt_lib0add_mod(___nl__4, ___nl__5));
#line 356
goto label_39;
#line 356
label_48:
#line 356
c_rt_lib0clear(&___nl__2);
#line 356
c_rt_lib0clear(&___nl__3);
#line 356
c_rt_lib0clear(&___nl__4);
#line 356
c_rt_lib0clear(&___nl__5);
#line 356
c_rt_lib0clear(&___nl__6);
#line 356
c_rt_lib0clear(&___nl__7);
#line 357
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(341)));
#line 358
c_rt_lib0move(&___nl__3,___get_global_const(2));
#line 358
c_rt_lib0copy(&___nl__4, ___nl__3);
#line 358
c_rt_lib0hash_set_value_dec(___ref___0, ___get_global_const(341), ___nl__4);
#line 358
c_rt_lib0clear(&___nl__3);
#line 358
c_rt_lib0clear(&___nl__4);
#line 359
c_rt_lib0move(&___nl__3,___get_global_const(385));
#line 359
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(343)));
#line 359
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 359
c_rt_lib0clear(&___nl__4);
#line 359
c_rt_lib0move(&___nl__4,___get_global_const(386));
#line 359
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 359
c_rt_lib0clear(&___nl__4);
#line 359
c_rt_lib0move(&___nl__4, string0lf());
#line 359
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 359
c_rt_lib0clear(&___nl__4);
#line 359
c_rt_lib0delete(generator_c_priv0println(___ref___0, ___nl__3));
#line 359
c_rt_lib0clear(&___nl__3);
#line 360
c_rt_lib0move(&___nl__3,___get_global_const(387));
#line 360
c_rt_lib0move(&___nl__4, generator_c_priv0arg_t());
#line 360
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 360
c_rt_lib0clear(&___nl__4);
#line 360
c_rt_lib0move(&___nl__4,___get_global_const(388));
#line 360
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 360
c_rt_lib0clear(&___nl__4);
#line 360
c_rt_lib0delete(generator_c_priv0println(___ref___0, ___nl__3));
#line 360
c_rt_lib0clear(&___nl__3);
#line 361
c_rt_lib0move(&___nl__3,___get_global_const(389));
#line 361
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(343)));
#line 361
c_rt_lib0move(&___nl__6,___get_global_const(367));
#line 361
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(343)));
#line 361
c_rt_lib0move(&___nl__4, generator_c_priv0get_fun_name(___nl__5, ___nl__6, ___nl__7));
#line 361
c_rt_lib0clear(&___nl__7);
#line 361
c_rt_lib0clear(&___nl__6);
#line 361
c_rt_lib0clear(&___nl__5);
#line 361
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 361
c_rt_lib0clear(&___nl__4);
#line 361
c_rt_lib0move(&___nl__4,___get_global_const(368));
#line 361
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 361
c_rt_lib0clear(&___nl__4);
#line 362
c_rt_lib0move(&___nl__4, string0lf());
#line 362
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 362
c_rt_lib0clear(&___nl__4);
#line 362
c_rt_lib0delete(generator_c_priv0print_to_header(___ref___0, ___nl__3));
#line 362
c_rt_lib0clear(&___nl__3);
#line 363
c_rt_lib0move(&___nl__3, generator_c_priv0arg_t());
#line 363
c_rt_lib0move(&___nl__5,___get_global_const(2));
#line 363
c_rt_lib0move(&___nl__6,___get_global_const(390));
#line 363
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(343)));
#line 363
c_rt_lib0move(&___nl__4, generator_c_priv0get_fun_name(___nl__5, ___nl__6, ___nl__7));
#line 363
c_rt_lib0clear(&___nl__7);
#line 363
c_rt_lib0clear(&___nl__6);
#line 363
c_rt_lib0clear(&___nl__5);
#line 363
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 363
c_rt_lib0clear(&___nl__4);
#line 363
c_rt_lib0move(&___nl__4,___get_global_const(391));
#line 363
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 363
c_rt_lib0clear(&___nl__4);
#line 363
c_rt_lib0delete(generator_c_priv0println(___ref___0, ___nl__3));
#line 363
c_rt_lib0clear(&___nl__3);
#line 364
c_rt_lib0move(&___nl__3, generator_c_priv0arg_t());
#line 364
c_rt_lib0move(&___nl__5,___get_global_const(2));
#line 364
c_rt_lib0move(&___nl__6,___get_global_const(382));
#line 364
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(343)));
#line 364
c_rt_lib0move(&___nl__4, generator_c_priv0get_fun_name(___nl__5, ___nl__6, ___nl__7));
#line 364
c_rt_lib0clear(&___nl__7);
#line 364
c_rt_lib0clear(&___nl__6);
#line 364
c_rt_lib0clear(&___nl__5);
#line 364
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 364
c_rt_lib0clear(&___nl__4);
#line 364
c_rt_lib0move(&___nl__4,___get_global_const(391));
#line 364
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 364
c_rt_lib0clear(&___nl__4);
#line 364
c_rt_lib0move(&___nl__4, string0lf());
#line 364
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 364
c_rt_lib0clear(&___nl__4);
#line 364
c_rt_lib0delete(generator_c_priv0println(___ref___0, ___nl__3));
#line 364
c_rt_lib0clear(&___nl__3);
#line 365
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(92)));
#line 365
c_rt_lib0move(&___nl__5,___get_global_const(0));
#line 365
c_rt_lib0move(&___nl__6,___get_global_const(1));
#line 365
c_rt_lib0move(&___nl__7, c_rt_lib0array_len(___nl__3));
#line 365
label_137:
#line 365
c_rt_lib0move(&___nl__8, c_rt_lib0ge(___nl__5, ___nl__7));
#line 365
if(c_rt_lib0check_true_native(___nl__8)){ goto label_184;}
#line 365
c_rt_lib0move(&___nl__4, c_rt_lib0array_get(___nl__3, ___nl__5));
#line 366
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(343)));
#line 366
c_rt_lib0move(&___nl__9, generator_c_priv0get_function_header(___nl__4, ___nl__10));
#line 366
c_rt_lib0clear(&___nl__10);
#line 367
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(182)));
#line 367
c_rt_lib0move(&___nl__11, c_rt_lib0priv_is(___nl__10, ___get_global_const(183)));
#line 367
if(c_rt_lib0check_true_native(___nl__11)){ goto label_152;}
#line 370
c_rt_lib0move(&___nl__11, c_rt_lib0priv_is(___nl__10, ___get_global_const(379)));
#line 370
if(c_rt_lib0check_true_native(___nl__11)){ goto label_172;}
#line 370
c_rt_lib0move(&___nl__11,___get_global_const(91));
#line 370
c_rt_lib0move(&___nl__11, c_rt_lib0array_mk(2, ___nl__11, ___nl__10));
#line 370
nl_die_arg(___nl__11);
#line 367
label_152:
#line 368
c_rt_lib0move(&___nl__12,___get_global_const(360));
#line 368
c_rt_lib0move(&___nl__12, c_rt_lib0concat_new(___nl__9, ___nl__12));
#line 368
c_rt_lib0move(&___nl__13, string0lf());
#line 368
c_rt_lib0move(&___nl__12, c_rt_lib0concat_add(___nl__12, ___nl__13));
#line 368
c_rt_lib0clear(&___nl__13);
#line 368
c_rt_lib0delete(generator_c_priv0print_to_header(___ref___0, ___nl__12));
#line 368
c_rt_lib0clear(&___nl__12);
#line 369
c_rt_lib0move(&___nl__13, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(343)));
#line 369
c_rt_lib0move(&___nl__12, generator_c_priv0get_func_ptr_header(___nl__4, ___nl__13));
#line 369
c_rt_lib0clear(&___nl__13);
#line 369
c_rt_lib0move(&___nl__13,___get_global_const(360));
#line 369
c_rt_lib0move(&___nl__12, c_rt_lib0concat_add(___nl__12, ___nl__13));
#line 369
c_rt_lib0clear(&___nl__13);
#line 369
c_rt_lib0move(&___nl__13, string0lf());
#line 369
c_rt_lib0move(&___nl__12, c_rt_lib0concat_add(___nl__12, ___nl__13));
#line 369
c_rt_lib0clear(&___nl__13);
#line 369
c_rt_lib0delete(generator_c_priv0print_to_header(___ref___0, ___nl__12));
#line 369
c_rt_lib0clear(&___nl__12);
#line 370
goto label_178;
#line 370
label_172:
#line 371
c_rt_lib0move(&___nl__12,___get_global_const(360));
#line 371
c_rt_lib0move(&___nl__12, c_rt_lib0concat_new(___nl__9, ___nl__12));
#line 371
c_rt_lib0delete(generator_c_priv0println(___ref___0, ___nl__12));
#line 371
c_rt_lib0clear(&___nl__12);
#line 372
goto label_178;
#line 372
label_178:
#line 372
c_rt_lib0clear(&___nl__10);
#line 372
c_rt_lib0clear(&___nl__11);
#line 372
c_rt_lib0clear(&___nl__9);
#line 373
c_rt_lib0move(&___nl__5, c_rt_lib0add_mod(___nl__5, ___nl__6));
#line 373
goto label_137;
#line 373
label_184:
#line 373
c_rt_lib0clear(&___nl__3);
#line 373
c_rt_lib0clear(&___nl__4);
#line 373
c_rt_lib0clear(&___nl__5);
#line 373
c_rt_lib0clear(&___nl__6);
#line 373
c_rt_lib0clear(&___nl__7);
#line 373
c_rt_lib0clear(&___nl__8);
#line 374
c_rt_lib0move(&___nl__3, string0lf());
#line 374
c_rt_lib0delete(generator_c_priv0println(___ref___0, ___nl__3));
#line 374
c_rt_lib0clear(&___nl__3);
#line 375
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(92)));
#line 375
c_rt_lib0move(&___nl__5,___get_global_const(0));
#line 375
c_rt_lib0move(&___nl__6,___get_global_const(1));
#line 375
c_rt_lib0move(&___nl__7, c_rt_lib0array_len(___nl__3));
#line 375
label_198:
#line 375
c_rt_lib0move(&___nl__8, c_rt_lib0ge(___nl__5, ___nl__7));
#line 375
if(c_rt_lib0check_true_native(___nl__8)){ goto label_343;}
#line 375
c_rt_lib0move(&___nl__4, c_rt_lib0array_get(___nl__3, ___nl__5));
#line 376
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(182)));
#line 376
c_rt_lib0move(&___nl__9, c_rt_lib0priv_is(___nl__9, ___get_global_const(183)));
#line 376
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__9));
#line 376
if(c_rt_lib0check_true_native(___nl__9)){ goto label_298;}
#line 377
c_rt_lib0move(&___nl__11, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(343)));
#line 377
c_rt_lib0move(&___nl__10, generator_c_priv0get_function_name(___nl__4, ___nl__11));
#line 377
c_rt_lib0clear(&___nl__11);
#line 378
c_rt_lib0move(&___nl__12, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(343)));
#line 378
c_rt_lib0move(&___nl__11, generator_c_priv0get_func_ptr_header(___nl__4, ___nl__12));
#line 378
c_rt_lib0clear(&___nl__12);
#line 378
c_rt_lib0move(&___nl__12,___get_global_const(252));
#line 378
c_rt_lib0move(&___nl__11, c_rt_lib0concat_add(___nl__11, ___nl__12));
#line 378
c_rt_lib0clear(&___nl__12);
#line 378
c_rt_lib0delete(generator_c_priv0println(___ref___0, ___nl__11));
#line 378
c_rt_lib0clear(&___nl__11);
#line 379
c_rt_lib0move(&___nl__12, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(188)));
#line 379
c_rt_lib0move(&___nl__11, array0len(___nl__12));
#line 379
c_rt_lib0clear(&___nl__12);
#line 380
c_rt_lib0move(&___nl__13,___get_global_const(392));
#line 380
c_rt_lib0move(&___nl__15,___get_global_const(393));
#line 380
c_rt_lib0move(&___nl__16, generator_c_priv0get_string(___nl__10));
#line 380
c_rt_lib0move(&___nl__14, c_rt_lib0array_mk(3, ___nl__15, ___nl__11, ___nl__16));
#line 380
c_rt_lib0clear(&___nl__15);
#line 380
c_rt_lib0clear(&___nl__16);
#line 380
c_rt_lib0move(&___nl__12, generator_c_priv0get_fun_lib(___nl__13, ___nl__14));
#line 380
c_rt_lib0clear(&___nl__14);
#line 380
c_rt_lib0clear(&___nl__13);
#line 380
c_rt_lib0move(&___nl__13,___get_global_const(360));
#line 380
c_rt_lib0move(&___nl__12, c_rt_lib0concat_add(___nl__12, ___nl__13));
#line 380
c_rt_lib0clear(&___nl__13);
#line 380
c_rt_lib0delete(generator_c_priv0println(___ref___0, ___nl__12));
#line 380
c_rt_lib0clear(&___nl__12);
#line 381
c_rt_lib0move(&___nl__12,___get_global_const(394));
#line 381
c_rt_lib0move(&___nl__12, c_rt_lib0concat_add(___nl__12, ___nl__10));
#line 381
c_rt_lib0move(&___nl__13,___get_global_const(373));
#line 381
c_rt_lib0move(&___nl__12, c_rt_lib0concat_add(___nl__12, ___nl__13));
#line 381
c_rt_lib0clear(&___nl__13);
#line 381
c_rt_lib0delete(generator_c_priv0print(___ref___0, ___nl__12));
#line 381
c_rt_lib0clear(&___nl__12);
#line 382
c_rt_lib0move(&___nl__12,___get_global_const(0));
#line 382
c_rt_lib0move(&___nl__13,___get_global_const(1));
#line 382
label_243:
#line 382
c_rt_lib0move(&___nl__14, c_rt_lib0ge(___nl__12, ___nl__11));
#line 382
if(c_rt_lib0check_true_native(___nl__14)){ goto label_288;}
#line 383
c_rt_lib0move(&___nl__15,___get_global_const(0));
#line 383
c_rt_lib0move(&___nl__15, c_rt_lib0gt(___nl__12, ___nl__15));
#line 383
c_rt_lib0move(&___nl__15, c_rt_lib0not(___nl__15));
#line 383
if(c_rt_lib0check_true_native(___nl__15)){ goto label_254;}
#line 383
c_rt_lib0move(&___nl__16,___get_global_const(271));
#line 383
c_rt_lib0delete(generator_c_priv0print(___ref___0, ___nl__16));
#line 383
c_rt_lib0clear(&___nl__16);
#line 383
goto label_254;
#line 383
label_254:
#line 383
c_rt_lib0clear(&___nl__15);
#line 384
c_rt_lib0move(&___nl__15, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(188)));
#line 384
c_rt_lib0move(&___nl__15, c_rt_lib0array_get(___nl__15, ___nl__12));
#line 384
c_rt_lib0move(&___nl__16, c_rt_lib0priv_is(___nl__15, ___get_global_const(198)));
#line 384
if(c_rt_lib0check_true_native(___nl__16)){ goto label_265;}
#line 386
c_rt_lib0move(&___nl__16, c_rt_lib0priv_is(___nl__15, ___get_global_const(5)));
#line 386
if(c_rt_lib0check_true_native(___nl__16)){ goto label_274;}
#line 386
c_rt_lib0move(&___nl__16,___get_global_const(91));
#line 386
c_rt_lib0move(&___nl__16, c_rt_lib0array_mk(2, ___nl__16, ___nl__15));
#line 386
nl_die_arg(___nl__16);
#line 384
label_265:
#line 385
c_rt_lib0move(&___nl__17,___get_global_const(395));
#line 385
c_rt_lib0move(&___nl__17, c_rt_lib0concat_add(___nl__17, ___nl__12));
#line 385
c_rt_lib0move(&___nl__18,___get_global_const(259));
#line 385
c_rt_lib0move(&___nl__17, c_rt_lib0concat_add(___nl__17, ___nl__18));
#line 385
c_rt_lib0clear(&___nl__18);
#line 385
c_rt_lib0delete(generator_c_priv0print(___ref___0, ___nl__17));
#line 385
c_rt_lib0clear(&___nl__17);
#line 386
goto label_283;
#line 386
label_274:
#line 387
c_rt_lib0move(&___nl__17,___get_global_const(396));
#line 387
c_rt_lib0move(&___nl__17, c_rt_lib0concat_add(___nl__17, ___nl__12));
#line 387
c_rt_lib0move(&___nl__18,___get_global_const(259));
#line 387
c_rt_lib0move(&___nl__17, c_rt_lib0concat_add(___nl__17, ___nl__18));
#line 387
c_rt_lib0clear(&___nl__18);
#line 387
c_rt_lib0delete(generator_c_priv0print(___ref___0, ___nl__17));
#line 387
c_rt_lib0clear(&___nl__17);
#line 388
goto label_283;
#line 388
label_283:
#line 388
c_rt_lib0clear(&___nl__15);
#line 388
c_rt_lib0clear(&___nl__16);
#line 389
c_rt_lib0move(&___nl__12, c_rt_lib0add_mod(___nl__12, ___nl__13));
#line 389
goto label_243;
#line 389
label_288:
#line 389
c_rt_lib0clear(&___nl__12);
#line 389
c_rt_lib0clear(&___nl__13);
#line 389
c_rt_lib0clear(&___nl__14);
#line 390
c_rt_lib0move(&___nl__12,___get_global_const(397));
#line 390
c_rt_lib0delete(generator_c_priv0println(___ref___0, ___nl__12));
#line 390
c_rt_lib0clear(&___nl__12);
#line 390
c_rt_lib0clear(&___nl__10);
#line 390
c_rt_lib0clear(&___nl__11);
#line 391
goto label_298;
#line 391
label_298:
#line 391
c_rt_lib0clear(&___nl__9);
#line 392
c_rt_lib0move(&___nl__9, generator_c_priv0is_singleton_use_function(___nl__4));
#line 392
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__9));
#line 392
if(c_rt_lib0check_true_native(___nl__9)){ goto label_331;}
#line 393
c_rt_lib0move(&___nl__11, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(343)));
#line 393
c_rt_lib0move(&___nl__10, generator_c_priv0get_function_name(___nl__4, ___nl__11));
#line 393
c_rt_lib0clear(&___nl__11);
#line 394
c_rt_lib0move(&___nl__11, generator_c_priv0arg_t());
#line 394
c_rt_lib0move(&___nl__11, c_rt_lib0concat_add(___nl__11, ___nl__10));
#line 394
c_rt_lib0move(&___nl__12,___get_global_const(398));
#line 394
c_rt_lib0move(&___nl__11, c_rt_lib0concat_add(___nl__11, ___nl__12));
#line 394
c_rt_lib0clear(&___nl__12);
#line 394
c_rt_lib0delete(generator_c_priv0println(___ref___0, ___nl__11));
#line 394
c_rt_lib0clear(&___nl__11);
#line 395
c_rt_lib0move(&___nl__11,___get_global_const(394));
#line 395
c_rt_lib0move(&___nl__12, generator_c_priv0get_const_singleton(___ref___0, ___nl__10));
#line 395
c_rt_lib0move(&___nl__11, c_rt_lib0concat_add(___nl__11, ___nl__12));
#line 395
c_rt_lib0clear(&___nl__12);
#line 395
c_rt_lib0move(&___nl__12,___get_global_const(399));
#line 395
c_rt_lib0move(&___nl__11, c_rt_lib0concat_add(___nl__11, ___nl__12));
#line 395
c_rt_lib0clear(&___nl__12);
#line 395
c_rt_lib0delete(generator_c_priv0println(___ref___0, ___nl__11));
#line 395
c_rt_lib0clear(&___nl__11);
#line 396
c_rt_lib0move(&___nl__11, generator_c_priv0arg_t());
#line 396
c_rt_lib0move(&___nl__11, c_rt_lib0concat_add(___nl__11, ___nl__10));
#line 396
c_rt_lib0move(&___nl__12,___get_global_const(400));
#line 396
c_rt_lib0move(&___nl__11, c_rt_lib0concat_add(___nl__11, ___nl__12));
#line 396
c_rt_lib0clear(&___nl__12);
#line 396
c_rt_lib0delete(generator_c_priv0print(___ref___0, ___nl__11));
#line 396
c_rt_lib0clear(&___nl__11);
#line 396
c_rt_lib0clear(&___nl__10);
#line 397
goto label_338;
#line 397
label_331:
#line 398
c_rt_lib0move(&___nl__11, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(343)));
#line 398
c_rt_lib0move(&___nl__10, generator_c_priv0get_function_header(___nl__4, ___nl__11));
#line 398
c_rt_lib0clear(&___nl__11);
#line 398
c_rt_lib0delete(generator_c_priv0print(___ref___0, ___nl__10));
#line 398
c_rt_lib0clear(&___nl__10);
#line 399
goto label_338;
#line 399
label_338:
#line 399
c_rt_lib0clear(&___nl__9);
#line 400
c_rt_lib0delete(generator_c_priv0print_function_block(___ref___0, ___nl__4));
#line 401
c_rt_lib0move(&___nl__5, c_rt_lib0add_mod(___nl__5, ___nl__6));
#line 401
goto label_198;
#line 401
label_343:
#line 401
c_rt_lib0clear(&___nl__3);
#line 401
c_rt_lib0clear(&___nl__4);
#line 401
c_rt_lib0clear(&___nl__5);
#line 401
c_rt_lib0clear(&___nl__6);
#line 401
c_rt_lib0clear(&___nl__7);
#line 401
c_rt_lib0clear(&___nl__8);
#line 402
c_rt_lib0delete(generator_c_priv0print_init_const(___ref___0));
#line 403
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(342)));
#line 403
c_rt_lib0move(&___nl__6, c_rt_lib0init_iter(___nl__3));
#line 403
label_353:
#line 403
c_rt_lib0move(&___nl__4, c_rt_lib0is_end_hash(___nl__6));
#line 403
if(c_rt_lib0check_true_native(___nl__4)){ goto label_366;}
#line 403
c_rt_lib0move(&___nl__4, c_rt_lib0get_key_iter(___nl__6));
#line 403
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value(___nl__3, ___nl__4));
#line 404
c_rt_lib0move(&___nl__7, generator_c_priv0get_include(___nl__4));
#line 404
c_rt_lib0move(&___nl__8, string0lf());
#line 404
c_rt_lib0move(&___nl__7, c_rt_lib0concat_add(___nl__7, ___nl__8));
#line 404
c_rt_lib0clear(&___nl__8);
#line 404
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__7));
#line 404
c_rt_lib0clear(&___nl__7);
#line 405
c_rt_lib0move(&___nl__6, c_rt_lib0next_iter(___nl__6));
#line 405
goto label_353;
#line 405
label_366:
#line 405
c_rt_lib0clear(&___nl__3);
#line 405
c_rt_lib0clear(&___nl__4);
#line 405
c_rt_lib0clear(&___nl__5);
#line 405
c_rt_lib0clear(&___nl__6);
#line 406
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(341)));
#line 406
c_rt_lib0move(&___nl__3, c_rt_lib0concat_new(___nl__2, ___nl__3));
#line 406
c_rt_lib0copy(&___nl__4, ___nl__3);
#line 406
c_rt_lib0hash_set_value_dec(___ref___0, ___get_global_const(341), ___nl__4);
#line 406
c_rt_lib0clear(&___nl__3);
#line 406
c_rt_lib0clear(&___nl__4);
#line 406
c_rt_lib0clear(&___nl__2);
#line 406
c_rt_lib0clear(&___nl__1);
#line 406
return NULL;
}

ImmT generator_c_priv0print_init_const(ImmT * ___ref___0) {
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
#line 410
c_rt_lib0move(&___nl__1, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(196)));
#line 410
c_rt_lib0move(&___nl__1, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(337)));
#line 410
c_rt_lib0move(&___nl__1, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(327)));
#line 411
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(196)));
#line 411
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(338)));
#line 411
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(327)));
#line 412
c_rt_lib0move(&___nl__3, array0len(___nl__1));
#line 413
c_rt_lib0move(&___nl__4, array0len(___nl__2));
#line 414
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(196)));
#line 414
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(339)));
#line 415
c_rt_lib0move(&___nl__6, c_rt_lib0add(___nl__3, ___nl__4));
#line 415
c_rt_lib0move(&___nl__6, c_rt_lib0add_mod(___nl__6, ___nl__5));
#line 416
c_rt_lib0move(&___nl__7,___get_global_const(355));
#line 417
c_rt_lib0move(&___nl__8, generator_c_priv0arg_t());
#line 417
c_rt_lib0move(&___nl__7, c_rt_lib0concat_add(___nl__7, ___nl__8));
#line 417
c_rt_lib0clear(&___nl__8);
#line 417
c_rt_lib0move(&___nl__8,___get_global_const(401));
#line 417
c_rt_lib0move(&___nl__7, c_rt_lib0concat_add(___nl__7, ___nl__8));
#line 417
c_rt_lib0clear(&___nl__8);
#line 417
c_rt_lib0move(&___nl__8,___get_global_const(1));
#line 417
c_rt_lib0move(&___nl__8, c_rt_lib0add_mod(___nl__8, ___nl__6));
#line 417
c_rt_lib0move(&___nl__7, c_rt_lib0concat_add(___nl__7, ___nl__8));
#line 417
c_rt_lib0clear(&___nl__8);
#line 417
c_rt_lib0move(&___nl__8,___get_global_const(402));
#line 417
c_rt_lib0move(&___nl__7, c_rt_lib0concat_add(___nl__7, ___nl__8));
#line 417
c_rt_lib0clear(&___nl__8);
#line 417
c_rt_lib0delete(generator_c_priv0println(___ref___0, ___nl__7));
#line 417
c_rt_lib0clear(&___nl__7);
#line 419
c_rt_lib0move(&___nl__7,___get_global_const(389));
#line 419
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(343)));
#line 419
c_rt_lib0move(&___nl__10,___get_global_const(367));
#line 419
c_rt_lib0move(&___nl__11, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(343)));
#line 419
c_rt_lib0move(&___nl__8, generator_c_priv0get_fun_name(___nl__9, ___nl__10, ___nl__11));
#line 419
c_rt_lib0clear(&___nl__11);
#line 419
c_rt_lib0clear(&___nl__10);
#line 419
c_rt_lib0clear(&___nl__9);
#line 419
c_rt_lib0move(&___nl__7, c_rt_lib0concat_add(___nl__7, ___nl__8));
#line 419
c_rt_lib0clear(&___nl__8);
#line 419
c_rt_lib0move(&___nl__8,___get_global_const(403));
#line 419
c_rt_lib0move(&___nl__7, c_rt_lib0concat_add(___nl__7, ___nl__8));
#line 419
c_rt_lib0clear(&___nl__8);
#line 422
c_rt_lib0move(&___nl__8, c_rt_lib0add(___nl__3, ___nl__4));
#line 422
c_rt_lib0move(&___nl__7, c_rt_lib0concat_add(___nl__7, ___nl__8));
#line 422
c_rt_lib0clear(&___nl__8);
#line 422
c_rt_lib0move(&___nl__8,___get_global_const(404));
#line 422
c_rt_lib0move(&___nl__7, c_rt_lib0concat_add(___nl__7, ___nl__8));
#line 422
c_rt_lib0clear(&___nl__8);
#line 422
c_rt_lib0delete(generator_c_priv0println(___ref___0, ___nl__7));
#line 422
c_rt_lib0clear(&___nl__7);
#line 424
c_rt_lib0move(&___nl__7,___get_global_const(0));
#line 424
c_rt_lib0move(&___nl__8,___get_global_const(1));
#line 424
label_51:
#line 424
c_rt_lib0move(&___nl__9, c_rt_lib0ge(___nl__7, ___nl__3));
#line 424
if(c_rt_lib0check_true_native(___nl__9)){ goto label_71;}
#line 425
c_rt_lib0move(&___nl__10,___get_global_const(401));
#line 425
c_rt_lib0move(&___nl__10, c_rt_lib0concat_add(___nl__10, ___nl__7));
#line 425
c_rt_lib0move(&___nl__11,___get_global_const(405));
#line 425
c_rt_lib0move(&___nl__10, c_rt_lib0concat_add(___nl__10, ___nl__11));
#line 425
c_rt_lib0clear(&___nl__11);
#line 425
c_rt_lib0move(&___nl__12, c_rt_lib0array_get(___nl__1, ___nl__7));
#line 425
c_rt_lib0move(&___nl__11, generator_c_priv0create_sim(___nl__12));
#line 425
c_rt_lib0clear(&___nl__12);
#line 425
c_rt_lib0move(&___nl__10, c_rt_lib0concat_add(___nl__10, ___nl__11));
#line 425
c_rt_lib0clear(&___nl__11);
#line 425
c_rt_lib0move(&___nl__11,___get_global_const(360));
#line 425
c_rt_lib0move(&___nl__10, c_rt_lib0concat_add(___nl__10, ___nl__11));
#line 425
c_rt_lib0clear(&___nl__11);
#line 425
c_rt_lib0delete(generator_c_priv0println(___ref___0, ___nl__10));
#line 425
c_rt_lib0clear(&___nl__10);
#line 426
c_rt_lib0move(&___nl__7, c_rt_lib0add_mod(___nl__7, ___nl__8));
#line 426
goto label_51;
#line 426
label_71:
#line 426
c_rt_lib0clear(&___nl__7);
#line 426
c_rt_lib0clear(&___nl__8);
#line 426
c_rt_lib0clear(&___nl__9);
#line 427
c_rt_lib0move(&___nl__7,___get_global_const(406));
#line 427
c_rt_lib0move(&___nl__7, c_rt_lib0concat_add(___nl__7, ___nl__3));
#line 428
c_rt_lib0move(&___nl__8,___get_global_const(407));
#line 428
c_rt_lib0move(&___nl__7, c_rt_lib0concat_add(___nl__7, ___nl__8));
#line 428
c_rt_lib0clear(&___nl__8);
#line 428
c_rt_lib0move(&___nl__7, c_rt_lib0concat_add(___nl__7, ___nl__6));
#line 428
c_rt_lib0move(&___nl__8,___get_global_const(408));
#line 428
c_rt_lib0move(&___nl__7, c_rt_lib0concat_add(___nl__7, ___nl__8));
#line 428
c_rt_lib0clear(&___nl__8);
#line 429
c_rt_lib0move(&___nl__9,___get_global_const(409));
#line 429
c_rt_lib0move(&___nl__8, generator_c_priv0get_lib_fun(___nl__9));
#line 429
c_rt_lib0clear(&___nl__9);
#line 429
c_rt_lib0move(&___nl__7, c_rt_lib0concat_add(___nl__7, ___nl__8));
#line 429
c_rt_lib0clear(&___nl__8);
#line 429
c_rt_lib0move(&___nl__8,___get_global_const(410));
#line 429
c_rt_lib0move(&___nl__7, c_rt_lib0concat_add(___nl__7, ___nl__8));
#line 429
c_rt_lib0clear(&___nl__8);
#line 429
c_rt_lib0move(&___nl__7, c_rt_lib0concat_add(___nl__7, ___nl__6));
#line 429
c_rt_lib0move(&___nl__8,___get_global_const(411));
#line 429
c_rt_lib0move(&___nl__7, c_rt_lib0concat_add(___nl__7, ___nl__8));
#line 429
c_rt_lib0clear(&___nl__8);
#line 429
c_rt_lib0delete(generator_c_priv0println(___ref___0, ___nl__7));
#line 429
c_rt_lib0clear(&___nl__7);
#line 431
c_rt_lib0move(&___nl__7, generator_c_priv0arg_t());
#line 431
c_rt_lib0move(&___nl__9,___get_global_const(2));
#line 431
c_rt_lib0move(&___nl__10,___get_global_const(390));
#line 431
c_rt_lib0move(&___nl__11, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(343)));
#line 431
c_rt_lib0move(&___nl__8, generator_c_priv0get_fun_name(___nl__9, ___nl__10, ___nl__11));
#line 431
c_rt_lib0clear(&___nl__11);
#line 431
c_rt_lib0clear(&___nl__10);
#line 431
c_rt_lib0clear(&___nl__9);
#line 431
c_rt_lib0move(&___nl__7, c_rt_lib0concat_add(___nl__7, ___nl__8));
#line 431
c_rt_lib0clear(&___nl__8);
#line 431
c_rt_lib0move(&___nl__8,___get_global_const(412));
#line 431
c_rt_lib0move(&___nl__7, c_rt_lib0concat_add(___nl__7, ___nl__8));
#line 431
c_rt_lib0clear(&___nl__8);
#line 432
c_rt_lib0move(&___nl__8, generator_c_priv0arg_t());
#line 432
c_rt_lib0move(&___nl__7, c_rt_lib0concat_add(___nl__7, ___nl__8));
#line 432
c_rt_lib0clear(&___nl__8);
#line 432
c_rt_lib0move(&___nl__8,___get_global_const(370));
#line 432
c_rt_lib0move(&___nl__7, c_rt_lib0concat_add(___nl__7, ___nl__8));
#line 432
c_rt_lib0clear(&___nl__8);
#line 433
c_rt_lib0move(&___nl__9,___get_global_const(371));
#line 433
c_rt_lib0move(&___nl__11,___get_global_const(372));
#line 433
c_rt_lib0move(&___nl__12,___get_global_const(413));
#line 433
c_rt_lib0move(&___nl__10, c_rt_lib0array_mk(2, ___nl__11, ___nl__12));
#line 433
c_rt_lib0clear(&___nl__11);
#line 433
c_rt_lib0clear(&___nl__12);
#line 433
c_rt_lib0move(&___nl__8, generator_c_priv0get_fun_lib(___nl__9, ___nl__10));
#line 433
c_rt_lib0clear(&___nl__10);
#line 433
c_rt_lib0clear(&___nl__9);
#line 433
c_rt_lib0move(&___nl__7, c_rt_lib0concat_add(___nl__7, ___nl__8));
#line 433
c_rt_lib0clear(&___nl__8);
#line 433
c_rt_lib0move(&___nl__8,___get_global_const(375));
#line 433
c_rt_lib0move(&___nl__7, c_rt_lib0concat_add(___nl__7, ___nl__8));
#line 433
c_rt_lib0clear(&___nl__8);
#line 433
c_rt_lib0delete(generator_c_priv0println(___ref___0, ___nl__7));
#line 433
c_rt_lib0clear(&___nl__7);
#line 436
c_rt_lib0move(&___nl__7, generator_c_priv0arg_t());
#line 436
c_rt_lib0move(&___nl__9,___get_global_const(2));
#line 436
c_rt_lib0move(&___nl__10,___get_global_const(382));
#line 436
c_rt_lib0move(&___nl__11, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(343)));
#line 436
c_rt_lib0move(&___nl__8, generator_c_priv0get_fun_name(___nl__9, ___nl__10, ___nl__11));
#line 436
c_rt_lib0clear(&___nl__11);
#line 436
c_rt_lib0clear(&___nl__10);
#line 436
c_rt_lib0clear(&___nl__9);
#line 436
c_rt_lib0move(&___nl__7, c_rt_lib0concat_add(___nl__7, ___nl__8));
#line 436
c_rt_lib0clear(&___nl__8);
#line 436
c_rt_lib0move(&___nl__8,___get_global_const(414));
#line 436
c_rt_lib0move(&___nl__7, c_rt_lib0concat_add(___nl__7, ___nl__8));
#line 436
c_rt_lib0clear(&___nl__8);
#line 436
c_rt_lib0move(&___nl__7, c_rt_lib0concat_add(___nl__7, ___nl__3));
#line 437
c_rt_lib0move(&___nl__8,___get_global_const(415));
#line 437
c_rt_lib0move(&___nl__7, c_rt_lib0concat_add(___nl__7, ___nl__8));
#line 437
c_rt_lib0clear(&___nl__8);
#line 437
c_rt_lib0delete(generator_c_priv0println(___ref___0, ___nl__7));
#line 437
c_rt_lib0clear(&___nl__7);
#line 439
c_rt_lib0move(&___nl__7, array0len(___nl__2));
#line 439
c_rt_lib0move(&___nl__8,___get_global_const(0));
#line 439
c_rt_lib0move(&___nl__9,___get_global_const(1));
#line 439
label_155:
#line 439
c_rt_lib0move(&___nl__10, c_rt_lib0ge(___nl__8, ___nl__7));
#line 439
if(c_rt_lib0check_true_native(___nl__10)){ goto label_185;}
#line 440
c_rt_lib0move(&___nl__11,___get_global_const(416));
#line 440
c_rt_lib0move(&___nl__11, c_rt_lib0concat_add(___nl__11, ___nl__8));
#line 440
c_rt_lib0move(&___nl__12,___get_global_const(417));
#line 440
c_rt_lib0move(&___nl__11, c_rt_lib0concat_add(___nl__11, ___nl__12));
#line 440
c_rt_lib0clear(&___nl__12);
#line 440
c_rt_lib0delete(generator_c_priv0println(___ref___0, ___nl__11));
#line 440
c_rt_lib0clear(&___nl__11);
#line 441
c_rt_lib0move(&___nl__11,___get_global_const(418));
#line 441
c_rt_lib0move(&___nl__12, c_rt_lib0add(___nl__8, ___nl__3));
#line 441
c_rt_lib0move(&___nl__11, c_rt_lib0concat_add(___nl__11, ___nl__12));
#line 441
c_rt_lib0clear(&___nl__12);
#line 441
c_rt_lib0move(&___nl__12,___get_global_const(405));
#line 441
c_rt_lib0move(&___nl__11, c_rt_lib0concat_add(___nl__11, ___nl__12));
#line 441
c_rt_lib0clear(&___nl__12);
#line 441
c_rt_lib0move(&___nl__12, c_rt_lib0array_get(___nl__2, ___nl__8));
#line 441
c_rt_lib0move(&___nl__11, c_rt_lib0concat_add(___nl__11, ___nl__12));
#line 441
c_rt_lib0clear(&___nl__12);
#line 441
c_rt_lib0move(&___nl__12,___get_global_const(419));
#line 441
c_rt_lib0move(&___nl__11, c_rt_lib0concat_add(___nl__11, ___nl__12));
#line 441
c_rt_lib0clear(&___nl__12);
#line 441
c_rt_lib0delete(generator_c_priv0println(___ref___0, ___nl__11));
#line 441
c_rt_lib0clear(&___nl__11);
#line 442
c_rt_lib0move(&___nl__11,___get_global_const(420));
#line 442
c_rt_lib0delete(generator_c_priv0println(___ref___0, ___nl__11));
#line 442
c_rt_lib0clear(&___nl__11);
#line 443
c_rt_lib0move(&___nl__8, c_rt_lib0add_mod(___nl__8, ___nl__9));
#line 443
goto label_155;
#line 443
label_185:
#line 443
c_rt_lib0clear(&___nl__7);
#line 443
c_rt_lib0clear(&___nl__8);
#line 443
c_rt_lib0clear(&___nl__9);
#line 443
c_rt_lib0clear(&___nl__10);
#line 444
c_rt_lib0move(&___nl__7,___get_global_const(421));
#line 447
c_rt_lib0move(&___nl__8, generator_c_priv0arg_t());
#line 447
c_rt_lib0move(&___nl__7, c_rt_lib0concat_add(___nl__7, ___nl__8));
#line 447
c_rt_lib0clear(&___nl__8);
#line 447
c_rt_lib0move(&___nl__8,___get_global_const(370));
#line 447
c_rt_lib0move(&___nl__7, c_rt_lib0concat_add(___nl__7, ___nl__8));
#line 447
c_rt_lib0clear(&___nl__8);
#line 448
c_rt_lib0move(&___nl__9,___get_global_const(371));
#line 448
c_rt_lib0move(&___nl__11,___get_global_const(372));
#line 448
c_rt_lib0move(&___nl__12,___get_global_const(422));
#line 448
c_rt_lib0move(&___nl__12, c_rt_lib0concat_add(___nl__12, ___nl__3));
#line 448
c_rt_lib0move(&___nl__13,___get_global_const(259));
#line 448
c_rt_lib0move(&___nl__12, c_rt_lib0concat_add(___nl__12, ___nl__13));
#line 448
c_rt_lib0clear(&___nl__13);
#line 448
c_rt_lib0move(&___nl__10, c_rt_lib0array_mk(2, ___nl__11, ___nl__12));
#line 448
c_rt_lib0clear(&___nl__11);
#line 448
c_rt_lib0clear(&___nl__12);
#line 448
c_rt_lib0move(&___nl__8, generator_c_priv0get_fun_lib(___nl__9, ___nl__10));
#line 448
c_rt_lib0clear(&___nl__10);
#line 448
c_rt_lib0clear(&___nl__9);
#line 448
c_rt_lib0move(&___nl__7, c_rt_lib0concat_add(___nl__7, ___nl__8));
#line 448
c_rt_lib0clear(&___nl__8);
#line 448
c_rt_lib0move(&___nl__8,___get_global_const(375));
#line 448
c_rt_lib0move(&___nl__7, c_rt_lib0concat_add(___nl__7, ___nl__8));
#line 448
c_rt_lib0clear(&___nl__8);
#line 448
c_rt_lib0delete(generator_c_priv0println(___ref___0, ___nl__7));
#line 448
c_rt_lib0clear(&___nl__7);
#line 448
c_rt_lib0clear(&___nl__1);
#line 448
c_rt_lib0clear(&___nl__2);
#line 448
c_rt_lib0clear(&___nl__3);
#line 448
c_rt_lib0clear(&___nl__4);
#line 448
c_rt_lib0clear(&___nl__5);
#line 448
c_rt_lib0clear(&___nl__6);
#line 448
return NULL;
}

ImmT generator_c_priv0print_function_block(ImmT * ___ref___0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__1);
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
#line 454
c_rt_lib0move(&___nl__2,___get_global_const(423));
#line 454
c_rt_lib0delete(generator_c_priv0println(___ref___0, ___nl__2));
#line 454
c_rt_lib0clear(&___nl__2);
#line 455
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(188)));
#line 455
c_rt_lib0copy(&___nl__3, ___nl__2);
#line 455
c_rt_lib0hash_set_value_dec(___ref___0, ___get_global_const(344), ___nl__3);
#line 455
c_rt_lib0clear(&___nl__2);
#line 455
c_rt_lib0clear(&___nl__3);
#line 456
c_rt_lib0delete(generator_c_priv0move_args_to_register(___ref___0));
#line 457
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(188)));
#line 457
c_rt_lib0move(&___nl__2, array0len(___nl__3));
#line 457
c_rt_lib0clear(&___nl__3);
#line 457
label_12:
#line 457
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(189)));
#line 457
c_rt_lib0move(&___nl__3, c_rt_lib0lt(___nl__2, ___nl__3));
#line 457
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 457
if(c_rt_lib0check_true_native(___nl__3)){ goto label_30;}
#line 458
c_rt_lib0move(&___nl__4, generator_c_priv0arg_t());
#line 458
c_rt_lib0move(&___nl__5, generator_c_priv0get_reg(___ref___0, ___nl__2));
#line 458
c_rt_lib0move(&___nl__4, c_rt_lib0concat_add(___nl__4, ___nl__5));
#line 458
c_rt_lib0clear(&___nl__5);
#line 458
c_rt_lib0move(&___nl__5,___get_global_const(424));
#line 458
c_rt_lib0move(&___nl__4, c_rt_lib0concat_add(___nl__4, ___nl__5));
#line 458
c_rt_lib0clear(&___nl__5);
#line 458
c_rt_lib0delete(generator_c_priv0println(___ref___0, ___nl__4));
#line 458
c_rt_lib0clear(&___nl__4);
#line 457
c_rt_lib0move(&___nl__4,___get_global_const(1));
#line 457
c_rt_lib0move(&___nl__2, c_rt_lib0add_mod(___nl__2, ___nl__4));
#line 457
c_rt_lib0clear(&___nl__4);
#line 459
goto label_12;
#line 459
label_30:
#line 459
c_rt_lib0clear(&___nl__2);
#line 459
c_rt_lib0clear(&___nl__3);
#line 460
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(187)));
#line 460
c_rt_lib0move(&___nl__4,___get_global_const(0));
#line 460
c_rt_lib0move(&___nl__5,___get_global_const(1));
#line 460
c_rt_lib0move(&___nl__6, c_rt_lib0array_len(___nl__2));
#line 460
label_37:
#line 460
c_rt_lib0move(&___nl__7, c_rt_lib0ge(___nl__4, ___nl__6));
#line 460
if(c_rt_lib0check_true_native(___nl__7)){ goto label_201;}
#line 460
c_rt_lib0move(&___nl__3, c_rt_lib0array_get(___nl__2, ___nl__4));
#line 461
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(200)));
#line 461
c_rt_lib0move(&___nl__9, c_rt_lib0priv_is(___nl__8, ___get_global_const(41)));
#line 461
if(c_rt_lib0check_true_native(___nl__9)){ goto label_49;}
#line 463
c_rt_lib0move(&___nl__9, c_rt_lib0priv_is(___nl__8, ___get_global_const(196)));
#line 463
if(c_rt_lib0check_true_native(___nl__9)){ goto label_52;}
#line 463
c_rt_lib0move(&___nl__9,___get_global_const(91));
#line 463
c_rt_lib0move(&___nl__9, c_rt_lib0array_mk(2, ___nl__9, ___nl__8));
#line 463
nl_die_arg(___nl__9);
#line 461
label_49:
#line 462
c_rt_lib0delete(generator_c_priv0print_cmd(___ref___0, ___nl__3));
#line 463
goto label_195;
#line 463
label_52:
#line 463
c_rt_lib0move(&___nl__10, c_rt_lib0priv_as(___nl__8, ___get_global_const(196)));
#line 464
c_rt_lib0move(&___nl__11, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(201)));
#line 464
c_rt_lib0move(&___nl__11, c_rt_lib0priv_is(___nl__11, ___get_global_const(199)));
#line 464
c_rt_lib0move(&___nl__11, c_rt_lib0not(___nl__11));
#line 464
if(c_rt_lib0check_true_native(___nl__11)){ goto label_77;}
#line 465
c_rt_lib0move(&___nl__12, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(201)));
#line 465
c_rt_lib0move(&___nl__12, c_rt_lib0priv_as(___nl__12, ___get_global_const(199)));
#line 465
c_rt_lib0move(&___nl__12, c_rt_lib0hash_get_value_dec(___nl__12, ___get_global_const(198)));
#line 466
c_rt_lib0move(&___nl__13, nl0is_sim(___nl__12));
#line 466
c_rt_lib0move(&___nl__13, c_rt_lib0not(___nl__13));
#line 466
if(c_rt_lib0check_true_native(___nl__13)){ goto label_73;}
#line 467
c_rt_lib0delete(generator_c_priv0print_cmd(___ref___0, ___nl__3));
#line 468
c_rt_lib0clear(&___nl__8);
#line 468
c_rt_lib0clear(&___nl__9);
#line 468
c_rt_lib0clear(&___nl__10);
#line 468
c_rt_lib0clear(&___nl__11);
#line 468
c_rt_lib0clear(&___nl__12);
#line 468
c_rt_lib0clear(&___nl__13);
#line 468
goto label_198;
#line 469
goto label_73;
#line 469
label_73:
#line 469
c_rt_lib0clear(&___nl__13);
#line 469
c_rt_lib0clear(&___nl__12);
#line 470
goto label_77;
#line 470
label_77:
#line 470
c_rt_lib0clear(&___nl__11);
#line 471
c_rt_lib0move(&___nl__11, array0len(___nl__10));
#line 472
c_rt_lib0move(&___nl__12,___get_global_const(0));
#line 472
c_rt_lib0move(&___nl__12, c_rt_lib0num_eq(___nl__11, ___nl__12));
#line 472
c_rt_lib0move(&___nl__12, c_rt_lib0not(___nl__12));
#line 472
if(c_rt_lib0check_true_native(___nl__12)){ goto label_92;}
#line 473
c_rt_lib0delete(generator_c_priv0print_cmd(___ref___0, ___nl__3));
#line 474
c_rt_lib0clear(&___nl__8);
#line 474
c_rt_lib0clear(&___nl__9);
#line 474
c_rt_lib0clear(&___nl__10);
#line 474
c_rt_lib0clear(&___nl__11);
#line 474
c_rt_lib0clear(&___nl__12);
#line 474
goto label_198;
#line 475
goto label_190;
#line 475
label_92:
#line 476
c_rt_lib0move(&___nl__13, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(196)));
#line 476
c_rt_lib0move(&___nl__13, c_rt_lib0hash_get_value_dec(___nl__13, ___get_global_const(339)));
#line 477
c_rt_lib0move(&___nl__14,___get_global_const(425));
#line 477
c_rt_lib0move(&___nl__14, c_rt_lib0concat_add(___nl__14, ___nl__13));
#line 477
c_rt_lib0move(&___nl__15,___get_global_const(426));
#line 477
c_rt_lib0move(&___nl__14, c_rt_lib0concat_add(___nl__14, ___nl__15));
#line 477
c_rt_lib0clear(&___nl__15);
#line 477
c_rt_lib0delete(generator_c_priv0println(___ref___0, ___nl__14));
#line 477
c_rt_lib0clear(&___nl__14);
#line 478
c_rt_lib0delete(generator_c_priv0print_cmd(___ref___0, ___nl__3));
#line 479
c_rt_lib0move(&___nl__15,___get_global_const(0));
#line 479
c_rt_lib0move(&___nl__16,___get_global_const(1));
#line 479
c_rt_lib0move(&___nl__17, c_rt_lib0array_len(___nl__10));
#line 479
label_106:
#line 479
c_rt_lib0move(&___nl__18, c_rt_lib0ge(___nl__15, ___nl__17));
#line 479
if(c_rt_lib0check_true_native(___nl__18)){ goto label_133;}
#line 479
c_rt_lib0move(&___nl__14, c_rt_lib0array_get(___nl__10, ___nl__15));
#line 480
c_rt_lib0move(&___nl__20,___get_global_const(371));
#line 480
c_rt_lib0move(&___nl__22,___get_global_const(427));
#line 480
c_rt_lib0move(&___nl__22, c_rt_lib0concat_add(___nl__22, ___nl__13));
#line 480
c_rt_lib0move(&___nl__23,___get_global_const(259));
#line 480
c_rt_lib0move(&___nl__22, c_rt_lib0concat_add(___nl__22, ___nl__23));
#line 480
c_rt_lib0clear(&___nl__23);
#line 480
c_rt_lib0move(&___nl__23, generator_c_priv0get_reg(___ref___0, ___nl__14));
#line 480
c_rt_lib0move(&___nl__21, c_rt_lib0array_mk(2, ___nl__22, ___nl__23));
#line 480
c_rt_lib0clear(&___nl__22);
#line 480
c_rt_lib0clear(&___nl__23);
#line 480
c_rt_lib0move(&___nl__19, generator_c_priv0get_fun_lib(___nl__20, ___nl__21));
#line 480
c_rt_lib0clear(&___nl__21);
#line 480
c_rt_lib0clear(&___nl__20);
#line 480
c_rt_lib0move(&___nl__20,___get_global_const(360));
#line 480
c_rt_lib0move(&___nl__19, c_rt_lib0concat_add(___nl__19, ___nl__20));
#line 480
c_rt_lib0clear(&___nl__20);
#line 480
c_rt_lib0delete(generator_c_priv0println(___ref___0, ___nl__19));
#line 480
c_rt_lib0clear(&___nl__19);
#line 481
c_rt_lib0move(&___nl__19,___get_global_const(1));
#line 481
c_rt_lib0move(&___nl__13, c_rt_lib0add_mod(___nl__13, ___nl__19));
#line 481
c_rt_lib0clear(&___nl__19);
#line 482
c_rt_lib0move(&___nl__15, c_rt_lib0add_mod(___nl__15, ___nl__16));
#line 482
goto label_106;
#line 482
label_133:
#line 482
c_rt_lib0clear(&___nl__14);
#line 482
c_rt_lib0clear(&___nl__15);
#line 482
c_rt_lib0clear(&___nl__16);
#line 482
c_rt_lib0clear(&___nl__17);
#line 482
c_rt_lib0clear(&___nl__18);
#line 483
c_rt_lib0move(&___nl__14,___get_global_const(253));
#line 483
c_rt_lib0delete(generator_c_priv0println(___ref___0, ___nl__14));
#line 483
c_rt_lib0clear(&___nl__14);
#line 484
c_rt_lib0move(&___nl__13, c_rt_lib0sub_mod(___nl__13, ___nl__11));
#line 485
c_rt_lib0move(&___nl__15,___get_global_const(0));
#line 485
c_rt_lib0move(&___nl__16,___get_global_const(1));
#line 485
c_rt_lib0move(&___nl__17, c_rt_lib0array_len(___nl__10));
#line 485
label_146:
#line 485
c_rt_lib0move(&___nl__18, c_rt_lib0ge(___nl__15, ___nl__17));
#line 485
if(c_rt_lib0check_true_native(___nl__18)){ goto label_173;}
#line 485
c_rt_lib0move(&___nl__14, c_rt_lib0array_get(___nl__10, ___nl__15));
#line 486
c_rt_lib0move(&___nl__20,___get_global_const(371));
#line 486
c_rt_lib0move(&___nl__22, generator_c_priv0get_reg_ref(___ref___0, ___nl__14));
#line 486
c_rt_lib0move(&___nl__23,___get_global_const(428));
#line 486
c_rt_lib0move(&___nl__23, c_rt_lib0concat_add(___nl__23, ___nl__13));
#line 486
c_rt_lib0move(&___nl__24,___get_global_const(259));
#line 486
c_rt_lib0move(&___nl__23, c_rt_lib0concat_add(___nl__23, ___nl__24));
#line 486
c_rt_lib0clear(&___nl__24);
#line 486
c_rt_lib0move(&___nl__21, c_rt_lib0array_mk(2, ___nl__22, ___nl__23));
#line 486
c_rt_lib0clear(&___nl__22);
#line 486
c_rt_lib0clear(&___nl__23);
#line 486
c_rt_lib0move(&___nl__19, generator_c_priv0get_fun_lib(___nl__20, ___nl__21));
#line 486
c_rt_lib0clear(&___nl__21);
#line 486
c_rt_lib0clear(&___nl__20);
#line 487
c_rt_lib0move(&___nl__20,___get_global_const(360));
#line 487
c_rt_lib0move(&___nl__19, c_rt_lib0concat_add(___nl__19, ___nl__20));
#line 487
c_rt_lib0clear(&___nl__20);
#line 487
c_rt_lib0delete(generator_c_priv0println(___ref___0, ___nl__19));
#line 487
c_rt_lib0clear(&___nl__19);
#line 488
c_rt_lib0move(&___nl__19,___get_global_const(1));
#line 488
c_rt_lib0move(&___nl__13, c_rt_lib0add_mod(___nl__13, ___nl__19));
#line 488
c_rt_lib0clear(&___nl__19);
#line 489
c_rt_lib0move(&___nl__15, c_rt_lib0add_mod(___nl__15, ___nl__16));
#line 489
goto label_146;
#line 489
label_173:
#line 489
c_rt_lib0clear(&___nl__14);
#line 489
c_rt_lib0clear(&___nl__15);
#line 489
c_rt_lib0clear(&___nl__16);
#line 489
c_rt_lib0clear(&___nl__17);
#line 489
c_rt_lib0clear(&___nl__18);
#line 490
c_rt_lib0move(&___nl__14,___get_global_const(196));
#line 490
c_rt_lib0move(&___nl__14, c_rt_lib0get_ref_hash(*___ref___0, ___nl__14));
#line 490
c_rt_lib0copy(&___nl__15, ___nl__13);
#line 490
c_rt_lib0hash_set_value_dec(&___nl__14, ___get_global_const(339), ___nl__15);
#line 490
c_rt_lib0move(&___nl__16,___get_global_const(196));
#line 490
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__16, ___nl__14));
#line 490
c_rt_lib0clear(&___nl__16);
#line 490
c_rt_lib0clear(&___nl__14);
#line 490
c_rt_lib0clear(&___nl__15);
#line 490
c_rt_lib0clear(&___nl__13);
#line 491
goto label_190;
#line 491
label_190:
#line 491
c_rt_lib0clear(&___nl__12);
#line 491
c_rt_lib0clear(&___nl__11);
#line 491
c_rt_lib0clear(&___nl__10);
#line 492
goto label_195;
#line 492
label_195:
#line 492
c_rt_lib0clear(&___nl__8);
#line 492
c_rt_lib0clear(&___nl__9);
#line 492
label_198:
#line 493
c_rt_lib0move(&___nl__4, c_rt_lib0add_mod(___nl__4, ___nl__5));
#line 493
goto label_37;
#line 493
label_201:
#line 493
c_rt_lib0clear(&___nl__2);
#line 493
c_rt_lib0clear(&___nl__3);
#line 493
c_rt_lib0clear(&___nl__4);
#line 493
c_rt_lib0clear(&___nl__5);
#line 493
c_rt_lib0clear(&___nl__6);
#line 493
c_rt_lib0clear(&___nl__7);
#line 494
c_rt_lib0move(&___nl__2,___get_global_const(253));
#line 494
c_rt_lib0move(&___nl__3, string0lf());
#line 494
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__3));
#line 494
c_rt_lib0clear(&___nl__3);
#line 494
c_rt_lib0delete(generator_c_priv0println(___ref___0, ___nl__2));
#line 494
c_rt_lib0clear(&___nl__2);
#line 494
c_rt_lib0clear(&___nl__1);
#line 494
return NULL;
}

ImmT generator_c_priv0is_singleton_use_function(ImmT ___nl__0) {
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
#line 498
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(188)));
#line 498
c_rt_lib0move(&___nl__1, array0len(___nl__2));
#line 498
c_rt_lib0clear(&___nl__2);
#line 498
c_rt_lib0move(&___nl__2,___get_global_const(0));
#line 498
c_rt_lib0move(&___nl__1, c_rt_lib0gt(___nl__1, ___nl__2));
#line 498
c_rt_lib0clear(&___nl__2);
#line 498
c_rt_lib0move(&___nl__1, c_rt_lib0not(___nl__1));
#line 498
if(c_rt_lib0check_true_native(___nl__1)){ goto label_14;}
#line 498
c_rt_lib0move(&___nl__2, c_rt_lib0get_false());
#line 498
c_rt_lib0clear(&___nl__0);
#line 498
c_rt_lib0clear(&___nl__1);
#line 498
return ___nl__2;
#line 498
c_rt_lib0clear(&___nl__2);
#line 498
goto label_14;
#line 498
label_14:
#line 498
c_rt_lib0clear(&___nl__1);
#line 499
c_rt_lib0move(&___nl__1, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(200)));
#line 499
c_rt_lib0move(&___nl__1, c_rt_lib0priv_is(___nl__1, ___get_global_const(168)));
#line 500
c_rt_lib0move(&___nl__2, c_rt_lib0get_false());
#line 502
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(187)));
#line 502
c_rt_lib0move(&___nl__6,___get_global_const(0));
#line 502
c_rt_lib0move(&___nl__7,___get_global_const(1));
#line 502
c_rt_lib0move(&___nl__8, c_rt_lib0array_len(___nl__4));
#line 502
label_23:
#line 502
c_rt_lib0move(&___nl__9, c_rt_lib0ge(___nl__6, ___nl__8));
#line 502
if(c_rt_lib0check_true_native(___nl__9)){ goto label_213;}
#line 502
c_rt_lib0move(&___nl__5, c_rt_lib0array_get(___nl__4, ___nl__6));
#line 503
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(201)));
#line 504
c_rt_lib0copy(&___nl__11, ___nl__10);
#line 504
c_rt_lib0move(&___nl__11, c_rt_lib0priv_is(___nl__11, ___get_global_const(206)));
#line 504
c_rt_lib0move(&___nl__11, c_rt_lib0not(___nl__11));
#line 504
if(c_rt_lib0check_true_native(___nl__11)){ goto label_72;}
#line 505
c_rt_lib0copy(&___nl__12, ___nl__10);
#line 505
c_rt_lib0move(&___nl__12, c_rt_lib0priv_as(___nl__12, ___get_global_const(206)));
#line 506
c_rt_lib0move(&___nl__13, c_rt_lib0hash_get_value_dec(___nl__12, ___get_global_const(224)));
#line 506
c_rt_lib0move(&___nl__14,___get_global_const(429));
#line 506
c_rt_lib0move(&___nl__13, c_rt_lib0eq(___nl__13, ___nl__14));
#line 506
c_rt_lib0clear(&___nl__14);
#line 506
c_rt_lib0move(&___nl__13, c_rt_lib0not(___nl__13));
#line 506
c_rt_lib0move(&___nl__13, c_rt_lib0not(___nl__13));
#line 506
if(c_rt_lib0check_true_native(___nl__13)){ goto label_47;}
#line 506
c_rt_lib0clear(&___nl__10);
#line 506
c_rt_lib0clear(&___nl__11);
#line 506
c_rt_lib0clear(&___nl__12);
#line 506
c_rt_lib0clear(&___nl__13);
#line 506
goto label_210;
#line 506
goto label_47;
#line 506
label_47:
#line 506
c_rt_lib0clear(&___nl__13);
#line 507
c_rt_lib0move(&___nl__13, c_rt_lib0hash_get_value_dec(___nl__12, ___get_global_const(222)));
#line 507
c_rt_lib0move(&___nl__14,___get_global_const(338));
#line 507
c_rt_lib0move(&___nl__13, c_rt_lib0eq(___nl__13, ___nl__14));
#line 507
c_rt_lib0clear(&___nl__14);
#line 507
c_rt_lib0move(&___nl__13, c_rt_lib0not(___nl__13));
#line 507
c_rt_lib0move(&___nl__13, c_rt_lib0not(___nl__13));
#line 507
if(c_rt_lib0check_true_native(___nl__13)){ goto label_62;}
#line 507
c_rt_lib0clear(&___nl__10);
#line 507
c_rt_lib0clear(&___nl__11);
#line 507
c_rt_lib0clear(&___nl__12);
#line 507
c_rt_lib0clear(&___nl__13);
#line 507
goto label_210;
#line 507
goto label_62;
#line 507
label_62:
#line 507
c_rt_lib0clear(&___nl__13);
#line 508
c_rt_lib0move(&___nl__13, c_rt_lib0get_true());
#line 508
c_rt_lib0copy(&___nl__2, ___nl__13);
#line 508
c_rt_lib0clear(&___nl__13);
#line 509
c_rt_lib0move(&___nl__13, c_rt_lib0hash_get_value_dec(___nl__12, ___get_global_const(197)));
#line 509
c_rt_lib0copy(&___nl__3, ___nl__13);
#line 509
c_rt_lib0clear(&___nl__13);
#line 509
c_rt_lib0clear(&___nl__12);
#line 510
goto label_207;
#line 510
label_72:
#line 510
c_rt_lib0copy(&___nl__11, ___nl__10);
#line 510
c_rt_lib0move(&___nl__11, c_rt_lib0priv_is(___nl__11, ___get_global_const(90)));
#line 510
c_rt_lib0move(&___nl__11, c_rt_lib0not(___nl__11));
#line 510
if(c_rt_lib0check_true_native(___nl__11)){ goto label_171;}
#line 511
c_rt_lib0copy(&___nl__12, ___nl__10);
#line 511
c_rt_lib0move(&___nl__12, c_rt_lib0priv_as(___nl__12, ___get_global_const(90)));
#line 512
c_rt_lib0copy(&___nl__13, ___nl__12);
#line 512
c_rt_lib0move(&___nl__13, c_rt_lib0priv_is(___nl__13, ___get_global_const(198)));
#line 512
c_rt_lib0move(&___nl__13, c_rt_lib0not(___nl__13));
#line 512
c_rt_lib0move(&___nl__13, c_rt_lib0not(___nl__13));
#line 512
if(c_rt_lib0check_true_native(___nl__13)){ goto label_102;}
#line 512
c_rt_lib0move(&___nl__14, c_rt_lib0get_false());
#line 512
c_rt_lib0clear(&___nl__0);
#line 512
c_rt_lib0clear(&___nl__1);
#line 512
c_rt_lib0clear(&___nl__2);
#line 512
c_rt_lib0clear(&___nl__3);
#line 512
c_rt_lib0clear(&___nl__4);
#line 512
c_rt_lib0clear(&___nl__5);
#line 512
c_rt_lib0clear(&___nl__6);
#line 512
c_rt_lib0clear(&___nl__7);
#line 512
c_rt_lib0clear(&___nl__8);
#line 512
c_rt_lib0clear(&___nl__9);
#line 512
c_rt_lib0clear(&___nl__10);
#line 512
c_rt_lib0clear(&___nl__11);
#line 512
c_rt_lib0clear(&___nl__12);
#line 512
c_rt_lib0clear(&___nl__13);
#line 512
return ___nl__14;
#line 512
c_rt_lib0clear(&___nl__14);
#line 512
goto label_102;
#line 512
label_102:
#line 512
c_rt_lib0clear(&___nl__13);
#line 513
c_rt_lib0copy(&___nl__13, ___nl__1);
#line 513
c_rt_lib0move(&___nl__13, c_rt_lib0not(___nl__13));
#line 513
if(c_rt_lib0check_true_native(___nl__13)){ goto label_125;}
#line 513
c_rt_lib0move(&___nl__14, c_rt_lib0get_true());
#line 513
c_rt_lib0clear(&___nl__0);
#line 513
c_rt_lib0clear(&___nl__1);
#line 513
c_rt_lib0clear(&___nl__2);
#line 513
c_rt_lib0clear(&___nl__3);
#line 513
c_rt_lib0clear(&___nl__4);
#line 513
c_rt_lib0clear(&___nl__5);
#line 513
c_rt_lib0clear(&___nl__6);
#line 513
c_rt_lib0clear(&___nl__7);
#line 513
c_rt_lib0clear(&___nl__8);
#line 513
c_rt_lib0clear(&___nl__9);
#line 513
c_rt_lib0clear(&___nl__10);
#line 513
c_rt_lib0clear(&___nl__11);
#line 513
c_rt_lib0clear(&___nl__12);
#line 513
c_rt_lib0clear(&___nl__13);
#line 513
return ___nl__14;
#line 513
c_rt_lib0clear(&___nl__14);
#line 513
goto label_125;
#line 513
label_125:
#line 513
c_rt_lib0clear(&___nl__13);
#line 514
c_rt_lib0copy(&___nl__13, ___nl__2);
#line 514
c_rt_lib0move(&___nl__13, c_rt_lib0not(___nl__13));
#line 514
c_rt_lib0move(&___nl__13, c_rt_lib0not(___nl__13));
#line 514
if(c_rt_lib0check_true_native(___nl__13)){ goto label_149;}
#line 514
c_rt_lib0move(&___nl__14, c_rt_lib0get_false());
#line 514
c_rt_lib0clear(&___nl__0);
#line 514
c_rt_lib0clear(&___nl__1);
#line 514
c_rt_lib0clear(&___nl__2);
#line 514
c_rt_lib0clear(&___nl__3);
#line 514
c_rt_lib0clear(&___nl__4);
#line 514
c_rt_lib0clear(&___nl__5);
#line 514
c_rt_lib0clear(&___nl__6);
#line 514
c_rt_lib0clear(&___nl__7);
#line 514
c_rt_lib0clear(&___nl__8);
#line 514
c_rt_lib0clear(&___nl__9);
#line 514
c_rt_lib0clear(&___nl__10);
#line 514
c_rt_lib0clear(&___nl__11);
#line 514
c_rt_lib0clear(&___nl__12);
#line 514
c_rt_lib0clear(&___nl__13);
#line 514
return ___nl__14;
#line 514
c_rt_lib0clear(&___nl__14);
#line 514
goto label_149;
#line 514
label_149:
#line 514
c_rt_lib0clear(&___nl__13);
#line 515
c_rt_lib0copy(&___nl__13, ___nl__12);
#line 515
c_rt_lib0move(&___nl__13, c_rt_lib0priv_as(___nl__13, ___get_global_const(198)));
#line 515
c_rt_lib0move(&___nl__13, c_rt_lib0eq(___nl__13, ___nl__3));
#line 515
c_rt_lib0clear(&___nl__0);
#line 515
c_rt_lib0clear(&___nl__1);
#line 515
c_rt_lib0clear(&___nl__2);
#line 515
c_rt_lib0clear(&___nl__3);
#line 515
c_rt_lib0clear(&___nl__4);
#line 515
c_rt_lib0clear(&___nl__5);
#line 515
c_rt_lib0clear(&___nl__6);
#line 515
c_rt_lib0clear(&___nl__7);
#line 515
c_rt_lib0clear(&___nl__8);
#line 515
c_rt_lib0clear(&___nl__9);
#line 515
c_rt_lib0clear(&___nl__10);
#line 515
c_rt_lib0clear(&___nl__11);
#line 515
c_rt_lib0clear(&___nl__12);
#line 515
return ___nl__13;
#line 515
c_rt_lib0clear(&___nl__13);
#line 515
c_rt_lib0clear(&___nl__12);
#line 516
goto label_207;
#line 516
label_171:
#line 516
c_rt_lib0copy(&___nl__11, ___nl__10);
#line 516
c_rt_lib0move(&___nl__11, c_rt_lib0priv_is(___nl__11, ___get_global_const(218)));
#line 516
c_rt_lib0move(&___nl__11, c_rt_lib0not(___nl__11));
#line 516
if(c_rt_lib0check_true_native(___nl__11)){ goto label_177;}
#line 517
goto label_207;
#line 517
label_177:
#line 517
c_rt_lib0copy(&___nl__11, ___nl__10);
#line 517
c_rt_lib0move(&___nl__11, c_rt_lib0priv_is(___nl__11, ___get_global_const(221)));
#line 517
c_rt_lib0move(&___nl__11, c_rt_lib0not(___nl__11));
#line 517
if(c_rt_lib0check_true_native(___nl__11)){ goto label_183;}
#line 518
goto label_207;
#line 518
label_183:
#line 519
c_rt_lib0copy(&___nl__12, ___nl__2);
#line 519
c_rt_lib0move(&___nl__12, c_rt_lib0not(___nl__12));
#line 519
if(c_rt_lib0check_true_native(___nl__12)){ goto label_204;}
#line 519
c_rt_lib0move(&___nl__13, c_rt_lib0get_false());
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
return ___nl__13;
#line 519
c_rt_lib0clear(&___nl__13);
#line 519
goto label_204;
#line 519
label_204:
#line 519
c_rt_lib0clear(&___nl__12);
#line 520
goto label_207;
#line 520
label_207:
#line 520
c_rt_lib0clear(&___nl__11);
#line 520
c_rt_lib0clear(&___nl__10);
#line 520
label_210:
#line 521
c_rt_lib0move(&___nl__6, c_rt_lib0add_mod(___nl__6, ___nl__7));
#line 521
goto label_23;
#line 521
label_213:
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
#line 522
c_rt_lib0move(&___nl__4, c_rt_lib0get_false());
#line 522
c_rt_lib0clear(&___nl__0);
#line 522
c_rt_lib0clear(&___nl__1);
#line 522
c_rt_lib0clear(&___nl__2);
#line 522
c_rt_lib0clear(&___nl__3);
#line 522
return ___nl__4;
#line 522
c_rt_lib0clear(&___nl__4);
#line 522
c_rt_lib0clear(&___nl__1);
#line 522
c_rt_lib0clear(&___nl__2);
#line 522
c_rt_lib0clear(&___nl__3);
#line 522
c_rt_lib0clear(&___nl__0);
#line 522
return NULL;
}

ImmT generator_c_priv0move_args_to_register(ImmT * ___ref___0) {
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
#line 526
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(344)));
#line 526
c_rt_lib0move(&___nl__1, array0len(___nl__2));
#line 526
c_rt_lib0clear(&___nl__2);
#line 526
c_rt_lib0move(&___nl__2,___get_global_const(0));
#line 526
c_rt_lib0move(&___nl__3,___get_global_const(1));
#line 526
label_5:
#line 526
c_rt_lib0move(&___nl__4, c_rt_lib0ge(___nl__2, ___nl__1));
#line 526
if(c_rt_lib0check_true_native(___nl__4)){ goto label_38;}
#line 527
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(344)));
#line 527
c_rt_lib0move(&___nl__5, c_rt_lib0array_get(___nl__5, ___nl__2));
#line 527
c_rt_lib0move(&___nl__6, c_rt_lib0priv_is(___nl__5, ___get_global_const(198)));
#line 527
if(c_rt_lib0check_true_native(___nl__6)){ goto label_17;}
#line 530
c_rt_lib0move(&___nl__6, c_rt_lib0priv_is(___nl__5, ___get_global_const(5)));
#line 530
if(c_rt_lib0check_true_native(___nl__6)){ goto label_31;}
#line 530
c_rt_lib0move(&___nl__6,___get_global_const(91));
#line 530
c_rt_lib0move(&___nl__6, c_rt_lib0array_mk(2, ___nl__6, ___nl__5));
#line 530
nl_die_arg(___nl__6);
#line 527
label_17:
#line 528
c_rt_lib0move(&___nl__8,___get_global_const(430));
#line 528
c_rt_lib0move(&___nl__10, generator_c_priv0get_reg(___ref___0, ___nl__2));
#line 528
c_rt_lib0move(&___nl__9, c_rt_lib0array_mk(1, ___nl__10));
#line 528
c_rt_lib0clear(&___nl__10);
#line 528
c_rt_lib0move(&___nl__7, generator_c_priv0get_fun_lib(___nl__8, ___nl__9));
#line 528
c_rt_lib0clear(&___nl__9);
#line 528
c_rt_lib0clear(&___nl__8);
#line 528
c_rt_lib0delete(generator_c_priv0print(___ref___0, ___nl__7));
#line 528
c_rt_lib0clear(&___nl__7);
#line 529
c_rt_lib0move(&___nl__7,___get_global_const(360));
#line 529
c_rt_lib0delete(generator_c_priv0println(___ref___0, ___nl__7));
#line 529
c_rt_lib0clear(&___nl__7);
#line 530
goto label_33;
#line 530
label_31:
#line 531
goto label_33;
#line 531
label_33:
#line 531
c_rt_lib0clear(&___nl__5);
#line 531
c_rt_lib0clear(&___nl__6);
#line 532
c_rt_lib0move(&___nl__2, c_rt_lib0add_mod(___nl__2, ___nl__3));
#line 532
goto label_5;
#line 532
label_38:
#line 532
c_rt_lib0clear(&___nl__1);
#line 532
c_rt_lib0clear(&___nl__2);
#line 532
c_rt_lib0clear(&___nl__3);
#line 532
c_rt_lib0clear(&___nl__4);
#line 532
return NULL;
}

ImmT generator_c_priv0move_register_to_ref_args(ImmT * ___ref___0) {
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
#line 536
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(344)));
#line 536
c_rt_lib0move(&___nl__1, array0len(___nl__2));
#line 536
c_rt_lib0clear(&___nl__2);
#line 536
c_rt_lib0move(&___nl__2,___get_global_const(0));
#line 536
c_rt_lib0move(&___nl__3,___get_global_const(1));
#line 536
label_5:
#line 536
c_rt_lib0move(&___nl__4, c_rt_lib0ge(___nl__2, ___nl__1));
#line 536
if(c_rt_lib0check_true_native(___nl__4)){ goto label_26;}
#line 537
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(344)));
#line 537
c_rt_lib0move(&___nl__5, c_rt_lib0array_get(___nl__5, ___nl__2));
#line 537
c_rt_lib0move(&___nl__6, c_rt_lib0priv_is(___nl__5, ___get_global_const(198)));
#line 537
if(c_rt_lib0check_true_native(___nl__6)){ goto label_17;}
#line 538
c_rt_lib0move(&___nl__6, c_rt_lib0priv_is(___nl__5, ___get_global_const(5)));
#line 538
if(c_rt_lib0check_true_native(___nl__6)){ goto label_19;}
#line 538
c_rt_lib0move(&___nl__6,___get_global_const(91));
#line 538
c_rt_lib0move(&___nl__6, c_rt_lib0array_mk(2, ___nl__6, ___nl__5));
#line 538
nl_die_arg(___nl__6);
#line 537
label_17:
#line 538
goto label_21;
#line 538
label_19:
#line 539
goto label_21;
#line 539
label_21:
#line 539
c_rt_lib0clear(&___nl__5);
#line 539
c_rt_lib0clear(&___nl__6);
#line 540
c_rt_lib0move(&___nl__2, c_rt_lib0add_mod(___nl__2, ___nl__3));
#line 540
goto label_5;
#line 540
label_26:
#line 540
c_rt_lib0clear(&___nl__1);
#line 540
c_rt_lib0clear(&___nl__2);
#line 540
c_rt_lib0clear(&___nl__3);
#line 540
c_rt_lib0clear(&___nl__4);
#line 540
return NULL;
}

ImmT generator_c_priv0get_fun_lib(ImmT ___nl__0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
ImmT ___nl__9 = NULL;
ImmT ___nl__10 = NULL;
#line 544
c_rt_lib0move(&___nl__2, generator_c_priv0get_lib_fun(___nl__0));
#line 544
c_rt_lib0move(&___nl__3,___get_global_const(373));
#line 544
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__3));
#line 544
c_rt_lib0clear(&___nl__3);
#line 545
c_rt_lib0move(&___nl__3,___get_global_const(0));
#line 546
c_rt_lib0move(&___nl__5,___get_global_const(0));
#line 546
c_rt_lib0move(&___nl__6,___get_global_const(1));
#line 546
c_rt_lib0move(&___nl__7, c_rt_lib0array_len(___nl__1));
#line 546
label_8:
#line 546
c_rt_lib0move(&___nl__8, c_rt_lib0ge(___nl__5, ___nl__7));
#line 546
if(c_rt_lib0check_true_native(___nl__8)){ goto label_29;}
#line 546
c_rt_lib0move(&___nl__4, c_rt_lib0array_get(___nl__1, ___nl__5));
#line 547
c_rt_lib0move(&___nl__9,___get_global_const(0));
#line 547
c_rt_lib0move(&___nl__9, c_rt_lib0num_eq(___nl__9, ___nl__3));
#line 547
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__9));
#line 547
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__9));
#line 547
if(c_rt_lib0check_true_native(___nl__9)){ goto label_21;}
#line 547
c_rt_lib0move(&___nl__10,___get_global_const(271));
#line 547
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__10));
#line 547
c_rt_lib0clear(&___nl__10);
#line 547
goto label_21;
#line 547
label_21:
#line 547
c_rt_lib0clear(&___nl__9);
#line 548
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__4));
#line 549
c_rt_lib0move(&___nl__9,___get_global_const(1));
#line 549
c_rt_lib0move(&___nl__3, c_rt_lib0add_mod(___nl__3, ___nl__9));
#line 549
c_rt_lib0clear(&___nl__9);
#line 550
c_rt_lib0move(&___nl__5, c_rt_lib0add_mod(___nl__5, ___nl__6));
#line 550
goto label_8;
#line 550
label_29:
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
#line 551
c_rt_lib0move(&___nl__4,___get_global_const(260));
#line 551
c_rt_lib0move(&___nl__4, c_rt_lib0concat_new(___nl__2, ___nl__4));
#line 551
c_rt_lib0clear(&___nl__0);
#line 551
c_rt_lib0clear(&___nl__1);
#line 551
c_rt_lib0clear(&___nl__2);
#line 551
c_rt_lib0clear(&___nl__3);
#line 551
return ___nl__4;
#line 551
c_rt_lib0clear(&___nl__4);
#line 551
c_rt_lib0clear(&___nl__2);
#line 551
c_rt_lib0clear(&___nl__3);
#line 551
c_rt_lib0clear(&___nl__0);
#line 551
c_rt_lib0clear(&___nl__1);
#line 551
return NULL;
}

ImmT generator_c_priv0get_module_name(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
#line 555
c_rt_lib0move(&___nl__2,___get_global_const(0));
#line 555
c_rt_lib0move(&___nl__3,___get_global_const(431));
#line 555
c_rt_lib0move(&___nl__1, string0replace(___nl__0, ___nl__2, ___nl__3));
#line 555
c_rt_lib0clear(&___nl__3);
#line 555
c_rt_lib0clear(&___nl__2);
#line 555
c_rt_lib0clear(&___nl__0);
#line 555
return ___nl__1;
#line 555
c_rt_lib0clear(&___nl__1);
#line 555
c_rt_lib0clear(&___nl__0);
#line 555
return NULL;
}

ImmT generator_c_priv0get_fun_name(ImmT ___nl__0,ImmT ___nl__1,ImmT ___nl__2) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
c_rt_lib0arg_val(___nl__2);
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
#line 559
c_rt_lib0move(&___nl__3,___get_global_const(2));
#line 559
c_rt_lib0move(&___nl__3, c_rt_lib0eq(___nl__0, ___nl__3));
#line 559
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 559
if(c_rt_lib0check_true_native(___nl__3)){ goto label_9;}
#line 559
c_rt_lib0move(&___nl__4,___get_global_const(223));
#line 559
c_rt_lib0move(&___nl__4, c_rt_lib0concat_new(___nl__2, ___nl__4));
#line 559
c_rt_lib0copy(&___nl__0, ___nl__4);
#line 559
c_rt_lib0clear(&___nl__4);
#line 559
goto label_9;
#line 559
label_9:
#line 559
c_rt_lib0clear(&___nl__3);
#line 560
c_rt_lib0move(&___nl__3, generator_c_priv0get_module_name(___nl__0));
#line 560
c_rt_lib0move(&___nl__4,___get_global_const(0));
#line 560
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 560
c_rt_lib0clear(&___nl__4);
#line 560
c_rt_lib0move(&___nl__5,___get_global_const(0));
#line 560
c_rt_lib0move(&___nl__6,___get_global_const(431));
#line 560
c_rt_lib0move(&___nl__4, string0replace(___nl__1, ___nl__5, ___nl__6));
#line 560
c_rt_lib0clear(&___nl__6);
#line 560
c_rt_lib0clear(&___nl__5);
#line 560
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 560
c_rt_lib0clear(&___nl__4);
#line 560
c_rt_lib0clear(&___nl__0);
#line 560
c_rt_lib0clear(&___nl__1);
#line 560
c_rt_lib0clear(&___nl__2);
#line 560
return ___nl__3;
#line 560
c_rt_lib0clear(&___nl__3);
#line 560
c_rt_lib0clear(&___nl__0);
#line 560
c_rt_lib0clear(&___nl__1);
#line 560
c_rt_lib0clear(&___nl__2);
#line 560
return NULL;
}

ImmT generator_c_priv0get_lib_fun(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
#line 564
c_rt_lib0move(&___nl__2,___get_global_const(225));
#line 564
c_rt_lib0move(&___nl__3,___get_global_const(2));
#line 564
c_rt_lib0move(&___nl__1, generator_c_priv0get_fun_name(___nl__2, ___nl__0, ___nl__3));
#line 564
c_rt_lib0clear(&___nl__3);
#line 564
c_rt_lib0clear(&___nl__2);
#line 564
c_rt_lib0clear(&___nl__0);
#line 564
return ___nl__1;
#line 564
c_rt_lib0clear(&___nl__1);
#line 564
c_rt_lib0clear(&___nl__0);
#line 564
return NULL;
}

ImmT generator_c_priv0generate_imm(ImmT * ___ref___0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__1);
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
#line 568
c_rt_lib0move(&___nl__2, nl0is_hash(___nl__1));
#line 568
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 568
if(c_rt_lib0check_true_native(___nl__2)){ goto label_40;}
#line 569
c_rt_lib0move(&___nl__4,___get_global_const(432));
#line 569
c_rt_lib0move(&___nl__3, generator_c_priv0get_lib_fun(___nl__4));
#line 569
c_rt_lib0clear(&___nl__4);
#line 569
c_rt_lib0move(&___nl__4,___get_global_const(373));
#line 569
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 569
c_rt_lib0clear(&___nl__4);
#line 569
c_rt_lib0move(&___nl__4, hash0size(___nl__1));
#line 569
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 569
c_rt_lib0clear(&___nl__4);
#line 569
c_rt_lib0delete(generator_c_priv0print(___ref___0, ___nl__3));
#line 569
c_rt_lib0clear(&___nl__3);
#line 570
c_rt_lib0move(&___nl__5, c_rt_lib0init_iter(___nl__1));
#line 570
label_15:
#line 570
c_rt_lib0move(&___nl__3, c_rt_lib0is_end_hash(___nl__5));
#line 570
if(c_rt_lib0check_true_native(___nl__3)){ goto label_32;}
#line 570
c_rt_lib0move(&___nl__3, c_rt_lib0get_key_iter(___nl__5));
#line 570
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value(___nl__1, ___nl__3));
#line 571
c_rt_lib0move(&___nl__6,___get_global_const(271));
#line 571
c_rt_lib0delete(generator_c_priv0print(___ref___0, ___nl__6));
#line 571
c_rt_lib0clear(&___nl__6);
#line 572
c_rt_lib0move(&___nl__6, generator_c_priv0get_const_sim(___ref___0, ___nl__3));
#line 572
c_rt_lib0delete(generator_c_priv0print(___ref___0, ___nl__6));
#line 572
c_rt_lib0clear(&___nl__6);
#line 573
c_rt_lib0move(&___nl__6,___get_global_const(271));
#line 573
c_rt_lib0delete(generator_c_priv0print(___ref___0, ___nl__6));
#line 573
c_rt_lib0clear(&___nl__6);
#line 574
c_rt_lib0delete(generator_c_priv0generate_imm(___ref___0, ___nl__4));
#line 575
c_rt_lib0move(&___nl__5, c_rt_lib0next_iter(___nl__5));
#line 575
goto label_15;
#line 575
label_32:
#line 575
c_rt_lib0clear(&___nl__3);
#line 575
c_rt_lib0clear(&___nl__4);
#line 575
c_rt_lib0clear(&___nl__5);
#line 576
c_rt_lib0move(&___nl__3,___get_global_const(260));
#line 576
c_rt_lib0delete(generator_c_priv0print(___ref___0, ___nl__3));
#line 576
c_rt_lib0clear(&___nl__3);
#line 577
goto label_215;
#line 577
label_40:
#line 577
c_rt_lib0move(&___nl__2, nl0is_array(___nl__1));
#line 577
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 577
if(c_rt_lib0check_true_native(___nl__2)){ goto label_78;}
#line 578
c_rt_lib0move(&___nl__4,___get_global_const(433));
#line 578
c_rt_lib0move(&___nl__3, generator_c_priv0get_lib_fun(___nl__4));
#line 578
c_rt_lib0clear(&___nl__4);
#line 578
c_rt_lib0move(&___nl__4,___get_global_const(373));
#line 578
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 578
c_rt_lib0clear(&___nl__4);
#line 578
c_rt_lib0move(&___nl__4, array0len(___nl__1));
#line 578
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 578
c_rt_lib0clear(&___nl__4);
#line 578
c_rt_lib0delete(generator_c_priv0print(___ref___0, ___nl__3));
#line 578
c_rt_lib0clear(&___nl__3);
#line 579
c_rt_lib0move(&___nl__4,___get_global_const(0));
#line 579
c_rt_lib0move(&___nl__5,___get_global_const(1));
#line 579
c_rt_lib0move(&___nl__6, c_rt_lib0array_len(___nl__1));
#line 579
label_58:
#line 579
c_rt_lib0move(&___nl__7, c_rt_lib0ge(___nl__4, ___nl__6));
#line 579
if(c_rt_lib0check_true_native(___nl__7)){ goto label_68;}
#line 579
c_rt_lib0move(&___nl__3, c_rt_lib0array_get(___nl__1, ___nl__4));
#line 580
c_rt_lib0move(&___nl__8,___get_global_const(271));
#line 580
c_rt_lib0delete(generator_c_priv0print(___ref___0, ___nl__8));
#line 580
c_rt_lib0clear(&___nl__8);
#line 581
c_rt_lib0delete(generator_c_priv0generate_imm(___ref___0, ___nl__3));
#line 582
c_rt_lib0move(&___nl__4, c_rt_lib0add_mod(___nl__4, ___nl__5));
#line 582
goto label_58;
#line 582
label_68:
#line 582
c_rt_lib0clear(&___nl__3);
#line 582
c_rt_lib0clear(&___nl__4);
#line 582
c_rt_lib0clear(&___nl__5);
#line 582
c_rt_lib0clear(&___nl__6);
#line 582
c_rt_lib0clear(&___nl__7);
#line 583
c_rt_lib0move(&___nl__3,___get_global_const(260));
#line 583
c_rt_lib0delete(generator_c_priv0print(___ref___0, ___nl__3));
#line 583
c_rt_lib0clear(&___nl__3);
#line 584
goto label_215;
#line 584
label_78:
#line 584
c_rt_lib0move(&___nl__2, nl0is_variant(___nl__1));
#line 584
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 584
if(c_rt_lib0check_true_native(___nl__2)){ goto label_198;}
#line 586
c_rt_lib0move(&___nl__5, ptd0sim());
#line 586
c_rt_lib0move(&___nl__6, ov0get_element(___nl__1));
#line 586
c_rt_lib0move(&___nl__4, ptd0ensure(___nl__5, ___nl__6));
#line 586
c_rt_lib0clear(&___nl__6);
#line 586
c_rt_lib0clear(&___nl__5);
#line 586
c_rt_lib0move(&___nl__3, generator_c_priv0get_const_sim(___ref___0, ___nl__4));
#line 586
c_rt_lib0clear(&___nl__4);
#line 587
c_rt_lib0move(&___nl__4, ov0has_value(___nl__1));
#line 587
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 587
if(c_rt_lib0check_true_native(___nl__4)){ goto label_180;}
#line 588
c_rt_lib0move(&___nl__6,___get_global_const(434));
#line 588
c_rt_lib0move(&___nl__5, generator_c_priv0get_lib_fun(___nl__6));
#line 588
c_rt_lib0clear(&___nl__6);
#line 588
c_rt_lib0move(&___nl__6,___get_global_const(373));
#line 588
c_rt_lib0move(&___nl__5, c_rt_lib0concat_add(___nl__5, ___nl__6));
#line 588
c_rt_lib0clear(&___nl__6);
#line 588
c_rt_lib0move(&___nl__5, c_rt_lib0concat_add(___nl__5, ___nl__3));
#line 588
c_rt_lib0move(&___nl__6,___get_global_const(271));
#line 588
c_rt_lib0move(&___nl__5, c_rt_lib0concat_add(___nl__5, ___nl__6));
#line 588
c_rt_lib0clear(&___nl__6);
#line 588
c_rt_lib0delete(generator_c_priv0print(___ref___0, ___nl__5));
#line 588
c_rt_lib0clear(&___nl__5);
#line 590
c_rt_lib0move(&___nl__5, ov0get_value(___nl__1));
#line 591
c_rt_lib0copy(&___nl__6, ___nl__1);
#line 591
c_rt_lib0move(&___nl__6, c_rt_lib0priv_is(___nl__6, ___get_global_const(5)));
#line 591
c_rt_lib0move(&___nl__10, c_rt_lib0not(___nl__6));
#line 591
if(c_rt_lib0check_true_native(___nl__10)){ goto label_110;}
#line 591
c_rt_lib0move(&___nl__6, nl0is_hash(___nl__5));
#line 591
label_110:
#line 591
c_rt_lib0clear(&___nl__10);
#line 591
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__6));
#line 591
if(c_rt_lib0check_true_native(___nl__9)){ goto label_118;}
#line 591
c_rt_lib0move(&___nl__6, hash0size(___nl__5));
#line 591
c_rt_lib0move(&___nl__10,___get_global_const(6));
#line 591
c_rt_lib0move(&___nl__6, c_rt_lib0num_eq(___nl__6, ___nl__10));
#line 591
c_rt_lib0clear(&___nl__10);
#line 591
label_118:
#line 591
c_rt_lib0clear(&___nl__9);
#line 591
c_rt_lib0move(&___nl__8, c_rt_lib0not(___nl__6));
#line 591
if(c_rt_lib0check_true_native(___nl__8)){ goto label_125;}
#line 591
c_rt_lib0move(&___nl__9,___get_global_const(93));
#line 591
c_rt_lib0move(&___nl__6, hash0has_key(___nl__5, ___nl__9));
#line 591
c_rt_lib0clear(&___nl__9);
#line 591
label_125:
#line 591
c_rt_lib0clear(&___nl__8);
#line 591
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__6));
#line 591
if(c_rt_lib0check_true_native(___nl__7)){ goto label_132;}
#line 591
c_rt_lib0move(&___nl__8,___get_global_const(132));
#line 591
c_rt_lib0move(&___nl__6, hash0has_key(___nl__5, ___nl__8));
#line 591
c_rt_lib0clear(&___nl__8);
#line 591
label_132:
#line 591
c_rt_lib0clear(&___nl__7);
#line 591
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 591
if(c_rt_lib0check_true_native(___nl__6)){ goto label_170;}
#line 592
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(93)));
#line 592
c_rt_lib0move(&___nl__7, nl0is_sim(___nl__9));
#line 592
c_rt_lib0clear(&___nl__9);
#line 592
c_rt_lib0move(&___nl__8, c_rt_lib0not(___nl__7));
#line 592
if(c_rt_lib0check_true_native(___nl__8)){ goto label_144;}
#line 592
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(132)));
#line 592
c_rt_lib0move(&___nl__7, nl0is_sim(___nl__9));
#line 592
c_rt_lib0clear(&___nl__9);
#line 592
label_144:
#line 592
c_rt_lib0clear(&___nl__8);
#line 592
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 592
if(c_rt_lib0check_true_native(___nl__7)){ goto label_164;}
#line 593
c_rt_lib0move(&___nl__10, ptd0sim());
#line 593
c_rt_lib0move(&___nl__11, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(132)));
#line 593
c_rt_lib0move(&___nl__9, ptd0ensure(___nl__10, ___nl__11));
#line 593
c_rt_lib0clear(&___nl__11);
#line 593
c_rt_lib0clear(&___nl__10);
#line 593
c_rt_lib0move(&___nl__11, ptd0sim());
#line 593
c_rt_lib0move(&___nl__12, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(93)));
#line 593
c_rt_lib0move(&___nl__10, ptd0ensure(___nl__11, ___nl__12));
#line 593
c_rt_lib0clear(&___nl__12);
#line 593
c_rt_lib0clear(&___nl__11);
#line 593
c_rt_lib0move(&___nl__8, generator_c_priv0get_func_pointer(___ref___0, ___nl__9, ___nl__10));
#line 593
c_rt_lib0clear(&___nl__10);
#line 593
c_rt_lib0clear(&___nl__9);
#line 593
c_rt_lib0delete(generator_c_priv0print(___ref___0, ___nl__8));
#line 593
c_rt_lib0clear(&___nl__8);
#line 594
goto label_167;
#line 594
label_164:
#line 595
c_rt_lib0delete(generator_c_priv0generate_imm(___ref___0, ___nl__5));
#line 596
goto label_167;
#line 596
label_167:
#line 596
c_rt_lib0clear(&___nl__7);
#line 597
goto label_173;
#line 597
label_170:
#line 598
c_rt_lib0delete(generator_c_priv0generate_imm(___ref___0, ___nl__5));
#line 599
goto label_173;
#line 599
label_173:
#line 599
c_rt_lib0clear(&___nl__6);
#line 601
c_rt_lib0move(&___nl__6,___get_global_const(260));
#line 601
c_rt_lib0delete(generator_c_priv0print(___ref___0, ___nl__6));
#line 601
c_rt_lib0clear(&___nl__6);
#line 601
c_rt_lib0clear(&___nl__5);
#line 602
goto label_194;
#line 602
label_180:
#line 603
c_rt_lib0move(&___nl__6,___get_global_const(435));
#line 603
c_rt_lib0move(&___nl__5, generator_c_priv0get_lib_fun(___nl__6));
#line 603
c_rt_lib0clear(&___nl__6);
#line 603
c_rt_lib0move(&___nl__6,___get_global_const(373));
#line 603
c_rt_lib0move(&___nl__5, c_rt_lib0concat_add(___nl__5, ___nl__6));
#line 603
c_rt_lib0clear(&___nl__6);
#line 603
c_rt_lib0move(&___nl__5, c_rt_lib0concat_add(___nl__5, ___nl__3));
#line 603
c_rt_lib0move(&___nl__6,___get_global_const(260));
#line 603
c_rt_lib0move(&___nl__5, c_rt_lib0concat_add(___nl__5, ___nl__6));
#line 603
c_rt_lib0clear(&___nl__6);
#line 603
c_rt_lib0delete(generator_c_priv0print(___ref___0, ___nl__5));
#line 603
c_rt_lib0clear(&___nl__5);
#line 604
goto label_194;
#line 604
label_194:
#line 604
c_rt_lib0clear(&___nl__4);
#line 604
c_rt_lib0clear(&___nl__3);
#line 605
goto label_215;
#line 605
label_198:
#line 605
c_rt_lib0move(&___nl__2, nl0is_sim(___nl__1));
#line 605
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 605
if(c_rt_lib0check_true_native(___nl__2)){ goto label_210;}
#line 606
c_rt_lib0move(&___nl__5, ptd0sim());
#line 606
c_rt_lib0move(&___nl__4, ptd0ensure(___nl__5, ___nl__1));
#line 606
c_rt_lib0clear(&___nl__5);
#line 606
c_rt_lib0move(&___nl__3, generator_c_priv0get_const_sim(___ref___0, ___nl__4));
#line 606
c_rt_lib0clear(&___nl__4);
#line 606
c_rt_lib0delete(generator_c_priv0print(___ref___0, ___nl__3));
#line 606
c_rt_lib0clear(&___nl__3);
#line 607
goto label_215;
#line 607
label_210:
#line 608
c_rt_lib0move(&___nl__3, c_rt_lib0array_mk(0));
#line 608
nl_die_arg(___nl__3);
#line 608
c_rt_lib0clear(&___nl__3);
#line 609
goto label_215;
#line 609
label_215:
#line 609
c_rt_lib0clear(&___nl__2);
#line 609
c_rt_lib0clear(&___nl__1);
#line 609
return NULL;
}

ImmT generator_c_priv0get_func_pointer(ImmT * ___ref___0,ImmT ___nl__1,ImmT ___nl__2) {
c_rt_lib0arg_val(___nl__1);
c_rt_lib0arg_val(___nl__2);
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
#line 614
c_rt_lib0move(&___nl__3, c_rt_lib0get_true());
#line 614
c_rt_lib0move(&___nl__4,___get_global_const(342));
#line 614
c_rt_lib0move(&___nl__4, c_rt_lib0get_ref_hash(*___ref___0, ___nl__4));
#line 614
c_rt_lib0copy(&___nl__5, ___nl__3);
#line 614
c_rt_lib0delete(c_rt_lib0hash_set_value(&___nl__4, ___nl__1, ___nl__5));
#line 614
c_rt_lib0move(&___nl__6,___get_global_const(342));
#line 614
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__6, ___nl__4));
#line 614
c_rt_lib0clear(&___nl__6);
#line 614
c_rt_lib0clear(&___nl__3);
#line 614
c_rt_lib0clear(&___nl__4);
#line 614
c_rt_lib0clear(&___nl__5);
#line 615
c_rt_lib0move(&___nl__4,___get_global_const(436));
#line 616
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(343)));
#line 616
c_rt_lib0move(&___nl__6, generator_c_priv0get_fun_name(___nl__1, ___nl__2, ___nl__7));
#line 616
c_rt_lib0clear(&___nl__7);
#line 616
c_rt_lib0move(&___nl__7,___get_global_const(437));
#line 616
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__7));
#line 616
c_rt_lib0clear(&___nl__7);
#line 617
c_rt_lib0move(&___nl__7, generator_c_priv0get_const_sim(___ref___0, ___nl__1));
#line 618
c_rt_lib0move(&___nl__8, generator_c_priv0get_const_sim(___ref___0, ___nl__2));
#line 618
c_rt_lib0move(&___nl__5, c_rt_lib0array_mk(3, ___nl__6, ___nl__7, ___nl__8));
#line 618
c_rt_lib0clear(&___nl__6);
#line 618
c_rt_lib0clear(&___nl__7);
#line 618
c_rt_lib0clear(&___nl__8);
#line 618
c_rt_lib0move(&___nl__3, generator_c_priv0get_fun_lib(___nl__4, ___nl__5));
#line 618
c_rt_lib0clear(&___nl__5);
#line 618
c_rt_lib0clear(&___nl__4);
#line 618
c_rt_lib0clear(&___nl__1);
#line 618
c_rt_lib0clear(&___nl__2);
#line 618
return ___nl__3;
#line 618
c_rt_lib0clear(&___nl__3);
#line 618
c_rt_lib0clear(&___nl__1);
#line 618
c_rt_lib0clear(&___nl__2);
#line 618
return NULL;
}

ImmT generator_c_priv0print_cmd(ImmT * ___ref___0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__1);
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
#line 623
c_rt_lib0move(&___nl__2,___get_global_const(438));
#line 623
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(195)));
#line 623
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(439)));
#line 623
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(440)));
#line 623
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(134)));
#line 623
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__3));
#line 623
c_rt_lib0clear(&___nl__3);
#line 623
c_rt_lib0move(&___nl__3, string0lf());
#line 623
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__3));
#line 623
c_rt_lib0clear(&___nl__3);
#line 623
c_rt_lib0delete(generator_c_priv0print(___ref___0, ___nl__2));
#line 623
c_rt_lib0clear(&___nl__2);
#line 624
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(201)));
#line 624
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(204)));
#line 624
if(c_rt_lib0check_true_native(___nl__3)){ goto label_58;}
#line 629
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(205)));
#line 629
if(c_rt_lib0check_true_native(___nl__3)){ goto label_97;}
#line 637
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(88)));
#line 637
if(c_rt_lib0check_true_native(___nl__3)){ goto label_143;}
#line 640
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(206)));
#line 640
if(c_rt_lib0check_true_native(___nl__3)){ goto label_158;}
#line 642
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(207)));
#line 642
if(c_rt_lib0check_true_native(___nl__3)){ goto label_163;}
#line 646
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(208)));
#line 646
if(c_rt_lib0check_true_native(___nl__3)){ goto label_186;}
#line 653
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(209)));
#line 653
if(c_rt_lib0check_true_native(___nl__3)){ goto label_238;}
#line 656
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(210)));
#line 656
if(c_rt_lib0check_true_native(___nl__3)){ goto label_261;}
#line 659
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(90)));
#line 659
if(c_rt_lib0check_true_native(___nl__3)){ goto label_284;}
#line 667
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(217)));
#line 667
if(c_rt_lib0check_true_native(___nl__3)){ goto label_313;}
#line 669
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(211)));
#line 669
if(c_rt_lib0check_true_native(___nl__3)){ goto label_326;}
#line 673
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(199)));
#line 673
if(c_rt_lib0check_true_native(___nl__3)){ goto label_360;}
#line 678
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(212)));
#line 678
if(c_rt_lib0check_true_native(___nl__3)){ goto label_401;}
#line 681
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(213)));
#line 681
if(c_rt_lib0check_true_native(___nl__3)){ goto label_424;}
#line 687
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(214)));
#line 687
if(c_rt_lib0check_true_native(___nl__3)){ goto label_447;}
#line 690
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(215)));
#line 690
if(c_rt_lib0check_true_native(___nl__3)){ goto label_470;}
#line 696
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(216)));
#line 696
if(c_rt_lib0check_true_native(___nl__3)){ goto label_493;}
#line 710
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(218)));
#line 710
if(c_rt_lib0check_true_native(___nl__3)){ goto label_589;}
#line 713
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(219)));
#line 713
if(c_rt_lib0check_true_native(___nl__3)){ goto label_608;}
#line 718
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(220)));
#line 718
if(c_rt_lib0check_true_native(___nl__3)){ goto label_643;}
#line 720
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(221)));
#line 720
if(c_rt_lib0check_true_native(___nl__3)){ goto label_651;}
#line 720
c_rt_lib0move(&___nl__3,___get_global_const(91));
#line 720
c_rt_lib0move(&___nl__3, c_rt_lib0array_mk(2, ___nl__3, ___nl__2));
#line 720
nl_die_arg(___nl__3);
#line 624
label_58:
#line 624
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(204)));
#line 625
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(43)));
#line 625
c_rt_lib0move(&___nl__6, array0len(___nl__7));
#line 625
c_rt_lib0clear(&___nl__7);
#line 625
c_rt_lib0move(&___nl__5, c_rt_lib0array_mk(1, ___nl__6));
#line 625
c_rt_lib0clear(&___nl__6);
#line 626
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(43)));
#line 626
c_rt_lib0move(&___nl__8,___get_global_const(0));
#line 626
c_rt_lib0move(&___nl__9,___get_global_const(1));
#line 626
c_rt_lib0move(&___nl__10, c_rt_lib0array_len(___nl__6));
#line 626
label_69:
#line 626
c_rt_lib0move(&___nl__11, c_rt_lib0ge(___nl__8, ___nl__10));
#line 626
if(c_rt_lib0check_true_native(___nl__11)){ goto label_78;}
#line 626
c_rt_lib0move(&___nl__7, c_rt_lib0array_get(___nl__6, ___nl__8));
#line 626
c_rt_lib0move(&___nl__12, generator_c_priv0get_reg(___ref___0, ___nl__7));
#line 626
c_rt_lib0delete(array0push(&___nl__5, ___nl__12));
#line 626
c_rt_lib0clear(&___nl__12);
#line 626
c_rt_lib0move(&___nl__8, c_rt_lib0add_mod(___nl__8, ___nl__9));
#line 626
goto label_69;
#line 626
label_78:
#line 626
c_rt_lib0clear(&___nl__6);
#line 626
c_rt_lib0clear(&___nl__7);
#line 626
c_rt_lib0clear(&___nl__8);
#line 626
c_rt_lib0clear(&___nl__9);
#line 626
c_rt_lib0clear(&___nl__10);
#line 626
c_rt_lib0clear(&___nl__11);
#line 627
c_rt_lib0move(&___nl__7,___get_global_const(441));
#line 627
c_rt_lib0move(&___nl__6, generator_c_priv0get_fun_lib(___nl__7, ___nl__5));
#line 627
c_rt_lib0clear(&___nl__7);
#line 628
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(197)));
#line 628
c_rt_lib0move(&___nl__7, generator_c_priv0get_assign(___ref___0, ___nl__8, ___nl__6));
#line 628
c_rt_lib0clear(&___nl__8);
#line 628
c_rt_lib0delete(generator_c_priv0print(___ref___0, ___nl__7));
#line 628
c_rt_lib0clear(&___nl__7);
#line 628
c_rt_lib0clear(&___nl__5);
#line 628
c_rt_lib0clear(&___nl__6);
#line 628
c_rt_lib0clear(&___nl__4);
#line 629
goto label_664;
#line 629
label_97:
#line 629
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(205)));
#line 630
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(43)));
#line 630
c_rt_lib0move(&___nl__6, array0len(___nl__7));
#line 630
c_rt_lib0clear(&___nl__7);
#line 630
c_rt_lib0move(&___nl__5, c_rt_lib0array_mk(1, ___nl__6));
#line 630
c_rt_lib0clear(&___nl__6);
#line 631
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(43)));
#line 631
c_rt_lib0move(&___nl__8,___get_global_const(0));
#line 631
c_rt_lib0move(&___nl__9,___get_global_const(1));
#line 631
c_rt_lib0move(&___nl__10, c_rt_lib0array_len(___nl__6));
#line 631
label_108:
#line 631
c_rt_lib0move(&___nl__11, c_rt_lib0ge(___nl__8, ___nl__10));
#line 631
if(c_rt_lib0check_true_native(___nl__11)){ goto label_124;}
#line 631
c_rt_lib0move(&___nl__7, c_rt_lib0array_get(___nl__6, ___nl__8));
#line 632
c_rt_lib0move(&___nl__13, c_rt_lib0hash_get_value_dec(___nl__7, ___get_global_const(329)));
#line 632
c_rt_lib0move(&___nl__12, generator_c_priv0get_const_sim(___ref___0, ___nl__13));
#line 632
c_rt_lib0clear(&___nl__13);
#line 632
c_rt_lib0delete(array0push(&___nl__5, ___nl__12));
#line 632
c_rt_lib0clear(&___nl__12);
#line 633
c_rt_lib0move(&___nl__13, c_rt_lib0hash_get_value_dec(___nl__7, ___get_global_const(198)));
#line 633
c_rt_lib0move(&___nl__12, generator_c_priv0get_reg(___ref___0, ___nl__13));
#line 633
c_rt_lib0clear(&___nl__13);
#line 633
c_rt_lib0delete(array0push(&___nl__5, ___nl__12));
#line 633
c_rt_lib0clear(&___nl__12);
#line 634
c_rt_lib0move(&___nl__8, c_rt_lib0add_mod(___nl__8, ___nl__9));
#line 634
goto label_108;
#line 634
label_124:
#line 634
c_rt_lib0clear(&___nl__6);
#line 634
c_rt_lib0clear(&___nl__7);
#line 634
c_rt_lib0clear(&___nl__8);
#line 634
c_rt_lib0clear(&___nl__9);
#line 634
c_rt_lib0clear(&___nl__10);
#line 634
c_rt_lib0clear(&___nl__11);
#line 635
c_rt_lib0move(&___nl__7,___get_global_const(442));
#line 635
c_rt_lib0move(&___nl__6, generator_c_priv0get_fun_lib(___nl__7, ___nl__5));
#line 635
c_rt_lib0clear(&___nl__7);
#line 636
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(197)));
#line 636
c_rt_lib0move(&___nl__7, generator_c_priv0get_assign(___ref___0, ___nl__8, ___nl__6));
#line 636
c_rt_lib0clear(&___nl__8);
#line 636
c_rt_lib0delete(generator_c_priv0print(___ref___0, ___nl__7));
#line 636
c_rt_lib0clear(&___nl__7);
#line 636
c_rt_lib0clear(&___nl__5);
#line 636
c_rt_lib0clear(&___nl__6);
#line 636
c_rt_lib0clear(&___nl__4);
#line 637
goto label_664;
#line 637
label_143:
#line 637
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(88)));
#line 638
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(132)));
#line 638
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(93)));
#line 638
c_rt_lib0move(&___nl__5, generator_c_priv0get_func_pointer(___ref___0, ___nl__6, ___nl__7));
#line 638
c_rt_lib0clear(&___nl__7);
#line 638
c_rt_lib0clear(&___nl__6);
#line 639
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(197)));
#line 639
c_rt_lib0move(&___nl__6, generator_c_priv0get_assign(___ref___0, ___nl__7, ___nl__5));
#line 639
c_rt_lib0clear(&___nl__7);
#line 639
c_rt_lib0delete(generator_c_priv0print(___ref___0, ___nl__6));
#line 639
c_rt_lib0clear(&___nl__6);
#line 639
c_rt_lib0clear(&___nl__5);
#line 639
c_rt_lib0clear(&___nl__4);
#line 640
goto label_664;
#line 640
label_158:
#line 640
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(206)));
#line 641
c_rt_lib0delete(generator_c_priv0generate_call(___ref___0, ___nl__4));
#line 641
c_rt_lib0clear(&___nl__4);
#line 642
goto label_664;
#line 642
label_163:
#line 642
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(207)));
#line 643
c_rt_lib0move(&___nl__6, generator_c_priv0get_unary_ops());
#line 643
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(443)));
#line 643
c_rt_lib0move(&___nl__5, hash0get_value(___nl__6, ___nl__7));
#line 643
c_rt_lib0clear(&___nl__7);
#line 643
c_rt_lib0clear(&___nl__6);
#line 644
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(43)));
#line 644
c_rt_lib0move(&___nl__8, generator_c_priv0get_reg(___ref___0, ___nl__9));
#line 644
c_rt_lib0clear(&___nl__9);
#line 644
c_rt_lib0move(&___nl__7, c_rt_lib0array_mk(1, ___nl__8));
#line 644
c_rt_lib0clear(&___nl__8);
#line 644
c_rt_lib0move(&___nl__6, generator_c_priv0get_fun_lib(___nl__5, ___nl__7));
#line 644
c_rt_lib0clear(&___nl__7);
#line 645
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(197)));
#line 645
c_rt_lib0move(&___nl__7, generator_c_priv0get_assign(___ref___0, ___nl__8, ___nl__6));
#line 645
c_rt_lib0clear(&___nl__8);
#line 645
c_rt_lib0delete(generator_c_priv0print(___ref___0, ___nl__7));
#line 645
c_rt_lib0clear(&___nl__7);
#line 645
c_rt_lib0clear(&___nl__5);
#line 645
c_rt_lib0clear(&___nl__6);
#line 645
c_rt_lib0clear(&___nl__4);
#line 646
goto label_664;
#line 646
label_186:
#line 646
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(208)));
#line 647
c_rt_lib0move(&___nl__6, generator_c_priv0get_bin_ops());
#line 647
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(443)));
#line 647
c_rt_lib0move(&___nl__5, hash0get_value(___nl__6, ___nl__7));
#line 647
c_rt_lib0clear(&___nl__7);
#line 647
c_rt_lib0clear(&___nl__6);
#line 648
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(197)));
#line 648
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(230)));
#line 648
c_rt_lib0move(&___nl__6, c_rt_lib0eq(___nl__6, ___nl__8));
#line 648
c_rt_lib0clear(&___nl__8);
#line 648
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__6));
#line 648
if(c_rt_lib0check_true_native(___nl__7)){ goto label_204;}
#line 648
c_rt_lib0move(&___nl__8, generator_c_priv0get_bin_ops_mod());
#line 648
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(443)));
#line 648
c_rt_lib0move(&___nl__6, hash0has_key(___nl__8, ___nl__9));
#line 648
c_rt_lib0clear(&___nl__9);
#line 648
c_rt_lib0clear(&___nl__8);
#line 648
label_204:
#line 648
c_rt_lib0clear(&___nl__7);
#line 648
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 648
if(c_rt_lib0check_true_native(___nl__6)){ goto label_216;}
#line 649
c_rt_lib0move(&___nl__8, generator_c_priv0get_bin_ops_mod());
#line 649
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(443)));
#line 649
c_rt_lib0move(&___nl__7, hash0get_value(___nl__8, ___nl__9));
#line 649
c_rt_lib0clear(&___nl__9);
#line 649
c_rt_lib0clear(&___nl__8);
#line 649
c_rt_lib0copy(&___nl__5, ___nl__7);
#line 649
c_rt_lib0clear(&___nl__7);
#line 650
goto label_216;
#line 650
label_216:
#line 650
c_rt_lib0clear(&___nl__6);
#line 651
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(230)));
#line 651
c_rt_lib0move(&___nl__8, generator_c_priv0get_reg(___ref___0, ___nl__9));
#line 651
c_rt_lib0clear(&___nl__9);
#line 651
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(231)));
#line 651
c_rt_lib0move(&___nl__9, generator_c_priv0get_reg(___ref___0, ___nl__10));
#line 651
c_rt_lib0clear(&___nl__10);
#line 651
c_rt_lib0move(&___nl__7, c_rt_lib0array_mk(2, ___nl__8, ___nl__9));
#line 651
c_rt_lib0clear(&___nl__8);
#line 651
c_rt_lib0clear(&___nl__9);
#line 651
c_rt_lib0move(&___nl__6, generator_c_priv0get_fun_lib(___nl__5, ___nl__7));
#line 651
c_rt_lib0clear(&___nl__7);
#line 652
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(197)));
#line 652
c_rt_lib0move(&___nl__7, generator_c_priv0get_assign(___ref___0, ___nl__8, ___nl__6));
#line 652
c_rt_lib0clear(&___nl__8);
#line 652
c_rt_lib0delete(generator_c_priv0print(___ref___0, ___nl__7));
#line 652
c_rt_lib0clear(&___nl__7);
#line 652
c_rt_lib0clear(&___nl__5);
#line 652
c_rt_lib0clear(&___nl__6);
#line 652
c_rt_lib0clear(&___nl__4);
#line 653
goto label_664;
#line 653
label_238:
#line 653
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(209)));
#line 654
c_rt_lib0move(&___nl__6,___get_global_const(444));
#line 654
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(43)));
#line 654
c_rt_lib0move(&___nl__8, generator_c_priv0get_reg(___ref___0, ___nl__9));
#line 654
c_rt_lib0clear(&___nl__9);
#line 654
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(63)));
#line 654
c_rt_lib0move(&___nl__9, generator_c_priv0get_const_sim(___ref___0, ___nl__10));
#line 654
c_rt_lib0clear(&___nl__10);
#line 654
c_rt_lib0move(&___nl__7, c_rt_lib0array_mk(2, ___nl__8, ___nl__9));
#line 654
c_rt_lib0clear(&___nl__8);
#line 654
c_rt_lib0clear(&___nl__9);
#line 654
c_rt_lib0move(&___nl__5, generator_c_priv0get_fun_lib(___nl__6, ___nl__7));
#line 654
c_rt_lib0clear(&___nl__7);
#line 654
c_rt_lib0clear(&___nl__6);
#line 655
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(197)));
#line 655
c_rt_lib0move(&___nl__6, generator_c_priv0get_assign(___ref___0, ___nl__7, ___nl__5));
#line 655
c_rt_lib0clear(&___nl__7);
#line 655
c_rt_lib0delete(generator_c_priv0print(___ref___0, ___nl__6));
#line 655
c_rt_lib0clear(&___nl__6);
#line 655
c_rt_lib0clear(&___nl__5);
#line 655
c_rt_lib0clear(&___nl__4);
#line 656
goto label_664;
#line 656
label_261:
#line 656
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(210)));
#line 657
c_rt_lib0move(&___nl__6,___get_global_const(445));
#line 657
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(43)));
#line 657
c_rt_lib0move(&___nl__8, generator_c_priv0get_reg(___ref___0, ___nl__9));
#line 657
c_rt_lib0clear(&___nl__9);
#line 657
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(63)));
#line 657
c_rt_lib0move(&___nl__9, generator_c_priv0get_const_sim(___ref___0, ___nl__10));
#line 657
c_rt_lib0clear(&___nl__10);
#line 657
c_rt_lib0move(&___nl__7, c_rt_lib0array_mk(2, ___nl__8, ___nl__9));
#line 657
c_rt_lib0clear(&___nl__8);
#line 657
c_rt_lib0clear(&___nl__9);
#line 657
c_rt_lib0move(&___nl__5, generator_c_priv0get_fun_lib(___nl__6, ___nl__7));
#line 657
c_rt_lib0clear(&___nl__7);
#line 657
c_rt_lib0clear(&___nl__6);
#line 658
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(197)));
#line 658
c_rt_lib0move(&___nl__6, generator_c_priv0get_assign(___ref___0, ___nl__7, ___nl__5));
#line 658
c_rt_lib0clear(&___nl__7);
#line 658
c_rt_lib0delete(generator_c_priv0print(___ref___0, ___nl__6));
#line 658
c_rt_lib0clear(&___nl__6);
#line 658
c_rt_lib0clear(&___nl__5);
#line 658
c_rt_lib0clear(&___nl__4);
#line 659
goto label_664;
#line 659
label_284:
#line 659
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(90)));
#line 660
c_rt_lib0delete(generator_c_priv0move_register_to_ref_args(___ref___0));
#line 661
c_rt_lib0move(&___nl__5,___get_global_const(394));
#line 661
c_rt_lib0delete(generator_c_priv0print(___ref___0, ___nl__5));
#line 661
c_rt_lib0clear(&___nl__5);
#line 662
c_rt_lib0move(&___nl__5, c_rt_lib0priv_is(___nl__4, ___get_global_const(198)));
#line 662
if(c_rt_lib0check_true_native(___nl__5)){ goto label_297;}
#line 664
c_rt_lib0move(&___nl__5, c_rt_lib0priv_is(___nl__4, ___get_global_const(288)));
#line 664
if(c_rt_lib0check_true_native(___nl__5)){ goto label_304;}
#line 664
c_rt_lib0move(&___nl__5,___get_global_const(91));
#line 664
c_rt_lib0move(&___nl__5, c_rt_lib0array_mk(2, ___nl__5, ___nl__4));
#line 664
nl_die_arg(___nl__5);
#line 662
label_297:
#line 662
c_rt_lib0move(&___nl__6, c_rt_lib0priv_as(___nl__4, ___get_global_const(198)));
#line 663
c_rt_lib0move(&___nl__7, generator_c_priv0get_reg(___ref___0, ___nl__6));
#line 663
c_rt_lib0delete(generator_c_priv0print(___ref___0, ___nl__7));
#line 663
c_rt_lib0clear(&___nl__7);
#line 663
c_rt_lib0clear(&___nl__6);
#line 664
goto label_309;
#line 664
label_304:
#line 665
c_rt_lib0move(&___nl__6,___get_global_const(446));
#line 665
c_rt_lib0delete(generator_c_priv0print(___ref___0, ___nl__6));
#line 665
c_rt_lib0clear(&___nl__6);
#line 666
goto label_309;
#line 666
label_309:
#line 666
c_rt_lib0clear(&___nl__5);
#line 666
c_rt_lib0clear(&___nl__4);
#line 667
goto label_664;
#line 667
label_313:
#line 667
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(217)));
#line 668
c_rt_lib0move(&___nl__5,___get_global_const(447));
#line 668
c_rt_lib0move(&___nl__6, generator_c_priv0get_reg(___ref___0, ___nl__4));
#line 668
c_rt_lib0move(&___nl__5, c_rt_lib0concat_add(___nl__5, ___nl__6));
#line 668
c_rt_lib0clear(&___nl__6);
#line 668
c_rt_lib0move(&___nl__6,___get_global_const(260));
#line 668
c_rt_lib0move(&___nl__5, c_rt_lib0concat_add(___nl__5, ___nl__6));
#line 668
c_rt_lib0clear(&___nl__6);
#line 668
c_rt_lib0delete(generator_c_priv0print(___ref___0, ___nl__5));
#line 668
c_rt_lib0clear(&___nl__5);
#line 668
c_rt_lib0clear(&___nl__4);
#line 669
goto label_664;
#line 669
label_326:
#line 669
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(211)));
#line 670
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(197)));
#line 670
c_rt_lib0move(&___nl__6,___get_global_const(2));
#line 670
c_rt_lib0move(&___nl__5, c_rt_lib0eq(___nl__5, ___nl__6));
#line 670
c_rt_lib0clear(&___nl__6);
#line 670
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 670
if(c_rt_lib0check_true_native(___nl__5)){ goto label_341;}
#line 670
c_rt_lib0clear(&___nl__1);
#line 670
c_rt_lib0clear(&___nl__2);
#line 670
c_rt_lib0clear(&___nl__3);
#line 670
c_rt_lib0clear(&___nl__4);
#line 670
c_rt_lib0clear(&___nl__5);
#line 670
return NULL;
#line 670
goto label_341;
#line 670
label_341:
#line 670
c_rt_lib0clear(&___nl__5);
#line 671
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(197)));
#line 671
c_rt_lib0move(&___nl__6, generator_c_priv0get_reg_ref(___ref___0, ___nl__7));
#line 671
c_rt_lib0clear(&___nl__7);
#line 671
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(43)));
#line 671
c_rt_lib0move(&___nl__7, generator_c_priv0get_reg(___ref___0, ___nl__8));
#line 671
c_rt_lib0clear(&___nl__8);
#line 671
c_rt_lib0move(&___nl__5, c_rt_lib0array_mk(2, ___nl__6, ___nl__7));
#line 671
c_rt_lib0clear(&___nl__6);
#line 671
c_rt_lib0clear(&___nl__7);
#line 672
c_rt_lib0move(&___nl__7,___get_global_const(371));
#line 672
c_rt_lib0move(&___nl__6, generator_c_priv0get_fun_lib(___nl__7, ___nl__5));
#line 672
c_rt_lib0clear(&___nl__7);
#line 672
c_rt_lib0delete(generator_c_priv0print(___ref___0, ___nl__6));
#line 672
c_rt_lib0clear(&___nl__6);
#line 672
c_rt_lib0clear(&___nl__5);
#line 672
c_rt_lib0clear(&___nl__4);
#line 673
goto label_664;
#line 673
label_360:
#line 673
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(199)));
#line 674
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(197)));
#line 674
c_rt_lib0move(&___nl__6,___get_global_const(2));
#line 674
c_rt_lib0move(&___nl__5, c_rt_lib0eq(___nl__5, ___nl__6));
#line 674
c_rt_lib0clear(&___nl__6);
#line 674
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 674
if(c_rt_lib0check_true_native(___nl__5)){ goto label_375;}
#line 674
c_rt_lib0clear(&___nl__1);
#line 674
c_rt_lib0clear(&___nl__2);
#line 674
c_rt_lib0clear(&___nl__3);
#line 674
c_rt_lib0clear(&___nl__4);
#line 674
c_rt_lib0clear(&___nl__5);
#line 674
return NULL;
#line 674
goto label_375;
#line 674
label_375:
#line 674
c_rt_lib0clear(&___nl__5);
#line 675
c_rt_lib0move(&___nl__6,___get_global_const(211));
#line 675
c_rt_lib0move(&___nl__5, generator_c_priv0get_lib_fun(___nl__6));
#line 675
c_rt_lib0clear(&___nl__6);
#line 675
c_rt_lib0move(&___nl__6,___get_global_const(373));
#line 675
c_rt_lib0move(&___nl__5, c_rt_lib0concat_add(___nl__5, ___nl__6));
#line 675
c_rt_lib0clear(&___nl__6);
#line 675
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(197)));
#line 675
c_rt_lib0move(&___nl__6, generator_c_priv0get_reg_ref(___ref___0, ___nl__7));
#line 675
c_rt_lib0clear(&___nl__7);
#line 675
c_rt_lib0move(&___nl__5, c_rt_lib0concat_add(___nl__5, ___nl__6));
#line 675
c_rt_lib0clear(&___nl__6);
#line 675
c_rt_lib0move(&___nl__6,___get_global_const(256));
#line 675
c_rt_lib0move(&___nl__5, c_rt_lib0concat_add(___nl__5, ___nl__6));
#line 675
c_rt_lib0clear(&___nl__6);
#line 675
c_rt_lib0delete(generator_c_priv0print(___ref___0, ___nl__5));
#line 675
c_rt_lib0clear(&___nl__5);
#line 676
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(198)));
#line 676
c_rt_lib0delete(generator_c_priv0generate_imm(___ref___0, ___nl__5));
#line 676
c_rt_lib0clear(&___nl__5);
#line 677
c_rt_lib0move(&___nl__5,___get_global_const(260));
#line 677
c_rt_lib0delete(generator_c_priv0print(___ref___0, ___nl__5));
#line 677
c_rt_lib0clear(&___nl__5);
#line 677
c_rt_lib0clear(&___nl__4);
#line 678
goto label_664;
#line 678
label_401:
#line 678
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(212)));
#line 679
c_rt_lib0move(&___nl__6,___get_global_const(448));
#line 679
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(43)));
#line 679
c_rt_lib0move(&___nl__8, generator_c_priv0get_reg(___ref___0, ___nl__9));
#line 679
c_rt_lib0clear(&___nl__9);
#line 679
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(232)));
#line 679
c_rt_lib0move(&___nl__9, generator_c_priv0get_reg(___ref___0, ___nl__10));
#line 679
c_rt_lib0clear(&___nl__10);
#line 679
c_rt_lib0move(&___nl__7, c_rt_lib0array_mk(2, ___nl__8, ___nl__9));
#line 679
c_rt_lib0clear(&___nl__8);
#line 679
c_rt_lib0clear(&___nl__9);
#line 679
c_rt_lib0move(&___nl__5, generator_c_priv0get_fun_lib(___nl__6, ___nl__7));
#line 679
c_rt_lib0clear(&___nl__7);
#line 679
c_rt_lib0clear(&___nl__6);
#line 680
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(197)));
#line 680
c_rt_lib0move(&___nl__6, generator_c_priv0get_assign(___ref___0, ___nl__7, ___nl__5));
#line 680
c_rt_lib0clear(&___nl__7);
#line 680
c_rt_lib0delete(generator_c_priv0print(___ref___0, ___nl__6));
#line 680
c_rt_lib0clear(&___nl__6);
#line 680
c_rt_lib0clear(&___nl__5);
#line 680
c_rt_lib0clear(&___nl__4);
#line 681
goto label_664;
#line 681
label_424:
#line 681
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(213)));
#line 682
c_rt_lib0move(&___nl__6,___get_global_const(449));
#line 683
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(43)));
#line 683
c_rt_lib0move(&___nl__8, generator_c_priv0get_reg_ref(___ref___0, ___nl__9));
#line 683
c_rt_lib0clear(&___nl__9);
#line 684
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(232)));
#line 684
c_rt_lib0move(&___nl__9, generator_c_priv0get_reg(___ref___0, ___nl__10));
#line 684
c_rt_lib0clear(&___nl__10);
#line 685
c_rt_lib0move(&___nl__11, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(198)));
#line 685
c_rt_lib0move(&___nl__10, generator_c_priv0get_reg(___ref___0, ___nl__11));
#line 685
c_rt_lib0clear(&___nl__11);
#line 685
c_rt_lib0move(&___nl__7, c_rt_lib0array_mk(3, ___nl__8, ___nl__9, ___nl__10));
#line 685
c_rt_lib0clear(&___nl__8);
#line 685
c_rt_lib0clear(&___nl__9);
#line 685
c_rt_lib0clear(&___nl__10);
#line 685
c_rt_lib0move(&___nl__5, generator_c_priv0get_fun_lib(___nl__6, ___nl__7));
#line 685
c_rt_lib0clear(&___nl__7);
#line 685
c_rt_lib0clear(&___nl__6);
#line 685
c_rt_lib0delete(generator_c_priv0print(___ref___0, ___nl__5));
#line 685
c_rt_lib0clear(&___nl__5);
#line 685
c_rt_lib0clear(&___nl__4);
#line 687
goto label_664;
#line 687
label_447:
#line 687
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(214)));
#line 688
c_rt_lib0move(&___nl__6,___get_global_const(450));
#line 688
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(43)));
#line 688
c_rt_lib0move(&___nl__8, generator_c_priv0get_reg(___ref___0, ___nl__9));
#line 688
c_rt_lib0clear(&___nl__9);
#line 688
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(329)));
#line 688
c_rt_lib0move(&___nl__9, generator_c_priv0get_const_sim(___ref___0, ___nl__10));
#line 688
c_rt_lib0clear(&___nl__10);
#line 688
c_rt_lib0move(&___nl__7, c_rt_lib0array_mk(2, ___nl__8, ___nl__9));
#line 688
c_rt_lib0clear(&___nl__8);
#line 688
c_rt_lib0clear(&___nl__9);
#line 688
c_rt_lib0move(&___nl__5, generator_c_priv0get_fun_lib(___nl__6, ___nl__7));
#line 688
c_rt_lib0clear(&___nl__7);
#line 688
c_rt_lib0clear(&___nl__6);
#line 689
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(197)));
#line 689
c_rt_lib0move(&___nl__6, generator_c_priv0get_assign(___ref___0, ___nl__7, ___nl__5));
#line 689
c_rt_lib0clear(&___nl__7);
#line 689
c_rt_lib0delete(generator_c_priv0print(___ref___0, ___nl__6));
#line 689
c_rt_lib0clear(&___nl__6);
#line 689
c_rt_lib0clear(&___nl__5);
#line 689
c_rt_lib0clear(&___nl__4);
#line 690
goto label_664;
#line 690
label_470:
#line 690
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(215)));
#line 691
c_rt_lib0move(&___nl__6,___get_global_const(451));
#line 692
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(43)));
#line 692
c_rt_lib0move(&___nl__8, generator_c_priv0get_reg_ref(___ref___0, ___nl__9));
#line 692
c_rt_lib0clear(&___nl__9);
#line 693
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(329)));
#line 693
c_rt_lib0move(&___nl__9, generator_c_priv0get_const_sim(___ref___0, ___nl__10));
#line 693
c_rt_lib0clear(&___nl__10);
#line 694
c_rt_lib0move(&___nl__11, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(198)));
#line 694
c_rt_lib0move(&___nl__10, generator_c_priv0get_reg(___ref___0, ___nl__11));
#line 694
c_rt_lib0clear(&___nl__11);
#line 694
c_rt_lib0move(&___nl__7, c_rt_lib0array_mk(3, ___nl__8, ___nl__9, ___nl__10));
#line 694
c_rt_lib0clear(&___nl__8);
#line 694
c_rt_lib0clear(&___nl__9);
#line 694
c_rt_lib0clear(&___nl__10);
#line 694
c_rt_lib0move(&___nl__5, generator_c_priv0get_fun_lib(___nl__6, ___nl__7));
#line 694
c_rt_lib0clear(&___nl__7);
#line 694
c_rt_lib0clear(&___nl__6);
#line 694
c_rt_lib0delete(generator_c_priv0print(___ref___0, ___nl__5));
#line 694
c_rt_lib0clear(&___nl__5);
#line 694
c_rt_lib0clear(&___nl__4);
#line 696
goto label_664;
#line 696
label_493:
#line 696
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(216)));
#line 698
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(43)));
#line 698
c_rt_lib0move(&___nl__6, c_rt_lib0priv_is(___nl__6, ___get_global_const(288)));
#line 698
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__6));
#line 698
if(c_rt_lib0check_true_native(___nl__7)){ goto label_503;}
#line 698
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(93)));
#line 698
c_rt_lib0move(&___nl__8,___get_global_const(7));
#line 698
c_rt_lib0move(&___nl__6, c_rt_lib0eq(___nl__6, ___nl__8));
#line 698
c_rt_lib0clear(&___nl__8);
#line 698
label_503:
#line 698
c_rt_lib0clear(&___nl__7);
#line 698
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 698
if(c_rt_lib0check_true_native(___nl__6)){ goto label_515;}
#line 699
c_rt_lib0move(&___nl__8,___get_global_const(452));
#line 699
c_rt_lib0move(&___nl__9, c_rt_lib0array_mk(0));
#line 699
c_rt_lib0move(&___nl__7, generator_c_priv0get_fun_lib(___nl__8, ___nl__9));
#line 699
c_rt_lib0clear(&___nl__9);
#line 699
c_rt_lib0clear(&___nl__8);
#line 699
c_rt_lib0copy(&___nl__5, ___nl__7);
#line 699
c_rt_lib0clear(&___nl__7);
#line 700
goto label_579;
#line 700
label_515:
#line 700
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(43)));
#line 700
c_rt_lib0move(&___nl__6, c_rt_lib0priv_is(___nl__6, ___get_global_const(288)));
#line 700
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__6));
#line 700
if(c_rt_lib0check_true_native(___nl__7)){ goto label_524;}
#line 700
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(93)));
#line 700
c_rt_lib0move(&___nl__8,___get_global_const(8));
#line 700
c_rt_lib0move(&___nl__6, c_rt_lib0eq(___nl__6, ___nl__8));
#line 700
c_rt_lib0clear(&___nl__8);
#line 700
label_524:
#line 700
c_rt_lib0clear(&___nl__7);
#line 700
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 700
if(c_rt_lib0check_true_native(___nl__6)){ goto label_536;}
#line 701
c_rt_lib0move(&___nl__8,___get_global_const(453));
#line 701
c_rt_lib0move(&___nl__9, c_rt_lib0array_mk(0));
#line 701
c_rt_lib0move(&___nl__7, generator_c_priv0get_fun_lib(___nl__8, ___nl__9));
#line 701
c_rt_lib0clear(&___nl__9);
#line 701
c_rt_lib0clear(&___nl__8);
#line 701
c_rt_lib0copy(&___nl__5, ___nl__7);
#line 701
c_rt_lib0clear(&___nl__7);
#line 702
goto label_579;
#line 702
label_536:
#line 703
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(43)));
#line 703
c_rt_lib0move(&___nl__8, c_rt_lib0priv_is(___nl__7, ___get_global_const(233)));
#line 703
if(c_rt_lib0check_true_native(___nl__8)){ goto label_545;}
#line 705
c_rt_lib0move(&___nl__8, c_rt_lib0priv_is(___nl__7, ___get_global_const(288)));
#line 705
if(c_rt_lib0check_true_native(___nl__8)){ goto label_562;}
#line 705
c_rt_lib0move(&___nl__8,___get_global_const(91));
#line 705
c_rt_lib0move(&___nl__8, c_rt_lib0array_mk(2, ___nl__8, ___nl__7));
#line 705
nl_die_arg(___nl__8);
#line 703
label_545:
#line 703
c_rt_lib0move(&___nl__9, c_rt_lib0priv_as(___nl__7, ___get_global_const(233)));
#line 704
c_rt_lib0move(&___nl__11,___get_global_const(454));
#line 704
c_rt_lib0move(&___nl__14, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(93)));
#line 704
c_rt_lib0move(&___nl__13, generator_c_priv0get_const_sim(___ref___0, ___nl__14));
#line 704
c_rt_lib0clear(&___nl__14);
#line 704
c_rt_lib0move(&___nl__14, generator_c_priv0get_reg(___ref___0, ___nl__9));
#line 704
c_rt_lib0move(&___nl__12, c_rt_lib0array_mk(2, ___nl__13, ___nl__14));
#line 704
c_rt_lib0clear(&___nl__13);
#line 704
c_rt_lib0clear(&___nl__14);
#line 704
c_rt_lib0move(&___nl__10, generator_c_priv0get_fun_lib(___nl__11, ___nl__12));
#line 704
c_rt_lib0clear(&___nl__12);
#line 704
c_rt_lib0clear(&___nl__11);
#line 704
c_rt_lib0copy(&___nl__5, ___nl__10);
#line 704
c_rt_lib0clear(&___nl__10);
#line 704
c_rt_lib0clear(&___nl__9);
#line 705
goto label_575;
#line 705
label_562:
#line 706
c_rt_lib0move(&___nl__10,___get_global_const(435));
#line 706
c_rt_lib0move(&___nl__13, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(93)));
#line 706
c_rt_lib0move(&___nl__12, generator_c_priv0get_const_sim(___ref___0, ___nl__13));
#line 706
c_rt_lib0clear(&___nl__13);
#line 706
c_rt_lib0move(&___nl__11, c_rt_lib0array_mk(1, ___nl__12));
#line 706
c_rt_lib0clear(&___nl__12);
#line 706
c_rt_lib0move(&___nl__9, generator_c_priv0get_fun_lib(___nl__10, ___nl__11));
#line 706
c_rt_lib0clear(&___nl__11);
#line 706
c_rt_lib0clear(&___nl__10);
#line 706
c_rt_lib0copy(&___nl__5, ___nl__9);
#line 706
c_rt_lib0clear(&___nl__9);
#line 707
goto label_575;
#line 707
label_575:
#line 707
c_rt_lib0clear(&___nl__7);
#line 707
c_rt_lib0clear(&___nl__8);
#line 708
goto label_579;
#line 708
label_579:
#line 708
c_rt_lib0clear(&___nl__6);
#line 709
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(197)));
#line 709
c_rt_lib0move(&___nl__6, generator_c_priv0get_assign(___ref___0, ___nl__7, ___nl__5));
#line 709
c_rt_lib0clear(&___nl__7);
#line 709
c_rt_lib0delete(generator_c_priv0print(___ref___0, ___nl__6));
#line 709
c_rt_lib0clear(&___nl__6);
#line 709
c_rt_lib0clear(&___nl__5);
#line 709
c_rt_lib0clear(&___nl__4);
#line 710
goto label_664;
#line 710
label_589:
#line 710
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(218)));
#line 711
c_rt_lib0move(&___nl__5,___get_global_const(455));
#line 711
c_rt_lib0move(&___nl__5, c_rt_lib0concat_add(___nl__5, ___nl__4));
#line 711
c_rt_lib0move(&___nl__6,___get_global_const(417));
#line 711
c_rt_lib0move(&___nl__5, c_rt_lib0concat_add(___nl__5, ___nl__6));
#line 711
c_rt_lib0clear(&___nl__6);
#line 711
c_rt_lib0move(&___nl__6, string0lf());
#line 711
c_rt_lib0move(&___nl__5, c_rt_lib0concat_add(___nl__5, ___nl__6));
#line 711
c_rt_lib0clear(&___nl__6);
#line 711
c_rt_lib0delete(generator_c_priv0print(___ref___0, ___nl__5));
#line 711
c_rt_lib0clear(&___nl__5);
#line 712
c_rt_lib0clear(&___nl__1);
#line 712
c_rt_lib0clear(&___nl__2);
#line 712
c_rt_lib0clear(&___nl__3);
#line 712
c_rt_lib0clear(&___nl__4);
#line 712
return NULL;
#line 712
c_rt_lib0clear(&___nl__4);
#line 713
goto label_664;
#line 713
label_608:
#line 713
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(219)));
#line 714
c_rt_lib0move(&___nl__5,___get_global_const(456));
#line 714
c_rt_lib0delete(generator_c_priv0print(___ref___0, ___nl__5));
#line 714
c_rt_lib0clear(&___nl__5);
#line 715
c_rt_lib0move(&___nl__6,___get_global_const(457));
#line 715
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(43)));
#line 715
c_rt_lib0move(&___nl__8, generator_c_priv0get_reg(___ref___0, ___nl__9));
#line 715
c_rt_lib0clear(&___nl__9);
#line 715
c_rt_lib0move(&___nl__7, c_rt_lib0array_mk(1, ___nl__8));
#line 715
c_rt_lib0clear(&___nl__8);
#line 715
c_rt_lib0move(&___nl__5, generator_c_priv0get_fun_lib(___nl__6, ___nl__7));
#line 715
c_rt_lib0clear(&___nl__7);
#line 715
c_rt_lib0clear(&___nl__6);
#line 715
c_rt_lib0delete(generator_c_priv0print(___ref___0, ___nl__5));
#line 715
c_rt_lib0clear(&___nl__5);
#line 716
c_rt_lib0move(&___nl__5,___get_global_const(458));
#line 716
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(197)));
#line 716
c_rt_lib0move(&___nl__5, c_rt_lib0concat_add(___nl__5, ___nl__6));
#line 716
c_rt_lib0clear(&___nl__6);
#line 716
c_rt_lib0move(&___nl__6,___get_global_const(399));
#line 716
c_rt_lib0move(&___nl__5, c_rt_lib0concat_add(___nl__5, ___nl__6));
#line 716
c_rt_lib0clear(&___nl__6);
#line 716
c_rt_lib0move(&___nl__6, string0lf());
#line 716
c_rt_lib0move(&___nl__5, c_rt_lib0concat_add(___nl__5, ___nl__6));
#line 716
c_rt_lib0clear(&___nl__6);
#line 716
c_rt_lib0delete(generator_c_priv0print(___ref___0, ___nl__5));
#line 716
c_rt_lib0clear(&___nl__5);
#line 717
c_rt_lib0clear(&___nl__1);
#line 717
c_rt_lib0clear(&___nl__2);
#line 717
c_rt_lib0clear(&___nl__3);
#line 717
c_rt_lib0clear(&___nl__4);
#line 717
return NULL;
#line 717
c_rt_lib0clear(&___nl__4);
#line 718
goto label_664;
#line 718
label_643:
#line 718
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(220)));
#line 719
c_rt_lib0move(&___nl__5,___get_global_const(459));
#line 719
c_rt_lib0move(&___nl__5, c_rt_lib0concat_add(___nl__5, ___nl__4));
#line 719
c_rt_lib0delete(generator_c_priv0print(___ref___0, ___nl__5));
#line 719
c_rt_lib0clear(&___nl__5);
#line 719
c_rt_lib0clear(&___nl__4);
#line 720
goto label_664;
#line 720
label_651:
#line 720
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(221)));
#line 721
c_rt_lib0move(&___nl__6,___get_global_const(221));
#line 721
c_rt_lib0move(&___nl__8, generator_c_priv0get_reg_ref(___ref___0, ___nl__4));
#line 721
c_rt_lib0move(&___nl__7, c_rt_lib0array_mk(1, ___nl__8));
#line 721
c_rt_lib0clear(&___nl__8);
#line 721
c_rt_lib0move(&___nl__5, generator_c_priv0get_fun_lib(___nl__6, ___nl__7));
#line 721
c_rt_lib0clear(&___nl__7);
#line 721
c_rt_lib0clear(&___nl__6);
#line 721
c_rt_lib0delete(generator_c_priv0print(___ref___0, ___nl__5));
#line 721
c_rt_lib0clear(&___nl__5);
#line 721
c_rt_lib0clear(&___nl__4);
#line 722
goto label_664;
#line 722
label_664:
#line 722
c_rt_lib0clear(&___nl__2);
#line 722
c_rt_lib0clear(&___nl__3);
#line 723
c_rt_lib0move(&___nl__2,___get_global_const(360));
#line 723
c_rt_lib0move(&___nl__3, string0lf());
#line 723
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__3));
#line 723
c_rt_lib0clear(&___nl__3);
#line 723
c_rt_lib0delete(generator_c_priv0print(___ref___0, ___nl__2));
#line 723
c_rt_lib0clear(&___nl__2);
#line 723
c_rt_lib0clear(&___nl__1);
#line 723
return NULL;
}

ImmT generator_c_priv0get_assign(ImmT * ___ref___0,ImmT ___nl__1,ImmT ___nl__2) {
c_rt_lib0arg_val(___nl__1);
c_rt_lib0arg_val(___nl__2);
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
#line 727
c_rt_lib0move(&___nl__3,___get_global_const(2));
#line 727
c_rt_lib0move(&___nl__3, c_rt_lib0eq(___nl__1, ___nl__3));
#line 727
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 727
if(c_rt_lib0check_true_native(___nl__3)){ goto label_15;}
#line 728
c_rt_lib0move(&___nl__5,___get_global_const(152));
#line 728
c_rt_lib0move(&___nl__6, c_rt_lib0array_mk(1, ___nl__2));
#line 728
c_rt_lib0move(&___nl__4, generator_c_priv0get_fun_lib(___nl__5, ___nl__6));
#line 728
c_rt_lib0clear(&___nl__6);
#line 728
c_rt_lib0clear(&___nl__5);
#line 728
c_rt_lib0clear(&___nl__1);
#line 728
c_rt_lib0clear(&___nl__2);
#line 728
c_rt_lib0clear(&___nl__3);
#line 728
return ___nl__4;
#line 728
c_rt_lib0clear(&___nl__4);
#line 729
goto label_29;
#line 729
label_15:
#line 730
c_rt_lib0move(&___nl__5,___get_global_const(211));
#line 730
c_rt_lib0move(&___nl__7, generator_c_priv0get_reg_ref(___ref___0, ___nl__1));
#line 730
c_rt_lib0move(&___nl__6, c_rt_lib0array_mk(2, ___nl__7, ___nl__2));
#line 730
c_rt_lib0clear(&___nl__7);
#line 730
c_rt_lib0move(&___nl__4, generator_c_priv0get_fun_lib(___nl__5, ___nl__6));
#line 730
c_rt_lib0clear(&___nl__6);
#line 730
c_rt_lib0clear(&___nl__5);
#line 730
c_rt_lib0clear(&___nl__1);
#line 730
c_rt_lib0clear(&___nl__2);
#line 730
c_rt_lib0clear(&___nl__3);
#line 730
return ___nl__4;
#line 730
c_rt_lib0clear(&___nl__4);
#line 731
goto label_29;
#line 731
label_29:
#line 731
c_rt_lib0clear(&___nl__3);
#line 731
c_rt_lib0clear(&___nl__1);
#line 731
c_rt_lib0clear(&___nl__2);
#line 731
return NULL;
}

ImmT generator_c_priv0generate_call(ImmT * ___ref___0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__1);
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
ImmT ___nl__9 = NULL;
ImmT ___nl__10 = NULL;
#line 735
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(222)));
#line 735
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(224)));
#line 735
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(343)));
#line 735
c_rt_lib0move(&___nl__2, generator_c_priv0get_fun_name(___nl__3, ___nl__4, ___nl__5));
#line 735
c_rt_lib0clear(&___nl__5);
#line 735
c_rt_lib0clear(&___nl__4);
#line 735
c_rt_lib0clear(&___nl__3);
#line 735
c_rt_lib0move(&___nl__3,___get_global_const(373));
#line 735
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__3));
#line 735
c_rt_lib0clear(&___nl__3);
#line 736
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(89)));
#line 736
c_rt_lib0move(&___nl__3, array0len(___nl__4));
#line 736
c_rt_lib0clear(&___nl__4);
#line 736
c_rt_lib0move(&___nl__4,___get_global_const(0));
#line 736
c_rt_lib0move(&___nl__5,___get_global_const(1));
#line 736
label_15:
#line 736
c_rt_lib0move(&___nl__6, c_rt_lib0ge(___nl__4, ___nl__3));
#line 736
if(c_rt_lib0check_true_native(___nl__6)){ goto label_57;}
#line 737
c_rt_lib0move(&___nl__7,___get_global_const(0));
#line 737
c_rt_lib0move(&___nl__7, c_rt_lib0num_eq(___nl__7, ___nl__4));
#line 737
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 737
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 737
if(c_rt_lib0check_true_native(___nl__7)){ goto label_27;}
#line 737
c_rt_lib0move(&___nl__8,___get_global_const(271));
#line 737
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__8));
#line 737
c_rt_lib0clear(&___nl__8);
#line 737
goto label_27;
#line 737
label_27:
#line 737
c_rt_lib0clear(&___nl__7);
#line 738
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(89)));
#line 738
c_rt_lib0move(&___nl__7, c_rt_lib0array_get(___nl__7, ___nl__4));
#line 738
c_rt_lib0move(&___nl__8, c_rt_lib0priv_is(___nl__7, ___get_global_const(198)));
#line 738
if(c_rt_lib0check_true_native(___nl__8)){ goto label_38;}
#line 740
c_rt_lib0move(&___nl__8, c_rt_lib0priv_is(___nl__7, ___get_global_const(5)));
#line 740
if(c_rt_lib0check_true_native(___nl__8)){ goto label_45;}
#line 740
c_rt_lib0move(&___nl__8,___get_global_const(91));
#line 740
c_rt_lib0move(&___nl__8, c_rt_lib0array_mk(2, ___nl__8, ___nl__7));
#line 740
nl_die_arg(___nl__8);
#line 738
label_38:
#line 738
c_rt_lib0move(&___nl__9, c_rt_lib0priv_as(___nl__7, ___get_global_const(198)));
#line 739
c_rt_lib0move(&___nl__10, generator_c_priv0get_reg(___ref___0, ___nl__9));
#line 739
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__10));
#line 739
c_rt_lib0clear(&___nl__10);
#line 739
c_rt_lib0clear(&___nl__9);
#line 740
goto label_52;
#line 740
label_45:
#line 740
c_rt_lib0move(&___nl__9, c_rt_lib0priv_as(___nl__7, ___get_global_const(5)));
#line 741
c_rt_lib0move(&___nl__10, generator_c_priv0get_reg_ref(___ref___0, ___nl__9));
#line 741
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__10));
#line 741
c_rt_lib0clear(&___nl__10);
#line 741
c_rt_lib0clear(&___nl__9);
#line 742
goto label_52;
#line 742
label_52:
#line 742
c_rt_lib0clear(&___nl__7);
#line 742
c_rt_lib0clear(&___nl__8);
#line 743
c_rt_lib0move(&___nl__4, c_rt_lib0add_mod(___nl__4, ___nl__5));
#line 743
goto label_15;
#line 743
label_57:
#line 743
c_rt_lib0clear(&___nl__3);
#line 743
c_rt_lib0clear(&___nl__4);
#line 743
c_rt_lib0clear(&___nl__5);
#line 743
c_rt_lib0clear(&___nl__6);
#line 744
c_rt_lib0move(&___nl__3,___get_global_const(260));
#line 744
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__3));
#line 744
c_rt_lib0clear(&___nl__3);
#line 745
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(197)));
#line 745
c_rt_lib0move(&___nl__3, generator_c_priv0get_assign(___ref___0, ___nl__4, ___nl__2));
#line 745
c_rt_lib0clear(&___nl__4);
#line 745
c_rt_lib0delete(generator_c_priv0print(___ref___0, ___nl__3));
#line 745
c_rt_lib0clear(&___nl__3);
#line 745
c_rt_lib0clear(&___nl__2);
#line 745
c_rt_lib0clear(&___nl__1);
#line 745
return NULL;
}

ImmT generator_c_priv0create_sim(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
#line 749
c_rt_lib0move(&___nl__1, string_utils0is_integer(___nl__0));
#line 749
c_rt_lib0move(&___nl__1, c_rt_lib0not(___nl__1));
#line 749
if(c_rt_lib0check_true_native(___nl__1)){ goto label_18;}
#line 750
c_rt_lib0move(&___nl__3,___get_global_const(460));
#line 750
c_rt_lib0move(&___nl__2, generator_c_priv0get_lib_fun(___nl__3));
#line 750
c_rt_lib0clear(&___nl__3);
#line 750
c_rt_lib0move(&___nl__3,___get_global_const(373));
#line 750
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__3));
#line 750
c_rt_lib0clear(&___nl__3);
#line 750
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__0));
#line 750
c_rt_lib0move(&___nl__3,___get_global_const(260));
#line 750
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__3));
#line 750
c_rt_lib0clear(&___nl__3);
#line 750
c_rt_lib0clear(&___nl__0);
#line 750
c_rt_lib0clear(&___nl__1);
#line 750
return ___nl__2;
#line 750
c_rt_lib0clear(&___nl__2);
#line 751
goto label_99;
#line 751
label_18:
#line 751
c_rt_lib0move(&___nl__1, string_utils0is_float(___nl__0));
#line 751
c_rt_lib0move(&___nl__1, c_rt_lib0not(___nl__1));
#line 751
if(c_rt_lib0check_true_native(___nl__1)){ goto label_37;}
#line 752
c_rt_lib0move(&___nl__3,___get_global_const(461));
#line 752
c_rt_lib0move(&___nl__2, generator_c_priv0get_lib_fun(___nl__3));
#line 752
c_rt_lib0clear(&___nl__3);
#line 752
c_rt_lib0move(&___nl__3,___get_global_const(373));
#line 752
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__3));
#line 752
c_rt_lib0clear(&___nl__3);
#line 752
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__0));
#line 752
c_rt_lib0move(&___nl__3,___get_global_const(260));
#line 752
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__3));
#line 752
c_rt_lib0clear(&___nl__3);
#line 752
c_rt_lib0clear(&___nl__0);
#line 752
c_rt_lib0clear(&___nl__1);
#line 752
return ___nl__2;
#line 752
c_rt_lib0clear(&___nl__2);
#line 753
goto label_99;
#line 753
label_37:
#line 754
c_rt_lib0move(&___nl__2,___get_global_const(2));
#line 754
c_rt_lib0move(&___nl__2, c_rt_lib0concat_new(___nl__0, ___nl__2));
#line 755
c_rt_lib0move(&___nl__4,___get_global_const(96));
#line 755
c_rt_lib0move(&___nl__5,___get_global_const(264));
#line 755
c_rt_lib0move(&___nl__3, string0replace(___nl__2, ___nl__4, ___nl__5));
#line 755
c_rt_lib0clear(&___nl__5);
#line 755
c_rt_lib0clear(&___nl__4);
#line 755
c_rt_lib0copy(&___nl__2, ___nl__3);
#line 755
c_rt_lib0clear(&___nl__3);
#line 756
c_rt_lib0move(&___nl__4, string0lf());
#line 756
c_rt_lib0move(&___nl__5,___get_global_const(272));
#line 756
c_rt_lib0move(&___nl__3, string0replace(___nl__2, ___nl__4, ___nl__5));
#line 756
c_rt_lib0clear(&___nl__5);
#line 756
c_rt_lib0clear(&___nl__4);
#line 756
c_rt_lib0copy(&___nl__2, ___nl__3);
#line 756
c_rt_lib0clear(&___nl__3);
#line 757
c_rt_lib0move(&___nl__4, string0r());
#line 757
c_rt_lib0move(&___nl__5,___get_global_const(462));
#line 757
c_rt_lib0move(&___nl__3, string0replace(___nl__2, ___nl__4, ___nl__5));
#line 757
c_rt_lib0clear(&___nl__5);
#line 757
c_rt_lib0clear(&___nl__4);
#line 757
c_rt_lib0copy(&___nl__2, ___nl__3);
#line 757
c_rt_lib0clear(&___nl__3);
#line 758
c_rt_lib0move(&___nl__4, string0tab());
#line 758
c_rt_lib0move(&___nl__5,___get_global_const(463));
#line 758
c_rt_lib0move(&___nl__3, string0replace(___nl__2, ___nl__4, ___nl__5));
#line 758
c_rt_lib0clear(&___nl__5);
#line 758
c_rt_lib0clear(&___nl__4);
#line 758
c_rt_lib0copy(&___nl__2, ___nl__3);
#line 758
c_rt_lib0clear(&___nl__3);
#line 759
c_rt_lib0move(&___nl__4,___get_global_const(235));
#line 759
c_rt_lib0move(&___nl__5,___get_global_const(269));
#line 759
c_rt_lib0move(&___nl__3, string0replace(___nl__2, ___nl__4, ___nl__5));
#line 759
c_rt_lib0clear(&___nl__5);
#line 759
c_rt_lib0clear(&___nl__4);
#line 759
c_rt_lib0copy(&___nl__2, ___nl__3);
#line 759
c_rt_lib0clear(&___nl__3);
#line 760
c_rt_lib0move(&___nl__4,___get_global_const(464));
#line 760
c_rt_lib0move(&___nl__5,___get_global_const(465));
#line 760
c_rt_lib0move(&___nl__3, string0replace(___nl__2, ___nl__4, ___nl__5));
#line 760
c_rt_lib0clear(&___nl__5);
#line 760
c_rt_lib0clear(&___nl__4);
#line 760
c_rt_lib0copy(&___nl__2, ___nl__3);
#line 760
c_rt_lib0clear(&___nl__3);
#line 761
c_rt_lib0move(&___nl__4,___get_global_const(466));
#line 761
c_rt_lib0move(&___nl__3, generator_c_priv0get_lib_fun(___nl__4));
#line 761
c_rt_lib0clear(&___nl__4);
#line 761
c_rt_lib0move(&___nl__4,___get_global_const(467));
#line 761
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 761
c_rt_lib0clear(&___nl__4);
#line 761
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__2));
#line 761
c_rt_lib0move(&___nl__4,___get_global_const(468));
#line 761
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 761
c_rt_lib0clear(&___nl__4);
#line 761
c_rt_lib0clear(&___nl__0);
#line 761
c_rt_lib0clear(&___nl__1);
#line 761
c_rt_lib0clear(&___nl__2);
#line 761
return ___nl__3;
#line 761
c_rt_lib0clear(&___nl__3);
#line 761
c_rt_lib0clear(&___nl__2);
#line 762
goto label_99;
#line 762
label_99:
#line 762
c_rt_lib0clear(&___nl__1);
#line 762
c_rt_lib0clear(&___nl__0);
#line 762
return NULL;
}

ImmT generator_c_priv0create_sim_to_memory(ImmT ___nl__0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
#line 766
c_rt_lib0move(&___nl__2, string_utils0is_integer(___nl__0));
#line 766
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 766
if(c_rt_lib0check_true_native(___nl__2)){ goto label_23;}
#line 767
c_rt_lib0move(&___nl__4,___get_global_const(469));
#line 767
c_rt_lib0move(&___nl__3, generator_c_priv0get_lib_fun(___nl__4));
#line 767
c_rt_lib0clear(&___nl__4);
#line 767
c_rt_lib0move(&___nl__4,___get_global_const(373));
#line 767
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 767
c_rt_lib0clear(&___nl__4);
#line 767
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__0));
#line 767
c_rt_lib0move(&___nl__4,___get_global_const(256));
#line 767
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 767
c_rt_lib0clear(&___nl__4);
#line 767
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__1));
#line 767
c_rt_lib0move(&___nl__4,___get_global_const(260));
#line 767
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 767
c_rt_lib0clear(&___nl__4);
#line 767
c_rt_lib0clear(&___nl__0);
#line 767
c_rt_lib0clear(&___nl__1);
#line 767
c_rt_lib0clear(&___nl__2);
#line 767
return ___nl__3;
#line 767
c_rt_lib0clear(&___nl__3);
#line 768
goto label_123;
#line 768
label_23:
#line 768
c_rt_lib0move(&___nl__2, string_utils0is_float(___nl__0));
#line 768
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 768
if(c_rt_lib0check_true_native(___nl__2)){ goto label_47;}
#line 769
c_rt_lib0move(&___nl__4,___get_global_const(470));
#line 769
c_rt_lib0move(&___nl__3, generator_c_priv0get_lib_fun(___nl__4));
#line 769
c_rt_lib0clear(&___nl__4);
#line 769
c_rt_lib0move(&___nl__4,___get_global_const(373));
#line 769
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 769
c_rt_lib0clear(&___nl__4);
#line 769
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__0));
#line 769
c_rt_lib0move(&___nl__4,___get_global_const(256));
#line 769
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 769
c_rt_lib0clear(&___nl__4);
#line 769
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__1));
#line 769
c_rt_lib0move(&___nl__4,___get_global_const(260));
#line 769
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 769
c_rt_lib0clear(&___nl__4);
#line 769
c_rt_lib0clear(&___nl__0);
#line 769
c_rt_lib0clear(&___nl__1);
#line 769
c_rt_lib0clear(&___nl__2);
#line 769
return ___nl__3;
#line 769
c_rt_lib0clear(&___nl__3);
#line 770
goto label_123;
#line 770
label_47:
#line 771
c_rt_lib0move(&___nl__3,___get_global_const(2));
#line 771
c_rt_lib0move(&___nl__3, c_rt_lib0concat_new(___nl__0, ___nl__3));
#line 772
c_rt_lib0move(&___nl__5,___get_global_const(96));
#line 772
c_rt_lib0move(&___nl__6,___get_global_const(264));
#line 772
c_rt_lib0move(&___nl__4, string0replace(___nl__3, ___nl__5, ___nl__6));
#line 772
c_rt_lib0clear(&___nl__6);
#line 772
c_rt_lib0clear(&___nl__5);
#line 772
c_rt_lib0copy(&___nl__3, ___nl__4);
#line 772
c_rt_lib0clear(&___nl__4);
#line 773
c_rt_lib0move(&___nl__5, string0lf());
#line 773
c_rt_lib0move(&___nl__6,___get_global_const(272));
#line 773
c_rt_lib0move(&___nl__4, string0replace(___nl__3, ___nl__5, ___nl__6));
#line 773
c_rt_lib0clear(&___nl__6);
#line 773
c_rt_lib0clear(&___nl__5);
#line 773
c_rt_lib0copy(&___nl__3, ___nl__4);
#line 773
c_rt_lib0clear(&___nl__4);
#line 774
c_rt_lib0move(&___nl__5, string0r());
#line 774
c_rt_lib0move(&___nl__6,___get_global_const(462));
#line 774
c_rt_lib0move(&___nl__4, string0replace(___nl__3, ___nl__5, ___nl__6));
#line 774
c_rt_lib0clear(&___nl__6);
#line 774
c_rt_lib0clear(&___nl__5);
#line 774
c_rt_lib0copy(&___nl__3, ___nl__4);
#line 774
c_rt_lib0clear(&___nl__4);
#line 775
c_rt_lib0move(&___nl__5, string0tab());
#line 775
c_rt_lib0move(&___nl__6,___get_global_const(463));
#line 775
c_rt_lib0move(&___nl__4, string0replace(___nl__3, ___nl__5, ___nl__6));
#line 775
c_rt_lib0clear(&___nl__6);
#line 775
c_rt_lib0clear(&___nl__5);
#line 775
c_rt_lib0copy(&___nl__3, ___nl__4);
#line 775
c_rt_lib0clear(&___nl__4);
#line 776
c_rt_lib0move(&___nl__5,___get_global_const(235));
#line 776
c_rt_lib0move(&___nl__6,___get_global_const(269));
#line 776
c_rt_lib0move(&___nl__4, string0replace(___nl__3, ___nl__5, ___nl__6));
#line 776
c_rt_lib0clear(&___nl__6);
#line 776
c_rt_lib0clear(&___nl__5);
#line 776
c_rt_lib0copy(&___nl__3, ___nl__4);
#line 776
c_rt_lib0clear(&___nl__4);
#line 777
c_rt_lib0move(&___nl__5,___get_global_const(464));
#line 777
c_rt_lib0move(&___nl__6,___get_global_const(465));
#line 777
c_rt_lib0move(&___nl__4, string0replace(___nl__3, ___nl__5, ___nl__6));
#line 777
c_rt_lib0clear(&___nl__6);
#line 777
c_rt_lib0clear(&___nl__5);
#line 777
c_rt_lib0copy(&___nl__3, ___nl__4);
#line 777
c_rt_lib0clear(&___nl__4);
#line 778
c_rt_lib0move(&___nl__6,___get_global_const(0));
#line 778
c_rt_lib0move(&___nl__5, string0chr(___nl__6));
#line 778
c_rt_lib0clear(&___nl__6);
#line 778
c_rt_lib0move(&___nl__6,___get_global_const(471));
#line 778
c_rt_lib0move(&___nl__4, string0replace(___nl__3, ___nl__5, ___nl__6));
#line 778
c_rt_lib0clear(&___nl__6);
#line 778
c_rt_lib0clear(&___nl__5);
#line 778
c_rt_lib0copy(&___nl__3, ___nl__4);
#line 778
c_rt_lib0clear(&___nl__4);
#line 779
c_rt_lib0move(&___nl__5,___get_global_const(472));
#line 779
c_rt_lib0move(&___nl__4, generator_c_priv0get_lib_fun(___nl__5));
#line 779
c_rt_lib0clear(&___nl__5);
#line 779
c_rt_lib0move(&___nl__5,___get_global_const(467));
#line 779
c_rt_lib0move(&___nl__4, c_rt_lib0concat_add(___nl__4, ___nl__5));
#line 779
c_rt_lib0clear(&___nl__5);
#line 779
c_rt_lib0move(&___nl__4, c_rt_lib0concat_add(___nl__4, ___nl__3));
#line 779
c_rt_lib0move(&___nl__5,___get_global_const(473));
#line 779
c_rt_lib0move(&___nl__4, c_rt_lib0concat_add(___nl__4, ___nl__5));
#line 779
c_rt_lib0clear(&___nl__5);
#line 779
c_rt_lib0move(&___nl__4, c_rt_lib0concat_add(___nl__4, ___nl__1));
#line 779
c_rt_lib0move(&___nl__5,___get_global_const(260));
#line 779
c_rt_lib0move(&___nl__4, c_rt_lib0concat_add(___nl__4, ___nl__5));
#line 779
c_rt_lib0clear(&___nl__5);
#line 779
c_rt_lib0clear(&___nl__0);
#line 779
c_rt_lib0clear(&___nl__1);
#line 779
c_rt_lib0clear(&___nl__2);
#line 779
c_rt_lib0clear(&___nl__3);
#line 779
return ___nl__4;
#line 779
c_rt_lib0clear(&___nl__4);
#line 779
c_rt_lib0clear(&___nl__3);
#line 780
goto label_123;
#line 780
label_123:
#line 780
c_rt_lib0clear(&___nl__2);
#line 780
c_rt_lib0clear(&___nl__0);
#line 780
c_rt_lib0clear(&___nl__1);
#line 780
return NULL;
}


static ImmT ___const__[17];
static int ___const_init__ = 1;
void generator_c0__const__init(){
if(!___const_init__) nl_die();
___const_init__ = 0;
__const__f = &___const__[16];


for(int i=0;i<16;++i) ___const__[i] = NULL;
c_rt_lib0register_const(___const__, 16);
}
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
