
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
void ptd_system_priv0__const__init();
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
ptd_system_priv0__const__init();
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
#line 16
c_rt_lib0move(&___nl__2,___get_global_const(17));
#line 16
c_rt_lib0move(&___nl__2, c_rt_lib0get_ref_hash(*___ref___0, ___nl__2));
#line 16
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(710)));
#line 16
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(99)));
#line 16
c_rt_lib0move(&___nl__3, c_rt_lib0hash_mk(3, ___get_global_const(97), ___nl__1, ___get_global_const(98), ___nl__4, ___get_global_const(99), ___nl__5));
#line 16
c_rt_lib0clear(&___nl__4);
#line 16
c_rt_lib0clear(&___nl__5);
#line 16
c_rt_lib0delete(array0push(&___nl__2, ___nl__3));
#line 16
c_rt_lib0clear(&___nl__3);
#line 16
c_rt_lib0move(&___nl__3,___get_global_const(17));
#line 16
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__3, ___nl__2));
#line 16
c_rt_lib0clear(&___nl__3);
#line 16
c_rt_lib0clear(&___nl__2);
#line 16
c_rt_lib0clear(&___nl__1);
#line 16
return NULL;
}

ImmT ptd_system0is_known0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "ptd_system0is_known");
return ptd_system0is_known(_tab[0]);}
ImmT ptd_system0is_known(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
ptd_system_priv0__const__init();
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
#line 19
c_rt_lib0move(&___nl__2,___get_global_const(979));
#line 19
c_rt_lib0move(&___nl__1, ov0is(___nl__0, ___nl__2));
#line 19
c_rt_lib0clear(&___nl__2);
#line 19
if(c_rt_lib0check_true_native(___nl__1)){ goto label_1;}
#line 19
c_rt_lib0move(&___nl__2,___get_global_const(980));
#line 19
c_rt_lib0move(&___nl__1, ov0is(___nl__0, ___nl__2));
#line 19
c_rt_lib0clear(&___nl__2);
#line 19
label_1:
#line 19
c_rt_lib0clear(&___nl__0);
#line 19
return ___nl__1;
#line 19
c_rt_lib0clear(&___nl__1);
#line 19
c_rt_lib0clear(&___nl__0);
#line 19
return NULL;
}

ImmT ptd_system0is_equal0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 2, "ptd_system0is_equal");
return ptd_system0is_equal(_tab[0], _tab[1]);}
ImmT ptd_system0is_equal(ImmT ___nl__0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
ptd_system_priv0__const__init();
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
ImmT ___nl__9 = NULL;
ImmT ___nl__10 = NULL;
#line 22
c_rt_lib0move(&___nl__2, ov0get_element(___nl__0));
#line 22
c_rt_lib0move(&___nl__3, ov0get_element(___nl__1));
#line 22
c_rt_lib0move(&___nl__2, c_rt_lib0eq(___nl__2, ___nl__3));
#line 22
c_rt_lib0clear(&___nl__3);
#line 22
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 22
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 22
if(c_rt_lib0check_true_native(___nl__2)){ goto label_2;}
#line 22
c_rt_lib0move(&___nl__3, c_rt_lib0get_false());
#line 22
c_rt_lib0clear(&___nl__0);
#line 22
c_rt_lib0clear(&___nl__1);
#line 22
c_rt_lib0clear(&___nl__2);
#line 22
return ___nl__3;
#line 22
c_rt_lib0clear(&___nl__3);
#line 22
goto label_2;
#line 22
label_2:
#line 22
c_rt_lib0clear(&___nl__2);
#line 23
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__0, ___get_global_const(722)));
#line 23
if(c_rt_lib0check_true_native(___nl__2)){ goto label_4;}
#line 24
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__0, ___get_global_const(723)));
#line 24
if(c_rt_lib0check_true_native(___nl__2)){ goto label_5;}
#line 26
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__0, ___get_global_const(724)));
#line 26
if(c_rt_lib0check_true_native(___nl__2)){ goto label_6;}
#line 28
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__0, ___get_global_const(725)));
#line 28
if(c_rt_lib0check_true_native(___nl__2)){ goto label_7;}
#line 34
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__0, ___get_global_const(726)));
#line 34
if(c_rt_lib0check_true_native(___nl__2)){ goto label_8;}
#line 36
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__0, ___get_global_const(728)));
#line 36
if(c_rt_lib0check_true_native(___nl__2)){ goto label_9;}
#line 37
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__0, ___get_global_const(729)));
#line 37
if(c_rt_lib0check_true_native(___nl__2)){ goto label_10;}
#line 49
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__0, ___get_global_const(730)));
#line 49
if(c_rt_lib0check_true_native(___nl__2)){ goto label_11;}
#line 50
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__0, ___get_global_const(727)));
#line 50
if(c_rt_lib0check_true_native(___nl__2)){ goto label_12;}
#line 50
c_rt_lib0move(&___nl__2,___get_global_const(74));
#line 50
c_rt_lib0move(&___nl__2, c_rt_lib0array_mk(2, ___nl__2, ___nl__0));
#line 50
nl_die_arg(___nl__2);
#line 23
label_4:
#line 24
goto label_3;
#line 24
label_5:
#line 24
c_rt_lib0move(&___nl__3, c_rt_lib0priv_as(___nl__0, ___get_global_const(723)));
#line 25
c_rt_lib0copy(&___nl__5, ___nl__1);
#line 25
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__5, ___get_global_const(723)));
#line 25
c_rt_lib0move(&___nl__4, ptd_system0is_equal(___nl__3, ___nl__5));
#line 25
c_rt_lib0clear(&___nl__5);
#line 25
c_rt_lib0clear(&___nl__0);
#line 25
c_rt_lib0clear(&___nl__1);
#line 25
c_rt_lib0clear(&___nl__2);
#line 25
c_rt_lib0clear(&___nl__3);
#line 25
return ___nl__4;
#line 25
c_rt_lib0clear(&___nl__4);
#line 25
c_rt_lib0clear(&___nl__3);
#line 26
goto label_3;
#line 26
label_6:
#line 26
c_rt_lib0move(&___nl__3, c_rt_lib0priv_as(___nl__0, ___get_global_const(724)));
#line 27
c_rt_lib0copy(&___nl__5, ___nl__1);
#line 27
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__5, ___get_global_const(724)));
#line 27
c_rt_lib0move(&___nl__4, ptd_system0is_equal(___nl__3, ___nl__5));
#line 27
c_rt_lib0clear(&___nl__5);
#line 27
c_rt_lib0clear(&___nl__0);
#line 27
c_rt_lib0clear(&___nl__1);
#line 27
c_rt_lib0clear(&___nl__2);
#line 27
c_rt_lib0clear(&___nl__3);
#line 27
return ___nl__4;
#line 27
c_rt_lib0clear(&___nl__4);
#line 27
c_rt_lib0clear(&___nl__3);
#line 28
goto label_3;
#line 28
label_7:
#line 28
c_rt_lib0move(&___nl__3, c_rt_lib0priv_as(___nl__0, ___get_global_const(725)));
#line 29
c_rt_lib0copy(&___nl__5, ___nl__1);
#line 29
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__5, ___get_global_const(725)));
#line 29
c_rt_lib0move(&___nl__4, hash0size(___nl__5));
#line 29
c_rt_lib0clear(&___nl__5);
#line 29
c_rt_lib0move(&___nl__5, hash0size(___nl__3));
#line 29
c_rt_lib0move(&___nl__4, c_rt_lib0num_ne(___nl__4, ___nl__5));
#line 29
c_rt_lib0clear(&___nl__5);
#line 29
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 29
if(c_rt_lib0check_true_native(___nl__4)){ goto label_14;}
#line 29
c_rt_lib0move(&___nl__5, c_rt_lib0get_false());
#line 29
c_rt_lib0clear(&___nl__0);
#line 29
c_rt_lib0clear(&___nl__1);
#line 29
c_rt_lib0clear(&___nl__2);
#line 29
c_rt_lib0clear(&___nl__3);
#line 29
c_rt_lib0clear(&___nl__4);
#line 29
return ___nl__5;
#line 29
c_rt_lib0clear(&___nl__5);
#line 29
goto label_14;
#line 29
label_14:
#line 29
c_rt_lib0clear(&___nl__4);
#line 30
c_rt_lib0move(&___nl__6, c_rt_lib0init_iter(___nl__3));
#line 30
label_17:
#line 30
c_rt_lib0move(&___nl__4, c_rt_lib0is_end_hash(___nl__6));
#line 30
if(c_rt_lib0check_true_native(___nl__4)){ goto label_15;}
#line 30
c_rt_lib0move(&___nl__4, c_rt_lib0get_key_iter(___nl__6));
#line 30
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value(___nl__3, ___nl__4));
#line 31
c_rt_lib0copy(&___nl__8, ___nl__1);
#line 31
c_rt_lib0move(&___nl__8, c_rt_lib0priv_as(___nl__8, ___get_global_const(725)));
#line 31
c_rt_lib0move(&___nl__7, hash0has_key(___nl__8, ___nl__4));
#line 31
c_rt_lib0clear(&___nl__8);
#line 31
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 31
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 31
if(c_rt_lib0check_true_native(___nl__7)){ goto label_19;}
#line 31
c_rt_lib0move(&___nl__8, c_rt_lib0get_false());
#line 31
c_rt_lib0clear(&___nl__0);
#line 31
c_rt_lib0clear(&___nl__1);
#line 31
c_rt_lib0clear(&___nl__2);
#line 31
c_rt_lib0clear(&___nl__3);
#line 31
c_rt_lib0clear(&___nl__4);
#line 31
c_rt_lib0clear(&___nl__5);
#line 31
c_rt_lib0clear(&___nl__6);
#line 31
c_rt_lib0clear(&___nl__7);
#line 31
return ___nl__8;
#line 31
c_rt_lib0clear(&___nl__8);
#line 31
goto label_19;
#line 31
label_19:
#line 31
c_rt_lib0clear(&___nl__7);
#line 32
c_rt_lib0copy(&___nl__9, ___nl__1);
#line 32
c_rt_lib0move(&___nl__9, c_rt_lib0priv_as(___nl__9, ___get_global_const(725)));
#line 32
c_rt_lib0move(&___nl__8, hash0get_value(___nl__9, ___nl__4));
#line 32
c_rt_lib0clear(&___nl__9);
#line 32
c_rt_lib0move(&___nl__7, ptd_system0is_equal(___nl__5, ___nl__8));
#line 32
c_rt_lib0clear(&___nl__8);
#line 32
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 32
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 32
if(c_rt_lib0check_true_native(___nl__7)){ goto label_21;}
#line 32
c_rt_lib0move(&___nl__8, c_rt_lib0get_false());
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
c_rt_lib0clear(&___nl__5);
#line 32
c_rt_lib0clear(&___nl__6);
#line 32
c_rt_lib0clear(&___nl__7);
#line 32
return ___nl__8;
#line 32
c_rt_lib0clear(&___nl__8);
#line 32
goto label_21;
#line 32
label_21:
#line 32
c_rt_lib0clear(&___nl__7);
#line 33
c_rt_lib0move(&___nl__6, c_rt_lib0next_iter(___nl__6));
#line 33
goto label_17;
#line 33
label_15:
#line 33
c_rt_lib0clear(&___nl__4);
#line 33
c_rt_lib0clear(&___nl__5);
#line 33
c_rt_lib0clear(&___nl__6);
#line 33
c_rt_lib0clear(&___nl__3);
#line 34
goto label_3;
#line 34
label_8:
#line 34
c_rt_lib0move(&___nl__3, c_rt_lib0priv_as(___nl__0, ___get_global_const(726)));
#line 35
c_rt_lib0copy(&___nl__4, ___nl__1);
#line 35
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__4, ___get_global_const(726)));
#line 35
c_rt_lib0move(&___nl__4, c_rt_lib0eq(___nl__3, ___nl__4));
#line 35
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 35
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 35
if(c_rt_lib0check_true_native(___nl__4)){ goto label_23;}
#line 35
c_rt_lib0move(&___nl__5, c_rt_lib0get_false());
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
return ___nl__5;
#line 35
c_rt_lib0clear(&___nl__5);
#line 35
goto label_23;
#line 35
label_23:
#line 35
c_rt_lib0clear(&___nl__4);
#line 35
c_rt_lib0clear(&___nl__3);
#line 36
goto label_3;
#line 36
label_9:
#line 37
goto label_3;
#line 37
label_10:
#line 37
c_rt_lib0move(&___nl__3, c_rt_lib0priv_as(___nl__0, ___get_global_const(729)));
#line 38
c_rt_lib0copy(&___nl__5, ___nl__1);
#line 38
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__5, ___get_global_const(729)));
#line 38
c_rt_lib0move(&___nl__4, hash0size(___nl__5));
#line 38
c_rt_lib0clear(&___nl__5);
#line 38
c_rt_lib0move(&___nl__5, hash0size(___nl__3));
#line 38
c_rt_lib0move(&___nl__4, c_rt_lib0num_ne(___nl__4, ___nl__5));
#line 38
c_rt_lib0clear(&___nl__5);
#line 38
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 38
if(c_rt_lib0check_true_native(___nl__4)){ goto label_25;}
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
goto label_25;
#line 38
label_25:
#line 38
c_rt_lib0clear(&___nl__4);
#line 39
c_rt_lib0move(&___nl__6, c_rt_lib0init_iter(___nl__3));
#line 39
label_28:
#line 39
c_rt_lib0move(&___nl__4, c_rt_lib0is_end_hash(___nl__6));
#line 39
if(c_rt_lib0check_true_native(___nl__4)){ goto label_26;}
#line 39
c_rt_lib0move(&___nl__4, c_rt_lib0get_key_iter(___nl__6));
#line 39
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value(___nl__3, ___nl__4));
#line 40
c_rt_lib0copy(&___nl__8, ___nl__1);
#line 40
c_rt_lib0move(&___nl__8, c_rt_lib0priv_as(___nl__8, ___get_global_const(729)));
#line 40
c_rt_lib0move(&___nl__7, hash0has_key(___nl__8, ___nl__4));
#line 40
c_rt_lib0clear(&___nl__8);
#line 40
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 40
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 40
if(c_rt_lib0check_true_native(___nl__7)){ goto label_30;}
#line 40
c_rt_lib0move(&___nl__8, c_rt_lib0get_false());
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
c_rt_lib0clear(&___nl__6);
#line 40
c_rt_lib0clear(&___nl__7);
#line 40
return ___nl__8;
#line 40
c_rt_lib0clear(&___nl__8);
#line 40
goto label_30;
#line 40
label_30:
#line 40
c_rt_lib0clear(&___nl__7);
#line 41
c_rt_lib0copy(&___nl__8, ___nl__1);
#line 41
c_rt_lib0move(&___nl__8, c_rt_lib0priv_as(___nl__8, ___get_global_const(729)));
#line 41
c_rt_lib0move(&___nl__7, hash0get_value(___nl__8, ___nl__4));
#line 41
c_rt_lib0clear(&___nl__8);
#line 42
c_rt_lib0move(&___nl__10,___get_global_const(733));
#line 42
c_rt_lib0move(&___nl__8, ov0is(___nl__5, ___nl__10));
#line 42
c_rt_lib0clear(&___nl__10);
#line 42
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__8));
#line 42
if(c_rt_lib0check_true_native(___nl__9)){ goto label_33;}
#line 42
c_rt_lib0move(&___nl__10,___get_global_const(733));
#line 42
c_rt_lib0move(&___nl__8, ov0is(___nl__7, ___nl__10));
#line 42
c_rt_lib0clear(&___nl__10);
#line 42
label_33:
#line 42
c_rt_lib0clear(&___nl__9);
#line 42
c_rt_lib0move(&___nl__8, c_rt_lib0not(___nl__8));
#line 42
if(c_rt_lib0check_true_native(___nl__8)){ goto label_32;}
#line 42
c_rt_lib0clear(&___nl__7);
#line 42
c_rt_lib0clear(&___nl__8);
#line 42
goto label_27;
#line 42
goto label_32;
#line 42
label_32:
#line 42
c_rt_lib0clear(&___nl__8);
#line 43
c_rt_lib0move(&___nl__10,___get_global_const(734));
#line 43
c_rt_lib0move(&___nl__8, ov0is(___nl__5, ___nl__10));
#line 43
c_rt_lib0clear(&___nl__10);
#line 43
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__8));
#line 43
if(c_rt_lib0check_true_native(___nl__9)){ goto label_36;}
#line 43
c_rt_lib0move(&___nl__10,___get_global_const(734));
#line 43
c_rt_lib0move(&___nl__8, ov0is(___nl__7, ___nl__10));
#line 43
c_rt_lib0clear(&___nl__10);
#line 43
label_36:
#line 43
c_rt_lib0clear(&___nl__9);
#line 43
c_rt_lib0move(&___nl__8, c_rt_lib0not(___nl__8));
#line 43
c_rt_lib0move(&___nl__8, c_rt_lib0not(___nl__8));
#line 43
if(c_rt_lib0check_true_native(___nl__8)){ goto label_35;}
#line 43
c_rt_lib0move(&___nl__9, c_rt_lib0get_false());
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
c_rt_lib0clear(&___nl__8);
#line 43
return ___nl__9;
#line 43
c_rt_lib0clear(&___nl__9);
#line 43
goto label_35;
#line 43
label_35:
#line 43
c_rt_lib0clear(&___nl__8);
#line 44
c_rt_lib0copy(&___nl__9, ___nl__7);
#line 44
c_rt_lib0move(&___nl__9, c_rt_lib0priv_as(___nl__9, ___get_global_const(734)));
#line 44
c_rt_lib0copy(&___nl__10, ___nl__5);
#line 44
c_rt_lib0move(&___nl__10, c_rt_lib0priv_as(___nl__10, ___get_global_const(734)));
#line 44
c_rt_lib0move(&___nl__8, ptd_system0is_equal(___nl__9, ___nl__10));
#line 44
c_rt_lib0clear(&___nl__10);
#line 44
c_rt_lib0clear(&___nl__9);
#line 44
c_rt_lib0move(&___nl__8, c_rt_lib0not(___nl__8));
#line 44
c_rt_lib0move(&___nl__8, c_rt_lib0not(___nl__8));
#line 44
if(c_rt_lib0check_true_native(___nl__8)){ goto label_38;}
#line 44
c_rt_lib0move(&___nl__9, c_rt_lib0get_false());
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
c_rt_lib0clear(&___nl__6);
#line 44
c_rt_lib0clear(&___nl__7);
#line 44
c_rt_lib0clear(&___nl__8);
#line 44
return ___nl__9;
#line 44
c_rt_lib0clear(&___nl__9);
#line 44
goto label_38;
#line 44
label_38:
#line 44
c_rt_lib0clear(&___nl__8);
#line 44
c_rt_lib0clear(&___nl__7);
#line 44
label_27:
#line 48
c_rt_lib0move(&___nl__6, c_rt_lib0next_iter(___nl__6));
#line 48
goto label_28;
#line 48
label_26:
#line 48
c_rt_lib0clear(&___nl__4);
#line 48
c_rt_lib0clear(&___nl__5);
#line 48
c_rt_lib0clear(&___nl__6);
#line 48
c_rt_lib0clear(&___nl__3);
#line 49
goto label_3;
#line 49
label_11:
#line 50
goto label_3;
#line 50
label_12:
#line 51
goto label_3;
#line 51
label_3:
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
ptd_system_priv0__const__init();
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
#line 56
c_rt_lib0move(&___nl__6, tct0tct_im());
#line 56
c_rt_lib0move(&___nl__7, tct0tct_im());
#line 56
c_rt_lib0move(&___nl__5, c_rt_lib0hash_mk(2, ___get_global_const(44), ___nl__6, ___get_global_const(43), ___nl__7));
#line 56
c_rt_lib0clear(&___nl__6);
#line 56
c_rt_lib0clear(&___nl__7);
#line 56
c_rt_lib0move(&___nl__4, tct0var(___nl__5));
#line 56
c_rt_lib0clear(&___nl__5);
#line 56
c_rt_lib0move(&___nl__3, ptd_system0is_accepted(___nl__0, ___nl__4, ___ref___1, ___ref___2));
#line 56
c_rt_lib0clear(&___nl__4);
#line 56
c_rt_lib0clear(&___nl__0);
#line 56
return ___nl__3;
#line 56
c_rt_lib0clear(&___nl__3);
#line 56
c_rt_lib0clear(&___nl__0);
#line 56
return NULL;
}

ImmT ptd_system0get_try_ensure_ok_type0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 3, "ptd_system0get_try_ensure_ok_type");
return ptd_system0get_try_ensure_ok_type(_tab[0], &_tab[1], &_tab[2]);}
ImmT ptd_system0get_try_ensure_ok_type(ImmT ___nl__0,ImmT * ___ref___1,ImmT * ___ref___2) {
c_rt_lib0arg_val(___nl__0);
ptd_system_priv0__const__init();
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
#line 60
c_rt_lib0move(&___nl__3, ptd_system0can_delete(___nl__0, ___ref___1, ___ref___2));
#line 60
c_rt_lib0copy(&___nl__0, ___nl__3);
#line 60
c_rt_lib0clear(&___nl__3);
#line 61
c_rt_lib0move(&___nl__3, ptd_system0is_try_ensure_type(___nl__0, ___ref___1, ___ref___2));
#line 61
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 61
if(c_rt_lib0check_true_native(___nl__3)){ goto label_2;}
#line 62
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(72)));
#line 62
c_rt_lib0move(&___nl__6,___get_global_const(722));
#line 62
c_rt_lib0move(&___nl__4, ov0is(___nl__5, ___nl__6));
#line 62
c_rt_lib0clear(&___nl__6);
#line 62
c_rt_lib0clear(&___nl__5);
#line 62
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 62
if(c_rt_lib0check_true_native(___nl__4)){ goto label_4;}
#line 62
c_rt_lib0move(&___nl__5, tct0tct_im());
#line 62
c_rt_lib0clear(&___nl__0);
#line 62
c_rt_lib0clear(&___nl__3);
#line 62
c_rt_lib0clear(&___nl__4);
#line 62
return ___nl__5;
#line 62
c_rt_lib0clear(&___nl__5);
#line 62
goto label_4;
#line 62
label_4:
#line 62
c_rt_lib0clear(&___nl__4);
#line 63
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(72)));
#line 63
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__5, ___get_global_const(729)));
#line 63
c_rt_lib0move(&___nl__6,___get_global_const(44));
#line 63
c_rt_lib0move(&___nl__4, hash0get_value(___nl__5, ___nl__6));
#line 63
c_rt_lib0clear(&___nl__6);
#line 63
c_rt_lib0clear(&___nl__5);
#line 64
c_rt_lib0move(&___nl__6,___get_global_const(733));
#line 64
c_rt_lib0move(&___nl__5, ov0is(___nl__4, ___nl__6));
#line 64
c_rt_lib0clear(&___nl__6);
#line 64
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 64
if(c_rt_lib0check_true_native(___nl__5)){ goto label_6;}
#line 64
c_rt_lib0move(&___nl__6, tct0empty());
#line 64
c_rt_lib0clear(&___nl__0);
#line 64
c_rt_lib0clear(&___nl__3);
#line 64
c_rt_lib0clear(&___nl__4);
#line 64
c_rt_lib0clear(&___nl__5);
#line 64
return ___nl__6;
#line 64
c_rt_lib0clear(&___nl__6);
#line 64
goto label_6;
#line 64
label_6:
#line 64
c_rt_lib0clear(&___nl__5);
#line 65
c_rt_lib0copy(&___nl__5, ___nl__4);
#line 65
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__5, ___get_global_const(734)));
#line 65
c_rt_lib0clear(&___nl__0);
#line 65
c_rt_lib0clear(&___nl__3);
#line 65
c_rt_lib0clear(&___nl__4);
#line 65
return ___nl__5;
#line 65
c_rt_lib0clear(&___nl__5);
#line 65
c_rt_lib0clear(&___nl__4);
#line 66
goto label_1;
#line 66
label_2:
#line 67
c_rt_lib0move(&___nl__4,___get_global_const(981));
#line 67
c_rt_lib0delete(ptd_system_priv0add_error(___ref___2, ___nl__4));
#line 67
c_rt_lib0clear(&___nl__4);
#line 68
c_rt_lib0move(&___nl__4, tct0tct_im());
#line 68
c_rt_lib0clear(&___nl__0);
#line 68
c_rt_lib0clear(&___nl__3);
#line 68
return ___nl__4;
#line 68
c_rt_lib0clear(&___nl__4);
#line 69
goto label_1;
#line 69
label_1:
#line 69
c_rt_lib0clear(&___nl__3);
#line 69
c_rt_lib0clear(&___nl__0);
#line 69
return NULL;
}

