
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
#line 1 "generator_pm.nl"

static ImmT *__const__f = NULL;
void generator_pm_priv0__const__init();
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
generator_pm_priv0__const__init();
return generator_pm_priv0__const__sing(0);}
ImmT generator_pm0fun_args_t0cal() {
generator_pm_priv0__const__init();
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
c_rt_lib0move(&___nl__2, c_rt_lib0hash_mk(2, ___get_global_const(234), ___nl__3, ___get_global_const(5), ___nl__4));
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
generator_pm_priv0__const__init();
return generator_pm_priv0__const__sing(1);}
ImmT generator_pm0state_t0cal() {
generator_pm_priv0__const__init();
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
#line 19
c_rt_lib0move(&___nl__2, ptd0sim());
#line 19
c_rt_lib0move(&___nl__3, ptd0sim());
#line 19
c_rt_lib0move(&___nl__4, c_rt_lib0func_new(generator_pm0fun_args_t0ptr, ___get_global_const(565), ___get_global_const(285)));
#line 19
c_rt_lib0move(&___nl__4, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__4));
#line 19
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(3, ___get_global_const(566), ___nl__2, ___get_global_const(430), ___nl__3, ___get_global_const(293), ___nl__4));
#line 19
c_rt_lib0clear(&___nl__2);
#line 19
c_rt_lib0clear(&___nl__3);
#line 19
c_rt_lib0clear(&___nl__4);
#line 19
c_rt_lib0move(&___nl__0, ptd0rec(___nl__1));
#line 19
c_rt_lib0clear(&___nl__1);
#line 19
return ___nl__0;
#line 19
c_rt_lib0clear(&___nl__0);
#line 19
return NULL;
}

ImmT generator_pm_priv0print(ImmT * ___ref___0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__1);
generator_pm_priv0__const__init();
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
#line 27
c_rt_lib0move(&___nl__2,___get_global_const(566));
#line 27
c_rt_lib0move(&___nl__2, c_rt_lib0get_ref_hash(*___ref___0, ___nl__2));
#line 27
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__1));
#line 27
c_rt_lib0move(&___nl__3,___get_global_const(566));
#line 27
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__3, ___nl__2));
#line 27
c_rt_lib0clear(&___nl__3);
#line 27
c_rt_lib0clear(&___nl__2);
#line 27
c_rt_lib0clear(&___nl__1);
#line 27
return NULL;
}

ImmT generator_pm0generate0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "generator_pm0generate");
return generator_pm0generate(_tab[0]);}
ImmT generator_pm0generate(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
generator_pm_priv0__const__init();
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
ImmT ___nl__9 = NULL;
#line 31
c_rt_lib0move(&___nl__2,___get_global_const(0));
#line 31
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(430)));
#line 31
c_rt_lib0move(&___nl__4, c_rt_lib0array_mk(0));
#line 31
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(3, ___get_global_const(566), ___nl__2, ___get_global_const(430), ___nl__3, ___get_global_const(293), ___nl__4));
#line 31
c_rt_lib0clear(&___nl__2);
#line 31
c_rt_lib0clear(&___nl__3);
#line 31
c_rt_lib0clear(&___nl__4);
#line 36
c_rt_lib0move(&___nl__2,___get_global_const(567));
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
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(336)));
#line 37
c_rt_lib0delete(generator_pm_priv0print_imports(___nl__2, &___nl__1));
#line 37
c_rt_lib0clear(&___nl__2);
#line 38
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(75)));
#line 38
c_rt_lib0move(&___nl__4,___get_global_const(1));
#line 38
c_rt_lib0move(&___nl__5,___get_global_const(2));
#line 38
c_rt_lib0move(&___nl__6, c_rt_lib0array_len(___nl__2));
#line 38
label_3:
#line 38
c_rt_lib0move(&___nl__7, c_rt_lib0ge(___nl__4, ___nl__6));
#line 38
if(c_rt_lib0check_true_native(___nl__7)){ goto label_1;}
#line 38
c_rt_lib0move(&___nl__3, c_rt_lib0array_get(___nl__2, ___nl__4));
#line 39
c_rt_lib0move(&___nl__8,___get_global_const(568));
#line 39
c_rt_lib0delete(generator_pm_priv0print(&___nl__1, ___nl__8));
#line 39
c_rt_lib0clear(&___nl__8);
#line 40
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(328)));
#line 40
c_rt_lib0delete(generator_pm_priv0print_function_access(___nl__8, &___nl__1));
#line 40
c_rt_lib0clear(&___nl__8);
#line 41
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(76)));
#line 41
c_rt_lib0move(&___nl__9,___get_global_const(311));
#line 41
c_rt_lib0move(&___nl__8, c_rt_lib0concat_add(___nl__8, ___nl__9));
#line 41
c_rt_lib0clear(&___nl__9);
#line 41
c_rt_lib0move(&___nl__9, string0lf());
#line 41
c_rt_lib0move(&___nl__8, c_rt_lib0concat_add(___nl__8, ___nl__9));
#line 41
c_rt_lib0clear(&___nl__9);
#line 41
c_rt_lib0delete(generator_pm_priv0print(&___nl__1, ___nl__8));
#line 41
c_rt_lib0clear(&___nl__8);
#line 42
c_rt_lib0move(&___nl__4, c_rt_lib0add_mod(___nl__4, ___nl__5));
#line 42
goto label_3;
#line 42
label_1:
#line 42
c_rt_lib0clear(&___nl__2);
#line 42
c_rt_lib0clear(&___nl__3);
#line 42
c_rt_lib0clear(&___nl__4);
#line 42
c_rt_lib0clear(&___nl__5);
#line 42
c_rt_lib0clear(&___nl__6);
#line 42
c_rt_lib0clear(&___nl__7);
#line 43
c_rt_lib0move(&___nl__2, string0lf());
#line 43
c_rt_lib0move(&___nl__3,___get_global_const(569));
#line 43
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__3));
#line 43
c_rt_lib0clear(&___nl__3);
#line 43
c_rt_lib0move(&___nl__3, string0lf());
#line 43
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__3));
#line 43
c_rt_lib0clear(&___nl__3);
#line 43
c_rt_lib0delete(generator_pm_priv0print(&___nl__1, ___nl__2));
#line 43
c_rt_lib0clear(&___nl__2);
#line 44
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(75)));
#line 44
c_rt_lib0delete(generator_pm_priv0print_functions(___nl__2, &___nl__1));
#line 44
c_rt_lib0clear(&___nl__2);
#line 45
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(566)));
#line 45
c_rt_lib0clear(&___nl__0);
#line 45
c_rt_lib0clear(&___nl__1);
#line 45
return ___nl__2;
#line 45
c_rt_lib0clear(&___nl__2);
#line 45
c_rt_lib0clear(&___nl__1);
#line 45
c_rt_lib0clear(&___nl__0);
#line 45
return NULL;
}

ImmT generator_pm_priv0print_imports(ImmT ___nl__0,ImmT * ___ref___1) {
c_rt_lib0arg_val(___nl__0);
generator_pm_priv0__const__init();
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
#line 49
c_rt_lib0move(&___nl__3,___get_global_const(1));
#line 49
c_rt_lib0move(&___nl__4,___get_global_const(2));
#line 49
c_rt_lib0move(&___nl__5, c_rt_lib0array_len(___nl__0));
#line 49
label_3:
#line 49
c_rt_lib0move(&___nl__6, c_rt_lib0ge(___nl__3, ___nl__5));
#line 49
if(c_rt_lib0check_true_native(___nl__6)){ goto label_1;}
#line 49
c_rt_lib0move(&___nl__2, c_rt_lib0array_get(___nl__0, ___nl__3));
#line 50
c_rt_lib0move(&___nl__7,___get_global_const(570));
#line 50
c_rt_lib0move(&___nl__7, c_rt_lib0concat_add(___nl__7, ___nl__2));
#line 50
c_rt_lib0move(&___nl__8,___get_global_const(311));
#line 50
c_rt_lib0move(&___nl__7, c_rt_lib0concat_add(___nl__7, ___nl__8));
#line 50
c_rt_lib0clear(&___nl__8);
#line 50
c_rt_lib0move(&___nl__8, string0lf());
#line 50
c_rt_lib0move(&___nl__7, c_rt_lib0concat_add(___nl__7, ___nl__8));
#line 50
c_rt_lib0clear(&___nl__8);
#line 50
c_rt_lib0delete(generator_pm_priv0print(___ref___1, ___nl__7));
#line 50
c_rt_lib0clear(&___nl__7);
#line 51
c_rt_lib0move(&___nl__3, c_rt_lib0add_mod(___nl__3, ___nl__4));
#line 51
goto label_3;
#line 51
label_1:
#line 51
c_rt_lib0clear(&___nl__2);
#line 51
c_rt_lib0clear(&___nl__3);
#line 51
c_rt_lib0clear(&___nl__4);
#line 51
c_rt_lib0clear(&___nl__5);
#line 51
c_rt_lib0clear(&___nl__6);
#line 51
c_rt_lib0clear(&___nl__0);
#line 51
return NULL;
}

