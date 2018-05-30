
/* (c) Atinea Sp z o. o.
 *  Stamp: nianio lang
 */
#include "c_rt_lib.h"
#include "c_global_const.h"
#include "string_utils.h"
#include "string.h"
#include "boolean_t.h"
#include "ptd.h"
#include "array.h"
#include "c_rt_lib.h"
#line 1 "string_utils.nl"

static ImmT *__const__f = NULL;
ImmT string_utils_priv0__const__sim(int __nr);
ImmT string_utils_priv0__const__sing(int __nr);

ImmT string_utils_priv0eat_ws(ImmT ___nl__0,ImmT * ___ref___1);
ImmT string_utils_priv0get_number(ImmT ___nl__0,ImmT * ___ref___1);
ImmT string_utils_priv0cal_expr(ImmT ___nl__0,ImmT * ___ref___1,ImmT ___nl__2);
ImmT string_utils_priv0max(ImmT ___nl__0,ImmT ___nl__1);


ImmT string_utils0is_int0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "string_utils0is_int");
return string_utils0is_int(_tab[0]);}
ImmT string_utils0is_int(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
#line 12
c_rt_lib0move(&___nl__1, string0ord(___nl__0));
#line 12
c_rt_lib0move(&___nl__3,___get_global_const(1109));
#line 12
c_rt_lib0move(&___nl__1, c_rt_lib0gt(___nl__1, ___nl__3));
#line 12
c_rt_lib0clear(&___nl__3);
#line 12
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__1));
#line 12
if(c_rt_lib0check_true_native(___nl__2)){ goto label_10;}
#line 12
c_rt_lib0move(&___nl__1, string0ord(___nl__0));
#line 12
c_rt_lib0move(&___nl__3,___get_global_const(1110));
#line 12
c_rt_lib0move(&___nl__1, c_rt_lib0lt(___nl__1, ___nl__3));
#line 12
c_rt_lib0clear(&___nl__3);
#line 12
label_10:
#line 12
c_rt_lib0clear(&___nl__2);
#line 12
c_rt_lib0clear(&___nl__0);
#line 12
return ___nl__1;
#line 12
c_rt_lib0clear(&___nl__1);
#line 12
c_rt_lib0clear(&___nl__0);
#line 12
return NULL;
}

ImmT string_utils0is_whitespace0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "string_utils0is_whitespace");
return string_utils0is_whitespace(_tab[0]);}
ImmT string_utils0is_whitespace(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
ImmT ___nl__1 = NULL;
#line 16
c_rt_lib0move(&___nl__1,___get_global_const(571));
#line 16
c_rt_lib0move(&___nl__1, c_rt_lib0eq(___nl__0, ___nl__1));
#line 16
if(c_rt_lib0check_true_native(___nl__1)){ goto label_5;}
#line 16
c_rt_lib0move(&___nl__1, string0lf());
#line 16
c_rt_lib0move(&___nl__1, c_rt_lib0eq(___nl__0, ___nl__1));
#line 16
label_5:
#line 16
if(c_rt_lib0check_true_native(___nl__1)){ goto label_9;}
#line 16
c_rt_lib0move(&___nl__1, string0tab());
#line 16
c_rt_lib0move(&___nl__1, c_rt_lib0eq(___nl__0, ___nl__1));
#line 16
label_9:
#line 16
if(c_rt_lib0check_true_native(___nl__1)){ goto label_13;}
#line 16
c_rt_lib0move(&___nl__1, string0r());
#line 16
c_rt_lib0move(&___nl__1, c_rt_lib0eq(___nl__0, ___nl__1));
#line 16
label_13:
#line 16
if(c_rt_lib0check_true_native(___nl__1)){ goto label_17;}
#line 16
c_rt_lib0move(&___nl__1, string0f());
#line 16
c_rt_lib0move(&___nl__1, c_rt_lib0eq(___nl__0, ___nl__1));
#line 16
label_17:
#line 16
c_rt_lib0clear(&___nl__0);
#line 16
return ___nl__1;
#line 16
c_rt_lib0clear(&___nl__1);
#line 16
c_rt_lib0clear(&___nl__0);
#line 16
return NULL;
}

ImmT string_utils0is_alpha0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "string_utils0is_alpha");
return string_utils0is_alpha(_tab[0]);}
ImmT string_utils0is_alpha(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
#line 20
c_rt_lib0move(&___nl__1, string0ord(___nl__0));
#line 21
c_rt_lib0move(&___nl__2,___get_global_const(1111));
#line 21
c_rt_lib0move(&___nl__2, c_rt_lib0gt(___nl__1, ___nl__2));
#line 21
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__2));
#line 21
if(c_rt_lib0check_true_native(___nl__3)){ goto label_7;}
#line 21
c_rt_lib0move(&___nl__2,___get_global_const(1112));
#line 21
c_rt_lib0move(&___nl__2, c_rt_lib0lt(___nl__1, ___nl__2));
#line 21
label_7:
#line 21
c_rt_lib0clear(&___nl__3);
#line 21
if(c_rt_lib0check_true_native(___nl__2)){ goto label_18;}
#line 21
c_rt_lib0move(&___nl__2,___get_global_const(1113));
#line 21
c_rt_lib0move(&___nl__2, c_rt_lib0gt(___nl__1, ___nl__2));
#line 21
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__2));
#line 21
if(c_rt_lib0check_true_native(___nl__3)){ goto label_16;}
#line 21
c_rt_lib0move(&___nl__2,___get_global_const(1114));
#line 21
c_rt_lib0move(&___nl__2, c_rt_lib0lt(___nl__1, ___nl__2));
#line 21
label_16:
#line 21
c_rt_lib0clear(&___nl__3);
#line 21
label_18:
#line 21
c_rt_lib0clear(&___nl__0);
#line 21
c_rt_lib0clear(&___nl__1);
#line 21
return ___nl__2;
#line 21
c_rt_lib0clear(&___nl__2);
#line 21
c_rt_lib0clear(&___nl__1);
#line 21
c_rt_lib0clear(&___nl__0);
#line 21
return NULL;
}

ImmT string_utils0get_integer0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "string_utils0get_integer");
return string_utils0get_integer(_tab[0]);}
ImmT string_utils0get_integer(ImmT ___nl__0) {
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
#line 25
c_rt_lib0move(&___nl__1,___get_global_const(2));
#line 25
c_rt_lib0move(&___nl__1, c_rt_lib0eq(___nl__0, ___nl__1));
#line 25
if(c_rt_lib0check_true_native(___nl__1)){ goto label_5;}
#line 25
c_rt_lib0move(&___nl__1,___get_global_const(296));
#line 25
c_rt_lib0move(&___nl__1, c_rt_lib0eq(___nl__0, ___nl__1));
#line 25
label_5:
#line 25
c_rt_lib0move(&___nl__1, c_rt_lib0not(___nl__1));
#line 25
if(c_rt_lib0check_true_native(___nl__1)){ goto label_15;}
#line 25
c_rt_lib0move(&___nl__2,___get_global_const(2));
#line 25
c_rt_lib0move(&___nl__2, c_rt_lib0ov_mk_arg(___get_global_const(47), ___nl__2));
#line 25
c_rt_lib0clear(&___nl__0);
#line 25
c_rt_lib0clear(&___nl__1);
#line 25
return ___nl__2;
#line 25
c_rt_lib0clear(&___nl__2);
#line 25
goto label_15;
#line 25
label_15:
#line 25
c_rt_lib0clear(&___nl__1);
#line 26
c_rt_lib0move(&___nl__2,___get_global_const(2));
#line 26
c_rt_lib0move(&___nl__1, string0split(___nl__2, ___nl__0));
#line 26
c_rt_lib0clear(&___nl__2);
#line 27
c_rt_lib0move(&___nl__2,___get_global_const(2));
#line 28
c_rt_lib0move(&___nl__4,___get_global_const(0));
#line 28
c_rt_lib0move(&___nl__3, c_rt_lib0array_get(___nl__1, ___nl__4));
#line 28
c_rt_lib0clear(&___nl__4);
#line 28
c_rt_lib0move(&___nl__4,___get_global_const(296));
#line 28
c_rt_lib0move(&___nl__3, c_rt_lib0eq(___nl__3, ___nl__4));
#line 28
c_rt_lib0clear(&___nl__4);
#line 28
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 28
if(c_rt_lib0check_true_native(___nl__3)){ goto label_43;}
#line 29
c_rt_lib0move(&___nl__5,___get_global_const(1));
#line 29
c_rt_lib0move(&___nl__6, array0len(___nl__1));
#line 29
c_rt_lib0move(&___nl__7,___get_global_const(1));
#line 29
c_rt_lib0move(&___nl__6, c_rt_lib0sub_mod(___nl__6, ___nl__7));
#line 29
c_rt_lib0clear(&___nl__7);
#line 29
c_rt_lib0move(&___nl__4, array0subarray(___nl__1, ___nl__5, ___nl__6));
#line 29
c_rt_lib0clear(&___nl__6);
#line 29
c_rt_lib0clear(&___nl__5);
#line 29
c_rt_lib0copy(&___nl__1, ___nl__4);
#line 29
c_rt_lib0clear(&___nl__4);
#line 30
c_rt_lib0move(&___nl__4,___get_global_const(296));
#line 30
c_rt_lib0copy(&___nl__2, ___nl__4);
#line 30
c_rt_lib0clear(&___nl__4);
#line 31
goto label_43;
#line 31
label_43:
#line 31
c_rt_lib0clear(&___nl__3);
#line 32
c_rt_lib0move(&___nl__4,___get_global_const(0));
#line 32
c_rt_lib0move(&___nl__5,___get_global_const(1));
#line 32
c_rt_lib0move(&___nl__6, c_rt_lib0array_len(___nl__1));
#line 32
label_48:
#line 32
c_rt_lib0move(&___nl__7, c_rt_lib0ge(___nl__4, ___nl__6));
#line 32
if(c_rt_lib0check_true_native(___nl__7)){ goto label_75;}
#line 32
c_rt_lib0move(&___nl__3, c_rt_lib0array_get(___nl__1, ___nl__4));
#line 33
c_rt_lib0move(&___nl__8, string_utils0is_int(___nl__3));
#line 33
c_rt_lib0move(&___nl__8, c_rt_lib0not(___nl__8));
#line 33
c_rt_lib0move(&___nl__8, c_rt_lib0not(___nl__8));
#line 33
if(c_rt_lib0check_true_native(___nl__8)){ goto label_70;}
#line 33
c_rt_lib0move(&___nl__9,___get_global_const(2));
#line 33
c_rt_lib0move(&___nl__9, c_rt_lib0ov_mk_arg(___get_global_const(47), ___nl__9));
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
c_rt_lib0clear(&___nl__5);
#line 33
c_rt_lib0clear(&___nl__6);
#line 33
c_rt_lib0clear(&___nl__7);
#line 33
c_rt_lib0clear(&___nl__8);
#line 33
return ___nl__9;
#line 33
c_rt_lib0clear(&___nl__9);
#line 33
goto label_70;
#line 33
label_70:
#line 33
c_rt_lib0clear(&___nl__8);
#line 34
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__3));
#line 35
c_rt_lib0move(&___nl__4, c_rt_lib0add_mod(___nl__4, ___nl__5));
#line 35
goto label_48;
#line 35
label_75:
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
c_rt_lib0move(&___nl__3, c_rt_lib0ov_mk_arg(___get_global_const(48), ___nl__2));
#line 36
c_rt_lib0clear(&___nl__0);
#line 36
c_rt_lib0clear(&___nl__1);
#line 36
c_rt_lib0clear(&___nl__2);
#line 36
return ___nl__3;
#line 36
c_rt_lib0clear(&___nl__3);
#line 36
c_rt_lib0clear(&___nl__1);
#line 36
c_rt_lib0clear(&___nl__2);
#line 36
c_rt_lib0clear(&___nl__0);
#line 36
return NULL;
}

