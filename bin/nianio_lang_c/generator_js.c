
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
void generator_js_priv0__const__init();
ImmT generator_js_priv0__const__sim(int __nr);
ImmT generator_js_priv0__const__sing(int __nr);

ImmT generator_js_priv0get_function_name(ImmT ___nl__0,ImmT ___nl__1);
ImmT generator_js_priv0escape_mod_fun_name(ImmT ___nl__0);
ImmT generator_js_priv0escape_string(ImmT ___nl__0);
ImmT generator_js_priv0is_singleton_use_function(ImmT ___nl__0);
ImmT generator_js_priv0print_function_or_singleton(ImmT ___nl__0,ImmT ___nl__1);
ImmT generator_js_priv0print_function(ImmT ___nl__0,ImmT ___nl__1);
ImmT generator_js_priv0print_command(ImmT ___nl__0,ImmT ___nl__1);
ImmT generator_js_priv0print_arr(ImmT ___nl__0);
ImmT generator_js_priv0print_bin_op(ImmT ___nl__0);
ImmT generator_js_priv0print_call(ImmT ___nl__0,ImmT ___nl__1,ImmT ___nl__2,ImmT ___nl__3);
ImmT generator_js_priv0print_const_arr(ImmT ___nl__0);
ImmT generator_js_priv0print_const_hash(ImmT ___nl__0);
ImmT generator_js_priv0print_const_ov(ImmT ___nl__0);
ImmT generator_js_priv0print_const_value(ImmT ___nl__0);
ImmT generator_js_priv0print_goto(ImmT ___nl__0);
ImmT generator_js_priv0print_hash(ImmT ___nl__0);
ImmT generator_js_priv0print_ov_mk(ImmT ___nl__0);
ImmT generator_js_priv0print_register(ImmT ___nl__0);
ImmT generator_js_priv0print_register_value(ImmT ___nl__0);
ImmT generator_js_priv0print_register_to_assign(ImmT ___nl__0);
ImmT generator_js_priv0print_return(ImmT ___nl__0);
ImmT generator_js_priv0print_una_op(ImmT ___nl__0);


ImmT generator_js0generate0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "generator_js0generate");
return generator_js0generate(_tab[0]);}
ImmT generator_js0generate(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
generator_js_priv0__const__init();
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
ImmT ___nl__9 = NULL;
#line 15
c_rt_lib0move(&___nl__1,___get_global_const(0));
#line 16
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(75)));
#line 16
c_rt_lib0move(&___nl__4,___get_global_const(1));
#line 16
c_rt_lib0move(&___nl__5,___get_global_const(2));
#line 16
c_rt_lib0move(&___nl__6, c_rt_lib0array_len(___nl__2));
#line 16
label_3:
#line 16
c_rt_lib0move(&___nl__7, c_rt_lib0ge(___nl__4, ___nl__6));
#line 16
if(c_rt_lib0check_true_native(___nl__7)){ goto label_1;}
#line 16
c_rt_lib0move(&___nl__3, c_rt_lib0array_get(___nl__2, ___nl__4));
#line 16
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(430)));
#line 16
c_rt_lib0move(&___nl__8, generator_js_priv0print_function_or_singleton(___nl__3, ___nl__9));
#line 16
c_rt_lib0clear(&___nl__9);
#line 16
c_rt_lib0move(&___nl__1, c_rt_lib0concat_add(___nl__1, ___nl__8));
#line 16
c_rt_lib0clear(&___nl__8);
#line 16
c_rt_lib0move(&___nl__4, c_rt_lib0add_mod(___nl__4, ___nl__5));
#line 16
goto label_3;
#line 16
label_1:
#line 16
c_rt_lib0clear(&___nl__2);
#line 16
c_rt_lib0clear(&___nl__3);
#line 16
c_rt_lib0clear(&___nl__4);
#line 16
c_rt_lib0clear(&___nl__5);
#line 16
c_rt_lib0clear(&___nl__6);
#line 16
c_rt_lib0clear(&___nl__7);
#line 17
c_rt_lib0clear(&___nl__0);
#line 17
return ___nl__1;
#line 17
c_rt_lib0clear(&___nl__1);
#line 17
c_rt_lib0clear(&___nl__0);
#line 17
return NULL;
}

ImmT generator_js_priv0get_function_name(ImmT ___nl__0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
generator_js_priv0__const__init();
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
#line 21
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(328)));
#line 21
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(329)));
#line 21
if(c_rt_lib0check_true_native(___nl__3)){ goto label_2;}
#line 23
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(330)));
#line 23
if(c_rt_lib0check_true_native(___nl__3)){ goto label_3;}
#line 23
c_rt_lib0move(&___nl__3,___get_global_const(74));
#line 23
c_rt_lib0move(&___nl__3, c_rt_lib0array_mk(2, ___nl__3, ___nl__2));
#line 23
nl_die_arg(___nl__3);
#line 21
label_2:
#line 22
c_rt_lib0move(&___nl__4, generator_js_priv0escape_mod_fun_name(___nl__1));
#line 22
c_rt_lib0move(&___nl__5,___get_global_const(1));
#line 22
c_rt_lib0move(&___nl__4, c_rt_lib0concat_add(___nl__4, ___nl__5));
#line 22
c_rt_lib0clear(&___nl__5);
#line 22
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(76)));
#line 22
c_rt_lib0move(&___nl__5, generator_js_priv0escape_mod_fun_name(___nl__6));
#line 22
c_rt_lib0clear(&___nl__6);
#line 22
c_rt_lib0move(&___nl__4, c_rt_lib0concat_add(___nl__4, ___nl__5));
#line 22
c_rt_lib0clear(&___nl__5);
#line 22
c_rt_lib0clear(&___nl__0);
#line 22
c_rt_lib0clear(&___nl__1);
#line 22
c_rt_lib0clear(&___nl__2);
#line 22
c_rt_lib0clear(&___nl__3);
#line 22
return ___nl__4;
#line 22
c_rt_lib0clear(&___nl__4);
#line 23
goto label_1;
#line 23
label_3:
#line 24
c_rt_lib0move(&___nl__4, generator_js_priv0escape_mod_fun_name(___nl__1));
#line 24
c_rt_lib0move(&___nl__5,___get_global_const(520));
#line 24
c_rt_lib0move(&___nl__4, c_rt_lib0concat_add(___nl__4, ___nl__5));
#line 24
c_rt_lib0clear(&___nl__5);
#line 24
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(76)));
#line 24
c_rt_lib0move(&___nl__5, generator_js_priv0escape_mod_fun_name(___nl__6));
#line 24
c_rt_lib0clear(&___nl__6);
#line 24
c_rt_lib0move(&___nl__4, c_rt_lib0concat_add(___nl__4, ___nl__5));
#line 24
c_rt_lib0clear(&___nl__5);
#line 24
c_rt_lib0clear(&___nl__0);
#line 24
c_rt_lib0clear(&___nl__1);
#line 24
c_rt_lib0clear(&___nl__2);
#line 24
c_rt_lib0clear(&___nl__3);
#line 24
return ___nl__4;
#line 24
c_rt_lib0clear(&___nl__4);
#line 25
goto label_1;
#line 25
label_1:
#line 25
c_rt_lib0clear(&___nl__2);
#line 25
c_rt_lib0clear(&___nl__3);
#line 25
c_rt_lib0clear(&___nl__0);
#line 25
c_rt_lib0clear(&___nl__1);
#line 25
return NULL;
}

ImmT generator_js_priv0escape_mod_fun_name(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
generator_js_priv0__const__init();
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
#line 29
c_rt_lib0move(&___nl__2,___get_global_const(1));
#line 29
c_rt_lib0move(&___nl__3,___get_global_const(388));
#line 29
c_rt_lib0move(&___nl__1, string0replace(___nl__0, ___nl__2, ___nl__3));
#line 29
c_rt_lib0clear(&___nl__3);
#line 29
c_rt_lib0clear(&___nl__2);
#line 29
c_rt_lib0clear(&___nl__0);
#line 29
return ___nl__1;
#line 29
c_rt_lib0clear(&___nl__1);
#line 29
c_rt_lib0clear(&___nl__0);
#line 29
return NULL;
}

ImmT generator_js_priv0escape_string(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
generator_js_priv0__const__init();
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
#line 33
c_rt_lib0move(&___nl__2,___get_global_const(80));
#line 33
c_rt_lib0move(&___nl__3,___get_global_const(181));
#line 33
c_rt_lib0move(&___nl__1, string0replace(___nl__0, ___nl__2, ___nl__3));
#line 33
c_rt_lib0clear(&___nl__3);
#line 33
c_rt_lib0clear(&___nl__2);
#line 33
c_rt_lib0copy(&___nl__0, ___nl__1);
#line 33
c_rt_lib0clear(&___nl__1);
#line 34
c_rt_lib0move(&___nl__2,___get_global_const(150));
#line 34
c_rt_lib0move(&___nl__3,___get_global_const(186));
#line 34
c_rt_lib0move(&___nl__1, string0replace(___nl__0, ___nl__2, ___nl__3));
#line 34
c_rt_lib0clear(&___nl__3);
#line 34
c_rt_lib0clear(&___nl__2);
#line 34
c_rt_lib0copy(&___nl__0, ___nl__1);
#line 34
c_rt_lib0clear(&___nl__1);
#line 35
c_rt_lib0move(&___nl__3,___get_global_const(153));
#line 35
c_rt_lib0move(&___nl__2, string0chr(___nl__3));
#line 35
c_rt_lib0clear(&___nl__3);
#line 35
c_rt_lib0move(&___nl__3, string0lf());
#line 35
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__3));
#line 35
c_rt_lib0clear(&___nl__3);
#line 35
c_rt_lib0move(&___nl__3,___get_global_const(441));
#line 35
c_rt_lib0move(&___nl__1, string0replace(___nl__0, ___nl__2, ___nl__3));
#line 35
c_rt_lib0clear(&___nl__3);
#line 35
c_rt_lib0clear(&___nl__2);
#line 35
c_rt_lib0copy(&___nl__0, ___nl__1);
#line 35
c_rt_lib0clear(&___nl__1);
#line 36
c_rt_lib0move(&___nl__2, string0lf());
#line 36
c_rt_lib0move(&___nl__3,___get_global_const(189));
#line 36
c_rt_lib0move(&___nl__1, string0replace(___nl__0, ___nl__2, ___nl__3));
#line 36
c_rt_lib0clear(&___nl__3);
#line 36
c_rt_lib0clear(&___nl__2);
#line 36
c_rt_lib0clear(&___nl__0);
#line 36
return ___nl__1;
#line 36
c_rt_lib0clear(&___nl__1);
#line 36
c_rt_lib0clear(&___nl__0);
#line 36
return NULL;
}

