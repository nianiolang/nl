
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
#include "ov.h"
#include "boolean_t.h"
#include "ptd_parser.h"
#line 1 "module_checker.nl"

static ImmT *__const__f = NULL;
void module_checker_priv0__const__init();
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
module_checker_priv0__const__init();
return module_checker_priv0__const__sing(0);}
ImmT module_checker0stack_t0cal() {
module_checker_priv0__const__init();
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
#line 19
c_rt_lib0move(&___nl__1, ptd0sim());
#line 19
c_rt_lib0move(&___nl__0, ptd0arr(___nl__1));
#line 19
c_rt_lib0clear(&___nl__1);
#line 19
return ___nl__0;
#line 19
c_rt_lib0clear(&___nl__0);
#line 19
return NULL;
}

ImmT module_checker0stack_hash_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "module_checker0stack_hash_t");
return module_checker0stack_hash_t();}
ImmT module_checker0stack_hash_t(){
module_checker_priv0__const__init();
return module_checker_priv0__const__sing(1);}
ImmT module_checker0stack_hash_t0cal() {
module_checker_priv0__const__init();
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
#line 23
c_rt_lib0move(&___nl__1, ptd0sim());
#line 23
c_rt_lib0move(&___nl__0, ptd0hash(___nl__1));
#line 23
c_rt_lib0clear(&___nl__1);
#line 23
return ___nl__0;
#line 23
c_rt_lib0clear(&___nl__0);
#line 23
return NULL;
}

ImmT module_checker0ret_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "module_checker0ret_t");
return module_checker0ret_t();}
ImmT module_checker0ret_t(){
module_checker_priv0__const__init();
return module_checker_priv0__const__sing(2);}
ImmT module_checker0ret_t0cal() {
module_checker_priv0__const__init();
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
#line 27
c_rt_lib0move(&___nl__3, ptd0sim());
#line 27
c_rt_lib0move(&___nl__2, ptd0arr(___nl__3));
#line 27
c_rt_lib0clear(&___nl__3);
#line 27
c_rt_lib0move(&___nl__3, ptd0none());
#line 27
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(2, ___get_global_const(117), ___nl__2, ___get_global_const(44), ___nl__3));
#line 27
c_rt_lib0clear(&___nl__2);
#line 27
c_rt_lib0clear(&___nl__3);
#line 27
c_rt_lib0move(&___nl__0, ptd0var(___nl__1));
#line 27
c_rt_lib0clear(&___nl__1);
#line 27
return ___nl__0;
#line 27
c_rt_lib0clear(&___nl__0);
#line 27
return NULL;
}

ImmT module_checker0modules_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "module_checker0modules_t");
return module_checker0modules_t();}
ImmT module_checker0modules_t(){
module_checker_priv0__const__init();
return module_checker_priv0__const__sing(3);}
ImmT module_checker0modules_t0cal() {
module_checker_priv0__const__init();
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
#line 31
c_rt_lib0move(&___nl__2, ptd0sim());
#line 31
c_rt_lib0move(&___nl__1, ptd0arr(___nl__2));
#line 31
c_rt_lib0clear(&___nl__2);
#line 31
c_rt_lib0move(&___nl__0, ptd0hash(___nl__1));
#line 31
c_rt_lib0clear(&___nl__1);
#line 31
return ___nl__0;
#line 31
c_rt_lib0clear(&___nl__0);
#line 31
return NULL;
}

ImmT module_checker0search_loops0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "module_checker0search_loops");
return module_checker0search_loops(_tab[0]);}
ImmT module_checker0search_loops(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
module_checker_priv0__const__init();
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
#line 35
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(0));
#line 36
c_rt_lib0move(&___nl__4, c_rt_lib0init_iter(___nl__0));
#line 36
label_3:
#line 36
c_rt_lib0move(&___nl__2, c_rt_lib0is_end_hash(___nl__4));
#line 36
if(c_rt_lib0check_true_native(___nl__2)){ goto label_1;}
#line 36
c_rt_lib0move(&___nl__2, c_rt_lib0get_key_iter(___nl__4));
#line 36
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value(___nl__0, ___nl__2));
#line 37
c_rt_lib0move(&___nl__5, hash0has_key(___nl__1, ___nl__2));
#line 37
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 37
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 37
if(c_rt_lib0check_true_native(___nl__5)){ goto label_5;}
#line 38
c_rt_lib0move(&___nl__6, c_rt_lib0array_mk(0));
#line 39
c_rt_lib0move(&___nl__7, c_rt_lib0hash_mk(0));
#line 40
c_rt_lib0move(&___nl__8, module_checker_priv0check_module(___nl__2, ___nl__0, &___nl__6, &___nl__7, &___nl__1));
#line 40
c_rt_lib0move(&___nl__9, c_rt_lib0priv_is(___nl__8, ___get_global_const(117)));
#line 40
if(c_rt_lib0check_true_native(___nl__9)){ goto label_7;}
#line 42
c_rt_lib0move(&___nl__9, c_rt_lib0priv_is(___nl__8, ___get_global_const(44)));
#line 42
if(c_rt_lib0check_true_native(___nl__9)){ goto label_8;}
#line 42
c_rt_lib0move(&___nl__9,___get_global_const(74));
#line 42
c_rt_lib0move(&___nl__9, c_rt_lib0array_mk(2, ___nl__9, ___nl__8));
#line 42
nl_die_arg(___nl__9);
#line 40
label_7:
#line 40
c_rt_lib0move(&___nl__10, c_rt_lib0priv_as(___nl__8, ___get_global_const(117)));
#line 41
c_rt_lib0move(&___nl__11, c_rt_lib0ov_mk_arg(___get_global_const(117), ___nl__10));
#line 41
c_rt_lib0clear(&___nl__0);
#line 41
c_rt_lib0clear(&___nl__1);
#line 41
c_rt_lib0clear(&___nl__2);
#line 41
c_rt_lib0clear(&___nl__3);
#line 41
c_rt_lib0clear(&___nl__4);
#line 41
c_rt_lib0clear(&___nl__5);
#line 41
c_rt_lib0clear(&___nl__6);
#line 41
c_rt_lib0clear(&___nl__7);
#line 41
c_rt_lib0clear(&___nl__8);
#line 41
c_rt_lib0clear(&___nl__9);
#line 41
c_rt_lib0clear(&___nl__10);
#line 41
return ___nl__11;
#line 41
c_rt_lib0clear(&___nl__11);
#line 41
c_rt_lib0clear(&___nl__10);
#line 42
goto label_6;
#line 42
label_8:
#line 43
goto label_6;
#line 43
label_6:
#line 43
c_rt_lib0clear(&___nl__8);
#line 43
c_rt_lib0clear(&___nl__9);
#line 43
c_rt_lib0clear(&___nl__6);
#line 43
c_rt_lib0clear(&___nl__7);
#line 44
goto label_5;
#line 44
label_5:
#line 44
c_rt_lib0clear(&___nl__5);
#line 45
c_rt_lib0move(&___nl__4, c_rt_lib0next_iter(___nl__4));
#line 45
goto label_3;
#line 45
label_1:
#line 45
c_rt_lib0clear(&___nl__2);
#line 45
c_rt_lib0clear(&___nl__3);
#line 45
c_rt_lib0clear(&___nl__4);
#line 46
c_rt_lib0move(&___nl__2, c_rt_lib0ov_mk_none(___get_global_const(44)));
#line 46
c_rt_lib0clear(&___nl__0);
#line 46
c_rt_lib0clear(&___nl__1);
#line 46
return ___nl__2;
#line 46
c_rt_lib0clear(&___nl__2);
#line 46
c_rt_lib0clear(&___nl__1);
#line 46
c_rt_lib0clear(&___nl__0);
#line 46
return NULL;
}

ImmT module_checker_priv0check_module(ImmT ___nl__0,ImmT ___nl__1,ImmT * ___ref___2,ImmT * ___ref___3,ImmT * ___ref___4) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
module_checker_priv0__const__init();
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
#line 51
c_rt_lib0move(&___nl__5,___get_global_const(2));
#line 51
c_rt_lib0delete(hash0set_value(___ref___4, ___nl__0, ___nl__5));
#line 51
c_rt_lib0clear(&___nl__5);
#line 52
c_rt_lib0move(&___nl__5,___get_global_const(2));
#line 52
c_rt_lib0delete(hash0set_value(___ref___3, ___nl__0, ___nl__5));
#line 52
c_rt_lib0clear(&___nl__5);
#line 53
c_rt_lib0delete(array0push(___ref___2, ___nl__0));
#line 54
c_rt_lib0move(&___nl__5, hash0get_value(___nl__1, ___nl__0));
#line 54
c_rt_lib0move(&___nl__7,___get_global_const(1));
#line 54
c_rt_lib0move(&___nl__8,___get_global_const(2));
#line 54
c_rt_lib0move(&___nl__9, c_rt_lib0array_len(___nl__5));
#line 54
label_3:
#line 54
c_rt_lib0move(&___nl__10, c_rt_lib0ge(___nl__7, ___nl__9));
#line 54
if(c_rt_lib0check_true_native(___nl__10)){ goto label_1;}
#line 54
c_rt_lib0move(&___nl__6, c_rt_lib0array_get(___nl__5, ___nl__7));
#line 55
c_rt_lib0move(&___nl__11, hash0has_key(*___ref___3, ___nl__6));
#line 55
c_rt_lib0move(&___nl__11, c_rt_lib0not(___nl__11));
#line 55
if(c_rt_lib0check_true_native(___nl__11)){ goto label_5;}
#line 56
c_rt_lib0move(&___nl__12, module_checker_priv0get_loop_from_stack(___nl__6, *___ref___2));
#line 56
c_rt_lib0move(&___nl__12, c_rt_lib0ov_mk_arg(___get_global_const(117), ___nl__12));
#line 56
c_rt_lib0clear(&___nl__0);
#line 56
c_rt_lib0clear(&___nl__1);
#line 56
c_rt_lib0clear(&___nl__5);
#line 56
c_rt_lib0clear(&___nl__6);
#line 56
c_rt_lib0clear(&___nl__7);
#line 56
c_rt_lib0clear(&___nl__8);
#line 56
c_rt_lib0clear(&___nl__9);
#line 56
c_rt_lib0clear(&___nl__10);
#line 56
c_rt_lib0clear(&___nl__11);
#line 56
return ___nl__12;
#line 56
c_rt_lib0clear(&___nl__12);
#line 57
goto label_6;
#line 57
label_5:
#line 57
c_rt_lib0move(&___nl__11, hash0has_key(___nl__1, ___nl__6));
#line 57
c_rt_lib0move(&___nl__12, c_rt_lib0not(___nl__11));
#line 57
if(c_rt_lib0check_true_native(___nl__12)){ goto label_7;}
#line 57
c_rt_lib0move(&___nl__11, hash0has_key(*___ref___4, ___nl__6));
#line 57
c_rt_lib0move(&___nl__11, c_rt_lib0not(___nl__11));
#line 57
label_7:
#line 57
c_rt_lib0clear(&___nl__12);
#line 57
c_rt_lib0move(&___nl__11, c_rt_lib0not(___nl__11));
#line 57
if(c_rt_lib0check_true_native(___nl__11)){ goto label_6;}
#line 58
c_rt_lib0move(&___nl__12, module_checker_priv0check_module(___nl__6, ___nl__1, ___ref___2, ___ref___3, ___ref___4));
#line 58
c_rt_lib0move(&___nl__13, c_rt_lib0priv_is(___nl__12, ___get_global_const(117)));
#line 58
if(c_rt_lib0check_true_native(___nl__13)){ goto label_9;}
#line 60
c_rt_lib0move(&___nl__13, c_rt_lib0priv_is(___nl__12, ___get_global_const(44)));
#line 60
if(c_rt_lib0check_true_native(___nl__13)){ goto label_10;}
#line 60
c_rt_lib0move(&___nl__13,___get_global_const(74));
#line 60
c_rt_lib0move(&___nl__13, c_rt_lib0array_mk(2, ___nl__13, ___nl__12));
#line 60
nl_die_arg(___nl__13);
#line 58
label_9:
#line 58
c_rt_lib0move(&___nl__14, c_rt_lib0priv_as(___nl__12, ___get_global_const(117)));
#line 59
c_rt_lib0move(&___nl__15, c_rt_lib0ov_mk_arg(___get_global_const(117), ___nl__14));
#line 59
c_rt_lib0clear(&___nl__0);
#line 59
c_rt_lib0clear(&___nl__1);
#line 59
c_rt_lib0clear(&___nl__5);
#line 59
c_rt_lib0clear(&___nl__6);
#line 59
c_rt_lib0clear(&___nl__7);
#line 59
c_rt_lib0clear(&___nl__8);
#line 59
c_rt_lib0clear(&___nl__9);
#line 59
c_rt_lib0clear(&___nl__10);
#line 59
c_rt_lib0clear(&___nl__11);
#line 59
c_rt_lib0clear(&___nl__12);
#line 59
c_rt_lib0clear(&___nl__13);
#line 59
c_rt_lib0clear(&___nl__14);
#line 59
return ___nl__15;
#line 59
c_rt_lib0clear(&___nl__15);
#line 59
c_rt_lib0clear(&___nl__14);
#line 60
goto label_8;
#line 60
label_10:
#line 61
goto label_8;
#line 61
label_8:
#line 61
c_rt_lib0clear(&___nl__12);
#line 61
c_rt_lib0clear(&___nl__13);
#line 62
goto label_6;
#line 62
label_6:
#line 62
c_rt_lib0clear(&___nl__11);
#line 63
c_rt_lib0move(&___nl__7, c_rt_lib0add_mod(___nl__7, ___nl__8));
#line 63
goto label_3;
#line 63
label_1:
#line 63
c_rt_lib0clear(&___nl__5);
#line 63
c_rt_lib0clear(&___nl__6);
#line 63
c_rt_lib0clear(&___nl__7);
#line 63
c_rt_lib0clear(&___nl__8);
#line 63
c_rt_lib0clear(&___nl__9);
#line 63
c_rt_lib0clear(&___nl__10);
#line 64
c_rt_lib0delete(hash0delete(___ref___3, ___nl__0));
#line 65
c_rt_lib0move(&___nl__6,___get_global_const(1));
#line 65
c_rt_lib0move(&___nl__7, array0len(*___ref___2));
#line 65
c_rt_lib0move(&___nl__8,___get_global_const(2));
#line 65
c_rt_lib0move(&___nl__7, c_rt_lib0sub_mod(___nl__7, ___nl__8));
#line 65
c_rt_lib0clear(&___nl__8);
#line 65
c_rt_lib0move(&___nl__5, array0subarray(*___ref___2, ___nl__6, ___nl__7));
#line 65
c_rt_lib0clear(&___nl__7);
#line 65
c_rt_lib0clear(&___nl__6);
#line 65
c_rt_lib0copy(___ref___2, ___nl__5);
#line 65
c_rt_lib0clear(&___nl__5);
#line 66
c_rt_lib0move(&___nl__5, c_rt_lib0ov_mk_none(___get_global_const(44)));
#line 66
c_rt_lib0clear(&___nl__0);
#line 66
c_rt_lib0clear(&___nl__1);
#line 66
return ___nl__5;
#line 66
c_rt_lib0clear(&___nl__5);
#line 66
c_rt_lib0clear(&___nl__0);
#line 66
c_rt_lib0clear(&___nl__1);
#line 66
return NULL;
}

ImmT module_checker_priv0get_loop_from_stack(ImmT ___nl__0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
module_checker_priv0__const__init();
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
ImmT ___nl__9 = NULL;
#line 70
c_rt_lib0move(&___nl__2, c_rt_lib0array_mk(0));
#line 71
c_rt_lib0move(&___nl__4,___get_global_const(1));
#line 71
c_rt_lib0move(&___nl__5,___get_global_const(2));
#line 71
c_rt_lib0move(&___nl__6, c_rt_lib0array_len(___nl__1));
#line 71
label_3:
#line 71
c_rt_lib0move(&___nl__7, c_rt_lib0ge(___nl__4, ___nl__6));
#line 71
if(c_rt_lib0check_true_native(___nl__7)){ goto label_1;}
#line 71
c_rt_lib0move(&___nl__3, c_rt_lib0array_get(___nl__1, ___nl__4));
#line 72
c_rt_lib0move(&___nl__8, c_rt_lib0eq(___nl__3, ___nl__0));
#line 72
c_rt_lib0move(&___nl__8, c_rt_lib0not(___nl__8));
#line 72
if(c_rt_lib0check_true_native(___nl__8)){ goto label_5;}
#line 72
c_rt_lib0move(&___nl__9, c_rt_lib0array_mk(0));
#line 72
c_rt_lib0copy(&___nl__2, ___nl__9);
#line 72
c_rt_lib0clear(&___nl__9);
#line 72
goto label_5;
#line 72
label_5:
#line 72
c_rt_lib0clear(&___nl__8);
#line 73
c_rt_lib0delete(array0push(&___nl__2, ___nl__3));
#line 74
c_rt_lib0move(&___nl__4, c_rt_lib0add_mod(___nl__4, ___nl__5));
#line 74
goto label_3;
#line 74
label_1:
#line 74
c_rt_lib0clear(&___nl__3);
#line 74
c_rt_lib0clear(&___nl__4);
#line 74
c_rt_lib0clear(&___nl__5);
#line 74
c_rt_lib0clear(&___nl__6);
#line 74
c_rt_lib0clear(&___nl__7);
#line 75
c_rt_lib0delete(array0push(&___nl__2, ___nl__0));
#line 76
c_rt_lib0clear(&___nl__0);
#line 76
c_rt_lib0clear(&___nl__1);
#line 76
return ___nl__2;
#line 76
c_rt_lib0clear(&___nl__2);
#line 76
c_rt_lib0clear(&___nl__0);
#line 76
c_rt_lib0clear(&___nl__1);
#line 76
return NULL;
}

ImmT module_checker0var_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "module_checker0var_t");
return module_checker0var_t();}
ImmT module_checker0var_t(){
module_checker_priv0__const__init();
return module_checker_priv0__const__sing(4);}
ImmT module_checker0var_t0cal() {
module_checker_priv0__const__init();
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
c_rt_lib0move(&___nl__3, c_rt_lib0hash_mk(3, ___get_global_const(294), ___nl__4, ___get_global_const(37), ___nl__5, ___get_global_const(641), ___nl__6));
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
#line 79
c_rt_lib0move(&___nl__3, c_rt_lib0func_new(boolean_t0type0ptr, ___get_global_const(180), ___get_global_const(72)));
#line 79
c_rt_lib0move(&___nl__3, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__3));
#line 79
c_rt_lib0move(&___nl__4, c_rt_lib0func_new(boolean_t0type0ptr, ___get_global_const(180), ___get_global_const(72)));
#line 79
c_rt_lib0move(&___nl__4, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__4));
#line 79
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(3, ___get_global_const(194), ___nl__2, ___get_global_const(203), ___nl__3, ___get_global_const(699), ___nl__4));
#line 79
c_rt_lib0clear(&___nl__2);
#line 79
c_rt_lib0clear(&___nl__3);
#line 79
c_rt_lib0clear(&___nl__4);
#line 79
c_rt_lib0move(&___nl__0, ptd0rec(___nl__1));
#line 79
c_rt_lib0clear(&___nl__1);
#line 79
return ___nl__0;
#line 79
c_rt_lib0clear(&___nl__0);
#line 79
return NULL;
}

ImmT module_checker0return_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "module_checker0return_t");
return module_checker0return_t();}
ImmT module_checker0return_t(){
module_checker_priv0__const__init();
return module_checker_priv0__const__sing(5);}
ImmT module_checker0return_t0cal() {
module_checker_priv0__const__init();
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
#line 86
c_rt_lib0move(&___nl__2, ptd0none());
#line 86
c_rt_lib0move(&___nl__3, ptd0none());
#line 86
c_rt_lib0move(&___nl__4, ptd0none());
#line 86
c_rt_lib0move(&___nl__5, ptd0none());
#line 86
c_rt_lib0move(&___nl__6, ptd0none());
#line 86
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(5, ___get_global_const(700), ___nl__2, ___get_global_const(37), ___nl__3, ___get_global_const(641), ___nl__4, ___get_global_const(701), ___nl__5, ___get_global_const(702), ___nl__6));
#line 86
c_rt_lib0clear(&___nl__2);
#line 86
c_rt_lib0clear(&___nl__3);
#line 86
c_rt_lib0clear(&___nl__4);
#line 86
c_rt_lib0clear(&___nl__5);
#line 86
c_rt_lib0clear(&___nl__6);
#line 86
c_rt_lib0move(&___nl__0, ptd0var(___nl__1));
#line 86
c_rt_lib0clear(&___nl__1);
#line 86
return ___nl__0;
#line 86
c_rt_lib0clear(&___nl__0);
#line 86
return NULL;
}

ImmT module_checker0state_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "module_checker0state_t");
return module_checker0state_t();}
ImmT module_checker0state_t(){
module_checker_priv0__const__init();
return module_checker_priv0__const__sing(6);}
ImmT module_checker0state_t0cal() {
module_checker_priv0__const__init();
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
#line 89
c_rt_lib0move(&___nl__2, c_rt_lib0func_new(boolean_t0type0ptr, ___get_global_const(180), ___get_global_const(72)));
#line 89
c_rt_lib0move(&___nl__2, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__2));
#line 89
c_rt_lib0move(&___nl__5, c_rt_lib0func_new(boolean_t0type0ptr, ___get_global_const(180), ___get_global_const(72)));
#line 89
c_rt_lib0move(&___nl__5, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__5));
#line 89
c_rt_lib0move(&___nl__6, c_rt_lib0func_new(module_checker0return_t0ptr, ___get_global_const(22), ___get_global_const(703)));
#line 89
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__6));
#line 89
c_rt_lib0move(&___nl__4, c_rt_lib0hash_mk(2, ___get_global_const(704), ___nl__5, ___get_global_const(238), ___nl__6));
#line 89
c_rt_lib0clear(&___nl__5);
#line 89
c_rt_lib0clear(&___nl__6);
#line 89
c_rt_lib0move(&___nl__3, ptd0rec(___nl__4));
#line 89
c_rt_lib0clear(&___nl__4);
#line 89
c_rt_lib0move(&___nl__5, c_rt_lib0func_new(module_checker0var_t0ptr, ___get_global_const(22), ___get_global_const(705)));
#line 89
c_rt_lib0move(&___nl__5, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__5));
#line 89
c_rt_lib0move(&___nl__4, ptd0hash(___nl__5));
#line 89
c_rt_lib0clear(&___nl__5);
#line 89
c_rt_lib0move(&___nl__5, c_rt_lib0func_new(tc_types0errors_t0ptr, ___get_global_const(14), ___get_global_const(706)));
#line 89
c_rt_lib0move(&___nl__5, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__5));
#line 89
c_rt_lib0move(&___nl__9, ptd0sim());
#line 89
c_rt_lib0move(&___nl__8, ptd0hash(___nl__9));
#line 89
c_rt_lib0clear(&___nl__9);
#line 89
c_rt_lib0move(&___nl__10, ptd0sim());
#line 89
c_rt_lib0move(&___nl__9, ptd0hash(___nl__10));
#line 89
c_rt_lib0clear(&___nl__10);
#line 89
c_rt_lib0move(&___nl__7, c_rt_lib0hash_mk(2, ___get_global_const(71), ___nl__8, ___get_global_const(99), ___nl__9));
#line 89
c_rt_lib0clear(&___nl__8);
#line 89
c_rt_lib0clear(&___nl__9);
#line 89
c_rt_lib0move(&___nl__6, ptd0rec(___nl__7));
#line 89
c_rt_lib0clear(&___nl__7);
#line 89
c_rt_lib0move(&___nl__7, ptd0sim());
#line 89
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(6, ___get_global_const(707), ___nl__2, ___get_global_const(210), ___nl__3, ___get_global_const(618), ___nl__4, ___get_global_const(17), ___nl__5, ___get_global_const(708), ___nl__6, ___get_global_const(709), ___nl__7));
#line 89
c_rt_lib0clear(&___nl__2);
#line 89
c_rt_lib0clear(&___nl__3);
#line 89
c_rt_lib0clear(&___nl__4);
#line 89
c_rt_lib0clear(&___nl__5);
#line 89
c_rt_lib0clear(&___nl__6);
#line 89
c_rt_lib0clear(&___nl__7);
#line 89
c_rt_lib0move(&___nl__0, ptd0rec(___nl__1));
#line 89
c_rt_lib0clear(&___nl__1);
#line 89
return ___nl__0;
#line 89
c_rt_lib0clear(&___nl__0);
#line 89
return NULL;
}