ImmT string_utils0is_integer0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "string_utils0is_integer");
return string_utils0is_integer(_tab[0]);}
ImmT string_utils0is_integer(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
#line 40
c_rt_lib0move(&___nl__1,___get_global_const(2));
#line 40
c_rt_lib0move(&___nl__1, c_rt_lib0concat_new(___nl__0, ___nl__1));
#line 40
c_rt_lib0copy(&___nl__0, ___nl__1);
#line 40
c_rt_lib0clear(&___nl__1);
#line 41
c_rt_lib0move(&___nl__1, string_utils0is_integer_possibly_leading_zeros(___nl__0));
#line 41
c_rt_lib0move(&___nl__1, c_rt_lib0not(___nl__1));
#line 41
c_rt_lib0move(&___nl__1, c_rt_lib0not(___nl__1));
#line 41
if(c_rt_lib0check_true_native(___nl__1)){ goto label_14;}
#line 41
c_rt_lib0move(&___nl__2, c_rt_lib0get_false());
#line 41
c_rt_lib0clear(&___nl__0);
#line 41
c_rt_lib0clear(&___nl__1);
#line 41
return ___nl__2;
#line 41
c_rt_lib0clear(&___nl__2);
#line 41
goto label_14;
#line 41
label_14:
#line 41
c_rt_lib0clear(&___nl__1);
#line 42
c_rt_lib0move(&___nl__1,___get_global_const(0));
#line 42
c_rt_lib0move(&___nl__1, c_rt_lib0eq(___nl__0, ___nl__1));
#line 42
c_rt_lib0move(&___nl__1, c_rt_lib0not(___nl__1));
#line 42
if(c_rt_lib0check_true_native(___nl__1)){ goto label_26;}
#line 42
c_rt_lib0move(&___nl__2, c_rt_lib0get_true());
#line 42
c_rt_lib0clear(&___nl__0);
#line 42
c_rt_lib0clear(&___nl__1);
#line 42
return ___nl__2;
#line 42
c_rt_lib0clear(&___nl__2);
#line 42
goto label_26;
#line 42
label_26:
#line 42
c_rt_lib0clear(&___nl__1);
#line 43
c_rt_lib0move(&___nl__1,___get_global_const(0));
#line 44
c_rt_lib0move(&___nl__3,___get_global_const(1));
#line 44
c_rt_lib0move(&___nl__2, string0substr(___nl__0, ___nl__1, ___nl__3));
#line 44
c_rt_lib0clear(&___nl__3);
#line 44
c_rt_lib0move(&___nl__3,___get_global_const(296));
#line 44
c_rt_lib0move(&___nl__2, c_rt_lib0eq(___nl__2, ___nl__3));
#line 44
c_rt_lib0clear(&___nl__3);
#line 44
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 44
if(c_rt_lib0check_true_native(___nl__2)){ goto label_41;}
#line 44
c_rt_lib0move(&___nl__3,___get_global_const(1));
#line 44
c_rt_lib0move(&___nl__1, c_rt_lib0add_mod(___nl__1, ___nl__3));
#line 44
c_rt_lib0clear(&___nl__3);
#line 44
goto label_41;
#line 44
label_41:
#line 44
c_rt_lib0clear(&___nl__2);
#line 45
c_rt_lib0move(&___nl__3,___get_global_const(1));
#line 45
c_rt_lib0move(&___nl__2, string0substr(___nl__0, ___nl__1, ___nl__3));
#line 45
c_rt_lib0clear(&___nl__3);
#line 45
c_rt_lib0move(&___nl__3,___get_global_const(0));
#line 45
c_rt_lib0move(&___nl__2, c_rt_lib0eq(___nl__2, ___nl__3));
#line 45
c_rt_lib0clear(&___nl__3);
#line 45
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 45
if(c_rt_lib0check_true_native(___nl__2)){ goto label_58;}
#line 45
c_rt_lib0move(&___nl__3, c_rt_lib0get_false());
#line 45
c_rt_lib0clear(&___nl__0);
#line 45
c_rt_lib0clear(&___nl__1);
#line 45
c_rt_lib0clear(&___nl__2);
#line 45
return ___nl__3;
#line 45
c_rt_lib0clear(&___nl__3);
#line 45
goto label_58;
#line 45
label_58:
#line 45
c_rt_lib0clear(&___nl__2);
#line 46
c_rt_lib0move(&___nl__2, c_rt_lib0get_true());
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

ImmT string_utils0is_integer_possibly_leading_zeros0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "string_utils0is_integer_possibly_leading_zeros");
return string_utils0is_integer_possibly_leading_zeros(_tab[0]);}
ImmT string_utils0is_integer_possibly_leading_zeros(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
#line 50
c_rt_lib0move(&___nl__1,___get_global_const(2));
#line 50
c_rt_lib0move(&___nl__1, c_rt_lib0concat_new(___nl__0, ___nl__1));
#line 51
c_rt_lib0move(&___nl__2, string0length(___nl__1));
#line 52
c_rt_lib0move(&___nl__3,___get_global_const(0));
#line 53
c_rt_lib0move(&___nl__5,___get_global_const(1));
#line 53
c_rt_lib0move(&___nl__4, string0substr(___nl__1, ___nl__3, ___nl__5));
#line 53
c_rt_lib0clear(&___nl__5);
#line 53
c_rt_lib0move(&___nl__5,___get_global_const(296));
#line 53
c_rt_lib0move(&___nl__4, c_rt_lib0eq(___nl__4, ___nl__5));
#line 53
c_rt_lib0clear(&___nl__5);
#line 53
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 53
if(c_rt_lib0check_true_native(___nl__4)){ goto label_16;}
#line 53
c_rt_lib0move(&___nl__5,___get_global_const(1));
#line 53
c_rt_lib0move(&___nl__3, c_rt_lib0add_mod(___nl__3, ___nl__5));
#line 53
c_rt_lib0clear(&___nl__5);
#line 53
goto label_16;
#line 53
label_16:
#line 53
c_rt_lib0clear(&___nl__4);
#line 54
c_rt_lib0move(&___nl__4, c_rt_lib0num_eq(___nl__3, ___nl__2));
#line 54
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 54
if(c_rt_lib0check_true_native(___nl__4)){ goto label_30;}
#line 54
c_rt_lib0move(&___nl__5, c_rt_lib0get_false());
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
return ___nl__5;
#line 54
c_rt_lib0clear(&___nl__5);
#line 54
goto label_30;
#line 54
label_30:
#line 54
c_rt_lib0clear(&___nl__4);
#line 55
label_32:
#line 55
c_rt_lib0move(&___nl__4, c_rt_lib0lt(___nl__3, ___nl__2));
#line 55
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 55
if(c_rt_lib0check_true_native(___nl__4)){ goto label_60;}
#line 56
c_rt_lib0move(&___nl__7,___get_global_const(1));
#line 56
c_rt_lib0move(&___nl__6, string0substr(___nl__1, ___nl__3, ___nl__7));
#line 56
c_rt_lib0clear(&___nl__7);
#line 56
c_rt_lib0move(&___nl__5, string0is_digit(___nl__6));
#line 56
c_rt_lib0clear(&___nl__6);
#line 56
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 56
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 56
if(c_rt_lib0check_true_native(___nl__5)){ goto label_54;}
#line 56
c_rt_lib0move(&___nl__6, c_rt_lib0get_false());
#line 56
c_rt_lib0clear(&___nl__0);
#line 56
c_rt_lib0clear(&___nl__1);
#line 56
c_rt_lib0clear(&___nl__2);
#line 56
c_rt_lib0clear(&___nl__3);
#line 56
c_rt_lib0clear(&___nl__4);
#line 56
c_rt_lib0clear(&___nl__5);
#line 56
return ___nl__6;
#line 56
c_rt_lib0clear(&___nl__6);
#line 56
goto label_54;
#line 56
label_54:
#line 56
c_rt_lib0clear(&___nl__5);
#line 55
c_rt_lib0move(&___nl__5,___get_global_const(1));
#line 55
c_rt_lib0move(&___nl__3, c_rt_lib0add_mod(___nl__3, ___nl__5));
#line 55
c_rt_lib0clear(&___nl__5);
#line 57
goto label_32;
#line 57
label_60:
#line 57
c_rt_lib0clear(&___nl__4);
#line 58
c_rt_lib0move(&___nl__4, c_rt_lib0get_true());
#line 58
c_rt_lib0clear(&___nl__0);
#line 58
c_rt_lib0clear(&___nl__1);
#line 58
c_rt_lib0clear(&___nl__2);
#line 58
c_rt_lib0clear(&___nl__3);
#line 58
return ___nl__4;
#line 58
c_rt_lib0clear(&___nl__4);
#line 58
c_rt_lib0clear(&___nl__1);
#line 58
c_rt_lib0clear(&___nl__2);
#line 58
c_rt_lib0clear(&___nl__3);
#line 58
c_rt_lib0clear(&___nl__0);
#line 58
return NULL;
}

ImmT string_utils0is_float0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "string_utils0is_float");
return string_utils0is_float(_tab[0]);}
ImmT string_utils0is_float(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
#line 62
c_rt_lib0move(&___nl__1,___get_global_const(2));
#line 62
c_rt_lib0move(&___nl__1, c_rt_lib0concat_new(___nl__0, ___nl__1));
#line 63
c_rt_lib0move(&___nl__2, string0length(___nl__1));
#line 64
c_rt_lib0move(&___nl__3,___get_global_const(80));
#line 64
c_rt_lib0move(&___nl__3, c_rt_lib0lt(___nl__2, ___nl__3));
#line 64
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 64
if(c_rt_lib0check_true_native(___nl__3)){ goto label_15;}
#line 64
c_rt_lib0move(&___nl__4, c_rt_lib0get_false());
#line 64
c_rt_lib0clear(&___nl__0);
#line 64
c_rt_lib0clear(&___nl__1);
#line 64
c_rt_lib0clear(&___nl__2);
#line 64
c_rt_lib0clear(&___nl__3);
#line 64
return ___nl__4;
#line 64
c_rt_lib0clear(&___nl__4);
#line 64
goto label_15;
#line 64
label_15:
#line 64
c_rt_lib0clear(&___nl__3);
#line 65
c_rt_lib0move(&___nl__3,___get_global_const(0));
#line 66
c_rt_lib0move(&___nl__5,___get_global_const(1));
#line 66
c_rt_lib0move(&___nl__4, string0substr(___nl__1, ___nl__3, ___nl__5));
#line 66
c_rt_lib0clear(&___nl__5);
#line 66
c_rt_lib0move(&___nl__5,___get_global_const(296));
#line 66
c_rt_lib0move(&___nl__4, c_rt_lib0eq(___nl__4, ___nl__5));
#line 66
c_rt_lib0clear(&___nl__5);
#line 66
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 66
if(c_rt_lib0check_true_native(___nl__4)){ goto label_30;}
#line 66
c_rt_lib0move(&___nl__5,___get_global_const(1));
#line 66
c_rt_lib0move(&___nl__3, c_rt_lib0add_mod(___nl__3, ___nl__5));
#line 66
c_rt_lib0clear(&___nl__5);
#line 66
goto label_30;
#line 66
label_30:
#line 66
c_rt_lib0clear(&___nl__4);
#line 67
c_rt_lib0copy(&___nl__3, ___nl__3);
#line 67
label_33:
#line 67
c_rt_lib0move(&___nl__4, c_rt_lib0lt(___nl__3, ___nl__2));
#line 67
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 67
if(c_rt_lib0check_true_native(___nl__4)){ goto label_54;}
#line 68
c_rt_lib0move(&___nl__7,___get_global_const(1));
#line 68
c_rt_lib0move(&___nl__6, string0substr(___nl__1, ___nl__3, ___nl__7));
#line 68
c_rt_lib0clear(&___nl__7);
#line 68
c_rt_lib0move(&___nl__5, string0is_digit(___nl__6));
#line 68
c_rt_lib0clear(&___nl__6);
#line 68
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 68
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 68
if(c_rt_lib0check_true_native(___nl__5)){ goto label_48;}
#line 68
c_rt_lib0clear(&___nl__5);
#line 68
goto label_54;
#line 68
goto label_48;
#line 68
label_48:
#line 68
c_rt_lib0clear(&___nl__5);
#line 67
c_rt_lib0move(&___nl__5,___get_global_const(1));
#line 67
c_rt_lib0move(&___nl__3, c_rt_lib0add_mod(___nl__3, ___nl__5));
#line 67
c_rt_lib0clear(&___nl__5);
#line 69
goto label_33;
#line 69
label_54:
#line 69
c_rt_lib0clear(&___nl__4);
#line 70
c_rt_lib0move(&___nl__4,___get_global_const(1));
#line 70
c_rt_lib0move(&___nl__4, c_rt_lib0lt(___nl__3, ___nl__4));
#line 70
if(c_rt_lib0check_true_native(___nl__4)){ goto label_62;}
#line 70
c_rt_lib0move(&___nl__4,___get_global_const(6));
#line 70
c_rt_lib0move(&___nl__4, c_rt_lib0add(___nl__3, ___nl__4));
#line 70
c_rt_lib0move(&___nl__4, c_rt_lib0gt(___nl__4, ___nl__2));
#line 70
label_62:
#line 70
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 70
if(c_rt_lib0check_true_native(___nl__4)){ goto label_74;}
#line 70
c_rt_lib0move(&___nl__5, c_rt_lib0get_false());
#line 70
c_rt_lib0clear(&___nl__0);
#line 70
c_rt_lib0clear(&___nl__1);
#line 70
c_rt_lib0clear(&___nl__2);
#line 70
c_rt_lib0clear(&___nl__3);
#line 70
c_rt_lib0clear(&___nl__4);
#line 70
return ___nl__5;
#line 70
c_rt_lib0clear(&___nl__5);
#line 70
goto label_74;
#line 70
label_74:
#line 70
c_rt_lib0clear(&___nl__4);
#line 71
c_rt_lib0move(&___nl__5,___get_global_const(1));
#line 71
c_rt_lib0move(&___nl__4, string0substr(___nl__1, ___nl__3, ___nl__5));
#line 71
c_rt_lib0clear(&___nl__5);
#line 71
c_rt_lib0move(&___nl__5,___get_global_const(97));
#line 71
c_rt_lib0move(&___nl__4, c_rt_lib0eq(___nl__4, ___nl__5));
#line 71
c_rt_lib0clear(&___nl__5);
#line 71
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 71
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 71
if(c_rt_lib0check_true_native(___nl__4)){ goto label_94;}
#line 71
c_rt_lib0move(&___nl__5, c_rt_lib0get_false());
#line 71
c_rt_lib0clear(&___nl__0);
#line 71
c_rt_lib0clear(&___nl__1);
#line 71
c_rt_lib0clear(&___nl__2);
#line 71
c_rt_lib0clear(&___nl__3);
#line 71
c_rt_lib0clear(&___nl__4);
#line 71
return ___nl__5;
#line 71
c_rt_lib0clear(&___nl__5);
#line 71
goto label_94;
#line 71
label_94:
#line 71
c_rt_lib0clear(&___nl__4);
#line 72
c_rt_lib0move(&___nl__4,___get_global_const(1));
#line 72
c_rt_lib0move(&___nl__3, c_rt_lib0add_mod(___nl__3, ___nl__4));
#line 72
c_rt_lib0clear(&___nl__4);
#line 72
label_99:
#line 72
c_rt_lib0move(&___nl__4, c_rt_lib0lt(___nl__3, ___nl__2));
#line 72
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 72
if(c_rt_lib0check_true_native(___nl__4)){ goto label_127;}
#line 73
c_rt_lib0move(&___nl__7,___get_global_const(1));
#line 73
c_rt_lib0move(&___nl__6, string0substr(___nl__1, ___nl__3, ___nl__7));
#line 73
c_rt_lib0clear(&___nl__7);
#line 73
c_rt_lib0move(&___nl__5, string0is_digit(___nl__6));
#line 73
c_rt_lib0clear(&___nl__6);
#line 73
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 73
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 73
if(c_rt_lib0check_true_native(___nl__5)){ goto label_121;}
#line 73
c_rt_lib0move(&___nl__6, c_rt_lib0get_false());
#line 73
c_rt_lib0clear(&___nl__0);
#line 73
c_rt_lib0clear(&___nl__1);
#line 73
c_rt_lib0clear(&___nl__2);
#line 73
c_rt_lib0clear(&___nl__3);
#line 73
c_rt_lib0clear(&___nl__4);
#line 73
c_rt_lib0clear(&___nl__5);
#line 73
return ___nl__6;
#line 73
c_rt_lib0clear(&___nl__6);
#line 73
goto label_121;
#line 73
label_121:
#line 73
c_rt_lib0clear(&___nl__5);
#line 72
c_rt_lib0move(&___nl__5,___get_global_const(1));
#line 72
c_rt_lib0move(&___nl__3, c_rt_lib0add_mod(___nl__3, ___nl__5));
#line 72
c_rt_lib0clear(&___nl__5);
#line 74
goto label_99;
#line 74
label_127:
#line 74
c_rt_lib0clear(&___nl__4);
#line 75
c_rt_lib0move(&___nl__4, c_rt_lib0get_true());
#line 75
c_rt_lib0clear(&___nl__0);
#line 75
c_rt_lib0clear(&___nl__1);
#line 75
c_rt_lib0clear(&___nl__2);
#line 75
c_rt_lib0clear(&___nl__3);
#line 75
return ___nl__4;
#line 75
c_rt_lib0clear(&___nl__4);
#line 75
c_rt_lib0clear(&___nl__1);
#line 75
c_rt_lib0clear(&___nl__2);
#line 75
c_rt_lib0clear(&___nl__3);
#line 75
c_rt_lib0clear(&___nl__0);
#line 75
return NULL;
}

ImmT string_utils0is_number0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "string_utils0is_number");
return string_utils0is_number(_tab[0]);}
ImmT string_utils0is_number(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
#line 79
c_rt_lib0move(&___nl__1,___get_global_const(2));
#line 79
c_rt_lib0move(&___nl__1, c_rt_lib0concat_new(___nl__0, ___nl__1));
#line 80
c_rt_lib0move(&___nl__2, string_utils0is_integer(___nl__1));
#line 80
if(c_rt_lib0check_true_native(___nl__2)){ goto label_5;}
#line 80
c_rt_lib0move(&___nl__2, string_utils0is_float(___nl__1));
#line 80
label_5:
#line 80
c_rt_lib0clear(&___nl__0);
#line 80
c_rt_lib0clear(&___nl__1);
#line 80
return ___nl__2;
#line 80
c_rt_lib0clear(&___nl__2);
#line 80
c_rt_lib0clear(&___nl__1);
#line 80
c_rt_lib0clear(&___nl__0);
#line 80
return NULL;
}