ImmT generator_js_priv0is_singleton_use_function(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
generator_js_priv0__const__init();
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
#line 39
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(331)));
#line 39
c_rt_lib0move(&___nl__1, array0len(___nl__2));
#line 39
c_rt_lib0clear(&___nl__2);
#line 39
c_rt_lib0move(&___nl__2,___get_global_const(1));
#line 39
c_rt_lib0move(&___nl__1, c_rt_lib0gt(___nl__1, ___nl__2));
#line 39
c_rt_lib0clear(&___nl__2);
#line 39
c_rt_lib0move(&___nl__1, c_rt_lib0not(___nl__1));
#line 39
if(c_rt_lib0check_true_native(___nl__1)){ goto label_2;}
#line 39
c_rt_lib0move(&___nl__2, c_rt_lib0get_false());
#line 39
c_rt_lib0clear(&___nl__0);
#line 39
c_rt_lib0clear(&___nl__1);
#line 39
return ___nl__2;
#line 39
c_rt_lib0clear(&___nl__2);
#line 39
goto label_2;
#line 39
label_2:
#line 39
c_rt_lib0clear(&___nl__1);
#line 40
c_rt_lib0move(&___nl__1, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(212)));
#line 40
c_rt_lib0move(&___nl__1, c_rt_lib0priv_is(___nl__1, ___get_global_const(141)));
#line 40
c_rt_lib0move(&___nl__1, c_rt_lib0not(___nl__1));
#line 40
if(c_rt_lib0check_true_native(___nl__1)){ goto label_4;}
#line 40
c_rt_lib0move(&___nl__2, c_rt_lib0get_true());
#line 40
c_rt_lib0clear(&___nl__0);
#line 40
c_rt_lib0clear(&___nl__1);
#line 40
return ___nl__2;
#line 40
c_rt_lib0clear(&___nl__2);
#line 40
goto label_4;
#line 40
label_4:
#line 40
c_rt_lib0clear(&___nl__1);
#line 41
c_rt_lib0move(&___nl__1, c_rt_lib0get_false());
#line 43
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(380)));
#line 43
c_rt_lib0move(&___nl__5,___get_global_const(1));
#line 43
c_rt_lib0move(&___nl__6,___get_global_const(2));
#line 43
c_rt_lib0move(&___nl__7, c_rt_lib0array_len(___nl__3));
#line 43
label_7:
#line 43
c_rt_lib0move(&___nl__8, c_rt_lib0ge(___nl__5, ___nl__7));
#line 43
if(c_rt_lib0check_true_native(___nl__8)){ goto label_5;}
#line 43
c_rt_lib0move(&___nl__4, c_rt_lib0array_get(___nl__3, ___nl__5));
#line 44
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(209)));
#line 45
c_rt_lib0copy(&___nl__10, ___nl__9);
#line 45
c_rt_lib0move(&___nl__10, c_rt_lib0priv_is(___nl__10, ___get_global_const(217)));
#line 45
c_rt_lib0move(&___nl__10, c_rt_lib0not(___nl__10));
#line 45
if(c_rt_lib0check_true_native(___nl__10)){ goto label_9;}
#line 46
c_rt_lib0copy(&___nl__11, ___nl__9);
#line 46
c_rt_lib0move(&___nl__11, c_rt_lib0priv_as(___nl__11, ___get_global_const(217)));
#line 47
c_rt_lib0move(&___nl__12, c_rt_lib0hash_get_value_dec(___nl__11, ___get_global_const(385)));
#line 47
c_rt_lib0move(&___nl__13,___get_global_const(386));
#line 47
c_rt_lib0move(&___nl__12, c_rt_lib0eq(___nl__12, ___nl__13));
#line 47
c_rt_lib0clear(&___nl__13);
#line 47
c_rt_lib0move(&___nl__12, c_rt_lib0not(___nl__12));
#line 47
c_rt_lib0move(&___nl__12, c_rt_lib0not(___nl__12));
#line 47
if(c_rt_lib0check_true_native(___nl__12)){ goto label_11;}
#line 47
c_rt_lib0clear(&___nl__9);
#line 47
c_rt_lib0clear(&___nl__10);
#line 47
c_rt_lib0clear(&___nl__11);
#line 47
c_rt_lib0clear(&___nl__12);
#line 47
goto label_6;
#line 47
goto label_11;
#line 47
label_11:
#line 47
c_rt_lib0clear(&___nl__12);
#line 48
c_rt_lib0move(&___nl__12, c_rt_lib0hash_get_value_dec(___nl__11, ___get_global_const(257)));
#line 48
c_rt_lib0move(&___nl__13,___get_global_const(288));
#line 48
c_rt_lib0move(&___nl__12, c_rt_lib0eq(___nl__12, ___nl__13));
#line 48
c_rt_lib0clear(&___nl__13);
#line 48
c_rt_lib0move(&___nl__12, c_rt_lib0not(___nl__12));
#line 48
c_rt_lib0move(&___nl__12, c_rt_lib0not(___nl__12));
#line 48
if(c_rt_lib0check_true_native(___nl__12)){ goto label_13;}
#line 48
c_rt_lib0clear(&___nl__9);
#line 48
c_rt_lib0clear(&___nl__10);
#line 48
c_rt_lib0clear(&___nl__11);
#line 48
c_rt_lib0clear(&___nl__12);
#line 48
goto label_6;
#line 48
goto label_13;
#line 48
label_13:
#line 48
c_rt_lib0clear(&___nl__12);
#line 49
c_rt_lib0move(&___nl__12, c_rt_lib0get_true());
#line 49
c_rt_lib0copy(&___nl__1, ___nl__12);
#line 49
c_rt_lib0clear(&___nl__12);
#line 50
c_rt_lib0move(&___nl__12, c_rt_lib0hash_get_value_dec(___nl__11, ___get_global_const(233)));
#line 50
c_rt_lib0copy(&___nl__2, ___nl__12);
#line 50
c_rt_lib0clear(&___nl__12);
#line 50
c_rt_lib0clear(&___nl__11);
#line 51
goto label_8;
#line 51
label_9:
#line 51
c_rt_lib0copy(&___nl__10, ___nl__9);
#line 51
c_rt_lib0move(&___nl__10, c_rt_lib0priv_is(___nl__10, ___get_global_const(210)));
#line 51
c_rt_lib0move(&___nl__10, c_rt_lib0not(___nl__10));
#line 51
if(c_rt_lib0check_true_native(___nl__10)){ goto label_14;}
#line 52
c_rt_lib0copy(&___nl__11, ___nl__1);
#line 52
c_rt_lib0move(&___nl__11, c_rt_lib0not(___nl__11));
#line 52
c_rt_lib0move(&___nl__11, c_rt_lib0not(___nl__11));
#line 52
if(c_rt_lib0check_true_native(___nl__11)){ goto label_16;}
#line 52
c_rt_lib0move(&___nl__12, c_rt_lib0get_false());
#line 52
c_rt_lib0clear(&___nl__0);
#line 52
c_rt_lib0clear(&___nl__1);
#line 52
c_rt_lib0clear(&___nl__2);
#line 52
c_rt_lib0clear(&___nl__3);
#line 52
c_rt_lib0clear(&___nl__4);
#line 52
c_rt_lib0clear(&___nl__5);
#line 52
c_rt_lib0clear(&___nl__6);
#line 52
c_rt_lib0clear(&___nl__7);
#line 52
c_rt_lib0clear(&___nl__8);
#line 52
c_rt_lib0clear(&___nl__9);
#line 52
c_rt_lib0clear(&___nl__10);
#line 52
c_rt_lib0clear(&___nl__11);
#line 52
return ___nl__12;
#line 52
c_rt_lib0clear(&___nl__12);
#line 52
goto label_16;
#line 52
label_16:
#line 52
c_rt_lib0clear(&___nl__11);
#line 53
c_rt_lib0copy(&___nl__11, ___nl__9);
#line 53
c_rt_lib0move(&___nl__11, c_rt_lib0priv_as(___nl__11, ___get_global_const(210)));
#line 54
c_rt_lib0copy(&___nl__12, ___nl__11);
#line 54
c_rt_lib0move(&___nl__12, c_rt_lib0priv_is(___nl__12, ___get_global_const(234)));
#line 54
c_rt_lib0move(&___nl__12, c_rt_lib0not(___nl__12));
#line 54
c_rt_lib0move(&___nl__12, c_rt_lib0not(___nl__12));
#line 54
if(c_rt_lib0check_true_native(___nl__12)){ goto label_18;}
#line 54
c_rt_lib0move(&___nl__13, c_rt_lib0get_false());
#line 54
c_rt_lib0clear(&___nl__0);
#line 54
c_rt_lib0clear(&___nl__1);
#line 54
c_rt_lib0clear(&___nl__2);
#line 54
c_rt_lib0clear(&___nl__3);
#line 54
c_rt_lib0clear(&___nl__4);
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
c_rt_lib0clear(&___nl__12);
#line 54
return ___nl__13;
#line 54
c_rt_lib0clear(&___nl__13);
#line 54
goto label_18;
#line 54
label_18:
#line 54
c_rt_lib0clear(&___nl__12);
#line 55
c_rt_lib0copy(&___nl__12, ___nl__11);
#line 55
c_rt_lib0move(&___nl__12, c_rt_lib0priv_as(___nl__12, ___get_global_const(234)));
#line 55
c_rt_lib0move(&___nl__12, c_rt_lib0eq(___nl__12, ___nl__2));
#line 55
c_rt_lib0clear(&___nl__0);
#line 55
c_rt_lib0clear(&___nl__1);
#line 55
c_rt_lib0clear(&___nl__2);
#line 55
c_rt_lib0clear(&___nl__3);
#line 55
c_rt_lib0clear(&___nl__4);
#line 55
c_rt_lib0clear(&___nl__5);
#line 55
c_rt_lib0clear(&___nl__6);
#line 55
c_rt_lib0clear(&___nl__7);
#line 55
c_rt_lib0clear(&___nl__8);
#line 55
c_rt_lib0clear(&___nl__9);
#line 55
c_rt_lib0clear(&___nl__10);
#line 55
c_rt_lib0clear(&___nl__11);
#line 55
return ___nl__12;
#line 55
c_rt_lib0clear(&___nl__12);
#line 55
c_rt_lib0clear(&___nl__11);
#line 56
goto label_8;
#line 56
label_14:
#line 56
c_rt_lib0copy(&___nl__10, ___nl__9);
#line 56
c_rt_lib0move(&___nl__10, c_rt_lib0priv_is(___nl__10, ___get_global_const(230)));
#line 56
c_rt_lib0move(&___nl__10, c_rt_lib0not(___nl__10));
#line 56
if(c_rt_lib0check_true_native(___nl__10)){ goto label_19;}
#line 57
goto label_8;
#line 57
label_19:
#line 57
c_rt_lib0copy(&___nl__10, ___nl__9);
#line 57
c_rt_lib0move(&___nl__10, c_rt_lib0priv_is(___nl__10, ___get_global_const(195)));
#line 57
c_rt_lib0move(&___nl__10, c_rt_lib0not(___nl__10));
#line 57
if(c_rt_lib0check_true_native(___nl__10)){ goto label_20;}
#line 58
goto label_8;
#line 58
label_20:
#line 59
c_rt_lib0copy(&___nl__11, ___nl__1);
#line 59
c_rt_lib0move(&___nl__11, c_rt_lib0not(___nl__11));
#line 59
if(c_rt_lib0check_true_native(___nl__11)){ goto label_22;}
#line 59
c_rt_lib0move(&___nl__12, c_rt_lib0get_false());
#line 59
c_rt_lib0clear(&___nl__0);
#line 59
c_rt_lib0clear(&___nl__1);
#line 59
c_rt_lib0clear(&___nl__2);
#line 59
c_rt_lib0clear(&___nl__3);
#line 59
c_rt_lib0clear(&___nl__4);
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
return ___nl__12;
#line 59
c_rt_lib0clear(&___nl__12);
#line 59
goto label_22;
#line 59
label_22:
#line 59
c_rt_lib0clear(&___nl__11);
#line 60
goto label_8;
#line 60
label_8:
#line 60
c_rt_lib0clear(&___nl__10);
#line 60
c_rt_lib0clear(&___nl__9);
#line 60
label_6:
#line 61
c_rt_lib0move(&___nl__5, c_rt_lib0add_mod(___nl__5, ___nl__6));
#line 61
goto label_7;
#line 61
label_5:
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
#line 62
c_rt_lib0move(&___nl__3, c_rt_lib0get_false());
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
#line 62
c_rt_lib0clear(&___nl__1);
#line 62
c_rt_lib0clear(&___nl__2);
#line 62
c_rt_lib0clear(&___nl__0);
#line 62
return NULL;
}

ImmT generator_js_priv0print_function_or_singleton(ImmT ___nl__0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
generator_js_priv0__const__init();
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
ImmT ___nl__9 = NULL;
#line 67
c_rt_lib0move(&___nl__2, generator_js_priv0is_singleton_use_function(___nl__0));
#line 67
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 67
if(c_rt_lib0check_true_native(___nl__2)){ goto label_2;}
#line 68
c_rt_lib0move(&___nl__3, generator_js_priv0get_function_name(___nl__0, ___nl__1));
#line 69
c_rt_lib0copy(&___nl__4, ___nl__0);
#line 70
c_rt_lib0move(&___nl__5,___get_global_const(521));
#line 70
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(76)));
#line 70
c_rt_lib0move(&___nl__5, c_rt_lib0concat_add(___nl__5, ___nl__6));
#line 70
c_rt_lib0clear(&___nl__6);
#line 70
c_rt_lib0copy(&___nl__6, ___nl__5);
#line 70
c_rt_lib0hash_set_value_dec(&___nl__4, ___get_global_const(76), ___nl__6);
#line 70
c_rt_lib0clear(&___nl__5);
#line 70
c_rt_lib0clear(&___nl__6);
#line 71
c_rt_lib0move(&___nl__5, generator_js_priv0get_function_name(___nl__4, ___nl__1));
#line 72
c_rt_lib0move(&___nl__6,___get_global_const(443));
#line 72
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__5));
#line 74
c_rt_lib0move(&___nl__7, generator_js_priv0print_function(___nl__4, ___nl__1));
#line 76
c_rt_lib0move(&___nl__8,___get_global_const(522));
#line 76
c_rt_lib0move(&___nl__8, c_rt_lib0concat_add(___nl__8, ___nl__6));
#line 76
c_rt_lib0move(&___nl__9,___get_global_const(523));
#line 76
c_rt_lib0move(&___nl__8, c_rt_lib0concat_add(___nl__8, ___nl__9));
#line 76
c_rt_lib0clear(&___nl__9);
#line 76
c_rt_lib0move(&___nl__8, c_rt_lib0concat_add(___nl__8, ___nl__3));
#line 76
c_rt_lib0move(&___nl__9,___get_global_const(524));
#line 76
c_rt_lib0move(&___nl__8, c_rt_lib0concat_add(___nl__8, ___nl__9));
#line 76
c_rt_lib0clear(&___nl__9);
#line 76
c_rt_lib0move(&___nl__8, c_rt_lib0concat_add(___nl__8, ___nl__6));
#line 76
c_rt_lib0move(&___nl__9,___get_global_const(525));
#line 76
c_rt_lib0move(&___nl__8, c_rt_lib0concat_add(___nl__8, ___nl__9));
#line 76
c_rt_lib0clear(&___nl__9);
#line 76
c_rt_lib0move(&___nl__8, c_rt_lib0concat_add(___nl__8, ___nl__6));
#line 76
c_rt_lib0move(&___nl__9,___get_global_const(448));
#line 76
c_rt_lib0move(&___nl__8, c_rt_lib0concat_add(___nl__8, ___nl__9));
#line 76
c_rt_lib0clear(&___nl__9);
#line 76
c_rt_lib0move(&___nl__8, c_rt_lib0concat_add(___nl__8, ___nl__5));
#line 76
c_rt_lib0move(&___nl__9,___get_global_const(449));
#line 76
c_rt_lib0move(&___nl__8, c_rt_lib0concat_add(___nl__8, ___nl__9));
#line 76
c_rt_lib0clear(&___nl__9);
#line 76
c_rt_lib0move(&___nl__8, c_rt_lib0concat_add(___nl__8, ___nl__6));
#line 76
c_rt_lib0move(&___nl__9,___get_global_const(450));
#line 76
c_rt_lib0move(&___nl__8, c_rt_lib0concat_add(___nl__8, ___nl__9));
#line 76
c_rt_lib0clear(&___nl__9);
#line 76
c_rt_lib0move(&___nl__7, c_rt_lib0concat_add(___nl__7, ___nl__8));
#line 76
c_rt_lib0clear(&___nl__8);
#line 83
c_rt_lib0clear(&___nl__0);
#line 83
c_rt_lib0clear(&___nl__1);
#line 83
c_rt_lib0clear(&___nl__2);
#line 83
c_rt_lib0clear(&___nl__3);
#line 83
c_rt_lib0clear(&___nl__4);
#line 83
c_rt_lib0clear(&___nl__5);
#line 83
c_rt_lib0clear(&___nl__6);
#line 83
return ___nl__7;
#line 83
c_rt_lib0clear(&___nl__3);
#line 83
c_rt_lib0clear(&___nl__4);
#line 83
c_rt_lib0clear(&___nl__5);
#line 83
c_rt_lib0clear(&___nl__6);
#line 83
c_rt_lib0clear(&___nl__7);
#line 84
goto label_1;
#line 84
label_2:
#line 85
c_rt_lib0move(&___nl__3, generator_js_priv0print_function(___nl__0, ___nl__1));
#line 85
c_rt_lib0clear(&___nl__0);
#line 85
c_rt_lib0clear(&___nl__1);
#line 85
c_rt_lib0clear(&___nl__2);
#line 85
return ___nl__3;
#line 85
c_rt_lib0clear(&___nl__3);
#line 86
goto label_1;
#line 86
label_1:
#line 86
c_rt_lib0clear(&___nl__2);
#line 86
c_rt_lib0clear(&___nl__0);
#line 86
c_rt_lib0clear(&___nl__1);
#line 86
return NULL;
}

