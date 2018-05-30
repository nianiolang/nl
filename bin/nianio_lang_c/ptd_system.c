
/* (c) Atinea Sp z o. o.
 *  Stamp: nianio lang
 */
#include "c_rt_lib.h"
#include "c_global_const.h"
#include "ptd_system.h"
#include "ov.h"
#include "hash.h"
#include "ptd.h"
#include "tct.h"
#include "tc_types.h"
#include "boolean_t.h"
#include "string.h"
#include "array.h"
#include "ptd_parser.h"
#line 1 "ptd_system.nl"

static ImmT *__const__f = NULL;
ImmT ptd_system_priv0__const__sim(int __nr);
ImmT ptd_system_priv0__const__sing(int __nr);

ImmT ptd_system_priv0add_error(ImmT * ___ref___0,ImmT ___nl__1);
ImmT ptd_system_priv0add_ref_name(ImmT * ___ref___0,ImmT * ___ref___1,ImmT * ___ref___2,ImmT ___nl__3,ImmT * ___ref___4,ImmT * ___ref___5);
ImmT ptd_system_priv0is_cycle_ref(ImmT * ___ref___0,ImmT * ___ref___1,ImmT * ___ref___2,ImmT ___nl__3,ImmT ___nl__4,ImmT * ___ref___5,ImmT * ___ref___6);
ImmT ptd_system_priv0cross_type(ImmT ___nl__0,ImmT ___nl__1,ImmT ___nl__2,ImmT * ___ref___3,ImmT * ___ref___4);
ImmT ptd_system_priv0mk_err(ImmT ___nl__0,ImmT ___nl__1);
ImmT ptd_system_priv0check_assignment_info(ImmT ___nl__0,ImmT ___nl__1,ImmT ___nl__2,ImmT ___nl__3,ImmT * ___ref___4,ImmT * ___ref___5);
ImmT ptd_system_priv0add_delete(ImmT ___nl__0,ImmT * ___ref___1,ImmT * ___ref___2);
ImmT ptd_system_priv0add_create(ImmT ___nl__0,ImmT * ___ref___1,ImmT * ___ref___2);
ImmT ptd_system_priv0walk_on_type(ImmT ___nl__0,ImmT ___nl__1,ImmT ___nl__2,ImmT * ___ref___3,ImmT * ___ref___4);
ImmT ptd_system_priv0get_all_ref_in_type(ImmT ___nl__0,ImmT * ___ref___1,ImmT * ___ref___2,ImmT * ___ref___3);
ImmT ptd_system_priv0get_ref_in_type(ImmT ___nl__0,ImmT * ___ref___1);
ImmT ptd_system_priv0get_function_def(ImmT ___nl__0,ImmT * ___ref___1,ImmT * ___ref___2);


ImmT ptd_system_priv0add_error(ImmT * ___ref___0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__1);
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
#line 17
c_rt_lib0move(&___nl__2,___get_global_const(18));
#line 17
c_rt_lib0move(&___nl__2, c_rt_lib0get_ref_hash(*___ref___0, ___nl__2));
#line 17
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(785)));
#line 17
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(132)));
#line 17
c_rt_lib0move(&___nl__6,___get_global_const(1));
#line 17
c_rt_lib0move(&___nl__6, c_rt_lib0unary_minus(___nl__6));
#line 17
c_rt_lib0move(&___nl__7, c_rt_lib0ov_mk_none(___get_global_const(112)));
#line 17
c_rt_lib0move(&___nl__3, c_rt_lib0hash_mk(5, ___get_global_const(137), ___nl__1, ___get_global_const(134), ___nl__4, ___get_global_const(132), ___nl__5, ___get_global_const(179), ___nl__6, ___get_global_const(63), ___nl__7));
#line 17
c_rt_lib0clear(&___nl__4);
#line 17
c_rt_lib0clear(&___nl__5);
#line 17
c_rt_lib0clear(&___nl__6);
#line 17
c_rt_lib0clear(&___nl__7);
#line 17
c_rt_lib0delete(array0push(&___nl__2, ___nl__3));
#line 17
c_rt_lib0clear(&___nl__3);
#line 17
c_rt_lib0move(&___nl__3,___get_global_const(18));
#line 17
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__3, ___nl__2));
#line 17
c_rt_lib0clear(&___nl__3);
#line 17
c_rt_lib0clear(&___nl__2);
#line 17
c_rt_lib0clear(&___nl__1);
#line 17
return NULL;
}

ImmT ptd_system0is_known0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "ptd_system0is_known");
return ptd_system0is_known(_tab[0]);}
ImmT ptd_system0is_known(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
ImmT ___nl__1 = NULL;
#line 21
c_rt_lib0copy(&___nl__1, ___nl__0);
#line 21
c_rt_lib0move(&___nl__1, c_rt_lib0priv_is(___nl__1, ___get_global_const(1078)));
#line 21
if(c_rt_lib0check_true_native(___nl__1)){ goto label_5;}
#line 21
c_rt_lib0copy(&___nl__1, ___nl__0);
#line 21
c_rt_lib0move(&___nl__1, c_rt_lib0priv_is(___nl__1, ___get_global_const(1079)));
#line 21
label_5:
#line 21
c_rt_lib0clear(&___nl__0);
#line 21
return ___nl__1;
#line 21
c_rt_lib0clear(&___nl__1);
#line 21
c_rt_lib0clear(&___nl__0);
#line 21
return NULL;
}

ImmT ptd_system0is_equal0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 2, "ptd_system0is_equal");
return ptd_system0is_equal(_tab[0], _tab[1]);}
ImmT ptd_system0is_equal(ImmT ___nl__0,ImmT ___nl__1) {
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
#line 25
c_rt_lib0move(&___nl__2, ov0get_element(___nl__0));
#line 25
c_rt_lib0move(&___nl__3, ov0get_element(___nl__1));
#line 25
c_rt_lib0move(&___nl__2, c_rt_lib0eq(___nl__2, ___nl__3));
#line 25
c_rt_lib0clear(&___nl__3);
#line 25
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 25
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 25
if(c_rt_lib0check_true_native(___nl__2)){ goto label_14;}
#line 25
c_rt_lib0move(&___nl__3, c_rt_lib0get_false());
#line 25
c_rt_lib0clear(&___nl__0);
#line 25
c_rt_lib0clear(&___nl__1);
#line 25
c_rt_lib0clear(&___nl__2);
#line 25
return ___nl__3;
#line 25
c_rt_lib0clear(&___nl__3);
#line 25
goto label_14;
#line 25
label_14:
#line 25
c_rt_lib0clear(&___nl__2);
#line 26
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__0, ___get_global_const(797)));
#line 26
if(c_rt_lib0check_true_native(___nl__2)){ goto label_37;}
#line 27
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__0, ___get_global_const(798)));
#line 27
if(c_rt_lib0check_true_native(___nl__2)){ goto label_39;}
#line 29
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__0, ___get_global_const(799)));
#line 29
if(c_rt_lib0check_true_native(___nl__2)){ goto label_53;}
#line 31
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__0, ___get_global_const(800)));
#line 31
if(c_rt_lib0check_true_native(___nl__2)){ goto label_67;}
#line 37
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__0, ___get_global_const(801)));
#line 37
if(c_rt_lib0check_true_native(___nl__2)){ goto label_147;}
#line 39
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__0, ___get_global_const(803)));
#line 39
if(c_rt_lib0check_true_native(___nl__2)){ goto label_168;}
#line 40
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__0, ___get_global_const(804)));
#line 40
if(c_rt_lib0check_true_native(___nl__2)){ goto label_170;}
#line 49
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__0, ___get_global_const(805)));
#line 49
if(c_rt_lib0check_true_native(___nl__2)){ goto label_300;}
#line 50
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__0, ___get_global_const(802)));
#line 50
if(c_rt_lib0check_true_native(___nl__2)){ goto label_302;}
#line 50
c_rt_lib0move(&___nl__2,___get_global_const(91));
#line 50
c_rt_lib0move(&___nl__2, c_rt_lib0array_mk(2, ___nl__2, ___nl__0));
#line 50
nl_die_arg(___nl__2);
#line 26
label_37:
#line 27
goto label_304;
#line 27
label_39:
#line 27
c_rt_lib0move(&___nl__3, c_rt_lib0priv_as(___nl__0, ___get_global_const(798)));
#line 28
c_rt_lib0copy(&___nl__5, ___nl__1);
#line 28
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__5, ___get_global_const(798)));
#line 28
c_rt_lib0move(&___nl__4, ptd_system0is_equal(___nl__3, ___nl__5));
#line 28
c_rt_lib0clear(&___nl__5);
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
c_rt_lib0clear(&___nl__3);
#line 29
goto label_304;
#line 29
label_53:
#line 29
c_rt_lib0move(&___nl__3, c_rt_lib0priv_as(___nl__0, ___get_global_const(799)));
#line 30
c_rt_lib0copy(&___nl__5, ___nl__1);
#line 30
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__5, ___get_global_const(799)));
#line 30
c_rt_lib0move(&___nl__4, ptd_system0is_equal(___nl__3, ___nl__5));
#line 30
c_rt_lib0clear(&___nl__5);
#line 30
c_rt_lib0clear(&___nl__0);
#line 30
c_rt_lib0clear(&___nl__1);
#line 30
c_rt_lib0clear(&___nl__2);
#line 30
c_rt_lib0clear(&___nl__3);
#line 30
return ___nl__4;
#line 30
c_rt_lib0clear(&___nl__4);
#line 30
c_rt_lib0clear(&___nl__3);
#line 31
goto label_304;
#line 31
label_67:
#line 31
c_rt_lib0move(&___nl__3, c_rt_lib0priv_as(___nl__0, ___get_global_const(800)));
#line 32
c_rt_lib0copy(&___nl__5, ___nl__1);
#line 32
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__5, ___get_global_const(800)));
#line 32
c_rt_lib0move(&___nl__4, hash0size(___nl__5));
#line 32
c_rt_lib0clear(&___nl__5);
#line 32
c_rt_lib0move(&___nl__5, hash0size(___nl__3));
#line 32
c_rt_lib0move(&___nl__4, c_rt_lib0num_ne(___nl__4, ___nl__5));
#line 32
c_rt_lib0clear(&___nl__5);
#line 32
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 32
if(c_rt_lib0check_true_native(___nl__4)){ goto label_87;}
#line 32
c_rt_lib0move(&___nl__5, c_rt_lib0get_false());
#line 32
c_rt_lib0clear(&___nl__0);
#line 32
c_rt_lib0clear(&___nl__1);
#line 32
c_rt_lib0clear(&___nl__2);
#line 32
c_rt_lib0clear(&___nl__3);
#line 32
c_rt_lib0clear(&___nl__4);
#line 32
return ___nl__5;
#line 32
c_rt_lib0clear(&___nl__5);
#line 32
goto label_87;
#line 32
label_87:
#line 32
c_rt_lib0clear(&___nl__4);
#line 33
c_rt_lib0move(&___nl__6, c_rt_lib0init_iter(___nl__3));
#line 33
label_90:
#line 33
c_rt_lib0move(&___nl__4, c_rt_lib0is_end_hash(___nl__6));
#line 33
if(c_rt_lib0check_true_native(___nl__4)){ goto label_141;}
#line 33
c_rt_lib0move(&___nl__4, c_rt_lib0get_key_iter(___nl__6));
#line 33
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value(___nl__3, ___nl__4));
#line 34
c_rt_lib0copy(&___nl__8, ___nl__1);
#line 34
c_rt_lib0move(&___nl__8, c_rt_lib0priv_as(___nl__8, ___get_global_const(800)));
#line 34
c_rt_lib0move(&___nl__7, hash0has_key(___nl__8, ___nl__4));
#line 34
c_rt_lib0clear(&___nl__8);
#line 34
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 34
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 34
if(c_rt_lib0check_true_native(___nl__7)){ goto label_114;}
#line 34
c_rt_lib0move(&___nl__8, c_rt_lib0get_false());
#line 34
c_rt_lib0clear(&___nl__0);
#line 34
c_rt_lib0clear(&___nl__1);
#line 34
c_rt_lib0clear(&___nl__2);
#line 34
c_rt_lib0clear(&___nl__3);
#line 34
c_rt_lib0clear(&___nl__4);
#line 34
c_rt_lib0clear(&___nl__5);
#line 34
c_rt_lib0clear(&___nl__6);
#line 34
c_rt_lib0clear(&___nl__7);
#line 34
return ___nl__8;
#line 34
c_rt_lib0clear(&___nl__8);
#line 34
goto label_114;
#line 34
label_114:
#line 34
c_rt_lib0clear(&___nl__7);
#line 35
c_rt_lib0copy(&___nl__9, ___nl__1);
#line 35
c_rt_lib0move(&___nl__9, c_rt_lib0priv_as(___nl__9, ___get_global_const(800)));
#line 35
c_rt_lib0move(&___nl__8, hash0get_value(___nl__9, ___nl__4));
#line 35
c_rt_lib0clear(&___nl__9);
#line 35
c_rt_lib0move(&___nl__7, ptd_system0is_equal(___nl__5, ___nl__8));
#line 35
c_rt_lib0clear(&___nl__8);
#line 35
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 35
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 35
if(c_rt_lib0check_true_native(___nl__7)){ goto label_137;}
#line 35
c_rt_lib0move(&___nl__8, c_rt_lib0get_false());
#line 35
c_rt_lib0clear(&___nl__0);
#line 35
c_rt_lib0clear(&___nl__1);
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
#line 35
return ___nl__8;
#line 35
c_rt_lib0clear(&___nl__8);
#line 35
goto label_137;
#line 35
label_137:
#line 35
c_rt_lib0clear(&___nl__7);
#line 36
c_rt_lib0move(&___nl__6, c_rt_lib0next_iter(___nl__6));
#line 36
goto label_90;
#line 36
label_141:
#line 36
c_rt_lib0clear(&___nl__4);
#line 36
c_rt_lib0clear(&___nl__5);
#line 36
c_rt_lib0clear(&___nl__6);
#line 36
c_rt_lib0clear(&___nl__3);
#line 37
goto label_304;
#line 37
label_147:
#line 37
c_rt_lib0move(&___nl__3, c_rt_lib0priv_as(___nl__0, ___get_global_const(801)));
#line 38
c_rt_lib0copy(&___nl__4, ___nl__1);
#line 38
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__4, ___get_global_const(801)));
#line 38
c_rt_lib0move(&___nl__4, c_rt_lib0eq(___nl__3, ___nl__4));
#line 38
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 38
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 38
if(c_rt_lib0check_true_native(___nl__4)){ goto label_164;}
#line 38
c_rt_lib0move(&___nl__5, c_rt_lib0get_false());
#line 38
c_rt_lib0clear(&___nl__0);
#line 38
c_rt_lib0clear(&___nl__1);
#line 38
c_rt_lib0clear(&___nl__2);
#line 38
c_rt_lib0clear(&___nl__3);
#line 38
c_rt_lib0clear(&___nl__4);
#line 38
return ___nl__5;
#line 38
c_rt_lib0clear(&___nl__5);
#line 38
goto label_164;
#line 38
label_164:
#line 38
c_rt_lib0clear(&___nl__4);
#line 38
c_rt_lib0clear(&___nl__3);
#line 39
goto label_304;
#line 39
label_168:
#line 40
goto label_304;
#line 40
label_170:
#line 40
c_rt_lib0move(&___nl__3, c_rt_lib0priv_as(___nl__0, ___get_global_const(804)));
#line 41
c_rt_lib0copy(&___nl__5, ___nl__1);
#line 41
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__5, ___get_global_const(804)));
#line 41
c_rt_lib0move(&___nl__4, hash0size(___nl__5));
#line 41
c_rt_lib0clear(&___nl__5);
#line 41
c_rt_lib0move(&___nl__5, hash0size(___nl__3));
#line 41
c_rt_lib0move(&___nl__4, c_rt_lib0num_ne(___nl__4, ___nl__5));
#line 41
c_rt_lib0clear(&___nl__5);
#line 41
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 41
if(c_rt_lib0check_true_native(___nl__4)){ goto label_190;}
#line 41
c_rt_lib0move(&___nl__5, c_rt_lib0get_false());
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
return ___nl__5;
#line 41
c_rt_lib0clear(&___nl__5);
#line 41
goto label_190;
#line 41
label_190:
#line 41
c_rt_lib0clear(&___nl__4);
#line 42
c_rt_lib0move(&___nl__6, c_rt_lib0init_iter(___nl__3));
#line 42
label_193:
#line 42
c_rt_lib0move(&___nl__4, c_rt_lib0is_end_hash(___nl__6));
#line 42
if(c_rt_lib0check_true_native(___nl__4)){ goto label_294;}
#line 42
c_rt_lib0move(&___nl__4, c_rt_lib0get_key_iter(___nl__6));
#line 42
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value(___nl__3, ___nl__4));
#line 43
c_rt_lib0copy(&___nl__8, ___nl__1);
#line 43
c_rt_lib0move(&___nl__8, c_rt_lib0priv_as(___nl__8, ___get_global_const(804)));
#line 43
c_rt_lib0move(&___nl__7, hash0has_key(___nl__8, ___nl__4));
#line 43
c_rt_lib0clear(&___nl__8);
#line 43
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 43
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 43
if(c_rt_lib0check_true_native(___nl__7)){ goto label_217;}
#line 43
c_rt_lib0move(&___nl__8, c_rt_lib0get_false());
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
c_rt_lib0clear(&___nl__5);
#line 43
c_rt_lib0clear(&___nl__6);
#line 43
c_rt_lib0clear(&___nl__7);
#line 43
return ___nl__8;
#line 43
c_rt_lib0clear(&___nl__8);
#line 43
goto label_217;
#line 43
label_217:
#line 43
c_rt_lib0clear(&___nl__7);
#line 44
c_rt_lib0copy(&___nl__8, ___nl__1);
#line 44
c_rt_lib0move(&___nl__8, c_rt_lib0priv_as(___nl__8, ___get_global_const(804)));
#line 44
c_rt_lib0move(&___nl__7, hash0get_value(___nl__8, ___nl__4));
#line 44
c_rt_lib0clear(&___nl__8);
#line 45
c_rt_lib0copy(&___nl__8, ___nl__5);
#line 45
c_rt_lib0move(&___nl__8, c_rt_lib0priv_is(___nl__8, ___get_global_const(808)));
#line 45
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__8));
#line 45
if(c_rt_lib0check_true_native(___nl__9)){ goto label_229;}
#line 45
c_rt_lib0copy(&___nl__8, ___nl__7);
#line 45
c_rt_lib0move(&___nl__8, c_rt_lib0priv_is(___nl__8, ___get_global_const(808)));
#line 45
label_229:
#line 45
c_rt_lib0clear(&___nl__9);
#line 45
c_rt_lib0move(&___nl__8, c_rt_lib0not(___nl__8));
#line 45
if(c_rt_lib0check_true_native(___nl__8)){ goto label_237;}
#line 45
c_rt_lib0clear(&___nl__7);
#line 45
c_rt_lib0clear(&___nl__8);
#line 45
goto label_291;
#line 45
goto label_237;
#line 45
label_237:
#line 45
c_rt_lib0clear(&___nl__8);
#line 46
c_rt_lib0copy(&___nl__8, ___nl__5);
#line 46
c_rt_lib0move(&___nl__8, c_rt_lib0priv_is(___nl__8, ___get_global_const(809)));
#line 46
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__8));
#line 46
if(c_rt_lib0check_true_native(___nl__9)){ goto label_245;}
#line 46
c_rt_lib0copy(&___nl__8, ___nl__7);
#line 46
c_rt_lib0move(&___nl__8, c_rt_lib0priv_is(___nl__8, ___get_global_const(809)));
#line 46
label_245:
#line 46
c_rt_lib0clear(&___nl__9);
#line 46
c_rt_lib0move(&___nl__8, c_rt_lib0not(___nl__8));
#line 46
c_rt_lib0move(&___nl__8, c_rt_lib0not(___nl__8));
#line 46
if(c_rt_lib0check_true_native(___nl__8)){ goto label_263;}
#line 46
c_rt_lib0move(&___nl__9, c_rt_lib0get_false());
#line 46
c_rt_lib0clear(&___nl__0);
#line 46
c_rt_lib0clear(&___nl__1);
#line 46
c_rt_lib0clear(&___nl__2);
#line 46
c_rt_lib0clear(&___nl__3);
#line 46
c_rt_lib0clear(&___nl__4);
#line 46
c_rt_lib0clear(&___nl__5);
#line 46
c_rt_lib0clear(&___nl__6);
#line 46
c_rt_lib0clear(&___nl__7);
#line 46
c_rt_lib0clear(&___nl__8);
#line 46
return ___nl__9;
#line 46
c_rt_lib0clear(&___nl__9);
#line 46
goto label_263;
#line 46
label_263:
#line 46
c_rt_lib0clear(&___nl__8);
#line 47
c_rt_lib0copy(&___nl__9, ___nl__7);
#line 47
c_rt_lib0move(&___nl__9, c_rt_lib0priv_as(___nl__9, ___get_global_const(809)));
#line 47
c_rt_lib0copy(&___nl__10, ___nl__5);
#line 47
c_rt_lib0move(&___nl__10, c_rt_lib0priv_as(___nl__10, ___get_global_const(809)));
#line 47
c_rt_lib0move(&___nl__8, ptd_system0is_equal(___nl__9, ___nl__10));
#line 47
c_rt_lib0clear(&___nl__10);
#line 47
c_rt_lib0clear(&___nl__9);
#line 47
c_rt_lib0move(&___nl__8, c_rt_lib0not(___nl__8));
#line 47
c_rt_lib0move(&___nl__8, c_rt_lib0not(___nl__8));
#line 47
if(c_rt_lib0check_true_native(___nl__8)){ goto label_288;}
#line 47
c_rt_lib0move(&___nl__9, c_rt_lib0get_false());
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
c_rt_lib0clear(&___nl__5);
#line 47
c_rt_lib0clear(&___nl__6);
#line 47
c_rt_lib0clear(&___nl__7);
#line 47
c_rt_lib0clear(&___nl__8);
#line 47
return ___nl__9;
#line 47
c_rt_lib0clear(&___nl__9);
#line 47
goto label_288;
#line 47
label_288:
#line 47
c_rt_lib0clear(&___nl__8);
#line 47
c_rt_lib0clear(&___nl__7);
#line 47
label_291:
#line 48
c_rt_lib0move(&___nl__6, c_rt_lib0next_iter(___nl__6));
#line 48
goto label_193;
#line 48
label_294:
#line 48
c_rt_lib0clear(&___nl__4);
#line 48
c_rt_lib0clear(&___nl__5);
#line 48
c_rt_lib0clear(&___nl__6);
#line 48
c_rt_lib0clear(&___nl__3);
#line 49
goto label_304;
#line 49
label_300:
#line 50
goto label_304;
#line 50
label_302:
#line 51
goto label_304;
#line 51
label_304:
#line 51
c_rt_lib0clear(&___nl__2);
#line 52
c_rt_lib0move(&___nl__2, c_rt_lib0get_true());
#line 52
c_rt_lib0clear(&___nl__0);
#line 52
c_rt_lib0clear(&___nl__1);
#line 52
return ___nl__2;
#line 52
c_rt_lib0clear(&___nl__2);
#line 52
c_rt_lib0clear(&___nl__0);
#line 52
c_rt_lib0clear(&___nl__1);
#line 52
return NULL;
}

ImmT ptd_system0is_try_ensure_type0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 3, "ptd_system0is_try_ensure_type");
return ptd_system0is_try_ensure_type(_tab[0], &_tab[1], &_tab[2]);}
ImmT ptd_system0is_try_ensure_type(ImmT ___nl__0,ImmT * ___ref___1,ImmT * ___ref___2) {
c_rt_lib0arg_val(___nl__0);
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
#line 57
c_rt_lib0move(&___nl__6, tct0tct_im());
#line 57
c_rt_lib0move(&___nl__7, tct0tct_im());
#line 57
c_rt_lib0move(&___nl__5, c_rt_lib0hash_mk(2, ___get_global_const(48), ___nl__6, ___get_global_const(47), ___nl__7));
#line 57
c_rt_lib0clear(&___nl__6);
#line 57
c_rt_lib0clear(&___nl__7);
#line 57
c_rt_lib0move(&___nl__4, tct0var(___nl__5));
#line 57
c_rt_lib0clear(&___nl__5);
#line 57
c_rt_lib0move(&___nl__3, ptd_system0is_accepted(___nl__0, ___nl__4, ___ref___1, ___ref___2));
#line 57
c_rt_lib0clear(&___nl__4);
#line 57
c_rt_lib0clear(&___nl__0);
#line 57
return ___nl__3;
#line 57
c_rt_lib0clear(&___nl__3);
#line 57
c_rt_lib0clear(&___nl__0);
#line 57
return NULL;
}