ImmT string_utils0get_number0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "string_utils0get_number");
return string_utils0get_number(_tab[0]);}
ImmT string_utils0get_number(ImmT ___nl__0) {
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
#line 84
c_rt_lib0move(&___nl__1,___get_global_const(2));
#line 84
c_rt_lib0move(&___nl__1, c_rt_lib0eq(___nl__0, ___nl__1));
#line 84
if(c_rt_lib0check_true_native(___nl__1)){ goto label_5;}
#line 84
c_rt_lib0move(&___nl__1,___get_global_const(296));
#line 84
c_rt_lib0move(&___nl__1, c_rt_lib0eq(___nl__0, ___nl__1));
#line 84
label_5:
#line 84
c_rt_lib0move(&___nl__1, c_rt_lib0not(___nl__1));
#line 84
if(c_rt_lib0check_true_native(___nl__1)){ goto label_14;}
#line 84
c_rt_lib0move(&___nl__2, c_rt_lib0ov_mk_none(___get_global_const(47)));
#line 84
c_rt_lib0clear(&___nl__0);
#line 84
c_rt_lib0clear(&___nl__1);
#line 84
return ___nl__2;
#line 84
c_rt_lib0clear(&___nl__2);
#line 84
goto label_14;
#line 84
label_14:
#line 84
c_rt_lib0clear(&___nl__1);
#line 85
c_rt_lib0move(&___nl__2,___get_global_const(2));
#line 85
c_rt_lib0move(&___nl__1, string0split(___nl__2, ___nl__0));
#line 85
c_rt_lib0clear(&___nl__2);
#line 86
c_rt_lib0move(&___nl__2,___get_global_const(2));
#line 87
c_rt_lib0move(&___nl__4,___get_global_const(0));
#line 87
c_rt_lib0move(&___nl__3, c_rt_lib0array_get(___nl__1, ___nl__4));
#line 87
c_rt_lib0clear(&___nl__4);
#line 87
c_rt_lib0move(&___nl__4,___get_global_const(296));
#line 87
c_rt_lib0move(&___nl__3, c_rt_lib0eq(___nl__3, ___nl__4));
#line 87
c_rt_lib0clear(&___nl__4);
#line 87
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 87
if(c_rt_lib0check_true_native(___nl__3)){ goto label_61;}
#line 88
c_rt_lib0move(&___nl__5,___get_global_const(1));
#line 88
c_rt_lib0move(&___nl__6, array0len(___nl__1));
#line 88
c_rt_lib0move(&___nl__7,___get_global_const(1));
#line 88
c_rt_lib0move(&___nl__6, c_rt_lib0sub_mod(___nl__6, ___nl__7));
#line 88
c_rt_lib0clear(&___nl__7);
#line 88
c_rt_lib0move(&___nl__4, array0subarray(___nl__1, ___nl__5, ___nl__6));
#line 88
c_rt_lib0clear(&___nl__6);
#line 88
c_rt_lib0clear(&___nl__5);
#line 88
c_rt_lib0copy(&___nl__1, ___nl__4);
#line 88
c_rt_lib0clear(&___nl__4);
#line 89
c_rt_lib0move(&___nl__6,___get_global_const(0));
#line 89
c_rt_lib0move(&___nl__5, c_rt_lib0array_get(___nl__1, ___nl__6));
#line 89
c_rt_lib0clear(&___nl__6);
#line 89
c_rt_lib0move(&___nl__4, string_utils0is_int(___nl__5));
#line 89
c_rt_lib0clear(&___nl__5);
#line 89
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 89
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 89
if(c_rt_lib0check_true_native(___nl__4)){ goto label_55;}
#line 89
c_rt_lib0move(&___nl__5, c_rt_lib0ov_mk_none(___get_global_const(47)));
#line 89
c_rt_lib0clear(&___nl__0);
#line 89
c_rt_lib0clear(&___nl__1);
#line 89
c_rt_lib0clear(&___nl__2);
#line 89
c_rt_lib0clear(&___nl__3);
#line 89
c_rt_lib0clear(&___nl__4);
#line 89
return ___nl__5;
#line 89
c_rt_lib0clear(&___nl__5);
#line 89
goto label_55;
#line 89
label_55:
#line 89
c_rt_lib0clear(&___nl__4);
#line 90
c_rt_lib0move(&___nl__4,___get_global_const(296));
#line 90
c_rt_lib0copy(&___nl__2, ___nl__4);
#line 90
c_rt_lib0clear(&___nl__4);
#line 91
goto label_61;
#line 91
label_61:
#line 91
c_rt_lib0clear(&___nl__3);
#line 92
c_rt_lib0move(&___nl__3, c_rt_lib0get_false());
#line 93
c_rt_lib0move(&___nl__5,___get_global_const(0));
#line 93
c_rt_lib0move(&___nl__6,___get_global_const(1));
#line 93
c_rt_lib0move(&___nl__7, c_rt_lib0array_len(___nl__1));
#line 93
label_67:
#line 93
c_rt_lib0move(&___nl__8, c_rt_lib0ge(___nl__5, ___nl__7));
#line 93
if(c_rt_lib0check_true_native(___nl__8)){ goto label_113;}
#line 93
c_rt_lib0move(&___nl__4, c_rt_lib0array_get(___nl__1, ___nl__5));
#line 94
c_rt_lib0move(&___nl__9, string_utils0is_int(___nl__4));
#line 94
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__9));
#line 94
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__9));
#line 94
if(c_rt_lib0check_true_native(___nl__9)){ goto label_108;}
#line 95
c_rt_lib0move(&___nl__10,___get_global_const(97));
#line 95
c_rt_lib0move(&___nl__10, c_rt_lib0eq(___nl__4, ___nl__10));
#line 95
c_rt_lib0move(&___nl__11, c_rt_lib0not(___nl__10));
#line 95
if(c_rt_lib0check_true_native(___nl__11)){ goto label_81;}
#line 95
c_rt_lib0copy(&___nl__10, ___nl__3);
#line 95
c_rt_lib0move(&___nl__10, c_rt_lib0not(___nl__10));
#line 95
label_81:
#line 95
c_rt_lib0clear(&___nl__11);
#line 95
c_rt_lib0move(&___nl__10, c_rt_lib0not(___nl__10));
#line 95
if(c_rt_lib0check_true_native(___nl__10)){ goto label_89;}
#line 96
c_rt_lib0move(&___nl__11, c_rt_lib0get_true());
#line 96
c_rt_lib0copy(&___nl__3, ___nl__11);
#line 96
c_rt_lib0clear(&___nl__11);
#line 97
goto label_105;
#line 97
label_89:
#line 98
c_rt_lib0move(&___nl__11, c_rt_lib0ov_mk_none(___get_global_const(47)));
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
return ___nl__11;
#line 98
c_rt_lib0clear(&___nl__11);
#line 99
goto label_105;
#line 99
label_105:
#line 99
c_rt_lib0clear(&___nl__10);
#line 100
goto label_108;
#line 100
label_108:
#line 100
c_rt_lib0clear(&___nl__9);
#line 101
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__4));
#line 102
c_rt_lib0move(&___nl__5, c_rt_lib0add_mod(___nl__5, ___nl__6));
#line 102
goto label_67;
#line 102
label_113:
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
#line 103
c_rt_lib0move(&___nl__4,___get_global_const(97));
#line 103
c_rt_lib0move(&___nl__4, c_rt_lib0eq(___nl__2, ___nl__4));
#line 103
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 103
if(c_rt_lib0check_true_native(___nl__4)){ goto label_132;}
#line 103
c_rt_lib0move(&___nl__5, c_rt_lib0ov_mk_none(___get_global_const(47)));
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
return ___nl__5;
#line 103
c_rt_lib0clear(&___nl__5);
#line 103
goto label_132;
#line 103
label_132:
#line 103
c_rt_lib0clear(&___nl__4);
#line 104
c_rt_lib0move(&___nl__4, c_rt_lib0ov_mk_arg(___get_global_const(48), ___nl__2));
#line 104
c_rt_lib0clear(&___nl__0);
#line 104
c_rt_lib0clear(&___nl__1);
#line 104
c_rt_lib0clear(&___nl__2);
#line 104
c_rt_lib0clear(&___nl__3);
#line 104
return ___nl__4;
#line 104
c_rt_lib0clear(&___nl__4);
#line 104
c_rt_lib0clear(&___nl__1);
#line 104
c_rt_lib0clear(&___nl__2);
#line 104
c_rt_lib0clear(&___nl__3);
#line 104
c_rt_lib0clear(&___nl__0);
#line 104
return NULL;
}

ImmT string_utils_priv0eat_ws(ImmT ___nl__0,ImmT * ___ref___1) {
c_rt_lib0arg_val(___nl__0);
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
#line 108
label_0:
#line 108
c_rt_lib0move(&___nl__2, array0len(___nl__0));
#line 108
c_rt_lib0move(&___nl__2, c_rt_lib0lt(*___ref___1, ___nl__2));
#line 108
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__2));
#line 108
if(c_rt_lib0check_true_native(___nl__3)){ goto label_8;}
#line 108
c_rt_lib0move(&___nl__4, c_rt_lib0array_get(___nl__0, *___ref___1));
#line 108
c_rt_lib0move(&___nl__2, string_utils0is_whitespace(___nl__4));
#line 108
c_rt_lib0clear(&___nl__4);
#line 108
label_8:
#line 108
c_rt_lib0clear(&___nl__3);
#line 108
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 108
if(c_rt_lib0check_true_native(___nl__2)){ goto label_16;}
#line 108
c_rt_lib0move(&___nl__3,___get_global_const(1));
#line 108
c_rt_lib0move(___ref___1, c_rt_lib0add_mod(*___ref___1, ___nl__3));
#line 108
c_rt_lib0clear(&___nl__3);
#line 108
goto label_0;
#line 108
label_16:
#line 108
c_rt_lib0clear(&___nl__2);
#line 109
c_rt_lib0move(&___nl__2, array0len(___nl__0));
#line 109
c_rt_lib0move(&___nl__2, c_rt_lib0num_eq(*___ref___1, ___nl__2));
#line 109
c_rt_lib0clear(&___nl__0);
#line 109
return ___nl__2;
#line 109
c_rt_lib0clear(&___nl__2);
#line 109
c_rt_lib0clear(&___nl__0);
#line 109
return NULL;
}

ImmT string_utils_priv0get_number(ImmT ___nl__0,ImmT * ___ref___1) {
c_rt_lib0arg_val(___nl__0);
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
#line 113
c_rt_lib0move(&___nl__2,___get_global_const(2));
#line 114
c_rt_lib0move(&___nl__3, c_rt_lib0array_get(___nl__0, *___ref___1));
#line 114
c_rt_lib0move(&___nl__4,___get_global_const(296));
#line 114
c_rt_lib0move(&___nl__3, c_rt_lib0eq(___nl__3, ___nl__4));
#line 114
c_rt_lib0clear(&___nl__4);
#line 114
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 114
if(c_rt_lib0check_true_native(___nl__3)){ goto label_14;}
#line 115
c_rt_lib0move(&___nl__4,___get_global_const(1));
#line 115
c_rt_lib0move(___ref___1, c_rt_lib0add_mod(*___ref___1, ___nl__4));
#line 115
c_rt_lib0clear(&___nl__4);
#line 116
c_rt_lib0move(&___nl__4,___get_global_const(296));
#line 116
c_rt_lib0copy(&___nl__2, ___nl__4);
#line 116
c_rt_lib0clear(&___nl__4);
#line 117
goto label_14;
#line 117
label_14:
#line 117
c_rt_lib0clear(&___nl__3);
#line 118
c_rt_lib0move(&___nl__3, c_rt_lib0get_false());
#line 119
label_17:
#line 119
c_rt_lib0move(&___nl__4, array0len(___nl__0));
#line 119
c_rt_lib0move(&___nl__4, c_rt_lib0lt(*___ref___1, ___nl__4));
#line 119
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 119
if(c_rt_lib0check_true_native(___nl__4)){ goto label_53;}
#line 120
c_rt_lib0move(&___nl__5, c_rt_lib0array_get(___nl__0, *___ref___1));
#line 121
c_rt_lib0move(&___nl__6, string_utils0is_int(___nl__5));
#line 121
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 121
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 121
if(c_rt_lib0check_true_native(___nl__6)){ goto label_45;}
#line 122
c_rt_lib0move(&___nl__7,___get_global_const(97));
#line 122
c_rt_lib0move(&___nl__7, c_rt_lib0ne(___nl__5, ___nl__7));
#line 122
if(c_rt_lib0check_true_native(___nl__7)){ goto label_31;}
#line 122
c_rt_lib0copy(&___nl__7, ___nl__3);
#line 122
label_31:
#line 122
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 122
if(c_rt_lib0check_true_native(___nl__7)){ goto label_39;}
#line 122
c_rt_lib0clear(&___nl__5);
#line 122
c_rt_lib0clear(&___nl__6);
#line 122
c_rt_lib0clear(&___nl__7);
#line 122
goto label_53;
#line 122
goto label_39;
#line 122
label_39:
#line 122
c_rt_lib0clear(&___nl__7);
#line 123
c_rt_lib0move(&___nl__7, c_rt_lib0get_true());
#line 123
c_rt_lib0copy(&___nl__3, ___nl__7);
#line 123
c_rt_lib0clear(&___nl__7);
#line 124
goto label_45;
#line 124
label_45:
#line 124
c_rt_lib0clear(&___nl__6);
#line 125
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__5));
#line 126
c_rt_lib0move(&___nl__6,___get_global_const(1));
#line 126
c_rt_lib0move(___ref___1, c_rt_lib0add_mod(*___ref___1, ___nl__6));
#line 126
c_rt_lib0clear(&___nl__6);
#line 126
c_rt_lib0clear(&___nl__5);
#line 127
goto label_17;
#line 127
label_53:
#line 127
c_rt_lib0clear(&___nl__4);
#line 128
c_rt_lib0move(&___nl__4,___get_global_const(2));
#line 128
c_rt_lib0move(&___nl__4, c_rt_lib0eq(___nl__2, ___nl__4));
#line 128
if(c_rt_lib0check_true_native(___nl__4)){ goto label_60;}
#line 128
c_rt_lib0move(&___nl__4,___get_global_const(296));
#line 128
c_rt_lib0move(&___nl__4, c_rt_lib0eq(___nl__2, ___nl__4));
#line 128
label_60:
#line 128
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 128
if(c_rt_lib0check_true_native(___nl__4)){ goto label_71;}
#line 128
c_rt_lib0move(&___nl__5, c_rt_lib0ov_mk_none(___get_global_const(47)));
#line 128
c_rt_lib0clear(&___nl__0);
#line 128
c_rt_lib0clear(&___nl__2);
#line 128
c_rt_lib0clear(&___nl__3);
#line 128
c_rt_lib0clear(&___nl__4);
#line 128
return ___nl__5;
#line 128
c_rt_lib0clear(&___nl__5);
#line 128
goto label_71;
#line 128
label_71:
#line 128
c_rt_lib0clear(&___nl__4);
#line 129
c_rt_lib0move(&___nl__4, c_rt_lib0ov_mk_arg(___get_global_const(48), ___nl__2));
#line 129
c_rt_lib0clear(&___nl__0);
#line 129
c_rt_lib0clear(&___nl__2);
#line 129
c_rt_lib0clear(&___nl__3);
#line 129
return ___nl__4;
#line 129
c_rt_lib0clear(&___nl__4);
#line 129
c_rt_lib0clear(&___nl__2);
#line 129
c_rt_lib0clear(&___nl__3);
#line 129
c_rt_lib0clear(&___nl__0);
#line 129
return NULL;
}