ImmT module_checker0save_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "module_checker0save_t");
return module_checker0save_t();}
ImmT module_checker0save_t(){
module_checker_priv0__const__init();
return module_checker_priv0__const__sing(7);}
ImmT module_checker0save_t0cal() {
module_checker_priv0__const__init();
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
#line 102
c_rt_lib0move(&___nl__2, c_rt_lib0func_new(boolean_t0type0ptr, ___get_global_const(180), ___get_global_const(72)));
#line 102
c_rt_lib0move(&___nl__2, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__2));
#line 102
c_rt_lib0move(&___nl__4, c_rt_lib0func_new(module_checker0var_t0ptr, ___get_global_const(22), ___get_global_const(705)));
#line 102
c_rt_lib0move(&___nl__4, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__4));
#line 102
c_rt_lib0move(&___nl__3, ptd0hash(___nl__4));
#line 102
c_rt_lib0clear(&___nl__4);
#line 102
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(2, ___get_global_const(707), ___nl__2, ___get_global_const(618), ___nl__3));
#line 102
c_rt_lib0clear(&___nl__2);
#line 102
c_rt_lib0clear(&___nl__3);
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

ImmT module_checker_priv0add_error(ImmT * ___ref___0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__1);
module_checker_priv0__const__init();
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
#line 109
c_rt_lib0move(&___nl__2,___get_global_const(17));
#line 109
c_rt_lib0move(&___nl__2, c_rt_lib0get_ref_hash(*___ref___0, ___nl__2));
#line 109
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(710)));
#line 109
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(99)));
#line 109
c_rt_lib0move(&___nl__3, c_rt_lib0hash_mk(3, ___get_global_const(97), ___nl__1, ___get_global_const(98), ___nl__4, ___get_global_const(99), ___nl__5));
#line 109
c_rt_lib0clear(&___nl__4);
#line 109
c_rt_lib0clear(&___nl__5);
#line 109
c_rt_lib0delete(array0push(&___nl__2, ___nl__3));
#line 109
c_rt_lib0clear(&___nl__3);
#line 109
c_rt_lib0move(&___nl__3,___get_global_const(17));
#line 109
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__3, ___nl__2));
#line 109
c_rt_lib0clear(&___nl__3);
#line 109
c_rt_lib0clear(&___nl__2);
#line 109
c_rt_lib0clear(&___nl__1);
#line 109
return NULL;
}

ImmT module_checker_priv0add_warning(ImmT * ___ref___0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__1);
module_checker_priv0__const__init();
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
#line 112
c_rt_lib0move(&___nl__2,___get_global_const(96));
#line 112
c_rt_lib0move(&___nl__2, c_rt_lib0get_ref_hash(*___ref___0, ___nl__2));
#line 112
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(710)));
#line 112
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(99)));
#line 112
c_rt_lib0move(&___nl__3, c_rt_lib0hash_mk(3, ___get_global_const(97), ___nl__1, ___get_global_const(98), ___nl__4, ___get_global_const(99), ___nl__5));
#line 112
c_rt_lib0clear(&___nl__4);
#line 112
c_rt_lib0clear(&___nl__5);
#line 112
c_rt_lib0delete(array0push(&___nl__2, ___nl__3));
#line 112
c_rt_lib0clear(&___nl__3);
#line 112
c_rt_lib0move(&___nl__3,___get_global_const(96));
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

ImmT module_checker_priv0set_used_function(ImmT ___nl__0,ImmT ___nl__1,ImmT * ___ref___2) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
module_checker_priv0__const__init();
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
#line 115
c_rt_lib0move(&___nl__3,___get_global_const(1));
#line 115
c_rt_lib0delete(hash0set_value(___ref___2, ___nl__0, ___nl__3));
#line 115
c_rt_lib0clear(&___nl__3);
#line 116
c_rt_lib0move(&___nl__3, hash0get_value(___nl__1, ___nl__0));
#line 116
c_rt_lib0move(&___nl__6, c_rt_lib0init_iter(___nl__3));
#line 116
label_3:
#line 116
c_rt_lib0move(&___nl__4, c_rt_lib0is_end_hash(___nl__6));
#line 116
if(c_rt_lib0check_true_native(___nl__4)){ goto label_1;}
#line 116
c_rt_lib0move(&___nl__4, c_rt_lib0get_key_iter(___nl__6));
#line 116
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value(___nl__3, ___nl__4));
#line 117
c_rt_lib0move(&___nl__7, hash0has_key(___nl__1, ___nl__4));
#line 117
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 117
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 117
if(c_rt_lib0check_true_native(___nl__7)){ goto label_5;}
#line 117
c_rt_lib0clear(&___nl__7);
#line 117
goto label_2;
#line 117
goto label_5;
#line 117
label_5:
#line 117
c_rt_lib0clear(&___nl__7);
#line 118
c_rt_lib0move(&___nl__7, hash0has_key(*___ref___2, ___nl__4));
#line 118
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 118
if(c_rt_lib0check_true_native(___nl__7)){ goto label_7;}
#line 118
c_rt_lib0clear(&___nl__7);
#line 118
goto label_2;
#line 118
goto label_7;
#line 118
label_7:
#line 118
c_rt_lib0clear(&___nl__7);
#line 119
c_rt_lib0delete(module_checker_priv0set_used_function(___nl__4, ___nl__1, ___ref___2));
#line 119
label_2:
#line 120
c_rt_lib0move(&___nl__6, c_rt_lib0next_iter(___nl__6));
#line 120
goto label_3;
#line 120
label_1:
#line 120
c_rt_lib0clear(&___nl__3);
#line 120
c_rt_lib0clear(&___nl__4);
#line 120
c_rt_lib0clear(&___nl__5);
#line 120
c_rt_lib0clear(&___nl__6);
#line 120
c_rt_lib0clear(&___nl__0);
#line 120
c_rt_lib0clear(&___nl__1);
#line 120
return NULL;
}

ImmT module_checker0check_module0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "module_checker0check_module");
return module_checker0check_module(_tab[0]);}
ImmT module_checker0check_module(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
module_checker_priv0__const__init();
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
#line 123
c_rt_lib0move(&___nl__2, c_rt_lib0array_mk(0));
#line 123
c_rt_lib0move(&___nl__3, c_rt_lib0array_mk(0));
#line 123
c_rt_lib0move(&___nl__4,___get_global_const(2));
#line 123
c_rt_lib0move(&___nl__4, c_rt_lib0unary_minus(___nl__4));
#line 123
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(76)));
#line 123
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(4, ___get_global_const(17), ___nl__2, ___get_global_const(96), ___nl__3, ___get_global_const(710), ___nl__4, ___get_global_const(99), ___nl__5));
#line 123
c_rt_lib0clear(&___nl__2);
#line 123
c_rt_lib0clear(&___nl__3);
#line 123
c_rt_lib0clear(&___nl__4);
#line 123
c_rt_lib0clear(&___nl__5);
#line 124
c_rt_lib0move(&___nl__3, c_rt_lib0hash_mk(0));
#line 124
c_rt_lib0move(&___nl__4, c_rt_lib0hash_mk(0));
#line 124
c_rt_lib0move(&___nl__2, c_rt_lib0hash_mk(2, ___get_global_const(71), ___nl__3, ___get_global_const(99), ___nl__4));
#line 124
c_rt_lib0clear(&___nl__3);
#line 124
c_rt_lib0clear(&___nl__4);
#line 125
c_rt_lib0move(&___nl__5, c_rt_lib0get_false());
#line 125
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_none(___get_global_const(37)));
#line 125
c_rt_lib0move(&___nl__4, c_rt_lib0hash_mk(2, ___get_global_const(704), ___nl__5, ___get_global_const(238), ___nl__6));
#line 125
c_rt_lib0clear(&___nl__5);
#line 125
c_rt_lib0clear(&___nl__6);
#line 125
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(76)));
#line 125
c_rt_lib0move(&___nl__6, c_rt_lib0get_false());
#line 125
c_rt_lib0move(&___nl__7, c_rt_lib0hash_mk(0));
#line 125
c_rt_lib0move(&___nl__3, c_rt_lib0hash_mk(6, ___get_global_const(210), ___nl__4, ___get_global_const(709), ___nl__5, ___get_global_const(707), ___nl__6, ___get_global_const(708), ___nl__2, ___get_global_const(618), ___nl__7, ___get_global_const(17), ___nl__1));
#line 125
c_rt_lib0clear(&___nl__4);
#line 125
c_rt_lib0clear(&___nl__5);
#line 125
c_rt_lib0clear(&___nl__6);
#line 125
c_rt_lib0clear(&___nl__7);
#line 126
c_rt_lib0move(&___nl__4, c_rt_lib0hash_mk(0));
#line 127
c_rt_lib0move(&___nl__5, c_rt_lib0hash_mk(0));
#line 128
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(711)));
#line 128
c_rt_lib0move(&___nl__8,___get_global_const(1));
#line 128
c_rt_lib0move(&___nl__9,___get_global_const(2));
#line 128
c_rt_lib0move(&___nl__10, c_rt_lib0array_len(___nl__6));
#line 128
label_3:
#line 128
c_rt_lib0move(&___nl__11, c_rt_lib0ge(___nl__8, ___nl__10));
#line 128
if(c_rt_lib0check_true_native(___nl__11)){ goto label_1;}
#line 128
c_rt_lib0move(&___nl__7, c_rt_lib0array_get(___nl__6, ___nl__8));
#line 129
c_rt_lib0move(&___nl__12, c_rt_lib0hash_get_value_dec(___nl__7, ___get_global_const(98)));
#line 129
c_rt_lib0move(&___nl__13,___get_global_const(17));
#line 129
c_rt_lib0move(&___nl__13, c_rt_lib0get_ref_hash(___nl__3, ___nl__13));
#line 129
c_rt_lib0copy(&___nl__14, ___nl__12);
#line 129
c_rt_lib0hash_set_value_dec(&___nl__13, ___get_global_const(710), ___nl__14);
#line 129
c_rt_lib0move(&___nl__15,___get_global_const(17));
#line 129
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__3, ___nl__15, ___nl__13));
#line 129
c_rt_lib0clear(&___nl__15);
#line 129
c_rt_lib0clear(&___nl__12);
#line 129
c_rt_lib0clear(&___nl__13);
#line 129
c_rt_lib0clear(&___nl__14);
#line 130
c_rt_lib0move(&___nl__12, c_rt_lib0hash_mk(0));
#line 130
c_rt_lib0copy(&___nl__13, ___nl__12);
#line 130
c_rt_lib0hash_set_value_dec(&___nl__3, ___get_global_const(618), ___nl__13);
#line 130
c_rt_lib0clear(&___nl__12);
#line 130
c_rt_lib0clear(&___nl__13);
#line 131
c_rt_lib0move(&___nl__13, c_rt_lib0get_false());
#line 131
c_rt_lib0move(&___nl__15, c_rt_lib0hash_get_value_dec(___nl__7, ___get_global_const(712)));
#line 131
c_rt_lib0move(&___nl__14, module_checker_priv0check_return_type(___nl__15, &___nl__3));
#line 131
c_rt_lib0clear(&___nl__15);
#line 131
c_rt_lib0move(&___nl__12, c_rt_lib0hash_mk(2, ___get_global_const(704), ___nl__13, ___get_global_const(238), ___nl__14));
#line 131
c_rt_lib0clear(&___nl__13);
#line 131
c_rt_lib0clear(&___nl__14);
#line 131
c_rt_lib0copy(&___nl__13, ___nl__12);
#line 131
c_rt_lib0hash_set_value_dec(&___nl__3, ___get_global_const(210), ___nl__13);
#line 131
c_rt_lib0clear(&___nl__12);
#line 131
c_rt_lib0clear(&___nl__13);
#line 132
c_rt_lib0move(&___nl__12, module_checker_priv0save_block(&___nl__3));
#line 133
c_rt_lib0move(&___nl__13, c_rt_lib0hash_get_value_dec(___nl__7, ___get_global_const(73)));
#line 133
c_rt_lib0move(&___nl__15,___get_global_const(1));
#line 133
c_rt_lib0move(&___nl__16,___get_global_const(2));
#line 133
c_rt_lib0move(&___nl__17, c_rt_lib0array_len(___nl__13));
#line 133
label_6:
#line 133
c_rt_lib0move(&___nl__18, c_rt_lib0ge(___nl__15, ___nl__17));
#line 133
if(c_rt_lib0check_true_native(___nl__18)){ goto label_4;}
#line 133
c_rt_lib0move(&___nl__14, c_rt_lib0array_get(___nl__13, ___nl__15));
#line 134
c_rt_lib0move(&___nl__19, c_rt_lib0hash_get_value_dec(___nl__14, ___get_global_const(76)));
#line 134
c_rt_lib0move(&___nl__20, c_rt_lib0get_false());
#line 134
c_rt_lib0move(&___nl__21, c_rt_lib0get_false());
#line 134
c_rt_lib0delete(module_checker_priv0add_var(___nl__19, ___nl__20, ___nl__21, &___nl__3));
#line 134
c_rt_lib0clear(&___nl__21);
#line 134
c_rt_lib0clear(&___nl__20);
#line 134
c_rt_lib0clear(&___nl__19);
#line 135
c_rt_lib0move(&___nl__19, c_rt_lib0hash_get_value_dec(___nl__14, ___get_global_const(72)));
#line 135
c_rt_lib0delete(module_checker_priv0check_type(___nl__19, &___nl__3));
#line 135
c_rt_lib0clear(&___nl__19);
#line 136
c_rt_lib0move(&___nl__19, c_rt_lib0hash_get_value_dec(___nl__14, ___get_global_const(76)));
#line 136
c_rt_lib0move(&___nl__20, c_rt_lib0ov_mk_none(___get_global_const(713)));
#line 136
c_rt_lib0delete(module_checker_priv0use_var(___nl__19, ___nl__20, &___nl__3));
#line 136
c_rt_lib0clear(&___nl__20);
#line 136
c_rt_lib0clear(&___nl__19);
#line 137
c_rt_lib0move(&___nl__15, c_rt_lib0add_mod(___nl__15, ___nl__16));
#line 137
goto label_6;
#line 137
label_4:
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
#line 137
c_rt_lib0clear(&___nl__18);
#line 138
c_rt_lib0move(&___nl__13, c_rt_lib0hash_get_value_dec(___nl__7, ___get_global_const(209)));
#line 138
c_rt_lib0delete(module_checker_priv0check_cmd(___nl__13, &___nl__3));
#line 138
c_rt_lib0clear(&___nl__13);
#line 139
c_rt_lib0move(&___nl__13, c_rt_lib0hash_get_value_dec(___nl__7, ___get_global_const(73)));
#line 139
c_rt_lib0move(&___nl__15,___get_global_const(1));
#line 139
c_rt_lib0move(&___nl__16,___get_global_const(2));
#line 139
c_rt_lib0move(&___nl__17, c_rt_lib0array_len(___nl__13));
#line 139
label_9:
#line 139
c_rt_lib0move(&___nl__18, c_rt_lib0ge(___nl__15, ___nl__17));
#line 139
if(c_rt_lib0check_true_native(___nl__18)){ goto label_7;}
#line 139
c_rt_lib0move(&___nl__14, c_rt_lib0array_get(___nl__13, ___nl__15));
#line 140
c_rt_lib0move(&___nl__19, c_rt_lib0hash_get_value_dec(___nl__14, ___get_global_const(257)));
#line 140
c_rt_lib0move(&___nl__19, c_rt_lib0priv_is(___nl__19, ___get_global_const(5)));
#line 140
c_rt_lib0move(&___nl__19, c_rt_lib0not(___nl__19));
#line 140
if(c_rt_lib0check_true_native(___nl__19)){ goto label_11;}
#line 141
c_rt_lib0move(&___nl__20, c_rt_lib0hash_get_value_dec(___nl__14, ___get_global_const(76)));
#line 141
c_rt_lib0move(&___nl__21, c_rt_lib0ov_mk_none(___get_global_const(714)));
#line 141
c_rt_lib0delete(module_checker_priv0use_var(___nl__20, ___nl__21, &___nl__3));
#line 141
c_rt_lib0clear(&___nl__21);
#line 141
c_rt_lib0clear(&___nl__20);
#line 142
goto label_11;
#line 142
label_11:
#line 142
c_rt_lib0clear(&___nl__19);
#line 143
c_rt_lib0move(&___nl__15, c_rt_lib0add_mod(___nl__15, ___nl__16));
#line 143
goto label_9;
#line 143
label_7:
#line 143
c_rt_lib0clear(&___nl__13);
#line 143
c_rt_lib0clear(&___nl__14);
#line 143
c_rt_lib0clear(&___nl__15);
#line 143
c_rt_lib0clear(&___nl__16);
#line 143
c_rt_lib0clear(&___nl__17);
#line 143
c_rt_lib0clear(&___nl__18);
#line 144
c_rt_lib0delete(module_checker_priv0load_block(&___nl__3, ___nl__12));
#line 145
c_rt_lib0move(&___nl__13, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(210)));
#line 145
c_rt_lib0move(&___nl__13, c_rt_lib0hash_get_value_dec(___nl__13, ___get_global_const(704)));
#line 145
c_rt_lib0move(&___nl__13, c_rt_lib0not(___nl__13));
#line 145
c_rt_lib0move(&___nl__13, c_rt_lib0not(___nl__13));
#line 145
if(c_rt_lib0check_true_native(___nl__13)){ goto label_13;}
#line 146
c_rt_lib0move(&___nl__14, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(210)));
#line 146
c_rt_lib0move(&___nl__14, c_rt_lib0hash_get_value_dec(___nl__14, ___get_global_const(238)));
#line 146
c_rt_lib0move(&___nl__14, c_rt_lib0priv_is(___nl__14, ___get_global_const(641)));
#line 146
if(c_rt_lib0check_true_native(___nl__14)){ goto label_16;}
#line 146
c_rt_lib0move(&___nl__14, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(210)));
#line 146
c_rt_lib0move(&___nl__14, c_rt_lib0hash_get_value_dec(___nl__14, ___get_global_const(238)));
#line 146
c_rt_lib0move(&___nl__14, c_rt_lib0priv_is(___nl__14, ___get_global_const(702)));
#line 146
label_16:
#line 146
c_rt_lib0move(&___nl__14, c_rt_lib0not(___nl__14));
#line 146
if(c_rt_lib0check_true_native(___nl__14)){ goto label_15;}
#line 146
c_rt_lib0move(&___nl__15,___get_global_const(17));
#line 146
c_rt_lib0move(&___nl__15, c_rt_lib0get_ref_hash(___nl__3, ___nl__15));
#line 146
c_rt_lib0move(&___nl__16,___get_global_const(715));
#line 146
c_rt_lib0delete(module_checker_priv0add_error(&___nl__15, ___nl__16));
#line 146
c_rt_lib0clear(&___nl__16);
#line 146
c_rt_lib0move(&___nl__16,___get_global_const(17));
#line 146
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__3, ___nl__16, ___nl__15));
#line 146
c_rt_lib0clear(&___nl__16);
#line 146
c_rt_lib0clear(&___nl__15);
#line 146
goto label_15;
#line 146
label_15:
#line 146
c_rt_lib0clear(&___nl__14);
#line 148
goto label_13;
#line 148
label_13:
#line 148
c_rt_lib0clear(&___nl__13);
#line 149
c_rt_lib0move(&___nl__14, c_rt_lib0hash_get_value_dec(___nl__7, ___get_global_const(328)));
#line 149
c_rt_lib0move(&___nl__14, c_rt_lib0priv_is(___nl__14, ___get_global_const(329)));
#line 149
if(c_rt_lib0check_true_native(___nl__14)){ goto label_18;}
#line 149
c_rt_lib0move(&___nl__14,___get_global_const(0));
#line 149
goto label_17;
#line 149
label_18:
#line 149
c_rt_lib0move(&___nl__14, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(76)));
#line 149
label_17:
#line 149
c_rt_lib0move(&___nl__15, c_rt_lib0hash_get_value_dec(___nl__7, ___get_global_const(76)));
#line 149
c_rt_lib0move(&___nl__16, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(76)));
#line 149
c_rt_lib0move(&___nl__13, module_checker_priv0get_fun_key(___nl__14, ___nl__15, ___nl__16));
#line 149
c_rt_lib0clear(&___nl__16);
#line 149
c_rt_lib0clear(&___nl__15);
#line 149
c_rt_lib0clear(&___nl__14);
#line 150
c_rt_lib0move(&___nl__14, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(708)));
#line 150
c_rt_lib0move(&___nl__14, c_rt_lib0hash_get_value_dec(___nl__14, ___get_global_const(71)));
#line 150
c_rt_lib0delete(hash0set_value(&___nl__4, ___nl__13, ___nl__14));
#line 150
c_rt_lib0clear(&___nl__14);
#line 151
c_rt_lib0move(&___nl__14, c_rt_lib0hash_get_value_dec(___nl__7, ___get_global_const(328)));
#line 151
c_rt_lib0move(&___nl__14, c_rt_lib0priv_is(___nl__14, ___get_global_const(330)));
#line 151
c_rt_lib0move(&___nl__14, c_rt_lib0not(___nl__14));
#line 151
c_rt_lib0move(&___nl__14, c_rt_lib0not(___nl__14));
#line 151
if(c_rt_lib0check_true_native(___nl__14)){ goto label_20;}
#line 151
c_rt_lib0move(&___nl__15,___get_global_const(1));
#line 151
c_rt_lib0delete(hash0set_value(&___nl__5, ___nl__13, ___nl__15));
#line 151
c_rt_lib0clear(&___nl__15);
#line 151
goto label_20;
#line 151
label_20:
#line 151
c_rt_lib0clear(&___nl__14);
#line 152
c_rt_lib0move(&___nl__14, c_rt_lib0hash_mk(0));
#line 152
c_rt_lib0move(&___nl__15,___get_global_const(708));
#line 152
c_rt_lib0move(&___nl__15, c_rt_lib0get_ref_hash(___nl__3, ___nl__15));
#line 152
c_rt_lib0copy(&___nl__16, ___nl__14);
#line 152
c_rt_lib0hash_set_value_dec(&___nl__15, ___get_global_const(71), ___nl__16);
#line 152
c_rt_lib0move(&___nl__17,___get_global_const(708));
#line 152
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__3, ___nl__17, ___nl__15));
#line 152
c_rt_lib0clear(&___nl__17);
#line 152
c_rt_lib0clear(&___nl__14);
#line 152
c_rt_lib0clear(&___nl__15);
#line 152
c_rt_lib0clear(&___nl__16);
#line 152
c_rt_lib0clear(&___nl__12);
#line 152
c_rt_lib0clear(&___nl__13);
#line 153
c_rt_lib0move(&___nl__8, c_rt_lib0add_mod(___nl__8, ___nl__9));
#line 153
goto label_3;
#line 153
label_1:
#line 153
c_rt_lib0clear(&___nl__6);
#line 153
c_rt_lib0clear(&___nl__7);
#line 153
c_rt_lib0clear(&___nl__8);
#line 153
c_rt_lib0clear(&___nl__9);
#line 153
c_rt_lib0clear(&___nl__10);
#line 153
c_rt_lib0clear(&___nl__11);
#line 154
c_rt_lib0move(&___nl__6, c_rt_lib0hash_mk(0));
#line 155
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(126)));
#line 155
c_rt_lib0move(&___nl__9,___get_global_const(1));
#line 155
c_rt_lib0move(&___nl__10,___get_global_const(2));
#line 155
c_rt_lib0move(&___nl__11, c_rt_lib0array_len(___nl__7));
#line 155
label_23:
#line 155
c_rt_lib0move(&___nl__12, c_rt_lib0ge(___nl__9, ___nl__11));
#line 155
if(c_rt_lib0check_true_native(___nl__12)){ goto label_21;}
#line 155
c_rt_lib0move(&___nl__8, c_rt_lib0array_get(___nl__7, ___nl__9));
#line 156
c_rt_lib0move(&___nl__13, c_rt_lib0hash_get_value_dec(___nl__8, ___get_global_const(98)));
#line 156
c_rt_lib0move(&___nl__14,___get_global_const(17));
#line 156
c_rt_lib0move(&___nl__14, c_rt_lib0get_ref_hash(___nl__3, ___nl__14));
#line 156
c_rt_lib0copy(&___nl__15, ___nl__13);
#line 156
c_rt_lib0hash_set_value_dec(&___nl__14, ___get_global_const(710), ___nl__15);
#line 156
c_rt_lib0move(&___nl__16,___get_global_const(17));
#line 156
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__3, ___nl__16, ___nl__14));
#line 156
c_rt_lib0clear(&___nl__16);
#line 156
c_rt_lib0clear(&___nl__13);
#line 156
c_rt_lib0clear(&___nl__14);
#line 156
c_rt_lib0clear(&___nl__15);
#line 157
c_rt_lib0move(&___nl__14, c_rt_lib0hash_get_value_dec(___nl__8, ___get_global_const(76)));
#line 157
c_rt_lib0move(&___nl__13, hash0has_key(___nl__6, ___nl__14));
#line 157
c_rt_lib0clear(&___nl__14);
#line 157
c_rt_lib0move(&___nl__13, c_rt_lib0not(___nl__13));
#line 157
if(c_rt_lib0check_true_native(___nl__13)){ goto label_25;}
#line 157
c_rt_lib0move(&___nl__14,___get_global_const(17));
#line 157
c_rt_lib0move(&___nl__14, c_rt_lib0get_ref_hash(___nl__3, ___nl__14));
#line 157
c_rt_lib0move(&___nl__15,___get_global_const(716));
#line 157
c_rt_lib0move(&___nl__16, c_rt_lib0hash_get_value_dec(___nl__8, ___get_global_const(76)));
#line 157
c_rt_lib0move(&___nl__15, c_rt_lib0concat_add(___nl__15, ___nl__16));
#line 157
c_rt_lib0clear(&___nl__16);
#line 157
c_rt_lib0delete(module_checker_priv0add_warning(&___nl__14, ___nl__15));
#line 157
c_rt_lib0clear(&___nl__15);
#line 157
c_rt_lib0move(&___nl__15,___get_global_const(17));
#line 157
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__3, ___nl__15, ___nl__14));
#line 157
c_rt_lib0clear(&___nl__15);
#line 157
c_rt_lib0clear(&___nl__14);
#line 157
goto label_25;
#line 157
label_25:
#line 157
c_rt_lib0clear(&___nl__13);
#line 159
c_rt_lib0move(&___nl__14, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(708)));
#line 159
c_rt_lib0move(&___nl__14, c_rt_lib0hash_get_value_dec(___nl__14, ___get_global_const(99)));
#line 159
c_rt_lib0move(&___nl__15, c_rt_lib0hash_get_value_dec(___nl__8, ___get_global_const(76)));
#line 159
c_rt_lib0move(&___nl__13, hash0has_key(___nl__14, ___nl__15));
#line 159
c_rt_lib0clear(&___nl__15);
#line 159
c_rt_lib0clear(&___nl__14);
#line 159
c_rt_lib0move(&___nl__13, c_rt_lib0not(___nl__13));
#line 159
c_rt_lib0move(&___nl__13, c_rt_lib0not(___nl__13));
#line 159
if(c_rt_lib0check_true_native(___nl__13)){ goto label_27;}
#line 159
c_rt_lib0move(&___nl__14,___get_global_const(17));
#line 159
c_rt_lib0move(&___nl__14, c_rt_lib0get_ref_hash(___nl__3, ___nl__14));
#line 159
c_rt_lib0move(&___nl__15,___get_global_const(717));
#line 159
c_rt_lib0move(&___nl__16, c_rt_lib0hash_get_value_dec(___nl__8, ___get_global_const(76)));
#line 159
c_rt_lib0move(&___nl__15, c_rt_lib0concat_add(___nl__15, ___nl__16));
#line 159
c_rt_lib0clear(&___nl__16);
#line 159
c_rt_lib0delete(module_checker_priv0add_warning(&___nl__14, ___nl__15));
#line 159
c_rt_lib0clear(&___nl__15);
#line 159
c_rt_lib0move(&___nl__15,___get_global_const(17));
#line 159
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__3, ___nl__15, ___nl__14));
#line 159
c_rt_lib0clear(&___nl__15);
#line 159
c_rt_lib0clear(&___nl__14);
#line 159
goto label_27;
#line 159
label_27:
#line 159
c_rt_lib0clear(&___nl__13);
#line 161
c_rt_lib0move(&___nl__13, c_rt_lib0hash_get_value_dec(___nl__8, ___get_global_const(76)));
#line 161
c_rt_lib0move(&___nl__14, c_rt_lib0get_true());
#line 161
c_rt_lib0delete(hash0set_value(&___nl__6, ___nl__13, ___nl__14));
#line 161
c_rt_lib0clear(&___nl__14);
#line 161
c_rt_lib0clear(&___nl__13);
#line 162
c_rt_lib0move(&___nl__9, c_rt_lib0add_mod(___nl__9, ___nl__10));
#line 162
goto label_23;
#line 162
label_21:
#line 162
c_rt_lib0clear(&___nl__7);
#line 162
c_rt_lib0clear(&___nl__8);
#line 162
c_rt_lib0clear(&___nl__9);
#line 162
c_rt_lib0clear(&___nl__10);
#line 162
c_rt_lib0clear(&___nl__11);
#line 162
c_rt_lib0clear(&___nl__12);
#line 163
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(708)));
#line 163
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__7, ___get_global_const(99)));
#line 163
c_rt_lib0move(&___nl__10, c_rt_lib0init_iter(___nl__7));
#line 163
label_30:
#line 163
c_rt_lib0move(&___nl__8, c_rt_lib0is_end_hash(___nl__10));
#line 163
if(c_rt_lib0check_true_native(___nl__8)){ goto label_28;}
#line 163
c_rt_lib0move(&___nl__8, c_rt_lib0get_key_iter(___nl__10));
#line 163
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value(___nl__7, ___nl__8));
#line 164
c_rt_lib0move(&___nl__11,___get_global_const(17));
#line 164
c_rt_lib0move(&___nl__11, c_rt_lib0get_ref_hash(___nl__3, ___nl__11));
#line 164
c_rt_lib0copy(&___nl__12, ___nl__9);
#line 164
c_rt_lib0hash_set_value_dec(&___nl__11, ___get_global_const(710), ___nl__12);
#line 164
c_rt_lib0move(&___nl__13,___get_global_const(17));
#line 164
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__3, ___nl__13, ___nl__11));
#line 164
c_rt_lib0clear(&___nl__13);
#line 164
c_rt_lib0clear(&___nl__11);
#line 164
c_rt_lib0clear(&___nl__12);
#line 165
c_rt_lib0move(&___nl__11, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(76)));
#line 165
c_rt_lib0move(&___nl__11, c_rt_lib0eq(___nl__11, ___nl__8));
#line 165
c_rt_lib0move(&___nl__11, c_rt_lib0not(___nl__11));
#line 165
if(c_rt_lib0check_true_native(___nl__11)){ goto label_32;}
#line 165
c_rt_lib0clear(&___nl__11);
#line 165
goto label_29;
#line 165
goto label_32;
#line 165
label_32:
#line 165
c_rt_lib0clear(&___nl__11);
#line 166
c_rt_lib0move(&___nl__11, hash0has_key(___nl__6, ___nl__8));
#line 166
c_rt_lib0move(&___nl__11, c_rt_lib0not(___nl__11));
#line 166
c_rt_lib0move(&___nl__11, c_rt_lib0not(___nl__11));
#line 166
if(c_rt_lib0check_true_native(___nl__11)){ goto label_34;}
#line 166
c_rt_lib0move(&___nl__12,___get_global_const(17));
#line 166
c_rt_lib0move(&___nl__12, c_rt_lib0get_ref_hash(___nl__3, ___nl__12));
#line 166
c_rt_lib0move(&___nl__13,___get_global_const(718));
#line 166
c_rt_lib0move(&___nl__13, c_rt_lib0concat_add(___nl__13, ___nl__8));
#line 166
c_rt_lib0move(&___nl__14,___get_global_const(719));
#line 166
c_rt_lib0move(&___nl__13, c_rt_lib0concat_add(___nl__13, ___nl__14));
#line 166
c_rt_lib0clear(&___nl__14);
#line 166
c_rt_lib0delete(module_checker_priv0add_error(&___nl__12, ___nl__13));
#line 166
c_rt_lib0clear(&___nl__13);
#line 166
c_rt_lib0move(&___nl__13,___get_global_const(17));
#line 166
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__3, ___nl__13, ___nl__12));
#line 166
c_rt_lib0clear(&___nl__13);
#line 166
c_rt_lib0clear(&___nl__12);
#line 166
goto label_34;
#line 166
label_34:
#line 166
c_rt_lib0clear(&___nl__11);
#line 166
label_29:
#line 168
c_rt_lib0move(&___nl__10, c_rt_lib0next_iter(___nl__10));
#line 168
goto label_30;
#line 168
label_28:
#line 168
c_rt_lib0clear(&___nl__7);
#line 168
c_rt_lib0clear(&___nl__8);
#line 168
c_rt_lib0clear(&___nl__9);
#line 168
c_rt_lib0clear(&___nl__10);
#line 169
c_rt_lib0copy(&___nl__7, ___nl__5);
#line 170
c_rt_lib0move(&___nl__10, c_rt_lib0init_iter(___nl__7));
#line 170
label_37:
#line 170
c_rt_lib0move(&___nl__8, c_rt_lib0is_end_hash(___nl__10));
#line 170
if(c_rt_lib0check_true_native(___nl__8)){ goto label_35;}
#line 170
c_rt_lib0move(&___nl__8, c_rt_lib0get_key_iter(___nl__10));
#line 170
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value(___nl__7, ___nl__8));
#line 171
c_rt_lib0delete(module_checker_priv0set_used_function(___nl__8, ___nl__4, &___nl__5));
#line 172
c_rt_lib0move(&___nl__10, c_rt_lib0next_iter(___nl__10));
#line 172
goto label_37;
#line 172
label_35:
#line 172
c_rt_lib0clear(&___nl__8);
#line 172
c_rt_lib0clear(&___nl__9);
#line 172
c_rt_lib0clear(&___nl__10);
#line 173
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(711)));
#line 173
c_rt_lib0move(&___nl__10,___get_global_const(1));
#line 173
c_rt_lib0move(&___nl__11,___get_global_const(2));
#line 173
c_rt_lib0move(&___nl__12, c_rt_lib0array_len(___nl__8));
#line 173
label_40:
#line 173
c_rt_lib0move(&___nl__13, c_rt_lib0ge(___nl__10, ___nl__12));
#line 173
if(c_rt_lib0check_true_native(___nl__13)){ goto label_38;}
#line 173
c_rt_lib0move(&___nl__9, c_rt_lib0array_get(___nl__8, ___nl__10));
#line 174
c_rt_lib0move(&___nl__14, c_rt_lib0hash_get_value_dec(___nl__9, ___get_global_const(328)));
#line 174
c_rt_lib0move(&___nl__14, c_rt_lib0priv_is(___nl__14, ___get_global_const(329)));
#line 174
c_rt_lib0move(&___nl__14, c_rt_lib0not(___nl__14));
#line 174
if(c_rt_lib0check_true_native(___nl__14)){ goto label_42;}
#line 174
c_rt_lib0clear(&___nl__14);
#line 174
goto label_39;
#line 174
goto label_42;
#line 174
label_42:
#line 174
c_rt_lib0clear(&___nl__14);
#line 175
c_rt_lib0move(&___nl__15,___get_global_const(720));
#line 175
c_rt_lib0move(&___nl__16, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(76)));
#line 175
c_rt_lib0move(&___nl__15, c_rt_lib0concat_add(___nl__15, ___nl__16));
#line 175
c_rt_lib0clear(&___nl__16);
#line 175
c_rt_lib0move(&___nl__16,___get_global_const(579));
#line 175
c_rt_lib0move(&___nl__15, c_rt_lib0concat_add(___nl__15, ___nl__16));
#line 175
c_rt_lib0clear(&___nl__16);
#line 175
c_rt_lib0move(&___nl__16, c_rt_lib0hash_get_value_dec(___nl__9, ___get_global_const(76)));
#line 175
c_rt_lib0move(&___nl__15, c_rt_lib0concat_add(___nl__15, ___nl__16));
#line 175
c_rt_lib0clear(&___nl__16);
#line 175
c_rt_lib0move(&___nl__14, hash0has_key(___nl__5, ___nl__15));
#line 175
c_rt_lib0clear(&___nl__15);
#line 175
c_rt_lib0move(&___nl__14, c_rt_lib0not(___nl__14));
#line 175
if(c_rt_lib0check_true_native(___nl__14)){ goto label_44;}
#line 175
c_rt_lib0clear(&___nl__14);
#line 175
goto label_39;
#line 175
goto label_44;
#line 175
label_44:
#line 175
c_rt_lib0clear(&___nl__14);
#line 176
c_rt_lib0move(&___nl__14, c_rt_lib0hash_get_value_dec(___nl__9, ___get_global_const(98)));
#line 176
c_rt_lib0move(&___nl__15,___get_global_const(17));
#line 176
c_rt_lib0move(&___nl__15, c_rt_lib0get_ref_hash(___nl__3, ___nl__15));
#line 176
c_rt_lib0copy(&___nl__16, ___nl__14);
#line 176
c_rt_lib0hash_set_value_dec(&___nl__15, ___get_global_const(710), ___nl__16);
#line 176
c_rt_lib0move(&___nl__17,___get_global_const(17));
#line 176
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__3, ___nl__17, ___nl__15));
#line 176
c_rt_lib0clear(&___nl__17);
#line 176
c_rt_lib0clear(&___nl__14);
#line 176
c_rt_lib0clear(&___nl__15);
#line 176
c_rt_lib0clear(&___nl__16);
#line 177
c_rt_lib0move(&___nl__14,___get_global_const(17));
#line 177
c_rt_lib0move(&___nl__14, c_rt_lib0get_ref_hash(___nl__3, ___nl__14));
#line 177
c_rt_lib0move(&___nl__15,___get_global_const(721));
#line 177
c_rt_lib0move(&___nl__16, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(76)));
#line 177
c_rt_lib0move(&___nl__15, c_rt_lib0concat_add(___nl__15, ___nl__16));
#line 177
c_rt_lib0clear(&___nl__16);
#line 177
c_rt_lib0move(&___nl__16,___get_global_const(580));
#line 177
c_rt_lib0move(&___nl__15, c_rt_lib0concat_add(___nl__15, ___nl__16));
#line 177
c_rt_lib0clear(&___nl__16);
#line 177
c_rt_lib0move(&___nl__16, c_rt_lib0hash_get_value_dec(___nl__9, ___get_global_const(76)));
#line 177
c_rt_lib0move(&___nl__15, c_rt_lib0concat_add(___nl__15, ___nl__16));
#line 177
c_rt_lib0clear(&___nl__16);
#line 177
c_rt_lib0delete(module_checker_priv0add_warning(&___nl__14, ___nl__15));
#line 177
c_rt_lib0clear(&___nl__15);
#line 177
c_rt_lib0move(&___nl__15,___get_global_const(17));
#line 177
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__3, ___nl__15, ___nl__14));
#line 177
c_rt_lib0clear(&___nl__15);
#line 177
c_rt_lib0clear(&___nl__14);
#line 177
label_39:
#line 178
c_rt_lib0move(&___nl__10, c_rt_lib0add_mod(___nl__10, ___nl__11));
#line 178
goto label_40;
#line 178
label_38:
#line 178
c_rt_lib0clear(&___nl__8);
#line 178
c_rt_lib0clear(&___nl__9);
#line 178
c_rt_lib0clear(&___nl__10);
#line 178
c_rt_lib0clear(&___nl__11);
#line 178
c_rt_lib0clear(&___nl__12);
#line 178
c_rt_lib0clear(&___nl__13);
#line 179
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(17)));
#line 179
c_rt_lib0clear(&___nl__0);
#line 179
c_rt_lib0clear(&___nl__1);
#line 179
c_rt_lib0clear(&___nl__2);
#line 179
c_rt_lib0clear(&___nl__3);
#line 179
c_rt_lib0clear(&___nl__4);
#line 179
c_rt_lib0clear(&___nl__5);
#line 179
c_rt_lib0clear(&___nl__6);
#line 179
c_rt_lib0clear(&___nl__7);
#line 179
return ___nl__8;
#line 179
c_rt_lib0clear(&___nl__8);
#line 179
c_rt_lib0clear(&___nl__1);
#line 179
c_rt_lib0clear(&___nl__2);
#line 179
c_rt_lib0clear(&___nl__3);
#line 179
c_rt_lib0clear(&___nl__4);
#line 179
c_rt_lib0clear(&___nl__5);
#line 179
c_rt_lib0clear(&___nl__6);
#line 179
c_rt_lib0clear(&___nl__7);
#line 179
c_rt_lib0clear(&___nl__0);
#line 179
return NULL;
}