ImmT generator_js_priv0print_function(ImmT ___nl__0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
generator_js_priv0__const__init();
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
ImmT ___nl__9 = NULL;
ImmT ___nl__10 = NULL;
#line 90
c_rt_lib0move(&___nl__2, string0lf());
#line 90
c_rt_lib0move(&___nl__3,___get_global_const(526));
#line 90
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__3));
#line 90
c_rt_lib0clear(&___nl__3);
#line 91
c_rt_lib0move(&___nl__3, generator_js_priv0get_function_name(___nl__0, ___nl__1));
#line 91
c_rt_lib0move(&___nl__4,___get_global_const(322));
#line 91
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 91
c_rt_lib0clear(&___nl__4);
#line 91
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__3));
#line 91
c_rt_lib0clear(&___nl__3);
#line 92
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(331)));
#line 92
c_rt_lib0move(&___nl__3, array0len(___nl__4));
#line 92
c_rt_lib0clear(&___nl__4);
#line 92
c_rt_lib0move(&___nl__4,___get_global_const(1));
#line 92
c_rt_lib0move(&___nl__5,___get_global_const(2));
#line 92
label_3:
#line 92
c_rt_lib0move(&___nl__6, c_rt_lib0ge(___nl__4, ___nl__3));
#line 92
if(c_rt_lib0check_true_native(___nl__6)){ goto label_1;}
#line 93
c_rt_lib0move(&___nl__7,___get_global_const(1));
#line 93
c_rt_lib0move(&___nl__7, c_rt_lib0num_eq(___nl__4, ___nl__7));
#line 93
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 93
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 93
if(c_rt_lib0check_true_native(___nl__7)){ goto label_5;}
#line 93
c_rt_lib0move(&___nl__8,___get_global_const(188));
#line 93
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__8));
#line 93
c_rt_lib0clear(&___nl__8);
#line 93
goto label_5;
#line 93
label_5:
#line 93
c_rt_lib0clear(&___nl__7);
#line 94
c_rt_lib0move(&___nl__7,___get_global_const(527));
#line 94
c_rt_lib0move(&___nl__7, c_rt_lib0concat_add(___nl__7, ___nl__4));
#line 94
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__7));
#line 94
c_rt_lib0clear(&___nl__7);
#line 95
c_rt_lib0move(&___nl__4, c_rt_lib0add_mod(___nl__4, ___nl__5));
#line 95
goto label_3;
#line 95
label_1:
#line 95
c_rt_lib0clear(&___nl__3);
#line 95
c_rt_lib0clear(&___nl__4);
#line 95
c_rt_lib0clear(&___nl__5);
#line 95
c_rt_lib0clear(&___nl__6);
#line 96
c_rt_lib0move(&___nl__3,___get_global_const(528));
#line 96
c_rt_lib0move(&___nl__4, string0lf());
#line 96
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 96
c_rt_lib0clear(&___nl__4);
#line 96
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__3));
#line 96
c_rt_lib0clear(&___nl__3);
#line 97
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(331)));
#line 97
c_rt_lib0move(&___nl__3, array0len(___nl__4));
#line 97
c_rt_lib0clear(&___nl__4);
#line 97
c_rt_lib0move(&___nl__4,___get_global_const(1));
#line 97
c_rt_lib0move(&___nl__5,___get_global_const(2));
#line 97
label_8:
#line 97
c_rt_lib0move(&___nl__6, c_rt_lib0ge(___nl__4, ___nl__3));
#line 97
if(c_rt_lib0check_true_native(___nl__6)){ goto label_6;}
#line 98
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(331)));
#line 98
c_rt_lib0move(&___nl__7, c_rt_lib0array_get(___nl__7, ___nl__4));
#line 98
c_rt_lib0move(&___nl__8, c_rt_lib0priv_is(___nl__7, ___get_global_const(234)));
#line 98
if(c_rt_lib0check_true_native(___nl__8)){ goto label_10;}
#line 100
c_rt_lib0move(&___nl__8, c_rt_lib0priv_is(___nl__7, ___get_global_const(5)));
#line 100
if(c_rt_lib0check_true_native(___nl__8)){ goto label_11;}
#line 100
c_rt_lib0move(&___nl__8,___get_global_const(74));
#line 100
c_rt_lib0move(&___nl__8, c_rt_lib0array_mk(2, ___nl__8, ___nl__7));
#line 100
nl_die_arg(___nl__8);
#line 98
label_10:
#line 99
c_rt_lib0move(&___nl__9,___get_global_const(529));
#line 99
c_rt_lib0move(&___nl__9, c_rt_lib0concat_add(___nl__9, ___nl__4));
#line 99
c_rt_lib0move(&___nl__10,___get_global_const(530));
#line 99
c_rt_lib0move(&___nl__9, c_rt_lib0concat_add(___nl__9, ___nl__10));
#line 99
c_rt_lib0clear(&___nl__10);
#line 99
c_rt_lib0move(&___nl__9, c_rt_lib0concat_add(___nl__9, ___nl__4));
#line 99
c_rt_lib0move(&___nl__10,___get_global_const(531));
#line 99
c_rt_lib0move(&___nl__9, c_rt_lib0concat_add(___nl__9, ___nl__10));
#line 99
c_rt_lib0clear(&___nl__10);
#line 99
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__9));
#line 99
c_rt_lib0clear(&___nl__9);
#line 100
goto label_9;
#line 100
label_11:
#line 101
c_rt_lib0move(&___nl__9,___get_global_const(529));
#line 101
c_rt_lib0move(&___nl__9, c_rt_lib0concat_add(___nl__9, ___nl__4));
#line 101
c_rt_lib0move(&___nl__10,___get_global_const(456));
#line 101
c_rt_lib0move(&___nl__9, c_rt_lib0concat_add(___nl__9, ___nl__10));
#line 101
c_rt_lib0clear(&___nl__10);
#line 101
c_rt_lib0move(&___nl__9, c_rt_lib0concat_add(___nl__9, ___nl__4));
#line 101
c_rt_lib0move(&___nl__10,___get_global_const(311));
#line 101
c_rt_lib0move(&___nl__9, c_rt_lib0concat_add(___nl__9, ___nl__10));
#line 101
c_rt_lib0clear(&___nl__10);
#line 101
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__9));
#line 101
c_rt_lib0clear(&___nl__9);
#line 102
goto label_9;
#line 102
label_9:
#line 102
c_rt_lib0clear(&___nl__7);
#line 102
c_rt_lib0clear(&___nl__8);
#line 103
c_rt_lib0move(&___nl__4, c_rt_lib0add_mod(___nl__4, ___nl__5));
#line 103
goto label_8;
#line 103
label_6:
#line 103
c_rt_lib0clear(&___nl__3);
#line 103
c_rt_lib0clear(&___nl__4);
#line 103
c_rt_lib0clear(&___nl__5);
#line 103
c_rt_lib0clear(&___nl__6);
#line 104
c_rt_lib0move(&___nl__3, string0lf());
#line 104
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__3));
#line 104
c_rt_lib0clear(&___nl__3);
#line 105
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(331)));
#line 105
c_rt_lib0move(&___nl__3, array0len(___nl__4));
#line 105
c_rt_lib0clear(&___nl__4);
#line 105
label_13:
#line 105
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(378)));
#line 105
c_rt_lib0move(&___nl__4, c_rt_lib0lt(___nl__3, ___nl__4));
#line 105
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 105
if(c_rt_lib0check_true_native(___nl__4)){ goto label_12;}
#line 106
c_rt_lib0move(&___nl__5,___get_global_const(529));
#line 106
c_rt_lib0move(&___nl__5, c_rt_lib0concat_add(___nl__5, ___nl__3));
#line 106
c_rt_lib0move(&___nl__6,___get_global_const(532));
#line 106
c_rt_lib0move(&___nl__5, c_rt_lib0concat_add(___nl__5, ___nl__6));
#line 106
c_rt_lib0clear(&___nl__6);
#line 106
c_rt_lib0move(&___nl__6, string0lf());
#line 106
c_rt_lib0move(&___nl__5, c_rt_lib0concat_add(___nl__5, ___nl__6));
#line 106
c_rt_lib0clear(&___nl__6);
#line 106
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__5));
#line 106
c_rt_lib0clear(&___nl__5);
#line 106
c_rt_lib0move(&___nl__5,___get_global_const(2));
#line 106
c_rt_lib0move(&___nl__3, c_rt_lib0add_mod(___nl__3, ___nl__5));
#line 106
c_rt_lib0clear(&___nl__5);
#line 107
goto label_13;
#line 107
label_12:
#line 107
c_rt_lib0clear(&___nl__3);
#line 107
c_rt_lib0clear(&___nl__4);
#line 108
c_rt_lib0move(&___nl__3,___get_global_const(533));
#line 108
c_rt_lib0move(&___nl__4, string0lf());
#line 108
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 108
c_rt_lib0clear(&___nl__4);
#line 108
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__3));
#line 108
c_rt_lib0clear(&___nl__3);
#line 109
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(380)));
#line 109
c_rt_lib0move(&___nl__5,___get_global_const(1));
#line 109
c_rt_lib0move(&___nl__6,___get_global_const(2));
#line 109
c_rt_lib0move(&___nl__7, c_rt_lib0array_len(___nl__3));
#line 109
label_17:
#line 109
c_rt_lib0move(&___nl__8, c_rt_lib0ge(___nl__5, ___nl__7));
#line 109
if(c_rt_lib0check_true_native(___nl__8)){ goto label_15;}
#line 109
c_rt_lib0move(&___nl__4, c_rt_lib0array_get(___nl__3, ___nl__5));
#line 109
c_rt_lib0move(&___nl__9, generator_js_priv0print_command(___nl__1, ___nl__4));
#line 109
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__9));
#line 109
c_rt_lib0clear(&___nl__9);
#line 109
c_rt_lib0move(&___nl__5, c_rt_lib0add_mod(___nl__5, ___nl__6));
#line 109
goto label_17;
#line 109
label_15:
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
c_rt_lib0move(&___nl__3,___get_global_const(460));
#line 110
c_rt_lib0move(&___nl__3, c_rt_lib0concat_new(___nl__2, ___nl__3));
#line 110
c_rt_lib0move(&___nl__4, string0lf());
#line 110
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 110
c_rt_lib0clear(&___nl__4);
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
c_rt_lib0clear(&___nl__2);
#line 110
c_rt_lib0clear(&___nl__0);
#line 110
c_rt_lib0clear(&___nl__1);
#line 110
return NULL;
}

