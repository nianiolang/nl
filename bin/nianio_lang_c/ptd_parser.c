
/* (c) Atinea Sp z o. o.
 *  Stamp: nianio lang
 */
#include "c_rt_lib.h"
#include "c_global_const.h"
#include "ptd_parser.h"
#include "tct.h"
#include "array.h"
#include "hash.h"
#include "ov.h"
#include "nast.h"
#include "ptd.h"
#line 1 "ptd_parser.nl"

static ImmT *__const__f = NULL;
ImmT ptd_parser_priv0__const__sim(int __nr);
ImmT ptd_parser_priv0__const__sing(int __nr);

ImmT ptd_parser_priv0parse_hash(ImmT ___nl__0);


ImmT ptd_parser0fun_def_to_ptd0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "ptd_parser0fun_def_to_ptd");
return ptd_parser0fun_def_to_ptd(_tab[0]);}
ImmT ptd_parser0fun_def_to_ptd(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
#line 14
c_rt_lib0move(&___nl__1, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(201)));
#line 15
c_rt_lib0copy(&___nl__2, ___nl__1);
#line 15
c_rt_lib0move(&___nl__2, c_rt_lib0priv_as(___nl__2, ___get_global_const(827)));
#line 15
c_rt_lib0copy(&___nl__1, ___nl__2);
#line 15
c_rt_lib0clear(&___nl__2);
#line 16
c_rt_lib0move(&___nl__2, array0len(___nl__1));
#line 16
c_rt_lib0move(&___nl__4,___get_global_const(1));
#line 16
c_rt_lib0move(&___nl__2, c_rt_lib0num_eq(___nl__2, ___nl__4));
#line 16
c_rt_lib0clear(&___nl__4);
#line 16
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__2));
#line 16
if(c_rt_lib0check_true_native(___nl__3)){ goto label_16;}
#line 16
c_rt_lib0move(&___nl__4,___get_global_const(0));
#line 16
c_rt_lib0move(&___nl__2, c_rt_lib0array_get(___nl__1, ___nl__4));
#line 16
c_rt_lib0clear(&___nl__4);
#line 16
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(201)));
#line 16
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__2, ___get_global_const(90)));
#line 16
label_16:
#line 16
c_rt_lib0clear(&___nl__3);
#line 16
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 16
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 16
if(c_rt_lib0check_true_native(___nl__2)){ goto label_29;}
#line 16
c_rt_lib0move(&___nl__3,___get_global_const(1063));
#line 16
c_rt_lib0move(&___nl__3, c_rt_lib0ov_mk_arg(___get_global_const(47), ___nl__3));
#line 16
c_rt_lib0clear(&___nl__0);
#line 16
c_rt_lib0clear(&___nl__1);
#line 16
c_rt_lib0clear(&___nl__2);
#line 16
return ___nl__3;
#line 16
c_rt_lib0clear(&___nl__3);
#line 16
goto label_29;
#line 16
label_29:
#line 16
c_rt_lib0clear(&___nl__2);
#line 17
c_rt_lib0move(&___nl__4,___get_global_const(0));
#line 17
c_rt_lib0move(&___nl__3, c_rt_lib0array_get(___nl__1, ___nl__4));
#line 17
c_rt_lib0clear(&___nl__4);
#line 17
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(201)));
#line 17
c_rt_lib0move(&___nl__3, c_rt_lib0priv_as(___nl__3, ___get_global_const(90)));
#line 17
c_rt_lib0move(&___nl__2, ptd_parser0try_value_to_ptd(___nl__3));
#line 17
c_rt_lib0clear(&___nl__3);
#line 17
c_rt_lib0clear(&___nl__0);
#line 17
c_rt_lib0clear(&___nl__1);
#line 17
return ___nl__2;
#line 17
c_rt_lib0clear(&___nl__2);
#line 17
c_rt_lib0clear(&___nl__1);
#line 17
c_rt_lib0clear(&___nl__0);
#line 17
return NULL;
}