ImmT generator_pm_priv0print_functions(ImmT ___nl__0,ImmT * ___ref___1) {
c_rt_lib0arg_val(___nl__0);
generator_pm_priv0__const__init();
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
#line 55
c_rt_lib0move(&___nl__3,___get_global_const(1));
#line 55
c_rt_lib0move(&___nl__4,___get_global_const(2));
#line 55
c_rt_lib0move(&___nl__5, c_rt_lib0array_len(___nl__0));
#line 55
label_3:
#line 55
c_rt_lib0move(&___nl__6, c_rt_lib0ge(___nl__3, ___nl__5));
#line 55
if(c_rt_lib0check_true_native(___nl__6)){ goto label_1;}
#line 55
c_rt_lib0move(&___nl__2, c_rt_lib0array_get(___nl__0, ___nl__3));
#line 56
c_rt_lib0move(&___nl__7, generator_pm_priv0is_singleton_use_function(___nl__2));
#line 56
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 56
if(c_rt_lib0check_true_native(___nl__7)){ goto label_5;}
#line 57
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(76)));
#line 58
c_rt_lib0copy(&___nl__9, ___nl__2);
#line 59
c_rt_lib0move(&___nl__10,___get_global_const(571));
#line 59
c_rt_lib0move(&___nl__10, c_rt_lib0concat_add(___nl__10, ___nl__8));
#line 59
c_rt_lib0copy(&___nl__11, ___nl__10);
#line 59
c_rt_lib0hash_set_value_dec(&___nl__9, ___get_global_const(76), ___nl__11);
#line 59
c_rt_lib0clear(&___nl__10);
#line 59
c_rt_lib0clear(&___nl__11);
#line 60
c_rt_lib0delete(generator_pm_priv0print_function(___nl__9, ___ref___1));
#line 61
c_rt_lib0move(&___nl__11, c_rt_lib0hash_get_value_dec(___nl__9, ___get_global_const(328)));
#line 61
c_rt_lib0move(&___nl__12, c_rt_lib0hash_get_value_dec(*___ref___1, ___get_global_const(430)));
#line 61
c_rt_lib0move(&___nl__10, generator_pm_priv0get_function_access(___nl__11, ___nl__12));
#line 61
c_rt_lib0clear(&___nl__12);
#line 61
c_rt_lib0clear(&___nl__11);
#line 61
c_rt_lib0move(&___nl__11, c_rt_lib0hash_get_value_dec(___nl__9, ___get_global_const(76)));
#line 61
c_rt_lib0move(&___nl__10, c_rt_lib0concat_add(___nl__10, ___nl__11));
#line 61
c_rt_lib0clear(&___nl__11);
#line 63
c_rt_lib0move(&___nl__11, string0lf());
#line 63
c_rt_lib0move(&___nl__12,___get_global_const(572));
#line 63
c_rt_lib0move(&___nl__11, c_rt_lib0concat_add(___nl__11, ___nl__12));
#line 63
c_rt_lib0clear(&___nl__12);
#line 63
c_rt_lib0move(&___nl__11, c_rt_lib0concat_add(___nl__11, ___nl__8));
#line 63
c_rt_lib0move(&___nl__12,___get_global_const(311));
#line 63
c_rt_lib0move(&___nl__11, c_rt_lib0concat_add(___nl__11, ___nl__12));
#line 63
c_rt_lib0clear(&___nl__12);
#line 63
c_rt_lib0move(&___nl__12, string0lf());
#line 63
c_rt_lib0move(&___nl__11, c_rt_lib0concat_add(___nl__11, ___nl__12));
#line 63
c_rt_lib0clear(&___nl__12);
#line 63
c_rt_lib0delete(generator_pm_priv0print(___ref___1, ___nl__11));
#line 63
c_rt_lib0clear(&___nl__11);
#line 64
c_rt_lib0move(&___nl__11,___get_global_const(568));
#line 64
c_rt_lib0delete(generator_pm_priv0print(___ref___1, ___nl__11));
#line 64
c_rt_lib0clear(&___nl__11);
#line 65
c_rt_lib0move(&___nl__11, c_rt_lib0hash_get_value_dec(___nl__9, ___get_global_const(328)));
#line 65
c_rt_lib0delete(generator_pm_priv0print_function_access(___nl__11, ___ref___1));
#line 65
c_rt_lib0clear(&___nl__11);
#line 66
c_rt_lib0move(&___nl__11,___get_global_const(573));
#line 66
c_rt_lib0move(&___nl__11, c_rt_lib0concat_new(___nl__8, ___nl__11));
#line 66
c_rt_lib0move(&___nl__12, string0lf());
#line 66
c_rt_lib0move(&___nl__11, c_rt_lib0concat_add(___nl__11, ___nl__12));
#line 66
c_rt_lib0clear(&___nl__12);
#line 66
c_rt_lib0delete(generator_pm_priv0print(___ref___1, ___nl__11));
#line 66
c_rt_lib0clear(&___nl__11);
#line 67
c_rt_lib0move(&___nl__11,___get_global_const(574));
#line 67
c_rt_lib0move(&___nl__11, c_rt_lib0concat_add(___nl__11, ___nl__8));
#line 67
c_rt_lib0move(&___nl__12,___get_global_const(448));
#line 67
c_rt_lib0move(&___nl__11, c_rt_lib0concat_add(___nl__11, ___nl__12));
#line 67
c_rt_lib0clear(&___nl__12);
#line 67
c_rt_lib0move(&___nl__11, c_rt_lib0concat_add(___nl__11, ___nl__10));
#line 67
c_rt_lib0delete(generator_pm_priv0print(___ref___1, ___nl__11));
#line 67
c_rt_lib0clear(&___nl__11);
#line 68
c_rt_lib0move(&___nl__11,___get_global_const(575));
#line 68
c_rt_lib0move(&___nl__12,___get_global_const(576));
#line 68
c_rt_lib0move(&___nl__11, c_rt_lib0concat_add(___nl__11, ___nl__12));
#line 68
c_rt_lib0clear(&___nl__12);
#line 68
c_rt_lib0move(&___nl__11, c_rt_lib0concat_add(___nl__11, ___nl__8));
#line 68
c_rt_lib0move(&___nl__12,___get_global_const(311));
#line 68
c_rt_lib0move(&___nl__11, c_rt_lib0concat_add(___nl__11, ___nl__12));
#line 68
c_rt_lib0clear(&___nl__12);
#line 68
c_rt_lib0move(&___nl__12, string0lf());
#line 68
c_rt_lib0move(&___nl__11, c_rt_lib0concat_add(___nl__11, ___nl__12));
#line 68
c_rt_lib0clear(&___nl__12);
#line 68
c_rt_lib0delete(generator_pm_priv0print(___ref___1, ___nl__11));
#line 68
c_rt_lib0clear(&___nl__11);
#line 69
c_rt_lib0move(&___nl__11,___get_global_const(577));
#line 69
c_rt_lib0move(&___nl__11, c_rt_lib0concat_add(___nl__11, ___nl__8));
#line 69
c_rt_lib0move(&___nl__12,___get_global_const(311));
#line 69
c_rt_lib0move(&___nl__11, c_rt_lib0concat_add(___nl__11, ___nl__12));
#line 69
c_rt_lib0clear(&___nl__12);
#line 69
c_rt_lib0move(&___nl__12, string0lf());
#line 69
c_rt_lib0move(&___nl__11, c_rt_lib0concat_add(___nl__11, ___nl__12));
#line 69
c_rt_lib0clear(&___nl__12);
#line 69
c_rt_lib0delete(generator_pm_priv0print(___ref___1, ___nl__11));
#line 69
c_rt_lib0clear(&___nl__11);
#line 70
c_rt_lib0move(&___nl__11,___get_global_const(169));
#line 70
c_rt_lib0move(&___nl__12, string0lf());
#line 70
c_rt_lib0move(&___nl__11, c_rt_lib0concat_add(___nl__11, ___nl__12));
#line 70
c_rt_lib0clear(&___nl__12);
#line 70
c_rt_lib0delete(generator_pm_priv0print(___ref___1, ___nl__11));
#line 70
c_rt_lib0clear(&___nl__11);
#line 70
c_rt_lib0clear(&___nl__8);
#line 70
c_rt_lib0clear(&___nl__9);
#line 70
c_rt_lib0clear(&___nl__10);
#line 71
goto label_4;
#line 71
label_5:
#line 72
c_rt_lib0delete(generator_pm_priv0print_function(___nl__2, ___ref___1));
#line 73
goto label_4;
#line 73
label_4:
#line 73
c_rt_lib0clear(&___nl__7);
#line 74
c_rt_lib0move(&___nl__3, c_rt_lib0add_mod(___nl__3, ___nl__4));
#line 74
goto label_3;
#line 74
label_1:
#line 74
c_rt_lib0clear(&___nl__2);
#line 74
c_rt_lib0clear(&___nl__3);
#line 74
c_rt_lib0clear(&___nl__4);
#line 74
c_rt_lib0clear(&___nl__5);
#line 74
c_rt_lib0clear(&___nl__6);
#line 74
c_rt_lib0clear(&___nl__0);
#line 74
return NULL;
}

ImmT generator_pm_priv0print_function(ImmT ___nl__0,ImmT * ___ref___1) {
c_rt_lib0arg_val(___nl__0);
generator_pm_priv0__const__init();
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
#line 78
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(331)));
#line 78
c_rt_lib0copy(&___nl__3, ___nl__2);
#line 78
c_rt_lib0hash_set_value_dec(___ref___1, ___get_global_const(293), ___nl__3);
#line 78
c_rt_lib0clear(&___nl__2);
#line 78
c_rt_lib0clear(&___nl__3);
#line 79
c_rt_lib0move(&___nl__2, string0lf());
#line 79
c_rt_lib0move(&___nl__3,___get_global_const(568));
#line 79
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__3));
#line 79
c_rt_lib0clear(&___nl__3);
#line 79
c_rt_lib0delete(generator_pm_priv0print(___ref___1, ___nl__2));
#line 79
c_rt_lib0clear(&___nl__2);
#line 80
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(328)));
#line 80
c_rt_lib0delete(generator_pm_priv0print_function_access(___nl__2, ___ref___1));
#line 80
c_rt_lib0clear(&___nl__2);
#line 81
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(76)));
#line 81
c_rt_lib0move(&___nl__3,___get_global_const(322));
#line 81
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__3));
#line 81
c_rt_lib0clear(&___nl__3);
#line 81
c_rt_lib0delete(generator_pm_priv0print(___ref___1, ___nl__2));
#line 81
c_rt_lib0clear(&___nl__2);
#line 82
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(331)));
#line 82
c_rt_lib0move(&___nl__2, array0len(___nl__3));
#line 82
c_rt_lib0clear(&___nl__3);
#line 82
c_rt_lib0delete(generator_pm_priv0print_args_dollar(___nl__2, ___ref___1));
#line 82
c_rt_lib0clear(&___nl__2);
#line 83
c_rt_lib0move(&___nl__2,___get_global_const(528));
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
#line 84
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(378)));
#line 84
c_rt_lib0move(&___nl__3,___get_global_const(1));
#line 84
c_rt_lib0move(&___nl__4,___get_global_const(2));
#line 84
label_3:
#line 84
c_rt_lib0move(&___nl__5, c_rt_lib0ge(___nl__3, ___nl__2));
#line 84
if(c_rt_lib0check_true_native(___nl__5)){ goto label_1;}
#line 85
c_rt_lib0move(&___nl__6,___get_global_const(578));
#line 85
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__3));
#line 85
c_rt_lib0move(&___nl__7,___get_global_const(311));
#line 85
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__7));
#line 85
c_rt_lib0clear(&___nl__7);
#line 85
c_rt_lib0delete(generator_pm_priv0print(___ref___1, ___nl__6));
#line 85
c_rt_lib0clear(&___nl__6);
#line 86
c_rt_lib0move(&___nl__3, c_rt_lib0add_mod(___nl__3, ___nl__4));
#line 86
goto label_3;
#line 86
label_1:
#line 86
c_rt_lib0clear(&___nl__2);
#line 86
c_rt_lib0clear(&___nl__3);
#line 86
c_rt_lib0clear(&___nl__4);
#line 86
c_rt_lib0clear(&___nl__5);
#line 87
c_rt_lib0delete(generator_pm_priv0move_args_to_register(___ref___1));
#line 88
c_rt_lib0move(&___nl__2, string0lf());
#line 88
c_rt_lib0delete(generator_pm_priv0print(___ref___1, ___nl__2));
#line 88
c_rt_lib0clear(&___nl__2);
#line 89
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(380)));
#line 89
c_rt_lib0delete(generator_pm_priv0print_commands(___nl__2, ___ref___1));
#line 89
c_rt_lib0clear(&___nl__2);
#line 90
c_rt_lib0delete(generator_pm_priv0move_register_to_ref_args(___ref___1));
#line 91
c_rt_lib0move(&___nl__2,___get_global_const(169));
#line 91
c_rt_lib0move(&___nl__3, string0lf());
#line 91
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__3));
#line 91
c_rt_lib0clear(&___nl__3);
#line 91
c_rt_lib0delete(generator_pm_priv0print(___ref___1, ___nl__2));
#line 91
c_rt_lib0clear(&___nl__2);
#line 91
c_rt_lib0clear(&___nl__0);
#line 91
return NULL;
}

