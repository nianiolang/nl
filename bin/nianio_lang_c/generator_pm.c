
/* (c) Atinea Sp z o. o.
 *  Stamp: nianio lang
 */
#include "c_rt_lib.h"
#include "c_global_const.h"
#include "generator_pm.h"
#include "array.h"
#include "dfile.h"
#include "string.h"
#include "nl.h"
#include "nlasm.h"
#include "boolean_t.h"
#include "ptd.h"
#include "string_utils.h"
#include "generator_pm.h"
#line 1 "generator_pm.nl"

static ImmT *__const__f = NULL;
ImmT generator_pm_priv0__const__sim(int __nr);
ImmT generator_pm_priv0__const__sing(int __nr);

ImmT generator_pm_priv0print(ImmT * ___ref___0,ImmT ___nl__1);
ImmT generator_pm_priv0print_imports(ImmT ___nl__0,ImmT * ___ref___1);
ImmT generator_pm_priv0print_functions(ImmT ___nl__0,ImmT * ___ref___1);
ImmT generator_pm_priv0print_function(ImmT ___nl__0,ImmT * ___ref___1);
ImmT generator_pm_priv0is_singleton_use_function(ImmT ___nl__0);
ImmT generator_pm_priv0print_function_access(ImmT ___nl__0,ImmT * ___ref___1);
ImmT generator_pm_priv0get_function_access(ImmT ___nl__0,ImmT ___nl__1);
ImmT generator_pm_priv0print_args_dollar(ImmT ___nl__0,ImmT * ___ref___1);
ImmT generator_pm_priv0move_args_to_register(ImmT * ___ref___0);
ImmT generator_pm_priv0move_register_to_ref_args(ImmT * ___ref___0);
ImmT generator_pm_priv0print_commands(ImmT ___nl__0,ImmT * ___ref___1);
ImmT generator_pm_priv0print_command(ImmT ___nl__0,ImmT * ___ref___1);
ImmT generator_pm_priv0print_call(ImmT ___nl__0,ImmT * ___ref___1);
ImmT generator_pm_priv0print_una_op(ImmT ___nl__0,ImmT * ___ref___1);
ImmT generator_pm_priv0print_bin_op(ImmT ___nl__0,ImmT * ___ref___1);
ImmT generator_pm_priv0print_set_at_idx(ImmT ___nl__0,ImmT * ___ref___1);
ImmT generator_pm_priv0print_set_val(ImmT ___nl__0,ImmT * ___ref___1);
ImmT generator_pm_priv0print_ov_mk(ImmT ___nl__0,ImmT * ___ref___1);
ImmT generator_pm_priv0print_register(ImmT ___nl__0,ImmT * ___ref___1);
ImmT generator_pm_priv0print_register_to_assign(ImmT ___nl__0,ImmT * ___ref___1);


ImmT generator_pm0fun_args_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "generator_pm0fun_args_t");
return generator_pm0fun_args_t();}
ImmT generator_pm0fun_args_t(){
return generator_pm_priv0__const__sing(0);}
ImmT generator_pm0fun_args_t0cal() {
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
#line 16
c_rt_lib0move(&___nl__3, ptd0none());
#line 16
c_rt_lib0move(&___nl__4, ptd0none());
#line 16
c_rt_lib0move(&___nl__2, c_rt_lib0hash_mk(2, ___get_global_const(198), ___nl__3, ___get_global_const(5), ___nl__4));
#line 16
c_rt_lib0clear(&___nl__3);
#line 16
c_rt_lib0clear(&___nl__4);
#line 16
c_rt_lib0move(&___nl__1, ptd0var(___nl__2));
#line 16
c_rt_lib0clear(&___nl__2);
#line 16
c_rt_lib0move(&___nl__0, ptd0arr(___nl__1));
#line 16
c_rt_lib0clear(&___nl__1);
#line 16
return ___nl__0;
#line 16
c_rt_lib0clear(&___nl__0);
#line 16
return NULL;
}

ImmT generator_pm0state_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "generator_pm0state_t");
return generator_pm0state_t();}
ImmT generator_pm0state_t(){
return generator_pm_priv0__const__sing(1);}
ImmT generator_pm0state_t0cal() {
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
#line 20
c_rt_lib0move(&___nl__2, ptd0sim());
#line 20
c_rt_lib0move(&___nl__3, ptd0sim());
#line 20
c_rt_lib0move(&___nl__4, c_rt_lib0func_new(generator_pm0fun_args_t0ptr, ___get_global_const(624), ___get_global_const(335)));
#line 20
c_rt_lib0move(&___nl__4, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__4));
#line 20
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(3, ___get_global_const(625), ___nl__2, ___get_global_const(186), ___nl__3, ___get_global_const(344), ___nl__4));
#line 20
c_rt_lib0clear(&___nl__2);
#line 20
c_rt_lib0clear(&___nl__3);
#line 20
c_rt_lib0clear(&___nl__4);
#line 20
c_rt_lib0move(&___nl__0, ptd0rec(___nl__1));
#line 20
c_rt_lib0clear(&___nl__1);
#line 20
return ___nl__0;
#line 20
c_rt_lib0clear(&___nl__0);
#line 20
return NULL;
}

ImmT generator_pm_priv0print(ImmT * ___ref___0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__1);
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
#line 24
c_rt_lib0move(&___nl__2,___get_global_const(625));
#line 24
c_rt_lib0move(&___nl__2, c_rt_lib0get_ref_hash(*___ref___0, ___nl__2));
#line 24
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__1));
#line 24
c_rt_lib0move(&___nl__3,___get_global_const(625));
#line 24
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__3, ___nl__2));
#line 24
c_rt_lib0clear(&___nl__3);
#line 24
c_rt_lib0clear(&___nl__2);
#line 24
c_rt_lib0clear(&___nl__1);
#line 24
return NULL;
}

ImmT generator_pm0generate0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "generator_pm0generate");
return generator_pm0generate(_tab[0]);}
ImmT generator_pm0generate(ImmT ___nl__0) {
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
#line 28
c_rt_lib0move(&___nl__2,___get_global_const(2));
#line 28
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(186)));
#line 28
c_rt_lib0move(&___nl__4, c_rt_lib0array_mk(0));
#line 28
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(3, ___get_global_const(625), ___nl__2, ___get_global_const(186), ___nl__3, ___get_global_const(344), ___nl__4));
#line 28
c_rt_lib0clear(&___nl__2);
#line 28
c_rt_lib0clear(&___nl__3);
#line 28
c_rt_lib0clear(&___nl__4);
#line 29
c_rt_lib0move(&___nl__2,___get_global_const(626));
#line 29
c_rt_lib0move(&___nl__3, string0lf());
#line 29
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__3));
#line 29
c_rt_lib0clear(&___nl__3);
#line 29
c_rt_lib0delete(generator_pm_priv0print(&___nl__1, ___nl__2));
#line 29
c_rt_lib0clear(&___nl__2);
#line 30
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(384)));
#line 30
c_rt_lib0delete(generator_pm_priv0print_imports(___nl__2, &___nl__1));
#line 30
c_rt_lib0clear(&___nl__2);
#line 31
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(92)));
#line 31
c_rt_lib0move(&___nl__4,___get_global_const(0));
#line 31
c_rt_lib0move(&___nl__5,___get_global_const(1));
#line 31
c_rt_lib0move(&___nl__6, c_rt_lib0array_len(___nl__2));
#line 31
label_20:
#line 31
c_rt_lib0move(&___nl__7, c_rt_lib0ge(___nl__4, ___nl__6));
#line 31
if(c_rt_lib0check_true_native(___nl__7)){ goto label_41;}
#line 31
c_rt_lib0move(&___nl__3, c_rt_lib0array_get(___nl__2, ___nl__4));
#line 32
c_rt_lib0move(&___nl__8,___get_global_const(627));
#line 32
c_rt_lib0delete(generator_pm_priv0print(&___nl__1, ___nl__8));
#line 32
c_rt_lib0clear(&___nl__8);
#line 33
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(182)));
#line 33
c_rt_lib0delete(generator_pm_priv0print_function_access(___nl__8, &___nl__1));
#line 33
c_rt_lib0clear(&___nl__8);
#line 34
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(93)));
#line 34
c_rt_lib0move(&___nl__9,___get_global_const(360));
#line 34
c_rt_lib0move(&___nl__8, c_rt_lib0concat_add(___nl__8, ___nl__9));
#line 34
c_rt_lib0clear(&___nl__9);
#line 34
c_rt_lib0move(&___nl__9, string0lf());
#line 34
c_rt_lib0move(&___nl__8, c_rt_lib0concat_add(___nl__8, ___nl__9));
#line 34
c_rt_lib0clear(&___nl__9);
#line 34
c_rt_lib0delete(generator_pm_priv0print(&___nl__1, ___nl__8));
#line 34
c_rt_lib0clear(&___nl__8);
#line 35
c_rt_lib0move(&___nl__4, c_rt_lib0add_mod(___nl__4, ___nl__5));
#line 35
goto label_20;
#line 35
label_41:
#line 35
c_rt_lib0clear(&___nl__2);
#line 35
c_rt_lib0clear(&___nl__3);
#line 35
c_rt_lib0clear(&___nl__4);
#line 35
c_rt_lib0clear(&___nl__5);
#line 35
c_rt_lib0clear(&___nl__6);
#line 35
c_rt_lib0clear(&___nl__7);
#line 36
c_rt_lib0move(&___nl__2, string0lf());
#line 36
c_rt_lib0move(&___nl__3,___get_global_const(628));
#line 36
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__3));
#line 36
c_rt_lib0clear(&___nl__3);
#line 36
c_rt_lib0move(&___nl__3, string0lf());
#line 36
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__3));
#line 36
c_rt_lib0clear(&___nl__3);
#line 36
c_rt_lib0delete(generator_pm_priv0print(&___nl__1, ___nl__2));
#line 36
c_rt_lib0clear(&___nl__2);
#line 37
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(92)));
#line 37
c_rt_lib0delete(generator_pm_priv0print_functions(___nl__2, &___nl__1));
#line 37
c_rt_lib0clear(&___nl__2);
#line 38
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(625)));
#line 38
c_rt_lib0clear(&___nl__0);
#line 38
c_rt_lib0clear(&___nl__1);
#line 38
return ___nl__2;
#line 38
c_rt_lib0clear(&___nl__2);
#line 38
c_rt_lib0clear(&___nl__1);
#line 38
c_rt_lib0clear(&___nl__0);
#line 38
return NULL;
}

ImmT generator_pm_priv0print_imports(ImmT ___nl__0,ImmT * ___ref___1) {
c_rt_lib0arg_val(___nl__0);
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
#line 42
c_rt_lib0move(&___nl__3,___get_global_const(0));
#line 42
c_rt_lib0move(&___nl__4,___get_global_const(1));
#line 42
c_rt_lib0move(&___nl__5, c_rt_lib0array_len(___nl__0));
#line 42
label_3:
#line 42
c_rt_lib0move(&___nl__6, c_rt_lib0ge(___nl__3, ___nl__5));
#line 42
if(c_rt_lib0check_true_native(___nl__6)){ goto label_19;}
#line 42
c_rt_lib0move(&___nl__2, c_rt_lib0array_get(___nl__0, ___nl__3));
#line 43
c_rt_lib0move(&___nl__7,___get_global_const(629));
#line 43
c_rt_lib0move(&___nl__7, c_rt_lib0concat_add(___nl__7, ___nl__2));
#line 43
c_rt_lib0move(&___nl__8,___get_global_const(360));
#line 43
c_rt_lib0move(&___nl__7, c_rt_lib0concat_add(___nl__7, ___nl__8));
#line 43
c_rt_lib0clear(&___nl__8);
#line 43
c_rt_lib0move(&___nl__8, string0lf());
#line 43
c_rt_lib0move(&___nl__7, c_rt_lib0concat_add(___nl__7, ___nl__8));
#line 43
c_rt_lib0clear(&___nl__8);
#line 43
c_rt_lib0delete(generator_pm_priv0print(___ref___1, ___nl__7));
#line 43
c_rt_lib0clear(&___nl__7);
#line 44
c_rt_lib0move(&___nl__3, c_rt_lib0add_mod(___nl__3, ___nl__4));
#line 44
goto label_3;
#line 44
label_19:
#line 44
c_rt_lib0clear(&___nl__2);
#line 44
c_rt_lib0clear(&___nl__3);
#line 44
c_rt_lib0clear(&___nl__4);
#line 44
c_rt_lib0clear(&___nl__5);
#line 44
c_rt_lib0clear(&___nl__6);
#line 44
c_rt_lib0clear(&___nl__0);
#line 44
return NULL;
}