ImmT ptd_system0is_condition_type0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 3, "ptd_system0is_condition_type");
return ptd_system0is_condition_type(_tab[0], &_tab[1], &_tab[2]);}
ImmT ptd_system0is_condition_type(ImmT ___nl__0,ImmT * ___ref___1,ImmT * ___ref___2) {
c_rt_lib0arg_val(___nl__0);
ptd_system_priv0__const__init();
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
#line 74
c_rt_lib0move(&___nl__4, tct0bool());
#line 74
c_rt_lib0move(&___nl__3, ptd_system0is_accepted(___nl__0, ___nl__4, ___ref___1, ___ref___2));
#line 74
c_rt_lib0clear(&___nl__4);
#line 74
c_rt_lib0clear(&___nl__0);
#line 74
return ___nl__3;
#line 74
c_rt_lib0clear(&___nl__3);
#line 74
c_rt_lib0clear(&___nl__0);
#line 74
return NULL;
}

ImmT ptd_system0is_accepted0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 4, "ptd_system0is_accepted");
return ptd_system0is_accepted(_tab[0], _tab[1], &_tab[2], &_tab[3]);}
ImmT ptd_system0is_accepted(ImmT ___nl__0,ImmT ___nl__1,ImmT * ___ref___2,ImmT * ___ref___3) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
ptd_system_priv0__const__init();
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
#line 79
c_rt_lib0move(&___nl__4, ptd_system0is_accepted_info(___nl__0, ___nl__1, ___ref___2, ___ref___3));
#line 80
c_rt_lib0move(&___nl__6,___get_global_const(44));
#line 80
c_rt_lib0move(&___nl__5, ov0is(___nl__4, ___nl__6));
#line 80
c_rt_lib0clear(&___nl__6);
#line 80
c_rt_lib0clear(&___nl__0);
#line 80
c_rt_lib0clear(&___nl__1);
#line 80
c_rt_lib0clear(&___nl__4);
#line 80
return ___nl__5;
#line 80
c_rt_lib0clear(&___nl__5);
#line 80
c_rt_lib0clear(&___nl__4);
#line 80
c_rt_lib0clear(&___nl__0);
#line 80
c_rt_lib0clear(&___nl__1);
#line 80
return NULL;
}

ImmT ptd_system0is_accepted_info0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 4, "ptd_system0is_accepted_info");
return ptd_system0is_accepted_info(_tab[0], _tab[1], &_tab[2], &_tab[3]);}
ImmT ptd_system0is_accepted_info(ImmT ___nl__0,ImmT ___nl__1,ImmT * ___ref___2,ImmT * ___ref___3) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
ptd_system_priv0__const__init();
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
ImmT ___nl__9 = NULL;
#line 84
c_rt_lib0move(&___nl__4, ptd_system0can_delete(___nl__0, ___ref___2, ___ref___3));
#line 84
c_rt_lib0copy(&___nl__0, ___nl__4);
#line 84
c_rt_lib0clear(&___nl__4);
#line 85
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(72)));
#line 85
c_rt_lib0move(&___nl__6,___get_global_const(722));
#line 85
c_rt_lib0move(&___nl__4, ov0is(___nl__5, ___nl__6));
#line 85
c_rt_lib0clear(&___nl__6);
#line 85
c_rt_lib0clear(&___nl__5);
#line 85
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 85
if(c_rt_lib0check_true_native(___nl__4)){ goto label_2;}
#line 85
c_rt_lib0move(&___nl__5, c_rt_lib0ov_mk_none(___get_global_const(44)));
#line 85
c_rt_lib0clear(&___nl__0);
#line 85
c_rt_lib0clear(&___nl__1);
#line 85
c_rt_lib0clear(&___nl__4);
#line 85
return ___nl__5;
#line 85
c_rt_lib0clear(&___nl__5);
#line 85
goto label_2;
#line 85
label_2:
#line 85
c_rt_lib0clear(&___nl__4);
#line 86
c_rt_lib0move(&___nl__5,___get_global_const(725));
#line 86
c_rt_lib0move(&___nl__4, ov0is(___nl__1, ___nl__5));
#line 86
c_rt_lib0clear(&___nl__5);
#line 86
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 86
if(c_rt_lib0check_true_native(___nl__4)){ goto label_4;}
#line 87
c_rt_lib0move(&___nl__8,___get_global_const(725));
#line 87
c_rt_lib0move(&___nl__7, ov0as(___nl__1, ___nl__8));
#line 87
c_rt_lib0clear(&___nl__8);
#line 87
c_rt_lib0move(&___nl__5, hash0size(___nl__7));
#line 87
c_rt_lib0clear(&___nl__7);
#line 87
c_rt_lib0move(&___nl__7,___get_global_const(1));
#line 87
c_rt_lib0move(&___nl__5, c_rt_lib0num_eq(___nl__5, ___nl__7));
#line 87
c_rt_lib0clear(&___nl__7);
#line 87
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__5));
#line 87
if(c_rt_lib0check_true_native(___nl__6)){ goto label_7;}
#line 87
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(72)));
#line 87
c_rt_lib0move(&___nl__8,___get_global_const(725));
#line 87
c_rt_lib0move(&___nl__5, ov0is(___nl__7, ___nl__8));
#line 87
c_rt_lib0clear(&___nl__8);
#line 87
c_rt_lib0clear(&___nl__7);
#line 87
label_7:
#line 87
c_rt_lib0clear(&___nl__6);
#line 87
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 87
if(c_rt_lib0check_true_native(___nl__5)){ goto label_6;}
#line 87
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_none(___get_global_const(44)));
#line 87
c_rt_lib0clear(&___nl__0);
#line 87
c_rt_lib0clear(&___nl__1);
#line 87
c_rt_lib0clear(&___nl__4);
#line 87
c_rt_lib0clear(&___nl__5);
#line 87
return ___nl__6;
#line 87
c_rt_lib0clear(&___nl__6);
#line 87
goto label_6;
#line 87
label_6:
#line 87
c_rt_lib0clear(&___nl__5);
#line 88
goto label_8;
#line 88
label_4:
#line 88
c_rt_lib0move(&___nl__5,___get_global_const(729));
#line 88
c_rt_lib0move(&___nl__4, ov0is(___nl__1, ___nl__5));
#line 88
c_rt_lib0clear(&___nl__5);
#line 88
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 88
if(c_rt_lib0check_true_native(___nl__4)){ goto label_8;}
#line 89
c_rt_lib0move(&___nl__8,___get_global_const(729));
#line 89
c_rt_lib0move(&___nl__7, ov0as(___nl__1, ___nl__8));
#line 89
c_rt_lib0clear(&___nl__8);
#line 89
c_rt_lib0move(&___nl__5, hash0size(___nl__7));
#line 89
c_rt_lib0clear(&___nl__7);
#line 89
c_rt_lib0move(&___nl__7,___get_global_const(1));
#line 89
c_rt_lib0move(&___nl__5, c_rt_lib0num_eq(___nl__5, ___nl__7));
#line 89
c_rt_lib0clear(&___nl__7);
#line 89
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__5));
#line 89
if(c_rt_lib0check_true_native(___nl__6)){ goto label_11;}
#line 89
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(72)));
#line 89
c_rt_lib0move(&___nl__8,___get_global_const(729));
#line 89
c_rt_lib0move(&___nl__5, ov0is(___nl__7, ___nl__8));
#line 89
c_rt_lib0clear(&___nl__8);
#line 89
c_rt_lib0clear(&___nl__7);
#line 89
label_11:
#line 89
c_rt_lib0clear(&___nl__6);
#line 89
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 89
if(c_rt_lib0check_true_native(___nl__5)){ goto label_10;}
#line 89
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_none(___get_global_const(44)));
#line 89
c_rt_lib0clear(&___nl__0);
#line 89
c_rt_lib0clear(&___nl__1);
#line 89
c_rt_lib0clear(&___nl__4);
#line 89
c_rt_lib0clear(&___nl__5);
#line 89
return ___nl__6;
#line 89
c_rt_lib0clear(&___nl__6);
#line 89
goto label_10;
#line 89
label_10:
#line 89
c_rt_lib0clear(&___nl__5);
#line 90
goto label_8;
#line 90
label_8:
#line 90
c_rt_lib0clear(&___nl__4);
#line 91
c_rt_lib0move(&___nl__5,___get_global_const(2));
#line 91
c_rt_lib0move(&___nl__6, c_rt_lib0hash_mk(0));
#line 91
c_rt_lib0move(&___nl__7, c_rt_lib0hash_mk(0));
#line 91
c_rt_lib0move(&___nl__8, c_rt_lib0get_false());
#line 91
c_rt_lib0move(&___nl__9, c_rt_lib0get_false());
#line 91
c_rt_lib0move(&___nl__4, c_rt_lib0hash_mk(5, ___get_global_const(982), ___nl__5, ___get_global_const(197), ___nl__6, ___get_global_const(198), ___nl__7, ___get_global_const(983), ___nl__8, ___get_global_const(984), ___nl__9));
#line 91
c_rt_lib0clear(&___nl__5);
#line 91
c_rt_lib0clear(&___nl__6);
#line 91
c_rt_lib0clear(&___nl__7);
#line 91
c_rt_lib0clear(&___nl__8);
#line 91
c_rt_lib0clear(&___nl__9);
#line 92
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(72)));
#line 92
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(39)));
#line 92
c_rt_lib0move(&___nl__5, ptd_system_priv0check_assignment_info(___nl__1, ___nl__6, ___nl__4, ___nl__7, ___ref___2, ___ref___3));
#line 92
c_rt_lib0clear(&___nl__7);
#line 92
c_rt_lib0clear(&___nl__6);
#line 92
c_rt_lib0clear(&___nl__0);
#line 92
c_rt_lib0clear(&___nl__1);
#line 92
c_rt_lib0clear(&___nl__4);
#line 92
return ___nl__5;
#line 92
c_rt_lib0clear(&___nl__5);
#line 92
c_rt_lib0clear(&___nl__4);
#line 92
c_rt_lib0clear(&___nl__0);
#line 92
c_rt_lib0clear(&___nl__1);
#line 92
return NULL;
}

ImmT ptd_system_priv0add_ref_name(ImmT * ___ref___0,ImmT * ___ref___1,ImmT * ___ref___2,ImmT ___nl__3,ImmT * ___ref___4,ImmT * ___ref___5) {
c_rt_lib0arg_val(___nl__3);
ptd_system_priv0__const__init();
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
#line 98
c_rt_lib0copy(&___nl__6, *___ref___0);
#line 98
c_rt_lib0move(&___nl__6, c_rt_lib0priv_as(___nl__6, ___get_global_const(726)));
#line 99
c_rt_lib0move(&___nl__7, hash0has_key(*___ref___1, ___nl__6));
#line 99
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 99
if(c_rt_lib0check_true_native(___nl__7)){ goto label_2;}
#line 99
c_rt_lib0move(&___nl__8, hash0get_value(*___ref___1, ___nl__6));
#line 99
c_rt_lib0copy(___ref___2, ___nl__8);
#line 99
c_rt_lib0clear(&___nl__8);
#line 99
goto label_2;
#line 99
label_2:
#line 99
c_rt_lib0clear(&___nl__7);
#line 100
c_rt_lib0delete(array0push(___ref___2, ___nl__3));
#line 101
c_rt_lib0delete(hash0set_value(___ref___1, ___nl__6, *___ref___2));
#line 102
c_rt_lib0move(&___nl__7, ptd_system0get_ref_type(___nl__6, ___ref___4, ___ref___5));
#line 102
c_rt_lib0copy(___ref___0, ___nl__7);
#line 102
c_rt_lib0clear(&___nl__7);
#line 103
c_rt_lib0clear(&___nl__3);
#line 103
return ___nl__6;
#line 103
c_rt_lib0clear(&___nl__6);
#line 103
c_rt_lib0clear(&___nl__3);
#line 103
return NULL;
}

ImmT ptd_system_priv0is_cycle_ref(ImmT * ___ref___0,ImmT * ___ref___1,ImmT * ___ref___2,ImmT ___nl__3,ImmT ___nl__4,ImmT * ___ref___5,ImmT * ___ref___6) {
c_rt_lib0arg_val(___nl__3);
c_rt_lib0arg_val(___nl__4);
ptd_system_priv0__const__init();
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
ImmT ___nl__9 = NULL;
ImmT ___nl__10 = NULL;
ImmT ___nl__11 = NULL;
ImmT ___nl__12 = NULL;
ImmT ___nl__13 = NULL;
ImmT ___nl__14 = NULL;
#line 108
c_rt_lib0move(&___nl__9,___get_global_const(726));
#line 108
c_rt_lib0move(&___nl__7, ov0is(*___ref___0, ___nl__9));
#line 108
c_rt_lib0clear(&___nl__9);
#line 108
c_rt_lib0move(&___nl__8, c_rt_lib0not(___nl__7));
#line 108
if(c_rt_lib0check_true_native(___nl__8)){ goto label_3;}
#line 108
c_rt_lib0move(&___nl__9,___get_global_const(726));
#line 108
c_rt_lib0move(&___nl__7, ov0is(*___ref___1, ___nl__9));
#line 108
c_rt_lib0clear(&___nl__9);
#line 108
label_3:
#line 108
c_rt_lib0clear(&___nl__8);
#line 108
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 108
if(c_rt_lib0check_true_native(___nl__7)){ goto label_2;}
#line 109
c_rt_lib0move(&___nl__9,___get_global_const(726));
#line 109
c_rt_lib0move(&___nl__8, ov0as(*___ref___0, ___nl__9));
#line 109
c_rt_lib0clear(&___nl__9);
#line 109
c_rt_lib0move(&___nl__10,___get_global_const(726));
#line 109
c_rt_lib0move(&___nl__9, ov0as(*___ref___1, ___nl__10));
#line 109
c_rt_lib0clear(&___nl__10);
#line 109
c_rt_lib0move(&___nl__8, c_rt_lib0eq(___nl__8, ___nl__9));
#line 109
c_rt_lib0clear(&___nl__9);
#line 109
c_rt_lib0move(&___nl__8, c_rt_lib0not(___nl__8));
#line 109
if(c_rt_lib0check_true_native(___nl__8)){ goto label_5;}
#line 109
c_rt_lib0move(&___nl__9, c_rt_lib0get_true());
#line 109
c_rt_lib0clear(&___nl__3);
#line 109
c_rt_lib0clear(&___nl__4);
#line 109
c_rt_lib0clear(&___nl__7);
#line 109
c_rt_lib0clear(&___nl__8);
#line 109
return ___nl__9;
#line 109
c_rt_lib0clear(&___nl__9);
#line 109
goto label_5;
#line 109
label_5:
#line 109
c_rt_lib0clear(&___nl__8);
#line 110
c_rt_lib0copy(&___nl__8, ___nl__3);
#line 110
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__8));
#line 110
if(c_rt_lib0check_true_native(___nl__9)){ goto label_8;}
#line 110
c_rt_lib0move(&___nl__11, c_rt_lib0ov_mk_none(___get_global_const(985)));
#line 110
c_rt_lib0move(&___nl__10, ptd_system_priv0check_assignment_info(*___ref___0, *___ref___1, *___ref___2, ___nl__11, ___ref___5, ___ref___6));
#line 110
c_rt_lib0clear(&___nl__11);
#line 110
c_rt_lib0move(&___nl__11,___get_global_const(44));
#line 110
c_rt_lib0move(&___nl__8, ov0is(___nl__10, ___nl__11));
#line 110
c_rt_lib0clear(&___nl__11);
#line 110
c_rt_lib0clear(&___nl__10);
#line 110
label_8:
#line 110
c_rt_lib0clear(&___nl__9);
#line 110
c_rt_lib0move(&___nl__8, c_rt_lib0not(___nl__8));
#line 110
if(c_rt_lib0check_true_native(___nl__8)){ goto label_7;}
#line 110
c_rt_lib0move(&___nl__9, c_rt_lib0get_true());
#line 110
c_rt_lib0clear(&___nl__3);
#line 110
c_rt_lib0clear(&___nl__4);
#line 110
c_rt_lib0clear(&___nl__7);
#line 110
c_rt_lib0clear(&___nl__8);
#line 110
return ___nl__9;
#line 110
c_rt_lib0clear(&___nl__9);
#line 110
goto label_7;
#line 110
label_7:
#line 110
c_rt_lib0clear(&___nl__8);
#line 111
goto label_2;
#line 111
label_2:
#line 111
c_rt_lib0clear(&___nl__7);
#line 113
c_rt_lib0move(&___nl__7, c_rt_lib0array_mk(0));
#line 114
c_rt_lib0move(&___nl__8, c_rt_lib0array_mk(0));
#line 115
label_10:
#line 115
c_rt_lib0move(&___nl__10,___get_global_const(726));
#line 115
c_rt_lib0move(&___nl__9, ov0is(*___ref___1, ___nl__10));
#line 115
c_rt_lib0clear(&___nl__10);
#line 115
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__9));
#line 115
if(c_rt_lib0check_true_native(___nl__9)){ goto label_9;}
#line 116
c_rt_lib0move(&___nl__11,___get_global_const(197));
#line 116
c_rt_lib0move(&___nl__11, c_rt_lib0get_ref_hash(*___ref___2, ___nl__11));
#line 116
c_rt_lib0move(&___nl__12, c_rt_lib0hash_get_value_dec(*___ref___2, ___get_global_const(982)));
#line 116
c_rt_lib0move(&___nl__10, ptd_system_priv0add_ref_name(___ref___1, &___nl__11, &___nl__8, ___nl__12, ___ref___5, ___ref___6));
#line 116
c_rt_lib0clear(&___nl__12);
#line 116
c_rt_lib0move(&___nl__12,___get_global_const(197));
#line 116
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___2, ___nl__12, ___nl__11));
#line 116
c_rt_lib0clear(&___nl__12);
#line 116
c_rt_lib0clear(&___nl__11);
#line 117
c_rt_lib0move(&___nl__11, c_rt_lib0hash_get_value_dec(*___ref___2, ___get_global_const(983)));
#line 117
c_rt_lib0move(&___nl__13, c_rt_lib0not(___nl__11));
#line 117
if(c_rt_lib0check_true_native(___nl__13)){ goto label_14;}
#line 117
c_rt_lib0move(&___nl__11, array0len(___nl__8));
#line 117
c_rt_lib0move(&___nl__14,___get_global_const(2));
#line 117
c_rt_lib0move(&___nl__11, c_rt_lib0num_eq(___nl__11, ___nl__14));
#line 117
c_rt_lib0clear(&___nl__14);
#line 117
label_14:
#line 117
c_rt_lib0clear(&___nl__13);
#line 117
c_rt_lib0move(&___nl__12, c_rt_lib0not(___nl__11));
#line 117
if(c_rt_lib0check_true_native(___nl__12)){ goto label_13;}
#line 117
c_rt_lib0copy(&___nl__11, ___nl__4);
#line 117
label_13:
#line 117
c_rt_lib0clear(&___nl__12);
#line 117
c_rt_lib0move(&___nl__11, c_rt_lib0not(___nl__11));
#line 117
if(c_rt_lib0check_true_native(___nl__11)){ goto label_12;}
#line 117
c_rt_lib0delete(ptd_system_priv0add_delete(___nl__10, ___ref___5, ___ref___6));
#line 117
goto label_12;
#line 117
label_12:
#line 117
c_rt_lib0clear(&___nl__11);
#line 117
c_rt_lib0clear(&___nl__10);
#line 118
goto label_10;
#line 118
label_9:
#line 118
c_rt_lib0clear(&___nl__9);
#line 119
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(*___ref___2, ___get_global_const(984)));
#line 119
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__9));
#line 119
if(c_rt_lib0check_true_native(___nl__9)){ goto label_16;}
#line 120
c_rt_lib0move(&___nl__11,___get_global_const(722));
#line 120
c_rt_lib0move(&___nl__10, ov0is(*___ref___1, ___nl__11));
#line 120
c_rt_lib0clear(&___nl__11);
#line 120
c_rt_lib0move(&___nl__10, c_rt_lib0not(___nl__10));
#line 120
if(c_rt_lib0check_true_native(___nl__10)){ goto label_18;}
#line 121
c_rt_lib0move(&___nl__11, c_rt_lib0hash_get_value_dec(*___ref___2, ___get_global_const(983)));
#line 121
c_rt_lib0move(&___nl__11, c_rt_lib0not(___nl__11));
#line 121
if(c_rt_lib0check_true_native(___nl__11)){ goto label_20;}
#line 121
c_rt_lib0move(&___nl__12, c_rt_lib0ov_mk_none(___get_global_const(130)));
#line 121
c_rt_lib0move(&___nl__13, c_rt_lib0hash_get_value_dec(*___ref___2, ___get_global_const(198)));
#line 121
c_rt_lib0delete(ptd_system_priv0walk_on_type(*___ref___0, ___nl__12, ___nl__13, ___ref___5, ___ref___6));
#line 121
c_rt_lib0clear(&___nl__13);
#line 121
c_rt_lib0clear(&___nl__12);
#line 121
goto label_20;
#line 121
label_20:
#line 121
c_rt_lib0clear(&___nl__11);
#line 122
c_rt_lib0move(&___nl__11, c_rt_lib0get_true());
#line 122
c_rt_lib0clear(&___nl__3);
#line 122
c_rt_lib0clear(&___nl__4);
#line 122
c_rt_lib0clear(&___nl__7);
#line 122
c_rt_lib0clear(&___nl__8);
#line 122
c_rt_lib0clear(&___nl__9);
#line 122
c_rt_lib0clear(&___nl__10);
#line 122
return ___nl__11;
#line 122
c_rt_lib0clear(&___nl__11);
#line 123
goto label_18;
#line 123
label_18:
#line 123
c_rt_lib0clear(&___nl__10);
#line 124
goto label_16;
#line 124
label_16:
#line 124
c_rt_lib0clear(&___nl__9);
#line 125
label_22:
#line 125
c_rt_lib0move(&___nl__10,___get_global_const(726));
#line 125
c_rt_lib0move(&___nl__9, ov0is(*___ref___0, ___nl__10));
#line 125
c_rt_lib0clear(&___nl__10);
#line 125
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__9));
#line 125
if(c_rt_lib0check_true_native(___nl__9)){ goto label_21;}
#line 126
c_rt_lib0move(&___nl__11,___get_global_const(198));
#line 126
c_rt_lib0move(&___nl__11, c_rt_lib0get_ref_hash(*___ref___2, ___nl__11));
#line 126
c_rt_lib0move(&___nl__12, c_rt_lib0hash_get_value_dec(*___ref___2, ___get_global_const(982)));
#line 126
c_rt_lib0move(&___nl__10, ptd_system_priv0add_ref_name(___ref___0, &___nl__11, &___nl__7, ___nl__12, ___ref___5, ___ref___6));
#line 126
c_rt_lib0clear(&___nl__12);
#line 126
c_rt_lib0move(&___nl__12,___get_global_const(198));
#line 126
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___2, ___nl__12, ___nl__11));
#line 126
c_rt_lib0clear(&___nl__12);
#line 126
c_rt_lib0clear(&___nl__11);
#line 127
c_rt_lib0move(&___nl__11, c_rt_lib0hash_get_value_dec(*___ref___2, ___get_global_const(983)));
#line 127
c_rt_lib0move(&___nl__12, c_rt_lib0not(___nl__11));
#line 127
if(c_rt_lib0check_true_native(___nl__12)){ goto label_25;}
#line 127
c_rt_lib0move(&___nl__11, array0len(___nl__7));
#line 127
c_rt_lib0move(&___nl__13,___get_global_const(2));
#line 127
c_rt_lib0move(&___nl__11, c_rt_lib0num_eq(___nl__11, ___nl__13));
#line 127
c_rt_lib0clear(&___nl__13);
#line 127
label_25:
#line 127
c_rt_lib0clear(&___nl__12);
#line 127
c_rt_lib0move(&___nl__11, c_rt_lib0not(___nl__11));
#line 127
if(c_rt_lib0check_true_native(___nl__11)){ goto label_24;}
#line 127
c_rt_lib0delete(ptd_system_priv0add_create(___nl__10, ___ref___5, ___ref___6));
#line 127
goto label_24;
#line 127
label_24:
#line 127
c_rt_lib0clear(&___nl__11);
#line 127
c_rt_lib0clear(&___nl__10);
#line 128
goto label_22;
#line 128
label_21:
#line 128
c_rt_lib0clear(&___nl__9);
#line 130
c_rt_lib0move(&___nl__9,___get_global_const(1));
#line 131
c_rt_lib0move(&___nl__10,___get_global_const(1));
#line 131
label_27:
#line 131
c_rt_lib0move(&___nl__11, array0len(___nl__7));
#line 131
c_rt_lib0move(&___nl__13,___get_global_const(2));
#line 131
c_rt_lib0move(&___nl__11, c_rt_lib0sub_mod(___nl__11, ___nl__13));
#line 131
c_rt_lib0clear(&___nl__13);
#line 131
c_rt_lib0move(&___nl__11, c_rt_lib0lt(___nl__10, ___nl__11));
#line 131
c_rt_lib0move(&___nl__12, c_rt_lib0not(___nl__11));
#line 131
if(c_rt_lib0check_true_native(___nl__12)){ goto label_29;}
#line 131
c_rt_lib0move(&___nl__11, array0len(___nl__8));
#line 131
c_rt_lib0move(&___nl__13,___get_global_const(1));
#line 131
c_rt_lib0move(&___nl__11, c_rt_lib0gt(___nl__11, ___nl__13));
#line 131
c_rt_lib0clear(&___nl__13);
#line 131
label_29:
#line 131
c_rt_lib0clear(&___nl__12);
#line 131
c_rt_lib0move(&___nl__11, c_rt_lib0not(___nl__11));
#line 131
if(c_rt_lib0check_true_native(___nl__11)){ goto label_26;}
#line 132
label_31:
#line 132
c_rt_lib0move(&___nl__12, c_rt_lib0array_get(___nl__8, ___nl__9));
#line 132
c_rt_lib0move(&___nl__13, c_rt_lib0array_get(___nl__7, ___nl__10));
#line 132
c_rt_lib0move(&___nl__12, c_rt_lib0lt(___nl__12, ___nl__13));
#line 132
c_rt_lib0clear(&___nl__13);
#line 132
c_rt_lib0move(&___nl__12, c_rt_lib0not(___nl__12));
#line 132
if(c_rt_lib0check_true_native(___nl__12)){ goto label_30;}
#line 133
c_rt_lib0move(&___nl__13,___get_global_const(2));
#line 133
c_rt_lib0move(&___nl__9, c_rt_lib0add_mod(___nl__9, ___nl__13));
#line 133
c_rt_lib0clear(&___nl__13);
#line 134
goto label_31;
#line 134
label_30:
#line 134
c_rt_lib0clear(&___nl__12);
#line 136
c_rt_lib0move(&___nl__12, c_rt_lib0array_get(___nl__8, ___nl__9));
#line 136
c_rt_lib0move(&___nl__13, c_rt_lib0array_get(___nl__7, ___nl__10));
#line 136
c_rt_lib0move(&___nl__12, c_rt_lib0num_eq(___nl__12, ___nl__13));
#line 136
c_rt_lib0clear(&___nl__13);
#line 136
c_rt_lib0move(&___nl__12, c_rt_lib0not(___nl__12));
#line 136
if(c_rt_lib0check_true_native(___nl__12)){ goto label_33;}
#line 136
c_rt_lib0move(&___nl__13, c_rt_lib0get_true());
#line 136
c_rt_lib0clear(&___nl__3);
#line 136
c_rt_lib0clear(&___nl__4);
#line 136
c_rt_lib0clear(&___nl__7);
#line 136
c_rt_lib0clear(&___nl__8);
#line 136
c_rt_lib0clear(&___nl__9);
#line 136
c_rt_lib0clear(&___nl__10);
#line 136
c_rt_lib0clear(&___nl__11);
#line 136
c_rt_lib0clear(&___nl__12);
#line 136
return ___nl__13;
#line 136
c_rt_lib0clear(&___nl__13);
#line 136
goto label_33;
#line 136
label_33:
#line 136
c_rt_lib0clear(&___nl__12);
#line 136
c_rt_lib0move(&___nl__12,___get_global_const(2));
#line 136
c_rt_lib0move(&___nl__10, c_rt_lib0add_mod(___nl__10, ___nl__12));
#line 136
c_rt_lib0clear(&___nl__12);
#line 137
goto label_27;
#line 137
label_26:
#line 137
c_rt_lib0clear(&___nl__10);
#line 137
c_rt_lib0clear(&___nl__11);
#line 138
c_rt_lib0move(&___nl__10,___get_global_const(2));
#line 138
c_rt_lib0move(&___nl__11,___get_global_const(982));
#line 138
c_rt_lib0move(&___nl__11, c_rt_lib0get_ref_hash(*___ref___2, ___nl__11));
#line 138
c_rt_lib0move(&___nl__11, c_rt_lib0add_mod(___nl__11, ___nl__10));
#line 138
c_rt_lib0move(&___nl__12,___get_global_const(982));
#line 138
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___2, ___nl__12, ___nl__11));
#line 138
c_rt_lib0clear(&___nl__12);
#line 138
c_rt_lib0clear(&___nl__10);
#line 138
c_rt_lib0clear(&___nl__11);
#line 139
c_rt_lib0move(&___nl__10, c_rt_lib0get_false());
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
return ___nl__10;
#line 139
c_rt_lib0clear(&___nl__10);
#line 139
c_rt_lib0clear(&___nl__7);
#line 139
c_rt_lib0clear(&___nl__8);
#line 139
c_rt_lib0clear(&___nl__9);
#line 139
c_rt_lib0clear(&___nl__3);
#line 139
c_rt_lib0clear(&___nl__4);
#line 139
return NULL;
}

