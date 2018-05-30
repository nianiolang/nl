
/* (c) Atinea Sp z o. o.
 *  Stamp: nianio lang
 */
#include "c_rt_lib.h"
#include "c_global_const.h"
#include "module_checker.h"
#include "array.h"
#include "ptd.h"
#include "hash.h"
#include "nast.h"
#include "tc_types.h"
#include "tct.h"
#include "string.h"
#include "boolean_t.h"
#include "ptd_parser.h"
#include "boolean_t.h"
#include "module_checker.h"
#include "tc_types.h"
#line 1 "module_checker.nl"

static ImmT *__const__f = NULL;
ImmT module_checker_priv0__const__sim(int __nr);
ImmT module_checker_priv0__const__sing(int __nr);

ImmT module_checker_priv0check_module(ImmT ___nl__0,ImmT ___nl__1,ImmT * ___ref___2,ImmT * ___ref___3,ImmT * ___ref___4);
ImmT module_checker_priv0get_loop_from_stack(ImmT ___nl__0,ImmT ___nl__1);
ImmT module_checker_priv0add_error(ImmT * ___ref___0,ImmT ___nl__1);
ImmT module_checker_priv0add_warning(ImmT * ___ref___0,ImmT ___nl__1);
ImmT module_checker_priv0set_used_function(ImmT ___nl__0,ImmT ___nl__1,ImmT * ___ref___2);
ImmT module_checker_priv0check_types_imported(ImmT ___nl__0,ImmT * ___ref___1);
ImmT module_checker_priv0get_fun_key(ImmT ___nl__0,ImmT ___nl__1,ImmT ___nl__2);
ImmT module_checker_priv0add_fun_used(ImmT ___nl__0,ImmT ___nl__1,ImmT * ___ref___2);
ImmT module_checker_priv0check_return_type(ImmT ___nl__0,ImmT * ___ref___1);
ImmT module_checker_priv0check_type(ImmT ___nl__0,ImmT * ___ref___1);
ImmT module_checker_priv0add_var(ImmT ___nl__0,ImmT ___nl__1,ImmT ___nl__2,ImmT * ___ref___3);
ImmT module_checker_priv0use_var(ImmT ___nl__0,ImmT ___nl__1,ImmT * ___ref___2);
ImmT module_checker_priv0add_var_dec(ImmT ___nl__0,ImmT ___nl__1,ImmT ___nl__2,ImmT * ___ref___3);
ImmT module_checker_priv0check_cmd(ImmT ___nl__0,ImmT * ___ref___1);
ImmT module_checker_priv0check_lvalue(ImmT ___nl__0,ImmT * ___ref___1);
ImmT module_checker_priv0check_val(ImmT ___nl__0,ImmT * ___ref___1);
ImmT module_checker_priv0save_block(ImmT * ___ref___0);
ImmT module_checker_priv0load_block(ImmT * ___ref___0,ImmT ___nl__1);


ImmT module_checker0stack_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "module_checker0stack_t");
return module_checker0stack_t();}
ImmT module_checker0stack_t(){
return module_checker_priv0__const__sing(0);}
ImmT module_checker0stack_t0cal() {
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
#line 17
c_rt_lib0move(&___nl__1, ptd0sim());
#line 17
c_rt_lib0move(&___nl__0, ptd0arr(___nl__1));
#line 17
c_rt_lib0clear(&___nl__1);
#line 17
return ___nl__0;
#line 17
c_rt_lib0clear(&___nl__0);
#line 17
return NULL;
}

ImmT module_checker0stack_hash_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "module_checker0stack_hash_t");
return module_checker0stack_hash_t();}
ImmT module_checker0stack_hash_t(){
return module_checker_priv0__const__sing(1);}
ImmT module_checker0stack_hash_t0cal() {
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
#line 21
c_rt_lib0move(&___nl__1, ptd0sim());
#line 21
c_rt_lib0move(&___nl__0, ptd0hash(___nl__1));
#line 21
c_rt_lib0clear(&___nl__1);
#line 21
return ___nl__0;
#line 21
c_rt_lib0clear(&___nl__0);
#line 21
return NULL;
}

ImmT module_checker0ret_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "module_checker0ret_t");
return module_checker0ret_t();}
ImmT module_checker0ret_t(){
return module_checker_priv0__const__sing(2);}
ImmT module_checker0ret_t0cal() {
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
#line 25
c_rt_lib0move(&___nl__3, ptd0sim());
#line 25
c_rt_lib0move(&___nl__2, ptd0arr(___nl__3));
#line 25
c_rt_lib0clear(&___nl__3);
#line 25
c_rt_lib0move(&___nl__3, ptd0none());
#line 25
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(2, ___get_global_const(140), ___nl__2, ___get_global_const(48), ___nl__3));
#line 25
c_rt_lib0clear(&___nl__2);
#line 25
c_rt_lib0clear(&___nl__3);
#line 25
c_rt_lib0move(&___nl__0, ptd0var(___nl__1));
#line 25
c_rt_lib0clear(&___nl__1);
#line 25
return ___nl__0;
#line 25
c_rt_lib0clear(&___nl__0);
#line 25
return NULL;
}

ImmT module_checker0modules_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "module_checker0modules_t");
return module_checker0modules_t();}
ImmT module_checker0modules_t(){
return module_checker_priv0__const__sing(3);}
ImmT module_checker0modules_t0cal() {
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
#line 29
c_rt_lib0move(&___nl__2, ptd0sim());
#line 29
c_rt_lib0move(&___nl__1, ptd0arr(___nl__2));
#line 29
c_rt_lib0clear(&___nl__2);
#line 29
c_rt_lib0move(&___nl__0, ptd0hash(___nl__1));
#line 29
c_rt_lib0clear(&___nl__1);
#line 29
return ___nl__0;
#line 29
c_rt_lib0clear(&___nl__0);
#line 29
return NULL;
}

ImmT module_checker0search_loops0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "module_checker0search_loops");
return module_checker0search_loops(_tab[0]);}
ImmT module_checker0search_loops(ImmT ___nl__0) {
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
#line 33
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(0));
#line 34
c_rt_lib0move(&___nl__4, c_rt_lib0init_iter(___nl__0));
#line 34
label_2:
#line 34
c_rt_lib0move(&___nl__2, c_rt_lib0is_end_hash(___nl__4));
#line 34
if(c_rt_lib0check_true_native(___nl__2)){ goto label_51;}
#line 34
c_rt_lib0move(&___nl__2, c_rt_lib0get_key_iter(___nl__4));
#line 34
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value(___nl__0, ___nl__2));
#line 35
c_rt_lib0move(&___nl__5, hash0has_key(___nl__1, ___nl__2));
#line 35
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 35
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 35
if(c_rt_lib0check_true_native(___nl__5)){ goto label_47;}
#line 36
c_rt_lib0move(&___nl__6, c_rt_lib0array_mk(0));
#line 37
c_rt_lib0move(&___nl__7, c_rt_lib0hash_mk(0));
#line 38
c_rt_lib0move(&___nl__8, module_checker_priv0check_module(___nl__2, ___nl__0, &___nl__6, &___nl__7, &___nl__1));
#line 38
c_rt_lib0move(&___nl__9, c_rt_lib0priv_is(___nl__8, ___get_global_const(140)));
#line 38
if(c_rt_lib0check_true_native(___nl__9)){ goto label_21;}
#line 40
c_rt_lib0move(&___nl__9, c_rt_lib0priv_is(___nl__8, ___get_global_const(48)));
#line 40
if(c_rt_lib0check_true_native(___nl__9)){ goto label_39;}
#line 40
c_rt_lib0move(&___nl__9,___get_global_const(91));
#line 40
c_rt_lib0move(&___nl__9, c_rt_lib0array_mk(2, ___nl__9, ___nl__8));
#line 40
nl_die_arg(___nl__9);
#line 38
label_21:
#line 38
c_rt_lib0move(&___nl__10, c_rt_lib0priv_as(___nl__8, ___get_global_const(140)));
#line 39
c_rt_lib0move(&___nl__11, c_rt_lib0ov_mk_arg(___get_global_const(140), ___nl__10));
#line 39
c_rt_lib0clear(&___nl__0);
#line 39
c_rt_lib0clear(&___nl__1);
#line 39
c_rt_lib0clear(&___nl__2);
#line 39
c_rt_lib0clear(&___nl__3);
#line 39
c_rt_lib0clear(&___nl__4);
#line 39
c_rt_lib0clear(&___nl__5);
#line 39
c_rt_lib0clear(&___nl__6);
#line 39
c_rt_lib0clear(&___nl__7);
#line 39
c_rt_lib0clear(&___nl__8);
#line 39
c_rt_lib0clear(&___nl__9);
#line 39
c_rt_lib0clear(&___nl__10);
#line 39
return ___nl__11;
#line 39
c_rt_lib0clear(&___nl__11);
#line 39
c_rt_lib0clear(&___nl__10);
#line 40
goto label_41;
#line 40
label_39:
#line 41
goto label_41;
#line 41
label_41:
#line 41
c_rt_lib0clear(&___nl__8);
#line 41
c_rt_lib0clear(&___nl__9);
#line 41
c_rt_lib0clear(&___nl__6);
#line 41
c_rt_lib0clear(&___nl__7);
#line 42
goto label_47;
#line 42
label_47:
#line 42
c_rt_lib0clear(&___nl__5);
#line 43
c_rt_lib0move(&___nl__4, c_rt_lib0next_iter(___nl__4));
#line 43
goto label_2;
#line 43
label_51:
#line 43
c_rt_lib0clear(&___nl__2);
#line 43
c_rt_lib0clear(&___nl__3);
#line 43
c_rt_lib0clear(&___nl__4);
#line 44
c_rt_lib0move(&___nl__2, c_rt_lib0ov_mk_none(___get_global_const(48)));
#line 44
c_rt_lib0clear(&___nl__0);
#line 44
c_rt_lib0clear(&___nl__1);
#line 44
return ___nl__2;
#line 44
c_rt_lib0clear(&___nl__2);
#line 44
c_rt_lib0clear(&___nl__1);
#line 44
c_rt_lib0clear(&___nl__0);
#line 44
return NULL;
}

ImmT module_checker_priv0check_module(ImmT ___nl__0,ImmT ___nl__1,ImmT * ___ref___2,ImmT * ___ref___3,ImmT * ___ref___4) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
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
#line 49
c_rt_lib0move(&___nl__5,___get_global_const(1));
#line 49
c_rt_lib0delete(hash0set_value(___ref___4, ___nl__0, ___nl__5));
#line 49
c_rt_lib0clear(&___nl__5);
#line 50
c_rt_lib0move(&___nl__5,___get_global_const(1));
#line 50
c_rt_lib0delete(hash0set_value(___ref___3, ___nl__0, ___nl__5));
#line 50
c_rt_lib0clear(&___nl__5);
#line 51
c_rt_lib0delete(array0push(___ref___2, ___nl__0));
#line 52
c_rt_lib0move(&___nl__5, hash0get_value(___nl__1, ___nl__0));
#line 52
c_rt_lib0move(&___nl__7,___get_global_const(0));
#line 52
c_rt_lib0move(&___nl__8,___get_global_const(1));
#line 52
c_rt_lib0move(&___nl__9, c_rt_lib0array_len(___nl__5));
#line 52
label_11:
#line 52
c_rt_lib0move(&___nl__10, c_rt_lib0ge(___nl__7, ___nl__9));
#line 52
if(c_rt_lib0check_true_native(___nl__10)){ goto label_79;}
#line 52
c_rt_lib0move(&___nl__6, c_rt_lib0array_get(___nl__5, ___nl__7));
#line 53
c_rt_lib0move(&___nl__11, hash0has_key(*___ref___3, ___nl__6));
#line 53
c_rt_lib0move(&___nl__11, c_rt_lib0not(___nl__11));
#line 53
if(c_rt_lib0check_true_native(___nl__11)){ goto label_32;}
#line 54
c_rt_lib0move(&___nl__12, module_checker_priv0get_loop_from_stack(___nl__6, *___ref___2));
#line 54
c_rt_lib0move(&___nl__12, c_rt_lib0ov_mk_arg(___get_global_const(140), ___nl__12));
#line 54
c_rt_lib0clear(&___nl__0);
#line 54
c_rt_lib0clear(&___nl__1);
#line 54
c_rt_lib0clear(&___nl__5);
#line 54
c_rt_lib0clear(&___nl__6);
#line 54
c_rt_lib0clear(&___nl__7);
#line 54
c_rt_lib0clear(&___nl__8);
#line 54
c_rt_lib0clear(&___nl__9);
#line 54
c_rt_lib0clear(&___nl__10);
#line 54
c_rt_lib0clear(&___nl__11);
#line 54
return ___nl__12;
#line 54
c_rt_lib0clear(&___nl__12);
#line 55
goto label_75;
#line 55
label_32:
#line 55
c_rt_lib0move(&___nl__11, hash0has_key(___nl__1, ___nl__6));
#line 55
c_rt_lib0move(&___nl__12, c_rt_lib0not(___nl__11));
#line 55
if(c_rt_lib0check_true_native(___nl__12)){ goto label_38;}
#line 55
c_rt_lib0move(&___nl__11, hash0has_key(*___ref___4, ___nl__6));
#line 55
c_rt_lib0move(&___nl__11, c_rt_lib0not(___nl__11));
#line 55
label_38:
#line 55
c_rt_lib0clear(&___nl__12);
#line 55
c_rt_lib0move(&___nl__11, c_rt_lib0not(___nl__11));
#line 55
if(c_rt_lib0check_true_native(___nl__11)){ goto label_75;}
#line 56
c_rt_lib0move(&___nl__12, module_checker_priv0check_module(___nl__6, ___nl__1, ___ref___2, ___ref___3, ___ref___4));
#line 56
c_rt_lib0move(&___nl__13, c_rt_lib0priv_is(___nl__12, ___get_global_const(140)));
#line 56
if(c_rt_lib0check_true_native(___nl__13)){ goto label_50;}
#line 58
c_rt_lib0move(&___nl__13, c_rt_lib0priv_is(___nl__12, ___get_global_const(48)));
#line 58
if(c_rt_lib0check_true_native(___nl__13)){ goto label_69;}
#line 58
c_rt_lib0move(&___nl__13,___get_global_const(91));
#line 58
c_rt_lib0move(&___nl__13, c_rt_lib0array_mk(2, ___nl__13, ___nl__12));
#line 58
nl_die_arg(___nl__13);
#line 56
label_50:
#line 56
c_rt_lib0move(&___nl__14, c_rt_lib0priv_as(___nl__12, ___get_global_const(140)));
#line 57
c_rt_lib0move(&___nl__15, c_rt_lib0ov_mk_arg(___get_global_const(140), ___nl__14));
#line 57
c_rt_lib0clear(&___nl__0);
#line 57
c_rt_lib0clear(&___nl__1);
#line 57
c_rt_lib0clear(&___nl__5);
#line 57
c_rt_lib0clear(&___nl__6);
#line 57
c_rt_lib0clear(&___nl__7);
#line 57
c_rt_lib0clear(&___nl__8);
#line 57
c_rt_lib0clear(&___nl__9);
#line 57
c_rt_lib0clear(&___nl__10);
#line 57
c_rt_lib0clear(&___nl__11);
#line 57
c_rt_lib0clear(&___nl__12);
#line 57
c_rt_lib0clear(&___nl__13);
#line 57
c_rt_lib0clear(&___nl__14);
#line 57
return ___nl__15;
#line 57
c_rt_lib0clear(&___nl__15);
#line 57
c_rt_lib0clear(&___nl__14);
#line 58
goto label_71;
#line 58
label_69:
#line 59
goto label_71;
#line 59
label_71:
#line 59
c_rt_lib0clear(&___nl__12);
#line 59
c_rt_lib0clear(&___nl__13);
#line 60
goto label_75;
#line 60
label_75:
#line 60
c_rt_lib0clear(&___nl__11);
#line 61
c_rt_lib0move(&___nl__7, c_rt_lib0add_mod(___nl__7, ___nl__8));
#line 61
goto label_11;
#line 61
label_79:
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
c_rt_lib0clear(&___nl__10);
#line 62
c_rt_lib0delete(hash0delete(___ref___3, ___nl__0));
#line 63
c_rt_lib0move(&___nl__6,___get_global_const(0));
#line 63
c_rt_lib0move(&___nl__7, array0len(*___ref___2));
#line 63
c_rt_lib0move(&___nl__8,___get_global_const(1));
#line 63
c_rt_lib0move(&___nl__7, c_rt_lib0sub_mod(___nl__7, ___nl__8));
#line 63
c_rt_lib0clear(&___nl__8);
#line 63
c_rt_lib0move(&___nl__5, array0subarray(*___ref___2, ___nl__6, ___nl__7));
#line 63
c_rt_lib0clear(&___nl__7);
#line 63
c_rt_lib0clear(&___nl__6);
#line 63
c_rt_lib0copy(___ref___2, ___nl__5);
#line 63
c_rt_lib0clear(&___nl__5);
#line 64
c_rt_lib0move(&___nl__5, c_rt_lib0ov_mk_none(___get_global_const(48)));
#line 64
c_rt_lib0clear(&___nl__0);
#line 64
c_rt_lib0clear(&___nl__1);
#line 64
return ___nl__5;
#line 64
c_rt_lib0clear(&___nl__5);
#line 64
c_rt_lib0clear(&___nl__0);
#line 64
c_rt_lib0clear(&___nl__1);
#line 64
return NULL;
}

ImmT module_checker_priv0get_loop_from_stack(ImmT ___nl__0,ImmT ___nl__1) {
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
#line 68
c_rt_lib0move(&___nl__2, c_rt_lib0array_mk(0));
#line 69
c_rt_lib0move(&___nl__4,___get_global_const(0));
#line 69
c_rt_lib0move(&___nl__5,___get_global_const(1));
#line 69
c_rt_lib0move(&___nl__6, c_rt_lib0array_len(___nl__1));
#line 69
label_4:
#line 69
c_rt_lib0move(&___nl__7, c_rt_lib0ge(___nl__4, ___nl__6));
#line 69
if(c_rt_lib0check_true_native(___nl__7)){ goto label_20;}
#line 69
c_rt_lib0move(&___nl__3, c_rt_lib0array_get(___nl__1, ___nl__4));
#line 70
c_rt_lib0move(&___nl__8, c_rt_lib0eq(___nl__3, ___nl__0));
#line 70
c_rt_lib0move(&___nl__8, c_rt_lib0not(___nl__8));
#line 70
if(c_rt_lib0check_true_native(___nl__8)){ goto label_15;}
#line 70
c_rt_lib0move(&___nl__9, c_rt_lib0array_mk(0));
#line 70
c_rt_lib0copy(&___nl__2, ___nl__9);
#line 70
c_rt_lib0clear(&___nl__9);
#line 70
goto label_15;
#line 70
label_15:
#line 70
c_rt_lib0clear(&___nl__8);
#line 71
c_rt_lib0delete(array0push(&___nl__2, ___nl__3));
#line 72
c_rt_lib0move(&___nl__4, c_rt_lib0add_mod(___nl__4, ___nl__5));
#line 72
goto label_4;
#line 72
label_20:
#line 72
c_rt_lib0clear(&___nl__3);
#line 72
c_rt_lib0clear(&___nl__4);
#line 72
c_rt_lib0clear(&___nl__5);
#line 72
c_rt_lib0clear(&___nl__6);
#line 72
c_rt_lib0clear(&___nl__7);
#line 73
c_rt_lib0delete(array0push(&___nl__2, ___nl__0));
#line 74
c_rt_lib0clear(&___nl__0);
#line 74
c_rt_lib0clear(&___nl__1);
#line 74
return ___nl__2;
#line 74
c_rt_lib0clear(&___nl__2);
#line 74
c_rt_lib0clear(&___nl__0);
#line 74
c_rt_lib0clear(&___nl__1);
#line 74
return NULL;
}

ImmT module_checker0var_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "module_checker0var_t");
return module_checker0var_t();}
ImmT module_checker0var_t(){
return module_checker_priv0__const__sing(4);}
ImmT module_checker0var_t0cal() {
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
#line 79
c_rt_lib0move(&___nl__4, ptd0none());
#line 79
c_rt_lib0move(&___nl__5, ptd0none());
#line 79
c_rt_lib0move(&___nl__6, ptd0none());
#line 79
c_rt_lib0move(&___nl__3, c_rt_lib0hash_mk(3, ___get_global_const(196), ___nl__4, ___get_global_const(41), ___nl__5, ___get_global_const(192), ___nl__6));
#line 79
c_rt_lib0clear(&___nl__4);
#line 79
c_rt_lib0clear(&___nl__5);
#line 79
c_rt_lib0clear(&___nl__6);
#line 79
c_rt_lib0move(&___nl__2, ptd0var(___nl__3));
#line 79
c_rt_lib0clear(&___nl__3);
#line 80
c_rt_lib0move(&___nl__3, c_rt_lib0func_new(boolean_t0type0ptr, ___get_global_const(62), ___get_global_const(63)));
#line 80
c_rt_lib0move(&___nl__3, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__3));
#line 81
c_rt_lib0move(&___nl__4, c_rt_lib0func_new(boolean_t0type0ptr, ___get_global_const(62), ___get_global_const(63)));
#line 81
c_rt_lib0move(&___nl__4, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__4));
#line 81
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(3, ___get_global_const(277), ___nl__2, ___get_global_const(282), ___nl__3, ___get_global_const(776), ___nl__4));
#line 81
c_rt_lib0clear(&___nl__2);
#line 81
c_rt_lib0clear(&___nl__3);
#line 81
c_rt_lib0clear(&___nl__4);
#line 81
c_rt_lib0move(&___nl__0, ptd0rec(___nl__1));
#line 81
c_rt_lib0clear(&___nl__1);
#line 81
return ___nl__0;
#line 81
c_rt_lib0clear(&___nl__0);
#line 81
return NULL;
}

ImmT module_checker0return_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "module_checker0return_t");
return module_checker0return_t();}
ImmT module_checker0return_t(){
return module_checker_priv0__const__sing(5);}
ImmT module_checker0return_t0cal() {
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
#line 87
c_rt_lib0move(&___nl__2, ptd0none());
#line 88
c_rt_lib0move(&___nl__3, ptd0none());
#line 89
c_rt_lib0move(&___nl__4, ptd0none());
#line 90
c_rt_lib0move(&___nl__5, ptd0none());
#line 91
c_rt_lib0move(&___nl__6, ptd0none());
#line 91
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(5, ___get_global_const(777), ___nl__2, ___get_global_const(41), ___nl__3, ___get_global_const(192), ___nl__4, ___get_global_const(778), ___nl__5, ___get_global_const(779), ___nl__6));
#line 91
c_rt_lib0clear(&___nl__2);
#line 91
c_rt_lib0clear(&___nl__3);
#line 91
c_rt_lib0clear(&___nl__4);
#line 91
c_rt_lib0clear(&___nl__5);
#line 91
c_rt_lib0clear(&___nl__6);
#line 91
c_rt_lib0move(&___nl__0, ptd0var(___nl__1));
#line 91
c_rt_lib0clear(&___nl__1);
#line 91
return ___nl__0;
#line 91
c_rt_lib0clear(&___nl__0);
#line 91
return NULL;
}

ImmT module_checker0state_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "module_checker0state_t");
return module_checker0state_t();}
ImmT module_checker0state_t(){
return module_checker_priv0__const__sing(6);}
ImmT module_checker0state_t0cal() {
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
#line 97
c_rt_lib0move(&___nl__2, c_rt_lib0func_new(boolean_t0type0ptr, ___get_global_const(62), ___get_global_const(63)));
#line 97
c_rt_lib0move(&___nl__2, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__2));
#line 98
c_rt_lib0move(&___nl__5, c_rt_lib0func_new(boolean_t0type0ptr, ___get_global_const(62), ___get_global_const(63)));
#line 98
c_rt_lib0move(&___nl__5, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__5));
#line 98
c_rt_lib0move(&___nl__6, c_rt_lib0func_new(module_checker0return_t0ptr, ___get_global_const(24), ___get_global_const(717)));
#line 98
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__6));
#line 98
c_rt_lib0move(&___nl__4, c_rt_lib0hash_mk(2, ___get_global_const(190), ___nl__5, ___get_global_const(233), ___nl__6));
#line 98
c_rt_lib0clear(&___nl__5);
#line 98
c_rt_lib0clear(&___nl__6);
#line 98
c_rt_lib0move(&___nl__3, ptd0rec(___nl__4));
#line 98
c_rt_lib0clear(&___nl__4);
#line 99
c_rt_lib0move(&___nl__5, c_rt_lib0func_new(module_checker0var_t0ptr, ___get_global_const(24), ___get_global_const(780)));
#line 99
c_rt_lib0move(&___nl__5, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__5));
#line 99
c_rt_lib0move(&___nl__4, ptd0hash(___nl__5));
#line 99
c_rt_lib0clear(&___nl__5);
#line 100
c_rt_lib0move(&___nl__5, c_rt_lib0func_new(tc_types0errors_t0ptr, ___get_global_const(15), ___get_global_const(781)));
#line 100
c_rt_lib0move(&___nl__5, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__5));
#line 101
c_rt_lib0move(&___nl__9, ptd0sim());
#line 101
c_rt_lib0move(&___nl__8, ptd0hash(___nl__9));
#line 101
c_rt_lib0clear(&___nl__9);
#line 101
c_rt_lib0move(&___nl__10, ptd0sim());
#line 101
c_rt_lib0move(&___nl__9, ptd0hash(___nl__10));
#line 101
c_rt_lib0clear(&___nl__10);
#line 101
c_rt_lib0move(&___nl__7, c_rt_lib0hash_mk(2, ___get_global_const(88), ___nl__8, ___get_global_const(132), ___nl__9));
#line 101
c_rt_lib0clear(&___nl__8);
#line 101
c_rt_lib0clear(&___nl__9);
#line 101
c_rt_lib0move(&___nl__6, ptd0rec(___nl__7));
#line 101
c_rt_lib0clear(&___nl__7);
#line 102
c_rt_lib0move(&___nl__7, ptd0sim());
#line 102
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(6, ___get_global_const(782), ___nl__2, ___get_global_const(90), ___nl__3, ___get_global_const(673), ___nl__4, ___get_global_const(18), ___nl__5, ___get_global_const(783), ___nl__6, ___get_global_const(784), ___nl__7));
#line 102
c_rt_lib0clear(&___nl__2);
#line 102
c_rt_lib0clear(&___nl__3);
#line 102
c_rt_lib0clear(&___nl__4);
#line 102
c_rt_lib0clear(&___nl__5);
#line 102
c_rt_lib0clear(&___nl__6);
#line 102
c_rt_lib0clear(&___nl__7);
#line 102
c_rt_lib0move(&___nl__0, ptd0rec(___nl__1));
#line 102
c_rt_lib0clear(&___nl__1);
#line 102
return ___nl__0;
#line 102
c_rt_lib0clear(&___nl__0);
#line 102
return NULL;
}

