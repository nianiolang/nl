
/* (c) Atinea Sp z o. o.
 *  Stamp: nianio lang
 */
#include "c_rt_lib.h"
#include "c_global_const.h"
#include "generator_js.h"
#include "array.h"
#include "nl.h"
#include "string.h"
#include "string_utils.h"
#include "boolean_t.h"
#include "ov.h"
#include "nlasm.h"
#include "ptd.h"
#line 1 "generator_js.nl"

static ImmT *__const__f = NULL;
ImmT generator_js_priv0__const__sim(int __nr);
ImmT generator_js_priv0__const__sing(int __nr);

ImmT generator_js_priv0get_namespace_name();
ImmT generator_js_priv0print_const_value_aggr(ImmT ___nl__0,ImmT * ___ref___1);
ImmT generator_js_priv0get_function_name(ImmT ___nl__0,ImmT ___nl__1);
ImmT generator_js_priv0get_function_call_name(ImmT ___nl__0,ImmT ___nl__1);
ImmT generator_js_priv0get_function_call_name_raw(ImmT ___nl__0,ImmT ___nl__1);
ImmT generator_js_priv0escape_string(ImmT ___nl__0);
ImmT generator_js_priv0print_str_imm(ImmT ___nl__0,ImmT * ___ref___1);
ImmT generator_js_priv0is_singleton_use_function(ImmT ___nl__0);
ImmT generator_js_priv0print_function_or_singleton(ImmT ___nl__0,ImmT ___nl__1,ImmT * ___ref___2);
ImmT generator_js_priv0print_function(ImmT ___nl__0,ImmT ___nl__1,ImmT * ___ref___2);
ImmT generator_js_priv0print_command(ImmT ___nl__0,ImmT ___nl__1,ImmT * ___ref___2,ImmT * ___ref___3);
ImmT generator_js_priv0print_arr(ImmT ___nl__0);
ImmT generator_js_priv0imm_call(ImmT ___nl__0);
ImmT generator_js_priv0print_bin_op(ImmT ___nl__0,ImmT * ___ref___1);
ImmT generator_js_priv0print_call(ImmT ___nl__0,ImmT ___nl__1,ImmT ___nl__2,ImmT ___nl__3,ImmT * ___ref___4);
ImmT generator_js_priv0process_ref_reg(ImmT * ___ref___0,ImmT * ___ref___1,ImmT * ___ref___2,ImmT ___nl__3,ImmT ___nl__4,ImmT ___nl__5);
ImmT generator_js_priv0print_internal_call(ImmT ___nl__0,ImmT ___nl__1,ImmT ___nl__2,ImmT * ___ref___3);
ImmT generator_js_priv0print_int_call_sim(ImmT ___nl__0,ImmT ___nl__1,ImmT ___nl__2);
ImmT generator_js_priv0print_const_arr(ImmT ___nl__0);
ImmT generator_js_priv0print_const_hash(ImmT ___nl__0);
ImmT generator_js_priv0print_const_ov(ImmT ___nl__0);
ImmT generator_js_priv0print_const_value(ImmT ___nl__0);
ImmT generator_js_priv0print_goto(ImmT ___nl__0);
ImmT generator_js_priv0print_hash(ImmT ___nl__0);
ImmT generator_js_priv0print_ov_mk(ImmT ___nl__0,ImmT * ___ref___1,ImmT * ___ref___2);
ImmT generator_js_priv0print_register(ImmT ___nl__0);
ImmT generator_js_priv0print_register_to_assign(ImmT ___nl__0);
ImmT generator_js_priv0print_return(ImmT ___nl__0,ImmT ___nl__1);
ImmT generator_js_priv0print_una_op(ImmT ___nl__0);


ImmT generator_js_priv0get_namespace_name(){
return generator_js_priv0__const__sing(0);}
ImmT generator_js_priv0get_namespace_name0cal() {
ImmT ___nl__0 = NULL;
#line 16
c_rt_lib0move(&___nl__0,___get_global_const(563));
#line 16
return ___nl__0;
#line 16
c_rt_lib0clear(&___nl__0);
#line 16
return NULL;
}

ImmT generator_js0generate0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 2, "generator_js0generate");
return generator_js0generate(_tab[0], _tab[1]);}
ImmT generator_js0generate(ImmT ___nl__0,ImmT ___nl__1) {
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
#line 20
c_rt_lib0move(&___nl__2,___get_global_const(2));
#line 21
c_rt_lib0move(&___nl__4, c_rt_lib0array_mk(0));
#line 21
c_rt_lib0move(&___nl__5,___get_global_const(564));
#line 21
c_rt_lib0move(&___nl__3, c_rt_lib0hash_mk(2, ___get_global_const(327), ___nl__4, ___get_global_const(93), ___nl__5));
#line 21
c_rt_lib0clear(&___nl__4);
#line 21
c_rt_lib0clear(&___nl__5);
#line 22
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(92)));
#line 22
c_rt_lib0move(&___nl__6,___get_global_const(0));
#line 22
c_rt_lib0move(&___nl__7,___get_global_const(1));
#line 22
c_rt_lib0move(&___nl__8, c_rt_lib0array_len(___nl__4));
#line 22
label_10:
#line 22
c_rt_lib0move(&___nl__9, c_rt_lib0ge(___nl__6, ___nl__8));
#line 22
if(c_rt_lib0check_true_native(___nl__9)){ goto label_21;}
#line 22
c_rt_lib0move(&___nl__5, c_rt_lib0array_get(___nl__4, ___nl__6));
#line 22
c_rt_lib0move(&___nl__11, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(186)));
#line 22
c_rt_lib0move(&___nl__10, generator_js_priv0print_function_or_singleton(___nl__5, ___nl__11, &___nl__3));
#line 22
c_rt_lib0clear(&___nl__11);
#line 22
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__10));
#line 22
c_rt_lib0clear(&___nl__10);
#line 22
c_rt_lib0move(&___nl__6, c_rt_lib0add_mod(___nl__6, ___nl__7));
#line 22
goto label_10;
#line 22
label_21:
#line 22
c_rt_lib0clear(&___nl__4);
#line 22
c_rt_lib0clear(&___nl__5);
#line 22
c_rt_lib0clear(&___nl__6);
#line 22
c_rt_lib0clear(&___nl__7);
#line 22
c_rt_lib0clear(&___nl__8);
#line 22
c_rt_lib0clear(&___nl__9);
#line 23
c_rt_lib0move(&___nl__4,___get_global_const(565));
#line 23
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(93)));
#line 23
c_rt_lib0move(&___nl__4, c_rt_lib0concat_add(___nl__4, ___nl__5));
#line 23
c_rt_lib0clear(&___nl__5);
#line 23
c_rt_lib0move(&___nl__5,___get_global_const(566));
#line 23
c_rt_lib0move(&___nl__4, c_rt_lib0concat_add(___nl__4, ___nl__5));
#line 23
c_rt_lib0clear(&___nl__5);
#line 23
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__4));
#line 23
c_rt_lib0clear(&___nl__4);
#line 24
c_rt_lib0move(&___nl__4,___get_global_const(0));
#line 25
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(327)));
#line 25
c_rt_lib0move(&___nl__7,___get_global_const(0));
#line 25
c_rt_lib0move(&___nl__8,___get_global_const(1));
#line 25
c_rt_lib0move(&___nl__9, c_rt_lib0array_len(___nl__5));
#line 25
label_42:
#line 25
c_rt_lib0move(&___nl__10, c_rt_lib0ge(___nl__7, ___nl__9));
#line 25
if(c_rt_lib0check_true_native(___nl__10)){ goto label_67;}
#line 25
c_rt_lib0move(&___nl__6, c_rt_lib0array_get(___nl__5, ___nl__7));
#line 26
c_rt_lib0move(&___nl__11, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(93)));
#line 26
c_rt_lib0move(&___nl__12,___get_global_const(258));
#line 26
c_rt_lib0move(&___nl__11, c_rt_lib0concat_add(___nl__11, ___nl__12));
#line 26
c_rt_lib0clear(&___nl__12);
#line 26
c_rt_lib0move(&___nl__11, c_rt_lib0concat_add(___nl__11, ___nl__4));
#line 26
c_rt_lib0move(&___nl__12,___get_global_const(405));
#line 26
c_rt_lib0move(&___nl__11, c_rt_lib0concat_add(___nl__11, ___nl__12));
#line 26
c_rt_lib0clear(&___nl__12);
#line 26
c_rt_lib0move(&___nl__12, generator_js_priv0print_const_value(___nl__6));
#line 26
c_rt_lib0move(&___nl__11, c_rt_lib0concat_add(___nl__11, ___nl__12));
#line 26
c_rt_lib0clear(&___nl__12);
#line 26
c_rt_lib0move(&___nl__12,___get_global_const(360));
#line 26
c_rt_lib0move(&___nl__11, c_rt_lib0concat_add(___nl__11, ___nl__12));
#line 26
c_rt_lib0clear(&___nl__12);
#line 26
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__11));
#line 26
c_rt_lib0clear(&___nl__11);
#line 27
c_rt_lib0move(&___nl__11,___get_global_const(1));
#line 27
c_rt_lib0move(&___nl__4, c_rt_lib0add_mod(___nl__4, ___nl__11));
#line 27
c_rt_lib0clear(&___nl__11);
#line 28
c_rt_lib0move(&___nl__7, c_rt_lib0add_mod(___nl__7, ___nl__8));
#line 28
goto label_42;
#line 28
label_67:
#line 28
c_rt_lib0clear(&___nl__5);
#line 28
c_rt_lib0clear(&___nl__6);
#line 28
c_rt_lib0clear(&___nl__7);
#line 28
c_rt_lib0clear(&___nl__8);
#line 28
c_rt_lib0clear(&___nl__9);
#line 28
c_rt_lib0clear(&___nl__10);
#line 29
c_rt_lib0move(&___nl__5,___get_global_const(565));
#line 29
c_rt_lib0move(&___nl__5, c_rt_lib0concat_add(___nl__5, ___nl__1));
#line 29
c_rt_lib0move(&___nl__6,___get_global_const(567));
#line 29
c_rt_lib0move(&___nl__5, c_rt_lib0concat_add(___nl__5, ___nl__6));
#line 29
c_rt_lib0clear(&___nl__6);
#line 30
c_rt_lib0move(&___nl__6, generator_js_priv0get_namespace_name());
#line 30
c_rt_lib0move(&___nl__5, c_rt_lib0concat_add(___nl__5, ___nl__6));
#line 30
c_rt_lib0clear(&___nl__6);
#line 30
c_rt_lib0move(&___nl__6,___get_global_const(568));
#line 30
c_rt_lib0move(&___nl__5, c_rt_lib0concat_add(___nl__5, ___nl__6));
#line 30
c_rt_lib0clear(&___nl__6);
#line 31
c_rt_lib0move(&___nl__6, generator_js_priv0get_namespace_name());
#line 31
c_rt_lib0move(&___nl__5, c_rt_lib0concat_add(___nl__5, ___nl__6));
#line 31
c_rt_lib0clear(&___nl__6);
#line 31
c_rt_lib0move(&___nl__6,___get_global_const(97));
#line 31
c_rt_lib0move(&___nl__5, c_rt_lib0concat_add(___nl__5, ___nl__6));
#line 31
c_rt_lib0clear(&___nl__6);
#line 31
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(186)));
#line 31
c_rt_lib0move(&___nl__5, c_rt_lib0concat_add(___nl__5, ___nl__6));
#line 31
c_rt_lib0clear(&___nl__6);
#line 31
c_rt_lib0move(&___nl__6,___get_global_const(569));
#line 31
c_rt_lib0move(&___nl__5, c_rt_lib0concat_add(___nl__5, ___nl__6));
#line 31
c_rt_lib0clear(&___nl__6);
#line 31
c_rt_lib0move(&___nl__5, c_rt_lib0concat_add(___nl__5, ___nl__2));
#line 32
c_rt_lib0move(&___nl__6,___get_global_const(570));
#line 32
c_rt_lib0move(&___nl__5, c_rt_lib0concat_add(___nl__5, ___nl__6));
#line 32
c_rt_lib0clear(&___nl__6);
#line 32
c_rt_lib0move(&___nl__5, c_rt_lib0concat_add(___nl__5, ___nl__1));
#line 33
c_rt_lib0move(&___nl__6,___get_global_const(491));
#line 33
c_rt_lib0move(&___nl__5, c_rt_lib0concat_add(___nl__5, ___nl__6));
#line 33
c_rt_lib0clear(&___nl__6);
#line 33
c_rt_lib0move(&___nl__6,___get_global_const(571));
#line 33
c_rt_lib0move(&___nl__5, c_rt_lib0concat_add(___nl__5, ___nl__6));
#line 33
c_rt_lib0clear(&___nl__6);
#line 33
c_rt_lib0move(&___nl__5, c_rt_lib0concat_add(___nl__5, ___nl__1));
#line 33
c_rt_lib0move(&___nl__6,___get_global_const(572));
#line 33
c_rt_lib0move(&___nl__5, c_rt_lib0concat_add(___nl__5, ___nl__6));
#line 33
c_rt_lib0clear(&___nl__6);
#line 33
c_rt_lib0clear(&___nl__0);
#line 33
c_rt_lib0clear(&___nl__1);
#line 33
c_rt_lib0clear(&___nl__2);
#line 33
c_rt_lib0clear(&___nl__3);
#line 33
c_rt_lib0clear(&___nl__4);
#line 33
return ___nl__5;
#line 33
c_rt_lib0clear(&___nl__5);
#line 33
c_rt_lib0clear(&___nl__2);
#line 33
c_rt_lib0clear(&___nl__3);
#line 33
c_rt_lib0clear(&___nl__4);
#line 33
c_rt_lib0clear(&___nl__0);
#line 33
c_rt_lib0clear(&___nl__1);
#line 33
return NULL;
}

ImmT generator_js_priv0print_const_value_aggr(ImmT ___nl__0,ImmT * ___ref___1) {
c_rt_lib0arg_val(___nl__0);
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
#line 37
c_rt_lib0move(&___nl__2,___get_global_const(327));
#line 37
c_rt_lib0move(&___nl__2, c_rt_lib0get_ref_hash(*___ref___1, ___nl__2));
#line 37
c_rt_lib0delete(array0push(&___nl__2, ___nl__0));
#line 37
c_rt_lib0move(&___nl__3,___get_global_const(327));
#line 37
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___1, ___nl__3, ___nl__2));
#line 37
c_rt_lib0clear(&___nl__3);
#line 37
c_rt_lib0clear(&___nl__2);
#line 38
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(*___ref___1, ___get_global_const(93)));
#line 38
c_rt_lib0move(&___nl__3,___get_global_const(258));
#line 38
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__3));
#line 38
c_rt_lib0clear(&___nl__3);
#line 38
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(*___ref___1, ___get_global_const(327)));
#line 38
c_rt_lib0move(&___nl__3, array0len(___nl__4));
#line 38
c_rt_lib0clear(&___nl__4);
#line 38
c_rt_lib0move(&___nl__4,___get_global_const(1));
#line 38
c_rt_lib0move(&___nl__3, c_rt_lib0sub_mod(___nl__3, ___nl__4));
#line 38
c_rt_lib0clear(&___nl__4);
#line 38
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__3));
#line 38
c_rt_lib0clear(&___nl__3);
#line 38
c_rt_lib0move(&___nl__3,___get_global_const(259));
#line 38
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__3));
#line 38
c_rt_lib0clear(&___nl__3);
#line 38
c_rt_lib0clear(&___nl__0);
#line 38
return ___nl__2;
#line 38
c_rt_lib0clear(&___nl__2);
#line 38
c_rt_lib0clear(&___nl__0);
#line 38
return NULL;
}

ImmT generator_js_priv0get_function_name(ImmT ___nl__0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
#line 42
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(182)));
#line 42
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(183)));
#line 42
if(c_rt_lib0check_true_native(___nl__3)){ goto label_8;}
#line 44
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(379)));
#line 44
if(c_rt_lib0check_true_native(___nl__3)){ goto label_21;}
#line 44
c_rt_lib0move(&___nl__3,___get_global_const(91));
#line 44
c_rt_lib0move(&___nl__3, c_rt_lib0array_mk(2, ___nl__3, ___nl__2));
#line 44
nl_die_arg(___nl__3);
#line 42
label_8:
#line 43
c_rt_lib0move(&___nl__4,___get_global_const(97));
#line 43
c_rt_lib0move(&___nl__4, c_rt_lib0concat_new(___nl__1, ___nl__4));
#line 43
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(93)));
#line 43
c_rt_lib0move(&___nl__4, c_rt_lib0concat_add(___nl__4, ___nl__5));
#line 43
c_rt_lib0clear(&___nl__5);
#line 43
c_rt_lib0clear(&___nl__0);
#line 43
c_rt_lib0clear(&___nl__1);
#line 43
c_rt_lib0clear(&___nl__2);
#line 43
c_rt_lib0clear(&___nl__3);
#line 43
return ___nl__4;
#line 43
c_rt_lib0clear(&___nl__4);
#line 44
goto label_33;
#line 44
label_21:
#line 45
c_rt_lib0move(&___nl__4,___get_global_const(573));
#line 45
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(93)));
#line 45
c_rt_lib0move(&___nl__4, c_rt_lib0concat_add(___nl__4, ___nl__5));
#line 45
c_rt_lib0clear(&___nl__5);
#line 45
c_rt_lib0clear(&___nl__0);
#line 45
c_rt_lib0clear(&___nl__1);
#line 45
c_rt_lib0clear(&___nl__2);
#line 45
c_rt_lib0clear(&___nl__3);
#line 45
return ___nl__4;
#line 45
c_rt_lib0clear(&___nl__4);
#line 46
goto label_33;
#line 46
label_33:
#line 46
c_rt_lib0clear(&___nl__2);
#line 46
c_rt_lib0clear(&___nl__3);
#line 46
c_rt_lib0clear(&___nl__0);
#line 46
c_rt_lib0clear(&___nl__1);
#line 46
return NULL;
}

ImmT generator_js_priv0get_function_call_name(ImmT ___nl__0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
#line 50
c_rt_lib0move(&___nl__2,___get_global_const(2));
#line 50
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(182)));
#line 50
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__3, ___get_global_const(183)));
#line 50
if(c_rt_lib0check_true_native(___nl__4)){ goto label_9;}
#line 52
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__3, ___get_global_const(379)));
#line 52
if(c_rt_lib0check_true_native(___nl__4)){ goto label_12;}
#line 52
c_rt_lib0move(&___nl__4,___get_global_const(91));
#line 52
c_rt_lib0move(&___nl__4, c_rt_lib0array_mk(2, ___nl__4, ___nl__3));
#line 52
nl_die_arg(___nl__4);
#line 50
label_9:
#line 51
c_rt_lib0copy(&___nl__2, ___nl__1);
#line 52
goto label_17;
#line 52
label_12:
#line 53
c_rt_lib0move(&___nl__5,___get_global_const(2));
#line 53
c_rt_lib0copy(&___nl__2, ___nl__5);
#line 53
c_rt_lib0clear(&___nl__5);
#line 54
goto label_17;
#line 54
label_17:
#line 54
c_rt_lib0clear(&___nl__3);
#line 54
c_rt_lib0clear(&___nl__4);
#line 55
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(93)));
#line 55
c_rt_lib0move(&___nl__3, generator_js_priv0get_function_call_name_raw(___nl__4, ___nl__2));
#line 55
c_rt_lib0clear(&___nl__4);
#line 55
c_rt_lib0clear(&___nl__0);
#line 55
c_rt_lib0clear(&___nl__1);
#line 55
c_rt_lib0clear(&___nl__2);
#line 55
return ___nl__3;
#line 55
c_rt_lib0clear(&___nl__3);
#line 55
c_rt_lib0clear(&___nl__2);
#line 55
c_rt_lib0clear(&___nl__0);
#line 55
c_rt_lib0clear(&___nl__1);
#line 55
return NULL;
}

ImmT generator_js_priv0get_function_call_name_raw(ImmT ___nl__0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
#line 59
c_rt_lib0move(&___nl__2,___get_global_const(2));
#line 59
c_rt_lib0move(&___nl__2, c_rt_lib0eq(___nl__1, ___nl__2));
#line 59
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 59
if(c_rt_lib0check_true_native(___nl__2)){ goto label_12;}
#line 60
c_rt_lib0move(&___nl__3,___get_global_const(573));
#line 60
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__0));
#line 60
c_rt_lib0clear(&___nl__0);
#line 60
c_rt_lib0clear(&___nl__1);
#line 60
c_rt_lib0clear(&___nl__2);
#line 60
return ___nl__3;
#line 60
c_rt_lib0clear(&___nl__3);
#line 61
goto label_28;
#line 61
label_12:
#line 62
c_rt_lib0move(&___nl__3, generator_js_priv0get_namespace_name());
#line 62
c_rt_lib0move(&___nl__4,___get_global_const(97));
#line 62
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 62
c_rt_lib0clear(&___nl__4);
#line 62
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__1));
#line 62
c_rt_lib0move(&___nl__4,___get_global_const(97));
#line 62
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 62
c_rt_lib0clear(&___nl__4);
#line 62
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__0));
#line 62
c_rt_lib0clear(&___nl__0);
#line 62
c_rt_lib0clear(&___nl__1);
#line 62
c_rt_lib0clear(&___nl__2);
#line 62
return ___nl__3;
#line 62
c_rt_lib0clear(&___nl__3);
#line 63
goto label_28;
#line 63
label_28:
#line 63
c_rt_lib0clear(&___nl__2);
#line 63
c_rt_lib0clear(&___nl__0);
#line 63
c_rt_lib0clear(&___nl__1);
#line 63
return NULL;
}

ImmT generator_js_priv0escape_string(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
#line 67
c_rt_lib0move(&___nl__2,___get_global_const(96));
#line 67
c_rt_lib0move(&___nl__3,___get_global_const(264));
#line 67
c_rt_lib0move(&___nl__1, string0replace(___nl__0, ___nl__2, ___nl__3));
#line 67
c_rt_lib0clear(&___nl__3);
#line 67
c_rt_lib0clear(&___nl__2);
#line 67
c_rt_lib0copy(&___nl__0, ___nl__1);
#line 67
c_rt_lib0clear(&___nl__1);
#line 68
c_rt_lib0move(&___nl__2,___get_global_const(235));
#line 68
c_rt_lib0move(&___nl__3,___get_global_const(269));
#line 68
c_rt_lib0move(&___nl__1, string0replace(___nl__0, ___nl__2, ___nl__3));
#line 68
c_rt_lib0clear(&___nl__3);
#line 68
c_rt_lib0clear(&___nl__2);
#line 68
c_rt_lib0copy(&___nl__0, ___nl__1);
#line 68
c_rt_lib0clear(&___nl__1);
#line 69
c_rt_lib0move(&___nl__2, string0lf());
#line 69
c_rt_lib0move(&___nl__3,___get_global_const(272));
#line 69
c_rt_lib0move(&___nl__1, string0replace(___nl__0, ___nl__2, ___nl__3));
#line 69
c_rt_lib0clear(&___nl__3);
#line 69
c_rt_lib0clear(&___nl__2);
#line 69
c_rt_lib0copy(&___nl__0, ___nl__1);
#line 69
c_rt_lib0clear(&___nl__1);
#line 70
c_rt_lib0move(&___nl__2, string0r());
#line 70
c_rt_lib0move(&___nl__3,___get_global_const(462));
#line 70
c_rt_lib0move(&___nl__1, string0replace(___nl__0, ___nl__2, ___nl__3));
#line 70
c_rt_lib0clear(&___nl__3);
#line 70
c_rt_lib0clear(&___nl__2);
#line 70
c_rt_lib0copy(&___nl__0, ___nl__1);
#line 70
c_rt_lib0clear(&___nl__1);
#line 71
c_rt_lib0move(&___nl__3,___get_global_const(0));
#line 71
c_rt_lib0move(&___nl__2, string0chr(___nl__3));
#line 71
c_rt_lib0clear(&___nl__3);
#line 71
c_rt_lib0move(&___nl__3,___get_global_const(471));
#line 71
c_rt_lib0move(&___nl__1, string0replace(___nl__0, ___nl__2, ___nl__3));
#line 71
c_rt_lib0clear(&___nl__3);
#line 71
c_rt_lib0clear(&___nl__2);
#line 71
c_rt_lib0copy(&___nl__0, ___nl__1);
#line 71
c_rt_lib0clear(&___nl__1);
#line 72
c_rt_lib0move(&___nl__2, string0tab());
#line 72
c_rt_lib0move(&___nl__3,___get_global_const(463));
#line 72
c_rt_lib0move(&___nl__1, string0replace(___nl__0, ___nl__2, ___nl__3));
#line 72
c_rt_lib0clear(&___nl__3);
#line 72
c_rt_lib0clear(&___nl__2);
#line 72
c_rt_lib0copy(&___nl__0, ___nl__1);
#line 72
c_rt_lib0clear(&___nl__1);
#line 74
c_rt_lib0move(&___nl__1,___get_global_const(235));
#line 74
c_rt_lib0move(&___nl__3, string0lf());
#line 74
c_rt_lib0move(&___nl__4,___get_global_const(272));
#line 74
c_rt_lib0move(&___nl__2, string0replace(___nl__0, ___nl__3, ___nl__4));
#line 74
c_rt_lib0clear(&___nl__4);
#line 74
c_rt_lib0clear(&___nl__3);
#line 74
c_rt_lib0move(&___nl__1, c_rt_lib0concat_add(___nl__1, ___nl__2));
#line 74
c_rt_lib0clear(&___nl__2);
#line 74
c_rt_lib0move(&___nl__2,___get_global_const(235));
#line 74
c_rt_lib0move(&___nl__1, c_rt_lib0concat_add(___nl__1, ___nl__2));
#line 74
c_rt_lib0clear(&___nl__2);
#line 74
c_rt_lib0clear(&___nl__0);
#line 74
return ___nl__1;
#line 74
c_rt_lib0clear(&___nl__1);
#line 74
c_rt_lib0clear(&___nl__0);
#line 74
return NULL;
}