ImmT ptd_system0cross_type0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 4, "ptd_system0cross_type");
return ptd_system0cross_type(_tab[0], _tab[1], &_tab[2], &_tab[3]);}
ImmT ptd_system0cross_type(ImmT ___nl__0,ImmT ___nl__1,ImmT * ___ref___2,ImmT * ___ref___3) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
ptd_system_priv0__const__init();
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
ImmT ___nl__9 = NULL;
#line 144
c_rt_lib0move(&___nl__5,___get_global_const(2));
#line 144
c_rt_lib0move(&___nl__6, c_rt_lib0hash_mk(0));
#line 144
c_rt_lib0move(&___nl__7, c_rt_lib0hash_mk(0));
#line 144
c_rt_lib0move(&___nl__8, c_rt_lib0get_false());
#line 144
c_rt_lib0move(&___nl__9, c_rt_lib0get_false());
#line 144
c_rt_lib0move(&___nl__4, c_rt_lib0hash_mk(5, ___get_global_const(982), ___nl__5, ___get_global_const(197), ___nl__6, ___get_global_const(198), ___nl__7, ___get_global_const(983), ___nl__8, ___get_global_const(984), ___nl__9));
#line 144
c_rt_lib0clear(&___nl__5);
#line 144
c_rt_lib0clear(&___nl__6);
#line 144
c_rt_lib0clear(&___nl__7);
#line 144
c_rt_lib0clear(&___nl__8);
#line 144
c_rt_lib0clear(&___nl__9);
#line 145
c_rt_lib0move(&___nl__5, ptd_system_priv0cross_type(___nl__0, ___nl__1, ___nl__4, ___ref___2, ___ref___3));
#line 145
c_rt_lib0clear(&___nl__0);
#line 145
c_rt_lib0clear(&___nl__1);
#line 145
c_rt_lib0clear(&___nl__4);
#line 145
return ___nl__5;
#line 145
c_rt_lib0clear(&___nl__5);
#line 145
c_rt_lib0clear(&___nl__4);
#line 145
c_rt_lib0clear(&___nl__0);
#line 145
c_rt_lib0clear(&___nl__1);
#line 145
return NULL;
}

ImmT ptd_system_priv0cross_type(ImmT ___nl__0,ImmT ___nl__1,ImmT ___nl__2,ImmT * ___ref___3,ImmT * ___ref___4) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
c_rt_lib0arg_val(___nl__2);
ptd_system_priv0__const__init();
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
#line 149
c_rt_lib0move(&___nl__6,___get_global_const(722));
#line 149
c_rt_lib0move(&___nl__5, ov0is(___nl__1, ___nl__6));
#line 149
c_rt_lib0clear(&___nl__6);
#line 149
if(c_rt_lib0check_true_native(___nl__5)){ goto label_3;}
#line 149
c_rt_lib0move(&___nl__6,___get_global_const(722));
#line 149
c_rt_lib0move(&___nl__5, ov0is(___nl__0, ___nl__6));
#line 149
c_rt_lib0clear(&___nl__6);
#line 149
label_3:
#line 149
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 149
if(c_rt_lib0check_true_native(___nl__5)){ goto label_2;}
#line 149
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_none(___get_global_const(722)));
#line 149
c_rt_lib0clear(&___nl__0);
#line 149
c_rt_lib0clear(&___nl__1);
#line 149
c_rt_lib0clear(&___nl__2);
#line 149
c_rt_lib0clear(&___nl__5);
#line 149
return ___nl__6;
#line 149
c_rt_lib0clear(&___nl__6);
#line 149
goto label_2;
#line 149
label_2:
#line 149
c_rt_lib0clear(&___nl__5);
#line 150
c_rt_lib0move(&___nl__6, c_rt_lib0get_true());
#line 150
c_rt_lib0move(&___nl__7, c_rt_lib0get_false());
#line 150
c_rt_lib0move(&___nl__5, ptd_system_priv0is_cycle_ref(&___nl__0, &___nl__1, &___nl__2, ___nl__6, ___nl__7, ___ref___3, ___ref___4));
#line 150
c_rt_lib0clear(&___nl__7);
#line 150
c_rt_lib0clear(&___nl__6);
#line 150
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 150
if(c_rt_lib0check_true_native(___nl__5)){ goto label_5;}
#line 151
c_rt_lib0clear(&___nl__1);
#line 151
c_rt_lib0clear(&___nl__2);
#line 151
c_rt_lib0clear(&___nl__5);
#line 151
return ___nl__0;
#line 152
goto label_5;
#line 152
label_5:
#line 152
c_rt_lib0clear(&___nl__5);
#line 153
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(982)));
#line 153
c_rt_lib0move(&___nl__6,___get_global_const(986));
#line 153
c_rt_lib0move(&___nl__5, c_rt_lib0num_eq(___nl__5, ___nl__6));
#line 153
c_rt_lib0clear(&___nl__6);
#line 153
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 153
if(c_rt_lib0check_true_native(___nl__5)){ goto label_7;}
#line 154
c_rt_lib0move(&___nl__6,___get_global_const(987));
#line 154
c_rt_lib0delete(ptd_system_priv0add_error(___ref___4, ___nl__6));
#line 154
c_rt_lib0clear(&___nl__6);
#line 155
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_none(___get_global_const(722)));
#line 155
c_rt_lib0clear(&___nl__0);
#line 155
c_rt_lib0clear(&___nl__1);
#line 155
c_rt_lib0clear(&___nl__2);
#line 155
c_rt_lib0clear(&___nl__5);
#line 155
return ___nl__6;
#line 155
c_rt_lib0clear(&___nl__6);
#line 156
goto label_7;
#line 156
label_7:
#line 156
c_rt_lib0clear(&___nl__5);
#line 157
c_rt_lib0move(&___nl__6,___get_global_const(730));
#line 157
c_rt_lib0move(&___nl__5, ov0is(___nl__1, ___nl__6));
#line 157
c_rt_lib0clear(&___nl__6);
#line 157
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 157
if(c_rt_lib0check_true_native(___nl__5)){ goto label_9;}
#line 157
c_rt_lib0clear(&___nl__1);
#line 157
c_rt_lib0clear(&___nl__2);
#line 157
c_rt_lib0clear(&___nl__5);
#line 157
return ___nl__0;
#line 157
goto label_9;
#line 157
label_9:
#line 157
c_rt_lib0clear(&___nl__5);
#line 158
c_rt_lib0move(&___nl__5, c_rt_lib0priv_is(___nl__0, ___get_global_const(730)));
#line 158
if(c_rt_lib0check_true_native(___nl__5)){ goto label_11;}
#line 160
c_rt_lib0move(&___nl__5, c_rt_lib0priv_is(___nl__0, ___get_global_const(722)));
#line 160
if(c_rt_lib0check_true_native(___nl__5)){ goto label_12;}
#line 162
c_rt_lib0move(&___nl__5, c_rt_lib0priv_is(___nl__0, ___get_global_const(728)));
#line 162
if(c_rt_lib0check_true_native(___nl__5)){ goto label_13;}
#line 164
c_rt_lib0move(&___nl__5, c_rt_lib0priv_is(___nl__0, ___get_global_const(726)));
#line 164
if(c_rt_lib0check_true_native(___nl__5)){ goto label_14;}
#line 166
c_rt_lib0move(&___nl__5, c_rt_lib0priv_is(___nl__0, ___get_global_const(727)));
#line 166
if(c_rt_lib0check_true_native(___nl__5)){ goto label_15;}
#line 168
c_rt_lib0move(&___nl__5, c_rt_lib0priv_is(___nl__0, ___get_global_const(723)));
#line 168
if(c_rt_lib0check_true_native(___nl__5)){ goto label_16;}
#line 173
c_rt_lib0move(&___nl__5, c_rt_lib0priv_is(___nl__0, ___get_global_const(729)));
#line 173
if(c_rt_lib0check_true_native(___nl__5)){ goto label_17;}
#line 213
c_rt_lib0move(&___nl__5, c_rt_lib0priv_is(___nl__0, ___get_global_const(725)));
#line 213
if(c_rt_lib0check_true_native(___nl__5)){ goto label_18;}
#line 239
c_rt_lib0move(&___nl__5, c_rt_lib0priv_is(___nl__0, ___get_global_const(724)));
#line 239
if(c_rt_lib0check_true_native(___nl__5)){ goto label_19;}
#line 239
c_rt_lib0move(&___nl__5,___get_global_const(74));
#line 239
c_rt_lib0move(&___nl__5, c_rt_lib0array_mk(2, ___nl__5, ___nl__0));
#line 239
nl_die_arg(___nl__5);
#line 158
label_11:
#line 159
c_rt_lib0clear(&___nl__0);
#line 159
c_rt_lib0clear(&___nl__2);
#line 159
c_rt_lib0clear(&___nl__5);
#line 159
return ___nl__1;
#line 160
goto label_10;
#line 160
label_12:
#line 161
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_none(___get_global_const(722)));
#line 161
c_rt_lib0clear(&___nl__0);
#line 161
c_rt_lib0clear(&___nl__1);
#line 161
c_rt_lib0clear(&___nl__2);
#line 161
c_rt_lib0clear(&___nl__5);
#line 161
return ___nl__6;
#line 161
c_rt_lib0clear(&___nl__6);
#line 162
goto label_10;
#line 162
label_13:
#line 163
c_rt_lib0move(&___nl__7,___get_global_const(728));
#line 163
c_rt_lib0move(&___nl__6, ov0is(___nl__1, ___nl__7));
#line 163
c_rt_lib0clear(&___nl__7);
#line 163
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 163
if(c_rt_lib0check_true_native(___nl__6)){ goto label_21;}
#line 163
c_rt_lib0move(&___nl__7, c_rt_lib0ov_mk_none(___get_global_const(728)));
#line 163
c_rt_lib0clear(&___nl__0);
#line 163
c_rt_lib0clear(&___nl__1);
#line 163
c_rt_lib0clear(&___nl__2);
#line 163
c_rt_lib0clear(&___nl__5);
#line 163
c_rt_lib0clear(&___nl__6);
#line 163
return ___nl__7;
#line 163
c_rt_lib0clear(&___nl__7);
#line 163
goto label_21;
#line 163
label_21:
#line 163
c_rt_lib0clear(&___nl__6);
#line 164
goto label_10;
#line 164
label_14:
#line 164
c_rt_lib0move(&___nl__6, c_rt_lib0priv_as(___nl__0, ___get_global_const(726)));
#line 165
c_rt_lib0move(&___nl__7, c_rt_lib0array_mk(0));
#line 165
nl_die_arg(___nl__7);
#line 165
c_rt_lib0clear(&___nl__7);
#line 165
c_rt_lib0clear(&___nl__6);
#line 166
goto label_10;
#line 166
label_15:
#line 167
c_rt_lib0move(&___nl__6, c_rt_lib0array_mk(0));
#line 167
nl_die_arg(___nl__6);
#line 167
c_rt_lib0clear(&___nl__6);
#line 168
goto label_10;
#line 168
label_16:
#line 168
c_rt_lib0move(&___nl__6, c_rt_lib0priv_as(___nl__0, ___get_global_const(723)));
#line 169
c_rt_lib0move(&___nl__8,___get_global_const(723));
#line 169
c_rt_lib0move(&___nl__7, ov0is(___nl__1, ___nl__8));
#line 169
c_rt_lib0clear(&___nl__8);
#line 169
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 169
if(c_rt_lib0check_true_native(___nl__7)){ goto label_23;}
#line 170
c_rt_lib0copy(&___nl__10, ___nl__1);
#line 170
c_rt_lib0move(&___nl__10, c_rt_lib0priv_as(___nl__10, ___get_global_const(723)));
#line 170
c_rt_lib0move(&___nl__9, ptd_system_priv0cross_type(___nl__6, ___nl__10, ___nl__2, ___ref___3, ___ref___4));
#line 170
c_rt_lib0clear(&___nl__10);
#line 170
c_rt_lib0move(&___nl__8, tct0arr(___nl__9));
#line 170
c_rt_lib0clear(&___nl__9);
#line 170
c_rt_lib0clear(&___nl__0);
#line 170
c_rt_lib0clear(&___nl__1);
#line 170
c_rt_lib0clear(&___nl__2);
#line 170
c_rt_lib0clear(&___nl__5);
#line 170
c_rt_lib0clear(&___nl__6);
#line 170
c_rt_lib0clear(&___nl__7);
#line 170
return ___nl__8;
#line 170
c_rt_lib0clear(&___nl__8);
#line 171
goto label_23;
#line 171
label_23:
#line 171
c_rt_lib0clear(&___nl__7);
#line 171
c_rt_lib0clear(&___nl__6);
#line 173
goto label_10;
#line 173
label_17:
#line 173
c_rt_lib0move(&___nl__6, c_rt_lib0priv_as(___nl__0, ___get_global_const(729)));
#line 174
c_rt_lib0copy(&___nl__7, ___nl__6);
#line 175
c_rt_lib0move(&___nl__9,___get_global_const(729));
#line 175
c_rt_lib0move(&___nl__8, ov0is(___nl__1, ___nl__9));
#line 175
c_rt_lib0clear(&___nl__9);
#line 175
c_rt_lib0move(&___nl__8, c_rt_lib0not(___nl__8));
#line 175
if(c_rt_lib0check_true_native(___nl__8)){ goto label_25;}
#line 176
c_rt_lib0copy(&___nl__9, ___nl__1);
#line 176
c_rt_lib0move(&___nl__9, c_rt_lib0priv_as(___nl__9, ___get_global_const(729)));
#line 177
c_rt_lib0move(&___nl__12, c_rt_lib0init_iter(___nl__6));
#line 177
label_28:
#line 177
c_rt_lib0move(&___nl__10, c_rt_lib0is_end_hash(___nl__12));
#line 177
if(c_rt_lib0check_true_native(___nl__10)){ goto label_26;}
#line 177
c_rt_lib0move(&___nl__10, c_rt_lib0get_key_iter(___nl__12));
#line 177
c_rt_lib0move(&___nl__11, c_rt_lib0hash_get_value(___nl__6, ___nl__10));
#line 178
c_rt_lib0move(&___nl__13, hash0has_key(___nl__9, ___nl__10));
#line 178
c_rt_lib0move(&___nl__13, c_rt_lib0not(___nl__13));
#line 178
if(c_rt_lib0check_true_native(___nl__13)){ goto label_30;}
#line 179
c_rt_lib0move(&___nl__14, hash0get_value(___nl__9, ___nl__10));
#line 180
c_rt_lib0move(&___nl__15, c_rt_lib0priv_is(___nl__14, ___get_global_const(734)));
#line 180
if(c_rt_lib0check_true_native(___nl__15)){ goto label_32;}
#line 186
c_rt_lib0move(&___nl__15, c_rt_lib0priv_is(___nl__14, ___get_global_const(733)));
#line 186
if(c_rt_lib0check_true_native(___nl__15)){ goto label_33;}
#line 186
c_rt_lib0move(&___nl__15,___get_global_const(74));
#line 186
c_rt_lib0move(&___nl__15, c_rt_lib0array_mk(2, ___nl__15, ___nl__14));
#line 186
nl_die_arg(___nl__15);
#line 180
label_32:
#line 180
c_rt_lib0move(&___nl__16, c_rt_lib0priv_as(___nl__14, ___get_global_const(734)));
#line 181
c_rt_lib0move(&___nl__17, c_rt_lib0priv_is(___nl__11, ___get_global_const(734)));
#line 181
if(c_rt_lib0check_true_native(___nl__17)){ goto label_35;}
#line 183
c_rt_lib0move(&___nl__17, c_rt_lib0priv_is(___nl__11, ___get_global_const(733)));
#line 183
if(c_rt_lib0check_true_native(___nl__17)){ goto label_36;}
#line 183
c_rt_lib0move(&___nl__17,___get_global_const(74));
#line 183
c_rt_lib0move(&___nl__17, c_rt_lib0array_mk(2, ___nl__17, ___nl__11));
#line 183
nl_die_arg(___nl__17);
#line 181
label_35:
#line 181
c_rt_lib0move(&___nl__18, c_rt_lib0priv_as(___nl__11, ___get_global_const(734)));
#line 182
c_rt_lib0move(&___nl__19, ptd_system_priv0cross_type(___nl__16, ___nl__18, ___nl__2, ___ref___3, ___ref___4));
#line 182
c_rt_lib0delete(hash0set_value(&___nl__7, ___nl__10, ___nl__19));
#line 182
c_rt_lib0clear(&___nl__19);
#line 182
c_rt_lib0clear(&___nl__18);
#line 183
goto label_34;
#line 183
label_36:
#line 184
c_rt_lib0move(&___nl__18, c_rt_lib0ov_mk_none(___get_global_const(722)));
#line 184
c_rt_lib0clear(&___nl__0);
#line 184
c_rt_lib0clear(&___nl__1);
#line 184
c_rt_lib0clear(&___nl__2);
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
#line 184
c_rt_lib0clear(&___nl__11);
#line 184
c_rt_lib0clear(&___nl__12);
#line 184
c_rt_lib0clear(&___nl__13);
#line 184
c_rt_lib0clear(&___nl__14);
#line 184
c_rt_lib0clear(&___nl__15);
#line 184
c_rt_lib0clear(&___nl__16);
#line 184
c_rt_lib0clear(&___nl__17);
#line 184
return ___nl__18;
#line 184
c_rt_lib0clear(&___nl__18);
#line 185
goto label_34;
#line 185
label_34:
#line 185
c_rt_lib0clear(&___nl__17);
#line 185
c_rt_lib0clear(&___nl__16);
#line 186
goto label_31;
#line 186
label_33:
#line 187
c_rt_lib0move(&___nl__16, c_rt_lib0priv_is(___nl__11, ___get_global_const(734)));
#line 187
if(c_rt_lib0check_true_native(___nl__16)){ goto label_38;}
#line 189
c_rt_lib0move(&___nl__16, c_rt_lib0priv_is(___nl__11, ___get_global_const(733)));
#line 189
if(c_rt_lib0check_true_native(___nl__16)){ goto label_39;}
#line 189
c_rt_lib0move(&___nl__16,___get_global_const(74));
#line 189
c_rt_lib0move(&___nl__16, c_rt_lib0array_mk(2, ___nl__16, ___nl__11));
#line 189
nl_die_arg(___nl__16);
#line 187
label_38:
#line 187
c_rt_lib0move(&___nl__17, c_rt_lib0priv_as(___nl__11, ___get_global_const(734)));
#line 188
c_rt_lib0move(&___nl__18, c_rt_lib0ov_mk_none(___get_global_const(722)));
#line 188
c_rt_lib0clear(&___nl__0);
#line 188
c_rt_lib0clear(&___nl__1);
#line 188
c_rt_lib0clear(&___nl__2);
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
#line 188
c_rt_lib0clear(&___nl__11);
#line 188
c_rt_lib0clear(&___nl__12);
#line 188
c_rt_lib0clear(&___nl__13);
#line 188
c_rt_lib0clear(&___nl__14);
#line 188
c_rt_lib0clear(&___nl__15);
#line 188
c_rt_lib0clear(&___nl__16);
#line 188
c_rt_lib0clear(&___nl__17);
#line 188
return ___nl__18;
#line 188
c_rt_lib0clear(&___nl__18);
#line 188
c_rt_lib0clear(&___nl__17);
#line 189
goto label_37;
#line 189
label_39:
#line 190
c_rt_lib0move(&___nl__17, tct0none());
#line 190
c_rt_lib0delete(hash0set_value(&___nl__7, ___nl__10, ___nl__17));
#line 190
c_rt_lib0clear(&___nl__17);
#line 191
goto label_37;
#line 191
label_37:
#line 191
c_rt_lib0clear(&___nl__16);
#line 192
goto label_31;
#line 192
label_31:
#line 192
c_rt_lib0clear(&___nl__15);
#line 192
c_rt_lib0clear(&___nl__14);
#line 193
goto label_29;
#line 193
label_30:
#line 194
c_rt_lib0move(&___nl__14, c_rt_lib0priv_is(___nl__11, ___get_global_const(734)));
#line 194
if(c_rt_lib0check_true_native(___nl__14)){ goto label_41;}
#line 196
c_rt_lib0move(&___nl__14, c_rt_lib0priv_is(___nl__11, ___get_global_const(733)));
#line 196
if(c_rt_lib0check_true_native(___nl__14)){ goto label_42;}
#line 196
c_rt_lib0move(&___nl__14,___get_global_const(74));
#line 196
c_rt_lib0move(&___nl__14, c_rt_lib0array_mk(2, ___nl__14, ___nl__11));
#line 196
nl_die_arg(___nl__14);
#line 194
label_41:
#line 194
c_rt_lib0move(&___nl__15, c_rt_lib0priv_as(___nl__11, ___get_global_const(734)));
#line 195
c_rt_lib0delete(hash0set_value(&___nl__7, ___nl__10, ___nl__15));
#line 195
c_rt_lib0clear(&___nl__15);
#line 196
goto label_40;
#line 196
label_42:
#line 197
c_rt_lib0move(&___nl__15, tct0none());
#line 197
c_rt_lib0delete(hash0set_value(&___nl__7, ___nl__10, ___nl__15));
#line 197
c_rt_lib0clear(&___nl__15);
#line 198
goto label_40;
#line 198
label_40:
#line 198
c_rt_lib0clear(&___nl__14);
#line 199
goto label_29;
#line 199
label_29:
#line 199
c_rt_lib0clear(&___nl__13);
#line 201
c_rt_lib0move(&___nl__12, c_rt_lib0next_iter(___nl__12));
#line 201
goto label_28;
#line 201
label_26:
#line 201
c_rt_lib0clear(&___nl__10);
#line 201
c_rt_lib0clear(&___nl__11);
#line 201
c_rt_lib0clear(&___nl__12);
#line 202
c_rt_lib0move(&___nl__12, c_rt_lib0init_iter(___nl__9));
#line 202
label_45:
#line 202
c_rt_lib0move(&___nl__10, c_rt_lib0is_end_hash(___nl__12));
#line 202
if(c_rt_lib0check_true_native(___nl__10)){ goto label_43;}
#line 202
c_rt_lib0move(&___nl__10, c_rt_lib0get_key_iter(___nl__12));
#line 202
c_rt_lib0move(&___nl__11, c_rt_lib0hash_get_value(___nl__9, ___nl__10));
#line 203
c_rt_lib0move(&___nl__13, hash0has_key(___nl__7, ___nl__10));
#line 203
c_rt_lib0move(&___nl__13, c_rt_lib0not(___nl__13));
#line 203
if(c_rt_lib0check_true_native(___nl__13)){ goto label_47;}
#line 203
c_rt_lib0clear(&___nl__13);
#line 203
goto label_44;
#line 203
goto label_47;
#line 203
label_47:
#line 203
c_rt_lib0clear(&___nl__13);
#line 204
c_rt_lib0move(&___nl__13, c_rt_lib0priv_is(___nl__11, ___get_global_const(734)));
#line 204
if(c_rt_lib0check_true_native(___nl__13)){ goto label_49;}
#line 206
c_rt_lib0move(&___nl__13, c_rt_lib0priv_is(___nl__11, ___get_global_const(733)));
#line 206
if(c_rt_lib0check_true_native(___nl__13)){ goto label_50;}
#line 206
c_rt_lib0move(&___nl__13,___get_global_const(74));
#line 206
c_rt_lib0move(&___nl__13, c_rt_lib0array_mk(2, ___nl__13, ___nl__11));
#line 206
nl_die_arg(___nl__13);
#line 204
label_49:
#line 204
c_rt_lib0move(&___nl__14, c_rt_lib0priv_as(___nl__11, ___get_global_const(734)));
#line 205
c_rt_lib0delete(hash0set_value(&___nl__7, ___nl__10, ___nl__14));
#line 205
c_rt_lib0clear(&___nl__14);
#line 206
goto label_48;
#line 206
label_50:
#line 207
c_rt_lib0move(&___nl__14, tct0none());
#line 207
c_rt_lib0delete(hash0set_value(&___nl__7, ___nl__10, ___nl__14));
#line 207
c_rt_lib0clear(&___nl__14);
#line 208
goto label_48;
#line 208
label_48:
#line 208
c_rt_lib0clear(&___nl__13);
#line 208
label_44:
#line 209
c_rt_lib0move(&___nl__12, c_rt_lib0next_iter(___nl__12));
#line 209
goto label_45;
#line 209
label_43:
#line 209
c_rt_lib0clear(&___nl__10);
#line 209
c_rt_lib0clear(&___nl__11);
#line 209
c_rt_lib0clear(&___nl__12);
#line 210
c_rt_lib0move(&___nl__10, tct0var(___nl__7));
#line 210
c_rt_lib0clear(&___nl__0);
#line 210
c_rt_lib0clear(&___nl__1);
#line 210
c_rt_lib0clear(&___nl__2);
#line 210
c_rt_lib0clear(&___nl__5);
#line 210
c_rt_lib0clear(&___nl__6);
#line 210
c_rt_lib0clear(&___nl__7);
#line 210
c_rt_lib0clear(&___nl__8);
#line 210
c_rt_lib0clear(&___nl__9);
#line 210
return ___nl__10;
#line 210
c_rt_lib0clear(&___nl__10);
#line 210
c_rt_lib0clear(&___nl__9);
#line 211
goto label_25;
#line 211
label_25:
#line 211
c_rt_lib0clear(&___nl__8);
#line 211
c_rt_lib0clear(&___nl__7);
#line 211
c_rt_lib0clear(&___nl__6);
#line 213
goto label_10;
#line 213
label_18:
#line 213
c_rt_lib0move(&___nl__6, c_rt_lib0priv_as(___nl__0, ___get_global_const(725)));
#line 214
c_rt_lib0move(&___nl__8,___get_global_const(725));
#line 214
c_rt_lib0move(&___nl__7, ov0is(___nl__1, ___nl__8));
#line 214
c_rt_lib0clear(&___nl__8);
#line 214
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 214
if(c_rt_lib0check_true_native(___nl__7)){ goto label_52;}
#line 215
c_rt_lib0copy(&___nl__8, ___nl__1);
#line 215
c_rt_lib0move(&___nl__8, c_rt_lib0priv_as(___nl__8, ___get_global_const(725)));
#line 216
c_rt_lib0move(&___nl__9, c_rt_lib0get_false());
#line 217
c_rt_lib0move(&___nl__12, c_rt_lib0init_iter(___nl__6));
#line 217
label_55:
#line 217
c_rt_lib0move(&___nl__10, c_rt_lib0is_end_hash(___nl__12));
#line 217
if(c_rt_lib0check_true_native(___nl__10)){ goto label_53;}
#line 217
c_rt_lib0move(&___nl__10, c_rt_lib0get_key_iter(___nl__12));
#line 217
c_rt_lib0move(&___nl__11, c_rt_lib0hash_get_value(___nl__6, ___nl__10));
#line 218
c_rt_lib0move(&___nl__13, hash0has_key(___nl__8, ___nl__10));
#line 218
c_rt_lib0move(&___nl__13, c_rt_lib0not(___nl__13));
#line 218
c_rt_lib0move(&___nl__13, c_rt_lib0not(___nl__13));
#line 218
if(c_rt_lib0check_true_native(___nl__13)){ goto label_57;}
#line 218
c_rt_lib0move(&___nl__14, c_rt_lib0get_true());
#line 218
c_rt_lib0copy(&___nl__9, ___nl__14);
#line 218
c_rt_lib0clear(&___nl__14);
#line 218
goto label_57;
#line 218
label_57:
#line 218
c_rt_lib0clear(&___nl__13);
#line 219
c_rt_lib0move(&___nl__12, c_rt_lib0next_iter(___nl__12));
#line 219
goto label_55;
#line 219
label_53:
#line 219
c_rt_lib0clear(&___nl__10);
#line 219
c_rt_lib0clear(&___nl__11);
#line 219
c_rt_lib0clear(&___nl__12);
#line 220
c_rt_lib0move(&___nl__12, c_rt_lib0init_iter(___nl__8));
#line 220
label_60:
#line 220
c_rt_lib0move(&___nl__10, c_rt_lib0is_end_hash(___nl__12));
#line 220
if(c_rt_lib0check_true_native(___nl__10)){ goto label_58;}
#line 220
c_rt_lib0move(&___nl__10, c_rt_lib0get_key_iter(___nl__12));
#line 220
c_rt_lib0move(&___nl__11, c_rt_lib0hash_get_value(___nl__8, ___nl__10));
#line 221
c_rt_lib0move(&___nl__13, hash0has_key(___nl__6, ___nl__10));
#line 221
c_rt_lib0move(&___nl__13, c_rt_lib0not(___nl__13));
#line 221
c_rt_lib0move(&___nl__13, c_rt_lib0not(___nl__13));
#line 221
if(c_rt_lib0check_true_native(___nl__13)){ goto label_62;}
#line 221
c_rt_lib0move(&___nl__14, c_rt_lib0get_true());
#line 221
c_rt_lib0copy(&___nl__9, ___nl__14);
#line 221
c_rt_lib0clear(&___nl__14);
#line 221
goto label_62;
#line 221
label_62:
#line 221
c_rt_lib0clear(&___nl__13);
#line 222
c_rt_lib0move(&___nl__12, c_rt_lib0next_iter(___nl__12));
#line 222
goto label_60;
#line 222
label_58:
#line 222
c_rt_lib0clear(&___nl__10);
#line 222
c_rt_lib0clear(&___nl__11);
#line 222
c_rt_lib0clear(&___nl__12);
#line 223
c_rt_lib0copy(&___nl__10, ___nl__9);
#line 223
c_rt_lib0move(&___nl__10, c_rt_lib0not(___nl__10));
#line 223
if(c_rt_lib0check_true_native(___nl__10)){ goto label_64;}
#line 224
c_rt_lib0move(&___nl__11, ptd_system0rec_to_hash(___nl__0, ___nl__2, ___ref___3, ___ref___4));
#line 225
c_rt_lib0move(&___nl__12, ptd_system0rec_to_hash(___nl__1, ___nl__2, ___ref___3, ___ref___4));
#line 226
c_rt_lib0move(&___nl__14, ptd_system_priv0cross_type(___nl__11, ___nl__12, ___nl__2, ___ref___3, ___ref___4));
#line 226
c_rt_lib0move(&___nl__13, tct0hash(___nl__14));
#line 226
c_rt_lib0clear(&___nl__14);
#line 226
c_rt_lib0clear(&___nl__0);
#line 226
c_rt_lib0clear(&___nl__1);
#line 226
c_rt_lib0clear(&___nl__2);
#line 226
c_rt_lib0clear(&___nl__5);
#line 226
c_rt_lib0clear(&___nl__6);
#line 226
c_rt_lib0clear(&___nl__7);
#line 226
c_rt_lib0clear(&___nl__8);
#line 226
c_rt_lib0clear(&___nl__9);
#line 226
c_rt_lib0clear(&___nl__10);
#line 226
c_rt_lib0clear(&___nl__11);
#line 226
c_rt_lib0clear(&___nl__12);
#line 226
return ___nl__13;
#line 226
c_rt_lib0clear(&___nl__13);
#line 226
c_rt_lib0clear(&___nl__11);
#line 226
c_rt_lib0clear(&___nl__12);
#line 227
goto label_63;
#line 227
label_64:
#line 228
c_rt_lib0move(&___nl__11, c_rt_lib0hash_mk(0));
#line 229
c_rt_lib0move(&___nl__14, c_rt_lib0init_iter(___nl__6));
#line 229
label_67:
#line 229
c_rt_lib0move(&___nl__12, c_rt_lib0is_end_hash(___nl__14));
#line 229
if(c_rt_lib0check_true_native(___nl__12)){ goto label_65;}
#line 229
c_rt_lib0move(&___nl__12, c_rt_lib0get_key_iter(___nl__14));
#line 229
c_rt_lib0move(&___nl__13, c_rt_lib0hash_get_value(___nl__6, ___nl__12));
#line 230
c_rt_lib0move(&___nl__16, hash0get_value(___nl__8, ___nl__12));
#line 230
c_rt_lib0move(&___nl__15, ptd_system_priv0cross_type(___nl__13, ___nl__16, ___nl__2, ___ref___3, ___ref___4));
#line 230
c_rt_lib0clear(&___nl__16);
#line 230
c_rt_lib0delete(hash0set_value(&___nl__11, ___nl__12, ___nl__15));
#line 230
c_rt_lib0clear(&___nl__15);
#line 231
c_rt_lib0move(&___nl__14, c_rt_lib0next_iter(___nl__14));
#line 231
goto label_67;
#line 231
label_65:
#line 231
c_rt_lib0clear(&___nl__12);
#line 231
c_rt_lib0clear(&___nl__13);
#line 231
c_rt_lib0clear(&___nl__14);
#line 232
c_rt_lib0move(&___nl__12, tct0rec(___nl__11));
#line 232
c_rt_lib0clear(&___nl__0);
#line 232
c_rt_lib0clear(&___nl__1);
#line 232
c_rt_lib0clear(&___nl__2);
#line 232
c_rt_lib0clear(&___nl__5);
#line 232
c_rt_lib0clear(&___nl__6);
#line 232
c_rt_lib0clear(&___nl__7);
#line 232
c_rt_lib0clear(&___nl__8);
#line 232
c_rt_lib0clear(&___nl__9);
#line 232
c_rt_lib0clear(&___nl__10);
#line 232
c_rt_lib0clear(&___nl__11);
#line 232
return ___nl__12;
#line 232
c_rt_lib0clear(&___nl__12);
#line 232
c_rt_lib0clear(&___nl__11);
#line 233
goto label_63;
#line 233
label_63:
#line 233
c_rt_lib0clear(&___nl__10);
#line 233
c_rt_lib0clear(&___nl__8);
#line 233
c_rt_lib0clear(&___nl__9);
#line 234
goto label_52;
#line 234
label_52:
#line 234
c_rt_lib0clear(&___nl__7);
#line 235
c_rt_lib0move(&___nl__8,___get_global_const(724));
#line 235
c_rt_lib0move(&___nl__7, ov0is(___nl__1, ___nl__8));
#line 235
c_rt_lib0clear(&___nl__8);
#line 235
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 235
if(c_rt_lib0check_true_native(___nl__7)){ goto label_69;}
#line 236
c_rt_lib0move(&___nl__8, ptd_system0rec_to_hash(___nl__0, ___nl__2, ___ref___3, ___ref___4));
#line 237
c_rt_lib0copy(&___nl__11, ___nl__1);
#line 237
c_rt_lib0move(&___nl__11, c_rt_lib0priv_as(___nl__11, ___get_global_const(724)));
#line 237
c_rt_lib0move(&___nl__10, ptd_system0cross_type(___nl__11, ___nl__8, ___ref___3, ___ref___4));
#line 237
c_rt_lib0clear(&___nl__11);
#line 237
c_rt_lib0move(&___nl__9, tct0hash(___nl__10));
#line 237
c_rt_lib0clear(&___nl__10);
#line 237
c_rt_lib0clear(&___nl__0);
#line 237
c_rt_lib0clear(&___nl__1);
#line 237
c_rt_lib0clear(&___nl__2);
#line 237
c_rt_lib0clear(&___nl__5);
#line 237
c_rt_lib0clear(&___nl__6);
#line 237
c_rt_lib0clear(&___nl__7);
#line 237
c_rt_lib0clear(&___nl__8);
#line 237
return ___nl__9;
#line 237
c_rt_lib0clear(&___nl__9);
#line 237
c_rt_lib0clear(&___nl__8);
#line 238
goto label_69;
#line 238
label_69:
#line 238
c_rt_lib0clear(&___nl__7);
#line 238
c_rt_lib0clear(&___nl__6);
#line 239
goto label_10;
#line 239
label_19:
#line 239
c_rt_lib0move(&___nl__6, c_rt_lib0priv_as(___nl__0, ___get_global_const(724)));
#line 240
c_rt_lib0move(&___nl__8,___get_global_const(724));
#line 240
c_rt_lib0move(&___nl__7, ov0is(___nl__1, ___nl__8));
#line 240
c_rt_lib0clear(&___nl__8);
#line 240
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 240
if(c_rt_lib0check_true_native(___nl__7)){ goto label_71;}
#line 241
c_rt_lib0copy(&___nl__10, ___nl__1);
#line 241
c_rt_lib0move(&___nl__10, c_rt_lib0priv_as(___nl__10, ___get_global_const(724)));
#line 241
c_rt_lib0move(&___nl__9, ptd_system_priv0cross_type(___nl__6, ___nl__10, ___nl__2, ___ref___3, ___ref___4));
#line 241
c_rt_lib0clear(&___nl__10);
#line 241
c_rt_lib0move(&___nl__8, tct0hash(___nl__9));
#line 241
c_rt_lib0clear(&___nl__9);
#line 241
c_rt_lib0clear(&___nl__0);
#line 241
c_rt_lib0clear(&___nl__1);
#line 241
c_rt_lib0clear(&___nl__2);
#line 241
c_rt_lib0clear(&___nl__5);
#line 241
c_rt_lib0clear(&___nl__6);
#line 241
c_rt_lib0clear(&___nl__7);
#line 241
return ___nl__8;
#line 241
c_rt_lib0clear(&___nl__8);
#line 242
goto label_71;
#line 242
label_71:
#line 242
c_rt_lib0clear(&___nl__7);
#line 243
c_rt_lib0move(&___nl__8,___get_global_const(725));
#line 243
c_rt_lib0move(&___nl__7, ov0is(___nl__1, ___nl__8));
#line 243
c_rt_lib0clear(&___nl__8);
#line 243
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 243
if(c_rt_lib0check_true_native(___nl__7)){ goto label_73;}
#line 244
c_rt_lib0move(&___nl__8, ptd_system0rec_to_hash(___nl__1, ___nl__2, ___ref___3, ___ref___4));
#line 245
c_rt_lib0move(&___nl__10, ptd_system0cross_type(___nl__6, ___nl__8, ___ref___3, ___ref___4));
#line 245
c_rt_lib0move(&___nl__9, tct0hash(___nl__10));
#line 245
c_rt_lib0clear(&___nl__10);
#line 245
c_rt_lib0clear(&___nl__0);
#line 245
c_rt_lib0clear(&___nl__1);
#line 245
c_rt_lib0clear(&___nl__2);
#line 245
c_rt_lib0clear(&___nl__5);
#line 245
c_rt_lib0clear(&___nl__6);
#line 245
c_rt_lib0clear(&___nl__7);
#line 245
c_rt_lib0clear(&___nl__8);
#line 245
return ___nl__9;
#line 245
c_rt_lib0clear(&___nl__9);
#line 245
c_rt_lib0clear(&___nl__8);
#line 246
goto label_73;
#line 246
label_73:
#line 246
c_rt_lib0clear(&___nl__7);
#line 246
c_rt_lib0clear(&___nl__6);
#line 247
goto label_10;
#line 247
label_10:
#line 247
c_rt_lib0clear(&___nl__5);
#line 248
c_rt_lib0move(&___nl__5, c_rt_lib0ov_mk_none(___get_global_const(722)));
#line 248
c_rt_lib0clear(&___nl__0);
#line 248
c_rt_lib0clear(&___nl__1);
#line 248
c_rt_lib0clear(&___nl__2);
#line 248
return ___nl__5;
#line 248
c_rt_lib0clear(&___nl__5);
#line 248
c_rt_lib0clear(&___nl__0);
#line 248
c_rt_lib0clear(&___nl__1);
#line 248
c_rt_lib0clear(&___nl__2);
#line 248
return NULL;
}