ImmT ptd_system0try_get_ensure_sub_types0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 3, "ptd_system0try_get_ensure_sub_types");
return ptd_system0try_get_ensure_sub_types(_tab[0], &_tab[1], &_tab[2]);}
ImmT ptd_system0try_get_ensure_sub_types(ImmT ___nl__0,ImmT * ___ref___1,ImmT * ___ref___2) {
c_rt_lib0arg_val(___nl__0);
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
ImmT ___nl__9 = NULL;
ImmT ___nl__10 = NULL;
#line 62
c_rt_lib0move(&___nl__4, tct0tct_im());
#line 62
c_rt_lib0move(&___nl__5, tct0tct_im());
#line 62
c_rt_lib0move(&___nl__3, c_rt_lib0hash_mk(2, ___get_global_const(48), ___nl__4, ___get_global_const(47), ___nl__5));
#line 62
c_rt_lib0clear(&___nl__4);
#line 62
c_rt_lib0clear(&___nl__5);
#line 63
c_rt_lib0move(&___nl__4, ptd_system0can_delete(___nl__0, ___ref___1, ___ref___2));
#line 63
c_rt_lib0copy(&___nl__0, ___nl__4);
#line 63
c_rt_lib0clear(&___nl__4);
#line 64
c_rt_lib0move(&___nl__4, ptd_system0is_try_ensure_type(___nl__0, ___ref___1, ___ref___2));
#line 64
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 64
if(c_rt_lib0check_true_native(___nl__4)){ goto label_105;}
#line 65
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(63)));
#line 65
c_rt_lib0move(&___nl__5, c_rt_lib0priv_is(___nl__5, ___get_global_const(797)));
#line 65
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 65
if(c_rt_lib0check_true_native(___nl__5)){ goto label_20;}
#line 65
c_rt_lib0clear(&___nl__0);
#line 65
c_rt_lib0clear(&___nl__4);
#line 65
c_rt_lib0clear(&___nl__5);
#line 65
return ___nl__3;
#line 65
goto label_20;
#line 65
label_20:
#line 65
c_rt_lib0clear(&___nl__5);
#line 66
c_rt_lib0move(&___nl__6, tct0empty());
#line 66
c_rt_lib0move(&___nl__7, tct0empty());
#line 66
c_rt_lib0move(&___nl__5, c_rt_lib0hash_mk(2, ___get_global_const(48), ___nl__6, ___get_global_const(47), ___nl__7));
#line 66
c_rt_lib0clear(&___nl__6);
#line 66
c_rt_lib0clear(&___nl__7);
#line 66
c_rt_lib0copy(&___nl__3, ___nl__5);
#line 66
c_rt_lib0clear(&___nl__5);
#line 67
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(63)));
#line 67
c_rt_lib0move(&___nl__5, c_rt_lib0priv_is(___nl__5, ___get_global_const(804)));
#line 67
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 67
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 67
if(c_rt_lib0check_true_native(___nl__5)){ goto label_39;}
#line 67
c_rt_lib0clear(&___nl__0);
#line 67
c_rt_lib0clear(&___nl__4);
#line 67
c_rt_lib0clear(&___nl__5);
#line 67
return ___nl__3;
#line 67
goto label_39;
#line 67
label_39:
#line 67
c_rt_lib0clear(&___nl__5);
#line 68
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(63)));
#line 68
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__5, ___get_global_const(804)));
#line 69
c_rt_lib0move(&___nl__7,___get_global_const(48));
#line 69
c_rt_lib0move(&___nl__6, hash0has_key(___nl__5, ___nl__7));
#line 69
c_rt_lib0clear(&___nl__7);
#line 69
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 69
if(c_rt_lib0check_true_native(___nl__6)){ goto label_71;}
#line 70
c_rt_lib0move(&___nl__8,___get_global_const(48));
#line 70
c_rt_lib0move(&___nl__7, hash0get_value(___nl__5, ___nl__8));
#line 70
c_rt_lib0clear(&___nl__8);
#line 71
c_rt_lib0move(&___nl__8, c_rt_lib0priv_is(___nl__7, ___get_global_const(808)));
#line 71
if(c_rt_lib0check_true_native(___nl__8)){ goto label_58;}
#line 72
c_rt_lib0move(&___nl__8, c_rt_lib0priv_is(___nl__7, ___get_global_const(809)));
#line 72
if(c_rt_lib0check_true_native(___nl__8)){ goto label_60;}
#line 72
c_rt_lib0move(&___nl__8,___get_global_const(91));
#line 72
c_rt_lib0move(&___nl__8, c_rt_lib0array_mk(2, ___nl__8, ___nl__7));
#line 72
nl_die_arg(___nl__8);
#line 71
label_58:
#line 72
goto label_67;
#line 72
label_60:
#line 72
c_rt_lib0move(&___nl__9, c_rt_lib0priv_as(___nl__7, ___get_global_const(809)));
#line 73
c_rt_lib0copy(&___nl__10, ___nl__9);
#line 73
c_rt_lib0hash_set_value_dec(&___nl__3, ___get_global_const(48), ___nl__10);
#line 73
c_rt_lib0clear(&___nl__10);
#line 73
c_rt_lib0clear(&___nl__9);
#line 74
goto label_67;
#line 74
label_67:
#line 74
c_rt_lib0clear(&___nl__8);
#line 74
c_rt_lib0clear(&___nl__7);
#line 75
goto label_71;
#line 75
label_71:
#line 75
c_rt_lib0clear(&___nl__6);
#line 76
c_rt_lib0move(&___nl__7,___get_global_const(47));
#line 76
c_rt_lib0move(&___nl__6, hash0has_key(___nl__5, ___nl__7));
#line 76
c_rt_lib0clear(&___nl__7);
#line 76
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 76
if(c_rt_lib0check_true_native(___nl__6)){ goto label_101;}
#line 77
c_rt_lib0move(&___nl__8,___get_global_const(47));
#line 77
c_rt_lib0move(&___nl__7, hash0get_value(___nl__5, ___nl__8));
#line 77
c_rt_lib0clear(&___nl__8);
#line 78
c_rt_lib0move(&___nl__8, c_rt_lib0priv_is(___nl__7, ___get_global_const(808)));
#line 78
if(c_rt_lib0check_true_native(___nl__8)){ goto label_88;}
#line 79
c_rt_lib0move(&___nl__8, c_rt_lib0priv_is(___nl__7, ___get_global_const(809)));
#line 79
if(c_rt_lib0check_true_native(___nl__8)){ goto label_90;}
#line 79
c_rt_lib0move(&___nl__8,___get_global_const(91));
#line 79
c_rt_lib0move(&___nl__8, c_rt_lib0array_mk(2, ___nl__8, ___nl__7));
#line 79
nl_die_arg(___nl__8);
#line 78
label_88:
#line 79
goto label_97;
#line 79
label_90:
#line 79
c_rt_lib0move(&___nl__9, c_rt_lib0priv_as(___nl__7, ___get_global_const(809)));
#line 80
c_rt_lib0copy(&___nl__10, ___nl__9);
#line 80
c_rt_lib0hash_set_value_dec(&___nl__3, ___get_global_const(47), ___nl__10);
#line 80
c_rt_lib0clear(&___nl__10);
#line 80
c_rt_lib0clear(&___nl__9);
#line 81
goto label_97;
#line 81
label_97:
#line 81
c_rt_lib0clear(&___nl__8);
#line 81
c_rt_lib0clear(&___nl__7);
#line 82
goto label_101;
#line 82
label_101:
#line 82
c_rt_lib0clear(&___nl__6);
#line 82
c_rt_lib0clear(&___nl__5);
#line 83
goto label_110;
#line 83
label_105:
#line 84
c_rt_lib0move(&___nl__5,___get_global_const(1080));
#line 84
c_rt_lib0delete(ptd_system_priv0add_error(___ref___2, ___nl__5));
#line 84
c_rt_lib0clear(&___nl__5);
#line 85
goto label_110;
#line 85
label_110:
#line 85
c_rt_lib0clear(&___nl__4);
#line 86
c_rt_lib0clear(&___nl__0);
#line 86
return ___nl__3;
#line 86
c_rt_lib0clear(&___nl__3);
#line 86
c_rt_lib0clear(&___nl__0);
#line 86
return NULL;
}

ImmT ptd_system0is_condition_type0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 3, "ptd_system0is_condition_type");
return ptd_system0is_condition_type(_tab[0], &_tab[1], &_tab[2]);}
ImmT ptd_system0is_condition_type(ImmT ___nl__0,ImmT * ___ref___1,ImmT * ___ref___2) {
c_rt_lib0arg_val(___nl__0);
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
#line 91
c_rt_lib0move(&___nl__4, tct0bool());
#line 91
c_rt_lib0move(&___nl__3, ptd_system0is_accepted(___nl__0, ___nl__4, ___ref___1, ___ref___2));
#line 91
c_rt_lib0clear(&___nl__4);
#line 91
c_rt_lib0clear(&___nl__0);
#line 91
return ___nl__3;
#line 91
c_rt_lib0clear(&___nl__3);
#line 91
c_rt_lib0clear(&___nl__0);
#line 91
return NULL;
}

ImmT ptd_system0is_accepted0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 4, "ptd_system0is_accepted");
return ptd_system0is_accepted(_tab[0], _tab[1], &_tab[2], &_tab[3]);}
ImmT ptd_system0is_accepted(ImmT ___nl__0,ImmT ___nl__1,ImmT * ___ref___2,ImmT * ___ref___3) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
#line 96
c_rt_lib0move(&___nl__4, ptd_system0is_accepted_info(___nl__0, ___nl__1, ___ref___2, ___ref___3));
#line 97
c_rt_lib0copy(&___nl__5, ___nl__4);
#line 97
c_rt_lib0move(&___nl__5, c_rt_lib0priv_is(___nl__5, ___get_global_const(48)));
#line 97
c_rt_lib0clear(&___nl__0);
#line 97
c_rt_lib0clear(&___nl__1);
#line 97
c_rt_lib0clear(&___nl__4);
#line 97
return ___nl__5;
#line 97
c_rt_lib0clear(&___nl__5);
#line 97
c_rt_lib0clear(&___nl__4);
#line 97
c_rt_lib0clear(&___nl__0);
#line 97
c_rt_lib0clear(&___nl__1);
#line 97
return NULL;
}

ImmT ptd_system0is_accepted_info0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 4, "ptd_system0is_accepted_info");
return ptd_system0is_accepted_info(_tab[0], _tab[1], &_tab[2], &_tab[3]);}
ImmT ptd_system0is_accepted_info(ImmT ___nl__0,ImmT ___nl__1,ImmT * ___ref___2,ImmT * ___ref___3) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
ImmT ___nl__9 = NULL;
#line 102
c_rt_lib0move(&___nl__4, ptd_system0can_delete(___nl__0, ___ref___2, ___ref___3));
#line 102
c_rt_lib0copy(&___nl__0, ___nl__4);
#line 102
c_rt_lib0clear(&___nl__4);
#line 103
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(63)));
#line 103
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__4, ___get_global_const(797)));
#line 103
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 103
if(c_rt_lib0check_true_native(___nl__4)){ goto label_14;}
#line 103
c_rt_lib0move(&___nl__5, c_rt_lib0ov_mk_none(___get_global_const(48)));
#line 103
c_rt_lib0clear(&___nl__0);
#line 103
c_rt_lib0clear(&___nl__1);
#line 103
c_rt_lib0clear(&___nl__4);
#line 103
return ___nl__5;
#line 103
c_rt_lib0clear(&___nl__5);
#line 103
goto label_14;
#line 103
label_14:
#line 103
c_rt_lib0clear(&___nl__4);
#line 104
c_rt_lib0copy(&___nl__4, ___nl__1);
#line 104
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__4, ___get_global_const(800)));
#line 104
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 104
if(c_rt_lib0check_true_native(___nl__4)){ goto label_46;}
#line 105
c_rt_lib0copy(&___nl__7, ___nl__1);
#line 105
c_rt_lib0move(&___nl__7, c_rt_lib0priv_as(___nl__7, ___get_global_const(800)));
#line 105
c_rt_lib0move(&___nl__5, hash0size(___nl__7));
#line 105
c_rt_lib0clear(&___nl__7);
#line 105
c_rt_lib0move(&___nl__7,___get_global_const(0));
#line 105
c_rt_lib0move(&___nl__5, c_rt_lib0num_eq(___nl__5, ___nl__7));
#line 105
c_rt_lib0clear(&___nl__7);
#line 105
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__5));
#line 105
if(c_rt_lib0check_true_native(___nl__6)){ goto label_31;}
#line 105
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(63)));
#line 105
c_rt_lib0move(&___nl__5, c_rt_lib0priv_is(___nl__5, ___get_global_const(800)));
#line 105
label_31:
#line 105
c_rt_lib0clear(&___nl__6);
#line 105
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 105
if(c_rt_lib0check_true_native(___nl__5)){ goto label_43;}
#line 105
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_none(___get_global_const(48)));
#line 105
c_rt_lib0clear(&___nl__0);
#line 105
c_rt_lib0clear(&___nl__1);
#line 105
c_rt_lib0clear(&___nl__4);
#line 105
c_rt_lib0clear(&___nl__5);
#line 105
return ___nl__6;
#line 105
c_rt_lib0clear(&___nl__6);
#line 105
goto label_43;
#line 105
label_43:
#line 105
c_rt_lib0clear(&___nl__5);
#line 106
goto label_77;
#line 106
label_46:
#line 106
c_rt_lib0copy(&___nl__4, ___nl__1);
#line 106
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__4, ___get_global_const(804)));
#line 106
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 106
if(c_rt_lib0check_true_native(___nl__4)){ goto label_77;}
#line 107
c_rt_lib0copy(&___nl__7, ___nl__1);
#line 107
c_rt_lib0move(&___nl__7, c_rt_lib0priv_as(___nl__7, ___get_global_const(804)));
#line 107
c_rt_lib0move(&___nl__5, hash0size(___nl__7));
#line 107
c_rt_lib0clear(&___nl__7);
#line 107
c_rt_lib0move(&___nl__7,___get_global_const(0));
#line 107
c_rt_lib0move(&___nl__5, c_rt_lib0num_eq(___nl__5, ___nl__7));
#line 107
c_rt_lib0clear(&___nl__7);
#line 107
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__5));
#line 107
if(c_rt_lib0check_true_native(___nl__6)){ goto label_62;}
#line 107
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(63)));
#line 107
c_rt_lib0move(&___nl__5, c_rt_lib0priv_is(___nl__5, ___get_global_const(804)));
#line 107
label_62:
#line 107
c_rt_lib0clear(&___nl__6);
#line 107
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 107
if(c_rt_lib0check_true_native(___nl__5)){ goto label_74;}
#line 107
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_none(___get_global_const(48)));
#line 107
c_rt_lib0clear(&___nl__0);
#line 107
c_rt_lib0clear(&___nl__1);
#line 107
c_rt_lib0clear(&___nl__4);
#line 107
c_rt_lib0clear(&___nl__5);
#line 107
return ___nl__6;
#line 107
c_rt_lib0clear(&___nl__6);
#line 107
goto label_74;
#line 107
label_74:
#line 107
c_rt_lib0clear(&___nl__5);
#line 108
goto label_77;
#line 108
label_77:
#line 108
c_rt_lib0clear(&___nl__4);
#line 109
c_rt_lib0move(&___nl__5,___get_global_const(1));
#line 109
c_rt_lib0move(&___nl__6, c_rt_lib0hash_mk(0));
#line 109
c_rt_lib0move(&___nl__7, c_rt_lib0hash_mk(0));
#line 109
c_rt_lib0move(&___nl__8, c_rt_lib0get_false());
#line 109
c_rt_lib0move(&___nl__9, c_rt_lib0get_false());
#line 109
c_rt_lib0move(&___nl__4, c_rt_lib0hash_mk(5, ___get_global_const(1081), ___nl__5, ___get_global_const(203), ___nl__6, ___get_global_const(278), ___nl__7, ___get_global_const(1082), ___nl__8, ___get_global_const(1083), ___nl__9));
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
#line 110
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(63)));
#line 110
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(43)));
#line 110
c_rt_lib0move(&___nl__5, ptd_system_priv0check_assignment_info(___nl__1, ___nl__6, ___nl__4, ___nl__7, ___ref___2, ___ref___3));
#line 110
c_rt_lib0clear(&___nl__7);
#line 110
c_rt_lib0clear(&___nl__6);
#line 110
c_rt_lib0clear(&___nl__0);
#line 110
c_rt_lib0clear(&___nl__1);
#line 110
c_rt_lib0clear(&___nl__4);
#line 110
return ___nl__5;
#line 110
c_rt_lib0clear(&___nl__5);
#line 110
c_rt_lib0clear(&___nl__4);
#line 110
c_rt_lib0clear(&___nl__0);
#line 110
c_rt_lib0clear(&___nl__1);
#line 110
return NULL;
}

ImmT ptd_system_priv0add_ref_name(ImmT * ___ref___0,ImmT * ___ref___1,ImmT * ___ref___2,ImmT ___nl__3,ImmT * ___ref___4,ImmT * ___ref___5) {
c_rt_lib0arg_val(___nl__3);
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
#line 115
c_rt_lib0copy(&___nl__6, *___ref___0);
#line 115
c_rt_lib0move(&___nl__6, c_rt_lib0priv_as(___nl__6, ___get_global_const(801)));
#line 116
c_rt_lib0move(&___nl__7, hash0has_key(*___ref___1, ___nl__6));
#line 116
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 116
if(c_rt_lib0check_true_native(___nl__7)){ goto label_9;}
#line 116
c_rt_lib0move(&___nl__8, hash0get_value(*___ref___1, ___nl__6));
#line 116
c_rt_lib0copy(___ref___2, ___nl__8);
#line 116
c_rt_lib0clear(&___nl__8);
#line 116
goto label_9;
#line 116
label_9:
#line 116
c_rt_lib0clear(&___nl__7);
#line 117
c_rt_lib0delete(array0push(___ref___2, ___nl__3));
#line 118
c_rt_lib0delete(hash0set_value(___ref___1, ___nl__6, *___ref___2));
#line 119
c_rt_lib0move(&___nl__7, ptd_system0get_ref_type(___nl__6, ___ref___4, ___ref___5));
#line 119
c_rt_lib0copy(___ref___0, ___nl__7);
#line 119
c_rt_lib0clear(&___nl__7);
#line 120
c_rt_lib0clear(&___nl__3);
#line 120
return ___nl__6;
#line 120
c_rt_lib0clear(&___nl__6);
#line 120
c_rt_lib0clear(&___nl__3);
#line 120
return NULL;
}

ImmT ptd_system_priv0is_cycle_ref(ImmT * ___ref___0,ImmT * ___ref___1,ImmT * ___ref___2,ImmT ___nl__3,ImmT ___nl__4,ImmT * ___ref___5,ImmT * ___ref___6) {
c_rt_lib0arg_val(___nl__3);
c_rt_lib0arg_val(___nl__4);
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
ImmT ___nl__9 = NULL;
ImmT ___nl__10 = NULL;
ImmT ___nl__11 = NULL;
ImmT ___nl__12 = NULL;
ImmT ___nl__13 = NULL;
ImmT ___nl__14 = NULL;
#line 126
c_rt_lib0copy(&___nl__7, *___ref___0);
#line 126
c_rt_lib0move(&___nl__7, c_rt_lib0priv_is(___nl__7, ___get_global_const(801)));
#line 126
c_rt_lib0move(&___nl__8, c_rt_lib0not(___nl__7));
#line 126
if(c_rt_lib0check_true_native(___nl__8)){ goto label_6;}
#line 126
c_rt_lib0copy(&___nl__7, *___ref___1);
#line 126
c_rt_lib0move(&___nl__7, c_rt_lib0priv_is(___nl__7, ___get_global_const(801)));
#line 126
label_6:
#line 126
c_rt_lib0clear(&___nl__8);
#line 126
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 126
if(c_rt_lib0check_true_native(___nl__7)){ goto label_50;}
#line 127
c_rt_lib0copy(&___nl__8, *___ref___0);
#line 127
c_rt_lib0move(&___nl__8, c_rt_lib0priv_as(___nl__8, ___get_global_const(801)));
#line 127
c_rt_lib0copy(&___nl__9, *___ref___1);
#line 127
c_rt_lib0move(&___nl__9, c_rt_lib0priv_as(___nl__9, ___get_global_const(801)));
#line 127
c_rt_lib0move(&___nl__8, c_rt_lib0eq(___nl__8, ___nl__9));
#line 127
c_rt_lib0clear(&___nl__9);
#line 127
c_rt_lib0move(&___nl__8, c_rt_lib0not(___nl__8));
#line 127
if(c_rt_lib0check_true_native(___nl__8)){ goto label_26;}
#line 127
c_rt_lib0move(&___nl__9, c_rt_lib0get_true());
#line 127
c_rt_lib0clear(&___nl__3);
#line 127
c_rt_lib0clear(&___nl__4);
#line 127
c_rt_lib0clear(&___nl__7);
#line 127
c_rt_lib0clear(&___nl__8);
#line 127
return ___nl__9;
#line 127
c_rt_lib0clear(&___nl__9);
#line 127
goto label_26;
#line 127
label_26:
#line 127
c_rt_lib0clear(&___nl__8);
#line 128
c_rt_lib0copy(&___nl__8, ___nl__3);
#line 128
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__8));
#line 128
if(c_rt_lib0check_true_native(___nl__9)){ goto label_35;}
#line 128
c_rt_lib0move(&___nl__10, c_rt_lib0ov_mk_none(___get_global_const(1084)));
#line 128
c_rt_lib0move(&___nl__8, ptd_system_priv0check_assignment_info(*___ref___0, *___ref___1, *___ref___2, ___nl__10, ___ref___5, ___ref___6));
#line 128
c_rt_lib0clear(&___nl__10);
#line 128
c_rt_lib0move(&___nl__8, c_rt_lib0priv_is(___nl__8, ___get_global_const(48)));
#line 128
label_35:
#line 128
c_rt_lib0clear(&___nl__9);
#line 128
c_rt_lib0move(&___nl__8, c_rt_lib0not(___nl__8));
#line 128
if(c_rt_lib0check_true_native(___nl__8)){ goto label_47;}
#line 128
c_rt_lib0move(&___nl__9, c_rt_lib0get_true());
#line 128
c_rt_lib0clear(&___nl__3);
#line 128
c_rt_lib0clear(&___nl__4);
#line 128
c_rt_lib0clear(&___nl__7);
#line 128
c_rt_lib0clear(&___nl__8);
#line 128
return ___nl__9;
#line 128
c_rt_lib0clear(&___nl__9);
#line 128
goto label_47;
#line 128
label_47:
#line 128
c_rt_lib0clear(&___nl__8);
#line 129
goto label_50;
#line 129
label_50:
#line 129
c_rt_lib0clear(&___nl__7);
#line 130
c_rt_lib0move(&___nl__7, c_rt_lib0array_mk(0));
#line 131
c_rt_lib0move(&___nl__8, c_rt_lib0array_mk(0));
#line 132
label_54:
#line 132
c_rt_lib0copy(&___nl__9, *___ref___1);
#line 132
c_rt_lib0move(&___nl__9, c_rt_lib0priv_is(___nl__9, ___get_global_const(801)));
#line 132
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__9));
#line 132
if(c_rt_lib0check_true_native(___nl__9)){ goto label_90;}
#line 133
c_rt_lib0move(&___nl__11,___get_global_const(203));
#line 133
c_rt_lib0move(&___nl__11, c_rt_lib0get_ref_hash(*___ref___2, ___nl__11));
#line 133
c_rt_lib0move(&___nl__12, c_rt_lib0hash_get_value_dec(*___ref___2, ___get_global_const(1081)));
#line 133
c_rt_lib0move(&___nl__10, ptd_system_priv0add_ref_name(___ref___1, &___nl__11, &___nl__8, ___nl__12, ___ref___5, ___ref___6));
#line 133
c_rt_lib0clear(&___nl__12);
#line 133
c_rt_lib0move(&___nl__12,___get_global_const(203));
#line 133
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___2, ___nl__12, ___nl__11));
#line 133
c_rt_lib0clear(&___nl__12);
#line 133
c_rt_lib0clear(&___nl__11);
#line 134
c_rt_lib0move(&___nl__11, c_rt_lib0hash_get_value_dec(*___ref___2, ___get_global_const(1082)));
#line 134
c_rt_lib0move(&___nl__13, c_rt_lib0not(___nl__11));
#line 134
if(c_rt_lib0check_true_native(___nl__13)){ goto label_75;}
#line 134
c_rt_lib0move(&___nl__11, array0len(___nl__8));
#line 134
c_rt_lib0move(&___nl__14,___get_global_const(1));
#line 134
c_rt_lib0move(&___nl__11, c_rt_lib0num_eq(___nl__11, ___nl__14));
#line 134
c_rt_lib0clear(&___nl__14);
#line 134
label_75:
#line 134
c_rt_lib0clear(&___nl__13);
#line 134
c_rt_lib0move(&___nl__12, c_rt_lib0not(___nl__11));
#line 134
if(c_rt_lib0check_true_native(___nl__12)){ goto label_80;}
#line 134
c_rt_lib0copy(&___nl__11, ___nl__4);
#line 134
label_80:
#line 134
c_rt_lib0clear(&___nl__12);
#line 134
c_rt_lib0move(&___nl__11, c_rt_lib0not(___nl__11));
#line 134
if(c_rt_lib0check_true_native(___nl__11)){ goto label_86;}
#line 134
c_rt_lib0delete(ptd_system_priv0add_delete(___nl__10, ___ref___5, ___ref___6));
#line 134
goto label_86;
#line 134
label_86:
#line 134
c_rt_lib0clear(&___nl__11);
#line 134
c_rt_lib0clear(&___nl__10);
#line 135
goto label_54;
#line 135
label_90:
#line 135
c_rt_lib0clear(&___nl__9);
#line 136
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(*___ref___2, ___get_global_const(1083)));
#line 136
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__9));
#line 136
if(c_rt_lib0check_true_native(___nl__9)){ goto label_123;}
#line 137
c_rt_lib0copy(&___nl__10, *___ref___1);
#line 137
c_rt_lib0move(&___nl__10, c_rt_lib0priv_is(___nl__10, ___get_global_const(797)));
#line 137
c_rt_lib0move(&___nl__10, c_rt_lib0not(___nl__10));
#line 137
if(c_rt_lib0check_true_native(___nl__10)){ goto label_120;}
#line 138
c_rt_lib0move(&___nl__11, c_rt_lib0hash_get_value_dec(*___ref___2, ___get_global_const(1082)));
#line 138
c_rt_lib0move(&___nl__11, c_rt_lib0not(___nl__11));
#line 138
if(c_rt_lib0check_true_native(___nl__11)){ goto label_108;}
#line 138
c_rt_lib0move(&___nl__12, c_rt_lib0ov_mk_none(___get_global_const(154)));
#line 138
c_rt_lib0move(&___nl__13, c_rt_lib0hash_get_value_dec(*___ref___2, ___get_global_const(278)));
#line 138
c_rt_lib0delete(ptd_system_priv0walk_on_type(*___ref___0, ___nl__12, ___nl__13, ___ref___5, ___ref___6));
#line 138
c_rt_lib0clear(&___nl__13);
#line 138
c_rt_lib0clear(&___nl__12);
#line 138
goto label_108;
#line 138
label_108:
#line 138
c_rt_lib0clear(&___nl__11);
#line 139
c_rt_lib0move(&___nl__11, c_rt_lib0get_true());
#line 139
c_rt_lib0clear(&___nl__3);
#line 139
c_rt_lib0clear(&___nl__4);
#line 139
c_rt_lib0clear(&___nl__7);
#line 139
c_rt_lib0clear(&___nl__8);
#line 139
c_rt_lib0clear(&___nl__9);
#line 139
c_rt_lib0clear(&___nl__10);
#line 139
return ___nl__11;
#line 139
c_rt_lib0clear(&___nl__11);
#line 140
goto label_120;
#line 140
label_120:
#line 140
c_rt_lib0clear(&___nl__10);
#line 141
goto label_123;
#line 141
label_123:
#line 141
c_rt_lib0clear(&___nl__9);
#line 142
label_125:
#line 142
c_rt_lib0copy(&___nl__9, *___ref___0);
#line 142
c_rt_lib0move(&___nl__9, c_rt_lib0priv_is(___nl__9, ___get_global_const(801)));
#line 142
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__9));
#line 142
if(c_rt_lib0check_true_native(___nl__9)){ goto label_156;}
#line 143
c_rt_lib0move(&___nl__11,___get_global_const(278));
#line 143
c_rt_lib0move(&___nl__11, c_rt_lib0get_ref_hash(*___ref___2, ___nl__11));
#line 143
c_rt_lib0move(&___nl__12, c_rt_lib0hash_get_value_dec(*___ref___2, ___get_global_const(1081)));
#line 143
c_rt_lib0move(&___nl__10, ptd_system_priv0add_ref_name(___ref___0, &___nl__11, &___nl__7, ___nl__12, ___ref___5, ___ref___6));
#line 143
c_rt_lib0clear(&___nl__12);
#line 143
c_rt_lib0move(&___nl__12,___get_global_const(278));
#line 143
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___2, ___nl__12, ___nl__11));
#line 143
c_rt_lib0clear(&___nl__12);
#line 143
c_rt_lib0clear(&___nl__11);
#line 144
c_rt_lib0move(&___nl__11, c_rt_lib0hash_get_value_dec(*___ref___2, ___get_global_const(1082)));
#line 144
c_rt_lib0move(&___nl__12, c_rt_lib0not(___nl__11));
#line 144
if(c_rt_lib0check_true_native(___nl__12)){ goto label_146;}
#line 144
c_rt_lib0move(&___nl__11, array0len(___nl__7));
#line 144
c_rt_lib0move(&___nl__13,___get_global_const(1));
#line 144
c_rt_lib0move(&___nl__11, c_rt_lib0num_eq(___nl__11, ___nl__13));
#line 144
c_rt_lib0clear(&___nl__13);
#line 144
label_146:
#line 144
c_rt_lib0clear(&___nl__12);
#line 144
c_rt_lib0move(&___nl__11, c_rt_lib0not(___nl__11));
#line 144
if(c_rt_lib0check_true_native(___nl__11)){ goto label_152;}
#line 144
c_rt_lib0delete(ptd_system_priv0add_create(___nl__10, ___ref___5, ___ref___6));
#line 144
goto label_152;
#line 144
label_152:
#line 144
c_rt_lib0clear(&___nl__11);
#line 144
c_rt_lib0clear(&___nl__10);
#line 145
goto label_125;
#line 145
label_156:
#line 145
c_rt_lib0clear(&___nl__9);
#line 146
c_rt_lib0move(&___nl__9,___get_global_const(0));
#line 147
c_rt_lib0move(&___nl__10,___get_global_const(0));
#line 147
label_160:
#line 147
c_rt_lib0move(&___nl__11, array0len(___nl__7));
#line 147
c_rt_lib0move(&___nl__13,___get_global_const(1));
#line 147
c_rt_lib0move(&___nl__11, c_rt_lib0sub_mod(___nl__11, ___nl__13));
#line 147
c_rt_lib0clear(&___nl__13);
#line 147
c_rt_lib0move(&___nl__11, c_rt_lib0lt(___nl__10, ___nl__11));
#line 147
c_rt_lib0move(&___nl__12, c_rt_lib0not(___nl__11));
#line 147
if(c_rt_lib0check_true_native(___nl__12)){ goto label_172;}
#line 147
c_rt_lib0move(&___nl__11, array0len(___nl__8));
#line 147
c_rt_lib0move(&___nl__13,___get_global_const(0));
#line 147
c_rt_lib0move(&___nl__11, c_rt_lib0gt(___nl__11, ___nl__13));
#line 147
c_rt_lib0clear(&___nl__13);
#line 147
label_172:
#line 147
c_rt_lib0clear(&___nl__12);
#line 147
c_rt_lib0move(&___nl__11, c_rt_lib0not(___nl__11));
#line 147
if(c_rt_lib0check_true_native(___nl__11)){ goto label_213;}
#line 148
label_176:
#line 148
c_rt_lib0move(&___nl__12, c_rt_lib0array_get(___nl__8, ___nl__9));
#line 148
c_rt_lib0move(&___nl__13, c_rt_lib0array_get(___nl__7, ___nl__10));
#line 148
c_rt_lib0move(&___nl__12, c_rt_lib0lt(___nl__12, ___nl__13));
#line 148
c_rt_lib0clear(&___nl__13);
#line 148
c_rt_lib0move(&___nl__12, c_rt_lib0not(___nl__12));
#line 148
if(c_rt_lib0check_true_native(___nl__12)){ goto label_187;}
#line 149
c_rt_lib0move(&___nl__13,___get_global_const(1));
#line 149
c_rt_lib0move(&___nl__9, c_rt_lib0add_mod(___nl__9, ___nl__13));
#line 149
c_rt_lib0clear(&___nl__13);
#line 150
goto label_176;
#line 150
label_187:
#line 150
c_rt_lib0clear(&___nl__12);
#line 151
c_rt_lib0move(&___nl__12, c_rt_lib0array_get(___nl__8, ___nl__9));
#line 151
c_rt_lib0move(&___nl__13, c_rt_lib0array_get(___nl__7, ___nl__10));
#line 151
c_rt_lib0move(&___nl__12, c_rt_lib0num_eq(___nl__12, ___nl__13));
#line 151
c_rt_lib0clear(&___nl__13);
#line 151
c_rt_lib0move(&___nl__12, c_rt_lib0not(___nl__12));
#line 151
if(c_rt_lib0check_true_native(___nl__12)){ goto label_207;}
#line 151
c_rt_lib0move(&___nl__13, c_rt_lib0get_true());
#line 151
c_rt_lib0clear(&___nl__3);
#line 151
c_rt_lib0clear(&___nl__4);
#line 151
c_rt_lib0clear(&___nl__7);
#line 151
c_rt_lib0clear(&___nl__8);
#line 151
c_rt_lib0clear(&___nl__9);
#line 151
c_rt_lib0clear(&___nl__10);
#line 151
c_rt_lib0clear(&___nl__11);
#line 151
c_rt_lib0clear(&___nl__12);
#line 151
return ___nl__13;
#line 151
c_rt_lib0clear(&___nl__13);
#line 151
goto label_207;
#line 151
label_207:
#line 151
c_rt_lib0clear(&___nl__12);
#line 147
c_rt_lib0move(&___nl__12,___get_global_const(1));
#line 147
c_rt_lib0move(&___nl__10, c_rt_lib0add_mod(___nl__10, ___nl__12));
#line 147
c_rt_lib0clear(&___nl__12);
#line 152
goto label_160;
#line 152
label_213:
#line 152
c_rt_lib0clear(&___nl__10);
#line 152
c_rt_lib0clear(&___nl__11);
#line 153
c_rt_lib0move(&___nl__10,___get_global_const(1));
#line 153
c_rt_lib0move(&___nl__11,___get_global_const(1081));
#line 153
c_rt_lib0move(&___nl__11, c_rt_lib0get_ref_hash(*___ref___2, ___nl__11));
#line 153
c_rt_lib0move(&___nl__11, c_rt_lib0add_mod(___nl__11, ___nl__10));
#line 153
c_rt_lib0move(&___nl__12,___get_global_const(1081));
#line 153
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___2, ___nl__12, ___nl__11));
#line 153
c_rt_lib0clear(&___nl__12);
#line 153
c_rt_lib0clear(&___nl__10);
#line 153
c_rt_lib0clear(&___nl__11);
#line 154
c_rt_lib0move(&___nl__10, c_rt_lib0get_false());
#line 154
c_rt_lib0clear(&___nl__3);
#line 154
c_rt_lib0clear(&___nl__4);
#line 154
c_rt_lib0clear(&___nl__7);
#line 154
c_rt_lib0clear(&___nl__8);
#line 154
c_rt_lib0clear(&___nl__9);
#line 154
return ___nl__10;
#line 154
c_rt_lib0clear(&___nl__10);
#line 154
c_rt_lib0clear(&___nl__7);
#line 154
c_rt_lib0clear(&___nl__8);
#line 154
c_rt_lib0clear(&___nl__9);
#line 154
c_rt_lib0clear(&___nl__3);
#line 154
c_rt_lib0clear(&___nl__4);
#line 154
return NULL;
}