ImmT string_utils_priv0cal_expr(ImmT ___nl__0,ImmT * ___ref___1,ImmT ___nl__2) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__2);
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
ImmT ___nl__9 = NULL;
#line 133
c_rt_lib0move(&___nl__3, string_utils_priv0eat_ws(___nl__0, ___ref___1));
#line 133
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 133
if(c_rt_lib0check_true_native(___nl__3)){ goto label_10;}
#line 133
c_rt_lib0move(&___nl__4, c_rt_lib0ov_mk_none(___get_global_const(47)));
#line 133
c_rt_lib0clear(&___nl__0);
#line 133
c_rt_lib0clear(&___nl__2);
#line 133
c_rt_lib0clear(&___nl__3);
#line 133
return ___nl__4;
#line 133
c_rt_lib0clear(&___nl__4);
#line 133
goto label_10;
#line 133
label_10:
#line 133
c_rt_lib0clear(&___nl__3);
#line 135
c_rt_lib0move(&___nl__4, c_rt_lib0array_get(___nl__0, *___ref___1));
#line 135
c_rt_lib0move(&___nl__5,___get_global_const(373));
#line 135
c_rt_lib0move(&___nl__4, c_rt_lib0eq(___nl__4, ___nl__5));
#line 135
c_rt_lib0clear(&___nl__5);
#line 135
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 135
if(c_rt_lib0check_true_native(___nl__4)){ goto label_72;}
#line 136
c_rt_lib0move(&___nl__5,___get_global_const(1));
#line 136
c_rt_lib0move(___ref___1, c_rt_lib0add_mod(*___ref___1, ___nl__5));
#line 136
c_rt_lib0clear(&___nl__5);
#line 137
c_rt_lib0move(&___nl__7,___get_global_const(0));
#line 137
c_rt_lib0move(&___nl__6, string_utils_priv0cal_expr(___nl__0, ___ref___1, ___nl__7));
#line 137
c_rt_lib0clear(&___nl__7);
#line 137
c_rt_lib0move(&___nl__5, c_rt_lib0priv_is(___nl__6, ___get_global_const(48)));
#line 137
if(c_rt_lib0check_true_native(___nl__5)){ goto label_32;}
#line 137
c_rt_lib0clear(&___nl__0);
#line 137
c_rt_lib0clear(&___nl__2);
#line 137
c_rt_lib0clear(&___nl__3);
#line 137
c_rt_lib0clear(&___nl__4);
#line 137
c_rt_lib0clear(&___nl__5);
#line 137
return ___nl__6;
#line 137
label_32:
#line 137
c_rt_lib0move(&___nl__3, c_rt_lib0priv_as(___nl__6, ___get_global_const(48)));
#line 137
c_rt_lib0clear(&___nl__5);
#line 137
c_rt_lib0clear(&___nl__6);
#line 138
c_rt_lib0move(&___nl__5, string_utils_priv0eat_ws(___nl__0, ___ref___1));
#line 138
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 138
if(c_rt_lib0check_true_native(___nl__5)){ goto label_48;}
#line 138
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_none(___get_global_const(47)));
#line 138
c_rt_lib0clear(&___nl__0);
#line 138
c_rt_lib0clear(&___nl__2);
#line 138
c_rt_lib0clear(&___nl__3);
#line 138
c_rt_lib0clear(&___nl__4);
#line 138
c_rt_lib0clear(&___nl__5);
#line 138
return ___nl__6;
#line 138
c_rt_lib0clear(&___nl__6);
#line 138
goto label_48;
#line 138
label_48:
#line 138
c_rt_lib0clear(&___nl__5);
#line 139
c_rt_lib0move(&___nl__5, c_rt_lib0array_get(___nl__0, *___ref___1));
#line 139
c_rt_lib0move(&___nl__6,___get_global_const(260));
#line 139
c_rt_lib0move(&___nl__5, c_rt_lib0eq(___nl__5, ___nl__6));
#line 139
c_rt_lib0clear(&___nl__6);
#line 139
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 139
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 139
if(c_rt_lib0check_true_native(___nl__5)){ goto label_66;}
#line 139
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_none(___get_global_const(47)));
#line 139
c_rt_lib0clear(&___nl__0);
#line 139
c_rt_lib0clear(&___nl__2);
#line 139
c_rt_lib0clear(&___nl__3);
#line 139
c_rt_lib0clear(&___nl__4);
#line 139
c_rt_lib0clear(&___nl__5);
#line 139
return ___nl__6;
#line 139
c_rt_lib0clear(&___nl__6);
#line 139
goto label_66;
#line 139
label_66:
#line 139
c_rt_lib0clear(&___nl__5);
#line 140
c_rt_lib0move(&___nl__5,___get_global_const(1));
#line 140
c_rt_lib0move(___ref___1, c_rt_lib0add_mod(*___ref___1, ___nl__5));
#line 140
c_rt_lib0clear(&___nl__5);
#line 141
goto label_87;
#line 141
label_72:
#line 142
c_rt_lib0move(&___nl__6, string_utils_priv0get_number(___nl__0, ___ref___1));
#line 142
c_rt_lib0move(&___nl__5, c_rt_lib0priv_is(___nl__6, ___get_global_const(48)));
#line 142
if(c_rt_lib0check_true_native(___nl__5)){ goto label_82;}
#line 142
c_rt_lib0clear(&___nl__0);
#line 142
c_rt_lib0clear(&___nl__2);
#line 142
c_rt_lib0clear(&___nl__3);
#line 142
c_rt_lib0clear(&___nl__4);
#line 142
c_rt_lib0clear(&___nl__5);
#line 142
return ___nl__6;
#line 142
label_82:
#line 142
c_rt_lib0move(&___nl__3, c_rt_lib0priv_as(___nl__6, ___get_global_const(48)));
#line 142
c_rt_lib0clear(&___nl__5);
#line 142
c_rt_lib0clear(&___nl__6);
#line 143
goto label_87;
#line 143
label_87:
#line 143
c_rt_lib0clear(&___nl__4);
#line 144
label_89:
#line 145
c_rt_lib0move(&___nl__4, string_utils_priv0eat_ws(___nl__0, ___ref___1));
#line 145
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 145
if(c_rt_lib0check_true_native(___nl__4)){ goto label_101;}
#line 145
c_rt_lib0move(&___nl__5, c_rt_lib0ov_mk_arg(___get_global_const(48), ___nl__3));
#line 145
c_rt_lib0clear(&___nl__0);
#line 145
c_rt_lib0clear(&___nl__2);
#line 145
c_rt_lib0clear(&___nl__3);
#line 145
c_rt_lib0clear(&___nl__4);
#line 145
return ___nl__5;
#line 145
c_rt_lib0clear(&___nl__5);
#line 145
goto label_101;
#line 145
label_101:
#line 145
c_rt_lib0clear(&___nl__4);
#line 146
c_rt_lib0move(&___nl__4, c_rt_lib0array_get(___nl__0, *___ref___1));
#line 147
c_rt_lib0move(&___nl__5,___get_global_const(304));
#line 147
c_rt_lib0move(&___nl__5, c_rt_lib0eq(___nl__4, ___nl__5));
#line 147
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 147
if(c_rt_lib0check_true_native(___nl__5)){ goto label_147;}
#line 148
c_rt_lib0move(&___nl__6,___get_global_const(78));
#line 148
c_rt_lib0move(&___nl__6, c_rt_lib0ge(___nl__2, ___nl__6));
#line 148
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 148
if(c_rt_lib0check_true_native(___nl__6)){ goto label_122;}
#line 148
c_rt_lib0move(&___nl__7, c_rt_lib0ov_mk_arg(___get_global_const(48), ___nl__3));
#line 148
c_rt_lib0clear(&___nl__0);
#line 148
c_rt_lib0clear(&___nl__2);
#line 148
c_rt_lib0clear(&___nl__3);
#line 148
c_rt_lib0clear(&___nl__4);
#line 148
c_rt_lib0clear(&___nl__5);
#line 148
c_rt_lib0clear(&___nl__6);
#line 148
return ___nl__7;
#line 148
c_rt_lib0clear(&___nl__7);
#line 148
goto label_122;
#line 148
label_122:
#line 148
c_rt_lib0clear(&___nl__6);
#line 149
c_rt_lib0move(&___nl__6,___get_global_const(1));
#line 149
c_rt_lib0move(___ref___1, c_rt_lib0add_mod(*___ref___1, ___nl__6));
#line 149
c_rt_lib0clear(&___nl__6);
#line 150
c_rt_lib0move(&___nl__9,___get_global_const(78));
#line 150
c_rt_lib0move(&___nl__8, string_utils_priv0cal_expr(___nl__0, ___ref___1, ___nl__9));
#line 150
c_rt_lib0clear(&___nl__9);
#line 150
c_rt_lib0move(&___nl__7, c_rt_lib0priv_is(___nl__8, ___get_global_const(48)));
#line 150
if(c_rt_lib0check_true_native(___nl__7)){ goto label_140;}
#line 150
c_rt_lib0clear(&___nl__0);
#line 150
c_rt_lib0clear(&___nl__2);
#line 150
c_rt_lib0clear(&___nl__3);
#line 150
c_rt_lib0clear(&___nl__4);
#line 150
c_rt_lib0clear(&___nl__5);
#line 150
c_rt_lib0clear(&___nl__6);
#line 150
c_rt_lib0clear(&___nl__7);
#line 150
return ___nl__8;
#line 150
label_140:
#line 150
c_rt_lib0move(&___nl__6, c_rt_lib0priv_as(___nl__8, ___get_global_const(48)));
#line 150
c_rt_lib0clear(&___nl__7);
#line 150
c_rt_lib0clear(&___nl__8);
#line 151
c_rt_lib0move(&___nl__3, c_rt_lib0mul_mod(___nl__3, ___nl__6));
#line 151
c_rt_lib0clear(&___nl__6);
#line 152
goto label_367;
#line 152
label_147:
#line 152
c_rt_lib0move(&___nl__5,___get_global_const(77));
#line 152
c_rt_lib0move(&___nl__5, c_rt_lib0eq(___nl__4, ___nl__5));
#line 152
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 152
if(c_rt_lib0check_true_native(___nl__5)){ goto label_193;}
#line 153
c_rt_lib0move(&___nl__6,___get_global_const(78));
#line 153
c_rt_lib0move(&___nl__6, c_rt_lib0ge(___nl__2, ___nl__6));
#line 153
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 153
if(c_rt_lib0check_true_native(___nl__6)){ goto label_166;}
#line 153
c_rt_lib0move(&___nl__7, c_rt_lib0ov_mk_arg(___get_global_const(48), ___nl__3));
#line 153
c_rt_lib0clear(&___nl__0);
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
return ___nl__7;
#line 153
c_rt_lib0clear(&___nl__7);
#line 153
goto label_166;
#line 153
label_166:
#line 153
c_rt_lib0clear(&___nl__6);
#line 154
c_rt_lib0move(&___nl__6,___get_global_const(1));
#line 154
c_rt_lib0move(___ref___1, c_rt_lib0add_mod(*___ref___1, ___nl__6));
#line 154
c_rt_lib0clear(&___nl__6);
#line 155
c_rt_lib0move(&___nl__9,___get_global_const(78));
#line 155
c_rt_lib0move(&___nl__8, string_utils_priv0cal_expr(___nl__0, ___ref___1, ___nl__9));
#line 155
c_rt_lib0clear(&___nl__9);
#line 155
c_rt_lib0move(&___nl__7, c_rt_lib0priv_is(___nl__8, ___get_global_const(48)));
#line 155
if(c_rt_lib0check_true_native(___nl__7)){ goto label_184;}
#line 155
c_rt_lib0clear(&___nl__0);
#line 155
c_rt_lib0clear(&___nl__2);
#line 155
c_rt_lib0clear(&___nl__3);
#line 155
c_rt_lib0clear(&___nl__4);
#line 155
c_rt_lib0clear(&___nl__5);
#line 155
c_rt_lib0clear(&___nl__6);
#line 155
c_rt_lib0clear(&___nl__7);
#line 155
return ___nl__8;
#line 155
label_184:
#line 155
c_rt_lib0move(&___nl__6, c_rt_lib0priv_as(___nl__8, ___get_global_const(48)));
#line 155
c_rt_lib0clear(&___nl__7);
#line 155
c_rt_lib0clear(&___nl__8);
#line 156
c_rt_lib0move(&___nl__7, c_rt_lib0div(___nl__3, ___nl__6));
#line 156
c_rt_lib0copy(&___nl__3, ___nl__7);
#line 156
c_rt_lib0clear(&___nl__7);
#line 156
c_rt_lib0clear(&___nl__6);
#line 157
goto label_367;
#line 157
label_193:
#line 157
c_rt_lib0move(&___nl__5,___get_global_const(307));
#line 157
c_rt_lib0move(&___nl__5, c_rt_lib0eq(___nl__4, ___nl__5));
#line 157
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 157
if(c_rt_lib0check_true_native(___nl__5)){ goto label_239;}
#line 158
c_rt_lib0move(&___nl__6,___get_global_const(78));
#line 158
c_rt_lib0move(&___nl__6, c_rt_lib0ge(___nl__2, ___nl__6));
#line 158
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 158
if(c_rt_lib0check_true_native(___nl__6)){ goto label_212;}
#line 158
c_rt_lib0move(&___nl__7, c_rt_lib0ov_mk_arg(___get_global_const(48), ___nl__3));
#line 158
c_rt_lib0clear(&___nl__0);
#line 158
c_rt_lib0clear(&___nl__2);
#line 158
c_rt_lib0clear(&___nl__3);
#line 158
c_rt_lib0clear(&___nl__4);
#line 158
c_rt_lib0clear(&___nl__5);
#line 158
c_rt_lib0clear(&___nl__6);
#line 158
return ___nl__7;
#line 158
c_rt_lib0clear(&___nl__7);
#line 158
goto label_212;
#line 158
label_212:
#line 158
c_rt_lib0clear(&___nl__6);
#line 159
c_rt_lib0move(&___nl__6,___get_global_const(1));
#line 159
c_rt_lib0move(___ref___1, c_rt_lib0add_mod(*___ref___1, ___nl__6));
#line 159
c_rt_lib0clear(&___nl__6);
#line 160
c_rt_lib0move(&___nl__9,___get_global_const(78));
#line 160
c_rt_lib0move(&___nl__8, string_utils_priv0cal_expr(___nl__0, ___ref___1, ___nl__9));
#line 160
c_rt_lib0clear(&___nl__9);
#line 160
c_rt_lib0move(&___nl__7, c_rt_lib0priv_is(___nl__8, ___get_global_const(48)));
#line 160
if(c_rt_lib0check_true_native(___nl__7)){ goto label_230;}
#line 160
c_rt_lib0clear(&___nl__0);
#line 160
c_rt_lib0clear(&___nl__2);
#line 160
c_rt_lib0clear(&___nl__3);
#line 160
c_rt_lib0clear(&___nl__4);
#line 160
c_rt_lib0clear(&___nl__5);
#line 160
c_rt_lib0clear(&___nl__6);
#line 160
c_rt_lib0clear(&___nl__7);
#line 160
return ___nl__8;
#line 160
label_230:
#line 160
c_rt_lib0move(&___nl__6, c_rt_lib0priv_as(___nl__8, ___get_global_const(48)));
#line 160
c_rt_lib0clear(&___nl__7);
#line 160
c_rt_lib0clear(&___nl__8);
#line 161
c_rt_lib0move(&___nl__7, c_rt_lib0mod(___nl__3, ___nl__6));
#line 161
c_rt_lib0copy(&___nl__3, ___nl__7);
#line 161
c_rt_lib0clear(&___nl__7);
#line 161
c_rt_lib0clear(&___nl__6);
#line 162
goto label_367;
#line 162
label_239:
#line 162
c_rt_lib0move(&___nl__5,___get_global_const(298));
#line 162
c_rt_lib0move(&___nl__5, c_rt_lib0eq(___nl__4, ___nl__5));
#line 162
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 162
if(c_rt_lib0check_true_native(___nl__5)){ goto label_283;}
#line 163
c_rt_lib0move(&___nl__6,___get_global_const(6));
#line 163
c_rt_lib0move(&___nl__6, c_rt_lib0ge(___nl__2, ___nl__6));
#line 163
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 163
if(c_rt_lib0check_true_native(___nl__6)){ goto label_258;}
#line 163
c_rt_lib0move(&___nl__7, c_rt_lib0ov_mk_arg(___get_global_const(48), ___nl__3));
#line 163
c_rt_lib0clear(&___nl__0);
#line 163
c_rt_lib0clear(&___nl__2);
#line 163
c_rt_lib0clear(&___nl__3);
#line 163
c_rt_lib0clear(&___nl__4);
#line 163
c_rt_lib0clear(&___nl__5);
#line 163
c_rt_lib0clear(&___nl__6);
#line 163
return ___nl__7;
#line 163
c_rt_lib0clear(&___nl__7);
#line 163
goto label_258;
#line 163
label_258:
#line 163
c_rt_lib0clear(&___nl__6);
#line 164
c_rt_lib0move(&___nl__6,___get_global_const(1));
#line 164
c_rt_lib0move(___ref___1, c_rt_lib0add_mod(*___ref___1, ___nl__6));
#line 164
c_rt_lib0clear(&___nl__6);
#line 165
c_rt_lib0move(&___nl__9,___get_global_const(6));
#line 165
c_rt_lib0move(&___nl__8, string_utils_priv0cal_expr(___nl__0, ___ref___1, ___nl__9));
#line 165
c_rt_lib0clear(&___nl__9);
#line 165
c_rt_lib0move(&___nl__7, c_rt_lib0priv_is(___nl__8, ___get_global_const(48)));
#line 165
if(c_rt_lib0check_true_native(___nl__7)){ goto label_276;}
#line 165
c_rt_lib0clear(&___nl__0);
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
#line 165
c_rt_lib0clear(&___nl__7);
#line 165
return ___nl__8;
#line 165
label_276:
#line 165
c_rt_lib0move(&___nl__6, c_rt_lib0priv_as(___nl__8, ___get_global_const(48)));
#line 165
c_rt_lib0clear(&___nl__7);
#line 165
c_rt_lib0clear(&___nl__8);
#line 166
c_rt_lib0move(&___nl__3, c_rt_lib0add_mod(___nl__3, ___nl__6));
#line 166
c_rt_lib0clear(&___nl__6);
#line 167
goto label_367;
#line 167
label_283:
#line 167
c_rt_lib0move(&___nl__5,___get_global_const(296));
#line 167
c_rt_lib0move(&___nl__5, c_rt_lib0eq(___nl__4, ___nl__5));
#line 167
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 167
if(c_rt_lib0check_true_native(___nl__5)){ goto label_327;}
#line 168
c_rt_lib0move(&___nl__6,___get_global_const(6));
#line 168
c_rt_lib0move(&___nl__6, c_rt_lib0ge(___nl__2, ___nl__6));
#line 168
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 168
if(c_rt_lib0check_true_native(___nl__6)){ goto label_302;}
#line 168
c_rt_lib0move(&___nl__7, c_rt_lib0ov_mk_arg(___get_global_const(48), ___nl__3));
#line 168
c_rt_lib0clear(&___nl__0);
#line 168
c_rt_lib0clear(&___nl__2);
#line 168
c_rt_lib0clear(&___nl__3);
#line 168
c_rt_lib0clear(&___nl__4);
#line 168
c_rt_lib0clear(&___nl__5);
#line 168
c_rt_lib0clear(&___nl__6);
#line 168
return ___nl__7;
#line 168
c_rt_lib0clear(&___nl__7);
#line 168
goto label_302;
#line 168
label_302:
#line 168
c_rt_lib0clear(&___nl__6);
#line 169
c_rt_lib0move(&___nl__6,___get_global_const(1));
#line 169
c_rt_lib0move(___ref___1, c_rt_lib0add_mod(*___ref___1, ___nl__6));
#line 169
c_rt_lib0clear(&___nl__6);
#line 170
c_rt_lib0move(&___nl__9,___get_global_const(6));
#line 170
c_rt_lib0move(&___nl__8, string_utils_priv0cal_expr(___nl__0, ___ref___1, ___nl__9));
#line 170
c_rt_lib0clear(&___nl__9);
#line 170
c_rt_lib0move(&___nl__7, c_rt_lib0priv_is(___nl__8, ___get_global_const(48)));
#line 170
if(c_rt_lib0check_true_native(___nl__7)){ goto label_320;}
#line 170
c_rt_lib0clear(&___nl__0);
#line 170
c_rt_lib0clear(&___nl__2);
#line 170
c_rt_lib0clear(&___nl__3);
#line 170
c_rt_lib0clear(&___nl__4);
#line 170
c_rt_lib0clear(&___nl__5);
#line 170
c_rt_lib0clear(&___nl__6);
#line 170
c_rt_lib0clear(&___nl__7);
#line 170
return ___nl__8;
#line 170
label_320:
#line 170
c_rt_lib0move(&___nl__6, c_rt_lib0priv_as(___nl__8, ___get_global_const(48)));
#line 170
c_rt_lib0clear(&___nl__7);
#line 170
c_rt_lib0clear(&___nl__8);
#line 171
c_rt_lib0move(&___nl__3, c_rt_lib0sub_mod(___nl__3, ___nl__6));
#line 171
c_rt_lib0clear(&___nl__6);
#line 172
goto label_367;
#line 172
label_327:
#line 172
c_rt_lib0move(&___nl__5,___get_global_const(260));
#line 172
c_rt_lib0move(&___nl__5, c_rt_lib0eq(___nl__4, ___nl__5));
#line 172
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 172
if(c_rt_lib0check_true_native(___nl__5)){ goto label_357;}
#line 173
c_rt_lib0move(&___nl__6,___get_global_const(0));
#line 173
c_rt_lib0move(&___nl__6, c_rt_lib0lt(___nl__2, ___nl__6));
#line 173
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 173
if(c_rt_lib0check_true_native(___nl__6)){ goto label_346;}
#line 173
c_rt_lib0move(&___nl__7, c_rt_lib0ov_mk_none(___get_global_const(47)));
#line 173
c_rt_lib0clear(&___nl__0);
#line 173
c_rt_lib0clear(&___nl__2);
#line 173
c_rt_lib0clear(&___nl__3);
#line 173
c_rt_lib0clear(&___nl__4);
#line 173
c_rt_lib0clear(&___nl__5);
#line 173
c_rt_lib0clear(&___nl__6);
#line 173
return ___nl__7;
#line 173
c_rt_lib0clear(&___nl__7);
#line 173
goto label_346;
#line 173
label_346:
#line 173
c_rt_lib0clear(&___nl__6);
#line 174
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_arg(___get_global_const(48), ___nl__3));
#line 174
c_rt_lib0clear(&___nl__0);
#line 174
c_rt_lib0clear(&___nl__2);
#line 174
c_rt_lib0clear(&___nl__3);
#line 174
c_rt_lib0clear(&___nl__4);
#line 174
c_rt_lib0clear(&___nl__5);
#line 174
return ___nl__6;
#line 174
c_rt_lib0clear(&___nl__6);
#line 175
goto label_367;
#line 175
label_357:
#line 176
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_none(___get_global_const(47)));
#line 176
c_rt_lib0clear(&___nl__0);
#line 176
c_rt_lib0clear(&___nl__2);
#line 176
c_rt_lib0clear(&___nl__3);
#line 176
c_rt_lib0clear(&___nl__4);
#line 176
c_rt_lib0clear(&___nl__5);
#line 176
return ___nl__6;
#line 176
c_rt_lib0clear(&___nl__6);
#line 177
goto label_367;
#line 177
label_367:
#line 177
c_rt_lib0clear(&___nl__5);
#line 177
c_rt_lib0clear(&___nl__4);
#line 144
goto label_89;
#line 179
c_rt_lib0move(&___nl__4, c_rt_lib0array_mk(0));
#line 179
nl_die_arg(___nl__4);
#line 179
c_rt_lib0clear(&___nl__3);
#line 179
c_rt_lib0clear(&___nl__4);
#line 179
c_rt_lib0clear(&___nl__0);
#line 179
c_rt_lib0clear(&___nl__2);
#line 179
return NULL;
}