ImmT ptd_system0rec_to_hash0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 4, "ptd_system0rec_to_hash");
return ptd_system0rec_to_hash(_tab[0], _tab[1], &_tab[2], &_tab[3]);}
ImmT ptd_system0rec_to_hash(ImmT ___nl__0,ImmT ___nl__1,ImmT * ___ref___2,ImmT * ___ref___3) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
ptd_system_priv0__const__init();
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
ImmT ___nl__9 = NULL;
#line 251
c_rt_lib0move(&___nl__4, tct0empty());
#line 252
c_rt_lib0copy(&___nl__5, ___nl__0);
#line 252
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__5, ___get_global_const(725)));
#line 252
c_rt_lib0move(&___nl__8, c_rt_lib0init_iter(___nl__5));
#line 252
label_3:
#line 252
c_rt_lib0move(&___nl__6, c_rt_lib0is_end_hash(___nl__8));
#line 252
if(c_rt_lib0check_true_native(___nl__6)){ goto label_1;}
#line 252
c_rt_lib0move(&___nl__6, c_rt_lib0get_key_iter(___nl__8));
#line 252
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value(___nl__5, ___nl__6));
#line 253
c_rt_lib0move(&___nl__9, ptd_system_priv0cross_type(___nl__7, ___nl__4, ___nl__1, ___ref___2, ___ref___3));
#line 253
c_rt_lib0copy(&___nl__4, ___nl__9);
#line 253
c_rt_lib0clear(&___nl__9);
#line 254
c_rt_lib0move(&___nl__8, c_rt_lib0next_iter(___nl__8));
#line 254
goto label_3;
#line 254
label_1:
#line 254
c_rt_lib0clear(&___nl__5);
#line 254
c_rt_lib0clear(&___nl__6);
#line 254
c_rt_lib0clear(&___nl__7);
#line 254
c_rt_lib0clear(&___nl__8);
#line 255
c_rt_lib0clear(&___nl__0);
#line 255
c_rt_lib0clear(&___nl__1);
#line 255
return ___nl__4;
#line 255
c_rt_lib0clear(&___nl__4);
#line 255
c_rt_lib0clear(&___nl__0);
#line 255
c_rt_lib0clear(&___nl__1);
#line 255
return NULL;
}

ImmT ptd_system0cast_type0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 4, "ptd_system0cast_type");
return ptd_system0cast_type(_tab[0], _tab[1], &_tab[2], &_tab[3]);}
ImmT ptd_system0cast_type(ImmT ___nl__0,ImmT ___nl__1,ImmT * ___ref___2,ImmT * ___ref___3) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
ptd_system_priv0__const__init();
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
ImmT ___nl__9 = NULL;
#line 259
c_rt_lib0move(&___nl__5,___get_global_const(2));
#line 259
c_rt_lib0move(&___nl__6, c_rt_lib0hash_mk(0));
#line 259
c_rt_lib0move(&___nl__7, c_rt_lib0hash_mk(0));
#line 259
c_rt_lib0move(&___nl__8, c_rt_lib0get_true());
#line 259
c_rt_lib0move(&___nl__9, c_rt_lib0get_true());
#line 259
c_rt_lib0move(&___nl__4, c_rt_lib0hash_mk(5, ___get_global_const(982), ___nl__5, ___get_global_const(197), ___nl__6, ___get_global_const(198), ___nl__7, ___get_global_const(983), ___nl__8, ___get_global_const(984), ___nl__9));
#line 259
c_rt_lib0clear(&___nl__5);
#line 259
c_rt_lib0clear(&___nl__6);
#line 259
c_rt_lib0clear(&___nl__7);
#line 259
c_rt_lib0clear(&___nl__8);
#line 259
c_rt_lib0clear(&___nl__9);
#line 260
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(72)));
#line 260
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(39)));
#line 260
c_rt_lib0move(&___nl__5, ptd_system_priv0check_assignment_info(___nl__0, ___nl__6, ___nl__4, ___nl__7, ___ref___2, ___ref___3));
#line 260
c_rt_lib0clear(&___nl__7);
#line 260
c_rt_lib0clear(&___nl__6);
#line 260
c_rt_lib0clear(&___nl__0);
#line 260
c_rt_lib0clear(&___nl__1);
#line 260
c_rt_lib0clear(&___nl__4);
#line 260
return ___nl__5;
#line 260
c_rt_lib0clear(&___nl__5);
#line 260
c_rt_lib0clear(&___nl__4);
#line 260
c_rt_lib0clear(&___nl__0);
#line 260
c_rt_lib0clear(&___nl__1);
#line 260
return NULL;
}

ImmT ptd_system0check_assignment0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 4, "ptd_system0check_assignment");
return ptd_system0check_assignment(_tab[0], _tab[1], &_tab[2], &_tab[3]);}
ImmT ptd_system0check_assignment(ImmT ___nl__0,ImmT ___nl__1,ImmT * ___ref___2,ImmT * ___ref___3) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
ptd_system_priv0__const__init();
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
ImmT ___nl__9 = NULL;
#line 265
c_rt_lib0move(&___nl__5,___get_global_const(2));
#line 265
c_rt_lib0move(&___nl__6, c_rt_lib0hash_mk(0));
#line 265
c_rt_lib0move(&___nl__7, c_rt_lib0hash_mk(0));
#line 265
c_rt_lib0move(&___nl__8, c_rt_lib0get_true());
#line 265
c_rt_lib0move(&___nl__9, c_rt_lib0get_false());
#line 265
c_rt_lib0move(&___nl__4, c_rt_lib0hash_mk(5, ___get_global_const(982), ___nl__5, ___get_global_const(197), ___nl__6, ___get_global_const(198), ___nl__7, ___get_global_const(983), ___nl__8, ___get_global_const(984), ___nl__9));
#line 265
c_rt_lib0clear(&___nl__5);
#line 265
c_rt_lib0clear(&___nl__6);
#line 265
c_rt_lib0clear(&___nl__7);
#line 265
c_rt_lib0clear(&___nl__8);
#line 265
c_rt_lib0clear(&___nl__9);
#line 266
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(72)));
#line 266
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(39)));
#line 266
c_rt_lib0move(&___nl__5, ptd_system_priv0check_assignment_info(___nl__0, ___nl__6, ___nl__4, ___nl__7, ___ref___2, ___ref___3));
#line 266
c_rt_lib0clear(&___nl__7);
#line 266
c_rt_lib0clear(&___nl__6);
#line 266
c_rt_lib0clear(&___nl__0);
#line 266
c_rt_lib0clear(&___nl__1);
#line 266
c_rt_lib0clear(&___nl__4);
#line 266
return ___nl__5;
#line 266
c_rt_lib0clear(&___nl__5);
#line 266
c_rt_lib0clear(&___nl__4);
#line 266
c_rt_lib0clear(&___nl__0);
#line 266
c_rt_lib0clear(&___nl__1);
#line 266
return NULL;
}

