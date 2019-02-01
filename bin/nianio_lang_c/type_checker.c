
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
#include "string.h"
#include "boolean_t.h"
#include "nast.h"
#include "ptd_parser.h"
#include "ptd_system.h"
#include "singleton.h"
#line 1 "type_checker.nl"

static ImmT *__const__f = NULL;
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
ImmT type_checker_priv0check_fun_val(ImmT ___nl__0,ImmT * ___ref___1,ImmT * ___ref___2,ImmT * ___ref___3);
ImmT type_checker_priv0unary_op_dec_inc(ImmT ___nl__0,ImmT ___nl__1,ImmT * ___ref___2,ImmT * ___ref___3,ImmT * ___ref___4);
ImmT type_checker_priv0get_special_functions();
ImmT type_checker_priv0get_special_function_def(ImmT ___nl__0,ImmT ___nl__1);
ImmT type_checker_priv0check_special_function(ImmT ___nl__0,ImmT ___nl__1,ImmT ___nl__2,ImmT * ___ref___3,ImmT * ___ref___4,ImmT * ___ref___5);
ImmT type_checker_priv0rec_get_var_from_lval(ImmT ___nl__0,ImmT * ___ref___1);
ImmT type_checker_priv0mk_new_type_lval(ImmT ___nl__0,ImmT ___nl__1,ImmT ___nl__2,ImmT ___nl__3,ImmT * ___ref___4,ImmT * ___ref___5);
ImmT type_checker_priv0set_type_to_lval(ImmT ___nl__0,ImmT ___nl__1,ImmT ___nl__2,ImmT * ___ref___3,ImmT * ___ref___4,ImmT * ___ref___5);
ImmT type_checker_priv0set_type_to_lval_spec(ImmT ___nl__0,ImmT ___nl__1,ImmT ___nl__2,ImmT ___nl__3,ImmT * ___ref___4,ImmT * ___ref___5,ImmT * ___ref___6);
ImmT type_checker_priv0get_type_left_side_equation(ImmT ___nl__0,ImmT * ___ref___1,ImmT * ___ref___2,ImmT * ___ref___3);
ImmT type_checker_priv0get_type_record_key(ImmT ___nl__0,ImmT * ___ref___1,ImmT * ___ref___2,ImmT * ___ref___3);
ImmT type_checker_priv0get_type_from_bin_op_and_check(ImmT ___nl__0,ImmT * ___ref___1,ImmT * ___ref___2,ImmT * ___ref___3);
ImmT type_checker_priv0get_print_tct_type_name(ImmT ___nl__0);
ImmT type_checker_priv0get_print_tct_label(ImmT ___nl__0);
ImmT type_checker_priv0get_print_check_info(ImmT ___nl__0);
ImmT type_checker_priv0check_var_decl(ImmT ___nl__0,ImmT * ___ref___1,ImmT * ___ref___2,ImmT * ___ref___3);
ImmT type_checker_priv0check_var_decl_try(ImmT ___nl__0,ImmT ___nl__1,ImmT * ___ref___2,ImmT * ___ref___3,ImmT * ___ref___4);
ImmT type_checker_priv0add_var_to_vars(ImmT ___nl__0,ImmT ___nl__1,ImmT * ___ref___2);
ImmT type_checker_priv0set_type_to_variable(ImmT * ___ref___0,ImmT ___nl__1,ImmT ___nl__2);
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
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
#line 20
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__0, ___get_global_const(63)));
#line 20
if(c_rt_lib0check_true_native(___nl__2)){ goto label_7;}
#line 27
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__0, ___get_global_const(41)));
#line 27
if(c_rt_lib0check_true_native(___nl__2)){ goto label_46;}
#line 27
c_rt_lib0move(&___nl__2,___get_global_const(91));
#line 27
c_rt_lib0move(&___nl__2, c_rt_lib0array_mk(2, ___nl__2, ___nl__0));
#line 27
nl_die_arg(___nl__2);
#line 20
label_7:
#line 20
c_rt_lib0move(&___nl__3, c_rt_lib0priv_as(___nl__0, ___get_global_const(63)));
#line 21
c_rt_lib0move(&___nl__4, ptd_parser0try_value_to_ptd(___nl__3));
#line 21
c_rt_lib0move(&___nl__5, c_rt_lib0priv_is(___nl__4, ___get_global_const(47)));
#line 21
if(c_rt_lib0check_true_native(___nl__5)){ goto label_17;}
#line 24
c_rt_lib0move(&___nl__5, c_rt_lib0priv_is(___nl__4, ___get_global_const(48)));
#line 24
if(c_rt_lib0check_true_native(___nl__5)){ goto label_31;}
#line 24
c_rt_lib0move(&___nl__5,___get_global_const(91));
#line 24
c_rt_lib0move(&___nl__5, c_rt_lib0array_mk(2, ___nl__5, ___nl__4));
#line 24
nl_die_arg(___nl__5);
#line 21
label_17:
#line 21
c_rt_lib0move(&___nl__6, c_rt_lib0priv_as(___nl__4, ___get_global_const(47)));
#line 22
c_rt_lib0delete(type_checker_priv0add_error(___ref___1, ___nl__6));
#line 23
c_rt_lib0move(&___nl__7, tct0tct_im());
#line 23
c_rt_lib0clear(&___nl__0);
#line 23
c_rt_lib0clear(&___nl__2);
#line 23
c_rt_lib0clear(&___nl__3);
#line 23
c_rt_lib0clear(&___nl__4);
#line 23
c_rt_lib0clear(&___nl__5);
#line 23
c_rt_lib0clear(&___nl__6);
#line 23
return ___nl__7;
#line 23
c_rt_lib0clear(&___nl__7);
#line 23
c_rt_lib0clear(&___nl__6);
#line 24
goto label_41;
#line 24
label_31:
#line 24
c_rt_lib0move(&___nl__6, c_rt_lib0priv_as(___nl__4, ___get_global_const(48)));
#line 25
c_rt_lib0clear(&___nl__0);
#line 25
c_rt_lib0clear(&___nl__2);
#line 25
c_rt_lib0clear(&___nl__3);
#line 25
c_rt_lib0clear(&___nl__4);
#line 25
c_rt_lib0clear(&___nl__5);
#line 25
return ___nl__6;
#line 25
c_rt_lib0clear(&___nl__6);
#line 26
goto label_41;
#line 26
label_41:
#line 26
c_rt_lib0clear(&___nl__4);
#line 26
c_rt_lib0clear(&___nl__5);
#line 26
c_rt_lib0clear(&___nl__3);
#line 27
goto label_53;
#line 27
label_46:
#line 28
c_rt_lib0move(&___nl__3, tct0tct_im());
#line 28
c_rt_lib0clear(&___nl__0);
#line 28
c_rt_lib0clear(&___nl__2);
#line 28
return ___nl__3;
#line 28
c_rt_lib0clear(&___nl__3);
#line 29
goto label_53;
#line 29
label_53:
#line 29
c_rt_lib0clear(&___nl__2);
#line 29
c_rt_lib0clear(&___nl__0);
#line 29
return NULL;
}

ImmT type_checker_priv0get_fun_def_key(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
#line 33
c_rt_lib0move(&___nl__1, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(182)));
#line 33
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__1, ___get_global_const(183)));
#line 33
if(c_rt_lib0check_true_native(___nl__2)){ goto label_8;}
#line 35
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__1, ___get_global_const(379)));
#line 35
if(c_rt_lib0check_true_native(___nl__2)){ goto label_16;}
#line 35
c_rt_lib0move(&___nl__2,___get_global_const(91));
#line 35
c_rt_lib0move(&___nl__2, c_rt_lib0array_mk(2, ___nl__2, ___nl__1));
#line 35
nl_die_arg(___nl__2);
#line 33
label_8:
#line 34
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(93)));
#line 34
c_rt_lib0clear(&___nl__0);
#line 34
c_rt_lib0clear(&___nl__1);
#line 34
c_rt_lib0clear(&___nl__2);
#line 34
return ___nl__3;
#line 34
c_rt_lib0clear(&___nl__3);
#line 35
goto label_27;
#line 35
label_16:
#line 36
c_rt_lib0move(&___nl__3,___get_global_const(776));
#line 36
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(93)));
#line 36
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 36
c_rt_lib0clear(&___nl__4);
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
#line 37
goto label_27;
#line 37
label_27:
#line 37
c_rt_lib0clear(&___nl__1);
#line 37
c_rt_lib0clear(&___nl__2);
#line 37
c_rt_lib0clear(&___nl__0);
#line 37
return NULL;
}

ImmT type_checker_priv0get_fun_key(ImmT ___nl__0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
#line 41
c_rt_lib0move(&___nl__2,___get_global_const(2));
#line 42
c_rt_lib0move(&___nl__3,___get_global_const(2));
#line 42
c_rt_lib0move(&___nl__3, c_rt_lib0eq(___nl__1, ___nl__3));
#line 42
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 42
if(c_rt_lib0check_true_native(___nl__3)){ goto label_9;}
#line 42
c_rt_lib0move(&___nl__4,___get_global_const(776));
#line 42
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__4));
#line 42
c_rt_lib0clear(&___nl__4);
#line 42
goto label_9;
#line 42
label_9:
#line 42
c_rt_lib0clear(&___nl__3);
#line 43
c_rt_lib0move(&___nl__3, c_rt_lib0concat_new(___nl__2, ___nl__0));
#line 43
c_rt_lib0clear(&___nl__0);
#line 43
c_rt_lib0clear(&___nl__1);
#line 43
c_rt_lib0clear(&___nl__2);
#line 43
return ___nl__3;
#line 43
c_rt_lib0clear(&___nl__3);
#line 43
c_rt_lib0clear(&___nl__2);
#line 43
c_rt_lib0clear(&___nl__0);
#line 43
c_rt_lib0clear(&___nl__1);
#line 43
return NULL;
}

ImmT type_checker_priv0return_type_to_tct(ImmT ___nl__0,ImmT * ___ref___1) {
c_rt_lib0arg_val(___nl__0);
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
#line 47
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__0, ___get_global_const(63)));
#line 47
if(c_rt_lib0check_true_native(___nl__2)){ goto label_7;}
#line 55
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__0, ___get_global_const(41)));
#line 55
if(c_rt_lib0check_true_native(___nl__2)){ goto label_53;}
#line 55
c_rt_lib0move(&___nl__2,___get_global_const(91));
#line 55
c_rt_lib0move(&___nl__2, c_rt_lib0array_mk(2, ___nl__2, ___nl__0));
#line 55
nl_die_arg(___nl__2);
#line 47
label_7:
#line 47
c_rt_lib0move(&___nl__3, c_rt_lib0priv_as(___nl__0, ___get_global_const(63)));
#line 48
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(192)));
#line 48
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__4, ___get_global_const(812)));
#line 48
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 48
if(c_rt_lib0check_true_native(___nl__4)){ goto label_43;}
#line 49
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(192)));
#line 49
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__5, ___get_global_const(812)));
#line 50
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(132)));
#line 50
c_rt_lib0move(&___nl__8,___get_global_const(677));
#line 50
c_rt_lib0move(&___nl__6, c_rt_lib0eq(___nl__6, ___nl__8));
#line 50
c_rt_lib0clear(&___nl__8);
#line 50
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__6));
#line 50
if(c_rt_lib0check_true_native(___nl__7)){ goto label_25;}
#line 50
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(93)));
#line 50
c_rt_lib0move(&___nl__8,___get_global_const(778));
#line 50
c_rt_lib0move(&___nl__6, c_rt_lib0eq(___nl__6, ___nl__8));
#line 50
c_rt_lib0clear(&___nl__8);
#line 50
label_25:
#line 50
c_rt_lib0clear(&___nl__7);
#line 50
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 50
if(c_rt_lib0check_true_native(___nl__6)){ goto label_39;}
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
goto label_39;
#line 52
label_39:
#line 52
c_rt_lib0clear(&___nl__6);
#line 52
c_rt_lib0clear(&___nl__5);
#line 53
goto label_43;
#line 53
label_43:
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
goto label_60;
#line 55
label_53:
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
goto label_60;
#line 57
label_60:
#line 57
c_rt_lib0clear(&___nl__2);
#line 57
c_rt_lib0clear(&___nl__0);
#line 57
return NULL;
}

ImmT type_checker_priv0check_types_imported(ImmT ___nl__0,ImmT * ___ref___1,ImmT * ___ref___2) {
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
#line 62
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__0, ___get_global_const(798)));
#line 62
if(c_rt_lib0check_true_native(___nl__3)){ goto label_21;}
#line 63
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__0, ___get_global_const(799)));
#line 63
if(c_rt_lib0check_true_native(___nl__3)){ goto label_23;}
#line 65
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__0, ___get_global_const(800)));
#line 65
if(c_rt_lib0check_true_native(___nl__3)){ goto label_28;}
#line 67
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__0, ___get_global_const(801)));
#line 67
if(c_rt_lib0check_true_native(___nl__3)){ goto label_33;}
#line 71
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__0, ___get_global_const(802)));
#line 71
if(c_rt_lib0check_true_native(___nl__3)){ goto label_50;}
#line 80
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__0, ___get_global_const(803)));
#line 80
if(c_rt_lib0check_true_native(___nl__3)){ goto label_90;}
#line 81
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__0, ___get_global_const(804)));
#line 81
if(c_rt_lib0check_true_native(___nl__3)){ goto label_92;}
#line 82
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__0, ___get_global_const(805)));
#line 82
if(c_rt_lib0check_true_native(___nl__3)){ goto label_94;}
#line 89
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__0, ___get_global_const(806)));
#line 89
if(c_rt_lib0check_true_native(___nl__3)){ goto label_126;}
#line 89
c_rt_lib0move(&___nl__3,___get_global_const(91));
#line 89
c_rt_lib0move(&___nl__3, c_rt_lib0array_mk(2, ___nl__3, ___nl__0));
#line 89
nl_die_arg(___nl__3);
#line 62
label_21:
#line 63
goto label_128;
#line 63
label_23:
#line 63
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__0, ___get_global_const(799)));
#line 64
c_rt_lib0delete(type_checker_priv0check_types_imported(___nl__4, ___ref___1, ___ref___2));
#line 64
c_rt_lib0clear(&___nl__4);
#line 65
goto label_128;
#line 65
label_28:
#line 65
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__0, ___get_global_const(800)));
#line 66
c_rt_lib0delete(type_checker_priv0check_types_imported(___nl__4, ___ref___1, ___ref___2));
#line 66
c_rt_lib0clear(&___nl__4);
#line 67
goto label_128;
#line 67
label_33:
#line 67
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__0, ___get_global_const(801)));
#line 68
c_rt_lib0move(&___nl__7, c_rt_lib0init_iter(___nl__4));
#line 68
label_36:
#line 68
c_rt_lib0move(&___nl__5, c_rt_lib0is_end_hash(___nl__7));
#line 68
if(c_rt_lib0check_true_native(___nl__5)){ goto label_44;}
#line 68
c_rt_lib0move(&___nl__5, c_rt_lib0get_key_iter(___nl__7));
#line 68
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value(___nl__4, ___nl__5));
#line 69
c_rt_lib0delete(type_checker_priv0check_types_imported(___nl__6, ___ref___1, ___ref___2));
#line 70
c_rt_lib0move(&___nl__7, c_rt_lib0next_iter(___nl__7));
#line 70
goto label_36;
#line 70
label_44:
#line 70
c_rt_lib0clear(&___nl__5);
#line 70
c_rt_lib0clear(&___nl__6);
#line 70
c_rt_lib0clear(&___nl__7);
#line 70
c_rt_lib0clear(&___nl__4);
#line 71
goto label_128;
#line 71
label_50:
#line 71
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__0, ___get_global_const(802)));
#line 72
c_rt_lib0move(&___nl__6,___get_global_const(185));
#line 72
c_rt_lib0move(&___nl__5, string0index2(___nl__4, ___nl__6));
#line 72
c_rt_lib0clear(&___nl__6);
#line 73
c_rt_lib0move(&___nl__6,___get_global_const(0));
#line 73
c_rt_lib0move(&___nl__6, c_rt_lib0ge(___nl__5, ___nl__6));
#line 73
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 73
if(c_rt_lib0check_true_native(___nl__6)){ goto label_76;}
#line 74
c_rt_lib0move(&___nl__8,___get_global_const(0));
#line 74
c_rt_lib0move(&___nl__7, string0substr(___nl__4, ___nl__8, ___nl__5));
#line 74
c_rt_lib0clear(&___nl__8);
#line 75
c_rt_lib0move(&___nl__9,___get_global_const(6));
#line 75
c_rt_lib0move(&___nl__9, c_rt_lib0add(___nl__5, ___nl__9));
#line 75
c_rt_lib0move(&___nl__10, string0length(___nl__4));
#line 75
c_rt_lib0move(&___nl__10, c_rt_lib0sub_mod(___nl__10, ___nl__5));
#line 75
c_rt_lib0move(&___nl__11,___get_global_const(6));
#line 75
c_rt_lib0move(&___nl__10, c_rt_lib0sub_mod(___nl__10, ___nl__11));
#line 75
c_rt_lib0clear(&___nl__11);
#line 75
c_rt_lib0move(&___nl__8, string0substr(___nl__4, ___nl__9, ___nl__10));
#line 75
c_rt_lib0clear(&___nl__10);
#line 75
c_rt_lib0clear(&___nl__9);
#line 76
c_rt_lib0delete(type_checker_priv0check_function_exists(___nl__7, ___nl__8, ___ref___1, ___ref___2));
#line 76
c_rt_lib0clear(&___nl__7);
#line 76
c_rt_lib0clear(&___nl__8);
#line 77
goto label_85;
#line 77
label_76:
#line 78
c_rt_lib0move(&___nl__7,___get_global_const(1166));
#line 78
c_rt_lib0move(&___nl__7, c_rt_lib0concat_add(___nl__7, ___nl__4));
#line 78
c_rt_lib0move(&___nl__8,___get_global_const(808));
#line 78
c_rt_lib0move(&___nl__7, c_rt_lib0concat_add(___nl__7, ___nl__8));
#line 78
c_rt_lib0clear(&___nl__8);
#line 78
c_rt_lib0delete(type_checker_priv0add_error(___ref___2, ___nl__7));
#line 78
c_rt_lib0clear(&___nl__7);
#line 79
goto label_85;
#line 79
label_85:
#line 79
c_rt_lib0clear(&___nl__6);
#line 79
c_rt_lib0clear(&___nl__5);
#line 79
c_rt_lib0clear(&___nl__4);
#line 80
goto label_128;
#line 80
label_90:
#line 81
goto label_128;
#line 81
label_92:
#line 82
goto label_128;
#line 82
label_94:
#line 82
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__0, ___get_global_const(805)));
#line 83
c_rt_lib0move(&___nl__7, c_rt_lib0init_iter(___nl__4));
#line 83
label_97:
#line 83
c_rt_lib0move(&___nl__5, c_rt_lib0is_end_hash(___nl__7));
#line 83
if(c_rt_lib0check_true_native(___nl__5)){ goto label_120;}
#line 83
c_rt_lib0move(&___nl__5, c_rt_lib0get_key_iter(___nl__7));
#line 83
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value(___nl__4, ___nl__5));
#line 84
c_rt_lib0move(&___nl__8, c_rt_lib0priv_is(___nl__6, ___get_global_const(809)));
#line 84
if(c_rt_lib0check_true_native(___nl__8)){ goto label_109;}
#line 85
c_rt_lib0move(&___nl__8, c_rt_lib0priv_is(___nl__6, ___get_global_const(810)));
#line 85
if(c_rt_lib0check_true_native(___nl__8)){ goto label_111;}
#line 85
c_rt_lib0move(&___nl__8,___get_global_const(91));
#line 85
c_rt_lib0move(&___nl__8, c_rt_lib0array_mk(2, ___nl__8, ___nl__6));
#line 85
nl_die_arg(___nl__8);
#line 84
label_109:
#line 85
goto label_116;
#line 85
label_111:
#line 85
c_rt_lib0move(&___nl__9, c_rt_lib0priv_as(___nl__6, ___get_global_const(810)));
#line 86
c_rt_lib0delete(type_checker_priv0check_types_imported(___nl__9, ___ref___1, ___ref___2));
#line 86
c_rt_lib0clear(&___nl__9);
#line 87
goto label_116;
#line 87
label_116:
#line 87
c_rt_lib0clear(&___nl__8);
#line 88
c_rt_lib0move(&___nl__7, c_rt_lib0next_iter(___nl__7));
#line 88
goto label_97;
#line 88
label_120:
#line 88
c_rt_lib0clear(&___nl__5);
#line 88
c_rt_lib0clear(&___nl__6);
#line 88
c_rt_lib0clear(&___nl__7);
#line 88
c_rt_lib0clear(&___nl__4);
#line 89
goto label_128;
#line 89
label_126:
#line 90
goto label_128;
#line 90
label_128:
#line 90
c_rt_lib0clear(&___nl__3);
#line 90
c_rt_lib0clear(&___nl__0);
#line 90
return NULL;
}

ImmT type_checker_priv0prepare_def_fun(ImmT ___nl__0,ImmT * ___ref___1) {
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
#line 94
c_rt_lib0move(&___nl__2, c_rt_lib0hash_mk(0));
#line 95
c_rt_lib0move(&___nl__5, c_rt_lib0init_iter(___nl__0));
#line 95
label_2:
#line 95
c_rt_lib0move(&___nl__3, c_rt_lib0is_end_hash(___nl__5));
#line 95
if(c_rt_lib0check_true_native(___nl__3)){ goto label_97;}
#line 95
c_rt_lib0move(&___nl__3, c_rt_lib0get_key_iter(___nl__5));
#line 95
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value(___nl__0, ___nl__3));
#line 96
c_rt_lib0move(&___nl__6,___get_global_const(1));
#line 96
c_rt_lib0move(&___nl__6, c_rt_lib0unary_minus(___nl__6));
#line 96
c_rt_lib0copy(&___nl__7, ___nl__6);
#line 96
c_rt_lib0hash_set_value_dec(___ref___1, ___get_global_const(786), ___nl__7);
#line 96
c_rt_lib0clear(&___nl__6);
#line 96
c_rt_lib0clear(&___nl__7);
#line 97
c_rt_lib0copy(&___nl__6, ___nl__3);
#line 97
c_rt_lib0hash_set_value_dec(___ref___1, ___get_global_const(132), ___nl__6);
#line 97
c_rt_lib0clear(&___nl__6);
#line 98
c_rt_lib0move(&___nl__6, c_rt_lib0hash_mk(0));
#line 99
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(787)));
#line 99
c_rt_lib0move(&___nl__9,___get_global_const(0));
#line 99
c_rt_lib0move(&___nl__10,___get_global_const(1));
#line 99
c_rt_lib0move(&___nl__11, c_rt_lib0array_len(___nl__7));
#line 99
label_21:
#line 99
c_rt_lib0move(&___nl__12, c_rt_lib0ge(___nl__9, ___nl__11));
#line 99
if(c_rt_lib0check_true_native(___nl__12)){ goto label_86;}
#line 99
c_rt_lib0move(&___nl__8, c_rt_lib0array_get(___nl__7, ___nl__9));
#line 100
c_rt_lib0move(&___nl__13, c_rt_lib0array_mk(0));
#line 101
c_rt_lib0move(&___nl__14, c_rt_lib0hash_get_value_dec(___nl__8, ___get_global_const(89)));
#line 101
c_rt_lib0move(&___nl__16,___get_global_const(0));
#line 101
c_rt_lib0move(&___nl__17,___get_global_const(1));
#line 101
c_rt_lib0move(&___nl__18, c_rt_lib0array_len(___nl__14));
#line 101
label_30:
#line 101
c_rt_lib0move(&___nl__19, c_rt_lib0ge(___nl__16, ___nl__18));
#line 101
if(c_rt_lib0check_true_native(___nl__19)){ goto label_47;}
#line 101
c_rt_lib0move(&___nl__15, c_rt_lib0array_get(___nl__14, ___nl__16));
#line 103
c_rt_lib0move(&___nl__21, c_rt_lib0hash_get_value_dec(___nl__15, ___get_global_const(93)));
#line 104
c_rt_lib0move(&___nl__22, c_rt_lib0hash_get_value_dec(___nl__15, ___get_global_const(222)));
#line 105
c_rt_lib0move(&___nl__24, c_rt_lib0hash_get_value_dec(___nl__15, ___get_global_const(63)));
#line 105
c_rt_lib0move(&___nl__23, type_checker_priv0type_to_ptd(___nl__24, ___ref___1));
#line 105
c_rt_lib0clear(&___nl__24);
#line 105
c_rt_lib0move(&___nl__20, c_rt_lib0hash_mk(3, ___get_global_const(93), ___nl__21, ___get_global_const(222), ___nl__22, ___get_global_const(63), ___nl__23));
#line 105
c_rt_lib0clear(&___nl__21);
#line 105
c_rt_lib0clear(&___nl__22);
#line 105
c_rt_lib0clear(&___nl__23);
#line 105
c_rt_lib0delete(array0push(&___nl__13, ___nl__20));
#line 105
c_rt_lib0clear(&___nl__20);
#line 107
c_rt_lib0move(&___nl__16, c_rt_lib0add_mod(___nl__16, ___nl__17));
#line 107
goto label_30;
#line 107
label_47:
#line 107
c_rt_lib0clear(&___nl__14);
#line 107
c_rt_lib0clear(&___nl__15);
#line 107
c_rt_lib0clear(&___nl__16);
#line 107
c_rt_lib0clear(&___nl__17);
#line 107
c_rt_lib0clear(&___nl__18);
#line 107
c_rt_lib0clear(&___nl__19);
#line 109
c_rt_lib0move(&___nl__15, c_rt_lib0hash_get_value_dec(___nl__8, ___get_global_const(201)));
#line 110
c_rt_lib0move(&___nl__16, c_rt_lib0ov_mk_none(___get_global_const(46)));
#line 111
c_rt_lib0move(&___nl__17, c_rt_lib0ov_mk_none(___get_global_const(46)));
#line 112
c_rt_lib0move(&___nl__18, c_rt_lib0hash_get_value_dec(___nl__8, ___get_global_const(93)));
#line 114
c_rt_lib0move(&___nl__19, c_rt_lib0hash_get_value_dec(___nl__8, ___get_global_const(182)));
#line 116
c_rt_lib0move(&___nl__21, c_rt_lib0hash_get_value_dec(___nl__8, ___get_global_const(788)));
#line 116
c_rt_lib0move(&___nl__20, type_checker_priv0return_type_to_tct(___nl__21, ___ref___1));
#line 116
c_rt_lib0clear(&___nl__21);
#line 116
c_rt_lib0move(&___nl__14, c_rt_lib0hash_mk(8, ___get_global_const(201), ___nl__15, ___get_global_const(1096), ___nl__16, ___get_global_const(1091), ___nl__17, ___get_global_const(93), ___nl__18, ___get_global_const(132), ___nl__3, ___get_global_const(182), ___nl__19, ___get_global_const(89), ___nl__13, ___get_global_const(788), ___nl__20));
#line 116
c_rt_lib0clear(&___nl__15);
#line 116
c_rt_lib0clear(&___nl__16);
#line 116
c_rt_lib0clear(&___nl__17);
#line 116
c_rt_lib0clear(&___nl__18);
#line 116
c_rt_lib0clear(&___nl__19);
#line 116
c_rt_lib0clear(&___nl__20);
#line 118
c_rt_lib0move(&___nl__15, type_checker_priv0get_fun_def_key(___nl__14));
#line 119
c_rt_lib0move(&___nl__16, hash0has_key(___nl__6, ___nl__15));
#line 119
c_rt_lib0move(&___nl__16, c_rt_lib0not(___nl__16));
#line 119
if(c_rt_lib0check_true_native(___nl__16)){ goto label_78;}
#line 119
c_rt_lib0move(&___nl__17,___get_global_const(1167));
#line 119
c_rt_lib0move(&___nl__17, c_rt_lib0concat_add(___nl__17, ___nl__15));
#line 119
c_rt_lib0delete(type_checker_priv0add_error(___ref___1, ___nl__17));
#line 119
c_rt_lib0clear(&___nl__17);
#line 119
goto label_78;
#line 119
label_78:
#line 119
c_rt_lib0clear(&___nl__16);
#line 120
c_rt_lib0delete(hash0set_value(&___nl__6, ___nl__15, ___nl__14));
#line 120
c_rt_lib0clear(&___nl__13);
#line 120
c_rt_lib0clear(&___nl__14);
#line 120
c_rt_lib0clear(&___nl__15);
#line 121
c_rt_lib0move(&___nl__9, c_rt_lib0add_mod(___nl__9, ___nl__10));
#line 121
goto label_21;
#line 121
label_86:
#line 121
c_rt_lib0clear(&___nl__7);
#line 121
c_rt_lib0clear(&___nl__8);
#line 121
c_rt_lib0clear(&___nl__9);
#line 121
c_rt_lib0clear(&___nl__10);
#line 121
c_rt_lib0clear(&___nl__11);
#line 121
c_rt_lib0clear(&___nl__12);
#line 122
c_rt_lib0delete(hash0set_value(&___nl__2, ___nl__3, ___nl__6));
#line 122
c_rt_lib0clear(&___nl__6);
#line 123
c_rt_lib0move(&___nl__5, c_rt_lib0next_iter(___nl__5));
#line 123
goto label_2;
#line 123
label_97:
#line 123
c_rt_lib0clear(&___nl__3);
#line 123
c_rt_lib0clear(&___nl__4);
#line 123
c_rt_lib0clear(&___nl__5);
#line 124
c_rt_lib0clear(&___nl__0);
#line 124
return ___nl__2;
#line 124
c_rt_lib0clear(&___nl__2);
#line 124
c_rt_lib0clear(&___nl__0);
#line 124
return NULL;
}

ImmT type_checker0check0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 2, "type_checker0check");
return type_checker0check(_tab[0], _tab[1]);}
ImmT type_checker0check(ImmT ___nl__0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
ImmT ___nl__2 = NULL;
#line 129
c_rt_lib0move(&___nl__2, type_checker0check_modules(___nl__0, ___nl__1));
#line 129
c_rt_lib0clear(&___nl__0);
#line 129
c_rt_lib0clear(&___nl__1);
#line 129
return ___nl__2;
#line 129
c_rt_lib0clear(&___nl__2);
#line 129
c_rt_lib0clear(&___nl__0);
#line 129
c_rt_lib0clear(&___nl__1);
#line 129
return NULL;
}

ImmT type_checker0check_modules0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 2, "type_checker0check_modules");
return type_checker0check_modules(_tab[0], _tab[1]);}
ImmT type_checker0check_modules(ImmT ___nl__0,ImmT ___nl__1) {
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
#line 134
c_rt_lib0move(&___nl__3, c_rt_lib0array_mk(0));
#line 134
c_rt_lib0move(&___nl__4, c_rt_lib0array_mk(0));
#line 134
c_rt_lib0move(&___nl__5,___get_global_const(1));
#line 134
c_rt_lib0move(&___nl__5, c_rt_lib0unary_minus(___nl__5));
#line 134
c_rt_lib0move(&___nl__6,___get_global_const(2));
#line 134
c_rt_lib0move(&___nl__2, c_rt_lib0hash_mk(4, ___get_global_const(18), ___nl__3, ___get_global_const(113), ___nl__4, ___get_global_const(786), ___nl__5, ___get_global_const(132), ___nl__6));
#line 134
c_rt_lib0clear(&___nl__3);
#line 134
c_rt_lib0clear(&___nl__4);
#line 134
c_rt_lib0clear(&___nl__5);
#line 134
c_rt_lib0clear(&___nl__6);
#line 135
c_rt_lib0move(&___nl__3, type_checker_priv0prepare_def_fun(___nl__1, &___nl__2));
#line 136
c_rt_lib0move(&___nl__5, c_rt_lib0array_mk(0));
#line 136
c_rt_lib0move(&___nl__6, c_rt_lib0array_mk(0));
#line 136
c_rt_lib0move(&___nl__4, c_rt_lib0hash_mk(2, ___get_global_const(152), ___nl__5, ___get_global_const(154), ___nl__6));
#line 136
c_rt_lib0clear(&___nl__5);
#line 136
c_rt_lib0clear(&___nl__6);
#line 137
c_rt_lib0move(&___nl__7, c_rt_lib0init_iter(___nl__0));
#line 137
label_17:
#line 137
c_rt_lib0move(&___nl__5, c_rt_lib0is_end_hash(___nl__7));
#line 137
if(c_rt_lib0check_true_native(___nl__5)){ goto label_34;}
#line 137
c_rt_lib0move(&___nl__5, c_rt_lib0get_key_iter(___nl__7));
#line 137
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value(___nl__0, ___nl__5));
#line 138
c_rt_lib0move(&___nl__8,___get_global_const(1));
#line 138
c_rt_lib0move(&___nl__8, c_rt_lib0unary_minus(___nl__8));
#line 138
c_rt_lib0copy(&___nl__9, ___nl__8);
#line 138
c_rt_lib0hash_set_value_dec(&___nl__2, ___get_global_const(786), ___nl__9);
#line 138
c_rt_lib0clear(&___nl__8);
#line 138
c_rt_lib0clear(&___nl__9);
#line 139
c_rt_lib0copy(&___nl__8, ___nl__5);
#line 139
c_rt_lib0hash_set_value_dec(&___nl__2, ___get_global_const(132), ___nl__8);
#line 139
c_rt_lib0clear(&___nl__8);
#line 140
c_rt_lib0delete(type_checker_priv0check_module(___nl__6, &___nl__3, &___nl__2, &___nl__4));
#line 141
c_rt_lib0move(&___nl__7, c_rt_lib0next_iter(___nl__7));
#line 141
goto label_17;
#line 141
label_34:
#line 141
c_rt_lib0clear(&___nl__5);
#line 141
c_rt_lib0clear(&___nl__6);
#line 141
c_rt_lib0clear(&___nl__7);
#line 142
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(18)));
#line 142
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(113)));
#line 142
c_rt_lib0move(&___nl__5, c_rt_lib0hash_mk(3, ___get_global_const(18), ___nl__6, ___get_global_const(66), ___nl__4, ___get_global_const(113), ___nl__7));
#line 142
c_rt_lib0clear(&___nl__6);
#line 142
c_rt_lib0clear(&___nl__7);
#line 142
c_rt_lib0clear(&___nl__0);
#line 142
c_rt_lib0clear(&___nl__1);
#line 142
c_rt_lib0clear(&___nl__2);
#line 142
c_rt_lib0clear(&___nl__3);
#line 142
c_rt_lib0clear(&___nl__4);
#line 142
return ___nl__5;
#line 142
c_rt_lib0clear(&___nl__5);
#line 142
c_rt_lib0clear(&___nl__2);
#line 142
c_rt_lib0clear(&___nl__3);
#line 142
c_rt_lib0clear(&___nl__4);
#line 142
c_rt_lib0clear(&___nl__0);
#line 142
c_rt_lib0clear(&___nl__1);
#line 142
return NULL;
}

ImmT type_checker_priv0check_module(ImmT ___nl__0,ImmT * ___ref___1,ImmT * ___ref___2,ImmT * ___ref___3) {
c_rt_lib0arg_val(___nl__0);
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
#line 150
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(93)));
#line 151
c_rt_lib0move(&___nl__8, c_rt_lib0hash_mk(0));
#line 151
c_rt_lib0move(&___nl__9, c_rt_lib0get_false());
#line 151
c_rt_lib0move(&___nl__7, c_rt_lib0hash_mk(2, ___get_global_const(674), ___nl__8, ___get_global_const(884), ___nl__9));
#line 151
c_rt_lib0clear(&___nl__8);
#line 151
c_rt_lib0clear(&___nl__9);
#line 152
c_rt_lib0move(&___nl__8, tct0empty());
#line 152
c_rt_lib0move(&___nl__5, c_rt_lib0hash_mk(4, ___get_global_const(66), *___ref___3, ___get_global_const(785), ___nl__6, ___get_global_const(1138), ___nl__7, ___get_global_const(788), ___nl__8));
#line 152
c_rt_lib0clear(&___nl__6);
#line 152
c_rt_lib0clear(&___nl__7);
#line 152
c_rt_lib0clear(&___nl__8);
#line 154
c_rt_lib0move(&___nl__6, c_rt_lib0hash_mk(0));
#line 154
c_rt_lib0move(&___nl__4, c_rt_lib0hash_mk(3, ___get_global_const(1089), ___nl__5, ___get_global_const(384), ___nl__6, ___get_global_const(1092), *___ref___1));
#line 154
c_rt_lib0clear(&___nl__5);
#line 154
c_rt_lib0clear(&___nl__6);
#line 157
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(150)));
#line 157
c_rt_lib0move(&___nl__7,___get_global_const(0));
#line 157
c_rt_lib0move(&___nl__8,___get_global_const(1));
#line 157
c_rt_lib0move(&___nl__9, c_rt_lib0array_len(___nl__5));
#line 157
label_19:
#line 157
c_rt_lib0move(&___nl__10, c_rt_lib0ge(___nl__7, ___nl__9));
#line 157
if(c_rt_lib0check_true_native(___nl__10)){ goto label_36;}
#line 157
c_rt_lib0move(&___nl__6, c_rt_lib0array_get(___nl__5, ___nl__7));
#line 158
c_rt_lib0move(&___nl__11,___get_global_const(384));
#line 158
c_rt_lib0move(&___nl__11, c_rt_lib0get_ref_hash(___nl__4, ___nl__11));
#line 158
c_rt_lib0move(&___nl__12, c_rt_lib0hash_get_value_dec(___nl__6, ___get_global_const(93)));
#line 158
c_rt_lib0move(&___nl__13, c_rt_lib0get_true());
#line 158
c_rt_lib0delete(hash0set_value(&___nl__11, ___nl__12, ___nl__13));
#line 158
c_rt_lib0clear(&___nl__13);
#line 158
c_rt_lib0clear(&___nl__12);
#line 158
c_rt_lib0move(&___nl__12,___get_global_const(384));
#line 158
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__4, ___nl__12, ___nl__11));
#line 158
c_rt_lib0clear(&___nl__12);
#line 158
c_rt_lib0clear(&___nl__11);
#line 159
c_rt_lib0move(&___nl__7, c_rt_lib0add_mod(___nl__7, ___nl__8));
#line 159
goto label_19;
#line 159
label_36:
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
#line 159
c_rt_lib0clear(&___nl__10);
#line 160
c_rt_lib0move(&___nl__5,___get_global_const(384));
#line 160
c_rt_lib0move(&___nl__5, c_rt_lib0get_ref_hash(___nl__4, ___nl__5));
#line 160
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(93)));
#line 160
c_rt_lib0move(&___nl__7, c_rt_lib0get_true());
#line 160
c_rt_lib0delete(hash0set_value(&___nl__5, ___nl__6, ___nl__7));
#line 160
c_rt_lib0clear(&___nl__7);
#line 160
c_rt_lib0clear(&___nl__6);
#line 160
c_rt_lib0move(&___nl__6,___get_global_const(384));
#line 160
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__4, ___nl__6, ___nl__5));
#line 160
c_rt_lib0clear(&___nl__6);
#line 160
c_rt_lib0clear(&___nl__5);
#line 161
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(787)));
#line 161
c_rt_lib0move(&___nl__7,___get_global_const(0));
#line 161
c_rt_lib0move(&___nl__8,___get_global_const(1));
#line 161
c_rt_lib0move(&___nl__9, c_rt_lib0array_len(___nl__5));
#line 161
label_58:
#line 161
c_rt_lib0move(&___nl__10, c_rt_lib0ge(___nl__7, ___nl__9));
#line 161
if(c_rt_lib0check_true_native(___nl__10)){ goto label_111;}
#line 161
c_rt_lib0move(&___nl__6, c_rt_lib0array_get(___nl__5, ___nl__7));
#line 162
c_rt_lib0move(&___nl__11, c_rt_lib0hash_mk(0));
#line 163
c_rt_lib0move(&___nl__12, c_rt_lib0hash_get_value_dec(___nl__6, ___get_global_const(89)));
#line 163
c_rt_lib0move(&___nl__14,___get_global_const(0));
#line 163
c_rt_lib0move(&___nl__15,___get_global_const(1));
#line 163
c_rt_lib0move(&___nl__16, c_rt_lib0array_len(___nl__12));
#line 163
label_67:
#line 163
c_rt_lib0move(&___nl__17, c_rt_lib0ge(___nl__14, ___nl__16));
#line 163
if(c_rt_lib0check_true_native(___nl__17)){ goto label_81;}
#line 163
c_rt_lib0move(&___nl__13, c_rt_lib0array_get(___nl__12, ___nl__14));
#line 164
c_rt_lib0move(&___nl__19, c_rt_lib0hash_get_value_dec(___nl__13, ___get_global_const(63)));
#line 164
c_rt_lib0move(&___nl__18, type_checker_priv0type_to_ptd(___nl__19, ___ref___2));
#line 164
c_rt_lib0clear(&___nl__19);
#line 165
c_rt_lib0delete(type_checker_priv0check_types_imported(___nl__18, &___nl__4, ___ref___2));
#line 166
c_rt_lib0move(&___nl__19, c_rt_lib0hash_get_value_dec(___nl__13, ___get_global_const(93)));
#line 166
c_rt_lib0delete(type_checker_priv0add_var_decl_to_vars(___nl__18, ___nl__19, &___nl__11));
#line 166
c_rt_lib0clear(&___nl__19);
#line 166
c_rt_lib0clear(&___nl__18);
#line 167
c_rt_lib0move(&___nl__14, c_rt_lib0add_mod(___nl__14, ___nl__15));
#line 167
goto label_67;
#line 167
label_81:
#line 167
c_rt_lib0clear(&___nl__12);
#line 167
c_rt_lib0clear(&___nl__13);
#line 167
c_rt_lib0clear(&___nl__14);
#line 167
c_rt_lib0clear(&___nl__15);
#line 167
c_rt_lib0clear(&___nl__16);
#line 167
c_rt_lib0clear(&___nl__17);
#line 168
c_rt_lib0move(&___nl__13, c_rt_lib0hash_get_value_dec(___nl__6, ___get_global_const(788)));
#line 168
c_rt_lib0move(&___nl__12, type_checker_priv0return_type_to_tct(___nl__13, ___ref___2));
#line 168
c_rt_lib0clear(&___nl__13);
#line 168
c_rt_lib0move(&___nl__13,___get_global_const(1089));
#line 168
c_rt_lib0move(&___nl__13, c_rt_lib0get_ref_hash(___nl__4, ___nl__13));
#line 168
c_rt_lib0copy(&___nl__14, ___nl__12);
#line 168
c_rt_lib0hash_set_value_dec(&___nl__13, ___get_global_const(788), ___nl__14);
#line 168
c_rt_lib0move(&___nl__15,___get_global_const(1089));
#line 168
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__4, ___nl__15, ___nl__13));
#line 168
c_rt_lib0clear(&___nl__15);
#line 168
c_rt_lib0clear(&___nl__12);
#line 168
c_rt_lib0clear(&___nl__13);
#line 168
c_rt_lib0clear(&___nl__14);
#line 169
c_rt_lib0move(&___nl__12, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(1089)));
#line 169
c_rt_lib0move(&___nl__12, c_rt_lib0hash_get_value_dec(___nl__12, ___get_global_const(788)));
#line 169
c_rt_lib0delete(type_checker_priv0check_types_imported(___nl__12, &___nl__4, ___ref___2));
#line 169
c_rt_lib0clear(&___nl__12);
#line 170
c_rt_lib0move(&___nl__12, c_rt_lib0hash_get_value_dec(___nl__6, ___get_global_const(201)));
#line 170
c_rt_lib0delete(type_checker_priv0check_cmd(___nl__12, &___nl__4, &___nl__11, ___ref___2));
#line 170
c_rt_lib0clear(&___nl__12);
#line 170
c_rt_lib0clear(&___nl__11);
#line 171
c_rt_lib0move(&___nl__7, c_rt_lib0add_mod(___nl__7, ___nl__8));
#line 171
goto label_58;
#line 171
label_111:
#line 171
c_rt_lib0clear(&___nl__5);
#line 171
c_rt_lib0clear(&___nl__6);
#line 171
c_rt_lib0clear(&___nl__7);
#line 171
c_rt_lib0clear(&___nl__8);
#line 171
c_rt_lib0clear(&___nl__9);
#line 171
c_rt_lib0clear(&___nl__10);
#line 172
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(1092)));
#line 172
c_rt_lib0copy(___ref___1, ___nl__5);
#line 172
c_rt_lib0clear(&___nl__5);
#line 173
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(1089)));
#line 173
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(66)));
#line 173
c_rt_lib0copy(___ref___3, ___nl__5);
#line 173
c_rt_lib0clear(&___nl__5);
#line 173
c_rt_lib0clear(&___nl__4);
#line 173
c_rt_lib0clear(&___nl__0);
#line 173
return NULL;
}

ImmT type_checker_priv0join_vars(ImmT * ___ref___0,ImmT ___nl__1,ImmT * ___ref___2,ImmT * ___ref___3) {
c_rt_lib0arg_val(___nl__1);
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
ImmT ___nl__9 = NULL;
ImmT ___nl__10 = NULL;
ImmT ___nl__11 = NULL;
#line 178
c_rt_lib0move(&___nl__5,___get_global_const(1168));
#line 178
c_rt_lib0move(&___nl__4, hash0has_key(___nl__1, ___nl__5));
#line 178
c_rt_lib0clear(&___nl__5);
#line 178
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 178
if(c_rt_lib0check_true_native(___nl__4)){ goto label_9;}
#line 178
c_rt_lib0clear(&___nl__1);
#line 178
c_rt_lib0clear(&___nl__4);
#line 178
return NULL;
#line 178
goto label_9;
#line 178
label_9:
#line 178
c_rt_lib0clear(&___nl__4);
#line 179
c_rt_lib0move(&___nl__5,___get_global_const(1168));
#line 179
c_rt_lib0move(&___nl__4, hash0has_key(*___ref___0, ___nl__5));
#line 179
c_rt_lib0clear(&___nl__5);
#line 179
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 179
if(c_rt_lib0check_true_native(___nl__4)){ goto label_21;}
#line 180
c_rt_lib0copy(___ref___0, ___nl__1);
#line 181
c_rt_lib0clear(&___nl__1);
#line 181
c_rt_lib0clear(&___nl__4);
#line 181
return NULL;
#line 182
goto label_21;
#line 182
label_21:
#line 182
c_rt_lib0clear(&___nl__4);
#line 183
c_rt_lib0move(&___nl__6, c_rt_lib0init_iter(*___ref___0));
#line 183
label_24:
#line 183
c_rt_lib0move(&___nl__4, c_rt_lib0is_end_hash(___nl__6));
#line 183
if(c_rt_lib0check_true_native(___nl__4)){ goto label_54;}
#line 183
c_rt_lib0move(&___nl__4, c_rt_lib0get_key_iter(___nl__6));
#line 183
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value(*___ref___0, ___nl__4));
#line 184
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(1139)));
#line 184
c_rt_lib0move(&___nl__8, c_rt_lib0priv_is(___nl__7, ___get_global_const(45)));
#line 184
if(c_rt_lib0check_true_native(___nl__8)){ goto label_37;}
#line 188
c_rt_lib0move(&___nl__8, c_rt_lib0priv_is(___nl__7, ___get_global_const(46)));
#line 188
if(c_rt_lib0check_true_native(___nl__8)){ goto label_47;}
#line 188
c_rt_lib0move(&___nl__8,___get_global_const(91));
#line 188
c_rt_lib0move(&___nl__8, c_rt_lib0array_mk(2, ___nl__8, ___nl__7));
#line 188
nl_die_arg(___nl__8);
#line 184
label_37:
#line 185
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(63)));
#line 186
c_rt_lib0move(&___nl__10, hash0get_value(___nl__1, ___nl__4));
#line 186
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__10, ___get_global_const(63)));
#line 187
c_rt_lib0move(&___nl__11, ptd_system0cross_type(___nl__9, ___nl__10, ___ref___2, ___ref___3));
#line 187
c_rt_lib0delete(type_checker_priv0set_type_to_variable(___ref___0, ___nl__4, ___nl__11));
#line 187
c_rt_lib0clear(&___nl__11);
#line 187
c_rt_lib0clear(&___nl__9);
#line 187
c_rt_lib0clear(&___nl__10);
#line 188
goto label_49;
#line 188
label_47:
#line 189
goto label_49;
#line 189
label_49:
#line 189
c_rt_lib0clear(&___nl__7);
#line 189
c_rt_lib0clear(&___nl__8);
#line 190
c_rt_lib0move(&___nl__6, c_rt_lib0next_iter(___nl__6));
#line 190
goto label_24;
#line 190
label_54:
#line 190
c_rt_lib0clear(&___nl__4);
#line 190
c_rt_lib0clear(&___nl__5);
#line 190
c_rt_lib0clear(&___nl__6);
#line 190
c_rt_lib0clear(&___nl__1);
#line 190
return NULL;
}

ImmT type_checker_priv0set_end_function(ImmT * ___ref___0) {
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
#line 194
c_rt_lib0move(&___nl__1,___get_global_const(1168));
#line 194
c_rt_lib0move(&___nl__2, tct0empty());
#line 194
c_rt_lib0delete(type_checker_priv0set_type_to_variable(___ref___0, ___nl__1, ___nl__2));
#line 194
c_rt_lib0clear(&___nl__2);
#line 194
c_rt_lib0clear(&___nl__1);
#line 194
return NULL;
}

ImmT type_checker_priv0check_cmd(ImmT ___nl__0,ImmT * ___ref___1,ImmT * ___ref___2,ImmT * ___ref___3) {
c_rt_lib0arg_val(___nl__0);
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
#line 199
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(195)));
#line 199
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(440)));
#line 199
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(134)));
#line 199
c_rt_lib0copy(&___nl__5, ___nl__4);
#line 199
c_rt_lib0hash_set_value_dec(___ref___3, ___get_global_const(786), ___nl__5);
#line 199
c_rt_lib0clear(&___nl__4);
#line 199
c_rt_lib0clear(&___nl__5);
#line 200
c_rt_lib0move(&___nl__4, c_rt_lib0hash_mk(0));
#line 201
c_rt_lib0copy(&___nl__5, *___ref___2);
#line 202
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(201)));
#line 202
c_rt_lib0move(&___nl__7, c_rt_lib0priv_is(___nl__6, ___get_global_const(817)));
#line 202
if(c_rt_lib0check_true_native(___nl__7)){ goto label_53;}
#line 221
c_rt_lib0move(&___nl__7, c_rt_lib0priv_is(___nl__6, ___get_global_const(818)));
#line 221
if(c_rt_lib0check_true_native(___nl__7)){ goto label_135;}
#line 238
c_rt_lib0move(&___nl__7, c_rt_lib0priv_is(___nl__6, ___get_global_const(819)));
#line 238
if(c_rt_lib0check_true_native(___nl__7)){ goto label_202;}
#line 240
c_rt_lib0move(&___nl__7, c_rt_lib0priv_is(___nl__6, ___get_global_const(820)));
#line 240
if(c_rt_lib0check_true_native(___nl__7)){ goto label_207;}
#line 242
c_rt_lib0move(&___nl__7, c_rt_lib0priv_is(___nl__6, ___get_global_const(140)));
#line 242
if(c_rt_lib0check_true_native(___nl__7)){ goto label_212;}
#line 244
c_rt_lib0move(&___nl__7, c_rt_lib0priv_is(___nl__6, ___get_global_const(821)));
#line 244
if(c_rt_lib0check_true_native(___nl__7)){ goto label_217;}
#line 246
c_rt_lib0move(&___nl__7, c_rt_lib0priv_is(___nl__6, ___get_global_const(822)));
#line 246
if(c_rt_lib0check_true_native(___nl__7)){ goto label_222;}
#line 248
c_rt_lib0move(&___nl__7, c_rt_lib0priv_is(___nl__6, ___get_global_const(823)));
#line 248
if(c_rt_lib0check_true_native(___nl__7)){ goto label_227;}
#line 256
c_rt_lib0move(&___nl__7, c_rt_lib0priv_is(___nl__6, ___get_global_const(824)));
#line 256
if(c_rt_lib0check_true_native(___nl__7)){ goto label_256;}
#line 264
c_rt_lib0move(&___nl__7, c_rt_lib0priv_is(___nl__6, ___get_global_const(825)));
#line 264
if(c_rt_lib0check_true_native(___nl__7)){ goto label_285;}
#line 272
c_rt_lib0move(&___nl__7, c_rt_lib0priv_is(___nl__6, ___get_global_const(826)));
#line 272
if(c_rt_lib0check_true_native(___nl__7)){ goto label_320;}
#line 280
c_rt_lib0move(&___nl__7, c_rt_lib0priv_is(___nl__6, ___get_global_const(827)));
#line 280
if(c_rt_lib0check_true_native(___nl__7)){ goto label_355;}
#line 282
c_rt_lib0move(&___nl__7, c_rt_lib0priv_is(___nl__6, ___get_global_const(192)));
#line 282
if(c_rt_lib0check_true_native(___nl__7)){ goto label_360;}
#line 284
c_rt_lib0move(&___nl__7, c_rt_lib0priv_is(___nl__6, ___get_global_const(90)));
#line 284
if(c_rt_lib0check_true_native(___nl__7)){ goto label_365;}
#line 298
c_rt_lib0move(&___nl__7, c_rt_lib0priv_is(___nl__6, ___get_global_const(828)));
#line 298
if(c_rt_lib0check_true_native(___nl__7)){ goto label_448;}
#line 304
c_rt_lib0move(&___nl__7, c_rt_lib0priv_is(___nl__6, ___get_global_const(217)));
#line 304
if(c_rt_lib0check_true_native(___nl__7)){ goto label_482;}
#line 309
c_rt_lib0move(&___nl__7, c_rt_lib0priv_is(___nl__6, ___get_global_const(829)));
#line 309
if(c_rt_lib0check_true_native(___nl__7)){ goto label_503;}
#line 311
c_rt_lib0move(&___nl__7, c_rt_lib0priv_is(___nl__6, ___get_global_const(830)));
#line 311
if(c_rt_lib0check_true_native(___nl__7)){ goto label_512;}
#line 322
c_rt_lib0move(&___nl__7, c_rt_lib0priv_is(___nl__6, ___get_global_const(95)));
#line 322
if(c_rt_lib0check_true_native(___nl__7)){ goto label_566;}
#line 326
c_rt_lib0move(&___nl__7, c_rt_lib0priv_is(___nl__6, ___get_global_const(831)));
#line 326
if(c_rt_lib0check_true_native(___nl__7)){ goto label_575;}
#line 326
c_rt_lib0move(&___nl__7,___get_global_const(91));
#line 326
c_rt_lib0move(&___nl__7, c_rt_lib0array_mk(2, ___nl__7, ___nl__6));
#line 326
nl_die_arg(___nl__7);
#line 202
label_53:
#line 202
c_rt_lib0move(&___nl__8, c_rt_lib0priv_as(___nl__6, ___get_global_const(817)));
#line 203
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__8, ___get_global_const(832)));
#line 203
c_rt_lib0move(&___nl__9, type_checker_priv0check_val(___nl__10, ___ref___1, &___nl__5, ___ref___3));
#line 203
c_rt_lib0clear(&___nl__10);
#line 206
c_rt_lib0move(&___nl__10, ptd_system0is_condition_type(___nl__9, ___ref___1, ___ref___3));
#line 206
c_rt_lib0move(&___nl__10, c_rt_lib0not(___nl__10));
#line 206
c_rt_lib0move(&___nl__10, c_rt_lib0not(___nl__10));
#line 206
if(c_rt_lib0check_true_native(___nl__10)){ goto label_71;}
#line 204
c_rt_lib0move(&___nl__11,___get_global_const(1169));
#line 205
c_rt_lib0move(&___nl__13, c_rt_lib0hash_get_value_dec(___nl__9, ___get_global_const(63)));
#line 205
c_rt_lib0move(&___nl__12, type_checker_priv0get_print_tct_type_name(___nl__13));
#line 205
c_rt_lib0clear(&___nl__13);
#line 205
c_rt_lib0move(&___nl__11, c_rt_lib0concat_add(___nl__11, ___nl__12));
#line 205
c_rt_lib0clear(&___nl__12);
#line 205
c_rt_lib0delete(type_checker_priv0add_error(___ref___3, ___nl__11));
#line 205
c_rt_lib0clear(&___nl__11);
#line 205
goto label_71;
#line 205
label_71:
#line 205
c_rt_lib0clear(&___nl__10);
#line 207
c_rt_lib0copy(&___nl__10, ___nl__5);
#line 208
c_rt_lib0move(&___nl__11, c_rt_lib0hash_get_value_dec(___nl__8, ___get_global_const(817)));
#line 208
c_rt_lib0delete(type_checker_priv0check_cmd(___nl__11, ___ref___1, &___nl__10, ___ref___3));
#line 208
c_rt_lib0clear(&___nl__11);
#line 209
c_rt_lib0move(&___nl__11, c_rt_lib0hash_get_value_dec(___nl__8, ___get_global_const(833)));
#line 209
c_rt_lib0move(&___nl__13,___get_global_const(0));
#line 209
c_rt_lib0move(&___nl__14,___get_global_const(1));
#line 209
c_rt_lib0move(&___nl__15, c_rt_lib0array_len(___nl__11));
#line 209
label_81:
#line 209
c_rt_lib0move(&___nl__16, c_rt_lib0ge(___nl__13, ___nl__15));
#line 209
if(c_rt_lib0check_true_native(___nl__16)){ goto label_120;}
#line 209
c_rt_lib0move(&___nl__12, c_rt_lib0array_get(___nl__11, ___nl__13));
#line 210
c_rt_lib0move(&___nl__17, c_rt_lib0hash_get_value_dec(___nl__12, ___get_global_const(201)));
#line 210
c_rt_lib0move(&___nl__17, c_rt_lib0hash_get_value_dec(___nl__17, ___get_global_const(195)));
#line 210
c_rt_lib0move(&___nl__17, c_rt_lib0hash_get_value_dec(___nl__17, ___get_global_const(440)));
#line 210
c_rt_lib0move(&___nl__17, c_rt_lib0hash_get_value_dec(___nl__17, ___get_global_const(134)));
#line 210
c_rt_lib0copy(&___nl__18, ___nl__17);
#line 210
c_rt_lib0hash_set_value_dec(___ref___3, ___get_global_const(786), ___nl__18);
#line 210
c_rt_lib0clear(&___nl__17);
#line 210
c_rt_lib0clear(&___nl__18);
#line 211
c_rt_lib0move(&___nl__18, c_rt_lib0hash_get_value_dec(___nl__12, ___get_global_const(832)));
#line 211
c_rt_lib0move(&___nl__17, type_checker_priv0check_val(___nl__18, ___ref___1, &___nl__5, ___ref___3));
#line 211
c_rt_lib0clear(&___nl__18);
#line 214
c_rt_lib0move(&___nl__18, ptd_system0is_condition_type(___nl__17, ___ref___1, ___ref___3));
#line 214
c_rt_lib0move(&___nl__18, c_rt_lib0not(___nl__18));
#line 214
c_rt_lib0move(&___nl__18, c_rt_lib0not(___nl__18));
#line 214
if(c_rt_lib0check_true_native(___nl__18)){ goto label_109;}
#line 212
c_rt_lib0move(&___nl__19,___get_global_const(1170));
#line 213
c_rt_lib0move(&___nl__21, c_rt_lib0hash_get_value_dec(___nl__17, ___get_global_const(63)));
#line 213
c_rt_lib0move(&___nl__20, type_checker_priv0get_print_tct_type_name(___nl__21));
#line 213
c_rt_lib0clear(&___nl__21);
#line 213
c_rt_lib0move(&___nl__19, c_rt_lib0concat_add(___nl__19, ___nl__20));
#line 213
c_rt_lib0clear(&___nl__20);
#line 213
c_rt_lib0delete(type_checker_priv0add_error(___ref___3, ___nl__19));
#line 213
c_rt_lib0clear(&___nl__19);
#line 213
goto label_109;
#line 213
label_109:
#line 213
c_rt_lib0clear(&___nl__18);
#line 215
c_rt_lib0copy(&___nl__18, ___nl__5);
#line 216
c_rt_lib0move(&___nl__19, c_rt_lib0hash_get_value_dec(___nl__12, ___get_global_const(201)));
#line 216
c_rt_lib0delete(type_checker_priv0check_cmd(___nl__19, ___ref___1, &___nl__18, ___ref___3));
#line 216
c_rt_lib0clear(&___nl__19);
#line 217
c_rt_lib0delete(type_checker_priv0join_vars(&___nl__10, ___nl__18, ___ref___1, ___ref___3));
#line 217
c_rt_lib0clear(&___nl__17);
#line 217
c_rt_lib0clear(&___nl__18);
#line 218
c_rt_lib0move(&___nl__13, c_rt_lib0add_mod(___nl__13, ___nl__14));
#line 218
goto label_81;
#line 218
label_120:
#line 218
c_rt_lib0clear(&___nl__11);
#line 218
c_rt_lib0clear(&___nl__12);
#line 218
c_rt_lib0clear(&___nl__13);
#line 218
c_rt_lib0clear(&___nl__14);
#line 218
c_rt_lib0clear(&___nl__15);
#line 218
c_rt_lib0clear(&___nl__16);
#line 219
c_rt_lib0move(&___nl__11, c_rt_lib0hash_get_value_dec(___nl__8, ___get_global_const(834)));
#line 219
c_rt_lib0delete(type_checker_priv0check_cmd(___nl__11, ___ref___1, &___nl__5, ___ref___3));
#line 219
c_rt_lib0clear(&___nl__11);
#line 220
c_rt_lib0delete(type_checker_priv0join_vars(&___nl__5, ___nl__10, ___ref___1, ___ref___3));
#line 220
c_rt_lib0clear(&___nl__9);
#line 220
c_rt_lib0clear(&___nl__10);
#line 220
c_rt_lib0clear(&___nl__8);
#line 221
goto label_577;
#line 221
label_135:
#line 221
c_rt_lib0move(&___nl__8, c_rt_lib0priv_as(___nl__6, ___get_global_const(818)));
#line 222
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__8, ___get_global_const(835)));
#line 222
c_rt_lib0move(&___nl__10, c_rt_lib0priv_is(___nl__9, ___get_global_const(192)));
#line 222
if(c_rt_lib0check_true_native(___nl__10)){ goto label_145;}
#line 224
c_rt_lib0move(&___nl__10, c_rt_lib0priv_is(___nl__9, ___get_global_const(829)));
#line 224
if(c_rt_lib0check_true_native(___nl__10)){ goto label_150;}
#line 224
c_rt_lib0move(&___nl__10,___get_global_const(91));
#line 224
c_rt_lib0move(&___nl__10, c_rt_lib0array_mk(2, ___nl__10, ___nl__9));
#line 224
nl_die_arg(___nl__10);
#line 222
label_145:
#line 222
c_rt_lib0move(&___nl__11, c_rt_lib0priv_as(___nl__9, ___get_global_const(192)));
#line 223
c_rt_lib0delete(type_checker_priv0check_val(___nl__11, ___ref___1, &___nl__5, ___ref___3));
#line 223
c_rt_lib0clear(&___nl__11);
#line 224
goto label_159;
#line 224
label_150:
#line 224
c_rt_lib0move(&___nl__11, c_rt_lib0priv_as(___nl__9, ___get_global_const(829)));
#line 225
c_rt_lib0move(&___nl__12, type_checker_priv0check_var_decl(___nl__11, ___ref___1, &___nl__5, ___ref___3));
#line 225
c_rt_lib0move(&___nl__13, c_rt_lib0hash_get_value_dec(___nl__11, ___get_global_const(93)));
#line 225
c_rt_lib0delete(type_checker_priv0add_var_to_vars(___nl__12, ___nl__13, &___nl__5));
#line 225
c_rt_lib0clear(&___nl__13);
#line 225
c_rt_lib0clear(&___nl__12);
#line 225
c_rt_lib0clear(&___nl__11);
#line 226
goto label_159;
#line 226
label_159:
#line 226
c_rt_lib0clear(&___nl__9);
#line 226
c_rt_lib0clear(&___nl__10);
#line 227
c_rt_lib0copy(&___nl__9, ___nl__5);
#line 228
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__8, ___get_global_const(832)));
#line 228
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__10, ___get_global_const(192)));
#line 228
c_rt_lib0move(&___nl__10, c_rt_lib0priv_is(___nl__10, ___get_global_const(831)));
#line 228
c_rt_lib0move(&___nl__10, c_rt_lib0not(___nl__10));
#line 228
c_rt_lib0move(&___nl__10, c_rt_lib0not(___nl__10));
#line 228
if(c_rt_lib0check_true_native(___nl__10)){ goto label_190;}
#line 229
c_rt_lib0move(&___nl__12, c_rt_lib0hash_get_value_dec(___nl__8, ___get_global_const(832)));
#line 229
c_rt_lib0move(&___nl__11, type_checker_priv0check_val(___nl__12, ___ref___1, &___nl__9, ___ref___3));
#line 229
c_rt_lib0clear(&___nl__12);
#line 232
c_rt_lib0move(&___nl__12, ptd_system0is_condition_type(___nl__11, ___ref___1, ___ref___3));
#line 232
c_rt_lib0move(&___nl__12, c_rt_lib0not(___nl__12));
#line 232
c_rt_lib0move(&___nl__12, c_rt_lib0not(___nl__12));
#line 232
if(c_rt_lib0check_true_native(___nl__12)){ goto label_185;}
#line 230
c_rt_lib0move(&___nl__13,___get_global_const(1171));
#line 231
c_rt_lib0move(&___nl__15, c_rt_lib0hash_get_value_dec(___nl__11, ___get_global_const(63)));
#line 231
c_rt_lib0move(&___nl__14, type_checker_priv0get_print_tct_type_name(___nl__15));
#line 231
c_rt_lib0clear(&___nl__15);
#line 231
c_rt_lib0move(&___nl__13, c_rt_lib0concat_add(___nl__13, ___nl__14));
#line 231
c_rt_lib0clear(&___nl__14);
#line 231
c_rt_lib0delete(type_checker_priv0add_error(___ref___3, ___nl__13));
#line 231
c_rt_lib0clear(&___nl__13);
#line 231
goto label_185;
#line 231
label_185:
#line 231
c_rt_lib0clear(&___nl__12);
#line 233
c_rt_lib0delete(type_checker_priv0join_vars(&___nl__9, ___nl__5, ___ref___1, ___ref___3));
#line 233
c_rt_lib0clear(&___nl__11);
#line 234
goto label_190;
#line 234
label_190:
#line 234
c_rt_lib0clear(&___nl__10);
#line 235
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__8, ___get_global_const(201)));
#line 235
c_rt_lib0delete(type_checker_priv0break_continue_block(___nl__10, ___ref___1, &___nl__9, ___ref___3));
#line 235
c_rt_lib0clear(&___nl__10);
#line 236
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__8, ___get_global_const(836)));
#line 236
c_rt_lib0delete(type_checker_priv0check_val(___nl__10, ___ref___1, &___nl__9, ___ref___3));
#line 236
c_rt_lib0clear(&___nl__10);
#line 237
c_rt_lib0delete(type_checker_priv0join_vars(&___nl__5, ___nl__9, ___ref___1, ___ref___3));
#line 237
c_rt_lib0clear(&___nl__9);
#line 237
c_rt_lib0clear(&___nl__8);
#line 238
goto label_577;
#line 238
label_202:
#line 238
c_rt_lib0move(&___nl__8, c_rt_lib0priv_as(___nl__6, ___get_global_const(819)));
#line 239
c_rt_lib0delete(type_checker_priv0check_fora(___nl__8, ___ref___1, &___nl__5, ___ref___3));
#line 239
c_rt_lib0clear(&___nl__8);
#line 240
goto label_577;
#line 240
label_207:
#line 240
c_rt_lib0move(&___nl__8, c_rt_lib0priv_as(___nl__6, ___get_global_const(820)));
#line 241
c_rt_lib0delete(type_checker_priv0check_forh(___nl__8, ___ref___1, &___nl__5, ___ref___3));
#line 241
c_rt_lib0clear(&___nl__8);
#line 242
goto label_577;
#line 242
label_212:
#line 242
c_rt_lib0move(&___nl__8, c_rt_lib0priv_as(___nl__6, ___get_global_const(140)));
#line 243
c_rt_lib0delete(type_checker_priv0break_continue_block(___nl__8, ___ref___1, &___nl__5, ___ref___3));
#line 243
c_rt_lib0clear(&___nl__8);
#line 244
goto label_577;
#line 244
label_217:
#line 244
c_rt_lib0move(&___nl__8, c_rt_lib0priv_as(___nl__6, ___get_global_const(821)));
#line 245
c_rt_lib0delete(type_checker_priv0check_rep(___nl__8, ___ref___1, &___nl__5, ___ref___3));
#line 245
c_rt_lib0clear(&___nl__8);
#line 246
goto label_577;
#line 246
label_222:
#line 246
c_rt_lib0move(&___nl__8, c_rt_lib0priv_as(___nl__6, ___get_global_const(822)));
#line 247
c_rt_lib0delete(type_checker_priv0check_while(___nl__8, ___ref___1, &___nl__5, ___ref___3));
#line 247
c_rt_lib0clear(&___nl__8);
#line 248
goto label_577;
#line 248
label_227:
#line 248
c_rt_lib0move(&___nl__8, c_rt_lib0priv_as(___nl__6, ___get_global_const(823)));
#line 249
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__8, ___get_global_const(832)));
#line 249
c_rt_lib0move(&___nl__9, type_checker_priv0check_val(___nl__10, ___ref___1, &___nl__5, ___ref___3));
#line 249
c_rt_lib0clear(&___nl__10);
#line 252
c_rt_lib0move(&___nl__10, ptd_system0is_condition_type(___nl__9, ___ref___1, ___ref___3));
#line 252
c_rt_lib0move(&___nl__10, c_rt_lib0not(___nl__10));
#line 252
c_rt_lib0move(&___nl__10, c_rt_lib0not(___nl__10));
#line 252
if(c_rt_lib0check_true_native(___nl__10)){ goto label_245;}
#line 250
c_rt_lib0move(&___nl__11,___get_global_const(1172));
#line 251
c_rt_lib0move(&___nl__13, c_rt_lib0hash_get_value_dec(___nl__9, ___get_global_const(63)));
#line 251
c_rt_lib0move(&___nl__12, type_checker_priv0get_print_tct_type_name(___nl__13));
#line 251
c_rt_lib0clear(&___nl__13);
#line 251
c_rt_lib0move(&___nl__11, c_rt_lib0concat_add(___nl__11, ___nl__12));
#line 251
c_rt_lib0clear(&___nl__12);
#line 251
c_rt_lib0delete(type_checker_priv0add_error(___ref___3, ___nl__11));
#line 251
c_rt_lib0clear(&___nl__11);
#line 251
goto label_245;
#line 251
label_245:
#line 251
c_rt_lib0clear(&___nl__10);
#line 253
c_rt_lib0copy(&___nl__10, ___nl__5);
#line 254
c_rt_lib0move(&___nl__11, c_rt_lib0hash_get_value_dec(___nl__8, ___get_global_const(201)));
#line 254
c_rt_lib0delete(type_checker_priv0check_cmd(___nl__11, ___ref___1, &___nl__10, ___ref___3));
#line 254
c_rt_lib0clear(&___nl__11);
#line 255
c_rt_lib0delete(type_checker_priv0join_vars(&___nl__5, ___nl__10, ___ref___1, ___ref___3));
#line 255
c_rt_lib0clear(&___nl__9);
#line 255
c_rt_lib0clear(&___nl__10);
#line 255
c_rt_lib0clear(&___nl__8);
#line 256
goto label_577;
#line 256
label_256:
#line 256
c_rt_lib0move(&___nl__8, c_rt_lib0priv_as(___nl__6, ___get_global_const(824)));
#line 257
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__8, ___get_global_const(832)));
#line 257
c_rt_lib0move(&___nl__9, type_checker_priv0check_val(___nl__10, ___ref___1, &___nl__5, ___ref___3));
#line 257
c_rt_lib0clear(&___nl__10);
#line 260
c_rt_lib0move(&___nl__10, ptd_system0is_condition_type(___nl__9, ___ref___1, ___ref___3));
#line 260
c_rt_lib0move(&___nl__10, c_rt_lib0not(___nl__10));
#line 260
c_rt_lib0move(&___nl__10, c_rt_lib0not(___nl__10));
#line 260
if(c_rt_lib0check_true_native(___nl__10)){ goto label_274;}
#line 258
c_rt_lib0move(&___nl__11,___get_global_const(1173));
#line 259
c_rt_lib0move(&___nl__13, c_rt_lib0hash_get_value_dec(___nl__9, ___get_global_const(63)));
#line 259
c_rt_lib0move(&___nl__12, type_checker_priv0get_print_tct_type_name(___nl__13));
#line 259
c_rt_lib0clear(&___nl__13);
#line 259
c_rt_lib0move(&___nl__11, c_rt_lib0concat_add(___nl__11, ___nl__12));
#line 259
c_rt_lib0clear(&___nl__12);
#line 259
c_rt_lib0delete(type_checker_priv0add_error(___ref___3, ___nl__11));
#line 259
c_rt_lib0clear(&___nl__11);
#line 259
goto label_274;
#line 259
label_274:
#line 259
c_rt_lib0clear(&___nl__10);
#line 261
c_rt_lib0copy(&___nl__10, ___nl__5);
#line 262
c_rt_lib0move(&___nl__11, c_rt_lib0hash_get_value_dec(___nl__8, ___get_global_const(201)));
#line 262
c_rt_lib0delete(type_checker_priv0check_cmd(___nl__11, ___ref___1, &___nl__10, ___ref___3));
#line 262
c_rt_lib0clear(&___nl__11);
#line 263
c_rt_lib0delete(type_checker_priv0join_vars(&___nl__5, ___nl__10, ___ref___1, ___ref___3));
#line 263
c_rt_lib0clear(&___nl__9);
#line 263
c_rt_lib0clear(&___nl__10);
#line 263
c_rt_lib0clear(&___nl__8);
#line 264
goto label_577;
#line 264
label_285:
#line 265
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(*___ref___1, ___get_global_const(1089)));
#line 265
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__8, ___get_global_const(1138)));
#line 265
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__8, ___get_global_const(884)));
#line 265
c_rt_lib0move(&___nl__8, c_rt_lib0not(___nl__8));
#line 265
c_rt_lib0move(&___nl__8, c_rt_lib0not(___nl__8));
#line 265
if(c_rt_lib0check_true_native(___nl__8)){ goto label_296;}
#line 266
c_rt_lib0move(&___nl__9,___get_global_const(838));
#line 266
c_rt_lib0delete(type_checker_priv0add_error(___ref___3, ___nl__9));
#line 266
c_rt_lib0clear(&___nl__9);
#line 267
goto label_317;
#line 267
label_296:
#line 268
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(*___ref___1, ___get_global_const(1089)));
#line 268
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__9, ___get_global_const(1138)));
#line 268
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__9, ___get_global_const(674)));
#line 269
c_rt_lib0delete(type_checker_priv0join_vars(&___nl__9, ___nl__5, ___ref___1, ___ref___3));
#line 270
c_rt_lib0move(&___nl__10,___get_global_const(1089));
#line 270
c_rt_lib0move(&___nl__10, c_rt_lib0get_ref_hash(*___ref___1, ___nl__10));
#line 270
c_rt_lib0move(&___nl__11,___get_global_const(1138));
#line 270
c_rt_lib0move(&___nl__11, c_rt_lib0get_ref_hash(___nl__10, ___nl__11));
#line 270
c_rt_lib0copy(&___nl__12, ___nl__9);
#line 270
c_rt_lib0hash_set_value_dec(&___nl__11, ___get_global_const(674), ___nl__12);
#line 270
c_rt_lib0move(&___nl__13,___get_global_const(1138));
#line 270
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__10, ___nl__13, ___nl__11));
#line 270
c_rt_lib0move(&___nl__13,___get_global_const(1089));
#line 270
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___1, ___nl__13, ___nl__10));
#line 270
c_rt_lib0clear(&___nl__13);
#line 270
c_rt_lib0clear(&___nl__10);
#line 270
c_rt_lib0clear(&___nl__11);
#line 270
c_rt_lib0clear(&___nl__12);
#line 270
c_rt_lib0clear(&___nl__9);
#line 271
goto label_317;
#line 271
label_317:
#line 271
c_rt_lib0clear(&___nl__8);
#line 272
goto label_577;
#line 272
label_320:
#line 273
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(*___ref___1, ___get_global_const(1089)));
#line 273
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__8, ___get_global_const(1138)));
#line 273
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__8, ___get_global_const(884)));
#line 273
c_rt_lib0move(&___nl__8, c_rt_lib0not(___nl__8));
#line 273
c_rt_lib0move(&___nl__8, c_rt_lib0not(___nl__8));
#line 273
if(c_rt_lib0check_true_native(___nl__8)){ goto label_331;}
#line 274
c_rt_lib0move(&___nl__9,___get_global_const(839));
#line 274
c_rt_lib0delete(type_checker_priv0add_error(___ref___3, ___nl__9));
#line 274
c_rt_lib0clear(&___nl__9);
#line 275
goto label_352;
#line 275
label_331:
#line 276
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(*___ref___1, ___get_global_const(1089)));
#line 276
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__9, ___get_global_const(1138)));
#line 276
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__9, ___get_global_const(674)));
#line 277
c_rt_lib0delete(type_checker_priv0join_vars(&___nl__9, ___nl__5, ___ref___1, ___ref___3));
#line 278
c_rt_lib0move(&___nl__10,___get_global_const(1089));
#line 278
c_rt_lib0move(&___nl__10, c_rt_lib0get_ref_hash(*___ref___1, ___nl__10));
#line 278
c_rt_lib0move(&___nl__11,___get_global_const(1138));
#line 278
c_rt_lib0move(&___nl__11, c_rt_lib0get_ref_hash(___nl__10, ___nl__11));
#line 278
c_rt_lib0copy(&___nl__12, ___nl__9);
#line 278
c_rt_lib0hash_set_value_dec(&___nl__11, ___get_global_const(674), ___nl__12);
#line 278
c_rt_lib0move(&___nl__13,___get_global_const(1138));
#line 278
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__10, ___nl__13, ___nl__11));
#line 278
c_rt_lib0move(&___nl__13,___get_global_const(1089));
#line 278
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___1, ___nl__13, ___nl__10));
#line 278
c_rt_lib0clear(&___nl__13);
#line 278
c_rt_lib0clear(&___nl__10);
#line 278
c_rt_lib0clear(&___nl__11);
#line 278
c_rt_lib0clear(&___nl__12);
#line 278
c_rt_lib0clear(&___nl__9);
#line 279
goto label_352;
#line 279
label_352:
#line 279
c_rt_lib0clear(&___nl__8);
#line 280
goto label_577;
#line 280
label_355:
#line 280
c_rt_lib0move(&___nl__8, c_rt_lib0priv_as(___nl__6, ___get_global_const(827)));
#line 281
c_rt_lib0delete(type_checker_priv0check_match(___nl__8, ___ref___1, &___nl__5, ___ref___3));
#line 281
c_rt_lib0clear(&___nl__8);
#line 282
goto label_577;
#line 282
label_360:
#line 282
c_rt_lib0move(&___nl__8, c_rt_lib0priv_as(___nl__6, ___get_global_const(192)));
#line 283
c_rt_lib0delete(type_checker_priv0check_val(___nl__8, ___ref___1, &___nl__5, ___ref___3));
#line 283
c_rt_lib0clear(&___nl__8);
#line 284
goto label_577;
#line 284
label_365:
#line 284
c_rt_lib0move(&___nl__8, c_rt_lib0priv_as(___nl__6, ___get_global_const(90)));
#line 285
c_rt_lib0move(&___nl__9, type_checker_priv0check_val(___nl__8, ___ref___1, &___nl__5, ___ref___3));
#line 286
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(*___ref___1, ___get_global_const(1089)));
#line 286
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__10, ___get_global_const(788)));
#line 286
c_rt_lib0move(&___nl__10, c_rt_lib0priv_is(___nl__10, ___get_global_const(803)));
#line 286
c_rt_lib0move(&___nl__11, c_rt_lib0not(___nl__10));
#line 286
if(c_rt_lib0check_true_native(___nl__11)){ goto label_376;}
#line 286
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__9, ___get_global_const(63)));
#line 286
c_rt_lib0move(&___nl__10, c_rt_lib0priv_is(___nl__10, ___get_global_const(806)));
#line 286
c_rt_lib0move(&___nl__10, c_rt_lib0not(___nl__10));
#line 286
label_376:
#line 286
c_rt_lib0clear(&___nl__11);
#line 286
c_rt_lib0move(&___nl__10, c_rt_lib0not(___nl__10));
#line 286
if(c_rt_lib0check_true_native(___nl__10)){ goto label_384;}
#line 287
c_rt_lib0move(&___nl__11,___get_global_const(1174));
#line 287
c_rt_lib0delete(type_checker_priv0add_error(___ref___3, ___nl__11));
#line 287
c_rt_lib0clear(&___nl__11);
#line 288
goto label_442;
#line 288
label_384:
#line 288
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(*___ref___1, ___get_global_const(1089)));
#line 288
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__10, ___get_global_const(788)));
#line 288
c_rt_lib0move(&___nl__10, c_rt_lib0priv_is(___nl__10, ___get_global_const(803)));
#line 288
c_rt_lib0move(&___nl__10, c_rt_lib0not(___nl__10));
#line 288
c_rt_lib0move(&___nl__12, c_rt_lib0not(___nl__10));
#line 288
if(c_rt_lib0check_true_native(___nl__12)){ goto label_395;}
#line 288
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(*___ref___1, ___get_global_const(1089)));
#line 288
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__10, ___get_global_const(788)));
#line 288
c_rt_lib0move(&___nl__10, c_rt_lib0priv_is(___nl__10, ___get_global_const(798)));
#line 288
c_rt_lib0move(&___nl__10, c_rt_lib0not(___nl__10));
#line 288
label_395:
#line 288
c_rt_lib0clear(&___nl__12);
#line 288
c_rt_lib0move(&___nl__11, c_rt_lib0not(___nl__10));
#line 288
if(c_rt_lib0check_true_native(___nl__11)){ goto label_401;}
#line 288
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__9, ___get_global_const(63)));
#line 288
c_rt_lib0move(&___nl__10, c_rt_lib0priv_is(___nl__10, ___get_global_const(806)));
#line 288
label_401:
#line 288
c_rt_lib0clear(&___nl__11);
#line 288
c_rt_lib0move(&___nl__10, c_rt_lib0not(___nl__10));
#line 288
if(c_rt_lib0check_true_native(___nl__10)){ goto label_409;}
#line 290
c_rt_lib0move(&___nl__11,___get_global_const(1175));
#line 290
c_rt_lib0delete(type_checker_priv0add_error(___ref___3, ___nl__11));
#line 290
c_rt_lib0clear(&___nl__11);
#line 291
goto label_442;
#line 291
label_409:
#line 291
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(*___ref___1, ___get_global_const(1089)));
#line 291
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__10, ___get_global_const(788)));
#line 291
c_rt_lib0move(&___nl__10, c_rt_lib0priv_is(___nl__10, ___get_global_const(803)));
#line 291
c_rt_lib0move(&___nl__10, c_rt_lib0not(___nl__10));
#line 291
c_rt_lib0move(&___nl__11, c_rt_lib0not(___nl__10));
#line 291
if(c_rt_lib0check_true_native(___nl__11)){ goto label_419;}
#line 291
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__9, ___get_global_const(63)));
#line 291
c_rt_lib0move(&___nl__10, c_rt_lib0priv_is(___nl__10, ___get_global_const(806)));
#line 291
c_rt_lib0move(&___nl__10, c_rt_lib0not(___nl__10));
#line 291
label_419:
#line 291
c_rt_lib0clear(&___nl__11);
#line 291
c_rt_lib0move(&___nl__10, c_rt_lib0not(___nl__10));
#line 291
if(c_rt_lib0check_true_native(___nl__10)){ goto label_442;}
#line 292
c_rt_lib0move(&___nl__12, c_rt_lib0hash_get_value_dec(*___ref___1, ___get_global_const(1089)));
#line 292
c_rt_lib0move(&___nl__12, c_rt_lib0hash_get_value_dec(___nl__12, ___get_global_const(788)));
#line 292
c_rt_lib0move(&___nl__11, ptd_system0check_assignment(___nl__12, ___nl__9, ___ref___1, ___ref___3));
#line 292
c_rt_lib0clear(&___nl__12);
#line 293
c_rt_lib0copy(&___nl__12, ___nl__11);
#line 293
c_rt_lib0move(&___nl__12, c_rt_lib0priv_is(___nl__12, ___get_global_const(47)));
#line 293
c_rt_lib0move(&___nl__12, c_rt_lib0not(___nl__12));
#line 293
if(c_rt_lib0check_true_native(___nl__12)){ goto label_438;}
#line 294
c_rt_lib0move(&___nl__13,___get_global_const(1176));
#line 294
c_rt_lib0move(&___nl__14, type_checker_priv0get_print_check_info(___nl__11));
#line 294
c_rt_lib0move(&___nl__13, c_rt_lib0concat_add(___nl__13, ___nl__14));
#line 294
c_rt_lib0clear(&___nl__14);
#line 294
c_rt_lib0delete(type_checker_priv0add_error(___ref___3, ___nl__13));
#line 294
c_rt_lib0clear(&___nl__13);
#line 295
goto label_438;
#line 295
label_438:
#line 295
c_rt_lib0clear(&___nl__12);
#line 295
c_rt_lib0clear(&___nl__11);
#line 296
goto label_442;
#line 296
label_442:
#line 296
c_rt_lib0clear(&___nl__10);
#line 297
c_rt_lib0delete(type_checker_priv0set_end_function(&___nl__5));
#line 297
c_rt_lib0clear(&___nl__9);
#line 297
c_rt_lib0clear(&___nl__8);
#line 298
goto label_577;
#line 298
label_448:
#line 298
c_rt_lib0move(&___nl__8, c_rt_lib0priv_as(___nl__6, ___get_global_const(828)));
#line 299
c_rt_lib0move(&___nl__10,___get_global_const(0));
#line 299
c_rt_lib0move(&___nl__11,___get_global_const(1));
#line 299
c_rt_lib0move(&___nl__12, c_rt_lib0array_len(___nl__8));
#line 299
label_453:
#line 299
c_rt_lib0move(&___nl__13, c_rt_lib0ge(___nl__10, ___nl__12));
#line 299
if(c_rt_lib0check_true_native(___nl__13)){ goto label_474;}
#line 299
c_rt_lib0move(&___nl__9, c_rt_lib0array_get(___nl__8, ___nl__10));
#line 300
c_rt_lib0move(&___nl__14, type_checker_priv0check_cmd(___nl__9, ___ref___1, &___nl__5, ___ref___3));
#line 300
c_rt_lib0move(&___nl__17, c_rt_lib0init_iter(___nl__14));
#line 300
label_459:
#line 300
c_rt_lib0move(&___nl__15, c_rt_lib0is_end_hash(___nl__17));
#line 300
if(c_rt_lib0check_true_native(___nl__15)){ goto label_467;}
#line 300
c_rt_lib0move(&___nl__15, c_rt_lib0get_key_iter(___nl__17));
#line 300
c_rt_lib0move(&___nl__16, c_rt_lib0hash_get_value(___nl__14, ___nl__15));
#line 301
c_rt_lib0delete(type_checker_priv0add_var_to_vars(___nl__16, ___nl__15, &___nl__5));
#line 302
c_rt_lib0move(&___nl__17, c_rt_lib0next_iter(___nl__17));
#line 302
goto label_459;
#line 302
label_467:
#line 302
c_rt_lib0clear(&___nl__14);
#line 302
c_rt_lib0clear(&___nl__15);
#line 302
c_rt_lib0clear(&___nl__16);
#line 302
c_rt_lib0clear(&___nl__17);
#line 303
c_rt_lib0move(&___nl__10, c_rt_lib0add_mod(___nl__10, ___nl__11));
#line 303
goto label_453;
#line 303
label_474:
#line 303
c_rt_lib0clear(&___nl__9);
#line 303
c_rt_lib0clear(&___nl__10);
#line 303
c_rt_lib0clear(&___nl__11);
#line 303
c_rt_lib0clear(&___nl__12);
#line 303
c_rt_lib0clear(&___nl__13);
#line 303
c_rt_lib0clear(&___nl__8);
#line 304
goto label_577;
#line 304
label_482:
#line 304
c_rt_lib0move(&___nl__8, c_rt_lib0priv_as(___nl__6, ___get_global_const(217)));
#line 305
c_rt_lib0move(&___nl__10,___get_global_const(0));
#line 305
c_rt_lib0move(&___nl__11,___get_global_const(1));
#line 305
c_rt_lib0move(&___nl__12, c_rt_lib0array_len(___nl__8));
#line 305
label_487:
#line 305
c_rt_lib0move(&___nl__13, c_rt_lib0ge(___nl__10, ___nl__12));
#line 305
if(c_rt_lib0check_true_native(___nl__13)){ goto label_494;}
#line 305
c_rt_lib0move(&___nl__9, c_rt_lib0array_get(___nl__8, ___nl__10));
#line 306
c_rt_lib0delete(type_checker_priv0check_val(___nl__9, ___ref___1, &___nl__5, ___ref___3));
#line 307
c_rt_lib0move(&___nl__10, c_rt_lib0add_mod(___nl__10, ___nl__11));
#line 307
goto label_487;
#line 307
label_494:
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
#line 308
c_rt_lib0delete(type_checker_priv0set_end_function(&___nl__5));
#line 308
c_rt_lib0clear(&___nl__8);
#line 309
goto label_577;
#line 309
label_503:
#line 309
c_rt_lib0move(&___nl__8, c_rt_lib0priv_as(___nl__6, ___get_global_const(829)));
#line 310
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__8, ___get_global_const(93)));
#line 310
c_rt_lib0move(&___nl__10, type_checker_priv0check_var_decl(___nl__8, ___ref___1, &___nl__5, ___ref___3));
#line 310
c_rt_lib0delete(hash0set_value(&___nl__4, ___nl__9, ___nl__10));
#line 310
c_rt_lib0clear(&___nl__10);
#line 310
c_rt_lib0clear(&___nl__9);
#line 310
c_rt_lib0clear(&___nl__8);
#line 311
goto label_577;
#line 311
label_512:
#line 311
c_rt_lib0move(&___nl__8, c_rt_lib0priv_as(___nl__6, ___get_global_const(830)));
#line 312
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(*___ref___1, ___get_global_const(1089)));
#line 312
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__10, ___get_global_const(788)));
#line 312
c_rt_lib0move(&___nl__11, c_rt_lib0ov_mk_none(___get_global_const(1085)));
#line 312
c_rt_lib0move(&___nl__9, c_rt_lib0hash_mk(2, ___get_global_const(63), ___nl__10, ___get_global_const(43), ___nl__11));
#line 312
c_rt_lib0clear(&___nl__10);
#line 312
c_rt_lib0clear(&___nl__11);
#line 314
c_rt_lib0move(&___nl__10, ptd_system0is_try_ensure_type(___nl__9, ___ref___1, ___ref___3));
#line 314
c_rt_lib0move(&___nl__10, c_rt_lib0not(___nl__10));
#line 314
c_rt_lib0move(&___nl__10, c_rt_lib0not(___nl__10));
#line 314
if(c_rt_lib0check_true_native(___nl__10)){ goto label_528;}
#line 313
c_rt_lib0move(&___nl__11,___get_global_const(1177));
#line 313
c_rt_lib0delete(type_checker_priv0add_error(___ref___3, ___nl__11));
#line 313
c_rt_lib0clear(&___nl__11);
#line 313
goto label_528;
#line 313
label_528:
#line 313
c_rt_lib0clear(&___nl__10);
#line 315
c_rt_lib0move(&___nl__10, type_checker_priv0check_try_ensure(___nl__8, ___ref___1, &___nl__5, ___ref___3));
#line 316
c_rt_lib0move(&___nl__13, c_rt_lib0hash_get_value_dec(*___ref___1, ___get_global_const(1089)));
#line 316
c_rt_lib0move(&___nl__13, c_rt_lib0hash_get_value_dec(___nl__13, ___get_global_const(788)));
#line 316
c_rt_lib0move(&___nl__14, c_rt_lib0ov_mk_none(___get_global_const(1079)));
#line 316
c_rt_lib0move(&___nl__12, c_rt_lib0hash_mk(2, ___get_global_const(63), ___nl__13, ___get_global_const(43), ___nl__14));
#line 316
c_rt_lib0clear(&___nl__13);
#line 316
c_rt_lib0clear(&___nl__14);
#line 316
c_rt_lib0move(&___nl__11, ptd_system0try_get_ensure_sub_types(___nl__12, ___ref___1, ___ref___3));
#line 316
c_rt_lib0clear(&___nl__12);
#line 317
c_rt_lib0move(&___nl__13, c_rt_lib0hash_get_value_dec(___nl__11, ___get_global_const(47)));
#line 317
c_rt_lib0move(&___nl__14, c_rt_lib0hash_get_value_dec(___nl__10, ___get_global_const(1178)));
#line 317
c_rt_lib0move(&___nl__12, ptd_system0check_assignment(___nl__13, ___nl__14, ___ref___1, ___ref___3));
#line 317
c_rt_lib0clear(&___nl__14);
#line 317
c_rt_lib0clear(&___nl__13);
#line 318
c_rt_lib0copy(&___nl__13, ___nl__12);
#line 318
c_rt_lib0move(&___nl__13, c_rt_lib0priv_is(___nl__13, ___get_global_const(47)));
#line 318
c_rt_lib0move(&___nl__13, c_rt_lib0not(___nl__13));
#line 318
if(c_rt_lib0check_true_native(___nl__13)){ goto label_555;}
#line 319
c_rt_lib0move(&___nl__14,___get_global_const(1179));
#line 319
c_rt_lib0move(&___nl__15, type_checker_priv0get_print_check_info(___nl__12));
#line 319
c_rt_lib0move(&___nl__14, c_rt_lib0concat_add(___nl__14, ___nl__15));
#line 319
c_rt_lib0clear(&___nl__15);
#line 319
c_rt_lib0delete(type_checker_priv0add_error(___ref___3, ___nl__14));
#line 319
c_rt_lib0clear(&___nl__14);
#line 320
goto label_555;
#line 320
label_555:
#line 320
c_rt_lib0clear(&___nl__13);
#line 321
c_rt_lib0move(&___nl__13, c_rt_lib0hash_get_value_dec(___nl__10, ___get_global_const(674)));
#line 321
c_rt_lib0copy(&___nl__4, ___nl__13);
#line 321
c_rt_lib0clear(&___nl__13);
#line 321
c_rt_lib0clear(&___nl__9);
#line 321
c_rt_lib0clear(&___nl__10);
#line 321
c_rt_lib0clear(&___nl__11);
#line 321
c_rt_lib0clear(&___nl__12);
#line 321
c_rt_lib0clear(&___nl__8);
#line 322
goto label_577;
#line 322
label_566:
#line 322
c_rt_lib0move(&___nl__8, c_rt_lib0priv_as(___nl__6, ___get_global_const(95)));
#line 323
c_rt_lib0move(&___nl__9, type_checker_priv0check_try_ensure(___nl__8, ___ref___1, &___nl__5, ___ref___3));
#line 325
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__9, ___get_global_const(674)));
#line 325
c_rt_lib0copy(&___nl__4, ___nl__10);
#line 325
c_rt_lib0clear(&___nl__10);
#line 325
c_rt_lib0clear(&___nl__9);
#line 325
c_rt_lib0clear(&___nl__8);
#line 326
goto label_577;
#line 326
label_575:
#line 327
goto label_577;
#line 327
label_577:
#line 327
c_rt_lib0clear(&___nl__6);
#line 327
c_rt_lib0clear(&___nl__7);
#line 328
c_rt_lib0move(&___nl__8, c_rt_lib0init_iter(*___ref___2));
#line 328
label_581:
#line 328
c_rt_lib0move(&___nl__6, c_rt_lib0is_end_hash(___nl__8));
#line 328
if(c_rt_lib0check_true_native(___nl__6)){ goto label_591;}
#line 328
c_rt_lib0move(&___nl__6, c_rt_lib0get_key_iter(___nl__8));
#line 328
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value(*___ref___2, ___nl__6));
#line 329
c_rt_lib0move(&___nl__9, hash0get_value(___nl__5, ___nl__6));
#line 329
c_rt_lib0delete(hash0set_value(___ref___2, ___nl__6, ___nl__9));
#line 329
c_rt_lib0clear(&___nl__9);
#line 330
c_rt_lib0move(&___nl__8, c_rt_lib0next_iter(___nl__8));
#line 330
goto label_581;
#line 330
label_591:
#line 330
c_rt_lib0clear(&___nl__6);
#line 330
c_rt_lib0clear(&___nl__7);
#line 330
c_rt_lib0clear(&___nl__8);
#line 331
c_rt_lib0move(&___nl__7,___get_global_const(1168));
#line 331
c_rt_lib0move(&___nl__6, hash0has_key(___nl__5, ___nl__7));
#line 331
c_rt_lib0clear(&___nl__7);
#line 331
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 331
if(c_rt_lib0check_true_native(___nl__6)){ goto label_610;}
#line 332
c_rt_lib0move(&___nl__7,___get_global_const(1168));
#line 332
c_rt_lib0move(&___nl__9, c_rt_lib0ov_mk_none(___get_global_const(45)));
#line 332
c_rt_lib0move(&___nl__10, tct0empty());
#line 332
c_rt_lib0move(&___nl__8, c_rt_lib0hash_mk(2, ___get_global_const(1139), ___nl__9, ___get_global_const(63), ___nl__10));
#line 332
c_rt_lib0clear(&___nl__9);
#line 332
c_rt_lib0clear(&___nl__10);
#line 332
c_rt_lib0delete(hash0set_value(___ref___2, ___nl__7, ___nl__8));
#line 332
c_rt_lib0clear(&___nl__8);
#line 332
c_rt_lib0clear(&___nl__7);
#line 333
goto label_610;
#line 333
label_610:
#line 333
c_rt_lib0clear(&___nl__6);
#line 334
c_rt_lib0clear(&___nl__0);
#line 334
c_rt_lib0clear(&___nl__5);
#line 334
return ___nl__4;
#line 334
c_rt_lib0clear(&___nl__4);
#line 334
c_rt_lib0clear(&___nl__5);
#line 334
c_rt_lib0clear(&___nl__0);
#line 334
return NULL;
}

ImmT type_checker_priv0break_continue_block(ImmT ___nl__0,ImmT * ___ref___1,ImmT * ___ref___2,ImmT * ___ref___3) {
c_rt_lib0arg_val(___nl__0);
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
#line 339
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(*___ref___1, ___get_global_const(1089)));
#line 339
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(1138)));
#line 340
c_rt_lib0move(&___nl__6, c_rt_lib0get_true());
#line 340
c_rt_lib0move(&___nl__5, c_rt_lib0hash_mk(2, ___get_global_const(884), ___nl__6, ___get_global_const(674), *___ref___2));
#line 340
c_rt_lib0clear(&___nl__6);
#line 340
c_rt_lib0move(&___nl__6,___get_global_const(1089));
#line 340
c_rt_lib0move(&___nl__6, c_rt_lib0get_ref_hash(*___ref___1, ___nl__6));
#line 340
c_rt_lib0copy(&___nl__7, ___nl__5);
#line 340
c_rt_lib0hash_set_value_dec(&___nl__6, ___get_global_const(1138), ___nl__7);
#line 340
c_rt_lib0move(&___nl__8,___get_global_const(1089));
#line 340
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___1, ___nl__8, ___nl__6));
#line 340
c_rt_lib0clear(&___nl__8);
#line 340
c_rt_lib0clear(&___nl__5);
#line 340
c_rt_lib0clear(&___nl__6);
#line 340
c_rt_lib0clear(&___nl__7);
#line 341
c_rt_lib0delete(type_checker_priv0check_cmd(___nl__0, ___ref___1, ___ref___2, ___ref___3));
#line 342
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(*___ref___1, ___get_global_const(1089)));
#line 342
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(1138)));
#line 342
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(674)));
#line 342
c_rt_lib0delete(type_checker_priv0join_vars(___ref___2, ___nl__5, ___ref___1, ___ref___3));
#line 342
c_rt_lib0clear(&___nl__5);
#line 343
c_rt_lib0move(&___nl__5,___get_global_const(1089));
#line 343
c_rt_lib0move(&___nl__5, c_rt_lib0get_ref_hash(*___ref___1, ___nl__5));
#line 343
c_rt_lib0copy(&___nl__6, ___nl__4);
#line 343
c_rt_lib0hash_set_value_dec(&___nl__5, ___get_global_const(1138), ___nl__6);
#line 343
c_rt_lib0move(&___nl__7,___get_global_const(1089));
#line 343
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___1, ___nl__7, ___nl__5));
#line 343
c_rt_lib0clear(&___nl__7);
#line 343
c_rt_lib0clear(&___nl__5);
#line 343
c_rt_lib0clear(&___nl__6);
#line 343
c_rt_lib0clear(&___nl__4);
#line 343
c_rt_lib0clear(&___nl__0);
#line 343
return NULL;
}

ImmT type_checker_priv0check_try_ensure(ImmT ___nl__0,ImmT * ___ref___1,ImmT * ___ref___2,ImmT * ___ref___3) {
c_rt_lib0arg_val(___nl__0);
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
#line 348
c_rt_lib0move(&___nl__4, c_rt_lib0hash_mk(0));
#line 349
c_rt_lib0move(&___nl__6, tct0empty());
#line 349
c_rt_lib0move(&___nl__7, c_rt_lib0ov_mk_none(___get_global_const(1085)));
#line 349
c_rt_lib0move(&___nl__5, c_rt_lib0hash_mk(2, ___get_global_const(63), ___nl__6, ___get_global_const(43), ___nl__7));
#line 349
c_rt_lib0clear(&___nl__6);
#line 349
c_rt_lib0clear(&___nl__7);
#line 350
c_rt_lib0move(&___nl__6, tct0tct_im());
#line 351
c_rt_lib0move(&___nl__7, c_rt_lib0priv_is(___nl__0, ___get_global_const(846)));
#line 351
if(c_rt_lib0check_true_native(___nl__7)){ goto label_16;}
#line 356
c_rt_lib0move(&___nl__7, c_rt_lib0priv_is(___nl__0, ___get_global_const(847)));
#line 356
if(c_rt_lib0check_true_native(___nl__7)){ goto label_36;}
#line 368
c_rt_lib0move(&___nl__7, c_rt_lib0priv_is(___nl__0, ___get_global_const(848)));
#line 368
if(c_rt_lib0check_true_native(___nl__7)){ goto label_85;}
#line 368
c_rt_lib0move(&___nl__7,___get_global_const(91));
#line 368
c_rt_lib0move(&___nl__7, c_rt_lib0array_mk(2, ___nl__7, ___nl__0));
#line 368
nl_die_arg(___nl__7);
#line 351
label_16:
#line 351
c_rt_lib0move(&___nl__8, c_rt_lib0priv_as(___nl__0, ___get_global_const(846)));
#line 352
c_rt_lib0move(&___nl__10, c_rt_lib0get_true());
#line 352
c_rt_lib0move(&___nl__9, type_checker_priv0check_var_decl_try(___nl__8, ___nl__10, ___ref___1, ___ref___2, ___ref___3));
#line 352
c_rt_lib0clear(&___nl__10);
#line 353
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__8, ___get_global_const(93)));
#line 353
c_rt_lib0move(&___nl__11, c_rt_lib0hash_get_value_dec(___nl__9, ___get_global_const(48)));
#line 353
c_rt_lib0delete(hash0set_value(&___nl__4, ___nl__10, ___nl__11));
#line 353
c_rt_lib0clear(&___nl__11);
#line 353
c_rt_lib0clear(&___nl__10);
#line 354
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__9, ___get_global_const(47)));
#line 354
c_rt_lib0copy(&___nl__5, ___nl__10);
#line 354
c_rt_lib0clear(&___nl__10);
#line 355
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__9, ___get_global_const(48)));
#line 355
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__10, ___get_global_const(63)));
#line 355
c_rt_lib0copy(&___nl__6, ___nl__10);
#line 355
c_rt_lib0clear(&___nl__10);
#line 355
c_rt_lib0clear(&___nl__9);
#line 355
c_rt_lib0clear(&___nl__8);
#line 356
goto label_103;
#line 356
label_36:
#line 356
c_rt_lib0move(&___nl__8, c_rt_lib0priv_as(___nl__0, ___get_global_const(847)));
#line 357
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__8, ___get_global_const(231)));
#line 357
c_rt_lib0move(&___nl__9, type_checker_priv0check_val(___nl__10, ___ref___1, ___ref___2, ___ref___3));
#line 357
c_rt_lib0clear(&___nl__10);
#line 358
c_rt_lib0move(&___nl__11, c_rt_lib0hash_get_value_dec(*___ref___3, ___get_global_const(18)));
#line 358
c_rt_lib0move(&___nl__10, array0len(___nl__11));
#line 358
c_rt_lib0clear(&___nl__11);
#line 359
c_rt_lib0move(&___nl__12, c_rt_lib0hash_get_value_dec(___nl__8, ___get_global_const(230)));
#line 359
c_rt_lib0move(&___nl__11, type_checker_priv0get_type_left_side_equation(___nl__12, ___ref___1, ___ref___2, ___ref___3));
#line 359
c_rt_lib0clear(&___nl__12);
#line 360
c_rt_lib0move(&___nl__13, c_rt_lib0hash_get_value_dec(*___ref___3, ___get_global_const(18)));
#line 360
c_rt_lib0move(&___nl__12, array0len(___nl__13));
#line 360
c_rt_lib0clear(&___nl__13);
#line 360
c_rt_lib0move(&___nl__12, c_rt_lib0sub_mod(___nl__12, ___nl__10));
#line 360
c_rt_lib0copy(&___nl__10, ___nl__12);
#line 360
c_rt_lib0clear(&___nl__12);
#line 361
c_rt_lib0move(&___nl__12,___get_global_const(0));
#line 361
c_rt_lib0move(&___nl__12, c_rt_lib0num_eq(___nl__10, ___nl__12));
#line 361
c_rt_lib0move(&___nl__12, c_rt_lib0not(___nl__12));
#line 361
if(c_rt_lib0check_true_native(___nl__12)){ goto label_78;}
#line 362
c_rt_lib0move(&___nl__13, ptd_system0try_get_ensure_sub_types(___nl__9, ___ref___1, ___ref___3));
#line 363
c_rt_lib0move(&___nl__14, c_rt_lib0hash_get_value_dec(___nl__13, ___get_global_const(48)));
#line 363
c_rt_lib0copy(&___nl__15, ___nl__14);
#line 363
c_rt_lib0hash_set_value_dec(&___nl__9, ___get_global_const(63), ___nl__15);
#line 363
c_rt_lib0clear(&___nl__14);
#line 363
c_rt_lib0clear(&___nl__15);
#line 364
c_rt_lib0move(&___nl__14, c_rt_lib0hash_get_value_dec(___nl__8, ___get_global_const(230)));
#line 364
c_rt_lib0delete(type_checker_priv0set_type_to_lval(___nl__14, ___nl__11, ___nl__9, ___ref___1, ___ref___2, ___ref___3));
#line 364
c_rt_lib0clear(&___nl__14);
#line 365
c_rt_lib0move(&___nl__15, c_rt_lib0hash_get_value_dec(___nl__13, ___get_global_const(47)));
#line 365
c_rt_lib0move(&___nl__16, c_rt_lib0hash_get_value_dec(___nl__9, ___get_global_const(43)));
#line 365
c_rt_lib0move(&___nl__14, c_rt_lib0hash_mk(2, ___get_global_const(63), ___nl__15, ___get_global_const(43), ___nl__16));
#line 365
c_rt_lib0clear(&___nl__15);
#line 365
c_rt_lib0clear(&___nl__16);
#line 365
c_rt_lib0copy(&___nl__5, ___nl__14);
#line 365
c_rt_lib0clear(&___nl__14);
#line 366
c_rt_lib0move(&___nl__14, c_rt_lib0hash_get_value_dec(___nl__13, ___get_global_const(48)));
#line 366
c_rt_lib0copy(&___nl__6, ___nl__14);
#line 366
c_rt_lib0clear(&___nl__14);
#line 366
c_rt_lib0clear(&___nl__13);
#line 367
goto label_78;
#line 367
label_78:
#line 367
c_rt_lib0clear(&___nl__12);
#line 367
c_rt_lib0clear(&___nl__9);
#line 367
c_rt_lib0clear(&___nl__10);
#line 367
c_rt_lib0clear(&___nl__11);
#line 367
c_rt_lib0clear(&___nl__8);
#line 368
goto label_103;
#line 368
label_85:
#line 368
c_rt_lib0move(&___nl__8, c_rt_lib0priv_as(___nl__0, ___get_global_const(848)));
#line 369
c_rt_lib0move(&___nl__9, type_checker_priv0check_val(___nl__8, ___ref___1, ___ref___2, ___ref___3));
#line 370
c_rt_lib0move(&___nl__10, ptd_system0try_get_ensure_sub_types(___nl__9, ___ref___1, ___ref___3));
#line 371
c_rt_lib0move(&___nl__12, c_rt_lib0hash_get_value_dec(___nl__10, ___get_global_const(47)));
#line 371
c_rt_lib0move(&___nl__13, c_rt_lib0hash_get_value_dec(___nl__9, ___get_global_const(43)));
#line 371
c_rt_lib0move(&___nl__11, c_rt_lib0hash_mk(2, ___get_global_const(63), ___nl__12, ___get_global_const(43), ___nl__13));
#line 371
c_rt_lib0clear(&___nl__12);
#line 371
c_rt_lib0clear(&___nl__13);
#line 371
c_rt_lib0copy(&___nl__5, ___nl__11);
#line 371
c_rt_lib0clear(&___nl__11);
#line 372
c_rt_lib0move(&___nl__11, c_rt_lib0hash_get_value_dec(___nl__10, ___get_global_const(48)));
#line 372
c_rt_lib0copy(&___nl__6, ___nl__11);
#line 372
c_rt_lib0clear(&___nl__11);
#line 372
c_rt_lib0clear(&___nl__9);
#line 372
c_rt_lib0clear(&___nl__10);
#line 372
c_rt_lib0clear(&___nl__8);
#line 373
goto label_103;
#line 373
label_103:
#line 373
c_rt_lib0clear(&___nl__7);
#line 374
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(63)));
#line 374
c_rt_lib0move(&___nl__7, c_rt_lib0priv_is(___nl__7, ___get_global_const(806)));
#line 374
c_rt_lib0move(&___nl__8, c_rt_lib0not(___nl__7));
#line 374
if(c_rt_lib0check_true_native(___nl__8)){ goto label_111;}
#line 374
c_rt_lib0copy(&___nl__7, ___nl__6);
#line 374
c_rt_lib0move(&___nl__7, c_rt_lib0priv_is(___nl__7, ___get_global_const(806)));
#line 374
label_111:
#line 374
c_rt_lib0clear(&___nl__8);
#line 374
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 374
if(c_rt_lib0check_true_native(___nl__7)){ goto label_119;}
#line 374
c_rt_lib0move(&___nl__8,___get_global_const(1180));
#line 374
c_rt_lib0delete(type_checker_priv0add_error(___ref___3, ___nl__8));
#line 374
c_rt_lib0clear(&___nl__8);
#line 374
goto label_119;
#line 374
label_119:
#line 374
c_rt_lib0clear(&___nl__7);
#line 375
c_rt_lib0move(&___nl__7, c_rt_lib0hash_mk(2, ___get_global_const(674), ___nl__4, ___get_global_const(1178), ___nl__5));
#line 375
c_rt_lib0clear(&___nl__0);
#line 375
c_rt_lib0clear(&___nl__4);
#line 375
c_rt_lib0clear(&___nl__5);
#line 375
c_rt_lib0clear(&___nl__6);
#line 375
return ___nl__7;
#line 375
c_rt_lib0clear(&___nl__7);
#line 375
c_rt_lib0clear(&___nl__4);
#line 375
c_rt_lib0clear(&___nl__5);
#line 375
c_rt_lib0clear(&___nl__6);
#line 375
c_rt_lib0clear(&___nl__0);
#line 375
return NULL;
}

ImmT type_checker_priv0check_forh(ImmT ___nl__0,ImmT * ___ref___1,ImmT * ___ref___2,ImmT * ___ref___3) {
c_rt_lib0arg_val(___nl__0);
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
ImmT ___nl__9 = NULL;
#line 380
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(328)));
#line 380
c_rt_lib0move(&___nl__5, type_checker_priv0check_val(___nl__6, ___ref___1, ___ref___2, ___ref___3));
#line 380
c_rt_lib0clear(&___nl__6);
#line 380
c_rt_lib0move(&___nl__4, ptd_system0can_delete(___nl__5, ___ref___1, ___ref___3));
#line 380
c_rt_lib0clear(&___nl__5);
#line 382
c_rt_lib0move(&___nl__7, tct0tct_im());
#line 382
c_rt_lib0move(&___nl__6, tct0hash(___nl__7));
#line 382
c_rt_lib0clear(&___nl__7);
#line 382
c_rt_lib0move(&___nl__5, ptd_system0is_accepted(___nl__4, ___nl__6, ___ref___1, ___ref___3));
#line 382
c_rt_lib0clear(&___nl__6);
#line 382
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 382
if(c_rt_lib0check_true_native(___nl__5)){ goto label_13;}
#line 383
goto label_41;
#line 383
label_13:
#line 383
c_rt_lib0move(&___nl__7, c_rt_lib0hash_mk(0));
#line 383
c_rt_lib0move(&___nl__6, tct0rec(___nl__7));
#line 383
c_rt_lib0clear(&___nl__7);
#line 383
c_rt_lib0move(&___nl__5, ptd_system0is_accepted(___nl__4, ___nl__6, ___ref___1, ___ref___3));
#line 383
c_rt_lib0clear(&___nl__6);
#line 383
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 383
if(c_rt_lib0check_true_native(___nl__5)){ goto label_31;}
#line 384
c_rt_lib0move(&___nl__6, type_checker_priv0is_known(___nl__4));
#line 384
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 384
if(c_rt_lib0check_true_native(___nl__6)){ goto label_28;}
#line 384
c_rt_lib0move(&___nl__7,___get_global_const(1181));
#line 384
c_rt_lib0delete(type_checker_priv0add_error(___ref___3, ___nl__7));
#line 384
c_rt_lib0clear(&___nl__7);
#line 384
goto label_28;
#line 384
label_28:
#line 384
c_rt_lib0clear(&___nl__6);
#line 385
goto label_41;
#line 385
label_31:
#line 386
c_rt_lib0move(&___nl__6,___get_global_const(1182));
#line 387
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(63)));
#line 387
c_rt_lib0move(&___nl__7, type_checker_priv0get_print_tct_type_name(___nl__8));
#line 387
c_rt_lib0clear(&___nl__8);
#line 387
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__7));
#line 387
c_rt_lib0clear(&___nl__7);
#line 387
c_rt_lib0delete(type_checker_priv0add_error(___ref___3, ___nl__6));
#line 387
c_rt_lib0clear(&___nl__6);
#line 388
goto label_41;
#line 388
label_41:
#line 388
c_rt_lib0clear(&___nl__5);
#line 389
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(63)));
#line 389
c_rt_lib0move(&___nl__5, c_rt_lib0priv_is(___nl__5, ___get_global_const(800)));
#line 389
if(c_rt_lib0check_true_native(___nl__5)){ goto label_48;}
#line 389
c_rt_lib0move(&___nl__5, tct0tct_im());
#line 389
goto label_51;
#line 389
label_48:
#line 389
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(63)));
#line 389
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__5, ___get_global_const(800)));
#line 389
label_51:
#line 389
c_rt_lib0copy(&___nl__6, ___nl__5);
#line 389
c_rt_lib0hash_set_value_dec(&___nl__4, ___get_global_const(63), ___nl__6);
#line 389
c_rt_lib0clear(&___nl__5);
#line 389
c_rt_lib0clear(&___nl__6);
#line 390
c_rt_lib0copy(&___nl__5, *___ref___2);
#line 391
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(329)));
#line 391
c_rt_lib0move(&___nl__8, tct0sim());
#line 391
c_rt_lib0move(&___nl__9, c_rt_lib0ov_mk_none(___get_global_const(1085)));
#line 391
c_rt_lib0move(&___nl__7, c_rt_lib0hash_mk(2, ___get_global_const(63), ___nl__8, ___get_global_const(43), ___nl__9));
#line 391
c_rt_lib0clear(&___nl__8);
#line 391
c_rt_lib0clear(&___nl__9);
#line 391
c_rt_lib0delete(type_checker_priv0add_var_decl_with_type_and_check(___nl__6, ___nl__7, &___nl__5, ___ref___3));
#line 391
c_rt_lib0clear(&___nl__7);
#line 391
c_rt_lib0clear(&___nl__6);
#line 392
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(198)));
#line 392
c_rt_lib0delete(type_checker_priv0add_var_decl_with_type_and_check(___nl__6, ___nl__4, &___nl__5, ___ref___3));
#line 392
c_rt_lib0clear(&___nl__6);
#line 393
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(201)));
#line 393
c_rt_lib0delete(type_checker_priv0break_continue_block(___nl__6, ___ref___1, &___nl__5, ___ref___3));
#line 393
c_rt_lib0clear(&___nl__6);
#line 394
c_rt_lib0delete(type_checker_priv0join_vars(___ref___2, ___nl__5, ___ref___1, ___ref___3));
#line 394
c_rt_lib0clear(&___nl__4);
#line 394
c_rt_lib0clear(&___nl__5);
#line 394
c_rt_lib0clear(&___nl__0);
#line 394
return NULL;
}

ImmT type_checker_priv0check_fora(ImmT ___nl__0,ImmT * ___ref___1,ImmT * ___ref___2,ImmT * ___ref___3) {
c_rt_lib0arg_val(___nl__0);
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
#line 399
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(3)));
#line 399
c_rt_lib0move(&___nl__5, type_checker_priv0check_val(___nl__6, ___ref___1, ___ref___2, ___ref___3));
#line 399
c_rt_lib0clear(&___nl__6);
#line 399
c_rt_lib0move(&___nl__4, ptd_system0can_delete(___nl__5, ___ref___1, ___ref___3));
#line 399
c_rt_lib0clear(&___nl__5);
#line 402
c_rt_lib0move(&___nl__7, tct0tct_im());
#line 402
c_rt_lib0move(&___nl__6, tct0arr(___nl__7));
#line 402
c_rt_lib0clear(&___nl__7);
#line 402
c_rt_lib0move(&___nl__5, ptd_system0is_accepted(___nl__4, ___nl__6, ___ref___1, ___ref___3));
#line 402
c_rt_lib0clear(&___nl__6);
#line 402
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 402
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 402
if(c_rt_lib0check_true_native(___nl__5)){ goto label_22;}
#line 401
c_rt_lib0move(&___nl__6,___get_global_const(1183));
#line 401
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(63)));
#line 401
c_rt_lib0move(&___nl__7, type_checker_priv0get_print_tct_type_name(___nl__8));
#line 401
c_rt_lib0clear(&___nl__8);
#line 401
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__7));
#line 401
c_rt_lib0clear(&___nl__7);
#line 401
c_rt_lib0delete(type_checker_priv0add_error(___ref___3, ___nl__6));
#line 401
c_rt_lib0clear(&___nl__6);
#line 401
goto label_22;
#line 401
label_22:
#line 401
c_rt_lib0clear(&___nl__5);
#line 403
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(63)));
#line 403
c_rt_lib0move(&___nl__5, c_rt_lib0priv_is(___nl__5, ___get_global_const(799)));
#line 403
if(c_rt_lib0check_true_native(___nl__5)){ goto label_29;}
#line 403
c_rt_lib0move(&___nl__5, tct0tct_im());
#line 403
goto label_32;
#line 403
label_29:
#line 403
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(63)));
#line 403
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__5, ___get_global_const(799)));
#line 403
label_32:
#line 403
c_rt_lib0copy(&___nl__6, ___nl__5);
#line 403
c_rt_lib0hash_set_value_dec(&___nl__4, ___get_global_const(63), ___nl__6);
#line 403
c_rt_lib0clear(&___nl__5);
#line 403
c_rt_lib0clear(&___nl__6);
#line 404
c_rt_lib0copy(&___nl__5, *___ref___2);
#line 405
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(836)));
#line 405
c_rt_lib0delete(type_checker_priv0add_var_decl_with_type_and_check(___nl__6, ___nl__4, &___nl__5, ___ref___3));
#line 405
c_rt_lib0clear(&___nl__6);
#line 406
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(201)));
#line 406
c_rt_lib0delete(type_checker_priv0break_continue_block(___nl__6, ___ref___1, &___nl__5, ___ref___3));
#line 406
c_rt_lib0clear(&___nl__6);
#line 407
c_rt_lib0delete(type_checker_priv0join_vars(___ref___2, ___nl__5, ___ref___1, ___ref___3));
#line 407
c_rt_lib0clear(&___nl__4);
#line 407
c_rt_lib0clear(&___nl__5);
#line 407
c_rt_lib0clear(&___nl__0);
#line 407
return NULL;
}

ImmT type_checker_priv0check_while(ImmT ___nl__0,ImmT * ___ref___1,ImmT * ___ref___2,ImmT * ___ref___3) {
c_rt_lib0arg_val(___nl__0);
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
#line 412
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(832)));
#line 412
c_rt_lib0move(&___nl__4, type_checker_priv0check_val(___nl__5, ___ref___1, ___ref___2, ___ref___3));
#line 412
c_rt_lib0clear(&___nl__5);
#line 415
c_rt_lib0move(&___nl__5, ptd_system0is_condition_type(___nl__4, ___ref___1, ___ref___3));
#line 415
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 415
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 415
if(c_rt_lib0check_true_native(___nl__5)){ goto label_16;}
#line 413
c_rt_lib0move(&___nl__6,___get_global_const(1184));
#line 414
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(63)));
#line 414
c_rt_lib0move(&___nl__7, type_checker_priv0get_print_tct_type_name(___nl__8));
#line 414
c_rt_lib0clear(&___nl__8);
#line 414
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__7));
#line 414
c_rt_lib0clear(&___nl__7);
#line 414
c_rt_lib0delete(type_checker_priv0add_error(___ref___3, ___nl__6));
#line 414
c_rt_lib0clear(&___nl__6);
#line 414
goto label_16;
#line 414
label_16:
#line 414
c_rt_lib0clear(&___nl__5);
#line 416
c_rt_lib0copy(&___nl__5, *___ref___2);
#line 417
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(201)));
#line 417
c_rt_lib0delete(type_checker_priv0break_continue_block(___nl__6, ___ref___1, &___nl__5, ___ref___3));
#line 417
c_rt_lib0clear(&___nl__6);
#line 418
c_rt_lib0delete(type_checker_priv0join_vars(___ref___2, ___nl__5, ___ref___1, ___ref___3));
#line 418
c_rt_lib0clear(&___nl__4);
#line 418
c_rt_lib0clear(&___nl__5);
#line 418
c_rt_lib0clear(&___nl__0);
#line 418
return NULL;
}

ImmT type_checker_priv0check_rep(ImmT ___nl__0,ImmT * ___ref___1,ImmT * ___ref___2,ImmT * ___ref___3) {
c_rt_lib0arg_val(___nl__0);
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
ImmT ___nl__9 = NULL;
#line 423
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(837)));
#line 423
c_rt_lib0move(&___nl__4, type_checker_priv0check_val(___nl__5, ___ref___1, ___ref___2, ___ref___3));
#line 423
c_rt_lib0clear(&___nl__5);
#line 425
c_rt_lib0move(&___nl__6, tct0sim());
#line 425
c_rt_lib0move(&___nl__5, ptd_system0is_accepted(___nl__4, ___nl__6, ___ref___1, ___ref___3));
#line 425
c_rt_lib0clear(&___nl__6);
#line 425
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 425
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 425
if(c_rt_lib0check_true_native(___nl__5)){ goto label_18;}
#line 424
c_rt_lib0move(&___nl__6,___get_global_const(1185));
#line 424
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(63)));
#line 424
c_rt_lib0move(&___nl__7, type_checker_priv0get_print_tct_type_name(___nl__8));
#line 424
c_rt_lib0clear(&___nl__8);
#line 424
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__7));
#line 424
c_rt_lib0clear(&___nl__7);
#line 424
c_rt_lib0delete(type_checker_priv0add_error(___ref___3, ___nl__6));
#line 424
c_rt_lib0clear(&___nl__6);
#line 424
goto label_18;
#line 424
label_18:
#line 424
c_rt_lib0clear(&___nl__5);
#line 426
c_rt_lib0copy(&___nl__5, *___ref___2);
#line 427
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(836)));
#line 427
c_rt_lib0move(&___nl__8, tct0sim());
#line 427
c_rt_lib0move(&___nl__9, c_rt_lib0ov_mk_none(___get_global_const(1085)));
#line 427
c_rt_lib0move(&___nl__7, c_rt_lib0hash_mk(2, ___get_global_const(63), ___nl__8, ___get_global_const(43), ___nl__9));
#line 427
c_rt_lib0clear(&___nl__8);
#line 427
c_rt_lib0clear(&___nl__9);
#line 427
c_rt_lib0delete(type_checker_priv0add_var_decl_with_type_and_check(___nl__6, ___nl__7, &___nl__5, ___ref___3));
#line 427
c_rt_lib0clear(&___nl__7);
#line 427
c_rt_lib0clear(&___nl__6);
#line 428
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(201)));
#line 428
c_rt_lib0delete(type_checker_priv0break_continue_block(___nl__6, ___ref___1, &___nl__5, ___ref___3));
#line 428
c_rt_lib0clear(&___nl__6);
#line 429
c_rt_lib0delete(type_checker_priv0join_vars(___ref___2, ___nl__5, ___ref___1, ___ref___3));
#line 429
c_rt_lib0clear(&___nl__4);
#line 429
c_rt_lib0clear(&___nl__5);
#line 429
c_rt_lib0clear(&___nl__0);
#line 429
return NULL;
}

ImmT type_checker_priv0check_match(ImmT ___nl__0,ImmT * ___ref___1,ImmT * ___ref___2,ImmT * ___ref___3) {
c_rt_lib0arg_val(___nl__0);
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
#line 434
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(198)));
#line 434
c_rt_lib0move(&___nl__5, type_checker_priv0check_val(___nl__6, ___ref___1, ___ref___2, ___ref___3));
#line 434
c_rt_lib0clear(&___nl__6);
#line 434
c_rt_lib0move(&___nl__4, ptd_system0can_delete(___nl__5, ___ref___1, ___ref___3));
#line 434
c_rt_lib0clear(&___nl__5);
#line 436
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(840)));
#line 437
c_rt_lib0move(&___nl__6, c_rt_lib0get_false());
#line 438
c_rt_lib0move(&___nl__7, c_rt_lib0hash_mk(0));
#line 439
c_rt_lib0move(&___nl__8, c_rt_lib0hash_mk(0));
#line 440
c_rt_lib0move(&___nl__11, c_rt_lib0hash_mk(0));
#line 440
c_rt_lib0move(&___nl__10, tct0var(___nl__11));
#line 440
c_rt_lib0clear(&___nl__11);
#line 440
c_rt_lib0move(&___nl__9, ptd_system0is_accepted(___nl__4, ___nl__10, ___ref___1, ___ref___3));
#line 440
c_rt_lib0clear(&___nl__10);
#line 440
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__9));
#line 440
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__9));
#line 440
if(c_rt_lib0check_true_native(___nl__9)){ goto label_26;}
#line 441
c_rt_lib0move(&___nl__10,___get_global_const(1186));
#line 441
c_rt_lib0move(&___nl__12, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(63)));
#line 441
c_rt_lib0move(&___nl__11, type_checker_priv0get_print_tct_type_name(___nl__12));
#line 441
c_rt_lib0clear(&___nl__12);
#line 441
c_rt_lib0move(&___nl__10, c_rt_lib0concat_add(___nl__10, ___nl__11));
#line 441
c_rt_lib0clear(&___nl__11);
#line 441
c_rt_lib0delete(type_checker_priv0add_error(___ref___3, ___nl__10));
#line 441
c_rt_lib0clear(&___nl__10);
#line 442
goto label_26;
#line 442
label_26:
#line 442
c_rt_lib0clear(&___nl__9);
#line 443
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(63)));
#line 443
c_rt_lib0move(&___nl__9, c_rt_lib0priv_is(___nl__9, ___get_global_const(805)));
#line 443
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__9));
#line 443
if(c_rt_lib0check_true_native(___nl__9)){ goto label_128;}
#line 444
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(63)));
#line 444
c_rt_lib0move(&___nl__10, c_rt_lib0priv_as(___nl__10, ___get_global_const(805)));
#line 444
c_rt_lib0copy(&___nl__8, ___nl__10);
#line 444
c_rt_lib0clear(&___nl__10);
#line 445
c_rt_lib0move(&___nl__10, c_rt_lib0hash_mk(0));
#line 446
c_rt_lib0move(&___nl__12,___get_global_const(0));
#line 446
c_rt_lib0move(&___nl__13,___get_global_const(1));
#line 446
c_rt_lib0move(&___nl__14, c_rt_lib0array_len(___nl__5));
#line 446
label_40:
#line 446
c_rt_lib0move(&___nl__15, c_rt_lib0ge(___nl__12, ___nl__14));
#line 446
if(c_rt_lib0check_true_native(___nl__15)){ goto label_94;}
#line 446
c_rt_lib0move(&___nl__11, c_rt_lib0array_get(___nl__5, ___nl__12));
#line 447
c_rt_lib0move(&___nl__16, c_rt_lib0hash_get_value_dec(___nl__11, ___get_global_const(841)));
#line 447
c_rt_lib0move(&___nl__16, c_rt_lib0hash_get_value_dec(___nl__16, ___get_global_const(93)));
#line 448
c_rt_lib0move(&___nl__17, hash0has_key(___nl__8, ___nl__16));
#line 448
c_rt_lib0move(&___nl__17, c_rt_lib0not(___nl__17));
#line 448
c_rt_lib0move(&___nl__17, c_rt_lib0not(___nl__17));
#line 448
if(c_rt_lib0check_true_native(___nl__17)){ goto label_67;}
#line 450
c_rt_lib0move(&___nl__18, type_checker_priv0is_known(___nl__4));
#line 450
c_rt_lib0move(&___nl__18, c_rt_lib0not(___nl__18));
#line 450
if(c_rt_lib0check_true_native(___nl__18)){ goto label_61;}
#line 449
c_rt_lib0move(&___nl__19,___get_global_const(1187));
#line 449
c_rt_lib0move(&___nl__19, c_rt_lib0concat_add(___nl__19, ___nl__16));
#line 449
c_rt_lib0move(&___nl__20,___get_global_const(1095));
#line 449
c_rt_lib0move(&___nl__19, c_rt_lib0concat_add(___nl__19, ___nl__20));
#line 449
c_rt_lib0clear(&___nl__20);
#line 449
c_rt_lib0delete(type_checker_priv0add_error(___ref___3, ___nl__19));
#line 449
c_rt_lib0clear(&___nl__19);
#line 449
goto label_61;
#line 449
label_61:
#line 449
c_rt_lib0clear(&___nl__18);
#line 451
c_rt_lib0clear(&___nl__16);
#line 451
c_rt_lib0clear(&___nl__17);
#line 451
goto label_91;
#line 452
goto label_67;
#line 452
label_67:
#line 452
c_rt_lib0clear(&___nl__17);
#line 453
c_rt_lib0move(&___nl__17, c_rt_lib0get_true());
#line 453
c_rt_lib0delete(hash0set_value(&___nl__10, ___nl__16, ___nl__17));
#line 453
c_rt_lib0clear(&___nl__17);
#line 454
c_rt_lib0move(&___nl__17, hash0get_value(___nl__8, ___nl__16));
#line 454
c_rt_lib0move(&___nl__18, c_rt_lib0priv_is(___nl__17, ___get_global_const(810)));
#line 454
if(c_rt_lib0check_true_native(___nl__18)){ goto label_80;}
#line 456
c_rt_lib0move(&___nl__18, c_rt_lib0priv_is(___nl__17, ___get_global_const(809)));
#line 456
if(c_rt_lib0check_true_native(___nl__18)){ goto label_85;}
#line 456
c_rt_lib0move(&___nl__18,___get_global_const(91));
#line 456
c_rt_lib0move(&___nl__18, c_rt_lib0array_mk(2, ___nl__18, ___nl__17));
#line 456
nl_die_arg(___nl__18);
#line 454
label_80:
#line 454
c_rt_lib0move(&___nl__19, c_rt_lib0priv_as(___nl__17, ___get_global_const(810)));
#line 455
c_rt_lib0delete(hash0set_value(&___nl__7, ___nl__16, ___nl__19));
#line 455
c_rt_lib0clear(&___nl__19);
#line 456
goto label_87;
#line 456
label_85:
#line 457
goto label_87;
#line 457
label_87:
#line 457
c_rt_lib0clear(&___nl__17);
#line 457
c_rt_lib0clear(&___nl__18);
#line 457
c_rt_lib0clear(&___nl__16);
#line 457
label_91:
#line 458
c_rt_lib0move(&___nl__12, c_rt_lib0add_mod(___nl__12, ___nl__13));
#line 458
goto label_40;
#line 458
label_94:
#line 458
c_rt_lib0clear(&___nl__11);
#line 458
c_rt_lib0clear(&___nl__12);
#line 458
c_rt_lib0clear(&___nl__13);
#line 458
c_rt_lib0clear(&___nl__14);
#line 458
c_rt_lib0clear(&___nl__15);
#line 459
c_rt_lib0move(&___nl__13, c_rt_lib0init_iter(___nl__8));
#line 459
label_101:
#line 459
c_rt_lib0move(&___nl__11, c_rt_lib0is_end_hash(___nl__13));
#line 459
if(c_rt_lib0check_true_native(___nl__11)){ goto label_119;}
#line 459
c_rt_lib0move(&___nl__11, c_rt_lib0get_key_iter(___nl__13));
#line 459
c_rt_lib0move(&___nl__12, c_rt_lib0hash_get_value(___nl__8, ___nl__11));
#line 460
c_rt_lib0move(&___nl__14, hash0has_key(___nl__10, ___nl__11));
#line 460
c_rt_lib0move(&___nl__14, c_rt_lib0not(___nl__14));
#line 460
c_rt_lib0move(&___nl__14, c_rt_lib0not(___nl__14));
#line 460
if(c_rt_lib0check_true_native(___nl__14)){ goto label_115;}
#line 461
c_rt_lib0move(&___nl__15,___get_global_const(1188));
#line 461
c_rt_lib0move(&___nl__15, c_rt_lib0concat_add(___nl__15, ___nl__11));
#line 461
c_rt_lib0delete(type_checker_priv0add_error(___ref___3, ___nl__15));
#line 461
c_rt_lib0clear(&___nl__15);
#line 462
goto label_115;
#line 462
label_115:
#line 462
c_rt_lib0clear(&___nl__14);
#line 463
c_rt_lib0move(&___nl__13, c_rt_lib0next_iter(___nl__13));
#line 463
goto label_101;
#line 463
label_119:
#line 463
c_rt_lib0clear(&___nl__11);
#line 463
c_rt_lib0clear(&___nl__12);
#line 463
c_rt_lib0clear(&___nl__13);
#line 464
c_rt_lib0move(&___nl__11, c_rt_lib0get_true());
#line 464
c_rt_lib0copy(&___nl__6, ___nl__11);
#line 464
c_rt_lib0clear(&___nl__11);
#line 464
c_rt_lib0clear(&___nl__10);
#line 465
goto label_128;
#line 465
label_128:
#line 465
c_rt_lib0clear(&___nl__9);
#line 466
c_rt_lib0copy(&___nl__9, *___ref___2);
#line 467
c_rt_lib0move(&___nl__10, c_rt_lib0get_true());
#line 468
c_rt_lib0move(&___nl__11, c_rt_lib0hash_mk(0));
#line 469
c_rt_lib0move(&___nl__13,___get_global_const(0));
#line 469
c_rt_lib0move(&___nl__14,___get_global_const(1));
#line 469
c_rt_lib0move(&___nl__15, c_rt_lib0array_len(___nl__5));
#line 469
label_136:
#line 469
c_rt_lib0move(&___nl__16, c_rt_lib0ge(___nl__13, ___nl__15));
#line 469
if(c_rt_lib0check_true_native(___nl__16)){ goto label_296;}
#line 469
c_rt_lib0move(&___nl__12, c_rt_lib0array_get(___nl__5, ___nl__13));
#line 470
c_rt_lib0copy(&___nl__17, *___ref___2);
#line 471
c_rt_lib0move(&___nl__18, c_rt_lib0hash_get_value_dec(___nl__12, ___get_global_const(841)));
#line 471
c_rt_lib0move(&___nl__18, c_rt_lib0hash_get_value_dec(___nl__18, ___get_global_const(93)));
#line 473
c_rt_lib0move(&___nl__19, hash0has_key(___nl__11, ___nl__18));
#line 473
c_rt_lib0move(&___nl__19, c_rt_lib0not(___nl__19));
#line 473
if(c_rt_lib0check_true_native(___nl__19)){ goto label_151;}
#line 472
c_rt_lib0move(&___nl__20,___get_global_const(1189));
#line 472
c_rt_lib0move(&___nl__20, c_rt_lib0concat_add(___nl__20, ___nl__18));
#line 472
c_rt_lib0delete(type_checker_priv0add_error(___ref___3, ___nl__20));
#line 472
c_rt_lib0clear(&___nl__20);
#line 472
goto label_151;
#line 472
label_151:
#line 472
c_rt_lib0clear(&___nl__19);
#line 474
c_rt_lib0move(&___nl__19,___get_global_const(1));
#line 474
c_rt_lib0delete(hash0set_value(&___nl__11, ___nl__18, ___nl__19));
#line 474
c_rt_lib0clear(&___nl__19);
#line 475
c_rt_lib0move(&___nl__19, c_rt_lib0hash_get_value_dec(___nl__12, ___get_global_const(841)));
#line 475
c_rt_lib0move(&___nl__19, c_rt_lib0hash_get_value_dec(___nl__19, ___get_global_const(192)));
#line 475
c_rt_lib0move(&___nl__20, c_rt_lib0priv_is(___nl__19, ___get_global_const(192)));
#line 475
if(c_rt_lib0check_true_native(___nl__20)){ goto label_165;}
#line 489
c_rt_lib0move(&___nl__20, c_rt_lib0priv_is(___nl__19, ___get_global_const(41)));
#line 489
if(c_rt_lib0check_true_native(___nl__20)){ goto label_227;}
#line 489
c_rt_lib0move(&___nl__20,___get_global_const(91));
#line 489
c_rt_lib0move(&___nl__20, c_rt_lib0array_mk(2, ___nl__20, ___nl__19));
#line 489
nl_die_arg(___nl__20);
#line 475
label_165:
#line 475
c_rt_lib0move(&___nl__21, c_rt_lib0priv_as(___nl__19, ___get_global_const(192)));
#line 476
c_rt_lib0delete(type_checker_priv0check_var_decl(___nl__21, ___ref___1, &___nl__17, ___ref___3));
#line 478
c_rt_lib0copy(&___nl__23, ___nl__6);
#line 478
c_rt_lib0move(&___nl__23, c_rt_lib0not(___nl__23));
#line 478
if(c_rt_lib0check_true_native(___nl__23)){ goto label_214;}
#line 479
c_rt_lib0move(&___nl__24, hash0has_key(___nl__8, ___nl__18));
#line 479
c_rt_lib0move(&___nl__24, c_rt_lib0not(___nl__24));
#line 479
c_rt_lib0move(&___nl__24, c_rt_lib0not(___nl__24));
#line 479
if(c_rt_lib0check_true_native(___nl__24)){ goto label_185;}
#line 479
c_rt_lib0clear(&___nl__17);
#line 479
c_rt_lib0clear(&___nl__18);
#line 479
c_rt_lib0clear(&___nl__19);
#line 479
c_rt_lib0clear(&___nl__20);
#line 479
c_rt_lib0clear(&___nl__21);
#line 479
c_rt_lib0clear(&___nl__22);
#line 479
c_rt_lib0clear(&___nl__23);
#line 479
c_rt_lib0clear(&___nl__24);
#line 479
goto label_293;
#line 479
goto label_185;
#line 479
label_185:
#line 479
c_rt_lib0clear(&___nl__24);
#line 480
c_rt_lib0move(&___nl__24, hash0has_key(___nl__7, ___nl__18));
#line 480
c_rt_lib0move(&___nl__24, c_rt_lib0not(___nl__24));
#line 480
c_rt_lib0move(&___nl__24, c_rt_lib0not(___nl__24));
#line 480
if(c_rt_lib0check_true_native(___nl__24)){ goto label_208;}
#line 481
c_rt_lib0move(&___nl__25,___get_global_const(1190));
#line 481
c_rt_lib0move(&___nl__25, c_rt_lib0concat_add(___nl__25, ___nl__18));
#line 481
c_rt_lib0move(&___nl__26,___get_global_const(1191));
#line 481
c_rt_lib0move(&___nl__25, c_rt_lib0concat_add(___nl__25, ___nl__26));
#line 481
c_rt_lib0clear(&___nl__26);
#line 481
c_rt_lib0delete(type_checker_priv0add_error(___ref___3, ___nl__25));
#line 481
c_rt_lib0clear(&___nl__25);
#line 482
c_rt_lib0clear(&___nl__17);
#line 482
c_rt_lib0clear(&___nl__18);
#line 482
c_rt_lib0clear(&___nl__19);
#line 482
c_rt_lib0clear(&___nl__20);
#line 482
c_rt_lib0clear(&___nl__21);
#line 482
c_rt_lib0clear(&___nl__22);
#line 482
c_rt_lib0clear(&___nl__23);
#line 482
c_rt_lib0clear(&___nl__24);
#line 482
goto label_293;
#line 483
goto label_208;
#line 483
label_208:
#line 483
c_rt_lib0clear(&___nl__24);
#line 484
c_rt_lib0move(&___nl__24, hash0get_value(___nl__7, ___nl__18));
#line 484
c_rt_lib0copy(&___nl__22, ___nl__24);
#line 484
c_rt_lib0clear(&___nl__24);
#line 485
goto label_219;
#line 485
label_214:
#line 486
c_rt_lib0move(&___nl__24, tct0tct_im());
#line 486
c_rt_lib0copy(&___nl__22, ___nl__24);
#line 486
c_rt_lib0clear(&___nl__24);
#line 487
goto label_219;
#line 487
label_219:
#line 487
c_rt_lib0clear(&___nl__23);
#line 488
c_rt_lib0move(&___nl__23, c_rt_lib0hash_get_value_dec(___nl__21, ___get_global_const(93)));
#line 488
c_rt_lib0delete(type_checker_priv0add_var_decl_to_vars(___nl__22, ___nl__23, &___nl__17));
#line 488
c_rt_lib0clear(&___nl__23);
#line 488
c_rt_lib0clear(&___nl__22);
#line 488
c_rt_lib0clear(&___nl__21);
#line 489
goto label_242;
#line 489
label_227:
#line 490
c_rt_lib0move(&___nl__21, hash0has_key(___nl__7, ___nl__18));
#line 490
c_rt_lib0move(&___nl__21, c_rt_lib0not(___nl__21));
#line 490
if(c_rt_lib0check_true_native(___nl__21)){ goto label_239;}
#line 491
c_rt_lib0move(&___nl__22,___get_global_const(1190));
#line 491
c_rt_lib0move(&___nl__22, c_rt_lib0concat_add(___nl__22, ___nl__18));
#line 491
c_rt_lib0move(&___nl__23,___get_global_const(1192));
#line 491
c_rt_lib0move(&___nl__22, c_rt_lib0concat_add(___nl__22, ___nl__23));
#line 491
c_rt_lib0clear(&___nl__23);
#line 491
c_rt_lib0delete(type_checker_priv0add_error(___ref___3, ___nl__22));
#line 491
c_rt_lib0clear(&___nl__22);
#line 492
goto label_239;
#line 492
label_239:
#line 492
c_rt_lib0clear(&___nl__21);
#line 493
goto label_242;
#line 493
label_242:
#line 493
c_rt_lib0clear(&___nl__19);
#line 493
c_rt_lib0clear(&___nl__20);
#line 494
c_rt_lib0move(&___nl__19, c_rt_lib0hash_get_value_dec(___nl__12, ___get_global_const(201)));
#line 494
c_rt_lib0delete(type_checker_priv0check_cmd(___nl__19, ___ref___1, &___nl__17, ___ref___3));
#line 494
c_rt_lib0clear(&___nl__19);
#line 495
c_rt_lib0move(&___nl__19, c_rt_lib0hash_get_value_dec(___nl__12, ___get_global_const(841)));
#line 495
c_rt_lib0move(&___nl__19, c_rt_lib0hash_get_value_dec(___nl__19, ___get_global_const(192)));
#line 495
c_rt_lib0move(&___nl__20, c_rt_lib0priv_is(___nl__19, ___get_global_const(192)));
#line 495
if(c_rt_lib0check_true_native(___nl__20)){ goto label_257;}
#line 497
c_rt_lib0move(&___nl__20, c_rt_lib0priv_is(___nl__19, ___get_global_const(41)));
#line 497
if(c_rt_lib0check_true_native(___nl__20)){ goto label_273;}
#line 497
c_rt_lib0move(&___nl__20,___get_global_const(91));
#line 497
c_rt_lib0move(&___nl__20, c_rt_lib0array_mk(2, ___nl__20, ___nl__19));
#line 497
nl_die_arg(___nl__20);
#line 495
label_257:
#line 495
c_rt_lib0move(&___nl__21, c_rt_lib0priv_as(___nl__19, ___get_global_const(192)));
#line 496
c_rt_lib0move(&___nl__23, c_rt_lib0hash_get_value_dec(___nl__21, ___get_global_const(93)));
#line 496
c_rt_lib0move(&___nl__22, hash0has_key(___nl__9, ___nl__23));
#line 496
c_rt_lib0clear(&___nl__23);
#line 496
c_rt_lib0move(&___nl__22, c_rt_lib0not(___nl__22));
#line 496
c_rt_lib0move(&___nl__22, c_rt_lib0not(___nl__22));
#line 496
if(c_rt_lib0check_true_native(___nl__22)){ goto label_269;}
#line 496
c_rt_lib0move(&___nl__23, c_rt_lib0hash_get_value_dec(___nl__21, ___get_global_const(93)));
#line 496
c_rt_lib0delete(hash0delete(&___nl__17, ___nl__23));
#line 496
c_rt_lib0clear(&___nl__23);
#line 496
goto label_269;
#line 496
label_269:
#line 496
c_rt_lib0clear(&___nl__22);
#line 496
c_rt_lib0clear(&___nl__21);
#line 497
goto label_275;
#line 497
label_273:
#line 498
goto label_275;
#line 498
label_275:
#line 498
c_rt_lib0clear(&___nl__19);
#line 498
c_rt_lib0clear(&___nl__20);
#line 499
c_rt_lib0copy(&___nl__19, ___nl__10);
#line 499
c_rt_lib0move(&___nl__19, c_rt_lib0not(___nl__19));
#line 499
if(c_rt_lib0check_true_native(___nl__19)){ goto label_283;}
#line 500
c_rt_lib0copy(&___nl__9, ___nl__17);
#line 501
goto label_286;
#line 501
label_283:
#line 502
c_rt_lib0delete(type_checker_priv0join_vars(&___nl__9, ___nl__17, ___ref___1, ___ref___3));
#line 503
goto label_286;
#line 503
label_286:
#line 503
c_rt_lib0clear(&___nl__19);
#line 504
c_rt_lib0move(&___nl__19, c_rt_lib0get_false());
#line 504
c_rt_lib0copy(&___nl__10, ___nl__19);
#line 504
c_rt_lib0clear(&___nl__19);
#line 504
c_rt_lib0clear(&___nl__17);
#line 504
c_rt_lib0clear(&___nl__18);
#line 504
label_293:
#line 505
c_rt_lib0move(&___nl__13, c_rt_lib0add_mod(___nl__13, ___nl__14));
#line 505
goto label_136;
#line 505
label_296:
#line 505
c_rt_lib0clear(&___nl__12);
#line 505
c_rt_lib0clear(&___nl__13);
#line 505
c_rt_lib0clear(&___nl__14);
#line 505
c_rt_lib0clear(&___nl__15);
#line 505
c_rt_lib0clear(&___nl__16);
#line 506
c_rt_lib0copy(___ref___2, ___nl__9);
#line 506
c_rt_lib0clear(&___nl__4);
#line 506
c_rt_lib0clear(&___nl__5);
#line 506
c_rt_lib0clear(&___nl__6);
#line 506
c_rt_lib0clear(&___nl__7);
#line 506
c_rt_lib0clear(&___nl__8);
#line 506
c_rt_lib0clear(&___nl__9);
#line 506
c_rt_lib0clear(&___nl__10);
#line 506
c_rt_lib0clear(&___nl__11);
#line 506
c_rt_lib0clear(&___nl__0);
#line 506
return NULL;
}

ImmT type_checker_priv0check_val(ImmT ___nl__0,ImmT * ___ref___1,ImmT * ___ref___2,ImmT * ___ref___3) {
c_rt_lib0arg_val(___nl__0);
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
#line 511
c_rt_lib0move(&___nl__4, tc_types0get_default_type());
#line 512
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(192)));
#line 512
c_rt_lib0move(&___nl__6, c_rt_lib0priv_is(___nl__5, ___get_global_const(854)));
#line 512
if(c_rt_lib0check_true_native(___nl__6)){ goto label_39;}
#line 528
c_rt_lib0move(&___nl__6, c_rt_lib0priv_is(___nl__5, ___get_global_const(856)));
#line 528
if(c_rt_lib0check_true_native(___nl__6)){ goto label_101;}
#line 530
c_rt_lib0move(&___nl__6, c_rt_lib0priv_is(___nl__5, ___get_global_const(831)));
#line 530
if(c_rt_lib0check_true_native(___nl__6)){ goto label_110;}
#line 532
c_rt_lib0move(&___nl__6, c_rt_lib0priv_is(___nl__5, ___get_global_const(855)));
#line 532
if(c_rt_lib0check_true_native(___nl__6)){ goto label_117;}
#line 534
c_rt_lib0move(&___nl__6, c_rt_lib0priv_is(___nl__5, ___get_global_const(841)));
#line 534
if(c_rt_lib0check_true_native(___nl__6)){ goto label_129;}
#line 548
c_rt_lib0move(&___nl__6, c_rt_lib0priv_is(___nl__5, ___get_global_const(196)));
#line 548
if(c_rt_lib0check_true_native(___nl__6)){ goto label_195;}
#line 550
c_rt_lib0move(&___nl__6, c_rt_lib0priv_is(___nl__5, ___get_global_const(204)));
#line 550
if(c_rt_lib0check_true_native(___nl__6)){ goto label_204;}
#line 565
c_rt_lib0move(&___nl__6, c_rt_lib0priv_is(___nl__5, ___get_global_const(205)));
#line 565
if(c_rt_lib0check_true_native(___nl__6)){ goto label_279;}
#line 577
c_rt_lib0move(&___nl__6, c_rt_lib0priv_is(___nl__5, ___get_global_const(849)));
#line 577
if(c_rt_lib0check_true_native(___nl__6)){ goto label_331;}
#line 588
c_rt_lib0move(&___nl__6, c_rt_lib0priv_is(___nl__5, ___get_global_const(208)));
#line 588
if(c_rt_lib0check_true_native(___nl__6)){ goto label_402;}
#line 590
c_rt_lib0move(&___nl__6, c_rt_lib0priv_is(___nl__5, ___get_global_const(857)));
#line 590
if(c_rt_lib0check_true_native(___nl__6)){ goto label_414;}
#line 623
c_rt_lib0move(&___nl__6, c_rt_lib0priv_is(___nl__5, ___get_global_const(858)));
#line 623
if(c_rt_lib0check_true_native(___nl__6)){ goto label_595;}
#line 649
c_rt_lib0move(&___nl__6, c_rt_lib0priv_is(___nl__5, ___get_global_const(859)));
#line 649
if(c_rt_lib0check_true_native(___nl__6)){ goto label_750;}
#line 652
c_rt_lib0move(&___nl__6, c_rt_lib0priv_is(___nl__5, ___get_global_const(812)));
#line 652
if(c_rt_lib0check_true_native(___nl__6)){ goto label_764;}
#line 654
c_rt_lib0move(&___nl__6, c_rt_lib0priv_is(___nl__5, ___get_global_const(771)));
#line 654
if(c_rt_lib0check_true_native(___nl__6)){ goto label_771;}
#line 656
c_rt_lib0move(&___nl__6, c_rt_lib0priv_is(___nl__5, ___get_global_const(860)));
#line 656
if(c_rt_lib0check_true_native(___nl__6)){ goto label_780;}
#line 658
c_rt_lib0move(&___nl__6, c_rt_lib0priv_is(___nl__5, ___get_global_const(861)));
#line 658
if(c_rt_lib0check_true_native(___nl__6)){ goto label_794;}
#line 658
c_rt_lib0move(&___nl__6,___get_global_const(91));
#line 658
c_rt_lib0move(&___nl__6, c_rt_lib0array_mk(2, ___nl__6, ___nl__5));
#line 658
nl_die_arg(___nl__6);
#line 512
label_39:
#line 512
c_rt_lib0move(&___nl__7, c_rt_lib0priv_as(___nl__5, ___get_global_const(854)));
#line 513
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__7, ___get_global_const(862)));
#line 513
c_rt_lib0move(&___nl__8, type_checker_priv0check_val(___nl__9, ___ref___1, ___ref___2, ___ref___3));
#line 513
c_rt_lib0clear(&___nl__9);
#line 516
c_rt_lib0move(&___nl__9, ptd_system0is_condition_type(___nl__8, ___ref___1, ___ref___3));
#line 516
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__9));
#line 516
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__9));
#line 516
if(c_rt_lib0check_true_native(___nl__9)){ goto label_57;}
#line 514
c_rt_lib0move(&___nl__10,___get_global_const(1193));
#line 515
c_rt_lib0move(&___nl__12, c_rt_lib0hash_get_value_dec(___nl__8, ___get_global_const(63)));
#line 515
c_rt_lib0move(&___nl__11, type_checker_priv0get_print_tct_type_name(___nl__12));
#line 515
c_rt_lib0clear(&___nl__12);
#line 515
c_rt_lib0move(&___nl__10, c_rt_lib0concat_add(___nl__10, ___nl__11));
#line 515
c_rt_lib0clear(&___nl__11);
#line 515
c_rt_lib0delete(type_checker_priv0add_error(___ref___3, ___nl__10));
#line 515
c_rt_lib0clear(&___nl__10);
#line 515
goto label_57;
#line 515
label_57:
#line 515
c_rt_lib0clear(&___nl__9);
#line 517
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__7, ___get_global_const(863)));
#line 517
c_rt_lib0move(&___nl__9, type_checker_priv0check_val(___nl__10, ___ref___1, ___ref___2, ___ref___3));
#line 517
c_rt_lib0clear(&___nl__10);
#line 517
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__9, ___get_global_const(63)));
#line 518
c_rt_lib0copy(&___nl__10, ___nl__9);
#line 518
c_rt_lib0move(&___nl__10, c_rt_lib0priv_is(___nl__10, ___get_global_const(803)));
#line 518
c_rt_lib0move(&___nl__10, c_rt_lib0not(___nl__10));
#line 518
if(c_rt_lib0check_true_native(___nl__10)){ goto label_71;}
#line 519
c_rt_lib0copy(&___nl__11, ___nl__9);
#line 519
c_rt_lib0hash_set_value_dec(&___nl__4, ___get_global_const(63), ___nl__11);
#line 519
c_rt_lib0clear(&___nl__11);
#line 520
goto label_95;
#line 520
label_71:
#line 521
c_rt_lib0move(&___nl__12, c_rt_lib0hash_get_value_dec(___nl__7, ___get_global_const(864)));
#line 521
c_rt_lib0move(&___nl__11, type_checker_priv0check_val(___nl__12, ___ref___1, ___ref___2, ___ref___3));
#line 521
c_rt_lib0clear(&___nl__12);
#line 521
c_rt_lib0move(&___nl__11, c_rt_lib0hash_get_value_dec(___nl__11, ___get_global_const(63)));
#line 522
c_rt_lib0copy(&___nl__12, ___nl__11);
#line 522
c_rt_lib0move(&___nl__12, c_rt_lib0priv_is(___nl__12, ___get_global_const(803)));
#line 522
c_rt_lib0move(&___nl__12, c_rt_lib0not(___nl__12));
#line 522
if(c_rt_lib0check_true_native(___nl__12)){ goto label_84;}
#line 523
c_rt_lib0copy(&___nl__13, ___nl__11);
#line 523
c_rt_lib0hash_set_value_dec(&___nl__4, ___get_global_const(63), ___nl__13);
#line 523
c_rt_lib0clear(&___nl__13);
#line 524
goto label_91;
#line 524
label_84:
#line 525
c_rt_lib0move(&___nl__13, ptd_system0cross_type(___nl__9, ___nl__11, ___ref___1, ___ref___3));
#line 525
c_rt_lib0copy(&___nl__14, ___nl__13);
#line 525
c_rt_lib0hash_set_value_dec(&___nl__4, ___get_global_const(63), ___nl__14);
#line 525
c_rt_lib0clear(&___nl__13);
#line 525
c_rt_lib0clear(&___nl__14);
#line 526
goto label_91;
#line 526
label_91:
#line 526
c_rt_lib0clear(&___nl__12);
#line 526
c_rt_lib0clear(&___nl__11);
#line 527
goto label_95;
#line 527
label_95:
#line 527
c_rt_lib0clear(&___nl__10);
#line 527
c_rt_lib0clear(&___nl__8);
#line 527
c_rt_lib0clear(&___nl__9);
#line 527
c_rt_lib0clear(&___nl__7);
#line 528
goto label_808;
#line 528
label_101:
#line 528
c_rt_lib0move(&___nl__7, c_rt_lib0priv_as(___nl__5, ___get_global_const(856)));
#line 529
c_rt_lib0move(&___nl__8, tct0sim());
#line 529
c_rt_lib0copy(&___nl__9, ___nl__8);
#line 529
c_rt_lib0hash_set_value_dec(&___nl__4, ___get_global_const(63), ___nl__9);
#line 529
c_rt_lib0clear(&___nl__8);
#line 529
c_rt_lib0clear(&___nl__9);
#line 529
c_rt_lib0clear(&___nl__7);
#line 530
goto label_808;
#line 530
label_110:
#line 531
c_rt_lib0move(&___nl__7, tct0empty());
#line 531
c_rt_lib0copy(&___nl__8, ___nl__7);
#line 531
c_rt_lib0hash_set_value_dec(&___nl__4, ___get_global_const(63), ___nl__8);
#line 531
c_rt_lib0clear(&___nl__7);
#line 531
c_rt_lib0clear(&___nl__8);
#line 532
goto label_808;
#line 532
label_117:
#line 532
c_rt_lib0move(&___nl__7, c_rt_lib0priv_as(___nl__5, ___get_global_const(855)));
#line 533
c_rt_lib0move(&___nl__8, type_checker_priv0check_val(___nl__7, ___ref___1, ___ref___2, ___ref___3));
#line 533
c_rt_lib0clear(&___nl__0);
#line 533
c_rt_lib0clear(&___nl__4);
#line 533
c_rt_lib0clear(&___nl__5);
#line 533
c_rt_lib0clear(&___nl__6);
#line 533
c_rt_lib0clear(&___nl__7);
#line 533
return ___nl__8;
#line 533
c_rt_lib0clear(&___nl__8);
#line 533
c_rt_lib0clear(&___nl__7);
#line 534
goto label_808;
#line 534
label_129:
#line 534
c_rt_lib0move(&___nl__7, c_rt_lib0priv_as(___nl__5, ___get_global_const(841)));
#line 535
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__7, ___get_global_const(93)));
#line 535
c_rt_lib0move(&___nl__9,___get_global_const(7));
#line 535
c_rt_lib0move(&___nl__8, c_rt_lib0eq(___nl__8, ___nl__9));
#line 535
c_rt_lib0clear(&___nl__9);
#line 535
if(c_rt_lib0check_true_native(___nl__8)){ goto label_140;}
#line 535
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__7, ___get_global_const(93)));
#line 535
c_rt_lib0move(&___nl__9,___get_global_const(8));
#line 535
c_rt_lib0move(&___nl__8, c_rt_lib0eq(___nl__8, ___nl__9));
#line 535
c_rt_lib0clear(&___nl__9);
#line 535
label_140:
#line 535
c_rt_lib0move(&___nl__8, c_rt_lib0not(___nl__8));
#line 535
if(c_rt_lib0check_true_native(___nl__8)){ goto label_155;}
#line 536
c_rt_lib0move(&___nl__9, tct0bool());
#line 536
c_rt_lib0copy(&___nl__10, ___nl__9);
#line 536
c_rt_lib0hash_set_value_dec(&___nl__4, ___get_global_const(63), ___nl__10);
#line 536
c_rt_lib0clear(&___nl__9);
#line 536
c_rt_lib0clear(&___nl__10);
#line 537
c_rt_lib0clear(&___nl__0);
#line 537
c_rt_lib0clear(&___nl__5);
#line 537
c_rt_lib0clear(&___nl__6);
#line 537
c_rt_lib0clear(&___nl__7);
#line 537
c_rt_lib0clear(&___nl__8);
#line 537
return ___nl__4;
#line 538
goto label_155;
#line 538
label_155:
#line 538
c_rt_lib0clear(&___nl__8);
#line 539
c_rt_lib0move(&___nl__8, c_rt_lib0hash_mk(0));
#line 540
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__7, ___get_global_const(849)));
#line 540
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__9, ___get_global_const(192)));
#line 540
c_rt_lib0move(&___nl__9, c_rt_lib0priv_is(___nl__9, ___get_global_const(831)));
#line 540
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__9));
#line 540
if(c_rt_lib0check_true_native(___nl__9)){ goto label_169;}
#line 541
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__7, ___get_global_const(93)));
#line 541
c_rt_lib0move(&___nl__11, tct0none());
#line 541
c_rt_lib0delete(hash0set_value(&___nl__8, ___nl__10, ___nl__11));
#line 541
c_rt_lib0clear(&___nl__11);
#line 541
c_rt_lib0clear(&___nl__10);
#line 542
goto label_185;
#line 542
label_169:
#line 543
c_rt_lib0move(&___nl__11, c_rt_lib0hash_get_value_dec(___nl__7, ___get_global_const(849)));
#line 543
c_rt_lib0move(&___nl__10, type_checker_priv0check_val(___nl__11, ___ref___1, ___ref___2, ___ref___3));
#line 543
c_rt_lib0clear(&___nl__11);
#line 544
c_rt_lib0move(&___nl__11, c_rt_lib0hash_get_value_dec(___nl__7, ___get_global_const(93)));
#line 544
c_rt_lib0move(&___nl__12, c_rt_lib0hash_get_value_dec(___nl__10, ___get_global_const(63)));
#line 544
c_rt_lib0delete(hash0set_value(&___nl__8, ___nl__11, ___nl__12));
#line 544
c_rt_lib0clear(&___nl__12);
#line 544
c_rt_lib0clear(&___nl__11);
#line 545
c_rt_lib0move(&___nl__11, c_rt_lib0hash_get_value_dec(___nl__10, ___get_global_const(43)));
#line 545
c_rt_lib0copy(&___nl__12, ___nl__11);
#line 545
c_rt_lib0hash_set_value_dec(&___nl__4, ___get_global_const(43), ___nl__12);
#line 545
c_rt_lib0clear(&___nl__11);
#line 545
c_rt_lib0clear(&___nl__12);
#line 545
c_rt_lib0clear(&___nl__10);
#line 546
goto label_185;
#line 546
label_185:
#line 546
c_rt_lib0clear(&___nl__9);
#line 547
c_rt_lib0move(&___nl__9, tct0var(___nl__8));
#line 547
c_rt_lib0copy(&___nl__10, ___nl__9);
#line 547
c_rt_lib0hash_set_value_dec(&___nl__4, ___get_global_const(63), ___nl__10);
#line 547
c_rt_lib0clear(&___nl__9);
#line 547
c_rt_lib0clear(&___nl__10);
#line 547
c_rt_lib0clear(&___nl__8);
#line 547
c_rt_lib0clear(&___nl__7);
#line 548
goto label_808;
#line 548
label_195:
#line 548
c_rt_lib0move(&___nl__7, c_rt_lib0priv_as(___nl__5, ___get_global_const(196)));
#line 549
c_rt_lib0move(&___nl__8, tct0sim());
#line 549
c_rt_lib0copy(&___nl__9, ___nl__8);
#line 549
c_rt_lib0hash_set_value_dec(&___nl__4, ___get_global_const(63), ___nl__9);
#line 549
c_rt_lib0clear(&___nl__8);
#line 549
c_rt_lib0clear(&___nl__9);
#line 549
c_rt_lib0clear(&___nl__7);
#line 550
goto label_808;
#line 550
label_204:
#line 550
c_rt_lib0move(&___nl__7, c_rt_lib0priv_as(___nl__5, ___get_global_const(204)));
#line 551
c_rt_lib0move(&___nl__8, array0len(___nl__7));
#line 551
c_rt_lib0move(&___nl__9,___get_global_const(0));
#line 551
c_rt_lib0move(&___nl__8, c_rt_lib0num_eq(___nl__8, ___nl__9));
#line 551
c_rt_lib0clear(&___nl__9);
#line 551
c_rt_lib0move(&___nl__8, c_rt_lib0not(___nl__8));
#line 551
if(c_rt_lib0check_true_native(___nl__8)){ goto label_226;}
#line 552
c_rt_lib0move(&___nl__10, tct0empty());
#line 552
c_rt_lib0move(&___nl__9, tct0arr(___nl__10));
#line 552
c_rt_lib0clear(&___nl__10);
#line 552
c_rt_lib0copy(&___nl__10, ___nl__9);
#line 552
c_rt_lib0hash_set_value_dec(&___nl__4, ___get_global_const(63), ___nl__10);
#line 552
c_rt_lib0clear(&___nl__9);
#line 552
c_rt_lib0clear(&___nl__10);
#line 553
c_rt_lib0clear(&___nl__0);
#line 553
c_rt_lib0clear(&___nl__5);
#line 553
c_rt_lib0clear(&___nl__6);
#line 553
c_rt_lib0clear(&___nl__7);
#line 553
c_rt_lib0clear(&___nl__8);
#line 553
return ___nl__4;
#line 554
goto label_226;
#line 554
label_226:
#line 554
c_rt_lib0clear(&___nl__8);
#line 555
c_rt_lib0move(&___nl__8, c_rt_lib0array_mk(0));
#line 556
c_rt_lib0move(&___nl__10,___get_global_const(0));
#line 556
c_rt_lib0move(&___nl__11,___get_global_const(1));
#line 556
c_rt_lib0move(&___nl__12, c_rt_lib0array_len(___nl__7));
#line 556
label_232:
#line 556
c_rt_lib0move(&___nl__13, c_rt_lib0ge(___nl__10, ___nl__12));
#line 556
if(c_rt_lib0check_true_native(___nl__13)){ goto label_241;}
#line 556
c_rt_lib0move(&___nl__9, c_rt_lib0array_get(___nl__7, ___nl__10));
#line 557
c_rt_lib0move(&___nl__14, type_checker_priv0check_val(___nl__9, ___ref___1, ___ref___2, ___ref___3));
#line 558
c_rt_lib0delete(array0push(&___nl__8, ___nl__14));
#line 558
c_rt_lib0clear(&___nl__14);
#line 559
c_rt_lib0move(&___nl__10, c_rt_lib0add_mod(___nl__10, ___nl__11));
#line 559
goto label_232;
#line 559
label_241:
#line 559
c_rt_lib0clear(&___nl__9);
#line 559
c_rt_lib0clear(&___nl__10);
#line 559
c_rt_lib0clear(&___nl__11);
#line 559
c_rt_lib0clear(&___nl__12);
#line 559
c_rt_lib0clear(&___nl__13);
#line 560
c_rt_lib0move(&___nl__10,___get_global_const(0));
#line 560
c_rt_lib0move(&___nl__9, c_rt_lib0array_get(___nl__8, ___nl__10));
#line 560
c_rt_lib0clear(&___nl__10);
#line 560
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__9, ___get_global_const(63)));
#line 561
c_rt_lib0move(&___nl__10,___get_global_const(1));
#line 561
label_252:
#line 561
c_rt_lib0move(&___nl__11, array0len(___nl__8));
#line 561
c_rt_lib0move(&___nl__11, c_rt_lib0lt(___nl__10, ___nl__11));
#line 561
c_rt_lib0move(&___nl__11, c_rt_lib0not(___nl__11));
#line 561
if(c_rt_lib0check_true_native(___nl__11)){ goto label_267;}
#line 562
c_rt_lib0move(&___nl__13, c_rt_lib0array_get(___nl__8, ___nl__10));
#line 562
c_rt_lib0move(&___nl__13, c_rt_lib0hash_get_value_dec(___nl__13, ___get_global_const(63)));
#line 562
c_rt_lib0move(&___nl__12, ptd_system0cross_type(___nl__9, ___nl__13, ___ref___1, ___ref___3));
#line 562
c_rt_lib0clear(&___nl__13);
#line 562
c_rt_lib0copy(&___nl__9, ___nl__12);
#line 562
c_rt_lib0clear(&___nl__12);
#line 561
c_rt_lib0move(&___nl__12,___get_global_const(1));
#line 561
c_rt_lib0move(&___nl__10, c_rt_lib0add_mod(___nl__10, ___nl__12));
#line 561
c_rt_lib0clear(&___nl__12);
#line 563
goto label_252;
#line 563
label_267:
#line 563
c_rt_lib0clear(&___nl__10);
#line 563
c_rt_lib0clear(&___nl__11);
#line 564
c_rt_lib0move(&___nl__10, tct0arr(___nl__9));
#line 564
c_rt_lib0copy(&___nl__11, ___nl__10);
#line 564
c_rt_lib0hash_set_value_dec(&___nl__4, ___get_global_const(63), ___nl__11);
#line 564
c_rt_lib0clear(&___nl__10);
#line 564
c_rt_lib0clear(&___nl__11);
#line 564
c_rt_lib0clear(&___nl__8);
#line 564
c_rt_lib0clear(&___nl__9);
#line 564
c_rt_lib0clear(&___nl__7);
#line 565
goto label_808;
#line 565
label_279:
#line 565
c_rt_lib0move(&___nl__7, c_rt_lib0priv_as(___nl__5, ___get_global_const(205)));
#line 566
c_rt_lib0move(&___nl__8, c_rt_lib0hash_mk(0));
#line 567
c_rt_lib0move(&___nl__10,___get_global_const(0));
#line 567
c_rt_lib0move(&___nl__11,___get_global_const(1));
#line 567
c_rt_lib0move(&___nl__12, c_rt_lib0array_len(___nl__7));
#line 567
label_285:
#line 567
c_rt_lib0move(&___nl__13, c_rt_lib0ge(___nl__10, ___nl__12));
#line 567
if(c_rt_lib0check_true_native(___nl__13)){ goto label_300;}
#line 567
c_rt_lib0move(&___nl__9, c_rt_lib0array_get(___nl__7, ___nl__10));
#line 568
c_rt_lib0move(&___nl__14, c_rt_lib0hash_get_value_dec(___nl__9, ___get_global_const(329)));
#line 568
c_rt_lib0move(&___nl__14, c_rt_lib0hash_get_value_dec(___nl__14, ___get_global_const(192)));
#line 568
c_rt_lib0move(&___nl__14, c_rt_lib0priv_as(___nl__14, ___get_global_const(856)));
#line 569
c_rt_lib0move(&___nl__16, c_rt_lib0hash_get_value_dec(___nl__9, ___get_global_const(198)));
#line 569
c_rt_lib0move(&___nl__15, type_checker_priv0check_val(___nl__16, ___ref___1, ___ref___2, ___ref___3));
#line 569
c_rt_lib0clear(&___nl__16);
#line 570
c_rt_lib0delete(hash0set_value(&___nl__8, ___nl__14, ___nl__15));
#line 570
c_rt_lib0clear(&___nl__14);
#line 570
c_rt_lib0clear(&___nl__15);
#line 571
c_rt_lib0move(&___nl__10, c_rt_lib0add_mod(___nl__10, ___nl__11));
#line 571
goto label_285;
#line 571
label_300:
#line 571
c_rt_lib0clear(&___nl__9);
#line 571
c_rt_lib0clear(&___nl__10);
#line 571
c_rt_lib0clear(&___nl__11);
#line 571
c_rt_lib0clear(&___nl__12);
#line 571
c_rt_lib0clear(&___nl__13);
#line 572
c_rt_lib0move(&___nl__9, c_rt_lib0hash_mk(0));
#line 573
c_rt_lib0move(&___nl__12, c_rt_lib0init_iter(___nl__8));
#line 573
label_308:
#line 573
c_rt_lib0move(&___nl__10, c_rt_lib0is_end_hash(___nl__12));
#line 573
if(c_rt_lib0check_true_native(___nl__10)){ goto label_318;}
#line 573
c_rt_lib0move(&___nl__10, c_rt_lib0get_key_iter(___nl__12));
#line 573
c_rt_lib0move(&___nl__11, c_rt_lib0hash_get_value(___nl__8, ___nl__10));
#line 574
c_rt_lib0move(&___nl__13, c_rt_lib0hash_get_value_dec(___nl__11, ___get_global_const(63)));
#line 574
c_rt_lib0delete(hash0set_value(&___nl__9, ___nl__10, ___nl__13));
#line 574
c_rt_lib0clear(&___nl__13);
#line 575
c_rt_lib0move(&___nl__12, c_rt_lib0next_iter(___nl__12));
#line 575
goto label_308;
#line 575
label_318:
#line 575
c_rt_lib0clear(&___nl__10);
#line 575
c_rt_lib0clear(&___nl__11);
#line 575
c_rt_lib0clear(&___nl__12);
#line 576
c_rt_lib0move(&___nl__10, tct0rec(___nl__9));
#line 576
c_rt_lib0copy(&___nl__11, ___nl__10);
#line 576
c_rt_lib0hash_set_value_dec(&___nl__4, ___get_global_const(63), ___nl__11);
#line 576
c_rt_lib0clear(&___nl__10);
#line 576
c_rt_lib0clear(&___nl__11);
#line 576
c_rt_lib0clear(&___nl__8);
#line 576
c_rt_lib0clear(&___nl__9);
#line 576
c_rt_lib0clear(&___nl__7);
#line 577
goto label_808;
#line 577
label_331:
#line 577
c_rt_lib0move(&___nl__7, c_rt_lib0priv_as(___nl__5, ___get_global_const(849)));
#line 578
c_rt_lib0move(&___nl__8, hash0has_key(*___ref___2, ___nl__7));
#line 578
c_rt_lib0move(&___nl__8, c_rt_lib0not(___nl__8));
#line 578
c_rt_lib0move(&___nl__8, c_rt_lib0not(___nl__8));
#line 578
if(c_rt_lib0check_true_native(___nl__8)){ goto label_351;}
#line 579
c_rt_lib0move(&___nl__9,___get_global_const(1194));
#line 579
c_rt_lib0move(&___nl__9, c_rt_lib0concat_add(___nl__9, ___nl__7));
#line 579
c_rt_lib0move(&___nl__10,___get_global_const(1095));
#line 579
c_rt_lib0move(&___nl__9, c_rt_lib0concat_add(___nl__9, ___nl__10));
#line 579
c_rt_lib0clear(&___nl__10);
#line 579
c_rt_lib0delete(type_checker_priv0add_error(___ref___3, ___nl__9));
#line 579
c_rt_lib0clear(&___nl__9);
#line 580
c_rt_lib0clear(&___nl__0);
#line 580
c_rt_lib0clear(&___nl__5);
#line 580
c_rt_lib0clear(&___nl__6);
#line 580
c_rt_lib0clear(&___nl__7);
#line 580
c_rt_lib0clear(&___nl__8);
#line 580
return ___nl__4;
#line 581
goto label_351;
#line 581
label_351:
#line 581
c_rt_lib0clear(&___nl__8);
#line 582
c_rt_lib0move(&___nl__8, hash0get_value(*___ref___2, ___nl__7));
#line 583
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__8, ___get_global_const(1139)));
#line 583
c_rt_lib0move(&___nl__10, c_rt_lib0priv_is(___nl__9, ___get_global_const(45)));
#line 583
if(c_rt_lib0check_true_native(___nl__10)){ goto label_362;}
#line 585
c_rt_lib0move(&___nl__10, c_rt_lib0priv_is(___nl__9, ___get_global_const(46)));
#line 585
if(c_rt_lib0check_true_native(___nl__10)){ goto label_379;}
#line 585
c_rt_lib0move(&___nl__10,___get_global_const(91));
#line 585
c_rt_lib0move(&___nl__10, c_rt_lib0array_mk(2, ___nl__10, ___nl__9));
#line 585
nl_die_arg(___nl__10);
#line 583
label_362:
#line 584
c_rt_lib0move(&___nl__12, c_rt_lib0hash_get_value_dec(___nl__8, ___get_global_const(63)));
#line 584
c_rt_lib0move(&___nl__13, c_rt_lib0ov_mk_none(___get_global_const(1085)));
#line 584
c_rt_lib0move(&___nl__11, c_rt_lib0hash_mk(2, ___get_global_const(63), ___nl__12, ___get_global_const(43), ___nl__13));
#line 584
c_rt_lib0clear(&___nl__12);
#line 584
c_rt_lib0clear(&___nl__13);
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
c_rt_lib0clear(&___nl__8);
#line 584
c_rt_lib0clear(&___nl__9);
#line 584
c_rt_lib0clear(&___nl__10);
#line 584
return ___nl__11;
#line 584
c_rt_lib0clear(&___nl__11);
#line 585
goto label_396;
#line 585
label_379:
#line 586
c_rt_lib0move(&___nl__12, c_rt_lib0hash_get_value_dec(___nl__8, ___get_global_const(63)));
#line 586
c_rt_lib0move(&___nl__13, c_rt_lib0ov_mk_none(___get_global_const(1079)));
#line 586
c_rt_lib0move(&___nl__11, c_rt_lib0hash_mk(2, ___get_global_const(63), ___nl__12, ___get_global_const(43), ___nl__13));
#line 586
c_rt_lib0clear(&___nl__12);
#line 586
c_rt_lib0clear(&___nl__13);
#line 586
c_rt_lib0clear(&___nl__0);
#line 586
c_rt_lib0clear(&___nl__4);
#line 586
c_rt_lib0clear(&___nl__5);
#line 586
c_rt_lib0clear(&___nl__6);
#line 586
c_rt_lib0clear(&___nl__7);
#line 586
c_rt_lib0clear(&___nl__8);
#line 586
c_rt_lib0clear(&___nl__9);
#line 586
c_rt_lib0clear(&___nl__10);
#line 586
return ___nl__11;
#line 586
c_rt_lib0clear(&___nl__11);
#line 587
goto label_396;
#line 587
label_396:
#line 587
c_rt_lib0clear(&___nl__9);
#line 587
c_rt_lib0clear(&___nl__10);
#line 587
c_rt_lib0clear(&___nl__8);
#line 587
c_rt_lib0clear(&___nl__7);
#line 588
goto label_808;
#line 588
label_402:
#line 588
c_rt_lib0move(&___nl__7, c_rt_lib0priv_as(___nl__5, ___get_global_const(208)));
#line 589
c_rt_lib0move(&___nl__8, type_checker_priv0get_type_from_bin_op_and_check(___nl__7, ___ref___1, ___ref___2, ___ref___3));
#line 589
c_rt_lib0clear(&___nl__0);
#line 589
c_rt_lib0clear(&___nl__4);
#line 589
c_rt_lib0clear(&___nl__5);
#line 589
c_rt_lib0clear(&___nl__6);
#line 589
c_rt_lib0clear(&___nl__7);
#line 589
return ___nl__8;
#line 589
c_rt_lib0clear(&___nl__8);
#line 589
c_rt_lib0clear(&___nl__7);
#line 590
goto label_808;
#line 590
label_414:
#line 590
c_rt_lib0move(&___nl__7, c_rt_lib0priv_as(___nl__5, ___get_global_const(857)));
#line 591
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__7, ___get_global_const(230)));
#line 591
c_rt_lib0move(&___nl__9, type_checker_priv0check_val(___nl__10, ___ref___1, ___ref___2, ___ref___3));
#line 591
c_rt_lib0clear(&___nl__10);
#line 591
c_rt_lib0move(&___nl__8, ptd_system0can_delete(___nl__9, ___ref___1, ___ref___3));
#line 591
c_rt_lib0clear(&___nl__9);
#line 594
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__7, ___get_global_const(443)));
#line 594
c_rt_lib0move(&___nl__11, c_rt_lib0priv_is(___nl__10, ___get_global_const(209)));
#line 594
if(c_rt_lib0check_true_native(___nl__11)){ goto label_429;}
#line 596
c_rt_lib0move(&___nl__11, c_rt_lib0priv_is(___nl__10, ___get_global_const(210)));
#line 596
if(c_rt_lib0check_true_native(___nl__11)){ goto label_438;}
#line 596
c_rt_lib0move(&___nl__11,___get_global_const(91));
#line 596
c_rt_lib0move(&___nl__11, c_rt_lib0array_mk(2, ___nl__11, ___nl__10));
#line 596
nl_die_arg(___nl__11);
#line 594
label_429:
#line 595
c_rt_lib0move(&___nl__13, tct0bool());
#line 595
c_rt_lib0move(&___nl__14, c_rt_lib0ov_mk_none(___get_global_const(1085)));
#line 595
c_rt_lib0move(&___nl__12, c_rt_lib0hash_mk(2, ___get_global_const(63), ___nl__13, ___get_global_const(43), ___nl__14));
#line 595
c_rt_lib0clear(&___nl__13);
#line 595
c_rt_lib0clear(&___nl__14);
#line 595
c_rt_lib0copy(&___nl__9, ___nl__12);
#line 595
c_rt_lib0clear(&___nl__12);
#line 596
goto label_447;
#line 596
label_438:
#line 597
c_rt_lib0move(&___nl__13, tct0tct_im());
#line 597
c_rt_lib0move(&___nl__14, c_rt_lib0hash_get_value_dec(___nl__8, ___get_global_const(43)));
#line 597
c_rt_lib0move(&___nl__12, c_rt_lib0hash_mk(2, ___get_global_const(63), ___nl__13, ___get_global_const(43), ___nl__14));
#line 597
c_rt_lib0clear(&___nl__13);
#line 597
c_rt_lib0clear(&___nl__14);
#line 597
c_rt_lib0copy(&___nl__9, ___nl__12);
#line 597
c_rt_lib0clear(&___nl__12);
#line 598
goto label_447;
#line 598
label_447:
#line 598
c_rt_lib0clear(&___nl__10);
#line 598
c_rt_lib0clear(&___nl__11);
#line 599
c_rt_lib0move(&___nl__12, c_rt_lib0hash_mk(0));
#line 599
c_rt_lib0move(&___nl__11, tct0var(___nl__12));
#line 599
c_rt_lib0clear(&___nl__12);
#line 599
c_rt_lib0move(&___nl__10, ptd_system0is_accepted(___nl__8, ___nl__11, ___ref___1, ___ref___3));
#line 599
c_rt_lib0clear(&___nl__11);
#line 599
c_rt_lib0move(&___nl__10, c_rt_lib0not(___nl__10));
#line 599
if(c_rt_lib0check_true_native(___nl__10)){ goto label_571;}
#line 600
c_rt_lib0move(&___nl__11, c_rt_lib0hash_get_value_dec(___nl__8, ___get_global_const(63)));
#line 600
c_rt_lib0move(&___nl__11, c_rt_lib0priv_is(___nl__11, ___get_global_const(805)));
#line 600
c_rt_lib0move(&___nl__11, c_rt_lib0not(___nl__11));
#line 600
c_rt_lib0move(&___nl__11, c_rt_lib0not(___nl__11));
#line 600
if(c_rt_lib0check_true_native(___nl__11)){ goto label_472;}
#line 600
c_rt_lib0clear(&___nl__0);
#line 600
c_rt_lib0clear(&___nl__4);
#line 600
c_rt_lib0clear(&___nl__5);
#line 600
c_rt_lib0clear(&___nl__6);
#line 600
c_rt_lib0clear(&___nl__7);
#line 600
c_rt_lib0clear(&___nl__8);
#line 600
c_rt_lib0clear(&___nl__10);
#line 600
c_rt_lib0clear(&___nl__11);
#line 600
return ___nl__9;
#line 600
goto label_472;
#line 600
label_472:
#line 600
c_rt_lib0clear(&___nl__11);
#line 601
c_rt_lib0move(&___nl__11, c_rt_lib0hash_get_value_dec(___nl__8, ___get_global_const(63)));
#line 601
c_rt_lib0move(&___nl__11, c_rt_lib0priv_as(___nl__11, ___get_global_const(805)));
#line 602
c_rt_lib0move(&___nl__13, c_rt_lib0hash_get_value_dec(___nl__7, ___get_global_const(902)));
#line 602
c_rt_lib0move(&___nl__12, hash0has_key(___nl__11, ___nl__13));
#line 602
c_rt_lib0clear(&___nl__13);
#line 602
c_rt_lib0move(&___nl__12, c_rt_lib0not(___nl__12));
#line 602
c_rt_lib0move(&___nl__12, c_rt_lib0not(___nl__12));
#line 602
if(c_rt_lib0check_true_native(___nl__12)){ goto label_507;}
#line 603
c_rt_lib0move(&___nl__13,___get_global_const(416));
#line 603
c_rt_lib0move(&___nl__14, c_rt_lib0hash_get_value_dec(___nl__7, ___get_global_const(902)));
#line 603
c_rt_lib0move(&___nl__13, c_rt_lib0concat_add(___nl__13, ___nl__14));
#line 603
c_rt_lib0clear(&___nl__14);
#line 603
c_rt_lib0move(&___nl__14,___get_global_const(1195));
#line 603
c_rt_lib0move(&___nl__13, c_rt_lib0concat_add(___nl__13, ___nl__14));
#line 603
c_rt_lib0clear(&___nl__14);
#line 604
c_rt_lib0move(&___nl__15, c_rt_lib0hash_get_value_dec(___nl__8, ___get_global_const(63)));
#line 604
c_rt_lib0move(&___nl__14, type_checker_priv0get_print_tct_type_name(___nl__15));
#line 604
c_rt_lib0clear(&___nl__15);
#line 604
c_rt_lib0move(&___nl__13, c_rt_lib0concat_add(___nl__13, ___nl__14));
#line 604
c_rt_lib0clear(&___nl__14);
#line 604
c_rt_lib0delete(type_checker_priv0add_error(___ref___3, ___nl__13));
#line 604
c_rt_lib0clear(&___nl__13);
#line 605
c_rt_lib0clear(&___nl__0);
#line 605
c_rt_lib0clear(&___nl__4);
#line 605
c_rt_lib0clear(&___nl__5);
#line 605
c_rt_lib0clear(&___nl__6);
#line 605
c_rt_lib0clear(&___nl__7);
#line 605
c_rt_lib0clear(&___nl__8);
#line 605
c_rt_lib0clear(&___nl__10);
#line 605
c_rt_lib0clear(&___nl__11);
#line 605
c_rt_lib0clear(&___nl__12);
#line 605
return ___nl__9;
#line 606
goto label_507;
#line 606
label_507:
#line 606
c_rt_lib0clear(&___nl__12);
#line 607
c_rt_lib0move(&___nl__12, c_rt_lib0hash_get_value_dec(___nl__7, ___get_global_const(443)));
#line 607
c_rt_lib0move(&___nl__13, c_rt_lib0priv_is(___nl__12, ___get_global_const(209)));
#line 607
if(c_rt_lib0check_true_native(___nl__13)){ goto label_517;}
#line 608
c_rt_lib0move(&___nl__13, c_rt_lib0priv_is(___nl__12, ___get_global_const(210)));
#line 608
if(c_rt_lib0check_true_native(___nl__13)){ goto label_519;}
#line 608
c_rt_lib0move(&___nl__13,___get_global_const(91));
#line 608
c_rt_lib0move(&___nl__13, c_rt_lib0array_mk(2, ___nl__13, ___nl__12));
#line 608
nl_die_arg(___nl__13);
#line 607
label_517:
#line 608
goto label_557;
#line 608
label_519:
#line 609
c_rt_lib0move(&___nl__15, c_rt_lib0hash_get_value_dec(___nl__7, ___get_global_const(902)));
#line 609
c_rt_lib0move(&___nl__14, hash0get_value(___nl__11, ___nl__15));
#line 609
c_rt_lib0clear(&___nl__15);
#line 610
c_rt_lib0move(&___nl__15, c_rt_lib0priv_is(___nl__14, ___get_global_const(810)));
#line 610
if(c_rt_lib0check_true_native(___nl__15)){ goto label_530;}
#line 612
c_rt_lib0move(&___nl__15, c_rt_lib0priv_is(___nl__14, ___get_global_const(809)));
#line 612
if(c_rt_lib0check_true_native(___nl__15)){ goto label_537;}
#line 612
c_rt_lib0move(&___nl__15,___get_global_const(91));
#line 612
c_rt_lib0move(&___nl__15, c_rt_lib0array_mk(2, ___nl__15, ___nl__14));
#line 612
nl_die_arg(___nl__15);
#line 610
label_530:
#line 610
c_rt_lib0move(&___nl__16, c_rt_lib0priv_as(___nl__14, ___get_global_const(810)));
#line 611
c_rt_lib0copy(&___nl__17, ___nl__16);
#line 611
c_rt_lib0hash_set_value_dec(&___nl__9, ___get_global_const(63), ___nl__17);
#line 611
c_rt_lib0clear(&___nl__17);
#line 611
c_rt_lib0clear(&___nl__16);
#line 612
goto label_553;
#line 612
label_537:
#line 613
c_rt_lib0move(&___nl__16,___get_global_const(416));
#line 613
c_rt_lib0move(&___nl__17, c_rt_lib0hash_get_value_dec(___nl__7, ___get_global_const(902)));
#line 613
c_rt_lib0move(&___nl__16, c_rt_lib0concat_add(___nl__16, ___nl__17));
#line 613
c_rt_lib0clear(&___nl__17);
#line 613
c_rt_lib0move(&___nl__17,___get_global_const(1196));
#line 613
c_rt_lib0move(&___nl__16, c_rt_lib0concat_add(___nl__16, ___nl__17));
#line 613
c_rt_lib0clear(&___nl__17);
#line 614
c_rt_lib0move(&___nl__18, c_rt_lib0hash_get_value_dec(___nl__8, ___get_global_const(63)));
#line 614
c_rt_lib0move(&___nl__17, type_checker_priv0get_print_tct_type_name(___nl__18));
#line 614
c_rt_lib0clear(&___nl__18);
#line 614
c_rt_lib0move(&___nl__16, c_rt_lib0concat_add(___nl__16, ___nl__17));
#line 614
c_rt_lib0clear(&___nl__17);
#line 614
c_rt_lib0delete(type_checker_priv0add_error(___ref___3, ___nl__16));
#line 614
c_rt_lib0clear(&___nl__16);
#line 615
goto label_553;
#line 615
label_553:
#line 615
c_rt_lib0clear(&___nl__15);
#line 615
c_rt_lib0clear(&___nl__14);
#line 616
goto label_557;
#line 616
label_557:
#line 616
c_rt_lib0clear(&___nl__12);
#line 616
c_rt_lib0clear(&___nl__13);
#line 617
c_rt_lib0clear(&___nl__0);
#line 617
c_rt_lib0clear(&___nl__4);
#line 617
c_rt_lib0clear(&___nl__5);
#line 617
c_rt_lib0clear(&___nl__6);
#line 617
c_rt_lib0clear(&___nl__7);
#line 617
c_rt_lib0clear(&___nl__8);
#line 617
c_rt_lib0clear(&___nl__10);
#line 617
c_rt_lib0clear(&___nl__11);
#line 617
return ___nl__9;
#line 617
c_rt_lib0clear(&___nl__11);
#line 618
goto label_589;
#line 618
label_571:
#line 619
c_rt_lib0move(&___nl__11,___get_global_const(1197));
#line 620
c_rt_lib0move(&___nl__13, c_rt_lib0hash_get_value_dec(___nl__8, ___get_global_const(63)));
#line 620
c_rt_lib0move(&___nl__12, type_checker_priv0get_print_tct_type_name(___nl__13));
#line 620
c_rt_lib0clear(&___nl__13);
#line 620
c_rt_lib0move(&___nl__11, c_rt_lib0concat_add(___nl__11, ___nl__12));
#line 620
c_rt_lib0clear(&___nl__12);
#line 620
c_rt_lib0delete(type_checker_priv0add_error(___ref___3, ___nl__11));
#line 620
c_rt_lib0clear(&___nl__11);
#line 621
c_rt_lib0clear(&___nl__0);
#line 621
c_rt_lib0clear(&___nl__4);
#line 621
c_rt_lib0clear(&___nl__5);
#line 621
c_rt_lib0clear(&___nl__6);
#line 621
c_rt_lib0clear(&___nl__7);
#line 621
c_rt_lib0clear(&___nl__8);
#line 621
c_rt_lib0clear(&___nl__10);
#line 621
return ___nl__9;
#line 622
goto label_589;
#line 622
label_589:
#line 622
c_rt_lib0clear(&___nl__10);
#line 622
c_rt_lib0clear(&___nl__8);
#line 622
c_rt_lib0clear(&___nl__9);
#line 622
c_rt_lib0clear(&___nl__7);
#line 623
goto label_808;
#line 623
label_595:
#line 623
c_rt_lib0move(&___nl__7, c_rt_lib0priv_as(___nl__5, ___get_global_const(858)));
#line 624
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__7, ___get_global_const(198)));
#line 624
c_rt_lib0move(&___nl__8, type_checker_priv0check_val(___nl__9, ___ref___1, ___ref___2, ___ref___3));
#line 624
c_rt_lib0clear(&___nl__9);
#line 625
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__7, ___get_global_const(443)));
#line 625
c_rt_lib0move(&___nl__10,___get_global_const(294));
#line 625
c_rt_lib0move(&___nl__9, c_rt_lib0eq(___nl__9, ___nl__10));
#line 625
c_rt_lib0clear(&___nl__10);
#line 625
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__9));
#line 625
if(c_rt_lib0check_true_native(___nl__9)){ goto label_634;}
#line 626
c_rt_lib0move(&___nl__10, ptd_system0is_condition_type(___nl__8, ___ref___1, ___ref___3));
#line 626
c_rt_lib0move(&___nl__10, c_rt_lib0not(___nl__10));
#line 626
c_rt_lib0move(&___nl__10, c_rt_lib0not(___nl__10));
#line 626
if(c_rt_lib0check_true_native(___nl__10)){ goto label_619;}
#line 627
c_rt_lib0move(&___nl__11,___get_global_const(1198));
#line 628
c_rt_lib0move(&___nl__13, c_rt_lib0hash_get_value_dec(___nl__8, ___get_global_const(63)));
#line 628
c_rt_lib0move(&___nl__12, type_checker_priv0get_print_tct_type_name(___nl__13));
#line 628
c_rt_lib0clear(&___nl__13);
#line 628
c_rt_lib0move(&___nl__11, c_rt_lib0concat_add(___nl__11, ___nl__12));
#line 628
c_rt_lib0clear(&___nl__12);
#line 628
c_rt_lib0delete(type_checker_priv0add_error(___ref___3, ___nl__11));
#line 628
c_rt_lib0clear(&___nl__11);
#line 629
goto label_619;
#line 629
label_619:
#line 629
c_rt_lib0clear(&___nl__10);
#line 630
c_rt_lib0move(&___nl__10, tct0bool());
#line 630
c_rt_lib0copy(&___nl__11, ___nl__10);
#line 630
c_rt_lib0hash_set_value_dec(&___nl__4, ___get_global_const(63), ___nl__11);
#line 630
c_rt_lib0clear(&___nl__10);
#line 630
c_rt_lib0clear(&___nl__11);
#line 631
c_rt_lib0clear(&___nl__0);
#line 631
c_rt_lib0clear(&___nl__5);
#line 631
c_rt_lib0clear(&___nl__6);
#line 631
c_rt_lib0clear(&___nl__7);
#line 631
c_rt_lib0clear(&___nl__8);
#line 631
c_rt_lib0clear(&___nl__9);
#line 631
return ___nl__4;
#line 632
goto label_740;
#line 632
label_634:
#line 632
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__7, ___get_global_const(443)));
#line 632
c_rt_lib0move(&___nl__10,___get_global_const(267));
#line 632
c_rt_lib0move(&___nl__9, c_rt_lib0eq(___nl__9, ___nl__10));
#line 632
c_rt_lib0clear(&___nl__10);
#line 632
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__9));
#line 632
if(c_rt_lib0check_true_native(___nl__9)){ goto label_681;}
#line 633
c_rt_lib0move(&___nl__11, tct0func());
#line 633
c_rt_lib0move(&___nl__10, ptd_system0is_accepted(___nl__8, ___nl__11, ___ref___1, ___ref___3));
#line 633
c_rt_lib0clear(&___nl__11);
#line 633
c_rt_lib0move(&___nl__10, c_rt_lib0not(___nl__10));
#line 633
c_rt_lib0move(&___nl__10, c_rt_lib0not(___nl__10));
#line 633
if(c_rt_lib0check_true_native(___nl__10)){ goto label_662;}
#line 634
c_rt_lib0move(&___nl__11,___get_global_const(1199));
#line 634
c_rt_lib0move(&___nl__12, c_rt_lib0hash_get_value_dec(___nl__7, ___get_global_const(443)));
#line 634
c_rt_lib0move(&___nl__11, c_rt_lib0concat_add(___nl__11, ___nl__12));
#line 634
c_rt_lib0clear(&___nl__12);
#line 634
c_rt_lib0move(&___nl__12,___get_global_const(1200));
#line 634
c_rt_lib0move(&___nl__11, c_rt_lib0concat_add(___nl__11, ___nl__12));
#line 634
c_rt_lib0clear(&___nl__12);
#line 635
c_rt_lib0move(&___nl__13, c_rt_lib0hash_get_value_dec(___nl__8, ___get_global_const(63)));
#line 635
c_rt_lib0move(&___nl__12, type_checker_priv0get_print_tct_type_name(___nl__13));
#line 635
c_rt_lib0clear(&___nl__13);
#line 635
c_rt_lib0move(&___nl__11, c_rt_lib0concat_add(___nl__11, ___nl__12));
#line 635
c_rt_lib0clear(&___nl__12);
#line 635
c_rt_lib0delete(type_checker_priv0add_error(___ref___3, ___nl__11));
#line 635
c_rt_lib0clear(&___nl__11);
#line 636
goto label_662;
#line 636
label_662:
#line 636
c_rt_lib0clear(&___nl__10);
#line 637
c_rt_lib0move(&___nl__12, tct0func());
#line 637
c_rt_lib0move(&___nl__11, c_rt_lib0hash_mk(1, ___get_global_const(5), ___nl__12));
#line 637
c_rt_lib0clear(&___nl__12);
#line 637
c_rt_lib0move(&___nl__10, tct0var(___nl__11));
#line 637
c_rt_lib0clear(&___nl__11);
#line 637
c_rt_lib0copy(&___nl__11, ___nl__10);
#line 637
c_rt_lib0hash_set_value_dec(&___nl__4, ___get_global_const(63), ___nl__11);
#line 637
c_rt_lib0clear(&___nl__10);
#line 637
c_rt_lib0clear(&___nl__11);
#line 638
c_rt_lib0clear(&___nl__0);
#line 638
c_rt_lib0clear(&___nl__5);
#line 638
c_rt_lib0clear(&___nl__6);
#line 638
c_rt_lib0clear(&___nl__7);
#line 638
c_rt_lib0clear(&___nl__8);
#line 638
c_rt_lib0clear(&___nl__9);
#line 638
return ___nl__4;
#line 639
goto label_740;
#line 639
label_681:
#line 639
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__7, ___get_global_const(443)));
#line 639
c_rt_lib0move(&___nl__10,___get_global_const(165));
#line 639
c_rt_lib0move(&___nl__9, c_rt_lib0eq(___nl__9, ___nl__10));
#line 639
c_rt_lib0clear(&___nl__10);
#line 639
if(c_rt_lib0check_true_native(___nl__9)){ goto label_691;}
#line 639
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__7, ___get_global_const(443)));
#line 639
c_rt_lib0move(&___nl__10,___get_global_const(880));
#line 639
c_rt_lib0move(&___nl__9, c_rt_lib0eq(___nl__9, ___nl__10));
#line 639
c_rt_lib0clear(&___nl__10);
#line 639
label_691:
#line 639
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__9));
#line 639
if(c_rt_lib0check_true_native(___nl__9)){ goto label_715;}
#line 640
c_rt_lib0move(&___nl__11, c_rt_lib0hash_get_value_dec(___nl__7, ___get_global_const(198)));
#line 640
c_rt_lib0move(&___nl__12,___get_global_const(1199));
#line 640
c_rt_lib0move(&___nl__13, c_rt_lib0hash_get_value_dec(___nl__7, ___get_global_const(443)));
#line 640
c_rt_lib0move(&___nl__12, c_rt_lib0concat_add(___nl__12, ___nl__13));
#line 640
c_rt_lib0clear(&___nl__13);
#line 640
c_rt_lib0move(&___nl__13,___get_global_const(1200));
#line 640
c_rt_lib0move(&___nl__12, c_rt_lib0concat_add(___nl__12, ___nl__13));
#line 640
c_rt_lib0clear(&___nl__13);
#line 640
c_rt_lib0move(&___nl__10, type_checker_priv0unary_op_dec_inc(___nl__11, ___nl__12, ___ref___1, ___ref___2, ___ref___3));
#line 640
c_rt_lib0clear(&___nl__12);
#line 640
c_rt_lib0clear(&___nl__11);
#line 640
c_rt_lib0clear(&___nl__0);
#line 640
c_rt_lib0clear(&___nl__4);
#line 640
c_rt_lib0clear(&___nl__5);
#line 640
c_rt_lib0clear(&___nl__6);
#line 640
c_rt_lib0clear(&___nl__7);
#line 640
c_rt_lib0clear(&___nl__8);
#line 640
c_rt_lib0clear(&___nl__9);
#line 640
return ___nl__10;
#line 640
c_rt_lib0clear(&___nl__10);
#line 642
goto label_740;
#line 642
label_715:
#line 643
c_rt_lib0move(&___nl__11, tct0sim());
#line 643
c_rt_lib0move(&___nl__10, ptd_system0is_accepted(___nl__8, ___nl__11, ___ref___1, ___ref___3));
#line 643
c_rt_lib0clear(&___nl__11);
#line 643
c_rt_lib0move(&___nl__10, c_rt_lib0not(___nl__10));
#line 643
c_rt_lib0move(&___nl__10, c_rt_lib0not(___nl__10));
#line 643
if(c_rt_lib0check_true_native(___nl__10)){ goto label_737;}
#line 644
c_rt_lib0move(&___nl__11,___get_global_const(1199));
#line 644
c_rt_lib0move(&___nl__12, c_rt_lib0hash_get_value_dec(___nl__7, ___get_global_const(443)));
#line 644
c_rt_lib0move(&___nl__11, c_rt_lib0concat_add(___nl__11, ___nl__12));
#line 644
c_rt_lib0clear(&___nl__12);
#line 644
c_rt_lib0move(&___nl__12,___get_global_const(1200));
#line 644
c_rt_lib0move(&___nl__11, c_rt_lib0concat_add(___nl__11, ___nl__12));
#line 644
c_rt_lib0clear(&___nl__12);
#line 645
c_rt_lib0move(&___nl__13, c_rt_lib0hash_get_value_dec(___nl__8, ___get_global_const(63)));
#line 645
c_rt_lib0move(&___nl__12, type_checker_priv0get_print_tct_type_name(___nl__13));
#line 645
c_rt_lib0clear(&___nl__13);
#line 645
c_rt_lib0move(&___nl__11, c_rt_lib0concat_add(___nl__11, ___nl__12));
#line 645
c_rt_lib0clear(&___nl__12);
#line 645
c_rt_lib0delete(type_checker_priv0add_error(___ref___3, ___nl__11));
#line 645
c_rt_lib0clear(&___nl__11);
#line 646
goto label_737;
#line 646
label_737:
#line 646
c_rt_lib0clear(&___nl__10);
#line 647
goto label_740;
#line 647
label_740:
#line 647
c_rt_lib0clear(&___nl__9);
#line 648
c_rt_lib0move(&___nl__9, tct0sim());
#line 648
c_rt_lib0copy(&___nl__10, ___nl__9);
#line 648
c_rt_lib0hash_set_value_dec(&___nl__4, ___get_global_const(63), ___nl__10);
#line 648
c_rt_lib0clear(&___nl__9);
#line 648
c_rt_lib0clear(&___nl__10);
#line 648
c_rt_lib0clear(&___nl__8);
#line 648
c_rt_lib0clear(&___nl__7);
#line 649
goto label_808;
#line 649
label_750:
#line 649
c_rt_lib0move(&___nl__7, c_rt_lib0priv_as(___nl__5, ___get_global_const(859)));
#line 650
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__7, ___get_global_const(132)));
#line 650
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__7, ___get_global_const(93)));
#line 650
c_rt_lib0delete(type_checker_priv0check_function_exists(___nl__8, ___nl__9, ___ref___1, ___ref___3));
#line 650
c_rt_lib0clear(&___nl__9);
#line 650
c_rt_lib0clear(&___nl__8);
#line 651
c_rt_lib0move(&___nl__8, tct0func());
#line 651
c_rt_lib0copy(&___nl__9, ___nl__8);
#line 651
c_rt_lib0hash_set_value_dec(&___nl__4, ___get_global_const(63), ___nl__9);
#line 651
c_rt_lib0clear(&___nl__8);
#line 651
c_rt_lib0clear(&___nl__9);
#line 651
c_rt_lib0clear(&___nl__7);
#line 652
goto label_808;
#line 652
label_764:
#line 652
c_rt_lib0move(&___nl__7, c_rt_lib0priv_as(___nl__5, ___get_global_const(812)));
#line 653
c_rt_lib0move(&___nl__8, type_checker_priv0check_fun_val(___nl__7, ___ref___1, ___ref___2, ___ref___3));
#line 653
c_rt_lib0copy(&___nl__4, ___nl__8);
#line 653
c_rt_lib0clear(&___nl__8);
#line 653
c_rt_lib0clear(&___nl__7);
#line 654
goto label_808;
#line 654
label_771:
#line 654
c_rt_lib0move(&___nl__7, c_rt_lib0priv_as(___nl__5, ___get_global_const(771)));
#line 655
c_rt_lib0move(&___nl__8, tct0sim());
#line 655
c_rt_lib0copy(&___nl__9, ___nl__8);
#line 655
c_rt_lib0hash_set_value_dec(&___nl__4, ___get_global_const(63), ___nl__9);
#line 655
c_rt_lib0clear(&___nl__8);
#line 655
c_rt_lib0clear(&___nl__9);
#line 655
c_rt_lib0clear(&___nl__7);
#line 656
goto label_808;
#line 656
label_780:
#line 656
c_rt_lib0move(&___nl__7, c_rt_lib0priv_as(___nl__5, ___get_global_const(860)));
#line 657
c_rt_lib0move(&___nl__9,___get_global_const(1201));
#line 657
c_rt_lib0move(&___nl__8, type_checker_priv0unary_op_dec_inc(___nl__7, ___nl__9, ___ref___1, ___ref___2, ___ref___3));
#line 657
c_rt_lib0clear(&___nl__9);
#line 657
c_rt_lib0clear(&___nl__0);
#line 657
c_rt_lib0clear(&___nl__4);
#line 657
c_rt_lib0clear(&___nl__5);
#line 657
c_rt_lib0clear(&___nl__6);
#line 657
c_rt_lib0clear(&___nl__7);
#line 657
return ___nl__8;
#line 657
c_rt_lib0clear(&___nl__8);
#line 657
c_rt_lib0clear(&___nl__7);
#line 658
goto label_808;
#line 658
label_794:
#line 658
c_rt_lib0move(&___nl__7, c_rt_lib0priv_as(___nl__5, ___get_global_const(861)));
#line 659
c_rt_lib0move(&___nl__9,___get_global_const(1202));
#line 659
c_rt_lib0move(&___nl__8, type_checker_priv0unary_op_dec_inc(___nl__7, ___nl__9, ___ref___1, ___ref___2, ___ref___3));
#line 659
c_rt_lib0clear(&___nl__9);
#line 659
c_rt_lib0clear(&___nl__0);
#line 659
c_rt_lib0clear(&___nl__4);
#line 659
c_rt_lib0clear(&___nl__5);
#line 659
c_rt_lib0clear(&___nl__6);
#line 659
c_rt_lib0clear(&___nl__7);
#line 659
return ___nl__8;
#line 659
c_rt_lib0clear(&___nl__8);
#line 659
c_rt_lib0clear(&___nl__7);
#line 660
goto label_808;
#line 660
label_808:
#line 660
c_rt_lib0clear(&___nl__5);
#line 660
c_rt_lib0clear(&___nl__6);
#line 661
c_rt_lib0clear(&___nl__0);
#line 661
return ___nl__4;
#line 661
c_rt_lib0clear(&___nl__4);
#line 661
c_rt_lib0clear(&___nl__0);
#line 661
return NULL;
}

ImmT type_checker_priv0check_fun_val(ImmT ___nl__0,ImmT * ___ref___1,ImmT * ___ref___2,ImmT * ___ref___3) {
c_rt_lib0arg_val(___nl__0);
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
#line 667
c_rt_lib0move(&___nl__4, tc_types0get_default_type());
#line 668
c_rt_lib0move(&___nl__5, c_rt_lib0array_mk(0));
#line 669
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(89)));
#line 669
c_rt_lib0move(&___nl__8,___get_global_const(0));
#line 669
c_rt_lib0move(&___nl__9,___get_global_const(1));
#line 669
c_rt_lib0move(&___nl__10, c_rt_lib0array_len(___nl__6));
#line 669
label_6:
#line 669
c_rt_lib0move(&___nl__11, c_rt_lib0ge(___nl__8, ___nl__10));
#line 669
if(c_rt_lib0check_true_native(___nl__11)){ goto label_17;}
#line 669
c_rt_lib0move(&___nl__7, c_rt_lib0array_get(___nl__6, ___nl__8));
#line 670
c_rt_lib0move(&___nl__13, c_rt_lib0hash_get_value_dec(___nl__7, ___get_global_const(198)));
#line 670
c_rt_lib0move(&___nl__12, type_checker_priv0check_val(___nl__13, ___ref___1, ___ref___2, ___ref___3));
#line 670
c_rt_lib0clear(&___nl__13);
#line 670
c_rt_lib0delete(array0push(&___nl__5, ___nl__12));
#line 670
c_rt_lib0clear(&___nl__12);
#line 671
c_rt_lib0move(&___nl__8, c_rt_lib0add_mod(___nl__8, ___nl__9));
#line 671
goto label_6;
#line 671
label_17:
#line 671
c_rt_lib0clear(&___nl__6);
#line 671
c_rt_lib0clear(&___nl__7);
#line 671
c_rt_lib0clear(&___nl__8);
#line 671
c_rt_lib0clear(&___nl__9);
#line 671
c_rt_lib0clear(&___nl__10);
#line 671
c_rt_lib0clear(&___nl__11);
#line 672
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(132)));
#line 672
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(93)));
#line 672
c_rt_lib0move(&___nl__6, type_checker_priv0get_special_function_def(___nl__7, ___nl__8));
#line 672
c_rt_lib0clear(&___nl__8);
#line 672
c_rt_lib0clear(&___nl__7);
#line 673
c_rt_lib0move(&___nl__7, c_rt_lib0get_false());
#line 674
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__6, ___get_global_const(182)));
#line 674
c_rt_lib0move(&___nl__9, c_rt_lib0priv_is(___nl__8, ___get_global_const(183)));
#line 674
if(c_rt_lib0check_true_native(___nl__9)){ goto label_38;}
#line 680
c_rt_lib0move(&___nl__9, c_rt_lib0priv_is(___nl__8, ___get_global_const(379)));
#line 680
if(c_rt_lib0check_true_native(___nl__9)){ goto label_74;}
#line 680
c_rt_lib0move(&___nl__9,___get_global_const(91));
#line 680
c_rt_lib0move(&___nl__9, c_rt_lib0array_mk(2, ___nl__9, ___nl__8));
#line 680
nl_die_arg(___nl__9);
#line 674
label_38:
#line 675
c_rt_lib0move(&___nl__10, c_rt_lib0get_true());
#line 675
c_rt_lib0copy(&___nl__7, ___nl__10);
#line 675
c_rt_lib0clear(&___nl__10);
#line 676
c_rt_lib0move(&___nl__11, c_rt_lib0hash_get_value_dec(*___ref___1, ___get_global_const(384)));
#line 676
c_rt_lib0move(&___nl__12, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(132)));
#line 676
c_rt_lib0move(&___nl__10, hash0has_key(___nl__11, ___nl__12));
#line 676
c_rt_lib0clear(&___nl__12);
#line 676
c_rt_lib0clear(&___nl__11);
#line 676
c_rt_lib0move(&___nl__10, c_rt_lib0not(___nl__10));
#line 676
c_rt_lib0move(&___nl__10, c_rt_lib0not(___nl__10));
#line 676
if(c_rt_lib0check_true_native(___nl__10)){ goto label_71;}
#line 677
c_rt_lib0move(&___nl__11,___get_global_const(794));
#line 677
c_rt_lib0move(&___nl__12, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(132)));
#line 677
c_rt_lib0move(&___nl__11, c_rt_lib0concat_add(___nl__11, ___nl__12));
#line 677
c_rt_lib0clear(&___nl__12);
#line 677
c_rt_lib0move(&___nl__12,___get_global_const(795));
#line 677
c_rt_lib0move(&___nl__11, c_rt_lib0concat_add(___nl__11, ___nl__12));
#line 677
c_rt_lib0clear(&___nl__12);
#line 677
c_rt_lib0delete(type_checker_priv0add_error(___ref___3, ___nl__11));
#line 677
c_rt_lib0clear(&___nl__11);
#line 678
c_rt_lib0move(&___nl__11,___get_global_const(384));
#line 678
c_rt_lib0move(&___nl__11, c_rt_lib0get_ref_hash(*___ref___1, ___nl__11));
#line 678
c_rt_lib0move(&___nl__12, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(132)));
#line 678
c_rt_lib0move(&___nl__13, c_rt_lib0get_false());
#line 678
c_rt_lib0delete(hash0set_value(&___nl__11, ___nl__12, ___nl__13));
#line 678
c_rt_lib0clear(&___nl__13);
#line 678
c_rt_lib0clear(&___nl__12);
#line 678
c_rt_lib0move(&___nl__12,___get_global_const(384));
#line 678
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___1, ___nl__12, ___nl__11));
#line 678
c_rt_lib0clear(&___nl__12);
#line 678
c_rt_lib0clear(&___nl__11);
#line 679
goto label_71;
#line 679
label_71:
#line 679
c_rt_lib0clear(&___nl__10);
#line 680
goto label_102;
#line 680
label_74:
#line 681
c_rt_lib0move(&___nl__11, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(132)));
#line 681
c_rt_lib0move(&___nl__12, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(93)));
#line 681
c_rt_lib0move(&___nl__10, type_checker_priv0check_function_exists(___nl__11, ___nl__12, ___ref___1, ___ref___3));
#line 681
c_rt_lib0clear(&___nl__12);
#line 681
c_rt_lib0clear(&___nl__11);
#line 681
c_rt_lib0move(&___nl__10, c_rt_lib0not(___nl__10));
#line 681
c_rt_lib0move(&___nl__10, c_rt_lib0not(___nl__10));
#line 681
if(c_rt_lib0check_true_native(___nl__10)){ goto label_92;}
#line 681
c_rt_lib0clear(&___nl__0);
#line 681
c_rt_lib0clear(&___nl__5);
#line 681
c_rt_lib0clear(&___nl__6);
#line 681
c_rt_lib0clear(&___nl__7);
#line 681
c_rt_lib0clear(&___nl__8);
#line 681
c_rt_lib0clear(&___nl__9);
#line 681
c_rt_lib0clear(&___nl__10);
#line 681
return ___nl__4;
#line 681
goto label_92;
#line 681
label_92:
#line 681
c_rt_lib0clear(&___nl__10);
#line 682
c_rt_lib0move(&___nl__11, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(132)));
#line 682
c_rt_lib0move(&___nl__12, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(93)));
#line 682
c_rt_lib0move(&___nl__10, type_checker_priv0get_function_def(___nl__11, ___nl__12, *___ref___1));
#line 682
c_rt_lib0clear(&___nl__12);
#line 682
c_rt_lib0clear(&___nl__11);
#line 682
c_rt_lib0copy(&___nl__6, ___nl__10);
#line 682
c_rt_lib0clear(&___nl__10);
#line 683
goto label_102;
#line 683
label_102:
#line 683
c_rt_lib0clear(&___nl__8);
#line 683
c_rt_lib0clear(&___nl__9);
#line 684
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(89)));
#line 684
c_rt_lib0move(&___nl__8, array0len(___nl__9));
#line 684
c_rt_lib0clear(&___nl__9);
#line 684
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__6, ___get_global_const(89)));
#line 684
c_rt_lib0move(&___nl__9, array0len(___nl__10));
#line 684
c_rt_lib0clear(&___nl__10);
#line 684
c_rt_lib0move(&___nl__8, c_rt_lib0num_ne(___nl__8, ___nl__9));
#line 684
c_rt_lib0clear(&___nl__9);
#line 684
c_rt_lib0move(&___nl__8, c_rt_lib0not(___nl__8));
#line 684
if(c_rt_lib0check_true_native(___nl__8)){ goto label_140;}
#line 685
c_rt_lib0move(&___nl__9,___get_global_const(1203));
#line 685
c_rt_lib0move(&___nl__11, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(89)));
#line 685
c_rt_lib0move(&___nl__10, array0len(___nl__11));
#line 685
c_rt_lib0clear(&___nl__11);
#line 685
c_rt_lib0move(&___nl__9, c_rt_lib0concat_add(___nl__9, ___nl__10));
#line 685
c_rt_lib0clear(&___nl__10);
#line 685
c_rt_lib0move(&___nl__10,___get_global_const(1204));
#line 685
c_rt_lib0move(&___nl__9, c_rt_lib0concat_add(___nl__9, ___nl__10));
#line 685
c_rt_lib0clear(&___nl__10);
#line 686
c_rt_lib0move(&___nl__11, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(132)));
#line 686
c_rt_lib0move(&___nl__12, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(93)));
#line 686
c_rt_lib0move(&___nl__10, type_checker_priv0get_function_name(___nl__11, ___nl__12));
#line 686
c_rt_lib0clear(&___nl__12);
#line 686
c_rt_lib0clear(&___nl__11);
#line 686
c_rt_lib0move(&___nl__9, c_rt_lib0concat_add(___nl__9, ___nl__10));
#line 686
c_rt_lib0clear(&___nl__10);
#line 686
c_rt_lib0delete(type_checker_priv0add_error(___ref___3, ___nl__9));
#line 686
c_rt_lib0clear(&___nl__9);
#line 687
c_rt_lib0clear(&___nl__0);
#line 687
c_rt_lib0clear(&___nl__5);
#line 687
c_rt_lib0clear(&___nl__6);
#line 687
c_rt_lib0clear(&___nl__7);
#line 687
c_rt_lib0clear(&___nl__8);
#line 687
return ___nl__4;
#line 688
goto label_140;
#line 688
label_140:
#line 688
c_rt_lib0clear(&___nl__8);
#line 689
c_rt_lib0move(&___nl__8, c_rt_lib0hash_mk(0));
#line 690
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(89)));
#line 690
c_rt_lib0move(&___nl__9, array0len(___nl__10));
#line 690
c_rt_lib0clear(&___nl__10);
#line 690
c_rt_lib0move(&___nl__10,___get_global_const(0));
#line 690
c_rt_lib0move(&___nl__11,___get_global_const(1));
#line 690
label_148:
#line 690
c_rt_lib0move(&___nl__12, c_rt_lib0ge(___nl__10, ___nl__9));
#line 690
if(c_rt_lib0check_true_native(___nl__12)){ goto label_319;}
#line 691
c_rt_lib0move(&___nl__13, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(89)));
#line 691
c_rt_lib0move(&___nl__13, c_rt_lib0array_get(___nl__13, ___nl__10));
#line 692
c_rt_lib0move(&___nl__14, c_rt_lib0hash_get_value_dec(___nl__6, ___get_global_const(89)));
#line 692
c_rt_lib0move(&___nl__14, c_rt_lib0array_get(___nl__14, ___nl__10));
#line 696
c_rt_lib0move(&___nl__16, c_rt_lib0hash_get_value_dec(___nl__14, ___get_global_const(222)));
#line 696
c_rt_lib0move(&___nl__17, c_rt_lib0hash_get_value_dec(___nl__13, ___get_global_const(222)));
#line 696
c_rt_lib0move(&___nl__15, enum0eq(___nl__16, ___nl__17));
#line 696
c_rt_lib0clear(&___nl__17);
#line 696
c_rt_lib0clear(&___nl__16);
#line 696
if(c_rt_lib0check_true_native(___nl__15)){ goto label_175;}
#line 697
c_rt_lib0move(&___nl__17, c_rt_lib0hash_get_value_dec(___nl__14, ___get_global_const(222)));
#line 697
c_rt_lib0move(&___nl__18, c_rt_lib0ov_mk_none(___get_global_const(1205)));
#line 697
c_rt_lib0move(&___nl__15, enum0eq(___nl__17, ___nl__18));
#line 697
c_rt_lib0clear(&___nl__18);
#line 697
c_rt_lib0clear(&___nl__17);
#line 697
c_rt_lib0move(&___nl__16, c_rt_lib0not(___nl__15));
#line 697
if(c_rt_lib0check_true_native(___nl__16)){ goto label_173;}
#line 697
c_rt_lib0move(&___nl__17, c_rt_lib0hash_get_value_dec(___nl__13, ___get_global_const(222)));
#line 697
c_rt_lib0move(&___nl__18, c_rt_lib0ov_mk_none(___get_global_const(41)));
#line 697
c_rt_lib0move(&___nl__15, enum0eq(___nl__17, ___nl__18));
#line 697
c_rt_lib0clear(&___nl__18);
#line 697
c_rt_lib0clear(&___nl__17);
#line 697
label_173:
#line 697
c_rt_lib0clear(&___nl__16);
#line 697
label_175:
#line 697
c_rt_lib0move(&___nl__15, c_rt_lib0not(___nl__15));
#line 697
c_rt_lib0move(&___nl__15, c_rt_lib0not(___nl__15));
#line 697
if(c_rt_lib0check_true_native(___nl__15)){ goto label_196;}
#line 693
c_rt_lib0move(&___nl__16,___get_global_const(1206));
#line 693
c_rt_lib0move(&___nl__17,___get_global_const(1));
#line 693
c_rt_lib0move(&___nl__17, c_rt_lib0add(___nl__10, ___nl__17));
#line 693
c_rt_lib0move(&___nl__16, c_rt_lib0concat_add(___nl__16, ___nl__17));
#line 693
c_rt_lib0clear(&___nl__17);
#line 693
c_rt_lib0move(&___nl__17,___get_global_const(1207));
#line 693
c_rt_lib0move(&___nl__16, c_rt_lib0concat_add(___nl__16, ___nl__17));
#line 693
c_rt_lib0clear(&___nl__17);
#line 693
c_rt_lib0move(&___nl__17, c_rt_lib0hash_get_value_dec(___nl__14, ___get_global_const(93)));
#line 693
c_rt_lib0move(&___nl__16, c_rt_lib0concat_add(___nl__16, ___nl__17));
#line 693
c_rt_lib0clear(&___nl__17);
#line 694
c_rt_lib0move(&___nl__17,___get_global_const(1208));
#line 694
c_rt_lib0move(&___nl__16, c_rt_lib0concat_add(___nl__16, ___nl__17));
#line 694
c_rt_lib0clear(&___nl__17);
#line 694
c_rt_lib0delete(type_checker_priv0add_error(___ref___3, ___nl__16));
#line 694
c_rt_lib0clear(&___nl__16);
#line 694
goto label_196;
#line 694
label_196:
#line 694
c_rt_lib0clear(&___nl__15);
#line 699
c_rt_lib0copy(&___nl__16, ___nl__7);
#line 699
c_rt_lib0move(&___nl__16, c_rt_lib0not(___nl__16));
#line 699
if(c_rt_lib0check_true_native(___nl__16)){ goto label_214;}
#line 700
c_rt_lib0move(&___nl__17, c_rt_lib0array_get(___nl__5, ___nl__10));
#line 701
c_rt_lib0move(&___nl__18, c_rt_lib0ov_mk_none(___get_global_const(1085)));
#line 701
c_rt_lib0copy(&___nl__19, ___nl__18);
#line 701
c_rt_lib0hash_set_value_dec(&___nl__17, ___get_global_const(43), ___nl__19);
#line 701
c_rt_lib0clear(&___nl__18);
#line 701
c_rt_lib0clear(&___nl__19);
#line 702
c_rt_lib0move(&___nl__19, c_rt_lib0hash_get_value_dec(___nl__14, ___get_global_const(63)));
#line 702
c_rt_lib0move(&___nl__18, ptd_system0is_accepted_info(___nl__17, ___nl__19, ___ref___1, ___ref___3));
#line 702
c_rt_lib0clear(&___nl__19);
#line 702
c_rt_lib0copy(&___nl__15, ___nl__18);
#line 702
c_rt_lib0clear(&___nl__18);
#line 702
c_rt_lib0clear(&___nl__17);
#line 703
goto label_276;
#line 703
label_214:
#line 704
c_rt_lib0move(&___nl__17, c_rt_lib0hash_get_value_dec(___nl__14, ___get_global_const(222)));
#line 704
c_rt_lib0move(&___nl__17, c_rt_lib0priv_is(___nl__17, ___get_global_const(5)));
#line 704
c_rt_lib0move(&___nl__17, c_rt_lib0not(___nl__17));
#line 704
if(c_rt_lib0check_true_native(___nl__17)){ goto label_266;}
#line 705
c_rt_lib0move(&___nl__19, c_rt_lib0hash_get_value_dec(*___ref___3, ___get_global_const(18)));
#line 705
c_rt_lib0move(&___nl__18, array0len(___nl__19));
#line 705
c_rt_lib0clear(&___nl__19);
#line 706
c_rt_lib0move(&___nl__20, c_rt_lib0hash_get_value_dec(___nl__13, ___get_global_const(198)));
#line 706
c_rt_lib0move(&___nl__19, type_checker_priv0rec_get_var_from_lval(___nl__20, ___ref___3));
#line 706
c_rt_lib0clear(&___nl__20);
#line 707
c_rt_lib0move(&___nl__21, c_rt_lib0hash_get_value_dec(*___ref___3, ___get_global_const(18)));
#line 707
c_rt_lib0move(&___nl__20, array0len(___nl__21));
#line 707
c_rt_lib0clear(&___nl__21);
#line 707
c_rt_lib0move(&___nl__20, c_rt_lib0num_eq(___nl__18, ___nl__20));
#line 707
c_rt_lib0move(&___nl__20, c_rt_lib0not(___nl__20));
#line 707
if(c_rt_lib0check_true_native(___nl__20)){ goto label_261;}
#line 708
c_rt_lib0move(&___nl__22,___get_global_const(0));
#line 708
c_rt_lib0move(&___nl__21, c_rt_lib0array_get(___nl__19, ___nl__22));
#line 708
c_rt_lib0clear(&___nl__22);
#line 708
c_rt_lib0move(&___nl__21, c_rt_lib0priv_as(___nl__21, ___get_global_const(849)));
#line 709
c_rt_lib0move(&___nl__22, hash0has_key(___nl__8, ___nl__21));
#line 709
c_rt_lib0move(&___nl__22, c_rt_lib0not(___nl__22));
#line 709
if(c_rt_lib0check_true_native(___nl__22)){ goto label_243;}
#line 710
c_rt_lib0move(&___nl__23,___get_global_const(1209));
#line 710
c_rt_lib0move(&___nl__23, c_rt_lib0concat_add(___nl__23, ___nl__21));
#line 710
c_rt_lib0delete(type_checker_priv0add_warning(___ref___3, ___nl__23));
#line 710
c_rt_lib0clear(&___nl__23);
#line 711
goto label_243;
#line 711
label_243:
#line 711
c_rt_lib0clear(&___nl__22);
#line 712
c_rt_lib0move(&___nl__22,___get_global_const(0));
#line 712
c_rt_lib0delete(hash0set_value(&___nl__8, ___nl__21, ___nl__22));
#line 712
c_rt_lib0clear(&___nl__22);
#line 713
c_rt_lib0move(&___nl__22, c_rt_lib0hash_get_value_dec(___nl__13, ___get_global_const(198)));
#line 713
c_rt_lib0move(&___nl__23, c_rt_lib0array_get(___nl__5, ___nl__10));
#line 714
c_rt_lib0move(&___nl__25, c_rt_lib0hash_get_value_dec(___nl__14, ___get_global_const(63)));
#line 714
c_rt_lib0move(&___nl__26, c_rt_lib0ov_mk_none(___get_global_const(1079)));
#line 714
c_rt_lib0move(&___nl__24, c_rt_lib0hash_mk(2, ___get_global_const(63), ___nl__25, ___get_global_const(43), ___nl__26));
#line 714
c_rt_lib0clear(&___nl__25);
#line 714
c_rt_lib0clear(&___nl__26);
#line 714
c_rt_lib0delete(type_checker_priv0set_type_to_lval(___nl__22, ___nl__23, ___nl__24, ___ref___1, ___ref___2, ___ref___3));
#line 714
c_rt_lib0clear(&___nl__24);
#line 714
c_rt_lib0clear(&___nl__23);
#line 714
c_rt_lib0clear(&___nl__22);
#line 714
c_rt_lib0clear(&___nl__21);
#line 715
goto label_261;
#line 715
label_261:
#line 715
c_rt_lib0clear(&___nl__20);
#line 715
c_rt_lib0clear(&___nl__18);
#line 715
c_rt_lib0clear(&___nl__19);
#line 716
goto label_266;
#line 716
label_266:
#line 716
c_rt_lib0clear(&___nl__17);
#line 717
c_rt_lib0move(&___nl__18, c_rt_lib0hash_get_value_dec(___nl__14, ___get_global_const(63)));
#line 717
c_rt_lib0move(&___nl__19, c_rt_lib0array_get(___nl__5, ___nl__10));
#line 717
c_rt_lib0move(&___nl__17, ptd_system0check_assignment(___nl__18, ___nl__19, ___ref___1, ___ref___3));
#line 717
c_rt_lib0clear(&___nl__19);
#line 717
c_rt_lib0clear(&___nl__18);
#line 717
c_rt_lib0copy(&___nl__15, ___nl__17);
#line 717
c_rt_lib0clear(&___nl__17);
#line 719
goto label_276;
#line 719
label_276:
#line 719
c_rt_lib0clear(&___nl__16);
#line 720
c_rt_lib0copy(&___nl__16, ___nl__15);
#line 720
c_rt_lib0move(&___nl__16, c_rt_lib0priv_is(___nl__16, ___get_global_const(47)));
#line 720
c_rt_lib0move(&___nl__16, c_rt_lib0not(___nl__16));
#line 720
if(c_rt_lib0check_true_native(___nl__16)){ goto label_312;}
#line 721
c_rt_lib0move(&___nl__17,___get_global_const(1210));
#line 721
c_rt_lib0move(&___nl__19, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(132)));
#line 721
c_rt_lib0move(&___nl__20, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(93)));
#line 721
c_rt_lib0move(&___nl__18, type_checker_priv0get_function_name(___nl__19, ___nl__20));
#line 721
c_rt_lib0clear(&___nl__20);
#line 721
c_rt_lib0clear(&___nl__19);
#line 721
c_rt_lib0move(&___nl__17, c_rt_lib0concat_add(___nl__17, ___nl__18));
#line 721
c_rt_lib0clear(&___nl__18);
#line 722
c_rt_lib0move(&___nl__18,___get_global_const(1211));
#line 722
c_rt_lib0move(&___nl__17, c_rt_lib0concat_add(___nl__17, ___nl__18));
#line 722
c_rt_lib0clear(&___nl__18);
#line 722
c_rt_lib0move(&___nl__18,___get_global_const(1));
#line 722
c_rt_lib0move(&___nl__18, c_rt_lib0add(___nl__10, ___nl__18));
#line 722
c_rt_lib0move(&___nl__17, c_rt_lib0concat_add(___nl__17, ___nl__18));
#line 722
c_rt_lib0clear(&___nl__18);
#line 722
c_rt_lib0move(&___nl__18,___get_global_const(1207));
#line 722
c_rt_lib0move(&___nl__17, c_rt_lib0concat_add(___nl__17, ___nl__18));
#line 722
c_rt_lib0clear(&___nl__18);
#line 722
c_rt_lib0move(&___nl__18, c_rt_lib0hash_get_value_dec(___nl__14, ___get_global_const(93)));
#line 722
c_rt_lib0move(&___nl__17, c_rt_lib0concat_add(___nl__17, ___nl__18));
#line 722
c_rt_lib0clear(&___nl__18);
#line 722
c_rt_lib0move(&___nl__18,___get_global_const(1212));
#line 722
c_rt_lib0move(&___nl__17, c_rt_lib0concat_add(___nl__17, ___nl__18));
#line 722
c_rt_lib0clear(&___nl__18);
#line 723
c_rt_lib0move(&___nl__18, type_checker_priv0get_print_check_info(___nl__15));
#line 723
c_rt_lib0move(&___nl__17, c_rt_lib0concat_add(___nl__17, ___nl__18));
#line 723
c_rt_lib0clear(&___nl__18);
#line 723
c_rt_lib0delete(type_checker_priv0add_error(___ref___3, ___nl__17));
#line 723
c_rt_lib0clear(&___nl__17);
#line 724
goto label_312;
#line 724
label_312:
#line 724
c_rt_lib0clear(&___nl__16);
#line 724
c_rt_lib0clear(&___nl__13);
#line 724
c_rt_lib0clear(&___nl__14);
#line 724
c_rt_lib0clear(&___nl__15);
#line 725
c_rt_lib0move(&___nl__10, c_rt_lib0add_mod(___nl__10, ___nl__11));
#line 725
goto label_148;
#line 725
label_319:
#line 725
c_rt_lib0clear(&___nl__9);
#line 725
c_rt_lib0clear(&___nl__10);
#line 725
c_rt_lib0clear(&___nl__11);
#line 725
c_rt_lib0clear(&___nl__12);
#line 726
c_rt_lib0move(&___nl__11, c_rt_lib0hash_get_value_dec(___nl__6, ___get_global_const(788)));
#line 726
c_rt_lib0move(&___nl__12, c_rt_lib0ov_mk_none(___get_global_const(1079)));
#line 726
c_rt_lib0move(&___nl__10, c_rt_lib0hash_mk(2, ___get_global_const(63), ___nl__11, ___get_global_const(43), ___nl__12));
#line 726
c_rt_lib0clear(&___nl__11);
#line 726
c_rt_lib0clear(&___nl__12);
#line 726
c_rt_lib0move(&___nl__9, type_checker_priv0check_special_function(___nl__10, ___nl__0, ___nl__5, ___ref___1, ___ref___2, ___ref___3));
#line 726
c_rt_lib0clear(&___nl__10);
#line 726
c_rt_lib0clear(&___nl__0);
#line 726
c_rt_lib0clear(&___nl__4);
#line 726
c_rt_lib0clear(&___nl__5);
#line 726
c_rt_lib0clear(&___nl__6);
#line 726
c_rt_lib0clear(&___nl__7);
#line 726
c_rt_lib0clear(&___nl__8);
#line 726
return ___nl__9;
#line 726
c_rt_lib0clear(&___nl__9);
#line 726
c_rt_lib0clear(&___nl__4);
#line 726
c_rt_lib0clear(&___nl__5);
#line 726
c_rt_lib0clear(&___nl__6);
#line 726
c_rt_lib0clear(&___nl__7);
#line 726
c_rt_lib0clear(&___nl__8);
#line 726
c_rt_lib0clear(&___nl__0);
#line 726
return NULL;
}

ImmT type_checker_priv0unary_op_dec_inc(ImmT ___nl__0,ImmT ___nl__1,ImmT * ___ref___2,ImmT * ___ref___3,ImmT * ___ref___4) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
ImmT ___nl__9 = NULL;
#line 732
c_rt_lib0move(&___nl__5, type_checker_priv0check_val(___nl__0, ___ref___2, ___ref___3, ___ref___4));
#line 733
c_rt_lib0move(&___nl__7, tct0sim());
#line 733
c_rt_lib0move(&___nl__6, ptd_system0is_accepted(___nl__5, ___nl__7, ___ref___2, ___ref___4));
#line 733
c_rt_lib0clear(&___nl__7);
#line 733
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 733
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 733
if(c_rt_lib0check_true_native(___nl__6)){ goto label_14;}
#line 734
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(63)));
#line 734
c_rt_lib0move(&___nl__7, type_checker_priv0get_print_tct_type_name(___nl__8));
#line 734
c_rt_lib0clear(&___nl__8);
#line 734
c_rt_lib0move(&___nl__7, c_rt_lib0concat_new(___nl__1, ___nl__7));
#line 734
c_rt_lib0delete(type_checker_priv0add_error(___ref___4, ___nl__7));
#line 734
c_rt_lib0clear(&___nl__7);
#line 735
goto label_14;
#line 735
label_14:
#line 735
c_rt_lib0clear(&___nl__6);
#line 736
c_rt_lib0move(&___nl__6, tct0sim());
#line 736
c_rt_lib0copy(&___nl__7, ___nl__6);
#line 736
c_rt_lib0hash_set_value_dec(&___nl__5, ___get_global_const(63), ___nl__7);
#line 736
c_rt_lib0clear(&___nl__6);
#line 736
c_rt_lib0clear(&___nl__7);
#line 737
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(*___ref___4, ___get_global_const(18)));
#line 737
c_rt_lib0move(&___nl__6, array0len(___nl__7));
#line 737
c_rt_lib0clear(&___nl__7);
#line 738
c_rt_lib0move(&___nl__7, type_checker_priv0get_type_left_side_equation(___nl__0, ___ref___2, ___ref___3, ___ref___4));
#line 739
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(*___ref___4, ___get_global_const(18)));
#line 739
c_rt_lib0move(&___nl__8, array0len(___nl__9));
#line 739
c_rt_lib0clear(&___nl__9);
#line 739
c_rt_lib0move(&___nl__8, c_rt_lib0sub_mod(___nl__8, ___nl__6));
#line 739
c_rt_lib0move(&___nl__9,___get_global_const(0));
#line 739
c_rt_lib0move(&___nl__8, c_rt_lib0gt(___nl__8, ___nl__9));
#line 739
c_rt_lib0clear(&___nl__9);
#line 739
c_rt_lib0move(&___nl__8, c_rt_lib0not(___nl__8));
#line 739
if(c_rt_lib0check_true_native(___nl__8)){ goto label_41;}
#line 740
c_rt_lib0clear(&___nl__0);
#line 740
c_rt_lib0clear(&___nl__1);
#line 740
c_rt_lib0clear(&___nl__5);
#line 740
c_rt_lib0clear(&___nl__6);
#line 740
c_rt_lib0clear(&___nl__8);
#line 740
return ___nl__7;
#line 741
goto label_41;
#line 741
label_41:
#line 741
c_rt_lib0clear(&___nl__8);
#line 742
c_rt_lib0move(&___nl__8, type_checker_priv0set_type_to_lval(___nl__0, ___nl__7, ___nl__5, ___ref___2, ___ref___3, ___ref___4));
#line 742
c_rt_lib0clear(&___nl__0);
#line 742
c_rt_lib0clear(&___nl__1);
#line 742
c_rt_lib0clear(&___nl__5);
#line 742
c_rt_lib0clear(&___nl__6);
#line 742
c_rt_lib0clear(&___nl__7);
#line 742
return ___nl__8;
#line 742
c_rt_lib0clear(&___nl__8);
#line 742
c_rt_lib0clear(&___nl__5);
#line 742
c_rt_lib0clear(&___nl__6);
#line 742
c_rt_lib0clear(&___nl__7);
#line 742
c_rt_lib0clear(&___nl__0);
#line 742
c_rt_lib0clear(&___nl__1);
#line 742
return NULL;
}

ImmT type_checker_priv0get_special_functions(){
return type_checker_priv0__const__sing(0);}
ImmT type_checker_priv0get_special_functions0cal() {
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
#line 746
c_rt_lib0move(&___nl__0, c_rt_lib0hash_mk(0));
#line 747
c_rt_lib0move(&___nl__1,___get_global_const(770));
#line 748
c_rt_lib0move(&___nl__3, tct0tct_im());
#line 749
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_none(___get_global_const(41)));
#line 749
c_rt_lib0move(&___nl__7, tct0tct_im());
#line 749
c_rt_lib0move(&___nl__8,___get_global_const(2));
#line 749
c_rt_lib0move(&___nl__5, c_rt_lib0hash_mk(3, ___get_global_const(222), ___nl__6, ___get_global_const(63), ___nl__7, ___get_global_const(93), ___nl__8));
#line 749
c_rt_lib0clear(&___nl__6);
#line 749
c_rt_lib0clear(&___nl__7);
#line 749
c_rt_lib0clear(&___nl__8);
#line 749
c_rt_lib0move(&___nl__7, c_rt_lib0ov_mk_none(___get_global_const(41)));
#line 749
c_rt_lib0move(&___nl__8, tct0tct_im());
#line 749
c_rt_lib0move(&___nl__9,___get_global_const(2));
#line 749
c_rt_lib0move(&___nl__6, c_rt_lib0hash_mk(3, ___get_global_const(222), ___nl__7, ___get_global_const(63), ___nl__8, ___get_global_const(93), ___nl__9));
#line 749
c_rt_lib0clear(&___nl__7);
#line 749
c_rt_lib0clear(&___nl__8);
#line 749
c_rt_lib0clear(&___nl__9);
#line 749
c_rt_lib0move(&___nl__4, c_rt_lib0array_mk(2, ___nl__5, ___nl__6));
#line 749
c_rt_lib0clear(&___nl__5);
#line 749
c_rt_lib0clear(&___nl__6);
#line 749
c_rt_lib0move(&___nl__2, c_rt_lib0hash_mk(2, ___get_global_const(250), ___nl__3, ___get_global_const(1121), ___nl__4));
#line 749
c_rt_lib0clear(&___nl__3);
#line 749
c_rt_lib0clear(&___nl__4);
#line 749
c_rt_lib0delete(hash0set_value(&___nl__0, ___nl__1, ___nl__2));
#line 749
c_rt_lib0clear(&___nl__2);
#line 749
c_rt_lib0clear(&___nl__1);
#line 751
c_rt_lib0move(&___nl__1,___get_global_const(1213));
#line 752
c_rt_lib0move(&___nl__3, tct0tct_im());
#line 753
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_none(___get_global_const(41)));
#line 753
c_rt_lib0move(&___nl__7, tct0tct_im());
#line 753
c_rt_lib0move(&___nl__8,___get_global_const(2));
#line 753
c_rt_lib0move(&___nl__5, c_rt_lib0hash_mk(3, ___get_global_const(222), ___nl__6, ___get_global_const(63), ___nl__7, ___get_global_const(93), ___nl__8));
#line 753
c_rt_lib0clear(&___nl__6);
#line 753
c_rt_lib0clear(&___nl__7);
#line 753
c_rt_lib0clear(&___nl__8);
#line 753
c_rt_lib0move(&___nl__7, c_rt_lib0ov_mk_none(___get_global_const(41)));
#line 753
c_rt_lib0move(&___nl__8, tct0tct_im());
#line 753
c_rt_lib0move(&___nl__9,___get_global_const(2));
#line 753
c_rt_lib0move(&___nl__6, c_rt_lib0hash_mk(3, ___get_global_const(222), ___nl__7, ___get_global_const(63), ___nl__8, ___get_global_const(93), ___nl__9));
#line 753
c_rt_lib0clear(&___nl__7);
#line 753
c_rt_lib0clear(&___nl__8);
#line 753
c_rt_lib0clear(&___nl__9);
#line 753
c_rt_lib0move(&___nl__4, c_rt_lib0array_mk(2, ___nl__5, ___nl__6));
#line 753
c_rt_lib0clear(&___nl__5);
#line 753
c_rt_lib0clear(&___nl__6);
#line 753
c_rt_lib0move(&___nl__2, c_rt_lib0hash_mk(2, ___get_global_const(250), ___nl__3, ___get_global_const(1121), ___nl__4));
#line 753
c_rt_lib0clear(&___nl__3);
#line 753
c_rt_lib0clear(&___nl__4);
#line 753
c_rt_lib0delete(hash0set_value(&___nl__0, ___nl__1, ___nl__2));
#line 753
c_rt_lib0clear(&___nl__2);
#line 753
c_rt_lib0clear(&___nl__1);
#line 755
c_rt_lib0move(&___nl__1,___get_global_const(1214));
#line 756
c_rt_lib0move(&___nl__3, tct0tct_im());
#line 757
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_none(___get_global_const(41)));
#line 757
c_rt_lib0move(&___nl__7, tct0tct_im());
#line 757
c_rt_lib0move(&___nl__8,___get_global_const(2));
#line 757
c_rt_lib0move(&___nl__5, c_rt_lib0hash_mk(3, ___get_global_const(222), ___nl__6, ___get_global_const(63), ___nl__7, ___get_global_const(93), ___nl__8));
#line 757
c_rt_lib0clear(&___nl__6);
#line 757
c_rt_lib0clear(&___nl__7);
#line 757
c_rt_lib0clear(&___nl__8);
#line 757
c_rt_lib0move(&___nl__7, c_rt_lib0ov_mk_none(___get_global_const(41)));
#line 757
c_rt_lib0move(&___nl__8, tct0tct_im());
#line 757
c_rt_lib0move(&___nl__9,___get_global_const(2));
#line 757
c_rt_lib0move(&___nl__6, c_rt_lib0hash_mk(3, ___get_global_const(222), ___nl__7, ___get_global_const(63), ___nl__8, ___get_global_const(93), ___nl__9));
#line 757
c_rt_lib0clear(&___nl__7);
#line 757
c_rt_lib0clear(&___nl__8);
#line 757
c_rt_lib0clear(&___nl__9);
#line 757
c_rt_lib0move(&___nl__4, c_rt_lib0array_mk(2, ___nl__5, ___nl__6));
#line 757
c_rt_lib0clear(&___nl__5);
#line 757
c_rt_lib0clear(&___nl__6);
#line 757
c_rt_lib0move(&___nl__2, c_rt_lib0hash_mk(2, ___get_global_const(250), ___nl__3, ___get_global_const(1121), ___nl__4));
#line 757
c_rt_lib0clear(&___nl__3);
#line 757
c_rt_lib0clear(&___nl__4);
#line 757
c_rt_lib0delete(hash0set_value(&___nl__0, ___nl__1, ___nl__2));
#line 757
c_rt_lib0clear(&___nl__2);
#line 757
c_rt_lib0clear(&___nl__1);
#line 759
c_rt_lib0move(&___nl__1,___get_global_const(725));
#line 760
c_rt_lib0move(&___nl__3, tct0void());
#line 762
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_none(___get_global_const(5)));
#line 762
c_rt_lib0move(&___nl__8, tct0tct_im());
#line 762
c_rt_lib0move(&___nl__7, tct0arr(___nl__8));
#line 762
c_rt_lib0clear(&___nl__8);
#line 762
c_rt_lib0move(&___nl__8,___get_global_const(2));
#line 762
c_rt_lib0move(&___nl__5, c_rt_lib0hash_mk(3, ___get_global_const(222), ___nl__6, ___get_global_const(63), ___nl__7, ___get_global_const(93), ___nl__8));
#line 762
c_rt_lib0clear(&___nl__6);
#line 762
c_rt_lib0clear(&___nl__7);
#line 762
c_rt_lib0clear(&___nl__8);
#line 763
c_rt_lib0move(&___nl__7, c_rt_lib0ov_mk_none(___get_global_const(41)));
#line 763
c_rt_lib0move(&___nl__8, tct0tct_im());
#line 763
c_rt_lib0move(&___nl__9,___get_global_const(2));
#line 763
c_rt_lib0move(&___nl__6, c_rt_lib0hash_mk(3, ___get_global_const(222), ___nl__7, ___get_global_const(63), ___nl__8, ___get_global_const(93), ___nl__9));
#line 763
c_rt_lib0clear(&___nl__7);
#line 763
c_rt_lib0clear(&___nl__8);
#line 763
c_rt_lib0clear(&___nl__9);
#line 763
c_rt_lib0move(&___nl__4, c_rt_lib0array_mk(2, ___nl__5, ___nl__6));
#line 763
c_rt_lib0clear(&___nl__5);
#line 763
c_rt_lib0clear(&___nl__6);
#line 763
c_rt_lib0move(&___nl__2, c_rt_lib0hash_mk(2, ___get_global_const(250), ___nl__3, ___get_global_const(1121), ___nl__4));
#line 763
c_rt_lib0clear(&___nl__3);
#line 763
c_rt_lib0clear(&___nl__4);
#line 763
c_rt_lib0delete(hash0set_value(&___nl__0, ___nl__1, ___nl__2));
#line 763
c_rt_lib0clear(&___nl__2);
#line 763
c_rt_lib0clear(&___nl__1);
#line 766
c_rt_lib0move(&___nl__1,___get_global_const(1215));
#line 767
c_rt_lib0move(&___nl__3, tct0void());
#line 769
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_none(___get_global_const(5)));
#line 769
c_rt_lib0move(&___nl__8, tct0tct_im());
#line 769
c_rt_lib0move(&___nl__7, tct0arr(___nl__8));
#line 769
c_rt_lib0clear(&___nl__8);
#line 769
c_rt_lib0move(&___nl__8,___get_global_const(2));
#line 769
c_rt_lib0move(&___nl__5, c_rt_lib0hash_mk(3, ___get_global_const(222), ___nl__6, ___get_global_const(63), ___nl__7, ___get_global_const(93), ___nl__8));
#line 769
c_rt_lib0clear(&___nl__6);
#line 769
c_rt_lib0clear(&___nl__7);
#line 769
c_rt_lib0clear(&___nl__8);
#line 770
c_rt_lib0move(&___nl__7, c_rt_lib0ov_mk_none(___get_global_const(41)));
#line 770
c_rt_lib0move(&___nl__8, tct0tct_im());
#line 770
c_rt_lib0move(&___nl__9,___get_global_const(2));
#line 770
c_rt_lib0move(&___nl__6, c_rt_lib0hash_mk(3, ___get_global_const(222), ___nl__7, ___get_global_const(63), ___nl__8, ___get_global_const(93), ___nl__9));
#line 770
c_rt_lib0clear(&___nl__7);
#line 770
c_rt_lib0clear(&___nl__8);
#line 770
c_rt_lib0clear(&___nl__9);
#line 771
c_rt_lib0move(&___nl__8, c_rt_lib0ov_mk_none(___get_global_const(41)));
#line 771
c_rt_lib0move(&___nl__9, tct0tct_im());
#line 771
c_rt_lib0move(&___nl__10,___get_global_const(2));
#line 771
c_rt_lib0move(&___nl__7, c_rt_lib0hash_mk(3, ___get_global_const(222), ___nl__8, ___get_global_const(63), ___nl__9, ___get_global_const(93), ___nl__10));
#line 771
c_rt_lib0clear(&___nl__8);
#line 771
c_rt_lib0clear(&___nl__9);
#line 771
c_rt_lib0clear(&___nl__10);
#line 771
c_rt_lib0move(&___nl__4, c_rt_lib0array_mk(3, ___nl__5, ___nl__6, ___nl__7));
#line 771
c_rt_lib0clear(&___nl__5);
#line 771
c_rt_lib0clear(&___nl__6);
#line 771
c_rt_lib0clear(&___nl__7);
#line 771
c_rt_lib0move(&___nl__2, c_rt_lib0hash_mk(2, ___get_global_const(250), ___nl__3, ___get_global_const(1121), ___nl__4));
#line 771
c_rt_lib0clear(&___nl__3);
#line 771
c_rt_lib0clear(&___nl__4);
#line 771
c_rt_lib0delete(hash0set_value(&___nl__0, ___nl__1, ___nl__2));
#line 771
c_rt_lib0clear(&___nl__2);
#line 771
c_rt_lib0clear(&___nl__1);
#line 774
c_rt_lib0move(&___nl__1,___get_global_const(1216));
#line 775
c_rt_lib0move(&___nl__3, tct0void());
#line 777
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_none(___get_global_const(5)));
#line 777
c_rt_lib0move(&___nl__8, tct0tct_im());
#line 777
c_rt_lib0move(&___nl__7, tct0arr(___nl__8));
#line 777
c_rt_lib0clear(&___nl__8);
#line 777
c_rt_lib0move(&___nl__8,___get_global_const(2));
#line 777
c_rt_lib0move(&___nl__5, c_rt_lib0hash_mk(3, ___get_global_const(222), ___nl__6, ___get_global_const(63), ___nl__7, ___get_global_const(93), ___nl__8));
#line 777
c_rt_lib0clear(&___nl__6);
#line 777
c_rt_lib0clear(&___nl__7);
#line 777
c_rt_lib0clear(&___nl__8);
#line 778
c_rt_lib0move(&___nl__7, c_rt_lib0ov_mk_none(___get_global_const(41)));
#line 778
c_rt_lib0move(&___nl__8, tct0tct_im());
#line 778
c_rt_lib0move(&___nl__9,___get_global_const(2));
#line 778
c_rt_lib0move(&___nl__6, c_rt_lib0hash_mk(3, ___get_global_const(222), ___nl__7, ___get_global_const(63), ___nl__8, ___get_global_const(93), ___nl__9));
#line 778
c_rt_lib0clear(&___nl__7);
#line 778
c_rt_lib0clear(&___nl__8);
#line 778
c_rt_lib0clear(&___nl__9);
#line 778
c_rt_lib0move(&___nl__4, c_rt_lib0array_mk(2, ___nl__5, ___nl__6));
#line 778
c_rt_lib0clear(&___nl__5);
#line 778
c_rt_lib0clear(&___nl__6);
#line 778
c_rt_lib0move(&___nl__2, c_rt_lib0hash_mk(2, ___get_global_const(250), ___nl__3, ___get_global_const(1121), ___nl__4));
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
#line 783
c_rt_lib0move(&___nl__1,___get_global_const(727));
#line 784
c_rt_lib0move(&___nl__3, tct0tct_im());
#line 786
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_none(___get_global_const(41)));
#line 786
c_rt_lib0move(&___nl__8, tct0tct_im());
#line 786
c_rt_lib0move(&___nl__7, tct0arr(___nl__8));
#line 786
c_rt_lib0clear(&___nl__8);
#line 786
c_rt_lib0move(&___nl__8,___get_global_const(2));
#line 786
c_rt_lib0move(&___nl__5, c_rt_lib0hash_mk(3, ___get_global_const(222), ___nl__6, ___get_global_const(63), ___nl__7, ___get_global_const(93), ___nl__8));
#line 786
c_rt_lib0clear(&___nl__6);
#line 786
c_rt_lib0clear(&___nl__7);
#line 786
c_rt_lib0clear(&___nl__8);
#line 787
c_rt_lib0move(&___nl__7, c_rt_lib0ov_mk_none(___get_global_const(41)));
#line 787
c_rt_lib0move(&___nl__8, tct0sim());
#line 787
c_rt_lib0move(&___nl__9,___get_global_const(2));
#line 787
c_rt_lib0move(&___nl__6, c_rt_lib0hash_mk(3, ___get_global_const(222), ___nl__7, ___get_global_const(63), ___nl__8, ___get_global_const(93), ___nl__9));
#line 787
c_rt_lib0clear(&___nl__7);
#line 787
c_rt_lib0clear(&___nl__8);
#line 787
c_rt_lib0clear(&___nl__9);
#line 788
c_rt_lib0move(&___nl__8, c_rt_lib0ov_mk_none(___get_global_const(41)));
#line 788
c_rt_lib0move(&___nl__9, tct0sim());
#line 788
c_rt_lib0move(&___nl__10,___get_global_const(2));
#line 788
c_rt_lib0move(&___nl__7, c_rt_lib0hash_mk(3, ___get_global_const(222), ___nl__8, ___get_global_const(63), ___nl__9, ___get_global_const(93), ___nl__10));
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
c_rt_lib0move(&___nl__2, c_rt_lib0hash_mk(2, ___get_global_const(250), ___nl__3, ___get_global_const(1121), ___nl__4));
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
#line 791
c_rt_lib0move(&___nl__1,___get_global_const(1217));
#line 792
c_rt_lib0move(&___nl__3, tct0sim());
#line 794
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_none(___get_global_const(41)));
#line 794
c_rt_lib0move(&___nl__7, tct0sim());
#line 794
c_rt_lib0move(&___nl__8,___get_global_const(2));
#line 794
c_rt_lib0move(&___nl__5, c_rt_lib0hash_mk(3, ___get_global_const(222), ___nl__6, ___get_global_const(63), ___nl__7, ___get_global_const(93), ___nl__8));
#line 794
c_rt_lib0clear(&___nl__6);
#line 794
c_rt_lib0clear(&___nl__7);
#line 794
c_rt_lib0clear(&___nl__8);
#line 795
c_rt_lib0move(&___nl__7, c_rt_lib0ov_mk_none(___get_global_const(41)));
#line 795
c_rt_lib0move(&___nl__9, tct0sim());
#line 795
c_rt_lib0move(&___nl__8, tct0arr(___nl__9));
#line 795
c_rt_lib0clear(&___nl__9);
#line 795
c_rt_lib0move(&___nl__9,___get_global_const(2));
#line 795
c_rt_lib0move(&___nl__6, c_rt_lib0hash_mk(3, ___get_global_const(222), ___nl__7, ___get_global_const(63), ___nl__8, ___get_global_const(93), ___nl__9));
#line 795
c_rt_lib0clear(&___nl__7);
#line 795
c_rt_lib0clear(&___nl__8);
#line 795
c_rt_lib0clear(&___nl__9);
#line 795
c_rt_lib0move(&___nl__4, c_rt_lib0array_mk(2, ___nl__5, ___nl__6));
#line 795
c_rt_lib0clear(&___nl__5);
#line 795
c_rt_lib0clear(&___nl__6);
#line 795
c_rt_lib0move(&___nl__2, c_rt_lib0hash_mk(2, ___get_global_const(250), ___nl__3, ___get_global_const(1121), ___nl__4));
#line 795
c_rt_lib0clear(&___nl__3);
#line 795
c_rt_lib0clear(&___nl__4);
#line 795
c_rt_lib0delete(hash0set_value(&___nl__0, ___nl__1, ___nl__2));
#line 795
c_rt_lib0clear(&___nl__2);
#line 795
c_rt_lib0clear(&___nl__1);
#line 798
c_rt_lib0move(&___nl__1,___get_global_const(728));
#line 799
c_rt_lib0move(&___nl__3, tct0void());
#line 801
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_none(___get_global_const(5)));
#line 801
c_rt_lib0move(&___nl__8, tct0tct_im());
#line 801
c_rt_lib0move(&___nl__7, tct0arr(___nl__8));
#line 801
c_rt_lib0clear(&___nl__8);
#line 801
c_rt_lib0move(&___nl__8,___get_global_const(2));
#line 801
c_rt_lib0move(&___nl__5, c_rt_lib0hash_mk(3, ___get_global_const(222), ___nl__6, ___get_global_const(63), ___nl__7, ___get_global_const(93), ___nl__8));
#line 801
c_rt_lib0clear(&___nl__6);
#line 801
c_rt_lib0clear(&___nl__7);
#line 801
c_rt_lib0clear(&___nl__8);
#line 802
c_rt_lib0move(&___nl__7, c_rt_lib0ov_mk_none(___get_global_const(41)));
#line 802
c_rt_lib0move(&___nl__9, tct0tct_im());
#line 802
c_rt_lib0move(&___nl__8, tct0arr(___nl__9));
#line 802
c_rt_lib0clear(&___nl__9);
#line 802
c_rt_lib0move(&___nl__9,___get_global_const(2));
#line 802
c_rt_lib0move(&___nl__6, c_rt_lib0hash_mk(3, ___get_global_const(222), ___nl__7, ___get_global_const(63), ___nl__8, ___get_global_const(93), ___nl__9));
#line 802
c_rt_lib0clear(&___nl__7);
#line 802
c_rt_lib0clear(&___nl__8);
#line 802
c_rt_lib0clear(&___nl__9);
#line 802
c_rt_lib0move(&___nl__4, c_rt_lib0array_mk(2, ___nl__5, ___nl__6));
#line 802
c_rt_lib0clear(&___nl__5);
#line 802
c_rt_lib0clear(&___nl__6);
#line 802
c_rt_lib0move(&___nl__2, c_rt_lib0hash_mk(2, ___get_global_const(250), ___nl__3, ___get_global_const(1121), ___nl__4));
#line 802
c_rt_lib0clear(&___nl__3);
#line 802
c_rt_lib0clear(&___nl__4);
#line 802
c_rt_lib0delete(hash0set_value(&___nl__0, ___nl__1, ___nl__2));
#line 802
c_rt_lib0clear(&___nl__2);
#line 802
c_rt_lib0clear(&___nl__1);
#line 805
c_rt_lib0move(&___nl__1,___get_global_const(729));
#line 806
c_rt_lib0move(&___nl__3, tct0sim());
#line 807
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_none(___get_global_const(41)));
#line 807
c_rt_lib0move(&___nl__8, tct0tct_im());
#line 807
c_rt_lib0move(&___nl__7, tct0arr(___nl__8));
#line 807
c_rt_lib0clear(&___nl__8);
#line 807
c_rt_lib0move(&___nl__8,___get_global_const(2));
#line 807
c_rt_lib0move(&___nl__5, c_rt_lib0hash_mk(3, ___get_global_const(222), ___nl__6, ___get_global_const(63), ___nl__7, ___get_global_const(93), ___nl__8));
#line 807
c_rt_lib0clear(&___nl__6);
#line 807
c_rt_lib0clear(&___nl__7);
#line 807
c_rt_lib0clear(&___nl__8);
#line 807
c_rt_lib0move(&___nl__4, c_rt_lib0array_mk(1, ___nl__5));
#line 807
c_rt_lib0clear(&___nl__5);
#line 807
c_rt_lib0move(&___nl__2, c_rt_lib0hash_mk(2, ___get_global_const(250), ___nl__3, ___get_global_const(1121), ___nl__4));
#line 807
c_rt_lib0clear(&___nl__3);
#line 807
c_rt_lib0clear(&___nl__4);
#line 807
c_rt_lib0delete(hash0set_value(&___nl__0, ___nl__1, ___nl__2));
#line 807
c_rt_lib0clear(&___nl__2);
#line 807
c_rt_lib0clear(&___nl__1);
#line 809
c_rt_lib0move(&___nl__1,___get_global_const(730));
#line 810
c_rt_lib0move(&___nl__3, tct0void());
#line 811
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_none(___get_global_const(5)));
#line 811
c_rt_lib0move(&___nl__8, tct0sim());
#line 811
c_rt_lib0move(&___nl__7, tct0arr(___nl__8));
#line 811
c_rt_lib0clear(&___nl__8);
#line 811
c_rt_lib0move(&___nl__8,___get_global_const(2));
#line 811
c_rt_lib0move(&___nl__5, c_rt_lib0hash_mk(3, ___get_global_const(222), ___nl__6, ___get_global_const(63), ___nl__7, ___get_global_const(93), ___nl__8));
#line 811
c_rt_lib0clear(&___nl__6);
#line 811
c_rt_lib0clear(&___nl__7);
#line 811
c_rt_lib0clear(&___nl__8);
#line 811
c_rt_lib0move(&___nl__4, c_rt_lib0array_mk(1, ___nl__5));
#line 811
c_rt_lib0clear(&___nl__5);
#line 811
c_rt_lib0move(&___nl__2, c_rt_lib0hash_mk(2, ___get_global_const(250), ___nl__3, ___get_global_const(1121), ___nl__4));
#line 811
c_rt_lib0clear(&___nl__3);
#line 811
c_rt_lib0clear(&___nl__4);
#line 811
c_rt_lib0delete(hash0set_value(&___nl__0, ___nl__1, ___nl__2));
#line 811
c_rt_lib0clear(&___nl__2);
#line 811
c_rt_lib0clear(&___nl__1);
#line 813
c_rt_lib0move(&___nl__1,___get_global_const(726));
#line 814
c_rt_lib0move(&___nl__3, tct0void());
#line 815
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_none(___get_global_const(5)));
#line 815
c_rt_lib0move(&___nl__8, tct0tct_im());
#line 815
c_rt_lib0move(&___nl__7, tct0arr(___nl__8));
#line 815
c_rt_lib0clear(&___nl__8);
#line 815
c_rt_lib0move(&___nl__8,___get_global_const(2));
#line 815
c_rt_lib0move(&___nl__5, c_rt_lib0hash_mk(3, ___get_global_const(222), ___nl__6, ___get_global_const(63), ___nl__7, ___get_global_const(93), ___nl__8));
#line 815
c_rt_lib0clear(&___nl__6);
#line 815
c_rt_lib0clear(&___nl__7);
#line 815
c_rt_lib0clear(&___nl__8);
#line 815
c_rt_lib0move(&___nl__4, c_rt_lib0array_mk(1, ___nl__5));
#line 815
c_rt_lib0clear(&___nl__5);
#line 815
c_rt_lib0move(&___nl__2, c_rt_lib0hash_mk(2, ___get_global_const(250), ___nl__3, ___get_global_const(1121), ___nl__4));
#line 815
c_rt_lib0clear(&___nl__3);
#line 815
c_rt_lib0clear(&___nl__4);
#line 815
c_rt_lib0delete(hash0set_value(&___nl__0, ___nl__1, ___nl__2));
#line 815
c_rt_lib0clear(&___nl__2);
#line 815
c_rt_lib0clear(&___nl__1);
#line 817
c_rt_lib0move(&___nl__1,___get_global_const(733));
#line 818
c_rt_lib0move(&___nl__3, tct0void());
#line 820
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_none(___get_global_const(5)));
#line 820
c_rt_lib0move(&___nl__8, tct0tct_im());
#line 820
c_rt_lib0move(&___nl__7, tct0hash(___nl__8));
#line 820
c_rt_lib0clear(&___nl__8);
#line 820
c_rt_lib0move(&___nl__8,___get_global_const(2));
#line 820
c_rt_lib0move(&___nl__5, c_rt_lib0hash_mk(3, ___get_global_const(222), ___nl__6, ___get_global_const(63), ___nl__7, ___get_global_const(93), ___nl__8));
#line 820
c_rt_lib0clear(&___nl__6);
#line 820
c_rt_lib0clear(&___nl__7);
#line 820
c_rt_lib0clear(&___nl__8);
#line 821
c_rt_lib0move(&___nl__7, c_rt_lib0ov_mk_none(___get_global_const(41)));
#line 821
c_rt_lib0move(&___nl__8, tct0sim());
#line 821
c_rt_lib0move(&___nl__9,___get_global_const(2));
#line 821
c_rt_lib0move(&___nl__6, c_rt_lib0hash_mk(3, ___get_global_const(222), ___nl__7, ___get_global_const(63), ___nl__8, ___get_global_const(93), ___nl__9));
#line 821
c_rt_lib0clear(&___nl__7);
#line 821
c_rt_lib0clear(&___nl__8);
#line 821
c_rt_lib0clear(&___nl__9);
#line 822
c_rt_lib0move(&___nl__8, c_rt_lib0ov_mk_none(___get_global_const(41)));
#line 822
c_rt_lib0move(&___nl__9, tct0tct_im());
#line 822
c_rt_lib0move(&___nl__10,___get_global_const(2));
#line 822
c_rt_lib0move(&___nl__7, c_rt_lib0hash_mk(3, ___get_global_const(222), ___nl__8, ___get_global_const(63), ___nl__9, ___get_global_const(93), ___nl__10));
#line 822
c_rt_lib0clear(&___nl__8);
#line 822
c_rt_lib0clear(&___nl__9);
#line 822
c_rt_lib0clear(&___nl__10);
#line 822
c_rt_lib0move(&___nl__4, c_rt_lib0array_mk(3, ___nl__5, ___nl__6, ___nl__7));
#line 822
c_rt_lib0clear(&___nl__5);
#line 822
c_rt_lib0clear(&___nl__6);
#line 822
c_rt_lib0clear(&___nl__7);
#line 822
c_rt_lib0move(&___nl__2, c_rt_lib0hash_mk(2, ___get_global_const(250), ___nl__3, ___get_global_const(1121), ___nl__4));
#line 822
c_rt_lib0clear(&___nl__3);
#line 822
c_rt_lib0clear(&___nl__4);
#line 822
c_rt_lib0delete(hash0set_value(&___nl__0, ___nl__1, ___nl__2));
#line 822
c_rt_lib0clear(&___nl__2);
#line 822
c_rt_lib0clear(&___nl__1);
#line 825
c_rt_lib0move(&___nl__1,___get_global_const(731));
#line 826
c_rt_lib0move(&___nl__3, tct0tct_im());
#line 828
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_none(___get_global_const(41)));
#line 828
c_rt_lib0move(&___nl__8, tct0tct_im());
#line 828
c_rt_lib0move(&___nl__7, tct0hash(___nl__8));
#line 828
c_rt_lib0clear(&___nl__8);
#line 828
c_rt_lib0move(&___nl__8,___get_global_const(2));
#line 828
c_rt_lib0move(&___nl__5, c_rt_lib0hash_mk(3, ___get_global_const(222), ___nl__6, ___get_global_const(63), ___nl__7, ___get_global_const(93), ___nl__8));
#line 828
c_rt_lib0clear(&___nl__6);
#line 828
c_rt_lib0clear(&___nl__7);
#line 828
c_rt_lib0clear(&___nl__8);
#line 829
c_rt_lib0move(&___nl__7, c_rt_lib0ov_mk_none(___get_global_const(41)));
#line 829
c_rt_lib0move(&___nl__8, tct0sim());
#line 829
c_rt_lib0move(&___nl__9,___get_global_const(2));
#line 829
c_rt_lib0move(&___nl__6, c_rt_lib0hash_mk(3, ___get_global_const(222), ___nl__7, ___get_global_const(63), ___nl__8, ___get_global_const(93), ___nl__9));
#line 829
c_rt_lib0clear(&___nl__7);
#line 829
c_rt_lib0clear(&___nl__8);
#line 829
c_rt_lib0clear(&___nl__9);
#line 829
c_rt_lib0move(&___nl__4, c_rt_lib0array_mk(2, ___nl__5, ___nl__6));
#line 829
c_rt_lib0clear(&___nl__5);
#line 829
c_rt_lib0clear(&___nl__6);
#line 829
c_rt_lib0move(&___nl__2, c_rt_lib0hash_mk(2, ___get_global_const(250), ___nl__3, ___get_global_const(1121), ___nl__4));
#line 829
c_rt_lib0clear(&___nl__3);
#line 829
c_rt_lib0clear(&___nl__4);
#line 829
c_rt_lib0delete(hash0set_value(&___nl__0, ___nl__1, ___nl__2));
#line 829
c_rt_lib0clear(&___nl__2);
#line 829
c_rt_lib0clear(&___nl__1);
#line 832
c_rt_lib0move(&___nl__1,___get_global_const(732));
#line 833
c_rt_lib0move(&___nl__3, tct0bool());
#line 835
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_none(___get_global_const(41)));
#line 835
c_rt_lib0move(&___nl__8, tct0tct_im());
#line 835
c_rt_lib0move(&___nl__7, tct0hash(___nl__8));
#line 835
c_rt_lib0clear(&___nl__8);
#line 835
c_rt_lib0move(&___nl__8,___get_global_const(2));
#line 835
c_rt_lib0move(&___nl__5, c_rt_lib0hash_mk(3, ___get_global_const(222), ___nl__6, ___get_global_const(63), ___nl__7, ___get_global_const(93), ___nl__8));
#line 835
c_rt_lib0clear(&___nl__6);
#line 835
c_rt_lib0clear(&___nl__7);
#line 835
c_rt_lib0clear(&___nl__8);
#line 836
c_rt_lib0move(&___nl__7, c_rt_lib0ov_mk_none(___get_global_const(41)));
#line 836
c_rt_lib0move(&___nl__8, tct0sim());
#line 836
c_rt_lib0move(&___nl__9,___get_global_const(2));
#line 836
c_rt_lib0move(&___nl__6, c_rt_lib0hash_mk(3, ___get_global_const(222), ___nl__7, ___get_global_const(63), ___nl__8, ___get_global_const(93), ___nl__9));
#line 836
c_rt_lib0clear(&___nl__7);
#line 836
c_rt_lib0clear(&___nl__8);
#line 836
c_rt_lib0clear(&___nl__9);
#line 836
c_rt_lib0move(&___nl__4, c_rt_lib0array_mk(2, ___nl__5, ___nl__6));
#line 836
c_rt_lib0clear(&___nl__5);
#line 836
c_rt_lib0clear(&___nl__6);
#line 836
c_rt_lib0move(&___nl__2, c_rt_lib0hash_mk(2, ___get_global_const(250), ___nl__3, ___get_global_const(1121), ___nl__4));
#line 836
c_rt_lib0clear(&___nl__3);
#line 836
c_rt_lib0clear(&___nl__4);
#line 836
c_rt_lib0delete(hash0set_value(&___nl__0, ___nl__1, ___nl__2));
#line 836
c_rt_lib0clear(&___nl__2);
#line 836
c_rt_lib0clear(&___nl__1);
#line 839
c_rt_lib0move(&___nl__1,___get_global_const(734));
#line 840
c_rt_lib0move(&___nl__3, tct0void());
#line 842
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_none(___get_global_const(5)));
#line 842
c_rt_lib0move(&___nl__8, tct0tct_im());
#line 842
c_rt_lib0move(&___nl__7, tct0hash(___nl__8));
#line 842
c_rt_lib0clear(&___nl__8);
#line 842
c_rt_lib0move(&___nl__8,___get_global_const(2));
#line 842
c_rt_lib0move(&___nl__5, c_rt_lib0hash_mk(3, ___get_global_const(222), ___nl__6, ___get_global_const(63), ___nl__7, ___get_global_const(93), ___nl__8));
#line 842
c_rt_lib0clear(&___nl__6);
#line 842
c_rt_lib0clear(&___nl__7);
#line 842
c_rt_lib0clear(&___nl__8);
#line 843
c_rt_lib0move(&___nl__7, c_rt_lib0ov_mk_none(___get_global_const(41)));
#line 843
c_rt_lib0move(&___nl__8, tct0sim());
#line 843
c_rt_lib0move(&___nl__9,___get_global_const(2));
#line 843
c_rt_lib0move(&___nl__6, c_rt_lib0hash_mk(3, ___get_global_const(222), ___nl__7, ___get_global_const(63), ___nl__8, ___get_global_const(93), ___nl__9));
#line 843
c_rt_lib0clear(&___nl__7);
#line 843
c_rt_lib0clear(&___nl__8);
#line 843
c_rt_lib0clear(&___nl__9);
#line 843
c_rt_lib0move(&___nl__4, c_rt_lib0array_mk(2, ___nl__5, ___nl__6));
#line 843
c_rt_lib0clear(&___nl__5);
#line 843
c_rt_lib0clear(&___nl__6);
#line 843
c_rt_lib0move(&___nl__2, c_rt_lib0hash_mk(2, ___get_global_const(250), ___nl__3, ___get_global_const(1121), ___nl__4));
#line 843
c_rt_lib0clear(&___nl__3);
#line 843
c_rt_lib0clear(&___nl__4);
#line 843
c_rt_lib0delete(hash0set_value(&___nl__0, ___nl__1, ___nl__2));
#line 843
c_rt_lib0clear(&___nl__2);
#line 843
c_rt_lib0clear(&___nl__1);
#line 846
c_rt_lib0move(&___nl__1,___get_global_const(735));
#line 847
c_rt_lib0move(&___nl__3, tct0sim());
#line 848
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_none(___get_global_const(41)));
#line 848
c_rt_lib0move(&___nl__8, tct0tct_im());
#line 848
c_rt_lib0move(&___nl__7, tct0hash(___nl__8));
#line 848
c_rt_lib0clear(&___nl__8);
#line 848
c_rt_lib0move(&___nl__8,___get_global_const(2));
#line 848
c_rt_lib0move(&___nl__5, c_rt_lib0hash_mk(3, ___get_global_const(222), ___nl__6, ___get_global_const(63), ___nl__7, ___get_global_const(93), ___nl__8));
#line 848
c_rt_lib0clear(&___nl__6);
#line 848
c_rt_lib0clear(&___nl__7);
#line 848
c_rt_lib0clear(&___nl__8);
#line 848
c_rt_lib0move(&___nl__4, c_rt_lib0array_mk(1, ___nl__5));
#line 848
c_rt_lib0clear(&___nl__5);
#line 848
c_rt_lib0move(&___nl__2, c_rt_lib0hash_mk(2, ___get_global_const(250), ___nl__3, ___get_global_const(1121), ___nl__4));
#line 848
c_rt_lib0clear(&___nl__3);
#line 848
c_rt_lib0clear(&___nl__4);
#line 848
c_rt_lib0delete(hash0set_value(&___nl__0, ___nl__1, ___nl__2));
#line 848
c_rt_lib0clear(&___nl__2);
#line 848
c_rt_lib0clear(&___nl__1);
#line 850
c_rt_lib0move(&___nl__1,___get_global_const(1218));
#line 851
c_rt_lib0move(&___nl__4, tct0tct_im());
#line 851
c_rt_lib0move(&___nl__3, tct0arr(___nl__4));
#line 851
c_rt_lib0clear(&___nl__4);
#line 852
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_none(___get_global_const(41)));
#line 852
c_rt_lib0move(&___nl__8, tct0tct_im());
#line 852
c_rt_lib0move(&___nl__7, tct0hash(___nl__8));
#line 852
c_rt_lib0clear(&___nl__8);
#line 852
c_rt_lib0move(&___nl__8,___get_global_const(2));
#line 852
c_rt_lib0move(&___nl__5, c_rt_lib0hash_mk(3, ___get_global_const(222), ___nl__6, ___get_global_const(63), ___nl__7, ___get_global_const(93), ___nl__8));
#line 852
c_rt_lib0clear(&___nl__6);
#line 852
c_rt_lib0clear(&___nl__7);
#line 852
c_rt_lib0clear(&___nl__8);
#line 852
c_rt_lib0move(&___nl__4, c_rt_lib0array_mk(1, ___nl__5));
#line 852
c_rt_lib0clear(&___nl__5);
#line 852
c_rt_lib0move(&___nl__2, c_rt_lib0hash_mk(2, ___get_global_const(250), ___nl__3, ___get_global_const(1121), ___nl__4));
#line 852
c_rt_lib0clear(&___nl__3);
#line 852
c_rt_lib0clear(&___nl__4);
#line 852
c_rt_lib0delete(hash0set_value(&___nl__0, ___nl__1, ___nl__2));
#line 852
c_rt_lib0clear(&___nl__2);
#line 852
c_rt_lib0clear(&___nl__1);
#line 854
c_rt_lib0move(&___nl__1,___get_global_const(736));
#line 855
c_rt_lib0move(&___nl__4, tct0sim());
#line 855
c_rt_lib0move(&___nl__3, tct0arr(___nl__4));
#line 855
c_rt_lib0clear(&___nl__4);
#line 856
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_none(___get_global_const(41)));
#line 856
c_rt_lib0move(&___nl__8, tct0tct_im());
#line 856
c_rt_lib0move(&___nl__7, tct0hash(___nl__8));
#line 856
c_rt_lib0clear(&___nl__8);
#line 856
c_rt_lib0move(&___nl__8,___get_global_const(2));
#line 856
c_rt_lib0move(&___nl__5, c_rt_lib0hash_mk(3, ___get_global_const(222), ___nl__6, ___get_global_const(63), ___nl__7, ___get_global_const(93), ___nl__8));
#line 856
c_rt_lib0clear(&___nl__6);
#line 856
c_rt_lib0clear(&___nl__7);
#line 856
c_rt_lib0clear(&___nl__8);
#line 856
c_rt_lib0move(&___nl__4, c_rt_lib0array_mk(1, ___nl__5));
#line 856
c_rt_lib0clear(&___nl__5);
#line 856
c_rt_lib0move(&___nl__2, c_rt_lib0hash_mk(2, ___get_global_const(250), ___nl__3, ___get_global_const(1121), ___nl__4));
#line 856
c_rt_lib0clear(&___nl__3);
#line 856
c_rt_lib0clear(&___nl__4);
#line 856
c_rt_lib0delete(hash0set_value(&___nl__0, ___nl__1, ___nl__2));
#line 856
c_rt_lib0clear(&___nl__2);
#line 856
c_rt_lib0clear(&___nl__1);
#line 858
c_rt_lib0move(&___nl__1,___get_global_const(1219));
#line 859
c_rt_lib0move(&___nl__3, tct0void());
#line 861
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_none(___get_global_const(5)));
#line 861
c_rt_lib0move(&___nl__8, tct0tct_im());
#line 861
c_rt_lib0move(&___nl__7, tct0hash(___nl__8));
#line 861
c_rt_lib0clear(&___nl__8);
#line 861
c_rt_lib0move(&___nl__8,___get_global_const(2));
#line 861
c_rt_lib0move(&___nl__5, c_rt_lib0hash_mk(3, ___get_global_const(222), ___nl__6, ___get_global_const(63), ___nl__7, ___get_global_const(93), ___nl__8));
#line 861
c_rt_lib0clear(&___nl__6);
#line 861
c_rt_lib0clear(&___nl__7);
#line 861
c_rt_lib0clear(&___nl__8);
#line 862
c_rt_lib0move(&___nl__7, c_rt_lib0ov_mk_none(___get_global_const(41)));
#line 862
c_rt_lib0move(&___nl__9, tct0tct_im());
#line 862
c_rt_lib0move(&___nl__8, tct0hash(___nl__9));
#line 862
c_rt_lib0clear(&___nl__9);
#line 862
c_rt_lib0move(&___nl__9,___get_global_const(2));
#line 862
c_rt_lib0move(&___nl__6, c_rt_lib0hash_mk(3, ___get_global_const(222), ___nl__7, ___get_global_const(63), ___nl__8, ___get_global_const(93), ___nl__9));
#line 862
c_rt_lib0clear(&___nl__7);
#line 862
c_rt_lib0clear(&___nl__8);
#line 862
c_rt_lib0clear(&___nl__9);
#line 862
c_rt_lib0move(&___nl__4, c_rt_lib0array_mk(2, ___nl__5, ___nl__6));
#line 862
c_rt_lib0clear(&___nl__5);
#line 862
c_rt_lib0clear(&___nl__6);
#line 862
c_rt_lib0move(&___nl__2, c_rt_lib0hash_mk(2, ___get_global_const(250), ___nl__3, ___get_global_const(1121), ___nl__4));
#line 862
c_rt_lib0clear(&___nl__3);
#line 862
c_rt_lib0clear(&___nl__4);
#line 862
c_rt_lib0delete(hash0set_value(&___nl__0, ___nl__1, ___nl__2));
#line 862
c_rt_lib0clear(&___nl__2);
#line 862
c_rt_lib0clear(&___nl__1);
#line 865
c_rt_lib0move(&___nl__1,___get_global_const(750));
#line 866
c_rt_lib0move(&___nl__3, tct0bool());
#line 867
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_none(___get_global_const(41)));
#line 867
c_rt_lib0move(&___nl__8, c_rt_lib0hash_mk(0));
#line 867
c_rt_lib0move(&___nl__7, tct0var(___nl__8));
#line 867
c_rt_lib0clear(&___nl__8);
#line 867
c_rt_lib0move(&___nl__8,___get_global_const(2));
#line 867
c_rt_lib0move(&___nl__5, c_rt_lib0hash_mk(3, ___get_global_const(222), ___nl__6, ___get_global_const(63), ___nl__7, ___get_global_const(93), ___nl__8));
#line 867
c_rt_lib0clear(&___nl__6);
#line 867
c_rt_lib0clear(&___nl__7);
#line 867
c_rt_lib0clear(&___nl__8);
#line 867
c_rt_lib0move(&___nl__7, c_rt_lib0ov_mk_none(___get_global_const(41)));
#line 867
c_rt_lib0move(&___nl__8, tct0sim());
#line 867
c_rt_lib0move(&___nl__9,___get_global_const(2));
#line 867
c_rt_lib0move(&___nl__6, c_rt_lib0hash_mk(3, ___get_global_const(222), ___nl__7, ___get_global_const(63), ___nl__8, ___get_global_const(93), ___nl__9));
#line 867
c_rt_lib0clear(&___nl__7);
#line 867
c_rt_lib0clear(&___nl__8);
#line 867
c_rt_lib0clear(&___nl__9);
#line 867
c_rt_lib0move(&___nl__4, c_rt_lib0array_mk(2, ___nl__5, ___nl__6));
#line 867
c_rt_lib0clear(&___nl__5);
#line 867
c_rt_lib0clear(&___nl__6);
#line 867
c_rt_lib0move(&___nl__2, c_rt_lib0hash_mk(2, ___get_global_const(250), ___nl__3, ___get_global_const(1121), ___nl__4));
#line 867
c_rt_lib0clear(&___nl__3);
#line 867
c_rt_lib0clear(&___nl__4);
#line 867
c_rt_lib0delete(hash0set_value(&___nl__0, ___nl__1, ___nl__2));
#line 867
c_rt_lib0clear(&___nl__2);
#line 867
c_rt_lib0clear(&___nl__1);
#line 869
c_rt_lib0move(&___nl__1,___get_global_const(751));
#line 870
c_rt_lib0move(&___nl__3, tct0tct_im());
#line 871
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_none(___get_global_const(41)));
#line 871
c_rt_lib0move(&___nl__8, c_rt_lib0hash_mk(0));
#line 871
c_rt_lib0move(&___nl__7, tct0var(___nl__8));
#line 871
c_rt_lib0clear(&___nl__8);
#line 871
c_rt_lib0move(&___nl__8,___get_global_const(2));
#line 871
c_rt_lib0move(&___nl__5, c_rt_lib0hash_mk(3, ___get_global_const(222), ___nl__6, ___get_global_const(63), ___nl__7, ___get_global_const(93), ___nl__8));
#line 871
c_rt_lib0clear(&___nl__6);
#line 871
c_rt_lib0clear(&___nl__7);
#line 871
c_rt_lib0clear(&___nl__8);
#line 871
c_rt_lib0move(&___nl__7, c_rt_lib0ov_mk_none(___get_global_const(41)));
#line 871
c_rt_lib0move(&___nl__8, tct0sim());
#line 871
c_rt_lib0move(&___nl__9,___get_global_const(2));
#line 871
c_rt_lib0move(&___nl__6, c_rt_lib0hash_mk(3, ___get_global_const(222), ___nl__7, ___get_global_const(63), ___nl__8, ___get_global_const(93), ___nl__9));
#line 871
c_rt_lib0clear(&___nl__7);
#line 871
c_rt_lib0clear(&___nl__8);
#line 871
c_rt_lib0clear(&___nl__9);
#line 871
c_rt_lib0move(&___nl__4, c_rt_lib0array_mk(2, ___nl__5, ___nl__6));
#line 871
c_rt_lib0clear(&___nl__5);
#line 871
c_rt_lib0clear(&___nl__6);
#line 871
c_rt_lib0move(&___nl__2, c_rt_lib0hash_mk(2, ___get_global_const(250), ___nl__3, ___get_global_const(1121), ___nl__4));
#line 871
c_rt_lib0clear(&___nl__3);
#line 871
c_rt_lib0clear(&___nl__4);
#line 871
c_rt_lib0delete(hash0set_value(&___nl__0, ___nl__1, ___nl__2));
#line 871
c_rt_lib0clear(&___nl__2);
#line 871
c_rt_lib0clear(&___nl__1);
#line 873
c_rt_lib0move(&___nl__1,___get_global_const(1220));
#line 873
c_rt_lib0move(&___nl__3, tct0sim());
#line 873
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_none(___get_global_const(41)));
#line 873
c_rt_lib0move(&___nl__7, tct0tct_im());
#line 873
c_rt_lib0move(&___nl__8,___get_global_const(2));
#line 873
c_rt_lib0move(&___nl__5, c_rt_lib0hash_mk(3, ___get_global_const(222), ___nl__6, ___get_global_const(63), ___nl__7, ___get_global_const(93), ___nl__8));
#line 873
c_rt_lib0clear(&___nl__6);
#line 873
c_rt_lib0clear(&___nl__7);
#line 873
c_rt_lib0clear(&___nl__8);
#line 873
c_rt_lib0move(&___nl__4, c_rt_lib0array_mk(1, ___nl__5));
#line 873
c_rt_lib0clear(&___nl__5);
#line 873
c_rt_lib0move(&___nl__2, c_rt_lib0hash_mk(2, ___get_global_const(250), ___nl__3, ___get_global_const(1121), ___nl__4));
#line 873
c_rt_lib0clear(&___nl__3);
#line 873
c_rt_lib0clear(&___nl__4);
#line 873
c_rt_lib0delete(hash0set_value(&___nl__0, ___nl__1, ___nl__2));
#line 873
c_rt_lib0clear(&___nl__2);
#line 873
c_rt_lib0clear(&___nl__1);
#line 874
c_rt_lib0move(&___nl__1,___get_global_const(737));
#line 874
c_rt_lib0move(&___nl__3, tct0sim());
#line 874
c_rt_lib0move(&___nl__4, c_rt_lib0array_mk(0));
#line 874
c_rt_lib0move(&___nl__2, c_rt_lib0hash_mk(2, ___get_global_const(250), ___nl__3, ___get_global_const(1121), ___nl__4));
#line 874
c_rt_lib0clear(&___nl__3);
#line 874
c_rt_lib0clear(&___nl__4);
#line 874
c_rt_lib0delete(hash0set_value(&___nl__0, ___nl__1, ___nl__2));
#line 874
c_rt_lib0clear(&___nl__2);
#line 874
c_rt_lib0clear(&___nl__1);
#line 875
c_rt_lib0move(&___nl__1,___get_global_const(739));
#line 875
c_rt_lib0move(&___nl__3, tct0sim());
#line 875
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_none(___get_global_const(41)));
#line 875
c_rt_lib0move(&___nl__7, tct0sim());
#line 875
c_rt_lib0move(&___nl__8,___get_global_const(2));
#line 875
c_rt_lib0move(&___nl__5, c_rt_lib0hash_mk(3, ___get_global_const(222), ___nl__6, ___get_global_const(63), ___nl__7, ___get_global_const(93), ___nl__8));
#line 875
c_rt_lib0clear(&___nl__6);
#line 875
c_rt_lib0clear(&___nl__7);
#line 875
c_rt_lib0clear(&___nl__8);
#line 875
c_rt_lib0move(&___nl__4, c_rt_lib0array_mk(1, ___nl__5));
#line 875
c_rt_lib0clear(&___nl__5);
#line 875
c_rt_lib0move(&___nl__2, c_rt_lib0hash_mk(2, ___get_global_const(250), ___nl__3, ___get_global_const(1121), ___nl__4));
#line 875
c_rt_lib0clear(&___nl__3);
#line 875
c_rt_lib0clear(&___nl__4);
#line 875
c_rt_lib0delete(hash0set_value(&___nl__0, ___nl__1, ___nl__2));
#line 875
c_rt_lib0clear(&___nl__2);
#line 875
c_rt_lib0clear(&___nl__1);
#line 876
c_rt_lib0move(&___nl__1,___get_global_const(740));
#line 877
c_rt_lib0move(&___nl__3, tct0sim());
#line 879
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_none(___get_global_const(41)));
#line 879
c_rt_lib0move(&___nl__7, tct0sim());
#line 879
c_rt_lib0move(&___nl__8,___get_global_const(2));
#line 879
c_rt_lib0move(&___nl__5, c_rt_lib0hash_mk(3, ___get_global_const(222), ___nl__6, ___get_global_const(63), ___nl__7, ___get_global_const(93), ___nl__8));
#line 879
c_rt_lib0clear(&___nl__6);
#line 879
c_rt_lib0clear(&___nl__7);
#line 879
c_rt_lib0clear(&___nl__8);
#line 880
c_rt_lib0move(&___nl__7, c_rt_lib0ov_mk_none(___get_global_const(41)));
#line 880
c_rt_lib0move(&___nl__8, tct0sim());
#line 880
c_rt_lib0move(&___nl__9,___get_global_const(2));
#line 880
c_rt_lib0move(&___nl__6, c_rt_lib0hash_mk(3, ___get_global_const(222), ___nl__7, ___get_global_const(63), ___nl__8, ___get_global_const(93), ___nl__9));
#line 880
c_rt_lib0clear(&___nl__7);
#line 880
c_rt_lib0clear(&___nl__8);
#line 880
c_rt_lib0clear(&___nl__9);
#line 881
c_rt_lib0move(&___nl__8, c_rt_lib0ov_mk_none(___get_global_const(41)));
#line 881
c_rt_lib0move(&___nl__9, tct0sim());
#line 881
c_rt_lib0move(&___nl__10,___get_global_const(2));
#line 881
c_rt_lib0move(&___nl__7, c_rt_lib0hash_mk(3, ___get_global_const(222), ___nl__8, ___get_global_const(63), ___nl__9, ___get_global_const(93), ___nl__10));
#line 881
c_rt_lib0clear(&___nl__8);
#line 881
c_rt_lib0clear(&___nl__9);
#line 881
c_rt_lib0clear(&___nl__10);
#line 881
c_rt_lib0move(&___nl__4, c_rt_lib0array_mk(3, ___nl__5, ___nl__6, ___nl__7));
#line 881
c_rt_lib0clear(&___nl__5);
#line 881
c_rt_lib0clear(&___nl__6);
#line 881
c_rt_lib0clear(&___nl__7);
#line 881
c_rt_lib0move(&___nl__2, c_rt_lib0hash_mk(2, ___get_global_const(250), ___nl__3, ___get_global_const(1121), ___nl__4));
#line 881
c_rt_lib0clear(&___nl__3);
#line 881
c_rt_lib0clear(&___nl__4);
#line 881
c_rt_lib0delete(hash0set_value(&___nl__0, ___nl__1, ___nl__2));
#line 881
c_rt_lib0clear(&___nl__2);
#line 881
c_rt_lib0clear(&___nl__1);
#line 884
c_rt_lib0move(&___nl__1,___get_global_const(1221));
#line 885
c_rt_lib0move(&___nl__3, tct0sim());
#line 887
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_none(___get_global_const(41)));
#line 887
c_rt_lib0move(&___nl__7, tct0sim());
#line 887
c_rt_lib0move(&___nl__8,___get_global_const(2));
#line 887
c_rt_lib0move(&___nl__5, c_rt_lib0hash_mk(3, ___get_global_const(222), ___nl__6, ___get_global_const(63), ___nl__7, ___get_global_const(93), ___nl__8));
#line 887
c_rt_lib0clear(&___nl__6);
#line 887
c_rt_lib0clear(&___nl__7);
#line 887
c_rt_lib0clear(&___nl__8);
#line 888
c_rt_lib0move(&___nl__7, c_rt_lib0ov_mk_none(___get_global_const(41)));
#line 888
c_rt_lib0move(&___nl__8, tct0sim());
#line 888
c_rt_lib0move(&___nl__9,___get_global_const(2));
#line 888
c_rt_lib0move(&___nl__6, c_rt_lib0hash_mk(3, ___get_global_const(222), ___nl__7, ___get_global_const(63), ___nl__8, ___get_global_const(93), ___nl__9));
#line 888
c_rt_lib0clear(&___nl__7);
#line 888
c_rt_lib0clear(&___nl__8);
#line 888
c_rt_lib0clear(&___nl__9);
#line 889
c_rt_lib0move(&___nl__8, c_rt_lib0ov_mk_none(___get_global_const(41)));
#line 889
c_rt_lib0move(&___nl__9, tct0sim());
#line 889
c_rt_lib0move(&___nl__10,___get_global_const(2));
#line 889
c_rt_lib0move(&___nl__7, c_rt_lib0hash_mk(3, ___get_global_const(222), ___nl__8, ___get_global_const(63), ___nl__9, ___get_global_const(93), ___nl__10));
#line 889
c_rt_lib0clear(&___nl__8);
#line 889
c_rt_lib0clear(&___nl__9);
#line 889
c_rt_lib0clear(&___nl__10);
#line 889
c_rt_lib0move(&___nl__4, c_rt_lib0array_mk(3, ___nl__5, ___nl__6, ___nl__7));
#line 889
c_rt_lib0clear(&___nl__5);
#line 889
c_rt_lib0clear(&___nl__6);
#line 889
c_rt_lib0clear(&___nl__7);
#line 889
c_rt_lib0move(&___nl__2, c_rt_lib0hash_mk(2, ___get_global_const(250), ___nl__3, ___get_global_const(1121), ___nl__4));
#line 889
c_rt_lib0clear(&___nl__3);
#line 889
c_rt_lib0clear(&___nl__4);
#line 889
c_rt_lib0delete(hash0set_value(&___nl__0, ___nl__1, ___nl__2));
#line 889
c_rt_lib0clear(&___nl__2);
#line 889
c_rt_lib0clear(&___nl__1);
#line 892
c_rt_lib0move(&___nl__1,___get_global_const(744));
#line 892
c_rt_lib0move(&___nl__3, tct0sim());
#line 892
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_none(___get_global_const(41)));
#line 892
c_rt_lib0move(&___nl__7, tct0sim());
#line 892
c_rt_lib0move(&___nl__8,___get_global_const(2));
#line 892
c_rt_lib0move(&___nl__5, c_rt_lib0hash_mk(3, ___get_global_const(222), ___nl__6, ___get_global_const(63), ___nl__7, ___get_global_const(93), ___nl__8));
#line 892
c_rt_lib0clear(&___nl__6);
#line 892
c_rt_lib0clear(&___nl__7);
#line 892
c_rt_lib0clear(&___nl__8);
#line 892
c_rt_lib0move(&___nl__4, c_rt_lib0array_mk(1, ___nl__5));
#line 892
c_rt_lib0clear(&___nl__5);
#line 892
c_rt_lib0move(&___nl__2, c_rt_lib0hash_mk(2, ___get_global_const(250), ___nl__3, ___get_global_const(1121), ___nl__4));
#line 892
c_rt_lib0clear(&___nl__3);
#line 892
c_rt_lib0clear(&___nl__4);
#line 892
c_rt_lib0delete(hash0set_value(&___nl__0, ___nl__1, ___nl__2));
#line 892
c_rt_lib0clear(&___nl__2);
#line 892
c_rt_lib0clear(&___nl__1);
#line 893
c_rt_lib0move(&___nl__1,___get_global_const(743));
#line 893
c_rt_lib0move(&___nl__3, tct0sim());
#line 893
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_none(___get_global_const(41)));
#line 893
c_rt_lib0move(&___nl__7, tct0sim());
#line 893
c_rt_lib0move(&___nl__8,___get_global_const(2));
#line 893
c_rt_lib0move(&___nl__5, c_rt_lib0hash_mk(3, ___get_global_const(222), ___nl__6, ___get_global_const(63), ___nl__7, ___get_global_const(93), ___nl__8));
#line 893
c_rt_lib0clear(&___nl__6);
#line 893
c_rt_lib0clear(&___nl__7);
#line 893
c_rt_lib0clear(&___nl__8);
#line 893
c_rt_lib0move(&___nl__4, c_rt_lib0array_mk(1, ___nl__5));
#line 893
c_rt_lib0clear(&___nl__5);
#line 893
c_rt_lib0move(&___nl__2, c_rt_lib0hash_mk(2, ___get_global_const(250), ___nl__3, ___get_global_const(1121), ___nl__4));
#line 893
c_rt_lib0clear(&___nl__3);
#line 893
c_rt_lib0clear(&___nl__4);
#line 893
c_rt_lib0delete(hash0set_value(&___nl__0, ___nl__1, ___nl__2));
#line 893
c_rt_lib0clear(&___nl__2);
#line 893
c_rt_lib0clear(&___nl__1);
#line 894
c_rt_lib0move(&___nl__1,___get_global_const(1222));
#line 895
c_rt_lib0move(&___nl__4, tct0sim());
#line 895
c_rt_lib0move(&___nl__3, tct0arr(___nl__4));
#line 895
c_rt_lib0clear(&___nl__4);
#line 896
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_none(___get_global_const(41)));
#line 896
c_rt_lib0move(&___nl__7, tct0sim());
#line 896
c_rt_lib0move(&___nl__8,___get_global_const(2));
#line 896
c_rt_lib0move(&___nl__5, c_rt_lib0hash_mk(3, ___get_global_const(222), ___nl__6, ___get_global_const(63), ___nl__7, ___get_global_const(93), ___nl__8));
#line 896
c_rt_lib0clear(&___nl__6);
#line 896
c_rt_lib0clear(&___nl__7);
#line 896
c_rt_lib0clear(&___nl__8);
#line 896
c_rt_lib0move(&___nl__7, c_rt_lib0ov_mk_none(___get_global_const(41)));
#line 896
c_rt_lib0move(&___nl__8, tct0sim());
#line 896
c_rt_lib0move(&___nl__9,___get_global_const(2));
#line 896
c_rt_lib0move(&___nl__6, c_rt_lib0hash_mk(3, ___get_global_const(222), ___nl__7, ___get_global_const(63), ___nl__8, ___get_global_const(93), ___nl__9));
#line 896
c_rt_lib0clear(&___nl__7);
#line 896
c_rt_lib0clear(&___nl__8);
#line 896
c_rt_lib0clear(&___nl__9);
#line 896
c_rt_lib0move(&___nl__4, c_rt_lib0array_mk(2, ___nl__5, ___nl__6));
#line 896
c_rt_lib0clear(&___nl__5);
#line 896
c_rt_lib0clear(&___nl__6);
#line 896
c_rt_lib0move(&___nl__2, c_rt_lib0hash_mk(2, ___get_global_const(250), ___nl__3, ___get_global_const(1121), ___nl__4));
#line 896
c_rt_lib0clear(&___nl__3);
#line 896
c_rt_lib0clear(&___nl__4);
#line 896
c_rt_lib0delete(hash0set_value(&___nl__0, ___nl__1, ___nl__2));
#line 896
c_rt_lib0clear(&___nl__2);
#line 896
c_rt_lib0clear(&___nl__1);
#line 898
c_rt_lib0move(&___nl__1,___get_global_const(1223));
#line 899
c_rt_lib0move(&___nl__3, tct0sim());
#line 901
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_none(___get_global_const(41)));
#line 901
c_rt_lib0move(&___nl__7, tct0tct_im());
#line 901
c_rt_lib0move(&___nl__8,___get_global_const(2));
#line 901
c_rt_lib0move(&___nl__5, c_rt_lib0hash_mk(3, ___get_global_const(222), ___nl__6, ___get_global_const(63), ___nl__7, ___get_global_const(93), ___nl__8));
#line 901
c_rt_lib0clear(&___nl__6);
#line 901
c_rt_lib0clear(&___nl__7);
#line 901
c_rt_lib0clear(&___nl__8);
#line 902
c_rt_lib0move(&___nl__7, c_rt_lib0ov_mk_none(___get_global_const(41)));
#line 902
c_rt_lib0move(&___nl__8, tct0tct_im());
#line 902
c_rt_lib0move(&___nl__9,___get_global_const(2));
#line 902
c_rt_lib0move(&___nl__6, c_rt_lib0hash_mk(3, ___get_global_const(222), ___nl__7, ___get_global_const(63), ___nl__8, ___get_global_const(93), ___nl__9));
#line 902
c_rt_lib0clear(&___nl__7);
#line 902
c_rt_lib0clear(&___nl__8);
#line 902
c_rt_lib0clear(&___nl__9);
#line 903
c_rt_lib0move(&___nl__8, c_rt_lib0ov_mk_none(___get_global_const(41)));
#line 903
c_rt_lib0move(&___nl__9, tct0tct_im());
#line 903
c_rt_lib0move(&___nl__10,___get_global_const(2));
#line 903
c_rt_lib0move(&___nl__7, c_rt_lib0hash_mk(3, ___get_global_const(222), ___nl__8, ___get_global_const(63), ___nl__9, ___get_global_const(93), ___nl__10));
#line 903
c_rt_lib0clear(&___nl__8);
#line 903
c_rt_lib0clear(&___nl__9);
#line 903
c_rt_lib0clear(&___nl__10);
#line 903
c_rt_lib0move(&___nl__4, c_rt_lib0array_mk(3, ___nl__5, ___nl__6, ___nl__7));
#line 903
c_rt_lib0clear(&___nl__5);
#line 903
c_rt_lib0clear(&___nl__6);
#line 903
c_rt_lib0clear(&___nl__7);
#line 903
c_rt_lib0move(&___nl__2, c_rt_lib0hash_mk(2, ___get_global_const(250), ___nl__3, ___get_global_const(1121), ___nl__4));
#line 903
c_rt_lib0clear(&___nl__3);
#line 903
c_rt_lib0clear(&___nl__4);
#line 903
c_rt_lib0delete(hash0set_value(&___nl__0, ___nl__1, ___nl__2));
#line 903
c_rt_lib0clear(&___nl__2);
#line 903
c_rt_lib0clear(&___nl__1);
#line 906
c_rt_lib0move(&___nl__1,___get_global_const(1224));
#line 907
c_rt_lib0move(&___nl__3, tct0tct_im());
#line 908
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_none(___get_global_const(41)));
#line 908
c_rt_lib0move(&___nl__7, tct0tct_im());
#line 908
c_rt_lib0move(&___nl__8,___get_global_const(2));
#line 908
c_rt_lib0move(&___nl__5, c_rt_lib0hash_mk(3, ___get_global_const(222), ___nl__6, ___get_global_const(63), ___nl__7, ___get_global_const(93), ___nl__8));
#line 908
c_rt_lib0clear(&___nl__6);
#line 908
c_rt_lib0clear(&___nl__7);
#line 908
c_rt_lib0clear(&___nl__8);
#line 908
c_rt_lib0move(&___nl__4, c_rt_lib0array_mk(1, ___nl__5));
#line 908
c_rt_lib0clear(&___nl__5);
#line 908
c_rt_lib0move(&___nl__2, c_rt_lib0hash_mk(2, ___get_global_const(250), ___nl__3, ___get_global_const(1121), ___nl__4));
#line 908
c_rt_lib0clear(&___nl__3);
#line 908
c_rt_lib0clear(&___nl__4);
#line 908
c_rt_lib0delete(hash0set_value(&___nl__0, ___nl__1, ___nl__2));
#line 908
c_rt_lib0clear(&___nl__2);
#line 908
c_rt_lib0clear(&___nl__1);
#line 910
c_rt_lib0move(&___nl__1, singleton0sigleton_do_not_use_without_approval(___nl__0));
#line 910
c_rt_lib0clear(&___nl__0);
#line 910
return ___nl__1;
#line 910
c_rt_lib0clear(&___nl__1);
#line 910
c_rt_lib0clear(&___nl__0);
#line 910
return NULL;
}

ImmT type_checker_priv0get_special_function_def(ImmT ___nl__0,ImmT ___nl__1) {
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
#line 914
c_rt_lib0move(&___nl__2, type_checker_priv0get_special_functions());
#line 916
c_rt_lib0move(&___nl__5, nast0empty_debug());
#line 916
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_none(___get_global_const(831)));
#line 916
c_rt_lib0move(&___nl__4, c_rt_lib0hash_mk(2, ___get_global_const(195), ___nl__5, ___get_global_const(201), ___nl__6));
#line 916
c_rt_lib0clear(&___nl__5);
#line 916
c_rt_lib0clear(&___nl__6);
#line 917
c_rt_lib0move(&___nl__5, c_rt_lib0ov_mk_none(___get_global_const(46)));
#line 918
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_none(___get_global_const(46)));
#line 921
c_rt_lib0move(&___nl__7, c_rt_lib0ov_mk_none(___get_global_const(183)));
#line 922
c_rt_lib0move(&___nl__8, c_rt_lib0array_mk(0));
#line 923
c_rt_lib0move(&___nl__9, tct0empty());
#line 923
c_rt_lib0move(&___nl__3, c_rt_lib0hash_mk(8, ___get_global_const(201), ___nl__4, ___get_global_const(1096), ___nl__5, ___get_global_const(1091), ___nl__6, ___get_global_const(93), ___nl__1, ___get_global_const(132), ___nl__0, ___get_global_const(182), ___nl__7, ___get_global_const(89), ___nl__8, ___get_global_const(788), ___nl__9));
#line 923
c_rt_lib0clear(&___nl__4);
#line 923
c_rt_lib0clear(&___nl__5);
#line 923
c_rt_lib0clear(&___nl__6);
#line 923
c_rt_lib0clear(&___nl__7);
#line 923
c_rt_lib0clear(&___nl__8);
#line 923
c_rt_lib0clear(&___nl__9);
#line 925
c_rt_lib0move(&___nl__4, type_checker_priv0get_function_name(___nl__0, ___nl__1));
#line 925
c_rt_lib0copy(&___nl__1, ___nl__4);
#line 925
c_rt_lib0clear(&___nl__4);
#line 926
c_rt_lib0move(&___nl__4, hash0has_key(___nl__2, ___nl__1));
#line 926
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 926
if(c_rt_lib0check_true_native(___nl__4)){ goto label_37;}
#line 927
c_rt_lib0move(&___nl__5, hash0get_value(___nl__2, ___nl__1));
#line 928
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(1121)));
#line 928
c_rt_lib0copy(&___nl__7, ___nl__6);
#line 928
c_rt_lib0hash_set_value_dec(&___nl__3, ___get_global_const(89), ___nl__7);
#line 928
c_rt_lib0clear(&___nl__6);
#line 928
c_rt_lib0clear(&___nl__7);
#line 929
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(250)));
#line 929
c_rt_lib0copy(&___nl__7, ___nl__6);
#line 929
c_rt_lib0hash_set_value_dec(&___nl__3, ___get_global_const(788), ___nl__7);
#line 929
c_rt_lib0clear(&___nl__6);
#line 929
c_rt_lib0clear(&___nl__7);
#line 929
c_rt_lib0clear(&___nl__5);
#line 930
goto label_44;
#line 930
label_37:
#line 931
c_rt_lib0move(&___nl__5, c_rt_lib0ov_mk_none(___get_global_const(379)));
#line 931
c_rt_lib0copy(&___nl__6, ___nl__5);
#line 931
c_rt_lib0hash_set_value_dec(&___nl__3, ___get_global_const(182), ___nl__6);
#line 931
c_rt_lib0clear(&___nl__5);
#line 931
c_rt_lib0clear(&___nl__6);
#line 932
goto label_44;
#line 932
label_44:
#line 932
c_rt_lib0clear(&___nl__4);
#line 933
c_rt_lib0clear(&___nl__0);
#line 933
c_rt_lib0clear(&___nl__1);
#line 933
c_rt_lib0clear(&___nl__2);
#line 933
return ___nl__3;
#line 933
c_rt_lib0clear(&___nl__2);
#line 933
c_rt_lib0clear(&___nl__3);
#line 933
c_rt_lib0clear(&___nl__0);
#line 933
c_rt_lib0clear(&___nl__1);
#line 933
return NULL;
}

ImmT type_checker_priv0check_special_function(ImmT ___nl__0,ImmT ___nl__1,ImmT ___nl__2,ImmT * ___ref___3,ImmT * ___ref___4,ImmT * ___ref___5) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
c_rt_lib0arg_val(___nl__2);
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
#line 939
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(132)));
#line 939
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(93)));
#line 939
c_rt_lib0move(&___nl__6, type_checker_priv0get_function_name(___nl__7, ___nl__8));
#line 939
c_rt_lib0clear(&___nl__8);
#line 939
c_rt_lib0clear(&___nl__7);
#line 940
c_rt_lib0move(&___nl__7,___get_global_const(770));
#line 940
c_rt_lib0move(&___nl__7, c_rt_lib0eq(___nl__6, ___nl__7));
#line 940
if(c_rt_lib0check_true_native(___nl__7)){ goto label_10;}
#line 940
c_rt_lib0move(&___nl__7,___get_global_const(1214));
#line 940
c_rt_lib0move(&___nl__7, c_rt_lib0eq(___nl__6, ___nl__7));
#line 940
label_10:
#line 940
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 940
if(c_rt_lib0check_true_native(___nl__7)){ goto label_68;}
#line 941
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(89)));
#line 941
c_rt_lib0move(&___nl__10,___get_global_const(0));
#line 941
c_rt_lib0move(&___nl__9, c_rt_lib0array_get(___nl__9, ___nl__10));
#line 941
c_rt_lib0clear(&___nl__10);
#line 941
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__9, ___get_global_const(198)));
#line 941
c_rt_lib0move(&___nl__8, ptd_parser0try_value_to_ptd(___nl__9));
#line 941
c_rt_lib0clear(&___nl__9);
#line 941
c_rt_lib0move(&___nl__9, c_rt_lib0priv_is(___nl__8, ___get_global_const(47)));
#line 941
if(c_rt_lib0check_true_native(___nl__9)){ goto label_27;}
#line 944
c_rt_lib0move(&___nl__9, c_rt_lib0priv_is(___nl__8, ___get_global_const(48)));
#line 944
if(c_rt_lib0check_true_native(___nl__9)){ goto label_37;}
#line 944
c_rt_lib0move(&___nl__9,___get_global_const(91));
#line 944
c_rt_lib0move(&___nl__9, c_rt_lib0array_mk(2, ___nl__9, ___nl__8));
#line 944
nl_die_arg(___nl__9);
#line 941
label_27:
#line 941
c_rt_lib0move(&___nl__10, c_rt_lib0priv_as(___nl__8, ___get_global_const(47)));
#line 942
c_rt_lib0delete(type_checker_priv0add_error(___ref___5, ___nl__10));
#line 943
c_rt_lib0move(&___nl__11, tct0tct_im());
#line 943
c_rt_lib0copy(&___nl__12, ___nl__11);
#line 943
c_rt_lib0hash_set_value_dec(&___nl__0, ___get_global_const(63), ___nl__12);
#line 943
c_rt_lib0clear(&___nl__11);
#line 943
c_rt_lib0clear(&___nl__12);
#line 943
c_rt_lib0clear(&___nl__10);
#line 944
goto label_64;
#line 944
label_37:
#line 944
c_rt_lib0move(&___nl__10, c_rt_lib0priv_as(___nl__8, ___get_global_const(48)));
#line 945
c_rt_lib0move(&___nl__13,___get_global_const(1));
#line 945
c_rt_lib0move(&___nl__12, c_rt_lib0array_get(___nl__2, ___nl__13));
#line 945
c_rt_lib0clear(&___nl__13);
#line 945
c_rt_lib0move(&___nl__11, ptd_system0cast_type(___nl__10, ___nl__12, ___ref___3, ___ref___5));
#line 945
c_rt_lib0clear(&___nl__12);
#line 946
c_rt_lib0copy(&___nl__12, ___nl__11);
#line 946
c_rt_lib0move(&___nl__12, c_rt_lib0priv_is(___nl__12, ___get_global_const(47)));
#line 946
c_rt_lib0move(&___nl__12, c_rt_lib0not(___nl__12));
#line 946
if(c_rt_lib0check_true_native(___nl__12)){ goto label_55;}
#line 947
c_rt_lib0move(&___nl__13,___get_global_const(1225));
#line 947
c_rt_lib0move(&___nl__14, type_checker_priv0get_print_check_info(___nl__11));
#line 947
c_rt_lib0move(&___nl__13, c_rt_lib0concat_add(___nl__13, ___nl__14));
#line 947
c_rt_lib0clear(&___nl__14);
#line 947
c_rt_lib0delete(type_checker_priv0add_error(___ref___5, ___nl__13));
#line 947
c_rt_lib0clear(&___nl__13);
#line 948
goto label_55;
#line 948
label_55:
#line 948
c_rt_lib0clear(&___nl__12);
#line 949
c_rt_lib0copy(&___nl__12, ___nl__10);
#line 949
c_rt_lib0hash_set_value_dec(&___nl__0, ___get_global_const(63), ___nl__12);
#line 949
c_rt_lib0clear(&___nl__12);
#line 950
c_rt_lib0delete(type_checker_priv0check_types_imported(___nl__10, ___ref___3, ___ref___5));
#line 950
c_rt_lib0clear(&___nl__11);
#line 950
c_rt_lib0clear(&___nl__10);
#line 951
goto label_64;
#line 951
label_64:
#line 951
c_rt_lib0clear(&___nl__8);
#line 951
c_rt_lib0clear(&___nl__9);
#line 952
goto label_68;
#line 952
label_68:
#line 952
c_rt_lib0clear(&___nl__7);
#line 953
c_rt_lib0move(&___nl__7,___get_global_const(1213));
#line 953
c_rt_lib0move(&___nl__7, c_rt_lib0eq(___nl__6, ___nl__7));
#line 953
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 953
if(c_rt_lib0check_true_native(___nl__7)){ goto label_157;}
#line 954
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(89)));
#line 954
c_rt_lib0move(&___nl__10,___get_global_const(0));
#line 954
c_rt_lib0move(&___nl__9, c_rt_lib0array_get(___nl__9, ___nl__10));
#line 954
c_rt_lib0clear(&___nl__10);
#line 954
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__9, ___get_global_const(198)));
#line 954
c_rt_lib0move(&___nl__8, ptd_parser0try_value_to_ptd(___nl__9));
#line 954
c_rt_lib0clear(&___nl__9);
#line 954
c_rt_lib0move(&___nl__9, c_rt_lib0priv_is(___nl__8, ___get_global_const(47)));
#line 954
if(c_rt_lib0check_true_native(___nl__9)){ goto label_88;}
#line 957
c_rt_lib0move(&___nl__9, c_rt_lib0priv_is(___nl__8, ___get_global_const(48)));
#line 957
if(c_rt_lib0check_true_native(___nl__9)){ goto label_98;}
#line 957
c_rt_lib0move(&___nl__9,___get_global_const(91));
#line 957
c_rt_lib0move(&___nl__9, c_rt_lib0array_mk(2, ___nl__9, ___nl__8));
#line 957
nl_die_arg(___nl__9);
#line 954
label_88:
#line 954
c_rt_lib0move(&___nl__10, c_rt_lib0priv_as(___nl__8, ___get_global_const(47)));
#line 955
c_rt_lib0delete(type_checker_priv0add_error(___ref___5, ___nl__10));
#line 956
c_rt_lib0move(&___nl__11, tct0tct_im());
#line 956
c_rt_lib0copy(&___nl__12, ___nl__11);
#line 956
c_rt_lib0hash_set_value_dec(&___nl__0, ___get_global_const(63), ___nl__12);
#line 956
c_rt_lib0clear(&___nl__11);
#line 956
c_rt_lib0clear(&___nl__12);
#line 956
c_rt_lib0clear(&___nl__10);
#line 957
goto label_153;
#line 957
label_98:
#line 957
c_rt_lib0move(&___nl__10, c_rt_lib0priv_as(___nl__8, ___get_global_const(48)));
#line 958
c_rt_lib0move(&___nl__12, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(132)));
#line 958
c_rt_lib0move(&___nl__13, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(93)));
#line 958
c_rt_lib0move(&___nl__11, type_checker_priv0get_function_def(___nl__12, ___nl__13, *___ref___3));
#line 958
c_rt_lib0clear(&___nl__13);
#line 958
c_rt_lib0clear(&___nl__12);
#line 959
c_rt_lib0move(&___nl__13, c_rt_lib0hash_get_value_dec(___nl__11, ___get_global_const(788)));
#line 959
c_rt_lib0move(&___nl__14, c_rt_lib0ov_mk_none(___get_global_const(1079)));
#line 959
c_rt_lib0move(&___nl__12, c_rt_lib0hash_mk(2, ___get_global_const(63), ___nl__13, ___get_global_const(43), ___nl__14));
#line 959
c_rt_lib0clear(&___nl__13);
#line 959
c_rt_lib0clear(&___nl__14);
#line 960
c_rt_lib0move(&___nl__13, ptd_system0can_delete(___nl__12, ___ref___3, ___ref___5));
#line 960
c_rt_lib0move(&___nl__13, c_rt_lib0hash_get_value_dec(___nl__13, ___get_global_const(63)));
#line 960
c_rt_lib0copy(&___nl__14, ___nl__13);
#line 960
c_rt_lib0hash_set_value_dec(&___nl__0, ___get_global_const(63), ___nl__14);
#line 960
c_rt_lib0clear(&___nl__13);
#line 960
c_rt_lib0clear(&___nl__14);
#line 961
c_rt_lib0move(&___nl__13, ptd_system0is_try_ensure_type(___nl__0, ___ref___3, ___ref___5));
#line 961
c_rt_lib0move(&___nl__13, c_rt_lib0not(___nl__13));
#line 961
if(c_rt_lib0check_true_native(___nl__13)){ goto label_141;}
#line 962
c_rt_lib0move(&___nl__17, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(63)));
#line 962
c_rt_lib0move(&___nl__18,___get_global_const(47));
#line 962
c_rt_lib0move(&___nl__16, tct0try_var_as_case(___nl__17, ___nl__18));
#line 962
c_rt_lib0clear(&___nl__18);
#line 962
c_rt_lib0clear(&___nl__17);
#line 962
c_rt_lib0move(&___nl__15, c_rt_lib0priv_is(___nl__16, ___get_global_const(48)));
#line 962
if(c_rt_lib0check_true_native(___nl__15)){ goto label_128;}
#line 962
c_rt_lib0move(&___nl__16, c_rt_lib0ov_mk_arg(___get_global_const(95), ___nl__16));
#line 962
nl_die_arg(___nl__16);
#line 962
label_128:
#line 962
c_rt_lib0move(&___nl__14, c_rt_lib0priv_as(___nl__16, ___get_global_const(48)));
#line 962
c_rt_lib0clear(&___nl__15);
#line 962
c_rt_lib0clear(&___nl__16);
#line 963
c_rt_lib0move(&___nl__16, c_rt_lib0hash_mk(2, ___get_global_const(48), ___nl__10, ___get_global_const(47), ___nl__14));
#line 963
c_rt_lib0move(&___nl__15, tct0var(___nl__16));
#line 963
c_rt_lib0clear(&___nl__16);
#line 963
c_rt_lib0copy(&___nl__16, ___nl__15);
#line 963
c_rt_lib0hash_set_value_dec(&___nl__0, ___get_global_const(63), ___nl__16);
#line 963
c_rt_lib0clear(&___nl__15);
#line 963
c_rt_lib0clear(&___nl__16);
#line 963
c_rt_lib0clear(&___nl__14);
#line 964
goto label_146;
#line 964
label_141:
#line 965
c_rt_lib0move(&___nl__14,___get_global_const(1226));
#line 965
c_rt_lib0delete(type_checker_priv0add_error(___ref___5, ___nl__14));
#line 965
c_rt_lib0clear(&___nl__14);
#line 966
goto label_146;
#line 966
label_146:
#line 966
c_rt_lib0clear(&___nl__13);
#line 967
c_rt_lib0delete(type_checker_priv0check_types_imported(___nl__10, ___ref___3, ___ref___5));
#line 967
c_rt_lib0clear(&___nl__11);
#line 967
c_rt_lib0clear(&___nl__12);
#line 967
c_rt_lib0clear(&___nl__10);
#line 968
goto label_153;
#line 968
label_153:
#line 968
c_rt_lib0clear(&___nl__8);
#line 968
c_rt_lib0clear(&___nl__9);
#line 969
goto label_157;
#line 969
label_157:
#line 969
c_rt_lib0clear(&___nl__7);
#line 970
c_rt_lib0move(&___nl__7,___get_global_const(725));
#line 970
c_rt_lib0move(&___nl__7, c_rt_lib0eq(___nl__6, ___nl__7));
#line 970
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 970
if(c_rt_lib0check_true_native(___nl__7)){ goto label_198;}
#line 971
c_rt_lib0move(&___nl__10,___get_global_const(1));
#line 971
c_rt_lib0move(&___nl__9, c_rt_lib0array_get(___nl__2, ___nl__10));
#line 971
c_rt_lib0clear(&___nl__10);
#line 971
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__9, ___get_global_const(63)));
#line 971
c_rt_lib0move(&___nl__8, tct0arr(___nl__9));
#line 971
c_rt_lib0clear(&___nl__9);
#line 971
c_rt_lib0move(&___nl__10,___get_global_const(1));
#line 971
c_rt_lib0move(&___nl__9, c_rt_lib0get_ref_arr(___nl__2, ___nl__10));
#line 971
c_rt_lib0copy(&___nl__11, ___nl__8);
#line 971
c_rt_lib0hash_set_value_dec(&___nl__9, ___get_global_const(63), ___nl__11);
#line 971
c_rt_lib0delete(c_rt_lib0set_ref_arr(&___nl__2, ___nl__10, ___nl__9));
#line 971
c_rt_lib0clear(&___nl__8);
#line 971
c_rt_lib0clear(&___nl__9);
#line 971
c_rt_lib0clear(&___nl__10);
#line 971
c_rt_lib0clear(&___nl__11);
#line 972
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(89)));
#line 972
c_rt_lib0move(&___nl__9,___get_global_const(0));
#line 972
c_rt_lib0move(&___nl__8, c_rt_lib0array_get(___nl__8, ___nl__9));
#line 972
c_rt_lib0clear(&___nl__9);
#line 972
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__8, ___get_global_const(198)));
#line 972
c_rt_lib0move(&___nl__10,___get_global_const(0));
#line 972
c_rt_lib0move(&___nl__9, c_rt_lib0array_get(___nl__2, ___nl__10));
#line 972
c_rt_lib0clear(&___nl__10);
#line 972
c_rt_lib0move(&___nl__11,___get_global_const(1));
#line 972
c_rt_lib0move(&___nl__10, c_rt_lib0array_get(___nl__2, ___nl__11));
#line 972
c_rt_lib0clear(&___nl__11);
#line 972
c_rt_lib0move(&___nl__12, tct0empty());
#line 972
c_rt_lib0move(&___nl__11, tct0arr(___nl__12));
#line 972
c_rt_lib0clear(&___nl__12);
#line 972
c_rt_lib0delete(type_checker_priv0set_type_to_lval_spec(___nl__8, ___nl__9, ___nl__10, ___nl__11, ___ref___3, ___ref___4, ___ref___5));
#line 972
c_rt_lib0clear(&___nl__11);
#line 972
c_rt_lib0clear(&___nl__10);
#line 972
c_rt_lib0clear(&___nl__9);
#line 972
c_rt_lib0clear(&___nl__8);
#line 974
goto label_198;
#line 974
label_198:
#line 974
c_rt_lib0clear(&___nl__7);
#line 975
c_rt_lib0move(&___nl__7,___get_global_const(1215));
#line 975
c_rt_lib0move(&___nl__7, c_rt_lib0eq(___nl__6, ___nl__7));
#line 975
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 975
if(c_rt_lib0check_true_native(___nl__7)){ goto label_239;}
#line 976
c_rt_lib0move(&___nl__10,___get_global_const(6));
#line 976
c_rt_lib0move(&___nl__9, c_rt_lib0array_get(___nl__2, ___nl__10));
#line 976
c_rt_lib0clear(&___nl__10);
#line 976
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__9, ___get_global_const(63)));
#line 976
c_rt_lib0move(&___nl__8, tct0arr(___nl__9));
#line 976
c_rt_lib0clear(&___nl__9);
#line 976
c_rt_lib0move(&___nl__10,___get_global_const(6));
#line 976
c_rt_lib0move(&___nl__9, c_rt_lib0get_ref_arr(___nl__2, ___nl__10));
#line 976
c_rt_lib0copy(&___nl__11, ___nl__8);
#line 976
c_rt_lib0hash_set_value_dec(&___nl__9, ___get_global_const(63), ___nl__11);
#line 976
c_rt_lib0delete(c_rt_lib0set_ref_arr(&___nl__2, ___nl__10, ___nl__9));
#line 976
c_rt_lib0clear(&___nl__8);
#line 976
c_rt_lib0clear(&___nl__9);
#line 976
c_rt_lib0clear(&___nl__10);
#line 976
c_rt_lib0clear(&___nl__11);
#line 977
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(89)));
#line 977
c_rt_lib0move(&___nl__9,___get_global_const(0));
#line 977
c_rt_lib0move(&___nl__8, c_rt_lib0array_get(___nl__8, ___nl__9));
#line 977
c_rt_lib0clear(&___nl__9);
#line 977
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__8, ___get_global_const(198)));
#line 977
c_rt_lib0move(&___nl__10,___get_global_const(0));
#line 977
c_rt_lib0move(&___nl__9, c_rt_lib0array_get(___nl__2, ___nl__10));
#line 977
c_rt_lib0clear(&___nl__10);
#line 977
c_rt_lib0move(&___nl__11,___get_global_const(6));
#line 977
c_rt_lib0move(&___nl__10, c_rt_lib0array_get(___nl__2, ___nl__11));
#line 977
c_rt_lib0clear(&___nl__11);
#line 977
c_rt_lib0move(&___nl__12, tct0empty());
#line 977
c_rt_lib0move(&___nl__11, tct0arr(___nl__12));
#line 977
c_rt_lib0clear(&___nl__12);
#line 977
c_rt_lib0delete(type_checker_priv0set_type_to_lval_spec(___nl__8, ___nl__9, ___nl__10, ___nl__11, ___ref___3, ___ref___4, ___ref___5));
#line 977
c_rt_lib0clear(&___nl__11);
#line 977
c_rt_lib0clear(&___nl__10);
#line 977
c_rt_lib0clear(&___nl__9);
#line 977
c_rt_lib0clear(&___nl__8);
#line 979
goto label_239;
#line 979
label_239:
#line 979
c_rt_lib0clear(&___nl__7);
#line 980
c_rt_lib0move(&___nl__7,___get_global_const(728));
#line 980
c_rt_lib0move(&___nl__7, c_rt_lib0eq(___nl__6, ___nl__7));
#line 980
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 980
if(c_rt_lib0check_true_native(___nl__7)){ goto label_265;}
#line 981
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(89)));
#line 981
c_rt_lib0move(&___nl__9,___get_global_const(0));
#line 981
c_rt_lib0move(&___nl__8, c_rt_lib0array_get(___nl__8, ___nl__9));
#line 981
c_rt_lib0clear(&___nl__9);
#line 981
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__8, ___get_global_const(198)));
#line 981
c_rt_lib0move(&___nl__10,___get_global_const(0));
#line 981
c_rt_lib0move(&___nl__9, c_rt_lib0array_get(___nl__2, ___nl__10));
#line 981
c_rt_lib0clear(&___nl__10);
#line 981
c_rt_lib0move(&___nl__11,___get_global_const(1));
#line 981
c_rt_lib0move(&___nl__10, c_rt_lib0array_get(___nl__2, ___nl__11));
#line 981
c_rt_lib0clear(&___nl__11);
#line 981
c_rt_lib0move(&___nl__12, tct0empty());
#line 981
c_rt_lib0move(&___nl__11, tct0arr(___nl__12));
#line 981
c_rt_lib0clear(&___nl__12);
#line 981
c_rt_lib0delete(type_checker_priv0set_type_to_lval_spec(___nl__8, ___nl__9, ___nl__10, ___nl__11, ___ref___3, ___ref___4, ___ref___5));
#line 981
c_rt_lib0clear(&___nl__11);
#line 981
c_rt_lib0clear(&___nl__10);
#line 981
c_rt_lib0clear(&___nl__9);
#line 981
c_rt_lib0clear(&___nl__8);
#line 983
goto label_265;
#line 983
label_265:
#line 983
c_rt_lib0clear(&___nl__7);
#line 984
c_rt_lib0move(&___nl__7,___get_global_const(727));
#line 984
c_rt_lib0move(&___nl__7, c_rt_lib0eq(___nl__6, ___nl__7));
#line 984
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 984
if(c_rt_lib0check_true_native(___nl__7)){ goto label_282;}
#line 985
c_rt_lib0move(&___nl__9,___get_global_const(0));
#line 985
c_rt_lib0move(&___nl__8, c_rt_lib0array_get(___nl__2, ___nl__9));
#line 985
c_rt_lib0clear(&___nl__9);
#line 985
c_rt_lib0clear(&___nl__0);
#line 985
c_rt_lib0clear(&___nl__1);
#line 985
c_rt_lib0clear(&___nl__2);
#line 985
c_rt_lib0clear(&___nl__6);
#line 985
c_rt_lib0clear(&___nl__7);
#line 985
return ___nl__8;
#line 985
c_rt_lib0clear(&___nl__8);
#line 986
goto label_282;
#line 986
label_282:
#line 986
c_rt_lib0clear(&___nl__7);
#line 987
c_rt_lib0move(&___nl__7,___get_global_const(733));
#line 987
c_rt_lib0move(&___nl__7, c_rt_lib0eq(___nl__6, ___nl__7));
#line 987
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 987
if(c_rt_lib0check_true_native(___nl__7)){ goto label_323;}
#line 988
c_rt_lib0move(&___nl__10,___get_global_const(6));
#line 988
c_rt_lib0move(&___nl__9, c_rt_lib0array_get(___nl__2, ___nl__10));
#line 988
c_rt_lib0clear(&___nl__10);
#line 988
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__9, ___get_global_const(63)));
#line 988
c_rt_lib0move(&___nl__8, tct0hash(___nl__9));
#line 988
c_rt_lib0clear(&___nl__9);
#line 988
c_rt_lib0move(&___nl__10,___get_global_const(6));
#line 988
c_rt_lib0move(&___nl__9, c_rt_lib0get_ref_arr(___nl__2, ___nl__10));
#line 988
c_rt_lib0copy(&___nl__11, ___nl__8);
#line 988
c_rt_lib0hash_set_value_dec(&___nl__9, ___get_global_const(63), ___nl__11);
#line 988
c_rt_lib0delete(c_rt_lib0set_ref_arr(&___nl__2, ___nl__10, ___nl__9));
#line 988
c_rt_lib0clear(&___nl__8);
#line 988
c_rt_lib0clear(&___nl__9);
#line 988
c_rt_lib0clear(&___nl__10);
#line 988
c_rt_lib0clear(&___nl__11);
#line 989
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(89)));
#line 989
c_rt_lib0move(&___nl__9,___get_global_const(0));
#line 989
c_rt_lib0move(&___nl__8, c_rt_lib0array_get(___nl__8, ___nl__9));
#line 989
c_rt_lib0clear(&___nl__9);
#line 989
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__8, ___get_global_const(198)));
#line 989
c_rt_lib0move(&___nl__10,___get_global_const(0));
#line 989
c_rt_lib0move(&___nl__9, c_rt_lib0array_get(___nl__2, ___nl__10));
#line 989
c_rt_lib0clear(&___nl__10);
#line 989
c_rt_lib0move(&___nl__11,___get_global_const(6));
#line 989
c_rt_lib0move(&___nl__10, c_rt_lib0array_get(___nl__2, ___nl__11));
#line 989
c_rt_lib0clear(&___nl__11);
#line 989
c_rt_lib0move(&___nl__12, c_rt_lib0hash_mk(0));
#line 989
c_rt_lib0move(&___nl__11, tct0rec(___nl__12));
#line 989
c_rt_lib0clear(&___nl__12);
#line 989
c_rt_lib0delete(type_checker_priv0set_type_to_lval_spec(___nl__8, ___nl__9, ___nl__10, ___nl__11, ___ref___3, ___ref___4, ___ref___5));
#line 989
c_rt_lib0clear(&___nl__11);
#line 989
c_rt_lib0clear(&___nl__10);
#line 989
c_rt_lib0clear(&___nl__9);
#line 989
c_rt_lib0clear(&___nl__8);
#line 991
goto label_323;
#line 991
label_323:
#line 991
c_rt_lib0clear(&___nl__7);
#line 992
c_rt_lib0move(&___nl__7,___get_global_const(734));
#line 992
c_rt_lib0move(&___nl__7, c_rt_lib0eq(___nl__6, ___nl__7));
#line 992
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 992
if(c_rt_lib0check_true_native(___nl__7)){ goto label_367;}
#line 993
c_rt_lib0move(&___nl__10,___get_global_const(0));
#line 993
c_rt_lib0move(&___nl__9, c_rt_lib0array_get(___nl__2, ___nl__10));
#line 993
c_rt_lib0clear(&___nl__10);
#line 993
c_rt_lib0move(&___nl__8, ptd_system0can_delete(___nl__9, ___ref___3, ___ref___5));
#line 993
c_rt_lib0clear(&___nl__9);
#line 994
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__8, ___get_global_const(63)));
#line 994
c_rt_lib0move(&___nl__9, c_rt_lib0priv_is(___nl__9, ___get_global_const(801)));
#line 994
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__9));
#line 994
if(c_rt_lib0check_true_native(___nl__9)){ goto label_363;}
#line 995
c_rt_lib0copy(&___nl__10, ___nl__8);
#line 996
c_rt_lib0move(&___nl__13, tct0empty());
#line 996
c_rt_lib0move(&___nl__12, tct0hash(___nl__13));
#line 996
c_rt_lib0clear(&___nl__13);
#line 996
c_rt_lib0move(&___nl__13, c_rt_lib0hash_get_value_dec(___nl__8, ___get_global_const(63)));
#line 996
c_rt_lib0move(&___nl__11, ptd_system0cross_type(___nl__12, ___nl__13, ___ref___3, ___ref___5));
#line 996
c_rt_lib0clear(&___nl__13);
#line 996
c_rt_lib0clear(&___nl__12);
#line 996
c_rt_lib0copy(&___nl__12, ___nl__11);
#line 996
c_rt_lib0hash_set_value_dec(&___nl__10, ___get_global_const(63), ___nl__12);
#line 996
c_rt_lib0clear(&___nl__11);
#line 996
c_rt_lib0clear(&___nl__12);
#line 997
c_rt_lib0move(&___nl__11, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(89)));
#line 997
c_rt_lib0move(&___nl__12,___get_global_const(0));
#line 997
c_rt_lib0move(&___nl__11, c_rt_lib0array_get(___nl__11, ___nl__12));
#line 997
c_rt_lib0clear(&___nl__12);
#line 997
c_rt_lib0move(&___nl__11, c_rt_lib0hash_get_value_dec(___nl__11, ___get_global_const(198)));
#line 997
c_rt_lib0move(&___nl__13, c_rt_lib0hash_mk(0));
#line 997
c_rt_lib0move(&___nl__12, tct0rec(___nl__13));
#line 997
c_rt_lib0clear(&___nl__13);
#line 997
c_rt_lib0delete(type_checker_priv0set_type_to_lval_spec(___nl__11, ___nl__8, ___nl__10, ___nl__12, ___ref___3, ___ref___4, ___ref___5));
#line 997
c_rt_lib0clear(&___nl__12);
#line 997
c_rt_lib0clear(&___nl__11);
#line 997
c_rt_lib0clear(&___nl__10);
#line 998
goto label_363;
#line 998
label_363:
#line 998
c_rt_lib0clear(&___nl__9);
#line 998
c_rt_lib0clear(&___nl__8);
#line 999
goto label_367;
#line 999
label_367:
#line 999
c_rt_lib0clear(&___nl__7);
#line 1000
c_rt_lib0move(&___nl__7,___get_global_const(731));
#line 1000
c_rt_lib0move(&___nl__7, c_rt_lib0eq(___nl__6, ___nl__7));
#line 1000
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 1000
if(c_rt_lib0check_true_native(___nl__7)){ goto label_398;}
#line 1001
c_rt_lib0move(&___nl__10,___get_global_const(0));
#line 1001
c_rt_lib0move(&___nl__9, c_rt_lib0array_get(___nl__2, ___nl__10));
#line 1001
c_rt_lib0clear(&___nl__10);
#line 1001
c_rt_lib0move(&___nl__8, ptd_system0can_delete(___nl__9, ___ref___3, ___ref___5));
#line 1001
c_rt_lib0clear(&___nl__9);
#line 1002
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__8, ___get_global_const(43)));
#line 1002
c_rt_lib0copy(&___nl__10, ___nl__9);
#line 1002
c_rt_lib0hash_set_value_dec(&___nl__0, ___get_global_const(43), ___nl__10);
#line 1002
c_rt_lib0clear(&___nl__9);
#line 1002
c_rt_lib0clear(&___nl__10);
#line 1003
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__8, ___get_global_const(63)));
#line 1003
c_rt_lib0move(&___nl__9, c_rt_lib0priv_is(___nl__9, ___get_global_const(800)));
#line 1003
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__9));
#line 1003
if(c_rt_lib0check_true_native(___nl__9)){ goto label_394;}
#line 1003
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__8, ___get_global_const(63)));
#line 1003
c_rt_lib0move(&___nl__10, c_rt_lib0priv_as(___nl__10, ___get_global_const(800)));
#line 1003
c_rt_lib0copy(&___nl__11, ___nl__10);
#line 1003
c_rt_lib0hash_set_value_dec(&___nl__0, ___get_global_const(63), ___nl__11);
#line 1003
c_rt_lib0clear(&___nl__10);
#line 1003
c_rt_lib0clear(&___nl__11);
#line 1003
goto label_394;
#line 1003
label_394:
#line 1003
c_rt_lib0clear(&___nl__9);
#line 1003
c_rt_lib0clear(&___nl__8);
#line 1004
goto label_398;
#line 1004
label_398:
#line 1004
c_rt_lib0clear(&___nl__7);
#line 1005
c_rt_lib0move(&___nl__7,___get_global_const(1218));
#line 1005
c_rt_lib0move(&___nl__7, c_rt_lib0eq(___nl__6, ___nl__7));
#line 1005
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 1005
if(c_rt_lib0check_true_native(___nl__7)){ goto label_431;}
#line 1006
c_rt_lib0move(&___nl__10,___get_global_const(0));
#line 1006
c_rt_lib0move(&___nl__9, c_rt_lib0array_get(___nl__2, ___nl__10));
#line 1006
c_rt_lib0clear(&___nl__10);
#line 1006
c_rt_lib0move(&___nl__8, ptd_system0can_delete(___nl__9, ___ref___3, ___ref___5));
#line 1006
c_rt_lib0clear(&___nl__9);
#line 1007
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__8, ___get_global_const(43)));
#line 1007
c_rt_lib0copy(&___nl__10, ___nl__9);
#line 1007
c_rt_lib0hash_set_value_dec(&___nl__0, ___get_global_const(43), ___nl__10);
#line 1007
c_rt_lib0clear(&___nl__9);
#line 1007
c_rt_lib0clear(&___nl__10);
#line 1008
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__8, ___get_global_const(63)));
#line 1008
c_rt_lib0move(&___nl__9, c_rt_lib0priv_is(___nl__9, ___get_global_const(800)));
#line 1008
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__9));
#line 1008
if(c_rt_lib0check_true_native(___nl__9)){ goto label_427;}
#line 1008
c_rt_lib0move(&___nl__11, c_rt_lib0hash_get_value_dec(___nl__8, ___get_global_const(63)));
#line 1008
c_rt_lib0move(&___nl__11, c_rt_lib0priv_as(___nl__11, ___get_global_const(800)));
#line 1008
c_rt_lib0move(&___nl__10, tct0arr(___nl__11));
#line 1008
c_rt_lib0clear(&___nl__11);
#line 1008
c_rt_lib0copy(&___nl__11, ___nl__10);
#line 1008
c_rt_lib0hash_set_value_dec(&___nl__0, ___get_global_const(63), ___nl__11);
#line 1008
c_rt_lib0clear(&___nl__10);
#line 1008
c_rt_lib0clear(&___nl__11);
#line 1008
goto label_427;
#line 1008
label_427:
#line 1008
c_rt_lib0clear(&___nl__9);
#line 1008
c_rt_lib0clear(&___nl__8);
#line 1009
goto label_431;
#line 1009
label_431:
#line 1009
c_rt_lib0clear(&___nl__7);
#line 1010
c_rt_lib0move(&___nl__7,___get_global_const(1219));
#line 1010
c_rt_lib0move(&___nl__7, c_rt_lib0eq(___nl__6, ___nl__7));
#line 1010
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 1010
if(c_rt_lib0check_true_native(___nl__7)){ goto label_457;}
#line 1011
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(89)));
#line 1011
c_rt_lib0move(&___nl__9,___get_global_const(0));
#line 1011
c_rt_lib0move(&___nl__8, c_rt_lib0array_get(___nl__8, ___nl__9));
#line 1011
c_rt_lib0clear(&___nl__9);
#line 1011
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__8, ___get_global_const(198)));
#line 1011
c_rt_lib0move(&___nl__10,___get_global_const(0));
#line 1011
c_rt_lib0move(&___nl__9, c_rt_lib0array_get(___nl__2, ___nl__10));
#line 1011
c_rt_lib0clear(&___nl__10);
#line 1011
c_rt_lib0move(&___nl__11,___get_global_const(1));
#line 1011
c_rt_lib0move(&___nl__10, c_rt_lib0array_get(___nl__2, ___nl__11));
#line 1011
c_rt_lib0clear(&___nl__11);
#line 1011
c_rt_lib0move(&___nl__12, c_rt_lib0hash_mk(0));
#line 1011
c_rt_lib0move(&___nl__11, tct0rec(___nl__12));
#line 1011
c_rt_lib0clear(&___nl__12);
#line 1011
c_rt_lib0delete(type_checker_priv0set_type_to_lval_spec(___nl__8, ___nl__9, ___nl__10, ___nl__11, ___ref___3, ___ref___4, ___ref___5));
#line 1011
c_rt_lib0clear(&___nl__11);
#line 1011
c_rt_lib0clear(&___nl__10);
#line 1011
c_rt_lib0clear(&___nl__9);
#line 1011
c_rt_lib0clear(&___nl__8);
#line 1013
goto label_457;
#line 1013
label_457:
#line 1013
c_rt_lib0clear(&___nl__7);
#line 1015
c_rt_lib0move(&___nl__7,___get_global_const(751));
#line 1015
c_rt_lib0move(&___nl__7, c_rt_lib0eq(___nl__6, ___nl__7));
#line 1015
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 1015
if(c_rt_lib0check_true_native(___nl__7)){ goto label_471;}
#line 1016
c_rt_lib0move(&___nl__8, tct0tct_im());
#line 1016
c_rt_lib0move(&___nl__10,___get_global_const(0));
#line 1016
c_rt_lib0move(&___nl__9, c_rt_lib0array_get(___nl__2, ___nl__10));
#line 1016
c_rt_lib0clear(&___nl__10);
#line 1016
c_rt_lib0delete(ptd_system0check_assignment(___nl__8, ___nl__9, ___ref___3, ___ref___5));
#line 1016
c_rt_lib0clear(&___nl__9);
#line 1016
c_rt_lib0clear(&___nl__8);
#line 1017
goto label_471;
#line 1017
label_471:
#line 1017
c_rt_lib0clear(&___nl__7);
#line 1018
c_rt_lib0move(&___nl__7,___get_global_const(1220));
#line 1018
c_rt_lib0move(&___nl__7, c_rt_lib0eq(___nl__6, ___nl__7));
#line 1018
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 1018
if(c_rt_lib0check_true_native(___nl__7)){ goto label_485;}
#line 1019
c_rt_lib0move(&___nl__8, tct0tct_im());
#line 1019
c_rt_lib0move(&___nl__10,___get_global_const(0));
#line 1019
c_rt_lib0move(&___nl__9, c_rt_lib0array_get(___nl__2, ___nl__10));
#line 1019
c_rt_lib0clear(&___nl__10);
#line 1019
c_rt_lib0delete(ptd_system0check_assignment(___nl__8, ___nl__9, ___ref___3, ___ref___5));
#line 1019
c_rt_lib0clear(&___nl__9);
#line 1019
c_rt_lib0clear(&___nl__8);
#line 1020
goto label_485;
#line 1020
label_485:
#line 1020
c_rt_lib0clear(&___nl__7);
#line 1021
c_rt_lib0move(&___nl__7,___get_global_const(1227));
#line 1021
c_rt_lib0move(&___nl__7, c_rt_lib0eq(___nl__6, ___nl__7));
#line 1021
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 1021
if(c_rt_lib0check_true_native(___nl__7)){ goto label_502;}
#line 1022
c_rt_lib0move(&___nl__9,___get_global_const(0));
#line 1022
c_rt_lib0move(&___nl__8, c_rt_lib0array_get(___nl__2, ___nl__9));
#line 1022
c_rt_lib0clear(&___nl__9);
#line 1022
c_rt_lib0clear(&___nl__0);
#line 1022
c_rt_lib0clear(&___nl__1);
#line 1022
c_rt_lib0clear(&___nl__2);
#line 1022
c_rt_lib0clear(&___nl__6);
#line 1022
c_rt_lib0clear(&___nl__7);
#line 1022
return ___nl__8;
#line 1022
c_rt_lib0clear(&___nl__8);
#line 1023
goto label_502;
#line 1023
label_502:
#line 1023
c_rt_lib0clear(&___nl__7);
#line 1024
c_rt_lib0clear(&___nl__1);
#line 1024
c_rt_lib0clear(&___nl__2);
#line 1024
c_rt_lib0clear(&___nl__6);
#line 1024
return ___nl__0;
#line 1024
c_rt_lib0clear(&___nl__6);
#line 1024
c_rt_lib0clear(&___nl__0);
#line 1024
c_rt_lib0clear(&___nl__1);
#line 1024
c_rt_lib0clear(&___nl__2);
#line 1024
return NULL;
}

ImmT type_checker_priv0rec_get_var_from_lval(ImmT ___nl__0,ImmT * ___ref___1) {
c_rt_lib0arg_val(___nl__0);
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
#line 1028
c_rt_lib0move(&___nl__2, c_rt_lib0array_mk(0));
#line 1029
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(192)));
#line 1029
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__3, ___get_global_const(849)));
#line 1029
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 1029
if(c_rt_lib0check_true_native(___nl__3)){ goto label_11;}
#line 1030
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(192)));
#line 1030
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__4, ___get_global_const(849)));
#line 1030
c_rt_lib0move(&___nl__4, c_rt_lib0ov_mk_arg(___get_global_const(849), ___nl__4));
#line 1030
c_rt_lib0delete(array0push(&___nl__2, ___nl__4));
#line 1030
c_rt_lib0clear(&___nl__4);
#line 1031
goto label_88;
#line 1031
label_11:
#line 1031
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(192)));
#line 1031
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__3, ___get_global_const(208)));
#line 1031
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 1031
if(c_rt_lib0check_true_native(___nl__3)){ goto label_83;}
#line 1032
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(192)));
#line 1032
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__4, ___get_global_const(208)));
#line 1033
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(443)));
#line 1033
c_rt_lib0move(&___nl__6,___get_global_const(850));
#line 1033
c_rt_lib0move(&___nl__5, c_rt_lib0eq(___nl__5, ___nl__6));
#line 1033
c_rt_lib0clear(&___nl__6);
#line 1033
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 1033
if(c_rt_lib0check_true_native(___nl__5)){ goto label_36;}
#line 1034
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(230)));
#line 1034
c_rt_lib0move(&___nl__6, type_checker_priv0rec_get_var_from_lval(___nl__7, ___ref___1));
#line 1034
c_rt_lib0clear(&___nl__7);
#line 1034
c_rt_lib0copy(&___nl__2, ___nl__6);
#line 1034
c_rt_lib0clear(&___nl__6);
#line 1035
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(231)));
#line 1035
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__6, ___get_global_const(192)));
#line 1035
c_rt_lib0move(&___nl__6, c_rt_lib0priv_as(___nl__6, ___get_global_const(856)));
#line 1035
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_arg(___get_global_const(1074), ___nl__6));
#line 1035
c_rt_lib0delete(array0push(&___nl__2, ___nl__6));
#line 1035
c_rt_lib0clear(&___nl__6);
#line 1036
goto label_79;
#line 1036
label_36:
#line 1036
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(443)));
#line 1036
c_rt_lib0move(&___nl__6,___get_global_const(851));
#line 1036
c_rt_lib0move(&___nl__5, c_rt_lib0eq(___nl__5, ___nl__6));
#line 1036
c_rt_lib0clear(&___nl__6);
#line 1036
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 1036
if(c_rt_lib0check_true_native(___nl__5)){ goto label_52;}
#line 1037
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(230)));
#line 1037
c_rt_lib0move(&___nl__6, type_checker_priv0rec_get_var_from_lval(___nl__7, ___ref___1));
#line 1037
c_rt_lib0clear(&___nl__7);
#line 1037
c_rt_lib0copy(&___nl__2, ___nl__6);
#line 1037
c_rt_lib0clear(&___nl__6);
#line 1038
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_none(___get_global_const(327)));
#line 1038
c_rt_lib0delete(array0push(&___nl__2, ___nl__6));
#line 1038
c_rt_lib0clear(&___nl__6);
#line 1039
goto label_79;
#line 1039
label_52:
#line 1039
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(443)));
#line 1039
c_rt_lib0move(&___nl__6,___get_global_const(852));
#line 1039
c_rt_lib0move(&___nl__5, c_rt_lib0eq(___nl__5, ___nl__6));
#line 1039
c_rt_lib0clear(&___nl__6);
#line 1039
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 1039
if(c_rt_lib0check_true_native(___nl__5)){ goto label_68;}
#line 1040
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(230)));
#line 1040
c_rt_lib0move(&___nl__6, type_checker_priv0rec_get_var_from_lval(___nl__7, ___ref___1));
#line 1040
c_rt_lib0clear(&___nl__7);
#line 1040
c_rt_lib0copy(&___nl__2, ___nl__6);
#line 1040
c_rt_lib0clear(&___nl__6);
#line 1041
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_none(___get_global_const(1142)));
#line 1041
c_rt_lib0delete(array0push(&___nl__2, ___nl__6));
#line 1041
c_rt_lib0clear(&___nl__6);
#line 1042
goto label_79;
#line 1042
label_68:
#line 1043
c_rt_lib0move(&___nl__6,___get_global_const(1228));
#line 1043
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(443)));
#line 1043
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__7));
#line 1043
c_rt_lib0clear(&___nl__7);
#line 1043
c_rt_lib0move(&___nl__7,___get_global_const(1229));
#line 1043
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__7));
#line 1043
c_rt_lib0clear(&___nl__7);
#line 1043
c_rt_lib0delete(type_checker_priv0add_error(___ref___1, ___nl__6));
#line 1043
c_rt_lib0clear(&___nl__6);
#line 1044
goto label_79;
#line 1044
label_79:
#line 1044
c_rt_lib0clear(&___nl__5);
#line 1044
c_rt_lib0clear(&___nl__4);
#line 1045
goto label_88;
#line 1045
label_83:
#line 1046
c_rt_lib0move(&___nl__4,___get_global_const(1230));
#line 1046
c_rt_lib0delete(type_checker_priv0add_error(___ref___1, ___nl__4));
#line 1046
c_rt_lib0clear(&___nl__4);
#line 1047
goto label_88;
#line 1047
label_88:
#line 1047
c_rt_lib0clear(&___nl__3);
#line 1048
c_rt_lib0clear(&___nl__0);
#line 1048
return ___nl__2;
#line 1048
c_rt_lib0clear(&___nl__2);
#line 1048
c_rt_lib0clear(&___nl__0);
#line 1048
return NULL;
}

ImmT type_checker_priv0mk_new_type_lval(ImmT ___nl__0,ImmT ___nl__1,ImmT ___nl__2,ImmT ___nl__3,ImmT * ___ref___4,ImmT * ___ref___5) {
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
#line 1053
c_rt_lib0move(&___nl__7,___get_global_const(1));
#line 1053
c_rt_lib0move(&___nl__8, array0len(___nl__0));
#line 1053
c_rt_lib0move(&___nl__9,___get_global_const(1));
#line 1053
c_rt_lib0move(&___nl__8, c_rt_lib0sub_mod(___nl__8, ___nl__9));
#line 1053
c_rt_lib0clear(&___nl__9);
#line 1053
c_rt_lib0move(&___nl__6, array0subarray(___nl__0, ___nl__7, ___nl__8));
#line 1053
c_rt_lib0clear(&___nl__8);
#line 1053
c_rt_lib0clear(&___nl__7);
#line 1053
c_rt_lib0copy(&___nl__0, ___nl__6);
#line 1053
c_rt_lib0clear(&___nl__6);
#line 1054
c_rt_lib0move(&___nl__6, array0len(___nl__0));
#line 1054
c_rt_lib0move(&___nl__7,___get_global_const(0));
#line 1054
c_rt_lib0move(&___nl__6, c_rt_lib0num_eq(___nl__6, ___nl__7));
#line 1054
c_rt_lib0clear(&___nl__7);
#line 1054
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 1054
if(c_rt_lib0check_true_native(___nl__6)){ goto label_89;}
#line 1055
c_rt_lib0move(&___nl__7, type_checker_priv0is_known(___nl__2));
#line 1055
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 1055
if(c_rt_lib0check_true_native(___nl__7)){ goto label_47;}
#line 1056
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(63)));
#line 1056
c_rt_lib0move(&___nl__8, ptd_system0check_assignment(___nl__9, ___nl__1, ___ref___4, ___ref___5));
#line 1056
c_rt_lib0clear(&___nl__9);
#line 1057
c_rt_lib0copy(&___nl__9, ___nl__8);
#line 1057
c_rt_lib0move(&___nl__9, c_rt_lib0priv_is(___nl__9, ___get_global_const(47)));
#line 1057
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__9));
#line 1057
if(c_rt_lib0check_true_native(___nl__9)){ goto label_33;}
#line 1058
c_rt_lib0move(&___nl__10,___get_global_const(1231));
#line 1058
c_rt_lib0move(&___nl__11, type_checker_priv0get_print_check_info(___nl__8));
#line 1058
c_rt_lib0move(&___nl__10, c_rt_lib0concat_add(___nl__10, ___nl__11));
#line 1058
c_rt_lib0clear(&___nl__11);
#line 1058
c_rt_lib0delete(type_checker_priv0add_error(___ref___5, ___nl__10));
#line 1058
c_rt_lib0clear(&___nl__10);
#line 1059
goto label_33;
#line 1059
label_33:
#line 1059
c_rt_lib0clear(&___nl__9);
#line 1060
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(63)));
#line 1060
c_rt_lib0clear(&___nl__0);
#line 1060
c_rt_lib0clear(&___nl__1);
#line 1060
c_rt_lib0clear(&___nl__2);
#line 1060
c_rt_lib0clear(&___nl__3);
#line 1060
c_rt_lib0clear(&___nl__6);
#line 1060
c_rt_lib0clear(&___nl__7);
#line 1060
c_rt_lib0clear(&___nl__8);
#line 1060
return ___nl__9;
#line 1060
c_rt_lib0clear(&___nl__9);
#line 1060
c_rt_lib0clear(&___nl__8);
#line 1061
goto label_86;
#line 1061
label_47:
#line 1062
c_rt_lib0move(&___nl__8, tct0tct_im());
#line 1062
c_rt_lib0delete(ptd_system0check_assignment(___nl__8, ___nl__1, ___ref___4, ___ref___5));
#line 1062
c_rt_lib0clear(&___nl__8);
#line 1063
c_rt_lib0move(&___nl__8, ptd_system0can_create(___nl__2, ___ref___4, ___ref___5));
#line 1063
c_rt_lib0copy(&___nl__2, ___nl__8);
#line 1063
c_rt_lib0clear(&___nl__8);
#line 1064
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(63)));
#line 1064
c_rt_lib0move(&___nl__8, ptd_system0is_equal(___nl__9, ___nl__3));
#line 1064
c_rt_lib0clear(&___nl__9);
#line 1064
c_rt_lib0move(&___nl__8, c_rt_lib0not(___nl__8));
#line 1064
if(c_rt_lib0check_true_native(___nl__8)){ goto label_70;}
#line 1064
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(63)));
#line 1064
c_rt_lib0clear(&___nl__0);
#line 1064
c_rt_lib0clear(&___nl__1);
#line 1064
c_rt_lib0clear(&___nl__2);
#line 1064
c_rt_lib0clear(&___nl__3);
#line 1064
c_rt_lib0clear(&___nl__6);
#line 1064
c_rt_lib0clear(&___nl__7);
#line 1064
c_rt_lib0clear(&___nl__8);
#line 1064
return ___nl__9;
#line 1064
c_rt_lib0clear(&___nl__9);
#line 1064
goto label_70;
#line 1064
label_70:
#line 1064
c_rt_lib0clear(&___nl__8);
#line 1065
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(63)));
#line 1065
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(63)));
#line 1065
c_rt_lib0move(&___nl__8, ptd_system0cross_type(___nl__9, ___nl__10, ___ref___4, ___ref___5));
#line 1065
c_rt_lib0clear(&___nl__10);
#line 1065
c_rt_lib0clear(&___nl__9);
#line 1065
c_rt_lib0clear(&___nl__0);
#line 1065
c_rt_lib0clear(&___nl__1);
#line 1065
c_rt_lib0clear(&___nl__2);
#line 1065
c_rt_lib0clear(&___nl__3);
#line 1065
c_rt_lib0clear(&___nl__6);
#line 1065
c_rt_lib0clear(&___nl__7);
#line 1065
return ___nl__8;
#line 1065
c_rt_lib0clear(&___nl__8);
#line 1066
goto label_86;
#line 1066
label_86:
#line 1066
c_rt_lib0clear(&___nl__7);
#line 1067
goto label_280;
#line 1067
label_89:
#line 1068
c_rt_lib0move(&___nl__7, ptd_system0can_create(___nl__2, ___ref___4, ___ref___5));
#line 1068
c_rt_lib0copy(&___nl__2, ___nl__7);
#line 1068
c_rt_lib0clear(&___nl__7);
#line 1069
c_rt_lib0move(&___nl__8,___get_global_const(0));
#line 1069
c_rt_lib0move(&___nl__7, c_rt_lib0array_get(___nl__0, ___nl__8));
#line 1069
c_rt_lib0clear(&___nl__8);
#line 1069
c_rt_lib0move(&___nl__8, c_rt_lib0priv_is(___nl__7, ___get_global_const(849)));
#line 1069
if(c_rt_lib0check_true_native(___nl__8)){ goto label_107;}
#line 1071
c_rt_lib0move(&___nl__8, c_rt_lib0priv_is(___nl__7, ___get_global_const(327)));
#line 1071
if(c_rt_lib0check_true_native(___nl__8)){ goto label_114;}
#line 1075
c_rt_lib0move(&___nl__8, c_rt_lib0priv_is(___nl__7, ___get_global_const(1142)));
#line 1075
if(c_rt_lib0check_true_native(___nl__8)){ goto label_153;}
#line 1079
c_rt_lib0move(&___nl__8, c_rt_lib0priv_is(___nl__7, ___get_global_const(1074)));
#line 1079
if(c_rt_lib0check_true_native(___nl__8)){ goto label_192;}
#line 1079
c_rt_lib0move(&___nl__8,___get_global_const(91));
#line 1079
c_rt_lib0move(&___nl__8, c_rt_lib0array_mk(2, ___nl__8, ___nl__7));
#line 1079
nl_die_arg(___nl__8);
#line 1069
label_107:
#line 1069
c_rt_lib0move(&___nl__9, c_rt_lib0priv_as(___nl__7, ___get_global_const(849)));
#line 1070
c_rt_lib0move(&___nl__10, c_rt_lib0array_mk(1, ___nl__0));
#line 1070
nl_die_arg(___nl__10);
#line 1070
c_rt_lib0clear(&___nl__10);
#line 1070
c_rt_lib0clear(&___nl__9);
#line 1071
goto label_276;
#line 1071
label_114:
#line 1072
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(63)));
#line 1072
c_rt_lib0move(&___nl__9, c_rt_lib0priv_is(___nl__9, ___get_global_const(799)));
#line 1072
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__9));
#line 1072
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__9));
#line 1072
if(c_rt_lib0check_true_native(___nl__9)){ goto label_132;}
#line 1072
c_rt_lib0move(&___nl__10, tct0tct_im());
#line 1072
c_rt_lib0clear(&___nl__0);
#line 1072
c_rt_lib0clear(&___nl__1);
#line 1072
c_rt_lib0clear(&___nl__2);
#line 1072
c_rt_lib0clear(&___nl__3);
#line 1072
c_rt_lib0clear(&___nl__6);
#line 1072
c_rt_lib0clear(&___nl__7);
#line 1072
c_rt_lib0clear(&___nl__8);
#line 1072
c_rt_lib0clear(&___nl__9);
#line 1072
return ___nl__10;
#line 1072
c_rt_lib0clear(&___nl__10);
#line 1072
goto label_132;
#line 1072
label_132:
#line 1072
c_rt_lib0clear(&___nl__9);
#line 1073
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(63)));
#line 1073
c_rt_lib0move(&___nl__9, c_rt_lib0priv_as(___nl__9, ___get_global_const(799)));
#line 1073
c_rt_lib0copy(&___nl__10, ___nl__9);
#line 1073
c_rt_lib0hash_set_value_dec(&___nl__2, ___get_global_const(63), ___nl__10);
#line 1073
c_rt_lib0clear(&___nl__9);
#line 1073
c_rt_lib0clear(&___nl__10);
#line 1074
c_rt_lib0move(&___nl__10, type_checker_priv0mk_new_type_lval(___nl__0, ___nl__1, ___nl__2, ___nl__3, ___ref___4, ___ref___5));
#line 1074
c_rt_lib0move(&___nl__9, tct0arr(___nl__10));
#line 1074
c_rt_lib0clear(&___nl__10);
#line 1074
c_rt_lib0clear(&___nl__0);
#line 1074
c_rt_lib0clear(&___nl__1);
#line 1074
c_rt_lib0clear(&___nl__2);
#line 1074
c_rt_lib0clear(&___nl__3);
#line 1074
c_rt_lib0clear(&___nl__6);
#line 1074
c_rt_lib0clear(&___nl__7);
#line 1074
c_rt_lib0clear(&___nl__8);
#line 1074
return ___nl__9;
#line 1074
c_rt_lib0clear(&___nl__9);
#line 1075
goto label_276;
#line 1075
label_153:
#line 1076
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(63)));
#line 1076
c_rt_lib0move(&___nl__9, c_rt_lib0priv_is(___nl__9, ___get_global_const(800)));
#line 1076
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__9));
#line 1076
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__9));
#line 1076
if(c_rt_lib0check_true_native(___nl__9)){ goto label_171;}
#line 1076
c_rt_lib0move(&___nl__10, tct0tct_im());
#line 1076
c_rt_lib0clear(&___nl__0);
#line 1076
c_rt_lib0clear(&___nl__1);
#line 1076
c_rt_lib0clear(&___nl__2);
#line 1076
c_rt_lib0clear(&___nl__3);
#line 1076
c_rt_lib0clear(&___nl__6);
#line 1076
c_rt_lib0clear(&___nl__7);
#line 1076
c_rt_lib0clear(&___nl__8);
#line 1076
c_rt_lib0clear(&___nl__9);
#line 1076
return ___nl__10;
#line 1076
c_rt_lib0clear(&___nl__10);
#line 1076
goto label_171;
#line 1076
label_171:
#line 1076
c_rt_lib0clear(&___nl__9);
#line 1077
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(63)));
#line 1077
c_rt_lib0move(&___nl__9, c_rt_lib0priv_as(___nl__9, ___get_global_const(800)));
#line 1077
c_rt_lib0copy(&___nl__10, ___nl__9);
#line 1077
c_rt_lib0hash_set_value_dec(&___nl__2, ___get_global_const(63), ___nl__10);
#line 1077
c_rt_lib0clear(&___nl__9);
#line 1077
c_rt_lib0clear(&___nl__10);
#line 1078
c_rt_lib0move(&___nl__10, type_checker_priv0mk_new_type_lval(___nl__0, ___nl__1, ___nl__2, ___nl__3, ___ref___4, ___ref___5));
#line 1078
c_rt_lib0move(&___nl__9, tct0hash(___nl__10));
#line 1078
c_rt_lib0clear(&___nl__10);
#line 1078
c_rt_lib0clear(&___nl__0);
#line 1078
c_rt_lib0clear(&___nl__1);
#line 1078
c_rt_lib0clear(&___nl__2);
#line 1078
c_rt_lib0clear(&___nl__3);
#line 1078
c_rt_lib0clear(&___nl__6);
#line 1078
c_rt_lib0clear(&___nl__7);
#line 1078
c_rt_lib0clear(&___nl__8);
#line 1078
return ___nl__9;
#line 1078
c_rt_lib0clear(&___nl__9);
#line 1079
goto label_276;
#line 1079
label_192:
#line 1079
c_rt_lib0move(&___nl__9, c_rt_lib0priv_as(___nl__7, ___get_global_const(1074)));
#line 1080
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(63)));
#line 1080
c_rt_lib0move(&___nl__10, c_rt_lib0priv_is(___nl__10, ___get_global_const(801)));
#line 1080
c_rt_lib0move(&___nl__10, c_rt_lib0not(___nl__10));
#line 1080
c_rt_lib0move(&___nl__10, c_rt_lib0not(___nl__10));
#line 1080
if(c_rt_lib0check_true_native(___nl__10)){ goto label_212;}
#line 1080
c_rt_lib0move(&___nl__11, tct0tct_im());
#line 1080
c_rt_lib0clear(&___nl__0);
#line 1080
c_rt_lib0clear(&___nl__1);
#line 1080
c_rt_lib0clear(&___nl__2);
#line 1080
c_rt_lib0clear(&___nl__3);
#line 1080
c_rt_lib0clear(&___nl__6);
#line 1080
c_rt_lib0clear(&___nl__7);
#line 1080
c_rt_lib0clear(&___nl__8);
#line 1080
c_rt_lib0clear(&___nl__9);
#line 1080
c_rt_lib0clear(&___nl__10);
#line 1080
return ___nl__11;
#line 1080
c_rt_lib0clear(&___nl__11);
#line 1080
goto label_212;
#line 1080
label_212:
#line 1080
c_rt_lib0clear(&___nl__10);
#line 1081
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(63)));
#line 1081
c_rt_lib0move(&___nl__10, c_rt_lib0priv_as(___nl__10, ___get_global_const(801)));
#line 1082
c_rt_lib0move(&___nl__11, hash0has_key(___nl__10, ___nl__9));
#line 1082
c_rt_lib0move(&___nl__11, c_rt_lib0not(___nl__11));
#line 1082
if(c_rt_lib0check_true_native(___nl__11)){ goto label_228;}
#line 1083
c_rt_lib0move(&___nl__12, hash0get_value(___nl__10, ___nl__9));
#line 1083
c_rt_lib0copy(&___nl__13, ___nl__12);
#line 1083
c_rt_lib0hash_set_value_dec(&___nl__2, ___get_global_const(63), ___nl__13);
#line 1083
c_rt_lib0clear(&___nl__12);
#line 1083
c_rt_lib0clear(&___nl__13);
#line 1084
c_rt_lib0move(&___nl__12, type_checker_priv0mk_new_type_lval(___nl__0, ___nl__1, ___nl__2, ___nl__3, ___ref___4, ___ref___5));
#line 1084
c_rt_lib0delete(hash0set_value(&___nl__10, ___nl__9, ___nl__12));
#line 1084
c_rt_lib0clear(&___nl__12);
#line 1086
goto label_259;
#line 1086
label_228:
#line 1087
c_rt_lib0move(&___nl__12, array0len(___nl__0));
#line 1087
c_rt_lib0move(&___nl__13,___get_global_const(1));
#line 1087
c_rt_lib0move(&___nl__12, c_rt_lib0num_ne(___nl__12, ___nl__13));
#line 1087
c_rt_lib0clear(&___nl__13);
#line 1087
c_rt_lib0move(&___nl__12, c_rt_lib0not(___nl__12));
#line 1087
if(c_rt_lib0check_true_native(___nl__12)){ goto label_250;}
#line 1088
c_rt_lib0move(&___nl__13, tct0tct_im());
#line 1088
c_rt_lib0clear(&___nl__0);
#line 1088
c_rt_lib0clear(&___nl__1);
#line 1088
c_rt_lib0clear(&___nl__2);
#line 1088
c_rt_lib0clear(&___nl__3);
#line 1088
c_rt_lib0clear(&___nl__6);
#line 1088
c_rt_lib0clear(&___nl__7);
#line 1088
c_rt_lib0clear(&___nl__8);
#line 1088
c_rt_lib0clear(&___nl__9);
#line 1088
c_rt_lib0clear(&___nl__10);
#line 1088
c_rt_lib0clear(&___nl__11);
#line 1088
c_rt_lib0clear(&___nl__12);
#line 1088
return ___nl__13;
#line 1088
c_rt_lib0clear(&___nl__13);
#line 1089
goto label_250;
#line 1089
label_250:
#line 1089
c_rt_lib0clear(&___nl__12);
#line 1090
c_rt_lib0move(&___nl__12, tct0tct_im());
#line 1090
c_rt_lib0delete(ptd_system0check_assignment(___nl__12, ___nl__1, ___ref___4, ___ref___5));
#line 1090
c_rt_lib0clear(&___nl__12);
#line 1091
c_rt_lib0move(&___nl__12, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(63)));
#line 1091
c_rt_lib0delete(hash0set_value(&___nl__10, ___nl__9, ___nl__12));
#line 1091
c_rt_lib0clear(&___nl__12);
#line 1092
goto label_259;
#line 1092
label_259:
#line 1092
c_rt_lib0clear(&___nl__11);
#line 1093
c_rt_lib0move(&___nl__11, tct0rec(___nl__10));
#line 1093
c_rt_lib0clear(&___nl__0);
#line 1093
c_rt_lib0clear(&___nl__1);
#line 1093
c_rt_lib0clear(&___nl__2);
#line 1093
c_rt_lib0clear(&___nl__3);
#line 1093
c_rt_lib0clear(&___nl__6);
#line 1093
c_rt_lib0clear(&___nl__7);
#line 1093
c_rt_lib0clear(&___nl__8);
#line 1093
c_rt_lib0clear(&___nl__9);
#line 1093
c_rt_lib0clear(&___nl__10);
#line 1093
return ___nl__11;
#line 1093
c_rt_lib0clear(&___nl__11);
#line 1093
c_rt_lib0clear(&___nl__10);
#line 1093
c_rt_lib0clear(&___nl__9);
#line 1094
goto label_276;
#line 1094
label_276:
#line 1094
c_rt_lib0clear(&___nl__7);
#line 1094
c_rt_lib0clear(&___nl__8);
#line 1095
goto label_280;
#line 1095
label_280:
#line 1095
c_rt_lib0clear(&___nl__6);
#line 1095
c_rt_lib0clear(&___nl__0);
#line 1095
c_rt_lib0clear(&___nl__1);
#line 1095
c_rt_lib0clear(&___nl__2);
#line 1095
c_rt_lib0clear(&___nl__3);
#line 1095
return NULL;
}

ImmT type_checker_priv0set_type_to_lval(ImmT ___nl__0,ImmT ___nl__1,ImmT ___nl__2,ImmT * ___ref___3,ImmT * ___ref___4,ImmT * ___ref___5) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
c_rt_lib0arg_val(___nl__2);
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
#line 1100
c_rt_lib0move(&___nl__6, ptd_system0can_delete(___nl__1, ___ref___3, ___ref___5));
#line 1101
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__6, ___get_global_const(63)));
#line 1101
c_rt_lib0move(&___nl__7, type_checker_priv0set_type_to_lval_spec(___nl__0, ___nl__1, ___nl__2, ___nl__8, ___ref___3, ___ref___4, ___ref___5));
#line 1101
c_rt_lib0clear(&___nl__8);
#line 1101
c_rt_lib0clear(&___nl__0);
#line 1101
c_rt_lib0clear(&___nl__1);
#line 1101
c_rt_lib0clear(&___nl__2);
#line 1101
c_rt_lib0clear(&___nl__6);
#line 1101
return ___nl__7;
#line 1101
c_rt_lib0clear(&___nl__7);
#line 1101
c_rt_lib0clear(&___nl__6);
#line 1101
c_rt_lib0clear(&___nl__0);
#line 1101
c_rt_lib0clear(&___nl__1);
#line 1101
c_rt_lib0clear(&___nl__2);
#line 1101
return NULL;
}

ImmT type_checker_priv0set_type_to_lval_spec(ImmT ___nl__0,ImmT ___nl__1,ImmT ___nl__2,ImmT ___nl__3,ImmT * ___ref___4,ImmT * ___ref___5,ImmT * ___ref___6) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
c_rt_lib0arg_val(___nl__2);
c_rt_lib0arg_val(___nl__3);
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
#line 1107
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(*___ref___6, ___get_global_const(18)));
#line 1107
c_rt_lib0move(&___nl__7, array0len(___nl__8));
#line 1107
c_rt_lib0clear(&___nl__8);
#line 1108
c_rt_lib0move(&___nl__8, type_checker_priv0rec_get_var_from_lval(___nl__0, ___ref___6));
#line 1109
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(*___ref___6, ___get_global_const(18)));
#line 1109
c_rt_lib0move(&___nl__9, array0len(___nl__10));
#line 1109
c_rt_lib0clear(&___nl__10);
#line 1109
c_rt_lib0move(&___nl__9, c_rt_lib0num_ne(___nl__7, ___nl__9));
#line 1109
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__9));
#line 1109
if(c_rt_lib0check_true_native(___nl__9)){ goto label_18;}
#line 1109
c_rt_lib0clear(&___nl__0);
#line 1109
c_rt_lib0clear(&___nl__2);
#line 1109
c_rt_lib0clear(&___nl__3);
#line 1109
c_rt_lib0clear(&___nl__7);
#line 1109
c_rt_lib0clear(&___nl__8);
#line 1109
c_rt_lib0clear(&___nl__9);
#line 1109
return ___nl__1;
#line 1109
goto label_18;
#line 1109
label_18:
#line 1109
c_rt_lib0clear(&___nl__9);
#line 1110
c_rt_lib0move(&___nl__10,___get_global_const(0));
#line 1110
c_rt_lib0move(&___nl__9, c_rt_lib0array_get(___nl__8, ___nl__10));
#line 1110
c_rt_lib0clear(&___nl__10);
#line 1110
c_rt_lib0move(&___nl__9, c_rt_lib0priv_as(___nl__9, ___get_global_const(849)));
#line 1111
c_rt_lib0move(&___nl__10, hash0has_key(*___ref___5, ___nl__9));
#line 1111
c_rt_lib0move(&___nl__10, c_rt_lib0not(___nl__10));
#line 1111
c_rt_lib0move(&___nl__10, c_rt_lib0not(___nl__10));
#line 1111
if(c_rt_lib0check_true_native(___nl__10)){ goto label_44;}
#line 1112
c_rt_lib0move(&___nl__11,___get_global_const(1232));
#line 1112
c_rt_lib0move(&___nl__11, c_rt_lib0concat_add(___nl__11, ___nl__9));
#line 1112
c_rt_lib0move(&___nl__12,___get_global_const(1233));
#line 1112
c_rt_lib0move(&___nl__11, c_rt_lib0concat_add(___nl__11, ___nl__12));
#line 1112
c_rt_lib0clear(&___nl__12);
#line 1112
c_rt_lib0delete(type_checker_priv0add_error(___ref___6, ___nl__11));
#line 1112
c_rt_lib0clear(&___nl__11);
#line 1113
c_rt_lib0clear(&___nl__0);
#line 1113
c_rt_lib0clear(&___nl__2);
#line 1113
c_rt_lib0clear(&___nl__3);
#line 1113
c_rt_lib0clear(&___nl__7);
#line 1113
c_rt_lib0clear(&___nl__8);
#line 1113
c_rt_lib0clear(&___nl__9);
#line 1113
c_rt_lib0clear(&___nl__10);
#line 1113
return ___nl__1;
#line 1114
goto label_44;
#line 1114
label_44:
#line 1114
c_rt_lib0clear(&___nl__10);
#line 1115
c_rt_lib0move(&___nl__10, hash0get_value(*___ref___5, ___nl__9));
#line 1116
c_rt_lib0move(&___nl__11, c_rt_lib0hash_get_value_dec(___nl__10, ___get_global_const(1139)));
#line 1116
c_rt_lib0move(&___nl__12, c_rt_lib0priv_is(___nl__11, ___get_global_const(45)));
#line 1116
if(c_rt_lib0check_true_native(___nl__12)){ goto label_55;}
#line 1121
c_rt_lib0move(&___nl__12, c_rt_lib0priv_is(___nl__11, ___get_global_const(46)));
#line 1121
if(c_rt_lib0check_true_native(___nl__12)){ goto label_77;}
#line 1121
c_rt_lib0move(&___nl__12,___get_global_const(91));
#line 1121
c_rt_lib0move(&___nl__12, c_rt_lib0array_mk(2, ___nl__12, ___nl__11));
#line 1121
nl_die_arg(___nl__12);
#line 1116
label_55:
#line 1117
c_rt_lib0move(&___nl__15, c_rt_lib0hash_get_value_dec(___nl__10, ___get_global_const(63)));
#line 1117
c_rt_lib0move(&___nl__16, c_rt_lib0ov_mk_none(___get_global_const(1085)));
#line 1117
c_rt_lib0move(&___nl__14, c_rt_lib0hash_mk(2, ___get_global_const(63), ___nl__15, ___get_global_const(43), ___nl__16));
#line 1117
c_rt_lib0clear(&___nl__15);
#line 1117
c_rt_lib0clear(&___nl__16);
#line 1117
c_rt_lib0move(&___nl__13, type_checker_priv0mk_new_type_lval(___nl__8, ___nl__2, ___nl__14, ___nl__3, ___ref___4, ___ref___6));
#line 1117
c_rt_lib0clear(&___nl__14);
#line 1119
c_rt_lib0delete(type_checker_priv0set_type_to_variable(___ref___5, ___nl__9, ___nl__13));
#line 1120
c_rt_lib0clear(&___nl__0);
#line 1120
c_rt_lib0clear(&___nl__1);
#line 1120
c_rt_lib0clear(&___nl__3);
#line 1120
c_rt_lib0clear(&___nl__7);
#line 1120
c_rt_lib0clear(&___nl__8);
#line 1120
c_rt_lib0clear(&___nl__9);
#line 1120
c_rt_lib0clear(&___nl__10);
#line 1120
c_rt_lib0clear(&___nl__11);
#line 1120
c_rt_lib0clear(&___nl__12);
#line 1120
c_rt_lib0clear(&___nl__13);
#line 1120
return ___nl__2;
#line 1120
c_rt_lib0clear(&___nl__13);
#line 1121
goto label_96;
#line 1121
label_77:
#line 1122
c_rt_lib0move(&___nl__14, c_rt_lib0hash_get_value_dec(___nl__10, ___get_global_const(63)));
#line 1122
c_rt_lib0move(&___nl__15, c_rt_lib0ov_mk_none(___get_global_const(1079)));
#line 1122
c_rt_lib0move(&___nl__13, c_rt_lib0hash_mk(2, ___get_global_const(63), ___nl__14, ___get_global_const(43), ___nl__15));
#line 1122
c_rt_lib0clear(&___nl__14);
#line 1122
c_rt_lib0clear(&___nl__15);
#line 1122
c_rt_lib0delete(type_checker_priv0mk_new_type_lval(___nl__8, ___nl__2, ___nl__13, ___nl__3, ___ref___4, ___ref___6));
#line 1122
c_rt_lib0clear(&___nl__13);
#line 1123
c_rt_lib0clear(&___nl__0);
#line 1123
c_rt_lib0clear(&___nl__2);
#line 1123
c_rt_lib0clear(&___nl__3);
#line 1123
c_rt_lib0clear(&___nl__7);
#line 1123
c_rt_lib0clear(&___nl__8);
#line 1123
c_rt_lib0clear(&___nl__9);
#line 1123
c_rt_lib0clear(&___nl__10);
#line 1123
c_rt_lib0clear(&___nl__11);
#line 1123
c_rt_lib0clear(&___nl__12);
#line 1123
return ___nl__1;
#line 1124
goto label_96;
#line 1124
label_96:
#line 1124
c_rt_lib0clear(&___nl__11);
#line 1124
c_rt_lib0clear(&___nl__12);
#line 1124
c_rt_lib0clear(&___nl__7);
#line 1124
c_rt_lib0clear(&___nl__8);
#line 1124
c_rt_lib0clear(&___nl__9);
#line 1124
c_rt_lib0clear(&___nl__10);
#line 1124
c_rt_lib0clear(&___nl__0);
#line 1124
c_rt_lib0clear(&___nl__1);
#line 1124
c_rt_lib0clear(&___nl__2);
#line 1124
c_rt_lib0clear(&___nl__3);
#line 1124
return NULL;
}

ImmT type_checker_priv0get_type_left_side_equation(ImmT ___nl__0,ImmT * ___ref___1,ImmT * ___ref___2,ImmT * ___ref___3) {
c_rt_lib0arg_val(___nl__0);
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
#line 1129
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(192)));
#line 1129
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__4, ___get_global_const(208)));
#line 1129
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__4));
#line 1129
if(c_rt_lib0check_true_native(___nl__5)){ goto label_10;}
#line 1129
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(192)));
#line 1129
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__4, ___get_global_const(208)));
#line 1129
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(443)));
#line 1129
c_rt_lib0move(&___nl__6,___get_global_const(850));
#line 1129
c_rt_lib0move(&___nl__4, c_rt_lib0eq(___nl__4, ___nl__6));
#line 1129
c_rt_lib0clear(&___nl__6);
#line 1129
label_10:
#line 1129
c_rt_lib0clear(&___nl__5);
#line 1129
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 1129
if(c_rt_lib0check_true_native(___nl__4)){ goto label_23;}
#line 1130
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(192)));
#line 1130
c_rt_lib0move(&___nl__6, c_rt_lib0priv_as(___nl__6, ___get_global_const(208)));
#line 1130
c_rt_lib0move(&___nl__5, type_checker_priv0get_type_record_key(___nl__6, ___ref___1, ___ref___2, ___ref___3));
#line 1130
c_rt_lib0clear(&___nl__6);
#line 1130
c_rt_lib0clear(&___nl__0);
#line 1130
c_rt_lib0clear(&___nl__4);
#line 1130
return ___nl__5;
#line 1130
c_rt_lib0clear(&___nl__5);
#line 1131
goto label_30;
#line 1131
label_23:
#line 1132
c_rt_lib0move(&___nl__5, type_checker_priv0check_val(___nl__0, ___ref___1, ___ref___2, ___ref___3));
#line 1132
c_rt_lib0clear(&___nl__0);
#line 1132
c_rt_lib0clear(&___nl__4);
#line 1132
return ___nl__5;
#line 1132
c_rt_lib0clear(&___nl__5);
#line 1133
goto label_30;
#line 1133
label_30:
#line 1133
c_rt_lib0clear(&___nl__4);
#line 1133
c_rt_lib0clear(&___nl__0);
#line 1133
return NULL;
}

ImmT type_checker_priv0get_type_record_key(ImmT ___nl__0,ImmT * ___ref___1,ImmT * ___ref___2,ImmT * ___ref___3) {
c_rt_lib0arg_val(___nl__0);
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
ImmT ___nl__9 = NULL;
ImmT ___nl__10 = NULL;
#line 1138
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(230)));
#line 1138
c_rt_lib0move(&___nl__4, type_checker_priv0check_val(___nl__5, ___ref___1, ___ref___2, ___ref___3));
#line 1138
c_rt_lib0clear(&___nl__5);
#line 1139
c_rt_lib0move(&___nl__5, ptd_system0can_delete(___nl__4, ___ref___1, ___ref___3));
#line 1139
c_rt_lib0copy(&___nl__4, ___nl__5);
#line 1139
c_rt_lib0clear(&___nl__5);
#line 1140
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(63)));
#line 1140
c_rt_lib0move(&___nl__5, c_rt_lib0priv_is(___nl__5, ___get_global_const(801)));
#line 1140
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 1140
if(c_rt_lib0check_true_native(___nl__5)){ goto label_56;}
#line 1141
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(63)));
#line 1141
c_rt_lib0move(&___nl__6, c_rt_lib0priv_as(___nl__6, ___get_global_const(801)));
#line 1142
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(231)));
#line 1142
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__7, ___get_global_const(192)));
#line 1142
c_rt_lib0move(&___nl__7, c_rt_lib0priv_as(___nl__7, ___get_global_const(856)));
#line 1143
c_rt_lib0move(&___nl__8, hash0has_key(___nl__6, ___nl__7));
#line 1143
c_rt_lib0move(&___nl__8, c_rt_lib0not(___nl__8));
#line 1143
c_rt_lib0move(&___nl__8, c_rt_lib0not(___nl__8));
#line 1143
if(c_rt_lib0check_true_native(___nl__8)){ goto label_41;}
#line 1144
c_rt_lib0move(&___nl__9, type_checker_priv0is_known(___nl__4));
#line 1144
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__9));
#line 1144
if(c_rt_lib0check_true_native(___nl__9)){ goto label_27;}
#line 1144
c_rt_lib0move(&___nl__10,___get_global_const(1234));
#line 1144
c_rt_lib0move(&___nl__10, c_rt_lib0concat_add(___nl__10, ___nl__7));
#line 1144
c_rt_lib0delete(type_checker_priv0add_error(___ref___3, ___nl__10));
#line 1144
c_rt_lib0clear(&___nl__10);
#line 1144
goto label_27;
#line 1144
label_27:
#line 1144
c_rt_lib0clear(&___nl__9);
#line 1145
c_rt_lib0move(&___nl__9, tct0tct_im());
#line 1145
c_rt_lib0copy(&___nl__10, ___nl__9);
#line 1145
c_rt_lib0hash_set_value_dec(&___nl__4, ___get_global_const(63), ___nl__10);
#line 1145
c_rt_lib0clear(&___nl__9);
#line 1145
c_rt_lib0clear(&___nl__10);
#line 1146
c_rt_lib0clear(&___nl__0);
#line 1146
c_rt_lib0clear(&___nl__5);
#line 1146
c_rt_lib0clear(&___nl__6);
#line 1146
c_rt_lib0clear(&___nl__7);
#line 1146
c_rt_lib0clear(&___nl__8);
#line 1146
return ___nl__4;
#line 1147
goto label_41;
#line 1147
label_41:
#line 1147
c_rt_lib0clear(&___nl__8);
#line 1148
c_rt_lib0move(&___nl__8, hash0get_value(___nl__6, ___nl__7));
#line 1148
c_rt_lib0copy(&___nl__9, ___nl__8);
#line 1148
c_rt_lib0hash_set_value_dec(&___nl__4, ___get_global_const(63), ___nl__9);
#line 1148
c_rt_lib0clear(&___nl__8);
#line 1148
c_rt_lib0clear(&___nl__9);
#line 1149
c_rt_lib0clear(&___nl__0);
#line 1149
c_rt_lib0clear(&___nl__5);
#line 1149
c_rt_lib0clear(&___nl__6);
#line 1149
c_rt_lib0clear(&___nl__7);
#line 1149
return ___nl__4;
#line 1149
c_rt_lib0clear(&___nl__6);
#line 1149
c_rt_lib0clear(&___nl__7);
#line 1150
goto label_56;
#line 1150
label_56:
#line 1150
c_rt_lib0clear(&___nl__5);
#line 1151
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(63)));
#line 1151
c_rt_lib0move(&___nl__5, c_rt_lib0priv_is(___nl__5, ___get_global_const(800)));
#line 1151
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 1151
if(c_rt_lib0check_true_native(___nl__5)){ goto label_72;}
#line 1152
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(63)));
#line 1152
c_rt_lib0move(&___nl__6, c_rt_lib0priv_as(___nl__6, ___get_global_const(800)));
#line 1152
c_rt_lib0copy(&___nl__7, ___nl__6);
#line 1152
c_rt_lib0hash_set_value_dec(&___nl__4, ___get_global_const(63), ___nl__7);
#line 1152
c_rt_lib0clear(&___nl__6);
#line 1152
c_rt_lib0clear(&___nl__7);
#line 1153
c_rt_lib0clear(&___nl__0);
#line 1153
c_rt_lib0clear(&___nl__5);
#line 1153
return ___nl__4;
#line 1154
goto label_72;
#line 1154
label_72:
#line 1154
c_rt_lib0clear(&___nl__5);
#line 1155
c_rt_lib0move(&___nl__7, c_rt_lib0hash_mk(0));
#line 1155
c_rt_lib0move(&___nl__6, tct0rec(___nl__7));
#line 1155
c_rt_lib0clear(&___nl__7);
#line 1155
c_rt_lib0move(&___nl__5, ptd_system0is_accepted(___nl__4, ___nl__6, ___ref___1, ___ref___3));
#line 1155
c_rt_lib0clear(&___nl__6);
#line 1155
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 1155
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 1155
if(c_rt_lib0check_true_native(___nl__5)){ goto label_91;}
#line 1156
c_rt_lib0move(&___nl__6,___get_global_const(1235));
#line 1157
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(63)));
#line 1157
c_rt_lib0move(&___nl__7, type_checker_priv0get_print_tct_type_name(___nl__8));
#line 1157
c_rt_lib0clear(&___nl__8);
#line 1157
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__7));
#line 1157
c_rt_lib0clear(&___nl__7);
#line 1157
c_rt_lib0delete(type_checker_priv0add_error(___ref___3, ___nl__6));
#line 1157
c_rt_lib0clear(&___nl__6);
#line 1158
goto label_91;
#line 1158
label_91:
#line 1158
c_rt_lib0clear(&___nl__5);
#line 1159
c_rt_lib0move(&___nl__5, tct0tct_im());
#line 1159
c_rt_lib0copy(&___nl__6, ___nl__5);
#line 1159
c_rt_lib0hash_set_value_dec(&___nl__4, ___get_global_const(63), ___nl__6);
#line 1159
c_rt_lib0clear(&___nl__5);
#line 1159
c_rt_lib0clear(&___nl__6);
#line 1160
c_rt_lib0clear(&___nl__0);
#line 1160
return ___nl__4;
#line 1160
c_rt_lib0clear(&___nl__4);
#line 1160
c_rt_lib0clear(&___nl__0);
#line 1160
return NULL;
}

ImmT type_checker_priv0get_type_from_bin_op_and_check(ImmT ___nl__0,ImmT * ___ref___1,ImmT * ___ref___2,ImmT * ___ref___3) {
c_rt_lib0arg_val(___nl__0);
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
ImmT ___nl__9 = NULL;
ImmT ___nl__10 = NULL;
ImmT ___nl__11 = NULL;
ImmT ___nl__12 = NULL;
#line 1165
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(443)));
#line 1166
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(231)));
#line 1166
c_rt_lib0move(&___nl__5, type_checker_priv0check_val(___nl__6, ___ref___1, ___ref___2, ___ref___3));
#line 1166
c_rt_lib0clear(&___nl__6);
#line 1167
c_rt_lib0move(&___nl__6,___get_global_const(865));
#line 1167
c_rt_lib0move(&___nl__6, c_rt_lib0eq(___nl__4, ___nl__6));
#line 1167
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 1167
if(c_rt_lib0check_true_native(___nl__6)){ goto label_69;}
#line 1168
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(63)));
#line 1168
c_rt_lib0move(&___nl__7, c_rt_lib0priv_is(___nl__7, ___get_global_const(803)));
#line 1168
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 1168
if(c_rt_lib0check_true_native(___nl__7)){ goto label_28;}
#line 1169
c_rt_lib0move(&___nl__8,___get_global_const(1236));
#line 1169
c_rt_lib0delete(type_checker_priv0add_error(___ref___3, ___nl__8));
#line 1169
c_rt_lib0clear(&___nl__8);
#line 1170
c_rt_lib0move(&___nl__9, tct0tct_im());
#line 1170
c_rt_lib0move(&___nl__10, c_rt_lib0ov_mk_none(___get_global_const(1085)));
#line 1170
c_rt_lib0move(&___nl__8, c_rt_lib0hash_mk(2, ___get_global_const(63), ___nl__9, ___get_global_const(43), ___nl__10));
#line 1170
c_rt_lib0clear(&___nl__9);
#line 1170
c_rt_lib0clear(&___nl__10);
#line 1170
c_rt_lib0clear(&___nl__0);
#line 1170
c_rt_lib0clear(&___nl__4);
#line 1170
c_rt_lib0clear(&___nl__5);
#line 1170
c_rt_lib0clear(&___nl__6);
#line 1170
c_rt_lib0clear(&___nl__7);
#line 1170
return ___nl__8;
#line 1170
c_rt_lib0clear(&___nl__8);
#line 1171
goto label_28;
#line 1171
label_28:
#line 1171
c_rt_lib0clear(&___nl__7);
#line 1172
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(*___ref___3, ___get_global_const(18)));
#line 1172
c_rt_lib0move(&___nl__7, array0len(___nl__8));
#line 1172
c_rt_lib0clear(&___nl__8);
#line 1173
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(230)));
#line 1173
c_rt_lib0move(&___nl__8, type_checker_priv0get_type_left_side_equation(___nl__9, ___ref___1, ___ref___2, ___ref___3));
#line 1173
c_rt_lib0clear(&___nl__9);
#line 1174
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(*___ref___3, ___get_global_const(18)));
#line 1174
c_rt_lib0move(&___nl__9, array0len(___nl__10));
#line 1174
c_rt_lib0clear(&___nl__10);
#line 1174
c_rt_lib0move(&___nl__9, c_rt_lib0sub_mod(___nl__9, ___nl__7));
#line 1174
c_rt_lib0move(&___nl__10,___get_global_const(0));
#line 1174
c_rt_lib0move(&___nl__9, c_rt_lib0gt(___nl__9, ___nl__10));
#line 1174
c_rt_lib0clear(&___nl__10);
#line 1174
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__9));
#line 1174
if(c_rt_lib0check_true_native(___nl__9)){ goto label_53;}
#line 1174
c_rt_lib0clear(&___nl__0);
#line 1174
c_rt_lib0clear(&___nl__4);
#line 1174
c_rt_lib0clear(&___nl__5);
#line 1174
c_rt_lib0clear(&___nl__6);
#line 1174
c_rt_lib0clear(&___nl__7);
#line 1174
c_rt_lib0clear(&___nl__9);
#line 1174
return ___nl__8;
#line 1174
goto label_53;
#line 1174
label_53:
#line 1174
c_rt_lib0clear(&___nl__9);
#line 1175
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(230)));
#line 1175
c_rt_lib0move(&___nl__9, type_checker_priv0set_type_to_lval(___nl__10, ___nl__8, ___nl__5, ___ref___1, ___ref___2, ___ref___3));
#line 1175
c_rt_lib0clear(&___nl__10);
#line 1175
c_rt_lib0clear(&___nl__0);
#line 1175
c_rt_lib0clear(&___nl__4);
#line 1175
c_rt_lib0clear(&___nl__5);
#line 1175
c_rt_lib0clear(&___nl__6);
#line 1175
c_rt_lib0clear(&___nl__7);
#line 1175
c_rt_lib0clear(&___nl__8);
#line 1175
return ___nl__9;
#line 1175
c_rt_lib0clear(&___nl__9);
#line 1175
c_rt_lib0clear(&___nl__7);
#line 1175
c_rt_lib0clear(&___nl__8);
#line 1176
goto label_69;
#line 1176
label_69:
#line 1176
c_rt_lib0clear(&___nl__6);
#line 1177
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(230)));
#line 1177
c_rt_lib0move(&___nl__7, type_checker_priv0check_val(___nl__8, ___ref___1, ___ref___2, ___ref___3));
#line 1177
c_rt_lib0clear(&___nl__8);
#line 1177
c_rt_lib0move(&___nl__6, ptd_system0can_delete(___nl__7, ___ref___1, ___ref___3));
#line 1177
c_rt_lib0clear(&___nl__7);
#line 1179
c_rt_lib0move(&___nl__8, tct0tct_im());
#line 1179
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__6, ___get_global_const(43)));
#line 1179
c_rt_lib0move(&___nl__7, c_rt_lib0hash_mk(2, ___get_global_const(63), ___nl__8, ___get_global_const(43), ___nl__9));
#line 1179
c_rt_lib0clear(&___nl__8);
#line 1179
c_rt_lib0clear(&___nl__9);
#line 1180
c_rt_lib0move(&___nl__8,___get_global_const(850));
#line 1180
c_rt_lib0move(&___nl__8, c_rt_lib0eq(___nl__4, ___nl__8));
#line 1180
c_rt_lib0move(&___nl__8, c_rt_lib0not(___nl__8));
#line 1180
if(c_rt_lib0check_true_native(___nl__8)){ goto label_95;}
#line 1181
c_rt_lib0move(&___nl__9, type_checker_priv0get_type_record_key(___nl__0, ___ref___1, ___ref___2, ___ref___3));
#line 1181
c_rt_lib0clear(&___nl__0);
#line 1181
c_rt_lib0clear(&___nl__4);
#line 1181
c_rt_lib0clear(&___nl__5);
#line 1181
c_rt_lib0clear(&___nl__6);
#line 1181
c_rt_lib0clear(&___nl__7);
#line 1181
c_rt_lib0clear(&___nl__8);
#line 1181
return ___nl__9;
#line 1181
c_rt_lib0clear(&___nl__9);
#line 1182
goto label_95;
#line 1182
label_95:
#line 1182
c_rt_lib0clear(&___nl__8);
#line 1183
c_rt_lib0move(&___nl__8,___get_global_const(851));
#line 1183
c_rt_lib0move(&___nl__8, c_rt_lib0eq(___nl__4, ___nl__8));
#line 1183
c_rt_lib0move(&___nl__8, c_rt_lib0not(___nl__8));
#line 1183
if(c_rt_lib0check_true_native(___nl__8)){ goto label_159;}
#line 1184
c_rt_lib0move(&___nl__11, tct0tct_im());
#line 1184
c_rt_lib0move(&___nl__10, tct0arr(___nl__11));
#line 1184
c_rt_lib0clear(&___nl__11);
#line 1184
c_rt_lib0move(&___nl__9, ptd_system0is_accepted(___nl__6, ___nl__10, ___ref___1, ___ref___3));
#line 1184
c_rt_lib0clear(&___nl__10);
#line 1184
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__9));
#line 1184
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__9));
#line 1184
if(c_rt_lib0check_true_native(___nl__9)){ goto label_125;}
#line 1185
c_rt_lib0move(&___nl__10,___get_global_const(1237));
#line 1186
c_rt_lib0move(&___nl__12, c_rt_lib0hash_get_value_dec(___nl__6, ___get_global_const(63)));
#line 1186
c_rt_lib0move(&___nl__11, type_checker_priv0get_print_tct_type_name(___nl__12));
#line 1186
c_rt_lib0clear(&___nl__12);
#line 1186
c_rt_lib0move(&___nl__10, c_rt_lib0concat_add(___nl__10, ___nl__11));
#line 1186
c_rt_lib0clear(&___nl__11);
#line 1186
c_rt_lib0delete(type_checker_priv0add_error(___ref___3, ___nl__10));
#line 1186
c_rt_lib0clear(&___nl__10);
#line 1187
c_rt_lib0clear(&___nl__0);
#line 1187
c_rt_lib0clear(&___nl__4);
#line 1187
c_rt_lib0clear(&___nl__5);
#line 1187
c_rt_lib0clear(&___nl__6);
#line 1187
c_rt_lib0clear(&___nl__8);
#line 1187
c_rt_lib0clear(&___nl__9);
#line 1187
return ___nl__7;
#line 1188
goto label_125;
#line 1188
label_125:
#line 1188
c_rt_lib0clear(&___nl__9);
#line 1189
c_rt_lib0move(&___nl__10, tct0sim());
#line 1189
c_rt_lib0move(&___nl__9, ptd_system0is_accepted(___nl__5, ___nl__10, ___ref___1, ___ref___3));
#line 1189
c_rt_lib0clear(&___nl__10);
#line 1189
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__9));
#line 1189
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__9));
#line 1189
if(c_rt_lib0check_true_native(___nl__9)){ goto label_137;}
#line 1190
c_rt_lib0move(&___nl__10,___get_global_const(1238));
#line 1190
c_rt_lib0delete(type_checker_priv0add_error(___ref___3, ___nl__10));
#line 1190
c_rt_lib0clear(&___nl__10);
#line 1191
goto label_137;
#line 1191
label_137:
#line 1191
c_rt_lib0clear(&___nl__9);
#line 1192
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__6, ___get_global_const(63)));
#line 1192
c_rt_lib0move(&___nl__9, c_rt_lib0priv_is(___nl__9, ___get_global_const(799)));
#line 1192
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__9));
#line 1192
if(c_rt_lib0check_true_native(___nl__9)){ goto label_150;}
#line 1192
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__6, ___get_global_const(63)));
#line 1192
c_rt_lib0move(&___nl__10, c_rt_lib0priv_as(___nl__10, ___get_global_const(799)));
#line 1192
c_rt_lib0copy(&___nl__11, ___nl__10);
#line 1192
c_rt_lib0hash_set_value_dec(&___nl__6, ___get_global_const(63), ___nl__11);
#line 1192
c_rt_lib0clear(&___nl__10);
#line 1192
c_rt_lib0clear(&___nl__11);
#line 1192
goto label_150;
#line 1192
label_150:
#line 1192
c_rt_lib0clear(&___nl__9);
#line 1193
c_rt_lib0clear(&___nl__0);
#line 1193
c_rt_lib0clear(&___nl__4);
#line 1193
c_rt_lib0clear(&___nl__5);
#line 1193
c_rt_lib0clear(&___nl__7);
#line 1193
c_rt_lib0clear(&___nl__8);
#line 1193
return ___nl__6;
#line 1194
goto label_159;
#line 1194
label_159:
#line 1194
c_rt_lib0clear(&___nl__8);
#line 1195
c_rt_lib0move(&___nl__8,___get_global_const(852));
#line 1195
c_rt_lib0move(&___nl__8, c_rt_lib0eq(___nl__4, ___nl__8));
#line 1195
c_rt_lib0move(&___nl__8, c_rt_lib0not(___nl__8));
#line 1195
if(c_rt_lib0check_true_native(___nl__8)){ goto label_218;}
#line 1196
c_rt_lib0move(&___nl__11, tct0tct_im());
#line 1196
c_rt_lib0move(&___nl__10, tct0hash(___nl__11));
#line 1196
c_rt_lib0clear(&___nl__11);
#line 1196
c_rt_lib0move(&___nl__9, ptd_system0is_accepted(___nl__6, ___nl__10, ___ref___1, ___ref___3));
#line 1196
c_rt_lib0clear(&___nl__10);
#line 1196
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__9));
#line 1196
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__9));
#line 1196
if(c_rt_lib0check_true_native(___nl__9)){ goto label_184;}
#line 1197
c_rt_lib0move(&___nl__10,___get_global_const(1239));
#line 1197
c_rt_lib0delete(type_checker_priv0add_error(___ref___3, ___nl__10));
#line 1197
c_rt_lib0clear(&___nl__10);
#line 1198
c_rt_lib0clear(&___nl__0);
#line 1198
c_rt_lib0clear(&___nl__4);
#line 1198
c_rt_lib0clear(&___nl__5);
#line 1198
c_rt_lib0clear(&___nl__6);
#line 1198
c_rt_lib0clear(&___nl__8);
#line 1198
c_rt_lib0clear(&___nl__9);
#line 1198
return ___nl__7;
#line 1199
goto label_184;
#line 1199
label_184:
#line 1199
c_rt_lib0clear(&___nl__9);
#line 1200
c_rt_lib0move(&___nl__10, tct0sim());
#line 1200
c_rt_lib0move(&___nl__9, ptd_system0is_accepted(___nl__5, ___nl__10, ___ref___1, ___ref___3));
#line 1200
c_rt_lib0clear(&___nl__10);
#line 1200
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__9));
#line 1200
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__9));
#line 1200
if(c_rt_lib0check_true_native(___nl__9)){ goto label_196;}
#line 1201
c_rt_lib0move(&___nl__10,___get_global_const(1240));
#line 1201
c_rt_lib0delete(type_checker_priv0add_error(___ref___3, ___nl__10));
#line 1201
c_rt_lib0clear(&___nl__10);
#line 1202
goto label_196;
#line 1202
label_196:
#line 1202
c_rt_lib0clear(&___nl__9);
#line 1203
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__6, ___get_global_const(63)));
#line 1203
c_rt_lib0move(&___nl__9, c_rt_lib0priv_is(___nl__9, ___get_global_const(800)));
#line 1203
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__9));
#line 1203
if(c_rt_lib0check_true_native(___nl__9)){ goto label_209;}
#line 1203
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__6, ___get_global_const(63)));
#line 1203
c_rt_lib0move(&___nl__10, c_rt_lib0priv_as(___nl__10, ___get_global_const(800)));
#line 1203
c_rt_lib0copy(&___nl__11, ___nl__10);
#line 1203
c_rt_lib0hash_set_value_dec(&___nl__6, ___get_global_const(63), ___nl__11);
#line 1203
c_rt_lib0clear(&___nl__10);
#line 1203
c_rt_lib0clear(&___nl__11);
#line 1203
goto label_209;
#line 1203
label_209:
#line 1203
c_rt_lib0clear(&___nl__9);
#line 1204
c_rt_lib0clear(&___nl__0);
#line 1204
c_rt_lib0clear(&___nl__4);
#line 1204
c_rt_lib0clear(&___nl__5);
#line 1204
c_rt_lib0clear(&___nl__7);
#line 1204
c_rt_lib0clear(&___nl__8);
#line 1204
return ___nl__6;
#line 1205
goto label_218;
#line 1205
label_218:
#line 1205
c_rt_lib0clear(&___nl__8);
#line 1206
c_rt_lib0move(&___nl__8,___get_global_const(894));
#line 1206
c_rt_lib0move(&___nl__8, c_rt_lib0eq(___nl__4, ___nl__8));
#line 1206
c_rt_lib0move(&___nl__8, c_rt_lib0not(___nl__8));
#line 1206
if(c_rt_lib0check_true_native(___nl__8)){ goto label_279;}
#line 1207
c_rt_lib0move(&___nl__11, tct0tct_im());
#line 1207
c_rt_lib0move(&___nl__10, tct0arr(___nl__11));
#line 1207
c_rt_lib0clear(&___nl__11);
#line 1207
c_rt_lib0move(&___nl__9, ptd_system0is_accepted(___nl__6, ___nl__10, ___ref___1, ___ref___3));
#line 1207
c_rt_lib0clear(&___nl__10);
#line 1207
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__9));
#line 1207
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__9));
#line 1207
if(c_rt_lib0check_true_native(___nl__9)){ goto label_243;}
#line 1208
c_rt_lib0move(&___nl__10,___get_global_const(1241));
#line 1208
c_rt_lib0delete(type_checker_priv0add_error(___ref___3, ___nl__10));
#line 1208
c_rt_lib0clear(&___nl__10);
#line 1209
c_rt_lib0clear(&___nl__0);
#line 1209
c_rt_lib0clear(&___nl__4);
#line 1209
c_rt_lib0clear(&___nl__5);
#line 1209
c_rt_lib0clear(&___nl__6);
#line 1209
c_rt_lib0clear(&___nl__8);
#line 1209
c_rt_lib0clear(&___nl__9);
#line 1209
return ___nl__7;
#line 1210
goto label_243;
#line 1210
label_243:
#line 1210
c_rt_lib0clear(&___nl__9);
#line 1211
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(63)));
#line 1211
c_rt_lib0move(&___nl__9, tct0arr(___nl__10));
#line 1211
c_rt_lib0clear(&___nl__10);
#line 1211
c_rt_lib0copy(&___nl__10, ___nl__9);
#line 1211
c_rt_lib0hash_set_value_dec(&___nl__5, ___get_global_const(63), ___nl__10);
#line 1211
c_rt_lib0clear(&___nl__9);
#line 1211
c_rt_lib0clear(&___nl__10);
#line 1212
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(230)));
#line 1212
c_rt_lib0move(&___nl__11, tct0empty());
#line 1212
c_rt_lib0move(&___nl__10, tct0arr(___nl__11));
#line 1212
c_rt_lib0clear(&___nl__11);
#line 1212
c_rt_lib0delete(type_checker_priv0set_type_to_lval_spec(___nl__9, ___nl__6, ___nl__5, ___nl__10, ___ref___1, ___ref___2, ___ref___3));
#line 1212
c_rt_lib0clear(&___nl__10);
#line 1212
c_rt_lib0clear(&___nl__9);
#line 1214
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__6, ___get_global_const(63)));
#line 1214
c_rt_lib0move(&___nl__9, c_rt_lib0priv_is(___nl__9, ___get_global_const(799)));
#line 1214
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__9));
#line 1214
if(c_rt_lib0check_true_native(___nl__9)){ goto label_270;}
#line 1214
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__6, ___get_global_const(63)));
#line 1214
c_rt_lib0move(&___nl__10, c_rt_lib0priv_as(___nl__10, ___get_global_const(799)));
#line 1214
c_rt_lib0copy(&___nl__11, ___nl__10);
#line 1214
c_rt_lib0hash_set_value_dec(&___nl__6, ___get_global_const(63), ___nl__11);
#line 1214
c_rt_lib0clear(&___nl__10);
#line 1214
c_rt_lib0clear(&___nl__11);
#line 1214
goto label_270;
#line 1214
label_270:
#line 1214
c_rt_lib0clear(&___nl__9);
#line 1215
c_rt_lib0clear(&___nl__0);
#line 1215
c_rt_lib0clear(&___nl__4);
#line 1215
c_rt_lib0clear(&___nl__5);
#line 1215
c_rt_lib0clear(&___nl__7);
#line 1215
c_rt_lib0clear(&___nl__8);
#line 1215
return ___nl__6;
#line 1217
goto label_279;
#line 1217
label_279:
#line 1217
c_rt_lib0clear(&___nl__8);
#line 1218
c_rt_lib0move(&___nl__8, tc_types0get_bin_op_def(___nl__4));
#line 1219
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__8, ___get_global_const(1132)));
#line 1219
c_rt_lib0move(&___nl__9, ptd_system0is_accepted(___nl__6, ___nl__10, ___ref___1, ___ref___3));
#line 1219
c_rt_lib0clear(&___nl__10);
#line 1219
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__9));
#line 1219
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__9));
#line 1219
if(c_rt_lib0check_true_native(___nl__9)){ goto label_296;}
#line 1220
c_rt_lib0move(&___nl__10,___get_global_const(1242));
#line 1220
c_rt_lib0move(&___nl__10, c_rt_lib0concat_add(___nl__10, ___nl__4));
#line 1220
c_rt_lib0move(&___nl__11,___get_global_const(464));
#line 1220
c_rt_lib0move(&___nl__10, c_rt_lib0concat_add(___nl__10, ___nl__11));
#line 1220
c_rt_lib0clear(&___nl__11);
#line 1220
c_rt_lib0delete(type_checker_priv0add_error(___ref___3, ___nl__10));
#line 1220
c_rt_lib0clear(&___nl__10);
#line 1221
goto label_296;
#line 1221
label_296:
#line 1221
c_rt_lib0clear(&___nl__9);
#line 1222
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__8, ___get_global_const(1133)));
#line 1222
c_rt_lib0move(&___nl__9, ptd_system0is_accepted(___nl__5, ___nl__10, ___ref___1, ___ref___3));
#line 1222
c_rt_lib0clear(&___nl__10);
#line 1222
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__9));
#line 1222
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__9));
#line 1222
if(c_rt_lib0check_true_native(___nl__9)){ goto label_312;}
#line 1223
c_rt_lib0move(&___nl__10,___get_global_const(1243));
#line 1223
c_rt_lib0move(&___nl__10, c_rt_lib0concat_add(___nl__10, ___nl__4));
#line 1223
c_rt_lib0move(&___nl__11,___get_global_const(464));
#line 1223
c_rt_lib0move(&___nl__10, c_rt_lib0concat_add(___nl__10, ___nl__11));
#line 1223
c_rt_lib0clear(&___nl__11);
#line 1223
c_rt_lib0delete(type_checker_priv0add_error(___ref___3, ___nl__10));
#line 1223
c_rt_lib0clear(&___nl__10);
#line 1224
goto label_312;
#line 1224
label_312:
#line 1224
c_rt_lib0clear(&___nl__9);
#line 1225
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__8, ___get_global_const(341)));
#line 1225
c_rt_lib0move(&___nl__11, c_rt_lib0ov_mk_none(___get_global_const(1085)));
#line 1225
c_rt_lib0move(&___nl__9, c_rt_lib0hash_mk(2, ___get_global_const(63), ___nl__10, ___get_global_const(43), ___nl__11));
#line 1225
c_rt_lib0clear(&___nl__10);
#line 1225
c_rt_lib0clear(&___nl__11);
#line 1225
c_rt_lib0clear(&___nl__0);
#line 1225
c_rt_lib0clear(&___nl__4);
#line 1225
c_rt_lib0clear(&___nl__5);
#line 1225
c_rt_lib0clear(&___nl__6);
#line 1225
c_rt_lib0clear(&___nl__7);
#line 1225
c_rt_lib0clear(&___nl__8);
#line 1225
return ___nl__9;
#line 1225
c_rt_lib0clear(&___nl__9);
#line 1225
c_rt_lib0clear(&___nl__4);
#line 1225
c_rt_lib0clear(&___nl__5);
#line 1225
c_rt_lib0clear(&___nl__6);
#line 1225
c_rt_lib0clear(&___nl__7);
#line 1225
c_rt_lib0clear(&___nl__8);
#line 1225
c_rt_lib0clear(&___nl__0);
#line 1225
return NULL;
}

ImmT type_checker_priv0get_print_tct_type_name(ImmT ___nl__0) {
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
#line 1229
c_rt_lib0move(&___nl__1, c_rt_lib0priv_is(___nl__0, ___get_global_const(806)));
#line 1229
if(c_rt_lib0check_true_native(___nl__1)){ goto label_21;}
#line 1231
c_rt_lib0move(&___nl__1, c_rt_lib0priv_is(___nl__0, ___get_global_const(798)));
#line 1231
if(c_rt_lib0check_true_native(___nl__1)){ goto label_28;}
#line 1233
c_rt_lib0move(&___nl__1, c_rt_lib0priv_is(___nl__0, ___get_global_const(803)));
#line 1233
if(c_rt_lib0check_true_native(___nl__1)){ goto label_35;}
#line 1235
c_rt_lib0move(&___nl__1, c_rt_lib0priv_is(___nl__0, ___get_global_const(804)));
#line 1235
if(c_rt_lib0check_true_native(___nl__1)){ goto label_42;}
#line 1237
c_rt_lib0move(&___nl__1, c_rt_lib0priv_is(___nl__0, ___get_global_const(802)));
#line 1237
if(c_rt_lib0check_true_native(___nl__1)){ goto label_49;}
#line 1239
c_rt_lib0move(&___nl__1, c_rt_lib0priv_is(___nl__0, ___get_global_const(799)));
#line 1239
if(c_rt_lib0check_true_native(___nl__1)){ goto label_60;}
#line 1241
c_rt_lib0move(&___nl__1, c_rt_lib0priv_is(___nl__0, ___get_global_const(805)));
#line 1241
if(c_rt_lib0check_true_native(___nl__1)){ goto label_76;}
#line 1251
c_rt_lib0move(&___nl__1, c_rt_lib0priv_is(___nl__0, ___get_global_const(801)));
#line 1251
if(c_rt_lib0check_true_native(___nl__1)){ goto label_131;}
#line 1257
c_rt_lib0move(&___nl__1, c_rt_lib0priv_is(___nl__0, ___get_global_const(800)));
#line 1257
if(c_rt_lib0check_true_native(___nl__1)){ goto label_167;}
#line 1257
c_rt_lib0move(&___nl__1,___get_global_const(91));
#line 1257
c_rt_lib0move(&___nl__1, c_rt_lib0array_mk(2, ___nl__1, ___nl__0));
#line 1257
nl_die_arg(___nl__1);
#line 1229
label_21:
#line 1230
c_rt_lib0move(&___nl__2,___get_global_const(2));
#line 1230
c_rt_lib0clear(&___nl__0);
#line 1230
c_rt_lib0clear(&___nl__1);
#line 1230
return ___nl__2;
#line 1230
c_rt_lib0clear(&___nl__2);
#line 1231
goto label_183;
#line 1231
label_28:
#line 1232
c_rt_lib0move(&___nl__2,___get_global_const(1244));
#line 1232
c_rt_lib0clear(&___nl__0);
#line 1232
c_rt_lib0clear(&___nl__1);
#line 1232
return ___nl__2;
#line 1232
c_rt_lib0clear(&___nl__2);
#line 1233
goto label_183;
#line 1233
label_35:
#line 1234
c_rt_lib0move(&___nl__2,___get_global_const(1245));
#line 1234
c_rt_lib0clear(&___nl__0);
#line 1234
c_rt_lib0clear(&___nl__1);
#line 1234
return ___nl__2;
#line 1234
c_rt_lib0clear(&___nl__2);
#line 1235
goto label_183;
#line 1235
label_42:
#line 1236
c_rt_lib0move(&___nl__2,___get_global_const(1246));
#line 1236
c_rt_lib0clear(&___nl__0);
#line 1236
c_rt_lib0clear(&___nl__1);
#line 1236
return ___nl__2;
#line 1236
c_rt_lib0clear(&___nl__2);
#line 1237
goto label_183;
#line 1237
label_49:
#line 1237
c_rt_lib0move(&___nl__2, c_rt_lib0priv_as(___nl__0, ___get_global_const(802)));
#line 1238
c_rt_lib0move(&___nl__3,___get_global_const(267));
#line 1238
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__2));
#line 1238
c_rt_lib0clear(&___nl__0);
#line 1238
c_rt_lib0clear(&___nl__1);
#line 1238
c_rt_lib0clear(&___nl__2);
#line 1238
return ___nl__3;
#line 1238
c_rt_lib0clear(&___nl__3);
#line 1238
c_rt_lib0clear(&___nl__2);
#line 1239
goto label_183;
#line 1239
label_60:
#line 1239
c_rt_lib0move(&___nl__2, c_rt_lib0priv_as(___nl__0, ___get_global_const(799)));
#line 1240
c_rt_lib0move(&___nl__3,___get_global_const(1247));
#line 1240
c_rt_lib0move(&___nl__4, type_checker_priv0get_print_tct_type_name(___nl__2));
#line 1240
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 1240
c_rt_lib0clear(&___nl__4);
#line 1240
c_rt_lib0move(&___nl__4,___get_global_const(260));
#line 1240
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
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
c_rt_lib0clear(&___nl__2);
#line 1241
goto label_183;
#line 1241
label_76:
#line 1241
c_rt_lib0move(&___nl__2, c_rt_lib0priv_as(___nl__0, ___get_global_const(805)));
#line 1242
c_rt_lib0move(&___nl__3,___get_global_const(1248));
#line 1243
c_rt_lib0move(&___nl__6, c_rt_lib0init_iter(___nl__2));
#line 1243
label_80:
#line 1243
c_rt_lib0move(&___nl__4, c_rt_lib0is_end_hash(___nl__6));
#line 1243
if(c_rt_lib0check_true_native(___nl__4)){ goto label_116;}
#line 1243
c_rt_lib0move(&___nl__4, c_rt_lib0get_key_iter(___nl__6));
#line 1243
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value(___nl__2, ___nl__4));
#line 1244
c_rt_lib0move(&___nl__7, c_rt_lib0priv_is(___nl__5, ___get_global_const(810)));
#line 1244
if(c_rt_lib0check_true_native(___nl__7)){ goto label_92;}
#line 1246
c_rt_lib0move(&___nl__7, c_rt_lib0priv_is(___nl__5, ___get_global_const(809)));
#line 1246
if(c_rt_lib0check_true_native(___nl__7)){ goto label_106;}
#line 1246
c_rt_lib0move(&___nl__7,___get_global_const(91));
#line 1246
c_rt_lib0move(&___nl__7, c_rt_lib0array_mk(2, ___nl__7, ___nl__5));
#line 1246
nl_die_arg(___nl__7);
#line 1244
label_92:
#line 1244
c_rt_lib0move(&___nl__8, c_rt_lib0priv_as(___nl__5, ___get_global_const(810)));
#line 1245
c_rt_lib0move(&___nl__9,___get_global_const(270));
#line 1245
c_rt_lib0move(&___nl__9, c_rt_lib0concat_new(___nl__4, ___nl__9));
#line 1245
c_rt_lib0move(&___nl__10, type_checker_priv0get_print_tct_type_name(___nl__8));
#line 1245
c_rt_lib0move(&___nl__9, c_rt_lib0concat_add(___nl__9, ___nl__10));
#line 1245
c_rt_lib0clear(&___nl__10);
#line 1245
c_rt_lib0move(&___nl__10,___get_global_const(271));
#line 1245
c_rt_lib0move(&___nl__9, c_rt_lib0concat_add(___nl__9, ___nl__10));
#line 1245
c_rt_lib0clear(&___nl__10);
#line 1245
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__9));
#line 1245
c_rt_lib0clear(&___nl__9);
#line 1245
c_rt_lib0clear(&___nl__8);
#line 1246
goto label_112;
#line 1246
label_106:
#line 1247
c_rt_lib0move(&___nl__8,___get_global_const(271));
#line 1247
c_rt_lib0move(&___nl__8, c_rt_lib0concat_new(___nl__4, ___nl__8));
#line 1247
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__8));
#line 1247
c_rt_lib0clear(&___nl__8);
#line 1248
goto label_112;
#line 1248
label_112:
#line 1248
c_rt_lib0clear(&___nl__7);
#line 1249
c_rt_lib0move(&___nl__6, c_rt_lib0next_iter(___nl__6));
#line 1249
goto label_80;
#line 1249
label_116:
#line 1249
c_rt_lib0clear(&___nl__4);
#line 1249
c_rt_lib0clear(&___nl__5);
#line 1249
c_rt_lib0clear(&___nl__6);
#line 1250
c_rt_lib0move(&___nl__4,___get_global_const(260));
#line 1250
c_rt_lib0move(&___nl__4, c_rt_lib0concat_new(___nl__3, ___nl__4));
#line 1250
c_rt_lib0clear(&___nl__0);
#line 1250
c_rt_lib0clear(&___nl__1);
#line 1250
c_rt_lib0clear(&___nl__2);
#line 1250
c_rt_lib0clear(&___nl__3);
#line 1250
return ___nl__4;
#line 1250
c_rt_lib0clear(&___nl__4);
#line 1250
c_rt_lib0clear(&___nl__3);
#line 1250
c_rt_lib0clear(&___nl__2);
#line 1251
goto label_183;
#line 1251
label_131:
#line 1251
c_rt_lib0move(&___nl__2, c_rt_lib0priv_as(___nl__0, ___get_global_const(801)));
#line 1252
c_rt_lib0move(&___nl__3,___get_global_const(1249));
#line 1253
c_rt_lib0move(&___nl__6, c_rt_lib0init_iter(___nl__2));
#line 1253
label_135:
#line 1253
c_rt_lib0move(&___nl__4, c_rt_lib0is_end_hash(___nl__6));
#line 1253
if(c_rt_lib0check_true_native(___nl__4)){ goto label_152;}
#line 1253
c_rt_lib0move(&___nl__4, c_rt_lib0get_key_iter(___nl__6));
#line 1253
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value(___nl__2, ___nl__4));
#line 1254
c_rt_lib0move(&___nl__7,___get_global_const(270));
#line 1254
c_rt_lib0move(&___nl__7, c_rt_lib0concat_new(___nl__4, ___nl__7));
#line 1254
c_rt_lib0move(&___nl__8, type_checker_priv0get_print_tct_type_name(___nl__5));
#line 1254
c_rt_lib0move(&___nl__7, c_rt_lib0concat_add(___nl__7, ___nl__8));
#line 1254
c_rt_lib0clear(&___nl__8);
#line 1254
c_rt_lib0move(&___nl__8,___get_global_const(271));
#line 1254
c_rt_lib0move(&___nl__7, c_rt_lib0concat_add(___nl__7, ___nl__8));
#line 1254
c_rt_lib0clear(&___nl__8);
#line 1254
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__7));
#line 1254
c_rt_lib0clear(&___nl__7);
#line 1255
c_rt_lib0move(&___nl__6, c_rt_lib0next_iter(___nl__6));
#line 1255
goto label_135;
#line 1255
label_152:
#line 1255
c_rt_lib0clear(&___nl__4);
#line 1255
c_rt_lib0clear(&___nl__5);
#line 1255
c_rt_lib0clear(&___nl__6);
#line 1256
c_rt_lib0move(&___nl__4,___get_global_const(260));
#line 1256
c_rt_lib0move(&___nl__4, c_rt_lib0concat_new(___nl__3, ___nl__4));
#line 1256
c_rt_lib0clear(&___nl__0);
#line 1256
c_rt_lib0clear(&___nl__1);
#line 1256
c_rt_lib0clear(&___nl__2);
#line 1256
c_rt_lib0clear(&___nl__3);
#line 1256
return ___nl__4;
#line 1256
c_rt_lib0clear(&___nl__4);
#line 1256
c_rt_lib0clear(&___nl__3);
#line 1256
c_rt_lib0clear(&___nl__2);
#line 1257
goto label_183;
#line 1257
label_167:
#line 1257
c_rt_lib0move(&___nl__2, c_rt_lib0priv_as(___nl__0, ___get_global_const(800)));
#line 1258
c_rt_lib0move(&___nl__3,___get_global_const(1250));
#line 1258
c_rt_lib0move(&___nl__4, type_checker_priv0get_print_tct_type_name(___nl__2));
#line 1258
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 1258
c_rt_lib0clear(&___nl__4);
#line 1258
c_rt_lib0move(&___nl__4,___get_global_const(260));
#line 1258
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 1258
c_rt_lib0clear(&___nl__4);
#line 1258
c_rt_lib0clear(&___nl__0);
#line 1258
c_rt_lib0clear(&___nl__1);
#line 1258
c_rt_lib0clear(&___nl__2);
#line 1258
return ___nl__3;
#line 1258
c_rt_lib0clear(&___nl__3);
#line 1258
c_rt_lib0clear(&___nl__2);
#line 1259
goto label_183;
#line 1259
label_183:
#line 1259
c_rt_lib0clear(&___nl__1);
#line 1259
c_rt_lib0clear(&___nl__0);
#line 1259
return NULL;
}

ImmT type_checker_priv0get_print_tct_label(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
#line 1263
c_rt_lib0move(&___nl__1, c_rt_lib0priv_is(___nl__0, ___get_global_const(806)));
#line 1263
if(c_rt_lib0check_true_native(___nl__1)){ goto label_21;}
#line 1265
c_rt_lib0move(&___nl__1, c_rt_lib0priv_is(___nl__0, ___get_global_const(798)));
#line 1265
if(c_rt_lib0check_true_native(___nl__1)){ goto label_28;}
#line 1267
c_rt_lib0move(&___nl__1, c_rt_lib0priv_is(___nl__0, ___get_global_const(803)));
#line 1267
if(c_rt_lib0check_true_native(___nl__1)){ goto label_35;}
#line 1269
c_rt_lib0move(&___nl__1, c_rt_lib0priv_is(___nl__0, ___get_global_const(804)));
#line 1269
if(c_rt_lib0check_true_native(___nl__1)){ goto label_42;}
#line 1271
c_rt_lib0move(&___nl__1, c_rt_lib0priv_is(___nl__0, ___get_global_const(802)));
#line 1271
if(c_rt_lib0check_true_native(___nl__1)){ goto label_49;}
#line 1273
c_rt_lib0move(&___nl__1, c_rt_lib0priv_is(___nl__0, ___get_global_const(799)));
#line 1273
if(c_rt_lib0check_true_native(___nl__1)){ goto label_59;}
#line 1275
c_rt_lib0move(&___nl__1, c_rt_lib0priv_is(___nl__0, ___get_global_const(805)));
#line 1275
if(c_rt_lib0check_true_native(___nl__1)){ goto label_69;}
#line 1277
c_rt_lib0move(&___nl__1, c_rt_lib0priv_is(___nl__0, ___get_global_const(801)));
#line 1277
if(c_rt_lib0check_true_native(___nl__1)){ goto label_79;}
#line 1279
c_rt_lib0move(&___nl__1, c_rt_lib0priv_is(___nl__0, ___get_global_const(800)));
#line 1279
if(c_rt_lib0check_true_native(___nl__1)){ goto label_89;}
#line 1279
c_rt_lib0move(&___nl__1,___get_global_const(91));
#line 1279
c_rt_lib0move(&___nl__1, c_rt_lib0array_mk(2, ___nl__1, ___nl__0));
#line 1279
nl_die_arg(___nl__1);
#line 1263
label_21:
#line 1264
c_rt_lib0move(&___nl__2,___get_global_const(1251));
#line 1264
c_rt_lib0clear(&___nl__0);
#line 1264
c_rt_lib0clear(&___nl__1);
#line 1264
return ___nl__2;
#line 1264
c_rt_lib0clear(&___nl__2);
#line 1265
goto label_99;
#line 1265
label_28:
#line 1266
c_rt_lib0move(&___nl__2,___get_global_const(769));
#line 1266
c_rt_lib0clear(&___nl__0);
#line 1266
c_rt_lib0clear(&___nl__1);
#line 1266
return ___nl__2;
#line 1266
c_rt_lib0clear(&___nl__2);
#line 1267
goto label_99;
#line 1267
label_35:
#line 1268
c_rt_lib0move(&___nl__2,___get_global_const(1252));
#line 1268
c_rt_lib0clear(&___nl__0);
#line 1268
c_rt_lib0clear(&___nl__1);
#line 1268
return ___nl__2;
#line 1268
c_rt_lib0clear(&___nl__2);
#line 1269
goto label_99;
#line 1269
label_42:
#line 1270
c_rt_lib0move(&___nl__2,___get_global_const(764));
#line 1270
c_rt_lib0clear(&___nl__0);
#line 1270
c_rt_lib0clear(&___nl__1);
#line 1270
return ___nl__2;
#line 1270
c_rt_lib0clear(&___nl__2);
#line 1271
goto label_99;
#line 1271
label_49:
#line 1271
c_rt_lib0move(&___nl__2, c_rt_lib0priv_as(___nl__0, ___get_global_const(802)));
#line 1272
c_rt_lib0move(&___nl__3,___get_global_const(1253));
#line 1272
c_rt_lib0clear(&___nl__0);
#line 1272
c_rt_lib0clear(&___nl__1);
#line 1272
c_rt_lib0clear(&___nl__2);
#line 1272
return ___nl__3;
#line 1272
c_rt_lib0clear(&___nl__3);
#line 1272
c_rt_lib0clear(&___nl__2);
#line 1273
goto label_99;
#line 1273
label_59:
#line 1273
c_rt_lib0move(&___nl__2, c_rt_lib0priv_as(___nl__0, ___get_global_const(799)));
#line 1274
c_rt_lib0move(&___nl__3,___get_global_const(766));
#line 1274
c_rt_lib0clear(&___nl__0);
#line 1274
c_rt_lib0clear(&___nl__1);
#line 1274
c_rt_lib0clear(&___nl__2);
#line 1274
return ___nl__3;
#line 1274
c_rt_lib0clear(&___nl__3);
#line 1274
c_rt_lib0clear(&___nl__2);
#line 1275
goto label_99;
#line 1275
label_69:
#line 1275
c_rt_lib0move(&___nl__2, c_rt_lib0priv_as(___nl__0, ___get_global_const(805)));
#line 1276
c_rt_lib0move(&___nl__3,___get_global_const(768));
#line 1276
c_rt_lib0clear(&___nl__0);
#line 1276
c_rt_lib0clear(&___nl__1);
#line 1276
c_rt_lib0clear(&___nl__2);
#line 1276
return ___nl__3;
#line 1276
c_rt_lib0clear(&___nl__3);
#line 1276
c_rt_lib0clear(&___nl__2);
#line 1277
goto label_99;
#line 1277
label_79:
#line 1277
c_rt_lib0move(&___nl__2, c_rt_lib0priv_as(___nl__0, ___get_global_const(801)));
#line 1278
c_rt_lib0move(&___nl__3,___get_global_const(1254));
#line 1278
c_rt_lib0clear(&___nl__0);
#line 1278
c_rt_lib0clear(&___nl__1);
#line 1278
c_rt_lib0clear(&___nl__2);
#line 1278
return ___nl__3;
#line 1278
c_rt_lib0clear(&___nl__3);
#line 1278
c_rt_lib0clear(&___nl__2);
#line 1279
goto label_99;
#line 1279
label_89:
#line 1279
c_rt_lib0move(&___nl__2, c_rt_lib0priv_as(___nl__0, ___get_global_const(800)));
#line 1280
c_rt_lib0move(&___nl__3,___get_global_const(765));
#line 1280
c_rt_lib0clear(&___nl__0);
#line 1280
c_rt_lib0clear(&___nl__1);
#line 1280
c_rt_lib0clear(&___nl__2);
#line 1280
return ___nl__3;
#line 1280
c_rt_lib0clear(&___nl__3);
#line 1280
c_rt_lib0clear(&___nl__2);
#line 1281
goto label_99;
#line 1281
label_99:
#line 1281
c_rt_lib0clear(&___nl__1);
#line 1281
c_rt_lib0clear(&___nl__0);
#line 1281
return NULL;
}

ImmT type_checker_priv0get_print_check_info(ImmT ___nl__0) {
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
#line 1285
c_rt_lib0move(&___nl__1, c_rt_lib0priv_is(___nl__0, ___get_global_const(48)));
#line 1285
if(c_rt_lib0check_true_native(___nl__1)){ goto label_7;}
#line 1287
c_rt_lib0move(&___nl__1, c_rt_lib0priv_is(___nl__0, ___get_global_const(47)));
#line 1287
if(c_rt_lib0check_true_native(___nl__1)){ goto label_12;}
#line 1287
c_rt_lib0move(&___nl__1,___get_global_const(91));
#line 1287
c_rt_lib0move(&___nl__1, c_rt_lib0array_mk(2, ___nl__1, ___nl__0));
#line 1287
nl_die_arg(___nl__1);
#line 1285
label_7:
#line 1286
c_rt_lib0move(&___nl__2, c_rt_lib0array_mk(0));
#line 1286
nl_die_arg(___nl__2);
#line 1286
c_rt_lib0clear(&___nl__2);
#line 1287
goto label_362;
#line 1287
label_12:
#line 1287
c_rt_lib0move(&___nl__2, c_rt_lib0priv_as(___nl__0, ___get_global_const(47)));
#line 1288
c_rt_lib0move(&___nl__3,___get_global_const(571));
#line 1289
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(690)));
#line 1289
c_rt_lib0move(&___nl__4, array0len(___nl__5));
#line 1289
c_rt_lib0clear(&___nl__5);
#line 1289
c_rt_lib0move(&___nl__5,___get_global_const(1));
#line 1289
c_rt_lib0move(&___nl__4, c_rt_lib0sub_mod(___nl__4, ___nl__5));
#line 1289
c_rt_lib0clear(&___nl__5);
#line 1289
label_21:
#line 1289
c_rt_lib0move(&___nl__5,___get_global_const(0));
#line 1289
c_rt_lib0move(&___nl__5, c_rt_lib0ge(___nl__4, ___nl__5));
#line 1289
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 1289
if(c_rt_lib0check_true_native(___nl__5)){ goto label_81;}
#line 1290
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(690)));
#line 1290
c_rt_lib0move(&___nl__6, c_rt_lib0array_get(___nl__6, ___nl__4));
#line 1290
c_rt_lib0move(&___nl__7, c_rt_lib0priv_is(___nl__6, ___get_global_const(1021)));
#line 1290
if(c_rt_lib0check_true_native(___nl__7)){ goto label_39;}
#line 1292
c_rt_lib0move(&___nl__7, c_rt_lib0priv_is(___nl__6, ___get_global_const(1028)));
#line 1292
if(c_rt_lib0check_true_native(___nl__7)){ goto label_44;}
#line 1294
c_rt_lib0move(&___nl__7, c_rt_lib0priv_is(___nl__6, ___get_global_const(1022)));
#line 1294
if(c_rt_lib0check_true_native(___nl__7)){ goto label_55;}
#line 1296
c_rt_lib0move(&___nl__7, c_rt_lib0priv_is(___nl__6, ___get_global_const(1026)));
#line 1296
if(c_rt_lib0check_true_native(___nl__7)){ goto label_66;}
#line 1296
c_rt_lib0move(&___nl__7,___get_global_const(91));
#line 1296
c_rt_lib0move(&___nl__7, c_rt_lib0array_mk(2, ___nl__7, ___nl__6));
#line 1296
nl_die_arg(___nl__7);
#line 1290
label_39:
#line 1291
c_rt_lib0move(&___nl__8,___get_global_const(766));
#line 1291
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__8));
#line 1291
c_rt_lib0clear(&___nl__8);
#line 1292
goto label_71;
#line 1292
label_44:
#line 1292
c_rt_lib0move(&___nl__8, c_rt_lib0priv_as(___nl__6, ___get_global_const(1028)));
#line 1293
c_rt_lib0move(&___nl__9,___get_global_const(1248));
#line 1293
c_rt_lib0move(&___nl__9, c_rt_lib0concat_add(___nl__9, ___nl__8));
#line 1293
c_rt_lib0move(&___nl__10,___get_global_const(260));
#line 1293
c_rt_lib0move(&___nl__9, c_rt_lib0concat_add(___nl__9, ___nl__10));
#line 1293
c_rt_lib0clear(&___nl__10);
#line 1293
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__9));
#line 1293
c_rt_lib0clear(&___nl__9);
#line 1293
c_rt_lib0clear(&___nl__8);
#line 1294
goto label_71;
#line 1294
label_55:
#line 1294
c_rt_lib0move(&___nl__8, c_rt_lib0priv_as(___nl__6, ___get_global_const(1022)));
#line 1295
c_rt_lib0move(&___nl__9,___get_global_const(1249));
#line 1295
c_rt_lib0move(&___nl__9, c_rt_lib0concat_add(___nl__9, ___nl__8));
#line 1295
c_rt_lib0move(&___nl__10,___get_global_const(260));
#line 1295
c_rt_lib0move(&___nl__9, c_rt_lib0concat_add(___nl__9, ___nl__10));
#line 1295
c_rt_lib0clear(&___nl__10);
#line 1295
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__9));
#line 1295
c_rt_lib0clear(&___nl__9);
#line 1295
c_rt_lib0clear(&___nl__8);
#line 1296
goto label_71;
#line 1296
label_66:
#line 1297
c_rt_lib0move(&___nl__8,___get_global_const(765));
#line 1297
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__8));
#line 1297
c_rt_lib0clear(&___nl__8);
#line 1298
goto label_71;
#line 1298
label_71:
#line 1298
c_rt_lib0clear(&___nl__6);
#line 1298
c_rt_lib0clear(&___nl__7);
#line 1299
c_rt_lib0move(&___nl__6,___get_global_const(850));
#line 1299
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__6));
#line 1299
c_rt_lib0clear(&___nl__6);
#line 1289
c_rt_lib0move(&___nl__6,___get_global_const(1));
#line 1289
c_rt_lib0move(&___nl__4, c_rt_lib0sub_mod(___nl__4, ___nl__6));
#line 1289
c_rt_lib0clear(&___nl__6);
#line 1300
goto label_21;
#line 1300
label_81:
#line 1300
c_rt_lib0clear(&___nl__4);
#line 1300
c_rt_lib0clear(&___nl__5);
#line 1301
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(203)));
#line 1301
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__4, ___get_global_const(801)));
#line 1301
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__4));
#line 1301
if(c_rt_lib0check_true_native(___nl__5)){ goto label_90;}
#line 1301
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(278)));
#line 1301
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__4, ___get_global_const(801)));
#line 1301
label_90:
#line 1301
c_rt_lib0clear(&___nl__5);
#line 1301
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 1301
if(c_rt_lib0check_true_native(___nl__4)){ goto label_191;}
#line 1302
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(203)));
#line 1302
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__5, ___get_global_const(801)));
#line 1302
c_rt_lib0move(&___nl__8, c_rt_lib0init_iter(___nl__5));
#line 1302
label_97:
#line 1302
c_rt_lib0move(&___nl__6, c_rt_lib0is_end_hash(___nl__8));
#line 1302
if(c_rt_lib0check_true_native(___nl__6)){ goto label_137;}
#line 1302
c_rt_lib0move(&___nl__6, c_rt_lib0get_key_iter(___nl__8));
#line 1302
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value(___nl__5, ___nl__6));
#line 1303
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(278)));
#line 1303
c_rt_lib0move(&___nl__10, c_rt_lib0priv_as(___nl__10, ___get_global_const(801)));
#line 1303
c_rt_lib0move(&___nl__9, hash0has_key(___nl__10, ___nl__6));
#line 1303
c_rt_lib0clear(&___nl__10);
#line 1303
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__9));
#line 1303
if(c_rt_lib0check_true_native(___nl__9)){ goto label_111;}
#line 1303
c_rt_lib0clear(&___nl__9);
#line 1303
goto label_134;
#line 1303
goto label_111;
#line 1303
label_111:
#line 1303
c_rt_lib0clear(&___nl__9);
#line 1304
c_rt_lib0move(&___nl__9,___get_global_const(1255));
#line 1304
c_rt_lib0move(&___nl__9, c_rt_lib0concat_new(___nl__3, ___nl__9));
#line 1304
c_rt_lib0move(&___nl__9, c_rt_lib0concat_add(___nl__9, ___nl__6));
#line 1304
c_rt_lib0move(&___nl__10,___get_global_const(1256));
#line 1304
c_rt_lib0move(&___nl__9, c_rt_lib0concat_add(___nl__9, ___nl__10));
#line 1304
c_rt_lib0clear(&___nl__10);
#line 1304
c_rt_lib0move(&___nl__9, c_rt_lib0concat_add(___nl__9, ___nl__6));
#line 1305
c_rt_lib0move(&___nl__10,___get_global_const(1257));
#line 1305
c_rt_lib0move(&___nl__9, c_rt_lib0concat_add(___nl__9, ___nl__10));
#line 1305
c_rt_lib0clear(&___nl__10);
#line 1305
c_rt_lib0clear(&___nl__0);
#line 1305
c_rt_lib0clear(&___nl__1);
#line 1305
c_rt_lib0clear(&___nl__2);
#line 1305
c_rt_lib0clear(&___nl__3);
#line 1305
c_rt_lib0clear(&___nl__4);
#line 1305
c_rt_lib0clear(&___nl__5);
#line 1305
c_rt_lib0clear(&___nl__6);
#line 1305
c_rt_lib0clear(&___nl__7);
#line 1305
c_rt_lib0clear(&___nl__8);
#line 1305
return ___nl__9;
#line 1305
c_rt_lib0clear(&___nl__9);
#line 1305
label_134:
#line 1306
c_rt_lib0move(&___nl__8, c_rt_lib0next_iter(___nl__8));
#line 1306
goto label_97;
#line 1306
label_137:
#line 1306
c_rt_lib0clear(&___nl__5);
#line 1306
c_rt_lib0clear(&___nl__6);
#line 1306
c_rt_lib0clear(&___nl__7);
#line 1306
c_rt_lib0clear(&___nl__8);
#line 1307
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(278)));
#line 1307
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__5, ___get_global_const(801)));
#line 1307
c_rt_lib0move(&___nl__8, c_rt_lib0init_iter(___nl__5));
#line 1307
label_145:
#line 1307
c_rt_lib0move(&___nl__6, c_rt_lib0is_end_hash(___nl__8));
#line 1307
if(c_rt_lib0check_true_native(___nl__6)){ goto label_185;}
#line 1307
c_rt_lib0move(&___nl__6, c_rt_lib0get_key_iter(___nl__8));
#line 1307
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value(___nl__5, ___nl__6));
#line 1308
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(203)));
#line 1308
c_rt_lib0move(&___nl__10, c_rt_lib0priv_as(___nl__10, ___get_global_const(801)));
#line 1308
c_rt_lib0move(&___nl__9, hash0has_key(___nl__10, ___nl__6));
#line 1308
c_rt_lib0clear(&___nl__10);
#line 1308
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__9));
#line 1308
if(c_rt_lib0check_true_native(___nl__9)){ goto label_159;}
#line 1308
c_rt_lib0clear(&___nl__9);
#line 1308
goto label_182;
#line 1308
goto label_159;
#line 1308
label_159:
#line 1308
c_rt_lib0clear(&___nl__9);
#line 1309
c_rt_lib0move(&___nl__9,___get_global_const(1258));
#line 1309
c_rt_lib0move(&___nl__9, c_rt_lib0concat_new(___nl__3, ___nl__9));
#line 1309
c_rt_lib0move(&___nl__9, c_rt_lib0concat_add(___nl__9, ___nl__6));
#line 1309
c_rt_lib0move(&___nl__10,___get_global_const(1259));
#line 1309
c_rt_lib0move(&___nl__9, c_rt_lib0concat_add(___nl__9, ___nl__10));
#line 1309
c_rt_lib0clear(&___nl__10);
#line 1309
c_rt_lib0move(&___nl__9, c_rt_lib0concat_add(___nl__9, ___nl__6));
#line 1310
c_rt_lib0move(&___nl__10,___get_global_const(1257));
#line 1310
c_rt_lib0move(&___nl__9, c_rt_lib0concat_add(___nl__9, ___nl__10));
#line 1310
c_rt_lib0clear(&___nl__10);
#line 1310
c_rt_lib0clear(&___nl__0);
#line 1310
c_rt_lib0clear(&___nl__1);
#line 1310
c_rt_lib0clear(&___nl__2);
#line 1310
c_rt_lib0clear(&___nl__3);
#line 1310
c_rt_lib0clear(&___nl__4);
#line 1310
c_rt_lib0clear(&___nl__5);
#line 1310
c_rt_lib0clear(&___nl__6);
#line 1310
c_rt_lib0clear(&___nl__7);
#line 1310
c_rt_lib0clear(&___nl__8);
#line 1310
return ___nl__9;
#line 1310
c_rt_lib0clear(&___nl__9);
#line 1310
label_182:
#line 1311
c_rt_lib0move(&___nl__8, c_rt_lib0next_iter(___nl__8));
#line 1311
goto label_145;
#line 1311
label_185:
#line 1311
c_rt_lib0clear(&___nl__5);
#line 1311
c_rt_lib0clear(&___nl__6);
#line 1311
c_rt_lib0clear(&___nl__7);
#line 1311
c_rt_lib0clear(&___nl__8);
#line 1312
goto label_353;
#line 1312
label_191:
#line 1312
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(203)));
#line 1312
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__4, ___get_global_const(805)));
#line 1312
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__4));
#line 1312
if(c_rt_lib0check_true_native(___nl__5)){ goto label_198;}
#line 1312
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(278)));
#line 1312
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__4, ___get_global_const(805)));
#line 1312
label_198:
#line 1312
c_rt_lib0clear(&___nl__5);
#line 1312
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 1312
if(c_rt_lib0check_true_native(___nl__4)){ goto label_332;}
#line 1313
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(203)));
#line 1313
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__5, ___get_global_const(805)));
#line 1313
c_rt_lib0move(&___nl__8, c_rt_lib0init_iter(___nl__5));
#line 1313
label_205:
#line 1313
c_rt_lib0move(&___nl__6, c_rt_lib0is_end_hash(___nl__8));
#line 1313
if(c_rt_lib0check_true_native(___nl__6)){ goto label_326;}
#line 1313
c_rt_lib0move(&___nl__6, c_rt_lib0get_key_iter(___nl__8));
#line 1313
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value(___nl__5, ___nl__6));
#line 1314
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(278)));
#line 1314
c_rt_lib0move(&___nl__9, c_rt_lib0priv_as(___nl__9, ___get_global_const(805)));
#line 1315
c_rt_lib0move(&___nl__10, hash0has_key(___nl__9, ___nl__6));
#line 1315
c_rt_lib0move(&___nl__10, c_rt_lib0not(___nl__10));
#line 1315
if(c_rt_lib0check_true_native(___nl__10)){ goto label_296;}
#line 1316
c_rt_lib0move(&___nl__11, c_rt_lib0priv_is(___nl__7, ___get_global_const(809)));
#line 1316
if(c_rt_lib0check_true_native(___nl__11)){ goto label_222;}
#line 1321
c_rt_lib0move(&___nl__11, c_rt_lib0priv_is(___nl__7, ___get_global_const(810)));
#line 1321
if(c_rt_lib0check_true_native(___nl__11)){ goto label_256;}
#line 1321
c_rt_lib0move(&___nl__11,___get_global_const(91));
#line 1321
c_rt_lib0move(&___nl__11, c_rt_lib0array_mk(2, ___nl__11, ___nl__7));
#line 1321
nl_die_arg(___nl__11);
#line 1316
label_222:
#line 1317
c_rt_lib0move(&___nl__12, hash0get_value(___nl__9, ___nl__6));
#line 1317
c_rt_lib0move(&___nl__12, c_rt_lib0priv_is(___nl__12, ___get_global_const(810)));
#line 1317
c_rt_lib0move(&___nl__12, c_rt_lib0not(___nl__12));
#line 1317
if(c_rt_lib0check_true_native(___nl__12)){ goto label_253;}
#line 1318
c_rt_lib0move(&___nl__13,___get_global_const(1260));
#line 1318
c_rt_lib0move(&___nl__13, c_rt_lib0concat_new(___nl__3, ___nl__13));
#line 1318
c_rt_lib0move(&___nl__13, c_rt_lib0concat_add(___nl__13, ___nl__6));
#line 1318
c_rt_lib0move(&___nl__14,___get_global_const(1261));
#line 1318
c_rt_lib0move(&___nl__13, c_rt_lib0concat_add(___nl__13, ___nl__14));
#line 1318
c_rt_lib0clear(&___nl__14);
#line 1318
c_rt_lib0move(&___nl__13, c_rt_lib0concat_add(___nl__13, ___nl__6));
#line 1319
c_rt_lib0move(&___nl__14,___get_global_const(1262));
#line 1319
c_rt_lib0move(&___nl__13, c_rt_lib0concat_add(___nl__13, ___nl__14));
#line 1319
c_rt_lib0clear(&___nl__14);
#line 1319
c_rt_lib0clear(&___nl__0);
#line 1319
c_rt_lib0clear(&___nl__1);
#line 1319
c_rt_lib0clear(&___nl__2);
#line 1319
c_rt_lib0clear(&___nl__3);
#line 1319
c_rt_lib0clear(&___nl__4);
#line 1319
c_rt_lib0clear(&___nl__5);
#line 1319
c_rt_lib0clear(&___nl__6);
#line 1319
c_rt_lib0clear(&___nl__7);
#line 1319
c_rt_lib0clear(&___nl__8);
#line 1319
c_rt_lib0clear(&___nl__9);
#line 1319
c_rt_lib0clear(&___nl__10);
#line 1319
c_rt_lib0clear(&___nl__11);
#line 1319
c_rt_lib0clear(&___nl__12);
#line 1319
return ___nl__13;
#line 1319
c_rt_lib0clear(&___nl__13);
#line 1320
goto label_253;
#line 1320
label_253:
#line 1320
c_rt_lib0clear(&___nl__12);
#line 1321
goto label_293;
#line 1321
label_256:
#line 1321
c_rt_lib0move(&___nl__12, c_rt_lib0priv_as(___nl__7, ___get_global_const(810)));
#line 1322
c_rt_lib0move(&___nl__13, hash0get_value(___nl__9, ___nl__6));
#line 1322
c_rt_lib0move(&___nl__13, c_rt_lib0priv_is(___nl__13, ___get_global_const(809)));
#line 1322
c_rt_lib0move(&___nl__13, c_rt_lib0not(___nl__13));
#line 1322
if(c_rt_lib0check_true_native(___nl__13)){ goto label_289;}
#line 1323
c_rt_lib0move(&___nl__14,___get_global_const(1260));
#line 1323
c_rt_lib0move(&___nl__14, c_rt_lib0concat_new(___nl__3, ___nl__14));
#line 1323
c_rt_lib0move(&___nl__14, c_rt_lib0concat_add(___nl__14, ___nl__6));
#line 1323
c_rt_lib0move(&___nl__15,___get_global_const(1263));
#line 1323
c_rt_lib0move(&___nl__14, c_rt_lib0concat_add(___nl__14, ___nl__15));
#line 1323
c_rt_lib0clear(&___nl__15);
#line 1323
c_rt_lib0move(&___nl__14, c_rt_lib0concat_add(___nl__14, ___nl__6));
#line 1324
c_rt_lib0move(&___nl__15,___get_global_const(1264));
#line 1324
c_rt_lib0move(&___nl__14, c_rt_lib0concat_add(___nl__14, ___nl__15));
#line 1324
c_rt_lib0clear(&___nl__15);
#line 1324
c_rt_lib0clear(&___nl__0);
#line 1324
c_rt_lib0clear(&___nl__1);
#line 1324
c_rt_lib0clear(&___nl__2);
#line 1324
c_rt_lib0clear(&___nl__3);
#line 1324
c_rt_lib0clear(&___nl__4);
#line 1324
c_rt_lib0clear(&___nl__5);
#line 1324
c_rt_lib0clear(&___nl__6);
#line 1324
c_rt_lib0clear(&___nl__7);
#line 1324
c_rt_lib0clear(&___nl__8);
#line 1324
c_rt_lib0clear(&___nl__9);
#line 1324
c_rt_lib0clear(&___nl__10);
#line 1324
c_rt_lib0clear(&___nl__11);
#line 1324
c_rt_lib0clear(&___nl__12);
#line 1324
c_rt_lib0clear(&___nl__13);
#line 1324
return ___nl__14;
#line 1324
c_rt_lib0clear(&___nl__14);
#line 1325
goto label_289;
#line 1325
label_289:
#line 1325
c_rt_lib0clear(&___nl__13);
#line 1325
c_rt_lib0clear(&___nl__12);
#line 1326
goto label_293;
#line 1326
label_293:
#line 1326
c_rt_lib0clear(&___nl__11);
#line 1327
goto label_321;
#line 1327
label_296:
#line 1328
c_rt_lib0move(&___nl__11,___get_global_const(1265));
#line 1328
c_rt_lib0move(&___nl__11, c_rt_lib0concat_new(___nl__3, ___nl__11));
#line 1328
c_rt_lib0move(&___nl__11, c_rt_lib0concat_add(___nl__11, ___nl__6));
#line 1328
c_rt_lib0move(&___nl__12,___get_global_const(1266));
#line 1328
c_rt_lib0move(&___nl__11, c_rt_lib0concat_add(___nl__11, ___nl__12));
#line 1328
c_rt_lib0clear(&___nl__12);
#line 1328
c_rt_lib0move(&___nl__11, c_rt_lib0concat_add(___nl__11, ___nl__6));
#line 1329
c_rt_lib0move(&___nl__12,___get_global_const(1257));
#line 1329
c_rt_lib0move(&___nl__11, c_rt_lib0concat_add(___nl__11, ___nl__12));
#line 1329
c_rt_lib0clear(&___nl__12);
#line 1329
c_rt_lib0clear(&___nl__0);
#line 1329
c_rt_lib0clear(&___nl__1);
#line 1329
c_rt_lib0clear(&___nl__2);
#line 1329
c_rt_lib0clear(&___nl__3);
#line 1329
c_rt_lib0clear(&___nl__4);
#line 1329
c_rt_lib0clear(&___nl__5);
#line 1329
c_rt_lib0clear(&___nl__6);
#line 1329
c_rt_lib0clear(&___nl__7);
#line 1329
c_rt_lib0clear(&___nl__8);
#line 1329
c_rt_lib0clear(&___nl__9);
#line 1329
c_rt_lib0clear(&___nl__10);
#line 1329
return ___nl__11;
#line 1329
c_rt_lib0clear(&___nl__11);
#line 1330
goto label_321;
#line 1330
label_321:
#line 1330
c_rt_lib0clear(&___nl__10);
#line 1330
c_rt_lib0clear(&___nl__9);
#line 1331
c_rt_lib0move(&___nl__8, c_rt_lib0next_iter(___nl__8));
#line 1331
goto label_205;
#line 1331
label_326:
#line 1331
c_rt_lib0clear(&___nl__5);
#line 1331
c_rt_lib0clear(&___nl__6);
#line 1331
c_rt_lib0clear(&___nl__7);
#line 1331
c_rt_lib0clear(&___nl__8);
#line 1332
goto label_353;
#line 1332
label_332:
#line 1333
c_rt_lib0move(&___nl__5,___get_global_const(373));
#line 1333
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(203)));
#line 1333
c_rt_lib0move(&___nl__6, type_checker_priv0get_print_tct_label(___nl__7));
#line 1333
c_rt_lib0clear(&___nl__7);
#line 1333
c_rt_lib0move(&___nl__5, c_rt_lib0concat_add(___nl__5, ___nl__6));
#line 1333
c_rt_lib0clear(&___nl__6);
#line 1333
c_rt_lib0move(&___nl__6,___get_global_const(1267));
#line 1333
c_rt_lib0move(&___nl__5, c_rt_lib0concat_add(___nl__5, ___nl__6));
#line 1333
c_rt_lib0clear(&___nl__6);
#line 1333
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(278)));
#line 1333
c_rt_lib0move(&___nl__6, type_checker_priv0get_print_tct_label(___nl__7));
#line 1333
c_rt_lib0clear(&___nl__7);
#line 1333
c_rt_lib0move(&___nl__5, c_rt_lib0concat_add(___nl__5, ___nl__6));
#line 1333
c_rt_lib0clear(&___nl__6);
#line 1333
c_rt_lib0move(&___nl__6,___get_global_const(260));
#line 1333
c_rt_lib0move(&___nl__5, c_rt_lib0concat_add(___nl__5, ___nl__6));
#line 1333
c_rt_lib0clear(&___nl__6);
#line 1333
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__5));
#line 1333
c_rt_lib0clear(&___nl__5);
#line 1334
goto label_353;
#line 1334
label_353:
#line 1334
c_rt_lib0clear(&___nl__4);
#line 1335
c_rt_lib0clear(&___nl__0);
#line 1335
c_rt_lib0clear(&___nl__1);
#line 1335
c_rt_lib0clear(&___nl__2);
#line 1335
return ___nl__3;
#line 1335
c_rt_lib0clear(&___nl__3);
#line 1335
c_rt_lib0clear(&___nl__2);
#line 1336
goto label_362;
#line 1336
label_362:
#line 1336
c_rt_lib0clear(&___nl__1);
#line 1336
c_rt_lib0clear(&___nl__0);
#line 1336
return NULL;
}

ImmT type_checker_priv0check_var_decl(ImmT ___nl__0,ImmT * ___ref___1,ImmT * ___ref___2,ImmT * ___ref___3) {
c_rt_lib0arg_val(___nl__0);
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
#line 1341
c_rt_lib0move(&___nl__5, c_rt_lib0get_false());
#line 1341
c_rt_lib0move(&___nl__4, type_checker_priv0check_var_decl_try(___nl__0, ___nl__5, ___ref___1, ___ref___2, ___ref___3));
#line 1341
c_rt_lib0clear(&___nl__5);
#line 1341
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(48)));
#line 1341
c_rt_lib0clear(&___nl__0);
#line 1341
return ___nl__4;
#line 1341
c_rt_lib0clear(&___nl__4);
#line 1341
c_rt_lib0clear(&___nl__0);
#line 1341
return NULL;
}

ImmT type_checker_priv0check_var_decl_try(ImmT ___nl__0,ImmT ___nl__1,ImmT * ___ref___2,ImmT * ___ref___3,ImmT * ___ref___4) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
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
#line 1346
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(93)));
#line 1346
c_rt_lib0move(&___nl__5, hash0has_key(*___ref___3, ___nl__6));
#line 1346
c_rt_lib0clear(&___nl__6);
#line 1346
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 1346
if(c_rt_lib0check_true_native(___nl__5)){ goto label_15;}
#line 1346
c_rt_lib0move(&___nl__6,___get_global_const(1268));
#line 1346
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(93)));
#line 1346
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__7));
#line 1346
c_rt_lib0clear(&___nl__7);
#line 1346
c_rt_lib0move(&___nl__7,___get_global_const(1269));
#line 1346
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__7));
#line 1346
c_rt_lib0clear(&___nl__7);
#line 1346
c_rt_lib0delete(type_checker_priv0add_error(___ref___4, ___nl__6));
#line 1346
c_rt_lib0clear(&___nl__6);
#line 1346
goto label_15;
#line 1346
label_15:
#line 1346
c_rt_lib0clear(&___nl__5);
#line 1348
c_rt_lib0move(&___nl__7, c_rt_lib0ov_mk_none(___get_global_const(45)));
#line 1348
c_rt_lib0move(&___nl__8, tct0empty());
#line 1348
c_rt_lib0move(&___nl__6, c_rt_lib0hash_mk(2, ___get_global_const(1139), ___nl__7, ___get_global_const(63), ___nl__8));
#line 1348
c_rt_lib0clear(&___nl__7);
#line 1348
c_rt_lib0clear(&___nl__8);
#line 1349
c_rt_lib0move(&___nl__8, tct0empty());
#line 1349
c_rt_lib0move(&___nl__9, c_rt_lib0ov_mk_none(___get_global_const(1085)));
#line 1349
c_rt_lib0move(&___nl__7, c_rt_lib0hash_mk(2, ___get_global_const(63), ___nl__8, ___get_global_const(43), ___nl__9));
#line 1349
c_rt_lib0clear(&___nl__8);
#line 1349
c_rt_lib0clear(&___nl__9);
#line 1349
c_rt_lib0move(&___nl__5, c_rt_lib0hash_mk(2, ___get_global_const(48), ___nl__6, ___get_global_const(47), ___nl__7));
#line 1349
c_rt_lib0clear(&___nl__6);
#line 1349
c_rt_lib0clear(&___nl__7);
#line 1351
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(63)));
#line 1351
c_rt_lib0move(&___nl__7, c_rt_lib0priv_is(___nl__6, ___get_global_const(63)));
#line 1351
if(c_rt_lib0check_true_native(___nl__7)){ goto label_38;}
#line 1360
c_rt_lib0move(&___nl__7, c_rt_lib0priv_is(___nl__6, ___get_global_const(41)));
#line 1360
if(c_rt_lib0check_true_native(___nl__7)){ goto label_94;}
#line 1360
c_rt_lib0move(&___nl__7,___get_global_const(91));
#line 1360
c_rt_lib0move(&___nl__7, c_rt_lib0array_mk(2, ___nl__7, ___nl__6));
#line 1360
nl_die_arg(___nl__7);
#line 1351
label_38:
#line 1351
c_rt_lib0move(&___nl__8, c_rt_lib0priv_as(___nl__6, ___get_global_const(63)));
#line 1352
c_rt_lib0move(&___nl__9, ptd_parser0try_value_to_ptd(___nl__8));
#line 1352
c_rt_lib0move(&___nl__10, c_rt_lib0priv_is(___nl__9, ___get_global_const(47)));
#line 1352
if(c_rt_lib0check_true_native(___nl__10)){ goto label_48;}
#line 1355
c_rt_lib0move(&___nl__10, c_rt_lib0priv_is(___nl__9, ___get_global_const(48)));
#line 1355
if(c_rt_lib0check_true_native(___nl__10)){ goto label_64;}
#line 1355
c_rt_lib0move(&___nl__10,___get_global_const(91));
#line 1355
c_rt_lib0move(&___nl__10, c_rt_lib0array_mk(2, ___nl__10, ___nl__9));
#line 1355
nl_die_arg(___nl__10);
#line 1352
label_48:
#line 1352
c_rt_lib0move(&___nl__11, c_rt_lib0priv_as(___nl__9, ___get_global_const(47)));
#line 1353
c_rt_lib0delete(type_checker_priv0add_error(___ref___4, ___nl__11));
#line 1354
c_rt_lib0move(&___nl__12, tct0tct_im());
#line 1354
c_rt_lib0move(&___nl__13,___get_global_const(48));
#line 1354
c_rt_lib0move(&___nl__13, c_rt_lib0get_ref_hash(___nl__5, ___nl__13));
#line 1354
c_rt_lib0copy(&___nl__14, ___nl__12);
#line 1354
c_rt_lib0hash_set_value_dec(&___nl__13, ___get_global_const(63), ___nl__14);
#line 1354
c_rt_lib0move(&___nl__15,___get_global_const(48));
#line 1354
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__5, ___nl__15, ___nl__13));
#line 1354
c_rt_lib0clear(&___nl__15);
#line 1354
c_rt_lib0clear(&___nl__12);
#line 1354
c_rt_lib0clear(&___nl__13);
#line 1354
c_rt_lib0clear(&___nl__14);
#line 1354
c_rt_lib0clear(&___nl__11);
#line 1355
goto label_78;
#line 1355
label_64:
#line 1355
c_rt_lib0move(&___nl__11, c_rt_lib0priv_as(___nl__9, ___get_global_const(48)));
#line 1356
c_rt_lib0move(&___nl__12,___get_global_const(48));
#line 1356
c_rt_lib0move(&___nl__12, c_rt_lib0get_ref_hash(___nl__5, ___nl__12));
#line 1356
c_rt_lib0copy(&___nl__13, ___nl__11);
#line 1356
c_rt_lib0hash_set_value_dec(&___nl__12, ___get_global_const(63), ___nl__13);
#line 1356
c_rt_lib0move(&___nl__14,___get_global_const(48));
#line 1356
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__5, ___nl__14, ___nl__12));
#line 1356
c_rt_lib0clear(&___nl__14);
#line 1356
c_rt_lib0clear(&___nl__12);
#line 1356
c_rt_lib0clear(&___nl__13);
#line 1357
c_rt_lib0delete(type_checker_priv0check_types_imported(___nl__11, ___ref___2, ___ref___4));
#line 1357
c_rt_lib0clear(&___nl__11);
#line 1358
goto label_78;
#line 1358
label_78:
#line 1358
c_rt_lib0clear(&___nl__9);
#line 1358
c_rt_lib0clear(&___nl__10);
#line 1359
c_rt_lib0move(&___nl__9, c_rt_lib0ov_mk_none(___get_global_const(46)));
#line 1359
c_rt_lib0move(&___nl__10,___get_global_const(48));
#line 1359
c_rt_lib0move(&___nl__10, c_rt_lib0get_ref_hash(___nl__5, ___nl__10));
#line 1359
c_rt_lib0copy(&___nl__11, ___nl__9);
#line 1359
c_rt_lib0hash_set_value_dec(&___nl__10, ___get_global_const(1139), ___nl__11);
#line 1359
c_rt_lib0move(&___nl__12,___get_global_const(48));
#line 1359
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__5, ___nl__12, ___nl__10));
#line 1359
c_rt_lib0clear(&___nl__12);
#line 1359
c_rt_lib0clear(&___nl__9);
#line 1359
c_rt_lib0clear(&___nl__10);
#line 1359
c_rt_lib0clear(&___nl__11);
#line 1359
c_rt_lib0clear(&___nl__8);
#line 1360
goto label_96;
#line 1360
label_94:
#line 1361
goto label_96;
#line 1361
label_96:
#line 1361
c_rt_lib0clear(&___nl__6);
#line 1361
c_rt_lib0clear(&___nl__7);
#line 1362
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(192)));
#line 1362
c_rt_lib0move(&___nl__7, c_rt_lib0priv_is(___nl__6, ___get_global_const(192)));
#line 1362
if(c_rt_lib0check_true_native(___nl__7)){ goto label_107;}
#line 1382
c_rt_lib0move(&___nl__7, c_rt_lib0priv_is(___nl__6, ___get_global_const(41)));
#line 1382
if(c_rt_lib0check_true_native(___nl__7)){ goto label_195;}
#line 1382
c_rt_lib0move(&___nl__7,___get_global_const(91));
#line 1382
c_rt_lib0move(&___nl__7, c_rt_lib0array_mk(2, ___nl__7, ___nl__6));
#line 1382
nl_die_arg(___nl__7);
#line 1362
label_107:
#line 1362
c_rt_lib0move(&___nl__8, c_rt_lib0priv_as(___nl__6, ___get_global_const(192)));
#line 1363
c_rt_lib0move(&___nl__9, type_checker_priv0check_val(___nl__8, ___ref___2, ___ref___3, ___ref___4));
#line 1364
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__9, ___get_global_const(63)));
#line 1364
c_rt_lib0move(&___nl__10, c_rt_lib0priv_is(___nl__10, ___get_global_const(803)));
#line 1364
c_rt_lib0move(&___nl__10, c_rt_lib0not(___nl__10));
#line 1364
if(c_rt_lib0check_true_native(___nl__10)){ goto label_126;}
#line 1365
c_rt_lib0move(&___nl__11,___get_global_const(1236));
#line 1365
c_rt_lib0delete(type_checker_priv0add_error(___ref___4, ___nl__11));
#line 1365
c_rt_lib0clear(&___nl__11);
#line 1366
c_rt_lib0clear(&___nl__0);
#line 1366
c_rt_lib0clear(&___nl__1);
#line 1366
c_rt_lib0clear(&___nl__6);
#line 1366
c_rt_lib0clear(&___nl__7);
#line 1366
c_rt_lib0clear(&___nl__8);
#line 1366
c_rt_lib0clear(&___nl__9);
#line 1366
c_rt_lib0clear(&___nl__10);
#line 1366
return ___nl__5;
#line 1367
goto label_126;
#line 1367
label_126:
#line 1367
c_rt_lib0clear(&___nl__10);
#line 1368
c_rt_lib0copy(&___nl__10, ___nl__1);
#line 1368
c_rt_lib0move(&___nl__10, c_rt_lib0not(___nl__10));
#line 1368
if(c_rt_lib0check_true_native(___nl__10)){ goto label_148;}
#line 1369
c_rt_lib0move(&___nl__11, ptd_system0try_get_ensure_sub_types(___nl__9, ___ref___2, ___ref___4));
#line 1370
c_rt_lib0move(&___nl__13, c_rt_lib0hash_get_value_dec(___nl__11, ___get_global_const(47)));
#line 1370
c_rt_lib0move(&___nl__14, c_rt_lib0hash_get_value_dec(___nl__9, ___get_global_const(43)));
#line 1370
c_rt_lib0move(&___nl__12, c_rt_lib0hash_mk(2, ___get_global_const(63), ___nl__13, ___get_global_const(43), ___nl__14));
#line 1370
c_rt_lib0clear(&___nl__13);
#line 1370
c_rt_lib0clear(&___nl__14);
#line 1370
c_rt_lib0copy(&___nl__13, ___nl__12);
#line 1370
c_rt_lib0hash_set_value_dec(&___nl__5, ___get_global_const(47), ___nl__13);
#line 1370
c_rt_lib0clear(&___nl__12);
#line 1370
c_rt_lib0clear(&___nl__13);
#line 1371
c_rt_lib0move(&___nl__12, c_rt_lib0hash_get_value_dec(___nl__11, ___get_global_const(48)));
#line 1371
c_rt_lib0copy(&___nl__13, ___nl__12);
#line 1371
c_rt_lib0hash_set_value_dec(&___nl__9, ___get_global_const(63), ___nl__13);
#line 1371
c_rt_lib0clear(&___nl__12);
#line 1371
c_rt_lib0clear(&___nl__13);
#line 1371
c_rt_lib0clear(&___nl__11);
#line 1372
goto label_148;
#line 1372
label_148:
#line 1372
c_rt_lib0clear(&___nl__10);
#line 1373
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(48)));
#line 1373
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__10, ___get_global_const(63)));
#line 1373
c_rt_lib0move(&___nl__10, c_rt_lib0priv_is(___nl__10, ___get_global_const(806)));
#line 1373
c_rt_lib0move(&___nl__10, c_rt_lib0not(___nl__10));
#line 1373
if(c_rt_lib0check_true_native(___nl__10)){ goto label_170;}
#line 1374
c_rt_lib0move(&___nl__11, tct0tct_im());
#line 1374
c_rt_lib0delete(ptd_system0check_assignment(___nl__11, ___nl__9, ___ref___2, ___ref___4));
#line 1374
c_rt_lib0clear(&___nl__11);
#line 1375
c_rt_lib0move(&___nl__11, c_rt_lib0hash_get_value_dec(___nl__9, ___get_global_const(63)));
#line 1375
c_rt_lib0move(&___nl__12,___get_global_const(48));
#line 1375
c_rt_lib0move(&___nl__12, c_rt_lib0get_ref_hash(___nl__5, ___nl__12));
#line 1375
c_rt_lib0copy(&___nl__13, ___nl__11);
#line 1375
c_rt_lib0hash_set_value_dec(&___nl__12, ___get_global_const(63), ___nl__13);
#line 1375
c_rt_lib0move(&___nl__14,___get_global_const(48));
#line 1375
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__5, ___nl__14, ___nl__12));
#line 1375
c_rt_lib0clear(&___nl__14);
#line 1375
c_rt_lib0clear(&___nl__11);
#line 1375
c_rt_lib0clear(&___nl__12);
#line 1375
c_rt_lib0clear(&___nl__13);
#line 1376
goto label_190;
#line 1376
label_170:
#line 1377
c_rt_lib0move(&___nl__12, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(48)));
#line 1377
c_rt_lib0move(&___nl__12, c_rt_lib0hash_get_value_dec(___nl__12, ___get_global_const(63)));
#line 1377
c_rt_lib0move(&___nl__11, ptd_system0check_assignment(___nl__12, ___nl__9, ___ref___2, ___ref___4));
#line 1377
c_rt_lib0clear(&___nl__12);
#line 1378
c_rt_lib0copy(&___nl__12, ___nl__11);
#line 1378
c_rt_lib0move(&___nl__12, c_rt_lib0priv_is(___nl__12, ___get_global_const(47)));
#line 1378
c_rt_lib0move(&___nl__12, c_rt_lib0not(___nl__12));
#line 1378
if(c_rt_lib0check_true_native(___nl__12)){ goto label_186;}
#line 1379
c_rt_lib0move(&___nl__13,___get_global_const(1270));
#line 1379
c_rt_lib0move(&___nl__14, type_checker_priv0get_print_check_info(___nl__11));
#line 1379
c_rt_lib0move(&___nl__13, c_rt_lib0concat_add(___nl__13, ___nl__14));
#line 1379
c_rt_lib0clear(&___nl__14);
#line 1379
c_rt_lib0delete(type_checker_priv0add_error(___ref___4, ___nl__13));
#line 1379
c_rt_lib0clear(&___nl__13);
#line 1380
goto label_186;
#line 1380
label_186:
#line 1380
c_rt_lib0clear(&___nl__12);
#line 1380
c_rt_lib0clear(&___nl__11);
#line 1381
goto label_190;
#line 1381
label_190:
#line 1381
c_rt_lib0clear(&___nl__10);
#line 1381
c_rt_lib0clear(&___nl__9);
#line 1381
c_rt_lib0clear(&___nl__8);
#line 1382
goto label_197;
#line 1382
label_195:
#line 1383
goto label_197;
#line 1383
label_197:
#line 1383
c_rt_lib0clear(&___nl__6);
#line 1383
c_rt_lib0clear(&___nl__7);
#line 1384
c_rt_lib0clear(&___nl__0);
#line 1384
c_rt_lib0clear(&___nl__1);
#line 1384
return ___nl__5;
#line 1384
c_rt_lib0clear(&___nl__5);
#line 1384
c_rt_lib0clear(&___nl__0);
#line 1384
c_rt_lib0clear(&___nl__1);
#line 1384
return NULL;
}

ImmT type_checker_priv0add_var_to_vars(ImmT ___nl__0,ImmT ___nl__1,ImmT * ___ref___2) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
#line 1388
c_rt_lib0delete(hash0set_value(___ref___2, ___nl__1, ___nl__0));
#line 1388
c_rt_lib0clear(&___nl__0);
#line 1388
c_rt_lib0clear(&___nl__1);
#line 1388
return NULL;
}

ImmT type_checker_priv0set_type_to_variable(ImmT * ___ref___0,ImmT ___nl__1,ImmT ___nl__2) {
c_rt_lib0arg_val(___nl__1);
c_rt_lib0arg_val(___nl__2);
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
#line 1392
c_rt_lib0move(&___nl__4, c_rt_lib0ov_mk_none(___get_global_const(45)));
#line 1392
c_rt_lib0move(&___nl__3, c_rt_lib0hash_mk(2, ___get_global_const(1139), ___nl__4, ___get_global_const(63), ___nl__2));
#line 1392
c_rt_lib0clear(&___nl__4);
#line 1392
c_rt_lib0delete(type_checker_priv0add_var_to_vars(___nl__3, ___nl__1, ___ref___0));
#line 1392
c_rt_lib0clear(&___nl__3);
#line 1392
c_rt_lib0clear(&___nl__1);
#line 1392
c_rt_lib0clear(&___nl__2);
#line 1392
return NULL;
}

ImmT type_checker_priv0add_var_decl_to_vars(ImmT ___nl__0,ImmT ___nl__1,ImmT * ___ref___2) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
#line 1396
c_rt_lib0copy(&___nl__3, ___nl__0);
#line 1396
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__3, ___get_global_const(798)));
#line 1396
if(c_rt_lib0check_true_native(___nl__3)){ goto label_5;}
#line 1396
c_rt_lib0copy(&___nl__3, ___nl__0);
#line 1396
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__3, ___get_global_const(806)));
#line 1396
label_5:
#line 1396
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 1396
if(c_rt_lib0check_true_native(___nl__3)){ goto label_14;}
#line 1397
c_rt_lib0move(&___nl__5, c_rt_lib0ov_mk_none(___get_global_const(45)));
#line 1397
c_rt_lib0move(&___nl__4, c_rt_lib0hash_mk(2, ___get_global_const(1139), ___nl__5, ___get_global_const(63), ___nl__0));
#line 1397
c_rt_lib0clear(&___nl__5);
#line 1397
c_rt_lib0delete(type_checker_priv0add_var_to_vars(___nl__4, ___nl__1, ___ref___2));
#line 1397
c_rt_lib0clear(&___nl__4);
#line 1398
goto label_21;
#line 1398
label_14:
#line 1399
c_rt_lib0move(&___nl__5, c_rt_lib0ov_mk_none(___get_global_const(46)));
#line 1399
c_rt_lib0move(&___nl__4, c_rt_lib0hash_mk(2, ___get_global_const(1139), ___nl__5, ___get_global_const(63), ___nl__0));
#line 1399
c_rt_lib0clear(&___nl__5);
#line 1399
c_rt_lib0delete(type_checker_priv0add_var_to_vars(___nl__4, ___nl__1, ___ref___2));
#line 1399
c_rt_lib0clear(&___nl__4);
#line 1400
goto label_21;
#line 1400
label_21:
#line 1400
c_rt_lib0clear(&___nl__3);
#line 1400
c_rt_lib0clear(&___nl__0);
#line 1400
c_rt_lib0clear(&___nl__1);
#line 1400
return NULL;
}

ImmT type_checker_priv0add_var_decl_with_type_and_check(ImmT ___nl__0,ImmT ___nl__1,ImmT * ___ref___2,ImmT * ___ref___3) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
#line 1405
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(93)));
#line 1405
c_rt_lib0move(&___nl__4, hash0has_key(*___ref___2, ___nl__5));
#line 1405
c_rt_lib0clear(&___nl__5);
#line 1405
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 1405
if(c_rt_lib0check_true_native(___nl__4)){ goto label_15;}
#line 1405
c_rt_lib0move(&___nl__5,___get_global_const(1194));
#line 1405
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(93)));
#line 1405
c_rt_lib0move(&___nl__5, c_rt_lib0concat_add(___nl__5, ___nl__6));
#line 1405
c_rt_lib0clear(&___nl__6);
#line 1405
c_rt_lib0move(&___nl__6,___get_global_const(1269));
#line 1405
c_rt_lib0move(&___nl__5, c_rt_lib0concat_add(___nl__5, ___nl__6));
#line 1405
c_rt_lib0clear(&___nl__6);
#line 1405
c_rt_lib0delete(type_checker_priv0add_error(___ref___3, ___nl__5));
#line 1405
c_rt_lib0clear(&___nl__5);
#line 1405
goto label_15;
#line 1405
label_15:
#line 1405
c_rt_lib0clear(&___nl__4);
#line 1406
c_rt_lib0move(&___nl__4, type_checker_priv0is_known(___nl__1));
#line 1406
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 1406
if(c_rt_lib0check_true_native(___nl__4)){ goto label_30;}
#line 1407
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_none(___get_global_const(46)));
#line 1407
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(63)));
#line 1407
c_rt_lib0move(&___nl__5, c_rt_lib0hash_mk(2, ___get_global_const(1139), ___nl__6, ___get_global_const(63), ___nl__7));
#line 1407
c_rt_lib0clear(&___nl__6);
#line 1407
c_rt_lib0clear(&___nl__7);
#line 1407
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(93)));
#line 1407
c_rt_lib0delete(type_checker_priv0add_var_to_vars(___nl__5, ___nl__6, ___ref___2));
#line 1407
c_rt_lib0clear(&___nl__6);
#line 1407
c_rt_lib0clear(&___nl__5);
#line 1408
goto label_41;
#line 1408
label_30:
#line 1409
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_none(___get_global_const(45)));
#line 1409
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(63)));
#line 1409
c_rt_lib0move(&___nl__5, c_rt_lib0hash_mk(2, ___get_global_const(1139), ___nl__6, ___get_global_const(63), ___nl__7));
#line 1409
c_rt_lib0clear(&___nl__6);
#line 1409
c_rt_lib0clear(&___nl__7);
#line 1409
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(93)));
#line 1409
c_rt_lib0delete(type_checker_priv0add_var_to_vars(___nl__5, ___nl__6, ___ref___2));
#line 1409
c_rt_lib0clear(&___nl__6);
#line 1409
c_rt_lib0clear(&___nl__5);
#line 1410
goto label_41;
#line 1410
label_41:
#line 1410
c_rt_lib0clear(&___nl__4);
#line 1410
c_rt_lib0clear(&___nl__0);
#line 1410
c_rt_lib0clear(&___nl__1);
#line 1410
return NULL;
}

ImmT type_checker_priv0is_known(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
#line 1414
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(43)));
#line 1414
c_rt_lib0move(&___nl__1, ptd_system0is_known(___nl__2));
#line 1414
c_rt_lib0clear(&___nl__2);
#line 1414
c_rt_lib0clear(&___nl__0);
#line 1414
return ___nl__1;
#line 1414
c_rt_lib0clear(&___nl__1);
#line 1414
c_rt_lib0clear(&___nl__0);
#line 1414
return NULL;
}

ImmT type_checker_priv0get_function_name(ImmT ___nl__0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
ImmT ___nl__2 = NULL;
#line 1418
c_rt_lib0move(&___nl__2,___get_global_const(2));
#line 1418
c_rt_lib0move(&___nl__2, c_rt_lib0ne(___nl__0, ___nl__2));
#line 1418
if(c_rt_lib0check_true_native(___nl__2)){ goto label_5;}
#line 1418
c_rt_lib0move(&___nl__2,___get_global_const(2));
#line 1418
goto label_8;
#line 1418
label_5:
#line 1418
c_rt_lib0move(&___nl__2,___get_global_const(185));
#line 1418
c_rt_lib0move(&___nl__2, c_rt_lib0concat_new(___nl__0, ___nl__2));
#line 1418
label_8:
#line 1418
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__1));
#line 1418
c_rt_lib0clear(&___nl__0);
#line 1418
c_rt_lib0clear(&___nl__1);
#line 1418
return ___nl__2;
#line 1418
c_rt_lib0clear(&___nl__2);
#line 1418
c_rt_lib0clear(&___nl__0);
#line 1418
c_rt_lib0clear(&___nl__1);
#line 1418
return NULL;
}

ImmT type_checker_priv0get_fun_module(ImmT ___nl__0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
ImmT ___nl__2 = NULL;
#line 1422
c_rt_lib0move(&___nl__2,___get_global_const(2));
#line 1422
c_rt_lib0move(&___nl__2, c_rt_lib0eq(___nl__0, ___nl__2));
#line 1422
if(c_rt_lib0check_true_native(___nl__2)){ goto label_5;}
#line 1422
c_rt_lib0copy(&___nl__2, ___nl__0);
#line 1422
goto label_7;
#line 1422
label_5:
#line 1422
c_rt_lib0copy(&___nl__2, ___nl__1);
#line 1422
label_7:
#line 1422
c_rt_lib0clear(&___nl__0);
#line 1422
c_rt_lib0clear(&___nl__1);
#line 1422
return ___nl__2;
#line 1422
c_rt_lib0clear(&___nl__2);
#line 1422
c_rt_lib0clear(&___nl__0);
#line 1422
c_rt_lib0clear(&___nl__1);
#line 1422
return NULL;
}

ImmT type_checker_priv0get_function_def(ImmT ___nl__0,ImmT ___nl__1,ImmT ___nl__2) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
c_rt_lib0arg_val(___nl__2);
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
#line 1427
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(1092)));
#line 1427
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(1089)));
#line 1427
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__7, ___get_global_const(785)));
#line 1427
c_rt_lib0move(&___nl__6, type_checker_priv0get_fun_module(___nl__0, ___nl__7));
#line 1427
c_rt_lib0clear(&___nl__7);
#line 1427
c_rt_lib0move(&___nl__4, hash0get_value(___nl__5, ___nl__6));
#line 1427
c_rt_lib0clear(&___nl__6);
#line 1427
c_rt_lib0clear(&___nl__5);
#line 1428
c_rt_lib0move(&___nl__5, type_checker_priv0get_fun_key(___nl__1, ___nl__0));
#line 1428
c_rt_lib0move(&___nl__3, hash0get_value(___nl__4, ___nl__5));
#line 1428
c_rt_lib0clear(&___nl__5);
#line 1428
c_rt_lib0clear(&___nl__4);
#line 1428
c_rt_lib0clear(&___nl__0);
#line 1428
c_rt_lib0clear(&___nl__1);
#line 1428
c_rt_lib0clear(&___nl__2);
#line 1428
return ___nl__3;
#line 1428
c_rt_lib0clear(&___nl__3);
#line 1428
c_rt_lib0clear(&___nl__0);
#line 1428
c_rt_lib0clear(&___nl__1);
#line 1428
c_rt_lib0clear(&___nl__2);
#line 1428
return NULL;
}

ImmT type_checker_priv0check_function_exists(ImmT ___nl__0,ImmT ___nl__1,ImmT * ___ref___2,ImmT * ___ref___3) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
#line 1433
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(*___ref___2, ___get_global_const(1089)));
#line 1433
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(785)));
#line 1433
c_rt_lib0move(&___nl__4, type_checker_priv0get_fun_module(___nl__0, ___nl__5));
#line 1433
c_rt_lib0clear(&___nl__5);
#line 1434
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(*___ref___2, ___get_global_const(384)));
#line 1434
c_rt_lib0move(&___nl__5, hash0has_key(___nl__6, ___nl__4));
#line 1434
c_rt_lib0clear(&___nl__6);
#line 1434
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 1434
if(c_rt_lib0check_true_native(___nl__5)){ goto label_13;}
#line 1434
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(*___ref___2, ___get_global_const(384)));
#line 1434
c_rt_lib0move(&___nl__5, hash0get_value(___nl__6, ___nl__4));
#line 1434
c_rt_lib0clear(&___nl__6);
#line 1434
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 1434
label_13:
#line 1434
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 1434
if(c_rt_lib0check_true_native(___nl__5)){ goto label_49;}
#line 1435
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(*___ref___2, ___get_global_const(384)));
#line 1435
c_rt_lib0move(&___nl__6, hash0has_key(___nl__7, ___nl__4));
#line 1435
c_rt_lib0clear(&___nl__7);
#line 1435
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 1435
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 1435
if(c_rt_lib0check_true_native(___nl__6)){ goto label_30;}
#line 1435
c_rt_lib0move(&___nl__7,___get_global_const(794));
#line 1435
c_rt_lib0move(&___nl__7, c_rt_lib0concat_add(___nl__7, ___nl__4));
#line 1435
c_rt_lib0move(&___nl__8,___get_global_const(795));
#line 1435
c_rt_lib0move(&___nl__7, c_rt_lib0concat_add(___nl__7, ___nl__8));
#line 1435
c_rt_lib0clear(&___nl__8);
#line 1435
c_rt_lib0delete(type_checker_priv0add_error(___ref___3, ___nl__7));
#line 1435
c_rt_lib0clear(&___nl__7);
#line 1435
goto label_30;
#line 1435
label_30:
#line 1435
c_rt_lib0clear(&___nl__6);
#line 1436
c_rt_lib0move(&___nl__6,___get_global_const(384));
#line 1436
c_rt_lib0move(&___nl__6, c_rt_lib0get_ref_hash(*___ref___2, ___nl__6));
#line 1436
c_rt_lib0move(&___nl__7, c_rt_lib0get_false());
#line 1436
c_rt_lib0delete(hash0set_value(&___nl__6, ___nl__4, ___nl__7));
#line 1436
c_rt_lib0clear(&___nl__7);
#line 1436
c_rt_lib0move(&___nl__7,___get_global_const(384));
#line 1436
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___2, ___nl__7, ___nl__6));
#line 1436
c_rt_lib0clear(&___nl__7);
#line 1436
c_rt_lib0clear(&___nl__6);
#line 1437
c_rt_lib0move(&___nl__6, c_rt_lib0get_false());
#line 1437
c_rt_lib0clear(&___nl__0);
#line 1437
c_rt_lib0clear(&___nl__1);
#line 1437
c_rt_lib0clear(&___nl__4);
#line 1437
c_rt_lib0clear(&___nl__5);
#line 1437
return ___nl__6;
#line 1437
c_rt_lib0clear(&___nl__6);
#line 1438
goto label_64;
#line 1438
label_49:
#line 1438
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(*___ref___2, ___get_global_const(1092)));
#line 1438
c_rt_lib0move(&___nl__5, hash0has_key(___nl__6, ___nl__4));
#line 1438
c_rt_lib0clear(&___nl__6);
#line 1438
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 1438
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 1438
if(c_rt_lib0check_true_native(___nl__5)){ goto label_64;}
#line 1439
c_rt_lib0move(&___nl__6, c_rt_lib0get_false());
#line 1439
c_rt_lib0clear(&___nl__0);
#line 1439
c_rt_lib0clear(&___nl__1);
#line 1439
c_rt_lib0clear(&___nl__4);
#line 1439
c_rt_lib0clear(&___nl__5);
#line 1439
return ___nl__6;
#line 1439
c_rt_lib0clear(&___nl__6);
#line 1440
goto label_64;
#line 1440
label_64:
#line 1440
c_rt_lib0clear(&___nl__5);
#line 1441
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(*___ref___2, ___get_global_const(1092)));
#line 1441
c_rt_lib0move(&___nl__6, hash0get_value(___nl__7, ___nl__4));
#line 1441
c_rt_lib0clear(&___nl__7);
#line 1441
c_rt_lib0move(&___nl__7, type_checker_priv0get_fun_key(___nl__1, ___nl__0));
#line 1441
c_rt_lib0move(&___nl__5, hash0has_key(___nl__6, ___nl__7));
#line 1441
c_rt_lib0clear(&___nl__7);
#line 1441
c_rt_lib0clear(&___nl__6);
#line 1441
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 1441
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 1441
if(c_rt_lib0check_true_native(___nl__5)){ goto label_93;}
#line 1442
c_rt_lib0move(&___nl__6,___get_global_const(1094));
#line 1442
c_rt_lib0move(&___nl__7, type_checker_priv0get_function_name(___nl__0, ___nl__1));
#line 1442
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__7));
#line 1442
c_rt_lib0clear(&___nl__7);
#line 1442
c_rt_lib0move(&___nl__7,___get_global_const(1095));
#line 1442
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__7));
#line 1442
c_rt_lib0clear(&___nl__7);
#line 1442
c_rt_lib0delete(type_checker_priv0add_error(___ref___3, ___nl__6));
#line 1442
c_rt_lib0clear(&___nl__6);
#line 1443
c_rt_lib0move(&___nl__6, c_rt_lib0get_false());
#line 1443
c_rt_lib0clear(&___nl__0);
#line 1443
c_rt_lib0clear(&___nl__1);
#line 1443
c_rt_lib0clear(&___nl__4);
#line 1443
c_rt_lib0clear(&___nl__5);
#line 1443
return ___nl__6;
#line 1443
c_rt_lib0clear(&___nl__6);
#line 1444
goto label_93;
#line 1444
label_93:
#line 1444
c_rt_lib0clear(&___nl__5);
#line 1445
c_rt_lib0move(&___nl__5, c_rt_lib0get_true());
#line 1445
c_rt_lib0clear(&___nl__0);
#line 1445
c_rt_lib0clear(&___nl__1);
#line 1445
c_rt_lib0clear(&___nl__4);
#line 1445
return ___nl__5;
#line 1445
c_rt_lib0clear(&___nl__5);
#line 1445
c_rt_lib0clear(&___nl__4);
#line 1445
c_rt_lib0clear(&___nl__0);
#line 1445
c_rt_lib0clear(&___nl__1);
#line 1445
return NULL;
}

ImmT type_checker_priv0add_error(ImmT * ___ref___0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__1);
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
#line 1449
c_rt_lib0move(&___nl__2,___get_global_const(18));
#line 1449
c_rt_lib0move(&___nl__2, c_rt_lib0get_ref_hash(*___ref___0, ___nl__2));
#line 1449
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(786)));
#line 1449
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(132)));
#line 1449
c_rt_lib0move(&___nl__6,___get_global_const(1));
#line 1449
c_rt_lib0move(&___nl__6, c_rt_lib0unary_minus(___nl__6));
#line 1449
c_rt_lib0move(&___nl__7, c_rt_lib0ov_mk_none(___get_global_const(112)));
#line 1449
c_rt_lib0move(&___nl__3, c_rt_lib0hash_mk(5, ___get_global_const(137), ___nl__1, ___get_global_const(134), ___nl__4, ___get_global_const(132), ___nl__5, ___get_global_const(179), ___nl__6, ___get_global_const(63), ___nl__7));
#line 1449
c_rt_lib0clear(&___nl__4);
#line 1449
c_rt_lib0clear(&___nl__5);
#line 1449
c_rt_lib0clear(&___nl__6);
#line 1449
c_rt_lib0clear(&___nl__7);
#line 1449
c_rt_lib0delete(array0push(&___nl__2, ___nl__3));
#line 1449
c_rt_lib0clear(&___nl__3);
#line 1449
c_rt_lib0move(&___nl__3,___get_global_const(18));
#line 1449
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__3, ___nl__2));
#line 1449
c_rt_lib0clear(&___nl__3);
#line 1449
c_rt_lib0clear(&___nl__2);
#line 1449
c_rt_lib0clear(&___nl__1);
#line 1449
return NULL;
}

ImmT type_checker_priv0add_warning(ImmT * ___ref___0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__1);
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
#line 1453
c_rt_lib0move(&___nl__2,___get_global_const(113));
#line 1453
c_rt_lib0move(&___nl__2, c_rt_lib0get_ref_hash(*___ref___0, ___nl__2));
#line 1453
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(786)));
#line 1453
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(132)));
#line 1453
c_rt_lib0move(&___nl__6,___get_global_const(1));
#line 1453
c_rt_lib0move(&___nl__6, c_rt_lib0unary_minus(___nl__6));
#line 1453
c_rt_lib0move(&___nl__7, c_rt_lib0ov_mk_none(___get_global_const(177)));
#line 1453
c_rt_lib0move(&___nl__3, c_rt_lib0hash_mk(5, ___get_global_const(137), ___nl__1, ___get_global_const(134), ___nl__4, ___get_global_const(132), ___nl__5, ___get_global_const(179), ___nl__6, ___get_global_const(63), ___nl__7));
#line 1453
c_rt_lib0clear(&___nl__4);
#line 1453
c_rt_lib0clear(&___nl__5);
#line 1453
c_rt_lib0clear(&___nl__6);
#line 1453
c_rt_lib0clear(&___nl__7);
#line 1453
c_rt_lib0delete(array0push(&___nl__2, ___nl__3));
#line 1453
c_rt_lib0clear(&___nl__3);
#line 1453
c_rt_lib0move(&___nl__3,___get_global_const(113));
#line 1453
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__3, ___nl__2));
#line 1453
c_rt_lib0clear(&___nl__3);
#line 1453
c_rt_lib0clear(&___nl__2);
#line 1453
c_rt_lib0clear(&___nl__1);
#line 1453
return NULL;
}


static ImmT ___const__[2];
static int ___const_init__ = 1;
void type_checker0__const__init(){
if(!___const_init__) nl_die();
___const_init__ = 0;
__const__f = &___const__[1];


for(int i=0;i<1;++i) ___const__[i] = NULL;
c_rt_lib0register_const(___const__, 1);
}
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