ImmT string_utils0eval_number0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "string_utils0eval_number");
return string_utils0eval_number(_tab[0]);}
ImmT string_utils0eval_number(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
#line 183
c_rt_lib0move(&___nl__1,___get_global_const(2));
#line 183
c_rt_lib0move(&___nl__1, c_rt_lib0eq(___nl__0, ___nl__1));
#line 183
c_rt_lib0move(&___nl__1, c_rt_lib0not(___nl__1));
#line 183
if(c_rt_lib0check_true_native(___nl__1)){ goto label_7;}
#line 183
c_rt_lib0clear(&___nl__1);
#line 183
return ___nl__0;
#line 183
goto label_7;
#line 183
label_7:
#line 183
c_rt_lib0clear(&___nl__1);
#line 184
c_rt_lib0move(&___nl__2,___get_global_const(2));
#line 184
c_rt_lib0move(&___nl__1, string0split(___nl__2, ___nl__0));
#line 184
c_rt_lib0clear(&___nl__2);
#line 185
c_rt_lib0move(&___nl__3,___get_global_const(0));
#line 185
c_rt_lib0move(&___nl__2, c_rt_lib0array_get(___nl__1, ___nl__3));
#line 185
c_rt_lib0clear(&___nl__3);
#line 185
c_rt_lib0move(&___nl__3,___get_global_const(864));
#line 185
c_rt_lib0move(&___nl__2, c_rt_lib0ne(___nl__2, ___nl__3));
#line 185
c_rt_lib0clear(&___nl__3);
#line 185
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 185
if(c_rt_lib0check_true_native(___nl__2)){ goto label_24;}
#line 185
c_rt_lib0clear(&___nl__1);
#line 185
c_rt_lib0clear(&___nl__2);
#line 185
return ___nl__0;
#line 185
goto label_24;
#line 185
label_24:
#line 185
c_rt_lib0clear(&___nl__2);
#line 186
c_rt_lib0move(&___nl__3,___get_global_const(1));
#line 186
c_rt_lib0move(&___nl__4, array0len(___nl__1));
#line 186
c_rt_lib0move(&___nl__5,___get_global_const(1));
#line 186
c_rt_lib0move(&___nl__4, c_rt_lib0sub_mod(___nl__4, ___nl__5));
#line 186
c_rt_lib0clear(&___nl__5);
#line 186
c_rt_lib0move(&___nl__2, array0subarray(___nl__1, ___nl__3, ___nl__4));
#line 186
c_rt_lib0clear(&___nl__4);
#line 186
c_rt_lib0clear(&___nl__3);
#line 186
c_rt_lib0copy(&___nl__1, ___nl__2);
#line 186
c_rt_lib0clear(&___nl__2);
#line 187
c_rt_lib0move(&___nl__2,___get_global_const(2));
#line 188
c_rt_lib0move(&___nl__4,___get_global_const(0));
#line 188
c_rt_lib0move(&___nl__5,___get_global_const(1));
#line 188
c_rt_lib0move(&___nl__6, c_rt_lib0array_len(___nl__1));
#line 188
label_40:
#line 188
c_rt_lib0move(&___nl__7, c_rt_lib0ge(___nl__4, ___nl__6));
#line 188
if(c_rt_lib0check_true_native(___nl__7)){ goto label_91;}
#line 188
c_rt_lib0move(&___nl__3, c_rt_lib0array_get(___nl__1, ___nl__4));
#line 191
c_rt_lib0move(&___nl__8, string_utils0is_int(___nl__3));
#line 191
if(c_rt_lib0check_true_native(___nl__8)){ goto label_48;}
#line 191
c_rt_lib0move(&___nl__8,___get_global_const(296));
#line 191
c_rt_lib0move(&___nl__8, c_rt_lib0eq(___nl__3, ___nl__8));
#line 191
label_48:
#line 191
if(c_rt_lib0check_true_native(___nl__8)){ goto label_52;}
#line 191
c_rt_lib0move(&___nl__8,___get_global_const(97));
#line 191
c_rt_lib0move(&___nl__8, c_rt_lib0eq(___nl__3, ___nl__8));
#line 191
label_52:
#line 191
if(c_rt_lib0check_true_native(___nl__8)){ goto label_56;}
#line 191
c_rt_lib0move(&___nl__8,___get_global_const(298));
#line 191
c_rt_lib0move(&___nl__8, c_rt_lib0eq(___nl__3, ___nl__8));
#line 191
label_56:
#line 191
if(c_rt_lib0check_true_native(___nl__8)){ goto label_60;}
#line 191
c_rt_lib0move(&___nl__8,___get_global_const(77));
#line 191
c_rt_lib0move(&___nl__8, c_rt_lib0eq(___nl__3, ___nl__8));
#line 191
label_60:
#line 191
if(c_rt_lib0check_true_native(___nl__8)){ goto label_64;}
#line 191
c_rt_lib0move(&___nl__8,___get_global_const(373));
#line 191
c_rt_lib0move(&___nl__8, c_rt_lib0eq(___nl__3, ___nl__8));
#line 191
label_64:
#line 191
if(c_rt_lib0check_true_native(___nl__8)){ goto label_68;}
#line 192
c_rt_lib0move(&___nl__8,___get_global_const(260));
#line 192
c_rt_lib0move(&___nl__8, c_rt_lib0eq(___nl__3, ___nl__8));
#line 192
label_68:
#line 192
if(c_rt_lib0check_true_native(___nl__8)){ goto label_72;}
#line 192
c_rt_lib0move(&___nl__8,___get_global_const(304));
#line 192
c_rt_lib0move(&___nl__8, c_rt_lib0eq(___nl__3, ___nl__8));
#line 192
label_72:
#line 192
c_rt_lib0move(&___nl__8, c_rt_lib0not(___nl__8));
#line 192
c_rt_lib0move(&___nl__8, c_rt_lib0not(___nl__8));
#line 192
if(c_rt_lib0check_true_native(___nl__8)){ goto label_86;}
#line 189
c_rt_lib0clear(&___nl__1);
#line 189
c_rt_lib0clear(&___nl__2);
#line 189
c_rt_lib0clear(&___nl__3);
#line 189
c_rt_lib0clear(&___nl__4);
#line 189
c_rt_lib0clear(&___nl__5);
#line 189
c_rt_lib0clear(&___nl__6);
#line 189
c_rt_lib0clear(&___nl__7);
#line 189
c_rt_lib0clear(&___nl__8);
#line 189
return ___nl__0;
#line 189
goto label_86;
#line 189
label_86:
#line 189
c_rt_lib0clear(&___nl__8);
#line 193
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__3));
#line 194
c_rt_lib0move(&___nl__4, c_rt_lib0add_mod(___nl__4, ___nl__5));
#line 194
goto label_40;
#line 194
label_91:
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
#line 195
c_rt_lib0move(&___nl__4,___get_global_const(2));
#line 195
c_rt_lib0move(&___nl__3, string0split(___nl__4, ___nl__2));
#line 195
c_rt_lib0clear(&___nl__4);
#line 196
c_rt_lib0move(&___nl__4,___get_global_const(0));
#line 197
c_rt_lib0move(&___nl__6,___get_global_const(1));
#line 197
c_rt_lib0move(&___nl__6, c_rt_lib0unary_minus(___nl__6));
#line 197
c_rt_lib0move(&___nl__5, string_utils_priv0cal_expr(___nl__3, &___nl__4, ___nl__6));
#line 197
c_rt_lib0clear(&___nl__6);
#line 197
c_rt_lib0move(&___nl__6, c_rt_lib0priv_is(___nl__5, ___get_global_const(47)));
#line 197
if(c_rt_lib0check_true_native(___nl__6)){ goto label_112;}
#line 199
c_rt_lib0move(&___nl__6, c_rt_lib0priv_is(___nl__5, ___get_global_const(48)));
#line 199
if(c_rt_lib0check_true_native(___nl__6)){ goto label_124;}
#line 199
c_rt_lib0move(&___nl__6,___get_global_const(91));
#line 199
c_rt_lib0move(&___nl__6, c_rt_lib0array_mk(2, ___nl__6, ___nl__5));
#line 199
nl_die_arg(___nl__6);
#line 197
label_112:
#line 198
c_rt_lib0move(&___nl__7,___get_global_const(2));
#line 198
c_rt_lib0clear(&___nl__0);
#line 198
c_rt_lib0clear(&___nl__1);
#line 198
c_rt_lib0clear(&___nl__2);
#line 198
c_rt_lib0clear(&___nl__3);
#line 198
c_rt_lib0clear(&___nl__4);
#line 198
c_rt_lib0clear(&___nl__5);
#line 198
c_rt_lib0clear(&___nl__6);
#line 198
return ___nl__7;
#line 198
c_rt_lib0clear(&___nl__7);
#line 199
goto label_136;
#line 199
label_124:
#line 199
c_rt_lib0move(&___nl__7, c_rt_lib0priv_as(___nl__5, ___get_global_const(48)));
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
c_rt_lib0clear(&___nl__6);
#line 200
return ___nl__7;
#line 200
c_rt_lib0clear(&___nl__7);
#line 201
goto label_136;
#line 201
label_136:
#line 201
c_rt_lib0clear(&___nl__5);
#line 201
c_rt_lib0clear(&___nl__6);
#line 201
c_rt_lib0clear(&___nl__1);
#line 201
c_rt_lib0clear(&___nl__2);
#line 201
c_rt_lib0clear(&___nl__3);
#line 201
c_rt_lib0clear(&___nl__4);
#line 201
c_rt_lib0clear(&___nl__0);
#line 201
return NULL;
}