ImmT generator_pm_priv0is_singleton_use_function(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
generator_pm_priv0__const__init();
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
#line 94
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(331)));
#line 94
c_rt_lib0move(&___nl__1, array0len(___nl__2));
#line 94
c_rt_lib0clear(&___nl__2);
#line 94
c_rt_lib0move(&___nl__2,___get_global_const(1));
#line 94
c_rt_lib0move(&___nl__1, c_rt_lib0gt(___nl__1, ___nl__2));
#line 94
c_rt_lib0clear(&___nl__2);
#line 94
c_rt_lib0move(&___nl__1, c_rt_lib0not(___nl__1));
#line 94
if(c_rt_lib0check_true_native(___nl__1)){ goto label_2;}
#line 94
c_rt_lib0move(&___nl__2, c_rt_lib0get_false());
#line 94
c_rt_lib0clear(&___nl__0);
#line 94
c_rt_lib0clear(&___nl__1);
#line 94
return ___nl__2;
#line 94
c_rt_lib0clear(&___nl__2);
#line 94
goto label_2;
#line 94
label_2:
#line 94
c_rt_lib0clear(&___nl__1);
#line 95
c_rt_lib0move(&___nl__1, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(212)));
#line 95
c_rt_lib0move(&___nl__1, c_rt_lib0priv_is(___nl__1, ___get_global_const(141)));
#line 95
c_rt_lib0move(&___nl__1, c_rt_lib0not(___nl__1));
#line 95
if(c_rt_lib0check_true_native(___nl__1)){ goto label_4;}
#line 95
c_rt_lib0move(&___nl__2, c_rt_lib0get_true());
#line 95
c_rt_lib0clear(&___nl__0);
#line 95
c_rt_lib0clear(&___nl__1);
#line 95
return ___nl__2;
#line 95
c_rt_lib0clear(&___nl__2);
#line 95
goto label_4;
#line 95
label_4:
#line 95
c_rt_lib0clear(&___nl__1);
#line 96
c_rt_lib0move(&___nl__1, c_rt_lib0get_false());
#line 98
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(380)));
#line 98
c_rt_lib0move(&___nl__5,___get_global_const(1));
#line 98
c_rt_lib0move(&___nl__6,___get_global_const(2));
#line 98
c_rt_lib0move(&___nl__7, c_rt_lib0array_len(___nl__3));
#line 98
label_7:
#line 98
c_rt_lib0move(&___nl__8, c_rt_lib0ge(___nl__5, ___nl__7));
#line 98
if(c_rt_lib0check_true_native(___nl__8)){ goto label_5;}
#line 98
c_rt_lib0move(&___nl__4, c_rt_lib0array_get(___nl__3, ___nl__5));
#line 99
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(209)));
#line 100
c_rt_lib0copy(&___nl__10, ___nl__9);
#line 100
c_rt_lib0move(&___nl__10, c_rt_lib0priv_is(___nl__10, ___get_global_const(217)));
#line 100
c_rt_lib0move(&___nl__10, c_rt_lib0not(___nl__10));
#line 100
if(c_rt_lib0check_true_native(___nl__10)){ goto label_9;}
#line 101
c_rt_lib0copy(&___nl__11, ___nl__9);
#line 101
c_rt_lib0move(&___nl__11, c_rt_lib0priv_as(___nl__11, ___get_global_const(217)));
#line 102
c_rt_lib0move(&___nl__12, c_rt_lib0hash_get_value_dec(___nl__11, ___get_global_const(385)));
#line 102
c_rt_lib0move(&___nl__13,___get_global_const(386));
#line 102
c_rt_lib0move(&___nl__12, c_rt_lib0eq(___nl__12, ___nl__13));
#line 102
c_rt_lib0clear(&___nl__13);
#line 102
c_rt_lib0move(&___nl__12, c_rt_lib0not(___nl__12));
#line 102
c_rt_lib0move(&___nl__12, c_rt_lib0not(___nl__12));
#line 102
if(c_rt_lib0check_true_native(___nl__12)){ goto label_11;}
#line 102
c_rt_lib0clear(&___nl__9);
#line 102
c_rt_lib0clear(&___nl__10);
#line 102
c_rt_lib0clear(&___nl__11);
#line 102
c_rt_lib0clear(&___nl__12);
#line 102
goto label_6;
#line 102
goto label_11;
#line 102
label_11:
#line 102
c_rt_lib0clear(&___nl__12);
#line 103
c_rt_lib0move(&___nl__12, c_rt_lib0hash_get_value_dec(___nl__11, ___get_global_const(257)));
#line 103
c_rt_lib0move(&___nl__13,___get_global_const(288));
#line 103
c_rt_lib0move(&___nl__12, c_rt_lib0eq(___nl__12, ___nl__13));
#line 103
c_rt_lib0clear(&___nl__13);
#line 103
c_rt_lib0move(&___nl__12, c_rt_lib0not(___nl__12));
#line 103
c_rt_lib0move(&___nl__12, c_rt_lib0not(___nl__12));
#line 103
if(c_rt_lib0check_true_native(___nl__12)){ goto label_13;}
#line 103
c_rt_lib0clear(&___nl__9);
#line 103
c_rt_lib0clear(&___nl__10);
#line 103
c_rt_lib0clear(&___nl__11);
#line 103
c_rt_lib0clear(&___nl__12);
#line 103
goto label_6;
#line 103
goto label_13;
#line 103
label_13:
#line 103
c_rt_lib0clear(&___nl__12);
#line 104
c_rt_lib0move(&___nl__12, c_rt_lib0get_true());
#line 104
c_rt_lib0copy(&___nl__1, ___nl__12);
#line 104
c_rt_lib0clear(&___nl__12);
#line 105
c_rt_lib0move(&___nl__12, c_rt_lib0hash_get_value_dec(___nl__11, ___get_global_const(233)));
#line 105
c_rt_lib0copy(&___nl__2, ___nl__12);
#line 105
c_rt_lib0clear(&___nl__12);
#line 105
c_rt_lib0clear(&___nl__11);
#line 106
goto label_8;
#line 106
label_9:
#line 106
c_rt_lib0copy(&___nl__10, ___nl__9);
#line 106
c_rt_lib0move(&___nl__10, c_rt_lib0priv_is(___nl__10, ___get_global_const(210)));
#line 106
c_rt_lib0move(&___nl__10, c_rt_lib0not(___nl__10));
#line 106
if(c_rt_lib0check_true_native(___nl__10)){ goto label_14;}
#line 107
c_rt_lib0copy(&___nl__11, ___nl__1);
#line 107
c_rt_lib0move(&___nl__11, c_rt_lib0not(___nl__11));
#line 107
c_rt_lib0move(&___nl__11, c_rt_lib0not(___nl__11));
#line 107
if(c_rt_lib0check_true_native(___nl__11)){ goto label_16;}
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
goto label_16;
#line 107
label_16:
#line 107
c_rt_lib0clear(&___nl__11);
#line 108
c_rt_lib0copy(&___nl__11, ___nl__9);
#line 108
c_rt_lib0move(&___nl__11, c_rt_lib0priv_as(___nl__11, ___get_global_const(210)));
#line 109
c_rt_lib0copy(&___nl__12, ___nl__11);
#line 109
c_rt_lib0move(&___nl__12, c_rt_lib0priv_is(___nl__12, ___get_global_const(234)));
#line 109
c_rt_lib0move(&___nl__12, c_rt_lib0not(___nl__12));
#line 109
c_rt_lib0move(&___nl__12, c_rt_lib0not(___nl__12));
#line 109
if(c_rt_lib0check_true_native(___nl__12)){ goto label_18;}
#line 109
c_rt_lib0move(&___nl__13, c_rt_lib0get_false());
#line 109
c_rt_lib0clear(&___nl__0);
#line 109
c_rt_lib0clear(&___nl__1);
#line 109
c_rt_lib0clear(&___nl__2);
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
#line 109
c_rt_lib0clear(&___nl__9);
#line 109
c_rt_lib0clear(&___nl__10);
#line 109
c_rt_lib0clear(&___nl__11);
#line 109
c_rt_lib0clear(&___nl__12);
#line 109
return ___nl__13;
#line 109
c_rt_lib0clear(&___nl__13);
#line 109
goto label_18;
#line 109
label_18:
#line 109
c_rt_lib0clear(&___nl__12);
#line 110
c_rt_lib0copy(&___nl__12, ___nl__11);
#line 110
c_rt_lib0move(&___nl__12, c_rt_lib0priv_as(___nl__12, ___get_global_const(234)));
#line 110
c_rt_lib0move(&___nl__12, c_rt_lib0eq(___nl__12, ___nl__2));
#line 110
c_rt_lib0clear(&___nl__0);
#line 110
c_rt_lib0clear(&___nl__1);
#line 110
c_rt_lib0clear(&___nl__2);
#line 110
c_rt_lib0clear(&___nl__3);
#line 110
c_rt_lib0clear(&___nl__4);
#line 110
c_rt_lib0clear(&___nl__5);
#line 110
c_rt_lib0clear(&___nl__6);
#line 110
c_rt_lib0clear(&___nl__7);
#line 110
c_rt_lib0clear(&___nl__8);
#line 110
c_rt_lib0clear(&___nl__9);
#line 110
c_rt_lib0clear(&___nl__10);
#line 110
c_rt_lib0clear(&___nl__11);
#line 110
return ___nl__12;
#line 110
c_rt_lib0clear(&___nl__12);
#line 110
c_rt_lib0clear(&___nl__11);
#line 111
goto label_8;
#line 111
label_14:
#line 111
c_rt_lib0copy(&___nl__10, ___nl__9);
#line 111
c_rt_lib0move(&___nl__10, c_rt_lib0priv_is(___nl__10, ___get_global_const(230)));
#line 111
c_rt_lib0move(&___nl__10, c_rt_lib0not(___nl__10));
#line 111
if(c_rt_lib0check_true_native(___nl__10)){ goto label_19;}
#line 112
goto label_8;
#line 112
label_19:
#line 112
c_rt_lib0copy(&___nl__10, ___nl__9);
#line 112
c_rt_lib0move(&___nl__10, c_rt_lib0priv_is(___nl__10, ___get_global_const(195)));
#line 112
c_rt_lib0move(&___nl__10, c_rt_lib0not(___nl__10));
#line 112
if(c_rt_lib0check_true_native(___nl__10)){ goto label_20;}
#line 113
goto label_8;
#line 113
label_20:
#line 114
c_rt_lib0copy(&___nl__11, ___nl__1);
#line 114
c_rt_lib0move(&___nl__11, c_rt_lib0not(___nl__11));
#line 114
if(c_rt_lib0check_true_native(___nl__11)){ goto label_22;}
#line 114
c_rt_lib0move(&___nl__12, c_rt_lib0get_false());
#line 114
c_rt_lib0clear(&___nl__0);
#line 114
c_rt_lib0clear(&___nl__1);
#line 114
c_rt_lib0clear(&___nl__2);
#line 114
c_rt_lib0clear(&___nl__3);
#line 114
c_rt_lib0clear(&___nl__4);
#line 114
c_rt_lib0clear(&___nl__5);
#line 114
c_rt_lib0clear(&___nl__6);
#line 114
c_rt_lib0clear(&___nl__7);
#line 114
c_rt_lib0clear(&___nl__8);
#line 114
c_rt_lib0clear(&___nl__9);
#line 114
c_rt_lib0clear(&___nl__10);
#line 114
c_rt_lib0clear(&___nl__11);
#line 114
return ___nl__12;
#line 114
c_rt_lib0clear(&___nl__12);
#line 114
goto label_22;
#line 114
label_22:
#line 114
c_rt_lib0clear(&___nl__11);
#line 115
goto label_8;
#line 115
label_8:
#line 115
c_rt_lib0clear(&___nl__10);
#line 115
c_rt_lib0clear(&___nl__9);
#line 115
label_6:
#line 116
c_rt_lib0move(&___nl__5, c_rt_lib0add_mod(___nl__5, ___nl__6));
#line 116
goto label_7;
#line 116
label_5:
#line 116
c_rt_lib0clear(&___nl__3);
#line 116
c_rt_lib0clear(&___nl__4);
#line 116
c_rt_lib0clear(&___nl__5);
#line 116
c_rt_lib0clear(&___nl__6);
#line 116
c_rt_lib0clear(&___nl__7);
#line 116
c_rt_lib0clear(&___nl__8);
#line 117
c_rt_lib0move(&___nl__3, c_rt_lib0get_false());
#line 117
c_rt_lib0clear(&___nl__0);
#line 117
c_rt_lib0clear(&___nl__1);
#line 117
c_rt_lib0clear(&___nl__2);
#line 117
return ___nl__3;
#line 117
c_rt_lib0clear(&___nl__3);
#line 117
c_rt_lib0clear(&___nl__1);
#line 117
c_rt_lib0clear(&___nl__2);
#line 117
c_rt_lib0clear(&___nl__0);
#line 117
return NULL;
}

ImmT generator_pm_priv0print_function_access(ImmT ___nl__0,ImmT * ___ref___1) {
c_rt_lib0arg_val(___nl__0);
generator_pm_priv0__const__init();
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
#line 122
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(*___ref___1, ___get_global_const(430)));
#line 122
c_rt_lib0move(&___nl__2, generator_pm_priv0get_function_access(___nl__0, ___nl__3));
#line 122
c_rt_lib0clear(&___nl__3);
#line 122
c_rt_lib0delete(generator_pm_priv0print(___ref___1, ___nl__2));
#line 122
c_rt_lib0clear(&___nl__2);
#line 122
c_rt_lib0clear(&___nl__0);
#line 122
return NULL;
}

ImmT generator_pm_priv0get_function_access(ImmT ___nl__0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
generator_pm_priv0__const__init();
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
#line 126
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__0, ___get_global_const(329)));
#line 126
if(c_rt_lib0check_true_native(___nl__2)){ goto label_2;}
#line 128
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__0, ___get_global_const(330)));
#line 128
if(c_rt_lib0check_true_native(___nl__2)){ goto label_3;}
#line 128
c_rt_lib0move(&___nl__2,___get_global_const(74));
#line 128
c_rt_lib0move(&___nl__2, c_rt_lib0array_mk(2, ___nl__2, ___nl__0));
#line 128
nl_die_arg(___nl__2);
#line 126
label_2:
#line 127
c_rt_lib0move(&___nl__3,___get_global_const(579));
#line 127
c_rt_lib0move(&___nl__3, c_rt_lib0concat_new(___nl__1, ___nl__3));
#line 127
c_rt_lib0clear(&___nl__0);
#line 127
c_rt_lib0clear(&___nl__1);
#line 127
c_rt_lib0clear(&___nl__2);
#line 127
return ___nl__3;
#line 127
c_rt_lib0clear(&___nl__3);
#line 128
goto label_1;
#line 128
label_3:
#line 129
c_rt_lib0move(&___nl__3,___get_global_const(580));
#line 129
c_rt_lib0move(&___nl__3, c_rt_lib0concat_new(___nl__1, ___nl__3));
#line 129
c_rt_lib0clear(&___nl__0);
#line 129
c_rt_lib0clear(&___nl__1);
#line 129
c_rt_lib0clear(&___nl__2);
#line 129
return ___nl__3;
#line 129
c_rt_lib0clear(&___nl__3);
#line 130
goto label_1;
#line 130
label_1:
#line 130
c_rt_lib0clear(&___nl__2);
#line 130
c_rt_lib0clear(&___nl__0);
#line 130
c_rt_lib0clear(&___nl__1);
#line 130
return NULL;
}

ImmT generator_pm_priv0print_args_dollar(ImmT ___nl__0,ImmT * ___ref___1) {
c_rt_lib0arg_val(___nl__0);
generator_pm_priv0__const__init();
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
#line 134
c_rt_lib0move(&___nl__2,___get_global_const(1));
#line 134
c_rt_lib0move(&___nl__3,___get_global_const(2));
#line 134
label_3:
#line 134
c_rt_lib0move(&___nl__4, c_rt_lib0ge(___nl__2, ___nl__0));
#line 134
if(c_rt_lib0check_true_native(___nl__4)){ goto label_1;}
#line 135
c_rt_lib0move(&___nl__5,___get_global_const(182));
#line 135
c_rt_lib0delete(generator_pm_priv0print(___ref___1, ___nl__5));
#line 135
c_rt_lib0clear(&___nl__5);
#line 136
c_rt_lib0move(&___nl__2, c_rt_lib0add_mod(___nl__2, ___nl__3));
#line 136
goto label_3;
#line 136
label_1:
#line 136
c_rt_lib0clear(&___nl__2);
#line 136
c_rt_lib0clear(&___nl__3);
#line 136
c_rt_lib0clear(&___nl__4);
#line 136
c_rt_lib0clear(&___nl__0);
#line 136
return NULL;
}