ImmT generator_pm_priv0print_functions(ImmT ___nl__0,ImmT * ___ref___1) {
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
#line 48
c_rt_lib0move(&___nl__3,___get_global_const(0));
#line 48
c_rt_lib0move(&___nl__4,___get_global_const(1));
#line 48
c_rt_lib0move(&___nl__5, c_rt_lib0array_len(___nl__0));
#line 48
label_3:
#line 48
c_rt_lib0move(&___nl__6, c_rt_lib0ge(___nl__3, ___nl__5));
#line 48
if(c_rt_lib0check_true_native(___nl__6)){ goto label_101;}
#line 48
c_rt_lib0move(&___nl__2, c_rt_lib0array_get(___nl__0, ___nl__3));
#line 49
c_rt_lib0move(&___nl__7, generator_pm_priv0is_singleton_use_function(___nl__2));
#line 49
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 49
if(c_rt_lib0check_true_native(___nl__7)){ goto label_94;}
#line 50
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(93)));
#line 51
c_rt_lib0copy(&___nl__9, ___nl__2);
#line 52
c_rt_lib0move(&___nl__10,___get_global_const(630));
#line 52
c_rt_lib0move(&___nl__10, c_rt_lib0concat_add(___nl__10, ___nl__8));
#line 52
c_rt_lib0copy(&___nl__11, ___nl__10);
#line 52
c_rt_lib0hash_set_value_dec(&___nl__9, ___get_global_const(93), ___nl__11);
#line 52
c_rt_lib0clear(&___nl__10);
#line 52
c_rt_lib0clear(&___nl__11);
#line 53
c_rt_lib0delete(generator_pm_priv0print_function(___nl__9, ___ref___1));
#line 54
c_rt_lib0move(&___nl__11, c_rt_lib0hash_get_value_dec(___nl__9, ___get_global_const(182)));
#line 54
c_rt_lib0move(&___nl__12, c_rt_lib0hash_get_value_dec(*___ref___1, ___get_global_const(186)));
#line 54
c_rt_lib0move(&___nl__10, generator_pm_priv0get_function_access(___nl__11, ___nl__12));
#line 54
c_rt_lib0clear(&___nl__12);
#line 54
c_rt_lib0clear(&___nl__11);
#line 54
c_rt_lib0move(&___nl__11, c_rt_lib0hash_get_value_dec(___nl__9, ___get_global_const(93)));
#line 54
c_rt_lib0move(&___nl__10, c_rt_lib0concat_add(___nl__10, ___nl__11));
#line 54
c_rt_lib0clear(&___nl__11);
#line 55
c_rt_lib0move(&___nl__11, string0lf());
#line 55
c_rt_lib0move(&___nl__12,___get_global_const(631));
#line 55
c_rt_lib0move(&___nl__11, c_rt_lib0concat_add(___nl__11, ___nl__12));
#line 55
c_rt_lib0clear(&___nl__12);
#line 55
c_rt_lib0move(&___nl__11, c_rt_lib0concat_add(___nl__11, ___nl__8));
#line 55
c_rt_lib0move(&___nl__12,___get_global_const(360));
#line 55
c_rt_lib0move(&___nl__11, c_rt_lib0concat_add(___nl__11, ___nl__12));
#line 55
c_rt_lib0clear(&___nl__12);
#line 55
c_rt_lib0move(&___nl__12, string0lf());
#line 55
c_rt_lib0move(&___nl__11, c_rt_lib0concat_add(___nl__11, ___nl__12));
#line 55
c_rt_lib0clear(&___nl__12);
#line 55
c_rt_lib0delete(generator_pm_priv0print(___ref___1, ___nl__11));
#line 55
c_rt_lib0clear(&___nl__11);
#line 56
c_rt_lib0move(&___nl__11,___get_global_const(627));
#line 56
c_rt_lib0delete(generator_pm_priv0print(___ref___1, ___nl__11));
#line 56
c_rt_lib0clear(&___nl__11);
#line 57
c_rt_lib0move(&___nl__11, c_rt_lib0hash_get_value_dec(___nl__9, ___get_global_const(182)));
#line 57
c_rt_lib0delete(generator_pm_priv0print_function_access(___nl__11, ___ref___1));
#line 57
c_rt_lib0clear(&___nl__11);
#line 58
c_rt_lib0move(&___nl__11,___get_global_const(578));
#line 58
c_rt_lib0move(&___nl__11, c_rt_lib0concat_new(___nl__8, ___nl__11));
#line 58
c_rt_lib0move(&___nl__12, string0lf());
#line 58
c_rt_lib0move(&___nl__11, c_rt_lib0concat_add(___nl__11, ___nl__12));
#line 58
c_rt_lib0clear(&___nl__12);
#line 58
c_rt_lib0delete(generator_pm_priv0print(___ref___1, ___nl__11));
#line 58
c_rt_lib0clear(&___nl__11);
#line 59
c_rt_lib0move(&___nl__11,___get_global_const(632));
#line 59
c_rt_lib0move(&___nl__11, c_rt_lib0concat_add(___nl__11, ___nl__8));
#line 59
c_rt_lib0move(&___nl__12,___get_global_const(491));
#line 59
c_rt_lib0move(&___nl__11, c_rt_lib0concat_add(___nl__11, ___nl__12));
#line 59
c_rt_lib0clear(&___nl__12);
#line 59
c_rt_lib0move(&___nl__11, c_rt_lib0concat_add(___nl__11, ___nl__10));
#line 59
c_rt_lib0delete(generator_pm_priv0print(___ref___1, ___nl__11));
#line 59
c_rt_lib0clear(&___nl__11);
#line 60
c_rt_lib0move(&___nl__11,___get_global_const(633));
#line 60
c_rt_lib0move(&___nl__12,___get_global_const(634));
#line 60
c_rt_lib0move(&___nl__11, c_rt_lib0concat_add(___nl__11, ___nl__12));
#line 60
c_rt_lib0clear(&___nl__12);
#line 60
c_rt_lib0move(&___nl__11, c_rt_lib0concat_add(___nl__11, ___nl__8));
#line 60
c_rt_lib0move(&___nl__12,___get_global_const(360));
#line 60
c_rt_lib0move(&___nl__11, c_rt_lib0concat_add(___nl__11, ___nl__12));
#line 60
c_rt_lib0clear(&___nl__12);
#line 60
c_rt_lib0move(&___nl__12, string0lf());
#line 60
c_rt_lib0move(&___nl__11, c_rt_lib0concat_add(___nl__11, ___nl__12));
#line 60
c_rt_lib0clear(&___nl__12);
#line 60
c_rt_lib0delete(generator_pm_priv0print(___ref___1, ___nl__11));
#line 60
c_rt_lib0clear(&___nl__11);
#line 61
c_rt_lib0move(&___nl__11,___get_global_const(635));
#line 61
c_rt_lib0move(&___nl__11, c_rt_lib0concat_add(___nl__11, ___nl__8));
#line 61
c_rt_lib0move(&___nl__12,___get_global_const(360));
#line 61
c_rt_lib0move(&___nl__11, c_rt_lib0concat_add(___nl__11, ___nl__12));
#line 61
c_rt_lib0clear(&___nl__12);
#line 61
c_rt_lib0move(&___nl__12, string0lf());
#line 61
c_rt_lib0move(&___nl__11, c_rt_lib0concat_add(___nl__11, ___nl__12));
#line 61
c_rt_lib0clear(&___nl__12);
#line 61
c_rt_lib0delete(generator_pm_priv0print(___ref___1, ___nl__11));
#line 61
c_rt_lib0clear(&___nl__11);
#line 62
c_rt_lib0move(&___nl__11,___get_global_const(253));
#line 62
c_rt_lib0move(&___nl__12, string0lf());
#line 62
c_rt_lib0move(&___nl__11, c_rt_lib0concat_add(___nl__11, ___nl__12));
#line 62
c_rt_lib0clear(&___nl__12);
#line 62
c_rt_lib0delete(generator_pm_priv0print(___ref___1, ___nl__11));
#line 62
c_rt_lib0clear(&___nl__11);
#line 62
c_rt_lib0clear(&___nl__8);
#line 62
c_rt_lib0clear(&___nl__9);
#line 62
c_rt_lib0clear(&___nl__10);
#line 63
goto label_97;
#line 63
label_94:
#line 64
c_rt_lib0delete(generator_pm_priv0print_function(___nl__2, ___ref___1));
#line 65
goto label_97;
#line 65
label_97:
#line 65
c_rt_lib0clear(&___nl__7);
#line 66
c_rt_lib0move(&___nl__3, c_rt_lib0add_mod(___nl__3, ___nl__4));
#line 66
goto label_3;
#line 66
label_101:
#line 66
c_rt_lib0clear(&___nl__2);
#line 66
c_rt_lib0clear(&___nl__3);
#line 66
c_rt_lib0clear(&___nl__4);
#line 66
c_rt_lib0clear(&___nl__5);
#line 66
c_rt_lib0clear(&___nl__6);
#line 66
c_rt_lib0clear(&___nl__0);
#line 66
return NULL;
}

ImmT generator_pm_priv0print_function(ImmT ___nl__0,ImmT * ___ref___1) {
c_rt_lib0arg_val(___nl__0);
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
#line 70
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(188)));
#line 70
c_rt_lib0copy(&___nl__3, ___nl__2);
#line 70
c_rt_lib0hash_set_value_dec(___ref___1, ___get_global_const(344), ___nl__3);
#line 70
c_rt_lib0clear(&___nl__2);
#line 70
c_rt_lib0clear(&___nl__3);
#line 71
c_rt_lib0move(&___nl__2, string0lf());
#line 71
c_rt_lib0move(&___nl__3,___get_global_const(627));
#line 71
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__3));
#line 71
c_rt_lib0clear(&___nl__3);
#line 71
c_rt_lib0delete(generator_pm_priv0print(___ref___1, ___nl__2));
#line 71
c_rt_lib0clear(&___nl__2);
#line 72
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(182)));
#line 72
c_rt_lib0delete(generator_pm_priv0print_function_access(___nl__2, ___ref___1));
#line 72
c_rt_lib0clear(&___nl__2);
#line 73
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(93)));
#line 73
c_rt_lib0move(&___nl__3,___get_global_const(373));
#line 73
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__3));
#line 73
c_rt_lib0clear(&___nl__3);
#line 73
c_rt_lib0delete(generator_pm_priv0print(___ref___1, ___nl__2));
#line 73
c_rt_lib0clear(&___nl__2);
#line 74
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(188)));
#line 74
c_rt_lib0move(&___nl__2, array0len(___nl__3));
#line 74
c_rt_lib0clear(&___nl__3);
#line 74
c_rt_lib0delete(generator_pm_priv0print_args_dollar(___nl__2, ___ref___1));
#line 74
c_rt_lib0clear(&___nl__2);
#line 75
c_rt_lib0move(&___nl__2,___get_global_const(594));
#line 75
c_rt_lib0move(&___nl__3, string0lf());
#line 75
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__3));
#line 75
c_rt_lib0clear(&___nl__3);
#line 75
c_rt_lib0delete(generator_pm_priv0print(___ref___1, ___nl__2));
#line 75
c_rt_lib0clear(&___nl__2);
#line 76
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(189)));
#line 76
c_rt_lib0move(&___nl__3,___get_global_const(0));
#line 76
c_rt_lib0move(&___nl__4,___get_global_const(1));
#line 76
label_34:
#line 76
c_rt_lib0move(&___nl__5, c_rt_lib0ge(___nl__3, ___nl__2));
#line 76
if(c_rt_lib0check_true_native(___nl__5)){ goto label_46;}
#line 77
c_rt_lib0move(&___nl__6,___get_global_const(636));
#line 77
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__3));
#line 77
c_rt_lib0move(&___nl__7,___get_global_const(360));
#line 77
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__7));
#line 77
c_rt_lib0clear(&___nl__7);
#line 77
c_rt_lib0delete(generator_pm_priv0print(___ref___1, ___nl__6));
#line 77
c_rt_lib0clear(&___nl__6);
#line 78
c_rt_lib0move(&___nl__3, c_rt_lib0add_mod(___nl__3, ___nl__4));
#line 78
goto label_34;
#line 78
label_46:
#line 78
c_rt_lib0clear(&___nl__2);
#line 78
c_rt_lib0clear(&___nl__3);
#line 78
c_rt_lib0clear(&___nl__4);
#line 78
c_rt_lib0clear(&___nl__5);
#line 79
c_rt_lib0delete(generator_pm_priv0move_args_to_register(___ref___1));
#line 80
c_rt_lib0move(&___nl__2, string0lf());
#line 80
c_rt_lib0delete(generator_pm_priv0print(___ref___1, ___nl__2));
#line 80
c_rt_lib0clear(&___nl__2);
#line 81
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(187)));
#line 81
c_rt_lib0delete(generator_pm_priv0print_commands(___nl__2, ___ref___1));
#line 81
c_rt_lib0clear(&___nl__2);
#line 82
c_rt_lib0delete(generator_pm_priv0move_register_to_ref_args(___ref___1));
#line 83
c_rt_lib0move(&___nl__2,___get_global_const(253));
#line 83
c_rt_lib0move(&___nl__3, string0lf());
#line 83
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__3));
#line 83
c_rt_lib0clear(&___nl__3);
#line 83
c_rt_lib0delete(generator_pm_priv0print(___ref___1, ___nl__2));
#line 83
c_rt_lib0clear(&___nl__2);
#line 83
c_rt_lib0clear(&___nl__0);
#line 83
return NULL;
}