ImmT string_utils0get_date0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 2, "string_utils0get_date");
return string_utils0get_date(_tab[0], _tab[1]);}
ImmT string_utils0get_date(ImmT ___nl__0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
#line 208
c_rt_lib0move(&___nl__2, string0split(___nl__1, ___nl__0));
#line 211
c_rt_lib0move(&___nl__3, array0len(___nl__2));
#line 211
c_rt_lib0move(&___nl__7,___get_global_const(80));
#line 211
c_rt_lib0move(&___nl__3, c_rt_lib0num_eq(___nl__3, ___nl__7));
#line 211
c_rt_lib0clear(&___nl__7);
#line 211
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__3));
#line 211
if(c_rt_lib0check_true_native(___nl__6)){ goto label_12;}
#line 212
c_rt_lib0move(&___nl__8,___get_global_const(0));
#line 212
c_rt_lib0move(&___nl__7, c_rt_lib0array_get(___nl__2, ___nl__8));
#line 212
c_rt_lib0clear(&___nl__8);
#line 212
c_rt_lib0move(&___nl__3, string_utils0is_integer_possibly_leading_zeros(___nl__7));
#line 212
c_rt_lib0clear(&___nl__7);
#line 212
label_12:
#line 212
c_rt_lib0clear(&___nl__6);
#line 212
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__3));
#line 212
if(c_rt_lib0check_true_native(___nl__5)){ goto label_21;}
#line 213
c_rt_lib0move(&___nl__7,___get_global_const(1));
#line 213
c_rt_lib0move(&___nl__6, c_rt_lib0array_get(___nl__2, ___nl__7));
#line 213
c_rt_lib0clear(&___nl__7);
#line 213
c_rt_lib0move(&___nl__3, string_utils0is_integer_possibly_leading_zeros(___nl__6));
#line 213
c_rt_lib0clear(&___nl__6);
#line 213
label_21:
#line 213
c_rt_lib0clear(&___nl__5);
#line 213
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__3));
#line 213
if(c_rt_lib0check_true_native(___nl__4)){ goto label_30;}
#line 214
c_rt_lib0move(&___nl__6,___get_global_const(6));
#line 214
c_rt_lib0move(&___nl__5, c_rt_lib0array_get(___nl__2, ___nl__6));
#line 214
c_rt_lib0clear(&___nl__6);
#line 214
c_rt_lib0move(&___nl__3, string_utils0is_integer_possibly_leading_zeros(___nl__5));
#line 214
c_rt_lib0clear(&___nl__5);
#line 214
label_30:
#line 214
c_rt_lib0clear(&___nl__4);
#line 214
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 214
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 214
if(c_rt_lib0check_true_native(___nl__3)){ goto label_44;}
#line 209
c_rt_lib0move(&___nl__4,___get_global_const(2));
#line 209
c_rt_lib0move(&___nl__4, c_rt_lib0ov_mk_arg(___get_global_const(47), ___nl__4));
#line 209
c_rt_lib0clear(&___nl__0);
#line 209
c_rt_lib0clear(&___nl__1);
#line 209
c_rt_lib0clear(&___nl__2);
#line 209
c_rt_lib0clear(&___nl__3);
#line 209
return ___nl__4;
#line 209
c_rt_lib0clear(&___nl__4);
#line 209
goto label_44;
#line 209
label_44:
#line 209
c_rt_lib0clear(&___nl__3);
#line 215
c_rt_lib0move(&___nl__5,___get_global_const(0));
#line 215
c_rt_lib0move(&___nl__4, c_rt_lib0array_get(___nl__2, ___nl__5));
#line 215
c_rt_lib0clear(&___nl__5);
#line 215
c_rt_lib0move(&___nl__6,___get_global_const(1));
#line 215
c_rt_lib0move(&___nl__5, c_rt_lib0array_get(___nl__2, ___nl__6));
#line 215
c_rt_lib0clear(&___nl__6);
#line 215
c_rt_lib0move(&___nl__7,___get_global_const(6));
#line 215
c_rt_lib0move(&___nl__6, c_rt_lib0array_get(___nl__2, ___nl__7));
#line 215
c_rt_lib0clear(&___nl__7);
#line 215
c_rt_lib0move(&___nl__3, c_rt_lib0hash_mk(3, ___get_global_const(1115), ___nl__4, ___get_global_const(1116), ___nl__5, ___get_global_const(1117), ___nl__6));
#line 215
c_rt_lib0clear(&___nl__4);
#line 215
c_rt_lib0clear(&___nl__5);
#line 215
c_rt_lib0clear(&___nl__6);
#line 215
c_rt_lib0move(&___nl__3, c_rt_lib0ov_mk_arg(___get_global_const(48), ___nl__3));
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
c_rt_lib0clear(&___nl__2);
#line 215
c_rt_lib0clear(&___nl__0);
#line 215
c_rt_lib0clear(&___nl__1);
#line 215
return NULL;
}

ImmT string_utils0change0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 3, "string_utils0change");
return string_utils0change(_tab[0], _tab[1], _tab[2]);}
ImmT string_utils0change(ImmT ___nl__0,ImmT ___nl__1,ImmT ___nl__2) {
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
#line 219
c_rt_lib0move(&___nl__3,___get_global_const(2));
#line 220
c_rt_lib0move(&___nl__5,___get_global_const(2));
#line 220
c_rt_lib0move(&___nl__4, string0split(___nl__5, ___nl__0));
#line 220
c_rt_lib0clear(&___nl__5);
#line 220
c_rt_lib0move(&___nl__6,___get_global_const(0));
#line 220
c_rt_lib0move(&___nl__7,___get_global_const(1));
#line 220
c_rt_lib0move(&___nl__8, c_rt_lib0array_len(___nl__4));
#line 220
label_7:
#line 220
c_rt_lib0move(&___nl__9, c_rt_lib0ge(___nl__6, ___nl__8));
#line 220
if(c_rt_lib0check_true_native(___nl__9)){ goto label_22;}
#line 220
c_rt_lib0move(&___nl__5, c_rt_lib0array_get(___nl__4, ___nl__6));
#line 221
c_rt_lib0move(&___nl__10, c_rt_lib0eq(___nl__5, ___nl__1));
#line 221
if(c_rt_lib0check_true_native(___nl__10)){ goto label_15;}
#line 221
c_rt_lib0copy(&___nl__10, ___nl__5);
#line 221
goto label_17;
#line 221
label_15:
#line 221
c_rt_lib0copy(&___nl__10, ___nl__2);
#line 221
label_17:
#line 221
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__10));
#line 221
c_rt_lib0clear(&___nl__10);
#line 222
c_rt_lib0move(&___nl__6, c_rt_lib0add_mod(___nl__6, ___nl__7));
#line 222
goto label_7;
#line 222
label_22:
#line 222
c_rt_lib0clear(&___nl__4);
#line 222
c_rt_lib0clear(&___nl__5);
#line 222
c_rt_lib0clear(&___nl__6);
#line 222
c_rt_lib0clear(&___nl__7);
#line 222
c_rt_lib0clear(&___nl__8);
#line 222
c_rt_lib0clear(&___nl__9);
#line 223
c_rt_lib0clear(&___nl__0);
#line 223
c_rt_lib0clear(&___nl__1);
#line 223
c_rt_lib0clear(&___nl__2);
#line 223
return ___nl__3;
#line 223
c_rt_lib0clear(&___nl__3);
#line 223
c_rt_lib0clear(&___nl__0);
#line 223
c_rt_lib0clear(&___nl__1);
#line 223
c_rt_lib0clear(&___nl__2);
#line 223
return NULL;
}

ImmT string_utils0erase_tail_whitespace0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "string_utils0erase_tail_whitespace");
return string_utils0erase_tail_whitespace(_tab[0]);}
ImmT string_utils0erase_tail_whitespace(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
#line 227
c_rt_lib0move(&___nl__1,___get_global_const(2));
#line 227
c_rt_lib0move(&___nl__1, c_rt_lib0eq(___nl__0, ___nl__1));
#line 227
c_rt_lib0move(&___nl__1, c_rt_lib0not(___nl__1));
#line 227
if(c_rt_lib0check_true_native(___nl__1)){ goto label_10;}
#line 227
c_rt_lib0move(&___nl__2,___get_global_const(2));
#line 227
c_rt_lib0clear(&___nl__0);
#line 227
c_rt_lib0clear(&___nl__1);
#line 227
return ___nl__2;
#line 227
c_rt_lib0clear(&___nl__2);
#line 227
goto label_10;
#line 227
label_10:
#line 227
c_rt_lib0clear(&___nl__1);
#line 228
c_rt_lib0move(&___nl__1, string0length(___nl__0));
#line 228
c_rt_lib0move(&___nl__2,___get_global_const(1));
#line 228
c_rt_lib0move(&___nl__1, c_rt_lib0sub_mod(___nl__1, ___nl__2));
#line 228
c_rt_lib0clear(&___nl__2);
#line 229
label_16:
#line 229
c_rt_lib0move(&___nl__2,___get_global_const(0));
#line 229
c_rt_lib0move(&___nl__2, c_rt_lib0ge(___nl__1, ___nl__2));
#line 229
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__2));
#line 229
if(c_rt_lib0check_true_native(___nl__3)){ goto label_26;}
#line 229
c_rt_lib0move(&___nl__5,___get_global_const(1));
#line 229
c_rt_lib0move(&___nl__4, string0substr(___nl__0, ___nl__1, ___nl__5));
#line 229
c_rt_lib0clear(&___nl__5);
#line 229
c_rt_lib0move(&___nl__2, string_utils0is_whitespace(___nl__4));
#line 229
c_rt_lib0clear(&___nl__4);
#line 229
label_26:
#line 229
c_rt_lib0clear(&___nl__3);
#line 229
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 229
if(c_rt_lib0check_true_native(___nl__2)){ goto label_34;}
#line 230
c_rt_lib0move(&___nl__3,___get_global_const(1));
#line 230
c_rt_lib0move(&___nl__1, c_rt_lib0sub_mod(___nl__1, ___nl__3));
#line 230
c_rt_lib0clear(&___nl__3);
#line 231
goto label_16;
#line 231
label_34:
#line 231
c_rt_lib0clear(&___nl__2);
#line 232
c_rt_lib0move(&___nl__3,___get_global_const(0));
#line 232
c_rt_lib0move(&___nl__4,___get_global_const(1));
#line 232
c_rt_lib0move(&___nl__4, c_rt_lib0add(___nl__1, ___nl__4));
#line 232
c_rt_lib0move(&___nl__2, string0substr(___nl__0, ___nl__3, ___nl__4));
#line 232
c_rt_lib0clear(&___nl__4);
#line 232
c_rt_lib0clear(&___nl__3);
#line 232
c_rt_lib0clear(&___nl__0);
#line 232
c_rt_lib0clear(&___nl__1);
#line 232
return ___nl__2;
#line 232
c_rt_lib0clear(&___nl__2);
#line 232
c_rt_lib0clear(&___nl__1);
#line 232
c_rt_lib0clear(&___nl__0);
#line 232
return NULL;
}