ImmT module_checker_priv0check_types_imported(ImmT ___nl__0,ImmT * ___ref___1) {
c_rt_lib0arg_val(___nl__0);
module_checker_priv0__const__init();
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
ImmT ___nl__9 = NULL;
ImmT ___nl__10 = NULL;
#line 182
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__0, ___get_global_const(722)));
#line 182
if(c_rt_lib0check_true_native(___nl__2)){ goto label_2;}
#line 183
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__0, ___get_global_const(723)));
#line 183
if(c_rt_lib0check_true_native(___nl__2)){ goto label_3;}
#line 185
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__0, ___get_global_const(724)));
#line 185
if(c_rt_lib0check_true_native(___nl__2)){ goto label_4;}
#line 187
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__0, ___get_global_const(725)));
#line 187
if(c_rt_lib0check_true_native(___nl__2)){ goto label_5;}
#line 191
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__0, ___get_global_const(726)));
#line 191
if(c_rt_lib0check_true_native(___nl__2)){ goto label_6;}
#line 200
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__0, ___get_global_const(727)));
#line 200
if(c_rt_lib0check_true_native(___nl__2)){ goto label_7;}
#line 201
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__0, ___get_global_const(728)));
#line 201
if(c_rt_lib0check_true_native(___nl__2)){ goto label_8;}
#line 202
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__0, ___get_global_const(729)));
#line 202
if(c_rt_lib0check_true_native(___nl__2)){ goto label_9;}
#line 209
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__0, ___get_global_const(730)));
#line 209
if(c_rt_lib0check_true_native(___nl__2)){ goto label_10;}
#line 209
c_rt_lib0move(&___nl__2,___get_global_const(74));
#line 209
c_rt_lib0move(&___nl__2, c_rt_lib0array_mk(2, ___nl__2, ___nl__0));
#line 209
nl_die_arg(___nl__2);
#line 182
label_2:
#line 183
goto label_1;
#line 183
label_3:
#line 183
c_rt_lib0move(&___nl__3, c_rt_lib0priv_as(___nl__0, ___get_global_const(723)));
#line 184
c_rt_lib0delete(module_checker_priv0check_types_imported(___nl__3, ___ref___1));
#line 184
c_rt_lib0clear(&___nl__3);
#line 185
goto label_1;
#line 185
label_4:
#line 185
c_rt_lib0move(&___nl__3, c_rt_lib0priv_as(___nl__0, ___get_global_const(724)));
#line 186
c_rt_lib0delete(module_checker_priv0check_types_imported(___nl__3, ___ref___1));
#line 186
c_rt_lib0clear(&___nl__3);
#line 187
goto label_1;
#line 187
label_5:
#line 187
c_rt_lib0move(&___nl__3, c_rt_lib0priv_as(___nl__0, ___get_global_const(725)));
#line 188
c_rt_lib0move(&___nl__6, c_rt_lib0init_iter(___nl__3));
#line 188
label_13:
#line 188
c_rt_lib0move(&___nl__4, c_rt_lib0is_end_hash(___nl__6));
#line 188
if(c_rt_lib0check_true_native(___nl__4)){ goto label_11;}
#line 188
c_rt_lib0move(&___nl__4, c_rt_lib0get_key_iter(___nl__6));
#line 188
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value(___nl__3, ___nl__4));
#line 189
c_rt_lib0delete(module_checker_priv0check_types_imported(___nl__5, ___ref___1));
#line 190
c_rt_lib0move(&___nl__6, c_rt_lib0next_iter(___nl__6));
#line 190
goto label_13;
#line 190
label_11:
#line 190
c_rt_lib0clear(&___nl__4);
#line 190
c_rt_lib0clear(&___nl__5);
#line 190
c_rt_lib0clear(&___nl__6);
#line 190
c_rt_lib0clear(&___nl__3);
#line 191
goto label_1;
#line 191
label_6:
#line 191
c_rt_lib0move(&___nl__3, c_rt_lib0priv_as(___nl__0, ___get_global_const(726)));
#line 192
c_rt_lib0move(&___nl__5,___get_global_const(579));
#line 192
c_rt_lib0move(&___nl__4, string0index2(___nl__3, ___nl__5));
#line 192
c_rt_lib0clear(&___nl__5);
#line 193
c_rt_lib0move(&___nl__5,___get_global_const(1));
#line 193
c_rt_lib0move(&___nl__5, c_rt_lib0ge(___nl__4, ___nl__5));
#line 193
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 193
if(c_rt_lib0check_true_native(___nl__5)){ goto label_15;}
#line 194
c_rt_lib0move(&___nl__7,___get_global_const(1));
#line 194
c_rt_lib0move(&___nl__6, string0substr(___nl__3, ___nl__7, ___nl__4));
#line 194
c_rt_lib0clear(&___nl__7);
#line 195
c_rt_lib0move(&___nl__8,___get_global_const(137));
#line 195
c_rt_lib0move(&___nl__8, c_rt_lib0add(___nl__4, ___nl__8));
#line 195
c_rt_lib0move(&___nl__9, string0length(___nl__3));
#line 195
c_rt_lib0move(&___nl__9, c_rt_lib0sub_mod(___nl__9, ___nl__4));
#line 195
c_rt_lib0move(&___nl__10,___get_global_const(137));
#line 195
c_rt_lib0move(&___nl__9, c_rt_lib0sub_mod(___nl__9, ___nl__10));
#line 195
c_rt_lib0clear(&___nl__10);
#line 195
c_rt_lib0move(&___nl__7, string0substr(___nl__3, ___nl__8, ___nl__9));
#line 195
c_rt_lib0clear(&___nl__9);
#line 195
c_rt_lib0clear(&___nl__8);
#line 196
c_rt_lib0delete(module_checker_priv0add_fun_used(___nl__6, ___nl__7, ___ref___1));
#line 196
c_rt_lib0clear(&___nl__6);
#line 196
c_rt_lib0clear(&___nl__7);
#line 197
goto label_14;
#line 197
label_15:
#line 198
c_rt_lib0move(&___nl__6,___get_global_const(17));
#line 198
c_rt_lib0move(&___nl__6, c_rt_lib0get_ref_hash(*___ref___1, ___nl__6));
#line 198
c_rt_lib0move(&___nl__7,___get_global_const(731));
#line 198
c_rt_lib0move(&___nl__7, c_rt_lib0concat_add(___nl__7, ___nl__3));
#line 198
c_rt_lib0move(&___nl__8,___get_global_const(732));
#line 198
c_rt_lib0move(&___nl__7, c_rt_lib0concat_add(___nl__7, ___nl__8));
#line 198
c_rt_lib0clear(&___nl__8);
#line 198
c_rt_lib0delete(module_checker_priv0add_error(&___nl__6, ___nl__7));
#line 198
c_rt_lib0clear(&___nl__7);
#line 198
c_rt_lib0move(&___nl__7,___get_global_const(17));
#line 198
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___1, ___nl__7, ___nl__6));
#line 198
c_rt_lib0clear(&___nl__7);
#line 198
c_rt_lib0clear(&___nl__6);
#line 199
goto label_14;
#line 199
label_14:
#line 199
c_rt_lib0clear(&___nl__5);
#line 199
c_rt_lib0clear(&___nl__4);
#line 199
c_rt_lib0clear(&___nl__3);
#line 200
goto label_1;
#line 200
label_7:
#line 201
goto label_1;
#line 201
label_8:
#line 202
goto label_1;
#line 202
label_9:
#line 202
c_rt_lib0move(&___nl__3, c_rt_lib0priv_as(___nl__0, ___get_global_const(729)));
#line 203
c_rt_lib0move(&___nl__6, c_rt_lib0init_iter(___nl__3));
#line 203
label_18:
#line 203
c_rt_lib0move(&___nl__4, c_rt_lib0is_end_hash(___nl__6));
#line 203
if(c_rt_lib0check_true_native(___nl__4)){ goto label_16;}
#line 203
c_rt_lib0move(&___nl__4, c_rt_lib0get_key_iter(___nl__6));
#line 203
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value(___nl__3, ___nl__4));
#line 204
c_rt_lib0move(&___nl__7, c_rt_lib0priv_is(___nl__5, ___get_global_const(733)));
#line 204
if(c_rt_lib0check_true_native(___nl__7)){ goto label_20;}
#line 205
c_rt_lib0move(&___nl__7, c_rt_lib0priv_is(___nl__5, ___get_global_const(734)));
#line 205
if(c_rt_lib0check_true_native(___nl__7)){ goto label_21;}
#line 205
c_rt_lib0move(&___nl__7,___get_global_const(74));
#line 205
c_rt_lib0move(&___nl__7, c_rt_lib0array_mk(2, ___nl__7, ___nl__5));
#line 205
nl_die_arg(___nl__7);
#line 204
label_20:
#line 205
goto label_19;
#line 205
label_21:
#line 205
c_rt_lib0move(&___nl__8, c_rt_lib0priv_as(___nl__5, ___get_global_const(734)));
#line 206
c_rt_lib0delete(module_checker_priv0check_types_imported(___nl__8, ___ref___1));
#line 206
c_rt_lib0clear(&___nl__8);
#line 207
goto label_19;
#line 207
label_19:
#line 207
c_rt_lib0clear(&___nl__7);
#line 208
c_rt_lib0move(&___nl__6, c_rt_lib0next_iter(___nl__6));
#line 208
goto label_18;
#line 208
label_16:
#line 208
c_rt_lib0clear(&___nl__4);
#line 208
c_rt_lib0clear(&___nl__5);
#line 208
c_rt_lib0clear(&___nl__6);
#line 208
c_rt_lib0clear(&___nl__3);
#line 209
goto label_1;
#line 209
label_10:
#line 210
goto label_1;
#line 210
label_1:
#line 210
c_rt_lib0clear(&___nl__2);
#line 210
c_rt_lib0clear(&___nl__0);
#line 210
return NULL;
}