ImmT generator_pm_priv0is_singleton_use_function(ImmT ___nl__0) {
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
#line 87
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(188)));
#line 87
c_rt_lib0move(&___nl__1, array0len(___nl__2));
#line 87
c_rt_lib0clear(&___nl__2);
#line 87
c_rt_lib0move(&___nl__2,___get_global_const(0));
#line 87
c_rt_lib0move(&___nl__1, c_rt_lib0gt(___nl__1, ___nl__2));
#line 87
c_rt_lib0clear(&___nl__2);
#line 87
c_rt_lib0move(&___nl__1, c_rt_lib0not(___nl__1));
#line 87
if(c_rt_lib0check_true_native(___nl__1)){ goto label_14;}
#line 87
c_rt_lib0move(&___nl__2, c_rt_lib0get_false());
#line 87
c_rt_lib0clear(&___nl__0);
#line 87
c_rt_lib0clear(&___nl__1);
#line 87
return ___nl__2;
#line 87
c_rt_lib0clear(&___nl__2);
#line 87
goto label_14;
#line 87
label_14:
#line 87
c_rt_lib0clear(&___nl__1);
#line 88
c_rt_lib0move(&___nl__1, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(200)));
#line 88
c_rt_lib0move(&___nl__1, c_rt_lib0priv_is(___nl__1, ___get_global_const(168)));
#line 88
c_rt_lib0move(&___nl__1, c_rt_lib0not(___nl__1));
#line 88
if(c_rt_lib0check_true_native(___nl__1)){ goto label_26;}
#line 88
c_rt_lib0move(&___nl__2, c_rt_lib0get_true());
#line 88
c_rt_lib0clear(&___nl__0);
#line 88
c_rt_lib0clear(&___nl__1);
#line 88
return ___nl__2;
#line 88
c_rt_lib0clear(&___nl__2);
#line 88
goto label_26;
#line 88
label_26:
#line 88
c_rt_lib0clear(&___nl__1);
#line 89
c_rt_lib0move(&___nl__1, c_rt_lib0get_false());
#line 91
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(187)));
#line 91
c_rt_lib0move(&___nl__5,___get_global_const(0));
#line 91
c_rt_lib0move(&___nl__6,___get_global_const(1));
#line 91
c_rt_lib0move(&___nl__7, c_rt_lib0array_len(___nl__3));
#line 91
label_33:
#line 91
c_rt_lib0move(&___nl__8, c_rt_lib0ge(___nl__5, ___nl__7));
#line 91
if(c_rt_lib0check_true_native(___nl__8)){ goto label_195;}
#line 91
c_rt_lib0move(&___nl__4, c_rt_lib0array_get(___nl__3, ___nl__5));
#line 92
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(201)));
#line 93
c_rt_lib0copy(&___nl__10, ___nl__9);
#line 93
c_rt_lib0move(&___nl__10, c_rt_lib0priv_is(___nl__10, ___get_global_const(206)));
#line 93
c_rt_lib0move(&___nl__10, c_rt_lib0not(___nl__10));
#line 93
if(c_rt_lib0check_true_native(___nl__10)){ goto label_82;}
#line 94
c_rt_lib0copy(&___nl__11, ___nl__9);
#line 94
c_rt_lib0move(&___nl__11, c_rt_lib0priv_as(___nl__11, ___get_global_const(206)));
#line 95
c_rt_lib0move(&___nl__12, c_rt_lib0hash_get_value_dec(___nl__11, ___get_global_const(224)));
#line 95
c_rt_lib0move(&___nl__13,___get_global_const(429));
#line 95
c_rt_lib0move(&___nl__12, c_rt_lib0eq(___nl__12, ___nl__13));
#line 95
c_rt_lib0clear(&___nl__13);
#line 95
c_rt_lib0move(&___nl__12, c_rt_lib0not(___nl__12));
#line 95
c_rt_lib0move(&___nl__12, c_rt_lib0not(___nl__12));
#line 95
if(c_rt_lib0check_true_native(___nl__12)){ goto label_57;}
#line 95
c_rt_lib0clear(&___nl__9);
#line 95
c_rt_lib0clear(&___nl__10);
#line 95
c_rt_lib0clear(&___nl__11);
#line 95
c_rt_lib0clear(&___nl__12);
#line 95
goto label_192;
#line 95
goto label_57;
#line 95
label_57:
#line 95
c_rt_lib0clear(&___nl__12);
#line 96
c_rt_lib0move(&___nl__12, c_rt_lib0hash_get_value_dec(___nl__11, ___get_global_const(222)));
#line 96
c_rt_lib0move(&___nl__13,___get_global_const(338));
#line 96
c_rt_lib0move(&___nl__12, c_rt_lib0eq(___nl__12, ___nl__13));
#line 96
c_rt_lib0clear(&___nl__13);
#line 96
c_rt_lib0move(&___nl__12, c_rt_lib0not(___nl__12));
#line 96
c_rt_lib0move(&___nl__12, c_rt_lib0not(___nl__12));
#line 96
if(c_rt_lib0check_true_native(___nl__12)){ goto label_72;}
#line 96
c_rt_lib0clear(&___nl__9);
#line 96
c_rt_lib0clear(&___nl__10);
#line 96
c_rt_lib0clear(&___nl__11);
#line 96
c_rt_lib0clear(&___nl__12);
#line 96
goto label_192;
#line 96
goto label_72;
#line 96
label_72:
#line 96
c_rt_lib0clear(&___nl__12);
#line 97
c_rt_lib0move(&___nl__12, c_rt_lib0get_true());
#line 97
c_rt_lib0copy(&___nl__1, ___nl__12);
#line 97
c_rt_lib0clear(&___nl__12);
#line 98
c_rt_lib0move(&___nl__12, c_rt_lib0hash_get_value_dec(___nl__11, ___get_global_const(197)));
#line 98
c_rt_lib0copy(&___nl__2, ___nl__12);
#line 98
c_rt_lib0clear(&___nl__12);
#line 98
c_rt_lib0clear(&___nl__11);
#line 99
goto label_189;
#line 99
label_82:
#line 99
c_rt_lib0copy(&___nl__10, ___nl__9);
#line 99
c_rt_lib0move(&___nl__10, c_rt_lib0priv_is(___nl__10, ___get_global_const(90)));
#line 99
c_rt_lib0move(&___nl__10, c_rt_lib0not(___nl__10));
#line 99
if(c_rt_lib0check_true_native(___nl__10)){ goto label_154;}
#line 100
c_rt_lib0copy(&___nl__11, ___nl__1);
#line 100
c_rt_lib0move(&___nl__11, c_rt_lib0not(___nl__11));
#line 100
c_rt_lib0move(&___nl__11, c_rt_lib0not(___nl__11));
#line 100
if(c_rt_lib0check_true_native(___nl__11)){ goto label_107;}
#line 100
c_rt_lib0move(&___nl__12, c_rt_lib0get_false());
#line 100
c_rt_lib0clear(&___nl__0);
#line 100
c_rt_lib0clear(&___nl__1);
#line 100
c_rt_lib0clear(&___nl__2);
#line 100
c_rt_lib0clear(&___nl__3);
#line 100
c_rt_lib0clear(&___nl__4);
#line 100
c_rt_lib0clear(&___nl__5);
#line 100
c_rt_lib0clear(&___nl__6);
#line 100
c_rt_lib0clear(&___nl__7);
#line 100
c_rt_lib0clear(&___nl__8);
#line 100
c_rt_lib0clear(&___nl__9);
#line 100
c_rt_lib0clear(&___nl__10);
#line 100
c_rt_lib0clear(&___nl__11);
#line 100
return ___nl__12;
#line 100
c_rt_lib0clear(&___nl__12);
#line 100
goto label_107;
#line 100
label_107:
#line 100
c_rt_lib0clear(&___nl__11);
#line 101
c_rt_lib0copy(&___nl__11, ___nl__9);
#line 101
c_rt_lib0move(&___nl__11, c_rt_lib0priv_as(___nl__11, ___get_global_const(90)));
#line 102
c_rt_lib0copy(&___nl__12, ___nl__11);
#line 102
c_rt_lib0move(&___nl__12, c_rt_lib0priv_is(___nl__12, ___get_global_const(198)));
#line 102
c_rt_lib0move(&___nl__12, c_rt_lib0not(___nl__12));
#line 102
c_rt_lib0move(&___nl__12, c_rt_lib0not(___nl__12));
#line 102
if(c_rt_lib0check_true_native(___nl__12)){ goto label_133;}
#line 102
c_rt_lib0move(&___nl__13, c_rt_lib0get_false());
#line 102
c_rt_lib0clear(&___nl__0);
#line 102
c_rt_lib0clear(&___nl__1);
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
c_rt_lib0clear(&___nl__8);
#line 102
c_rt_lib0clear(&___nl__9);
#line 102
c_rt_lib0clear(&___nl__10);
#line 102
c_rt_lib0clear(&___nl__11);
#line 102
c_rt_lib0clear(&___nl__12);
#line 102
return ___nl__13;
#line 102
c_rt_lib0clear(&___nl__13);
#line 102
goto label_133;
#line 102
label_133:
#line 102
c_rt_lib0clear(&___nl__12);
#line 103
c_rt_lib0copy(&___nl__12, ___nl__11);
#line 103
c_rt_lib0move(&___nl__12, c_rt_lib0priv_as(___nl__12, ___get_global_const(198)));
#line 103
c_rt_lib0move(&___nl__12, c_rt_lib0eq(___nl__12, ___nl__2));
#line 103
c_rt_lib0clear(&___nl__0);
#line 103
c_rt_lib0clear(&___nl__1);
#line 103
c_rt_lib0clear(&___nl__2);
#line 103
c_rt_lib0clear(&___nl__3);
#line 103
c_rt_lib0clear(&___nl__4);
#line 103
c_rt_lib0clear(&___nl__5);
#line 103
c_rt_lib0clear(&___nl__6);
#line 103
c_rt_lib0clear(&___nl__7);
#line 103
c_rt_lib0clear(&___nl__8);
#line 103
c_rt_lib0clear(&___nl__9);
#line 103
c_rt_lib0clear(&___nl__10);
#line 103
c_rt_lib0clear(&___nl__11);
#line 103
return ___nl__12;
#line 103
c_rt_lib0clear(&___nl__12);
#line 103
c_rt_lib0clear(&___nl__11);
#line 104
goto label_189;
#line 104
label_154:
#line 104
c_rt_lib0copy(&___nl__10, ___nl__9);
#line 104
c_rt_lib0move(&___nl__10, c_rt_lib0priv_is(___nl__10, ___get_global_const(218)));
#line 104
c_rt_lib0move(&___nl__10, c_rt_lib0not(___nl__10));
#line 104
if(c_rt_lib0check_true_native(___nl__10)){ goto label_160;}
#line 105
goto label_189;
#line 105
label_160:
#line 105
c_rt_lib0copy(&___nl__10, ___nl__9);
#line 105
c_rt_lib0move(&___nl__10, c_rt_lib0priv_is(___nl__10, ___get_global_const(221)));
#line 105
c_rt_lib0move(&___nl__10, c_rt_lib0not(___nl__10));
#line 105
if(c_rt_lib0check_true_native(___nl__10)){ goto label_166;}
#line 106
goto label_189;
#line 106
label_166:
#line 107
c_rt_lib0copy(&___nl__11, ___nl__1);
#line 107
c_rt_lib0move(&___nl__11, c_rt_lib0not(___nl__11));
#line 107
if(c_rt_lib0check_true_native(___nl__11)){ goto label_186;}
#line 107
c_rt_lib0move(&___nl__12, c_rt_lib0get_false());
#line 107
c_rt_lib0clear(&___nl__0);
#line 107
c_rt_lib0clear(&___nl__1);
#line 107
c_rt_lib0clear(&___nl__2);
#line 107
c_rt_lib0clear(&___nl__3);
#line 107
c_rt_lib0clear(&___nl__4);
#line 107
c_rt_lib0clear(&___nl__5);
#line 107
c_rt_lib0clear(&___nl__6);
#line 107
c_rt_lib0clear(&___nl__7);
#line 107
c_rt_lib0clear(&___nl__8);
#line 107
c_rt_lib0clear(&___nl__9);
#line 107
c_rt_lib0clear(&___nl__10);
#line 107
c_rt_lib0clear(&___nl__11);
#line 107
return ___nl__12;
#line 107
c_rt_lib0clear(&___nl__12);
#line 107
goto label_186;
#line 107
label_186:
#line 107
c_rt_lib0clear(&___nl__11);
#line 108
goto label_189;
#line 108
label_189:
#line 108
c_rt_lib0clear(&___nl__10);
#line 108
c_rt_lib0clear(&___nl__9);
#line 108
label_192:
#line 109
c_rt_lib0move(&___nl__5, c_rt_lib0add_mod(___nl__5, ___nl__6));
#line 109
goto label_33;
#line 109
label_195:
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
#line 109
c_rt_lib0clear(&___nl__8);
#line 110
c_rt_lib0move(&___nl__3, c_rt_lib0get_false());
#line 110
c_rt_lib0clear(&___nl__0);
#line 110
c_rt_lib0clear(&___nl__1);
#line 110
c_rt_lib0clear(&___nl__2);
#line 110
return ___nl__3;
#line 110
c_rt_lib0clear(&___nl__3);
#line 110
c_rt_lib0clear(&___nl__1);
#line 110
c_rt_lib0clear(&___nl__2);
#line 110
c_rt_lib0clear(&___nl__0);
#line 110
return NULL;
}

ImmT generator_pm_priv0print_function_access(ImmT ___nl__0,ImmT * ___ref___1) {
c_rt_lib0arg_val(___nl__0);
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
#line 114
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(*___ref___1, ___get_global_const(186)));
#line 114
c_rt_lib0move(&___nl__2, generator_pm_priv0get_function_access(___nl__0, ___nl__3));
#line 114
c_rt_lib0clear(&___nl__3);
#line 114
c_rt_lib0delete(generator_pm_priv0print(___ref___1, ___nl__2));
#line 114
c_rt_lib0clear(&___nl__2);
#line 114
c_rt_lib0clear(&___nl__0);
#line 114
return NULL;
}

ImmT generator_pm_priv0get_function_access(ImmT ___nl__0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
#line 118
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__0, ___get_global_const(183)));
#line 118
if(c_rt_lib0check_true_native(___nl__2)){ goto label_7;}
#line 120
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__0, ___get_global_const(379)));
#line 120
if(c_rt_lib0check_true_native(___nl__2)){ goto label_16;}
#line 120
c_rt_lib0move(&___nl__2,___get_global_const(91));
#line 120
c_rt_lib0move(&___nl__2, c_rt_lib0array_mk(2, ___nl__2, ___nl__0));
#line 120
nl_die_arg(___nl__2);
#line 118
label_7:
#line 119
c_rt_lib0move(&___nl__3,___get_global_const(185));
#line 119
c_rt_lib0move(&___nl__3, c_rt_lib0concat_new(___nl__1, ___nl__3));
#line 119
c_rt_lib0clear(&___nl__0);
#line 119
c_rt_lib0clear(&___nl__1);
#line 119
c_rt_lib0clear(&___nl__2);
#line 119
return ___nl__3;
#line 119
c_rt_lib0clear(&___nl__3);
#line 120
goto label_25;
#line 120
label_16:
#line 121
c_rt_lib0move(&___nl__3,___get_global_const(184));
#line 121
c_rt_lib0move(&___nl__3, c_rt_lib0concat_new(___nl__1, ___nl__3));
#line 121
c_rt_lib0clear(&___nl__0);
#line 121
c_rt_lib0clear(&___nl__1);
#line 121
c_rt_lib0clear(&___nl__2);
#line 121
return ___nl__3;
#line 121
c_rt_lib0clear(&___nl__3);
#line 122
goto label_25;
#line 122
label_25:
#line 122
c_rt_lib0clear(&___nl__2);
#line 122
c_rt_lib0clear(&___nl__0);
#line 122
c_rt_lib0clear(&___nl__1);
#line 122
return NULL;
}