ImmT generator_pm_priv0move_args_to_register(ImmT * ___ref___0) {
generator_pm_priv0__const__init();
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
#line 140
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(293)));
#line 140
c_rt_lib0move(&___nl__1, array0len(___nl__2));
#line 140
c_rt_lib0clear(&___nl__2);
#line 140
c_rt_lib0move(&___nl__2,___get_global_const(1));
#line 140
c_rt_lib0move(&___nl__3,___get_global_const(2));
#line 140
label_3:
#line 140
c_rt_lib0move(&___nl__4, c_rt_lib0ge(___nl__2, ___nl__1));
#line 140
if(c_rt_lib0check_true_native(___nl__4)){ goto label_1;}
#line 141
c_rt_lib0move(&___nl__5,___get_global_const(581));
#line 141
c_rt_lib0move(&___nl__5, c_rt_lib0concat_add(___nl__5, ___nl__2));
#line 141
c_rt_lib0move(&___nl__6,___get_global_const(582));
#line 141
c_rt_lib0move(&___nl__5, c_rt_lib0concat_add(___nl__5, ___nl__6));
#line 141
c_rt_lib0clear(&___nl__6);
#line 141
c_rt_lib0move(&___nl__5, c_rt_lib0concat_add(___nl__5, ___nl__2));
#line 141
c_rt_lib0move(&___nl__6,___get_global_const(583));
#line 141
c_rt_lib0move(&___nl__5, c_rt_lib0concat_add(___nl__5, ___nl__6));
#line 141
c_rt_lib0clear(&___nl__6);
#line 141
c_rt_lib0delete(generator_pm_priv0print(___ref___0, ___nl__5));
#line 141
c_rt_lib0clear(&___nl__5);
#line 142
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(293)));
#line 142
c_rt_lib0move(&___nl__5, c_rt_lib0array_get(___nl__5, ___nl__2));
#line 142
c_rt_lib0move(&___nl__6, c_rt_lib0priv_is(___nl__5, ___get_global_const(234)));
#line 142
if(c_rt_lib0check_true_native(___nl__6)){ goto label_5;}
#line 143
c_rt_lib0move(&___nl__6, c_rt_lib0priv_is(___nl__5, ___get_global_const(5)));
#line 143
if(c_rt_lib0check_true_native(___nl__6)){ goto label_6;}
#line 143
c_rt_lib0move(&___nl__6,___get_global_const(74));
#line 143
c_rt_lib0move(&___nl__6, c_rt_lib0array_mk(2, ___nl__6, ___nl__5));
#line 143
nl_die_arg(___nl__6);
#line 142
label_5:
#line 143
goto label_4;
#line 143
label_6:
#line 144
c_rt_lib0move(&___nl__7,___get_global_const(584));
#line 144
c_rt_lib0move(&___nl__7, c_rt_lib0concat_add(___nl__7, ___nl__2));
#line 144
c_rt_lib0move(&___nl__8,___get_global_const(585));
#line 144
c_rt_lib0move(&___nl__7, c_rt_lib0concat_add(___nl__7, ___nl__8));
#line 144
c_rt_lib0clear(&___nl__8);
#line 144
c_rt_lib0move(&___nl__7, c_rt_lib0concat_add(___nl__7, ___nl__2));
#line 144
c_rt_lib0move(&___nl__8,___get_global_const(586));
#line 144
c_rt_lib0move(&___nl__7, c_rt_lib0concat_add(___nl__7, ___nl__8));
#line 144
c_rt_lib0clear(&___nl__8);
#line 144
c_rt_lib0delete(generator_pm_priv0print(___ref___0, ___nl__7));
#line 144
c_rt_lib0clear(&___nl__7);
#line 145
goto label_4;
#line 145
label_4:
#line 145
c_rt_lib0clear(&___nl__5);
#line 145
c_rt_lib0clear(&___nl__6);
#line 146
c_rt_lib0move(&___nl__2, c_rt_lib0add_mod(___nl__2, ___nl__3));
#line 146
goto label_3;
#line 146
label_1:
#line 146
c_rt_lib0clear(&___nl__1);
#line 146
c_rt_lib0clear(&___nl__2);
#line 146
c_rt_lib0clear(&___nl__3);
#line 146
c_rt_lib0clear(&___nl__4);
#line 146
return NULL;
}

ImmT generator_pm_priv0move_register_to_ref_args(ImmT * ___ref___0) {
generator_pm_priv0__const__init();
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
#line 149
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(293)));
#line 149
c_rt_lib0move(&___nl__1, array0len(___nl__2));
#line 149
c_rt_lib0clear(&___nl__2);
#line 149
c_rt_lib0move(&___nl__2,___get_global_const(1));
#line 149
c_rt_lib0move(&___nl__3,___get_global_const(2));
#line 149
label_3:
#line 149
c_rt_lib0move(&___nl__4, c_rt_lib0ge(___nl__2, ___nl__1));
#line 149
if(c_rt_lib0check_true_native(___nl__4)){ goto label_1;}
#line 150
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(293)));
#line 150
c_rt_lib0move(&___nl__5, c_rt_lib0array_get(___nl__5, ___nl__2));
#line 150
c_rt_lib0move(&___nl__6, c_rt_lib0priv_is(___nl__5, ___get_global_const(234)));
#line 150
if(c_rt_lib0check_true_native(___nl__6)){ goto label_5;}
#line 151
c_rt_lib0move(&___nl__6, c_rt_lib0priv_is(___nl__5, ___get_global_const(5)));
#line 151
if(c_rt_lib0check_true_native(___nl__6)){ goto label_6;}
#line 151
c_rt_lib0move(&___nl__6,___get_global_const(74));
#line 151
c_rt_lib0move(&___nl__6, c_rt_lib0array_mk(2, ___nl__6, ___nl__5));
#line 151
nl_die_arg(___nl__6);
#line 150
label_5:
#line 151
goto label_4;
#line 151
label_6:
#line 152
c_rt_lib0move(&___nl__7,___get_global_const(587));
#line 152
c_rt_lib0move(&___nl__7, c_rt_lib0concat_add(___nl__7, ___nl__2));
#line 152
c_rt_lib0move(&___nl__8,___get_global_const(588));
#line 152
c_rt_lib0move(&___nl__7, c_rt_lib0concat_add(___nl__7, ___nl__8));
#line 152
c_rt_lib0clear(&___nl__8);
#line 152
c_rt_lib0move(&___nl__7, c_rt_lib0concat_add(___nl__7, ___nl__2));
#line 152
c_rt_lib0move(&___nl__8,___get_global_const(311));
#line 152
c_rt_lib0move(&___nl__7, c_rt_lib0concat_add(___nl__7, ___nl__8));
#line 152
c_rt_lib0clear(&___nl__8);
#line 152
c_rt_lib0delete(generator_pm_priv0print(___ref___0, ___nl__7));
#line 152
c_rt_lib0clear(&___nl__7);
#line 153
goto label_4;
#line 153
label_4:
#line 153
c_rt_lib0clear(&___nl__5);
#line 153
c_rt_lib0clear(&___nl__6);
#line 154
c_rt_lib0move(&___nl__2, c_rt_lib0add_mod(___nl__2, ___nl__3));
#line 154
goto label_3;
#line 154
label_1:
#line 154
c_rt_lib0clear(&___nl__1);
#line 154
c_rt_lib0clear(&___nl__2);
#line 154
c_rt_lib0clear(&___nl__3);
#line 154
c_rt_lib0clear(&___nl__4);
#line 154
return NULL;
}

ImmT generator_pm_priv0print_commands(ImmT ___nl__0,ImmT * ___ref___1) {
c_rt_lib0arg_val(___nl__0);
generator_pm_priv0__const__init();
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
#line 157
c_rt_lib0move(&___nl__3,___get_global_const(1));
#line 157
c_rt_lib0move(&___nl__4,___get_global_const(2));
#line 157
c_rt_lib0move(&___nl__5, c_rt_lib0array_len(___nl__0));
#line 157
label_3:
#line 157
c_rt_lib0move(&___nl__6, c_rt_lib0ge(___nl__3, ___nl__5));
#line 157
if(c_rt_lib0check_true_native(___nl__6)){ goto label_1;}
#line 157
c_rt_lib0move(&___nl__2, c_rt_lib0array_get(___nl__0, ___nl__3));
#line 158
c_rt_lib0delete(generator_pm_priv0print_command(___nl__2, ___ref___1));
#line 159
c_rt_lib0move(&___nl__3, c_rt_lib0add_mod(___nl__3, ___nl__4));
#line 159
goto label_3;
#line 159
label_1:
#line 159
c_rt_lib0clear(&___nl__2);
#line 159
c_rt_lib0clear(&___nl__3);
#line 159
c_rt_lib0clear(&___nl__4);
#line 159
c_rt_lib0clear(&___nl__5);
#line 159
c_rt_lib0clear(&___nl__6);
#line 159
c_rt_lib0clear(&___nl__0);
#line 159
return NULL;
}