ImmT generator_js_priv0print_command(ImmT ___nl__0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
generator_js_priv0__const__init();
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
ImmT ___nl__9 = NULL;
ImmT ___nl__10 = NULL;
#line 115
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(209)));
#line 115
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__3, ___get_global_const(215)));
#line 115
if(c_rt_lib0check_true_native(___nl__4)){ goto label_2;}
#line 117
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__3, ___get_global_const(216)));
#line 117
if(c_rt_lib0check_true_native(___nl__4)){ goto label_3;}
#line 119
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__3, ___get_global_const(217)));
#line 119
if(c_rt_lib0check_true_native(___nl__4)){ goto label_4;}
#line 121
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__3, ___get_global_const(71)));
#line 121
if(c_rt_lib0check_true_native(___nl__4)){ goto label_5;}
#line 123
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__3, ___get_global_const(218)));
#line 123
if(c_rt_lib0check_true_native(___nl__4)){ goto label_6;}
#line 125
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__3, ___get_global_const(219)));
#line 125
if(c_rt_lib0check_true_native(___nl__4)){ goto label_7;}
#line 127
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__3, ___get_global_const(220)));
#line 127
if(c_rt_lib0check_true_native(___nl__4)){ goto label_8;}
#line 129
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__3, ___get_global_const(221)));
#line 129
if(c_rt_lib0check_true_native(___nl__4)){ goto label_9;}
#line 131
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__3, ___get_global_const(210)));
#line 131
if(c_rt_lib0check_true_native(___nl__4)){ goto label_10;}
#line 133
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__3, ___get_global_const(229)));
#line 133
if(c_rt_lib0check_true_native(___nl__4)){ goto label_11;}
#line 135
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__3, ___get_global_const(222)));
#line 135
if(c_rt_lib0check_true_native(___nl__4)){ goto label_12;}
#line 137
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__3, ___get_global_const(223)));
#line 137
if(c_rt_lib0check_true_native(___nl__4)){ goto label_13;}
#line 139
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__3, ___get_global_const(224)));
#line 139
if(c_rt_lib0check_true_native(___nl__4)){ goto label_14;}
#line 141
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__3, ___get_global_const(225)));
#line 141
if(c_rt_lib0check_true_native(___nl__4)){ goto label_15;}
#line 144
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__3, ___get_global_const(226)));
#line 144
if(c_rt_lib0check_true_native(___nl__4)){ goto label_16;}
#line 146
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__3, ___get_global_const(227)));
#line 146
if(c_rt_lib0check_true_native(___nl__4)){ goto label_17;}
#line 149
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__3, ___get_global_const(228)));
#line 149
if(c_rt_lib0check_true_native(___nl__4)){ goto label_18;}
#line 151
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__3, ___get_global_const(230)));
#line 151
if(c_rt_lib0check_true_native(___nl__4)){ goto label_19;}
#line 153
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__3, ___get_global_const(231)));
#line 153
if(c_rt_lib0check_true_native(___nl__4)){ goto label_20;}
#line 155
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__3, ___get_global_const(232)));
#line 155
if(c_rt_lib0check_true_native(___nl__4)){ goto label_21;}
#line 157
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__3, ___get_global_const(195)));
#line 157
if(c_rt_lib0check_true_native(___nl__4)){ goto label_22;}
#line 157
c_rt_lib0move(&___nl__4,___get_global_const(74));
#line 157
c_rt_lib0move(&___nl__4, c_rt_lib0array_mk(2, ___nl__4, ___nl__3));
#line 157
nl_die_arg(___nl__4);
#line 115
label_2:
#line 115
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__3, ___get_global_const(215)));
#line 116
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(233)));
#line 116
c_rt_lib0move(&___nl__6, generator_js_priv0print_register_to_assign(___nl__7));
#line 116
c_rt_lib0clear(&___nl__7);
#line 116
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(39)));
#line 116
c_rt_lib0move(&___nl__7, generator_js_priv0print_arr(___nl__8));
#line 116
c_rt_lib0clear(&___nl__8);
#line 116
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__7));
#line 116
c_rt_lib0clear(&___nl__7);
#line 116
c_rt_lib0move(&___nl__7,___get_global_const(311));
#line 116
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__7));
#line 116
c_rt_lib0clear(&___nl__7);
#line 116
c_rt_lib0copy(&___nl__2, ___nl__6);
#line 116
c_rt_lib0clear(&___nl__6);
#line 116
c_rt_lib0clear(&___nl__5);
#line 117
goto label_1;
#line 117
label_3:
#line 117
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__3, ___get_global_const(216)));
#line 118
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(233)));
#line 118
c_rt_lib0move(&___nl__6, generator_js_priv0print_register_to_assign(___nl__7));
#line 118
c_rt_lib0clear(&___nl__7);
#line 118
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(39)));
#line 118
c_rt_lib0move(&___nl__7, generator_js_priv0print_hash(___nl__8));
#line 118
c_rt_lib0clear(&___nl__8);
#line 118
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__7));
#line 118
c_rt_lib0clear(&___nl__7);
#line 118
c_rt_lib0move(&___nl__7,___get_global_const(311));
#line 118
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__7));
#line 118
c_rt_lib0clear(&___nl__7);
#line 118
c_rt_lib0copy(&___nl__2, ___nl__6);
#line 118
c_rt_lib0clear(&___nl__6);
#line 118
c_rt_lib0clear(&___nl__5);
#line 119
goto label_1;
#line 119
label_4:
#line 119
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__3, ___get_global_const(217)));
#line 120
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(233)));
#line 120
c_rt_lib0move(&___nl__6, generator_js_priv0print_register_to_assign(___nl__7));
#line 120
c_rt_lib0clear(&___nl__7);
#line 120
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(257)));
#line 120
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(385)));
#line 120
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(73)));
#line 120
c_rt_lib0move(&___nl__7, generator_js_priv0print_call(___nl__0, ___nl__8, ___nl__9, ___nl__10));
#line 120
c_rt_lib0clear(&___nl__10);
#line 120
c_rt_lib0clear(&___nl__9);
#line 120
c_rt_lib0clear(&___nl__8);
#line 120
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__7));
#line 120
c_rt_lib0clear(&___nl__7);
#line 120
c_rt_lib0copy(&___nl__2, ___nl__6);
#line 120
c_rt_lib0clear(&___nl__6);
#line 120
c_rt_lib0clear(&___nl__5);
#line 121
goto label_1;
#line 121
label_5:
#line 121
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__3, ___get_global_const(71)));
#line 122
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(233)));
#line 122
c_rt_lib0move(&___nl__6, generator_js_priv0print_register_to_assign(___nl__7));
#line 122
c_rt_lib0clear(&___nl__7);
#line 122
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(99)));
#line 122
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(76)));
#line 122
c_rt_lib0move(&___nl__8, c_rt_lib0hash_mk(2, ___get_global_const(99), ___nl__9, ___get_global_const(76), ___nl__10));
#line 122
c_rt_lib0clear(&___nl__9);
#line 122
c_rt_lib0clear(&___nl__10);
#line 122
c_rt_lib0move(&___nl__7, generator_js_priv0print_const_hash(___nl__8));
#line 122
c_rt_lib0clear(&___nl__8);
#line 122
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__7));
#line 122
c_rt_lib0clear(&___nl__7);
#line 122
c_rt_lib0move(&___nl__7,___get_global_const(311));
#line 122
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__7));
#line 122
c_rt_lib0clear(&___nl__7);
#line 122
c_rt_lib0copy(&___nl__2, ___nl__6);
#line 122
c_rt_lib0clear(&___nl__6);
#line 122
c_rt_lib0clear(&___nl__5);
#line 123
goto label_1;
#line 123
label_6:
#line 123
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__3, ___get_global_const(218)));
#line 124
c_rt_lib0move(&___nl__6, generator_js_priv0print_una_op(___nl__5));
#line 124
c_rt_lib0copy(&___nl__2, ___nl__6);
#line 124
c_rt_lib0clear(&___nl__6);
#line 124
c_rt_lib0clear(&___nl__5);
#line 125
goto label_1;
#line 125
label_7:
#line 125
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__3, ___get_global_const(219)));
#line 126
c_rt_lib0move(&___nl__6, generator_js_priv0print_bin_op(___nl__5));
#line 126
c_rt_lib0copy(&___nl__2, ___nl__6);
#line 126
c_rt_lib0clear(&___nl__6);
#line 126
c_rt_lib0clear(&___nl__5);
#line 127
goto label_1;
#line 127
label_8:
#line 127
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__3, ___get_global_const(220)));
#line 128
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(233)));
#line 128
c_rt_lib0move(&___nl__6, generator_js_priv0print_register_to_assign(___nl__7));
#line 128
c_rt_lib0clear(&___nl__7);
#line 128
c_rt_lib0move(&___nl__7,___get_global_const(534));
#line 128
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__7));
#line 128
c_rt_lib0clear(&___nl__7);
#line 128
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(39)));
#line 128
c_rt_lib0move(&___nl__7, generator_js_priv0print_register(___nl__8));
#line 128
c_rt_lib0clear(&___nl__8);
#line 128
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__7));
#line 128
c_rt_lib0clear(&___nl__7);
#line 128
c_rt_lib0move(&___nl__7,___get_global_const(535));
#line 128
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__7));
#line 128
c_rt_lib0clear(&___nl__7);
#line 128
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(72)));
#line 128
c_rt_lib0move(&___nl__7, generator_js_priv0escape_string(___nl__8));
#line 128
c_rt_lib0clear(&___nl__8);
#line 128
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__7));
#line 128
c_rt_lib0clear(&___nl__7);
#line 128
c_rt_lib0move(&___nl__7,___get_global_const(536));
#line 128
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__7));
#line 128
c_rt_lib0clear(&___nl__7);
#line 128
c_rt_lib0copy(&___nl__2, ___nl__6);
#line 128
c_rt_lib0clear(&___nl__6);
#line 128
c_rt_lib0clear(&___nl__5);
#line 129
goto label_1;
#line 129
label_9:
#line 129
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__3, ___get_global_const(221)));
#line 130
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(233)));
#line 130
c_rt_lib0move(&___nl__6, generator_js_priv0print_register_to_assign(___nl__7));
#line 130
c_rt_lib0clear(&___nl__7);
#line 130
c_rt_lib0move(&___nl__7,___get_global_const(537));
#line 130
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__7));
#line 130
c_rt_lib0clear(&___nl__7);
#line 130
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(39)));
#line 130
c_rt_lib0move(&___nl__7, generator_js_priv0print_register(___nl__8));
#line 130
c_rt_lib0clear(&___nl__8);
#line 130
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__7));
#line 130
c_rt_lib0clear(&___nl__7);
#line 130
c_rt_lib0move(&___nl__7,___get_global_const(535));
#line 130
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__7));
#line 130
c_rt_lib0clear(&___nl__7);
#line 130
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(72)));
#line 130
c_rt_lib0move(&___nl__7, generator_js_priv0escape_string(___nl__8));
#line 130
c_rt_lib0clear(&___nl__8);
#line 130
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__7));
#line 130
c_rt_lib0clear(&___nl__7);
#line 130
c_rt_lib0move(&___nl__7,___get_global_const(536));
#line 130
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__7));
#line 130
c_rt_lib0clear(&___nl__7);
#line 130
c_rt_lib0copy(&___nl__2, ___nl__6);
#line 130
c_rt_lib0clear(&___nl__6);
#line 130
c_rt_lib0clear(&___nl__5);
#line 131
goto label_1;
#line 131
label_10:
#line 131
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__3, ___get_global_const(210)));
#line 132
c_rt_lib0move(&___nl__6, generator_js_priv0print_return(___nl__5));
#line 132
c_rt_lib0copy(&___nl__2, ___nl__6);
#line 132
c_rt_lib0clear(&___nl__6);
#line 132
c_rt_lib0clear(&___nl__5);
#line 133
goto label_1;
#line 133
label_11:
#line 133
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__3, ___get_global_const(229)));
#line 134
c_rt_lib0move(&___nl__6,___get_global_const(538));
#line 134
c_rt_lib0copy(&___nl__2, ___nl__6);
#line 134
c_rt_lib0clear(&___nl__6);
#line 134
c_rt_lib0clear(&___nl__5);
#line 135
goto label_1;
#line 135
label_12:
#line 135
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__3, ___get_global_const(222)));
#line 136
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(233)));
#line 136
c_rt_lib0move(&___nl__6, generator_js_priv0print_register_to_assign(___nl__7));
#line 136
c_rt_lib0clear(&___nl__7);
#line 136
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(39)));
#line 136
c_rt_lib0move(&___nl__7, generator_js_priv0print_register_value(___nl__8));
#line 136
c_rt_lib0clear(&___nl__8);
#line 136
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__7));
#line 136
c_rt_lib0clear(&___nl__7);
#line 136
c_rt_lib0move(&___nl__7,___get_global_const(311));
#line 136
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__7));
#line 136
c_rt_lib0clear(&___nl__7);
#line 136
c_rt_lib0copy(&___nl__2, ___nl__6);
#line 136
c_rt_lib0clear(&___nl__6);
#line 136
c_rt_lib0clear(&___nl__5);
#line 137
goto label_1;
#line 137
label_13:
#line 137
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__3, ___get_global_const(223)));
#line 138
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(233)));
#line 138
c_rt_lib0move(&___nl__6, generator_js_priv0print_register_to_assign(___nl__7));
#line 138
c_rt_lib0clear(&___nl__7);
#line 138
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(234)));
#line 138
c_rt_lib0move(&___nl__7, generator_js_priv0print_const_value(___nl__8));
#line 138
c_rt_lib0clear(&___nl__8);
#line 138
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__7));
#line 138
c_rt_lib0clear(&___nl__7);
#line 138
c_rt_lib0move(&___nl__7,___get_global_const(311));
#line 138
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__7));
#line 138
c_rt_lib0clear(&___nl__7);
#line 138
c_rt_lib0copy(&___nl__2, ___nl__6);
#line 138
c_rt_lib0clear(&___nl__6);
#line 138
c_rt_lib0clear(&___nl__5);
#line 139
goto label_1;
#line 139
label_14:
#line 139
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__3, ___get_global_const(224)));
#line 140
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(233)));
#line 140
c_rt_lib0move(&___nl__6, generator_js_priv0print_register_to_assign(___nl__7));
#line 140
c_rt_lib0clear(&___nl__7);
#line 140
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(39)));
#line 140
c_rt_lib0move(&___nl__7, generator_js_priv0print_register_value(___nl__8));
#line 140
c_rt_lib0clear(&___nl__8);
#line 140
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__7));
#line 140
c_rt_lib0clear(&___nl__7);
#line 140
c_rt_lib0move(&___nl__7,___get_global_const(539));
#line 140
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__7));
#line 140
c_rt_lib0clear(&___nl__7);
#line 140
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(237)));
#line 140
c_rt_lib0move(&___nl__7, generator_js_priv0print_register_value(___nl__8));
#line 140
c_rt_lib0clear(&___nl__8);
#line 140
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__7));
#line 140
c_rt_lib0clear(&___nl__7);
#line 140
c_rt_lib0move(&___nl__7,___get_global_const(540));
#line 140
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__7));
#line 140
c_rt_lib0clear(&___nl__7);
#line 140
c_rt_lib0copy(&___nl__2, ___nl__6);
#line 140
c_rt_lib0clear(&___nl__6);
#line 140
c_rt_lib0clear(&___nl__5);
#line 141
goto label_1;
#line 141
label_15:
#line 141
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__3, ___get_global_const(225)));
#line 142
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(39)));
#line 142
c_rt_lib0move(&___nl__6, generator_js_priv0print_register_to_assign(___nl__7));
#line 142
c_rt_lib0clear(&___nl__7);
#line 142
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(39)));
#line 142
c_rt_lib0move(&___nl__7, generator_js_priv0print_register_value(___nl__8));
#line 142
c_rt_lib0clear(&___nl__8);
#line 142
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__7));
#line 142
c_rt_lib0clear(&___nl__7);
#line 142
c_rt_lib0move(&___nl__7,___get_global_const(541));
#line 142
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__7));
#line 142
c_rt_lib0clear(&___nl__7);
#line 142
c_rt_lib0copy(&___nl__2, ___nl__6);
#line 142
c_rt_lib0clear(&___nl__6);
#line 143
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(39)));
#line 143
c_rt_lib0move(&___nl__6, generator_js_priv0print_register_value(___nl__7));
#line 143
c_rt_lib0clear(&___nl__7);
#line 143
c_rt_lib0move(&___nl__7,___get_global_const(539));
#line 143
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__7));
#line 143
c_rt_lib0clear(&___nl__7);
#line 143
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(237)));
#line 143
c_rt_lib0move(&___nl__7, generator_js_priv0print_register_value(___nl__8));
#line 143
c_rt_lib0clear(&___nl__8);
#line 143
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__7));
#line 143
c_rt_lib0clear(&___nl__7);
#line 143
c_rt_lib0move(&___nl__7,___get_global_const(542));
#line 143
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__7));
#line 143
c_rt_lib0clear(&___nl__7);
#line 143
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(234)));
#line 143
c_rt_lib0move(&___nl__7, generator_js_priv0print_register_value(___nl__8));
#line 143
c_rt_lib0clear(&___nl__8);
#line 143
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__7));
#line 143
c_rt_lib0clear(&___nl__7);
#line 143
c_rt_lib0move(&___nl__7,___get_global_const(311));
#line 143
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__7));
#line 143
c_rt_lib0clear(&___nl__7);
#line 143
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__6));
#line 143
c_rt_lib0clear(&___nl__6);
#line 143
c_rt_lib0clear(&___nl__5);
#line 144
goto label_1;
#line 144
label_16:
#line 144
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__3, ___get_global_const(226)));
#line 145
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(233)));
#line 145
c_rt_lib0move(&___nl__6, generator_js_priv0print_register_to_assign(___nl__7));
#line 145
c_rt_lib0clear(&___nl__7);
#line 145
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(39)));
#line 145
c_rt_lib0move(&___nl__7, generator_js_priv0print_register_value(___nl__8));
#line 145
c_rt_lib0clear(&___nl__8);
#line 145
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__7));
#line 145
c_rt_lib0clear(&___nl__7);
#line 145
c_rt_lib0move(&___nl__7,___get_global_const(543));
#line 145
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__7));
#line 145
c_rt_lib0clear(&___nl__7);
#line 145
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(279)));
#line 145
c_rt_lib0move(&___nl__7, generator_js_priv0escape_string(___nl__8));
#line 145
c_rt_lib0clear(&___nl__8);
#line 145
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__7));
#line 145
c_rt_lib0clear(&___nl__7);
#line 145
c_rt_lib0move(&___nl__7,___get_global_const(544));
#line 145
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__7));
#line 145
c_rt_lib0clear(&___nl__7);
#line 145
c_rt_lib0copy(&___nl__2, ___nl__6);
#line 145
c_rt_lib0clear(&___nl__6);
#line 145
c_rt_lib0clear(&___nl__5);
#line 146
goto label_1;
#line 146
label_17:
#line 146
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__3, ___get_global_const(227)));
#line 147
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(39)));
#line 147
c_rt_lib0move(&___nl__6, generator_js_priv0print_register_to_assign(___nl__7));
#line 147
c_rt_lib0clear(&___nl__7);
#line 147
c_rt_lib0move(&___nl__7,___get_global_const(545));
#line 147
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__7));
#line 147
c_rt_lib0clear(&___nl__7);
#line 147
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(39)));
#line 147
c_rt_lib0move(&___nl__7, generator_js_priv0print_register_value(___nl__8));
#line 147
c_rt_lib0clear(&___nl__8);
#line 147
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__7));
#line 147
c_rt_lib0clear(&___nl__7);
#line 147
c_rt_lib0move(&___nl__7,___get_global_const(455));
#line 147
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__7));
#line 147
c_rt_lib0clear(&___nl__7);
#line 147
c_rt_lib0copy(&___nl__2, ___nl__6);
#line 147
c_rt_lib0clear(&___nl__6);
#line 148
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(39)));
#line 148
c_rt_lib0move(&___nl__6, generator_js_priv0print_register_value(___nl__7));
#line 148
c_rt_lib0clear(&___nl__7);
#line 148
c_rt_lib0move(&___nl__7,___get_global_const(543));
#line 148
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__7));
#line 148
c_rt_lib0clear(&___nl__7);
#line 148
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(279)));
#line 148
c_rt_lib0move(&___nl__7, generator_js_priv0escape_string(___nl__8));
#line 148
c_rt_lib0clear(&___nl__8);
#line 148
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__7));
#line 148
c_rt_lib0clear(&___nl__7);
#line 148
c_rt_lib0move(&___nl__7,___get_global_const(546));
#line 148
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__7));
#line 148
c_rt_lib0clear(&___nl__7);
#line 148
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(234)));
#line 148
c_rt_lib0move(&___nl__7, generator_js_priv0print_register_value(___nl__8));
#line 148
c_rt_lib0clear(&___nl__8);
#line 148
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__7));
#line 148
c_rt_lib0clear(&___nl__7);
#line 148
c_rt_lib0move(&___nl__7,___get_global_const(311));
#line 148
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__7));
#line 148
c_rt_lib0clear(&___nl__7);
#line 148
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__6));
#line 148
c_rt_lib0clear(&___nl__6);
#line 148
c_rt_lib0clear(&___nl__5);
#line 149
goto label_1;
#line 149
label_18:
#line 149
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__3, ___get_global_const(228)));
#line 150
c_rt_lib0move(&___nl__6, generator_js_priv0print_ov_mk(___nl__5));
#line 150
c_rt_lib0copy(&___nl__2, ___nl__6);
#line 150
c_rt_lib0clear(&___nl__6);
#line 150
c_rt_lib0clear(&___nl__5);
#line 151
goto label_1;
#line 151
label_19:
#line 151
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__3, ___get_global_const(230)));
#line 152
c_rt_lib0move(&___nl__6,___get_global_const(472));
#line 152
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__5));
#line 152
c_rt_lib0move(&___nl__7,___get_global_const(473));
#line 152
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__7));
#line 152
c_rt_lib0clear(&___nl__7);
#line 152
c_rt_lib0copy(&___nl__2, ___nl__6);
#line 152
c_rt_lib0clear(&___nl__6);
#line 152
c_rt_lib0clear(&___nl__5);
#line 153
goto label_1;
#line 153
label_20:
#line 153
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__3, ___get_global_const(231)));
#line 154
c_rt_lib0move(&___nl__6,___get_global_const(547));
#line 154
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(39)));
#line 154
c_rt_lib0move(&___nl__7, generator_js_priv0print_register(___nl__8));
#line 154
c_rt_lib0clear(&___nl__8);
#line 154
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__7));
#line 154
c_rt_lib0clear(&___nl__7);
#line 154
c_rt_lib0move(&___nl__7,___get_global_const(475));
#line 154
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__7));
#line 154
c_rt_lib0clear(&___nl__7);
#line 154
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(233)));
#line 154
c_rt_lib0move(&___nl__7, generator_js_priv0print_goto(___nl__8));
#line 154
c_rt_lib0clear(&___nl__8);
#line 154
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__7));
#line 154
c_rt_lib0clear(&___nl__7);
#line 154
c_rt_lib0move(&___nl__7,___get_global_const(169));
#line 154
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__7));
#line 154
c_rt_lib0clear(&___nl__7);
#line 154
c_rt_lib0copy(&___nl__2, ___nl__6);
#line 154
c_rt_lib0clear(&___nl__6);
#line 154
c_rt_lib0clear(&___nl__5);
#line 155
goto label_1;
#line 155
label_21:
#line 155
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__3, ___get_global_const(232)));
#line 156
c_rt_lib0move(&___nl__6, generator_js_priv0print_goto(___nl__5));
#line 156
c_rt_lib0copy(&___nl__2, ___nl__6);
#line 156
c_rt_lib0clear(&___nl__6);
#line 156
c_rt_lib0clear(&___nl__5);
#line 157
goto label_1;
#line 157
label_22:
#line 157
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__3, ___get_global_const(195)));
#line 158
c_rt_lib0move(&___nl__6, generator_js_priv0print_register_to_assign(___nl__5));
#line 158
c_rt_lib0move(&___nl__7,___get_global_const(476));
#line 158
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__7));
#line 158
c_rt_lib0clear(&___nl__7);
#line 158
c_rt_lib0copy(&___nl__2, ___nl__6);
#line 158
c_rt_lib0clear(&___nl__6);
#line 158
c_rt_lib0clear(&___nl__5);
#line 159
goto label_1;
#line 159
label_1:
#line 159
c_rt_lib0clear(&___nl__3);
#line 159
c_rt_lib0clear(&___nl__4);
#line 160
c_rt_lib0move(&___nl__3,___get_global_const(477));
#line 160
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(213)));
#line 160
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(395)));
#line 160
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(396)));
#line 160
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(98)));
#line 160
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 160
c_rt_lib0clear(&___nl__4);
#line 160
c_rt_lib0move(&___nl__4, string0lf());
#line 160
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 160
c_rt_lib0clear(&___nl__4);
#line 160
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__2));
#line 160
c_rt_lib0move(&___nl__4, string0lf());
#line 160
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 160
c_rt_lib0clear(&___nl__4);
#line 160
c_rt_lib0clear(&___nl__0);
#line 160
c_rt_lib0clear(&___nl__1);
#line 160
c_rt_lib0clear(&___nl__2);
#line 160
return ___nl__3;
#line 160
c_rt_lib0clear(&___nl__3);
#line 160
c_rt_lib0clear(&___nl__2);
#line 160
c_rt_lib0clear(&___nl__0);
#line 160
c_rt_lib0clear(&___nl__1);
#line 160
return NULL;
}