ImmT generator_pm_priv0print_args_dollar(ImmT ___nl__0,ImmT * ___ref___1) {
c_rt_lib0arg_val(___nl__0);
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
#line 126
c_rt_lib0move(&___nl__2,___get_global_const(0));
#line 126
c_rt_lib0move(&___nl__3,___get_global_const(1));
#line 126
label_2:
#line 126
c_rt_lib0move(&___nl__4, c_rt_lib0ge(___nl__2, ___nl__0));
#line 126
if(c_rt_lib0check_true_native(___nl__4)){ goto label_10;}
#line 127
c_rt_lib0move(&___nl__5,___get_global_const(265));
#line 127
c_rt_lib0delete(generator_pm_priv0print(___ref___1, ___nl__5));
#line 127
c_rt_lib0clear(&___nl__5);
#line 128
c_rt_lib0move(&___nl__2, c_rt_lib0add_mod(___nl__2, ___nl__3));
#line 128
goto label_2;
#line 128
label_10:
#line 128
c_rt_lib0clear(&___nl__2);
#line 128
c_rt_lib0clear(&___nl__3);
#line 128
c_rt_lib0clear(&___nl__4);
#line 128
c_rt_lib0clear(&___nl__0);
#line 128
return NULL;
}

ImmT generator_pm_priv0move_args_to_register(ImmT * ___ref___0) {
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
#line 132
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(344)));
#line 132
c_rt_lib0move(&___nl__1, array0len(___nl__2));
#line 132
c_rt_lib0clear(&___nl__2);
#line 132
c_rt_lib0move(&___nl__2,___get_global_const(0));
#line 132
c_rt_lib0move(&___nl__3,___get_global_const(1));
#line 132
label_5:
#line 132
c_rt_lib0move(&___nl__4, c_rt_lib0ge(___nl__2, ___nl__1));
#line 132
if(c_rt_lib0check_true_native(___nl__4)){ goto label_48;}
#line 133
c_rt_lib0move(&___nl__5,___get_global_const(637));
#line 133
c_rt_lib0move(&___nl__5, c_rt_lib0concat_add(___nl__5, ___nl__2));
#line 133
c_rt_lib0move(&___nl__6,___get_global_const(638));
#line 133
c_rt_lib0move(&___nl__5, c_rt_lib0concat_add(___nl__5, ___nl__6));
#line 133
c_rt_lib0clear(&___nl__6);
#line 133
c_rt_lib0move(&___nl__5, c_rt_lib0concat_add(___nl__5, ___nl__2));
#line 133
c_rt_lib0move(&___nl__6,___get_global_const(639));
#line 133
c_rt_lib0move(&___nl__5, c_rt_lib0concat_add(___nl__5, ___nl__6));
#line 133
c_rt_lib0clear(&___nl__6);
#line 133
c_rt_lib0delete(generator_pm_priv0print(___ref___0, ___nl__5));
#line 133
c_rt_lib0clear(&___nl__5);
#line 134
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(344)));
#line 134
c_rt_lib0move(&___nl__5, c_rt_lib0array_get(___nl__5, ___nl__2));
#line 134
c_rt_lib0move(&___nl__6, c_rt_lib0priv_is(___nl__5, ___get_global_const(198)));
#line 134
if(c_rt_lib0check_true_native(___nl__6)){ goto label_28;}
#line 135
c_rt_lib0move(&___nl__6, c_rt_lib0priv_is(___nl__5, ___get_global_const(5)));
#line 135
if(c_rt_lib0check_true_native(___nl__6)){ goto label_30;}
#line 135
c_rt_lib0move(&___nl__6,___get_global_const(91));
#line 135
c_rt_lib0move(&___nl__6, c_rt_lib0array_mk(2, ___nl__6, ___nl__5));
#line 135
nl_die_arg(___nl__6);
#line 134
label_28:
#line 135
goto label_43;
#line 135
label_30:
#line 136
c_rt_lib0move(&___nl__7,___get_global_const(640));
#line 136
c_rt_lib0move(&___nl__7, c_rt_lib0concat_add(___nl__7, ___nl__2));
#line 136
c_rt_lib0move(&___nl__8,___get_global_const(641));
#line 136
c_rt_lib0move(&___nl__7, c_rt_lib0concat_add(___nl__7, ___nl__8));
#line 136
c_rt_lib0clear(&___nl__8);
#line 136
c_rt_lib0move(&___nl__7, c_rt_lib0concat_add(___nl__7, ___nl__2));
#line 136
c_rt_lib0move(&___nl__8,___get_global_const(642));
#line 136
c_rt_lib0move(&___nl__7, c_rt_lib0concat_add(___nl__7, ___nl__8));
#line 136
c_rt_lib0clear(&___nl__8);
#line 136
c_rt_lib0delete(generator_pm_priv0print(___ref___0, ___nl__7));
#line 136
c_rt_lib0clear(&___nl__7);
#line 137
goto label_43;
#line 137
label_43:
#line 137
c_rt_lib0clear(&___nl__5);
#line 137
c_rt_lib0clear(&___nl__6);
#line 138
c_rt_lib0move(&___nl__2, c_rt_lib0add_mod(___nl__2, ___nl__3));
#line 138
goto label_5;
#line 138
label_48:
#line 138
c_rt_lib0clear(&___nl__1);
#line 138
c_rt_lib0clear(&___nl__2);
#line 138
c_rt_lib0clear(&___nl__3);
#line 138
c_rt_lib0clear(&___nl__4);
#line 138
return NULL;
}

ImmT generator_pm_priv0move_register_to_ref_args(ImmT * ___ref___0) {
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
#line 142
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(344)));
#line 142
c_rt_lib0move(&___nl__1, array0len(___nl__2));
#line 142
c_rt_lib0clear(&___nl__2);
#line 142
c_rt_lib0move(&___nl__2,___get_global_const(0));
#line 142
c_rt_lib0move(&___nl__3,___get_global_const(1));
#line 142
label_5:
#line 142
c_rt_lib0move(&___nl__4, c_rt_lib0ge(___nl__2, ___nl__1));
#line 142
if(c_rt_lib0check_true_native(___nl__4)){ goto label_37;}
#line 143
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(344)));
#line 143
c_rt_lib0move(&___nl__5, c_rt_lib0array_get(___nl__5, ___nl__2));
#line 143
c_rt_lib0move(&___nl__6, c_rt_lib0priv_is(___nl__5, ___get_global_const(198)));
#line 143
if(c_rt_lib0check_true_native(___nl__6)){ goto label_17;}
#line 144
c_rt_lib0move(&___nl__6, c_rt_lib0priv_is(___nl__5, ___get_global_const(5)));
#line 144
if(c_rt_lib0check_true_native(___nl__6)){ goto label_19;}
#line 144
c_rt_lib0move(&___nl__6,___get_global_const(91));
#line 144
c_rt_lib0move(&___nl__6, c_rt_lib0array_mk(2, ___nl__6, ___nl__5));
#line 144
nl_die_arg(___nl__6);
#line 143
label_17:
#line 144
goto label_32;
#line 144
label_19:
#line 145
c_rt_lib0move(&___nl__7,___get_global_const(643));
#line 145
c_rt_lib0move(&___nl__7, c_rt_lib0concat_add(___nl__7, ___nl__2));
#line 145
c_rt_lib0move(&___nl__8,___get_global_const(644));
#line 145
c_rt_lib0move(&___nl__7, c_rt_lib0concat_add(___nl__7, ___nl__8));
#line 145
c_rt_lib0clear(&___nl__8);
#line 145
c_rt_lib0move(&___nl__7, c_rt_lib0concat_add(___nl__7, ___nl__2));
#line 145
c_rt_lib0move(&___nl__8,___get_global_const(360));
#line 145
c_rt_lib0move(&___nl__7, c_rt_lib0concat_add(___nl__7, ___nl__8));
#line 145
c_rt_lib0clear(&___nl__8);
#line 145
c_rt_lib0delete(generator_pm_priv0print(___ref___0, ___nl__7));
#line 145
c_rt_lib0clear(&___nl__7);
#line 146
goto label_32;
#line 146
label_32:
#line 146
c_rt_lib0clear(&___nl__5);
#line 146
c_rt_lib0clear(&___nl__6);
#line 147
c_rt_lib0move(&___nl__2, c_rt_lib0add_mod(___nl__2, ___nl__3));
#line 147
goto label_5;
#line 147
label_37:
#line 147
c_rt_lib0clear(&___nl__1);
#line 147
c_rt_lib0clear(&___nl__2);
#line 147
c_rt_lib0clear(&___nl__3);
#line 147
c_rt_lib0clear(&___nl__4);
#line 147
return NULL;
}

ImmT generator_pm_priv0print_commands(ImmT ___nl__0,ImmT * ___ref___1) {
c_rt_lib0arg_val(___nl__0);
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
#line 151
c_rt_lib0move(&___nl__3,___get_global_const(0));
#line 151
c_rt_lib0move(&___nl__4,___get_global_const(1));
#line 151
c_rt_lib0move(&___nl__5, c_rt_lib0array_len(___nl__0));
#line 151
label_3:
#line 151
c_rt_lib0move(&___nl__6, c_rt_lib0ge(___nl__3, ___nl__5));
#line 151
if(c_rt_lib0check_true_native(___nl__6)){ goto label_10;}
#line 151
c_rt_lib0move(&___nl__2, c_rt_lib0array_get(___nl__0, ___nl__3));
#line 152
c_rt_lib0delete(generator_pm_priv0print_command(___nl__2, ___ref___1));
#line 153
c_rt_lib0move(&___nl__3, c_rt_lib0add_mod(___nl__3, ___nl__4));
#line 153
goto label_3;
#line 153
label_10:
#line 153
c_rt_lib0clear(&___nl__2);
#line 153
c_rt_lib0clear(&___nl__3);
#line 153
c_rt_lib0clear(&___nl__4);
#line 153
c_rt_lib0clear(&___nl__5);
#line 153
c_rt_lib0clear(&___nl__6);
#line 153
c_rt_lib0clear(&___nl__0);
#line 153
return NULL;
}