ImmT generator_pm_priv0print_command(ImmT ___nl__0,ImmT * ___ref___1) {
c_rt_lib0arg_val(___nl__0);
generator_pm_priv0__const__init();
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
#line 163
c_rt_lib0move(&___nl__2,___get_global_const(394));
#line 163
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(213)));
#line 163
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(395)));
#line 163
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(396)));
#line 163
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(98)));
#line 163
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__3));
#line 163
c_rt_lib0clear(&___nl__3);
#line 163
c_rt_lib0move(&___nl__3, string0lf());
#line 163
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__3));
#line 163
c_rt_lib0clear(&___nl__3);
#line 163
c_rt_lib0delete(generator_pm_priv0print(___ref___1, ___nl__2));
#line 163
c_rt_lib0clear(&___nl__2);
#line 164
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(209)));
#line 164
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(215)));
#line 164
if(c_rt_lib0check_true_native(___nl__3)){ goto label_2;}
#line 176
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(216)));
#line 176
if(c_rt_lib0check_true_native(___nl__3)){ goto label_3;}
#line 186
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(217)));
#line 186
if(c_rt_lib0check_true_native(___nl__3)){ goto label_4;}
#line 188
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(71)));
#line 188
if(c_rt_lib0check_true_native(___nl__3)){ goto label_5;}
#line 194
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(218)));
#line 194
if(c_rt_lib0check_true_native(___nl__3)){ goto label_6;}
#line 196
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(219)));
#line 196
if(c_rt_lib0check_true_native(___nl__3)){ goto label_7;}
#line 198
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(220)));
#line 198
if(c_rt_lib0check_true_native(___nl__3)){ goto label_8;}
#line 203
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(221)));
#line 203
if(c_rt_lib0check_true_native(___nl__3)){ goto label_9;}
#line 208
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(210)));
#line 208
if(c_rt_lib0check_true_native(___nl__3)){ goto label_10;}
#line 217
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(229)));
#line 217
if(c_rt_lib0check_true_native(___nl__3)){ goto label_11;}
#line 221
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(222)));
#line 221
if(c_rt_lib0check_true_native(___nl__3)){ goto label_12;}
#line 225
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(223)));
#line 225
if(c_rt_lib0check_true_native(___nl__3)){ goto label_13;}
#line 232
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(224)));
#line 232
if(c_rt_lib0check_true_native(___nl__3)){ goto label_14;}
#line 238
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(225)));
#line 238
if(c_rt_lib0check_true_native(___nl__3)){ goto label_15;}
#line 240
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(226)));
#line 240
if(c_rt_lib0check_true_native(___nl__3)){ goto label_16;}
#line 244
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(227)));
#line 244
if(c_rt_lib0check_true_native(___nl__3)){ goto label_17;}
#line 246
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(228)));
#line 246
if(c_rt_lib0check_true_native(___nl__3)){ goto label_18;}
#line 248
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(230)));
#line 248
if(c_rt_lib0check_true_native(___nl__3)){ goto label_19;}
#line 250
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(231)));
#line 250
if(c_rt_lib0check_true_native(___nl__3)){ goto label_20;}
#line 256
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(232)));
#line 256
if(c_rt_lib0check_true_native(___nl__3)){ goto label_21;}
#line 258
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(195)));
#line 258
if(c_rt_lib0check_true_native(___nl__3)){ goto label_22;}
#line 258
c_rt_lib0move(&___nl__3,___get_global_const(74));
#line 258
c_rt_lib0move(&___nl__3, c_rt_lib0array_mk(2, ___nl__3, ___nl__2));
#line 258
nl_die_arg(___nl__3);
#line 164
label_2:
#line 164
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(215)));
#line 165
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(233)));
#line 165
c_rt_lib0delete(generator_pm_priv0print_register_to_assign(___nl__5, ___ref___1));
#line 165
c_rt_lib0clear(&___nl__5);
#line 166
c_rt_lib0move(&___nl__5,___get_global_const(174));
#line 166
c_rt_lib0delete(generator_pm_priv0print(___ref___1, ___nl__5));
#line 166
c_rt_lib0clear(&___nl__5);
#line 167
c_rt_lib0move(&___nl__5,___get_global_const(1));
#line 168
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(39)));
#line 168
c_rt_lib0move(&___nl__8,___get_global_const(1));
#line 168
c_rt_lib0move(&___nl__9,___get_global_const(2));
#line 168
c_rt_lib0move(&___nl__10, c_rt_lib0array_len(___nl__6));
#line 168
label_25:
#line 168
c_rt_lib0move(&___nl__11, c_rt_lib0ge(___nl__8, ___nl__10));
#line 168
if(c_rt_lib0check_true_native(___nl__11)){ goto label_23;}
#line 168
c_rt_lib0move(&___nl__7, c_rt_lib0array_get(___nl__6, ___nl__8));
#line 169
c_rt_lib0move(&___nl__12,___get_global_const(1));
#line 169
c_rt_lib0move(&___nl__12, c_rt_lib0gt(___nl__5, ___nl__12));
#line 169
c_rt_lib0move(&___nl__12, c_rt_lib0not(___nl__12));
#line 169
if(c_rt_lib0check_true_native(___nl__12)){ goto label_27;}
#line 170
c_rt_lib0move(&___nl__13,___get_global_const(172));
#line 170
c_rt_lib0delete(generator_pm_priv0print(___ref___1, ___nl__13));
#line 170
c_rt_lib0clear(&___nl__13);
#line 171
goto label_27;
#line 171
label_27:
#line 171
c_rt_lib0clear(&___nl__12);
#line 172
c_rt_lib0delete(generator_pm_priv0print_register(___nl__7, ___ref___1));
#line 173
c_rt_lib0move(&___nl__12,___get_global_const(2));
#line 173
c_rt_lib0move(&___nl__5, c_rt_lib0add_mod(___nl__5, ___nl__12));
#line 173
c_rt_lib0clear(&___nl__12);
#line 174
c_rt_lib0move(&___nl__8, c_rt_lib0add_mod(___nl__8, ___nl__9));
#line 174
goto label_25;
#line 174
label_23:
#line 174
c_rt_lib0clear(&___nl__6);
#line 174
c_rt_lib0clear(&___nl__7);
#line 174
c_rt_lib0clear(&___nl__8);
#line 174
c_rt_lib0clear(&___nl__9);
#line 174
c_rt_lib0clear(&___nl__10);
#line 174
c_rt_lib0clear(&___nl__11);
#line 175
c_rt_lib0move(&___nl__6,___get_global_const(583));
#line 175
c_rt_lib0delete(generator_pm_priv0print(___ref___1, ___nl__6));
#line 175
c_rt_lib0clear(&___nl__6);
#line 175
c_rt_lib0clear(&___nl__5);
#line 175
c_rt_lib0clear(&___nl__4);
#line 176
goto label_1;
#line 176
label_3:
#line 176
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(216)));
#line 177
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(233)));
#line 177
c_rt_lib0delete(generator_pm_priv0print_register_to_assign(___nl__5, ___ref___1));
#line 177
c_rt_lib0clear(&___nl__5);
#line 178
c_rt_lib0move(&___nl__5,___get_global_const(168));
#line 178
c_rt_lib0delete(generator_pm_priv0print(___ref___1, ___nl__5));
#line 178
c_rt_lib0clear(&___nl__5);
#line 179
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(39)));
#line 179
c_rt_lib0move(&___nl__7,___get_global_const(1));
#line 179
c_rt_lib0move(&___nl__8,___get_global_const(2));
#line 179
c_rt_lib0move(&___nl__9, c_rt_lib0array_len(___nl__5));
#line 179
label_30:
#line 179
c_rt_lib0move(&___nl__10, c_rt_lib0ge(___nl__7, ___nl__9));
#line 179
if(c_rt_lib0check_true_native(___nl__10)){ goto label_28;}
#line 179
c_rt_lib0move(&___nl__6, c_rt_lib0array_get(___nl__5, ___nl__7));
#line 180
c_rt_lib0move(&___nl__11, c_rt_lib0hash_get_value_dec(___nl__6, ___get_global_const(279)));
#line 180
c_rt_lib0delete(generator_pm_priv0print(___ref___1, ___nl__11));
#line 180
c_rt_lib0clear(&___nl__11);
#line 181
c_rt_lib0move(&___nl__11,___get_global_const(187));
#line 181
c_rt_lib0delete(generator_pm_priv0print(___ref___1, ___nl__11));
#line 181
c_rt_lib0clear(&___nl__11);
#line 182
c_rt_lib0move(&___nl__11, c_rt_lib0hash_get_value_dec(___nl__6, ___get_global_const(234)));
#line 182
c_rt_lib0delete(generator_pm_priv0print_register(___nl__11, ___ref___1));
#line 182
c_rt_lib0clear(&___nl__11);
#line 183
c_rt_lib0move(&___nl__11,___get_global_const(172));
#line 183
c_rt_lib0delete(generator_pm_priv0print(___ref___1, ___nl__11));
#line 183
c_rt_lib0clear(&___nl__11);
#line 184
c_rt_lib0move(&___nl__7, c_rt_lib0add_mod(___nl__7, ___nl__8));
#line 184
goto label_30;
#line 184
label_28:
#line 184
c_rt_lib0clear(&___nl__5);
#line 184
c_rt_lib0clear(&___nl__6);
#line 184
c_rt_lib0clear(&___nl__7);
#line 184
c_rt_lib0clear(&___nl__8);
#line 184
c_rt_lib0clear(&___nl__9);
#line 184
c_rt_lib0clear(&___nl__10);
#line 185
c_rt_lib0move(&___nl__5,___get_global_const(589));
#line 185
c_rt_lib0delete(generator_pm_priv0print(___ref___1, ___nl__5));
#line 185
c_rt_lib0clear(&___nl__5);
#line 185
c_rt_lib0clear(&___nl__4);
#line 186
goto label_1;
#line 186
label_4:
#line 186
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(217)));
#line 187
c_rt_lib0delete(generator_pm_priv0print_call(___nl__4, ___ref___1));
#line 187
c_rt_lib0clear(&___nl__4);
#line 188
goto label_1;
#line 188
label_5:
#line 188
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(71)));
#line 189
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(233)));
#line 189
c_rt_lib0delete(generator_pm_priv0print_register_to_assign(___nl__5, ___ref___1));
#line 189
c_rt_lib0clear(&___nl__5);
#line 190
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(99)));
#line 190
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(76)));
#line 190
c_rt_lib0move(&___nl__6, c_rt_lib0hash_mk(2, ___get_global_const(99), ___nl__7, ___get_global_const(76), ___nl__8));
#line 190
c_rt_lib0clear(&___nl__7);
#line 190
c_rt_lib0clear(&___nl__8);
#line 190
c_rt_lib0move(&___nl__5, dfile0ssave(___nl__6));
#line 190
c_rt_lib0clear(&___nl__6);
#line 190
c_rt_lib0move(&___nl__6,___get_global_const(311));
#line 190
c_rt_lib0move(&___nl__5, c_rt_lib0concat_add(___nl__5, ___nl__6));
#line 190
c_rt_lib0clear(&___nl__6);
#line 190
c_rt_lib0delete(generator_pm_priv0print(___ref___1, ___nl__5));
#line 190
c_rt_lib0clear(&___nl__5);
#line 190
c_rt_lib0clear(&___nl__4);
#line 194
goto label_1;
#line 194
label_6:
#line 194
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(218)));
#line 195
c_rt_lib0delete(generator_pm_priv0print_una_op(___nl__4, ___ref___1));
#line 195
c_rt_lib0clear(&___nl__4);
#line 196
goto label_1;
#line 196
label_7:
#line 196
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(219)));
#line 197
c_rt_lib0delete(generator_pm_priv0print_bin_op(___nl__4, ___ref___1));
#line 197
c_rt_lib0clear(&___nl__4);
#line 198
goto label_1;
#line 198
label_8:
#line 198
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(220)));
#line 199
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(233)));
#line 199
c_rt_lib0delete(generator_pm_priv0print_register_to_assign(___nl__5, ___ref___1));
#line 199
c_rt_lib0clear(&___nl__5);
#line 200
c_rt_lib0move(&___nl__5,___get_global_const(590));
#line 200
c_rt_lib0delete(generator_pm_priv0print(___ref___1, ___nl__5));
#line 200
c_rt_lib0clear(&___nl__5);
#line 201
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(39)));
#line 201
c_rt_lib0delete(generator_pm_priv0print_register(___nl__5, ___ref___1));
#line 201
c_rt_lib0clear(&___nl__5);
#line 202
c_rt_lib0move(&___nl__5,___get_global_const(591));
#line 202
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(72)));
#line 202
c_rt_lib0move(&___nl__5, c_rt_lib0concat_add(___nl__5, ___nl__6));
#line 202
c_rt_lib0clear(&___nl__6);
#line 202
c_rt_lib0move(&___nl__6,___get_global_const(592));
#line 202
c_rt_lib0move(&___nl__5, c_rt_lib0concat_add(___nl__5, ___nl__6));
#line 202
c_rt_lib0clear(&___nl__6);
#line 202
c_rt_lib0delete(generator_pm_priv0print(___ref___1, ___nl__5));
#line 202
c_rt_lib0clear(&___nl__5);
#line 202
c_rt_lib0clear(&___nl__4);
#line 203
goto label_1;
#line 203
label_9:
#line 203
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(221)));
#line 204
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(233)));
#line 204
c_rt_lib0delete(generator_pm_priv0print_register_to_assign(___nl__5, ___ref___1));
#line 204
c_rt_lib0clear(&___nl__5);
#line 205
c_rt_lib0move(&___nl__5,___get_global_const(593));
#line 205
c_rt_lib0delete(generator_pm_priv0print(___ref___1, ___nl__5));
#line 205
c_rt_lib0clear(&___nl__5);
#line 206
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(39)));
#line 206
c_rt_lib0delete(generator_pm_priv0print_register(___nl__5, ___ref___1));
#line 206
c_rt_lib0clear(&___nl__5);
#line 207
c_rt_lib0move(&___nl__5,___get_global_const(591));
#line 207
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(72)));
#line 207
c_rt_lib0move(&___nl__5, c_rt_lib0concat_add(___nl__5, ___nl__6));
#line 207
c_rt_lib0clear(&___nl__6);
#line 207
c_rt_lib0move(&___nl__6,___get_global_const(592));
#line 207
c_rt_lib0move(&___nl__5, c_rt_lib0concat_add(___nl__5, ___nl__6));
#line 207
c_rt_lib0clear(&___nl__6);
#line 207
c_rt_lib0delete(generator_pm_priv0print(___ref___1, ___nl__5));
#line 207
c_rt_lib0clear(&___nl__5);
#line 207
c_rt_lib0clear(&___nl__4);
#line 208
goto label_1;
#line 208
label_10:
#line 208
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(210)));
#line 209
c_rt_lib0delete(generator_pm_priv0move_register_to_ref_args(___ref___1));
#line 210
c_rt_lib0move(&___nl__5, c_rt_lib0priv_is(___nl__4, ___get_global_const(234)));
#line 210
if(c_rt_lib0check_true_native(___nl__5)){ goto label_32;}
#line 214
c_rt_lib0move(&___nl__5, c_rt_lib0priv_is(___nl__4, ___get_global_const(211)));
#line 214
if(c_rt_lib0check_true_native(___nl__5)){ goto label_33;}
#line 214
c_rt_lib0move(&___nl__5,___get_global_const(74));
#line 214
c_rt_lib0move(&___nl__5, c_rt_lib0array_mk(2, ___nl__5, ___nl__4));
#line 214
nl_die_arg(___nl__5);
#line 210
label_32:
#line 210
c_rt_lib0move(&___nl__6, c_rt_lib0priv_as(___nl__4, ___get_global_const(234)));
#line 211
c_rt_lib0move(&___nl__7,___get_global_const(348));
#line 211
c_rt_lib0delete(generator_pm_priv0print(___ref___1, ___nl__7));
#line 211
c_rt_lib0clear(&___nl__7);
#line 212
c_rt_lib0delete(generator_pm_priv0print_register(___nl__6, ___ref___1));
#line 213
c_rt_lib0move(&___nl__7,___get_global_const(311));
#line 213
c_rt_lib0delete(generator_pm_priv0print(___ref___1, ___nl__7));
#line 213
c_rt_lib0clear(&___nl__7);
#line 213
c_rt_lib0clear(&___nl__6);
#line 214
goto label_31;
#line 214
label_33:
#line 215
c_rt_lib0move(&___nl__6,___get_global_const(594));
#line 215
c_rt_lib0delete(generator_pm_priv0print(___ref___1, ___nl__6));
#line 215
c_rt_lib0clear(&___nl__6);
#line 216
goto label_31;
#line 216
label_31:
#line 216
c_rt_lib0clear(&___nl__5);
#line 216
c_rt_lib0clear(&___nl__4);
#line 217
goto label_1;
#line 217
label_11:
#line 217
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(229)));
#line 218
c_rt_lib0move(&___nl__5,___get_global_const(595));
#line 218
c_rt_lib0delete(generator_pm_priv0print(___ref___1, ___nl__5));
#line 218
c_rt_lib0clear(&___nl__5);
#line 219
c_rt_lib0delete(generator_pm_priv0print_register(___nl__4, ___ref___1));
#line 220
c_rt_lib0move(&___nl__5,___get_global_const(550));
#line 220
c_rt_lib0delete(generator_pm_priv0print(___ref___1, ___nl__5));
#line 220
c_rt_lib0clear(&___nl__5);
#line 220
c_rt_lib0clear(&___nl__4);
#line 221
goto label_1;
#line 221
label_12:
#line 221
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(222)));
#line 222
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(233)));
#line 222
c_rt_lib0delete(generator_pm_priv0print_register_to_assign(___nl__5, ___ref___1));
#line 222
c_rt_lib0clear(&___nl__5);
#line 223
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(39)));
#line 223
c_rt_lib0delete(generator_pm_priv0print_register(___nl__5, ___ref___1));
#line 223
c_rt_lib0clear(&___nl__5);
#line 224
c_rt_lib0move(&___nl__5,___get_global_const(311));
#line 224
c_rt_lib0delete(generator_pm_priv0print(___ref___1, ___nl__5));
#line 224
c_rt_lib0clear(&___nl__5);
#line 224
c_rt_lib0clear(&___nl__4);
#line 225
goto label_1;
#line 225
label_13:
#line 225
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(223)));
#line 226
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(233)));
#line 226
c_rt_lib0delete(generator_pm_priv0print_register_to_assign(___nl__5, ___ref___1));
#line 226
c_rt_lib0clear(&___nl__5);
#line 227
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(234)));
#line 227
c_rt_lib0move(&___nl__5, nl0is_sim(___nl__8));
#line 227
c_rt_lib0clear(&___nl__8);
#line 227
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__5));
#line 227
if(c_rt_lib0check_true_native(___nl__7)){ goto label_37;}
#line 227
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(234)));
#line 227
c_rt_lib0move(&___nl__9,___get_global_const(0));
#line 227
c_rt_lib0move(&___nl__8, c_rt_lib0concat_add(___nl__8, ___nl__9));
#line 227
c_rt_lib0clear(&___nl__9);
#line 227
c_rt_lib0move(&___nl__5, string_utils0is_integer(___nl__8));
#line 227
c_rt_lib0clear(&___nl__8);
#line 227
label_37:
#line 227
c_rt_lib0clear(&___nl__7);
#line 227
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__5));
#line 227
if(c_rt_lib0check_true_native(___nl__6)){ goto label_36;}
#line 227
c_rt_lib0move(&___nl__5,___get_global_const(1));
#line 227
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(234)));
#line 227
c_rt_lib0move(&___nl__5, c_rt_lib0add_mod(___nl__5, ___nl__7));
#line 227
c_rt_lib0clear(&___nl__7);
#line 227
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(234)));
#line 227
c_rt_lib0move(&___nl__5, c_rt_lib0eq(___nl__5, ___nl__7));
#line 227
c_rt_lib0clear(&___nl__7);
#line 227
label_36:
#line 227
c_rt_lib0clear(&___nl__6);
#line 227
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 227
if(c_rt_lib0check_true_native(___nl__5)){ goto label_35;}
#line 228
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(234)));
#line 228
c_rt_lib0move(&___nl__7,___get_global_const(311));
#line 228
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__7));
#line 228
c_rt_lib0clear(&___nl__7);
#line 228
c_rt_lib0delete(generator_pm_priv0print(___ref___1, ___nl__6));
#line 228
c_rt_lib0clear(&___nl__6);
#line 229
goto label_34;
#line 229
label_35:
#line 230
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(234)));
#line 230
c_rt_lib0move(&___nl__6, dfile0ssave(___nl__7));
#line 230
c_rt_lib0clear(&___nl__7);
#line 230
c_rt_lib0move(&___nl__7,___get_global_const(311));
#line 230
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__7));
#line 230
c_rt_lib0clear(&___nl__7);
#line 230
c_rt_lib0delete(generator_pm_priv0print(___ref___1, ___nl__6));
#line 230
c_rt_lib0clear(&___nl__6);
#line 231
goto label_34;
#line 231
label_34:
#line 231
c_rt_lib0clear(&___nl__5);
#line 231
c_rt_lib0clear(&___nl__4);
#line 232
goto label_1;
#line 232
label_14:
#line 232
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(224)));
#line 233
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(233)));
#line 233
c_rt_lib0delete(generator_pm_priv0print_register_to_assign(___nl__5, ___ref___1));
#line 233
c_rt_lib0clear(&___nl__5);
#line 234
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(39)));
#line 234
c_rt_lib0delete(generator_pm_priv0print_register(___nl__5, ___ref___1));
#line 234
c_rt_lib0clear(&___nl__5);
#line 235
c_rt_lib0move(&___nl__5,___get_global_const(596));
#line 235
c_rt_lib0delete(generator_pm_priv0print(___ref___1, ___nl__5));
#line 235
c_rt_lib0clear(&___nl__5);
#line 236
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(237)));
#line 236
c_rt_lib0delete(generator_pm_priv0print_register(___nl__5, ___ref___1));
#line 236
c_rt_lib0clear(&___nl__5);
#line 237
c_rt_lib0move(&___nl__5,___get_global_const(583));
#line 237
c_rt_lib0delete(generator_pm_priv0print(___ref___1, ___nl__5));
#line 237
c_rt_lib0clear(&___nl__5);
#line 237
c_rt_lib0clear(&___nl__4);
#line 238
goto label_1;
#line 238
label_15:
#line 238
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(225)));
#line 239
c_rt_lib0delete(generator_pm_priv0print_set_at_idx(___nl__4, ___ref___1));
#line 239
c_rt_lib0clear(&___nl__4);
#line 240
goto label_1;
#line 240
label_16:
#line 240
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(226)));
#line 241
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(233)));
#line 241
c_rt_lib0delete(generator_pm_priv0print_register_to_assign(___nl__5, ___ref___1));
#line 241
c_rt_lib0clear(&___nl__5);
#line 242
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(39)));
#line 242
c_rt_lib0delete(generator_pm_priv0print_register(___nl__5, ___ref___1));
#line 242
c_rt_lib0clear(&___nl__5);
#line 243
c_rt_lib0move(&___nl__5,___get_global_const(597));
#line 243
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(279)));
#line 243
c_rt_lib0move(&___nl__5, c_rt_lib0concat_add(___nl__5, ___nl__6));
#line 243
c_rt_lib0clear(&___nl__6);
#line 243
c_rt_lib0move(&___nl__6,___get_global_const(598));
#line 243
c_rt_lib0move(&___nl__5, c_rt_lib0concat_add(___nl__5, ___nl__6));
#line 243
c_rt_lib0clear(&___nl__6);
#line 243
c_rt_lib0delete(generator_pm_priv0print(___ref___1, ___nl__5));
#line 243
c_rt_lib0clear(&___nl__5);
#line 243
c_rt_lib0clear(&___nl__4);
#line 244
goto label_1;
#line 244
label_17:
#line 244
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(227)));
#line 245
c_rt_lib0delete(generator_pm_priv0print_set_val(___nl__4, ___ref___1));
#line 245
c_rt_lib0clear(&___nl__4);
#line 246
goto label_1;
#line 246
label_18:
#line 246
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(228)));
#line 247
c_rt_lib0delete(generator_pm_priv0print_ov_mk(___nl__4, ___ref___1));
#line 247
c_rt_lib0clear(&___nl__4);
#line 248
goto label_1;
#line 248
label_19:
#line 248
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(230)));
#line 249
c_rt_lib0move(&___nl__5,___get_global_const(371));
#line 249
c_rt_lib0move(&___nl__5, c_rt_lib0concat_new(___nl__4, ___nl__5));
#line 249
c_rt_lib0delete(generator_pm_priv0print(___ref___1, ___nl__5));
#line 249
c_rt_lib0clear(&___nl__5);
#line 249
c_rt_lib0clear(&___nl__4);
#line 250
goto label_1;
#line 250
label_20:
#line 250
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(231)));
#line 251
c_rt_lib0move(&___nl__5,___get_global_const(599));
#line 251
c_rt_lib0delete(generator_pm_priv0print(___ref___1, ___nl__5));
#line 251
c_rt_lib0clear(&___nl__5);
#line 252
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(39)));
#line 252
c_rt_lib0delete(generator_pm_priv0print_register(___nl__5, ___ref___1));
#line 252
c_rt_lib0clear(&___nl__5);
#line 253
c_rt_lib0move(&___nl__5,___get_global_const(475));
#line 253
c_rt_lib0delete(generator_pm_priv0print(___ref___1, ___nl__5));
#line 253
c_rt_lib0clear(&___nl__5);
#line 254
c_rt_lib0move(&___nl__5,___get_global_const(416));
#line 254
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(233)));
#line 254
c_rt_lib0move(&___nl__5, c_rt_lib0concat_add(___nl__5, ___nl__6));
#line 254
c_rt_lib0clear(&___nl__6);
#line 254
c_rt_lib0move(&___nl__6,___get_global_const(311));
#line 254
c_rt_lib0move(&___nl__5, c_rt_lib0concat_add(___nl__5, ___nl__6));
#line 254
c_rt_lib0clear(&___nl__6);
#line 254
c_rt_lib0delete(generator_pm_priv0print(___ref___1, ___nl__5));
#line 254
c_rt_lib0clear(&___nl__5);
#line 255
c_rt_lib0move(&___nl__5,___get_global_const(169));
#line 255
c_rt_lib0delete(generator_pm_priv0print(___ref___1, ___nl__5));
#line 255
c_rt_lib0clear(&___nl__5);
#line 255
c_rt_lib0clear(&___nl__4);
#line 256
goto label_1;
#line 256
label_21:
#line 256
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(232)));
#line 257
c_rt_lib0move(&___nl__5,___get_global_const(416));
#line 257
c_rt_lib0move(&___nl__5, c_rt_lib0concat_add(___nl__5, ___nl__4));
#line 257
c_rt_lib0move(&___nl__6,___get_global_const(311));
#line 257
c_rt_lib0move(&___nl__5, c_rt_lib0concat_add(___nl__5, ___nl__6));
#line 257
c_rt_lib0clear(&___nl__6);
#line 257
c_rt_lib0delete(generator_pm_priv0print(___ref___1, ___nl__5));
#line 257
c_rt_lib0clear(&___nl__5);
#line 257
c_rt_lib0clear(&___nl__4);
#line 258
goto label_1;
#line 258
label_22:
#line 258
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(195)));
#line 259
c_rt_lib0move(&___nl__5,___get_global_const(600));
#line 259
c_rt_lib0delete(generator_pm_priv0print(___ref___1, ___nl__5));
#line 259
c_rt_lib0clear(&___nl__5);
#line 260
c_rt_lib0delete(generator_pm_priv0print_register(___nl__4, ___ref___1));
#line 261
c_rt_lib0move(&___nl__5,___get_global_const(455));
#line 261
c_rt_lib0delete(generator_pm_priv0print(___ref___1, ___nl__5));
#line 261
c_rt_lib0clear(&___nl__5);
#line 261
c_rt_lib0clear(&___nl__4);
#line 262
goto label_1;
#line 262
label_1:
#line 262
c_rt_lib0clear(&___nl__2);
#line 262
c_rt_lib0clear(&___nl__3);
#line 263
c_rt_lib0move(&___nl__2, string0lf());
#line 263
c_rt_lib0delete(generator_pm_priv0print(___ref___1, ___nl__2));
#line 263
c_rt_lib0clear(&___nl__2);
#line 263
c_rt_lib0clear(&___nl__0);
#line 263
return NULL;
}