ImmT string_utils0erase_tail_zeroes0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "string_utils0erase_tail_zeroes");
return string_utils0erase_tail_zeroes(_tab[0]);}
ImmT string_utils0erase_tail_zeroes(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
#line 236
c_rt_lib0move(&___nl__1,___get_global_const(2));
#line 236
c_rt_lib0move(&___nl__1, c_rt_lib0eq(___nl__0, ___nl__1));
#line 236
c_rt_lib0move(&___nl__1, c_rt_lib0not(___nl__1));
#line 236
if(c_rt_lib0check_true_native(___nl__1)){ goto label_7;}
#line 236
c_rt_lib0clear(&___nl__1);
#line 236
return ___nl__0;
#line 236
goto label_7;
#line 236
label_7:
#line 236
c_rt_lib0clear(&___nl__1);
#line 237
c_rt_lib0move(&___nl__1, string0to_array(___nl__0));
#line 238
c_rt_lib0move(&___nl__2, array0len(___nl__1));
#line 238
c_rt_lib0move(&___nl__3,___get_global_const(1));
#line 238
c_rt_lib0move(&___nl__2, c_rt_lib0sub_mod(___nl__2, ___nl__3));
#line 238
c_rt_lib0clear(&___nl__3);
#line 239
label_14:
#line 239
c_rt_lib0move(&___nl__3,___get_global_const(0));
#line 239
c_rt_lib0move(&___nl__3, c_rt_lib0ge(___nl__2, ___nl__3));
#line 239
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__3));
#line 239
if(c_rt_lib0check_true_native(___nl__4)){ goto label_23;}
#line 239
c_rt_lib0move(&___nl__3, c_rt_lib0array_get(___nl__1, ___nl__2));
#line 239
c_rt_lib0move(&___nl__5,___get_global_const(0));
#line 239
c_rt_lib0move(&___nl__3, c_rt_lib0eq(___nl__3, ___nl__5));
#line 239
c_rt_lib0clear(&___nl__5);
#line 239
label_23:
#line 239
c_rt_lib0clear(&___nl__4);
#line 239
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 239
if(c_rt_lib0check_true_native(___nl__3)){ goto label_31;}
#line 240
c_rt_lib0move(&___nl__4,___get_global_const(1));
#line 240
c_rt_lib0move(&___nl__2, c_rt_lib0sub_mod(___nl__2, ___nl__4));
#line 240
c_rt_lib0clear(&___nl__4);
#line 241
goto label_14;
#line 241
label_31:
#line 241
c_rt_lib0clear(&___nl__3);
#line 242
c_rt_lib0move(&___nl__4,___get_global_const(0));
#line 242
c_rt_lib0move(&___nl__5,___get_global_const(1));
#line 242
c_rt_lib0move(&___nl__5, c_rt_lib0add(___nl__2, ___nl__5));
#line 242
c_rt_lib0move(&___nl__3, string0substr(___nl__0, ___nl__4, ___nl__5));
#line 242
c_rt_lib0clear(&___nl__5);
#line 242
c_rt_lib0clear(&___nl__4);
#line 242
c_rt_lib0clear(&___nl__0);
#line 242
c_rt_lib0clear(&___nl__1);
#line 242
c_rt_lib0clear(&___nl__2);
#line 242
return ___nl__3;
#line 242
c_rt_lib0clear(&___nl__3);
#line 242
c_rt_lib0clear(&___nl__1);
#line 242
c_rt_lib0clear(&___nl__2);
#line 242
c_rt_lib0clear(&___nl__0);
#line 242
return NULL;
}

ImmT string_utils0erase_leading_zeroes0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "string_utils0erase_leading_zeroes");
return string_utils0erase_leading_zeroes(_tab[0]);}
ImmT string_utils0erase_leading_zeroes(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
#line 246
c_rt_lib0move(&___nl__1,___get_global_const(2));
#line 246
c_rt_lib0move(&___nl__1, c_rt_lib0eq(___nl__0, ___nl__1));
#line 246
c_rt_lib0move(&___nl__1, c_rt_lib0not(___nl__1));
#line 246
if(c_rt_lib0check_true_native(___nl__1)){ goto label_7;}
#line 246
c_rt_lib0clear(&___nl__1);
#line 246
return ___nl__0;
#line 246
goto label_7;
#line 246
label_7:
#line 246
c_rt_lib0clear(&___nl__1);
#line 247
c_rt_lib0move(&___nl__1, string0to_array(___nl__0));
#line 248
c_rt_lib0move(&___nl__2,___get_global_const(0));
#line 249
label_11:
#line 249
c_rt_lib0move(&___nl__3, array0len(___nl__1));
#line 249
c_rt_lib0move(&___nl__3, c_rt_lib0lt(___nl__2, ___nl__3));
#line 249
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__3));
#line 249
if(c_rt_lib0check_true_native(___nl__4)){ goto label_20;}
#line 249
c_rt_lib0move(&___nl__3, c_rt_lib0array_get(___nl__1, ___nl__2));
#line 249
c_rt_lib0move(&___nl__5,___get_global_const(0));
#line 249
c_rt_lib0move(&___nl__3, c_rt_lib0eq(___nl__3, ___nl__5));
#line 249
c_rt_lib0clear(&___nl__5);
#line 249
label_20:
#line 249
c_rt_lib0clear(&___nl__4);
#line 249
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 249
if(c_rt_lib0check_true_native(___nl__3)){ goto label_28;}
#line 250
c_rt_lib0move(&___nl__4,___get_global_const(1));
#line 250
c_rt_lib0move(&___nl__2, c_rt_lib0add_mod(___nl__2, ___nl__4));
#line 250
c_rt_lib0clear(&___nl__4);
#line 251
goto label_11;
#line 251
label_28:
#line 251
c_rt_lib0clear(&___nl__3);
#line 252
c_rt_lib0move(&___nl__3, array0len(___nl__1));
#line 252
c_rt_lib0move(&___nl__3, c_rt_lib0num_ne(___nl__2, ___nl__3));
#line 252
if(c_rt_lib0check_true_native(___nl__3)){ goto label_35;}
#line 254
c_rt_lib0move(&___nl__3,___get_global_const(0));
#line 254
goto label_37;
#line 254
label_35:
#line 253
c_rt_lib0move(&___nl__3, string0substr2(___nl__0, ___nl__2));
#line 253
label_37:
#line 253
c_rt_lib0clear(&___nl__0);
#line 253
c_rt_lib0clear(&___nl__1);
#line 253
c_rt_lib0clear(&___nl__2);
#line 253
return ___nl__3;
#line 253
c_rt_lib0clear(&___nl__3);
#line 253
c_rt_lib0clear(&___nl__1);
#line 253
c_rt_lib0clear(&___nl__2);
#line 253
c_rt_lib0clear(&___nl__0);
#line 253
return NULL;
}

ImmT string_utils0char2hex0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "string_utils0char2hex");
return string_utils0char2hex(_tab[0]);}
ImmT string_utils0char2hex(ImmT ___nl__0) {
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
#line 258
c_rt_lib0move(&___nl__2,___get_global_const(0));
#line 258
c_rt_lib0move(&___nl__3,___get_global_const(1));
#line 258
c_rt_lib0move(&___nl__4,___get_global_const(6));
#line 258
c_rt_lib0move(&___nl__5,___get_global_const(80));
#line 258
c_rt_lib0move(&___nl__6,___get_global_const(82));
#line 258
c_rt_lib0move(&___nl__7,___get_global_const(78));
#line 258
c_rt_lib0move(&___nl__8,___get_global_const(1118));
#line 258
c_rt_lib0move(&___nl__9,___get_global_const(244));
#line 258
c_rt_lib0move(&___nl__10,___get_global_const(1119));
#line 258
c_rt_lib0move(&___nl__11,___get_global_const(243));
#line 258
c_rt_lib0move(&___nl__12,___get_global_const(1120));
#line 258
c_rt_lib0move(&___nl__13,___get_global_const(1121));
#line 258
c_rt_lib0move(&___nl__14,___get_global_const(34));
#line 258
c_rt_lib0move(&___nl__15,___get_global_const(1122));
#line 258
c_rt_lib0move(&___nl__16,___get_global_const(1123));
#line 258
c_rt_lib0move(&___nl__17,___get_global_const(1124));
#line 258
c_rt_lib0move(&___nl__1, c_rt_lib0array_mk(16, ___nl__2, ___nl__3, ___nl__4, ___nl__5, ___nl__6, ___nl__7, ___nl__8, ___nl__9, ___nl__10, ___nl__11, ___nl__12, ___nl__13, ___nl__14, ___nl__15, ___nl__16, ___nl__17));
#line 258
c_rt_lib0clear(&___nl__2);
#line 258
c_rt_lib0clear(&___nl__3);
#line 258
c_rt_lib0clear(&___nl__4);
#line 258
c_rt_lib0clear(&___nl__5);
#line 258
c_rt_lib0clear(&___nl__6);
#line 258
c_rt_lib0clear(&___nl__7);
#line 258
c_rt_lib0clear(&___nl__8);
#line 258
c_rt_lib0clear(&___nl__9);
#line 258
c_rt_lib0clear(&___nl__10);
#line 258
c_rt_lib0clear(&___nl__11);
#line 258
c_rt_lib0clear(&___nl__12);
#line 258
c_rt_lib0clear(&___nl__13);
#line 258
c_rt_lib0clear(&___nl__14);
#line 258
c_rt_lib0clear(&___nl__15);
#line 258
c_rt_lib0clear(&___nl__16);
#line 258
c_rt_lib0clear(&___nl__17);
#line 259
c_rt_lib0move(&___nl__3,___get_global_const(1125));
#line 259
c_rt_lib0move(&___nl__3, c_rt_lib0div(___nl__0, ___nl__3));
#line 259
c_rt_lib0move(&___nl__2, c_rt_lib0array_get(___nl__1, ___nl__3));
#line 259
c_rt_lib0clear(&___nl__3);
#line 259
c_rt_lib0move(&___nl__4,___get_global_const(1125));
#line 259
c_rt_lib0move(&___nl__4, c_rt_lib0mod(___nl__0, ___nl__4));
#line 259
c_rt_lib0move(&___nl__3, c_rt_lib0array_get(___nl__1, ___nl__4));
#line 259
c_rt_lib0clear(&___nl__4);
#line 259
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__3));
#line 259
c_rt_lib0clear(&___nl__3);
#line 259
c_rt_lib0clear(&___nl__0);
#line 259
c_rt_lib0clear(&___nl__1);
#line 259
return ___nl__2;
#line 259
c_rt_lib0clear(&___nl__2);
#line 259
c_rt_lib0clear(&___nl__1);
#line 259
c_rt_lib0clear(&___nl__0);
#line 259
return NULL;
}

ImmT string_utils0hex2char0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 2, "string_utils0hex2char");
return string_utils0hex2char(_tab[0], _tab[1]);}
ImmT string_utils0hex2char(ImmT ___nl__0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
#line 263
c_rt_lib0move(&___nl__2,___get_global_const(0));
#line 264
c_rt_lib0move(&___nl__3,___get_global_const(1105));
#line 264
c_rt_lib0move(&___nl__3, c_rt_lib0ge(___nl__0, ___nl__3));
#line 264
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__3));
#line 264
if(c_rt_lib0check_true_native(___nl__4)){ goto label_7;}
#line 264
c_rt_lib0move(&___nl__3,___get_global_const(1106));
#line 264
c_rt_lib0move(&___nl__3, c_rt_lib0le(___nl__0, ___nl__3));
#line 264
label_7:
#line 264
c_rt_lib0clear(&___nl__4);
#line 264
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 264
if(c_rt_lib0check_true_native(___nl__3)){ goto label_16;}
#line 265
c_rt_lib0move(&___nl__2, c_rt_lib0add_mod(___nl__2, ___nl__0));
#line 266
c_rt_lib0move(&___nl__4,___get_global_const(1105));
#line 266
c_rt_lib0move(&___nl__2, c_rt_lib0sub_mod(___nl__2, ___nl__4));
#line 266
c_rt_lib0clear(&___nl__4);
#line 267
goto label_53;
#line 267
label_16:
#line 267
c_rt_lib0move(&___nl__3,___get_global_const(984));
#line 267
c_rt_lib0move(&___nl__3, c_rt_lib0ge(___nl__0, ___nl__3));
#line 267
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__3));
#line 267
if(c_rt_lib0check_true_native(___nl__4)){ goto label_23;}
#line 267
c_rt_lib0move(&___nl__3,___get_global_const(985));
#line 267
c_rt_lib0move(&___nl__3, c_rt_lib0le(___nl__0, ___nl__3));
#line 267
label_23:
#line 267
c_rt_lib0clear(&___nl__4);
#line 267
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 267
if(c_rt_lib0check_true_native(___nl__3)){ goto label_32;}
#line 268
c_rt_lib0move(&___nl__2, c_rt_lib0add_mod(___nl__2, ___nl__0));
#line 269
c_rt_lib0move(&___nl__4,___get_global_const(1126));
#line 269
c_rt_lib0move(&___nl__2, c_rt_lib0sub_mod(___nl__2, ___nl__4));
#line 269
c_rt_lib0clear(&___nl__4);
#line 270
goto label_53;
#line 270
label_32:
#line 270
c_rt_lib0move(&___nl__3,___get_global_const(986));
#line 270
c_rt_lib0move(&___nl__3, c_rt_lib0ge(___nl__0, ___nl__3));
#line 270
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__3));
#line 270
if(c_rt_lib0check_true_native(___nl__4)){ goto label_39;}
#line 270
c_rt_lib0move(&___nl__3,___get_global_const(987));
#line 270
c_rt_lib0move(&___nl__3, c_rt_lib0le(___nl__0, ___nl__3));
#line 270
label_39:
#line 270
c_rt_lib0clear(&___nl__4);
#line 270
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 270
if(c_rt_lib0check_true_native(___nl__3)){ goto label_48;}
#line 271
c_rt_lib0move(&___nl__2, c_rt_lib0add_mod(___nl__2, ___nl__0));
#line 272
c_rt_lib0move(&___nl__4,___get_global_const(1127));
#line 272
c_rt_lib0move(&___nl__2, c_rt_lib0sub_mod(___nl__2, ___nl__4));
#line 272
c_rt_lib0clear(&___nl__4);
#line 273
goto label_53;
#line 273
label_48:
#line 274
c_rt_lib0move(&___nl__4, c_rt_lib0array_mk(0));
#line 274
nl_die_arg(___nl__4);
#line 274
c_rt_lib0clear(&___nl__4);
#line 275
goto label_53;
#line 275
label_53:
#line 275
c_rt_lib0clear(&___nl__3);
#line 276
c_rt_lib0move(&___nl__3,___get_global_const(1125));
#line 276
c_rt_lib0move(&___nl__2, c_rt_lib0mul_mod(___nl__2, ___nl__3));
#line 276
c_rt_lib0clear(&___nl__3);
#line 277
c_rt_lib0move(&___nl__3,___get_global_const(1105));
#line 277
c_rt_lib0move(&___nl__3, c_rt_lib0ge(___nl__1, ___nl__3));
#line 277
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__3));
#line 277
if(c_rt_lib0check_true_native(___nl__4)){ goto label_64;}
#line 277
c_rt_lib0move(&___nl__3,___get_global_const(1106));
#line 277
c_rt_lib0move(&___nl__3, c_rt_lib0le(___nl__1, ___nl__3));
#line 277
label_64:
#line 277
c_rt_lib0clear(&___nl__4);
#line 277
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 277
if(c_rt_lib0check_true_native(___nl__3)){ goto label_73;}
#line 278
c_rt_lib0move(&___nl__2, c_rt_lib0add_mod(___nl__2, ___nl__1));
#line 279
c_rt_lib0move(&___nl__4,___get_global_const(1105));
#line 279
c_rt_lib0move(&___nl__2, c_rt_lib0sub_mod(___nl__2, ___nl__4));
#line 279
c_rt_lib0clear(&___nl__4);
#line 280
goto label_110;
#line 280
label_73:
#line 280
c_rt_lib0move(&___nl__3,___get_global_const(984));
#line 280
c_rt_lib0move(&___nl__3, c_rt_lib0ge(___nl__1, ___nl__3));
#line 280
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__3));
#line 280
if(c_rt_lib0check_true_native(___nl__4)){ goto label_80;}
#line 280
c_rt_lib0move(&___nl__3,___get_global_const(985));
#line 280
c_rt_lib0move(&___nl__3, c_rt_lib0le(___nl__1, ___nl__3));
#line 280
label_80:
#line 280
c_rt_lib0clear(&___nl__4);
#line 280
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 280
if(c_rt_lib0check_true_native(___nl__3)){ goto label_89;}
#line 281
c_rt_lib0move(&___nl__2, c_rt_lib0add_mod(___nl__2, ___nl__1));
#line 282
c_rt_lib0move(&___nl__4,___get_global_const(1126));
#line 282
c_rt_lib0move(&___nl__2, c_rt_lib0sub_mod(___nl__2, ___nl__4));
#line 282
c_rt_lib0clear(&___nl__4);
#line 283
goto label_110;
#line 283
label_89:
#line 283
c_rt_lib0move(&___nl__3,___get_global_const(986));
#line 283
c_rt_lib0move(&___nl__3, c_rt_lib0ge(___nl__1, ___nl__3));
#line 283
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__3));
#line 283
if(c_rt_lib0check_true_native(___nl__4)){ goto label_96;}
#line 283
c_rt_lib0move(&___nl__3,___get_global_const(987));
#line 283
c_rt_lib0move(&___nl__3, c_rt_lib0le(___nl__1, ___nl__3));
#line 283
label_96:
#line 283
c_rt_lib0clear(&___nl__4);
#line 283
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 283
if(c_rt_lib0check_true_native(___nl__3)){ goto label_105;}
#line 284
c_rt_lib0move(&___nl__2, c_rt_lib0add_mod(___nl__2, ___nl__1));
#line 285
c_rt_lib0move(&___nl__4,___get_global_const(1127));
#line 285
c_rt_lib0move(&___nl__2, c_rt_lib0sub_mod(___nl__2, ___nl__4));
#line 285
c_rt_lib0clear(&___nl__4);
#line 286
goto label_110;
#line 286
label_105:
#line 287
c_rt_lib0move(&___nl__4, c_rt_lib0array_mk(0));
#line 287
nl_die_arg(___nl__4);
#line 287
c_rt_lib0clear(&___nl__4);
#line 288
goto label_110;
#line 288
label_110:
#line 288
c_rt_lib0clear(&___nl__3);
#line 289
c_rt_lib0move(&___nl__3, string0chr(___nl__2));
#line 289
c_rt_lib0clear(&___nl__0);
#line 289
c_rt_lib0clear(&___nl__1);
#line 289
c_rt_lib0clear(&___nl__2);
#line 289
return ___nl__3;
#line 289
c_rt_lib0clear(&___nl__3);
#line 289
c_rt_lib0clear(&___nl__2);
#line 289
c_rt_lib0clear(&___nl__0);
#line 289
c_rt_lib0clear(&___nl__1);
#line 289
return NULL;
}