ImmT generator_js_priv0print_arr(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
generator_js_priv0__const__init();
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
#line 164
c_rt_lib0move(&___nl__1,___get_global_const(174));
#line 165
c_rt_lib0move(&___nl__3,___get_global_const(1));
#line 165
c_rt_lib0move(&___nl__4,___get_global_const(2));
#line 165
c_rt_lib0move(&___nl__5, c_rt_lib0array_len(___nl__0));
#line 165
label_3:
#line 165
c_rt_lib0move(&___nl__6, c_rt_lib0ge(___nl__3, ___nl__5));
#line 165
if(c_rt_lib0check_true_native(___nl__6)){ goto label_1;}
#line 165
c_rt_lib0move(&___nl__2, c_rt_lib0array_get(___nl__0, ___nl__3));
#line 165
c_rt_lib0move(&___nl__7, generator_js_priv0print_register_value(___nl__2));
#line 165
c_rt_lib0move(&___nl__8,___get_global_const(172));
#line 165
c_rt_lib0move(&___nl__7, c_rt_lib0concat_add(___nl__7, ___nl__8));
#line 165
c_rt_lib0clear(&___nl__8);
#line 165
c_rt_lib0move(&___nl__1, c_rt_lib0concat_add(___nl__1, ___nl__7));
#line 165
c_rt_lib0clear(&___nl__7);
#line 165
c_rt_lib0move(&___nl__3, c_rt_lib0add_mod(___nl__3, ___nl__4));
#line 165
goto label_3;
#line 165
label_1:
#line 165
c_rt_lib0clear(&___nl__2);
#line 165
c_rt_lib0clear(&___nl__3);
#line 165
c_rt_lib0clear(&___nl__4);
#line 165
c_rt_lib0clear(&___nl__5);
#line 165
c_rt_lib0clear(&___nl__6);
#line 166
c_rt_lib0move(&___nl__2,___get_global_const(175));
#line 166
c_rt_lib0move(&___nl__2, c_rt_lib0concat_new(___nl__1, ___nl__2));
#line 166
c_rt_lib0clear(&___nl__0);
#line 166
c_rt_lib0clear(&___nl__1);
#line 166
return ___nl__2;
#line 166
c_rt_lib0clear(&___nl__2);
#line 166
c_rt_lib0clear(&___nl__1);
#line 166
c_rt_lib0clear(&___nl__0);
#line 166
return NULL;
}