ImmT ptd_system0cross_type0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 4, "ptd_system0cross_type");
return ptd_system0cross_type(_tab[0], _tab[1], &_tab[2], &_tab[3]);}
ImmT ptd_system0cross_type(ImmT ___nl__0,ImmT ___nl__1,ImmT * ___ref___2,ImmT * ___ref___3) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
ImmT ___nl__9 = NULL;
#line 159
c_rt_lib0move(&___nl__5,___get_global_const(1));
#line 159
c_rt_lib0move(&___nl__6, c_rt_lib0hash_mk(0));
#line 159
c_rt_lib0move(&___nl__7, c_rt_lib0hash_mk(0));
#line 159
c_rt_lib0move(&___nl__8, c_rt_lib0get_false());
#line 159
c_rt_lib0move(&___nl__9, c_rt_lib0get_false());
#line 159
c_rt_lib0move(&___nl__4, c_rt_lib0hash_mk(5, ___get_global_const(1081), ___nl__5, ___get_global_const(203), ___nl__6, ___get_global_const(278), ___nl__7, ___get_global_const(1082), ___nl__8, ___get_global_const(1083), ___nl__9));
#line 159
c_rt_lib0clear(&___nl__5);
#line 159
c_rt_lib0clear(&___nl__6);
#line 159
c_rt_lib0clear(&___nl__7);
#line 159
c_rt_lib0clear(&___nl__8);
#line 159
c_rt_lib0clear(&___nl__9);
#line 160
c_rt_lib0move(&___nl__5, ptd_system_priv0cross_type(___nl__0, ___nl__1, ___nl__4, ___ref___2, ___ref___3));
#line 160
c_rt_lib0clear(&___nl__0);
#line 160
c_rt_lib0clear(&___nl__1);
#line 160
c_rt_lib0clear(&___nl__4);
#line 160
return ___nl__5;
#line 160
c_rt_lib0clear(&___nl__5);
#line 160
c_rt_lib0clear(&___nl__4);
#line 160
c_rt_lib0clear(&___nl__0);
#line 160
c_rt_lib0clear(&___nl__1);
#line 160
return NULL;
}