ImmT string_utils0float2str0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 2, "string_utils0float2str");
return string_utils0float2str(_tab[0], _tab[1]);}
ImmT string_utils0float2str(ImmT ___nl__0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
#line 293
c_rt_lib0move(&___nl__2,___get_global_const(1128));
#line 294
c_rt_lib0move(&___nl__3,___get_global_const(0));
#line 294
c_rt_lib0move(&___nl__4,___get_global_const(1));
#line 294
label_3:
#line 294
c_rt_lib0move(&___nl__5, c_rt_lib0ge(___nl__3, ___nl__1));
#line 294
if(c_rt_lib0check_true_native(___nl__5)){ goto label_11;}
#line 295
c_rt_lib0move(&___nl__6,___get_global_const(1129));
#line 295
c_rt_lib0move(&___nl__2, c_rt_lib0mul_mod(___nl__2, ___nl__6));
#line 295
c_rt_lib0clear(&___nl__6);
#line 296
c_rt_lib0move(&___nl__3, c_rt_lib0add_mod(___nl__3, ___nl__4));
#line 296
goto label_3;
#line 296
label_11:
#line 296
c_rt_lib0clear(&___nl__3);
#line 296
c_rt_lib0clear(&___nl__4);
#line 296
c_rt_lib0clear(&___nl__5);
#line 297
c_rt_lib0move(&___nl__4, c_rt_lib0mul(___nl__0, ___nl__2));
#line 297
c_rt_lib0move(&___nl__3, c_rt_lib0float_round(___nl__4));
#line 297
c_rt_lib0clear(&___nl__4);
#line 297
c_rt_lib0copy(&___nl__0, ___nl__3);
#line 297
c_rt_lib0clear(&___nl__3);
#line 298
c_rt_lib0move(&___nl__3,___get_global_const(2));
#line 299
c_rt_lib0move(&___nl__4,___get_global_const(0));
#line 299
c_rt_lib0move(&___nl__4, c_rt_lib0lt(___nl__0, ___nl__4));
#line 299
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 299
if(c_rt_lib0check_true_native(___nl__4)){ goto label_33;}
#line 300
c_rt_lib0move(&___nl__5,___get_global_const(296));
#line 300
c_rt_lib0copy(&___nl__3, ___nl__5);
#line 300
c_rt_lib0clear(&___nl__5);
#line 301
c_rt_lib0copy(&___nl__5, ___nl__0);
#line 301
c_rt_lib0move(&___nl__5, c_rt_lib0unary_minus(___nl__5));
#line 301
c_rt_lib0copy(&___nl__0, ___nl__5);
#line 301
c_rt_lib0clear(&___nl__5);
#line 302
goto label_33;
#line 302
label_33:
#line 302
c_rt_lib0clear(&___nl__4);
#line 303
c_rt_lib0move(&___nl__5,___get_global_const(1));
#line 303
c_rt_lib0move(&___nl__5, c_rt_lib0add(___nl__1, ___nl__5));
#line 303
c_rt_lib0move(&___nl__4, string_utils0int2str_leading_digits(___nl__0, ___nl__5));
#line 303
c_rt_lib0clear(&___nl__5);
#line 304
c_rt_lib0move(&___nl__5, string0length(___nl__4));
#line 305
c_rt_lib0move(&___nl__6,___get_global_const(0));
#line 305
c_rt_lib0move(&___nl__6, c_rt_lib0num_eq(___nl__1, ___nl__6));
#line 305
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 305
if(c_rt_lib0check_true_native(___nl__6)){ goto label_58;}
#line 305
c_rt_lib0move(&___nl__8,___get_global_const(0));
#line 305
c_rt_lib0move(&___nl__7, string0substr(___nl__4, ___nl__8, ___nl__5));
#line 305
c_rt_lib0clear(&___nl__8);
#line 305
c_rt_lib0move(&___nl__7, c_rt_lib0concat_new(___nl__3, ___nl__7));
#line 305
c_rt_lib0clear(&___nl__0);
#line 305
c_rt_lib0clear(&___nl__1);
#line 305
c_rt_lib0clear(&___nl__2);
#line 305
c_rt_lib0clear(&___nl__3);
#line 305
c_rt_lib0clear(&___nl__4);
#line 305
c_rt_lib0clear(&___nl__5);
#line 305
c_rt_lib0clear(&___nl__6);
#line 305
return ___nl__7;
#line 305
c_rt_lib0clear(&___nl__7);
#line 305
goto label_58;
#line 305
label_58:
#line 305
c_rt_lib0clear(&___nl__6);
#line 306
c_rt_lib0move(&___nl__7,___get_global_const(0));
#line 306
c_rt_lib0move(&___nl__8, c_rt_lib0sub(___nl__5, ___nl__1));
#line 306
c_rt_lib0move(&___nl__6, string0substr(___nl__4, ___nl__7, ___nl__8));
#line 306
c_rt_lib0clear(&___nl__8);
#line 306
c_rt_lib0clear(&___nl__7);
#line 306
c_rt_lib0move(&___nl__6, c_rt_lib0concat_new(___nl__3, ___nl__6));
#line 306
c_rt_lib0move(&___nl__7,___get_global_const(97));
#line 306
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__7));
#line 306
c_rt_lib0clear(&___nl__7);
#line 306
c_rt_lib0move(&___nl__8, c_rt_lib0sub(___nl__5, ___nl__1));
#line 306
c_rt_lib0move(&___nl__7, string0substr(___nl__4, ___nl__8, ___nl__1));
#line 306
c_rt_lib0clear(&___nl__8);
#line 306
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__7));
#line 306
c_rt_lib0clear(&___nl__7);
#line 306
c_rt_lib0clear(&___nl__0);
#line 306
c_rt_lib0clear(&___nl__1);
#line 306
c_rt_lib0clear(&___nl__2);
#line 306
c_rt_lib0clear(&___nl__3);
#line 306
c_rt_lib0clear(&___nl__4);
#line 306
c_rt_lib0clear(&___nl__5);
#line 306
return ___nl__6;
#line 306
c_rt_lib0clear(&___nl__6);
#line 306
c_rt_lib0clear(&___nl__2);
#line 306
c_rt_lib0clear(&___nl__3);
#line 306
c_rt_lib0clear(&___nl__4);
#line 306
c_rt_lib0clear(&___nl__5);
#line 306
c_rt_lib0clear(&___nl__0);
#line 306
c_rt_lib0clear(&___nl__1);
#line 306
return NULL;
}

ImmT string_utils0int2str_leading_digits0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 2, "string_utils0int2str_leading_digits");
return string_utils0int2str_leading_digits(_tab[0], _tab[1]);}
ImmT string_utils0int2str_leading_digits(ImmT ___nl__0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
#line 310
c_rt_lib0move(&___nl__2,___get_global_const(1130));
#line 310
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__0));
#line 311
c_rt_lib0move(&___nl__4, string0length(___nl__2));
#line 311
c_rt_lib0move(&___nl__6, string0length(___nl__0));
#line 311
c_rt_lib0move(&___nl__5, string_utils_priv0max(___nl__1, ___nl__6));
#line 311
c_rt_lib0clear(&___nl__6);
#line 311
c_rt_lib0move(&___nl__4, c_rt_lib0sub_mod(___nl__4, ___nl__5));
#line 311
c_rt_lib0clear(&___nl__5);
#line 311
c_rt_lib0move(&___nl__3, string0substr2(___nl__2, ___nl__4));
#line 311
c_rt_lib0clear(&___nl__4);
#line 311
c_rt_lib0clear(&___nl__0);
#line 311
c_rt_lib0clear(&___nl__1);
#line 311
c_rt_lib0clear(&___nl__2);
#line 311
return ___nl__3;
#line 311
c_rt_lib0clear(&___nl__3);
#line 311
c_rt_lib0clear(&___nl__2);
#line 311
c_rt_lib0clear(&___nl__0);
#line 311
c_rt_lib0clear(&___nl__1);
#line 311
return NULL;
}

ImmT string_utils_priv0max(ImmT ___nl__0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
ImmT ___nl__2 = NULL;
#line 315
c_rt_lib0move(&___nl__2, c_rt_lib0gt(___nl__0, ___nl__1));
#line 315
if(c_rt_lib0check_true_native(___nl__2)){ goto label_4;}
#line 315
c_rt_lib0copy(&___nl__2, ___nl__1);
#line 315
goto label_6;
#line 315
label_4:
#line 315
c_rt_lib0copy(&___nl__2, ___nl__0);
#line 315
label_6:
#line 315
c_rt_lib0clear(&___nl__0);
#line 315
c_rt_lib0clear(&___nl__1);
#line 315
return ___nl__2;
#line 315
c_rt_lib0clear(&___nl__2);
#line 315
c_rt_lib0clear(&___nl__0);
#line 315
c_rt_lib0clear(&___nl__1);
#line 315
return NULL;
}

ImmT string_utils0int2str0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 2, "string_utils0int2str");
return string_utils0int2str(_tab[0], _tab[1]);}
ImmT string_utils0int2str(ImmT ___nl__0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
#line 319
c_rt_lib0move(&___nl__2,___get_global_const(1130));
#line 319
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__0));
#line 320
c_rt_lib0move(&___nl__4, string0length(___nl__2));
#line 320
c_rt_lib0move(&___nl__4, c_rt_lib0sub_mod(___nl__4, ___nl__1));
#line 320
c_rt_lib0move(&___nl__3, string0substr2(___nl__2, ___nl__4));
#line 320
c_rt_lib0clear(&___nl__4);
#line 320
c_rt_lib0clear(&___nl__0);
#line 320
c_rt_lib0clear(&___nl__1);
#line 320
c_rt_lib0clear(&___nl__2);
#line 320
return ___nl__3;
#line 320
c_rt_lib0clear(&___nl__3);
#line 320
c_rt_lib0clear(&___nl__2);
#line 320
c_rt_lib0clear(&___nl__0);
#line 320
c_rt_lib0clear(&___nl__1);
#line 320
return NULL;
}

ImmT string_utils0starts_with0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 2, "string_utils0starts_with");
return string_utils0starts_with(_tab[0], _tab[1]);}
ImmT string_utils0starts_with(ImmT ___nl__0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
#line 324
c_rt_lib0move(&___nl__2, string0length(___nl__0));
#line 324
c_rt_lib0move(&___nl__4, string0length(___nl__1));
#line 324
c_rt_lib0move(&___nl__2, c_rt_lib0ge(___nl__2, ___nl__4));
#line 324
c_rt_lib0clear(&___nl__4);
#line 324
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__2));
#line 324
if(c_rt_lib0check_true_native(___nl__3)){ goto label_12;}
#line 324
c_rt_lib0move(&___nl__4,___get_global_const(0));
#line 324
c_rt_lib0move(&___nl__5, string0length(___nl__1));
#line 324
c_rt_lib0move(&___nl__2, string0substr(___nl__0, ___nl__4, ___nl__5));
#line 324
c_rt_lib0clear(&___nl__5);
#line 324
c_rt_lib0clear(&___nl__4);
#line 324
c_rt_lib0move(&___nl__2, c_rt_lib0eq(___nl__2, ___nl__1));
#line 324
label_12:
#line 324
c_rt_lib0clear(&___nl__3);
#line 324
c_rt_lib0clear(&___nl__0);
#line 324
c_rt_lib0clear(&___nl__1);
#line 324
return ___nl__2;
#line 324
c_rt_lib0clear(&___nl__2);
#line 324
c_rt_lib0clear(&___nl__0);
#line 324
c_rt_lib0clear(&___nl__1);
#line 324
return NULL;
}


static ImmT ___const__[1];
static int ___const_init__ = 1;
void string_utils0__const__init(){
if(!___const_init__) nl_die();
___const_init__ = 0;
__const__f = &___const__[0];


for(int i=0;i<0;++i) ___const__[i] = NULL;
c_rt_lib0register_const(___const__, 0);
}
ImmT string_utils_priv0__const__sim(int __nr) {
ImmT ret = NULL;
c_rt_lib0copy(&ret, ___const__[__nr]);
return ret;
}
ImmT string_utils_priv0__const__sing(int __nr) {
if(___const__[__nr+0]==NULL) {
switch(__nr){
default:
	nl_die();
}}
ImmT ret = NULL;
c_rt_lib0copy(&ret, ___const__[__nr+0]);
return ret;
}