ImmT generator_js_priv0print_str_imm(ImmT ___nl__0,ImmT * ___ref___1) {
c_rt_lib0arg_val(___nl__0);
ImmT ___nl__2 = NULL;
#line 78
c_rt_lib0move(&___nl__2, generator_js_priv0print_const_value_aggr(___nl__0, ___ref___1));
#line 78
c_rt_lib0clear(&___nl__0);
#line 78
return ___nl__2;
#line 78
c_rt_lib0clear(&___nl__2);
#line 78
c_rt_lib0clear(&___nl__0);
#line 78
return NULL;
}

ImmT generator_js_priv0is_singleton_use_function(ImmT ___nl__0) {
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
#line 82
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(188)));
#line 82
c_rt_lib0move(&___nl__1, array0len(___nl__2));
#line 82
c_rt_lib0clear(&___nl__2);
#line 82
c_rt_lib0move(&___nl__2,___get_global_const(0));
#line 82
c_rt_lib0move(&___nl__1, c_rt_lib0gt(___nl__1, ___nl__2));
#line 82
c_rt_lib0clear(&___nl__2);
#line 82
c_rt_lib0move(&___nl__1, c_rt_lib0not(___nl__1));
#line 82
if(c_rt_lib0check_true_native(___nl__1)){ goto label_14;}
#line 82
c_rt_lib0move(&___nl__2, c_rt_lib0get_false());
#line 82
c_rt_lib0clear(&___nl__0);
#line 82
c_rt_lib0clear(&___nl__1);
#line 82
return ___nl__2;
#line 82
c_rt_lib0clear(&___nl__2);
#line 82
goto label_14;
#line 82
label_14:
#line 82
c_rt_lib0clear(&___nl__1);
#line 83
c_rt_lib0move(&___nl__1, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(200)));
#line 83
c_rt_lib0move(&___nl__1, c_rt_lib0priv_is(___nl__1, ___get_global_const(168)));
#line 83
c_rt_lib0move(&___nl__1, c_rt_lib0not(___nl__1));
#line 83
if(c_rt_lib0check_true_native(___nl__1)){ goto label_26;}
#line 83
c_rt_lib0move(&___nl__2, c_rt_lib0get_true());
#line 83
c_rt_lib0clear(&___nl__0);
#line 83
c_rt_lib0clear(&___nl__1);
#line 83
return ___nl__2;
#line 83
c_rt_lib0clear(&___nl__2);
#line 83
goto label_26;
#line 83
label_26:
#line 83
c_rt_lib0clear(&___nl__1);
#line 84
c_rt_lib0move(&___nl__1, c_rt_lib0get_false());
#line 86
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(187)));
#line 86
c_rt_lib0move(&___nl__5,___get_global_const(0));
#line 86
c_rt_lib0move(&___nl__6,___get_global_const(1));
#line 86
c_rt_lib0move(&___nl__7, c_rt_lib0array_len(___nl__3));
#line 86
label_33:
#line 86
c_rt_lib0move(&___nl__8, c_rt_lib0ge(___nl__5, ___nl__7));
#line 86
if(c_rt_lib0check_true_native(___nl__8)){ goto label_195;}
#line 86
c_rt_lib0move(&___nl__4, c_rt_lib0array_get(___nl__3, ___nl__5));
#line 87
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(201)));
#line 88
c_rt_lib0copy(&___nl__10, ___nl__9);
#line 88
c_rt_lib0move(&___nl__10, c_rt_lib0priv_is(___nl__10, ___get_global_const(206)));
#line 88
c_rt_lib0move(&___nl__10, c_rt_lib0not(___nl__10));
#line 88
if(c_rt_lib0check_true_native(___nl__10)){ goto label_82;}
#line 89
c_rt_lib0copy(&___nl__11, ___nl__9);
#line 89
c_rt_lib0move(&___nl__11, c_rt_lib0priv_as(___nl__11, ___get_global_const(206)));
#line 90
c_rt_lib0move(&___nl__12, c_rt_lib0hash_get_value_dec(___nl__11, ___get_global_const(224)));
#line 90
c_rt_lib0move(&___nl__13,___get_global_const(429));
#line 90
c_rt_lib0move(&___nl__12, c_rt_lib0eq(___nl__12, ___nl__13));
#line 90
c_rt_lib0clear(&___nl__13);
#line 90
c_rt_lib0move(&___nl__12, c_rt_lib0not(___nl__12));
#line 90
c_rt_lib0move(&___nl__12, c_rt_lib0not(___nl__12));
#line 90
if(c_rt_lib0check_true_native(___nl__12)){ goto label_57;}
#line 90
c_rt_lib0clear(&___nl__9);
#line 90
c_rt_lib0clear(&___nl__10);
#line 90
c_rt_lib0clear(&___nl__11);
#line 90
c_rt_lib0clear(&___nl__12);
#line 90
goto label_192;
#line 90
goto label_57;
#line 90
label_57:
#line 90
c_rt_lib0clear(&___nl__12);
#line 91
c_rt_lib0move(&___nl__12, c_rt_lib0hash_get_value_dec(___nl__11, ___get_global_const(222)));
#line 91
c_rt_lib0move(&___nl__13,___get_global_const(338));
#line 91
c_rt_lib0move(&___nl__12, c_rt_lib0eq(___nl__12, ___nl__13));
#line 91
c_rt_lib0clear(&___nl__13);
#line 91
c_rt_lib0move(&___nl__12, c_rt_lib0not(___nl__12));
#line 91
c_rt_lib0move(&___nl__12, c_rt_lib0not(___nl__12));
#line 91
if(c_rt_lib0check_true_native(___nl__12)){ goto label_72;}
#line 91
c_rt_lib0clear(&___nl__9);
#line 91
c_rt_lib0clear(&___nl__10);
#line 91
c_rt_lib0clear(&___nl__11);
#line 91
c_rt_lib0clear(&___nl__12);
#line 91
goto label_192;
#line 91
goto label_72;
#line 91
label_72:
#line 91
c_rt_lib0clear(&___nl__12);
#line 92
c_rt_lib0move(&___nl__12, c_rt_lib0get_true());
#line 92
c_rt_lib0copy(&___nl__1, ___nl__12);
#line 92
c_rt_lib0clear(&___nl__12);
#line 93
c_rt_lib0move(&___nl__12, c_rt_lib0hash_get_value_dec(___nl__11, ___get_global_const(197)));
#line 93
c_rt_lib0copy(&___nl__2, ___nl__12);
#line 93
c_rt_lib0clear(&___nl__12);
#line 93
c_rt_lib0clear(&___nl__11);
#line 94
goto label_189;
#line 94
label_82:
#line 94
c_rt_lib0copy(&___nl__10, ___nl__9);
#line 94
c_rt_lib0move(&___nl__10, c_rt_lib0priv_is(___nl__10, ___get_global_const(90)));
#line 94
c_rt_lib0move(&___nl__10, c_rt_lib0not(___nl__10));
#line 94
if(c_rt_lib0check_true_native(___nl__10)){ goto label_154;}
#line 95
c_rt_lib0copy(&___nl__11, ___nl__1);
#line 95
c_rt_lib0move(&___nl__11, c_rt_lib0not(___nl__11));
#line 95
c_rt_lib0move(&___nl__11, c_rt_lib0not(___nl__11));
#line 95
if(c_rt_lib0check_true_native(___nl__11)){ goto label_107;}
#line 95
c_rt_lib0move(&___nl__12, c_rt_lib0get_false());
#line 95
c_rt_lib0clear(&___nl__0);
#line 95
c_rt_lib0clear(&___nl__1);
#line 95
c_rt_lib0clear(&___nl__2);
#line 95
c_rt_lib0clear(&___nl__3);
#line 95
c_rt_lib0clear(&___nl__4);
#line 95
c_rt_lib0clear(&___nl__5);
#line 95
c_rt_lib0clear(&___nl__6);
#line 95
c_rt_lib0clear(&___nl__7);
#line 95
c_rt_lib0clear(&___nl__8);
#line 95
c_rt_lib0clear(&___nl__9);
#line 95
c_rt_lib0clear(&___nl__10);
#line 95
c_rt_lib0clear(&___nl__11);
#line 95
return ___nl__12;
#line 95
c_rt_lib0clear(&___nl__12);
#line 95
goto label_107;
#line 95
label_107:
#line 95
c_rt_lib0clear(&___nl__11);
#line 96
c_rt_lib0copy(&___nl__11, ___nl__9);
#line 96
c_rt_lib0move(&___nl__11, c_rt_lib0priv_as(___nl__11, ___get_global_const(90)));
#line 97
c_rt_lib0copy(&___nl__12, ___nl__11);
#line 97
c_rt_lib0move(&___nl__12, c_rt_lib0priv_is(___nl__12, ___get_global_const(198)));
#line 97
c_rt_lib0move(&___nl__12, c_rt_lib0not(___nl__12));
#line 97
c_rt_lib0move(&___nl__12, c_rt_lib0not(___nl__12));
#line 97
if(c_rt_lib0check_true_native(___nl__12)){ goto label_133;}
#line 97
c_rt_lib0move(&___nl__13, c_rt_lib0get_false());
#line 97
c_rt_lib0clear(&___nl__0);
#line 97
c_rt_lib0clear(&___nl__1);
#line 97
c_rt_lib0clear(&___nl__2);
#line 97
c_rt_lib0clear(&___nl__3);
#line 97
c_rt_lib0clear(&___nl__4);
#line 97
c_rt_lib0clear(&___nl__5);
#line 97
c_rt_lib0clear(&___nl__6);
#line 97
c_rt_lib0clear(&___nl__7);
#line 97
c_rt_lib0clear(&___nl__8);
#line 97
c_rt_lib0clear(&___nl__9);
#line 97
c_rt_lib0clear(&___nl__10);
#line 97
c_rt_lib0clear(&___nl__11);
#line 97
c_rt_lib0clear(&___nl__12);
#line 97
return ___nl__13;
#line 97
c_rt_lib0clear(&___nl__13);
#line 97
goto label_133;
#line 97
label_133:
#line 97
c_rt_lib0clear(&___nl__12);
#line 98
c_rt_lib0copy(&___nl__12, ___nl__11);
#line 98
c_rt_lib0move(&___nl__12, c_rt_lib0priv_as(___nl__12, ___get_global_const(198)));
#line 98
c_rt_lib0move(&___nl__12, c_rt_lib0eq(___nl__12, ___nl__2));
#line 98
c_rt_lib0clear(&___nl__0);
#line 98
c_rt_lib0clear(&___nl__1);
#line 98
c_rt_lib0clear(&___nl__2);
#line 98
c_rt_lib0clear(&___nl__3);
#line 98
c_rt_lib0clear(&___nl__4);
#line 98
c_rt_lib0clear(&___nl__5);
#line 98
c_rt_lib0clear(&___nl__6);
#line 98
c_rt_lib0clear(&___nl__7);
#line 98
c_rt_lib0clear(&___nl__8);
#line 98
c_rt_lib0clear(&___nl__9);
#line 98
c_rt_lib0clear(&___nl__10);
#line 98
c_rt_lib0clear(&___nl__11);
#line 98
return ___nl__12;
#line 98
c_rt_lib0clear(&___nl__12);
#line 98
c_rt_lib0clear(&___nl__11);
#line 99
goto label_189;
#line 99
label_154:
#line 99
c_rt_lib0copy(&___nl__10, ___nl__9);
#line 99
c_rt_lib0move(&___nl__10, c_rt_lib0priv_is(___nl__10, ___get_global_const(218)));
#line 99
c_rt_lib0move(&___nl__10, c_rt_lib0not(___nl__10));
#line 99
if(c_rt_lib0check_true_native(___nl__10)){ goto label_160;}
#line 100
goto label_189;
#line 100
label_160:
#line 100
c_rt_lib0copy(&___nl__10, ___nl__9);
#line 100
c_rt_lib0move(&___nl__10, c_rt_lib0priv_is(___nl__10, ___get_global_const(221)));
#line 100
c_rt_lib0move(&___nl__10, c_rt_lib0not(___nl__10));
#line 100
if(c_rt_lib0check_true_native(___nl__10)){ goto label_166;}
#line 101
goto label_189;
#line 101
label_166:
#line 102
c_rt_lib0copy(&___nl__11, ___nl__1);
#line 102
c_rt_lib0move(&___nl__11, c_rt_lib0not(___nl__11));
#line 102
if(c_rt_lib0check_true_native(___nl__11)){ goto label_186;}
#line 102
c_rt_lib0move(&___nl__12, c_rt_lib0get_false());
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
return ___nl__12;
#line 102
c_rt_lib0clear(&___nl__12);
#line 102
goto label_186;
#line 102
label_186:
#line 102
c_rt_lib0clear(&___nl__11);
#line 103
goto label_189;
#line 103
label_189:
#line 103
c_rt_lib0clear(&___nl__10);
#line 103
c_rt_lib0clear(&___nl__9);
#line 103
label_192:
#line 104
c_rt_lib0move(&___nl__5, c_rt_lib0add_mod(___nl__5, ___nl__6));
#line 104
goto label_33;
#line 104
label_195:
#line 104
c_rt_lib0clear(&___nl__3);
#line 104
c_rt_lib0clear(&___nl__4);
#line 104
c_rt_lib0clear(&___nl__5);
#line 104
c_rt_lib0clear(&___nl__6);
#line 104
c_rt_lib0clear(&___nl__7);
#line 104
c_rt_lib0clear(&___nl__8);
#line 105
c_rt_lib0move(&___nl__3, c_rt_lib0get_false());
#line 105
c_rt_lib0clear(&___nl__0);
#line 105
c_rt_lib0clear(&___nl__1);
#line 105
c_rt_lib0clear(&___nl__2);
#line 105
return ___nl__3;
#line 105
c_rt_lib0clear(&___nl__3);
#line 105
c_rt_lib0clear(&___nl__1);
#line 105
c_rt_lib0clear(&___nl__2);
#line 105
c_rt_lib0clear(&___nl__0);
#line 105
return NULL;
}