ImmT ptd_system_priv0cross_type(ImmT ___nl__0,ImmT ___nl__1,ImmT ___nl__2,ImmT * ___ref___3,ImmT * ___ref___4) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
c_rt_lib0arg_val(___nl__2);
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
#line 165
c_rt_lib0copy(&___nl__5, ___nl__1);
#line 165
c_rt_lib0move(&___nl__5, c_rt_lib0priv_is(___nl__5, ___get_global_const(797)));
#line 165
if(c_rt_lib0check_true_native(___nl__5)){ goto label_5;}
#line 165
c_rt_lib0copy(&___nl__5, ___nl__0);
#line 165
c_rt_lib0move(&___nl__5, c_rt_lib0priv_is(___nl__5, ___get_global_const(797)));
#line 165
label_5:
#line 165
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 165
if(c_rt_lib0check_true_native(___nl__5)){ goto label_16;}
#line 165
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_none(___get_global_const(797)));
#line 165
c_rt_lib0clear(&___nl__0);
#line 165
c_rt_lib0clear(&___nl__1);
#line 165
c_rt_lib0clear(&___nl__2);
#line 165
c_rt_lib0clear(&___nl__5);
#line 165
return ___nl__6;
#line 165
c_rt_lib0clear(&___nl__6);
#line 165
goto label_16;
#line 165
label_16:
#line 165
c_rt_lib0clear(&___nl__5);
#line 166
c_rt_lib0move(&___nl__6, c_rt_lib0get_true());
#line 166
c_rt_lib0move(&___nl__7, c_rt_lib0get_false());
#line 166
c_rt_lib0move(&___nl__5, ptd_system_priv0is_cycle_ref(&___nl__0, &___nl__1, &___nl__2, ___nl__6, ___nl__7, ___ref___3, ___ref___4));
#line 166
c_rt_lib0clear(&___nl__7);
#line 166
c_rt_lib0clear(&___nl__6);
#line 166
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 166
if(c_rt_lib0check_true_native(___nl__5)){ goto label_30;}
#line 167
c_rt_lib0clear(&___nl__1);
#line 167
c_rt_lib0clear(&___nl__2);
#line 167
c_rt_lib0clear(&___nl__5);
#line 167
return ___nl__0;
#line 168
goto label_30;
#line 168
label_30:
#line 168
c_rt_lib0clear(&___nl__5);
#line 169
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(1081)));
#line 169
c_rt_lib0move(&___nl__6,___get_global_const(1085));
#line 169
c_rt_lib0move(&___nl__5, c_rt_lib0num_eq(___nl__5, ___nl__6));
#line 169
c_rt_lib0clear(&___nl__6);
#line 169
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 169
if(c_rt_lib0check_true_native(___nl__5)){ goto label_49;}
#line 170
c_rt_lib0move(&___nl__6,___get_global_const(1086));
#line 170
c_rt_lib0delete(ptd_system_priv0add_error(___ref___4, ___nl__6));
#line 170
c_rt_lib0clear(&___nl__6);
#line 171
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_none(___get_global_const(797)));
#line 171
c_rt_lib0clear(&___nl__0);
#line 171
c_rt_lib0clear(&___nl__1);
#line 171
c_rt_lib0clear(&___nl__2);
#line 171
c_rt_lib0clear(&___nl__5);
#line 171
return ___nl__6;
#line 171
c_rt_lib0clear(&___nl__6);
#line 172
goto label_49;
#line 172
label_49:
#line 172
c_rt_lib0clear(&___nl__5);
#line 173
c_rt_lib0copy(&___nl__5, ___nl__1);
#line 173
c_rt_lib0move(&___nl__5, c_rt_lib0priv_is(___nl__5, ___get_global_const(805)));
#line 173
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 173
if(c_rt_lib0check_true_native(___nl__5)){ goto label_60;}
#line 173
c_rt_lib0clear(&___nl__1);
#line 173
c_rt_lib0clear(&___nl__2);
#line 173
c_rt_lib0clear(&___nl__5);
#line 173
return ___nl__0;
#line 173
goto label_60;
#line 173
label_60:
#line 173
c_rt_lib0clear(&___nl__5);
#line 174
c_rt_lib0move(&___nl__5, c_rt_lib0priv_is(___nl__0, ___get_global_const(805)));
#line 174
if(c_rt_lib0check_true_native(___nl__5)){ goto label_83;}
#line 176
c_rt_lib0move(&___nl__5, c_rt_lib0priv_is(___nl__0, ___get_global_const(797)));
#line 176
if(c_rt_lib0check_true_native(___nl__5)){ goto label_89;}
#line 178
c_rt_lib0move(&___nl__5, c_rt_lib0priv_is(___nl__0, ___get_global_const(803)));
#line 178
if(c_rt_lib0check_true_native(___nl__5)){ goto label_98;}
#line 180
c_rt_lib0move(&___nl__5, c_rt_lib0priv_is(___nl__0, ___get_global_const(801)));
#line 180
if(c_rt_lib0check_true_native(___nl__5)){ goto label_115;}
#line 182
c_rt_lib0move(&___nl__5, c_rt_lib0priv_is(___nl__0, ___get_global_const(802)));
#line 182
if(c_rt_lib0check_true_native(___nl__5)){ goto label_122;}
#line 184
c_rt_lib0move(&___nl__5, c_rt_lib0priv_is(___nl__0, ___get_global_const(798)));
#line 184
if(c_rt_lib0check_true_native(___nl__5)){ goto label_127;}
#line 188
c_rt_lib0move(&___nl__5, c_rt_lib0priv_is(___nl__0, ___get_global_const(804)));
#line 188
if(c_rt_lib0check_true_native(___nl__5)){ goto label_152;}
#line 226
c_rt_lib0move(&___nl__5, c_rt_lib0priv_is(___nl__0, ___get_global_const(800)));
#line 226
if(c_rt_lib0check_true_native(___nl__5)){ goto label_349;}
#line 253
c_rt_lib0move(&___nl__5, c_rt_lib0priv_is(___nl__0, ___get_global_const(799)));
#line 253
if(c_rt_lib0check_true_native(___nl__5)){ goto label_493;}
#line 253
c_rt_lib0move(&___nl__5,___get_global_const(91));
#line 253
c_rt_lib0move(&___nl__5, c_rt_lib0array_mk(2, ___nl__5, ___nl__0));
#line 253
nl_die_arg(___nl__5);
#line 174
label_83:
#line 175
c_rt_lib0clear(&___nl__0);
#line 175
c_rt_lib0clear(&___nl__2);
#line 175
c_rt_lib0clear(&___nl__5);
#line 175
return ___nl__1;
#line 176
goto label_539;
#line 176
label_89:
#line 177
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_none(___get_global_const(797)));
#line 177
c_rt_lib0clear(&___nl__0);
#line 177
c_rt_lib0clear(&___nl__1);
#line 177
c_rt_lib0clear(&___nl__2);
#line 177
c_rt_lib0clear(&___nl__5);
#line 177
return ___nl__6;
#line 177
c_rt_lib0clear(&___nl__6);
#line 178
goto label_539;
#line 178
label_98:
#line 179
c_rt_lib0copy(&___nl__6, ___nl__1);
#line 179
c_rt_lib0move(&___nl__6, c_rt_lib0priv_is(___nl__6, ___get_global_const(803)));
#line 179
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 179
if(c_rt_lib0check_true_native(___nl__6)){ goto label_112;}
#line 179
c_rt_lib0move(&___nl__7, c_rt_lib0ov_mk_none(___get_global_const(803)));
#line 179
c_rt_lib0clear(&___nl__0);
#line 179
c_rt_lib0clear(&___nl__1);
#line 179
c_rt_lib0clear(&___nl__2);
#line 179
c_rt_lib0clear(&___nl__5);
#line 179
c_rt_lib0clear(&___nl__6);
#line 179
return ___nl__7;
#line 179
c_rt_lib0clear(&___nl__7);
#line 179
goto label_112;
#line 179
label_112:
#line 179
c_rt_lib0clear(&___nl__6);
#line 180
goto label_539;
#line 180
label_115:
#line 180
c_rt_lib0move(&___nl__6, c_rt_lib0priv_as(___nl__0, ___get_global_const(801)));
#line 181
c_rt_lib0move(&___nl__7, c_rt_lib0array_mk(0));
#line 181
nl_die_arg(___nl__7);
#line 181
c_rt_lib0clear(&___nl__7);
#line 181
c_rt_lib0clear(&___nl__6);
#line 182
goto label_539;
#line 182
label_122:
#line 183
c_rt_lib0move(&___nl__6, c_rt_lib0array_mk(0));
#line 183
nl_die_arg(___nl__6);
#line 183
c_rt_lib0clear(&___nl__6);
#line 184
goto label_539;
#line 184
label_127:
#line 184
c_rt_lib0move(&___nl__6, c_rt_lib0priv_as(___nl__0, ___get_global_const(798)));
#line 185
c_rt_lib0copy(&___nl__7, ___nl__1);
#line 185
c_rt_lib0move(&___nl__7, c_rt_lib0priv_is(___nl__7, ___get_global_const(798)));
#line 185
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 185
if(c_rt_lib0check_true_native(___nl__7)){ goto label_148;}
#line 186
c_rt_lib0copy(&___nl__10, ___nl__1);
#line 186
c_rt_lib0move(&___nl__10, c_rt_lib0priv_as(___nl__10, ___get_global_const(798)));
#line 186
c_rt_lib0move(&___nl__9, ptd_system_priv0cross_type(___nl__6, ___nl__10, ___nl__2, ___ref___3, ___ref___4));
#line 186
c_rt_lib0clear(&___nl__10);
#line 186
c_rt_lib0move(&___nl__8, tct0arr(___nl__9));
#line 186
c_rt_lib0clear(&___nl__9);
#line 186
c_rt_lib0clear(&___nl__0);
#line 186
c_rt_lib0clear(&___nl__1);
#line 186
c_rt_lib0clear(&___nl__2);
#line 186
c_rt_lib0clear(&___nl__5);
#line 186
c_rt_lib0clear(&___nl__6);
#line 186
c_rt_lib0clear(&___nl__7);
#line 186
return ___nl__8;
#line 186
c_rt_lib0clear(&___nl__8);
#line 187
goto label_148;
#line 187
label_148:
#line 187
c_rt_lib0clear(&___nl__7);
#line 187
c_rt_lib0clear(&___nl__6);
#line 188
goto label_539;
#line 188
label_152:
#line 188
c_rt_lib0move(&___nl__6, c_rt_lib0priv_as(___nl__0, ___get_global_const(804)));
#line 189
c_rt_lib0copy(&___nl__7, ___nl__6);
#line 190
c_rt_lib0copy(&___nl__8, ___nl__1);
#line 190
c_rt_lib0move(&___nl__8, c_rt_lib0priv_is(___nl__8, ___get_global_const(804)));
#line 190
c_rt_lib0move(&___nl__8, c_rt_lib0not(___nl__8));
#line 190
if(c_rt_lib0check_true_native(___nl__8)){ goto label_344;}
#line 191
c_rt_lib0copy(&___nl__9, ___nl__1);
#line 191
c_rt_lib0move(&___nl__9, c_rt_lib0priv_as(___nl__9, ___get_global_const(804)));
#line 192
c_rt_lib0move(&___nl__12, c_rt_lib0init_iter(___nl__6));
#line 192
label_162:
#line 192
c_rt_lib0move(&___nl__10, c_rt_lib0is_end_hash(___nl__12));
#line 192
if(c_rt_lib0check_true_native(___nl__10)){ goto label_287;}
#line 192
c_rt_lib0move(&___nl__10, c_rt_lib0get_key_iter(___nl__12));
#line 192
c_rt_lib0move(&___nl__11, c_rt_lib0hash_get_value(___nl__6, ___nl__10));
#line 193
c_rt_lib0move(&___nl__13, hash0has_key(___nl__9, ___nl__10));
#line 193
c_rt_lib0move(&___nl__13, c_rt_lib0not(___nl__13));
#line 193
if(c_rt_lib0check_true_native(___nl__13)){ goto label_262;}
#line 194
c_rt_lib0move(&___nl__14, hash0get_value(___nl__9, ___nl__10));
#line 195
c_rt_lib0move(&___nl__15, c_rt_lib0priv_is(___nl__14, ___get_global_const(809)));
#line 195
if(c_rt_lib0check_true_native(___nl__15)){ goto label_178;}
#line 201
c_rt_lib0move(&___nl__15, c_rt_lib0priv_is(___nl__14, ___get_global_const(808)));
#line 201
if(c_rt_lib0check_true_native(___nl__15)){ goto label_219;}
#line 201
c_rt_lib0move(&___nl__15,___get_global_const(91));
#line 201
c_rt_lib0move(&___nl__15, c_rt_lib0array_mk(2, ___nl__15, ___nl__14));
#line 201
nl_die_arg(___nl__15);
#line 195
label_178:
#line 195
c_rt_lib0move(&___nl__16, c_rt_lib0priv_as(___nl__14, ___get_global_const(809)));
#line 196
c_rt_lib0move(&___nl__17, c_rt_lib0priv_is(___nl__11, ___get_global_const(809)));
#line 196
if(c_rt_lib0check_true_native(___nl__17)){ goto label_187;}
#line 198
c_rt_lib0move(&___nl__17, c_rt_lib0priv_is(___nl__11, ___get_global_const(808)));
#line 198
if(c_rt_lib0check_true_native(___nl__17)){ goto label_194;}
#line 198
c_rt_lib0move(&___nl__17,___get_global_const(91));
#line 198
c_rt_lib0move(&___nl__17, c_rt_lib0array_mk(2, ___nl__17, ___nl__11));
#line 198
nl_die_arg(___nl__17);
#line 196
label_187:
#line 196
c_rt_lib0move(&___nl__18, c_rt_lib0priv_as(___nl__11, ___get_global_const(809)));
#line 197
c_rt_lib0move(&___nl__19, ptd_system_priv0cross_type(___nl__16, ___nl__18, ___nl__2, ___ref___3, ___ref___4));
#line 197
c_rt_lib0delete(hash0set_value(&___nl__7, ___nl__10, ___nl__19));
#line 197
c_rt_lib0clear(&___nl__19);
#line 197
c_rt_lib0clear(&___nl__18);
#line 198
goto label_215;
#line 198
label_194:
#line 199
c_rt_lib0move(&___nl__18, c_rt_lib0ov_mk_none(___get_global_const(797)));
#line 199
c_rt_lib0clear(&___nl__0);
#line 199
c_rt_lib0clear(&___nl__1);
#line 199
c_rt_lib0clear(&___nl__2);
#line 199
c_rt_lib0clear(&___nl__5);
#line 199
c_rt_lib0clear(&___nl__6);
#line 199
c_rt_lib0clear(&___nl__7);
#line 199
c_rt_lib0clear(&___nl__8);
#line 199
c_rt_lib0clear(&___nl__9);
#line 199
c_rt_lib0clear(&___nl__10);
#line 199
c_rt_lib0clear(&___nl__11);
#line 199
c_rt_lib0clear(&___nl__12);
#line 199
c_rt_lib0clear(&___nl__13);
#line 199
c_rt_lib0clear(&___nl__14);
#line 199
c_rt_lib0clear(&___nl__15);
#line 199
c_rt_lib0clear(&___nl__16);
#line 199
c_rt_lib0clear(&___nl__17);
#line 199
return ___nl__18;
#line 199
c_rt_lib0clear(&___nl__18);
#line 200
goto label_215;
#line 200
label_215:
#line 200
c_rt_lib0clear(&___nl__17);
#line 200
c_rt_lib0clear(&___nl__16);
#line 201
goto label_258;
#line 201
label_219:
#line 202
c_rt_lib0move(&___nl__16, c_rt_lib0priv_is(___nl__11, ___get_global_const(809)));
#line 202
if(c_rt_lib0check_true_native(___nl__16)){ goto label_227;}
#line 204
c_rt_lib0move(&___nl__16, c_rt_lib0priv_is(___nl__11, ___get_global_const(808)));
#line 204
if(c_rt_lib0check_true_native(___nl__16)){ goto label_250;}
#line 204
c_rt_lib0move(&___nl__16,___get_global_const(91));
#line 204
c_rt_lib0move(&___nl__16, c_rt_lib0array_mk(2, ___nl__16, ___nl__11));
#line 204
nl_die_arg(___nl__16);
#line 202
label_227:
#line 202
c_rt_lib0move(&___nl__17, c_rt_lib0priv_as(___nl__11, ___get_global_const(809)));
#line 203
c_rt_lib0move(&___nl__18, c_rt_lib0ov_mk_none(___get_global_const(797)));
#line 203
c_rt_lib0clear(&___nl__0);
#line 203
c_rt_lib0clear(&___nl__1);
#line 203
c_rt_lib0clear(&___nl__2);
#line 203
c_rt_lib0clear(&___nl__5);
#line 203
c_rt_lib0clear(&___nl__6);
#line 203
c_rt_lib0clear(&___nl__7);
#line 203
c_rt_lib0clear(&___nl__8);
#line 203
c_rt_lib0clear(&___nl__9);
#line 203
c_rt_lib0clear(&___nl__10);
#line 203
c_rt_lib0clear(&___nl__11);
#line 203
c_rt_lib0clear(&___nl__12);
#line 203
c_rt_lib0clear(&___nl__13);
#line 203
c_rt_lib0clear(&___nl__14);
#line 203
c_rt_lib0clear(&___nl__15);
#line 203
c_rt_lib0clear(&___nl__16);
#line 203
c_rt_lib0clear(&___nl__17);
#line 203
return ___nl__18;
#line 203
c_rt_lib0clear(&___nl__18);
#line 203
c_rt_lib0clear(&___nl__17);
#line 204
goto label_255;
#line 204
label_250:
#line 205
c_rt_lib0move(&___nl__17, tct0none());
#line 205
c_rt_lib0delete(hash0set_value(&___nl__7, ___nl__10, ___nl__17));
#line 205
c_rt_lib0clear(&___nl__17);
#line 206
goto label_255;
#line 206
label_255:
#line 206
c_rt_lib0clear(&___nl__16);
#line 207
goto label_258;
#line 207
label_258:
#line 207
c_rt_lib0clear(&___nl__15);
#line 207
c_rt_lib0clear(&___nl__14);
#line 208
goto label_283;
#line 208
label_262:
#line 209
c_rt_lib0move(&___nl__14, c_rt_lib0priv_is(___nl__11, ___get_global_const(809)));
#line 209
if(c_rt_lib0check_true_native(___nl__14)){ goto label_270;}
#line 211
c_rt_lib0move(&___nl__14, c_rt_lib0priv_is(___nl__11, ___get_global_const(808)));
#line 211
if(c_rt_lib0check_true_native(___nl__14)){ goto label_275;}
#line 211
c_rt_lib0move(&___nl__14,___get_global_const(91));
#line 211
c_rt_lib0move(&___nl__14, c_rt_lib0array_mk(2, ___nl__14, ___nl__11));
#line 211
nl_die_arg(___nl__14);
#line 209
label_270:
#line 209
c_rt_lib0move(&___nl__15, c_rt_lib0priv_as(___nl__11, ___get_global_const(809)));
#line 210
c_rt_lib0delete(hash0set_value(&___nl__7, ___nl__10, ___nl__15));
#line 210
c_rt_lib0clear(&___nl__15);
#line 211
goto label_280;
#line 211
label_275:
#line 212
c_rt_lib0move(&___nl__15, tct0none());
#line 212
c_rt_lib0delete(hash0set_value(&___nl__7, ___nl__10, ___nl__15));
#line 212
c_rt_lib0clear(&___nl__15);
#line 213
goto label_280;
#line 213
label_280:
#line 213
c_rt_lib0clear(&___nl__14);
#line 214
goto label_283;
#line 214
label_283:
#line 214
c_rt_lib0clear(&___nl__13);
#line 215
c_rt_lib0move(&___nl__12, c_rt_lib0next_iter(___nl__12));
#line 215
goto label_162;
#line 215
label_287:
#line 215
c_rt_lib0clear(&___nl__10);
#line 215
c_rt_lib0clear(&___nl__11);
#line 215
c_rt_lib0clear(&___nl__12);
#line 216
c_rt_lib0move(&___nl__12, c_rt_lib0init_iter(___nl__9));
#line 216
label_292:
#line 216
c_rt_lib0move(&___nl__10, c_rt_lib0is_end_hash(___nl__12));
#line 216
if(c_rt_lib0check_true_native(___nl__10)){ goto label_327;}
#line 216
c_rt_lib0move(&___nl__10, c_rt_lib0get_key_iter(___nl__12));
#line 216
c_rt_lib0move(&___nl__11, c_rt_lib0hash_get_value(___nl__9, ___nl__10));
#line 217
c_rt_lib0move(&___nl__13, hash0has_key(___nl__7, ___nl__10));
#line 217
c_rt_lib0move(&___nl__13, c_rt_lib0not(___nl__13));
#line 217
if(c_rt_lib0check_true_native(___nl__13)){ goto label_303;}
#line 217
c_rt_lib0clear(&___nl__13);
#line 217
goto label_324;
#line 217
goto label_303;
#line 217
label_303:
#line 217
c_rt_lib0clear(&___nl__13);
#line 218
c_rt_lib0move(&___nl__13, c_rt_lib0priv_is(___nl__11, ___get_global_const(809)));
#line 218
if(c_rt_lib0check_true_native(___nl__13)){ goto label_312;}
#line 220
c_rt_lib0move(&___nl__13, c_rt_lib0priv_is(___nl__11, ___get_global_const(808)));
#line 220
if(c_rt_lib0check_true_native(___nl__13)){ goto label_317;}
#line 220
c_rt_lib0move(&___nl__13,___get_global_const(91));
#line 220
c_rt_lib0move(&___nl__13, c_rt_lib0array_mk(2, ___nl__13, ___nl__11));
#line 220
nl_die_arg(___nl__13);
#line 218
label_312:
#line 218
c_rt_lib0move(&___nl__14, c_rt_lib0priv_as(___nl__11, ___get_global_const(809)));
#line 219
c_rt_lib0delete(hash0set_value(&___nl__7, ___nl__10, ___nl__14));
#line 219
c_rt_lib0clear(&___nl__14);
#line 220
goto label_322;
#line 220
label_317:
#line 221
c_rt_lib0move(&___nl__14, tct0none());
#line 221
c_rt_lib0delete(hash0set_value(&___nl__7, ___nl__10, ___nl__14));
#line 221
c_rt_lib0clear(&___nl__14);
#line 222
goto label_322;
#line 222
label_322:
#line 222
c_rt_lib0clear(&___nl__13);
#line 222
label_324:
#line 223
c_rt_lib0move(&___nl__12, c_rt_lib0next_iter(___nl__12));
#line 223
goto label_292;
#line 223
label_327:
#line 223
c_rt_lib0clear(&___nl__10);
#line 223
c_rt_lib0clear(&___nl__11);
#line 223
c_rt_lib0clear(&___nl__12);
#line 224
c_rt_lib0move(&___nl__10, tct0var(___nl__7));
#line 224
c_rt_lib0clear(&___nl__0);
#line 224
c_rt_lib0clear(&___nl__1);
#line 224
c_rt_lib0clear(&___nl__2);
#line 224
c_rt_lib0clear(&___nl__5);
#line 224
c_rt_lib0clear(&___nl__6);
#line 224
c_rt_lib0clear(&___nl__7);
#line 224
c_rt_lib0clear(&___nl__8);
#line 224
c_rt_lib0clear(&___nl__9);
#line 224
return ___nl__10;
#line 224
c_rt_lib0clear(&___nl__10);
#line 224
c_rt_lib0clear(&___nl__9);
#line 225
goto label_344;
#line 225
label_344:
#line 225
c_rt_lib0clear(&___nl__8);
#line 225
c_rt_lib0clear(&___nl__7);
#line 225
c_rt_lib0clear(&___nl__6);
#line 226
goto label_539;
#line 226
label_349:
#line 226
c_rt_lib0move(&___nl__6, c_rt_lib0priv_as(___nl__0, ___get_global_const(800)));
#line 227
c_rt_lib0copy(&___nl__7, ___nl__1);
#line 227
c_rt_lib0move(&___nl__7, c_rt_lib0priv_is(___nl__7, ___get_global_const(800)));
#line 227
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 227
if(c_rt_lib0check_true_native(___nl__7)){ goto label_465;}
#line 228
c_rt_lib0copy(&___nl__8, ___nl__1);
#line 228
c_rt_lib0move(&___nl__8, c_rt_lib0priv_as(___nl__8, ___get_global_const(800)));
#line 229
c_rt_lib0move(&___nl__9, c_rt_lib0get_false());
#line 230
c_rt_lib0move(&___nl__12, c_rt_lib0init_iter(___nl__6));
#line 230
label_359:
#line 230
c_rt_lib0move(&___nl__10, c_rt_lib0is_end_hash(___nl__12));
#line 230
if(c_rt_lib0check_true_native(___nl__10)){ goto label_376;}
#line 230
c_rt_lib0move(&___nl__10, c_rt_lib0get_key_iter(___nl__12));
#line 230
c_rt_lib0move(&___nl__11, c_rt_lib0hash_get_value(___nl__6, ___nl__10));
#line 231
c_rt_lib0move(&___nl__13, hash0has_key(___nl__8, ___nl__10));
#line 231
c_rt_lib0move(&___nl__13, c_rt_lib0not(___nl__13));
#line 231
c_rt_lib0move(&___nl__13, c_rt_lib0not(___nl__13));
#line 231
if(c_rt_lib0check_true_native(___nl__13)){ goto label_372;}
#line 231
c_rt_lib0move(&___nl__14, c_rt_lib0get_true());
#line 231
c_rt_lib0copy(&___nl__9, ___nl__14);
#line 231
c_rt_lib0clear(&___nl__14);
#line 231
goto label_372;
#line 231
label_372:
#line 231
c_rt_lib0clear(&___nl__13);
#line 232
c_rt_lib0move(&___nl__12, c_rt_lib0next_iter(___nl__12));
#line 232
goto label_359;
#line 232
label_376:
#line 232
c_rt_lib0clear(&___nl__10);
#line 232
c_rt_lib0clear(&___nl__11);
#line 232
c_rt_lib0clear(&___nl__12);
#line 233
c_rt_lib0move(&___nl__12, c_rt_lib0init_iter(___nl__8));
#line 233
label_381:
#line 233
c_rt_lib0move(&___nl__10, c_rt_lib0is_end_hash(___nl__12));
#line 233
if(c_rt_lib0check_true_native(___nl__10)){ goto label_398;}
#line 233
c_rt_lib0move(&___nl__10, c_rt_lib0get_key_iter(___nl__12));
#line 233
c_rt_lib0move(&___nl__11, c_rt_lib0hash_get_value(___nl__8, ___nl__10));
#line 234
c_rt_lib0move(&___nl__13, hash0has_key(___nl__6, ___nl__10));
#line 234
c_rt_lib0move(&___nl__13, c_rt_lib0not(___nl__13));
#line 234
c_rt_lib0move(&___nl__13, c_rt_lib0not(___nl__13));
#line 234
if(c_rt_lib0check_true_native(___nl__13)){ goto label_394;}
#line 234
c_rt_lib0move(&___nl__14, c_rt_lib0get_true());
#line 234
c_rt_lib0copy(&___nl__9, ___nl__14);
#line 234
c_rt_lib0clear(&___nl__14);
#line 234
goto label_394;
#line 234
label_394:
#line 234
c_rt_lib0clear(&___nl__13);
#line 235
c_rt_lib0move(&___nl__12, c_rt_lib0next_iter(___nl__12));
#line 235
goto label_381;
#line 235
label_398:
#line 235
c_rt_lib0clear(&___nl__10);
#line 235
c_rt_lib0clear(&___nl__11);
#line 235
c_rt_lib0clear(&___nl__12);
#line 236
c_rt_lib0copy(&___nl__10, ___nl__9);
#line 236
c_rt_lib0move(&___nl__10, c_rt_lib0not(___nl__10));
#line 236
if(c_rt_lib0check_true_native(___nl__10)){ goto label_426;}
#line 237
c_rt_lib0move(&___nl__11, ptd_system0rec_to_hash(___nl__0, ___nl__2, ___ref___3, ___ref___4));
#line 238
c_rt_lib0move(&___nl__12, ptd_system0rec_to_hash(___nl__1, ___nl__2, ___ref___3, ___ref___4));
#line 239
c_rt_lib0move(&___nl__14, ptd_system_priv0cross_type(___nl__11, ___nl__12, ___nl__2, ___ref___3, ___ref___4));
#line 239
c_rt_lib0move(&___nl__13, tct0hash(___nl__14));
#line 239
c_rt_lib0clear(&___nl__14);
#line 239
c_rt_lib0clear(&___nl__0);
#line 239
c_rt_lib0clear(&___nl__1);
#line 239
c_rt_lib0clear(&___nl__2);
#line 239
c_rt_lib0clear(&___nl__5);
#line 239
c_rt_lib0clear(&___nl__6);
#line 239
c_rt_lib0clear(&___nl__7);
#line 239
c_rt_lib0clear(&___nl__8);
#line 239
c_rt_lib0clear(&___nl__9);
#line 239
c_rt_lib0clear(&___nl__10);
#line 239
c_rt_lib0clear(&___nl__11);
#line 239
c_rt_lib0clear(&___nl__12);
#line 239
return ___nl__13;
#line 239
c_rt_lib0clear(&___nl__13);
#line 239
c_rt_lib0clear(&___nl__11);
#line 239
c_rt_lib0clear(&___nl__12);
#line 240
goto label_460;
#line 240
label_426:
#line 241
c_rt_lib0move(&___nl__11, c_rt_lib0hash_mk(0));
#line 242
c_rt_lib0move(&___nl__14, c_rt_lib0init_iter(___nl__6));
#line 242
label_429:
#line 242
c_rt_lib0move(&___nl__12, c_rt_lib0is_end_hash(___nl__14));
#line 242
if(c_rt_lib0check_true_native(___nl__12)){ goto label_441;}
#line 242
c_rt_lib0move(&___nl__12, c_rt_lib0get_key_iter(___nl__14));
#line 242
c_rt_lib0move(&___nl__13, c_rt_lib0hash_get_value(___nl__6, ___nl__12));
#line 243
c_rt_lib0move(&___nl__16, hash0get_value(___nl__8, ___nl__12));
#line 243
c_rt_lib0move(&___nl__15, ptd_system_priv0cross_type(___nl__13, ___nl__16, ___nl__2, ___ref___3, ___ref___4));
#line 243
c_rt_lib0clear(&___nl__16);
#line 243
c_rt_lib0delete(hash0set_value(&___nl__11, ___nl__12, ___nl__15));
#line 243
c_rt_lib0clear(&___nl__15);
#line 245
c_rt_lib0move(&___nl__14, c_rt_lib0next_iter(___nl__14));
#line 245
goto label_429;
#line 245
label_441:
#line 245
c_rt_lib0clear(&___nl__12);
#line 245
c_rt_lib0clear(&___nl__13);
#line 245
c_rt_lib0clear(&___nl__14);
#line 246
c_rt_lib0move(&___nl__12, tct0rec(___nl__11));
#line 246
c_rt_lib0clear(&___nl__0);
#line 246
c_rt_lib0clear(&___nl__1);
#line 246
c_rt_lib0clear(&___nl__2);
#line 246
c_rt_lib0clear(&___nl__5);
#line 246
c_rt_lib0clear(&___nl__6);
#line 246
c_rt_lib0clear(&___nl__7);
#line 246
c_rt_lib0clear(&___nl__8);
#line 246
c_rt_lib0clear(&___nl__9);
#line 246
c_rt_lib0clear(&___nl__10);
#line 246
c_rt_lib0clear(&___nl__11);
#line 246
return ___nl__12;
#line 246
c_rt_lib0clear(&___nl__12);
#line 246
c_rt_lib0clear(&___nl__11);
#line 247
goto label_460;
#line 247
label_460:
#line 247
c_rt_lib0clear(&___nl__10);
#line 247
c_rt_lib0clear(&___nl__8);
#line 247
c_rt_lib0clear(&___nl__9);
#line 248
goto label_465;
#line 248
label_465:
#line 248
c_rt_lib0clear(&___nl__7);
#line 249
c_rt_lib0copy(&___nl__7, ___nl__1);
#line 249
c_rt_lib0move(&___nl__7, c_rt_lib0priv_is(___nl__7, ___get_global_const(799)));
#line 249
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 249
if(c_rt_lib0check_true_native(___nl__7)){ goto label_489;}
#line 250
c_rt_lib0move(&___nl__8, ptd_system0rec_to_hash(___nl__0, ___nl__2, ___ref___3, ___ref___4));
#line 251
c_rt_lib0copy(&___nl__11, ___nl__1);
#line 251
c_rt_lib0move(&___nl__11, c_rt_lib0priv_as(___nl__11, ___get_global_const(799)));
#line 251
c_rt_lib0move(&___nl__10, ptd_system0cross_type(___nl__11, ___nl__8, ___ref___3, ___ref___4));
#line 251
c_rt_lib0clear(&___nl__11);
#line 251
c_rt_lib0move(&___nl__9, tct0hash(___nl__10));
#line 251
c_rt_lib0clear(&___nl__10);
#line 251
c_rt_lib0clear(&___nl__0);
#line 251
c_rt_lib0clear(&___nl__1);
#line 251
c_rt_lib0clear(&___nl__2);
#line 251
c_rt_lib0clear(&___nl__5);
#line 251
c_rt_lib0clear(&___nl__6);
#line 251
c_rt_lib0clear(&___nl__7);
#line 251
c_rt_lib0clear(&___nl__8);
#line 251
return ___nl__9;
#line 251
c_rt_lib0clear(&___nl__9);
#line 251
c_rt_lib0clear(&___nl__8);
#line 252
goto label_489;
#line 252
label_489:
#line 252
c_rt_lib0clear(&___nl__7);
#line 252
c_rt_lib0clear(&___nl__6);
#line 253
goto label_539;
#line 253
label_493:
#line 253
c_rt_lib0move(&___nl__6, c_rt_lib0priv_as(___nl__0, ___get_global_const(799)));
#line 254
c_rt_lib0copy(&___nl__7, ___nl__1);
#line 254
c_rt_lib0move(&___nl__7, c_rt_lib0priv_is(___nl__7, ___get_global_const(799)));
#line 254
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 254
if(c_rt_lib0check_true_native(___nl__7)){ goto label_514;}
#line 255
c_rt_lib0copy(&___nl__10, ___nl__1);
#line 255
c_rt_lib0move(&___nl__10, c_rt_lib0priv_as(___nl__10, ___get_global_const(799)));
#line 255
c_rt_lib0move(&___nl__9, ptd_system_priv0cross_type(___nl__6, ___nl__10, ___nl__2, ___ref___3, ___ref___4));
#line 255
c_rt_lib0clear(&___nl__10);
#line 255
c_rt_lib0move(&___nl__8, tct0hash(___nl__9));
#line 255
c_rt_lib0clear(&___nl__9);
#line 255
c_rt_lib0clear(&___nl__0);
#line 255
c_rt_lib0clear(&___nl__1);
#line 255
c_rt_lib0clear(&___nl__2);
#line 255
c_rt_lib0clear(&___nl__5);
#line 255
c_rt_lib0clear(&___nl__6);
#line 255
c_rt_lib0clear(&___nl__7);
#line 255
return ___nl__8;
#line 255
c_rt_lib0clear(&___nl__8);
#line 256
goto label_514;
#line 256
label_514:
#line 256
c_rt_lib0clear(&___nl__7);
#line 257
c_rt_lib0copy(&___nl__7, ___nl__1);
#line 257
c_rt_lib0move(&___nl__7, c_rt_lib0priv_is(___nl__7, ___get_global_const(800)));
#line 257
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 257
if(c_rt_lib0check_true_native(___nl__7)){ goto label_535;}
#line 258
c_rt_lib0move(&___nl__8, ptd_system0rec_to_hash(___nl__1, ___nl__2, ___ref___3, ___ref___4));
#line 259
c_rt_lib0move(&___nl__10, ptd_system0cross_type(___nl__6, ___nl__8, ___ref___3, ___ref___4));
#line 259
c_rt_lib0move(&___nl__9, tct0hash(___nl__10));
#line 259
c_rt_lib0clear(&___nl__10);
#line 259
c_rt_lib0clear(&___nl__0);
#line 259
c_rt_lib0clear(&___nl__1);
#line 259
c_rt_lib0clear(&___nl__2);
#line 259
c_rt_lib0clear(&___nl__5);
#line 259
c_rt_lib0clear(&___nl__6);
#line 259
c_rt_lib0clear(&___nl__7);
#line 259
c_rt_lib0clear(&___nl__8);
#line 259
return ___nl__9;
#line 259
c_rt_lib0clear(&___nl__9);
#line 259
c_rt_lib0clear(&___nl__8);
#line 260
goto label_535;
#line 260
label_535:
#line 260
c_rt_lib0clear(&___nl__7);
#line 260
c_rt_lib0clear(&___nl__6);
#line 261
goto label_539;
#line 261
label_539:
#line 261
c_rt_lib0clear(&___nl__5);
#line 262
c_rt_lib0move(&___nl__5, c_rt_lib0ov_mk_none(___get_global_const(797)));
#line 262
c_rt_lib0clear(&___nl__0);
#line 262
c_rt_lib0clear(&___nl__1);
#line 262
c_rt_lib0clear(&___nl__2);
#line 262
return ___nl__5;
#line 262
c_rt_lib0clear(&___nl__5);
#line 262
c_rt_lib0clear(&___nl__0);
#line 262
c_rt_lib0clear(&___nl__1);
#line 262
c_rt_lib0clear(&___nl__2);
#line 262
return NULL;
}

ImmT ptd_system0rec_to_hash0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 4, "ptd_system0rec_to_hash");
return ptd_system0rec_to_hash(_tab[0], _tab[1], &_tab[2], &_tab[3]);}
ImmT ptd_system0rec_to_hash(ImmT ___nl__0,ImmT ___nl__1,ImmT * ___ref___2,ImmT * ___ref___3) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
ImmT ___nl__9 = NULL;
#line 267
c_rt_lib0move(&___nl__4, tct0empty());
#line 268
c_rt_lib0copy(&___nl__5, ___nl__0);
#line 268
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__5, ___get_global_const(800)));
#line 268
c_rt_lib0move(&___nl__8, c_rt_lib0init_iter(___nl__5));
#line 268
label_4:
#line 268
c_rt_lib0move(&___nl__6, c_rt_lib0is_end_hash(___nl__8));
#line 268
if(c_rt_lib0check_true_native(___nl__6)){ goto label_14;}
#line 268
c_rt_lib0move(&___nl__6, c_rt_lib0get_key_iter(___nl__8));
#line 268
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value(___nl__5, ___nl__6));
#line 269
c_rt_lib0move(&___nl__9, ptd_system_priv0cross_type(___nl__7, ___nl__4, ___nl__1, ___ref___2, ___ref___3));
#line 269
c_rt_lib0copy(&___nl__4, ___nl__9);
#line 269
c_rt_lib0clear(&___nl__9);
#line 270
c_rt_lib0move(&___nl__8, c_rt_lib0next_iter(___nl__8));
#line 270
goto label_4;
#line 270
label_14:
#line 270
c_rt_lib0clear(&___nl__5);
#line 270
c_rt_lib0clear(&___nl__6);
#line 270
c_rt_lib0clear(&___nl__7);
#line 270
c_rt_lib0clear(&___nl__8);
#line 271
c_rt_lib0clear(&___nl__0);
#line 271
c_rt_lib0clear(&___nl__1);
#line 271
return ___nl__4;
#line 271
c_rt_lib0clear(&___nl__4);
#line 271
c_rt_lib0clear(&___nl__0);
#line 271
c_rt_lib0clear(&___nl__1);
#line 271
return NULL;
}

ImmT ptd_system0cast_type0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 4, "ptd_system0cast_type");
return ptd_system0cast_type(_tab[0], _tab[1], &_tab[2], &_tab[3]);}
ImmT ptd_system0cast_type(ImmT ___nl__0,ImmT ___nl__1,ImmT * ___ref___2,ImmT * ___ref___3) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
ImmT ___nl__9 = NULL;
#line 276
c_rt_lib0move(&___nl__5,___get_global_const(1));
#line 276
c_rt_lib0move(&___nl__6, c_rt_lib0hash_mk(0));
#line 276
c_rt_lib0move(&___nl__7, c_rt_lib0hash_mk(0));
#line 276
c_rt_lib0move(&___nl__8, c_rt_lib0get_true());
#line 276
c_rt_lib0move(&___nl__9, c_rt_lib0get_true());
#line 276
c_rt_lib0move(&___nl__4, c_rt_lib0hash_mk(5, ___get_global_const(1081), ___nl__5, ___get_global_const(203), ___nl__6, ___get_global_const(278), ___nl__7, ___get_global_const(1082), ___nl__8, ___get_global_const(1083), ___nl__9));
#line 276
c_rt_lib0clear(&___nl__5);
#line 276
c_rt_lib0clear(&___nl__6);
#line 276
c_rt_lib0clear(&___nl__7);
#line 276
c_rt_lib0clear(&___nl__8);
#line 276
c_rt_lib0clear(&___nl__9);
#line 277
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(63)));
#line 277
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(43)));
#line 277
c_rt_lib0move(&___nl__5, ptd_system_priv0check_assignment_info(___nl__0, ___nl__6, ___nl__4, ___nl__7, ___ref___2, ___ref___3));
#line 277
c_rt_lib0clear(&___nl__7);
#line 277
c_rt_lib0clear(&___nl__6);
#line 277
c_rt_lib0clear(&___nl__0);
#line 277
c_rt_lib0clear(&___nl__1);
#line 277
c_rt_lib0clear(&___nl__4);
#line 277
return ___nl__5;
#line 277
c_rt_lib0clear(&___nl__5);
#line 277
c_rt_lib0clear(&___nl__4);
#line 277
c_rt_lib0clear(&___nl__0);
#line 277
c_rt_lib0clear(&___nl__1);
#line 277
return NULL;
}