ImmT module_checker0save_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "module_checker0save_t");
return module_checker0save_t();}
ImmT module_checker0save_t(){
return module_checker_priv0__const__sing(7);}
ImmT module_checker0save_t0cal() {
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
#line 107
c_rt_lib0move(&___nl__2, c_rt_lib0func_new(boolean_t0type0ptr, ___get_global_const(62), ___get_global_const(63)));
#line 107
c_rt_lib0move(&___nl__2, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__2));
#line 107
c_rt_lib0move(&___nl__4, c_rt_lib0func_new(module_checker0var_t0ptr, ___get_global_const(24), ___get_global_const(780)));
#line 107
c_rt_lib0move(&___nl__4, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__4));
#line 107
c_rt_lib0move(&___nl__3, ptd0hash(___nl__4));
#line 107
c_rt_lib0clear(&___nl__4);
#line 107
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(2, ___get_global_const(782), ___nl__2, ___get_global_const(673), ___nl__3));
#line 107
c_rt_lib0clear(&___nl__2);
#line 107
c_rt_lib0clear(&___nl__3);
#line 107
c_rt_lib0move(&___nl__0, ptd0rec(___nl__1));
#line 107
c_rt_lib0clear(&___nl__1);
#line 107
return ___nl__0;
#line 107
c_rt_lib0clear(&___nl__0);
#line 107
return NULL;
}

ImmT module_checker_priv0add_error(ImmT * ___ref___0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__1);
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
#line 111
c_rt_lib0move(&___nl__2,___get_global_const(18));
#line 111
c_rt_lib0move(&___nl__2, c_rt_lib0get_ref_hash(*___ref___0, ___nl__2));
#line 112
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(785)));
#line 112
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(132)));
#line 112
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_none(___get_global_const(112)));
#line 112
c_rt_lib0move(&___nl__7,___get_global_const(1));
#line 112
c_rt_lib0move(&___nl__7, c_rt_lib0unary_minus(___nl__7));
#line 112
c_rt_lib0move(&___nl__3, c_rt_lib0hash_mk(5, ___get_global_const(137), ___nl__1, ___get_global_const(134), ___nl__4, ___get_global_const(132), ___nl__5, ___get_global_const(63), ___nl__6, ___get_global_const(179), ___nl__7));
#line 112
c_rt_lib0clear(&___nl__4);
#line 112
c_rt_lib0clear(&___nl__5);
#line 112
c_rt_lib0clear(&___nl__6);
#line 112
c_rt_lib0clear(&___nl__7);
#line 112
c_rt_lib0delete(array0push(&___nl__2, ___nl__3));
#line 112
c_rt_lib0clear(&___nl__3);
#line 112
c_rt_lib0move(&___nl__3,___get_global_const(18));
#line 112
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__3, ___nl__2));
#line 112
c_rt_lib0clear(&___nl__3);
#line 112
c_rt_lib0clear(&___nl__2);
#line 112
c_rt_lib0clear(&___nl__1);
#line 112
return NULL;
}

ImmT module_checker_priv0add_warning(ImmT * ___ref___0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__1);
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
#line 116
c_rt_lib0move(&___nl__2,___get_global_const(113));
#line 116
c_rt_lib0move(&___nl__2, c_rt_lib0get_ref_hash(*___ref___0, ___nl__2));
#line 117
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(785)));
#line 117
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(132)));
#line 117
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_none(___get_global_const(177)));
#line 117
c_rt_lib0move(&___nl__7,___get_global_const(1));
#line 117
c_rt_lib0move(&___nl__7, c_rt_lib0unary_minus(___nl__7));
#line 117
c_rt_lib0move(&___nl__3, c_rt_lib0hash_mk(5, ___get_global_const(137), ___nl__1, ___get_global_const(134), ___nl__4, ___get_global_const(132), ___nl__5, ___get_global_const(63), ___nl__6, ___get_global_const(179), ___nl__7));
#line 117
c_rt_lib0clear(&___nl__4);
#line 117
c_rt_lib0clear(&___nl__5);
#line 117
c_rt_lib0clear(&___nl__6);
#line 117
c_rt_lib0clear(&___nl__7);
#line 117
c_rt_lib0delete(array0push(&___nl__2, ___nl__3));
#line 117
c_rt_lib0clear(&___nl__3);
#line 117
c_rt_lib0move(&___nl__3,___get_global_const(113));
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

ImmT module_checker_priv0set_used_function(ImmT ___nl__0,ImmT ___nl__1,ImmT * ___ref___2) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
#line 121
c_rt_lib0move(&___nl__3,___get_global_const(0));
#line 121
c_rt_lib0delete(hash0set_value(___ref___2, ___nl__0, ___nl__3));
#line 121
c_rt_lib0clear(&___nl__3);
#line 122
c_rt_lib0move(&___nl__3, hash0get_value(___nl__1, ___nl__0));
#line 122
c_rt_lib0move(&___nl__6, c_rt_lib0init_iter(___nl__3));
#line 122
label_5:
#line 122
c_rt_lib0move(&___nl__4, c_rt_lib0is_end_hash(___nl__6));
#line 122
if(c_rt_lib0check_true_native(___nl__4)){ goto label_31;}
#line 122
c_rt_lib0move(&___nl__4, c_rt_lib0get_key_iter(___nl__6));
#line 122
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value(___nl__3, ___nl__4));
#line 123
c_rt_lib0move(&___nl__7, hash0has_key(___nl__1, ___nl__4));
#line 123
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 123
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 123
if(c_rt_lib0check_true_native(___nl__7)){ goto label_17;}
#line 123
c_rt_lib0clear(&___nl__7);
#line 123
goto label_28;
#line 123
goto label_17;
#line 123
label_17:
#line 123
c_rt_lib0clear(&___nl__7);
#line 124
c_rt_lib0move(&___nl__7, hash0has_key(*___ref___2, ___nl__4));
#line 124
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 124
if(c_rt_lib0check_true_native(___nl__7)){ goto label_25;}
#line 124
c_rt_lib0clear(&___nl__7);
#line 124
goto label_28;
#line 124
goto label_25;
#line 124
label_25:
#line 124
c_rt_lib0clear(&___nl__7);
#line 125
c_rt_lib0delete(module_checker_priv0set_used_function(___nl__4, ___nl__1, ___ref___2));
#line 125
label_28:
#line 126
c_rt_lib0move(&___nl__6, c_rt_lib0next_iter(___nl__6));
#line 126
goto label_5;
#line 126
label_31:
#line 126
c_rt_lib0clear(&___nl__3);
#line 126
c_rt_lib0clear(&___nl__4);
#line 126
c_rt_lib0clear(&___nl__5);
#line 126
c_rt_lib0clear(&___nl__6);
#line 126
c_rt_lib0clear(&___nl__0);
#line 126
c_rt_lib0clear(&___nl__1);
#line 126
return NULL;
}