ImmT ptd_system_priv0mk_err(ImmT ___nl__0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
ptd_system_priv0__const__init();
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
#line 270
c_rt_lib0move(&___nl__3, c_rt_lib0array_mk(0));
#line 270
c_rt_lib0move(&___nl__2, c_rt_lib0hash_mk(3, ___get_global_const(198), ___nl__0, ___get_global_const(197), ___nl__1, ___get_global_const(632), ___nl__3));
#line 270
c_rt_lib0clear(&___nl__3);
#line 270
c_rt_lib0move(&___nl__2, c_rt_lib0ov_mk_arg(___get_global_const(43), ___nl__2));
#line 270
c_rt_lib0clear(&___nl__0);
#line 270
c_rt_lib0clear(&___nl__1);
#line 270
return ___nl__2;
#line 270
c_rt_lib0clear(&___nl__2);
#line 270
c_rt_lib0clear(&___nl__0);
#line 270
c_rt_lib0clear(&___nl__1);
#line 270
return NULL;
}

ImmT ptd_system_priv0check_assignment_info(ImmT ___nl__0,ImmT ___nl__1,ImmT ___nl__2,ImmT ___nl__3,ImmT * ___ref___4,ImmT * ___ref___5) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
c_rt_lib0arg_val(___nl__2);
c_rt_lib0arg_val(___nl__3);
ptd_system_priv0__const__init();
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
#line 274
c_rt_lib0move(&___nl__7,___get_global_const(730));
#line 274
c_rt_lib0move(&___nl__6, ov0is(___nl__1, ___nl__7));
#line 274
c_rt_lib0clear(&___nl__7);
#line 274
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 274
if(c_rt_lib0check_true_native(___nl__6)){ goto label_2;}
#line 274
c_rt_lib0move(&___nl__7, c_rt_lib0ov_mk_none(___get_global_const(44)));
#line 274
c_rt_lib0clear(&___nl__0);
#line 274
c_rt_lib0clear(&___nl__1);
#line 274
c_rt_lib0clear(&___nl__2);
#line 274
c_rt_lib0clear(&___nl__3);
#line 274
c_rt_lib0clear(&___nl__6);
#line 274
return ___nl__7;
#line 274
c_rt_lib0clear(&___nl__7);
#line 274
goto label_2;
#line 274
label_2:
#line 274
c_rt_lib0clear(&___nl__6);
#line 275
c_rt_lib0move(&___nl__7,___get_global_const(727));
#line 275
c_rt_lib0move(&___nl__6, ov0is(___nl__1, ___nl__7));
#line 275
c_rt_lib0clear(&___nl__7);
#line 275
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 275
if(c_rt_lib0check_true_native(___nl__6)){ goto label_4;}
#line 275
c_rt_lib0move(&___nl__7, ptd_system_priv0mk_err(___nl__0, ___nl__1));
#line 275
c_rt_lib0clear(&___nl__0);
#line 275
c_rt_lib0clear(&___nl__1);
#line 275
c_rt_lib0clear(&___nl__2);
#line 275
c_rt_lib0clear(&___nl__3);
#line 275
c_rt_lib0clear(&___nl__6);
#line 275
return ___nl__7;
#line 275
c_rt_lib0clear(&___nl__7);
#line 275
goto label_4;
#line 275
label_4:
#line 275
c_rt_lib0clear(&___nl__6);
#line 276
c_rt_lib0move(&___nl__7,___get_global_const(722));
#line 276
c_rt_lib0move(&___nl__6, ov0is(___nl__0, ___nl__7));
#line 276
c_rt_lib0clear(&___nl__7);
#line 276
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 276
if(c_rt_lib0check_true_native(___nl__6)){ goto label_6;}
#line 277
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(983)));
#line 277
c_rt_lib0move(&___nl__8, c_rt_lib0not(___nl__7));
#line 277
if(c_rt_lib0check_true_native(___nl__8)){ goto label_9;}
#line 277
c_rt_lib0move(&___nl__7, ptd_system0is_known(___nl__3));
#line 277
label_9:
#line 277
c_rt_lib0clear(&___nl__8);
#line 277
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 277
if(c_rt_lib0check_true_native(___nl__7)){ goto label_8;}
#line 277
c_rt_lib0move(&___nl__8, c_rt_lib0ov_mk_none(___get_global_const(128)));
#line 277
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(197)));
#line 277
c_rt_lib0delete(ptd_system_priv0walk_on_type(___nl__1, ___nl__8, ___nl__9, ___ref___4, ___ref___5));
#line 277
c_rt_lib0clear(&___nl__9);
#line 277
c_rt_lib0clear(&___nl__8);
#line 277
goto label_8;
#line 277
label_8:
#line 277
c_rt_lib0clear(&___nl__7);
#line 278
c_rt_lib0move(&___nl__7, c_rt_lib0ov_mk_none(___get_global_const(44)));
#line 278
c_rt_lib0clear(&___nl__0);
#line 278
c_rt_lib0clear(&___nl__1);
#line 278
c_rt_lib0clear(&___nl__2);
#line 278
c_rt_lib0clear(&___nl__3);
#line 278
c_rt_lib0clear(&___nl__6);
#line 278
return ___nl__7;
#line 278
c_rt_lib0clear(&___nl__7);
#line 279
goto label_6;
#line 279
label_6:
#line 279
c_rt_lib0clear(&___nl__6);
#line 280
c_rt_lib0move(&___nl__7, c_rt_lib0get_false());
#line 280
c_rt_lib0move(&___nl__8, ptd_system0is_known(___nl__3));
#line 280
c_rt_lib0move(&___nl__6, ptd_system_priv0is_cycle_ref(&___nl__0, &___nl__1, &___nl__2, ___nl__7, ___nl__8, ___ref___4, ___ref___5));
#line 280
c_rt_lib0clear(&___nl__8);
#line 280
c_rt_lib0clear(&___nl__7);
#line 280
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 280
if(c_rt_lib0check_true_native(___nl__6)){ goto label_11;}
#line 281
c_rt_lib0move(&___nl__7, c_rt_lib0ov_mk_none(___get_global_const(44)));
#line 281
c_rt_lib0clear(&___nl__0);
#line 281
c_rt_lib0clear(&___nl__1);
#line 281
c_rt_lib0clear(&___nl__2);
#line 281
c_rt_lib0clear(&___nl__3);
#line 281
c_rt_lib0clear(&___nl__6);
#line 281
return ___nl__7;
#line 281
c_rt_lib0clear(&___nl__7);
#line 282
goto label_11;
#line 282
label_11:
#line 282
c_rt_lib0clear(&___nl__6);
#line 284
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(982)));
#line 284
c_rt_lib0move(&___nl__7,___get_global_const(986));
#line 284
c_rt_lib0move(&___nl__6, c_rt_lib0num_eq(___nl__6, ___nl__7));
#line 284
c_rt_lib0clear(&___nl__7);
#line 284
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 284
if(c_rt_lib0check_true_native(___nl__6)){ goto label_13;}
#line 285
c_rt_lib0move(&___nl__7,___get_global_const(988));
#line 285
c_rt_lib0delete(ptd_system_priv0add_error(___ref___5, ___nl__7));
#line 285
c_rt_lib0clear(&___nl__7);
#line 286
c_rt_lib0move(&___nl__7, ptd_system_priv0mk_err(___nl__0, ___nl__1));
#line 286
c_rt_lib0clear(&___nl__0);
#line 286
c_rt_lib0clear(&___nl__1);
#line 286
c_rt_lib0clear(&___nl__2);
#line 286
c_rt_lib0clear(&___nl__3);
#line 286
c_rt_lib0clear(&___nl__6);
#line 286
return ___nl__7;
#line 286
c_rt_lib0clear(&___nl__7);
#line 287
goto label_13;
#line 287
label_13:
#line 287
c_rt_lib0clear(&___nl__6);
#line 289
c_rt_lib0move(&___nl__6, c_rt_lib0priv_is(___nl__0, ___get_global_const(722)));
#line 289
if(c_rt_lib0check_true_native(___nl__6)){ goto label_15;}
#line 291
c_rt_lib0move(&___nl__6, c_rt_lib0priv_is(___nl__0, ___get_global_const(723)));
#line 291
if(c_rt_lib0check_true_native(___nl__6)){ goto label_16;}
#line 300
c_rt_lib0move(&___nl__6, c_rt_lib0priv_is(___nl__0, ___get_global_const(724)));
#line 300
if(c_rt_lib0check_true_native(___nl__6)){ goto label_17;}
#line 321
c_rt_lib0move(&___nl__6, c_rt_lib0priv_is(___nl__0, ___get_global_const(725)));
#line 321
if(c_rt_lib0check_true_native(___nl__6)){ goto label_18;}
#line 348
c_rt_lib0move(&___nl__6, c_rt_lib0priv_is(___nl__0, ___get_global_const(726)));
#line 348
if(c_rt_lib0check_true_native(___nl__6)){ goto label_19;}
#line 350
c_rt_lib0move(&___nl__6, c_rt_lib0priv_is(___nl__0, ___get_global_const(727)));
#line 350
if(c_rt_lib0check_true_native(___nl__6)){ goto label_20;}
#line 352
c_rt_lib0move(&___nl__6, c_rt_lib0priv_is(___nl__0, ___get_global_const(728)));
#line 352
if(c_rt_lib0check_true_native(___nl__6)){ goto label_21;}
#line 355
c_rt_lib0move(&___nl__6, c_rt_lib0priv_is(___nl__0, ___get_global_const(729)));
#line 355
if(c_rt_lib0check_true_native(___nl__6)){ goto label_22;}
#line 382
c_rt_lib0move(&___nl__6, c_rt_lib0priv_is(___nl__0, ___get_global_const(730)));
#line 382
if(c_rt_lib0check_true_native(___nl__6)){ goto label_23;}
#line 382
c_rt_lib0move(&___nl__6,___get_global_const(74));
#line 382
c_rt_lib0move(&___nl__6, c_rt_lib0array_mk(2, ___nl__6, ___nl__0));
#line 382
nl_die_arg(___nl__6);
#line 289
label_15:
#line 290
c_rt_lib0move(&___nl__7, c_rt_lib0ov_mk_none(___get_global_const(44)));
#line 290
c_rt_lib0clear(&___nl__0);
#line 290
c_rt_lib0clear(&___nl__1);
#line 290
c_rt_lib0clear(&___nl__2);
#line 290
c_rt_lib0clear(&___nl__3);
#line 290
c_rt_lib0clear(&___nl__6);
#line 290
return ___nl__7;
#line 290
c_rt_lib0clear(&___nl__7);
#line 291
goto label_14;
#line 291
label_16:
#line 291
c_rt_lib0move(&___nl__7, c_rt_lib0priv_as(___nl__0, ___get_global_const(723)));
#line 292
c_rt_lib0move(&___nl__9,___get_global_const(723));
#line 292
c_rt_lib0move(&___nl__8, ov0is(___nl__1, ___nl__9));
#line 292
c_rt_lib0clear(&___nl__9);
#line 292
c_rt_lib0move(&___nl__8, c_rt_lib0not(___nl__8));
#line 292
c_rt_lib0move(&___nl__8, c_rt_lib0not(___nl__8));
#line 292
if(c_rt_lib0check_true_native(___nl__8)){ goto label_25;}
#line 292
c_rt_lib0move(&___nl__9, ptd_system_priv0mk_err(___nl__0, ___nl__1));
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
c_rt_lib0clear(&___nl__7);
#line 292
c_rt_lib0clear(&___nl__8);
#line 292
return ___nl__9;
#line 292
c_rt_lib0clear(&___nl__9);
#line 292
goto label_25;
#line 292
label_25:
#line 292
c_rt_lib0clear(&___nl__8);
#line 293
c_rt_lib0copy(&___nl__9, ___nl__1);
#line 293
c_rt_lib0move(&___nl__9, c_rt_lib0priv_as(___nl__9, ___get_global_const(723)));
#line 293
c_rt_lib0move(&___nl__8, ptd_system_priv0check_assignment_info(___nl__7, ___nl__9, ___nl__2, ___nl__3, ___ref___4, ___ref___5));
#line 293
c_rt_lib0clear(&___nl__9);
#line 294
c_rt_lib0move(&___nl__9, c_rt_lib0priv_is(___nl__8, ___get_global_const(44)));
#line 294
if(c_rt_lib0check_true_native(___nl__9)){ goto label_27;}
#line 296
c_rt_lib0move(&___nl__9, c_rt_lib0priv_is(___nl__8, ___get_global_const(43)));
#line 296
if(c_rt_lib0check_true_native(___nl__9)){ goto label_28;}
#line 296
c_rt_lib0move(&___nl__9,___get_global_const(74));
#line 296
c_rt_lib0move(&___nl__9, c_rt_lib0array_mk(2, ___nl__9, ___nl__8));
#line 296
nl_die_arg(___nl__9);
#line 294
label_27:
#line 295
c_rt_lib0move(&___nl__10, c_rt_lib0ov_mk_none(___get_global_const(44)));
#line 295
c_rt_lib0clear(&___nl__0);
#line 295
c_rt_lib0clear(&___nl__1);
#line 295
c_rt_lib0clear(&___nl__2);
#line 295
c_rt_lib0clear(&___nl__3);
#line 295
c_rt_lib0clear(&___nl__6);
#line 295
c_rt_lib0clear(&___nl__7);
#line 295
c_rt_lib0clear(&___nl__8);
#line 295
c_rt_lib0clear(&___nl__9);
#line 295
return ___nl__10;
#line 295
c_rt_lib0clear(&___nl__10);
#line 296
goto label_26;
#line 296
label_28:
#line 296
c_rt_lib0move(&___nl__10, c_rt_lib0priv_as(___nl__8, ___get_global_const(43)));
#line 297
c_rt_lib0move(&___nl__11,___get_global_const(632));
#line 297
c_rt_lib0move(&___nl__11, c_rt_lib0get_ref_hash(___nl__10, ___nl__11));
#line 297
c_rt_lib0move(&___nl__12, c_rt_lib0ov_mk_none(___get_global_const(943)));
#line 297
c_rt_lib0delete(array0push(&___nl__11, ___nl__12));
#line 297
c_rt_lib0clear(&___nl__12);
#line 297
c_rt_lib0move(&___nl__12,___get_global_const(632));
#line 297
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__10, ___nl__12, ___nl__11));
#line 297
c_rt_lib0clear(&___nl__12);
#line 297
c_rt_lib0clear(&___nl__11);
#line 298
c_rt_lib0move(&___nl__11, c_rt_lib0ov_mk_arg(___get_global_const(43), ___nl__10));
#line 298
c_rt_lib0clear(&___nl__0);
#line 298
c_rt_lib0clear(&___nl__1);
#line 298
c_rt_lib0clear(&___nl__2);
#line 298
c_rt_lib0clear(&___nl__3);
#line 298
c_rt_lib0clear(&___nl__6);
#line 298
c_rt_lib0clear(&___nl__7);
#line 298
c_rt_lib0clear(&___nl__8);
#line 298
c_rt_lib0clear(&___nl__9);
#line 298
c_rt_lib0clear(&___nl__10);
#line 298
return ___nl__11;
#line 298
c_rt_lib0clear(&___nl__11);
#line 298
c_rt_lib0clear(&___nl__10);
#line 299
goto label_26;
#line 299
label_26:
#line 299
c_rt_lib0clear(&___nl__9);
#line 299
c_rt_lib0clear(&___nl__8);
#line 299
c_rt_lib0clear(&___nl__7);
#line 300
goto label_14;
#line 300
label_17:
#line 300
c_rt_lib0move(&___nl__7, c_rt_lib0priv_as(___nl__0, ___get_global_const(724)));
#line 301
c_rt_lib0move(&___nl__10,___get_global_const(725));
#line 301
c_rt_lib0move(&___nl__8, ov0is(___nl__1, ___nl__10));
#line 301
c_rt_lib0clear(&___nl__10);
#line 301
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__8));
#line 301
if(c_rt_lib0check_true_native(___nl__9)){ goto label_31;}
#line 301
c_rt_lib0move(&___nl__10,___get_global_const(979));
#line 301
c_rt_lib0move(&___nl__8, ov0is(___nl__3, ___nl__10));
#line 301
c_rt_lib0clear(&___nl__10);
#line 301
c_rt_lib0move(&___nl__8, c_rt_lib0not(___nl__8));
#line 301
label_31:
#line 301
c_rt_lib0clear(&___nl__9);
#line 301
c_rt_lib0move(&___nl__8, c_rt_lib0not(___nl__8));
#line 301
if(c_rt_lib0check_true_native(___nl__8)){ goto label_30;}
#line 302
c_rt_lib0copy(&___nl__9, ___nl__1);
#line 302
c_rt_lib0move(&___nl__9, c_rt_lib0priv_as(___nl__9, ___get_global_const(725)));
#line 302
c_rt_lib0move(&___nl__12, c_rt_lib0init_iter(___nl__9));
#line 302
label_34:
#line 302
c_rt_lib0move(&___nl__10, c_rt_lib0is_end_hash(___nl__12));
#line 302
if(c_rt_lib0check_true_native(___nl__10)){ goto label_32;}
#line 302
c_rt_lib0move(&___nl__10, c_rt_lib0get_key_iter(___nl__12));
#line 302
c_rt_lib0move(&___nl__11, c_rt_lib0hash_get_value(___nl__9, ___nl__10));
#line 303
c_rt_lib0move(&___nl__13, ptd_system_priv0check_assignment_info(___nl__7, ___nl__11, ___nl__2, ___nl__3, ___ref___4, ___ref___5));
#line 304
c_rt_lib0move(&___nl__14, c_rt_lib0priv_is(___nl__13, ___get_global_const(44)));
#line 304
if(c_rt_lib0check_true_native(___nl__14)){ goto label_36;}
#line 305
c_rt_lib0move(&___nl__14, c_rt_lib0priv_is(___nl__13, ___get_global_const(43)));
#line 305
if(c_rt_lib0check_true_native(___nl__14)){ goto label_37;}
#line 305
c_rt_lib0move(&___nl__14,___get_global_const(74));
#line 305
c_rt_lib0move(&___nl__14, c_rt_lib0array_mk(2, ___nl__14, ___nl__13));
#line 305
nl_die_arg(___nl__14);
#line 304
label_36:
#line 305
goto label_35;
#line 305
label_37:
#line 305
c_rt_lib0move(&___nl__15, c_rt_lib0priv_as(___nl__13, ___get_global_const(43)));
#line 306
c_rt_lib0move(&___nl__16,___get_global_const(632));
#line 306
c_rt_lib0move(&___nl__16, c_rt_lib0get_ref_hash(___nl__15, ___nl__16));
#line 306
c_rt_lib0move(&___nl__17, c_rt_lib0ov_mk_arg(___get_global_const(944), ___nl__10));
#line 306
c_rt_lib0delete(array0push(&___nl__16, ___nl__17));
#line 306
c_rt_lib0clear(&___nl__17);
#line 306
c_rt_lib0move(&___nl__17,___get_global_const(632));
#line 306
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__15, ___nl__17, ___nl__16));
#line 306
c_rt_lib0clear(&___nl__17);
#line 306
c_rt_lib0clear(&___nl__16);
#line 307
c_rt_lib0move(&___nl__16, c_rt_lib0ov_mk_arg(___get_global_const(43), ___nl__15));
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
c_rt_lib0clear(&___nl__7);
#line 307
c_rt_lib0clear(&___nl__8);
#line 307
c_rt_lib0clear(&___nl__9);
#line 307
c_rt_lib0clear(&___nl__10);
#line 307
c_rt_lib0clear(&___nl__11);
#line 307
c_rt_lib0clear(&___nl__12);
#line 307
c_rt_lib0clear(&___nl__13);
#line 307
c_rt_lib0clear(&___nl__14);
#line 307
c_rt_lib0clear(&___nl__15);
#line 307
return ___nl__16;
#line 307
c_rt_lib0clear(&___nl__16);
#line 307
c_rt_lib0clear(&___nl__15);
#line 308
goto label_35;
#line 308
label_35:
#line 308
c_rt_lib0clear(&___nl__14);
#line 308
c_rt_lib0clear(&___nl__13);
#line 309
c_rt_lib0move(&___nl__12, c_rt_lib0next_iter(___nl__12));
#line 309
goto label_34;
#line 309
label_32:
#line 309
c_rt_lib0clear(&___nl__9);
#line 309
c_rt_lib0clear(&___nl__10);
#line 309
c_rt_lib0clear(&___nl__11);
#line 309
c_rt_lib0clear(&___nl__12);
#line 310
c_rt_lib0move(&___nl__9, c_rt_lib0ov_mk_none(___get_global_const(44)));
#line 310
c_rt_lib0clear(&___nl__0);
#line 310
c_rt_lib0clear(&___nl__1);
#line 310
c_rt_lib0clear(&___nl__2);
#line 310
c_rt_lib0clear(&___nl__3);
#line 310
c_rt_lib0clear(&___nl__6);
#line 310
c_rt_lib0clear(&___nl__7);
#line 310
c_rt_lib0clear(&___nl__8);
#line 310
return ___nl__9;
#line 310
c_rt_lib0clear(&___nl__9);
#line 311
goto label_30;
#line 311
label_30:
#line 311
c_rt_lib0clear(&___nl__8);
#line 313
c_rt_lib0move(&___nl__9,___get_global_const(724));
#line 313
c_rt_lib0move(&___nl__8, ov0is(___nl__1, ___nl__9));
#line 313
c_rt_lib0clear(&___nl__9);
#line 313
c_rt_lib0move(&___nl__8, c_rt_lib0not(___nl__8));
#line 313
c_rt_lib0move(&___nl__8, c_rt_lib0not(___nl__8));
#line 313
if(c_rt_lib0check_true_native(___nl__8)){ goto label_39;}
#line 313
c_rt_lib0move(&___nl__9, ptd_system_priv0mk_err(___nl__0, ___nl__1));
#line 313
c_rt_lib0clear(&___nl__0);
#line 313
c_rt_lib0clear(&___nl__1);
#line 313
c_rt_lib0clear(&___nl__2);
#line 313
c_rt_lib0clear(&___nl__3);
#line 313
c_rt_lib0clear(&___nl__6);
#line 313
c_rt_lib0clear(&___nl__7);
#line 313
c_rt_lib0clear(&___nl__8);
#line 313
return ___nl__9;
#line 313
c_rt_lib0clear(&___nl__9);
#line 313
goto label_39;
#line 313
label_39:
#line 313
c_rt_lib0clear(&___nl__8);
#line 314
c_rt_lib0copy(&___nl__9, ___nl__1);
#line 314
c_rt_lib0move(&___nl__9, c_rt_lib0priv_as(___nl__9, ___get_global_const(724)));
#line 314
c_rt_lib0move(&___nl__8, ptd_system_priv0check_assignment_info(___nl__7, ___nl__9, ___nl__2, ___nl__3, ___ref___4, ___ref___5));
#line 314
c_rt_lib0clear(&___nl__9);
#line 315
c_rt_lib0move(&___nl__9, c_rt_lib0priv_is(___nl__8, ___get_global_const(44)));
#line 315
if(c_rt_lib0check_true_native(___nl__9)){ goto label_41;}
#line 317
c_rt_lib0move(&___nl__9, c_rt_lib0priv_is(___nl__8, ___get_global_const(43)));
#line 317
if(c_rt_lib0check_true_native(___nl__9)){ goto label_42;}
#line 317
c_rt_lib0move(&___nl__9,___get_global_const(74));
#line 317
c_rt_lib0move(&___nl__9, c_rt_lib0array_mk(2, ___nl__9, ___nl__8));
#line 317
nl_die_arg(___nl__9);
#line 315
label_41:
#line 316
c_rt_lib0move(&___nl__10, c_rt_lib0ov_mk_none(___get_global_const(44)));
#line 316
c_rt_lib0clear(&___nl__0);
#line 316
c_rt_lib0clear(&___nl__1);
#line 316
c_rt_lib0clear(&___nl__2);
#line 316
c_rt_lib0clear(&___nl__3);
#line 316
c_rt_lib0clear(&___nl__6);
#line 316
c_rt_lib0clear(&___nl__7);
#line 316
c_rt_lib0clear(&___nl__8);
#line 316
c_rt_lib0clear(&___nl__9);
#line 316
return ___nl__10;
#line 316
c_rt_lib0clear(&___nl__10);
#line 317
goto label_40;
#line 317
label_42:
#line 317
c_rt_lib0move(&___nl__10, c_rt_lib0priv_as(___nl__8, ___get_global_const(43)));
#line 318
c_rt_lib0move(&___nl__11,___get_global_const(632));
#line 318
c_rt_lib0move(&___nl__11, c_rt_lib0get_ref_hash(___nl__10, ___nl__11));
#line 318
c_rt_lib0move(&___nl__12, c_rt_lib0ov_mk_none(___get_global_const(948)));
#line 318
c_rt_lib0delete(array0push(&___nl__11, ___nl__12));
#line 318
c_rt_lib0clear(&___nl__12);
#line 318
c_rt_lib0move(&___nl__12,___get_global_const(632));
#line 318
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__10, ___nl__12, ___nl__11));
#line 318
c_rt_lib0clear(&___nl__12);
#line 318
c_rt_lib0clear(&___nl__11);
#line 319
c_rt_lib0move(&___nl__11, c_rt_lib0ov_mk_arg(___get_global_const(43), ___nl__10));
#line 319
c_rt_lib0clear(&___nl__0);
#line 319
c_rt_lib0clear(&___nl__1);
#line 319
c_rt_lib0clear(&___nl__2);
#line 319
c_rt_lib0clear(&___nl__3);
#line 319
c_rt_lib0clear(&___nl__6);
#line 319
c_rt_lib0clear(&___nl__7);
#line 319
c_rt_lib0clear(&___nl__8);
#line 319
c_rt_lib0clear(&___nl__9);
#line 319
c_rt_lib0clear(&___nl__10);
#line 319
return ___nl__11;
#line 319
c_rt_lib0clear(&___nl__11);
#line 319
c_rt_lib0clear(&___nl__10);
#line 320
goto label_40;
#line 320
label_40:
#line 320
c_rt_lib0clear(&___nl__9);
#line 320
c_rt_lib0clear(&___nl__8);
#line 320
c_rt_lib0clear(&___nl__7);
#line 321
goto label_14;
#line 321
label_18:
#line 321
c_rt_lib0move(&___nl__7, c_rt_lib0priv_as(___nl__0, ___get_global_const(725)));
#line 322
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(984)));
#line 322
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__8));
#line 322
if(c_rt_lib0check_true_native(___nl__9)){ goto label_45;}
#line 322
c_rt_lib0copy(&___nl__8, ___nl__1);
#line 322
c_rt_lib0move(&___nl__8, c_rt_lib0priv_is(___nl__8, ___get_global_const(724)));
#line 322
label_45:
#line 322
c_rt_lib0clear(&___nl__9);
#line 322
c_rt_lib0move(&___nl__8, c_rt_lib0not(___nl__8));
#line 322
if(c_rt_lib0check_true_native(___nl__8)){ goto label_44;}
#line 323
c_rt_lib0copy(&___nl__9, ___nl__1);
#line 323
c_rt_lib0move(&___nl__9, c_rt_lib0priv_as(___nl__9, ___get_global_const(724)));
#line 324
c_rt_lib0move(&___nl__12, c_rt_lib0init_iter(___nl__7));
#line 324
label_48:
#line 324
c_rt_lib0move(&___nl__10, c_rt_lib0is_end_hash(___nl__12));
#line 324
if(c_rt_lib0check_true_native(___nl__10)){ goto label_46;}
#line 324
c_rt_lib0move(&___nl__10, c_rt_lib0get_key_iter(___nl__12));
#line 324
c_rt_lib0move(&___nl__11, c_rt_lib0hash_get_value(___nl__7, ___nl__10));
#line 325
c_rt_lib0move(&___nl__13, ptd_system_priv0check_assignment_info(___nl__11, ___nl__9, ___nl__2, ___nl__3, ___ref___4, ___ref___5));
#line 326
c_rt_lib0move(&___nl__14, c_rt_lib0priv_is(___nl__13, ___get_global_const(44)));
#line 326
if(c_rt_lib0check_true_native(___nl__14)){ goto label_50;}
#line 327
c_rt_lib0move(&___nl__14, c_rt_lib0priv_is(___nl__13, ___get_global_const(43)));
#line 327
if(c_rt_lib0check_true_native(___nl__14)){ goto label_51;}
#line 327
c_rt_lib0move(&___nl__14,___get_global_const(74));
#line 327
c_rt_lib0move(&___nl__14, c_rt_lib0array_mk(2, ___nl__14, ___nl__13));
#line 327
nl_die_arg(___nl__14);
#line 326
label_50:
#line 327
goto label_49;
#line 327
label_51:
#line 327
c_rt_lib0move(&___nl__15, c_rt_lib0priv_as(___nl__13, ___get_global_const(43)));
#line 328
c_rt_lib0move(&___nl__16,___get_global_const(632));
#line 328
c_rt_lib0move(&___nl__16, c_rt_lib0get_ref_hash(___nl__15, ___nl__16));
#line 328
c_rt_lib0move(&___nl__17, c_rt_lib0ov_mk_arg(___get_global_const(944), ___nl__10));
#line 328
c_rt_lib0delete(array0push(&___nl__16, ___nl__17));
#line 328
c_rt_lib0clear(&___nl__17);
#line 328
c_rt_lib0move(&___nl__17,___get_global_const(632));
#line 328
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__15, ___nl__17, ___nl__16));
#line 328
c_rt_lib0clear(&___nl__17);
#line 328
c_rt_lib0clear(&___nl__16);
#line 329
c_rt_lib0move(&___nl__16, c_rt_lib0ov_mk_arg(___get_global_const(43), ___nl__15));
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
c_rt_lib0clear(&___nl__10);
#line 329
c_rt_lib0clear(&___nl__11);
#line 329
c_rt_lib0clear(&___nl__12);
#line 329
c_rt_lib0clear(&___nl__13);
#line 329
c_rt_lib0clear(&___nl__14);
#line 329
c_rt_lib0clear(&___nl__15);
#line 329
return ___nl__16;
#line 329
c_rt_lib0clear(&___nl__16);
#line 329
c_rt_lib0clear(&___nl__15);
#line 330
goto label_49;
#line 330
label_49:
#line 330
c_rt_lib0clear(&___nl__14);
#line 330
c_rt_lib0clear(&___nl__13);
#line 331
c_rt_lib0move(&___nl__12, c_rt_lib0next_iter(___nl__12));
#line 331
goto label_48;
#line 331
label_46:
#line 331
c_rt_lib0clear(&___nl__10);
#line 331
c_rt_lib0clear(&___nl__11);
#line 331
c_rt_lib0clear(&___nl__12);
#line 332
c_rt_lib0move(&___nl__10, c_rt_lib0ov_mk_none(___get_global_const(44)));
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
return ___nl__10;
#line 332
c_rt_lib0clear(&___nl__10);
#line 332
c_rt_lib0clear(&___nl__9);
#line 333
goto label_44;
#line 333
label_44:
#line 333
c_rt_lib0clear(&___nl__8);
#line 334
c_rt_lib0move(&___nl__9,___get_global_const(725));
#line 334
c_rt_lib0move(&___nl__8, ov0is(___nl__1, ___nl__9));
#line 334
c_rt_lib0clear(&___nl__9);
#line 334
c_rt_lib0move(&___nl__8, c_rt_lib0not(___nl__8));
#line 334
c_rt_lib0move(&___nl__8, c_rt_lib0not(___nl__8));
#line 334
if(c_rt_lib0check_true_native(___nl__8)){ goto label_53;}
#line 334
c_rt_lib0move(&___nl__9, ptd_system_priv0mk_err(___nl__0, ___nl__1));
#line 334
c_rt_lib0clear(&___nl__0);
#line 334
c_rt_lib0clear(&___nl__1);
#line 334
c_rt_lib0clear(&___nl__2);
#line 334
c_rt_lib0clear(&___nl__3);
#line 334
c_rt_lib0clear(&___nl__6);
#line 334
c_rt_lib0clear(&___nl__7);
#line 334
c_rt_lib0clear(&___nl__8);
#line 334
return ___nl__9;
#line 334
c_rt_lib0clear(&___nl__9);
#line 334
goto label_53;
#line 334
label_53:
#line 334
c_rt_lib0clear(&___nl__8);
#line 335
c_rt_lib0copy(&___nl__8, ___nl__1);
#line 335
c_rt_lib0move(&___nl__8, c_rt_lib0priv_as(___nl__8, ___get_global_const(725)));
#line 336
c_rt_lib0move(&___nl__9, hash0size(___nl__8));
#line 336
c_rt_lib0move(&___nl__10, hash0size(___nl__7));
#line 336
c_rt_lib0move(&___nl__9, c_rt_lib0num_ne(___nl__9, ___nl__10));
#line 336
c_rt_lib0clear(&___nl__10);
#line 336
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__9));
#line 336
if(c_rt_lib0check_true_native(___nl__9)){ goto label_55;}
#line 336
c_rt_lib0move(&___nl__10, ptd_system_priv0mk_err(___nl__0, ___nl__1));
#line 336
c_rt_lib0clear(&___nl__0);
#line 336
c_rt_lib0clear(&___nl__1);
#line 336
c_rt_lib0clear(&___nl__2);
#line 336
c_rt_lib0clear(&___nl__3);
#line 336
c_rt_lib0clear(&___nl__6);
#line 336
c_rt_lib0clear(&___nl__7);
#line 336
c_rt_lib0clear(&___nl__8);
#line 336
c_rt_lib0clear(&___nl__9);
#line 336
return ___nl__10;
#line 336
c_rt_lib0clear(&___nl__10);
#line 336
goto label_55;
#line 336
label_55:
#line 336
c_rt_lib0clear(&___nl__9);
#line 337
c_rt_lib0move(&___nl__11, c_rt_lib0init_iter(___nl__7));
#line 337
label_58:
#line 337
c_rt_lib0move(&___nl__9, c_rt_lib0is_end_hash(___nl__11));
#line 337
if(c_rt_lib0check_true_native(___nl__9)){ goto label_56;}
#line 337
c_rt_lib0move(&___nl__9, c_rt_lib0get_key_iter(___nl__11));
#line 337
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value(___nl__7, ___nl__9));
#line 338
c_rt_lib0move(&___nl__12, hash0has_key(___nl__8, ___nl__9));
#line 338
c_rt_lib0move(&___nl__12, c_rt_lib0not(___nl__12));
#line 338
c_rt_lib0move(&___nl__12, c_rt_lib0not(___nl__12));
#line 338
if(c_rt_lib0check_true_native(___nl__12)){ goto label_60;}
#line 338
c_rt_lib0move(&___nl__13, ptd_system_priv0mk_err(___nl__0, ___nl__1));
#line 338
c_rt_lib0clear(&___nl__0);
#line 338
c_rt_lib0clear(&___nl__1);
#line 338
c_rt_lib0clear(&___nl__2);
#line 338
c_rt_lib0clear(&___nl__3);
#line 338
c_rt_lib0clear(&___nl__6);
#line 338
c_rt_lib0clear(&___nl__7);
#line 338
c_rt_lib0clear(&___nl__8);
#line 338
c_rt_lib0clear(&___nl__9);
#line 338
c_rt_lib0clear(&___nl__10);
#line 338
c_rt_lib0clear(&___nl__11);
#line 338
c_rt_lib0clear(&___nl__12);
#line 338
return ___nl__13;
#line 338
c_rt_lib0clear(&___nl__13);
#line 338
goto label_60;
#line 338
label_60:
#line 338
c_rt_lib0clear(&___nl__12);
#line 339
c_rt_lib0move(&___nl__12, hash0get_value(___nl__8, ___nl__9));
#line 340
c_rt_lib0move(&___nl__13, ptd_system_priv0check_assignment_info(___nl__10, ___nl__12, ___nl__2, ___nl__3, ___ref___4, ___ref___5));
#line 341
c_rt_lib0move(&___nl__14, c_rt_lib0priv_is(___nl__13, ___get_global_const(44)));
#line 341
if(c_rt_lib0check_true_native(___nl__14)){ goto label_62;}
#line 342
c_rt_lib0move(&___nl__14, c_rt_lib0priv_is(___nl__13, ___get_global_const(43)));
#line 342
if(c_rt_lib0check_true_native(___nl__14)){ goto label_63;}
#line 342
c_rt_lib0move(&___nl__14,___get_global_const(74));
#line 342
c_rt_lib0move(&___nl__14, c_rt_lib0array_mk(2, ___nl__14, ___nl__13));
#line 342
nl_die_arg(___nl__14);
#line 341
label_62:
#line 342
goto label_61;
#line 342
label_63:
#line 342
c_rt_lib0move(&___nl__15, c_rt_lib0priv_as(___nl__13, ___get_global_const(43)));
#line 343
c_rt_lib0move(&___nl__16,___get_global_const(632));
#line 343
c_rt_lib0move(&___nl__16, c_rt_lib0get_ref_hash(___nl__15, ___nl__16));
#line 343
c_rt_lib0move(&___nl__17, c_rt_lib0ov_mk_arg(___get_global_const(944), ___nl__9));
#line 343
c_rt_lib0delete(array0push(&___nl__16, ___nl__17));
#line 343
c_rt_lib0clear(&___nl__17);
#line 343
c_rt_lib0move(&___nl__17,___get_global_const(632));
#line 343
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__15, ___nl__17, ___nl__16));
#line 343
c_rt_lib0clear(&___nl__17);
#line 343
c_rt_lib0clear(&___nl__16);
#line 344
c_rt_lib0move(&___nl__16, c_rt_lib0ov_mk_arg(___get_global_const(43), ___nl__15));
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
c_rt_lib0clear(&___nl__10);
#line 344
c_rt_lib0clear(&___nl__11);
#line 344
c_rt_lib0clear(&___nl__12);
#line 344
c_rt_lib0clear(&___nl__13);
#line 344
c_rt_lib0clear(&___nl__14);
#line 344
c_rt_lib0clear(&___nl__15);
#line 344
return ___nl__16;
#line 344
c_rt_lib0clear(&___nl__16);
#line 344
c_rt_lib0clear(&___nl__15);
#line 345
goto label_61;
#line 345
label_61:
#line 345
c_rt_lib0clear(&___nl__14);
#line 345
c_rt_lib0clear(&___nl__12);
#line 345
c_rt_lib0clear(&___nl__13);
#line 346
c_rt_lib0move(&___nl__11, c_rt_lib0next_iter(___nl__11));
#line 346
goto label_58;
#line 346
label_56:
#line 346
c_rt_lib0clear(&___nl__9);
#line 346
c_rt_lib0clear(&___nl__10);
#line 346
c_rt_lib0clear(&___nl__11);
#line 347
c_rt_lib0move(&___nl__9, c_rt_lib0ov_mk_none(___get_global_const(44)));
#line 347
c_rt_lib0clear(&___nl__0);
#line 347
c_rt_lib0clear(&___nl__1);
#line 347
c_rt_lib0clear(&___nl__2);
#line 347
c_rt_lib0clear(&___nl__3);
#line 347
c_rt_lib0clear(&___nl__6);
#line 347
c_rt_lib0clear(&___nl__7);
#line 347
c_rt_lib0clear(&___nl__8);
#line 347
return ___nl__9;
#line 347
c_rt_lib0clear(&___nl__9);
#line 347
c_rt_lib0clear(&___nl__8);
#line 347
c_rt_lib0clear(&___nl__7);
#line 348
goto label_14;
#line 348
label_19:
#line 348
c_rt_lib0move(&___nl__7, c_rt_lib0priv_as(___nl__0, ___get_global_const(726)));
#line 349
c_rt_lib0move(&___nl__8, c_rt_lib0array_mk(0));
#line 349
nl_die_arg(___nl__8);
#line 349
c_rt_lib0clear(&___nl__8);
#line 349
c_rt_lib0clear(&___nl__7);
#line 350
goto label_14;
#line 350
label_20:
#line 351
c_rt_lib0move(&___nl__7, c_rt_lib0array_mk(0));
#line 351
nl_die_arg(___nl__7);
#line 351
c_rt_lib0clear(&___nl__7);
#line 352
goto label_14;
#line 352
label_21:
#line 353
c_rt_lib0move(&___nl__8,___get_global_const(728));
#line 353
c_rt_lib0move(&___nl__7, ov0is(___nl__1, ___nl__8));
#line 353
c_rt_lib0clear(&___nl__8);
#line 353
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 353
if(c_rt_lib0check_true_native(___nl__7)){ goto label_65;}
#line 353
c_rt_lib0move(&___nl__8, c_rt_lib0ov_mk_none(___get_global_const(44)));
#line 353
c_rt_lib0clear(&___nl__0);
#line 353
c_rt_lib0clear(&___nl__1);
#line 353
c_rt_lib0clear(&___nl__2);
#line 353
c_rt_lib0clear(&___nl__3);
#line 353
c_rt_lib0clear(&___nl__6);
#line 353
c_rt_lib0clear(&___nl__7);
#line 353
return ___nl__8;
#line 353
c_rt_lib0clear(&___nl__8);
#line 353
goto label_65;
#line 353
label_65:
#line 353
c_rt_lib0clear(&___nl__7);
#line 354
c_rt_lib0move(&___nl__7, ptd_system_priv0mk_err(___nl__0, ___nl__1));
#line 354
c_rt_lib0clear(&___nl__0);
#line 354
c_rt_lib0clear(&___nl__1);
#line 354
c_rt_lib0clear(&___nl__2);
#line 354
c_rt_lib0clear(&___nl__3);
#line 354
c_rt_lib0clear(&___nl__6);
#line 354
return ___nl__7;
#line 354
c_rt_lib0clear(&___nl__7);
#line 355
goto label_14;
#line 355
label_22:
#line 355
c_rt_lib0move(&___nl__7, c_rt_lib0priv_as(___nl__0, ___get_global_const(729)));
#line 356
c_rt_lib0move(&___nl__9,___get_global_const(729));
#line 356
c_rt_lib0move(&___nl__8, ov0is(___nl__1, ___nl__9));
#line 356
c_rt_lib0clear(&___nl__9);
#line 356
c_rt_lib0move(&___nl__8, c_rt_lib0not(___nl__8));
#line 356
c_rt_lib0move(&___nl__8, c_rt_lib0not(___nl__8));
#line 356
if(c_rt_lib0check_true_native(___nl__8)){ goto label_67;}
#line 356
c_rt_lib0move(&___nl__9, ptd_system_priv0mk_err(___nl__0, ___nl__1));
#line 356
c_rt_lib0clear(&___nl__0);
#line 356
c_rt_lib0clear(&___nl__1);
#line 356
c_rt_lib0clear(&___nl__2);
#line 356
c_rt_lib0clear(&___nl__3);
#line 356
c_rt_lib0clear(&___nl__6);
#line 356
c_rt_lib0clear(&___nl__7);
#line 356
c_rt_lib0clear(&___nl__8);
#line 356
return ___nl__9;
#line 356
c_rt_lib0clear(&___nl__9);
#line 356
goto label_67;
#line 356
label_67:
#line 356
c_rt_lib0clear(&___nl__8);
#line 357
c_rt_lib0copy(&___nl__8, ___nl__1);
#line 357
c_rt_lib0move(&___nl__8, c_rt_lib0priv_as(___nl__8, ___get_global_const(729)));
#line 359
c_rt_lib0move(&___nl__11, c_rt_lib0init_iter(___nl__8));
#line 359
label_70:
#line 359
c_rt_lib0move(&___nl__9, c_rt_lib0is_end_hash(___nl__11));
#line 359
if(c_rt_lib0check_true_native(___nl__9)){ goto label_68;}
#line 359
c_rt_lib0move(&___nl__9, c_rt_lib0get_key_iter(___nl__11));
#line 359
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value(___nl__8, ___nl__9));
#line 360
c_rt_lib0move(&___nl__12, hash0has_key(___nl__7, ___nl__9));
#line 360
c_rt_lib0move(&___nl__12, c_rt_lib0not(___nl__12));
#line 360
c_rt_lib0move(&___nl__12, c_rt_lib0not(___nl__12));
#line 360
if(c_rt_lib0check_true_native(___nl__12)){ goto label_72;}
#line 360
c_rt_lib0move(&___nl__13, ptd_system_priv0mk_err(___nl__0, ___nl__1));
#line 360
c_rt_lib0clear(&___nl__0);
#line 360
c_rt_lib0clear(&___nl__1);
#line 360
c_rt_lib0clear(&___nl__2);
#line 360
c_rt_lib0clear(&___nl__3);
#line 360
c_rt_lib0clear(&___nl__6);
#line 360
c_rt_lib0clear(&___nl__7);
#line 360
c_rt_lib0clear(&___nl__8);
#line 360
c_rt_lib0clear(&___nl__9);
#line 360
c_rt_lib0clear(&___nl__10);
#line 360
c_rt_lib0clear(&___nl__11);
#line 360
c_rt_lib0clear(&___nl__12);
#line 360
return ___nl__13;
#line 360
c_rt_lib0clear(&___nl__13);
#line 360
goto label_72;
#line 360
label_72:
#line 360
c_rt_lib0clear(&___nl__12);
#line 361
c_rt_lib0move(&___nl__12, hash0get_value(___nl__7, ___nl__9));
#line 362
c_rt_lib0move(&___nl__13, c_rt_lib0priv_is(___nl__10, ___get_global_const(733)));
#line 362
if(c_rt_lib0check_true_native(___nl__13)){ goto label_74;}
#line 368
c_rt_lib0move(&___nl__13, c_rt_lib0priv_is(___nl__10, ___get_global_const(734)));
#line 368
if(c_rt_lib0check_true_native(___nl__13)){ goto label_75;}
#line 368
c_rt_lib0move(&___nl__13,___get_global_const(74));
#line 368
c_rt_lib0move(&___nl__13, c_rt_lib0array_mk(2, ___nl__13, ___nl__10));
#line 368
nl_die_arg(___nl__13);
#line 362
label_74:
#line 363
c_rt_lib0move(&___nl__14, c_rt_lib0priv_is(___nl__12, ___get_global_const(733)));
#line 363
if(c_rt_lib0check_true_native(___nl__14)){ goto label_77;}
#line 365
c_rt_lib0move(&___nl__14, c_rt_lib0priv_is(___nl__12, ___get_global_const(734)));
#line 365
if(c_rt_lib0check_true_native(___nl__14)){ goto label_78;}
#line 365
c_rt_lib0move(&___nl__14,___get_global_const(74));
#line 365
c_rt_lib0move(&___nl__14, c_rt_lib0array_mk(2, ___nl__14, ___nl__12));
#line 365
nl_die_arg(___nl__14);
#line 363
label_77:
#line 364
c_rt_lib0clear(&___nl__12);
#line 364
c_rt_lib0clear(&___nl__13);
#line 364
c_rt_lib0clear(&___nl__14);
#line 364
goto label_69;
#line 365
goto label_76;
#line 365
label_78:
#line 365
c_rt_lib0move(&___nl__15, c_rt_lib0priv_as(___nl__12, ___get_global_const(734)));
#line 366
c_rt_lib0move(&___nl__16, ptd_system_priv0mk_err(___nl__0, ___nl__1));
#line 366
c_rt_lib0clear(&___nl__0);
#line 366
c_rt_lib0clear(&___nl__1);
#line 366
c_rt_lib0clear(&___nl__2);
#line 366
c_rt_lib0clear(&___nl__3);
#line 366
c_rt_lib0clear(&___nl__6);
#line 366
c_rt_lib0clear(&___nl__7);
#line 366
c_rt_lib0clear(&___nl__8);
#line 366
c_rt_lib0clear(&___nl__9);
#line 366
c_rt_lib0clear(&___nl__10);
#line 366
c_rt_lib0clear(&___nl__11);
#line 366
c_rt_lib0clear(&___nl__12);
#line 366
c_rt_lib0clear(&___nl__13);
#line 366
c_rt_lib0clear(&___nl__14);
#line 366
c_rt_lib0clear(&___nl__15);
#line 366
return ___nl__16;
#line 366
c_rt_lib0clear(&___nl__16);
#line 366
c_rt_lib0clear(&___nl__15);
#line 367
goto label_76;
#line 367
label_76:
#line 367
c_rt_lib0clear(&___nl__14);
#line 368
goto label_73;
#line 368
label_75:
#line 368
c_rt_lib0move(&___nl__14, c_rt_lib0priv_as(___nl__10, ___get_global_const(734)));
#line 369
c_rt_lib0move(&___nl__15, c_rt_lib0priv_is(___nl__12, ___get_global_const(733)));
#line 369
if(c_rt_lib0check_true_native(___nl__15)){ goto label_80;}
#line 371
c_rt_lib0move(&___nl__15, c_rt_lib0priv_is(___nl__12, ___get_global_const(734)));
#line 371
if(c_rt_lib0check_true_native(___nl__15)){ goto label_81;}
#line 371
c_rt_lib0move(&___nl__15,___get_global_const(74));
#line 371
c_rt_lib0move(&___nl__15, c_rt_lib0array_mk(2, ___nl__15, ___nl__12));
#line 371
nl_die_arg(___nl__15);
#line 369
label_80:
#line 370
c_rt_lib0move(&___nl__16, ptd_system_priv0mk_err(___nl__0, ___nl__1));
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
c_rt_lib0clear(&___nl__13);
#line 370
c_rt_lib0clear(&___nl__14);
#line 370
c_rt_lib0clear(&___nl__15);
#line 370
return ___nl__16;
#line 370
c_rt_lib0clear(&___nl__16);
#line 371
goto label_79;
#line 371
label_81:
#line 371
c_rt_lib0move(&___nl__16, c_rt_lib0priv_as(___nl__12, ___get_global_const(734)));
#line 372
c_rt_lib0move(&___nl__17, ptd_system_priv0check_assignment_info(___nl__16, ___nl__14, ___nl__2, ___nl__3, ___ref___4, ___ref___5));
#line 373
c_rt_lib0move(&___nl__18, c_rt_lib0priv_is(___nl__17, ___get_global_const(44)));
#line 373
if(c_rt_lib0check_true_native(___nl__18)){ goto label_83;}
#line 374
c_rt_lib0move(&___nl__18, c_rt_lib0priv_is(___nl__17, ___get_global_const(43)));
#line 374
if(c_rt_lib0check_true_native(___nl__18)){ goto label_84;}
#line 374
c_rt_lib0move(&___nl__18,___get_global_const(74));
#line 374
c_rt_lib0move(&___nl__18, c_rt_lib0array_mk(2, ___nl__18, ___nl__17));
#line 374
nl_die_arg(___nl__18);
#line 373
label_83:
#line 374
goto label_82;
#line 374
label_84:
#line 374
c_rt_lib0move(&___nl__19, c_rt_lib0priv_as(___nl__17, ___get_global_const(43)));
#line 375
c_rt_lib0move(&___nl__20,___get_global_const(632));
#line 375
c_rt_lib0move(&___nl__20, c_rt_lib0get_ref_hash(___nl__19, ___nl__20));
#line 375
c_rt_lib0move(&___nl__21, c_rt_lib0ov_mk_arg(___get_global_const(950), ___nl__9));
#line 375
c_rt_lib0delete(array0push(&___nl__20, ___nl__21));
#line 375
c_rt_lib0clear(&___nl__21);
#line 375
c_rt_lib0move(&___nl__21,___get_global_const(632));
#line 375
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__19, ___nl__21, ___nl__20));
#line 375
c_rt_lib0clear(&___nl__21);
#line 375
c_rt_lib0clear(&___nl__20);
#line 376
c_rt_lib0move(&___nl__20, c_rt_lib0ov_mk_arg(___get_global_const(43), ___nl__19));
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
c_rt_lib0clear(&___nl__16);
#line 376
c_rt_lib0clear(&___nl__17);
#line 376
c_rt_lib0clear(&___nl__18);
#line 376
c_rt_lib0clear(&___nl__19);
#line 376
return ___nl__20;
#line 376
c_rt_lib0clear(&___nl__20);
#line 376
c_rt_lib0clear(&___nl__19);
#line 377
goto label_82;
#line 377
label_82:
#line 377
c_rt_lib0clear(&___nl__18);
#line 377
c_rt_lib0clear(&___nl__17);
#line 377
c_rt_lib0clear(&___nl__16);
#line 378
goto label_79;
#line 378
label_79:
#line 378
c_rt_lib0clear(&___nl__15);
#line 378
c_rt_lib0clear(&___nl__14);
#line 379
goto label_73;
#line 379
label_73:
#line 379
c_rt_lib0clear(&___nl__13);
#line 379
c_rt_lib0clear(&___nl__12);
#line 379
label_69:
#line 380
c_rt_lib0move(&___nl__11, c_rt_lib0next_iter(___nl__11));
#line 380
goto label_70;
#line 380
label_68:
#line 380
c_rt_lib0clear(&___nl__9);
#line 380
c_rt_lib0clear(&___nl__10);
#line 380
c_rt_lib0clear(&___nl__11);
#line 381
c_rt_lib0move(&___nl__9, c_rt_lib0ov_mk_none(___get_global_const(44)));
#line 381
c_rt_lib0clear(&___nl__0);
#line 381
c_rt_lib0clear(&___nl__1);
#line 381
c_rt_lib0clear(&___nl__2);
#line 381
c_rt_lib0clear(&___nl__3);
#line 381
c_rt_lib0clear(&___nl__6);
#line 381
c_rt_lib0clear(&___nl__7);
#line 381
c_rt_lib0clear(&___nl__8);
#line 381
return ___nl__9;
#line 381
c_rt_lib0clear(&___nl__9);
#line 381
c_rt_lib0clear(&___nl__8);
#line 381
c_rt_lib0clear(&___nl__7);
#line 382
goto label_14;
#line 382
label_23:
#line 383
c_rt_lib0move(&___nl__7, c_rt_lib0array_mk(0));
#line 383
nl_die_arg(___nl__7);
#line 383
c_rt_lib0clear(&___nl__7);
#line 384
goto label_14;
#line 384
label_14:
#line 384
c_rt_lib0clear(&___nl__6);
#line 384
c_rt_lib0clear(&___nl__0);
#line 384
c_rt_lib0clear(&___nl__1);
#line 384
c_rt_lib0clear(&___nl__2);
#line 384
c_rt_lib0clear(&___nl__3);
#line 384
return NULL;
}