ImmT module_checker_priv0get_fun_key(ImmT ___nl__0,ImmT ___nl__1,ImmT ___nl__2) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
c_rt_lib0arg_val(___nl__2);
module_checker_priv0__const__init();
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
#line 214
c_rt_lib0move(&___nl__3,___get_global_const(0));
#line 214
c_rt_lib0move(&___nl__3, c_rt_lib0eq(___nl__0, ___nl__3));
#line 214
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 214
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 214
if(c_rt_lib0check_true_native(___nl__3)){ goto label_2;}
#line 214
c_rt_lib0move(&___nl__4,___get_global_const(579));
#line 214
c_rt_lib0move(&___nl__4, c_rt_lib0concat_new(___nl__0, ___nl__4));
#line 214
c_rt_lib0move(&___nl__4, c_rt_lib0concat_add(___nl__4, ___nl__1));
#line 214
c_rt_lib0clear(&___nl__0);
#line 214
c_rt_lib0clear(&___nl__1);
#line 214
c_rt_lib0clear(&___nl__2);
#line 214
c_rt_lib0clear(&___nl__3);
#line 214
return ___nl__4;
#line 214
c_rt_lib0clear(&___nl__4);
#line 214
goto label_2;
#line 214
label_2:
#line 214
c_rt_lib0clear(&___nl__3);
#line 215
c_rt_lib0move(&___nl__3,___get_global_const(720));
#line 215
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__2));
#line 215
c_rt_lib0move(&___nl__4,___get_global_const(579));
#line 215
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 215
c_rt_lib0clear(&___nl__4);
#line 215
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__1));
#line 215
c_rt_lib0clear(&___nl__0);
#line 215
c_rt_lib0clear(&___nl__1);
#line 215
c_rt_lib0clear(&___nl__2);
#line 215
return ___nl__3;
#line 215
c_rt_lib0clear(&___nl__3);
#line 215
c_rt_lib0clear(&___nl__0);
#line 215
c_rt_lib0clear(&___nl__1);
#line 215
c_rt_lib0clear(&___nl__2);
#line 215
return NULL;
}

ImmT module_checker_priv0add_fun_used(ImmT ___nl__0,ImmT ___nl__1,ImmT * ___ref___2) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
module_checker_priv0__const__init();
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
#line 219
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(*___ref___2, ___get_global_const(709)));
#line 219
c_rt_lib0move(&___nl__3, module_checker_priv0get_fun_key(___nl__0, ___nl__1, ___nl__4));
#line 219
c_rt_lib0clear(&___nl__4);
#line 220
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(*___ref___2, ___get_global_const(708)));
#line 220
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(71)));
#line 220
c_rt_lib0move(&___nl__4, hash0has_key(___nl__5, ___nl__3));
#line 220
c_rt_lib0clear(&___nl__5);
#line 220
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 220
if(c_rt_lib0check_true_native(___nl__4)){ goto label_2;}
#line 220
c_rt_lib0clear(&___nl__0);
#line 220
c_rt_lib0clear(&___nl__1);
#line 220
c_rt_lib0clear(&___nl__3);
#line 220
c_rt_lib0clear(&___nl__4);
#line 220
return NULL;
#line 220
goto label_2;
#line 220
label_2:
#line 220
c_rt_lib0clear(&___nl__4);
#line 221
c_rt_lib0move(&___nl__4,___get_global_const(708));
#line 221
c_rt_lib0move(&___nl__4, c_rt_lib0get_ref_hash(*___ref___2, ___nl__4));
#line 221
c_rt_lib0move(&___nl__5,___get_global_const(71));
#line 221
c_rt_lib0move(&___nl__5, c_rt_lib0get_ref_hash(___nl__4, ___nl__5));
#line 221
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(*___ref___2, ___get_global_const(17)));
#line 221
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__6, ___get_global_const(710)));
#line 221
c_rt_lib0delete(hash0set_value(&___nl__5, ___nl__3, ___nl__6));
#line 221
c_rt_lib0clear(&___nl__6);
#line 221
c_rt_lib0move(&___nl__6,___get_global_const(71));
#line 221
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__4, ___nl__6, ___nl__5));
#line 221
c_rt_lib0move(&___nl__6,___get_global_const(708));
#line 221
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___2, ___nl__6, ___nl__4));
#line 221
c_rt_lib0clear(&___nl__6);
#line 221
c_rt_lib0clear(&___nl__4);
#line 221
c_rt_lib0clear(&___nl__5);
#line 222
c_rt_lib0move(&___nl__4,___get_global_const(0));
#line 222
c_rt_lib0move(&___nl__4, c_rt_lib0eq(___nl__0, ___nl__4));
#line 222
if(c_rt_lib0check_true_native(___nl__4)){ goto label_5;}
#line 222
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(*___ref___2, ___get_global_const(708)));
#line 222
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(99)));
#line 222
c_rt_lib0move(&___nl__4, hash0has_key(___nl__5, ___nl__0));
#line 222
c_rt_lib0clear(&___nl__5);
#line 222
label_5:
#line 222
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 222
if(c_rt_lib0check_true_native(___nl__4)){ goto label_4;}
#line 222
c_rt_lib0clear(&___nl__0);
#line 222
c_rt_lib0clear(&___nl__1);
#line 222
c_rt_lib0clear(&___nl__3);
#line 222
c_rt_lib0clear(&___nl__4);
#line 222
return NULL;
#line 222
goto label_4;
#line 222
label_4:
#line 222
c_rt_lib0clear(&___nl__4);
#line 223
c_rt_lib0move(&___nl__4,___get_global_const(708));
#line 223
c_rt_lib0move(&___nl__4, c_rt_lib0get_ref_hash(*___ref___2, ___nl__4));
#line 223
c_rt_lib0move(&___nl__5,___get_global_const(99));
#line 223
c_rt_lib0move(&___nl__5, c_rt_lib0get_ref_hash(___nl__4, ___nl__5));
#line 223
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(*___ref___2, ___get_global_const(17)));
#line 223
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__6, ___get_global_const(710)));
#line 223
c_rt_lib0delete(hash0set_value(&___nl__5, ___nl__0, ___nl__6));
#line 223
c_rt_lib0clear(&___nl__6);
#line 223
c_rt_lib0move(&___nl__6,___get_global_const(99));
#line 223
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__4, ___nl__6, ___nl__5));
#line 223
c_rt_lib0move(&___nl__6,___get_global_const(708));
#line 223
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___2, ___nl__6, ___nl__4));
#line 223
c_rt_lib0clear(&___nl__6);
#line 223
c_rt_lib0clear(&___nl__4);
#line 223
c_rt_lib0clear(&___nl__5);
#line 223
c_rt_lib0clear(&___nl__3);
#line 223
c_rt_lib0clear(&___nl__0);
#line 223
c_rt_lib0clear(&___nl__1);
#line 223
return NULL;
}

ImmT module_checker_priv0check_return_type(ImmT ___nl__0,ImmT * ___ref___1) {
c_rt_lib0arg_val(___nl__0);
module_checker_priv0__const__init();
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
#line 227
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__0, ___get_global_const(37)));
#line 227
if(c_rt_lib0check_true_native(___nl__2)){ goto label_2;}
#line 229
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__0, ___get_global_const(72)));
#line 229
if(c_rt_lib0check_true_native(___nl__2)){ goto label_3;}
#line 229
c_rt_lib0move(&___nl__2,___get_global_const(74));
#line 229
c_rt_lib0move(&___nl__2, c_rt_lib0array_mk(2, ___nl__2, ___nl__0));
#line 229
nl_die_arg(___nl__2);
#line 227
label_2:
#line 228
c_rt_lib0move(&___nl__3, c_rt_lib0ov_mk_none(___get_global_const(37)));
#line 228
c_rt_lib0clear(&___nl__0);
#line 228
c_rt_lib0clear(&___nl__2);
#line 228
return ___nl__3;
#line 228
c_rt_lib0clear(&___nl__3);
#line 229
goto label_1;
#line 229
label_3:
#line 229
c_rt_lib0move(&___nl__3, c_rt_lib0priv_as(___nl__0, ___get_global_const(72)));
#line 230
c_rt_lib0copy(&___nl__4, ___nl__3);
#line 230
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__4, ___get_global_const(735)));
#line 230
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 230
if(c_rt_lib0check_true_native(___nl__4)){ goto label_5;}
#line 231
c_rt_lib0copy(&___nl__5, ___nl__3);
#line 231
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__5, ___get_global_const(735)));
#line 232
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(99)));
#line 232
c_rt_lib0move(&___nl__8,___get_global_const(621));
#line 232
c_rt_lib0move(&___nl__6, c_rt_lib0eq(___nl__6, ___nl__8));
#line 232
c_rt_lib0clear(&___nl__8);
#line 232
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__6));
#line 232
if(c_rt_lib0check_true_native(___nl__7)){ goto label_8;}
#line 232
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(76)));
#line 232
c_rt_lib0move(&___nl__8,___get_global_const(700));
#line 232
c_rt_lib0move(&___nl__6, c_rt_lib0eq(___nl__6, ___nl__8));
#line 232
c_rt_lib0clear(&___nl__8);
#line 232
label_8:
#line 232
c_rt_lib0clear(&___nl__7);
#line 232
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 232
if(c_rt_lib0check_true_native(___nl__6)){ goto label_7;}
#line 233
c_rt_lib0move(&___nl__7,___get_global_const(621));
#line 233
c_rt_lib0move(&___nl__8,___get_global_const(700));
#line 233
c_rt_lib0delete(module_checker_priv0add_fun_used(___nl__7, ___nl__8, ___ref___1));
#line 233
c_rt_lib0clear(&___nl__8);
#line 233
c_rt_lib0clear(&___nl__7);
#line 234
c_rt_lib0move(&___nl__7, c_rt_lib0ov_mk_none(___get_global_const(700)));
#line 234
c_rt_lib0clear(&___nl__0);
#line 234
c_rt_lib0clear(&___nl__2);
#line 234
c_rt_lib0clear(&___nl__3);
#line 234
c_rt_lib0clear(&___nl__4);
#line 234
c_rt_lib0clear(&___nl__5);
#line 234
c_rt_lib0clear(&___nl__6);
#line 234
return ___nl__7;
#line 234
c_rt_lib0clear(&___nl__7);
#line 235
goto label_7;
#line 235
label_7:
#line 235
c_rt_lib0clear(&___nl__6);
#line 235
c_rt_lib0clear(&___nl__5);
#line 236
goto label_5;
#line 236
label_5:
#line 236
c_rt_lib0clear(&___nl__4);
#line 236
c_rt_lib0clear(&___nl__3);
#line 237
goto label_1;
#line 237
label_1:
#line 237
c_rt_lib0clear(&___nl__2);
#line 238
c_rt_lib0delete(module_checker_priv0check_type(___nl__0, ___ref___1));
#line 239
c_rt_lib0move(&___nl__2, c_rt_lib0ov_mk_none(___get_global_const(641)));
#line 239
c_rt_lib0clear(&___nl__0);
#line 239
return ___nl__2;
#line 239
c_rt_lib0clear(&___nl__2);
#line 239
c_rt_lib0clear(&___nl__0);
#line 239
return NULL;
}

ImmT module_checker_priv0check_type(ImmT ___nl__0,ImmT * ___ref___1) {
c_rt_lib0arg_val(___nl__0);
module_checker_priv0__const__init();
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
#line 242
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__0, ___get_global_const(37)));
#line 242
if(c_rt_lib0check_true_native(___nl__2)){ goto label_2;}
#line 243
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__0, ___get_global_const(72)));
#line 243
if(c_rt_lib0check_true_native(___nl__2)){ goto label_3;}
#line 243
c_rt_lib0move(&___nl__2,___get_global_const(74));
#line 243
c_rt_lib0move(&___nl__2, c_rt_lib0array_mk(2, ___nl__2, ___nl__0));
#line 243
nl_die_arg(___nl__2);
#line 242
label_2:
#line 243
goto label_1;
#line 243
label_3:
#line 243
c_rt_lib0move(&___nl__3, c_rt_lib0priv_as(___nl__0, ___get_global_const(72)));
#line 244
c_rt_lib0copy(&___nl__4, ___nl__3);
#line 244
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__4, ___get_global_const(735)));
#line 244
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 244
if(c_rt_lib0check_true_native(___nl__4)){ goto label_5;}
#line 245
c_rt_lib0copy(&___nl__5, ___nl__3);
#line 245
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__5, ___get_global_const(735)));
#line 246
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(99)));
#line 246
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(76)));
#line 246
c_rt_lib0delete(module_checker_priv0add_fun_used(___nl__6, ___nl__7, ___ref___1));
#line 246
c_rt_lib0clear(&___nl__7);
#line 246
c_rt_lib0clear(&___nl__6);
#line 246
c_rt_lib0clear(&___nl__5);
#line 247
goto label_5;
#line 247
label_5:
#line 247
c_rt_lib0clear(&___nl__4);
#line 248
c_rt_lib0move(&___nl__4, ptd_parser0try_value_to_ptd(___nl__3));
#line 248
c_rt_lib0move(&___nl__5, c_rt_lib0priv_is(___nl__4, ___get_global_const(43)));
#line 248
if(c_rt_lib0check_true_native(___nl__5)){ goto label_7;}
#line 250
c_rt_lib0move(&___nl__5, c_rt_lib0priv_is(___nl__4, ___get_global_const(44)));
#line 250
if(c_rt_lib0check_true_native(___nl__5)){ goto label_8;}
#line 250
c_rt_lib0move(&___nl__5,___get_global_const(74));
#line 250
c_rt_lib0move(&___nl__5, c_rt_lib0array_mk(2, ___nl__5, ___nl__4));
#line 250
nl_die_arg(___nl__5);
#line 248
label_7:
#line 248
c_rt_lib0move(&___nl__6, c_rt_lib0priv_as(___nl__4, ___get_global_const(43)));
#line 249
c_rt_lib0move(&___nl__7,___get_global_const(17));
#line 249
c_rt_lib0move(&___nl__7, c_rt_lib0get_ref_hash(*___ref___1, ___nl__7));
#line 249
c_rt_lib0delete(module_checker_priv0add_error(&___nl__7, ___nl__6));
#line 249
c_rt_lib0move(&___nl__8,___get_global_const(17));
#line 249
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___1, ___nl__8, ___nl__7));
#line 249
c_rt_lib0clear(&___nl__8);
#line 249
c_rt_lib0clear(&___nl__7);
#line 249
c_rt_lib0clear(&___nl__6);
#line 250
goto label_6;
#line 250
label_8:
#line 250
c_rt_lib0move(&___nl__6, c_rt_lib0priv_as(___nl__4, ___get_global_const(44)));
#line 251
c_rt_lib0delete(module_checker_priv0check_types_imported(___nl__6, ___ref___1));
#line 251
c_rt_lib0clear(&___nl__6);
#line 252
goto label_6;
#line 252
label_6:
#line 252
c_rt_lib0clear(&___nl__4);
#line 252
c_rt_lib0clear(&___nl__5);
#line 252
c_rt_lib0clear(&___nl__3);
#line 253
goto label_1;
#line 253
label_1:
#line 253
c_rt_lib0clear(&___nl__2);
#line 253
c_rt_lib0clear(&___nl__0);
#line 253
return NULL;
}

ImmT module_checker_priv0add_var(ImmT ___nl__0,ImmT ___nl__1,ImmT ___nl__2,ImmT * ___ref___3) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
c_rt_lib0arg_val(___nl__2);
module_checker_priv0__const__init();
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
#line 257
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(*___ref___3, ___get_global_const(618)));
#line 257
c_rt_lib0move(&___nl__4, hash0has_key(___nl__5, ___nl__0));
#line 257
c_rt_lib0clear(&___nl__5);
#line 257
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 257
if(c_rt_lib0check_true_native(___nl__4)){ goto label_2;}
#line 258
c_rt_lib0move(&___nl__5,___get_global_const(17));
#line 258
c_rt_lib0move(&___nl__5, c_rt_lib0get_ref_hash(*___ref___3, ___nl__5));
#line 258
c_rt_lib0move(&___nl__6,___get_global_const(736));
#line 258
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__0));
#line 258
c_rt_lib0delete(module_checker_priv0add_error(&___nl__5, ___nl__6));
#line 258
c_rt_lib0clear(&___nl__6);
#line 258
c_rt_lib0move(&___nl__6,___get_global_const(17));
#line 258
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___3, ___nl__6, ___nl__5));
#line 258
c_rt_lib0clear(&___nl__6);
#line 258
c_rt_lib0clear(&___nl__5);
#line 259
goto label_2;
#line 259
label_2:
#line 259
c_rt_lib0clear(&___nl__4);
#line 260
c_rt_lib0move(&___nl__5, c_rt_lib0ov_mk_none(___get_global_const(37)));
#line 260
c_rt_lib0move(&___nl__6, c_rt_lib0get_false());
#line 260
c_rt_lib0move(&___nl__4, c_rt_lib0hash_mk(3, ___get_global_const(194), ___nl__5, ___get_global_const(203), ___nl__6, ___get_global_const(699), ___nl__2));
#line 260
c_rt_lib0clear(&___nl__5);
#line 260
c_rt_lib0clear(&___nl__6);
#line 261
c_rt_lib0copy(&___nl__5, ___nl__1);
#line 261
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 261
if(c_rt_lib0check_true_native(___nl__5)){ goto label_4;}
#line 261
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_none(___get_global_const(294)));
#line 261
c_rt_lib0copy(&___nl__7, ___nl__6);
#line 261
c_rt_lib0hash_set_value_dec(&___nl__4, ___get_global_const(194), ___nl__7);
#line 261
c_rt_lib0clear(&___nl__6);
#line 261
c_rt_lib0clear(&___nl__7);
#line 261
goto label_4;
#line 261
label_4:
#line 261
c_rt_lib0clear(&___nl__5);
#line 262
c_rt_lib0move(&___nl__5,___get_global_const(618));
#line 262
c_rt_lib0move(&___nl__5, c_rt_lib0get_ref_hash(*___ref___3, ___nl__5));
#line 262
c_rt_lib0delete(hash0set_value(&___nl__5, ___nl__0, ___nl__4));
#line 262
c_rt_lib0move(&___nl__6,___get_global_const(618));
#line 262
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___3, ___nl__6, ___nl__5));
#line 262
c_rt_lib0clear(&___nl__6);
#line 262
c_rt_lib0clear(&___nl__5);
#line 262
c_rt_lib0clear(&___nl__4);
#line 262
c_rt_lib0clear(&___nl__0);
#line 262
c_rt_lib0clear(&___nl__1);
#line 262
c_rt_lib0clear(&___nl__2);
#line 262
return NULL;
}