ImmT module_checker0check_module0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 3, "module_checker0check_module");
return module_checker0check_module(_tab[0], _tab[1], &_tab[2]);}
ImmT module_checker0check_module(ImmT ___nl__0,ImmT ___nl__1,ImmT * ___ref___2) {
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
#line 130
c_rt_lib0move(&___nl__4, c_rt_lib0array_mk(0));
#line 130
c_rt_lib0move(&___nl__5, c_rt_lib0array_mk(0));
#line 130
c_rt_lib0move(&___nl__6,___get_global_const(1));
#line 130
c_rt_lib0move(&___nl__6, c_rt_lib0unary_minus(___nl__6));
#line 130
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(93)));
#line 130
c_rt_lib0move(&___nl__3, c_rt_lib0hash_mk(4, ___get_global_const(18), ___nl__4, ___get_global_const(113), ___nl__5, ___get_global_const(785), ___nl__6, ___get_global_const(132), ___nl__7));
#line 130
c_rt_lib0clear(&___nl__4);
#line 130
c_rt_lib0clear(&___nl__5);
#line 130
c_rt_lib0clear(&___nl__6);
#line 130
c_rt_lib0clear(&___nl__7);
#line 131
c_rt_lib0move(&___nl__5, c_rt_lib0hash_mk(0));
#line 131
c_rt_lib0move(&___nl__6, c_rt_lib0hash_mk(0));
#line 131
c_rt_lib0move(&___nl__4, c_rt_lib0hash_mk(2, ___get_global_const(88), ___nl__5, ___get_global_const(132), ___nl__6));
#line 131
c_rt_lib0clear(&___nl__5);
#line 131
c_rt_lib0clear(&___nl__6);
#line 133
c_rt_lib0move(&___nl__7, c_rt_lib0get_false());
#line 133
c_rt_lib0move(&___nl__8, c_rt_lib0ov_mk_none(___get_global_const(41)));
#line 133
c_rt_lib0move(&___nl__6, c_rt_lib0hash_mk(2, ___get_global_const(190), ___nl__7, ___get_global_const(233), ___nl__8));
#line 133
c_rt_lib0clear(&___nl__7);
#line 133
c_rt_lib0clear(&___nl__8);
#line 134
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(93)));
#line 135
c_rt_lib0move(&___nl__8, c_rt_lib0get_false());
#line 137
c_rt_lib0move(&___nl__9, c_rt_lib0hash_mk(0));
#line 137
c_rt_lib0move(&___nl__5, c_rt_lib0hash_mk(6, ___get_global_const(90), ___nl__6, ___get_global_const(784), ___nl__7, ___get_global_const(782), ___nl__8, ___get_global_const(783), ___nl__4, ___get_global_const(673), ___nl__9, ___get_global_const(18), ___nl__3));
#line 137
c_rt_lib0clear(&___nl__6);
#line 137
c_rt_lib0clear(&___nl__7);
#line 137
c_rt_lib0clear(&___nl__8);
#line 137
c_rt_lib0clear(&___nl__9);
#line 140
c_rt_lib0move(&___nl__6, c_rt_lib0hash_mk(0));
#line 141
c_rt_lib0move(&___nl__7, c_rt_lib0hash_mk(0));
#line 142
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(786)));
#line 142
c_rt_lib0move(&___nl__10,___get_global_const(0));
#line 142
c_rt_lib0move(&___nl__11,___get_global_const(1));
#line 142
c_rt_lib0move(&___nl__12, c_rt_lib0array_len(___nl__8));
#line 142
label_34:
#line 142
c_rt_lib0move(&___nl__13, c_rt_lib0ge(___nl__10, ___nl__12));
#line 142
if(c_rt_lib0check_true_native(___nl__13)){ goto label_209;}
#line 142
c_rt_lib0move(&___nl__9, c_rt_lib0array_get(___nl__8, ___nl__10));
#line 143
c_rt_lib0move(&___nl__14, c_rt_lib0hash_get_value_dec(___nl__9, ___get_global_const(134)));
#line 143
c_rt_lib0move(&___nl__15,___get_global_const(18));
#line 143
c_rt_lib0move(&___nl__15, c_rt_lib0get_ref_hash(___nl__5, ___nl__15));
#line 143
c_rt_lib0copy(&___nl__16, ___nl__14);
#line 143
c_rt_lib0hash_set_value_dec(&___nl__15, ___get_global_const(785), ___nl__16);
#line 143
c_rt_lib0move(&___nl__17,___get_global_const(18));
#line 143
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__5, ___nl__17, ___nl__15));
#line 143
c_rt_lib0clear(&___nl__17);
#line 143
c_rt_lib0clear(&___nl__14);
#line 143
c_rt_lib0clear(&___nl__15);
#line 143
c_rt_lib0clear(&___nl__16);
#line 144
c_rt_lib0move(&___nl__14, c_rt_lib0hash_mk(0));
#line 144
c_rt_lib0copy(&___nl__15, ___nl__14);
#line 144
c_rt_lib0hash_set_value_dec(&___nl__5, ___get_global_const(673), ___nl__15);
#line 144
c_rt_lib0clear(&___nl__14);
#line 144
c_rt_lib0clear(&___nl__15);
#line 145
c_rt_lib0move(&___nl__15, c_rt_lib0get_false());
#line 145
c_rt_lib0move(&___nl__17, c_rt_lib0hash_get_value_dec(___nl__9, ___get_global_const(787)));
#line 145
c_rt_lib0move(&___nl__16, module_checker_priv0check_return_type(___nl__17, &___nl__5));
#line 145
c_rt_lib0clear(&___nl__17);
#line 145
c_rt_lib0move(&___nl__14, c_rt_lib0hash_mk(2, ___get_global_const(190), ___nl__15, ___get_global_const(233), ___nl__16));
#line 145
c_rt_lib0clear(&___nl__15);
#line 145
c_rt_lib0clear(&___nl__16);
#line 145
c_rt_lib0copy(&___nl__15, ___nl__14);
#line 145
c_rt_lib0hash_set_value_dec(&___nl__5, ___get_global_const(90), ___nl__15);
#line 145
c_rt_lib0clear(&___nl__14);
#line 145
c_rt_lib0clear(&___nl__15);
#line 146
c_rt_lib0move(&___nl__14, module_checker_priv0save_block(&___nl__5));
#line 147
c_rt_lib0move(&___nl__15, c_rt_lib0hash_get_value_dec(___nl__9, ___get_global_const(89)));
#line 147
c_rt_lib0move(&___nl__17,___get_global_const(0));
#line 147
c_rt_lib0move(&___nl__18,___get_global_const(1));
#line 147
c_rt_lib0move(&___nl__19, c_rt_lib0array_len(___nl__15));
#line 147
label_70:
#line 147
c_rt_lib0move(&___nl__20, c_rt_lib0ge(___nl__17, ___nl__19));
#line 147
if(c_rt_lib0check_true_native(___nl__20)){ goto label_91;}
#line 147
c_rt_lib0move(&___nl__16, c_rt_lib0array_get(___nl__15, ___nl__17));
#line 148
c_rt_lib0move(&___nl__21, c_rt_lib0hash_get_value_dec(___nl__16, ___get_global_const(93)));
#line 148
c_rt_lib0move(&___nl__22, c_rt_lib0get_false());
#line 148
c_rt_lib0move(&___nl__23, c_rt_lib0get_false());
#line 148
c_rt_lib0delete(module_checker_priv0add_var(___nl__21, ___nl__22, ___nl__23, &___nl__5));
#line 148
c_rt_lib0clear(&___nl__23);
#line 148
c_rt_lib0clear(&___nl__22);
#line 148
c_rt_lib0clear(&___nl__21);
#line 149
c_rt_lib0move(&___nl__21, c_rt_lib0hash_get_value_dec(___nl__16, ___get_global_const(63)));
#line 149
c_rt_lib0delete(module_checker_priv0check_type(___nl__21, &___nl__5));
#line 149
c_rt_lib0clear(&___nl__21);
#line 150
c_rt_lib0move(&___nl__21, c_rt_lib0hash_get_value_dec(___nl__16, ___get_global_const(93)));
#line 150
c_rt_lib0move(&___nl__22, c_rt_lib0ov_mk_none(___get_global_const(788)));
#line 150
c_rt_lib0delete(module_checker_priv0use_var(___nl__21, ___nl__22, &___nl__5));
#line 150
c_rt_lib0clear(&___nl__22);
#line 150
c_rt_lib0clear(&___nl__21);
#line 151
c_rt_lib0move(&___nl__17, c_rt_lib0add_mod(___nl__17, ___nl__18));
#line 151
goto label_70;
#line 151
label_91:
#line 151
c_rt_lib0clear(&___nl__15);
#line 151
c_rt_lib0clear(&___nl__16);
#line 151
c_rt_lib0clear(&___nl__17);
#line 151
c_rt_lib0clear(&___nl__18);
#line 151
c_rt_lib0clear(&___nl__19);
#line 151
c_rt_lib0clear(&___nl__20);
#line 152
c_rt_lib0move(&___nl__15, c_rt_lib0hash_get_value_dec(___nl__9, ___get_global_const(201)));
#line 152
c_rt_lib0delete(module_checker_priv0check_cmd(___nl__15, &___nl__5));
#line 152
c_rt_lib0clear(&___nl__15);
#line 153
c_rt_lib0move(&___nl__15, c_rt_lib0hash_get_value_dec(___nl__9, ___get_global_const(89)));
#line 153
c_rt_lib0move(&___nl__17,___get_global_const(0));
#line 153
c_rt_lib0move(&___nl__18,___get_global_const(1));
#line 153
c_rt_lib0move(&___nl__19, c_rt_lib0array_len(___nl__15));
#line 153
label_105:
#line 153
c_rt_lib0move(&___nl__20, c_rt_lib0ge(___nl__17, ___nl__19));
#line 153
if(c_rt_lib0check_true_native(___nl__20)){ goto label_123;}
#line 153
c_rt_lib0move(&___nl__16, c_rt_lib0array_get(___nl__15, ___nl__17));
#line 154
c_rt_lib0move(&___nl__21, c_rt_lib0hash_get_value_dec(___nl__16, ___get_global_const(222)));
#line 154
c_rt_lib0move(&___nl__21, c_rt_lib0priv_is(___nl__21, ___get_global_const(5)));
#line 154
c_rt_lib0move(&___nl__21, c_rt_lib0not(___nl__21));
#line 154
if(c_rt_lib0check_true_native(___nl__21)){ goto label_119;}
#line 155
c_rt_lib0move(&___nl__22, c_rt_lib0hash_get_value_dec(___nl__16, ___get_global_const(93)));
#line 155
c_rt_lib0move(&___nl__23, c_rt_lib0ov_mk_none(___get_global_const(789)));
#line 155
c_rt_lib0delete(module_checker_priv0use_var(___nl__22, ___nl__23, &___nl__5));
#line 155
c_rt_lib0clear(&___nl__23);
#line 155
c_rt_lib0clear(&___nl__22);
#line 156
goto label_119;
#line 156
label_119:
#line 156
c_rt_lib0clear(&___nl__21);
#line 157
c_rt_lib0move(&___nl__17, c_rt_lib0add_mod(___nl__17, ___nl__18));
#line 157
goto label_105;
#line 157
label_123:
#line 157
c_rt_lib0clear(&___nl__15);
#line 157
c_rt_lib0clear(&___nl__16);
#line 157
c_rt_lib0clear(&___nl__17);
#line 157
c_rt_lib0clear(&___nl__18);
#line 157
c_rt_lib0clear(&___nl__19);
#line 157
c_rt_lib0clear(&___nl__20);
#line 158
c_rt_lib0delete(module_checker_priv0load_block(&___nl__5, ___nl__14));
#line 159
c_rt_lib0move(&___nl__15, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(90)));
#line 159
c_rt_lib0move(&___nl__15, c_rt_lib0hash_get_value_dec(___nl__15, ___get_global_const(190)));
#line 159
c_rt_lib0move(&___nl__15, c_rt_lib0not(___nl__15));
#line 159
c_rt_lib0move(&___nl__15, c_rt_lib0not(___nl__15));
#line 159
if(c_rt_lib0check_true_native(___nl__15)){ goto label_159;}
#line 161
c_rt_lib0move(&___nl__16, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(90)));
#line 161
c_rt_lib0move(&___nl__16, c_rt_lib0hash_get_value_dec(___nl__16, ___get_global_const(233)));
#line 161
c_rt_lib0move(&___nl__16, c_rt_lib0priv_is(___nl__16, ___get_global_const(192)));
#line 161
if(c_rt_lib0check_true_native(___nl__16)){ goto label_143;}
#line 161
c_rt_lib0move(&___nl__16, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(90)));
#line 161
c_rt_lib0move(&___nl__16, c_rt_lib0hash_get_value_dec(___nl__16, ___get_global_const(233)));
#line 161
c_rt_lib0move(&___nl__16, c_rt_lib0priv_is(___nl__16, ___get_global_const(779)));
#line 161
label_143:
#line 161
c_rt_lib0move(&___nl__16, c_rt_lib0not(___nl__16));
#line 161
if(c_rt_lib0check_true_native(___nl__16)){ goto label_156;}
#line 160
c_rt_lib0move(&___nl__17,___get_global_const(18));
#line 160
c_rt_lib0move(&___nl__17, c_rt_lib0get_ref_hash(___nl__5, ___nl__17));
#line 160
c_rt_lib0move(&___nl__18,___get_global_const(790));
#line 160
c_rt_lib0delete(module_checker_priv0add_error(&___nl__17, ___nl__18));
#line 160
c_rt_lib0clear(&___nl__18);
#line 160
c_rt_lib0move(&___nl__18,___get_global_const(18));
#line 160
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__5, ___nl__18, ___nl__17));
#line 160
c_rt_lib0clear(&___nl__18);
#line 160
c_rt_lib0clear(&___nl__17);
#line 160
goto label_156;
#line 160
label_156:
#line 160
c_rt_lib0clear(&___nl__16);
#line 162
goto label_159;
#line 162
label_159:
#line 162
c_rt_lib0clear(&___nl__15);
#line 163
c_rt_lib0move(&___nl__16, c_rt_lib0hash_get_value_dec(___nl__9, ___get_global_const(182)));
#line 163
c_rt_lib0move(&___nl__16, c_rt_lib0priv_is(___nl__16, ___get_global_const(183)));
#line 163
if(c_rt_lib0check_true_native(___nl__16)){ goto label_166;}
#line 163
c_rt_lib0move(&___nl__16,___get_global_const(2));
#line 163
goto label_168;
#line 163
label_166:
#line 163
c_rt_lib0move(&___nl__16, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(93)));
#line 163
label_168:
#line 163
c_rt_lib0move(&___nl__17, c_rt_lib0hash_get_value_dec(___nl__9, ___get_global_const(93)));
#line 163
c_rt_lib0move(&___nl__18, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(93)));
#line 163
c_rt_lib0move(&___nl__15, module_checker_priv0get_fun_key(___nl__16, ___nl__17, ___nl__18));
#line 163
c_rt_lib0clear(&___nl__18);
#line 163
c_rt_lib0clear(&___nl__17);
#line 163
c_rt_lib0clear(&___nl__16);
#line 164
c_rt_lib0move(&___nl__16, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(783)));
#line 164
c_rt_lib0move(&___nl__16, c_rt_lib0hash_get_value_dec(___nl__16, ___get_global_const(88)));
#line 164
c_rt_lib0delete(hash0set_value(&___nl__6, ___nl__15, ___nl__16));
#line 164
c_rt_lib0clear(&___nl__16);
#line 165
c_rt_lib0move(&___nl__16, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(783)));
#line 165
c_rt_lib0move(&___nl__16, c_rt_lib0hash_get_value_dec(___nl__16, ___get_global_const(88)));
#line 165
c_rt_lib0delete(hash0set_value(___ref___2, ___nl__15, ___nl__16));
#line 165
c_rt_lib0clear(&___nl__16);
#line 166
c_rt_lib0move(&___nl__16, c_rt_lib0hash_get_value_dec(___nl__9, ___get_global_const(182)));
#line 166
c_rt_lib0move(&___nl__16, c_rt_lib0priv_is(___nl__16, ___get_global_const(379)));
#line 166
c_rt_lib0move(&___nl__16, c_rt_lib0not(___nl__16));
#line 166
c_rt_lib0move(&___nl__16, c_rt_lib0not(___nl__16));
#line 166
if(c_rt_lib0check_true_native(___nl__16)){ goto label_192;}
#line 166
c_rt_lib0move(&___nl__17,___get_global_const(0));
#line 166
c_rt_lib0delete(hash0set_value(&___nl__7, ___nl__15, ___nl__17));
#line 166
c_rt_lib0clear(&___nl__17);
#line 166
goto label_192;
#line 166
label_192:
#line 166
c_rt_lib0clear(&___nl__16);
#line 167
c_rt_lib0move(&___nl__16, c_rt_lib0hash_mk(0));
#line 167
c_rt_lib0move(&___nl__17,___get_global_const(783));
#line 167
c_rt_lib0move(&___nl__17, c_rt_lib0get_ref_hash(___nl__5, ___nl__17));
#line 167
c_rt_lib0copy(&___nl__18, ___nl__16);
#line 167
c_rt_lib0hash_set_value_dec(&___nl__17, ___get_global_const(88), ___nl__18);
#line 167
c_rt_lib0move(&___nl__19,___get_global_const(783));
#line 167
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__5, ___nl__19, ___nl__17));
#line 167
c_rt_lib0clear(&___nl__19);
#line 167
c_rt_lib0clear(&___nl__16);
#line 167
c_rt_lib0clear(&___nl__17);
#line 167
c_rt_lib0clear(&___nl__18);
#line 167
c_rt_lib0clear(&___nl__14);
#line 167
c_rt_lib0clear(&___nl__15);
#line 168
c_rt_lib0move(&___nl__10, c_rt_lib0add_mod(___nl__10, ___nl__11));
#line 168
goto label_34;
#line 168
label_209:
#line 168
c_rt_lib0clear(&___nl__8);
#line 168
c_rt_lib0clear(&___nl__9);
#line 168
c_rt_lib0clear(&___nl__10);
#line 168
c_rt_lib0clear(&___nl__11);
#line 168
c_rt_lib0clear(&___nl__12);
#line 168
c_rt_lib0clear(&___nl__13);
#line 169
c_rt_lib0move(&___nl__8, c_rt_lib0hash_mk(0));
#line 170
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(150)));
#line 170
c_rt_lib0move(&___nl__11,___get_global_const(0));
#line 170
c_rt_lib0move(&___nl__12,___get_global_const(1));
#line 170
c_rt_lib0move(&___nl__13, c_rt_lib0array_len(___nl__9));
#line 170
label_221:
#line 170
c_rt_lib0move(&___nl__14, c_rt_lib0ge(___nl__11, ___nl__13));
#line 170
if(c_rt_lib0check_true_native(___nl__14)){ goto label_287;}
#line 170
c_rt_lib0move(&___nl__10, c_rt_lib0array_get(___nl__9, ___nl__11));
#line 171
c_rt_lib0move(&___nl__15, c_rt_lib0hash_get_value_dec(___nl__10, ___get_global_const(134)));
#line 171
c_rt_lib0move(&___nl__16,___get_global_const(18));
#line 171
c_rt_lib0move(&___nl__16, c_rt_lib0get_ref_hash(___nl__5, ___nl__16));
#line 171
c_rt_lib0copy(&___nl__17, ___nl__15);
#line 171
c_rt_lib0hash_set_value_dec(&___nl__16, ___get_global_const(785), ___nl__17);
#line 171
c_rt_lib0move(&___nl__18,___get_global_const(18));
#line 171
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__5, ___nl__18, ___nl__16));
#line 171
c_rt_lib0clear(&___nl__18);
#line 171
c_rt_lib0clear(&___nl__15);
#line 171
c_rt_lib0clear(&___nl__16);
#line 171
c_rt_lib0clear(&___nl__17);
#line 172
c_rt_lib0move(&___nl__16, c_rt_lib0hash_get_value_dec(___nl__10, ___get_global_const(93)));
#line 172
c_rt_lib0move(&___nl__15, hash0has_key(___nl__8, ___nl__16));
#line 172
c_rt_lib0clear(&___nl__16);
#line 172
c_rt_lib0move(&___nl__15, c_rt_lib0not(___nl__15));
#line 172
if(c_rt_lib0check_true_native(___nl__15)){ goto label_254;}
#line 172
c_rt_lib0move(&___nl__16,___get_global_const(18));
#line 172
c_rt_lib0move(&___nl__16, c_rt_lib0get_ref_hash(___nl__5, ___nl__16));
#line 172
c_rt_lib0move(&___nl__17,___get_global_const(791));
#line 172
c_rt_lib0move(&___nl__18, c_rt_lib0hash_get_value_dec(___nl__10, ___get_global_const(93)));
#line 172
c_rt_lib0move(&___nl__17, c_rt_lib0concat_add(___nl__17, ___nl__18));
#line 172
c_rt_lib0clear(&___nl__18);
#line 172
c_rt_lib0delete(module_checker_priv0add_warning(&___nl__16, ___nl__17));
#line 172
c_rt_lib0clear(&___nl__17);
#line 172
c_rt_lib0move(&___nl__17,___get_global_const(18));
#line 172
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__5, ___nl__17, ___nl__16));
#line 172
c_rt_lib0clear(&___nl__17);
#line 172
c_rt_lib0clear(&___nl__16);
#line 172
goto label_254;
#line 172
label_254:
#line 172
c_rt_lib0clear(&___nl__15);
#line 174
c_rt_lib0move(&___nl__16, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(783)));
#line 174
c_rt_lib0move(&___nl__16, c_rt_lib0hash_get_value_dec(___nl__16, ___get_global_const(132)));
#line 174
c_rt_lib0move(&___nl__17, c_rt_lib0hash_get_value_dec(___nl__10, ___get_global_const(93)));
#line 174
c_rt_lib0move(&___nl__15, hash0has_key(___nl__16, ___nl__17));
#line 174
c_rt_lib0clear(&___nl__17);
#line 174
c_rt_lib0clear(&___nl__16);
#line 174
c_rt_lib0move(&___nl__15, c_rt_lib0not(___nl__15));
#line 174
c_rt_lib0move(&___nl__15, c_rt_lib0not(___nl__15));
#line 174
if(c_rt_lib0check_true_native(___nl__15)){ goto label_278;}
#line 173
c_rt_lib0move(&___nl__16,___get_global_const(18));
#line 173
c_rt_lib0move(&___nl__16, c_rt_lib0get_ref_hash(___nl__5, ___nl__16));
#line 173
c_rt_lib0move(&___nl__17,___get_global_const(792));
#line 173
c_rt_lib0move(&___nl__18, c_rt_lib0hash_get_value_dec(___nl__10, ___get_global_const(93)));
#line 173
c_rt_lib0move(&___nl__17, c_rt_lib0concat_add(___nl__17, ___nl__18));
#line 173
c_rt_lib0clear(&___nl__18);
#line 173
c_rt_lib0delete(module_checker_priv0add_warning(&___nl__16, ___nl__17));
#line 173
c_rt_lib0clear(&___nl__17);
#line 173
c_rt_lib0move(&___nl__17,___get_global_const(18));
#line 173
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__5, ___nl__17, ___nl__16));
#line 173
c_rt_lib0clear(&___nl__17);
#line 173
c_rt_lib0clear(&___nl__16);
#line 173
goto label_278;
#line 173
label_278:
#line 173
c_rt_lib0clear(&___nl__15);
#line 175
c_rt_lib0move(&___nl__15, c_rt_lib0hash_get_value_dec(___nl__10, ___get_global_const(93)));
#line 175
c_rt_lib0move(&___nl__16, c_rt_lib0get_true());
#line 175
c_rt_lib0delete(hash0set_value(&___nl__8, ___nl__15, ___nl__16));
#line 175
c_rt_lib0clear(&___nl__16);
#line 175
c_rt_lib0clear(&___nl__15);
#line 176
c_rt_lib0move(&___nl__11, c_rt_lib0add_mod(___nl__11, ___nl__12));
#line 176
goto label_221;
#line 176
label_287:
#line 176
c_rt_lib0clear(&___nl__9);
#line 176
c_rt_lib0clear(&___nl__10);
#line 176
c_rt_lib0clear(&___nl__11);
#line 176
c_rt_lib0clear(&___nl__12);
#line 176
c_rt_lib0clear(&___nl__13);
#line 176
c_rt_lib0clear(&___nl__14);
#line 177
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(783)));
#line 177
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__9, ___get_global_const(132)));
#line 177
c_rt_lib0move(&___nl__12, c_rt_lib0init_iter(___nl__9));
#line 177
label_297:
#line 177
c_rt_lib0move(&___nl__10, c_rt_lib0is_end_hash(___nl__12));
#line 177
if(c_rt_lib0check_true_native(___nl__10)){ goto label_343;}
#line 177
c_rt_lib0move(&___nl__10, c_rt_lib0get_key_iter(___nl__12));
#line 177
c_rt_lib0move(&___nl__11, c_rt_lib0hash_get_value(___nl__9, ___nl__10));
#line 178
c_rt_lib0move(&___nl__13,___get_global_const(18));
#line 178
c_rt_lib0move(&___nl__13, c_rt_lib0get_ref_hash(___nl__5, ___nl__13));
#line 178
c_rt_lib0copy(&___nl__14, ___nl__11);
#line 178
c_rt_lib0hash_set_value_dec(&___nl__13, ___get_global_const(785), ___nl__14);
#line 178
c_rt_lib0move(&___nl__15,___get_global_const(18));
#line 178
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__5, ___nl__15, ___nl__13));
#line 178
c_rt_lib0clear(&___nl__15);
#line 178
c_rt_lib0clear(&___nl__13);
#line 178
c_rt_lib0clear(&___nl__14);
#line 179
c_rt_lib0move(&___nl__13, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(93)));
#line 179
c_rt_lib0move(&___nl__13, c_rt_lib0eq(___nl__13, ___nl__10));
#line 179
c_rt_lib0move(&___nl__13, c_rt_lib0not(___nl__13));
#line 179
if(c_rt_lib0check_true_native(___nl__13)){ goto label_318;}
#line 179
c_rt_lib0clear(&___nl__13);
#line 179
goto label_340;
#line 179
goto label_318;
#line 179
label_318:
#line 179
c_rt_lib0clear(&___nl__13);
#line 180
c_rt_lib0move(&___nl__13, hash0has_key(___nl__8, ___nl__10));
#line 180
c_rt_lib0move(&___nl__13, c_rt_lib0not(___nl__13));
#line 180
c_rt_lib0move(&___nl__13, c_rt_lib0not(___nl__13));
#line 180
if(c_rt_lib0check_true_native(___nl__13)){ goto label_338;}
#line 180
c_rt_lib0move(&___nl__14,___get_global_const(18));
#line 180
c_rt_lib0move(&___nl__14, c_rt_lib0get_ref_hash(___nl__5, ___nl__14));
#line 180
c_rt_lib0move(&___nl__15,___get_global_const(793));
#line 180
c_rt_lib0move(&___nl__15, c_rt_lib0concat_add(___nl__15, ___nl__10));
#line 180
c_rt_lib0move(&___nl__16,___get_global_const(794));
#line 180
c_rt_lib0move(&___nl__15, c_rt_lib0concat_add(___nl__15, ___nl__16));
#line 180
c_rt_lib0clear(&___nl__16);
#line 180
c_rt_lib0delete(module_checker_priv0add_error(&___nl__14, ___nl__15));
#line 180
c_rt_lib0clear(&___nl__15);
#line 180
c_rt_lib0move(&___nl__15,___get_global_const(18));
#line 180
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__5, ___nl__15, ___nl__14));
#line 180
c_rt_lib0clear(&___nl__15);
#line 180
c_rt_lib0clear(&___nl__14);
#line 180
goto label_338;
#line 180
label_338:
#line 180
c_rt_lib0clear(&___nl__13);
#line 180
label_340:
#line 181
c_rt_lib0move(&___nl__12, c_rt_lib0next_iter(___nl__12));
#line 181
goto label_297;
#line 181
label_343:
#line 181
c_rt_lib0clear(&___nl__9);
#line 181
c_rt_lib0clear(&___nl__10);
#line 181
c_rt_lib0clear(&___nl__11);
#line 181
c_rt_lib0clear(&___nl__12);
#line 182
c_rt_lib0copy(&___nl__9, ___nl__1);
#line 182
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__9));
#line 182
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__9));
#line 182
if(c_rt_lib0check_true_native(___nl__9)){ goto label_447;}
#line 183
c_rt_lib0copy(&___nl__10, ___nl__7);
#line 184
c_rt_lib0move(&___nl__13, c_rt_lib0init_iter(___nl__10));
#line 184
label_354:
#line 184
c_rt_lib0move(&___nl__11, c_rt_lib0is_end_hash(___nl__13));
#line 184
if(c_rt_lib0check_true_native(___nl__11)){ goto label_362;}
#line 184
c_rt_lib0move(&___nl__11, c_rt_lib0get_key_iter(___nl__13));
#line 184
c_rt_lib0move(&___nl__12, c_rt_lib0hash_get_value(___nl__10, ___nl__11));
#line 185
c_rt_lib0delete(module_checker_priv0set_used_function(___nl__11, ___nl__6, &___nl__7));
#line 186
c_rt_lib0move(&___nl__13, c_rt_lib0next_iter(___nl__13));
#line 186
goto label_354;
#line 186
label_362:
#line 186
c_rt_lib0clear(&___nl__11);
#line 186
c_rt_lib0clear(&___nl__12);
#line 186
c_rt_lib0clear(&___nl__13);
#line 187
c_rt_lib0move(&___nl__11, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(786)));
#line 187
c_rt_lib0move(&___nl__13,___get_global_const(0));
#line 187
c_rt_lib0move(&___nl__14,___get_global_const(1));
#line 187
c_rt_lib0move(&___nl__15, c_rt_lib0array_len(___nl__11));
#line 187
label_370:
#line 187
c_rt_lib0move(&___nl__16, c_rt_lib0ge(___nl__13, ___nl__15));
#line 187
if(c_rt_lib0check_true_native(___nl__16)){ goto label_438;}
#line 187
c_rt_lib0move(&___nl__12, c_rt_lib0array_get(___nl__11, ___nl__13));
#line 188
c_rt_lib0move(&___nl__17, c_rt_lib0hash_get_value_dec(___nl__12, ___get_global_const(182)));
#line 188
c_rt_lib0move(&___nl__17, c_rt_lib0priv_is(___nl__17, ___get_global_const(183)));
#line 188
c_rt_lib0move(&___nl__17, c_rt_lib0not(___nl__17));
#line 188
if(c_rt_lib0check_true_native(___nl__17)){ goto label_381;}
#line 188
c_rt_lib0clear(&___nl__17);
#line 188
goto label_435;
#line 188
goto label_381;
#line 188
label_381:
#line 188
c_rt_lib0clear(&___nl__17);
#line 189
c_rt_lib0move(&___nl__19, c_rt_lib0hash_get_value_dec(___nl__12, ___get_global_const(182)));
#line 189
c_rt_lib0move(&___nl__19, c_rt_lib0priv_is(___nl__19, ___get_global_const(183)));
#line 189
if(c_rt_lib0check_true_native(___nl__19)){ goto label_388;}
#line 189
c_rt_lib0move(&___nl__19,___get_global_const(2));
#line 189
goto label_390;
#line 189
label_388:
#line 189
c_rt_lib0move(&___nl__19, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(93)));
#line 189
label_390:
#line 189
c_rt_lib0move(&___nl__20, c_rt_lib0hash_get_value_dec(___nl__12, ___get_global_const(93)));
#line 189
c_rt_lib0move(&___nl__21, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(93)));
#line 189
c_rt_lib0move(&___nl__18, module_checker_priv0get_fun_key(___nl__19, ___nl__20, ___nl__21));
#line 189
c_rt_lib0clear(&___nl__21);
#line 189
c_rt_lib0clear(&___nl__20);
#line 189
c_rt_lib0clear(&___nl__19);
#line 189
c_rt_lib0move(&___nl__17, hash0has_key(___nl__7, ___nl__18));
#line 189
c_rt_lib0clear(&___nl__18);
#line 189
c_rt_lib0move(&___nl__17, c_rt_lib0not(___nl__17));
#line 189
if(c_rt_lib0check_true_native(___nl__17)){ goto label_404;}
#line 189
c_rt_lib0clear(&___nl__17);
#line 189
goto label_435;
#line 189
goto label_404;
#line 189
label_404:
#line 189
c_rt_lib0clear(&___nl__17);
#line 190
c_rt_lib0move(&___nl__17, c_rt_lib0hash_get_value_dec(___nl__12, ___get_global_const(134)));
#line 190
c_rt_lib0move(&___nl__18,___get_global_const(18));
#line 190
c_rt_lib0move(&___nl__18, c_rt_lib0get_ref_hash(___nl__5, ___nl__18));
#line 190
c_rt_lib0copy(&___nl__19, ___nl__17);
#line 190
c_rt_lib0hash_set_value_dec(&___nl__18, ___get_global_const(785), ___nl__19);
#line 190
c_rt_lib0move(&___nl__20,___get_global_const(18));
#line 190
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__5, ___nl__20, ___nl__18));
#line 190
c_rt_lib0clear(&___nl__20);
#line 190
c_rt_lib0clear(&___nl__17);
#line 190
c_rt_lib0clear(&___nl__18);
#line 190
c_rt_lib0clear(&___nl__19);
#line 191
c_rt_lib0move(&___nl__17,___get_global_const(18));
#line 191
c_rt_lib0move(&___nl__17, c_rt_lib0get_ref_hash(___nl__5, ___nl__17));
#line 191
c_rt_lib0move(&___nl__18,___get_global_const(795));
#line 191
c_rt_lib0move(&___nl__19, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(93)));
#line 191
c_rt_lib0move(&___nl__18, c_rt_lib0concat_add(___nl__18, ___nl__19));
#line 191
c_rt_lib0clear(&___nl__19);
#line 191
c_rt_lib0move(&___nl__19,___get_global_const(184));
#line 191
c_rt_lib0move(&___nl__18, c_rt_lib0concat_add(___nl__18, ___nl__19));
#line 191
c_rt_lib0clear(&___nl__19);
#line 191
c_rt_lib0move(&___nl__19, c_rt_lib0hash_get_value_dec(___nl__12, ___get_global_const(93)));
#line 191
c_rt_lib0move(&___nl__18, c_rt_lib0concat_add(___nl__18, ___nl__19));
#line 191
c_rt_lib0clear(&___nl__19);
#line 191
c_rt_lib0delete(module_checker_priv0add_warning(&___nl__17, ___nl__18));
#line 191
c_rt_lib0clear(&___nl__18);
#line 191
c_rt_lib0move(&___nl__18,___get_global_const(18));
#line 191
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__5, ___nl__18, ___nl__17));
#line 191
c_rt_lib0clear(&___nl__18);
#line 191
c_rt_lib0clear(&___nl__17);
#line 191
label_435:
#line 192
c_rt_lib0move(&___nl__13, c_rt_lib0add_mod(___nl__13, ___nl__14));
#line 192
goto label_370;
#line 192
label_438:
#line 192
c_rt_lib0clear(&___nl__11);
#line 192
c_rt_lib0clear(&___nl__12);
#line 192
c_rt_lib0clear(&___nl__13);
#line 192
c_rt_lib0clear(&___nl__14);
#line 192
c_rt_lib0clear(&___nl__15);
#line 192
c_rt_lib0clear(&___nl__16);
#line 192
c_rt_lib0clear(&___nl__10);
#line 193
goto label_447;
#line 193
label_447:
#line 193
c_rt_lib0clear(&___nl__9);
#line 194
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(18)));
#line 194
c_rt_lib0clear(&___nl__0);
#line 194
c_rt_lib0clear(&___nl__1);
#line 194
c_rt_lib0clear(&___nl__3);
#line 194
c_rt_lib0clear(&___nl__4);
#line 194
c_rt_lib0clear(&___nl__5);
#line 194
c_rt_lib0clear(&___nl__6);
#line 194
c_rt_lib0clear(&___nl__7);
#line 194
c_rt_lib0clear(&___nl__8);
#line 194
return ___nl__9;
#line 194
c_rt_lib0clear(&___nl__9);
#line 194
c_rt_lib0clear(&___nl__3);
#line 194
c_rt_lib0clear(&___nl__4);
#line 194
c_rt_lib0clear(&___nl__5);
#line 194
c_rt_lib0clear(&___nl__6);
#line 194
c_rt_lib0clear(&___nl__7);
#line 194
c_rt_lib0clear(&___nl__8);
#line 194
c_rt_lib0clear(&___nl__0);
#line 194
c_rt_lib0clear(&___nl__1);
#line 194
return NULL;
}

ImmT module_checker0check_used_functions0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 4, "module_checker0check_used_functions");
return module_checker0check_used_functions(_tab[0], _tab[1], _tab[2], &_tab[3]);}
ImmT module_checker0check_used_functions(ImmT ___nl__0,ImmT ___nl__1,ImmT ___nl__2,ImmT * ___ref___3) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
c_rt_lib0arg_val(___nl__2);
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
#line 198
c_rt_lib0copy(&___nl__4, ___nl__0);
#line 199
c_rt_lib0move(&___nl__7, c_rt_lib0init_iter(___nl__4));
#line 199
label_2:
#line 199
c_rt_lib0move(&___nl__5, c_rt_lib0is_end_hash(___nl__7));
#line 199
if(c_rt_lib0check_true_native(___nl__5)){ goto label_39;}
#line 199
c_rt_lib0move(&___nl__5, c_rt_lib0get_key_iter(___nl__7));
#line 199
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value(___nl__4, ___nl__5));
#line 200
c_rt_lib0move(&___nl__8, hash0has_key(___nl__1, ___nl__5));
#line 200
c_rt_lib0move(&___nl__8, c_rt_lib0not(___nl__8));
#line 200
c_rt_lib0move(&___nl__8, c_rt_lib0not(___nl__8));
#line 200
if(c_rt_lib0check_true_native(___nl__8)){ goto label_33;}
#line 201
c_rt_lib0move(&___nl__9,___get_global_const(113));
#line 201
c_rt_lib0move(&___nl__9, c_rt_lib0get_ref_hash(*___ref___3, ___nl__9));
#line 201
c_rt_lib0move(&___nl__11,___get_global_const(796));
#line 201
c_rt_lib0move(&___nl__12,___get_global_const(0));
#line 201
c_rt_lib0move(&___nl__13,___get_global_const(0));
#line 201
c_rt_lib0move(&___nl__14,___get_global_const(147));
#line 201
c_rt_lib0move(&___nl__15, c_rt_lib0ov_mk_none(___get_global_const(177)));
#line 201
c_rt_lib0move(&___nl__10, c_rt_lib0hash_mk(5, ___get_global_const(137), ___nl__11, ___get_global_const(134), ___nl__12, ___get_global_const(179), ___nl__13, ___get_global_const(132), ___nl__14, ___get_global_const(63), ___nl__15));
#line 201
c_rt_lib0clear(&___nl__11);
#line 201
c_rt_lib0clear(&___nl__12);
#line 201
c_rt_lib0clear(&___nl__13);
#line 201
c_rt_lib0clear(&___nl__14);
#line 201
c_rt_lib0clear(&___nl__15);
#line 201
c_rt_lib0delete(array0push(&___nl__9, ___nl__10));
#line 201
c_rt_lib0clear(&___nl__10);
#line 201
c_rt_lib0move(&___nl__10,___get_global_const(113));
#line 201
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___3, ___nl__10, ___nl__9));
#line 201
c_rt_lib0clear(&___nl__10);
#line 201
c_rt_lib0clear(&___nl__9);
#line 202
c_rt_lib0clear(&___nl__8);
#line 202
goto label_36;
#line 203
goto label_33;
#line 203
label_33:
#line 203
c_rt_lib0clear(&___nl__8);
#line 204
c_rt_lib0delete(module_checker_priv0set_used_function(___nl__5, ___nl__1, &___nl__0));
#line 204
label_36:
#line 205
c_rt_lib0move(&___nl__7, c_rt_lib0next_iter(___nl__7));
#line 205
goto label_2;
#line 205
label_39:
#line 205
c_rt_lib0clear(&___nl__5);
#line 205
c_rt_lib0clear(&___nl__6);
#line 205
c_rt_lib0clear(&___nl__7);
#line 206
c_rt_lib0move(&___nl__6,___get_global_const(0));
#line 206
c_rt_lib0move(&___nl__7,___get_global_const(1));
#line 206
c_rt_lib0move(&___nl__8, c_rt_lib0array_len(___nl__2));
#line 206
label_46:
#line 206
c_rt_lib0move(&___nl__9, c_rt_lib0ge(___nl__6, ___nl__8));
#line 206
if(c_rt_lib0check_true_native(___nl__9)){ goto label_114;}
#line 206
c_rt_lib0move(&___nl__5, c_rt_lib0array_get(___nl__2, ___nl__6));
#line 207
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(786)));
#line 207
c_rt_lib0move(&___nl__12,___get_global_const(0));
#line 207
c_rt_lib0move(&___nl__13,___get_global_const(1));
#line 207
c_rt_lib0move(&___nl__14, c_rt_lib0array_len(___nl__10));
#line 207
label_54:
#line 207
c_rt_lib0move(&___nl__15, c_rt_lib0ge(___nl__12, ___nl__14));
#line 207
if(c_rt_lib0check_true_native(___nl__15)){ goto label_105;}
#line 207
c_rt_lib0move(&___nl__11, c_rt_lib0array_get(___nl__10, ___nl__12));
#line 208
c_rt_lib0move(&___nl__17, c_rt_lib0hash_get_value_dec(___nl__11, ___get_global_const(182)));
#line 208
c_rt_lib0move(&___nl__17, c_rt_lib0priv_is(___nl__17, ___get_global_const(183)));
#line 208
if(c_rt_lib0check_true_native(___nl__17)){ goto label_63;}
#line 208
c_rt_lib0move(&___nl__17,___get_global_const(2));
#line 208
goto label_65;
#line 208
label_63:
#line 208
c_rt_lib0move(&___nl__17, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(93)));
#line 208
label_65:
#line 208
c_rt_lib0move(&___nl__18, c_rt_lib0hash_get_value_dec(___nl__11, ___get_global_const(93)));
#line 208
c_rt_lib0move(&___nl__19, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(93)));
#line 208
c_rt_lib0move(&___nl__16, module_checker_priv0get_fun_key(___nl__17, ___nl__18, ___nl__19));
#line 208
c_rt_lib0clear(&___nl__19);
#line 208
c_rt_lib0clear(&___nl__18);
#line 208
c_rt_lib0clear(&___nl__17);
#line 209
c_rt_lib0move(&___nl__17, hash0has_key(___nl__0, ___nl__16));
#line 209
c_rt_lib0move(&___nl__17, c_rt_lib0not(___nl__17));
#line 209
if(c_rt_lib0check_true_native(___nl__17)){ goto label_79;}
#line 209
c_rt_lib0clear(&___nl__16);
#line 209
c_rt_lib0clear(&___nl__17);
#line 209
goto label_102;
#line 209
goto label_79;
#line 209
label_79:
#line 209
c_rt_lib0clear(&___nl__17);
#line 210
c_rt_lib0move(&___nl__17,___get_global_const(113));
#line 210
c_rt_lib0move(&___nl__17, c_rt_lib0get_ref_hash(*___ref___3, ___nl__17));
#line 210
c_rt_lib0move(&___nl__19,___get_global_const(795));
#line 210
c_rt_lib0move(&___nl__19, c_rt_lib0concat_add(___nl__19, ___nl__16));
#line 210
c_rt_lib0move(&___nl__20, c_rt_lib0hash_get_value_dec(___nl__11, ___get_global_const(134)));
#line 210
c_rt_lib0move(&___nl__21,___get_global_const(0));
#line 210
c_rt_lib0move(&___nl__22, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(93)));
#line 210
c_rt_lib0move(&___nl__23, c_rt_lib0ov_mk_none(___get_global_const(177)));
#line 210
c_rt_lib0move(&___nl__18, c_rt_lib0hash_mk(5, ___get_global_const(137), ___nl__19, ___get_global_const(134), ___nl__20, ___get_global_const(179), ___nl__21, ___get_global_const(132), ___nl__22, ___get_global_const(63), ___nl__23));
#line 210
c_rt_lib0clear(&___nl__19);
#line 210
c_rt_lib0clear(&___nl__20);
#line 210
c_rt_lib0clear(&___nl__21);
#line 210
c_rt_lib0clear(&___nl__22);
#line 210
c_rt_lib0clear(&___nl__23);
#line 210
c_rt_lib0delete(array0push(&___nl__17, ___nl__18));
#line 210
c_rt_lib0clear(&___nl__18);
#line 210
c_rt_lib0move(&___nl__18,___get_global_const(113));
#line 210
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___3, ___nl__18, ___nl__17));
#line 210
c_rt_lib0clear(&___nl__18);
#line 210
c_rt_lib0clear(&___nl__17);
#line 210
c_rt_lib0clear(&___nl__16);
#line 210
label_102:
#line 211
c_rt_lib0move(&___nl__12, c_rt_lib0add_mod(___nl__12, ___nl__13));
#line 211
goto label_54;
#line 211
label_105:
#line 211
c_rt_lib0clear(&___nl__10);
#line 211
c_rt_lib0clear(&___nl__11);
#line 211
c_rt_lib0clear(&___nl__12);
#line 211
c_rt_lib0clear(&___nl__13);
#line 211
c_rt_lib0clear(&___nl__14);
#line 211
c_rt_lib0clear(&___nl__15);
#line 212
c_rt_lib0move(&___nl__6, c_rt_lib0add_mod(___nl__6, ___nl__7));
#line 212
goto label_46;
#line 212
label_114:
#line 212
c_rt_lib0clear(&___nl__5);
#line 212
c_rt_lib0clear(&___nl__6);
#line 212
c_rt_lib0clear(&___nl__7);
#line 212
c_rt_lib0clear(&___nl__8);
#line 212
c_rt_lib0clear(&___nl__9);
#line 212
c_rt_lib0clear(&___nl__4);
#line 212
c_rt_lib0clear(&___nl__0);
#line 212
c_rt_lib0clear(&___nl__1);
#line 212
c_rt_lib0clear(&___nl__2);
#line 212
return NULL;
}