ImmT ptd_system_priv0add_delete(ImmT ___nl__0,ImmT * ___ref___1,ImmT * ___ref___2) {
c_rt_lib0arg_val(___nl__0);
ptd_system_priv0__const__init();
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
#line 388
c_rt_lib0move(&___nl__3,___get_global_const(989));
#line 388
c_rt_lib0move(&___nl__3, c_rt_lib0get_ref_hash(*___ref___1, ___nl__3));
#line 388
c_rt_lib0move(&___nl__4,___get_global_const(60));
#line 388
c_rt_lib0move(&___nl__4, c_rt_lib0get_ref_hash(___nl__3, ___nl__4));
#line 388
c_rt_lib0move(&___nl__5,___get_global_const(128));
#line 388
c_rt_lib0move(&___nl__5, c_rt_lib0get_ref_hash(___nl__4, ___nl__5));
#line 388
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(*___ref___2, ___get_global_const(710)));
#line 388
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(*___ref___1, ___get_global_const(989)));
#line 388
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__8, ___get_global_const(709)));
#line 388
c_rt_lib0move(&___nl__6, c_rt_lib0hash_mk(3, ___get_global_const(98), ___nl__7, ___get_global_const(99), ___nl__8, ___get_global_const(990), ___nl__0));
#line 388
c_rt_lib0clear(&___nl__7);
#line 388
c_rt_lib0clear(&___nl__8);
#line 388
c_rt_lib0delete(array0push(&___nl__5, ___nl__6));
#line 388
c_rt_lib0clear(&___nl__6);
#line 388
c_rt_lib0move(&___nl__6,___get_global_const(128));
#line 388
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__4, ___nl__6, ___nl__5));
#line 388
c_rt_lib0move(&___nl__6,___get_global_const(60));
#line 388
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__3, ___nl__6, ___nl__4));
#line 388
c_rt_lib0move(&___nl__6,___get_global_const(989));
#line 388
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___1, ___nl__6, ___nl__3));
#line 388
c_rt_lib0clear(&___nl__6);
#line 388
c_rt_lib0clear(&___nl__3);
#line 388
c_rt_lib0clear(&___nl__4);
#line 388
c_rt_lib0clear(&___nl__5);
#line 388
c_rt_lib0clear(&___nl__0);
#line 388
return NULL;
}

