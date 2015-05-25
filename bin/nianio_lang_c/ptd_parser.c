
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
void ptd_parser_priv0__const__init();
ImmT ptd_parser_priv0__const__sim(int __nr);
ImmT ptd_parser_priv0__const__sing(int __nr);

ImmT ptd_parser_priv0parse_hash(ImmT ___nl__0);


ImmT ptd_parser0fun_def_to_ptd0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "ptd_parser0fun_def_to_ptd");
return ptd_parser0fun_def_to_ptd(_tab[0]);}
ImmT ptd_parser0fun_def_to_ptd(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
ptd_parser_priv0__const__init();
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
#line 15
c_rt_lib0move(&___nl__1, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(209)));
#line 16
c_rt_lib0copy(&___nl__2, ___nl__1);
#line 16
c_rt_lib0move(&___nl__2, c_rt_lib0priv_as(___nl__2, ___get_global_const(751)));
#line 16
c_rt_lib0copy(&___nl__1, ___nl__2);
#line 16
c_rt_lib0clear(&___nl__2);
#line 17
c_rt_lib0move(&___nl__2, array0len(___nl__1));
#line 17
c_rt_lib0move(&___nl__4,___get_global_const(2));
#line 17
c_rt_lib0move(&___nl__2, c_rt_lib0num_eq(___nl__2, ___nl__4));
#line 17
c_rt_lib0clear(&___nl__4);
#line 17
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__2));
#line 17
if(c_rt_lib0check_true_native(___nl__3)){ goto label_3;}
#line 17
c_rt_lib0move(&___nl__5,___get_global_const(1));
#line 17
c_rt_lib0move(&___nl__4, c_rt_lib0array_get(___nl__1, ___nl__5));
#line 17
c_rt_lib0clear(&___nl__5);
#line 17
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(209)));
#line 17
c_rt_lib0move(&___nl__5,___get_global_const(210));
#line 17
c_rt_lib0move(&___nl__2, ov0is(___nl__4, ___nl__5));
#line 17
c_rt_lib0clear(&___nl__5);
#line 17
c_rt_lib0clear(&___nl__4);
#line 17
label_3:
#line 17
c_rt_lib0clear(&___nl__3);
#line 17
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 17
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 17
if(c_rt_lib0check_true_native(___nl__2)){ goto label_2;}
#line 17
c_rt_lib0move(&___nl__3,___get_global_const(964));
#line 17
c_rt_lib0move(&___nl__3, c_rt_lib0ov_mk_arg(___get_global_const(43), ___nl__3));
#line 17
c_rt_lib0clear(&___nl__0);
#line 17
c_rt_lib0clear(&___nl__1);
#line 17
c_rt_lib0clear(&___nl__2);
#line 17
return ___nl__3;
#line 17
c_rt_lib0clear(&___nl__3);
#line 17
goto label_2;
#line 17
label_2:
#line 17
c_rt_lib0clear(&___nl__2);
#line 18
c_rt_lib0move(&___nl__4,___get_global_const(1));
#line 18
c_rt_lib0move(&___nl__3, c_rt_lib0array_get(___nl__1, ___nl__4));
#line 18
c_rt_lib0clear(&___nl__4);
#line 18
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(209)));
#line 18
c_rt_lib0move(&___nl__3, c_rt_lib0priv_as(___nl__3, ___get_global_const(210)));
#line 18
c_rt_lib0move(&___nl__2, ptd_parser0try_value_to_ptd(___nl__3));
#line 18
c_rt_lib0clear(&___nl__3);
#line 18
c_rt_lib0clear(&___nl__0);
#line 18
c_rt_lib0clear(&___nl__1);
#line 18
return ___nl__2;
#line 18
c_rt_lib0clear(&___nl__2);
#line 18
c_rt_lib0clear(&___nl__1);
#line 18
c_rt_lib0clear(&___nl__0);
#line 18
return NULL;
}