ImmT module_checker_priv0check_types_imported(ImmT ___nl__0,ImmT * ___ref___1) {
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
#line 216
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__0, ___get_global_const(797)));
#line 216
if(c_rt_lib0check_true_native(___nl__2)){ goto label_21;}
#line 217
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__0, ___get_global_const(798)));
#line 217
if(c_rt_lib0check_true_native(___nl__2)){ goto label_23;}
#line 219
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__0, ___get_global_const(799)));
#line 219
if(c_rt_lib0check_true_native(___nl__2)){ goto label_28;}
#line 221
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__0, ___get_global_const(800)));
#line 221
if(c_rt_lib0check_true_native(___nl__2)){ goto label_33;}
#line 225
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__0, ___get_global_const(801)));
#line 225
if(c_rt_lib0check_true_native(___nl__2)){ goto label_50;}
#line 234
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__0, ___get_global_const(802)));
#line 234
if(c_rt_lib0check_true_native(___nl__2)){ goto label_96;}
#line 235
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__0, ___get_global_const(803)));
#line 235
if(c_rt_lib0check_true_native(___nl__2)){ goto label_98;}
#line 236
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__0, ___get_global_const(804)));
#line 236
if(c_rt_lib0check_true_native(___nl__2)){ goto label_100;}
#line 243
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__0, ___get_global_const(805)));
#line 243
if(c_rt_lib0check_true_native(___nl__2)){ goto label_132;}
#line 243
c_rt_lib0move(&___nl__2,___get_global_const(91));
#line 243
c_rt_lib0move(&___nl__2, c_rt_lib0array_mk(2, ___nl__2, ___nl__0));
#line 243
nl_die_arg(___nl__2);
#line 216
label_21:
#line 217
goto label_134;
#line 217
label_23:
#line 217
c_rt_lib0move(&___nl__3, c_rt_lib0priv_as(___nl__0, ___get_global_const(798)));
#line 218
c_rt_lib0delete(module_checker_priv0check_types_imported(___nl__3, ___ref___1));
#line 218
c_rt_lib0clear(&___nl__3);
#line 219
goto label_134;
#line 219
label_28:
#line 219
c_rt_lib0move(&___nl__3, c_rt_lib0priv_as(___nl__0, ___get_global_const(799)));
#line 220
c_rt_lib0delete(module_checker_priv0check_types_imported(___nl__3, ___ref___1));
#line 220
c_rt_lib0clear(&___nl__3);
#line 221
goto label_134;
#line 221
label_33:
#line 221
c_rt_lib0move(&___nl__3, c_rt_lib0priv_as(___nl__0, ___get_global_const(800)));
#line 222
c_rt_lib0move(&___nl__6, c_rt_lib0init_iter(___nl__3));
#line 222
label_36:
#line 222
c_rt_lib0move(&___nl__4, c_rt_lib0is_end_hash(___nl__6));
#line 222
if(c_rt_lib0check_true_native(___nl__4)){ goto label_44;}
#line 222
c_rt_lib0move(&___nl__4, c_rt_lib0get_key_iter(___nl__6));
#line 222
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value(___nl__3, ___nl__4));
#line 223
c_rt_lib0delete(module_checker_priv0check_types_imported(___nl__5, ___ref___1));
#line 224
c_rt_lib0move(&___nl__6, c_rt_lib0next_iter(___nl__6));
#line 224
goto label_36;
#line 224
label_44:
#line 224
c_rt_lib0clear(&___nl__4);
#line 224
c_rt_lib0clear(&___nl__5);
#line 224
c_rt_lib0clear(&___nl__6);
#line 224
c_rt_lib0clear(&___nl__3);
#line 225
goto label_134;
#line 225
label_50:
#line 225
c_rt_lib0move(&___nl__3, c_rt_lib0priv_as(___nl__0, ___get_global_const(801)));
#line 226
c_rt_lib0move(&___nl__5,___get_global_const(185));
#line 226
c_rt_lib0move(&___nl__4, string0index2(___nl__3, ___nl__5));
#line 226
c_rt_lib0clear(&___nl__5);
#line 227
c_rt_lib0move(&___nl__5,___get_global_const(0));
#line 227
c_rt_lib0move(&___nl__5, c_rt_lib0ge(___nl__4, ___nl__5));
#line 227
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 227
if(c_rt_lib0check_true_native(___nl__5)){ goto label_76;}
#line 228
c_rt_lib0move(&___nl__7,___get_global_const(0));
#line 228
c_rt_lib0move(&___nl__6, string0substr(___nl__3, ___nl__7, ___nl__4));
#line 228
c_rt_lib0clear(&___nl__7);
#line 229
c_rt_lib0move(&___nl__8,___get_global_const(6));
#line 229
c_rt_lib0move(&___nl__8, c_rt_lib0add(___nl__4, ___nl__8));
#line 229
c_rt_lib0move(&___nl__9, string0length(___nl__3));
#line 229
c_rt_lib0move(&___nl__9, c_rt_lib0sub_mod(___nl__9, ___nl__4));
#line 229
c_rt_lib0move(&___nl__10,___get_global_const(6));
#line 229
c_rt_lib0move(&___nl__9, c_rt_lib0sub_mod(___nl__9, ___nl__10));
#line 229
c_rt_lib0clear(&___nl__10);
#line 229
c_rt_lib0move(&___nl__7, string0substr(___nl__3, ___nl__8, ___nl__9));
#line 229
c_rt_lib0clear(&___nl__9);
#line 229
c_rt_lib0clear(&___nl__8);
#line 230
c_rt_lib0delete(module_checker_priv0add_fun_used(___nl__6, ___nl__7, ___ref___1));
#line 230
c_rt_lib0clear(&___nl__6);
#line 230
c_rt_lib0clear(&___nl__7);
#line 231
goto label_91;
#line 231
label_76:
#line 232
c_rt_lib0move(&___nl__6,___get_global_const(18));
#line 232
c_rt_lib0move(&___nl__6, c_rt_lib0get_ref_hash(*___ref___1, ___nl__6));
#line 232
c_rt_lib0move(&___nl__7,___get_global_const(806));
#line 232
c_rt_lib0move(&___nl__7, c_rt_lib0concat_add(___nl__7, ___nl__3));
#line 232
c_rt_lib0move(&___nl__8,___get_global_const(807));
#line 232
c_rt_lib0move(&___nl__7, c_rt_lib0concat_add(___nl__7, ___nl__8));
#line 232
c_rt_lib0clear(&___nl__8);
#line 232
c_rt_lib0delete(module_checker_priv0add_error(&___nl__6, ___nl__7));
#line 232
c_rt_lib0clear(&___nl__7);
#line 232
c_rt_lib0move(&___nl__7,___get_global_const(18));
#line 232
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___1, ___nl__7, ___nl__6));
#line 232
c_rt_lib0clear(&___nl__7);
#line 232
c_rt_lib0clear(&___nl__6);
#line 233
goto label_91;
#line 233
label_91:
#line 233
c_rt_lib0clear(&___nl__5);
#line 233
c_rt_lib0clear(&___nl__4);
#line 233
c_rt_lib0clear(&___nl__3);
#line 234
goto label_134;
#line 234
label_96:
#line 235
goto label_134;
#line 235
label_98:
#line 236
goto label_134;
#line 236
label_100:
#line 236
c_rt_lib0move(&___nl__3, c_rt_lib0priv_as(___nl__0, ___get_global_const(804)));
#line 237
c_rt_lib0move(&___nl__6, c_rt_lib0init_iter(___nl__3));
#line 237
label_103:
#line 237
c_rt_lib0move(&___nl__4, c_rt_lib0is_end_hash(___nl__6));
#line 237
if(c_rt_lib0check_true_native(___nl__4)){ goto label_126;}
#line 237
c_rt_lib0move(&___nl__4, c_rt_lib0get_key_iter(___nl__6));
#line 237
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value(___nl__3, ___nl__4));
#line 238
c_rt_lib0move(&___nl__7, c_rt_lib0priv_is(___nl__5, ___get_global_const(808)));
#line 238
if(c_rt_lib0check_true_native(___nl__7)){ goto label_115;}
#line 239
c_rt_lib0move(&___nl__7, c_rt_lib0priv_is(___nl__5, ___get_global_const(809)));
#line 239
if(c_rt_lib0check_true_native(___nl__7)){ goto label_117;}
#line 239
c_rt_lib0move(&___nl__7,___get_global_const(91));
#line 239
c_rt_lib0move(&___nl__7, c_rt_lib0array_mk(2, ___nl__7, ___nl__5));
#line 239
nl_die_arg(___nl__7);
#line 238
label_115:
#line 239
goto label_122;
#line 239
label_117:
#line 239
c_rt_lib0move(&___nl__8, c_rt_lib0priv_as(___nl__5, ___get_global_const(809)));
#line 240
c_rt_lib0delete(module_checker_priv0check_types_imported(___nl__8, ___ref___1));
#line 240
c_rt_lib0clear(&___nl__8);
#line 241
goto label_122;
#line 241
label_122:
#line 241
c_rt_lib0clear(&___nl__7);
#line 242
c_rt_lib0move(&___nl__6, c_rt_lib0next_iter(___nl__6));
#line 242
goto label_103;
#line 242
label_126:
#line 242
c_rt_lib0clear(&___nl__4);
#line 242
c_rt_lib0clear(&___nl__5);
#line 242
c_rt_lib0clear(&___nl__6);
#line 242
c_rt_lib0clear(&___nl__3);
#line 243
goto label_134;
#line 243
label_132:
#line 244
goto label_134;
#line 244
label_134:
#line 244
c_rt_lib0clear(&___nl__2);
#line 244
c_rt_lib0clear(&___nl__0);
#line 244
return NULL;
}

ImmT module_checker_priv0get_fun_key(ImmT ___nl__0,ImmT ___nl__1,ImmT ___nl__2) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
c_rt_lib0arg_val(___nl__2);
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
#line 248
c_rt_lib0move(&___nl__3,___get_global_const(2));
#line 248
c_rt_lib0move(&___nl__3, c_rt_lib0eq(___nl__0, ___nl__3));
#line 248
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 248
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 248
if(c_rt_lib0check_true_native(___nl__3)){ goto label_15;}
#line 248
c_rt_lib0move(&___nl__4,___get_global_const(185));
#line 248
c_rt_lib0move(&___nl__4, c_rt_lib0concat_new(___nl__0, ___nl__4));
#line 248
c_rt_lib0move(&___nl__4, c_rt_lib0concat_add(___nl__4, ___nl__1));
#line 248
c_rt_lib0clear(&___nl__0);
#line 248
c_rt_lib0clear(&___nl__1);
#line 248
c_rt_lib0clear(&___nl__2);
#line 248
c_rt_lib0clear(&___nl__3);
#line 248
return ___nl__4;
#line 248
c_rt_lib0clear(&___nl__4);
#line 248
goto label_15;
#line 248
label_15:
#line 248
c_rt_lib0clear(&___nl__3);
#line 249
c_rt_lib0move(&___nl__3,___get_global_const(810));
#line 249
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__2));
#line 249
c_rt_lib0move(&___nl__4,___get_global_const(185));
#line 249
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 249
c_rt_lib0clear(&___nl__4);
#line 249
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__1));
#line 249
c_rt_lib0clear(&___nl__0);
#line 249
c_rt_lib0clear(&___nl__1);
#line 249
c_rt_lib0clear(&___nl__2);
#line 249
return ___nl__3;
#line 249
c_rt_lib0clear(&___nl__3);
#line 249
c_rt_lib0clear(&___nl__0);
#line 249
c_rt_lib0clear(&___nl__1);
#line 249
c_rt_lib0clear(&___nl__2);
#line 249
return NULL;
}

ImmT module_checker_priv0add_fun_used(ImmT ___nl__0,ImmT ___nl__1,ImmT * ___ref___2) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
#line 253
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(*___ref___2, ___get_global_const(784)));
#line 253
c_rt_lib0move(&___nl__3, module_checker_priv0get_fun_key(___nl__0, ___nl__1, ___nl__4));
#line 253
c_rt_lib0clear(&___nl__4);
#line 254
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(*___ref___2, ___get_global_const(783)));
#line 254
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(88)));
#line 254
c_rt_lib0move(&___nl__4, hash0has_key(___nl__5, ___nl__3));
#line 254
c_rt_lib0clear(&___nl__5);
#line 254
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 254
if(c_rt_lib0check_true_native(___nl__4)){ goto label_15;}
#line 254
c_rt_lib0clear(&___nl__0);
#line 254
c_rt_lib0clear(&___nl__1);
#line 254
c_rt_lib0clear(&___nl__3);
#line 254
c_rt_lib0clear(&___nl__4);
#line 254
return NULL;
#line 254
goto label_15;
#line 254
label_15:
#line 254
c_rt_lib0clear(&___nl__4);
#line 255
c_rt_lib0move(&___nl__4,___get_global_const(783));
#line 255
c_rt_lib0move(&___nl__4, c_rt_lib0get_ref_hash(*___ref___2, ___nl__4));
#line 255
c_rt_lib0move(&___nl__5,___get_global_const(88));
#line 255
c_rt_lib0move(&___nl__5, c_rt_lib0get_ref_hash(___nl__4, ___nl__5));
#line 255
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(*___ref___2, ___get_global_const(18)));
#line 255
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__6, ___get_global_const(785)));
#line 255
c_rt_lib0delete(hash0set_value(&___nl__5, ___nl__3, ___nl__6));
#line 255
c_rt_lib0clear(&___nl__6);
#line 255
c_rt_lib0move(&___nl__6,___get_global_const(88));
#line 255
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__4, ___nl__6, ___nl__5));
#line 255
c_rt_lib0move(&___nl__6,___get_global_const(783));
#line 255
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___2, ___nl__6, ___nl__4));
#line 255
c_rt_lib0clear(&___nl__6);
#line 255
c_rt_lib0clear(&___nl__4);
#line 255
c_rt_lib0clear(&___nl__5);
#line 256
c_rt_lib0move(&___nl__4,___get_global_const(2));
#line 256
c_rt_lib0move(&___nl__4, c_rt_lib0eq(___nl__0, ___nl__4));
#line 256
if(c_rt_lib0check_true_native(___nl__4)){ goto label_39;}
#line 256
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(*___ref___2, ___get_global_const(783)));
#line 256
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(132)));
#line 256
c_rt_lib0move(&___nl__4, hash0has_key(___nl__5, ___nl__0));
#line 256
c_rt_lib0clear(&___nl__5);
#line 256
label_39:
#line 256
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 256
if(c_rt_lib0check_true_native(___nl__4)){ goto label_48;}
#line 256
c_rt_lib0clear(&___nl__0);
#line 256
c_rt_lib0clear(&___nl__1);
#line 256
c_rt_lib0clear(&___nl__3);
#line 256
c_rt_lib0clear(&___nl__4);
#line 256
return NULL;
#line 256
goto label_48;
#line 256
label_48:
#line 256
c_rt_lib0clear(&___nl__4);
#line 257
c_rt_lib0move(&___nl__4,___get_global_const(783));
#line 257
c_rt_lib0move(&___nl__4, c_rt_lib0get_ref_hash(*___ref___2, ___nl__4));
#line 257
c_rt_lib0move(&___nl__5,___get_global_const(132));
#line 257
c_rt_lib0move(&___nl__5, c_rt_lib0get_ref_hash(___nl__4, ___nl__5));
#line 257
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(*___ref___2, ___get_global_const(18)));
#line 257
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__6, ___get_global_const(785)));
#line 257
c_rt_lib0delete(hash0set_value(&___nl__5, ___nl__0, ___nl__6));
#line 257
c_rt_lib0clear(&___nl__6);
#line 257
c_rt_lib0move(&___nl__6,___get_global_const(132));
#line 257
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__4, ___nl__6, ___nl__5));
#line 257
c_rt_lib0move(&___nl__6,___get_global_const(783));
#line 257
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___2, ___nl__6, ___nl__4));
#line 257
c_rt_lib0clear(&___nl__6);
#line 257
c_rt_lib0clear(&___nl__4);
#line 257
c_rt_lib0clear(&___nl__5);
#line 257
c_rt_lib0clear(&___nl__3);
#line 257
c_rt_lib0clear(&___nl__0);
#line 257
c_rt_lib0clear(&___nl__1);
#line 257
return NULL;
}

ImmT module_checker_priv0check_return_type(ImmT ___nl__0,ImmT * ___ref___1) {
c_rt_lib0arg_val(___nl__0);
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
#line 261
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__0, ___get_global_const(41)));
#line 261
if(c_rt_lib0check_true_native(___nl__2)){ goto label_7;}
#line 263
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__0, ___get_global_const(63)));
#line 263
if(c_rt_lib0check_true_native(___nl__2)){ goto label_14;}
#line 263
c_rt_lib0move(&___nl__2,___get_global_const(91));
#line 263
c_rt_lib0move(&___nl__2, c_rt_lib0array_mk(2, ___nl__2, ___nl__0));
#line 263
nl_die_arg(___nl__2);
#line 261
label_7:
#line 262
c_rt_lib0move(&___nl__3, c_rt_lib0ov_mk_none(___get_global_const(41)));
#line 262
c_rt_lib0clear(&___nl__0);
#line 262
c_rt_lib0clear(&___nl__2);
#line 262
return ___nl__3;
#line 262
c_rt_lib0clear(&___nl__3);
#line 263
goto label_59;
#line 263
label_14:
#line 263
c_rt_lib0move(&___nl__3, c_rt_lib0priv_as(___nl__0, ___get_global_const(63)));
#line 264
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(192)));
#line 264
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__4, ___get_global_const(811)));
#line 264
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 264
if(c_rt_lib0check_true_native(___nl__4)){ goto label_55;}
#line 265
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(192)));
#line 265
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__5, ___get_global_const(811)));
#line 266
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(132)));
#line 266
c_rt_lib0move(&___nl__8,___get_global_const(676));
#line 266
c_rt_lib0move(&___nl__6, c_rt_lib0eq(___nl__6, ___nl__8));
#line 266
c_rt_lib0clear(&___nl__8);
#line 266
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__6));
#line 266
if(c_rt_lib0check_true_native(___nl__7)){ goto label_32;}
#line 266
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(93)));
#line 266
c_rt_lib0move(&___nl__8,___get_global_const(777));
#line 266
c_rt_lib0move(&___nl__6, c_rt_lib0eq(___nl__6, ___nl__8));
#line 266
c_rt_lib0clear(&___nl__8);
#line 266
label_32:
#line 266
c_rt_lib0clear(&___nl__7);
#line 266
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 266
if(c_rt_lib0check_true_native(___nl__6)){ goto label_51;}
#line 267
c_rt_lib0move(&___nl__7,___get_global_const(676));
#line 267
c_rt_lib0move(&___nl__8,___get_global_const(777));
#line 267
c_rt_lib0delete(module_checker_priv0add_fun_used(___nl__7, ___nl__8, ___ref___1));
#line 267
c_rt_lib0clear(&___nl__8);
#line 267
c_rt_lib0clear(&___nl__7);
#line 268
c_rt_lib0move(&___nl__7, c_rt_lib0ov_mk_none(___get_global_const(777)));
#line 268
c_rt_lib0clear(&___nl__0);
#line 268
c_rt_lib0clear(&___nl__2);
#line 268
c_rt_lib0clear(&___nl__3);
#line 268
c_rt_lib0clear(&___nl__4);
#line 268
c_rt_lib0clear(&___nl__5);
#line 268
c_rt_lib0clear(&___nl__6);
#line 268
return ___nl__7;
#line 268
c_rt_lib0clear(&___nl__7);
#line 269
goto label_51;
#line 269
label_51:
#line 269
c_rt_lib0clear(&___nl__6);
#line 269
c_rt_lib0clear(&___nl__5);
#line 270
goto label_55;
#line 270
label_55:
#line 270
c_rt_lib0clear(&___nl__4);
#line 270
c_rt_lib0clear(&___nl__3);
#line 271
goto label_59;
#line 271
label_59:
#line 271
c_rt_lib0clear(&___nl__2);
#line 272
c_rt_lib0delete(module_checker_priv0check_type(___nl__0, ___ref___1));
#line 273
c_rt_lib0move(&___nl__2, c_rt_lib0ov_mk_none(___get_global_const(192)));
#line 273
c_rt_lib0clear(&___nl__0);
#line 273
return ___nl__2;
#line 273
c_rt_lib0clear(&___nl__2);
#line 273
c_rt_lib0clear(&___nl__0);
#line 273
return NULL;
}

ImmT module_checker_priv0check_type(ImmT ___nl__0,ImmT * ___ref___1) {
c_rt_lib0arg_val(___nl__0);
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
#line 277
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__0, ___get_global_const(41)));
#line 277
if(c_rt_lib0check_true_native(___nl__2)){ goto label_7;}
#line 278
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__0, ___get_global_const(63)));
#line 278
if(c_rt_lib0check_true_native(___nl__2)){ goto label_9;}
#line 278
c_rt_lib0move(&___nl__2,___get_global_const(91));
#line 278
c_rt_lib0move(&___nl__2, c_rt_lib0array_mk(2, ___nl__2, ___nl__0));
#line 278
nl_die_arg(___nl__2);
#line 277
label_7:
#line 278
goto label_55;
#line 278
label_9:
#line 278
c_rt_lib0move(&___nl__3, c_rt_lib0priv_as(___nl__0, ___get_global_const(63)));
#line 279
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(192)));
#line 279
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__4, ___get_global_const(811)));
#line 279
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 279
if(c_rt_lib0check_true_native(___nl__4)){ goto label_24;}
#line 280
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(192)));
#line 280
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__5, ___get_global_const(811)));
#line 281
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(132)));
#line 281
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(93)));
#line 281
c_rt_lib0delete(module_checker_priv0add_fun_used(___nl__6, ___nl__7, ___ref___1));
#line 281
c_rt_lib0clear(&___nl__7);
#line 281
c_rt_lib0clear(&___nl__6);
#line 281
c_rt_lib0clear(&___nl__5);
#line 282
goto label_24;
#line 282
label_24:
#line 282
c_rt_lib0clear(&___nl__4);
#line 283
c_rt_lib0move(&___nl__4, ptd_parser0try_value_to_ptd(___nl__3));
#line 283
c_rt_lib0move(&___nl__5, c_rt_lib0priv_is(___nl__4, ___get_global_const(47)));
#line 283
if(c_rt_lib0check_true_native(___nl__5)){ goto label_34;}
#line 285
c_rt_lib0move(&___nl__5, c_rt_lib0priv_is(___nl__4, ___get_global_const(48)));
#line 285
if(c_rt_lib0check_true_native(___nl__5)){ goto label_45;}
#line 285
c_rt_lib0move(&___nl__5,___get_global_const(91));
#line 285
c_rt_lib0move(&___nl__5, c_rt_lib0array_mk(2, ___nl__5, ___nl__4));
#line 285
nl_die_arg(___nl__5);
#line 283
label_34:
#line 283
c_rt_lib0move(&___nl__6, c_rt_lib0priv_as(___nl__4, ___get_global_const(47)));
#line 284
c_rt_lib0move(&___nl__7,___get_global_const(18));
#line 284
c_rt_lib0move(&___nl__7, c_rt_lib0get_ref_hash(*___ref___1, ___nl__7));
#line 284
c_rt_lib0delete(module_checker_priv0add_error(&___nl__7, ___nl__6));
#line 284
c_rt_lib0move(&___nl__8,___get_global_const(18));
#line 284
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___1, ___nl__8, ___nl__7));
#line 284
c_rt_lib0clear(&___nl__8);
#line 284
c_rt_lib0clear(&___nl__7);
#line 284
c_rt_lib0clear(&___nl__6);
#line 285
goto label_50;
#line 285
label_45:
#line 285
c_rt_lib0move(&___nl__6, c_rt_lib0priv_as(___nl__4, ___get_global_const(48)));
#line 286
c_rt_lib0delete(module_checker_priv0check_types_imported(___nl__6, ___ref___1));
#line 286
c_rt_lib0clear(&___nl__6);
#line 287
goto label_50;
#line 287
label_50:
#line 287
c_rt_lib0clear(&___nl__4);
#line 287
c_rt_lib0clear(&___nl__5);
#line 287
c_rt_lib0clear(&___nl__3);
#line 288
goto label_55;
#line 288
label_55:
#line 288
c_rt_lib0clear(&___nl__2);
#line 288
c_rt_lib0clear(&___nl__0);
#line 288
return NULL;
}