ImmT generator_pm_priv0print_command(ImmT ___nl__0,ImmT * ___ref___1) {
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
#line 157
c_rt_lib0move(&___nl__2,___get_global_const(438));
#line 157
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(195)));
#line 157
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(439)));
#line 157
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(440)));
#line 157
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(134)));
#line 157
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__3));
#line 157
c_rt_lib0clear(&___nl__3);
#line 157
c_rt_lib0move(&___nl__3, string0lf());
#line 157
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__3));
#line 157
c_rt_lib0clear(&___nl__3);
#line 157
c_rt_lib0delete(generator_pm_priv0print(___ref___1, ___nl__2));
#line 157
c_rt_lib0clear(&___nl__2);
#line 158
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(201)));
#line 158
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(204)));
#line 158
if(c_rt_lib0check_true_native(___nl__3)){ goto label_58;}
#line 170
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(205)));
#line 170
if(c_rt_lib0check_true_native(___nl__3)){ goto label_104;}
#line 180
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(206)));
#line 180
if(c_rt_lib0check_true_native(___nl__3)){ goto label_146;}
#line 182
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(88)));
#line 182
if(c_rt_lib0check_true_native(___nl__3)){ goto label_151;}
#line 185
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(207)));
#line 185
if(c_rt_lib0check_true_native(___nl__3)){ goto label_170;}
#line 187
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(208)));
#line 187
if(c_rt_lib0check_true_native(___nl__3)){ goto label_175;}
#line 189
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(209)));
#line 189
if(c_rt_lib0check_true_native(___nl__3)){ goto label_180;}
#line 194
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(210)));
#line 194
if(c_rt_lib0check_true_native(___nl__3)){ goto label_202;}
#line 199
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(90)));
#line 199
if(c_rt_lib0check_true_native(___nl__3)){ goto label_224;}
#line 208
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(217)));
#line 208
if(c_rt_lib0check_true_native(___nl__3)){ goto label_254;}
#line 212
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(211)));
#line 212
if(c_rt_lib0check_true_native(___nl__3)){ goto label_265;}
#line 216
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(199)));
#line 216
if(c_rt_lib0check_true_native(___nl__3)){ goto label_278;}
#line 223
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(212)));
#line 223
if(c_rt_lib0check_true_native(___nl__3)){ goto label_330;}
#line 229
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(213)));
#line 229
if(c_rt_lib0check_true_native(___nl__3)){ goto label_349;}
#line 231
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(214)));
#line 231
if(c_rt_lib0check_true_native(___nl__3)){ goto label_354;}
#line 235
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(215)));
#line 235
if(c_rt_lib0check_true_native(___nl__3)){ goto label_373;}
#line 237
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(216)));
#line 237
if(c_rt_lib0check_true_native(___nl__3)){ goto label_378;}
#line 239
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(218)));
#line 239
if(c_rt_lib0check_true_native(___nl__3)){ goto label_383;}
#line 241
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(219)));
#line 241
if(c_rt_lib0check_true_native(___nl__3)){ goto label_394;}
#line 247
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(220)));
#line 247
if(c_rt_lib0check_true_native(___nl__3)){ goto label_419;}
#line 249
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(221)));
#line 249
if(c_rt_lib0check_true_native(___nl__3)){ goto label_430;}
#line 249
c_rt_lib0move(&___nl__3,___get_global_const(91));
#line 249
c_rt_lib0move(&___nl__3, c_rt_lib0array_mk(2, ___nl__3, ___nl__2));
#line 249
nl_die_arg(___nl__3);
#line 158
label_58:
#line 158
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(204)));
#line 159
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(197)));
#line 159
c_rt_lib0delete(generator_pm_priv0print_register_to_assign(___nl__5, ___ref___1));
#line 159
c_rt_lib0clear(&___nl__5);
#line 160
c_rt_lib0move(&___nl__5,___get_global_const(258));
#line 160
c_rt_lib0delete(generator_pm_priv0print(___ref___1, ___nl__5));
#line 160
c_rt_lib0clear(&___nl__5);
#line 161
c_rt_lib0move(&___nl__5,___get_global_const(0));
#line 162
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(43)));
#line 162
c_rt_lib0move(&___nl__8,___get_global_const(0));
#line 162
c_rt_lib0move(&___nl__9,___get_global_const(1));
#line 162
c_rt_lib0move(&___nl__10, c_rt_lib0array_len(___nl__6));
#line 162
label_71:
#line 162
c_rt_lib0move(&___nl__11, c_rt_lib0ge(___nl__8, ___nl__10));
#line 162
if(c_rt_lib0check_true_native(___nl__11)){ goto label_91;}
#line 162
c_rt_lib0move(&___nl__7, c_rt_lib0array_get(___nl__6, ___nl__8));
#line 163
c_rt_lib0move(&___nl__12,___get_global_const(0));
#line 163
c_rt_lib0move(&___nl__12, c_rt_lib0gt(___nl__5, ___nl__12));
#line 163
c_rt_lib0move(&___nl__12, c_rt_lib0not(___nl__12));
#line 163
if(c_rt_lib0check_true_native(___nl__12)){ goto label_83;}
#line 164
c_rt_lib0move(&___nl__13,___get_global_const(256));
#line 164
c_rt_lib0delete(generator_pm_priv0print(___ref___1, ___nl__13));
#line 164
c_rt_lib0clear(&___nl__13);
#line 165
goto label_83;
#line 165
label_83:
#line 165
c_rt_lib0clear(&___nl__12);
#line 166
c_rt_lib0delete(generator_pm_priv0print_register(___nl__7, ___ref___1));
#line 167
c_rt_lib0move(&___nl__12,___get_global_const(1));
#line 167
c_rt_lib0move(&___nl__5, c_rt_lib0add_mod(___nl__5, ___nl__12));
#line 167
c_rt_lib0clear(&___nl__12);
#line 168
c_rt_lib0move(&___nl__8, c_rt_lib0add_mod(___nl__8, ___nl__9));
#line 168
goto label_71;
#line 168
label_91:
#line 168
c_rt_lib0clear(&___nl__6);
#line 168
c_rt_lib0clear(&___nl__7);
#line 168
c_rt_lib0clear(&___nl__8);
#line 168
c_rt_lib0clear(&___nl__9);
#line 168
c_rt_lib0clear(&___nl__10);
#line 168
c_rt_lib0clear(&___nl__11);
#line 169
c_rt_lib0move(&___nl__6,___get_global_const(639));
#line 169
c_rt_lib0delete(generator_pm_priv0print(___ref___1, ___nl__6));
#line 169
c_rt_lib0clear(&___nl__6);
#line 169
c_rt_lib0clear(&___nl__5);
#line 169
c_rt_lib0clear(&___nl__4);
#line 170
goto label_441;
#line 170
label_104:
#line 170
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(205)));
#line 171
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(197)));
#line 171
c_rt_lib0delete(generator_pm_priv0print_register_to_assign(___nl__5, ___ref___1));
#line 171
c_rt_lib0clear(&___nl__5);
#line 172
c_rt_lib0move(&___nl__5,___get_global_const(252));
#line 172
c_rt_lib0delete(generator_pm_priv0print(___ref___1, ___nl__5));
#line 172
c_rt_lib0clear(&___nl__5);
#line 173
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(43)));
#line 173
c_rt_lib0move(&___nl__7,___get_global_const(0));
#line 173
c_rt_lib0move(&___nl__8,___get_global_const(1));
#line 173
c_rt_lib0move(&___nl__9, c_rt_lib0array_len(___nl__5));
#line 173
label_116:
#line 173
c_rt_lib0move(&___nl__10, c_rt_lib0ge(___nl__7, ___nl__9));
#line 173
if(c_rt_lib0check_true_native(___nl__10)){ goto label_134;}
#line 173
c_rt_lib0move(&___nl__6, c_rt_lib0array_get(___nl__5, ___nl__7));
#line 174
c_rt_lib0move(&___nl__11, c_rt_lib0hash_get_value_dec(___nl__6, ___get_global_const(329)));
#line 174
c_rt_lib0delete(generator_pm_priv0print(___ref___1, ___nl__11));
#line 174
c_rt_lib0clear(&___nl__11);
#line 175
c_rt_lib0move(&___nl__11,___get_global_const(270));
#line 175
c_rt_lib0delete(generator_pm_priv0print(___ref___1, ___nl__11));
#line 175
c_rt_lib0clear(&___nl__11);
#line 176
c_rt_lib0move(&___nl__11, c_rt_lib0hash_get_value_dec(___nl__6, ___get_global_const(198)));
#line 176
c_rt_lib0delete(generator_pm_priv0print_register(___nl__11, ___ref___1));
#line 176
c_rt_lib0clear(&___nl__11);
#line 177
c_rt_lib0move(&___nl__11,___get_global_const(256));
#line 177
c_rt_lib0delete(generator_pm_priv0print(___ref___1, ___nl__11));
#line 177
c_rt_lib0clear(&___nl__11);
#line 178
c_rt_lib0move(&___nl__7, c_rt_lib0add_mod(___nl__7, ___nl__8));
#line 178
goto label_116;
#line 178
label_134:
#line 178
c_rt_lib0clear(&___nl__5);
#line 178
c_rt_lib0clear(&___nl__6);
#line 178
c_rt_lib0clear(&___nl__7);
#line 178
c_rt_lib0clear(&___nl__8);
#line 178
c_rt_lib0clear(&___nl__9);
#line 178
c_rt_lib0clear(&___nl__10);
#line 179
c_rt_lib0move(&___nl__5,___get_global_const(645));
#line 179
c_rt_lib0delete(generator_pm_priv0print(___ref___1, ___nl__5));
#line 179
c_rt_lib0clear(&___nl__5);
#line 179
c_rt_lib0clear(&___nl__4);
#line 180
goto label_441;
#line 180
label_146:
#line 180
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(206)));
#line 181
c_rt_lib0delete(generator_pm_priv0print_call(___nl__4, ___ref___1));
#line 181
c_rt_lib0clear(&___nl__4);
#line 182
goto label_441;
#line 182
label_151:
#line 182
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(88)));
#line 183
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(197)));
#line 183
c_rt_lib0delete(generator_pm_priv0print_register_to_assign(___nl__5, ___ref___1));
#line 183
c_rt_lib0clear(&___nl__5);
#line 184
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(132)));
#line 184
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(93)));
#line 184
c_rt_lib0move(&___nl__6, c_rt_lib0hash_mk(2, ___get_global_const(132), ___nl__7, ___get_global_const(93), ___nl__8));
#line 184
c_rt_lib0clear(&___nl__7);
#line 184
c_rt_lib0clear(&___nl__8);
#line 184
c_rt_lib0move(&___nl__5, dfile0ssave(___nl__6));
#line 184
c_rt_lib0clear(&___nl__6);
#line 184
c_rt_lib0move(&___nl__6,___get_global_const(360));
#line 184
c_rt_lib0move(&___nl__5, c_rt_lib0concat_add(___nl__5, ___nl__6));
#line 184
c_rt_lib0clear(&___nl__6);
#line 184
c_rt_lib0delete(generator_pm_priv0print(___ref___1, ___nl__5));
#line 184
c_rt_lib0clear(&___nl__5);
#line 184
c_rt_lib0clear(&___nl__4);
#line 185
goto label_441;
#line 185
label_170:
#line 185
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(207)));
#line 186
c_rt_lib0delete(generator_pm_priv0print_una_op(___nl__4, ___ref___1));
#line 186
c_rt_lib0clear(&___nl__4);
#line 187
goto label_441;
#line 187
label_175:
#line 187
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(208)));
#line 188
c_rt_lib0delete(generator_pm_priv0print_bin_op(___nl__4, ___ref___1));
#line 188
c_rt_lib0clear(&___nl__4);
#line 189
goto label_441;
#line 189
label_180:
#line 189
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(209)));
#line 190
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(197)));
#line 190
c_rt_lib0delete(generator_pm_priv0print_register_to_assign(___nl__5, ___ref___1));
#line 190
c_rt_lib0clear(&___nl__5);
#line 191
c_rt_lib0move(&___nl__5,___get_global_const(646));
#line 191
c_rt_lib0delete(generator_pm_priv0print(___ref___1, ___nl__5));
#line 191
c_rt_lib0clear(&___nl__5);
#line 192
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(43)));
#line 192
c_rt_lib0delete(generator_pm_priv0print_register(___nl__5, ___ref___1));
#line 192
c_rt_lib0clear(&___nl__5);
#line 193
c_rt_lib0move(&___nl__5,___get_global_const(647));
#line 193
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(63)));
#line 193
c_rt_lib0move(&___nl__5, c_rt_lib0concat_add(___nl__5, ___nl__6));
#line 193
c_rt_lib0clear(&___nl__6);
#line 193
c_rt_lib0move(&___nl__6,___get_global_const(648));
#line 193
c_rt_lib0move(&___nl__5, c_rt_lib0concat_add(___nl__5, ___nl__6));
#line 193
c_rt_lib0clear(&___nl__6);
#line 193
c_rt_lib0delete(generator_pm_priv0print(___ref___1, ___nl__5));
#line 193
c_rt_lib0clear(&___nl__5);
#line 193
c_rt_lib0clear(&___nl__4);
#line 194
goto label_441;
#line 194
label_202:
#line 194
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(210)));
#line 195
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(197)));
#line 195
c_rt_lib0delete(generator_pm_priv0print_register_to_assign(___nl__5, ___ref___1));
#line 195
c_rt_lib0clear(&___nl__5);
#line 196
c_rt_lib0move(&___nl__5,___get_global_const(649));
#line 196
c_rt_lib0delete(generator_pm_priv0print(___ref___1, ___nl__5));
#line 196
c_rt_lib0clear(&___nl__5);
#line 197
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(43)));
#line 197
c_rt_lib0delete(generator_pm_priv0print_register(___nl__5, ___ref___1));
#line 197
c_rt_lib0clear(&___nl__5);
#line 198
c_rt_lib0move(&___nl__5,___get_global_const(647));
#line 198
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(63)));
#line 198
c_rt_lib0move(&___nl__5, c_rt_lib0concat_add(___nl__5, ___nl__6));
#line 198
c_rt_lib0clear(&___nl__6);
#line 198
c_rt_lib0move(&___nl__6,___get_global_const(648));
#line 198
c_rt_lib0move(&___nl__5, c_rt_lib0concat_add(___nl__5, ___nl__6));
#line 198
c_rt_lib0clear(&___nl__6);
#line 198
c_rt_lib0delete(generator_pm_priv0print(___ref___1, ___nl__5));
#line 198
c_rt_lib0clear(&___nl__5);
#line 198
c_rt_lib0clear(&___nl__4);
#line 199
goto label_441;
#line 199
label_224:
#line 199
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(90)));
#line 200
c_rt_lib0delete(generator_pm_priv0move_register_to_ref_args(___ref___1));
#line 201
c_rt_lib0move(&___nl__5, c_rt_lib0priv_is(___nl__4, ___get_global_const(198)));
#line 201
if(c_rt_lib0check_true_native(___nl__5)){ goto label_234;}
#line 205
c_rt_lib0move(&___nl__5, c_rt_lib0priv_is(___nl__4, ___get_global_const(288)));
#line 205
if(c_rt_lib0check_true_native(___nl__5)){ goto label_245;}
#line 205
c_rt_lib0move(&___nl__5,___get_global_const(91));
#line 205
c_rt_lib0move(&___nl__5, c_rt_lib0array_mk(2, ___nl__5, ___nl__4));
#line 205
nl_die_arg(___nl__5);
#line 201
label_234:
#line 201
c_rt_lib0move(&___nl__6, c_rt_lib0priv_as(___nl__4, ___get_global_const(198)));
#line 202
c_rt_lib0move(&___nl__7,___get_global_const(394));
#line 202
c_rt_lib0delete(generator_pm_priv0print(___ref___1, ___nl__7));
#line 202
c_rt_lib0clear(&___nl__7);
#line 203
c_rt_lib0delete(generator_pm_priv0print_register(___nl__6, ___ref___1));
#line 204
c_rt_lib0move(&___nl__7,___get_global_const(360));
#line 204
c_rt_lib0delete(generator_pm_priv0print(___ref___1, ___nl__7));
#line 204
c_rt_lib0clear(&___nl__7);
#line 204
c_rt_lib0clear(&___nl__6);
#line 205
goto label_250;
#line 205
label_245:
#line 206
c_rt_lib0move(&___nl__6,___get_global_const(650));
#line 206
c_rt_lib0delete(generator_pm_priv0print(___ref___1, ___nl__6));
#line 206
c_rt_lib0clear(&___nl__6);
#line 207
goto label_250;
#line 207
label_250:
#line 207
c_rt_lib0clear(&___nl__5);
#line 207
c_rt_lib0clear(&___nl__4);
#line 208
goto label_441;
#line 208
label_254:
#line 208
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(217)));
#line 209
c_rt_lib0move(&___nl__5,___get_global_const(651));
#line 209
c_rt_lib0delete(generator_pm_priv0print(___ref___1, ___nl__5));
#line 209
c_rt_lib0clear(&___nl__5);
#line 210
c_rt_lib0delete(generator_pm_priv0print_register(___nl__4, ___ref___1));
#line 211
c_rt_lib0move(&___nl__5,___get_global_const(586));
#line 211
c_rt_lib0delete(generator_pm_priv0print(___ref___1, ___nl__5));
#line 211
c_rt_lib0clear(&___nl__5);
#line 211
c_rt_lib0clear(&___nl__4);
#line 212
goto label_441;
#line 212
label_265:
#line 212
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(211)));
#line 213
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(197)));
#line 213
c_rt_lib0delete(generator_pm_priv0print_register_to_assign(___nl__5, ___ref___1));
#line 213
c_rt_lib0clear(&___nl__5);
#line 214
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(43)));
#line 214
c_rt_lib0delete(generator_pm_priv0print_register(___nl__5, ___ref___1));
#line 214
c_rt_lib0clear(&___nl__5);
#line 215
c_rt_lib0move(&___nl__5,___get_global_const(360));
#line 215
c_rt_lib0delete(generator_pm_priv0print(___ref___1, ___nl__5));
#line 215
c_rt_lib0clear(&___nl__5);
#line 215
c_rt_lib0clear(&___nl__4);
#line 216
goto label_441;
#line 216
label_278:
#line 216
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(199)));
#line 217
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(197)));
#line 217
c_rt_lib0delete(generator_pm_priv0print_register_to_assign(___nl__5, ___ref___1));
#line 217
c_rt_lib0clear(&___nl__5);
#line 218
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(198)));
#line 218
c_rt_lib0move(&___nl__5, nl0is_sim(___nl__8));
#line 218
c_rt_lib0clear(&___nl__8);
#line 218
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__5));
#line 218
if(c_rt_lib0check_true_native(___nl__7)){ goto label_294;}
#line 218
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(198)));
#line 218
c_rt_lib0move(&___nl__9,___get_global_const(2));
#line 218
c_rt_lib0move(&___nl__8, c_rt_lib0concat_add(___nl__8, ___nl__9));
#line 218
c_rt_lib0clear(&___nl__9);
#line 218
c_rt_lib0move(&___nl__5, string_utils0is_integer(___nl__8));
#line 218
c_rt_lib0clear(&___nl__8);
#line 218
label_294:
#line 218
c_rt_lib0clear(&___nl__7);
#line 218
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__5));
#line 218
if(c_rt_lib0check_true_native(___nl__6)){ goto label_305;}
#line 218
c_rt_lib0move(&___nl__5,___get_global_const(0));
#line 218
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(198)));
#line 218
c_rt_lib0move(&___nl__5, c_rt_lib0add_mod(___nl__5, ___nl__7));
#line 218
c_rt_lib0clear(&___nl__7);
#line 218
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(198)));
#line 218
c_rt_lib0move(&___nl__5, c_rt_lib0eq(___nl__5, ___nl__7));
#line 218
c_rt_lib0clear(&___nl__7);
#line 218
label_305:
#line 218
c_rt_lib0clear(&___nl__6);
#line 218
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 218
if(c_rt_lib0check_true_native(___nl__5)){ goto label_316;}
#line 219
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(198)));
#line 219
c_rt_lib0move(&___nl__7,___get_global_const(360));
#line 219
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__7));
#line 219
c_rt_lib0clear(&___nl__7);
#line 219
c_rt_lib0delete(generator_pm_priv0print(___ref___1, ___nl__6));
#line 219
c_rt_lib0clear(&___nl__6);
#line 220
goto label_326;
#line 220
label_316:
#line 221
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(198)));
#line 221
c_rt_lib0move(&___nl__6, dfile0ssave(___nl__7));
#line 221
c_rt_lib0clear(&___nl__7);
#line 221
c_rt_lib0move(&___nl__7,___get_global_const(360));
#line 221
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__7));
#line 221
c_rt_lib0clear(&___nl__7);
#line 221
c_rt_lib0delete(generator_pm_priv0print(___ref___1, ___nl__6));
#line 221
c_rt_lib0clear(&___nl__6);
#line 222
goto label_326;
#line 222
label_326:
#line 222
c_rt_lib0clear(&___nl__5);
#line 222
c_rt_lib0clear(&___nl__4);
#line 223
goto label_441;
#line 223
label_330:
#line 223
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(212)));
#line 224
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(197)));
#line 224
c_rt_lib0delete(generator_pm_priv0print_register_to_assign(___nl__5, ___ref___1));
#line 224
c_rt_lib0clear(&___nl__5);
#line 225
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(43)));
#line 225
c_rt_lib0delete(generator_pm_priv0print_register(___nl__5, ___ref___1));
#line 225
c_rt_lib0clear(&___nl__5);
#line 226
c_rt_lib0move(&___nl__5,___get_global_const(652));
#line 226
c_rt_lib0delete(generator_pm_priv0print(___ref___1, ___nl__5));
#line 226
c_rt_lib0clear(&___nl__5);
#line 227
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(232)));
#line 227
c_rt_lib0delete(generator_pm_priv0print_register(___nl__5, ___ref___1));
#line 227
c_rt_lib0clear(&___nl__5);
#line 228
c_rt_lib0move(&___nl__5,___get_global_const(639));
#line 228
c_rt_lib0delete(generator_pm_priv0print(___ref___1, ___nl__5));
#line 228
c_rt_lib0clear(&___nl__5);
#line 228
c_rt_lib0clear(&___nl__4);
#line 229
goto label_441;
#line 229
label_349:
#line 229
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(213)));
#line 230
c_rt_lib0delete(generator_pm_priv0print_set_at_idx(___nl__4, ___ref___1));
#line 230
c_rt_lib0clear(&___nl__4);
#line 231
goto label_441;
#line 231
label_354:
#line 231
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(214)));
#line 232
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(197)));
#line 232
c_rt_lib0delete(generator_pm_priv0print_register_to_assign(___nl__5, ___ref___1));
#line 232
c_rt_lib0clear(&___nl__5);
#line 233
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(43)));
#line 233
c_rt_lib0delete(generator_pm_priv0print_register(___nl__5, ___ref___1));
#line 233
c_rt_lib0clear(&___nl__5);
#line 234
c_rt_lib0move(&___nl__5,___get_global_const(653));
#line 234
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(329)));
#line 234
c_rt_lib0move(&___nl__5, c_rt_lib0concat_add(___nl__5, ___nl__6));
#line 234
c_rt_lib0clear(&___nl__6);
#line 234
c_rt_lib0move(&___nl__6,___get_global_const(654));
#line 234
c_rt_lib0move(&___nl__5, c_rt_lib0concat_add(___nl__5, ___nl__6));
#line 234
c_rt_lib0clear(&___nl__6);
#line 234
c_rt_lib0delete(generator_pm_priv0print(___ref___1, ___nl__5));
#line 234
c_rt_lib0clear(&___nl__5);
#line 234
c_rt_lib0clear(&___nl__4);
#line 235
goto label_441;
#line 235
label_373:
#line 235
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(215)));
#line 236
c_rt_lib0delete(generator_pm_priv0print_set_val(___nl__4, ___ref___1));
#line 236
c_rt_lib0clear(&___nl__4);
#line 237
goto label_441;
#line 237
label_378:
#line 237
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(216)));
#line 238
c_rt_lib0delete(generator_pm_priv0print_ov_mk(___nl__4, ___ref___1));
#line 238
c_rt_lib0clear(&___nl__4);
#line 239
goto label_441;
#line 239
label_383:
#line 239
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(218)));
#line 240
c_rt_lib0move(&___nl__5,___get_global_const(455));
#line 240
c_rt_lib0move(&___nl__5, c_rt_lib0concat_add(___nl__5, ___nl__4));
#line 240
c_rt_lib0move(&___nl__6,___get_global_const(417));
#line 240
c_rt_lib0move(&___nl__5, c_rt_lib0concat_add(___nl__5, ___nl__6));
#line 240
c_rt_lib0clear(&___nl__6);
#line 240
c_rt_lib0delete(generator_pm_priv0print(___ref___1, ___nl__5));
#line 240
c_rt_lib0clear(&___nl__5);
#line 240
c_rt_lib0clear(&___nl__4);
#line 241
goto label_441;
#line 241
label_394:
#line 241
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(219)));
#line 242
c_rt_lib0move(&___nl__5,___get_global_const(655));
#line 242
c_rt_lib0delete(generator_pm_priv0print(___ref___1, ___nl__5));
#line 242
c_rt_lib0clear(&___nl__5);
#line 243
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(43)));
#line 243
c_rt_lib0delete(generator_pm_priv0print_register(___nl__5, ___ref___1));
#line 243
c_rt_lib0clear(&___nl__5);
#line 244
c_rt_lib0move(&___nl__5,___get_global_const(518));
#line 244
c_rt_lib0delete(generator_pm_priv0print(___ref___1, ___nl__5));
#line 244
c_rt_lib0clear(&___nl__5);
#line 245
c_rt_lib0move(&___nl__5,___get_global_const(459));
#line 245
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(197)));
#line 245
c_rt_lib0move(&___nl__5, c_rt_lib0concat_add(___nl__5, ___nl__6));
#line 245
c_rt_lib0clear(&___nl__6);
#line 245
c_rt_lib0move(&___nl__6,___get_global_const(360));
#line 245
c_rt_lib0move(&___nl__5, c_rt_lib0concat_add(___nl__5, ___nl__6));
#line 245
c_rt_lib0clear(&___nl__6);
#line 245
c_rt_lib0delete(generator_pm_priv0print(___ref___1, ___nl__5));
#line 245
c_rt_lib0clear(&___nl__5);
#line 246
c_rt_lib0move(&___nl__5,___get_global_const(253));
#line 246
c_rt_lib0delete(generator_pm_priv0print(___ref___1, ___nl__5));
#line 246
c_rt_lib0clear(&___nl__5);
#line 246
c_rt_lib0clear(&___nl__4);
#line 247
goto label_441;
#line 247
label_419:
#line 247
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(220)));
#line 248
c_rt_lib0move(&___nl__5,___get_global_const(459));
#line 248
c_rt_lib0move(&___nl__5, c_rt_lib0concat_add(___nl__5, ___nl__4));
#line 248
c_rt_lib0move(&___nl__6,___get_global_const(360));
#line 248
c_rt_lib0move(&___nl__5, c_rt_lib0concat_add(___nl__5, ___nl__6));
#line 248
c_rt_lib0clear(&___nl__6);
#line 248
c_rt_lib0delete(generator_pm_priv0print(___ref___1, ___nl__5));
#line 248
c_rt_lib0clear(&___nl__5);
#line 248
c_rt_lib0clear(&___nl__4);
#line 249
goto label_441;
#line 249
label_430:
#line 249
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(221)));
#line 250
c_rt_lib0move(&___nl__5,___get_global_const(656));
#line 250
c_rt_lib0delete(generator_pm_priv0print(___ref___1, ___nl__5));
#line 250
c_rt_lib0clear(&___nl__5);
#line 251
c_rt_lib0delete(generator_pm_priv0print_register(___nl__4, ___ref___1));
#line 252
c_rt_lib0move(&___nl__5,___get_global_const(498));
#line 252
c_rt_lib0delete(generator_pm_priv0print(___ref___1, ___nl__5));
#line 252
c_rt_lib0clear(&___nl__5);
#line 252
c_rt_lib0clear(&___nl__4);
#line 253
goto label_441;
#line 253
label_441:
#line 253
c_rt_lib0clear(&___nl__2);
#line 253
c_rt_lib0clear(&___nl__3);
#line 254
c_rt_lib0move(&___nl__2, string0lf());
#line 254
c_rt_lib0delete(generator_pm_priv0print(___ref___1, ___nl__2));
#line 254
c_rt_lib0clear(&___nl__2);
#line 254
c_rt_lib0clear(&___nl__0);
#line 254
return NULL;
}