ImmT generator_js_priv0print_function_or_singleton(ImmT ___nl__0,ImmT ___nl__1,ImmT * ___ref___2) {
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
#line 109
c_rt_lib0move(&___nl__3,___get_global_const(2));
#line 110
c_rt_lib0move(&___nl__4, generator_js_priv0is_singleton_use_function(___nl__0));
#line 110
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 110
if(c_rt_lib0check_true_native(___nl__4)){ goto label_93;}
#line 111
c_rt_lib0move(&___nl__5, generator_js_priv0get_function_name(___nl__0, ___nl__1));
#line 112
c_rt_lib0copy(&___nl__6, ___nl__0);
#line 113
c_rt_lib0move(&___nl__7,___get_global_const(574));
#line 113
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(93)));
#line 113
c_rt_lib0move(&___nl__7, c_rt_lib0concat_add(___nl__7, ___nl__8));
#line 113
c_rt_lib0clear(&___nl__8);
#line 113
c_rt_lib0copy(&___nl__8, ___nl__7);
#line 113
c_rt_lib0hash_set_value_dec(&___nl__6, ___get_global_const(93), ___nl__8);
#line 113
c_rt_lib0clear(&___nl__7);
#line 113
c_rt_lib0clear(&___nl__8);
#line 114
c_rt_lib0move(&___nl__7, c_rt_lib0ov_mk_none(___get_global_const(379)));
#line 114
c_rt_lib0copy(&___nl__8, ___nl__7);
#line 114
c_rt_lib0hash_set_value_dec(&___nl__6, ___get_global_const(182), ___nl__8);
#line 114
c_rt_lib0clear(&___nl__7);
#line 114
c_rt_lib0clear(&___nl__8);
#line 115
c_rt_lib0move(&___nl__7,___get_global_const(575));
#line 115
c_rt_lib0move(&___nl__8, generator_js_priv0get_function_name(___nl__6, ___nl__1));
#line 115
c_rt_lib0move(&___nl__7, c_rt_lib0concat_add(___nl__7, ___nl__8));
#line 115
c_rt_lib0clear(&___nl__8);
#line 116
c_rt_lib0move(&___nl__8, generator_js_priv0print_function(___nl__6, ___nl__1, ___ref___2));
#line 116
c_rt_lib0copy(&___nl__3, ___nl__8);
#line 116
c_rt_lib0clear(&___nl__8);
#line 117
c_rt_lib0move(&___nl__8,___get_global_const(565));
#line 117
c_rt_lib0move(&___nl__8, c_rt_lib0concat_add(___nl__8, ___nl__7));
#line 117
c_rt_lib0move(&___nl__9,___get_global_const(360));
#line 117
c_rt_lib0move(&___nl__8, c_rt_lib0concat_add(___nl__8, ___nl__9));
#line 117
c_rt_lib0clear(&___nl__9);
#line 117
c_rt_lib0move(&___nl__9, string0lf());
#line 117
c_rt_lib0move(&___nl__8, c_rt_lib0concat_add(___nl__8, ___nl__9));
#line 117
c_rt_lib0clear(&___nl__9);
#line 117
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__8));
#line 117
c_rt_lib0clear(&___nl__8);
#line 118
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(182)));
#line 118
c_rt_lib0move(&___nl__9, c_rt_lib0priv_is(___nl__8, ___get_global_const(183)));
#line 118
if(c_rt_lib0check_true_native(___nl__9)){ goto label_44;}
#line 120
c_rt_lib0move(&___nl__9, c_rt_lib0priv_is(___nl__8, ___get_global_const(379)));
#line 120
if(c_rt_lib0check_true_native(___nl__9)){ goto label_56;}
#line 120
c_rt_lib0move(&___nl__9,___get_global_const(91));
#line 120
c_rt_lib0move(&___nl__9, c_rt_lib0array_mk(2, ___nl__9, ___nl__8));
#line 120
nl_die_arg(___nl__9);
#line 118
label_44:
#line 119
c_rt_lib0move(&___nl__10, generator_js_priv0get_namespace_name());
#line 119
c_rt_lib0move(&___nl__11,___get_global_const(97));
#line 119
c_rt_lib0move(&___nl__10, c_rt_lib0concat_add(___nl__10, ___nl__11));
#line 119
c_rt_lib0clear(&___nl__11);
#line 119
c_rt_lib0move(&___nl__10, c_rt_lib0concat_add(___nl__10, ___nl__5));
#line 119
c_rt_lib0move(&___nl__11,___get_global_const(576));
#line 119
c_rt_lib0move(&___nl__10, c_rt_lib0concat_add(___nl__10, ___nl__11));
#line 119
c_rt_lib0clear(&___nl__11);
#line 119
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__10));
#line 119
c_rt_lib0clear(&___nl__10);
#line 120
goto label_65;
#line 120
label_56:
#line 121
c_rt_lib0move(&___nl__10,___get_global_const(577));
#line 121
c_rt_lib0move(&___nl__10, c_rt_lib0concat_add(___nl__10, ___nl__5));
#line 121
c_rt_lib0move(&___nl__11,___get_global_const(578));
#line 121
c_rt_lib0move(&___nl__10, c_rt_lib0concat_add(___nl__10, ___nl__11));
#line 121
c_rt_lib0clear(&___nl__11);
#line 121
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__10));
#line 121
c_rt_lib0clear(&___nl__10);
#line 122
goto label_65;
#line 122
label_65:
#line 122
c_rt_lib0clear(&___nl__8);
#line 122
c_rt_lib0clear(&___nl__9);
#line 124
c_rt_lib0move(&___nl__8,___get_global_const(579));
#line 124
c_rt_lib0move(&___nl__8, c_rt_lib0concat_add(___nl__8, ___nl__7));
#line 124
c_rt_lib0move(&___nl__9,___get_global_const(580));
#line 124
c_rt_lib0move(&___nl__8, c_rt_lib0concat_add(___nl__8, ___nl__9));
#line 124
c_rt_lib0clear(&___nl__9);
#line 124
c_rt_lib0move(&___nl__8, c_rt_lib0concat_add(___nl__8, ___nl__7));
#line 125
c_rt_lib0move(&___nl__9,___get_global_const(491));
#line 125
c_rt_lib0move(&___nl__8, c_rt_lib0concat_add(___nl__8, ___nl__9));
#line 125
c_rt_lib0clear(&___nl__9);
#line 125
c_rt_lib0move(&___nl__9, generator_js_priv0get_function_call_name(___nl__6, ___nl__1));
#line 125
c_rt_lib0move(&___nl__8, c_rt_lib0concat_add(___nl__8, ___nl__9));
#line 125
c_rt_lib0clear(&___nl__9);
#line 125
c_rt_lib0move(&___nl__9,___get_global_const(492));
#line 125
c_rt_lib0move(&___nl__8, c_rt_lib0concat_add(___nl__8, ___nl__9));
#line 125
c_rt_lib0clear(&___nl__9);
#line 125
c_rt_lib0move(&___nl__8, c_rt_lib0concat_add(___nl__8, ___nl__7));
#line 127
c_rt_lib0move(&___nl__9,___get_global_const(493));
#line 127
c_rt_lib0move(&___nl__8, c_rt_lib0concat_add(___nl__8, ___nl__9));
#line 127
c_rt_lib0clear(&___nl__9);
#line 127
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__8));
#line 127
c_rt_lib0clear(&___nl__8);
#line 127
c_rt_lib0clear(&___nl__5);
#line 127
c_rt_lib0clear(&___nl__6);
#line 127
c_rt_lib0clear(&___nl__7);
#line 129
goto label_98;
#line 129
label_93:
#line 130
c_rt_lib0move(&___nl__5, generator_js_priv0print_function(___nl__0, ___nl__1, ___ref___2));
#line 130
c_rt_lib0copy(&___nl__3, ___nl__5);
#line 130
c_rt_lib0clear(&___nl__5);
#line 131
goto label_98;
#line 131
label_98:
#line 131
c_rt_lib0clear(&___nl__4);
#line 133
c_rt_lib0move(&___nl__4, string0lf());
#line 133
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 133
c_rt_lib0clear(&___nl__4);
#line 134
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(182)));
#line 134
c_rt_lib0move(&___nl__5, c_rt_lib0priv_is(___nl__4, ___get_global_const(183)));
#line 134
if(c_rt_lib0check_true_native(___nl__5)){ goto label_111;}
#line 156
c_rt_lib0move(&___nl__5, c_rt_lib0priv_is(___nl__4, ___get_global_const(379)));
#line 156
if(c_rt_lib0check_true_native(___nl__5)){ goto label_264;}
#line 156
c_rt_lib0move(&___nl__5,___get_global_const(91));
#line 156
c_rt_lib0move(&___nl__5, c_rt_lib0array_mk(2, ___nl__5, ___nl__4));
#line 156
nl_die_arg(___nl__5);
#line 134
label_111:
#line 135
c_rt_lib0move(&___nl__6, generator_js_priv0get_namespace_name());
#line 135
c_rt_lib0move(&___nl__7,___get_global_const(97));
#line 135
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__7));
#line 135
c_rt_lib0clear(&___nl__7);
#line 135
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__1));
#line 135
c_rt_lib0move(&___nl__7,___get_global_const(581));
#line 135
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__7));
#line 135
c_rt_lib0clear(&___nl__7);
#line 135
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(93)));
#line 135
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__7));
#line 135
c_rt_lib0clear(&___nl__7);
#line 135
c_rt_lib0move(&___nl__7,___get_global_const(582));
#line 135
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__7));
#line 135
c_rt_lib0clear(&___nl__7);
#line 135
c_rt_lib0move(&___nl__7, string0lf());
#line 135
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__7));
#line 135
c_rt_lib0clear(&___nl__7);
#line 135
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__6));
#line 135
c_rt_lib0clear(&___nl__6);
#line 136
c_rt_lib0move(&___nl__6,___get_global_const(0));
#line 137
c_rt_lib0move(&___nl__7,___get_global_const(2));
#line 138
c_rt_lib0move(&___nl__8,___get_global_const(2));
#line 139
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(188)));
#line 139
c_rt_lib0move(&___nl__11,___get_global_const(0));
#line 139
c_rt_lib0move(&___nl__12,___get_global_const(1));
#line 139
c_rt_lib0move(&___nl__13, c_rt_lib0array_len(___nl__9));
#line 139
label_138:
#line 139
c_rt_lib0move(&___nl__14, c_rt_lib0ge(___nl__11, ___nl__13));
#line 139
if(c_rt_lib0check_true_native(___nl__14)){ goto label_224;}
#line 139
c_rt_lib0move(&___nl__10, c_rt_lib0array_get(___nl__9, ___nl__11));
#line 140
c_rt_lib0move(&___nl__15,___get_global_const(0));
#line 140
c_rt_lib0move(&___nl__15, c_rt_lib0num_eq(___nl__6, ___nl__15));
#line 140
c_rt_lib0move(&___nl__15, c_rt_lib0not(___nl__15));
#line 140
c_rt_lib0move(&___nl__15, c_rt_lib0not(___nl__15));
#line 140
if(c_rt_lib0check_true_native(___nl__15)){ goto label_151;}
#line 140
c_rt_lib0move(&___nl__16,___get_global_const(271));
#line 140
c_rt_lib0move(&___nl__7, c_rt_lib0concat_add(___nl__7, ___nl__16));
#line 140
c_rt_lib0clear(&___nl__16);
#line 140
goto label_151;
#line 140
label_151:
#line 140
c_rt_lib0clear(&___nl__15);
#line 141
c_rt_lib0move(&___nl__15,___get_global_const(233));
#line 141
c_rt_lib0move(&___nl__15, c_rt_lib0concat_add(___nl__15, ___nl__6));
#line 141
c_rt_lib0move(&___nl__7, c_rt_lib0concat_add(___nl__7, ___nl__15));
#line 141
c_rt_lib0clear(&___nl__15);
#line 142
c_rt_lib0move(&___nl__15,___get_global_const(583));
#line 142
c_rt_lib0move(&___nl__15, c_rt_lib0concat_add(___nl__15, ___nl__6));
#line 142
c_rt_lib0move(&___nl__16,___get_global_const(491));
#line 142
c_rt_lib0move(&___nl__15, c_rt_lib0concat_add(___nl__15, ___nl__16));
#line 142
c_rt_lib0clear(&___nl__16);
#line 142
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__15));
#line 142
c_rt_lib0clear(&___nl__15);
#line 143
c_rt_lib0move(&___nl__15, c_rt_lib0priv_is(___nl__10, ___get_global_const(5)));
#line 143
if(c_rt_lib0check_true_native(___nl__15)){ goto label_171;}
#line 146
c_rt_lib0move(&___nl__15, c_rt_lib0priv_is(___nl__10, ___get_global_const(198)));
#line 146
if(c_rt_lib0check_true_native(___nl__15)){ goto label_205;}
#line 146
c_rt_lib0move(&___nl__15,___get_global_const(91));
#line 146
c_rt_lib0move(&___nl__15, c_rt_lib0array_mk(2, ___nl__15, ___nl__10));
#line 146
nl_die_arg(___nl__15);
#line 143
label_171:
#line 144
c_rt_lib0move(&___nl__16,___get_global_const(584));
#line 144
c_rt_lib0move(&___nl__18,___get_global_const(5));
#line 144
c_rt_lib0move(&___nl__17, generator_js_priv0imm_call(___nl__18));
#line 144
c_rt_lib0clear(&___nl__18);
#line 144
c_rt_lib0move(&___nl__16, c_rt_lib0concat_add(___nl__16, ___nl__17));
#line 144
c_rt_lib0clear(&___nl__17);
#line 144
c_rt_lib0move(&___nl__17,___get_global_const(373));
#line 144
c_rt_lib0move(&___nl__16, c_rt_lib0concat_add(___nl__16, ___nl__17));
#line 144
c_rt_lib0clear(&___nl__17);
#line 144
c_rt_lib0move(&___nl__17,___get_global_const(585));
#line 144
c_rt_lib0move(&___nl__16, c_rt_lib0concat_add(___nl__16, ___nl__17));
#line 144
c_rt_lib0clear(&___nl__17);
#line 144
c_rt_lib0move(&___nl__16, c_rt_lib0concat_add(___nl__16, ___nl__6));
#line 144
c_rt_lib0move(&___nl__17,___get_global_const(586));
#line 144
c_rt_lib0move(&___nl__16, c_rt_lib0concat_add(___nl__16, ___nl__17));
#line 144
c_rt_lib0clear(&___nl__17);
#line 144
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__16));
#line 144
c_rt_lib0clear(&___nl__16);
#line 145
c_rt_lib0move(&___nl__16,___get_global_const(587));
#line 145
c_rt_lib0move(&___nl__16, c_rt_lib0concat_add(___nl__16, ___nl__6));
#line 145
c_rt_lib0move(&___nl__17,___get_global_const(588));
#line 145
c_rt_lib0move(&___nl__16, c_rt_lib0concat_add(___nl__16, ___nl__17));
#line 145
c_rt_lib0clear(&___nl__17);
#line 145
c_rt_lib0move(&___nl__16, c_rt_lib0concat_add(___nl__16, ___nl__6));
#line 145
c_rt_lib0move(&___nl__17,___get_global_const(589));
#line 145
c_rt_lib0move(&___nl__16, c_rt_lib0concat_add(___nl__16, ___nl__17));
#line 145
c_rt_lib0clear(&___nl__17);
#line 145
c_rt_lib0move(&___nl__17, string0lf());
#line 145
c_rt_lib0move(&___nl__16, c_rt_lib0concat_add(___nl__16, ___nl__17));
#line 145
c_rt_lib0clear(&___nl__17);
#line 145
c_rt_lib0move(&___nl__8, c_rt_lib0concat_add(___nl__8, ___nl__16));
#line 145
c_rt_lib0clear(&___nl__16);
#line 146
goto label_214;
#line 146
label_205:
#line 147
c_rt_lib0move(&___nl__16,___get_global_const(585));
#line 147
c_rt_lib0move(&___nl__16, c_rt_lib0concat_add(___nl__16, ___nl__6));
#line 147
c_rt_lib0move(&___nl__17,___get_global_const(498));
#line 147
c_rt_lib0move(&___nl__16, c_rt_lib0concat_add(___nl__16, ___nl__17));
#line 147
c_rt_lib0clear(&___nl__17);
#line 147
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__16));
#line 147
c_rt_lib0clear(&___nl__16);
#line 148
goto label_214;
#line 148
label_214:
#line 148
c_rt_lib0clear(&___nl__15);
#line 149
c_rt_lib0move(&___nl__15, string0lf());
#line 149
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__15));
#line 149
c_rt_lib0clear(&___nl__15);
#line 150
c_rt_lib0move(&___nl__15,___get_global_const(1));
#line 150
c_rt_lib0move(&___nl__6, c_rt_lib0add_mod(___nl__6, ___nl__15));
#line 150
c_rt_lib0clear(&___nl__15);
#line 151
c_rt_lib0move(&___nl__11, c_rt_lib0add_mod(___nl__11, ___nl__12));
#line 151
goto label_138;
#line 151
label_224:
#line 151
c_rt_lib0clear(&___nl__9);
#line 151
c_rt_lib0clear(&___nl__10);
#line 151
c_rt_lib0clear(&___nl__11);
#line 151
c_rt_lib0clear(&___nl__12);
#line 151
c_rt_lib0clear(&___nl__13);
#line 151
c_rt_lib0clear(&___nl__14);
#line 152
c_rt_lib0move(&___nl__9,___get_global_const(590));
#line 152
c_rt_lib0move(&___nl__10, generator_js_priv0get_function_call_name(___nl__0, ___nl__1));
#line 152
c_rt_lib0move(&___nl__9, c_rt_lib0concat_add(___nl__9, ___nl__10));
#line 152
c_rt_lib0clear(&___nl__10);
#line 152
c_rt_lib0move(&___nl__10,___get_global_const(373));
#line 152
c_rt_lib0move(&___nl__9, c_rt_lib0concat_add(___nl__9, ___nl__10));
#line 152
c_rt_lib0clear(&___nl__10);
#line 152
c_rt_lib0move(&___nl__9, c_rt_lib0concat_add(___nl__9, ___nl__7));
#line 152
c_rt_lib0move(&___nl__10,___get_global_const(260));
#line 152
c_rt_lib0move(&___nl__9, c_rt_lib0concat_add(___nl__9, ___nl__10));
#line 152
c_rt_lib0clear(&___nl__10);
#line 152
c_rt_lib0move(&___nl__10, string0lf());
#line 152
c_rt_lib0move(&___nl__9, c_rt_lib0concat_add(___nl__9, ___nl__10));
#line 152
c_rt_lib0clear(&___nl__10);
#line 152
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__9));
#line 152
c_rt_lib0clear(&___nl__9);
#line 153
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__8));
#line 154
c_rt_lib0move(&___nl__9,___get_global_const(591));
#line 154
c_rt_lib0move(&___nl__10, string0lf());
#line 154
c_rt_lib0move(&___nl__9, c_rt_lib0concat_add(___nl__9, ___nl__10));
#line 154
c_rt_lib0clear(&___nl__10);
#line 154
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__9));
#line 154
c_rt_lib0clear(&___nl__9);
#line 155
c_rt_lib0move(&___nl__9,___get_global_const(253));
#line 155
c_rt_lib0move(&___nl__10, string0lf());
#line 155
c_rt_lib0move(&___nl__9, c_rt_lib0concat_add(___nl__9, ___nl__10));
#line 155
c_rt_lib0clear(&___nl__10);
#line 155
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__9));
#line 155
c_rt_lib0clear(&___nl__9);
#line 155
c_rt_lib0clear(&___nl__6);
#line 155
c_rt_lib0clear(&___nl__7);
#line 155
c_rt_lib0clear(&___nl__8);
#line 156
goto label_269;
#line 156
label_264:
#line 157
c_rt_lib0move(&___nl__6, string0lf());
#line 157
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__6));
#line 157
c_rt_lib0clear(&___nl__6);
#line 158
goto label_269;
#line 158
label_269:
#line 158
c_rt_lib0clear(&___nl__4);
#line 158
c_rt_lib0clear(&___nl__5);
#line 159
c_rt_lib0clear(&___nl__0);
#line 159
c_rt_lib0clear(&___nl__1);
#line 159
return ___nl__3;
#line 159
c_rt_lib0clear(&___nl__3);
#line 159
c_rt_lib0clear(&___nl__0);
#line 159
c_rt_lib0clear(&___nl__1);
#line 159
return NULL;
}

ImmT generator_js_priv0print_function(ImmT ___nl__0,ImmT ___nl__1,ImmT * ___ref___2) {
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
#line 163
c_rt_lib0move(&___nl__3, string0lf());
#line 164
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(182)));
#line 164
c_rt_lib0move(&___nl__5, c_rt_lib0priv_is(___nl__4, ___get_global_const(183)));
#line 164
if(c_rt_lib0check_true_native(___nl__5)){ goto label_9;}
#line 166
c_rt_lib0move(&___nl__5, c_rt_lib0priv_is(___nl__4, ___get_global_const(379)));
#line 166
if(c_rt_lib0check_true_native(___nl__5)){ goto label_23;}
#line 166
c_rt_lib0move(&___nl__5,___get_global_const(91));
#line 166
c_rt_lib0move(&___nl__5, c_rt_lib0array_mk(2, ___nl__5, ___nl__4));
#line 166
nl_die_arg(___nl__5);
#line 164
label_9:
#line 165
c_rt_lib0move(&___nl__6, generator_js_priv0get_namespace_name());
#line 165
c_rt_lib0move(&___nl__7,___get_global_const(97));
#line 165
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__7));
#line 165
c_rt_lib0clear(&___nl__7);
#line 165
c_rt_lib0move(&___nl__7, generator_js_priv0get_function_name(___nl__0, ___nl__1));
#line 165
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__7));
#line 165
c_rt_lib0clear(&___nl__7);
#line 165
c_rt_lib0move(&___nl__7,___get_global_const(592));
#line 165
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__7));
#line 165
c_rt_lib0clear(&___nl__7);
#line 165
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__6));
#line 165
c_rt_lib0clear(&___nl__6);
#line 166
goto label_34;
#line 166
label_23:
#line 167
c_rt_lib0move(&___nl__6,___get_global_const(577));
#line 167
c_rt_lib0move(&___nl__7, generator_js_priv0get_function_name(___nl__0, ___nl__1));
#line 167
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__7));
#line 167
c_rt_lib0clear(&___nl__7);
#line 167
c_rt_lib0move(&___nl__7,___get_global_const(373));
#line 167
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__7));
#line 167
c_rt_lib0clear(&___nl__7);
#line 167
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__6));
#line 167
c_rt_lib0clear(&___nl__6);
#line 168
goto label_34;
#line 168
label_34:
#line 168
c_rt_lib0clear(&___nl__4);
#line 168
c_rt_lib0clear(&___nl__5);
#line 169
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(188)));
#line 169
c_rt_lib0move(&___nl__4, array0len(___nl__5));
#line 169
c_rt_lib0clear(&___nl__5);
#line 169
c_rt_lib0move(&___nl__5,___get_global_const(0));
#line 169
c_rt_lib0move(&___nl__6,___get_global_const(1));
#line 169
label_42:
#line 169
c_rt_lib0move(&___nl__7, c_rt_lib0ge(___nl__5, ___nl__4));
#line 169
if(c_rt_lib0check_true_native(___nl__7)){ goto label_62;}
#line 170
c_rt_lib0move(&___nl__8,___get_global_const(0));
#line 170
c_rt_lib0move(&___nl__8, c_rt_lib0num_eq(___nl__5, ___nl__8));
#line 170
c_rt_lib0move(&___nl__8, c_rt_lib0not(___nl__8));
#line 170
c_rt_lib0move(&___nl__8, c_rt_lib0not(___nl__8));
#line 170
if(c_rt_lib0check_true_native(___nl__8)){ goto label_54;}
#line 170
c_rt_lib0move(&___nl__9,___get_global_const(271));
#line 170
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__9));
#line 170
c_rt_lib0clear(&___nl__9);
#line 170
goto label_54;
#line 170
label_54:
#line 170
c_rt_lib0clear(&___nl__8);
#line 171
c_rt_lib0move(&___nl__8,___get_global_const(593));
#line 171
c_rt_lib0move(&___nl__8, c_rt_lib0concat_add(___nl__8, ___nl__5));
#line 171
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__8));
#line 171
c_rt_lib0clear(&___nl__8);
#line 172
c_rt_lib0move(&___nl__5, c_rt_lib0add_mod(___nl__5, ___nl__6));
#line 172
goto label_42;
#line 172
label_62:
#line 172
c_rt_lib0clear(&___nl__4);
#line 172
c_rt_lib0clear(&___nl__5);
#line 172
c_rt_lib0clear(&___nl__6);
#line 172
c_rt_lib0clear(&___nl__7);
#line 173
c_rt_lib0move(&___nl__4,___get_global_const(594));
#line 173
c_rt_lib0move(&___nl__5, string0lf());
#line 173
c_rt_lib0move(&___nl__4, c_rt_lib0concat_add(___nl__4, ___nl__5));
#line 173
c_rt_lib0clear(&___nl__5);
#line 173
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 173
c_rt_lib0clear(&___nl__4);
#line 174
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(188)));
#line 174
c_rt_lib0move(&___nl__4, array0len(___nl__5));
#line 174
c_rt_lib0clear(&___nl__5);
#line 174
c_rt_lib0move(&___nl__5,___get_global_const(0));
#line 174
c_rt_lib0move(&___nl__6,___get_global_const(1));
#line 174
label_78:
#line 174
c_rt_lib0move(&___nl__7, c_rt_lib0ge(___nl__5, ___nl__4));
#line 174
if(c_rt_lib0check_true_native(___nl__7)){ goto label_131;}
#line 175
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(188)));
#line 175
c_rt_lib0move(&___nl__8, c_rt_lib0array_get(___nl__8, ___nl__5));
#line 175
c_rt_lib0move(&___nl__9, c_rt_lib0priv_is(___nl__8, ___get_global_const(198)));
#line 175
if(c_rt_lib0check_true_native(___nl__9)){ goto label_90;}
#line 177
c_rt_lib0move(&___nl__9, c_rt_lib0priv_is(___nl__8, ___get_global_const(5)));
#line 177
if(c_rt_lib0check_true_native(___nl__9)){ goto label_103;}
#line 177
c_rt_lib0move(&___nl__9,___get_global_const(91));
#line 177
c_rt_lib0move(&___nl__9, c_rt_lib0array_mk(2, ___nl__9, ___nl__8));
#line 177
nl_die_arg(___nl__9);
#line 175
label_90:
#line 176
c_rt_lib0move(&___nl__10,___get_global_const(595));
#line 176
c_rt_lib0move(&___nl__10, c_rt_lib0concat_add(___nl__10, ___nl__5));
#line 176
c_rt_lib0move(&___nl__11,___get_global_const(499));
#line 176
c_rt_lib0move(&___nl__10, c_rt_lib0concat_add(___nl__10, ___nl__11));
#line 176
c_rt_lib0clear(&___nl__11);
#line 176
c_rt_lib0move(&___nl__10, c_rt_lib0concat_add(___nl__10, ___nl__5));
#line 176
c_rt_lib0move(&___nl__11,___get_global_const(360));
#line 176
c_rt_lib0move(&___nl__10, c_rt_lib0concat_add(___nl__10, ___nl__11));
#line 176
c_rt_lib0clear(&___nl__11);
#line 176
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__10));
#line 176
c_rt_lib0clear(&___nl__10);
#line 177
goto label_116;
#line 177
label_103:
#line 178
c_rt_lib0move(&___nl__10,___get_global_const(595));
#line 178
c_rt_lib0move(&___nl__10, c_rt_lib0concat_add(___nl__10, ___nl__5));
#line 178
c_rt_lib0move(&___nl__11,___get_global_const(499));
#line 178
c_rt_lib0move(&___nl__10, c_rt_lib0concat_add(___nl__10, ___nl__11));
#line 178
c_rt_lib0clear(&___nl__11);
#line 178
c_rt_lib0move(&___nl__10, c_rt_lib0concat_add(___nl__10, ___nl__5));
#line 178
c_rt_lib0move(&___nl__11,___get_global_const(596));
#line 178
c_rt_lib0move(&___nl__10, c_rt_lib0concat_add(___nl__10, ___nl__11));
#line 178
c_rt_lib0clear(&___nl__11);
#line 178
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__10));
#line 178
c_rt_lib0clear(&___nl__10);
#line 179
goto label_116;
#line 179
label_116:
#line 179
c_rt_lib0clear(&___nl__8);
#line 179
c_rt_lib0clear(&___nl__9);
#line 180
c_rt_lib0move(&___nl__8, generator_js_priv0get_namespace_name());
#line 180
c_rt_lib0move(&___nl__9,___get_global_const(597));
#line 180
c_rt_lib0move(&___nl__8, c_rt_lib0concat_add(___nl__8, ___nl__9));
#line 180
c_rt_lib0clear(&___nl__9);
#line 180
c_rt_lib0move(&___nl__8, c_rt_lib0concat_add(___nl__8, ___nl__5));
#line 180
c_rt_lib0move(&___nl__9,___get_global_const(498));
#line 180
c_rt_lib0move(&___nl__8, c_rt_lib0concat_add(___nl__8, ___nl__9));
#line 180
c_rt_lib0clear(&___nl__9);
#line 180
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__8));
#line 180
c_rt_lib0clear(&___nl__8);
#line 181
c_rt_lib0move(&___nl__5, c_rt_lib0add_mod(___nl__5, ___nl__6));
#line 181
goto label_78;
#line 181
label_131:
#line 181
c_rt_lib0clear(&___nl__4);
#line 181
c_rt_lib0clear(&___nl__5);
#line 181
c_rt_lib0clear(&___nl__6);
#line 181
c_rt_lib0clear(&___nl__7);
#line 182
c_rt_lib0move(&___nl__4, string0lf());
#line 182
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 182
c_rt_lib0clear(&___nl__4);
#line 183
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(188)));
#line 183
c_rt_lib0move(&___nl__4, array0len(___nl__5));
#line 183
c_rt_lib0clear(&___nl__5);
#line 183
label_142:
#line 183
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(189)));
#line 183
c_rt_lib0move(&___nl__5, c_rt_lib0lt(___nl__4, ___nl__5));
#line 183
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 183
if(c_rt_lib0check_true_native(___nl__5)){ goto label_161;}
#line 184
c_rt_lib0move(&___nl__6,___get_global_const(595));
#line 184
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__4));
#line 184
c_rt_lib0move(&___nl__7,___get_global_const(488));
#line 184
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__7));
#line 184
c_rt_lib0clear(&___nl__7);
#line 184
c_rt_lib0move(&___nl__7, string0lf());
#line 184
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__7));
#line 184
c_rt_lib0clear(&___nl__7);
#line 184
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__6));
#line 184
c_rt_lib0clear(&___nl__6);
#line 183
c_rt_lib0move(&___nl__6,___get_global_const(1));
#line 183
c_rt_lib0move(&___nl__4, c_rt_lib0add_mod(___nl__4, ___nl__6));
#line 183
c_rt_lib0clear(&___nl__6);
#line 185
goto label_142;
#line 185
label_161:
#line 185
c_rt_lib0clear(&___nl__4);
#line 185
c_rt_lib0clear(&___nl__5);
#line 186
c_rt_lib0move(&___nl__4,___get_global_const(598));
#line 186
c_rt_lib0move(&___nl__5, string0lf());
#line 186
c_rt_lib0move(&___nl__4, c_rt_lib0concat_add(___nl__4, ___nl__5));
#line 186
c_rt_lib0clear(&___nl__5);
#line 186
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 186
c_rt_lib0clear(&___nl__4);
#line 187
c_rt_lib0move(&___nl__4,___get_global_const(0));
#line 189
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(187)));
#line 189
c_rt_lib0move(&___nl__7,___get_global_const(0));
#line 189
c_rt_lib0move(&___nl__8,___get_global_const(1));
#line 189
c_rt_lib0move(&___nl__9, c_rt_lib0array_len(___nl__5));
#line 189
label_175:
#line 189
c_rt_lib0move(&___nl__10, c_rt_lib0ge(___nl__7, ___nl__9));
#line 189
if(c_rt_lib0check_true_native(___nl__10)){ goto label_186;}
#line 189
c_rt_lib0move(&___nl__6, c_rt_lib0array_get(___nl__5, ___nl__7));
#line 188
c_rt_lib0move(&___nl__12, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(188)));
#line 188
c_rt_lib0move(&___nl__11, generator_js_priv0print_command(___nl__6, ___nl__12, &___nl__4, ___ref___2));
#line 188
c_rt_lib0clear(&___nl__12);
#line 188
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__11));
#line 188
c_rt_lib0clear(&___nl__11);
#line 188
c_rt_lib0move(&___nl__7, c_rt_lib0add_mod(___nl__7, ___nl__8));
#line 188
goto label_175;
#line 188
label_186:
#line 188
c_rt_lib0clear(&___nl__5);
#line 188
c_rt_lib0clear(&___nl__6);
#line 188
c_rt_lib0clear(&___nl__7);
#line 188
c_rt_lib0clear(&___nl__8);
#line 188
c_rt_lib0clear(&___nl__9);
#line 188
c_rt_lib0clear(&___nl__10);
#line 190
c_rt_lib0move(&___nl__5,___get_global_const(503));
#line 190
c_rt_lib0move(&___nl__5, c_rt_lib0concat_new(___nl__3, ___nl__5));
#line 190
c_rt_lib0move(&___nl__6, string0lf());
#line 190
c_rt_lib0move(&___nl__5, c_rt_lib0concat_add(___nl__5, ___nl__6));
#line 190
c_rt_lib0clear(&___nl__6);
#line 190
c_rt_lib0clear(&___nl__0);
#line 190
c_rt_lib0clear(&___nl__1);
#line 190
c_rt_lib0clear(&___nl__3);
#line 190
c_rt_lib0clear(&___nl__4);
#line 190
return ___nl__5;
#line 190
c_rt_lib0clear(&___nl__5);
#line 190
c_rt_lib0clear(&___nl__3);
#line 190
c_rt_lib0clear(&___nl__4);
#line 190
c_rt_lib0clear(&___nl__0);
#line 190
c_rt_lib0clear(&___nl__1);
#line 190
return NULL;
}