ImmT module_checker_priv0add_var(ImmT ___nl__0,ImmT ___nl__1,ImmT ___nl__2,ImmT * ___ref___3) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
c_rt_lib0arg_val(___nl__2);
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
#line 293
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(*___ref___3, ___get_global_const(673)));
#line 293
c_rt_lib0move(&___nl__4, hash0has_key(___nl__5, ___nl__0));
#line 293
c_rt_lib0clear(&___nl__5);
#line 293
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 293
if(c_rt_lib0check_true_native(___nl__4)){ goto label_16;}
#line 294
c_rt_lib0move(&___nl__5,___get_global_const(18));
#line 294
c_rt_lib0move(&___nl__5, c_rt_lib0get_ref_hash(*___ref___3, ___nl__5));
#line 294
c_rt_lib0move(&___nl__6,___get_global_const(812));
#line 294
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__0));
#line 294
c_rt_lib0delete(module_checker_priv0add_error(&___nl__5, ___nl__6));
#line 294
c_rt_lib0clear(&___nl__6);
#line 294
c_rt_lib0move(&___nl__6,___get_global_const(18));
#line 294
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___3, ___nl__6, ___nl__5));
#line 294
c_rt_lib0clear(&___nl__6);
#line 294
c_rt_lib0clear(&___nl__5);
#line 295
goto label_16;
#line 295
label_16:
#line 295
c_rt_lib0clear(&___nl__4);
#line 296
c_rt_lib0move(&___nl__5, c_rt_lib0ov_mk_none(___get_global_const(41)));
#line 296
c_rt_lib0move(&___nl__6, c_rt_lib0get_false());
#line 296
c_rt_lib0move(&___nl__4, c_rt_lib0hash_mk(3, ___get_global_const(277), ___nl__5, ___get_global_const(282), ___nl__6, ___get_global_const(776), ___nl__2));
#line 296
c_rt_lib0clear(&___nl__5);
#line 296
c_rt_lib0clear(&___nl__6);
#line 297
c_rt_lib0copy(&___nl__5, ___nl__1);
#line 297
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 297
if(c_rt_lib0check_true_native(___nl__5)){ goto label_32;}
#line 297
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_none(___get_global_const(196)));
#line 297
c_rt_lib0copy(&___nl__7, ___nl__6);
#line 297
c_rt_lib0hash_set_value_dec(&___nl__4, ___get_global_const(277), ___nl__7);
#line 297
c_rt_lib0clear(&___nl__6);
#line 297
c_rt_lib0clear(&___nl__7);
#line 297
goto label_32;
#line 297
label_32:
#line 297
c_rt_lib0clear(&___nl__5);
#line 298
c_rt_lib0move(&___nl__5,___get_global_const(673));
#line 298
c_rt_lib0move(&___nl__5, c_rt_lib0get_ref_hash(*___ref___3, ___nl__5));
#line 298
c_rt_lib0delete(hash0set_value(&___nl__5, ___nl__0, ___nl__4));
#line 298
c_rt_lib0move(&___nl__6,___get_global_const(673));
#line 298
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___3, ___nl__6, ___nl__5));
#line 298
c_rt_lib0clear(&___nl__6);
#line 298
c_rt_lib0clear(&___nl__5);
#line 298
c_rt_lib0clear(&___nl__4);
#line 298
c_rt_lib0clear(&___nl__0);
#line 298
c_rt_lib0clear(&___nl__1);
#line 298
c_rt_lib0clear(&___nl__2);
#line 298
return NULL;
}

ImmT module_checker_priv0use_var(ImmT ___nl__0,ImmT ___nl__1,ImmT * ___ref___2) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
#line 303
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(*___ref___2, ___get_global_const(673)));
#line 303
c_rt_lib0move(&___nl__3, hash0has_key(___nl__4, ___nl__0));
#line 303
c_rt_lib0clear(&___nl__4);
#line 303
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 303
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 303
if(c_rt_lib0check_true_native(___nl__3)){ goto label_21;}
#line 304
c_rt_lib0move(&___nl__4,___get_global_const(18));
#line 304
c_rt_lib0move(&___nl__4, c_rt_lib0get_ref_hash(*___ref___2, ___nl__4));
#line 304
c_rt_lib0move(&___nl__5,___get_global_const(813));
#line 304
c_rt_lib0move(&___nl__5, c_rt_lib0concat_add(___nl__5, ___nl__0));
#line 304
c_rt_lib0delete(module_checker_priv0add_error(&___nl__4, ___nl__5));
#line 304
c_rt_lib0clear(&___nl__5);
#line 304
c_rt_lib0move(&___nl__5,___get_global_const(18));
#line 304
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___2, ___nl__5, ___nl__4));
#line 304
c_rt_lib0clear(&___nl__5);
#line 304
c_rt_lib0clear(&___nl__4);
#line 305
c_rt_lib0clear(&___nl__0);
#line 305
c_rt_lib0clear(&___nl__1);
#line 305
c_rt_lib0clear(&___nl__3);
#line 305
return NULL;
#line 306
goto label_21;
#line 306
label_21:
#line 306
c_rt_lib0clear(&___nl__3);
#line 307
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(*___ref___2, ___get_global_const(673)));
#line 307
c_rt_lib0move(&___nl__3, hash0get_value(___nl__4, ___nl__0));
#line 307
c_rt_lib0clear(&___nl__4);
#line 308
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__1, ___get_global_const(789)));
#line 308
if(c_rt_lib0check_true_native(___nl__4)){ goto label_35;}
#line 310
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__1, ___get_global_const(788)));
#line 310
if(c_rt_lib0check_true_native(___nl__4)){ goto label_42;}
#line 316
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__1, ___get_global_const(222)));
#line 316
if(c_rt_lib0check_true_native(___nl__4)){ goto label_72;}
#line 316
c_rt_lib0move(&___nl__4,___get_global_const(91));
#line 316
c_rt_lib0move(&___nl__4, c_rt_lib0array_mk(2, ___nl__4, ___nl__1));
#line 316
nl_die_arg(___nl__4);
#line 308
label_35:
#line 309
c_rt_lib0move(&___nl__5, c_rt_lib0get_true());
#line 309
c_rt_lib0copy(&___nl__6, ___nl__5);
#line 309
c_rt_lib0hash_set_value_dec(&___nl__3, ___get_global_const(282), ___nl__6);
#line 309
c_rt_lib0clear(&___nl__5);
#line 309
c_rt_lib0clear(&___nl__6);
#line 310
goto label_107;
#line 310
label_42:
#line 311
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(277)));
#line 311
c_rt_lib0move(&___nl__5, c_rt_lib0priv_is(___nl__5, ___get_global_const(196)));
#line 311
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 311
if(c_rt_lib0check_true_native(___nl__5)){ goto label_64;}
#line 312
c_rt_lib0move(&___nl__6,___get_global_const(18));
#line 312
c_rt_lib0move(&___nl__6, c_rt_lib0get_ref_hash(*___ref___2, ___nl__6));
#line 312
c_rt_lib0move(&___nl__7,___get_global_const(814));
#line 312
c_rt_lib0move(&___nl__7, c_rt_lib0concat_add(___nl__7, ___nl__0));
#line 312
c_rt_lib0delete(module_checker_priv0add_error(&___nl__6, ___nl__7));
#line 312
c_rt_lib0clear(&___nl__7);
#line 312
c_rt_lib0move(&___nl__7,___get_global_const(18));
#line 312
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___2, ___nl__7, ___nl__6));
#line 312
c_rt_lib0clear(&___nl__7);
#line 312
c_rt_lib0clear(&___nl__6);
#line 313
c_rt_lib0clear(&___nl__0);
#line 313
c_rt_lib0clear(&___nl__1);
#line 313
c_rt_lib0clear(&___nl__3);
#line 313
c_rt_lib0clear(&___nl__4);
#line 313
c_rt_lib0clear(&___nl__5);
#line 313
return NULL;
#line 314
goto label_64;
#line 314
label_64:
#line 314
c_rt_lib0clear(&___nl__5);
#line 315
c_rt_lib0move(&___nl__5, c_rt_lib0ov_mk_none(___get_global_const(192)));
#line 315
c_rt_lib0copy(&___nl__6, ___nl__5);
#line 315
c_rt_lib0hash_set_value_dec(&___nl__3, ___get_global_const(277), ___nl__6);
#line 315
c_rt_lib0clear(&___nl__5);
#line 315
c_rt_lib0clear(&___nl__6);
#line 316
goto label_107;
#line 316
label_72:
#line 317
c_rt_lib0move(&___nl__5, c_rt_lib0get_true());
#line 317
c_rt_lib0copy(&___nl__6, ___nl__5);
#line 317
c_rt_lib0hash_set_value_dec(&___nl__3, ___get_global_const(282), ___nl__6);
#line 317
c_rt_lib0clear(&___nl__5);
#line 317
c_rt_lib0clear(&___nl__6);
#line 318
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(277)));
#line 318
c_rt_lib0move(&___nl__5, c_rt_lib0priv_is(___nl__5, ___get_global_const(196)));
#line 318
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 318
if(c_rt_lib0check_true_native(___nl__5)){ goto label_99;}
#line 319
c_rt_lib0move(&___nl__6,___get_global_const(18));
#line 319
c_rt_lib0move(&___nl__6, c_rt_lib0get_ref_hash(*___ref___2, ___nl__6));
#line 319
c_rt_lib0move(&___nl__7,___get_global_const(814));
#line 319
c_rt_lib0move(&___nl__7, c_rt_lib0concat_add(___nl__7, ___nl__0));
#line 319
c_rt_lib0delete(module_checker_priv0add_error(&___nl__6, ___nl__7));
#line 319
c_rt_lib0clear(&___nl__7);
#line 319
c_rt_lib0move(&___nl__7,___get_global_const(18));
#line 319
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___2, ___nl__7, ___nl__6));
#line 319
c_rt_lib0clear(&___nl__7);
#line 319
c_rt_lib0clear(&___nl__6);
#line 320
c_rt_lib0clear(&___nl__0);
#line 320
c_rt_lib0clear(&___nl__1);
#line 320
c_rt_lib0clear(&___nl__3);
#line 320
c_rt_lib0clear(&___nl__4);
#line 320
c_rt_lib0clear(&___nl__5);
#line 320
return NULL;
#line 321
goto label_99;
#line 321
label_99:
#line 321
c_rt_lib0clear(&___nl__5);
#line 322
c_rt_lib0move(&___nl__5, c_rt_lib0ov_mk_none(___get_global_const(192)));
#line 322
c_rt_lib0copy(&___nl__6, ___nl__5);
#line 322
c_rt_lib0hash_set_value_dec(&___nl__3, ___get_global_const(277), ___nl__6);
#line 322
c_rt_lib0clear(&___nl__5);
#line 322
c_rt_lib0clear(&___nl__6);
#line 323
goto label_107;
#line 323
label_107:
#line 323
c_rt_lib0clear(&___nl__4);
#line 324
c_rt_lib0move(&___nl__4,___get_global_const(673));
#line 324
c_rt_lib0move(&___nl__4, c_rt_lib0get_ref_hash(*___ref___2, ___nl__4));
#line 324
c_rt_lib0delete(hash0set_value(&___nl__4, ___nl__0, ___nl__3));
#line 324
c_rt_lib0move(&___nl__5,___get_global_const(673));
#line 324
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___2, ___nl__5, ___nl__4));
#line 324
c_rt_lib0clear(&___nl__5);
#line 324
c_rt_lib0clear(&___nl__4);
#line 324
c_rt_lib0clear(&___nl__3);
#line 324
c_rt_lib0clear(&___nl__0);
#line 324
c_rt_lib0clear(&___nl__1);
#line 324
return NULL;
}

ImmT module_checker_priv0add_var_dec(ImmT ___nl__0,ImmT ___nl__1,ImmT ___nl__2,ImmT * ___ref___3) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
c_rt_lib0arg_val(___nl__2);
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
#line 329
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(93)));
#line 329
c_rt_lib0delete(module_checker_priv0add_var(___nl__4, ___nl__1, ___nl__2, ___ref___3));
#line 329
c_rt_lib0clear(&___nl__4);
#line 330
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(63)));
#line 330
c_rt_lib0delete(module_checker_priv0check_type(___nl__4, ___ref___3));
#line 330
c_rt_lib0clear(&___nl__4);
#line 331
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(192)));
#line 331
c_rt_lib0move(&___nl__5, c_rt_lib0priv_is(___nl__4, ___get_global_const(192)));
#line 331
if(c_rt_lib0check_true_native(___nl__5)){ goto label_14;}
#line 335
c_rt_lib0move(&___nl__5, c_rt_lib0priv_is(___nl__4, ___get_global_const(41)));
#line 335
if(c_rt_lib0check_true_native(___nl__5)){ goto label_33;}
#line 335
c_rt_lib0move(&___nl__5,___get_global_const(91));
#line 335
c_rt_lib0move(&___nl__5, c_rt_lib0array_mk(2, ___nl__5, ___nl__4));
#line 335
nl_die_arg(___nl__5);
#line 331
label_14:
#line 331
c_rt_lib0move(&___nl__6, c_rt_lib0priv_as(___nl__4, ___get_global_const(192)));
#line 332
c_rt_lib0delete(module_checker_priv0check_val(___nl__6, ___ref___3));
#line 333
c_rt_lib0copy(&___nl__7, ___nl__1);
#line 333
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 333
if(c_rt_lib0check_true_native(___nl__7)){ goto label_23;}
#line 333
c_rt_lib0move(&___nl__8, c_rt_lib0array_mk(0));
#line 333
nl_die_arg(___nl__8);
#line 333
goto label_23;
#line 333
label_23:
#line 333
c_rt_lib0clear(&___nl__7);
#line 333
c_rt_lib0clear(&___nl__8);
#line 334
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(93)));
#line 334
c_rt_lib0move(&___nl__8, c_rt_lib0ov_mk_none(___get_global_const(788)));
#line 334
c_rt_lib0delete(module_checker_priv0use_var(___nl__7, ___nl__8, ___ref___3));
#line 334
c_rt_lib0clear(&___nl__8);
#line 334
c_rt_lib0clear(&___nl__7);
#line 334
c_rt_lib0clear(&___nl__6);
#line 335
goto label_35;
#line 335
label_33:
#line 336
goto label_35;
#line 336
label_35:
#line 336
c_rt_lib0clear(&___nl__4);
#line 336
c_rt_lib0clear(&___nl__5);
#line 336
c_rt_lib0clear(&___nl__0);
#line 336
c_rt_lib0clear(&___nl__1);
#line 336
c_rt_lib0clear(&___nl__2);
#line 336
return NULL;
}