ImmT module_checker_priv0use_var(ImmT ___nl__0,ImmT ___nl__1,ImmT * ___ref___2) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
module_checker_priv0__const__init();
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
#line 265
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(*___ref___2, ___get_global_const(618)));
#line 265
c_rt_lib0move(&___nl__3, hash0has_key(___nl__4, ___nl__0));
#line 265
c_rt_lib0clear(&___nl__4);
#line 265
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 265
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 265
if(c_rt_lib0check_true_native(___nl__3)){ goto label_2;}
#line 266
c_rt_lib0move(&___nl__4,___get_global_const(17));
#line 266
c_rt_lib0move(&___nl__4, c_rt_lib0get_ref_hash(*___ref___2, ___nl__4));
#line 266
c_rt_lib0move(&___nl__5,___get_global_const(737));
#line 266
c_rt_lib0move(&___nl__5, c_rt_lib0concat_add(___nl__5, ___nl__0));
#line 266
c_rt_lib0delete(module_checker_priv0add_error(&___nl__4, ___nl__5));
#line 266
c_rt_lib0clear(&___nl__5);
#line 266
c_rt_lib0move(&___nl__5,___get_global_const(17));
#line 266
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___2, ___nl__5, ___nl__4));
#line 266
c_rt_lib0clear(&___nl__5);
#line 266
c_rt_lib0clear(&___nl__4);
#line 267
c_rt_lib0clear(&___nl__0);
#line 267
c_rt_lib0clear(&___nl__1);
#line 267
c_rt_lib0clear(&___nl__3);
#line 267
return NULL;
#line 268
goto label_2;
#line 268
label_2:
#line 268
c_rt_lib0clear(&___nl__3);
#line 269
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(*___ref___2, ___get_global_const(618)));
#line 269
c_rt_lib0move(&___nl__3, hash0get_value(___nl__4, ___nl__0));
#line 269
c_rt_lib0clear(&___nl__4);
#line 270
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__1, ___get_global_const(714)));
#line 270
if(c_rt_lib0check_true_native(___nl__4)){ goto label_4;}
#line 272
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__1, ___get_global_const(713)));
#line 272
if(c_rt_lib0check_true_native(___nl__4)){ goto label_5;}
#line 278
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__1, ___get_global_const(257)));
#line 278
if(c_rt_lib0check_true_native(___nl__4)){ goto label_6;}
#line 278
c_rt_lib0move(&___nl__4,___get_global_const(74));
#line 278
c_rt_lib0move(&___nl__4, c_rt_lib0array_mk(2, ___nl__4, ___nl__1));
#line 278
nl_die_arg(___nl__4);
#line 270
label_4:
#line 271
c_rt_lib0move(&___nl__5, c_rt_lib0get_true());
#line 271
c_rt_lib0copy(&___nl__6, ___nl__5);
#line 271
c_rt_lib0hash_set_value_dec(&___nl__3, ___get_global_const(203), ___nl__6);
#line 271
c_rt_lib0clear(&___nl__5);
#line 271
c_rt_lib0clear(&___nl__6);
#line 272
goto label_3;
#line 272
label_5:
#line 273
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(194)));
#line 273
c_rt_lib0move(&___nl__5, c_rt_lib0priv_is(___nl__5, ___get_global_const(294)));
#line 273
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 273
if(c_rt_lib0check_true_native(___nl__5)){ goto label_8;}
#line 274
c_rt_lib0move(&___nl__6,___get_global_const(17));
#line 274
c_rt_lib0move(&___nl__6, c_rt_lib0get_ref_hash(*___ref___2, ___nl__6));
#line 274
c_rt_lib0move(&___nl__7,___get_global_const(738));
#line 274
c_rt_lib0move(&___nl__7, c_rt_lib0concat_add(___nl__7, ___nl__0));
#line 274
c_rt_lib0delete(module_checker_priv0add_error(&___nl__6, ___nl__7));
#line 274
c_rt_lib0clear(&___nl__7);
#line 274
c_rt_lib0move(&___nl__7,___get_global_const(17));
#line 274
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___2, ___nl__7, ___nl__6));
#line 274
c_rt_lib0clear(&___nl__7);
#line 274
c_rt_lib0clear(&___nl__6);
#line 275
c_rt_lib0clear(&___nl__0);
#line 275
c_rt_lib0clear(&___nl__1);
#line 275
c_rt_lib0clear(&___nl__3);
#line 275
c_rt_lib0clear(&___nl__4);
#line 275
c_rt_lib0clear(&___nl__5);
#line 275
return NULL;
#line 276
goto label_8;
#line 276
label_8:
#line 276
c_rt_lib0clear(&___nl__5);
#line 277
c_rt_lib0move(&___nl__5, c_rt_lib0ov_mk_none(___get_global_const(641)));
#line 277
c_rt_lib0copy(&___nl__6, ___nl__5);
#line 277
c_rt_lib0hash_set_value_dec(&___nl__3, ___get_global_const(194), ___nl__6);
#line 277
c_rt_lib0clear(&___nl__5);
#line 277
c_rt_lib0clear(&___nl__6);
#line 278
goto label_3;
#line 278
label_6:
#line 279
c_rt_lib0move(&___nl__5, c_rt_lib0get_true());
#line 279
c_rt_lib0copy(&___nl__6, ___nl__5);
#line 279
c_rt_lib0hash_set_value_dec(&___nl__3, ___get_global_const(203), ___nl__6);
#line 279
c_rt_lib0clear(&___nl__5);
#line 279
c_rt_lib0clear(&___nl__6);
#line 280
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(194)));
#line 280
c_rt_lib0move(&___nl__5, c_rt_lib0priv_is(___nl__5, ___get_global_const(294)));
#line 280
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 280
if(c_rt_lib0check_true_native(___nl__5)){ goto label_10;}
#line 281
c_rt_lib0move(&___nl__6,___get_global_const(17));
#line 281
c_rt_lib0move(&___nl__6, c_rt_lib0get_ref_hash(*___ref___2, ___nl__6));
#line 281
c_rt_lib0move(&___nl__7,___get_global_const(738));
#line 281
c_rt_lib0move(&___nl__7, c_rt_lib0concat_add(___nl__7, ___nl__0));
#line 281
c_rt_lib0delete(module_checker_priv0add_error(&___nl__6, ___nl__7));
#line 281
c_rt_lib0clear(&___nl__7);
#line 281
c_rt_lib0move(&___nl__7,___get_global_const(17));
#line 281
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___2, ___nl__7, ___nl__6));
#line 281
c_rt_lib0clear(&___nl__7);
#line 281
c_rt_lib0clear(&___nl__6);
#line 282
c_rt_lib0clear(&___nl__0);
#line 282
c_rt_lib0clear(&___nl__1);
#line 282
c_rt_lib0clear(&___nl__3);
#line 282
c_rt_lib0clear(&___nl__4);
#line 282
c_rt_lib0clear(&___nl__5);
#line 282
return NULL;
#line 283
goto label_10;
#line 283
label_10:
#line 283
c_rt_lib0clear(&___nl__5);
#line 284
c_rt_lib0move(&___nl__5, c_rt_lib0ov_mk_none(___get_global_const(641)));
#line 284
c_rt_lib0copy(&___nl__6, ___nl__5);
#line 284
c_rt_lib0hash_set_value_dec(&___nl__3, ___get_global_const(194), ___nl__6);
#line 284
c_rt_lib0clear(&___nl__5);
#line 284
c_rt_lib0clear(&___nl__6);
#line 285
goto label_3;
#line 285
label_3:
#line 285
c_rt_lib0clear(&___nl__4);
#line 286
c_rt_lib0move(&___nl__4,___get_global_const(618));
#line 286
c_rt_lib0move(&___nl__4, c_rt_lib0get_ref_hash(*___ref___2, ___nl__4));
#line 286
c_rt_lib0delete(hash0set_value(&___nl__4, ___nl__0, ___nl__3));
#line 286
c_rt_lib0move(&___nl__5,___get_global_const(618));
#line 286
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___2, ___nl__5, ___nl__4));
#line 286
c_rt_lib0clear(&___nl__5);
#line 286
c_rt_lib0clear(&___nl__4);
#line 286
c_rt_lib0clear(&___nl__3);
#line 286
c_rt_lib0clear(&___nl__0);
#line 286
c_rt_lib0clear(&___nl__1);
#line 286
return NULL;
}

ImmT module_checker_priv0add_var_dec(ImmT ___nl__0,ImmT ___nl__1,ImmT ___nl__2,ImmT * ___ref___3) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
c_rt_lib0arg_val(___nl__2);
module_checker_priv0__const__init();
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
#line 289
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(76)));
#line 289
c_rt_lib0delete(module_checker_priv0add_var(___nl__4, ___nl__1, ___nl__2, ___ref___3));
#line 289
c_rt_lib0clear(&___nl__4);
#line 290
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(72)));
#line 290
c_rt_lib0delete(module_checker_priv0check_type(___nl__4, ___ref___3));
#line 290
c_rt_lib0clear(&___nl__4);
#line 291
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(641)));
#line 291
c_rt_lib0move(&___nl__5, c_rt_lib0priv_is(___nl__4, ___get_global_const(641)));
#line 291
if(c_rt_lib0check_true_native(___nl__5)){ goto label_2;}
#line 295
c_rt_lib0move(&___nl__5, c_rt_lib0priv_is(___nl__4, ___get_global_const(37)));
#line 295
if(c_rt_lib0check_true_native(___nl__5)){ goto label_3;}
#line 295
c_rt_lib0move(&___nl__5,___get_global_const(74));
#line 295
c_rt_lib0move(&___nl__5, c_rt_lib0array_mk(2, ___nl__5, ___nl__4));
#line 295
nl_die_arg(___nl__5);
#line 291
label_2:
#line 291
c_rt_lib0move(&___nl__6, c_rt_lib0priv_as(___nl__4, ___get_global_const(641)));
#line 292
c_rt_lib0delete(module_checker_priv0check_val(___nl__6, ___ref___3));
#line 293
c_rt_lib0copy(&___nl__7, ___nl__1);
#line 293
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 293
if(c_rt_lib0check_true_native(___nl__7)){ goto label_5;}
#line 293
c_rt_lib0move(&___nl__8, c_rt_lib0array_mk(0));
#line 293
nl_die_arg(___nl__8);
#line 293
goto label_5;
#line 293
label_5:
#line 293
c_rt_lib0clear(&___nl__7);
#line 293
c_rt_lib0clear(&___nl__8);
#line 294
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(76)));
#line 294
c_rt_lib0move(&___nl__8, c_rt_lib0ov_mk_none(___get_global_const(713)));
#line 294
c_rt_lib0delete(module_checker_priv0use_var(___nl__7, ___nl__8, ___ref___3));
#line 294
c_rt_lib0clear(&___nl__8);
#line 294
c_rt_lib0clear(&___nl__7);
#line 294
c_rt_lib0clear(&___nl__6);
#line 295
goto label_1;
#line 295
label_3:
#line 296
goto label_1;
#line 296
label_1:
#line 296
c_rt_lib0clear(&___nl__4);
#line 296
c_rt_lib0clear(&___nl__5);
#line 296
c_rt_lib0clear(&___nl__0);
#line 296
c_rt_lib0clear(&___nl__1);
#line 296
c_rt_lib0clear(&___nl__2);
#line 296
return NULL;
}

