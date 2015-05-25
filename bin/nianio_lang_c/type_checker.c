
/* (c) Atinea Sp z o. o.
 *  Stamp: nianio lang
 */
#include "c_rt_lib.h"
#include "c_global_const.h"
#include "type_checker.h"
#include "array.h"
#include "ptd.h"
#include "tct.h"
#include "tc_types.h"
#include "hash.h"
#include "enum.h"
#include "ov.h"
#include "string.h"
#include "boolean_t.h"
#include "nast.h"
#include "ptd_parser.h"
#include "ptd_system.h"
#include "singleton.h"
#line 1 "type_checker.nl"

static ImmT *__const__f = NULL;
void type_checker_priv0__const__init();
ImmT type_checker_priv0__const__sim(int __nr);
ImmT type_checker_priv0__const__sing(int __nr);

ImmT type_checker_priv0type_to_ptd(ImmT ___nl__0,ImmT * ___ref___1);
ImmT type_checker_priv0get_fun_def_key(ImmT ___nl__0);
ImmT type_checker_priv0get_fun_key(ImmT ___nl__0,ImmT ___nl__1);
ImmT type_checker_priv0return_type_to_tct(ImmT ___nl__0,ImmT * ___ref___1);
ImmT type_checker_priv0check_types_imported(ImmT ___nl__0,ImmT * ___ref___1,ImmT * ___ref___2);
ImmT type_checker_priv0prepare_def_fun(ImmT ___nl__0,ImmT * ___ref___1);
ImmT type_checker_priv0check_module(ImmT ___nl__0,ImmT * ___ref___1,ImmT * ___ref___2,ImmT * ___ref___3);
ImmT type_checker_priv0join_vars(ImmT * ___ref___0,ImmT ___nl__1,ImmT * ___ref___2,ImmT * ___ref___3);
ImmT type_checker_priv0set_end_function(ImmT * ___ref___0);
ImmT type_checker_priv0check_cmd(ImmT ___nl__0,ImmT * ___ref___1,ImmT * ___ref___2,ImmT * ___ref___3);
ImmT type_checker_priv0break_continue_block(ImmT ___nl__0,ImmT * ___ref___1,ImmT * ___ref___2,ImmT * ___ref___3);
ImmT type_checker_priv0check_try_ensure(ImmT ___nl__0,ImmT * ___ref___1,ImmT * ___ref___2,ImmT * ___ref___3);
ImmT type_checker_priv0check_forh(ImmT ___nl__0,ImmT * ___ref___1,ImmT * ___ref___2,ImmT * ___ref___3);
ImmT type_checker_priv0check_fora(ImmT ___nl__0,ImmT * ___ref___1,ImmT * ___ref___2,ImmT * ___ref___3);
ImmT type_checker_priv0check_while(ImmT ___nl__0,ImmT * ___ref___1,ImmT * ___ref___2,ImmT * ___ref___3);
ImmT type_checker_priv0check_rep(ImmT ___nl__0,ImmT * ___ref___1,ImmT * ___ref___2,ImmT * ___ref___3);
ImmT type_checker_priv0check_match(ImmT ___nl__0,ImmT * ___ref___1,ImmT * ___ref___2,ImmT * ___ref___3);
ImmT type_checker_priv0check_val(ImmT ___nl__0,ImmT * ___ref___1,ImmT * ___ref___2,ImmT * ___ref___3);
ImmT type_checker_priv0get_special_functions();
ImmT type_checker_priv0get_special_function_def(ImmT ___nl__0,ImmT ___nl__1);
ImmT type_checker_priv0check_special_function(ImmT ___nl__0,ImmT ___nl__1,ImmT ___nl__2,ImmT * ___ref___3,ImmT * ___ref___4,ImmT * ___ref___5);
ImmT type_checker_priv0rec_get_var_from_lval(ImmT ___nl__0,ImmT * ___ref___1);
ImmT type_checker_priv0mk_new_type_lval(ImmT ___nl__0,ImmT ___nl__1,ImmT ___nl__2,ImmT ___nl__3,ImmT * ___ref___4,ImmT * ___ref___5);
ImmT type_checker_priv0set_type_to_lval(ImmT ___nl__0,ImmT ___nl__1,ImmT ___nl__2,ImmT * ___ref___3,ImmT * ___ref___4,ImmT * ___ref___5);
ImmT type_checker_priv0set_type_to_lval_spec(ImmT ___nl__0,ImmT ___nl__1,ImmT ___nl__2,ImmT ___nl__3,ImmT * ___ref___4,ImmT * ___ref___5,ImmT * ___ref___6);
ImmT type_checker_priv0get_type_left_site_equation(ImmT ___nl__0,ImmT * ___ref___1,ImmT * ___ref___2,ImmT * ___ref___3);
ImmT type_checker_priv0get_type_record_key(ImmT ___nl__0,ImmT * ___ref___1,ImmT * ___ref___2,ImmT * ___ref___3);
ImmT type_checker_priv0get_type_from_bin_op_and_check(ImmT ___nl__0,ImmT * ___ref___1,ImmT * ___ref___2,ImmT * ___ref___3);
ImmT type_checker_priv0get_print_tct_type_name(ImmT ___nl__0);
ImmT type_checker_priv0get_print_tct_label(ImmT ___nl__0);
ImmT type_checker_priv0get_print_check_info(ImmT ___nl__0);
ImmT type_checker_priv0check_var_decl(ImmT ___nl__0,ImmT * ___ref___1,ImmT * ___ref___2,ImmT * ___ref___3);
ImmT type_checker_priv0check_var_decl_try(ImmT ___nl__0,ImmT ___nl__1,ImmT * ___ref___2,ImmT * ___ref___3,ImmT * ___ref___4);
ImmT type_checker_priv0add_var_to_vars(ImmT ___nl__0,ImmT ___nl__1,ImmT * ___ref___2);
ImmT type_checker_priv0add_var_decl_to_vars(ImmT ___nl__0,ImmT ___nl__1,ImmT * ___ref___2);
ImmT type_checker_priv0add_var_decl_with_type_and_check(ImmT ___nl__0,ImmT ___nl__1,ImmT * ___ref___2,ImmT * ___ref___3);
ImmT type_checker_priv0is_known(ImmT ___nl__0);
ImmT type_checker_priv0get_function_name(ImmT ___nl__0,ImmT ___nl__1);
ImmT type_checker_priv0get_fun_module(ImmT ___nl__0,ImmT ___nl__1);
ImmT type_checker_priv0get_function_def(ImmT ___nl__0,ImmT ___nl__1,ImmT ___nl__2);
ImmT type_checker_priv0check_function_exists(ImmT ___nl__0,ImmT ___nl__1,ImmT * ___ref___2,ImmT * ___ref___3);
ImmT type_checker_priv0add_error(ImmT * ___ref___0,ImmT ___nl__1);
ImmT type_checker_priv0add_warning(ImmT * ___ref___0,ImmT ___nl__1);


ImmT type_checker_priv0type_to_ptd(ImmT ___nl__0,ImmT * ___ref___1) {
c_rt_lib0arg_val(___nl__0);
type_checker_priv0__const__init();
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
#line 21
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__0, ___get_global_const(72)));
#line 21
if(c_rt_lib0check_true_native(___nl__2)){ goto label_2;}
#line 28
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__0, ___get_global_const(37)));
#line 28
if(c_rt_lib0check_true_native(___nl__2)){ goto label_3;}
#line 28
c_rt_lib0move(&___nl__2,___get_global_const(74));
#line 28
c_rt_lib0move(&___nl__2, c_rt_lib0array_mk(2, ___nl__2, ___nl__0));
#line 28
nl_die_arg(___nl__2);
#line 21
label_2:
#line 21
c_rt_lib0move(&___nl__3, c_rt_lib0priv_as(___nl__0, ___get_global_const(72)));
#line 22
c_rt_lib0move(&___nl__4, ptd_parser0try_value_to_ptd(___nl__3));
#line 22
c_rt_lib0move(&___nl__5, c_rt_lib0priv_is(___nl__4, ___get_global_const(43)));
#line 22
if(c_rt_lib0check_true_native(___nl__5)){ goto label_5;}
#line 25
c_rt_lib0move(&___nl__5, c_rt_lib0priv_is(___nl__4, ___get_global_const(44)));
#line 25
if(c_rt_lib0check_true_native(___nl__5)){ goto label_6;}
#line 25
c_rt_lib0move(&___nl__5,___get_global_const(74));
#line 25
c_rt_lib0move(&___nl__5, c_rt_lib0array_mk(2, ___nl__5, ___nl__4));
#line 25
nl_die_arg(___nl__5);
#line 22
label_5:
#line 22
c_rt_lib0move(&___nl__6, c_rt_lib0priv_as(___nl__4, ___get_global_const(43)));
#line 23
c_rt_lib0delete(type_checker_priv0add_error(___ref___1, ___nl__6));
#line 24
c_rt_lib0move(&___nl__7, tct0tct_im());
#line 24
c_rt_lib0clear(&___nl__0);
#line 24
c_rt_lib0clear(&___nl__2);
#line 24
c_rt_lib0clear(&___nl__3);
#line 24
c_rt_lib0clear(&___nl__4);
#line 24
c_rt_lib0clear(&___nl__5);
#line 24
c_rt_lib0clear(&___nl__6);
#line 24
return ___nl__7;
#line 24
c_rt_lib0clear(&___nl__7);
#line 24
c_rt_lib0clear(&___nl__6);
#line 25
goto label_4;
#line 25
label_6:
#line 25
c_rt_lib0move(&___nl__6, c_rt_lib0priv_as(___nl__4, ___get_global_const(44)));
#line 26
c_rt_lib0clear(&___nl__0);
#line 26
c_rt_lib0clear(&___nl__2);
#line 26
c_rt_lib0clear(&___nl__3);
#line 26
c_rt_lib0clear(&___nl__4);
#line 26
c_rt_lib0clear(&___nl__5);
#line 26
return ___nl__6;
#line 26
c_rt_lib0clear(&___nl__6);
#line 27
goto label_4;
#line 27
label_4:
#line 27
c_rt_lib0clear(&___nl__4);
#line 27
c_rt_lib0clear(&___nl__5);
#line 27
c_rt_lib0clear(&___nl__3);
#line 28
goto label_1;
#line 28
label_3:
#line 29
c_rt_lib0move(&___nl__3, tct0tct_im());
#line 29
c_rt_lib0clear(&___nl__0);
#line 29
c_rt_lib0clear(&___nl__2);
#line 29
return ___nl__3;
#line 29
c_rt_lib0clear(&___nl__3);
#line 30
goto label_1;
#line 30
label_1:
#line 30
c_rt_lib0clear(&___nl__2);
#line 30
c_rt_lib0clear(&___nl__0);
#line 30
return NULL;
}

ImmT type_checker_priv0get_fun_def_key(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
type_checker_priv0__const__init();
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
#line 34
c_rt_lib0move(&___nl__1, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(328)));
#line 34
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__1, ___get_global_const(329)));
#line 34
if(c_rt_lib0check_true_native(___nl__2)){ goto label_2;}
#line 36
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__1, ___get_global_const(330)));
#line 36
if(c_rt_lib0check_true_native(___nl__2)){ goto label_3;}
#line 36
c_rt_lib0move(&___nl__2,___get_global_const(74));
#line 36
c_rt_lib0move(&___nl__2, c_rt_lib0array_mk(2, ___nl__2, ___nl__1));
#line 36
nl_die_arg(___nl__2);
#line 34
label_2:
#line 35
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(76)));
#line 35
c_rt_lib0clear(&___nl__0);
#line 35
c_rt_lib0clear(&___nl__1);
#line 35
c_rt_lib0clear(&___nl__2);
#line 35
return ___nl__3;
#line 35
c_rt_lib0clear(&___nl__3);
#line 36
goto label_1;
#line 36
label_3:
#line 37
c_rt_lib0move(&___nl__3,___get_global_const(698));
#line 37
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(76)));
#line 37
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 37
c_rt_lib0clear(&___nl__4);
#line 37
c_rt_lib0clear(&___nl__0);
#line 37
c_rt_lib0clear(&___nl__1);
#line 37
c_rt_lib0clear(&___nl__2);
#line 37
return ___nl__3;
#line 37
c_rt_lib0clear(&___nl__3);
#line 38
goto label_1;
#line 38
label_1:
#line 38
c_rt_lib0clear(&___nl__1);
#line 38
c_rt_lib0clear(&___nl__2);
#line 38
c_rt_lib0clear(&___nl__0);
#line 38
return NULL;
}

ImmT type_checker_priv0get_fun_key(ImmT ___nl__0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
type_checker_priv0__const__init();
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
#line 42
c_rt_lib0move(&___nl__2,___get_global_const(0));
#line 43
c_rt_lib0move(&___nl__3,___get_global_const(0));
#line 43
c_rt_lib0move(&___nl__3, c_rt_lib0eq(___nl__1, ___nl__3));
#line 43
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 43
if(c_rt_lib0check_true_native(___nl__3)){ goto label_2;}
#line 43
c_rt_lib0move(&___nl__4,___get_global_const(698));
#line 43
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__4));
#line 43
c_rt_lib0clear(&___nl__4);
#line 43
goto label_2;
#line 43
label_2:
#line 43
c_rt_lib0clear(&___nl__3);
#line 44
c_rt_lib0move(&___nl__3, c_rt_lib0concat_new(___nl__2, ___nl__0));
#line 44
c_rt_lib0clear(&___nl__0);
#line 44
c_rt_lib0clear(&___nl__1);
#line 44
c_rt_lib0clear(&___nl__2);
#line 44
return ___nl__3;
#line 44
c_rt_lib0clear(&___nl__3);
#line 44
c_rt_lib0clear(&___nl__2);
#line 44
c_rt_lib0clear(&___nl__0);
#line 44
c_rt_lib0clear(&___nl__1);
#line 44
return NULL;
}

ImmT type_checker_priv0return_type_to_tct(ImmT ___nl__0,ImmT * ___ref___1) {
c_rt_lib0arg_val(___nl__0);
type_checker_priv0__const__init();
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
#line 47
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__0, ___get_global_const(72)));
#line 47
if(c_rt_lib0check_true_native(___nl__2)){ goto label_2;}
#line 55
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__0, ___get_global_const(37)));
#line 55
if(c_rt_lib0check_true_native(___nl__2)){ goto label_3;}
#line 55
c_rt_lib0move(&___nl__2,___get_global_const(74));
#line 55
c_rt_lib0move(&___nl__2, c_rt_lib0array_mk(2, ___nl__2, ___nl__0));
#line 55
nl_die_arg(___nl__2);
#line 47
label_2:
#line 47
c_rt_lib0move(&___nl__3, c_rt_lib0priv_as(___nl__0, ___get_global_const(72)));
#line 48
c_rt_lib0move(&___nl__5,___get_global_const(735));
#line 48
c_rt_lib0move(&___nl__4, ov0is(___nl__3, ___nl__5));
#line 48
c_rt_lib0clear(&___nl__5);
#line 48
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 48
if(c_rt_lib0check_true_native(___nl__4)){ goto label_5;}
#line 49
c_rt_lib0copy(&___nl__5, ___nl__3);
#line 49
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__5, ___get_global_const(735)));
#line 50
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(99)));
#line 50
c_rt_lib0move(&___nl__8,___get_global_const(621));
#line 50
c_rt_lib0move(&___nl__6, c_rt_lib0eq(___nl__6, ___nl__8));
#line 50
c_rt_lib0clear(&___nl__8);
#line 50
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__6));
#line 50
if(c_rt_lib0check_true_native(___nl__7)){ goto label_8;}
#line 50
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(76)));
#line 50
c_rt_lib0move(&___nl__8,___get_global_const(700));
#line 50
c_rt_lib0move(&___nl__6, c_rt_lib0eq(___nl__6, ___nl__8));
#line 50
c_rt_lib0clear(&___nl__8);
#line 50
label_8:
#line 50
c_rt_lib0clear(&___nl__7);
#line 50
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 50
if(c_rt_lib0check_true_native(___nl__6)){ goto label_7;}
#line 51
c_rt_lib0move(&___nl__7, tct0void());
#line 51
c_rt_lib0clear(&___nl__0);
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
#line 52
goto label_7;
#line 52
label_7:
#line 52
c_rt_lib0clear(&___nl__6);
#line 52
c_rt_lib0clear(&___nl__5);
#line 53
goto label_5;
#line 53
label_5:
#line 53
c_rt_lib0clear(&___nl__4);
#line 54
c_rt_lib0move(&___nl__4, type_checker_priv0type_to_ptd(___nl__0, ___ref___1));
#line 54
c_rt_lib0clear(&___nl__0);
#line 54
c_rt_lib0clear(&___nl__2);
#line 54
c_rt_lib0clear(&___nl__3);
#line 54
return ___nl__4;
#line 54
c_rt_lib0clear(&___nl__4);
#line 54
c_rt_lib0clear(&___nl__3);
#line 55
goto label_1;
#line 55
label_3:
#line 56
c_rt_lib0move(&___nl__3, tct0tct_im());
#line 56
c_rt_lib0clear(&___nl__0);
#line 56
c_rt_lib0clear(&___nl__2);
#line 56
return ___nl__3;
#line 56
c_rt_lib0clear(&___nl__3);
#line 57
goto label_1;
#line 57
label_1:
#line 57
c_rt_lib0clear(&___nl__2);
#line 57
c_rt_lib0clear(&___nl__0);
#line 57
return NULL;
}

ImmT type_checker_priv0check_types_imported(ImmT ___nl__0,ImmT * ___ref___1,ImmT * ___ref___2) {
c_rt_lib0arg_val(___nl__0);
type_checker_priv0__const__init();
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
ImmT ___nl__9 = NULL;
ImmT ___nl__10 = NULL;
ImmT ___nl__11 = NULL;
#line 61
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__0, ___get_global_const(722)));
#line 61
if(c_rt_lib0check_true_native(___nl__3)){ goto label_2;}
#line 62
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__0, ___get_global_const(723)));
#line 62
if(c_rt_lib0check_true_native(___nl__3)){ goto label_3;}
#line 64
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__0, ___get_global_const(724)));
#line 64
if(c_rt_lib0check_true_native(___nl__3)){ goto label_4;}
#line 66
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__0, ___get_global_const(725)));
#line 66
if(c_rt_lib0check_true_native(___nl__3)){ goto label_5;}
#line 70
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__0, ___get_global_const(726)));
#line 70
if(c_rt_lib0check_true_native(___nl__3)){ goto label_6;}
#line 79
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__0, ___get_global_const(727)));
#line 79
if(c_rt_lib0check_true_native(___nl__3)){ goto label_7;}
#line 80
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__0, ___get_global_const(728)));
#line 80
if(c_rt_lib0check_true_native(___nl__3)){ goto label_8;}
#line 81
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__0, ___get_global_const(729)));
#line 81
if(c_rt_lib0check_true_native(___nl__3)){ goto label_9;}
#line 88
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__0, ___get_global_const(730)));
#line 88
if(c_rt_lib0check_true_native(___nl__3)){ goto label_10;}
#line 88
c_rt_lib0move(&___nl__3,___get_global_const(74));
#line 88
c_rt_lib0move(&___nl__3, c_rt_lib0array_mk(2, ___nl__3, ___nl__0));
#line 88
nl_die_arg(___nl__3);
#line 61
label_2:
#line 62
goto label_1;
#line 62
label_3:
#line 62
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__0, ___get_global_const(723)));
#line 63
c_rt_lib0delete(type_checker_priv0check_types_imported(___nl__4, ___ref___1, ___ref___2));
#line 63
c_rt_lib0clear(&___nl__4);
#line 64
goto label_1;
#line 64
label_4:
#line 64
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__0, ___get_global_const(724)));
#line 65
c_rt_lib0delete(type_checker_priv0check_types_imported(___nl__4, ___ref___1, ___ref___2));
#line 65
c_rt_lib0clear(&___nl__4);
#line 66
goto label_1;
#line 66
label_5:
#line 66
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__0, ___get_global_const(725)));
#line 67
c_rt_lib0move(&___nl__7, c_rt_lib0init_iter(___nl__4));
#line 67
label_13:
#line 67
c_rt_lib0move(&___nl__5, c_rt_lib0is_end_hash(___nl__7));
#line 67
if(c_rt_lib0check_true_native(___nl__5)){ goto label_11;}
#line 67
c_rt_lib0move(&___nl__5, c_rt_lib0get_key_iter(___nl__7));
#line 67
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value(___nl__4, ___nl__5));
#line 68
c_rt_lib0delete(type_checker_priv0check_types_imported(___nl__6, ___ref___1, ___ref___2));
#line 69
c_rt_lib0move(&___nl__7, c_rt_lib0next_iter(___nl__7));
#line 69
goto label_13;
#line 69
label_11:
#line 69
c_rt_lib0clear(&___nl__5);
#line 69
c_rt_lib0clear(&___nl__6);
#line 69
c_rt_lib0clear(&___nl__7);
#line 69
c_rt_lib0clear(&___nl__4);
#line 70
goto label_1;
#line 70
label_6:
#line 70
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__0, ___get_global_const(726)));
#line 71
c_rt_lib0move(&___nl__6,___get_global_const(579));
#line 71
c_rt_lib0move(&___nl__5, string0index2(___nl__4, ___nl__6));
#line 71
c_rt_lib0clear(&___nl__6);
#line 72
c_rt_lib0move(&___nl__6,___get_global_const(1));
#line 72
c_rt_lib0move(&___nl__6, c_rt_lib0ge(___nl__5, ___nl__6));
#line 72
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 72
if(c_rt_lib0check_true_native(___nl__6)){ goto label_15;}
#line 73
c_rt_lib0move(&___nl__8,___get_global_const(1));
#line 73
c_rt_lib0move(&___nl__7, string0substr(___nl__4, ___nl__8, ___nl__5));
#line 73
c_rt_lib0clear(&___nl__8);
#line 74
c_rt_lib0move(&___nl__9,___get_global_const(137));
#line 74
c_rt_lib0move(&___nl__9, c_rt_lib0add(___nl__5, ___nl__9));
#line 74
c_rt_lib0move(&___nl__10, string0length(___nl__4));
#line 74
c_rt_lib0move(&___nl__10, c_rt_lib0sub_mod(___nl__10, ___nl__5));
#line 74
c_rt_lib0move(&___nl__11,___get_global_const(137));
#line 74
c_rt_lib0move(&___nl__10, c_rt_lib0sub_mod(___nl__10, ___nl__11));
#line 74
c_rt_lib0clear(&___nl__11);
#line 74
c_rt_lib0move(&___nl__8, string0substr(___nl__4, ___nl__9, ___nl__10));
#line 74
c_rt_lib0clear(&___nl__10);
#line 74
c_rt_lib0clear(&___nl__9);
#line 75
c_rt_lib0delete(type_checker_priv0check_function_exists(___nl__7, ___nl__8, ___ref___1, ___ref___2));
#line 75
c_rt_lib0clear(&___nl__7);
#line 75
c_rt_lib0clear(&___nl__8);
#line 76
goto label_14;
#line 76
label_15:
#line 77
c_rt_lib0move(&___nl__7,___get_global_const(1049));
#line 77
c_rt_lib0move(&___nl__7, c_rt_lib0concat_add(___nl__7, ___nl__4));
#line 77
c_rt_lib0move(&___nl__8,___get_global_const(732));
#line 77
c_rt_lib0move(&___nl__7, c_rt_lib0concat_add(___nl__7, ___nl__8));
#line 77
c_rt_lib0clear(&___nl__8);
#line 77
c_rt_lib0delete(type_checker_priv0add_error(___ref___2, ___nl__7));
#line 77
c_rt_lib0clear(&___nl__7);
#line 78
goto label_14;
#line 78
label_14:
#line 78
c_rt_lib0clear(&___nl__6);
#line 78
c_rt_lib0clear(&___nl__5);
#line 78
c_rt_lib0clear(&___nl__4);
#line 79
goto label_1;
#line 79
label_7:
#line 80
goto label_1;
#line 80
label_8:
#line 81
goto label_1;
#line 81
label_9:
#line 81
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__0, ___get_global_const(729)));
#line 82
c_rt_lib0move(&___nl__7, c_rt_lib0init_iter(___nl__4));
#line 82
label_18:
#line 82
c_rt_lib0move(&___nl__5, c_rt_lib0is_end_hash(___nl__7));
#line 82
if(c_rt_lib0check_true_native(___nl__5)){ goto label_16;}
#line 82
c_rt_lib0move(&___nl__5, c_rt_lib0get_key_iter(___nl__7));
#line 82
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value(___nl__4, ___nl__5));
#line 83
c_rt_lib0move(&___nl__8, c_rt_lib0priv_is(___nl__6, ___get_global_const(733)));
#line 83
if(c_rt_lib0check_true_native(___nl__8)){ goto label_20;}
#line 84
c_rt_lib0move(&___nl__8, c_rt_lib0priv_is(___nl__6, ___get_global_const(734)));
#line 84
if(c_rt_lib0check_true_native(___nl__8)){ goto label_21;}
#line 84
c_rt_lib0move(&___nl__8,___get_global_const(74));
#line 84
c_rt_lib0move(&___nl__8, c_rt_lib0array_mk(2, ___nl__8, ___nl__6));
#line 84
nl_die_arg(___nl__8);
#line 83
label_20:
#line 84
goto label_19;
#line 84
label_21:
#line 84
c_rt_lib0move(&___nl__9, c_rt_lib0priv_as(___nl__6, ___get_global_const(734)));
#line 85
c_rt_lib0delete(type_checker_priv0check_types_imported(___nl__9, ___ref___1, ___ref___2));
#line 85
c_rt_lib0clear(&___nl__9);
#line 86
goto label_19;
#line 86
label_19:
#line 86
c_rt_lib0clear(&___nl__8);
#line 87
c_rt_lib0move(&___nl__7, c_rt_lib0next_iter(___nl__7));
#line 87
goto label_18;
#line 87
label_16:
#line 87
c_rt_lib0clear(&___nl__5);
#line 87
c_rt_lib0clear(&___nl__6);
#line 87
c_rt_lib0clear(&___nl__7);
#line 87
c_rt_lib0clear(&___nl__4);
#line 88
goto label_1;
#line 88
label_10:
#line 89
goto label_1;
#line 89
label_1:
#line 89
c_rt_lib0clear(&___nl__3);
#line 89
c_rt_lib0clear(&___nl__0);
#line 89
return NULL;
}

ImmT type_checker_priv0prepare_def_fun(ImmT ___nl__0,ImmT * ___ref___1) {
c_rt_lib0arg_val(___nl__0);
type_checker_priv0__const__init();
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
ImmT ___nl__22 = NULL;
ImmT ___nl__23 = NULL;
ImmT ___nl__24 = NULL;
#line 92
c_rt_lib0move(&___nl__2, c_rt_lib0hash_mk(0));
#line 93
c_rt_lib0move(&___nl__5, c_rt_lib0init_iter(___nl__0));
#line 93
label_3:
#line 93
c_rt_lib0move(&___nl__3, c_rt_lib0is_end_hash(___nl__5));
#line 93
if(c_rt_lib0check_true_native(___nl__3)){ goto label_1;}
#line 93
c_rt_lib0move(&___nl__3, c_rt_lib0get_key_iter(___nl__5));
#line 93
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value(___nl__0, ___nl__3));
#line 94
c_rt_lib0move(&___nl__6,___get_global_const(2));
#line 94
c_rt_lib0move(&___nl__6, c_rt_lib0unary_minus(___nl__6));
#line 94
c_rt_lib0copy(&___nl__7, ___nl__6);
#line 94
c_rt_lib0hash_set_value_dec(___ref___1, ___get_global_const(710), ___nl__7);
#line 94
c_rt_lib0clear(&___nl__6);
#line 94
c_rt_lib0clear(&___nl__7);
#line 95
c_rt_lib0copy(&___nl__6, ___nl__3);
#line 95
c_rt_lib0hash_set_value_dec(___ref___1, ___get_global_const(99), ___nl__6);
#line 95
c_rt_lib0clear(&___nl__6);
#line 96
c_rt_lib0move(&___nl__6, c_rt_lib0hash_mk(0));
#line 97
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(711)));
#line 97
c_rt_lib0move(&___nl__9,___get_global_const(1));
#line 97
c_rt_lib0move(&___nl__10,___get_global_const(2));
#line 97
c_rt_lib0move(&___nl__11, c_rt_lib0array_len(___nl__7));
#line 97
label_6:
#line 97
c_rt_lib0move(&___nl__12, c_rt_lib0ge(___nl__9, ___nl__11));
#line 97
if(c_rt_lib0check_true_native(___nl__12)){ goto label_4;}
#line 97
c_rt_lib0move(&___nl__8, c_rt_lib0array_get(___nl__7, ___nl__9));
#line 98
c_rt_lib0move(&___nl__13, c_rt_lib0array_mk(0));
#line 99
c_rt_lib0move(&___nl__14, c_rt_lib0hash_get_value_dec(___nl__8, ___get_global_const(73)));
#line 99
c_rt_lib0move(&___nl__16,___get_global_const(1));
#line 99
c_rt_lib0move(&___nl__17,___get_global_const(2));
#line 99
c_rt_lib0move(&___nl__18, c_rt_lib0array_len(___nl__14));
#line 99
label_9:
#line 99
c_rt_lib0move(&___nl__19, c_rt_lib0ge(___nl__16, ___nl__18));
#line 99
if(c_rt_lib0check_true_native(___nl__19)){ goto label_7;}
#line 99
c_rt_lib0move(&___nl__15, c_rt_lib0array_get(___nl__14, ___nl__16));
#line 100
c_rt_lib0move(&___nl__21, c_rt_lib0hash_get_value_dec(___nl__15, ___get_global_const(76)));
#line 100
c_rt_lib0move(&___nl__22, c_rt_lib0hash_get_value_dec(___nl__15, ___get_global_const(257)));
#line 100
c_rt_lib0move(&___nl__24, c_rt_lib0hash_get_value_dec(___nl__15, ___get_global_const(72)));
#line 100
c_rt_lib0move(&___nl__23, type_checker_priv0type_to_ptd(___nl__24, ___ref___1));
#line 100
c_rt_lib0clear(&___nl__24);
#line 100
c_rt_lib0move(&___nl__20, c_rt_lib0hash_mk(3, ___get_global_const(76), ___nl__21, ___get_global_const(257), ___nl__22, ___get_global_const(72), ___nl__23));
#line 100
c_rt_lib0clear(&___nl__21);
#line 100
c_rt_lib0clear(&___nl__22);
#line 100
c_rt_lib0clear(&___nl__23);
#line 100
c_rt_lib0delete(array0push(&___nl__13, ___nl__20));
#line 100
c_rt_lib0clear(&___nl__20);
#line 105
c_rt_lib0move(&___nl__16, c_rt_lib0add_mod(___nl__16, ___nl__17));
#line 105
goto label_9;
#line 105
label_7:
#line 105
c_rt_lib0clear(&___nl__14);
#line 105
c_rt_lib0clear(&___nl__15);
#line 105
c_rt_lib0clear(&___nl__16);
#line 105
c_rt_lib0clear(&___nl__17);
#line 105
c_rt_lib0clear(&___nl__18);
#line 105
c_rt_lib0clear(&___nl__19);
#line 106
c_rt_lib0move(&___nl__15, c_rt_lib0hash_get_value_dec(___nl__8, ___get_global_const(209)));
#line 106
c_rt_lib0move(&___nl__16, c_rt_lib0ov_mk_none(___get_global_const(42)));
#line 106
c_rt_lib0move(&___nl__17, c_rt_lib0ov_mk_none(___get_global_const(42)));
#line 106
c_rt_lib0move(&___nl__18, c_rt_lib0hash_get_value_dec(___nl__8, ___get_global_const(76)));
#line 106
c_rt_lib0move(&___nl__19, c_rt_lib0hash_get_value_dec(___nl__8, ___get_global_const(328)));
#line 106
c_rt_lib0move(&___nl__21, c_rt_lib0hash_get_value_dec(___nl__8, ___get_global_const(712)));
#line 106
c_rt_lib0move(&___nl__20, type_checker_priv0return_type_to_tct(___nl__21, ___ref___1));
#line 106
c_rt_lib0clear(&___nl__21);
#line 106
c_rt_lib0move(&___nl__14, c_rt_lib0hash_mk(8, ___get_global_const(209), ___nl__15, ___get_global_const(996), ___nl__16, ___get_global_const(991), ___nl__17, ___get_global_const(76), ___nl__18, ___get_global_const(99), ___nl__3, ___get_global_const(328), ___nl__19, ___get_global_const(73), ___nl__13, ___get_global_const(712), ___nl__20));
#line 106
c_rt_lib0clear(&___nl__15);
#line 106
c_rt_lib0clear(&___nl__16);
#line 106
c_rt_lib0clear(&___nl__17);
#line 106
c_rt_lib0clear(&___nl__18);
#line 106
c_rt_lib0clear(&___nl__19);
#line 106
c_rt_lib0clear(&___nl__20);
#line 116
c_rt_lib0move(&___nl__15, type_checker_priv0get_fun_def_key(___nl__14));
#line 117
c_rt_lib0move(&___nl__16, hash0has_key(___nl__6, ___nl__15));
#line 117
c_rt_lib0move(&___nl__16, c_rt_lib0not(___nl__16));
#line 117
if(c_rt_lib0check_true_native(___nl__16)){ goto label_11;}
#line 117
c_rt_lib0move(&___nl__17,___get_global_const(1050));
#line 117
c_rt_lib0move(&___nl__17, c_rt_lib0concat_add(___nl__17, ___nl__15));
#line 117
c_rt_lib0delete(type_checker_priv0add_error(___ref___1, ___nl__17));
#line 117
c_rt_lib0clear(&___nl__17);
#line 117
goto label_11;
#line 117
label_11:
#line 117
c_rt_lib0clear(&___nl__16);
#line 118
c_rt_lib0delete(hash0set_value(&___nl__6, ___nl__15, ___nl__14));
#line 118
c_rt_lib0clear(&___nl__13);
#line 118
c_rt_lib0clear(&___nl__14);
#line 118
c_rt_lib0clear(&___nl__15);
#line 119
c_rt_lib0move(&___nl__9, c_rt_lib0add_mod(___nl__9, ___nl__10));
#line 119
goto label_6;
#line 119
label_4:
#line 119
c_rt_lib0clear(&___nl__7);
#line 119
c_rt_lib0clear(&___nl__8);
#line 119
c_rt_lib0clear(&___nl__9);
#line 119
c_rt_lib0clear(&___nl__10);
#line 119
c_rt_lib0clear(&___nl__11);
#line 119
c_rt_lib0clear(&___nl__12);
#line 120
c_rt_lib0delete(hash0set_value(&___nl__2, ___nl__3, ___nl__6));
#line 120
c_rt_lib0clear(&___nl__6);
#line 121
c_rt_lib0move(&___nl__5, c_rt_lib0next_iter(___nl__5));
#line 121
goto label_3;
#line 121
label_1:
#line 121
c_rt_lib0clear(&___nl__3);
#line 121
c_rt_lib0clear(&___nl__4);
#line 121
c_rt_lib0clear(&___nl__5);
#line 122
c_rt_lib0clear(&___nl__0);
#line 122
return ___nl__2;
#line 122
c_rt_lib0clear(&___nl__2);
#line 122
c_rt_lib0clear(&___nl__0);
#line 122
return NULL;
}

ImmT type_checker0check0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 2, "type_checker0check");
return type_checker0check(_tab[0], _tab[1]);}
ImmT type_checker0check(ImmT ___nl__0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
type_checker_priv0__const__init();
ImmT ___nl__2 = NULL;
#line 125
c_rt_lib0move(&___nl__2, type_checker0check_modules(___nl__0, ___nl__1));
#line 125
c_rt_lib0clear(&___nl__0);
#line 125
c_rt_lib0clear(&___nl__1);
#line 125
return ___nl__2;
#line 125
c_rt_lib0clear(&___nl__2);
#line 125
c_rt_lib0clear(&___nl__0);
#line 125
c_rt_lib0clear(&___nl__1);
#line 125
return NULL;
}

ImmT type_checker0check_modules0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 2, "type_checker0check_modules");
return type_checker0check_modules(_tab[0], _tab[1]);}
ImmT type_checker0check_modules(ImmT ___nl__0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
type_checker_priv0__const__init();
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
ImmT ___nl__9 = NULL;
#line 129
c_rt_lib0move(&___nl__3, c_rt_lib0array_mk(0));
#line 129
c_rt_lib0move(&___nl__4, c_rt_lib0array_mk(0));
#line 129
c_rt_lib0move(&___nl__5,___get_global_const(2));
#line 129
c_rt_lib0move(&___nl__5, c_rt_lib0unary_minus(___nl__5));
#line 129
c_rt_lib0move(&___nl__6,___get_global_const(0));
#line 129
c_rt_lib0move(&___nl__2, c_rt_lib0hash_mk(4, ___get_global_const(17), ___nl__3, ___get_global_const(96), ___nl__4, ___get_global_const(710), ___nl__5, ___get_global_const(99), ___nl__6));
#line 129
c_rt_lib0clear(&___nl__3);
#line 129
c_rt_lib0clear(&___nl__4);
#line 129
c_rt_lib0clear(&___nl__5);
#line 129
c_rt_lib0clear(&___nl__6);
#line 130
c_rt_lib0move(&___nl__3, type_checker_priv0prepare_def_fun(___nl__1, &___nl__2));
#line 131
c_rt_lib0move(&___nl__5, c_rt_lib0array_mk(0));
#line 131
c_rt_lib0move(&___nl__6, c_rt_lib0array_mk(0));
#line 131
c_rt_lib0move(&___nl__4, c_rt_lib0hash_mk(2, ___get_global_const(128), ___nl__5, ___get_global_const(130), ___nl__6));
#line 131
c_rt_lib0clear(&___nl__5);
#line 131
c_rt_lib0clear(&___nl__6);
#line 132
c_rt_lib0move(&___nl__7, c_rt_lib0init_iter(___nl__0));
#line 132
label_3:
#line 132
c_rt_lib0move(&___nl__5, c_rt_lib0is_end_hash(___nl__7));
#line 132
if(c_rt_lib0check_true_native(___nl__5)){ goto label_1;}
#line 132
c_rt_lib0move(&___nl__5, c_rt_lib0get_key_iter(___nl__7));
#line 132
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value(___nl__0, ___nl__5));
#line 133
c_rt_lib0move(&___nl__8,___get_global_const(2));
#line 133
c_rt_lib0move(&___nl__8, c_rt_lib0unary_minus(___nl__8));
#line 133
c_rt_lib0copy(&___nl__9, ___nl__8);
#line 133
c_rt_lib0hash_set_value_dec(&___nl__2, ___get_global_const(710), ___nl__9);
#line 133
c_rt_lib0clear(&___nl__8);
#line 133
c_rt_lib0clear(&___nl__9);
#line 134
c_rt_lib0copy(&___nl__8, ___nl__5);
#line 134
c_rt_lib0hash_set_value_dec(&___nl__2, ___get_global_const(99), ___nl__8);
#line 134
c_rt_lib0clear(&___nl__8);
#line 135
c_rt_lib0delete(type_checker_priv0check_module(___nl__6, &___nl__3, &___nl__2, &___nl__4));
#line 136
c_rt_lib0move(&___nl__7, c_rt_lib0next_iter(___nl__7));
#line 136
goto label_3;
#line 136
label_1:
#line 136
c_rt_lib0clear(&___nl__5);
#line 136
c_rt_lib0clear(&___nl__6);
#line 136
c_rt_lib0clear(&___nl__7);
#line 137
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(17)));
#line 137
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(96)));
#line 137
c_rt_lib0move(&___nl__5, c_rt_lib0hash_mk(3, ___get_global_const(17), ___nl__6, ___get_global_const(60), ___nl__4, ___get_global_const(96), ___nl__7));
#line 137
c_rt_lib0clear(&___nl__6);
#line 137
c_rt_lib0clear(&___nl__7);
#line 137
c_rt_lib0clear(&___nl__0);
#line 137
c_rt_lib0clear(&___nl__1);
#line 137
c_rt_lib0clear(&___nl__2);
#line 137
c_rt_lib0clear(&___nl__3);
#line 137
c_rt_lib0clear(&___nl__4);
#line 137
return ___nl__5;
#line 137
c_rt_lib0clear(&___nl__5);
#line 137
c_rt_lib0clear(&___nl__2);
#line 137
c_rt_lib0clear(&___nl__3);
#line 137
c_rt_lib0clear(&___nl__4);
#line 137
c_rt_lib0clear(&___nl__0);
#line 137
c_rt_lib0clear(&___nl__1);
#line 137
return NULL;
}

ImmT type_checker_priv0check_module(ImmT ___nl__0,ImmT * ___ref___1,ImmT * ___ref___2,ImmT * ___ref___3) {
c_rt_lib0arg_val(___nl__0);
type_checker_priv0__const__init();
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
#line 142
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(76)));
#line 142
c_rt_lib0move(&___nl__8, c_rt_lib0hash_mk(0));
#line 142
c_rt_lib0move(&___nl__9, c_rt_lib0get_false());
#line 142
c_rt_lib0move(&___nl__7, c_rt_lib0hash_mk(2, ___get_global_const(618), ___nl__8, ___get_global_const(805), ___nl__9));
#line 142
c_rt_lib0clear(&___nl__8);
#line 142
c_rt_lib0clear(&___nl__9);
#line 142
c_rt_lib0move(&___nl__8, tct0empty());
#line 142
c_rt_lib0move(&___nl__5, c_rt_lib0hash_mk(4, ___get_global_const(60), *___ref___3, ___get_global_const(709), ___nl__6, ___get_global_const(1016), ___nl__7, ___get_global_const(712), ___nl__8));
#line 142
c_rt_lib0clear(&___nl__6);
#line 142
c_rt_lib0clear(&___nl__7);
#line 142
c_rt_lib0clear(&___nl__8);
#line 142
c_rt_lib0move(&___nl__6, c_rt_lib0hash_mk(0));
#line 142
c_rt_lib0move(&___nl__4, c_rt_lib0hash_mk(3, ___get_global_const(989), ___nl__5, ___get_global_const(336), ___nl__6, ___get_global_const(992), *___ref___1));
#line 142
c_rt_lib0clear(&___nl__5);
#line 142
c_rt_lib0clear(&___nl__6);
#line 143
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(126)));
#line 143
c_rt_lib0move(&___nl__7,___get_global_const(1));
#line 143
c_rt_lib0move(&___nl__8,___get_global_const(2));
#line 143
c_rt_lib0move(&___nl__9, c_rt_lib0array_len(___nl__5));
#line 143
label_3:
#line 143
c_rt_lib0move(&___nl__10, c_rt_lib0ge(___nl__7, ___nl__9));
#line 143
if(c_rt_lib0check_true_native(___nl__10)){ goto label_1;}
#line 143
c_rt_lib0move(&___nl__6, c_rt_lib0array_get(___nl__5, ___nl__7));
#line 144
c_rt_lib0move(&___nl__11,___get_global_const(336));
#line 144
c_rt_lib0move(&___nl__11, c_rt_lib0get_ref_hash(___nl__4, ___nl__11));
#line 144
c_rt_lib0move(&___nl__12, c_rt_lib0hash_get_value_dec(___nl__6, ___get_global_const(76)));
#line 144
c_rt_lib0move(&___nl__13, c_rt_lib0get_true());
#line 144
c_rt_lib0delete(hash0set_value(&___nl__11, ___nl__12, ___nl__13));
#line 144
c_rt_lib0clear(&___nl__13);
#line 144
c_rt_lib0clear(&___nl__12);
#line 144
c_rt_lib0move(&___nl__12,___get_global_const(336));
#line 144
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__4, ___nl__12, ___nl__11));
#line 144
c_rt_lib0clear(&___nl__12);
#line 144
c_rt_lib0clear(&___nl__11);
#line 145
c_rt_lib0move(&___nl__7, c_rt_lib0add_mod(___nl__7, ___nl__8));
#line 145
goto label_3;
#line 145
label_1:
#line 145
c_rt_lib0clear(&___nl__5);
#line 145
c_rt_lib0clear(&___nl__6);
#line 145
c_rt_lib0clear(&___nl__7);
#line 145
c_rt_lib0clear(&___nl__8);
#line 145
c_rt_lib0clear(&___nl__9);
#line 145
c_rt_lib0clear(&___nl__10);
#line 146
c_rt_lib0move(&___nl__5,___get_global_const(336));
#line 146
c_rt_lib0move(&___nl__5, c_rt_lib0get_ref_hash(___nl__4, ___nl__5));
#line 146
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(76)));
#line 146
c_rt_lib0move(&___nl__7, c_rt_lib0get_true());
#line 146
c_rt_lib0delete(hash0set_value(&___nl__5, ___nl__6, ___nl__7));
#line 146
c_rt_lib0clear(&___nl__7);
#line 146
c_rt_lib0clear(&___nl__6);
#line 146
c_rt_lib0move(&___nl__6,___get_global_const(336));
#line 146
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__4, ___nl__6, ___nl__5));
#line 146
c_rt_lib0clear(&___nl__6);
#line 146
c_rt_lib0clear(&___nl__5);
#line 147
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(711)));
#line 147
c_rt_lib0move(&___nl__7,___get_global_const(1));
#line 147
c_rt_lib0move(&___nl__8,___get_global_const(2));
#line 147
c_rt_lib0move(&___nl__9, c_rt_lib0array_len(___nl__5));
#line 147
label_6:
#line 147
c_rt_lib0move(&___nl__10, c_rt_lib0ge(___nl__7, ___nl__9));
#line 147
if(c_rt_lib0check_true_native(___nl__10)){ goto label_4;}
#line 147
c_rt_lib0move(&___nl__6, c_rt_lib0array_get(___nl__5, ___nl__7));
#line 148
c_rt_lib0move(&___nl__11, c_rt_lib0hash_mk(0));
#line 149
c_rt_lib0move(&___nl__12, c_rt_lib0hash_get_value_dec(___nl__6, ___get_global_const(73)));
#line 149
c_rt_lib0move(&___nl__14,___get_global_const(1));
#line 149
c_rt_lib0move(&___nl__15,___get_global_const(2));
#line 149
c_rt_lib0move(&___nl__16, c_rt_lib0array_len(___nl__12));
#line 149
label_9:
#line 149
c_rt_lib0move(&___nl__17, c_rt_lib0ge(___nl__14, ___nl__16));
#line 149
if(c_rt_lib0check_true_native(___nl__17)){ goto label_7;}
#line 149
c_rt_lib0move(&___nl__13, c_rt_lib0array_get(___nl__12, ___nl__14));
#line 150
c_rt_lib0move(&___nl__19, c_rt_lib0hash_get_value_dec(___nl__13, ___get_global_const(72)));
#line 150
c_rt_lib0move(&___nl__18, type_checker_priv0type_to_ptd(___nl__19, ___ref___2));
#line 150
c_rt_lib0clear(&___nl__19);
#line 151
c_rt_lib0delete(type_checker_priv0check_types_imported(___nl__18, &___nl__4, ___ref___2));
#line 152
c_rt_lib0move(&___nl__19, c_rt_lib0hash_get_value_dec(___nl__13, ___get_global_const(76)));
#line 152
c_rt_lib0delete(type_checker_priv0add_var_decl_to_vars(___nl__18, ___nl__19, &___nl__11));
#line 152
c_rt_lib0clear(&___nl__19);
#line 152
c_rt_lib0clear(&___nl__18);
#line 153
c_rt_lib0move(&___nl__14, c_rt_lib0add_mod(___nl__14, ___nl__15));
#line 153
goto label_9;
#line 153
label_7:
#line 153
c_rt_lib0clear(&___nl__12);
#line 153
c_rt_lib0clear(&___nl__13);
#line 153
c_rt_lib0clear(&___nl__14);
#line 153
c_rt_lib0clear(&___nl__15);
#line 153
c_rt_lib0clear(&___nl__16);
#line 153
c_rt_lib0clear(&___nl__17);
#line 154
c_rt_lib0move(&___nl__13, c_rt_lib0hash_get_value_dec(___nl__6, ___get_global_const(712)));
#line 154
c_rt_lib0move(&___nl__12, type_checker_priv0return_type_to_tct(___nl__13, ___ref___2));
#line 154
c_rt_lib0clear(&___nl__13);
#line 154
c_rt_lib0move(&___nl__13,___get_global_const(989));
#line 154
c_rt_lib0move(&___nl__13, c_rt_lib0get_ref_hash(___nl__4, ___nl__13));
#line 154
c_rt_lib0copy(&___nl__14, ___nl__12);
#line 154
c_rt_lib0hash_set_value_dec(&___nl__13, ___get_global_const(712), ___nl__14);
#line 154
c_rt_lib0move(&___nl__15,___get_global_const(989));
#line 154
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__4, ___nl__15, ___nl__13));
#line 154
c_rt_lib0clear(&___nl__15);
#line 154
c_rt_lib0clear(&___nl__12);
#line 154
c_rt_lib0clear(&___nl__13);
#line 154
c_rt_lib0clear(&___nl__14);
#line 155
c_rt_lib0move(&___nl__12, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(989)));
#line 155
c_rt_lib0move(&___nl__12, c_rt_lib0hash_get_value_dec(___nl__12, ___get_global_const(712)));
#line 155
c_rt_lib0delete(type_checker_priv0check_types_imported(___nl__12, &___nl__4, ___ref___2));
#line 155
c_rt_lib0clear(&___nl__12);
#line 156
c_rt_lib0move(&___nl__12, c_rt_lib0hash_get_value_dec(___nl__6, ___get_global_const(209)));
#line 156
c_rt_lib0delete(type_checker_priv0check_cmd(___nl__12, &___nl__4, &___nl__11, ___ref___2));
#line 156
c_rt_lib0clear(&___nl__12);
#line 156
c_rt_lib0clear(&___nl__11);
#line 157
c_rt_lib0move(&___nl__7, c_rt_lib0add_mod(___nl__7, ___nl__8));
#line 157
goto label_6;
#line 157
label_4:
#line 157
c_rt_lib0clear(&___nl__5);
#line 157
c_rt_lib0clear(&___nl__6);
#line 157
c_rt_lib0clear(&___nl__7);
#line 157
c_rt_lib0clear(&___nl__8);
#line 157
c_rt_lib0clear(&___nl__9);
#line 157
c_rt_lib0clear(&___nl__10);
#line 158
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(992)));
#line 158
c_rt_lib0copy(___ref___1, ___nl__5);
#line 158
c_rt_lib0clear(&___nl__5);
#line 159
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(989)));
#line 159
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(60)));
#line 159
c_rt_lib0copy(___ref___3, ___nl__5);
#line 159
c_rt_lib0clear(&___nl__5);
#line 159
c_rt_lib0clear(&___nl__4);
#line 159
c_rt_lib0clear(&___nl__0);
#line 159
return NULL;
}

ImmT type_checker_priv0join_vars(ImmT * ___ref___0,ImmT ___nl__1,ImmT * ___ref___2,ImmT * ___ref___3) {
c_rt_lib0arg_val(___nl__1);
type_checker_priv0__const__init();
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
c_rt_lib0move(&___nl__5,___get_global_const(1051));
#line 163
c_rt_lib0move(&___nl__4, hash0has_key(___nl__1, ___nl__5));
#line 163
c_rt_lib0clear(&___nl__5);
#line 163
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 163
if(c_rt_lib0check_true_native(___nl__4)){ goto label_2;}
#line 163
c_rt_lib0clear(&___nl__1);
#line 163
c_rt_lib0clear(&___nl__4);
#line 163
return NULL;
#line 163
goto label_2;
#line 163
label_2:
#line 163
c_rt_lib0clear(&___nl__4);
#line 164
c_rt_lib0move(&___nl__5,___get_global_const(1051));
#line 164
c_rt_lib0move(&___nl__4, hash0has_key(*___ref___0, ___nl__5));
#line 164
c_rt_lib0clear(&___nl__5);
#line 164
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 164
if(c_rt_lib0check_true_native(___nl__4)){ goto label_4;}
#line 165
c_rt_lib0copy(___ref___0, ___nl__1);
#line 166
c_rt_lib0clear(&___nl__1);
#line 166
c_rt_lib0clear(&___nl__4);
#line 166
return NULL;
#line 167
goto label_4;
#line 167
label_4:
#line 167
c_rt_lib0clear(&___nl__4);
#line 168
c_rt_lib0move(&___nl__6, c_rt_lib0init_iter(*___ref___0));
#line 168
label_7:
#line 168
c_rt_lib0move(&___nl__4, c_rt_lib0is_end_hash(___nl__6));
#line 168
if(c_rt_lib0check_true_native(___nl__4)){ goto label_5;}
#line 168
c_rt_lib0move(&___nl__4, c_rt_lib0get_key_iter(___nl__6));
#line 168
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value(*___ref___0, ___nl__4));
#line 169
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(1017)));
#line 169
c_rt_lib0move(&___nl__8, c_rt_lib0priv_is(___nl__7, ___get_global_const(41)));
#line 169
if(c_rt_lib0check_true_native(___nl__8)){ goto label_9;}
#line 176
c_rt_lib0move(&___nl__8, c_rt_lib0priv_is(___nl__7, ___get_global_const(42)));
#line 176
if(c_rt_lib0check_true_native(___nl__8)){ goto label_10;}
#line 176
c_rt_lib0move(&___nl__8,___get_global_const(74));
#line 176
c_rt_lib0move(&___nl__8, c_rt_lib0array_mk(2, ___nl__8, ___nl__7));
#line 176
nl_die_arg(___nl__8);
#line 169
label_9:
#line 170
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(72)));
#line 171
c_rt_lib0move(&___nl__10, hash0get_value(___nl__1, ___nl__4));
#line 171
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__10, ___get_global_const(72)));
#line 172
c_rt_lib0move(&___nl__12, c_rt_lib0ov_mk_none(___get_global_const(41)));
#line 172
c_rt_lib0move(&___nl__13, ptd_system0cross_type(___nl__9, ___nl__10, ___ref___2, ___ref___3));
#line 172
c_rt_lib0move(&___nl__11, c_rt_lib0hash_mk(2, ___get_global_const(1017), ___nl__12, ___get_global_const(72), ___nl__13));
#line 172
c_rt_lib0clear(&___nl__12);
#line 172
c_rt_lib0clear(&___nl__13);
#line 172
c_rt_lib0delete(hash0set_value(___ref___0, ___nl__4, ___nl__11));
#line 172
c_rt_lib0clear(&___nl__11);
#line 172
c_rt_lib0clear(&___nl__9);
#line 172
c_rt_lib0clear(&___nl__10);
#line 176
goto label_8;
#line 176
label_10:
#line 177
goto label_8;
#line 177
label_8:
#line 177
c_rt_lib0clear(&___nl__7);
#line 177
c_rt_lib0clear(&___nl__8);
#line 178
c_rt_lib0move(&___nl__6, c_rt_lib0next_iter(___nl__6));
#line 178
goto label_7;
#line 178
label_5:
#line 178
c_rt_lib0clear(&___nl__4);
#line 178
c_rt_lib0clear(&___nl__5);
#line 178
c_rt_lib0clear(&___nl__6);
#line 178
c_rt_lib0clear(&___nl__1);
#line 178
return NULL;
}

ImmT type_checker_priv0set_end_function(ImmT * ___ref___0) {
type_checker_priv0__const__init();
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
#line 181
c_rt_lib0move(&___nl__1,___get_global_const(1051));
#line 181
c_rt_lib0move(&___nl__3, c_rt_lib0ov_mk_none(___get_global_const(41)));
#line 181
c_rt_lib0move(&___nl__4, tct0empty());
#line 181
c_rt_lib0move(&___nl__2, c_rt_lib0hash_mk(2, ___get_global_const(1017), ___nl__3, ___get_global_const(72), ___nl__4));
#line 181
c_rt_lib0clear(&___nl__3);
#line 181
c_rt_lib0clear(&___nl__4);
#line 181
c_rt_lib0delete(hash0set_value(___ref___0, ___nl__1, ___nl__2));
#line 181
c_rt_lib0clear(&___nl__2);
#line 181
c_rt_lib0clear(&___nl__1);
#line 181
return NULL;
}

ImmT type_checker_priv0check_cmd(ImmT ___nl__0,ImmT * ___ref___1,ImmT * ___ref___2,ImmT * ___ref___3) {
c_rt_lib0arg_val(___nl__0);
type_checker_priv0__const__init();
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
#line 186
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(213)));
#line 186
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(396)));
#line 186
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(98)));
#line 186
c_rt_lib0copy(&___nl__5, ___nl__4);
#line 186
c_rt_lib0hash_set_value_dec(___ref___3, ___get_global_const(710), ___nl__5);
#line 186
c_rt_lib0clear(&___nl__4);
#line 186
c_rt_lib0clear(&___nl__5);
#line 187
c_rt_lib0move(&___nl__4, c_rt_lib0hash_mk(0));
#line 188
c_rt_lib0copy(&___nl__5, *___ref___2);
#line 189
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(209)));
#line 189
c_rt_lib0move(&___nl__7, c_rt_lib0priv_is(___nl__6, ___get_global_const(740)));
#line 189
if(c_rt_lib0check_true_native(___nl__7)){ goto label_2;}
#line 208
c_rt_lib0move(&___nl__7, c_rt_lib0priv_is(___nl__6, ___get_global_const(741)));
#line 208
if(c_rt_lib0check_true_native(___nl__7)){ goto label_3;}
#line 225
c_rt_lib0move(&___nl__7, c_rt_lib0priv_is(___nl__6, ___get_global_const(742)));
#line 225
if(c_rt_lib0check_true_native(___nl__7)){ goto label_4;}
#line 227
c_rt_lib0move(&___nl__7, c_rt_lib0priv_is(___nl__6, ___get_global_const(743)));
#line 227
if(c_rt_lib0check_true_native(___nl__7)){ goto label_5;}
#line 229
c_rt_lib0move(&___nl__7, c_rt_lib0priv_is(___nl__6, ___get_global_const(117)));
#line 229
if(c_rt_lib0check_true_native(___nl__7)){ goto label_6;}
#line 231
c_rt_lib0move(&___nl__7, c_rt_lib0priv_is(___nl__6, ___get_global_const(744)));
#line 231
if(c_rt_lib0check_true_native(___nl__7)){ goto label_7;}
#line 233
c_rt_lib0move(&___nl__7, c_rt_lib0priv_is(___nl__6, ___get_global_const(745)));
#line 233
if(c_rt_lib0check_true_native(___nl__7)){ goto label_8;}
#line 235
c_rt_lib0move(&___nl__7, c_rt_lib0priv_is(___nl__6, ___get_global_const(746)));
#line 235
if(c_rt_lib0check_true_native(___nl__7)){ goto label_9;}
#line 243
c_rt_lib0move(&___nl__7, c_rt_lib0priv_is(___nl__6, ___get_global_const(747)));
#line 243
if(c_rt_lib0check_true_native(___nl__7)){ goto label_10;}
#line 251
c_rt_lib0move(&___nl__7, c_rt_lib0priv_is(___nl__6, ___get_global_const(748)));
#line 251
if(c_rt_lib0check_true_native(___nl__7)){ goto label_11;}
#line 259
c_rt_lib0move(&___nl__7, c_rt_lib0priv_is(___nl__6, ___get_global_const(749)));
#line 259
if(c_rt_lib0check_true_native(___nl__7)){ goto label_12;}
#line 267
c_rt_lib0move(&___nl__7, c_rt_lib0priv_is(___nl__6, ___get_global_const(750)));
#line 267
if(c_rt_lib0check_true_native(___nl__7)){ goto label_13;}
#line 269
c_rt_lib0move(&___nl__7, c_rt_lib0priv_is(___nl__6, ___get_global_const(641)));
#line 269
if(c_rt_lib0check_true_native(___nl__7)){ goto label_14;}
#line 271
c_rt_lib0move(&___nl__7, c_rt_lib0priv_is(___nl__6, ___get_global_const(210)));
#line 271
if(c_rt_lib0check_true_native(___nl__7)){ goto label_15;}
#line 284
c_rt_lib0move(&___nl__7, c_rt_lib0priv_is(___nl__6, ___get_global_const(751)));
#line 284
if(c_rt_lib0check_true_native(___nl__7)){ goto label_16;}
#line 290
c_rt_lib0move(&___nl__7, c_rt_lib0priv_is(___nl__6, ___get_global_const(229)));
#line 290
if(c_rt_lib0check_true_native(___nl__7)){ goto label_17;}
#line 295
c_rt_lib0move(&___nl__7, c_rt_lib0priv_is(___nl__6, ___get_global_const(752)));
#line 295
if(c_rt_lib0check_true_native(___nl__7)){ goto label_18;}
#line 297
c_rt_lib0move(&___nl__7, c_rt_lib0priv_is(___nl__6, ___get_global_const(753)));
#line 297
if(c_rt_lib0check_true_native(___nl__7)){ goto label_19;}
#line 302
c_rt_lib0move(&___nl__7, c_rt_lib0priv_is(___nl__6, ___get_global_const(78)));
#line 302
if(c_rt_lib0check_true_native(___nl__7)){ goto label_20;}
#line 304
c_rt_lib0move(&___nl__7, c_rt_lib0priv_is(___nl__6, ___get_global_const(754)));
#line 304
if(c_rt_lib0check_true_native(___nl__7)){ goto label_21;}
#line 304
c_rt_lib0move(&___nl__7,___get_global_const(74));
#line 304
c_rt_lib0move(&___nl__7, c_rt_lib0array_mk(2, ___nl__7, ___nl__6));
#line 304
nl_die_arg(___nl__7);
#line 189
label_2:
#line 189
c_rt_lib0move(&___nl__8, c_rt_lib0priv_as(___nl__6, ___get_global_const(740)));
#line 190
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__8, ___get_global_const(755)));
#line 190
c_rt_lib0move(&___nl__9, type_checker_priv0check_val(___nl__10, ___ref___1, &___nl__5, ___ref___3));
#line 190
c_rt_lib0clear(&___nl__10);
#line 191
c_rt_lib0move(&___nl__10, ptd_system0is_condition_type(___nl__9, ___ref___1, ___ref___3));
#line 191
c_rt_lib0move(&___nl__10, c_rt_lib0not(___nl__10));
#line 191
c_rt_lib0move(&___nl__10, c_rt_lib0not(___nl__10));
#line 191
if(c_rt_lib0check_true_native(___nl__10)){ goto label_23;}
#line 191
c_rt_lib0move(&___nl__11,___get_global_const(1052));
#line 191
c_rt_lib0move(&___nl__13, c_rt_lib0hash_get_value_dec(___nl__9, ___get_global_const(72)));
#line 191
c_rt_lib0move(&___nl__12, type_checker_priv0get_print_tct_type_name(___nl__13));
#line 191
c_rt_lib0clear(&___nl__13);
#line 191
c_rt_lib0move(&___nl__11, c_rt_lib0concat_add(___nl__11, ___nl__12));
#line 191
c_rt_lib0clear(&___nl__12);
#line 191
c_rt_lib0delete(type_checker_priv0add_error(___ref___3, ___nl__11));
#line 191
c_rt_lib0clear(&___nl__11);
#line 191
goto label_23;
#line 191
label_23:
#line 191
c_rt_lib0clear(&___nl__10);
#line 194
c_rt_lib0copy(&___nl__10, ___nl__5);
#line 195
c_rt_lib0move(&___nl__11, c_rt_lib0hash_get_value_dec(___nl__8, ___get_global_const(740)));
#line 195
c_rt_lib0delete(type_checker_priv0check_cmd(___nl__11, ___ref___1, &___nl__10, ___ref___3));
#line 195
c_rt_lib0clear(&___nl__11);
#line 196
c_rt_lib0move(&___nl__11, c_rt_lib0hash_get_value_dec(___nl__8, ___get_global_const(756)));
#line 196
c_rt_lib0move(&___nl__13,___get_global_const(1));
#line 196
c_rt_lib0move(&___nl__14,___get_global_const(2));
#line 196
c_rt_lib0move(&___nl__15, c_rt_lib0array_len(___nl__11));
#line 196
label_26:
#line 196
c_rt_lib0move(&___nl__16, c_rt_lib0ge(___nl__13, ___nl__15));
#line 196
if(c_rt_lib0check_true_native(___nl__16)){ goto label_24;}
#line 196
c_rt_lib0move(&___nl__12, c_rt_lib0array_get(___nl__11, ___nl__13));
#line 197
c_rt_lib0move(&___nl__17, c_rt_lib0hash_get_value_dec(___nl__12, ___get_global_const(209)));
#line 197
c_rt_lib0move(&___nl__17, c_rt_lib0hash_get_value_dec(___nl__17, ___get_global_const(213)));
#line 197
c_rt_lib0move(&___nl__17, c_rt_lib0hash_get_value_dec(___nl__17, ___get_global_const(396)));
#line 197
c_rt_lib0move(&___nl__17, c_rt_lib0hash_get_value_dec(___nl__17, ___get_global_const(98)));
#line 197
c_rt_lib0copy(&___nl__18, ___nl__17);
#line 197
c_rt_lib0hash_set_value_dec(___ref___3, ___get_global_const(710), ___nl__18);
#line 197
c_rt_lib0clear(&___nl__17);
#line 197
c_rt_lib0clear(&___nl__18);
#line 198
c_rt_lib0move(&___nl__18, c_rt_lib0hash_get_value_dec(___nl__12, ___get_global_const(755)));
#line 198
c_rt_lib0move(&___nl__17, type_checker_priv0check_val(___nl__18, ___ref___1, &___nl__5, ___ref___3));
#line 198
c_rt_lib0clear(&___nl__18);
#line 199
c_rt_lib0move(&___nl__18, ptd_system0is_condition_type(___nl__17, ___ref___1, ___ref___3));
#line 199
c_rt_lib0move(&___nl__18, c_rt_lib0not(___nl__18));
#line 199
c_rt_lib0move(&___nl__18, c_rt_lib0not(___nl__18));
#line 199
if(c_rt_lib0check_true_native(___nl__18)){ goto label_28;}
#line 199
c_rt_lib0move(&___nl__19,___get_global_const(1053));
#line 199
c_rt_lib0move(&___nl__21, c_rt_lib0hash_get_value_dec(___nl__17, ___get_global_const(72)));
#line 199
c_rt_lib0move(&___nl__20, type_checker_priv0get_print_tct_type_name(___nl__21));
#line 199
c_rt_lib0clear(&___nl__21);
#line 199
c_rt_lib0move(&___nl__19, c_rt_lib0concat_add(___nl__19, ___nl__20));
#line 199
c_rt_lib0clear(&___nl__20);
#line 199
c_rt_lib0delete(type_checker_priv0add_error(___ref___3, ___nl__19));
#line 199
c_rt_lib0clear(&___nl__19);
#line 199
goto label_28;
#line 199
label_28:
#line 199
c_rt_lib0clear(&___nl__18);
#line 202
c_rt_lib0copy(&___nl__18, ___nl__5);
#line 203
c_rt_lib0move(&___nl__19, c_rt_lib0hash_get_value_dec(___nl__12, ___get_global_const(209)));
#line 203
c_rt_lib0delete(type_checker_priv0check_cmd(___nl__19, ___ref___1, &___nl__18, ___ref___3));
#line 203
c_rt_lib0clear(&___nl__19);
#line 204
c_rt_lib0delete(type_checker_priv0join_vars(&___nl__10, ___nl__18, ___ref___1, ___ref___3));
#line 204
c_rt_lib0clear(&___nl__17);
#line 204
c_rt_lib0clear(&___nl__18);
#line 205
c_rt_lib0move(&___nl__13, c_rt_lib0add_mod(___nl__13, ___nl__14));
#line 205
goto label_26;
#line 205
label_24:
#line 205
c_rt_lib0clear(&___nl__11);
#line 205
c_rt_lib0clear(&___nl__12);
#line 205
c_rt_lib0clear(&___nl__13);
#line 205
c_rt_lib0clear(&___nl__14);
#line 205
c_rt_lib0clear(&___nl__15);
#line 205
c_rt_lib0clear(&___nl__16);
#line 206
c_rt_lib0move(&___nl__11, c_rt_lib0hash_get_value_dec(___nl__8, ___get_global_const(757)));
#line 206
c_rt_lib0delete(type_checker_priv0check_cmd(___nl__11, ___ref___1, &___nl__5, ___ref___3));
#line 206
c_rt_lib0clear(&___nl__11);
#line 207
c_rt_lib0delete(type_checker_priv0join_vars(&___nl__5, ___nl__10, ___ref___1, ___ref___3));
#line 207
c_rt_lib0clear(&___nl__9);
#line 207
c_rt_lib0clear(&___nl__10);
#line 207
c_rt_lib0clear(&___nl__8);
#line 208
goto label_1;
#line 208
label_3:
#line 208
c_rt_lib0move(&___nl__8, c_rt_lib0priv_as(___nl__6, ___get_global_const(741)));
#line 209
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__8, ___get_global_const(758)));
#line 209
c_rt_lib0move(&___nl__10, c_rt_lib0priv_is(___nl__9, ___get_global_const(641)));
#line 209
if(c_rt_lib0check_true_native(___nl__10)){ goto label_30;}
#line 211
c_rt_lib0move(&___nl__10, c_rt_lib0priv_is(___nl__9, ___get_global_const(752)));
#line 211
if(c_rt_lib0check_true_native(___nl__10)){ goto label_31;}
#line 211
c_rt_lib0move(&___nl__10,___get_global_const(74));
#line 211
c_rt_lib0move(&___nl__10, c_rt_lib0array_mk(2, ___nl__10, ___nl__9));
#line 211
nl_die_arg(___nl__10);
#line 209
label_30:
#line 209
c_rt_lib0move(&___nl__11, c_rt_lib0priv_as(___nl__9, ___get_global_const(641)));
#line 210
c_rt_lib0delete(type_checker_priv0check_val(___nl__11, ___ref___1, &___nl__5, ___ref___3));
#line 210
c_rt_lib0clear(&___nl__11);
#line 211
goto label_29;
#line 211
label_31:
#line 211
c_rt_lib0move(&___nl__11, c_rt_lib0priv_as(___nl__9, ___get_global_const(752)));
#line 212
c_rt_lib0move(&___nl__12, type_checker_priv0check_var_decl(___nl__11, ___ref___1, &___nl__5, ___ref___3));
#line 212
c_rt_lib0move(&___nl__13, c_rt_lib0hash_get_value_dec(___nl__11, ___get_global_const(76)));
#line 212
c_rt_lib0delete(type_checker_priv0add_var_to_vars(___nl__12, ___nl__13, &___nl__5));
#line 212
c_rt_lib0clear(&___nl__13);
#line 212
c_rt_lib0clear(&___nl__12);
#line 212
c_rt_lib0clear(&___nl__11);
#line 213
goto label_29;
#line 213
label_29:
#line 213
c_rt_lib0clear(&___nl__9);
#line 213
c_rt_lib0clear(&___nl__10);
#line 214
c_rt_lib0copy(&___nl__9, ___nl__5);
#line 215
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__8, ___get_global_const(755)));
#line 215
c_rt_lib0move(&___nl__10, c_rt_lib0priv_is(___nl__10, ___get_global_const(754)));
#line 215
c_rt_lib0move(&___nl__10, c_rt_lib0not(___nl__10));
#line 215
c_rt_lib0move(&___nl__10, c_rt_lib0not(___nl__10));
#line 215
if(c_rt_lib0check_true_native(___nl__10)){ goto label_33;}
#line 216
c_rt_lib0move(&___nl__12, c_rt_lib0hash_get_value_dec(___nl__8, ___get_global_const(755)));
#line 216
c_rt_lib0move(&___nl__11, type_checker_priv0check_val(___nl__12, ___ref___1, &___nl__9, ___ref___3));
#line 216
c_rt_lib0clear(&___nl__12);
#line 217
c_rt_lib0move(&___nl__12, ptd_system0is_condition_type(___nl__11, ___ref___1, ___ref___3));
#line 217
c_rt_lib0move(&___nl__12, c_rt_lib0not(___nl__12));
#line 217
c_rt_lib0move(&___nl__12, c_rt_lib0not(___nl__12));
#line 217
if(c_rt_lib0check_true_native(___nl__12)){ goto label_35;}
#line 217
c_rt_lib0move(&___nl__13,___get_global_const(1054));
#line 217
c_rt_lib0move(&___nl__15, c_rt_lib0hash_get_value_dec(___nl__11, ___get_global_const(72)));
#line 217
c_rt_lib0move(&___nl__14, type_checker_priv0get_print_tct_type_name(___nl__15));
#line 217
c_rt_lib0clear(&___nl__15);
#line 217
c_rt_lib0move(&___nl__13, c_rt_lib0concat_add(___nl__13, ___nl__14));
#line 217
c_rt_lib0clear(&___nl__14);
#line 217
c_rt_lib0delete(type_checker_priv0add_error(___ref___3, ___nl__13));
#line 217
c_rt_lib0clear(&___nl__13);
#line 217
goto label_35;
#line 217
label_35:
#line 217
c_rt_lib0clear(&___nl__12);
#line 220
c_rt_lib0delete(type_checker_priv0join_vars(&___nl__9, ___nl__5, ___ref___1, ___ref___3));
#line 220
c_rt_lib0clear(&___nl__11);
#line 221
goto label_33;
#line 221
label_33:
#line 221
c_rt_lib0clear(&___nl__10);
#line 222
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__8, ___get_global_const(209)));
#line 222
c_rt_lib0delete(type_checker_priv0break_continue_block(___nl__10, ___ref___1, &___nl__9, ___ref___3));
#line 222
c_rt_lib0clear(&___nl__10);
#line 223
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__8, ___get_global_const(759)));
#line 223
c_rt_lib0delete(type_checker_priv0check_val(___nl__10, ___ref___1, &___nl__9, ___ref___3));
#line 223
c_rt_lib0clear(&___nl__10);
#line 224
c_rt_lib0delete(type_checker_priv0join_vars(&___nl__5, ___nl__9, ___ref___1, ___ref___3));
#line 224
c_rt_lib0clear(&___nl__9);
#line 224
c_rt_lib0clear(&___nl__8);
#line 225
goto label_1;
#line 225
label_4:
#line 225
c_rt_lib0move(&___nl__8, c_rt_lib0priv_as(___nl__6, ___get_global_const(742)));
#line 226
c_rt_lib0delete(type_checker_priv0check_fora(___nl__8, ___ref___1, &___nl__5, ___ref___3));
#line 226
c_rt_lib0clear(&___nl__8);
#line 227
goto label_1;
#line 227
label_5:
#line 227
c_rt_lib0move(&___nl__8, c_rt_lib0priv_as(___nl__6, ___get_global_const(743)));
#line 228
c_rt_lib0delete(type_checker_priv0check_forh(___nl__8, ___ref___1, &___nl__5, ___ref___3));
#line 228
c_rt_lib0clear(&___nl__8);
#line 229
goto label_1;
#line 229
label_6:
#line 229
c_rt_lib0move(&___nl__8, c_rt_lib0priv_as(___nl__6, ___get_global_const(117)));
#line 230
c_rt_lib0delete(type_checker_priv0break_continue_block(___nl__8, ___ref___1, &___nl__5, ___ref___3));
#line 230
c_rt_lib0clear(&___nl__8);
#line 231
goto label_1;
#line 231
label_7:
#line 231
c_rt_lib0move(&___nl__8, c_rt_lib0priv_as(___nl__6, ___get_global_const(744)));
#line 232
c_rt_lib0delete(type_checker_priv0check_rep(___nl__8, ___ref___1, &___nl__5, ___ref___3));
#line 232
c_rt_lib0clear(&___nl__8);
#line 233
goto label_1;
#line 233
label_8:
#line 233
c_rt_lib0move(&___nl__8, c_rt_lib0priv_as(___nl__6, ___get_global_const(745)));
#line 234
c_rt_lib0delete(type_checker_priv0check_while(___nl__8, ___ref___1, &___nl__5, ___ref___3));
#line 234
c_rt_lib0clear(&___nl__8);
#line 235
goto label_1;
#line 235
label_9:
#line 235
c_rt_lib0move(&___nl__8, c_rt_lib0priv_as(___nl__6, ___get_global_const(746)));
#line 236
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__8, ___get_global_const(755)));
#line 236
c_rt_lib0move(&___nl__9, type_checker_priv0check_val(___nl__10, ___ref___1, &___nl__5, ___ref___3));
#line 236
c_rt_lib0clear(&___nl__10);
#line 237
c_rt_lib0move(&___nl__10, ptd_system0is_condition_type(___nl__9, ___ref___1, ___ref___3));
#line 237
c_rt_lib0move(&___nl__10, c_rt_lib0not(___nl__10));
#line 237
c_rt_lib0move(&___nl__10, c_rt_lib0not(___nl__10));
#line 237
if(c_rt_lib0check_true_native(___nl__10)){ goto label_37;}
#line 237
c_rt_lib0move(&___nl__11,___get_global_const(1055));
#line 237
c_rt_lib0move(&___nl__13, c_rt_lib0hash_get_value_dec(___nl__9, ___get_global_const(72)));
#line 237
c_rt_lib0move(&___nl__12, type_checker_priv0get_print_tct_type_name(___nl__13));
#line 237
c_rt_lib0clear(&___nl__13);
#line 237
c_rt_lib0move(&___nl__11, c_rt_lib0concat_add(___nl__11, ___nl__12));
#line 237
c_rt_lib0clear(&___nl__12);
#line 237
c_rt_lib0delete(type_checker_priv0add_error(___ref___3, ___nl__11));
#line 237
c_rt_lib0clear(&___nl__11);
#line 237
goto label_37;
#line 237
label_37:
#line 237
c_rt_lib0clear(&___nl__10);
#line 240
c_rt_lib0copy(&___nl__10, ___nl__5);
#line 241
c_rt_lib0move(&___nl__11, c_rt_lib0hash_get_value_dec(___nl__8, ___get_global_const(209)));
#line 241
c_rt_lib0delete(type_checker_priv0check_cmd(___nl__11, ___ref___1, &___nl__10, ___ref___3));
#line 241
c_rt_lib0clear(&___nl__11);
#line 242
c_rt_lib0delete(type_checker_priv0join_vars(&___nl__5, ___nl__10, ___ref___1, ___ref___3));
#line 242
c_rt_lib0clear(&___nl__9);
#line 242
c_rt_lib0clear(&___nl__10);
#line 242
c_rt_lib0clear(&___nl__8);
#line 243
goto label_1;
#line 243
label_10:
#line 243
c_rt_lib0move(&___nl__8, c_rt_lib0priv_as(___nl__6, ___get_global_const(747)));
#line 244
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__8, ___get_global_const(755)));
#line 244
c_rt_lib0move(&___nl__9, type_checker_priv0check_val(___nl__10, ___ref___1, &___nl__5, ___ref___3));
#line 244
c_rt_lib0clear(&___nl__10);
#line 245
c_rt_lib0move(&___nl__10, ptd_system0is_condition_type(___nl__9, ___ref___1, ___ref___3));
#line 245
c_rt_lib0move(&___nl__10, c_rt_lib0not(___nl__10));
#line 245
c_rt_lib0move(&___nl__10, c_rt_lib0not(___nl__10));
#line 245
if(c_rt_lib0check_true_native(___nl__10)){ goto label_39;}
#line 245
c_rt_lib0move(&___nl__11,___get_global_const(1056));
#line 245
c_rt_lib0move(&___nl__13, c_rt_lib0hash_get_value_dec(___nl__9, ___get_global_const(72)));
#line 245
c_rt_lib0move(&___nl__12, type_checker_priv0get_print_tct_type_name(___nl__13));
#line 245
c_rt_lib0clear(&___nl__13);
#line 245
c_rt_lib0move(&___nl__11, c_rt_lib0concat_add(___nl__11, ___nl__12));
#line 245
c_rt_lib0clear(&___nl__12);
#line 245
c_rt_lib0delete(type_checker_priv0add_error(___ref___3, ___nl__11));
#line 245
c_rt_lib0clear(&___nl__11);
#line 245
goto label_39;
#line 245
label_39:
#line 245
c_rt_lib0clear(&___nl__10);
#line 248
c_rt_lib0copy(&___nl__10, ___nl__5);
#line 249
c_rt_lib0move(&___nl__11, c_rt_lib0hash_get_value_dec(___nl__8, ___get_global_const(209)));
#line 249
c_rt_lib0delete(type_checker_priv0check_cmd(___nl__11, ___ref___1, &___nl__10, ___ref___3));
#line 249
c_rt_lib0clear(&___nl__11);
#line 250
c_rt_lib0delete(type_checker_priv0join_vars(&___nl__5, ___nl__10, ___ref___1, ___ref___3));
#line 250
c_rt_lib0clear(&___nl__9);
#line 250
c_rt_lib0clear(&___nl__10);
#line 250
c_rt_lib0clear(&___nl__8);
#line 251
goto label_1;
#line 251
label_11:
#line 252
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(*___ref___1, ___get_global_const(989)));
#line 252
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__8, ___get_global_const(1016)));
#line 252
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__8, ___get_global_const(805)));
#line 252
c_rt_lib0move(&___nl__8, c_rt_lib0not(___nl__8));
#line 252
c_rt_lib0move(&___nl__8, c_rt_lib0not(___nl__8));
#line 252
if(c_rt_lib0check_true_native(___nl__8)){ goto label_41;}
#line 253
c_rt_lib0move(&___nl__9,___get_global_const(761));
#line 253
c_rt_lib0delete(type_checker_priv0add_error(___ref___3, ___nl__9));
#line 253
c_rt_lib0clear(&___nl__9);
#line 254
goto label_40;
#line 254
label_41:
#line 255
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(*___ref___1, ___get_global_const(989)));
#line 255
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__9, ___get_global_const(1016)));
#line 255
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__9, ___get_global_const(618)));
#line 256
c_rt_lib0delete(type_checker_priv0join_vars(&___nl__9, ___nl__5, ___ref___1, ___ref___3));
#line 257
c_rt_lib0move(&___nl__10,___get_global_const(989));
#line 257
c_rt_lib0move(&___nl__10, c_rt_lib0get_ref_hash(*___ref___1, ___nl__10));
#line 257
c_rt_lib0move(&___nl__11,___get_global_const(1016));
#line 257
c_rt_lib0move(&___nl__11, c_rt_lib0get_ref_hash(___nl__10, ___nl__11));
#line 257
c_rt_lib0copy(&___nl__12, ___nl__9);
#line 257
c_rt_lib0hash_set_value_dec(&___nl__11, ___get_global_const(618), ___nl__12);
#line 257
c_rt_lib0move(&___nl__13,___get_global_const(1016));
#line 257
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__10, ___nl__13, ___nl__11));
#line 257
c_rt_lib0move(&___nl__13,___get_global_const(989));
#line 257
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___1, ___nl__13, ___nl__10));
#line 257
c_rt_lib0clear(&___nl__13);
#line 257
c_rt_lib0clear(&___nl__10);
#line 257
c_rt_lib0clear(&___nl__11);
#line 257
c_rt_lib0clear(&___nl__12);
#line 257
c_rt_lib0clear(&___nl__9);
#line 258
goto label_40;
#line 258
label_40:
#line 258
c_rt_lib0clear(&___nl__8);
#line 259
goto label_1;
#line 259
label_12:
#line 260
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(*___ref___1, ___get_global_const(989)));
#line 260
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__8, ___get_global_const(1016)));
#line 260
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__8, ___get_global_const(805)));
#line 260
c_rt_lib0move(&___nl__8, c_rt_lib0not(___nl__8));
#line 260
c_rt_lib0move(&___nl__8, c_rt_lib0not(___nl__8));
#line 260
if(c_rt_lib0check_true_native(___nl__8)){ goto label_43;}
#line 261
c_rt_lib0move(&___nl__9,___get_global_const(762));
#line 261
c_rt_lib0delete(type_checker_priv0add_error(___ref___3, ___nl__9));
#line 261
c_rt_lib0clear(&___nl__9);
#line 262
goto label_42;
#line 262
label_43:
#line 263
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(*___ref___1, ___get_global_const(989)));
#line 263
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__9, ___get_global_const(1016)));
#line 263
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__9, ___get_global_const(618)));
#line 264
c_rt_lib0delete(type_checker_priv0join_vars(&___nl__9, ___nl__5, ___ref___1, ___ref___3));
#line 265
c_rt_lib0move(&___nl__10,___get_global_const(989));
#line 265
c_rt_lib0move(&___nl__10, c_rt_lib0get_ref_hash(*___ref___1, ___nl__10));
#line 265
c_rt_lib0move(&___nl__11,___get_global_const(1016));
#line 265
c_rt_lib0move(&___nl__11, c_rt_lib0get_ref_hash(___nl__10, ___nl__11));
#line 265
c_rt_lib0copy(&___nl__12, ___nl__9);
#line 265
c_rt_lib0hash_set_value_dec(&___nl__11, ___get_global_const(618), ___nl__12);
#line 265
c_rt_lib0move(&___nl__13,___get_global_const(1016));
#line 265
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__10, ___nl__13, ___nl__11));
#line 265
c_rt_lib0move(&___nl__13,___get_global_const(989));
#line 265
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___1, ___nl__13, ___nl__10));
#line 265
c_rt_lib0clear(&___nl__13);
#line 265
c_rt_lib0clear(&___nl__10);
#line 265
c_rt_lib0clear(&___nl__11);
#line 265
c_rt_lib0clear(&___nl__12);
#line 265
c_rt_lib0clear(&___nl__9);
#line 266
goto label_42;
#line 266
label_42:
#line 266
c_rt_lib0clear(&___nl__8);
#line 267
goto label_1;
#line 267
label_13:
#line 267
c_rt_lib0move(&___nl__8, c_rt_lib0priv_as(___nl__6, ___get_global_const(750)));
#line 268
c_rt_lib0delete(type_checker_priv0check_match(___nl__8, ___ref___1, &___nl__5, ___ref___3));
#line 268
c_rt_lib0clear(&___nl__8);
#line 269
goto label_1;
#line 269
label_14:
#line 269
c_rt_lib0move(&___nl__8, c_rt_lib0priv_as(___nl__6, ___get_global_const(641)));
#line 270
c_rt_lib0delete(type_checker_priv0check_val(___nl__8, ___ref___1, &___nl__5, ___ref___3));
#line 270
c_rt_lib0clear(&___nl__8);
#line 271
goto label_1;
#line 271
label_15:
#line 271
c_rt_lib0move(&___nl__8, c_rt_lib0priv_as(___nl__6, ___get_global_const(210)));
#line 272
c_rt_lib0move(&___nl__9, type_checker_priv0check_val(___nl__8, ___ref___1, &___nl__5, ___ref___3));
#line 273
c_rt_lib0move(&___nl__12, c_rt_lib0hash_get_value_dec(*___ref___1, ___get_global_const(989)));
#line 273
c_rt_lib0move(&___nl__12, c_rt_lib0hash_get_value_dec(___nl__12, ___get_global_const(712)));
#line 273
c_rt_lib0move(&___nl__13,___get_global_const(727));
#line 273
c_rt_lib0move(&___nl__10, ov0is(___nl__12, ___nl__13));
#line 273
c_rt_lib0clear(&___nl__13);
#line 273
c_rt_lib0clear(&___nl__12);
#line 273
c_rt_lib0move(&___nl__11, c_rt_lib0not(___nl__10));
#line 273
if(c_rt_lib0check_true_native(___nl__11)){ goto label_46;}
#line 273
c_rt_lib0move(&___nl__12, c_rt_lib0hash_get_value_dec(___nl__9, ___get_global_const(72)));
#line 273
c_rt_lib0move(&___nl__13,___get_global_const(730));
#line 273
c_rt_lib0move(&___nl__10, ov0is(___nl__12, ___nl__13));
#line 273
c_rt_lib0clear(&___nl__13);
#line 273
c_rt_lib0clear(&___nl__12);
#line 273
c_rt_lib0move(&___nl__10, c_rt_lib0not(___nl__10));
#line 273
label_46:
#line 273
c_rt_lib0clear(&___nl__11);
#line 273
c_rt_lib0move(&___nl__10, c_rt_lib0not(___nl__10));
#line 273
if(c_rt_lib0check_true_native(___nl__10)){ goto label_45;}
#line 274
c_rt_lib0move(&___nl__11,___get_global_const(1057));
#line 274
c_rt_lib0delete(type_checker_priv0add_error(___ref___3, ___nl__11));
#line 274
c_rt_lib0clear(&___nl__11);
#line 275
goto label_50;
#line 275
label_45:
#line 275
c_rt_lib0move(&___nl__13, c_rt_lib0hash_get_value_dec(*___ref___1, ___get_global_const(989)));
#line 275
c_rt_lib0move(&___nl__13, c_rt_lib0hash_get_value_dec(___nl__13, ___get_global_const(712)));
#line 275
c_rt_lib0move(&___nl__14,___get_global_const(727));
#line 275
c_rt_lib0move(&___nl__10, ov0is(___nl__13, ___nl__14));
#line 275
c_rt_lib0clear(&___nl__14);
#line 275
c_rt_lib0clear(&___nl__13);
#line 275
c_rt_lib0move(&___nl__10, c_rt_lib0not(___nl__10));
#line 275
c_rt_lib0move(&___nl__12, c_rt_lib0not(___nl__10));
#line 275
if(c_rt_lib0check_true_native(___nl__12)){ goto label_49;}
#line 275
c_rt_lib0move(&___nl__13, c_rt_lib0hash_get_value_dec(*___ref___1, ___get_global_const(989)));
#line 275
c_rt_lib0move(&___nl__13, c_rt_lib0hash_get_value_dec(___nl__13, ___get_global_const(712)));
#line 275
c_rt_lib0move(&___nl__14,___get_global_const(722));
#line 275
c_rt_lib0move(&___nl__10, ov0is(___nl__13, ___nl__14));
#line 275
c_rt_lib0clear(&___nl__14);
#line 275
c_rt_lib0clear(&___nl__13);
#line 275
c_rt_lib0move(&___nl__10, c_rt_lib0not(___nl__10));
#line 275
label_49:
#line 275
c_rt_lib0clear(&___nl__12);
#line 275
c_rt_lib0move(&___nl__11, c_rt_lib0not(___nl__10));
#line 275
if(c_rt_lib0check_true_native(___nl__11)){ goto label_48;}
#line 275
c_rt_lib0move(&___nl__12, c_rt_lib0hash_get_value_dec(___nl__9, ___get_global_const(72)));
#line 275
c_rt_lib0move(&___nl__13,___get_global_const(730));
#line 275
c_rt_lib0move(&___nl__10, ov0is(___nl__12, ___nl__13));
#line 275
c_rt_lib0clear(&___nl__13);
#line 275
c_rt_lib0clear(&___nl__12);
#line 275
label_48:
#line 275
c_rt_lib0clear(&___nl__11);
#line 275
c_rt_lib0move(&___nl__10, c_rt_lib0not(___nl__10));
#line 275
if(c_rt_lib0check_true_native(___nl__10)){ goto label_47;}
#line 276
c_rt_lib0move(&___nl__11,___get_global_const(1058));
#line 276
c_rt_lib0delete(type_checker_priv0add_error(___ref___3, ___nl__11));
#line 276
c_rt_lib0clear(&___nl__11);
#line 277
goto label_50;
#line 277
label_47:
#line 277
c_rt_lib0move(&___nl__12, c_rt_lib0hash_get_value_dec(*___ref___1, ___get_global_const(989)));
#line 277
c_rt_lib0move(&___nl__12, c_rt_lib0hash_get_value_dec(___nl__12, ___get_global_const(712)));
#line 277
c_rt_lib0move(&___nl__13,___get_global_const(727));
#line 277
c_rt_lib0move(&___nl__10, ov0is(___nl__12, ___nl__13));
#line 277
c_rt_lib0clear(&___nl__13);
#line 277
c_rt_lib0clear(&___nl__12);
#line 277
c_rt_lib0move(&___nl__10, c_rt_lib0not(___nl__10));
#line 277
c_rt_lib0move(&___nl__11, c_rt_lib0not(___nl__10));
#line 277
if(c_rt_lib0check_true_native(___nl__11)){ goto label_51;}
#line 277
c_rt_lib0move(&___nl__12, c_rt_lib0hash_get_value_dec(___nl__9, ___get_global_const(72)));
#line 277
c_rt_lib0move(&___nl__13,___get_global_const(730));
#line 277
c_rt_lib0move(&___nl__10, ov0is(___nl__12, ___nl__13));
#line 277
c_rt_lib0clear(&___nl__13);
#line 277
c_rt_lib0clear(&___nl__12);
#line 277
c_rt_lib0move(&___nl__10, c_rt_lib0not(___nl__10));
#line 277
label_51:
#line 277
c_rt_lib0clear(&___nl__11);
#line 277
c_rt_lib0move(&___nl__10, c_rt_lib0not(___nl__10));
#line 277
if(c_rt_lib0check_true_native(___nl__10)){ goto label_50;}
#line 278
c_rt_lib0move(&___nl__12, c_rt_lib0hash_get_value_dec(*___ref___1, ___get_global_const(989)));
#line 278
c_rt_lib0move(&___nl__12, c_rt_lib0hash_get_value_dec(___nl__12, ___get_global_const(712)));
#line 278
c_rt_lib0move(&___nl__11, ptd_system0check_assignment(___nl__12, ___nl__9, ___ref___1, ___ref___3));
#line 278
c_rt_lib0clear(&___nl__12);
#line 279
c_rt_lib0move(&___nl__13,___get_global_const(43));
#line 279
c_rt_lib0move(&___nl__12, ov0is(___nl__11, ___nl__13));
#line 279
c_rt_lib0clear(&___nl__13);
#line 279
c_rt_lib0move(&___nl__12, c_rt_lib0not(___nl__12));
#line 279
if(c_rt_lib0check_true_native(___nl__12)){ goto label_53;}
#line 280
c_rt_lib0move(&___nl__13,___get_global_const(1059));
#line 280
c_rt_lib0move(&___nl__14, type_checker_priv0get_print_check_info(___nl__11));
#line 280
c_rt_lib0move(&___nl__13, c_rt_lib0concat_add(___nl__13, ___nl__14));
#line 280
c_rt_lib0clear(&___nl__14);
#line 280
c_rt_lib0delete(type_checker_priv0add_error(___ref___3, ___nl__13));
#line 280
c_rt_lib0clear(&___nl__13);
#line 281
goto label_53;
#line 281
label_53:
#line 281
c_rt_lib0clear(&___nl__12);
#line 281
c_rt_lib0clear(&___nl__11);
#line 282
goto label_50;
#line 282
label_50:
#line 282
c_rt_lib0clear(&___nl__10);
#line 283
c_rt_lib0delete(type_checker_priv0set_end_function(&___nl__5));
#line 283
c_rt_lib0clear(&___nl__9);
#line 283
c_rt_lib0clear(&___nl__8);
#line 284
goto label_1;
#line 284
label_16:
#line 284
c_rt_lib0move(&___nl__8, c_rt_lib0priv_as(___nl__6, ___get_global_const(751)));
#line 285
c_rt_lib0move(&___nl__10,___get_global_const(1));
#line 285
c_rt_lib0move(&___nl__11,___get_global_const(2));
#line 285
c_rt_lib0move(&___nl__12, c_rt_lib0array_len(___nl__8));
#line 285
label_56:
#line 285
c_rt_lib0move(&___nl__13, c_rt_lib0ge(___nl__10, ___nl__12));
#line 285
if(c_rt_lib0check_true_native(___nl__13)){ goto label_54;}
#line 285
c_rt_lib0move(&___nl__9, c_rt_lib0array_get(___nl__8, ___nl__10));
#line 286
c_rt_lib0move(&___nl__14, type_checker_priv0check_cmd(___nl__9, ___ref___1, &___nl__5, ___ref___3));
#line 286
c_rt_lib0move(&___nl__17, c_rt_lib0init_iter(___nl__14));
#line 286
label_59:
#line 286
c_rt_lib0move(&___nl__15, c_rt_lib0is_end_hash(___nl__17));
#line 286
if(c_rt_lib0check_true_native(___nl__15)){ goto label_57;}
#line 286
c_rt_lib0move(&___nl__15, c_rt_lib0get_key_iter(___nl__17));
#line 286
c_rt_lib0move(&___nl__16, c_rt_lib0hash_get_value(___nl__14, ___nl__15));
#line 287
c_rt_lib0delete(type_checker_priv0add_var_to_vars(___nl__16, ___nl__15, &___nl__5));
#line 288
c_rt_lib0move(&___nl__17, c_rt_lib0next_iter(___nl__17));
#line 288
goto label_59;
#line 288
label_57:
#line 288
c_rt_lib0clear(&___nl__14);
#line 288
c_rt_lib0clear(&___nl__15);
#line 288
c_rt_lib0clear(&___nl__16);
#line 288
c_rt_lib0clear(&___nl__17);
#line 289
c_rt_lib0move(&___nl__10, c_rt_lib0add_mod(___nl__10, ___nl__11));
#line 289
goto label_56;
#line 289
label_54:
#line 289
c_rt_lib0clear(&___nl__9);
#line 289
c_rt_lib0clear(&___nl__10);
#line 289
c_rt_lib0clear(&___nl__11);
#line 289
c_rt_lib0clear(&___nl__12);
#line 289
c_rt_lib0clear(&___nl__13);
#line 289
c_rt_lib0clear(&___nl__8);
#line 290
goto label_1;
#line 290
label_17:
#line 290
c_rt_lib0move(&___nl__8, c_rt_lib0priv_as(___nl__6, ___get_global_const(229)));
#line 291
c_rt_lib0move(&___nl__10,___get_global_const(1));
#line 291
c_rt_lib0move(&___nl__11,___get_global_const(2));
#line 291
c_rt_lib0move(&___nl__12, c_rt_lib0array_len(___nl__8));
#line 291
label_62:
#line 291
c_rt_lib0move(&___nl__13, c_rt_lib0ge(___nl__10, ___nl__12));
#line 291
if(c_rt_lib0check_true_native(___nl__13)){ goto label_60;}
#line 291
c_rt_lib0move(&___nl__9, c_rt_lib0array_get(___nl__8, ___nl__10));
#line 292
c_rt_lib0delete(type_checker_priv0check_val(___nl__9, ___ref___1, &___nl__5, ___ref___3));
#line 293
c_rt_lib0move(&___nl__10, c_rt_lib0add_mod(___nl__10, ___nl__11));
#line 293
goto label_62;
#line 293
label_60:
#line 293
c_rt_lib0clear(&___nl__9);
#line 293
c_rt_lib0clear(&___nl__10);
#line 293
c_rt_lib0clear(&___nl__11);
#line 293
c_rt_lib0clear(&___nl__12);
#line 293
c_rt_lib0clear(&___nl__13);
#line 294
c_rt_lib0delete(type_checker_priv0set_end_function(&___nl__5));
#line 294
c_rt_lib0clear(&___nl__8);
#line 295
goto label_1;
#line 295
label_18:
#line 295
c_rt_lib0move(&___nl__8, c_rt_lib0priv_as(___nl__6, ___get_global_const(752)));
#line 296
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__8, ___get_global_const(76)));
#line 296
c_rt_lib0move(&___nl__10, type_checker_priv0check_var_decl(___nl__8, ___ref___1, &___nl__5, ___ref___3));
#line 296
c_rt_lib0delete(hash0set_value(&___nl__4, ___nl__9, ___nl__10));
#line 296
c_rt_lib0clear(&___nl__10);
#line 296
c_rt_lib0clear(&___nl__9);
#line 296
c_rt_lib0clear(&___nl__8);
#line 297
goto label_1;
#line 297
label_19:
#line 297
c_rt_lib0move(&___nl__8, c_rt_lib0priv_as(___nl__6, ___get_global_const(753)));
#line 298
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(*___ref___1, ___get_global_const(989)));
#line 298
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__10, ___get_global_const(712)));
#line 298
c_rt_lib0move(&___nl__11, c_rt_lib0ov_mk_none(___get_global_const(985)));
#line 298
c_rt_lib0move(&___nl__9, c_rt_lib0hash_mk(2, ___get_global_const(72), ___nl__10, ___get_global_const(39), ___nl__11));
#line 298
c_rt_lib0clear(&___nl__10);
#line 298
c_rt_lib0clear(&___nl__11);
#line 299
c_rt_lib0move(&___nl__10, ptd_system0is_try_ensure_type(___nl__9, ___ref___1, ___ref___3));
#line 299
c_rt_lib0move(&___nl__10, c_rt_lib0not(___nl__10));
#line 299
c_rt_lib0move(&___nl__10, c_rt_lib0not(___nl__10));
#line 299
if(c_rt_lib0check_true_native(___nl__10)){ goto label_64;}
#line 299
c_rt_lib0move(&___nl__11,___get_global_const(1060));
#line 299
c_rt_lib0delete(type_checker_priv0add_error(___ref___3, ___nl__11));
#line 299
c_rt_lib0clear(&___nl__11);
#line 299
goto label_64;
#line 299
label_64:
#line 299
c_rt_lib0clear(&___nl__10);
#line 301
c_rt_lib0move(&___nl__10, type_checker_priv0check_try_ensure(___nl__8, ___ref___1, &___nl__5, ___ref___3));
#line 301
c_rt_lib0copy(&___nl__4, ___nl__10);
#line 301
c_rt_lib0clear(&___nl__10);
#line 301
c_rt_lib0clear(&___nl__9);
#line 301
c_rt_lib0clear(&___nl__8);
#line 302
goto label_1;
#line 302
label_20:
#line 302
c_rt_lib0move(&___nl__8, c_rt_lib0priv_as(___nl__6, ___get_global_const(78)));
#line 303
c_rt_lib0move(&___nl__9, type_checker_priv0check_try_ensure(___nl__8, ___ref___1, &___nl__5, ___ref___3));
#line 303
c_rt_lib0copy(&___nl__4, ___nl__9);
#line 303
c_rt_lib0clear(&___nl__9);
#line 303
c_rt_lib0clear(&___nl__8);
#line 304
goto label_1;
#line 304
label_21:
#line 305
goto label_1;
#line 305
label_1:
#line 305
c_rt_lib0clear(&___nl__6);
#line 305
c_rt_lib0clear(&___nl__7);
#line 306
c_rt_lib0move(&___nl__8, c_rt_lib0init_iter(*___ref___2));
#line 306
label_67:
#line 306
c_rt_lib0move(&___nl__6, c_rt_lib0is_end_hash(___nl__8));
#line 306
if(c_rt_lib0check_true_native(___nl__6)){ goto label_65;}
#line 306
c_rt_lib0move(&___nl__6, c_rt_lib0get_key_iter(___nl__8));
#line 306
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value(*___ref___2, ___nl__6));
#line 307
c_rt_lib0move(&___nl__9, hash0get_value(___nl__5, ___nl__6));
#line 307
c_rt_lib0delete(hash0set_value(___ref___2, ___nl__6, ___nl__9));
#line 307
c_rt_lib0clear(&___nl__9);
#line 308
c_rt_lib0move(&___nl__8, c_rt_lib0next_iter(___nl__8));
#line 308
goto label_67;
#line 308
label_65:
#line 308
c_rt_lib0clear(&___nl__6);
#line 308
c_rt_lib0clear(&___nl__7);
#line 308
c_rt_lib0clear(&___nl__8);
#line 309
c_rt_lib0move(&___nl__7,___get_global_const(1051));
#line 309
c_rt_lib0move(&___nl__6, hash0has_key(___nl__5, ___nl__7));
#line 309
c_rt_lib0clear(&___nl__7);
#line 309
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 309
if(c_rt_lib0check_true_native(___nl__6)){ goto label_69;}
#line 310
c_rt_lib0move(&___nl__7,___get_global_const(1051));
#line 310
c_rt_lib0move(&___nl__9, c_rt_lib0ov_mk_none(___get_global_const(41)));
#line 310
c_rt_lib0move(&___nl__10, tct0empty());
#line 310
c_rt_lib0move(&___nl__8, c_rt_lib0hash_mk(2, ___get_global_const(1017), ___nl__9, ___get_global_const(72), ___nl__10));
#line 310
c_rt_lib0clear(&___nl__9);
#line 310
c_rt_lib0clear(&___nl__10);
#line 310
c_rt_lib0delete(hash0set_value(___ref___2, ___nl__7, ___nl__8));
#line 310
c_rt_lib0clear(&___nl__8);
#line 310
c_rt_lib0clear(&___nl__7);
#line 311
goto label_69;
#line 311
label_69:
#line 311
c_rt_lib0clear(&___nl__6);
#line 312
c_rt_lib0clear(&___nl__0);
#line 312
c_rt_lib0clear(&___nl__5);
#line 312
return ___nl__4;
#line 312
c_rt_lib0clear(&___nl__4);
#line 312
c_rt_lib0clear(&___nl__5);
#line 312
c_rt_lib0clear(&___nl__0);
#line 312
return NULL;
}

ImmT type_checker_priv0break_continue_block(ImmT ___nl__0,ImmT * ___ref___1,ImmT * ___ref___2,ImmT * ___ref___3) {
c_rt_lib0arg_val(___nl__0);
type_checker_priv0__const__init();
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
#line 316
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(*___ref___1, ___get_global_const(989)));
#line 316
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(1016)));
#line 317
c_rt_lib0move(&___nl__6, c_rt_lib0get_true());
#line 317
c_rt_lib0move(&___nl__5, c_rt_lib0hash_mk(2, ___get_global_const(805), ___nl__6, ___get_global_const(618), *___ref___2));
#line 317
c_rt_lib0clear(&___nl__6);
#line 317
c_rt_lib0move(&___nl__6,___get_global_const(989));
#line 317
c_rt_lib0move(&___nl__6, c_rt_lib0get_ref_hash(*___ref___1, ___nl__6));
#line 317
c_rt_lib0copy(&___nl__7, ___nl__5);
#line 317
c_rt_lib0hash_set_value_dec(&___nl__6, ___get_global_const(1016), ___nl__7);
#line 317
c_rt_lib0move(&___nl__8,___get_global_const(989));
#line 317
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___1, ___nl__8, ___nl__6));
#line 317
c_rt_lib0clear(&___nl__8);
#line 317
c_rt_lib0clear(&___nl__5);
#line 317
c_rt_lib0clear(&___nl__6);
#line 317
c_rt_lib0clear(&___nl__7);
#line 318
c_rt_lib0delete(type_checker_priv0check_cmd(___nl__0, ___ref___1, ___ref___2, ___ref___3));
#line 319
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(*___ref___1, ___get_global_const(989)));
#line 319
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(1016)));
#line 319
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(618)));
#line 319
c_rt_lib0delete(type_checker_priv0join_vars(___ref___2, ___nl__5, ___ref___1, ___ref___3));
#line 319
c_rt_lib0clear(&___nl__5);
#line 320
c_rt_lib0move(&___nl__5,___get_global_const(989));
#line 320
c_rt_lib0move(&___nl__5, c_rt_lib0get_ref_hash(*___ref___1, ___nl__5));
#line 320
c_rt_lib0copy(&___nl__6, ___nl__4);
#line 320
c_rt_lib0hash_set_value_dec(&___nl__5, ___get_global_const(1016), ___nl__6);
#line 320
c_rt_lib0move(&___nl__7,___get_global_const(989));
#line 320
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___1, ___nl__7, ___nl__5));
#line 320
c_rt_lib0clear(&___nl__7);
#line 320
c_rt_lib0clear(&___nl__5);
#line 320
c_rt_lib0clear(&___nl__6);
#line 320
c_rt_lib0clear(&___nl__4);
#line 320
c_rt_lib0clear(&___nl__0);
#line 320
return NULL;
}

ImmT type_checker_priv0check_try_ensure(ImmT ___nl__0,ImmT * ___ref___1,ImmT * ___ref___2,ImmT * ___ref___3) {
c_rt_lib0arg_val(___nl__0);
type_checker_priv0__const__init();
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
ImmT ___nl__9 = NULL;
ImmT ___nl__10 = NULL;
ImmT ___nl__11 = NULL;
#line 324
c_rt_lib0move(&___nl__4, c_rt_lib0hash_mk(0));
#line 325
c_rt_lib0move(&___nl__5, c_rt_lib0priv_is(___nl__0, ___get_global_const(769)));
#line 325
if(c_rt_lib0check_true_native(___nl__5)){ goto label_2;}
#line 327
c_rt_lib0move(&___nl__5, c_rt_lib0priv_is(___nl__0, ___get_global_const(770)));
#line 327
if(c_rt_lib0check_true_native(___nl__5)){ goto label_3;}
#line 335
c_rt_lib0move(&___nl__5, c_rt_lib0priv_is(___nl__0, ___get_global_const(771)));
#line 335
if(c_rt_lib0check_true_native(___nl__5)){ goto label_4;}
#line 335
c_rt_lib0move(&___nl__5,___get_global_const(74));
#line 335
c_rt_lib0move(&___nl__5, c_rt_lib0array_mk(2, ___nl__5, ___nl__0));
#line 335
nl_die_arg(___nl__5);
#line 325
label_2:
#line 325
c_rt_lib0move(&___nl__6, c_rt_lib0priv_as(___nl__0, ___get_global_const(769)));
#line 326
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__6, ___get_global_const(76)));
#line 326
c_rt_lib0move(&___nl__9, c_rt_lib0get_true());
#line 326
c_rt_lib0move(&___nl__8, type_checker_priv0check_var_decl_try(___nl__6, ___nl__9, ___ref___1, ___ref___2, ___ref___3));
#line 326
c_rt_lib0clear(&___nl__9);
#line 326
c_rt_lib0delete(hash0set_value(&___nl__4, ___nl__7, ___nl__8));
#line 326
c_rt_lib0clear(&___nl__8);
#line 326
c_rt_lib0clear(&___nl__7);
#line 326
c_rt_lib0clear(&___nl__6);
#line 327
goto label_1;
#line 327
label_3:
#line 327
c_rt_lib0move(&___nl__6, c_rt_lib0priv_as(___nl__0, ___get_global_const(770)));
#line 328
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__6, ___get_global_const(236)));
#line 328
c_rt_lib0move(&___nl__7, type_checker_priv0check_val(___nl__8, ___ref___1, ___ref___2, ___ref___3));
#line 328
c_rt_lib0clear(&___nl__8);
#line 329
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(*___ref___3, ___get_global_const(17)));
#line 329
c_rt_lib0move(&___nl__8, array0len(___nl__9));
#line 329
c_rt_lib0clear(&___nl__9);
#line 330
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__6, ___get_global_const(235)));
#line 330
c_rt_lib0move(&___nl__9, type_checker_priv0get_type_left_site_equation(___nl__10, ___ref___1, ___ref___2, ___ref___3));
#line 330
c_rt_lib0clear(&___nl__10);
#line 331
c_rt_lib0move(&___nl__11, c_rt_lib0hash_get_value_dec(*___ref___3, ___get_global_const(17)));
#line 331
c_rt_lib0move(&___nl__10, array0len(___nl__11));
#line 331
c_rt_lib0clear(&___nl__11);
#line 331
c_rt_lib0move(&___nl__10, c_rt_lib0sub_mod(___nl__10, ___nl__8));
#line 331
c_rt_lib0copy(&___nl__8, ___nl__10);
#line 331
c_rt_lib0clear(&___nl__10);
#line 332
c_rt_lib0move(&___nl__10,___get_global_const(1));
#line 332
c_rt_lib0move(&___nl__10, c_rt_lib0gt(___nl__8, ___nl__10));
#line 332
c_rt_lib0move(&___nl__10, c_rt_lib0not(___nl__10));
#line 332
if(c_rt_lib0check_true_native(___nl__10)){ goto label_6;}
#line 332
c_rt_lib0clear(&___nl__0);
#line 332
c_rt_lib0clear(&___nl__5);
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
return ___nl__4;
#line 332
goto label_6;
#line 332
label_6:
#line 332
c_rt_lib0clear(&___nl__10);
#line 333
c_rt_lib0move(&___nl__10, ptd_system0get_try_ensure_ok_type(___nl__7, ___ref___1, ___ref___3));
#line 333
c_rt_lib0copy(&___nl__11, ___nl__10);
#line 333
c_rt_lib0hash_set_value_dec(&___nl__7, ___get_global_const(72), ___nl__11);
#line 333
c_rt_lib0clear(&___nl__10);
#line 333
c_rt_lib0clear(&___nl__11);
#line 334
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__6, ___get_global_const(235)));
#line 334
c_rt_lib0delete(type_checker_priv0set_type_to_lval(___nl__10, ___nl__9, ___nl__7, ___ref___1, ___ref___2, ___ref___3));
#line 334
c_rt_lib0clear(&___nl__10);
#line 334
c_rt_lib0clear(&___nl__7);
#line 334
c_rt_lib0clear(&___nl__8);
#line 334
c_rt_lib0clear(&___nl__9);
#line 334
c_rt_lib0clear(&___nl__6);
#line 335
goto label_1;
#line 335
label_4:
#line 335
c_rt_lib0move(&___nl__6, c_rt_lib0priv_as(___nl__0, ___get_global_const(771)));
#line 336
c_rt_lib0move(&___nl__7, type_checker_priv0check_val(___nl__6, ___ref___1, ___ref___2, ___ref___3));
#line 337
c_rt_lib0delete(ptd_system0get_try_ensure_ok_type(___nl__7, ___ref___1, ___ref___3));
#line 337
c_rt_lib0clear(&___nl__7);
#line 337
c_rt_lib0clear(&___nl__6);
#line 338
goto label_1;
#line 338
label_1:
#line 338
c_rt_lib0clear(&___nl__5);
#line 339
c_rt_lib0clear(&___nl__0);
#line 339
return ___nl__4;
#line 339
c_rt_lib0clear(&___nl__4);
#line 339
c_rt_lib0clear(&___nl__0);
#line 339
return NULL;
}

ImmT type_checker_priv0check_forh(ImmT ___nl__0,ImmT * ___ref___1,ImmT * ___ref___2,ImmT * ___ref___3) {
c_rt_lib0arg_val(___nl__0);
type_checker_priv0__const__init();
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
ImmT ___nl__9 = NULL;
#line 344
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(278)));
#line 344
c_rt_lib0move(&___nl__5, type_checker_priv0check_val(___nl__6, ___ref___1, ___ref___2, ___ref___3));
#line 344
c_rt_lib0clear(&___nl__6);
#line 344
c_rt_lib0move(&___nl__4, ptd_system0can_delete(___nl__5, ___ref___1, ___ref___3));
#line 344
c_rt_lib0clear(&___nl__5);
#line 345
c_rt_lib0move(&___nl__7, tct0tct_im());
#line 345
c_rt_lib0move(&___nl__6, tct0hash(___nl__7));
#line 345
c_rt_lib0clear(&___nl__7);
#line 345
c_rt_lib0move(&___nl__5, ptd_system0is_accepted(___nl__4, ___nl__6, ___ref___1, ___ref___3));
#line 345
c_rt_lib0clear(&___nl__6);
#line 345
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 345
if(c_rt_lib0check_true_native(___nl__5)){ goto label_2;}
#line 346
goto label_1;
#line 346
label_2:
#line 346
c_rt_lib0move(&___nl__7, c_rt_lib0hash_mk(0));
#line 346
c_rt_lib0move(&___nl__6, tct0rec(___nl__7));
#line 346
c_rt_lib0clear(&___nl__7);
#line 346
c_rt_lib0move(&___nl__5, ptd_system0is_accepted(___nl__4, ___nl__6, ___ref___1, ___ref___3));
#line 346
c_rt_lib0clear(&___nl__6);
#line 346
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 346
if(c_rt_lib0check_true_native(___nl__5)){ goto label_3;}
#line 347
c_rt_lib0move(&___nl__6, type_checker_priv0is_known(___nl__4));
#line 347
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 347
if(c_rt_lib0check_true_native(___nl__6)){ goto label_5;}
#line 347
c_rt_lib0move(&___nl__7,___get_global_const(1061));
#line 347
c_rt_lib0delete(type_checker_priv0add_error(___ref___3, ___nl__7));
#line 347
c_rt_lib0clear(&___nl__7);
#line 347
goto label_5;
#line 347
label_5:
#line 347
c_rt_lib0clear(&___nl__6);
#line 348
goto label_1;
#line 348
label_3:
#line 349
c_rt_lib0move(&___nl__6,___get_global_const(1062));
#line 349
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(72)));
#line 349
c_rt_lib0move(&___nl__7, type_checker_priv0get_print_tct_type_name(___nl__8));
#line 349
c_rt_lib0clear(&___nl__8);
#line 349
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__7));
#line 349
c_rt_lib0clear(&___nl__7);
#line 349
c_rt_lib0delete(type_checker_priv0add_error(___ref___3, ___nl__6));
#line 349
c_rt_lib0clear(&___nl__6);
#line 350
goto label_1;
#line 350
label_1:
#line 350
c_rt_lib0clear(&___nl__5);
#line 352
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(72)));
#line 352
c_rt_lib0move(&___nl__7,___get_global_const(724));
#line 352
c_rt_lib0move(&___nl__5, ov0is(___nl__6, ___nl__7));
#line 352
c_rt_lib0clear(&___nl__7);
#line 352
c_rt_lib0clear(&___nl__6);
#line 352
if(c_rt_lib0check_true_native(___nl__5)){ goto label_7;}
#line 352
c_rt_lib0move(&___nl__5, tct0tct_im());
#line 352
goto label_6;
#line 352
label_7:
#line 352
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(72)));
#line 352
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__5, ___get_global_const(724)));
#line 352
label_6:
#line 352
c_rt_lib0copy(&___nl__6, ___nl__5);
#line 352
c_rt_lib0hash_set_value_dec(&___nl__4, ___get_global_const(72), ___nl__6);
#line 352
c_rt_lib0clear(&___nl__5);
#line 352
c_rt_lib0clear(&___nl__6);
#line 355
c_rt_lib0copy(&___nl__5, *___ref___2);
#line 356
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(279)));
#line 356
c_rt_lib0move(&___nl__8, tct0sim());
#line 356
c_rt_lib0move(&___nl__9, c_rt_lib0ov_mk_none(___get_global_const(985)));
#line 356
c_rt_lib0move(&___nl__7, c_rt_lib0hash_mk(2, ___get_global_const(72), ___nl__8, ___get_global_const(39), ___nl__9));
#line 356
c_rt_lib0clear(&___nl__8);
#line 356
c_rt_lib0clear(&___nl__9);
#line 356
c_rt_lib0delete(type_checker_priv0add_var_decl_with_type_and_check(___nl__6, ___nl__7, &___nl__5, ___ref___3));
#line 356
c_rt_lib0clear(&___nl__7);
#line 356
c_rt_lib0clear(&___nl__6);
#line 357
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(234)));
#line 357
c_rt_lib0delete(type_checker_priv0add_var_decl_with_type_and_check(___nl__6, ___nl__4, &___nl__5, ___ref___3));
#line 357
c_rt_lib0clear(&___nl__6);
#line 358
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(209)));
#line 358
c_rt_lib0delete(type_checker_priv0break_continue_block(___nl__6, ___ref___1, &___nl__5, ___ref___3));
#line 358
c_rt_lib0clear(&___nl__6);
#line 359
c_rt_lib0delete(type_checker_priv0join_vars(___ref___2, ___nl__5, ___ref___1, ___ref___3));
#line 359
c_rt_lib0clear(&___nl__4);
#line 359
c_rt_lib0clear(&___nl__5);
#line 359
c_rt_lib0clear(&___nl__0);
#line 359
return NULL;
}

ImmT type_checker_priv0check_fora(ImmT ___nl__0,ImmT * ___ref___1,ImmT * ___ref___2,ImmT * ___ref___3) {
c_rt_lib0arg_val(___nl__0);
type_checker_priv0__const__init();
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
#line 364
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(3)));
#line 364
c_rt_lib0move(&___nl__5, type_checker_priv0check_val(___nl__6, ___ref___1, ___ref___2, ___ref___3));
#line 364
c_rt_lib0clear(&___nl__6);
#line 364
c_rt_lib0move(&___nl__4, ptd_system0can_delete(___nl__5, ___ref___1, ___ref___3));
#line 364
c_rt_lib0clear(&___nl__5);
#line 366
c_rt_lib0move(&___nl__7, tct0tct_im());
#line 366
c_rt_lib0move(&___nl__6, tct0arr(___nl__7));
#line 366
c_rt_lib0clear(&___nl__7);
#line 366
c_rt_lib0move(&___nl__5, ptd_system0is_accepted(___nl__4, ___nl__6, ___ref___1, ___ref___3));
#line 366
c_rt_lib0clear(&___nl__6);
#line 366
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 366
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 366
if(c_rt_lib0check_true_native(___nl__5)){ goto label_2;}
#line 366
c_rt_lib0move(&___nl__6,___get_global_const(1063));
#line 366
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(72)));
#line 366
c_rt_lib0move(&___nl__7, type_checker_priv0get_print_tct_type_name(___nl__8));
#line 366
c_rt_lib0clear(&___nl__8);
#line 366
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__7));
#line 366
c_rt_lib0clear(&___nl__7);
#line 366
c_rt_lib0delete(type_checker_priv0add_error(___ref___3, ___nl__6));
#line 366
c_rt_lib0clear(&___nl__6);
#line 366
goto label_2;
#line 366
label_2:
#line 366
c_rt_lib0clear(&___nl__5);
#line 369
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(72)));
#line 369
c_rt_lib0move(&___nl__7,___get_global_const(723));
#line 369
c_rt_lib0move(&___nl__5, ov0is(___nl__6, ___nl__7));
#line 369
c_rt_lib0clear(&___nl__7);
#line 369
c_rt_lib0clear(&___nl__6);
#line 369
if(c_rt_lib0check_true_native(___nl__5)){ goto label_4;}
#line 369
c_rt_lib0move(&___nl__5, tct0tct_im());
#line 369
goto label_3;
#line 369
label_4:
#line 369
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(72)));
#line 369
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__5, ___get_global_const(723)));
#line 369
label_3:
#line 369
c_rt_lib0copy(&___nl__6, ___nl__5);
#line 369
c_rt_lib0hash_set_value_dec(&___nl__4, ___get_global_const(72), ___nl__6);
#line 369
c_rt_lib0clear(&___nl__5);
#line 369
c_rt_lib0clear(&___nl__6);
#line 372
c_rt_lib0copy(&___nl__5, *___ref___2);
#line 373
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(759)));
#line 373
c_rt_lib0delete(type_checker_priv0add_var_decl_with_type_and_check(___nl__6, ___nl__4, &___nl__5, ___ref___3));
#line 373
c_rt_lib0clear(&___nl__6);
#line 374
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(209)));
#line 374
c_rt_lib0delete(type_checker_priv0break_continue_block(___nl__6, ___ref___1, &___nl__5, ___ref___3));
#line 374
c_rt_lib0clear(&___nl__6);
#line 375
c_rt_lib0delete(type_checker_priv0join_vars(___ref___2, ___nl__5, ___ref___1, ___ref___3));
#line 375
c_rt_lib0clear(&___nl__4);
#line 375
c_rt_lib0clear(&___nl__5);
#line 375
c_rt_lib0clear(&___nl__0);
#line 375
return NULL;
}

ImmT type_checker_priv0check_while(ImmT ___nl__0,ImmT * ___ref___1,ImmT * ___ref___2,ImmT * ___ref___3) {
c_rt_lib0arg_val(___nl__0);
type_checker_priv0__const__init();
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
#line 380
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(755)));
#line 380
c_rt_lib0move(&___nl__4, type_checker_priv0check_val(___nl__5, ___ref___1, ___ref___2, ___ref___3));
#line 380
c_rt_lib0clear(&___nl__5);
#line 381
c_rt_lib0move(&___nl__5, ptd_system0is_condition_type(___nl__4, ___ref___1, ___ref___3));
#line 381
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 381
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 381
if(c_rt_lib0check_true_native(___nl__5)){ goto label_2;}
#line 381
c_rt_lib0move(&___nl__6,___get_global_const(1064));
#line 381
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(72)));
#line 381
c_rt_lib0move(&___nl__7, type_checker_priv0get_print_tct_type_name(___nl__8));
#line 381
c_rt_lib0clear(&___nl__8);
#line 381
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__7));
#line 381
c_rt_lib0clear(&___nl__7);
#line 381
c_rt_lib0delete(type_checker_priv0add_error(___ref___3, ___nl__6));
#line 381
c_rt_lib0clear(&___nl__6);
#line 381
goto label_2;
#line 381
label_2:
#line 381
c_rt_lib0clear(&___nl__5);
#line 384
c_rt_lib0copy(&___nl__5, *___ref___2);
#line 385
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(209)));
#line 385
c_rt_lib0delete(type_checker_priv0break_continue_block(___nl__6, ___ref___1, &___nl__5, ___ref___3));
#line 385
c_rt_lib0clear(&___nl__6);
#line 386
c_rt_lib0delete(type_checker_priv0join_vars(___ref___2, ___nl__5, ___ref___1, ___ref___3));
#line 386
c_rt_lib0clear(&___nl__4);
#line 386
c_rt_lib0clear(&___nl__5);
#line 386
c_rt_lib0clear(&___nl__0);
#line 386
return NULL;
}

ImmT type_checker_priv0check_rep(ImmT ___nl__0,ImmT * ___ref___1,ImmT * ___ref___2,ImmT * ___ref___3) {
c_rt_lib0arg_val(___nl__0);
type_checker_priv0__const__init();
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
ImmT ___nl__9 = NULL;
#line 391
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(760)));
#line 391
c_rt_lib0move(&___nl__4, type_checker_priv0check_val(___nl__5, ___ref___1, ___ref___2, ___ref___3));
#line 391
c_rt_lib0clear(&___nl__5);
#line 392
c_rt_lib0move(&___nl__6, tct0sim());
#line 392
c_rt_lib0move(&___nl__5, ptd_system0is_accepted(___nl__4, ___nl__6, ___ref___1, ___ref___3));
#line 392
c_rt_lib0clear(&___nl__6);
#line 392
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 392
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 392
if(c_rt_lib0check_true_native(___nl__5)){ goto label_2;}
#line 392
c_rt_lib0move(&___nl__6,___get_global_const(1065));
#line 392
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(72)));
#line 392
c_rt_lib0move(&___nl__7, type_checker_priv0get_print_tct_type_name(___nl__8));
#line 392
c_rt_lib0clear(&___nl__8);
#line 392
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__7));
#line 392
c_rt_lib0clear(&___nl__7);
#line 392
c_rt_lib0delete(type_checker_priv0add_error(___ref___3, ___nl__6));
#line 392
c_rt_lib0clear(&___nl__6);
#line 392
goto label_2;
#line 392
label_2:
#line 392
c_rt_lib0clear(&___nl__5);
#line 395
c_rt_lib0copy(&___nl__5, *___ref___2);
#line 396
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(759)));
#line 396
c_rt_lib0move(&___nl__8, tct0sim());
#line 396
c_rt_lib0move(&___nl__9, c_rt_lib0ov_mk_none(___get_global_const(985)));
#line 396
c_rt_lib0move(&___nl__7, c_rt_lib0hash_mk(2, ___get_global_const(72), ___nl__8, ___get_global_const(39), ___nl__9));
#line 396
c_rt_lib0clear(&___nl__8);
#line 396
c_rt_lib0clear(&___nl__9);
#line 396
c_rt_lib0delete(type_checker_priv0add_var_decl_with_type_and_check(___nl__6, ___nl__7, &___nl__5, ___ref___3));
#line 396
c_rt_lib0clear(&___nl__7);
#line 396
c_rt_lib0clear(&___nl__6);
#line 397
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(209)));
#line 397
c_rt_lib0delete(type_checker_priv0break_continue_block(___nl__6, ___ref___1, &___nl__5, ___ref___3));
#line 397
c_rt_lib0clear(&___nl__6);
#line 398
c_rt_lib0delete(type_checker_priv0join_vars(___ref___2, ___nl__5, ___ref___1, ___ref___3));
#line 398
c_rt_lib0clear(&___nl__4);
#line 398
c_rt_lib0clear(&___nl__5);
#line 398
c_rt_lib0clear(&___nl__0);
#line 398
return NULL;
}

ImmT type_checker_priv0check_match(ImmT ___nl__0,ImmT * ___ref___1,ImmT * ___ref___2,ImmT * ___ref___3) {
c_rt_lib0arg_val(___nl__0);
type_checker_priv0__const__init();
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
ImmT ___nl__22 = NULL;
ImmT ___nl__23 = NULL;
ImmT ___nl__24 = NULL;
ImmT ___nl__25 = NULL;
ImmT ___nl__26 = NULL;
#line 403
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(234)));
#line 403
c_rt_lib0move(&___nl__5, type_checker_priv0check_val(___nl__6, ___ref___1, ___ref___2, ___ref___3));
#line 403
c_rt_lib0clear(&___nl__6);
#line 403
c_rt_lib0move(&___nl__4, ptd_system0can_delete(___nl__5, ___ref___1, ___ref___3));
#line 403
c_rt_lib0clear(&___nl__5);
#line 405
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(763)));
#line 406
c_rt_lib0move(&___nl__6, c_rt_lib0get_false());
#line 407
c_rt_lib0move(&___nl__7, c_rt_lib0hash_mk(0));
#line 408
c_rt_lib0move(&___nl__8, c_rt_lib0hash_mk(0));
#line 409
c_rt_lib0move(&___nl__11, c_rt_lib0hash_mk(0));
#line 409
c_rt_lib0move(&___nl__10, tct0var(___nl__11));
#line 409
c_rt_lib0clear(&___nl__11);
#line 409
c_rt_lib0move(&___nl__9, ptd_system0is_accepted(___nl__4, ___nl__10, ___ref___1, ___ref___3));
#line 409
c_rt_lib0clear(&___nl__10);
#line 409
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__9));
#line 409
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__9));
#line 409
if(c_rt_lib0check_true_native(___nl__9)){ goto label_2;}
#line 410
c_rt_lib0move(&___nl__10,___get_global_const(1066));
#line 410
c_rt_lib0move(&___nl__12, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(72)));
#line 410
c_rt_lib0move(&___nl__11, type_checker_priv0get_print_tct_type_name(___nl__12));
#line 410
c_rt_lib0clear(&___nl__12);
#line 410
c_rt_lib0move(&___nl__10, c_rt_lib0concat_add(___nl__10, ___nl__11));
#line 410
c_rt_lib0clear(&___nl__11);
#line 410
c_rt_lib0delete(type_checker_priv0add_error(___ref___3, ___nl__10));
#line 410
c_rt_lib0clear(&___nl__10);
#line 411
goto label_2;
#line 411
label_2:
#line 411
c_rt_lib0clear(&___nl__9);
#line 412
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(72)));
#line 412
c_rt_lib0move(&___nl__11,___get_global_const(729));
#line 412
c_rt_lib0move(&___nl__9, ov0is(___nl__10, ___nl__11));
#line 412
c_rt_lib0clear(&___nl__11);
#line 412
c_rt_lib0clear(&___nl__10);
#line 412
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__9));
#line 412
if(c_rt_lib0check_true_native(___nl__9)){ goto label_4;}
#line 413
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(72)));
#line 413
c_rt_lib0move(&___nl__10, c_rt_lib0priv_as(___nl__10, ___get_global_const(729)));
#line 413
c_rt_lib0copy(&___nl__8, ___nl__10);
#line 413
c_rt_lib0clear(&___nl__10);
#line 414
c_rt_lib0move(&___nl__10, c_rt_lib0hash_mk(0));
#line 415
c_rt_lib0move(&___nl__12,___get_global_const(1));
#line 415
c_rt_lib0move(&___nl__13,___get_global_const(2));
#line 415
c_rt_lib0move(&___nl__14, c_rt_lib0array_len(___nl__5));
#line 415
label_7:
#line 415
c_rt_lib0move(&___nl__15, c_rt_lib0ge(___nl__12, ___nl__14));
#line 415
if(c_rt_lib0check_true_native(___nl__15)){ goto label_5;}
#line 415
c_rt_lib0move(&___nl__11, c_rt_lib0array_get(___nl__5, ___nl__12));
#line 416
c_rt_lib0move(&___nl__16, c_rt_lib0hash_get_value_dec(___nl__11, ___get_global_const(764)));
#line 416
c_rt_lib0move(&___nl__16, c_rt_lib0hash_get_value_dec(___nl__16, ___get_global_const(76)));
#line 417
c_rt_lib0move(&___nl__17, hash0has_key(___nl__8, ___nl__16));
#line 417
c_rt_lib0move(&___nl__17, c_rt_lib0not(___nl__17));
#line 417
c_rt_lib0move(&___nl__17, c_rt_lib0not(___nl__17));
#line 417
if(c_rt_lib0check_true_native(___nl__17)){ goto label_9;}
#line 418
c_rt_lib0move(&___nl__18, type_checker_priv0is_known(___nl__4));
#line 418
c_rt_lib0move(&___nl__18, c_rt_lib0not(___nl__18));
#line 418
if(c_rt_lib0check_true_native(___nl__18)){ goto label_11;}
#line 418
c_rt_lib0move(&___nl__19,___get_global_const(1067));
#line 418
c_rt_lib0move(&___nl__19, c_rt_lib0concat_add(___nl__19, ___nl__16));
#line 418
c_rt_lib0move(&___nl__20,___get_global_const(995));
#line 418
c_rt_lib0move(&___nl__19, c_rt_lib0concat_add(___nl__19, ___nl__20));
#line 418
c_rt_lib0clear(&___nl__20);
#line 418
c_rt_lib0delete(type_checker_priv0add_error(___ref___3, ___nl__19));
#line 418
c_rt_lib0clear(&___nl__19);
#line 418
goto label_11;
#line 418
label_11:
#line 418
c_rt_lib0clear(&___nl__18);
#line 420
c_rt_lib0clear(&___nl__16);
#line 420
c_rt_lib0clear(&___nl__17);
#line 420
goto label_6;
#line 421
goto label_9;
#line 421
label_9:
#line 421
c_rt_lib0clear(&___nl__17);
#line 423
c_rt_lib0move(&___nl__17, c_rt_lib0get_true());
#line 423
c_rt_lib0delete(hash0set_value(&___nl__10, ___nl__16, ___nl__17));
#line 423
c_rt_lib0clear(&___nl__17);
#line 424
c_rt_lib0move(&___nl__17, hash0get_value(___nl__8, ___nl__16));
#line 424
c_rt_lib0move(&___nl__18, c_rt_lib0priv_is(___nl__17, ___get_global_const(734)));
#line 424
if(c_rt_lib0check_true_native(___nl__18)){ goto label_13;}
#line 426
c_rt_lib0move(&___nl__18, c_rt_lib0priv_is(___nl__17, ___get_global_const(733)));
#line 426
if(c_rt_lib0check_true_native(___nl__18)){ goto label_14;}
#line 426
c_rt_lib0move(&___nl__18,___get_global_const(74));
#line 426
c_rt_lib0move(&___nl__18, c_rt_lib0array_mk(2, ___nl__18, ___nl__17));
#line 426
nl_die_arg(___nl__18);
#line 424
label_13:
#line 424
c_rt_lib0move(&___nl__19, c_rt_lib0priv_as(___nl__17, ___get_global_const(734)));
#line 425
c_rt_lib0delete(hash0set_value(&___nl__7, ___nl__16, ___nl__19));
#line 425
c_rt_lib0clear(&___nl__19);
#line 426
goto label_12;
#line 426
label_14:
#line 427
goto label_12;
#line 427
label_12:
#line 427
c_rt_lib0clear(&___nl__17);
#line 427
c_rt_lib0clear(&___nl__18);
#line 427
c_rt_lib0clear(&___nl__16);
#line 427
label_6:
#line 428
c_rt_lib0move(&___nl__12, c_rt_lib0add_mod(___nl__12, ___nl__13));
#line 428
goto label_7;
#line 428
label_5:
#line 428
c_rt_lib0clear(&___nl__11);
#line 428
c_rt_lib0clear(&___nl__12);
#line 428
c_rt_lib0clear(&___nl__13);
#line 428
c_rt_lib0clear(&___nl__14);
#line 428
c_rt_lib0clear(&___nl__15);
#line 429
c_rt_lib0move(&___nl__13, c_rt_lib0init_iter(___nl__8));
#line 429
label_17:
#line 429
c_rt_lib0move(&___nl__11, c_rt_lib0is_end_hash(___nl__13));
#line 429
if(c_rt_lib0check_true_native(___nl__11)){ goto label_15;}
#line 429
c_rt_lib0move(&___nl__11, c_rt_lib0get_key_iter(___nl__13));
#line 429
c_rt_lib0move(&___nl__12, c_rt_lib0hash_get_value(___nl__8, ___nl__11));
#line 430
c_rt_lib0move(&___nl__14, hash0has_key(___nl__10, ___nl__11));
#line 430
c_rt_lib0move(&___nl__14, c_rt_lib0not(___nl__14));
#line 430
c_rt_lib0move(&___nl__14, c_rt_lib0not(___nl__14));
#line 430
if(c_rt_lib0check_true_native(___nl__14)){ goto label_19;}
#line 431
c_rt_lib0move(&___nl__15,___get_global_const(1068));
#line 431
c_rt_lib0move(&___nl__15, c_rt_lib0concat_add(___nl__15, ___nl__11));
#line 431
c_rt_lib0delete(type_checker_priv0add_error(___ref___3, ___nl__15));
#line 431
c_rt_lib0clear(&___nl__15);
#line 432
goto label_19;
#line 432
label_19:
#line 432
c_rt_lib0clear(&___nl__14);
#line 433
c_rt_lib0move(&___nl__13, c_rt_lib0next_iter(___nl__13));
#line 433
goto label_17;
#line 433
label_15:
#line 433
c_rt_lib0clear(&___nl__11);
#line 433
c_rt_lib0clear(&___nl__12);
#line 433
c_rt_lib0clear(&___nl__13);
#line 434
c_rt_lib0move(&___nl__11, c_rt_lib0get_true());
#line 434
c_rt_lib0copy(&___nl__6, ___nl__11);
#line 434
c_rt_lib0clear(&___nl__11);
#line 434
c_rt_lib0clear(&___nl__10);
#line 435
goto label_4;
#line 435
label_4:
#line 435
c_rt_lib0clear(&___nl__9);
#line 436
c_rt_lib0copy(&___nl__9, *___ref___2);
#line 437
c_rt_lib0move(&___nl__10, c_rt_lib0get_true());
#line 438
c_rt_lib0move(&___nl__11, c_rt_lib0hash_mk(0));
#line 439
c_rt_lib0move(&___nl__13,___get_global_const(1));
#line 439
c_rt_lib0move(&___nl__14,___get_global_const(2));
#line 439
c_rt_lib0move(&___nl__15, c_rt_lib0array_len(___nl__5));
#line 439
label_22:
#line 439
c_rt_lib0move(&___nl__16, c_rt_lib0ge(___nl__13, ___nl__15));
#line 439
if(c_rt_lib0check_true_native(___nl__16)){ goto label_20;}
#line 439
c_rt_lib0move(&___nl__12, c_rt_lib0array_get(___nl__5, ___nl__13));
#line 440
c_rt_lib0copy(&___nl__17, *___ref___2);
#line 441
c_rt_lib0move(&___nl__18, c_rt_lib0hash_get_value_dec(___nl__12, ___get_global_const(764)));
#line 441
c_rt_lib0move(&___nl__18, c_rt_lib0hash_get_value_dec(___nl__18, ___get_global_const(76)));
#line 442
c_rt_lib0move(&___nl__19, hash0has_key(___nl__11, ___nl__18));
#line 442
c_rt_lib0move(&___nl__19, c_rt_lib0not(___nl__19));
#line 442
if(c_rt_lib0check_true_native(___nl__19)){ goto label_24;}
#line 442
c_rt_lib0move(&___nl__20,___get_global_const(1069));
#line 442
c_rt_lib0move(&___nl__20, c_rt_lib0concat_add(___nl__20, ___nl__18));
#line 442
c_rt_lib0delete(type_checker_priv0add_error(___ref___3, ___nl__20));
#line 442
c_rt_lib0clear(&___nl__20);
#line 442
goto label_24;
#line 442
label_24:
#line 442
c_rt_lib0clear(&___nl__19);
#line 444
c_rt_lib0move(&___nl__19,___get_global_const(2));
#line 444
c_rt_lib0delete(hash0set_value(&___nl__11, ___nl__18, ___nl__19));
#line 444
c_rt_lib0clear(&___nl__19);
#line 445
c_rt_lib0move(&___nl__19, c_rt_lib0hash_get_value_dec(___nl__12, ___get_global_const(764)));
#line 445
c_rt_lib0move(&___nl__19, c_rt_lib0hash_get_value_dec(___nl__19, ___get_global_const(641)));
#line 445
c_rt_lib0move(&___nl__20, c_rt_lib0priv_is(___nl__19, ___get_global_const(641)));
#line 445
if(c_rt_lib0check_true_native(___nl__20)){ goto label_26;}
#line 461
c_rt_lib0move(&___nl__20, c_rt_lib0priv_is(___nl__19, ___get_global_const(37)));
#line 461
if(c_rt_lib0check_true_native(___nl__20)){ goto label_27;}
#line 461
c_rt_lib0move(&___nl__20,___get_global_const(74));
#line 461
c_rt_lib0move(&___nl__20, c_rt_lib0array_mk(2, ___nl__20, ___nl__19));
#line 461
nl_die_arg(___nl__20);
#line 445
label_26:
#line 445
c_rt_lib0move(&___nl__21, c_rt_lib0priv_as(___nl__19, ___get_global_const(641)));
#line 446
c_rt_lib0delete(type_checker_priv0check_var_decl(___nl__21, ___ref___1, &___nl__17, ___ref___3));
#line 448
c_rt_lib0copy(&___nl__23, ___nl__6);
#line 448
c_rt_lib0move(&___nl__23, c_rt_lib0not(___nl__23));
#line 448
if(c_rt_lib0check_true_native(___nl__23)){ goto label_29;}
#line 449
c_rt_lib0move(&___nl__24, hash0has_key(___nl__8, ___nl__18));
#line 449
c_rt_lib0move(&___nl__24, c_rt_lib0not(___nl__24));
#line 449
c_rt_lib0move(&___nl__24, c_rt_lib0not(___nl__24));
#line 449
if(c_rt_lib0check_true_native(___nl__24)){ goto label_31;}
#line 449
c_rt_lib0clear(&___nl__17);
#line 449
c_rt_lib0clear(&___nl__18);
#line 449
c_rt_lib0clear(&___nl__19);
#line 449
c_rt_lib0clear(&___nl__20);
#line 449
c_rt_lib0clear(&___nl__21);
#line 449
c_rt_lib0clear(&___nl__22);
#line 449
c_rt_lib0clear(&___nl__23);
#line 449
c_rt_lib0clear(&___nl__24);
#line 449
goto label_21;
#line 449
goto label_31;
#line 449
label_31:
#line 449
c_rt_lib0clear(&___nl__24);
#line 450
c_rt_lib0move(&___nl__24, hash0has_key(___nl__7, ___nl__18));
#line 450
c_rt_lib0move(&___nl__24, c_rt_lib0not(___nl__24));
#line 450
c_rt_lib0move(&___nl__24, c_rt_lib0not(___nl__24));
#line 450
if(c_rt_lib0check_true_native(___nl__24)){ goto label_33;}
#line 451
c_rt_lib0move(&___nl__25,___get_global_const(1070));
#line 451
c_rt_lib0move(&___nl__25, c_rt_lib0concat_add(___nl__25, ___nl__18));
#line 451
c_rt_lib0move(&___nl__26,___get_global_const(1071));
#line 451
c_rt_lib0move(&___nl__25, c_rt_lib0concat_add(___nl__25, ___nl__26));
#line 451
c_rt_lib0clear(&___nl__26);
#line 451
c_rt_lib0delete(type_checker_priv0add_error(___ref___3, ___nl__25));
#line 451
c_rt_lib0clear(&___nl__25);
#line 452
c_rt_lib0clear(&___nl__17);
#line 452
c_rt_lib0clear(&___nl__18);
#line 452
c_rt_lib0clear(&___nl__19);
#line 452
c_rt_lib0clear(&___nl__20);
#line 452
c_rt_lib0clear(&___nl__21);
#line 452
c_rt_lib0clear(&___nl__22);
#line 452
c_rt_lib0clear(&___nl__23);
#line 452
c_rt_lib0clear(&___nl__24);
#line 452
goto label_21;
#line 453
goto label_33;
#line 453
label_33:
#line 453
c_rt_lib0clear(&___nl__24);
#line 455
c_rt_lib0move(&___nl__24, hash0get_value(___nl__7, ___nl__18));
#line 455
c_rt_lib0copy(&___nl__22, ___nl__24);
#line 455
c_rt_lib0clear(&___nl__24);
#line 456
goto label_28;
#line 456
label_29:
#line 457
c_rt_lib0move(&___nl__24, tct0tct_im());
#line 457
c_rt_lib0copy(&___nl__22, ___nl__24);
#line 457
c_rt_lib0clear(&___nl__24);
#line 458
goto label_28;
#line 458
label_28:
#line 458
c_rt_lib0clear(&___nl__23);
#line 460
c_rt_lib0move(&___nl__23, c_rt_lib0hash_get_value_dec(___nl__21, ___get_global_const(76)));
#line 460
c_rt_lib0delete(type_checker_priv0add_var_decl_to_vars(___nl__22, ___nl__23, &___nl__17));
#line 460
c_rt_lib0clear(&___nl__23);
#line 460
c_rt_lib0clear(&___nl__22);
#line 460
c_rt_lib0clear(&___nl__21);
#line 461
goto label_25;
#line 461
label_27:
#line 462
c_rt_lib0move(&___nl__21, hash0has_key(___nl__7, ___nl__18));
#line 462
c_rt_lib0move(&___nl__21, c_rt_lib0not(___nl__21));
#line 462
if(c_rt_lib0check_true_native(___nl__21)){ goto label_35;}
#line 463
c_rt_lib0move(&___nl__22,___get_global_const(1070));
#line 463
c_rt_lib0move(&___nl__22, c_rt_lib0concat_add(___nl__22, ___nl__18));
#line 463
c_rt_lib0move(&___nl__23,___get_global_const(1072));
#line 463
c_rt_lib0move(&___nl__22, c_rt_lib0concat_add(___nl__22, ___nl__23));
#line 463
c_rt_lib0clear(&___nl__23);
#line 463
c_rt_lib0delete(type_checker_priv0add_error(___ref___3, ___nl__22));
#line 463
c_rt_lib0clear(&___nl__22);
#line 464
goto label_35;
#line 464
label_35:
#line 464
c_rt_lib0clear(&___nl__21);
#line 466
goto label_25;
#line 466
label_25:
#line 466
c_rt_lib0clear(&___nl__19);
#line 466
c_rt_lib0clear(&___nl__20);
#line 467
c_rt_lib0move(&___nl__19, c_rt_lib0hash_get_value_dec(___nl__12, ___get_global_const(209)));
#line 467
c_rt_lib0delete(type_checker_priv0check_cmd(___nl__19, ___ref___1, &___nl__17, ___ref___3));
#line 467
c_rt_lib0clear(&___nl__19);
#line 468
c_rt_lib0move(&___nl__19, c_rt_lib0hash_get_value_dec(___nl__12, ___get_global_const(764)));
#line 468
c_rt_lib0move(&___nl__19, c_rt_lib0hash_get_value_dec(___nl__19, ___get_global_const(641)));
#line 468
c_rt_lib0move(&___nl__20, c_rt_lib0priv_is(___nl__19, ___get_global_const(641)));
#line 468
if(c_rt_lib0check_true_native(___nl__20)){ goto label_37;}
#line 470
c_rt_lib0move(&___nl__20, c_rt_lib0priv_is(___nl__19, ___get_global_const(37)));
#line 470
if(c_rt_lib0check_true_native(___nl__20)){ goto label_38;}
#line 470
c_rt_lib0move(&___nl__20,___get_global_const(74));
#line 470
c_rt_lib0move(&___nl__20, c_rt_lib0array_mk(2, ___nl__20, ___nl__19));
#line 470
nl_die_arg(___nl__20);
#line 468
label_37:
#line 468
c_rt_lib0move(&___nl__21, c_rt_lib0priv_as(___nl__19, ___get_global_const(641)));
#line 469
c_rt_lib0move(&___nl__23, c_rt_lib0hash_get_value_dec(___nl__21, ___get_global_const(76)));
#line 469
c_rt_lib0move(&___nl__22, hash0has_key(___nl__9, ___nl__23));
#line 469
c_rt_lib0clear(&___nl__23);
#line 469
c_rt_lib0move(&___nl__22, c_rt_lib0not(___nl__22));
#line 469
c_rt_lib0move(&___nl__22, c_rt_lib0not(___nl__22));
#line 469
if(c_rt_lib0check_true_native(___nl__22)){ goto label_40;}
#line 469
c_rt_lib0move(&___nl__23, c_rt_lib0hash_get_value_dec(___nl__21, ___get_global_const(76)));
#line 469
c_rt_lib0delete(hash0delete(&___nl__17, ___nl__23));
#line 469
c_rt_lib0clear(&___nl__23);
#line 469
goto label_40;
#line 469
label_40:
#line 469
c_rt_lib0clear(&___nl__22);
#line 469
c_rt_lib0clear(&___nl__21);
#line 470
goto label_36;
#line 470
label_38:
#line 471
goto label_36;
#line 471
label_36:
#line 471
c_rt_lib0clear(&___nl__19);
#line 471
c_rt_lib0clear(&___nl__20);
#line 472
c_rt_lib0copy(&___nl__19, ___nl__10);
#line 472
c_rt_lib0move(&___nl__19, c_rt_lib0not(___nl__19));
#line 472
if(c_rt_lib0check_true_native(___nl__19)){ goto label_42;}
#line 473
c_rt_lib0copy(&___nl__9, ___nl__17);
#line 474
goto label_41;
#line 474
label_42:
#line 475
c_rt_lib0delete(type_checker_priv0join_vars(&___nl__9, ___nl__17, ___ref___1, ___ref___3));
#line 476
goto label_41;
#line 476
label_41:
#line 476
c_rt_lib0clear(&___nl__19);
#line 478
c_rt_lib0move(&___nl__19, c_rt_lib0get_false());
#line 478
c_rt_lib0copy(&___nl__10, ___nl__19);
#line 478
c_rt_lib0clear(&___nl__19);
#line 478
c_rt_lib0clear(&___nl__17);
#line 478
c_rt_lib0clear(&___nl__18);
#line 478
label_21:
#line 479
c_rt_lib0move(&___nl__13, c_rt_lib0add_mod(___nl__13, ___nl__14));
#line 479
goto label_22;
#line 479
label_20:
#line 479
c_rt_lib0clear(&___nl__12);
#line 479
c_rt_lib0clear(&___nl__13);
#line 479
c_rt_lib0clear(&___nl__14);
#line 479
c_rt_lib0clear(&___nl__15);
#line 479
c_rt_lib0clear(&___nl__16);
#line 480
c_rt_lib0copy(___ref___2, ___nl__9);
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
c_rt_lib0clear(&___nl__9);
#line 480
c_rt_lib0clear(&___nl__10);
#line 480
c_rt_lib0clear(&___nl__11);
#line 480
c_rt_lib0clear(&___nl__0);
#line 480
return NULL;
}

ImmT type_checker_priv0check_val(ImmT ___nl__0,ImmT * ___ref___1,ImmT * ___ref___2,ImmT * ___ref___3) {
c_rt_lib0arg_val(___nl__0);
type_checker_priv0__const__init();
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
ImmT ___nl__22 = NULL;
ImmT ___nl__23 = NULL;
ImmT ___nl__24 = NULL;
ImmT ___nl__25 = NULL;
ImmT ___nl__26 = NULL;
#line 485
c_rt_lib0move(&___nl__5, tct0tct_im());
#line 485
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_none(___get_global_const(985)));
#line 485
c_rt_lib0move(&___nl__4, c_rt_lib0hash_mk(2, ___get_global_const(72), ___nl__5, ___get_global_const(39), ___nl__6));
#line 485
c_rt_lib0clear(&___nl__5);
#line 485
c_rt_lib0clear(&___nl__6);
#line 486
c_rt_lib0move(&___nl__5, c_rt_lib0priv_is(___nl__0, ___get_global_const(776)));
#line 486
if(c_rt_lib0check_true_native(___nl__5)){ goto label_2;}
#line 502
c_rt_lib0move(&___nl__5, c_rt_lib0priv_is(___nl__0, ___get_global_const(778)));
#line 502
if(c_rt_lib0check_true_native(___nl__5)){ goto label_3;}
#line 504
c_rt_lib0move(&___nl__5, c_rt_lib0priv_is(___nl__0, ___get_global_const(754)));
#line 504
if(c_rt_lib0check_true_native(___nl__5)){ goto label_4;}
#line 506
c_rt_lib0move(&___nl__5, c_rt_lib0priv_is(___nl__0, ___get_global_const(777)));
#line 506
if(c_rt_lib0check_true_native(___nl__5)){ goto label_5;}
#line 508
c_rt_lib0move(&___nl__5, c_rt_lib0priv_is(___nl__0, ___get_global_const(764)));
#line 508
if(c_rt_lib0check_true_native(___nl__5)){ goto label_6;}
#line 523
c_rt_lib0move(&___nl__5, c_rt_lib0priv_is(___nl__0, ___get_global_const(294)));
#line 523
if(c_rt_lib0check_true_native(___nl__5)){ goto label_7;}
#line 525
c_rt_lib0move(&___nl__5, c_rt_lib0priv_is(___nl__0, ___get_global_const(215)));
#line 525
if(c_rt_lib0check_true_native(___nl__5)){ goto label_8;}
#line 545
c_rt_lib0move(&___nl__5, c_rt_lib0priv_is(___nl__0, ___get_global_const(216)));
#line 545
if(c_rt_lib0check_true_native(___nl__5)){ goto label_9;}
#line 561
c_rt_lib0move(&___nl__5, c_rt_lib0priv_is(___nl__0, ___get_global_const(772)));
#line 561
if(c_rt_lib0check_true_native(___nl__5)){ goto label_10;}
#line 572
c_rt_lib0move(&___nl__5, c_rt_lib0priv_is(___nl__0, ___get_global_const(219)));
#line 572
if(c_rt_lib0check_true_native(___nl__5)){ goto label_11;}
#line 574
c_rt_lib0move(&___nl__5, c_rt_lib0priv_is(___nl__0, ___get_global_const(779)));
#line 574
if(c_rt_lib0check_true_native(___nl__5)){ goto label_12;}
#line 605
c_rt_lib0move(&___nl__5, c_rt_lib0priv_is(___nl__0, ___get_global_const(780)));
#line 605
if(c_rt_lib0check_true_native(___nl__5)){ goto label_13;}
#line 625
c_rt_lib0move(&___nl__5, c_rt_lib0priv_is(___nl__0, ___get_global_const(781)));
#line 625
if(c_rt_lib0check_true_native(___nl__5)){ goto label_14;}
#line 628
c_rt_lib0move(&___nl__5, c_rt_lib0priv_is(___nl__0, ___get_global_const(735)));
#line 628
if(c_rt_lib0check_true_native(___nl__5)){ goto label_15;}
#line 685
c_rt_lib0move(&___nl__5, c_rt_lib0priv_is(___nl__0, ___get_global_const(694)));
#line 685
if(c_rt_lib0check_true_native(___nl__5)){ goto label_16;}
#line 687
c_rt_lib0move(&___nl__5, c_rt_lib0priv_is(___nl__0, ___get_global_const(782)));
#line 687
if(c_rt_lib0check_true_native(___nl__5)){ goto label_17;}
#line 693
c_rt_lib0move(&___nl__5, c_rt_lib0priv_is(___nl__0, ___get_global_const(783)));
#line 693
if(c_rt_lib0check_true_native(___nl__5)){ goto label_18;}
#line 693
c_rt_lib0move(&___nl__5,___get_global_const(74));
#line 693
c_rt_lib0move(&___nl__5, c_rt_lib0array_mk(2, ___nl__5, ___nl__0));
#line 693
nl_die_arg(___nl__5);
#line 486
label_2:
#line 486
c_rt_lib0move(&___nl__6, c_rt_lib0priv_as(___nl__0, ___get_global_const(776)));
#line 487
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__6, ___get_global_const(784)));
#line 487
c_rt_lib0move(&___nl__7, type_checker_priv0check_val(___nl__8, ___ref___1, ___ref___2, ___ref___3));
#line 487
c_rt_lib0clear(&___nl__8);
#line 488
c_rt_lib0move(&___nl__8, ptd_system0is_condition_type(___nl__7, ___ref___1, ___ref___3));
#line 488
c_rt_lib0move(&___nl__8, c_rt_lib0not(___nl__8));
#line 488
c_rt_lib0move(&___nl__8, c_rt_lib0not(___nl__8));
#line 488
if(c_rt_lib0check_true_native(___nl__8)){ goto label_20;}
#line 488
c_rt_lib0move(&___nl__9,___get_global_const(1073));
#line 488
c_rt_lib0move(&___nl__11, c_rt_lib0hash_get_value_dec(___nl__7, ___get_global_const(72)));
#line 488
c_rt_lib0move(&___nl__10, type_checker_priv0get_print_tct_type_name(___nl__11));
#line 488
c_rt_lib0clear(&___nl__11);
#line 488
c_rt_lib0move(&___nl__9, c_rt_lib0concat_add(___nl__9, ___nl__10));
#line 488
c_rt_lib0clear(&___nl__10);
#line 488
c_rt_lib0delete(type_checker_priv0add_error(___ref___3, ___nl__9));
#line 488
c_rt_lib0clear(&___nl__9);
#line 488
goto label_20;
#line 488
label_20:
#line 488
c_rt_lib0clear(&___nl__8);
#line 491
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__6, ___get_global_const(785)));
#line 491
c_rt_lib0move(&___nl__8, type_checker_priv0check_val(___nl__9, ___ref___1, ___ref___2, ___ref___3));
#line 491
c_rt_lib0clear(&___nl__9);
#line 491
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__8, ___get_global_const(72)));
#line 492
c_rt_lib0move(&___nl__10,___get_global_const(727));
#line 492
c_rt_lib0move(&___nl__9, ov0is(___nl__8, ___nl__10));
#line 492
c_rt_lib0clear(&___nl__10);
#line 492
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__9));
#line 492
if(c_rt_lib0check_true_native(___nl__9)){ goto label_22;}
#line 493
c_rt_lib0copy(&___nl__10, ___nl__8);
#line 493
c_rt_lib0hash_set_value_dec(&___nl__4, ___get_global_const(72), ___nl__10);
#line 493
c_rt_lib0clear(&___nl__10);
#line 494
goto label_21;
#line 494
label_22:
#line 495
c_rt_lib0move(&___nl__11, c_rt_lib0hash_get_value_dec(___nl__6, ___get_global_const(786)));
#line 495
c_rt_lib0move(&___nl__10, type_checker_priv0check_val(___nl__11, ___ref___1, ___ref___2, ___ref___3));
#line 495
c_rt_lib0clear(&___nl__11);
#line 495
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__10, ___get_global_const(72)));
#line 496
c_rt_lib0move(&___nl__12,___get_global_const(727));
#line 496
c_rt_lib0move(&___nl__11, ov0is(___nl__10, ___nl__12));
#line 496
c_rt_lib0clear(&___nl__12);
#line 496
c_rt_lib0move(&___nl__11, c_rt_lib0not(___nl__11));
#line 496
if(c_rt_lib0check_true_native(___nl__11)){ goto label_24;}
#line 497
c_rt_lib0copy(&___nl__12, ___nl__10);
#line 497
c_rt_lib0hash_set_value_dec(&___nl__4, ___get_global_const(72), ___nl__12);
#line 497
c_rt_lib0clear(&___nl__12);
#line 498
goto label_23;
#line 498
label_24:
#line 499
c_rt_lib0move(&___nl__12, ptd_system0cross_type(___nl__8, ___nl__10, ___ref___1, ___ref___3));
#line 499
c_rt_lib0copy(&___nl__13, ___nl__12);
#line 499
c_rt_lib0hash_set_value_dec(&___nl__4, ___get_global_const(72), ___nl__13);
#line 499
c_rt_lib0clear(&___nl__12);
#line 499
c_rt_lib0clear(&___nl__13);
#line 500
goto label_23;
#line 500
label_23:
#line 500
c_rt_lib0clear(&___nl__11);
#line 500
c_rt_lib0clear(&___nl__10);
#line 501
goto label_21;
#line 501
label_21:
#line 501
c_rt_lib0clear(&___nl__9);
#line 501
c_rt_lib0clear(&___nl__7);
#line 501
c_rt_lib0clear(&___nl__8);
#line 501
c_rt_lib0clear(&___nl__6);
#line 502
goto label_1;
#line 502
label_3:
#line 502
c_rt_lib0move(&___nl__6, c_rt_lib0priv_as(___nl__0, ___get_global_const(778)));
#line 503
c_rt_lib0move(&___nl__7, tct0sim());
#line 503
c_rt_lib0copy(&___nl__8, ___nl__7);
#line 503
c_rt_lib0hash_set_value_dec(&___nl__4, ___get_global_const(72), ___nl__8);
#line 503
c_rt_lib0clear(&___nl__7);
#line 503
c_rt_lib0clear(&___nl__8);
#line 503
c_rt_lib0clear(&___nl__6);
#line 504
goto label_1;
#line 504
label_4:
#line 505
c_rt_lib0move(&___nl__6, tct0empty());
#line 505
c_rt_lib0copy(&___nl__7, ___nl__6);
#line 505
c_rt_lib0hash_set_value_dec(&___nl__4, ___get_global_const(72), ___nl__7);
#line 505
c_rt_lib0clear(&___nl__6);
#line 505
c_rt_lib0clear(&___nl__7);
#line 506
goto label_1;
#line 506
label_5:
#line 506
c_rt_lib0move(&___nl__6, c_rt_lib0priv_as(___nl__0, ___get_global_const(777)));
#line 507
c_rt_lib0move(&___nl__7, type_checker_priv0check_val(___nl__6, ___ref___1, ___ref___2, ___ref___3));
#line 507
c_rt_lib0clear(&___nl__0);
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
c_rt_lib0clear(&___nl__6);
#line 508
goto label_1;
#line 508
label_6:
#line 508
c_rt_lib0move(&___nl__6, c_rt_lib0priv_as(___nl__0, ___get_global_const(764)));
#line 509
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__6, ___get_global_const(76)));
#line 509
c_rt_lib0move(&___nl__8,___get_global_const(6));
#line 509
c_rt_lib0move(&___nl__7, c_rt_lib0eq(___nl__7, ___nl__8));
#line 509
c_rt_lib0clear(&___nl__8);
#line 509
if(c_rt_lib0check_true_native(___nl__7)){ goto label_27;}
#line 509
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__6, ___get_global_const(76)));
#line 509
c_rt_lib0move(&___nl__8,___get_global_const(7));
#line 509
c_rt_lib0move(&___nl__7, c_rt_lib0eq(___nl__7, ___nl__8));
#line 509
c_rt_lib0clear(&___nl__8);
#line 509
label_27:
#line 509
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 509
if(c_rt_lib0check_true_native(___nl__7)){ goto label_26;}
#line 510
c_rt_lib0move(&___nl__8, tct0bool());
#line 510
c_rt_lib0copy(&___nl__9, ___nl__8);
#line 510
c_rt_lib0hash_set_value_dec(&___nl__4, ___get_global_const(72), ___nl__9);
#line 510
c_rt_lib0clear(&___nl__8);
#line 510
c_rt_lib0clear(&___nl__9);
#line 511
c_rt_lib0clear(&___nl__0);
#line 511
c_rt_lib0clear(&___nl__5);
#line 511
c_rt_lib0clear(&___nl__6);
#line 511
c_rt_lib0clear(&___nl__7);
#line 511
return ___nl__4;
#line 512
goto label_26;
#line 512
label_26:
#line 512
c_rt_lib0clear(&___nl__7);
#line 514
c_rt_lib0move(&___nl__7, c_rt_lib0hash_mk(0));
#line 515
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__6, ___get_global_const(772)));
#line 515
c_rt_lib0move(&___nl__10,___get_global_const(754));
#line 515
c_rt_lib0move(&___nl__8, ov0is(___nl__9, ___nl__10));
#line 515
c_rt_lib0clear(&___nl__10);
#line 515
c_rt_lib0clear(&___nl__9);
#line 515
c_rt_lib0move(&___nl__8, c_rt_lib0not(___nl__8));
#line 515
if(c_rt_lib0check_true_native(___nl__8)){ goto label_29;}
#line 516
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__6, ___get_global_const(76)));
#line 516
c_rt_lib0move(&___nl__10, tct0none());
#line 516
c_rt_lib0delete(hash0set_value(&___nl__7, ___nl__9, ___nl__10));
#line 516
c_rt_lib0clear(&___nl__10);
#line 516
c_rt_lib0clear(&___nl__9);
#line 517
goto label_28;
#line 517
label_29:
#line 518
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__6, ___get_global_const(772)));
#line 518
c_rt_lib0move(&___nl__9, type_checker_priv0check_val(___nl__10, ___ref___1, ___ref___2, ___ref___3));
#line 518
c_rt_lib0clear(&___nl__10);
#line 519
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__6, ___get_global_const(76)));
#line 519
c_rt_lib0move(&___nl__11, c_rt_lib0hash_get_value_dec(___nl__9, ___get_global_const(72)));
#line 519
c_rt_lib0delete(hash0set_value(&___nl__7, ___nl__10, ___nl__11));
#line 519
c_rt_lib0clear(&___nl__11);
#line 519
c_rt_lib0clear(&___nl__10);
#line 520
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__9, ___get_global_const(39)));
#line 520
c_rt_lib0copy(&___nl__11, ___nl__10);
#line 520
c_rt_lib0hash_set_value_dec(&___nl__4, ___get_global_const(39), ___nl__11);
#line 520
c_rt_lib0clear(&___nl__10);
#line 520
c_rt_lib0clear(&___nl__11);
#line 520
c_rt_lib0clear(&___nl__9);
#line 521
goto label_28;
#line 521
label_28:
#line 521
c_rt_lib0clear(&___nl__8);
#line 522
c_rt_lib0move(&___nl__8, tct0var(___nl__7));
#line 522
c_rt_lib0copy(&___nl__9, ___nl__8);
#line 522
c_rt_lib0hash_set_value_dec(&___nl__4, ___get_global_const(72), ___nl__9);
#line 522
c_rt_lib0clear(&___nl__8);
#line 522
c_rt_lib0clear(&___nl__9);
#line 522
c_rt_lib0clear(&___nl__7);
#line 522
c_rt_lib0clear(&___nl__6);
#line 523
goto label_1;
#line 523
label_7:
#line 523
c_rt_lib0move(&___nl__6, c_rt_lib0priv_as(___nl__0, ___get_global_const(294)));
#line 524
c_rt_lib0move(&___nl__7, tct0sim());
#line 524
c_rt_lib0copy(&___nl__8, ___nl__7);
#line 524
c_rt_lib0hash_set_value_dec(&___nl__4, ___get_global_const(72), ___nl__8);
#line 524
c_rt_lib0clear(&___nl__7);
#line 524
c_rt_lib0clear(&___nl__8);
#line 524
c_rt_lib0clear(&___nl__6);
#line 525
goto label_1;
#line 525
label_8:
#line 525
c_rt_lib0move(&___nl__6, c_rt_lib0priv_as(___nl__0, ___get_global_const(215)));
#line 526
c_rt_lib0move(&___nl__7, array0len(___nl__6));
#line 526
c_rt_lib0move(&___nl__8,___get_global_const(1));
#line 526
c_rt_lib0move(&___nl__7, c_rt_lib0num_eq(___nl__7, ___nl__8));
#line 526
c_rt_lib0clear(&___nl__8);
#line 526
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 526
if(c_rt_lib0check_true_native(___nl__7)){ goto label_31;}
#line 527
c_rt_lib0move(&___nl__9, tct0empty());
#line 527
c_rt_lib0move(&___nl__8, tct0arr(___nl__9));
#line 527
c_rt_lib0clear(&___nl__9);
#line 527
c_rt_lib0copy(&___nl__9, ___nl__8);
#line 527
c_rt_lib0hash_set_value_dec(&___nl__4, ___get_global_const(72), ___nl__9);
#line 527
c_rt_lib0clear(&___nl__8);
#line 527
c_rt_lib0clear(&___nl__9);
#line 528
c_rt_lib0clear(&___nl__0);
#line 528
c_rt_lib0clear(&___nl__5);
#line 528
c_rt_lib0clear(&___nl__6);
#line 528
c_rt_lib0clear(&___nl__7);
#line 528
return ___nl__4;
#line 529
goto label_31;
#line 529
label_31:
#line 529
c_rt_lib0clear(&___nl__7);
#line 530
c_rt_lib0move(&___nl__7, c_rt_lib0array_mk(0));
#line 531
c_rt_lib0move(&___nl__8, c_rt_lib0get_false());
#line 532
c_rt_lib0move(&___nl__10,___get_global_const(1));
#line 532
c_rt_lib0move(&___nl__11,___get_global_const(2));
#line 532
c_rt_lib0move(&___nl__12, c_rt_lib0array_len(___nl__6));
#line 532
label_34:
#line 532
c_rt_lib0move(&___nl__13, c_rt_lib0ge(___nl__10, ___nl__12));
#line 532
if(c_rt_lib0check_true_native(___nl__13)){ goto label_32;}
#line 532
c_rt_lib0move(&___nl__9, c_rt_lib0array_get(___nl__6, ___nl__10));
#line 533
c_rt_lib0move(&___nl__14, type_checker_priv0check_val(___nl__9, ___ref___1, ___ref___2, ___ref___3));
#line 534
c_rt_lib0delete(array0push(&___nl__7, ___nl__14));
#line 535
c_rt_lib0move(&___nl__15, type_checker_priv0is_known(___nl__14));
#line 535
c_rt_lib0move(&___nl__15, c_rt_lib0not(___nl__15));
#line 535
c_rt_lib0move(&___nl__15, c_rt_lib0not(___nl__15));
#line 535
if(c_rt_lib0check_true_native(___nl__15)){ goto label_36;}
#line 535
c_rt_lib0move(&___nl__16, c_rt_lib0get_true());
#line 535
c_rt_lib0copy(&___nl__8, ___nl__16);
#line 535
c_rt_lib0clear(&___nl__16);
#line 535
goto label_36;
#line 535
label_36:
#line 535
c_rt_lib0clear(&___nl__15);
#line 535
c_rt_lib0clear(&___nl__14);
#line 536
c_rt_lib0move(&___nl__10, c_rt_lib0add_mod(___nl__10, ___nl__11));
#line 536
goto label_34;
#line 536
label_32:
#line 536
c_rt_lib0clear(&___nl__9);
#line 536
c_rt_lib0clear(&___nl__10);
#line 536
c_rt_lib0clear(&___nl__11);
#line 536
c_rt_lib0clear(&___nl__12);
#line 536
c_rt_lib0clear(&___nl__13);
#line 537
c_rt_lib0move(&___nl__10,___get_global_const(1));
#line 537
c_rt_lib0move(&___nl__9, c_rt_lib0array_get(___nl__7, ___nl__10));
#line 537
c_rt_lib0clear(&___nl__10);
#line 537
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__9, ___get_global_const(72)));
#line 538
c_rt_lib0copy(&___nl__10, ___nl__8);
#line 538
c_rt_lib0move(&___nl__10, c_rt_lib0not(___nl__10));
#line 538
if(c_rt_lib0check_true_native(___nl__10)){ goto label_38;}
#line 538
c_rt_lib0move(&___nl__11, tct0tct_im());
#line 538
c_rt_lib0move(&___nl__13,___get_global_const(1));
#line 538
c_rt_lib0move(&___nl__12, c_rt_lib0array_get(___nl__7, ___nl__13));
#line 538
c_rt_lib0clear(&___nl__13);
#line 538
c_rt_lib0delete(ptd_system0check_assignment(___nl__11, ___nl__12, ___ref___1, ___ref___3));
#line 538
c_rt_lib0clear(&___nl__12);
#line 538
c_rt_lib0clear(&___nl__11);
#line 538
goto label_38;
#line 538
label_38:
#line 538
c_rt_lib0clear(&___nl__10);
#line 539
c_rt_lib0move(&___nl__10,___get_global_const(2));
#line 539
label_40:
#line 539
c_rt_lib0move(&___nl__11, array0len(___nl__7));
#line 539
c_rt_lib0move(&___nl__11, c_rt_lib0lt(___nl__10, ___nl__11));
#line 539
c_rt_lib0move(&___nl__11, c_rt_lib0not(___nl__11));
#line 539
if(c_rt_lib0check_true_native(___nl__11)){ goto label_39;}
#line 540
c_rt_lib0move(&___nl__13, c_rt_lib0array_get(___nl__7, ___nl__10));
#line 540
c_rt_lib0move(&___nl__13, c_rt_lib0hash_get_value_dec(___nl__13, ___get_global_const(72)));
#line 540
c_rt_lib0move(&___nl__12, ptd_system0cross_type(___nl__9, ___nl__13, ___ref___1, ___ref___3));
#line 540
c_rt_lib0clear(&___nl__13);
#line 540
c_rt_lib0copy(&___nl__9, ___nl__12);
#line 540
c_rt_lib0clear(&___nl__12);
#line 541
c_rt_lib0copy(&___nl__12, ___nl__8);
#line 541
c_rt_lib0move(&___nl__12, c_rt_lib0not(___nl__12));
#line 541
if(c_rt_lib0check_true_native(___nl__12)){ goto label_43;}
#line 541
c_rt_lib0move(&___nl__13, tct0tct_im());
#line 541
c_rt_lib0move(&___nl__14, c_rt_lib0array_get(___nl__7, ___nl__10));
#line 541
c_rt_lib0delete(ptd_system0check_assignment(___nl__13, ___nl__14, ___ref___1, ___ref___3));
#line 541
c_rt_lib0clear(&___nl__14);
#line 541
c_rt_lib0clear(&___nl__13);
#line 541
goto label_43;
#line 541
label_43:
#line 541
c_rt_lib0clear(&___nl__12);
#line 541
c_rt_lib0move(&___nl__12,___get_global_const(2));
#line 541
c_rt_lib0move(&___nl__10, c_rt_lib0add_mod(___nl__10, ___nl__12));
#line 541
c_rt_lib0clear(&___nl__12);
#line 542
goto label_40;
#line 542
label_39:
#line 542
c_rt_lib0clear(&___nl__10);
#line 542
c_rt_lib0clear(&___nl__11);
#line 543
c_rt_lib0copy(&___nl__10, ___nl__8);
#line 543
c_rt_lib0move(&___nl__10, c_rt_lib0not(___nl__10));
#line 543
c_rt_lib0move(&___nl__10, c_rt_lib0not(___nl__10));
#line 543
if(c_rt_lib0check_true_native(___nl__10)){ goto label_45;}
#line 543
c_rt_lib0move(&___nl__11, c_rt_lib0ov_mk_none(___get_global_const(979)));
#line 543
c_rt_lib0copy(&___nl__12, ___nl__11);
#line 543
c_rt_lib0hash_set_value_dec(&___nl__4, ___get_global_const(39), ___nl__12);
#line 543
c_rt_lib0clear(&___nl__11);
#line 543
c_rt_lib0clear(&___nl__12);
#line 543
goto label_45;
#line 543
label_45:
#line 543
c_rt_lib0clear(&___nl__10);
#line 544
c_rt_lib0move(&___nl__10, tct0arr(___nl__9));
#line 544
c_rt_lib0copy(&___nl__11, ___nl__10);
#line 544
c_rt_lib0hash_set_value_dec(&___nl__4, ___get_global_const(72), ___nl__11);
#line 544
c_rt_lib0clear(&___nl__10);
#line 544
c_rt_lib0clear(&___nl__11);
#line 544
c_rt_lib0clear(&___nl__7);
#line 544
c_rt_lib0clear(&___nl__8);
#line 544
c_rt_lib0clear(&___nl__9);
#line 544
c_rt_lib0clear(&___nl__6);
#line 545
goto label_1;
#line 545
label_9:
#line 545
c_rt_lib0move(&___nl__6, c_rt_lib0priv_as(___nl__0, ___get_global_const(216)));
#line 546
c_rt_lib0move(&___nl__7, c_rt_lib0hash_mk(0));
#line 547
c_rt_lib0move(&___nl__8, c_rt_lib0get_false());
#line 548
c_rt_lib0move(&___nl__10,___get_global_const(1));
#line 548
c_rt_lib0move(&___nl__11,___get_global_const(2));
#line 548
c_rt_lib0move(&___nl__12, c_rt_lib0array_len(___nl__6));
#line 548
label_48:
#line 548
c_rt_lib0move(&___nl__13, c_rt_lib0ge(___nl__10, ___nl__12));
#line 548
if(c_rt_lib0check_true_native(___nl__13)){ goto label_46;}
#line 548
c_rt_lib0move(&___nl__9, c_rt_lib0array_get(___nl__6, ___nl__10));
#line 549
c_rt_lib0move(&___nl__15, c_rt_lib0hash_get_value_dec(___nl__9, ___get_global_const(279)));
#line 549
c_rt_lib0move(&___nl__16,___get_global_const(778));
#line 549
c_rt_lib0move(&___nl__14, ov0as(___nl__15, ___nl__16));
#line 549
c_rt_lib0clear(&___nl__16);
#line 549
c_rt_lib0clear(&___nl__15);
#line 550
c_rt_lib0move(&___nl__16, c_rt_lib0hash_get_value_dec(___nl__9, ___get_global_const(234)));
#line 550
c_rt_lib0move(&___nl__15, type_checker_priv0check_val(___nl__16, ___ref___1, ___ref___2, ___ref___3));
#line 550
c_rt_lib0clear(&___nl__16);
#line 551
c_rt_lib0delete(hash0set_value(&___nl__7, ___nl__14, ___nl__15));
#line 552
c_rt_lib0move(&___nl__16, type_checker_priv0is_known(___nl__15));
#line 552
c_rt_lib0move(&___nl__16, c_rt_lib0not(___nl__16));
#line 552
c_rt_lib0move(&___nl__16, c_rt_lib0not(___nl__16));
#line 552
if(c_rt_lib0check_true_native(___nl__16)){ goto label_50;}
#line 552
c_rt_lib0move(&___nl__17, c_rt_lib0get_true());
#line 552
c_rt_lib0copy(&___nl__8, ___nl__17);
#line 552
c_rt_lib0clear(&___nl__17);
#line 552
goto label_50;
#line 552
label_50:
#line 552
c_rt_lib0clear(&___nl__16);
#line 552
c_rt_lib0clear(&___nl__14);
#line 552
c_rt_lib0clear(&___nl__15);
#line 553
c_rt_lib0move(&___nl__10, c_rt_lib0add_mod(___nl__10, ___nl__11));
#line 553
goto label_48;
#line 553
label_46:
#line 553
c_rt_lib0clear(&___nl__9);
#line 553
c_rt_lib0clear(&___nl__10);
#line 553
c_rt_lib0clear(&___nl__11);
#line 553
c_rt_lib0clear(&___nl__12);
#line 553
c_rt_lib0clear(&___nl__13);
#line 554
c_rt_lib0move(&___nl__9, c_rt_lib0hash_mk(0));
#line 555
c_rt_lib0move(&___nl__12, c_rt_lib0init_iter(___nl__7));
#line 555
label_53:
#line 555
c_rt_lib0move(&___nl__10, c_rt_lib0is_end_hash(___nl__12));
#line 555
if(c_rt_lib0check_true_native(___nl__10)){ goto label_51;}
#line 555
c_rt_lib0move(&___nl__10, c_rt_lib0get_key_iter(___nl__12));
#line 555
c_rt_lib0move(&___nl__11, c_rt_lib0hash_get_value(___nl__7, ___nl__10));
#line 556
c_rt_lib0copy(&___nl__13, ___nl__8);
#line 556
c_rt_lib0move(&___nl__13, c_rt_lib0not(___nl__13));
#line 556
if(c_rt_lib0check_true_native(___nl__13)){ goto label_55;}
#line 556
c_rt_lib0move(&___nl__14, tct0tct_im());
#line 556
c_rt_lib0delete(ptd_system0check_assignment(___nl__14, ___nl__11, ___ref___1, ___ref___3));
#line 556
c_rt_lib0clear(&___nl__14);
#line 556
goto label_55;
#line 556
label_55:
#line 556
c_rt_lib0clear(&___nl__13);
#line 557
c_rt_lib0move(&___nl__13, c_rt_lib0hash_get_value_dec(___nl__11, ___get_global_const(72)));
#line 557
c_rt_lib0delete(hash0set_value(&___nl__9, ___nl__10, ___nl__13));
#line 557
c_rt_lib0clear(&___nl__13);
#line 558
c_rt_lib0move(&___nl__12, c_rt_lib0next_iter(___nl__12));
#line 558
goto label_53;
#line 558
label_51:
#line 558
c_rt_lib0clear(&___nl__10);
#line 558
c_rt_lib0clear(&___nl__11);
#line 558
c_rt_lib0clear(&___nl__12);
#line 559
c_rt_lib0copy(&___nl__10, ___nl__8);
#line 559
c_rt_lib0move(&___nl__10, c_rt_lib0not(___nl__10));
#line 559
c_rt_lib0move(&___nl__10, c_rt_lib0not(___nl__10));
#line 559
if(c_rt_lib0check_true_native(___nl__10)){ goto label_57;}
#line 559
c_rt_lib0move(&___nl__11, c_rt_lib0ov_mk_none(___get_global_const(980)));
#line 559
c_rt_lib0copy(&___nl__12, ___nl__11);
#line 559
c_rt_lib0hash_set_value_dec(&___nl__4, ___get_global_const(39), ___nl__12);
#line 559
c_rt_lib0clear(&___nl__11);
#line 559
c_rt_lib0clear(&___nl__12);
#line 559
goto label_57;
#line 559
label_57:
#line 559
c_rt_lib0clear(&___nl__10);
#line 560
c_rt_lib0move(&___nl__10, tct0rec(___nl__9));
#line 560
c_rt_lib0copy(&___nl__11, ___nl__10);
#line 560
c_rt_lib0hash_set_value_dec(&___nl__4, ___get_global_const(72), ___nl__11);
#line 560
c_rt_lib0clear(&___nl__10);
#line 560
c_rt_lib0clear(&___nl__11);
#line 560
c_rt_lib0clear(&___nl__7);
#line 560
c_rt_lib0clear(&___nl__8);
#line 560
c_rt_lib0clear(&___nl__9);
#line 560
c_rt_lib0clear(&___nl__6);
#line 561
goto label_1;
#line 561
label_10:
#line 561
c_rt_lib0move(&___nl__6, c_rt_lib0priv_as(___nl__0, ___get_global_const(772)));
#line 562
c_rt_lib0move(&___nl__7, hash0has_key(*___ref___2, ___nl__6));
#line 562
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 562
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 562
if(c_rt_lib0check_true_native(___nl__7)){ goto label_59;}
#line 563
c_rt_lib0move(&___nl__8,___get_global_const(1074));
#line 563
c_rt_lib0move(&___nl__8, c_rt_lib0concat_add(___nl__8, ___nl__6));
#line 563
c_rt_lib0move(&___nl__9,___get_global_const(995));
#line 563
c_rt_lib0move(&___nl__8, c_rt_lib0concat_add(___nl__8, ___nl__9));
#line 563
c_rt_lib0clear(&___nl__9);
#line 563
c_rt_lib0delete(type_checker_priv0add_error(___ref___3, ___nl__8));
#line 563
c_rt_lib0clear(&___nl__8);
#line 564
c_rt_lib0clear(&___nl__0);
#line 564
c_rt_lib0clear(&___nl__5);
#line 564
c_rt_lib0clear(&___nl__6);
#line 564
c_rt_lib0clear(&___nl__7);
#line 564
return ___nl__4;
#line 565
goto label_59;
#line 565
label_59:
#line 565
c_rt_lib0clear(&___nl__7);
#line 566
c_rt_lib0move(&___nl__7, hash0get_value(*___ref___2, ___nl__6));
#line 567
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__7, ___get_global_const(1017)));
#line 567
c_rt_lib0move(&___nl__9, c_rt_lib0priv_is(___nl__8, ___get_global_const(41)));
#line 567
if(c_rt_lib0check_true_native(___nl__9)){ goto label_61;}
#line 569
c_rt_lib0move(&___nl__9, c_rt_lib0priv_is(___nl__8, ___get_global_const(42)));
#line 569
if(c_rt_lib0check_true_native(___nl__9)){ goto label_62;}
#line 569
c_rt_lib0move(&___nl__9,___get_global_const(74));
#line 569
c_rt_lib0move(&___nl__9, c_rt_lib0array_mk(2, ___nl__9, ___nl__8));
#line 569
nl_die_arg(___nl__9);
#line 567
label_61:
#line 568
c_rt_lib0move(&___nl__11, c_rt_lib0hash_get_value_dec(___nl__7, ___get_global_const(72)));
#line 568
c_rt_lib0move(&___nl__12, c_rt_lib0ov_mk_none(___get_global_const(985)));
#line 568
c_rt_lib0move(&___nl__10, c_rt_lib0hash_mk(2, ___get_global_const(72), ___nl__11, ___get_global_const(39), ___nl__12));
#line 568
c_rt_lib0clear(&___nl__11);
#line 568
c_rt_lib0clear(&___nl__12);
#line 568
c_rt_lib0clear(&___nl__0);
#line 568
c_rt_lib0clear(&___nl__4);
#line 568
c_rt_lib0clear(&___nl__5);
#line 568
c_rt_lib0clear(&___nl__6);
#line 568
c_rt_lib0clear(&___nl__7);
#line 568
c_rt_lib0clear(&___nl__8);
#line 568
c_rt_lib0clear(&___nl__9);
#line 568
return ___nl__10;
#line 568
c_rt_lib0clear(&___nl__10);
#line 569
goto label_60;
#line 569
label_62:
#line 570
c_rt_lib0move(&___nl__11, c_rt_lib0hash_get_value_dec(___nl__7, ___get_global_const(72)));
#line 570
c_rt_lib0move(&___nl__12, c_rt_lib0ov_mk_none(___get_global_const(979)));
#line 570
c_rt_lib0move(&___nl__10, c_rt_lib0hash_mk(2, ___get_global_const(72), ___nl__11, ___get_global_const(39), ___nl__12));
#line 570
c_rt_lib0clear(&___nl__11);
#line 570
c_rt_lib0clear(&___nl__12);
#line 570
c_rt_lib0clear(&___nl__0);
#line 570
c_rt_lib0clear(&___nl__4);
#line 570
c_rt_lib0clear(&___nl__5);
#line 570
c_rt_lib0clear(&___nl__6);
#line 570
c_rt_lib0clear(&___nl__7);
#line 570
c_rt_lib0clear(&___nl__8);
#line 570
c_rt_lib0clear(&___nl__9);
#line 570
return ___nl__10;
#line 570
c_rt_lib0clear(&___nl__10);
#line 571
goto label_60;
#line 571
label_60:
#line 571
c_rt_lib0clear(&___nl__8);
#line 571
c_rt_lib0clear(&___nl__9);
#line 571
c_rt_lib0clear(&___nl__7);
#line 571
c_rt_lib0clear(&___nl__6);
#line 572
goto label_1;
#line 572
label_11:
#line 572
c_rt_lib0move(&___nl__6, c_rt_lib0priv_as(___nl__0, ___get_global_const(219)));
#line 573
c_rt_lib0move(&___nl__7, type_checker_priv0get_type_from_bin_op_and_check(___nl__6, ___ref___1, ___ref___2, ___ref___3));
#line 573
c_rt_lib0clear(&___nl__0);
#line 573
c_rt_lib0clear(&___nl__4);
#line 573
c_rt_lib0clear(&___nl__5);
#line 573
c_rt_lib0clear(&___nl__6);
#line 573
return ___nl__7;
#line 573
c_rt_lib0clear(&___nl__7);
#line 573
c_rt_lib0clear(&___nl__6);
#line 574
goto label_1;
#line 574
label_12:
#line 574
c_rt_lib0move(&___nl__6, c_rt_lib0priv_as(___nl__0, ___get_global_const(779)));
#line 575
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__6, ___get_global_const(235)));
#line 575
c_rt_lib0move(&___nl__8, type_checker_priv0check_val(___nl__9, ___ref___1, ___ref___2, ___ref___3));
#line 575
c_rt_lib0clear(&___nl__9);
#line 575
c_rt_lib0move(&___nl__7, ptd_system0can_delete(___nl__8, ___ref___1, ___ref___3));
#line 575
c_rt_lib0clear(&___nl__8);
#line 578
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__6, ___get_global_const(401)));
#line 578
c_rt_lib0move(&___nl__10, c_rt_lib0priv_is(___nl__9, ___get_global_const(220)));
#line 578
if(c_rt_lib0check_true_native(___nl__10)){ goto label_64;}
#line 580
c_rt_lib0move(&___nl__10, c_rt_lib0priv_is(___nl__9, ___get_global_const(221)));
#line 580
if(c_rt_lib0check_true_native(___nl__10)){ goto label_65;}
#line 580
c_rt_lib0move(&___nl__10,___get_global_const(74));
#line 580
c_rt_lib0move(&___nl__10, c_rt_lib0array_mk(2, ___nl__10, ___nl__9));
#line 580
nl_die_arg(___nl__10);
#line 578
label_64:
#line 579
c_rt_lib0move(&___nl__12, tct0bool());
#line 579
c_rt_lib0move(&___nl__13, c_rt_lib0ov_mk_none(___get_global_const(985)));
#line 579
c_rt_lib0move(&___nl__11, c_rt_lib0hash_mk(2, ___get_global_const(72), ___nl__12, ___get_global_const(39), ___nl__13));
#line 579
c_rt_lib0clear(&___nl__12);
#line 579
c_rt_lib0clear(&___nl__13);
#line 579
c_rt_lib0copy(&___nl__8, ___nl__11);
#line 579
c_rt_lib0clear(&___nl__11);
#line 580
goto label_63;
#line 580
label_65:
#line 581
c_rt_lib0move(&___nl__12, tct0tct_im());
#line 581
c_rt_lib0move(&___nl__13, c_rt_lib0hash_get_value_dec(___nl__7, ___get_global_const(39)));
#line 581
c_rt_lib0move(&___nl__11, c_rt_lib0hash_mk(2, ___get_global_const(72), ___nl__12, ___get_global_const(39), ___nl__13));
#line 581
c_rt_lib0clear(&___nl__12);
#line 581
c_rt_lib0clear(&___nl__13);
#line 581
c_rt_lib0copy(&___nl__8, ___nl__11);
#line 581
c_rt_lib0clear(&___nl__11);
#line 582
goto label_63;
#line 582
label_63:
#line 582
c_rt_lib0clear(&___nl__9);
#line 582
c_rt_lib0clear(&___nl__10);
#line 583
c_rt_lib0move(&___nl__11, c_rt_lib0hash_mk(0));
#line 583
c_rt_lib0move(&___nl__10, tct0var(___nl__11));
#line 583
c_rt_lib0clear(&___nl__11);
#line 583
c_rt_lib0move(&___nl__9, ptd_system0is_accepted(___nl__7, ___nl__10, ___ref___1, ___ref___3));
#line 583
c_rt_lib0clear(&___nl__10);
#line 583
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__9));
#line 583
if(c_rt_lib0check_true_native(___nl__9)){ goto label_67;}
#line 584
c_rt_lib0move(&___nl__11, c_rt_lib0hash_get_value_dec(___nl__7, ___get_global_const(72)));
#line 584
c_rt_lib0move(&___nl__12,___get_global_const(729));
#line 584
c_rt_lib0move(&___nl__10, ov0is(___nl__11, ___nl__12));
#line 584
c_rt_lib0clear(&___nl__12);
#line 584
c_rt_lib0clear(&___nl__11);
#line 584
c_rt_lib0move(&___nl__10, c_rt_lib0not(___nl__10));
#line 584
c_rt_lib0move(&___nl__10, c_rt_lib0not(___nl__10));
#line 584
if(c_rt_lib0check_true_native(___nl__10)){ goto label_69;}
#line 584
c_rt_lib0clear(&___nl__0);
#line 584
c_rt_lib0clear(&___nl__4);
#line 584
c_rt_lib0clear(&___nl__5);
#line 584
c_rt_lib0clear(&___nl__6);
#line 584
c_rt_lib0clear(&___nl__7);
#line 584
c_rt_lib0clear(&___nl__9);
#line 584
c_rt_lib0clear(&___nl__10);
#line 584
return ___nl__8;
#line 584
goto label_69;
#line 584
label_69:
#line 584
c_rt_lib0clear(&___nl__10);
#line 585
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__7, ___get_global_const(72)));
#line 585
c_rt_lib0move(&___nl__10, c_rt_lib0priv_as(___nl__10, ___get_global_const(729)));
#line 586
c_rt_lib0move(&___nl__12, c_rt_lib0hash_get_value_dec(___nl__6, ___get_global_const(821)));
#line 586
c_rt_lib0move(&___nl__11, hash0has_key(___nl__10, ___nl__12));
#line 586
c_rt_lib0clear(&___nl__12);
#line 586
c_rt_lib0move(&___nl__11, c_rt_lib0not(___nl__11));
#line 586
c_rt_lib0move(&___nl__11, c_rt_lib0not(___nl__11));
#line 586
if(c_rt_lib0check_true_native(___nl__11)){ goto label_71;}
#line 587
c_rt_lib0move(&___nl__12,___get_global_const(370));
#line 587
c_rt_lib0move(&___nl__13, c_rt_lib0hash_get_value_dec(___nl__6, ___get_global_const(821)));
#line 587
c_rt_lib0move(&___nl__12, c_rt_lib0concat_add(___nl__12, ___nl__13));
#line 587
c_rt_lib0clear(&___nl__13);
#line 587
c_rt_lib0move(&___nl__13,___get_global_const(1075));
#line 587
c_rt_lib0move(&___nl__12, c_rt_lib0concat_add(___nl__12, ___nl__13));
#line 587
c_rt_lib0clear(&___nl__13);
#line 587
c_rt_lib0move(&___nl__14, c_rt_lib0hash_get_value_dec(___nl__7, ___get_global_const(72)));
#line 587
c_rt_lib0move(&___nl__13, type_checker_priv0get_print_tct_type_name(___nl__14));
#line 587
c_rt_lib0clear(&___nl__14);
#line 587
c_rt_lib0move(&___nl__12, c_rt_lib0concat_add(___nl__12, ___nl__13));
#line 587
c_rt_lib0clear(&___nl__13);
#line 587
c_rt_lib0delete(type_checker_priv0add_error(___ref___3, ___nl__12));
#line 587
c_rt_lib0clear(&___nl__12);
#line 588
c_rt_lib0clear(&___nl__0);
#line 588
c_rt_lib0clear(&___nl__4);
#line 588
c_rt_lib0clear(&___nl__5);
#line 588
c_rt_lib0clear(&___nl__6);
#line 588
c_rt_lib0clear(&___nl__7);
#line 588
c_rt_lib0clear(&___nl__9);
#line 588
c_rt_lib0clear(&___nl__10);
#line 588
c_rt_lib0clear(&___nl__11);
#line 588
return ___nl__8;
#line 589
goto label_71;
#line 589
label_71:
#line 589
c_rt_lib0clear(&___nl__11);
#line 590
c_rt_lib0move(&___nl__11, c_rt_lib0hash_get_value_dec(___nl__6, ___get_global_const(401)));
#line 590
c_rt_lib0move(&___nl__12, c_rt_lib0priv_is(___nl__11, ___get_global_const(220)));
#line 590
if(c_rt_lib0check_true_native(___nl__12)){ goto label_73;}
#line 591
c_rt_lib0move(&___nl__12, c_rt_lib0priv_is(___nl__11, ___get_global_const(221)));
#line 591
if(c_rt_lib0check_true_native(___nl__12)){ goto label_74;}
#line 591
c_rt_lib0move(&___nl__12,___get_global_const(74));
#line 591
c_rt_lib0move(&___nl__12, c_rt_lib0array_mk(2, ___nl__12, ___nl__11));
#line 591
nl_die_arg(___nl__12);
#line 590
label_73:
#line 591
goto label_72;
#line 591
label_74:
#line 592
c_rt_lib0move(&___nl__14, c_rt_lib0hash_get_value_dec(___nl__6, ___get_global_const(821)));
#line 592
c_rt_lib0move(&___nl__13, hash0get_value(___nl__10, ___nl__14));
#line 592
c_rt_lib0clear(&___nl__14);
#line 593
c_rt_lib0move(&___nl__14, c_rt_lib0priv_is(___nl__13, ___get_global_const(734)));
#line 593
if(c_rt_lib0check_true_native(___nl__14)){ goto label_76;}
#line 595
c_rt_lib0move(&___nl__14, c_rt_lib0priv_is(___nl__13, ___get_global_const(733)));
#line 595
if(c_rt_lib0check_true_native(___nl__14)){ goto label_77;}
#line 595
c_rt_lib0move(&___nl__14,___get_global_const(74));
#line 595
c_rt_lib0move(&___nl__14, c_rt_lib0array_mk(2, ___nl__14, ___nl__13));
#line 595
nl_die_arg(___nl__14);
#line 593
label_76:
#line 593
c_rt_lib0move(&___nl__15, c_rt_lib0priv_as(___nl__13, ___get_global_const(734)));
#line 594
c_rt_lib0copy(&___nl__16, ___nl__15);
#line 594
c_rt_lib0hash_set_value_dec(&___nl__8, ___get_global_const(72), ___nl__16);
#line 594
c_rt_lib0clear(&___nl__16);
#line 594
c_rt_lib0clear(&___nl__15);
#line 595
goto label_75;
#line 595
label_77:
#line 596
c_rt_lib0move(&___nl__15,___get_global_const(370));
#line 596
c_rt_lib0move(&___nl__16, c_rt_lib0hash_get_value_dec(___nl__6, ___get_global_const(821)));
#line 596
c_rt_lib0move(&___nl__15, c_rt_lib0concat_add(___nl__15, ___nl__16));
#line 596
c_rt_lib0clear(&___nl__16);
#line 596
c_rt_lib0move(&___nl__16,___get_global_const(1076));
#line 596
c_rt_lib0move(&___nl__15, c_rt_lib0concat_add(___nl__15, ___nl__16));
#line 596
c_rt_lib0clear(&___nl__16);
#line 596
c_rt_lib0move(&___nl__17, c_rt_lib0hash_get_value_dec(___nl__7, ___get_global_const(72)));
#line 596
c_rt_lib0move(&___nl__16, type_checker_priv0get_print_tct_type_name(___nl__17));
#line 596
c_rt_lib0clear(&___nl__17);
#line 596
c_rt_lib0move(&___nl__15, c_rt_lib0concat_add(___nl__15, ___nl__16));
#line 596
c_rt_lib0clear(&___nl__16);
#line 596
c_rt_lib0delete(type_checker_priv0add_error(___ref___3, ___nl__15));
#line 596
c_rt_lib0clear(&___nl__15);
#line 597
goto label_75;
#line 597
label_75:
#line 597
c_rt_lib0clear(&___nl__14);
#line 597
c_rt_lib0clear(&___nl__13);
#line 598
goto label_72;
#line 598
label_72:
#line 598
c_rt_lib0clear(&___nl__11);
#line 598
c_rt_lib0clear(&___nl__12);
#line 599
c_rt_lib0clear(&___nl__0);
#line 599
c_rt_lib0clear(&___nl__4);
#line 599
c_rt_lib0clear(&___nl__5);
#line 599
c_rt_lib0clear(&___nl__6);
#line 599
c_rt_lib0clear(&___nl__7);
#line 599
c_rt_lib0clear(&___nl__9);
#line 599
c_rt_lib0clear(&___nl__10);
#line 599
return ___nl__8;
#line 599
c_rt_lib0clear(&___nl__10);
#line 600
goto label_66;
#line 600
label_67:
#line 601
c_rt_lib0move(&___nl__10,___get_global_const(1077));
#line 601
c_rt_lib0move(&___nl__12, c_rt_lib0hash_get_value_dec(___nl__7, ___get_global_const(72)));
#line 601
c_rt_lib0move(&___nl__11, type_checker_priv0get_print_tct_type_name(___nl__12));
#line 601
c_rt_lib0clear(&___nl__12);
#line 601
c_rt_lib0move(&___nl__10, c_rt_lib0concat_add(___nl__10, ___nl__11));
#line 601
c_rt_lib0clear(&___nl__11);
#line 601
c_rt_lib0delete(type_checker_priv0add_error(___ref___3, ___nl__10));
#line 601
c_rt_lib0clear(&___nl__10);
#line 603
c_rt_lib0clear(&___nl__0);
#line 603
c_rt_lib0clear(&___nl__4);
#line 603
c_rt_lib0clear(&___nl__5);
#line 603
c_rt_lib0clear(&___nl__6);
#line 603
c_rt_lib0clear(&___nl__7);
#line 603
c_rt_lib0clear(&___nl__9);
#line 603
return ___nl__8;
#line 604
goto label_66;
#line 604
label_66:
#line 604
c_rt_lib0clear(&___nl__9);
#line 604
c_rt_lib0clear(&___nl__7);
#line 604
c_rt_lib0clear(&___nl__8);
#line 604
c_rt_lib0clear(&___nl__6);
#line 605
goto label_1;
#line 605
label_13:
#line 605
c_rt_lib0move(&___nl__6, c_rt_lib0priv_as(___nl__0, ___get_global_const(780)));
#line 606
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__6, ___get_global_const(234)));
#line 606
c_rt_lib0move(&___nl__7, type_checker_priv0check_val(___nl__8, ___ref___1, ___ref___2, ___ref___3));
#line 606
c_rt_lib0clear(&___nl__8);
#line 607
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__6, ___get_global_const(401)));
#line 607
c_rt_lib0move(&___nl__9,___get_global_const(243));
#line 607
c_rt_lib0move(&___nl__8, c_rt_lib0eq(___nl__8, ___nl__9));
#line 607
c_rt_lib0clear(&___nl__9);
#line 607
c_rt_lib0move(&___nl__8, c_rt_lib0not(___nl__8));
#line 607
if(c_rt_lib0check_true_native(___nl__8)){ goto label_79;}
#line 608
c_rt_lib0move(&___nl__9, ptd_system0is_condition_type(___nl__7, ___ref___1, ___ref___3));
#line 608
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__9));
#line 608
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__9));
#line 608
if(c_rt_lib0check_true_native(___nl__9)){ goto label_81;}
#line 609
c_rt_lib0move(&___nl__10,___get_global_const(1078));
#line 609
c_rt_lib0move(&___nl__12, c_rt_lib0hash_get_value_dec(___nl__7, ___get_global_const(72)));
#line 609
c_rt_lib0move(&___nl__11, type_checker_priv0get_print_tct_type_name(___nl__12));
#line 609
c_rt_lib0clear(&___nl__12);
#line 609
c_rt_lib0move(&___nl__10, c_rt_lib0concat_add(___nl__10, ___nl__11));
#line 609
c_rt_lib0clear(&___nl__11);
#line 609
c_rt_lib0delete(type_checker_priv0add_error(___ref___3, ___nl__10));
#line 609
c_rt_lib0clear(&___nl__10);
#line 610
goto label_81;
#line 610
label_81:
#line 610
c_rt_lib0clear(&___nl__9);
#line 611
c_rt_lib0move(&___nl__9, tct0bool());
#line 611
c_rt_lib0copy(&___nl__10, ___nl__9);
#line 611
c_rt_lib0hash_set_value_dec(&___nl__4, ___get_global_const(72), ___nl__10);
#line 611
c_rt_lib0clear(&___nl__9);
#line 611
c_rt_lib0clear(&___nl__10);
#line 612
c_rt_lib0clear(&___nl__0);
#line 612
c_rt_lib0clear(&___nl__5);
#line 612
c_rt_lib0clear(&___nl__6);
#line 612
c_rt_lib0clear(&___nl__7);
#line 612
c_rt_lib0clear(&___nl__8);
#line 612
return ___nl__4;
#line 613
goto label_78;
#line 613
label_79:
#line 613
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__6, ___get_global_const(401)));
#line 613
c_rt_lib0move(&___nl__9,___get_global_const(184));
#line 613
c_rt_lib0move(&___nl__8, c_rt_lib0eq(___nl__8, ___nl__9));
#line 613
c_rt_lib0clear(&___nl__9);
#line 613
c_rt_lib0move(&___nl__8, c_rt_lib0not(___nl__8));
#line 613
if(c_rt_lib0check_true_native(___nl__8)){ goto label_82;}
#line 614
c_rt_lib0move(&___nl__10, tct0sim());
#line 614
c_rt_lib0move(&___nl__9, ptd_system0is_accepted(___nl__7, ___nl__10, ___ref___1, ___ref___3));
#line 614
c_rt_lib0clear(&___nl__10);
#line 614
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__9));
#line 614
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__9));
#line 614
if(c_rt_lib0check_true_native(___nl__9)){ goto label_84;}
#line 615
c_rt_lib0move(&___nl__10,___get_global_const(1079));
#line 615
c_rt_lib0move(&___nl__11, c_rt_lib0hash_get_value_dec(___nl__6, ___get_global_const(401)));
#line 615
c_rt_lib0move(&___nl__10, c_rt_lib0concat_add(___nl__10, ___nl__11));
#line 615
c_rt_lib0clear(&___nl__11);
#line 615
c_rt_lib0move(&___nl__11,___get_global_const(1080));
#line 615
c_rt_lib0move(&___nl__10, c_rt_lib0concat_add(___nl__10, ___nl__11));
#line 615
c_rt_lib0clear(&___nl__11);
#line 615
c_rt_lib0move(&___nl__12, c_rt_lib0hash_get_value_dec(___nl__7, ___get_global_const(72)));
#line 615
c_rt_lib0move(&___nl__11, type_checker_priv0get_print_tct_type_name(___nl__12));
#line 615
c_rt_lib0clear(&___nl__12);
#line 615
c_rt_lib0move(&___nl__10, c_rt_lib0concat_add(___nl__10, ___nl__11));
#line 615
c_rt_lib0clear(&___nl__11);
#line 615
c_rt_lib0delete(type_checker_priv0add_error(___ref___3, ___nl__10));
#line 615
c_rt_lib0clear(&___nl__10);
#line 616
goto label_84;
#line 616
label_84:
#line 616
c_rt_lib0clear(&___nl__9);
#line 617
c_rt_lib0move(&___nl__11, tct0sim());
#line 617
c_rt_lib0move(&___nl__10, c_rt_lib0hash_mk(1, ___get_global_const(5), ___nl__11));
#line 617
c_rt_lib0clear(&___nl__11);
#line 617
c_rt_lib0move(&___nl__9, tct0var(___nl__10));
#line 617
c_rt_lib0clear(&___nl__10);
#line 617
c_rt_lib0copy(&___nl__10, ___nl__9);
#line 617
c_rt_lib0hash_set_value_dec(&___nl__4, ___get_global_const(72), ___nl__10);
#line 617
c_rt_lib0clear(&___nl__9);
#line 617
c_rt_lib0clear(&___nl__10);
#line 618
c_rt_lib0clear(&___nl__0);
#line 618
c_rt_lib0clear(&___nl__5);
#line 618
c_rt_lib0clear(&___nl__6);
#line 618
c_rt_lib0clear(&___nl__7);
#line 618
c_rt_lib0clear(&___nl__8);
#line 618
return ___nl__4;
#line 619
goto label_78;
#line 619
label_82:
#line 620
c_rt_lib0move(&___nl__10, tct0sim());
#line 620
c_rt_lib0move(&___nl__9, ptd_system0is_accepted(___nl__7, ___nl__10, ___ref___1, ___ref___3));
#line 620
c_rt_lib0clear(&___nl__10);
#line 620
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__9));
#line 620
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__9));
#line 620
if(c_rt_lib0check_true_native(___nl__9)){ goto label_86;}
#line 621
c_rt_lib0move(&___nl__10,___get_global_const(1079));
#line 621
c_rt_lib0move(&___nl__11, c_rt_lib0hash_get_value_dec(___nl__6, ___get_global_const(401)));
#line 621
c_rt_lib0move(&___nl__10, c_rt_lib0concat_add(___nl__10, ___nl__11));
#line 621
c_rt_lib0clear(&___nl__11);
#line 621
c_rt_lib0move(&___nl__11,___get_global_const(1080));
#line 621
c_rt_lib0move(&___nl__10, c_rt_lib0concat_add(___nl__10, ___nl__11));
#line 621
c_rt_lib0clear(&___nl__11);
#line 621
c_rt_lib0move(&___nl__12, c_rt_lib0hash_get_value_dec(___nl__7, ___get_global_const(72)));
#line 621
c_rt_lib0move(&___nl__11, type_checker_priv0get_print_tct_type_name(___nl__12));
#line 621
c_rt_lib0clear(&___nl__12);
#line 621
c_rt_lib0move(&___nl__10, c_rt_lib0concat_add(___nl__10, ___nl__11));
#line 621
c_rt_lib0clear(&___nl__11);
#line 621
c_rt_lib0delete(type_checker_priv0add_error(___ref___3, ___nl__10));
#line 621
c_rt_lib0clear(&___nl__10);
#line 622
goto label_86;
#line 622
label_86:
#line 622
c_rt_lib0clear(&___nl__9);
#line 623
goto label_78;
#line 623
label_78:
#line 623
c_rt_lib0clear(&___nl__8);
#line 624
c_rt_lib0move(&___nl__8, tct0sim());
#line 624
c_rt_lib0copy(&___nl__9, ___nl__8);
#line 624
c_rt_lib0hash_set_value_dec(&___nl__4, ___get_global_const(72), ___nl__9);
#line 624
c_rt_lib0clear(&___nl__8);
#line 624
c_rt_lib0clear(&___nl__9);
#line 624
c_rt_lib0clear(&___nl__7);
#line 624
c_rt_lib0clear(&___nl__6);
#line 625
goto label_1;
#line 625
label_14:
#line 625
c_rt_lib0move(&___nl__6, c_rt_lib0priv_as(___nl__0, ___get_global_const(781)));
#line 626
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__6, ___get_global_const(99)));
#line 626
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__6, ___get_global_const(76)));
#line 626
c_rt_lib0delete(type_checker_priv0check_function_exists(___nl__7, ___nl__8, ___ref___1, ___ref___3));
#line 626
c_rt_lib0clear(&___nl__8);
#line 626
c_rt_lib0clear(&___nl__7);
#line 627
c_rt_lib0move(&___nl__7, tct0sim());
#line 627
c_rt_lib0copy(&___nl__8, ___nl__7);
#line 627
c_rt_lib0hash_set_value_dec(&___nl__4, ___get_global_const(72), ___nl__8);
#line 627
c_rt_lib0clear(&___nl__7);
#line 627
c_rt_lib0clear(&___nl__8);
#line 627
c_rt_lib0clear(&___nl__6);
#line 628
goto label_1;
#line 628
label_15:
#line 628
c_rt_lib0move(&___nl__6, c_rt_lib0priv_as(___nl__0, ___get_global_const(735)));
#line 629
c_rt_lib0move(&___nl__7, c_rt_lib0array_mk(0));
#line 630
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__6, ___get_global_const(73)));
#line 630
c_rt_lib0move(&___nl__10,___get_global_const(1));
#line 630
c_rt_lib0move(&___nl__11,___get_global_const(2));
#line 630
c_rt_lib0move(&___nl__12, c_rt_lib0array_len(___nl__8));
#line 630
label_89:
#line 630
c_rt_lib0move(&___nl__13, c_rt_lib0ge(___nl__10, ___nl__12));
#line 630
if(c_rt_lib0check_true_native(___nl__13)){ goto label_87;}
#line 630
c_rt_lib0move(&___nl__9, c_rt_lib0array_get(___nl__8, ___nl__10));
#line 631
c_rt_lib0move(&___nl__15, c_rt_lib0hash_get_value_dec(___nl__9, ___get_global_const(234)));
#line 631
c_rt_lib0move(&___nl__14, type_checker_priv0check_val(___nl__15, ___ref___1, ___ref___2, ___ref___3));
#line 631
c_rt_lib0clear(&___nl__15);
#line 631
c_rt_lib0delete(array0push(&___nl__7, ___nl__14));
#line 631
c_rt_lib0clear(&___nl__14);
#line 632
c_rt_lib0move(&___nl__10, c_rt_lib0add_mod(___nl__10, ___nl__11));
#line 632
goto label_89;
#line 632
label_87:
#line 632
c_rt_lib0clear(&___nl__8);
#line 632
c_rt_lib0clear(&___nl__9);
#line 632
c_rt_lib0clear(&___nl__10);
#line 632
c_rt_lib0clear(&___nl__11);
#line 632
c_rt_lib0clear(&___nl__12);
#line 632
c_rt_lib0clear(&___nl__13);
#line 633
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__6, ___get_global_const(99)));
#line 633
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__6, ___get_global_const(76)));
#line 633
c_rt_lib0move(&___nl__8, type_checker_priv0get_special_function_def(___nl__9, ___nl__10));
#line 633
c_rt_lib0clear(&___nl__10);
#line 633
c_rt_lib0clear(&___nl__9);
#line 634
c_rt_lib0move(&___nl__9, c_rt_lib0get_false());
#line 635
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__8, ___get_global_const(328)));
#line 635
c_rt_lib0move(&___nl__11, c_rt_lib0priv_is(___nl__10, ___get_global_const(329)));
#line 635
if(c_rt_lib0check_true_native(___nl__11)){ goto label_91;}
#line 641
c_rt_lib0move(&___nl__11, c_rt_lib0priv_is(___nl__10, ___get_global_const(330)));
#line 641
if(c_rt_lib0check_true_native(___nl__11)){ goto label_92;}
#line 641
c_rt_lib0move(&___nl__11,___get_global_const(74));
#line 641
c_rt_lib0move(&___nl__11, c_rt_lib0array_mk(2, ___nl__11, ___nl__10));
#line 641
nl_die_arg(___nl__11);
#line 635
label_91:
#line 636
c_rt_lib0move(&___nl__12, c_rt_lib0get_true());
#line 636
c_rt_lib0copy(&___nl__9, ___nl__12);
#line 636
c_rt_lib0clear(&___nl__12);
#line 637
c_rt_lib0move(&___nl__13, c_rt_lib0hash_get_value_dec(*___ref___1, ___get_global_const(336)));
#line 637
c_rt_lib0move(&___nl__14, c_rt_lib0hash_get_value_dec(___nl__6, ___get_global_const(99)));
#line 637
c_rt_lib0move(&___nl__12, hash0has_key(___nl__13, ___nl__14));
#line 637
c_rt_lib0clear(&___nl__14);
#line 637
c_rt_lib0clear(&___nl__13);
#line 637
c_rt_lib0move(&___nl__12, c_rt_lib0not(___nl__12));
#line 637
c_rt_lib0move(&___nl__12, c_rt_lib0not(___nl__12));
#line 637
if(c_rt_lib0check_true_native(___nl__12)){ goto label_94;}
#line 638
c_rt_lib0move(&___nl__13,___get_global_const(718));
#line 638
c_rt_lib0move(&___nl__14, c_rt_lib0hash_get_value_dec(___nl__6, ___get_global_const(99)));
#line 638
c_rt_lib0move(&___nl__13, c_rt_lib0concat_add(___nl__13, ___nl__14));
#line 638
c_rt_lib0clear(&___nl__14);
#line 638
c_rt_lib0move(&___nl__14,___get_global_const(719));
#line 638
c_rt_lib0move(&___nl__13, c_rt_lib0concat_add(___nl__13, ___nl__14));
#line 638
c_rt_lib0clear(&___nl__14);
#line 638
c_rt_lib0delete(type_checker_priv0add_error(___ref___3, ___nl__13));
#line 638
c_rt_lib0clear(&___nl__13);
#line 639
c_rt_lib0move(&___nl__13,___get_global_const(336));
#line 639
c_rt_lib0move(&___nl__13, c_rt_lib0get_ref_hash(*___ref___1, ___nl__13));
#line 639
c_rt_lib0move(&___nl__14, c_rt_lib0hash_get_value_dec(___nl__6, ___get_global_const(99)));
#line 639
c_rt_lib0move(&___nl__15, c_rt_lib0get_false());
#line 639
c_rt_lib0delete(hash0set_value(&___nl__13, ___nl__14, ___nl__15));
#line 639
c_rt_lib0clear(&___nl__15);
#line 639
c_rt_lib0clear(&___nl__14);
#line 639
c_rt_lib0move(&___nl__14,___get_global_const(336));
#line 639
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___1, ___nl__14, ___nl__13));
#line 639
c_rt_lib0clear(&___nl__14);
#line 639
c_rt_lib0clear(&___nl__13);
#line 640
goto label_94;
#line 640
label_94:
#line 640
c_rt_lib0clear(&___nl__12);
#line 641
goto label_90;
#line 641
label_92:
#line 642
c_rt_lib0move(&___nl__13, c_rt_lib0hash_get_value_dec(___nl__6, ___get_global_const(99)));
#line 642
c_rt_lib0move(&___nl__14, c_rt_lib0hash_get_value_dec(___nl__6, ___get_global_const(76)));
#line 642
c_rt_lib0move(&___nl__12, type_checker_priv0check_function_exists(___nl__13, ___nl__14, ___ref___1, ___ref___3));
#line 642
c_rt_lib0clear(&___nl__14);
#line 642
c_rt_lib0clear(&___nl__13);
#line 642
c_rt_lib0move(&___nl__12, c_rt_lib0not(___nl__12));
#line 642
c_rt_lib0move(&___nl__12, c_rt_lib0not(___nl__12));
#line 642
if(c_rt_lib0check_true_native(___nl__12)){ goto label_96;}
#line 642
c_rt_lib0clear(&___nl__0);
#line 642
c_rt_lib0clear(&___nl__5);
#line 642
c_rt_lib0clear(&___nl__6);
#line 642
c_rt_lib0clear(&___nl__7);
#line 642
c_rt_lib0clear(&___nl__8);
#line 642
c_rt_lib0clear(&___nl__9);
#line 642
c_rt_lib0clear(&___nl__10);
#line 642
c_rt_lib0clear(&___nl__11);
#line 642
c_rt_lib0clear(&___nl__12);
#line 642
return ___nl__4;
#line 642
goto label_96;
#line 642
label_96:
#line 642
c_rt_lib0clear(&___nl__12);
#line 643
c_rt_lib0move(&___nl__13, c_rt_lib0hash_get_value_dec(___nl__6, ___get_global_const(99)));
#line 643
c_rt_lib0move(&___nl__14, c_rt_lib0hash_get_value_dec(___nl__6, ___get_global_const(76)));
#line 643
c_rt_lib0move(&___nl__12, type_checker_priv0get_function_def(___nl__13, ___nl__14, *___ref___1));
#line 643
c_rt_lib0clear(&___nl__14);
#line 643
c_rt_lib0clear(&___nl__13);
#line 643
c_rt_lib0copy(&___nl__8, ___nl__12);
#line 643
c_rt_lib0clear(&___nl__12);
#line 644
goto label_90;
#line 644
label_90:
#line 644
c_rt_lib0clear(&___nl__10);
#line 644
c_rt_lib0clear(&___nl__11);
#line 645
c_rt_lib0move(&___nl__11, c_rt_lib0hash_get_value_dec(___nl__6, ___get_global_const(73)));
#line 645
c_rt_lib0move(&___nl__10, array0len(___nl__11));
#line 645
c_rt_lib0clear(&___nl__11);
#line 645
c_rt_lib0move(&___nl__12, c_rt_lib0hash_get_value_dec(___nl__8, ___get_global_const(73)));
#line 645
c_rt_lib0move(&___nl__11, array0len(___nl__12));
#line 645
c_rt_lib0clear(&___nl__12);
#line 645
c_rt_lib0move(&___nl__10, c_rt_lib0num_ne(___nl__10, ___nl__11));
#line 645
c_rt_lib0clear(&___nl__11);
#line 645
c_rt_lib0move(&___nl__10, c_rt_lib0not(___nl__10));
#line 645
if(c_rt_lib0check_true_native(___nl__10)){ goto label_98;}
#line 646
c_rt_lib0move(&___nl__11,___get_global_const(1081));
#line 646
c_rt_lib0move(&___nl__13, c_rt_lib0hash_get_value_dec(___nl__6, ___get_global_const(73)));
#line 646
c_rt_lib0move(&___nl__12, array0len(___nl__13));
#line 646
c_rt_lib0clear(&___nl__13);
#line 646
c_rt_lib0move(&___nl__11, c_rt_lib0concat_add(___nl__11, ___nl__12));
#line 646
c_rt_lib0clear(&___nl__12);
#line 646
c_rt_lib0move(&___nl__12,___get_global_const(1082));
#line 646
c_rt_lib0move(&___nl__11, c_rt_lib0concat_add(___nl__11, ___nl__12));
#line 646
c_rt_lib0clear(&___nl__12);
#line 646
c_rt_lib0move(&___nl__13, c_rt_lib0hash_get_value_dec(___nl__6, ___get_global_const(99)));
#line 646
c_rt_lib0move(&___nl__14, c_rt_lib0hash_get_value_dec(___nl__6, ___get_global_const(76)));
#line 646
c_rt_lib0move(&___nl__12, type_checker_priv0get_function_name(___nl__13, ___nl__14));
#line 646
c_rt_lib0clear(&___nl__14);
#line 646
c_rt_lib0clear(&___nl__13);
#line 646
c_rt_lib0move(&___nl__11, c_rt_lib0concat_add(___nl__11, ___nl__12));
#line 646
c_rt_lib0clear(&___nl__12);
#line 646
c_rt_lib0delete(type_checker_priv0add_error(___ref___3, ___nl__11));
#line 646
c_rt_lib0clear(&___nl__11);
#line 648
c_rt_lib0clear(&___nl__0);
#line 648
c_rt_lib0clear(&___nl__5);
#line 648
c_rt_lib0clear(&___nl__6);
#line 648
c_rt_lib0clear(&___nl__7);
#line 648
c_rt_lib0clear(&___nl__8);
#line 648
c_rt_lib0clear(&___nl__9);
#line 648
c_rt_lib0clear(&___nl__10);
#line 648
return ___nl__4;
#line 649
goto label_98;
#line 649
label_98:
#line 649
c_rt_lib0clear(&___nl__10);
#line 650
c_rt_lib0move(&___nl__10, c_rt_lib0hash_mk(0));
#line 651
c_rt_lib0move(&___nl__12, c_rt_lib0hash_get_value_dec(___nl__6, ___get_global_const(73)));
#line 651
c_rt_lib0move(&___nl__11, array0len(___nl__12));
#line 651
c_rt_lib0clear(&___nl__12);
#line 651
c_rt_lib0move(&___nl__12,___get_global_const(1));
#line 651
c_rt_lib0move(&___nl__13,___get_global_const(2));
#line 651
label_101:
#line 651
c_rt_lib0move(&___nl__14, c_rt_lib0ge(___nl__12, ___nl__11));
#line 651
if(c_rt_lib0check_true_native(___nl__14)){ goto label_99;}
#line 652
c_rt_lib0move(&___nl__15, c_rt_lib0hash_get_value_dec(___nl__6, ___get_global_const(73)));
#line 652
c_rt_lib0move(&___nl__15, c_rt_lib0array_get(___nl__15, ___nl__12));
#line 653
c_rt_lib0move(&___nl__16, c_rt_lib0hash_get_value_dec(___nl__8, ___get_global_const(73)));
#line 653
c_rt_lib0move(&___nl__16, c_rt_lib0array_get(___nl__16, ___nl__12));
#line 654
c_rt_lib0move(&___nl__18, c_rt_lib0hash_get_value_dec(___nl__16, ___get_global_const(257)));
#line 654
c_rt_lib0move(&___nl__19, c_rt_lib0hash_get_value_dec(___nl__15, ___get_global_const(257)));
#line 654
c_rt_lib0move(&___nl__17, enum0eq(___nl__18, ___nl__19));
#line 654
c_rt_lib0clear(&___nl__19);
#line 654
c_rt_lib0clear(&___nl__18);
#line 654
if(c_rt_lib0check_true_native(___nl__17)){ goto label_104;}
#line 654
c_rt_lib0move(&___nl__19, c_rt_lib0hash_get_value_dec(___nl__16, ___get_global_const(257)));
#line 654
c_rt_lib0move(&___nl__20, c_rt_lib0ov_mk_none(___get_global_const(1083)));
#line 654
c_rt_lib0move(&___nl__17, enum0eq(___nl__19, ___nl__20));
#line 654
c_rt_lib0clear(&___nl__20);
#line 654
c_rt_lib0clear(&___nl__19);
#line 654
c_rt_lib0move(&___nl__18, c_rt_lib0not(___nl__17));
#line 654
if(c_rt_lib0check_true_native(___nl__18)){ goto label_105;}
#line 654
c_rt_lib0move(&___nl__19, c_rt_lib0hash_get_value_dec(___nl__15, ___get_global_const(257)));
#line 654
c_rt_lib0move(&___nl__20, c_rt_lib0ov_mk_none(___get_global_const(37)));
#line 654
c_rt_lib0move(&___nl__17, enum0eq(___nl__19, ___nl__20));
#line 654
c_rt_lib0clear(&___nl__20);
#line 654
c_rt_lib0clear(&___nl__19);
#line 654
label_105:
#line 654
c_rt_lib0clear(&___nl__18);
#line 654
label_104:
#line 654
c_rt_lib0move(&___nl__17, c_rt_lib0not(___nl__17));
#line 654
c_rt_lib0move(&___nl__17, c_rt_lib0not(___nl__17));
#line 654
if(c_rt_lib0check_true_native(___nl__17)){ goto label_103;}
#line 654
c_rt_lib0move(&___nl__18,___get_global_const(1084));
#line 654
c_rt_lib0move(&___nl__19,___get_global_const(2));
#line 654
c_rt_lib0move(&___nl__19, c_rt_lib0add(___nl__12, ___nl__19));
#line 654
c_rt_lib0move(&___nl__18, c_rt_lib0concat_add(___nl__18, ___nl__19));
#line 654
c_rt_lib0clear(&___nl__19);
#line 654
c_rt_lib0move(&___nl__19,___get_global_const(1085));
#line 654
c_rt_lib0move(&___nl__18, c_rt_lib0concat_add(___nl__18, ___nl__19));
#line 654
c_rt_lib0clear(&___nl__19);
#line 654
c_rt_lib0move(&___nl__19, c_rt_lib0hash_get_value_dec(___nl__16, ___get_global_const(76)));
#line 654
c_rt_lib0move(&___nl__18, c_rt_lib0concat_add(___nl__18, ___nl__19));
#line 654
c_rt_lib0clear(&___nl__19);
#line 654
c_rt_lib0move(&___nl__19,___get_global_const(1086));
#line 654
c_rt_lib0move(&___nl__18, c_rt_lib0concat_add(___nl__18, ___nl__19));
#line 654
c_rt_lib0clear(&___nl__19);
#line 654
c_rt_lib0delete(type_checker_priv0add_error(___ref___3, ___nl__18));
#line 654
c_rt_lib0clear(&___nl__18);
#line 654
goto label_103;
#line 654
label_103:
#line 654
c_rt_lib0clear(&___nl__17);
#line 660
c_rt_lib0copy(&___nl__18, ___nl__9);
#line 660
c_rt_lib0move(&___nl__18, c_rt_lib0not(___nl__18));
#line 660
if(c_rt_lib0check_true_native(___nl__18)){ goto label_107;}
#line 661
c_rt_lib0move(&___nl__19, c_rt_lib0array_get(___nl__7, ___nl__12));
#line 662
c_rt_lib0move(&___nl__20, c_rt_lib0ov_mk_none(___get_global_const(985)));
#line 662
c_rt_lib0copy(&___nl__21, ___nl__20);
#line 662
c_rt_lib0hash_set_value_dec(&___nl__19, ___get_global_const(39), ___nl__21);
#line 662
c_rt_lib0clear(&___nl__20);
#line 662
c_rt_lib0clear(&___nl__21);
#line 663
c_rt_lib0move(&___nl__21, c_rt_lib0hash_get_value_dec(___nl__16, ___get_global_const(72)));
#line 663
c_rt_lib0move(&___nl__20, ptd_system0is_accepted_info(___nl__19, ___nl__21, ___ref___1, ___ref___3));
#line 663
c_rt_lib0clear(&___nl__21);
#line 663
c_rt_lib0copy(&___nl__17, ___nl__20);
#line 663
c_rt_lib0clear(&___nl__20);
#line 663
c_rt_lib0clear(&___nl__19);
#line 664
goto label_106;
#line 664
label_107:
#line 665
c_rt_lib0move(&___nl__20, c_rt_lib0hash_get_value_dec(___nl__16, ___get_global_const(257)));
#line 665
c_rt_lib0move(&___nl__21,___get_global_const(5));
#line 665
c_rt_lib0move(&___nl__19, ov0is(___nl__20, ___nl__21));
#line 665
c_rt_lib0clear(&___nl__21);
#line 665
c_rt_lib0clear(&___nl__20);
#line 665
c_rt_lib0move(&___nl__19, c_rt_lib0not(___nl__19));
#line 665
if(c_rt_lib0check_true_native(___nl__19)){ goto label_109;}
#line 666
c_rt_lib0move(&___nl__21, c_rt_lib0hash_get_value_dec(*___ref___3, ___get_global_const(17)));
#line 666
c_rt_lib0move(&___nl__20, array0len(___nl__21));
#line 666
c_rt_lib0clear(&___nl__21);
#line 667
c_rt_lib0move(&___nl__22, c_rt_lib0hash_get_value_dec(___nl__15, ___get_global_const(234)));
#line 667
c_rt_lib0move(&___nl__21, type_checker_priv0rec_get_var_from_lval(___nl__22, ___ref___3));
#line 667
c_rt_lib0clear(&___nl__22);
#line 668
c_rt_lib0move(&___nl__23, c_rt_lib0hash_get_value_dec(*___ref___3, ___get_global_const(17)));
#line 668
c_rt_lib0move(&___nl__22, array0len(___nl__23));
#line 668
c_rt_lib0clear(&___nl__23);
#line 668
c_rt_lib0move(&___nl__22, c_rt_lib0num_eq(___nl__20, ___nl__22));
#line 668
c_rt_lib0move(&___nl__22, c_rt_lib0not(___nl__22));
#line 668
if(c_rt_lib0check_true_native(___nl__22)){ goto label_111;}
#line 669
c_rt_lib0move(&___nl__25,___get_global_const(1));
#line 669
c_rt_lib0move(&___nl__24, c_rt_lib0array_get(___nl__21, ___nl__25));
#line 669
c_rt_lib0clear(&___nl__25);
#line 669
c_rt_lib0move(&___nl__25,___get_global_const(772));
#line 669
c_rt_lib0move(&___nl__23, ov0as(___nl__24, ___nl__25));
#line 669
c_rt_lib0clear(&___nl__25);
#line 669
c_rt_lib0clear(&___nl__24);
#line 670
c_rt_lib0move(&___nl__24, hash0has_key(___nl__10, ___nl__23));
#line 670
c_rt_lib0move(&___nl__24, c_rt_lib0not(___nl__24));
#line 670
if(c_rt_lib0check_true_native(___nl__24)){ goto label_113;}
#line 671
c_rt_lib0move(&___nl__25,___get_global_const(1087));
#line 671
c_rt_lib0move(&___nl__25, c_rt_lib0concat_add(___nl__25, ___nl__23));
#line 671
c_rt_lib0delete(type_checker_priv0add_warning(___ref___3, ___nl__25));
#line 671
c_rt_lib0clear(&___nl__25);
#line 672
goto label_113;
#line 672
label_113:
#line 672
c_rt_lib0clear(&___nl__24);
#line 673
c_rt_lib0move(&___nl__24,___get_global_const(1));
#line 673
c_rt_lib0delete(hash0set_value(&___nl__10, ___nl__23, ___nl__24));
#line 673
c_rt_lib0clear(&___nl__24);
#line 674
c_rt_lib0move(&___nl__24, c_rt_lib0hash_get_value_dec(___nl__15, ___get_global_const(234)));
#line 674
c_rt_lib0move(&___nl__25, c_rt_lib0array_get(___nl__7, ___nl__12));
#line 674
c_rt_lib0move(&___nl__26, c_rt_lib0array_get(___nl__7, ___nl__12));
#line 674
c_rt_lib0delete(type_checker_priv0set_type_to_lval(___nl__24, ___nl__25, ___nl__26, ___ref___1, ___ref___2, ___ref___3));
#line 674
c_rt_lib0clear(&___nl__26);
#line 674
c_rt_lib0clear(&___nl__25);
#line 674
c_rt_lib0clear(&___nl__24);
#line 674
c_rt_lib0clear(&___nl__23);
#line 675
goto label_111;
#line 675
label_111:
#line 675
c_rt_lib0clear(&___nl__22);
#line 675
c_rt_lib0clear(&___nl__20);
#line 675
c_rt_lib0clear(&___nl__21);
#line 676
goto label_109;
#line 676
label_109:
#line 676
c_rt_lib0clear(&___nl__19);
#line 677
c_rt_lib0move(&___nl__20, c_rt_lib0hash_get_value_dec(___nl__16, ___get_global_const(72)));
#line 677
c_rt_lib0move(&___nl__21, c_rt_lib0array_get(___nl__7, ___nl__12));
#line 677
c_rt_lib0move(&___nl__19, ptd_system0check_assignment(___nl__20, ___nl__21, ___ref___1, ___ref___3));
#line 677
c_rt_lib0clear(&___nl__21);
#line 677
c_rt_lib0clear(&___nl__20);
#line 677
c_rt_lib0copy(&___nl__17, ___nl__19);
#line 677
c_rt_lib0clear(&___nl__19);
#line 678
goto label_106;
#line 678
label_106:
#line 678
c_rt_lib0clear(&___nl__18);
#line 679
c_rt_lib0move(&___nl__19,___get_global_const(43));
#line 679
c_rt_lib0move(&___nl__18, ov0is(___nl__17, ___nl__19));
#line 679
c_rt_lib0clear(&___nl__19);
#line 679
c_rt_lib0move(&___nl__18, c_rt_lib0not(___nl__18));
#line 679
if(c_rt_lib0check_true_native(___nl__18)){ goto label_115;}
#line 680
c_rt_lib0move(&___nl__19,___get_global_const(1088));
#line 680
c_rt_lib0move(&___nl__21, c_rt_lib0hash_get_value_dec(___nl__6, ___get_global_const(99)));
#line 680
c_rt_lib0move(&___nl__22, c_rt_lib0hash_get_value_dec(___nl__6, ___get_global_const(76)));
#line 680
c_rt_lib0move(&___nl__20, type_checker_priv0get_function_name(___nl__21, ___nl__22));
#line 680
c_rt_lib0clear(&___nl__22);
#line 680
c_rt_lib0clear(&___nl__21);
#line 680
c_rt_lib0move(&___nl__19, c_rt_lib0concat_add(___nl__19, ___nl__20));
#line 680
c_rt_lib0clear(&___nl__20);
#line 680
c_rt_lib0move(&___nl__20,___get_global_const(1089));
#line 680
c_rt_lib0move(&___nl__19, c_rt_lib0concat_add(___nl__19, ___nl__20));
#line 680
c_rt_lib0clear(&___nl__20);
#line 680
c_rt_lib0move(&___nl__20,___get_global_const(2));
#line 680
c_rt_lib0move(&___nl__20, c_rt_lib0add(___nl__12, ___nl__20));
#line 680
c_rt_lib0move(&___nl__19, c_rt_lib0concat_add(___nl__19, ___nl__20));
#line 680
c_rt_lib0clear(&___nl__20);
#line 680
c_rt_lib0move(&___nl__20,___get_global_const(1085));
#line 680
c_rt_lib0move(&___nl__19, c_rt_lib0concat_add(___nl__19, ___nl__20));
#line 680
c_rt_lib0clear(&___nl__20);
#line 680
c_rt_lib0move(&___nl__20, c_rt_lib0hash_get_value_dec(___nl__16, ___get_global_const(76)));
#line 680
c_rt_lib0move(&___nl__19, c_rt_lib0concat_add(___nl__19, ___nl__20));
#line 680
c_rt_lib0clear(&___nl__20);
#line 680
c_rt_lib0move(&___nl__20,___get_global_const(1090));
#line 680
c_rt_lib0move(&___nl__19, c_rt_lib0concat_add(___nl__19, ___nl__20));
#line 680
c_rt_lib0clear(&___nl__20);
#line 680
c_rt_lib0move(&___nl__20, type_checker_priv0get_print_check_info(___nl__17));
#line 680
c_rt_lib0move(&___nl__19, c_rt_lib0concat_add(___nl__19, ___nl__20));
#line 680
c_rt_lib0clear(&___nl__20);
#line 680
c_rt_lib0delete(type_checker_priv0add_error(___ref___3, ___nl__19));
#line 680
c_rt_lib0clear(&___nl__19);
#line 682
goto label_115;
#line 682
label_115:
#line 682
c_rt_lib0clear(&___nl__18);
#line 682
c_rt_lib0clear(&___nl__15);
#line 682
c_rt_lib0clear(&___nl__16);
#line 682
c_rt_lib0clear(&___nl__17);
#line 683
c_rt_lib0move(&___nl__12, c_rt_lib0add_mod(___nl__12, ___nl__13));
#line 683
goto label_101;
#line 683
label_99:
#line 683
c_rt_lib0clear(&___nl__11);
#line 683
c_rt_lib0clear(&___nl__12);
#line 683
c_rt_lib0clear(&___nl__13);
#line 683
c_rt_lib0clear(&___nl__14);
#line 684
c_rt_lib0move(&___nl__13, c_rt_lib0hash_get_value_dec(___nl__8, ___get_global_const(712)));
#line 684
c_rt_lib0move(&___nl__14, c_rt_lib0ov_mk_none(___get_global_const(979)));
#line 684
c_rt_lib0move(&___nl__12, c_rt_lib0hash_mk(2, ___get_global_const(72), ___nl__13, ___get_global_const(39), ___nl__14));
#line 684
c_rt_lib0clear(&___nl__13);
#line 684
c_rt_lib0clear(&___nl__14);
#line 684
c_rt_lib0move(&___nl__11, type_checker_priv0check_special_function(___nl__12, ___nl__6, ___nl__7, ___ref___1, ___ref___2, ___ref___3));
#line 684
c_rt_lib0clear(&___nl__12);
#line 684
c_rt_lib0copy(&___nl__4, ___nl__11);
#line 684
c_rt_lib0clear(&___nl__11);
#line 684
c_rt_lib0clear(&___nl__7);
#line 684
c_rt_lib0clear(&___nl__8);
#line 684
c_rt_lib0clear(&___nl__9);
#line 684
c_rt_lib0clear(&___nl__10);
#line 684
c_rt_lib0clear(&___nl__6);
#line 685
goto label_1;
#line 685
label_16:
#line 685
c_rt_lib0move(&___nl__6, c_rt_lib0priv_as(___nl__0, ___get_global_const(694)));
#line 686
c_rt_lib0move(&___nl__7, tct0sim());
#line 686
c_rt_lib0copy(&___nl__8, ___nl__7);
#line 686
c_rt_lib0hash_set_value_dec(&___nl__4, ___get_global_const(72), ___nl__8);
#line 686
c_rt_lib0clear(&___nl__7);
#line 686
c_rt_lib0clear(&___nl__8);
#line 686
c_rt_lib0clear(&___nl__6);
#line 687
goto label_1;
#line 687
label_17:
#line 687
c_rt_lib0move(&___nl__6, c_rt_lib0priv_as(___nl__0, ___get_global_const(782)));
#line 688
c_rt_lib0move(&___nl__7, type_checker_priv0check_val(___nl__6, ___ref___1, ___ref___2, ___ref___3));
#line 689
c_rt_lib0move(&___nl__9, tct0sim());
#line 689
c_rt_lib0move(&___nl__8, ptd_system0is_accepted(___nl__7, ___nl__9, ___ref___1, ___ref___3));
#line 689
c_rt_lib0clear(&___nl__9);
#line 689
c_rt_lib0move(&___nl__8, c_rt_lib0not(___nl__8));
#line 689
c_rt_lib0move(&___nl__8, c_rt_lib0not(___nl__8));
#line 689
if(c_rt_lib0check_true_native(___nl__8)){ goto label_117;}
#line 690
c_rt_lib0move(&___nl__9,___get_global_const(1091));
#line 690
c_rt_lib0move(&___nl__11, c_rt_lib0hash_get_value_dec(___nl__7, ___get_global_const(72)));
#line 690
c_rt_lib0move(&___nl__10, type_checker_priv0get_print_tct_type_name(___nl__11));
#line 690
c_rt_lib0clear(&___nl__11);
#line 690
c_rt_lib0move(&___nl__9, c_rt_lib0concat_add(___nl__9, ___nl__10));
#line 690
c_rt_lib0clear(&___nl__10);
#line 690
c_rt_lib0delete(type_checker_priv0add_error(___ref___3, ___nl__9));
#line 690
c_rt_lib0clear(&___nl__9);
#line 691
goto label_117;
#line 691
label_117:
#line 691
c_rt_lib0clear(&___nl__8);
#line 692
c_rt_lib0move(&___nl__8, tct0sim());
#line 692
c_rt_lib0copy(&___nl__9, ___nl__8);
#line 692
c_rt_lib0hash_set_value_dec(&___nl__4, ___get_global_const(72), ___nl__9);
#line 692
c_rt_lib0clear(&___nl__8);
#line 692
c_rt_lib0clear(&___nl__9);
#line 692
c_rt_lib0clear(&___nl__7);
#line 692
c_rt_lib0clear(&___nl__6);
#line 693
goto label_1;
#line 693
label_18:
#line 693
c_rt_lib0move(&___nl__6, c_rt_lib0priv_as(___nl__0, ___get_global_const(783)));
#line 694
c_rt_lib0move(&___nl__7, type_checker_priv0check_val(___nl__6, ___ref___1, ___ref___2, ___ref___3));
#line 695
c_rt_lib0move(&___nl__9, tct0sim());
#line 695
c_rt_lib0move(&___nl__8, ptd_system0is_accepted(___nl__7, ___nl__9, ___ref___1, ___ref___3));
#line 695
c_rt_lib0clear(&___nl__9);
#line 695
c_rt_lib0move(&___nl__8, c_rt_lib0not(___nl__8));
#line 695
c_rt_lib0move(&___nl__8, c_rt_lib0not(___nl__8));
#line 695
if(c_rt_lib0check_true_native(___nl__8)){ goto label_119;}
#line 696
c_rt_lib0move(&___nl__9,___get_global_const(1092));
#line 696
c_rt_lib0move(&___nl__11, c_rt_lib0hash_get_value_dec(___nl__7, ___get_global_const(72)));
#line 696
c_rt_lib0move(&___nl__10, type_checker_priv0get_print_tct_type_name(___nl__11));
#line 696
c_rt_lib0clear(&___nl__11);
#line 696
c_rt_lib0move(&___nl__9, c_rt_lib0concat_add(___nl__9, ___nl__10));
#line 696
c_rt_lib0clear(&___nl__10);
#line 696
c_rt_lib0delete(type_checker_priv0add_error(___ref___3, ___nl__9));
#line 696
c_rt_lib0clear(&___nl__9);
#line 697
goto label_119;
#line 697
label_119:
#line 697
c_rt_lib0clear(&___nl__8);
#line 698
c_rt_lib0move(&___nl__8, tct0sim());
#line 698
c_rt_lib0copy(&___nl__9, ___nl__8);
#line 698
c_rt_lib0hash_set_value_dec(&___nl__4, ___get_global_const(72), ___nl__9);
#line 698
c_rt_lib0clear(&___nl__8);
#line 698
c_rt_lib0clear(&___nl__9);
#line 698
c_rt_lib0clear(&___nl__7);
#line 698
c_rt_lib0clear(&___nl__6);
#line 699
goto label_1;
#line 699
label_1:
#line 699
c_rt_lib0clear(&___nl__5);
#line 700
c_rt_lib0clear(&___nl__0);
#line 700
return ___nl__4;
#line 700
c_rt_lib0clear(&___nl__4);
#line 700
c_rt_lib0clear(&___nl__0);
#line 700
return NULL;
}

ImmT type_checker_priv0get_special_functions(){
type_checker_priv0__const__init();
return type_checker_priv0__const__sing(0);}
ImmT type_checker_priv0get_special_functions0cal() {
type_checker_priv0__const__init();
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
#line 704
c_rt_lib0move(&___nl__0, c_rt_lib0hash_mk(0));
#line 705
c_rt_lib0move(&___nl__1,___get_global_const(1093));
#line 705
c_rt_lib0move(&___nl__3, tct0tct_im());
#line 705
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_none(___get_global_const(37)));
#line 705
c_rt_lib0move(&___nl__7, tct0tct_im());
#line 705
c_rt_lib0move(&___nl__8,___get_global_const(0));
#line 705
c_rt_lib0move(&___nl__5, c_rt_lib0hash_mk(3, ___get_global_const(257), ___nl__6, ___get_global_const(72), ___nl__7, ___get_global_const(76), ___nl__8));
#line 705
c_rt_lib0clear(&___nl__6);
#line 705
c_rt_lib0clear(&___nl__7);
#line 705
c_rt_lib0clear(&___nl__8);
#line 705
c_rt_lib0move(&___nl__7, c_rt_lib0ov_mk_none(___get_global_const(37)));
#line 705
c_rt_lib0move(&___nl__8, tct0tct_im());
#line 705
c_rt_lib0move(&___nl__9,___get_global_const(0));
#line 705
c_rt_lib0move(&___nl__6, c_rt_lib0hash_mk(3, ___get_global_const(257), ___nl__7, ___get_global_const(72), ___nl__8, ___get_global_const(76), ___nl__9));
#line 705
c_rt_lib0clear(&___nl__7);
#line 705
c_rt_lib0clear(&___nl__8);
#line 705
c_rt_lib0clear(&___nl__9);
#line 705
c_rt_lib0move(&___nl__4, c_rt_lib0array_mk(2, ___nl__5, ___nl__6));
#line 705
c_rt_lib0clear(&___nl__5);
#line 705
c_rt_lib0clear(&___nl__6);
#line 705
c_rt_lib0move(&___nl__2, c_rt_lib0hash_mk(2, ___get_global_const(166), ___nl__3, ___get_global_const(1023), ___nl__4));
#line 705
c_rt_lib0clear(&___nl__3);
#line 705
c_rt_lib0clear(&___nl__4);
#line 705
c_rt_lib0delete(hash0set_value(&___nl__0, ___nl__1, ___nl__2));
#line 705
c_rt_lib0clear(&___nl__2);
#line 705
c_rt_lib0clear(&___nl__1);
#line 708
c_rt_lib0move(&___nl__1,___get_global_const(1094));
#line 708
c_rt_lib0move(&___nl__3, tct0tct_im());
#line 708
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_none(___get_global_const(37)));
#line 708
c_rt_lib0move(&___nl__7, tct0tct_im());
#line 708
c_rt_lib0move(&___nl__8,___get_global_const(0));
#line 708
c_rt_lib0move(&___nl__5, c_rt_lib0hash_mk(3, ___get_global_const(257), ___nl__6, ___get_global_const(72), ___nl__7, ___get_global_const(76), ___nl__8));
#line 708
c_rt_lib0clear(&___nl__6);
#line 708
c_rt_lib0clear(&___nl__7);
#line 708
c_rt_lib0clear(&___nl__8);
#line 708
c_rt_lib0move(&___nl__7, c_rt_lib0ov_mk_none(___get_global_const(37)));
#line 708
c_rt_lib0move(&___nl__8, tct0tct_im());
#line 708
c_rt_lib0move(&___nl__9,___get_global_const(0));
#line 708
c_rt_lib0move(&___nl__6, c_rt_lib0hash_mk(3, ___get_global_const(257), ___nl__7, ___get_global_const(72), ___nl__8, ___get_global_const(76), ___nl__9));
#line 708
c_rt_lib0clear(&___nl__7);
#line 708
c_rt_lib0clear(&___nl__8);
#line 708
c_rt_lib0clear(&___nl__9);
#line 708
c_rt_lib0move(&___nl__4, c_rt_lib0array_mk(2, ___nl__5, ___nl__6));
#line 708
c_rt_lib0clear(&___nl__5);
#line 708
c_rt_lib0clear(&___nl__6);
#line 708
c_rt_lib0move(&___nl__2, c_rt_lib0hash_mk(2, ___get_global_const(166), ___nl__3, ___get_global_const(1023), ___nl__4));
#line 708
c_rt_lib0clear(&___nl__3);
#line 708
c_rt_lib0clear(&___nl__4);
#line 708
c_rt_lib0delete(hash0set_value(&___nl__0, ___nl__1, ___nl__2));
#line 708
c_rt_lib0clear(&___nl__2);
#line 708
c_rt_lib0clear(&___nl__1);
#line 712
c_rt_lib0move(&___nl__1,___get_global_const(655));
#line 712
c_rt_lib0move(&___nl__3, tct0void());
#line 712
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_none(___get_global_const(5)));
#line 712
c_rt_lib0move(&___nl__8, tct0tct_im());
#line 712
c_rt_lib0move(&___nl__7, tct0arr(___nl__8));
#line 712
c_rt_lib0clear(&___nl__8);
#line 712
c_rt_lib0move(&___nl__8,___get_global_const(0));
#line 712
c_rt_lib0move(&___nl__5, c_rt_lib0hash_mk(3, ___get_global_const(257), ___nl__6, ___get_global_const(72), ___nl__7, ___get_global_const(76), ___nl__8));
#line 712
c_rt_lib0clear(&___nl__6);
#line 712
c_rt_lib0clear(&___nl__7);
#line 712
c_rt_lib0clear(&___nl__8);
#line 712
c_rt_lib0move(&___nl__7, c_rt_lib0ov_mk_none(___get_global_const(37)));
#line 712
c_rt_lib0move(&___nl__8, tct0tct_im());
#line 712
c_rt_lib0move(&___nl__9,___get_global_const(0));
#line 712
c_rt_lib0move(&___nl__6, c_rt_lib0hash_mk(3, ___get_global_const(257), ___nl__7, ___get_global_const(72), ___nl__8, ___get_global_const(76), ___nl__9));
#line 712
c_rt_lib0clear(&___nl__7);
#line 712
c_rt_lib0clear(&___nl__8);
#line 712
c_rt_lib0clear(&___nl__9);
#line 712
c_rt_lib0move(&___nl__4, c_rt_lib0array_mk(2, ___nl__5, ___nl__6));
#line 712
c_rt_lib0clear(&___nl__5);
#line 712
c_rt_lib0clear(&___nl__6);
#line 712
c_rt_lib0move(&___nl__2, c_rt_lib0hash_mk(2, ___get_global_const(166), ___nl__3, ___get_global_const(1023), ___nl__4));
#line 712
c_rt_lib0clear(&___nl__3);
#line 712
c_rt_lib0clear(&___nl__4);
#line 712
c_rt_lib0delete(hash0set_value(&___nl__0, ___nl__1, ___nl__2));
#line 712
c_rt_lib0clear(&___nl__2);
#line 712
c_rt_lib0clear(&___nl__1);
#line 715
c_rt_lib0move(&___nl__1,___get_global_const(657));
#line 715
c_rt_lib0move(&___nl__3, tct0tct_im());
#line 715
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_none(___get_global_const(37)));
#line 715
c_rt_lib0move(&___nl__8, tct0tct_im());
#line 715
c_rt_lib0move(&___nl__7, tct0arr(___nl__8));
#line 715
c_rt_lib0clear(&___nl__8);
#line 715
c_rt_lib0move(&___nl__8,___get_global_const(0));
#line 715
c_rt_lib0move(&___nl__5, c_rt_lib0hash_mk(3, ___get_global_const(257), ___nl__6, ___get_global_const(72), ___nl__7, ___get_global_const(76), ___nl__8));
#line 715
c_rt_lib0clear(&___nl__6);
#line 715
c_rt_lib0clear(&___nl__7);
#line 715
c_rt_lib0clear(&___nl__8);
#line 715
c_rt_lib0move(&___nl__7, c_rt_lib0ov_mk_none(___get_global_const(37)));
#line 715
c_rt_lib0move(&___nl__8, tct0sim());
#line 715
c_rt_lib0move(&___nl__9,___get_global_const(0));
#line 715
c_rt_lib0move(&___nl__6, c_rt_lib0hash_mk(3, ___get_global_const(257), ___nl__7, ___get_global_const(72), ___nl__8, ___get_global_const(76), ___nl__9));
#line 715
c_rt_lib0clear(&___nl__7);
#line 715
c_rt_lib0clear(&___nl__8);
#line 715
c_rt_lib0clear(&___nl__9);
#line 715
c_rt_lib0move(&___nl__8, c_rt_lib0ov_mk_none(___get_global_const(37)));
#line 715
c_rt_lib0move(&___nl__9, tct0sim());
#line 715
c_rt_lib0move(&___nl__10,___get_global_const(0));
#line 715
c_rt_lib0move(&___nl__7, c_rt_lib0hash_mk(3, ___get_global_const(257), ___nl__8, ___get_global_const(72), ___nl__9, ___get_global_const(76), ___nl__10));
#line 715
c_rt_lib0clear(&___nl__8);
#line 715
c_rt_lib0clear(&___nl__9);
#line 715
c_rt_lib0clear(&___nl__10);
#line 715
c_rt_lib0move(&___nl__4, c_rt_lib0array_mk(3, ___nl__5, ___nl__6, ___nl__7));
#line 715
c_rt_lib0clear(&___nl__5);
#line 715
c_rt_lib0clear(&___nl__6);
#line 715
c_rt_lib0clear(&___nl__7);
#line 715
c_rt_lib0move(&___nl__2, c_rt_lib0hash_mk(2, ___get_global_const(166), ___nl__3, ___get_global_const(1023), ___nl__4));
#line 715
c_rt_lib0clear(&___nl__3);
#line 715
c_rt_lib0clear(&___nl__4);
#line 715
c_rt_lib0delete(hash0set_value(&___nl__0, ___nl__1, ___nl__2));
#line 715
c_rt_lib0clear(&___nl__2);
#line 715
c_rt_lib0clear(&___nl__1);
#line 720
c_rt_lib0move(&___nl__1,___get_global_const(1095));
#line 720
c_rt_lib0move(&___nl__3, tct0sim());
#line 720
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_none(___get_global_const(37)));
#line 720
c_rt_lib0move(&___nl__7, tct0sim());
#line 720
c_rt_lib0move(&___nl__8,___get_global_const(0));
#line 720
c_rt_lib0move(&___nl__5, c_rt_lib0hash_mk(3, ___get_global_const(257), ___nl__6, ___get_global_const(72), ___nl__7, ___get_global_const(76), ___nl__8));
#line 720
c_rt_lib0clear(&___nl__6);
#line 720
c_rt_lib0clear(&___nl__7);
#line 720
c_rt_lib0clear(&___nl__8);
#line 720
c_rt_lib0move(&___nl__7, c_rt_lib0ov_mk_none(___get_global_const(37)));
#line 720
c_rt_lib0move(&___nl__9, tct0sim());
#line 720
c_rt_lib0move(&___nl__8, tct0arr(___nl__9));
#line 720
c_rt_lib0clear(&___nl__9);
#line 720
c_rt_lib0move(&___nl__9,___get_global_const(0));
#line 720
c_rt_lib0move(&___nl__6, c_rt_lib0hash_mk(3, ___get_global_const(257), ___nl__7, ___get_global_const(72), ___nl__8, ___get_global_const(76), ___nl__9));
#line 720
c_rt_lib0clear(&___nl__7);
#line 720
c_rt_lib0clear(&___nl__8);
#line 720
c_rt_lib0clear(&___nl__9);
#line 720
c_rt_lib0move(&___nl__4, c_rt_lib0array_mk(2, ___nl__5, ___nl__6));
#line 720
c_rt_lib0clear(&___nl__5);
#line 720
c_rt_lib0clear(&___nl__6);
#line 720
c_rt_lib0move(&___nl__2, c_rt_lib0hash_mk(2, ___get_global_const(166), ___nl__3, ___get_global_const(1023), ___nl__4));
#line 720
c_rt_lib0clear(&___nl__3);
#line 720
c_rt_lib0clear(&___nl__4);
#line 720
c_rt_lib0delete(hash0set_value(&___nl__0, ___nl__1, ___nl__2));
#line 720
c_rt_lib0clear(&___nl__2);
#line 720
c_rt_lib0clear(&___nl__1);
#line 724
c_rt_lib0move(&___nl__1,___get_global_const(658));
#line 724
c_rt_lib0move(&___nl__3, tct0void());
#line 724
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_none(___get_global_const(5)));
#line 724
c_rt_lib0move(&___nl__8, tct0tct_im());
#line 724
c_rt_lib0move(&___nl__7, tct0arr(___nl__8));
#line 724
c_rt_lib0clear(&___nl__8);
#line 724
c_rt_lib0move(&___nl__8,___get_global_const(0));
#line 724
c_rt_lib0move(&___nl__5, c_rt_lib0hash_mk(3, ___get_global_const(257), ___nl__6, ___get_global_const(72), ___nl__7, ___get_global_const(76), ___nl__8));
#line 724
c_rt_lib0clear(&___nl__6);
#line 724
c_rt_lib0clear(&___nl__7);
#line 724
c_rt_lib0clear(&___nl__8);
#line 724
c_rt_lib0move(&___nl__7, c_rt_lib0ov_mk_none(___get_global_const(37)));
#line 724
c_rt_lib0move(&___nl__9, tct0tct_im());
#line 724
c_rt_lib0move(&___nl__8, tct0arr(___nl__9));
#line 724
c_rt_lib0clear(&___nl__9);
#line 724
c_rt_lib0move(&___nl__9,___get_global_const(0));
#line 724
c_rt_lib0move(&___nl__6, c_rt_lib0hash_mk(3, ___get_global_const(257), ___nl__7, ___get_global_const(72), ___nl__8, ___get_global_const(76), ___nl__9));
#line 724
c_rt_lib0clear(&___nl__7);
#line 724
c_rt_lib0clear(&___nl__8);
#line 724
c_rt_lib0clear(&___nl__9);
#line 724
c_rt_lib0move(&___nl__4, c_rt_lib0array_mk(2, ___nl__5, ___nl__6));
#line 724
c_rt_lib0clear(&___nl__5);
#line 724
c_rt_lib0clear(&___nl__6);
#line 724
c_rt_lib0move(&___nl__2, c_rt_lib0hash_mk(2, ___get_global_const(166), ___nl__3, ___get_global_const(1023), ___nl__4));
#line 724
c_rt_lib0clear(&___nl__3);
#line 724
c_rt_lib0clear(&___nl__4);
#line 724
c_rt_lib0delete(hash0set_value(&___nl__0, ___nl__1, ___nl__2));
#line 724
c_rt_lib0clear(&___nl__2);
#line 724
c_rt_lib0clear(&___nl__1);
#line 728
c_rt_lib0move(&___nl__1,___get_global_const(659));
#line 728
c_rt_lib0move(&___nl__3, tct0sim());
#line 728
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_none(___get_global_const(37)));
#line 728
c_rt_lib0move(&___nl__8, tct0tct_im());
#line 728
c_rt_lib0move(&___nl__7, tct0arr(___nl__8));
#line 728
c_rt_lib0clear(&___nl__8);
#line 728
c_rt_lib0move(&___nl__8,___get_global_const(0));
#line 728
c_rt_lib0move(&___nl__5, c_rt_lib0hash_mk(3, ___get_global_const(257), ___nl__6, ___get_global_const(72), ___nl__7, ___get_global_const(76), ___nl__8));
#line 728
c_rt_lib0clear(&___nl__6);
#line 728
c_rt_lib0clear(&___nl__7);
#line 728
c_rt_lib0clear(&___nl__8);
#line 728
c_rt_lib0move(&___nl__4, c_rt_lib0array_mk(1, ___nl__5));
#line 728
c_rt_lib0clear(&___nl__5);
#line 728
c_rt_lib0move(&___nl__2, c_rt_lib0hash_mk(2, ___get_global_const(166), ___nl__3, ___get_global_const(1023), ___nl__4));
#line 728
c_rt_lib0clear(&___nl__3);
#line 728
c_rt_lib0clear(&___nl__4);
#line 728
c_rt_lib0delete(hash0set_value(&___nl__0, ___nl__1, ___nl__2));
#line 728
c_rt_lib0clear(&___nl__2);
#line 728
c_rt_lib0clear(&___nl__1);
#line 732
c_rt_lib0move(&___nl__1,___get_global_const(664));
#line 732
c_rt_lib0move(&___nl__3, tct0void());
#line 732
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_none(___get_global_const(5)));
#line 732
c_rt_lib0move(&___nl__8, tct0tct_im());
#line 732
c_rt_lib0move(&___nl__7, tct0hash(___nl__8));
#line 732
c_rt_lib0clear(&___nl__8);
#line 732
c_rt_lib0move(&___nl__8,___get_global_const(0));
#line 732
c_rt_lib0move(&___nl__5, c_rt_lib0hash_mk(3, ___get_global_const(257), ___nl__6, ___get_global_const(72), ___nl__7, ___get_global_const(76), ___nl__8));
#line 732
c_rt_lib0clear(&___nl__6);
#line 732
c_rt_lib0clear(&___nl__7);
#line 732
c_rt_lib0clear(&___nl__8);
#line 732
c_rt_lib0move(&___nl__7, c_rt_lib0ov_mk_none(___get_global_const(37)));
#line 732
c_rt_lib0move(&___nl__8, tct0sim());
#line 732
c_rt_lib0move(&___nl__9,___get_global_const(0));
#line 732
c_rt_lib0move(&___nl__6, c_rt_lib0hash_mk(3, ___get_global_const(257), ___nl__7, ___get_global_const(72), ___nl__8, ___get_global_const(76), ___nl__9));
#line 732
c_rt_lib0clear(&___nl__7);
#line 732
c_rt_lib0clear(&___nl__8);
#line 732
c_rt_lib0clear(&___nl__9);
#line 732
c_rt_lib0move(&___nl__8, c_rt_lib0ov_mk_none(___get_global_const(37)));
#line 732
c_rt_lib0move(&___nl__9, tct0tct_im());
#line 732
c_rt_lib0move(&___nl__10,___get_global_const(0));
#line 732
c_rt_lib0move(&___nl__7, c_rt_lib0hash_mk(3, ___get_global_const(257), ___nl__8, ___get_global_const(72), ___nl__9, ___get_global_const(76), ___nl__10));
#line 732
c_rt_lib0clear(&___nl__8);
#line 732
c_rt_lib0clear(&___nl__9);
#line 732
c_rt_lib0clear(&___nl__10);
#line 732
c_rt_lib0move(&___nl__4, c_rt_lib0array_mk(3, ___nl__5, ___nl__6, ___nl__7));
#line 732
c_rt_lib0clear(&___nl__5);
#line 732
c_rt_lib0clear(&___nl__6);
#line 732
c_rt_lib0clear(&___nl__7);
#line 732
c_rt_lib0move(&___nl__2, c_rt_lib0hash_mk(2, ___get_global_const(166), ___nl__3, ___get_global_const(1023), ___nl__4));
#line 732
c_rt_lib0clear(&___nl__3);
#line 732
c_rt_lib0clear(&___nl__4);
#line 732
c_rt_lib0delete(hash0set_value(&___nl__0, ___nl__1, ___nl__2));
#line 732
c_rt_lib0clear(&___nl__2);
#line 732
c_rt_lib0clear(&___nl__1);
#line 737
c_rt_lib0move(&___nl__1,___get_global_const(662));
#line 737
c_rt_lib0move(&___nl__3, tct0tct_im());
#line 737
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_none(___get_global_const(37)));
#line 737
c_rt_lib0move(&___nl__8, tct0tct_im());
#line 737
c_rt_lib0move(&___nl__7, tct0hash(___nl__8));
#line 737
c_rt_lib0clear(&___nl__8);
#line 737
c_rt_lib0move(&___nl__8,___get_global_const(0));
#line 737
c_rt_lib0move(&___nl__5, c_rt_lib0hash_mk(3, ___get_global_const(257), ___nl__6, ___get_global_const(72), ___nl__7, ___get_global_const(76), ___nl__8));
#line 737
c_rt_lib0clear(&___nl__6);
#line 737
c_rt_lib0clear(&___nl__7);
#line 737
c_rt_lib0clear(&___nl__8);
#line 737
c_rt_lib0move(&___nl__7, c_rt_lib0ov_mk_none(___get_global_const(37)));
#line 737
c_rt_lib0move(&___nl__8, tct0sim());
#line 737
c_rt_lib0move(&___nl__9,___get_global_const(0));
#line 737
c_rt_lib0move(&___nl__6, c_rt_lib0hash_mk(3, ___get_global_const(257), ___nl__7, ___get_global_const(72), ___nl__8, ___get_global_const(76), ___nl__9));
#line 737
c_rt_lib0clear(&___nl__7);
#line 737
c_rt_lib0clear(&___nl__8);
#line 737
c_rt_lib0clear(&___nl__9);
#line 737
c_rt_lib0move(&___nl__4, c_rt_lib0array_mk(2, ___nl__5, ___nl__6));
#line 737
c_rt_lib0clear(&___nl__5);
#line 737
c_rt_lib0clear(&___nl__6);
#line 737
c_rt_lib0move(&___nl__2, c_rt_lib0hash_mk(2, ___get_global_const(166), ___nl__3, ___get_global_const(1023), ___nl__4));
#line 737
c_rt_lib0clear(&___nl__3);
#line 737
c_rt_lib0clear(&___nl__4);
#line 737
c_rt_lib0delete(hash0set_value(&___nl__0, ___nl__1, ___nl__2));
#line 737
c_rt_lib0clear(&___nl__2);
#line 737
c_rt_lib0clear(&___nl__1);
#line 740
c_rt_lib0move(&___nl__1,___get_global_const(663));
#line 740
c_rt_lib0move(&___nl__3, tct0bool());
#line 740
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_none(___get_global_const(37)));
#line 740
c_rt_lib0move(&___nl__8, tct0tct_im());
#line 740
c_rt_lib0move(&___nl__7, tct0hash(___nl__8));
#line 740
c_rt_lib0clear(&___nl__8);
#line 740
c_rt_lib0move(&___nl__8,___get_global_const(0));
#line 740
c_rt_lib0move(&___nl__5, c_rt_lib0hash_mk(3, ___get_global_const(257), ___nl__6, ___get_global_const(72), ___nl__7, ___get_global_const(76), ___nl__8));
#line 740
c_rt_lib0clear(&___nl__6);
#line 740
c_rt_lib0clear(&___nl__7);
#line 740
c_rt_lib0clear(&___nl__8);
#line 740
c_rt_lib0move(&___nl__7, c_rt_lib0ov_mk_none(___get_global_const(37)));
#line 740
c_rt_lib0move(&___nl__8, tct0sim());
#line 740
c_rt_lib0move(&___nl__9,___get_global_const(0));
#line 740
c_rt_lib0move(&___nl__6, c_rt_lib0hash_mk(3, ___get_global_const(257), ___nl__7, ___get_global_const(72), ___nl__8, ___get_global_const(76), ___nl__9));
#line 740
c_rt_lib0clear(&___nl__7);
#line 740
c_rt_lib0clear(&___nl__8);
#line 740
c_rt_lib0clear(&___nl__9);
#line 740
c_rt_lib0move(&___nl__4, c_rt_lib0array_mk(2, ___nl__5, ___nl__6));
#line 740
c_rt_lib0clear(&___nl__5);
#line 740
c_rt_lib0clear(&___nl__6);
#line 740
c_rt_lib0move(&___nl__2, c_rt_lib0hash_mk(2, ___get_global_const(166), ___nl__3, ___get_global_const(1023), ___nl__4));
#line 740
c_rt_lib0clear(&___nl__3);
#line 740
c_rt_lib0clear(&___nl__4);
#line 740
c_rt_lib0delete(hash0set_value(&___nl__0, ___nl__1, ___nl__2));
#line 740
c_rt_lib0clear(&___nl__2);
#line 740
c_rt_lib0clear(&___nl__1);
#line 743
c_rt_lib0move(&___nl__1,___get_global_const(665));
#line 743
c_rt_lib0move(&___nl__3, tct0void());
#line 743
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_none(___get_global_const(5)));
#line 743
c_rt_lib0move(&___nl__8, tct0tct_im());
#line 743
c_rt_lib0move(&___nl__7, tct0hash(___nl__8));
#line 743
c_rt_lib0clear(&___nl__8);
#line 743
c_rt_lib0move(&___nl__8,___get_global_const(0));
#line 743
c_rt_lib0move(&___nl__5, c_rt_lib0hash_mk(3, ___get_global_const(257), ___nl__6, ___get_global_const(72), ___nl__7, ___get_global_const(76), ___nl__8));
#line 743
c_rt_lib0clear(&___nl__6);
#line 743
c_rt_lib0clear(&___nl__7);
#line 743
c_rt_lib0clear(&___nl__8);
#line 743
c_rt_lib0move(&___nl__7, c_rt_lib0ov_mk_none(___get_global_const(37)));
#line 743
c_rt_lib0move(&___nl__8, tct0sim());
#line 743
c_rt_lib0move(&___nl__9,___get_global_const(0));
#line 743
c_rt_lib0move(&___nl__6, c_rt_lib0hash_mk(3, ___get_global_const(257), ___nl__7, ___get_global_const(72), ___nl__8, ___get_global_const(76), ___nl__9));
#line 743
c_rt_lib0clear(&___nl__7);
#line 743
c_rt_lib0clear(&___nl__8);
#line 743
c_rt_lib0clear(&___nl__9);
#line 743
c_rt_lib0move(&___nl__4, c_rt_lib0array_mk(2, ___nl__5, ___nl__6));
#line 743
c_rt_lib0clear(&___nl__5);
#line 743
c_rt_lib0clear(&___nl__6);
#line 743
c_rt_lib0move(&___nl__2, c_rt_lib0hash_mk(2, ___get_global_const(166), ___nl__3, ___get_global_const(1023), ___nl__4));
#line 743
c_rt_lib0clear(&___nl__3);
#line 743
c_rt_lib0clear(&___nl__4);
#line 743
c_rt_lib0delete(hash0set_value(&___nl__0, ___nl__1, ___nl__2));
#line 743
c_rt_lib0clear(&___nl__2);
#line 743
c_rt_lib0clear(&___nl__1);
#line 746
c_rt_lib0move(&___nl__1,___get_global_const(666));
#line 746
c_rt_lib0move(&___nl__3, tct0sim());
#line 746
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_none(___get_global_const(37)));
#line 746
c_rt_lib0move(&___nl__8, tct0tct_im());
#line 746
c_rt_lib0move(&___nl__7, tct0hash(___nl__8));
#line 746
c_rt_lib0clear(&___nl__8);
#line 746
c_rt_lib0move(&___nl__8,___get_global_const(0));
#line 746
c_rt_lib0move(&___nl__5, c_rt_lib0hash_mk(3, ___get_global_const(257), ___nl__6, ___get_global_const(72), ___nl__7, ___get_global_const(76), ___nl__8));
#line 746
c_rt_lib0clear(&___nl__6);
#line 746
c_rt_lib0clear(&___nl__7);
#line 746
c_rt_lib0clear(&___nl__8);
#line 746
c_rt_lib0move(&___nl__4, c_rt_lib0array_mk(1, ___nl__5));
#line 746
c_rt_lib0clear(&___nl__5);
#line 746
c_rt_lib0move(&___nl__2, c_rt_lib0hash_mk(2, ___get_global_const(166), ___nl__3, ___get_global_const(1023), ___nl__4));
#line 746
c_rt_lib0clear(&___nl__3);
#line 746
c_rt_lib0clear(&___nl__4);
#line 746
c_rt_lib0delete(hash0set_value(&___nl__0, ___nl__1, ___nl__2));
#line 746
c_rt_lib0clear(&___nl__2);
#line 746
c_rt_lib0clear(&___nl__1);
#line 748
c_rt_lib0move(&___nl__1,___get_global_const(1096));
#line 748
c_rt_lib0move(&___nl__4, tct0tct_im());
#line 748
c_rt_lib0move(&___nl__3, tct0arr(___nl__4));
#line 748
c_rt_lib0clear(&___nl__4);
#line 748
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_none(___get_global_const(37)));
#line 748
c_rt_lib0move(&___nl__8, tct0tct_im());
#line 748
c_rt_lib0move(&___nl__7, tct0hash(___nl__8));
#line 748
c_rt_lib0clear(&___nl__8);
#line 748
c_rt_lib0move(&___nl__8,___get_global_const(0));
#line 748
c_rt_lib0move(&___nl__5, c_rt_lib0hash_mk(3, ___get_global_const(257), ___nl__6, ___get_global_const(72), ___nl__7, ___get_global_const(76), ___nl__8));
#line 748
c_rt_lib0clear(&___nl__6);
#line 748
c_rt_lib0clear(&___nl__7);
#line 748
c_rt_lib0clear(&___nl__8);
#line 748
c_rt_lib0move(&___nl__4, c_rt_lib0array_mk(1, ___nl__5));
#line 748
c_rt_lib0clear(&___nl__5);
#line 748
c_rt_lib0move(&___nl__2, c_rt_lib0hash_mk(2, ___get_global_const(166), ___nl__3, ___get_global_const(1023), ___nl__4));
#line 748
c_rt_lib0clear(&___nl__3);
#line 748
c_rt_lib0clear(&___nl__4);
#line 748
c_rt_lib0delete(hash0set_value(&___nl__0, ___nl__1, ___nl__2));
#line 748
c_rt_lib0clear(&___nl__2);
#line 748
c_rt_lib0clear(&___nl__1);
#line 751
c_rt_lib0move(&___nl__1,___get_global_const(681));
#line 751
c_rt_lib0move(&___nl__3, tct0bool());
#line 751
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_none(___get_global_const(37)));
#line 751
c_rt_lib0move(&___nl__8, c_rt_lib0hash_mk(0));
#line 751
c_rt_lib0move(&___nl__7, tct0var(___nl__8));
#line 751
c_rt_lib0clear(&___nl__8);
#line 751
c_rt_lib0move(&___nl__8,___get_global_const(0));
#line 751
c_rt_lib0move(&___nl__5, c_rt_lib0hash_mk(3, ___get_global_const(257), ___nl__6, ___get_global_const(72), ___nl__7, ___get_global_const(76), ___nl__8));
#line 751
c_rt_lib0clear(&___nl__6);
#line 751
c_rt_lib0clear(&___nl__7);
#line 751
c_rt_lib0clear(&___nl__8);
#line 751
c_rt_lib0move(&___nl__7, c_rt_lib0ov_mk_none(___get_global_const(37)));
#line 751
c_rt_lib0move(&___nl__8, tct0sim());
#line 751
c_rt_lib0move(&___nl__9,___get_global_const(0));
#line 751
c_rt_lib0move(&___nl__6, c_rt_lib0hash_mk(3, ___get_global_const(257), ___nl__7, ___get_global_const(72), ___nl__8, ___get_global_const(76), ___nl__9));
#line 751
c_rt_lib0clear(&___nl__7);
#line 751
c_rt_lib0clear(&___nl__8);
#line 751
c_rt_lib0clear(&___nl__9);
#line 751
c_rt_lib0move(&___nl__4, c_rt_lib0array_mk(2, ___nl__5, ___nl__6));
#line 751
c_rt_lib0clear(&___nl__5);
#line 751
c_rt_lib0clear(&___nl__6);
#line 751
c_rt_lib0move(&___nl__2, c_rt_lib0hash_mk(2, ___get_global_const(166), ___nl__3, ___get_global_const(1023), ___nl__4));
#line 751
c_rt_lib0clear(&___nl__3);
#line 751
c_rt_lib0clear(&___nl__4);
#line 751
c_rt_lib0delete(hash0set_value(&___nl__0, ___nl__1, ___nl__2));
#line 751
c_rt_lib0clear(&___nl__2);
#line 751
c_rt_lib0clear(&___nl__1);
#line 755
c_rt_lib0move(&___nl__1,___get_global_const(682));
#line 755
c_rt_lib0move(&___nl__3, tct0tct_im());
#line 755
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_none(___get_global_const(37)));
#line 755
c_rt_lib0move(&___nl__8, c_rt_lib0hash_mk(0));
#line 755
c_rt_lib0move(&___nl__7, tct0var(___nl__8));
#line 755
c_rt_lib0clear(&___nl__8);
#line 755
c_rt_lib0move(&___nl__8,___get_global_const(0));
#line 755
c_rt_lib0move(&___nl__5, c_rt_lib0hash_mk(3, ___get_global_const(257), ___nl__6, ___get_global_const(72), ___nl__7, ___get_global_const(76), ___nl__8));
#line 755
c_rt_lib0clear(&___nl__6);
#line 755
c_rt_lib0clear(&___nl__7);
#line 755
c_rt_lib0clear(&___nl__8);
#line 755
c_rt_lib0move(&___nl__7, c_rt_lib0ov_mk_none(___get_global_const(37)));
#line 755
c_rt_lib0move(&___nl__8, tct0sim());
#line 755
c_rt_lib0move(&___nl__9,___get_global_const(0));
#line 755
c_rt_lib0move(&___nl__6, c_rt_lib0hash_mk(3, ___get_global_const(257), ___nl__7, ___get_global_const(72), ___nl__8, ___get_global_const(76), ___nl__9));
#line 755
c_rt_lib0clear(&___nl__7);
#line 755
c_rt_lib0clear(&___nl__8);
#line 755
c_rt_lib0clear(&___nl__9);
#line 755
c_rt_lib0move(&___nl__4, c_rt_lib0array_mk(2, ___nl__5, ___nl__6));
#line 755
c_rt_lib0clear(&___nl__5);
#line 755
c_rt_lib0clear(&___nl__6);
#line 755
c_rt_lib0move(&___nl__2, c_rt_lib0hash_mk(2, ___get_global_const(166), ___nl__3, ___get_global_const(1023), ___nl__4));
#line 755
c_rt_lib0clear(&___nl__3);
#line 755
c_rt_lib0clear(&___nl__4);
#line 755
c_rt_lib0delete(hash0set_value(&___nl__0, ___nl__1, ___nl__2));
#line 755
c_rt_lib0clear(&___nl__2);
#line 755
c_rt_lib0clear(&___nl__1);
#line 760
c_rt_lib0move(&___nl__1,___get_global_const(1097));
#line 760
c_rt_lib0move(&___nl__3, tct0sim());
#line 760
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_none(___get_global_const(37)));
#line 760
c_rt_lib0move(&___nl__7, tct0tct_im());
#line 760
c_rt_lib0move(&___nl__8,___get_global_const(0));
#line 760
c_rt_lib0move(&___nl__5, c_rt_lib0hash_mk(3, ___get_global_const(257), ___nl__6, ___get_global_const(72), ___nl__7, ___get_global_const(76), ___nl__8));
#line 760
c_rt_lib0clear(&___nl__6);
#line 760
c_rt_lib0clear(&___nl__7);
#line 760
c_rt_lib0clear(&___nl__8);
#line 760
c_rt_lib0move(&___nl__4, c_rt_lib0array_mk(1, ___nl__5));
#line 760
c_rt_lib0clear(&___nl__5);
#line 760
c_rt_lib0move(&___nl__2, c_rt_lib0hash_mk(2, ___get_global_const(166), ___nl__3, ___get_global_const(1023), ___nl__4));
#line 760
c_rt_lib0clear(&___nl__3);
#line 760
c_rt_lib0clear(&___nl__4);
#line 760
c_rt_lib0delete(hash0set_value(&___nl__0, ___nl__1, ___nl__2));
#line 760
c_rt_lib0clear(&___nl__2);
#line 760
c_rt_lib0clear(&___nl__1);
#line 764
c_rt_lib0move(&___nl__1,___get_global_const(668));
#line 764
c_rt_lib0move(&___nl__3, tct0sim());
#line 764
c_rt_lib0move(&___nl__4, c_rt_lib0array_mk(0));
#line 764
c_rt_lib0move(&___nl__2, c_rt_lib0hash_mk(2, ___get_global_const(166), ___nl__3, ___get_global_const(1023), ___nl__4));
#line 764
c_rt_lib0clear(&___nl__3);
#line 764
c_rt_lib0clear(&___nl__4);
#line 764
c_rt_lib0delete(hash0set_value(&___nl__0, ___nl__1, ___nl__2));
#line 764
c_rt_lib0clear(&___nl__2);
#line 764
c_rt_lib0clear(&___nl__1);
#line 765
c_rt_lib0move(&___nl__1,___get_global_const(670));
#line 765
c_rt_lib0move(&___nl__3, tct0sim());
#line 765
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_none(___get_global_const(37)));
#line 765
c_rt_lib0move(&___nl__7, tct0sim());
#line 765
c_rt_lib0move(&___nl__8,___get_global_const(0));
#line 765
c_rt_lib0move(&___nl__5, c_rt_lib0hash_mk(3, ___get_global_const(257), ___nl__6, ___get_global_const(72), ___nl__7, ___get_global_const(76), ___nl__8));
#line 765
c_rt_lib0clear(&___nl__6);
#line 765
c_rt_lib0clear(&___nl__7);
#line 765
c_rt_lib0clear(&___nl__8);
#line 765
c_rt_lib0move(&___nl__4, c_rt_lib0array_mk(1, ___nl__5));
#line 765
c_rt_lib0clear(&___nl__5);
#line 765
c_rt_lib0move(&___nl__2, c_rt_lib0hash_mk(2, ___get_global_const(166), ___nl__3, ___get_global_const(1023), ___nl__4));
#line 765
c_rt_lib0clear(&___nl__3);
#line 765
c_rt_lib0clear(&___nl__4);
#line 765
c_rt_lib0delete(hash0set_value(&___nl__0, ___nl__1, ___nl__2));
#line 765
c_rt_lib0clear(&___nl__2);
#line 765
c_rt_lib0clear(&___nl__1);
#line 768
c_rt_lib0move(&___nl__1,___get_global_const(671));
#line 768
c_rt_lib0move(&___nl__3, tct0sim());
#line 768
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_none(___get_global_const(37)));
#line 768
c_rt_lib0move(&___nl__7, tct0sim());
#line 768
c_rt_lib0move(&___nl__8,___get_global_const(0));
#line 768
c_rt_lib0move(&___nl__5, c_rt_lib0hash_mk(3, ___get_global_const(257), ___nl__6, ___get_global_const(72), ___nl__7, ___get_global_const(76), ___nl__8));
#line 768
c_rt_lib0clear(&___nl__6);
#line 768
c_rt_lib0clear(&___nl__7);
#line 768
c_rt_lib0clear(&___nl__8);
#line 768
c_rt_lib0move(&___nl__7, c_rt_lib0ov_mk_none(___get_global_const(37)));
#line 768
c_rt_lib0move(&___nl__8, tct0sim());
#line 768
c_rt_lib0move(&___nl__9,___get_global_const(0));
#line 768
c_rt_lib0move(&___nl__6, c_rt_lib0hash_mk(3, ___get_global_const(257), ___nl__7, ___get_global_const(72), ___nl__8, ___get_global_const(76), ___nl__9));
#line 768
c_rt_lib0clear(&___nl__7);
#line 768
c_rt_lib0clear(&___nl__8);
#line 768
c_rt_lib0clear(&___nl__9);
#line 768
c_rt_lib0move(&___nl__8, c_rt_lib0ov_mk_none(___get_global_const(37)));
#line 768
c_rt_lib0move(&___nl__9, tct0sim());
#line 768
c_rt_lib0move(&___nl__10,___get_global_const(0));
#line 768
c_rt_lib0move(&___nl__7, c_rt_lib0hash_mk(3, ___get_global_const(257), ___nl__8, ___get_global_const(72), ___nl__9, ___get_global_const(76), ___nl__10));
#line 768
c_rt_lib0clear(&___nl__8);
#line 768
c_rt_lib0clear(&___nl__9);
#line 768
c_rt_lib0clear(&___nl__10);
#line 768
c_rt_lib0move(&___nl__4, c_rt_lib0array_mk(3, ___nl__5, ___nl__6, ___nl__7));
#line 768
c_rt_lib0clear(&___nl__5);
#line 768
c_rt_lib0clear(&___nl__6);
#line 768
c_rt_lib0clear(&___nl__7);
#line 768
c_rt_lib0move(&___nl__2, c_rt_lib0hash_mk(2, ___get_global_const(166), ___nl__3, ___get_global_const(1023), ___nl__4));
#line 768
c_rt_lib0clear(&___nl__3);
#line 768
c_rt_lib0clear(&___nl__4);
#line 768
c_rt_lib0delete(hash0set_value(&___nl__0, ___nl__1, ___nl__2));
#line 768
c_rt_lib0clear(&___nl__2);
#line 768
c_rt_lib0clear(&___nl__1);
#line 773
c_rt_lib0move(&___nl__1,___get_global_const(1098));
#line 773
c_rt_lib0move(&___nl__3, tct0sim());
#line 773
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_none(___get_global_const(37)));
#line 773
c_rt_lib0move(&___nl__7, tct0sim());
#line 773
c_rt_lib0move(&___nl__8,___get_global_const(0));
#line 773
c_rt_lib0move(&___nl__5, c_rt_lib0hash_mk(3, ___get_global_const(257), ___nl__6, ___get_global_const(72), ___nl__7, ___get_global_const(76), ___nl__8));
#line 773
c_rt_lib0clear(&___nl__6);
#line 773
c_rt_lib0clear(&___nl__7);
#line 773
c_rt_lib0clear(&___nl__8);
#line 773
c_rt_lib0move(&___nl__7, c_rt_lib0ov_mk_none(___get_global_const(37)));
#line 773
c_rt_lib0move(&___nl__8, tct0sim());
#line 773
c_rt_lib0move(&___nl__9,___get_global_const(0));
#line 773
c_rt_lib0move(&___nl__6, c_rt_lib0hash_mk(3, ___get_global_const(257), ___nl__7, ___get_global_const(72), ___nl__8, ___get_global_const(76), ___nl__9));
#line 773
c_rt_lib0clear(&___nl__7);
#line 773
c_rt_lib0clear(&___nl__8);
#line 773
c_rt_lib0clear(&___nl__9);
#line 773
c_rt_lib0move(&___nl__8, c_rt_lib0ov_mk_none(___get_global_const(37)));
#line 773
c_rt_lib0move(&___nl__9, tct0sim());
#line 773
c_rt_lib0move(&___nl__10,___get_global_const(0));
#line 773
c_rt_lib0move(&___nl__7, c_rt_lib0hash_mk(3, ___get_global_const(257), ___nl__8, ___get_global_const(72), ___nl__9, ___get_global_const(76), ___nl__10));
#line 773
c_rt_lib0clear(&___nl__8);
#line 773
c_rt_lib0clear(&___nl__9);
#line 773
c_rt_lib0clear(&___nl__10);
#line 773
c_rt_lib0move(&___nl__4, c_rt_lib0array_mk(3, ___nl__5, ___nl__6, ___nl__7));
#line 773
c_rt_lib0clear(&___nl__5);
#line 773
c_rt_lib0clear(&___nl__6);
#line 773
c_rt_lib0clear(&___nl__7);
#line 773
c_rt_lib0move(&___nl__2, c_rt_lib0hash_mk(2, ___get_global_const(166), ___nl__3, ___get_global_const(1023), ___nl__4));
#line 773
c_rt_lib0clear(&___nl__3);
#line 773
c_rt_lib0clear(&___nl__4);
#line 773
c_rt_lib0delete(hash0set_value(&___nl__0, ___nl__1, ___nl__2));
#line 773
c_rt_lib0clear(&___nl__2);
#line 773
c_rt_lib0clear(&___nl__1);
#line 778
c_rt_lib0move(&___nl__1,___get_global_const(675));
#line 778
c_rt_lib0move(&___nl__3, tct0sim());
#line 778
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_none(___get_global_const(37)));
#line 778
c_rt_lib0move(&___nl__7, tct0sim());
#line 778
c_rt_lib0move(&___nl__8,___get_global_const(0));
#line 778
c_rt_lib0move(&___nl__5, c_rt_lib0hash_mk(3, ___get_global_const(257), ___nl__6, ___get_global_const(72), ___nl__7, ___get_global_const(76), ___nl__8));
#line 778
c_rt_lib0clear(&___nl__6);
#line 778
c_rt_lib0clear(&___nl__7);
#line 778
c_rt_lib0clear(&___nl__8);
#line 778
c_rt_lib0move(&___nl__4, c_rt_lib0array_mk(1, ___nl__5));
#line 778
c_rt_lib0clear(&___nl__5);
#line 778
c_rt_lib0move(&___nl__2, c_rt_lib0hash_mk(2, ___get_global_const(166), ___nl__3, ___get_global_const(1023), ___nl__4));
#line 778
c_rt_lib0clear(&___nl__3);
#line 778
c_rt_lib0clear(&___nl__4);
#line 778
c_rt_lib0delete(hash0set_value(&___nl__0, ___nl__1, ___nl__2));
#line 778
c_rt_lib0clear(&___nl__2);
#line 778
c_rt_lib0clear(&___nl__1);
#line 781
c_rt_lib0move(&___nl__1,___get_global_const(674));
#line 781
c_rt_lib0move(&___nl__3, tct0sim());
#line 781
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_none(___get_global_const(37)));
#line 781
c_rt_lib0move(&___nl__7, tct0sim());
#line 781
c_rt_lib0move(&___nl__8,___get_global_const(0));
#line 781
c_rt_lib0move(&___nl__5, c_rt_lib0hash_mk(3, ___get_global_const(257), ___nl__6, ___get_global_const(72), ___nl__7, ___get_global_const(76), ___nl__8));
#line 781
c_rt_lib0clear(&___nl__6);
#line 781
c_rt_lib0clear(&___nl__7);
#line 781
c_rt_lib0clear(&___nl__8);
#line 781
c_rt_lib0move(&___nl__4, c_rt_lib0array_mk(1, ___nl__5));
#line 781
c_rt_lib0clear(&___nl__5);
#line 781
c_rt_lib0move(&___nl__2, c_rt_lib0hash_mk(2, ___get_global_const(166), ___nl__3, ___get_global_const(1023), ___nl__4));
#line 781
c_rt_lib0clear(&___nl__3);
#line 781
c_rt_lib0clear(&___nl__4);
#line 781
c_rt_lib0delete(hash0set_value(&___nl__0, ___nl__1, ___nl__2));
#line 781
c_rt_lib0clear(&___nl__2);
#line 781
c_rt_lib0clear(&___nl__1);
#line 784
c_rt_lib0move(&___nl__1,___get_global_const(1099));
#line 784
c_rt_lib0move(&___nl__4, tct0sim());
#line 784
c_rt_lib0move(&___nl__3, tct0arr(___nl__4));
#line 784
c_rt_lib0clear(&___nl__4);
#line 784
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_none(___get_global_const(37)));
#line 784
c_rt_lib0move(&___nl__7, tct0sim());
#line 784
c_rt_lib0move(&___nl__8,___get_global_const(0));
#line 784
c_rt_lib0move(&___nl__5, c_rt_lib0hash_mk(3, ___get_global_const(257), ___nl__6, ___get_global_const(72), ___nl__7, ___get_global_const(76), ___nl__8));
#line 784
c_rt_lib0clear(&___nl__6);
#line 784
c_rt_lib0clear(&___nl__7);
#line 784
c_rt_lib0clear(&___nl__8);
#line 784
c_rt_lib0move(&___nl__7, c_rt_lib0ov_mk_none(___get_global_const(37)));
#line 784
c_rt_lib0move(&___nl__8, tct0sim());
#line 784
c_rt_lib0move(&___nl__9,___get_global_const(0));
#line 784
c_rt_lib0move(&___nl__6, c_rt_lib0hash_mk(3, ___get_global_const(257), ___nl__7, ___get_global_const(72), ___nl__8, ___get_global_const(76), ___nl__9));
#line 784
c_rt_lib0clear(&___nl__7);
#line 784
c_rt_lib0clear(&___nl__8);
#line 784
c_rt_lib0clear(&___nl__9);
#line 784
c_rt_lib0move(&___nl__4, c_rt_lib0array_mk(2, ___nl__5, ___nl__6));
#line 784
c_rt_lib0clear(&___nl__5);
#line 784
c_rt_lib0clear(&___nl__6);
#line 784
c_rt_lib0move(&___nl__2, c_rt_lib0hash_mk(2, ___get_global_const(166), ___nl__3, ___get_global_const(1023), ___nl__4));
#line 784
c_rt_lib0clear(&___nl__3);
#line 784
c_rt_lib0clear(&___nl__4);
#line 784
c_rt_lib0delete(hash0set_value(&___nl__0, ___nl__1, ___nl__2));
#line 784
c_rt_lib0clear(&___nl__2);
#line 784
c_rt_lib0clear(&___nl__1);
#line 788
c_rt_lib0move(&___nl__1,___get_global_const(1100));
#line 788
c_rt_lib0move(&___nl__3, tct0sim());
#line 788
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_none(___get_global_const(37)));
#line 788
c_rt_lib0move(&___nl__7, tct0tct_im());
#line 788
c_rt_lib0move(&___nl__8,___get_global_const(0));
#line 788
c_rt_lib0move(&___nl__5, c_rt_lib0hash_mk(3, ___get_global_const(257), ___nl__6, ___get_global_const(72), ___nl__7, ___get_global_const(76), ___nl__8));
#line 788
c_rt_lib0clear(&___nl__6);
#line 788
c_rt_lib0clear(&___nl__7);
#line 788
c_rt_lib0clear(&___nl__8);
#line 788
c_rt_lib0move(&___nl__7, c_rt_lib0ov_mk_none(___get_global_const(37)));
#line 788
c_rt_lib0move(&___nl__8, tct0tct_im());
#line 788
c_rt_lib0move(&___nl__9,___get_global_const(0));
#line 788
c_rt_lib0move(&___nl__6, c_rt_lib0hash_mk(3, ___get_global_const(257), ___nl__7, ___get_global_const(72), ___nl__8, ___get_global_const(76), ___nl__9));
#line 788
c_rt_lib0clear(&___nl__7);
#line 788
c_rt_lib0clear(&___nl__8);
#line 788
c_rt_lib0clear(&___nl__9);
#line 788
c_rt_lib0move(&___nl__8, c_rt_lib0ov_mk_none(___get_global_const(37)));
#line 788
c_rt_lib0move(&___nl__9, tct0tct_im());
#line 788
c_rt_lib0move(&___nl__10,___get_global_const(0));
#line 788
c_rt_lib0move(&___nl__7, c_rt_lib0hash_mk(3, ___get_global_const(257), ___nl__8, ___get_global_const(72), ___nl__9, ___get_global_const(76), ___nl__10));
#line 788
c_rt_lib0clear(&___nl__8);
#line 788
c_rt_lib0clear(&___nl__9);
#line 788
c_rt_lib0clear(&___nl__10);
#line 788
c_rt_lib0move(&___nl__4, c_rt_lib0array_mk(3, ___nl__5, ___nl__6, ___nl__7));
#line 788
c_rt_lib0clear(&___nl__5);
#line 788
c_rt_lib0clear(&___nl__6);
#line 788
c_rt_lib0clear(&___nl__7);
#line 788
c_rt_lib0move(&___nl__2, c_rt_lib0hash_mk(2, ___get_global_const(166), ___nl__3, ___get_global_const(1023), ___nl__4));
#line 788
c_rt_lib0clear(&___nl__3);
#line 788
c_rt_lib0clear(&___nl__4);
#line 788
c_rt_lib0delete(hash0set_value(&___nl__0, ___nl__1, ___nl__2));
#line 788
c_rt_lib0clear(&___nl__2);
#line 788
c_rt_lib0clear(&___nl__1);
#line 793
c_rt_lib0move(&___nl__1,___get_global_const(1101));
#line 793
c_rt_lib0move(&___nl__3, tct0tct_im());
#line 793
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_none(___get_global_const(37)));
#line 793
c_rt_lib0move(&___nl__7, tct0tct_im());
#line 793
c_rt_lib0move(&___nl__8,___get_global_const(0));
#line 793
c_rt_lib0move(&___nl__5, c_rt_lib0hash_mk(3, ___get_global_const(257), ___nl__6, ___get_global_const(72), ___nl__7, ___get_global_const(76), ___nl__8));
#line 793
c_rt_lib0clear(&___nl__6);
#line 793
c_rt_lib0clear(&___nl__7);
#line 793
c_rt_lib0clear(&___nl__8);
#line 793
c_rt_lib0move(&___nl__4, c_rt_lib0array_mk(1, ___nl__5));
#line 793
c_rt_lib0clear(&___nl__5);
#line 793
c_rt_lib0move(&___nl__2, c_rt_lib0hash_mk(2, ___get_global_const(166), ___nl__3, ___get_global_const(1023), ___nl__4));
#line 793
c_rt_lib0clear(&___nl__3);
#line 793
c_rt_lib0clear(&___nl__4);
#line 793
c_rt_lib0delete(hash0set_value(&___nl__0, ___nl__1, ___nl__2));
#line 793
c_rt_lib0clear(&___nl__2);
#line 793
c_rt_lib0clear(&___nl__1);
#line 796
c_rt_lib0move(&___nl__1, singleton0sigleton_do_not_use_without_approval(___nl__0));
#line 796
c_rt_lib0clear(&___nl__0);
#line 796
return ___nl__1;
#line 796
c_rt_lib0clear(&___nl__1);
#line 796
c_rt_lib0clear(&___nl__0);
#line 796
return NULL;
}

ImmT type_checker_priv0get_special_function_def(ImmT ___nl__0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
type_checker_priv0__const__init();
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
ImmT ___nl__9 = NULL;
#line 799
c_rt_lib0move(&___nl__2, type_checker_priv0get_special_functions());
#line 800
c_rt_lib0move(&___nl__5, nast0empty_debug());
#line 800
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_none(___get_global_const(754)));
#line 800
c_rt_lib0move(&___nl__4, c_rt_lib0hash_mk(2, ___get_global_const(213), ___nl__5, ___get_global_const(209), ___nl__6));
#line 800
c_rt_lib0clear(&___nl__5);
#line 800
c_rt_lib0clear(&___nl__6);
#line 800
c_rt_lib0move(&___nl__5, c_rt_lib0ov_mk_none(___get_global_const(42)));
#line 800
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_none(___get_global_const(42)));
#line 800
c_rt_lib0move(&___nl__7, c_rt_lib0ov_mk_none(___get_global_const(329)));
#line 800
c_rt_lib0move(&___nl__8, c_rt_lib0array_mk(0));
#line 800
c_rt_lib0move(&___nl__9, tct0empty());
#line 800
c_rt_lib0move(&___nl__3, c_rt_lib0hash_mk(8, ___get_global_const(209), ___nl__4, ___get_global_const(996), ___nl__5, ___get_global_const(991), ___nl__6, ___get_global_const(76), ___nl__1, ___get_global_const(99), ___nl__0, ___get_global_const(328), ___nl__7, ___get_global_const(73), ___nl__8, ___get_global_const(712), ___nl__9));
#line 800
c_rt_lib0clear(&___nl__4);
#line 800
c_rt_lib0clear(&___nl__5);
#line 800
c_rt_lib0clear(&___nl__6);
#line 800
c_rt_lib0clear(&___nl__7);
#line 800
c_rt_lib0clear(&___nl__8);
#line 800
c_rt_lib0clear(&___nl__9);
#line 810
c_rt_lib0move(&___nl__4, type_checker_priv0get_function_name(___nl__0, ___nl__1));
#line 810
c_rt_lib0copy(&___nl__1, ___nl__4);
#line 810
c_rt_lib0clear(&___nl__4);
#line 811
c_rt_lib0move(&___nl__4, hash0has_key(___nl__2, ___nl__1));
#line 811
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 811
if(c_rt_lib0check_true_native(___nl__4)){ goto label_2;}
#line 812
c_rt_lib0move(&___nl__5, hash0get_value(___nl__2, ___nl__1));
#line 813
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(1023)));
#line 813
c_rt_lib0copy(&___nl__7, ___nl__6);
#line 813
c_rt_lib0hash_set_value_dec(&___nl__3, ___get_global_const(73), ___nl__7);
#line 813
c_rt_lib0clear(&___nl__6);
#line 813
c_rt_lib0clear(&___nl__7);
#line 814
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(166)));
#line 814
c_rt_lib0copy(&___nl__7, ___nl__6);
#line 814
c_rt_lib0hash_set_value_dec(&___nl__3, ___get_global_const(712), ___nl__7);
#line 814
c_rt_lib0clear(&___nl__6);
#line 814
c_rt_lib0clear(&___nl__7);
#line 814
c_rt_lib0clear(&___nl__5);
#line 815
goto label_1;
#line 815
label_2:
#line 816
c_rt_lib0move(&___nl__5, c_rt_lib0ov_mk_none(___get_global_const(330)));
#line 816
c_rt_lib0copy(&___nl__6, ___nl__5);
#line 816
c_rt_lib0hash_set_value_dec(&___nl__3, ___get_global_const(328), ___nl__6);
#line 816
c_rt_lib0clear(&___nl__5);
#line 816
c_rt_lib0clear(&___nl__6);
#line 817
goto label_1;
#line 817
label_1:
#line 817
c_rt_lib0clear(&___nl__4);
#line 818
c_rt_lib0clear(&___nl__0);
#line 818
c_rt_lib0clear(&___nl__1);
#line 818
c_rt_lib0clear(&___nl__2);
#line 818
return ___nl__3;
#line 818
c_rt_lib0clear(&___nl__2);
#line 818
c_rt_lib0clear(&___nl__3);
#line 818
c_rt_lib0clear(&___nl__0);
#line 818
c_rt_lib0clear(&___nl__1);
#line 818
return NULL;
}

ImmT type_checker_priv0check_special_function(ImmT ___nl__0,ImmT ___nl__1,ImmT ___nl__2,ImmT * ___ref___3,ImmT * ___ref___4,ImmT * ___ref___5) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
c_rt_lib0arg_val(___nl__2);
type_checker_priv0__const__init();
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
ImmT ___nl__9 = NULL;
ImmT ___nl__10 = NULL;
ImmT ___nl__11 = NULL;
ImmT ___nl__12 = NULL;
ImmT ___nl__13 = NULL;
ImmT ___nl__14 = NULL;
#line 822
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(99)));
#line 822
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(76)));
#line 822
c_rt_lib0move(&___nl__6, type_checker_priv0get_function_name(___nl__7, ___nl__8));
#line 822
c_rt_lib0clear(&___nl__8);
#line 822
c_rt_lib0clear(&___nl__7);
#line 824
c_rt_lib0move(&___nl__7,___get_global_const(1093));
#line 824
c_rt_lib0move(&___nl__7, c_rt_lib0eq(___nl__6, ___nl__7));
#line 824
if(c_rt_lib0check_true_native(___nl__7)){ goto label_3;}
#line 824
c_rt_lib0move(&___nl__7,___get_global_const(1094));
#line 824
c_rt_lib0move(&___nl__7, c_rt_lib0eq(___nl__6, ___nl__7));
#line 824
label_3:
#line 824
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 824
if(c_rt_lib0check_true_native(___nl__7)){ goto label_2;}
#line 825
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(73)));
#line 825
c_rt_lib0move(&___nl__10,___get_global_const(1));
#line 825
c_rt_lib0move(&___nl__9, c_rt_lib0array_get(___nl__9, ___nl__10));
#line 825
c_rt_lib0clear(&___nl__10);
#line 825
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__9, ___get_global_const(234)));
#line 825
c_rt_lib0move(&___nl__8, ptd_parser0try_value_to_ptd(___nl__9));
#line 825
c_rt_lib0clear(&___nl__9);
#line 825
c_rt_lib0move(&___nl__9, c_rt_lib0priv_is(___nl__8, ___get_global_const(43)));
#line 825
if(c_rt_lib0check_true_native(___nl__9)){ goto label_5;}
#line 828
c_rt_lib0move(&___nl__9, c_rt_lib0priv_is(___nl__8, ___get_global_const(44)));
#line 828
if(c_rt_lib0check_true_native(___nl__9)){ goto label_6;}
#line 828
c_rt_lib0move(&___nl__9,___get_global_const(74));
#line 828
c_rt_lib0move(&___nl__9, c_rt_lib0array_mk(2, ___nl__9, ___nl__8));
#line 828
nl_die_arg(___nl__9);
#line 825
label_5:
#line 825
c_rt_lib0move(&___nl__10, c_rt_lib0priv_as(___nl__8, ___get_global_const(43)));
#line 826
c_rt_lib0delete(type_checker_priv0add_error(___ref___5, ___nl__10));
#line 827
c_rt_lib0move(&___nl__11, tct0tct_im());
#line 827
c_rt_lib0copy(&___nl__12, ___nl__11);
#line 827
c_rt_lib0hash_set_value_dec(&___nl__0, ___get_global_const(72), ___nl__12);
#line 827
c_rt_lib0clear(&___nl__11);
#line 827
c_rt_lib0clear(&___nl__12);
#line 827
c_rt_lib0clear(&___nl__10);
#line 828
goto label_4;
#line 828
label_6:
#line 828
c_rt_lib0move(&___nl__10, c_rt_lib0priv_as(___nl__8, ___get_global_const(44)));
#line 829
c_rt_lib0move(&___nl__13,___get_global_const(2));
#line 829
c_rt_lib0move(&___nl__12, c_rt_lib0array_get(___nl__2, ___nl__13));
#line 829
c_rt_lib0clear(&___nl__13);
#line 829
c_rt_lib0move(&___nl__11, ptd_system0cast_type(___nl__10, ___nl__12, ___ref___3, ___ref___5));
#line 829
c_rt_lib0clear(&___nl__12);
#line 830
c_rt_lib0move(&___nl__13,___get_global_const(43));
#line 830
c_rt_lib0move(&___nl__12, ov0is(___nl__11, ___nl__13));
#line 830
c_rt_lib0clear(&___nl__13);
#line 830
c_rt_lib0move(&___nl__12, c_rt_lib0not(___nl__12));
#line 830
if(c_rt_lib0check_true_native(___nl__12)){ goto label_8;}
#line 831
c_rt_lib0move(&___nl__13,___get_global_const(1102));
#line 831
c_rt_lib0move(&___nl__14, type_checker_priv0get_print_check_info(___nl__11));
#line 831
c_rt_lib0move(&___nl__13, c_rt_lib0concat_add(___nl__13, ___nl__14));
#line 831
c_rt_lib0clear(&___nl__14);
#line 831
c_rt_lib0delete(type_checker_priv0add_error(___ref___5, ___nl__13));
#line 831
c_rt_lib0clear(&___nl__13);
#line 832
goto label_8;
#line 832
label_8:
#line 832
c_rt_lib0clear(&___nl__12);
#line 833
c_rt_lib0copy(&___nl__12, ___nl__10);
#line 833
c_rt_lib0hash_set_value_dec(&___nl__0, ___get_global_const(72), ___nl__12);
#line 833
c_rt_lib0clear(&___nl__12);
#line 834
c_rt_lib0delete(type_checker_priv0check_types_imported(___nl__10, ___ref___3, ___ref___5));
#line 834
c_rt_lib0clear(&___nl__11);
#line 834
c_rt_lib0clear(&___nl__10);
#line 835
goto label_4;
#line 835
label_4:
#line 835
c_rt_lib0clear(&___nl__8);
#line 835
c_rt_lib0clear(&___nl__9);
#line 836
goto label_2;
#line 836
label_2:
#line 836
c_rt_lib0clear(&___nl__7);
#line 837
c_rt_lib0move(&___nl__7,___get_global_const(655));
#line 837
c_rt_lib0move(&___nl__7, c_rt_lib0eq(___nl__6, ___nl__7));
#line 837
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 837
if(c_rt_lib0check_true_native(___nl__7)){ goto label_10;}
#line 838
c_rt_lib0move(&___nl__10,___get_global_const(2));
#line 838
c_rt_lib0move(&___nl__9, c_rt_lib0array_get(___nl__2, ___nl__10));
#line 838
c_rt_lib0clear(&___nl__10);
#line 838
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__9, ___get_global_const(72)));
#line 838
c_rt_lib0move(&___nl__8, tct0arr(___nl__9));
#line 838
c_rt_lib0clear(&___nl__9);
#line 838
c_rt_lib0move(&___nl__10,___get_global_const(2));
#line 838
c_rt_lib0move(&___nl__9, c_rt_lib0get_ref_arr(___nl__2, ___nl__10));
#line 838
c_rt_lib0copy(&___nl__11, ___nl__8);
#line 838
c_rt_lib0hash_set_value_dec(&___nl__9, ___get_global_const(72), ___nl__11);
#line 838
c_rt_lib0delete(c_rt_lib0set_ref_arr(&___nl__2, ___nl__10, ___nl__9));
#line 838
c_rt_lib0clear(&___nl__8);
#line 838
c_rt_lib0clear(&___nl__9);
#line 838
c_rt_lib0clear(&___nl__10);
#line 838
c_rt_lib0clear(&___nl__11);
#line 839
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(73)));
#line 839
c_rt_lib0move(&___nl__9,___get_global_const(1));
#line 839
c_rt_lib0move(&___nl__8, c_rt_lib0array_get(___nl__8, ___nl__9));
#line 839
c_rt_lib0clear(&___nl__9);
#line 839
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__8, ___get_global_const(234)));
#line 839
c_rt_lib0move(&___nl__10,___get_global_const(1));
#line 839
c_rt_lib0move(&___nl__9, c_rt_lib0array_get(___nl__2, ___nl__10));
#line 839
c_rt_lib0clear(&___nl__10);
#line 839
c_rt_lib0move(&___nl__11,___get_global_const(2));
#line 839
c_rt_lib0move(&___nl__10, c_rt_lib0array_get(___nl__2, ___nl__11));
#line 839
c_rt_lib0clear(&___nl__11);
#line 839
c_rt_lib0move(&___nl__12, tct0empty());
#line 839
c_rt_lib0move(&___nl__11, tct0arr(___nl__12));
#line 839
c_rt_lib0clear(&___nl__12);
#line 839
c_rt_lib0delete(type_checker_priv0set_type_to_lval_spec(___nl__8, ___nl__9, ___nl__10, ___nl__11, ___ref___3, ___ref___4, ___ref___5));
#line 839
c_rt_lib0clear(&___nl__11);
#line 839
c_rt_lib0clear(&___nl__10);
#line 839
c_rt_lib0clear(&___nl__9);
#line 839
c_rt_lib0clear(&___nl__8);
#line 841
goto label_10;
#line 841
label_10:
#line 841
c_rt_lib0clear(&___nl__7);
#line 842
c_rt_lib0move(&___nl__7,___get_global_const(658));
#line 842
c_rt_lib0move(&___nl__7, c_rt_lib0eq(___nl__6, ___nl__7));
#line 842
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 842
if(c_rt_lib0check_true_native(___nl__7)){ goto label_12;}
#line 843
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(73)));
#line 843
c_rt_lib0move(&___nl__9,___get_global_const(1));
#line 843
c_rt_lib0move(&___nl__8, c_rt_lib0array_get(___nl__8, ___nl__9));
#line 843
c_rt_lib0clear(&___nl__9);
#line 843
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__8, ___get_global_const(234)));
#line 843
c_rt_lib0move(&___nl__10,___get_global_const(1));
#line 843
c_rt_lib0move(&___nl__9, c_rt_lib0array_get(___nl__2, ___nl__10));
#line 843
c_rt_lib0clear(&___nl__10);
#line 843
c_rt_lib0move(&___nl__11,___get_global_const(2));
#line 843
c_rt_lib0move(&___nl__10, c_rt_lib0array_get(___nl__2, ___nl__11));
#line 843
c_rt_lib0clear(&___nl__11);
#line 843
c_rt_lib0move(&___nl__12, tct0empty());
#line 843
c_rt_lib0move(&___nl__11, tct0arr(___nl__12));
#line 843
c_rt_lib0clear(&___nl__12);
#line 843
c_rt_lib0delete(type_checker_priv0set_type_to_lval_spec(___nl__8, ___nl__9, ___nl__10, ___nl__11, ___ref___3, ___ref___4, ___ref___5));
#line 843
c_rt_lib0clear(&___nl__11);
#line 843
c_rt_lib0clear(&___nl__10);
#line 843
c_rt_lib0clear(&___nl__9);
#line 843
c_rt_lib0clear(&___nl__8);
#line 845
goto label_12;
#line 845
label_12:
#line 845
c_rt_lib0clear(&___nl__7);
#line 846
c_rt_lib0move(&___nl__7,___get_global_const(657));
#line 846
c_rt_lib0move(&___nl__7, c_rt_lib0eq(___nl__6, ___nl__7));
#line 846
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 846
if(c_rt_lib0check_true_native(___nl__7)){ goto label_14;}
#line 847
c_rt_lib0move(&___nl__9,___get_global_const(1));
#line 847
c_rt_lib0move(&___nl__8, c_rt_lib0array_get(___nl__2, ___nl__9));
#line 847
c_rt_lib0clear(&___nl__9);
#line 847
c_rt_lib0clear(&___nl__0);
#line 847
c_rt_lib0clear(&___nl__1);
#line 847
c_rt_lib0clear(&___nl__2);
#line 847
c_rt_lib0clear(&___nl__6);
#line 847
c_rt_lib0clear(&___nl__7);
#line 847
return ___nl__8;
#line 847
c_rt_lib0clear(&___nl__8);
#line 848
goto label_14;
#line 848
label_14:
#line 848
c_rt_lib0clear(&___nl__7);
#line 850
c_rt_lib0move(&___nl__7,___get_global_const(664));
#line 850
c_rt_lib0move(&___nl__7, c_rt_lib0eq(___nl__6, ___nl__7));
#line 850
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 850
if(c_rt_lib0check_true_native(___nl__7)){ goto label_16;}
#line 851
c_rt_lib0move(&___nl__10,___get_global_const(137));
#line 851
c_rt_lib0move(&___nl__9, c_rt_lib0array_get(___nl__2, ___nl__10));
#line 851
c_rt_lib0clear(&___nl__10);
#line 851
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__9, ___get_global_const(72)));
#line 851
c_rt_lib0move(&___nl__8, tct0hash(___nl__9));
#line 851
c_rt_lib0clear(&___nl__9);
#line 851
c_rt_lib0move(&___nl__10,___get_global_const(137));
#line 851
c_rt_lib0move(&___nl__9, c_rt_lib0get_ref_arr(___nl__2, ___nl__10));
#line 851
c_rt_lib0copy(&___nl__11, ___nl__8);
#line 851
c_rt_lib0hash_set_value_dec(&___nl__9, ___get_global_const(72), ___nl__11);
#line 851
c_rt_lib0delete(c_rt_lib0set_ref_arr(&___nl__2, ___nl__10, ___nl__9));
#line 851
c_rt_lib0clear(&___nl__8);
#line 851
c_rt_lib0clear(&___nl__9);
#line 851
c_rt_lib0clear(&___nl__10);
#line 851
c_rt_lib0clear(&___nl__11);
#line 852
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(73)));
#line 852
c_rt_lib0move(&___nl__9,___get_global_const(1));
#line 852
c_rt_lib0move(&___nl__8, c_rt_lib0array_get(___nl__8, ___nl__9));
#line 852
c_rt_lib0clear(&___nl__9);
#line 852
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__8, ___get_global_const(234)));
#line 852
c_rt_lib0move(&___nl__10,___get_global_const(1));
#line 852
c_rt_lib0move(&___nl__9, c_rt_lib0array_get(___nl__2, ___nl__10));
#line 852
c_rt_lib0clear(&___nl__10);
#line 852
c_rt_lib0move(&___nl__11,___get_global_const(137));
#line 852
c_rt_lib0move(&___nl__10, c_rt_lib0array_get(___nl__2, ___nl__11));
#line 852
c_rt_lib0clear(&___nl__11);
#line 852
c_rt_lib0move(&___nl__12, c_rt_lib0hash_mk(0));
#line 852
c_rt_lib0move(&___nl__11, tct0rec(___nl__12));
#line 852
c_rt_lib0clear(&___nl__12);
#line 852
c_rt_lib0delete(type_checker_priv0set_type_to_lval_spec(___nl__8, ___nl__9, ___nl__10, ___nl__11, ___ref___3, ___ref___4, ___ref___5));
#line 852
c_rt_lib0clear(&___nl__11);
#line 852
c_rt_lib0clear(&___nl__10);
#line 852
c_rt_lib0clear(&___nl__9);
#line 852
c_rt_lib0clear(&___nl__8);
#line 854
goto label_16;
#line 854
label_16:
#line 854
c_rt_lib0clear(&___nl__7);
#line 855
c_rt_lib0move(&___nl__7,___get_global_const(665));
#line 855
c_rt_lib0move(&___nl__7, c_rt_lib0eq(___nl__6, ___nl__7));
#line 855
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 855
if(c_rt_lib0check_true_native(___nl__7)){ goto label_18;}
#line 856
c_rt_lib0move(&___nl__10,___get_global_const(1));
#line 856
c_rt_lib0move(&___nl__9, c_rt_lib0array_get(___nl__2, ___nl__10));
#line 856
c_rt_lib0clear(&___nl__10);
#line 856
c_rt_lib0move(&___nl__8, ptd_system0can_delete(___nl__9, ___ref___3, ___ref___5));
#line 856
c_rt_lib0clear(&___nl__9);
#line 857
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__8, ___get_global_const(72)));
#line 857
c_rt_lib0move(&___nl__9, c_rt_lib0priv_is(___nl__9, ___get_global_const(725)));
#line 857
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__9));
#line 857
if(c_rt_lib0check_true_native(___nl__9)){ goto label_20;}
#line 858
c_rt_lib0copy(&___nl__10, ___nl__8);
#line 859
c_rt_lib0move(&___nl__13, tct0empty());
#line 859
c_rt_lib0move(&___nl__12, tct0hash(___nl__13));
#line 859
c_rt_lib0clear(&___nl__13);
#line 859
c_rt_lib0move(&___nl__13, c_rt_lib0hash_get_value_dec(___nl__8, ___get_global_const(72)));
#line 859
c_rt_lib0move(&___nl__11, ptd_system0cross_type(___nl__12, ___nl__13, ___ref___3, ___ref___5));
#line 859
c_rt_lib0clear(&___nl__13);
#line 859
c_rt_lib0clear(&___nl__12);
#line 859
c_rt_lib0copy(&___nl__12, ___nl__11);
#line 859
c_rt_lib0hash_set_value_dec(&___nl__10, ___get_global_const(72), ___nl__12);
#line 859
c_rt_lib0clear(&___nl__11);
#line 859
c_rt_lib0clear(&___nl__12);
#line 860
c_rt_lib0move(&___nl__11, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(73)));
#line 860
c_rt_lib0move(&___nl__12,___get_global_const(1));
#line 860
c_rt_lib0move(&___nl__11, c_rt_lib0array_get(___nl__11, ___nl__12));
#line 860
c_rt_lib0clear(&___nl__12);
#line 860
c_rt_lib0move(&___nl__11, c_rt_lib0hash_get_value_dec(___nl__11, ___get_global_const(234)));
#line 860
c_rt_lib0move(&___nl__13, c_rt_lib0hash_mk(0));
#line 860
c_rt_lib0move(&___nl__12, tct0rec(___nl__13));
#line 860
c_rt_lib0clear(&___nl__13);
#line 860
c_rt_lib0delete(type_checker_priv0set_type_to_lval_spec(___nl__11, ___nl__8, ___nl__10, ___nl__12, ___ref___3, ___ref___4, ___ref___5));
#line 860
c_rt_lib0clear(&___nl__12);
#line 860
c_rt_lib0clear(&___nl__11);
#line 860
c_rt_lib0clear(&___nl__10);
#line 861
goto label_20;
#line 861
label_20:
#line 861
c_rt_lib0clear(&___nl__9);
#line 861
c_rt_lib0clear(&___nl__8);
#line 862
goto label_18;
#line 862
label_18:
#line 862
c_rt_lib0clear(&___nl__7);
#line 863
c_rt_lib0move(&___nl__7,___get_global_const(662));
#line 863
c_rt_lib0move(&___nl__7, c_rt_lib0eq(___nl__6, ___nl__7));
#line 863
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 863
if(c_rt_lib0check_true_native(___nl__7)){ goto label_22;}
#line 864
c_rt_lib0move(&___nl__10,___get_global_const(1));
#line 864
c_rt_lib0move(&___nl__9, c_rt_lib0array_get(___nl__2, ___nl__10));
#line 864
c_rt_lib0clear(&___nl__10);
#line 864
c_rt_lib0move(&___nl__8, ptd_system0can_delete(___nl__9, ___ref___3, ___ref___5));
#line 864
c_rt_lib0clear(&___nl__9);
#line 865
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__8, ___get_global_const(39)));
#line 865
c_rt_lib0copy(&___nl__10, ___nl__9);
#line 865
c_rt_lib0hash_set_value_dec(&___nl__0, ___get_global_const(39), ___nl__10);
#line 865
c_rt_lib0clear(&___nl__9);
#line 865
c_rt_lib0clear(&___nl__10);
#line 866
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__8, ___get_global_const(72)));
#line 866
c_rt_lib0move(&___nl__9, c_rt_lib0priv_is(___nl__9, ___get_global_const(724)));
#line 866
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__9));
#line 866
if(c_rt_lib0check_true_native(___nl__9)){ goto label_24;}
#line 866
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__8, ___get_global_const(72)));
#line 866
c_rt_lib0move(&___nl__10, c_rt_lib0priv_as(___nl__10, ___get_global_const(724)));
#line 866
c_rt_lib0copy(&___nl__11, ___nl__10);
#line 866
c_rt_lib0hash_set_value_dec(&___nl__0, ___get_global_const(72), ___nl__11);
#line 866
c_rt_lib0clear(&___nl__10);
#line 866
c_rt_lib0clear(&___nl__11);
#line 866
goto label_24;
#line 866
label_24:
#line 866
c_rt_lib0clear(&___nl__9);
#line 866
c_rt_lib0clear(&___nl__8);
#line 867
goto label_22;
#line 867
label_22:
#line 867
c_rt_lib0clear(&___nl__7);
#line 868
c_rt_lib0move(&___nl__7,___get_global_const(1096));
#line 868
c_rt_lib0move(&___nl__7, c_rt_lib0eq(___nl__6, ___nl__7));
#line 868
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 868
if(c_rt_lib0check_true_native(___nl__7)){ goto label_26;}
#line 869
c_rt_lib0move(&___nl__10,___get_global_const(1));
#line 869
c_rt_lib0move(&___nl__9, c_rt_lib0array_get(___nl__2, ___nl__10));
#line 869
c_rt_lib0clear(&___nl__10);
#line 869
c_rt_lib0move(&___nl__8, ptd_system0can_delete(___nl__9, ___ref___3, ___ref___5));
#line 869
c_rt_lib0clear(&___nl__9);
#line 870
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__8, ___get_global_const(39)));
#line 870
c_rt_lib0copy(&___nl__10, ___nl__9);
#line 870
c_rt_lib0hash_set_value_dec(&___nl__0, ___get_global_const(39), ___nl__10);
#line 870
c_rt_lib0clear(&___nl__9);
#line 870
c_rt_lib0clear(&___nl__10);
#line 871
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__8, ___get_global_const(72)));
#line 871
c_rt_lib0move(&___nl__9, c_rt_lib0priv_is(___nl__9, ___get_global_const(724)));
#line 871
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__9));
#line 871
if(c_rt_lib0check_true_native(___nl__9)){ goto label_28;}
#line 871
c_rt_lib0move(&___nl__11, c_rt_lib0hash_get_value_dec(___nl__8, ___get_global_const(72)));
#line 871
c_rt_lib0move(&___nl__11, c_rt_lib0priv_as(___nl__11, ___get_global_const(724)));
#line 871
c_rt_lib0move(&___nl__10, tct0arr(___nl__11));
#line 871
c_rt_lib0clear(&___nl__11);
#line 871
c_rt_lib0copy(&___nl__11, ___nl__10);
#line 871
c_rt_lib0hash_set_value_dec(&___nl__0, ___get_global_const(72), ___nl__11);
#line 871
c_rt_lib0clear(&___nl__10);
#line 871
c_rt_lib0clear(&___nl__11);
#line 871
goto label_28;
#line 871
label_28:
#line 871
c_rt_lib0clear(&___nl__9);
#line 871
c_rt_lib0clear(&___nl__8);
#line 872
goto label_26;
#line 872
label_26:
#line 872
c_rt_lib0clear(&___nl__7);
#line 873
c_rt_lib0move(&___nl__7,___get_global_const(682));
#line 873
c_rt_lib0move(&___nl__7, c_rt_lib0eq(___nl__6, ___nl__7));
#line 873
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 873
if(c_rt_lib0check_true_native(___nl__7)){ goto label_30;}
#line 874
c_rt_lib0move(&___nl__8, tct0tct_im());
#line 874
c_rt_lib0move(&___nl__10,___get_global_const(1));
#line 874
c_rt_lib0move(&___nl__9, c_rt_lib0array_get(___nl__2, ___nl__10));
#line 874
c_rt_lib0clear(&___nl__10);
#line 874
c_rt_lib0delete(ptd_system0check_assignment(___nl__8, ___nl__9, ___ref___3, ___ref___5));
#line 874
c_rt_lib0clear(&___nl__9);
#line 874
c_rt_lib0clear(&___nl__8);
#line 875
goto label_30;
#line 875
label_30:
#line 875
c_rt_lib0clear(&___nl__7);
#line 876
c_rt_lib0move(&___nl__7,___get_global_const(1097));
#line 876
c_rt_lib0move(&___nl__7, c_rt_lib0eq(___nl__6, ___nl__7));
#line 876
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 876
if(c_rt_lib0check_true_native(___nl__7)){ goto label_32;}
#line 877
c_rt_lib0move(&___nl__8, tct0tct_im());
#line 877
c_rt_lib0move(&___nl__10,___get_global_const(1));
#line 877
c_rt_lib0move(&___nl__9, c_rt_lib0array_get(___nl__2, ___nl__10));
#line 877
c_rt_lib0clear(&___nl__10);
#line 877
c_rt_lib0delete(ptd_system0check_assignment(___nl__8, ___nl__9, ___ref___3, ___ref___5));
#line 877
c_rt_lib0clear(&___nl__9);
#line 877
c_rt_lib0clear(&___nl__8);
#line 878
goto label_32;
#line 878
label_32:
#line 878
c_rt_lib0clear(&___nl__7);
#line 879
c_rt_lib0move(&___nl__7,___get_global_const(1103));
#line 879
c_rt_lib0move(&___nl__7, c_rt_lib0eq(___nl__6, ___nl__7));
#line 879
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 879
if(c_rt_lib0check_true_native(___nl__7)){ goto label_34;}
#line 880
c_rt_lib0move(&___nl__9,___get_global_const(1));
#line 880
c_rt_lib0move(&___nl__8, c_rt_lib0array_get(___nl__2, ___nl__9));
#line 880
c_rt_lib0clear(&___nl__9);
#line 880
c_rt_lib0clear(&___nl__0);
#line 880
c_rt_lib0clear(&___nl__1);
#line 880
c_rt_lib0clear(&___nl__2);
#line 880
c_rt_lib0clear(&___nl__6);
#line 880
c_rt_lib0clear(&___nl__7);
#line 880
return ___nl__8;
#line 880
c_rt_lib0clear(&___nl__8);
#line 881
goto label_34;
#line 881
label_34:
#line 881
c_rt_lib0clear(&___nl__7);
#line 883
c_rt_lib0clear(&___nl__1);
#line 883
c_rt_lib0clear(&___nl__2);
#line 883
c_rt_lib0clear(&___nl__6);
#line 883
return ___nl__0;
#line 883
c_rt_lib0clear(&___nl__6);
#line 883
c_rt_lib0clear(&___nl__0);
#line 883
c_rt_lib0clear(&___nl__1);
#line 883
c_rt_lib0clear(&___nl__2);
#line 883
return NULL;
}

ImmT type_checker_priv0rec_get_var_from_lval(ImmT ___nl__0,ImmT * ___ref___1) {
c_rt_lib0arg_val(___nl__0);
type_checker_priv0__const__init();
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
#line 887
c_rt_lib0move(&___nl__2, c_rt_lib0array_mk(0));
#line 888
c_rt_lib0move(&___nl__4,___get_global_const(772));
#line 888
c_rt_lib0move(&___nl__3, ov0is(___nl__0, ___nl__4));
#line 888
c_rt_lib0clear(&___nl__4);
#line 888
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 888
if(c_rt_lib0check_true_native(___nl__3)){ goto label_2;}
#line 889
c_rt_lib0copy(&___nl__4, ___nl__0);
#line 889
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__4, ___get_global_const(772)));
#line 890
c_rt_lib0move(&___nl__5, c_rt_lib0ov_mk_arg(___get_global_const(772), ___nl__4));
#line 890
c_rt_lib0delete(array0push(&___nl__2, ___nl__5));
#line 890
c_rt_lib0clear(&___nl__5);
#line 890
c_rt_lib0clear(&___nl__4);
#line 891
goto label_1;
#line 891
label_2:
#line 891
c_rt_lib0move(&___nl__4,___get_global_const(219));
#line 891
c_rt_lib0move(&___nl__3, ov0is(___nl__0, ___nl__4));
#line 891
c_rt_lib0clear(&___nl__4);
#line 891
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 891
if(c_rt_lib0check_true_native(___nl__3)){ goto label_3;}
#line 892
c_rt_lib0copy(&___nl__4, ___nl__0);
#line 892
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__4, ___get_global_const(219)));
#line 893
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(401)));
#line 893
c_rt_lib0move(&___nl__6,___get_global_const(773));
#line 893
c_rt_lib0move(&___nl__5, c_rt_lib0eq(___nl__5, ___nl__6));
#line 893
c_rt_lib0clear(&___nl__6);
#line 893
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 893
if(c_rt_lib0check_true_native(___nl__5)){ goto label_5;}
#line 894
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(235)));
#line 894
c_rt_lib0move(&___nl__6, type_checker_priv0rec_get_var_from_lval(___nl__7, ___ref___1));
#line 894
c_rt_lib0clear(&___nl__7);
#line 894
c_rt_lib0copy(&___nl__2, ___nl__6);
#line 894
c_rt_lib0clear(&___nl__6);
#line 895
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(236)));
#line 895
c_rt_lib0move(&___nl__6, c_rt_lib0priv_as(___nl__6, ___get_global_const(778)));
#line 895
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_arg(___get_global_const(974), ___nl__6));
#line 895
c_rt_lib0delete(array0push(&___nl__2, ___nl__6));
#line 895
c_rt_lib0clear(&___nl__6);
#line 896
goto label_4;
#line 896
label_5:
#line 896
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(401)));
#line 896
c_rt_lib0move(&___nl__6,___get_global_const(774));
#line 896
c_rt_lib0move(&___nl__5, c_rt_lib0eq(___nl__5, ___nl__6));
#line 896
c_rt_lib0clear(&___nl__6);
#line 896
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 896
if(c_rt_lib0check_true_native(___nl__5)){ goto label_6;}
#line 897
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(235)));
#line 897
c_rt_lib0move(&___nl__6, type_checker_priv0rec_get_var_from_lval(___nl__7, ___ref___1));
#line 897
c_rt_lib0clear(&___nl__7);
#line 897
c_rt_lib0copy(&___nl__2, ___nl__6);
#line 897
c_rt_lib0clear(&___nl__6);
#line 898
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_none(___get_global_const(277)));
#line 898
c_rt_lib0delete(array0push(&___nl__2, ___nl__6));
#line 898
c_rt_lib0clear(&___nl__6);
#line 899
goto label_4;
#line 899
label_6:
#line 900
c_rt_lib0move(&___nl__6,___get_global_const(1104));
#line 900
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(401)));
#line 900
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__7));
#line 900
c_rt_lib0clear(&___nl__7);
#line 900
c_rt_lib0move(&___nl__7,___get_global_const(1105));
#line 900
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__7));
#line 900
c_rt_lib0clear(&___nl__7);
#line 900
c_rt_lib0delete(type_checker_priv0add_error(___ref___1, ___nl__6));
#line 900
c_rt_lib0clear(&___nl__6);
#line 901
goto label_4;
#line 901
label_4:
#line 901
c_rt_lib0clear(&___nl__5);
#line 901
c_rt_lib0clear(&___nl__4);
#line 903
goto label_1;
#line 903
label_3:
#line 904
c_rt_lib0move(&___nl__4,___get_global_const(1106));
#line 904
c_rt_lib0delete(type_checker_priv0add_error(___ref___1, ___nl__4));
#line 904
c_rt_lib0clear(&___nl__4);
#line 905
goto label_1;
#line 905
label_1:
#line 905
c_rt_lib0clear(&___nl__3);
#line 907
c_rt_lib0clear(&___nl__0);
#line 907
return ___nl__2;
#line 907
c_rt_lib0clear(&___nl__2);
#line 907
c_rt_lib0clear(&___nl__0);
#line 907
return NULL;
}

ImmT type_checker_priv0mk_new_type_lval(ImmT ___nl__0,ImmT ___nl__1,ImmT ___nl__2,ImmT ___nl__3,ImmT * ___ref___4,ImmT * ___ref___5) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
c_rt_lib0arg_val(___nl__2);
c_rt_lib0arg_val(___nl__3);
type_checker_priv0__const__init();
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
ImmT ___nl__9 = NULL;
ImmT ___nl__10 = NULL;
ImmT ___nl__11 = NULL;
ImmT ___nl__12 = NULL;
ImmT ___nl__13 = NULL;
#line 912
c_rt_lib0move(&___nl__7,___get_global_const(2));
#line 912
c_rt_lib0move(&___nl__8, array0len(___nl__0));
#line 912
c_rt_lib0move(&___nl__9,___get_global_const(2));
#line 912
c_rt_lib0move(&___nl__8, c_rt_lib0sub_mod(___nl__8, ___nl__9));
#line 912
c_rt_lib0clear(&___nl__9);
#line 912
c_rt_lib0move(&___nl__6, array0subarray(___nl__0, ___nl__7, ___nl__8));
#line 912
c_rt_lib0clear(&___nl__8);
#line 912
c_rt_lib0clear(&___nl__7);
#line 912
c_rt_lib0copy(&___nl__0, ___nl__6);
#line 912
c_rt_lib0clear(&___nl__6);
#line 913
c_rt_lib0move(&___nl__6, array0len(___nl__0));
#line 913
c_rt_lib0move(&___nl__7,___get_global_const(1));
#line 913
c_rt_lib0move(&___nl__6, c_rt_lib0num_eq(___nl__6, ___nl__7));
#line 913
c_rt_lib0clear(&___nl__7);
#line 913
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 913
if(c_rt_lib0check_true_native(___nl__6)){ goto label_2;}
#line 914
c_rt_lib0move(&___nl__7, type_checker_priv0is_known(___nl__2));
#line 914
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 914
if(c_rt_lib0check_true_native(___nl__7)){ goto label_4;}
#line 915
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(72)));
#line 915
c_rt_lib0move(&___nl__8, ptd_system0check_assignment(___nl__9, ___nl__1, ___ref___4, ___ref___5));
#line 915
c_rt_lib0clear(&___nl__9);
#line 916
c_rt_lib0move(&___nl__10,___get_global_const(43));
#line 916
c_rt_lib0move(&___nl__9, ov0is(___nl__8, ___nl__10));
#line 916
c_rt_lib0clear(&___nl__10);
#line 916
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__9));
#line 916
if(c_rt_lib0check_true_native(___nl__9)){ goto label_6;}
#line 917
c_rt_lib0move(&___nl__10,___get_global_const(1107));
#line 917
c_rt_lib0move(&___nl__11, type_checker_priv0get_print_check_info(___nl__8));
#line 917
c_rt_lib0move(&___nl__10, c_rt_lib0concat_add(___nl__10, ___nl__11));
#line 917
c_rt_lib0clear(&___nl__11);
#line 917
c_rt_lib0delete(type_checker_priv0add_error(___ref___5, ___nl__10));
#line 917
c_rt_lib0clear(&___nl__10);
#line 918
goto label_6;
#line 918
label_6:
#line 918
c_rt_lib0clear(&___nl__9);
#line 919
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(72)));
#line 919
c_rt_lib0clear(&___nl__0);
#line 919
c_rt_lib0clear(&___nl__1);
#line 919
c_rt_lib0clear(&___nl__2);
#line 919
c_rt_lib0clear(&___nl__3);
#line 919
c_rt_lib0clear(&___nl__6);
#line 919
c_rt_lib0clear(&___nl__7);
#line 919
c_rt_lib0clear(&___nl__8);
#line 919
return ___nl__9;
#line 919
c_rt_lib0clear(&___nl__9);
#line 919
c_rt_lib0clear(&___nl__8);
#line 920
goto label_3;
#line 920
label_4:
#line 921
c_rt_lib0move(&___nl__8, tct0tct_im());
#line 921
c_rt_lib0delete(ptd_system0check_assignment(___nl__8, ___nl__1, ___ref___4, ___ref___5));
#line 921
c_rt_lib0clear(&___nl__8);
#line 922
c_rt_lib0move(&___nl__8, ptd_system0can_create(___nl__2, ___ref___4, ___ref___5));
#line 922
c_rt_lib0copy(&___nl__2, ___nl__8);
#line 922
c_rt_lib0clear(&___nl__8);
#line 923
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(72)));
#line 923
c_rt_lib0move(&___nl__8, ptd_system0is_equal(___nl__9, ___nl__3));
#line 923
c_rt_lib0clear(&___nl__9);
#line 923
c_rt_lib0move(&___nl__8, c_rt_lib0not(___nl__8));
#line 923
if(c_rt_lib0check_true_native(___nl__8)){ goto label_8;}
#line 923
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(72)));
#line 923
c_rt_lib0clear(&___nl__0);
#line 923
c_rt_lib0clear(&___nl__1);
#line 923
c_rt_lib0clear(&___nl__2);
#line 923
c_rt_lib0clear(&___nl__3);
#line 923
c_rt_lib0clear(&___nl__6);
#line 923
c_rt_lib0clear(&___nl__7);
#line 923
c_rt_lib0clear(&___nl__8);
#line 923
return ___nl__9;
#line 923
c_rt_lib0clear(&___nl__9);
#line 923
goto label_8;
#line 923
label_8:
#line 923
c_rt_lib0clear(&___nl__8);
#line 924
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(72)));
#line 924
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(72)));
#line 924
c_rt_lib0move(&___nl__8, ptd_system0cross_type(___nl__9, ___nl__10, ___ref___4, ___ref___5));
#line 924
c_rt_lib0clear(&___nl__10);
#line 924
c_rt_lib0clear(&___nl__9);
#line 924
c_rt_lib0clear(&___nl__0);
#line 924
c_rt_lib0clear(&___nl__1);
#line 924
c_rt_lib0clear(&___nl__2);
#line 924
c_rt_lib0clear(&___nl__3);
#line 924
c_rt_lib0clear(&___nl__6);
#line 924
c_rt_lib0clear(&___nl__7);
#line 924
return ___nl__8;
#line 924
c_rt_lib0clear(&___nl__8);
#line 925
goto label_3;
#line 925
label_3:
#line 925
c_rt_lib0clear(&___nl__7);
#line 926
goto label_1;
#line 926
label_2:
#line 927
c_rt_lib0move(&___nl__7, ptd_system0can_create(___nl__2, ___ref___4, ___ref___5));
#line 927
c_rt_lib0copy(&___nl__2, ___nl__7);
#line 927
c_rt_lib0clear(&___nl__7);
#line 928
c_rt_lib0move(&___nl__8,___get_global_const(1));
#line 928
c_rt_lib0move(&___nl__7, c_rt_lib0array_get(___nl__0, ___nl__8));
#line 928
c_rt_lib0clear(&___nl__8);
#line 928
c_rt_lib0move(&___nl__8, c_rt_lib0priv_is(___nl__7, ___get_global_const(772)));
#line 928
if(c_rt_lib0check_true_native(___nl__8)){ goto label_10;}
#line 930
c_rt_lib0move(&___nl__8, c_rt_lib0priv_is(___nl__7, ___get_global_const(277)));
#line 930
if(c_rt_lib0check_true_native(___nl__8)){ goto label_11;}
#line 934
c_rt_lib0move(&___nl__8, c_rt_lib0priv_is(___nl__7, ___get_global_const(974)));
#line 934
if(c_rt_lib0check_true_native(___nl__8)){ goto label_12;}
#line 934
c_rt_lib0move(&___nl__8,___get_global_const(74));
#line 934
c_rt_lib0move(&___nl__8, c_rt_lib0array_mk(2, ___nl__8, ___nl__7));
#line 934
nl_die_arg(___nl__8);
#line 928
label_10:
#line 928
c_rt_lib0move(&___nl__9, c_rt_lib0priv_as(___nl__7, ___get_global_const(772)));
#line 929
c_rt_lib0move(&___nl__10, c_rt_lib0array_mk(1, ___nl__0));
#line 929
nl_die_arg(___nl__10);
#line 929
c_rt_lib0clear(&___nl__10);
#line 929
c_rt_lib0clear(&___nl__9);
#line 930
goto label_9;
#line 930
label_11:
#line 931
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(72)));
#line 931
c_rt_lib0move(&___nl__11,___get_global_const(723));
#line 931
c_rt_lib0move(&___nl__9, ov0is(___nl__10, ___nl__11));
#line 931
c_rt_lib0clear(&___nl__11);
#line 931
c_rt_lib0clear(&___nl__10);
#line 931
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__9));
#line 931
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__9));
#line 931
if(c_rt_lib0check_true_native(___nl__9)){ goto label_14;}
#line 931
c_rt_lib0move(&___nl__10, tct0tct_im());
#line 931
c_rt_lib0clear(&___nl__0);
#line 931
c_rt_lib0clear(&___nl__1);
#line 931
c_rt_lib0clear(&___nl__2);
#line 931
c_rt_lib0clear(&___nl__3);
#line 931
c_rt_lib0clear(&___nl__6);
#line 931
c_rt_lib0clear(&___nl__7);
#line 931
c_rt_lib0clear(&___nl__8);
#line 931
c_rt_lib0clear(&___nl__9);
#line 931
return ___nl__10;
#line 931
c_rt_lib0clear(&___nl__10);
#line 931
goto label_14;
#line 931
label_14:
#line 931
c_rt_lib0clear(&___nl__9);
#line 932
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(72)));
#line 932
c_rt_lib0move(&___nl__9, c_rt_lib0priv_as(___nl__9, ___get_global_const(723)));
#line 932
c_rt_lib0copy(&___nl__10, ___nl__9);
#line 932
c_rt_lib0hash_set_value_dec(&___nl__2, ___get_global_const(72), ___nl__10);
#line 932
c_rt_lib0clear(&___nl__9);
#line 932
c_rt_lib0clear(&___nl__10);
#line 933
c_rt_lib0move(&___nl__10, type_checker_priv0mk_new_type_lval(___nl__0, ___nl__1, ___nl__2, ___nl__3, ___ref___4, ___ref___5));
#line 933
c_rt_lib0move(&___nl__9, tct0arr(___nl__10));
#line 933
c_rt_lib0clear(&___nl__10);
#line 933
c_rt_lib0clear(&___nl__0);
#line 933
c_rt_lib0clear(&___nl__1);
#line 933
c_rt_lib0clear(&___nl__2);
#line 933
c_rt_lib0clear(&___nl__3);
#line 933
c_rt_lib0clear(&___nl__6);
#line 933
c_rt_lib0clear(&___nl__7);
#line 933
c_rt_lib0clear(&___nl__8);
#line 933
return ___nl__9;
#line 933
c_rt_lib0clear(&___nl__9);
#line 934
goto label_9;
#line 934
label_12:
#line 934
c_rt_lib0move(&___nl__9, c_rt_lib0priv_as(___nl__7, ___get_global_const(974)));
#line 935
c_rt_lib0move(&___nl__11, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(72)));
#line 935
c_rt_lib0move(&___nl__12,___get_global_const(725));
#line 935
c_rt_lib0move(&___nl__10, ov0is(___nl__11, ___nl__12));
#line 935
c_rt_lib0clear(&___nl__12);
#line 935
c_rt_lib0clear(&___nl__11);
#line 935
c_rt_lib0move(&___nl__10, c_rt_lib0not(___nl__10));
#line 935
c_rt_lib0move(&___nl__10, c_rt_lib0not(___nl__10));
#line 935
if(c_rt_lib0check_true_native(___nl__10)){ goto label_16;}
#line 935
c_rt_lib0move(&___nl__11, tct0tct_im());
#line 935
c_rt_lib0clear(&___nl__0);
#line 935
c_rt_lib0clear(&___nl__1);
#line 935
c_rt_lib0clear(&___nl__2);
#line 935
c_rt_lib0clear(&___nl__3);
#line 935
c_rt_lib0clear(&___nl__6);
#line 935
c_rt_lib0clear(&___nl__7);
#line 935
c_rt_lib0clear(&___nl__8);
#line 935
c_rt_lib0clear(&___nl__9);
#line 935
c_rt_lib0clear(&___nl__10);
#line 935
return ___nl__11;
#line 935
c_rt_lib0clear(&___nl__11);
#line 935
goto label_16;
#line 935
label_16:
#line 935
c_rt_lib0clear(&___nl__10);
#line 936
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(72)));
#line 936
c_rt_lib0move(&___nl__10, c_rt_lib0priv_as(___nl__10, ___get_global_const(725)));
#line 937
c_rt_lib0move(&___nl__11, hash0has_key(___nl__10, ___nl__9));
#line 937
c_rt_lib0move(&___nl__11, c_rt_lib0not(___nl__11));
#line 937
if(c_rt_lib0check_true_native(___nl__11)){ goto label_18;}
#line 938
c_rt_lib0move(&___nl__12, hash0get_value(___nl__10, ___nl__9));
#line 938
c_rt_lib0copy(&___nl__13, ___nl__12);
#line 938
c_rt_lib0hash_set_value_dec(&___nl__2, ___get_global_const(72), ___nl__13);
#line 938
c_rt_lib0clear(&___nl__12);
#line 938
c_rt_lib0clear(&___nl__13);
#line 939
c_rt_lib0move(&___nl__12, type_checker_priv0mk_new_type_lval(___nl__0, ___nl__1, ___nl__2, ___nl__3, ___ref___4, ___ref___5));
#line 939
c_rt_lib0delete(hash0set_value(&___nl__10, ___nl__9, ___nl__12));
#line 939
c_rt_lib0clear(&___nl__12);
#line 940
goto label_17;
#line 940
label_18:
#line 941
c_rt_lib0move(&___nl__12, array0len(___nl__0));
#line 941
c_rt_lib0move(&___nl__13,___get_global_const(2));
#line 941
c_rt_lib0move(&___nl__12, c_rt_lib0num_ne(___nl__12, ___nl__13));
#line 941
c_rt_lib0clear(&___nl__13);
#line 941
c_rt_lib0move(&___nl__12, c_rt_lib0not(___nl__12));
#line 941
if(c_rt_lib0check_true_native(___nl__12)){ goto label_20;}
#line 942
c_rt_lib0move(&___nl__13, tct0tct_im());
#line 942
c_rt_lib0clear(&___nl__0);
#line 942
c_rt_lib0clear(&___nl__1);
#line 942
c_rt_lib0clear(&___nl__2);
#line 942
c_rt_lib0clear(&___nl__3);
#line 942
c_rt_lib0clear(&___nl__6);
#line 942
c_rt_lib0clear(&___nl__7);
#line 942
c_rt_lib0clear(&___nl__8);
#line 942
c_rt_lib0clear(&___nl__9);
#line 942
c_rt_lib0clear(&___nl__10);
#line 942
c_rt_lib0clear(&___nl__11);
#line 942
c_rt_lib0clear(&___nl__12);
#line 942
return ___nl__13;
#line 942
c_rt_lib0clear(&___nl__13);
#line 943
goto label_20;
#line 943
label_20:
#line 943
c_rt_lib0clear(&___nl__12);
#line 944
c_rt_lib0move(&___nl__12, tct0tct_im());
#line 944
c_rt_lib0delete(ptd_system0check_assignment(___nl__12, ___nl__1, ___ref___4, ___ref___5));
#line 944
c_rt_lib0clear(&___nl__12);
#line 945
c_rt_lib0move(&___nl__12, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(72)));
#line 945
c_rt_lib0delete(hash0set_value(&___nl__10, ___nl__9, ___nl__12));
#line 945
c_rt_lib0clear(&___nl__12);
#line 946
goto label_17;
#line 946
label_17:
#line 946
c_rt_lib0clear(&___nl__11);
#line 948
c_rt_lib0move(&___nl__11, tct0rec(___nl__10));
#line 948
c_rt_lib0clear(&___nl__0);
#line 948
c_rt_lib0clear(&___nl__1);
#line 948
c_rt_lib0clear(&___nl__2);
#line 948
c_rt_lib0clear(&___nl__3);
#line 948
c_rt_lib0clear(&___nl__6);
#line 948
c_rt_lib0clear(&___nl__7);
#line 948
c_rt_lib0clear(&___nl__8);
#line 948
c_rt_lib0clear(&___nl__9);
#line 948
c_rt_lib0clear(&___nl__10);
#line 948
return ___nl__11;
#line 948
c_rt_lib0clear(&___nl__11);
#line 948
c_rt_lib0clear(&___nl__10);
#line 948
c_rt_lib0clear(&___nl__9);
#line 949
goto label_9;
#line 949
label_9:
#line 949
c_rt_lib0clear(&___nl__7);
#line 949
c_rt_lib0clear(&___nl__8);
#line 950
goto label_1;
#line 950
label_1:
#line 950
c_rt_lib0clear(&___nl__6);
#line 950
c_rt_lib0clear(&___nl__0);
#line 950
c_rt_lib0clear(&___nl__1);
#line 950
c_rt_lib0clear(&___nl__2);
#line 950
c_rt_lib0clear(&___nl__3);
#line 950
return NULL;
}

ImmT type_checker_priv0set_type_to_lval(ImmT ___nl__0,ImmT ___nl__1,ImmT ___nl__2,ImmT * ___ref___3,ImmT * ___ref___4,ImmT * ___ref___5) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
c_rt_lib0arg_val(___nl__2);
type_checker_priv0__const__init();
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
#line 954
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(72)));
#line 954
c_rt_lib0move(&___nl__6, type_checker_priv0set_type_to_lval_spec(___nl__0, ___nl__1, ___nl__2, ___nl__7, ___ref___3, ___ref___4, ___ref___5));
#line 954
c_rt_lib0clear(&___nl__7);
#line 954
c_rt_lib0clear(&___nl__0);
#line 954
c_rt_lib0clear(&___nl__1);
#line 954
c_rt_lib0clear(&___nl__2);
#line 954
return ___nl__6;
#line 954
c_rt_lib0clear(&___nl__6);
#line 954
c_rt_lib0clear(&___nl__0);
#line 954
c_rt_lib0clear(&___nl__1);
#line 954
c_rt_lib0clear(&___nl__2);
#line 954
return NULL;
}

ImmT type_checker_priv0set_type_to_lval_spec(ImmT ___nl__0,ImmT ___nl__1,ImmT ___nl__2,ImmT ___nl__3,ImmT * ___ref___4,ImmT * ___ref___5,ImmT * ___ref___6) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
c_rt_lib0arg_val(___nl__2);
c_rt_lib0arg_val(___nl__3);
type_checker_priv0__const__init();
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
#line 959
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(*___ref___6, ___get_global_const(17)));
#line 959
c_rt_lib0move(&___nl__7, array0len(___nl__8));
#line 959
c_rt_lib0clear(&___nl__8);
#line 960
c_rt_lib0move(&___nl__8, type_checker_priv0rec_get_var_from_lval(___nl__0, ___ref___6));
#line 961
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(*___ref___6, ___get_global_const(17)));
#line 961
c_rt_lib0move(&___nl__9, array0len(___nl__10));
#line 961
c_rt_lib0clear(&___nl__10);
#line 961
c_rt_lib0move(&___nl__9, c_rt_lib0num_ne(___nl__7, ___nl__9));
#line 961
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__9));
#line 961
if(c_rt_lib0check_true_native(___nl__9)){ goto label_2;}
#line 961
c_rt_lib0clear(&___nl__0);
#line 961
c_rt_lib0clear(&___nl__2);
#line 961
c_rt_lib0clear(&___nl__3);
#line 961
c_rt_lib0clear(&___nl__7);
#line 961
c_rt_lib0clear(&___nl__8);
#line 961
c_rt_lib0clear(&___nl__9);
#line 961
return ___nl__1;
#line 961
goto label_2;
#line 961
label_2:
#line 961
c_rt_lib0clear(&___nl__9);
#line 962
c_rt_lib0move(&___nl__11,___get_global_const(1));
#line 962
c_rt_lib0move(&___nl__10, c_rt_lib0array_get(___nl__8, ___nl__11));
#line 962
c_rt_lib0clear(&___nl__11);
#line 962
c_rt_lib0move(&___nl__11,___get_global_const(772));
#line 962
c_rt_lib0move(&___nl__9, ov0as(___nl__10, ___nl__11));
#line 962
c_rt_lib0clear(&___nl__11);
#line 962
c_rt_lib0clear(&___nl__10);
#line 963
c_rt_lib0move(&___nl__10, hash0has_key(*___ref___5, ___nl__9));
#line 963
c_rt_lib0move(&___nl__10, c_rt_lib0not(___nl__10));
#line 963
c_rt_lib0move(&___nl__10, c_rt_lib0not(___nl__10));
#line 963
if(c_rt_lib0check_true_native(___nl__10)){ goto label_4;}
#line 964
c_rt_lib0move(&___nl__11,___get_global_const(1108));
#line 964
c_rt_lib0move(&___nl__11, c_rt_lib0concat_add(___nl__11, ___nl__9));
#line 964
c_rt_lib0move(&___nl__12,___get_global_const(1109));
#line 964
c_rt_lib0move(&___nl__11, c_rt_lib0concat_add(___nl__11, ___nl__12));
#line 964
c_rt_lib0clear(&___nl__12);
#line 964
c_rt_lib0delete(type_checker_priv0add_error(___ref___6, ___nl__11));
#line 964
c_rt_lib0clear(&___nl__11);
#line 965
c_rt_lib0clear(&___nl__0);
#line 965
c_rt_lib0clear(&___nl__2);
#line 965
c_rt_lib0clear(&___nl__3);
#line 965
c_rt_lib0clear(&___nl__7);
#line 965
c_rt_lib0clear(&___nl__8);
#line 965
c_rt_lib0clear(&___nl__9);
#line 965
c_rt_lib0clear(&___nl__10);
#line 965
return ___nl__1;
#line 966
goto label_4;
#line 966
label_4:
#line 966
c_rt_lib0clear(&___nl__10);
#line 967
c_rt_lib0move(&___nl__10, hash0get_value(*___ref___5, ___nl__9));
#line 968
c_rt_lib0move(&___nl__11, c_rt_lib0hash_get_value_dec(___nl__10, ___get_global_const(1017)));
#line 968
c_rt_lib0move(&___nl__12, c_rt_lib0priv_is(___nl__11, ___get_global_const(41)));
#line 968
if(c_rt_lib0check_true_native(___nl__12)){ goto label_6;}
#line 972
c_rt_lib0move(&___nl__12, c_rt_lib0priv_is(___nl__11, ___get_global_const(42)));
#line 972
if(c_rt_lib0check_true_native(___nl__12)){ goto label_7;}
#line 972
c_rt_lib0move(&___nl__12,___get_global_const(74));
#line 972
c_rt_lib0move(&___nl__12, c_rt_lib0array_mk(2, ___nl__12, ___nl__11));
#line 972
nl_die_arg(___nl__12);
#line 968
label_6:
#line 969
c_rt_lib0move(&___nl__15, c_rt_lib0hash_get_value_dec(___nl__10, ___get_global_const(72)));
#line 969
c_rt_lib0move(&___nl__16, c_rt_lib0ov_mk_none(___get_global_const(985)));
#line 969
c_rt_lib0move(&___nl__14, c_rt_lib0hash_mk(2, ___get_global_const(72), ___nl__15, ___get_global_const(39), ___nl__16));
#line 969
c_rt_lib0clear(&___nl__15);
#line 969
c_rt_lib0clear(&___nl__16);
#line 969
c_rt_lib0move(&___nl__13, type_checker_priv0mk_new_type_lval(___nl__8, ___nl__2, ___nl__14, ___nl__3, ___ref___4, ___ref___6));
#line 969
c_rt_lib0clear(&___nl__14);
#line 970
c_rt_lib0move(&___nl__15, c_rt_lib0ov_mk_none(___get_global_const(41)));
#line 970
c_rt_lib0move(&___nl__14, c_rt_lib0hash_mk(2, ___get_global_const(1017), ___nl__15, ___get_global_const(72), ___nl__13));
#line 970
c_rt_lib0clear(&___nl__15);
#line 970
c_rt_lib0delete(hash0set_value(___ref___5, ___nl__9, ___nl__14));
#line 970
c_rt_lib0clear(&___nl__14);
#line 971
c_rt_lib0clear(&___nl__0);
#line 971
c_rt_lib0clear(&___nl__1);
#line 971
c_rt_lib0clear(&___nl__3);
#line 971
c_rt_lib0clear(&___nl__7);
#line 971
c_rt_lib0clear(&___nl__8);
#line 971
c_rt_lib0clear(&___nl__9);
#line 971
c_rt_lib0clear(&___nl__10);
#line 971
c_rt_lib0clear(&___nl__11);
#line 971
c_rt_lib0clear(&___nl__12);
#line 971
c_rt_lib0clear(&___nl__13);
#line 971
return ___nl__2;
#line 971
c_rt_lib0clear(&___nl__13);
#line 972
goto label_5;
#line 972
label_7:
#line 973
c_rt_lib0move(&___nl__14, c_rt_lib0hash_get_value_dec(___nl__10, ___get_global_const(72)));
#line 973
c_rt_lib0move(&___nl__15, c_rt_lib0ov_mk_none(___get_global_const(979)));
#line 973
c_rt_lib0move(&___nl__13, c_rt_lib0hash_mk(2, ___get_global_const(72), ___nl__14, ___get_global_const(39), ___nl__15));
#line 973
c_rt_lib0clear(&___nl__14);
#line 973
c_rt_lib0clear(&___nl__15);
#line 973
c_rt_lib0delete(type_checker_priv0mk_new_type_lval(___nl__8, ___nl__2, ___nl__13, ___nl__3, ___ref___4, ___ref___6));
#line 973
c_rt_lib0clear(&___nl__13);
#line 974
c_rt_lib0clear(&___nl__0);
#line 974
c_rt_lib0clear(&___nl__2);
#line 974
c_rt_lib0clear(&___nl__3);
#line 974
c_rt_lib0clear(&___nl__7);
#line 974
c_rt_lib0clear(&___nl__8);
#line 974
c_rt_lib0clear(&___nl__9);
#line 974
c_rt_lib0clear(&___nl__10);
#line 974
c_rt_lib0clear(&___nl__11);
#line 974
c_rt_lib0clear(&___nl__12);
#line 974
return ___nl__1;
#line 975
goto label_5;
#line 975
label_5:
#line 975
c_rt_lib0clear(&___nl__11);
#line 975
c_rt_lib0clear(&___nl__12);
#line 975
c_rt_lib0clear(&___nl__7);
#line 975
c_rt_lib0clear(&___nl__8);
#line 975
c_rt_lib0clear(&___nl__9);
#line 975
c_rt_lib0clear(&___nl__10);
#line 975
c_rt_lib0clear(&___nl__0);
#line 975
c_rt_lib0clear(&___nl__1);
#line 975
c_rt_lib0clear(&___nl__2);
#line 975
c_rt_lib0clear(&___nl__3);
#line 975
return NULL;
}

ImmT type_checker_priv0get_type_left_site_equation(ImmT ___nl__0,ImmT * ___ref___1,ImmT * ___ref___2,ImmT * ___ref___3) {
c_rt_lib0arg_val(___nl__0);
type_checker_priv0__const__init();
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
#line 980
c_rt_lib0move(&___nl__6,___get_global_const(219));
#line 980
c_rt_lib0move(&___nl__4, ov0is(___nl__0, ___nl__6));
#line 980
c_rt_lib0clear(&___nl__6);
#line 980
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__4));
#line 980
if(c_rt_lib0check_true_native(___nl__5)){ goto label_3;}
#line 980
c_rt_lib0copy(&___nl__4, ___nl__0);
#line 980
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__4, ___get_global_const(219)));
#line 980
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(401)));
#line 980
c_rt_lib0move(&___nl__6,___get_global_const(773));
#line 980
c_rt_lib0move(&___nl__4, c_rt_lib0eq(___nl__4, ___nl__6));
#line 980
c_rt_lib0clear(&___nl__6);
#line 980
label_3:
#line 980
c_rt_lib0clear(&___nl__5);
#line 980
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 980
if(c_rt_lib0check_true_native(___nl__4)){ goto label_2;}
#line 981
c_rt_lib0copy(&___nl__6, ___nl__0);
#line 981
c_rt_lib0move(&___nl__6, c_rt_lib0priv_as(___nl__6, ___get_global_const(219)));
#line 981
c_rt_lib0move(&___nl__5, type_checker_priv0get_type_record_key(___nl__6, ___ref___1, ___ref___2, ___ref___3));
#line 981
c_rt_lib0clear(&___nl__6);
#line 981
c_rt_lib0clear(&___nl__0);
#line 981
c_rt_lib0clear(&___nl__4);
#line 981
return ___nl__5;
#line 981
c_rt_lib0clear(&___nl__5);
#line 982
goto label_1;
#line 982
label_2:
#line 983
c_rt_lib0move(&___nl__5, type_checker_priv0check_val(___nl__0, ___ref___1, ___ref___2, ___ref___3));
#line 983
c_rt_lib0clear(&___nl__0);
#line 983
c_rt_lib0clear(&___nl__4);
#line 983
return ___nl__5;
#line 983
c_rt_lib0clear(&___nl__5);
#line 984
goto label_1;
#line 984
label_1:
#line 984
c_rt_lib0clear(&___nl__4);
#line 984
c_rt_lib0clear(&___nl__0);
#line 984
return NULL;
}

ImmT type_checker_priv0get_type_record_key(ImmT ___nl__0,ImmT * ___ref___1,ImmT * ___ref___2,ImmT * ___ref___3) {
c_rt_lib0arg_val(___nl__0);
type_checker_priv0__const__init();
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
ImmT ___nl__9 = NULL;
ImmT ___nl__10 = NULL;
#line 988
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(235)));
#line 988
c_rt_lib0move(&___nl__4, type_checker_priv0check_val(___nl__5, ___ref___1, ___ref___2, ___ref___3));
#line 988
c_rt_lib0clear(&___nl__5);
#line 989
c_rt_lib0move(&___nl__5, ptd_system0can_delete(___nl__4, ___ref___1, ___ref___3));
#line 989
c_rt_lib0copy(&___nl__4, ___nl__5);
#line 989
c_rt_lib0clear(&___nl__5);
#line 990
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(72)));
#line 990
c_rt_lib0move(&___nl__5, c_rt_lib0priv_is(___nl__5, ___get_global_const(725)));
#line 990
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 990
if(c_rt_lib0check_true_native(___nl__5)){ goto label_2;}
#line 991
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(72)));
#line 991
c_rt_lib0move(&___nl__6, c_rt_lib0priv_as(___nl__6, ___get_global_const(725)));
#line 992
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(236)));
#line 992
c_rt_lib0move(&___nl__7, c_rt_lib0priv_as(___nl__7, ___get_global_const(778)));
#line 993
c_rt_lib0move(&___nl__8, hash0has_key(___nl__6, ___nl__7));
#line 993
c_rt_lib0move(&___nl__8, c_rt_lib0not(___nl__8));
#line 993
c_rt_lib0move(&___nl__8, c_rt_lib0not(___nl__8));
#line 993
if(c_rt_lib0check_true_native(___nl__8)){ goto label_4;}
#line 994
c_rt_lib0move(&___nl__9, type_checker_priv0is_known(___nl__4));
#line 994
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__9));
#line 994
if(c_rt_lib0check_true_native(___nl__9)){ goto label_6;}
#line 994
c_rt_lib0move(&___nl__10,___get_global_const(1110));
#line 994
c_rt_lib0move(&___nl__10, c_rt_lib0concat_add(___nl__10, ___nl__7));
#line 994
c_rt_lib0delete(type_checker_priv0add_error(___ref___3, ___nl__10));
#line 994
c_rt_lib0clear(&___nl__10);
#line 994
goto label_6;
#line 994
label_6:
#line 994
c_rt_lib0clear(&___nl__9);
#line 995
c_rt_lib0move(&___nl__9, tct0tct_im());
#line 995
c_rt_lib0copy(&___nl__10, ___nl__9);
#line 995
c_rt_lib0hash_set_value_dec(&___nl__4, ___get_global_const(72), ___nl__10);
#line 995
c_rt_lib0clear(&___nl__9);
#line 995
c_rt_lib0clear(&___nl__10);
#line 996
c_rt_lib0clear(&___nl__0);
#line 996
c_rt_lib0clear(&___nl__5);
#line 996
c_rt_lib0clear(&___nl__6);
#line 996
c_rt_lib0clear(&___nl__7);
#line 996
c_rt_lib0clear(&___nl__8);
#line 996
return ___nl__4;
#line 997
goto label_4;
#line 997
label_4:
#line 997
c_rt_lib0clear(&___nl__8);
#line 998
c_rt_lib0move(&___nl__8, hash0get_value(___nl__6, ___nl__7));
#line 998
c_rt_lib0copy(&___nl__9, ___nl__8);
#line 998
c_rt_lib0hash_set_value_dec(&___nl__4, ___get_global_const(72), ___nl__9);
#line 998
c_rt_lib0clear(&___nl__8);
#line 998
c_rt_lib0clear(&___nl__9);
#line 999
c_rt_lib0clear(&___nl__0);
#line 999
c_rt_lib0clear(&___nl__5);
#line 999
c_rt_lib0clear(&___nl__6);
#line 999
c_rt_lib0clear(&___nl__7);
#line 999
return ___nl__4;
#line 999
c_rt_lib0clear(&___nl__6);
#line 999
c_rt_lib0clear(&___nl__7);
#line 1000
goto label_2;
#line 1000
label_2:
#line 1000
c_rt_lib0clear(&___nl__5);
#line 1001
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(72)));
#line 1001
c_rt_lib0move(&___nl__5, c_rt_lib0priv_is(___nl__5, ___get_global_const(724)));
#line 1001
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 1001
if(c_rt_lib0check_true_native(___nl__5)){ goto label_8;}
#line 1002
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(72)));
#line 1002
c_rt_lib0move(&___nl__6, c_rt_lib0priv_as(___nl__6, ___get_global_const(724)));
#line 1002
c_rt_lib0copy(&___nl__7, ___nl__6);
#line 1002
c_rt_lib0hash_set_value_dec(&___nl__4, ___get_global_const(72), ___nl__7);
#line 1002
c_rt_lib0clear(&___nl__6);
#line 1002
c_rt_lib0clear(&___nl__7);
#line 1003
c_rt_lib0clear(&___nl__0);
#line 1003
c_rt_lib0clear(&___nl__5);
#line 1003
return ___nl__4;
#line 1004
goto label_8;
#line 1004
label_8:
#line 1004
c_rt_lib0clear(&___nl__5);
#line 1005
c_rt_lib0move(&___nl__7, c_rt_lib0hash_mk(0));
#line 1005
c_rt_lib0move(&___nl__6, tct0rec(___nl__7));
#line 1005
c_rt_lib0clear(&___nl__7);
#line 1005
c_rt_lib0move(&___nl__5, ptd_system0is_accepted(___nl__4, ___nl__6, ___ref___1, ___ref___3));
#line 1005
c_rt_lib0clear(&___nl__6);
#line 1005
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 1005
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 1005
if(c_rt_lib0check_true_native(___nl__5)){ goto label_10;}
#line 1006
c_rt_lib0move(&___nl__6,___get_global_const(1111));
#line 1006
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(72)));
#line 1006
c_rt_lib0move(&___nl__7, type_checker_priv0get_print_tct_type_name(___nl__8));
#line 1006
c_rt_lib0clear(&___nl__8);
#line 1006
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__7));
#line 1006
c_rt_lib0clear(&___nl__7);
#line 1006
c_rt_lib0delete(type_checker_priv0add_error(___ref___3, ___nl__6));
#line 1006
c_rt_lib0clear(&___nl__6);
#line 1008
goto label_10;
#line 1008
label_10:
#line 1008
c_rt_lib0clear(&___nl__5);
#line 1009
c_rt_lib0move(&___nl__5, tct0tct_im());
#line 1009
c_rt_lib0copy(&___nl__6, ___nl__5);
#line 1009
c_rt_lib0hash_set_value_dec(&___nl__4, ___get_global_const(72), ___nl__6);
#line 1009
c_rt_lib0clear(&___nl__5);
#line 1009
c_rt_lib0clear(&___nl__6);
#line 1010
c_rt_lib0clear(&___nl__0);
#line 1010
return ___nl__4;
#line 1010
c_rt_lib0clear(&___nl__4);
#line 1010
c_rt_lib0clear(&___nl__0);
#line 1010
return NULL;
}

ImmT type_checker_priv0get_type_from_bin_op_and_check(ImmT ___nl__0,ImmT * ___ref___1,ImmT * ___ref___2,ImmT * ___ref___3) {
c_rt_lib0arg_val(___nl__0);
type_checker_priv0__const__init();
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
ImmT ___nl__9 = NULL;
ImmT ___nl__10 = NULL;
ImmT ___nl__11 = NULL;
#line 1014
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(401)));
#line 1015
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(236)));
#line 1015
c_rt_lib0move(&___nl__5, type_checker_priv0check_val(___nl__6, ___ref___1, ___ref___2, ___ref___3));
#line 1015
c_rt_lib0clear(&___nl__6);
#line 1016
c_rt_lib0move(&___nl__6,___get_global_const(787));
#line 1016
c_rt_lib0move(&___nl__6, c_rt_lib0eq(___nl__4, ___nl__6));
#line 1016
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 1016
if(c_rt_lib0check_true_native(___nl__6)){ goto label_2;}
#line 1017
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(72)));
#line 1017
c_rt_lib0move(&___nl__9,___get_global_const(727));
#line 1017
c_rt_lib0move(&___nl__7, ov0is(___nl__8, ___nl__9));
#line 1017
c_rt_lib0clear(&___nl__9);
#line 1017
c_rt_lib0clear(&___nl__8);
#line 1017
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 1017
if(c_rt_lib0check_true_native(___nl__7)){ goto label_4;}
#line 1018
c_rt_lib0move(&___nl__8,___get_global_const(1112));
#line 1018
c_rt_lib0delete(type_checker_priv0add_error(___ref___3, ___nl__8));
#line 1018
c_rt_lib0clear(&___nl__8);
#line 1019
c_rt_lib0move(&___nl__9, tct0tct_im());
#line 1019
c_rt_lib0move(&___nl__10, c_rt_lib0ov_mk_none(___get_global_const(985)));
#line 1019
c_rt_lib0move(&___nl__8, c_rt_lib0hash_mk(2, ___get_global_const(72), ___nl__9, ___get_global_const(39), ___nl__10));
#line 1019
c_rt_lib0clear(&___nl__9);
#line 1019
c_rt_lib0clear(&___nl__10);
#line 1019
c_rt_lib0clear(&___nl__0);
#line 1019
c_rt_lib0clear(&___nl__4);
#line 1019
c_rt_lib0clear(&___nl__5);
#line 1019
c_rt_lib0clear(&___nl__6);
#line 1019
c_rt_lib0clear(&___nl__7);
#line 1019
return ___nl__8;
#line 1019
c_rt_lib0clear(&___nl__8);
#line 1020
goto label_4;
#line 1020
label_4:
#line 1020
c_rt_lib0clear(&___nl__7);
#line 1021
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(*___ref___3, ___get_global_const(17)));
#line 1021
c_rt_lib0move(&___nl__7, array0len(___nl__8));
#line 1021
c_rt_lib0clear(&___nl__8);
#line 1022
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(235)));
#line 1022
c_rt_lib0move(&___nl__8, type_checker_priv0get_type_left_site_equation(___nl__9, ___ref___1, ___ref___2, ___ref___3));
#line 1022
c_rt_lib0clear(&___nl__9);
#line 1023
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(*___ref___3, ___get_global_const(17)));
#line 1023
c_rt_lib0move(&___nl__9, array0len(___nl__10));
#line 1023
c_rt_lib0clear(&___nl__10);
#line 1023
c_rt_lib0move(&___nl__9, c_rt_lib0sub_mod(___nl__9, ___nl__7));
#line 1023
c_rt_lib0move(&___nl__10,___get_global_const(1));
#line 1023
c_rt_lib0move(&___nl__9, c_rt_lib0gt(___nl__9, ___nl__10));
#line 1023
c_rt_lib0clear(&___nl__10);
#line 1023
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__9));
#line 1023
if(c_rt_lib0check_true_native(___nl__9)){ goto label_6;}
#line 1023
c_rt_lib0clear(&___nl__0);
#line 1023
c_rt_lib0clear(&___nl__4);
#line 1023
c_rt_lib0clear(&___nl__5);
#line 1023
c_rt_lib0clear(&___nl__6);
#line 1023
c_rt_lib0clear(&___nl__7);
#line 1023
c_rt_lib0clear(&___nl__9);
#line 1023
return ___nl__8;
#line 1023
goto label_6;
#line 1023
label_6:
#line 1023
c_rt_lib0clear(&___nl__9);
#line 1024
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(235)));
#line 1024
c_rt_lib0move(&___nl__9, type_checker_priv0set_type_to_lval(___nl__10, ___nl__8, ___nl__5, ___ref___1, ___ref___2, ___ref___3));
#line 1024
c_rt_lib0clear(&___nl__10);
#line 1024
c_rt_lib0clear(&___nl__0);
#line 1024
c_rt_lib0clear(&___nl__4);
#line 1024
c_rt_lib0clear(&___nl__5);
#line 1024
c_rt_lib0clear(&___nl__6);
#line 1024
c_rt_lib0clear(&___nl__7);
#line 1024
c_rt_lib0clear(&___nl__8);
#line 1024
return ___nl__9;
#line 1024
c_rt_lib0clear(&___nl__9);
#line 1024
c_rt_lib0clear(&___nl__7);
#line 1024
c_rt_lib0clear(&___nl__8);
#line 1025
goto label_2;
#line 1025
label_2:
#line 1025
c_rt_lib0clear(&___nl__6);
#line 1027
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(235)));
#line 1027
c_rt_lib0move(&___nl__7, type_checker_priv0check_val(___nl__8, ___ref___1, ___ref___2, ___ref___3));
#line 1027
c_rt_lib0clear(&___nl__8);
#line 1027
c_rt_lib0move(&___nl__6, ptd_system0can_delete(___nl__7, ___ref___1, ___ref___3));
#line 1027
c_rt_lib0clear(&___nl__7);
#line 1029
c_rt_lib0move(&___nl__8, tct0tct_im());
#line 1029
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__6, ___get_global_const(39)));
#line 1029
c_rt_lib0move(&___nl__7, c_rt_lib0hash_mk(2, ___get_global_const(72), ___nl__8, ___get_global_const(39), ___nl__9));
#line 1029
c_rt_lib0clear(&___nl__8);
#line 1029
c_rt_lib0clear(&___nl__9);
#line 1030
c_rt_lib0move(&___nl__8,___get_global_const(773));
#line 1030
c_rt_lib0move(&___nl__8, c_rt_lib0eq(___nl__4, ___nl__8));
#line 1030
c_rt_lib0move(&___nl__8, c_rt_lib0not(___nl__8));
#line 1030
if(c_rt_lib0check_true_native(___nl__8)){ goto label_8;}
#line 1031
c_rt_lib0move(&___nl__9, type_checker_priv0get_type_record_key(___nl__0, ___ref___1, ___ref___2, ___ref___3));
#line 1031
c_rt_lib0clear(&___nl__0);
#line 1031
c_rt_lib0clear(&___nl__4);
#line 1031
c_rt_lib0clear(&___nl__5);
#line 1031
c_rt_lib0clear(&___nl__6);
#line 1031
c_rt_lib0clear(&___nl__7);
#line 1031
c_rt_lib0clear(&___nl__8);
#line 1031
return ___nl__9;
#line 1031
c_rt_lib0clear(&___nl__9);
#line 1032
goto label_8;
#line 1032
label_8:
#line 1032
c_rt_lib0clear(&___nl__8);
#line 1034
c_rt_lib0move(&___nl__8,___get_global_const(774));
#line 1034
c_rt_lib0move(&___nl__8, c_rt_lib0eq(___nl__4, ___nl__8));
#line 1034
c_rt_lib0move(&___nl__8, c_rt_lib0not(___nl__8));
#line 1034
if(c_rt_lib0check_true_native(___nl__8)){ goto label_10;}
#line 1035
c_rt_lib0move(&___nl__11, tct0tct_im());
#line 1035
c_rt_lib0move(&___nl__10, tct0arr(___nl__11));
#line 1035
c_rt_lib0clear(&___nl__11);
#line 1035
c_rt_lib0move(&___nl__9, ptd_system0is_accepted(___nl__6, ___nl__10, ___ref___1, ___ref___3));
#line 1035
c_rt_lib0clear(&___nl__10);
#line 1035
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__9));
#line 1035
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__9));
#line 1035
if(c_rt_lib0check_true_native(___nl__9)){ goto label_12;}
#line 1036
c_rt_lib0move(&___nl__10,___get_global_const(1113));
#line 1036
c_rt_lib0delete(type_checker_priv0add_error(___ref___3, ___nl__10));
#line 1036
c_rt_lib0clear(&___nl__10);
#line 1037
c_rt_lib0clear(&___nl__0);
#line 1037
c_rt_lib0clear(&___nl__4);
#line 1037
c_rt_lib0clear(&___nl__5);
#line 1037
c_rt_lib0clear(&___nl__6);
#line 1037
c_rt_lib0clear(&___nl__8);
#line 1037
c_rt_lib0clear(&___nl__9);
#line 1037
return ___nl__7;
#line 1038
goto label_12;
#line 1038
label_12:
#line 1038
c_rt_lib0clear(&___nl__9);
#line 1039
c_rt_lib0move(&___nl__10, tct0sim());
#line 1039
c_rt_lib0move(&___nl__9, ptd_system0is_accepted(___nl__5, ___nl__10, ___ref___1, ___ref___3));
#line 1039
c_rt_lib0clear(&___nl__10);
#line 1039
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__9));
#line 1039
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__9));
#line 1039
if(c_rt_lib0check_true_native(___nl__9)){ goto label_14;}
#line 1040
c_rt_lib0move(&___nl__10,___get_global_const(1114));
#line 1040
c_rt_lib0delete(type_checker_priv0add_error(___ref___3, ___nl__10));
#line 1040
c_rt_lib0clear(&___nl__10);
#line 1041
goto label_14;
#line 1041
label_14:
#line 1041
c_rt_lib0clear(&___nl__9);
#line 1042
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__6, ___get_global_const(72)));
#line 1042
c_rt_lib0move(&___nl__9, c_rt_lib0priv_is(___nl__9, ___get_global_const(723)));
#line 1042
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__9));
#line 1042
if(c_rt_lib0check_true_native(___nl__9)){ goto label_16;}
#line 1042
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__6, ___get_global_const(72)));
#line 1042
c_rt_lib0move(&___nl__10, c_rt_lib0priv_as(___nl__10, ___get_global_const(723)));
#line 1042
c_rt_lib0copy(&___nl__11, ___nl__10);
#line 1042
c_rt_lib0hash_set_value_dec(&___nl__6, ___get_global_const(72), ___nl__11);
#line 1042
c_rt_lib0clear(&___nl__10);
#line 1042
c_rt_lib0clear(&___nl__11);
#line 1042
goto label_16;
#line 1042
label_16:
#line 1042
c_rt_lib0clear(&___nl__9);
#line 1043
c_rt_lib0clear(&___nl__0);
#line 1043
c_rt_lib0clear(&___nl__4);
#line 1043
c_rt_lib0clear(&___nl__5);
#line 1043
c_rt_lib0clear(&___nl__7);
#line 1043
c_rt_lib0clear(&___nl__8);
#line 1043
return ___nl__6;
#line 1044
goto label_10;
#line 1044
label_10:
#line 1044
c_rt_lib0clear(&___nl__8);
#line 1046
c_rt_lib0move(&___nl__8, tc_types0get_bin_op_def(___nl__4));
#line 1047
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__8, ___get_global_const(1003)));
#line 1047
c_rt_lib0move(&___nl__9, ptd_system0is_accepted(___nl__6, ___nl__10, ___ref___1, ___ref___3));
#line 1047
c_rt_lib0clear(&___nl__10);
#line 1047
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__9));
#line 1047
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__9));
#line 1047
if(c_rt_lib0check_true_native(___nl__9)){ goto label_18;}
#line 1048
c_rt_lib0move(&___nl__10,___get_global_const(1115));
#line 1048
c_rt_lib0move(&___nl__10, c_rt_lib0concat_add(___nl__10, ___nl__4));
#line 1048
c_rt_lib0move(&___nl__11,___get_global_const(421));
#line 1048
c_rt_lib0move(&___nl__10, c_rt_lib0concat_add(___nl__10, ___nl__11));
#line 1048
c_rt_lib0clear(&___nl__11);
#line 1048
c_rt_lib0delete(type_checker_priv0add_error(___ref___3, ___nl__10));
#line 1048
c_rt_lib0clear(&___nl__10);
#line 1049
goto label_18;
#line 1049
label_18:
#line 1049
c_rt_lib0clear(&___nl__9);
#line 1050
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__8, ___get_global_const(1004)));
#line 1050
c_rt_lib0move(&___nl__9, ptd_system0is_accepted(___nl__5, ___nl__10, ___ref___1, ___ref___3));
#line 1050
c_rt_lib0clear(&___nl__10);
#line 1050
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__9));
#line 1050
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__9));
#line 1050
if(c_rt_lib0check_true_native(___nl__9)){ goto label_20;}
#line 1051
c_rt_lib0move(&___nl__10,___get_global_const(1116));
#line 1051
c_rt_lib0move(&___nl__10, c_rt_lib0concat_add(___nl__10, ___nl__4));
#line 1051
c_rt_lib0move(&___nl__11,___get_global_const(421));
#line 1051
c_rt_lib0move(&___nl__10, c_rt_lib0concat_add(___nl__10, ___nl__11));
#line 1051
c_rt_lib0clear(&___nl__11);
#line 1051
c_rt_lib0delete(type_checker_priv0add_error(___ref___3, ___nl__10));
#line 1051
c_rt_lib0clear(&___nl__10);
#line 1052
goto label_20;
#line 1052
label_20:
#line 1052
c_rt_lib0clear(&___nl__9);
#line 1054
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__8, ___get_global_const(291)));
#line 1054
c_rt_lib0move(&___nl__11, c_rt_lib0ov_mk_none(___get_global_const(985)));
#line 1054
c_rt_lib0move(&___nl__9, c_rt_lib0hash_mk(2, ___get_global_const(72), ___nl__10, ___get_global_const(39), ___nl__11));
#line 1054
c_rt_lib0clear(&___nl__10);
#line 1054
c_rt_lib0clear(&___nl__11);
#line 1054
c_rt_lib0clear(&___nl__0);
#line 1054
c_rt_lib0clear(&___nl__4);
#line 1054
c_rt_lib0clear(&___nl__5);
#line 1054
c_rt_lib0clear(&___nl__6);
#line 1054
c_rt_lib0clear(&___nl__7);
#line 1054
c_rt_lib0clear(&___nl__8);
#line 1054
return ___nl__9;
#line 1054
c_rt_lib0clear(&___nl__9);
#line 1054
c_rt_lib0clear(&___nl__4);
#line 1054
c_rt_lib0clear(&___nl__5);
#line 1054
c_rt_lib0clear(&___nl__6);
#line 1054
c_rt_lib0clear(&___nl__7);
#line 1054
c_rt_lib0clear(&___nl__8);
#line 1054
c_rt_lib0clear(&___nl__0);
#line 1054
return NULL;
}

ImmT type_checker_priv0get_print_tct_type_name(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
type_checker_priv0__const__init();
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
#line 1057
c_rt_lib0move(&___nl__1, c_rt_lib0priv_is(___nl__0, ___get_global_const(730)));
#line 1057
if(c_rt_lib0check_true_native(___nl__1)){ goto label_2;}
#line 1059
c_rt_lib0move(&___nl__1, c_rt_lib0priv_is(___nl__0, ___get_global_const(722)));
#line 1059
if(c_rt_lib0check_true_native(___nl__1)){ goto label_3;}
#line 1061
c_rt_lib0move(&___nl__1, c_rt_lib0priv_is(___nl__0, ___get_global_const(727)));
#line 1061
if(c_rt_lib0check_true_native(___nl__1)){ goto label_4;}
#line 1063
c_rt_lib0move(&___nl__1, c_rt_lib0priv_is(___nl__0, ___get_global_const(728)));
#line 1063
if(c_rt_lib0check_true_native(___nl__1)){ goto label_5;}
#line 1065
c_rt_lib0move(&___nl__1, c_rt_lib0priv_is(___nl__0, ___get_global_const(726)));
#line 1065
if(c_rt_lib0check_true_native(___nl__1)){ goto label_6;}
#line 1067
c_rt_lib0move(&___nl__1, c_rt_lib0priv_is(___nl__0, ___get_global_const(723)));
#line 1067
if(c_rt_lib0check_true_native(___nl__1)){ goto label_7;}
#line 1069
c_rt_lib0move(&___nl__1, c_rt_lib0priv_is(___nl__0, ___get_global_const(729)));
#line 1069
if(c_rt_lib0check_true_native(___nl__1)){ goto label_8;}
#line 1079
c_rt_lib0move(&___nl__1, c_rt_lib0priv_is(___nl__0, ___get_global_const(725)));
#line 1079
if(c_rt_lib0check_true_native(___nl__1)){ goto label_9;}
#line 1085
c_rt_lib0move(&___nl__1, c_rt_lib0priv_is(___nl__0, ___get_global_const(724)));
#line 1085
if(c_rt_lib0check_true_native(___nl__1)){ goto label_10;}
#line 1085
c_rt_lib0move(&___nl__1,___get_global_const(74));
#line 1085
c_rt_lib0move(&___nl__1, c_rt_lib0array_mk(2, ___nl__1, ___nl__0));
#line 1085
nl_die_arg(___nl__1);
#line 1057
label_2:
#line 1058
c_rt_lib0move(&___nl__2,___get_global_const(0));
#line 1058
c_rt_lib0clear(&___nl__0);
#line 1058
c_rt_lib0clear(&___nl__1);
#line 1058
return ___nl__2;
#line 1058
c_rt_lib0clear(&___nl__2);
#line 1059
goto label_1;
#line 1059
label_3:
#line 1060
c_rt_lib0move(&___nl__2,___get_global_const(1117));
#line 1060
c_rt_lib0clear(&___nl__0);
#line 1060
c_rt_lib0clear(&___nl__1);
#line 1060
return ___nl__2;
#line 1060
c_rt_lib0clear(&___nl__2);
#line 1061
goto label_1;
#line 1061
label_4:
#line 1062
c_rt_lib0move(&___nl__2,___get_global_const(1118));
#line 1062
c_rt_lib0clear(&___nl__0);
#line 1062
c_rt_lib0clear(&___nl__1);
#line 1062
return ___nl__2;
#line 1062
c_rt_lib0clear(&___nl__2);
#line 1063
goto label_1;
#line 1063
label_5:
#line 1064
c_rt_lib0move(&___nl__2,___get_global_const(1119));
#line 1064
c_rt_lib0clear(&___nl__0);
#line 1064
c_rt_lib0clear(&___nl__1);
#line 1064
return ___nl__2;
#line 1064
c_rt_lib0clear(&___nl__2);
#line 1065
goto label_1;
#line 1065
label_6:
#line 1065
c_rt_lib0move(&___nl__2, c_rt_lib0priv_as(___nl__0, ___get_global_const(726)));
#line 1066
c_rt_lib0move(&___nl__3,___get_global_const(184));
#line 1066
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__2));
#line 1066
c_rt_lib0clear(&___nl__0);
#line 1066
c_rt_lib0clear(&___nl__1);
#line 1066
c_rt_lib0clear(&___nl__2);
#line 1066
return ___nl__3;
#line 1066
c_rt_lib0clear(&___nl__3);
#line 1066
c_rt_lib0clear(&___nl__2);
#line 1067
goto label_1;
#line 1067
label_7:
#line 1067
c_rt_lib0move(&___nl__2, c_rt_lib0priv_as(___nl__0, ___get_global_const(723)));
#line 1068
c_rt_lib0move(&___nl__3,___get_global_const(1120));
#line 1068
c_rt_lib0move(&___nl__4, type_checker_priv0get_print_tct_type_name(___nl__2));
#line 1068
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 1068
c_rt_lib0clear(&___nl__4);
#line 1068
c_rt_lib0move(&___nl__4,___get_global_const(176));
#line 1068
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 1068
c_rt_lib0clear(&___nl__4);
#line 1068
c_rt_lib0clear(&___nl__0);
#line 1068
c_rt_lib0clear(&___nl__1);
#line 1068
c_rt_lib0clear(&___nl__2);
#line 1068
return ___nl__3;
#line 1068
c_rt_lib0clear(&___nl__3);
#line 1068
c_rt_lib0clear(&___nl__2);
#line 1069
goto label_1;
#line 1069
label_8:
#line 1069
c_rt_lib0move(&___nl__2, c_rt_lib0priv_as(___nl__0, ___get_global_const(729)));
#line 1070
c_rt_lib0move(&___nl__3,___get_global_const(1121));
#line 1071
c_rt_lib0move(&___nl__6, c_rt_lib0init_iter(___nl__2));
#line 1071
label_13:
#line 1071
c_rt_lib0move(&___nl__4, c_rt_lib0is_end_hash(___nl__6));
#line 1071
if(c_rt_lib0check_true_native(___nl__4)){ goto label_11;}
#line 1071
c_rt_lib0move(&___nl__4, c_rt_lib0get_key_iter(___nl__6));
#line 1071
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value(___nl__2, ___nl__4));
#line 1072
c_rt_lib0move(&___nl__7, c_rt_lib0priv_is(___nl__5, ___get_global_const(734)));
#line 1072
if(c_rt_lib0check_true_native(___nl__7)){ goto label_15;}
#line 1074
c_rt_lib0move(&___nl__7, c_rt_lib0priv_is(___nl__5, ___get_global_const(733)));
#line 1074
if(c_rt_lib0check_true_native(___nl__7)){ goto label_16;}
#line 1074
c_rt_lib0move(&___nl__7,___get_global_const(74));
#line 1074
c_rt_lib0move(&___nl__7, c_rt_lib0array_mk(2, ___nl__7, ___nl__5));
#line 1074
nl_die_arg(___nl__7);
#line 1072
label_15:
#line 1072
c_rt_lib0move(&___nl__8, c_rt_lib0priv_as(___nl__5, ___get_global_const(734)));
#line 1073
c_rt_lib0move(&___nl__9,___get_global_const(187));
#line 1073
c_rt_lib0move(&___nl__9, c_rt_lib0concat_new(___nl__4, ___nl__9));
#line 1073
c_rt_lib0move(&___nl__10, type_checker_priv0get_print_tct_type_name(___nl__8));
#line 1073
c_rt_lib0move(&___nl__9, c_rt_lib0concat_add(___nl__9, ___nl__10));
#line 1073
c_rt_lib0clear(&___nl__10);
#line 1073
c_rt_lib0move(&___nl__10,___get_global_const(188));
#line 1073
c_rt_lib0move(&___nl__9, c_rt_lib0concat_add(___nl__9, ___nl__10));
#line 1073
c_rt_lib0clear(&___nl__10);
#line 1073
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__9));
#line 1073
c_rt_lib0clear(&___nl__9);
#line 1073
c_rt_lib0clear(&___nl__8);
#line 1074
goto label_14;
#line 1074
label_16:
#line 1075
c_rt_lib0move(&___nl__8,___get_global_const(188));
#line 1075
c_rt_lib0move(&___nl__8, c_rt_lib0concat_new(___nl__4, ___nl__8));
#line 1075
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__8));
#line 1075
c_rt_lib0clear(&___nl__8);
#line 1076
goto label_14;
#line 1076
label_14:
#line 1076
c_rt_lib0clear(&___nl__7);
#line 1077
c_rt_lib0move(&___nl__6, c_rt_lib0next_iter(___nl__6));
#line 1077
goto label_13;
#line 1077
label_11:
#line 1077
c_rt_lib0clear(&___nl__4);
#line 1077
c_rt_lib0clear(&___nl__5);
#line 1077
c_rt_lib0clear(&___nl__6);
#line 1078
c_rt_lib0move(&___nl__4,___get_global_const(176));
#line 1078
c_rt_lib0move(&___nl__4, c_rt_lib0concat_new(___nl__3, ___nl__4));
#line 1078
c_rt_lib0clear(&___nl__0);
#line 1078
c_rt_lib0clear(&___nl__1);
#line 1078
c_rt_lib0clear(&___nl__2);
#line 1078
c_rt_lib0clear(&___nl__3);
#line 1078
return ___nl__4;
#line 1078
c_rt_lib0clear(&___nl__4);
#line 1078
c_rt_lib0clear(&___nl__3);
#line 1078
c_rt_lib0clear(&___nl__2);
#line 1079
goto label_1;
#line 1079
label_9:
#line 1079
c_rt_lib0move(&___nl__2, c_rt_lib0priv_as(___nl__0, ___get_global_const(725)));
#line 1080
c_rt_lib0move(&___nl__3,___get_global_const(1122));
#line 1081
c_rt_lib0move(&___nl__6, c_rt_lib0init_iter(___nl__2));
#line 1081
label_19:
#line 1081
c_rt_lib0move(&___nl__4, c_rt_lib0is_end_hash(___nl__6));
#line 1081
if(c_rt_lib0check_true_native(___nl__4)){ goto label_17;}
#line 1081
c_rt_lib0move(&___nl__4, c_rt_lib0get_key_iter(___nl__6));
#line 1081
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value(___nl__2, ___nl__4));
#line 1082
c_rt_lib0move(&___nl__7,___get_global_const(187));
#line 1082
c_rt_lib0move(&___nl__7, c_rt_lib0concat_new(___nl__4, ___nl__7));
#line 1082
c_rt_lib0move(&___nl__8, type_checker_priv0get_print_tct_type_name(___nl__5));
#line 1082
c_rt_lib0move(&___nl__7, c_rt_lib0concat_add(___nl__7, ___nl__8));
#line 1082
c_rt_lib0clear(&___nl__8);
#line 1082
c_rt_lib0move(&___nl__8,___get_global_const(188));
#line 1082
c_rt_lib0move(&___nl__7, c_rt_lib0concat_add(___nl__7, ___nl__8));
#line 1082
c_rt_lib0clear(&___nl__8);
#line 1082
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__7));
#line 1082
c_rt_lib0clear(&___nl__7);
#line 1083
c_rt_lib0move(&___nl__6, c_rt_lib0next_iter(___nl__6));
#line 1083
goto label_19;
#line 1083
label_17:
#line 1083
c_rt_lib0clear(&___nl__4);
#line 1083
c_rt_lib0clear(&___nl__5);
#line 1083
c_rt_lib0clear(&___nl__6);
#line 1084
c_rt_lib0move(&___nl__4,___get_global_const(176));
#line 1084
c_rt_lib0move(&___nl__4, c_rt_lib0concat_new(___nl__3, ___nl__4));
#line 1084
c_rt_lib0clear(&___nl__0);
#line 1084
c_rt_lib0clear(&___nl__1);
#line 1084
c_rt_lib0clear(&___nl__2);
#line 1084
c_rt_lib0clear(&___nl__3);
#line 1084
return ___nl__4;
#line 1084
c_rt_lib0clear(&___nl__4);
#line 1084
c_rt_lib0clear(&___nl__3);
#line 1084
c_rt_lib0clear(&___nl__2);
#line 1085
goto label_1;
#line 1085
label_10:
#line 1085
c_rt_lib0move(&___nl__2, c_rt_lib0priv_as(___nl__0, ___get_global_const(724)));
#line 1086
c_rt_lib0move(&___nl__3,___get_global_const(1123));
#line 1086
c_rt_lib0move(&___nl__4, type_checker_priv0get_print_tct_type_name(___nl__2));
#line 1086
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 1086
c_rt_lib0clear(&___nl__4);
#line 1086
c_rt_lib0move(&___nl__4,___get_global_const(176));
#line 1086
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 1086
c_rt_lib0clear(&___nl__4);
#line 1086
c_rt_lib0clear(&___nl__0);
#line 1086
c_rt_lib0clear(&___nl__1);
#line 1086
c_rt_lib0clear(&___nl__2);
#line 1086
return ___nl__3;
#line 1086
c_rt_lib0clear(&___nl__3);
#line 1086
c_rt_lib0clear(&___nl__2);
#line 1087
goto label_1;
#line 1087
label_1:
#line 1087
c_rt_lib0clear(&___nl__1);
#line 1087
c_rt_lib0clear(&___nl__0);
#line 1087
return NULL;
}

ImmT type_checker_priv0get_print_tct_label(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
type_checker_priv0__const__init();
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
#line 1090
c_rt_lib0move(&___nl__1, c_rt_lib0priv_is(___nl__0, ___get_global_const(730)));
#line 1090
if(c_rt_lib0check_true_native(___nl__1)){ goto label_2;}
#line 1092
c_rt_lib0move(&___nl__1, c_rt_lib0priv_is(___nl__0, ___get_global_const(722)));
#line 1092
if(c_rt_lib0check_true_native(___nl__1)){ goto label_3;}
#line 1094
c_rt_lib0move(&___nl__1, c_rt_lib0priv_is(___nl__0, ___get_global_const(727)));
#line 1094
if(c_rt_lib0check_true_native(___nl__1)){ goto label_4;}
#line 1096
c_rt_lib0move(&___nl__1, c_rt_lib0priv_is(___nl__0, ___get_global_const(728)));
#line 1096
if(c_rt_lib0check_true_native(___nl__1)){ goto label_5;}
#line 1098
c_rt_lib0move(&___nl__1, c_rt_lib0priv_is(___nl__0, ___get_global_const(726)));
#line 1098
if(c_rt_lib0check_true_native(___nl__1)){ goto label_6;}
#line 1100
c_rt_lib0move(&___nl__1, c_rt_lib0priv_is(___nl__0, ___get_global_const(723)));
#line 1100
if(c_rt_lib0check_true_native(___nl__1)){ goto label_7;}
#line 1102
c_rt_lib0move(&___nl__1, c_rt_lib0priv_is(___nl__0, ___get_global_const(729)));
#line 1102
if(c_rt_lib0check_true_native(___nl__1)){ goto label_8;}
#line 1104
c_rt_lib0move(&___nl__1, c_rt_lib0priv_is(___nl__0, ___get_global_const(725)));
#line 1104
if(c_rt_lib0check_true_native(___nl__1)){ goto label_9;}
#line 1106
c_rt_lib0move(&___nl__1, c_rt_lib0priv_is(___nl__0, ___get_global_const(724)));
#line 1106
if(c_rt_lib0check_true_native(___nl__1)){ goto label_10;}
#line 1106
c_rt_lib0move(&___nl__1,___get_global_const(74));
#line 1106
c_rt_lib0move(&___nl__1, c_rt_lib0array_mk(2, ___nl__1, ___nl__0));
#line 1106
nl_die_arg(___nl__1);
#line 1090
label_2:
#line 1091
c_rt_lib0move(&___nl__2,___get_global_const(1124));
#line 1091
c_rt_lib0clear(&___nl__0);
#line 1091
c_rt_lib0clear(&___nl__1);
#line 1091
return ___nl__2;
#line 1091
c_rt_lib0clear(&___nl__2);
#line 1092
goto label_1;
#line 1092
label_3:
#line 1093
c_rt_lib0move(&___nl__2,___get_global_const(1125));
#line 1093
c_rt_lib0clear(&___nl__0);
#line 1093
c_rt_lib0clear(&___nl__1);
#line 1093
return ___nl__2;
#line 1093
c_rt_lib0clear(&___nl__2);
#line 1094
goto label_1;
#line 1094
label_4:
#line 1095
c_rt_lib0move(&___nl__2,___get_global_const(1126));
#line 1095
c_rt_lib0clear(&___nl__0);
#line 1095
c_rt_lib0clear(&___nl__1);
#line 1095
return ___nl__2;
#line 1095
c_rt_lib0clear(&___nl__2);
#line 1096
goto label_1;
#line 1096
label_5:
#line 1097
c_rt_lib0move(&___nl__2,___get_global_const(1127));
#line 1097
c_rt_lib0clear(&___nl__0);
#line 1097
c_rt_lib0clear(&___nl__1);
#line 1097
return ___nl__2;
#line 1097
c_rt_lib0clear(&___nl__2);
#line 1098
goto label_1;
#line 1098
label_6:
#line 1098
c_rt_lib0move(&___nl__2, c_rt_lib0priv_as(___nl__0, ___get_global_const(726)));
#line 1099
c_rt_lib0move(&___nl__3,___get_global_const(1128));
#line 1099
c_rt_lib0clear(&___nl__0);
#line 1099
c_rt_lib0clear(&___nl__1);
#line 1099
c_rt_lib0clear(&___nl__2);
#line 1099
return ___nl__3;
#line 1099
c_rt_lib0clear(&___nl__3);
#line 1099
c_rt_lib0clear(&___nl__2);
#line 1100
goto label_1;
#line 1100
label_7:
#line 1100
c_rt_lib0move(&___nl__2, c_rt_lib0priv_as(___nl__0, ___get_global_const(723)));
#line 1101
c_rt_lib0move(&___nl__3,___get_global_const(1129));
#line 1101
c_rt_lib0clear(&___nl__0);
#line 1101
c_rt_lib0clear(&___nl__1);
#line 1101
c_rt_lib0clear(&___nl__2);
#line 1101
return ___nl__3;
#line 1101
c_rt_lib0clear(&___nl__3);
#line 1101
c_rt_lib0clear(&___nl__2);
#line 1102
goto label_1;
#line 1102
label_8:
#line 1102
c_rt_lib0move(&___nl__2, c_rt_lib0priv_as(___nl__0, ___get_global_const(729)));
#line 1103
c_rt_lib0move(&___nl__3,___get_global_const(1130));
#line 1103
c_rt_lib0clear(&___nl__0);
#line 1103
c_rt_lib0clear(&___nl__1);
#line 1103
c_rt_lib0clear(&___nl__2);
#line 1103
return ___nl__3;
#line 1103
c_rt_lib0clear(&___nl__3);
#line 1103
c_rt_lib0clear(&___nl__2);
#line 1104
goto label_1;
#line 1104
label_9:
#line 1104
c_rt_lib0move(&___nl__2, c_rt_lib0priv_as(___nl__0, ___get_global_const(725)));
#line 1105
c_rt_lib0move(&___nl__3,___get_global_const(1131));
#line 1105
c_rt_lib0clear(&___nl__0);
#line 1105
c_rt_lib0clear(&___nl__1);
#line 1105
c_rt_lib0clear(&___nl__2);
#line 1105
return ___nl__3;
#line 1105
c_rt_lib0clear(&___nl__3);
#line 1105
c_rt_lib0clear(&___nl__2);
#line 1106
goto label_1;
#line 1106
label_10:
#line 1106
c_rt_lib0move(&___nl__2, c_rt_lib0priv_as(___nl__0, ___get_global_const(724)));
#line 1107
c_rt_lib0move(&___nl__3,___get_global_const(1132));
#line 1107
c_rt_lib0clear(&___nl__0);
#line 1107
c_rt_lib0clear(&___nl__1);
#line 1107
c_rt_lib0clear(&___nl__2);
#line 1107
return ___nl__3;
#line 1107
c_rt_lib0clear(&___nl__3);
#line 1107
c_rt_lib0clear(&___nl__2);
#line 1108
goto label_1;
#line 1108
label_1:
#line 1108
c_rt_lib0clear(&___nl__1);
#line 1108
c_rt_lib0clear(&___nl__0);
#line 1108
return NULL;
}

ImmT type_checker_priv0get_print_check_info(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
type_checker_priv0__const__init();
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
#line 1111
c_rt_lib0move(&___nl__1, c_rt_lib0priv_is(___nl__0, ___get_global_const(44)));
#line 1111
if(c_rt_lib0check_true_native(___nl__1)){ goto label_2;}
#line 1113
c_rt_lib0move(&___nl__1, c_rt_lib0priv_is(___nl__0, ___get_global_const(43)));
#line 1113
if(c_rt_lib0check_true_native(___nl__1)){ goto label_3;}
#line 1113
c_rt_lib0move(&___nl__1,___get_global_const(74));
#line 1113
c_rt_lib0move(&___nl__1, c_rt_lib0array_mk(2, ___nl__1, ___nl__0));
#line 1113
nl_die_arg(___nl__1);
#line 1111
label_2:
#line 1112
c_rt_lib0move(&___nl__2, c_rt_lib0array_mk(0));
#line 1112
nl_die_arg(___nl__2);
#line 1112
c_rt_lib0clear(&___nl__2);
#line 1113
goto label_1;
#line 1113
label_3:
#line 1113
c_rt_lib0move(&___nl__2, c_rt_lib0priv_as(___nl__0, ___get_global_const(43)));
#line 1114
c_rt_lib0move(&___nl__3,___get_global_const(603));
#line 1115
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(632)));
#line 1115
c_rt_lib0move(&___nl__4, array0len(___nl__5));
#line 1115
c_rt_lib0clear(&___nl__5);
#line 1115
c_rt_lib0move(&___nl__5,___get_global_const(2));
#line 1115
c_rt_lib0move(&___nl__4, c_rt_lib0sub_mod(___nl__4, ___nl__5));
#line 1115
c_rt_lib0clear(&___nl__5);
#line 1115
label_5:
#line 1115
c_rt_lib0move(&___nl__5,___get_global_const(1));
#line 1115
c_rt_lib0move(&___nl__5, c_rt_lib0ge(___nl__4, ___nl__5));
#line 1115
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 1115
if(c_rt_lib0check_true_native(___nl__5)){ goto label_4;}
#line 1116
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(632)));
#line 1116
c_rt_lib0move(&___nl__6, c_rt_lib0array_get(___nl__6, ___nl__4));
#line 1116
c_rt_lib0move(&___nl__7, c_rt_lib0priv_is(___nl__6, ___get_global_const(943)));
#line 1116
if(c_rt_lib0check_true_native(___nl__7)){ goto label_8;}
#line 1118
c_rt_lib0move(&___nl__7, c_rt_lib0priv_is(___nl__6, ___get_global_const(950)));
#line 1118
if(c_rt_lib0check_true_native(___nl__7)){ goto label_9;}
#line 1120
c_rt_lib0move(&___nl__7, c_rt_lib0priv_is(___nl__6, ___get_global_const(944)));
#line 1120
if(c_rt_lib0check_true_native(___nl__7)){ goto label_10;}
#line 1122
c_rt_lib0move(&___nl__7, c_rt_lib0priv_is(___nl__6, ___get_global_const(948)));
#line 1122
if(c_rt_lib0check_true_native(___nl__7)){ goto label_11;}
#line 1122
c_rt_lib0move(&___nl__7,___get_global_const(74));
#line 1122
c_rt_lib0move(&___nl__7, c_rt_lib0array_mk(2, ___nl__7, ___nl__6));
#line 1122
nl_die_arg(___nl__7);
#line 1116
label_8:
#line 1117
c_rt_lib0move(&___nl__8,___get_global_const(1129));
#line 1117
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__8));
#line 1117
c_rt_lib0clear(&___nl__8);
#line 1118
goto label_7;
#line 1118
label_9:
#line 1118
c_rt_lib0move(&___nl__8, c_rt_lib0priv_as(___nl__6, ___get_global_const(950)));
#line 1119
c_rt_lib0move(&___nl__9,___get_global_const(1121));
#line 1119
c_rt_lib0move(&___nl__9, c_rt_lib0concat_add(___nl__9, ___nl__8));
#line 1119
c_rt_lib0move(&___nl__10,___get_global_const(176));
#line 1119
c_rt_lib0move(&___nl__9, c_rt_lib0concat_add(___nl__9, ___nl__10));
#line 1119
c_rt_lib0clear(&___nl__10);
#line 1119
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__9));
#line 1119
c_rt_lib0clear(&___nl__9);
#line 1119
c_rt_lib0clear(&___nl__8);
#line 1120
goto label_7;
#line 1120
label_10:
#line 1120
c_rt_lib0move(&___nl__8, c_rt_lib0priv_as(___nl__6, ___get_global_const(944)));
#line 1121
c_rt_lib0move(&___nl__9,___get_global_const(1122));
#line 1121
c_rt_lib0move(&___nl__9, c_rt_lib0concat_add(___nl__9, ___nl__8));
#line 1121
c_rt_lib0move(&___nl__10,___get_global_const(176));
#line 1121
c_rt_lib0move(&___nl__9, c_rt_lib0concat_add(___nl__9, ___nl__10));
#line 1121
c_rt_lib0clear(&___nl__10);
#line 1121
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__9));
#line 1121
c_rt_lib0clear(&___nl__9);
#line 1121
c_rt_lib0clear(&___nl__8);
#line 1122
goto label_7;
#line 1122
label_11:
#line 1123
c_rt_lib0move(&___nl__8,___get_global_const(1132));
#line 1123
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__8));
#line 1123
c_rt_lib0clear(&___nl__8);
#line 1124
goto label_7;
#line 1124
label_7:
#line 1124
c_rt_lib0clear(&___nl__6);
#line 1124
c_rt_lib0clear(&___nl__7);
#line 1125
c_rt_lib0move(&___nl__6,___get_global_const(773));
#line 1125
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__6));
#line 1125
c_rt_lib0clear(&___nl__6);
#line 1125
c_rt_lib0move(&___nl__6,___get_global_const(2));
#line 1125
c_rt_lib0move(&___nl__4, c_rt_lib0sub_mod(___nl__4, ___nl__6));
#line 1125
c_rt_lib0clear(&___nl__6);
#line 1126
goto label_5;
#line 1126
label_4:
#line 1126
c_rt_lib0clear(&___nl__4);
#line 1126
c_rt_lib0clear(&___nl__5);
#line 1127
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(197)));
#line 1127
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__4, ___get_global_const(725)));
#line 1127
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__4));
#line 1127
if(c_rt_lib0check_true_native(___nl__5)){ goto label_14;}
#line 1127
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(198)));
#line 1127
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__4, ___get_global_const(725)));
#line 1127
label_14:
#line 1127
c_rt_lib0clear(&___nl__5);
#line 1127
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 1127
if(c_rt_lib0check_true_native(___nl__4)){ goto label_13;}
#line 1128
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(197)));
#line 1128
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__5, ___get_global_const(725)));
#line 1128
c_rt_lib0move(&___nl__8, c_rt_lib0init_iter(___nl__5));
#line 1128
label_17:
#line 1128
c_rt_lib0move(&___nl__6, c_rt_lib0is_end_hash(___nl__8));
#line 1128
if(c_rt_lib0check_true_native(___nl__6)){ goto label_15;}
#line 1128
c_rt_lib0move(&___nl__6, c_rt_lib0get_key_iter(___nl__8));
#line 1128
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value(___nl__5, ___nl__6));
#line 1129
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(198)));
#line 1129
c_rt_lib0move(&___nl__10, c_rt_lib0priv_as(___nl__10, ___get_global_const(725)));
#line 1129
c_rt_lib0move(&___nl__9, hash0has_key(___nl__10, ___nl__6));
#line 1129
c_rt_lib0clear(&___nl__10);
#line 1129
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__9));
#line 1129
if(c_rt_lib0check_true_native(___nl__9)){ goto label_19;}
#line 1129
c_rt_lib0clear(&___nl__9);
#line 1129
goto label_16;
#line 1129
goto label_19;
#line 1129
label_19:
#line 1129
c_rt_lib0clear(&___nl__9);
#line 1130
c_rt_lib0move(&___nl__9,___get_global_const(1133));
#line 1130
c_rt_lib0move(&___nl__9, c_rt_lib0concat_new(___nl__3, ___nl__9));
#line 1130
c_rt_lib0move(&___nl__9, c_rt_lib0concat_add(___nl__9, ___nl__6));
#line 1130
c_rt_lib0move(&___nl__10,___get_global_const(1134));
#line 1130
c_rt_lib0move(&___nl__9, c_rt_lib0concat_add(___nl__9, ___nl__10));
#line 1130
c_rt_lib0clear(&___nl__10);
#line 1130
c_rt_lib0move(&___nl__9, c_rt_lib0concat_add(___nl__9, ___nl__6));
#line 1130
c_rt_lib0move(&___nl__10,___get_global_const(1135));
#line 1130
c_rt_lib0move(&___nl__9, c_rt_lib0concat_add(___nl__9, ___nl__10));
#line 1130
c_rt_lib0clear(&___nl__10);
#line 1130
c_rt_lib0clear(&___nl__0);
#line 1130
c_rt_lib0clear(&___nl__1);
#line 1130
c_rt_lib0clear(&___nl__2);
#line 1130
c_rt_lib0clear(&___nl__3);
#line 1130
c_rt_lib0clear(&___nl__4);
#line 1130
c_rt_lib0clear(&___nl__5);
#line 1130
c_rt_lib0clear(&___nl__6);
#line 1130
c_rt_lib0clear(&___nl__7);
#line 1130
c_rt_lib0clear(&___nl__8);
#line 1130
return ___nl__9;
#line 1130
c_rt_lib0clear(&___nl__9);
#line 1130
label_16:
#line 1131
c_rt_lib0move(&___nl__8, c_rt_lib0next_iter(___nl__8));
#line 1131
goto label_17;
#line 1131
label_15:
#line 1131
c_rt_lib0clear(&___nl__5);
#line 1131
c_rt_lib0clear(&___nl__6);
#line 1131
c_rt_lib0clear(&___nl__7);
#line 1131
c_rt_lib0clear(&___nl__8);
#line 1132
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(198)));
#line 1132
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__5, ___get_global_const(725)));
#line 1132
c_rt_lib0move(&___nl__8, c_rt_lib0init_iter(___nl__5));
#line 1132
label_22:
#line 1132
c_rt_lib0move(&___nl__6, c_rt_lib0is_end_hash(___nl__8));
#line 1132
if(c_rt_lib0check_true_native(___nl__6)){ goto label_20;}
#line 1132
c_rt_lib0move(&___nl__6, c_rt_lib0get_key_iter(___nl__8));
#line 1132
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value(___nl__5, ___nl__6));
#line 1133
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(197)));
#line 1133
c_rt_lib0move(&___nl__10, c_rt_lib0priv_as(___nl__10, ___get_global_const(725)));
#line 1133
c_rt_lib0move(&___nl__9, hash0has_key(___nl__10, ___nl__6));
#line 1133
c_rt_lib0clear(&___nl__10);
#line 1133
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__9));
#line 1133
if(c_rt_lib0check_true_native(___nl__9)){ goto label_24;}
#line 1133
c_rt_lib0clear(&___nl__9);
#line 1133
goto label_21;
#line 1133
goto label_24;
#line 1133
label_24:
#line 1133
c_rt_lib0clear(&___nl__9);
#line 1134
c_rt_lib0move(&___nl__9,___get_global_const(1136));
#line 1134
c_rt_lib0move(&___nl__9, c_rt_lib0concat_new(___nl__3, ___nl__9));
#line 1134
c_rt_lib0move(&___nl__9, c_rt_lib0concat_add(___nl__9, ___nl__6));
#line 1134
c_rt_lib0move(&___nl__10,___get_global_const(1137));
#line 1134
c_rt_lib0move(&___nl__9, c_rt_lib0concat_add(___nl__9, ___nl__10));
#line 1134
c_rt_lib0clear(&___nl__10);
#line 1134
c_rt_lib0move(&___nl__9, c_rt_lib0concat_add(___nl__9, ___nl__6));
#line 1134
c_rt_lib0move(&___nl__10,___get_global_const(1135));
#line 1134
c_rt_lib0move(&___nl__9, c_rt_lib0concat_add(___nl__9, ___nl__10));
#line 1134
c_rt_lib0clear(&___nl__10);
#line 1134
c_rt_lib0clear(&___nl__0);
#line 1134
c_rt_lib0clear(&___nl__1);
#line 1134
c_rt_lib0clear(&___nl__2);
#line 1134
c_rt_lib0clear(&___nl__3);
#line 1134
c_rt_lib0clear(&___nl__4);
#line 1134
c_rt_lib0clear(&___nl__5);
#line 1134
c_rt_lib0clear(&___nl__6);
#line 1134
c_rt_lib0clear(&___nl__7);
#line 1134
c_rt_lib0clear(&___nl__8);
#line 1134
return ___nl__9;
#line 1134
c_rt_lib0clear(&___nl__9);
#line 1134
label_21:
#line 1135
c_rt_lib0move(&___nl__8, c_rt_lib0next_iter(___nl__8));
#line 1135
goto label_22;
#line 1135
label_20:
#line 1135
c_rt_lib0clear(&___nl__5);
#line 1135
c_rt_lib0clear(&___nl__6);
#line 1135
c_rt_lib0clear(&___nl__7);
#line 1135
c_rt_lib0clear(&___nl__8);
#line 1136
goto label_12;
#line 1136
label_13:
#line 1136
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(197)));
#line 1136
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__4, ___get_global_const(729)));
#line 1136
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__4));
#line 1136
if(c_rt_lib0check_true_native(___nl__5)){ goto label_26;}
#line 1136
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(198)));
#line 1136
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__4, ___get_global_const(729)));
#line 1136
label_26:
#line 1136
c_rt_lib0clear(&___nl__5);
#line 1136
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 1136
if(c_rt_lib0check_true_native(___nl__4)){ goto label_25;}
#line 1137
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(197)));
#line 1137
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__5, ___get_global_const(729)));
#line 1137
c_rt_lib0move(&___nl__8, c_rt_lib0init_iter(___nl__5));
#line 1137
label_29:
#line 1137
c_rt_lib0move(&___nl__6, c_rt_lib0is_end_hash(___nl__8));
#line 1137
if(c_rt_lib0check_true_native(___nl__6)){ goto label_27;}
#line 1137
c_rt_lib0move(&___nl__6, c_rt_lib0get_key_iter(___nl__8));
#line 1137
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value(___nl__5, ___nl__6));
#line 1138
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(198)));
#line 1138
c_rt_lib0move(&___nl__9, c_rt_lib0priv_as(___nl__9, ___get_global_const(729)));
#line 1139
c_rt_lib0move(&___nl__10, hash0has_key(___nl__9, ___nl__6));
#line 1139
c_rt_lib0move(&___nl__10, c_rt_lib0not(___nl__10));
#line 1139
if(c_rt_lib0check_true_native(___nl__10)){ goto label_31;}
#line 1140
c_rt_lib0move(&___nl__11, c_rt_lib0priv_is(___nl__7, ___get_global_const(733)));
#line 1140
if(c_rt_lib0check_true_native(___nl__11)){ goto label_33;}
#line 1144
c_rt_lib0move(&___nl__11, c_rt_lib0priv_is(___nl__7, ___get_global_const(734)));
#line 1144
if(c_rt_lib0check_true_native(___nl__11)){ goto label_34;}
#line 1144
c_rt_lib0move(&___nl__11,___get_global_const(74));
#line 1144
c_rt_lib0move(&___nl__11, c_rt_lib0array_mk(2, ___nl__11, ___nl__7));
#line 1144
nl_die_arg(___nl__11);
#line 1140
label_33:
#line 1141
c_rt_lib0move(&___nl__12, hash0get_value(___nl__9, ___nl__6));
#line 1141
c_rt_lib0move(&___nl__12, c_rt_lib0priv_is(___nl__12, ___get_global_const(734)));
#line 1141
c_rt_lib0move(&___nl__12, c_rt_lib0not(___nl__12));
#line 1141
if(c_rt_lib0check_true_native(___nl__12)){ goto label_36;}
#line 1142
c_rt_lib0move(&___nl__13,___get_global_const(1138));
#line 1142
c_rt_lib0move(&___nl__13, c_rt_lib0concat_new(___nl__3, ___nl__13));
#line 1142
c_rt_lib0move(&___nl__13, c_rt_lib0concat_add(___nl__13, ___nl__6));
#line 1142
c_rt_lib0move(&___nl__14,___get_global_const(1139));
#line 1142
c_rt_lib0move(&___nl__13, c_rt_lib0concat_add(___nl__13, ___nl__14));
#line 1142
c_rt_lib0clear(&___nl__14);
#line 1142
c_rt_lib0move(&___nl__13, c_rt_lib0concat_add(___nl__13, ___nl__6));
#line 1142
c_rt_lib0move(&___nl__14,___get_global_const(1140));
#line 1142
c_rt_lib0move(&___nl__13, c_rt_lib0concat_add(___nl__13, ___nl__14));
#line 1142
c_rt_lib0clear(&___nl__14);
#line 1142
c_rt_lib0clear(&___nl__0);
#line 1142
c_rt_lib0clear(&___nl__1);
#line 1142
c_rt_lib0clear(&___nl__2);
#line 1142
c_rt_lib0clear(&___nl__3);
#line 1142
c_rt_lib0clear(&___nl__4);
#line 1142
c_rt_lib0clear(&___nl__5);
#line 1142
c_rt_lib0clear(&___nl__6);
#line 1142
c_rt_lib0clear(&___nl__7);
#line 1142
c_rt_lib0clear(&___nl__8);
#line 1142
c_rt_lib0clear(&___nl__9);
#line 1142
c_rt_lib0clear(&___nl__10);
#line 1142
c_rt_lib0clear(&___nl__11);
#line 1142
c_rt_lib0clear(&___nl__12);
#line 1142
return ___nl__13;
#line 1142
c_rt_lib0clear(&___nl__13);
#line 1143
goto label_36;
#line 1143
label_36:
#line 1143
c_rt_lib0clear(&___nl__12);
#line 1144
goto label_32;
#line 1144
label_34:
#line 1144
c_rt_lib0move(&___nl__12, c_rt_lib0priv_as(___nl__7, ___get_global_const(734)));
#line 1145
c_rt_lib0move(&___nl__13, hash0get_value(___nl__9, ___nl__6));
#line 1145
c_rt_lib0move(&___nl__13, c_rt_lib0priv_is(___nl__13, ___get_global_const(733)));
#line 1145
c_rt_lib0move(&___nl__13, c_rt_lib0not(___nl__13));
#line 1145
if(c_rt_lib0check_true_native(___nl__13)){ goto label_38;}
#line 1146
c_rt_lib0move(&___nl__14,___get_global_const(1138));
#line 1146
c_rt_lib0move(&___nl__14, c_rt_lib0concat_new(___nl__3, ___nl__14));
#line 1146
c_rt_lib0move(&___nl__14, c_rt_lib0concat_add(___nl__14, ___nl__6));
#line 1146
c_rt_lib0move(&___nl__15,___get_global_const(1141));
#line 1146
c_rt_lib0move(&___nl__14, c_rt_lib0concat_add(___nl__14, ___nl__15));
#line 1146
c_rt_lib0clear(&___nl__15);
#line 1146
c_rt_lib0move(&___nl__14, c_rt_lib0concat_add(___nl__14, ___nl__6));
#line 1146
c_rt_lib0move(&___nl__15,___get_global_const(1142));
#line 1146
c_rt_lib0move(&___nl__14, c_rt_lib0concat_add(___nl__14, ___nl__15));
#line 1146
c_rt_lib0clear(&___nl__15);
#line 1146
c_rt_lib0clear(&___nl__0);
#line 1146
c_rt_lib0clear(&___nl__1);
#line 1146
c_rt_lib0clear(&___nl__2);
#line 1146
c_rt_lib0clear(&___nl__3);
#line 1146
c_rt_lib0clear(&___nl__4);
#line 1146
c_rt_lib0clear(&___nl__5);
#line 1146
c_rt_lib0clear(&___nl__6);
#line 1146
c_rt_lib0clear(&___nl__7);
#line 1146
c_rt_lib0clear(&___nl__8);
#line 1146
c_rt_lib0clear(&___nl__9);
#line 1146
c_rt_lib0clear(&___nl__10);
#line 1146
c_rt_lib0clear(&___nl__11);
#line 1146
c_rt_lib0clear(&___nl__12);
#line 1146
c_rt_lib0clear(&___nl__13);
#line 1146
return ___nl__14;
#line 1146
c_rt_lib0clear(&___nl__14);
#line 1147
goto label_38;
#line 1147
label_38:
#line 1147
c_rt_lib0clear(&___nl__13);
#line 1147
c_rt_lib0clear(&___nl__12);
#line 1148
goto label_32;
#line 1148
label_32:
#line 1148
c_rt_lib0clear(&___nl__11);
#line 1149
goto label_30;
#line 1149
label_31:
#line 1150
c_rt_lib0move(&___nl__11,___get_global_const(1143));
#line 1150
c_rt_lib0move(&___nl__11, c_rt_lib0concat_new(___nl__3, ___nl__11));
#line 1150
c_rt_lib0move(&___nl__11, c_rt_lib0concat_add(___nl__11, ___nl__6));
#line 1150
c_rt_lib0move(&___nl__12,___get_global_const(1144));
#line 1150
c_rt_lib0move(&___nl__11, c_rt_lib0concat_add(___nl__11, ___nl__12));
#line 1150
c_rt_lib0clear(&___nl__12);
#line 1150
c_rt_lib0move(&___nl__11, c_rt_lib0concat_add(___nl__11, ___nl__6));
#line 1150
c_rt_lib0move(&___nl__12,___get_global_const(1135));
#line 1150
c_rt_lib0move(&___nl__11, c_rt_lib0concat_add(___nl__11, ___nl__12));
#line 1150
c_rt_lib0clear(&___nl__12);
#line 1150
c_rt_lib0clear(&___nl__0);
#line 1150
c_rt_lib0clear(&___nl__1);
#line 1150
c_rt_lib0clear(&___nl__2);
#line 1150
c_rt_lib0clear(&___nl__3);
#line 1150
c_rt_lib0clear(&___nl__4);
#line 1150
c_rt_lib0clear(&___nl__5);
#line 1150
c_rt_lib0clear(&___nl__6);
#line 1150
c_rt_lib0clear(&___nl__7);
#line 1150
c_rt_lib0clear(&___nl__8);
#line 1150
c_rt_lib0clear(&___nl__9);
#line 1150
c_rt_lib0clear(&___nl__10);
#line 1150
return ___nl__11;
#line 1150
c_rt_lib0clear(&___nl__11);
#line 1151
goto label_30;
#line 1151
label_30:
#line 1151
c_rt_lib0clear(&___nl__10);
#line 1151
c_rt_lib0clear(&___nl__9);
#line 1152
c_rt_lib0move(&___nl__8, c_rt_lib0next_iter(___nl__8));
#line 1152
goto label_29;
#line 1152
label_27:
#line 1152
c_rt_lib0clear(&___nl__5);
#line 1152
c_rt_lib0clear(&___nl__6);
#line 1152
c_rt_lib0clear(&___nl__7);
#line 1152
c_rt_lib0clear(&___nl__8);
#line 1153
goto label_12;
#line 1153
label_25:
#line 1154
c_rt_lib0move(&___nl__5,___get_global_const(322));
#line 1154
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(197)));
#line 1154
c_rt_lib0move(&___nl__6, type_checker_priv0get_print_tct_label(___nl__7));
#line 1154
c_rt_lib0clear(&___nl__7);
#line 1154
c_rt_lib0move(&___nl__5, c_rt_lib0concat_add(___nl__5, ___nl__6));
#line 1154
c_rt_lib0clear(&___nl__6);
#line 1154
c_rt_lib0move(&___nl__6,___get_global_const(1145));
#line 1154
c_rt_lib0move(&___nl__5, c_rt_lib0concat_add(___nl__5, ___nl__6));
#line 1154
c_rt_lib0clear(&___nl__6);
#line 1154
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(198)));
#line 1154
c_rt_lib0move(&___nl__6, type_checker_priv0get_print_tct_label(___nl__7));
#line 1154
c_rt_lib0clear(&___nl__7);
#line 1154
c_rt_lib0move(&___nl__5, c_rt_lib0concat_add(___nl__5, ___nl__6));
#line 1154
c_rt_lib0clear(&___nl__6);
#line 1154
c_rt_lib0move(&___nl__6,___get_global_const(176));
#line 1154
c_rt_lib0move(&___nl__5, c_rt_lib0concat_add(___nl__5, ___nl__6));
#line 1154
c_rt_lib0clear(&___nl__6);
#line 1154
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__5));
#line 1154
c_rt_lib0clear(&___nl__5);
#line 1155
goto label_12;
#line 1155
label_12:
#line 1155
c_rt_lib0clear(&___nl__4);
#line 1156
c_rt_lib0clear(&___nl__0);
#line 1156
c_rt_lib0clear(&___nl__1);
#line 1156
c_rt_lib0clear(&___nl__2);
#line 1156
return ___nl__3;
#line 1156
c_rt_lib0clear(&___nl__3);
#line 1156
c_rt_lib0clear(&___nl__2);
#line 1157
goto label_1;
#line 1157
label_1:
#line 1157
c_rt_lib0clear(&___nl__1);
#line 1157
c_rt_lib0clear(&___nl__0);
#line 1157
return NULL;
}

ImmT type_checker_priv0check_var_decl(ImmT ___nl__0,ImmT * ___ref___1,ImmT * ___ref___2,ImmT * ___ref___3) {
c_rt_lib0arg_val(___nl__0);
type_checker_priv0__const__init();
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
#line 1162
c_rt_lib0move(&___nl__5, c_rt_lib0get_false());
#line 1162
c_rt_lib0move(&___nl__4, type_checker_priv0check_var_decl_try(___nl__0, ___nl__5, ___ref___1, ___ref___2, ___ref___3));
#line 1162
c_rt_lib0clear(&___nl__5);
#line 1162
c_rt_lib0clear(&___nl__0);
#line 1162
return ___nl__4;
#line 1162
c_rt_lib0clear(&___nl__4);
#line 1162
c_rt_lib0clear(&___nl__0);
#line 1162
return NULL;
}

ImmT type_checker_priv0check_var_decl_try(ImmT ___nl__0,ImmT ___nl__1,ImmT * ___ref___2,ImmT * ___ref___3,ImmT * ___ref___4) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
type_checker_priv0__const__init();
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
#line 1168
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(76)));
#line 1168
c_rt_lib0move(&___nl__5, hash0has_key(*___ref___3, ___nl__6));
#line 1168
c_rt_lib0clear(&___nl__6);
#line 1168
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 1168
if(c_rt_lib0check_true_native(___nl__5)){ goto label_2;}
#line 1168
c_rt_lib0move(&___nl__6,___get_global_const(1074));
#line 1168
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(76)));
#line 1168
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__7));
#line 1168
c_rt_lib0clear(&___nl__7);
#line 1168
c_rt_lib0move(&___nl__7,___get_global_const(1146));
#line 1168
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__7));
#line 1168
c_rt_lib0clear(&___nl__7);
#line 1168
c_rt_lib0delete(type_checker_priv0add_error(___ref___4, ___nl__6));
#line 1168
c_rt_lib0clear(&___nl__6);
#line 1168
goto label_2;
#line 1168
label_2:
#line 1168
c_rt_lib0clear(&___nl__5);
#line 1169
c_rt_lib0move(&___nl__5, tct0empty());
#line 1170
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(72)));
#line 1170
c_rt_lib0move(&___nl__7, c_rt_lib0priv_is(___nl__6, ___get_global_const(72)));
#line 1170
if(c_rt_lib0check_true_native(___nl__7)){ goto label_4;}
#line 1178
c_rt_lib0move(&___nl__7, c_rt_lib0priv_is(___nl__6, ___get_global_const(37)));
#line 1178
if(c_rt_lib0check_true_native(___nl__7)){ goto label_5;}
#line 1178
c_rt_lib0move(&___nl__7,___get_global_const(74));
#line 1178
c_rt_lib0move(&___nl__7, c_rt_lib0array_mk(2, ___nl__7, ___nl__6));
#line 1178
nl_die_arg(___nl__7);
#line 1170
label_4:
#line 1170
c_rt_lib0move(&___nl__8, c_rt_lib0priv_as(___nl__6, ___get_global_const(72)));
#line 1171
c_rt_lib0move(&___nl__9, ptd_parser0try_value_to_ptd(___nl__8));
#line 1171
c_rt_lib0move(&___nl__10, c_rt_lib0priv_is(___nl__9, ___get_global_const(43)));
#line 1171
if(c_rt_lib0check_true_native(___nl__10)){ goto label_7;}
#line 1174
c_rt_lib0move(&___nl__10, c_rt_lib0priv_is(___nl__9, ___get_global_const(44)));
#line 1174
if(c_rt_lib0check_true_native(___nl__10)){ goto label_8;}
#line 1174
c_rt_lib0move(&___nl__10,___get_global_const(74));
#line 1174
c_rt_lib0move(&___nl__10, c_rt_lib0array_mk(2, ___nl__10, ___nl__9));
#line 1174
nl_die_arg(___nl__10);
#line 1171
label_7:
#line 1171
c_rt_lib0move(&___nl__11, c_rt_lib0priv_as(___nl__9, ___get_global_const(43)));
#line 1172
c_rt_lib0delete(type_checker_priv0add_error(___ref___4, ___nl__11));
#line 1173
c_rt_lib0move(&___nl__12, tct0tct_im());
#line 1173
c_rt_lib0copy(&___nl__5, ___nl__12);
#line 1173
c_rt_lib0clear(&___nl__12);
#line 1173
c_rt_lib0clear(&___nl__11);
#line 1174
goto label_6;
#line 1174
label_8:
#line 1174
c_rt_lib0move(&___nl__11, c_rt_lib0priv_as(___nl__9, ___get_global_const(44)));
#line 1175
c_rt_lib0copy(&___nl__5, ___nl__11);
#line 1176
c_rt_lib0delete(type_checker_priv0check_types_imported(___nl__11, ___ref___2, ___ref___4));
#line 1176
c_rt_lib0clear(&___nl__11);
#line 1177
goto label_6;
#line 1177
label_6:
#line 1177
c_rt_lib0clear(&___nl__9);
#line 1177
c_rt_lib0clear(&___nl__10);
#line 1177
c_rt_lib0clear(&___nl__8);
#line 1178
goto label_3;
#line 1178
label_5:
#line 1179
goto label_3;
#line 1179
label_3:
#line 1179
c_rt_lib0clear(&___nl__6);
#line 1179
c_rt_lib0clear(&___nl__7);
#line 1180
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(641)));
#line 1180
c_rt_lib0move(&___nl__7, c_rt_lib0priv_is(___nl__6, ___get_global_const(641)));
#line 1180
if(c_rt_lib0check_true_native(___nl__7)){ goto label_10;}
#line 1200
c_rt_lib0move(&___nl__7, c_rt_lib0priv_is(___nl__6, ___get_global_const(37)));
#line 1200
if(c_rt_lib0check_true_native(___nl__7)){ goto label_11;}
#line 1200
c_rt_lib0move(&___nl__7,___get_global_const(74));
#line 1200
c_rt_lib0move(&___nl__7, c_rt_lib0array_mk(2, ___nl__7, ___nl__6));
#line 1200
nl_die_arg(___nl__7);
#line 1180
label_10:
#line 1180
c_rt_lib0move(&___nl__8, c_rt_lib0priv_as(___nl__6, ___get_global_const(641)));
#line 1181
c_rt_lib0move(&___nl__9, type_checker_priv0check_val(___nl__8, ___ref___2, ___ref___3, ___ref___4));
#line 1182
c_rt_lib0move(&___nl__11, c_rt_lib0hash_get_value_dec(___nl__9, ___get_global_const(72)));
#line 1182
c_rt_lib0move(&___nl__12,___get_global_const(727));
#line 1182
c_rt_lib0move(&___nl__10, ov0is(___nl__11, ___nl__12));
#line 1182
c_rt_lib0clear(&___nl__12);
#line 1182
c_rt_lib0clear(&___nl__11);
#line 1182
c_rt_lib0move(&___nl__10, c_rt_lib0not(___nl__10));
#line 1182
if(c_rt_lib0check_true_native(___nl__10)){ goto label_13;}
#line 1183
c_rt_lib0move(&___nl__11,___get_global_const(1112));
#line 1183
c_rt_lib0delete(type_checker_priv0add_error(___ref___4, ___nl__11));
#line 1183
c_rt_lib0clear(&___nl__11);
#line 1184
c_rt_lib0move(&___nl__12, c_rt_lib0ov_mk_none(___get_global_const(41)));
#line 1184
c_rt_lib0move(&___nl__13, tct0tct_im());
#line 1184
c_rt_lib0move(&___nl__11, c_rt_lib0hash_mk(2, ___get_global_const(1017), ___nl__12, ___get_global_const(72), ___nl__13));
#line 1184
c_rt_lib0clear(&___nl__12);
#line 1184
c_rt_lib0clear(&___nl__13);
#line 1184
c_rt_lib0clear(&___nl__0);
#line 1184
c_rt_lib0clear(&___nl__1);
#line 1184
c_rt_lib0clear(&___nl__5);
#line 1184
c_rt_lib0clear(&___nl__6);
#line 1184
c_rt_lib0clear(&___nl__7);
#line 1184
c_rt_lib0clear(&___nl__8);
#line 1184
c_rt_lib0clear(&___nl__9);
#line 1184
c_rt_lib0clear(&___nl__10);
#line 1184
return ___nl__11;
#line 1184
c_rt_lib0clear(&___nl__11);
#line 1185
goto label_13;
#line 1185
label_13:
#line 1185
c_rt_lib0clear(&___nl__10);
#line 1186
c_rt_lib0copy(&___nl__10, ___nl__1);
#line 1186
c_rt_lib0move(&___nl__10, c_rt_lib0not(___nl__10));
#line 1186
if(c_rt_lib0check_true_native(___nl__10)){ goto label_15;}
#line 1187
c_rt_lib0move(&___nl__11, ptd_system0get_try_ensure_ok_type(___nl__9, ___ref___2, ___ref___4));
#line 1187
c_rt_lib0copy(&___nl__12, ___nl__11);
#line 1187
c_rt_lib0hash_set_value_dec(&___nl__9, ___get_global_const(72), ___nl__12);
#line 1187
c_rt_lib0clear(&___nl__11);
#line 1187
c_rt_lib0clear(&___nl__12);
#line 1188
goto label_15;
#line 1188
label_15:
#line 1188
c_rt_lib0clear(&___nl__10);
#line 1189
c_rt_lib0move(&___nl__11,___get_global_const(730));
#line 1189
c_rt_lib0move(&___nl__10, ov0is(___nl__5, ___nl__11));
#line 1189
c_rt_lib0clear(&___nl__11);
#line 1189
c_rt_lib0move(&___nl__10, c_rt_lib0not(___nl__10));
#line 1189
if(c_rt_lib0check_true_native(___nl__10)){ goto label_17;}
#line 1190
c_rt_lib0move(&___nl__11, tct0tct_im());
#line 1190
c_rt_lib0delete(ptd_system0check_assignment(___nl__11, ___nl__9, ___ref___2, ___ref___4));
#line 1190
c_rt_lib0clear(&___nl__11);
#line 1191
c_rt_lib0move(&___nl__11, c_rt_lib0hash_get_value_dec(___nl__9, ___get_global_const(72)));
#line 1191
c_rt_lib0copy(&___nl__5, ___nl__11);
#line 1191
c_rt_lib0clear(&___nl__11);
#line 1192
c_rt_lib0move(&___nl__12, c_rt_lib0ov_mk_none(___get_global_const(41)));
#line 1192
c_rt_lib0move(&___nl__11, c_rt_lib0hash_mk(2, ___get_global_const(1017), ___nl__12, ___get_global_const(72), ___nl__5));
#line 1192
c_rt_lib0clear(&___nl__12);
#line 1192
c_rt_lib0clear(&___nl__0);
#line 1192
c_rt_lib0clear(&___nl__1);
#line 1192
c_rt_lib0clear(&___nl__5);
#line 1192
c_rt_lib0clear(&___nl__6);
#line 1192
c_rt_lib0clear(&___nl__7);
#line 1192
c_rt_lib0clear(&___nl__8);
#line 1192
c_rt_lib0clear(&___nl__9);
#line 1192
c_rt_lib0clear(&___nl__10);
#line 1192
return ___nl__11;
#line 1192
c_rt_lib0clear(&___nl__11);
#line 1193
goto label_16;
#line 1193
label_17:
#line 1194
c_rt_lib0move(&___nl__11, ptd_system0check_assignment(___nl__5, ___nl__9, ___ref___2, ___ref___4));
#line 1195
c_rt_lib0move(&___nl__13,___get_global_const(43));
#line 1195
c_rt_lib0move(&___nl__12, ov0is(___nl__11, ___nl__13));
#line 1195
c_rt_lib0clear(&___nl__13);
#line 1195
c_rt_lib0move(&___nl__12, c_rt_lib0not(___nl__12));
#line 1195
if(c_rt_lib0check_true_native(___nl__12)){ goto label_19;}
#line 1196
c_rt_lib0move(&___nl__13,___get_global_const(1147));
#line 1196
c_rt_lib0move(&___nl__14, type_checker_priv0get_print_check_info(___nl__11));
#line 1196
c_rt_lib0move(&___nl__13, c_rt_lib0concat_add(___nl__13, ___nl__14));
#line 1196
c_rt_lib0clear(&___nl__14);
#line 1196
c_rt_lib0delete(type_checker_priv0add_error(___ref___4, ___nl__13));
#line 1196
c_rt_lib0clear(&___nl__13);
#line 1197
goto label_19;
#line 1197
label_19:
#line 1197
c_rt_lib0clear(&___nl__12);
#line 1198
c_rt_lib0move(&___nl__13, c_rt_lib0ov_mk_none(___get_global_const(42)));
#line 1198
c_rt_lib0move(&___nl__12, c_rt_lib0hash_mk(2, ___get_global_const(1017), ___nl__13, ___get_global_const(72), ___nl__5));
#line 1198
c_rt_lib0clear(&___nl__13);
#line 1198
c_rt_lib0clear(&___nl__0);
#line 1198
c_rt_lib0clear(&___nl__1);
#line 1198
c_rt_lib0clear(&___nl__5);
#line 1198
c_rt_lib0clear(&___nl__6);
#line 1198
c_rt_lib0clear(&___nl__7);
#line 1198
c_rt_lib0clear(&___nl__8);
#line 1198
c_rt_lib0clear(&___nl__9);
#line 1198
c_rt_lib0clear(&___nl__10);
#line 1198
c_rt_lib0clear(&___nl__11);
#line 1198
return ___nl__12;
#line 1198
c_rt_lib0clear(&___nl__12);
#line 1198
c_rt_lib0clear(&___nl__11);
#line 1199
goto label_16;
#line 1199
label_16:
#line 1199
c_rt_lib0clear(&___nl__10);
#line 1199
c_rt_lib0clear(&___nl__9);
#line 1199
c_rt_lib0clear(&___nl__8);
#line 1200
goto label_9;
#line 1200
label_11:
#line 1201
c_rt_lib0move(&___nl__9,___get_global_const(730));
#line 1201
c_rt_lib0move(&___nl__8, ov0is(___nl__5, ___nl__9));
#line 1201
c_rt_lib0clear(&___nl__9);
#line 1201
c_rt_lib0move(&___nl__8, c_rt_lib0not(___nl__8));
#line 1201
if(c_rt_lib0check_true_native(___nl__8)){ goto label_21;}
#line 1201
c_rt_lib0move(&___nl__10, c_rt_lib0ov_mk_none(___get_global_const(41)));
#line 1201
c_rt_lib0move(&___nl__9, c_rt_lib0hash_mk(2, ___get_global_const(1017), ___nl__10, ___get_global_const(72), ___nl__5));
#line 1201
c_rt_lib0clear(&___nl__10);
#line 1201
c_rt_lib0clear(&___nl__0);
#line 1201
c_rt_lib0clear(&___nl__1);
#line 1201
c_rt_lib0clear(&___nl__5);
#line 1201
c_rt_lib0clear(&___nl__6);
#line 1201
c_rt_lib0clear(&___nl__7);
#line 1201
c_rt_lib0clear(&___nl__8);
#line 1201
return ___nl__9;
#line 1201
c_rt_lib0clear(&___nl__9);
#line 1201
goto label_21;
#line 1201
label_21:
#line 1201
c_rt_lib0clear(&___nl__8);
#line 1202
goto label_9;
#line 1202
label_9:
#line 1202
c_rt_lib0clear(&___nl__6);
#line 1202
c_rt_lib0clear(&___nl__7);
#line 1203
c_rt_lib0move(&___nl__7, c_rt_lib0ov_mk_none(___get_global_const(42)));
#line 1203
c_rt_lib0move(&___nl__6, c_rt_lib0hash_mk(2, ___get_global_const(1017), ___nl__7, ___get_global_const(72), ___nl__5));
#line 1203
c_rt_lib0clear(&___nl__7);
#line 1203
c_rt_lib0clear(&___nl__0);
#line 1203
c_rt_lib0clear(&___nl__1);
#line 1203
c_rt_lib0clear(&___nl__5);
#line 1203
return ___nl__6;
#line 1203
c_rt_lib0clear(&___nl__6);
#line 1203
c_rt_lib0clear(&___nl__5);
#line 1203
c_rt_lib0clear(&___nl__0);
#line 1203
c_rt_lib0clear(&___nl__1);
#line 1203
return NULL;
}

ImmT type_checker_priv0add_var_to_vars(ImmT ___nl__0,ImmT ___nl__1,ImmT * ___ref___2) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
type_checker_priv0__const__init();
#line 1207
c_rt_lib0delete(hash0set_value(___ref___2, ___nl__1, ___nl__0));
#line 1207
c_rt_lib0clear(&___nl__0);
#line 1207
c_rt_lib0clear(&___nl__1);
#line 1207
return NULL;
}

ImmT type_checker_priv0add_var_decl_to_vars(ImmT ___nl__0,ImmT ___nl__1,ImmT * ___ref___2) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
type_checker_priv0__const__init();
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
#line 1211
c_rt_lib0move(&___nl__4,___get_global_const(722));
#line 1211
c_rt_lib0move(&___nl__3, ov0is(___nl__0, ___nl__4));
#line 1211
c_rt_lib0clear(&___nl__4);
#line 1211
if(c_rt_lib0check_true_native(___nl__3)){ goto label_3;}
#line 1211
c_rt_lib0move(&___nl__4,___get_global_const(730));
#line 1211
c_rt_lib0move(&___nl__3, ov0is(___nl__0, ___nl__4));
#line 1211
c_rt_lib0clear(&___nl__4);
#line 1211
label_3:
#line 1211
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 1211
if(c_rt_lib0check_true_native(___nl__3)){ goto label_2;}
#line 1212
c_rt_lib0move(&___nl__5, c_rt_lib0ov_mk_none(___get_global_const(41)));
#line 1212
c_rt_lib0move(&___nl__4, c_rt_lib0hash_mk(2, ___get_global_const(1017), ___nl__5, ___get_global_const(72), ___nl__0));
#line 1212
c_rt_lib0clear(&___nl__5);
#line 1212
c_rt_lib0delete(type_checker_priv0add_var_to_vars(___nl__4, ___nl__1, ___ref___2));
#line 1212
c_rt_lib0clear(&___nl__4);
#line 1213
goto label_1;
#line 1213
label_2:
#line 1214
c_rt_lib0move(&___nl__5, c_rt_lib0ov_mk_none(___get_global_const(42)));
#line 1214
c_rt_lib0move(&___nl__4, c_rt_lib0hash_mk(2, ___get_global_const(1017), ___nl__5, ___get_global_const(72), ___nl__0));
#line 1214
c_rt_lib0clear(&___nl__5);
#line 1214
c_rt_lib0delete(type_checker_priv0add_var_to_vars(___nl__4, ___nl__1, ___ref___2));
#line 1214
c_rt_lib0clear(&___nl__4);
#line 1215
goto label_1;
#line 1215
label_1:
#line 1215
c_rt_lib0clear(&___nl__3);
#line 1215
c_rt_lib0clear(&___nl__0);
#line 1215
c_rt_lib0clear(&___nl__1);
#line 1215
return NULL;
}

ImmT type_checker_priv0add_var_decl_with_type_and_check(ImmT ___nl__0,ImmT ___nl__1,ImmT * ___ref___2,ImmT * ___ref___3) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
type_checker_priv0__const__init();
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
#line 1220
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(76)));
#line 1220
c_rt_lib0move(&___nl__4, hash0has_key(*___ref___2, ___nl__5));
#line 1220
c_rt_lib0clear(&___nl__5);
#line 1220
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 1220
if(c_rt_lib0check_true_native(___nl__4)){ goto label_2;}
#line 1220
c_rt_lib0move(&___nl__5,___get_global_const(1074));
#line 1220
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(76)));
#line 1220
c_rt_lib0move(&___nl__5, c_rt_lib0concat_add(___nl__5, ___nl__6));
#line 1220
c_rt_lib0clear(&___nl__6);
#line 1220
c_rt_lib0move(&___nl__6,___get_global_const(1146));
#line 1220
c_rt_lib0move(&___nl__5, c_rt_lib0concat_add(___nl__5, ___nl__6));
#line 1220
c_rt_lib0clear(&___nl__6);
#line 1220
c_rt_lib0delete(type_checker_priv0add_error(___ref___3, ___nl__5));
#line 1220
c_rt_lib0clear(&___nl__5);
#line 1220
goto label_2;
#line 1220
label_2:
#line 1220
c_rt_lib0clear(&___nl__4);
#line 1221
c_rt_lib0move(&___nl__4, type_checker_priv0is_known(___nl__1));
#line 1221
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 1221
if(c_rt_lib0check_true_native(___nl__4)){ goto label_4;}
#line 1222
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_none(___get_global_const(42)));
#line 1222
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(72)));
#line 1222
c_rt_lib0move(&___nl__5, c_rt_lib0hash_mk(2, ___get_global_const(1017), ___nl__6, ___get_global_const(72), ___nl__7));
#line 1222
c_rt_lib0clear(&___nl__6);
#line 1222
c_rt_lib0clear(&___nl__7);
#line 1222
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(76)));
#line 1222
c_rt_lib0delete(type_checker_priv0add_var_to_vars(___nl__5, ___nl__6, ___ref___2));
#line 1222
c_rt_lib0clear(&___nl__6);
#line 1222
c_rt_lib0clear(&___nl__5);
#line 1223
goto label_3;
#line 1223
label_4:
#line 1224
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_none(___get_global_const(41)));
#line 1224
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(72)));
#line 1224
c_rt_lib0move(&___nl__5, c_rt_lib0hash_mk(2, ___get_global_const(1017), ___nl__6, ___get_global_const(72), ___nl__7));
#line 1224
c_rt_lib0clear(&___nl__6);
#line 1224
c_rt_lib0clear(&___nl__7);
#line 1224
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(76)));
#line 1224
c_rt_lib0delete(type_checker_priv0add_var_to_vars(___nl__5, ___nl__6, ___ref___2));
#line 1224
c_rt_lib0clear(&___nl__6);
#line 1224
c_rt_lib0clear(&___nl__5);
#line 1225
goto label_3;
#line 1225
label_3:
#line 1225
c_rt_lib0clear(&___nl__4);
#line 1225
c_rt_lib0clear(&___nl__0);
#line 1225
c_rt_lib0clear(&___nl__1);
#line 1225
return NULL;
}

ImmT type_checker_priv0is_known(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
type_checker_priv0__const__init();
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
#line 1228
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(39)));
#line 1228
c_rt_lib0move(&___nl__1, ptd_system0is_known(___nl__2));
#line 1228
c_rt_lib0clear(&___nl__2);
#line 1228
c_rt_lib0clear(&___nl__0);
#line 1228
return ___nl__1;
#line 1228
c_rt_lib0clear(&___nl__1);
#line 1228
c_rt_lib0clear(&___nl__0);
#line 1228
return NULL;
}

ImmT type_checker_priv0get_function_name(ImmT ___nl__0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
type_checker_priv0__const__init();
ImmT ___nl__2 = NULL;
#line 1231
c_rt_lib0move(&___nl__2,___get_global_const(0));
#line 1231
c_rt_lib0move(&___nl__2, c_rt_lib0ne(___nl__0, ___nl__2));
#line 1231
if(c_rt_lib0check_true_native(___nl__2)){ goto label_2;}
#line 1231
c_rt_lib0move(&___nl__2,___get_global_const(0));
#line 1231
goto label_1;
#line 1231
label_2:
#line 1231
c_rt_lib0move(&___nl__2,___get_global_const(579));
#line 1231
c_rt_lib0move(&___nl__2, c_rt_lib0concat_new(___nl__0, ___nl__2));
#line 1231
label_1:
#line 1231
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__1));
#line 1231
c_rt_lib0clear(&___nl__0);
#line 1231
c_rt_lib0clear(&___nl__1);
#line 1231
return ___nl__2;
#line 1231
c_rt_lib0clear(&___nl__2);
#line 1231
c_rt_lib0clear(&___nl__0);
#line 1231
c_rt_lib0clear(&___nl__1);
#line 1231
return NULL;
}

ImmT type_checker_priv0get_fun_module(ImmT ___nl__0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
type_checker_priv0__const__init();
ImmT ___nl__2 = NULL;
#line 1235
c_rt_lib0move(&___nl__2,___get_global_const(0));
#line 1235
c_rt_lib0move(&___nl__2, c_rt_lib0eq(___nl__0, ___nl__2));
#line 1235
if(c_rt_lib0check_true_native(___nl__2)){ goto label_2;}
#line 1235
c_rt_lib0copy(&___nl__2, ___nl__0);
#line 1235
goto label_1;
#line 1235
label_2:
#line 1235
c_rt_lib0copy(&___nl__2, ___nl__1);
#line 1235
label_1:
#line 1235
c_rt_lib0clear(&___nl__0);
#line 1235
c_rt_lib0clear(&___nl__1);
#line 1235
return ___nl__2;
#line 1235
c_rt_lib0clear(&___nl__2);
#line 1235
c_rt_lib0clear(&___nl__0);
#line 1235
c_rt_lib0clear(&___nl__1);
#line 1235
return NULL;
}

ImmT type_checker_priv0get_function_def(ImmT ___nl__0,ImmT ___nl__1,ImmT ___nl__2) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
c_rt_lib0arg_val(___nl__2);
type_checker_priv0__const__init();
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
#line 1240
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(992)));
#line 1240
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(989)));
#line 1240
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__7, ___get_global_const(709)));
#line 1240
c_rt_lib0move(&___nl__6, type_checker_priv0get_fun_module(___nl__0, ___nl__7));
#line 1240
c_rt_lib0clear(&___nl__7);
#line 1240
c_rt_lib0move(&___nl__4, hash0get_value(___nl__5, ___nl__6));
#line 1240
c_rt_lib0clear(&___nl__6);
#line 1240
c_rt_lib0clear(&___nl__5);
#line 1240
c_rt_lib0move(&___nl__5, type_checker_priv0get_fun_key(___nl__1, ___nl__0));
#line 1240
c_rt_lib0move(&___nl__3, hash0get_value(___nl__4, ___nl__5));
#line 1240
c_rt_lib0clear(&___nl__5);
#line 1240
c_rt_lib0clear(&___nl__4);
#line 1240
c_rt_lib0clear(&___nl__0);
#line 1240
c_rt_lib0clear(&___nl__1);
#line 1240
c_rt_lib0clear(&___nl__2);
#line 1240
return ___nl__3;
#line 1240
c_rt_lib0clear(&___nl__3);
#line 1240
c_rt_lib0clear(&___nl__0);
#line 1240
c_rt_lib0clear(&___nl__1);
#line 1240
c_rt_lib0clear(&___nl__2);
#line 1240
return NULL;
}

ImmT type_checker_priv0check_function_exists(ImmT ___nl__0,ImmT ___nl__1,ImmT * ___ref___2,ImmT * ___ref___3) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
type_checker_priv0__const__init();
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
#line 1246
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(*___ref___2, ___get_global_const(989)));
#line 1246
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(709)));
#line 1246
c_rt_lib0move(&___nl__4, type_checker_priv0get_fun_module(___nl__0, ___nl__5));
#line 1246
c_rt_lib0clear(&___nl__5);
#line 1247
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(*___ref___2, ___get_global_const(336)));
#line 1247
c_rt_lib0move(&___nl__5, hash0has_key(___nl__6, ___nl__4));
#line 1247
c_rt_lib0clear(&___nl__6);
#line 1247
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 1247
if(c_rt_lib0check_true_native(___nl__5)){ goto label_3;}
#line 1247
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(*___ref___2, ___get_global_const(336)));
#line 1247
c_rt_lib0move(&___nl__5, hash0get_value(___nl__6, ___nl__4));
#line 1247
c_rt_lib0clear(&___nl__6);
#line 1247
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 1247
label_3:
#line 1247
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 1247
if(c_rt_lib0check_true_native(___nl__5)){ goto label_2;}
#line 1248
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(*___ref___2, ___get_global_const(336)));
#line 1248
c_rt_lib0move(&___nl__6, hash0has_key(___nl__7, ___nl__4));
#line 1248
c_rt_lib0clear(&___nl__7);
#line 1248
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 1248
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 1248
if(c_rt_lib0check_true_native(___nl__6)){ goto label_5;}
#line 1248
c_rt_lib0move(&___nl__7,___get_global_const(718));
#line 1248
c_rt_lib0move(&___nl__7, c_rt_lib0concat_add(___nl__7, ___nl__4));
#line 1248
c_rt_lib0move(&___nl__8,___get_global_const(719));
#line 1248
c_rt_lib0move(&___nl__7, c_rt_lib0concat_add(___nl__7, ___nl__8));
#line 1248
c_rt_lib0clear(&___nl__8);
#line 1248
c_rt_lib0delete(type_checker_priv0add_error(___ref___3, ___nl__7));
#line 1248
c_rt_lib0clear(&___nl__7);
#line 1248
goto label_5;
#line 1248
label_5:
#line 1248
c_rt_lib0clear(&___nl__6);
#line 1249
c_rt_lib0move(&___nl__6,___get_global_const(336));
#line 1249
c_rt_lib0move(&___nl__6, c_rt_lib0get_ref_hash(*___ref___2, ___nl__6));
#line 1249
c_rt_lib0move(&___nl__7, c_rt_lib0get_false());
#line 1249
c_rt_lib0delete(hash0set_value(&___nl__6, ___nl__4, ___nl__7));
#line 1249
c_rt_lib0clear(&___nl__7);
#line 1249
c_rt_lib0move(&___nl__7,___get_global_const(336));
#line 1249
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___2, ___nl__7, ___nl__6));
#line 1249
c_rt_lib0clear(&___nl__7);
#line 1249
c_rt_lib0clear(&___nl__6);
#line 1250
c_rt_lib0move(&___nl__6, c_rt_lib0get_false());
#line 1250
c_rt_lib0clear(&___nl__0);
#line 1250
c_rt_lib0clear(&___nl__1);
#line 1250
c_rt_lib0clear(&___nl__4);
#line 1250
c_rt_lib0clear(&___nl__5);
#line 1250
return ___nl__6;
#line 1250
c_rt_lib0clear(&___nl__6);
#line 1251
goto label_6;
#line 1251
label_2:
#line 1251
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(*___ref___2, ___get_global_const(992)));
#line 1251
c_rt_lib0move(&___nl__5, hash0has_key(___nl__6, ___nl__4));
#line 1251
c_rt_lib0clear(&___nl__6);
#line 1251
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 1251
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 1251
if(c_rt_lib0check_true_native(___nl__5)){ goto label_6;}
#line 1252
c_rt_lib0move(&___nl__6, c_rt_lib0get_false());
#line 1252
c_rt_lib0clear(&___nl__0);
#line 1252
c_rt_lib0clear(&___nl__1);
#line 1252
c_rt_lib0clear(&___nl__4);
#line 1252
c_rt_lib0clear(&___nl__5);
#line 1252
return ___nl__6;
#line 1252
c_rt_lib0clear(&___nl__6);
#line 1253
goto label_6;
#line 1253
label_6:
#line 1253
c_rt_lib0clear(&___nl__5);
#line 1255
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(*___ref___2, ___get_global_const(992)));
#line 1255
c_rt_lib0move(&___nl__6, hash0get_value(___nl__7, ___nl__4));
#line 1255
c_rt_lib0clear(&___nl__7);
#line 1255
c_rt_lib0move(&___nl__7, type_checker_priv0get_fun_key(___nl__1, ___nl__0));
#line 1255
c_rt_lib0move(&___nl__5, hash0has_key(___nl__6, ___nl__7));
#line 1255
c_rt_lib0clear(&___nl__7);
#line 1255
c_rt_lib0clear(&___nl__6);
#line 1255
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 1255
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 1255
if(c_rt_lib0check_true_native(___nl__5)){ goto label_8;}
#line 1256
c_rt_lib0move(&___nl__6,___get_global_const(994));
#line 1256
c_rt_lib0move(&___nl__7, type_checker_priv0get_function_name(___nl__0, ___nl__1));
#line 1256
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__7));
#line 1256
c_rt_lib0clear(&___nl__7);
#line 1256
c_rt_lib0move(&___nl__7,___get_global_const(995));
#line 1256
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__7));
#line 1256
c_rt_lib0clear(&___nl__7);
#line 1256
c_rt_lib0delete(type_checker_priv0add_error(___ref___3, ___nl__6));
#line 1256
c_rt_lib0clear(&___nl__6);
#line 1257
c_rt_lib0move(&___nl__6, c_rt_lib0get_false());
#line 1257
c_rt_lib0clear(&___nl__0);
#line 1257
c_rt_lib0clear(&___nl__1);
#line 1257
c_rt_lib0clear(&___nl__4);
#line 1257
c_rt_lib0clear(&___nl__5);
#line 1257
return ___nl__6;
#line 1257
c_rt_lib0clear(&___nl__6);
#line 1258
goto label_8;
#line 1258
label_8:
#line 1258
c_rt_lib0clear(&___nl__5);
#line 1260
c_rt_lib0move(&___nl__5, c_rt_lib0get_true());
#line 1260
c_rt_lib0clear(&___nl__0);
#line 1260
c_rt_lib0clear(&___nl__1);
#line 1260
c_rt_lib0clear(&___nl__4);
#line 1260
return ___nl__5;
#line 1260
c_rt_lib0clear(&___nl__5);
#line 1260
c_rt_lib0clear(&___nl__4);
#line 1260
c_rt_lib0clear(&___nl__0);
#line 1260
c_rt_lib0clear(&___nl__1);
#line 1260
return NULL;
}

ImmT type_checker_priv0add_error(ImmT * ___ref___0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__1);
type_checker_priv0__const__init();
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
#line 1264
c_rt_lib0move(&___nl__2,___get_global_const(17));
#line 1264
c_rt_lib0move(&___nl__2, c_rt_lib0get_ref_hash(*___ref___0, ___nl__2));
#line 1264
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(710)));
#line 1264
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(99)));
#line 1264
c_rt_lib0move(&___nl__3, c_rt_lib0hash_mk(3, ___get_global_const(97), ___nl__1, ___get_global_const(98), ___nl__4, ___get_global_const(99), ___nl__5));
#line 1264
c_rt_lib0clear(&___nl__4);
#line 1264
c_rt_lib0clear(&___nl__5);
#line 1264
c_rt_lib0delete(array0push(&___nl__2, ___nl__3));
#line 1264
c_rt_lib0clear(&___nl__3);
#line 1264
c_rt_lib0move(&___nl__3,___get_global_const(17));
#line 1264
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__3, ___nl__2));
#line 1264
c_rt_lib0clear(&___nl__3);
#line 1264
c_rt_lib0clear(&___nl__2);
#line 1264
c_rt_lib0clear(&___nl__1);
#line 1264
return NULL;
}

ImmT type_checker_priv0add_warning(ImmT * ___ref___0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__1);
type_checker_priv0__const__init();
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
#line 1267
c_rt_lib0move(&___nl__2,___get_global_const(96));
#line 1267
c_rt_lib0move(&___nl__2, c_rt_lib0get_ref_hash(*___ref___0, ___nl__2));
#line 1267
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(710)));
#line 1267
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(99)));
#line 1267
c_rt_lib0move(&___nl__3, c_rt_lib0hash_mk(3, ___get_global_const(97), ___nl__1, ___get_global_const(98), ___nl__4, ___get_global_const(99), ___nl__5));
#line 1267
c_rt_lib0clear(&___nl__4);
#line 1267
c_rt_lib0clear(&___nl__5);
#line 1267
c_rt_lib0delete(array0push(&___nl__2, ___nl__3));
#line 1267
c_rt_lib0clear(&___nl__3);
#line 1267
c_rt_lib0move(&___nl__3,___get_global_const(96));
#line 1267
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__3, ___nl__2));
#line 1267
c_rt_lib0clear(&___nl__3);
#line 1267
c_rt_lib0clear(&___nl__2);
#line 1267
c_rt_lib0clear(&___nl__1);
#line 1267
return NULL;
}


static ImmT ___const__[2];
static int ___const_init__ = 1;
void type_checker_priv0__const__init(){
if(___const_init__) {
___const_init__ = 0;
__const__f = &___const__[1];


for(int i=0;i<1;++i) ___const__[i] = NULL;
c_rt_lib0register_const(___const__, 1);
}}
ImmT type_checker_priv0__const__sim(int __nr) {
ImmT ret = NULL;
c_rt_lib0copy(&ret, ___const__[__nr]);
return ret;
}
ImmT type_checker_priv0__const__sing(int __nr) {
if(___const__[__nr+0]==NULL) {
switch(__nr){
case 0:
	___const__[0] = type_checker_priv0get_special_functions0cal();
	break;
default:
	nl_die();
}}
ImmT ret = NULL;
c_rt_lib0copy(&ret, ___const__[__nr+0]);
return ret;
}