ImmT ptd_system_priv0add_create(ImmT ___nl__0,ImmT * ___ref___1,ImmT * ___ref___2) {
c_rt_lib0arg_val(___nl__0);
ptd_system_priv0__const__init();
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
#line 392
c_rt_lib0move(&___nl__3,___get_global_const(989));
#line 392
c_rt_lib0move(&___nl__3, c_rt_lib0get_ref_hash(*___ref___1, ___nl__3));
#line 392
c_rt_lib0move(&___nl__4,___get_global_const(60));
#line 392
c_rt_lib0move(&___nl__4, c_rt_lib0get_ref_hash(___nl__3, ___nl__4));
#line 392
c_rt_lib0move(&___nl__5,___get_global_const(130));
#line 392
c_rt_lib0move(&___nl__5, c_rt_lib0get_ref_hash(___nl__4, ___nl__5));
#line 392
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(*___ref___2, ___get_global_const(710)));
#line 392
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(*___ref___1, ___get_global_const(989)));
#line 392
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__8, ___get_global_const(709)));
#line 392
c_rt_lib0move(&___nl__6, c_rt_lib0hash_mk(3, ___get_global_const(98), ___nl__7, ___get_global_const(99), ___nl__8, ___get_global_const(990), ___nl__0));
#line 392
c_rt_lib0clear(&___nl__7);
#line 392
c_rt_lib0clear(&___nl__8);
#line 392
c_rt_lib0delete(array0push(&___nl__5, ___nl__6));
#line 392
c_rt_lib0clear(&___nl__6);
#line 392
c_rt_lib0move(&___nl__6,___get_global_const(130));
#line 392
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__4, ___nl__6, ___nl__5));
#line 392
c_rt_lib0move(&___nl__6,___get_global_const(60));
#line 392
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__3, ___nl__6, ___nl__4));
#line 392
c_rt_lib0move(&___nl__6,___get_global_const(989));
#line 392
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___1, ___nl__6, ___nl__3));
#line 392
c_rt_lib0clear(&___nl__6);
#line 392
c_rt_lib0clear(&___nl__3);
#line 392
c_rt_lib0clear(&___nl__4);
#line 392
c_rt_lib0clear(&___nl__5);
#line 392
c_rt_lib0clear(&___nl__0);
#line 392
return NULL;
}

ImmT ptd_system0can_delete0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 3, "ptd_system0can_delete");
return ptd_system0can_delete(_tab[0], &_tab[1], &_tab[2]);}
ImmT ptd_system0can_delete(ImmT ___nl__0,ImmT * ___ref___1,ImmT * ___ref___2) {
c_rt_lib0arg_val(___nl__0);
ptd_system_priv0__const__init();
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
#line 396
label_2:
#line 396
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(72)));
#line 396
c_rt_lib0move(&___nl__5,___get_global_const(726));
#line 396
c_rt_lib0move(&___nl__3, ov0is(___nl__4, ___nl__5));
#line 396
c_rt_lib0clear(&___nl__5);
#line 396
c_rt_lib0clear(&___nl__4);
#line 396
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 396
if(c_rt_lib0check_true_native(___nl__3)){ goto label_1;}
#line 397
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(72)));
#line 397
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__4, ___get_global_const(726)));
#line 398
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(39)));
#line 398
c_rt_lib0move(&___nl__5, ptd_system0is_known(___nl__6));
#line 398
c_rt_lib0clear(&___nl__6);
#line 398
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 398
if(c_rt_lib0check_true_native(___nl__5)){ goto label_4;}
#line 398
c_rt_lib0delete(ptd_system_priv0add_delete(___nl__4, ___ref___1, ___ref___2));
#line 398
goto label_4;
#line 398
label_4:
#line 398
c_rt_lib0clear(&___nl__5);
#line 399
c_rt_lib0move(&___nl__5, ptd_system0get_ref_type(___nl__4, ___ref___1, ___ref___2));
#line 399
c_rt_lib0copy(&___nl__6, ___nl__5);
#line 399
c_rt_lib0hash_set_value_dec(&___nl__0, ___get_global_const(72), ___nl__6);
#line 399
c_rt_lib0clear(&___nl__5);
#line 399
c_rt_lib0clear(&___nl__6);
#line 399
c_rt_lib0clear(&___nl__4);
#line 400
goto label_2;
#line 400
label_1:
#line 400
c_rt_lib0clear(&___nl__3);
#line 401
return ___nl__0;
#line 401
c_rt_lib0clear(&___nl__0);
#line 401
return NULL;
}

ImmT ptd_system0can_create0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 3, "ptd_system0can_create");
return ptd_system0can_create(_tab[0], &_tab[1], &_tab[2]);}
ImmT ptd_system0can_create(ImmT ___nl__0,ImmT * ___ref___1,ImmT * ___ref___2) {
c_rt_lib0arg_val(___nl__0);
ptd_system_priv0__const__init();
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
#line 405
label_2:
#line 405
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(72)));
#line 405
c_rt_lib0move(&___nl__5,___get_global_const(726));
#line 405
c_rt_lib0move(&___nl__3, ov0is(___nl__4, ___nl__5));
#line 405
c_rt_lib0clear(&___nl__5);
#line 405
c_rt_lib0clear(&___nl__4);
#line 405
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 405
if(c_rt_lib0check_true_native(___nl__3)){ goto label_1;}
#line 406
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(72)));
#line 406
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__4, ___get_global_const(726)));
#line 407
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(39)));
#line 407
c_rt_lib0move(&___nl__5, ptd_system0is_known(___nl__6));
#line 407
c_rt_lib0clear(&___nl__6);
#line 407
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 407
if(c_rt_lib0check_true_native(___nl__5)){ goto label_4;}
#line 407
c_rt_lib0delete(ptd_system_priv0add_create(___nl__4, ___ref___1, ___ref___2));
#line 407
goto label_4;
#line 407
label_4:
#line 407
c_rt_lib0clear(&___nl__5);
#line 408
c_rt_lib0move(&___nl__5, ptd_system0get_ref_type(___nl__4, ___ref___1, ___ref___2));
#line 408
c_rt_lib0copy(&___nl__6, ___nl__5);
#line 408
c_rt_lib0hash_set_value_dec(&___nl__0, ___get_global_const(72), ___nl__6);
#line 408
c_rt_lib0clear(&___nl__5);
#line 408
c_rt_lib0clear(&___nl__6);
#line 408
c_rt_lib0clear(&___nl__4);
#line 409
goto label_2;
#line 409
label_1:
#line 409
c_rt_lib0clear(&___nl__3);
#line 410
return ___nl__0;
#line 410
c_rt_lib0clear(&___nl__0);
#line 410
return NULL;
}

ImmT ptd_system_priv0walk_on_type(ImmT ___nl__0,ImmT ___nl__1,ImmT ___nl__2,ImmT * ___ref___3,ImmT * ___ref___4) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
c_rt_lib0arg_val(___nl__2);
ptd_system_priv0__const__init();
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
#line 414
c_rt_lib0move(&___nl__5, c_rt_lib0hash_mk(0));
#line 415
c_rt_lib0delete(ptd_system_priv0get_ref_in_type(___nl__0, &___nl__5));
#line 416
c_rt_lib0copy(&___nl__6, ___nl__5);
#line 417
c_rt_lib0move(&___nl__9, c_rt_lib0init_iter(___nl__6));
#line 417
label_3:
#line 417
c_rt_lib0move(&___nl__7, c_rt_lib0is_end_hash(___nl__9));
#line 417
if(c_rt_lib0check_true_native(___nl__7)){ goto label_1;}
#line 417
c_rt_lib0move(&___nl__7, c_rt_lib0get_key_iter(___nl__9));
#line 417
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value(___nl__6, ___nl__7));
#line 418
c_rt_lib0move(&___nl__10, ptd_system_priv0get_function_def(___nl__7, ___ref___3, ___ref___4));
#line 419
c_rt_lib0move(&___nl__11, array0len(___nl__10));
#line 419
c_rt_lib0move(&___nl__12,___get_global_const(1));
#line 419
c_rt_lib0move(&___nl__11, c_rt_lib0num_eq(___nl__11, ___nl__12));
#line 419
c_rt_lib0clear(&___nl__12);
#line 419
c_rt_lib0move(&___nl__11, c_rt_lib0not(___nl__11));
#line 419
if(c_rt_lib0check_true_native(___nl__11)){ goto label_5;}
#line 419
c_rt_lib0clear(&___nl__0);
#line 419
c_rt_lib0clear(&___nl__1);
#line 419
c_rt_lib0clear(&___nl__2);
#line 419
c_rt_lib0clear(&___nl__5);
#line 419
c_rt_lib0clear(&___nl__6);
#line 419
c_rt_lib0clear(&___nl__7);
#line 419
c_rt_lib0clear(&___nl__8);
#line 419
c_rt_lib0clear(&___nl__9);
#line 419
c_rt_lib0clear(&___nl__10);
#line 419
c_rt_lib0clear(&___nl__11);
#line 419
return NULL;
#line 419
goto label_5;
#line 419
label_5:
#line 419
c_rt_lib0clear(&___nl__11);
#line 420
c_rt_lib0move(&___nl__12,___get_global_const(1));
#line 420
c_rt_lib0move(&___nl__11, c_rt_lib0array_get(___nl__10, ___nl__12));
#line 420
c_rt_lib0clear(&___nl__12);
#line 420
c_rt_lib0copy(&___nl__10, ___nl__11);
#line 420
c_rt_lib0clear(&___nl__11);
#line 421
c_rt_lib0move(&___nl__11, c_rt_lib0hash_get_value_dec(___nl__10, ___get_global_const(991)));
#line 421
c_rt_lib0move(&___nl__12, c_rt_lib0priv_is(___nl__11, ___get_global_const(41)));
#line 421
if(c_rt_lib0check_true_native(___nl__12)){ goto label_7;}
#line 425
c_rt_lib0move(&___nl__12, c_rt_lib0priv_is(___nl__11, ___get_global_const(42)));
#line 425
if(c_rt_lib0check_true_native(___nl__12)){ goto label_8;}
#line 425
c_rt_lib0move(&___nl__12,___get_global_const(74));
#line 425
c_rt_lib0move(&___nl__12, c_rt_lib0array_mk(2, ___nl__12, ___nl__11));
#line 425
nl_die_arg(___nl__12);
#line 421
label_7:
#line 421
c_rt_lib0move(&___nl__13, c_rt_lib0priv_as(___nl__11, ___get_global_const(41)));
#line 422
c_rt_lib0move(&___nl__15,___get_global_const(1));
#line 422
c_rt_lib0move(&___nl__16,___get_global_const(2));
#line 422
c_rt_lib0move(&___nl__17, c_rt_lib0array_len(___nl__13));
#line 422
label_11:
#line 422
c_rt_lib0move(&___nl__18, c_rt_lib0ge(___nl__15, ___nl__17));
#line 422
if(c_rt_lib0check_true_native(___nl__18)){ goto label_9;}
#line 422
c_rt_lib0move(&___nl__14, c_rt_lib0array_get(___nl__13, ___nl__15));
#line 423
c_rt_lib0move(&___nl__19,___get_global_const(0));
#line 423
c_rt_lib0delete(hash0set_value(&___nl__5, ___nl__14, ___nl__19));
#line 423
c_rt_lib0clear(&___nl__19);
#line 424
c_rt_lib0move(&___nl__15, c_rt_lib0add_mod(___nl__15, ___nl__16));
#line 424
goto label_11;
#line 424
label_9:
#line 424
c_rt_lib0clear(&___nl__14);
#line 424
c_rt_lib0clear(&___nl__15);
#line 424
c_rt_lib0clear(&___nl__16);
#line 424
c_rt_lib0clear(&___nl__17);
#line 424
c_rt_lib0clear(&___nl__18);
#line 424
c_rt_lib0clear(&___nl__13);
#line 425
goto label_6;
#line 425
label_8:
#line 426
c_rt_lib0move(&___nl__13, ptd_system0get_ref_type(___nl__7, ___ref___3, ___ref___4));
#line 426
c_rt_lib0copy(&___nl__0, ___nl__13);
#line 426
c_rt_lib0clear(&___nl__13);
#line 427
c_rt_lib0move(&___nl__13, c_rt_lib0hash_mk(0));
#line 428
c_rt_lib0delete(ptd_system_priv0get_all_ref_in_type(___nl__0, &___nl__13, ___ref___3, ___ref___4));
#line 429
c_rt_lib0move(&___nl__14, c_rt_lib0array_mk(0));
#line 430
c_rt_lib0move(&___nl__17, c_rt_lib0init_iter(___nl__13));
#line 430
label_14:
#line 430
c_rt_lib0move(&___nl__15, c_rt_lib0is_end_hash(___nl__17));
#line 430
if(c_rt_lib0check_true_native(___nl__15)){ goto label_12;}
#line 430
c_rt_lib0move(&___nl__15, c_rt_lib0get_key_iter(___nl__17));
#line 430
c_rt_lib0move(&___nl__16, c_rt_lib0hash_get_value(___nl__13, ___nl__15));
#line 431
c_rt_lib0move(&___nl__18,___get_global_const(0));
#line 431
c_rt_lib0delete(hash0set_value(&___nl__5, ___nl__15, ___nl__18));
#line 431
c_rt_lib0clear(&___nl__18);
#line 432
c_rt_lib0delete(array0push(&___nl__14, ___nl__15));
#line 433
c_rt_lib0move(&___nl__17, c_rt_lib0next_iter(___nl__17));
#line 433
goto label_14;
#line 433
label_12:
#line 433
c_rt_lib0clear(&___nl__15);
#line 433
c_rt_lib0clear(&___nl__16);
#line 433
c_rt_lib0clear(&___nl__17);
#line 434
c_rt_lib0move(&___nl__15, ptd_system_priv0get_function_def(___nl__7, ___ref___3, ___ref___4));
#line 434
c_rt_lib0move(&___nl__16,___get_global_const(1));
#line 434
c_rt_lib0move(&___nl__15, c_rt_lib0array_get(___nl__15, ___nl__16));
#line 434
c_rt_lib0clear(&___nl__16);
#line 434
c_rt_lib0copy(&___nl__10, ___nl__15);
#line 434
c_rt_lib0clear(&___nl__15);
#line 435
c_rt_lib0move(&___nl__15, c_rt_lib0ov_mk_arg(___get_global_const(41), ___nl__14));
#line 435
c_rt_lib0copy(&___nl__16, ___nl__15);
#line 435
c_rt_lib0hash_set_value_dec(&___nl__10, ___get_global_const(991), ___nl__16);
#line 435
c_rt_lib0clear(&___nl__15);
#line 435
c_rt_lib0clear(&___nl__16);
#line 436
c_rt_lib0move(&___nl__16, c_rt_lib0hash_get_value_dec(*___ref___3, ___get_global_const(992)));
#line 436
c_rt_lib0move(&___nl__17, c_rt_lib0hash_get_value_dec(___nl__10, ___get_global_const(99)));
#line 436
c_rt_lib0move(&___nl__15, hash0get_value(___nl__16, ___nl__17));
#line 436
c_rt_lib0clear(&___nl__17);
#line 436
c_rt_lib0clear(&___nl__16);
#line 437
c_rt_lib0move(&___nl__16, c_rt_lib0hash_get_value_dec(___nl__10, ___get_global_const(76)));
#line 437
c_rt_lib0delete(hash0set_value(&___nl__15, ___nl__16, ___nl__10));
#line 437
c_rt_lib0clear(&___nl__16);
#line 438
c_rt_lib0move(&___nl__16,___get_global_const(992));
#line 438
c_rt_lib0move(&___nl__16, c_rt_lib0get_ref_hash(*___ref___3, ___nl__16));
#line 438
c_rt_lib0move(&___nl__17, c_rt_lib0hash_get_value_dec(___nl__10, ___get_global_const(99)));
#line 438
c_rt_lib0delete(hash0set_value(&___nl__16, ___nl__17, ___nl__15));
#line 438
c_rt_lib0clear(&___nl__17);
#line 438
c_rt_lib0move(&___nl__17,___get_global_const(992));
#line 438
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___3, ___nl__17, ___nl__16));
#line 438
c_rt_lib0clear(&___nl__17);
#line 438
c_rt_lib0clear(&___nl__16);
#line 438
c_rt_lib0clear(&___nl__13);
#line 438
c_rt_lib0clear(&___nl__14);
#line 438
c_rt_lib0clear(&___nl__15);
#line 439
goto label_6;
#line 439
label_6:
#line 439
c_rt_lib0clear(&___nl__11);
#line 439
c_rt_lib0clear(&___nl__12);
#line 439
c_rt_lib0clear(&___nl__10);
#line 440
c_rt_lib0move(&___nl__9, c_rt_lib0next_iter(___nl__9));
#line 440
goto label_3;
#line 440
label_1:
#line 440
c_rt_lib0clear(&___nl__7);
#line 440
c_rt_lib0clear(&___nl__8);
#line 440
c_rt_lib0clear(&___nl__9);
#line 441
c_rt_lib0move(&___nl__9, c_rt_lib0init_iter(___nl__5));
#line 441
label_17:
#line 441
c_rt_lib0move(&___nl__7, c_rt_lib0is_end_hash(___nl__9));
#line 441
if(c_rt_lib0check_true_native(___nl__7)){ goto label_15;}
#line 441
c_rt_lib0move(&___nl__7, c_rt_lib0get_key_iter(___nl__9));
#line 441
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value(___nl__5, ___nl__7));
#line 442
c_rt_lib0move(&___nl__10, hash0has_key(___nl__2, ___nl__7));
#line 442
c_rt_lib0move(&___nl__10, c_rt_lib0not(___nl__10));
#line 442
if(c_rt_lib0check_true_native(___nl__10)){ goto label_19;}
#line 442
c_rt_lib0clear(&___nl__10);
#line 442
goto label_16;
#line 442
goto label_19;
#line 442
label_19:
#line 442
c_rt_lib0clear(&___nl__10);
#line 443
c_rt_lib0move(&___nl__10, c_rt_lib0priv_is(___nl__1, ___get_global_const(130)));
#line 443
if(c_rt_lib0check_true_native(___nl__10)){ goto label_21;}
#line 445
c_rt_lib0move(&___nl__10, c_rt_lib0priv_is(___nl__1, ___get_global_const(128)));
#line 445
if(c_rt_lib0check_true_native(___nl__10)){ goto label_22;}
#line 445
c_rt_lib0move(&___nl__10,___get_global_const(74));
#line 445
c_rt_lib0move(&___nl__10, c_rt_lib0array_mk(2, ___nl__10, ___nl__1));
#line 445
nl_die_arg(___nl__10);
#line 443
label_21:
#line 444
c_rt_lib0delete(ptd_system_priv0add_create(___nl__7, ___ref___3, ___ref___4));
#line 445
goto label_20;
#line 445
label_22:
#line 446
c_rt_lib0delete(ptd_system_priv0add_delete(___nl__7, ___ref___3, ___ref___4));
#line 447
goto label_20;
#line 447
label_20:
#line 447
c_rt_lib0clear(&___nl__10);
#line 447
label_16:
#line 448
c_rt_lib0move(&___nl__9, c_rt_lib0next_iter(___nl__9));
#line 448
goto label_17;
#line 448
label_15:
#line 448
c_rt_lib0clear(&___nl__7);
#line 448
c_rt_lib0clear(&___nl__8);
#line 448
c_rt_lib0clear(&___nl__9);
#line 448
c_rt_lib0clear(&___nl__5);
#line 448
c_rt_lib0clear(&___nl__6);
#line 448
c_rt_lib0clear(&___nl__0);
#line 448
c_rt_lib0clear(&___nl__1);
#line 448
c_rt_lib0clear(&___nl__2);
#line 448
return NULL;
}