ImmT module_checker_priv0check_cmd(ImmT ___nl__0,ImmT * ___ref___1) {
c_rt_lib0arg_val(___nl__0);
module_checker_priv0__const__init();
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
#line 300
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(213)));
#line 300
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(396)));
#line 300
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(98)));
#line 300
c_rt_lib0move(&___nl__3,___get_global_const(17));
#line 300
c_rt_lib0move(&___nl__3, c_rt_lib0get_ref_hash(*___ref___1, ___nl__3));
#line 300
c_rt_lib0copy(&___nl__4, ___nl__2);
#line 300
c_rt_lib0hash_set_value_dec(&___nl__3, ___get_global_const(710), ___nl__4);
#line 300
c_rt_lib0move(&___nl__5,___get_global_const(17));
#line 300
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___1, ___nl__5, ___nl__3));
#line 300
c_rt_lib0clear(&___nl__5);
#line 300
c_rt_lib0clear(&___nl__2);
#line 300
c_rt_lib0clear(&___nl__3);
#line 300
c_rt_lib0clear(&___nl__4);
#line 301
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(*___ref___1, ___get_global_const(210)));
#line 301
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(704)));
#line 301
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 301
if(c_rt_lib0check_true_native(___nl__2)){ goto label_2;}
#line 302
c_rt_lib0move(&___nl__3,___get_global_const(17));
#line 302
c_rt_lib0move(&___nl__3, c_rt_lib0get_ref_hash(*___ref___1, ___nl__3));
#line 302
c_rt_lib0move(&___nl__4,___get_global_const(739));
#line 302
c_rt_lib0delete(module_checker_priv0add_warning(&___nl__3, ___nl__4));
#line 302
c_rt_lib0clear(&___nl__4);
#line 302
c_rt_lib0move(&___nl__4,___get_global_const(17));
#line 302
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___1, ___nl__4, ___nl__3));
#line 302
c_rt_lib0clear(&___nl__4);
#line 302
c_rt_lib0clear(&___nl__3);
#line 303
c_rt_lib0move(&___nl__3, c_rt_lib0get_false());
#line 303
c_rt_lib0move(&___nl__4,___get_global_const(210));
#line 303
c_rt_lib0move(&___nl__4, c_rt_lib0get_ref_hash(*___ref___1, ___nl__4));
#line 303
c_rt_lib0copy(&___nl__5, ___nl__3);
#line 303
c_rt_lib0hash_set_value_dec(&___nl__4, ___get_global_const(704), ___nl__5);
#line 303
c_rt_lib0move(&___nl__6,___get_global_const(210));
#line 303
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___1, ___nl__6, ___nl__4));
#line 303
c_rt_lib0clear(&___nl__6);
#line 303
c_rt_lib0clear(&___nl__3);
#line 303
c_rt_lib0clear(&___nl__4);
#line 303
c_rt_lib0clear(&___nl__5);
#line 304
goto label_2;
#line 304
label_2:
#line 304
c_rt_lib0clear(&___nl__2);
#line 305
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(209)));
#line 305
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(740)));
#line 305
if(c_rt_lib0check_true_native(___nl__3)){ goto label_4;}
#line 319
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(741)));
#line 319
if(c_rt_lib0check_true_native(___nl__3)){ goto label_5;}
#line 332
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(742)));
#line 332
if(c_rt_lib0check_true_native(___nl__3)){ goto label_6;}
#line 340
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(743)));
#line 340
if(c_rt_lib0check_true_native(___nl__3)){ goto label_7;}
#line 349
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(117)));
#line 349
if(c_rt_lib0check_true_native(___nl__3)){ goto label_8;}
#line 354
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(744)));
#line 354
if(c_rt_lib0check_true_native(___nl__3)){ goto label_9;}
#line 362
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(745)));
#line 362
if(c_rt_lib0check_true_native(___nl__3)){ goto label_10;}
#line 369
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(746)));
#line 369
if(c_rt_lib0check_true_native(___nl__3)){ goto label_11;}
#line 373
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(747)));
#line 373
if(c_rt_lib0check_true_native(___nl__3)){ goto label_12;}
#line 377
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(748)));
#line 377
if(c_rt_lib0check_true_native(___nl__3)){ goto label_13;}
#line 381
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(749)));
#line 381
if(c_rt_lib0check_true_native(___nl__3)){ goto label_14;}
#line 385
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(750)));
#line 385
if(c_rt_lib0check_true_native(___nl__3)){ goto label_15;}
#line 400
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(641)));
#line 400
if(c_rt_lib0check_true_native(___nl__3)){ goto label_16;}
#line 402
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(210)));
#line 402
if(c_rt_lib0check_true_native(___nl__3)){ goto label_17;}
#line 418
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(751)));
#line 418
if(c_rt_lib0check_true_native(___nl__3)){ goto label_18;}
#line 424
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(229)));
#line 424
if(c_rt_lib0check_true_native(___nl__3)){ goto label_19;}
#line 429
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(752)));
#line 429
if(c_rt_lib0check_true_native(___nl__3)){ goto label_20;}
#line 431
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(753)));
#line 431
if(c_rt_lib0check_true_native(___nl__3)){ goto label_21;}
#line 439
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(78)));
#line 439
if(c_rt_lib0check_true_native(___nl__3)){ goto label_22;}
#line 447
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(754)));
#line 447
if(c_rt_lib0check_true_native(___nl__3)){ goto label_23;}
#line 447
c_rt_lib0move(&___nl__3,___get_global_const(74));
#line 447
c_rt_lib0move(&___nl__3, c_rt_lib0array_mk(2, ___nl__3, ___nl__2));
#line 447
nl_die_arg(___nl__3);
#line 305
label_4:
#line 305
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(740)));
#line 306
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(755)));
#line 306
c_rt_lib0delete(module_checker_priv0check_val(___nl__5, ___ref___1));
#line 306
c_rt_lib0clear(&___nl__5);
#line 307
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(740)));
#line 307
c_rt_lib0delete(module_checker_priv0check_cmd(___nl__5, ___ref___1));
#line 307
c_rt_lib0clear(&___nl__5);
#line 308
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(*___ref___1, ___get_global_const(210)));
#line 308
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(704)));
#line 309
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(756)));
#line 309
c_rt_lib0move(&___nl__8,___get_global_const(1));
#line 309
c_rt_lib0move(&___nl__9,___get_global_const(2));
#line 309
c_rt_lib0move(&___nl__10, c_rt_lib0array_len(___nl__6));
#line 309
label_26:
#line 309
c_rt_lib0move(&___nl__11, c_rt_lib0ge(___nl__8, ___nl__10));
#line 309
if(c_rt_lib0check_true_native(___nl__11)){ goto label_24;}
#line 309
c_rt_lib0move(&___nl__7, c_rt_lib0array_get(___nl__6, ___nl__8));
#line 310
c_rt_lib0move(&___nl__12, c_rt_lib0get_false());
#line 310
c_rt_lib0move(&___nl__13,___get_global_const(210));
#line 310
c_rt_lib0move(&___nl__13, c_rt_lib0get_ref_hash(*___ref___1, ___nl__13));
#line 310
c_rt_lib0copy(&___nl__14, ___nl__12);
#line 310
c_rt_lib0hash_set_value_dec(&___nl__13, ___get_global_const(704), ___nl__14);
#line 310
c_rt_lib0move(&___nl__15,___get_global_const(210));
#line 310
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___1, ___nl__15, ___nl__13));
#line 310
c_rt_lib0clear(&___nl__15);
#line 310
c_rt_lib0clear(&___nl__12);
#line 310
c_rt_lib0clear(&___nl__13);
#line 310
c_rt_lib0clear(&___nl__14);
#line 311
c_rt_lib0move(&___nl__12, c_rt_lib0hash_get_value_dec(___nl__7, ___get_global_const(755)));
#line 311
c_rt_lib0delete(module_checker_priv0check_val(___nl__12, ___ref___1));
#line 311
c_rt_lib0clear(&___nl__12);
#line 312
c_rt_lib0move(&___nl__12, c_rt_lib0hash_get_value_dec(___nl__7, ___get_global_const(209)));
#line 312
c_rt_lib0delete(module_checker_priv0check_cmd(___nl__12, ___ref___1));
#line 312
c_rt_lib0clear(&___nl__12);
#line 313
c_rt_lib0move(&___nl__12, c_rt_lib0hash_get_value_dec(*___ref___1, ___get_global_const(210)));
#line 313
c_rt_lib0move(&___nl__12, c_rt_lib0hash_get_value_dec(___nl__12, ___get_global_const(704)));
#line 313
c_rt_lib0move(&___nl__12, c_rt_lib0not(___nl__12));
#line 313
c_rt_lib0move(&___nl__12, c_rt_lib0not(___nl__12));
#line 313
if(c_rt_lib0check_true_native(___nl__12)){ goto label_28;}
#line 313
c_rt_lib0move(&___nl__13, c_rt_lib0get_false());
#line 313
c_rt_lib0copy(&___nl__5, ___nl__13);
#line 313
c_rt_lib0clear(&___nl__13);
#line 313
goto label_28;
#line 313
label_28:
#line 313
c_rt_lib0clear(&___nl__12);
#line 314
c_rt_lib0move(&___nl__8, c_rt_lib0add_mod(___nl__8, ___nl__9));
#line 314
goto label_26;
#line 314
label_24:
#line 314
c_rt_lib0clear(&___nl__6);
#line 314
c_rt_lib0clear(&___nl__7);
#line 314
c_rt_lib0clear(&___nl__8);
#line 314
c_rt_lib0clear(&___nl__9);
#line 314
c_rt_lib0clear(&___nl__10);
#line 314
c_rt_lib0clear(&___nl__11);
#line 315
c_rt_lib0move(&___nl__6, c_rt_lib0get_false());
#line 315
c_rt_lib0move(&___nl__7,___get_global_const(210));
#line 315
c_rt_lib0move(&___nl__7, c_rt_lib0get_ref_hash(*___ref___1, ___nl__7));
#line 315
c_rt_lib0copy(&___nl__8, ___nl__6);
#line 315
c_rt_lib0hash_set_value_dec(&___nl__7, ___get_global_const(704), ___nl__8);
#line 315
c_rt_lib0move(&___nl__9,___get_global_const(210));
#line 315
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___1, ___nl__9, ___nl__7));
#line 315
c_rt_lib0clear(&___nl__9);
#line 315
c_rt_lib0clear(&___nl__6);
#line 315
c_rt_lib0clear(&___nl__7);
#line 315
c_rt_lib0clear(&___nl__8);
#line 316
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(757)));
#line 316
c_rt_lib0delete(module_checker_priv0check_cmd(___nl__6, ___ref___1));
#line 316
c_rt_lib0clear(&___nl__6);
#line 317
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(*___ref___1, ___get_global_const(210)));
#line 317
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__6, ___get_global_const(704)));
#line 317
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 317
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 317
if(c_rt_lib0check_true_native(___nl__6)){ goto label_30;}
#line 317
c_rt_lib0move(&___nl__7, c_rt_lib0get_false());
#line 317
c_rt_lib0copy(&___nl__5, ___nl__7);
#line 317
c_rt_lib0clear(&___nl__7);
#line 317
goto label_30;
#line 317
label_30:
#line 317
c_rt_lib0clear(&___nl__6);
#line 318
c_rt_lib0move(&___nl__6,___get_global_const(210));
#line 318
c_rt_lib0move(&___nl__6, c_rt_lib0get_ref_hash(*___ref___1, ___nl__6));
#line 318
c_rt_lib0copy(&___nl__7, ___nl__5);
#line 318
c_rt_lib0hash_set_value_dec(&___nl__6, ___get_global_const(704), ___nl__7);
#line 318
c_rt_lib0move(&___nl__8,___get_global_const(210));
#line 318
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___1, ___nl__8, ___nl__6));
#line 318
c_rt_lib0clear(&___nl__8);
#line 318
c_rt_lib0clear(&___nl__6);
#line 318
c_rt_lib0clear(&___nl__7);
#line 318
c_rt_lib0clear(&___nl__5);
#line 318
c_rt_lib0clear(&___nl__4);
#line 319
goto label_3;
#line 319
label_5:
#line 319
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(741)));
#line 320
c_rt_lib0move(&___nl__5, module_checker_priv0save_block(___ref___1));
#line 321
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(758)));
#line 321
c_rt_lib0move(&___nl__7, c_rt_lib0priv_is(___nl__6, ___get_global_const(641)));
#line 321
if(c_rt_lib0check_true_native(___nl__7)){ goto label_32;}
#line 323
c_rt_lib0move(&___nl__7, c_rt_lib0priv_is(___nl__6, ___get_global_const(752)));
#line 323
if(c_rt_lib0check_true_native(___nl__7)){ goto label_33;}
#line 323
c_rt_lib0move(&___nl__7,___get_global_const(74));
#line 323
c_rt_lib0move(&___nl__7, c_rt_lib0array_mk(2, ___nl__7, ___nl__6));
#line 323
nl_die_arg(___nl__7);
#line 321
label_32:
#line 321
c_rt_lib0move(&___nl__8, c_rt_lib0priv_as(___nl__6, ___get_global_const(641)));
#line 322
c_rt_lib0delete(module_checker_priv0check_val(___nl__8, ___ref___1));
#line 322
c_rt_lib0clear(&___nl__8);
#line 323
goto label_31;
#line 323
label_33:
#line 323
c_rt_lib0move(&___nl__8, c_rt_lib0priv_as(___nl__6, ___get_global_const(752)));
#line 324
c_rt_lib0move(&___nl__9, c_rt_lib0get_false());
#line 324
c_rt_lib0move(&___nl__10, c_rt_lib0get_false());
#line 324
c_rt_lib0delete(module_checker_priv0add_var_dec(___nl__8, ___nl__9, ___nl__10, ___ref___1));
#line 324
c_rt_lib0clear(&___nl__10);
#line 324
c_rt_lib0clear(&___nl__9);
#line 324
c_rt_lib0clear(&___nl__8);
#line 325
goto label_31;
#line 325
label_31:
#line 325
c_rt_lib0clear(&___nl__6);
#line 325
c_rt_lib0clear(&___nl__7);
#line 326
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(755)));
#line 326
c_rt_lib0delete(module_checker_priv0check_val(___nl__6, ___ref___1));
#line 326
c_rt_lib0clear(&___nl__6);
#line 327
c_rt_lib0move(&___nl__6, c_rt_lib0get_true());
#line 327
c_rt_lib0copy(&___nl__7, ___nl__6);
#line 327
c_rt_lib0hash_set_value_dec(___ref___1, ___get_global_const(707), ___nl__7);
#line 327
c_rt_lib0clear(&___nl__6);
#line 327
c_rt_lib0clear(&___nl__7);
#line 328
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(209)));
#line 328
c_rt_lib0delete(module_checker_priv0check_cmd(___nl__6, ___ref___1));
#line 328
c_rt_lib0clear(&___nl__6);
#line 329
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(759)));
#line 329
c_rt_lib0delete(module_checker_priv0check_val(___nl__6, ___ref___1));
#line 329
c_rt_lib0clear(&___nl__6);
#line 330
c_rt_lib0delete(module_checker_priv0load_block(___ref___1, ___nl__5));
#line 331
c_rt_lib0move(&___nl__6, c_rt_lib0get_false());
#line 331
c_rt_lib0move(&___nl__7,___get_global_const(210));
#line 331
c_rt_lib0move(&___nl__7, c_rt_lib0get_ref_hash(*___ref___1, ___nl__7));
#line 331
c_rt_lib0copy(&___nl__8, ___nl__6);
#line 331
c_rt_lib0hash_set_value_dec(&___nl__7, ___get_global_const(704), ___nl__8);
#line 331
c_rt_lib0move(&___nl__9,___get_global_const(210));
#line 331
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___1, ___nl__9, ___nl__7));
#line 331
c_rt_lib0clear(&___nl__9);
#line 331
c_rt_lib0clear(&___nl__6);
#line 331
c_rt_lib0clear(&___nl__7);
#line 331
c_rt_lib0clear(&___nl__8);
#line 331
c_rt_lib0clear(&___nl__5);
#line 331
c_rt_lib0clear(&___nl__4);
#line 332
goto label_3;
#line 332
label_6:
#line 332
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(742)));
#line 333
c_rt_lib0move(&___nl__5, module_checker_priv0save_block(___ref___1));
#line 334
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(3)));
#line 334
c_rt_lib0delete(module_checker_priv0check_val(___nl__6, ___ref___1));
#line 334
c_rt_lib0clear(&___nl__6);
#line 335
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(759)));
#line 335
c_rt_lib0move(&___nl__7, c_rt_lib0get_true());
#line 335
c_rt_lib0move(&___nl__8, c_rt_lib0get_true());
#line 335
c_rt_lib0delete(module_checker_priv0add_var_dec(___nl__6, ___nl__7, ___nl__8, ___ref___1));
#line 335
c_rt_lib0clear(&___nl__8);
#line 335
c_rt_lib0clear(&___nl__7);
#line 335
c_rt_lib0clear(&___nl__6);
#line 336
c_rt_lib0move(&___nl__6, c_rt_lib0get_true());
#line 336
c_rt_lib0copy(&___nl__7, ___nl__6);
#line 336
c_rt_lib0hash_set_value_dec(___ref___1, ___get_global_const(707), ___nl__7);
#line 336
c_rt_lib0clear(&___nl__6);
#line 336
c_rt_lib0clear(&___nl__7);
#line 337
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(209)));
#line 337
c_rt_lib0delete(module_checker_priv0check_cmd(___nl__6, ___ref___1));
#line 337
c_rt_lib0clear(&___nl__6);
#line 338
c_rt_lib0delete(module_checker_priv0load_block(___ref___1, ___nl__5));
#line 339
c_rt_lib0move(&___nl__6, c_rt_lib0get_false());
#line 339
c_rt_lib0move(&___nl__7,___get_global_const(210));
#line 339
c_rt_lib0move(&___nl__7, c_rt_lib0get_ref_hash(*___ref___1, ___nl__7));
#line 339
c_rt_lib0copy(&___nl__8, ___nl__6);
#line 339
c_rt_lib0hash_set_value_dec(&___nl__7, ___get_global_const(704), ___nl__8);
#line 339
c_rt_lib0move(&___nl__9,___get_global_const(210));
#line 339
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___1, ___nl__9, ___nl__7));
#line 339
c_rt_lib0clear(&___nl__9);
#line 339
c_rt_lib0clear(&___nl__6);
#line 339
c_rt_lib0clear(&___nl__7);
#line 339
c_rt_lib0clear(&___nl__8);
#line 339
c_rt_lib0clear(&___nl__5);
#line 339
c_rt_lib0clear(&___nl__4);
#line 340
goto label_3;
#line 340
label_7:
#line 340
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(743)));
#line 341
c_rt_lib0move(&___nl__5, module_checker_priv0save_block(___ref___1));
#line 342
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(278)));
#line 342
c_rt_lib0delete(module_checker_priv0check_val(___nl__6, ___ref___1));
#line 342
c_rt_lib0clear(&___nl__6);
#line 343
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(234)));
#line 343
c_rt_lib0move(&___nl__7, c_rt_lib0get_true());
#line 343
c_rt_lib0move(&___nl__8, c_rt_lib0get_true());
#line 343
c_rt_lib0delete(module_checker_priv0add_var_dec(___nl__6, ___nl__7, ___nl__8, ___ref___1));
#line 343
c_rt_lib0clear(&___nl__8);
#line 343
c_rt_lib0clear(&___nl__7);
#line 343
c_rt_lib0clear(&___nl__6);
#line 344
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(279)));
#line 344
c_rt_lib0move(&___nl__7, c_rt_lib0get_true());
#line 344
c_rt_lib0move(&___nl__8, c_rt_lib0get_true());
#line 344
c_rt_lib0delete(module_checker_priv0add_var_dec(___nl__6, ___nl__7, ___nl__8, ___ref___1));
#line 344
c_rt_lib0clear(&___nl__8);
#line 344
c_rt_lib0clear(&___nl__7);
#line 344
c_rt_lib0clear(&___nl__6);
#line 345
c_rt_lib0move(&___nl__6, c_rt_lib0get_true());
#line 345
c_rt_lib0copy(&___nl__7, ___nl__6);
#line 345
c_rt_lib0hash_set_value_dec(___ref___1, ___get_global_const(707), ___nl__7);
#line 345
c_rt_lib0clear(&___nl__6);
#line 345
c_rt_lib0clear(&___nl__7);
#line 346
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(209)));
#line 346
c_rt_lib0delete(module_checker_priv0check_cmd(___nl__6, ___ref___1));
#line 346
c_rt_lib0clear(&___nl__6);
#line 347
c_rt_lib0delete(module_checker_priv0load_block(___ref___1, ___nl__5));
#line 348
c_rt_lib0move(&___nl__6, c_rt_lib0get_false());
#line 348
c_rt_lib0move(&___nl__7,___get_global_const(210));
#line 348
c_rt_lib0move(&___nl__7, c_rt_lib0get_ref_hash(*___ref___1, ___nl__7));
#line 348
c_rt_lib0copy(&___nl__8, ___nl__6);
#line 348
c_rt_lib0hash_set_value_dec(&___nl__7, ___get_global_const(704), ___nl__8);
#line 348
c_rt_lib0move(&___nl__9,___get_global_const(210));
#line 348
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___1, ___nl__9, ___nl__7));
#line 348
c_rt_lib0clear(&___nl__9);
#line 348
c_rt_lib0clear(&___nl__6);
#line 348
c_rt_lib0clear(&___nl__7);
#line 348
c_rt_lib0clear(&___nl__8);
#line 348
c_rt_lib0clear(&___nl__5);
#line 348
c_rt_lib0clear(&___nl__4);
#line 349
goto label_3;
#line 349
label_8:
#line 349
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(117)));
#line 350
c_rt_lib0move(&___nl__5, module_checker_priv0save_block(___ref___1));
#line 351
c_rt_lib0move(&___nl__6, c_rt_lib0get_true());
#line 351
c_rt_lib0copy(&___nl__7, ___nl__6);
#line 351
c_rt_lib0hash_set_value_dec(___ref___1, ___get_global_const(707), ___nl__7);
#line 351
c_rt_lib0clear(&___nl__6);
#line 351
c_rt_lib0clear(&___nl__7);
#line 352
c_rt_lib0delete(module_checker_priv0check_cmd(___nl__4, ___ref___1));
#line 353
c_rt_lib0delete(module_checker_priv0load_block(___ref___1, ___nl__5));
#line 353
c_rt_lib0clear(&___nl__5);
#line 353
c_rt_lib0clear(&___nl__4);
#line 354
goto label_3;
#line 354
label_9:
#line 354
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(744)));
#line 355
c_rt_lib0move(&___nl__5, module_checker_priv0save_block(___ref___1));
#line 356
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(760)));
#line 356
c_rt_lib0delete(module_checker_priv0check_val(___nl__6, ___ref___1));
#line 356
c_rt_lib0clear(&___nl__6);
#line 357
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(759)));
#line 357
c_rt_lib0move(&___nl__7, c_rt_lib0get_true());
#line 357
c_rt_lib0move(&___nl__8, c_rt_lib0get_true());
#line 357
c_rt_lib0delete(module_checker_priv0add_var_dec(___nl__6, ___nl__7, ___nl__8, ___ref___1));
#line 357
c_rt_lib0clear(&___nl__8);
#line 357
c_rt_lib0clear(&___nl__7);
#line 357
c_rt_lib0clear(&___nl__6);
#line 358
c_rt_lib0move(&___nl__6, c_rt_lib0get_true());
#line 358
c_rt_lib0copy(&___nl__7, ___nl__6);
#line 358
c_rt_lib0hash_set_value_dec(___ref___1, ___get_global_const(707), ___nl__7);
#line 358
c_rt_lib0clear(&___nl__6);
#line 358
c_rt_lib0clear(&___nl__7);
#line 359
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(209)));
#line 359
c_rt_lib0delete(module_checker_priv0check_cmd(___nl__6, ___ref___1));
#line 359
c_rt_lib0clear(&___nl__6);
#line 360
c_rt_lib0delete(module_checker_priv0load_block(___ref___1, ___nl__5));
#line 361
c_rt_lib0move(&___nl__6, c_rt_lib0get_false());
#line 361
c_rt_lib0move(&___nl__7,___get_global_const(210));
#line 361
c_rt_lib0move(&___nl__7, c_rt_lib0get_ref_hash(*___ref___1, ___nl__7));
#line 361
c_rt_lib0copy(&___nl__8, ___nl__6);
#line 361
c_rt_lib0hash_set_value_dec(&___nl__7, ___get_global_const(704), ___nl__8);
#line 361
c_rt_lib0move(&___nl__9,___get_global_const(210));
#line 361
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___1, ___nl__9, ___nl__7));
#line 361
c_rt_lib0clear(&___nl__9);
#line 361
c_rt_lib0clear(&___nl__6);
#line 361
c_rt_lib0clear(&___nl__7);
#line 361
c_rt_lib0clear(&___nl__8);
#line 361
c_rt_lib0clear(&___nl__5);
#line 361
c_rt_lib0clear(&___nl__4);
#line 362
goto label_3;
#line 362
label_10:
#line 362
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(745)));
#line 363
c_rt_lib0move(&___nl__5, module_checker_priv0save_block(___ref___1));
#line 364
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(755)));
#line 364
c_rt_lib0delete(module_checker_priv0check_val(___nl__6, ___ref___1));
#line 364
c_rt_lib0clear(&___nl__6);
#line 365
c_rt_lib0move(&___nl__6, c_rt_lib0get_true());
#line 365
c_rt_lib0copy(&___nl__7, ___nl__6);
#line 365
c_rt_lib0hash_set_value_dec(___ref___1, ___get_global_const(707), ___nl__7);
#line 365
c_rt_lib0clear(&___nl__6);
#line 365
c_rt_lib0clear(&___nl__7);
#line 366
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(209)));
#line 366
c_rt_lib0delete(module_checker_priv0check_cmd(___nl__6, ___ref___1));
#line 366
c_rt_lib0clear(&___nl__6);
#line 367
c_rt_lib0delete(module_checker_priv0load_block(___ref___1, ___nl__5));
#line 368
c_rt_lib0move(&___nl__6, c_rt_lib0get_false());
#line 368
c_rt_lib0move(&___nl__7,___get_global_const(210));
#line 368
c_rt_lib0move(&___nl__7, c_rt_lib0get_ref_hash(*___ref___1, ___nl__7));
#line 368
c_rt_lib0copy(&___nl__8, ___nl__6);
#line 368
c_rt_lib0hash_set_value_dec(&___nl__7, ___get_global_const(704), ___nl__8);
#line 368
c_rt_lib0move(&___nl__9,___get_global_const(210));
#line 368
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___1, ___nl__9, ___nl__7));
#line 368
c_rt_lib0clear(&___nl__9);
#line 368
c_rt_lib0clear(&___nl__6);
#line 368
c_rt_lib0clear(&___nl__7);
#line 368
c_rt_lib0clear(&___nl__8);
#line 368
c_rt_lib0clear(&___nl__5);
#line 368
c_rt_lib0clear(&___nl__4);
#line 369
goto label_3;
#line 369
label_11:
#line 369
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(746)));
#line 370
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(755)));
#line 370
c_rt_lib0delete(module_checker_priv0check_val(___nl__5, ___ref___1));
#line 370
c_rt_lib0clear(&___nl__5);
#line 371
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(209)));
#line 371
c_rt_lib0delete(module_checker_priv0check_cmd(___nl__5, ___ref___1));
#line 371
c_rt_lib0clear(&___nl__5);
#line 372
c_rt_lib0move(&___nl__5, c_rt_lib0get_false());
#line 372
c_rt_lib0move(&___nl__6,___get_global_const(210));
#line 372
c_rt_lib0move(&___nl__6, c_rt_lib0get_ref_hash(*___ref___1, ___nl__6));
#line 372
c_rt_lib0copy(&___nl__7, ___nl__5);
#line 372
c_rt_lib0hash_set_value_dec(&___nl__6, ___get_global_const(704), ___nl__7);
#line 372
c_rt_lib0move(&___nl__8,___get_global_const(210));
#line 372
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___1, ___nl__8, ___nl__6));
#line 372
c_rt_lib0clear(&___nl__8);
#line 372
c_rt_lib0clear(&___nl__5);
#line 372
c_rt_lib0clear(&___nl__6);
#line 372
c_rt_lib0clear(&___nl__7);
#line 372
c_rt_lib0clear(&___nl__4);
#line 373
goto label_3;
#line 373
label_12:
#line 373
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(747)));
#line 374
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(755)));
#line 374
c_rt_lib0delete(module_checker_priv0check_val(___nl__5, ___ref___1));
#line 374
c_rt_lib0clear(&___nl__5);
#line 375
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(209)));
#line 375
c_rt_lib0delete(module_checker_priv0check_cmd(___nl__5, ___ref___1));
#line 375
c_rt_lib0clear(&___nl__5);
#line 376
c_rt_lib0move(&___nl__5, c_rt_lib0get_false());
#line 376
c_rt_lib0move(&___nl__6,___get_global_const(210));
#line 376
c_rt_lib0move(&___nl__6, c_rt_lib0get_ref_hash(*___ref___1, ___nl__6));
#line 376
c_rt_lib0copy(&___nl__7, ___nl__5);
#line 376
c_rt_lib0hash_set_value_dec(&___nl__6, ___get_global_const(704), ___nl__7);
#line 376
c_rt_lib0move(&___nl__8,___get_global_const(210));
#line 376
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___1, ___nl__8, ___nl__6));
#line 376
c_rt_lib0clear(&___nl__8);
#line 376
c_rt_lib0clear(&___nl__5);
#line 376
c_rt_lib0clear(&___nl__6);
#line 376
c_rt_lib0clear(&___nl__7);
#line 376
c_rt_lib0clear(&___nl__4);
#line 377
goto label_3;
#line 377
label_13:
#line 378
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(*___ref___1, ___get_global_const(707)));
#line 378
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 378
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 378
if(c_rt_lib0check_true_native(___nl__4)){ goto label_35;}
#line 379
c_rt_lib0move(&___nl__5,___get_global_const(17));
#line 379
c_rt_lib0move(&___nl__5, c_rt_lib0get_ref_hash(*___ref___1, ___nl__5));
#line 379
c_rt_lib0move(&___nl__6,___get_global_const(761));
#line 379
c_rt_lib0delete(module_checker_priv0add_error(&___nl__5, ___nl__6));
#line 379
c_rt_lib0clear(&___nl__6);
#line 379
c_rt_lib0move(&___nl__6,___get_global_const(17));
#line 379
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___1, ___nl__6, ___nl__5));
#line 379
c_rt_lib0clear(&___nl__6);
#line 379
c_rt_lib0clear(&___nl__5);
#line 380
goto label_35;
#line 380
label_35:
#line 380
c_rt_lib0clear(&___nl__4);
#line 381
goto label_3;
#line 381
label_14:
#line 382
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(*___ref___1, ___get_global_const(707)));
#line 382
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 382
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 382
if(c_rt_lib0check_true_native(___nl__4)){ goto label_37;}
#line 383
c_rt_lib0move(&___nl__5,___get_global_const(17));
#line 383
c_rt_lib0move(&___nl__5, c_rt_lib0get_ref_hash(*___ref___1, ___nl__5));
#line 383
c_rt_lib0move(&___nl__6,___get_global_const(762));
#line 383
c_rt_lib0delete(module_checker_priv0add_error(&___nl__5, ___nl__6));
#line 383
c_rt_lib0clear(&___nl__6);
#line 383
c_rt_lib0move(&___nl__6,___get_global_const(17));
#line 383
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___1, ___nl__6, ___nl__5));
#line 383
c_rt_lib0clear(&___nl__6);
#line 383
c_rt_lib0clear(&___nl__5);
#line 384
goto label_37;
#line 384
label_37:
#line 384
c_rt_lib0clear(&___nl__4);
#line 385
goto label_3;
#line 385
label_15:
#line 385
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(750)));
#line 386
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(234)));
#line 386
c_rt_lib0delete(module_checker_priv0check_val(___nl__5, ___ref___1));
#line 386
c_rt_lib0clear(&___nl__5);
#line 387
c_rt_lib0move(&___nl__5, c_rt_lib0get_true());
#line 388
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(763)));
#line 388
c_rt_lib0move(&___nl__8,___get_global_const(1));
#line 388
c_rt_lib0move(&___nl__9,___get_global_const(2));
#line 388
c_rt_lib0move(&___nl__10, c_rt_lib0array_len(___nl__6));
#line 388
label_40:
#line 388
c_rt_lib0move(&___nl__11, c_rt_lib0ge(___nl__8, ___nl__10));
#line 388
if(c_rt_lib0check_true_native(___nl__11)){ goto label_38;}
#line 388
c_rt_lib0move(&___nl__7, c_rt_lib0array_get(___nl__6, ___nl__8));
#line 389
c_rt_lib0move(&___nl__12, c_rt_lib0get_false());
#line 389
c_rt_lib0move(&___nl__13,___get_global_const(210));
#line 389
c_rt_lib0move(&___nl__13, c_rt_lib0get_ref_hash(*___ref___1, ___nl__13));
#line 389
c_rt_lib0copy(&___nl__14, ___nl__12);
#line 389
c_rt_lib0hash_set_value_dec(&___nl__13, ___get_global_const(704), ___nl__14);
#line 389
c_rt_lib0move(&___nl__15,___get_global_const(210));
#line 389
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___1, ___nl__15, ___nl__13));
#line 389
c_rt_lib0clear(&___nl__15);
#line 389
c_rt_lib0clear(&___nl__12);
#line 389
c_rt_lib0clear(&___nl__13);
#line 389
c_rt_lib0clear(&___nl__14);
#line 390
c_rt_lib0move(&___nl__12, module_checker_priv0save_block(___ref___1));
#line 391
c_rt_lib0move(&___nl__13, c_rt_lib0hash_get_value_dec(___nl__7, ___get_global_const(764)));
#line 391
c_rt_lib0move(&___nl__13, c_rt_lib0hash_get_value_dec(___nl__13, ___get_global_const(641)));
#line 391
c_rt_lib0move(&___nl__14, c_rt_lib0priv_is(___nl__13, ___get_global_const(37)));
#line 391
if(c_rt_lib0check_true_native(___nl__14)){ goto label_42;}
#line 392
c_rt_lib0move(&___nl__14, c_rt_lib0priv_is(___nl__13, ___get_global_const(641)));
#line 392
if(c_rt_lib0check_true_native(___nl__14)){ goto label_43;}
#line 392
c_rt_lib0move(&___nl__14,___get_global_const(74));
#line 392
c_rt_lib0move(&___nl__14, c_rt_lib0array_mk(2, ___nl__14, ___nl__13));
#line 392
nl_die_arg(___nl__14);
#line 391
label_42:
#line 392
goto label_41;
#line 392
label_43:
#line 392
c_rt_lib0move(&___nl__15, c_rt_lib0priv_as(___nl__13, ___get_global_const(641)));
#line 393
c_rt_lib0move(&___nl__16, c_rt_lib0get_false());
#line 393
c_rt_lib0move(&___nl__17, c_rt_lib0get_true());
#line 393
c_rt_lib0delete(module_checker_priv0add_var_dec(___nl__15, ___nl__16, ___nl__17, ___ref___1));
#line 393
c_rt_lib0clear(&___nl__17);
#line 393
c_rt_lib0clear(&___nl__16);
#line 393
c_rt_lib0clear(&___nl__15);
#line 394
goto label_41;
#line 394
label_41:
#line 394
c_rt_lib0clear(&___nl__13);
#line 394
c_rt_lib0clear(&___nl__14);
#line 395
c_rt_lib0move(&___nl__13, c_rt_lib0hash_get_value_dec(___nl__7, ___get_global_const(209)));
#line 395
c_rt_lib0delete(module_checker_priv0check_cmd(___nl__13, ___ref___1));
#line 395
c_rt_lib0clear(&___nl__13);
#line 396
c_rt_lib0move(&___nl__13, c_rt_lib0hash_get_value_dec(*___ref___1, ___get_global_const(210)));
#line 396
c_rt_lib0move(&___nl__13, c_rt_lib0hash_get_value_dec(___nl__13, ___get_global_const(704)));
#line 396
c_rt_lib0move(&___nl__13, c_rt_lib0not(___nl__13));
#line 396
c_rt_lib0move(&___nl__13, c_rt_lib0not(___nl__13));
#line 396
if(c_rt_lib0check_true_native(___nl__13)){ goto label_45;}
#line 396
c_rt_lib0move(&___nl__14, c_rt_lib0get_false());
#line 396
c_rt_lib0copy(&___nl__5, ___nl__14);
#line 396
c_rt_lib0clear(&___nl__14);
#line 396
goto label_45;
#line 396
label_45:
#line 396
c_rt_lib0clear(&___nl__13);
#line 397
c_rt_lib0delete(module_checker_priv0load_block(___ref___1, ___nl__12));
#line 397
c_rt_lib0clear(&___nl__12);
#line 398
c_rt_lib0move(&___nl__8, c_rt_lib0add_mod(___nl__8, ___nl__9));
#line 398
goto label_40;
#line 398
label_38:
#line 398
c_rt_lib0clear(&___nl__6);
#line 398
c_rt_lib0clear(&___nl__7);
#line 398
c_rt_lib0clear(&___nl__8);
#line 398
c_rt_lib0clear(&___nl__9);
#line 398
c_rt_lib0clear(&___nl__10);
#line 398
c_rt_lib0clear(&___nl__11);
#line 399
c_rt_lib0move(&___nl__6,___get_global_const(210));
#line 399
c_rt_lib0move(&___nl__6, c_rt_lib0get_ref_hash(*___ref___1, ___nl__6));
#line 399
c_rt_lib0copy(&___nl__7, ___nl__5);
#line 399
c_rt_lib0hash_set_value_dec(&___nl__6, ___get_global_const(704), ___nl__7);
#line 399
c_rt_lib0move(&___nl__8,___get_global_const(210));
#line 399
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___1, ___nl__8, ___nl__6));
#line 399
c_rt_lib0clear(&___nl__8);
#line 399
c_rt_lib0clear(&___nl__6);
#line 399
c_rt_lib0clear(&___nl__7);
#line 399
c_rt_lib0clear(&___nl__5);
#line 399
c_rt_lib0clear(&___nl__4);
#line 400
goto label_3;
#line 400
label_16:
#line 400
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(641)));
#line 401
c_rt_lib0delete(module_checker_priv0check_val(___nl__4, ___ref___1));
#line 401
c_rt_lib0clear(&___nl__4);
#line 402
goto label_3;
#line 402
label_17:
#line 402
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(210)));
#line 403
c_rt_lib0delete(module_checker_priv0check_val(___nl__4, ___ref___1));
#line 404
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(*___ref___1, ___get_global_const(210)));
#line 404
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(238)));
#line 404
c_rt_lib0move(&___nl__6, c_rt_lib0priv_is(___nl__5, ___get_global_const(641)));
#line 404
if(c_rt_lib0check_true_native(___nl__6)){ goto label_47;}
#line 406
c_rt_lib0move(&___nl__6, c_rt_lib0priv_is(___nl__5, ___get_global_const(37)));
#line 406
if(c_rt_lib0check_true_native(___nl__6)){ goto label_48;}
#line 408
c_rt_lib0move(&___nl__6, c_rt_lib0priv_is(___nl__5, ___get_global_const(702)));
#line 408
if(c_rt_lib0check_true_native(___nl__6)){ goto label_49;}
#line 411
c_rt_lib0move(&___nl__6, c_rt_lib0priv_is(___nl__5, ___get_global_const(701)));
#line 411
if(c_rt_lib0check_true_native(___nl__6)){ goto label_50;}
#line 414
c_rt_lib0move(&___nl__6, c_rt_lib0priv_is(___nl__5, ___get_global_const(700)));
#line 414
if(c_rt_lib0check_true_native(___nl__6)){ goto label_51;}
#line 414
c_rt_lib0move(&___nl__6,___get_global_const(74));
#line 414
c_rt_lib0move(&___nl__6, c_rt_lib0array_mk(2, ___nl__6, ___nl__5));
#line 414
nl_die_arg(___nl__6);
#line 404
label_47:
#line 405
c_rt_lib0copy(&___nl__7, ___nl__4);
#line 405
c_rt_lib0move(&___nl__7, c_rt_lib0priv_is(___nl__7, ___get_global_const(754)));
#line 405
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 405
if(c_rt_lib0check_true_native(___nl__7)){ goto label_53;}
#line 405
c_rt_lib0move(&___nl__8,___get_global_const(17));
#line 405
c_rt_lib0move(&___nl__8, c_rt_lib0get_ref_hash(*___ref___1, ___nl__8));
#line 405
c_rt_lib0move(&___nl__9,___get_global_const(765));
#line 405
c_rt_lib0delete(module_checker_priv0add_error(&___nl__8, ___nl__9));
#line 405
c_rt_lib0clear(&___nl__9);
#line 405
c_rt_lib0move(&___nl__9,___get_global_const(17));
#line 405
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___1, ___nl__9, ___nl__8));
#line 405
c_rt_lib0clear(&___nl__9);
#line 405
c_rt_lib0clear(&___nl__8);
#line 405
goto label_53;
#line 405
label_53:
#line 405
c_rt_lib0clear(&___nl__7);
#line 406
goto label_46;
#line 406
label_48:
#line 407
c_rt_lib0copy(&___nl__7, ___nl__4);
#line 407
c_rt_lib0move(&___nl__7, c_rt_lib0priv_is(___nl__7, ___get_global_const(754)));
#line 407
if(c_rt_lib0check_true_native(___nl__7)){ goto label_55;}
#line 407
c_rt_lib0move(&___nl__7, c_rt_lib0ov_mk_none(___get_global_const(702)));
#line 407
goto label_54;
#line 407
label_55:
#line 407
c_rt_lib0move(&___nl__7, c_rt_lib0ov_mk_none(___get_global_const(701)));
#line 407
label_54:
#line 407
c_rt_lib0move(&___nl__8,___get_global_const(210));
#line 407
c_rt_lib0move(&___nl__8, c_rt_lib0get_ref_hash(*___ref___1, ___nl__8));
#line 407
c_rt_lib0copy(&___nl__9, ___nl__7);
#line 407
c_rt_lib0hash_set_value_dec(&___nl__8, ___get_global_const(238), ___nl__9);
#line 407
c_rt_lib0move(&___nl__10,___get_global_const(210));
#line 407
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___1, ___nl__10, ___nl__8));
#line 407
c_rt_lib0clear(&___nl__10);
#line 407
c_rt_lib0clear(&___nl__7);
#line 407
c_rt_lib0clear(&___nl__8);
#line 407
c_rt_lib0clear(&___nl__9);
#line 408
goto label_46;
#line 408
label_49:
#line 409
c_rt_lib0copy(&___nl__7, ___nl__4);
#line 409
c_rt_lib0move(&___nl__7, c_rt_lib0priv_is(___nl__7, ___get_global_const(754)));
#line 409
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 409
if(c_rt_lib0check_true_native(___nl__7)){ goto label_57;}
#line 409
c_rt_lib0move(&___nl__8,___get_global_const(17));
#line 409
c_rt_lib0move(&___nl__8, c_rt_lib0get_ref_hash(*___ref___1, ___nl__8));
#line 409
c_rt_lib0move(&___nl__9,___get_global_const(766));
#line 409
c_rt_lib0delete(module_checker_priv0add_error(&___nl__8, ___nl__9));
#line 409
c_rt_lib0clear(&___nl__9);
#line 409
c_rt_lib0move(&___nl__9,___get_global_const(17));
#line 409
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___1, ___nl__9, ___nl__8));
#line 409
c_rt_lib0clear(&___nl__9);
#line 409
c_rt_lib0clear(&___nl__8);
#line 409
goto label_57;
#line 409
label_57:
#line 409
c_rt_lib0clear(&___nl__7);
#line 410
c_rt_lib0copy(&___nl__7, ___nl__4);
#line 410
c_rt_lib0move(&___nl__7, c_rt_lib0priv_is(___nl__7, ___get_global_const(754)));
#line 410
if(c_rt_lib0check_true_native(___nl__7)){ goto label_59;}
#line 410
c_rt_lib0move(&___nl__7, c_rt_lib0ov_mk_none(___get_global_const(702)));
#line 410
goto label_58;
#line 410
label_59:
#line 410
c_rt_lib0move(&___nl__7, c_rt_lib0ov_mk_none(___get_global_const(701)));
#line 410
label_58:
#line 410
c_rt_lib0move(&___nl__8,___get_global_const(210));
#line 410
c_rt_lib0move(&___nl__8, c_rt_lib0get_ref_hash(*___ref___1, ___nl__8));
#line 410
c_rt_lib0copy(&___nl__9, ___nl__7);
#line 410
c_rt_lib0hash_set_value_dec(&___nl__8, ___get_global_const(238), ___nl__9);
#line 410
c_rt_lib0move(&___nl__10,___get_global_const(210));
#line 410
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___1, ___nl__10, ___nl__8));
#line 410
c_rt_lib0clear(&___nl__10);
#line 410
c_rt_lib0clear(&___nl__7);
#line 410
c_rt_lib0clear(&___nl__8);
#line 410
c_rt_lib0clear(&___nl__9);
#line 411
goto label_46;
#line 411
label_50:
#line 412
c_rt_lib0copy(&___nl__7, ___nl__4);
#line 412
c_rt_lib0move(&___nl__7, c_rt_lib0priv_is(___nl__7, ___get_global_const(754)));
#line 412
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 412
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 412
if(c_rt_lib0check_true_native(___nl__7)){ goto label_61;}
#line 412
c_rt_lib0move(&___nl__8,___get_global_const(17));
#line 412
c_rt_lib0move(&___nl__8, c_rt_lib0get_ref_hash(*___ref___1, ___nl__8));
#line 412
c_rt_lib0move(&___nl__9,___get_global_const(767));
#line 412
c_rt_lib0delete(module_checker_priv0add_error(&___nl__8, ___nl__9));
#line 412
c_rt_lib0clear(&___nl__9);
#line 412
c_rt_lib0move(&___nl__9,___get_global_const(17));
#line 412
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___1, ___nl__9, ___nl__8));
#line 412
c_rt_lib0clear(&___nl__9);
#line 412
c_rt_lib0clear(&___nl__8);
#line 412
goto label_61;
#line 412
label_61:
#line 412
c_rt_lib0clear(&___nl__7);
#line 413
c_rt_lib0copy(&___nl__7, ___nl__4);
#line 413
c_rt_lib0move(&___nl__7, c_rt_lib0priv_is(___nl__7, ___get_global_const(754)));
#line 413
if(c_rt_lib0check_true_native(___nl__7)){ goto label_63;}
#line 413
c_rt_lib0move(&___nl__7, c_rt_lib0ov_mk_none(___get_global_const(702)));
#line 413
goto label_62;
#line 413
label_63:
#line 413
c_rt_lib0move(&___nl__7, c_rt_lib0ov_mk_none(___get_global_const(701)));
#line 413
label_62:
#line 413
c_rt_lib0move(&___nl__8,___get_global_const(210));
#line 413
c_rt_lib0move(&___nl__8, c_rt_lib0get_ref_hash(*___ref___1, ___nl__8));
#line 413
c_rt_lib0copy(&___nl__9, ___nl__7);
#line 413
c_rt_lib0hash_set_value_dec(&___nl__8, ___get_global_const(238), ___nl__9);
#line 413
c_rt_lib0move(&___nl__10,___get_global_const(210));
#line 413
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___1, ___nl__10, ___nl__8));
#line 413
c_rt_lib0clear(&___nl__10);
#line 413
c_rt_lib0clear(&___nl__7);
#line 413
c_rt_lib0clear(&___nl__8);
#line 413
c_rt_lib0clear(&___nl__9);
#line 414
goto label_46;
#line 414
label_51:
#line 415
c_rt_lib0copy(&___nl__7, ___nl__4);
#line 415
c_rt_lib0move(&___nl__7, c_rt_lib0priv_is(___nl__7, ___get_global_const(754)));
#line 415
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 415
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 415
if(c_rt_lib0check_true_native(___nl__7)){ goto label_65;}
#line 415
c_rt_lib0move(&___nl__8,___get_global_const(17));
#line 415
c_rt_lib0move(&___nl__8, c_rt_lib0get_ref_hash(*___ref___1, ___nl__8));
#line 415
c_rt_lib0move(&___nl__9,___get_global_const(768));
#line 415
c_rt_lib0delete(module_checker_priv0add_error(&___nl__8, ___nl__9));
#line 415
c_rt_lib0clear(&___nl__9);
#line 415
c_rt_lib0move(&___nl__9,___get_global_const(17));
#line 415
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___1, ___nl__9, ___nl__8));
#line 415
c_rt_lib0clear(&___nl__9);
#line 415
c_rt_lib0clear(&___nl__8);
#line 415
goto label_65;
#line 415
label_65:
#line 415
c_rt_lib0clear(&___nl__7);
#line 416
goto label_46;
#line 416
label_46:
#line 416
c_rt_lib0clear(&___nl__5);
#line 416
c_rt_lib0clear(&___nl__6);
#line 417
c_rt_lib0move(&___nl__5, c_rt_lib0get_true());
#line 417
c_rt_lib0move(&___nl__6,___get_global_const(210));
#line 417
c_rt_lib0move(&___nl__6, c_rt_lib0get_ref_hash(*___ref___1, ___nl__6));
#line 417
c_rt_lib0copy(&___nl__7, ___nl__5);
#line 417
c_rt_lib0hash_set_value_dec(&___nl__6, ___get_global_const(704), ___nl__7);
#line 417
c_rt_lib0move(&___nl__8,___get_global_const(210));
#line 417
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___1, ___nl__8, ___nl__6));
#line 417
c_rt_lib0clear(&___nl__8);
#line 417
c_rt_lib0clear(&___nl__5);
#line 417
c_rt_lib0clear(&___nl__6);
#line 417
c_rt_lib0clear(&___nl__7);
#line 417
c_rt_lib0clear(&___nl__4);
#line 418
goto label_3;
#line 418
label_18:
#line 418
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(751)));
#line 419
c_rt_lib0move(&___nl__5, module_checker_priv0save_block(___ref___1));
#line 420
c_rt_lib0move(&___nl__7,___get_global_const(1));
#line 420
c_rt_lib0move(&___nl__8,___get_global_const(2));
#line 420
c_rt_lib0move(&___nl__9, c_rt_lib0array_len(___nl__4));
#line 420
label_68:
#line 420
c_rt_lib0move(&___nl__10, c_rt_lib0ge(___nl__7, ___nl__9));
#line 420
if(c_rt_lib0check_true_native(___nl__10)){ goto label_66;}
#line 420
c_rt_lib0move(&___nl__6, c_rt_lib0array_get(___nl__4, ___nl__7));
#line 421
c_rt_lib0delete(module_checker_priv0check_cmd(___nl__6, ___ref___1));
#line 422
c_rt_lib0move(&___nl__7, c_rt_lib0add_mod(___nl__7, ___nl__8));
#line 422
goto label_68;
#line 422
label_66:
#line 422
c_rt_lib0clear(&___nl__6);
#line 422
c_rt_lib0clear(&___nl__7);
#line 422
c_rt_lib0clear(&___nl__8);
#line 422
c_rt_lib0clear(&___nl__9);
#line 422
c_rt_lib0clear(&___nl__10);
#line 423
c_rt_lib0delete(module_checker_priv0load_block(___ref___1, ___nl__5));
#line 423
c_rt_lib0clear(&___nl__5);
#line 423
c_rt_lib0clear(&___nl__4);
#line 424
goto label_3;
#line 424
label_19:
#line 424
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(229)));
#line 425
c_rt_lib0move(&___nl__6,___get_global_const(1));
#line 425
c_rt_lib0move(&___nl__7,___get_global_const(2));
#line 425
c_rt_lib0move(&___nl__8, c_rt_lib0array_len(___nl__4));
#line 425
label_71:
#line 425
c_rt_lib0move(&___nl__9, c_rt_lib0ge(___nl__6, ___nl__8));
#line 425
if(c_rt_lib0check_true_native(___nl__9)){ goto label_69;}
#line 425
c_rt_lib0move(&___nl__5, c_rt_lib0array_get(___nl__4, ___nl__6));
#line 426
c_rt_lib0delete(module_checker_priv0check_val(___nl__5, ___ref___1));
#line 427
c_rt_lib0move(&___nl__6, c_rt_lib0add_mod(___nl__6, ___nl__7));
#line 427
goto label_71;
#line 427
label_69:
#line 427
c_rt_lib0clear(&___nl__5);
#line 427
c_rt_lib0clear(&___nl__6);
#line 427
c_rt_lib0clear(&___nl__7);
#line 427
c_rt_lib0clear(&___nl__8);
#line 427
c_rt_lib0clear(&___nl__9);
#line 428
c_rt_lib0move(&___nl__5, c_rt_lib0get_true());
#line 428
c_rt_lib0move(&___nl__6,___get_global_const(210));
#line 428
c_rt_lib0move(&___nl__6, c_rt_lib0get_ref_hash(*___ref___1, ___nl__6));
#line 428
c_rt_lib0copy(&___nl__7, ___nl__5);
#line 428
c_rt_lib0hash_set_value_dec(&___nl__6, ___get_global_const(704), ___nl__7);
#line 428
c_rt_lib0move(&___nl__8,___get_global_const(210));
#line 428
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___1, ___nl__8, ___nl__6));
#line 428
c_rt_lib0clear(&___nl__8);
#line 428
c_rt_lib0clear(&___nl__5);
#line 428
c_rt_lib0clear(&___nl__6);
#line 428
c_rt_lib0clear(&___nl__7);
#line 428
c_rt_lib0clear(&___nl__4);
#line 429
goto label_3;
#line 429
label_20:
#line 429
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(752)));
#line 430
c_rt_lib0move(&___nl__5, c_rt_lib0get_false());
#line 430
c_rt_lib0move(&___nl__6, c_rt_lib0get_false());
#line 430
c_rt_lib0delete(module_checker_priv0add_var_dec(___nl__4, ___nl__5, ___nl__6, ___ref___1));
#line 430
c_rt_lib0clear(&___nl__6);
#line 430
c_rt_lib0clear(&___nl__5);
#line 430
c_rt_lib0clear(&___nl__4);
#line 431
goto label_3;
#line 431
label_21:
#line 431
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(753)));
#line 432
c_rt_lib0move(&___nl__5, c_rt_lib0priv_is(___nl__4, ___get_global_const(769)));
#line 432
if(c_rt_lib0check_true_native(___nl__5)){ goto label_73;}
#line 434
c_rt_lib0move(&___nl__5, c_rt_lib0priv_is(___nl__4, ___get_global_const(770)));
#line 434
if(c_rt_lib0check_true_native(___nl__5)){ goto label_74;}
#line 436
c_rt_lib0move(&___nl__5, c_rt_lib0priv_is(___nl__4, ___get_global_const(771)));
#line 436
if(c_rt_lib0check_true_native(___nl__5)){ goto label_75;}
#line 436
c_rt_lib0move(&___nl__5,___get_global_const(74));
#line 436
c_rt_lib0move(&___nl__5, c_rt_lib0array_mk(2, ___nl__5, ___nl__4));
#line 436
nl_die_arg(___nl__5);
#line 432
label_73:
#line 432
c_rt_lib0move(&___nl__6, c_rt_lib0priv_as(___nl__4, ___get_global_const(769)));
#line 433
c_rt_lib0move(&___nl__7, c_rt_lib0get_false());
#line 433
c_rt_lib0move(&___nl__8, c_rt_lib0get_false());
#line 433
c_rt_lib0delete(module_checker_priv0add_var_dec(___nl__6, ___nl__7, ___nl__8, ___ref___1));
#line 433
c_rt_lib0clear(&___nl__8);
#line 433
c_rt_lib0clear(&___nl__7);
#line 433
c_rt_lib0clear(&___nl__6);
#line 434
goto label_72;
#line 434
label_74:
#line 434
c_rt_lib0move(&___nl__6, c_rt_lib0priv_as(___nl__4, ___get_global_const(770)));
#line 435
c_rt_lib0move(&___nl__7, c_rt_lib0ov_mk_arg(___get_global_const(219), ___nl__6));
#line 435
c_rt_lib0delete(module_checker_priv0check_val(___nl__7, ___ref___1));
#line 435
c_rt_lib0clear(&___nl__7);
#line 435
c_rt_lib0clear(&___nl__6);
#line 436
goto label_72;
#line 436
label_75:
#line 436
c_rt_lib0move(&___nl__6, c_rt_lib0priv_as(___nl__4, ___get_global_const(771)));
#line 437
c_rt_lib0delete(module_checker_priv0check_val(___nl__6, ___ref___1));
#line 437
c_rt_lib0clear(&___nl__6);
#line 438
goto label_72;
#line 438
label_72:
#line 438
c_rt_lib0clear(&___nl__5);
#line 438
c_rt_lib0clear(&___nl__4);
#line 439
goto label_3;
#line 439
label_22:
#line 439
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(78)));
#line 440
c_rt_lib0move(&___nl__5, c_rt_lib0priv_is(___nl__4, ___get_global_const(769)));
#line 440
if(c_rt_lib0check_true_native(___nl__5)){ goto label_77;}
#line 442
c_rt_lib0move(&___nl__5, c_rt_lib0priv_is(___nl__4, ___get_global_const(770)));
#line 442
if(c_rt_lib0check_true_native(___nl__5)){ goto label_78;}
#line 444
c_rt_lib0move(&___nl__5, c_rt_lib0priv_is(___nl__4, ___get_global_const(771)));
#line 444
if(c_rt_lib0check_true_native(___nl__5)){ goto label_79;}
#line 444
c_rt_lib0move(&___nl__5,___get_global_const(74));
#line 444
c_rt_lib0move(&___nl__5, c_rt_lib0array_mk(2, ___nl__5, ___nl__4));
#line 444
nl_die_arg(___nl__5);
#line 440
label_77:
#line 440
c_rt_lib0move(&___nl__6, c_rt_lib0priv_as(___nl__4, ___get_global_const(769)));
#line 441
c_rt_lib0move(&___nl__7, c_rt_lib0get_false());
#line 441
c_rt_lib0move(&___nl__8, c_rt_lib0get_false());
#line 441
c_rt_lib0delete(module_checker_priv0add_var_dec(___nl__6, ___nl__7, ___nl__8, ___ref___1));
#line 441
c_rt_lib0clear(&___nl__8);
#line 441
c_rt_lib0clear(&___nl__7);
#line 441
c_rt_lib0clear(&___nl__6);
#line 442
goto label_76;
#line 442
label_78:
#line 442
c_rt_lib0move(&___nl__6, c_rt_lib0priv_as(___nl__4, ___get_global_const(770)));
#line 443
c_rt_lib0move(&___nl__7, c_rt_lib0ov_mk_arg(___get_global_const(219), ___nl__6));
#line 443
c_rt_lib0delete(module_checker_priv0check_val(___nl__7, ___ref___1));
#line 443
c_rt_lib0clear(&___nl__7);
#line 443
c_rt_lib0clear(&___nl__6);
#line 444
goto label_76;
#line 444
label_79:
#line 444
c_rt_lib0move(&___nl__6, c_rt_lib0priv_as(___nl__4, ___get_global_const(771)));
#line 445
c_rt_lib0delete(module_checker_priv0check_val(___nl__6, ___ref___1));
#line 445
c_rt_lib0clear(&___nl__6);
#line 446
goto label_76;
#line 446
label_76:
#line 446
c_rt_lib0clear(&___nl__5);
#line 446
c_rt_lib0clear(&___nl__4);
#line 447
goto label_3;
#line 447
label_23:
#line 448
goto label_3;
#line 448
label_3:
#line 448
c_rt_lib0clear(&___nl__2);
#line 448
c_rt_lib0clear(&___nl__3);
#line 448
c_rt_lib0clear(&___nl__0);
#line 448
return NULL;
}