ImmT ptd_parser0try_value_to_ptd0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "ptd_parser0try_value_to_ptd");
return ptd_parser0try_value_to_ptd(_tab[0]);}
ImmT ptd_parser0try_value_to_ptd(ImmT ___nl__0) {
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
#line 21
c_rt_lib0move(&___nl__1, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(192)));
#line 22
c_rt_lib0copy(&___nl__2, ___nl__1);
#line 22
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__2, ___get_global_const(857)));
#line 22
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 22
if(c_rt_lib0check_true_native(___nl__2)){ goto label_52;}
#line 23
c_rt_lib0copy(&___nl__3, ___nl__1);
#line 23
c_rt_lib0move(&___nl__3, c_rt_lib0priv_as(___nl__3, ___get_global_const(857)));
#line 25
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(443)));
#line 25
c_rt_lib0move(&___nl__5,___get_global_const(267));
#line 25
c_rt_lib0move(&___nl__4, c_rt_lib0eq(___nl__4, ___nl__5));
#line 25
c_rt_lib0clear(&___nl__5);
#line 25
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 25
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 25
if(c_rt_lib0check_true_native(___nl__4)){ goto label_27;}
#line 24
c_rt_lib0move(&___nl__5,___get_global_const(1064));
#line 24
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(443)));
#line 24
c_rt_lib0move(&___nl__5, c_rt_lib0concat_add(___nl__5, ___nl__6));
#line 24
c_rt_lib0clear(&___nl__6);
#line 24
c_rt_lib0move(&___nl__5, c_rt_lib0ov_mk_arg(___get_global_const(47), ___nl__5));
#line 24
c_rt_lib0clear(&___nl__0);
#line 24
c_rt_lib0clear(&___nl__1);
#line 24
c_rt_lib0clear(&___nl__2);
#line 24
c_rt_lib0clear(&___nl__3);
#line 24
c_rt_lib0clear(&___nl__4);
#line 24
return ___nl__5;
#line 24
c_rt_lib0clear(&___nl__5);
#line 24
goto label_27;
#line 24
label_27:
#line 24
c_rt_lib0clear(&___nl__4);
#line 26
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(198)));
#line 26
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(192)));
#line 26
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__4, ___get_global_const(858)));
#line 27
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(132)));
#line 27
c_rt_lib0move(&___nl__7,___get_global_const(185));
#line 27
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__7));
#line 27
c_rt_lib0clear(&___nl__7);
#line 27
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(93)));
#line 27
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__7));
#line 27
c_rt_lib0clear(&___nl__7);
#line 27
c_rt_lib0move(&___nl__5, tct0ref(___nl__6));
#line 27
c_rt_lib0clear(&___nl__6);
#line 27
c_rt_lib0move(&___nl__5, c_rt_lib0ov_mk_arg(___get_global_const(48), ___nl__5));
#line 27
c_rt_lib0clear(&___nl__0);
#line 27
c_rt_lib0clear(&___nl__1);
#line 27
c_rt_lib0clear(&___nl__2);
#line 27
c_rt_lib0clear(&___nl__3);
#line 27
c_rt_lib0clear(&___nl__4);
#line 27
return ___nl__5;
#line 27
c_rt_lib0clear(&___nl__5);
#line 27
c_rt_lib0clear(&___nl__3);
#line 27
c_rt_lib0clear(&___nl__4);
#line 28
goto label_52;
#line 28
label_52:
#line 28
c_rt_lib0clear(&___nl__2);
#line 29
c_rt_lib0copy(&___nl__2, ___nl__1);
#line 29
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__2, ___get_global_const(811)));
#line 29
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 29
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 29
if(c_rt_lib0check_true_native(___nl__2)){ goto label_70;}
#line 29
c_rt_lib0move(&___nl__3,___get_global_const(1065));
#line 29
c_rt_lib0move(&___nl__4, ov0get_element(___nl__1));
#line 29
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 29
c_rt_lib0clear(&___nl__4);
#line 29
c_rt_lib0move(&___nl__3, c_rt_lib0ov_mk_arg(___get_global_const(47), ___nl__3));
#line 29
c_rt_lib0clear(&___nl__0);
#line 29
c_rt_lib0clear(&___nl__1);
#line 29
c_rt_lib0clear(&___nl__2);
#line 29
return ___nl__3;
#line 29
c_rt_lib0clear(&___nl__3);
#line 29
goto label_70;
#line 29
label_70:
#line 29
c_rt_lib0clear(&___nl__2);
#line 30
c_rt_lib0copy(&___nl__2, ___nl__1);
#line 30
c_rt_lib0move(&___nl__2, c_rt_lib0priv_as(___nl__2, ___get_global_const(811)));
#line 32
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(132)));
#line 32
c_rt_lib0move(&___nl__4,___get_global_const(676));
#line 32
c_rt_lib0move(&___nl__3, c_rt_lib0eq(___nl__3, ___nl__4));
#line 32
c_rt_lib0clear(&___nl__4);
#line 32
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 32
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 32
if(c_rt_lib0check_true_native(___nl__3)){ goto label_99;}
#line 31
c_rt_lib0move(&___nl__4,___get_global_const(1066));
#line 31
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(132)));
#line 31
c_rt_lib0move(&___nl__4, c_rt_lib0concat_add(___nl__4, ___nl__5));
#line 31
c_rt_lib0clear(&___nl__5);
#line 31
c_rt_lib0move(&___nl__5,___get_global_const(185));
#line 31
c_rt_lib0move(&___nl__4, c_rt_lib0concat_add(___nl__4, ___nl__5));
#line 31
c_rt_lib0clear(&___nl__5);
#line 31
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(93)));
#line 31
c_rt_lib0move(&___nl__4, c_rt_lib0concat_add(___nl__4, ___nl__5));
#line 31
c_rt_lib0clear(&___nl__5);
#line 31
c_rt_lib0move(&___nl__4, c_rt_lib0ov_mk_arg(___get_global_const(47), ___nl__4));
#line 31
c_rt_lib0clear(&___nl__0);
#line 31
c_rt_lib0clear(&___nl__1);
#line 31
c_rt_lib0clear(&___nl__2);
#line 31
c_rt_lib0clear(&___nl__3);
#line 31
return ___nl__4;
#line 31
c_rt_lib0clear(&___nl__4);
#line 31
goto label_99;
#line 31
label_99:
#line 31
c_rt_lib0clear(&___nl__3);
#line 33
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(89)));
#line 33
c_rt_lib0move(&___nl__3, array0len(___nl__4));
#line 33
c_rt_lib0clear(&___nl__4);
#line 34
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(93)));
#line 35
c_rt_lib0move(&___nl__5,___get_global_const(337));
#line 35
c_rt_lib0move(&___nl__5, c_rt_lib0eq(___nl__4, ___nl__5));
#line 35
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 35
if(c_rt_lib0check_true_native(___nl__5)){ goto label_140;}
#line 36
c_rt_lib0move(&___nl__6,___get_global_const(0));
#line 36
c_rt_lib0move(&___nl__6, c_rt_lib0num_eq(___nl__3, ___nl__6));
#line 36
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 36
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 36
if(c_rt_lib0check_true_native(___nl__6)){ goto label_127;}
#line 36
c_rt_lib0move(&___nl__7,___get_global_const(1067));
#line 36
c_rt_lib0move(&___nl__7, c_rt_lib0concat_add(___nl__7, ___nl__3));
#line 36
c_rt_lib0move(&___nl__7, c_rt_lib0ov_mk_arg(___get_global_const(47), ___nl__7));
#line 36
c_rt_lib0clear(&___nl__0);
#line 36
c_rt_lib0clear(&___nl__1);
#line 36
c_rt_lib0clear(&___nl__2);
#line 36
c_rt_lib0clear(&___nl__3);
#line 36
c_rt_lib0clear(&___nl__4);
#line 36
c_rt_lib0clear(&___nl__5);
#line 36
c_rt_lib0clear(&___nl__6);
#line 36
return ___nl__7;
#line 36
c_rt_lib0clear(&___nl__7);
#line 36
goto label_127;
#line 36
label_127:
#line 36
c_rt_lib0clear(&___nl__6);
#line 37
c_rt_lib0move(&___nl__6, tct0sim());
#line 37
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_arg(___get_global_const(48), ___nl__6));
#line 37
c_rt_lib0clear(&___nl__0);
#line 37
c_rt_lib0clear(&___nl__1);
#line 37
c_rt_lib0clear(&___nl__2);
#line 37
c_rt_lib0clear(&___nl__3);
#line 37
c_rt_lib0clear(&___nl__4);
#line 37
c_rt_lib0clear(&___nl__5);
#line 37
return ___nl__6;
#line 37
c_rt_lib0clear(&___nl__6);
#line 38
goto label_192;
#line 38
label_140:
#line 38
c_rt_lib0move(&___nl__5,___get_global_const(1026));
#line 38
c_rt_lib0move(&___nl__5, c_rt_lib0eq(___nl__4, ___nl__5));
#line 38
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 38
if(c_rt_lib0check_true_native(___nl__5)){ goto label_176;}
#line 39
c_rt_lib0move(&___nl__6,___get_global_const(0));
#line 39
c_rt_lib0move(&___nl__6, c_rt_lib0num_eq(___nl__3, ___nl__6));
#line 39
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 39
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 39
if(c_rt_lib0check_true_native(___nl__6)){ goto label_163;}
#line 39
c_rt_lib0move(&___nl__7,___get_global_const(1068));
#line 39
c_rt_lib0move(&___nl__7, c_rt_lib0concat_add(___nl__7, ___nl__3));
#line 39
c_rt_lib0move(&___nl__7, c_rt_lib0ov_mk_arg(___get_global_const(47), ___nl__7));
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
return ___nl__7;
#line 39
c_rt_lib0clear(&___nl__7);
#line 39
goto label_163;
#line 39
label_163:
#line 39
c_rt_lib0clear(&___nl__6);
#line 40
c_rt_lib0move(&___nl__6, tct0tct_im());
#line 40
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_arg(___get_global_const(48), ___nl__6));
#line 40
c_rt_lib0clear(&___nl__0);
#line 40
c_rt_lib0clear(&___nl__1);
#line 40
c_rt_lib0clear(&___nl__2);
#line 40
c_rt_lib0clear(&___nl__3);
#line 40
c_rt_lib0clear(&___nl__4);
#line 40
c_rt_lib0clear(&___nl__5);
#line 40
return ___nl__6;
#line 40
c_rt_lib0clear(&___nl__6);
#line 41
goto label_192;
#line 41
label_176:
#line 41
c_rt_lib0move(&___nl__5,___get_global_const(777));
#line 41
c_rt_lib0move(&___nl__5, c_rt_lib0eq(___nl__4, ___nl__5));
#line 41
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 41
if(c_rt_lib0check_true_native(___nl__5)){ goto label_192;}
#line 42
c_rt_lib0move(&___nl__6,___get_global_const(1069));
#line 42
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_arg(___get_global_const(47), ___nl__6));
#line 42
c_rt_lib0clear(&___nl__0);
#line 42
c_rt_lib0clear(&___nl__1);
#line 42
c_rt_lib0clear(&___nl__2);
#line 42
c_rt_lib0clear(&___nl__3);
#line 42
c_rt_lib0clear(&___nl__4);
#line 42
c_rt_lib0clear(&___nl__5);
#line 42
return ___nl__6;
#line 42
c_rt_lib0clear(&___nl__6);
#line 43
goto label_192;
#line 43
label_192:
#line 43
c_rt_lib0clear(&___nl__5);
#line 44
c_rt_lib0move(&___nl__5,___get_global_const(41));
#line 44
c_rt_lib0move(&___nl__5, c_rt_lib0eq(___nl__4, ___nl__5));
#line 44
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 44
if(c_rt_lib0check_true_native(___nl__5)){ goto label_209;}
#line 44
c_rt_lib0move(&___nl__6,___get_global_const(1070));
#line 44
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_arg(___get_global_const(47), ___nl__6));
#line 44
c_rt_lib0clear(&___nl__0);
#line 44
c_rt_lib0clear(&___nl__1);
#line 44
c_rt_lib0clear(&___nl__2);
#line 44
c_rt_lib0clear(&___nl__3);
#line 44
c_rt_lib0clear(&___nl__4);
#line 44
c_rt_lib0clear(&___nl__5);
#line 44
return ___nl__6;
#line 44
c_rt_lib0clear(&___nl__6);
#line 44
goto label_209;
#line 44
label_209:
#line 44
c_rt_lib0clear(&___nl__5);
#line 45
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(89)));
#line 45
c_rt_lib0move(&___nl__5, array0len(___nl__6));
#line 45
c_rt_lib0clear(&___nl__6);
#line 45
c_rt_lib0move(&___nl__6,___get_global_const(1));
#line 45
c_rt_lib0move(&___nl__5, c_rt_lib0num_eq(___nl__5, ___nl__6));
#line 45
c_rt_lib0clear(&___nl__6);
#line 45
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 45
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 45
if(c_rt_lib0check_true_native(___nl__5)){ goto label_235;}
#line 45
c_rt_lib0move(&___nl__6,___get_global_const(1071));
#line 45
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__4));
#line 45
c_rt_lib0move(&___nl__7,___get_global_const(1072));
#line 45
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__7));
#line 45
c_rt_lib0clear(&___nl__7);
#line 45
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_arg(___get_global_const(47), ___nl__6));
#line 45
c_rt_lib0clear(&___nl__0);
#line 45
c_rt_lib0clear(&___nl__1);
#line 45
c_rt_lib0clear(&___nl__2);
#line 45
c_rt_lib0clear(&___nl__3);
#line 45
c_rt_lib0clear(&___nl__4);
#line 45
c_rt_lib0clear(&___nl__5);
#line 45
return ___nl__6;
#line 45
c_rt_lib0clear(&___nl__6);
#line 45
goto label_235;
#line 45
label_235:
#line 45
c_rt_lib0clear(&___nl__5);
#line 46
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(89)));
#line 46
c_rt_lib0move(&___nl__6,___get_global_const(0));
#line 46
c_rt_lib0move(&___nl__5, c_rt_lib0array_get(___nl__5, ___nl__6));
#line 46
c_rt_lib0clear(&___nl__6);
#line 46
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(198)));
#line 47
c_rt_lib0move(&___nl__6,___get_global_const(1073));
#line 47
c_rt_lib0move(&___nl__6, c_rt_lib0eq(___nl__4, ___nl__6));
#line 47
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 47
if(c_rt_lib0check_true_native(___nl__6)){ goto label_300;}
#line 48
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(192)));
#line 48
c_rt_lib0move(&___nl__7, c_rt_lib0priv_is(___nl__7, ___get_global_const(205)));
#line 48
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 48
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 48
if(c_rt_lib0check_true_native(___nl__7)){ goto label_267;}
#line 48
c_rt_lib0move(&___nl__8,___get_global_const(1074));
#line 48
c_rt_lib0move(&___nl__9, ov0get_element(___nl__5));
#line 48
c_rt_lib0move(&___nl__8, c_rt_lib0concat_add(___nl__8, ___nl__9));
#line 48
c_rt_lib0clear(&___nl__9);
#line 48
c_rt_lib0move(&___nl__8, c_rt_lib0ov_mk_arg(___get_global_const(47), ___nl__8));
#line 48
c_rt_lib0clear(&___nl__0);
#line 48
c_rt_lib0clear(&___nl__1);
#line 48
c_rt_lib0clear(&___nl__2);
#line 48
c_rt_lib0clear(&___nl__3);
#line 48
c_rt_lib0clear(&___nl__4);
#line 48
c_rt_lib0clear(&___nl__5);
#line 48
c_rt_lib0clear(&___nl__6);
#line 48
c_rt_lib0clear(&___nl__7);
#line 48
return ___nl__8;
#line 48
c_rt_lib0clear(&___nl__8);
#line 48
goto label_267;
#line 48
label_267:
#line 48
c_rt_lib0clear(&___nl__7);
#line 49
c_rt_lib0move(&___nl__9, ptd_parser_priv0parse_hash(___nl__5));
#line 49
c_rt_lib0move(&___nl__8, c_rt_lib0priv_is(___nl__9, ___get_global_const(48)));
#line 49
if(c_rt_lib0check_true_native(___nl__8)){ goto label_282;}
#line 49
c_rt_lib0clear(&___nl__0);
#line 49
c_rt_lib0clear(&___nl__1);
#line 49
c_rt_lib0clear(&___nl__2);
#line 49
c_rt_lib0clear(&___nl__3);
#line 49
c_rt_lib0clear(&___nl__4);
#line 49
c_rt_lib0clear(&___nl__5);
#line 49
c_rt_lib0clear(&___nl__6);
#line 49
c_rt_lib0clear(&___nl__7);
#line 49
c_rt_lib0clear(&___nl__8);
#line 49
return ___nl__9;
#line 49
label_282:
#line 49
c_rt_lib0move(&___nl__7, c_rt_lib0priv_as(___nl__9, ___get_global_const(48)));
#line 49
c_rt_lib0clear(&___nl__8);
#line 49
c_rt_lib0clear(&___nl__9);
#line 50
c_rt_lib0move(&___nl__8, tct0rec(___nl__7));
#line 50
c_rt_lib0move(&___nl__8, c_rt_lib0ov_mk_arg(___get_global_const(48), ___nl__8));
#line 50
c_rt_lib0clear(&___nl__0);
#line 50
c_rt_lib0clear(&___nl__1);
#line 50
c_rt_lib0clear(&___nl__2);
#line 50
c_rt_lib0clear(&___nl__3);
#line 50
c_rt_lib0clear(&___nl__4);
#line 50
c_rt_lib0clear(&___nl__5);
#line 50
c_rt_lib0clear(&___nl__6);
#line 50
c_rt_lib0clear(&___nl__7);
#line 50
return ___nl__8;
#line 50
c_rt_lib0clear(&___nl__8);
#line 50
c_rt_lib0clear(&___nl__7);
#line 51
goto label_542;
#line 51
label_300:
#line 51
c_rt_lib0move(&___nl__6,___get_global_const(328));
#line 51
c_rt_lib0move(&___nl__6, c_rt_lib0eq(___nl__4, ___nl__6));
#line 51
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 51
if(c_rt_lib0check_true_native(___nl__6)){ goto label_336;}
#line 52
c_rt_lib0move(&___nl__9, ptd_parser0try_value_to_ptd(___nl__5));
#line 52
c_rt_lib0move(&___nl__8, c_rt_lib0priv_is(___nl__9, ___get_global_const(48)));
#line 52
if(c_rt_lib0check_true_native(___nl__8)){ goto label_318;}
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
return ___nl__9;
#line 52
label_318:
#line 52
c_rt_lib0move(&___nl__7, c_rt_lib0priv_as(___nl__9, ___get_global_const(48)));
#line 52
c_rt_lib0clear(&___nl__8);
#line 52
c_rt_lib0clear(&___nl__9);
#line 53
c_rt_lib0move(&___nl__8, tct0hash(___nl__7));
#line 53
c_rt_lib0move(&___nl__8, c_rt_lib0ov_mk_arg(___get_global_const(48), ___nl__8));
#line 53
c_rt_lib0clear(&___nl__0);
#line 53
c_rt_lib0clear(&___nl__1);
#line 53
c_rt_lib0clear(&___nl__2);
#line 53
c_rt_lib0clear(&___nl__3);
#line 53
c_rt_lib0clear(&___nl__4);
#line 53
c_rt_lib0clear(&___nl__5);
#line 53
c_rt_lib0clear(&___nl__6);
#line 53
c_rt_lib0clear(&___nl__7);
#line 53
return ___nl__8;
#line 53
c_rt_lib0clear(&___nl__8);
#line 53
c_rt_lib0clear(&___nl__7);
#line 54
goto label_542;
#line 54
label_336:
#line 54
c_rt_lib0move(&___nl__6,___get_global_const(327));
#line 54
c_rt_lib0move(&___nl__6, c_rt_lib0eq(___nl__4, ___nl__6));
#line 54
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 54
if(c_rt_lib0check_true_native(___nl__6)){ goto label_372;}
#line 55
c_rt_lib0move(&___nl__9, ptd_parser0try_value_to_ptd(___nl__5));
#line 55
c_rt_lib0move(&___nl__8, c_rt_lib0priv_is(___nl__9, ___get_global_const(48)));
#line 55
if(c_rt_lib0check_true_native(___nl__8)){ goto label_354;}
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
return ___nl__9;
#line 55
label_354:
#line 55
c_rt_lib0move(&___nl__7, c_rt_lib0priv_as(___nl__9, ___get_global_const(48)));
#line 55
c_rt_lib0clear(&___nl__8);
#line 55
c_rt_lib0clear(&___nl__9);
#line 56
c_rt_lib0move(&___nl__8, tct0arr(___nl__7));
#line 56
c_rt_lib0move(&___nl__8, c_rt_lib0ov_mk_arg(___get_global_const(48), ___nl__8));
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
c_rt_lib0clear(&___nl__6);
#line 56
c_rt_lib0clear(&___nl__7);
#line 56
return ___nl__8;
#line 56
c_rt_lib0clear(&___nl__8);
#line 56
c_rt_lib0clear(&___nl__7);
#line 57
goto label_542;
#line 57
label_372:
#line 57
c_rt_lib0move(&___nl__6,___get_global_const(848));
#line 57
c_rt_lib0move(&___nl__6, c_rt_lib0eq(___nl__4, ___nl__6));
#line 57
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 57
if(c_rt_lib0check_true_native(___nl__6)){ goto label_528;}
#line 58
c_rt_lib0move(&___nl__7,___get_global_const(1));
#line 58
c_rt_lib0move(&___nl__7, c_rt_lib0num_eq(___nl__3, ___nl__7));
#line 58
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 58
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 58
if(c_rt_lib0check_true_native(___nl__7)){ goto label_396;}
#line 58
c_rt_lib0move(&___nl__8,___get_global_const(1075));
#line 58
c_rt_lib0move(&___nl__8, c_rt_lib0concat_add(___nl__8, ___nl__3));
#line 58
c_rt_lib0move(&___nl__8, c_rt_lib0ov_mk_arg(___get_global_const(47), ___nl__8));
#line 58
c_rt_lib0clear(&___nl__0);
#line 58
c_rt_lib0clear(&___nl__1);
#line 58
c_rt_lib0clear(&___nl__2);
#line 58
c_rt_lib0clear(&___nl__3);
#line 58
c_rt_lib0clear(&___nl__4);
#line 58
c_rt_lib0clear(&___nl__5);
#line 58
c_rt_lib0clear(&___nl__6);
#line 58
c_rt_lib0clear(&___nl__7);
#line 58
return ___nl__8;
#line 58
c_rt_lib0clear(&___nl__8);
#line 58
goto label_396;
#line 58
label_396:
#line 58
c_rt_lib0clear(&___nl__7);
#line 59
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(192)));
#line 59
c_rt_lib0move(&___nl__7, c_rt_lib0priv_is(___nl__7, ___get_global_const(205)));
#line 59
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 59
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 59
if(c_rt_lib0check_true_native(___nl__7)){ goto label_419;}
#line 59
c_rt_lib0move(&___nl__8,___get_global_const(1076));
#line 59
c_rt_lib0move(&___nl__9, ov0get_element(___nl__5));
#line 59
c_rt_lib0move(&___nl__8, c_rt_lib0concat_add(___nl__8, ___nl__9));
#line 59
c_rt_lib0clear(&___nl__9);
#line 59
c_rt_lib0move(&___nl__8, c_rt_lib0ov_mk_arg(___get_global_const(47), ___nl__8));
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
return ___nl__8;
#line 59
c_rt_lib0clear(&___nl__8);
#line 59
goto label_419;
#line 59
label_419:
#line 59
c_rt_lib0clear(&___nl__7);
#line 60
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(192)));
#line 60
c_rt_lib0move(&___nl__7, c_rt_lib0priv_as(___nl__7, ___get_global_const(205)));
#line 61
c_rt_lib0move(&___nl__8, c_rt_lib0hash_mk(0));
#line 62
c_rt_lib0move(&___nl__10,___get_global_const(0));
#line 62
c_rt_lib0move(&___nl__11,___get_global_const(1));
#line 62
c_rt_lib0move(&___nl__12, c_rt_lib0array_len(___nl__7));
#line 62
label_427:
#line 62
c_rt_lib0move(&___nl__13, c_rt_lib0ge(___nl__10, ___nl__12));
#line 62
if(c_rt_lib0check_true_native(___nl__13)){ goto label_506;}
#line 62
c_rt_lib0move(&___nl__9, c_rt_lib0array_get(___nl__7, ___nl__10));
#line 63
c_rt_lib0move(&___nl__14, c_rt_lib0hash_get_value_dec(___nl__9, ___get_global_const(198)));
#line 63
c_rt_lib0move(&___nl__14, c_rt_lib0hash_get_value_dec(___nl__14, ___get_global_const(192)));
#line 63
c_rt_lib0move(&___nl__14, c_rt_lib0priv_is(___nl__14, ___get_global_const(811)));
#line 63
c_rt_lib0move(&___nl__14, c_rt_lib0not(___nl__14));
#line 63
if(c_rt_lib0check_true_native(___nl__14)){ goto label_469;}
#line 64
c_rt_lib0move(&___nl__15, c_rt_lib0hash_get_value_dec(___nl__9, ___get_global_const(198)));
#line 64
c_rt_lib0move(&___nl__15, c_rt_lib0hash_get_value_dec(___nl__15, ___get_global_const(192)));
#line 64
c_rt_lib0move(&___nl__15, c_rt_lib0priv_as(___nl__15, ___get_global_const(811)));
#line 64
c_rt_lib0copy(&___nl__2, ___nl__15);
#line 64
c_rt_lib0clear(&___nl__15);
#line 65
c_rt_lib0move(&___nl__15, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(132)));
#line 65
c_rt_lib0move(&___nl__17,___get_global_const(676));
#line 65
c_rt_lib0move(&___nl__15, c_rt_lib0eq(___nl__15, ___nl__17));
#line 65
c_rt_lib0clear(&___nl__17);
#line 65
c_rt_lib0move(&___nl__16, c_rt_lib0not(___nl__15));
#line 65
if(c_rt_lib0check_true_native(___nl__16)){ goto label_451;}
#line 65
c_rt_lib0move(&___nl__15, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(93)));
#line 65
c_rt_lib0move(&___nl__17,___get_global_const(41));
#line 65
c_rt_lib0move(&___nl__15, c_rt_lib0eq(___nl__15, ___nl__17));
#line 65
c_rt_lib0clear(&___nl__17);
#line 65
label_451:
#line 65
c_rt_lib0clear(&___nl__16);
#line 65
c_rt_lib0move(&___nl__15, c_rt_lib0not(___nl__15));
#line 65
if(c_rt_lib0check_true_native(___nl__15)){ goto label_466;}
#line 66
c_rt_lib0move(&___nl__16, c_rt_lib0hash_get_value_dec(___nl__9, ___get_global_const(329)));
#line 66
c_rt_lib0move(&___nl__16, c_rt_lib0hash_get_value_dec(___nl__16, ___get_global_const(192)));
#line 66
c_rt_lib0move(&___nl__16, c_rt_lib0priv_as(___nl__16, ___get_global_const(855)));
#line 66
c_rt_lib0move(&___nl__17, tct0none());
#line 66
c_rt_lib0delete(hash0set_value(&___nl__8, ___nl__16, ___nl__17));
#line 66
c_rt_lib0clear(&___nl__17);
#line 66
c_rt_lib0clear(&___nl__16);
#line 67
c_rt_lib0clear(&___nl__14);
#line 67
c_rt_lib0clear(&___nl__15);
#line 67
goto label_503;
#line 68
goto label_466;
#line 68
label_466:
#line 68
c_rt_lib0clear(&___nl__15);
#line 69
goto label_469;
#line 69
label_469:
#line 69
c_rt_lib0clear(&___nl__14);
#line 70
c_rt_lib0move(&___nl__17, c_rt_lib0hash_get_value_dec(___nl__9, ___get_global_const(198)));
#line 70
c_rt_lib0move(&___nl__16, ptd_parser0try_value_to_ptd(___nl__17));
#line 70
c_rt_lib0clear(&___nl__17);
#line 70
c_rt_lib0move(&___nl__15, c_rt_lib0priv_is(___nl__16, ___get_global_const(48)));
#line 70
if(c_rt_lib0check_true_native(___nl__15)){ goto label_493;}
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
c_rt_lib0clear(&___nl__5);
#line 70
c_rt_lib0clear(&___nl__6);
#line 70
c_rt_lib0clear(&___nl__7);
#line 70
c_rt_lib0clear(&___nl__8);
#line 70
c_rt_lib0clear(&___nl__9);
#line 70
c_rt_lib0clear(&___nl__10);
#line 70
c_rt_lib0clear(&___nl__11);
#line 70
c_rt_lib0clear(&___nl__12);
#line 70
c_rt_lib0clear(&___nl__13);
#line 70
c_rt_lib0clear(&___nl__14);
#line 70
c_rt_lib0clear(&___nl__15);
#line 70
return ___nl__16;
#line 70
label_493:
#line 70
c_rt_lib0move(&___nl__14, c_rt_lib0priv_as(___nl__16, ___get_global_const(48)));
#line 70
c_rt_lib0clear(&___nl__15);
#line 70
c_rt_lib0clear(&___nl__16);
#line 71
c_rt_lib0move(&___nl__15, c_rt_lib0hash_get_value_dec(___nl__9, ___get_global_const(329)));
#line 71
c_rt_lib0move(&___nl__15, c_rt_lib0hash_get_value_dec(___nl__15, ___get_global_const(192)));
#line 71
c_rt_lib0move(&___nl__15, c_rt_lib0priv_as(___nl__15, ___get_global_const(855)));
#line 71
c_rt_lib0delete(hash0set_value(&___nl__8, ___nl__15, ___nl__14));
#line 71
c_rt_lib0clear(&___nl__15);
#line 71
c_rt_lib0clear(&___nl__14);
#line 71
label_503:
#line 72
c_rt_lib0move(&___nl__10, c_rt_lib0add_mod(___nl__10, ___nl__11));
#line 72
goto label_427;
#line 72
label_506:
#line 72
c_rt_lib0clear(&___nl__9);
#line 72
c_rt_lib0clear(&___nl__10);
#line 72
c_rt_lib0clear(&___nl__11);
#line 72
c_rt_lib0clear(&___nl__12);
#line 72
c_rt_lib0clear(&___nl__13);
#line 73
c_rt_lib0move(&___nl__9, tct0var(___nl__8));
#line 73
c_rt_lib0move(&___nl__9, c_rt_lib0ov_mk_arg(___get_global_const(48), ___nl__9));
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
c_rt_lib0clear(&___nl__6);
#line 73
c_rt_lib0clear(&___nl__7);
#line 73
c_rt_lib0clear(&___nl__8);
#line 73
return ___nl__9;
#line 73
c_rt_lib0clear(&___nl__9);
#line 73
c_rt_lib0clear(&___nl__7);
#line 73
c_rt_lib0clear(&___nl__8);
#line 74
goto label_542;
#line 74
label_528:
#line 75
c_rt_lib0move(&___nl__7,___get_global_const(1077));
#line 75
c_rt_lib0move(&___nl__7, c_rt_lib0concat_add(___nl__7, ___nl__4));
#line 75
c_rt_lib0move(&___nl__7, c_rt_lib0ov_mk_arg(___get_global_const(47), ___nl__7));
#line 75
c_rt_lib0clear(&___nl__0);
#line 75
c_rt_lib0clear(&___nl__1);
#line 75
c_rt_lib0clear(&___nl__2);
#line 75
c_rt_lib0clear(&___nl__3);
#line 75
c_rt_lib0clear(&___nl__4);
#line 75
c_rt_lib0clear(&___nl__5);
#line 75
c_rt_lib0clear(&___nl__6);
#line 75
return ___nl__7;
#line 75
c_rt_lib0clear(&___nl__7);
#line 76
goto label_542;
#line 76
label_542:
#line 76
c_rt_lib0clear(&___nl__6);
#line 76
c_rt_lib0clear(&___nl__1);
#line 76
c_rt_lib0clear(&___nl__2);
#line 76
c_rt_lib0clear(&___nl__3);
#line 76
c_rt_lib0clear(&___nl__4);
#line 76
c_rt_lib0clear(&___nl__5);
#line 76
c_rt_lib0clear(&___nl__0);
#line 76
return NULL;
}