ImmT ptd_parser0try_value_to_ptd0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "ptd_parser0try_value_to_ptd");
return ptd_parser0try_value_to_ptd(_tab[0]);}
ImmT ptd_parser0try_value_to_ptd(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
ptd_parser_priv0__const__init();
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
#line 22
c_rt_lib0move(&___nl__2,___get_global_const(780));
#line 22
c_rt_lib0move(&___nl__1, ov0is(___nl__0, ___nl__2));
#line 22
c_rt_lib0clear(&___nl__2);
#line 22
c_rt_lib0move(&___nl__1, c_rt_lib0not(___nl__1));
#line 22
if(c_rt_lib0check_true_native(___nl__1)){ goto label_2;}
#line 23
c_rt_lib0move(&___nl__3,___get_global_const(780));
#line 23
c_rt_lib0move(&___nl__2, ov0as(___nl__0, ___nl__3));
#line 23
c_rt_lib0clear(&___nl__3);
#line 24
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(401)));
#line 24
c_rt_lib0move(&___nl__4,___get_global_const(184));
#line 24
c_rt_lib0move(&___nl__3, c_rt_lib0eq(___nl__3, ___nl__4));
#line 24
c_rt_lib0clear(&___nl__4);
#line 24
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 24
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 24
if(c_rt_lib0check_true_native(___nl__3)){ goto label_4;}
#line 24
c_rt_lib0move(&___nl__4,___get_global_const(965));
#line 24
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(401)));
#line 24
c_rt_lib0move(&___nl__4, c_rt_lib0concat_add(___nl__4, ___nl__5));
#line 24
c_rt_lib0clear(&___nl__5);
#line 24
c_rt_lib0move(&___nl__4, c_rt_lib0ov_mk_arg(___get_global_const(43), ___nl__4));
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
#line 24
goto label_4;
#line 24
label_4:
#line 24
c_rt_lib0clear(&___nl__3);
#line 27
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(234)));
#line 27
c_rt_lib0move(&___nl__5,___get_global_const(781));
#line 27
c_rt_lib0move(&___nl__3, ov0as(___nl__4, ___nl__5));
#line 27
c_rt_lib0clear(&___nl__5);
#line 27
c_rt_lib0clear(&___nl__4);
#line 28
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(99)));
#line 28
c_rt_lib0move(&___nl__6,___get_global_const(579));
#line 28
c_rt_lib0move(&___nl__5, c_rt_lib0concat_add(___nl__5, ___nl__6));
#line 28
c_rt_lib0clear(&___nl__6);
#line 28
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(76)));
#line 28
c_rt_lib0move(&___nl__5, c_rt_lib0concat_add(___nl__5, ___nl__6));
#line 28
c_rt_lib0clear(&___nl__6);
#line 28
c_rt_lib0move(&___nl__4, tct0ref(___nl__5));
#line 28
c_rt_lib0clear(&___nl__5);
#line 28
c_rt_lib0move(&___nl__4, c_rt_lib0ov_mk_arg(___get_global_const(44), ___nl__4));
#line 28
c_rt_lib0clear(&___nl__0);
#line 28
c_rt_lib0clear(&___nl__1);
#line 28
c_rt_lib0clear(&___nl__2);
#line 28
c_rt_lib0clear(&___nl__3);
#line 28
return ___nl__4;
#line 28
c_rt_lib0clear(&___nl__4);
#line 28
c_rt_lib0clear(&___nl__2);
#line 28
c_rt_lib0clear(&___nl__3);
#line 29
goto label_2;
#line 29
label_2:
#line 29
c_rt_lib0clear(&___nl__1);
#line 31
c_rt_lib0move(&___nl__2,___get_global_const(735));
#line 31
c_rt_lib0move(&___nl__1, ov0is(___nl__0, ___nl__2));
#line 31
c_rt_lib0clear(&___nl__2);
#line 31
c_rt_lib0move(&___nl__1, c_rt_lib0not(___nl__1));
#line 31
c_rt_lib0move(&___nl__1, c_rt_lib0not(___nl__1));
#line 31
if(c_rt_lib0check_true_native(___nl__1)){ goto label_6;}
#line 31
c_rt_lib0move(&___nl__2,___get_global_const(966));
#line 31
c_rt_lib0move(&___nl__3, ov0get_element(___nl__0));
#line 31
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__3));
#line 31
c_rt_lib0clear(&___nl__3);
#line 31
c_rt_lib0move(&___nl__2, c_rt_lib0ov_mk_arg(___get_global_const(43), ___nl__2));
#line 31
c_rt_lib0clear(&___nl__0);
#line 31
c_rt_lib0clear(&___nl__1);
#line 31
return ___nl__2;
#line 31
c_rt_lib0clear(&___nl__2);
#line 31
goto label_6;
#line 31
label_6:
#line 31
c_rt_lib0clear(&___nl__1);
#line 32
c_rt_lib0copy(&___nl__1, ___nl__0);
#line 32
c_rt_lib0move(&___nl__1, c_rt_lib0priv_as(___nl__1, ___get_global_const(735)));
#line 33
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(99)));
#line 33
c_rt_lib0move(&___nl__3,___get_global_const(621));
#line 33
c_rt_lib0move(&___nl__2, c_rt_lib0eq(___nl__2, ___nl__3));
#line 33
c_rt_lib0clear(&___nl__3);
#line 33
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 33
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 33
if(c_rt_lib0check_true_native(___nl__2)){ goto label_8;}
#line 33
c_rt_lib0move(&___nl__3,___get_global_const(967));
#line 33
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(99)));
#line 33
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 33
c_rt_lib0clear(&___nl__4);
#line 33
c_rt_lib0move(&___nl__4,___get_global_const(579));
#line 33
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 33
c_rt_lib0clear(&___nl__4);
#line 33
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(76)));
#line 33
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 33
c_rt_lib0clear(&___nl__4);
#line 33
c_rt_lib0move(&___nl__3, c_rt_lib0ov_mk_arg(___get_global_const(43), ___nl__3));
#line 33
c_rt_lib0clear(&___nl__0);
#line 33
c_rt_lib0clear(&___nl__1);
#line 33
c_rt_lib0clear(&___nl__2);
#line 33
return ___nl__3;
#line 33
c_rt_lib0clear(&___nl__3);
#line 33
goto label_8;
#line 33
label_8:
#line 33
c_rt_lib0clear(&___nl__2);
#line 36
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(73)));
#line 36
c_rt_lib0move(&___nl__2, array0len(___nl__3));
#line 36
c_rt_lib0clear(&___nl__3);
#line 37
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(76)));
#line 38
c_rt_lib0move(&___nl__4,___get_global_const(287));
#line 38
c_rt_lib0move(&___nl__4, c_rt_lib0eq(___nl__3, ___nl__4));
#line 38
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 38
if(c_rt_lib0check_true_native(___nl__4)){ goto label_10;}
#line 39
c_rt_lib0move(&___nl__5,___get_global_const(1));
#line 39
c_rt_lib0move(&___nl__5, c_rt_lib0num_eq(___nl__2, ___nl__5));
#line 39
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 39
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 39
if(c_rt_lib0check_true_native(___nl__5)){ goto label_12;}
#line 39
c_rt_lib0move(&___nl__6,___get_global_const(968));
#line 39
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__2));
#line 39
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_arg(___get_global_const(43), ___nl__6));
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
return ___nl__6;
#line 39
c_rt_lib0clear(&___nl__6);
#line 39
goto label_12;
#line 39
label_12:
#line 39
c_rt_lib0clear(&___nl__5);
#line 40
c_rt_lib0move(&___nl__5, tct0sim());
#line 40
c_rt_lib0move(&___nl__5, c_rt_lib0ov_mk_arg(___get_global_const(44), ___nl__5));
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
return ___nl__5;
#line 40
c_rt_lib0clear(&___nl__5);
#line 41
goto label_16;
#line 41
label_10:
#line 41
c_rt_lib0move(&___nl__4,___get_global_const(949));
#line 41
c_rt_lib0move(&___nl__4, c_rt_lib0eq(___nl__3, ___nl__4));
#line 41
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 41
if(c_rt_lib0check_true_native(___nl__4)){ goto label_13;}
#line 42
c_rt_lib0move(&___nl__5,___get_global_const(1));
#line 42
c_rt_lib0move(&___nl__5, c_rt_lib0num_eq(___nl__2, ___nl__5));
#line 42
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 42
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 42
if(c_rt_lib0check_true_native(___nl__5)){ goto label_15;}
#line 42
c_rt_lib0move(&___nl__6,___get_global_const(969));
#line 42
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__2));
#line 42
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_arg(___get_global_const(43), ___nl__6));
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
#line 42
goto label_15;
#line 42
label_15:
#line 42
c_rt_lib0clear(&___nl__5);
#line 43
c_rt_lib0move(&___nl__5, tct0tct_im());
#line 43
c_rt_lib0move(&___nl__5, c_rt_lib0ov_mk_arg(___get_global_const(44), ___nl__5));
#line 43
c_rt_lib0clear(&___nl__0);
#line 43
c_rt_lib0clear(&___nl__1);
#line 43
c_rt_lib0clear(&___nl__2);
#line 43
c_rt_lib0clear(&___nl__3);
#line 43
c_rt_lib0clear(&___nl__4);
#line 43
return ___nl__5;
#line 43
c_rt_lib0clear(&___nl__5);
#line 44
goto label_16;
#line 44
label_13:
#line 44
c_rt_lib0move(&___nl__4,___get_global_const(700));
#line 44
c_rt_lib0move(&___nl__4, c_rt_lib0eq(___nl__3, ___nl__4));
#line 44
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 44
if(c_rt_lib0check_true_native(___nl__4)){ goto label_16;}
#line 45
c_rt_lib0move(&___nl__5,___get_global_const(970));
#line 45
c_rt_lib0move(&___nl__5, c_rt_lib0ov_mk_arg(___get_global_const(43), ___nl__5));
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
return ___nl__5;
#line 45
c_rt_lib0clear(&___nl__5);
#line 46
goto label_16;
#line 46
label_16:
#line 46
c_rt_lib0clear(&___nl__4);
#line 47
c_rt_lib0move(&___nl__4,___get_global_const(37));
#line 47
c_rt_lib0move(&___nl__4, c_rt_lib0eq(___nl__3, ___nl__4));
#line 47
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 47
if(c_rt_lib0check_true_native(___nl__4)){ goto label_18;}
#line 47
c_rt_lib0move(&___nl__5,___get_global_const(971));
#line 47
c_rt_lib0move(&___nl__5, c_rt_lib0ov_mk_arg(___get_global_const(43), ___nl__5));
#line 47
c_rt_lib0clear(&___nl__0);
#line 47
c_rt_lib0clear(&___nl__1);
#line 47
c_rt_lib0clear(&___nl__2);
#line 47
c_rt_lib0clear(&___nl__3);
#line 47
c_rt_lib0clear(&___nl__4);
#line 47
return ___nl__5;
#line 47
c_rt_lib0clear(&___nl__5);
#line 47
goto label_18;
#line 47
label_18:
#line 47
c_rt_lib0clear(&___nl__4);
#line 48
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(73)));
#line 48
c_rt_lib0move(&___nl__4, array0len(___nl__5));
#line 48
c_rt_lib0clear(&___nl__5);
#line 48
c_rt_lib0move(&___nl__5,___get_global_const(2));
#line 48
c_rt_lib0move(&___nl__4, c_rt_lib0num_eq(___nl__4, ___nl__5));
#line 48
c_rt_lib0clear(&___nl__5);
#line 48
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 48
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 48
if(c_rt_lib0check_true_native(___nl__4)){ goto label_20;}
#line 48
c_rt_lib0move(&___nl__5,___get_global_const(972));
#line 48
c_rt_lib0move(&___nl__5, c_rt_lib0concat_add(___nl__5, ___nl__3));
#line 48
c_rt_lib0move(&___nl__6,___get_global_const(973));
#line 48
c_rt_lib0move(&___nl__5, c_rt_lib0concat_add(___nl__5, ___nl__6));
#line 48
c_rt_lib0clear(&___nl__6);
#line 48
c_rt_lib0move(&___nl__5, c_rt_lib0ov_mk_arg(___get_global_const(43), ___nl__5));
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
return ___nl__5;
#line 48
c_rt_lib0clear(&___nl__5);
#line 48
goto label_20;
#line 48
label_20:
#line 48
c_rt_lib0clear(&___nl__4);
#line 49
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(73)));
#line 49
c_rt_lib0move(&___nl__5,___get_global_const(1));
#line 49
c_rt_lib0move(&___nl__4, c_rt_lib0array_get(___nl__4, ___nl__5));
#line 49
c_rt_lib0clear(&___nl__5);
#line 49
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(234)));
#line 50
c_rt_lib0move(&___nl__5,___get_global_const(974));
#line 50
c_rt_lib0move(&___nl__5, c_rt_lib0eq(___nl__3, ___nl__5));
#line 50
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 50
if(c_rt_lib0check_true_native(___nl__5)){ goto label_22;}
#line 51
c_rt_lib0move(&___nl__7,___get_global_const(216));
#line 51
c_rt_lib0move(&___nl__6, ov0is(___nl__4, ___nl__7));
#line 51
c_rt_lib0clear(&___nl__7);
#line 51
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 51
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 51
if(c_rt_lib0check_true_native(___nl__6)){ goto label_24;}
#line 51
c_rt_lib0move(&___nl__7,___get_global_const(975));
#line 51
c_rt_lib0move(&___nl__8, ov0get_element(___nl__4));
#line 51
c_rt_lib0move(&___nl__7, c_rt_lib0concat_add(___nl__7, ___nl__8));
#line 51
c_rt_lib0clear(&___nl__8);
#line 51
c_rt_lib0move(&___nl__7, c_rt_lib0ov_mk_arg(___get_global_const(43), ___nl__7));
#line 51
c_rt_lib0clear(&___nl__0);
#line 51
c_rt_lib0clear(&___nl__1);
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
return ___nl__7;
#line 51
c_rt_lib0clear(&___nl__7);
#line 51
goto label_24;
#line 51
label_24:
#line 51
c_rt_lib0clear(&___nl__6);
#line 52
c_rt_lib0move(&___nl__8, ptd_parser_priv0parse_hash(___nl__4));
#line 52
c_rt_lib0move(&___nl__7, c_rt_lib0priv_is(___nl__8, ___get_global_const(44)));
#line 52
if(c_rt_lib0check_true_native(___nl__7)){ goto label_25;}
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
return ___nl__8;
#line 52
label_25:
#line 52
c_rt_lib0move(&___nl__6, c_rt_lib0priv_as(___nl__8, ___get_global_const(44)));
#line 52
c_rt_lib0clear(&___nl__7);
#line 52
c_rt_lib0clear(&___nl__8);
#line 53
c_rt_lib0move(&___nl__7, tct0rec(___nl__6));
#line 53
c_rt_lib0move(&___nl__7, c_rt_lib0ov_mk_arg(___get_global_const(44), ___nl__7));
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
return ___nl__7;
#line 53
c_rt_lib0clear(&___nl__7);
#line 53
c_rt_lib0clear(&___nl__6);
#line 54
goto label_21;
#line 54
label_22:
#line 54
c_rt_lib0move(&___nl__5,___get_global_const(278));
#line 54
c_rt_lib0move(&___nl__5, c_rt_lib0eq(___nl__3, ___nl__5));
#line 54
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 54
if(c_rt_lib0check_true_native(___nl__5)){ goto label_26;}
#line 55
c_rt_lib0move(&___nl__8, ptd_parser0try_value_to_ptd(___nl__4));
#line 55
c_rt_lib0move(&___nl__7, c_rt_lib0priv_is(___nl__8, ___get_global_const(44)));
#line 55
if(c_rt_lib0check_true_native(___nl__7)){ goto label_27;}
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
return ___nl__8;
#line 55
label_27:
#line 55
c_rt_lib0move(&___nl__6, c_rt_lib0priv_as(___nl__8, ___get_global_const(44)));
#line 55
c_rt_lib0clear(&___nl__7);
#line 55
c_rt_lib0clear(&___nl__8);
#line 56
c_rt_lib0move(&___nl__7, tct0hash(___nl__6));
#line 56
c_rt_lib0move(&___nl__7, c_rt_lib0ov_mk_arg(___get_global_const(44), ___nl__7));
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
return ___nl__7;
#line 56
c_rt_lib0clear(&___nl__7);
#line 56
c_rt_lib0clear(&___nl__6);
#line 57
goto label_21;
#line 57
label_26:
#line 57
c_rt_lib0move(&___nl__5,___get_global_const(277));
#line 57
c_rt_lib0move(&___nl__5, c_rt_lib0eq(___nl__3, ___nl__5));
#line 57
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 57
if(c_rt_lib0check_true_native(___nl__5)){ goto label_28;}
#line 58
c_rt_lib0move(&___nl__8, ptd_parser0try_value_to_ptd(___nl__4));
#line 58
c_rt_lib0move(&___nl__7, c_rt_lib0priv_is(___nl__8, ___get_global_const(44)));
#line 58
if(c_rt_lib0check_true_native(___nl__7)){ goto label_29;}
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
label_29:
#line 58
c_rt_lib0move(&___nl__6, c_rt_lib0priv_as(___nl__8, ___get_global_const(44)));
#line 58
c_rt_lib0clear(&___nl__7);
#line 58
c_rt_lib0clear(&___nl__8);
#line 59
c_rt_lib0move(&___nl__7, tct0arr(___nl__6));
#line 59
c_rt_lib0move(&___nl__7, c_rt_lib0ov_mk_arg(___get_global_const(44), ___nl__7));
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
return ___nl__7;
#line 59
c_rt_lib0clear(&___nl__7);
#line 59
c_rt_lib0clear(&___nl__6);
#line 60
goto label_21;
#line 60
label_28:
#line 60
c_rt_lib0move(&___nl__5,___get_global_const(772));
#line 60
c_rt_lib0move(&___nl__5, c_rt_lib0eq(___nl__3, ___nl__5));
#line 60
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 60
if(c_rt_lib0check_true_native(___nl__5)){ goto label_30;}
#line 61
c_rt_lib0move(&___nl__6,___get_global_const(2));
#line 61
c_rt_lib0move(&___nl__6, c_rt_lib0num_eq(___nl__2, ___nl__6));
#line 61
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 61
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 61
if(c_rt_lib0check_true_native(___nl__6)){ goto label_32;}
#line 61
c_rt_lib0move(&___nl__7,___get_global_const(976));
#line 61
c_rt_lib0move(&___nl__7, c_rt_lib0concat_add(___nl__7, ___nl__2));
#line 61
c_rt_lib0move(&___nl__7, c_rt_lib0ov_mk_arg(___get_global_const(43), ___nl__7));
#line 61
c_rt_lib0clear(&___nl__0);
#line 61
c_rt_lib0clear(&___nl__1);
#line 61
c_rt_lib0clear(&___nl__2);
#line 61
c_rt_lib0clear(&___nl__3);
#line 61
c_rt_lib0clear(&___nl__4);
#line 61
c_rt_lib0clear(&___nl__5);
#line 61
c_rt_lib0clear(&___nl__6);
#line 61
return ___nl__7;
#line 61
c_rt_lib0clear(&___nl__7);
#line 61
goto label_32;
#line 61
label_32:
#line 61
c_rt_lib0clear(&___nl__6);
#line 62
c_rt_lib0move(&___nl__7,___get_global_const(216));
#line 62
c_rt_lib0move(&___nl__6, ov0is(___nl__4, ___nl__7));
#line 62
c_rt_lib0clear(&___nl__7);
#line 62
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 62
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 62
if(c_rt_lib0check_true_native(___nl__6)){ goto label_34;}
#line 62
c_rt_lib0move(&___nl__7,___get_global_const(977));
#line 62
c_rt_lib0move(&___nl__8, ov0get_element(___nl__4));
#line 62
c_rt_lib0move(&___nl__7, c_rt_lib0concat_add(___nl__7, ___nl__8));
#line 62
c_rt_lib0clear(&___nl__8);
#line 62
c_rt_lib0move(&___nl__7, c_rt_lib0ov_mk_arg(___get_global_const(43), ___nl__7));
#line 62
c_rt_lib0clear(&___nl__0);
#line 62
c_rt_lib0clear(&___nl__1);
#line 62
c_rt_lib0clear(&___nl__2);
#line 62
c_rt_lib0clear(&___nl__3);
#line 62
c_rt_lib0clear(&___nl__4);
#line 62
c_rt_lib0clear(&___nl__5);
#line 62
c_rt_lib0clear(&___nl__6);
#line 62
return ___nl__7;
#line 62
c_rt_lib0clear(&___nl__7);
#line 62
goto label_34;
#line 62
label_34:
#line 62
c_rt_lib0clear(&___nl__6);
#line 63
c_rt_lib0copy(&___nl__6, ___nl__4);
#line 63
c_rt_lib0move(&___nl__6, c_rt_lib0priv_as(___nl__6, ___get_global_const(216)));
#line 64
c_rt_lib0move(&___nl__7, c_rt_lib0hash_mk(0));
#line 65
c_rt_lib0move(&___nl__9,___get_global_const(1));
#line 65
c_rt_lib0move(&___nl__10,___get_global_const(2));
#line 65
c_rt_lib0move(&___nl__11, c_rt_lib0array_len(___nl__6));
#line 65
label_37:
#line 65
c_rt_lib0move(&___nl__12, c_rt_lib0ge(___nl__9, ___nl__11));
#line 65
if(c_rt_lib0check_true_native(___nl__12)){ goto label_35;}
#line 65
c_rt_lib0move(&___nl__8, c_rt_lib0array_get(___nl__6, ___nl__9));
#line 66
c_rt_lib0move(&___nl__14, c_rt_lib0hash_get_value_dec(___nl__8, ___get_global_const(234)));
#line 66
c_rt_lib0move(&___nl__15,___get_global_const(735));
#line 66
c_rt_lib0move(&___nl__13, ov0is(___nl__14, ___nl__15));
#line 66
c_rt_lib0clear(&___nl__15);
#line 66
c_rt_lib0clear(&___nl__14);
#line 66
c_rt_lib0move(&___nl__13, c_rt_lib0not(___nl__13));
#line 66
if(c_rt_lib0check_true_native(___nl__13)){ goto label_39;}
#line 67
c_rt_lib0move(&___nl__14, c_rt_lib0hash_get_value_dec(___nl__8, ___get_global_const(234)));
#line 67
c_rt_lib0move(&___nl__14, c_rt_lib0priv_as(___nl__14, ___get_global_const(735)));
#line 67
c_rt_lib0copy(&___nl__1, ___nl__14);
#line 67
c_rt_lib0clear(&___nl__14);
#line 68
c_rt_lib0move(&___nl__14, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(99)));
#line 68
c_rt_lib0move(&___nl__16,___get_global_const(621));
#line 68
c_rt_lib0move(&___nl__14, c_rt_lib0eq(___nl__14, ___nl__16));
#line 68
c_rt_lib0clear(&___nl__16);
#line 68
c_rt_lib0move(&___nl__15, c_rt_lib0not(___nl__14));
#line 68
if(c_rt_lib0check_true_native(___nl__15)){ goto label_42;}
#line 68
c_rt_lib0move(&___nl__14, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(76)));
#line 68
c_rt_lib0move(&___nl__16,___get_global_const(37));
#line 68
c_rt_lib0move(&___nl__14, c_rt_lib0eq(___nl__14, ___nl__16));
#line 68
c_rt_lib0clear(&___nl__16);
#line 68
label_42:
#line 68
c_rt_lib0clear(&___nl__15);
#line 68
c_rt_lib0move(&___nl__14, c_rt_lib0not(___nl__14));
#line 68
if(c_rt_lib0check_true_native(___nl__14)){ goto label_41;}
#line 69
c_rt_lib0move(&___nl__16, c_rt_lib0hash_get_value_dec(___nl__8, ___get_global_const(279)));
#line 69
c_rt_lib0move(&___nl__17,___get_global_const(778));
#line 69
c_rt_lib0move(&___nl__15, ov0as(___nl__16, ___nl__17));
#line 69
c_rt_lib0clear(&___nl__17);
#line 69
c_rt_lib0clear(&___nl__16);
#line 69
c_rt_lib0move(&___nl__16, tct0none());
#line 69
c_rt_lib0delete(hash0set_value(&___nl__7, ___nl__15, ___nl__16));
#line 69
c_rt_lib0clear(&___nl__16);
#line 69
c_rt_lib0clear(&___nl__15);
#line 70
c_rt_lib0clear(&___nl__13);
#line 70
c_rt_lib0clear(&___nl__14);
#line 70
goto label_36;
#line 71
goto label_41;
#line 71
label_41:
#line 71
c_rt_lib0clear(&___nl__14);
#line 72
goto label_39;
#line 72
label_39:
#line 72
c_rt_lib0clear(&___nl__13);
#line 73
c_rt_lib0move(&___nl__16, c_rt_lib0hash_get_value_dec(___nl__8, ___get_global_const(234)));
#line 73
c_rt_lib0move(&___nl__15, ptd_parser0try_value_to_ptd(___nl__16));
#line 73
c_rt_lib0clear(&___nl__16);
#line 73
c_rt_lib0move(&___nl__14, c_rt_lib0priv_is(___nl__15, ___get_global_const(44)));
#line 73
if(c_rt_lib0check_true_native(___nl__14)){ goto label_43;}
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
c_rt_lib0clear(&___nl__9);
#line 73
c_rt_lib0clear(&___nl__10);
#line 73
c_rt_lib0clear(&___nl__11);
#line 73
c_rt_lib0clear(&___nl__12);
#line 73
c_rt_lib0clear(&___nl__13);
#line 73
c_rt_lib0clear(&___nl__14);
#line 73
return ___nl__15;
#line 73
label_43:
#line 73
c_rt_lib0move(&___nl__13, c_rt_lib0priv_as(___nl__15, ___get_global_const(44)));
#line 73
c_rt_lib0clear(&___nl__14);
#line 73
c_rt_lib0clear(&___nl__15);
#line 74
c_rt_lib0move(&___nl__15, c_rt_lib0hash_get_value_dec(___nl__8, ___get_global_const(279)));
#line 74
c_rt_lib0move(&___nl__16,___get_global_const(778));
#line 74
c_rt_lib0move(&___nl__14, ov0as(___nl__15, ___nl__16));
#line 74
c_rt_lib0clear(&___nl__16);
#line 74
c_rt_lib0clear(&___nl__15);
#line 74
c_rt_lib0delete(hash0set_value(&___nl__7, ___nl__14, ___nl__13));
#line 74
c_rt_lib0clear(&___nl__14);
#line 74
c_rt_lib0clear(&___nl__13);
#line 74
label_36:
#line 75
c_rt_lib0move(&___nl__9, c_rt_lib0add_mod(___nl__9, ___nl__10));
#line 75
goto label_37;
#line 75
label_35:
#line 75
c_rt_lib0clear(&___nl__8);
#line 75
c_rt_lib0clear(&___nl__9);
#line 75
c_rt_lib0clear(&___nl__10);
#line 75
c_rt_lib0clear(&___nl__11);
#line 75
c_rt_lib0clear(&___nl__12);
#line 76
c_rt_lib0move(&___nl__8, tct0var(___nl__7));
#line 76
c_rt_lib0move(&___nl__8, c_rt_lib0ov_mk_arg(___get_global_const(44), ___nl__8));
#line 76
c_rt_lib0clear(&___nl__0);
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
c_rt_lib0clear(&___nl__6);
#line 76
c_rt_lib0clear(&___nl__7);
#line 76
return ___nl__8;
#line 76
c_rt_lib0clear(&___nl__8);
#line 76
c_rt_lib0clear(&___nl__6);
#line 76
c_rt_lib0clear(&___nl__7);
#line 77
goto label_21;
#line 77
label_30:
#line 78
c_rt_lib0move(&___nl__6,___get_global_const(978));
#line 78
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__3));
#line 78
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_arg(___get_global_const(43), ___nl__6));
#line 78
c_rt_lib0clear(&___nl__0);
#line 78
c_rt_lib0clear(&___nl__1);
#line 78
c_rt_lib0clear(&___nl__2);
#line 78
c_rt_lib0clear(&___nl__3);
#line 78
c_rt_lib0clear(&___nl__4);
#line 78
c_rt_lib0clear(&___nl__5);
#line 78
return ___nl__6;
#line 78
c_rt_lib0clear(&___nl__6);
#line 79
goto label_21;
#line 79
label_21:
#line 79
c_rt_lib0clear(&___nl__5);
#line 79
c_rt_lib0clear(&___nl__1);
#line 79
c_rt_lib0clear(&___nl__2);
#line 79
c_rt_lib0clear(&___nl__3);
#line 79
c_rt_lib0clear(&___nl__4);
#line 79
c_rt_lib0clear(&___nl__0);
#line 79
return NULL;
}