ImmT module_checker_priv0check_lvalue(ImmT ___nl__0,ImmT * ___ref___1) {
c_rt_lib0arg_val(___nl__0);
module_checker_priv0__const__init();
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
#line 451
c_rt_lib0copy(&___nl__2, ___nl__0);
#line 451
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__2, ___get_global_const(772)));
#line 451
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 451
if(c_rt_lib0check_true_native(___nl__2)){ goto label_2;}
#line 452
c_rt_lib0copy(&___nl__3, ___nl__0);
#line 452
c_rt_lib0move(&___nl__3, c_rt_lib0priv_as(___nl__3, ___get_global_const(772)));
#line 452
c_rt_lib0move(&___nl__4, c_rt_lib0ov_mk_none(___get_global_const(257)));
#line 452
c_rt_lib0delete(module_checker_priv0use_var(___nl__3, ___nl__4, ___ref___1));
#line 452
c_rt_lib0clear(&___nl__4);
#line 452
c_rt_lib0clear(&___nl__3);
#line 453
c_rt_lib0clear(&___nl__0);
#line 453
c_rt_lib0clear(&___nl__2);
#line 453
return NULL;
#line 454
goto label_3;
#line 454
label_2:
#line 454
c_rt_lib0copy(&___nl__2, ___nl__0);
#line 454
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__2, ___get_global_const(219)));
#line 454
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 454
if(c_rt_lib0check_true_native(___nl__2)){ goto label_3;}
#line 455
c_rt_lib0copy(&___nl__3, ___nl__0);
#line 455
c_rt_lib0move(&___nl__3, c_rt_lib0priv_as(___nl__3, ___get_global_const(219)));
#line 456
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(401)));
#line 456
c_rt_lib0move(&___nl__5,___get_global_const(773));
#line 456
c_rt_lib0move(&___nl__4, c_rt_lib0eq(___nl__4, ___nl__5));
#line 456
c_rt_lib0clear(&___nl__5);
#line 456
if(c_rt_lib0check_true_native(___nl__4)){ goto label_6;}
#line 456
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(401)));
#line 456
c_rt_lib0move(&___nl__5,___get_global_const(774));
#line 456
c_rt_lib0move(&___nl__4, c_rt_lib0eq(___nl__4, ___nl__5));
#line 456
c_rt_lib0clear(&___nl__5);
#line 456
label_6:
#line 456
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 456
if(c_rt_lib0check_true_native(___nl__4)){ goto label_5;}
#line 457
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(235)));
#line 457
c_rt_lib0delete(module_checker_priv0check_lvalue(___nl__5, ___ref___1));
#line 457
c_rt_lib0clear(&___nl__5);
#line 458
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(236)));
#line 458
c_rt_lib0delete(module_checker_priv0check_val(___nl__5, ___ref___1));
#line 458
c_rt_lib0clear(&___nl__5);
#line 459
c_rt_lib0clear(&___nl__0);
#line 459
c_rt_lib0clear(&___nl__2);
#line 459
c_rt_lib0clear(&___nl__3);
#line 459
c_rt_lib0clear(&___nl__4);
#line 459
return NULL;
#line 460
goto label_5;
#line 460
label_5:
#line 460
c_rt_lib0clear(&___nl__4);
#line 460
c_rt_lib0clear(&___nl__3);
#line 461
goto label_3;
#line 461
label_3:
#line 461
c_rt_lib0clear(&___nl__2);
#line 462
c_rt_lib0move(&___nl__2,___get_global_const(17));
#line 462
c_rt_lib0move(&___nl__2, c_rt_lib0get_ref_hash(*___ref___1, ___nl__2));
#line 462
c_rt_lib0move(&___nl__3,___get_global_const(775));
#line 462
c_rt_lib0delete(module_checker_priv0add_error(&___nl__2, ___nl__3));
#line 462
c_rt_lib0clear(&___nl__3);
#line 462
c_rt_lib0move(&___nl__3,___get_global_const(17));
#line 462
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___1, ___nl__3, ___nl__2));
#line 462
c_rt_lib0clear(&___nl__3);
#line 462
c_rt_lib0clear(&___nl__2);
#line 462
c_rt_lib0clear(&___nl__0);
#line 462
return NULL;
}