ImmT generator_js_priv0print_command(ImmT ___nl__0,ImmT ___nl__1,ImmT * ___ref___2,ImmT * ___ref___3) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
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
#line 195
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(201)));
#line 195
c_rt_lib0move(&___nl__6, c_rt_lib0priv_is(___nl__5, ___get_global_const(204)));
#line 195
if(c_rt_lib0check_true_native(___nl__6)){ goto label_46;}
#line 197
c_rt_lib0move(&___nl__6, c_rt_lib0priv_is(___nl__5, ___get_global_const(205)));
#line 197
if(c_rt_lib0check_true_native(___nl__6)){ goto label_63;}
#line 199
c_rt_lib0move(&___nl__6, c_rt_lib0priv_is(___nl__5, ___get_global_const(206)));
#line 199
if(c_rt_lib0check_true_native(___nl__6)){ goto label_80;}
#line 201
c_rt_lib0move(&___nl__6, c_rt_lib0priv_is(___nl__5, ___get_global_const(88)));
#line 201
if(c_rt_lib0check_true_native(___nl__6)){ goto label_95;}
#line 204
c_rt_lib0move(&___nl__6, c_rt_lib0priv_is(___nl__5, ___get_global_const(207)));
#line 204
if(c_rt_lib0check_true_native(___nl__6)){ goto label_116;}
#line 206
c_rt_lib0move(&___nl__6, c_rt_lib0priv_is(___nl__5, ___get_global_const(208)));
#line 206
if(c_rt_lib0check_true_native(___nl__6)){ goto label_123;}
#line 208
c_rt_lib0move(&___nl__6, c_rt_lib0priv_is(___nl__5, ___get_global_const(209)));
#line 208
if(c_rt_lib0check_true_native(___nl__6)){ goto label_130;}
#line 211
c_rt_lib0move(&___nl__6, c_rt_lib0priv_is(___nl__5, ___get_global_const(210)));
#line 211
if(c_rt_lib0check_true_native(___nl__6)){ goto label_159;}
#line 214
c_rt_lib0move(&___nl__6, c_rt_lib0priv_is(___nl__5, ___get_global_const(90)));
#line 214
if(c_rt_lib0check_true_native(___nl__6)){ goto label_188;}
#line 216
c_rt_lib0move(&___nl__6, c_rt_lib0priv_is(___nl__5, ___get_global_const(217)));
#line 216
if(c_rt_lib0check_true_native(___nl__6)){ goto label_195;}
#line 218
c_rt_lib0move(&___nl__6, c_rt_lib0priv_is(___nl__5, ___get_global_const(211)));
#line 218
if(c_rt_lib0check_true_native(___nl__6)){ goto label_205;}
#line 220
c_rt_lib0move(&___nl__6, c_rt_lib0priv_is(___nl__5, ___get_global_const(199)));
#line 220
if(c_rt_lib0check_true_native(___nl__6)){ goto label_222;}
#line 222
c_rt_lib0move(&___nl__6, c_rt_lib0priv_is(___nl__5, ___get_global_const(212)));
#line 222
if(c_rt_lib0check_true_native(___nl__6)){ goto label_239;}
#line 225
c_rt_lib0move(&___nl__6, c_rt_lib0priv_is(___nl__5, ___get_global_const(213)));
#line 225
if(c_rt_lib0check_true_native(___nl__6)){ goto label_264;}
#line 228
c_rt_lib0move(&___nl__6, c_rt_lib0priv_is(___nl__5, ___get_global_const(214)));
#line 228
if(c_rt_lib0check_true_native(___nl__6)){ goto label_293;}
#line 231
c_rt_lib0move(&___nl__6, c_rt_lib0priv_is(___nl__5, ___get_global_const(215)));
#line 231
if(c_rt_lib0check_true_native(___nl__6)){ goto label_324;}
#line 234
c_rt_lib0move(&___nl__6, c_rt_lib0priv_is(___nl__5, ___get_global_const(216)));
#line 234
if(c_rt_lib0check_true_native(___nl__6)){ goto label_353;}
#line 236
c_rt_lib0move(&___nl__6, c_rt_lib0priv_is(___nl__5, ___get_global_const(218)));
#line 236
if(c_rt_lib0check_true_native(___nl__6)){ goto label_360;}
#line 238
c_rt_lib0move(&___nl__6, c_rt_lib0priv_is(___nl__5, ___get_global_const(219)));
#line 238
if(c_rt_lib0check_true_native(___nl__6)){ goto label_371;}
#line 241
c_rt_lib0move(&___nl__6, c_rt_lib0priv_is(___nl__5, ___get_global_const(220)));
#line 241
if(c_rt_lib0check_true_native(___nl__6)){ goto label_400;}
#line 243
c_rt_lib0move(&___nl__6, c_rt_lib0priv_is(___nl__5, ___get_global_const(221)));
#line 243
if(c_rt_lib0check_true_native(___nl__6)){ goto label_407;}
#line 243
c_rt_lib0move(&___nl__6,___get_global_const(91));
#line 243
c_rt_lib0move(&___nl__6, c_rt_lib0array_mk(2, ___nl__6, ___nl__5));
#line 243
nl_die_arg(___nl__6);
#line 195
label_46:
#line 195
c_rt_lib0move(&___nl__7, c_rt_lib0priv_as(___nl__5, ___get_global_const(204)));
#line 196
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__7, ___get_global_const(197)));
#line 196
c_rt_lib0move(&___nl__8, generator_js_priv0print_register_to_assign(___nl__9));
#line 196
c_rt_lib0clear(&___nl__9);
#line 196
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__7, ___get_global_const(43)));
#line 196
c_rt_lib0move(&___nl__9, generator_js_priv0print_arr(___nl__10));
#line 196
c_rt_lib0clear(&___nl__10);
#line 196
c_rt_lib0move(&___nl__8, c_rt_lib0concat_add(___nl__8, ___nl__9));
#line 196
c_rt_lib0clear(&___nl__9);
#line 196
c_rt_lib0move(&___nl__9,___get_global_const(360));
#line 196
c_rt_lib0move(&___nl__8, c_rt_lib0concat_add(___nl__8, ___nl__9));
#line 196
c_rt_lib0clear(&___nl__9);
#line 196
c_rt_lib0copy(&___nl__4, ___nl__8);
#line 196
c_rt_lib0clear(&___nl__8);
#line 196
c_rt_lib0clear(&___nl__7);
#line 197
goto label_417;
#line 197
label_63:
#line 197
c_rt_lib0move(&___nl__7, c_rt_lib0priv_as(___nl__5, ___get_global_const(205)));
#line 198
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__7, ___get_global_const(197)));
#line 198
c_rt_lib0move(&___nl__8, generator_js_priv0print_register_to_assign(___nl__9));
#line 198
c_rt_lib0clear(&___nl__9);
#line 198
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__7, ___get_global_const(43)));
#line 198
c_rt_lib0move(&___nl__9, generator_js_priv0print_hash(___nl__10));
#line 198
c_rt_lib0clear(&___nl__10);
#line 198
c_rt_lib0move(&___nl__8, c_rt_lib0concat_add(___nl__8, ___nl__9));
#line 198
c_rt_lib0clear(&___nl__9);
#line 198
c_rt_lib0move(&___nl__9,___get_global_const(360));
#line 198
c_rt_lib0move(&___nl__8, c_rt_lib0concat_add(___nl__8, ___nl__9));
#line 198
c_rt_lib0clear(&___nl__9);
#line 198
c_rt_lib0copy(&___nl__4, ___nl__8);
#line 198
c_rt_lib0clear(&___nl__8);
#line 198
c_rt_lib0clear(&___nl__7);
#line 199
goto label_417;
#line 199
label_80:
#line 199
c_rt_lib0move(&___nl__7, c_rt_lib0priv_as(___nl__5, ___get_global_const(206)));
#line 200
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__7, ___get_global_const(222)));
#line 200
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__7, ___get_global_const(224)));
#line 200
c_rt_lib0move(&___nl__11, c_rt_lib0hash_get_value_dec(___nl__7, ___get_global_const(89)));
#line 200
c_rt_lib0move(&___nl__12, c_rt_lib0hash_get_value_dec(___nl__7, ___get_global_const(197)));
#line 200
c_rt_lib0move(&___nl__8, generator_js_priv0print_call(___nl__9, ___nl__10, ___nl__11, ___nl__12, ___ref___2));
#line 200
c_rt_lib0clear(&___nl__12);
#line 200
c_rt_lib0clear(&___nl__11);
#line 200
c_rt_lib0clear(&___nl__10);
#line 200
c_rt_lib0clear(&___nl__9);
#line 200
c_rt_lib0copy(&___nl__4, ___nl__8);
#line 200
c_rt_lib0clear(&___nl__8);
#line 200
c_rt_lib0clear(&___nl__7);
#line 201
goto label_417;
#line 201
label_95:
#line 201
c_rt_lib0move(&___nl__7, c_rt_lib0priv_as(___nl__5, ___get_global_const(88)));
#line 202
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__7, ___get_global_const(197)));
#line 202
c_rt_lib0move(&___nl__8, generator_js_priv0print_register_to_assign(___nl__9));
#line 202
c_rt_lib0clear(&___nl__9);
#line 202
c_rt_lib0move(&___nl__11, c_rt_lib0hash_get_value_dec(___nl__7, ___get_global_const(132)));
#line 202
c_rt_lib0move(&___nl__12, c_rt_lib0hash_get_value_dec(___nl__7, ___get_global_const(93)));
#line 202
c_rt_lib0move(&___nl__10, c_rt_lib0hash_mk(2, ___get_global_const(132), ___nl__11, ___get_global_const(93), ___nl__12));
#line 202
c_rt_lib0clear(&___nl__11);
#line 202
c_rt_lib0clear(&___nl__12);
#line 202
c_rt_lib0move(&___nl__9, generator_js_priv0print_const_hash(___nl__10));
#line 202
c_rt_lib0clear(&___nl__10);
#line 202
c_rt_lib0move(&___nl__8, c_rt_lib0concat_add(___nl__8, ___nl__9));
#line 202
c_rt_lib0clear(&___nl__9);
#line 203
c_rt_lib0move(&___nl__9,___get_global_const(360));
#line 203
c_rt_lib0move(&___nl__8, c_rt_lib0concat_add(___nl__8, ___nl__9));
#line 203
c_rt_lib0clear(&___nl__9);
#line 203
c_rt_lib0copy(&___nl__4, ___nl__8);
#line 203
c_rt_lib0clear(&___nl__8);
#line 203
c_rt_lib0clear(&___nl__7);
#line 204
goto label_417;
#line 204
label_116:
#line 204
c_rt_lib0move(&___nl__7, c_rt_lib0priv_as(___nl__5, ___get_global_const(207)));
#line 205
c_rt_lib0move(&___nl__8, generator_js_priv0print_una_op(___nl__7));
#line 205
c_rt_lib0copy(&___nl__4, ___nl__8);
#line 205
c_rt_lib0clear(&___nl__8);
#line 205
c_rt_lib0clear(&___nl__7);
#line 206
goto label_417;
#line 206
label_123:
#line 206
c_rt_lib0move(&___nl__7, c_rt_lib0priv_as(___nl__5, ___get_global_const(208)));
#line 207
c_rt_lib0move(&___nl__8, generator_js_priv0print_bin_op(___nl__7, ___ref___2));
#line 207
c_rt_lib0copy(&___nl__4, ___nl__8);
#line 207
c_rt_lib0clear(&___nl__8);
#line 207
c_rt_lib0clear(&___nl__7);
#line 208
goto label_417;
#line 208
label_130:
#line 208
c_rt_lib0move(&___nl__7, c_rt_lib0priv_as(___nl__5, ___get_global_const(209)));
#line 209
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__7, ___get_global_const(197)));
#line 209
c_rt_lib0move(&___nl__8, generator_js_priv0print_register_to_assign(___nl__9));
#line 209
c_rt_lib0clear(&___nl__9);
#line 209
c_rt_lib0move(&___nl__10,___get_global_const(225));
#line 209
c_rt_lib0move(&___nl__11,___get_global_const(209));
#line 210
c_rt_lib0move(&___nl__13, c_rt_lib0hash_get_value_dec(___nl__7, ___get_global_const(43)));
#line 210
c_rt_lib0move(&___nl__13, c_rt_lib0ov_mk_arg(___get_global_const(283), ___nl__13));
#line 210
c_rt_lib0move(&___nl__15, c_rt_lib0hash_get_value_dec(___nl__7, ___get_global_const(63)));
#line 210
c_rt_lib0move(&___nl__14, generator_js_priv0print_str_imm(___nl__15, ___ref___3));
#line 210
c_rt_lib0clear(&___nl__15);
#line 210
c_rt_lib0move(&___nl__14, c_rt_lib0ov_mk_arg(___get_global_const(239), ___nl__14));
#line 210
c_rt_lib0move(&___nl__12, c_rt_lib0array_mk(2, ___nl__13, ___nl__14));
#line 210
c_rt_lib0clear(&___nl__13);
#line 210
c_rt_lib0clear(&___nl__14);
#line 210
c_rt_lib0move(&___nl__9, generator_js_priv0print_internal_call(___nl__10, ___nl__11, ___nl__12, ___ref___2));
#line 210
c_rt_lib0clear(&___nl__12);
#line 210
c_rt_lib0clear(&___nl__11);
#line 210
c_rt_lib0clear(&___nl__10);
#line 210
c_rt_lib0move(&___nl__8, c_rt_lib0concat_add(___nl__8, ___nl__9));
#line 210
c_rt_lib0clear(&___nl__9);
#line 210
c_rt_lib0move(&___nl__9,___get_global_const(360));
#line 210
c_rt_lib0move(&___nl__8, c_rt_lib0concat_add(___nl__8, ___nl__9));
#line 210
c_rt_lib0clear(&___nl__9);
#line 210
c_rt_lib0copy(&___nl__4, ___nl__8);
#line 210
c_rt_lib0clear(&___nl__8);
#line 210
c_rt_lib0clear(&___nl__7);
#line 211
goto label_417;
#line 211
label_159:
#line 211
c_rt_lib0move(&___nl__7, c_rt_lib0priv_as(___nl__5, ___get_global_const(210)));
#line 212
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__7, ___get_global_const(197)));
#line 212
c_rt_lib0move(&___nl__8, generator_js_priv0print_register_to_assign(___nl__9));
#line 212
c_rt_lib0clear(&___nl__9);
#line 212
c_rt_lib0move(&___nl__10,___get_global_const(225));
#line 212
c_rt_lib0move(&___nl__11,___get_global_const(210));
#line 213
c_rt_lib0move(&___nl__13, c_rt_lib0hash_get_value_dec(___nl__7, ___get_global_const(43)));
#line 213
c_rt_lib0move(&___nl__13, c_rt_lib0ov_mk_arg(___get_global_const(283), ___nl__13));
#line 213
c_rt_lib0move(&___nl__15, c_rt_lib0hash_get_value_dec(___nl__7, ___get_global_const(63)));
#line 213
c_rt_lib0move(&___nl__14, generator_js_priv0print_str_imm(___nl__15, ___ref___3));
#line 213
c_rt_lib0clear(&___nl__15);
#line 213
c_rt_lib0move(&___nl__14, c_rt_lib0ov_mk_arg(___get_global_const(239), ___nl__14));
#line 213
c_rt_lib0move(&___nl__12, c_rt_lib0array_mk(2, ___nl__13, ___nl__14));
#line 213
c_rt_lib0clear(&___nl__13);
#line 213
c_rt_lib0clear(&___nl__14);
#line 213
c_rt_lib0move(&___nl__9, generator_js_priv0print_internal_call(___nl__10, ___nl__11, ___nl__12, ___ref___2));
#line 213
c_rt_lib0clear(&___nl__12);
#line 213
c_rt_lib0clear(&___nl__11);
#line 213
c_rt_lib0clear(&___nl__10);
#line 213
c_rt_lib0move(&___nl__8, c_rt_lib0concat_add(___nl__8, ___nl__9));
#line 213
c_rt_lib0clear(&___nl__9);
#line 213
c_rt_lib0move(&___nl__9,___get_global_const(360));
#line 213
c_rt_lib0move(&___nl__8, c_rt_lib0concat_add(___nl__8, ___nl__9));
#line 213
c_rt_lib0clear(&___nl__9);
#line 213
c_rt_lib0copy(&___nl__4, ___nl__8);
#line 213
c_rt_lib0clear(&___nl__8);
#line 213
c_rt_lib0clear(&___nl__7);
#line 214
goto label_417;
#line 214
label_188:
#line 214
c_rt_lib0move(&___nl__7, c_rt_lib0priv_as(___nl__5, ___get_global_const(90)));
#line 215
c_rt_lib0move(&___nl__8, generator_js_priv0print_return(___nl__7, ___nl__1));
#line 215
c_rt_lib0copy(&___nl__4, ___nl__8);
#line 215
c_rt_lib0clear(&___nl__8);
#line 215
c_rt_lib0clear(&___nl__7);
#line 216
goto label_417;
#line 216
label_195:
#line 216
c_rt_lib0move(&___nl__7, c_rt_lib0priv_as(___nl__5, ___get_global_const(217)));
#line 217
c_rt_lib0move(&___nl__8, generator_js_priv0get_namespace_name());
#line 217
c_rt_lib0move(&___nl__9,___get_global_const(599));
#line 217
c_rt_lib0move(&___nl__8, c_rt_lib0concat_add(___nl__8, ___nl__9));
#line 217
c_rt_lib0clear(&___nl__9);
#line 217
c_rt_lib0copy(&___nl__4, ___nl__8);
#line 217
c_rt_lib0clear(&___nl__8);
#line 217
c_rt_lib0clear(&___nl__7);
#line 218
goto label_417;
#line 218
label_205:
#line 218
c_rt_lib0move(&___nl__7, c_rt_lib0priv_as(___nl__5, ___get_global_const(211)));
#line 219
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__7, ___get_global_const(197)));
#line 219
c_rt_lib0move(&___nl__8, generator_js_priv0print_register_to_assign(___nl__9));
#line 219
c_rt_lib0clear(&___nl__9);
#line 219
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__7, ___get_global_const(43)));
#line 219
c_rt_lib0move(&___nl__9, generator_js_priv0print_register(___nl__10));
#line 219
c_rt_lib0clear(&___nl__10);
#line 219
c_rt_lib0move(&___nl__8, c_rt_lib0concat_add(___nl__8, ___nl__9));
#line 219
c_rt_lib0clear(&___nl__9);
#line 219
c_rt_lib0move(&___nl__9,___get_global_const(360));
#line 219
c_rt_lib0move(&___nl__8, c_rt_lib0concat_add(___nl__8, ___nl__9));
#line 219
c_rt_lib0clear(&___nl__9);
#line 219
c_rt_lib0copy(&___nl__4, ___nl__8);
#line 219
c_rt_lib0clear(&___nl__8);
#line 219
c_rt_lib0clear(&___nl__7);
#line 220
goto label_417;
#line 220
label_222:
#line 220
c_rt_lib0move(&___nl__7, c_rt_lib0priv_as(___nl__5, ___get_global_const(199)));
#line 221
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__7, ___get_global_const(197)));
#line 221
c_rt_lib0move(&___nl__8, generator_js_priv0print_register_to_assign(___nl__9));
#line 221
c_rt_lib0clear(&___nl__9);
#line 221
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__7, ___get_global_const(198)));
#line 221
c_rt_lib0move(&___nl__9, generator_js_priv0print_const_value_aggr(___nl__10, ___ref___3));
#line 221
c_rt_lib0clear(&___nl__10);
#line 221
c_rt_lib0move(&___nl__8, c_rt_lib0concat_add(___nl__8, ___nl__9));
#line 221
c_rt_lib0clear(&___nl__9);
#line 221
c_rt_lib0move(&___nl__9,___get_global_const(360));
#line 221
c_rt_lib0move(&___nl__8, c_rt_lib0concat_add(___nl__8, ___nl__9));
#line 221
c_rt_lib0clear(&___nl__9);
#line 221
c_rt_lib0copy(&___nl__4, ___nl__8);
#line 221
c_rt_lib0clear(&___nl__8);
#line 221
c_rt_lib0clear(&___nl__7);
#line 222
goto label_417;
#line 222
label_239:
#line 222
c_rt_lib0move(&___nl__7, c_rt_lib0priv_as(___nl__5, ___get_global_const(212)));
#line 223
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__7, ___get_global_const(197)));
#line 223
c_rt_lib0move(&___nl__8, generator_js_priv0print_register_to_assign(___nl__9));
#line 223
c_rt_lib0clear(&___nl__9);
#line 223
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__7, ___get_global_const(43)));
#line 223
c_rt_lib0move(&___nl__9, generator_js_priv0print_register(___nl__10));
#line 223
c_rt_lib0clear(&___nl__10);
#line 223
c_rt_lib0move(&___nl__8, c_rt_lib0concat_add(___nl__8, ___nl__9));
#line 223
c_rt_lib0clear(&___nl__9);
#line 223
c_rt_lib0move(&___nl__9,___get_global_const(600));
#line 223
c_rt_lib0move(&___nl__8, c_rt_lib0concat_add(___nl__8, ___nl__9));
#line 223
c_rt_lib0clear(&___nl__9);
#line 224
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__7, ___get_global_const(232)));
#line 224
c_rt_lib0move(&___nl__9, generator_js_priv0print_register(___nl__10));
#line 224
c_rt_lib0clear(&___nl__10);
#line 224
c_rt_lib0move(&___nl__8, c_rt_lib0concat_add(___nl__8, ___nl__9));
#line 224
c_rt_lib0clear(&___nl__9);
#line 224
c_rt_lib0move(&___nl__9,___get_global_const(498));
#line 224
c_rt_lib0move(&___nl__8, c_rt_lib0concat_add(___nl__8, ___nl__9));
#line 224
c_rt_lib0clear(&___nl__9);
#line 224
c_rt_lib0copy(&___nl__4, ___nl__8);
#line 224
c_rt_lib0clear(&___nl__8);
#line 224
c_rt_lib0clear(&___nl__7);
#line 225
goto label_417;
#line 225
label_264:
#line 225
c_rt_lib0move(&___nl__7, c_rt_lib0priv_as(___nl__5, ___get_global_const(213)));
#line 226
c_rt_lib0move(&___nl__9,___get_global_const(225));
#line 226
c_rt_lib0move(&___nl__10,___get_global_const(601));
#line 226
c_rt_lib0move(&___nl__12, c_rt_lib0hash_get_value_dec(___nl__7, ___get_global_const(43)));
#line 226
c_rt_lib0move(&___nl__12, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__12));
#line 227
c_rt_lib0move(&___nl__14, c_rt_lib0hash_get_value_dec(___nl__7, ___get_global_const(232)));
#line 227
c_rt_lib0move(&___nl__13, generator_js_priv0print_register(___nl__14));
#line 227
c_rt_lib0clear(&___nl__14);
#line 227
c_rt_lib0move(&___nl__13, c_rt_lib0ov_mk_arg(___get_global_const(239), ___nl__13));
#line 227
c_rt_lib0move(&___nl__15, c_rt_lib0hash_get_value_dec(___nl__7, ___get_global_const(198)));
#line 227
c_rt_lib0move(&___nl__14, generator_js_priv0print_register(___nl__15));
#line 227
c_rt_lib0clear(&___nl__15);
#line 227
c_rt_lib0move(&___nl__14, c_rt_lib0ov_mk_arg(___get_global_const(239), ___nl__14));
#line 227
c_rt_lib0move(&___nl__11, c_rt_lib0array_mk(3, ___nl__12, ___nl__13, ___nl__14));
#line 227
c_rt_lib0clear(&___nl__12);
#line 227
c_rt_lib0clear(&___nl__13);
#line 227
c_rt_lib0clear(&___nl__14);
#line 227
c_rt_lib0move(&___nl__8, generator_js_priv0print_internal_call(___nl__9, ___nl__10, ___nl__11, ___ref___2));
#line 227
c_rt_lib0clear(&___nl__11);
#line 227
c_rt_lib0clear(&___nl__10);
#line 227
c_rt_lib0clear(&___nl__9);
#line 227
c_rt_lib0move(&___nl__9,___get_global_const(360));
#line 227
c_rt_lib0move(&___nl__8, c_rt_lib0concat_add(___nl__8, ___nl__9));
#line 227
c_rt_lib0clear(&___nl__9);
#line 227
c_rt_lib0copy(&___nl__4, ___nl__8);
#line 227
c_rt_lib0clear(&___nl__8);
#line 227
c_rt_lib0clear(&___nl__7);
#line 228
goto label_417;
#line 228
label_293:
#line 228
c_rt_lib0move(&___nl__7, c_rt_lib0priv_as(___nl__5, ___get_global_const(214)));
#line 229
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__7, ___get_global_const(197)));
#line 229
c_rt_lib0move(&___nl__8, generator_js_priv0print_register_to_assign(___nl__9));
#line 229
c_rt_lib0clear(&___nl__9);
#line 229
c_rt_lib0move(&___nl__10,___get_global_const(225));
#line 229
c_rt_lib0move(&___nl__11,___get_global_const(602));
#line 230
c_rt_lib0move(&___nl__14, c_rt_lib0hash_get_value_dec(___nl__7, ___get_global_const(43)));
#line 230
c_rt_lib0move(&___nl__13, generator_js_priv0print_register(___nl__14));
#line 230
c_rt_lib0clear(&___nl__14);
#line 230
c_rt_lib0move(&___nl__13, c_rt_lib0ov_mk_arg(___get_global_const(239), ___nl__13));
#line 230
c_rt_lib0move(&___nl__15, c_rt_lib0hash_get_value_dec(___nl__7, ___get_global_const(329)));
#line 230
c_rt_lib0move(&___nl__14, generator_js_priv0print_str_imm(___nl__15, ___ref___3));
#line 230
c_rt_lib0clear(&___nl__15);
#line 230
c_rt_lib0move(&___nl__14, c_rt_lib0ov_mk_arg(___get_global_const(239), ___nl__14));
#line 230
c_rt_lib0move(&___nl__12, c_rt_lib0array_mk(2, ___nl__13, ___nl__14));
#line 230
c_rt_lib0clear(&___nl__13);
#line 230
c_rt_lib0clear(&___nl__14);
#line 230
c_rt_lib0move(&___nl__9, generator_js_priv0print_internal_call(___nl__10, ___nl__11, ___nl__12, ___ref___2));
#line 230
c_rt_lib0clear(&___nl__12);
#line 230
c_rt_lib0clear(&___nl__11);
#line 230
c_rt_lib0clear(&___nl__10);
#line 230
c_rt_lib0move(&___nl__8, c_rt_lib0concat_add(___nl__8, ___nl__9));
#line 230
c_rt_lib0clear(&___nl__9);
#line 230
c_rt_lib0move(&___nl__9,___get_global_const(360));
#line 230
c_rt_lib0move(&___nl__8, c_rt_lib0concat_add(___nl__8, ___nl__9));
#line 230
c_rt_lib0clear(&___nl__9);
#line 230
c_rt_lib0copy(&___nl__4, ___nl__8);
#line 230
c_rt_lib0clear(&___nl__8);
#line 230
c_rt_lib0clear(&___nl__7);
#line 231
goto label_417;
#line 231
label_324:
#line 231
c_rt_lib0move(&___nl__7, c_rt_lib0priv_as(___nl__5, ___get_global_const(215)));
#line 232
c_rt_lib0move(&___nl__9,___get_global_const(225));
#line 232
c_rt_lib0move(&___nl__10,___get_global_const(603));
#line 232
c_rt_lib0move(&___nl__12, c_rt_lib0hash_get_value_dec(___nl__7, ___get_global_const(43)));
#line 232
c_rt_lib0move(&___nl__12, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__12));
#line 233
c_rt_lib0move(&___nl__14, c_rt_lib0hash_get_value_dec(___nl__7, ___get_global_const(329)));
#line 233
c_rt_lib0move(&___nl__13, generator_js_priv0print_str_imm(___nl__14, ___ref___3));
#line 233
c_rt_lib0clear(&___nl__14);
#line 233
c_rt_lib0move(&___nl__13, c_rt_lib0ov_mk_arg(___get_global_const(239), ___nl__13));
#line 233
c_rt_lib0move(&___nl__15, c_rt_lib0hash_get_value_dec(___nl__7, ___get_global_const(198)));
#line 233
c_rt_lib0move(&___nl__14, generator_js_priv0print_register(___nl__15));
#line 233
c_rt_lib0clear(&___nl__15);
#line 233
c_rt_lib0move(&___nl__14, c_rt_lib0ov_mk_arg(___get_global_const(239), ___nl__14));
#line 233
c_rt_lib0move(&___nl__11, c_rt_lib0array_mk(3, ___nl__12, ___nl__13, ___nl__14));
#line 233
c_rt_lib0clear(&___nl__12);
#line 233
c_rt_lib0clear(&___nl__13);
#line 233
c_rt_lib0clear(&___nl__14);
#line 233
c_rt_lib0move(&___nl__8, generator_js_priv0print_internal_call(___nl__9, ___nl__10, ___nl__11, ___ref___2));
#line 233
c_rt_lib0clear(&___nl__11);
#line 233
c_rt_lib0clear(&___nl__10);
#line 233
c_rt_lib0clear(&___nl__9);
#line 233
c_rt_lib0move(&___nl__9,___get_global_const(360));
#line 233
c_rt_lib0move(&___nl__8, c_rt_lib0concat_add(___nl__8, ___nl__9));
#line 233
c_rt_lib0clear(&___nl__9);
#line 233
c_rt_lib0copy(&___nl__4, ___nl__8);
#line 233
c_rt_lib0clear(&___nl__8);
#line 233
c_rt_lib0clear(&___nl__7);
#line 234
goto label_417;
#line 234
label_353:
#line 234
c_rt_lib0move(&___nl__7, c_rt_lib0priv_as(___nl__5, ___get_global_const(216)));
#line 235
c_rt_lib0move(&___nl__8, generator_js_priv0print_ov_mk(___nl__7, ___ref___3, ___ref___2));
#line 235
c_rt_lib0copy(&___nl__4, ___nl__8);
#line 235
c_rt_lib0clear(&___nl__8);
#line 235
c_rt_lib0clear(&___nl__7);
#line 236
goto label_417;
#line 236
label_360:
#line 236
c_rt_lib0move(&___nl__7, c_rt_lib0priv_as(___nl__5, ___get_global_const(218)));
#line 237
c_rt_lib0move(&___nl__8,___get_global_const(416));
#line 237
c_rt_lib0move(&___nl__8, c_rt_lib0concat_add(___nl__8, ___nl__7));
#line 237
c_rt_lib0move(&___nl__9,___get_global_const(417));
#line 237
c_rt_lib0move(&___nl__8, c_rt_lib0concat_add(___nl__8, ___nl__9));
#line 237
c_rt_lib0clear(&___nl__9);
#line 237
c_rt_lib0copy(&___nl__4, ___nl__8);
#line 237
c_rt_lib0clear(&___nl__8);
#line 237
c_rt_lib0clear(&___nl__7);
#line 238
goto label_417;
#line 238
label_371:
#line 238
c_rt_lib0move(&___nl__7, c_rt_lib0priv_as(___nl__5, ___get_global_const(219)));
#line 239
c_rt_lib0move(&___nl__8,___get_global_const(604));
#line 239
c_rt_lib0move(&___nl__10,___get_global_const(225));
#line 239
c_rt_lib0move(&___nl__11,___get_global_const(457));
#line 239
c_rt_lib0move(&___nl__13, c_rt_lib0hash_get_value_dec(___nl__7, ___get_global_const(43)));
#line 239
c_rt_lib0move(&___nl__12, c_rt_lib0array_mk(1, ___nl__13));
#line 239
c_rt_lib0clear(&___nl__13);
#line 239
c_rt_lib0move(&___nl__9, generator_js_priv0print_int_call_sim(___nl__10, ___nl__11, ___nl__12));
#line 239
c_rt_lib0clear(&___nl__12);
#line 239
c_rt_lib0clear(&___nl__11);
#line 239
c_rt_lib0clear(&___nl__10);
#line 239
c_rt_lib0move(&___nl__8, c_rt_lib0concat_add(___nl__8, ___nl__9));
#line 239
c_rt_lib0clear(&___nl__9);
#line 239
c_rt_lib0move(&___nl__9,___get_global_const(594));
#line 239
c_rt_lib0move(&___nl__8, c_rt_lib0concat_add(___nl__8, ___nl__9));
#line 239
c_rt_lib0clear(&___nl__9);
#line 239
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__7, ___get_global_const(197)));
#line 239
c_rt_lib0move(&___nl__9, generator_js_priv0print_goto(___nl__10));
#line 239
c_rt_lib0clear(&___nl__10);
#line 239
c_rt_lib0move(&___nl__8, c_rt_lib0concat_add(___nl__8, ___nl__9));
#line 239
c_rt_lib0clear(&___nl__9);
#line 240
c_rt_lib0move(&___nl__9,___get_global_const(253));
#line 240
c_rt_lib0move(&___nl__8, c_rt_lib0concat_add(___nl__8, ___nl__9));
#line 240
c_rt_lib0clear(&___nl__9);
#line 240
c_rt_lib0copy(&___nl__4, ___nl__8);
#line 240
c_rt_lib0clear(&___nl__8);
#line 240
c_rt_lib0clear(&___nl__7);
#line 241
goto label_417;
#line 241
label_400:
#line 241
c_rt_lib0move(&___nl__7, c_rt_lib0priv_as(___nl__5, ___get_global_const(220)));
#line 242
c_rt_lib0move(&___nl__8, generator_js_priv0print_goto(___nl__7));
#line 242
c_rt_lib0copy(&___nl__4, ___nl__8);
#line 242
c_rt_lib0clear(&___nl__8);
#line 242
c_rt_lib0clear(&___nl__7);
#line 243
goto label_417;
#line 243
label_407:
#line 243
c_rt_lib0move(&___nl__7, c_rt_lib0priv_as(___nl__5, ___get_global_const(221)));
#line 244
c_rt_lib0move(&___nl__8, generator_js_priv0print_register_to_assign(___nl__7));
#line 244
c_rt_lib0move(&___nl__9,___get_global_const(605));
#line 244
c_rt_lib0move(&___nl__8, c_rt_lib0concat_add(___nl__8, ___nl__9));
#line 244
c_rt_lib0clear(&___nl__9);
#line 244
c_rt_lib0copy(&___nl__4, ___nl__8);
#line 244
c_rt_lib0clear(&___nl__8);
#line 244
c_rt_lib0clear(&___nl__7);
#line 245
goto label_417;
#line 245
label_417:
#line 245
c_rt_lib0clear(&___nl__5);
#line 245
c_rt_lib0clear(&___nl__6);
#line 246
c_rt_lib0move(&___nl__5,___get_global_const(520));
#line 246
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(195)));
#line 246
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__6, ___get_global_const(439)));
#line 246
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__6, ___get_global_const(440)));
#line 246
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__6, ___get_global_const(134)));
#line 246
c_rt_lib0move(&___nl__5, c_rt_lib0concat_add(___nl__5, ___nl__6));
#line 246
c_rt_lib0clear(&___nl__6);
#line 246
c_rt_lib0move(&___nl__6, string0lf());
#line 246
c_rt_lib0move(&___nl__5, c_rt_lib0concat_add(___nl__5, ___nl__6));
#line 246
c_rt_lib0clear(&___nl__6);
#line 246
c_rt_lib0move(&___nl__5, c_rt_lib0concat_add(___nl__5, ___nl__4));
#line 246
c_rt_lib0move(&___nl__6, string0lf());
#line 246
c_rt_lib0move(&___nl__5, c_rt_lib0concat_add(___nl__5, ___nl__6));
#line 246
c_rt_lib0clear(&___nl__6);
#line 246
c_rt_lib0clear(&___nl__0);
#line 246
c_rt_lib0clear(&___nl__1);
#line 246
c_rt_lib0clear(&___nl__4);
#line 246
return ___nl__5;
#line 246
c_rt_lib0clear(&___nl__5);
#line 246
c_rt_lib0clear(&___nl__4);
#line 246
c_rt_lib0clear(&___nl__0);
#line 246
c_rt_lib0clear(&___nl__1);
#line 246
return NULL;
}