ImmT ptd_system0check_assignment0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 4, "ptd_system0check_assignment");
return ptd_system0check_assignment(_tab[0], _tab[1], &_tab[2], &_tab[3]);}
ImmT ptd_system0check_assignment(ImmT ___nl__0,ImmT ___nl__1,ImmT * ___ref___2,ImmT * ___ref___3) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
ImmT ___nl__9 = NULL;
#line 282
c_rt_lib0move(&___nl__5,___get_global_const(1));
#line 282
c_rt_lib0move(&___nl__6, c_rt_lib0hash_mk(0));
#line 282
c_rt_lib0move(&___nl__7, c_rt_lib0hash_mk(0));
#line 282
c_rt_lib0move(&___nl__8, c_rt_lib0get_true());
#line 282
c_rt_lib0move(&___nl__9, c_rt_lib0get_false());
#line 282
c_rt_lib0move(&___nl__4, c_rt_lib0hash_mk(5, ___get_global_const(1081), ___nl__5, ___get_global_const(203), ___nl__6, ___get_global_const(278), ___nl__7, ___get_global_const(1082), ___nl__8, ___get_global_const(1083), ___nl__9));
#line 282
c_rt_lib0clear(&___nl__5);
#line 282
c_rt_lib0clear(&___nl__6);
#line 282
c_rt_lib0clear(&___nl__7);
#line 282
c_rt_lib0clear(&___nl__8);
#line 282
c_rt_lib0clear(&___nl__9);
#line 283
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(63)));
#line 283
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(43)));
#line 283
c_rt_lib0move(&___nl__5, ptd_system_priv0check_assignment_info(___nl__0, ___nl__6, ___nl__4, ___nl__7, ___ref___2, ___ref___3));
#line 283
c_rt_lib0clear(&___nl__7);
#line 283
c_rt_lib0clear(&___nl__6);
#line 283
c_rt_lib0clear(&___nl__0);
#line 283
c_rt_lib0clear(&___nl__1);
#line 283
c_rt_lib0clear(&___nl__4);
#line 283
return ___nl__5;
#line 283
c_rt_lib0clear(&___nl__5);
#line 283
c_rt_lib0clear(&___nl__4);
#line 283
c_rt_lib0clear(&___nl__0);
#line 283
c_rt_lib0clear(&___nl__1);
#line 283
return NULL;
}

ImmT ptd_system_priv0mk_err(ImmT ___nl__0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
#line 287
c_rt_lib0move(&___nl__3, c_rt_lib0array_mk(0));
#line 287
c_rt_lib0move(&___nl__2, c_rt_lib0hash_mk(3, ___get_global_const(278), ___nl__0, ___get_global_const(203), ___nl__1, ___get_global_const(689), ___nl__3));
#line 287
c_rt_lib0clear(&___nl__3);
#line 287
c_rt_lib0move(&___nl__2, c_rt_lib0ov_mk_arg(___get_global_const(47), ___nl__2));
#line 287
c_rt_lib0clear(&___nl__0);
#line 287
c_rt_lib0clear(&___nl__1);
#line 287
return ___nl__2;
#line 287
c_rt_lib0clear(&___nl__2);
#line 287
c_rt_lib0clear(&___nl__0);
#line 287
c_rt_lib0clear(&___nl__1);
#line 287
return NULL;
}