ImmT generator_pm_priv0print_call(ImmT ___nl__0,ImmT * ___ref___1) {
c_rt_lib0arg_val(___nl__0);
generator_pm_priv0__const__init();
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
ImmT ___nl__9 = NULL;
ImmT ___nl__10 = NULL;
#line 267
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(233)));
#line 267
c_rt_lib0delete(generator_pm_priv0print_register_to_assign(___nl__2, ___ref___1));
#line 267
c_rt_lib0clear(&___nl__2);
#line 268
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(257)));
#line 268
c_rt_lib0move(&___nl__3,___get_global_const(0));
#line 268
c_rt_lib0move(&___nl__2, c_rt_lib0ne(___nl__2, ___nl__3));
#line 268
c_rt_lib0clear(&___nl__3);
#line 268
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 268
if(c_rt_lib0check_true_native(___nl__2)){ goto label_2;}
#line 269
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(257)));
#line 269
c_rt_lib0move(&___nl__4,___get_global_const(579));
#line 269
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 269
c_rt_lib0clear(&___nl__4);
#line 269
c_rt_lib0delete(generator_pm_priv0print(___ref___1, ___nl__3));
#line 269
c_rt_lib0clear(&___nl__3);
#line 270
goto label_1;
#line 270
label_2:
#line 271
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(*___ref___1, ___get_global_const(430)));
#line 271
c_rt_lib0move(&___nl__4,___get_global_const(580));
#line 271
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 271
c_rt_lib0clear(&___nl__4);
#line 271
c_rt_lib0delete(generator_pm_priv0print(___ref___1, ___nl__3));
#line 271
c_rt_lib0clear(&___nl__3);
#line 272
goto label_1;
#line 272
label_1:
#line 272
c_rt_lib0clear(&___nl__2);
#line 273
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(385)));
#line 273
c_rt_lib0move(&___nl__3,___get_global_const(322));
#line 273
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__3));
#line 273
c_rt_lib0clear(&___nl__3);
#line 273
c_rt_lib0delete(generator_pm_priv0print(___ref___1, ___nl__2));
#line 273
c_rt_lib0clear(&___nl__2);
#line 275
c_rt_lib0move(&___nl__2,___get_global_const(1));
#line 276
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(73)));
#line 276
c_rt_lib0move(&___nl__5,___get_global_const(1));
#line 276
c_rt_lib0move(&___nl__6,___get_global_const(2));
#line 276
c_rt_lib0move(&___nl__7, c_rt_lib0array_len(___nl__3));
#line 276
label_5:
#line 276
c_rt_lib0move(&___nl__8, c_rt_lib0ge(___nl__5, ___nl__7));
#line 276
if(c_rt_lib0check_true_native(___nl__8)){ goto label_3;}
#line 276
c_rt_lib0move(&___nl__4, c_rt_lib0array_get(___nl__3, ___nl__5));
#line 277
c_rt_lib0move(&___nl__9,___get_global_const(1));
#line 277
c_rt_lib0move(&___nl__9, c_rt_lib0gt(___nl__2, ___nl__9));
#line 277
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__9));
#line 277
if(c_rt_lib0check_true_native(___nl__9)){ goto label_7;}
#line 278
c_rt_lib0move(&___nl__10,___get_global_const(188));
#line 278
c_rt_lib0delete(generator_pm_priv0print(___ref___1, ___nl__10));
#line 278
c_rt_lib0clear(&___nl__10);
#line 279
goto label_7;
#line 279
label_7:
#line 279
c_rt_lib0clear(&___nl__9);
#line 280
c_rt_lib0move(&___nl__9, c_rt_lib0priv_is(___nl__4, ___get_global_const(234)));
#line 280
if(c_rt_lib0check_true_native(___nl__9)){ goto label_9;}
#line 282
c_rt_lib0move(&___nl__9, c_rt_lib0priv_is(___nl__4, ___get_global_const(5)));
#line 282
if(c_rt_lib0check_true_native(___nl__9)){ goto label_10;}
#line 282
c_rt_lib0move(&___nl__9,___get_global_const(74));
#line 282
c_rt_lib0move(&___nl__9, c_rt_lib0array_mk(2, ___nl__9, ___nl__4));
#line 282
nl_die_arg(___nl__9);
#line 280
label_9:
#line 280
c_rt_lib0move(&___nl__10, c_rt_lib0priv_as(___nl__4, ___get_global_const(234)));
#line 281
c_rt_lib0delete(generator_pm_priv0print_register(___nl__10, ___ref___1));
#line 281
c_rt_lib0clear(&___nl__10);
#line 282
goto label_8;
#line 282
label_10:
#line 282
c_rt_lib0move(&___nl__10, c_rt_lib0priv_as(___nl__4, ___get_global_const(5)));
#line 283
c_rt_lib0delete(generator_pm_priv0print_register(___nl__10, ___ref___1));
#line 283
c_rt_lib0clear(&___nl__10);
#line 284
goto label_8;
#line 284
label_8:
#line 284
c_rt_lib0clear(&___nl__9);
#line 285
c_rt_lib0move(&___nl__9,___get_global_const(2));
#line 285
c_rt_lib0move(&___nl__2, c_rt_lib0add_mod(___nl__2, ___nl__9));
#line 285
c_rt_lib0clear(&___nl__9);
#line 286
c_rt_lib0move(&___nl__5, c_rt_lib0add_mod(___nl__5, ___nl__6));
#line 286
goto label_5;
#line 286
label_3:
#line 286
c_rt_lib0clear(&___nl__3);
#line 286
c_rt_lib0clear(&___nl__4);
#line 286
c_rt_lib0clear(&___nl__5);
#line 286
c_rt_lib0clear(&___nl__6);
#line 286
c_rt_lib0clear(&___nl__7);
#line 286
c_rt_lib0clear(&___nl__8);
#line 287
c_rt_lib0move(&___nl__3,___get_global_const(455));
#line 287
c_rt_lib0delete(generator_pm_priv0print(___ref___1, ___nl__3));
#line 287
c_rt_lib0clear(&___nl__3);
#line 287
c_rt_lib0clear(&___nl__2);
#line 287
c_rt_lib0clear(&___nl__0);
#line 287
return NULL;
}