ImmT generator_pm_priv0print_call(ImmT ___nl__0,ImmT * ___ref___1) {
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
#line 258
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(197)));
#line 258
c_rt_lib0delete(generator_pm_priv0print_register_to_assign(___nl__2, ___ref___1));
#line 258
c_rt_lib0clear(&___nl__2);
#line 259
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(222)));
#line 259
c_rt_lib0move(&___nl__3,___get_global_const(2));
#line 259
c_rt_lib0move(&___nl__2, c_rt_lib0ne(___nl__2, ___nl__3));
#line 259
c_rt_lib0clear(&___nl__3);
#line 259
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 259
if(c_rt_lib0check_true_native(___nl__2)){ goto label_16;}
#line 260
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(222)));
#line 260
c_rt_lib0move(&___nl__4,___get_global_const(185));
#line 260
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 260
c_rt_lib0clear(&___nl__4);
#line 260
c_rt_lib0delete(generator_pm_priv0print(___ref___1, ___nl__3));
#line 260
c_rt_lib0clear(&___nl__3);
#line 261
goto label_24;
#line 261
label_16:
#line 262
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(*___ref___1, ___get_global_const(186)));
#line 262
c_rt_lib0move(&___nl__4,___get_global_const(184));
#line 262
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 262
c_rt_lib0clear(&___nl__4);
#line 262
c_rt_lib0delete(generator_pm_priv0print(___ref___1, ___nl__3));
#line 262
c_rt_lib0clear(&___nl__3);
#line 263
goto label_24;
#line 263
label_24:
#line 263
c_rt_lib0clear(&___nl__2);
#line 264
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(224)));
#line 264
c_rt_lib0move(&___nl__3,___get_global_const(373));
#line 264
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__3));
#line 264
c_rt_lib0clear(&___nl__3);
#line 264
c_rt_lib0delete(generator_pm_priv0print(___ref___1, ___nl__2));
#line 264
c_rt_lib0clear(&___nl__2);
#line 265
c_rt_lib0move(&___nl__2,___get_global_const(0));
#line 266
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(89)));
#line 266
c_rt_lib0move(&___nl__5,___get_global_const(0));
#line 266
c_rt_lib0move(&___nl__6,___get_global_const(1));
#line 266
c_rt_lib0move(&___nl__7, c_rt_lib0array_len(___nl__3));
#line 266
label_37:
#line 266
c_rt_lib0move(&___nl__8, c_rt_lib0ge(___nl__5, ___nl__7));
#line 266
if(c_rt_lib0check_true_native(___nl__8)){ goto label_75;}
#line 266
c_rt_lib0move(&___nl__4, c_rt_lib0array_get(___nl__3, ___nl__5));
#line 267
c_rt_lib0move(&___nl__9,___get_global_const(0));
#line 267
c_rt_lib0move(&___nl__9, c_rt_lib0gt(___nl__2, ___nl__9));
#line 267
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__9));
#line 267
if(c_rt_lib0check_true_native(___nl__9)){ goto label_49;}
#line 268
c_rt_lib0move(&___nl__10,___get_global_const(271));
#line 268
c_rt_lib0delete(generator_pm_priv0print(___ref___1, ___nl__10));
#line 268
c_rt_lib0clear(&___nl__10);
#line 269
goto label_49;
#line 269
label_49:
#line 269
c_rt_lib0clear(&___nl__9);
#line 270
c_rt_lib0move(&___nl__9, c_rt_lib0priv_is(___nl__4, ___get_global_const(198)));
#line 270
if(c_rt_lib0check_true_native(___nl__9)){ goto label_58;}
#line 272
c_rt_lib0move(&___nl__9, c_rt_lib0priv_is(___nl__4, ___get_global_const(5)));
#line 272
if(c_rt_lib0check_true_native(___nl__9)){ goto label_63;}
#line 272
c_rt_lib0move(&___nl__9,___get_global_const(91));
#line 272
c_rt_lib0move(&___nl__9, c_rt_lib0array_mk(2, ___nl__9, ___nl__4));
#line 272
nl_die_arg(___nl__9);
#line 270
label_58:
#line 270
c_rt_lib0move(&___nl__10, c_rt_lib0priv_as(___nl__4, ___get_global_const(198)));
#line 271
c_rt_lib0delete(generator_pm_priv0print_register(___nl__10, ___ref___1));
#line 271
c_rt_lib0clear(&___nl__10);
#line 272
goto label_68;
#line 272
label_63:
#line 272
c_rt_lib0move(&___nl__10, c_rt_lib0priv_as(___nl__4, ___get_global_const(5)));
#line 273
c_rt_lib0delete(generator_pm_priv0print_register(___nl__10, ___ref___1));
#line 273
c_rt_lib0clear(&___nl__10);
#line 274
goto label_68;
#line 274
label_68:
#line 274
c_rt_lib0clear(&___nl__9);
#line 275
c_rt_lib0move(&___nl__9,___get_global_const(1));
#line 275
c_rt_lib0move(&___nl__2, c_rt_lib0add_mod(___nl__2, ___nl__9));
#line 275
c_rt_lib0clear(&___nl__9);
#line 276
c_rt_lib0move(&___nl__5, c_rt_lib0add_mod(___nl__5, ___nl__6));
#line 276
goto label_37;
#line 276
label_75:
#line 276
c_rt_lib0clear(&___nl__3);
#line 276
c_rt_lib0clear(&___nl__4);
#line 276
c_rt_lib0clear(&___nl__5);
#line 276
c_rt_lib0clear(&___nl__6);
#line 276
c_rt_lib0clear(&___nl__7);
#line 276
c_rt_lib0clear(&___nl__8);
#line 277
c_rt_lib0move(&___nl__3,___get_global_const(498));
#line 277
c_rt_lib0delete(generator_pm_priv0print(___ref___1, ___nl__3));
#line 277
c_rt_lib0clear(&___nl__3);
#line 277
c_rt_lib0clear(&___nl__2);
#line 277
c_rt_lib0clear(&___nl__0);
#line 277
return NULL;
}