ImmT ptd_system_priv0check_assignment_info(ImmT ___nl__0,ImmT ___nl__1,ImmT ___nl__2,ImmT ___nl__3,ImmT * ___ref___4,ImmT * ___ref___5) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
c_rt_lib0arg_val(___nl__2);
c_rt_lib0arg_val(___nl__3);
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
#line 292
c_rt_lib0copy(&___nl__6, ___nl__1);
#line 292
c_rt_lib0move(&___nl__6, c_rt_lib0priv_is(___nl__6, ___get_global_const(805)));
#line 292
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 292
if(c_rt_lib0check_true_native(___nl__6)){ goto label_13;}
#line 292
c_rt_lib0move(&___nl__7, c_rt_lib0ov_mk_none(___get_global_const(48)));
#line 292
c_rt_lib0clear(&___nl__0);
#line 292
c_rt_lib0clear(&___nl__1);
#line 292
c_rt_lib0clear(&___nl__2);
#line 292
c_rt_lib0clear(&___nl__3);
#line 292
c_rt_lib0clear(&___nl__6);
#line 292
return ___nl__7;
#line 292
c_rt_lib0clear(&___nl__7);
#line 292
goto label_13;
#line 292
label_13:
#line 292
c_rt_lib0clear(&___nl__6);
#line 293
c_rt_lib0copy(&___nl__6, ___nl__1);
#line 293
c_rt_lib0move(&___nl__6, c_rt_lib0priv_is(___nl__6, ___get_global_const(802)));
#line 293
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 293
if(c_rt_lib0check_true_native(___nl__6)){ goto label_28;}
#line 293
c_rt_lib0move(&___nl__7, ptd_system_priv0mk_err(___nl__0, ___nl__1));
#line 293
c_rt_lib0clear(&___nl__0);
#line 293
c_rt_lib0clear(&___nl__1);
#line 293
c_rt_lib0clear(&___nl__2);
#line 293
c_rt_lib0clear(&___nl__3);
#line 293
c_rt_lib0clear(&___nl__6);
#line 293
return ___nl__7;
#line 293
c_rt_lib0clear(&___nl__7);
#line 293
goto label_28;
#line 293
label_28:
#line 293
c_rt_lib0clear(&___nl__6);
#line 294
c_rt_lib0copy(&___nl__6, ___nl__0);
#line 294
c_rt_lib0move(&___nl__6, c_rt_lib0priv_is(___nl__6, ___get_global_const(797)));
#line 294
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 294
if(c_rt_lib0check_true_native(___nl__6)){ goto label_59;}
#line 296
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(1082)));
#line 296
c_rt_lib0move(&___nl__8, c_rt_lib0not(___nl__7));
#line 296
if(c_rt_lib0check_true_native(___nl__8)){ goto label_38;}
#line 296
c_rt_lib0move(&___nl__7, ptd_system0is_known(___nl__3));
#line 296
label_38:
#line 296
c_rt_lib0clear(&___nl__8);
#line 296
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 296
if(c_rt_lib0check_true_native(___nl__7)){ goto label_48;}
#line 295
c_rt_lib0move(&___nl__8, c_rt_lib0ov_mk_none(___get_global_const(152)));
#line 295
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(203)));
#line 295
c_rt_lib0delete(ptd_system_priv0walk_on_type(___nl__1, ___nl__8, ___nl__9, ___ref___4, ___ref___5));
#line 295
c_rt_lib0clear(&___nl__9);
#line 295
c_rt_lib0clear(&___nl__8);
#line 295
goto label_48;
#line 295
label_48:
#line 295
c_rt_lib0clear(&___nl__7);
#line 297
c_rt_lib0move(&___nl__7, c_rt_lib0ov_mk_none(___get_global_const(48)));
#line 297
c_rt_lib0clear(&___nl__0);
#line 297
c_rt_lib0clear(&___nl__1);
#line 297
c_rt_lib0clear(&___nl__2);
#line 297
c_rt_lib0clear(&___nl__3);
#line 297
c_rt_lib0clear(&___nl__6);
#line 297
return ___nl__7;
#line 297
c_rt_lib0clear(&___nl__7);
#line 298
goto label_59;
#line 298
label_59:
#line 298
c_rt_lib0clear(&___nl__6);
#line 299
c_rt_lib0move(&___nl__7, c_rt_lib0get_false());
#line 299
c_rt_lib0move(&___nl__8, ptd_system0is_known(___nl__3));
#line 299
c_rt_lib0move(&___nl__6, ptd_system_priv0is_cycle_ref(&___nl__0, &___nl__1, &___nl__2, ___nl__7, ___nl__8, ___ref___4, ___ref___5));
#line 299
c_rt_lib0clear(&___nl__8);
#line 299
c_rt_lib0clear(&___nl__7);
#line 299
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 299
if(c_rt_lib0check_true_native(___nl__6)){ goto label_77;}
#line 300
c_rt_lib0move(&___nl__7, c_rt_lib0ov_mk_none(___get_global_const(48)));
#line 300
c_rt_lib0clear(&___nl__0);
#line 300
c_rt_lib0clear(&___nl__1);
#line 300
c_rt_lib0clear(&___nl__2);
#line 300
c_rt_lib0clear(&___nl__3);
#line 300
c_rt_lib0clear(&___nl__6);
#line 300
return ___nl__7;
#line 300
c_rt_lib0clear(&___nl__7);
#line 301
goto label_77;
#line 301
label_77:
#line 301
c_rt_lib0clear(&___nl__6);
#line 302
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(1081)));
#line 302
c_rt_lib0move(&___nl__7,___get_global_const(1085));
#line 302
c_rt_lib0move(&___nl__6, c_rt_lib0num_eq(___nl__6, ___nl__7));
#line 302
c_rt_lib0clear(&___nl__7);
#line 302
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 302
if(c_rt_lib0check_true_native(___nl__6)){ goto label_97;}
#line 303
c_rt_lib0move(&___nl__7,___get_global_const(1087));
#line 303
c_rt_lib0delete(ptd_system_priv0add_error(___ref___5, ___nl__7));
#line 303
c_rt_lib0clear(&___nl__7);
#line 304
c_rt_lib0move(&___nl__7, ptd_system_priv0mk_err(___nl__0, ___nl__1));
#line 304
c_rt_lib0clear(&___nl__0);
#line 304
c_rt_lib0clear(&___nl__1);
#line 304
c_rt_lib0clear(&___nl__2);
#line 304
c_rt_lib0clear(&___nl__3);
#line 304
c_rt_lib0clear(&___nl__6);
#line 304
return ___nl__7;
#line 304
c_rt_lib0clear(&___nl__7);
#line 305
goto label_97;
#line 305
label_97:
#line 305
c_rt_lib0clear(&___nl__6);
#line 306
c_rt_lib0move(&___nl__6, c_rt_lib0priv_is(___nl__0, ___get_global_const(797)));
#line 306
if(c_rt_lib0check_true_native(___nl__6)){ goto label_120;}
#line 308
c_rt_lib0move(&___nl__6, c_rt_lib0priv_is(___nl__0, ___get_global_const(798)));
#line 308
if(c_rt_lib0check_true_native(___nl__6)){ goto label_130;}
#line 316
c_rt_lib0move(&___nl__6, c_rt_lib0priv_is(___nl__0, ___get_global_const(799)));
#line 316
if(c_rt_lib0check_true_native(___nl__6)){ goto label_204;}
#line 334
c_rt_lib0move(&___nl__6, c_rt_lib0priv_is(___nl__0, ___get_global_const(800)));
#line 334
if(c_rt_lib0check_true_native(___nl__6)){ goto label_360;}
#line 359
c_rt_lib0move(&___nl__6, c_rt_lib0priv_is(___nl__0, ___get_global_const(801)));
#line 359
if(c_rt_lib0check_true_native(___nl__6)){ goto label_574;}
#line 361
c_rt_lib0move(&___nl__6, c_rt_lib0priv_is(___nl__0, ___get_global_const(802)));
#line 361
if(c_rt_lib0check_true_native(___nl__6)){ goto label_581;}
#line 363
c_rt_lib0move(&___nl__6, c_rt_lib0priv_is(___nl__0, ___get_global_const(803)));
#line 363
if(c_rt_lib0check_true_native(___nl__6)){ goto label_586;}
#line 366
c_rt_lib0move(&___nl__6, c_rt_lib0priv_is(___nl__0, ___get_global_const(804)));
#line 366
if(c_rt_lib0check_true_native(___nl__6)){ goto label_612;}
#line 391
c_rt_lib0move(&___nl__6, c_rt_lib0priv_is(___nl__0, ___get_global_const(805)));
#line 391
if(c_rt_lib0check_true_native(___nl__6)){ goto label_813;}
#line 391
c_rt_lib0move(&___nl__6,___get_global_const(91));
#line 391
c_rt_lib0move(&___nl__6, c_rt_lib0array_mk(2, ___nl__6, ___nl__0));
#line 391
nl_die_arg(___nl__6);
#line 306
label_120:
#line 307
c_rt_lib0move(&___nl__7, c_rt_lib0ov_mk_none(___get_global_const(48)));
#line 307
c_rt_lib0clear(&___nl__0);
#line 307
c_rt_lib0clear(&___nl__1);
#line 307
c_rt_lib0clear(&___nl__2);
#line 307
c_rt_lib0clear(&___nl__3);
#line 307
c_rt_lib0clear(&___nl__6);
#line 307
return ___nl__7;
#line 307
c_rt_lib0clear(&___nl__7);
#line 308
goto label_818;
#line 308
label_130:
#line 308
c_rt_lib0move(&___nl__7, c_rt_lib0priv_as(___nl__0, ___get_global_const(798)));
#line 309
c_rt_lib0copy(&___nl__8, ___nl__1);
#line 309
c_rt_lib0move(&___nl__8, c_rt_lib0priv_is(___nl__8, ___get_global_const(798)));
#line 309
c_rt_lib0move(&___nl__8, c_rt_lib0not(___nl__8));
#line 309
c_rt_lib0move(&___nl__8, c_rt_lib0not(___nl__8));
#line 309
if(c_rt_lib0check_true_native(___nl__8)){ goto label_148;}
#line 309
c_rt_lib0move(&___nl__9, ptd_system_priv0mk_err(___nl__0, ___nl__1));
#line 309
c_rt_lib0clear(&___nl__0);
#line 309
c_rt_lib0clear(&___nl__1);
#line 309
c_rt_lib0clear(&___nl__2);
#line 309
c_rt_lib0clear(&___nl__3);
#line 309
c_rt_lib0clear(&___nl__6);
#line 309
c_rt_lib0clear(&___nl__7);
#line 309
c_rt_lib0clear(&___nl__8);
#line 309
return ___nl__9;
#line 309
c_rt_lib0clear(&___nl__9);
#line 309
goto label_148;
#line 309
label_148:
#line 309
c_rt_lib0clear(&___nl__8);
#line 310
c_rt_lib0copy(&___nl__9, ___nl__1);
#line 310
c_rt_lib0move(&___nl__9, c_rt_lib0priv_as(___nl__9, ___get_global_const(798)));
#line 310
c_rt_lib0move(&___nl__8, ptd_system_priv0check_assignment_info(___nl__7, ___nl__9, ___nl__2, ___nl__3, ___ref___4, ___ref___5));
#line 310
c_rt_lib0clear(&___nl__9);
#line 310
c_rt_lib0move(&___nl__9, c_rt_lib0priv_is(___nl__8, ___get_global_const(48)));
#line 310
if(c_rt_lib0check_true_native(___nl__9)){ goto label_161;}
#line 312
c_rt_lib0move(&___nl__9, c_rt_lib0priv_is(___nl__8, ___get_global_const(47)));
#line 312
if(c_rt_lib0check_true_native(___nl__9)){ goto label_174;}
#line 312
c_rt_lib0move(&___nl__9,___get_global_const(91));
#line 312
c_rt_lib0move(&___nl__9, c_rt_lib0array_mk(2, ___nl__9, ___nl__8));
#line 312
nl_die_arg(___nl__9);
#line 310
label_161:
#line 311
c_rt_lib0move(&___nl__10, c_rt_lib0ov_mk_none(___get_global_const(48)));
#line 311
c_rt_lib0clear(&___nl__0);
#line 311
c_rt_lib0clear(&___nl__1);
#line 311
c_rt_lib0clear(&___nl__2);
#line 311
c_rt_lib0clear(&___nl__3);
#line 311
c_rt_lib0clear(&___nl__6);
#line 311
c_rt_lib0clear(&___nl__7);
#line 311
c_rt_lib0clear(&___nl__8);
#line 311
c_rt_lib0clear(&___nl__9);
#line 311
return ___nl__10;
#line 311
c_rt_lib0clear(&___nl__10);
#line 312
goto label_199;
#line 312
label_174:
#line 312
c_rt_lib0move(&___nl__10, c_rt_lib0priv_as(___nl__8, ___get_global_const(47)));
#line 313
c_rt_lib0move(&___nl__11,___get_global_const(689));
#line 313
c_rt_lib0move(&___nl__11, c_rt_lib0get_ref_hash(___nl__10, ___nl__11));
#line 313
c_rt_lib0move(&___nl__12, c_rt_lib0ov_mk_none(___get_global_const(1020)));
#line 313
c_rt_lib0delete(array0push(&___nl__11, ___nl__12));
#line 313
c_rt_lib0clear(&___nl__12);
#line 313
c_rt_lib0move(&___nl__12,___get_global_const(689));
#line 313
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__10, ___nl__12, ___nl__11));
#line 313
c_rt_lib0clear(&___nl__12);
#line 313
c_rt_lib0clear(&___nl__11);
#line 314
c_rt_lib0move(&___nl__11, c_rt_lib0ov_mk_arg(___get_global_const(47), ___nl__10));
#line 314
c_rt_lib0clear(&___nl__0);
#line 314
c_rt_lib0clear(&___nl__1);
#line 314
c_rt_lib0clear(&___nl__2);
#line 314
c_rt_lib0clear(&___nl__3);
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
return ___nl__11;
#line 314
c_rt_lib0clear(&___nl__11);
#line 314
c_rt_lib0clear(&___nl__10);
#line 315
goto label_199;
#line 315
label_199:
#line 315
c_rt_lib0clear(&___nl__8);
#line 315
c_rt_lib0clear(&___nl__9);
#line 315
c_rt_lib0clear(&___nl__7);
#line 316
goto label_818;
#line 316
label_204:
#line 316
c_rt_lib0move(&___nl__7, c_rt_lib0priv_as(___nl__0, ___get_global_const(799)));
#line 317
c_rt_lib0copy(&___nl__8, ___nl__1);
#line 317
c_rt_lib0move(&___nl__8, c_rt_lib0priv_is(___nl__8, ___get_global_const(800)));
#line 317
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__8));
#line 317
if(c_rt_lib0check_true_native(___nl__9)){ goto label_213;}
#line 317
c_rt_lib0copy(&___nl__8, ___nl__3);
#line 317
c_rt_lib0move(&___nl__8, c_rt_lib0priv_is(___nl__8, ___get_global_const(1078)));
#line 317
c_rt_lib0move(&___nl__8, c_rt_lib0not(___nl__8));
#line 317
label_213:
#line 317
c_rt_lib0clear(&___nl__9);
#line 317
c_rt_lib0move(&___nl__8, c_rt_lib0not(___nl__8));
#line 317
if(c_rt_lib0check_true_native(___nl__8)){ goto label_286;}
#line 318
c_rt_lib0copy(&___nl__9, ___nl__1);
#line 318
c_rt_lib0move(&___nl__9, c_rt_lib0priv_as(___nl__9, ___get_global_const(800)));
#line 318
c_rt_lib0move(&___nl__12, c_rt_lib0init_iter(___nl__9));
#line 318
label_220:
#line 318
c_rt_lib0move(&___nl__10, c_rt_lib0is_end_hash(___nl__12));
#line 318
if(c_rt_lib0check_true_native(___nl__10)){ goto label_270;}
#line 318
c_rt_lib0move(&___nl__10, c_rt_lib0get_key_iter(___nl__12));
#line 318
c_rt_lib0move(&___nl__11, c_rt_lib0hash_get_value(___nl__9, ___nl__10));
#line 319
c_rt_lib0move(&___nl__13, ptd_system_priv0check_assignment_info(___nl__7, ___nl__11, ___nl__2, ___nl__3, ___ref___4, ___ref___5));
#line 319
c_rt_lib0move(&___nl__14, c_rt_lib0priv_is(___nl__13, ___get_global_const(48)));
#line 319
if(c_rt_lib0check_true_native(___nl__14)){ goto label_233;}
#line 320
c_rt_lib0move(&___nl__14, c_rt_lib0priv_is(___nl__13, ___get_global_const(47)));
#line 320
if(c_rt_lib0check_true_native(___nl__14)){ goto label_235;}
#line 320
c_rt_lib0move(&___nl__14,___get_global_const(91));
#line 320
c_rt_lib0move(&___nl__14, c_rt_lib0array_mk(2, ___nl__14, ___nl__13));
#line 320
nl_die_arg(___nl__14);
#line 319
label_233:
#line 320
goto label_265;
#line 320
label_235:
#line 320
c_rt_lib0move(&___nl__15, c_rt_lib0priv_as(___nl__13, ___get_global_const(47)));
#line 321
c_rt_lib0move(&___nl__16,___get_global_const(689));
#line 321
c_rt_lib0move(&___nl__16, c_rt_lib0get_ref_hash(___nl__15, ___nl__16));
#line 321
c_rt_lib0move(&___nl__17, c_rt_lib0ov_mk_arg(___get_global_const(1021), ___nl__10));
#line 321
c_rt_lib0delete(array0push(&___nl__16, ___nl__17));
#line 321
c_rt_lib0clear(&___nl__17);
#line 321
c_rt_lib0move(&___nl__17,___get_global_const(689));
#line 321
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__15, ___nl__17, ___nl__16));
#line 321
c_rt_lib0clear(&___nl__17);
#line 321
c_rt_lib0clear(&___nl__16);
#line 322
c_rt_lib0move(&___nl__16, c_rt_lib0ov_mk_arg(___get_global_const(47), ___nl__15));
#line 322
c_rt_lib0clear(&___nl__0);
#line 322
c_rt_lib0clear(&___nl__1);
#line 322
c_rt_lib0clear(&___nl__2);
#line 322
c_rt_lib0clear(&___nl__3);
#line 322
c_rt_lib0clear(&___nl__6);
#line 322
c_rt_lib0clear(&___nl__7);
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
#line 322
c_rt_lib0clear(&___nl__13);
#line 322
c_rt_lib0clear(&___nl__14);
#line 322
c_rt_lib0clear(&___nl__15);
#line 322
return ___nl__16;
#line 322
c_rt_lib0clear(&___nl__16);
#line 322
c_rt_lib0clear(&___nl__15);
#line 323
goto label_265;
#line 323
label_265:
#line 323
c_rt_lib0clear(&___nl__13);
#line 323
c_rt_lib0clear(&___nl__14);
#line 324
c_rt_lib0move(&___nl__12, c_rt_lib0next_iter(___nl__12));
#line 324
goto label_220;
#line 324
label_270:
#line 324
c_rt_lib0clear(&___nl__9);
#line 324
c_rt_lib0clear(&___nl__10);
#line 324
c_rt_lib0clear(&___nl__11);
#line 324
c_rt_lib0clear(&___nl__12);
#line 325
c_rt_lib0move(&___nl__9, c_rt_lib0ov_mk_none(___get_global_const(48)));
#line 325
c_rt_lib0clear(&___nl__0);
#line 325
c_rt_lib0clear(&___nl__1);
#line 325
c_rt_lib0clear(&___nl__2);
#line 325
c_rt_lib0clear(&___nl__3);
#line 325
c_rt_lib0clear(&___nl__6);
#line 325
c_rt_lib0clear(&___nl__7);
#line 325
c_rt_lib0clear(&___nl__8);
#line 325
return ___nl__9;
#line 325
c_rt_lib0clear(&___nl__9);
#line 326
goto label_286;
#line 326
label_286:
#line 326
c_rt_lib0clear(&___nl__8);
#line 327
c_rt_lib0copy(&___nl__8, ___nl__1);
#line 327
c_rt_lib0move(&___nl__8, c_rt_lib0priv_is(___nl__8, ___get_global_const(799)));
#line 327
c_rt_lib0move(&___nl__8, c_rt_lib0not(___nl__8));
#line 327
c_rt_lib0move(&___nl__8, c_rt_lib0not(___nl__8));
#line 327
if(c_rt_lib0check_true_native(___nl__8)){ goto label_304;}
#line 327
c_rt_lib0move(&___nl__9, ptd_system_priv0mk_err(___nl__0, ___nl__1));
#line 327
c_rt_lib0clear(&___nl__0);
#line 327
c_rt_lib0clear(&___nl__1);
#line 327
c_rt_lib0clear(&___nl__2);
#line 327
c_rt_lib0clear(&___nl__3);
#line 327
c_rt_lib0clear(&___nl__6);
#line 327
c_rt_lib0clear(&___nl__7);
#line 327
c_rt_lib0clear(&___nl__8);
#line 327
return ___nl__9;
#line 327
c_rt_lib0clear(&___nl__9);
#line 327
goto label_304;
#line 327
label_304:
#line 327
c_rt_lib0clear(&___nl__8);
#line 328
c_rt_lib0copy(&___nl__9, ___nl__1);
#line 328
c_rt_lib0move(&___nl__9, c_rt_lib0priv_as(___nl__9, ___get_global_const(799)));
#line 328
c_rt_lib0move(&___nl__8, ptd_system_priv0check_assignment_info(___nl__7, ___nl__9, ___nl__2, ___nl__3, ___ref___4, ___ref___5));
#line 328
c_rt_lib0clear(&___nl__9);
#line 328
c_rt_lib0move(&___nl__9, c_rt_lib0priv_is(___nl__8, ___get_global_const(48)));
#line 328
if(c_rt_lib0check_true_native(___nl__9)){ goto label_317;}
#line 330
c_rt_lib0move(&___nl__9, c_rt_lib0priv_is(___nl__8, ___get_global_const(47)));
#line 330
if(c_rt_lib0check_true_native(___nl__9)){ goto label_330;}
#line 330
c_rt_lib0move(&___nl__9,___get_global_const(91));
#line 330
c_rt_lib0move(&___nl__9, c_rt_lib0array_mk(2, ___nl__9, ___nl__8));
#line 330
nl_die_arg(___nl__9);
#line 328
label_317:
#line 329
c_rt_lib0move(&___nl__10, c_rt_lib0ov_mk_none(___get_global_const(48)));
#line 329
c_rt_lib0clear(&___nl__0);
#line 329
c_rt_lib0clear(&___nl__1);
#line 329
c_rt_lib0clear(&___nl__2);
#line 329
c_rt_lib0clear(&___nl__3);
#line 329
c_rt_lib0clear(&___nl__6);
#line 329
c_rt_lib0clear(&___nl__7);
#line 329
c_rt_lib0clear(&___nl__8);
#line 329
c_rt_lib0clear(&___nl__9);
#line 329
return ___nl__10;
#line 329
c_rt_lib0clear(&___nl__10);
#line 330
goto label_355;
#line 330
label_330:
#line 330
c_rt_lib0move(&___nl__10, c_rt_lib0priv_as(___nl__8, ___get_global_const(47)));
#line 331
c_rt_lib0move(&___nl__11,___get_global_const(689));
#line 331
c_rt_lib0move(&___nl__11, c_rt_lib0get_ref_hash(___nl__10, ___nl__11));
#line 331
c_rt_lib0move(&___nl__12, c_rt_lib0ov_mk_none(___get_global_const(1025)));
#line 331
c_rt_lib0delete(array0push(&___nl__11, ___nl__12));
#line 331
c_rt_lib0clear(&___nl__12);
#line 331
c_rt_lib0move(&___nl__12,___get_global_const(689));
#line 331
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__10, ___nl__12, ___nl__11));
#line 331
c_rt_lib0clear(&___nl__12);
#line 331
c_rt_lib0clear(&___nl__11);
#line 332
c_rt_lib0move(&___nl__11, c_rt_lib0ov_mk_arg(___get_global_const(47), ___nl__10));
#line 332
c_rt_lib0clear(&___nl__0);
#line 332
c_rt_lib0clear(&___nl__1);
#line 332
c_rt_lib0clear(&___nl__2);
#line 332
c_rt_lib0clear(&___nl__3);
#line 332
c_rt_lib0clear(&___nl__6);
#line 332
c_rt_lib0clear(&___nl__7);
#line 332
c_rt_lib0clear(&___nl__8);
#line 332
c_rt_lib0clear(&___nl__9);
#line 332
c_rt_lib0clear(&___nl__10);
#line 332
return ___nl__11;
#line 332
c_rt_lib0clear(&___nl__11);
#line 332
c_rt_lib0clear(&___nl__10);
#line 333
goto label_355;
#line 333
label_355:
#line 333
c_rt_lib0clear(&___nl__8);
#line 333
c_rt_lib0clear(&___nl__9);
#line 333
c_rt_lib0clear(&___nl__7);
#line 334
goto label_818;
#line 334
label_360:
#line 334
c_rt_lib0move(&___nl__7, c_rt_lib0priv_as(___nl__0, ___get_global_const(800)));
#line 335
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(1083)));
#line 335
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__8));
#line 335
if(c_rt_lib0check_true_native(___nl__9)){ goto label_367;}
#line 335
c_rt_lib0copy(&___nl__8, ___nl__1);
#line 335
c_rt_lib0move(&___nl__8, c_rt_lib0priv_is(___nl__8, ___get_global_const(799)));
#line 335
label_367:
#line 335
c_rt_lib0clear(&___nl__9);
#line 335
c_rt_lib0move(&___nl__8, c_rt_lib0not(___nl__8));
#line 335
if(c_rt_lib0check_true_native(___nl__8)){ goto label_441;}
#line 336
c_rt_lib0copy(&___nl__9, ___nl__1);
#line 336
c_rt_lib0move(&___nl__9, c_rt_lib0priv_as(___nl__9, ___get_global_const(799)));
#line 337
c_rt_lib0move(&___nl__12, c_rt_lib0init_iter(___nl__7));
#line 337
label_374:
#line 337
c_rt_lib0move(&___nl__10, c_rt_lib0is_end_hash(___nl__12));
#line 337
if(c_rt_lib0check_true_native(___nl__10)){ goto label_424;}
#line 337
c_rt_lib0move(&___nl__10, c_rt_lib0get_key_iter(___nl__12));
#line 337
c_rt_lib0move(&___nl__11, c_rt_lib0hash_get_value(___nl__7, ___nl__10));
#line 338
c_rt_lib0move(&___nl__13, ptd_system_priv0check_assignment_info(___nl__11, ___nl__9, ___nl__2, ___nl__3, ___ref___4, ___ref___5));
#line 338
c_rt_lib0move(&___nl__14, c_rt_lib0priv_is(___nl__13, ___get_global_const(48)));
#line 338
if(c_rt_lib0check_true_native(___nl__14)){ goto label_387;}
#line 339
c_rt_lib0move(&___nl__14, c_rt_lib0priv_is(___nl__13, ___get_global_const(47)));
#line 339
if(c_rt_lib0check_true_native(___nl__14)){ goto label_389;}
#line 339
c_rt_lib0move(&___nl__14,___get_global_const(91));
#line 339
c_rt_lib0move(&___nl__14, c_rt_lib0array_mk(2, ___nl__14, ___nl__13));
#line 339
nl_die_arg(___nl__14);
#line 338
label_387:
#line 339
goto label_419;
#line 339
label_389:
#line 339
c_rt_lib0move(&___nl__15, c_rt_lib0priv_as(___nl__13, ___get_global_const(47)));
#line 340
c_rt_lib0move(&___nl__16,___get_global_const(689));
#line 340
c_rt_lib0move(&___nl__16, c_rt_lib0get_ref_hash(___nl__15, ___nl__16));
#line 340
c_rt_lib0move(&___nl__17, c_rt_lib0ov_mk_arg(___get_global_const(1021), ___nl__10));
#line 340
c_rt_lib0delete(array0push(&___nl__16, ___nl__17));
#line 340
c_rt_lib0clear(&___nl__17);
#line 340
c_rt_lib0move(&___nl__17,___get_global_const(689));
#line 340
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__15, ___nl__17, ___nl__16));
#line 340
c_rt_lib0clear(&___nl__17);
#line 340
c_rt_lib0clear(&___nl__16);
#line 341
c_rt_lib0move(&___nl__16, c_rt_lib0ov_mk_arg(___get_global_const(47), ___nl__15));
#line 341
c_rt_lib0clear(&___nl__0);
#line 341
c_rt_lib0clear(&___nl__1);
#line 341
c_rt_lib0clear(&___nl__2);
#line 341
c_rt_lib0clear(&___nl__3);
#line 341
c_rt_lib0clear(&___nl__6);
#line 341
c_rt_lib0clear(&___nl__7);
#line 341
c_rt_lib0clear(&___nl__8);
#line 341
c_rt_lib0clear(&___nl__9);
#line 341
c_rt_lib0clear(&___nl__10);
#line 341
c_rt_lib0clear(&___nl__11);
#line 341
c_rt_lib0clear(&___nl__12);
#line 341
c_rt_lib0clear(&___nl__13);
#line 341
c_rt_lib0clear(&___nl__14);
#line 341
c_rt_lib0clear(&___nl__15);
#line 341
return ___nl__16;
#line 341
c_rt_lib0clear(&___nl__16);
#line 341
c_rt_lib0clear(&___nl__15);
#line 342
goto label_419;
#line 342
label_419:
#line 342
c_rt_lib0clear(&___nl__13);
#line 342
c_rt_lib0clear(&___nl__14);
#line 343
c_rt_lib0move(&___nl__12, c_rt_lib0next_iter(___nl__12));
#line 343
goto label_374;
#line 343
label_424:
#line 343
c_rt_lib0clear(&___nl__10);
#line 343
c_rt_lib0clear(&___nl__11);
#line 343
c_rt_lib0clear(&___nl__12);
#line 344
c_rt_lib0move(&___nl__10, c_rt_lib0ov_mk_none(___get_global_const(48)));
#line 344
c_rt_lib0clear(&___nl__0);
#line 344
c_rt_lib0clear(&___nl__1);
#line 344
c_rt_lib0clear(&___nl__2);
#line 344
c_rt_lib0clear(&___nl__3);
#line 344
c_rt_lib0clear(&___nl__6);
#line 344
c_rt_lib0clear(&___nl__7);
#line 344
c_rt_lib0clear(&___nl__8);
#line 344
c_rt_lib0clear(&___nl__9);
#line 344
return ___nl__10;
#line 344
c_rt_lib0clear(&___nl__10);
#line 344
c_rt_lib0clear(&___nl__9);
#line 345
goto label_441;
#line 345
label_441:
#line 345
c_rt_lib0clear(&___nl__8);
#line 346
c_rt_lib0copy(&___nl__8, ___nl__1);
#line 346
c_rt_lib0move(&___nl__8, c_rt_lib0priv_is(___nl__8, ___get_global_const(800)));
#line 346
c_rt_lib0move(&___nl__8, c_rt_lib0not(___nl__8));
#line 346
c_rt_lib0move(&___nl__8, c_rt_lib0not(___nl__8));
#line 346
if(c_rt_lib0check_true_native(___nl__8)){ goto label_459;}
#line 346
c_rt_lib0move(&___nl__9, ptd_system_priv0mk_err(___nl__0, ___nl__1));
#line 346
c_rt_lib0clear(&___nl__0);
#line 346
c_rt_lib0clear(&___nl__1);
#line 346
c_rt_lib0clear(&___nl__2);
#line 346
c_rt_lib0clear(&___nl__3);
#line 346
c_rt_lib0clear(&___nl__6);
#line 346
c_rt_lib0clear(&___nl__7);
#line 346
c_rt_lib0clear(&___nl__8);
#line 346
return ___nl__9;
#line 346
c_rt_lib0clear(&___nl__9);
#line 346
goto label_459;
#line 346
label_459:
#line 346
c_rt_lib0clear(&___nl__8);
#line 347
c_rt_lib0copy(&___nl__8, ___nl__1);
#line 347
c_rt_lib0move(&___nl__8, c_rt_lib0priv_as(___nl__8, ___get_global_const(800)));
#line 348
c_rt_lib0move(&___nl__9, hash0size(___nl__8));
#line 348
c_rt_lib0move(&___nl__10, hash0size(___nl__7));
#line 348
c_rt_lib0move(&___nl__9, c_rt_lib0num_ne(___nl__9, ___nl__10));
#line 348
c_rt_lib0clear(&___nl__10);
#line 348
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__9));
#line 348
if(c_rt_lib0check_true_native(___nl__9)){ goto label_481;}
#line 348
c_rt_lib0move(&___nl__10, ptd_system_priv0mk_err(___nl__0, ___nl__1));
#line 348
c_rt_lib0clear(&___nl__0);
#line 348
c_rt_lib0clear(&___nl__1);
#line 348
c_rt_lib0clear(&___nl__2);
#line 348
c_rt_lib0clear(&___nl__3);
#line 348
c_rt_lib0clear(&___nl__6);
#line 348
c_rt_lib0clear(&___nl__7);
#line 348
c_rt_lib0clear(&___nl__8);
#line 348
c_rt_lib0clear(&___nl__9);
#line 348
return ___nl__10;
#line 348
c_rt_lib0clear(&___nl__10);
#line 348
goto label_481;
#line 348
label_481:
#line 348
c_rt_lib0clear(&___nl__9);
#line 349
c_rt_lib0move(&___nl__11, c_rt_lib0init_iter(___nl__7));
#line 349
label_484:
#line 349
c_rt_lib0move(&___nl__9, c_rt_lib0is_end_hash(___nl__11));
#line 349
if(c_rt_lib0check_true_native(___nl__9)){ goto label_557;}
#line 349
c_rt_lib0move(&___nl__9, c_rt_lib0get_key_iter(___nl__11));
#line 349
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value(___nl__7, ___nl__9));
#line 350
c_rt_lib0move(&___nl__12, hash0has_key(___nl__8, ___nl__9));
#line 350
c_rt_lib0move(&___nl__12, c_rt_lib0not(___nl__12));
#line 350
c_rt_lib0move(&___nl__12, c_rt_lib0not(___nl__12));
#line 350
if(c_rt_lib0check_true_native(___nl__12)){ goto label_508;}
#line 350
c_rt_lib0move(&___nl__13, ptd_system_priv0mk_err(___nl__0, ___nl__1));
#line 350
c_rt_lib0clear(&___nl__0);
#line 350
c_rt_lib0clear(&___nl__1);
#line 350
c_rt_lib0clear(&___nl__2);
#line 350
c_rt_lib0clear(&___nl__3);
#line 350
c_rt_lib0clear(&___nl__6);
#line 350
c_rt_lib0clear(&___nl__7);
#line 350
c_rt_lib0clear(&___nl__8);
#line 350
c_rt_lib0clear(&___nl__9);
#line 350
c_rt_lib0clear(&___nl__10);
#line 350
c_rt_lib0clear(&___nl__11);
#line 350
c_rt_lib0clear(&___nl__12);
#line 350
return ___nl__13;
#line 350
c_rt_lib0clear(&___nl__13);
#line 350
goto label_508;
#line 350
label_508:
#line 350
c_rt_lib0clear(&___nl__12);
#line 351
c_rt_lib0move(&___nl__12, hash0get_value(___nl__8, ___nl__9));
#line 352
c_rt_lib0move(&___nl__13, ptd_system_priv0check_assignment_info(___nl__10, ___nl__12, ___nl__2, ___nl__3, ___ref___4, ___ref___5));
#line 352
c_rt_lib0move(&___nl__14, c_rt_lib0priv_is(___nl__13, ___get_global_const(48)));
#line 352
if(c_rt_lib0check_true_native(___nl__14)){ goto label_519;}
#line 353
c_rt_lib0move(&___nl__14, c_rt_lib0priv_is(___nl__13, ___get_global_const(47)));
#line 353
if(c_rt_lib0check_true_native(___nl__14)){ goto label_521;}
#line 353
c_rt_lib0move(&___nl__14,___get_global_const(91));
#line 353
c_rt_lib0move(&___nl__14, c_rt_lib0array_mk(2, ___nl__14, ___nl__13));
#line 353
nl_die_arg(___nl__14);
#line 352
label_519:
#line 353
goto label_551;
#line 353
label_521:
#line 353
c_rt_lib0move(&___nl__15, c_rt_lib0priv_as(___nl__13, ___get_global_const(47)));
#line 354
c_rt_lib0move(&___nl__16,___get_global_const(689));
#line 354
c_rt_lib0move(&___nl__16, c_rt_lib0get_ref_hash(___nl__15, ___nl__16));
#line 354
c_rt_lib0move(&___nl__17, c_rt_lib0ov_mk_arg(___get_global_const(1021), ___nl__9));
#line 354
c_rt_lib0delete(array0push(&___nl__16, ___nl__17));
#line 354
c_rt_lib0clear(&___nl__17);
#line 354
c_rt_lib0move(&___nl__17,___get_global_const(689));
#line 354
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__15, ___nl__17, ___nl__16));
#line 354
c_rt_lib0clear(&___nl__17);
#line 354
c_rt_lib0clear(&___nl__16);
#line 355
c_rt_lib0move(&___nl__16, c_rt_lib0ov_mk_arg(___get_global_const(47), ___nl__15));
#line 355
c_rt_lib0clear(&___nl__0);
#line 355
c_rt_lib0clear(&___nl__1);
#line 355
c_rt_lib0clear(&___nl__2);
#line 355
c_rt_lib0clear(&___nl__3);
#line 355
c_rt_lib0clear(&___nl__6);
#line 355
c_rt_lib0clear(&___nl__7);
#line 355
c_rt_lib0clear(&___nl__8);
#line 355
c_rt_lib0clear(&___nl__9);
#line 355
c_rt_lib0clear(&___nl__10);
#line 355
c_rt_lib0clear(&___nl__11);
#line 355
c_rt_lib0clear(&___nl__12);
#line 355
c_rt_lib0clear(&___nl__13);
#line 355
c_rt_lib0clear(&___nl__14);
#line 355
c_rt_lib0clear(&___nl__15);
#line 355
return ___nl__16;
#line 355
c_rt_lib0clear(&___nl__16);
#line 355
c_rt_lib0clear(&___nl__15);
#line 356
goto label_551;
#line 356
label_551:
#line 356
c_rt_lib0clear(&___nl__13);
#line 356
c_rt_lib0clear(&___nl__14);
#line 356
c_rt_lib0clear(&___nl__12);
#line 357
c_rt_lib0move(&___nl__11, c_rt_lib0next_iter(___nl__11));
#line 357
goto label_484;
#line 357
label_557:
#line 357
c_rt_lib0clear(&___nl__9);
#line 357
c_rt_lib0clear(&___nl__10);
#line 357
c_rt_lib0clear(&___nl__11);
#line 358
c_rt_lib0move(&___nl__9, c_rt_lib0ov_mk_none(___get_global_const(48)));
#line 358
c_rt_lib0clear(&___nl__0);
#line 358
c_rt_lib0clear(&___nl__1);
#line 358
c_rt_lib0clear(&___nl__2);
#line 358
c_rt_lib0clear(&___nl__3);
#line 358
c_rt_lib0clear(&___nl__6);
#line 358
c_rt_lib0clear(&___nl__7);
#line 358
c_rt_lib0clear(&___nl__8);
#line 358
return ___nl__9;
#line 358
c_rt_lib0clear(&___nl__9);
#line 358
c_rt_lib0clear(&___nl__8);
#line 358
c_rt_lib0clear(&___nl__7);
#line 359
goto label_818;
#line 359
label_574:
#line 359
c_rt_lib0move(&___nl__7, c_rt_lib0priv_as(___nl__0, ___get_global_const(801)));
#line 360
c_rt_lib0move(&___nl__8, c_rt_lib0array_mk(0));
#line 360
nl_die_arg(___nl__8);
#line 360
c_rt_lib0clear(&___nl__8);
#line 360
c_rt_lib0clear(&___nl__7);
#line 361
goto label_818;
#line 361
label_581:
#line 362
c_rt_lib0move(&___nl__7, c_rt_lib0array_mk(0));
#line 362
nl_die_arg(___nl__7);
#line 362
c_rt_lib0clear(&___nl__7);
#line 363
goto label_818;
#line 363
label_586:
#line 364
c_rt_lib0copy(&___nl__7, ___nl__1);
#line 364
c_rt_lib0move(&___nl__7, c_rt_lib0priv_is(___nl__7, ___get_global_const(803)));
#line 364
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 364
if(c_rt_lib0check_true_native(___nl__7)){ goto label_601;}
#line 364
c_rt_lib0move(&___nl__8, c_rt_lib0ov_mk_none(___get_global_const(48)));
#line 364
c_rt_lib0clear(&___nl__0);
#line 364
c_rt_lib0clear(&___nl__1);
#line 364
c_rt_lib0clear(&___nl__2);
#line 364
c_rt_lib0clear(&___nl__3);
#line 364
c_rt_lib0clear(&___nl__6);
#line 364
c_rt_lib0clear(&___nl__7);
#line 364
return ___nl__8;
#line 364
c_rt_lib0clear(&___nl__8);
#line 364
goto label_601;
#line 364
label_601:
#line 364
c_rt_lib0clear(&___nl__7);
#line 365
c_rt_lib0move(&___nl__7, ptd_system_priv0mk_err(___nl__0, ___nl__1));
#line 365
c_rt_lib0clear(&___nl__0);
#line 365
c_rt_lib0clear(&___nl__1);
#line 365
c_rt_lib0clear(&___nl__2);
#line 365
c_rt_lib0clear(&___nl__3);
#line 365
c_rt_lib0clear(&___nl__6);
#line 365
return ___nl__7;
#line 365
c_rt_lib0clear(&___nl__7);
#line 366
goto label_818;
#line 366
label_612:
#line 366
c_rt_lib0move(&___nl__7, c_rt_lib0priv_as(___nl__0, ___get_global_const(804)));
#line 367
c_rt_lib0copy(&___nl__8, ___nl__1);
#line 367
c_rt_lib0move(&___nl__8, c_rt_lib0priv_is(___nl__8, ___get_global_const(804)));
#line 367
c_rt_lib0move(&___nl__8, c_rt_lib0not(___nl__8));
#line 367
c_rt_lib0move(&___nl__8, c_rt_lib0not(___nl__8));
#line 367
if(c_rt_lib0check_true_native(___nl__8)){ goto label_630;}
#line 367
c_rt_lib0move(&___nl__9, ptd_system_priv0mk_err(___nl__0, ___nl__1));
#line 367
c_rt_lib0clear(&___nl__0);
#line 367
c_rt_lib0clear(&___nl__1);
#line 367
c_rt_lib0clear(&___nl__2);
#line 367
c_rt_lib0clear(&___nl__3);
#line 367
c_rt_lib0clear(&___nl__6);
#line 367
c_rt_lib0clear(&___nl__7);
#line 367
c_rt_lib0clear(&___nl__8);
#line 367
return ___nl__9;
#line 367
c_rt_lib0clear(&___nl__9);
#line 367
goto label_630;
#line 367
label_630:
#line 367
c_rt_lib0clear(&___nl__8);
#line 368
c_rt_lib0copy(&___nl__8, ___nl__1);
#line 368
c_rt_lib0move(&___nl__8, c_rt_lib0priv_as(___nl__8, ___get_global_const(804)));
#line 369
c_rt_lib0move(&___nl__11, c_rt_lib0init_iter(___nl__8));
#line 369
label_635:
#line 369
c_rt_lib0move(&___nl__9, c_rt_lib0is_end_hash(___nl__11));
#line 369
if(c_rt_lib0check_true_native(___nl__9)){ goto label_796;}
#line 369
c_rt_lib0move(&___nl__9, c_rt_lib0get_key_iter(___nl__11));
#line 369
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value(___nl__8, ___nl__9));
#line 370
c_rt_lib0move(&___nl__12, hash0has_key(___nl__7, ___nl__9));
#line 370
c_rt_lib0move(&___nl__12, c_rt_lib0not(___nl__12));
#line 370
c_rt_lib0move(&___nl__12, c_rt_lib0not(___nl__12));
#line 370
if(c_rt_lib0check_true_native(___nl__12)){ goto label_659;}
#line 370
c_rt_lib0move(&___nl__13, ptd_system_priv0mk_err(___nl__0, ___nl__1));
#line 370
c_rt_lib0clear(&___nl__0);
#line 370
c_rt_lib0clear(&___nl__1);
#line 370
c_rt_lib0clear(&___nl__2);
#line 370
c_rt_lib0clear(&___nl__3);
#line 370
c_rt_lib0clear(&___nl__6);
#line 370
c_rt_lib0clear(&___nl__7);
#line 370
c_rt_lib0clear(&___nl__8);
#line 370
c_rt_lib0clear(&___nl__9);
#line 370
c_rt_lib0clear(&___nl__10);
#line 370
c_rt_lib0clear(&___nl__11);
#line 370
c_rt_lib0clear(&___nl__12);
#line 370
return ___nl__13;
#line 370
c_rt_lib0clear(&___nl__13);
#line 370
goto label_659;
#line 370
label_659:
#line 370
c_rt_lib0clear(&___nl__12);
#line 371
c_rt_lib0move(&___nl__12, hash0get_value(___nl__7, ___nl__9));
#line 372
c_rt_lib0move(&___nl__13, c_rt_lib0priv_is(___nl__10, ___get_global_const(808)));
#line 372
if(c_rt_lib0check_true_native(___nl__13)){ goto label_669;}
#line 378
c_rt_lib0move(&___nl__13, c_rt_lib0priv_is(___nl__10, ___get_global_const(809)));
#line 378
if(c_rt_lib0check_true_native(___nl__13)){ goto label_707;}
#line 378
c_rt_lib0move(&___nl__13,___get_global_const(91));
#line 378
c_rt_lib0move(&___nl__13, c_rt_lib0array_mk(2, ___nl__13, ___nl__10));
#line 378
nl_die_arg(___nl__13);
#line 372
label_669:
#line 373
c_rt_lib0move(&___nl__14, c_rt_lib0priv_is(___nl__12, ___get_global_const(808)));
#line 373
if(c_rt_lib0check_true_native(___nl__14)){ goto label_677;}
#line 375
c_rt_lib0move(&___nl__14, c_rt_lib0priv_is(___nl__12, ___get_global_const(809)));
#line 375
if(c_rt_lib0check_true_native(___nl__14)){ goto label_683;}
#line 375
c_rt_lib0move(&___nl__14,___get_global_const(91));
#line 375
c_rt_lib0move(&___nl__14, c_rt_lib0array_mk(2, ___nl__14, ___nl__12));
#line 375
nl_die_arg(___nl__14);
#line 373
label_677:
#line 374
c_rt_lib0clear(&___nl__12);
#line 374
c_rt_lib0clear(&___nl__13);
#line 374
c_rt_lib0clear(&___nl__14);
#line 374
goto label_793;
#line 375
goto label_704;
#line 375
label_683:
#line 375
c_rt_lib0move(&___nl__15, c_rt_lib0priv_as(___nl__12, ___get_global_const(809)));
#line 376
c_rt_lib0move(&___nl__16, ptd_system_priv0mk_err(___nl__0, ___nl__1));
#line 376
c_rt_lib0clear(&___nl__0);
#line 376
c_rt_lib0clear(&___nl__1);
#line 376
c_rt_lib0clear(&___nl__2);
#line 376
c_rt_lib0clear(&___nl__3);
#line 376
c_rt_lib0clear(&___nl__6);
#line 376
c_rt_lib0clear(&___nl__7);
#line 376
c_rt_lib0clear(&___nl__8);
#line 376
c_rt_lib0clear(&___nl__9);
#line 376
c_rt_lib0clear(&___nl__10);
#line 376
c_rt_lib0clear(&___nl__11);
#line 376
c_rt_lib0clear(&___nl__12);
#line 376
c_rt_lib0clear(&___nl__13);
#line 376
c_rt_lib0clear(&___nl__14);
#line 376
c_rt_lib0clear(&___nl__15);
#line 376
return ___nl__16;
#line 376
c_rt_lib0clear(&___nl__16);
#line 376
c_rt_lib0clear(&___nl__15);
#line 377
goto label_704;
#line 377
label_704:
#line 377
c_rt_lib0clear(&___nl__14);
#line 378
goto label_790;
#line 378
label_707:
#line 378
c_rt_lib0move(&___nl__14, c_rt_lib0priv_as(___nl__10, ___get_global_const(809)));
#line 379
c_rt_lib0move(&___nl__15, c_rt_lib0priv_is(___nl__12, ___get_global_const(808)));
#line 379
if(c_rt_lib0check_true_native(___nl__15)){ goto label_716;}
#line 381
c_rt_lib0move(&___nl__15, c_rt_lib0priv_is(___nl__12, ___get_global_const(809)));
#line 381
if(c_rt_lib0check_true_native(___nl__15)){ goto label_735;}
#line 381
c_rt_lib0move(&___nl__15,___get_global_const(91));
#line 381
c_rt_lib0move(&___nl__15, c_rt_lib0array_mk(2, ___nl__15, ___nl__12));
#line 381
nl_die_arg(___nl__15);
#line 379
label_716:
#line 380
c_rt_lib0move(&___nl__16, ptd_system_priv0mk_err(___nl__0, ___nl__1));
#line 380
c_rt_lib0clear(&___nl__0);
#line 380
c_rt_lib0clear(&___nl__1);
#line 380
c_rt_lib0clear(&___nl__2);
#line 380
c_rt_lib0clear(&___nl__3);
#line 380
c_rt_lib0clear(&___nl__6);
#line 380
c_rt_lib0clear(&___nl__7);
#line 380
c_rt_lib0clear(&___nl__8);
#line 380
c_rt_lib0clear(&___nl__9);
#line 380
c_rt_lib0clear(&___nl__10);
#line 380
c_rt_lib0clear(&___nl__11);
#line 380
c_rt_lib0clear(&___nl__12);
#line 380
c_rt_lib0clear(&___nl__13);
#line 380
c_rt_lib0clear(&___nl__14);
#line 380
c_rt_lib0clear(&___nl__15);
#line 380
return ___nl__16;
#line 380
c_rt_lib0clear(&___nl__16);
#line 381
goto label_786;
#line 381
label_735:
#line 381
c_rt_lib0move(&___nl__16, c_rt_lib0priv_as(___nl__12, ___get_global_const(809)));
#line 382
c_rt_lib0move(&___nl__17, ptd_system_priv0check_assignment_info(___nl__16, ___nl__14, ___nl__2, ___nl__3, ___ref___4, ___ref___5));
#line 382
c_rt_lib0move(&___nl__18, c_rt_lib0priv_is(___nl__17, ___get_global_const(48)));
#line 382
if(c_rt_lib0check_true_native(___nl__18)){ goto label_745;}
#line 383
c_rt_lib0move(&___nl__18, c_rt_lib0priv_is(___nl__17, ___get_global_const(47)));
#line 383
if(c_rt_lib0check_true_native(___nl__18)){ goto label_747;}
#line 383
c_rt_lib0move(&___nl__18,___get_global_const(91));
#line 383
c_rt_lib0move(&___nl__18, c_rt_lib0array_mk(2, ___nl__18, ___nl__17));
#line 383
nl_die_arg(___nl__18);
#line 382
label_745:
#line 383
goto label_781;
#line 383
label_747:
#line 383
c_rt_lib0move(&___nl__19, c_rt_lib0priv_as(___nl__17, ___get_global_const(47)));
#line 384
c_rt_lib0move(&___nl__20,___get_global_const(689));
#line 384
c_rt_lib0move(&___nl__20, c_rt_lib0get_ref_hash(___nl__19, ___nl__20));
#line 384
c_rt_lib0move(&___nl__21, c_rt_lib0ov_mk_arg(___get_global_const(1027), ___nl__9));
#line 384
c_rt_lib0delete(array0push(&___nl__20, ___nl__21));
#line 384
c_rt_lib0clear(&___nl__21);
#line 384
c_rt_lib0move(&___nl__21,___get_global_const(689));
#line 384
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__19, ___nl__21, ___nl__20));
#line 384
c_rt_lib0clear(&___nl__21);
#line 384
c_rt_lib0clear(&___nl__20);
#line 385
c_rt_lib0move(&___nl__20, c_rt_lib0ov_mk_arg(___get_global_const(47), ___nl__19));
#line 385
c_rt_lib0clear(&___nl__0);
#line 385
c_rt_lib0clear(&___nl__1);
#line 385
c_rt_lib0clear(&___nl__2);
#line 385
c_rt_lib0clear(&___nl__3);
#line 385
c_rt_lib0clear(&___nl__6);
#line 385
c_rt_lib0clear(&___nl__7);
#line 385
c_rt_lib0clear(&___nl__8);
#line 385
c_rt_lib0clear(&___nl__9);
#line 385
c_rt_lib0clear(&___nl__10);
#line 385
c_rt_lib0clear(&___nl__11);
#line 385
c_rt_lib0clear(&___nl__12);
#line 385
c_rt_lib0clear(&___nl__13);
#line 385
c_rt_lib0clear(&___nl__14);
#line 385
c_rt_lib0clear(&___nl__15);
#line 385
c_rt_lib0clear(&___nl__16);
#line 385
c_rt_lib0clear(&___nl__17);
#line 385
c_rt_lib0clear(&___nl__18);
#line 385
c_rt_lib0clear(&___nl__19);
#line 385
return ___nl__20;
#line 385
c_rt_lib0clear(&___nl__20);
#line 385
c_rt_lib0clear(&___nl__19);
#line 386
goto label_781;
#line 386
label_781:
#line 386
c_rt_lib0clear(&___nl__17);
#line 386
c_rt_lib0clear(&___nl__18);
#line 386
c_rt_lib0clear(&___nl__16);
#line 387
goto label_786;
#line 387
label_786:
#line 387
c_rt_lib0clear(&___nl__15);
#line 387
c_rt_lib0clear(&___nl__14);
#line 388
goto label_790;
#line 388
label_790:
#line 388
c_rt_lib0clear(&___nl__13);
#line 388
c_rt_lib0clear(&___nl__12);
#line 388
label_793:
#line 389
c_rt_lib0move(&___nl__11, c_rt_lib0next_iter(___nl__11));
#line 389
goto label_635;
#line 389
label_796:
#line 389
c_rt_lib0clear(&___nl__9);
#line 389
c_rt_lib0clear(&___nl__10);
#line 389
c_rt_lib0clear(&___nl__11);
#line 390
c_rt_lib0move(&___nl__9, c_rt_lib0ov_mk_none(___get_global_const(48)));
#line 390
c_rt_lib0clear(&___nl__0);
#line 390
c_rt_lib0clear(&___nl__1);
#line 390
c_rt_lib0clear(&___nl__2);
#line 390
c_rt_lib0clear(&___nl__3);
#line 390
c_rt_lib0clear(&___nl__6);
#line 390
c_rt_lib0clear(&___nl__7);
#line 390
c_rt_lib0clear(&___nl__8);
#line 390
return ___nl__9;
#line 390
c_rt_lib0clear(&___nl__9);
#line 390
c_rt_lib0clear(&___nl__8);
#line 390
c_rt_lib0clear(&___nl__7);
#line 391
goto label_818;
#line 391
label_813:
#line 392
c_rt_lib0move(&___nl__7, c_rt_lib0array_mk(0));
#line 392
nl_die_arg(___nl__7);
#line 392
c_rt_lib0clear(&___nl__7);
#line 393
goto label_818;
#line 393
label_818:
#line 393
c_rt_lib0clear(&___nl__6);
#line 393
c_rt_lib0clear(&___nl__0);
#line 393
c_rt_lib0clear(&___nl__1);
#line 393
c_rt_lib0clear(&___nl__2);
#line 393
c_rt_lib0clear(&___nl__3);
#line 393
return NULL;
}