ImmT generator_js_priv0print_arr(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
#line 250
c_rt_lib0move(&___nl__2,___get_global_const(327));
#line 250
c_rt_lib0move(&___nl__1, generator_js_priv0imm_call(___nl__2));
#line 250
c_rt_lib0clear(&___nl__2);
#line 250
c_rt_lib0move(&___nl__2,___get_global_const(606));
#line 250
c_rt_lib0move(&___nl__1, c_rt_lib0concat_add(___nl__1, ___nl__2));
#line 250
c_rt_lib0clear(&___nl__2);
#line 251
c_rt_lib0move(&___nl__3,___get_global_const(0));
#line 251
c_rt_lib0move(&___nl__4,___get_global_const(1));
#line 251
c_rt_lib0move(&___nl__5, c_rt_lib0array_len(___nl__0));
#line 251
label_9:
#line 251
c_rt_lib0move(&___nl__6, c_rt_lib0ge(___nl__3, ___nl__5));
#line 251
if(c_rt_lib0check_true_native(___nl__6)){ goto label_21;}
#line 251
c_rt_lib0move(&___nl__2, c_rt_lib0array_get(___nl__0, ___nl__3));
#line 251
c_rt_lib0move(&___nl__7, generator_js_priv0print_register(___nl__2));
#line 251
c_rt_lib0move(&___nl__8,___get_global_const(256));
#line 251
c_rt_lib0move(&___nl__7, c_rt_lib0concat_add(___nl__7, ___nl__8));
#line 251
c_rt_lib0clear(&___nl__8);
#line 251
c_rt_lib0move(&___nl__1, c_rt_lib0concat_add(___nl__1, ___nl__7));
#line 251
c_rt_lib0clear(&___nl__7);
#line 251
c_rt_lib0move(&___nl__3, c_rt_lib0add_mod(___nl__3, ___nl__4));
#line 251
goto label_9;
#line 251
label_21:
#line 251
c_rt_lib0clear(&___nl__2);
#line 251
c_rt_lib0clear(&___nl__3);
#line 251
c_rt_lib0clear(&___nl__4);
#line 251
c_rt_lib0clear(&___nl__5);
#line 251
c_rt_lib0clear(&___nl__6);
#line 252
c_rt_lib0move(&___nl__2,___get_global_const(607));
#line 252
c_rt_lib0move(&___nl__2, c_rt_lib0concat_new(___nl__1, ___nl__2));
#line 252
c_rt_lib0clear(&___nl__0);
#line 252
c_rt_lib0clear(&___nl__1);
#line 252
return ___nl__2;
#line 252
c_rt_lib0clear(&___nl__2);
#line 252
c_rt_lib0clear(&___nl__1);
#line 252
c_rt_lib0clear(&___nl__0);
#line 252
return NULL;
}

ImmT generator_js_priv0imm_call(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
#line 256
c_rt_lib0move(&___nl__1, generator_js_priv0get_namespace_name());
#line 256
c_rt_lib0move(&___nl__2,___get_global_const(608));
#line 256
c_rt_lib0move(&___nl__1, c_rt_lib0concat_add(___nl__1, ___nl__2));
#line 256
c_rt_lib0clear(&___nl__2);
#line 256
c_rt_lib0move(&___nl__1, c_rt_lib0concat_add(___nl__1, ___nl__0));
#line 256
c_rt_lib0clear(&___nl__0);
#line 256
return ___nl__1;
#line 256
c_rt_lib0clear(&___nl__1);
#line 256
c_rt_lib0clear(&___nl__0);
#line 256
return NULL;
}