ImmT module_checker_priv0check_val(ImmT ___nl__0,ImmT * ___ref___1) {
c_rt_lib0arg_val(___nl__0);
module_checker_priv0__const__init();
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
#line 465
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__0, ___get_global_const(776)));
#line 465
if(c_rt_lib0check_true_native(___nl__2)){ goto label_2;}
#line 469
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__0, ___get_global_const(777)));
#line 469
if(c_rt_lib0check_true_native(___nl__2)){ goto label_3;}
#line 471
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__0, ___get_global_const(764)));
#line 471
if(c_rt_lib0check_true_native(___nl__2)){ goto label_4;}
#line 473
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__0, ___get_global_const(294)));
#line 473
if(c_rt_lib0check_true_native(___nl__2)){ goto label_5;}
#line 474
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__0, ___get_global_const(694)));
#line 474
if(c_rt_lib0check_true_native(___nl__2)){ goto label_6;}
#line 475
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__0, ___get_global_const(754)));
#line 475
if(c_rt_lib0check_true_native(___nl__2)){ goto label_7;}
#line 476
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__0, ___get_global_const(778)));
#line 476
if(c_rt_lib0check_true_native(___nl__2)){ goto label_8;}
#line 477
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__0, ___get_global_const(215)));
#line 477
if(c_rt_lib0check_true_native(___nl__2)){ goto label_9;}
#line 481
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__0, ___get_global_const(216)));
#line 481
if(c_rt_lib0check_true_native(___nl__2)){ goto label_10;}
#line 486
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__0, ___get_global_const(772)));
#line 486
if(c_rt_lib0check_true_native(___nl__2)){ goto label_11;}
#line 488
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__0, ___get_global_const(219)));
#line 488
if(c_rt_lib0check_true_native(___nl__2)){ goto label_12;}
#line 500
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__0, ___get_global_const(779)));
#line 500
if(c_rt_lib0check_true_native(___nl__2)){ goto label_13;}
#line 502
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__0, ___get_global_const(780)));
#line 502
if(c_rt_lib0check_true_native(___nl__2)){ goto label_14;}
#line 504
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__0, ___get_global_const(781)));
#line 504
if(c_rt_lib0check_true_native(___nl__2)){ goto label_15;}
#line 506
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__0, ___get_global_const(735)));
#line 506
if(c_rt_lib0check_true_native(___nl__2)){ goto label_16;}
#line 515
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__0, ___get_global_const(782)));
#line 515
if(c_rt_lib0check_true_native(___nl__2)){ goto label_17;}
#line 517
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__0, ___get_global_const(783)));
#line 517
if(c_rt_lib0check_true_native(___nl__2)){ goto label_18;}
#line 517
c_rt_lib0move(&___nl__2,___get_global_const(74));
#line 517
c_rt_lib0move(&___nl__2, c_rt_lib0array_mk(2, ___nl__2, ___nl__0));
#line 517
nl_die_arg(___nl__2);
#line 465
label_2:
#line 465
c_rt_lib0move(&___nl__3, c_rt_lib0priv_as(___nl__0, ___get_global_const(776)));
#line 466
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(784)));
#line 466
c_rt_lib0delete(module_checker_priv0check_val(___nl__4, ___ref___1));
#line 466
c_rt_lib0clear(&___nl__4);
#line 467
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(785)));
#line 467
c_rt_lib0delete(module_checker_priv0check_val(___nl__4, ___ref___1));
#line 467
c_rt_lib0clear(&___nl__4);
#line 468
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(786)));
#line 468
c_rt_lib0delete(module_checker_priv0check_val(___nl__4, ___ref___1));
#line 468
c_rt_lib0clear(&___nl__4);
#line 468
c_rt_lib0clear(&___nl__3);
#line 469
goto label_1;
#line 469
label_3:
#line 469
c_rt_lib0move(&___nl__3, c_rt_lib0priv_as(___nl__0, ___get_global_const(777)));
#line 470
c_rt_lib0delete(module_checker_priv0check_val(___nl__3, ___ref___1));
#line 470
c_rt_lib0clear(&___nl__3);
#line 471
goto label_1;
#line 471
label_4:
#line 471
c_rt_lib0move(&___nl__3, c_rt_lib0priv_as(___nl__0, ___get_global_const(764)));
#line 472
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(772)));
#line 472
c_rt_lib0delete(module_checker_priv0check_val(___nl__4, ___ref___1));
#line 472
c_rt_lib0clear(&___nl__4);
#line 472
c_rt_lib0clear(&___nl__3);
#line 473
goto label_1;
#line 473
label_5:
#line 473
c_rt_lib0move(&___nl__3, c_rt_lib0priv_as(___nl__0, ___get_global_const(294)));
#line 473
c_rt_lib0clear(&___nl__3);
#line 474
goto label_1;
#line 474
label_6:
#line 474
c_rt_lib0move(&___nl__3, c_rt_lib0priv_as(___nl__0, ___get_global_const(694)));
#line 474
c_rt_lib0clear(&___nl__3);
#line 475
goto label_1;
#line 475
label_7:
#line 476
goto label_1;
#line 476
label_8:
#line 476
c_rt_lib0move(&___nl__3, c_rt_lib0priv_as(___nl__0, ___get_global_const(778)));
#line 476
c_rt_lib0clear(&___nl__3);
#line 477
goto label_1;
#line 477
label_9:
#line 477
c_rt_lib0move(&___nl__3, c_rt_lib0priv_as(___nl__0, ___get_global_const(215)));
#line 478
c_rt_lib0move(&___nl__5,___get_global_const(1));
#line 478
c_rt_lib0move(&___nl__6,___get_global_const(2));
#line 478
c_rt_lib0move(&___nl__7, c_rt_lib0array_len(___nl__3));
#line 478
label_21:
#line 478
c_rt_lib0move(&___nl__8, c_rt_lib0ge(___nl__5, ___nl__7));
#line 478
if(c_rt_lib0check_true_native(___nl__8)){ goto label_19;}
#line 478
c_rt_lib0move(&___nl__4, c_rt_lib0array_get(___nl__3, ___nl__5));
#line 479
c_rt_lib0delete(module_checker_priv0check_val(___nl__4, ___ref___1));
#line 480
c_rt_lib0move(&___nl__5, c_rt_lib0add_mod(___nl__5, ___nl__6));
#line 480
goto label_21;
#line 480
label_19:
#line 480
c_rt_lib0clear(&___nl__4);
#line 480
c_rt_lib0clear(&___nl__5);
#line 480
c_rt_lib0clear(&___nl__6);
#line 480
c_rt_lib0clear(&___nl__7);
#line 480
c_rt_lib0clear(&___nl__8);
#line 480
c_rt_lib0clear(&___nl__3);
#line 481
goto label_1;
#line 481
label_10:
#line 481
c_rt_lib0move(&___nl__3, c_rt_lib0priv_as(___nl__0, ___get_global_const(216)));
#line 482
c_rt_lib0move(&___nl__5,___get_global_const(1));
#line 482
c_rt_lib0move(&___nl__6,___get_global_const(2));
#line 482
c_rt_lib0move(&___nl__7, c_rt_lib0array_len(___nl__3));
#line 482
label_24:
#line 482
c_rt_lib0move(&___nl__8, c_rt_lib0ge(___nl__5, ___nl__7));
#line 482
if(c_rt_lib0check_true_native(___nl__8)){ goto label_22;}
#line 482
c_rt_lib0move(&___nl__4, c_rt_lib0array_get(___nl__3, ___nl__5));
#line 483
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(279)));
#line 483
c_rt_lib0move(&___nl__10,___get_global_const(778));
#line 483
c_rt_lib0delete(ov0as(___nl__9, ___nl__10));
#line 483
c_rt_lib0clear(&___nl__10);
#line 483
c_rt_lib0clear(&___nl__9);
#line 484
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(234)));
#line 484
c_rt_lib0delete(module_checker_priv0check_val(___nl__9, ___ref___1));
#line 484
c_rt_lib0clear(&___nl__9);
#line 485
c_rt_lib0move(&___nl__5, c_rt_lib0add_mod(___nl__5, ___nl__6));
#line 485
goto label_24;
#line 485
label_22:
#line 485
c_rt_lib0clear(&___nl__4);
#line 485
c_rt_lib0clear(&___nl__5);
#line 485
c_rt_lib0clear(&___nl__6);
#line 485
c_rt_lib0clear(&___nl__7);
#line 485
c_rt_lib0clear(&___nl__8);
#line 485
c_rt_lib0clear(&___nl__3);
#line 486
goto label_1;
#line 486
label_11:
#line 486
c_rt_lib0move(&___nl__3, c_rt_lib0priv_as(___nl__0, ___get_global_const(772)));
#line 487
c_rt_lib0move(&___nl__4, c_rt_lib0ov_mk_none(___get_global_const(714)));
#line 487
c_rt_lib0delete(module_checker_priv0use_var(___nl__3, ___nl__4, ___ref___1));
#line 487
c_rt_lib0clear(&___nl__4);
#line 487
c_rt_lib0clear(&___nl__3);
#line 488
goto label_1;
#line 488
label_12:
#line 488
c_rt_lib0move(&___nl__3, c_rt_lib0priv_as(___nl__0, ___get_global_const(219)));
#line 489
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(401)));
#line 490
c_rt_lib0move(&___nl__5,___get_global_const(787));
#line 490
c_rt_lib0move(&___nl__5, c_rt_lib0eq(___nl__4, ___nl__5));
#line 490
if(c_rt_lib0check_true_native(___nl__5)){ goto label_31;}
#line 490
c_rt_lib0move(&___nl__5,___get_global_const(788));
#line 490
c_rt_lib0move(&___nl__5, c_rt_lib0eq(___nl__4, ___nl__5));
#line 490
label_31:
#line 490
if(c_rt_lib0check_true_native(___nl__5)){ goto label_30;}
#line 490
c_rt_lib0move(&___nl__5,___get_global_const(789));
#line 490
c_rt_lib0move(&___nl__5, c_rt_lib0eq(___nl__4, ___nl__5));
#line 490
label_30:
#line 490
if(c_rt_lib0check_true_native(___nl__5)){ goto label_29;}
#line 490
c_rt_lib0move(&___nl__5,___get_global_const(790));
#line 490
c_rt_lib0move(&___nl__5, c_rt_lib0eq(___nl__4, ___nl__5));
#line 490
label_29:
#line 490
if(c_rt_lib0check_true_native(___nl__5)){ goto label_28;}
#line 490
c_rt_lib0move(&___nl__5,___get_global_const(791));
#line 490
c_rt_lib0move(&___nl__5, c_rt_lib0eq(___nl__4, ___nl__5));
#line 490
label_28:
#line 490
if(c_rt_lib0check_true_native(___nl__5)){ goto label_27;}
#line 490
c_rt_lib0move(&___nl__5,___get_global_const(792));
#line 490
c_rt_lib0move(&___nl__5, c_rt_lib0eq(___nl__4, ___nl__5));
#line 490
label_27:
#line 490
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 490
if(c_rt_lib0check_true_native(___nl__5)){ goto label_26;}
#line 491
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(235)));
#line 491
c_rt_lib0move(&___nl__6, c_rt_lib0priv_is(___nl__6, ___get_global_const(772)));
#line 491
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__6));
#line 491
if(c_rt_lib0check_true_native(___nl__7)){ goto label_34;}
#line 491
c_rt_lib0move(&___nl__6,___get_global_const(787));
#line 491
c_rt_lib0move(&___nl__6, c_rt_lib0eq(___nl__4, ___nl__6));
#line 491
label_34:
#line 491
c_rt_lib0clear(&___nl__7);
#line 491
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 491
if(c_rt_lib0check_true_native(___nl__6)){ goto label_33;}
#line 492
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(235)));
#line 492
c_rt_lib0move(&___nl__7, c_rt_lib0priv_as(___nl__7, ___get_global_const(772)));
#line 492
c_rt_lib0move(&___nl__8, c_rt_lib0ov_mk_none(___get_global_const(713)));
#line 492
c_rt_lib0delete(module_checker_priv0use_var(___nl__7, ___nl__8, ___ref___1));
#line 492
c_rt_lib0clear(&___nl__8);
#line 492
c_rt_lib0clear(&___nl__7);
#line 493
goto label_32;
#line 493
label_33:
#line 494
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(235)));
#line 494
c_rt_lib0delete(module_checker_priv0check_lvalue(___nl__7, ___ref___1));
#line 494
c_rt_lib0clear(&___nl__7);
#line 495
goto label_32;
#line 495
label_32:
#line 495
c_rt_lib0clear(&___nl__6);
#line 496
goto label_25;
#line 496
label_26:
#line 497
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(235)));
#line 497
c_rt_lib0delete(module_checker_priv0check_val(___nl__6, ___ref___1));
#line 497
c_rt_lib0clear(&___nl__6);
#line 498
goto label_25;
#line 498
label_25:
#line 498
c_rt_lib0clear(&___nl__5);
#line 499
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(236)));
#line 499
c_rt_lib0delete(module_checker_priv0check_val(___nl__5, ___ref___1));
#line 499
c_rt_lib0clear(&___nl__5);
#line 499
c_rt_lib0clear(&___nl__4);
#line 499
c_rt_lib0clear(&___nl__3);
#line 500
goto label_1;
#line 500
label_13:
#line 500
c_rt_lib0move(&___nl__3, c_rt_lib0priv_as(___nl__0, ___get_global_const(779)));
#line 501
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(235)));
#line 501
c_rt_lib0delete(module_checker_priv0check_val(___nl__4, ___ref___1));
#line 501
c_rt_lib0clear(&___nl__4);
#line 501
c_rt_lib0clear(&___nl__3);
#line 502
goto label_1;
#line 502
label_14:
#line 502
c_rt_lib0move(&___nl__3, c_rt_lib0priv_as(___nl__0, ___get_global_const(780)));
#line 503
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(234)));
#line 503
c_rt_lib0delete(module_checker_priv0check_val(___nl__4, ___ref___1));
#line 503
c_rt_lib0clear(&___nl__4);
#line 503
c_rt_lib0clear(&___nl__3);
#line 504
goto label_1;
#line 504
label_15:
#line 504
c_rt_lib0move(&___nl__3, c_rt_lib0priv_as(___nl__0, ___get_global_const(781)));
#line 505
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(99)));
#line 505
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(76)));
#line 505
c_rt_lib0delete(module_checker_priv0add_fun_used(___nl__4, ___nl__5, ___ref___1));
#line 505
c_rt_lib0clear(&___nl__5);
#line 505
c_rt_lib0clear(&___nl__4);
#line 505
c_rt_lib0clear(&___nl__3);
#line 506
goto label_1;
#line 506
label_16:
#line 506
c_rt_lib0move(&___nl__3, c_rt_lib0priv_as(___nl__0, ___get_global_const(735)));
#line 507
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(73)));
#line 507
c_rt_lib0move(&___nl__6,___get_global_const(1));
#line 507
c_rt_lib0move(&___nl__7,___get_global_const(2));
#line 507
c_rt_lib0move(&___nl__8, c_rt_lib0array_len(___nl__4));
#line 507
label_37:
#line 507
c_rt_lib0move(&___nl__9, c_rt_lib0ge(___nl__6, ___nl__8));
#line 507
if(c_rt_lib0check_true_native(___nl__9)){ goto label_35;}
#line 507
c_rt_lib0move(&___nl__5, c_rt_lib0array_get(___nl__4, ___nl__6));
#line 508
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(257)));
#line 508
c_rt_lib0move(&___nl__11, c_rt_lib0priv_is(___nl__10, ___get_global_const(37)));
#line 508
if(c_rt_lib0check_true_native(___nl__11)){ goto label_39;}
#line 510
c_rt_lib0move(&___nl__11, c_rt_lib0priv_is(___nl__10, ___get_global_const(5)));
#line 510
if(c_rt_lib0check_true_native(___nl__11)){ goto label_40;}
#line 510
c_rt_lib0move(&___nl__11,___get_global_const(74));
#line 510
c_rt_lib0move(&___nl__11, c_rt_lib0array_mk(2, ___nl__11, ___nl__10));
#line 510
nl_die_arg(___nl__11);
#line 508
label_39:
#line 509
c_rt_lib0move(&___nl__12, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(234)));
#line 509
c_rt_lib0delete(module_checker_priv0check_val(___nl__12, ___ref___1));
#line 509
c_rt_lib0clear(&___nl__12);
#line 510
goto label_38;
#line 510
label_40:
#line 511
c_rt_lib0move(&___nl__12, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(234)));
#line 511
c_rt_lib0delete(module_checker_priv0check_lvalue(___nl__12, ___ref___1));
#line 511
c_rt_lib0clear(&___nl__12);
#line 512
goto label_38;
#line 512
label_38:
#line 512
c_rt_lib0clear(&___nl__10);
#line 512
c_rt_lib0clear(&___nl__11);
#line 513
c_rt_lib0move(&___nl__6, c_rt_lib0add_mod(___nl__6, ___nl__7));
#line 513
goto label_37;
#line 513
label_35:
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
#line 514
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(99)));
#line 514
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(76)));
#line 514
c_rt_lib0delete(module_checker_priv0add_fun_used(___nl__4, ___nl__5, ___ref___1));
#line 514
c_rt_lib0clear(&___nl__5);
#line 514
c_rt_lib0clear(&___nl__4);
#line 514
c_rt_lib0clear(&___nl__3);
#line 515
goto label_1;
#line 515
label_17:
#line 515
c_rt_lib0move(&___nl__3, c_rt_lib0priv_as(___nl__0, ___get_global_const(782)));
#line 516
c_rt_lib0delete(module_checker_priv0check_val(___nl__3, ___ref___1));
#line 516
c_rt_lib0clear(&___nl__3);
#line 517
goto label_1;
#line 517
label_18:
#line 517
c_rt_lib0move(&___nl__3, c_rt_lib0priv_as(___nl__0, ___get_global_const(783)));
#line 518
c_rt_lib0delete(module_checker_priv0check_val(___nl__3, ___ref___1));
#line 518
c_rt_lib0clear(&___nl__3);
#line 519
goto label_1;
#line 519
label_1:
#line 519
c_rt_lib0clear(&___nl__2);
#line 519
c_rt_lib0clear(&___nl__0);
#line 519
return NULL;
}

ImmT module_checker_priv0save_block(ImmT * ___ref___0) {
module_checker_priv0__const__init();
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
#line 522
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(707)));
#line 522
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(618)));
#line 522
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(2, ___get_global_const(707), ___nl__2, ___get_global_const(618), ___nl__3));
#line 522
c_rt_lib0clear(&___nl__2);
#line 522
c_rt_lib0clear(&___nl__3);
#line 522
return ___nl__1;
#line 522
c_rt_lib0clear(&___nl__1);
#line 522
return NULL;
}

ImmT module_checker_priv0load_block(ImmT * ___ref___0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__1);
module_checker_priv0__const__init();
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
#line 525
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(707)));
#line 525
c_rt_lib0copy(&___nl__3, ___nl__2);
#line 525
c_rt_lib0hash_set_value_dec(___ref___0, ___get_global_const(707), ___nl__3);
#line 525
c_rt_lib0clear(&___nl__2);
#line 525
c_rt_lib0clear(&___nl__3);
#line 526
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(618)));
#line 526
c_rt_lib0move(&___nl__2, hash0keys(___nl__3));
#line 526
c_rt_lib0clear(&___nl__3);
#line 527
c_rt_lib0move(&___nl__4,___get_global_const(1));
#line 527
c_rt_lib0move(&___nl__5,___get_global_const(2));
#line 527
c_rt_lib0move(&___nl__6, c_rt_lib0array_len(___nl__2));
#line 527
label_3:
#line 527
c_rt_lib0move(&___nl__7, c_rt_lib0ge(___nl__4, ___nl__6));
#line 527
if(c_rt_lib0check_true_native(___nl__7)){ goto label_1;}
#line 527
c_rt_lib0move(&___nl__3, c_rt_lib0array_get(___nl__2, ___nl__4));
#line 528
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(618)));
#line 528
c_rt_lib0move(&___nl__8, hash0has_key(___nl__9, ___nl__3));
#line 528
c_rt_lib0clear(&___nl__9);
#line 528
c_rt_lib0move(&___nl__8, c_rt_lib0not(___nl__8));
#line 528
c_rt_lib0move(&___nl__8, c_rt_lib0not(___nl__8));
#line 528
if(c_rt_lib0check_true_native(___nl__8)){ goto label_5;}
#line 529
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(618)));
#line 529
c_rt_lib0move(&___nl__9, hash0get_value(___nl__10, ___nl__3));
#line 529
c_rt_lib0clear(&___nl__10);
#line 530
c_rt_lib0move(&___nl__10,___get_global_const(618));
#line 530
c_rt_lib0move(&___nl__10, c_rt_lib0get_ref_hash(*___ref___0, ___nl__10));
#line 530
c_rt_lib0delete(hash0delete(&___nl__10, ___nl__3));
#line 530
c_rt_lib0move(&___nl__11,___get_global_const(618));
#line 530
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__11, ___nl__10));
#line 530
c_rt_lib0clear(&___nl__11);
#line 530
c_rt_lib0clear(&___nl__10);
#line 531
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__9, ___get_global_const(203)));
#line 531
c_rt_lib0move(&___nl__10, c_rt_lib0not(___nl__10));
#line 531
c_rt_lib0move(&___nl__11, c_rt_lib0not(___nl__10));
#line 531
if(c_rt_lib0check_true_native(___nl__11)){ goto label_8;}
#line 531
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__9, ___get_global_const(699)));
#line 531
c_rt_lib0move(&___nl__10, c_rt_lib0not(___nl__10));
#line 531
label_8:
#line 531
c_rt_lib0clear(&___nl__11);
#line 531
c_rt_lib0move(&___nl__10, c_rt_lib0not(___nl__10));
#line 531
if(c_rt_lib0check_true_native(___nl__10)){ goto label_7;}
#line 532
c_rt_lib0move(&___nl__11,___get_global_const(17));
#line 532
c_rt_lib0move(&___nl__11, c_rt_lib0get_ref_hash(*___ref___0, ___nl__11));
#line 532
c_rt_lib0move(&___nl__12,___get_global_const(793));
#line 532
c_rt_lib0move(&___nl__12, c_rt_lib0concat_add(___nl__12, ___nl__3));
#line 532
c_rt_lib0delete(module_checker_priv0add_warning(&___nl__11, ___nl__12));
#line 532
c_rt_lib0clear(&___nl__12);
#line 532
c_rt_lib0move(&___nl__12,___get_global_const(17));
#line 532
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__12, ___nl__11));
#line 532
c_rt_lib0clear(&___nl__12);
#line 532
c_rt_lib0clear(&___nl__11);
#line 533
goto label_7;
#line 533
label_7:
#line 533
c_rt_lib0clear(&___nl__10);
#line 533
c_rt_lib0clear(&___nl__9);
#line 534
goto label_5;
#line 534
label_5:
#line 534
c_rt_lib0clear(&___nl__8);
#line 535
c_rt_lib0move(&___nl__4, c_rt_lib0add_mod(___nl__4, ___nl__5));
#line 535
goto label_3;
#line 535
label_1:
#line 535
c_rt_lib0clear(&___nl__3);
#line 535
c_rt_lib0clear(&___nl__4);
#line 535
c_rt_lib0clear(&___nl__5);
#line 535
c_rt_lib0clear(&___nl__6);
#line 535
c_rt_lib0clear(&___nl__7);
#line 535
c_rt_lib0clear(&___nl__2);
#line 535
c_rt_lib0clear(&___nl__1);
#line 535
return NULL;
}


static ImmT ___const__[9];
static int ___const_init__ = 1;
void module_checker_priv0__const__init(){
if(___const_init__) {
___const_init__ = 0;
__const__f = &___const__[8];


for(int i=0;i<8;++i) ___const__[i] = NULL;
c_rt_lib0register_const(___const__, 8);
}}
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