ImmT module_checker_priv0check_cmd(ImmT ___nl__0,ImmT * ___ref___1) {
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
ImmT ___nl__16 = NULL;
ImmT ___nl__17 = NULL;
#line 340
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(195)));
#line 340
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(440)));
#line 340
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(134)));
#line 340
c_rt_lib0move(&___nl__3,___get_global_const(18));
#line 340
c_rt_lib0move(&___nl__3, c_rt_lib0get_ref_hash(*___ref___1, ___nl__3));
#line 340
c_rt_lib0copy(&___nl__4, ___nl__2);
#line 340
c_rt_lib0hash_set_value_dec(&___nl__3, ___get_global_const(785), ___nl__4);
#line 340
c_rt_lib0move(&___nl__5,___get_global_const(18));
#line 340
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___1, ___nl__5, ___nl__3));
#line 340
c_rt_lib0clear(&___nl__5);
#line 340
c_rt_lib0clear(&___nl__2);
#line 340
c_rt_lib0clear(&___nl__3);
#line 340
c_rt_lib0clear(&___nl__4);
#line 341
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(*___ref___1, ___get_global_const(90)));
#line 341
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(190)));
#line 341
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 341
if(c_rt_lib0check_true_native(___nl__2)){ goto label_38;}
#line 342
c_rt_lib0move(&___nl__3,___get_global_const(18));
#line 342
c_rt_lib0move(&___nl__3, c_rt_lib0get_ref_hash(*___ref___1, ___nl__3));
#line 342
c_rt_lib0move(&___nl__4,___get_global_const(815));
#line 342
c_rt_lib0delete(module_checker_priv0add_warning(&___nl__3, ___nl__4));
#line 342
c_rt_lib0clear(&___nl__4);
#line 342
c_rt_lib0move(&___nl__4,___get_global_const(18));
#line 342
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___1, ___nl__4, ___nl__3));
#line 342
c_rt_lib0clear(&___nl__4);
#line 342
c_rt_lib0clear(&___nl__3);
#line 343
c_rt_lib0move(&___nl__3, c_rt_lib0get_false());
#line 343
c_rt_lib0move(&___nl__4,___get_global_const(90));
#line 343
c_rt_lib0move(&___nl__4, c_rt_lib0get_ref_hash(*___ref___1, ___nl__4));
#line 343
c_rt_lib0copy(&___nl__5, ___nl__3);
#line 343
c_rt_lib0hash_set_value_dec(&___nl__4, ___get_global_const(190), ___nl__5);
#line 343
c_rt_lib0move(&___nl__6,___get_global_const(90));
#line 343
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___1, ___nl__6, ___nl__4));
#line 343
c_rt_lib0clear(&___nl__6);
#line 343
c_rt_lib0clear(&___nl__3);
#line 343
c_rt_lib0clear(&___nl__4);
#line 343
c_rt_lib0clear(&___nl__5);
#line 344
goto label_38;
#line 344
label_38:
#line 344
c_rt_lib0clear(&___nl__2);
#line 345
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(201)));
#line 345
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(816)));
#line 345
if(c_rt_lib0check_true_native(___nl__3)){ goto label_84;}
#line 359
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(817)));
#line 359
if(c_rt_lib0check_true_native(___nl__3)){ goto label_176;}
#line 372
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(818)));
#line 372
if(c_rt_lib0check_true_native(___nl__3)){ goto label_233;}
#line 380
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(819)));
#line 380
if(c_rt_lib0check_true_native(___nl__3)){ goto label_269;}
#line 389
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(140)));
#line 389
if(c_rt_lib0check_true_native(___nl__3)){ goto label_312;}
#line 394
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(820)));
#line 394
if(c_rt_lib0check_true_native(___nl__3)){ goto label_325;}
#line 402
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(821)));
#line 402
if(c_rt_lib0check_true_native(___nl__3)){ goto label_361;}
#line 409
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(822)));
#line 409
if(c_rt_lib0check_true_native(___nl__3)){ goto label_390;}
#line 413
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(823)));
#line 413
if(c_rt_lib0check_true_native(___nl__3)){ goto label_411;}
#line 417
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(824)));
#line 417
if(c_rt_lib0check_true_native(___nl__3)){ goto label_432;}
#line 421
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(825)));
#line 421
if(c_rt_lib0check_true_native(___nl__3)){ goto label_450;}
#line 425
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(826)));
#line 425
if(c_rt_lib0check_true_native(___nl__3)){ goto label_468;}
#line 440
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(192)));
#line 440
if(c_rt_lib0check_true_native(___nl__3)){ goto label_554;}
#line 442
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(90)));
#line 442
if(c_rt_lib0check_true_native(___nl__3)){ goto label_559;}
#line 458
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(827)));
#line 458
if(c_rt_lib0check_true_native(___nl__3)){ goto label_723;}
#line 464
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(217)));
#line 464
if(c_rt_lib0check_true_native(___nl__3)){ goto label_746;}
#line 469
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(828)));
#line 469
if(c_rt_lib0check_true_native(___nl__3)){ goto label_777;}
#line 471
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(829)));
#line 471
if(c_rt_lib0check_true_native(___nl__3)){ goto label_786;}
#line 479
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(95)));
#line 479
if(c_rt_lib0check_true_native(___nl__3)){ goto label_826;}
#line 487
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(830)));
#line 487
if(c_rt_lib0check_true_native(___nl__3)){ goto label_866;}
#line 487
c_rt_lib0move(&___nl__3,___get_global_const(91));
#line 487
c_rt_lib0move(&___nl__3, c_rt_lib0array_mk(2, ___nl__3, ___nl__2));
#line 487
nl_die_arg(___nl__3);
#line 345
label_84:
#line 345
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(816)));
#line 346
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(831)));
#line 346
c_rt_lib0delete(module_checker_priv0check_val(___nl__5, ___ref___1));
#line 346
c_rt_lib0clear(&___nl__5);
#line 347
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(816)));
#line 347
c_rt_lib0delete(module_checker_priv0check_cmd(___nl__5, ___ref___1));
#line 347
c_rt_lib0clear(&___nl__5);
#line 348
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(*___ref___1, ___get_global_const(90)));
#line 348
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(190)));
#line 349
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(832)));
#line 349
c_rt_lib0move(&___nl__8,___get_global_const(0));
#line 349
c_rt_lib0move(&___nl__9,___get_global_const(1));
#line 349
c_rt_lib0move(&___nl__10, c_rt_lib0array_len(___nl__6));
#line 349
label_98:
#line 349
c_rt_lib0move(&___nl__11, c_rt_lib0ge(___nl__8, ___nl__10));
#line 349
if(c_rt_lib0check_true_native(___nl__11)){ goto label_132;}
#line 349
c_rt_lib0move(&___nl__7, c_rt_lib0array_get(___nl__6, ___nl__8));
#line 350
c_rt_lib0move(&___nl__12, c_rt_lib0get_false());
#line 350
c_rt_lib0move(&___nl__13,___get_global_const(90));
#line 350
c_rt_lib0move(&___nl__13, c_rt_lib0get_ref_hash(*___ref___1, ___nl__13));
#line 350
c_rt_lib0copy(&___nl__14, ___nl__12);
#line 350
c_rt_lib0hash_set_value_dec(&___nl__13, ___get_global_const(190), ___nl__14);
#line 350
c_rt_lib0move(&___nl__15,___get_global_const(90));
#line 350
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___1, ___nl__15, ___nl__13));
#line 350
c_rt_lib0clear(&___nl__15);
#line 350
c_rt_lib0clear(&___nl__12);
#line 350
c_rt_lib0clear(&___nl__13);
#line 350
c_rt_lib0clear(&___nl__14);
#line 351
c_rt_lib0move(&___nl__12, c_rt_lib0hash_get_value_dec(___nl__7, ___get_global_const(831)));
#line 351
c_rt_lib0delete(module_checker_priv0check_val(___nl__12, ___ref___1));
#line 351
c_rt_lib0clear(&___nl__12);
#line 352
c_rt_lib0move(&___nl__12, c_rt_lib0hash_get_value_dec(___nl__7, ___get_global_const(201)));
#line 352
c_rt_lib0delete(module_checker_priv0check_cmd(___nl__12, ___ref___1));
#line 352
c_rt_lib0clear(&___nl__12);
#line 353
c_rt_lib0move(&___nl__12, c_rt_lib0hash_get_value_dec(*___ref___1, ___get_global_const(90)));
#line 353
c_rt_lib0move(&___nl__12, c_rt_lib0hash_get_value_dec(___nl__12, ___get_global_const(190)));
#line 353
c_rt_lib0move(&___nl__12, c_rt_lib0not(___nl__12));
#line 353
c_rt_lib0move(&___nl__12, c_rt_lib0not(___nl__12));
#line 353
if(c_rt_lib0check_true_native(___nl__12)){ goto label_128;}
#line 353
c_rt_lib0move(&___nl__13, c_rt_lib0get_false());
#line 353
c_rt_lib0copy(&___nl__5, ___nl__13);
#line 353
c_rt_lib0clear(&___nl__13);
#line 353
goto label_128;
#line 353
label_128:
#line 353
c_rt_lib0clear(&___nl__12);
#line 354
c_rt_lib0move(&___nl__8, c_rt_lib0add_mod(___nl__8, ___nl__9));
#line 354
goto label_98;
#line 354
label_132:
#line 354
c_rt_lib0clear(&___nl__6);
#line 354
c_rt_lib0clear(&___nl__7);
#line 354
c_rt_lib0clear(&___nl__8);
#line 354
c_rt_lib0clear(&___nl__9);
#line 354
c_rt_lib0clear(&___nl__10);
#line 354
c_rt_lib0clear(&___nl__11);
#line 355
c_rt_lib0move(&___nl__6, c_rt_lib0get_false());
#line 355
c_rt_lib0move(&___nl__7,___get_global_const(90));
#line 355
c_rt_lib0move(&___nl__7, c_rt_lib0get_ref_hash(*___ref___1, ___nl__7));
#line 355
c_rt_lib0copy(&___nl__8, ___nl__6);
#line 355
c_rt_lib0hash_set_value_dec(&___nl__7, ___get_global_const(190), ___nl__8);
#line 355
c_rt_lib0move(&___nl__9,___get_global_const(90));
#line 355
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___1, ___nl__9, ___nl__7));
#line 355
c_rt_lib0clear(&___nl__9);
#line 355
c_rt_lib0clear(&___nl__6);
#line 355
c_rt_lib0clear(&___nl__7);
#line 355
c_rt_lib0clear(&___nl__8);
#line 356
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(833)));
#line 356
c_rt_lib0delete(module_checker_priv0check_cmd(___nl__6, ___ref___1));
#line 356
c_rt_lib0clear(&___nl__6);
#line 357
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(*___ref___1, ___get_global_const(90)));
#line 357
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__6, ___get_global_const(190)));
#line 357
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 357
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 357
if(c_rt_lib0check_true_native(___nl__6)){ goto label_162;}
#line 357
c_rt_lib0move(&___nl__7, c_rt_lib0get_false());
#line 357
c_rt_lib0copy(&___nl__5, ___nl__7);
#line 357
c_rt_lib0clear(&___nl__7);
#line 357
goto label_162;
#line 357
label_162:
#line 357
c_rt_lib0clear(&___nl__6);
#line 358
c_rt_lib0move(&___nl__6,___get_global_const(90));
#line 358
c_rt_lib0move(&___nl__6, c_rt_lib0get_ref_hash(*___ref___1, ___nl__6));
#line 358
c_rt_lib0copy(&___nl__7, ___nl__5);
#line 358
c_rt_lib0hash_set_value_dec(&___nl__6, ___get_global_const(190), ___nl__7);
#line 358
c_rt_lib0move(&___nl__8,___get_global_const(90));
#line 358
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___1, ___nl__8, ___nl__6));
#line 358
c_rt_lib0clear(&___nl__8);
#line 358
c_rt_lib0clear(&___nl__6);
#line 358
c_rt_lib0clear(&___nl__7);
#line 358
c_rt_lib0clear(&___nl__5);
#line 358
c_rt_lib0clear(&___nl__4);
#line 359
goto label_868;
#line 359
label_176:
#line 359
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(817)));
#line 360
c_rt_lib0move(&___nl__5, module_checker_priv0save_block(___ref___1));
#line 361
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(834)));
#line 361
c_rt_lib0move(&___nl__7, c_rt_lib0priv_is(___nl__6, ___get_global_const(192)));
#line 361
if(c_rt_lib0check_true_native(___nl__7)){ goto label_187;}
#line 363
c_rt_lib0move(&___nl__7, c_rt_lib0priv_is(___nl__6, ___get_global_const(828)));
#line 363
if(c_rt_lib0check_true_native(___nl__7)){ goto label_192;}
#line 363
c_rt_lib0move(&___nl__7,___get_global_const(91));
#line 363
c_rt_lib0move(&___nl__7, c_rt_lib0array_mk(2, ___nl__7, ___nl__6));
#line 363
nl_die_arg(___nl__7);
#line 361
label_187:
#line 361
c_rt_lib0move(&___nl__8, c_rt_lib0priv_as(___nl__6, ___get_global_const(192)));
#line 362
c_rt_lib0delete(module_checker_priv0check_val(___nl__8, ___ref___1));
#line 362
c_rt_lib0clear(&___nl__8);
#line 363
goto label_201;
#line 363
label_192:
#line 363
c_rt_lib0move(&___nl__8, c_rt_lib0priv_as(___nl__6, ___get_global_const(828)));
#line 364
c_rt_lib0move(&___nl__9, c_rt_lib0get_false());
#line 364
c_rt_lib0move(&___nl__10, c_rt_lib0get_false());
#line 364
c_rt_lib0delete(module_checker_priv0add_var_dec(___nl__8, ___nl__9, ___nl__10, ___ref___1));
#line 364
c_rt_lib0clear(&___nl__10);
#line 364
c_rt_lib0clear(&___nl__9);
#line 364
c_rt_lib0clear(&___nl__8);
#line 365
goto label_201;
#line 365
label_201:
#line 365
c_rt_lib0clear(&___nl__6);
#line 365
c_rt_lib0clear(&___nl__7);
#line 366
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(831)));
#line 366
c_rt_lib0delete(module_checker_priv0check_val(___nl__6, ___ref___1));
#line 366
c_rt_lib0clear(&___nl__6);
#line 367
c_rt_lib0move(&___nl__6, c_rt_lib0get_true());
#line 367
c_rt_lib0copy(&___nl__7, ___nl__6);
#line 367
c_rt_lib0hash_set_value_dec(___ref___1, ___get_global_const(782), ___nl__7);
#line 367
c_rt_lib0clear(&___nl__6);
#line 367
c_rt_lib0clear(&___nl__7);
#line 368
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(201)));
#line 368
c_rt_lib0delete(module_checker_priv0check_cmd(___nl__6, ___ref___1));
#line 368
c_rt_lib0clear(&___nl__6);
#line 369
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(835)));
#line 369
c_rt_lib0delete(module_checker_priv0check_val(___nl__6, ___ref___1));
#line 369
c_rt_lib0clear(&___nl__6);
#line 370
c_rt_lib0delete(module_checker_priv0load_block(___ref___1, ___nl__5));
#line 371
c_rt_lib0move(&___nl__6, c_rt_lib0get_false());
#line 371
c_rt_lib0move(&___nl__7,___get_global_const(90));
#line 371
c_rt_lib0move(&___nl__7, c_rt_lib0get_ref_hash(*___ref___1, ___nl__7));
#line 371
c_rt_lib0copy(&___nl__8, ___nl__6);
#line 371
c_rt_lib0hash_set_value_dec(&___nl__7, ___get_global_const(190), ___nl__8);
#line 371
c_rt_lib0move(&___nl__9,___get_global_const(90));
#line 371
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___1, ___nl__9, ___nl__7));
#line 371
c_rt_lib0clear(&___nl__9);
#line 371
c_rt_lib0clear(&___nl__6);
#line 371
c_rt_lib0clear(&___nl__7);
#line 371
c_rt_lib0clear(&___nl__8);
#line 371
c_rt_lib0clear(&___nl__5);
#line 371
c_rt_lib0clear(&___nl__4);
#line 372
goto label_868;
#line 372
label_233:
#line 372
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(818)));
#line 373
c_rt_lib0move(&___nl__5, module_checker_priv0save_block(___ref___1));
#line 374
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(3)));
#line 374
c_rt_lib0delete(module_checker_priv0check_val(___nl__6, ___ref___1));
#line 374
c_rt_lib0clear(&___nl__6);
#line 375
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(835)));
#line 375
c_rt_lib0move(&___nl__7, c_rt_lib0get_true());
#line 375
c_rt_lib0move(&___nl__8, c_rt_lib0get_true());
#line 375
c_rt_lib0delete(module_checker_priv0add_var_dec(___nl__6, ___nl__7, ___nl__8, ___ref___1));
#line 375
c_rt_lib0clear(&___nl__8);
#line 375
c_rt_lib0clear(&___nl__7);
#line 375
c_rt_lib0clear(&___nl__6);
#line 376
c_rt_lib0move(&___nl__6, c_rt_lib0get_true());
#line 376
c_rt_lib0copy(&___nl__7, ___nl__6);
#line 376
c_rt_lib0hash_set_value_dec(___ref___1, ___get_global_const(782), ___nl__7);
#line 376
c_rt_lib0clear(&___nl__6);
#line 376
c_rt_lib0clear(&___nl__7);
#line 377
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(201)));
#line 377
c_rt_lib0delete(module_checker_priv0check_cmd(___nl__6, ___ref___1));
#line 377
c_rt_lib0clear(&___nl__6);
#line 378
c_rt_lib0delete(module_checker_priv0load_block(___ref___1, ___nl__5));
#line 379
c_rt_lib0move(&___nl__6, c_rt_lib0get_false());
#line 379
c_rt_lib0move(&___nl__7,___get_global_const(90));
#line 379
c_rt_lib0move(&___nl__7, c_rt_lib0get_ref_hash(*___ref___1, ___nl__7));
#line 379
c_rt_lib0copy(&___nl__8, ___nl__6);
#line 379
c_rt_lib0hash_set_value_dec(&___nl__7, ___get_global_const(190), ___nl__8);
#line 379
c_rt_lib0move(&___nl__9,___get_global_const(90));
#line 379
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___1, ___nl__9, ___nl__7));
#line 379
c_rt_lib0clear(&___nl__9);
#line 379
c_rt_lib0clear(&___nl__6);
#line 379
c_rt_lib0clear(&___nl__7);
#line 379
c_rt_lib0clear(&___nl__8);
#line 379
c_rt_lib0clear(&___nl__5);
#line 379
c_rt_lib0clear(&___nl__4);
#line 380
goto label_868;
#line 380
label_269:
#line 380
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(819)));
#line 381
c_rt_lib0move(&___nl__5, module_checker_priv0save_block(___ref___1));
#line 382
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(328)));
#line 382
c_rt_lib0delete(module_checker_priv0check_val(___nl__6, ___ref___1));
#line 382
c_rt_lib0clear(&___nl__6);
#line 383
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(198)));
#line 383
c_rt_lib0move(&___nl__7, c_rt_lib0get_true());
#line 383
c_rt_lib0move(&___nl__8, c_rt_lib0get_true());
#line 383
c_rt_lib0delete(module_checker_priv0add_var_dec(___nl__6, ___nl__7, ___nl__8, ___ref___1));
#line 383
c_rt_lib0clear(&___nl__8);
#line 383
c_rt_lib0clear(&___nl__7);
#line 383
c_rt_lib0clear(&___nl__6);
#line 384
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(329)));
#line 384
c_rt_lib0move(&___nl__7, c_rt_lib0get_true());
#line 384
c_rt_lib0move(&___nl__8, c_rt_lib0get_true());
#line 384
c_rt_lib0delete(module_checker_priv0add_var_dec(___nl__6, ___nl__7, ___nl__8, ___ref___1));
#line 384
c_rt_lib0clear(&___nl__8);
#line 384
c_rt_lib0clear(&___nl__7);
#line 384
c_rt_lib0clear(&___nl__6);
#line 385
c_rt_lib0move(&___nl__6, c_rt_lib0get_true());
#line 385
c_rt_lib0copy(&___nl__7, ___nl__6);
#line 385
c_rt_lib0hash_set_value_dec(___ref___1, ___get_global_const(782), ___nl__7);
#line 385
c_rt_lib0clear(&___nl__6);
#line 385
c_rt_lib0clear(&___nl__7);
#line 386
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(201)));
#line 386
c_rt_lib0delete(module_checker_priv0check_cmd(___nl__6, ___ref___1));
#line 386
c_rt_lib0clear(&___nl__6);
#line 387
c_rt_lib0delete(module_checker_priv0load_block(___ref___1, ___nl__5));
#line 388
c_rt_lib0move(&___nl__6, c_rt_lib0get_false());
#line 388
c_rt_lib0move(&___nl__7,___get_global_const(90));
#line 388
c_rt_lib0move(&___nl__7, c_rt_lib0get_ref_hash(*___ref___1, ___nl__7));
#line 388
c_rt_lib0copy(&___nl__8, ___nl__6);
#line 388
c_rt_lib0hash_set_value_dec(&___nl__7, ___get_global_const(190), ___nl__8);
#line 388
c_rt_lib0move(&___nl__9,___get_global_const(90));
#line 388
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___1, ___nl__9, ___nl__7));
#line 388
c_rt_lib0clear(&___nl__9);
#line 388
c_rt_lib0clear(&___nl__6);
#line 388
c_rt_lib0clear(&___nl__7);
#line 388
c_rt_lib0clear(&___nl__8);
#line 388
c_rt_lib0clear(&___nl__5);
#line 388
c_rt_lib0clear(&___nl__4);
#line 389
goto label_868;
#line 389
label_312:
#line 389
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(140)));
#line 390
c_rt_lib0move(&___nl__5, module_checker_priv0save_block(___ref___1));
#line 391
c_rt_lib0move(&___nl__6, c_rt_lib0get_true());
#line 391
c_rt_lib0copy(&___nl__7, ___nl__6);
#line 391
c_rt_lib0hash_set_value_dec(___ref___1, ___get_global_const(782), ___nl__7);
#line 391
c_rt_lib0clear(&___nl__6);
#line 391
c_rt_lib0clear(&___nl__7);
#line 392
c_rt_lib0delete(module_checker_priv0check_cmd(___nl__4, ___ref___1));
#line 393
c_rt_lib0delete(module_checker_priv0load_block(___ref___1, ___nl__5));
#line 393
c_rt_lib0clear(&___nl__5);
#line 393
c_rt_lib0clear(&___nl__4);
#line 394
goto label_868;
#line 394
label_325:
#line 394
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(820)));
#line 395
c_rt_lib0move(&___nl__5, module_checker_priv0save_block(___ref___1));
#line 396
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(836)));
#line 396
c_rt_lib0delete(module_checker_priv0check_val(___nl__6, ___ref___1));
#line 396
c_rt_lib0clear(&___nl__6);
#line 397
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(835)));
#line 397
c_rt_lib0move(&___nl__7, c_rt_lib0get_true());
#line 397
c_rt_lib0move(&___nl__8, c_rt_lib0get_true());
#line 397
c_rt_lib0delete(module_checker_priv0add_var_dec(___nl__6, ___nl__7, ___nl__8, ___ref___1));
#line 397
c_rt_lib0clear(&___nl__8);
#line 397
c_rt_lib0clear(&___nl__7);
#line 397
c_rt_lib0clear(&___nl__6);
#line 398
c_rt_lib0move(&___nl__6, c_rt_lib0get_true());
#line 398
c_rt_lib0copy(&___nl__7, ___nl__6);
#line 398
c_rt_lib0hash_set_value_dec(___ref___1, ___get_global_const(782), ___nl__7);
#line 398
c_rt_lib0clear(&___nl__6);
#line 398
c_rt_lib0clear(&___nl__7);
#line 399
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(201)));
#line 399
c_rt_lib0delete(module_checker_priv0check_cmd(___nl__6, ___ref___1));
#line 399
c_rt_lib0clear(&___nl__6);
#line 400
c_rt_lib0delete(module_checker_priv0load_block(___ref___1, ___nl__5));
#line 401
c_rt_lib0move(&___nl__6, c_rt_lib0get_false());
#line 401
c_rt_lib0move(&___nl__7,___get_global_const(90));
#line 401
c_rt_lib0move(&___nl__7, c_rt_lib0get_ref_hash(*___ref___1, ___nl__7));
#line 401
c_rt_lib0copy(&___nl__8, ___nl__6);
#line 401
c_rt_lib0hash_set_value_dec(&___nl__7, ___get_global_const(190), ___nl__8);
#line 401
c_rt_lib0move(&___nl__9,___get_global_const(90));
#line 401
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___1, ___nl__9, ___nl__7));
#line 401
c_rt_lib0clear(&___nl__9);
#line 401
c_rt_lib0clear(&___nl__6);
#line 401
c_rt_lib0clear(&___nl__7);
#line 401
c_rt_lib0clear(&___nl__8);
#line 401
c_rt_lib0clear(&___nl__5);
#line 401
c_rt_lib0clear(&___nl__4);
#line 402
goto label_868;
#line 402
label_361:
#line 402
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(821)));
#line 403
c_rt_lib0move(&___nl__5, module_checker_priv0save_block(___ref___1));
#line 404
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(831)));
#line 404
c_rt_lib0delete(module_checker_priv0check_val(___nl__6, ___ref___1));
#line 404
c_rt_lib0clear(&___nl__6);
#line 405
c_rt_lib0move(&___nl__6, c_rt_lib0get_true());
#line 405
c_rt_lib0copy(&___nl__7, ___nl__6);
#line 405
c_rt_lib0hash_set_value_dec(___ref___1, ___get_global_const(782), ___nl__7);
#line 405
c_rt_lib0clear(&___nl__6);
#line 405
c_rt_lib0clear(&___nl__7);
#line 406
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(201)));
#line 406
c_rt_lib0delete(module_checker_priv0check_cmd(___nl__6, ___ref___1));
#line 406
c_rt_lib0clear(&___nl__6);
#line 407
c_rt_lib0delete(module_checker_priv0load_block(___ref___1, ___nl__5));
#line 408
c_rt_lib0move(&___nl__6, c_rt_lib0get_false());
#line 408
c_rt_lib0move(&___nl__7,___get_global_const(90));
#line 408
c_rt_lib0move(&___nl__7, c_rt_lib0get_ref_hash(*___ref___1, ___nl__7));
#line 408
c_rt_lib0copy(&___nl__8, ___nl__6);
#line 408
c_rt_lib0hash_set_value_dec(&___nl__7, ___get_global_const(190), ___nl__8);
#line 408
c_rt_lib0move(&___nl__9,___get_global_const(90));
#line 408
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___1, ___nl__9, ___nl__7));
#line 408
c_rt_lib0clear(&___nl__9);
#line 408
c_rt_lib0clear(&___nl__6);
#line 408
c_rt_lib0clear(&___nl__7);
#line 408
c_rt_lib0clear(&___nl__8);
#line 408
c_rt_lib0clear(&___nl__5);
#line 408
c_rt_lib0clear(&___nl__4);
#line 409
goto label_868;
#line 409
label_390:
#line 409
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(822)));
#line 410
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(831)));
#line 410
c_rt_lib0delete(module_checker_priv0check_val(___nl__5, ___ref___1));
#line 410
c_rt_lib0clear(&___nl__5);
#line 411
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(201)));
#line 411
c_rt_lib0delete(module_checker_priv0check_cmd(___nl__5, ___ref___1));
#line 411
c_rt_lib0clear(&___nl__5);
#line 412
c_rt_lib0move(&___nl__5, c_rt_lib0get_false());
#line 412
c_rt_lib0move(&___nl__6,___get_global_const(90));
#line 412
c_rt_lib0move(&___nl__6, c_rt_lib0get_ref_hash(*___ref___1, ___nl__6));
#line 412
c_rt_lib0copy(&___nl__7, ___nl__5);
#line 412
c_rt_lib0hash_set_value_dec(&___nl__6, ___get_global_const(190), ___nl__7);
#line 412
c_rt_lib0move(&___nl__8,___get_global_const(90));
#line 412
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___1, ___nl__8, ___nl__6));
#line 412
c_rt_lib0clear(&___nl__8);
#line 412
c_rt_lib0clear(&___nl__5);
#line 412
c_rt_lib0clear(&___nl__6);
#line 412
c_rt_lib0clear(&___nl__7);
#line 412
c_rt_lib0clear(&___nl__4);
#line 413
goto label_868;
#line 413
label_411:
#line 413
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(823)));
#line 414
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(831)));
#line 414
c_rt_lib0delete(module_checker_priv0check_val(___nl__5, ___ref___1));
#line 414
c_rt_lib0clear(&___nl__5);
#line 415
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(201)));
#line 415
c_rt_lib0delete(module_checker_priv0check_cmd(___nl__5, ___ref___1));
#line 415
c_rt_lib0clear(&___nl__5);
#line 416
c_rt_lib0move(&___nl__5, c_rt_lib0get_false());
#line 416
c_rt_lib0move(&___nl__6,___get_global_const(90));
#line 416
c_rt_lib0move(&___nl__6, c_rt_lib0get_ref_hash(*___ref___1, ___nl__6));
#line 416
c_rt_lib0copy(&___nl__7, ___nl__5);
#line 416
c_rt_lib0hash_set_value_dec(&___nl__6, ___get_global_const(190), ___nl__7);
#line 416
c_rt_lib0move(&___nl__8,___get_global_const(90));
#line 416
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___1, ___nl__8, ___nl__6));
#line 416
c_rt_lib0clear(&___nl__8);
#line 416
c_rt_lib0clear(&___nl__5);
#line 416
c_rt_lib0clear(&___nl__6);
#line 416
c_rt_lib0clear(&___nl__7);
#line 416
c_rt_lib0clear(&___nl__4);
#line 417
goto label_868;
#line 417
label_432:
#line 418
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(*___ref___1, ___get_global_const(782)));
#line 418
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 418
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 418
if(c_rt_lib0check_true_native(___nl__4)){ goto label_447;}
#line 419
c_rt_lib0move(&___nl__5,___get_global_const(18));
#line 419
c_rt_lib0move(&___nl__5, c_rt_lib0get_ref_hash(*___ref___1, ___nl__5));
#line 419
c_rt_lib0move(&___nl__6,___get_global_const(837));
#line 419
c_rt_lib0delete(module_checker_priv0add_error(&___nl__5, ___nl__6));
#line 419
c_rt_lib0clear(&___nl__6);
#line 419
c_rt_lib0move(&___nl__6,___get_global_const(18));
#line 419
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___1, ___nl__6, ___nl__5));
#line 419
c_rt_lib0clear(&___nl__6);
#line 419
c_rt_lib0clear(&___nl__5);
#line 420
goto label_447;
#line 420
label_447:
#line 420
c_rt_lib0clear(&___nl__4);
#line 421
goto label_868;
#line 421
label_450:
#line 422
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(*___ref___1, ___get_global_const(782)));
#line 422
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 422
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 422
if(c_rt_lib0check_true_native(___nl__4)){ goto label_465;}
#line 423
c_rt_lib0move(&___nl__5,___get_global_const(18));
#line 423
c_rt_lib0move(&___nl__5, c_rt_lib0get_ref_hash(*___ref___1, ___nl__5));
#line 423
c_rt_lib0move(&___nl__6,___get_global_const(838));
#line 423
c_rt_lib0delete(module_checker_priv0add_error(&___nl__5, ___nl__6));
#line 423
c_rt_lib0clear(&___nl__6);
#line 423
c_rt_lib0move(&___nl__6,___get_global_const(18));
#line 423
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___1, ___nl__6, ___nl__5));
#line 423
c_rt_lib0clear(&___nl__6);
#line 423
c_rt_lib0clear(&___nl__5);
#line 424
goto label_465;
#line 424
label_465:
#line 424
c_rt_lib0clear(&___nl__4);
#line 425
goto label_868;
#line 425
label_468:
#line 425
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(826)));
#line 426
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(198)));
#line 426
c_rt_lib0delete(module_checker_priv0check_val(___nl__5, ___ref___1));
#line 426
c_rt_lib0clear(&___nl__5);
#line 427
c_rt_lib0move(&___nl__5, c_rt_lib0get_true());
#line 428
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(839)));
#line 428
c_rt_lib0move(&___nl__8,___get_global_const(0));
#line 428
c_rt_lib0move(&___nl__9,___get_global_const(1));
#line 428
c_rt_lib0move(&___nl__10, c_rt_lib0array_len(___nl__6));
#line 428
label_478:
#line 428
c_rt_lib0move(&___nl__11, c_rt_lib0ge(___nl__8, ___nl__10));
#line 428
if(c_rt_lib0check_true_native(___nl__11)){ goto label_535;}
#line 428
c_rt_lib0move(&___nl__7, c_rt_lib0array_get(___nl__6, ___nl__8));
#line 429
c_rt_lib0move(&___nl__12, c_rt_lib0get_false());
#line 429
c_rt_lib0move(&___nl__13,___get_global_const(90));
#line 429
c_rt_lib0move(&___nl__13, c_rt_lib0get_ref_hash(*___ref___1, ___nl__13));
#line 429
c_rt_lib0copy(&___nl__14, ___nl__12);
#line 429
c_rt_lib0hash_set_value_dec(&___nl__13, ___get_global_const(190), ___nl__14);
#line 429
c_rt_lib0move(&___nl__15,___get_global_const(90));
#line 429
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___1, ___nl__15, ___nl__13));
#line 429
c_rt_lib0clear(&___nl__15);
#line 429
c_rt_lib0clear(&___nl__12);
#line 429
c_rt_lib0clear(&___nl__13);
#line 429
c_rt_lib0clear(&___nl__14);
#line 430
c_rt_lib0move(&___nl__12, module_checker_priv0save_block(___ref___1));
#line 431
c_rt_lib0move(&___nl__13, c_rt_lib0hash_get_value_dec(___nl__7, ___get_global_const(840)));
#line 431
c_rt_lib0move(&___nl__13, c_rt_lib0hash_get_value_dec(___nl__13, ___get_global_const(192)));
#line 431
c_rt_lib0move(&___nl__14, c_rt_lib0priv_is(___nl__13, ___get_global_const(41)));
#line 431
if(c_rt_lib0check_true_native(___nl__14)){ goto label_503;}
#line 432
c_rt_lib0move(&___nl__14, c_rt_lib0priv_is(___nl__13, ___get_global_const(192)));
#line 432
if(c_rt_lib0check_true_native(___nl__14)){ goto label_505;}
#line 432
c_rt_lib0move(&___nl__14,___get_global_const(91));
#line 432
c_rt_lib0move(&___nl__14, c_rt_lib0array_mk(2, ___nl__14, ___nl__13));
#line 432
nl_die_arg(___nl__14);
#line 431
label_503:
#line 432
goto label_514;
#line 432
label_505:
#line 432
c_rt_lib0move(&___nl__15, c_rt_lib0priv_as(___nl__13, ___get_global_const(192)));
#line 433
c_rt_lib0move(&___nl__16, c_rt_lib0get_false());
#line 433
c_rt_lib0move(&___nl__17, c_rt_lib0get_true());
#line 433
c_rt_lib0delete(module_checker_priv0add_var_dec(___nl__15, ___nl__16, ___nl__17, ___ref___1));
#line 433
c_rt_lib0clear(&___nl__17);
#line 433
c_rt_lib0clear(&___nl__16);
#line 433
c_rt_lib0clear(&___nl__15);
#line 434
goto label_514;
#line 434
label_514:
#line 434
c_rt_lib0clear(&___nl__13);
#line 434
c_rt_lib0clear(&___nl__14);
#line 435
c_rt_lib0move(&___nl__13, c_rt_lib0hash_get_value_dec(___nl__7, ___get_global_const(201)));
#line 435
c_rt_lib0delete(module_checker_priv0check_cmd(___nl__13, ___ref___1));
#line 435
c_rt_lib0clear(&___nl__13);
#line 436
c_rt_lib0move(&___nl__13, c_rt_lib0hash_get_value_dec(*___ref___1, ___get_global_const(90)));
#line 436
c_rt_lib0move(&___nl__13, c_rt_lib0hash_get_value_dec(___nl__13, ___get_global_const(190)));
#line 436
c_rt_lib0move(&___nl__13, c_rt_lib0not(___nl__13));
#line 436
c_rt_lib0move(&___nl__13, c_rt_lib0not(___nl__13));
#line 436
if(c_rt_lib0check_true_native(___nl__13)){ goto label_529;}
#line 436
c_rt_lib0move(&___nl__14, c_rt_lib0get_false());
#line 436
c_rt_lib0copy(&___nl__5, ___nl__14);
#line 436
c_rt_lib0clear(&___nl__14);
#line 436
goto label_529;
#line 436
label_529:
#line 436
c_rt_lib0clear(&___nl__13);
#line 437
c_rt_lib0delete(module_checker_priv0load_block(___ref___1, ___nl__12));
#line 437
c_rt_lib0clear(&___nl__12);
#line 438
c_rt_lib0move(&___nl__8, c_rt_lib0add_mod(___nl__8, ___nl__9));
#line 438
goto label_478;
#line 438
label_535:
#line 438
c_rt_lib0clear(&___nl__6);
#line 438
c_rt_lib0clear(&___nl__7);
#line 438
c_rt_lib0clear(&___nl__8);
#line 438
c_rt_lib0clear(&___nl__9);
#line 438
c_rt_lib0clear(&___nl__10);
#line 438
c_rt_lib0clear(&___nl__11);
#line 439
c_rt_lib0move(&___nl__6,___get_global_const(90));
#line 439
c_rt_lib0move(&___nl__6, c_rt_lib0get_ref_hash(*___ref___1, ___nl__6));
#line 439
c_rt_lib0copy(&___nl__7, ___nl__5);
#line 439
c_rt_lib0hash_set_value_dec(&___nl__6, ___get_global_const(190), ___nl__7);
#line 439
c_rt_lib0move(&___nl__8,___get_global_const(90));
#line 439
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___1, ___nl__8, ___nl__6));
#line 439
c_rt_lib0clear(&___nl__8);
#line 439
c_rt_lib0clear(&___nl__6);
#line 439
c_rt_lib0clear(&___nl__7);
#line 439
c_rt_lib0clear(&___nl__5);
#line 439
c_rt_lib0clear(&___nl__4);
#line 440
goto label_868;
#line 440
label_554:
#line 440
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(192)));
#line 441
c_rt_lib0delete(module_checker_priv0check_val(___nl__4, ___ref___1));
#line 441
c_rt_lib0clear(&___nl__4);
#line 442
goto label_868;
#line 442
label_559:
#line 442
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(90)));
#line 443
c_rt_lib0delete(module_checker_priv0check_val(___nl__4, ___ref___1));
#line 444
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(*___ref___1, ___get_global_const(90)));
#line 444
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(233)));
#line 444
c_rt_lib0move(&___nl__6, c_rt_lib0priv_is(___nl__5, ___get_global_const(192)));
#line 444
if(c_rt_lib0check_true_native(___nl__6)){ goto label_577;}
#line 446
c_rt_lib0move(&___nl__6, c_rt_lib0priv_is(___nl__5, ___get_global_const(41)));
#line 446
if(c_rt_lib0check_true_native(___nl__6)){ goto label_595;}
#line 448
c_rt_lib0move(&___nl__6, c_rt_lib0priv_is(___nl__5, ___get_global_const(779)));
#line 448
if(c_rt_lib0check_true_native(___nl__6)){ goto label_615;}
#line 451
c_rt_lib0move(&___nl__6, c_rt_lib0priv_is(___nl__5, ___get_global_const(778)));
#line 451
if(c_rt_lib0check_true_native(___nl__6)){ goto label_651;}
#line 454
c_rt_lib0move(&___nl__6, c_rt_lib0priv_is(___nl__5, ___get_global_const(777)));
#line 454
if(c_rt_lib0check_true_native(___nl__6)){ goto label_688;}
#line 454
c_rt_lib0move(&___nl__6,___get_global_const(91));
#line 454
c_rt_lib0move(&___nl__6, c_rt_lib0array_mk(2, ___nl__6, ___nl__5));
#line 454
nl_die_arg(___nl__6);
#line 444
label_577:
#line 445
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(192)));
#line 445
c_rt_lib0move(&___nl__7, c_rt_lib0priv_is(___nl__7, ___get_global_const(830)));
#line 445
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 445
if(c_rt_lib0check_true_native(___nl__7)){ goto label_592;}
#line 445
c_rt_lib0move(&___nl__8,___get_global_const(18));
#line 445
c_rt_lib0move(&___nl__8, c_rt_lib0get_ref_hash(*___ref___1, ___nl__8));
#line 445
c_rt_lib0move(&___nl__9,___get_global_const(841));
#line 445
c_rt_lib0delete(module_checker_priv0add_error(&___nl__8, ___nl__9));
#line 445
c_rt_lib0clear(&___nl__9);
#line 445
c_rt_lib0move(&___nl__9,___get_global_const(18));
#line 445
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___1, ___nl__9, ___nl__8));
#line 445
c_rt_lib0clear(&___nl__9);
#line 445
c_rt_lib0clear(&___nl__8);
#line 445
goto label_592;
#line 445
label_592:
#line 445
c_rt_lib0clear(&___nl__7);
#line 446
goto label_707;
#line 446
label_595:
#line 447
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(192)));
#line 447
c_rt_lib0move(&___nl__7, c_rt_lib0priv_is(___nl__7, ___get_global_const(830)));
#line 447
if(c_rt_lib0check_true_native(___nl__7)){ goto label_601;}
#line 447
c_rt_lib0move(&___nl__7, c_rt_lib0ov_mk_none(___get_global_const(779)));
#line 447
goto label_603;
#line 447
label_601:
#line 447
c_rt_lib0move(&___nl__7, c_rt_lib0ov_mk_none(___get_global_const(778)));
#line 447
label_603:
#line 447
c_rt_lib0move(&___nl__8,___get_global_const(90));
#line 447
c_rt_lib0move(&___nl__8, c_rt_lib0get_ref_hash(*___ref___1, ___nl__8));
#line 447
c_rt_lib0copy(&___nl__9, ___nl__7);
#line 447
c_rt_lib0hash_set_value_dec(&___nl__8, ___get_global_const(233), ___nl__9);
#line 447
c_rt_lib0move(&___nl__10,___get_global_const(90));
#line 447
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___1, ___nl__10, ___nl__8));
#line 447
c_rt_lib0clear(&___nl__10);
#line 447
c_rt_lib0clear(&___nl__7);
#line 447
c_rt_lib0clear(&___nl__8);
#line 447
c_rt_lib0clear(&___nl__9);
#line 448
goto label_707;
#line 448
label_615:
#line 449
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(192)));
#line 449
c_rt_lib0move(&___nl__7, c_rt_lib0priv_is(___nl__7, ___get_global_const(830)));
#line 449
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 449
if(c_rt_lib0check_true_native(___nl__7)){ goto label_630;}
#line 449
c_rt_lib0move(&___nl__8,___get_global_const(18));
#line 449
c_rt_lib0move(&___nl__8, c_rt_lib0get_ref_hash(*___ref___1, ___nl__8));
#line 449
c_rt_lib0move(&___nl__9,___get_global_const(842));
#line 449
c_rt_lib0delete(module_checker_priv0add_error(&___nl__8, ___nl__9));
#line 449
c_rt_lib0clear(&___nl__9);
#line 449
c_rt_lib0move(&___nl__9,___get_global_const(18));
#line 449
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___1, ___nl__9, ___nl__8));
#line 449
c_rt_lib0clear(&___nl__9);
#line 449
c_rt_lib0clear(&___nl__8);
#line 449
goto label_630;
#line 449
label_630:
#line 449
c_rt_lib0clear(&___nl__7);
#line 450
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(192)));
#line 450
c_rt_lib0move(&___nl__7, c_rt_lib0priv_is(___nl__7, ___get_global_const(830)));
#line 450
if(c_rt_lib0check_true_native(___nl__7)){ goto label_637;}
#line 450
c_rt_lib0move(&___nl__7, c_rt_lib0ov_mk_none(___get_global_const(779)));
#line 450
goto label_639;
#line 450
label_637:
#line 450
c_rt_lib0move(&___nl__7, c_rt_lib0ov_mk_none(___get_global_const(778)));
#line 450
label_639:
#line 450
c_rt_lib0move(&___nl__8,___get_global_const(90));
#line 450
c_rt_lib0move(&___nl__8, c_rt_lib0get_ref_hash(*___ref___1, ___nl__8));
#line 450
c_rt_lib0copy(&___nl__9, ___nl__7);
#line 450
c_rt_lib0hash_set_value_dec(&___nl__8, ___get_global_const(233), ___nl__9);
#line 450
c_rt_lib0move(&___nl__10,___get_global_const(90));
#line 450
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___1, ___nl__10, ___nl__8));
#line 450
c_rt_lib0clear(&___nl__10);
#line 450
c_rt_lib0clear(&___nl__7);
#line 450
c_rt_lib0clear(&___nl__8);
#line 450
c_rt_lib0clear(&___nl__9);
#line 451
goto label_707;
#line 451
label_651:
#line 452
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(192)));
#line 452
c_rt_lib0move(&___nl__7, c_rt_lib0priv_is(___nl__7, ___get_global_const(830)));
#line 452
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 452
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 452
if(c_rt_lib0check_true_native(___nl__7)){ goto label_667;}
#line 452
c_rt_lib0move(&___nl__8,___get_global_const(18));
#line 452
c_rt_lib0move(&___nl__8, c_rt_lib0get_ref_hash(*___ref___1, ___nl__8));
#line 452
c_rt_lib0move(&___nl__9,___get_global_const(843));
#line 452
c_rt_lib0delete(module_checker_priv0add_error(&___nl__8, ___nl__9));
#line 452
c_rt_lib0clear(&___nl__9);
#line 452
c_rt_lib0move(&___nl__9,___get_global_const(18));
#line 452
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___1, ___nl__9, ___nl__8));
#line 452
c_rt_lib0clear(&___nl__9);
#line 452
c_rt_lib0clear(&___nl__8);
#line 452
goto label_667;
#line 452
label_667:
#line 452
c_rt_lib0clear(&___nl__7);
#line 453
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(192)));
#line 453
c_rt_lib0move(&___nl__7, c_rt_lib0priv_is(___nl__7, ___get_global_const(830)));
#line 453
if(c_rt_lib0check_true_native(___nl__7)){ goto label_674;}
#line 453
c_rt_lib0move(&___nl__7, c_rt_lib0ov_mk_none(___get_global_const(779)));
#line 453
goto label_676;
#line 453
label_674:
#line 453
c_rt_lib0move(&___nl__7, c_rt_lib0ov_mk_none(___get_global_const(778)));
#line 453
label_676:
#line 453
c_rt_lib0move(&___nl__8,___get_global_const(90));
#line 453
c_rt_lib0move(&___nl__8, c_rt_lib0get_ref_hash(*___ref___1, ___nl__8));
#line 453
c_rt_lib0copy(&___nl__9, ___nl__7);
#line 453
c_rt_lib0hash_set_value_dec(&___nl__8, ___get_global_const(233), ___nl__9);
#line 453
c_rt_lib0move(&___nl__10,___get_global_const(90));
#line 453
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___1, ___nl__10, ___nl__8));
#line 453
c_rt_lib0clear(&___nl__10);
#line 453
c_rt_lib0clear(&___nl__7);
#line 453
c_rt_lib0clear(&___nl__8);
#line 453
c_rt_lib0clear(&___nl__9);
#line 454
goto label_707;
#line 454
label_688:
#line 455
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(192)));
#line 455
c_rt_lib0move(&___nl__7, c_rt_lib0priv_is(___nl__7, ___get_global_const(830)));
#line 455
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 455
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 455
if(c_rt_lib0check_true_native(___nl__7)){ goto label_704;}
#line 455
c_rt_lib0move(&___nl__8,___get_global_const(18));
#line 455
c_rt_lib0move(&___nl__8, c_rt_lib0get_ref_hash(*___ref___1, ___nl__8));
#line 455
c_rt_lib0move(&___nl__9,___get_global_const(844));
#line 455
c_rt_lib0delete(module_checker_priv0add_error(&___nl__8, ___nl__9));
#line 455
c_rt_lib0clear(&___nl__9);
#line 455
c_rt_lib0move(&___nl__9,___get_global_const(18));
#line 455
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___1, ___nl__9, ___nl__8));
#line 455
c_rt_lib0clear(&___nl__9);
#line 455
c_rt_lib0clear(&___nl__8);
#line 455
goto label_704;
#line 455
label_704:
#line 455
c_rt_lib0clear(&___nl__7);
#line 456
goto label_707;
#line 456
label_707:
#line 456
c_rt_lib0clear(&___nl__5);
#line 456
c_rt_lib0clear(&___nl__6);
#line 457
c_rt_lib0move(&___nl__5, c_rt_lib0get_true());
#line 457
c_rt_lib0move(&___nl__6,___get_global_const(90));
#line 457
c_rt_lib0move(&___nl__6, c_rt_lib0get_ref_hash(*___ref___1, ___nl__6));
#line 457
c_rt_lib0copy(&___nl__7, ___nl__5);
#line 457
c_rt_lib0hash_set_value_dec(&___nl__6, ___get_global_const(190), ___nl__7);
#line 457
c_rt_lib0move(&___nl__8,___get_global_const(90));
#line 457
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___1, ___nl__8, ___nl__6));
#line 457
c_rt_lib0clear(&___nl__8);
#line 457
c_rt_lib0clear(&___nl__5);
#line 457
c_rt_lib0clear(&___nl__6);
#line 457
c_rt_lib0clear(&___nl__7);
#line 457
c_rt_lib0clear(&___nl__4);
#line 458
goto label_868;
#line 458
label_723:
#line 458
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(827)));
#line 459
c_rt_lib0move(&___nl__5, module_checker_priv0save_block(___ref___1));
#line 460
c_rt_lib0move(&___nl__7,___get_global_const(0));
#line 460
c_rt_lib0move(&___nl__8,___get_global_const(1));
#line 460
c_rt_lib0move(&___nl__9, c_rt_lib0array_len(___nl__4));
#line 460
label_729:
#line 460
c_rt_lib0move(&___nl__10, c_rt_lib0ge(___nl__7, ___nl__9));
#line 460
if(c_rt_lib0check_true_native(___nl__10)){ goto label_736;}
#line 460
c_rt_lib0move(&___nl__6, c_rt_lib0array_get(___nl__4, ___nl__7));
#line 461
c_rt_lib0delete(module_checker_priv0check_cmd(___nl__6, ___ref___1));
#line 462
c_rt_lib0move(&___nl__7, c_rt_lib0add_mod(___nl__7, ___nl__8));
#line 462
goto label_729;
#line 462
label_736:
#line 462
c_rt_lib0clear(&___nl__6);
#line 462
c_rt_lib0clear(&___nl__7);
#line 462
c_rt_lib0clear(&___nl__8);
#line 462
c_rt_lib0clear(&___nl__9);
#line 462
c_rt_lib0clear(&___nl__10);
#line 463
c_rt_lib0delete(module_checker_priv0load_block(___ref___1, ___nl__5));
#line 463
c_rt_lib0clear(&___nl__5);
#line 463
c_rt_lib0clear(&___nl__4);
#line 464
goto label_868;
#line 464
label_746:
#line 464
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(217)));
#line 465
c_rt_lib0move(&___nl__6,___get_global_const(0));
#line 465
c_rt_lib0move(&___nl__7,___get_global_const(1));
#line 465
c_rt_lib0move(&___nl__8, c_rt_lib0array_len(___nl__4));
#line 465
label_751:
#line 465
c_rt_lib0move(&___nl__9, c_rt_lib0ge(___nl__6, ___nl__8));
#line 465
if(c_rt_lib0check_true_native(___nl__9)){ goto label_758;}
#line 465
c_rt_lib0move(&___nl__5, c_rt_lib0array_get(___nl__4, ___nl__6));
#line 466
c_rt_lib0delete(module_checker_priv0check_val(___nl__5, ___ref___1));
#line 467
c_rt_lib0move(&___nl__6, c_rt_lib0add_mod(___nl__6, ___nl__7));
#line 467
goto label_751;
#line 467
label_758:
#line 467
c_rt_lib0clear(&___nl__5);
#line 467
c_rt_lib0clear(&___nl__6);
#line 467
c_rt_lib0clear(&___nl__7);
#line 467
c_rt_lib0clear(&___nl__8);
#line 467
c_rt_lib0clear(&___nl__9);
#line 468
c_rt_lib0move(&___nl__5, c_rt_lib0get_true());
#line 468
c_rt_lib0move(&___nl__6,___get_global_const(90));
#line 468
c_rt_lib0move(&___nl__6, c_rt_lib0get_ref_hash(*___ref___1, ___nl__6));
#line 468
c_rt_lib0copy(&___nl__7, ___nl__5);
#line 468
c_rt_lib0hash_set_value_dec(&___nl__6, ___get_global_const(190), ___nl__7);
#line 468
c_rt_lib0move(&___nl__8,___get_global_const(90));
#line 468
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___1, ___nl__8, ___nl__6));
#line 468
c_rt_lib0clear(&___nl__8);
#line 468
c_rt_lib0clear(&___nl__5);
#line 468
c_rt_lib0clear(&___nl__6);
#line 468
c_rt_lib0clear(&___nl__7);
#line 468
c_rt_lib0clear(&___nl__4);
#line 469
goto label_868;
#line 469
label_777:
#line 469
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(828)));
#line 470
c_rt_lib0move(&___nl__5, c_rt_lib0get_false());
#line 470
c_rt_lib0move(&___nl__6, c_rt_lib0get_false());
#line 470
c_rt_lib0delete(module_checker_priv0add_var_dec(___nl__4, ___nl__5, ___nl__6, ___ref___1));
#line 470
c_rt_lib0clear(&___nl__6);
#line 470
c_rt_lib0clear(&___nl__5);
#line 470
c_rt_lib0clear(&___nl__4);
#line 471
goto label_868;
#line 471
label_786:
#line 471
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(829)));
#line 472
c_rt_lib0move(&___nl__5, c_rt_lib0priv_is(___nl__4, ___get_global_const(845)));
#line 472
if(c_rt_lib0check_true_native(___nl__5)){ goto label_797;}
#line 474
c_rt_lib0move(&___nl__5, c_rt_lib0priv_is(___nl__4, ___get_global_const(846)));
#line 474
if(c_rt_lib0check_true_native(___nl__5)){ goto label_806;}
#line 476
c_rt_lib0move(&___nl__5, c_rt_lib0priv_is(___nl__4, ___get_global_const(847)));
#line 476
if(c_rt_lib0check_true_native(___nl__5)){ goto label_817;}
#line 476
c_rt_lib0move(&___nl__5,___get_global_const(91));
#line 476
c_rt_lib0move(&___nl__5, c_rt_lib0array_mk(2, ___nl__5, ___nl__4));
#line 476
nl_die_arg(___nl__5);
#line 472
label_797:
#line 472
c_rt_lib0move(&___nl__6, c_rt_lib0priv_as(___nl__4, ___get_global_const(845)));
#line 473
c_rt_lib0move(&___nl__7, c_rt_lib0get_false());
#line 473
c_rt_lib0move(&___nl__8, c_rt_lib0get_false());
#line 473
c_rt_lib0delete(module_checker_priv0add_var_dec(___nl__6, ___nl__7, ___nl__8, ___ref___1));
#line 473
c_rt_lib0clear(&___nl__8);
#line 473
c_rt_lib0clear(&___nl__7);
#line 473
c_rt_lib0clear(&___nl__6);
#line 474
goto label_822;
#line 474
label_806:
#line 474
c_rt_lib0move(&___nl__6, c_rt_lib0priv_as(___nl__4, ___get_global_const(846)));
#line 475
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(195)));
#line 475
c_rt_lib0move(&___nl__9, c_rt_lib0ov_mk_arg(___get_global_const(208), ___nl__6));
#line 475
c_rt_lib0move(&___nl__7, c_rt_lib0hash_mk(2, ___get_global_const(195), ___nl__8, ___get_global_const(192), ___nl__9));
#line 475
c_rt_lib0clear(&___nl__8);
#line 475
c_rt_lib0clear(&___nl__9);
#line 475
c_rt_lib0delete(module_checker_priv0check_val(___nl__7, ___ref___1));
#line 475
c_rt_lib0clear(&___nl__7);
#line 475
c_rt_lib0clear(&___nl__6);
#line 476
goto label_822;
#line 476
label_817:
#line 476
c_rt_lib0move(&___nl__6, c_rt_lib0priv_as(___nl__4, ___get_global_const(847)));
#line 477
c_rt_lib0delete(module_checker_priv0check_val(___nl__6, ___ref___1));
#line 477
c_rt_lib0clear(&___nl__6);
#line 478
goto label_822;
#line 478
label_822:
#line 478
c_rt_lib0clear(&___nl__5);
#line 478
c_rt_lib0clear(&___nl__4);
#line 479
goto label_868;
#line 479
label_826:
#line 479
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(95)));
#line 480
c_rt_lib0move(&___nl__5, c_rt_lib0priv_is(___nl__4, ___get_global_const(845)));
#line 480
if(c_rt_lib0check_true_native(___nl__5)){ goto label_837;}
#line 482
c_rt_lib0move(&___nl__5, c_rt_lib0priv_is(___nl__4, ___get_global_const(846)));
#line 482
if(c_rt_lib0check_true_native(___nl__5)){ goto label_846;}
#line 484
c_rt_lib0move(&___nl__5, c_rt_lib0priv_is(___nl__4, ___get_global_const(847)));
#line 484
if(c_rt_lib0check_true_native(___nl__5)){ goto label_857;}
#line 484
c_rt_lib0move(&___nl__5,___get_global_const(91));
#line 484
c_rt_lib0move(&___nl__5, c_rt_lib0array_mk(2, ___nl__5, ___nl__4));
#line 484
nl_die_arg(___nl__5);
#line 480
label_837:
#line 480
c_rt_lib0move(&___nl__6, c_rt_lib0priv_as(___nl__4, ___get_global_const(845)));
#line 481
c_rt_lib0move(&___nl__7, c_rt_lib0get_false());
#line 481
c_rt_lib0move(&___nl__8, c_rt_lib0get_false());
#line 481
c_rt_lib0delete(module_checker_priv0add_var_dec(___nl__6, ___nl__7, ___nl__8, ___ref___1));
#line 481
c_rt_lib0clear(&___nl__8);
#line 481
c_rt_lib0clear(&___nl__7);
#line 481
c_rt_lib0clear(&___nl__6);
#line 482
goto label_862;
#line 482
label_846:
#line 482
c_rt_lib0move(&___nl__6, c_rt_lib0priv_as(___nl__4, ___get_global_const(846)));
#line 483
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(195)));
#line 483
c_rt_lib0move(&___nl__9, c_rt_lib0ov_mk_arg(___get_global_const(208), ___nl__6));
#line 483
c_rt_lib0move(&___nl__7, c_rt_lib0hash_mk(2, ___get_global_const(195), ___nl__8, ___get_global_const(192), ___nl__9));
#line 483
c_rt_lib0clear(&___nl__8);
#line 483
c_rt_lib0clear(&___nl__9);
#line 483
c_rt_lib0delete(module_checker_priv0check_val(___nl__7, ___ref___1));
#line 483
c_rt_lib0clear(&___nl__7);
#line 483
c_rt_lib0clear(&___nl__6);
#line 484
goto label_862;
#line 484
label_857:
#line 484
c_rt_lib0move(&___nl__6, c_rt_lib0priv_as(___nl__4, ___get_global_const(847)));
#line 485
c_rt_lib0delete(module_checker_priv0check_val(___nl__6, ___ref___1));
#line 485
c_rt_lib0clear(&___nl__6);
#line 486
goto label_862;
#line 486
label_862:
#line 486
c_rt_lib0clear(&___nl__5);
#line 486
c_rt_lib0clear(&___nl__4);
#line 487
goto label_868;
#line 487
label_866:
#line 488
goto label_868;
#line 488
label_868:
#line 488
c_rt_lib0clear(&___nl__2);
#line 488
c_rt_lib0clear(&___nl__3);
#line 488
c_rt_lib0clear(&___nl__0);
#line 488
return NULL;
}