ImmT generator_js_priv0print_bin_op(ImmT ___nl__0,ImmT * ___ref___1) {
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
#line 260
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(197)));
#line 260
c_rt_lib0move(&___nl__2, generator_js_priv0print_register_to_assign(___nl__3));
#line 260
c_rt_lib0clear(&___nl__3);
#line 261
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(443)));
#line 261
c_rt_lib0move(&___nl__4,___get_global_const(318));
#line 261
c_rt_lib0move(&___nl__3, c_rt_lib0eq(___nl__3, ___nl__4));
#line 261
c_rt_lib0clear(&___nl__4);
#line 261
if(c_rt_lib0check_true_native(___nl__3)){ goto label_12;}
#line 261
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(443)));
#line 261
c_rt_lib0move(&___nl__4,___get_global_const(308));
#line 261
c_rt_lib0move(&___nl__3, c_rt_lib0eq(___nl__3, ___nl__4));
#line 261
c_rt_lib0clear(&___nl__4);
#line 261
label_12:
#line 261
if(c_rt_lib0check_true_native(___nl__3)){ goto label_18;}
#line 261
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(443)));
#line 261
c_rt_lib0move(&___nl__4,___get_global_const(310));
#line 261
c_rt_lib0move(&___nl__3, c_rt_lib0eq(___nl__3, ___nl__4));
#line 261
c_rt_lib0clear(&___nl__4);
#line 261
label_18:
#line 261
if(c_rt_lib0check_true_native(___nl__3)){ goto label_24;}
#line 261
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(443)));
#line 261
c_rt_lib0move(&___nl__4,___get_global_const(316));
#line 261
c_rt_lib0move(&___nl__3, c_rt_lib0eq(___nl__3, ___nl__4));
#line 261
c_rt_lib0clear(&___nl__4);
#line 261
label_24:
#line 261
if(c_rt_lib0check_true_native(___nl__3)){ goto label_30;}
#line 261
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(443)));
#line 261
c_rt_lib0move(&___nl__4,___get_global_const(312));
#line 261
c_rt_lib0move(&___nl__3, c_rt_lib0eq(___nl__3, ___nl__4));
#line 261
c_rt_lib0clear(&___nl__4);
#line 261
label_30:
#line 261
if(c_rt_lib0check_true_native(___nl__3)){ goto label_36;}
#line 262
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(443)));
#line 262
c_rt_lib0move(&___nl__4,___get_global_const(314));
#line 262
c_rt_lib0move(&___nl__3, c_rt_lib0eq(___nl__3, ___nl__4));
#line 262
c_rt_lib0clear(&___nl__4);
#line 262
label_36:
#line 262
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 262
if(c_rt_lib0check_true_native(___nl__3)){ goto label_83;}
#line 263
c_rt_lib0move(&___nl__5,___get_global_const(225));
#line 263
c_rt_lib0move(&___nl__6,___get_global_const(609));
#line 263
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(230)));
#line 263
c_rt_lib0move(&___nl__7, c_rt_lib0array_mk(1, ___nl__8));
#line 263
c_rt_lib0clear(&___nl__8);
#line 263
c_rt_lib0move(&___nl__4, generator_js_priv0print_int_call_sim(___nl__5, ___nl__6, ___nl__7));
#line 263
c_rt_lib0clear(&___nl__7);
#line 263
c_rt_lib0clear(&___nl__6);
#line 263
c_rt_lib0clear(&___nl__5);
#line 264
c_rt_lib0move(&___nl__6,___get_global_const(225));
#line 264
c_rt_lib0move(&___nl__7,___get_global_const(609));
#line 264
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(231)));
#line 264
c_rt_lib0move(&___nl__8, c_rt_lib0array_mk(1, ___nl__9));
#line 264
c_rt_lib0clear(&___nl__9);
#line 264
c_rt_lib0move(&___nl__5, generator_js_priv0print_int_call_sim(___nl__6, ___nl__7, ___nl__8));
#line 264
c_rt_lib0clear(&___nl__8);
#line 264
c_rt_lib0clear(&___nl__7);
#line 264
c_rt_lib0clear(&___nl__6);
#line 265
c_rt_lib0move(&___nl__7,___get_global_const(225));
#line 265
c_rt_lib0move(&___nl__8,___get_global_const(610));
#line 265
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(443)));
#line 265
c_rt_lib0move(&___nl__10, c_rt_lib0concat_new(___nl__4, ___nl__10));
#line 265
c_rt_lib0move(&___nl__10, c_rt_lib0concat_add(___nl__10, ___nl__5));
#line 265
c_rt_lib0move(&___nl__10, c_rt_lib0ov_mk_arg(___get_global_const(239), ___nl__10));
#line 265
c_rt_lib0move(&___nl__9, c_rt_lib0array_mk(1, ___nl__10));
#line 265
c_rt_lib0clear(&___nl__10);
#line 265
c_rt_lib0move(&___nl__6, generator_js_priv0print_internal_call(___nl__7, ___nl__8, ___nl__9, ___ref___1));
#line 265
c_rt_lib0clear(&___nl__9);
#line 265
c_rt_lib0clear(&___nl__8);
#line 265
c_rt_lib0clear(&___nl__7);
#line 265
c_rt_lib0move(&___nl__6, c_rt_lib0concat_new(___nl__2, ___nl__6));
#line 265
c_rt_lib0move(&___nl__7,___get_global_const(360));
#line 265
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__7));
#line 265
c_rt_lib0clear(&___nl__7);
#line 265
c_rt_lib0clear(&___nl__0);
#line 265
c_rt_lib0clear(&___nl__2);
#line 265
c_rt_lib0clear(&___nl__3);
#line 265
c_rt_lib0clear(&___nl__4);
#line 265
c_rt_lib0clear(&___nl__5);
#line 265
return ___nl__6;
#line 265
c_rt_lib0clear(&___nl__6);
#line 265
c_rt_lib0clear(&___nl__4);
#line 265
c_rt_lib0clear(&___nl__5);
#line 266
goto label_237;
#line 266
label_83:
#line 266
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(443)));
#line 266
c_rt_lib0move(&___nl__4,___get_global_const(300));
#line 266
c_rt_lib0move(&___nl__3, c_rt_lib0eq(___nl__3, ___nl__4));
#line 266
c_rt_lib0clear(&___nl__4);
#line 266
if(c_rt_lib0check_true_native(___nl__3)){ goto label_93;}
#line 266
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(443)));
#line 266
c_rt_lib0move(&___nl__4,___get_global_const(301));
#line 266
c_rt_lib0move(&___nl__3, c_rt_lib0eq(___nl__3, ___nl__4));
#line 266
c_rt_lib0clear(&___nl__4);
#line 266
label_93:
#line 266
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 266
if(c_rt_lib0check_true_native(___nl__3)){ goto label_114;}
#line 267
c_rt_lib0move(&___nl__5,___get_global_const(225));
#line 267
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(443)));
#line 267
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(230)));
#line 267
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(231)));
#line 267
c_rt_lib0move(&___nl__7, c_rt_lib0array_mk(2, ___nl__8, ___nl__9));
#line 267
c_rt_lib0clear(&___nl__8);
#line 267
c_rt_lib0clear(&___nl__9);
#line 267
c_rt_lib0move(&___nl__4, generator_js_priv0print_int_call_sim(___nl__5, ___nl__6, ___nl__7));
#line 267
c_rt_lib0clear(&___nl__7);
#line 267
c_rt_lib0clear(&___nl__6);
#line 267
c_rt_lib0clear(&___nl__5);
#line 267
c_rt_lib0move(&___nl__4, c_rt_lib0concat_new(___nl__2, ___nl__4));
#line 267
c_rt_lib0clear(&___nl__0);
#line 267
c_rt_lib0clear(&___nl__2);
#line 267
c_rt_lib0clear(&___nl__3);
#line 267
return ___nl__4;
#line 267
c_rt_lib0clear(&___nl__4);
#line 268
goto label_237;
#line 268
label_114:
#line 268
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(443)));
#line 268
c_rt_lib0move(&___nl__4,___get_global_const(97));
#line 268
c_rt_lib0move(&___nl__3, c_rt_lib0eq(___nl__3, ___nl__4));
#line 268
c_rt_lib0clear(&___nl__4);
#line 268
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 268
if(c_rt_lib0check_true_native(___nl__3)){ goto label_193;}
#line 269
c_rt_lib0move(&___nl__4, c_rt_lib0get_false());
#line 269
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__4));
#line 269
if(c_rt_lib0check_true_native(___nl__5)){ goto label_128;}
#line 269
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(230)));
#line 269
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(197)));
#line 269
c_rt_lib0move(&___nl__4, c_rt_lib0eq(___nl__4, ___nl__6));
#line 269
c_rt_lib0clear(&___nl__6);
#line 269
label_128:
#line 269
c_rt_lib0clear(&___nl__5);
#line 269
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 269
if(c_rt_lib0check_true_native(___nl__4)){ goto label_161;}
#line 270
c_rt_lib0move(&___nl__6,___get_global_const(225));
#line 270
c_rt_lib0move(&___nl__7,___get_global_const(326));
#line 270
c_rt_lib0move(&___nl__10, ptd0sim());
#line 270
c_rt_lib0move(&___nl__11, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(230)));
#line 270
c_rt_lib0move(&___nl__9, ptd0ensure(___nl__10, ___nl__11));
#line 270
c_rt_lib0clear(&___nl__11);
#line 270
c_rt_lib0clear(&___nl__10);
#line 270
c_rt_lib0move(&___nl__9, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__9));
#line 270
c_rt_lib0move(&___nl__11, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(231)));
#line 270
c_rt_lib0move(&___nl__10, generator_js_priv0print_register(___nl__11));
#line 270
c_rt_lib0clear(&___nl__11);
#line 270
c_rt_lib0move(&___nl__10, c_rt_lib0ov_mk_arg(___get_global_const(239), ___nl__10));
#line 270
c_rt_lib0move(&___nl__8, c_rt_lib0array_mk(2, ___nl__9, ___nl__10));
#line 270
c_rt_lib0clear(&___nl__9);
#line 270
c_rt_lib0clear(&___nl__10);
#line 270
c_rt_lib0move(&___nl__5, generator_js_priv0print_internal_call(___nl__6, ___nl__7, ___nl__8, ___ref___1));
#line 270
c_rt_lib0clear(&___nl__8);
#line 270
c_rt_lib0clear(&___nl__7);
#line 270
c_rt_lib0clear(&___nl__6);
#line 270
c_rt_lib0move(&___nl__6,___get_global_const(360));
#line 270
c_rt_lib0move(&___nl__5, c_rt_lib0concat_add(___nl__5, ___nl__6));
#line 270
c_rt_lib0clear(&___nl__6);
#line 270
c_rt_lib0clear(&___nl__0);
#line 270
c_rt_lib0clear(&___nl__2);
#line 270
c_rt_lib0clear(&___nl__3);
#line 270
c_rt_lib0clear(&___nl__4);
#line 270
return ___nl__5;
#line 270
c_rt_lib0clear(&___nl__5);
#line 271
goto label_190;
#line 271
label_161:
#line 272
c_rt_lib0move(&___nl__6,___get_global_const(225));
#line 272
c_rt_lib0move(&___nl__7,___get_global_const(611));
#line 273
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(230)));
#line 273
c_rt_lib0move(&___nl__9, generator_js_priv0print_register(___nl__10));
#line 273
c_rt_lib0clear(&___nl__10);
#line 273
c_rt_lib0move(&___nl__9, c_rt_lib0ov_mk_arg(___get_global_const(239), ___nl__9));
#line 273
c_rt_lib0move(&___nl__11, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(231)));
#line 273
c_rt_lib0move(&___nl__10, generator_js_priv0print_register(___nl__11));
#line 273
c_rt_lib0clear(&___nl__11);
#line 273
c_rt_lib0move(&___nl__10, c_rt_lib0ov_mk_arg(___get_global_const(239), ___nl__10));
#line 273
c_rt_lib0move(&___nl__8, c_rt_lib0array_mk(2, ___nl__9, ___nl__10));
#line 273
c_rt_lib0clear(&___nl__9);
#line 273
c_rt_lib0clear(&___nl__10);
#line 273
c_rt_lib0move(&___nl__5, generator_js_priv0print_internal_call(___nl__6, ___nl__7, ___nl__8, ___ref___1));
#line 273
c_rt_lib0clear(&___nl__8);
#line 273
c_rt_lib0clear(&___nl__7);
#line 273
c_rt_lib0clear(&___nl__6);
#line 273
c_rt_lib0move(&___nl__5, c_rt_lib0concat_new(___nl__2, ___nl__5));
#line 273
c_rt_lib0move(&___nl__6,___get_global_const(360));
#line 273
c_rt_lib0move(&___nl__5, c_rt_lib0concat_add(___nl__5, ___nl__6));
#line 273
c_rt_lib0clear(&___nl__6);
#line 273
c_rt_lib0clear(&___nl__0);
#line 273
c_rt_lib0clear(&___nl__2);
#line 273
c_rt_lib0clear(&___nl__3);
#line 273
c_rt_lib0clear(&___nl__4);
#line 273
return ___nl__5;
#line 273
c_rt_lib0clear(&___nl__5);
#line 275
goto label_190;
#line 275
label_190:
#line 275
c_rt_lib0clear(&___nl__4);
#line 276
goto label_237;
#line 276
label_193:
#line 277
c_rt_lib0move(&___nl__5,___get_global_const(225));
#line 277
c_rt_lib0move(&___nl__6,___get_global_const(609));
#line 277
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(230)));
#line 277
c_rt_lib0move(&___nl__7, c_rt_lib0array_mk(1, ___nl__8));
#line 277
c_rt_lib0clear(&___nl__8);
#line 277
c_rt_lib0move(&___nl__4, generator_js_priv0print_int_call_sim(___nl__5, ___nl__6, ___nl__7));
#line 277
c_rt_lib0clear(&___nl__7);
#line 277
c_rt_lib0clear(&___nl__6);
#line 277
c_rt_lib0clear(&___nl__5);
#line 278
c_rt_lib0move(&___nl__6,___get_global_const(225));
#line 278
c_rt_lib0move(&___nl__7,___get_global_const(609));
#line 278
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(231)));
#line 278
c_rt_lib0move(&___nl__8, c_rt_lib0array_mk(1, ___nl__9));
#line 278
c_rt_lib0clear(&___nl__9);
#line 278
c_rt_lib0move(&___nl__5, generator_js_priv0print_int_call_sim(___nl__6, ___nl__7, ___nl__8));
#line 278
c_rt_lib0clear(&___nl__8);
#line 278
c_rt_lib0clear(&___nl__7);
#line 278
c_rt_lib0clear(&___nl__6);
#line 279
c_rt_lib0move(&___nl__7,___get_global_const(612));
#line 279
c_rt_lib0move(&___nl__6, generator_js_priv0imm_call(___nl__7));
#line 279
c_rt_lib0clear(&___nl__7);
#line 279
c_rt_lib0move(&___nl__6, c_rt_lib0concat_new(___nl__2, ___nl__6));
#line 279
c_rt_lib0move(&___nl__7,___get_global_const(373));
#line 279
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__7));
#line 279
c_rt_lib0clear(&___nl__7);
#line 279
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__4));
#line 279
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(443)));
#line 279
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__7));
#line 279
c_rt_lib0clear(&___nl__7);
#line 279
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__5));
#line 279
c_rt_lib0move(&___nl__7,___get_global_const(498));
#line 279
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__7));
#line 279
c_rt_lib0clear(&___nl__7);
#line 279
c_rt_lib0clear(&___nl__0);
#line 279
c_rt_lib0clear(&___nl__2);
#line 279
c_rt_lib0clear(&___nl__3);
#line 279
c_rt_lib0clear(&___nl__4);
#line 279
c_rt_lib0clear(&___nl__5);
#line 279
return ___nl__6;
#line 279
c_rt_lib0clear(&___nl__6);
#line 279
c_rt_lib0clear(&___nl__4);
#line 279
c_rt_lib0clear(&___nl__5);
#line 280
goto label_237;
#line 280
label_237:
#line 280
c_rt_lib0clear(&___nl__3);
#line 280
c_rt_lib0clear(&___nl__2);
#line 280
c_rt_lib0clear(&___nl__0);
#line 280
return NULL;
}

ImmT generator_js_priv0print_call(ImmT ___nl__0,ImmT ___nl__1,ImmT ___nl__2,ImmT ___nl__3,ImmT * ___ref___4) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
c_rt_lib0arg_val(___nl__2);
c_rt_lib0arg_val(___nl__3);
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
#line 285
c_rt_lib0move(&___nl__5, generator_js_priv0print_register_to_assign(___nl__3));
#line 285
c_rt_lib0move(&___nl__6, generator_js_priv0get_function_call_name_raw(___nl__1, ___nl__0));
#line 285
c_rt_lib0move(&___nl__5, c_rt_lib0concat_add(___nl__5, ___nl__6));
#line 285
c_rt_lib0clear(&___nl__6);
#line 285
c_rt_lib0move(&___nl__6,___get_global_const(373));
#line 285
c_rt_lib0move(&___nl__5, c_rt_lib0concat_add(___nl__5, ___nl__6));
#line 285
c_rt_lib0clear(&___nl__6);
#line 286
c_rt_lib0move(&___nl__6,___get_global_const(0));
#line 287
c_rt_lib0move(&___nl__7,___get_global_const(2));
#line 288
c_rt_lib0move(&___nl__8,___get_global_const(2));
#line 289
c_rt_lib0move(&___nl__10,___get_global_const(0));
#line 289
c_rt_lib0move(&___nl__11,___get_global_const(1));
#line 289
c_rt_lib0move(&___nl__12, c_rt_lib0array_len(___nl__2));
#line 289
label_13:
#line 289
c_rt_lib0move(&___nl__13, c_rt_lib0ge(___nl__10, ___nl__12));
#line 289
if(c_rt_lib0check_true_native(___nl__13)){ goto label_59;}
#line 289
c_rt_lib0move(&___nl__9, c_rt_lib0array_get(___nl__2, ___nl__10));
#line 290
c_rt_lib0move(&___nl__14,___get_global_const(0));
#line 290
c_rt_lib0move(&___nl__14, c_rt_lib0num_eq(___nl__6, ___nl__14));
#line 290
c_rt_lib0move(&___nl__14, c_rt_lib0not(___nl__14));
#line 290
c_rt_lib0move(&___nl__14, c_rt_lib0not(___nl__14));
#line 290
if(c_rt_lib0check_true_native(___nl__14)){ goto label_26;}
#line 290
c_rt_lib0move(&___nl__15,___get_global_const(256));
#line 290
c_rt_lib0move(&___nl__5, c_rt_lib0concat_add(___nl__5, ___nl__15));
#line 290
c_rt_lib0clear(&___nl__15);
#line 290
goto label_26;
#line 290
label_26:
#line 290
c_rt_lib0clear(&___nl__14);
#line 291
c_rt_lib0move(&___nl__14,___get_global_const(1));
#line 291
c_rt_lib0move(&___nl__6, c_rt_lib0add_mod(___nl__6, ___nl__14));
#line 291
c_rt_lib0clear(&___nl__14);
#line 292
c_rt_lib0move(&___nl__14, c_rt_lib0priv_is(___nl__9, ___get_global_const(5)));
#line 292
if(c_rt_lib0check_true_native(___nl__14)){ goto label_38;}
#line 295
c_rt_lib0move(&___nl__14, c_rt_lib0priv_is(___nl__9, ___get_global_const(198)));
#line 295
if(c_rt_lib0check_true_native(___nl__14)){ goto label_48;}
#line 295
c_rt_lib0move(&___nl__14,___get_global_const(91));
#line 295
c_rt_lib0move(&___nl__14, c_rt_lib0array_mk(2, ___nl__14, ___nl__9));
#line 295
nl_die_arg(___nl__14);
#line 292
label_38:
#line 292
c_rt_lib0move(&___nl__15, c_rt_lib0priv_as(___nl__9, ___get_global_const(5)));
#line 293
c_rt_lib0move(&___nl__17, ptd0sim());
#line 293
c_rt_lib0move(&___nl__16, ptd0ensure(___nl__17, ___nl__15));
#line 293
c_rt_lib0clear(&___nl__17);
#line 293
c_rt_lib0copy(&___nl__15, ___nl__16);
#line 293
c_rt_lib0clear(&___nl__16);
#line 294
c_rt_lib0delete(generator_js_priv0process_ref_reg(&___nl__7, &___nl__5, &___nl__8, ___nl__15, ___nl__6, *___ref___4));
#line 294
c_rt_lib0clear(&___nl__15);
#line 295
goto label_55;
#line 295
label_48:
#line 295
c_rt_lib0move(&___nl__15, c_rt_lib0priv_as(___nl__9, ___get_global_const(198)));
#line 296
c_rt_lib0move(&___nl__16, generator_js_priv0print_register(___nl__15));
#line 296
c_rt_lib0move(&___nl__5, c_rt_lib0concat_add(___nl__5, ___nl__16));
#line 296
c_rt_lib0clear(&___nl__16);
#line 296
c_rt_lib0clear(&___nl__15);
#line 297
goto label_55;
#line 297
label_55:
#line 297
c_rt_lib0clear(&___nl__14);
#line 298
c_rt_lib0move(&___nl__10, c_rt_lib0add_mod(___nl__10, ___nl__11));
#line 298
goto label_13;
#line 298
label_59:
#line 298
c_rt_lib0clear(&___nl__9);
#line 298
c_rt_lib0clear(&___nl__10);
#line 298
c_rt_lib0clear(&___nl__11);
#line 298
c_rt_lib0clear(&___nl__12);
#line 298
c_rt_lib0clear(&___nl__13);
#line 299
c_rt_lib0move(&___nl__9,___get_global_const(1));
#line 299
c_rt_lib0move(___ref___4, c_rt_lib0add_mod(*___ref___4, ___nl__9));
#line 299
c_rt_lib0clear(&___nl__9);
#line 300
c_rt_lib0move(&___nl__9, c_rt_lib0concat_new(___nl__7, ___nl__5));
#line 300
c_rt_lib0move(&___nl__10,___get_global_const(498));
#line 300
c_rt_lib0move(&___nl__9, c_rt_lib0concat_add(___nl__9, ___nl__10));
#line 300
c_rt_lib0clear(&___nl__10);
#line 300
c_rt_lib0move(&___nl__9, c_rt_lib0concat_add(___nl__9, ___nl__8));
#line 300
c_rt_lib0clear(&___nl__0);
#line 300
c_rt_lib0clear(&___nl__1);
#line 300
c_rt_lib0clear(&___nl__2);
#line 300
c_rt_lib0clear(&___nl__3);
#line 300
c_rt_lib0clear(&___nl__5);
#line 300
c_rt_lib0clear(&___nl__6);
#line 300
c_rt_lib0clear(&___nl__7);
#line 300
c_rt_lib0clear(&___nl__8);
#line 300
return ___nl__9;
#line 300
c_rt_lib0clear(&___nl__9);
#line 300
c_rt_lib0clear(&___nl__5);
#line 300
c_rt_lib0clear(&___nl__6);
#line 300
c_rt_lib0clear(&___nl__7);
#line 300
c_rt_lib0clear(&___nl__8);
#line 300
c_rt_lib0clear(&___nl__0);
#line 300
c_rt_lib0clear(&___nl__1);
#line 300
c_rt_lib0clear(&___nl__2);
#line 300
c_rt_lib0clear(&___nl__3);
#line 300
return NULL;
}

ImmT generator_js_priv0process_ref_reg(ImmT * ___ref___0,ImmT * ___ref___1,ImmT * ___ref___2,ImmT ___nl__3,ImmT ___nl__4,ImmT ___nl__5) {
c_rt_lib0arg_val(___nl__3);
c_rt_lib0arg_val(___nl__4);
c_rt_lib0arg_val(___nl__5);
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
ImmT ___nl__9 = NULL;
#line 304
c_rt_lib0move(&___nl__6,___get_global_const(613));
#line 304
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__5));
#line 304
c_rt_lib0move(&___nl__7,___get_global_const(83));
#line 304
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__7));
#line 304
c_rt_lib0clear(&___nl__7);
#line 304
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__4));
#line 305
c_rt_lib0move(&___nl__7,___get_global_const(565));
#line 305
c_rt_lib0move(&___nl__7, c_rt_lib0concat_add(___nl__7, ___nl__6));
#line 305
c_rt_lib0move(&___nl__8,___get_global_const(614));
#line 305
c_rt_lib0move(&___nl__7, c_rt_lib0concat_add(___nl__7, ___nl__8));
#line 305
c_rt_lib0clear(&___nl__8);
#line 305
c_rt_lib0move(&___nl__9,___get_global_const(5));
#line 305
c_rt_lib0move(&___nl__8, generator_js_priv0imm_call(___nl__9));
#line 305
c_rt_lib0clear(&___nl__9);
#line 305
c_rt_lib0move(&___nl__7, c_rt_lib0concat_add(___nl__7, ___nl__8));
#line 305
c_rt_lib0clear(&___nl__8);
#line 305
c_rt_lib0move(&___nl__8,___get_global_const(373));
#line 305
c_rt_lib0move(&___nl__7, c_rt_lib0concat_add(___nl__7, ___nl__8));
#line 305
c_rt_lib0clear(&___nl__8);
#line 305
c_rt_lib0move(&___nl__8, generator_js_priv0print_register(___nl__3));
#line 305
c_rt_lib0move(&___nl__7, c_rt_lib0concat_add(___nl__7, ___nl__8));
#line 305
c_rt_lib0clear(&___nl__8);
#line 305
c_rt_lib0move(&___nl__8,___get_global_const(498));
#line 305
c_rt_lib0move(&___nl__7, c_rt_lib0concat_add(___nl__7, ___nl__8));
#line 305
c_rt_lib0clear(&___nl__8);
#line 305
c_rt_lib0move(___ref___0, c_rt_lib0concat_add(*___ref___0, ___nl__7));
#line 305
c_rt_lib0clear(&___nl__7);
#line 306
c_rt_lib0move(___ref___1, c_rt_lib0concat_add(*___ref___1, ___nl__6));
#line 307
c_rt_lib0move(&___nl__7, generator_js_priv0print_register_to_assign(___nl__3));
#line 307
c_rt_lib0move(&___nl__7, c_rt_lib0concat_add(___nl__7, ___nl__6));
#line 307
c_rt_lib0move(&___nl__8,___get_global_const(596));
#line 307
c_rt_lib0move(&___nl__7, c_rt_lib0concat_add(___nl__7, ___nl__8));
#line 307
c_rt_lib0clear(&___nl__8);
#line 307
c_rt_lib0move(___ref___2, c_rt_lib0concat_add(*___ref___2, ___nl__7));
#line 307
c_rt_lib0clear(&___nl__7);
#line 308
c_rt_lib0move(&___nl__7,___get_global_const(488));
#line 308
c_rt_lib0move(&___nl__7, c_rt_lib0concat_new(___nl__6, ___nl__7));
#line 308
c_rt_lib0move(___ref___2, c_rt_lib0concat_add(*___ref___2, ___nl__7));
#line 308
c_rt_lib0clear(&___nl__7);
#line 308
c_rt_lib0clear(&___nl__6);
#line 308
c_rt_lib0clear(&___nl__3);
#line 308
c_rt_lib0clear(&___nl__4);
#line 308
c_rt_lib0clear(&___nl__5);
#line 308
return NULL;
}