ImmT generator_pm_priv0print_una_op(ImmT ___nl__0,ImmT * ___ref___1) {
c_rt_lib0arg_val(___nl__0);
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
#line 282
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(197)));
#line 282
c_rt_lib0delete(generator_pm_priv0print_register_to_assign(___nl__2, ___ref___1));
#line 282
c_rt_lib0clear(&___nl__2);
#line 283
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(443)));
#line 283
c_rt_lib0move(&___nl__3,___get_global_const(294));
#line 283
c_rt_lib0move(&___nl__2, c_rt_lib0eq(___nl__2, ___nl__3));
#line 283
c_rt_lib0clear(&___nl__3);
#line 283
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 283
if(c_rt_lib0check_true_native(___nl__2)){ goto label_13;}
#line 283
c_rt_lib0move(&___nl__3,___get_global_const(657));
#line 283
c_rt_lib0delete(generator_pm_priv0print(___ref___1, ___nl__3));
#line 283
c_rt_lib0clear(&___nl__3);
#line 283
goto label_13;
#line 283
label_13:
#line 283
c_rt_lib0clear(&___nl__2);
#line 284
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(443)));
#line 284
c_rt_lib0delete(generator_pm_priv0print(___ref___1, ___nl__2));
#line 284
c_rt_lib0clear(&___nl__2);
#line 285
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(443)));
#line 285
c_rt_lib0move(&___nl__3,___get_global_const(294));
#line 285
c_rt_lib0move(&___nl__2, c_rt_lib0eq(___nl__2, ___nl__3));
#line 285
c_rt_lib0clear(&___nl__3);
#line 285
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 285
if(c_rt_lib0check_true_native(___nl__2)){ goto label_28;}
#line 285
c_rt_lib0move(&___nl__3,___get_global_const(658));
#line 285
c_rt_lib0delete(generator_pm_priv0print(___ref___1, ___nl__3));
#line 285
c_rt_lib0clear(&___nl__3);
#line 285
goto label_28;
#line 285
label_28:
#line 285
c_rt_lib0clear(&___nl__2);
#line 286
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(43)));
#line 286
c_rt_lib0delete(generator_pm_priv0print_register(___nl__2, ___ref___1));
#line 286
c_rt_lib0clear(&___nl__2);
#line 287
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(443)));
#line 287
c_rt_lib0move(&___nl__3,___get_global_const(294));
#line 287
c_rt_lib0move(&___nl__2, c_rt_lib0eq(___nl__2, ___nl__3));
#line 287
c_rt_lib0clear(&___nl__3);
#line 287
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 287
if(c_rt_lib0check_true_native(___nl__2)){ goto label_43;}
#line 287
c_rt_lib0move(&___nl__3,___get_global_const(512));
#line 287
c_rt_lib0delete(generator_pm_priv0print(___ref___1, ___nl__3));
#line 287
c_rt_lib0clear(&___nl__3);
#line 287
goto label_43;
#line 287
label_43:
#line 287
c_rt_lib0clear(&___nl__2);
#line 288
c_rt_lib0move(&___nl__2,___get_global_const(360));
#line 288
c_rt_lib0delete(generator_pm_priv0print(___ref___1, ___nl__2));
#line 288
c_rt_lib0clear(&___nl__2);
#line 288
c_rt_lib0clear(&___nl__0);
#line 288
return NULL;
}

ImmT generator_pm_priv0print_bin_op(ImmT ___nl__0,ImmT * ___ref___1) {
c_rt_lib0arg_val(___nl__0);
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
#line 297
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(197)));
#line 297
c_rt_lib0delete(generator_pm_priv0print_register_to_assign(___nl__2, ___ref___1));
#line 297
c_rt_lib0clear(&___nl__2);
#line 298
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(443)));
#line 298
c_rt_lib0move(&___nl__3,___get_global_const(318));
#line 298
c_rt_lib0move(&___nl__2, c_rt_lib0eq(___nl__2, ___nl__3));
#line 298
c_rt_lib0clear(&___nl__3);
#line 298
if(c_rt_lib0check_true_native(___nl__2)){ goto label_12;}
#line 298
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(443)));
#line 298
c_rt_lib0move(&___nl__3,___get_global_const(308));
#line 298
c_rt_lib0move(&___nl__2, c_rt_lib0eq(___nl__2, ___nl__3));
#line 298
c_rt_lib0clear(&___nl__3);
#line 298
label_12:
#line 298
if(c_rt_lib0check_true_native(___nl__2)){ goto label_18;}
#line 298
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(443)));
#line 298
c_rt_lib0move(&___nl__3,___get_global_const(310));
#line 298
c_rt_lib0move(&___nl__2, c_rt_lib0eq(___nl__2, ___nl__3));
#line 298
c_rt_lib0clear(&___nl__3);
#line 298
label_18:
#line 298
if(c_rt_lib0check_true_native(___nl__2)){ goto label_24;}
#line 298
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(443)));
#line 298
c_rt_lib0move(&___nl__3,___get_global_const(316));
#line 298
c_rt_lib0move(&___nl__2, c_rt_lib0eq(___nl__2, ___nl__3));
#line 298
c_rt_lib0clear(&___nl__3);
#line 298
label_24:
#line 298
if(c_rt_lib0check_true_native(___nl__2)){ goto label_30;}
#line 298
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(443)));
#line 298
c_rt_lib0move(&___nl__3,___get_global_const(312));
#line 298
c_rt_lib0move(&___nl__2, c_rt_lib0eq(___nl__2, ___nl__3));
#line 298
c_rt_lib0clear(&___nl__3);
#line 298
label_30:
#line 298
if(c_rt_lib0check_true_native(___nl__2)){ goto label_36;}
#line 299
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(443)));
#line 299
c_rt_lib0move(&___nl__3,___get_global_const(300));
#line 299
c_rt_lib0move(&___nl__2, c_rt_lib0eq(___nl__2, ___nl__3));
#line 299
c_rt_lib0clear(&___nl__3);
#line 299
label_36:
#line 299
if(c_rt_lib0check_true_native(___nl__2)){ goto label_42;}
#line 299
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(443)));
#line 299
c_rt_lib0move(&___nl__3,___get_global_const(314));
#line 299
c_rt_lib0move(&___nl__2, c_rt_lib0eq(___nl__2, ___nl__3));
#line 299
c_rt_lib0clear(&___nl__3);
#line 299
label_42:
#line 299
if(c_rt_lib0check_true_native(___nl__2)){ goto label_48;}
#line 299
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(443)));
#line 299
c_rt_lib0move(&___nl__3,___get_global_const(301));
#line 299
c_rt_lib0move(&___nl__2, c_rt_lib0eq(___nl__2, ___nl__3));
#line 299
c_rt_lib0clear(&___nl__3);
#line 299
label_48:
#line 299
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 299
if(c_rt_lib0check_true_native(___nl__2)){ goto label_73;}
#line 300
c_rt_lib0move(&___nl__3,___get_global_const(657));
#line 300
c_rt_lib0delete(generator_pm_priv0print(___ref___1, ___nl__3));
#line 300
c_rt_lib0clear(&___nl__3);
#line 301
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(230)));
#line 301
c_rt_lib0delete(generator_pm_priv0print_register(___nl__3, ___ref___1));
#line 301
c_rt_lib0clear(&___nl__3);
#line 302
c_rt_lib0move(&___nl__3,___get_global_const(571));
#line 302
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(443)));
#line 302
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 302
c_rt_lib0clear(&___nl__4);
#line 302
c_rt_lib0move(&___nl__4,___get_global_const(571));
#line 302
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 302
c_rt_lib0clear(&___nl__4);
#line 302
c_rt_lib0delete(generator_pm_priv0print(___ref___1, ___nl__3));
#line 302
c_rt_lib0clear(&___nl__3);
#line 303
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(231)));
#line 303
c_rt_lib0delete(generator_pm_priv0print_register(___nl__3, ___ref___1));
#line 303
c_rt_lib0clear(&___nl__3);
#line 304
c_rt_lib0move(&___nl__3,___get_global_const(498));
#line 304
c_rt_lib0delete(generator_pm_priv0print(___ref___1, ___nl__3));
#line 304
c_rt_lib0clear(&___nl__3);
#line 305
goto label_93;
#line 305
label_73:
#line 306
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(230)));
#line 306
c_rt_lib0delete(generator_pm_priv0print_register(___nl__3, ___ref___1));
#line 306
c_rt_lib0clear(&___nl__3);
#line 307
c_rt_lib0move(&___nl__3,___get_global_const(571));
#line 307
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(443)));
#line 307
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 307
c_rt_lib0clear(&___nl__4);
#line 307
c_rt_lib0move(&___nl__4,___get_global_const(571));
#line 307
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 307
c_rt_lib0clear(&___nl__4);
#line 307
c_rt_lib0delete(generator_pm_priv0print(___ref___1, ___nl__3));
#line 307
c_rt_lib0clear(&___nl__3);
#line 308
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(231)));
#line 308
c_rt_lib0delete(generator_pm_priv0print_register(___nl__3, ___ref___1));
#line 308
c_rt_lib0clear(&___nl__3);
#line 309
c_rt_lib0move(&___nl__3,___get_global_const(360));
#line 309
c_rt_lib0delete(generator_pm_priv0print(___ref___1, ___nl__3));
#line 309
c_rt_lib0clear(&___nl__3);
#line 310
goto label_93;
#line 310
label_93:
#line 310
c_rt_lib0clear(&___nl__2);
#line 310
c_rt_lib0clear(&___nl__0);
#line 310
return NULL;
}