ImmT module_checker_priv0check_lvalue(ImmT ___nl__0,ImmT * ___ref___1) {
c_rt_lib0arg_val(___nl__0);
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
#line 492
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(192)));
#line 492
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__2, ___get_global_const(848)));
#line 492
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 492
if(c_rt_lib0check_true_native(___nl__2)){ goto label_14;}
#line 493
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(192)));
#line 493
c_rt_lib0move(&___nl__3, c_rt_lib0priv_as(___nl__3, ___get_global_const(848)));
#line 493
c_rt_lib0move(&___nl__4, c_rt_lib0ov_mk_none(___get_global_const(222)));
#line 493
c_rt_lib0delete(module_checker_priv0use_var(___nl__3, ___nl__4, ___ref___1));
#line 493
c_rt_lib0clear(&___nl__4);
#line 493
c_rt_lib0clear(&___nl__3);
#line 494
c_rt_lib0clear(&___nl__0);
#line 494
c_rt_lib0clear(&___nl__2);
#line 494
return NULL;
#line 495
goto label_55;
#line 495
label_14:
#line 495
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(192)));
#line 495
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__2, ___get_global_const(208)));
#line 495
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 495
if(c_rt_lib0check_true_native(___nl__2)){ goto label_55;}
#line 496
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(192)));
#line 496
c_rt_lib0move(&___nl__3, c_rt_lib0priv_as(___nl__3, ___get_global_const(208)));
#line 497
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(443)));
#line 497
c_rt_lib0move(&___nl__5,___get_global_const(849));
#line 497
c_rt_lib0move(&___nl__4, c_rt_lib0eq(___nl__4, ___nl__5));
#line 497
c_rt_lib0clear(&___nl__5);
#line 497
if(c_rt_lib0check_true_native(___nl__4)){ goto label_30;}
#line 497
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(443)));
#line 497
c_rt_lib0move(&___nl__5,___get_global_const(850));
#line 497
c_rt_lib0move(&___nl__4, c_rt_lib0eq(___nl__4, ___nl__5));
#line 497
c_rt_lib0clear(&___nl__5);
#line 497
label_30:
#line 497
if(c_rt_lib0check_true_native(___nl__4)){ goto label_36;}
#line 497
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(443)));
#line 497
c_rt_lib0move(&___nl__5,___get_global_const(851));
#line 497
c_rt_lib0move(&___nl__4, c_rt_lib0eq(___nl__4, ___nl__5));
#line 497
c_rt_lib0clear(&___nl__5);
#line 497
label_36:
#line 497
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 497
if(c_rt_lib0check_true_native(___nl__4)){ goto label_51;}
#line 498
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(230)));
#line 498
c_rt_lib0delete(module_checker_priv0check_lvalue(___nl__5, ___ref___1));
#line 498
c_rt_lib0clear(&___nl__5);
#line 499
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(231)));
#line 499
c_rt_lib0delete(module_checker_priv0check_val(___nl__5, ___ref___1));
#line 499
c_rt_lib0clear(&___nl__5);
#line 500
c_rt_lib0clear(&___nl__0);
#line 500
c_rt_lib0clear(&___nl__2);
#line 500
c_rt_lib0clear(&___nl__3);
#line 500
c_rt_lib0clear(&___nl__4);
#line 500
return NULL;
#line 501
goto label_51;
#line 501
label_51:
#line 501
c_rt_lib0clear(&___nl__4);
#line 501
c_rt_lib0clear(&___nl__3);
#line 502
goto label_55;
#line 502
label_55:
#line 502
c_rt_lib0clear(&___nl__2);
#line 503
c_rt_lib0move(&___nl__2,___get_global_const(18));
#line 503
c_rt_lib0move(&___nl__2, c_rt_lib0get_ref_hash(*___ref___1, ___nl__2));
#line 503
c_rt_lib0move(&___nl__3,___get_global_const(852));
#line 503
c_rt_lib0delete(module_checker_priv0add_error(&___nl__2, ___nl__3));
#line 503
c_rt_lib0clear(&___nl__3);
#line 503
c_rt_lib0move(&___nl__3,___get_global_const(18));
#line 503
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___1, ___nl__3, ___nl__2));
#line 503
c_rt_lib0clear(&___nl__3);
#line 503
c_rt_lib0clear(&___nl__2);
#line 503
c_rt_lib0clear(&___nl__0);
#line 503
return NULL;
}