ImmT ptd_system_priv0add_delete(ImmT ___nl__0,ImmT * ___ref___1,ImmT * ___ref___2) {
c_rt_lib0arg_val(___nl__0);
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
#line 398
c_rt_lib0move(&___nl__3,___get_global_const(1088));
#line 398
c_rt_lib0move(&___nl__3, c_rt_lib0get_ref_hash(*___ref___1, ___nl__3));
#line 398
c_rt_lib0move(&___nl__4,___get_global_const(66));
#line 398
c_rt_lib0move(&___nl__4, c_rt_lib0get_ref_hash(___nl__3, ___nl__4));
#line 398
c_rt_lib0move(&___nl__5,___get_global_const(152));
#line 398
c_rt_lib0move(&___nl__5, c_rt_lib0get_ref_hash(___nl__4, ___nl__5));
#line 399
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(*___ref___2, ___get_global_const(785)));
#line 400
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(*___ref___1, ___get_global_const(1088)));
#line 400
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__8, ___get_global_const(784)));
#line 400
c_rt_lib0move(&___nl__6, c_rt_lib0hash_mk(3, ___get_global_const(134), ___nl__7, ___get_global_const(132), ___nl__8, ___get_global_const(1089), ___nl__0));
#line 400
c_rt_lib0clear(&___nl__7);
#line 400
c_rt_lib0clear(&___nl__8);
#line 400
c_rt_lib0delete(array0push(&___nl__5, ___nl__6));
#line 400
c_rt_lib0clear(&___nl__6);
#line 400
c_rt_lib0move(&___nl__6,___get_global_const(152));
#line 400
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__4, ___nl__6, ___nl__5));
#line 400
c_rt_lib0move(&___nl__6,___get_global_const(66));
#line 400
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__3, ___nl__6, ___nl__4));
#line 400
c_rt_lib0move(&___nl__6,___get_global_const(1088));
#line 400
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___1, ___nl__6, ___nl__3));
#line 400
c_rt_lib0clear(&___nl__6);
#line 400
c_rt_lib0clear(&___nl__3);
#line 400
c_rt_lib0clear(&___nl__4);
#line 400
c_rt_lib0clear(&___nl__5);
#line 400
c_rt_lib0clear(&___nl__0);
#line 400
return NULL;
}

ImmT ptd_system_priv0add_create(ImmT ___nl__0,ImmT * ___ref___1,ImmT * ___ref___2) {
c_rt_lib0arg_val(___nl__0);
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
#line 407
c_rt_lib0move(&___nl__3,___get_global_const(1088));
#line 407
c_rt_lib0move(&___nl__3, c_rt_lib0get_ref_hash(*___ref___1, ___nl__3));
#line 407
c_rt_lib0move(&___nl__4,___get_global_const(66));
#line 407
c_rt_lib0move(&___nl__4, c_rt_lib0get_ref_hash(___nl__3, ___nl__4));
#line 407
c_rt_lib0move(&___nl__5,___get_global_const(154));
#line 407
c_rt_lib0move(&___nl__5, c_rt_lib0get_ref_hash(___nl__4, ___nl__5));
#line 408
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(*___ref___2, ___get_global_const(785)));
#line 409
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(*___ref___1, ___get_global_const(1088)));
#line 409
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__8, ___get_global_const(784)));
#line 409
c_rt_lib0move(&___nl__6, c_rt_lib0hash_mk(3, ___get_global_const(134), ___nl__7, ___get_global_const(132), ___nl__8, ___get_global_const(1089), ___nl__0));
#line 409
c_rt_lib0clear(&___nl__7);
#line 409
c_rt_lib0clear(&___nl__8);
#line 409
c_rt_lib0delete(array0push(&___nl__5, ___nl__6));
#line 409
c_rt_lib0clear(&___nl__6);
#line 409
c_rt_lib0move(&___nl__6,___get_global_const(154));
#line 409
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__4, ___nl__6, ___nl__5));
#line 409
c_rt_lib0move(&___nl__6,___get_global_const(66));
#line 409
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__3, ___nl__6, ___nl__4));
#line 409
c_rt_lib0move(&___nl__6,___get_global_const(1088));
#line 409
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___1, ___nl__6, ___nl__3));
#line 409
c_rt_lib0clear(&___nl__6);
#line 409
c_rt_lib0clear(&___nl__3);
#line 409
c_rt_lib0clear(&___nl__4);
#line 409
c_rt_lib0clear(&___nl__5);
#line 409
c_rt_lib0clear(&___nl__0);
#line 409
return NULL;
}

ImmT ptd_system0can_delete0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 3, "ptd_system0can_delete");
return ptd_system0can_delete(_tab[0], &_tab[1], &_tab[2]);}
ImmT ptd_system0can_delete(ImmT ___nl__0,ImmT * ___ref___1,ImmT * ___ref___2) {
c_rt_lib0arg_val(___nl__0);
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
#line 416
label_0:
#line 416
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(63)));
#line 416
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__3, ___get_global_const(801)));
#line 416
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 416
if(c_rt_lib0check_true_native(___nl__3)){ goto label_23;}
#line 417
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(63)));
#line 417
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__4, ___get_global_const(801)));
#line 418
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(43)));
#line 418
c_rt_lib0move(&___nl__5, ptd_system0is_known(___nl__6));
#line 418
c_rt_lib0clear(&___nl__6);
#line 418
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 418
if(c_rt_lib0check_true_native(___nl__5)){ goto label_14;}
#line 418
c_rt_lib0delete(ptd_system_priv0add_delete(___nl__4, ___ref___1, ___ref___2));
#line 418
goto label_14;
#line 418
label_14:
#line 418
c_rt_lib0clear(&___nl__5);
#line 419
c_rt_lib0move(&___nl__5, ptd_system0get_ref_type(___nl__4, ___ref___1, ___ref___2));
#line 419
c_rt_lib0copy(&___nl__6, ___nl__5);
#line 419
c_rt_lib0hash_set_value_dec(&___nl__0, ___get_global_const(63), ___nl__6);
#line 419
c_rt_lib0clear(&___nl__5);
#line 419
c_rt_lib0clear(&___nl__6);
#line 419
c_rt_lib0clear(&___nl__4);
#line 420
goto label_0;
#line 420
label_23:
#line 420
c_rt_lib0clear(&___nl__3);
#line 421
return ___nl__0;
#line 421
c_rt_lib0clear(&___nl__0);
#line 421
return NULL;
}

ImmT ptd_system0can_create0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 3, "ptd_system0can_create");
return ptd_system0can_create(_tab[0], &_tab[1], &_tab[2]);}
ImmT ptd_system0can_create(ImmT ___nl__0,ImmT * ___ref___1,ImmT * ___ref___2) {
c_rt_lib0arg_val(___nl__0);
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
#line 426
label_0:
#line 426
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(63)));
#line 426
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__3, ___get_global_const(801)));
#line 426
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 426
if(c_rt_lib0check_true_native(___nl__3)){ goto label_23;}
#line 427
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(63)));
#line 427
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__4, ___get_global_const(801)));
#line 428
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(43)));
#line 428
c_rt_lib0move(&___nl__5, ptd_system0is_known(___nl__6));
#line 428
c_rt_lib0clear(&___nl__6);
#line 428
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 428
if(c_rt_lib0check_true_native(___nl__5)){ goto label_14;}
#line 428
c_rt_lib0delete(ptd_system_priv0add_create(___nl__4, ___ref___1, ___ref___2));
#line 428
goto label_14;
#line 428
label_14:
#line 428
c_rt_lib0clear(&___nl__5);
#line 429
c_rt_lib0move(&___nl__5, ptd_system0get_ref_type(___nl__4, ___ref___1, ___ref___2));
#line 429
c_rt_lib0copy(&___nl__6, ___nl__5);
#line 429
c_rt_lib0hash_set_value_dec(&___nl__0, ___get_global_const(63), ___nl__6);
#line 429
c_rt_lib0clear(&___nl__5);
#line 429
c_rt_lib0clear(&___nl__6);
#line 429
c_rt_lib0clear(&___nl__4);
#line 430
goto label_0;
#line 430
label_23:
#line 430
c_rt_lib0clear(&___nl__3);
#line 431
return ___nl__0;
#line 431
c_rt_lib0clear(&___nl__0);
#line 431
return NULL;
}

ImmT ptd_system_priv0walk_on_type(ImmT ___nl__0,ImmT ___nl__1,ImmT ___nl__2,ImmT * ___ref___3,ImmT * ___ref___4) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
c_rt_lib0arg_val(___nl__2);
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
#line 436
c_rt_lib0move(&___nl__5, c_rt_lib0hash_mk(0));
#line 437
c_rt_lib0delete(ptd_system_priv0get_ref_in_type(___nl__0, &___nl__5));
#line 438
c_rt_lib0copy(&___nl__6, ___nl__5);
#line 439
c_rt_lib0move(&___nl__9, c_rt_lib0init_iter(___nl__6));
#line 439
label_4:
#line 439
c_rt_lib0move(&___nl__7, c_rt_lib0is_end_hash(___nl__9));
#line 439
if(c_rt_lib0check_true_native(___nl__7)){ goto label_126;}
#line 439
c_rt_lib0move(&___nl__7, c_rt_lib0get_key_iter(___nl__9));
#line 439
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value(___nl__6, ___nl__7));
#line 440
c_rt_lib0move(&___nl__10, ptd_system_priv0get_function_def(___nl__7, ___ref___3, ___ref___4));
#line 441
c_rt_lib0move(&___nl__11, array0len(___nl__10));
#line 441
c_rt_lib0move(&___nl__12,___get_global_const(0));
#line 441
c_rt_lib0move(&___nl__11, c_rt_lib0num_eq(___nl__11, ___nl__12));
#line 441
c_rt_lib0clear(&___nl__12);
#line 441
c_rt_lib0move(&___nl__11, c_rt_lib0not(___nl__11));
#line 441
if(c_rt_lib0check_true_native(___nl__11)){ goto label_28;}
#line 441
c_rt_lib0clear(&___nl__0);
#line 441
c_rt_lib0clear(&___nl__1);
#line 441
c_rt_lib0clear(&___nl__2);
#line 441
c_rt_lib0clear(&___nl__5);
#line 441
c_rt_lib0clear(&___nl__6);
#line 441
c_rt_lib0clear(&___nl__7);
#line 441
c_rt_lib0clear(&___nl__8);
#line 441
c_rt_lib0clear(&___nl__9);
#line 441
c_rt_lib0clear(&___nl__10);
#line 441
c_rt_lib0clear(&___nl__11);
#line 441
return NULL;
#line 441
goto label_28;
#line 441
label_28:
#line 441
c_rt_lib0clear(&___nl__11);
#line 442
c_rt_lib0move(&___nl__12,___get_global_const(0));
#line 442
c_rt_lib0move(&___nl__11, c_rt_lib0array_get(___nl__10, ___nl__12));
#line 442
c_rt_lib0clear(&___nl__12);
#line 442
c_rt_lib0copy(&___nl__10, ___nl__11);
#line 442
c_rt_lib0clear(&___nl__11);
#line 443
c_rt_lib0move(&___nl__11, c_rt_lib0hash_get_value_dec(___nl__10, ___get_global_const(1090)));
#line 443
c_rt_lib0move(&___nl__12, c_rt_lib0priv_is(___nl__11, ___get_global_const(45)));
#line 443
if(c_rt_lib0check_true_native(___nl__12)){ goto label_43;}
#line 447
c_rt_lib0move(&___nl__12, c_rt_lib0priv_is(___nl__11, ___get_global_const(46)));
#line 447
if(c_rt_lib0check_true_native(___nl__12)){ goto label_65;}
#line 447
c_rt_lib0move(&___nl__12,___get_global_const(91));
#line 447
c_rt_lib0move(&___nl__12, c_rt_lib0array_mk(2, ___nl__12, ___nl__11));
#line 447
nl_die_arg(___nl__12);
#line 443
label_43:
#line 443
c_rt_lib0move(&___nl__13, c_rt_lib0priv_as(___nl__11, ___get_global_const(45)));
#line 444
c_rt_lib0move(&___nl__15,___get_global_const(0));
#line 444
c_rt_lib0move(&___nl__16,___get_global_const(1));
#line 444
c_rt_lib0move(&___nl__17, c_rt_lib0array_len(___nl__13));
#line 444
label_48:
#line 444
c_rt_lib0move(&___nl__18, c_rt_lib0ge(___nl__15, ___nl__17));
#line 444
if(c_rt_lib0check_true_native(___nl__18)){ goto label_57;}
#line 444
c_rt_lib0move(&___nl__14, c_rt_lib0array_get(___nl__13, ___nl__15));
#line 445
c_rt_lib0move(&___nl__19,___get_global_const(2));
#line 445
c_rt_lib0delete(hash0set_value(&___nl__5, ___nl__14, ___nl__19));
#line 445
c_rt_lib0clear(&___nl__19);
#line 446
c_rt_lib0move(&___nl__15, c_rt_lib0add_mod(___nl__15, ___nl__16));
#line 446
goto label_48;
#line 446
label_57:
#line 446
c_rt_lib0clear(&___nl__14);
#line 446
c_rt_lib0clear(&___nl__15);
#line 446
c_rt_lib0clear(&___nl__16);
#line 446
c_rt_lib0clear(&___nl__17);
#line 446
c_rt_lib0clear(&___nl__18);
#line 446
c_rt_lib0clear(&___nl__13);
#line 447
goto label_120;
#line 447
label_65:
#line 448
c_rt_lib0move(&___nl__13, ptd_system0get_ref_type(___nl__7, ___ref___3, ___ref___4));
#line 448
c_rt_lib0copy(&___nl__0, ___nl__13);
#line 448
c_rt_lib0clear(&___nl__13);
#line 449
c_rt_lib0move(&___nl__13, c_rt_lib0hash_mk(0));
#line 450
c_rt_lib0delete(ptd_system_priv0get_all_ref_in_type(___nl__0, &___nl__13, ___ref___3, ___ref___4));
#line 451
c_rt_lib0move(&___nl__14, c_rt_lib0array_mk(0));
#line 452
c_rt_lib0move(&___nl__17, c_rt_lib0init_iter(___nl__13));
#line 452
label_73:
#line 452
c_rt_lib0move(&___nl__15, c_rt_lib0is_end_hash(___nl__17));
#line 452
if(c_rt_lib0check_true_native(___nl__15)){ goto label_84;}
#line 452
c_rt_lib0move(&___nl__15, c_rt_lib0get_key_iter(___nl__17));
#line 452
c_rt_lib0move(&___nl__16, c_rt_lib0hash_get_value(___nl__13, ___nl__15));
#line 453
c_rt_lib0move(&___nl__18,___get_global_const(2));
#line 453
c_rt_lib0delete(hash0set_value(&___nl__5, ___nl__15, ___nl__18));
#line 453
c_rt_lib0clear(&___nl__18);
#line 454
c_rt_lib0delete(array0push(&___nl__14, ___nl__15));
#line 455
c_rt_lib0move(&___nl__17, c_rt_lib0next_iter(___nl__17));
#line 455
goto label_73;
#line 455
label_84:
#line 455
c_rt_lib0clear(&___nl__15);
#line 455
c_rt_lib0clear(&___nl__16);
#line 455
c_rt_lib0clear(&___nl__17);
#line 456
c_rt_lib0move(&___nl__15, ptd_system_priv0get_function_def(___nl__7, ___ref___3, ___ref___4));
#line 456
c_rt_lib0move(&___nl__16,___get_global_const(0));
#line 456
c_rt_lib0move(&___nl__15, c_rt_lib0array_get(___nl__15, ___nl__16));
#line 456
c_rt_lib0clear(&___nl__16);
#line 456
c_rt_lib0copy(&___nl__10, ___nl__15);
#line 456
c_rt_lib0clear(&___nl__15);
#line 457
c_rt_lib0move(&___nl__15, c_rt_lib0ov_mk_arg(___get_global_const(45), ___nl__14));
#line 457
c_rt_lib0copy(&___nl__16, ___nl__15);
#line 457
c_rt_lib0hash_set_value_dec(&___nl__10, ___get_global_const(1090), ___nl__16);
#line 457
c_rt_lib0clear(&___nl__15);
#line 457
c_rt_lib0clear(&___nl__16);
#line 458
c_rt_lib0move(&___nl__16, c_rt_lib0hash_get_value_dec(*___ref___3, ___get_global_const(1091)));
#line 458
c_rt_lib0move(&___nl__17, c_rt_lib0hash_get_value_dec(___nl__10, ___get_global_const(132)));
#line 458
c_rt_lib0move(&___nl__15, hash0get_value(___nl__16, ___nl__17));
#line 458
c_rt_lib0clear(&___nl__17);
#line 458
c_rt_lib0clear(&___nl__16);
#line 459
c_rt_lib0move(&___nl__16, c_rt_lib0hash_get_value_dec(___nl__10, ___get_global_const(93)));
#line 459
c_rt_lib0delete(hash0set_value(&___nl__15, ___nl__16, ___nl__10));
#line 459
c_rt_lib0clear(&___nl__16);
#line 460
c_rt_lib0move(&___nl__16,___get_global_const(1091));
#line 460
c_rt_lib0move(&___nl__16, c_rt_lib0get_ref_hash(*___ref___3, ___nl__16));
#line 460
c_rt_lib0move(&___nl__17, c_rt_lib0hash_get_value_dec(___nl__10, ___get_global_const(132)));
#line 460
c_rt_lib0delete(hash0set_value(&___nl__16, ___nl__17, ___nl__15));
#line 460
c_rt_lib0clear(&___nl__17);
#line 460
c_rt_lib0move(&___nl__17,___get_global_const(1091));
#line 460
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___3, ___nl__17, ___nl__16));
#line 460
c_rt_lib0clear(&___nl__17);
#line 460
c_rt_lib0clear(&___nl__16);
#line 460
c_rt_lib0clear(&___nl__13);
#line 460
c_rt_lib0clear(&___nl__14);
#line 460
c_rt_lib0clear(&___nl__15);
#line 461
goto label_120;
#line 461
label_120:
#line 461
c_rt_lib0clear(&___nl__11);
#line 461
c_rt_lib0clear(&___nl__12);
#line 461
c_rt_lib0clear(&___nl__10);
#line 462
c_rt_lib0move(&___nl__9, c_rt_lib0next_iter(___nl__9));
#line 462
goto label_4;
#line 462
label_126:
#line 462
c_rt_lib0clear(&___nl__7);
#line 462
c_rt_lib0clear(&___nl__8);
#line 462
c_rt_lib0clear(&___nl__9);
#line 463
c_rt_lib0move(&___nl__9, c_rt_lib0init_iter(___nl__5));
#line 463
label_131:
#line 463
c_rt_lib0move(&___nl__7, c_rt_lib0is_end_hash(___nl__9));
#line 463
if(c_rt_lib0check_true_native(___nl__7)){ goto label_162;}
#line 463
c_rt_lib0move(&___nl__7, c_rt_lib0get_key_iter(___nl__9));
#line 463
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value(___nl__5, ___nl__7));
#line 464
c_rt_lib0move(&___nl__10, hash0has_key(___nl__2, ___nl__7));
#line 464
c_rt_lib0move(&___nl__10, c_rt_lib0not(___nl__10));
#line 464
if(c_rt_lib0check_true_native(___nl__10)){ goto label_142;}
#line 464
c_rt_lib0clear(&___nl__10);
#line 464
goto label_159;
#line 464
goto label_142;
#line 464
label_142:
#line 464
c_rt_lib0clear(&___nl__10);
#line 465
c_rt_lib0move(&___nl__10, c_rt_lib0priv_is(___nl__1, ___get_global_const(154)));
#line 465
if(c_rt_lib0check_true_native(___nl__10)){ goto label_151;}
#line 467
c_rt_lib0move(&___nl__10, c_rt_lib0priv_is(___nl__1, ___get_global_const(152)));
#line 467
if(c_rt_lib0check_true_native(___nl__10)){ goto label_154;}
#line 467
c_rt_lib0move(&___nl__10,___get_global_const(91));
#line 467
c_rt_lib0move(&___nl__10, c_rt_lib0array_mk(2, ___nl__10, ___nl__1));
#line 467
nl_die_arg(___nl__10);
#line 465
label_151:
#line 466
c_rt_lib0delete(ptd_system_priv0add_create(___nl__7, ___ref___3, ___ref___4));
#line 467
goto label_157;
#line 467
label_154:
#line 468
c_rt_lib0delete(ptd_system_priv0add_delete(___nl__7, ___ref___3, ___ref___4));
#line 469
goto label_157;
#line 469
label_157:
#line 469
c_rt_lib0clear(&___nl__10);
#line 469
label_159:
#line 470
c_rt_lib0move(&___nl__9, c_rt_lib0next_iter(___nl__9));
#line 470
goto label_131;
#line 470
label_162:
#line 470
c_rt_lib0clear(&___nl__7);
#line 470
c_rt_lib0clear(&___nl__8);
#line 470
c_rt_lib0clear(&___nl__9);
#line 470
c_rt_lib0clear(&___nl__5);
#line 470
c_rt_lib0clear(&___nl__6);
#line 470
c_rt_lib0clear(&___nl__0);
#line 470
c_rt_lib0clear(&___nl__1);
#line 470
c_rt_lib0clear(&___nl__2);
#line 470
return NULL;
}