ImmT generator_js_priv0print_bin_op(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
generator_js_priv0__const__init();
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
#line 170
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(233)));
#line 170
c_rt_lib0move(&___nl__1, generator_js_priv0print_register_to_assign(___nl__2));
#line 170
c_rt_lib0clear(&___nl__2);
#line 171
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(401)));
#line 171
c_rt_lib0move(&___nl__3,___get_global_const(268));
#line 171
c_rt_lib0move(&___nl__2, c_rt_lib0eq(___nl__2, ___nl__3));
#line 171
c_rt_lib0clear(&___nl__3);
#line 171
if(c_rt_lib0check_true_native(___nl__2)){ goto label_7;}
#line 171
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(401)));
#line 171
c_rt_lib0move(&___nl__3,___get_global_const(258));
#line 171
c_rt_lib0move(&___nl__2, c_rt_lib0eq(___nl__2, ___nl__3));
#line 171
c_rt_lib0clear(&___nl__3);
#line 171
label_7:
#line 171
if(c_rt_lib0check_true_native(___nl__2)){ goto label_6;}
#line 171
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(401)));
#line 171
c_rt_lib0move(&___nl__3,___get_global_const(260));
#line 171
c_rt_lib0move(&___nl__2, c_rt_lib0eq(___nl__2, ___nl__3));
#line 171
c_rt_lib0clear(&___nl__3);
#line 171
label_6:
#line 171
if(c_rt_lib0check_true_native(___nl__2)){ goto label_5;}
#line 171
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(401)));
#line 171
c_rt_lib0move(&___nl__3,___get_global_const(266));
#line 171
c_rt_lib0move(&___nl__2, c_rt_lib0eq(___nl__2, ___nl__3));
#line 171
c_rt_lib0clear(&___nl__3);
#line 171
label_5:
#line 171
if(c_rt_lib0check_true_native(___nl__2)){ goto label_4;}
#line 171
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(401)));
#line 171
c_rt_lib0move(&___nl__3,___get_global_const(262));
#line 171
c_rt_lib0move(&___nl__2, c_rt_lib0eq(___nl__2, ___nl__3));
#line 171
c_rt_lib0clear(&___nl__3);
#line 171
label_4:
#line 171
if(c_rt_lib0check_true_native(___nl__2)){ goto label_3;}
#line 171
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(401)));
#line 171
c_rt_lib0move(&___nl__3,___get_global_const(264));
#line 171
c_rt_lib0move(&___nl__2, c_rt_lib0eq(___nl__2, ___nl__3));
#line 171
c_rt_lib0clear(&___nl__3);
#line 171
label_3:
#line 171
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 171
if(c_rt_lib0check_true_native(___nl__2)){ goto label_2;}
#line 173
c_rt_lib0move(&___nl__3,___get_global_const(548));
#line 173
c_rt_lib0move(&___nl__3, c_rt_lib0concat_new(___nl__1, ___nl__3));
#line 173
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(235)));
#line 173
c_rt_lib0move(&___nl__4, generator_js_priv0print_register_value(___nl__5));
#line 173
c_rt_lib0clear(&___nl__5);
#line 173
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 173
c_rt_lib0clear(&___nl__4);
#line 173
c_rt_lib0move(&___nl__4,___get_global_const(490));
#line 173
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 173
c_rt_lib0clear(&___nl__4);
#line 173
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(401)));
#line 173
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 173
c_rt_lib0clear(&___nl__4);
#line 173
c_rt_lib0move(&___nl__4,___get_global_const(549));
#line 173
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 173
c_rt_lib0clear(&___nl__4);
#line 173
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(236)));
#line 173
c_rt_lib0move(&___nl__4, generator_js_priv0print_register_value(___nl__5));
#line 173
c_rt_lib0clear(&___nl__5);
#line 173
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 173
c_rt_lib0clear(&___nl__4);
#line 173
c_rt_lib0move(&___nl__4,___get_global_const(550));
#line 173
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 173
c_rt_lib0clear(&___nl__4);
#line 173
c_rt_lib0clear(&___nl__0);
#line 173
c_rt_lib0clear(&___nl__1);
#line 173
c_rt_lib0clear(&___nl__2);
#line 173
return ___nl__3;
#line 173
c_rt_lib0clear(&___nl__3);
#line 174
goto label_1;
#line 174
label_2:
#line 174
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(401)));
#line 174
c_rt_lib0move(&___nl__3,___get_global_const(249));
#line 174
c_rt_lib0move(&___nl__2, c_rt_lib0eq(___nl__2, ___nl__3));
#line 174
c_rt_lib0clear(&___nl__3);
#line 174
if(c_rt_lib0check_true_native(___nl__2)){ goto label_9;}
#line 174
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(401)));
#line 174
c_rt_lib0move(&___nl__3,___get_global_const(250));
#line 174
c_rt_lib0move(&___nl__2, c_rt_lib0eq(___nl__2, ___nl__3));
#line 174
c_rt_lib0clear(&___nl__3);
#line 174
label_9:
#line 174
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 174
if(c_rt_lib0check_true_native(___nl__2)){ goto label_8;}
#line 175
c_rt_lib0move(&___nl__3,___get_global_const(551));
#line 175
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(235)));
#line 175
c_rt_lib0move(&___nl__4, generator_js_priv0print_register_value(___nl__5));
#line 175
c_rt_lib0clear(&___nl__5);
#line 175
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 175
c_rt_lib0clear(&___nl__4);
#line 175
c_rt_lib0move(&___nl__4,___get_global_const(552));
#line 175
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 175
c_rt_lib0clear(&___nl__4);
#line 175
c_rt_lib0move(&___nl__1, c_rt_lib0concat_add(___nl__1, ___nl__3));
#line 175
c_rt_lib0clear(&___nl__3);
#line 176
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(401)));
#line 176
c_rt_lib0move(&___nl__4,___get_global_const(249));
#line 176
c_rt_lib0move(&___nl__3, c_rt_lib0eq(___nl__3, ___nl__4));
#line 176
c_rt_lib0clear(&___nl__4);
#line 176
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 176
if(c_rt_lib0check_true_native(___nl__3)){ goto label_11;}
#line 177
c_rt_lib0move(&___nl__4,___get_global_const(553));
#line 177
c_rt_lib0move(&___nl__1, c_rt_lib0concat_add(___nl__1, ___nl__4));
#line 177
c_rt_lib0clear(&___nl__4);
#line 178
goto label_10;
#line 178
label_11:
#line 179
c_rt_lib0move(&___nl__4,___get_global_const(554));
#line 179
c_rt_lib0move(&___nl__1, c_rt_lib0concat_add(___nl__1, ___nl__4));
#line 179
c_rt_lib0clear(&___nl__4);
#line 180
goto label_10;
#line 180
label_10:
#line 180
c_rt_lib0clear(&___nl__3);
#line 181
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(236)));
#line 181
c_rt_lib0move(&___nl__3, generator_js_priv0print_register_value(___nl__4));
#line 181
c_rt_lib0clear(&___nl__4);
#line 181
c_rt_lib0move(&___nl__3, c_rt_lib0concat_new(___nl__1, ___nl__3));
#line 181
c_rt_lib0move(&___nl__4,___get_global_const(555));
#line 181
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 181
c_rt_lib0clear(&___nl__4);
#line 181
c_rt_lib0clear(&___nl__0);
#line 181
c_rt_lib0clear(&___nl__1);
#line 181
c_rt_lib0clear(&___nl__2);
#line 181
return ___nl__3;
#line 181
c_rt_lib0clear(&___nl__3);
#line 182
goto label_1;
#line 182
label_8:
#line 182
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(401)));
#line 182
c_rt_lib0move(&___nl__3,___get_global_const(81));
#line 182
c_rt_lib0move(&___nl__2, c_rt_lib0eq(___nl__2, ___nl__3));
#line 182
c_rt_lib0clear(&___nl__3);
#line 182
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 182
if(c_rt_lib0check_true_native(___nl__2)){ goto label_12;}
#line 183
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(235)));
#line 183
c_rt_lib0move(&___nl__3, generator_js_priv0print_register_value(___nl__4));
#line 183
c_rt_lib0clear(&___nl__4);
#line 183
c_rt_lib0move(&___nl__3, c_rt_lib0concat_new(___nl__1, ___nl__3));
#line 183
c_rt_lib0move(&___nl__4,___get_global_const(486));
#line 183
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 183
c_rt_lib0clear(&___nl__4);
#line 183
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(236)));
#line 183
c_rt_lib0move(&___nl__4, generator_js_priv0print_register_value(___nl__5));
#line 183
c_rt_lib0clear(&___nl__5);
#line 183
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 183
c_rt_lib0clear(&___nl__4);
#line 183
c_rt_lib0move(&___nl__4,___get_global_const(556));
#line 183
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 183
c_rt_lib0clear(&___nl__4);
#line 183
c_rt_lib0clear(&___nl__0);
#line 183
c_rt_lib0clear(&___nl__1);
#line 183
c_rt_lib0clear(&___nl__2);
#line 183
return ___nl__3;
#line 183
c_rt_lib0clear(&___nl__3);
#line 184
goto label_1;
#line 184
label_12:
#line 185
c_rt_lib0move(&___nl__3,___get_global_const(557));
#line 185
c_rt_lib0move(&___nl__3, c_rt_lib0concat_new(___nl__1, ___nl__3));
#line 185
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(235)));
#line 185
c_rt_lib0move(&___nl__4, generator_js_priv0print_register_value(___nl__5));
#line 185
c_rt_lib0clear(&___nl__5);
#line 185
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 185
c_rt_lib0clear(&___nl__4);
#line 185
c_rt_lib0move(&___nl__4,___get_global_const(490));
#line 185
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 185
c_rt_lib0clear(&___nl__4);
#line 185
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(401)));
#line 185
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 185
c_rt_lib0clear(&___nl__4);
#line 185
c_rt_lib0move(&___nl__4,___get_global_const(549));
#line 185
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 185
c_rt_lib0clear(&___nl__4);
#line 185
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(236)));
#line 185
c_rt_lib0move(&___nl__4, generator_js_priv0print_register_value(___nl__5));
#line 185
c_rt_lib0clear(&___nl__5);
#line 185
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 185
c_rt_lib0clear(&___nl__4);
#line 185
c_rt_lib0move(&___nl__4,___get_global_const(455));
#line 185
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 185
c_rt_lib0clear(&___nl__4);
#line 185
c_rt_lib0clear(&___nl__0);
#line 185
c_rt_lib0clear(&___nl__1);
#line 185
c_rt_lib0clear(&___nl__2);
#line 185
return ___nl__3;
#line 185
c_rt_lib0clear(&___nl__3);
#line 186
goto label_1;
#line 186
label_1:
#line 186
c_rt_lib0clear(&___nl__2);
#line 186
c_rt_lib0clear(&___nl__1);
#line 186
c_rt_lib0clear(&___nl__0);
#line 186
return NULL;
}

ImmT generator_js_priv0print_call(ImmT ___nl__0,ImmT ___nl__1,ImmT ___nl__2,ImmT ___nl__3) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
c_rt_lib0arg_val(___nl__2);
c_rt_lib0arg_val(___nl__3);
generator_js_priv0__const__init();
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
#line 190
c_rt_lib0move(&___nl__4,___get_global_const(0));
#line 190
c_rt_lib0move(&___nl__4, c_rt_lib0eq(___nl__1, ___nl__4));
#line 190
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 190
if(c_rt_lib0check_true_native(___nl__4)){ goto label_2;}
#line 190
c_rt_lib0move(&___nl__5,___get_global_const(389));
#line 190
c_rt_lib0move(&___nl__5, c_rt_lib0concat_new(___nl__0, ___nl__5));
#line 190
c_rt_lib0copy(&___nl__1, ___nl__5);
#line 190
c_rt_lib0clear(&___nl__5);
#line 190
goto label_2;
#line 190
label_2:
#line 190
c_rt_lib0clear(&___nl__4);
#line 191
c_rt_lib0move(&___nl__4, generator_js_priv0escape_mod_fun_name(___nl__1));
#line 191
c_rt_lib0move(&___nl__5,___get_global_const(1));
#line 191
c_rt_lib0move(&___nl__4, c_rt_lib0concat_add(___nl__4, ___nl__5));
#line 191
c_rt_lib0clear(&___nl__5);
#line 191
c_rt_lib0move(&___nl__5, generator_js_priv0escape_mod_fun_name(___nl__2));
#line 191
c_rt_lib0move(&___nl__4, c_rt_lib0concat_add(___nl__4, ___nl__5));
#line 191
c_rt_lib0clear(&___nl__5);
#line 191
c_rt_lib0move(&___nl__5,___get_global_const(322));
#line 191
c_rt_lib0move(&___nl__4, c_rt_lib0concat_add(___nl__4, ___nl__5));
#line 191
c_rt_lib0clear(&___nl__5);
#line 192
c_rt_lib0move(&___nl__5,___get_global_const(1));
#line 193
c_rt_lib0move(&___nl__7,___get_global_const(1));
#line 193
c_rt_lib0move(&___nl__8,___get_global_const(2));
#line 193
c_rt_lib0move(&___nl__9, c_rt_lib0array_len(___nl__3));
#line 193
label_5:
#line 193
c_rt_lib0move(&___nl__10, c_rt_lib0ge(___nl__7, ___nl__9));
#line 193
if(c_rt_lib0check_true_native(___nl__10)){ goto label_3;}
#line 193
c_rt_lib0move(&___nl__6, c_rt_lib0array_get(___nl__3, ___nl__7));
#line 194
c_rt_lib0move(&___nl__11,___get_global_const(1));
#line 194
c_rt_lib0move(&___nl__11, c_rt_lib0num_eq(___nl__5, ___nl__11));
#line 194
c_rt_lib0move(&___nl__11, c_rt_lib0not(___nl__11));
#line 194
c_rt_lib0move(&___nl__11, c_rt_lib0not(___nl__11));
#line 194
if(c_rt_lib0check_true_native(___nl__11)){ goto label_7;}
#line 194
c_rt_lib0move(&___nl__12,___get_global_const(172));
#line 194
c_rt_lib0move(&___nl__4, c_rt_lib0concat_add(___nl__4, ___nl__12));
#line 194
c_rt_lib0clear(&___nl__12);
#line 194
goto label_7;
#line 194
label_7:
#line 194
c_rt_lib0clear(&___nl__11);
#line 195
c_rt_lib0move(&___nl__11,___get_global_const(2));
#line 195
c_rt_lib0move(&___nl__5, c_rt_lib0add_mod(___nl__5, ___nl__11));
#line 195
c_rt_lib0clear(&___nl__11);
#line 196
c_rt_lib0move(&___nl__11, c_rt_lib0priv_is(___nl__6, ___get_global_const(5)));
#line 196
if(c_rt_lib0check_true_native(___nl__11)){ goto label_9;}
#line 198
c_rt_lib0move(&___nl__11, c_rt_lib0priv_is(___nl__6, ___get_global_const(234)));
#line 198
if(c_rt_lib0check_true_native(___nl__11)){ goto label_10;}
#line 198
c_rt_lib0move(&___nl__11,___get_global_const(74));
#line 198
c_rt_lib0move(&___nl__11, c_rt_lib0array_mk(2, ___nl__11, ___nl__6));
#line 198
nl_die_arg(___nl__11);
#line 196
label_9:
#line 196
c_rt_lib0move(&___nl__12, c_rt_lib0priv_as(___nl__6, ___get_global_const(5)));
#line 197
c_rt_lib0move(&___nl__13, generator_js_priv0print_register(___nl__12));
#line 197
c_rt_lib0move(&___nl__4, c_rt_lib0concat_add(___nl__4, ___nl__13));
#line 197
c_rt_lib0clear(&___nl__13);
#line 197
c_rt_lib0clear(&___nl__12);
#line 198
goto label_8;
#line 198
label_10:
#line 198
c_rt_lib0move(&___nl__12, c_rt_lib0priv_as(___nl__6, ___get_global_const(234)));
#line 199
c_rt_lib0move(&___nl__13, generator_js_priv0print_register(___nl__12));
#line 199
c_rt_lib0move(&___nl__4, c_rt_lib0concat_add(___nl__4, ___nl__13));
#line 199
c_rt_lib0clear(&___nl__13);
#line 199
c_rt_lib0clear(&___nl__12);
#line 200
goto label_8;
#line 200
label_8:
#line 200
c_rt_lib0clear(&___nl__11);
#line 201
c_rt_lib0move(&___nl__7, c_rt_lib0add_mod(___nl__7, ___nl__8));
#line 201
goto label_5;
#line 201
label_3:
#line 201
c_rt_lib0clear(&___nl__6);
#line 201
c_rt_lib0clear(&___nl__7);
#line 201
c_rt_lib0clear(&___nl__8);
#line 201
c_rt_lib0clear(&___nl__9);
#line 201
c_rt_lib0clear(&___nl__10);
#line 202
c_rt_lib0move(&___nl__6,___get_global_const(455));
#line 202
c_rt_lib0move(&___nl__6, c_rt_lib0concat_new(___nl__4, ___nl__6));
#line 202
c_rt_lib0clear(&___nl__0);
#line 202
c_rt_lib0clear(&___nl__1);
#line 202
c_rt_lib0clear(&___nl__2);
#line 202
c_rt_lib0clear(&___nl__3);
#line 202
c_rt_lib0clear(&___nl__4);
#line 202
c_rt_lib0clear(&___nl__5);
#line 202
return ___nl__6;
#line 202
c_rt_lib0clear(&___nl__6);
#line 202
c_rt_lib0clear(&___nl__4);
#line 202
c_rt_lib0clear(&___nl__5);
#line 202
c_rt_lib0clear(&___nl__0);
#line 202
c_rt_lib0clear(&___nl__1);
#line 202
c_rt_lib0clear(&___nl__2);
#line 202
c_rt_lib0clear(&___nl__3);
#line 202
return NULL;
}