ImmT module_checker_priv0check_val(ImmT ___nl__0,ImmT * ___ref___1) {
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
#line 507
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(192)));
#line 507
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(853)));
#line 507
if(c_rt_lib0check_true_native(___nl__3)){ goto label_38;}
#line 511
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(854)));
#line 511
if(c_rt_lib0check_true_native(___nl__3)){ goto label_51;}
#line 513
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(840)));
#line 513
if(c_rt_lib0check_true_native(___nl__3)){ goto label_56;}
#line 515
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(196)));
#line 515
if(c_rt_lib0check_true_native(___nl__3)){ goto label_63;}
#line 516
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(770)));
#line 516
if(c_rt_lib0check_true_native(___nl__3)){ goto label_67;}
#line 517
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(830)));
#line 517
if(c_rt_lib0check_true_native(___nl__3)){ goto label_71;}
#line 518
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(855)));
#line 518
if(c_rt_lib0check_true_native(___nl__3)){ goto label_73;}
#line 519
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(204)));
#line 519
if(c_rt_lib0check_true_native(___nl__3)){ goto label_77;}
#line 523
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(205)));
#line 523
if(c_rt_lib0check_true_native(___nl__3)){ goto label_97;}
#line 528
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(848)));
#line 528
if(c_rt_lib0check_true_native(___nl__3)){ goto label_119;}
#line 530
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(208)));
#line 530
if(c_rt_lib0check_true_native(___nl__3)){ goto label_126;}
#line 542
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(856)));
#line 542
if(c_rt_lib0check_true_native(___nl__3)){ goto label_193;}
#line 544
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(857)));
#line 544
if(c_rt_lib0check_true_native(___nl__3)){ goto label_200;}
#line 546
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(858)));
#line 546
if(c_rt_lib0check_true_native(___nl__3)){ goto label_207;}
#line 548
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(811)));
#line 548
if(c_rt_lib0check_true_native(___nl__3)){ goto label_216;}
#line 557
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(859)));
#line 557
if(c_rt_lib0check_true_native(___nl__3)){ goto label_263;}
#line 559
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(860)));
#line 559
if(c_rt_lib0check_true_native(___nl__3)){ goto label_268;}
#line 559
c_rt_lib0move(&___nl__3,___get_global_const(91));
#line 559
c_rt_lib0move(&___nl__3, c_rt_lib0array_mk(2, ___nl__3, ___nl__2));
#line 559
nl_die_arg(___nl__3);
#line 507
label_38:
#line 507
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(853)));
#line 508
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(861)));
#line 508
c_rt_lib0delete(module_checker_priv0check_val(___nl__5, ___ref___1));
#line 508
c_rt_lib0clear(&___nl__5);
#line 509
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(862)));
#line 509
c_rt_lib0delete(module_checker_priv0check_val(___nl__5, ___ref___1));
#line 509
c_rt_lib0clear(&___nl__5);
#line 510
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(863)));
#line 510
c_rt_lib0delete(module_checker_priv0check_val(___nl__5, ___ref___1));
#line 510
c_rt_lib0clear(&___nl__5);
#line 510
c_rt_lib0clear(&___nl__4);
#line 511
goto label_273;
#line 511
label_51:
#line 511
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(854)));
#line 512
c_rt_lib0delete(module_checker_priv0check_val(___nl__4, ___ref___1));
#line 512
c_rt_lib0clear(&___nl__4);
#line 513
goto label_273;
#line 513
label_56:
#line 513
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(840)));
#line 514
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(848)));
#line 514
c_rt_lib0delete(module_checker_priv0check_val(___nl__5, ___ref___1));
#line 514
c_rt_lib0clear(&___nl__5);
#line 514
c_rt_lib0clear(&___nl__4);
#line 515
goto label_273;
#line 515
label_63:
#line 515
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(196)));
#line 515
c_rt_lib0clear(&___nl__4);
#line 516
goto label_273;
#line 516
label_67:
#line 516
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(770)));
#line 516
c_rt_lib0clear(&___nl__4);
#line 517
goto label_273;
#line 517
label_71:
#line 518
goto label_273;
#line 518
label_73:
#line 518
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(855)));
#line 518
c_rt_lib0clear(&___nl__4);
#line 519
goto label_273;
#line 519
label_77:
#line 519
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(204)));
#line 520
c_rt_lib0move(&___nl__6,___get_global_const(0));
#line 520
c_rt_lib0move(&___nl__7,___get_global_const(1));
#line 520
c_rt_lib0move(&___nl__8, c_rt_lib0array_len(___nl__4));
#line 520
label_82:
#line 520
c_rt_lib0move(&___nl__9, c_rt_lib0ge(___nl__6, ___nl__8));
#line 520
if(c_rt_lib0check_true_native(___nl__9)){ goto label_89;}
#line 520
c_rt_lib0move(&___nl__5, c_rt_lib0array_get(___nl__4, ___nl__6));
#line 521
c_rt_lib0delete(module_checker_priv0check_val(___nl__5, ___ref___1));
#line 522
c_rt_lib0move(&___nl__6, c_rt_lib0add_mod(___nl__6, ___nl__7));
#line 522
goto label_82;
#line 522
label_89:
#line 522
c_rt_lib0clear(&___nl__5);
#line 522
c_rt_lib0clear(&___nl__6);
#line 522
c_rt_lib0clear(&___nl__7);
#line 522
c_rt_lib0clear(&___nl__8);
#line 522
c_rt_lib0clear(&___nl__9);
#line 522
c_rt_lib0clear(&___nl__4);
#line 523
goto label_273;
#line 523
label_97:
#line 523
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(205)));
#line 524
c_rt_lib0move(&___nl__6,___get_global_const(0));
#line 524
c_rt_lib0move(&___nl__7,___get_global_const(1));
#line 524
c_rt_lib0move(&___nl__8, c_rt_lib0array_len(___nl__4));
#line 524
label_102:
#line 524
c_rt_lib0move(&___nl__9, c_rt_lib0ge(___nl__6, ___nl__8));
#line 524
if(c_rt_lib0check_true_native(___nl__9)){ goto label_111;}
#line 524
c_rt_lib0move(&___nl__5, c_rt_lib0array_get(___nl__4, ___nl__6));
#line 526
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(198)));
#line 526
c_rt_lib0delete(module_checker_priv0check_val(___nl__10, ___ref___1));
#line 526
c_rt_lib0clear(&___nl__10);
#line 527
c_rt_lib0move(&___nl__6, c_rt_lib0add_mod(___nl__6, ___nl__7));
#line 527
goto label_102;
#line 527
label_111:
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
#line 527
c_rt_lib0clear(&___nl__4);
#line 528
goto label_273;
#line 528
label_119:
#line 528
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(848)));
#line 529
c_rt_lib0move(&___nl__5, c_rt_lib0ov_mk_none(___get_global_const(789)));
#line 529
c_rt_lib0delete(module_checker_priv0use_var(___nl__4, ___nl__5, ___ref___1));
#line 529
c_rt_lib0clear(&___nl__5);
#line 529
c_rt_lib0clear(&___nl__4);
#line 530
goto label_273;
#line 530
label_126:
#line 530
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(208)));
#line 531
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(443)));
#line 532
c_rt_lib0move(&___nl__6,___get_global_const(864));
#line 532
c_rt_lib0move(&___nl__6, c_rt_lib0eq(___nl__5, ___nl__6));
#line 532
if(c_rt_lib0check_true_native(___nl__6)){ goto label_134;}
#line 532
c_rt_lib0move(&___nl__6,___get_global_const(865));
#line 532
c_rt_lib0move(&___nl__6, c_rt_lib0eq(___nl__5, ___nl__6));
#line 532
label_134:
#line 532
if(c_rt_lib0check_true_native(___nl__6)){ goto label_138;}
#line 532
c_rt_lib0move(&___nl__6,___get_global_const(866));
#line 532
c_rt_lib0move(&___nl__6, c_rt_lib0eq(___nl__5, ___nl__6));
#line 532
label_138:
#line 532
if(c_rt_lib0check_true_native(___nl__6)){ goto label_142;}
#line 532
c_rt_lib0move(&___nl__6,___get_global_const(867));
#line 532
c_rt_lib0move(&___nl__6, c_rt_lib0eq(___nl__5, ___nl__6));
#line 532
label_142:
#line 532
if(c_rt_lib0check_true_native(___nl__6)){ goto label_146;}
#line 532
c_rt_lib0move(&___nl__6,___get_global_const(868));
#line 532
c_rt_lib0move(&___nl__6, c_rt_lib0eq(___nl__5, ___nl__6));
#line 532
label_146:
#line 532
if(c_rt_lib0check_true_native(___nl__6)){ goto label_150;}
#line 532
c_rt_lib0move(&___nl__6,___get_global_const(869));
#line 532
c_rt_lib0move(&___nl__6, c_rt_lib0eq(___nl__5, ___nl__6));
#line 532
label_150:
#line 532
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 532
if(c_rt_lib0check_true_native(___nl__6)){ goto label_180;}
#line 533
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(230)));
#line 533
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__7, ___get_global_const(192)));
#line 533
c_rt_lib0move(&___nl__7, c_rt_lib0priv_is(___nl__7, ___get_global_const(848)));
#line 533
c_rt_lib0move(&___nl__8, c_rt_lib0not(___nl__7));
#line 533
if(c_rt_lib0check_true_native(___nl__8)){ goto label_160;}
#line 533
c_rt_lib0move(&___nl__7,___get_global_const(864));
#line 533
c_rt_lib0move(&___nl__7, c_rt_lib0eq(___nl__5, ___nl__7));
#line 533
label_160:
#line 533
c_rt_lib0clear(&___nl__8);
#line 533
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 533
if(c_rt_lib0check_true_native(___nl__7)){ goto label_172;}
#line 534
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(230)));
#line 534
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__8, ___get_global_const(192)));
#line 534
c_rt_lib0move(&___nl__8, c_rt_lib0priv_as(___nl__8, ___get_global_const(848)));
#line 534
c_rt_lib0move(&___nl__9, c_rt_lib0ov_mk_none(___get_global_const(788)));
#line 534
c_rt_lib0delete(module_checker_priv0use_var(___nl__8, ___nl__9, ___ref___1));
#line 534
c_rt_lib0clear(&___nl__9);
#line 534
c_rt_lib0clear(&___nl__8);
#line 535
goto label_177;
#line 535
label_172:
#line 536
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(230)));
#line 536
c_rt_lib0delete(module_checker_priv0check_lvalue(___nl__8, ___ref___1));
#line 536
c_rt_lib0clear(&___nl__8);
#line 537
goto label_177;
#line 537
label_177:
#line 537
c_rt_lib0clear(&___nl__7);
#line 538
goto label_185;
#line 538
label_180:
#line 539
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(230)));
#line 539
c_rt_lib0delete(module_checker_priv0check_val(___nl__7, ___ref___1));
#line 539
c_rt_lib0clear(&___nl__7);
#line 540
goto label_185;
#line 540
label_185:
#line 540
c_rt_lib0clear(&___nl__6);
#line 541
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(231)));
#line 541
c_rt_lib0delete(module_checker_priv0check_val(___nl__6, ___ref___1));
#line 541
c_rt_lib0clear(&___nl__6);
#line 541
c_rt_lib0clear(&___nl__5);
#line 541
c_rt_lib0clear(&___nl__4);
#line 542
goto label_273;
#line 542
label_193:
#line 542
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(856)));
#line 543
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(230)));
#line 543
c_rt_lib0delete(module_checker_priv0check_val(___nl__5, ___ref___1));
#line 543
c_rt_lib0clear(&___nl__5);
#line 543
c_rt_lib0clear(&___nl__4);
#line 544
goto label_273;
#line 544
label_200:
#line 544
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(857)));
#line 545
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(198)));
#line 545
c_rt_lib0delete(module_checker_priv0check_val(___nl__5, ___ref___1));
#line 545
c_rt_lib0clear(&___nl__5);
#line 545
c_rt_lib0clear(&___nl__4);
#line 546
goto label_273;
#line 546
label_207:
#line 546
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(858)));
#line 547
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(132)));
#line 547
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(93)));
#line 547
c_rt_lib0delete(module_checker_priv0add_fun_used(___nl__5, ___nl__6, ___ref___1));
#line 547
c_rt_lib0clear(&___nl__6);
#line 547
c_rt_lib0clear(&___nl__5);
#line 547
c_rt_lib0clear(&___nl__4);
#line 548
goto label_273;
#line 548
label_216:
#line 548
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(811)));
#line 549
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(89)));
#line 549
c_rt_lib0move(&___nl__7,___get_global_const(0));
#line 549
c_rt_lib0move(&___nl__8,___get_global_const(1));
#line 549
c_rt_lib0move(&___nl__9, c_rt_lib0array_len(___nl__5));
#line 549
label_222:
#line 549
c_rt_lib0move(&___nl__10, c_rt_lib0ge(___nl__7, ___nl__9));
#line 549
if(c_rt_lib0check_true_native(___nl__10)){ goto label_249;}
#line 549
c_rt_lib0move(&___nl__6, c_rt_lib0array_get(___nl__5, ___nl__7));
#line 550
c_rt_lib0move(&___nl__11, c_rt_lib0hash_get_value_dec(___nl__6, ___get_global_const(222)));
#line 550
c_rt_lib0move(&___nl__12, c_rt_lib0priv_is(___nl__11, ___get_global_const(41)));
#line 550
if(c_rt_lib0check_true_native(___nl__12)){ goto label_234;}
#line 552
c_rt_lib0move(&___nl__12, c_rt_lib0priv_is(___nl__11, ___get_global_const(5)));
#line 552
if(c_rt_lib0check_true_native(___nl__12)){ goto label_239;}
#line 552
c_rt_lib0move(&___nl__12,___get_global_const(91));
#line 552
c_rt_lib0move(&___nl__12, c_rt_lib0array_mk(2, ___nl__12, ___nl__11));
#line 552
nl_die_arg(___nl__12);
#line 550
label_234:
#line 551
c_rt_lib0move(&___nl__13, c_rt_lib0hash_get_value_dec(___nl__6, ___get_global_const(198)));
#line 551
c_rt_lib0delete(module_checker_priv0check_val(___nl__13, ___ref___1));
#line 551
c_rt_lib0clear(&___nl__13);
#line 552
goto label_244;
#line 552
label_239:
#line 553
c_rt_lib0move(&___nl__13, c_rt_lib0hash_get_value_dec(___nl__6, ___get_global_const(198)));
#line 553
c_rt_lib0delete(module_checker_priv0check_lvalue(___nl__13, ___ref___1));
#line 553
c_rt_lib0clear(&___nl__13);
#line 554
goto label_244;
#line 554
label_244:
#line 554
c_rt_lib0clear(&___nl__11);
#line 554
c_rt_lib0clear(&___nl__12);
#line 555
c_rt_lib0move(&___nl__7, c_rt_lib0add_mod(___nl__7, ___nl__8));
#line 555
goto label_222;
#line 555
label_249:
#line 555
c_rt_lib0clear(&___nl__5);
#line 555
c_rt_lib0clear(&___nl__6);
#line 555
c_rt_lib0clear(&___nl__7);
#line 555
c_rt_lib0clear(&___nl__8);
#line 555
c_rt_lib0clear(&___nl__9);
#line 555
c_rt_lib0clear(&___nl__10);
#line 556
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(132)));
#line 556
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(93)));
#line 556
c_rt_lib0delete(module_checker_priv0add_fun_used(___nl__5, ___nl__6, ___ref___1));
#line 556
c_rt_lib0clear(&___nl__6);
#line 556
c_rt_lib0clear(&___nl__5);
#line 556
c_rt_lib0clear(&___nl__4);
#line 557
goto label_273;
#line 557
label_263:
#line 557
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(859)));
#line 558
c_rt_lib0delete(module_checker_priv0check_val(___nl__4, ___ref___1));
#line 558
c_rt_lib0clear(&___nl__4);
#line 559
goto label_273;
#line 559
label_268:
#line 559
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(860)));
#line 560
c_rt_lib0delete(module_checker_priv0check_val(___nl__4, ___ref___1));
#line 560
c_rt_lib0clear(&___nl__4);
#line 561
goto label_273;
#line 561
label_273:
#line 561
c_rt_lib0clear(&___nl__2);
#line 561
c_rt_lib0clear(&___nl__3);
#line 561
c_rt_lib0clear(&___nl__0);
#line 561
return NULL;
}

ImmT module_checker_priv0save_block(ImmT * ___ref___0) {
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
#line 565
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(782)));
#line 565
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(673)));
#line 565
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(2, ___get_global_const(782), ___nl__2, ___get_global_const(673), ___nl__3));
#line 565
c_rt_lib0clear(&___nl__2);
#line 565
c_rt_lib0clear(&___nl__3);
#line 565
return ___nl__1;
#line 565
c_rt_lib0clear(&___nl__1);
#line 565
return NULL;
}

ImmT module_checker_priv0load_block(ImmT * ___ref___0,ImmT ___nl__1) {
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
#line 569
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(782)));
#line 569
c_rt_lib0copy(&___nl__3, ___nl__2);
#line 569
c_rt_lib0hash_set_value_dec(___ref___0, ___get_global_const(782), ___nl__3);
#line 569
c_rt_lib0clear(&___nl__2);
#line 569
c_rt_lib0clear(&___nl__3);
#line 570
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(673)));
#line 570
c_rt_lib0move(&___nl__2, hash0keys(___nl__3));
#line 570
c_rt_lib0clear(&___nl__3);
#line 571
c_rt_lib0move(&___nl__4,___get_global_const(0));
#line 571
c_rt_lib0move(&___nl__5,___get_global_const(1));
#line 571
c_rt_lib0move(&___nl__6, c_rt_lib0array_len(___nl__2));
#line 571
label_11:
#line 571
c_rt_lib0move(&___nl__7, c_rt_lib0ge(___nl__4, ___nl__6));
#line 571
if(c_rt_lib0check_true_native(___nl__7)){ goto label_60;}
#line 571
c_rt_lib0move(&___nl__3, c_rt_lib0array_get(___nl__2, ___nl__4));
#line 572
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(673)));
#line 572
c_rt_lib0move(&___nl__8, hash0has_key(___nl__9, ___nl__3));
#line 572
c_rt_lib0clear(&___nl__9);
#line 572
c_rt_lib0move(&___nl__8, c_rt_lib0not(___nl__8));
#line 572
c_rt_lib0move(&___nl__8, c_rt_lib0not(___nl__8));
#line 572
if(c_rt_lib0check_true_native(___nl__8)){ goto label_56;}
#line 573
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(673)));
#line 573
c_rt_lib0move(&___nl__9, hash0get_value(___nl__10, ___nl__3));
#line 573
c_rt_lib0clear(&___nl__10);
#line 574
c_rt_lib0move(&___nl__10,___get_global_const(673));
#line 574
c_rt_lib0move(&___nl__10, c_rt_lib0get_ref_hash(*___ref___0, ___nl__10));
#line 574
c_rt_lib0delete(hash0delete(&___nl__10, ___nl__3));
#line 574
c_rt_lib0move(&___nl__11,___get_global_const(673));
#line 574
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__11, ___nl__10));
#line 574
c_rt_lib0clear(&___nl__11);
#line 574
c_rt_lib0clear(&___nl__10);
#line 575
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__9, ___get_global_const(282)));
#line 575
c_rt_lib0move(&___nl__10, c_rt_lib0not(___nl__10));
#line 575
c_rt_lib0move(&___nl__11, c_rt_lib0not(___nl__10));
#line 575
if(c_rt_lib0check_true_native(___nl__11)){ goto label_37;}
#line 575
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__9, ___get_global_const(776)));
#line 575
c_rt_lib0move(&___nl__10, c_rt_lib0not(___nl__10));
#line 575
label_37:
#line 575
c_rt_lib0clear(&___nl__11);
#line 575
c_rt_lib0move(&___nl__10, c_rt_lib0not(___nl__10));
#line 575
if(c_rt_lib0check_true_native(___nl__10)){ goto label_52;}
#line 576
c_rt_lib0move(&___nl__11,___get_global_const(18));
#line 576
c_rt_lib0move(&___nl__11, c_rt_lib0get_ref_hash(*___ref___0, ___nl__11));
#line 576
c_rt_lib0move(&___nl__12,___get_global_const(870));
#line 576
c_rt_lib0move(&___nl__12, c_rt_lib0concat_add(___nl__12, ___nl__3));
#line 576
c_rt_lib0delete(module_checker_priv0add_warning(&___nl__11, ___nl__12));
#line 576
c_rt_lib0clear(&___nl__12);
#line 576
c_rt_lib0move(&___nl__12,___get_global_const(18));
#line 576
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__12, ___nl__11));
#line 576
c_rt_lib0clear(&___nl__12);
#line 576
c_rt_lib0clear(&___nl__11);
#line 577
goto label_52;
#line 577
label_52:
#line 577
c_rt_lib0clear(&___nl__10);
#line 577
c_rt_lib0clear(&___nl__9);
#line 578
goto label_56;
#line 578
label_56:
#line 578
c_rt_lib0clear(&___nl__8);
#line 579
c_rt_lib0move(&___nl__4, c_rt_lib0add_mod(___nl__4, ___nl__5));
#line 579
goto label_11;
#line 579
label_60:
#line 579
c_rt_lib0clear(&___nl__3);
#line 579
c_rt_lib0clear(&___nl__4);
#line 579
c_rt_lib0clear(&___nl__5);
#line 579
c_rt_lib0clear(&___nl__6);
#line 579
c_rt_lib0clear(&___nl__7);
#line 579
c_rt_lib0clear(&___nl__2);
#line 579
c_rt_lib0clear(&___nl__1);
#line 579
return NULL;
}


static ImmT ___const__[9];
static int ___const_init__ = 1;
void module_checker0__const__init(){
if(!___const_init__) nl_die();
___const_init__ = 0;
__const__f = &___const__[8];


for(int i=0;i<8;++i) ___const__[i] = NULL;
c_rt_lib0register_const(___const__, 8);
}
ImmT module_checker_priv0__const__sim(int __nr) {
ImmT ret = NULL;
c_rt_lib0copy(&ret, ___const__[__nr]);
return ret;
}
ImmT module_checker_priv0__const__sing(int __nr) {
if(___const__[__nr+0]==NULL) {
switch(__nr){
case 0:
	___const__[0] = module_checker0stack_t0cal();
	break;
case 1:
	___const__[1] = module_checker0stack_hash_t0cal();
	break;
case 2:
	___const__[2] = module_checker0ret_t0cal();
	break;
case 3:
	___const__[3] = module_checker0modules_t0cal();
	break;
case 4:
	___const__[4] = module_checker0var_t0cal();
	break;
case 5:
	___const__[5] = module_checker0return_t0cal();
	break;
case 6:
	___const__[6] = module_checker0state_t0cal();
	break;
case 7:
	___const__[7] = module_checker0save_t0cal();
	break;
default:
	nl_die();
}}
ImmT ret = NULL;
c_rt_lib0copy(&ret, ___const__[__nr+0]);
return ret;
}