ImmT generator_pm_priv0print_una_op(ImmT ___nl__0,ImmT * ___ref___1) {
c_rt_lib0arg_val(___nl__0);
generator_pm_priv0__const__init();
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
#line 291
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(233)));
#line 291
c_rt_lib0delete(generator_pm_priv0print_register_to_assign(___nl__2, ___ref___1));
#line 291
c_rt_lib0clear(&___nl__2);
#line 292
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(401)));
#line 292
c_rt_lib0move(&___nl__3,___get_global_const(243));
#line 292
c_rt_lib0move(&___nl__2, c_rt_lib0eq(___nl__2, ___nl__3));
#line 292
c_rt_lib0clear(&___nl__3);
#line 292
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 292
if(c_rt_lib0check_true_native(___nl__2)){ goto label_2;}
#line 292
c_rt_lib0move(&___nl__3,___get_global_const(601));
#line 292
c_rt_lib0delete(generator_pm_priv0print(___ref___1, ___nl__3));
#line 292
c_rt_lib0clear(&___nl__3);
#line 292
goto label_2;
#line 292
label_2:
#line 292
c_rt_lib0clear(&___nl__2);
#line 293
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(401)));
#line 293
c_rt_lib0delete(generator_pm_priv0print(___ref___1, ___nl__2));
#line 293
c_rt_lib0clear(&___nl__2);
#line 294
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(401)));
#line 294
c_rt_lib0move(&___nl__3,___get_global_const(243));
#line 294
c_rt_lib0move(&___nl__2, c_rt_lib0eq(___nl__2, ___nl__3));
#line 294
c_rt_lib0clear(&___nl__3);
#line 294
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 294
if(c_rt_lib0check_true_native(___nl__2)){ goto label_4;}
#line 294
c_rt_lib0move(&___nl__3,___get_global_const(602));
#line 294
c_rt_lib0delete(generator_pm_priv0print(___ref___1, ___nl__3));
#line 294
c_rt_lib0clear(&___nl__3);
#line 294
goto label_4;
#line 294
label_4:
#line 294
c_rt_lib0clear(&___nl__2);
#line 295
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(39)));
#line 295
c_rt_lib0delete(generator_pm_priv0print_register(___nl__2, ___ref___1));
#line 295
c_rt_lib0clear(&___nl__2);
#line 296
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(401)));
#line 296
c_rt_lib0move(&___nl__3,___get_global_const(243));
#line 296
c_rt_lib0move(&___nl__2, c_rt_lib0eq(___nl__2, ___nl__3));
#line 296
c_rt_lib0clear(&___nl__3);
#line 296
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 296
if(c_rt_lib0check_true_native(___nl__2)){ goto label_6;}
#line 296
c_rt_lib0move(&___nl__3,___get_global_const(469));
#line 296
c_rt_lib0delete(generator_pm_priv0print(___ref___1, ___nl__3));
#line 296
c_rt_lib0clear(&___nl__3);
#line 296
goto label_6;
#line 296
label_6:
#line 296
c_rt_lib0clear(&___nl__2);
#line 297
c_rt_lib0move(&___nl__2,___get_global_const(311));
#line 297
c_rt_lib0delete(generator_pm_priv0print(___ref___1, ___nl__2));
#line 297
c_rt_lib0clear(&___nl__2);
#line 297
c_rt_lib0clear(&___nl__0);
#line 297
return NULL;
}

ImmT generator_pm_priv0print_bin_op(ImmT ___nl__0,ImmT * ___ref___1) {
c_rt_lib0arg_val(___nl__0);
generator_pm_priv0__const__init();
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
#line 301
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(233)));
#line 301
c_rt_lib0delete(generator_pm_priv0print_register_to_assign(___nl__2, ___ref___1));
#line 301
c_rt_lib0clear(&___nl__2);
#line 302
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(401)));
#line 302
c_rt_lib0move(&___nl__3,___get_global_const(268));
#line 302
c_rt_lib0move(&___nl__2, c_rt_lib0eq(___nl__2, ___nl__3));
#line 302
c_rt_lib0clear(&___nl__3);
#line 302
if(c_rt_lib0check_true_native(___nl__2)){ goto label_9;}
#line 302
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(401)));
#line 302
c_rt_lib0move(&___nl__3,___get_global_const(258));
#line 302
c_rt_lib0move(&___nl__2, c_rt_lib0eq(___nl__2, ___nl__3));
#line 302
c_rt_lib0clear(&___nl__3);
#line 302
label_9:
#line 302
if(c_rt_lib0check_true_native(___nl__2)){ goto label_8;}
#line 302
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(401)));
#line 302
c_rt_lib0move(&___nl__3,___get_global_const(260));
#line 302
c_rt_lib0move(&___nl__2, c_rt_lib0eq(___nl__2, ___nl__3));
#line 302
c_rt_lib0clear(&___nl__3);
#line 302
label_8:
#line 302
if(c_rt_lib0check_true_native(___nl__2)){ goto label_7;}
#line 302
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(401)));
#line 302
c_rt_lib0move(&___nl__3,___get_global_const(266));
#line 302
c_rt_lib0move(&___nl__2, c_rt_lib0eq(___nl__2, ___nl__3));
#line 302
c_rt_lib0clear(&___nl__3);
#line 302
label_7:
#line 302
if(c_rt_lib0check_true_native(___nl__2)){ goto label_6;}
#line 302
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(401)));
#line 302
c_rt_lib0move(&___nl__3,___get_global_const(262));
#line 302
c_rt_lib0move(&___nl__2, c_rt_lib0eq(___nl__2, ___nl__3));
#line 302
c_rt_lib0clear(&___nl__3);
#line 302
label_6:
#line 302
if(c_rt_lib0check_true_native(___nl__2)){ goto label_5;}
#line 302
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(401)));
#line 302
c_rt_lib0move(&___nl__3,___get_global_const(249));
#line 302
c_rt_lib0move(&___nl__2, c_rt_lib0eq(___nl__2, ___nl__3));
#line 302
c_rt_lib0clear(&___nl__3);
#line 302
label_5:
#line 302
if(c_rt_lib0check_true_native(___nl__2)){ goto label_4;}
#line 302
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(401)));
#line 302
c_rt_lib0move(&___nl__3,___get_global_const(264));
#line 302
c_rt_lib0move(&___nl__2, c_rt_lib0eq(___nl__2, ___nl__3));
#line 302
c_rt_lib0clear(&___nl__3);
#line 302
label_4:
#line 302
if(c_rt_lib0check_true_native(___nl__2)){ goto label_3;}
#line 302
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(401)));
#line 302
c_rt_lib0move(&___nl__3,___get_global_const(250));
#line 302
c_rt_lib0move(&___nl__2, c_rt_lib0eq(___nl__2, ___nl__3));
#line 302
c_rt_lib0clear(&___nl__3);
#line 302
label_3:
#line 302
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 302
if(c_rt_lib0check_true_native(___nl__2)){ goto label_2;}
#line 310
c_rt_lib0move(&___nl__3,___get_global_const(601));
#line 310
c_rt_lib0delete(generator_pm_priv0print(___ref___1, ___nl__3));
#line 310
c_rt_lib0clear(&___nl__3);
#line 311
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(235)));
#line 311
c_rt_lib0delete(generator_pm_priv0print_register(___nl__3, ___ref___1));
#line 311
c_rt_lib0clear(&___nl__3);
#line 312
c_rt_lib0move(&___nl__3,___get_global_const(603));
#line 312
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(401)));
#line 312
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 312
c_rt_lib0clear(&___nl__4);
#line 312
c_rt_lib0move(&___nl__4,___get_global_const(603));
#line 312
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 312
c_rt_lib0clear(&___nl__4);
#line 312
c_rt_lib0delete(generator_pm_priv0print(___ref___1, ___nl__3));
#line 312
c_rt_lib0clear(&___nl__3);
#line 313
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(236)));
#line 313
c_rt_lib0delete(generator_pm_priv0print_register(___nl__3, ___ref___1));
#line 313
c_rt_lib0clear(&___nl__3);
#line 314
c_rt_lib0move(&___nl__3,___get_global_const(455));
#line 314
c_rt_lib0delete(generator_pm_priv0print(___ref___1, ___nl__3));
#line 314
c_rt_lib0clear(&___nl__3);
#line 315
goto label_1;
#line 315
label_2:
#line 316
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(235)));
#line 316
c_rt_lib0delete(generator_pm_priv0print_register(___nl__3, ___ref___1));
#line 316
c_rt_lib0clear(&___nl__3);
#line 317
c_rt_lib0move(&___nl__3,___get_global_const(603));
#line 317
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(401)));
#line 317
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 317
c_rt_lib0clear(&___nl__4);
#line 317
c_rt_lib0move(&___nl__4,___get_global_const(603));
#line 317
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 317
c_rt_lib0clear(&___nl__4);
#line 317
c_rt_lib0delete(generator_pm_priv0print(___ref___1, ___nl__3));
#line 317
c_rt_lib0clear(&___nl__3);
#line 318
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(236)));
#line 318
c_rt_lib0delete(generator_pm_priv0print_register(___nl__3, ___ref___1));
#line 318
c_rt_lib0clear(&___nl__3);
#line 319
c_rt_lib0move(&___nl__3,___get_global_const(311));
#line 319
c_rt_lib0delete(generator_pm_priv0print(___ref___1, ___nl__3));
#line 319
c_rt_lib0clear(&___nl__3);
#line 320
goto label_1;
#line 320
label_1:
#line 320
c_rt_lib0clear(&___nl__2);
#line 320
c_rt_lib0clear(&___nl__0);
#line 320
return NULL;
}