ImmT ptd_parser_priv0parse_hash(ImmT ___nl__0) {
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
#line 80
c_rt_lib0move(&___nl__1, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(192)));
#line 80
c_rt_lib0move(&___nl__1, c_rt_lib0priv_as(___nl__1, ___get_global_const(205)));
#line 81
c_rt_lib0move(&___nl__2, c_rt_lib0hash_mk(0));
#line 82
c_rt_lib0move(&___nl__4,___get_global_const(0));
#line 82
c_rt_lib0move(&___nl__5,___get_global_const(1));
#line 82
c_rt_lib0move(&___nl__6, c_rt_lib0array_len(___nl__1));
#line 82
label_6:
#line 82
c_rt_lib0move(&___nl__7, c_rt_lib0ge(___nl__4, ___nl__6));
#line 82
if(c_rt_lib0check_true_native(___nl__7)){ goto label_38;}
#line 82
c_rt_lib0move(&___nl__3, c_rt_lib0array_get(___nl__1, ___nl__4));
#line 83
c_rt_lib0move(&___nl__11, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(198)));
#line 83
c_rt_lib0move(&___nl__10, ptd_parser0try_value_to_ptd(___nl__11));
#line 83
c_rt_lib0clear(&___nl__11);
#line 83
c_rt_lib0move(&___nl__9, c_rt_lib0priv_is(___nl__10, ___get_global_const(48)));
#line 83
if(c_rt_lib0check_true_native(___nl__9)){ goto label_26;}
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
c_rt_lib0clear(&___nl__7);
#line 83
c_rt_lib0clear(&___nl__8);
#line 83
c_rt_lib0clear(&___nl__9);
#line 83
return ___nl__10;
#line 83
label_26:
#line 83
c_rt_lib0move(&___nl__8, c_rt_lib0priv_as(___nl__10, ___get_global_const(48)));
#line 83
c_rt_lib0clear(&___nl__9);
#line 83
c_rt_lib0clear(&___nl__10);
#line 84
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(329)));
#line 84
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__9, ___get_global_const(192)));
#line 84
c_rt_lib0move(&___nl__9, c_rt_lib0priv_as(___nl__9, ___get_global_const(855)));
#line 84
c_rt_lib0delete(hash0set_value(&___nl__2, ___nl__9, ___nl__8));
#line 84
c_rt_lib0clear(&___nl__9);
#line 84
c_rt_lib0clear(&___nl__8);
#line 85
c_rt_lib0move(&___nl__4, c_rt_lib0add_mod(___nl__4, ___nl__5));
#line 85
goto label_6;
#line 85
label_38:
#line 85
c_rt_lib0clear(&___nl__3);
#line 85
c_rt_lib0clear(&___nl__4);
#line 85
c_rt_lib0clear(&___nl__5);
#line 85
c_rt_lib0clear(&___nl__6);
#line 85
c_rt_lib0clear(&___nl__7);
#line 86
c_rt_lib0move(&___nl__3, c_rt_lib0ov_mk_arg(___get_global_const(48), ___nl__2));
#line 86
c_rt_lib0clear(&___nl__0);
#line 86
c_rt_lib0clear(&___nl__1);
#line 86
c_rt_lib0clear(&___nl__2);
#line 86
return ___nl__3;
#line 86
c_rt_lib0clear(&___nl__3);
#line 86
c_rt_lib0clear(&___nl__1);
#line 86
c_rt_lib0clear(&___nl__2);
#line 86
c_rt_lib0clear(&___nl__0);
#line 86
return NULL;
}


static ImmT ___const__[1];
static int ___const_init__ = 1;
void ptd_parser0__const__init(){
if(!___const_init__) nl_die();
___const_init__ = 0;
__const__f = &___const__[0];


for(int i=0;i<0;++i) ___const__[i] = NULL;
c_rt_lib0register_const(___const__, 0);
}
ImmT ptd_parser_priv0__const__sim(int __nr) {
ImmT ret = NULL;
c_rt_lib0copy(&ret, ___const__[__nr]);
return ret;
}
ImmT ptd_parser_priv0__const__sing(int __nr) {
if(___const__[__nr+0]==NULL) {
switch(__nr){
default:
	nl_die();
}}
ImmT ret = NULL;
c_rt_lib0copy(&ret, ___const__[__nr+0]);
return ret;
}