ImmT generator_js_priv0print_internal_call(ImmT ___nl__0,ImmT ___nl__1,ImmT ___nl__2,ImmT * ___ref___3) {
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
#line 313
c_rt_lib0move(&___nl__4,___get_global_const(0));
#line 314
c_rt_lib0move(&___nl__5,___get_global_const(2));
#line 315
c_rt_lib0move(&___nl__6,___get_global_const(2));
#line 316
c_rt_lib0move(&___nl__7, generator_js_priv0get_namespace_name());
#line 316
c_rt_lib0move(&___nl__8,___get_global_const(97));
#line 316
c_rt_lib0move(&___nl__7, c_rt_lib0concat_add(___nl__7, ___nl__8));
#line 316
c_rt_lib0clear(&___nl__8);
#line 316
c_rt_lib0move(&___nl__7, c_rt_lib0concat_add(___nl__7, ___nl__0));
#line 316
c_rt_lib0move(&___nl__8,___get_global_const(97));
#line 316
c_rt_lib0move(&___nl__7, c_rt_lib0concat_add(___nl__7, ___nl__8));
#line 316
c_rt_lib0clear(&___nl__8);
#line 316
c_rt_lib0move(&___nl__7, c_rt_lib0concat_add(___nl__7, ___nl__1));
#line 316
c_rt_lib0move(&___nl__8,___get_global_const(373));
#line 316
c_rt_lib0move(&___nl__7, c_rt_lib0concat_add(___nl__7, ___nl__8));
#line 316
c_rt_lib0clear(&___nl__8);
#line 317
c_rt_lib0move(&___nl__9,___get_global_const(0));
#line 317
c_rt_lib0move(&___nl__10,___get_global_const(1));
#line 317
c_rt_lib0move(&___nl__11, c_rt_lib0array_len(___nl__2));
#line 317
label_18:
#line 317
c_rt_lib0move(&___nl__12, c_rt_lib0ge(___nl__9, ___nl__11));
#line 317
if(c_rt_lib0check_true_native(___nl__12)){ goto label_66;}
#line 317
c_rt_lib0move(&___nl__8, c_rt_lib0array_get(___nl__2, ___nl__9));
#line 318
c_rt_lib0move(&___nl__13,___get_global_const(0));
#line 318
c_rt_lib0move(&___nl__13, c_rt_lib0num_eq(___nl__4, ___nl__13));
#line 318
c_rt_lib0move(&___nl__13, c_rt_lib0not(___nl__13));
#line 318
c_rt_lib0move(&___nl__13, c_rt_lib0not(___nl__13));
#line 318
if(c_rt_lib0check_true_native(___nl__13)){ goto label_31;}
#line 318
c_rt_lib0move(&___nl__14,___get_global_const(256));
#line 318
c_rt_lib0move(&___nl__7, c_rt_lib0concat_add(___nl__7, ___nl__14));
#line 318
c_rt_lib0clear(&___nl__14);
#line 318
goto label_31;
#line 318
label_31:
#line 318
c_rt_lib0clear(&___nl__13);
#line 319
c_rt_lib0move(&___nl__13,___get_global_const(1));
#line 319
c_rt_lib0move(&___nl__4, c_rt_lib0add_mod(___nl__4, ___nl__13));
#line 319
c_rt_lib0clear(&___nl__13);
#line 320
c_rt_lib0move(&___nl__13, c_rt_lib0priv_is(___nl__8, ___get_global_const(5)));
#line 320
if(c_rt_lib0check_true_native(___nl__13)){ goto label_45;}
#line 322
c_rt_lib0move(&___nl__13, c_rt_lib0priv_is(___nl__8, ___get_global_const(283)));
#line 322
if(c_rt_lib0check_true_native(___nl__13)){ goto label_50;}
#line 324
c_rt_lib0move(&___nl__13, c_rt_lib0priv_is(___nl__8, ___get_global_const(239)));
#line 324
if(c_rt_lib0check_true_native(___nl__13)){ goto label_57;}
#line 324
c_rt_lib0move(&___nl__13,___get_global_const(91));
#line 324
c_rt_lib0move(&___nl__13, c_rt_lib0array_mk(2, ___nl__13, ___nl__8));
#line 324
nl_die_arg(___nl__13);
#line 320
label_45:
#line 320
c_rt_lib0move(&___nl__14, c_rt_lib0priv_as(___nl__8, ___get_global_const(5)));
#line 321
c_rt_lib0delete(generator_js_priv0process_ref_reg(&___nl__5, &___nl__7, &___nl__6, ___nl__14, ___nl__4, *___ref___3));
#line 321
c_rt_lib0clear(&___nl__14);
#line 322
goto label_62;
#line 322
label_50:
#line 322
c_rt_lib0move(&___nl__14, c_rt_lib0priv_as(___nl__8, ___get_global_const(283)));
#line 323
c_rt_lib0move(&___nl__15, generator_js_priv0print_register(___nl__14));
#line 323
c_rt_lib0move(&___nl__7, c_rt_lib0concat_add(___nl__7, ___nl__15));
#line 323
c_rt_lib0clear(&___nl__15);
#line 323
c_rt_lib0clear(&___nl__14);
#line 324
goto label_62;
#line 324
label_57:
#line 324
c_rt_lib0move(&___nl__14, c_rt_lib0priv_as(___nl__8, ___get_global_const(239)));
#line 325
c_rt_lib0move(&___nl__7, c_rt_lib0concat_add(___nl__7, ___nl__14));
#line 325
c_rt_lib0clear(&___nl__14);
#line 326
goto label_62;
#line 326
label_62:
#line 326
c_rt_lib0clear(&___nl__13);
#line 327
c_rt_lib0move(&___nl__9, c_rt_lib0add_mod(___nl__9, ___nl__10));
#line 327
goto label_18;
#line 327
label_66:
#line 327
c_rt_lib0clear(&___nl__8);
#line 327
c_rt_lib0clear(&___nl__9);
#line 327
c_rt_lib0clear(&___nl__10);
#line 327
c_rt_lib0clear(&___nl__11);
#line 327
c_rt_lib0clear(&___nl__12);
#line 328
c_rt_lib0move(&___nl__8,___get_global_const(1));
#line 328
c_rt_lib0move(___ref___3, c_rt_lib0add_mod(*___ref___3, ___nl__8));
#line 328
c_rt_lib0clear(&___nl__8);
#line 329
c_rt_lib0move(&___nl__8, c_rt_lib0concat_new(___nl__5, ___nl__7));
#line 329
c_rt_lib0move(&___nl__9,___get_global_const(498));
#line 329
c_rt_lib0move(&___nl__8, c_rt_lib0concat_add(___nl__8, ___nl__9));
#line 329
c_rt_lib0clear(&___nl__9);
#line 329
c_rt_lib0move(&___nl__8, c_rt_lib0concat_add(___nl__8, ___nl__6));
#line 329
c_rt_lib0clear(&___nl__0);
#line 329
c_rt_lib0clear(&___nl__1);
#line 329
c_rt_lib0clear(&___nl__2);
#line 329
c_rt_lib0clear(&___nl__4);
#line 329
c_rt_lib0clear(&___nl__5);
#line 329
c_rt_lib0clear(&___nl__6);
#line 329
c_rt_lib0clear(&___nl__7);
#line 329
return ___nl__8;
#line 329
c_rt_lib0clear(&___nl__8);
#line 329
c_rt_lib0clear(&___nl__4);
#line 329
c_rt_lib0clear(&___nl__5);
#line 329
c_rt_lib0clear(&___nl__6);
#line 329
c_rt_lib0clear(&___nl__7);
#line 329
c_rt_lib0clear(&___nl__0);
#line 329
c_rt_lib0clear(&___nl__1);
#line 329
c_rt_lib0clear(&___nl__2);
#line 329
return NULL;
}

ImmT generator_js_priv0print_int_call_sim(ImmT ___nl__0,ImmT ___nl__1,ImmT ___nl__2) {
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
#line 333
c_rt_lib0move(&___nl__3, c_rt_lib0array_mk(0));
#line 334
c_rt_lib0move(&___nl__5,___get_global_const(0));
#line 334
c_rt_lib0move(&___nl__6,___get_global_const(1));
#line 334
c_rt_lib0move(&___nl__7, c_rt_lib0array_len(___nl__2));
#line 334
label_4:
#line 334
c_rt_lib0move(&___nl__8, c_rt_lib0ge(___nl__5, ___nl__7));
#line 334
if(c_rt_lib0check_true_native(___nl__8)){ goto label_13;}
#line 334
c_rt_lib0move(&___nl__4, c_rt_lib0array_get(___nl__2, ___nl__5));
#line 335
c_rt_lib0move(&___nl__9, generator_js_priv0print_register(___nl__4));
#line 335
c_rt_lib0delete(c_rt_lib0array_push(&___nl__3, ___nl__9));
#line 335
c_rt_lib0clear(&___nl__9);
#line 336
c_rt_lib0move(&___nl__5, c_rt_lib0add_mod(___nl__5, ___nl__6));
#line 336
goto label_4;
#line 336
label_13:
#line 336
c_rt_lib0clear(&___nl__4);
#line 336
c_rt_lib0clear(&___nl__5);
#line 336
c_rt_lib0clear(&___nl__6);
#line 336
c_rt_lib0clear(&___nl__7);
#line 336
c_rt_lib0clear(&___nl__8);
#line 337
c_rt_lib0move(&___nl__4, generator_js_priv0get_namespace_name());
#line 337
c_rt_lib0move(&___nl__5,___get_global_const(97));
#line 337
c_rt_lib0move(&___nl__4, c_rt_lib0concat_add(___nl__4, ___nl__5));
#line 337
c_rt_lib0clear(&___nl__5);
#line 337
c_rt_lib0move(&___nl__4, c_rt_lib0concat_add(___nl__4, ___nl__0));
#line 337
c_rt_lib0move(&___nl__5,___get_global_const(97));
#line 337
c_rt_lib0move(&___nl__4, c_rt_lib0concat_add(___nl__4, ___nl__5));
#line 337
c_rt_lib0clear(&___nl__5);
#line 337
c_rt_lib0move(&___nl__4, c_rt_lib0concat_add(___nl__4, ___nl__1));
#line 337
c_rt_lib0move(&___nl__5,___get_global_const(373));
#line 337
c_rt_lib0move(&___nl__4, c_rt_lib0concat_add(___nl__4, ___nl__5));
#line 337
c_rt_lib0clear(&___nl__5);
#line 337
c_rt_lib0move(&___nl__6,___get_global_const(271));
#line 337
c_rt_lib0move(&___nl__5, array0join(___nl__6, ___nl__3));
#line 337
c_rt_lib0clear(&___nl__6);
#line 337
c_rt_lib0move(&___nl__4, c_rt_lib0concat_add(___nl__4, ___nl__5));
#line 337
c_rt_lib0clear(&___nl__5);
#line 337
c_rt_lib0move(&___nl__5,___get_global_const(260));
#line 337
c_rt_lib0move(&___nl__4, c_rt_lib0concat_add(___nl__4, ___nl__5));
#line 337
c_rt_lib0clear(&___nl__5);
#line 337
c_rt_lib0clear(&___nl__0);
#line 337
c_rt_lib0clear(&___nl__1);
#line 337
c_rt_lib0clear(&___nl__2);
#line 337
c_rt_lib0clear(&___nl__3);
#line 337
return ___nl__4;
#line 337
c_rt_lib0clear(&___nl__4);
#line 337
c_rt_lib0clear(&___nl__3);
#line 337
c_rt_lib0clear(&___nl__0);
#line 337
c_rt_lib0clear(&___nl__1);
#line 337
c_rt_lib0clear(&___nl__2);
#line 337
return NULL;
}

ImmT generator_js_priv0print_const_arr(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
#line 341
c_rt_lib0move(&___nl__2,___get_global_const(327));
#line 341
c_rt_lib0move(&___nl__1, generator_js_priv0imm_call(___nl__2));
#line 341
c_rt_lib0clear(&___nl__2);
#line 341
c_rt_lib0move(&___nl__2,___get_global_const(606));
#line 341
c_rt_lib0move(&___nl__1, c_rt_lib0concat_add(___nl__1, ___nl__2));
#line 341
c_rt_lib0clear(&___nl__2);
#line 342
c_rt_lib0move(&___nl__3,___get_global_const(0));
#line 342
c_rt_lib0move(&___nl__4,___get_global_const(1));
#line 342
c_rt_lib0move(&___nl__5, c_rt_lib0array_len(___nl__0));
#line 342
label_9:
#line 342
c_rt_lib0move(&___nl__6, c_rt_lib0ge(___nl__3, ___nl__5));
#line 342
if(c_rt_lib0check_true_native(___nl__6)){ goto label_21;}
#line 342
c_rt_lib0move(&___nl__2, c_rt_lib0array_get(___nl__0, ___nl__3));
#line 342
c_rt_lib0move(&___nl__7, generator_js_priv0print_const_value(___nl__2));
#line 342
c_rt_lib0move(&___nl__8,___get_global_const(256));
#line 342
c_rt_lib0move(&___nl__7, c_rt_lib0concat_add(___nl__7, ___nl__8));
#line 342
c_rt_lib0clear(&___nl__8);
#line 342
c_rt_lib0move(&___nl__1, c_rt_lib0concat_add(___nl__1, ___nl__7));
#line 342
c_rt_lib0clear(&___nl__7);
#line 342
c_rt_lib0move(&___nl__3, c_rt_lib0add_mod(___nl__3, ___nl__4));
#line 342
goto label_9;
#line 342
label_21:
#line 342
c_rt_lib0clear(&___nl__2);
#line 342
c_rt_lib0clear(&___nl__3);
#line 342
c_rt_lib0clear(&___nl__4);
#line 342
c_rt_lib0clear(&___nl__5);
#line 342
c_rt_lib0clear(&___nl__6);
#line 343
c_rt_lib0move(&___nl__2,___get_global_const(607));
#line 343
c_rt_lib0move(&___nl__2, c_rt_lib0concat_new(___nl__1, ___nl__2));
#line 343
c_rt_lib0clear(&___nl__0);
#line 343
c_rt_lib0clear(&___nl__1);
#line 343
return ___nl__2;
#line 343
c_rt_lib0clear(&___nl__2);
#line 343
c_rt_lib0clear(&___nl__1);
#line 343
c_rt_lib0clear(&___nl__0);
#line 343
return NULL;
}

ImmT generator_js_priv0print_const_hash(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
#line 347
c_rt_lib0move(&___nl__2,___get_global_const(328));
#line 347
c_rt_lib0move(&___nl__1, generator_js_priv0imm_call(___nl__2));
#line 347
c_rt_lib0clear(&___nl__2);
#line 347
c_rt_lib0move(&___nl__2,___get_global_const(615));
#line 347
c_rt_lib0move(&___nl__1, c_rt_lib0concat_add(___nl__1, ___nl__2));
#line 347
c_rt_lib0clear(&___nl__2);
#line 348
c_rt_lib0move(&___nl__4, c_rt_lib0init_iter(___nl__0));
#line 348
label_7:
#line 348
c_rt_lib0move(&___nl__2, c_rt_lib0is_end_hash(___nl__4));
#line 348
if(c_rt_lib0check_true_native(___nl__2)){ goto label_29;}
#line 348
c_rt_lib0move(&___nl__2, c_rt_lib0get_key_iter(___nl__4));
#line 348
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value(___nl__0, ___nl__2));
#line 348
c_rt_lib0move(&___nl__5,___get_global_const(2));
#line 348
c_rt_lib0move(&___nl__6, generator_js_priv0escape_string(___nl__2));
#line 348
c_rt_lib0move(&___nl__5, c_rt_lib0concat_add(___nl__5, ___nl__6));
#line 348
c_rt_lib0clear(&___nl__6);
#line 348
c_rt_lib0move(&___nl__6,___get_global_const(417));
#line 348
c_rt_lib0move(&___nl__5, c_rt_lib0concat_add(___nl__5, ___nl__6));
#line 348
c_rt_lib0clear(&___nl__6);
#line 348
c_rt_lib0move(&___nl__6, generator_js_priv0print_const_value(___nl__3));
#line 348
c_rt_lib0move(&___nl__5, c_rt_lib0concat_add(___nl__5, ___nl__6));
#line 348
c_rt_lib0clear(&___nl__6);
#line 348
c_rt_lib0move(&___nl__6,___get_global_const(256));
#line 348
c_rt_lib0move(&___nl__5, c_rt_lib0concat_add(___nl__5, ___nl__6));
#line 348
c_rt_lib0clear(&___nl__6);
#line 348
c_rt_lib0move(&___nl__1, c_rt_lib0concat_add(___nl__1, ___nl__5));
#line 348
c_rt_lib0clear(&___nl__5);
#line 348
c_rt_lib0move(&___nl__4, c_rt_lib0next_iter(___nl__4));
#line 348
goto label_7;
#line 348
label_29:
#line 348
c_rt_lib0clear(&___nl__2);
#line 348
c_rt_lib0clear(&___nl__3);
#line 348
c_rt_lib0clear(&___nl__4);
#line 349
c_rt_lib0move(&___nl__2,___get_global_const(616));
#line 349
c_rt_lib0move(&___nl__2, c_rt_lib0concat_new(___nl__1, ___nl__2));
#line 349
c_rt_lib0clear(&___nl__0);
#line 349
c_rt_lib0clear(&___nl__1);
#line 349
return ___nl__2;
#line 349
c_rt_lib0clear(&___nl__2);
#line 349
c_rt_lib0clear(&___nl__1);
#line 349
c_rt_lib0clear(&___nl__0);
#line 349
return NULL;
}

ImmT generator_js_priv0print_const_ov(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
#line 353
c_rt_lib0move(&___nl__1, ov0has_value(___nl__0));
#line 353
c_rt_lib0move(&___nl__1, c_rt_lib0not(___nl__1));
#line 353
if(c_rt_lib0check_true_native(___nl__1)){ goto label_30;}
#line 354
c_rt_lib0move(&___nl__3,___get_global_const(617));
#line 354
c_rt_lib0move(&___nl__2, generator_js_priv0imm_call(___nl__3));
#line 354
c_rt_lib0clear(&___nl__3);
#line 354
c_rt_lib0move(&___nl__3,___get_global_const(373));
#line 354
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__3));
#line 354
c_rt_lib0clear(&___nl__3);
#line 354
c_rt_lib0move(&___nl__4, ov0get_element(___nl__0));
#line 354
c_rt_lib0move(&___nl__3, generator_js_priv0escape_string(___nl__4));
#line 354
c_rt_lib0clear(&___nl__4);
#line 354
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__3));
#line 354
c_rt_lib0clear(&___nl__3);
#line 354
c_rt_lib0move(&___nl__3,___get_global_const(271));
#line 354
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__3));
#line 354
c_rt_lib0clear(&___nl__3);
#line 355
c_rt_lib0move(&___nl__4, ov0get_value(___nl__0));
#line 355
c_rt_lib0move(&___nl__3, generator_js_priv0print_const_value(___nl__4));
#line 355
c_rt_lib0clear(&___nl__4);
#line 355
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__3));
#line 355
c_rt_lib0clear(&___nl__3);
#line 355
c_rt_lib0move(&___nl__3,___get_global_const(260));
#line 355
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__3));
#line 355
c_rt_lib0clear(&___nl__3);
#line 355
c_rt_lib0clear(&___nl__0);
#line 355
c_rt_lib0clear(&___nl__1);
#line 355
return ___nl__2;
#line 355
c_rt_lib0clear(&___nl__2);
#line 356
goto label_50;
#line 356
label_30:
#line 357
c_rt_lib0move(&___nl__3,___get_global_const(617));
#line 357
c_rt_lib0move(&___nl__2, generator_js_priv0imm_call(___nl__3));
#line 357
c_rt_lib0clear(&___nl__3);
#line 357
c_rt_lib0move(&___nl__3,___get_global_const(373));
#line 357
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__3));
#line 357
c_rt_lib0clear(&___nl__3);
#line 357
c_rt_lib0move(&___nl__4, ov0get_element(___nl__0));
#line 357
c_rt_lib0move(&___nl__3, generator_js_priv0escape_string(___nl__4));
#line 357
c_rt_lib0clear(&___nl__4);
#line 357
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__3));
#line 357
c_rt_lib0clear(&___nl__3);
#line 357
c_rt_lib0move(&___nl__3,___get_global_const(618));
#line 357
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__3));
#line 357
c_rt_lib0clear(&___nl__3);
#line 357
c_rt_lib0clear(&___nl__0);
#line 357
c_rt_lib0clear(&___nl__1);
#line 357
return ___nl__2;
#line 357
c_rt_lib0clear(&___nl__2);
#line 358
goto label_50;
#line 358
label_50:
#line 358
c_rt_lib0clear(&___nl__1);
#line 358
c_rt_lib0clear(&___nl__0);
#line 358
return NULL;
}

ImmT generator_js_priv0print_const_value(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
#line 362
c_rt_lib0move(&___nl__1, nl0is_sim(___nl__0));
#line 362
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__1));
#line 362
if(c_rt_lib0check_true_native(___nl__3)){ goto label_7;}
#line 362
c_rt_lib0move(&___nl__4,___get_global_const(2));
#line 362
c_rt_lib0move(&___nl__4, c_rt_lib0concat_new(___nl__0, ___nl__4));
#line 362
c_rt_lib0move(&___nl__1, string_utils0is_integer(___nl__4));
#line 362
c_rt_lib0clear(&___nl__4);
#line 362
label_7:
#line 362
c_rt_lib0clear(&___nl__3);
#line 362
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__1));
#line 362
if(c_rt_lib0check_true_native(___nl__2)){ goto label_14;}
#line 362
c_rt_lib0move(&___nl__1,___get_global_const(0));
#line 362
c_rt_lib0move(&___nl__1, c_rt_lib0add_mod(___nl__1, ___nl__0));
#line 362
c_rt_lib0move(&___nl__1, c_rt_lib0eq(___nl__1, ___nl__0));
#line 362
label_14:
#line 362
c_rt_lib0clear(&___nl__2);
#line 362
c_rt_lib0move(&___nl__1, c_rt_lib0not(___nl__1));
#line 362
if(c_rt_lib0check_true_native(___nl__1)){ goto label_33;}
#line 363
c_rt_lib0move(&___nl__3,___get_global_const(619));
#line 363
c_rt_lib0move(&___nl__2, generator_js_priv0imm_call(___nl__3));
#line 363
c_rt_lib0clear(&___nl__3);
#line 363
c_rt_lib0move(&___nl__3,___get_global_const(373));
#line 363
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__3));
#line 363
c_rt_lib0clear(&___nl__3);
#line 363
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__0));
#line 363
c_rt_lib0move(&___nl__3,___get_global_const(260));
#line 363
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__3));
#line 363
c_rt_lib0clear(&___nl__3);
#line 363
c_rt_lib0clear(&___nl__0);
#line 363
c_rt_lib0clear(&___nl__1);
#line 363
return ___nl__2;
#line 363
c_rt_lib0clear(&___nl__2);
#line 364
goto label_141;
#line 364
label_33:
#line 364
c_rt_lib0move(&___nl__1, nl0is_sim(___nl__0));
#line 364
c_rt_lib0move(&___nl__1, c_rt_lib0not(___nl__1));
#line 364
if(c_rt_lib0check_true_native(___nl__1)){ goto label_54;}
#line 365
c_rt_lib0move(&___nl__3,___get_global_const(239));
#line 365
c_rt_lib0move(&___nl__2, generator_js_priv0imm_call(___nl__3));
#line 365
c_rt_lib0clear(&___nl__3);
#line 365
c_rt_lib0move(&___nl__3,___get_global_const(373));
#line 365
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__3));
#line 365
c_rt_lib0clear(&___nl__3);
#line 365
c_rt_lib0move(&___nl__3, generator_js_priv0escape_string(___nl__0));
#line 365
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__3));
#line 365
c_rt_lib0clear(&___nl__3);
#line 365
c_rt_lib0move(&___nl__3,___get_global_const(260));
#line 365
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__3));
#line 365
c_rt_lib0clear(&___nl__3);
#line 365
c_rt_lib0clear(&___nl__0);
#line 365
c_rt_lib0clear(&___nl__1);
#line 365
return ___nl__2;
#line 365
c_rt_lib0clear(&___nl__2);
#line 366
goto label_141;
#line 366
label_54:
#line 366
c_rt_lib0move(&___nl__1, nl0is_array(___nl__0));
#line 366
c_rt_lib0move(&___nl__1, c_rt_lib0not(___nl__1));
#line 366
if(c_rt_lib0check_true_native(___nl__1)){ goto label_64;}
#line 367
c_rt_lib0move(&___nl__2, generator_js_priv0print_const_arr(___nl__0));
#line 367
c_rt_lib0clear(&___nl__0);
#line 367
c_rt_lib0clear(&___nl__1);
#line 367
return ___nl__2;
#line 367
c_rt_lib0clear(&___nl__2);
#line 368
goto label_141;
#line 368
label_64:
#line 368
c_rt_lib0move(&___nl__1, nl0is_hash(___nl__0));
#line 368
c_rt_lib0move(&___nl__1, c_rt_lib0not(___nl__1));
#line 368
if(c_rt_lib0check_true_native(___nl__1)){ goto label_74;}
#line 369
c_rt_lib0move(&___nl__2, generator_js_priv0print_const_hash(___nl__0));
#line 369
c_rt_lib0clear(&___nl__0);
#line 369
c_rt_lib0clear(&___nl__1);
#line 369
return ___nl__2;
#line 369
c_rt_lib0clear(&___nl__2);
#line 370
goto label_141;
#line 370
label_74:
#line 370
c_rt_lib0move(&___nl__1, nl0is_variant(___nl__0));
#line 370
c_rt_lib0move(&___nl__1, c_rt_lib0not(___nl__1));
#line 370
if(c_rt_lib0check_true_native(___nl__1)){ goto label_136;}
#line 371
c_rt_lib0copy(&___nl__2, ___nl__0);
#line 371
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__2, ___get_global_const(7)));
#line 371
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__2));
#line 371
if(c_rt_lib0check_true_native(___nl__3)){ goto label_84;}
#line 371
c_rt_lib0move(&___nl__2, ov0has_value(___nl__0));
#line 371
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 371
label_84:
#line 371
c_rt_lib0clear(&___nl__3);
#line 371
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 371
if(c_rt_lib0check_true_native(___nl__2)){ goto label_101;}
#line 372
c_rt_lib0move(&___nl__4,___get_global_const(225));
#line 372
c_rt_lib0move(&___nl__5,___get_global_const(452));
#line 372
c_rt_lib0move(&___nl__6, c_rt_lib0array_mk(0));
#line 372
c_rt_lib0move(&___nl__3, generator_js_priv0print_int_call_sim(___nl__4, ___nl__5, ___nl__6));
#line 372
c_rt_lib0clear(&___nl__6);
#line 372
c_rt_lib0clear(&___nl__5);
#line 372
c_rt_lib0clear(&___nl__4);
#line 372
c_rt_lib0clear(&___nl__0);
#line 372
c_rt_lib0clear(&___nl__1);
#line 372
c_rt_lib0clear(&___nl__2);
#line 372
return ___nl__3;
#line 372
c_rt_lib0clear(&___nl__3);
#line 373
goto label_133;
#line 373
label_101:
#line 373
c_rt_lib0copy(&___nl__2, ___nl__0);
#line 373
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__2, ___get_global_const(8)));
#line 373
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__2));
#line 373
if(c_rt_lib0check_true_native(___nl__3)){ goto label_108;}
#line 373
c_rt_lib0move(&___nl__2, ov0has_value(___nl__0));
#line 373
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 373
label_108:
#line 373
c_rt_lib0clear(&___nl__3);
#line 373
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 373
if(c_rt_lib0check_true_native(___nl__2)){ goto label_125;}
#line 374
c_rt_lib0move(&___nl__4,___get_global_const(225));
#line 374
c_rt_lib0move(&___nl__5,___get_global_const(453));
#line 374
c_rt_lib0move(&___nl__6, c_rt_lib0array_mk(0));
#line 374
c_rt_lib0move(&___nl__3, generator_js_priv0print_int_call_sim(___nl__4, ___nl__5, ___nl__6));
#line 374
c_rt_lib0clear(&___nl__6);
#line 374
c_rt_lib0clear(&___nl__5);
#line 374
c_rt_lib0clear(&___nl__4);
#line 374
c_rt_lib0clear(&___nl__0);
#line 374
c_rt_lib0clear(&___nl__1);
#line 374
c_rt_lib0clear(&___nl__2);
#line 374
return ___nl__3;
#line 374
c_rt_lib0clear(&___nl__3);
#line 375
goto label_133;
#line 375
label_125:
#line 376
c_rt_lib0move(&___nl__3, generator_js_priv0print_const_ov(___nl__0));
#line 376
c_rt_lib0clear(&___nl__0);
#line 376
c_rt_lib0clear(&___nl__1);
#line 376
c_rt_lib0clear(&___nl__2);
#line 376
return ___nl__3;
#line 376
c_rt_lib0clear(&___nl__3);
#line 377
goto label_133;
#line 377
label_133:
#line 377
c_rt_lib0clear(&___nl__2);
#line 378
goto label_141;
#line 378
label_136:
#line 379
c_rt_lib0move(&___nl__2, c_rt_lib0array_mk(0));
#line 379
nl_die_arg(___nl__2);
#line 379
c_rt_lib0clear(&___nl__2);
#line 380
goto label_141;
#line 380
label_141:
#line 380
c_rt_lib0clear(&___nl__1);
#line 380
c_rt_lib0clear(&___nl__0);
#line 380
return NULL;
}