ImmT generator_js_priv0print_const_arr(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
generator_js_priv0__const__init();
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
#line 206
c_rt_lib0move(&___nl__1,___get_global_const(174));
#line 207
c_rt_lib0move(&___nl__3,___get_global_const(1));
#line 207
c_rt_lib0move(&___nl__4,___get_global_const(2));
#line 207
c_rt_lib0move(&___nl__5, c_rt_lib0array_len(___nl__0));
#line 207
label_3:
#line 207
c_rt_lib0move(&___nl__6, c_rt_lib0ge(___nl__3, ___nl__5));
#line 207
if(c_rt_lib0check_true_native(___nl__6)){ goto label_1;}
#line 207
c_rt_lib0move(&___nl__2, c_rt_lib0array_get(___nl__0, ___nl__3));
#line 207
c_rt_lib0move(&___nl__7, generator_js_priv0print_const_value(___nl__2));
#line 207
c_rt_lib0move(&___nl__8,___get_global_const(172));
#line 207
c_rt_lib0move(&___nl__7, c_rt_lib0concat_add(___nl__7, ___nl__8));
#line 207
c_rt_lib0clear(&___nl__8);
#line 207
c_rt_lib0move(&___nl__1, c_rt_lib0concat_add(___nl__1, ___nl__7));
#line 207
c_rt_lib0clear(&___nl__7);
#line 207
c_rt_lib0move(&___nl__3, c_rt_lib0add_mod(___nl__3, ___nl__4));
#line 207
goto label_3;
#line 207
label_1:
#line 207
c_rt_lib0clear(&___nl__2);
#line 207
c_rt_lib0clear(&___nl__3);
#line 207
c_rt_lib0clear(&___nl__4);
#line 207
c_rt_lib0clear(&___nl__5);
#line 207
c_rt_lib0clear(&___nl__6);
#line 208
c_rt_lib0move(&___nl__2,___get_global_const(175));
#line 208
c_rt_lib0move(&___nl__2, c_rt_lib0concat_new(___nl__1, ___nl__2));
#line 208
c_rt_lib0clear(&___nl__0);
#line 208
c_rt_lib0clear(&___nl__1);
#line 208
return ___nl__2;
#line 208
c_rt_lib0clear(&___nl__2);
#line 208
c_rt_lib0clear(&___nl__1);
#line 208
c_rt_lib0clear(&___nl__0);
#line 208
return NULL;
}

ImmT generator_js_priv0print_const_hash(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
generator_js_priv0__const__init();
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
#line 212
c_rt_lib0move(&___nl__1,___get_global_const(168));
#line 213
c_rt_lib0move(&___nl__4, c_rt_lib0init_iter(___nl__0));
#line 213
label_3:
#line 213
c_rt_lib0move(&___nl__2, c_rt_lib0is_end_hash(___nl__4));
#line 213
if(c_rt_lib0check_true_native(___nl__2)){ goto label_1;}
#line 213
c_rt_lib0move(&___nl__2, c_rt_lib0get_key_iter(___nl__4));
#line 213
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value(___nl__0, ___nl__2));
#line 213
c_rt_lib0move(&___nl__5,___get_global_const(150));
#line 213
c_rt_lib0move(&___nl__6, generator_js_priv0escape_string(___nl__2));
#line 213
c_rt_lib0move(&___nl__5, c_rt_lib0concat_add(___nl__5, ___nl__6));
#line 213
c_rt_lib0clear(&___nl__6);
#line 213
c_rt_lib0move(&___nl__6,___get_global_const(473));
#line 213
c_rt_lib0move(&___nl__5, c_rt_lib0concat_add(___nl__5, ___nl__6));
#line 213
c_rt_lib0clear(&___nl__6);
#line 213
c_rt_lib0move(&___nl__6, generator_js_priv0print_const_value(___nl__3));
#line 213
c_rt_lib0move(&___nl__5, c_rt_lib0concat_add(___nl__5, ___nl__6));
#line 213
c_rt_lib0clear(&___nl__6);
#line 213
c_rt_lib0move(&___nl__6,___get_global_const(172));
#line 213
c_rt_lib0move(&___nl__5, c_rt_lib0concat_add(___nl__5, ___nl__6));
#line 213
c_rt_lib0clear(&___nl__6);
#line 213
c_rt_lib0move(&___nl__1, c_rt_lib0concat_add(___nl__1, ___nl__5));
#line 213
c_rt_lib0clear(&___nl__5);
#line 213
c_rt_lib0move(&___nl__4, c_rt_lib0next_iter(___nl__4));
#line 213
goto label_3;
#line 213
label_1:
#line 213
c_rt_lib0clear(&___nl__2);
#line 213
c_rt_lib0clear(&___nl__3);
#line 213
c_rt_lib0clear(&___nl__4);
#line 214
c_rt_lib0move(&___nl__2,___get_global_const(169));
#line 214
c_rt_lib0move(&___nl__2, c_rt_lib0concat_new(___nl__1, ___nl__2));
#line 214
c_rt_lib0clear(&___nl__0);
#line 214
c_rt_lib0clear(&___nl__1);
#line 214
return ___nl__2;
#line 214
c_rt_lib0clear(&___nl__2);
#line 214
c_rt_lib0clear(&___nl__1);
#line 214
c_rt_lib0clear(&___nl__0);
#line 214
return NULL;
}

ImmT generator_js_priv0print_const_ov(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
generator_js_priv0__const__init();
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
#line 218
c_rt_lib0move(&___nl__1,___get_global_const(0));
#line 219
c_rt_lib0move(&___nl__2, ov0has_value(___nl__0));
#line 219
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 219
if(c_rt_lib0check_true_native(___nl__2)){ goto label_2;}
#line 220
c_rt_lib0move(&___nl__3,___get_global_const(500));
#line 220
c_rt_lib0move(&___nl__5, ov0get_element(___nl__0));
#line 220
c_rt_lib0move(&___nl__4, generator_js_priv0escape_string(___nl__5));
#line 220
c_rt_lib0clear(&___nl__5);
#line 220
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 220
c_rt_lib0clear(&___nl__4);
#line 220
c_rt_lib0move(&___nl__4,___get_global_const(501));
#line 220
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 220
c_rt_lib0clear(&___nl__4);
#line 220
c_rt_lib0move(&___nl__5, ov0get_value(___nl__0));
#line 220
c_rt_lib0move(&___nl__4, generator_js_priv0print_const_value(___nl__5));
#line 220
c_rt_lib0clear(&___nl__5);
#line 220
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 220
c_rt_lib0clear(&___nl__4);
#line 220
c_rt_lib0move(&___nl__4,___get_global_const(176));
#line 220
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 220
c_rt_lib0clear(&___nl__4);
#line 220
c_rt_lib0copy(&___nl__1, ___nl__3);
#line 220
c_rt_lib0clear(&___nl__3);
#line 221
goto label_1;
#line 221
label_2:
#line 222
c_rt_lib0move(&___nl__3,___get_global_const(500));
#line 222
c_rt_lib0move(&___nl__5, ov0get_element(___nl__0));
#line 222
c_rt_lib0move(&___nl__4, generator_js_priv0escape_string(___nl__5));
#line 222
c_rt_lib0clear(&___nl__5);
#line 222
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 222
c_rt_lib0clear(&___nl__4);
#line 222
c_rt_lib0move(&___nl__4,___get_global_const(502));
#line 222
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 222
c_rt_lib0clear(&___nl__4);
#line 222
c_rt_lib0copy(&___nl__1, ___nl__3);
#line 222
c_rt_lib0clear(&___nl__3);
#line 223
goto label_1;
#line 223
label_1:
#line 223
c_rt_lib0clear(&___nl__2);
#line 224
c_rt_lib0clear(&___nl__0);
#line 224
return ___nl__1;
#line 224
c_rt_lib0clear(&___nl__1);
#line 224
c_rt_lib0clear(&___nl__0);
#line 224
return NULL;
}

ImmT generator_js_priv0print_const_value(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
generator_js_priv0__const__init();
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
#line 228
c_rt_lib0move(&___nl__1, nl0is_sim(___nl__0));
#line 228
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__1));
#line 228
if(c_rt_lib0check_true_native(___nl__3)){ goto label_4;}
#line 228
c_rt_lib0move(&___nl__4,___get_global_const(0));
#line 228
c_rt_lib0move(&___nl__4, c_rt_lib0concat_new(___nl__0, ___nl__4));
#line 228
c_rt_lib0move(&___nl__1, string_utils0is_integer(___nl__4));
#line 228
c_rt_lib0clear(&___nl__4);
#line 228
label_4:
#line 228
c_rt_lib0clear(&___nl__3);
#line 228
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__1));
#line 228
if(c_rt_lib0check_true_native(___nl__2)){ goto label_3;}
#line 228
c_rt_lib0move(&___nl__1,___get_global_const(1));
#line 228
c_rt_lib0move(&___nl__1, c_rt_lib0add_mod(___nl__1, ___nl__0));
#line 228
c_rt_lib0move(&___nl__1, c_rt_lib0eq(___nl__1, ___nl__0));
#line 228
label_3:
#line 228
c_rt_lib0clear(&___nl__2);
#line 228
c_rt_lib0move(&___nl__1, c_rt_lib0not(___nl__1));
#line 228
if(c_rt_lib0check_true_native(___nl__1)){ goto label_2;}
#line 229
c_rt_lib0clear(&___nl__1);
#line 229
return ___nl__0;
#line 230
goto label_1;
#line 230
label_2:
#line 230
c_rt_lib0move(&___nl__1, nl0is_sim(___nl__0));
#line 230
c_rt_lib0move(&___nl__1, c_rt_lib0not(___nl__1));
#line 230
if(c_rt_lib0check_true_native(___nl__1)){ goto label_5;}
#line 231
c_rt_lib0move(&___nl__2,___get_global_const(150));
#line 231
c_rt_lib0move(&___nl__3, generator_js_priv0escape_string(___nl__0));
#line 231
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__3));
#line 231
c_rt_lib0clear(&___nl__3);
#line 231
c_rt_lib0move(&___nl__3,___get_global_const(150));
#line 231
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__3));
#line 231
c_rt_lib0clear(&___nl__3);
#line 231
c_rt_lib0clear(&___nl__0);
#line 231
c_rt_lib0clear(&___nl__1);
#line 231
return ___nl__2;
#line 231
c_rt_lib0clear(&___nl__2);
#line 232
goto label_1;
#line 232
label_5:
#line 232
c_rt_lib0move(&___nl__1, nl0is_array(___nl__0));
#line 232
c_rt_lib0move(&___nl__1, c_rt_lib0not(___nl__1));
#line 232
if(c_rt_lib0check_true_native(___nl__1)){ goto label_6;}
#line 233
c_rt_lib0move(&___nl__2, generator_js_priv0print_const_arr(___nl__0));
#line 233
c_rt_lib0clear(&___nl__0);
#line 233
c_rt_lib0clear(&___nl__1);
#line 233
return ___nl__2;
#line 233
c_rt_lib0clear(&___nl__2);
#line 234
goto label_1;
#line 234
label_6:
#line 234
c_rt_lib0move(&___nl__1, nl0is_hash(___nl__0));
#line 234
c_rt_lib0move(&___nl__1, c_rt_lib0not(___nl__1));
#line 234
if(c_rt_lib0check_true_native(___nl__1)){ goto label_7;}
#line 235
c_rt_lib0move(&___nl__2, generator_js_priv0print_const_hash(___nl__0));
#line 235
c_rt_lib0clear(&___nl__0);
#line 235
c_rt_lib0clear(&___nl__1);
#line 235
return ___nl__2;
#line 235
c_rt_lib0clear(&___nl__2);
#line 236
goto label_1;
#line 236
label_7:
#line 236
c_rt_lib0move(&___nl__1, nl0is_variant(___nl__0));
#line 236
c_rt_lib0move(&___nl__1, c_rt_lib0not(___nl__1));
#line 236
if(c_rt_lib0check_true_native(___nl__1)){ goto label_8;}
#line 237
c_rt_lib0move(&___nl__2, generator_js_priv0print_const_ov(___nl__0));
#line 237
c_rt_lib0clear(&___nl__0);
#line 237
c_rt_lib0clear(&___nl__1);
#line 237
return ___nl__2;
#line 237
c_rt_lib0clear(&___nl__2);
#line 238
goto label_1;
#line 238
label_8:
#line 239
c_rt_lib0move(&___nl__2, c_rt_lib0array_mk(0));
#line 239
nl_die_arg(___nl__2);
#line 239
c_rt_lib0clear(&___nl__2);
#line 240
goto label_1;
#line 240
label_1:
#line 240
c_rt_lib0clear(&___nl__1);
#line 240
c_rt_lib0clear(&___nl__0);
#line 240
return NULL;
}

ImmT generator_js_priv0print_goto(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
generator_js_priv0__const__init();
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
#line 244
c_rt_lib0move(&___nl__1,___get_global_const(558));
#line 244
c_rt_lib0move(&___nl__1, c_rt_lib0concat_add(___nl__1, ___nl__0));
#line 244
c_rt_lib0move(&___nl__2,___get_global_const(559));
#line 244
c_rt_lib0move(&___nl__1, c_rt_lib0concat_add(___nl__1, ___nl__2));
#line 244
c_rt_lib0clear(&___nl__2);
#line 244
c_rt_lib0clear(&___nl__0);
#line 244
return ___nl__1;
#line 244
c_rt_lib0clear(&___nl__1);
#line 244
c_rt_lib0clear(&___nl__0);
#line 244
return NULL;
}