ImmT generator_pm_priv0print_set_at_idx(ImmT ___nl__0,ImmT * ___ref___1) {
c_rt_lib0arg_val(___nl__0);
generator_pm_priv0__const__init();
ImmT ___nl__2 = NULL;
#line 324
c_rt_lib0move(&___nl__2,___get_global_const(604));
#line 324
c_rt_lib0delete(generator_pm_priv0print(___ref___1, ___nl__2));
#line 324
c_rt_lib0clear(&___nl__2);
#line 325
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(39)));
#line 325
c_rt_lib0delete(generator_pm_priv0print_register(___nl__2, ___ref___1));
#line 325
c_rt_lib0clear(&___nl__2);
#line 326
c_rt_lib0move(&___nl__2,___get_global_const(605));
#line 326
c_rt_lib0delete(generator_pm_priv0print(___ref___1, ___nl__2));
#line 326
c_rt_lib0clear(&___nl__2);
#line 327
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(39)));
#line 327
c_rt_lib0delete(generator_pm_priv0print_register_to_assign(___nl__2, ___ref___1));
#line 327
c_rt_lib0clear(&___nl__2);
#line 328
c_rt_lib0move(&___nl__2,___get_global_const(606));
#line 328
c_rt_lib0delete(generator_pm_priv0print(___ref___1, ___nl__2));
#line 328
c_rt_lib0clear(&___nl__2);
#line 329
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(39)));
#line 329
c_rt_lib0delete(generator_pm_priv0print_register(___nl__2, ___ref___1));
#line 329
c_rt_lib0clear(&___nl__2);
#line 330
c_rt_lib0move(&___nl__2,___get_global_const(607));
#line 330
c_rt_lib0delete(generator_pm_priv0print(___ref___1, ___nl__2));
#line 330
c_rt_lib0clear(&___nl__2);
#line 332
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(39)));
#line 332
c_rt_lib0delete(generator_pm_priv0print_register(___nl__2, ___ref___1));
#line 332
c_rt_lib0clear(&___nl__2);
#line 333
c_rt_lib0move(&___nl__2,___get_global_const(596));
#line 333
c_rt_lib0delete(generator_pm_priv0print(___ref___1, ___nl__2));
#line 333
c_rt_lib0clear(&___nl__2);
#line 334
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(237)));
#line 334
c_rt_lib0delete(generator_pm_priv0print_register(___nl__2, ___ref___1));
#line 334
c_rt_lib0clear(&___nl__2);
#line 335
c_rt_lib0move(&___nl__2,___get_global_const(359));
#line 335
c_rt_lib0delete(generator_pm_priv0print(___ref___1, ___nl__2));
#line 335
c_rt_lib0clear(&___nl__2);
#line 336
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(234)));
#line 336
c_rt_lib0delete(generator_pm_priv0print_register(___nl__2, ___ref___1));
#line 336
c_rt_lib0clear(&___nl__2);
#line 337
c_rt_lib0move(&___nl__2,___get_global_const(311));
#line 337
c_rt_lib0delete(generator_pm_priv0print(___ref___1, ___nl__2));
#line 337
c_rt_lib0clear(&___nl__2);
#line 337
c_rt_lib0clear(&___nl__0);
#line 337
return NULL;
}

ImmT generator_pm_priv0print_set_val(ImmT ___nl__0,ImmT * ___ref___1) {
c_rt_lib0arg_val(___nl__0);
generator_pm_priv0__const__init();
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
#line 341
c_rt_lib0move(&___nl__2,___get_global_const(608));
#line 341
c_rt_lib0delete(generator_pm_priv0print(___ref___1, ___nl__2));
#line 341
c_rt_lib0clear(&___nl__2);
#line 342
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(39)));
#line 342
c_rt_lib0delete(generator_pm_priv0print_register(___nl__2, ___ref___1));
#line 342
c_rt_lib0clear(&___nl__2);
#line 343
c_rt_lib0move(&___nl__2,___get_global_const(605));
#line 343
c_rt_lib0delete(generator_pm_priv0print(___ref___1, ___nl__2));
#line 343
c_rt_lib0clear(&___nl__2);
#line 344
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(39)));
#line 344
c_rt_lib0delete(generator_pm_priv0print_register_to_assign(___nl__2, ___ref___1));
#line 344
c_rt_lib0clear(&___nl__2);
#line 345
c_rt_lib0move(&___nl__2,___get_global_const(609));
#line 345
c_rt_lib0delete(generator_pm_priv0print(___ref___1, ___nl__2));
#line 345
c_rt_lib0clear(&___nl__2);
#line 346
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(39)));
#line 346
c_rt_lib0delete(generator_pm_priv0print_register(___nl__2, ___ref___1));
#line 346
c_rt_lib0clear(&___nl__2);
#line 347
c_rt_lib0move(&___nl__2,___get_global_const(610));
#line 347
c_rt_lib0delete(generator_pm_priv0print(___ref___1, ___nl__2));
#line 347
c_rt_lib0clear(&___nl__2);
#line 348
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(39)));
#line 348
c_rt_lib0delete(generator_pm_priv0print_register(___nl__2, ___ref___1));
#line 348
c_rt_lib0clear(&___nl__2);
#line 349
c_rt_lib0move(&___nl__2,___get_global_const(597));
#line 349
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(279)));
#line 349
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__3));
#line 349
c_rt_lib0clear(&___nl__3);
#line 349
c_rt_lib0move(&___nl__3,___get_global_const(611));
#line 349
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__3));
#line 349
c_rt_lib0clear(&___nl__3);
#line 349
c_rt_lib0delete(generator_pm_priv0print(___ref___1, ___nl__2));
#line 349
c_rt_lib0clear(&___nl__2);
#line 350
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(234)));
#line 350
c_rt_lib0delete(generator_pm_priv0print_register(___nl__2, ___ref___1));
#line 350
c_rt_lib0clear(&___nl__2);
#line 351
c_rt_lib0move(&___nl__2,___get_global_const(311));
#line 351
c_rt_lib0delete(generator_pm_priv0print(___ref___1, ___nl__2));
#line 351
c_rt_lib0clear(&___nl__2);
#line 351
c_rt_lib0clear(&___nl__0);
#line 351
return NULL;
}

ImmT generator_pm_priv0print_ov_mk(ImmT ___nl__0,ImmT * ___ref___1) {
c_rt_lib0arg_val(___nl__0);
generator_pm_priv0__const__init();
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
#line 355
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(233)));
#line 355
c_rt_lib0delete(generator_pm_priv0print_register_to_assign(___nl__2, ___ref___1));
#line 355
c_rt_lib0clear(&___nl__2);
#line 356
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(39)));
#line 356
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__2, ___get_global_const(211)));
#line 356
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__2));
#line 356
if(c_rt_lib0check_true_native(___nl__3)){ goto label_3;}
#line 356
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(76)));
#line 356
c_rt_lib0move(&___nl__4,___get_global_const(6));
#line 356
c_rt_lib0move(&___nl__2, c_rt_lib0eq(___nl__2, ___nl__4));
#line 356
c_rt_lib0clear(&___nl__4);
#line 356
label_3:
#line 356
c_rt_lib0clear(&___nl__3);
#line 356
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 356
if(c_rt_lib0check_true_native(___nl__2)){ goto label_2;}
#line 357
c_rt_lib0move(&___nl__3,___get_global_const(612));
#line 357
c_rt_lib0delete(generator_pm_priv0print(___ref___1, ___nl__3));
#line 357
c_rt_lib0clear(&___nl__3);
#line 358
goto label_1;
#line 358
label_2:
#line 358
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(39)));
#line 358
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__2, ___get_global_const(211)));
#line 358
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__2));
#line 358
if(c_rt_lib0check_true_native(___nl__3)){ goto label_5;}
#line 358
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(76)));
#line 358
c_rt_lib0move(&___nl__4,___get_global_const(7));
#line 358
c_rt_lib0move(&___nl__2, c_rt_lib0eq(___nl__2, ___nl__4));
#line 358
c_rt_lib0clear(&___nl__4);
#line 358
label_5:
#line 358
c_rt_lib0clear(&___nl__3);
#line 358
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 358
if(c_rt_lib0check_true_native(___nl__2)){ goto label_4;}
#line 359
c_rt_lib0move(&___nl__3,___get_global_const(613));
#line 359
c_rt_lib0delete(generator_pm_priv0print(___ref___1, ___nl__3));
#line 359
c_rt_lib0clear(&___nl__3);
#line 360
goto label_1;
#line 360
label_4:
#line 361
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(39)));
#line 361
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__3, ___get_global_const(238)));
#line 361
if(c_rt_lib0check_true_native(___nl__4)){ goto label_7;}
#line 365
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__3, ___get_global_const(211)));
#line 365
if(c_rt_lib0check_true_native(___nl__4)){ goto label_8;}
#line 365
c_rt_lib0move(&___nl__4,___get_global_const(74));
#line 365
c_rt_lib0move(&___nl__4, c_rt_lib0array_mk(2, ___nl__4, ___nl__3));
#line 365
nl_die_arg(___nl__4);
#line 361
label_7:
#line 361
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__3, ___get_global_const(238)));
#line 362
c_rt_lib0move(&___nl__6,___get_global_const(614));
#line 362
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(76)));
#line 362
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__7));
#line 362
c_rt_lib0clear(&___nl__7);
#line 362
c_rt_lib0move(&___nl__7,___get_global_const(615));
#line 362
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__7));
#line 362
c_rt_lib0clear(&___nl__7);
#line 362
c_rt_lib0delete(generator_pm_priv0print(___ref___1, ___nl__6));
#line 362
c_rt_lib0clear(&___nl__6);
#line 363
c_rt_lib0delete(generator_pm_priv0print_register(___nl__5, ___ref___1));
#line 364
c_rt_lib0move(&___nl__6,___get_global_const(455));
#line 364
c_rt_lib0delete(generator_pm_priv0print(___ref___1, ___nl__6));
#line 364
c_rt_lib0clear(&___nl__6);
#line 364
c_rt_lib0clear(&___nl__5);
#line 365
goto label_6;
#line 365
label_8:
#line 366
c_rt_lib0move(&___nl__5,___get_global_const(616));
#line 366
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(76)));
#line 366
c_rt_lib0move(&___nl__5, c_rt_lib0concat_add(___nl__5, ___nl__6));
#line 366
c_rt_lib0clear(&___nl__6);
#line 366
c_rt_lib0move(&___nl__6,___get_global_const(592));
#line 366
c_rt_lib0move(&___nl__5, c_rt_lib0concat_add(___nl__5, ___nl__6));
#line 366
c_rt_lib0clear(&___nl__6);
#line 366
c_rt_lib0delete(generator_pm_priv0print(___ref___1, ___nl__5));
#line 366
c_rt_lib0clear(&___nl__5);
#line 367
goto label_6;
#line 367
label_6:
#line 367
c_rt_lib0clear(&___nl__3);
#line 367
c_rt_lib0clear(&___nl__4);
#line 368
goto label_1;
#line 368
label_1:
#line 368
c_rt_lib0clear(&___nl__2);
#line 368
c_rt_lib0clear(&___nl__0);
#line 368
return NULL;
}

ImmT generator_pm_priv0print_register(ImmT ___nl__0,ImmT * ___ref___1) {
c_rt_lib0arg_val(___nl__0);
generator_pm_priv0__const__init();
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
#line 372
c_rt_lib0move(&___nl__2,___get_global_const(0));
#line 372
c_rt_lib0move(&___nl__2, c_rt_lib0eq(___nl__0, ___nl__2));
#line 372
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 372
if(c_rt_lib0check_true_native(___nl__2)){ goto label_2;}
#line 372
c_rt_lib0clear(&___nl__0);
#line 372
c_rt_lib0clear(&___nl__2);
#line 372
return NULL;
#line 372
goto label_2;
#line 372
label_2:
#line 372
c_rt_lib0clear(&___nl__2);
#line 373
c_rt_lib0move(&___nl__2,___get_global_const(581));
#line 373
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__0));
#line 373
c_rt_lib0move(&___nl__3,___get_global_const(0));
#line 373
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__3));
#line 373
c_rt_lib0clear(&___nl__3);
#line 373
c_rt_lib0delete(generator_pm_priv0print(___ref___1, ___nl__2));
#line 373
c_rt_lib0clear(&___nl__2);
#line 373
c_rt_lib0clear(&___nl__0);
#line 373
return NULL;
}

ImmT generator_pm_priv0print_register_to_assign(ImmT ___nl__0,ImmT * ___ref___1) {
c_rt_lib0arg_val(___nl__0);
generator_pm_priv0__const__init();
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
#line 377
c_rt_lib0delete(generator_pm_priv0print_register(___nl__0, ___ref___1));
#line 378
c_rt_lib0move(&___nl__2,___get_global_const(0));
#line 378
c_rt_lib0move(&___nl__2, c_rt_lib0ne(___nl__0, ___nl__2));
#line 378
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 378
if(c_rt_lib0check_true_native(___nl__2)){ goto label_2;}
#line 378
c_rt_lib0move(&___nl__3,___get_global_const(448));
#line 378
c_rt_lib0delete(generator_pm_priv0print(___ref___1, ___nl__3));
#line 378
c_rt_lib0clear(&___nl__3);
#line 378
goto label_2;
#line 378
label_2:
#line 378
c_rt_lib0clear(&___nl__2);
#line 378
c_rt_lib0clear(&___nl__0);
#line 378
return NULL;
}


static ImmT ___const__[3];
static int ___const_init__ = 1;
void generator_pm_priv0__const__init(){
if(___const_init__) {
___const_init__ = 0;
__const__f = &___const__[2];


for(int i=0;i<2;++i) ___const__[i] = NULL;
c_rt_lib0register_const(___const__, 2);
}}
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