ImmT ptd_parser_priv0parse_hash(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
ptd_parser_priv0__const__init();
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
c_rt_lib0copy(&___nl__1, ___nl__0);
#line 84
c_rt_lib0move(&___nl__1, c_rt_lib0priv_as(___nl__1, ___get_global_const(216)));
#line 85
c_rt_lib0move(&___nl__2, c_rt_lib0hash_mk(0));
#line 86
c_rt_lib0move(&___nl__4,___get_global_const(1));
#line 86
c_rt_lib0move(&___nl__5,___get_global_const(2));
#line 86
c_rt_lib0move(&___nl__6, c_rt_lib0array_len(___nl__1));
#line 86
label_3:
#line 86
c_rt_lib0move(&___nl__7, c_rt_lib0ge(___nl__4, ___nl__6));
#line 86
if(c_rt_lib0check_true_native(___nl__7)){ goto label_1;}
#line 86
c_rt_lib0move(&___nl__3, c_rt_lib0array_get(___nl__1, ___nl__4));
#line 87
c_rt_lib0move(&___nl__11, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(234)));
#line 87
c_rt_lib0move(&___nl__10, ptd_parser0try_value_to_ptd(___nl__11));
#line 87
c_rt_lib0clear(&___nl__11);
#line 87
c_rt_lib0move(&___nl__9, c_rt_lib0priv_is(___nl__10, ___get_global_const(44)));
#line 87
if(c_rt_lib0check_true_native(___nl__9)){ goto label_4;}
#line 87
c_rt_lib0clear(&___nl__0);
#line 87
c_rt_lib0clear(&___nl__1);
#line 87
c_rt_lib0clear(&___nl__2);
#line 87
c_rt_lib0clear(&___nl__3);
#line 87
c_rt_lib0clear(&___nl__4);
#line 87
c_rt_lib0clear(&___nl__5);
#line 87
c_rt_lib0clear(&___nl__6);
#line 87
c_rt_lib0clear(&___nl__7);
#line 87
c_rt_lib0clear(&___nl__8);
#line 87
c_rt_lib0clear(&___nl__9);
#line 87
return ___nl__10;
#line 87
label_4:
#line 87
c_rt_lib0move(&___nl__8, c_rt_lib0priv_as(___nl__10, ___get_global_const(44)));
#line 87
c_rt_lib0clear(&___nl__9);
#line 87
c_rt_lib0clear(&___nl__10);
#line 88
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(279)));
#line 88
c_rt_lib0move(&___nl__11,___get_global_const(778));
#line 88
c_rt_lib0move(&___nl__9, ov0as(___nl__10, ___nl__11));
#line 88
c_rt_lib0clear(&___nl__11);
#line 88
c_rt_lib0clear(&___nl__10);
#line 88
c_rt_lib0delete(hash0set_value(&___nl__2, ___nl__9, ___nl__8));
#line 88
c_rt_lib0clear(&___nl__9);
#line 88
c_rt_lib0clear(&___nl__8);
#line 89
c_rt_lib0move(&___nl__4, c_rt_lib0add_mod(___nl__4, ___nl__5));
#line 89
goto label_3;
#line 89
label_1:
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
#line 90
c_rt_lib0move(&___nl__3, c_rt_lib0ov_mk_arg(___get_global_const(44), ___nl__2));
#line 90
c_rt_lib0clear(&___nl__0);
#line 90
c_rt_lib0clear(&___nl__1);
#line 90
c_rt_lib0clear(&___nl__2);
#line 90
return ___nl__3;
#line 90
c_rt_lib0clear(&___nl__3);
#line 90
c_rt_lib0clear(&___nl__1);
#line 90
c_rt_lib0clear(&___nl__2);
#line 90
c_rt_lib0clear(&___nl__0);
#line 90
return NULL;
}


static ImmT ___const__[1];
static int ___const_init__ = 1;
void ptd_parser_priv0__const__init(){
if(___const_init__) {
___const_init__ = 0;
__const__f = &___const__[0];


for(int i=0;i<0;++i) ___const__[i] = NULL;
c_rt_lib0register_const(___const__, 0);
}}
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