ImmT generator_pm_priv0print_set_at_idx(ImmT ___nl__0,ImmT * ___ref___1) {
c_rt_lib0arg_val(___nl__0);
ImmT ___nl__2 = NULL;
#line 315
c_rt_lib0move(&___nl__2,___get_global_const(659));
#line 315
c_rt_lib0delete(generator_pm_priv0print(___ref___1, ___nl__2));
#line 315
c_rt_lib0clear(&___nl__2);
#line 316
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(43)));
#line 316
c_rt_lib0delete(generator_pm_priv0print_register(___nl__2, ___ref___1));
#line 316
c_rt_lib0clear(&___nl__2);
#line 317
c_rt_lib0move(&___nl__2,___get_global_const(660));
#line 317
c_rt_lib0delete(generator_pm_priv0print(___ref___1, ___nl__2));
#line 317
c_rt_lib0clear(&___nl__2);
#line 318
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(43)));
#line 318
c_rt_lib0delete(generator_pm_priv0print_register_to_assign(___nl__2, ___ref___1));
#line 318
c_rt_lib0clear(&___nl__2);
#line 319
c_rt_lib0move(&___nl__2,___get_global_const(661));
#line 319
c_rt_lib0delete(generator_pm_priv0print(___ref___1, ___nl__2));
#line 319
c_rt_lib0clear(&___nl__2);
#line 320
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(43)));
#line 320
c_rt_lib0delete(generator_pm_priv0print_register(___nl__2, ___ref___1));
#line 320
c_rt_lib0clear(&___nl__2);
#line 321
c_rt_lib0move(&___nl__2,___get_global_const(662));
#line 321
c_rt_lib0delete(generator_pm_priv0print(___ref___1, ___nl__2));
#line 321
c_rt_lib0clear(&___nl__2);
#line 322
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(43)));
#line 322
c_rt_lib0delete(generator_pm_priv0print_register(___nl__2, ___ref___1));
#line 322
c_rt_lib0clear(&___nl__2);
#line 323
c_rt_lib0move(&___nl__2,___get_global_const(652));
#line 323
c_rt_lib0delete(generator_pm_priv0print(___ref___1, ___nl__2));
#line 323
c_rt_lib0clear(&___nl__2);
#line 324
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(232)));
#line 324
c_rt_lib0delete(generator_pm_priv0print_register(___nl__2, ___ref___1));
#line 324
c_rt_lib0clear(&___nl__2);
#line 325
c_rt_lib0move(&___nl__2,___get_global_const(405));
#line 325
c_rt_lib0delete(generator_pm_priv0print(___ref___1, ___nl__2));
#line 325
c_rt_lib0clear(&___nl__2);
#line 326
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(198)));
#line 326
c_rt_lib0delete(generator_pm_priv0print_register(___nl__2, ___ref___1));
#line 326
c_rt_lib0clear(&___nl__2);
#line 327
c_rt_lib0move(&___nl__2,___get_global_const(360));
#line 327
c_rt_lib0delete(generator_pm_priv0print(___ref___1, ___nl__2));
#line 327
c_rt_lib0clear(&___nl__2);
#line 327
c_rt_lib0clear(&___nl__0);
#line 327
return NULL;
}

ImmT generator_pm_priv0print_set_val(ImmT ___nl__0,ImmT * ___ref___1) {
c_rt_lib0arg_val(___nl__0);
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
#line 332
c_rt_lib0move(&___nl__2,___get_global_const(663));
#line 332
c_rt_lib0delete(generator_pm_priv0print(___ref___1, ___nl__2));
#line 332
c_rt_lib0clear(&___nl__2);
#line 333
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(43)));
#line 333
c_rt_lib0delete(generator_pm_priv0print_register(___nl__2, ___ref___1));
#line 333
c_rt_lib0clear(&___nl__2);
#line 334
c_rt_lib0move(&___nl__2,___get_global_const(660));
#line 334
c_rt_lib0delete(generator_pm_priv0print(___ref___1, ___nl__2));
#line 334
c_rt_lib0clear(&___nl__2);
#line 335
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(43)));
#line 335
c_rt_lib0delete(generator_pm_priv0print_register_to_assign(___nl__2, ___ref___1));
#line 335
c_rt_lib0clear(&___nl__2);
#line 336
c_rt_lib0move(&___nl__2,___get_global_const(664));
#line 336
c_rt_lib0delete(generator_pm_priv0print(___ref___1, ___nl__2));
#line 336
c_rt_lib0clear(&___nl__2);
#line 337
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(43)));
#line 337
c_rt_lib0delete(generator_pm_priv0print_register(___nl__2, ___ref___1));
#line 337
c_rt_lib0clear(&___nl__2);
#line 338
c_rt_lib0move(&___nl__2,___get_global_const(665));
#line 338
c_rt_lib0delete(generator_pm_priv0print(___ref___1, ___nl__2));
#line 338
c_rt_lib0clear(&___nl__2);
#line 339
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(43)));
#line 339
c_rt_lib0delete(generator_pm_priv0print_register(___nl__2, ___ref___1));
#line 339
c_rt_lib0clear(&___nl__2);
#line 340
c_rt_lib0move(&___nl__2,___get_global_const(653));
#line 340
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(329)));
#line 340
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__3));
#line 340
c_rt_lib0clear(&___nl__3);
#line 340
c_rt_lib0move(&___nl__3,___get_global_const(666));
#line 340
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__3));
#line 340
c_rt_lib0clear(&___nl__3);
#line 340
c_rt_lib0delete(generator_pm_priv0print(___ref___1, ___nl__2));
#line 340
c_rt_lib0clear(&___nl__2);
#line 341
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(198)));
#line 341
c_rt_lib0delete(generator_pm_priv0print_register(___nl__2, ___ref___1));
#line 341
c_rt_lib0clear(&___nl__2);
#line 342
c_rt_lib0move(&___nl__2,___get_global_const(360));
#line 342
c_rt_lib0delete(generator_pm_priv0print(___ref___1, ___nl__2));
#line 342
c_rt_lib0clear(&___nl__2);
#line 342
c_rt_lib0clear(&___nl__0);
#line 342
return NULL;
}

ImmT generator_pm_priv0print_ov_mk(ImmT ___nl__0,ImmT * ___ref___1) {
c_rt_lib0arg_val(___nl__0);
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
#line 346
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(197)));
#line 346
c_rt_lib0delete(generator_pm_priv0print_register_to_assign(___nl__2, ___ref___1));
#line 346
c_rt_lib0clear(&___nl__2);
#line 347
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(43)));
#line 347
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__2, ___get_global_const(288)));
#line 347
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__2));
#line 347
if(c_rt_lib0check_true_native(___nl__3)){ goto label_11;}
#line 347
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(93)));
#line 347
c_rt_lib0move(&___nl__4,___get_global_const(7));
#line 347
c_rt_lib0move(&___nl__2, c_rt_lib0eq(___nl__2, ___nl__4));
#line 347
c_rt_lib0clear(&___nl__4);
#line 347
label_11:
#line 347
c_rt_lib0clear(&___nl__3);
#line 347
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 347
if(c_rt_lib0check_true_native(___nl__2)){ goto label_19;}
#line 348
c_rt_lib0move(&___nl__3,___get_global_const(667));
#line 348
c_rt_lib0delete(generator_pm_priv0print(___ref___1, ___nl__3));
#line 348
c_rt_lib0clear(&___nl__3);
#line 349
goto label_77;
#line 349
label_19:
#line 349
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(43)));
#line 349
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__2, ___get_global_const(288)));
#line 349
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__2));
#line 349
if(c_rt_lib0check_true_native(___nl__3)){ goto label_28;}
#line 349
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(93)));
#line 349
c_rt_lib0move(&___nl__4,___get_global_const(8));
#line 349
c_rt_lib0move(&___nl__2, c_rt_lib0eq(___nl__2, ___nl__4));
#line 349
c_rt_lib0clear(&___nl__4);
#line 349
label_28:
#line 349
c_rt_lib0clear(&___nl__3);
#line 349
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 349
if(c_rt_lib0check_true_native(___nl__2)){ goto label_36;}
#line 350
c_rt_lib0move(&___nl__3,___get_global_const(668));
#line 350
c_rt_lib0delete(generator_pm_priv0print(___ref___1, ___nl__3));
#line 350
c_rt_lib0clear(&___nl__3);
#line 351
goto label_77;
#line 351
label_36:
#line 352
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(43)));
#line 352
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__3, ___get_global_const(233)));
#line 352
if(c_rt_lib0check_true_native(___nl__4)){ goto label_45;}
#line 356
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__3, ___get_global_const(288)));
#line 356
if(c_rt_lib0check_true_native(___nl__4)){ goto label_62;}
#line 356
c_rt_lib0move(&___nl__4,___get_global_const(91));
#line 356
c_rt_lib0move(&___nl__4, c_rt_lib0array_mk(2, ___nl__4, ___nl__3));
#line 356
nl_die_arg(___nl__4);
#line 352
label_45:
#line 352
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__3, ___get_global_const(233)));
#line 353
c_rt_lib0move(&___nl__6,___get_global_const(669));
#line 353
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(93)));
#line 353
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__7));
#line 353
c_rt_lib0clear(&___nl__7);
#line 353
c_rt_lib0move(&___nl__7,___get_global_const(670));
#line 353
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__7));
#line 353
c_rt_lib0clear(&___nl__7);
#line 353
c_rt_lib0delete(generator_pm_priv0print(___ref___1, ___nl__6));
#line 353
c_rt_lib0clear(&___nl__6);
#line 354
c_rt_lib0delete(generator_pm_priv0print_register(___nl__5, ___ref___1));
#line 355
c_rt_lib0move(&___nl__6,___get_global_const(498));
#line 355
c_rt_lib0delete(generator_pm_priv0print(___ref___1, ___nl__6));
#line 355
c_rt_lib0clear(&___nl__6);
#line 355
c_rt_lib0clear(&___nl__5);
#line 356
goto label_73;
#line 356
label_62:
#line 357
c_rt_lib0move(&___nl__5,___get_global_const(671));
#line 357
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(93)));
#line 357
c_rt_lib0move(&___nl__5, c_rt_lib0concat_add(___nl__5, ___nl__6));
#line 357
c_rt_lib0clear(&___nl__6);
#line 357
c_rt_lib0move(&___nl__6,___get_global_const(648));
#line 357
c_rt_lib0move(&___nl__5, c_rt_lib0concat_add(___nl__5, ___nl__6));
#line 357
c_rt_lib0clear(&___nl__6);
#line 357
c_rt_lib0delete(generator_pm_priv0print(___ref___1, ___nl__5));
#line 357
c_rt_lib0clear(&___nl__5);
#line 358
goto label_73;
#line 358
label_73:
#line 358
c_rt_lib0clear(&___nl__3);
#line 358
c_rt_lib0clear(&___nl__4);
#line 359
goto label_77;
#line 359
label_77:
#line 359
c_rt_lib0clear(&___nl__2);
#line 359
c_rt_lib0clear(&___nl__0);
#line 359
return NULL;
}

ImmT generator_pm_priv0print_register(ImmT ___nl__0,ImmT * ___ref___1) {
c_rt_lib0arg_val(___nl__0);
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
#line 363
c_rt_lib0move(&___nl__2,___get_global_const(2));
#line 363
c_rt_lib0move(&___nl__2, c_rt_lib0eq(___nl__0, ___nl__2));
#line 363
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 363
if(c_rt_lib0check_true_native(___nl__2)){ goto label_8;}
#line 363
c_rt_lib0clear(&___nl__0);
#line 363
c_rt_lib0clear(&___nl__2);
#line 363
return NULL;
#line 363
goto label_8;
#line 363
label_8:
#line 363
c_rt_lib0clear(&___nl__2);
#line 364
c_rt_lib0move(&___nl__2,___get_global_const(637));
#line 364
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__0));
#line 364
c_rt_lib0move(&___nl__3,___get_global_const(2));
#line 364
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__3));
#line 364
c_rt_lib0clear(&___nl__3);
#line 364
c_rt_lib0delete(generator_pm_priv0print(___ref___1, ___nl__2));
#line 364
c_rt_lib0clear(&___nl__2);
#line 364
c_rt_lib0clear(&___nl__0);
#line 364
return NULL;
}

ImmT generator_pm_priv0print_register_to_assign(ImmT ___nl__0,ImmT * ___ref___1) {
c_rt_lib0arg_val(___nl__0);
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
#line 368
c_rt_lib0delete(generator_pm_priv0print_register(___nl__0, ___ref___1));
#line 369
c_rt_lib0move(&___nl__2,___get_global_const(2));
#line 369
c_rt_lib0move(&___nl__2, c_rt_lib0ne(___nl__0, ___nl__2));
#line 369
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 369
if(c_rt_lib0check_true_native(___nl__2)){ goto label_9;}
#line 369
c_rt_lib0move(&___nl__3,___get_global_const(491));
#line 369
c_rt_lib0delete(generator_pm_priv0print(___ref___1, ___nl__3));
#line 369
c_rt_lib0clear(&___nl__3);
#line 369
goto label_9;
#line 369
label_9:
#line 369
c_rt_lib0clear(&___nl__2);
#line 369
c_rt_lib0clear(&___nl__0);
#line 369
return NULL;
}


static ImmT ___const__[3];
static int ___const_init__ = 1;
void generator_pm0__const__init(){
if(!___const_init__) nl_die();
___const_init__ = 0;
__const__f = &___const__[2];


for(int i=0;i<2;++i) ___const__[i] = NULL;
c_rt_lib0register_const(___const__, 2);
}
ImmT generator_pm_priv0__const__sim(int __nr) {
ImmT ret = NULL;
c_rt_lib0copy(&ret, ___const__[__nr]);
return ret;
}
ImmT generator_pm_priv0__const__sing(int __nr) {
if(___const__[__nr+0]==NULL) {
switch(__nr){
case 0:
	___const__[0] = generator_pm0fun_args_t0cal();
	break;
case 1:
	___const__[1] = generator_pm0state_t0cal();
	break;
default:
	nl_die();
}}
ImmT ret = NULL;
c_rt_lib0copy(&ret, ___const__[__nr+0]);
return ret;
}