ImmT generator_js_priv0print_hash(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
generator_js_priv0__const__init();
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
ImmT ___nl__9 = NULL;
#line 248
c_rt_lib0move(&___nl__1,___get_global_const(168));
#line 249
c_rt_lib0move(&___nl__3,___get_global_const(1));
#line 249
c_rt_lib0move(&___nl__4,___get_global_const(2));
#line 249
c_rt_lib0move(&___nl__5, c_rt_lib0array_len(___nl__0));
#line 249
label_3:
#line 249
c_rt_lib0move(&___nl__6, c_rt_lib0ge(___nl__3, ___nl__5));
#line 249
if(c_rt_lib0check_true_native(___nl__6)){ goto label_1;}
#line 249
c_rt_lib0move(&___nl__2, c_rt_lib0array_get(___nl__0, ___nl__3));
#line 249
c_rt_lib0move(&___nl__7,___get_global_const(150));
#line 249
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(279)));
#line 249
c_rt_lib0move(&___nl__8, generator_js_priv0escape_string(___nl__9));
#line 249
c_rt_lib0clear(&___nl__9);
#line 249
c_rt_lib0move(&___nl__7, c_rt_lib0concat_add(___nl__7, ___nl__8));
#line 249
c_rt_lib0clear(&___nl__8);
#line 249
c_rt_lib0move(&___nl__8,___get_global_const(473));
#line 249
c_rt_lib0move(&___nl__7, c_rt_lib0concat_add(___nl__7, ___nl__8));
#line 249
c_rt_lib0clear(&___nl__8);
#line 249
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(234)));
#line 249
c_rt_lib0move(&___nl__8, generator_js_priv0print_register_value(___nl__9));
#line 249
c_rt_lib0clear(&___nl__9);
#line 249
c_rt_lib0move(&___nl__7, c_rt_lib0concat_add(___nl__7, ___nl__8));
#line 249
c_rt_lib0clear(&___nl__8);
#line 249
c_rt_lib0move(&___nl__8,___get_global_const(172));
#line 249
c_rt_lib0move(&___nl__7, c_rt_lib0concat_add(___nl__7, ___nl__8));
#line 249
c_rt_lib0clear(&___nl__8);
#line 249
c_rt_lib0move(&___nl__1, c_rt_lib0concat_add(___nl__1, ___nl__7));
#line 249
c_rt_lib0clear(&___nl__7);
#line 249
c_rt_lib0move(&___nl__3, c_rt_lib0add_mod(___nl__3, ___nl__4));
#line 249
goto label_3;
#line 249
label_1:
#line 249
c_rt_lib0clear(&___nl__2);
#line 249
c_rt_lib0clear(&___nl__3);
#line 249
c_rt_lib0clear(&___nl__4);
#line 249
c_rt_lib0clear(&___nl__5);
#line 249
c_rt_lib0clear(&___nl__6);
#line 250
c_rt_lib0move(&___nl__2,___get_global_const(169));
#line 250
c_rt_lib0move(&___nl__2, c_rt_lib0concat_new(___nl__1, ___nl__2));
#line 250
c_rt_lib0clear(&___nl__0);
#line 250
c_rt_lib0clear(&___nl__1);
#line 250
return ___nl__2;
#line 250
c_rt_lib0clear(&___nl__2);
#line 250
c_rt_lib0clear(&___nl__1);
#line 250
c_rt_lib0clear(&___nl__0);
#line 250
return NULL;
}

ImmT generator_js_priv0print_ov_mk(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
generator_js_priv0__const__init();
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
#line 254
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(233)));
#line 254
c_rt_lib0move(&___nl__1, generator_js_priv0print_register_to_assign(___nl__2));
#line 254
c_rt_lib0clear(&___nl__2);
#line 255
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(39)));
#line 255
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(238)));
#line 255
if(c_rt_lib0check_true_native(___nl__3)){ goto label_2;}
#line 257
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(211)));
#line 257
if(c_rt_lib0check_true_native(___nl__3)){ goto label_3;}
#line 257
c_rt_lib0move(&___nl__3,___get_global_const(74));
#line 257
c_rt_lib0move(&___nl__3, c_rt_lib0array_mk(2, ___nl__3, ___nl__2));
#line 257
nl_die_arg(___nl__3);
#line 255
label_2:
#line 255
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(238)));
#line 256
c_rt_lib0move(&___nl__5,___get_global_const(560));
#line 256
c_rt_lib0move(&___nl__5, c_rt_lib0concat_new(___nl__1, ___nl__5));
#line 256
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(76)));
#line 256
c_rt_lib0move(&___nl__6, generator_js_priv0escape_string(___nl__7));
#line 256
c_rt_lib0clear(&___nl__7);
#line 256
c_rt_lib0move(&___nl__5, c_rt_lib0concat_add(___nl__5, ___nl__6));
#line 256
c_rt_lib0clear(&___nl__6);
#line 256
c_rt_lib0move(&___nl__6,___get_global_const(501));
#line 256
c_rt_lib0move(&___nl__5, c_rt_lib0concat_add(___nl__5, ___nl__6));
#line 256
c_rt_lib0clear(&___nl__6);
#line 256
c_rt_lib0move(&___nl__6, generator_js_priv0print_register(___nl__4));
#line 256
c_rt_lib0move(&___nl__5, c_rt_lib0concat_add(___nl__5, ___nl__6));
#line 256
c_rt_lib0clear(&___nl__6);
#line 256
c_rt_lib0move(&___nl__6,___get_global_const(455));
#line 256
c_rt_lib0move(&___nl__5, c_rt_lib0concat_add(___nl__5, ___nl__6));
#line 256
c_rt_lib0clear(&___nl__6);
#line 256
c_rt_lib0clear(&___nl__0);
#line 256
c_rt_lib0clear(&___nl__1);
#line 256
c_rt_lib0clear(&___nl__2);
#line 256
c_rt_lib0clear(&___nl__3);
#line 256
c_rt_lib0clear(&___nl__4);
#line 256
return ___nl__5;
#line 256
c_rt_lib0clear(&___nl__5);
#line 256
c_rt_lib0clear(&___nl__4);
#line 257
goto label_1;
#line 257
label_3:
#line 258
c_rt_lib0move(&___nl__4,___get_global_const(561));
#line 258
c_rt_lib0move(&___nl__4, c_rt_lib0concat_new(___nl__1, ___nl__4));
#line 258
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(76)));
#line 258
c_rt_lib0move(&___nl__5, generator_js_priv0escape_string(___nl__6));
#line 258
c_rt_lib0clear(&___nl__6);
#line 258
c_rt_lib0move(&___nl__4, c_rt_lib0concat_add(___nl__4, ___nl__5));
#line 258
c_rt_lib0clear(&___nl__5);
#line 258
c_rt_lib0move(&___nl__5,___get_global_const(562));
#line 258
c_rt_lib0move(&___nl__4, c_rt_lib0concat_add(___nl__4, ___nl__5));
#line 258
c_rt_lib0clear(&___nl__5);
#line 258
c_rt_lib0clear(&___nl__0);
#line 258
c_rt_lib0clear(&___nl__1);
#line 258
c_rt_lib0clear(&___nl__2);
#line 258
c_rt_lib0clear(&___nl__3);
#line 258
return ___nl__4;
#line 258
c_rt_lib0clear(&___nl__4);
#line 259
goto label_1;
#line 259
label_1:
#line 259
c_rt_lib0clear(&___nl__2);
#line 259
c_rt_lib0clear(&___nl__3);
#line 259
c_rt_lib0clear(&___nl__1);
#line 259
c_rt_lib0clear(&___nl__0);
#line 259
return NULL;
}

ImmT generator_js_priv0print_register(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
generator_js_priv0__const__init();
ImmT ___nl__1 = NULL;
#line 263
c_rt_lib0move(&___nl__1,___get_global_const(297));
#line 263
c_rt_lib0move(&___nl__1, c_rt_lib0concat_add(___nl__1, ___nl__0));
#line 263
c_rt_lib0clear(&___nl__0);
#line 263
return ___nl__1;
#line 263
c_rt_lib0clear(&___nl__1);
#line 263
c_rt_lib0clear(&___nl__0);
#line 263
return NULL;
}

ImmT generator_js_priv0print_register_value(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
generator_js_priv0__const__init();
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
#line 267
c_rt_lib0move(&___nl__1, generator_js_priv0print_register(___nl__0));
#line 267
c_rt_lib0move(&___nl__2,___get_global_const(563));
#line 267
c_rt_lib0move(&___nl__1, c_rt_lib0concat_add(___nl__1, ___nl__2));
#line 267
c_rt_lib0clear(&___nl__2);
#line 267
c_rt_lib0clear(&___nl__0);
#line 267
return ___nl__1;
#line 267
c_rt_lib0clear(&___nl__1);
#line 267
c_rt_lib0clear(&___nl__0);
#line 267
return NULL;
}

ImmT generator_js_priv0print_register_to_assign(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
generator_js_priv0__const__init();
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
#line 271
c_rt_lib0move(&___nl__1,___get_global_const(0));
#line 271
c_rt_lib0move(&___nl__1, c_rt_lib0eq(___nl__0, ___nl__1));
#line 271
c_rt_lib0move(&___nl__1, c_rt_lib0not(___nl__1));
#line 271
if(c_rt_lib0check_true_native(___nl__1)){ goto label_2;}
#line 271
c_rt_lib0move(&___nl__2,___get_global_const(0));
#line 271
c_rt_lib0clear(&___nl__0);
#line 271
c_rt_lib0clear(&___nl__1);
#line 271
return ___nl__2;
#line 271
c_rt_lib0clear(&___nl__2);
#line 271
goto label_2;
#line 271
label_2:
#line 271
c_rt_lib0clear(&___nl__1);
#line 272
c_rt_lib0move(&___nl__1, generator_js_priv0print_register_value(___nl__0));
#line 272
c_rt_lib0move(&___nl__2,___get_global_const(448));
#line 272
c_rt_lib0move(&___nl__1, c_rt_lib0concat_add(___nl__1, ___nl__2));
#line 272
c_rt_lib0clear(&___nl__2);
#line 272
c_rt_lib0clear(&___nl__0);
#line 272
return ___nl__1;
#line 272
c_rt_lib0clear(&___nl__1);
#line 272
c_rt_lib0clear(&___nl__0);
#line 272
return NULL;
}

ImmT generator_js_priv0print_return(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
generator_js_priv0__const__init();
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
#line 276
c_rt_lib0move(&___nl__1, c_rt_lib0priv_is(___nl__0, ___get_global_const(234)));
#line 276
if(c_rt_lib0check_true_native(___nl__1)){ goto label_2;}
#line 278
c_rt_lib0move(&___nl__1, c_rt_lib0priv_is(___nl__0, ___get_global_const(211)));
#line 278
if(c_rt_lib0check_true_native(___nl__1)){ goto label_3;}
#line 278
c_rt_lib0move(&___nl__1,___get_global_const(74));
#line 278
c_rt_lib0move(&___nl__1, c_rt_lib0array_mk(2, ___nl__1, ___nl__0));
#line 278
nl_die_arg(___nl__1);
#line 276
label_2:
#line 276
c_rt_lib0move(&___nl__2, c_rt_lib0priv_as(___nl__0, ___get_global_const(234)));
#line 277
c_rt_lib0move(&___nl__3,___get_global_const(348));
#line 277
c_rt_lib0move(&___nl__4, generator_js_priv0print_register_value(___nl__2));
#line 277
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 277
c_rt_lib0clear(&___nl__4);
#line 277
c_rt_lib0move(&___nl__4,___get_global_const(311));
#line 277
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 277
c_rt_lib0clear(&___nl__4);
#line 277
c_rt_lib0clear(&___nl__0);
#line 277
c_rt_lib0clear(&___nl__1);
#line 277
c_rt_lib0clear(&___nl__2);
#line 277
return ___nl__3;
#line 277
c_rt_lib0clear(&___nl__3);
#line 277
c_rt_lib0clear(&___nl__2);
#line 278
goto label_1;
#line 278
label_3:
#line 279
c_rt_lib0move(&___nl__2,___get_global_const(517));
#line 279
c_rt_lib0clear(&___nl__0);
#line 279
c_rt_lib0clear(&___nl__1);
#line 279
return ___nl__2;
#line 279
c_rt_lib0clear(&___nl__2);
#line 280
goto label_1;
#line 280
label_1:
#line 280
c_rt_lib0clear(&___nl__1);
#line 280
c_rt_lib0clear(&___nl__0);
#line 280
return NULL;
}

ImmT generator_js_priv0print_una_op(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
generator_js_priv0__const__init();
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
#line 284
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(233)));
#line 284
c_rt_lib0move(&___nl__1, generator_js_priv0print_register_to_assign(___nl__2));
#line 284
c_rt_lib0clear(&___nl__2);
#line 285
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(401)));
#line 285
c_rt_lib0move(&___nl__3,___get_global_const(243));
#line 285
c_rt_lib0move(&___nl__2, c_rt_lib0eq(___nl__2, ___nl__3));
#line 285
c_rt_lib0clear(&___nl__3);
#line 285
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 285
if(c_rt_lib0check_true_native(___nl__2)){ goto label_2;}
#line 286
c_rt_lib0move(&___nl__3,___get_global_const(564));
#line 286
c_rt_lib0move(&___nl__3, c_rt_lib0concat_new(___nl__1, ___nl__3));
#line 286
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(39)));
#line 286
c_rt_lib0move(&___nl__4, generator_js_priv0print_register(___nl__5));
#line 286
c_rt_lib0clear(&___nl__5);
#line 286
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 286
c_rt_lib0clear(&___nl__4);
#line 286
c_rt_lib0move(&___nl__4,___get_global_const(550));
#line 286
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 286
c_rt_lib0clear(&___nl__4);
#line 286
c_rt_lib0clear(&___nl__0);
#line 286
c_rt_lib0clear(&___nl__1);
#line 286
c_rt_lib0clear(&___nl__2);
#line 286
return ___nl__3;
#line 286
c_rt_lib0clear(&___nl__3);
#line 287
goto label_1;
#line 287
label_2:
#line 288
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(401)));
#line 288
c_rt_lib0move(&___nl__3, c_rt_lib0concat_new(___nl__1, ___nl__3));
#line 288
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(39)));
#line 288
c_rt_lib0move(&___nl__4, generator_js_priv0print_register_value(___nl__5));
#line 288
c_rt_lib0clear(&___nl__5);
#line 288
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 288
c_rt_lib0clear(&___nl__4);
#line 288
c_rt_lib0move(&___nl__4,___get_global_const(311));
#line 288
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 288
c_rt_lib0clear(&___nl__4);
#line 288
c_rt_lib0clear(&___nl__0);
#line 288
c_rt_lib0clear(&___nl__1);
#line 288
c_rt_lib0clear(&___nl__2);
#line 288
return ___nl__3;
#line 288
c_rt_lib0clear(&___nl__3);
#line 289
goto label_1;
#line 289
label_1:
#line 289
c_rt_lib0clear(&___nl__2);
#line 289
c_rt_lib0clear(&___nl__1);
#line 289
c_rt_lib0clear(&___nl__0);
#line 289
return NULL;
}


static ImmT ___const__[1];
static int ___const_init__ = 1;
void generator_js_priv0__const__init(){
if(___const_init__) {
___const_init__ = 0;
__const__f = &___const__[0];


for(int i=0;i<0;++i) ___const__[i] = NULL;
c_rt_lib0register_const(___const__, 0);
}}
ImmT generator_js_priv0__const__sim(int __nr) {
ImmT ret = NULL;
c_rt_lib0copy(&ret, ___const__[__nr]);
return ret;
}
ImmT generator_js_priv0__const__sing(int __nr) {
if(___const__[__nr+0]==NULL) {
switch(__nr){
default:
	nl_die();
}}
ImmT ret = NULL;
c_rt_lib0copy(&ret, ___const__[__nr+0]);
return ret;
}