ImmT ptd_system_priv0get_all_ref_in_type(ImmT ___nl__0,ImmT * ___ref___1,ImmT * ___ref___2,ImmT * ___ref___3) {
c_rt_lib0arg_val(___nl__0);
ptd_system_priv0__const__init();
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
#line 452
c_rt_lib0move(&___nl__4, c_rt_lib0hash_mk(0));
#line 453
c_rt_lib0delete(ptd_system_priv0get_ref_in_type(___nl__0, &___nl__4));
#line 454
c_rt_lib0move(&___nl__7, c_rt_lib0init_iter(___nl__4));
#line 454
label_3:
#line 454
c_rt_lib0move(&___nl__5, c_rt_lib0is_end_hash(___nl__7));
#line 454
if(c_rt_lib0check_true_native(___nl__5)){ goto label_1;}
#line 454
c_rt_lib0move(&___nl__5, c_rt_lib0get_key_iter(___nl__7));
#line 454
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value(___nl__4, ___nl__5));
#line 455
c_rt_lib0move(&___nl__8, hash0has_key(*___ref___1, ___nl__5));
#line 455
c_rt_lib0move(&___nl__8, c_rt_lib0not(___nl__8));
#line 455
if(c_rt_lib0check_true_native(___nl__8)){ goto label_5;}
#line 455
c_rt_lib0clear(&___nl__8);
#line 455
goto label_2;
#line 455
goto label_5;
#line 455
label_5:
#line 455
c_rt_lib0clear(&___nl__8);
#line 456
c_rt_lib0move(&___nl__8,___get_global_const(0));
#line 456
c_rt_lib0delete(hash0set_value(___ref___1, ___nl__5, ___nl__8));
#line 456
c_rt_lib0clear(&___nl__8);
#line 457
c_rt_lib0move(&___nl__8, ptd_system0get_ref_type(___nl__5, ___ref___2, ___ref___3));
#line 457
c_rt_lib0copy(&___nl__0, ___nl__8);
#line 457
c_rt_lib0clear(&___nl__8);
#line 458
c_rt_lib0delete(ptd_system_priv0get_all_ref_in_type(___nl__0, ___ref___1, ___ref___2, ___ref___3));
#line 458
label_2:
#line 459
c_rt_lib0move(&___nl__7, c_rt_lib0next_iter(___nl__7));
#line 459
goto label_3;
#line 459
label_1:
#line 459
c_rt_lib0clear(&___nl__5);
#line 459
c_rt_lib0clear(&___nl__6);
#line 459
c_rt_lib0clear(&___nl__7);
#line 459
c_rt_lib0clear(&___nl__4);
#line 459
c_rt_lib0clear(&___nl__0);
#line 459
return NULL;
}

ImmT ptd_system_priv0get_ref_in_type(ImmT ___nl__0,ImmT * ___ref___1) {
c_rt_lib0arg_val(___nl__0);
ptd_system_priv0__const__init();
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
#line 462
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__0, ___get_global_const(722)));
#line 462
if(c_rt_lib0check_true_native(___nl__2)){ goto label_2;}
#line 463
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__0, ___get_global_const(723)));
#line 463
if(c_rt_lib0check_true_native(___nl__2)){ goto label_3;}
#line 465
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__0, ___get_global_const(724)));
#line 465
if(c_rt_lib0check_true_native(___nl__2)){ goto label_4;}
#line 467
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__0, ___get_global_const(725)));
#line 467
if(c_rt_lib0check_true_native(___nl__2)){ goto label_5;}
#line 471
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__0, ___get_global_const(726)));
#line 471
if(c_rt_lib0check_true_native(___nl__2)){ goto label_6;}
#line 473
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__0, ___get_global_const(727)));
#line 473
if(c_rt_lib0check_true_native(___nl__2)){ goto label_7;}
#line 474
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__0, ___get_global_const(728)));
#line 474
if(c_rt_lib0check_true_native(___nl__2)){ goto label_8;}
#line 475
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__0, ___get_global_const(729)));
#line 475
if(c_rt_lib0check_true_native(___nl__2)){ goto label_9;}
#line 482
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__0, ___get_global_const(730)));
#line 482
if(c_rt_lib0check_true_native(___nl__2)){ goto label_10;}
#line 482
c_rt_lib0move(&___nl__2,___get_global_const(74));
#line 482
c_rt_lib0move(&___nl__2, c_rt_lib0array_mk(2, ___nl__2, ___nl__0));
#line 482
nl_die_arg(___nl__2);
#line 462
label_2:
#line 463
goto label_1;
#line 463
label_3:
#line 463
c_rt_lib0move(&___nl__3, c_rt_lib0priv_as(___nl__0, ___get_global_const(723)));
#line 464
c_rt_lib0delete(ptd_system_priv0get_ref_in_type(___nl__3, ___ref___1));
#line 464
c_rt_lib0clear(&___nl__3);
#line 465
goto label_1;
#line 465
label_4:
#line 465
c_rt_lib0move(&___nl__3, c_rt_lib0priv_as(___nl__0, ___get_global_const(724)));
#line 466
c_rt_lib0delete(ptd_system_priv0get_ref_in_type(___nl__3, ___ref___1));
#line 466
c_rt_lib0clear(&___nl__3);
#line 467
goto label_1;
#line 467
label_5:
#line 467
c_rt_lib0move(&___nl__3, c_rt_lib0priv_as(___nl__0, ___get_global_const(725)));
#line 468
c_rt_lib0move(&___nl__6, c_rt_lib0init_iter(___nl__3));
#line 468
label_13:
#line 468
c_rt_lib0move(&___nl__4, c_rt_lib0is_end_hash(___nl__6));
#line 468
if(c_rt_lib0check_true_native(___nl__4)){ goto label_11;}
#line 468
c_rt_lib0move(&___nl__4, c_rt_lib0get_key_iter(___nl__6));
#line 468
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value(___nl__3, ___nl__4));
#line 469
c_rt_lib0delete(ptd_system_priv0get_ref_in_type(___nl__5, ___ref___1));
#line 470
c_rt_lib0move(&___nl__6, c_rt_lib0next_iter(___nl__6));
#line 470
goto label_13;
#line 470
label_11:
#line 470
c_rt_lib0clear(&___nl__4);
#line 470
c_rt_lib0clear(&___nl__5);
#line 470
c_rt_lib0clear(&___nl__6);
#line 470
c_rt_lib0clear(&___nl__3);
#line 471
goto label_1;
#line 471
label_6:
#line 471
c_rt_lib0move(&___nl__3, c_rt_lib0priv_as(___nl__0, ___get_global_const(726)));
#line 472
c_rt_lib0move(&___nl__4,___get_global_const(0));
#line 472
c_rt_lib0delete(hash0set_value(___ref___1, ___nl__3, ___nl__4));
#line 472
c_rt_lib0clear(&___nl__4);
#line 472
c_rt_lib0clear(&___nl__3);
#line 473
goto label_1;
#line 473
label_7:
#line 474
goto label_1;
#line 474
label_8:
#line 475
goto label_1;
#line 475
label_9:
#line 475
c_rt_lib0move(&___nl__3, c_rt_lib0priv_as(___nl__0, ___get_global_const(729)));
#line 476
c_rt_lib0move(&___nl__6, c_rt_lib0init_iter(___nl__3));
#line 476
label_16:
#line 476
c_rt_lib0move(&___nl__4, c_rt_lib0is_end_hash(___nl__6));
#line 476
if(c_rt_lib0check_true_native(___nl__4)){ goto label_14;}
#line 476
c_rt_lib0move(&___nl__4, c_rt_lib0get_key_iter(___nl__6));
#line 476
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value(___nl__3, ___nl__4));
#line 477
c_rt_lib0move(&___nl__7, c_rt_lib0priv_is(___nl__5, ___get_global_const(733)));
#line 477
if(c_rt_lib0check_true_native(___nl__7)){ goto label_18;}
#line 478
c_rt_lib0move(&___nl__7, c_rt_lib0priv_is(___nl__5, ___get_global_const(734)));
#line 478
if(c_rt_lib0check_true_native(___nl__7)){ goto label_19;}
#line 478
c_rt_lib0move(&___nl__7,___get_global_const(74));
#line 478
c_rt_lib0move(&___nl__7, c_rt_lib0array_mk(2, ___nl__7, ___nl__5));
#line 478
nl_die_arg(___nl__7);
#line 477
label_18:
#line 478
goto label_17;
#line 478
label_19:
#line 478
c_rt_lib0move(&___nl__8, c_rt_lib0priv_as(___nl__5, ___get_global_const(734)));
#line 479
c_rt_lib0delete(ptd_system_priv0get_ref_in_type(___nl__8, ___ref___1));
#line 479
c_rt_lib0clear(&___nl__8);
#line 480
goto label_17;
#line 480
label_17:
#line 480
c_rt_lib0clear(&___nl__7);
#line 481
c_rt_lib0move(&___nl__6, c_rt_lib0next_iter(___nl__6));
#line 481
goto label_16;
#line 481
label_14:
#line 481
c_rt_lib0clear(&___nl__4);
#line 481
c_rt_lib0clear(&___nl__5);
#line 481
c_rt_lib0clear(&___nl__6);
#line 481
c_rt_lib0clear(&___nl__3);
#line 482
goto label_1;
#line 482
label_10:
#line 483
goto label_1;
#line 483
label_1:
#line 483
c_rt_lib0clear(&___nl__2);
#line 483
c_rt_lib0clear(&___nl__0);
#line 483
return NULL;
}

ImmT ptd_system_priv0get_function_def(ImmT ___nl__0,ImmT * ___ref___1,ImmT * ___ref___2) {
c_rt_lib0arg_val(___nl__0);
ptd_system_priv0__const__init();
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
ImmT ___nl__9 = NULL;
ImmT ___nl__10 = NULL;
#line 489
c_rt_lib0move(&___nl__6,___get_global_const(579));
#line 489
c_rt_lib0move(&___nl__5, string0index2(___nl__0, ___nl__6));
#line 489
c_rt_lib0clear(&___nl__6);
#line 490
c_rt_lib0move(&___nl__6,___get_global_const(1));
#line 490
c_rt_lib0move(&___nl__6, c_rt_lib0ge(___nl__5, ___nl__6));
#line 490
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 490
if(c_rt_lib0check_true_native(___nl__6)){ goto label_2;}
#line 491
c_rt_lib0move(&___nl__8,___get_global_const(1));
#line 491
c_rt_lib0move(&___nl__7, string0substr(___nl__0, ___nl__8, ___nl__5));
#line 491
c_rt_lib0clear(&___nl__8);
#line 491
c_rt_lib0copy(&___nl__3, ___nl__7);
#line 491
c_rt_lib0clear(&___nl__7);
#line 492
c_rt_lib0move(&___nl__8,___get_global_const(137));
#line 492
c_rt_lib0move(&___nl__8, c_rt_lib0add(___nl__5, ___nl__8));
#line 492
c_rt_lib0move(&___nl__9, string0length(___nl__0));
#line 492
c_rt_lib0move(&___nl__9, c_rt_lib0sub_mod(___nl__9, ___nl__5));
#line 492
c_rt_lib0move(&___nl__10,___get_global_const(137));
#line 492
c_rt_lib0move(&___nl__9, c_rt_lib0sub_mod(___nl__9, ___nl__10));
#line 492
c_rt_lib0clear(&___nl__10);
#line 492
c_rt_lib0move(&___nl__7, string0substr(___nl__0, ___nl__8, ___nl__9));
#line 492
c_rt_lib0clear(&___nl__9);
#line 492
c_rt_lib0clear(&___nl__8);
#line 492
c_rt_lib0copy(&___nl__4, ___nl__7);
#line 492
c_rt_lib0clear(&___nl__7);
#line 493
goto label_1;
#line 493
label_2:
#line 494
c_rt_lib0move(&___nl__7,___get_global_const(993));
#line 494
c_rt_lib0move(&___nl__7, c_rt_lib0concat_add(___nl__7, ___nl__0));
#line 494
c_rt_lib0move(&___nl__8,___get_global_const(732));
#line 494
c_rt_lib0move(&___nl__7, c_rt_lib0concat_add(___nl__7, ___nl__8));
#line 494
c_rt_lib0clear(&___nl__8);
#line 494
c_rt_lib0delete(ptd_system_priv0add_error(___ref___2, ___nl__7));
#line 494
c_rt_lib0clear(&___nl__7);
#line 495
c_rt_lib0move(&___nl__7, c_rt_lib0array_mk(0));
#line 495
c_rt_lib0clear(&___nl__0);
#line 495
c_rt_lib0clear(&___nl__3);
#line 495
c_rt_lib0clear(&___nl__4);
#line 495
c_rt_lib0clear(&___nl__5);
#line 495
c_rt_lib0clear(&___nl__6);
#line 495
return ___nl__7;
#line 495
c_rt_lib0clear(&___nl__7);
#line 496
goto label_1;
#line 496
label_1:
#line 496
c_rt_lib0clear(&___nl__6);
#line 497
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(*___ref___1, ___get_global_const(992)));
#line 497
c_rt_lib0move(&___nl__6, hash0has_key(___nl__7, ___nl__3));
#line 497
c_rt_lib0clear(&___nl__7);
#line 497
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 497
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 497
if(c_rt_lib0check_true_native(___nl__6)){ goto label_4;}
#line 498
c_rt_lib0move(&___nl__7, c_rt_lib0array_mk(0));
#line 498
c_rt_lib0clear(&___nl__0);
#line 498
c_rt_lib0clear(&___nl__3);
#line 498
c_rt_lib0clear(&___nl__4);
#line 498
c_rt_lib0clear(&___nl__5);
#line 498
c_rt_lib0clear(&___nl__6);
#line 498
return ___nl__7;
#line 498
c_rt_lib0clear(&___nl__7);
#line 499
goto label_4;
#line 499
label_4:
#line 499
c_rt_lib0clear(&___nl__6);
#line 501
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(*___ref___1, ___get_global_const(992)));
#line 501
c_rt_lib0move(&___nl__6, hash0get_value(___nl__7, ___nl__3));
#line 501
c_rt_lib0clear(&___nl__7);
#line 502
c_rt_lib0move(&___nl__7, hash0has_key(___nl__6, ___nl__4));
#line 502
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 502
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 502
if(c_rt_lib0check_true_native(___nl__7)){ goto label_6;}
#line 503
c_rt_lib0move(&___nl__8,___get_global_const(994));
#line 503
c_rt_lib0move(&___nl__8, c_rt_lib0concat_add(___nl__8, ___nl__0));
#line 503
c_rt_lib0move(&___nl__9,___get_global_const(995));
#line 503
c_rt_lib0move(&___nl__8, c_rt_lib0concat_add(___nl__8, ___nl__9));
#line 503
c_rt_lib0clear(&___nl__9);
#line 503
c_rt_lib0delete(ptd_system_priv0add_error(___ref___2, ___nl__8));
#line 503
c_rt_lib0clear(&___nl__8);
#line 504
c_rt_lib0move(&___nl__8, c_rt_lib0array_mk(0));
#line 504
c_rt_lib0clear(&___nl__0);
#line 504
c_rt_lib0clear(&___nl__3);
#line 504
c_rt_lib0clear(&___nl__4);
#line 504
c_rt_lib0clear(&___nl__5);
#line 504
c_rt_lib0clear(&___nl__6);
#line 504
c_rt_lib0clear(&___nl__7);
#line 504
return ___nl__8;
#line 504
c_rt_lib0clear(&___nl__8);
#line 505
goto label_6;
#line 505
label_6:
#line 505
c_rt_lib0clear(&___nl__7);
#line 507
c_rt_lib0move(&___nl__8, hash0get_value(___nl__6, ___nl__4));
#line 507
c_rt_lib0move(&___nl__7, c_rt_lib0array_mk(1, ___nl__8));
#line 507
c_rt_lib0clear(&___nl__8);
#line 507
c_rt_lib0clear(&___nl__0);
#line 507
c_rt_lib0clear(&___nl__3);
#line 507
c_rt_lib0clear(&___nl__4);
#line 507
c_rt_lib0clear(&___nl__5);
#line 507
c_rt_lib0clear(&___nl__6);
#line 507
return ___nl__7;
#line 507
c_rt_lib0clear(&___nl__7);
#line 507
c_rt_lib0clear(&___nl__3);
#line 507
c_rt_lib0clear(&___nl__4);
#line 507
c_rt_lib0clear(&___nl__5);
#line 507
c_rt_lib0clear(&___nl__6);
#line 507
c_rt_lib0clear(&___nl__0);
#line 507
return NULL;
}

ImmT ptd_system0get_ref_type0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 3, "ptd_system0get_ref_type");
return ptd_system0get_ref_type(_tab[0], &_tab[1], &_tab[2]);}
ImmT ptd_system0get_ref_type(ImmT ___nl__0,ImmT * ___ref___1,ImmT * ___ref___2) {
c_rt_lib0arg_val(___nl__0);
ptd_system_priv0__const__init();
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
#line 511
c_rt_lib0move(&___nl__3, ptd_system_priv0get_function_def(___nl__0, ___ref___1, ___ref___2));
#line 512
c_rt_lib0move(&___nl__4, array0len(___nl__3));
#line 512
c_rt_lib0move(&___nl__5,___get_global_const(1));
#line 512
c_rt_lib0move(&___nl__4, c_rt_lib0num_eq(___nl__4, ___nl__5));
#line 512
c_rt_lib0clear(&___nl__5);
#line 512
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 512
if(c_rt_lib0check_true_native(___nl__4)){ goto label_2;}
#line 512
c_rt_lib0move(&___nl__5, tct0tct_im());
#line 512
c_rt_lib0clear(&___nl__0);
#line 512
c_rt_lib0clear(&___nl__3);
#line 512
c_rt_lib0clear(&___nl__4);
#line 512
return ___nl__5;
#line 512
c_rt_lib0clear(&___nl__5);
#line 512
goto label_2;
#line 512
label_2:
#line 512
c_rt_lib0clear(&___nl__4);
#line 513
c_rt_lib0move(&___nl__5,___get_global_const(1));
#line 513
c_rt_lib0move(&___nl__4, c_rt_lib0array_get(___nl__3, ___nl__5));
#line 513
c_rt_lib0clear(&___nl__5);
#line 513
c_rt_lib0copy(&___nl__3, ___nl__4);
#line 513
c_rt_lib0clear(&___nl__4);
#line 514
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(*___ref___1, ___get_global_const(992)));
#line 514
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(99)));
#line 514
c_rt_lib0move(&___nl__4, hash0get_value(___nl__5, ___nl__6));
#line 514
c_rt_lib0clear(&___nl__6);
#line 514
c_rt_lib0clear(&___nl__5);
#line 515
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(996)));
#line 515
c_rt_lib0move(&___nl__6, c_rt_lib0priv_is(___nl__5, ___get_global_const(41)));
#line 515
if(c_rt_lib0check_true_native(___nl__6)){ goto label_4;}
#line 517
c_rt_lib0move(&___nl__6, c_rt_lib0priv_is(___nl__5, ___get_global_const(42)));
#line 517
if(c_rt_lib0check_true_native(___nl__6)){ goto label_5;}
#line 517
c_rt_lib0move(&___nl__6,___get_global_const(74));
#line 517
c_rt_lib0move(&___nl__6, c_rt_lib0array_mk(2, ___nl__6, ___nl__5));
#line 517
nl_die_arg(___nl__6);
#line 515
label_4:
#line 515
c_rt_lib0move(&___nl__7, c_rt_lib0priv_as(___nl__5, ___get_global_const(41)));
#line 516
c_rt_lib0clear(&___nl__0);
#line 516
c_rt_lib0clear(&___nl__3);
#line 516
c_rt_lib0clear(&___nl__4);
#line 516
c_rt_lib0clear(&___nl__5);
#line 516
c_rt_lib0clear(&___nl__6);
#line 516
return ___nl__7;
#line 516
c_rt_lib0clear(&___nl__7);
#line 517
goto label_3;
#line 517
label_5:
#line 518
goto label_3;
#line 518
label_3:
#line 518
c_rt_lib0clear(&___nl__5);
#line 518
c_rt_lib0clear(&___nl__6);
#line 519
c_rt_lib0move(&___nl__5, tct0tct_im());
#line 520
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(209)));
#line 520
c_rt_lib0move(&___nl__6, ptd_parser0fun_def_to_ptd(___nl__7));
#line 520
c_rt_lib0clear(&___nl__7);
#line 520
c_rt_lib0move(&___nl__7, c_rt_lib0priv_is(___nl__6, ___get_global_const(43)));
#line 520
if(c_rt_lib0check_true_native(___nl__7)){ goto label_7;}
#line 522
c_rt_lib0move(&___nl__7, c_rt_lib0priv_is(___nl__6, ___get_global_const(44)));
#line 522
if(c_rt_lib0check_true_native(___nl__7)){ goto label_8;}
#line 522
c_rt_lib0move(&___nl__7,___get_global_const(74));
#line 522
c_rt_lib0move(&___nl__7, c_rt_lib0array_mk(2, ___nl__7, ___nl__6));
#line 522
nl_die_arg(___nl__7);
#line 520
label_7:
#line 520
c_rt_lib0move(&___nl__8, c_rt_lib0priv_as(___nl__6, ___get_global_const(43)));
#line 521
c_rt_lib0delete(ptd_system_priv0add_error(___ref___2, ___nl__8));
#line 521
c_rt_lib0clear(&___nl__8);
#line 522
goto label_6;
#line 522
label_8:
#line 522
c_rt_lib0move(&___nl__8, c_rt_lib0priv_as(___nl__6, ___get_global_const(44)));
#line 523
c_rt_lib0copy(&___nl__5, ___nl__8);
#line 523
c_rt_lib0clear(&___nl__8);
#line 524
goto label_6;
#line 524
label_6:
#line 524
c_rt_lib0clear(&___nl__6);
#line 524
c_rt_lib0clear(&___nl__7);
#line 525
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_arg(___get_global_const(41), ___nl__5));
#line 525
c_rt_lib0copy(&___nl__7, ___nl__6);
#line 525
c_rt_lib0hash_set_value_dec(&___nl__3, ___get_global_const(996), ___nl__7);
#line 525
c_rt_lib0clear(&___nl__6);
#line 525
c_rt_lib0clear(&___nl__7);
#line 526
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(76)));
#line 526
c_rt_lib0delete(hash0set_value(&___nl__4, ___nl__6, ___nl__3));
#line 526
c_rt_lib0clear(&___nl__6);
#line 527
c_rt_lib0move(&___nl__6,___get_global_const(992));
#line 527
c_rt_lib0move(&___nl__6, c_rt_lib0get_ref_hash(*___ref___1, ___nl__6));
#line 527
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(99)));
#line 527
c_rt_lib0delete(hash0set_value(&___nl__6, ___nl__7, ___nl__4));
#line 527
c_rt_lib0clear(&___nl__7);
#line 527
c_rt_lib0move(&___nl__7,___get_global_const(992));
#line 527
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___1, ___nl__7, ___nl__6));
#line 527
c_rt_lib0clear(&___nl__7);
#line 527
c_rt_lib0clear(&___nl__6);
#line 528
c_rt_lib0clear(&___nl__0);
#line 528
c_rt_lib0clear(&___nl__3);
#line 528
c_rt_lib0clear(&___nl__4);
#line 528
return ___nl__5;
#line 528
c_rt_lib0clear(&___nl__3);
#line 528
c_rt_lib0clear(&___nl__4);
#line 528
c_rt_lib0clear(&___nl__5);
#line 528
c_rt_lib0clear(&___nl__0);
#line 528
return NULL;
}


static ImmT ___const__[1];
static int ___const_init__ = 1;
void ptd_system_priv0__const__init(){
if(___const_init__) {
___const_init__ = 0;
__const__f = &___const__[0];


for(int i=0;i<0;++i) ___const__[i] = NULL;
c_rt_lib0register_const(___const__, 0);
}}
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