ImmT generator_js_priv0print_goto(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
#line 384
c_rt_lib0move(&___nl__1,___get_global_const(620));
#line 384
c_rt_lib0move(&___nl__1, c_rt_lib0concat_add(___nl__1, ___nl__0));
#line 384
c_rt_lib0move(&___nl__2,___get_global_const(621));
#line 384
c_rt_lib0move(&___nl__1, c_rt_lib0concat_add(___nl__1, ___nl__2));
#line 384
c_rt_lib0clear(&___nl__2);
#line 384
c_rt_lib0clear(&___nl__0);
#line 384
return ___nl__1;
#line 384
c_rt_lib0clear(&___nl__1);
#line 384
c_rt_lib0clear(&___nl__0);
#line 384
return NULL;
}

ImmT generator_js_priv0print_hash(ImmT ___nl__0) {
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
#line 388
c_rt_lib0move(&___nl__2,___get_global_const(328));
#line 388
c_rt_lib0move(&___nl__1, generator_js_priv0imm_call(___nl__2));
#line 388
c_rt_lib0clear(&___nl__2);
#line 388
c_rt_lib0move(&___nl__2,___get_global_const(615));
#line 388
c_rt_lib0move(&___nl__1, c_rt_lib0concat_add(___nl__1, ___nl__2));
#line 388
c_rt_lib0clear(&___nl__2);
#line 389
c_rt_lib0move(&___nl__3,___get_global_const(0));
#line 389
c_rt_lib0move(&___nl__4,___get_global_const(1));
#line 389
c_rt_lib0move(&___nl__5, c_rt_lib0array_len(___nl__0));
#line 389
label_9:
#line 389
c_rt_lib0move(&___nl__6, c_rt_lib0ge(___nl__3, ___nl__5));
#line 389
if(c_rt_lib0check_true_native(___nl__6)){ goto label_31;}
#line 389
c_rt_lib0move(&___nl__2, c_rt_lib0array_get(___nl__0, ___nl__3));
#line 389
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(329)));
#line 389
c_rt_lib0move(&___nl__7, generator_js_priv0escape_string(___nl__8));
#line 389
c_rt_lib0clear(&___nl__8);
#line 389
c_rt_lib0move(&___nl__8,___get_global_const(417));
#line 389
c_rt_lib0move(&___nl__7, c_rt_lib0concat_add(___nl__7, ___nl__8));
#line 389
c_rt_lib0clear(&___nl__8);
#line 389
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(198)));
#line 389
c_rt_lib0move(&___nl__8, generator_js_priv0print_register(___nl__9));
#line 389
c_rt_lib0clear(&___nl__9);
#line 389
c_rt_lib0move(&___nl__7, c_rt_lib0concat_add(___nl__7, ___nl__8));
#line 389
c_rt_lib0clear(&___nl__8);
#line 389
c_rt_lib0move(&___nl__8,___get_global_const(256));
#line 389
c_rt_lib0move(&___nl__7, c_rt_lib0concat_add(___nl__7, ___nl__8));
#line 389
c_rt_lib0clear(&___nl__8);
#line 389
c_rt_lib0move(&___nl__1, c_rt_lib0concat_add(___nl__1, ___nl__7));
#line 389
c_rt_lib0clear(&___nl__7);
#line 389
c_rt_lib0move(&___nl__3, c_rt_lib0add_mod(___nl__3, ___nl__4));
#line 389
goto label_9;
#line 389
label_31:
#line 389
c_rt_lib0clear(&___nl__2);
#line 389
c_rt_lib0clear(&___nl__3);
#line 389
c_rt_lib0clear(&___nl__4);
#line 389
c_rt_lib0clear(&___nl__5);
#line 389
c_rt_lib0clear(&___nl__6);
#line 390
c_rt_lib0move(&___nl__2,___get_global_const(616));
#line 390
c_rt_lib0move(&___nl__2, c_rt_lib0concat_new(___nl__1, ___nl__2));
#line 390
c_rt_lib0clear(&___nl__0);
#line 390
c_rt_lib0clear(&___nl__1);
#line 390
return ___nl__2;
#line 390
c_rt_lib0clear(&___nl__2);
#line 390
c_rt_lib0clear(&___nl__1);
#line 390
c_rt_lib0clear(&___nl__0);
#line 390
return NULL;
}

ImmT generator_js_priv0print_ov_mk(ImmT ___nl__0,ImmT * ___ref___1,ImmT * ___ref___2) {
c_rt_lib0arg_val(___nl__0);
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
#line 394
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(197)));
#line 394
c_rt_lib0move(&___nl__3, generator_js_priv0print_register_to_assign(___nl__4));
#line 394
c_rt_lib0clear(&___nl__4);
#line 395
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(43)));
#line 395
c_rt_lib0move(&___nl__5, c_rt_lib0priv_is(___nl__4, ___get_global_const(233)));
#line 395
if(c_rt_lib0check_true_native(___nl__5)){ goto label_11;}
#line 398
c_rt_lib0move(&___nl__5, c_rt_lib0priv_is(___nl__4, ___get_global_const(288)));
#line 398
if(c_rt_lib0check_true_native(___nl__5)){ goto label_40;}
#line 398
c_rt_lib0move(&___nl__5,___get_global_const(91));
#line 398
c_rt_lib0move(&___nl__5, c_rt_lib0array_mk(2, ___nl__5, ___nl__4));
#line 398
nl_die_arg(___nl__5);
#line 395
label_11:
#line 395
c_rt_lib0move(&___nl__6, c_rt_lib0priv_as(___nl__4, ___get_global_const(233)));
#line 396
c_rt_lib0move(&___nl__8,___get_global_const(225));
#line 396
c_rt_lib0move(&___nl__9,___get_global_const(454));
#line 397
c_rt_lib0move(&___nl__12, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(93)));
#line 397
c_rt_lib0move(&___nl__11, generator_js_priv0print_const_value_aggr(___nl__12, ___ref___1));
#line 397
c_rt_lib0clear(&___nl__12);
#line 397
c_rt_lib0move(&___nl__11, c_rt_lib0ov_mk_arg(___get_global_const(239), ___nl__11));
#line 397
c_rt_lib0move(&___nl__12, c_rt_lib0ov_mk_arg(___get_global_const(283), ___nl__6));
#line 397
c_rt_lib0move(&___nl__10, c_rt_lib0array_mk(2, ___nl__11, ___nl__12));
#line 397
c_rt_lib0clear(&___nl__11);
#line 397
c_rt_lib0clear(&___nl__12);
#line 397
c_rt_lib0move(&___nl__7, generator_js_priv0print_internal_call(___nl__8, ___nl__9, ___nl__10, ___ref___2));
#line 397
c_rt_lib0clear(&___nl__10);
#line 397
c_rt_lib0clear(&___nl__9);
#line 397
c_rt_lib0clear(&___nl__8);
#line 397
c_rt_lib0move(&___nl__7, c_rt_lib0concat_new(___nl__3, ___nl__7));
#line 397
c_rt_lib0move(&___nl__8,___get_global_const(360));
#line 397
c_rt_lib0move(&___nl__7, c_rt_lib0concat_add(___nl__7, ___nl__8));
#line 397
c_rt_lib0clear(&___nl__8);
#line 397
c_rt_lib0clear(&___nl__0);
#line 397
c_rt_lib0clear(&___nl__3);
#line 397
c_rt_lib0clear(&___nl__4);
#line 397
c_rt_lib0clear(&___nl__5);
#line 397
c_rt_lib0clear(&___nl__6);
#line 397
return ___nl__7;
#line 397
c_rt_lib0clear(&___nl__7);
#line 397
c_rt_lib0clear(&___nl__6);
#line 398
goto label_54;
#line 398
label_40:
#line 399
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(93)));
#line 399
c_rt_lib0move(&___nl__7, ov0mk(___nl__8));
#line 399
c_rt_lib0clear(&___nl__8);
#line 399
c_rt_lib0move(&___nl__6, generator_js_priv0print_const_value_aggr(___nl__7, ___ref___1));
#line 399
c_rt_lib0clear(&___nl__7);
#line 399
c_rt_lib0move(&___nl__6, c_rt_lib0concat_new(___nl__3, ___nl__6));
#line 399
c_rt_lib0clear(&___nl__0);
#line 399
c_rt_lib0clear(&___nl__3);
#line 399
c_rt_lib0clear(&___nl__4);
#line 399
c_rt_lib0clear(&___nl__5);
#line 399
return ___nl__6;
#line 399
c_rt_lib0clear(&___nl__6);
#line 400
goto label_54;
#line 400
label_54:
#line 400
c_rt_lib0clear(&___nl__4);
#line 400
c_rt_lib0clear(&___nl__5);
#line 400
c_rt_lib0clear(&___nl__3);
#line 400
c_rt_lib0clear(&___nl__0);
#line 400
return NULL;
}

ImmT generator_js_priv0print_register(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
ImmT ___nl__1 = NULL;
#line 404
c_rt_lib0move(&___nl__1,___get_global_const(347));
#line 404
c_rt_lib0move(&___nl__1, c_rt_lib0concat_add(___nl__1, ___nl__0));
#line 404
c_rt_lib0clear(&___nl__0);
#line 404
return ___nl__1;
#line 404
c_rt_lib0clear(&___nl__1);
#line 404
c_rt_lib0clear(&___nl__0);
#line 404
return NULL;
}

ImmT generator_js_priv0print_register_to_assign(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
#line 408
c_rt_lib0move(&___nl__1,___get_global_const(2));
#line 408
c_rt_lib0move(&___nl__1, c_rt_lib0eq(___nl__0, ___nl__1));
#line 408
c_rt_lib0move(&___nl__1, c_rt_lib0not(___nl__1));
#line 408
if(c_rt_lib0check_true_native(___nl__1)){ goto label_10;}
#line 408
c_rt_lib0move(&___nl__2,___get_global_const(2));
#line 408
c_rt_lib0clear(&___nl__0);
#line 408
c_rt_lib0clear(&___nl__1);
#line 408
return ___nl__2;
#line 408
c_rt_lib0clear(&___nl__2);
#line 408
goto label_10;
#line 408
label_10:
#line 408
c_rt_lib0clear(&___nl__1);
#line 409
c_rt_lib0move(&___nl__1, generator_js_priv0print_register(___nl__0));
#line 409
c_rt_lib0move(&___nl__2,___get_global_const(491));
#line 409
c_rt_lib0move(&___nl__1, c_rt_lib0concat_add(___nl__1, ___nl__2));
#line 409
c_rt_lib0clear(&___nl__2);
#line 409
c_rt_lib0clear(&___nl__0);
#line 409
return ___nl__1;
#line 409
c_rt_lib0clear(&___nl__1);
#line 409
c_rt_lib0clear(&___nl__0);
#line 409
return NULL;
}

ImmT generator_js_priv0print_return(ImmT ___nl__0,ImmT ___nl__1) {
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
#line 413
c_rt_lib0move(&___nl__2,___get_global_const(2));
#line 414
c_rt_lib0move(&___nl__3,___get_global_const(0));
#line 415
c_rt_lib0move(&___nl__5,___get_global_const(0));
#line 415
c_rt_lib0move(&___nl__6,___get_global_const(1));
#line 415
c_rt_lib0move(&___nl__7, c_rt_lib0array_len(___nl__1));
#line 415
label_5:
#line 415
c_rt_lib0move(&___nl__8, c_rt_lib0ge(___nl__5, ___nl__7));
#line 415
if(c_rt_lib0check_true_native(___nl__8)){ goto label_41;}
#line 415
c_rt_lib0move(&___nl__4, c_rt_lib0array_get(___nl__1, ___nl__5));
#line 416
c_rt_lib0move(&___nl__9, c_rt_lib0priv_is(___nl__4, ___get_global_const(5)));
#line 416
if(c_rt_lib0check_true_native(___nl__9)){ goto label_16;}
#line 418
c_rt_lib0move(&___nl__9, c_rt_lib0priv_is(___nl__4, ___get_global_const(198)));
#line 418
if(c_rt_lib0check_true_native(___nl__9)){ goto label_32;}
#line 418
c_rt_lib0move(&___nl__9,___get_global_const(91));
#line 418
c_rt_lib0move(&___nl__9, c_rt_lib0array_mk(2, ___nl__9, ___nl__4));
#line 418
nl_die_arg(___nl__9);
#line 416
label_16:
#line 417
c_rt_lib0move(&___nl__10,___get_global_const(593));
#line 417
c_rt_lib0move(&___nl__10, c_rt_lib0concat_add(___nl__10, ___nl__3));
#line 417
c_rt_lib0move(&___nl__11,___get_global_const(622));
#line 417
c_rt_lib0move(&___nl__10, c_rt_lib0concat_add(___nl__10, ___nl__11));
#line 417
c_rt_lib0clear(&___nl__11);
#line 417
c_rt_lib0move(&___nl__11,___get_global_const(347));
#line 417
c_rt_lib0move(&___nl__10, c_rt_lib0concat_add(___nl__10, ___nl__11));
#line 417
c_rt_lib0clear(&___nl__11);
#line 417
c_rt_lib0move(&___nl__10, c_rt_lib0concat_add(___nl__10, ___nl__3));
#line 417
c_rt_lib0move(&___nl__11,___get_global_const(360));
#line 417
c_rt_lib0move(&___nl__10, c_rt_lib0concat_add(___nl__10, ___nl__11));
#line 417
c_rt_lib0clear(&___nl__11);
#line 417
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__10));
#line 417
c_rt_lib0clear(&___nl__10);
#line 418
goto label_34;
#line 418
label_32:
#line 419
goto label_34;
#line 419
label_34:
#line 419
c_rt_lib0clear(&___nl__9);
#line 420
c_rt_lib0move(&___nl__9,___get_global_const(1));
#line 420
c_rt_lib0move(&___nl__3, c_rt_lib0add_mod(___nl__3, ___nl__9));
#line 420
c_rt_lib0clear(&___nl__9);
#line 421
c_rt_lib0move(&___nl__5, c_rt_lib0add_mod(___nl__5, ___nl__6));
#line 421
goto label_5;
#line 421
label_41:
#line 421
c_rt_lib0clear(&___nl__4);
#line 421
c_rt_lib0clear(&___nl__5);
#line 421
c_rt_lib0clear(&___nl__6);
#line 421
c_rt_lib0clear(&___nl__7);
#line 421
c_rt_lib0clear(&___nl__8);
#line 422
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__0, ___get_global_const(198)));
#line 422
if(c_rt_lib0check_true_native(___nl__4)){ goto label_54;}
#line 424
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__0, ___get_global_const(288)));
#line 424
if(c_rt_lib0check_true_native(___nl__4)){ goto label_77;}
#line 424
c_rt_lib0move(&___nl__4,___get_global_const(91));
#line 424
c_rt_lib0move(&___nl__4, c_rt_lib0array_mk(2, ___nl__4, ___nl__0));
#line 424
nl_die_arg(___nl__4);
#line 422
label_54:
#line 422
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__0, ___get_global_const(198)));
#line 423
c_rt_lib0move(&___nl__6, string0lf());
#line 423
c_rt_lib0move(&___nl__6, c_rt_lib0concat_new(___nl__2, ___nl__6));
#line 423
c_rt_lib0move(&___nl__7,___get_global_const(394));
#line 423
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__7));
#line 423
c_rt_lib0clear(&___nl__7);
#line 423
c_rt_lib0move(&___nl__7, generator_js_priv0print_register(___nl__5));
#line 423
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__7));
#line 423
c_rt_lib0clear(&___nl__7);
#line 423
c_rt_lib0move(&___nl__7,___get_global_const(360));
#line 423
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__7));
#line 423
c_rt_lib0clear(&___nl__7);
#line 423
c_rt_lib0clear(&___nl__0);
#line 423
c_rt_lib0clear(&___nl__1);
#line 423
c_rt_lib0clear(&___nl__2);
#line 423
c_rt_lib0clear(&___nl__3);
#line 423
c_rt_lib0clear(&___nl__4);
#line 423
c_rt_lib0clear(&___nl__5);
#line 423
return ___nl__6;
#line 423
c_rt_lib0clear(&___nl__6);
#line 423
c_rt_lib0clear(&___nl__5);
#line 424
goto label_91;
#line 424
label_77:
#line 425
c_rt_lib0move(&___nl__5, string0lf());
#line 425
c_rt_lib0move(&___nl__5, c_rt_lib0concat_new(___nl__2, ___nl__5));
#line 425
c_rt_lib0move(&___nl__6,___get_global_const(560));
#line 425
c_rt_lib0move(&___nl__5, c_rt_lib0concat_add(___nl__5, ___nl__6));
#line 425
c_rt_lib0clear(&___nl__6);
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
return ___nl__5;
#line 425
c_rt_lib0clear(&___nl__5);
#line 426
goto label_91;
#line 426
label_91:
#line 426
c_rt_lib0clear(&___nl__4);
#line 426
c_rt_lib0clear(&___nl__2);
#line 426
c_rt_lib0clear(&___nl__3);
#line 426
c_rt_lib0clear(&___nl__0);
#line 426
c_rt_lib0clear(&___nl__1);
#line 426
return NULL;
}

ImmT generator_js_priv0print_una_op(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
#line 430
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(197)));
#line 430
c_rt_lib0move(&___nl__1, generator_js_priv0print_register_to_assign(___nl__2));
#line 430
c_rt_lib0clear(&___nl__2);
#line 431
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(443)));
#line 431
c_rt_lib0move(&___nl__3,___get_global_const(294));
#line 431
c_rt_lib0move(&___nl__2, c_rt_lib0eq(___nl__2, ___nl__3));
#line 431
c_rt_lib0clear(&___nl__3);
#line 431
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 431
if(c_rt_lib0check_true_native(___nl__2)){ goto label_25;}
#line 432
c_rt_lib0move(&___nl__4,___get_global_const(225));
#line 432
c_rt_lib0move(&___nl__5,___get_global_const(623));
#line 432
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(43)));
#line 432
c_rt_lib0move(&___nl__6, c_rt_lib0array_mk(1, ___nl__7));
#line 432
c_rt_lib0clear(&___nl__7);
#line 432
c_rt_lib0move(&___nl__3, generator_js_priv0print_int_call_sim(___nl__4, ___nl__5, ___nl__6));
#line 432
c_rt_lib0clear(&___nl__6);
#line 432
c_rt_lib0clear(&___nl__5);
#line 432
c_rt_lib0clear(&___nl__4);
#line 432
c_rt_lib0move(&___nl__3, c_rt_lib0concat_new(___nl__1, ___nl__3));
#line 432
c_rt_lib0clear(&___nl__0);
#line 432
c_rt_lib0clear(&___nl__1);
#line 432
c_rt_lib0clear(&___nl__2);
#line 432
return ___nl__3;
#line 432
c_rt_lib0clear(&___nl__3);
#line 433
goto label_56;
#line 433
label_25:
#line 434
c_rt_lib0move(&___nl__4,___get_global_const(612));
#line 434
c_rt_lib0move(&___nl__3, generator_js_priv0imm_call(___nl__4));
#line 434
c_rt_lib0clear(&___nl__4);
#line 434
c_rt_lib0move(&___nl__3, c_rt_lib0concat_new(___nl__1, ___nl__3));
#line 434
c_rt_lib0move(&___nl__4,___get_global_const(373));
#line 434
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 434
c_rt_lib0clear(&___nl__4);
#line 434
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(443)));
#line 434
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 434
c_rt_lib0clear(&___nl__4);
#line 435
c_rt_lib0move(&___nl__5,___get_global_const(225));
#line 435
c_rt_lib0move(&___nl__6,___get_global_const(609));
#line 435
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(43)));
#line 435
c_rt_lib0move(&___nl__7, c_rt_lib0array_mk(1, ___nl__8));
#line 435
c_rt_lib0clear(&___nl__8);
#line 435
c_rt_lib0move(&___nl__4, generator_js_priv0print_int_call_sim(___nl__5, ___nl__6, ___nl__7));
#line 435
c_rt_lib0clear(&___nl__7);
#line 435
c_rt_lib0clear(&___nl__6);
#line 435
c_rt_lib0clear(&___nl__5);
#line 435
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 435
c_rt_lib0clear(&___nl__4);
#line 435
c_rt_lib0move(&___nl__4,___get_global_const(498));
#line 435
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 435
c_rt_lib0clear(&___nl__4);
#line 435
c_rt_lib0clear(&___nl__0);
#line 435
c_rt_lib0clear(&___nl__1);
#line 435
c_rt_lib0clear(&___nl__2);
#line 435
return ___nl__3;
#line 435
c_rt_lib0clear(&___nl__3);
#line 436
goto label_56;
#line 436
label_56:
#line 436
c_rt_lib0clear(&___nl__2);
#line 436
c_rt_lib0clear(&___nl__1);
#line 436
c_rt_lib0clear(&___nl__0);
#line 436
return NULL;
}


static ImmT ___const__[2];
static int ___const_init__ = 1;
void generator_js0__const__init(){
if(!___const_init__) nl_die();
___const_init__ = 0;
__const__f = &___const__[1];


for(int i=0;i<1;++i) ___const__[i] = NULL;
c_rt_lib0register_const(___const__, 1);
}
ImmT generator_js_priv0__const__sim(int __nr) {
ImmT ret = NULL;
c_rt_lib0copy(&ret, ___const__[__nr]);
return ret;
}
ImmT generator_js_priv0__const__sing(int __nr) {
if(___const__[__nr+0]==NULL) {
switch(__nr){
case 0:
	___const__[0] = generator_js_priv0get_namespace_name0cal();
	break;
default:
	nl_die();
}}
ImmT ret = NULL;
c_rt_lib0copy(&ret, ___const__[__nr+0]);
return ret;
}