ImmT ptd_system_priv0get_all_ref_in_type(ImmT ___nl__0,ImmT * ___ref___1,ImmT * ___ref___2,ImmT * ___ref___3) {
c_rt_lib0arg_val(___nl__0);
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
#line 475
c_rt_lib0move(&___nl__4, c_rt_lib0hash_mk(0));
#line 476
c_rt_lib0delete(ptd_system_priv0get_ref_in_type(___nl__0, &___nl__4));
#line 477
c_rt_lib0move(&___nl__7, c_rt_lib0init_iter(___nl__4));
#line 477
label_3:
#line 477
c_rt_lib0move(&___nl__5, c_rt_lib0is_end_hash(___nl__7));
#line 477
if(c_rt_lib0check_true_native(___nl__5)){ goto label_26;}
#line 477
c_rt_lib0move(&___nl__5, c_rt_lib0get_key_iter(___nl__7));
#line 477
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value(___nl__4, ___nl__5));
#line 478
c_rt_lib0move(&___nl__8, hash0has_key(*___ref___1, ___nl__5));
#line 478
c_rt_lib0move(&___nl__8, c_rt_lib0not(___nl__8));
#line 478
if(c_rt_lib0check_true_native(___nl__8)){ goto label_14;}
#line 478
c_rt_lib0clear(&___nl__8);
#line 478
goto label_23;
#line 478
goto label_14;
#line 478
label_14:
#line 478
c_rt_lib0clear(&___nl__8);
#line 479
c_rt_lib0move(&___nl__8,___get_global_const(2));
#line 479
c_rt_lib0delete(hash0set_value(___ref___1, ___nl__5, ___nl__8));
#line 479
c_rt_lib0clear(&___nl__8);
#line 480
c_rt_lib0move(&___nl__8, ptd_system0get_ref_type(___nl__5, ___ref___2, ___ref___3));
#line 480
c_rt_lib0copy(&___nl__0, ___nl__8);
#line 480
c_rt_lib0clear(&___nl__8);
#line 481
c_rt_lib0delete(ptd_system_priv0get_all_ref_in_type(___nl__0, ___ref___1, ___ref___2, ___ref___3));
#line 481
label_23:
#line 482
c_rt_lib0move(&___nl__7, c_rt_lib0next_iter(___nl__7));
#line 482
goto label_3;
#line 482
label_26:
#line 482
c_rt_lib0clear(&___nl__5);
#line 482
c_rt_lib0clear(&___nl__6);
#line 482
c_rt_lib0clear(&___nl__7);
#line 482
c_rt_lib0clear(&___nl__4);
#line 482
c_rt_lib0clear(&___nl__0);
#line 482
return NULL;
}

ImmT ptd_system_priv0get_ref_in_type(ImmT ___nl__0,ImmT * ___ref___1) {
c_rt_lib0arg_val(___nl__0);
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
#line 486
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__0, ___get_global_const(797)));
#line 486
if(c_rt_lib0check_true_native(___nl__2)){ goto label_21;}
#line 487
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__0, ___get_global_const(798)));
#line 487
if(c_rt_lib0check_true_native(___nl__2)){ goto label_23;}
#line 489
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__0, ___get_global_const(799)));
#line 489
if(c_rt_lib0check_true_native(___nl__2)){ goto label_28;}
#line 491
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__0, ___get_global_const(800)));
#line 491
if(c_rt_lib0check_true_native(___nl__2)){ goto label_33;}
#line 495
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__0, ___get_global_const(801)));
#line 495
if(c_rt_lib0check_true_native(___nl__2)){ goto label_50;}
#line 497
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__0, ___get_global_const(802)));
#line 497
if(c_rt_lib0check_true_native(___nl__2)){ goto label_57;}
#line 498
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__0, ___get_global_const(803)));
#line 498
if(c_rt_lib0check_true_native(___nl__2)){ goto label_59;}
#line 499
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__0, ___get_global_const(804)));
#line 499
if(c_rt_lib0check_true_native(___nl__2)){ goto label_61;}
#line 506
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__0, ___get_global_const(805)));
#line 506
if(c_rt_lib0check_true_native(___nl__2)){ goto label_93;}
#line 506
c_rt_lib0move(&___nl__2,___get_global_const(91));
#line 506
c_rt_lib0move(&___nl__2, c_rt_lib0array_mk(2, ___nl__2, ___nl__0));
#line 506
nl_die_arg(___nl__2);
#line 486
label_21:
#line 487
goto label_95;
#line 487
label_23:
#line 487
c_rt_lib0move(&___nl__3, c_rt_lib0priv_as(___nl__0, ___get_global_const(798)));
#line 488
c_rt_lib0delete(ptd_system_priv0get_ref_in_type(___nl__3, ___ref___1));
#line 488
c_rt_lib0clear(&___nl__3);
#line 489
goto label_95;
#line 489
label_28:
#line 489
c_rt_lib0move(&___nl__3, c_rt_lib0priv_as(___nl__0, ___get_global_const(799)));
#line 490
c_rt_lib0delete(ptd_system_priv0get_ref_in_type(___nl__3, ___ref___1));
#line 490
c_rt_lib0clear(&___nl__3);
#line 491
goto label_95;
#line 491
label_33:
#line 491
c_rt_lib0move(&___nl__3, c_rt_lib0priv_as(___nl__0, ___get_global_const(800)));
#line 492
c_rt_lib0move(&___nl__6, c_rt_lib0init_iter(___nl__3));
#line 492
label_36:
#line 492
c_rt_lib0move(&___nl__4, c_rt_lib0is_end_hash(___nl__6));
#line 492
if(c_rt_lib0check_true_native(___nl__4)){ goto label_44;}
#line 492
c_rt_lib0move(&___nl__4, c_rt_lib0get_key_iter(___nl__6));
#line 492
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value(___nl__3, ___nl__4));
#line 493
c_rt_lib0delete(ptd_system_priv0get_ref_in_type(___nl__5, ___ref___1));
#line 494
c_rt_lib0move(&___nl__6, c_rt_lib0next_iter(___nl__6));
#line 494
goto label_36;
#line 494
label_44:
#line 494
c_rt_lib0clear(&___nl__4);
#line 494
c_rt_lib0clear(&___nl__5);
#line 494
c_rt_lib0clear(&___nl__6);
#line 494
c_rt_lib0clear(&___nl__3);
#line 495
goto label_95;
#line 495
label_50:
#line 495
c_rt_lib0move(&___nl__3, c_rt_lib0priv_as(___nl__0, ___get_global_const(801)));
#line 496
c_rt_lib0move(&___nl__4,___get_global_const(2));
#line 496
c_rt_lib0delete(hash0set_value(___ref___1, ___nl__3, ___nl__4));
#line 496
c_rt_lib0clear(&___nl__4);
#line 496
c_rt_lib0clear(&___nl__3);
#line 497
goto label_95;
#line 497
label_57:
#line 498
goto label_95;
#line 498
label_59:
#line 499
goto label_95;
#line 499
label_61:
#line 499
c_rt_lib0move(&___nl__3, c_rt_lib0priv_as(___nl__0, ___get_global_const(804)));
#line 500
c_rt_lib0move(&___nl__6, c_rt_lib0init_iter(___nl__3));
#line 500
label_64:
#line 500
c_rt_lib0move(&___nl__4, c_rt_lib0is_end_hash(___nl__6));
#line 500
if(c_rt_lib0check_true_native(___nl__4)){ goto label_87;}
#line 500
c_rt_lib0move(&___nl__4, c_rt_lib0get_key_iter(___nl__6));
#line 500
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value(___nl__3, ___nl__4));
#line 501
c_rt_lib0move(&___nl__7, c_rt_lib0priv_is(___nl__5, ___get_global_const(808)));
#line 501
if(c_rt_lib0check_true_native(___nl__7)){ goto label_76;}
#line 502
c_rt_lib0move(&___nl__7, c_rt_lib0priv_is(___nl__5, ___get_global_const(809)));
#line 502
if(c_rt_lib0check_true_native(___nl__7)){ goto label_78;}
#line 502
c_rt_lib0move(&___nl__7,___get_global_const(91));
#line 502
c_rt_lib0move(&___nl__7, c_rt_lib0array_mk(2, ___nl__7, ___nl__5));
#line 502
nl_die_arg(___nl__7);
#line 501
label_76:
#line 502
goto label_83;
#line 502
label_78:
#line 502
c_rt_lib0move(&___nl__8, c_rt_lib0priv_as(___nl__5, ___get_global_const(809)));
#line 503
c_rt_lib0delete(ptd_system_priv0get_ref_in_type(___nl__8, ___ref___1));
#line 503
c_rt_lib0clear(&___nl__8);
#line 504
goto label_83;
#line 504
label_83:
#line 504
c_rt_lib0clear(&___nl__7);
#line 505
c_rt_lib0move(&___nl__6, c_rt_lib0next_iter(___nl__6));
#line 505
goto label_64;
#line 505
label_87:
#line 505
c_rt_lib0clear(&___nl__4);
#line 505
c_rt_lib0clear(&___nl__5);
#line 505
c_rt_lib0clear(&___nl__6);
#line 505
c_rt_lib0clear(&___nl__3);
#line 506
goto label_95;
#line 506
label_93:
#line 507
goto label_95;
#line 507
label_95:
#line 507
c_rt_lib0clear(&___nl__2);
#line 507
c_rt_lib0clear(&___nl__0);
#line 507
return NULL;
}

ImmT ptd_system_priv0get_function_def(ImmT ___nl__0,ImmT * ___ref___1,ImmT * ___ref___2) {
c_rt_lib0arg_val(___nl__0);
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
ImmT ___nl__9 = NULL;
ImmT ___nl__10 = NULL;
#line 514
c_rt_lib0move(&___nl__6,___get_global_const(185));
#line 514
c_rt_lib0move(&___nl__5, string0index2(___nl__0, ___nl__6));
#line 514
c_rt_lib0clear(&___nl__6);
#line 515
c_rt_lib0move(&___nl__6,___get_global_const(0));
#line 515
c_rt_lib0move(&___nl__6, c_rt_lib0ge(___nl__5, ___nl__6));
#line 515
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 515
if(c_rt_lib0check_true_native(___nl__6)){ goto label_25;}
#line 516
c_rt_lib0move(&___nl__8,___get_global_const(0));
#line 516
c_rt_lib0move(&___nl__7, string0substr(___nl__0, ___nl__8, ___nl__5));
#line 516
c_rt_lib0clear(&___nl__8);
#line 516
c_rt_lib0copy(&___nl__3, ___nl__7);
#line 516
c_rt_lib0clear(&___nl__7);
#line 517
c_rt_lib0move(&___nl__8,___get_global_const(6));
#line 517
c_rt_lib0move(&___nl__8, c_rt_lib0add(___nl__5, ___nl__8));
#line 517
c_rt_lib0move(&___nl__9, string0length(___nl__0));
#line 517
c_rt_lib0move(&___nl__9, c_rt_lib0sub_mod(___nl__9, ___nl__5));
#line 517
c_rt_lib0move(&___nl__10,___get_global_const(6));
#line 517
c_rt_lib0move(&___nl__9, c_rt_lib0sub_mod(___nl__9, ___nl__10));
#line 517
c_rt_lib0clear(&___nl__10);
#line 517
c_rt_lib0move(&___nl__7, string0substr(___nl__0, ___nl__8, ___nl__9));
#line 517
c_rt_lib0clear(&___nl__9);
#line 517
c_rt_lib0clear(&___nl__8);
#line 517
c_rt_lib0copy(&___nl__4, ___nl__7);
#line 517
c_rt_lib0clear(&___nl__7);
#line 518
goto label_42;
#line 518
label_25:
#line 519
c_rt_lib0move(&___nl__7,___get_global_const(1092));
#line 519
c_rt_lib0move(&___nl__7, c_rt_lib0concat_add(___nl__7, ___nl__0));
#line 519
c_rt_lib0move(&___nl__8,___get_global_const(807));
#line 519
c_rt_lib0move(&___nl__7, c_rt_lib0concat_add(___nl__7, ___nl__8));
#line 519
c_rt_lib0clear(&___nl__8);
#line 519
c_rt_lib0delete(ptd_system_priv0add_error(___ref___2, ___nl__7));
#line 519
c_rt_lib0clear(&___nl__7);
#line 520
c_rt_lib0move(&___nl__7, c_rt_lib0array_mk(0));
#line 520
c_rt_lib0clear(&___nl__0);
#line 520
c_rt_lib0clear(&___nl__3);
#line 520
c_rt_lib0clear(&___nl__4);
#line 520
c_rt_lib0clear(&___nl__5);
#line 520
c_rt_lib0clear(&___nl__6);
#line 520
return ___nl__7;
#line 520
c_rt_lib0clear(&___nl__7);
#line 521
goto label_42;
#line 521
label_42:
#line 521
c_rt_lib0clear(&___nl__6);
#line 522
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(*___ref___1, ___get_global_const(1091)));
#line 522
c_rt_lib0move(&___nl__6, hash0has_key(___nl__7, ___nl__3));
#line 522
c_rt_lib0clear(&___nl__7);
#line 522
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 522
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 522
if(c_rt_lib0check_true_native(___nl__6)){ goto label_59;}
#line 523
c_rt_lib0move(&___nl__7, c_rt_lib0array_mk(0));
#line 523
c_rt_lib0clear(&___nl__0);
#line 523
c_rt_lib0clear(&___nl__3);
#line 523
c_rt_lib0clear(&___nl__4);
#line 523
c_rt_lib0clear(&___nl__5);
#line 523
c_rt_lib0clear(&___nl__6);
#line 523
return ___nl__7;
#line 523
c_rt_lib0clear(&___nl__7);
#line 524
goto label_59;
#line 524
label_59:
#line 524
c_rt_lib0clear(&___nl__6);
#line 525
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(*___ref___1, ___get_global_const(1091)));
#line 525
c_rt_lib0move(&___nl__6, hash0get_value(___nl__7, ___nl__3));
#line 525
c_rt_lib0clear(&___nl__7);
#line 526
c_rt_lib0move(&___nl__7, hash0has_key(___nl__6, ___nl__4));
#line 526
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 526
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 526
if(c_rt_lib0check_true_native(___nl__7)){ goto label_85;}
#line 527
c_rt_lib0move(&___nl__8,___get_global_const(1093));
#line 527
c_rt_lib0move(&___nl__8, c_rt_lib0concat_add(___nl__8, ___nl__0));
#line 527
c_rt_lib0move(&___nl__9,___get_global_const(1094));
#line 527
c_rt_lib0move(&___nl__8, c_rt_lib0concat_add(___nl__8, ___nl__9));
#line 527
c_rt_lib0clear(&___nl__9);
#line 527
c_rt_lib0delete(ptd_system_priv0add_error(___ref___2, ___nl__8));
#line 527
c_rt_lib0clear(&___nl__8);
#line 528
c_rt_lib0move(&___nl__8, c_rt_lib0array_mk(0));
#line 528
c_rt_lib0clear(&___nl__0);
#line 528
c_rt_lib0clear(&___nl__3);
#line 528
c_rt_lib0clear(&___nl__4);
#line 528
c_rt_lib0clear(&___nl__5);
#line 528
c_rt_lib0clear(&___nl__6);
#line 528
c_rt_lib0clear(&___nl__7);
#line 528
return ___nl__8;
#line 528
c_rt_lib0clear(&___nl__8);
#line 529
goto label_85;
#line 529
label_85:
#line 529
c_rt_lib0clear(&___nl__7);
#line 530
c_rt_lib0move(&___nl__8, hash0get_value(___nl__6, ___nl__4));
#line 530
c_rt_lib0move(&___nl__7, c_rt_lib0array_mk(1, ___nl__8));
#line 530
c_rt_lib0clear(&___nl__8);
#line 530
c_rt_lib0clear(&___nl__0);
#line 530
c_rt_lib0clear(&___nl__3);
#line 530
c_rt_lib0clear(&___nl__4);
#line 530
c_rt_lib0clear(&___nl__5);
#line 530
c_rt_lib0clear(&___nl__6);
#line 530
return ___nl__7;
#line 530
c_rt_lib0clear(&___nl__7);
#line 530
c_rt_lib0clear(&___nl__3);
#line 530
c_rt_lib0clear(&___nl__4);
#line 530
c_rt_lib0clear(&___nl__5);
#line 530
c_rt_lib0clear(&___nl__6);
#line 530
c_rt_lib0clear(&___nl__0);
#line 530
return NULL;
}

ImmT ptd_system0get_ref_type0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 3, "ptd_system0get_ref_type");
return ptd_system0get_ref_type(_tab[0], &_tab[1], &_tab[2]);}
ImmT ptd_system0get_ref_type(ImmT ___nl__0,ImmT * ___ref___1,ImmT * ___ref___2) {
c_rt_lib0arg_val(___nl__0);
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
#line 535
c_rt_lib0move(&___nl__3, ptd_system_priv0get_function_def(___nl__0, ___ref___1, ___ref___2));
#line 536
c_rt_lib0move(&___nl__4, array0len(___nl__3));
#line 536
c_rt_lib0move(&___nl__5,___get_global_const(0));
#line 536
c_rt_lib0move(&___nl__4, c_rt_lib0num_eq(___nl__4, ___nl__5));
#line 536
c_rt_lib0clear(&___nl__5);
#line 536
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 536
if(c_rt_lib0check_true_native(___nl__4)){ goto label_14;}
#line 536
c_rt_lib0move(&___nl__5, tct0tct_im());
#line 536
c_rt_lib0clear(&___nl__0);
#line 536
c_rt_lib0clear(&___nl__3);
#line 536
c_rt_lib0clear(&___nl__4);
#line 536
return ___nl__5;
#line 536
c_rt_lib0clear(&___nl__5);
#line 536
goto label_14;
#line 536
label_14:
#line 536
c_rt_lib0clear(&___nl__4);
#line 537
c_rt_lib0move(&___nl__5,___get_global_const(0));
#line 537
c_rt_lib0move(&___nl__4, c_rt_lib0array_get(___nl__3, ___nl__5));
#line 537
c_rt_lib0clear(&___nl__5);
#line 537
c_rt_lib0copy(&___nl__3, ___nl__4);
#line 537
c_rt_lib0clear(&___nl__4);
#line 538
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(*___ref___1, ___get_global_const(1091)));
#line 538
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(132)));
#line 538
c_rt_lib0move(&___nl__4, hash0get_value(___nl__5, ___nl__6));
#line 538
c_rt_lib0clear(&___nl__6);
#line 538
c_rt_lib0clear(&___nl__5);
#line 539
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(1095)));
#line 539
c_rt_lib0move(&___nl__6, c_rt_lib0priv_is(___nl__5, ___get_global_const(45)));
#line 539
if(c_rt_lib0check_true_native(___nl__6)){ goto label_34;}
#line 541
c_rt_lib0move(&___nl__6, c_rt_lib0priv_is(___nl__5, ___get_global_const(46)));
#line 541
if(c_rt_lib0check_true_native(___nl__6)){ goto label_44;}
#line 541
c_rt_lib0move(&___nl__6,___get_global_const(91));
#line 541
c_rt_lib0move(&___nl__6, c_rt_lib0array_mk(2, ___nl__6, ___nl__5));
#line 541
nl_die_arg(___nl__6);
#line 539
label_34:
#line 539
c_rt_lib0move(&___nl__7, c_rt_lib0priv_as(___nl__5, ___get_global_const(45)));
#line 540
c_rt_lib0clear(&___nl__0);
#line 540
c_rt_lib0clear(&___nl__3);
#line 540
c_rt_lib0clear(&___nl__4);
#line 540
c_rt_lib0clear(&___nl__5);
#line 540
c_rt_lib0clear(&___nl__6);
#line 540
return ___nl__7;
#line 540
c_rt_lib0clear(&___nl__7);
#line 541
goto label_46;
#line 541
label_44:
#line 542
goto label_46;
#line 542
label_46:
#line 542
c_rt_lib0clear(&___nl__5);
#line 542
c_rt_lib0clear(&___nl__6);
#line 543
c_rt_lib0move(&___nl__5, tct0tct_im());
#line 544
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(201)));
#line 544
c_rt_lib0move(&___nl__6, ptd_parser0fun_def_to_ptd(___nl__7));
#line 544
c_rt_lib0clear(&___nl__7);
#line 544
c_rt_lib0move(&___nl__7, c_rt_lib0priv_is(___nl__6, ___get_global_const(47)));
#line 544
if(c_rt_lib0check_true_native(___nl__7)){ goto label_60;}
#line 546
c_rt_lib0move(&___nl__7, c_rt_lib0priv_is(___nl__6, ___get_global_const(48)));
#line 546
if(c_rt_lib0check_true_native(___nl__7)){ goto label_65;}
#line 546
c_rt_lib0move(&___nl__7,___get_global_const(91));
#line 546
c_rt_lib0move(&___nl__7, c_rt_lib0array_mk(2, ___nl__7, ___nl__6));
#line 546
nl_die_arg(___nl__7);
#line 544
label_60:
#line 544
c_rt_lib0move(&___nl__8, c_rt_lib0priv_as(___nl__6, ___get_global_const(47)));
#line 545
c_rt_lib0delete(ptd_system_priv0add_error(___ref___2, ___nl__8));
#line 545
c_rt_lib0clear(&___nl__8);
#line 546
goto label_70;
#line 546
label_65:
#line 546
c_rt_lib0move(&___nl__8, c_rt_lib0priv_as(___nl__6, ___get_global_const(48)));
#line 547
c_rt_lib0copy(&___nl__5, ___nl__8);
#line 547
c_rt_lib0clear(&___nl__8);
#line 548
goto label_70;
#line 548
label_70:
#line 548
c_rt_lib0clear(&___nl__6);
#line 548
c_rt_lib0clear(&___nl__7);
#line 549
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_arg(___get_global_const(45), ___nl__5));
#line 549
c_rt_lib0copy(&___nl__7, ___nl__6);
#line 549
c_rt_lib0hash_set_value_dec(&___nl__3, ___get_global_const(1095), ___nl__7);
#line 549
c_rt_lib0clear(&___nl__6);
#line 549
c_rt_lib0clear(&___nl__7);
#line 550
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(93)));
#line 550
c_rt_lib0delete(hash0set_value(&___nl__4, ___nl__6, ___nl__3));
#line 550
c_rt_lib0clear(&___nl__6);
#line 551
c_rt_lib0move(&___nl__6,___get_global_const(1091));
#line 551
c_rt_lib0move(&___nl__6, c_rt_lib0get_ref_hash(*___ref___1, ___nl__6));
#line 551
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(132)));
#line 551
c_rt_lib0delete(hash0set_value(&___nl__6, ___nl__7, ___nl__4));
#line 551
c_rt_lib0clear(&___nl__7);
#line 551
c_rt_lib0move(&___nl__7,___get_global_const(1091));
#line 551
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___1, ___nl__7, ___nl__6));
#line 551
c_rt_lib0clear(&___nl__7);
#line 551
c_rt_lib0clear(&___nl__6);
#line 552
c_rt_lib0clear(&___nl__0);
#line 552
c_rt_lib0clear(&___nl__3);
#line 552
c_rt_lib0clear(&___nl__4);
#line 552
return ___nl__5;
#line 552
c_rt_lib0clear(&___nl__3);
#line 552
c_rt_lib0clear(&___nl__4);
#line 552
c_rt_lib0clear(&___nl__5);
#line 552
c_rt_lib0clear(&___nl__0);
#line 552
return NULL;
}


static ImmT ___const__[1];
static int ___const_init__ = 1;
void ptd_system0__const__init(){
if(!___const_init__) nl_die();
___const_init__ = 0;
__const__f = &___const__[0];


for(int i=0;i<0;++i) ___const__[i] = NULL;
c_rt_lib0register_const(___const__, 0);
}
ImmT ptd_system_priv0__const__sim(int __nr) {
ImmT ret = NULL;
c_rt_lib0copy(&ret, ___const__[__nr]);
return ret;
}
ImmT ptd_system_priv0__const__sing(int __nr) {
if(___const__[__nr+0]==NULL) {
switch(__nr){
default:
	nl_die();
}}
ImmT ret = NULL;
c_rt_lib0copy(&ret, ___const__[__nr+0]);
return ret;
}
